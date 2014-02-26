#include <CompareTo.h>


#include "CompareTo.inc"

void CompareTo::_instance_init() {
    _I_("Doing initialisation for class: CompareTo");
    
}


//#line 8 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10MethodDecl_c
x10_int CompareTo::strcmp(x10aux::ref<x10::lang::String> s1, x10aux::ref<x10::lang::String> s2) {
    
    //#line 10 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10LocalDecl_c
    x10_int counter = ((x10_int)0);
    
    //#line 11 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10LocalDecl_c
    x10_int a = (s1)->length();
    
    //#line 12 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10LocalDecl_c
    x10_int b = (s2)->length();
    
    //#line 14 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10If_c
    if (((a) < (b))) {
        
        //#line 16 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.ForLoop_c
        {
            x10_int __var59__;
            x10_int i;
            __var59__ = ((x10_int) ((a) - (((x10_int)1))));
            for (i = ((x10_int)0); i <= __var59__; i++) {
                {
                    
                    //#line 18 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10If_c
                    if ((((s1)->charAt(i)) < ((s2)->charAt(i)))) {
                        
                        //#line 20 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
                        counter = ((x10_int)-1);
                        
                        //#line 21 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Branch_c
                        break;
                    } else 
                    //#line 23 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10If_c
                    if ((((s1)->charAt(i)) > ((s2)->charAt(i)))) {
                        
                        //#line 25 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
                        counter = ((x10_int)1);
                        
                        //#line 26 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Branch_c
                        break;
                    } else {
                        
                        //#line 30 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
                        counter = ((x10_int)0);
                    }
                    
                }
            }
        }
        
    } else {
        
        //#line 36 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.ForLoop_c
        {
            x10_int __var60__;
            x10_int i;
            __var60__ = ((x10_int) ((b) - (((x10_int)1))));
            for (i = ((x10_int)0); i <= __var60__; i++) {
                {
                    
                    //#line 38 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10If_c
                    if ((((s2)->charAt(i)) < ((s1)->charAt(i)))) {
                        
                        //#line 40 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
                        counter = ((x10_int)1);
                        
                        //#line 41 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Branch_c
                        break;
                    } else 
                    //#line 43 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10If_c
                    if ((((s2)->charAt(i)) > ((s1)->charAt(i)))) {
                        
                        //#line 45 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
                        counter = ((x10_int)-1);
                        
                        //#line 46 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Branch_c
                        break;
                    } else {
                        
                        //#line 50 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
                        counter = ((x10_int)0);
                    }
                    
                }
            }
        }
        
    }
    
    //#line 55 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(counter, ((x10_int)0)))) {
        
        //#line 57 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10If_c
        if (((a) < (b))) {
            
            //#line 59 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
            counter = ((x10_int)-1);
        } else 
        //#line 61 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10If_c
        if (((b) > (a))) {
            
            //#line 63 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
            counter = ((x10_int)1);
        } else {
            
            //#line 67 "/home/han6/x10MapReduce/CompareTo.x10": polyglot.ast.Eval_c
            counter = ((x10_int)0);
        }
        
    }
    
    //#line 71 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10Return_c
    return counter;
    
}

//#line 7 "/home/han6/x10MapReduce/CompareTo.x10": x10.ast.X10ConstructorDecl_c
void CompareTo::_constructor() {
    this->x10::lang::Object::_constructor();
    
}
x10aux::ref<CompareTo> CompareTo::_make() {
    x10aux::ref<CompareTo> this_ = new (x10aux::alloc<CompareTo>()) CompareTo();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t CompareTo::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(CompareTo::_deserializer<x10::lang::Object>);

void CompareTo::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    
}

void CompareTo::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Object::_deserialize_body(buf);
    
}

x10aux::RuntimeType CompareTo::rtt;
void CompareTo::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    rtt.initStageTwo("CompareTo", 1, parents, 0, NULL, NULL);
}
