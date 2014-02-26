#ifndef __X10MAPREDUCE_H
#define __X10MAPREDUCE_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
#define X10_LANG_INT_STRUCT_H_NODEPS
#include <x10/lang/Int.struct_h>
#undef X10_LANG_INT_STRUCT_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class FMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class FMGL(T), class FMGL(U)> class Pair;
} } 
#include <x10/util/Pair.struct_h>
namespace x10 { namespace lang { 
class Int;
} } 
#include <x10/lang/Int.struct_h>
namespace x10 { namespace util { 
template<class FMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace util { 
template<class FMGL(T)> class GrowableRail;
} } 
class MetaData;
namespace x10 { namespace lang { 
class Place;
} } 
#include <x10/lang/Place.struct_h>
namespace x10 { namespace lang { 
template<class FMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
class Throwable;
} } 
namespace x10 { namespace lang { 
template<class FMGL(T)> class ValRail;
} } 
class MergeSort;
namespace x10 { namespace lang { 
class Boolean;
} } 
#include <x10/lang/Boolean.struct_h>
class MergeSortRail;
namespace x10 { namespace lang { 
template<class FMGL(T)> class PlaceLocalHandle;
} } 
#include <x10/lang/PlaceLocalHandle.struct_h>
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class FMGL(T)> class ValRail;
} } 
namespace x10 { namespace lang { 
template<class FMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class FMGL(T)> class PlaceLocalHandle;
} } 
#include <x10/lang/PlaceLocalHandle.struct_h>
namespace x10 { namespace array { 
class Dist;
} } 
namespace x10 { namespace lang { 
template<class FMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace io { 
template<class FMGL(T)> class Marshal;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
class x10MapReduce : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    void _instance_init();
    
    static x10aux::ref<x10::lang::String> FMGL(s);
    
    static void FMGL(s__do_init)();
    static void FMGL(s__init)();
    static volatile x10aux::status FMGL(s__status);
    static x10aux::ref<x10::lang::String> FMGL(s__get)() {
        if (FMGL(s__status) != x10aux::INITIALIZED) {
            FMGL(s__init)();
        }
        return x10MapReduce::FMGL(s);
    }
    static x10aux::ref<x10::lang::Object> FMGL(s__deserialize)(x10aux::deserialization_buffer &buf);
    static const x10aux::serialization_id_t FMGL(s__id);
    
    x10aux::ref<x10::lang::Rail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > >
      FMGL(data);
    
    x10aux::ref<x10::util::GrowableRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > >
      FMGL(gr);
    
    x10aux::ref<x10::util::GrowableRail<x10aux::ref<MetaData> > >
      FMGL(bData);
    
    x10aux::ref<x10::lang::String> FMGL(fileData);
    
    x10_int FMGL(copyCounter);
    
    x10_int FMGL(dataRailLength);
    
    void _constructor();
    
    static x10aux::ref<x10MapReduce> _make();
    
    virtual x10_int getCopyCounter();
    virtual void setCopyCounter(x10_int i);
    virtual void setData(x10aux::ref<x10::lang::String> d);
    virtual x10_int getDataRailLength();
    virtual void setDataRailLength(x10_int i);
    virtual void setRailData();
    virtual void print();
    virtual void printGR();
    virtual void map();
    virtual void merge();
    virtual void intermediateMerge();
    virtual void emit(x10aux::ref<x10::lang::String> s, x10_int i);
    virtual void intermediateMergeSort();
    virtual void boundaryData();
    virtual x10aux::ref<x10::lang::String> prepareWord(x10aux::ref<x10::lang::String> word);
    virtual void sort();
    static void sortData(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes);
    static void printData(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes);
    static void shuffle(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes);
    static void map(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes);
    static void distributeData(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes,
                               x10aux::ref<x10::lang::String> s);
    static void main(x10aux::ref<x10::lang::Rail<x10aux::ref<x10::lang::String> > > args);
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: template<class __T> static x10aux::ref<__T> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};
#endif // X10MAPREDUCE_H

class x10MapReduce;

#ifndef X10MAPREDUCE_H_NODEPS
#define X10MAPREDUCE_H_NODEPS
#include <x10/lang/Object.h>
#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/util/Pair.h>
#include <x10/lang/Int.h>
#include <x10/util/GrowableRail.h>
#include <x10/util/GrowableRail.h>
#include <MetaData.h>
#include <x10/lang/Place.h>
#include <x10/lang/Rail.h>
#include <x10/io/Console.h>
#include <x10/lang/Runtime.h>
#include <x10/array/Point.h>
#include <x10/array/Region.h>
#include <x10/lang/Throwable.h>
#include <x10/lang/ValRail.h>
#include <MergeSort.h>
#include <x10/lang/Boolean.h>
#include <MergeSortRail.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/ValRail.h>
#include <x10/lang/Rail.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/array/Dist.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/util/StringBuilder.h>
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/io/Marshal.h>
#include <x10/lang/Exception.h>
#ifndef X10MAPREDUCE_H_GENERICS
#define X10MAPREDUCE_H_GENERICS
template<class __T> x10aux::ref<__T> x10MapReduce::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<x10MapReduce> this_ = new (x10aux::alloc_remote<x10MapReduce>()) x10MapReduce();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

#endif // X10MAPREDUCE_H_GENERICS
#endif // __X10MAPREDUCE_H_NODEPS
