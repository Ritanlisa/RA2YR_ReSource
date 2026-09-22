// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x5447C0
unsigned int * TerrainTypeClass::Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP4); /*0x5447ce*/
  this->ArrayIndex = a2; /*0x5447d9*/
  this->Foundation = 0xFFFF; /*0x5447e4*/
  this->RadarColor = 0xFFFF; /*0x5447ea*/
  this->AnimationRate = 0; /*0x5447f0*/
  this->TemperateOccupationBits = 0; /*0x5447f8*/
  this->SnowOccupationBits = 0; /*0x5447fe*/
  this->WaterBound = 1; /*0x544804*/
  this->SpawnsTiberium = 0; /*0x54480b*/
  this->AnimationProbability = &vt_DynamicVectorClass_unsigned_short; /*0x544811*/
  this->q2B8 = 10; /*0x54481b*/
  this->IsVeinhole = 0; /*0x544825*/
  *(this + 179) = 0; /*0x544830*/
  this->MainVoxel = -1; /*0x544836*/
  *(this + 177) = -1; /*0x54483c*/
  *(this + 178) = -1; /*0x544842*/
  this->TurretVoxel = 0; /*0x544848*/
  *(this + 181) = -1; /*0x544852*/
  this->q2BC = 0; /*0x544868*/
  *(this + 182) = 0; /*0x54486e*/
  *(this + 183) = a3; /*0x544874*/
  this->BarrelVoxel = 0; /*0x54487a*/
  *((_BYTE *)this + 737) = 0; /*0x544880*/
  *((_BYTE *)this + 738) = 1; /*0x544886*/
  *((_BYTE *)this + 739) = 0; /*0x54488d*/
  this->q0B9 = 0; /*0x544893*/
  *(this + 186) = 0; /*0x544899*/
  *(this + 187) = a4; /*0x54489f*/
  this->ChargerTurrets = 1; /*0x5448a5*/
  *((_BYTE *)this + 756) = 0; /*0x5448af*/
  *((_BYTE *)this + 773) = 1; /*0x5448b5*/
  *((_BYTE *)this + 774) = 0; /*0x5448bc*/
  *(this + 194) = 0; /*0x5448c2*/
  *this = &IsometricTileTypeClass::`vftable'; /*0x5448c8*/
  this->vtable2 = &IsometricTileTypeClass::`vftable'; /*0x5448cf*/
  this->vtable3 = &IsometricTileTypeClass::`vftable'; /*0x5448d6*/
  this->vtable4 = &vt_IsometricTileTypeClass; /*0x5448dd*/
  if ( *(int *)&g_OverlayTypeConfig[32392] < *(int *)&g_OverlayTypeConfig[32384] /*0x544917*/
    || (g_OverlayTypeConfig[32389] || !*(_DWORD *)&g_OverlayTypeConfig[32384])
    && *(int *)&g_OverlayTypeConfig[32396] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_OverlayTypeConfig[32376] + 8))(
         &g_OverlayTypeConfig[32376],
         *(_DWORD *)&g_OverlayTypeConfig[32384] + *(_DWORD *)&g_OverlayTypeConfig[32396],
         0) )
  {
    int v7 = (*(_DWORD *)&g_OverlayTypeConfig[32392])++; /*0x544924*/
    *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32380] + 4 * v7) = this; /*0x544933*/
  }
  if ( !a6 /*0x544970*/
    && (*(int *)&g_NetworkPlayerBuffer[5884] < *(int *)&g_NetworkPlayerBuffer[5876]
     || (g_NetworkPlayerBuffer[5881] || !*(_DWORD *)&g_NetworkPlayerBuffer[5876])
     && *(int *)&g_NetworkPlayerBuffer[5888] > 0
     && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_NetworkPlayerBuffer[5868] + 8))(
          &g_NetworkPlayerBuffer[5868],
          *(_DWORD *)&g_NetworkPlayerBuffer[5876] + *(_DWORD *)&g_NetworkPlayerBuffer[5888],
          0)) )
  {
    int v8 = (*(_DWORD *)&g_NetworkPlayerBuffer[5884])++; /*0x54497d*/
    *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872] + 4 * v8) = this; /*0x54498c*/
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
  if ( Destination != (char *)(this + 25) ) /*0x5449b6*/
  {
    qmemcpy(this + 25, Destination, 0x30u); /*0x5449c1*/
    this->q094 = v11; /*0x5449c3*/
  }
  *((_BYTE *)this + 757) = 0; /*0x5449c5*/
  this->RadarInvisible = 1; /*0x5449cb*/
  this->Selectable = 0; /*0x5449d2*/
  this->LegalTarget = 0; /*0x5449d8*/
  this->Insignificant = 1; /*0x5449de*/
  this->Immune = 1; /*0x5449e5*/
  this->AllowCellContent = 0; /*0x5449ec*/
  return this; /*0x5449c4*/
}
}

// 0x71DA80
unsigned int * TerrainTypeClass::TerrainTypeClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  TerrainTypeClass *v3; // eax
  CCINIClass *v6; // edx
  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x71da89*/
  this->ArrayIndex = -1; /*0x71da90*/
  this->Foundation = 0; /*0x71da9a*/
  this->RadarColor = 0; /*0x71daa5*/
  this->q29D = 0; /*0x71daab*/
  this->q29E = 0; /*0x71dab1*/
  this->TemperateOccupationBits = 7; /*0x71dab7*/
  this->SnowOccupationBits = 7; /*0x71dabd*/
  this->AnimationRate = 0; /*0x71dac7*/
  this->AnimationProbability = 0; /*0x71dacd*/
  this->WaterBound = 0; /*0x71dad3*/
  this->SpawnsTiberium = 0; /*0x71dad9*/
  this->IsFlammable = 0; /*0x71dadf*/
  this->IsAnimated = 0; /*0x71dae5*/
  this->IsVeinhole = 0; /*0x71daeb*/
  this->q2B8 = 0; /*0x71daf1*/
  *this = &TerrainTypeClass::`vftable'; /*0x71daf7*/
  this->vtable2 = &TerrainTypeClass::`vftable'; /*0x71dafd*/
  this->vtable3 = &TerrainTypeClass::`vftable'; /*0x71db03*/
  this->vtable4 = &vt_TerrainTypeClass; /*0x71db0a*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x71db11*/
  this->Selectable = 0; /*0x71db18*/
  this->IsLogic = 1; /*0x71db1e*/
  this->RadarInvisible = 1; /*0x71db24*/
  this->LegalTarget = 0; /*0x71db2a*/
  this->Insignificant = 1; /*0x71db30*/
  v3 = *(TerrainTypeClass **)&HouseClass_Player[42460]; /*0x71db36*/
  if ( *(int *)&HouseClass_Player[42460] < *(int *)&HouseClass_Player[42452] /*0x71db74*/
    || (HouseClass_Player[42457] || !*(_DWORD *)&HouseClass_Player[42452])
    && *(int *)&HouseClass_Player[42464] > 0
  bool v4; // zf
    && (v4 = (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player[42444] + 8))(
               &HouseClass_Player[42444],
               *(_DWORD *)&HouseClass_Player[42452] + *(_DWORD *)&HouseClass_Player[42464],
               0) == 0,
        v3 = *(TerrainTypeClass **)&HouseClass_Player[42460],
        !v4) )
  {
    *(_DWORD *)&HouseClass_Player[42460] = &v3->__pad_0[1]; /*0x71db79*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player[42448] + 4 * (_DWORD)v3) = this; /*0x71db83*/
    v3 = *(TerrainTypeClass **)&HouseClass_Player[42460]; /*0x71db86*/
  }
  int v5 = 0; /*0x71db8b*/
  if ( (int)v3 <= 0 ) /*0x71db8f*/
  {
LABEL_11:
    v5 = -1; /*0x71dba3*/
  }
  else
  {
    v6 = *(CCINIClass **)&HouseClass_Player[42448]; /*0x71db91*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x71db99*/
    {
      ++v5; /*0x71db9b*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x71db9c*/
      if ( v5 >= (int)v3 ) /*0x71dba1*/
        goto LABEL_11; /*0x71dba1*/
    }
  }
  this->ArrayIndex = v5; /*0x71dba6*/
  this->Strength = -1; /*0x71dbac*/
  this->Armor = 6; /*0x71dbb6*/
  return this; /*0x71dbc2*/
}
}

// 0x71DEA0
void TerrainTypeClass::LoadFromINI(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char Bool_Overwrite; // al
  Color *v7; // eax
  char **v9; // eax
  int PixelData; // eax
  int Coord; // eax
  int Int_Overwrite; // eax
  double Double_Overwrite; // st7
  CCINIClass *v16; // eax
  INIClass *v19; // ecx
  char aP3_4; // [esp+4h] [ebp-218h]
  INIClass *aP3_4a; // [esp+4h] [ebp-218h]
  CCINIClass v23; // [esp+18h] [ebp-204h] BYREF
  INIClass::ResetSection(aP1); /*0x71deb3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x71debb*/
    return 0; /*0x71e0b5*/
  if ( this->Strength == -1 ) /*0x71decf*/
    this->Strength = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 4420); /*0x71dedc*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x71def6*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_830620[82020],
                     this->IsVeinhole);
  this->IsVeinhole = Bool_Overwrite; /*0x71defd*/
  if ( Bool_Overwrite ) /*0x71df03*/
  {
    this->IsLogic = 0; /*0x71df05*/
    this->LegalTarget = 1; /*0x71df0c*/
  }
  char v4 = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_81AE4C, this->WaterBound); /*0x71df22*/
  bool v5 = this->SpawnsTiberium; /*0x71df27*/
  this->WaterBound = v4; /*0x71df2d*/
  char v6; // al
  v6 = INIClass::ReadBool_Overwrite( /*0x71df3c*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620[82004],
         v5);
  aP3_4 = this->IsFlammable; /*0x71df49*/
  this->SpawnsTiberium = v6; /*0x71df50*/
  this->IsFlammable = INIClass::ReadBool_Overwrite( /*0x71df5b*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620[81992],
                             aP3_4);
  v7 = (Color *)INIClass::LookupEnum( /*0x71df79*/
                  (unsigned __int8 ***)&DataGlobal_87F8E4[30876],
                  (unsigned __int8 *)(this + 504),
                  (unsigned __int8 *)g_INI_Key_Foundation,
                  this->Foundation);
  int v8 = 5 * (_DWORD)v7; /*0x71df7e*/
  this->Foundation = v7; /*0x71df81*/
  LOBYTE(v7) = this->Theater; /*0x71df87*/
  this->FoundationData = 8 * v8 + 11595200; /*0x71df96*/
  if ( !(_BYTE)v7 ) /*0x71df9c*/
  {
    _makepath((char *)v23.headNode, 0, 0, (const char *)(this + 504), Ext); /*0x71dfad*/
    this->Image = SearchMIXFile((char *)v23.headNode, 0); /*0x71dfc0*/
  }
  v9 = (char **)(*(int (__thiscall **)(int))(this->Armor)(this); /*0x71dfca*/
  if ( v9 ) /*0x71dfd2*/
  {
    PixelData = MixFileClass::GetPixelData(v9, (int)&v23, 0); /*0x71dfdd*/
    this->RadarColor = *(_WORD *)PixelData; /*0x71dfeb*/
    this->q29E = *(_BYTE *)(PixelData + 2); /*0x71dff5*/
  }
  Coord = INIClass::GetCoord( /*0x71e00c*/
            aP1,
            &v23,
            (INIClass *)(this + 36),
            (Color *)&stru_830620[12040],
            (Color *)(this + 668));
  bool v12 = this->IsAnimated; /*0x71e014*/
  this->RadarColor = *(_WORD *)Coord; /*0x71e01a*/
  this->q29E = *(_BYTE *)(Coord + 2); /*0x71e02a*/
  char v13; // al
  v13 = INIClass::ReadBool_Overwrite( /*0x71e02d*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[81980],
          v12);
  aP3_4a = this->AnimationRate; /*0x71e03a*/
  this->IsAnimated = v13; /*0x71e041*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x71e047*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620[81964],
                    aP3_4a);
  double aP3 = this->AnimationProbability; /*0x71e04c*/
  this->AnimationRate = Int_Overwrite; /*0x71e057*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x71e066*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620[81940],
                       (INIClass *)LODWORD(aP3));
  v16 = this->TemperateOccupationBits; /*0x71e06b*/
  this->AnimationProbability = Double_Overwrite; /*0x71e073*/
  int v18; // eax
  v18 = INIClass::ReadInt_Overwrite( /*0x71e080*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[81916],
          (INIClass *)v16);
  v19 = this->SnowOccupationBits; /*0x71e085*/
  this->TemperateOccupationBits = v18; /*0x71e08b*/
  this->SnowOccupationBits = INIClass::ReadInt_Overwrite( /*0x71e0a0*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620[81896],
                              v19);
  return 1; /*0x71e0a7*/
}
}

// 0x71E2A0
void * TerrainTypeClass::FindOrCreate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x71e2bc*/
    return 0; /*0x71e31f*/
  int v2 = 0; /*0x71e2cd*/
  if ( *(int *)&HouseClass_Player[42460] <= 0 ) /*0x71e2d1*/
  {
LABEL_6:
    _DWORD * v3 = (_DWORD *)__2_YAPAXI_Z(0x2BCu); /*0x71e2f6*/
    if ( v3 ) /*0x71e305*/
      return (TerrainTypeClass *)TerrainTypeClass::TerrainTypeClass(v3, this); /*0x71e311*/
    return 0; /*0x71e305*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[42448] + 4 * v2) + 36), this) ) /*0x71e2ea*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player[42460] ) /*0x71e2f4*/
      goto LABEL_6; /*0x71e2f4*/
  }
  return *(TerrainTypeClass **)(*(_DWORD *)&HouseClass_Player[42448] + 4 * v2); /*0x71e30f*/
}
}

// 0x71E360
TerrainTypeClass * TerrainTypeClass::ddtor(AbstractClass *a2, char a3)
{
    void *v3 = this->Image;
    if ( v3 )
    {
        OperatorDelete(v3);
        this->Image = 0;
    }
    AbstractClass::AnnounceExpiredPointer(this, 1);
    TerrainTypeClass* v7 = this;
    int v5 = SmudgeTypeRegistryX.FindItemIndex(&v7);
    if ( v5 != -1 && v5 < SmudgeTypeRegistryX_Count )
    {
        --SmudgeTypeRegistryX_Count;
        for ( ; v5 < SmudgeTypeRegistryX_Count ; *(SmudgeTypeRegistryX_Items + v5 - 1) = *(SmudgeTypeRegistryX_Items + v5) )
        {
            ++v5;
        }
    }
    ObjectTypeClass::Destruct(this);
    if ( a3 & 1 )
        OperatorDelete(this);
    return this;
}
}

// 0x53FFA0
int TerrainTypeClass::GetTileData(AnimClass * aP1, void * a2, signed int * a3, unsigned int * a4, unsigned short * a5, unsigned int * a6)
{
{
    IPXGlobalConnClass *v7;
    int TileType;
    int v9;
    int v10;
    int *v11;
    v7 = (IPXGlobalConnClass *)this->Foundation;
    if ( *(int *)v7[1].__pad_0 < (int)aP1 )
    return 0;
    TileType = Terrain::GetTileType(v7, aP1);
    if ( !TileType || (*(char *)TileType & 2) != 0 )
    return 0;
    v9 = *(int *)(TileType + 12);
    v10 = *(int *)(TileType + 8) - 16;
    if ( v10 > 0 )
    qmemcpy(a2, (const void *)(v9 + 16), v10);
    *a3 = v10;
    *a5 = *(short *)(v9 + 14);
    v11 = *(int **)(TileType + 20);
    *a4 = *v11;
    *((int*)(a4) + 1) = v11[1];
    *((int*)(a4) + 2) = v11[2];
    if ( a6 )
    *a6 = *(int *)(v9 + 4);
    return 1;
}
}

// 0x71DDD0
bool TerrainTypeClass::GetHeight(TerrainClass * aP2, int a3)
{
{
    void **v4;
    v4 = (void **)__2_YAPAXI_Z(0xE0u);
    return v4 && TerrainClass::Construct(v4, this, aP2);
}
}

// 0x71DE10
TerrainClass * TerrainTypeClass::GetTileIndex(int a2)
{
{
    void **v3;
    v3 = (void **)__2_YAPAXI_Z(0xE0u);
    if ( v3 )
    return TerrainClass::Construct(v3, this, (TerrainClass *)&DataGlobal_B05488[39156]);
    else
    return 0;
}
}

// 0x71E0D0
unsigned int * TerrainTypeClass::GetWidth(unsigned int * a1, int * a2)
{
{
    int GroundHeight;
    int v3;
    int v5;
    int v6;
    int v7;
    v5 = *a2;
    v6 = *((int*)(a2) + 1);
    v7 = *((int*)(a2) + 2);
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 < GroundHeight )
    v3 = Cell::GetGroundHeight(&v5);
    *a1 = v5;
    *((int*)(a1) + 1) = v6;
    *((int*)(a1) + 2) = v3;
    return a1;
}
}

// 0x71E140
int TerrainTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->ArrayIndex);
    LOBYTE(v3) = this->WaterBound;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->SpawnsTiberium;
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->IsFlammable;
    Power::FlagProcess(a2, v5);
    Power::TimerProcess(this->Foundation);
    LOBYTE(v6) = this->IsAnimated;
    Power::FlagProcess(a2, v6);
    Power::TimerProcess(this->AnimationRate);
    return Checksummer::Add_float((unsigned int *)a2, this->AnimationProbability);
}
}

// 0x71E1D0
int TerrainTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TerrainTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TerrainTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TerrainTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_TerrainTypeClass;
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0);
    ObjectTypeClass::Load2DArt(aP0->__pad_0);
    *(int *)aP0[1].__pad_24 = 40 * *(int *)&aP0[1].__pad_0[4] + 11595200;
    return 0;
  }
    return result;
}
}

// 0x71E240
int TerrainTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// 0x71E260
int TerrainTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862011;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// 0x71E330
int TerrainTypeClass::GetTypeIdentifier()
{
return 37;
}

// 0x71E340
int TerrainTypeClass::GetObjectSize()
{
return 700;
}

// 0x71E350
int TerrainTypeClass::GetAuxField()
{
{
    return this->Foundation;
}
}
