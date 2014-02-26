#ifndef __MERGESORT_H
#define __MERGESORT_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
#define X10_LANG_INT_STRUCT_H_NODEPS
#include <x10/lang/Int.struct_h>
#undef X10_LANG_INT_STRUCT_H_NODEPS
namespace x10 { namespace util { 
template<class FMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace util { 
template<class FMGL(T), class FMGL(U)> class Pair;
} } 
#include <x10/util/Pair.struct_h>
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
#include <x10/lang/Int.struct_h>
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class FMGL(Z1), class FMGL(U)> class Fun_0_1;
} } 
class CompareTo;
class MergeSort : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    void _instance_init();
    
    x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > >
      FMGL(tmp);
    
    x10_int FMGL(size);
    
    void _constructor(x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > gr);
    
    static x10aux::ref<MergeSort> _make(x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > gr);
    
    virtual void sort();
    virtual x10_int mergeSort(x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > tmp,
                              x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > aux,
                              x10_int low,
                              x10_int high);
    virtual void merge(x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > tmp,
                       x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > aux,
                       x10_int low,
                       x10_int middle,
                       x10_int high);
    virtual x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > >
      getVariable(
      );
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: template<class __T> static x10aux::ref<__T> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};
#endif // MERGESORT_H

class MergeSort;

#ifndef MERGESORT_H_NODEPS
#define MERGESORT_H_NODEPS
#include <x10/lang/Object.h>
#include <x10/util/GrowableRail.h>
#include <x10/util/Pair.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Fun_0_1.h>
#include <CompareTo.h>
#ifndef MERGESORT_H_GENERICS
#define MERGESORT_H_GENERICS
template<class __T> x10aux::ref<__T> MergeSort::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<MergeSort> this_ = new (x10aux::alloc_remote<MergeSort>()) MergeSort();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

#endif // MERGESORT_H_GENERICS
#endif // __MERGESORT_H_NODEPS
