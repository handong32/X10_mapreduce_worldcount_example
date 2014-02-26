/*********************************************************
 * Han Dong
 * MetaData.x10
 *
 * A class that just holds the start index and end
 * index that is used in boundary data to specify
 * the starting and end indexes that should be copied
 * from each Place's GrowableRail
 *********************************************************/
import x10.io.Console;

public class MetaData
{
   var startIndex:Int;
   var endIndex:Int;

   public def this(i:Int, j:Int)
   {
      startIndex = i;
      endIndex = j;  
   }

   public def getStart()
   {
      return startIndex;
   }

   public def getEnd()
   {
      return endIndex;
   }

   public def getDiff()
   {
      return (endIndex - startIndex);
   }
}
