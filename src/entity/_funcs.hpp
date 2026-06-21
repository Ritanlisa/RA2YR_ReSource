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

int*  AnimClass::CheckMirrorFlags();             // 0x4238D0
int   AnimClass::SaveLoad_Prefix_0();            // 0x4253B0
char  AnimClass::ProcessAreaEffect();            // 0x426300
int   AnimClass::MissionStubReturnZero2();       // 0x426540
int   AnimClass::GetAnimation();                 // 0x7298F0

// ── AnimFile ───────────────────────────────────────────────

char  AnimFile::AddRef();                        // 0x426750

// ── AnimSystem ─────────────────────────────────────────────

char  AnimSystem_Init();                        // 0x75A790

// ── AnimTypeClass ──────────────────────────────────────────

char  AnimTypeClass::LoadFromINI();              // 0x427D00
int   AnimTypeClass::SaveLoad_Prefix();          // 0x428800
int   AnimTypeClass::SaveLoad_Prefix_0();        // 0x428970
int   AnimTypeClass::GetClassIdentifier();       // 0x428990

// ── Animation ──────────────────────────────────────────────

__int64  Animation::UpdateBobOffset();           // 0x661D80

// ── BulletClass ────────────────────────────────────────────

int*   BulletClass::CalculateSpreadAngle();      // 0x466660
int    BulletClass::SaveLoad_Prefix_0();         // 0x46AFB0
LONG   BulletClass::CheckTargetValidity();       // 0x46AFD0
LONG   BulletClass::ValidateTarget();            // 0x46AFF0
int    BulletClass::PowerDrainProcess();         // 0x46B560

// ── BulletTypeClass ────────────────────────────────────────

int    BulletTypeClass::ReadArmor();             // 0x465450
int    BulletTypeClass::ReadTrailerAnim();       // 0x465CC0
char   BulletTypeClass::LoadFromINI();           // 0x46BEE0
_DWORD* BulletTypeClass::GetROF();               // 0x46C4F0
int    BulletTypeClass::SaveLoad_Prefix();       // 0x46C6A0
int    BulletTypeClass::SaveLoad_Prefix_0();     // 0x46C730
int    BulletTypeClass::GetClassIdentifier();    // 0x46C750
char   BulletTypeClass::ProcessImpact();         // 0x69FC10

// ── OverlayTypeClass ───────────────────────────────────────

int*    OverlayTypeClass::GetTile();             // 0x5FE4C0
_DWORD* OverlayTypeClass::vt_entry_6C();         // 0x5FEA30
int     OverlayTypeClass::SaveLoad_Prefix();     // 0x5FEAF0
int     OverlayTypeClass::SaveLoad_Prefix_0();   // 0x5FEC10
int     OverlayTypeClass::GetClassIdentifier();  // 0x5FEC30

// ── ParticleClass ──────────────────────────────────────────

int  ParticleClass::CheckCollisionFlags();       // 0x62D810
int  ParticleClass::GetClassIdentifier();        // 0x62D930

// ── ParticleSystemClass ────────────────────────────────────

int  ParticleSystemClass::vt[06]();                // 0x630090

// ── ParticleSystemTypeClass ────────────────────────────────

int  ParticleSystemTypeClass::GetClassIdentifier();   // 0x6447A0
int  ParticleSystemTypeClass::SaveLoad_Prefix();      // 0x6447E0
int  ParticleSystemTypeClass::SaveLoad_Prefix_0();    // 0x644830

// ── ParticleTypeClass ──────────────────────────────────────

int  ParticleTypeClass::SaveLoad_Prefix();       // 0x645660
int  ParticleTypeClass::SaveLoad_Prefix_0();     // 0x6457A0

// ── SmudgeTypeClass ────────────────────────────────────────

int  SmudgeTypeClass::LoadTypeData();            // 0x6B5850
int  SmudgeTypeClass::SaveToINI();               // 0x6B58B0
int  SmudgeTypeClass::GetClassIdentifier();      // 0x6B58D0

// ── Terrain ────────────────────────────────────────────────

bool  Terrain::SelectTileType();                 // 0x579620
void  Terrain::PlaceTiberiumTrees();             // 0x5A28C0
_DWORD* Terrain::ClimbCheck();                   // 0x6D6410

// ── TerrainClass ───────────────────────────────────────────

char  TerrainClass::ProcessUpdate();             // 0x6DD8B0
int   TerrainClass::LoadFromStream();            // 0x71CDA0
int   TerrainClass::CheckFrameUpdate();          // 0x71CF30
int   TerrainClass::MissionStubReturnZero3();    // 0x71D310

// ── TerrainTypeClass ───────────────────────────────────────

_DWORD* TerrainTypeClass::GetWidth();            // 0x71E0D0
int     TerrainTypeClass::SaveLoad_Prefix();     // 0x71E1D0
int     TerrainTypeClass::SaveLoad_Prefix_0();   // 0x71E240
int     TerrainTypeClass::GetClassIdentifier();  // 0x71E260

// ── TiberiumClass ──────────────────────────────────────────

char  TiberiumClass::Spread();                   // 0x5A0160
char  TiberiumClass::LoadFromINI();              // 0x721A50
int   TiberiumClass::ddtor();                    // 0x721E40
int   TiberiumClass::SaveLoad_Prefix();          // 0x721E80
int   TiberiumClass::SaveLoad_Prefix_0();        // 0x7220D0

// ── TubeClass ──────────────────────────────────────────────

int  TubeClass::LoadState();                     // 0x7281A0
int  TubeClass::SaveState();                     // 0x7281E0
int  TubeClass::ddtor();                         // 0x7286D0

// ── WaveClass ──────────────────────────────────────────────

int  WaveClass::ProcessWaveTick();               // 0x75F7D0
int  WaveClass::GetClassIdentifier();            // 0x75F840

} // namespace gamemd
