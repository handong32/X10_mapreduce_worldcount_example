/*********************************************************
 * Han Dong
 * MergeSort.x10
 *  
 * A simple merge sort done in x10
 *********************************************************/
import x10.io.Console;
import x10.io.*;
import x10.lang.*;
import x10.util.*;

public class MergeSort
{
   var tmp: GrowableRail[Pair[String, Int]]();
   var size: Int;
 
   public def this(gr:GrowableRail[Pair[String, Int]])
   {
      this.tmp = gr;
      this.size = gr.length();
   }
    
   public def sort()
   {
      var aux: GrowableRail[Pair[String, Int]] = new GrowableRail[Pair[String, Int]](this.size);
      mergeSort(tmp, aux, 0, this.size);
   }
   
   public def mergeSort(tmp:GrowableRail[Pair[String, Int]],
                        aux:GrowableRail[Pair[String, Int]],
                        low: Int, high: Int)
   {
      if(high - low <= 1)
      {
         return 0;
      }
      
      var middle: Int = low + (high - low) / 2;
      mergeSort(tmp, aux, low, middle);
      mergeSort(tmp, aux, middle, high);
      merge(tmp, aux, low, middle, high);
      
      return 0;
   }

   public def merge(tmp:GrowableRail[Pair[String, Int]],
                    aux:GrowableRail[Pair[String, Int]],
                    low: Int, middle: Int, high: Int)
   {
      var i:Int = low;
      var j:Int = middle;

      for(var k:Int = low; k < high; k++)
      {
         if(i == middle)
         {
            aux.set(tmp.apply(j++), k);
         }
         else if(j == high)
         {
            aux.set(tmp.apply(i++), k);
         }
         else if((CompareTo.strcmp(tmp.apply(j).first, tmp.apply(i).first)) == -1)
         {
            aux.set(tmp.apply(j++), k);
         }
         else
         {
            aux.set(tmp.apply(i++), k);
         }
      }

      for(var k:Int = low; k < high; k++)
      {
         tmp.set(aux.apply(k), k);
      }
   }

   public def getVariable()
   {
      return this.tmp;
   }
}

