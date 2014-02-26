/*********************************************************
 * Han Dong
 * LinkedList.x10
 *
 * A simple linked list in x10, needs more work.
 *********************************************************/
import x10.io.Console;

public class LinkedList
{
   var head: Node;

   public def this()
   {
      head = null;
   }

   public def isEmpty()
   {
      return head == null;
   }

   public def insert(num: Int)
   {
      val tmp: Node = new Node(num);
      tmp.next = head;
      head = tmp;
   }
  
   public def insert(list: LinkedList)
   {
      var current:Node = head;
      while(true)
      {
         Console.OUT.println("current: "+current.getNum());
         if(current.next == null)
         {
            current.next = list.head;
            break;
         }
         else
         {
            current = current.next;
         }
      }
   }   
}
