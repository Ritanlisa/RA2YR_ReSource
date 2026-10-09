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
extern unsigned int unk_7E95EC;  // data: 0x7e95ec truth(IDA G42.57w9)


// 0x5447C0
namespace gamemd {
unsigned int * TerrainTypeClass::Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6, void *a6_2)
{
  int v7; // eax
  int v8; // eax
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ObjectTypeClass::ConstructFull((int *)aP4, a6_2); /*0x5447ce*/
  aP4->ArrayIndex = aP4; /*0x5447d9*/
  aP4->Foundation = 0xFFFF; /*0x5447e4*/
  *(_DWORD *)aP4->RadarColor = 0xFFFF; /*0x5447ea*/
  aP4->AnimationRate = 0; /*0x5447f0*/
  aP4->TemperateOccupationBits = 0; /*0x5447f8*/
  aP4->SnowOccupationBits = 0; /*0x5447fe*/
  aP4->WaterBound = 1; /*0x544804*/
  aP4->SpawnsTiberium = 0; /*0x54480b*/
  IDA_LODWORD(aP4->AnimationProbability) = &(void*)(void*)&DynamicVectorClass_unsigned_short___vftable; /*0x544811*/
  aP4->FoundationData = (CellStruct *)10; /*0x54481b*/
  *(_DWORD *)&aP4->IsVeinhole = 0; /*0x544825*/
  *((_DWORD *)aP4 + 179) = 0; /*0x544830*/
  *((_DWORD *)aP4 + 176) = -1; /*0x544836*/
  *((_DWORD *)aP4 + 177) = -1; /*0x54483c*/
  *((_DWORD *)aP4 + 178) = -1; /*0x544842*/
  *((_DWORD *)aP4 + 180) = 0; /*0x544848*/
  *((_DWORD *)aP4 + 181) = -1; /*0x544852*/
  *((_DWORD *)aP4 + 175) = 0; /*0x544868*/
  *((_DWORD *)aP4 + 182) = 0; /*0x54486e*/
  *((_DWORD *)aP4 + 183) = aP4; /*0x544874*/
  *((_BYTE *)aP4 + 736) = 0; /*0x54487a*/
  *((_BYTE *)aP4 + 737) = 0; /*0x544880*/
  *((_BYTE *)aP4 + 738) = 1; /*0x544886*/
  *((_BYTE *)aP4 + 739) = 0; /*0x54488d*/
  *((_DWORD *)aP4 + 185) = 0; /*0x544893*/
  *((_DWORD *)aP4 + 186) = 0; /*0x544899*/
  *((_DWORD *)aP4 + 187) = aP4; /*0x54489f*/
  *((_DWORD *)aP4 + 188) = 1; /*0x5448a5*/
  *((_BYTE *)aP4 + 756) = 0; /*0x5448af*/
  *((_BYTE *)aP4 + 773) = 1; /*0x5448b5*/
  *((_BYTE *)aP4 + 774) = 0; /*0x5448bc*/
  *((_DWORD *)aP4 + 194) = 0; /*0x5448c2*/
  aP4->vfptr = &(void*)(void*)&IsometricTileTypeClass_vftable; /*0x5448c8*/
  aP4->vfptr1 = &(void*)(void*)&IsometricTileTypeClass_vftable; /*0x5448cf*/
  aP4->vfptr2 = &(void*)(void*)&IsometricTileTypeClass_vftable; /*0x5448d6*/
  aP4->vfptr3 = &(void*)(void*)&IsometricTileTypeClass_vftable; /*0x5448dd*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x544917*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x544924*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = aP4; /*0x544933*/
  }
  if ( !a6_2 /*0x544970*/
    && (*(int *)&stru_A8EB00.?[340] < *(int *)&stru_A8EB00.?[332]
     || (stru_A8EB00.?[337] || !*(_DWORD *)&stru_A8EB00.?[332])
     && *(int *)&stru_A8EB00.?[344] > 0
     && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[324] + 8))(
          &stru_A8EB00.?[324],
          *(_DWORD *)&stru_A8EB00.?[332] + *(_DWORD *)&stru_A8EB00.?[344],
          0)) )
  {
    v8 = (*(_DWORD *)&stru_A8EB00.?[340])++; /*0x54497d*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v8) = aP4; /*0x54498c*/
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
  if ( Destination != aP4->Name ) /*0x5449b6*/
  {
    qmemcpy(aP4->Name, Destination, 0x30u); /*0x5449c1*/
    aP4->Name[48] = v11; /*0x5449c3*/
  }
  *((_BYTE *)aP4 + 757) = 0; /*0x5449c5*/
  aP4->RadarInvisible = 1; /*0x5449cb*/
  aP4->Selectable = 0; /*0x5449d2*/
  aP4->LegalTarget = 0; /*0x5449d8*/
  aP4->Insignificant = 1; /*0x5449de*/
  aP4->Immune = 1; /*0x5449e5*/
  aP4->AllowCellContent = 0; /*0x5449ec*/
  return &aP4->vfptr; /*0x5449c4*/
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

  ObjectTypeClass::ConstructFull(Source); /*0x71da89*/
  this->ArrayIndex = -1; /*0x71da90*/
  this->Foundation = 0; /*0x71da9a*/
  this->RadarColor[0] = 0; /*0x71daa5*/
  this->RadarColor[1] = 0; /*0x71daab*/
  this->RadarColor[2] = 0; /*0x71dab1*/
  this->TemperateOccupationBits = 7; /*0x71dab7*/
  this->SnowOccupationBits = 7; /*0x71dabd*/
  this->AnimationRate = 0; /*0x71dac7*/
  this->AnimationProbability = 0.0; /*0x71dacd*/
  this->WaterBound = 0; /*0x71dad3*/
  this->SpawnsTiberium = 0; /*0x71dad9*/
  this->IsFlammable = 0; /*0x71dadf*/
  this->IsAnimated = 0; /*0x71dae5*/
  this->IsVeinhole = 0; /*0x71daeb*/
  this->FoundationData = 0; /*0x71daf1*/
  this->vfptr = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71daf7*/
  this->vfptr1 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71dafd*/
  this->vfptr2 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71db03*/
  this->vfptr3 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71db0a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vfptr1); /*0x71db11*/
  this->Selectable = 0; /*0x71db18*/
  this->IsLogic = 1; /*0x71db1e*/
  this->RadarInvisible = 1; /*0x71db24*/
  this->LegalTarget = 0; /*0x71db2a*/
  this->Insignificant = 1; /*0x71db30*/
  v3 = dword_A8E328; /*0x71db36*/
  if ( dword_A8E328 < dword_A8E320 /*0x71db74*/
    || (byte_A8E325 || !dword_A8E320)
    && dword_A8E32C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E318 + 8))(
               &dword_A8E318,
               dword_A8E320 + dword_A8E32C,
               0) == 0,
        v3 = dword_A8E328,
        !v4) )
  {
    dword_A8E328 = v3 + 1; /*0x71db79*/
    *((_DWORD *)dword_A8E31C + v3) = this; /*0x71db83*/
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
    while ( *v6 != this ) /*0x71db99*/
    {
      ++v5; /*0x71db9b*/
      ++v6; /*0x71db9c*/
      if ( v5 >= v3 ) /*0x71dba1*/
        goto LABEL_11; /*0x71dba1*/
    }
  }
  this->ArrayIndex = v5; /*0x71dba6*/
  this->Strength = -1; /*0x71dbac*/
  this->Armor[0] = 6; /*0x71dbb6*/
  return &this->vfptr; /*0x71dbc2*/
}
}  // G42.18c ns repair
// 0x71DEA0
namespace gamemd {  // G42.18c ns repair
int TerrainTypeClass::LoadFromINI(unsigned __int8 ***a2, int aP1, int aP3, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0, void * aAnimationproba, void * aAnimationrate, void * aIsanimated, void * aIsflammable, void * aRadarcolor, void * aSnowoccupation, void * aSpawnstiberium, void * aTemperateoccup, void * aWaterbound)
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

  INIClass::ResetSection((INIClass *)a2); /*0x71deb3*/
  if ( ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x71debb*/
  {
    if ( this->Strength == -1 ) /*0x71decf*/
      this->Strength = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4420); /*0x71dedc*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x71def6*/
                       (int *)a2,
                       (unsigned __int8 *)this->__pad_24,
                       aIsveinhole,
                       this->IsVeinhole);
    this->IsVeinhole = Bool_Overwrite; /*0x71defd*/
    if ( Bool_Overwrite ) /*0x71df03*/
    {
      this->IsLogic = 0; /*0x71df05*/
      this->LegalTarget = 1; /*0x71df0c*/
    }
    v6 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aWaterbound, this->WaterBound); /*0x71df22*/
    SpawnsTiberium = this->SpawnsTiberium; /*0x71df27*/
    this->WaterBound = v6; /*0x71df2d*/
    v8 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aSpawnstiberium, SpawnsTiberium); /*0x71df3c*/
    IsFlammable = this->IsFlammable; /*0x71df49*/
    this->SpawnsTiberium = v8; /*0x71df50*/
    this->IsFlammable = INIClass::ReadBool_Overwrite( /*0x71df5b*/
                          (int *)a2,
                          (unsigned __int8 *)this->__pad_24,
                          aIsflammable,
                          IsFlammable);
    v9 = INIClass::LookupEnum( /*0x71df79*/
           (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
           (unsigned __int8 *)this->ImageFile,
           g_INI_Key_Foundation,
           this->Foundation);
    v10 = 5 * v9; /*0x71df7e*/
    this->Foundation = v9; /*0x71df81*/
    IDA_LOBYTE(v9) = this->Theater; /*0x71df87*/
    this->FoundationData = (CellStruct *)(8 * v10 + 11595200); /*0x71df96*/
    if ( !(_BYTE)v9 ) /*0x71df9c*/
    {
      _makepath(Buffer, 0, 0, this->ImageFile, Ext); /*0x71dfad*/
      this->Image = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x71dfc0*/
    }
    v11 = (MixFileClass *)(*((int (__thiscall **)(TerrainTypeClass *))this->vfptr + 39))(this); /*0x71dfca*/
    if ( v11 ) /*0x71dfd2*/
    {
      PixelData = MixFileClass::GetPixelData(v11, (int)&v23, 0); /*0x71dfdd*/
      *(_WORD *)this->RadarColor = *(_WORD *)PixelData; /*0x71dfeb*/
      this->RadarColor[2] = *(_BYTE *)(PixelData + 2); /*0x71dff5*/
    }
    Coord = INIClass::GetCoord( /*0x71e00c*/
              (INIClass *)a2,
              (int)&v23,
              (unsigned __int8 *)this->__pad_24,
              aRadarcolor,
              (unsigned __int8 *)this->RadarColor);
    IsAnimated = this->IsAnimated; /*0x71e014*/
    *(_WORD *)this->RadarColor = *(_WORD *)Coord; /*0x71e01a*/
    this->RadarColor[2] = *(_BYTE *)(Coord + 2); /*0x71e02a*/
    v15 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aIsanimated, IsAnimated); /*0x71e02d*/
    AnimationRate = this->AnimationRate; /*0x71e03a*/
    this->IsAnimated = v15; /*0x71e041*/
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x71e047*/
                      (bool *)a2,
                      (unsigned __int8 *)this->__pad_24,
                      aAnimationrate,
                      AnimationRate);
    AnimationProbability = this->AnimationProbability; /*0x71e04c*/
    this->AnimationRate = Int_Overwrite; /*0x71e057*/
    INIClass::ReadDouble_Overwrite( /*0x71e066*/
      (double *)a2,
      (unsigned __int8 *)this->__pad_24,
      aAnimationproba,
      AnimationProbability);
    TemperateOccupationBits = this->TemperateOccupationBits; /*0x71e06b*/
    this->AnimationProbability = v2; /*0x71e073*/
    v19 = INIClass::ReadInt_Overwrite( /*0x71e080*/
            (bool *)a2,
            (unsigned __int8 *)this->__pad_24,
            aTemperateoccup,
            TemperateOccupationBits);
    SnowOccupationBits = this->SnowOccupationBits; /*0x71e085*/
    this->TemperateOccupationBits = v19; /*0x71e08b*/
    result = INIClass::ReadInt_Overwrite( /*0x71e09a*/
               (bool *)a2,
               (unsigned __int8 *)this->__pad_24,
               aSnowoccupation,
               SnowOccupationBits);
    this->SnowOccupationBits = result; /*0x71e0a0*/
    IDA_LOBYTE(result) = 1; /*0x71e0a8*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x71e0b5*/
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
    v3 = (TerrainTypeClass *)RA2_OPNEW(0x2BCu); /*0x71e2f6*/
    if ( v3 ) /*0x71e305*/
      return TerrainTypeClass::TerrainTypeClass(v3, Source); /*0x71e311*/
    return 0; /*0x71e305*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E31C + v2) + 36), Source) ) /*0x71e2ea*/
  {
    if ( ++v2 >= dword_A8E328 ) /*0x71e2f4*/
      goto LABEL_6; /*0x71e2f4*/
  }
  return (_DWORD *)*((_DWORD *)dword_A8E31C + v2); /*0x71e30f*/
}
// 0x71E360
TerrainTypeClass * TerrainTypeClass::ddtor(void * a2, char a3)
{
  SHPStruct *Image; // eax
  int v4; // eax
  TerrainTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Image = a3->Image; /*0x71e364*/
  a3->vfptr = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71e36a*/
  a3->vfptr1 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71e372*/
  a3->vfptr2 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71e379*/
  a3->vfptr3 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71e380*/
  if ( Image ) /*0x71e387*/
  {
    RA2_OPDEL(Image); /*0x71e38a*/
    a3->Image = 0; /*0x71e392*/
  }
  AbstractClass::AnnounceExpiredPointer(&a3->vfptr, 1); /*0x71e3a0*/
  v6 = a3; /*0x71e3b5*/
  v4 = (*(int (__thiscall **)(_DWORD *, TerrainTypeClass **))(dword_A8E318 + 16))(&dword_A8E318, &v6); /*0x71e3b9*/
  if ( v4 != -1 && v4 < dword_A8E328 && v4 < --dword_A8E328 ) /*0x71e3d4*/
  {
    do /*0x71e3ec*/
    {
      ++v4; /*0x71e3dc*/
      *((_DWORD *)dword_A8E31C + v4 - 1) = *((_DWORD *)dword_A8E31C + v4); /*0x71e3e0*/
    }
    while ( v4 < dword_A8E328 ); /*0x71e3ec*/
  }
  ObjectTypeClass::Destruct((int)a3); /*0x71e3f0*/
  if ( (a3 & 1) != 0 ) /*0x71e3fa*/
    RA2_OPDEL(a3); /*0x71e3fd*/
  return &a3->vfptr; /*0x71e407*/
}
// 0x53FFA0
int TerrainTypeClass::GetTileData(int a2, void * a3, signed int * v10, unsigned int * a5, unsigned short * a6, unsigned int * a7)
{
  _DWORD *v7; // ecx
  int TileType; // eax
  int v9; // ebx
  int v10; // edx
  _DWORD *v11; // edx

  v7 = (_DWORD *)this->vtable2; /*0x53ffa0*/
  if ( v7[14] < a2 ) /*0x53ffaa*/
    return 0; /*0x53ffaa*/
  TileType = Terrain::GetTileType(v7, a2); /*0x53ffad*/
  if ( !TileType || (*(_BYTE *)TileType & 2) != 0 ) /*0x53ffb9*/
    return 0; /*0x540024*/
  v9 = *(_DWORD *)(TileType + 12); /*0x53ffbf*/
  v10 = *(_DWORD *)(TileType + 8) - 16; /*0x53ffc2*/
  if ( v10 > 0 ) /*0x53ffc7*/
    qmemcpy(a3, (const void *)(v9 + 16), v10); /*0x53ffda*/
  *v10 = v10; /*0x53ffea*/
  *a6 = *(_WORD *)(v9 + 14); /*0x53fff4*/
  v11 = *(_DWORD **)(TileType + 20); /*0x53fff7*/
  *a5 = *v11; /*0x540000*/
  a5[1] = v11[1]; /*0x540005*/
  a5[2] = v11[2]; /*0x54000b*/
  if ( a7 ) /*0x540014*/
    *a7 = *(_DWORD *)(v9 + 4); /*0x540019*/
  return 1; /*0x540021*/
}
// 0x71DDD0
bool  TerrainTypeClass::GetHeight(TerrainClass * a2, int a3)
{
  TerrainClass *v4; // eax

  v4 = (TerrainClass *)RA2_OPNEW(0xE0u); /*0x71ddd8*/
  return v4 && TerrainClass::Construct(v4, this, a2); /*0x71ddf7*/
}
// 0x71DE10
TerrainClass * TerrainTypeClass::GetTileIndex(int a2, void *a2_2, void *a3, void *a4)
{
  TerrainClass *v3; // eax

  v3 = (TerrainClass *)RA2_OPNEW(0xE0u); /*0x71de18*/
  if ( v3 ) /*0x71de22*/
    return TerrainClass::Construct(v3, this, (__int16 *)&g_BuildingLoadQueue_Array.ImpactWaterSound); /*0x71de2c*/
  else
    return 0; /*0x71de35*/
}
// 0x71E0D0
unsigned int *  TerrainTypeClass::GetWidth(unsigned int * a1, int * a2)
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
  a1->vfptr = v5; /*0x71e11e*/
  a1->vfptr1 = v6; /*0x71e124*/
  a1->vfptr2 = v3; /*0x71e128*/
  return &a1->vfptr; /*0x71e12b*/
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
  Power::FlagProcess((Power *)a2, v3); /*0x71e165*/
  IDA_LOBYTE(v4) = this->SpawnsTiberium; /*0x71e16a*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x71e173*/
  IDA_LOBYTE(v5) = this->IsFlammable; /*0x71e178*/
  Power::FlagProcess((Power *)a2, v5); /*0x71e181*/
  Power::TimerProcess(this->Foundation); /*0x71e18f*/
  IDA_LOBYTE(v6) = this->IsAnimated; /*0x71e194*/
  Power::FlagProcess((Power *)a2, v6); /*0x71e19d*/
  Power::TimerProcess(this->AnimationRate); /*0x71e1ab*/
  return Checksummer::Add_float((Checksummer *)a2, IDA_LODWORD(this->AnimationProbability)); /*0x71e1be*/
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
      aP0->vfptr = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71e1f4*/
      aP0->vfptr1 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71e1fa*/
      aP0->vfptr2 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71e201*/
      aP0->vfptr3 = &(void*)(void*)&TerrainTypeClass_vftable; /*0x71e208*/
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
}  // G42.18c ns repair
