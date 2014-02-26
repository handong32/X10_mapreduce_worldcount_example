/********************************************************************************
*** Han Dong
*** WordCount.txt
***
*** A simple implementation of Map Reduce 
*** framework in x10 to do simple word counting.
************************************************************************************/
import x10.io.Console;
import x10.io.*;
import x10.util.*;
import x10.lang.*;

public class WordCount
{
	val hash: HashMap[String, Int]!; 	//hash map in this place
	var fileName: String;				//file name to read in data
	var fileData: String;				//file contents

	/**
	 * Constructor that initializes instance variables
	 *
	 *
	 */
	public def this()
	{
		hash = new HashMap[String, Int]();
		fileName = "";
		fileData = "";
	}

	/**
	 * setFileName
	 *
	 * sets fileName variable
	 */
    public def setFileName(file:String)
    {
		this.fileName = file;
    }

	/**
	 * getFileName
	 *
	 * gets fileName variable
	 */
	public def getFileName()
	{
		return this.fileName;
	}

	/**
	 * clearHashMap
	 *
	 * clears hash map of data
	 */
	public def clearHashMap()
	{
		this.hash.clear();
	}

	/**
	 * readData
	 *
	 * reads in data and stores it.
	 */
    public def readData()
    {
        var s: StringBuilder = new StringBuilder();

	Console.OUT.println("Reading "+this.fileName+"....");
        try
        {
		val fp = new File(this.fileName), fr = fp.openRead();
		while(true)
		{
			s.add(Marshal.LINE.read(fr));
		}
	}
	catch(Exception)
	{
		//EOF
	}
	Console.OUT.println("Finish reading "+this.fileName);
	this.fileData = s.toString();
    }

	/**
	 * map
	 *
	 * Mapping function, generates key, value pairs for each word in document
	 */
	public def map()
    {
        val tempList = this.fileData.split("\n");

        for((a) in 0..(tempList.length()-1))
        {
			async(here)
			{
                val tempList2 = tempList.apply(a).split(" ");
			 	for((b) in 0 ..(tempList2.length()-1))
        	    {
					//stores intermediate keys to be stored
					emit(prepareWord(tempList2.apply(b)), 1);
				}
			}
	    }
    }

	/**
	 * getHashMap
	 *
	 * returns the hash map for this place
	 */
	public def getHashMap()
	{
		return this.hash;
	}

	/**
	 * emit
	 *
	 * tries to insert key, value pair from map into hash map
	 */
   	 public def emit(key:String, value: Int)
	 {
	 	insert(key, value);
    	 }

	/**
	 * prepareWord
	 *
	 * Removes white space, converts upper case to lower case
	 */
	public def prepareWord(word: String)
	{
		var returnStr: String = "";
		for(var i:Int = 0; i < word.length(); i++)
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

	/**
	 * insert
	 *
	 * tries to insert key,value into hash map
	 */
	public def insert(key:String, value:Int)
	{
		if(this.hash.containsKey(key) == true)
		{
				add(key, value);
		}
		else
		{
			this.hash.put(key, value);
		}
	}

	/**
	 * add
	 *
	 * Increases value of duplicate key pair
	 */
	public def add(key: String, value:Int)
	{
		var v: Int = this.hash.get(key).value();
		v += value;
		this.hash.remove(key);
		this.hash.put(key, v);
	}

	/**
   	 * removeKey
 	 *
	 * removes specified key 
	 */
	public def removeKey(key: String)
	{
		this.hash.remove(key);
	}

	/**
	 * getValue
	 *
	 * gets value of key
	 */
	public def getValue(key: String)
	{
		return this.hash.get(key);
	}

	/**
	 * getSize
	 *
	 * gets size of hash map
	 */
	public def getSize()
	{
		return this.hash.entries().size();
	}

	/**
	 * getEntry
	 *
	 * gets entry from hash map of specific index
	 */
	public def getEntry(j: Int)
	{
		var counter: Int = 0;
		var tmp:x10.util.Map.Entry[x10.lang.String, x10.lang.Int] = null;
		for(e in this.hash.entries())
		{
			if(j == counter)
			{
				tmp = e;
				break;
			}
			counter++;
		}
		return tmp;
	}

	/**
	 * tosstring
	 *
	 * prints out all key and value pairs
	 */
	public def tosstring()
	{
		for(e in this.hash.entries())
		{
			Console.OUT.println(here.id+" "+e.getKey() + " " + e.getValue());
		}
	}

	/**
	 * setHashTables
	 *
	 * sets the file names for all hashtables in different places
	 */
	public static def setHashTables(fileList: ArrayList[String], hashtables: PlaceLocalHandle[WordCount])
	{
		finish for(var i:Int = 0; i < Place.MAX_PLACES; i++)
		{
			val f = fileList.get(i);
			async(Place.places(i))
			{
				hashtables().setFileName(f);
			}
		}
	}

	/**
	 * map
	 *
	 * calls mapping function for each hashtable at each place
	 */
	public static def map(hashtables: PlaceLocalHandle[WordCount])
	{
		finish for(var i:Int = 0; i < Place.MAX_PLACES; i++)
		{
				//in parallel
				async(Place.places(i))
				{
						//hashtable at this place
						hashtables().map();
				}
		}
	}

	/*
	* Reduce
	*  0   1   2   3   4   5   6   7
	*  0   1   2   3
	*  0   1
	*/
	public static def reduce(hashtables: PlaceLocalHandle[WordCount], places:Int)
	{
		var i:Int = 0;
		val counter = places / 2;

		if(places <= 1)
		{
			return;
		}

		//from starting index half of number of places to max places
		finish for(i = counter; i < places; i++)
		{
			async(Place.places(i))
			{
				//gets index of place to merge to
				val j = here.id-counter;

				for(e in hashtables().getHashMap().entries())
				{
					val key = e.getKey();
					val value = e.getValue();

					//merges to specified place
					async(Place.places(j))
					{
						hashtables().insert(key, value);
					}
				}
			}
		}

		reduce(hashtables, (places/2));
	}

	/**
	 * merge
	 * 0 1 2 3 4 5 6 7 
	 * 0
	 */
	public static def merge(hashtables: PlaceLocalHandle[WordCount], places:Int)
	{
		var i:Int = 0;

		//for place 1 to max places
		finish for(i = 1; i < places; i++)
		{
			//spawns activities for each place
			async(Place.places(i))
			{
				//for each entry in each hashtable of each place
				for(e in hashtables().getHashMap().entries())
				{	
					val key = e.getKey();
					val value = e.getValue();

					//merges into place 0
					async(Place.places(0))
					{
						hashtables().insert(key, value);
					}
				}
			}
		}
	}

	/*
	* outputFile
	*
	* prints out data to file
	*/
	public static def outputFile(ss: String, hashtables: PlaceLocalHandle[WordCount])
	{
		try
		{
			val out1 = new FileWriter(new File(ss));
			at(Place.places(0))
			{
				for(e in hashtables().getHashMap().entries())
				{
					val a = e.getKey();
					val b = e.getValue();
					val s = a+" "+b+" "+"\n";
					out1.write(s.bytes());
				}
				out1.close();
			}
		}
		catch (Exception)
		{
				Console.OUT.println("Error\n");
		}
	}
	public static def placeCastHack[T](x:T) = x as T!;

	public static def main(args:Rail[String]):void
	{
		var time: long = 0;
		var i:int = 0;
		val fileList = new ArrayList[String]();
		val hashList = new ArrayList[HashMap[String, Int]]();
		val hashtables = PlaceLocalHandle.make[WordCount](Dist.makeUnique(), ()=>new WordCount());

		//opens fileList.txt to read in all files
		try
		{
			val f = new File("fileList.txt");
			val fr = f.openRead();
			while(true)
			{
				val s = Marshal.LINE.read(fr);
				fileList.add(s.substring(0, s.length()-1));
			}
		}
		catch (Exception)
		{
			//EOF
		}

		//sets name files
		setHashTables(fileList, hashtables);
		//reads in data for each place
 		finish for(i = 0; i < Place.MAX_PLACES; i++)
		{
			at(Place.places(i))
			{
					hashtables().readData();
			}
		}

		Console.OUT.println("Done reading\nStarting Map and Reduce..\n");
		
		//single place merge
		time = - System.nanoTime();
		map(hashtables);
		merge(hashtables, Place.MAX_PLACES);
		time += System.nanoTime();

        	Console.OUT.println("Time (parallel, single place merge) = " + (time/(1000*1000)) + " ms");

		hashtables().removeKey(" ");
		outputFile("singlePlaceMerge.txt", hashtables);
		
		//resets timer and hash maps
		time = 0;
		finish for(i = 0; i < Place.MAX_PLACES; i++)
		{
				async(Place.places(i))
				{
					hashtables().clearHashMap();
				}
		}

		//global reduction merge
		time = - System.nanoTime();
		map(hashtables);
		reduce(hashtables, Place.MAX_PLACES);
		time += System.nanoTime();

        	Console.OUT.println("Time (parallel, global reduction merge) = " + (time/(1000*1000)) + " ms");

		hashtables().removeKey(" ");		
		outputFile("globalReductionMerge.txt", hashtables);
	}
}
