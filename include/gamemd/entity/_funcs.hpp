#pragma once

// Forward declarations — entity types
namespace gamemd {

class AnimClass;
class AnimFile;
class AnimSystem;
class AnimTypeClass;
struct Animation;
class BulletClass;
class BulletTypeClass;
class OverlayTypeClass;
class ParticleClass;
class ParticleSystemClass;
class ParticleSystemTypeClass;
class ParticleTypeClass;
class SmudgeTypeClass;
class Terrain;
class TerrainClass;
class TerrainTypeClass;
class TiberiumClass;
class TubeClass;
class WaveClass;

// ── AnimClass ──────────────────────────────────────────────

int*  AnimClass_CheckMirrorFlags();             // 0x4238D0
int   AnimClass_SaveLoad_Prefix_0();            // 0x4253B0
char  AnimClass_ProcessAreaEffect();            // 0x426300
int   AnimClass_MissionStubReturnZero2();       // 0x426540
int   AnimClass_GetAnimation();                 // 0x7298F0

// ── AnimFile ───────────────────────────────────────────────

char  AnimFile_AddRef();                        // 0x426750

// ── AnimSystem ─────────────────────────────────────────────

char  AnimSystem_Init();                        // 0x75A790

// ── AnimTypeClass ──────────────────────────────────────────

char  AnimTypeClass_LoadFromINI();              // 0x427D00
int   AnimTypeClass_SaveLoad_Prefix();          // 0x428800
int   AnimTypeClass_SaveLoad_Prefix_0();        // 0x428970
int   AnimTypeClass_GetClassIdentifier();       // 0x428990

// ── Animation ──────────────────────────────────────────────

__int64  Animation_UpdateBobOffset();           // 0x661D80

// ── BulletClass ────────────────────────────────────────────

int*   BulletClass_CalculateSpreadAngle();      // 0x466660
int    BulletClass_SaveLoad_Prefix_0();         // 0x46AFB0
LONG   BulletClass_CheckTargetValidity();       // 0x46AFD0
LONG   BulletClass_ValidateTarget();            // 0x46AFF0
int    BulletClass_PowerDrainProcess();         // 0x46B560

// ── BulletTypeClass ────────────────────────────────────────

int    BulletTypeClass_ReadArmor();             // 0x465450
int    BulletTypeClass_ReadTrailerAnim();       // 0x465CC0
char   BulletTypeClass_LoadFromINI();           // 0x46BEE0
_DWORD* BulletTypeClass_GetROF();               // 0x46C4F0
int    BulletTypeClass_SaveLoad_Prefix();       // 0x46C6A0
int    BulletTypeClass_SaveLoad_Prefix_0();     // 0x46C730
int    BulletTypeClass_GetClassIdentifier();    // 0x46C750
char   BulletTypeClass_ProcessImpact();         // 0x69FC10

// ── OverlayTypeClass ───────────────────────────────────────

int*    OverlayTypeClass_GetTile();             // 0x5FE4C0
_DWORD* OverlayTypeClass_vt_entry_6C();         // 0x5FEA30
int     OverlayTypeClass_SaveLoad_Prefix();     // 0x5FEAF0
int     OverlayTypeClass_SaveLoad_Prefix_0();   // 0x5FEC10
int     OverlayTypeClass_GetClassIdentifier();  // 0x5FEC30

// ── ParticleClass ──────────────────────────────────────────

int  ParticleClass_CheckCollisionFlags();       // 0x62D810
int  ParticleClass_GetClassIdentifier();        // 0x62D930

// ── ParticleSystemClass ────────────────────────────────────

int  ParticleSystemClass_vt06();                // 0x630090

// ── ParticleSystemTypeClass ────────────────────────────────

int  ParticleSystemTypeClass_GetClassIdentifier();   // 0x6447A0
int  ParticleSystemTypeClass_SaveLoad_Prefix();      // 0x6447E0
int  ParticleSystemTypeClass_SaveLoad_Prefix_0();    // 0x644830

// ── ParticleTypeClass ──────────────────────────────────────

int  ParticleTypeClass_SaveLoad_Prefix();       // 0x645660
int  ParticleTypeClass_SaveLoad_Prefix_0();     // 0x6457A0

// ── SmudgeTypeClass ────────────────────────────────────────

int  SmudgeTypeClass_LoadTypeData();            // 0x6B5850
int  SmudgeTypeClass_SaveToINI();               // 0x6B58B0
int  SmudgeTypeClass_GetClassIdentifier();      // 0x6B58D0

// ── Terrain ────────────────────────────────────────────────

bool  Terrain_SelectTileType();                 // 0x579620
void  Terrain_PlaceTiberiumTrees();             // 0x5A28C0
_DWORD* Terrain_ClimbCheck();                   // 0x6D6410

// ── TerrainClass ───────────────────────────────────────────

char  TerrainClass_ProcessUpdate();             // 0x6DD8B0
int   TerrainClass_LoadFromStream();            // 0x71CDA0
int   TerrainClass_CheckFrameUpdate();          // 0x71CF30
int   TerrainClass_MissionStubReturnZero3();    // 0x71D310

// ── TerrainTypeClass ───────────────────────────────────────

_DWORD* TerrainTypeClass_GetWidth();            // 0x71E0D0
int     TerrainTypeClass_SaveLoad_Prefix();     // 0x71E1D0
int     TerrainTypeClass_SaveLoad_Prefix_0();   // 0x71E240
int     TerrainTypeClass_GetClassIdentifier();  // 0x71E260

// ── TiberiumClass ──────────────────────────────────────────

char  TiberiumClass_Spread();                   // 0x5A0160
char  TiberiumClass_LoadFromINI();              // 0x721A50
int   TiberiumClass_ddtor();                    // 0x721E40
int   TiberiumClass_SaveLoad_Prefix();          // 0x721E80
int   TiberiumClass_SaveLoad_Prefix_0();        // 0x7220D0

// ── TubeClass ──────────────────────────────────────────────

int  TubeClass_LoadState();                     // 0x7281A0
int  TubeClass_SaveState();                     // 0x7281E0
int  TubeClass_ddtor();                         // 0x7286D0

// ── WaveClass ──────────────────────────────────────────────

int  WaveClass_ProcessWaveTick();               // 0x75F7D0
int  WaveClass_GetClassIdentifier();            // 0x75F840

} // namespace gamemd
