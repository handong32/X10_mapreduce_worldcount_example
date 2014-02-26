import x10.io.Console;
import x10.io.*;
import x10.lang.*;
import x10.util.*;

public class CompareTo
{
   public static def strcmp(var s1:String, var s2:String)
   {
      var counter:Int = 0;
      val a = s1.length();
      val b = s2.length();

      if(a < b)
      {
         for((i) in 0..(a-1))
         {
            if(s1.charAt(i) < s2.charAt(i))
            {
               counter = -1;
               break;
            }
            else if(s1.charAt(i) > s2.charAt(i))
            {
               counter = 1;
               break;
            }
            else
            {
               counter = 0;
            }
         }
      }
      else
      {
         for((i) in 0..(b-1))
         {
            if(s2.charAt(i) < s1.charAt(i))
            {
               counter = 1;
               break;
            }
            else if(s2.charAt(i) > s1.charAt(i))
            {
               counter = -1;
               break;
            }
            else
            {
               counter = 0;
            }
         }
      }

      if(counter == 0)
      {
         if(a < b)
         {
            counter = -1;
         }
         else if(b > a)
         {
            counter = 1;
         }
         else
         {
            counter = 0;
         }
      }

      return counter;
   }
}
