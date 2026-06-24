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
    static OverlayTypeClass* Find(const char* pID);
    // unmatched: no callgraph reference and no git history record
    static OverlayTypeClass* FindOrCreate(const char* pID);
    // wrapper: delegates to OverlayTypeClass::OverlayTypeClass at 0x5FE250
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x5FEC30 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x5FE770 (as LoadFromINI)
    // wrapper: delegates to OverlayTypeClass::LoadFromINI at 0x5FE770
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~OverlayTypeClass() = default;  // 0x5FEF30 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x5FEF00 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x5FEF10 (as GetObjectSize)

    // unmatched: no callgraph reference and no git history record
    virtual CoordStruct* onCellChanged(CoordStruct* pDest, CoordStruct* pSrc) const override;

    // wrapper: delegates to OverlayTypeClass::GetObjectSize at 0x5FEF10
    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override;
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override;  // 0x4737F0

    // wrapper: delegates to ReinforcementClass::CreateObject at 0x4737F0
    virtual void Draw(Point2D* pClientCoords, RectangleStruct* pClipRect, int nFrame);

    OverlayTypeClass(const char* pID) noexcept;  // 0x6440A0 (as Construct)

protected:
    OverlayTypeClass(noinit_t) noexcept;

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
