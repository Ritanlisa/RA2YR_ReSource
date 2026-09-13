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
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_59B6D0()
{
  int result; // eax
  int *i; // ebx
  signed int j; // esi
  _DWORD *NeighbourContent; // edi

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59b6d6*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59b6e0*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x59b6e9*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x59b6ef*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b6f8*/
      {
        NeighbourContent = Cell::GetNeighbourContent(i, j); /*0x59b702*/
        if ( Cell::IsEmpty(NeighbourContent) ) /*0x59b706*/
          NeighbourContent[14] = unk_AA0E18; /*0x59b714*/
      }
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59b724*/
  }
  return result; /*0x59b731*/
}
}
} // namespace gamemd

// 0x59C530
namespace gamemd {
int sub_59C530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_59C530()
{
  int result; // eax
  int v1; // ecx

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59c536*/
  for ( result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59c549*/
        result;
        result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    v1 = *(_DWORD *)(result + 56); /*0x59c54b*/
    if ( v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42 ) /*0x59c55d*/
    {
      *(_DWORD *)(result + 56) = 0; /*0x59c55f*/
      *(_BYTE *)(result + 282) = 0; /*0x59c562*/
    }
  }
  return result; /*0x59c576*/
}
}
} // namespace gamemd

// 0x5A1F60
namespace gamemd {
char sub_5A1F60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5A1F60()
{
  char v0; // bl
  int i; // eax

  v0 = 1; /*0x5a1f68*/
  Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x5a1f6a*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a1f74*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x5a1f85*/
  {
    if ( !v0 ) /*0x5a1f89*/
      break; /*0x5a1f89*/
    v0 = Cliff::ProcessTransitions(i, -1); /*0x5a1f9d*/
  }
  return v0; /*0x5a1faa*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SmallFunc_67B500(unsigned __int8 ***a1, INIClass *edx0, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a1, edx0, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], Destination, 128) ) /*0x67b51e*/
    return WarheadTypeClass::FindOrCreate(Destination[0].__pad_0); /*0x67b52b*/
  else
    return a4; /*0x67b539*/
}
}
} // namespace gamemd

// 0x67BCE0
namespace gamemd {
BuildingTypeClass * SmallFunc_67BCE0(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BuildingTypeClass *__fastcall SmallFunc_67BCE0(unsigned __int8 ***a0, INIClass *aP1, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&stru_87C374.__pad_579C[33876], Destination, 128) ) /*0x67bcfe*/
    return BuildingTypeClass::FindOrCreate(Destination[0].__pad_0); /*0x67bd0b*/
  else
    return (BuildingTypeClass *)a4; /*0x67bd19*/
}
}
} // namespace gamemd

// 0x67BD80
namespace gamemd {
TerrainTypeClass * SmallFunc_67BD80(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TerrainTypeClass *__fastcall SmallFunc_67BD80(unsigned __int8 ***a1, INIClass *edx0, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a1, edx0, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], Destination, 128) ) /*0x67bd9e*/
    return TerrainTypeClass::FindOrCreate(Destination[0].__pad_0); /*0x67bdab*/
  else
    return (TerrainTypeClass *)a4; /*0x67bdb9*/
}
}
} // namespace gamemd

// 0x6E2660
namespace gamemd {
char sub_6E2660(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_6E2660(int a1, int a2, int a3, int a4)
{
  MEMORY[0x88098C] = 0; /*0x6e2669*/
  MEMORY[0x880990] = 0; /*0x6e266f*/
  MEMORY[0x880994] = -1; /*0x6e2675*/
  Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x6e267f*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x6e268a*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x6e2695*/
  MEMORY[0x88099A] = 0; /*0x6e269a*/
  MEMORY[0x88099B] = 0; /*0x6e26a0*/
  MEMORY[0x88099C] = 0; /*0x6e26a6*/
  Scenario::ClearScreen(); /*0x6e26ac*/
  return 1; /*0x6e26b3*/
}
}
} // namespace gamemd

// 0x6E3120
namespace gamemd {
char SmallFunc_6E3120(int _8, _UNKNOWN ** a1, unsigned int * a2, IUnknown * aP3, int _18, unsigned int * a5, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char SmallFunc_6E3120(int _8, _UNKNOWN **a1, _DWORD *a2, IUnknown *aP3, int _18, _DWORD *a5, int a7)
{
  int v7; // ecx
  _UNKNOWN **v8; // ebx
  _DWORD *v9; // edi
  void *v10; // esi
  int Field11; // eax

  v10 = *(void **)(v7 + 144); /*0x6e3121*/
  if ( !a2 ) /*0x6e312d*/
    return 0; /*0x6e312d*/
  if ( v10 == (void *)8997 ) /*0x6e3135*/
  {
    Field11 = Property::GetField11(a2); /*0x6e3137*/
  }
  else
  {
    if ( v10 == (void *)-1 ) /*0x6e3141*/
      return 0; /*0x6e3163*/
    if ( BuildingType::IsSpecialType(v10) ) /*0x6e3145*/
      Field11 = BuildingType::FindOwnerHouse(v10); /*0x6e3150*/
    else
      Field11 = HouseClass::FindOwner(v10); /*0x6e3157*/
  }
  if ( !Field11 ) /*0x6e315e*/
    return 0; /*0x6e315e*/
  HouseClass::RespawnStartingBuildings(Field11, v8, v9, (int)v10); /*0x6e3168*/
  return 1; /*0x6e3162*/
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
