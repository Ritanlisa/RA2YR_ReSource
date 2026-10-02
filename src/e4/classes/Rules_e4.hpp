// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct Rules {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char u8_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int q020;  // 0x20
    unsigned int q034;  // 0x34
    unsigned int q050;  // 0x50
    unsigned int q080;  // 0x80
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int u32_270;  // 0x270
    unsigned int u32_274;  // 0x274
    unsigned int u32_278;  // 0x278
    unsigned int q304;  // 0x304
    unsigned int u32_4E0;  // 0x4E0
    unsigned int q624;  // 0x624
    unsigned int q628;  // 0x628
    unsigned int u32_9C0;  // 0x9C0
    unsigned int u32_9C4;  // 0x9C4
    unsigned int q1248;  // 0x1248
    unsigned int q1634;  // 0x1634
    Color * ptr_1860;  // 0x1860
    unsigned char u8_1862;  // 0x1862
    unsigned char u8_1865;  // 0x1865
    Color * ptr_1866;  // 0x1866
    unsigned char u8_1868;  // 0x1868
    unsigned char u8_186B;  // 0x186B
    unsigned int u32_186C;  // 0x186C
    unsigned int u32_18A4;  // 0x18A4
    unsigned int u32_18A8;  // 0x18A8
    unsigned int u32_18AC;  // 0x18AC
    unsigned int u32_18B0;  // 0x18B0
    float u32_18B4;  // 0x18B4
    float u32_18B8;  // 0x18B8
    unsigned int q2500;  // 0x2500
    unsigned int q4680;  // 0x4680
    unsigned int q5490;  // 0x5490
    unsigned int q5494;  // 0x5494
    unsigned int q5510;  // 0x5510
    unsigned int q5684;  // 0x5684
    Color * q6240;  // 0x6240
    unsigned char q6248;  // 0x6248
    unsigned int q6308;  // 0x6308
    unsigned int q6320;  // 0x6320
    float q6324;  // 0x6324
    float q6328;  // 0x6328
    unsigned int ChronoInSound;
    unsigned int ChronoOutSound;
    unsigned int CreateInfantrySound;
    unsigned int DeployDir;
    unsigned int DetailBufferZoneWidth;
    unsigned int DetailMinFrameRateMovie;
    unsigned int DetailMinFrameRateNormal;
    unsigned int FlashFrameTime;
    unsigned int ImpactLandSound;
    unsigned int PoseDir;
    unsigned int RadarCombatFlashTime;
    unsigned int SpySatActivationSound;
    unsigned int SpySatDeactivationSound;
    unsigned int UpgradeVeteranSound;
    unsigned int UpgradeEliteSound;
    unsigned int VoiceIFVRepair;
    unsigned int ActivateSound;
    unsigned int AirstrikeAttackVoice;
    unsigned int BunkerWallsUpSound;
    unsigned int DeactivateSound;
    unsigned int Dig;
    unsigned int EnterBioReactorSound;
    unsigned int LeaveBioReactorSound;
    unsigned int MasterMindOverloadDeathSound;
    unsigned int MindClearedSound;
    unsigned int SlaveMinerDeploySound;
    unsigned int SlaveMinerUndeploySound;
    unsigned int SlavesFreeSound;
    unsigned int SpyPlaneCamera;
    unsigned int SpyPlaneCameraFrames;
    unsigned int AirstrikeAbortSound;
    unsigned int ConditionRedSparkingProbability;
    unsigned int ConditionYellowSparkingProbability;
    unsigned int DamageFireTypes;
    unsigned int EnterGrinderSound;
    unsigned int IonBeam;
    unsigned int IonBlast;
    unsigned int LeaveGrinderSound;
    unsigned int ParadropRadius;
    unsigned int PsychicDominatorActivateSound;
    unsigned int ZoomInFactor;
// --- flat members (END) ---
    int ReadMiscINI();  // 0x6691E0
    IUnknown * * ReadCombatINI();  // 0x66BBB0
    unsigned int * CopyDataArray(VectorClass_flat * aP1);  // 0x67A570
    char * GetProductionTimeMult(CellStruct * aP1);  // 0x5FB2E0
    unsigned char m_5[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
};
} // namespace gamemd
