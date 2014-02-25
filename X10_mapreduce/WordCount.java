
public class WordCount
extends x10.core.Ref
{
public static class RTT extends x10.rtt.RuntimeType<WordCount> {
public static final RTT it = new RTT();
    
    
    public RTT() {super(WordCount.class);
                      }
    public boolean instanceof$(java.lang.Object o) {
    if (! (o instanceof WordCount)) return false;
        return true;
    }
    public java.util.List<x10.rtt.Type<?>> getTypeParameters() {
    return null;
    }
}

    
//#line 8
final x10.
      lang.
      PlaceLocalHandle<x10.
      util.
      HashMap<java.lang.String, java.lang.Integer>>
      hash;
    
    
//#line 10
public WordCount(final java.lang.String file) {
        
//#line 11
super();
        
//#line 8
this.hash = ((x10.
          lang.
          PlaceLocalHandle)(x10.
          lang.
          PlaceLocalHandle.<x10.
          util.
          HashMap<java.lang.String, java.lang.Integer>>make(new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                            x10.
                                                              array.
                                                              Dist.makeUnique(),
                                                            new x10.core.fun.Fun_0_0<x10.
                                                              util.
                                                              HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                                                              util.
                                                              HashMap<java.lang.String, java.lang.Integer> apply() { try {{
                                                                
//#line 8
return new x10.
                                                                  util.
                                                                  HashMap<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class),
                                                                                                               x10.rtt.Types.INT);
                                                            }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                                                            public x10.rtt.Type<?> rtt_x10$lang$Fun_0_0_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                            })));
        
//#line 12
this.readData(file);
    }
    
    
//#line 15
public void
                  readData(
                  final java.lang.String file){
        
//#line 17
java.lang.String s =
          "";
        
//#line 19
try {try {{
            
//#line 21
final x10.
              io.
              File f1 =
              ((x10.
              io.
              File)(new x10.
              io.
              File(file)));
            
//#line 22
/* template:forloop { */for (x10.core.Iterator line__ = (f1.lines()).iterator(); line__.hasNext(); ) {
            	final  java.lang.String line = (java.lang.String) line__.next();
            	
{
                
//#line 24
s += ((java.lang.String)(line));
            }
            }/* } */
        }}catch (x10.runtime.impl.java.WrappedRuntimeException __$generated_wrappedex$__) {
        if (__$generated_wrappedex$__.getCause() instanceof java.lang.Exception) {
        throw (java.lang.Exception) __$generated_wrappedex$__.getCause();
        }throw __$generated_wrappedex$__;}}catch (final java.lang.Exception id$0) {
            
//#line 29
x10.
              io.
              Console.OUT.println("Error\n");
        }
        
//#line 31
this.map(s);
    }
    
    
//#line 34
void
                  map(
                  final java.lang.String file){
        
//#line 36
final x10.core.ValRail<java.lang.String> tempList =
          ((x10.core.ValRail)(x10.core.RailFactory.makeValRailFromJavaArray((file).split("\n"))));
        
//#line 38
/* template:forloop-mult { */
        {
            x10.array.Region __var0__ = (x10.
          array.
          Region.makeRectangular(0,
                                 (((tempList.length()) - (1))))).region();
            if (__var0__.rect()) {
        	/* Loop: { *//* template:forloop-mult-each { */
        for (int __var1__ = __var0__.min(0), __var2__ = __var0__.max(0); __var1__ <= __var2__; __var1__++)
        /* } */
        /* } */ {
        		/* Loop: { *//* template:final-var-assign { */
        final int a = __var1__;
        /* } */
        /* } */
{
            
//#line 40
final x10.core.ValRail<java.lang.String> tempList2 =
              ((x10.core.ValRail)(x10.core.RailFactory.makeValRailFromJavaArray(((tempList).apply(a)).split(" "))));
            
//#line 41
/* template:forloop-mult { */
            {
                x10.array.Region __var3__ = (x10.
              array.
              Region.makeRectangular(0,
                                     (((tempList2.length()) - (1))))).region();
                if (__var3__.rect()) {
            	/* Loop: { *//* template:forloop-mult-each { */
            for (int __var4__ = __var3__.min(0), __var5__ = __var3__.max(0); __var4__ <= __var5__; __var4__++)
            /* } */
            /* } */ {
            		/* Loop: { *//* template:final-var-assign { */
            final int b = __var4__;
            /* } */
            /* } */
{
                
//#line 43
this.emit(this.prepareWord((tempList2).apply(b)),
                                      1);
            }
            	}
                } else {
            	assert false;
                }
            }
            /* } */
            
        }
        	}
            } else {
        	assert false;
            }
        }
        /* } */
        
    }
    
    
//#line 48
void
                  emit(
                  final java.lang.String key,
                  final java.lang.Integer value){
        
//#line 50
this.insert(key,
                                value);
    }
    
    
//#line 53
java.lang.String
                  prepareWord(
                  final java.lang.String word){
        
//#line 55
java.lang.String returnStr =
          "";
        
//#line 56
for (
//#line 56
int i =
                           0;
                         ((i) < ((word).length()));
                         
//#line 56
i += ((int) (int) (java.lang.Integer)
                                            (1))) {
            
//#line 58
if (/* template:equalsequals { */x10.rtt.Equality.equalsequals(java.lang.Character.isLetterOrDigit((word).charAt(i)),false)/* } */) {
                
            } else {
                
//#line 61
if (java.lang.Character.isUpperCase((word).charAt(i))) {
                    
//#line 63
returnStr += ((java.lang.String)(java.lang.String.valueOf(java.lang.Character.toLowerCase((word).charAt(i)))));
                } else {
                    
//#line 67
returnStr += ((java.lang.String)(java.lang.String.valueOf((word).charAt(i))));
                }
            }
        }
        
//#line 70
return returnStr;
    }
    
    
//#line 73
void
                  insert(
                  final java.lang.String key,
                  final java.lang.Integer value){
        
//#line 75
if (/* template:equalsequals { */x10.rtt.Equality.equalsequals(hash.apply().containsKey(key),true)/* } */) {
            
//#line 77
this.add(key,
                                 value);
        } else {
            
//#line 81
hash.apply().put(key,
                                         value);
        }
    }
    
    
//#line 85
void
                  add(
                  final java.lang.String key,
                  final java.lang.Integer value){
        
//#line 87
int v =
          ((java.lang.Integer)(((int)(((java.lang.Integer)(hash.apply().get(key).value()))))));
        
//#line 88
v += value;
        
//#line 89
hash.apply().remove(key);
        
//#line 90
hash.apply().put(key,
                                     v);
    }
    
    
//#line 93
x10.
                  util.
                  Box<java.lang.Integer>
                  getValue(
                  final java.lang.String key){
        
//#line 95
return hash.apply().get(key);
    }
    
    
//#line 98
java.lang.Integer
                  getSize(
                  ){
        
//#line 100
return hash.apply().entries().size();
    }
    
    
//#line 103
x10.
                   util.
                   Map.
                   Entry<java.lang.String, java.lang.Integer>
                   getEntry(
                   final java.lang.Integer j){
        
//#line 105
int counter =
          0;
        
//#line 106
x10.
          util.
          Map.
          Entry<java.lang.String, java.lang.Integer> tmp =
          null;
        
//#line 107
/* template:forloop { */for (x10.core.Iterator e__ = (hash.apply().entries()).iterator(); e__.hasNext(); ) {
        	final  x10.
          util.
          Map.
          Entry<java.lang.String, java.lang.Integer> e = (x10.
          util.
          Map.
          Entry<java.lang.String, java.lang.Integer>) e__.next();
        	
{
            
//#line 109
if (/* template:equalsequals { */x10.rtt.Equality.equalsequals(j,counter)/* } */) {
                
//#line 111
tmp = ((x10.
                  util.
                  Map.
                  Entry)(e));
                
//#line 112
break;
            }
            
//#line 114
counter += ((int) (int) (java.lang.Integer)
                                      (1));
        }
        }/* } */
        
//#line 116
return tmp;
    }
    
    
//#line 119
public static <T> T
                   placeCastHack(
                   final x10.rtt.Type T,
                   final T x){
        
//#line 119
return new x10.core.fun.Fun_0_1<T, T>() {public final T apply(final T __desugarer__var__0__) { try {{
            
//#line 119
if (!x10.core.Ref.at(((java.lang.Object)(__desugarer__var__0__)), x10.
                               lang.
                               Runtime.here().id)) {
                
//#line 119
throw new java.lang.ClassCastException("T{self.home==here}");
            }
            
//#line 119
return __desugarer__var__0__;
        }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return T; }
        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return T; }
        }.apply(((T)
                  x));
    }
    
    
//#line 121
/* template:Main { */
    public static class Main extends x10.runtime.impl.java.Runtime {
    	public static void main(java.lang.String[] args) {
    		// start native runtime
    		new Main().start(args);
    	}
    
    	// called by native runtime inside main x10 thread
    	public void main(final x10.core.Rail<java.lang.String> args) {
    		try {
    
    			// start xrx
    			x10.lang.Runtime.start(
    				// static init activity
    				new x10.core.fun.VoidFun_0_0() {
    					public void apply() {
    						// preload classes
    						if (Boolean.getBoolean("x10.PRELOAD_CLASSES")) {
    							x10.runtime.impl.java.PreLoader.preLoad(this.getClass().getEnclosingClass(), Boolean.getBoolean("x10.PRELOAD_STRINGS"));
    						}
    					}
    				},
    				// body of main activity
    				new x10.core.fun.VoidFun_0_0() {
    					public void apply() {
    						// catch and rethrow checked exceptions
    						// (closures cannot throw checked exceptions)
    						try {
    							// call the original app-main method
    							WordCount.main(args);
    						} catch (java.lang.RuntimeException e) {
    							throw e;
    						} catch (java.lang.Error e) {
    							throw e;
    						} catch (java.lang.Throwable t) {
    			 		   		throw new x10.lang.MultipleExceptions(t);
    			 		   	}
    					}
    				});
    
    		} catch (java.lang.Throwable t) {
    			t.printStackTrace();
    		}
    	}
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args)  {
        
//#line 123
int counter =
          0;
        
//#line 124
int counter2 =
          1;
        
//#line 125
long time =
          ((java.lang.Long)(((long)(((long)(0))))));
        
//#line 126
final x10.
          util.
          ArrayList<java.lang.String> aList =
          ((x10.
          util.
          ArrayList)(new x10.
          util.
          ArrayList<java.lang.String>(x10.rtt.Types.runtimeType(java.lang.String.class))));
        
//#line 127
final x10.
          util.
          ArrayList<java.lang.String> test =
          ((x10.
          util.
          ArrayList)(new x10.
          util.
          ArrayList<java.lang.String>(x10.rtt.Types.runtimeType(java.lang.String.class))));
        
//#line 128
final x10.
          util.
          HashMap<java.lang.String, java.lang.Integer> globalHash =
          ((x10.
          util.
          HashMap)(new x10.
          util.
          HashMap<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class),
                                                       x10.rtt.Types.INT)));
        
//#line 129
java.lang.String s1 =
          "";
        
//#line 130
java.lang.String s2 =
          "";
        
//#line 132
aList.add("genesis.txt");
        
//#line 133
aList.add("exodus.txt");
        
//#line 134
aList.add("bible.txt");
        
//#line 137
x10.
          io.
          Console.OUT.println("Parallel:");
        
//#line 139
time = ((java.lang.Long)(((long)((-(x10.
          lang.
          System.nanoTime()))))));
        
//#line 140
try {try {{
            
//#line 140
x10.
              lang.
              Runtime.startFinish();
            {
                
//#line 140
for (
//#line 140
int i =
                                    1;
                                  ((i) < (4));
                                  
//#line 140
i += ((int) (int) (java.lang.Integer)
                                                      (1))) {
                    
//#line 142
final java.lang.String c =
                      ((java.lang.String)(aList.get(((i) - (1)))));
                    
//#line 143
x10.
                      lang.
                      Runtime.runAsync(x10.
                                         lang.
                                         Place.place(i),
                                       new x10.core.fun.VoidFun_0_0() {public final void apply() { try {{
                                           
//#line 145
final WordCount x =
                                             ((WordCount)(new WordCount(c)));
                                           
//#line 146
final int size =
                                             x.getSize();
                                           
//#line 149
/* template:forloop-mult { */
                                           {
                                               x10.array.Region __var6__ = (x10.
                                             array.
                                             Region.makeRectangular(0,
                                                                    ((size) - (1)))).region();
                                               if (__var6__.rect()) {
                                           	/* Loop: { *//* template:forloop-mult-each { */
                                           for (int __var7__ = __var6__.min(0), __var8__ = __var6__.max(0); __var7__ <= __var8__; __var7__++)
                                           /* } */
                                           /* } */ {
                                           		/* Loop: { *//* template:final-var-assign { */
                                           final int j = __var7__;
                                           /* } */
                                           /* } */
{
                                               
//#line 150
x10.
                                                 lang.
                                                 Runtime.runAsync(x10.
                                                                    lang.
                                                                    Runtime.here(),
                                                                  new x10.core.fun.VoidFun_0_0() {public final void apply() { try {{
                                                                      
//#line 151
final x10.
                                                                        util.
                                                                        Map.
                                                                        Entry<java.lang.String, java.lang.Integer> entry =
                                                                        ((x10.
                                                                        util.
                                                                        Map.
                                                                        Entry)(x.getEntry(j)));
                                                                      
//#line 152
final java.lang.String key =
                                                                        ((java.lang.String)(WordCount.<x10.
                                                                        util.
                                                                        Map.
                                                                        Entry<java.lang.String, java.lang.Integer>>placeCastHack(new x10.util.Map.RTT.Entry$RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                                                                                                 entry).getKey()));
                                                                      
//#line 153
final int value =
                                                                        WordCount.<x10.
                                                                        util.
                                                                        Map.
                                                                        Entry<java.lang.String, java.lang.Integer>>placeCastHack(new x10.util.Map.RTT.Entry$RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                                                                                                 entry).getValue();
                                                                      
//#line 155
x10.
                                                                        lang.
                                                                        Runtime.runAt(x10.
                                                                                        lang.
                                                                                        Place.place(0),
                                                                                      new x10.core.fun.VoidFun_0_0() {public final void apply() { try {{
                                                                                          
//#line 157
if (/* template:equalsequals { */x10.rtt.Equality.equalsequals(new x10.core.fun.Fun_0_1<x10.
                                                                                                             util.
                                                                                                             HashMap<java.lang.String, java.lang.Integer>, x10.
                                                                                                             util.
                                                                                                             HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                                                                                                             util.
                                                                                                             HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                                                                                                             util.
                                                                                                             HashMap<java.lang.String, java.lang.Integer> __desugarer__var__1__) { try {{
                                                                                                               
//#line 157
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__1__,null))/* } */ &&
                                                                                                                                  !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                                                                                                      lang.
                                                                                                                                      Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__1__)))),x10.
                                                                                                                                      lang.
                                                                                                                                      Runtime.here())/* } */)) {
                                                                                                                   
//#line 157
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                                                                                                        "ere}"));
                                                                                                               }
                                                                                                               
//#line 157
return __desugarer__var__1__;
                                                                                                           }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                                                                                                           public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                                           public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                                           }.apply(((x10.
                                                                                                                     util.
                                                                                                                     HashMap)
                                                                                                                     globalHash)).containsKey(key),true)/* } */) {
                                                                                              
//#line 159
int v =
                                                                                                ((java.lang.Integer)(((int)(((java.lang.Integer)(new x10.core.fun.Fun_0_1<x10.
                                                                                                util.
                                                                                                HashMap<java.lang.String, java.lang.Integer>, x10.
                                                                                                util.
                                                                                                HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                                                                                                util.
                                                                                                HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                                                                                                util.
                                                                                                HashMap<java.lang.String, java.lang.Integer> __desugarer__var__2__) { try {{
                                                                                                  
//#line 159
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__2__,null))/* } */ &&
                                                                                                                     !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                                                                                         lang.
                                                                                                                         Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__2__)))),x10.
                                                                                                                         lang.
                                                                                                                         Runtime.here())/* } */)) {
                                                                                                      
//#line 159
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                                                                                           "ere}"));
                                                                                                  }
                                                                                                  
//#line 159
return __desugarer__var__2__;
                                                                                              }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                                                                                              public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                              public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                              }.apply(((x10.
                                                                                                        util.
                                                                                                        HashMap)
                                                                                                        globalHash)).get(key).value()))))));
                                                                                              
//#line 160
new x10.core.fun.Fun_0_1<x10.
                                                                                                util.
                                                                                                HashMap<java.lang.String, java.lang.Integer>, x10.
                                                                                                util.
                                                                                                HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                                                                                                util.
                                                                                                HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                                                                                                util.
                                                                                                HashMap<java.lang.String, java.lang.Integer> __desugarer__var__3__) { try {{
                                                                                                  
//#line 160
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__3__,null))/* } */ &&
                                                                                                                     !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                                                                                         lang.
                                                                                                                         Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__3__)))),x10.
                                                                                                                         lang.
                                                                                                                         Runtime.here())/* } */)) {
                                                                                                      
//#line 160
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                                                                                           "ere}"));
                                                                                                  }
                                                                                                  
//#line 160
return __desugarer__var__3__;
                                                                                              }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                                                                                              public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                              public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                              }.apply(((x10.
                                                                                                        util.
                                                                                                        HashMap)
                                                                                                        globalHash)).remove(key);
                                                                                              
//#line 162
try {{
                                                                                                  
//#line 162
x10.
                                                                                                    lang.
                                                                                                    Runtime.lock();
                                                                                                  {
                                                                                                      
//#line 164
v += ((java.lang.Integer)(((int)(value))));
                                                                                                      
//#line 165
new x10.core.fun.Fun_0_1<x10.
                                                                                                        util.
                                                                                                        HashMap<java.lang.String, java.lang.Integer>, x10.
                                                                                                        util.
                                                                                                        HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                                                                                                        util.
                                                                                                        HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                                                                                                        util.
                                                                                                        HashMap<java.lang.String, java.lang.Integer> __desugarer__var__4__) { try {{
                                                                                                          
//#line 165
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__4__,null))/* } */ &&
                                                                                                                             !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                                                                                                 lang.
                                                                                                                                 Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__4__)))),x10.
                                                                                                                                 lang.
                                                                                                                                 Runtime.here())/* } */)) {
                                                                                                              
//#line 165
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                                                                                                   "ere}"));
                                                                                                          }
                                                                                                          
//#line 165
return __desugarer__var__4__;
                                                                                                      }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                                                                                                      public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                                      public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                                      }.apply(((x10.
                                                                                                                util.
                                                                                                                HashMap)
                                                                                                                globalHash)).put(key,
                                                                                                                                 v);
                                                                                                  }
                                                                                              }}finally {{
                                                                                                    
//#line 162
x10.
                                                                                                      lang.
                                                                                                      Runtime.release();
                                                                                                }}
                                                                                              } else {
                                                                                                  
//#line 171
try {{
                                                                                                      
//#line 171
x10.
                                                                                                        lang.
                                                                                                        Runtime.lock();
                                                                                                      {
                                                                                                          
//#line 171
new x10.core.fun.Fun_0_1<x10.
                                                                                                            util.
                                                                                                            HashMap<java.lang.String, java.lang.Integer>, x10.
                                                                                                            util.
                                                                                                            HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                                                                                                            util.
                                                                                                            HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                                                                                                            util.
                                                                                                            HashMap<java.lang.String, java.lang.Integer> __desugarer__var__5__) { try {{
                                                                                                              
//#line 171
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__5__,null))/* } */ &&
                                                                                                                                 !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                                                                                                     lang.
                                                                                                                                     Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__5__)))),x10.
                                                                                                                                     lang.
                                                                                                                                     Runtime.here())/* } */)) {
                                                                                                                  
//#line 171
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                                                                                                       "ere}"));
                                                                                                              }
                                                                                                              
//#line 171
return __desugarer__var__5__;
                                                                                                          }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                                                                                                          public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                                          public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                                                                                          }.apply(((x10.
                                                                                                                    util.
                                                                                                                    HashMap)
                                                                                                                    globalHash)).put(key,
                                                                                                                                     value);
                                                                                                      }
                                                                                                  }}finally {{
                                                                                                        
//#line 171
x10.
                                                                                                          lang.
                                                                                                          Runtime.release();
                                                                                                    }}
                                                                                                  }
                                                                                          }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                                                                                          });
                                                                      }}catch (x10.runtime.impl.java.WrappedRuntimeException ex) {x10.lang.Runtime.pushException(ex.getCause());}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {x10.lang.Runtime.pushException(ex);}}
                                                                      });
                                               }
                                               	}
                                                   } else {
                                               	assert false;
                                                   }
                                               }
                                               /* } */
                                               
                                           }}catch (x10.runtime.impl.java.WrappedRuntimeException ex) {x10.lang.Runtime.pushException(ex.getCause());}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {x10.lang.Runtime.pushException(ex);}}
                                           });
                    }
                }
            }}catch (x10.runtime.impl.java.WrappedRuntimeException __$generated_wrappedex$__) {
            if (__$generated_wrappedex$__.getCause() instanceof java.lang.Throwable) {
            throw (java.lang.Throwable) __$generated_wrappedex$__.getCause();
            }throw __$generated_wrappedex$__;}}catch (java.lang.Throwable __desugarer__var__6__) {
                
//#line 140
x10.
                  lang.
                  Runtime.pushException(__desugarer__var__6__);
            }finally {{
                 
//#line 140
x10.
                   lang.
                   Runtime.stopFinish();
             }}
            
//#line 177
time += ((java.lang.Long)(((long)(x10.
              lang.
              System.nanoTime()))));
            
//#line 178
try {try {{
                
//#line 180
java.lang.String str =
                  "";
                
//#line 181
final x10.
                  io.
                  FileWriter out1 =
                  ((x10.
                  io.
                  FileWriter)(new x10.
                  io.
                  FileWriter(new x10.
                               io.
                               File("parallelOut.txt"))));
                
//#line 182
/* template:forloop { */for (x10.core.Iterator e__ = (new x10.core.fun.Fun_0_1<x10.
                  util.
                  HashMap<java.lang.String, java.lang.Integer>, x10.
                  util.
                  HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                  util.
                  HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                  util.
                  HashMap<java.lang.String, java.lang.Integer> __desugarer__var__8__) { try {{
                    
//#line 182
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__8__,null))/* } */ &&
                                       !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                           lang.
                                           Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__8__)))),x10.
                                           lang.
                                           Runtime.here())/* } */)) {
                        
//#line 182
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                             "ere}"));
                    }
                    
//#line 182
return __desugarer__var__8__;
                }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                }.apply(((x10.
                          util.
                          HashMap)
                          new x10.core.fun.Fun_0_1<x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>, x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> __desugarer__var__7__) { try {{
                            
//#line 182
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__7__,null))/* } */ &&
                                               !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                   lang.
                                                   Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__7__)))),x10.
                                                   lang.
                                                   Runtime.here())/* } */)) {
                                
//#line 182
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                     "ere}"));
                            }
                            
//#line 182
return __desugarer__var__7__;
                        }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        }.apply(((x10.
                                  util.
                                  HashMap)
                                  globalHash)))).entries()).iterator(); e__.hasNext(); ) {
                	final  x10.
                  util.
                  Map.
                  Entry<java.lang.String, java.lang.Integer> e = (x10.
                  util.
                  Map.
                  Entry<java.lang.String, java.lang.Integer>) e__.next();
                	
{
                    
//#line 184
str = "";
                    
//#line 185
final java.lang.String a =
                      ((java.lang.String)(WordCount.<x10.
                      util.
                      Map.
                      Entry<java.lang.String, java.lang.Integer>>placeCastHack(new x10.util.Map.RTT.Entry$RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                                               e).getKey()));
                    
//#line 186
final int b =
                      WordCount.<x10.
                      util.
                      Map.
                      Entry<java.lang.String, java.lang.Integer>>placeCastHack(new x10.util.Map.RTT.Entry$RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                                               e).getValue();
                    
//#line 187
str += ((java.lang.String)(((((((a) + (" "))) + (b))) + ("\n"))));
                    
//#line 188
out1.write(x10.core.RailFactory.<java.lang.Byte>makeValRailFromJavaArray((str).getBytes()));
                }
                }/* } */
                
//#line 190
out1.close();
            }}catch (x10.runtime.impl.java.WrappedRuntimeException __$generated_wrappedex$__) {
            if (__$generated_wrappedex$__.getCause() instanceof java.lang.Exception) {
            throw (java.lang.Exception) __$generated_wrappedex$__.getCause();
            }throw __$generated_wrappedex$__;}}catch (final java.lang.Exception id$8) {
                
//#line 194
x10.
                  io.
                  Console.OUT.println("Error\n");
            }
            
//#line 197
x10.
              io.
              Console.OUT.println((((("Time (Parallel) = ") + ((((time) / (((long)((((1000) * (1000))))))))))) + (" ms")));
            
//#line 199
time = ((java.lang.Long)(((long)(((long)(0))))));
            
//#line 200
new x10.core.fun.Fun_0_1<x10.
              util.
              HashMap<java.lang.String, java.lang.Integer>, x10.
              util.
              HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
              util.
              HashMap<java.lang.String, java.lang.Integer> apply(final x10.
              util.
              HashMap<java.lang.String, java.lang.Integer> __desugarer__var__9__) { try {{
                
//#line 200
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__9__,null))/* } */ &&
                                   !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                       lang.
                                       Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__9__)))),x10.
                                       lang.
                                       Runtime.here())/* } */)) {
                    
//#line 200
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                         "ere}"));
                }
                
//#line 200
return __desugarer__var__9__;
            }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
            public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
            public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
            }.apply(((x10.
                      util.
                      HashMap)
                      globalHash)).clear();
            
//#line 203
x10.
              io.
              Console.OUT.println("Serial:");
            
//#line 205
time = ((java.lang.Long)(((long)((-(x10.
              lang.
              System.nanoTime()))))));
            
//#line 206
for (
//#line 206
int i =
                                0;
                              ((i) < (aList.size()));
                              
//#line 206
i += ((int) (int) (java.lang.Integer)
                                                  (1))) {
                
//#line 208
final java.lang.String c =
                  ((java.lang.String)(aList.get(i)));
                
//#line 209
final WordCount x =
                  ((WordCount)(new WordCount(c)));
                
//#line 210
final int size =
                  x.getSize();
                
//#line 212
for (
//#line 212
int j =
                                    0;
                                  ((j) < (size));
                                  
//#line 212
j += ((int) (int) (java.lang.Integer)
                                                      (1))) {
                    
//#line 214
final x10.
                      util.
                      Map.
                      Entry<java.lang.String, java.lang.Integer> entry =
                      ((x10.
                      util.
                      Map.
                      Entry)(x.getEntry(j)));
                    
//#line 215
final java.lang.String key =
                      ((java.lang.String)(WordCount.<x10.
                      util.
                      Map.
                      Entry<java.lang.String, java.lang.Integer>>placeCastHack(new x10.util.Map.RTT.Entry$RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                                               entry).getKey()));
                    
//#line 216
final int value =
                      WordCount.<x10.
                      util.
                      Map.
                      Entry<java.lang.String, java.lang.Integer>>placeCastHack(new x10.util.Map.RTT.Entry$RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                                               entry).getValue();
                    
//#line 217
if (/* template:equalsequals { */x10.rtt.Equality.equalsequals(new x10.core.fun.Fun_0_1<x10.
                                       util.
                                       HashMap<java.lang.String, java.lang.Integer>, x10.
                                       util.
                                       HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                                       util.
                                       HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                                       util.
                                       HashMap<java.lang.String, java.lang.Integer> __desugarer__var__10__) { try {{
                                         
//#line 217
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__10__,null))/* } */ &&
                                                            !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                                lang.
                                                                Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__10__)))),x10.
                                                                lang.
                                                                Runtime.here())/* } */)) {
                                             
//#line 217
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                                  "ere}"));
                                         }
                                         
//#line 217
return __desugarer__var__10__;
                                     }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                                     public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                     public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                                     }.apply(((x10.
                                               util.
                                               HashMap)
                                               globalHash)).containsKey(key),true)/* } */) {
                        
//#line 219
int v =
                          ((java.lang.Integer)(((int)(((java.lang.Integer)(new x10.core.fun.Fun_0_1<x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>, x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> __desugarer__var__11__) { try {{
                            
//#line 219
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__11__,null))/* } */ &&
                                               !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                   lang.
                                                   Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__11__)))),x10.
                                                   lang.
                                                   Runtime.here())/* } */)) {
                                
//#line 219
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                     "ere}"));
                            }
                            
//#line 219
return __desugarer__var__11__;
                        }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        }.apply(((x10.
                                  util.
                                  HashMap)
                                  globalHash)).get(key).value()))))));
                        
//#line 219
new x10.core.fun.Fun_0_1<x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>, x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> __desugarer__var__12__) { try {{
                            
//#line 219
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__12__,null))/* } */ &&
                                               !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                   lang.
                                                   Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__12__)))),x10.
                                                   lang.
                                                   Runtime.here())/* } */)) {
                                
//#line 219
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                     "ere}"));
                            }
                            
//#line 219
return __desugarer__var__12__;
                        }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        }.apply(((x10.
                                  util.
                                  HashMap)
                                  globalHash)).remove(key);
                        
//#line 220
v += ((java.lang.Integer)(((int)(value))));
                        
//#line 221
new x10.core.fun.Fun_0_1<x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>, x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> __desugarer__var__13__) { try {{
                            
//#line 221
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__13__,null))/* } */ &&
                                               !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                   lang.
                                                   Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__13__)))),x10.
                                                   lang.
                                                   Runtime.here())/* } */)) {
                                
//#line 221
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                     "ere}"));
                            }
                            
//#line 221
return __desugarer__var__13__;
                        }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        }.apply(((x10.
                                  util.
                                  HashMap)
                                  globalHash)).put(key,
                                                   v);
                    } else {
                        
//#line 226
new x10.core.fun.Fun_0_1<x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>, x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> __desugarer__var__14__) { try {{
                            
//#line 226
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__14__,null))/* } */ &&
                                               !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                   lang.
                                                   Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__14__)))),x10.
                                                   lang.
                                                   Runtime.here())/* } */)) {
                                
//#line 226
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                     "ere}"));
                            }
                            
//#line 226
return __desugarer__var__14__;
                        }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        }.apply(((x10.
                                  util.
                                  HashMap)
                                  globalHash)).put(key,
                                                   value);
                    }
                }
            }
            
//#line 230
time += ((java.lang.Long)(((long)(x10.
              lang.
              System.nanoTime()))));
            
//#line 232
try {try {{
                
//#line 234
java.lang.String str =
                  "";
                
//#line 235
final x10.
                  io.
                  FileWriter out1 =
                  ((x10.
                  io.
                  FileWriter)(new x10.
                  io.
                  FileWriter(new x10.
                               io.
                               File("serialOut.txt"))));
                
//#line 236
/* template:forloop { */for (x10.core.Iterator e__ = (new x10.core.fun.Fun_0_1<x10.
                  util.
                  HashMap<java.lang.String, java.lang.Integer>, x10.
                  util.
                  HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                  util.
                  HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                  util.
                  HashMap<java.lang.String, java.lang.Integer> __desugarer__var__16__) { try {{
                    
//#line 236
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__16__,null))/* } */ &&
                                       !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                           lang.
                                           Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__16__)))),x10.
                                           lang.
                                           Runtime.here())/* } */)) {
                        
//#line 236
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                             "ere}"));
                    }
                    
//#line 236
return __desugarer__var__16__;
                }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                }.apply(((x10.
                          util.
                          HashMap)
                          new x10.core.fun.Fun_0_1<x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>, x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer>>() {public final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> apply(final x10.
                          util.
                          HashMap<java.lang.String, java.lang.Integer> __desugarer__var__15__) { try {{
                            
//#line 236
if (/* template:notequalsequals { */(!x10.rtt.Equality.equalsequals(__desugarer__var__15__,null))/* } */ &&
                                               !(/* template:equalsequals { */x10.rtt.Equality.equalsequals(((x10.
                                                   lang.
                                                   Place)(x10.lang.Place.place(x10.core.Ref.home(__desugarer__var__15__)))),x10.
                                                   lang.
                                                   Runtime.here())/* } */)) {
                                
//#line 236
throw new java.lang.ClassCastException(("x10.util.HashMap[x10.lang.String, x10.lang.Int]{self.home==h" +
                                                                                     "ere}"));
                            }
                            
//#line 236
return __desugarer__var__15__;
                        }}catch (java.lang.RuntimeException ex) {throw ex;}catch (java.lang.Exception ex) {throw new x10.runtime.impl.java.WrappedRuntimeException(ex);}}
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_Z1() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        public x10.rtt.Type<?> rtt_x10$lang$Fun_0_1_U() { return new x10.util.HashMap.RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT); }
                        }.apply(((x10.
                                  util.
                                  HashMap)
                                  globalHash)))).entries()).iterator(); e__.hasNext(); ) {
                	final  x10.
                  util.
                  Map.
                  Entry<java.lang.String, java.lang.Integer> e = (x10.
                  util.
                  Map.
                  Entry<java.lang.String, java.lang.Integer>) e__.next();
                	
{
                    
//#line 238
str = "";
                    
//#line 239
final java.lang.String a =
                      ((java.lang.String)(WordCount.<x10.
                      util.
                      Map.
                      Entry<java.lang.String, java.lang.Integer>>placeCastHack(new x10.util.Map.RTT.Entry$RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                                               e).getKey()));
                    
//#line 240
final int b =
                      WordCount.<x10.
                      util.
                      Map.
                      Entry<java.lang.String, java.lang.Integer>>placeCastHack(new x10.util.Map.RTT.Entry$RTT<java.lang.String, java.lang.Integer>(x10.rtt.Types.runtimeType(java.lang.String.class), x10.rtt.Types.INT),
                                                                               e).getValue();
                    
//#line 241
str += ((java.lang.String)(((((((a) + (" "))) + (b))) + ("\n"))));
                    
//#line 242
out1.write(x10.core.RailFactory.<java.lang.Byte>makeValRailFromJavaArray((str).getBytes()));
                }
                }/* } */
                
//#line 244
out1.close();
            }}catch (x10.runtime.impl.java.WrappedRuntimeException __$generated_wrappedex$__) {
            if (__$generated_wrappedex$__.getCause() instanceof java.lang.Exception) {
            throw (java.lang.Exception) __$generated_wrappedex$__.getCause();
            }throw __$generated_wrappedex$__;}}catch (final java.lang.Exception id$9) {
                
//#line 248
x10.
                  io.
                  Console.OUT.println("Error\n");
            }
            
//#line 250
x10.
              io.
              Console.OUT.println((((("Time (Serial) = ") + ((((time) / (((long)((((1000) * (1000))))))))))) + (" ms")));
        }/* } */
        }
        