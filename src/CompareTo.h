#ifndef __COMPARETO_H
#define __COMPARETO_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
#include <x10/lang/Int.struct_h>
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace array { 
class Region;
} } 
class CompareTo : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    void _instance_init();
    
    static x10_int strcmp(x10aux::ref<x10::lang::String> s1, x10aux::ref<x10::lang::String> s2);
    void _constructor();
    
    static x10aux::ref<CompareTo> _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: template<class __T> static x10aux::ref<__T> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};
#endif // COMPARETO_H

class CompareTo;

#ifndef COMPARETO_H_NODEPS
#define COMPARETO_H_NODEPS
#include <x10/lang/Object.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/array/Point.h>
#include <x10/array/Region.h>
#ifndef COMPARETO_H_GENERICS
#define COMPARETO_H_GENERICS
template<class __T> x10aux::ref<__T> CompareTo::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<CompareTo> this_ = new (x10aux::alloc_remote<CompareTo>()) CompareTo();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

#endif // COMPARETO_H_GENERICS
#endif // __COMPARETO_H_NODEPS
