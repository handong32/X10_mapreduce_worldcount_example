/*********************************************************
 * Han Dong
 * Node.x10
 *
 * A simple Node used in LinkedLists
 *********************************************************/
public class Node
{
   val num: Int;
   var next: Node;

   public def this(a: Int)
   {
      num = a;
      next = null;
   }

   public def getNum()
   {
      return num;
   }

   public def getNext()
   {
      return next;
   }
}
