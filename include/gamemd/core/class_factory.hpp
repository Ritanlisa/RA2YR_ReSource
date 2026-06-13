// TClassFactory<T> — ATL-style COM class factory template
// IDA: instantiated for ~60 game classes, each generating:
//   QueryInterface, AddRef, Release, CreateInstance, LockServer
// Replaces YRpp/YRCom.h TClassFactory with project conventions.
#pragma once

#include <windows.h>
#include <Unknwn.h>

#include "memory.hpp"

namespace gamemd {

template <typename T>
class TClassFactory : public IClassFactory
{
public:
    // IDA: constructor pattern — zero refcount
    TClassFactory() noexcept
        : m_ref_count(0)
    {
    }

    // IDA: vtable[0][0] — QueryInterface
    // Checks IUnknown and IClassFactory IIDs.
    HRESULT __stdcall QueryInterface(const IID& riid, void** ppvObject) override
    {
        if (!ppvObject)
            return E_POINTER;  // 0x80004003

        *ppvObject = nullptr;

        if (riid == IID_IUnknown)
            *ppvObject = static_cast<IUnknown*>(this);
        else if (riid == IID_IClassFactory)
            *ppvObject = static_cast<IClassFactory*>(this);

        if (!*ppvObject)
            return E_NOINTERFACE;  // 0x80004002

        AddRef();
        return S_OK;
    }

    // IDA: vtable[0][1] — AddRef (InterlockedIncrement)
    ULONG __stdcall AddRef() override
    {
        return static_cast<ULONG>(
            InterlockedIncrement(reinterpret_cast<LONG*>(&m_ref_count)));
    }

    // IDA: vtable[0][2] — Release (InterlockedDecrement + delete on zero)
    ULONG __stdcall Release() override
    {
        LONG new_ref = InterlockedDecrement(reinterpret_cast<LONG*>(&m_ref_count));
        if (new_ref == 0)
            GameDelete(this);
        return static_cast<ULONG>(new_ref);
    }

    // IDA: vtable[0][3] — CreateInstance
    // Allocates T via GameCreate, calls T::QueryInterface.
    HRESULT __stdcall CreateInstance(IUnknown* pUnkOuter,
                                      const IID& riid,
                                      void** ppvObject) override
    {
        if (!ppvObject)
            return E_INVALIDARG;

        *ppvObject = nullptr;

        if (pUnkOuter)
            return CLASS_E_NOAGGREGATION;  // 0x80040110

        T* instance = GameCreate<T>();
        if (!instance)
            return E_OUTOFMEMORY;  // 0x8007000E

        HRESULT hr = instance->QueryInterface(riid, ppvObject);
        if (FAILED(hr))
            GameDelete(instance);

        return hr;
    }

    // IDA: vtable[0][4] — LockServer (bumps refcount)
    HRESULT __stdcall LockServer(BOOL fLock) override
    {
        if (fLock)
            InterlockedIncrement(reinterpret_cast<LONG*>(&m_ref_count));
        else
            InterlockedDecrement(reinterpret_cast<LONG*>(&m_ref_count));
        return S_OK;
    }

private:
    int m_ref_count;
};

} // namespace gamemd
