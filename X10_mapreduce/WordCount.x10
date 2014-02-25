package com.markupartist.android.widget;

import x10.io.Console;
import x10.io.*;
import x10.util.*;
import x10.lang.*;

public class WordCount
{
	//globla hashmap
	global val hash = PlaceLocalHandle.make[HashMap[String, Int]](Dist.makeUnique(), ()=>new HashMap[String, Int]());

	public def this(file:String)
	{
		this.readData(file);
	}

	public def readData(file:String)
	{
		var s: String = "";

		try
		{
			val f1 = new File(file);
			for(line in f1.lines())
			{
				s += line;
			}
		}
		catch (Exception)
		{
			Console.OUT.println("Error\n");
		}
		this.map(s);
	}

	/*
	 * Mapper in map reduce
	 *
	 */
	global def map(file:String)
	{
		val tempList = file.split("\n");

		for((a) in 0..(tempList.length()-1))
		{
			val tempList2 = tempList.apply(a).split(" ");
			for((b) in 0 ..(tempList2.length()-1))
			{
				emit(prepareWord(tempList2.apply(b)), 1);
			}
		}
	}

	global def emit(key:String, value: Int)
	{
		this.insert(key, value);
	}

	// cleaning up the words
	global def prepareWord(word: String)
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

	global def insert(key:String, value:Int)
	{
		if(hash().containsKey(key) == true)
		{
			add(key, value);
		}
		else
		{
			hash().put(key, value);
		}
	}

	global def add(key: String, value:Int)
	{
		var v: Int = hash().get(key).value();
		v += value;
		hash().remove(key);
		hash().put(key, v);
	}

	global def getValue(key: String)
	{
		return hash().get(key);
	}

	global def getSize()
	{
		return hash().entries().size();
	}

	global def getEntry(j: Int)
	{
		var counter: Int = 0;
		var tmp:x10.util.Map.Entry[x10.lang.String, x10.lang.Int] = null;
		for(e in hash().entries())
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

	public static def placeCastHack[T](x:T) = x as T!;

	public static def main(args:Rail[String]):void
	{
		var counter: Int = 0;
		var counter2:int = 1;
		var time: long = 0;
		val aList = new ArrayList[String]();
		val test = new ArrayList[String]();
		val globalHash:HashMap[String, Int] = new HashMap[String, Int]();
		var s1: String = "";
		var s2: String = "";

		aList.add("genesis.txt");
		aList.add("exodus.txt");
		aList.add("bible.txt");

		//parallel implementation of word count using MapReduce
		Console.OUT.println("Parallel:");

		time = - System.nanoTime();
		finish for(var i:int = 1; i < 4; i++)
		{
			val c = aList.get(i-1);
			async(Place.place(i))
			{
				val x = new WordCount(c);
				val size = x.getSize();

					foreach((j) in 0..size-1)
					{
						val entry = x.getEntry(j);
						val key = placeCastHack(entry).getKey();
						val value = placeCastHack(entry).getValue();

						at(Place.place(0))
						{
							if(globalHash.containsKey(key) == true)
							{
								var v: Int = globalHash.get(key).value();	       					
								globalHash.remove(key);

								atomic
								{
									v += value;
									globalHash.put(key, v);
								}
							}
							else
							{

								atomic globalHash.put(key, value);		
							}
						}
					}
			}
		}
		time += System.nanoTime();
		try
		{
			var str: String = "";
			val out1 = new FileWriter(new File("parallelOut.txt"));
			for(e in globalHash.entries())
			{
				str = "";
				val a = placeCastHack(e).getKey();
				val b = placeCastHack(e).getValue();
				str += a+" "+b+"\n";
				out1.write(str.bytes());
			}
			out1.close();
		}
		catch (Exception)
		{
			Console.OUT.println("Error\n");
		}

		Console.OUT.println("Time (Parallel) = " + (time/(1000*1000)) + " ms");

		time = 0;
		globalHash.clear();

		//serial version of word count
		Console.OUT.println("Serial:");

		time = - System.nanoTime();
		for(var i:int = 0; i < aList.size(); i++)
		{
			val c = aList.get(i);
			val x = new WordCount(c);
			val size = x.getSize();

			for(var j:int = 0; j < size; j++)
			{
				val entry = x.getEntry(j);
				val key = placeCastHack(entry).getKey();
				val value = placeCastHack(entry).getValue();
				if(globalHash.containsKey(key) == true)
				{
					var v: Int = globalHash.get(key).value();	       						
					globalHash.remove(key);
					v += value;
					globalHash.put(key, v);		
				}
				else
				{
					globalHash.put(key, value);		
				}				          
			}
		}
		time += System.nanoTime();

		try
		{
			var str: String = "";
			val out1 = new FileWriter(new File("serialOut.txt"));
			for(e in globalHash.entries())
			{
				str = "";
				val a = placeCastHack(e).getKey();
				val b = placeCastHack(e).getValue();
				str += a+" "+b+"\n";
				out1.write(str.bytes());
			}
			out1.close();
		}
		catch (Exception)
		{
			Console.OUT.println("Error\n");
		}
		Console.OUT.println("Time (Serial) = " + (time/(1000*1000)) + " ms");
	}
}


