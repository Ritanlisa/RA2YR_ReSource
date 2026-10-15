// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/INIClass_e4.hpp"
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
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ToolTipManager_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/Tiberium_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "classes/AbstractTypeClass_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/AircraftClass_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/AircraftTypeClass_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/Checksummer_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/Power_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/TerrainClass_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/Terrain_e4.hpp"  // G42.57w9 method-carrier supply
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char unk_7E95EC; // data: 0x7e95ec truth(IDA G42.57w9)


// 0x5447C0
namespace gamemd {  // G42.18 ns repair
unsigned int * TerrainTypeClass::Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6, void *a6_2, void *a7, void *a8, void *a9)
{

  int v7; // eax
  int v8; // eax
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ((int *)aP4)->ConstructFull(a6_2); /*0x5447ce*/
  aP4->ArrayIndex = aP4; /*0x5447d9*/
  aP4->Foundation = 0xFFFF; /*0x5447e4*/
  *(unsigned int *)aP4->RadarColor = 0xFFFF; /*0x5447ea*/
  aP4->AnimationRate = 0; /*0x5447f0*/
  aP4->TemperateOccupationBits = 0; /*0x5447f8*/
  aP4->SnowOccupationBits = 0; /*0x5447fe*/
  aP4->WaterBound = 1; /*0x544804*/
  aP4->SpawnsTiberium = 0; /*0x54480b*/
  LODWORD(aP4->AnimationProbability) = &vt_DynamicVectorClass; /*0x544811*/
  aP4->FoundationData = (CellStruct *)10; /*0x54481b*/
  *&aP4->q2B4 = 0; /*0x544825*/
  aP4->u32_2CC = 0; /*0x544830*/
  aP4->u32_2C0 = -1; /*0x544836*/
  aP4->u32_2C4 = -1; /*0x54483c*/
  aP4->u32_2C8 = -1; /*0x544842*/
  aP4->u32_2D0 = 0; /*0x544848*/
  aP4->u32_2D4 = -1; /*0x544852*/
  aP4->u32_2BC = 0; /*0x544868*/
  aP4->u32_2D8 = 0; /*0x54486e*/
  aP4->u32_2DC = aP4; /*0x544874*/
  aP4->u8_2E0 = 0; /*0x54487a*/
  aP4->u8_2E1 = 0; /*0x544880*/
  aP4->u8_2E2 = 1; /*0x544886*/
  aP4->u8_2E3 = 0; /*0x54488d*/
  aP4->q2E4 = 0; /*0x544893*/
  aP4->q2E8 = 0; /*0x544899*/
  aP4->q2EC = aP4; /*0x54489f*/
  aP4->u32_2F0 = 1; /*0x5448a5*/
  aP4->u32_2F4 = 0; /*0x5448af*/
  aP4->q305 = 1; /*0x5448b5*/
  aP4->q306 = 0; /*0x5448bc*/
  aP4->q0308 = 0; /*0x5448c2*/
  aP4->ObjectTypeClass = &vt_IsometricTileTypeClass; /*0x5448c8*/
  /* X11: vtable install elided (implicit via IsometricTileTypeClass virtuals 0x5448cf) */
  aP4->q008 = (int)(&vt_IsometricTileTypeClass); /*0x5448d6*/
  /* X11: vtable install elided (implicit via IsometricTileTypeClass virtuals 0x5448dd) */
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x544917*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x544924*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = aP4; /*0x544933*/
  }
  if ( !a6_2 /*0x544970*/
    && (*(int *)&g_ObjectClass_Capacity < *(int *)&DataGlobal_A8EC4C
     || (DataGlobal_A8EB00[565] || !*(unsigned int *)&DataGlobal_A8EC4C)
     && *(int *)&DataGlobal_A8EC58 > 0
     && (*(unsigned __int8 (**)(unsigned char *, int, unsigned int))(*(unsigned int *)&g_GameObjectManager + 8))(
          &g_GameObjectManager,
          *(unsigned int *)&DataGlobal_A8EC4C + *(unsigned int *)&DataGlobal_A8EC58,
          0)) )
  {
    v8 = (*(unsigned int *)&g_ObjectClass_Capacity)++; /*0x54497d*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_A8EC48 + 4 * v8) = (unsigned int)(aP4); /*0x54498c*/
  }
  if ( a6_2 ) /*0x544991*/
  {
    strncpy(Destination, a6_2, 0x30u); /*0x5449a1*/
    v11 = 0; /*0x5449a9*/
  }
  else
  {
    Destination[0] = 0; /*0x544993*/
  }
  if ( Destination != aP4->? ) /*0x5449b6*/
  {
    memcpy(aP4->?, Destination, 0x30u); /*0x5449c1*/
    aP4->?[48] = v11; /*0x5449c3*/
  }
  aP4->q2F5 = 0; /*0x5449c5*/
  aP4->? = 1; /*0x5449cb*/
  aP4->u32_230 = 0; /*0x5449d2*/
  aP4->u32_231 = 0; /*0x5449d8*/
  aP4->? = 1; /*0x5449de*/
  aP4->? = 1; /*0x5449e5*/
  aP4->? = 0; /*0x5449ec*/
  return &aP4->ObjectTypeClass; /*0x5449c4*/

}
} // namespace gamemd
// 0x71DA80
namespace gamemd {  // G42.18c ns repair
TerrainTypeClass::TerrainTypeClass(char *Source, int aP1, int aP3, int a2, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  TerrainTypeClass **v6; // edx

  ((int *)aP1)->ConstructFull(aP1); /*0x71da89*/
  aP1->ArrayIndex = -1; /*0x71da90*/
  aP1->Foundation = 0; /*0x71da9a*/
  aP1->RadarColor[0] = 0; /*0x71daa5*/
  aP1->RadarColor[1] = 0; /*0x71daab*/
  aP1->RadarColor[2] = 0; /*0x71dab1*/
  aP1->TemperateOccupationBits = 7; /*0x71dab7*/
  aP1->SnowOccupationBits = 7; /*0x71dabd*/
  aP1->AnimationRate = 0; /*0x71dac7*/
  aP1->AnimationProbability = 0.0; /*0x71dacd*/
  aP1->WaterBound = 0; /*0x71dad3*/
  aP1->SpawnsTiberium = 0; /*0x71dad9*/
  aP1->IsFlammable = 0; /*0x71dadf*/
  aP1->IsAnimated = 0; /*0x71dae5*/
  aP1->IsVeinhole = 0; /*0x71daeb*/
  aP1->FoundationData = 0; /*0x71daf1*/
  aP1->ObjectTypeClass = &vt_TerrainTypeClass; /*0x71daf7*/
  aP1->? = &vt_TerrainTypeClass; /*0x71dafd*/
  aP1->? = &vt_TerrainTypeClass; /*0x71db03*/
  aP1->? = &vt_TerrainTypeClass; /*0x71db0a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&aP1->?); /*0x71db11*/
  aP1->? = 0; /*0x71db18*/
  aP1->? = 1; /*0x71db1e*/
  aP1->? = 1; /*0x71db24*/
  aP1->? = 0; /*0x71db2a*/
  aP1->? = 1; /*0x71db30*/
  v3 = dword_A8E328; /*0x71db36*/
  if ( dword_A8E328 < dword_A8E320 /*0x71db74*/
    || (byte_A8E325 || !dword_A8E320)
    && dword_A8E32C > 0
    && (v4 = (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A8E318 + 8))(
               &dword_A8E318,
               dword_A8E320 + dword_A8E32C,
               0) == 0,
        v3 = dword_A8E328,
        !v4) )
  {
    dword_A8E328 = v3 + 1; /*0x71db79*/
    *((unsigned int *)dword_A8E31C + v3) = aP1; /*0x71db83*/
    v3 = dword_A8E328; /*0x71db86*/
  }
  v5 = 0; /*0x71db8b*/
  if ( v3 <= 0 ) /*0x71db8f*/
  {
LABEL_11:
    v5 = -1; /*0x71dba3*/
  }
  else
  {
    v6 = (TerrainTypeClass **)dword_A8E31C; /*0x71db91*/
    while ( *v6 != aP1 ) /*0x71db99*/
    {
      ++v5; /*0x71db9b*/
      ++v6; /*0x71db9c*/
      if ( v5 >= v3 ) /*0x71dba1*/
        goto LABEL_11; /*0x71dba1*/
    }
  }
  aP1->ArrayIndex = v5; /*0x71dba6*/
  aP1->? = -1; /*0x71dbac*/
  aP1->?[0] = 6; /*0x71dbb6*/
  return &aP1->ObjectTypeClass; /*0x71dbc2*/

}
}  // G42.18c ns repair
// 0x71DEA0
namespace gamemd {  // G42.18c ns repair
int TerrainTypeClass::LoadFromINI(uint8_t ***a2, int aP1, int aP3, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0, void * aAnimationproba, void * aAnimationrate, void * aIsanimated, void * aIsflammable, void * aRadarcolor, void * aSnowoccupation, void * aSpawnstiberium, void * aTemperateoccup, void * aWaterbound)
{

  double v2; // st7
  int result; // eax
  char Bool_Overwrite; // al
  char v6; // al
  char SpawnsTiberium; // cl
  char v8; // al
  int v9; // eax
  int v10; // ecx
  MixFileClass *v11; // eax
  int PixelData; // eax
  int Coord; // eax
  char IsAnimated; // cl
  char v15; // al
  int Int_Overwrite; // eax
  double AnimationProbability; // st6
  int TemperateOccupationBits; // eax
  int v19; // eax
  int SnowOccupationBits; // ecx
  char IsFlammable; // [esp+4h] [ebp-218h]
  int AnimationRate; // [esp+4h] [ebp-218h]
  int v23; // [esp+18h] [ebp-204h] BYREF
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x71deb3*/
  if ( ObjectTypeClass::LoadFromINI((ObjectTypeClass *)aP1, aP1) ) /*0x71debb*/
  {
    if ( aP1->? == -1 ) /*0x71decf*/
      aP1->? = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4420); /*0x71dedc*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)aP1->?, aIsveinhole, aP1->IsVeinhole); /*0x71def6*/
    aP1->IsVeinhole = Bool_Overwrite; /*0x71defd*/
    if ( Bool_Overwrite ) /*0x71df03*/
    {
      aP1->? = 0; /*0x71df05*/
      aP1->? = 1; /*0x71df0c*/
    }
    v6 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)aP1->?, aWaterbound, aP1->WaterBound); /*0x71df22*/
    SpawnsTiberium = aP1->SpawnsTiberium; /*0x71df27*/
    aP1->WaterBound = v6; /*0x71df2d*/
    v8 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)aP1->?, aSpawnstiberium, SpawnsTiberium); /*0x71df3c*/
    IsFlammable = aP1->IsFlammable; /*0x71df49*/
    aP1->SpawnsTiberium = v8; /*0x71df50*/
    aP1->IsFlammable = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)aP1->?, aIsflammable, IsFlammable); /*0x71df5b*/
    v9 = INIClass::LookupEnum( /*0x71df79*/
           (INIClass *)&DataGlobal_887180,
           (unsigned __int8 *)aP1->?,
           g_INI_Key_Foundation,
           aP1->Foundation);
    v10 = 5 * v9; /*0x71df7e*/
    aP1->Foundation = v9; /*0x71df81*/
    LOBYTE(v9) = aP1->?; /*0x71df87*/
    aP1->FoundationData = (CellStruct *)(8 * v10 + 11595200); /*0x71df96*/
    if ( !(unsigned char)v9 ) /*0x71df9c*/
    {
      _makepath(Buffer, 0, 0, aP1->?, Ext); /*0x71dfad*/
      aP1->? = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x71dfc0*/
    }
    v11 = (MixFileClass *)(*((int (**)(TerrainTypeClass *))aP1->ObjectTypeClass + 39))(aP1); /*0x71dfca*/
    if ( v11 ) /*0x71dfd2*/
    {
      PixelData = MixFileClass::GetPixelData(v11, (int)&v23, 0); /*0x71dfdd*/
      *(unsigned short *)aP1->RadarColor = *(unsigned short *)PixelData; /*0x71dfeb*/
      aP1->RadarColor[2] = *(unsigned char *)(PixelData + 2); /*0x71dff5*/
    }
    Coord = INIClass::GetCoord( /*0x71e00c*/
              (INIClass *)aP1,
              (int)&v23,
              (unsigned __int8 *)aP1->?,
              aRadarcolor,
              (unsigned __int8 *)aP1->RadarColor);
    IsAnimated = aP1->IsAnimated; /*0x71e014*/
    *(unsigned short *)aP1->RadarColor = *(unsigned short *)Coord; /*0x71e01a*/
    aP1->RadarColor[2] = *(unsigned char *)(Coord + 2); /*0x71e02a*/
    v15 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)aP1->?, aIsanimated, IsAnimated); /*0x71e02d*/
    AnimationRate = aP1->AnimationRate; /*0x71e03a*/
    aP1->IsAnimated = v15; /*0x71e041*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)aP1, (unsigned __int8 *)aP1->?, aAnimationrate, AnimationRate); /*0x71e047*/
    AnimationProbability = aP1->AnimationProbability; /*0x71e04c*/
    aP1->AnimationRate = Int_Overwrite; /*0x71e057*/
    INIClass::ReadDouble_Overwrite((double *)aP1, (unsigned __int8 *)aP1->?, aAnimationproba, AnimationProbability); /*0x71e066*/
    TemperateOccupationBits = aP1->TemperateOccupationBits; /*0x71e06b*/
    aP1->AnimationProbability = v2; /*0x71e073*/
    v19 = INIClass::ReadInt_Overwrite((bool *)aP1, (unsigned __int8 *)aP1->?, aTemperateoccup, TemperateOccupationBits); /*0x71e080*/
    SnowOccupationBits = aP1->SnowOccupationBits; /*0x71e085*/
    aP1->TemperateOccupationBits = v19; /*0x71e08b*/
    result = INIClass::ReadInt_Overwrite((bool *)aP1, (unsigned __int8 *)aP1->?, aSnowoccupation, SnowOccupationBits); /*0x71e09a*/
    aP1->SnowOccupationBits = result; /*0x71e0a0*/
    LOBYTE(result) = 1; /*0x71e0a8*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x71e0b5*/
  }
  return result; /*0x71e0a7*/

}
}
// 0x71E2A0
TerrainTypeClass * * TerrainTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  TerrainTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x71e2bc*/
    return 0; /*0x71e31f*/
  v2 = 0; /*0x71e2cd*/
  if ( dword_A8E328 <= 0 ) /*0x71e2d1*/
  {
  LABEL_6:
    v3 = (TerrainTypeClass *)operator new(0x2BCu); /*0x71e2f6*/
    if ( v3 ) /*0x71e305*/
      return TerrainTypeClass::TerrainTypeClass(v3, Source); /*0x71e311*/
    return 0; /*0x71e305*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A8E31C + v2) + 36), Source) ) /*0x71e2ea*/
  {
    if ( ++v2 >= dword_A8E328 ) /*0x71e2f4*/
      goto LABEL_6; /*0x71e2f4*/
  }
  return (unsigned int *)*((unsigned int *)dword_A8E31C + v2); /*0x71e30f*/
}
// 0x71E360
TerrainTypeClass * TerrainTypeClass::ddtor(void * a2, char a3)
{
  SHPStruct *Image; // eax
  int v4; // eax
  TerrainTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Image = a3->Image; /*0x71e364*/
  /* X11: vtable install elided (implicit via TerrainTypeClass virtuals 0x71e36a) */
  /* X11: vtable install elided (implicit via TerrainTypeClass virtuals 0x71e372) */
  /* X11: vtable install elided (implicit via TerrainTypeClass virtuals 0x71e379) */
  /* X11: vtable install elided (implicit via TerrainTypeClass virtuals 0x71e380) */
  if ( Image ) /*0x71e387*/
  {
    operator delete((void *)(Image)); /*0x71e38a*/
    a3->Image = 0; /*0x71e392*/
  }
  AbstractClass::AnnounceExpiredPointer(&a3->vfptr, 1); /*0x71e3a0*/
  v6 = a3; /*0x71e3b5*/
  v4 = (*(int (**)(unsigned int *, TerrainTypeClass **))(dword_A8E318 + 16))(&dword_A8E318, &v6); /*0x71e3b9*/
  if ( v4 != -1 && v4 < dword_A8E328 && v4 < --dword_A8E328 ) /*0x71e3d4*/
  {
    do /*0x71e3ec*/
    {
      ++v4; /*0x71e3dc*/
      *((unsigned int *)dword_A8E31C + v4 - 1) = *((unsigned int *)dword_A8E31C + v4); /*0x71e3e0*/
    }
    while ( v4 < dword_A8E328 ); /*0x71e3ec*/
  }
  ObjectTypeClass::Destruct((int)a3); /*0x71e3f0*/
  if ( (a3 & 1) != 0 ) /*0x71e3fa*/
    operator delete((void *)(a3)); /*0x71e3fd*/
  return &a3->vfptr; /*0x71e407*/
}
// 0x53FFA0
int TerrainTypeClass::GetTileData(int a2, void * a3, signed int * v10, unsigned int * a5, unsigned short * a6, unsigned int * a7)
{
  unsigned int *v7; // ecx
  int TileType; // eax
  int v9; // ebx
  int v10; // edx
  unsigned int *v11; // edx

  v7 = (unsigned int *)this->vtable2; /*0x53ffa0*/
  if ( v7->q038 < a2 ) /*0x53ffaa*/
    return 0; /*0x53ffaa*/
  TileType = ((Terrain *)(v7))->GetTileType(a2); /*0x53ffad*/
  if ( !TileType || (*(unsigned char *)TileType & 2) != 0 ) /*0x53ffb9*/
    return 0; /*0x540024*/
  v9 = *(unsigned int *)(TileType + 12); /*0x53ffbf*/
  v10 = *(unsigned int *)(TileType + 8) - 16; /*0x53ffc2*/
  if ( v10 > 0 ) /*0x53ffc7*/
    memcpy(a3, (const void *)(v9 + 16), v10); /*0x53ffda*/
  *v10 = v10; /*0x53ffea*/
  *a6 = *(unsigned short *)(v9 + 14); /*0x53fff4*/
  v11 = *(unsigned int **)(TileType + 20); /*0x53fff7*/
  *a5 = *v11; /*0x540000*/
  a5[1] = v11[1]; /*0x540005*/
  a5[2] = v11[2]; /*0x54000b*/
  if ( a7 ) /*0x540014*/
    *a7 = *(unsigned int *)(v9 + 4); /*0x540019*/
  return 1; /*0x540021*/
}
// 0x71DDD0
bool   TerrainTypeClass::GetHeight(int a3, void *a2)
{
  TerrainClass *v4; // eax

  v4 = (TerrainClass *)operator new(0xE0u); /*0x71ddd8*/
  return v4 && TerrainClass::Construct(v4, this, this); /*0x71ddf7*/
}
// 0x71DE10
TerrainClass * TerrainTypeClass::GetTileIndex(int a2, void *a2_2, void *a3, void *a4)
{
  TerrainClass *v3; // eax

  v3 = (TerrainClass *)operator new(0xE0u); /*0x71de18*/
  if ( v3 ) /*0x71de22*/
    return TerrainClass::Construct(v3, this, (int16_t *)&g_BuildingLoadQueue_Array.ImpactWaterSound); /*0x71de2c*/
  else
    return 0; /*0x71de35*/
}
// 0x71E0D0
unsigned int *   TerrainTypeClass::GetWidth(int * a2, void *a2_1)
{
  int GroundHeight; // eax
  void *v3; // ecx
  void *v5; // [esp+0h] [ebp-Ch] BYREF
  void *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = (void *)*a2; /*0x71e0d9*/
  v6 = (void *)a2[1]; /*0x71e0ea*/
  v7 = a2[2]; /*0x71e0f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x71e0f5*/
  v3 = (void *)v7; /*0x71e0fa*/
  if ( v7 < GroundHeight ) /*0x71e100*/
    v3 = (void *)Cell::GetGroundHeight(&v5); /*0x71e111*/
  this->vfptr = v5; /*0x71e11e*/
  this->vfptr1 = v6; /*0x71e124*/
  this->vfptr2 = v3; /*0x71e128*/
  return &this->vfptr; /*0x71e12b*/
}
// 0x71E140
int TerrainTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x71e149*/
  Power::TimerProcess(this->ArrayIndex); /*0x71e157*/
  LOBYTE(v3) = this->WaterBound; /*0x71e15c*/
  Power::FlagProcess((Power *)a2, v3); /*0x71e165*/
  LOBYTE(v4) = this->SpawnsTiberium; /*0x71e16a*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x71e173*/
  LOBYTE(v5) = this->IsFlammable; /*0x71e178*/
  Power::FlagProcess((Power *)a2, v5); /*0x71e181*/
  Power::TimerProcess(this->Foundation); /*0x71e18f*/
  LOBYTE(v6) = this->IsAnimated; /*0x71e194*/
  Power::FlagProcess((Power *)a2, v6); /*0x71e19d*/
  Power::TimerProcess(this->AnimationRate); /*0x71e1ab*/
  return Checksummer::Add_float((Checksummer *)a2, LODWORD(this->AnimationProbability)); /*0x71e1be*/

}
// 0x71E1D0
int  TerrainTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)aP0, aP1); /*0x71e1db*/
  if ( result >= 0 ) /*0x71e1e2*/
  {
    if ( aP0 ) /*0x71e1e6*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)aP0, (int)&aP1); /*0x71e1ef*/
      /* X11: vtable install elided (implicit via TerrainTypeClass virtuals 0x71e1f4) */
      /* X11: vtable install elided (implicit via TerrainTypeClass virtuals 0x71e1fa) */
      /* X11: vtable install elided (implicit via TerrainTypeClass virtuals 0x71e201) */
      /* X11: vtable install elided (implicit via TerrainTypeClass virtuals 0x71e208) */
    }
    VoxelAnimType::LoadAnim((char *)aP0); /*0x71e211*/
    ObjectTypeClass::Load2DArt((char *)aP0); /*0x71e218*/
    aP0->FoundationData = (CellStruct *)(40 * aP0->Foundation + 11595200); /*0x71e22d*/
    return 0; /*0x71e233*/
  }
  return result; /*0x71e235*/
}
// 0x71E240
int TerrainTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x71e24f*/
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
  a2[3] = unk_7E95EC; /*0x71e290*/
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
  return this->ArrayIndex; /*0x71e356*/
}