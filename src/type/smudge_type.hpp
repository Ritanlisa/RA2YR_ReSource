#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class SmudgeTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::SmudgeType;

    static DynamicVectorClass<SmudgeTypeClass*>* Array;
    static SmudgeTypeClass* Find(const char* pID);  // 0x6b5260
    static SmudgeTypeClass* FindOrAllocate(const char* pID);  // 0x6b5260
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }  // 0x6b58d0 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }  // 0x6b5850 (as LoadTypeData)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }  // 0x6b58b0 (as SaveToINI)

    virtual ~SmudgeTypeClass() = default;  // 0x6b6160 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::SmudgeType; }  // 0x6b6130 (as GetTypeIdentifier)
    virtual int objectSize() const override { return 0; }  // 0x6b6140 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    virtual void onTypeLoaded(DWORD dwUnk, DWORD dwUnk2, DWORD dwUnk3, DWORD dwUnk4, DWORD dwUnk5) {}

    SmudgeTypeClass(const char* pID) noexcept;  // 0x6b5260

protected:
    SmudgeTypeClass(noinit_t) noexcept;  // 0x6b5260

public:
    int ArrayIndex;
    int Width;
    int Height;
    bool Crater;
    bool Burn;
};

} // namespace gamemd
