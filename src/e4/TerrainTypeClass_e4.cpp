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

// 0x5447C0
namespace gamemd {
unsigned int * TerrainTypeClass::Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6)
{
  int v7; // eax
  TerrainTypeClass * v8;
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ObjectTypeClass::ConstructFull(aP4); /*0x5447ce*/
    *((unsigned int *)this + 660) = a2;
    *((unsigned int *)this + 664) = 0xFFFF;
    *((unsigned int *)this + 668) = 0xFFFF;
    *((unsigned int *)this + 672) = 0;
    *((unsigned int *)this + 680) = 0;
    *((unsigned int *)this + 684) = 0;
    *((unsigned char *)this + 688) = 1;
    *((unsigned char *)this + 689) = 0;
    *((unsigned int *)this + 676) = &vt_DynamicVectorClass_unsigned_short;
    *((unsigned int *)this + 696) = 10;
    *((unsigned int *)this + 692) = 0;
    *((unsigned int *)this + 716) = 0;
    *((unsigned int *)this + 704) = -1;
    *((unsigned int *)this + 708) = -1;
    *((unsigned int *)this + 712) = -1;
    *((unsigned int *)this + 720) = 0;
    *((unsigned int *)this + 724) = -1;
    *((unsigned int *)this + 700) = 0;
    *((unsigned int *)this + 728) = 0;
    *((unsigned int *)this + 732) = a3;
    *((unsigned char *)this + 736) = 0;
    *((unsigned char *)this + 737) = 0;
    *((unsigned char *)this + 738) = 1;
    *((unsigned char *)this + 739) = 0;
    *((unsigned int *)this + 740) = 0;
    *((unsigned int *)this + 744) = 0;
    *((unsigned int *)this + 748) = a4;
    *((unsigned int *)this + 752) = 1;
    *((unsigned char *)this + 756) = 0;
    *((unsigned char *)this + 773) = 1;
    *((unsigned char *)this + 774) = 0;
    *((unsigned int *)this + 776) = 0;
    *this = &IsometricTileTypeClass::`vftable';
    *((unsigned int *)this + 4) = &IsometricTileTypeClass::`vftable';
    *((unsigned int *)this + 8) = &IsometricTileTypeClass::`vftable';
    *((unsigned int *)this + 12) = &vt_IsometricTileTypeClass;
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x544917*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x544924*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x544933*/
  }
  if ( !a6 /*0x544970*/
    && (*(int *)&(unsigned int *)((char *)&stru_A8EB00 + 340) < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 332)
     || (*((unsigned int *)((char *)&stru_A8EB00 + 337)) || !*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 332))
     && *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 344) > 0
     && (*(uint8_t (**)(unsigned char *, int, unsigned int))(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 324) + 8))(
          &(unsigned int *)((char *)&stru_A8EB00 + 324),
          *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 332) + *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 344),
          0)) )
  {
    v8 = (gamemd::TerrainTypeClass *)((*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 340))++);
    *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * v8) = this; /*0x54498c*/
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
    if ( Destination != (char *)((char *)this + 100) )
  {
    qmemcpy(this->u32_44, Destination, 0x30u); /*0x5449c1*/
        *((unsigned char *)this + 148) = v11;
  }
    *((unsigned char *)this + 757) = 0;
    *((unsigned char *)this + 559) = 1;
    *((unsigned char *)this + 560) = 0;
    *((unsigned char *)this + 561) = 0;
    *((unsigned char *)this + 562) = 1;
    *((unsigned char *)this + 563) = 1;
    *((unsigned char *)this + 565) = 0;
    return this;
}
} // namespace gamemd
// 0x71DA80
TerrainTypeClass::TerrainTypeClass(ObjectClass * aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  TerrainTypeClass **v6; // edx

  ObjectTypeClass::ConstructFull(aP1); /*0x71da89*/
    *((unsigned int *)this + 660) = -1;
    *((unsigned int *)this + 664) = 0;
    *((unsigned char *)this + 668) = 0;
    *((unsigned char *)this + 669) = 0;
    *((unsigned char *)this + 670) = 0;
    *((unsigned int *)this + 680) = 7;
    *((unsigned int *)this + 684) = 7;
    *((unsigned int *)this + 672) = 0;
    *((unsigned int *)this + 676) = 0;
    *((unsigned char *)this + 688) = 0;
    *((unsigned char *)this + 689) = 0;
    *((unsigned char *)this + 690) = 0;
    *((unsigned char *)this + 691) = 0;
    *((unsigned char *)this + 692) = 0;
    *((unsigned int *)this + 696) = 0;
    *this = &TerrainTypeClass::`vftable';
    *((unsigned int *)this + 4) = &TerrainTypeClass::`vftable';
    *((unsigned int *)this + 8) = &TerrainTypeClass::`vftable';
    *((unsigned int *)this + 12) = &vt_TerrainTypeClass;
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vtable2); /*0x71db11*/
    *((unsigned char *)this + 560) = 0;
    *((unsigned char *)this + 564) = 1;
    *((unsigned char *)this + 559) = 1;
    *((unsigned char *)this + 561) = 0;
    *((unsigned char *)this + 562) = 1;
  v3 = dword_A8E328; /*0x71db36*/
  if ( dword_A8E328 < dword_A8E320 /*0x71db74*/
    || (byte_A8E325 || !dword_A8E320)
    && dword_A8E32C > 0
    && (v4 = (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A8E318 + 8))(
               &dword_A8E318,
               dword_A8E320 + dword_A8E32C,
               0) == 0,
        v3 = dword_A8E328,
        !v4) )
  {
    dword_A8E328 = v3 + 1; /*0x71db79*/
    *((unsigned int *)dword_A8E31C + v3) = this; /*0x71db83*/
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
    *((unsigned int *)this + 660) = v5;
    *((unsigned int *)this + 160) = -1;
    *((unsigned int *)this + 156) = 6;
    return this;
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
  unsigned char v22[4]; // [esp+18h] [ebp-204h] BYREF
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x71deb3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, aP1) ) /*0x71debb*/
    return 0; /*0x71e0b5*/
    if ( *((unsigned int *)this + 640) == -1 )
        *((unsigned int *)this + 640) = *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4420);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
    *((unsigned char *)this + 2768) = Bool_Overwrite;
  if ( Bool_Overwrite ) /*0x71df03*/
  {
        *((unsigned char *)this + 2256) = 0;
        *((unsigned char *)this + 2244) = 1;
  }
    v4 = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)((char *)this + 144), &stru_81AE4C, *((unsigned char *)this + 2752));
    v5 = *((unsigned char *)this + 2756);
    *((unsigned char *)this + 2752) = v4;
  v6 = INIClass::ReadBool_Overwrite(&this->q024, aSpawnstiberium, v5); /*0x71df3c*/
    aP3_4 = *((unsigned char *)this + 2760);
    *((unsigned char *)this + 2756) = v6;
    *((unsigned char *)this + 2760) = INIClass::ReadBool_Overwrite(
    v7 = (Color *)INIClass::LookupEnum(
  v8 = 5 * v7; /*0x71df7e*/
    *((unsigned int *)this + 2656) = v7;
    LOBYTE(v7) = *((unsigned char *)this + 2224);
    *((unsigned int *)this + 2784) = 8 * v8 + 11595200;
  if ( !(unsigned char)v7 ) /*0x71df9c*/
  {
        _makepath((char *)v23.headNode, 0, 0, (const char *)((char *)this + 2016), Ext);
        *((unsigned int *)this + 656) = SearchMIXFile((char *)v23.headNode, 0);
  }
  v9 = (char **)(*(int (**)(int))(*(unsigned int *)this + 156))(this);
  if ( v9 ) /*0x71dfd2*/
  {
    PixelData = MixFileClass::GetPixelData(v9, (int)v22, 0); /*0x71dfdd*/
        *((unsigned short *)this + 2672) = *(unsigned short *)PixelData;
        *((unsigned char *)this + 2680) = *(unsigned char *)(PixelData + 2);
  }
  Coord = INIClass::GetCoord( /*0x71e00c*/
            aP1,
            (int)v22,
            (uint8_t *)(&this->vtable46),
            (uint8_t *)aRadarcolor,
            (uint8_t *)(&this->q1088));
    v12 = *((unsigned char *)this + 2764);
    *((unsigned short *)this + 2672) = *(unsigned short *)Coord;
    *((unsigned char *)this + 2680) = *(unsigned char *)(Coord + 2);
  v13 = INIClass::ReadBool_Overwrite(&this->q024, aIsanimated, v12); /*0x71e02d*/
    aP3_4a = *(INIClass **)((char *)this + 2688);
    *((unsigned char *)this + 2764) = v13;
  Int_Overwrite = INIClass::ReadInt_Overwrite(&this->q024, aAnimationrate, v21); /*0x71e047*/
    aP3 = *(float *)((char *)this + 2704);
    *((unsigned int *)this + 2688) = Int_Overwrite;
  INIClass::ReadDouble_Overwrite(&this->q024, (int)aAnimationproba, v15); /*0x71e066*/
    v16 = *(CCINIClass **)((char *)this + 2720);
    *(float *)((char *)this + 2704) = Double_Overwrite;
  v17 = INIClass::ReadInt_Overwrite(&this->q024, aTemperateoccup, v16); /*0x71e080*/
    v19 = *(INIClass **)((char *)this + 2736);
    *((unsigned int *)this + 2720) = v18;
    *((unsigned int *)this + 2736) = INIClass::ReadInt_Overwrite(
  return 1; /*0x71e0a7*/
}
// 0x71E2A0
TerrainTypeClass * * TerrainTypeClass::FindOrCreate()
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
// 0x71da80
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
TerrainTypeClass * TerrainTypeClass::ddtor(AbstractClass *a2, char a3)
{
  SHPStruct *Image; // eax
  int v4; // eax
  TerrainTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Image = a3->?; /*0x71e364*/
  a3->ObjectTypeClass = (void*)&TerrainTypeClass_vftable; /*0x71e36a*/
  a3->? = (void*)&TerrainTypeClass_vftable; /*0x71e372*/
  a3->? = (void*)&TerrainTypeClass_vftable; /*0x71e379*/
  a3->? = (void*)&TerrainTypeClass_vftable; /*0x71e380*/
  if ( Image ) /*0x71e387*/
  {
    RA2_OPDEL(Image); /*0x71e38a*/
    a3->? = 0; /*0x71e392*/
  }
  AbstractClass::AnnounceExpiredPointer(&a3->ObjectTypeClass, 1); /*0x71e3a0*/
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
    RA2_OPDEL(a3); /*0x71e3fd*/
  return &a3->ObjectTypeClass; /*0x71e407*/
}
// 0x53FFA0
int TerrainTypeClass::GetTileData(AnimClass * aP1, void * a2, signed int * v10, unsigned int * a4, unsigned short * a5, unsigned int * a6)
{
  unsigned int *v7; // ecx
  int TileType; // eax
  int v9; // ebx
  int v10; // edx
  unsigned int *v11; // edx

    v7 = (unsigned int *)*((unsigned int *)this + 4);
  if ( v7[14] < aP1 ) /*0x53ffaa*/
    return 0; /*0x53ffaa*/
  TileType = Terrain::GetTileType(v7, aP1); /*0x53ffad*/
  if ( !TileType || (*(unsigned char *)TileType & 2) != 0 ) /*0x53ffb9*/
    return 0; /*0x540024*/
  v9 = *(unsigned int *)(TileType + 12); /*0x53ffbf*/
  v10 = *(unsigned int *)(TileType + 8) - 16; /*0x53ffc2*/
  if ( v10 > 0 ) /*0x53ffc7*/
    qmemcpy(a2, (const void *)(v9 + 16), v10); /*0x53ffda*/
  *v10 = v10; /*0x53ffea*/
  *a5 = *(unsigned short *)(v9 + 14); /*0x53fff4*/
  v11 = *(unsigned int **)(TileType + 20); /*0x53fff7*/
  *a4 = *v11; /*0x540000*/
  a4[1] = v11[1]; /*0x540005*/
  a4[2] = v11[2]; /*0x54000b*/
  if ( a6 ) /*0x540014*/
    *a6 = *(unsigned int *)(v9 + 4); /*0x540019*/
  return 1; /*0x540021*/
}
// 0x71DDD0
bool  TerrainTypeClass::GetHeight(int a3)
{
  TerrainClass *v4; // eax

  v4 = (TerrainClass *)RA2_OPNEW(0xE0u); /*0x71ddd8*/
// 0x71bb90
  return v4 && TerrainClass::Construct(v4, this, this); /*0x71ddf7*/
}
// 0x71DE10
TerrainClass * TerrainTypeClass::GetTileIndex(int a2)
{
  TerrainClass *v3; // eax

  v3 = (TerrainClass *)RA2_OPNEW(0xE0u); /*0x71de18*/
  if ( v3 ) /*0x71de22*/
// 0x71bb90
    return TerrainClass::Construct(v3, this, (int16_t *)&g_BuildingLoadQueue_Array.?); /*0x71de2c*/
  else
    return 0; /*0x71de35*/
}
// 0x71E0D0
unsigned int *  TerrainTypeClass::GetWidth(int * a2)
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
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v3;
    return a1;
}
// 0x71E140
int TerrainTypeClass::PowerDrainUpdate(int * a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edx

  AbstractTypeClass::ProcessPower(a2); /*0x71e149*/
    Power::TimerProcess(*((unsigned int *)this + 2640));
    LOBYTE(v3) = *((unsigned char *)this + 2752);
  Power::FlagProcess((Power *)a2, v3); /*0x71e165*/
    LOBYTE(v4) = *((unsigned char *)this + 2756);
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x71e173*/
    LOBYTE(v5) = *((unsigned char *)this + 2760);
  Power::FlagProcess((Power *)a2, v5); /*0x71e181*/
    Power::TimerProcess(*((unsigned int *)this + 2656));
    LOBYTE(v6) = *((unsigned char *)this + 2764);
  Power::FlagProcess((Power *)a2, v6); /*0x71e19d*/
    Power::TimerProcess(*((unsigned int *)this + 2688));
// 0x4a1d70
    return Checksummer::Add_float((unsigned int *)a2, *((unsigned int *)this + 2704));
}
// 0x71E1D0
int  TerrainTypeClass::SaveLoad_Prefix(int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, aP1); /*0x71e1db*/
  if ( result >= 0 ) /*0x71e1e2*/
  {
    if ( this ) /*0x71e1e6*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&aP1); /*0x71e1ef*/
            *(unsigned int *)aP0->__pad_0 = &TerrainTypeClass::`vftable';
      *(void **)&this->vtable2 = (void*)&TerrainTypeClass_vftable; /*0x71e1fa*/
      *(void **)&this->vtable3 = (void*)&TerrainTypeClass_vftable; /*0x71e201*/
      *(void **)&this->vtable4 = (void*)&TerrainTypeClass_vftable; /*0x71e208*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x71e211*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x71e218*/
        *(unsigned int *)aP0[1].__pad_24 = 40 * *(unsigned int *)&aP0[1].__pad_0[4] + 11595200;
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
    return *((unsigned int *)this + 660);
}