// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x5FE250
OverlayTypeClass::OverlayTypeClass(ObjectClass * aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  BuildingTypeClass *v6; // edx

  ObjectTypeClass::ConstructFull(aP1); /*0x5fe259*/
  *(&this->q0408) = 1; /*0x5fe265*/
  *(&this->q0409) = 1; /*0x5fe26b*/
  this->Explodes = 1; /*0x5fe271*/
  this->u8_2B3 = 1; /*0x5fe277*/
  *(&this->q0405) = -1; /*0x5fe280*/
  *(&this->q0406) = 0; /*0x5fe28a*/
  *(&this->q0407) = 0; /*0x5fe290*/
  this->NoUseTileLandType = 0; /*0x5fe296*/
  this->q2A9 = 0; /*0x5fe29c*/
  this->q2AA = 0; /*0x5fe2a2*/
  this->q2AB = 0; /*0x5fe2a8*/
  this->q2AD = 0; /*0x5fe2ae*/
  this->q2AE = 0; /*0x5fe2b4*/
  this->q2AF = 0; /*0x5fe2ba*/
  this->q2B0 = 0; /*0x5fe2c0*/
  this->q2B1 = 0; /*0x5fe2c6*/
  this->q2B2 = 0; /*0x5fe2cc*/
  this->q2B4 = 0; /*0x5fe2d2*/
  this->tail_2B5 = 0; /*0x5fe2d8*/
  this->q2B6 = 0; /*0x5fe2de*/
  this->q2B7 = 0; /*0x5fe2e4*/
  this->q2B8 = 0; /*0x5fe2ea*/
  AbstractClass::GenerateUniqueID((int)&this->vtable2); /*0x5fe30b*/
  this->q22F = 1; /*0x5fe310*/
  this->q230 = 0; /*0x5fe317*/
  this->q232 = 1; /*0x5fe31d*/
  this->q235 = 0; /*0x5fe324*/
  v3 = g_ObjectTypeConfig; /*0x5fe32a*/
  if ( g_ObjectTypeConfig < dword_A83D88 /*0x5fe368*/
    || (byte_A83D8D || !dword_A83D88)
    && dword_A83D94 > 0
    && (v4 = (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A83D80 + 8))(
               &dword_A83D80,
               dword_A83D88 + dword_A83D94,
               0) == 0,
        v3 = g_ObjectTypeConfig,
        !v4) )
  {
    g_ObjectTypeConfig = v3 + 1; /*0x5fe36d*/
    *(unsigned int *)&g_BuildingTypeClass_Array->gap0[4 * v3] = this; /*0x5fe377*/
    v3 = g_ObjectTypeConfig; /*0x5fe37a*/
  }
  v5 = 0; /*0x5fe37f*/
  if ( v3 <= 0 ) /*0x5fe383*/
  {
  LABEL_11:
    *(&this->q0405) = -1; /*0x5fe397*/
    return this; /*0x5fe3a0*/
  }
  else
  {
    v6 = g_BuildingTypeClass_Array; /*0x5fe385*/
    while ( *(unsigned int **)v6->gap0 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      v6 = (BuildingTypeClass *)((char *)v6 + 4); /*0x5fe390*/
      if ( v5 >= v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    *(&this->q0405) = v5; /*0x5fe3a7*/
    return this; /*0x5fe3ad*/
  }
}
// 0x5FE770
AnimTypeClass * * OverlayTypeClass::LoadFromINI(unsigned char *** aP1)
{
  int v3; // eax
  int v4; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  int Coord; // eax
  char v16; // al
  char v17; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  char v23; // [esp-Ch] [ebp-298h]
  char v24; // [esp-Ch] [ebp-298h]
  char v25; // [esp-Ch] [ebp-298h]
  char v26; // [esp-Ch] [ebp-298h]
  char v27; // [esp-Ch] [ebp-298h]
  unsigned char v28[4]; // [esp+8h] [ebp-284h] BYREF
  char Destination[128]; // [esp+Ch] [ebp-280h] BYREF
  char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x5fe783*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, aP1) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  v3 = OverlayTypeClass::ReadINIString(&this->RadarColor, aLand, this->CellAnim); /*0x5fe7ac*/
  v4 = this->Wall; /*0x5fe7b1*/
  this->CellAnim = v3; /*0x5fe7b7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(&this->RadarColor, aStrength, v4); /*0x5fe7c6*/
  v23 = this->NoUseTileLandType; /*0x5fe7d3*/
  this->Wall = Int_Overwrite; /*0x5fe7da*/
  this->NoUseTileLandType = INIClass::ReadBool_Overwrite(&this->RadarColor, g_INI_Key_Wall, v23); /*0x5fe7e5*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(&this->RadarColor, g_INI_Key_Tiberium, this->q2A9); /*0x5fe7fa*/
  v7 = this->q2AA; /*0x5fe7ff*/
  this->q2A9 = Bool_Overwrite; /*0x5fe805*/
  v8 = INIClass::ReadBool_Overwrite(&this->RadarColor, aCrate, v7); /*0x5fe814*/
  v24 = this->q2AB; /*0x5fe821*/
  this->q2AA = v8; /*0x5fe828*/
  this->q2AB = INIClass::ReadBool_Overwrite(&this->RadarColor, aCratetrigger, v24); /*0x5fe833*/
  v9 = INIClass::ReadBool_Overwrite(&this->RadarColor, aExplodes, this->q2B0); /*0x5fe848*/
  v10 = this->q2B2; /*0x5fe84d*/
  this->q2B0 = v9; /*0x5fe853*/
  v11 = INIClass::ReadBool_Overwrite(&this->RadarColor, aOverrides, v10); /*0x5fe862*/
  v12 = this->q29C; /*0x5fe867*/
  this->q2B2 = v11; /*0x5fe884*/
  if ( INIClass::GetString( /*0x5fe88a*/
         aP1,
         (uint8_t *)(&this->vtable46),
         (uint8_t *)aCellanim,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v13 = AnimTypeClass::FindOrCreate(Destination); /*0x5fe897*/
  }
  else
  {
    v13 = v12; /*0x5fe89e*/
  }
  this->q29C = v13; /*0x5fe8a0*/
  this->q2A0 = INIClass::ReadInt_Overwrite(&this->ImageFile, aDamagelevels, this->q2A0); /*0x5fe8c3*/
  if ( this->q2A9 ) /*0x5fe8c9*/
  {
    v14 = this->CellAnim; /*0x5fe8d3*/
    this->Armor = 6; /*0x5fe8d9*/
    if ( !v14 ) /*0x5fe8e5*/
      this->CellAnim = 5; /*0x5fe8e7*/
  }
  if ( !this->q22C && !this->q2AF ) /*0x5fe8fb*/
  {
    _makepath(Buffer, 0, 0, (const char *)(&this->u32_C84), Ext); /*0x5fe917*/
    this->Image = SearchMIXFile(Buffer, 1); /*0x5fe92d*/
  }
  Coord = INIClass::GetCoord( /*0x5fe947*/
            aP1,
            (int)v28,
            (uint8_t *)(&this->vtable46),
            (uint8_t *)aRadarcolor,
            (uint8_t *)(&this->q1144));
  this->q2B6 = *(unsigned short *)Coord; /*0x5fe94f*/
  v25 = this->Explodes; /*0x5fe95e*/
  this->q2B8 = *(unsigned char *)(Coord + 2); /*0x5fe965*/
  v16 = INIClass::ReadBool_Overwrite(&this->RadarColor, aNousetilelandt, v25); /*0x5fe968*/
  v17 = this->q2AD; /*0x5fe96d*/
  this->Explodes = v16; /*0x5fe973*/
  v18 = INIClass::ReadBool_Overwrite(&this->RadarColor, aIsveinholemons, v17); /*0x5fe982*/
  v26 = this->q2AE; /*0x5fe98f*/
  this->q2AD = v18; /*0x5fe996*/
  this->q2AE = INIClass::ReadBool_Overwrite(&this->RadarColor, aIsveins, v26); /*0x5fe9a1*/
  v19 = INIClass::ReadBool_Overwrite(&this->RadarColor, aChainreaction, this->q2B1); /*0x5fe9b6*/
  v20 = this->u8_2B3; /*0x5fe9bb*/
  this->q2B1 = v19; /*0x5fe9c1*/
  v21 = INIClass::ReadBool_Overwrite(&this->RadarColor, aDrawflat, v20); /*0x5fe9d0*/
  v27 = this->tail_2B5; /*0x5fe9dd*/
  this->u8_2B3 = v21; /*0x5fe9e4*/
  this->tail_2B5 = INIClass::ReadBool_Overwrite(&this->RadarColor, aIsarock, v27); /*0x5fe9ef*/
  this->q2B4 = INIClass::ReadBool_Overwrite(&this->RadarColor, aIsrubble, this->q2B4); /*0x5fea0a*/
  return 1; /*0x5fea11*/
}
// 0x5FEAF0
ScenarioClass * * OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int result; // eax
  char v3; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( a1 ) /*0x5feb13*/
    {
      ObjectTypeClass::Construct((unsigned int *)a1, (int)&v3); /*0x5feb1c*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 668)); /*0x5feb56*/
    if ( !*(unsigned char *)(a1 + 687) ) /*0x5feb5b*/
    {
      if ( *(unsigned char *)(a1 + 556) ) /*0x5feb69*/
      {
        _makepath( /*0x5feba1*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 504),
          (const char *)&off_7E1BC6 + 112 * *((unsigned int *)g_ScenarioClass_Instance + 1174));
      }
      else
      {
        _makepath(Buffer, 0, 0, (const char *)(a1 + 504), Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(Buffer, *((unsigned int *)g_ScenarioClass_Instance + 1174)); /*0x5febd7*/
      }
      if ( !*(unsigned int *)(a1 + 164) ) /*0x5febdc*/
        *(unsigned int *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/
}
// 0x5FEDE0
AnimTypeClass * * OverlayTypeClass::GetCategory()
{
  void *result; // eax
  void *EntireFile; // edi
  unsigned int v4[22]; // [esp+4h] [ebp-26Ch] BYREF
  unsigned char v5[12]; // [esp+5Ch] [ebp-214h] BYREF
  int v6; // [esp+68h] [ebp-208h]
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = *(void **)(&this->q0404); /*0x5fede9*/
  if ( !result && this->q2AF ) /*0x5fedf7*/
  {
    Debug::Log(); /*0x5fee0e*/
    if ( this->q22C ) /*0x5fee13*/
    {
      _makepath( /*0x5fee4f*/
        Buffer,
        0,
        0,
        (const char *)(&this->u32_C84),
        (const char *)&off_7E1BC6 + 112 * *((unsigned int *)g_ScenarioClass_Instance + 1174));
    }
    else if ( this->q237 ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, (const char *)(&this->u32_C84), Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, *((unsigned int *)g_ScenarioClass_Instance + 1174)); /*0x5fee90*/
    }
    CCFileClass::Construct(v4, Buffer); /*0x5fee9f*/
    EntireFile = CCFileClass::ReadEntireFile(v4); /*0x5feead*/
    this->Image = EntireFile; /*0x5feeb1*/
    if ( EntireFile ) /*0x5feeb7*/
      this->ImageAllocated = 1; /*0x5feeb9*/
    v6 = 0; /*0x5feecc*/
    Vector::Clear((int)v5); /*0x5feed4*/
    v4[0] = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor(v4); /*0x5feee5*/
    return EntireFile; /*0x5feeea*/
  }
  return result; /*0x5feeed*/
}
// 0x6440A0
unsigned int * OverlayTypeClass::Construct(ObjectClass * aP1)
{
  int v3; // eax

  ObjectTypeClass::ConstructFull(aP1); /*0x6440a9*/
  *(&this->q0405) = -1; /*0x6440b3*/
  *(&this->u32_443) = -1; /*0x6440b9*/
  *(&this->u32_444) = -1; /*0x6440bf*/
  this->CellAnim = 0; /*0x6440c5*/
  *(&this->q0407) = 1; /*0x6440cb*/
  *(&this->q0408) = 0; /*0x6440d5*/
  *(&this->q0409) = 50; /*0x6440db*/
  *(&this->u32_440) = 0; /*0x6440e5*/
  *(&this->u32_441) = 0; /*0x6440eb*/
  *(&this->u32_442) = 0; /*0x6440f1*/
  *(&this->u32_445) = 0; /*0x6440fc*/
  *(&this->u32_446) = 0; /*0x644102*/
  *(&this->u32_447) = 0; /*0x644108*/
  *(&this->u32_448) = -1717986918; /*0x64410e*/
  *(&this->u32_480) = -1717986918; /*0x644114*/
  *(&this->u32_482) = 0; /*0x64411a*/
  *(&this->u32_484) = 0; /*0x644120*/
  *(&this->u32_486) = 0; /*0x644126*/
  *(&this->u32_488) = 0; /*0x64412c*/
  *(&this->u32_4C0) = 0; /*0x644132*/
  *(&this->u32_449) = 1069128089; /*0x64413b*/
  *(&this->u32_481) = 1067030937; /*0x644145*/
  *(&this->u32_483) = 1077477376; /*0x64414f*/
  *(&this->u32_485) = 0; /*0x644159*/
  *(&this->u32_487) = 0; /*0x64415f*/
  *(&this->u32_489) = 0; /*0x644165*/
  *(&this->u32_4C1) = 0; /*0x64416b*/
  *(&this->u32_4C2) = 0; /*0x644171*/
  *(&this->u32_4C3) = 0; /*0x644177*/
  this->q308 = 0; /*0x64417d*/
  this->qC24 = 0; /*0x644183*/
  this->q30A = 0; /*0x644189*/
  this->u32_30B = 0; /*0x644190*/
  this->q30C = 0; /*0x644196*/
  AbstractClass::GenerateUniqueID((int)&this->vtable2); /*0x6441b6*/
  if ( g_InfantryTypeInitState < dword_A83D70 /*0x6441ef*/
    || (byte_A83D75 || !dword_A83D70)
    && dword_A83D7C > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A83D68 + 8))(
         &dword_A83D68,
         dword_A83D70 + dword_A83D7C,
         0) )
  {
    v3 = g_InfantryTypeInitState++; /*0x6441fc*/
    *((unsigned int *)dword_A83D6C + v3) = this; /*0x64420b*/
  }
  this->q234 = 1; /*0x64420e*/
  return this; /*0x644217*/
}
// 0x4754B0
int OverlayTypeClass::ReadINIString(CCINIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48DFD0(aP3); /*0x4754cd*/
  if ( INIClass::GetString(this, aP1, a2, v5, Destination, 128) ) /*0x4754e5*/
    return OverlayTypeClass::LookupByName(Destination); /*0x4754f2*/
  else
    return aP3; /*0x475502*/
}
// 0x48DF80
int OverlayTypeClass::LookupByName()
{
  int v2; // edi
  const void **v3; // esi

  if ( !_strcmpi(g_Str__none_, this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  v2 = 0; /*0x48df9b*/
  v3 = (const void **)off_81DA28; /*0x48df9d*/
  while ( _strcmpi(*v3, this) ) /*0x48dfb0*/
  {
    ++v3; /*0x48dfb2*/
    ++v2; /*0x48dfb5*/
    if ( (int)v3 >= (int)off_81DA58 ) /*0x48dfbc*/
      return -1; /*0x48dfbc*/
  }
  return v2; /*0x48dfbe*/
}
// 0x5FE4C0
int * OverlayTypeClass::GetTile(int a1)
{
  if ( (byte_AC15E8 & 1) == 0 ) /*0x5fe4cb*/
  {
    byte_AC15E8 |= 1u; /*0x5fe4e6*/
    dword_AC1640 = 0; /*0x5fe4ec*/
    dword_AC1644 = 2147450879; /*0x5fe504*/
    atexit(nullsub_213); /*0x5fe50a*/
  }
  return &dword_AC1640; /*0x5fe518*/
}
// 0x5FE530
bool OverlayTypeClass::GetType(IUnknown * aP2, int a3)
{
  void *v4; // eax

  v4 = (void *)operator new(0xB0u); /*0x5fe538*/
  return v4 && Object::SpawnAtCell(v4, (int)this, aP2, -1); /*0x5fe559*/
}
// 0x5FE570
OverlayClass * OverlayTypeClass::GetDamage(int a2)
{
  void *v3; // eax

  v3 = (void *)operator new(0xB0u); /*0x5fe578*/
  if ( v3 ) /*0x5fe582*/
    return Object::SpawnAtCell(v3, (int)this, &word_AC1608, -1); /*0x5fe58e*/
  else
    return 0; /*0x5fe597*/
}
// 0x5FE5A0
void OverlayTypeClass::GetLandType(unsigned int * a2, int * a3, unsigned int a4)
{
  int v4; // edx
  int v5; // eax
  int v6[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = g_Map_VisibleRect + a2[1] + 15; /*0x5fe5c1*/
  v6[0] = DSurface_ViewBounds + *a2 + 30; /*0x5fe5c4*/
  v6[1] = v4; /*0x5fe5c8*/
  v5 = (*(int (__thiscall **)(void *))(((unsigned int)(this->zero_3C6))))(this); /*0x5fe5f3*/
  DrawToSurfaceSHP(g_DSurface_Hidden_2, FileSystem_x_PAL, v5, a4, v6, a3, 1536, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x5fe606*/
}
// 0x5FEA30
unsigned int * OverlayTypeClass::vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1)
{
  *a0 = *aP1; /*0x5fea3d*/
  a0[1] = aP1[1]; /*0x5fea42*/
  a0[2] = aP1[2]; /*0x5fea49*/
  return a0; /*0x5fea45*/
}
// 0x5FEA50
int OverlayTypeClass::PowerDrainUpdate(int * a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  AbstractTypeClass::ProcessPower(a2); /*0x5fea59*/
  Power::TimerProcess(this->LandType); /*0x5fea67*/
  Power::TimerProcess(this->CellAnim); /*0x5fea75*/
  Power::TimerProcess(this->q2A0); /*0x5fea83*/
  Power::TimerProcess(this->Wall); /*0x5fea91*/
  IDA_LOBYTE(v3) = this->NoUseTileLandType; /*0x5fea96*/
  Power::FlagProcess(a2, v3); /*0x5fea9f*/
  IDA_LOBYTE(v4) = this->q2A9; /*0x5feaa4*/
  v5 = Power::FlagProcess(a2, v4); /*0x5feaad*/
  IDA_LOBYTE(v5) = this->q2AA; /*0x5feab2*/
  Power::FlagProcess(a2, v5); /*0x5feabb*/
  IDA_LOBYTE(v6) = this->q2AB; /*0x5feac0*/
  Power::FlagProcess(a2, v6); /*0x5feac9*/
  IDA_LOBYTE(v7) = this->q2B0; /*0x5feace*/
  return Power::FlagProcess(a2, v7); /*0x5feadc*/
}
// 0x5FEC10
int OverlayTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x5fec1f*/
  if ( result >= 0 ) /*0x5fec26*/
    return 0; /*0x5fec28*/
  return result; /*0x5fec2a*/
}
// 0x5FEC30
int OverlayTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x5fec36*/
    return -2147467261; /*0x5fec38*/
  *a2 = 1525862009; /*0x5fec46*/
  a2[1] = 298976820; /*0x5fec4e*/
  a2[2] = 1610654892; /*0x5fec57*/
  a2[3] = -1252326136; /*0x5fec60*/
  return 0; /*0x5fec3d*/
}
// 0x5FED00
int OverlayTypeClass::GetRadarColor(int a2, unsigned int a3)
{
  char **v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // cl
  int PixelData; // ecx
  int16_t v11; // [esp+4h] [ebp-4h]

  v4 = (char **)this->GetCategory(); /*0x5fed06*/
  if ( v4 || (v5 = *(&this->q0407)) != 0 && (v4 = (char **)(*(int (__thiscall **)(int))(*(unsigned int *)v5 + 156))(v5)) != 0 ) /*0x5fed28*/
  {
    v6 = *(&this->q0405); /*0x5fed2e*/
    if ( (v6 < 127 || v6 > 138) && (v6 < 147 || v6 > 158) ) /*0x5fed4f*/
    {
      PixelData = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5feda2*/
      *(unsigned short *)a2 = *(unsigned short *)PixelData; /*0x5fedad*/
      *(unsigned char *)(a2 + 2) = *(unsigned char *)(PixelData + 2); /*0x5fedb4*/
      return a2; /*0x5feda4*/
    }
    else
    {
      v7 = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5fed5d*/
      v11 = *(unsigned short *)v7; /*0x5fed67*/
      v8 = IDA_HIBYTE(*(unsigned short *)v7); /*0x5fed6f*/
      IDA_BYTE1(a3) = *(unsigned char *)(v7 + 2); /*0x5fed73*/
      IDA_LOBYTE(a3) = v11; /*0x5fed7b*/
      *(unsigned short *)a2 = a3; /*0x5fed86*/
      *(unsigned char *)(a2 + 2) = v8; /*0x5fed8a*/
      return a2; /*0x5fed77*/
    }
  }
  else
  {
    *(unsigned short *)a2 = 0; /*0x5fedd2*/
    *(unsigned char *)(a2 + 2) = 0; /*0x5fedd6*/
    return a2; /*0x5fedbb*/
  }
}
// 0x5FEF00
int OverlayTypeClass::GetTypeIdentifier()
{
  return 21; /*0x5fef05*/
}
// 0x5FEF10
int OverlayTypeClass::GetObjectSize()
{
  return 700; /*0x5fef15*/
}
// 0x5FEF20
int OverlayTypeClass::GetAuxField()
{
  return *(&this->q0405); /*0x5fef26*/
}
// 0x5FEF30
OverlayTypeClass * OverlayTypeClass::ddtor(char a2)
{
  int v3; // eax

  AbstractClass::AnnounceExpiredPointer(1); /*0x5fef51*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83D80 + 16))(&dword_A83D80, &this); /*0x5fef6a*/
  if ( v3 != -1 && v3 < g_ObjectTypeConfig && v3 < --g_ObjectTypeConfig ) /*0x5fef85*/
  {
    do /*0x5fef9d*/
    {
      ++v3; /*0x5fef8d*/
      *(unsigned int *)&g_BuildingTypeClass_Array->gap0[4 * v3 - 4] = *(unsigned int *)&g_BuildingTypeClass_Array->gap0[4 * v3]; /*0x5fef91*/
    }
    while ( v3 < g_ObjectTypeConfig ); /*0x5fef9d*/
  }
  ObjectTypeClass::Destruct(); /*0x5fefa1*/
  if ( (a2 & 1) != 0 ) /*0x5fefab*/
    RA2_OPDEL(); /*0x5fefae*/
  return this; /*0x5fefb8*/
}