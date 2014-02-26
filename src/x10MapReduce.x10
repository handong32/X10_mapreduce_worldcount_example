/***************************************************************
 * Han Dong
 * An x10 preliminary implementation of map reduce through
 * a simple word counting application.
 **************************************************************/
import x10.io.Console;
import x10.io.*;
import x10.lang.*;
import x10.util.*;

class x10MapReduce
{
   //used when deciding what portion of data should be copied to what Place
   global static val s:String = "abcdefghijklmnopqrstuvwxyz";
   
   //used to store data that is copied from Place to Place
   var data: Rail[Pair[String, Int]];

   //the initial data structure to hold words
   var gr: GrowableRail[Pair[String, Int]]();

   //data structure that holds the bounds of growable rail, each element has a startIndex and endIndex
   var bData: GrowableRail[MetaData]();

   //the actual file data being passed in
   var fileData: String;

   //used when copying data from Place to Place to specify locations
   var copyCounter:Int;

   //the size to make the data rail for copying
   var dataRailLength:Int;

   /*********************************************************
    * Constructor that initializes variables
    *
    *
    ********************************************************/
   public def this()
   {
      gr = new GrowableRail[Pair[String, Int]]();
      bData = new GrowableRail[MetaData](Place.MAX_PLACES);
      fileData = "";
      copyCounter = 0;
      dataRailLength = 0;
   }

   /*******************************************************
    * Returns copyCounter
    *
    *
    *******************************************************/
   public def getCopyCounter()
   {
      return copyCounter;
   }

   /******************************************************
    * Sets the copyCounter with a number
    * to indicate the next element to copy
    * data to, used in shuffling
    *****************************************************/
   public def setCopyCounter(i:Int)
   {
      this.copyCounter += i;
   }

   /***************************************************
    * Sets the string data
    * for parsing and mapping
    *
    ***************************************************/
   public def setData(d: String)
   {
      this.fileData = d;
      //Console.OUT.println("Place: "+here.id);
      //Console.OUT.println(this.fileData);
   }

   /******************************************************
    * Returns the length of the 
    * data rail that is the destination to be copied to
    *
    *****************************************************/
   public def getDataRailLength()
   {
      //Console.OUT.println("Place: "+here.id);
      return this.dataRailLength;
   }
   
   /****************************************************
    * Sets the length of the
    * data rail that is the destination
    * to be copied to
    ****************************************************/
   public def setDataRailLength(i:Int)
   {
      this.dataRailLength += (i+1);
   }

   /******************************************************
    * Initializes the data Rail
    * to the specified size;
    *
    ******************************************************/
   public def setRailData()
   {
      data = Rail.make[Pair[String, Int]](dataRailLength);
   }

   /*************************************************************************************
    * Prints out the final sorted data
    * in data Rail
    *
    * TODO still need to fix the linked list implementation, can't seem to print it out
    *************************************************************************************/
   public def print()
   {
      Console.OUT.println("Place: "+here.id);
      finish for((j) in 0..(data.length()-1))
      {
         if(data(j).first != null) {
            Console.OUT.println(data(j).first+" "+data(j).second);
         }
      }      
   }

   public def printGR()
   {
      Console.OUT.println("Place: "+here.id);
      finish for((j) in 0..(gr.length()-1))
      {
         Console.OUT.println(gr(j).first+" "+gr(j).second);
      }
   }

   /*********************************************************
    * The mapping function that splits the fileData
    * and parses each word, then maps it to each gr, the 
    * GrowableRail
    *********************************************************/
   public def map()
   {
      val tmpList = this.fileData.split("\n");
      
      //splitted on newline
      for((a) in 0..(tmpList.length()-1))
      {
         val tmpList2 = tmpList.apply(a).split(" ");

         //splits on white space
         for((b) in 0..(tmpList2.length()-1))
         {
            //removes extra spaces and other things
            val s = prepareWord(tmpList2.apply(b));
            if(s.length() > 0)
            {
               //adds to growable rail
               emit(s, 1);
            } 
         }
      }

      //calls an intermediate MergeSort to sort data
      intermediateMergeSort();

      //calls an intermediate merge to remove duplicates
      intermediateMerge();
      //printGR();
   }

   public def merge()
   {
      var tmp: Rail[Pair[String, Int]] = Rail.make[Pair[String, Int]](this.dataRailLength);
      var ele:Int = 0;
      var counter:Int = 0;

      //Console.OUT.println("Place: "+here.id);
      finish for((j) in 0..(data.length()-2))
      {
         if(data(j).first.equals(data(j+1).first))
         {
            counter += data(j).second;
         }
         else
         {
            val s = data(j).first;
            tmp.set(Pair[String, Int](s, (data(j).second+counter)), ele);
            //Console.OUT.println(s+" "+j+" "+data(j).second+" "+counter); 
            ele ++;
            counter = 0;
         }         
      }

      tmp.set(Pair[String, Int](data(data.length()-1).first, data(data.length()-1).second+counter), ele);
      this.data = tmp;
   }

   public def intermediateMerge()
   {
      var tmp: GrowableRail[Pair[String, Int]] = new GrowableRail[Pair[String, Int]]();
      var counter:Int = 0;

      finish for((j) in 0..(gr.length()-2))
      {
         if(gr(j).first.equals(gr(j+1).first))
         {
            counter += gr(j).second;
         }
         else
         {
            val s = gr(j).first;
            tmp.add(Pair[String, Int](s, (gr(j).second+counter)));
	    counter = 0;
         }         
      }
      tmp.add(Pair[String, Int](gr(gr.length()-1).first, gr(gr.length()-1).second+counter));

      this.gr = tmp;      
   }

   /*********************************************************
    * Adds the word and a linkedlist 
    *
    *
    *********************************************************/
   public def emit(s: String, i: Int)
   {
      gr.add(Pair[String, Int](s, i));
   }

   /****************************************************************
    * Passes to MergeSort function with growable rail
    * sorts the rail and returns it back
    * TODO does not handle duplicates yet, issues with linked list
    ****************************************************************/
   public def intermediateMergeSort()
   {
      val ms = new MergeSort(gr);
      ms.sort();
      this.gr = ms.getVariable();
   }

   /***********************************************************************
    * Figures out the boundary for each place, for example:
    * Place 0:
    * words before letter e: 0 to 31 - Copies 0 to 31 to Rail at Place 0
    * words before letter j: 32 to 50 - Copies 32 to 50 to Rail at Place 1
    * etc..
    ***********************************************************************/
   public def boundaryData()
   {
      var max:Int = Place.MAX_PLACES;
      var counter:Int = 26 / max; //counter keeps track of how many jumps to do, dependent on num of Places
      var index:Int = 0;
      var railCount:Int = 0;  
      var bool: Boolean = false;

      //Console.OUT.println("Place: "+here.id);
     
      //loops through all the places
      finish for(var i:Int = 0; i < max; i ++)
      {
         index += counter; 

         //if we're at last place, then it should be all words to 'z' from the last known railCount
         if(i == max-1)
         {
            //Console.OUT.println("i: "+i+" z: "+railCount+" "+(this.gr.length()-1));
            bData.add(new MetaData(railCount, (this.gr.length()-1)));
            break;
         }
         else 
         {
            //loops through remainder of gr, GrowableRail
            for(var j:int = 0; j < this.gr.length(); j++)
            {
               //if we find the word that is larger than the specified character in s, the global static variable at the index 
               if(this.gr.apply(j).first.charAt(0) > s.charAt(index))
               {
                  bool = true;
                  if(railCount <= (j-1))
                  {
                     //add it to bData, railCount to j-1
                     bData.add(new MetaData(railCount, (j-1)));
                     //Console.OUT.println("i: "+i+" "+this.gr(j).first.charAt(0)+": "+railCount+" "+(j-1));
                  }
                  else
                  {
                     //otherwise, nothing to copy so, 0 0
                     bData.add(new MetaData(0, 0));
                     //Console.OUT.println("i: "+i+" "+this.gr(j).first.charAt(0)+": 0 0");
                  }
                  //set railCount to j for next place's boundary data
                  railCount = j;
                  break;
               }
            }

            if(bool == true)
            {
               bool = false;
            }
            else
            {
               bData.add(new MetaData(0, 0));
            }
         }
      }
   }
   
  /**
   * prepareWord
   *
   * Removes white space, converts upper case to lower case 
   */
   public def prepareWord(word: String)
   {
      var returnStr: String = "";
      for((i) in 0..(word.length()-1))
      {
         if(word.charAt(i).isLetterOrDigit() == false)
         {
         }
         else if(word.charAt(i).isUpperCase())
         {
            returnStr += word.charAt(i).toLowerCase();
         }
         else
         {
            returnStr += word.charAt(i);
         }
      }
      return returnStr;
   }

   /*********************************************************
    * Sorts the final Rail that is shuffled
    *
    *
    *********************************************************/
   public def sort()
   {
      val ms = new MergeSortRail(data);
      ms.sortRail();
      this.data = ms.getVariable();
   }

   /*********************************************************
    * Calls the sorting function in Place
    *
    *
    *********************************************************/
   public static def sortData(nodes: PlaceLocalHandle[x10MapReduce])
   {
      finish for((i) in 0..(Place.MAX_PLACES-1))
      {
         async(Place.places(i))
         {
            nodes().sort();
         }
      }
  
      finish for((i) in 0..(Place.MAX_PLACES-1))
      {
         at(Place.places(i))
         {
            //nodes().print();
         }
      }

      finish for((i) in 0..(Place.MAX_PLACES-1))
      {
         async(Place.places(i))
         {
            nodes().merge();
         }
      }
   }
     
   /*********************************************************
    * Prints the data in each Place
    *
    *
    *********************************************************/
   public static def printData(nodes: PlaceLocalHandle[x10MapReduce])
   {
      for((i) in 0..(Place.MAX_PLACES-1))
      {
         at(Place.places(i))
         {
            nodes().print();
         }
      }
   }

   /*********************************************************
    * Moves data around by using ValRail.copyTo()
    *
    * TODO currently this is still serial, needs to converted
    *      to more parallel. Also copyTo takes a long while,
    *      needs to be more optimized
    *********************************************************/
   public static def shuffle(nodes: PlaceLocalHandle[x10MapReduce])
   {
      //calculate the boundary data for each place first
      finish for((i) in 0..(Place.MAX_PLACES-1))
      {
         async(Place.places(i))
         {
            nodes().boundaryData();
         }
      }

      //calculates the size that the data rail should be
      finish for((i) in 0..(Place.MAX_PLACES-1))
      {       
         at(Place.places(i))
         {
            for((j) in 0..(Place.MAX_PLACES-1))
            {
               val start:Int = nodes().bData(j).getStart();
               val diff:Int = nodes().bData(j).getDiff();
               
               at(Place.places(j))
               {
                  if(start == 0 && diff == 0)
                  {
                  }
                  else
                  {
                     nodes().setDataRailLength(diff);   
                  }
               } 
            }
         }
      }
      
      //initializes the data rail structure in each Place
      finish for((i) in 0..(Place.MAX_PLACES-1))
      {
         async(Place.places(i))
         {
            nodes().setRailData();
         }
      }

      //shuffling data
      finish for((i) in 0..(Place.MAX_PLACES-1))
      {
         at(Place.places(i))
         {
            //converts GrowableRail to a ValRail
            val r = nodes().gr.toValRail();

            //gets boundary data for place 0
            val t = nodes().bData;
            //Console.OUT.println("Copying at: "+i);
            
            finish for((j) in 0..(Place.MAX_PLACES-1))
            {
               //Console.OUT.println(j+": "+t(j).getStart()+" "+t(j).getEnd());

               //gets starting index to copy from boundary data for Place j
               val start:Int = t(j).getStart();
               val diff:Int = t(j).getDiff();

               //copies data from r, which is the Valrail of Place i, to data Rail of place J
               at(Place.places(j))
               {
                  //Console.OUT.println(start+" "+diff);
                  if(start == 0 && diff == 0)
                  {
                  }
                  else
                  {
                     r.copyTo(start, nodes().data, nodes().getCopyCounter(), (diff+1));
                     nodes().setCopyCounter((diff+1));
                  }
               }
            }
            //Console.OUT.println("End copying at: "+i);
         }
      }
   }

   /*********************************************************
    * Calls mapping function for each Place
    *
    *
    *********************************************************/
   public static def map(nodes: PlaceLocalHandle[x10MapReduce])
   {
      finish for((i) in 0..(Place.MAX_PLACES-1))
      {
         async(Place.places(i))
         {
            nodes().map();
         }
      }
   }

   /*********************************************************
    * Separates data and splits it to different Places
    *
    *
    *********************************************************/
   public static def distributeData(nodes: PlaceLocalHandle[x10MapReduce], s: String)
   {
      val counter: Int = s.length() / Place.MAX_PLACES;
      var start: Int = 0;
      var end: Int = 0;
      
      for((i) in 0..(Place.MAX_PLACES-1))
      {
         at(Place.places(i))
         {
            nodes().setData(s.substring((i*counter), ((i*counter)+counter)));
         }
      }
   }

   public static def main(args:Rail[String]):void
   {
      val nodes = PlaceLocalHandle.make[x10MapReduce](Dist.makeUnique(), ()=>new x10MapReduce());
 
      var s: StringBuilder = new StringBuilder();

      try
      {
         val fp = new File("bible2.txt");
         val fr = fp.openRead();

         while(true)
         {
            s.add(Marshal.LINE.read(fr));
         }
      }
      catch(Exception)
      {
         Console.OUT.println("End file read.");
      }
      distributeData(nodes, s.result());
      Console.OUT.println("Finished distribution of file.");

      //val start = System.nanoTime();

      map(nodes);
      Console.OUT.println("Done mapping.");

      shuffle(nodes);
      Console.OUT.println("Done shuffle.");

      sortData(nodes);
      Console.OUT.println("Done sort.");

      //val time_taken = System.nanoTime() - start;
      //Console.OUT.println("Time taken: "+time_taken+" ms");

      printData(nodes);
      //Console.OUT.println("Done print data.");
   }
}
