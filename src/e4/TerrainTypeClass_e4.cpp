// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LoadingScreen_e4.hpp"

// 0x5447C0
namespace gamemd {
unsigned int * TerrainTypeClass::Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6)
{
  TerrainTypeClass * v7;
  TerrainTypeClass * v8;
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ObjectTypeClass::ConstructFull(aP4); /*0x5447ce*/
  *(&this->q0405) = a2; /*0x5447d9*/
  *(&this->q0406) = 0xFFFF; /*0x5447e4*/
  *(&this->q0407) = 0xFFFF; /*0x5447ea*/
  *(&this->q0408) = 0; /*0x5447f0*/
  *(&this->u32_440) = 0; /*0x5447f8*/
  *(&this->u32_441) = 0; /*0x5447fe*/
  this->WaterBound = 1; /*0x544804*/
  this->q2B1 = 0; /*0x54480b*/
  *(&this->q0409) = (void*)&DynamicVectorClass_unsigned_short___vftable; /*0x544811*/
  *(&this->u32_444) = 10; /*0x54481b*/
  *(&this->u32_443) = 0; /*0x544825*/
  *(&this->u32_449) = 0; /*0x544830*/
  *(&this->u32_446) = -1; /*0x544836*/
  *(&this->u32_447) = -1; /*0x54483c*/
  *(&this->u32_448) = -1; /*0x544842*/
  *(&this->u32_480) = 0; /*0x544848*/
  *(&this->u32_481) = -1; /*0x544852*/
  *(&this->u32_445) = 0; /*0x544868*/
  *(&this->u32_482) = 0; /*0x54486e*/
  *(&this->u32_483) = a3; /*0x544874*/
  this->q2E0 = 0; /*0x54487a*/
  this->u8_2E1 = 0; /*0x544880*/
  this->u8_2E2 = 1; /*0x544886*/
  this->u8_2E3 = 0; /*0x54488d*/
  *(&this->u32_485) = 0; /*0x544893*/
  *(&this->u32_486) = 0; /*0x544899*/
  *(&this->u32_487) = a4; /*0x54489f*/
  *(&this->u32_488) = 1; /*0x5448a5*/
  this->u8_2F4 = 0; /*0x5448af*/
  this->u32_305 = 1; /*0x5448b5*/
  this->u32_306 = 0; /*0x5448bc*/
  *(&this->u32_4C4) = 0; /*0x5448c2*/
  *(void **)this = (void*)&IsometricTileTypeClass_vftable; /*0x5448c8*/
  this->vtable2 = (void*)&IsometricTileTypeClass_vftable; /*0x5448cf*/
  this->vtable3 = (void*)&IsometricTileTypeClass_vftable; /*0x5448d6*/
  this->vtable4 = (void*)&IsometricTileTypeClass_vftable; /*0x5448dd*/
  if ( g_AnimManager < g_AnimTypePool /*0x544917*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v7 = g_AnimManager++; /*0x544924*/
    *((_DWORD *)g_AnimPoolCount + v7) = this; /*0x544933*/
  }
  if ( !a6 /*0x544970*/
    && (g_TechnoClassCount < dword_A8ED30
     || (byte_A8ED35 || !dword_A8ED30)
     && dword_A8ED3C > 0
     && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8ED28 + 8))(
          &dword_A8ED28,
          dword_A8ED30 + dword_A8ED3C,
          0)) )
  {
    v8 = g_TechnoClassCount++; /*0x54497d*/
    *((_DWORD *)g_FrameCounter + v8) = this; /*0x54498c*/
  }
  if ( aP4 ) /*0x544991*/
  {
    strncpy(Destination, aP4, 0x30u); /*0x5449a1*/
    v11 = 0; /*0x5449a9*/
  }
  else
  {
    Destination[0] = 0; /*0x544993*/
  }
  if ( Destination != (char *)(&this->vtable35) ) /*0x5449b6*/
  {
    qmemcpy(&this->Name, Destination, 0x30u); /*0x5449c1*/
    this->q094 = v11; /*0x5449c3*/
  }
  this->u8_2F5 = 0; /*0x5449c5*/
  this->q22F = 1; /*0x5449cb*/
  this->Selectable = 0; /*0x5449d2*/
  this->LegalTarget = 0; /*0x5449d8*/
  this->Insignificant = 1; /*0x5449de*/
  this->q233 = 1; /*0x5449e5*/
  this->q235 = 0; /*0x5449ec*/
  return this; /*0x5449c4*/
}
} // namespace gamemd
// 0x71DA80
TerrainTypeClass::TerrainTypeClass(ObjectClass * aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  void **v6; // edx

  ObjectTypeClass::ConstructFull(aP1); /*0x71da89*/
  *(&this->q0405) = -1; /*0x71da90*/
  *(&this->q0406) = 0; /*0x71da9a*/
  this->RadarColor = 0; /*0x71daa5*/
  this->q29D = 0; /*0x71daab*/
  this->q29E = 0; /*0x71dab1*/
  *(&this->u32_440) = 7; /*0x71dab7*/
  *(&this->u32_441) = 7; /*0x71dabd*/
  *(&this->q0408) = 0; /*0x71dac7*/
  *(&this->q0409) = 0; /*0x71dacd*/
  this->WaterBound = 0; /*0x71dad3*/
  this->q2B1 = 0; /*0x71dad9*/
  this->q2B2 = 0; /*0x71dadf*/
  this->q2B3 = 0; /*0x71dae5*/
  this->IsVeinhole = 0; /*0x71daeb*/
  *(&this->u32_444) = 0; /*0x71daf1*/
  *this = (void*)&TerrainTypeClass_vftable; /*0x71daf7*/
  this->vtable2 = (void*)&TerrainTypeClass_vftable; /*0x71dafd*/
  this->vtable3 = (void*)&TerrainTypeClass_vftable; /*0x71db03*/
  this->vtable4 = (void*)&TerrainTypeClass_vftable; /*0x71db0a*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x71db11*/
  this->Selectable = 0; /*0x71db18*/
  this->q234 = 1; /*0x71db1e*/
  this->q22F = 1; /*0x71db24*/
  this->LegalTarget = 0; /*0x71db2a*/
  this->Insignificant = 1; /*0x71db30*/
  v3 = g_RulesClassInitState; /*0x71db36*/
  if ( g_RulesClassInitState < dword_A8E320 /*0x71db74*/
    || (byte_A8E325 || !dword_A8E320)
    && dword_A8E32C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E318 + 8))(
               &dword_A8E318,
               dword_A8E320 + dword_A8E32C,
               0) == 0,
        v3 = g_RulesClassInitState,
        !v4) )
  {
    g_RulesClassInitState = v3 + 1; /*0x71db79*/
    *((_DWORD *)dword_A8E31C + v3) = this; /*0x71db83*/
    v3 = g_RulesClassInitState; /*0x71db86*/
  }
  v5 = 0; /*0x71db8b*/
  if ( v3 <= 0 ) /*0x71db8f*/
  {
  LABEL_11:
    v5 = -1; /*0x71dba3*/
  }
  else
  {
    v6 = (void **)dword_A8E31C; /*0x71db91*/
    while ( *v6 != this ) /*0x71db99*/
    {
      ++v5; /*0x71db9b*/
      ++v6; /*0x71db9c*/
      if ( v5 >= v3 ) /*0x71dba1*/
        goto LABEL_11; /*0x71dba1*/
    }
  }
  *(&this->q0405) = v5; /*0x71dba6*/
  *(&this->uniqueId0) = -1; /*0x71dbac*/
  *(&this->vtable49) = 6; /*0x71dbb6*/
  return this; /*0x71dbc2*/
}
// 0x71DEA0
int TerrainTypeClass::LoadFromINI(unsigned char *** aP1)
{
  char Bool_Overwrite; // al
  char v4; // al
  char v5; // cl
  char v6; // al
  int v7; // eax
  int v8; // ecx
  char **v9; // eax
  int PixelData; // eax
  int Coord; // eax
  char v12; // cl
  char v13; // al
  int Int_Overwrite; // eax
  double v15; // st7
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  char v20; // [esp+4h] [ebp-218h]
  int v21; // [esp+4h] [ebp-218h]
  _BYTE v22[4]; // [esp+18h] [ebp-204h] BYREF
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x71deb3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, aP1) ) /*0x71debb*/
    return 0; /*0x71e0b5*/
  if ( this->Strength == -1 ) /*0x71decf*/
    this->Strength = g_RulesClass_Instance->Normal[17]; /*0x71dedc*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(&this->q024, aIsveinhole, this->IsVeinhole); /*0x71def6*/
  this->IsVeinhole = Bool_Overwrite; /*0x71defd*/
  if ( Bool_Overwrite ) /*0x71df03*/
  {
    this->q234 = 0; /*0x71df05*/
    this->LegalTarget = 1; /*0x71df0c*/
  }
  v4 = INIClass::ReadBool_Overwrite(&this->q024, aWaterbound, this->WaterBound); /*0x71df22*/
  v5 = this->q2B1; /*0x71df27*/
  this->WaterBound = v4; /*0x71df2d*/
  v6 = INIClass::ReadBool_Overwrite(&this->q024, aSpawnstiberium, v5); /*0x71df3c*/
  v20 = this->q2B2; /*0x71df49*/
  this->q2B1 = v6; /*0x71df50*/
  this->q2B2 = INIClass::ReadBool_Overwrite(&this->q024, aIsflammable, v20); /*0x71df5b*/
  v7 = INIClass::LookupEnum(&this->ImageFile, g_INI_Key_Foundation, this->Foundation); /*0x71df79*/
  v8 = 5 * v7; /*0x71df7e*/
  this->Foundation = v7; /*0x71df81*/
  IDA_LOBYTE(v7) = this->q22C; /*0x71df87*/
  this->q2B8 = 8 * v8 + 11595200; /*0x71df96*/
  if ( !(_BYTE)v7 ) /*0x71df9c*/
  {
    _makepath(Buffer, 0, 0, (const char *)(&this->u32_C84), Ext); /*0x71dfad*/
    this->Image = SearchMIXFile(Buffer, 0); /*0x71dfc0*/
  }
  v9 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)&this->zero_3C6))(this); /*0x71dfca*/
  if ( v9 ) /*0x71dfd2*/
  {
    PixelData = MixFileClass::GetPixelData(v9, (int)v22, 0); /*0x71dfdd*/
    this->RadarColor = *(_WORD *)PixelData; /*0x71dfeb*/
    this->q29E = *(_BYTE *)(PixelData + 2); /*0x71dff5*/
  }
  Coord = INIClass::GetCoord( /*0x71e00c*/
            aP1,
            (int)v22,
            (unsigned __int8 *)(&this->vtable46),
            (unsigned __int8 *)aRadarcolor,
            (unsigned __int8 *)(&this->q1088));
  v12 = this->q2B3; /*0x71e014*/
  this->RadarColor = *(_WORD *)Coord; /*0x71e01a*/
  this->q29E = *(_BYTE *)(Coord + 2); /*0x71e02a*/
  v13 = INIClass::ReadBool_Overwrite(&this->q024, aIsanimated, v12); /*0x71e02d*/
  v21 = this->AnimationRate; /*0x71e03a*/
  this->q2B3 = v13; /*0x71e041*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(&this->q024, aAnimationrate, v21); /*0x71e047*/
  v15 = this->AnimationProbability; /*0x71e04c*/
  this->AnimationRate = Int_Overwrite; /*0x71e057*/
  INIClass::ReadDouble_Overwrite(&this->q024, (int)aAnimationproba, v15); /*0x71e066*/
  v16 = this->TemperateOccupationBits; /*0x71e06b*/
  this->AnimationProbability = v15; /*0x71e073*/
  v17 = INIClass::ReadInt_Overwrite(&this->q024, aTemperateoccup, v16); /*0x71e080*/
  v18 = this->SnowOccupationBits; /*0x71e085*/
  this->TemperateOccupationBits = v17; /*0x71e08b*/
  this->SnowOccupationBits = INIClass::ReadInt_Overwrite(&this->q024, aSnowoccupation, v18); /*0x71e0a0*/
  return 1; /*0x71e0a7*/
}
// 0x71E2A0
TerrainTypeClass * * TerrainTypeClass::FindOrCreate()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x71e2bc*/
    return 0; /*0x71e31f*/
  v2 = 0; /*0x71e2cd*/
  if ( g_RulesClassInitState <= 0 ) /*0x71e2d1*/
  {
  LABEL_6:
    if ( RA2_OPNEW(0x2BCu) ) /*0x71e2fb*/
      return TerrainTypeClass::TerrainTypeClass(Source); /*0x71e311*/
    return 0; /*0x71e305*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8E31C + v2) + 36), Source) ) /*0x71e2ea*/
  {
    if ( ++v2 >= g_RulesClassInitState ) /*0x71e2f4*/
      goto LABEL_6; /*0x71e2f4*/
  }
  return *((_DWORD *)dword_A8E31C + v2); /*0x71e30f*/
}
// 0x71E360
TerrainTypeClass * TerrainTypeClass::ddtor(AbstractClass *a2, char a3)
{
  void *v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  v3 = *(a3 + 41); /*0x71e364*/
  *a3 = (void*)&TerrainTypeClass_vftable; /*0x71e36a*/
  *(a3 + 1) = (void*)&TerrainTypeClass_vftable; /*0x71e372*/
  *(a3 + 2) = (void*)&TerrainTypeClass_vftable; /*0x71e379*/
  *(a3 + 3) = (void*)&TerrainTypeClass_vftable; /*0x71e380*/
  if ( v3 ) /*0x71e387*/
  {
    RA2_OPDEL(v3); /*0x71e38a*/
    *(a3 + 41) = 0; /*0x71e392*/
  }
  AbstractClass::AnnounceExpiredPointer(a3, 1); /*0x71e3a0*/
  v6 = a3; /*0x71e3b5*/
  v4 = (*(int (__thiscall **)(int *, void ***))(dword_A8E318 + 16))(&dword_A8E318, &v6); /*0x71e3b9*/
  if ( v4 != -1 && v4 < g_RulesClassInitState && v4 < --g_RulesClassInitState ) /*0x71e3d4*/
  {
    do /*0x71e3ec*/
    {
      ++v4; /*0x71e3dc*/
      *((_DWORD *)dword_A8E31C + v4 - 1) = *((_DWORD *)dword_A8E31C + v4); /*0x71e3e0*/
    }
    while ( v4 < g_RulesClassInitState ); /*0x71e3ec*/
  }
  ObjectTypeClass::Destruct((int)a3); /*0x71e3f0*/
  if ( (a3 & 1) != 0 ) /*0x71e3fa*/
    RA2_OPDEL(a3); /*0x71e3fd*/
  return a3; /*0x71e407*/
}
// 0x53FFA0
int TerrainTypeClass::GetTileData(AnimClass * aP1, void * a2, signed int * v10, unsigned int * a4, unsigned short * a5, unsigned int * a6)
{
  _DWORD *v7; // ecx
  int TileType; // eax
  int v9; // ebx
  signed int v10; // edx
  _DWORD *v11; // edx

  v7 = (_DWORD *)this->vtable2; /*0x53ffa0*/
  if ( v7[14] < aP1 ) /*0x53ffaa*/
    return 0; /*0x53ffaa*/
  TileType = Terrain::GetTileType(v7, aP1); /*0x53ffad*/
  if ( !TileType || (*(_BYTE *)TileType & 2) != 0 ) /*0x53ffb9*/
    return 0; /*0x540024*/
  v9 = *(_DWORD *)(TileType + 12); /*0x53ffbf*/
  v10 = *(_DWORD *)(TileType + 8) - 16; /*0x53ffc2*/
  if ( v10 > 0 ) /*0x53ffc7*/
    qmemcpy(a2, (const void *)(v9 + 16), v10); /*0x53ffda*/
  *v10 = v10; /*0x53ffea*/
  *a5 = *(_WORD *)(v9 + 14); /*0x53fff4*/
  v11 = *(_DWORD **)(TileType + 20); /*0x53fff7*/
  *a4 = *v11; /*0x540000*/
  a4[1] = v11[1]; /*0x540005*/
  a4[2] = v11[2]; /*0x54000b*/
  if ( a6 ) /*0x540014*/
    *a6 = *(_DWORD *)(v9 + 4); /*0x540019*/
  return 1; /*0x540021*/
}
// 0x71DDD0
bool TerrainTypeClass::GetHeight(TerrainClass * aP2, int a3)
{
  void **v4; // eax

  v4 = (void **)RA2_OPNEW(0xE0u); /*0x71ddd8*/
  return v4 && TerrainClass::Construct(v4, this, aP2); /*0x71ddf7*/
}
// 0x71DE10
TerrainClass * TerrainTypeClass::GetTileIndex(int a2)
{
  void **v3; // eax

  v3 = (void **)RA2_OPNEW(0xE0u); /*0x71de18*/
  if ( v3 ) /*0x71de22*/
    return TerrainClass::Construct(v3, this, &word_B0ED7C); /*0x71de2c*/
  else
    return 0; /*0x71de35*/
}
// 0x71E0D0
unsigned int * TerrainTypeClass::GetWidth(unsigned int * a1, int * a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x71e0d9*/
  v6 = a2[1]; /*0x71e0ea*/
  v7 = a2[2]; /*0x71e0f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x71e0f5*/
  v3 = v7; /*0x71e0fa*/
  if ( v7 < GroundHeight ) /*0x71e100*/
    v3 = Cell::GetGroundHeight(&v5); /*0x71e111*/
  *a1 = v5; /*0x71e11e*/
  a1[1] = v6; /*0x71e124*/
  a1[2] = v3; /*0x71e128*/
  return a1; /*0x71e12b*/
}
// 0x71E140
int TerrainTypeClass::PowerDrainUpdate(int * a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edx

  AbstractTypeClass::ProcessPower(a2); /*0x71e149*/
  Power::TimerProcess(this->ArrayIndex); /*0x71e157*/
  IDA_LOBYTE(v3) = this->WaterBound; /*0x71e15c*/
  Power::FlagProcess(a2, v3); /*0x71e165*/
  IDA_LOBYTE(v4) = this->q2B1; /*0x71e16a*/
  v5 = Power::FlagProcess(a2, v4); /*0x71e173*/
  IDA_LOBYTE(v5) = this->q2B2; /*0x71e178*/
  Power::FlagProcess(a2, v5); /*0x71e181*/
  Power::TimerProcess(this->Foundation); /*0x71e18f*/
  IDA_LOBYTE(v6) = this->q2B3; /*0x71e194*/
  Power::FlagProcess(a2, v6); /*0x71e19d*/
  Power::TimerProcess(this->AnimationRate); /*0x71e1ab*/
  return Checksummer::Add_float((unsigned int *)a2, this->AnimationProbability); /*0x71e1be*/
}
// 0x71E1D0
int TerrainTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((int)aP0, aP1); /*0x71e1db*/
  if ( result >= 0 ) /*0x71e1e2*/
  {
    if ( aP0 ) /*0x71e1e6*/
    {
      ObjectTypeClass::Construct(aP0, (int)&aP1); /*0x71e1ef*/
      *(_DWORD *)aP0 = (void*)&TerrainTypeClass_vftable; /*0x71e1f4*/
      *((_DWORD *)aP0 + 1) = (void*)&TerrainTypeClass_vftable; /*0x71e1fa*/
      *((_DWORD *)aP0 + 2) = (void*)&TerrainTypeClass_vftable; /*0x71e201*/
      *((_DWORD *)aP0 + 3) = (void*)&TerrainTypeClass_vftable; /*0x71e208*/
    }
    VoxelAnimType::LoadAnim(aP0); /*0x71e211*/
    ObjectTypeClass::Load2DArt(aP0); /*0x71e218*/
    *((_DWORD *)aP0 + 174) = 40 * *((_DWORD *)aP0 + 166) + 11595200; /*0x71e22d*/
    return 0; /*0x71e233*/
  }
  return result; /*0x71e235*/
}
// 0x71E240
int TerrainTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x71e24f*/
  if ( result >= 0 ) /*0x71e256*/
    return 0; /*0x71e258*/
  return result; /*0x71e25a*/
}
// 0x71E260
int TerrainTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x71e266*/
    return -2147467261; /*0x71e268*/
  *a2 = 1525862011; /*0x71e276*/
  a2[1] = 298976820; /*0x71e27e*/
  a2[2] = 1610654892; /*0x71e287*/
  a2[3] = -1252326136; /*0x71e290*/
  return 0; /*0x71e26d*/
}
// 0x71E330
int TerrainTypeClass::GetTypeIdentifier()
{
  return 37; /*0x71e335*/
}
// 0x71E340
int TerrainTypeClass::GetObjectSize()
{
  return 700; /*0x71e345*/
}
// 0x71E350
int TerrainTypeClass::GetAuxField()
{
  return *(&this->q0405); /*0x71e356*/
}