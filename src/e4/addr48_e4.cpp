// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x483710
namespace gamemd {
char sub_483710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_483710(int this)
{
  int BuildingByTiberiumType; // eax
  int v3; // eax
  IUnknown *v4; // eax

  if ( !*(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13478) ) /*0x483718*/
    return 0; /*0x483718*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(IUnknown **)(this + 68)); /*0x483725*/
  if ( BuildingByTiberiumType == -1 ) /*0x48372d*/
    return 0; /*0x48372d*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * BuildingByTiberiumType); /*0x483735*/
  if ( *(_BYTE *)(this + 284) /*0x483766*/
    || *(unsigned __int8 *)(this + 286) >= *(_DWORD *)(v3 + 228) - 1
    || *(double *)(v3 + 176) < 0.00001 )
  {
    return 0; /*0x48377c*/
  }
  v4 = (IUnknown *)FindBuildingByTiberiumType(*(IUnknown **)(this + 68)); /*0x48376b*/
  return Crate::FindPlacement(this, v4, 1); /*0x48377a*/
}
}
} // namespace gamemd

// 0x484A80
namespace gamemd {
int sub_484A80(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_484A80(int a1)
{
  ++*(_DWORD *)(a1 + 404); /*0x484a84*/
  return a1; /*0x484a8a*/
}
}
} // namespace gamemd

// 0x484F50
namespace gamemd {
int sub_484F50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_484F50(int this)
{
  int v2; // ecx
  int result; // eax
  int *v4; // edx
  _DWORD *v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  _BYTE v8[40]; // [esp+4h] [ebp-28h] BYREF

  v2 = 0; /*0x484f56*/
  result = *(_DWORD *)(this + 228); /*0x484f58*/
  if ( result ) /*0x484f60*/
  {
    v4 = (int *)v8; /*0x484f62*/
    do /*0x484f76*/
    {
      if ( v2 >= 10 ) /*0x484f69*/
        break; /*0x484f69*/
      *v4 = result; /*0x484f6b*/
      result = *(_DWORD *)(result + 48); /*0x484f6d*/
      ++v2; /*0x484f70*/
      ++v4; /*0x484f71*/
    }
    while ( result ); /*0x484f76*/
  }
  if ( v2 > 0 ) /*0x484f7a*/
  {
    v5 = v8; /*0x484f7f*/
    v6 = v2; /*0x484f83*/
    do /*0x484fd8*/
    {
      v7 = (_DWORD *)*v5; /*0x484f85*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v5 + 460))(*v5, 0); /*0x484f8d*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 1 /*0x484fa9*/
        || (result = (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7), result == 2) )
      {
        if ( !v7[413] ) /*0x484fab*/
          WinAPI::Wrapper(-2147467261); /*0x484fba*/
        result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v7[413] + 124))( /*0x484fd1*/
                   v7[413],
                   *(unsigned __int8 *)(this + 284));
      }
      ++v5; /*0x484fd4*/
      --v6; /*0x484fd7*/
    }
    while ( v6 ); /*0x484fd8*/
  }
  return result; /*0x484fdd*/
}
}
} // namespace gamemd

// 0x4863A0
namespace gamemd {
bool sub_4863A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_4863A0(int *this)
{
  int v1; // eax

  v1 = *(this + 14); /*0x4863a0*/
  return v1 >= g_CellTileLookup && v1 < g_CellTileLookup + 20 || v1 >= unk_AA1058 && v1 < unk_AA1058 + 12; /*0x4863c7*/
}
}
} // namespace gamemd

// 0x4866D0
namespace gamemd {
bool sub_4866D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_4866D0(int *this)
{
  int v1; // eax

  v1 = *(this + 14); /*0x4866d0*/
  return v1 >= g_CellTileTypeCache && v1 < g_CellTileTypeCache + 15; /*0x4866e6*/
}
}
} // namespace gamemd

// 0x4866F0
namespace gamemd {
bool sub_4866F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_4866F0(int *this)
{
  int v1; // eax

  v1 = *(this + 14); /*0x4866f0*/
  return v1 >= dword_ABBEC4 && v1 < dword_ABBEC4 + 4; /*0x486706*/
}
}
} // namespace gamemd

// 0x486D90
namespace gamemd {
int sub_486D90(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_486D90(_DWORD *this, char a2)
{
  int v3; // ebx
  int v5; // esi
  int v6; // ebp
  bool v7; // cf
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // [esp+8h] [ebp-4h] BYREF
  int v11; // [esp+10h] [ebp+4h]

  v3 = 1 << a2; /*0x486da4*/
  if ( (*(this + 55) & (1 << a2)) == 0 ) /*0x486da8*/
    return -1; /*0x486dab*/
  v5 = 0; /*0x486db5*/
  v6 = 0; /*0x486db7*/
  v7 = 1; /*0x486db9*/
  do /*0x486e22*/
  {
    if ( v7 ) /*0x486dbc*/
    {
      v9 = v5 & 7; /*0x486dc7*/
      v10 = *(this + 9); /*0x486dca*/
      LOWORD(v11) = LOWORD(MEMORY[0x89F688][v9]) + v10; /*0x486dee*/
      HIWORD(v11) = HIWORD(v10) + HIWORD(MEMORY[0x89F688][v9]); /*0x486df3*/
      v10 = v11; /*0x486e02*/
      v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x486e06*/
    }
    else
    {
      v8 = this; /*0x486dbe*/
    }
    if ( (v3 & v8[55]) != 0 ) /*0x486e11*/
      v6 |= 1 << v5; /*0x486e1c*/
    v7 = (unsigned int)++v5 < 8; /*0x486e1f*/
  }
  while ( v5 < 8 ); /*0x486e22*/
  return v6; /*0x486daa*/
}
}
} // namespace gamemd

// 0x4879B0
namespace gamemd {
char sub_4879B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4879B0(_DWORD *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)*(this + 9) << 8) + 128; /*0x4879cf*/
  v2 = ((__int16)HIWORD(*(this + 9)) << 8) + 128; /*0x4879d1*/
  v5[0] = 128; /*0x4879d3*/
  v5[1] = 128; /*0x4879d7*/
  inited = Isometric::InitTables((int)this, v5); /*0x4879e0*/
  v6[0] = v1; /*0x4879e9*/
  v6[1] = v2; /*0x4879f3*/
  v6[2] = inited; /*0x4879f7*/
  return Game::Stub3((int)v6); /*0x487a00*/
}
}
} // namespace gamemd

// 0x487C80
namespace gamemd {
int _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(
        Concurrency::details::SchedulerBase *this)
{
  return *((_DWORD *)this + 62); /*0x487c86*/
}
}
} // namespace gamemd

// 0x487EA0
namespace gamemd {
unsigned int * Coord_Neighbor(unsigned int * a1, unsigned short * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall Coord_Neighbor(_DWORD *a1, _WORD *a2, char a3)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp+4h]

  result = a1; /*0x487ea0*/
  v4 = a3 & 7; /*0x487ea7*/
  LOWORD(v5) = *a2 + LOWORD(MEMORY[0x89F688][v4]); /*0x487ec4*/
  HIWORD(v5) = a2[1] + HIWORD(MEMORY[0x89F688][v4]); /*0x487eca*/
  *result = v5; /*0x487ed3*/
  return result; /*0x487ec9*/
}
}
} // namespace gamemd

// 0x4880D0
namespace gamemd {
int sub_4880D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4880D0()
{
  MEMORY[0x89E7C8] = 0; /*0x4880d2*/
  MEMORY[0x89E7CC] = 0; /*0x4880d7*/
  MEMORY[0x89E7D0] = 0; /*0x4880dc*/
  MEMORY[0x89E7D4] = 0; /*0x4880e1*/
  return 0; /*0x4880e6*/
}
}
} // namespace gamemd

// 0x4880F0
namespace gamemd {
int sub_4880F0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4880F0(int this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v15; // [esp+8h] [ebp-10h] BYREF
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !Control::DispatchClick((_DWORD *)this, a2) ) /*0x4880fb*/
    return 0; /*0x488204*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x488110*/
  v3 = this->uniqueId; /*0x488116*/
  v4 = this->abstractFlags; /*0x488119*/
  v15 = this->vtable3; /*0x48811c*/
  v5 = this->nextArrayIndex; /*0x488120*/
  v16 = v3; /*0x488123*/
  v17 = v4; /*0x488127*/
  v18 = v5; /*0x488133*/
  DrawBuildingTilesSHP(&v15, 0, 0); /*0x488137*/
  if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x488145*/
    v6 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 13); /*0x48814f*/
  else
    v6 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 26); /*0x48815c*/
  v7 = this->uniqueId + 1; /*0x488167*/
  v15 = this->vtable3 + 1; /*0x488168*/
  v8 = this->abstractFlags; /*0x48816c*/
  v16 = v7; /*0x48816f*/
  v9 = this->nextArrayIndex - 1; /*0x488177*/
  v17 = v8 - 1; /*0x488178*/
  v18 = v9; /*0x488183*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v15, v6); /*0x48818e*/
  if ( *(_BYTE *)(this + 45) ) /*0x488191*/
  {
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4881a1*/
      v10 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 4); /*0x4881ab*/
    else
      v10 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 8); /*0x4881b8*/
    v11 = this->uniqueId + 1; /*0x4881c3*/
    v15 = this->vtable3 + 1; /*0x4881c4*/
    v12 = this->abstractFlags; /*0x4881c8*/
    v16 = v11; /*0x4881cb*/
    v13 = this->nextArrayIndex - 1; /*0x4881d3*/
    v17 = v12 - 1; /*0x4881d4*/
    v18 = v13; /*0x4881df*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v15, v10); /*0x4881ea*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x4881f5*/
  return 1; /*0x4881fd*/
}
}
} // namespace gamemd

// 0x488210
namespace gamemd {
int sub_488210(unsigned int a2, unsigned int * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_488210(_BYTE *this, unsigned int a2, _DWORD *a3, int a4)
{
  if ( (a2 & 4) != 0 ) /*0x48821b*/
  {
    if ( *(this + 45) ) /*0x48821d*/
    {
      GadgetClass::Hide(this); /*0x488224*/
      return GadgetClass::ProcessMouseOver(this, a2, a3, 0); /*0x48823a*/
    }
    GadgetClass::Show(this); /*0x48823d*/
  }
  return GadgetClass::ProcessMouseOver(this, a2, a3, 0); /*0x488238*/
}
}
} // namespace gamemd

// 0x488260
namespace gamemd {
int sub_488260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_488260()
{
  MEMORY[0x89E7D8] = 0; /*0x488262*/
  MEMORY[0x89E7DC] = 0; /*0x488267*/
  MEMORY[0x89E7E0] = 0; /*0x48826c*/
  MEMORY[0x89E7E4] = 0; /*0x488271*/
  return 0; /*0x488276*/
}
}
} // namespace gamemd

// 0x488280
namespace gamemd {
int sub_488280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CheckListClass *__thiscall sub_488280(
        _BYTE *this,
        ListClass *aP1,
        int a3,
        int a4,
        ListClass *aP4,
        int a6,
        ControlClass *aP6,
        ListClass *aP7,
        int a9)
{
  ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9); /*0x4882ad*/
  *(this + 372) = 0; /*0x4882b2*/
  *(_DWORD *)this = &CheckListClass::`vftable'; /*0x4882b9*/
  return (CheckListClass *)this; /*0x4882c1*/
}
}
} // namespace gamemd

// 0x488740
namespace gamemd {
int sub_488740()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_488740()
{
  MEMORY[0x89E7E8] = 0; /*0x488742*/
  MEMORY[0x89E7EC] = 0; /*0x488747*/
  MEMORY[0x89E7F0] = 0; /*0x48874c*/
  MEMORY[0x89E7F4] = 0; /*0x488751*/
  return 0; /*0x488756*/
}
}
} // namespace gamemd

// 0x488760
namespace gamemd {
int sub_488760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ColorListClass *__thiscall sub_488760(
        _DWORD *this,
        ListClass *aP1,
        int a3,
        int a4,
        ListClass *aP4,
        int a6,
        ControlClass *aP6,
        ListClass *aP7,
        int a9)
{
  ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9); /*0x48878d*/
  *(this + 94) = 0; /*0x488799*/
  *(this + 95) = 0; /*0x48879f*/
  *((_BYTE *)this + 384) = 1; /*0x4887a5*/
  *((_BYTE *)this + 385) = 0; /*0x4887ab*/
  *(this + 93) = &DynamicVectorClass<int>::`vftable'; /*0x4887b1*/
  *(this + 98) = 10; /*0x4887bb*/
  *(this + 97) = 0; /*0x4887c5*/
  *(this + 100) = 0; /*0x4887cb*/
  *(this + 99) = 1; /*0x4887d1*/
  *this = &ColorListClass::`vftable'; /*0x4887d7*/
  return (ColorListClass *)this; /*0x4887df*/
}
}
} // namespace gamemd

// 0x4887F0
namespace gamemd {
int sub_4887F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4887F0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  void *v4; // eax

  v2 = *(this + 93); /*0x4887f5*/
  v3 = this + 93; /*0x4887fb*/
  *this = &ColorListClass::`vftable'; /*0x488803*/
  (*(void (__thiscall **)(_DWORD *))(v2 + 12))(this + 93); /*0x488809*/
  *(this + 100) = 0; /*0x48880e*/
  v4 = (void *)v3[1]; /*0x488814*/
  *v3 = &VectorClass<int>::`vftable'; /*0x488819*/
  if ( v4 && *((_BYTE *)v3 + 13) ) /*0x488821*/
  {
    __3_YAXPAX_Z(v4); /*0x488827*/
    v3[1] = 0; /*0x48882f*/
  }
  *((_BYTE *)v3 + 13) = 0; /*0x488834*/
  v3[2] = 0; /*0x488837*/
  return ListClass::Destruct(this); /*0x48883f*/
}
}
} // namespace gamemd

// 0x488F70
namespace gamemd {
int sub_488F70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_488F70()
{
  MEMORY[0x89E800] = 0; /*0x488f72*/
  MEMORY[0x89E804] = 0; /*0x488f77*/
  MEMORY[0x89E808] = 0; /*0x488f7c*/
  MEMORY[0x89E80C] = 0; /*0x488f81*/
  return 0; /*0x488f86*/
}
}
} // namespace gamemd

// 0x488F90
namespace gamemd {
void sub_488F90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_488F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x488f9c*/
  MEMORY[0x89E818] = Math::Sqrt(v0 + v0); /*0x488fae*/
}
}
} // namespace gamemd

// 0x488FC0
namespace gamemd {
void sub_488FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_488FC0()
{
  MEMORY[0x89E868] = MEMORY[0x89E818] / 60.0; /*0x488fcc*/
}
}
} // namespace gamemd

// 0x488FE0
namespace gamemd {
void sub_488FE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_488FE0()
{
  MEMORY[0x89E850] = 1.0 / MEMORY[0x89E868]; /*0x488fec*/
}
}
} // namespace gamemd

// 0x489000
namespace gamemd {
void sub_489000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_489000()
{
  MEMORY[0x89E848] = 0.0174532925199433 * 45.0; /*0x48900c*/
}
}
} // namespace gamemd

// 0x489020
namespace gamemd {
void sub_489020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_489020()
{
  MEMORY[0x89E820] = 0.0174532925199433 * 60.0; /*0x48902c*/
}
}
} // namespace gamemd

// 0x489040
namespace gamemd {
void sub_489040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_489040()
{
  MEMORY[0x89E7F8] = 0.0174532925199433 * 90.0; /*0x48904c*/
}
}
} // namespace gamemd

// 0x489060
namespace gamemd {
long long sub_489060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_489060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E7F8] - MEMORY[0x89E820]); /*0x489072*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E818] * 0.5); /*0x489086*/
  MEMORY[0x89E870] = result; /*0x48908b*/
  return result; /*0x489090*/
}
}
} // namespace gamemd

// 0x4890A0
namespace gamemd {
void sub_4890A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4890A0()
{
  MEMORY[0x89E828] = Math::ArcTan((double)MEMORY[0x89E870] * 0.00390625); /*0x4890b7*/
}
}
} // namespace gamemd

// 0x4890D0
namespace gamemd {
void sub_4890D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4890D0()
{
  MEMORY[0x89E840] = Math::ArcTan((double)(2 * MEMORY[0x89E870]) / MEMORY[0x89E818]); /*0x4890f2*/
}
}
} // namespace gamemd

// 0x489100
namespace gamemd {
long long sub_489100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_489100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E870]) + 0.5); /*0x48911b*/
  MEMORY[0x89E864] = result; /*0x489120*/
  return result; /*0x489126*/
}
}
} // namespace gamemd

// 0x489130
namespace gamemd {
int sub_489130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_489130()
{
  MEMORY[0x89E810] = 0; /*0x489132*/
  MEMORY[0x89E812] = 0; /*0x489138*/
  return 0; /*0x48913e*/
}
}
} // namespace gamemd

// 0x489140
namespace gamemd {
int sub_489140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_489140()
{
  MEMORY[0x89E830] = 0; /*0x489142*/
  MEMORY[0x89E834] = 0; /*0x489147*/
  MEMORY[0x89E838] = 0; /*0x48914c*/
  return 0; /*0x489151*/
}
}
} // namespace gamemd

// 0x489160
namespace gamemd {
int sub_489160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_489160()
{
  MEMORY[0x89E860] = 0; /*0x489165*/
  MEMORY[0x89E858] = 128; /*0x48916f*/
  MEMORY[0x89E85C] = 128; /*0x489174*/
  return 128; /*0x489179*/
}
}
} // namespace gamemd

// 0x489180
namespace gamemd {
int Network_SendTimestamp(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_SendTimestamp(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  double v7; // st7
  int v8; // ecx
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]

  v4 = a1; /*0x489184*/
  if ( !a1 || (*(_BYTE *)MEMORY[0xA8B230] & 0x20) != 0 || !a2 ) /*0x4891a5*/
    return 0; /*0x489263*/
  if ( a1 < 0 )
    return a4 >= 8 ? 0 : a1;
  v7 = (double)a1; /*0x4891c6*/
  v9 = v7; /*0x4891ca*/
  v10 = v7 * *(float *)(a2 + 300); /*0x4891d4*/
  v8 = Math::RoundToInt(*(float *)(a2 + 292) * 256.0); /*0x4891f1*/
  if ( v10 != v9 && v8 ) /*0x489200*/
    v4 = Math::RoundToInt((v9 - v10) * (double)(v8 - a4) / (double)v8 + v10); /*0x489225*/
  result = Math::RoundToInt((double)(v4 <= 0 ? 0 : v4) * *(double *)(a2 + 8 * a3 + 160));
  if ( result >= *((_DWORD *)MEMORY[0x8871E0] + 1458) ) /*0x489257*/
    return *((_DWORD *)MEMORY[0x8871E0] + 1458); /*0x48925a*/
  return result; /*0x4891b8*/
}
}
} // namespace gamemd

// 0x489270
namespace gamemd {
void CellChainReact()
{
  ;
}
} // namespace gamemd

// 0x489280
namespace gamemd {
int PlaySoundEffectAt(TechnoClass * aP0, IUnknown * aP1, unsigned int * a2, ObjectClass * aP3, char a5, int aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __fastcall PlaySoundEffectAt(TechnoClass *aP0, IUnknown *aP1, _DWORD *a2, ObjectClass *aP3, char a5, int aP6)
// {
//   ObjectClass *v8; // esi
//   VectorClass *v9; // eax
//   double v10; // st7
//   int v11; // eax
//   int v12; // ebx
//   int v13; // eax
//   int v14; // ecx
//   IUnknown *v15; // eax
//   int v16; // eax
//   IUnknown *v17; // eax
//   int v18; // eax
//   IUnknown *v19; // eax
//   int v20; // eax
//   int v21; // ecx
//   __int16 ax29; // ax
//   TechnoClass *v22; // ebx
//   int v24; // eax
//   int v25; // eax
//   int v26; // esi
//   int v27; // eax
//   int v28; // ecx
//   int v29; // edx
//   _DWORD *v30; // ebx
//   int *v31; // ebx
//   _DWORD *eax61a; // eax
//   IUnknown *v32; // eax
//   BuildingTypeClass *v34; // edx
//   double v35; // st7
//   int v36; // eax
//   _DWORD *eax63; // eax
//   IUnknown *v37; // eax
//   double st7_63; // st7
//   BuildingTypeClass *v39; // edx
//   double v41; // st6
//   double v42; // st5
//   _DWORD *eax64; // eax
//   IUnknown *v43; // eax
//   BuildingTypeClass *v44; // edx
//   BuildingTypeClass *v45; // eax
//   double v47; /... [34165 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x48A4F0
namespace gamemd {
int GetWarheadVersusMultiplier(CoordStruct * aP0, BuildingTypeClass * aP1, CoordStruct * aP2, BulletClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall GetWarheadVersusMultiplier(CoordStruct *aP0, BuildingTypeClass *aP1, CoordStruct *aP2, BulletClass *aP3)
{
  CoordStruct *v4; // edi
  int v6; // ecx
  int v7; // ecx
  int v9; // eax
  int v10; // eax

  v4 = aP0; /*0x48a4f3*/
  if ( !aP0 || !aP1 ) /*0x48a501*/
    return 0; /*0x48a501*/
  if ( aP2 == (CoordStruct *)2 /*0x48a54f*/
    && aP1->__pad_14D[0]
    && (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)aP3) + 80) & 0x100) == 0
    && (int)aP3->field_8 < Cell::GetGroundHeight((IUnknown *)aP3) + 2 * *(_DWORD *)&stru_89E138.__pad_71C[28] )
  {
    v6 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3024); /*0x48a557*/
    if ( v6 ) /*0x48a55f*/
    {
      v7 = 35 * v6 - 1; /*0x48a56e*/
      if ( (int)v4 < v7 ) /*0x48a574*/
        v7 = (int)v4; /*0x48a576*/
      return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3012) + 4 * (v7 / 35)); /*0x48a597*/
    }
    return 0; /*0x48a61a*/
  }
  if ( aP1 == *(BuildingTypeClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6068) ) /*0x48a5a5*/
    return *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 756); /*0x48a5b0*/
  v9 = aP1->ChargerBarrels[4]; /*0x48a5b3*/
  if ( !v9 ) /*0x48a5bb*/
    return 0; /*0x48a5bb*/
  if ( aP1->__pad_14D[7] ) /*0x48a5bd*/
    return *(_DWORD *)(aP1->ChargerBarrels[1] /*0x48a5e4*/
                     + 4
                     * Random::Range(
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)(v9 - 1)));
  v10 = 25 * v9 - 1; /*0x48a5ee*/
  if ( (int)v4 >= v10 ) /*0x48a5f4*/
    v4 = (CoordStruct *)v10; /*0x48a5f6*/
  return *(_DWORD *)(aP1->ChargerBarrels[1] + 4 * ((int)v4 / 25)); /*0x48a57d*/
}
}
} // namespace gamemd

// 0x48A620
namespace gamemd {
char CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  unsigned int v7; // eax
  double v10; // st7
  int v11; // esi

  LOBYTE(v7) = MEMORY[0xA8EB78]; /*0x48a620*/
  if ( MEMORY[0xA8EB78] && (v7 = PingPongBuffer::GetWriteOffset(), (unsigned int)dword_ABCD44 >= v7) || (a7 & 0xF) != 0 ) /*0x48a644*/
  {
    LOBYTE(v7) = a6; /*0x48a64a*/
    if ( a6 || a2 && (LOBYTE(v7) = *(_BYTE *)(a2 + 336), (_BYTE)v7) ) /*0x48a662*/
    {
      v10 = *(float *)(a2 + 316); /*0x48a668*/
      if ( v10 <= 0.0 ) /*0x48a679*/
      {
        v11 = (char)(a1 >> 2); /*0x48a6a2*/
        if ( v11 < 63 ) /*0x48a6aa*/
        {
          if ( v11 <= 21 ) /*0x48a6b6*/
            v11 = 21; /*0x48a6b8*/
        }
        else
        {
          v11 = 63; /*0x48a6ac*/
        }
      }
      else
      {
        if ( v10 > 1.0 ) /*0x48a686*/
          v10 = 1.0; /*0x48a68a*/
        v11 = Math::RoundToInt(v10 * 63.0); /*0x48a69b*/
      }
      if ( __2_YAPAXI_Z(0x18u) ) /*0x48a6bf*/
      {
        v7 = ObjectClass::RegisterInArray(a3, a4, a5, v11); /*0x48a6e7*/
        *(_DWORD *)(v7 + 20) |= a7; /*0x48a6ec*/
      }
      else
      {
        MEMORY[0x14] |= a7; /*0x48a6f7*/
        LOBYTE(v7) = 0; /*0x48a6f5*/
      }
    }
  }
  return v7; /*0x48a6ef*/
}
}
} // namespace gamemd

// 0x48A8D0
namespace gamemd {
char Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, unsigned int * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, _DWORD *a6)
{
  double v6; // kr00_8
  char v10; // c0
  int v11[2]; // [esp+10h] [ebp-8h] BYREF

  v6 = a5; /*0x48a8df*/
  if ( !(unsigned __int8)SolveMathTrajectory(a3, a4, a5, (int)&a5) ) /*0x48a8f8*/
    return 0; /*0x48a9c4*/
  if ( a1 ) /*0x48a907*/
  {
    LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a91e*/
    *a6 = a4; /*0x48a92d*/
    return 1; /*0x48a930*/
  }
  else
  {
    SolveMathTrajectory(a3 + 1, a4, v6, (int)v11); /*0x48a94f*/
    if ( v10 ) /*0x48a965*/
      LOWORD(a4) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427); /*0x48a97e*/
    else
      LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a9aa*/
    *a6 = a4; /*0x48a989*/
    return 1; /*0x48a98c*/
  }
}
}
} // namespace gamemd

// 0x48A9D0
namespace gamemd {
char Math_SolveTrajectory(char a1, int a2, int a3, int a4, double a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Math_SolveTrajectory(char a1, int a2, int a3, int a4, double a5, int a6)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // [esp+8h] [ebp-20h]
  double v12; // [esp+8h] [ebp-20h]
  double v13; // [esp+10h] [ebp-18h]
  double v14; // [esp+10h] [ebp-18h]
  double v15; // [esp+18h] [ebp-10h]
  double v16; // [esp+20h] [ebp-8h]

  if ( a4 <= 0 )
  {
    if ( (double)a3 == 0.0 ) /*0x48aa0a*/
      a3 = 0; /*0x48aa0c*/
    v7 = (double)a4; /*0x48aa1a*/
    v16 = (double)a2; /*0x48aa25*/
    v15 = v16 * v16 - v7 * a5; /*0x48aa38*/
    v13 = (double)a3 * (double)a3; /*0x48aa44*/
    v11 = v16 * v16 * v16 * v16 - (v16 * v16 * v7 * a5 + v16 * v16 * v7 * a5) - a5 * a5 * v13; /*0x48aa64*/
    v8 = v7 * v7 / v13 + 1.0 + v7 * v7 / v13 + 1.0; /*0x48aa7a*/
    v14 = v8; /*0x48aa7c*/
    if ( v11 < 0.0 || v8 == 0.0 ) /*0x48aa9c*/
      return 0; /*0x48aa9c*/
    v9 = a1 ? v15 - Math::Sqrt(v11) : Math::Sqrt(v11) + v15;
    v12 = v9 / v14; /*0x48aad4*/
    if ( v12 < 0.0 ) /*0x48aae3*/
    {
      return 0; /*0x48ab12*/
    }
    else
    {
      v10 = Math::Sqrt(v12); /*0x48aaef*/
      *(double *)a6 = Math::ArcTan2_Table(v10 / v16); /*0x48ab06*/
      return 1; /*0x48ab08*/
    }
  }
  else
  {
    *(_DWORD *)a6 = -187466734; /*0x48a9e7*/
    *(_DWORD *)(a6 + 4) = 1072243161; /*0x48a9ed*/
    return 1; /*0x48a9f4*/
  }
}
}
} // namespace gamemd

// 0x48ABC0
namespace gamemd {
bool globalHelper_08ABC0(IUnknown * aP0, int a2, int a3, double a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall globalHelper_08ABC0(IUnknown *aP0, int a2, int a3, double a4)
{
  double v4; // st7
  double v5; // st6
  double v7; // [esp+0h] [ebp-28h]
  double v8; // [esp+8h] [ebp-20h]
  double v9; // [esp+10h] [ebp-18h]
  double v10; // [esp+10h] [ebp-18h]
  double aP0a; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]

  v4 = (double)(int)aP0; /*0x48abd1*/
  v5 = (double)a2; /*0x48abd5*/
  if ( v5 == 0.0 ) /*0x48abe6*/
    v5 = 0.001; /*0x48abea*/
  v8 = (double)a3; /*0x48abf3*/
  v7 = v4 * v4; /*0x48abfb*/
  v9 = v5 * v5; /*0x48ac03*/
  aP0a = v4 * (v7 * v4) - (v7 * v8 * a4 + v7 * v8 * a4) - a4 * a4 * v9; /*0x48ac2c*/
  if ( aP0a < 0.0 ) /*0x48ac3b*/
    return 0; /*0x48ac3d*/
  v12 = v8 * v8 / v9 + 1.0 + v8 * v8 / v9 + 1.0; /*0x48ac5b*/
  if ( v12 == 0.0 ) /*0x48ac6a*/
    return 0; /*0x48ac6c*/
  v10 = v7 - v8 * a4; /*0x48ac8b*/
  return (Math::Sqrt((AbstractClass *)LODWORD(aP0a)) + v10) / v12 >= 0.0 /*0x48ac41*/
      || (v10 - Math::Sqrt((AbstractClass *)LODWORD(aP0a))) / v12 >= 0.0;
}
}
} // namespace gamemd

// 0x48B070
namespace gamemd {
unsigned int * sub_48B070(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_48B070(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x48b07b*/
  *(this + 2) = a2; /*0x48b07e*/
  *((_BYTE *)this + 12) = 1; /*0x48b081*/
  *((_BYTE *)this + 13) = 0; /*0x48b085*/
  *this = &VectorClass<DamageGroup *>::`vftable'; /*0x48b088*/
  if ( a2 ) /*0x48b08e*/
  {
    if ( a3 ) /*0x48b096*/
    {
      *(this + 1) = a3; /*0x48b098*/
      return this; /*0x48b09e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x48b0ad*/
    *((_BYTE *)this + 13) = 1; /*0x48b0b0*/
  }
  return this; /*0x48b09d*/
}
}
} // namespace gamemd

// 0x48B0C0
namespace gamemd {
int sub_48B0C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48B0C0()
{
  MEMORY[0x89E878] = 0; /*0x48b0c2*/
  MEMORY[0x89E87C] = 0; /*0x48b0c7*/
  MEMORY[0x89E880] = 0; /*0x48b0cc*/
  MEMORY[0x89E884] = 0; /*0x48b0d1*/
  return 0; /*0x48b0d6*/
}
}
} // namespace gamemd

// 0x48B0E0
namespace gamemd {
CommBufferClass * sub_48B0E0(int a2, int a3, size_t Size, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CommBufferClass *__thiscall sub_48B0E0(CommBufferClass *this, int a2, int a3, size_t Size, int a5)
{
  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // edi

  *(_DWORD *)this->__pad_0 = &CommBufferClass::`vftable'; /*0x48b0fd*/
  *(_DWORD *)&this->__pad_0[4] = a2; /*0x48b103*/
  this->field_8 = a3; /*0x48b106*/
  *(_DWORD *)this->__pad_C = Size; /*0x48b109*/
  this->field_10 = a5; /*0x48b10c*/
  this->field_24 = __2_YAPAXI_Z(36 * a2); /*0x48b117*/
  this->field_34 = __2_YAPAXI_Z(24 * a3); /*0x48b123*/
  *(_DWORD *)&this->__pad_28[8] = __2_YAPAXI_Z(4 * a2); /*0x48b13a*/
  *((_DWORD *)this + 16) = __2_YAPAXI_Z(4 * a3); /*0x48b143*/
  v6 = 0; /*0x48b14c*/
  if ( *(int *)&this->__pad_0[4] > 0 ) /*0x48b150*/
  {
    v7 = 0; /*0x48b152*/
    do /*0x48b191*/
    {
      *(_DWORD *)(this->field_24 + v7 + 20) = __2_YAPAXI_Z(Size); /*0x48b160*/
      if ( this->field_10 <= 0 ) /*0x48b169*/
        *(_DWORD *)(this->field_24 + v7 + 28) = 0; /*0x48b180*/
      else
        *(_DWORD *)(this->field_24 + v7 + 28) = __2_YAPAXI_Z(this->field_10); /*0x48b177*/
      ++v6; /*0x48b18b*/
      v7 += 36; /*0x48b18c*/
    }
    while ( v6 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b191*/
  }
  v8 = 0; /*0x48b196*/
  if ( this->field_8 > 0 ) /*0x48b19a*/
  {
    v9 = 0; /*0x48b19c*/
    do /*0x48b1db*/
    {
      *(_DWORD *)(v9 + this->field_34 + 12) = __2_YAPAXI_Z(Size); /*0x48b1aa*/
      if ( this->field_10 <= 0 ) /*0x48b1b3*/
        *(_DWORD *)(v9 + this->field_34 + 20) = 0; /*0x48b1ca*/
      else
        *(_DWORD *)(v9 + this->field_34 + 20) = __2_YAPAXI_Z(this->field_10); /*0x48b1c1*/
      ++v8; /*0x48b1d5*/
      v9 += 24; /*0x48b1d6*/
    }
    while ( v8 < this->field_8 ); /*0x48b1db*/
  }
  Struct::ClearAllMemberFlags(this); /*0x48b1df*/
  return this; /*0x48b1e6*/
}
}
} // namespace gamemd

// 0x48B1F0
namespace gamemd {
void sub_48B1F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_48B1F0(CommBufferClass *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  CCINIClass *v5; // edx
  int v6; // ebx
  int v7; // edi
  CCINIClass *v8; // edx

  v2 = 0; /*0x48b1f4*/
  v3 = *(_DWORD *)&this->__pad_0[4]; /*0x48b1f7*/
  *(_DWORD *)this->__pad_0 = &CommBufferClass::`vftable'; /*0x48b1fa*/
  if ( v3 > 0 ) /*0x48b202*/
  {
    v4 = 0; /*0x48b204*/
    do /*0x48b233*/
    {
      __3_YAXPAX_Z(*(void **)(this->field_24 + v4 * 4 + 20)); /*0x48b20e*/
      v5 = (CCINIClass *)this->field_24; /*0x48b213*/
      if ( v5->sectionHead[v4 + 3] ) /*0x48b219*/
        __3_YAXPAX_Z((void *)v5->sectionHead[v4 + 3]); /*0x48b222*/
      ++v2; /*0x48b22d*/
      v4 += 9; /*0x48b22e*/
    }
    while ( v2 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b233*/
  }
  v6 = 0; /*0x48b238*/
  if ( this->field_8 > 0 ) /*0x48b23c*/
  {
    v7 = 0; /*0x48b23e*/
    do /*0x48b26d*/
    {
      __3_YAXPAX_Z(*(void **)(this->field_34 + v7 * 4 + 12)); /*0x48b248*/
      v8 = (CCINIClass *)this->field_34; /*0x48b24d*/
      if ( v8->sectionHead[v7 + 1] ) /*0x48b253*/
        __3_YAXPAX_Z((void *)v8->sectionHead[v7 + 1]); /*0x48b25c*/
      ++v6; /*0x48b267*/
      v7 += 6; /*0x48b268*/
    }
    while ( v6 < this->field_8 ); /*0x48b26d*/
  }
  __3_YAXPAX_Z((void *)this->field_24); /*0x48b273*/
  __3_YAXPAX_Z((void *)this->field_34); /*0x48b27c*/
  __3_YAXPAX_Z(*(void **)&this->__pad_28[8]); /*0x48b285*/
  __3_YAXPAX_Z(*((void **)this + 16)); /*0x48b28e*/
}
}
} // namespace gamemd

// 0x48BB00
namespace gamemd {
ObjectClass * sub_48BB00(void * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_48BB00(void *Block, char a2)
{
  sub_48B1F0(Block); /*0x48bb03*/
  if ( (a2 & 1) != 0 ) /*0x48bb0d*/
    __3_YAXPAX_Z(Block); /*0x48bb10*/
  return (ObjectClass *)Block; /*0x48bb1a*/
}
}
} // namespace gamemd

// 0x48BB20
namespace gamemd {
int sub_48BB20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48BB20()
{
  MEMORY[0x89E888] = 0; /*0x48bb22*/
  MEMORY[0x89E88C] = 0; /*0x48bb27*/
  MEMORY[0x89E890] = 0; /*0x48bb2c*/
  MEMORY[0x89E894] = 0; /*0x48bb31*/
  return 0; /*0x48bb36*/
}
}
} // namespace gamemd

// 0x48BB40
namespace gamemd {
bool sub_48BB40(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_48BB40(int a1, int a2)
{
  int v2; // eax

  BYTE1(a2) &= ~8u; /*0x48bb40*/
  v2 = a2; /*0x48bb43*/
  BYTE1(v2) = BYTE1(a2) & 0xE8; /*0x48bb45*/
  return a2 == v2 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 20))(a1, a2) == 0; /*0x48bb57*/
}
}
} // namespace gamemd

// 0x48BB60
namespace gamemd {
bool sub_48BB60(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_48BB60(int a1)
{
  int v1; // ebp
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // edx
  _DWORD *v7; // eax

  BYTE1(a1) &= ~8u; /*0x48bb61*/
  v1 = a1; /*0x48bb65*/
  v2 = MEMORY[0x87F684]; /*0x48bb68*/
  v3 = a1; /*0x48bb6e*/
  BYTE1(v3) = BYTE1(a1) & 0xE8; /*0x48bb71*/
  if ( !MEMORY[0x87F684] ) /*0x48bb76*/
    goto LABEL_12; /*0x48bb76*/
  v4 = MEMORY[0x87F690]; /*0x48bb78*/
  if ( MEMORY[0x87F690] && *(_DWORD *)MEMORY[0x87F690] == v3 ) /*0x48bb84*/
  {
LABEL_17:
    v7 = (_DWORD *)(v4 + 4); /*0x48bc0b*/
    return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc0e*/
  }
  if ( !MEMORY[0x87F68C] ) /*0x48bb91*/
  {
    qsort(MEMORY[0x87F680], MEMORY[0x87F684], 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x48bba1*/
    v2 = MEMORY[0x87F684]; /*0x48bba6*/
    MEMORY[0x87F690] = 0; /*0x48bbaf*/
    MEMORY[0x87F68C] = 1; /*0x48bbb9*/
  }
  v5 = MEMORY[0x87F680]; /*0x48bbc0*/
  if ( v2 <= 0 ) /*0x48bbc8*/
    goto LABEL_12; /*0x48bbc8*/
  while ( 1 ) /*0x48bbd1*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x48bbd1*/
    v4 = (int)&v5[2 * (v2 / 2)]; /*0x48bbd4*/
    if ( v6 <= v3 ) /*0x48bbd9*/
      break; /*0x48bbd9*/
    v2 /= 2; /*0x48bbdb*/
LABEL_11:
    if ( v2 <= 0 ) /*0x48bbed*/
      goto LABEL_12; /*0x48bbed*/
  }
  if ( v6 != v3 ) /*0x48bbdf*/
  {
    v5 = (_DWORD *)(v4 + 8); /*0x48bbe1*/
    v2 += -1 - v2 / 2; /*0x48bbe9*/
    goto LABEL_11; /*0x48bbe9*/
  }
  if ( v4 ) /*0x48bc03*/
  {
    MEMORY[0x87F690] = (int)&v5[2 * (v2 / 2)]; /*0x48bc05*/
    goto LABEL_17; /*0x48bc05*/
  }
LABEL_12:
  v7 = &unk_B7883C; /*0x48bbef*/
  return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc1d*/
}
}
} // namespace gamemd

// 0x48BC20
namespace gamemd {
int CompareFuncInt(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl CompareFuncInt(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x48bc30*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x48BC50
namespace gamemd {
int sub_48BC50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48BC50()
{
  MEMORY[0x89E8A0] = 0; /*0x48bc52*/
  MEMORY[0x89E8A4] = 0; /*0x48bc57*/
  MEMORY[0x89E8A8] = 0; /*0x48bc5c*/
  MEMORY[0x89E8AC] = 0; /*0x48bc61*/
  return 0; /*0x48bc66*/
}
}
} // namespace gamemd

// 0x48BC70
namespace gamemd {
void sub_48BC70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48BC70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48bc7c*/
  MEMORY[0x89E8B8] = Math::Sqrt(v0 + v0); /*0x48bc8e*/
}
}
} // namespace gamemd

// 0x48BCA0
namespace gamemd {
void sub_48BCA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48BCA0()
{
  MEMORY[0x89E908] = MEMORY[0x89E8B8] / 60.0; /*0x48bcac*/
}
}
} // namespace gamemd

// 0x48BCC0
namespace gamemd {
void sub_48BCC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48BCC0()
{
  MEMORY[0x89E8F0] = 1.0 / MEMORY[0x89E908]; /*0x48bccc*/
}
}
} // namespace gamemd

// 0x48BCE0
namespace gamemd {
void sub_48BCE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48BCE0()
{
  MEMORY[0x89E8E8] = 0.0174532925199433 * 45.0; /*0x48bcec*/
}
}
} // namespace gamemd

// 0x48BD00
namespace gamemd {
void sub_48BD00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48BD00()
{
  MEMORY[0x89E8C0] = 0.0174532925199433 * 60.0; /*0x48bd0c*/
}
}
} // namespace gamemd

// 0x48BD20
namespace gamemd {
void sub_48BD20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48BD20()
{
  MEMORY[0x89E898] = 0.0174532925199433 * 90.0; /*0x48bd2c*/
}
}
} // namespace gamemd

// 0x48BD40
namespace gamemd {
long long sub_48BD40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_48BD40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E898] - MEMORY[0x89E8C0]); /*0x48bd52*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E8B8] * 0.5); /*0x48bd66*/
  MEMORY[0x89E910] = result; /*0x48bd6b*/
  return result; /*0x48bd70*/
}
}
} // namespace gamemd

// 0x48BD80
namespace gamemd {
void sub_48BD80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48BD80()
{
  MEMORY[0x89E8C8] = Math::ArcTan((double)MEMORY[0x89E910] * 0.00390625); /*0x48bd97*/
}
}
} // namespace gamemd

// 0x48BDB0
namespace gamemd {
void sub_48BDB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48BDB0()
{
  MEMORY[0x89E8E0] = Math::ArcTan((double)(2 * MEMORY[0x89E910]) / MEMORY[0x89E8B8]); /*0x48bdd2*/
}
}
} // namespace gamemd

// 0x48BDE0
namespace gamemd {
long long sub_48BDE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_48BDE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E910]) + 0.5); /*0x48bdfb*/
  MEMORY[0x89E904] = result; /*0x48be00*/
  return result; /*0x48be06*/
}
}
} // namespace gamemd

// 0x48BE10
namespace gamemd {
int sub_48BE10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48BE10()
{
  MEMORY[0x89E8B0] = 0; /*0x48be12*/
  MEMORY[0x89E8B2] = 0; /*0x48be18*/
  return 0; /*0x48be1e*/
}
}
} // namespace gamemd

// 0x48BE20
namespace gamemd {
int sub_48BE20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48BE20()
{
  MEMORY[0x89E8D0] = 0; /*0x48be22*/
  MEMORY[0x89E8D4] = 0; /*0x48be27*/
  MEMORY[0x89E8D8] = 0; /*0x48be2c*/
  return 0; /*0x48be31*/
}
}
} // namespace gamemd

// 0x48BE40
namespace gamemd {
int sub_48BE40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48BE40()
{
  MEMORY[0x89E900] = 0; /*0x48be45*/
  MEMORY[0x89E8F8] = 128; /*0x48be4f*/
  MEMORY[0x89E8FC] = 128; /*0x48be54*/
  return 128; /*0x48be59*/
}
}
} // namespace gamemd

// 0x48C690
namespace gamemd {
int sub_48C690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48C690()
{
  MEMORY[0x89E930] = 0; /*0x48c692*/
  MEMORY[0x89E934] = 0; /*0x48c697*/
  MEMORY[0x89E938] = 0; /*0x48c69c*/
  MEMORY[0x89E93C] = 0; /*0x48c6a1*/
  return 0; /*0x48c6a6*/
}
}
} // namespace gamemd

// 0x48C6B0
namespace gamemd {
void sub_48C6B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48C6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48c6bc*/
  MEMORY[0x89E948] = Math::Sqrt(v0 + v0); /*0x48c6ce*/
}
}
} // namespace gamemd

// 0x48C6E0
namespace gamemd {
void sub_48C6E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48C6E0()
{
  MEMORY[0x89E9A0] = MEMORY[0x89E948] / 60.0; /*0x48c6ec*/
}
}
} // namespace gamemd

// 0x48C700
namespace gamemd {
void sub_48C700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48C700()
{
  MEMORY[0x89E988] = 1.0 / MEMORY[0x89E9A0]; /*0x48c70c*/
}
}
} // namespace gamemd

// 0x48C720
namespace gamemd {
void sub_48C720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48C720()
{
  MEMORY[0x89E980] = 0.0174532925199433 * 45.0; /*0x48c72c*/
}
}
} // namespace gamemd

// 0x48C740
namespace gamemd {
void sub_48C740()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48C740()
{
  MEMORY[0x89E958] = 0.0174532925199433 * 60.0; /*0x48c74c*/
}
}
} // namespace gamemd

// 0x48C760
namespace gamemd {
void sub_48C760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48C760()
{
  MEMORY[0x89E918] = 0.0174532925199433 * 90.0; /*0x48c76c*/
}
}
} // namespace gamemd

// 0x48C780
namespace gamemd {
long long sub_48C780()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_48C780()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E918] - MEMORY[0x89E958]); /*0x48c792*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E948] * 0.5); /*0x48c7a6*/
  MEMORY[0x89E9A8] = result; /*0x48c7ab*/
  return result; /*0x48c7b0*/
}
}
} // namespace gamemd

// 0x48C7C0
namespace gamemd {
void sub_48C7C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48C7C0()
{
  MEMORY[0x89E960] = Math::ArcTan((double)MEMORY[0x89E9A8] * 0.00390625); /*0x48c7d7*/
}
}
} // namespace gamemd

// 0x48C7F0
namespace gamemd {
void sub_48C7F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48C7F0()
{
  MEMORY[0x89E978] = Math::ArcTan((double)(2 * MEMORY[0x89E9A8]) / MEMORY[0x89E948]); /*0x48c812*/
}
}
} // namespace gamemd

// 0x48C820
namespace gamemd {
long long sub_48C820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_48C820()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E9A8]) + 0.5); /*0x48c83b*/
  MEMORY[0x89E99C] = result; /*0x48c840*/
  return result; /*0x48c846*/
}
}
} // namespace gamemd

// 0x48C850
namespace gamemd {
int sub_48C850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48C850()
{
  MEMORY[0x89E940] = 0; /*0x48c852*/
  MEMORY[0x89E942] = 0; /*0x48c858*/
  return 0; /*0x48c85e*/
}
}
} // namespace gamemd

// 0x48C860
namespace gamemd {
int sub_48C860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48C860()
{
  MEMORY[0x89E968] = 0; /*0x48c862*/
  MEMORY[0x89E96C] = 0; /*0x48c867*/
  MEMORY[0x89E970] = 0; /*0x48c86c*/
  return 0; /*0x48c871*/
}
}
} // namespace gamemd

// 0x48C880
namespace gamemd {
int sub_48C880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48C880()
{
  MEMORY[0x89E998] = 0; /*0x48c885*/
  MEMORY[0x89E990] = 128; /*0x48c88f*/
  MEMORY[0x89E994] = 128; /*0x48c894*/
  return 128; /*0x48c899*/
}
}
} // namespace gamemd

// 0x48C8A0
namespace gamemd {
void nullsub_112()
{
  ;
}
} // namespace gamemd

// 0x48C8B0
namespace gamemd {
int Main_Game_Frame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Main_Game_Frame()
{
  int result; // eax
  int v1; // eax
  bool v2; // zf
  const void *v3; // eax
  const void *v4; // eax
  LPARAM v5; // eax
  const void *v6; // eax
  char v7; // [esp+7h] [ebp-155h] BYREF
  _BYTE v8[4]; // [esp+8h] [ebp-154h] BYREF

  result = MEMORY[0xA8EDA0]; /*0x48c8b0*/
  if ( !MEMORY[0xA8EDA0] ) /*0x48c8c0*/
    return result; /*0x48c8c0*/
  if ( MEMORY[0xA8B238] ) /*0x48c8cc*/
  {
    result = HouseClass_Player; /*0x48c8ce*/
    if ( *(_BYTE *)(HouseClass_Player + 504) /*0x48c8ef*/
      || *(_BYTE *)(HouseClass_Player + 503)
      || *(_BYTE *)(HouseClass_Player + 502) )
    {
      goto LABEL_15; /*0x48c8f7*/
    }
    if ( !g_GameLoopActive ) /*0x48c905*/
    {
      if ( *(_BYTE *)(HouseClass_Player + 501) ) /*0x48c907*/
      {
        g_GameLoopActive = 1; /*0x48c911*/
        goto LABEL_9; /*0x48c911*/
      }
LABEL_15:
      MEMORY[0xA8EDA0] = 0; /*0x48c98a*/
      return result; /*0x48c997*/
    }
  }
LABEL_9:
  ScenarioClass::CleanupTemporary(); /*0x48c918*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 20))(MEMORY[0x887640]); /*0x48c925*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ) /*0x48c930*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x48c93f*/
  v1 = MEMORY[0xA8EDA0]; /*0x48c951*/
  if ( MEMORY[0xA8EDA0] ) /*0x48c95a*/
  {
    while ( 2 ) /*0x48c968*/
    {
      switch ( v1 ) /*0x48c968*/
      {
        case 1: /*0x48c968*/
          OpenGameUI(); /*0x48c9ba*/
          v1 = MEMORY[0xA8EDA0]; /*0x48c9bf*/
          v2 = MEMORY[0xA8EDA0] == 1; /*0x48c9c4*/
          goto LABEL_17; /*0x48c9c7*/
        case 2: /*0x48c968*/
          if ( MEMORY[0xAC10C8] ) /*0x48cb40*/
          {
LABEL_34:
            Network::AddFrameEvent(); /*0x48cb42*/
          }
          else if ( !*(_BYTE *)(HouseClass_Player + 501) /*0x48cb7b*/
                 && !*(_BYTE *)(HouseClass_Player + 503)
                 && !*(_BYTE *)(HouseClass_Player + 504)
                 && !*(_BYTE *)(HouseClass_Player + 502) )
          {
            v5 = GetStringCSF(aTxtSurrender, (int)g_Str_File_Conquer_CPP, 487); /*0x48cb9a*/
            if ( ShowConfirmDialog(v5) ) /*0x48cba1*/
            {
              v6 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48cbc0*/
              if ( Networking_LastEventIndex < 128 ) /*0x48cbcf*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v6, 0x6Fu); /*0x48cbeb*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48cbfc*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48cc13*/
                ++Networking_LastEventIndex; /*0x48cc19*/
              }
              Network::AddFrameEvent(); /*0x48cc1e*/
              g_GameLoopActive = 0; /*0x48cc23*/
            }
          }
          goto LABEL_44; /*0x48cb47*/
        case 3: /*0x48c968*/
          switch ( ShowGameDialog() ) /*0x48ca2d*/
          {
            case 2: /*0x48ca2d*/
              goto LABEL_34;
            case 3: /*0x48ca2d*/
              v3 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48ca43*/
              if ( Networking_LastEventIndex < 128 ) /*0x48ca52*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v3, 0x6Fu); /*0x48ca6e*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48ca7f*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48ca96*/
                ++Networking_LastEventIndex; /*0x48ca9c*/
              }
              g_GameLoopActive = 0; /*0x48caa1*/
              goto LABEL_34; /*0x48caa8*/
            case 4: /*0x48ca2d*/
              v4 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48cac4*/
              if ( Networking_LastEventIndex < 128 ) /*0x48cad3*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v4, 0x6Fu); /*0x48caef*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48cb00*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48cb17*/
                ++Networking_LastEventIndex; /*0x48cb1d*/
              }
              g_GameLoopActive = 0; /*0x48cb22*/
              break; /*0x48cb29*/
            case 5: /*0x48ca2d*/
              unk_8B41C0 = 1; /*0x48cb2e*/
              break; /*0x48cb35*/
            default:
              goto LABEL_44;
          }
          goto LABEL_44;
        case 4: /*0x48c968*/
          ShowHotkeyOptionsDialog(MEMORY[0xA8EB60]); /*0x48ca08*/
          v1 = 5; /*0x48ca0d*/
          MEMORY[0xA8EDA0] = 5; /*0x48ca12*/
          continue; /*0x48ca17*/
        case 5: /*0x48c968*/
          Main::CreateDialog(v8); /*0x48c9cd*/
          v1 = MEMORY[0xA8EDA0]; /*0x48c9d2*/
          if ( MEMORY[0xA8EDA0] != 5 ) /*0x48c9da*/
            goto LABEL_18; /*0x48c9da*/
          v1 = 1; /*0x48c9dc*/
          MEMORY[0xA8EDA0] = 1; /*0x48c9e1*/
          continue; /*0x48c9e6*/
        case 6: /*0x48c968*/
          ShowAudioSettingsDialog(&v7); /*0x48c9ef*/
          v1 = 5; /*0x48c9f4*/
          MEMORY[0xA8EDA0] = 5; /*0x48c9f9*/
          continue; /*0x48c9fe*/
        case 7: /*0x48c968*/
          ShowWOLLobbyDialog(); /*0x48cc2c*/
          goto LABEL_44; /*0x48cc2c*/
        case 8: /*0x48c968*/
          ShowDiplomacyDialog(&MEMORY[0x87F7E8]); /*0x48c99d*/
          v1 = MEMORY[0xA8EDA0]; /*0x48c9a2*/
          v2 = MEMORY[0xA8EDA0] == 8; /*0x48c9a7*/
LABEL_17:
          if ( !v2 ) /*0x48c9aa*/
            goto LABEL_18; /*0x48c9aa*/
          goto LABEL_44; /*0x48c9aa*/
        case 9: /*0x48c968*/
          ScenarioClass::ShowMissionBriefing(MEMORY[0xA8B230]); /*0x48c975*/
          v1 = MEMORY[0xA8EDA0]; /*0x48c97a*/
          if ( MEMORY[0xA8EDA0] != 9 ) /*0x48c982*/
            goto LABEL_18; /*0x48c982*/
LABEL_44:
          MEMORY[0xA8EDA0] = 0; /*0x48cc31*/
          goto LABEL_45; /*0x48cc31*/
        default:
LABEL_18:
          if ( v1 ) /*0x48c9b2*/
            continue; /*0x48c9b2*/
          goto LABEL_45; /*0x48c9b2*/
      }
    }
  }
LABEL_45:
  UpdateWindow(g_hWnd); /*0x48cc37*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13730) ) /*0x48cc4b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x48cc5d*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 24))(MEMORY[0x887640]); /*0x48cc68*/
  WTFMode::Init(&MEMORY[0xA8B238]); /*0x48cc70*/
  return PostFrameCleanup(); /*0x48c990*/
}
}
} // namespace gamemd

// 0x48CCC0
namespace gamemd {
char MainGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char MainGame()
{
  int inited; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v2; // eax
  char v3; // cl
  CellStruct *v8; // eax
  Movie *v9; // eax
  int v7; // [esp+0h] [ebp-1C30h] BYREF
  CHAR MultiByteStr[5120]; // [esp+8h] [ebp-1C28h] BYREF
  CHAR var828[2048]; // [esp+1408h] [ebp-828h] BYREF
  MSGBOXPARAMSA mbp; // [esp+1C08h] [ebp-28h] BYREF
  int savedregs; // [esp+1C30h] [ebp+0h] BYREF

  inited = InitGame(); /*0x48cccf*/
  if ( inited ) /*0x48ccd8*/
  {
    if ( inited < 0 ) /*0x48ccde*/
    {
      StringCSF = GetStringCSF(aTxtInitgameFai, 0, g_Str_File_Conquer_CPP, 566); /*0x48cd05*/
      WideCharToMultiByte(0, 0, StringCSF, -1, MultiByteStr, 5120, 0, 0); /*0x48cd13*/
      v2 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Conquer_CPP, 567); /*0x48cd36*/
      WideCharToMultiByte(0, 0, v2, -1, var828, 2048, 0, 0); /*0x48cd3e*/
      mbp.hInstance = (HINSTANCE)g_hInstance; /*0x48cd4b*/
      mbp.hwndOwner = g_hWnd; /*0x48cd4e*/
      mbp.cbSize = 40; /*0x48cd61*/
      mbp.lpszText = MultiByteStr; /*0x48cd68*/
      mbp.lpszCaption = var828; /*0x48cd6b*/
      mbp.dwStyle = 327696; /*0x48cd6e*/
      memset(&mbp.lpszIcon, 0, 12); /*0x48cd75*/
      mbp.dwLanguageId = 1024; /*0x48cd7e*/
      LOBYTE(inited) = MessageBoxIndirectA(&mbp); /*0x48cd85*/
    }
    return inited; /*0x48cd90*/
  }
  *(_DWORD *)&stru_89E138.__pad_579C[65960] = &v7; /*0x48cd91*/
  *(_DWORD *)&stru_89E138.__pad_579C[65968] = &savedregs; /*0x48cd97*/
  *(_DWORD *)&stru_89E138.__pad_579C[65964] = &loc_48CDA8; /*0x48cda3*/
  Debug::Log(); /*0x48cdb4*/
  Debug::Log(); /*0x48cdc5*/
  LOBYTE(inited) = MenuSelect(); /*0x48cdd3*/
  while ( (_BYTE)inited ) /*0x48cdda*/
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[21752] = 0; /*0x48cdf0*/
    g_MenuReturnState = 1; /*0x48cdf6*/
    FadePalette(&stru_87C374.__pad_579C[15472], 15, 0); /*0x48cdfd*/
    Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x48ce08*/
    if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48ce14*/
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x48ce1e*/
      *(_DWORD *)stru_ABCDFC.__pad_0 = 0; /*0x48ce21*/
      stru_ABCDFC.FilePointer = 0; /*0x48ce27*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x48ce33*/
    {
      InitSkirmishSettings(); /*0x48ce35*/
      HouseClass_Player.__pad_5568[26188] = 0; /*0x48ce3a*/
      *(_DWORD *)&stru_B05488.__pad_579C[4500] = 0; /*0x48ce40*/
      stru_B05488.__pad_579C[4436] = 0; /*0x48ce46*/
    }
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22616] ) /*0x48ce54*/
      Tooltip::Enable(*(void **)&stru_87C374.__pad_579C[22616], HouseClass_Player.__pad_5568[22732]); /*0x48ce5d*/
    v3 = *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13730); /*0x48ce67*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[23276] = 0; /*0x48ce6d*/
    HouseClass_Player.__pad_5568[23272] = v3; /*0x48ce73*/
    g_GameLoopActive = 1; /*0x48ce7e*/
    WTFMode::Init(&HouseClass_Player.__pad_5568[8068]); /*0x48ce85*/
    do /*0x48cea8*/
    {
      if ( GameFrameLoop() && GameFrameCheck() ) /*0x48ce93*/
        break; /*0x48ce9a*/
      MainGameFrame(); /*0x48ce9c*/
    }
    while ( !GameFrameCheck() ); /*0x48cea8*/
    InitLoadingScreenResources(); /*0x48ceaa*/
    WTFMode::Shutdown(&HouseClass_Player.__pad_5568[8068]); /*0x48ceb4*/
    HouseClass_Player.__pad_5568[23208] = 0; /*0x48cebf*/
    HouseClass_Player.__pad_5568[20676] = 0; /*0x48cec7*/
    Debug::Log(); /*0x48cee2*/
    DumpNetworkStats(); /*0x48ceea*/
    if ( !g_Is16BitMode ) /*0x48cef5*/
      FadePalette(&stru_87C374.__pad_579C[13168], 30, 0); /*0x48cf02*/
    ScreenSaver::Process(1, 0, (int)&savedregs); /*0x48cf09*/
    if ( (HouseClass_Player.__pad_5568[17220] & 3) != 0 ) /*0x48cf15*/
      CCFileClass::Reset(&HouseClass_Player.__pad_5568[17112]); /*0x48cf1c*/
    v8 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068]; /*0x48cf21*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 2 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 ) /*0x48cf2e*/
    {
      if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48cf4c*/
        goto LABEL_27; /*0x48cf4c*/
      CleanupCampaignResources(); /*0x48cf4e*/
    }
    else
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 3 ) /*0x48cf33*/
        goto LABEL_28; /*0x48cf33*/
      if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48cf3c*/
        goto LABEL_34; /*0x48cf3c*/
      Network::ShutdownInterface(); /*0x48cf3e*/
    }
    v8 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068]; /*0x48cf53*/
LABEL_27:
    if ( v8 == (CellStruct *)3 ) /*0x48cf5b*/
      goto LABEL_31; /*0x48cf5b*/
LABEL_28:
    if ( v8 == (CellStruct *)4 || v8 == (CellStruct *)2 || v8 == (CellStruct *)1 ) /*0x48cf69*/
    {
LABEL_31:
      if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48cf72*/
        goto LABEL_34; /*0x48cf72*/
      ScenarioClass::SaveMultiplayerSettings(&HouseClass_Player.__pad_5568[8068]); /*0x48cf79*/
    }
    if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48cf85*/
    {
LABEL_34:
      v9 = *(Movie **)&HouseClass_Player.__pad_5568[17220]; /*0x48cf87*/
      LOBYTE(v9) = HouseClass_Player.__pad_5568[17220] & 0xFD; /*0x48cf92*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x48cf94*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[17220] = v9; /*0x48cf9a*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x48cfa1*/
    }
    LOBYTE(inited) = MenuSelect(); /*0x48cfa4*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23344] ) /*0x48cfbf*/
    LOBYTE(inited) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 20))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x48cfc3*/
  return inited; /*0x48cd8b*/
}
}
} // namespace gamemd

// 0x48DB70
namespace gamemd {
void nullsub_8()
{
  ;
}
} // namespace gamemd

// 0x48DED0
namespace gamemd {
void nullsub_51()
// 0x48db70
{
  ;
}
} // namespace gamemd

// 0x48DEE0
namespace gamemd {
void sub_48DEE0(unsigned int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_48DEE0(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  bool v4; // zf

  if ( a1 ) /*0x48dee4*/
  {
    v3 = a3; /*0x48dee6*/
    if ( a3 ) /*0x48deec*/
    {
      if ( a2 <= 0 ) /*0x48def5*/
      {
LABEL_7:
        *(_DWORD *)(v3 - 4) = 2147450879; /*0x48df11*/
      }
      else
      {
        while ( 1 ) /*0x48def9*/
        {
          v4 = (unsigned __int16)*a1 == 0x7FFF; /*0x48def9*/
          *(_DWORD *)v3 = *a1; /*0x48defc*/
          if ( v4 && *(_WORD *)(v3 + 2) == 0x7FFF ) /*0x48df04*/
            break; /*0x48df04*/
          v3 += 4; /*0x48df06*/
          ++a1; /*0x48df09*/
          if ( --a2 <= 0 ) /*0x48df0f*/
            goto LABEL_7; /*0x48df0f*/
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x48DFD0
namespace gamemd {
char * sub_48DFD0(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_48DFD0(unsigned int a1)
{
  if ( a1 >= 0xC ) /*0x48dfd3*/
    return MEMORY[0x817474]; /*0x48dfdd*/
  else
    return unk_81DA28[a1]; /*0x48dfd5*/
}
}
} // namespace gamemd

// 0x48E030
namespace gamemd {
char * sub_48E030(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_48E030(unsigned int a1)
{
  if ( a1 >= 8 ) /*0x48e033*/
    return MEMORY[0x817474]; /*0x48e03d*/
  else
    return unk_81DA58[a1]; /*0x48e035*/
}
}
} // namespace gamemd

// 0x48E090
namespace gamemd {
char * sub_48E090(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_48E090(unsigned int a1)
{
  if ( a1 >= 5 ) /*0x48e093*/
    return MEMORY[0x817474]; /*0x48e09d*/
  else
    return off_81DA78[a1]; /*0x48e095*/
}
}
} // namespace gamemd

// 0x48E0B0
namespace gamemd {
FILE * sub_48E0B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
FILE *sub_48E0B0()
{
  FILE *result; // eax
  FILE *v1; // esi
  unsigned int v2; // eax
  int i; // edi
  _DWORD *v4; // eax
  unsigned __int16 *v5; // edi
  char *v6; // eax

  result = (FILE *)MEMORY[0xA8B238][0]; /*0x48e0b1*/
  if ( MEMORY[0xA8B238][0] == 4 )
  {
    result = fopen(aMpstatsTxt, Mode); /*0x48e0ca*/
    v1 = result; /*0x48e0cf*/
    if ( result )
    {
      fprintf(result, "Frames: %d\n", MEMORY[0xA8ED84]);
      if ( g_FrameCounter_Samples ) /*0x48e0f8*/
        v2 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples; /*0x48e101*/
      else
        v2 = 0; /*0x48e105*/
      fprintf(v1, "Average FPS: %d\n", v2);
      fprintf(v1, "Max MaxAhead: %d\n", MEMORY[0xA8B568]);
      fprintf(v1, "Latency setting: %d\n", MEMORY[0xA8DB9C]);
      fprintf(v1, "Game speed setting: %d\n", *(_DWORD *)MEMORY[0xA8EB60]);
      if ( MEMORY[0x887628] )
      {
        for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 72))(MEMORY[0x887628]); ++i )
        {
          v4 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 76))(MEMORY[0x887628], i); /*0x48e16a*/
          if ( v4 )
            fprintf(
              v1,
              "Local address: %d.%d.%d.%d\n",
              (unsigned __int8)*v4,
              BYTE1(*v4),
              (unsigned __int8)BYTE2(*v4),
              HIBYTE(*v4));
        }
      }
      v5 = (unsigned __int16 *)&MEMORY[0xA8B5C4]; /*0x48e1ad*/
      do
      {
        if ( *((_BYTE *)v5 - 80) )
        {
          fprintf(v1, "\nName: %s\n", (const char *)v5 - 80);
          v6 = Network::FormatAddress(v5 + 6, 0); /*0x48e1d4*/
          fprintf(v1, "Address: %s\n", v6);
          fprintf(v1, "Max avg round trip: %d\n", *(_DWORD *)v5);
          fprintf(v1, "Max round trip: %d\n", *((_DWORD *)v5 - 4));
          fprintf(v1, "Resends: %d\n", *((_DWORD *)v5 - 3));
          fprintf(v1, "Frame sync stalls: %d\n", *((_DWORD *)v5 + 1));
          fprintf(v1, "Command cound stalls: %d\n", *((_DWORD *)v5 + 2));
          fprintf(v1, "Lost: %d\n", *((_DWORD *)v5 - 2));
          fprintf(v1, "Percent lost: %d\n", *((_DWORD *)v5 - 1));
        }
        v5 += 52; /*0x48e253*/
      }
      while ( (int)v5 < (int)MEMORY[0xA8B904] );
      return (FILE *)fclose(v1); /*0x48e263*/
    }
  }
  return result; /*0x48e26c*/
}
}
} // namespace gamemd

// 0x48E270
namespace gamemd {
int sub_48E270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48E270()
{
  MEMORY[0x89E9C0] = 0; /*0x48e272*/
  MEMORY[0x89E9C4] = 0; /*0x48e277*/
  MEMORY[0x89E9C8] = 0; /*0x48e27c*/
  MEMORY[0x89E9CC] = 0; /*0x48e281*/
  return 0; /*0x48e286*/
}
}
} // namespace gamemd

// 0x48E290
namespace gamemd {
void sub_48E290()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48E290()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48e29c*/
  MEMORY[0x89E9D8] = Math::Sqrt(v0 + v0); /*0x48e2ae*/
}
}
} // namespace gamemd

// 0x48E2C0
namespace gamemd {
void sub_48E2C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48E2C0()
{
  MEMORY[0x89EC18] = MEMORY[0x89E9D8] / 60.0; /*0x48e2cc*/
}
}
} // namespace gamemd

// 0x48E2E0
namespace gamemd {
void sub_48E2E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48E2E0()
{
  MEMORY[0x89EC00] = 1.0 / MEMORY[0x89EC18]; /*0x48e2ec*/
}
}
} // namespace gamemd

// 0x48E300
namespace gamemd {
void sub_48E300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48E300()
{
  MEMORY[0x89EBF8] = 0.0174532925199433 * 45.0; /*0x48e30c*/
}
}
} // namespace gamemd

// 0x48E320
namespace gamemd {
void sub_48E320()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48E320()
{
  MEMORY[0x89E9E0] = 0.0174532925199433 * 60.0; /*0x48e32c*/
}
}
} // namespace gamemd

// 0x48E340
namespace gamemd {
void sub_48E340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48E340()
{
  MEMORY[0x89E9B8] = 0.0174532925199433 * 90.0; /*0x48e34c*/
}
}
} // namespace gamemd

// 0x48E360
namespace gamemd {
long long sub_48E360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_48E360()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E9B8] - MEMORY[0x89E9E0]); /*0x48e372*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E9D8] * 0.5); /*0x48e386*/
  MEMORY[0x89EC20] = result; /*0x48e38b*/
  return result; /*0x48e390*/
}
}
} // namespace gamemd

// 0x48E3A0
namespace gamemd {
void sub_48E3A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48E3A0()
{
  MEMORY[0x89E9E8] = Math::ArcTan((double)MEMORY[0x89EC20] * 0.00390625); /*0x48e3b7*/
}
}
} // namespace gamemd

// 0x48E3D0
namespace gamemd {
void sub_48E3D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_48E3D0()
{
  MEMORY[0x89EBF0] = Math::ArcTan((double)(2 * MEMORY[0x89EC20]) / MEMORY[0x89E9D8]); /*0x48e3f2*/
}
}
} // namespace gamemd

// 0x48E400
namespace gamemd {
long long sub_48E400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_48E400()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89EC20]) + 0.5); /*0x48e41b*/
  MEMORY[0x89EC14] = result; /*0x48e420*/
  return result; /*0x48e426*/
}
}
} // namespace gamemd

// 0x48E430
namespace gamemd {
int sub_48E430()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48E430()
{
  MEMORY[0x89E9D0] = 0; /*0x48e432*/
  MEMORY[0x89E9D2] = 0; /*0x48e438*/
  return 0; /*0x48e43e*/
}
}
} // namespace gamemd

// 0x48E440
namespace gamemd {
int sub_48E440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48E440()
{
  MEMORY[0x89EA30] = 0; /*0x48e442*/
  MEMORY[0x89EA34] = 0; /*0x48e447*/
  MEMORY[0x89EA38] = 0; /*0x48e44c*/
  return 0; /*0x48e451*/
}
}
} // namespace gamemd

// 0x48E460
namespace gamemd {
int sub_48E460()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48E460()
{
  MEMORY[0x89EC10] = 0; /*0x48e465*/
  MEMORY[0x89EC08] = 128; /*0x48e46f*/
  MEMORY[0x89EC0C] = 128; /*0x48e474*/
  return 128; /*0x48e479*/
}
}
} // namespace gamemd

// 0x48E480
namespace gamemd {
int sub_48E480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48E480()
{
  MEMORY[0x89E9F0][0] = 128; /*0x48e489*/
  MEMORY[0x89E9F4][0] = 128; /*0x48e493*/
  MEMORY[0x89E9FC] = 64; /*0x48e49b*/
  MEMORY[0x89EA00] = 64; /*0x48e4a5*/
  MEMORY[0x89EA08] = 192; /*0x48e4ab*/
  MEMORY[0x89EA0C] = 64; /*0x48e4b0*/
  MEMORY[0x89EA14] = 64; /*0x48e4bd*/
  MEMORY[0x89E9F8][0] = 0; /*0x48e4c4*/
  MEMORY[0x89EA04] = 0; /*0x48e4ca*/
  MEMORY[0x89EA10] = 0; /*0x48e4d0*/
  MEMORY[0x89EA18] = 192; /*0x48e4d6*/
  MEMORY[0x89EA1C] = 0; /*0x48e4dc*/
  MEMORY[0x89EA20] = 192; /*0x48e4e2*/
  MEMORY[0x89EA24] = 192; /*0x48e4e7*/
  MEMORY[0x89EA28] = 0; /*0x48e4ed*/
  return 192; /*0x48e4f3*/
}
}
} // namespace gamemd

// 0x48E500
namespace gamemd {
int sub_48E500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48E500()
{
  MEMORY[0x89ECD8] = 0; /*0x48e502*/
  MEMORY[0x89ECDC] = 0; /*0x48e507*/
  MEMORY[0x89ECE0] = 0; /*0x48e50c*/
  MEMORY[0x89ECE4] = 0; /*0x48e511*/
  return 0; /*0x48e516*/
}
}
} // namespace gamemd

// 0x48E680
namespace gamemd {
int sub_48E680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48E680()
{
  MEMORY[0x89ECE8] = 0; /*0x48e682*/
  MEMORY[0x89ECEC] = 0; /*0x48e687*/
  MEMORY[0x89ECF0] = 0; /*0x48e68c*/
  MEMORY[0x89ECF4] = 0; /*0x48e691*/
  return 0; /*0x48e696*/
}
}
} // namespace gamemd

// 0x48E6A0
namespace gamemd {
int sub_48E6A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_48E6A0()
{
  MEMORY[0x89ECFC] = 0; /*0x48e6a7*/
  MEMORY[0x89ED00] = 0; /*0x48e6ac*/
  MEMORY[0x89ED04] = 1; /*0x48e6b1*/
  MEMORY[0x89ED05] = 0; /*0x48e6b8*/
  MEMORY[0x89ECF8] = (int)&DynamicVectorClass<ConvertClass *>::`vftable'; /*0x48e6bd*/
  MEMORY[0x89ED0C] = 10; /*0x48e6c7*/
  MEMORY[0x89ED08] = 0; /*0x48e6d1*/
  return atexit(sub_48E6E0); /*0x48e6dc*/
}
}
} // namespace gamemd

// 0x48E6E0
namespace gamemd {
void sub_48E6E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_48E6E0()
{
  if ( (MEMORY[0x89ED10] & 1) == 0 ) /*0x48e6ea*/
  {
    MEMORY[0x89ECF8] = (int)&VectorClass<ConvertClass *>::`vftable'; /*0x48e6ee*/
    MEMORY[0x89ED10] |= 1u; /*0x48e701*/
    if ( MEMORY[0x89ECFC] ) /*0x48e707*/
    {
      if ( MEMORY[0x89ED05] ) /*0x48e711*/
      {
        __3_YAXPAX_Z(MEMORY[0x89ECFC]); /*0x48e714*/
        MEMORY[0x89ECFC] = 0; /*0x48e71c*/
      }
    }
    MEMORY[0x89ED05] = 0; /*0x48e726*/
    MEMORY[0x89ED00] = 0; /*0x48e72d*/
  }
}
}
} // namespace gamemd

// 0x484F10
namespace gamemd {
char sub_484F10(int a1)
{
return 1;
}
} // namespace gamemd
