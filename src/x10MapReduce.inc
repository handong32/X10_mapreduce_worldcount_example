#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10MapReduce__closure__12 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10aux::ref<x10MapReduce> >::itable<x10MapReduce__closure__12> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10aux::ref<x10MapReduce> apply() {
        
        //#line 525 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10Return_c
        return x10MapReduce::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__12> this_ = new (x10aux::alloc<x10MapReduce__closure__12>()) x10MapReduce__closure__12(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        return this_;
    }
    
    x10MapReduce__closure__12(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__12() {
        
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10aux::ref<x10MapReduce> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10aux::ref<x10MapReduce> > >(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:525";
    }

};

x10::lang::Fun_0_0<x10aux::ref<x10MapReduce> >::itable<x10MapReduce__closure__12>x10MapReduce__closure__12::_itable(&x10MapReduce__closure__12::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__12::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__12::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::Fun_0_0<x10aux::ref<x10MapReduce> > >(), &x10MapReduce__closure__12::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__12::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__12::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__11 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__11> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 518 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->setData(
          (s)->substring(((x10_int) ((i) * (counter))), ((x10_int) ((((x10_int) ((i) * (counter)))) + (counter)))));
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    x10aux::ref<x10::lang::String> s;
    x10_int i;
    x10_int counter;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
        buf.write(this->s);
        buf.write(this->i);
        buf.write(this->counter);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__11> this_ = new (x10aux::alloc<x10MapReduce__closure__11>()) x10MapReduce__closure__11(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        this_->s = buf.read<x10aux::ref<x10::lang::String> >();
        this_->i = buf.read<x10_int>();
        this_->counter = buf.read<x10_int>();
        return this_;
    }
    
    x10MapReduce__closure__11(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__11(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes, x10aux::ref<x10::lang::String> s, x10_int i, x10_int counter) {
        this->nodes = nodes;
        this->s = s;
        this->i = i;
        this->counter = counter;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:517-519";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__11>x10MapReduce__closure__11::_itable(&x10MapReduce__closure__11::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__11::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__11::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__11::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__11::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__11::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__10 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__10> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 498 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->map();
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__10> this_ = new (x10aux::alloc<x10MapReduce__closure__10>()) x10MapReduce__closure__10(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__10(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__10(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:497-499";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__10>x10MapReduce__closure__10::_itable(&x10MapReduce__closure__10::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__10::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__10::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__10::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__10::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__10::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__9 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__9> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 472 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(start, ((x10_int)0))) && (x10aux::struct_equals(diff,
                                                                                   ((x10_int)0))))
        {
         
        }
        else
        {
            
            //#line 477 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::ValRail__NativeRep::copyTo(r,start,x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->
                                                            FMGL(data),x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->getCopyCounter(),((x10_int) ((diff) + (((x10_int)1)))));
            
            //#line 478 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->setCopyCounter(
              ((x10_int) ((diff) + (((x10_int)1)))));
        }
        
    }
    
    // captured environment
    x10_int start;
    x10_int diff;
    x10aux::ref<x10::lang::ValRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > r;
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->start);
        buf.write(this->diff);
        buf.write(this->r);
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__9> this_ = new (x10aux::alloc<x10MapReduce__closure__9>()) x10MapReduce__closure__9(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->start = buf.read<x10_int>();
        this_->diff = buf.read<x10_int>();
        this_->r = buf.read<x10aux::ref<x10::lang::ValRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > >();
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__9(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__9(x10_int start, x10_int diff, x10aux::ref<x10::lang::ValRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > r, x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->start = start;
        this->diff = diff;
        this->r = r;
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:470-480";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__9>x10MapReduce__closure__9::_itable(&x10MapReduce__closure__9::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__9::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__9::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__9::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__9::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__9::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__8 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__8> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 454 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::ValRail<x10::util::Pair<x10aux::ref<x10::lang::String>, x10_int> > > r =
          (x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->
             FMGL(gr))->toValRail();
        
        //#line 457 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::util::GrowableRail<x10aux::ref<MetaData> > > t =
          x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->
            FMGL(bData);
        
        //#line 460 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Try_c
        try {
        try {
            
            //#line 460 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::startFinish();
            {
                
                //#line 460 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
                {
                    x10_int __var49__;
                    x10_int j;
                    __var49__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
                    for (j = ((x10_int)0); j <= __var49__; j++) {
                        {
                            
                            //#line 465 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                            x10_int start = x10aux::placeCheck(x10aux::nullCheck(((t)->apply(j))))->getStart();
                            
                            //#line 466 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                            x10_int diff = x10aux::placeCheck(x10aux::nullCheck(((t)->apply(j))))->getDiff();
                            
                            //#line 469 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                            x10::lang::Runtime::runAt(
                              (x10::lang::Place_methods::
                                 FMGL(places__get)())->apply(j),
                              x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__9>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__9)))x10MapReduce__closure__9(start, diff, r, nodes)))));
                        }
                    }
                }
                
            }
        }
        catch (x10aux::__ref& __ref__50) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__50 = (x10aux::ref<x10::lang::Throwable>&)__ref__50;
            if (x10aux::instanceof<x10aux::ref<x10::lang::Throwable> >(__exc__ref__50)) {
                x10aux::ref<x10::lang::Throwable> __desugarer__var__11__ =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__50);
                {
                    
                    //#line 460 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                    x10::lang::Runtime::pushException(
                      __desugarer__var__11__);
                }
            } else
            throw;
        }
        } catch (...) {
            {
                
                //#line 460 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                x10::lang::Runtime::stopFinish();
            }
            throw;
        }
        {
            
            //#line 460 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10::lang::Runtime::stopFinish();
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__8> this_ = new (x10aux::alloc<x10MapReduce__closure__8>()) x10MapReduce__closure__8(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__8(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__8(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:452-483";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__8>x10MapReduce__closure__8::_itable(&x10MapReduce__closure__8::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__8::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__8::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__8::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__8::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__8::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__7 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__7> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 444 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->setRailData();
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__7> this_ = new (x10aux::alloc<x10MapReduce__closure__7>()) x10MapReduce__closure__7(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__7(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__7(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:443-445";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__7>x10MapReduce__closure__7::_itable(&x10MapReduce__closure__7::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__7::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__7::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__7::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__7::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__7::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__6 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__6> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 427 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(start, ((x10_int)0))) && (x10aux::struct_equals(diff,
                                                                                   ((x10_int)0))))
        {
         
        }
        else
        {
            
            //#line 432 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
            x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->setDataRailLength(
              diff);
        }
        
    }
    
    // captured environment
    x10_int start;
    x10_int diff;
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->start);
        buf.write(this->diff);
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__6> this_ = new (x10aux::alloc<x10MapReduce__closure__6>()) x10MapReduce__closure__6(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->start = buf.read<x10_int>();
        this_->diff = buf.read<x10_int>();
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__6(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__6(x10_int start, x10_int diff, x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->start = start;
        this->diff = diff;
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:426-434";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__6>x10MapReduce__closure__6::_itable(&x10MapReduce__closure__6::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__6::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__6::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__6::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__6::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__6::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 420 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.ForLoop_c
        {
            x10_int __var44__;
            x10_int j;
            __var44__ = ((x10_int) ((x10aux::num_hosts) - (((x10_int)1))));
            for (j = ((x10_int)0); j <= __var44__; j++) {
                {
                    
                    //#line 422 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                    x10_int start = x10aux::placeCheck(x10aux::nullCheck(((x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->
                                                                             FMGL(bData))->apply(j))))->getStart();
                    
                    //#line 423 "/home/han6/x10MapReduce/x10MapReduce.x10": x10.ast.X10LocalDecl_c
                    x10_int diff = x10aux::placeCheck(x10aux::nullCheck(((x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->
                                                                            FMGL(bData))->apply(j))))->getDiff();
                    
                    //#line 425 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
                    x10::lang::Runtime::runAt((x10::lang::Place_methods::
                                                 FMGL(places__get)())->apply(j),
                                              x10aux::class_cast_unchecked<x10aux::ref<x10::lang::VoidFun_0_0> >(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<x10MapReduce__closure__6>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(x10MapReduce__closure__6)))x10MapReduce__closure__6(start, diff, nodes)))));
                }
            }
        }
        
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__5> this_ = new (x10aux::alloc<x10MapReduce__closure__5>()) x10MapReduce__closure__5(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__5(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__5(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:419-436";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__5>x10MapReduce__closure__5::_itable(&x10MapReduce__closure__5::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__5::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__5::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__5::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 411 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->boundaryData();
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__4> this_ = new (x10aux::alloc<x10MapReduce__closure__4>()) x10MapReduce__closure__4(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__4(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__4(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:410-412";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__4>x10MapReduce__closure__4::_itable(&x10MapReduce__closure__4::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__4::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__4::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__4::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 392 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->print();
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__3> this_ = new (x10aux::alloc<x10MapReduce__closure__3>()) x10MapReduce__closure__3(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__3(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__3(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:391-393";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__3>x10MapReduce__closure__3::_itable(&x10MapReduce__closure__3::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__3::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__3::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__3::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 376 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->merge();
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__2> this_ = new (x10aux::alloc<x10MapReduce__closure__2>()) x10MapReduce__closure__2(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__2(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__2(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:375-377";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__2>x10MapReduce__closure__2::_itable(&x10MapReduce__closure__2::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__2::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__2::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__2::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
     
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__1> this_ = new (x10aux::alloc<x10MapReduce__closure__1>()) x10MapReduce__closure__1(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        return this_;
    }
    
    x10MapReduce__closure__1(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__1() {
        
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:367-369";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__1>x10MapReduce__closure__1::_itable(&x10MapReduce__closure__1::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__1::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__1::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__1::_deserialize<x10::lang::Object>);

#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10MapReduce__closure__0 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__0> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void apply() {
        
        //#line 360 "/home/han6/x10MapReduce/x10MapReduce.x10": polyglot.ast.Eval_c
        x10aux::nullCheck(x10::lang::PlaceLocalHandle_methods<x10aux::ref<x10MapReduce> >::apply(nodes))->sort();
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nodes);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        x10aux::ref<x10MapReduce__closure__0> this_ = new (x10aux::alloc<x10MapReduce__closure__0>()) x10MapReduce__closure__0(x10aux::SERIALIZATION_MARKER());
        buf.record_reference(this_); // TODO: avoid; closure
        this_->nodes = buf.read<x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > >();
        return this_;
    }
    
    x10MapReduce__closure__0(x10aux::SERIALIZATION_MARKER) { }
    
    x10MapReduce__closure__0(x10::lang::PlaceLocalHandle<x10aux::ref<x10MapReduce> > nodes) {
        this->nodes = nodes;
    }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10::lang::String::Lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/han6/x10MapReduce/x10MapReduce.x10:359-361";
    }

};

x10::lang::VoidFun_0_0::itable<x10MapReduce__closure__0>x10MapReduce__closure__0::_itable(&x10MapReduce__closure__0::apply, &x10::lang::Reference::at, &x10::lang::Reference::at, &x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &x10::lang::Reference::home, &x10MapReduce__closure__0::toString, &x10::lang::Closure::typeName);x10aux::itable_entry x10MapReduce__closure__0::_itables[2] = {x10aux::itable_entry(x10aux::getRTT<x10::lang::VoidFun_0_0>(), &x10MapReduce__closure__0::_itable),x10aux::itable_entry(NULL, NULL)};
const x10aux::serialization_id_t x10MapReduce__closure__0::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(x10MapReduce__closure__0::_deserialize<x10::lang::Object>);

