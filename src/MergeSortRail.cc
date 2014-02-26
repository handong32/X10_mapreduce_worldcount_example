#include <MergeSortRail.h>


#include "MergeSortRail.inc"

void MergeSortRail::_instance_init() {
    _I_("Doing initialisation for class: MergeSortRail");
    
}


//#line 15 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10FieldDecl_c

//#line 16 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10FieldDecl_c

//#line 18 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10ConstructorDecl_c
void MergeSortRail::_constructor(x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > t)
{
    this->x10::lang::Object::_constructor();
    
    //#line 15 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<MergeSortRail>)this))->
      FMGL(size) =
      ((x10_int)0);
    
    //#line 16 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<MergeSortRail>)this))->
      FMGL(tmpRail) =
      x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > >(x10aux::null);
    
    //#line 20 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<MergeSortRail>)this))->
      FMGL(size) =
      x10aux::nullCheck(t)->x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::length();
    
    //#line 21 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<MergeSortRail>)this))->
      FMGL(tmpRail) =
      t;
    
}
x10aux::ref<MergeSortRail> MergeSortRail::_make(
  x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > t)
{
    x10aux::ref<MergeSortRail> this_ = new (x10aux::alloc<MergeSortRail>()) MergeSortRail();
    this_->_constructor(t);
    return this_;
}



//#line 24 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10MethodDecl_c
void MergeSortRail::sortRail() {
    
    //#line 26 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > aux =
      x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> >::make(((x10aux::ref<MergeSortRail>)this)->
                                                                                         FMGL(size));
    
    //#line 27 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
    ((x10aux::ref<MergeSortRail>)this)->mergeSortRail(
      ((x10aux::ref<MergeSortRail>)this)->
        FMGL(tmpRail),
      aux,
      ((x10_int)0),
      ((x10aux::ref<MergeSortRail>)this)->
        FMGL(size));
}

//#line 30 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10MethodDecl_c
x10_int MergeSortRail::mergeSortRail(x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > tmpRail,
                                     x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > aux,
                                     x10_int low,
                                     x10_int high) {
    
    //#line 34 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10If_c
    if (((((x10_int) ((high) - (low)))) <= (((x10_int)1))))
    {
        
        //#line 36 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10Return_c
        return ((x10_int)0);
        
    }
    
    //#line 39 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10LocalDecl_c
    x10_int middle = ((x10_int) ((low) + (((x10_int) ((((x10_int) ((high) - (low)))) / (((x10_int)2)))))));
    
    //#line 40 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
    ((x10aux::ref<MergeSortRail>)this)->mergeSortRail(
      tmpRail,
      aux,
      low,
      middle);
    
    //#line 41 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
    ((x10aux::ref<MergeSortRail>)this)->mergeSortRail(
      tmpRail,
      aux,
      middle,
      high);
    
    //#line 42 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
    ((x10aux::ref<MergeSortRail>)this)->mergeRail(
      tmpRail,
      aux,
      low,
      middle,
      high);
    
    //#line 44 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10Return_c
    return ((x10_int)0);
    
}

//#line 47 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10MethodDecl_c
void MergeSortRail::mergeRail(x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > tmpRail,
                              x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > aux,
                              x10_int low,
                              x10_int middle,
                              x10_int high) {
    
    //#line 51 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10LocalDecl_c
    x10_int i = low;
    
    //#line 52 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10LocalDecl_c
    x10_int j = middle;
    
    //#line 54 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.For_c
    {
        x10_int k;
        for (
             //#line 54 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10LocalDecl_c
             k = low; ((k) < (high)); 
                                      //#line 54 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
                                      k +=
                                        ((x10_int)1))
        {
            
            //#line 56 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(i,
                                       middle)))
            {
                
                //#line 58 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
                (aux)->set((tmpRail)->apply((__extension__ ({
                    x10_int t =
                      j +=
                      ((x10_int)1);
                    ((x10_int) ((t) - (((x10_int)1))));
                }))
                ), k);
            }
            else
            
            //#line 60 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(j,
                                       high)))
            {
                
                //#line 62 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
                (aux)->set((tmpRail)->apply((__extension__ ({
                    x10_int t =
                      i +=
                      ((x10_int)1);
                    ((x10_int) ((t) - (((x10_int)1))));
                }))
                ), k);
            }
            else
            
            //#line 64 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals((CompareTo::strcmp(
                                          (tmpRail)->apply(j)->
                                            FMGL(first),
                                          (tmpRail)->apply(i)->
                                            FMGL(first))),
                                       ((x10_int)-1))))
            {
                
                //#line 66 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
                (aux)->set((tmpRail)->apply((__extension__ ({
                    x10_int t =
                      j +=
                      ((x10_int)1);
                    ((x10_int) ((t) - (((x10_int)1))));
                }))
                ), k);
            }
            else
            {
                
                //#line 70 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
                (aux)->set((tmpRail)->apply((__extension__ ({
                    x10_int t =
                      i +=
                      ((x10_int)1);
                    ((x10_int) ((t) - (((x10_int)1))));
                }))
                ), k);
            }
            
        }
    }
    
    //#line 74 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.For_c
    {
        x10_int k;
        for (
             //#line 74 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10LocalDecl_c
             k = low; ((k) < (high)); 
                                      //#line 74 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
                                      k +=
                                        ((x10_int)1))
        {
            
            //#line 76 "/home/han6/x10MapReduce/MergeSortRail.x10": polyglot.ast.Eval_c
            (tmpRail)->set((aux)->apply(k), k);
        }
    }
    
}

//#line 80 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10MethodDecl_c
x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > >
  MergeSortRail::getVariable(
  ) {
    
    //#line 82 "/home/han6/x10MapReduce/MergeSortRail.x10": x10.ast.X10Return_c
    return ((x10aux::ref<MergeSortRail>)this)->
             FMGL(tmpRail);
    
}
const x10aux::serialization_id_t MergeSortRail::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(MergeSortRail::_deserializer<x10::lang::Object>);

void MergeSortRail::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    
}

void MergeSortRail::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Object::_deserialize_body(buf);
    
}

x10aux::RuntimeType MergeSortRail::rtt;
void MergeSortRail::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    rtt.initStageTwo("MergeSortRail", 1, parents, 0, NULL, NULL);
}
