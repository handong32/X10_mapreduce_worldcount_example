/*********************************************************
 * Han Dong
 * MergeSortRail.x10
 *
 * Another merge sort, but for rails
 * TODO make it more general for multiple data structures
 *********************************************************/
import x10.io.Console;
import x10.io.*;
import x10.lang.*;
import x10.util.*;

public class MergeSortRail
{
   var size: Int;
   var tmpRail: Rail[Pair[String, Int]];
  
   public def this(t:Rail[Pair[String, Int]])
   {
      this.size = t.length();
      this.tmpRail = t;
   }
   
   public def sortRail()
   {
      var aux: Rail[Pair[String, Int]] = Rail.make[Pair[String, Int]](this.size);
      mergeSortRail(tmpRail, aux, 0, this.size);
   }
   
   public def mergeSortRail(tmpRail:Rail[Pair[String, Int]],
                        aux:Rail[Pair[String, Int]],
                        low: Int, high: Int)
   {
      if(high - low <= 1)
      {
         return 0;
      }

      var middle: Int = low + (high - low) / 2;
      mergeSortRail(tmpRail, aux, low, middle);
      mergeSortRail(tmpRail, aux, middle, high);
      mergeRail(tmpRail, aux, low, middle, high);

      return 0;
   }

   public def mergeRail(tmpRail:Rail[Pair[String, Int]],
                    aux:Rail[Pair[String, Int]],
                    low: Int, middle: Int, high: Int)
   {
      var i:Int = low;
      var j:Int = middle;

      for(var k:Int = low; k < high; k++)
      {
         if(i == middle)
         {
            aux.set(tmpRail(j++), k);
         }
         else if(j == high)
         {
            aux.set(tmpRail(i++), k);
         }
         else if((CompareTo.strcmp(tmpRail(j).first, tmpRail(i).first)) == -1)
         {
            aux.set(tmpRail(j++), k);
         }
         else
         {
            aux.set(tmpRail(i++), k);
         }
      }

      for(var k:Int = low; k < high; k++)
      {
         tmpRail.set(aux(k), k);
      }
   }

   public def getVariable()
   {
      return tmpRail;
   }
}

