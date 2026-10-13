// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
// G42.34 T11: system/cell.hpp include DROPPED -- its memberless tree CellClass
// collided (C2011) with e4/classes/CellClass_e4.hpp flat def; this TU is e4-universe
// for CellClass (6 supplied defs need flat members). Tree `Cell` base comes from
// e4/classes/Cell_e4.hpp (PosToIndex/IsPassable incl. static 1-arg form).
#include "misc/misc_ext.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "system/buffer_io_file.hpp"
#include "system/file_class.hpp"
#include "system/game_systems.hpp"
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "system/radar.hpp"
#include "system/scenario.hpp"
#include "system/tactical.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"  // G42.34: def carrier (QuickPassable/DrawWithFlags)
// G42.34 T11 supply block: compat macros (RA2_OPNEW/IDA_HIWORD/...), dword_B0xxxx
// externs (paired with core/ida_globals.cpp defs), legacy-TU-safe global externs
// (stru_A8EB00/stru_87F5F0/DSurface_ViewBounds flat/g_TacticalClass_Instance/...),
// Debug::Log carrier, Coord::To_Screen carrier, Isometric::InitTables carrier,
// Tactical::PixelToCell carrier.
#include "core/ida_compat.h"
#include "core/ida_globals.h"
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "core/ida_vtables.h"  // gC_vftable3
#include "system/map.hpp"
// G42.34 T11: Isometric_e4.hpp NOT included -- misc_ext.hpp:233 tree `class Isometric`
// (0-arg InitTables) is the first-wins def; e4 1-arg form arrives via shadow below.

namespace gamemd {
// G42.34 T11: CellCoord shadow carrier -- misc_ext tree CellCoord::To_CellObj is a
// 0-arg virtual; cache truth (0x68BCE0/0x47E318/...) calls To_CellObj(int16*) taking
// the waypoint coords. core/supplied_bodies.cpp:107 precedent (CellCoord_shadow_c).
struct CellCoord_shadow_c { void * To_CellObj(int16_t *a2); };  // 0x5657A0 shadow (C2)

// G42.34 T11: Isometric shadow carrier -- cache 0x487950 calls InitTables(uint* v5)
// (1-arg, unsigned int out); tree Isometric::InitTables is 0-arg. e4/classes/Isometric_e4.hpp
// shape, kept local to avoid C2011 against misc_ext tree def.
struct Isometric_shadow_c { void * InitTables(unsigned int *aP1); };

// G42.34 T11: TypeList_TechnoType local def -- csp_canon/classes.hpp:398978 version has
// no ddtor member; parseSection body 0x477F40 calls TypeList_TechnoType::ddtor(this)
// (static form, vector ddtor of the TechnoType list). File-local: no other TU sees this.
struct TypeList_TechnoType {
    static void ddtor(void * aP0);
};

// G42.34 T11: TransformMatrix3x4Point -- truth 0x5AFB80 (declared in _generated/global_funcs.hpp
// as (int,int,int) variadic-hostile form); typed float* form used by TransformPixel 0x6D2280 body.
extern float * TransformMatrix3x4Point(float * aP0, float * aP1, float * aP2);

// G42.34 T11: aNoTheme -- IDA string global returned by processEndgame 0x720940;
// no tree/e4_globals declaration found. Link debt: needs a definition site (globals round).
extern char *aNoTheme;
} // namespace gamemd

// 0x41C150
// G42.34 T10: orphan dup removed -- TacticalClass::ProcessTick2(0x41C150) is already
{
  *x41C150 = this->lastJumpjetMapCoords[0]; /*0x41c15a*/
  return x41C150; /*0x41c15c*/
}
// 0x487950
namespace gamemd {
int CellClass::QuickPassable() {
  int v1; // esi
  int v2; // edi
  int inited; // eax
  unsigned int v5[2]; // [esp+8h] [ebp-14h] BYREF
  unsigned int v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((int16_t)this->smudgeTypeIndex << 8) + 128; /*0x48796f*/
  v2 = ((int16_t)(*(this->smudgeTypeIndex + 1)) << 8) + 128; /*0x487971*/
  v5[0] = 128; /*0x487973*/
  v5[1] = 128; /*0x487977*/
  inited = Isometric::InitTables((int)this, v5); /*0x487980*/
  v6[0] = v1; /*0x487989*/
  v6[1] = v2; /*0x487993*/
  v6[2] = inited; /*0x487997*/
  return Cell::IsPassable(v6); /*0x4879a0*/
}
} // namespace gamemd

// 0x52AF50
namespace gamemd {
unsigned int * INIClass::sectionExists() {
  unsigned int *result; // eax
  int *sectionHead; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = this->vtable1; /*0x52af50*/
  sectionHead = this->sectionHead; /*0x52af59*/
  this->headNode[1] = 0; /*0x52af5f*/
  this->headNode[2] = 0; /*0x52af62*/
  this->headNode[0] = (int)0; /*0x52af65*/
  this->sectionHead[1] = 0; /*0x52af6b*/
  this->sectionHead[2] = 0; /*0x52af6e*/
  this->sectionHead[0] = (int)0; /*0x52af71*/
  /* X11: vtable install elided (implicit via class virtuals 0x52af77) — binary-proven install, was 0 */
  if ( this != (INIClass *)-16 ) /*0x52af7d*/
  {
    v3 = this->sectionHead[1]; /*0x52af7f*/
    if ( v3 ) /*0x52af84*/
    {
      v4 = this->sectionHead[2]; /*0x52af86*/
      if ( v4 ) /*0x52af8b*/
      {
        *(unsigned int *)(v4 + 4) = v3; /*0x52af8d*/
        *(unsigned int *)(this->sectionHead[1] + 8) = this->sectionHead[2]; /*0x52af96*/
        this->sectionHead[2] = 0; /*0x52af99*/
        this->sectionHead[1] = 0; /*0x52af9c*/
      }
    }
  }
  v5 = this->headNode[1]; /*0x52af9f*/
  this->sectionHead[2] = (int)this->headNode; /*0x52afa2*/
  this->sectionHead[1] = v5; /*0x52afa5*/
  v6 = this->headNode[1]; /*0x52afa8*/
  if ( v6 ) /*0x52afad*/
    *(unsigned int *)(v6 + 8) = sectionHead; /*0x52afaf*/
  this->headNode[1] = (int)sectionHead; /*0x52afb2*/
  /* X11: vtable install elided (implicit via class virtuals 0x52afb7) — binary-proven install, was 0 */
  return result; /*0x52afb5*/
}
} // namespace gamemd

// 0x5C0AD0
namespace gamemd {
char TacticalClass::CompareVector(int a2) {
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->vfptr2; /*0x5c0ad2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5c0add*/
  {
    v3 = 0; /*0x5c0adf*/
    if ( v2 <= 0 ) /*0x5c0ae3*/
      return 1; /*0x5c0b03*/
    v4 = *&this->vfptr1; /*0x5c0ae5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5c0aeb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5c0af4*/
    {
      ++v3; /*0x5c0af6*/
      ++v4; /*0x5c0af7*/
      if ( v3 >= v2 ) /*0x5c0afc*/
        return 1; /*0x5c0afc*/
    }
  }
  return 0; /*0x5c0afe*/
}
} // namespace gamemd

// 0x5C0FE0
namespace gamemd {
unsigned int * ScenarioClass::initAI(char a2) {
  this->nextScenario = (int)0; /*0x5c0fe3*/
  MultiplayerGameMode::Dtor((MultiplayerGameMode *)this); /*0x5c0fe9*/
  if ( (a2 & 1) != 0 ) /*0x5c0ff3*/
    operator delete((void *)(this)); /*0x5c0ff6*/
  return &this->nextScenario; /*0x5c1000*/
}
} // namespace gamemd

// 0x653F50
namespace gamemd {
void CellClass::DrawWrapper(unsigned int * a2, int jj, char a4, char a5) {
  CellClass::UpdateTerrainAndWaypoints((MapClass *)this, a2, jj, a4, a5); /*0x653f64*/
}
} // namespace gamemd

// 0x68BCC0
namespace gamemd {
unsigned int * ScenarioClass::Get_Waypoint_Location(unsigned int *a2, int a3) {
  *a2 = *&this->Items * a3 + 1586); /*0x68bccf*/
  return a2; /*0x68bcd1*/
}
} // namespace gamemd

// 0x68BCE0
namespace gamemd {
void * ScenarioClass::GetCellFromArray(int a2) {
  return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, &this->waypoints); /*0x68bcf6*/
}
} // namespace gamemd

// 0x722AB0
namespace gamemd {
int CellClass::ClearCrateStateForAll() {
  int result; // eax
  int i; // ecx

  result = Cell::PosToIndex((Cell *)this); /*0x722ab0*/
  for ( i = 0; /*0x722abf*/
        i < g_BuildingLoadQueue_Array.BarrelAnimData[0];
        *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i - 4) + 248) + result) = 0 )
  {
    ++i; /*0x722ac7*/
  }
  return result; /*0x722ae0*/
}
} // namespace gamemd

// 0x432610
namespace gamemd {
unsigned int * BufferIOFileClass::QueryInterface(char a2) {
  void *FileBaseOffset; // eax

  FileBaseOffset = (void *)this->FileBaseOffset; /*0x432616*/
  /* X11: vtable install elided (implicit via class virtuals 0x432619) — binary-proven install, was 0 */
  if ( FileBaseOffset ) /*0x432621*/
  {
    if ( (this->BufferOffset) ) /*0x432623*/
    {
      operator delete((void *)(FileBaseOffset)); /*0x432629*/
      (this->BufferOffset) = 0; /*0x432631*/
    }
    this->FileBaseOffset = 0; /*0x432634*/
  }
  this->BufferReadSize = 0; /*0x432639*/
  (this->u32_25) = 0; /*0x43263c*/
  (*(this->BufferOffset + (sizeof(this->BufferOffset) - 1))) = 0; /*0x43263f*/
  (this->BufferSize) = 0; /*0x432642*/
  (this->u32_29) = 0; /*0x432645*/
  RawFileClass::Dtor(this); /*0x432648*/
  if ( (a2 & 1) != 0 ) /*0x432652*/
    operator delete((void *)(this)); /*0x432655*/
  return this->vtable1; /*0x43265f*/
}
} // namespace gamemd

// 0x434A40
namespace gamemd {
// G42.34 T11: isolated as stub -- cache body itself contains unrenderable `this->?`
// members (IDA decompile failure of BitFont dtor fields); verbatim cannot compile.
{
  void *FileSize; // eax
  void **FilePointer; // esi

  FileSize = (void *)this->FileSize; /*0x434a43*/
  /* X11: vtable install elided (implicit via class virtuals 0x434a46) — binary-proven install, was 0 */
  if ( FileSize ) /*0x434a4e*/
    free(FileSize); /*0x434a51*/
  FilePointer = (void **)this->FilePointer; /*0x434a5a*/
  if ( FilePointer ) /*0x434a5f*/
  {
    if ( FilePointer[6] ) /*0x434a61*/
      operator delete((void *)(FilePointer[6])); /*0x434a69*/
    if ( FilePointer[7] ) /*0x434a71*/
      operator delete((void *)(FilePointer[7])); /*0x434a79*/
    operator delete((void *)(FilePointer)); /*0x434a82*/
  }
  if ( (fields & 1) != 0 ) /*0x434a91*/
    operator delete((void *)(this)); /*0x434a94*/
  return (void ***)this; /*0x434a9e*/
}
// G42.34 T11: isolated as stub -- real owner = BitText ddtor misattributed under
// BufferIOFileClass. Three unmet deps: (1) g_FogOfWarState typed as int in
} // namespace gamemd
// 0x477F40
namespace gamemd {
unsigned int * INIClass::parseSection(unsigned int *a2) {
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->headNode[0] = 0; /*0x477f4d*/
  this->headNode[1] = 0; /*0x477f50*/
  (this->sectionCount) = 1; /*0x477f53*/
  (this->u8_1D) = 0; /*0x477f57*/
  /* X11: vtable install elided (implicit via class virtuals 0x477f5a) — binary-proven install, was 0 */
  if ( this == (INIClass *)a2 ) /*0x477f60*/
    return this->vtable1; /*0x477f60*/
  TypeList_TechnoType::ddtor((_VectorClass_PAVTechnoTypeClass *)this); /*0x477f62*/
  v3 = a2[2]; /*0x477f68*/
  this->headNode[1] = v3; /*0x477f6d*/
  if ( !v3 ) /*0x477f70*/
  {
    this->headNode[0] = 0; /*0x477fae*/
    (this->u8_1D) = 0; /*0x477fb1*/
    return this->vtable1; /*0x477fb4*/
  }
  v4 = operator new(4 * v3); /*0x477f76*/
  this->headNode[0] = v4; /*0x477f80*/
  if ( !v4 ) /*0x477f83*/
    return this->vtable1; /*0x477f83*/
  v5 = this->headNode[1]; /*0x477f85*/
  v6 = 0; /*0x477f88*/
  (this->u8_1D) = 1; /*0x477f8c*/
  if ( v5 <= 0 ) /*0x477f90*/
    return this->vtable1; /*0x477f90*/
  do /*0x477fa4*/
  {
    *(unsigned int *)(this->headNode[0] + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x477f9b*/
    ++v6; /*0x477fa1*/
  }
  while ( v6 < this->headNode[1] ); /*0x477fa4*/
  return this->vtable1; /*0x477fa8*/
}
} // namespace gamemd

// 0x47FF80
namespace gamemd {
int * CellClass::GetScreenRect(int *a2) {
  int v3; // kr04_4
  int v4; // kr00_4
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int height; // esi
  unsigned int *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v3 = ((this->smudgeTypeIndex) << 8) + 128; /*0x47ffab*/
  v4 = ((*((signed short *)(this->smudgeTypeIndex + 2))) << 8) + 128; /*0x47ffb8*/
  v19 = 0; /*0x47ffba*/
  v18 = (v4 / 256) << 8; /*0x47ffc4*/
  v17 = (v3 / 256) << 8; /*0x47ffde*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v17, &v15); /*0x47ffe2*/
  v5 = 3 * this->level; /*0x47fff8*/
  v15 -= 30; /*0x47fffe*/
  v6 = v15; /*0x480002*/
  v7 = 30; /*0x480014*/
  v16 += (int)DSurface_ViewBounds.field_4 - 5 * v5; /*0x480019*/
  v8 = v16; /*0x48001d*/
  v9 = *&this->__pad_038; /*0x48001f*/
  if ( v9 == 0xFFFF ) /*0x480027*/
  {
    *a2 = v15; /*0x48002f*/
    a2[1] = v8; /*0x480031*/
    a2[2] = 60; /*0x480037*/
    a2[3] = 30; /*0x48003a*/
    return a2; /*0x480041*/
  }
  if ( v9 < 0 || v9 >= *(int *)&((unsigned int *)&stru_A8EB00)[340] )
  {
    Debug::Log(); /*0x4800e0*/
  }
  else
  {
    height = (uint8_t)this->height; /*0x480065*/
    v12 = (unsigned int *)(*(int (__thiscall **)(unsigned int))(**(unsigned int **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[328] + 4 * v9) + 156))(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[328] + 4 * v9)); /*0x48006b*/
    if ( !v12 ) /*0x480073*/
    {
      *a2 = v17; /*0x480082*/
      a2[1] = v18; /*0x480089*/
      a2[2] = v19; /*0x480090*/
      a2[3] = v20; /*0x480097*/
      return a2; /*0x48009d*/
    }
    if ( height >= *v12 * v12[1] - 1 ) /*0x4800a9*/
      height = *v12 * v12[1] - 1; /*0x4800ab*/
    v13 = v12[height + 4]; /*0x4800ad*/
    if ( (*(unsigned char *)(v13 + 36) & 1) != 0 )
    {
      v14 = *(unsigned int *)(v13 + 4) - *(unsigned int *)(v13 + 24) < 0 ? 0 : *(unsigned int *)(v13 + 4) - *(unsigned int *)(v13 + 24);
      v8 -= v14; /*0x4800ca*/
      v7 = v14 + 30; /*0x4800cc*/
    }
  }
  *a2 = v6; /*0x4800f3*/
  a2[1] = v8; /*0x4800f5*/
  a2[2] = 60; /*0x4800fb*/
  a2[3] = v7; /*0x4800fe*/
  return a2; /*0x480034*/
}
} // namespace gamemd

// 0x52ACE0
namespace gamemd {
unsigned int * GenericList::Constructor() {
  unsigned int *result; // eax
  GenericList *v2; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = &this->vtable; /*0x52ace0*/
  v2 = this + 4; /*0x52ace9*/
  this->u32_8 = 0; /*0x52acef*/
  this->u32_C = 0; /*0x52acf2*/
  this->u32_4 = 0; /*0x52acf5*/
  this->u32_14 = 0; /*0x52acfb*/
  this->u32_18 = 0; /*0x52acfe*/
  this->u32_10 = 0; /*0x52ad01*/
  /* X11: vtable install elided (implicit via class virtuals 0x52ad07) — binary-proven install, was 0 */
  if ( this != (GenericList *)-16 ) /*0x52ad0d*/
  {
    v3 = this->u32_14; /*0x52ad0f*/
    if ( v3 ) /*0x52ad14*/
    {
      v4 = this->u32_18; /*0x52ad16*/
      if ( v4 ) /*0x52ad1b*/
      {
        *(unsigned int *)(v4 + 4) = v3; /*0x52ad1d*/
        *(GenericList *)(this->u32_14 + 8) = this->u32_18; /*0x52ad26*/
        this->u32_18 = 0; /*0x52ad29*/
        this->u32_14 = 0; /*0x52ad2c*/
      }
    }
  }
  v5 = this->u32_8; /*0x52ad2f*/
  this->u32_18 = this + 1; /*0x52ad32*/
  this->u32_14 = v5; /*0x52ad35*/
  v6 = this->u32_8; /*0x52ad38*/
  if ( v6 ) /*0x52ad3d*/
    *(unsigned int *)(v6 + 8) = v2; /*0x52ad3f*/
  this->u32_8 = v2; /*0x52ad42*/
  return result; /*0x52ad45*/
}
} // namespace gamemd

// 0x52AF00
namespace gamemd {
unsigned int * INIClass::findSection(int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
  this->headNode[0] = 0; /*0x52af08*/
  this->headNode[1] = 0; /*0x52af0b*/
  this->sectionHead[0] = a3; /*0x52af12*/
  this->headNode[2] = a2; /*0x52af19*/
  this->sectionHead[2] = a5; /*0x52af20*/
  this->sectionHead[1] = a4; /*0x52af27*/
  *(unsigned int *)this->__pad_020 = a8; /*0x52af2e*/
  this->sectionCount = a7; /*0x52af31*/
  *&this->unknown30 = a6; /*0x52af38*/
  /* X11: vtable install elided (implicit via class virtuals 0x52af3b) — binary-proven install, was 0 */
  return this->vtable1; /*0x52af41*/
}
} // namespace gamemd

// 0x557830
namespace gamemd {
// G42.34 T11: isolated as stub -- cache 0x557830 truth: ListClass* this (list
{
  int v7; // eax

  a2 = a2; /*0x557831*/
  if ( (a2 & 4) != 0 ) /*0x55783b*/
  {
    *a3 = 0; /*0x557848*/
    CellClass::Draw((ControlClass *)this, a2 & 0xFFFFFFFB, a3, 0); /*0x55784e*/
    return 1; /*0x557854*/
  }
  else if ( (a2 & 0x100) != 0 ) /*0x557865*/
  {
    if ( *a3 == 38 ) /*0x55786c*/
    {
      this->ScrollDown(-1); /*0x557874*/
      *a3 = 0; /*0x557880*/
      return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x557886*/
    }
    else if ( *a3 == 40 ) /*0x557894*/
    {
      this->ScrollDown(1); /*0x55789c*/
      *a3 = 0; /*0x5578a8*/
      return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x5578ae*/
    }
    else
    {
      (((unsigned char *)&(a2))[1]) = (((unsigned char *)&(a2))[1]) & 0xFE; /*0x5578b9*/
      return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x5578c2*/
    }
  }
  else
  {
    v7 = this->u32_170 /*0x5578e8*/
       + ((*(int (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer)
        - this->Height
        - 1)
       / this->u32_4C;
    this->u32_16C = v7; /*0x5578ea*/
    if ( v7 >= this->u32_44 - 1 ) /*0x5578f6*/
      v7 = this->u32_44 - 1; /*0x5578f8*/
    this->u32_16C = v7; /*0x5578fd*/
    if ( v7 == -1 ) /*0x557903*/
      this->u32_16C = 0; /*0x557905*/
    return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x557915*/
  }
}
unsigned short * CellClass::initCellData(unsigned short *a2) {
    (unsigned short)(this->mapCoords[0]) += *a2; /*0x588c49*/
    (unsigned short)((this->mapCoords[0]) >> 16) += a2[1]; /*0x588c50*/
    return (unsigned short *)this; /*0x588c54 G42.34 T11: CellClass* -> ushort* cast (cache returns this as unsigned short*)*/
}
} // namespace gamemd

// 0x589E20
namespace gamemd {
char RadarClass::updateRadarCells(int a2, unsigned int *a3) {
  unsigned int *RadarClass_field_0x0; // ecx
  int v4; // edx
  char *v5; // esi
  unsigned int *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned int *v14; // ecx

  RadarClass_field_0x0 = this->vtable1; /*0x589e24*/
  v4 = RadarClass_field_0x0[6 * a2 + 4]; /*0x589e30*/
  v5 = (char *)&RadarClass_field_0x0[6 * a2]; /*0x589e34*/
  v6 = (unsigned int *)v5->__pad_004; /*0x589e37*/
  v7 = v4 - 1; /*0x589e3b*/
  if ( v4 - 1 < 0 ) /*0x589e40*/
  {
  LABEL_4:
    v8 = v5->u32_8; /*0x589e4e*/
    if ( v4 < v8 /*0x589e70*/
      || (v5[13] || !v8)
      && (v9 = v5->Straw_14, v9 > 0)
      && v5->vt_slot_8(v8 + v9, 0) )
    {
      v10 = v5->u32_10; /*0x589e77*/
      v11 = v10 + 1; /*0x589e7a*/
      v12 = 3 * v10; /*0x589e7d*/
      v13 = v5->__pad_004; /*0x589e80*/
      v5->u32_10 = v11; /*0x589e83*/
      v14 = (unsigned int *)(v13 + 4 * v12); /*0x589e86*/
      *v14 = *a3; /*0x589e8b*/
      v14[1] = a3[1]; /*0x589e90*/
      v14[2] = a3[2]; /*0x589e96*/
    }
    return 1; /*0x589e9b*/
  }
  else
  {
    while ( *a3 != *v6 ) /*0x589e46*/
    {
      v6 += 3; /*0x589e48*/
      if ( --v7 < 0 ) /*0x589e4c*/
        goto LABEL_4; /*0x589e4c*/
    }
    return 0; /*0x589ea3*/
  }
}
} // namespace gamemd

// 0x5C0AC0
namespace gamemd {
int TacticalClass::ProbeCalling2(int a2) {
  return *(unsigned int *)(*&this->vfptr1 + 4 * a2); /*0x5c0aca*/
}
} // namespace gamemd

// 0x5C0D80
namespace gamemd {
unsigned int * TacticalClass::DestroyVector(unsigned int *Block, char a2) {
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c0d83*/
  *Block = 0; /*0x5c0d86*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c0d90*/
  {
    operator delete((void *)(v3)); /*0x5c0d98*/
    *(Block + 1) = 0; /*0x5c0da0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c0dab*/
  *(Block + 2) = 0; /*0x5c0db1*/
  if ( (a2 & 1) != 0 ) /*0x5c0db8*/
    operator delete((void *)(Block)); /*0x5c0dbb*/
  return Block; /*0x5c0dc5*/
}
} // namespace gamemd

// 0x5D8160
namespace gamemd {
int ScenarioClass::loadTheater(int a2) {
  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x5d816a*/
}
} // namespace gamemd

// 0x653760
namespace gamemd {
unsigned int * TacticalClass::PixelToCellCheck(int *a2) {
  int v2; // edx
  unsigned int *v3; // eax
  void *v4; // edx
  int v6[2]; // [esp+4h] [ebp-14h] BYREF
  unsigned int v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2[1]; /*0x65376a*/
  v6[0] = *a2; /*0x65376d*/
  v6[1] = v2; /*0x653781*/
  v3 = TacticalClass::TransformPixel((TacticalClass *)g_TacticalClass_Instance, v7, v6); /*0x653785*/
  if ( *v3 == dword_B04900 && v3[1] == dword_B04904 && v3[2] == dword_B04908 ) /*0x6537ad*/
  {
    this->vfptr = (void *)dword_B048C0; /*0x653803*/
    return &this->vfptr; /*0x6537f9*/
  }
  else
  {
    v4 = (void *)*Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, v6); /*0x6537cd*/
    this->vfptr = v4; /*0x6537d3*/
    return &this->vfptr; /*0x6537cf*/
  }
}
} // namespace gamemd

// 0x6D2280
namespace gamemd {
unsigned int * TacticalClass::TransformPixel(unsigned int *a2, unsigned int *a3) {
  int v3; // esi
  int v4; // esi
  float *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  float v10[3]; // [esp+8h] [ebp-18h] BYREF
  float v11; // [esp+14h] [ebp-Ch] BYREF
  float v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  if ( *a3 >= dword_B0CE30 || (v3 = a3[1], v3 >= dword_B0CE34 + dword_B0CE2C) ) /*0x6d22ab*/
  {
    *a2 = dword_B0CE08; /*0x6d2345*/
    a2[1] = dword_B0CE0C; /*0x6d234d*/
    a2[2] = dword_B0CE10; /*0x6d2356*/
    return a2; /*0x6d2337*/
  }
  else
  {
    v4 = this->visibleArea[1] + v3; /*0x6d22bf*/
    (*((unsigned int *)&(v10[0]))) = this->visibleArea[0] + *a3; /*0x6d22c1*/
    (*((unsigned int *)&(v10[1]))) = v4; /*0x6d22c5*/
    v11 = (float)(*((signed int *)&(v10[0]))); /*0x6d22dc*/
    v13 = 0; /*0x6d22e4*/
    v12 = (float)v4; /*0x6d22ec*/
    v5 = TransformMatrix3x4Point(v10, (float *)this->TacticalClass_field_DE4, &v11); /*0x6d22f0*/
    v11 = *v5; /*0x6d22f7*/
    v12 = v5[1]; /*0x6d2302*/
    v13 = *((unsigned int *)v5 + 2); /*0x6d2309*/
    (*((unsigned short *)&(v6))) = Math::RoundToInt(v11); /*0x6d230d*/
    v7 = v6; /*0x6d2316*/
    (*((unsigned short *)&(v8))) = Math::RoundToInt(v12); /*0x6d2318*/
    *a2 = v7; /*0x6d2325*/
    a2[1] = v8; /*0x6d2327*/
    a2[2] = 0; /*0x6d232c*/
    return a2; /*0x6d232a*/
  }
}
} // namespace gamemd

// 0x720940
namespace gamemd {
char * ScenarioClass::processEndgame(unsigned int a2) {
  if ( a2 >= this->nextScenario[9] ) /*0x720949*/
    return aNoTheme; /*0x720954*/
  else
    return *(char **)(this->nextScenario[6] + 4 * a2); /*0x72094e*/
}
} // namespace gamemd
// 0x478220
namespace gamemd {
unsigned int * INIClass::parseKeyValue(unsigned int *a2) {
    int v3; // edi
    int v4; // eax
    unsigned char *v5; // ecx
    int v6; // edx
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // edx
    int v11; // edi

    this->headNode[0] = 0; /*0x47822e*/
    this->headNode[1] = 0; /*0x478231*/
    (this->sectionCount) = 1; /*0x478234*/
    (this->u8_1D) = 0; /*0x478238*/
    /* X11: vtable install elided (implicit via VectorClass_RGBClass virtuals 0x47823b) */
    if ( this == (INIClass *)a2 ) /*0x478241*/
      return this->vtable1; /*0x478241*/
    FilePipe_38::ddtor((int)this); /*0x478247*/
    v3 = a2[2]; /*0x47824d*/
    this->headNode[1] = v3; /*0x478252*/
    if ( !v3 ) /*0x478255*/
    {
      this->headNode[0] = 0; /*0x4782c6*/
      (this->u8_1D) = 0; /*0x4782c9*/
      return this->vtable1; /*0x4782cc*/
    }
    v4 = operator new(3 * v3); /*0x47825b*/
    if ( v4 ) /*0x478265*/
    {
      if ( v3 - 1 >= 0 ) /*0x47826c*/
      {
        v5 = &v4->u8_2; /*0x47826e*/
        v6 = v3; /*0x478271*/
        do /*0x47827e*/
        {
          *(v5 - 2) = 0; /*0x478272*/
          *(v5 - 1) = 0; /*0x478275*/
          *v5 = 0; /*0x478278*/
          v5 += 3; /*0x47827a*/
          --v6; /*0x47827d*/
        }
        while ( v6 ); /*0x47827e*/
      }
    }
    else
    {
      v4 = 0; /*0x478282*/
    }
    this->headNode[0] = v4; /*0x478286*/
    if ( !v4 ) /*0x478289*/
      return this->vtable1; /*0x478289*/
    v7 = this->headNode[1]; /*0x47828b*/
    v8 = 0; /*0x47828e*/
    (this->u8_1D) = 1; /*0x478292*/
    if ( v7 <= 0 ) /*0x478296*/
      return this->vtable1; /*0x478296*/
    v9 = 0; /*0x478298*/
    do /*0x4782bb*/
    {
      v10 = v9 + a2[1]; /*0x4782a0*/
      v11 = this->headNode[0] + v9; /*0x4782a4*/
      ++v8; /*0x4782a6*/
      v9 += 3; /*0x4782aa*/
      *(unsigned short *)v11 = *(unsigned short *)v10; /*0x4782ad*/
      *(unsigned char *)(v11 + 2) = *(unsigned char *)(v10 + 2); /*0x4782b3*/
    }
    while ( v8 < this->headNode[1] ); /*0x4782bb*/
    return this->vtable1; /*0x4782bf*/
}
} // namespace gamemd

// 0x435560
namespace gamemd {
unsigned int * BufferIOFileClass::Constructor_BitText(char a2) {
    Text *v3; // esi

    *(unsigned int *)this->RawFileClass = (void *)&vt_BitText; /*0x435564*/
    v3 = g_FogOfWarState; /*0x43556a*/
    if ( g_FogOfWarState ) /*0x435572*/
      (*(void (__thiscall **)(Text *, int))g_FogOfWarState->Text_field_00)(g_FogOfWarState, 1); /*0x43557a*/
    if ( v3 == g_FogOfWarState ) /*0x435582*/
      g_FogOfWarState = 0; /*0x435584*/
    if ( (a2 & 1) != 0 ) /*0x435593*/
      operator delete((void *)(this)); /*0x435596*/
    return this->RawFileClass; /*0x4355a0*/
}
} // namespace gamemd

// 0x588C40
namespace gamemd::ra2::gamemd {
unsigned short * CellClass::initCellData(unsigned short *a2) {
    (*((unsigned short *)&(this->mapCoords[0]))) += *a2; /*0x588c49*/
    (*(this->q002 + 1)) += a2[1]; /*0x588c50*/
    return this; /*0x588c54*/
}
} // namespace gamemd::ra2::gamemd

