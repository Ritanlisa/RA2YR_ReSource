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

// All relocatable declarations were moved to class bodies / src/_generated/global_funcs.hpp by tools/move_funcs_decls.py.
// Residual declarations below could not be relocated (invalid name / no class / collision):

char  AnimSystem_Init();                        // 0x75A790
int   AnimTypeClass::GetClassIdentifier();       // 0x428990
_DWORD* BulletTypeClass::GetROF();               // 0x46C4F0
int    BulletTypeClass::GetClassIdentifier();    // 0x46C750
int     OverlayTypeClass::GetClassIdentifier();  // 0x5FEC30
int  ParticleClass::GetClassIdentifier();        // 0x62D930
int  ParticleSystemClass::vt[06]();                // 0x630090
int  SmudgeTypeClass::LoadTypeData();            // 0x6B5850
int  SmudgeTypeClass::SaveToINI();               // 0x6B58B0
int  SmudgeTypeClass::GetClassIdentifier();      // 0x6B58D0
bool  Terrain::SelectTileType();                 // 0x579620
void  Terrain::PlaceTiberiumTrees();             // 0x5A28C0
_DWORD* Terrain::ClimbCheck();                   // 0x6D6410
int   TerrainClass::LoadFromStream();            // 0x71CDA0
int     TerrainTypeClass::GetClassIdentifier();  // 0x71E260
char  TiberiumClass::Spread();                   // 0x5A0160
int   TiberiumClass::ddtor();                    // 0x721E40
int  TubeClass::LoadState();                     // 0x7281A0
int  TubeClass::SaveState();                     // 0x7281E0
int  TubeClass::ddtor();                         // 0x7286D0
int  WaveClass::GetClassIdentifier();            // 0x75F840


} // namespace gamemd
