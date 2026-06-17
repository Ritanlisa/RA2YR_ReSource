#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class AnimTypeClass;

class OverlayTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::OverlayType;

    static DynamicVectorClass<OverlayTypeClass*>* Array;
    static OverlayTypeClass* Find(const char* pID);  // 0x5fe250
    static OverlayTypeClass* FindOrAllocate(const char* pID);  // 0x5fe250
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }  // 0x5fec30 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }  // 0x5fe770 (as LoadFromINI)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~OverlayTypeClass() = default;  // 0x5fef30 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::OverlayType; }  // 0x5fef00 (as GetTypeIdentifier)
    virtual int objectSize() const override { return 0; }  // 0x5fef10 (as GetObjectSize)

    virtual CoordStruct* onCellChanged(CoordStruct* pDest, CoordStruct* pSrc) const override { return nullptr; }

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    virtual void Draw(Point2D* pClientCoords, RectangleStruct* pClipRect, int nFrame) {}

    OverlayTypeClass(const char* pID) noexcept;  // 0x6440a0 (as Construct)

protected:
    OverlayTypeClass(noinit_t) noexcept;  // 0x6440a0 (as Construct)

public:
    int ArrayIndex;
    LandType LandType;
    AnimTypeClass* CellAnim;
    int DamageLevels;
    int Strength;
    bool Wall;
    bool Tiberium;
    bool Crate;
    bool CrateTrigger;
    bool NoUseTileLandType;
    bool IsVeinholeMonster;
    bool IsVeins;
    bool ImageLoaded;
    bool Explodes;
    bool ChainReaction;
    bool Overrides;
    bool DrawFlat;
    bool IsRubble;
    bool IsARock;
    ColorStruct RadarColor;
};

} // namespace gamemd
