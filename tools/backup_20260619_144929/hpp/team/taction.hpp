#pragma once

#include "object/abstract.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif

class HouseClass;
class TechnoClass;
class ObjectClass;

// sizeof=0x98 (ctor 0x6DD000, dtor 0x6E4660)
struct TActionClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Action;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TActionClass() = default;  // 0x6E3D70

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall whatAmI() const override { return kObjectDeriveId; }
    virtual int objectSize() const override { return 0x98; }
    virtual void calculateChecksum(void* checksum) const {}

    // Construction
    TActionClass() noexcept { }                               // IDA: 0x71E6A0
    void Destructor();                                        // 0x6E4660
    void ddtor() { Destructor(); }                           // IDA: 0x6E3D70

    // Save/Load
    void SaveLoad_Prefix(IStream*);                          // 0x6E3DB0
    void SaveLoad_Prefix_0(IStream*);                        // 0x6E3E30
    void Validate();                                         // 0x6E3E50

    // Action dispatch
    void ExecuteAction(int, ObjectClass*, TechnoClass*, HouseClass*, int, int); // 0x6DD2C0

    // Action executors
    void executeAirstrikeAction();                           // 0x7268F0
    void executeAttackAction();                              // 0x50D290
    void executeBuildAction();                               // 0x4FCDC0
    void executeCaptureAction();                             // 0x6E0CA0
    void executeChronoSphereAction();                        // 0x6E43A0
    void executeChronoshiftAction();                         // 0x6E2F00
    void executeCloseGateAction();                           // 0x6E32A0
    void executeDeployAction();                              // 0x50DFE0
    void executeDetonateAction();                            // 0x726900
    void executeDominatorAction();                           // 0x6E4460
    void executeEMPulseAction();                             // 0x6E4560
    void executeEnterAction();                               // 0x6E0AA0
    void executeEscortAction();                              // 0x6E2290
    void executeExplodeAction();                             // 0x6E2EB0
    void executeFollowAction();                              // 0x6E21E0
    void executeForceShieldAction();                         // 0x6E4200
    void executeGeneticMutatorAction();                      // 0x6E4150
    void executeGuardAction();                               // 0x50DA00
    void executeGuardAreaAction();                           // 0x6E1980
    void executeHarvestAction();                             // 0x6AC5F0
    void executeHuntAction();                                // 0x50DA20
    void executeIronCurtainAction();                         // 0x6E42D0
    void executeJumpjetAction();                             // 0x6E31E0
    void executeLightningAction();                           // 0x6E3B40
    void executeLoadAction();                                // 0x6E2520
    void executeMoveAction();                                // 0x50D2D0
    void executeNukeAction();                                // 0x6E4320
    void executeOpenGateAction();                            // 0x6E3240
    void executeParadropAction();                            // 0x6E36E0
    void executePatrolAction();                              // 0x6E1A40
    void executePlaceBeaconAction();                         // 0x6E3180
    void executePsychicDominatorAction();                    // 0x6E4100
    void executeRepairAction();                              // 0x577C90
    void executeRetreatAction();                             // 0x6E1CC0
    void executeRevealAction();                              // 0x6E44E0
    void executeSabotageAction();                            // 0x6E0D00
    void executeScatterAction();                             // 0x6E1A70
    void executeSelfDestructAction();                        // 0x6E2E60
    void executeSellAction();                                // 0x578850
    void executeSpyPlaneAction();                            // 0x6E4360
    void executeUnloadAction();                              // 0x6E2AF0
    void executeWeatherStormAction();                        // 0x6E43E0

    // Helpers
    void ConvertHouseUnits(HouseClass*, int);                // 0x6E0B60
    void CreateNukeEffect();                                 // 0x6E3410
    void CreateWeaponImpactAtWaypoint();                     // 0x6E2390
    void PlayAudioAtRandomWP();                              // 0x6E1780
    void RevealTileTypeAtWaypoint();                         // 0x6E11C0
    void RevealWaypointArea();                               // 0x6E0FE0
    void SpawnMeteorShower();                                // 0x6E2C40

    // Stubs
    void Stub() { }                                          // IDA: 0x6E4650
    void StubReturn47() { }                                  // IDA: 0x6E4640
    void StubReturn148() { }                                 // IDA: 0x6E4630

    int32_t     idxArray;           // +0x24 (this+36)
    void*       TActionClass_field_28;           // +0x28 (this+40)
    void*       TActionClass_field_2C;           // +0x2C (this+44)
    void*       TActionClass_field_30;           // +0x30 (this+48)
    void*       TActionClass_field_34;           // +0x34 (this+52)
    void*       TActionClass_field_38;           // +0x38 (this+56)
    void*       TActionClass_field_3C;           // +0x3C (this+60)
    void*       TActionClass_field_40;           // +0x40 (this+64)
    void*       TActionClass_field_44;           // +0x44 (this+68)
    void*       TActionClass_field_48;           // +0x48 (this+72)
    void*       TActionClass_field_4C;           // +0x4C (this+76)
    void*       TActionClass_field_50;           // +0x50 (this+80)
    uint8_t     TActionClass_field_54;           // +0x54 (this+84)
    uint8_t     pad_55[24];         // +0x55..+0x6C
    uint8_t     TActionClass_field_6D;           // +0x6D (this+109)
    uint8_t     pad_6E[73];         // +0x6E..+0x8F
    void*       TActionClass_field_90;           // +0x90 (this+144)
};
} // namespace gamemd
