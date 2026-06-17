#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"
#include "core/vector.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif




class OverlayTypeClass;
class ParticleTypeClass;
class WarheadTypeClass;

struct RandomStruct
{
    int Min;
    int Max;
};

class AnimTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::AnimType;

    static DynamicVectorClass<AnimTypeClass*>* Array;
    static AnimTypeClass* Find(const char* pID);
    static AnimTypeClass* FindOrAllocate(const char* pID);  // 0x428b80 (as FindOrCreate)
    static int FindIndex(const char* pID);  // 0x427cb0

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }  // 0x428990 (as GetClassIdentifier)

    virtual ~AnimTypeClass() = default;  // 0x428ea0 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::AnimType; }
    virtual int objectSize() const override { return 0; }  // 0x428e70 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }  // 0x428e90 (as StubReturnFalse)
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    virtual SHPStruct* LoadImage() { return nullptr; }
    virtual void Load2DArt() {}

    AnimTypeClass(const char* pID) noexcept;  // 0x427530 (as Construct)

    struct noinit_t {};

protected:
    AnimTypeClass(noinit_t) noexcept;  // 0x427530 (as Construct)

public:
    int ArrayIndex;
    int MiddleFrameIndex;
    int MiddleFrameWidth;
    int MiddleFrameHeight;
    uint8_t AnimTypeClass_field_2A4;
    double Damage;
    int Rate;
    int Start;
    int LoopStart;
    int LoopEnd;
    int End;
    int LoopCount;
    AnimTypeClass* Next;
    int SpawnsParticle;
    int NumParticles;
    int DetailLevel;
    int TranslucencyDetailLevel;
    RandomStruct RandomLoopDelay;
    RandomStruct RandomRate;
    int Translucency;
    AnimTypeClass* Spawns;
    int SpawnCount;
    int Report;
    int StopSound;
    AnimTypeClass* BounceAnim;
    AnimTypeClass* ExpireAnim;
    AnimTypeClass* TrailerAnim;
    int TrailerSeperation;
    double Elasticity;
    double MinZVel;
    double AnimTypeClass_field_double_320;
    double MaxXYVel;
    WarheadTypeClass* Warhead;
    int DamageRadius;
    OverlayTypeClass* TiberiumSpawnType;
    int TiberiumSpreadRadius;
    int YSortAdjust;
    int YDrawOffset;
    int ZAdjust;
    int MakeInfantry;
    int RunningFrames;
    bool IsFlamingGuy;
    bool IsVeins;
    bool IsMeteor;
    bool TiberiumChainReaction;
    bool IsTiberium;
    bool HideIfNoOre;
    bool Bouncer;
    bool Tiled;
    bool ShouldUseCellDrawer;
    bool UseNormalLight;
    bool DemandLoad;
    bool FreeLoad;
    bool IsAnimatedTiberium;
    bool AltPalette;
    bool Normalized;
    Layer Layer;
    bool DoubleThick;
    bool Flat;
    bool Translucent;
    bool Scorch;
    bool Flamer;
    bool Crater;
    bool ForceBigCraters;
    bool Sticky;
    bool PingPong;
    bool Reverse;
    bool Shadow;
    bool PsiWarning;
    bool ShouldFogRemove;
};

} // namespace gamemd

