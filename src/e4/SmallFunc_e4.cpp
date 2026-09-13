// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5AFEF0_e4.hpp"
#include "e4/classes/E4Recv_728A00_e4.hpp"

// 0x40D1B0
namespace gamemd {
void sub_40D1B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40D1B0()
{
  int *v0; // esi
  int v1; // edi

  MEMORY[0x87F7E8].field_0 = (struct IUnknownVtbl *)&MouseClass::`vftable'; /*0x40d1b2*/
  MEMORY[0x884D00] = (int)&vt_MouseClass; /*0x40d1bc*/
  v0 = &MEMORY[0x884B84]; /*0x40d1c6*/
  v1 = 4; /*0x40d1cb*/
  do /*0x40d1f0*/
  {
    v0 -= 997; /*0x40d1d0*/
    Array::ForEachReverse((int)(v0 + 20), 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x40d1e3*/
    nullsub_57(v0); /*0x40d1ea*/
    --v1; /*0x40d1ef*/
  }
  while ( v1 ); /*0x40d1f0*/
  RadarClass::Destruct(&MEMORY[0x87F7E8]); /*0x40d1f7*/
}
}
} // namespace gamemd

// 0x59B6D0
namespace gamemd {
int sub_59B6D0()
{
{
    int result;
    int *i;
    signed int j;
    int *NeighbourContent;
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
    for ( i = (int *)result; result; i = (int *)result )
  {
    if ( CellClass::IsTerrainType(i) )
    {
    for ( j = 0; j < 8; j += 2 )
      {
    NeighbourContent = Cell::GetNeighbourContent(i, j);
    if ( Cell::IsEmpty(NeighbourContent) )
    NeighbourContent[14] = DataGlobal_AA0E18;
      }
    }
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
  }
    return result;
}
}
} // namespace gamemd

// 0x59C530
namespace gamemd {
int sub_59C530()
{
{
    int result;
    int v1;
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    for ( result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
    re sult;
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) {
    v1 = *(int *)(result + 56);
    if ( v1 >= DataGlobal_ABAD28 && v1 < DataGlobal_ABAD28 + 42 )
    {
    *(int *)(result + 56) = 0;
    *(char *)(result + 282) = 0;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5A1F60
namespace gamemd {
char sub_5A1F60()
{
{
    char v0;
    int i;
    v0 = 1;
    Mouse::SetBounds((int)&DataGlobal_87F7E8, 0);
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    if ( !v0 )
    break;
    v0 = Cliff::ProcessTransitions(i, -1);
  }
    return v0;
}
}
} // namespace gamemd

// 0x5AFEF0
namespace gamemd {
int E4Recv_5AFEF0::sub_5AFEF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5AFEF0(int this)
{
  int v2; // eax

  LocomotionClass::Init((_DWORD *)this); /*0x5afef3*/
  this->M24 = g_MatrixTransformState; /*0x5aff01*/
  this->M28 = MEMORY[0xABEE14]; /*0x5aff0a*/
  this->M32 = MEMORY[0xABEE18]; /*0x5aff16*/
  this->M36 = g_MatrixTransformState; /*0x5aff1e*/
  this->M40 = MEMORY[0xABEE14]; /*0x5aff26*/
  v2 = MEMORY[0xABEE18]; /*0x5aff29*/
  *(_BYTE *)(this + 48) = 0; /*0x5aff2e*/
  *(_DWORD *)this = &MechLocomotionClass::`vftable'; /*0x5aff32*/
  this->M44 = v2; /*0x5aff38*/
  this->M4 = &vt_MechLocomotionClass; /*0x5aff3b*/
  return this; /*0x5aff44*/
}
}
} // namespace gamemd

// 0x67B500
namespace gamemd {
int SmallFunc_67B500(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(a1, edx0, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return WarheadTypeClass::FindOrCreate(Destination[0].__pad_0);
    else
    return a4;
}
}
} // namespace gamemd

// 0x67BCE0
namespace gamemd {
BuildingTypeClass * SmallFunc_67BCE0(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&DataGlobal_87C374.__pad_579C[33876], Destination, 128) )
    return BuildingTypeClass::FindOrCreate(Destination[0].__pad_0);
    else
    return (BuildingTypeClass *)a4;
}
}
} // namespace gamemd

// 0x67BD80
namespace gamemd {
TerrainTypeClass * SmallFunc_67BD80(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(a1, edx0, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return TerrainTypeClass::FindOrCreate(Destination[0].__pad_0);
    else
    return (TerrainTypeClass *)a4;
}
}
} // namespace gamemd

// 0x6E2660
namespace gamemd {
char sub_6E2660(int a1, int a2, int a3, int a4)
{
{
    g_RadarBlipPool = 0;
    g_RadarBlipManager = 0;
    DataGlobal_880994 = -1;
    Mouse::SetBounds((int)&DataGlobal_87F7E8, 0);
    BuildingClass::TogglePower2(&DataGlobal_87F7E8, 0);
    BuildingClass::TogglePower(&DataGlobal_87F7E8, 0);
    DataGlobal_88099A = 0;
    DataGlobal_88099B = 0;
    DataGlobal_88099C = 0;
    Scenario::ClearScreen();
    return 1;
}
}
} // namespace gamemd

// 0x6E3120
namespace gamemd {
char SmallFunc_6E3120(int _8, _UNKNOWN ** a1, unsigned int * a2, IUnknown * aP3, int _18, unsigned int * a5, int a7)
{
{
    int v7;
    _UNKNOWN **v8;
    int *v9;
    void *v10;
    int Field11;
    v10 = *(void **)(v7 + 144);
    if ( !a2 )
    return 0;
    if ( v10 == (void *)8997 )
  {
    Field11 = Property::GetField11(a2);
  }
    else
  {
    if ( v10 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v10) )
    Field11 = BuildingType::FindOwnerHouse(v10);
    else
    Field11 = HouseClass::FindOwner(v10);
  }
    if ( !Field11 )
    return 0;
    HouseClass::RespawnStartingBuildings(Field11, v8, v9, (int)v10);
    return 1;
}
}
} // namespace gamemd

// 0x6F19B0
namespace gamemd {
int SmallFunc_6F19B0(char * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SmallFunc_6F19B0(char *a1, int a2)
{
  int result; // eax
  int v4; // ebp
  CCINIClass *i; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  _DWORD *v8; // eax
  TeamTypeClass *v9; // esi
  char Source[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(a1, (INIClass *)&stru_830620.__pad_579C[54080]); /*0x6f19c1*/
  v4 = result; /*0x6f19c6*/
  for ( i = 0; (int)i < v4; *(_DWORD *)v9[2].__pad_0 = a2 ) /*0x6f19cc*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (CCINIClass *)&stru_830620.__pad_579C[54080], i); /*0x6f19db*/
    INIClass::GetString( /*0x6f19f4*/
      (unsigned __int8 ***)a1,
      (INIClass *)&stru_830620.__pad_579C[54080],
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Source,
      32);
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f1a19*/
      goto LABEL_10; /*0x6f1a19*/
    v7 = 0; /*0x6f1a2a*/
    if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[452] > 0 ) /*0x6f1a2e*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * v7) + 36), Source) ) /*0x6f1a4c*/
      {
        if ( ++v7 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[452] ) /*0x6f1a56*/
          goto LABEL_7; /*0x6f1a56*/
      }
      v9 = *(TeamTypeClass **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * v7); /*0x6f1a7f*/
      goto LABEL_11; /*0x6f1a82*/
    }
LABEL_7:
    v8 = (_DWORD *)__2_YAPAXI_Z(0xF8u); /*0x6f1a5d*/
    if ( v8 ) /*0x6f1a67*/
      v9 = (TeamTypeClass *)TechnoTypeClass::LoadBase(v8, Source); /*0x6f1a75*/
    else
LABEL_10:
      v9 = 0; /*0x6f1a84*/
LABEL_11:
    result = (*(int (__thiscall **)(TeamTypeClass *, char *))(*(_DWORD *)v9->__pad_0 + 100))(v9, a1); /*0x6f1a86*/
    i = (CCINIClass *)((char *)i + 1); /*0x6f1a8e*/
  }
  return result; /*0x6f1aa2*/
}
}
} // namespace gamemd

// 0x728A00
namespace gamemd {
int E4Recv_728A00::sub_728A00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_728A00(int this)
{
  LocomotionClass::Init((_DWORD *)this); /*0x728a03*/
  this->M24 = 0; /*0x728a0d*/
  this->M28 = MEMORY[0xB0F910]; /*0x728a16*/
  this->M32 = MEMORY[0xB0F914]; /*0x728a1e*/
  this->M36 = MEMORY[0xB0F918]; /*0x728a27*/
  this->M40 = MEMORY[0xA8ED84]; /*0x728a30*/
  this->M48 = 0; /*0x728a33*/
  this->M52 = 0; /*0x728a36*/
  *(_BYTE *)(this + 56) = 0; /*0x728a39*/
  *(_DWORD *)this = &TunnelLocomotionClass::`vftable'; /*0x728a3c*/
  this->M4 = &vt_TunnelLocomotionClass; /*0x728a42*/
  return this; /*0x728a4b*/
}
}
} // namespace gamemd
