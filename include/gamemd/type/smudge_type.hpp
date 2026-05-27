#pragma once

#include "object_type.hpp"
#include "..\core\enums.hpp"

namespace gamemd
{

class SmudgeTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::SmudgeType;

    static DynamicVectorClass<SmudgeTypeClass*>* Array;
    static SmudgeTypeClass* Find(const char* pID);
    static SmudgeTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~SmudgeTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::SmudgeType; }
    virtual int Size() const override { return 0; }

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    virtual void vt_entry_A0(DWORD dwUnk, DWORD dwUnk2, DWORD dwUnk3, DWORD dwUnk4, DWORD dwUnk5) {}

    SmudgeTypeClass(const char* pID) noexcept;

protected:
    SmudgeTypeClass(noinit_t) noexcept;

public:
    int ArrayIndex;
    int Width;
    int Height;
    bool Crater;
    bool Burn;
};

} // namespace gamemd
