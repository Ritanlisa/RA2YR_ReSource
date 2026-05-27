#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\object\techno.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif
#ifndef GAMEMD_USING_TechnoTypeClass
#define GAMEMD_USING_TechnoTypeClass
using ra2::game::TechnoTypeClass;
#endif
#ifndef GAMEMD_USING_AudioController
#define GAMEMD_USING_AudioController
using ra2::game::AudioController;
#endif


struct AnimClass;
struct ColorStruct;
class BuildingLightClass;
class BuildingTypeClass;
class FactoryClass;
class InfantryClass;
class LightSourceClass;

struct RepeatableTimerStruct
{
    uint32_t data[4];
};

class BuildingClass : public ra2::game::TechnoClass
{
public:
    static constexpr AbstractType kAbsID = AbstractType::Building;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual ~BuildingClass() override = default;

    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int Size() const override { return sizeof(BuildingClass); }

    virtual void Destroyed(ra2::game::ObjectClass* killer) override {}
    virtual void vt_entry_490(uint32_t dwUnk, uint32_t dwUnk2) override {}

    virtual CellStruct* vt_entry_4D4(CellStruct* pCellStruct, uint32_t dwUnk, uint32_t dwUnk2) const { return nullptr; }
    virtual int vt_entry_4D8(ra2::game::ObjectClass* pObj) const { return 0; }
    virtual void Place(bool bUnk) {}
    virtual void UpdateConstructionOptions() {}
    virtual void vt_entry_4E4(uint32_t dwUnk, uint32_t dwUnk2) {}
    virtual CellStruct* vt_entry_4E8(CellStruct* pCellStruct, uint32_t dwUnk) const { return nullptr; }
    virtual void vt_entry_4EC(uint32_t dwUnk, uint32_t dwUnk2, uint32_t dwUnk3, uint32_t dwUnk4) {}
    virtual bool TogglePrimaryFactory() { return false; }
    virtual void SensorArrayActivate(CellStruct cell) {}
    virtual void SensorArrayDeactivate(CellStruct cell) {}
    virtual void DisguiseDetectorActivate(CellStruct cell) {}
    virtual void DisguiseDetectorDeactivate(CellStruct cell) {}
    virtual uint32_t vt_entry_504() { return 0; }

    BuildingTypeClass*                    Type;
    FactoryClass*                         Factory;
    TimerStruct                           C4Timer;
    int32_t                               unknown_int_534;
    int32_t                               unknown_int_538;
    uint32_t                              OwnerCountryIndex;
    InfantryClass*                        C4AppliedBy;
    uint32_t                              unknown_544;
    AnimClass*                            FirestormAnim;
    AnimClass*                            PsiWarnAnim;
    TimerStruct                           unknown_timer_550;
    AnimClass*                            Anims[0x15];
    bool                                  AnimStates[0x15];
    uint8_t                               align_5C5[3];
    AnimClass*                            DamageFireAnims[0x8];
    bool                                  RequiresDamageFires;
    BuildingTypeClass*                    Upgrades[0x3];
    int32_t                               FiringSWType;
    uint32_t                              unknown_5FC;
    BuildingLightClass*                   Spotlight;
    RepeatableTimerStruct                 GateTimer;
    LightSourceClass*                     LightSource;
    uint32_t                              LaserFenceFrame;
    uint32_t                              FirestormWallFrame;
    ProgressTimer                         RepairProgress;
    RectangleStruct                       unknown_rect_63C;
    CoordStruct                           unknown_coord_64C;
    int32_t                               unknown_int_658;
    uint32_t                              unknown_65C;
    bool                                  HasPower;
    bool                                  IsOverpowered;
    bool                                  RegisteredAsPoweredUnitSource;
    uint32_t                              SupportingPrisms;
    bool                                  HasExtraPowerBonus;
    bool                                  HasExtraPowerDrain;
    DynamicVectorClass<InfantryClass*>    Overpowerers;
    DynamicVectorClass<InfantryClass*>    Occupants;
    int32_t                               FiringOccupantIndex;
    ra2::game::AudioController            Audio7;
    ra2::game::AudioController            Audio8;
    bool                                  WasOnline;
    bool                                  ShowRealName;
    bool                                  BeingProduced;
    bool                                  ShouldRebuild;
    bool                                  HasEngineer;
    TimerStruct                           CashProductionTimer;
    bool                                  unknown_bool_6DC;
    bool                                  unknown_bool_6DD;
    bool                                  NeedsRepairs;
    bool                                  C4Applied;
    bool                                  NoCrew;
    bool                                  unknown_bool_6E1;
    bool                                  unknown_bool_6E2;
    bool                                  HasBeenCaptured;
    bool                                  ActuallyPlacedOnMap;
    bool                                  unknown_bool_6E5;
    bool                                  IsDamaged;
    bool                                  IsFogged;
    bool                                  IsBeingRepaired;
    bool                                  unknown_bool_6E9;
    bool                                  StuffEnabled;
    char                                  HasCloakingData;
    uint8_t                               CloakRadius;
    char                                  Translucency;
    uint32_t                              StorageFilledSlots;
    ra2::game::TechnoTypeClass*           SecretProduction;
    ColorStruct                           ColorAdd;
    int32_t                               unknown_int_6FC;
    int16_t                               unknown_short_700;
    uint8_t                               UpgradeLevel;
    char                                  GateStage;
    PrismChargeState                      PrismStage;
    CoordStruct                           PrismTargetCoords;
    uint32_t                              DelayBeforeFiring;
    int32_t                               BunkerState;

protected:
    BuildingClass() = default;
};

} // namespace gamemd
