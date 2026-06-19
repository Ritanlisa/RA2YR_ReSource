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

int*  AnimClass_CheckMirrorFlags();             // IDA: 0x4238d0
int   AnimClass_SaveLoad_Prefix_0();            // IDA: 0x4253b0
char  AnimClass_ProcessAreaEffect();            // IDA: 0x426300
int   AnimClass_MissionStubReturnZero2();       // IDA: 0x426540
int   AnimClass_GetAnimation();                 // IDA: 0x7298f0

// ── AnimFile ───────────────────────────────────────────────

char  AnimFile_AddRef();                        // IDA: 0x426750

// ── AnimSystem ─────────────────────────────────────────────

char  AnimSystem_Init();                        // IDA: 0x75a790

// ── AnimTypeClass ──────────────────────────────────────────

char  AnimTypeClass_LoadFromINI();              // IDA: 0x427d00
int   AnimTypeClass_SaveLoad_Prefix();          // IDA: 0x428800
int   AnimTypeClass_SaveLoad_Prefix_0();        // IDA: 0x428970
int   AnimTypeClass_GetClassIdentifier();       // IDA: 0x428990

// ── Animation ──────────────────────────────────────────────

__int64  Animation_UpdateBobOffset();           // IDA: 0x661d80

// ── BulletClass ────────────────────────────────────────────

int*   BulletClass_CalculateSpreadAngle();      // IDA: 0x466660
int    BulletClass_SaveLoad_Prefix_0();         // IDA: 0x46afb0
LONG   BulletClass_CheckTargetValidity();       // IDA: 0x46afd0
LONG   BulletClass_ValidateTarget();            // IDA: 0x46aff0
int    BulletClass_PowerDrainProcess();         // IDA: 0x46b560

// ── BulletTypeClass ────────────────────────────────────────

int    BulletTypeClass_ReadArmor();             // IDA: 0x465450
int    BulletTypeClass_ReadTrailerAnim();       // IDA: 0x465cc0
char   BulletTypeClass_LoadFromINI();           // IDA: 0x46bee0
_DWORD* BulletTypeClass_GetROF();               // IDA: 0x46c4f0
int    BulletTypeClass_SaveLoad_Prefix();       // IDA: 0x46c6a0
int    BulletTypeClass_SaveLoad_Prefix_0();     // IDA: 0x46c730
int    BulletTypeClass_GetClassIdentifier();    // IDA: 0x46c750
char   BulletTypeClass_ProcessImpact();         // IDA: 0x69fc10

// ── OverlayTypeClass ───────────────────────────────────────

int*    OverlayTypeClass_GetTile();             // IDA: 0x5fe4c0
_DWORD* OverlayTypeClass_vt_entry_6C();         // IDA: 0x5fea30
int     OverlayTypeClass_SaveLoad_Prefix();     // IDA: 0x5feaf0
int     OverlayTypeClass_SaveLoad_Prefix_0();   // IDA: 0x5fec10
int     OverlayTypeClass_GetClassIdentifier();  // IDA: 0x5fec30

// ── ParticleClass ──────────────────────────────────────────

int  ParticleClass_CheckCollisionFlags();       // IDA: 0x62d810
int  ParticleClass_GetClassIdentifier();        // IDA: 0x62d930

// ── ParticleSystemClass ────────────────────────────────────

int  ParticleSystemClass_vt06();                // IDA: 0x630090

// ── ParticleSystemTypeClass ────────────────────────────────

int  ParticleSystemTypeClass_GetClassIdentifier();   // IDA: 0x6447a0
int  ParticleSystemTypeClass_SaveLoad_Prefix();      // IDA: 0x6447e0
int  ParticleSystemTypeClass_SaveLoad_Prefix_0();    // IDA: 0x644830

// ── ParticleTypeClass ──────────────────────────────────────

int  ParticleTypeClass_SaveLoad_Prefix();       // IDA: 0x645660
int  ParticleTypeClass_SaveLoad_Prefix_0();     // IDA: 0x6457a0

// ── SmudgeTypeClass ────────────────────────────────────────

int  SmudgeTypeClass_LoadTypeData();            // IDA: 0x6b5850
int  SmudgeTypeClass_SaveToINI();               // IDA: 0x6b58b0
int  SmudgeTypeClass_GetClassIdentifier();      // IDA: 0x6b58d0

// ── Terrain ────────────────────────────────────────────────

bool  Terrain_SelectTileType();                 // IDA: 0x579620
void  Terrain_PlaceTiberiumTrees();             // IDA: 0x5a28c0
_DWORD* Terrain_ClimbCheck();                   // IDA: 0x6d6410

// ── TerrainClass ───────────────────────────────────────────

char  TerrainClass_ProcessUpdate();             // IDA: 0x6dd8b0
int   TerrainClass_LoadFromStream();            // IDA: 0x71cda0
int   TerrainClass_CheckFrameUpdate();          // IDA: 0x71cf30
int   TerrainClass_MissionStubReturnZero3();    // IDA: 0x71d310

// ── TerrainTypeClass ───────────────────────────────────────

_DWORD* TerrainTypeClass_GetWidth();            // IDA: 0x71e0d0
int     TerrainTypeClass_SaveLoad_Prefix();     // IDA: 0x71e1d0
int     TerrainTypeClass_SaveLoad_Prefix_0();   // IDA: 0x71e240
int     TerrainTypeClass_GetClassIdentifier();  // IDA: 0x71e260

// ── TiberiumClass ──────────────────────────────────────────

char  TiberiumClass_Spread();                   // IDA: 0x5a0160
char  TiberiumClass_LoadFromINI();              // IDA: 0x721a50
int   TiberiumClass_ddtor();                    // IDA: 0x721e40
int   TiberiumClass_SaveLoad_Prefix();          // IDA: 0x721e80
int   TiberiumClass_SaveLoad_Prefix_0();        // IDA: 0x7220d0

// ── TubeClass ──────────────────────────────────────────────

int  TubeClass_LoadState();                     // IDA: 0x7281a0
int  TubeClass_SaveState();                     // IDA: 0x7281e0
int  TubeClass_ddtor();                         // IDA: 0x7286d0

// ── WaveClass ──────────────────────────────────────────────

int  WaveClass_ProcessWaveTick();               // IDA: 0x75f7d0
int  WaveClass_GetClassIdentifier();            // IDA: 0x75f840

} // namespace gamemd
