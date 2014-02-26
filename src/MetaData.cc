#include <MetaData.h>


#include "MetaData.inc"

void MetaData::_instance_init() {
    _I_("Doing initialisation for class: MetaData");
    
}


//#line 14 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10FieldDecl_c

//#line 15 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10FieldDecl_c

//#line 17 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10ConstructorDecl_c
void MetaData::_constructor(x10_int i, x10_int j) {
    this->x10::lang::Object::_constructor();
    
    //#line 14 "/home/han6/x10MapReduce/MetaData.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<MetaData>)this))->FMGL(startIndex) =
      ((x10_int)0);
    
    //#line 15 "/home/han6/x10MapReduce/MetaData.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<MetaData>)this))->FMGL(endIndex) = ((x10_int)0);
    
    //#line 19 "/home/han6/x10MapReduce/MetaData.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<MetaData>)this))->FMGL(startIndex) =
      i;
    
    //#line 20 "/home/han6/x10MapReduce/MetaData.x10": polyglot.ast.Eval_c
    x10aux::placeCheck(((x10aux::ref<MetaData>)this))->FMGL(endIndex) = j;
    
}
x10aux::ref<MetaData> MetaData::_make(x10_int i, x10_int j) {
    x10aux::ref<MetaData> this_ = new (x10aux::alloc<MetaData>()) MetaData();
    this_->_constructor(i, j);
    return this_;
}



//#line 23 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10MethodDecl_c
x10_int MetaData::getStart() {
    
    //#line 25 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10Return_c
    return ((x10aux::ref<MetaData>)this)->FMGL(startIndex);
    
}

//#line 28 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10MethodDecl_c
x10_int MetaData::getEnd() {
    
    //#line 30 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10Return_c
    return ((x10aux::ref<MetaData>)this)->FMGL(endIndex);
    
}

//#line 33 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10MethodDecl_c
x10_int MetaData::getDiff() {
    
    //#line 35 "/home/han6/x10MapReduce/MetaData.x10": x10.ast.X10Return_c
    return ((x10_int) ((((x10aux::ref<MetaData>)this)->FMGL(endIndex)) - (((x10aux::ref<MetaData>)this)->
                                                                            FMGL(startIndex))));
    
}
const x10aux::serialization_id_t MetaData::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(MetaData::_deserializer<x10::lang::Object>);

void MetaData::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    
}

void MetaData::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Object::_deserialize_body(buf);
    
}

x10aux::RuntimeType MetaData::rtt;
void MetaData::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    rtt.initStageTwo("MetaData", 1, parents, 0, NULL, NULL);
}
