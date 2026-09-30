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
  int v8; // eax
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP4); /*0x5447ce*/
  *((unsigned int *)this + 165) = a2; /*0x5447d9*/
  *((unsigned int *)this + 166) = 0xFFFF; /*0x5447e4*/
  *((unsigned int *)this + 167) = 0xFFFF; /*0x5447ea*/
  *((unsigned int *)this + 168) = 0; /*0x5447f0*/
  *((unsigned int *)this + 170) = 0; /*0x5447f8*/
  *((unsigned int *)this + 171) = 0; /*0x5447fe*/
  *((unsigned char *)this + 688) = 1; /*0x544804*/
  *((unsigned char *)this + 689) = 0; /*0x54480b*/
  *((unsigned int *)this + 169) = &vt_DynamicVectorClass_unsigned_short; /*0x544811*/
  *((unsigned int *)this + 174) = 10; /*0x54481b*/
  *((unsigned int *)this + 173) = 0; /*0x544825*/
  *((unsigned int *)this + 179) = 0; /*0x544830*/
  *((unsigned int *)this + 176) = -1; /*0x544836*/
  *((unsigned int *)this + 177) = -1; /*0x54483c*/
  *((unsigned int *)this + 178) = -1; /*0x544842*/
  *((unsigned int *)this + 180) = 0; /*0x544848*/
  *((unsigned int *)this + 181) = -1; /*0x544852*/
  *((unsigned int *)this + 175) = 0; /*0x544868*/
  *((unsigned int *)this + 182) = 0; /*0x54486e*/
  *((unsigned int *)this + 183) = a3; /*0x544874*/
  *((unsigned char *)this + 736) = 0; /*0x54487a*/
  *((unsigned char *)this + 737) = 0; /*0x544880*/
  *((unsigned char *)this + 738) = 1; /*0x544886*/
  *((unsigned char *)this + 739) = 0; /*0x54488d*/
  *((unsigned int *)this + 185) = 0; /*0x544893*/
  *((unsigned int *)this + 186) = 0; /*0x544899*/
  *((unsigned int *)this + 187) = a4; /*0x54489f*/
  *((unsigned int *)this + 188) = 1; /*0x5448a5*/
  *((unsigned char *)this + 756) = 0; /*0x5448af*/
  *((unsigned char *)this + 773) = 1; /*0x5448b5*/
  *((unsigned char *)this + 774) = 0; /*0x5448bc*/
  *((unsigned int *)this + 194) = 0; /*0x5448c2*/
  *this = &IsometricTileTypeClass::`vftable'; /*0x5448c8*/
  *((unsigned int *)this + 1) = &IsometricTileTypeClass::`vftable'; /*0x5448cf*/
  *((unsigned int *)this + 2) = &IsometricTileTypeClass::`vftable'; /*0x5448d6*/
  *((unsigned int *)this + 3) = &vt_IsometricTileTypeClass; /*0x5448dd*/
  if ( *(int *)&g_abs_B077F8 < *(int *)&g_abs_B077F8 /*0x544917*/
    || (g_abs_B077F8 || !*(unsigned int *)&g_abs_B077F8)
    && *(int *)&g_abs_B077F8 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_B077F8 + 8))(
         &g_abs_B077F8,
         *(unsigned int *)&g_abs_B077F8 + *(unsigned int *)&g_abs_B077F8,
         0) )
  {
    v7 = (*(unsigned int *)&g_abs_B077F8)++; /*0x544924*/
    *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * v7) = this; /*0x544933*/
  }
  if ( !a6 /*0x544970*/
    && (*(int *)&g_abs_A8D63C < *(int *)&g_abs_A8D63C
     || (g_abs_A8D63C || !*(unsigned int *)&g_abs_A8D63C)
     && *(int *)&g_abs_A8D63C > 0
     && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_A8D63C + 8))(
          &g_abs_A8D63C,
          *(unsigned int *)&g_abs_A8D63C + *(unsigned int *)&g_abs_A8D63C,
          0)) )
  {
    v8 = (*(unsigned int *)&g_abs_A8D63C)++; /*0x54497d*/
    *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v8) = this; /*0x54498c*/
  }
  if ( aP4 ) /*0x544991*/
  {
    strncpy(Destination, (const char *)aP4, 0x30u); /*0x5449a1*/
    v11 = 0; /*0x5449a9*/
  }
  else
  {
    Destination[0] = 0; /*0x544993*/
  }
  if ( Destination != (char *)((unsigned int *)this + 25) ) /*0x5449b6*/
  {
    qmemcpy((unsigned int *)this + 25, Destination, 0x30u); /*0x5449c1*/
    *((unsigned char *)this + 148) = v11; /*0x5449c3*/
  }
  *((unsigned char *)this + 757) = 0; /*0x5449c5*/
  *((unsigned char *)this + 559) = 1; /*0x5449cb*/
  *((unsigned char *)this + 560) = 0; /*0x5449d2*/
  *((unsigned char *)this + 561) = 0; /*0x5449d8*/
  *((unsigned char *)this + 562) = 1; /*0x5449de*/
  *((unsigned char *)this + 563) = 1; /*0x5449e5*/
  *((unsigned char *)this + 565) = 0; /*0x5449ec*/
  return this; /*0x5449c4*/

}
} // namespace gamemd
// 0x71DA80
TerrainTypeClass::TerrainTypeClass(ObjectClass * aP1)
{

  TerrainTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x71da89*/
  *((unsigned int *)this + 165) = -1; /*0x71da90*/
  *((unsigned int *)this + 166) = 0; /*0x71da9a*/
  *((unsigned char *)this + 668) = 0; /*0x71daa5*/
  *((unsigned char *)this + 669) = 0; /*0x71daab*/
  *((unsigned char *)this + 670) = 0; /*0x71dab1*/
  *((unsigned int *)this + 170) = 7; /*0x71dab7*/
  *((unsigned int *)this + 171) = 7; /*0x71dabd*/
  *((unsigned int *)this + 168) = 0; /*0x71dac7*/
  *((unsigned int *)this + 169) = 0; /*0x71dacd*/
  *((unsigned char *)this + 688) = 0; /*0x71dad3*/
  *((unsigned char *)this + 689) = 0; /*0x71dad9*/
  *((unsigned char *)this + 690) = 0; /*0x71dadf*/
  *((unsigned char *)this + 691) = 0; /*0x71dae5*/
  *((unsigned char *)this + 692) = 0; /*0x71daeb*/
  *((unsigned int *)this + 174) = 0; /*0x71daf1*/
  *this = &TerrainTypeClass::`vftable'; /*0x71daf7*/
  *((unsigned int *)this + 1) = &TerrainTypeClass::`vftable'; /*0x71dafd*/
  *((unsigned int *)this + 2) = &TerrainTypeClass::`vftable'; /*0x71db03*/
  *((unsigned int *)this + 3) = &vt_TerrainTypeClass; /*0x71db0a*/
  AbstractClass::GenerateUniqueID((int)((unsigned int *)this + 1)); /*0x71db11*/
  *((unsigned char *)this + 560) = 0; /*0x71db18*/
  *((unsigned char *)this + 564) = 1; /*0x71db1e*/
  *((unsigned char *)this + 559) = 1; /*0x71db24*/
  *((unsigned char *)this + 561) = 0; /*0x71db2a*/
  *((unsigned char *)this + 562) = 1; /*0x71db30*/
  v3 = *(TerrainTypeClass **)&HouseClass_Player.__pad_5568[20596]; /*0x71db36*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20596] < *(int *)&HouseClass_Player.__pad_5568[20588] /*0x71db74*/
    || (HouseClass_Player.__pad_5568[20593] || !*(unsigned int *)&HouseClass_Player.__pad_5568[20588])
    && *(int *)&HouseClass_Player.__pad_5568[20600] > 0
    && (v4 = (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player.__pad_5568[20580] + 8))(
               &HouseClass_Player.__pad_5568[20580],
               *(unsigned int *)&HouseClass_Player.__pad_5568[20588] + *(unsigned int *)&HouseClass_Player.__pad_5568[20600],
               0) == 0,
        v3 = *(TerrainTypeClass **)&HouseClass_Player.__pad_5568[20596],
        !v4) )
  {
    *(unsigned int *)&HouseClass_Player.__pad_5568[20596] = &v3->__pad_0[1]; /*0x71db79*/
    *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20584] + 4 * (unsigned int)v3) = this; /*0x71db83*/
    v3 = *(TerrainTypeClass **)&HouseClass_Player.__pad_5568[20596]; /*0x71db86*/
  }
  v5 = 0; /*0x71db8b*/
  if ( (int)v3 <= 0 ) /*0x71db8f*/
  {
LABEL_11:
    v5 = -1; /*0x71dba3*/
  }
  else
  {
    v6 = *(CCINIClass **)&HouseClass_Player.__pad_5568[20584]; /*0x71db91*/
    while ( *(unsigned int **)v6->__pad_0 != this ) /*0x71db99*/
    {
      ++v5; /*0x71db9b*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x71db9c*/
      if ( v5 >= (int)v3 ) /*0x71dba1*/
        goto LABEL_11; /*0x71dba1*/
    }
  }
  *((unsigned int *)this + 165) = v5; /*0x71dba6*/
  *((unsigned int *)this + 40) = -1; /*0x71dbac*/
  *((unsigned int *)this + 39) = 6; /*0x71dbb6*/
  return this; /*0x71dbc2*/

}
// 0x71DEA0
int TerrainTypeClass::LoadFromINI(unsigned char *** aP1)
{

  char Bool_Overwrite; // al
  char v4; // al
  char v5; // cl
  char v6; // al
  Color *v7; // eax
  int v8; // ecx
  char **v9; // eax
  int PixelData; // eax
  int Coord; // eax
  char v12; // cl
  char v13; // al
  int Int_Overwrite; // eax
  double aP3; // st7
  double Double_Overwrite; // st7
  CCINIClass *v16; // eax
  int v18; // eax
  INIClass *v19; // ecx
  char aP3_4; // [esp+4h] [ebp-218h]
  INIClass *aP3_4a; // [esp+4h] [ebp-218h]
  CCINIClass v23; // [esp+18h] [ebp-204h] BYREF

  INIClass::ResetSection(aP1); /*0x71deb3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x71debb*/
    return 0; /*0x71e0b5*/
  if ( *((unsigned int *)this + 40) == -1 ) /*0x71decf*/
    *((unsigned int *)this + 40) = *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 4420); /*0x71dedc*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x71def6*/
                     (int)aP1,
                     (uint8_t *)((char *)this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[59592],
                     *((unsigned char *)this + 692));
  *((unsigned char *)this + 692) = Bool_Overwrite; /*0x71defd*/
  if ( Bool_Overwrite ) /*0x71df03*/
  {
    *((unsigned char *)this + 564) = 0; /*0x71df05*/
    *((unsigned char *)this + 561) = 1; /*0x71df0c*/
  }
  v4 = INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)((char *)this + 36), &stru_81AE4C, *((unsigned char *)this + 688)); /*0x71df22*/
  v5 = *((unsigned char *)this + 689); /*0x71df27*/
  *((unsigned char *)this + 688) = v4; /*0x71df2d*/
  v6 = INIClass::ReadBool_Overwrite( /*0x71df3c*/
         (int)aP1,
         (uint8_t *)((char *)this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[59576],
         v5);
  aP3_4 = *((unsigned char *)this + 690); /*0x71df49*/
  *((unsigned char *)this + 689) = v6; /*0x71df50*/
  *((unsigned char *)this + 690) = INIClass::ReadBool_Overwrite( /*0x71df5b*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[59564],
                             aP3_4);
  v7 = (Color *)INIClass::LookupEnum( /*0x71df79*/
                  (uint8_t ***)&g_abs_87F8E4,
                  (uint8_t *)((char *)this + 504),
                  (uint8_t *)g_INI_Key_Foundation,
                  *((unsigned int *)this + 166));
  v8 = 5 * (unsigned int)v7; /*0x71df7e*/
  *((unsigned int *)this + 166) = v7; /*0x71df81*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 556); /*0x71df87*/
  *((unsigned int *)this + 174) = 8 * v8 + 11595200; /*0x71df96*/
  if ( !(unsigned char)v7 ) /*0x71df9c*/
  {
    _makepath((char *)v23.headNode, 0, 0, (const char *)((char *)this + 504), Ext); /*0x71dfad*/
    *((unsigned int *)this + 41) = SearchMIXFile((char *)v23.headNode, 0); /*0x71dfc0*/
  }
  v9 = (char **)(*(int (**)(int))(*(unsigned int *)this + 156))(this); /*0x71dfca*/
  if ( v9 ) /*0x71dfd2*/
  {
    PixelData = MixFileClass::GetPixelData(v9, (int)&v23, 0); /*0x71dfdd*/
    *((unsigned short *)this + 334) = *(unsigned short *)PixelData; /*0x71dfeb*/
    *((unsigned char *)this + 670) = *(unsigned char *)(PixelData + 2); /*0x71dff5*/
  }
  Coord = INIClass::GetCoord( /*0x71e00c*/
            aP1,
            &v23,
            (INIClass *)((char *)this + 36),
            (Color *)&stru_830620.__pad_14B0[6744],
            (Color *)((char *)this + 668));
  v12 = *((unsigned char *)this + 691); /*0x71e014*/
  *((unsigned short *)this + 334) = *(unsigned short *)Coord; /*0x71e01a*/
  *((unsigned char *)this + 670) = *(unsigned char *)(Coord + 2); /*0x71e02a*/
  v13 = INIClass::ReadBool_Overwrite( /*0x71e02d*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[59552],
          v12);
  aP3_4a = *(INIClass **)((char *)this + 672); /*0x71e03a*/
  *((unsigned char *)this + 691) = v13; /*0x71e041*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x71e047*/
                    (int)aP1,
                    (uint8_t *)((char *)this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[59536],
                    aP3_4a);
  aP3 = *(float *)((char *)this + 676); /*0x71e04c*/
  *((unsigned int *)this + 168) = Int_Overwrite; /*0x71e057*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x71e066*/
                       (int)aP1,
                       (INIClass *)((char *)this + 36),
                       (uint8_t *)&stru_830620.__pad_579C[59512],
                       (INIClass *)IDA_LODWORD(aP3));
  v16 = *(CCINIClass **)((char *)this + 680); /*0x71e06b*/
  *(float *)((char *)this + 676) = Double_Overwrite; /*0x71e073*/
  v18 = INIClass::ReadInt_Overwrite( /*0x71e080*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[59488],
          (INIClass *)v16);
  v19 = *(INIClass **)((char *)this + 684); /*0x71e085*/
  *((unsigned int *)this + 170) = v18; /*0x71e08b*/
  *((unsigned int *)this + 171) = INIClass::ReadInt_Overwrite( /*0x71e0a0*/
                              (int)aP1,
                              (uint8_t *)((char *)this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[59468],
                              v19);
  return 1; /*0x71e0a7*/

}
// 0x71E2A0
TerrainTypeClass * * TerrainTypeClass::FindOrCreate(ObjectClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x71e2bc*/
    return 0; /*0x71e31f*/
  v2 = 0; /*0x71e2cd*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20596] <= 0 ) /*0x71e2d1*/
  {
LABEL_6:
    v3 = (unsigned int *)RA2_OPNEW(0x2BCu); /*0x71e2f6*/
    if ( v3 ) /*0x71e305*/
      return (TerrainTypeClass *)TerrainTypeClass::TerrainTypeClass(v3, Source); /*0x71e311*/
    return 0; /*0x71e305*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20584] + 4 * v2) + 36), Source) ) /*0x71e2ea*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20596] ) /*0x71e2f4*/
      goto LABEL_6; /*0x71e2f4*/
  }
  return *(TerrainTypeClass **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20584] + 4 * v2); /*0x71e30f*/

}
// 0x71E360
TerrainTypeClass * TerrainTypeClass::ddtor(void ** this, void * a2, char a3)
{

  CCINIClass *v3; // eax
  int v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  v3 = (CCINIClass *)*(this + 41); /*0x71e364*/
  *this = &TerrainTypeClass::`vftable'; /*0x71e36a*/
  *(this + 1) = &TerrainTypeClass::`vftable'; /*0x71e372*/
  *(this + 2) = &TerrainTypeClass::`vftable'; /*0x71e379*/
  *(this + 3) = &vt_TerrainTypeClass; /*0x71e380*/
  if ( v3 ) /*0x71e387*/
  {
    OperatorDelete(v3); /*0x71e38a*/
    *(this + 41) = 0; /*0x71e392*/
  }
  IDA_LOBYTE(this) = 1; /*0x71e39c*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, this); /*0x71e3a0*/
  v7 = this; /*0x71e3b5*/
  v5 = (*(int (**)(char *, void ***))(*(unsigned int *)&HouseClass_Player.__pad_5568[20580] + 16))( /*0x71e3b9*/
         &HouseClass_Player.__pad_5568[20580],
         &v7);
  if ( v5 != -1 && v5 < *(int *)&HouseClass_Player.__pad_5568[20596] ) /*0x71e3c9*/
  {
    --*(unsigned int *)&HouseClass_Player.__pad_5568[20596]; /*0x71e3ce*/
    for ( ; /*0x71e3d4*/
          v5 < *(int *)&HouseClass_Player.__pad_5568[20596];
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20584] + 4 * v5 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20584]
                                                                                                + 4 * v5) )
    {
      ++v5; /*0x71e3dc*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x71e3f0*/
  if ( (this & 1) != 0 ) /*0x71e3fa*/
    OperatorDelete(this); /*0x71e3fd*/
  return (TerrainTypeClass *)this; /*0x71e407*/

}
// 0x53FFA0
int TerrainTypeClass::GetTileData(int a2, void * a3, signed int * a4, unsigned int * a5, unsigned short * a6, unsigned int * a7)
{

  unsigned int *v7; // ecx
  int TileType; // eax
  int v9; // ebx
  signed int a7; // edx
  unsigned int *v11; // edx

  v7 = (unsigned int *)*((unsigned int *)this + 1); /*0x53ffa0*/
  if ( v7[14] < a3 ) /*0x53ffaa*/
    return 0; /*0x53ffaa*/
  TileType = Terrain::GetTileType(v7, a3); /*0x53ffad*/
  if ( !TileType || (*(unsigned char *)TileType & 2) != 0 ) /*0x53ffb9*/
    return 0; /*0x540024*/
  v9 = *(unsigned int *)(TileType + 12); /*0x53ffbf*/
  a7 = *(unsigned int *)(TileType + 8) - 16; /*0x53ffc2*/
  if ( a7 > 0 ) /*0x53ffc7*/
    qmemcpy(a3, (const void *)(v9 + 16), a7); /*0x53ffda*/
  *a7 = a7; /*0x53ffea*/
  *a7 = *(unsigned short *)(v9 + 14); /*0x53fff4*/
  v11 = *(unsigned int **)(TileType + 20); /*0x53fff7*/
  *a7 = *v11; /*0x540000*/
  a7[1] = v11[1]; /*0x540005*/
  a7[2] = v11[2]; /*0x54000b*/
  if ( a7 ) /*0x540014*/
    *a7 = *(unsigned int *)(v9 + 4); /*0x540019*/
  return 1; /*0x540021*/

}
// 0x71DDD0
bool  TerrainTypeClass::GetHeight( TerrainClass * aP2, int a3)
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
    return TerrainClass::Construct(v3, this, (TerrainClass *)&stru_B05488.__pad_579C[16728]); /*0x71de2c*/
  else
    return 0; /*0x71de35*/

}
// 0x71E0D0
unsigned int *  TerrainTypeClass::GetWidth(unsigned int * a1, int * a2)
{

  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a1; /*0x71e0d9*/
  v6 = a1[1]; /*0x71e0ea*/
  v7 = a1[2]; /*0x71e0f1*/
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x71e149*/
  Power::TimerProcess(*((unsigned int *)this + 165)); /*0x71e157*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 688); /*0x71e15c*/
  Power::FlagProcess(a2, v3); /*0x71e165*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 689); /*0x71e16a*/
  v5 = Power::FlagProcess(a2, v4); /*0x71e173*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 690); /*0x71e178*/
  Power::FlagProcess(a2, v5); /*0x71e181*/
  Power::TimerProcess(*((unsigned int *)this + 166)); /*0x71e18f*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 691); /*0x71e194*/
  Power::FlagProcess(a2, v6); /*0x71e19d*/
  Power::TimerProcess(*((unsigned int *)this + 168)); /*0x71e1ab*/
  return Checksummer::Add_float((unsigned int *)a2, *((unsigned int *)this + 169)); /*0x71e1be*/

}
// 0x71E1D0
int  TerrainTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{

  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP0); /*0x71e1db*/
  if ( result >= 0 ) /*0x71e1e2*/
  {
    if ( aP0 ) /*0x71e1e6*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP0); /*0x71e1ef*/
      *(unsigned int *)aP0->__pad_0 = &TerrainTypeClass::`vftable'; /*0x71e1f4*/
      *(unsigned int *)&aP0->__pad_0[4] = &TerrainTypeClass::`vftable'; /*0x71e1fa*/
      *(unsigned int *)&aP0->__pad_0[8] = &TerrainTypeClass::`vftable'; /*0x71e201*/
      *(unsigned int *)&aP0->__pad_0[12] = &vt_TerrainTypeClass; /*0x71e208*/
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x71e211*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x71e218*/
    *(unsigned int *)aP0[1].__pad_24 = 40 * *(unsigned int *)&aP0[1].__pad_0[4] + 11595200; /*0x71e22d*/
    return 0; /*0x71e233*/
  }
  return result; /*0x71e235*/

}
// 0x71E240
int TerrainTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x71e24f*/
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

  return *((unsigned int *)this + 165); /*0x71e356*/

}