#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\object\techno.hpp"

namespace gamemd {

using ra2::game::ObjectClass;
using ra2::game::TechnoClass;
using ra2::game::AudioController;
using ra2::game::AbstractType;
using ra2::game::CellStruct;
using ra2::game::CoordStruct;
using ra2::game::Point2D;
using ra2::game::RectangleStruct;
using ra2::game::TimerStruct;

class AnimClass;
struct ColorStruct;
class BuildingLightClass;
class BuildingTypeClass;
class FactoryClass;
class InfantryClass;
class LightSourceClass;
class TechnoTypeClass;

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

    virtual void Destroyed(ObjectClass* killer) override {}
    virtual void vt_entry_490(uint32_t dwUnk, uint32_t dwUnk2) override {}

    virtual CellStruct* vt_entry_4D4(CellStruct* pCellStruct, uint32_t dwUnk, uint32_t dwUnk2) const { return nullptr; }
    virtual int vt_entry_4D8(ObjectClass* pObj) const { return 0; }
    virtual void Place(bool bUnk);
    virtual void UpdateConstructionOptions() {}
    virtual void vt_entry_4E4(uint32_t dwUnk, uint32_t dwUnk2) {}
    virtual CoordStruct* GetExitCoords(CoordStruct* out, uint32_t unknown) const override;
    virtual void vt_entry_4EC(uint32_t dwUnk, uint32_t dwUnk2, uint32_t dwUnk3, uint32_t dwUnk4) {}
    virtual bool TogglePrimaryFactory() { return false; }
    virtual void SensorArrayActivate(CellStruct cell) {}
    virtual void SensorArrayDeactivate(CellStruct cell) {}
    virtual void DisguiseDetectorActivate(CellStruct cell) {}
    virtual void DisguiseDetectorDeactivate(CellStruct cell) {}
    virtual uint32_t vt_entry_504() { return 0; }

    int Mission_Construction() override;
    int Mission_Selling() override;
    int Mission_Repair() override;
    int Mission_Missile() override;

    Point2D* CalcDrawPos(Point2D* out);

    BuildingTypeClass*                    Type;
    FactoryClass*                         Factory;
    TimerStruct                           C4Timer;
    int32_t                               buildingField_int_534;
    int32_t                               buildingField_int_538;
    uint32_t                              OwnerCountryIndex;
    InfantryClass*                        C4AppliedBy;
    uint32_t                              buildingField_544;
    AnimClass*                            FirestormAnim;
    AnimClass*                            PsiWarnAnim;
    TimerStruct                           buildingField_timer_550;
    AnimClass*                            Anims[0x15];
    bool                                  AnimStates[0x15];
    uint8_t                               align_5C5[3];
    AnimClass*                            DamageFireAnims[0x8];
    bool                                  RequiresDamageFires;
    BuildingTypeClass*                    Upgrades[0x3];
    int32_t                               FiringSWType;
    uint32_t                              buildingField_5FC;
    BuildingLightClass*                   Spotlight;
    RepeatableTimerStruct                 GateTimer;
    LightSourceClass*                     LightSource;
    uint32_t                              LaserFenceFrame;
    uint32_t                              FirestormWallFrame;
    ProgressTimer                         RepairProgress;
    RectangleStruct                       buildingField_rect_63C;
    CoordStruct                           buildingField_coord_64C;
    int32_t                               buildingField_int_658;
    uint32_t                              buildingField_65C;
    bool                                  HasPower;
    bool                                  IsOverpowered;
    bool                                  RegisteredAsPoweredUnitSource;
    uint32_t                              SupportingPrisms;
    bool                                  HasExtraPowerBonus;
    bool                                  HasExtraPowerDrain;
    DynamicVectorClass<InfantryClass*>    Overpowerers;
    DynamicVectorClass<InfantryClass*>    Occupants;
    int32_t                               FiringOccupantIndex;
    AudioController            Audio7;
    AudioController            Audio8;
    bool                                  WasOnline;
    bool                                  ShowRealName;
    bool                                  BeingProduced;
    bool                                  ShouldRebuild;
    bool                                  HasEngineer;
    TimerStruct                           CashProductionTimer;
    bool                                  buildingFlag_6DC;
    bool                                  buildingFlag_6DD;
    bool                                  NeedsRepairs;
    bool                                  C4Applied;
    bool                                  NoCrew;
    bool                                  buildingFlag_6E1;
    bool                                  buildingFlag_6E2;
    bool                                  HasBeenCaptured;
    bool                                  ActuallyPlacedOnMap;
    bool                                  buildingFlag_6E5;
    bool                                  IsDamaged;
    bool                                  IsFogged;
    bool                                  IsBeingRepaired;
    bool                                  buildingFlag_6E9;
    bool                                  StuffEnabled;
    char                                  HasCloakingData;
    uint8_t                               CloakRadius;
    char                                  Translucency;
    uint32_t                              StorageFilledSlots;
    TechnoTypeClass*           SecretProduction;
    ColorStruct                           ColorAdd;
    int32_t                               buildingField_int_6FC;
    int16_t                               buildingField_short_700;
    uint8_t                               UpgradeLevel;
    char                                  GateStage;
    PrismChargeState                      PrismStage;
    CoordStruct                           PrismTargetCoords;
    uint32_t                              DelayBeforeFiring;
    int32_t                               BunkerState;

    int32_t                               ProductionTimer;
    bool                                  PlacementAllowed;
    uint8_t                               ProductionBlocked;
    uint8_t                               m_pad_prod_1;
    uint8_t                               m_pad_prod_2;
    int32_t                               ProductionAccum;
    int32_t                               ProductionFrame;
    int32_t                               ProductionRate;
    int32_t                               ProductionSpeed;
    double                                CostAccumulator;
    uint8_t                               PipelineStep;
    uint8_t                               m_pad_prod_3[3];

protected:
    BuildingClass() noexcept;
};

} // namespace gamemd
