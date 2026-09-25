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
    static SmudgeTypeClass* Find(const char* pID);
    // unmatched: no callgraph reference and no git history record
    static SmudgeTypeClass* FindOrCreate(const char* pID);
    // wrapper: delegates to SmudgeTypeClass::SmudgeTypeClass at 0x6B5260
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x6B58D0 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x6B5850 (as LoadTypeData)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // 0x6B58B0 (as SaveToINI)

    virtual ~SmudgeTypeClass() = default;  // 0x6B6160 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x6B6130 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x6B6140 (as GetObjectSize)

    // wrapper: delegates to SmudgeTypeClass::GetObjectSize at 0x6B6140
    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override;
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override;  // 0x4737F0

    // unmatched: no callgraph reference and no git history record
    virtual void onTypeLoaded(DWORD dwUnk, DWORD dwUnk2, DWORD dwUnk3, DWORD dwUnk4, DWORD dwUnk5);

    SmudgeTypeClass(const char* pID) noexcept;

protected:
    SmudgeTypeClass(noinit_t) noexcept;

public:
    int ArrayIndex;
    int Width;
    int Height;
    bool Crater;
    bool Burn;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    bool GetType(int a1, int a2);  // 0x6b5550 -- SmudgeTypeClass::GetType
    void* GetFlag(int a1);  // 0x6b55c0 -- SmudgeTypeClass::GetFlag
    void vt_entry_A0(int a1, int a2, int a3, int a4, int a5);  // 0x6b55f0 -- SmudgeTypeClass::vt_entry_A0
    int GetSize(int a1);  // 0x6b56d0 -- SmudgeTypeClass::GetSize
    int PowerDrainUpdate(int a1);  // 0x6b57f0 -- SmudgeTypeClass::PowerDrainUpdate
    int GetAuxField();  // 0x6b6150 -- SmudgeTypeClass::GetAuxField
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
