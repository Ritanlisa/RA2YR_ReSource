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
    static SmudgeTypeClass* Find(const char* pID);  // 0x6B5260
    static SmudgeTypeClass* FindOrCreate(const char* pID); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static int FindIndex(const char* pID); // IDA: NOT_FOUND

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x6B58D0 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x6B5850 (as LoadTypeData)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // 0x6B58B0 (as SaveToINI)

    virtual ~SmudgeTypeClass() = default;  // 0x6B6160 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x6B6130 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x6B6140 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override; // IDA: NOT_FOUND
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override;  // 0x4737F0

    virtual void onTypeLoaded(DWORD dwUnk, DWORD dwUnk2, DWORD dwUnk3, DWORD dwUnk4, DWORD dwUnk5); // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
