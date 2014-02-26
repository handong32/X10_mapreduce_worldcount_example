#ifndef __MERGESORTRAIL_H
#define __MERGESORTRAIL_H

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
namespace x10 { namespace lang { 
template<class FMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class FMGL(T), class FMGL(U)> class Pair;
} } 
#include <x10/util/Pair.struct_h>
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class FMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class FMGL(Z1), class FMGL(U)> class Fun_0_1;
} } 
class CompareTo;
class MergeSortRail : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    void _instance_init();
    
    x10_int FMGL(size);
    
    x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > >
      FMGL(tmpRail);
    
    void _constructor(x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > t);
    
    static x10aux::ref<MergeSortRail> _make(x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > t);
    
    virtual void sortRail();
    virtual x10_int mergeSortRail(x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > tmpRail,
                                  x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > aux,
                                  x10_int low,
                                  x10_int high);
    virtual void mergeRail(x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > tmpRail,
                           x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > aux,
                           x10_int low,
                           x10_int middle,
                           x10_int high);
    virtual x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > >
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
#endif // MERGESORTRAIL_H

class MergeSortRail;

#ifndef MERGESORTRAIL_H_NODEPS
#define MERGESORTRAIL_H_NODEPS
#include <x10/lang/Object.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/util/Pair.h>
#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Fun_0_1.h>
#include <CompareTo.h>
#ifndef MERGESORTRAIL_H_GENERICS
#define MERGESORTRAIL_H_GENERICS
template<class __T> x10aux::ref<__T> MergeSortRail::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<MergeSortRail> this_ = new (x10aux::alloc_remote<MergeSortRail>()) MergeSortRail();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

#endif // MERGESORTRAIL_H_GENERICS
#endif // __MERGESORTRAIL_H_NODEPS
