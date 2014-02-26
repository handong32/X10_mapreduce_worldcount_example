#include <x10MapReduce.h>


#include "x10MapReduce.inc"

void x10MapReduce::_instance_init() {
    _I_("Doing initialisation for class: x10MapReduce");
    
}


//#line 14 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10FieldDecl_c
x10aux::ref<x10::lang::String> x10MapReduce::FMGL(s);
void x10MapReduce::FMGL(s__do_init)() {
    FMGL(s__status) = x10aux::INITIALIZING;
    _I_("Doing static initialisation for field: x10MapReduce.s");
    x10aux::ref<x10::lang::String> __var0__ = x10::lang::String::Lit("abcdefghijklmnopqrstuvwxyz");
    FMGL(s) = __var0__;
    FMGL(s__status) = x10aux::INITIALIZED;
}
void x10MapReduce::FMGL(s__init)() {
    if (x10aux::here == 0) {
        x10aux::status __var1__ = (x10aux::status)x10aux::atomic_ops::compareAndSet_32((volatile x10_int*)&FMGL(s__status), (x10_int)x10aux::UNINITIALIZED, (x10_int)x10aux::INITIALIZING);
        if (__var1__ != x10aux::UNINITIALIZED) goto WAIT;
        FMGL(s__do_init)();
        x10aux::StaticInitBroadcastDispatcher::broadcastStaticField(FMGL(s),
                                                                    FMGL(s__id));
        // Notify all waiting threads
        x10aux::StaticInitBroadcastDispatcher::notify();
    }
    WAIT:
    while (FMGL(s__status) != x10aux::INITIALIZED) x10aux::StaticInitBroadcastDispatcher::await();
}
static void* __init__2 X10_PRAGMA_UNUSED = x10aux::InitDispatcher::addInitializer(x10MapReduce::FMGL(s__init));

volatile x10aux::status x10MapReduce::FMGL(s__status);
// extract value from a buffer
x10aux::ref<x10::lang::Object> x10MapReduce::FMGL(s__deserialize)(x10aux::deserialization_buffer &buf) {
    FMGL(s) = buf.read<x10aux::ref<x10::lang::String> >();
    x10MapReduce::FMGL(s__status) = x10aux::INITIALIZED;
    // Notify all waiting threads
    x10aux::StaticInitBroadcastDispatcher::notify();
    return x10aux::null;
}
const x10aux::serialization_id_t x10MapReduce::FMGL(s__id) = x10aux::StaticInitBroadcastDispatcher::addRoutine(x10MapReduce::FMGL(s__deserialize));


//#line 17 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10FieldDecl_c

//#line 20 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10FieldDecl_c

//#line 23 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10FieldDecl_c

//#line 26 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10FieldDecl_c

//#line 29 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10FieldDecl_c

//#line 32 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10FieldDecl_c

//#line 39 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10ConstructorDecl_c
void x10MapReduce::_constructor() {
    this->x10::lang::Object::_constructor();
    
    //#line 17 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(data) = x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > >(x10aux::null);
    
    //#line 20 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(gr) = x10aux::class_cast_unchecked<x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > >(x10aux::null);
    
    //#line 23 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(bData) = x10aux::class_cast_unchecked<x10aux::ref<x10::util::GrowableRail<x10aux::ref<MetaData> > > >(x10aux::null);
    
    //#line 26 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(fileData) =
      x10aux::class_cast_unchecked<x10aux::ref<x10::lang::String> >(x10aux::null);
    
    //#line 29 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(copyCounter) =
      ((x10_int)0);
    
    //#line 32 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(dataRailLength) =
      ((x10_int)0);
    
    //#line 41 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(gr) =
      x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::_make();
    
    //#line 42 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(bData) =
      x10::util::GrowableRail<x10aux::ref<MetaData> >::_make(x10aux::num_hosts);
    
    //#line 43 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(fileData) =
      x10::lang::String::Lit("");
    
    //#line 44 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(copyCounter) =
      ((x10_int)0);
    
    //#line 45 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<x10MapReduce>)this))->FMGL(dataRailLength) =
      ((x10_int)0);
    
}
x10aux::ref<x10MapReduce> x10MapReduce::_make() {
    x10aux::ref<x10MapReduce> this_ = new (x10aux::alloc<x10MapReduce>()) x10MapReduce();
    this_->_constructor();
    return this_;
}



//#line 53 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
x10_int x10MapReduce::getCopyCounter() {
    
    //#line 55 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10Return_c
    return ((x10aux::ref<x10MapReduce>)this)->FMGL(copyCounter);
    
}

//#line 63 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::setCopyCounter(x10_int i) {
    
    //#line 65 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->FMGL(copyCounter) +=
      i;
}

//#line 73 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::setData(x10aux::ref<x10::lang::String> d) {
    
    //#line 75 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->FMGL(fileData) = d;
}

//#line 85 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
x10_int x10MapReduce::getDataRailLength() {
    
    //#line 88 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10Return_c
    return ((x10aux::ref<x10MapReduce>)this)->FMGL(dataRailLength);
    
}

//#line 96 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::setDataRailLength(x10_int i) {
    
    //#line 98 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->FMGL(dataRailLength) +=
      (((x10_int) ((i) + (((x10_int)1)))));
}

//#line 106 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::setRailData() {
    
    //#line 108 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->FMGL(data) = x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::make(((x10aux::ref<x10MapReduce>)this)->
                                                                                                                                       FMGL(dataRailLength));
}

//#line 117 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::print() {
    
    //#line 119 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::nullCheck(x10::io::Console::FMGL(OUT__get)())->x10::io::Printer::println(
      x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(((x10::lang::String::Lit("Place: ")) + (x10::lang::Place_methods::_make(x10aux::here)->
                                                                                                           FMGL(id)))));
    
    //#line 120 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 120 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 120 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var10__;
                x10_int j;
                __var10__ = ((x10_int) ((x10aux::nullCheck(((x10aux::ref<x10MapReduce>)this)->
                                                             FMGL(data))->x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::length()) - (((x10_int)1))));
                for (j = ((x10_int)0); j <= __var10__; j++) {
                    {
                        
                        //#line 122 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals((((x10aux::ref<x10MapReduce>)this)->
                                                       FMGL(data))->apply(j)->
                                                      FMGL(first),
                                                    x10aux::null)))
                        {
                            
                            //#line 123 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            x10aux::nullCheck(x10::io::Console::
                                                FMGL(OUT__get)())->x10::io::Printer::println(
                              x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >((((((((x10aux::ref<x10MapReduce>)this)->
                                                                                                FMGL(data))->apply(j)->
                                                                                               FMGL(first)) + (x10::lang::String::Lit(" ")))) + ((((x10aux::ref<x10MapReduce>)this)->
                                                                                                                                                    FMGL(data))->apply(j)->
                                                                                                                                                   FMGL(second)))));
                        }
                        
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__11) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__11 = (x10aux::ref<x10::lang::Throwable>&)__ref__11;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__11)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__0__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__11);
            {
                
                //#line 120 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__0__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 120 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 120 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
}

//#line 128 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::printGR() {
    
    //#line 130 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::nullCheck(x10::io::Console::FMGL(OUT__get)())->x10::io::Printer::println(
      x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(((x10::lang::String::Lit("Place: ")) + (x10::lang::Place_methods::_make(x10aux::here)->
                                                                                                           FMGL(id)))));
    
    //#line 131 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 131 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 131 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var13__;
                x10_int j;
                __var13__ = ((x10_int) ((((((x10aux::ref<x10MapReduce>)this)->
                                             FMGL(gr)))->length()) - (((x10_int)1))));
                for (j = ((x10_int)0); j <= __var13__; j++) {
                    {
                        
                        //#line 133 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10aux::nullCheck(x10::io::Console::
                                            FMGL(OUT__get)())->x10::io::Printer::println(
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >((((((((x10aux::ref<x10MapReduce>)this)->
                                                                                            FMGL(gr))->apply(j)->
                                                                                           FMGL(first)) + (x10::lang::String::Lit(" ")))) + ((((x10aux::ref<x10MapReduce>)this)->
                                                                                                                                                FMGL(gr))->apply(j)->
                                                                                                                                               FMGL(second)))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__14) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__14 = (x10aux::ref<x10::lang::Throwable>&)__ref__14;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__14)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__1__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__14);
            {
                
                //#line 131 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__1__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 131 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 131 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
}

//#line 142 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::map() {
    
    //#line 144 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::lang::ValRail<x10aux::ref<x10::lang::String> > > tmpList =
      (((x10aux::ref<x10MapReduce>)this)->
         FMGL(fileData))->split(x10::lang::String::Lit("\n"));
    
    //#line 147 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
    {
        x10_int __var16__;
        x10_int a;
        __var16__ = ((x10_int) ((x10aux::nullCheck(tmpList)->x10::lang::ValRail<x10aux::ref<x10::lang::String> >::length()) - (((x10_int)1))));
        for (a = ((x10_int)0); a <= __var16__; a++) {
            {
                
                //#line 149 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                x10aux::ref<x10::lang::ValRail<x10aux::ref<x10::lang::String> > > tmpList2 =
                  ((tmpList)->apply(a))->split(x10::lang::String::Lit(" "));
                
                //#line 152 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
                {
                    x10_int __var17__;
                    x10_int b;
                    __var17__ = ((x10_int) ((x10aux::nullCheck(tmpList2)->x10::lang::ValRail<x10aux::ref<x10::lang::String> >::length()) - (((x10_int)1))));
                    for (b = ((x10_int)0); b <= __var17__; b++) {
                        {
                            
                            //#line 155 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::lang::String> s =
                              ((x10aux::ref<x10MapReduce>)this)->prepareWord(
                                (tmpList2)->apply(b));
                            
                            //#line 156 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                            if ((((s)->length()) > (((x10_int)0))))
                            {
                                
                                //#line 159 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                                ((x10aux::ref<x10MapReduce>)this)->emit(
                                  s,
                                  ((x10_int)1));
                            }
                            
                        }
                    }
                }
                
            }
        }
    }
    
    //#line 165 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->intermediateMergeSort();
    
    //#line 168 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->intermediateMerge();
}

//#line 172 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::merge() {
    
    //#line 174 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > tmp =
      x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::make(((x10aux::ref<x10MapReduce>)this)->
                                                                                         FMGL(dataRailLength));
    
    //#line 175 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int ele = ((x10_int)0);
    
    //#line 176 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int counter = ((x10_int)0);
    
    //#line 179 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 179 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 179 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var19__;
                x10_int j;
                __var19__ = ((x10_int) ((x10aux::nullCheck(((x10aux::ref<x10MapReduce>)this)->
                                                             FMGL(data))->x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::length()) - (((x10_int)2))));
                for (j = ((x10_int)0); j <= __var19__; j++) {
                    {
                        
                        //#line 181 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                        if (x10aux::equals((((x10aux::ref<x10MapReduce>)this)->
                                              FMGL(data))->apply(j)->
                                             FMGL(first),x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >((((x10aux::ref<x10MapReduce>)this)->
                                                                                                                       FMGL(data))->apply(((x10_int) ((j) + (((x10_int)1)))))->
                                                                                                                      FMGL(first))))
                        {
                            
                            //#line 183 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            counter +=
                              (((x10aux::ref<x10MapReduce>)this)->
                                 FMGL(data))->apply(j)->
                                FMGL(second);
                        }
                        else
                        {
                            
                            //#line 187 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::lang::String> s =
                              (((x10aux::ref<x10MapReduce>)this)->
                                 FMGL(data))->apply(j)->
                                FMGL(first);
                            
                            //#line 188 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            (tmp)->set(x10::util::Pair_methods<x10aux::ref<x10::lang::String>, x10_int>::_make(s,
                                                                                                               ((x10_int) (((((x10aux::ref<x10MapReduce>)this)->
                                                                                                                               FMGL(data))->apply(j)->
                                                                                                                              FMGL(second)) + (counter)))), ele);
                            
                            //#line 190 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            ele +=
                              ((x10_int)1);
                            
                            //#line 191 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            counter =
                              ((x10_int)0);
                        }
                        
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__20) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__20 = (x10aux::ref<x10::lang::Throwable>&)__ref__20;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__20)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__2__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__20);
            {
                
                //#line 179 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__2__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 179 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 179 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
    
    //#line 195 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    (tmp)->set(x10::util::Pair_methods<x10aux::ref<x10::lang::String>, x10_int>::_make((((x10aux::ref<x10MapReduce>)this)->
                                                                                          FMGL(data))->apply(((x10_int) ((x10aux::nullCheck(((x10aux::ref<x10MapReduce>)this)->
                                                                                                                                              FMGL(data))->x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::length()) - (((x10_int)1)))))->
                                                                                         FMGL(first),
                                                                                       ((x10_int) (((((x10aux::ref<x10MapReduce>)this)->
                                                                                                       FMGL(data))->apply(((x10_int) ((x10aux::nullCheck(((x10aux::ref<x10MapReduce>)this)->
                                                                                                                                                           FMGL(data))->x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::length()) - (((x10_int)1)))))->
                                                                                                      FMGL(second)) + (counter)))), ele);
    
    //#line 196 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->FMGL(data) =
      tmp;
}

//#line 199 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::intermediateMerge() {
    
    //#line 201 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > tmp =
      x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::_make();
    
    //#line 202 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int counter = ((x10_int)0);
    
    //#line 204 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 204 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 204 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var22__;
                x10_int j;
                __var22__ = ((x10_int) ((((((x10aux::ref<x10MapReduce>)this)->
                                             FMGL(gr)))->length()) - (((x10_int)2))));
                for (j = ((x10_int)0); j <= __var22__; j++) {
                    {
                        
                        //#line 206 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                        if (x10aux::equals((((x10aux::ref<x10MapReduce>)this)->
                                              FMGL(gr))->apply(j)->
                                             FMGL(first),x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >((((x10aux::ref<x10MapReduce>)this)->
                                                                                                                       FMGL(gr))->apply(((x10_int) ((j) + (((x10_int)1)))))->
                                                                                                                      FMGL(first))))
                        {
                            
                            //#line 208 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            counter +=
                              (((x10aux::ref<x10MapReduce>)this)->
                                 FMGL(gr))->apply(j)->
                                FMGL(second);
                        }
                        else
                        {
                            
                            //#line 212 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::lang::String> s =
                              (((x10aux::ref<x10MapReduce>)this)->
                                 FMGL(gr))->apply(j)->
                                FMGL(first);
                            
                            //#line 213 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            (tmp)->add(x10::util::Pair_methods<x10aux::ref<x10::lang::String>, x10_int>::_make(s,
                                                                                                               ((x10_int) (((((x10aux::ref<x10MapReduce>)this)->
                                                                                                                               FMGL(gr))->apply(j)->
                                                                                                                              FMGL(second)) + (counter)))));
                            
                            //#line 214 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            counter =
                              ((x10_int)0);
                        }
                        
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__23) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__23 = (x10aux::ref<x10::lang::Throwable>&)__ref__23;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__23)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__3__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__23);
            {
                
                //#line 204 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__3__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 204 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 204 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
    
    //#line 217 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    (tmp)->add(x10::util::Pair_methods<x10aux::ref<x10::lang::String>, x10_int>::_make((((x10aux::ref<x10MapReduce>)this)->
                                                                                          FMGL(gr))->apply(((x10_int) (((((x10aux::ref<x10MapReduce>)this)->
                                                                                                                           FMGL(gr))->length()) - (((x10_int)1)))))->
                                                                                         FMGL(first),
                                                                                       ((x10_int) (((((x10aux::ref<x10MapReduce>)this)->
                                                                                                       FMGL(gr))->apply(((x10_int) (((((x10aux::ref<x10MapReduce>)this)->
                                                                                                                                        FMGL(gr))->length()) - (((x10_int)1)))))->
                                                                                                      FMGL(second)) + (counter)))));
    
    //#line 219 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->FMGL(gr) =
      tmp;
}

//#line 227 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::emit(x10aux::ref<x10::lang::String> s,
                        x10_int i) {
    
    //#line 229 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    (((x10aux::ref<x10MapReduce>)this)->FMGL(gr))->add(x10::util::Pair_methods<x10aux::ref<x10::lang::String>, x10_int>::_make(s,
                                                                                                                               i));
}

//#line 237 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::intermediateMergeSort(
  ) {
    
    //#line 239 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<MergeSort> ms = MergeSort::_make(((x10aux::ref<x10MapReduce>)this)->
                                                   FMGL(gr));
    
    //#line 240 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::nullCheck(ms)->sort();
    
    //#line 241 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->FMGL(gr) =
      x10aux::nullCheck(ms)->getVariable();
}

//#line 251 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::boundaryData() {
    
    //#line 253 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int max = x10aux::num_hosts;
    
    //#line 254 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int counter = ((x10_int) ((((x10_int)26)) / (max)));
    
    //#line 255 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int index = ((x10_int)0);
    
    //#line 256 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int railCount = ((x10_int)0);
    
    //#line 257 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_boolean _kwd__bool = false;
    
    //#line 262 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 262 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 262 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.For_c
            {
                x10_int i;
                for (
                     //#line 262 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                     i = ((x10_int)0); ((i) < (max));
                     
                     //#line 262 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                     i +=
                       ((x10_int)1)) {
                    
                    //#line 264 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                    index += counter;
                    
                    //#line 267 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                    if ((x10aux::struct_equals(i,
                                               ((x10_int) ((max) - (((x10_int)1)))))))
                    {
                        
                        //#line 270 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        (((x10aux::ref<x10MapReduce>)this)->
                           FMGL(bData))->add(MetaData::_make(railCount,
                                                             ((x10_int) (((((x10aux::ref<x10MapReduce>)this)->
                                                                             FMGL(gr))->length()) - (((x10_int)1))))));
                        
                        //#line 271 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Branch_c
                        break;
                    }
                    else
                    {
                        
                        //#line 276 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.For_c
                        {
                            x10_int j;
                            for (
                                 //#line 276 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                                 j =
                                   ((x10_int)0);
                                 ((j) < ((((x10aux::ref<x10MapReduce>)this)->
                                            FMGL(gr))->length()));
                                 
                                 //#line 276 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                                 j +=
                                   ((x10_int)1))
                            {
                                
                                //#line 279 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                                if (((((((x10aux::ref<x10MapReduce>)this)->
                                          FMGL(gr))->apply(j)->
                                         FMGL(first))->charAt(((x10_int)0))) > ((x10MapReduce::
                                                                                   FMGL(s__get)())->charAt(index))))
                                {
                                    
                                    //#line 281 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                                    _kwd__bool =
                                      true;
                                    
                                    //#line 282 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                                    if (((railCount) <= (((x10_int) ((j) - (((x10_int)1)))))))
                                    {
                                        
                                        //#line 285 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                                        (((x10aux::ref<x10MapReduce>)this)->
                                           FMGL(bData))->add(MetaData::_make(railCount,
                                                                             ((x10_int) ((j) - (((x10_int)1))))));
                                    }
                                    else
                                    {
                                        
                                        //#line 291 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                                        (((x10aux::ref<x10MapReduce>)this)->
                                           FMGL(bData))->add(MetaData::_make(((x10_int)0),
                                                                             ((x10_int)0)));
                                    }
                                    
                                    //#line 295 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                                    railCount =
                                      j;
                                    
                                    //#line 296 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Branch_c
                                    break;
                                }
                                
                            }
                        }
                        
                        //#line 300 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                        if ((x10aux::struct_equals(_kwd__bool,
                                                   true)))
                        {
                            
                            //#line 302 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            _kwd__bool =
                              false;
                        }
                        else
                        {
                            
                            //#line 306 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            (((x10aux::ref<x10MapReduce>)this)->
                               FMGL(bData))->add(MetaData::_make(((x10_int)0),
                                                                 ((x10_int)0)));
                        }
                        
                    }
                    
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__27) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__27 = (x10aux::ref<x10::lang::Throwable>&)__ref__27;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__27)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__4__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__27);
            {
                
                //#line 262 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__4__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 262 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 262 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
}

//#line 317 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
x10aux::ref<x10::lang::String> x10MapReduce::prepareWord(
  x10aux::ref<x10::lang::String> word) {
    
    //#line 319 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::lang::String> returnStr =
      x10::lang::String::Lit("");
    
    //#line 320 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
    {
        x10_int __var29__;
        x10_int i;
        __var29__ = ((x10_int) (((word)->length()) - (((x10_int)1))));
        for (i = ((x10_int)0); i <= __var29__; i++) {
            {
                
                //#line 322 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(x10aux::char_utils::isLetterOrDigit((word)->charAt(i)),
                                           false)))
                {
                 
                }
                else
                
                //#line 325 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
                if (x10aux::char_utils::isUpperCase((word)->charAt(i)))
                {
                    
                    //#line 327 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                    returnStr +=
                      x10aux::safe_to_string(x10aux::char_utils::toLowerCase((word)->charAt(i)));
                }
                else
                {
                    
                    //#line 331 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                    returnStr +=
                      x10aux::safe_to_string((word)->charAt(i));
                }
                
            }
        }
    }
    
    //#line 334 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10Return_c
    return returnStr;
    
}

//#line 342 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::sort() {
    
    //#line 344 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<MergeSortRail> ms = MergeSortRail::_make(((x10aux::ref<x10MapReduce>)this)->
                                                           FMGL(data));
    
    //#line 345 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::nullCheck(ms)->sortRail();
    
    //#line 346 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    ((x10aux::ref<x10MapReduce>)this)->FMGL(data) =
      x10aux::nullCheck(ms)->getVariable();
}

//#line 354 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::sortData(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
    
    //#line 356 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 356 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 356 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var32__;
                x10_int i;
                __var32__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                for (i = ((x10_int)0); i <= __var32__; i++) {
                    {
                        
                        //#line 358 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10::lang::Runtime::runAsync(
                          (x10::lang::Place_methods::
                             FMGL(places__get)())->apply(i),
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__0>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__0)))x10MapReduce__closure__0(nodes)))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__33) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__33 = (x10aux::ref<x10::lang::Throwable>&)__ref__33;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__33)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__5__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__33);
            {
                
                //#line 356 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__5__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 356 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 356 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
    
    //#line 364 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 364 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 364 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var34__;
                x10_int i;
                __var34__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                for (i = ((x10_int)0); i <= __var34__; i++) {
                    {
                        
                        //#line 366 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10::lang::Runtime::runAt(
                          (x10::lang::Place_methods::
                             FMGL(places__get)())->apply(i),
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__1>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__1)))x10MapReduce__closure__1()))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__35) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__35 = (x10aux::ref<x10::lang::Throwable>&)__ref__35;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__35)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__6__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__35);
            {
                
                //#line 364 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__6__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 364 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 364 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
    
    //#line 372 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 372 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 372 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var36__;
                x10_int i;
                __var36__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                for (i = ((x10_int)0); i <= __var36__; i++) {
                    {
                        
                        //#line 374 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10::lang::Runtime::runAsync(
                          (x10::lang::Place_methods::
                             FMGL(places__get)())->apply(i),
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__2>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__2)))x10MapReduce__closure__2(nodes)))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__37) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__37 = (x10aux::ref<x10::lang::Throwable>&)__ref__37;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__37)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__7__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__37);
            {
                
                //#line 372 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__7__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 372 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 372 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
}

//#line 386 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::printData(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
    
    //#line 388 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
    {
        x10_int __var39__;
        x10_int i;
        __var39__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
        for (i = ((x10_int)0); i <= __var39__; i++) {
            {
                
                //#line 390 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::runAt(
                  (x10::lang::Place_methods::
                     FMGL(places__get)())->apply(i),
                  x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__3>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__3)))x10MapReduce__closure__3(nodes)))));
            }
        }
    }
    
}

//#line 404 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::shuffle(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
    
    //#line 407 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 407 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 407 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var41__;
                x10_int i;
                __var41__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                for (i = ((x10_int)0); i <= __var41__; i++) {
                    {
                        
                        //#line 409 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10::lang::Runtime::runAsync(
                          (x10::lang::Place_methods::
                             FMGL(places__get)())->apply(i),
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__4>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__4)))x10MapReduce__closure__4(nodes)))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__42) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__42 = (x10aux::ref<x10::lang::Throwable>&)__ref__42;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__42)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__8__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__42);
            {
                
                //#line 407 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__8__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 407 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 407 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
    
    //#line 416 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 416 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 416 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var43__;
                x10_int i;
                __var43__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                for (i = ((x10_int)0); i <= __var43__; i++) {
                    {
                        
                        //#line 418 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10::lang::Runtime::runAt(
                          (x10::lang::Place_methods::
                             FMGL(places__get)())->apply(i),
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__5>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__5)))x10MapReduce__closure__5(nodes)))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__45) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__45 = (x10aux::ref<x10::lang::Throwable>&)__ref__45;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__45)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__9__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__45);
            {
                
                //#line 416 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__9__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 416 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 416 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
    
    //#line 440 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 440 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 440 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var46__;
                x10_int i;
                __var46__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                for (i = ((x10_int)0); i <= __var46__; i++) {
                    {
                        
                        //#line 442 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10::lang::Runtime::runAsync(
                          (x10::lang::Place_methods::
                             FMGL(places__get)())->apply(i),
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__7>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__7)))x10MapReduce__closure__7(nodes)))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__47) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__47 = (x10aux::ref<x10::lang::Throwable>&)__ref__47;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__47)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__10__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__47);
            {
                
                //#line 440 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__10__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 440 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 440 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
    
    //#line 449 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 449 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 449 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var48__;
                x10_int i;
                __var48__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                for (i = ((x10_int)0); i <= __var48__; i++) {
                    {
                        
                        //#line 451 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10::lang::Runtime::runAt(
                          (x10::lang::Place_methods::
                             FMGL(places__get)())->apply(i),
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__8>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__8)))x10MapReduce__closure__8(nodes)))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__51) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__51 = (x10aux::ref<x10::lang::Throwable>&)__ref__51;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__51)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__12__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__51);
            {
                
                //#line 449 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__12__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 449 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 449 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
}

//#line 492 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::map(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
    
    //#line 494 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
    try {
        
        //#line 494 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::startFinish();
        {
            
            //#line 494 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
            {
                x10_int __var53__;
                x10_int i;
                __var53__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                for (i = ((x10_int)0); i <= __var53__; i++) {
                    {
                        
                        //#line 496 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                        x10::lang::Runtime::runAsync(
                          (x10::lang::Place_methods::
                             FMGL(places__get)())->apply(i),
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__10>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__10)))x10MapReduce__closure__10(nodes)))));
                    }
                }
            }
            
        }
    }
    catch (x10aux::__ref& __ref__54) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__54 = (x10aux::ref<x10::lang::Throwable>&)__ref__54;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__54)) {
            x10aux::ref<x10::lang::Throwable> __desugarer__var__13__ =
              static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__54);
            {
                
                //#line 494 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::pushException(
                  __desugarer__var__13__);
            }
        } else
        throw;
    }
    } catch (...) {
        {
            
            //#line 494 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
        throw;
    }
    {
        
        //#line 494 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10::lang::Runtime::stopFinish();
    }
}

//#line 508 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
void x10MapReduce::distributeData(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes,
                                  x10aux::ref<x10::lang::String> s) {
    
    //#line 510 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int counter = ((x10_int) (((s)->length()) / (x10aux::num_hosts)));
    
    //#line 511 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int start = ((x10_int)0);
    
    //#line 512 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10_int end = ((x10_int)0);
    
    //#line 514 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
    {
        x10_int __var56__;
        x10_int i;
        __var56__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
        for (i = ((x10_int)0); i <= __var56__; i++) {
            {
                
                //#line 516 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::runAt(
                  (x10::lang::Place_methods::
                     FMGL(places__get)())->apply(i),
                  x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__11>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__11)))x10MapReduce__closure__11(nodes, s, i, counter)))));
            }
        }
    }
    
}

//#line 523 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10MethodDecl_c
#include <x10/lang/Runtime.h>
#include <x10aux/bootstrap.h>
extern "C" { int main(int ac, char **av) { return x10aux::template_main<x10::lang::Runtime,x10MapReduce>(ac,av); } }

void x10MapReduce::main(x10aux::ref<x10::lang::Rail<x10aux::ref<x10::lang::String> > > args) {
    
    //#line 525 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes =
      x10::lang::PlaceLocalHandle_methods<void>::make<x10aux::ref<x10MapReduce> >(
        x10::array::Dist::makeUnique(),
        x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Fun_0_0<x10aux::ref<x10MapReduce> > > >(x10aux::ref<x10::lang::Fun_0_0<x10aux::ref<x10MapReduce> > >(x10aux::ref<x10MapReduce__closure__12>(new (x10aux::alloc<x10::lang::Fun_0_0<x10aux::ref<x10MapReduce> > >(sizeof(x10MapReduce__closure__12)))x10MapReduce__closure__12()))));
    
    //#line 527 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::util::StringBuilder> s =
      x10::util::StringBuilder::_make();
    
    //#line 529 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
    try {
        
        //#line 531 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::io::File> fp = x10::io::File::_make(x10::lang::String::Lit("bible2.txt"));
        
        //#line 532 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::io::FileReader> fr =
          x10aux::nullCheck(fp)->openRead();
        
        //#line 534 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10While_c
        while (true) {
            
            //#line 536 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            static_cast<x10aux::ref<x10::util::StringBuilder> >(x10aux::placeCheck(x10aux::nullCheck((s)))->add(
                                                                  x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Object> >(x10aux::nullCheck(x10::io::Marshal<void>::
                                                                                                                                                    FMGL(LINE__get)())->read(
                                                                                                                                  x10aux::class_cast_unchecked<x10aux::ref<x10::io::Reader> >(fr)))));
        }
        
    }
    catch (x10aux::__ref& __ref__58) {
        x10aux::ref<x10::lang::Throwable>& __exc__ref__58 = (x10aux::ref<x10::lang::Throwable>&)__ref__58;
        if (x10aux::instanceof<x10aux::ref<x10::lang::Exception> >(__exc__ref__58)) {
            x10aux::ref<x10::lang::Exception> id__21 =
              static_cast<x10aux::ref<x10::lang::Exception> >(__exc__ref__58);
            {
                
                //#line 541 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10aux::nullCheck(x10::io::Console::
                                    FMGL(OUT__get)())->x10::io::Printer::println(
                  x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(x10::lang::String::Lit("End file read.")));
            }
        } else
        throw;
    }
    
    //#line 543 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10MapReduce::distributeData(nodes, x10aux::placeCheck(x10aux::nullCheck((s)))->result());
    
    //#line 544 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::nullCheck(x10::io::Console::FMGL(OUT__get)())->x10::io::Printer::println(
      x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(x10::lang::String::Lit("Finished distribution of file.")));
    
    //#line 548 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10MapReduce::map(nodes);
    
    //#line 549 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::nullCheck(x10::io::Console::FMGL(OUT__get)())->x10::io::Printer::println(
      x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(x10::lang::String::Lit("Done mapping.")));
    
    //#line 551 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10MapReduce::shuffle(nodes);
    
    //#line 552 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::nullCheck(x10::io::Console::FMGL(OUT__get)())->x10::io::Printer::println(
      x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(x10::lang::String::Lit("Done shuffle.")));
    
    //#line 554 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10MapReduce::sortData(nodes);
    
    //#line 555 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10aux::nullCheck(x10::io::Console::FMGL(OUT__get)())->x10::io::Printer::println(
      x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(x10::lang::String::Lit("Done sort.")));
    
    //#line 560 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
    x10MapReduce::printData(nodes);
}
const x10aux::serialization_id_t x10MapReduce::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce::_deserializer<x10::lang::Object>);

void x10MapReduce::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    
}

void x10MapReduce::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Object::_deserialize_body(buf);
    
}

x10aux::RuntimeType x10MapReduce::rtt;
void x10MapReduce::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    rtt.initStageTwo("x10MapReduce", 1, parents, 0, NULL, NULL);
}
