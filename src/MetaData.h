#ifndef __METADATA_H
#define __METADATA_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
#define X10_LANG_INT_STRUCT_H_NODEPS
#include <x10/lang/Int.struct_h>
#undef X10_LANG_INT_STRUCT_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
#include <x10/lang/Int.struct_h>
class MetaData : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    void _instance_init();
    
    x10_int FMGL(startIndex);
    
    x10_int FMGL(endIndex);
    
    void _constructor(x10_int i, x10_int j);
    
    static x10aux::ref<MetaData> _make(x10_int i, x10_int j);
    
    virtual x10_int getStart();
    virtual x10_int getEnd();
    virtual x10_int getDiff();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: template<class __T> static x10aux::ref<__T> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};
#endif // METADATA_H

class MetaData;

#ifndef METADATA_H_NODEPS
#define METADATA_H_NODEPS
#include <x10/lang/Object.h>
#include <x10/lang/Int.h>
#ifndef METADATA_H_GENERICS
#define METADATA_H_GENERICS
template<class __T> x10aux::ref<__T> MetaData::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<MetaData> this_ = new (x10aux::alloc_remote<MetaData>()) MetaData();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

#endif // METADATA_H_GENERICS
#endif // __METADATA_H_NODEPS
