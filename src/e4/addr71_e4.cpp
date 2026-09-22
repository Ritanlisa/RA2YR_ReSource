// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_717A40_e4.hpp"
#include "e4/classes/E4Recv_7187A0_e4.hpp"
#include "e4/classes/E4Recv_71C8E0_e4.hpp"
#include "e4/classes/E4Recv_71FA40_e4.hpp"
#include "e4/classes/E4Recv_71FF20_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x710860
namespace gamemd {
int sub_710860(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_710860(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x710870*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x7187A0
namespace gamemd {
char E4Recv_7187A0::ProcessUnitDeploymentAtCell(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ProcessUnitDeploymentAtCell(int **this, int a2, int a3, int a4)
{
  _DWORD *i; // edi
  _DWORD *v12; // eax
  int *v13; // ecx
  int v14; // edi
  void *v15; // eax
  int *v16; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  char v22; // [esp+31h] [ebp-5h]
  int v23; // [esp+32h] [ebp-4h] BYREF
  for ( i = (_DWORD *)*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 57); i; i = (_DWORD *)i[12] ) /*0x7187bf*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*i + 352))(i) ) /*0x7187c5*/
    {
      v23 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 160); /*0x7187e7*/
      (*(void (__thiscall **)(_DWORD, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(**(this + 3) + 364))( /*0x718804*/
        *(this + 3),
        &v23,
        0,
        g_RulesClass_Instance->?[5],
        0,
        1,
        0,
        0);
    }
  }
  v22 = 0; /*0x718814*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 3278) /*0x71885d*/
    && ((*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 80) & 0x100) != 0
     || *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 59) == 1) )
  {
    v22 = 1; /*0x71885f*/
  }
  bool v6 = 0; /*0x718867*/
  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 1660) == 3 ) /*0x718878*/
  {
    v6 = 1; /*0x71887d*/
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 1040) ) /*0x718887*/
    {
      int v7 = (*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)); /*0x718896*/
      v6 = (unsigned __int8)HouseClass::GainedPoweredCenter(v7) != 0; /*0x7188af*/
    }
  }
  LOWORD(v23) = a2 / 256; /*0x7188c1*/
  HIWORD(v23) = a3 / 256; /*0x7188da*/
  if ( *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v23) + 59) != 2 /*0x718962*/
    || v6
    || *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 3278)
    || (*(int (__thiscall **)(_DWORD))(**(this + 3) + 44))(*(this + 3)) == 15
    || (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 80) & 0x100) != 0
    || *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 59) == 1 )
  {
    v13 = *(this + 3); /*0x718a01*/
    LOWORD(v23) = a2 / 256; /*0x718a14*/
    HIWORD(v23) = a3 / 256; /*0x718a2f*/
    v14 = *v13; /*0x718a3c*/
    v15 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v23); /*0x718a46*/
    if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v14 + 428))(*(this + 3), v15, -1, -1, 0, 1) == 7 /*0x718a60*/
      || (LOBYTE(v12) = v22) != 0 )
    {
      LOWORD(v23) = a2 / 256; /*0x718a80*/
      HIWORD(v23) = a3 / 256; /*0x718a95*/
      v16 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v23); /*0x718aa2*/
      if ( !Cell::IsGroundTypeRange(v16) || (*(int (__thiscall **)(_DWORD))(**(this + 3) + 44))(*(this + 3)) == 15 ) /*0x718abd*/
      {
        v19 = (*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)); /*0x718b23*/
        v20 = (int)*(this + 3); /*0x718b2f*/
        v23 = *(_DWORD *)(v19 + 160); /*0x718b32*/
        LOBYTE(v12) = (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v20 + 364))( /*0x718b53*/
                        v20,
                        &v23,
                        0,
                        g_RulesClass_Instance->?[5],
                        0,
                        1,
                        0,
                        0);
      }
      else
      {
        *((_BYTE *)*(this + 3) + 973) = 1; /*0x718ac2*/
        (*(void (__thiscall **)(_DWORD))(**(this + 3) + 928))(*(this + 3)); /*0x718ace*/
        v12 = *(this + 3); /*0x718ad4*/
        v17 = (_DWORD *)v12[182]; /*0x718ad7*/
        if ( v17 ) /*0x718adf*/
        {
          TechnoClass::MutateAll(v17, v12[266], v12[267]); /*0x718aef*/
          v18 = (*(this + 3))[182]; /*0x718af7*/
          if ( v18 ) /*0x718aff*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x718b05*/
          v12 = *(this + 3); /*0x718b08*/
          v12[182] = 0; /*0x718b0e*/
        }
      }
    }
  }
  else
  {
    *((_BYTE *)*(this + 3) + 973) = 1; /*0x71896b*/
    (*(void (__thiscall **)(_DWORD))(**(this + 3) + 928))(*(this + 3)); /*0x718977*/
    _DWORD * v8 = *(this + 3); /*0x71897d*/
    _DWORD * v9 = (_DWORD *)v8[182]; /*0x718980*/
    if ( v9 ) /*0x718988*/
    {
      TechnoClass::MutateAll(v9, v8[266], v8[267]); /*0x718998*/
      int v10 = (*(this + 3))[182]; /*0x7189a0*/
      if ( v10 ) /*0x7189a8*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x7189ae*/
      (*(this + 3))[182] = 0; /*0x7189b4*/
    }
    _DWORD * v11 = *(this + 3); /*0x7189be*/
    if ( v11[266] ) /*0x7189c1*/
    {
      LOBYTE(v12) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 224))(v11, v11[266]); /*0x7189ce*/
    }
    else
    {
      v12 = (_DWORD *)v11[267]; /*0x7189dd*/
      if ( v12 ) /*0x7189e5*/
        LOBYTE(v12) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 228))(v11, v11[267]); /*0x7189ee*/
    }
  }
  return (char)v12; /*0x7189d4*/
}
}
} // namespace gamemd

// 0x71D580
namespace gamemd {
int InitializeCellSpreadTables()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int InitializeCellSpreadTables()
{

  int v4 = 0; /*0x71d582*/
  DataGlobal_B0EDC0 = 0; /*0x71d5a2*/
  DataGlobal_B0EDC4 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d5b3*/
  memset(&DataGlobal_B0EDC8, 0, 0x20u); /*0x71d5c9*/
  Array::ForEach((int)&DataGlobal_B0EDC8, 4, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d5d0*/
  DataGlobal_B0EDE8 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d5ec*/
  DataGlobal_B0EDEC = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d607*/
  DataGlobal_B0EDF0 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d618*/
  memset(&DataGlobal_B0EDF4, 0, 0x1Cu); /*0x71d62e*/
  Array::ForEach((int)&DataGlobal_B0EDF4, 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d635*/
  DataGlobal_B0EE10 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d651*/
  DataGlobal_B0EE14 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d66c*/
  DataGlobal_B0EE18 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d67d*/
  memset(&DataGlobal_B0EE1C, 0, 0x1Cu); /*0x71d693*/
  Array::ForEach((int)&DataGlobal_B0EE1C, 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d69a*/
  DataGlobal_B0EE38 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d6b0*/
  DataGlobal_B0EE3C = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d6cb*/
  DataGlobal_B0EE40 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d6d9*/
  DataGlobal_B0EE44 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d6fa*/
  int v0 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d705*/
  DataGlobal_B0EE4C = 0; /*0x71d709*/
  DataGlobal_B0EE50 = 0; /*0x71d714*/
  DataGlobal_B0EE54 = 0; /*0x71d71c*/
  DataGlobal_B0EE58 = 0; /*0x71d724*/
  DataGlobal_B0EE48 = v0; /*0x71d72f*/
  DataGlobal_B0EE5C = 0; /*0x71d734*/
  Array::ForEach((int)&DataGlobal_B0EE4C, 4, 5, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d73a*/
  DataGlobal_B0EE60 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d756*/
  DataGlobal_B0EE64 = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d76b*/
  DataGlobal_B0EE68 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d779*/
  DataGlobal_B0EE6C = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d794*/
  DataGlobal_B0EE70 = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d7a9*/
  DataGlobal_B0EE74 = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d7ba*/
  int v1 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d7ce*/
  DataGlobal_B0EE7C = 0; /*0x71d7d2*/
  DataGlobal_B0EE78 = v1; /*0x71d7d7*/
  DataGlobal_B0EE80 = 0; /*0x71d7dd*/
  DataGlobal_B0EE84 = 0; /*0x71d7e7*/
  Array::ForEach((int)&DataGlobal_B0EE7C, 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d7f5*/
  DataGlobal_B0EE88 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d80b*/
  DataGlobal_B0EE8C = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d826*/
  DataGlobal_B0EE90 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d83b*/
  DataGlobal_B0EE94 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d849*/
  DataGlobal_B0EE98 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d864*/
  DataGlobal_B0EE9C = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d87f*/
  int v2 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d889*/
  DataGlobal_B0EEA4 = 0; /*0x71d88d*/
  DataGlobal_B0EEA8 = 0; /*0x71d89a*/
  DataGlobal_B0EEA0 = v2; /*0x71d8a7*/
  DataGlobal_B0EEAC = 0; /*0x71d8ad*/
  Array::ForEach((int)&DataGlobal_B0EEA4, 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d8b3*/
  DataGlobal_B0EEB0 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d8cf*/
  DataGlobal_B0EEB4 = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d8dd*/
  DataGlobal_B0EEB8 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d8f8*/
  DataGlobal_B0EEBC = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d907*/
  DataGlobal_B0EEC0 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d91b*/
  DataGlobal_B0EEC4 = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d936*/
  DataGlobal_B0EEC8 = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d94b*/
  DataGlobal_B0EECC = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d959*/
  DataGlobal_B0EED0 = *(_DWORD *)CellStruct::Set(&v4, 2, 2); /*0x71d97a*/
  DataGlobal_B0EED4 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d98f*/
  DataGlobal_B0EED8 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d99d*/
  DataGlobal_B0EEDC = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d9b8*/
  DataGlobal_B0EEE0 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d9cd*/
  DataGlobal_B0EEE4 = *(_DWORD *)CellStruct::Set(&v4, 3, 0); /*0x71d9db*/
  DataGlobal_B0EEE8 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d9f6*/
  DataGlobal_B0EEEC = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71da0b*/
  DataGlobal_B0EEF0 = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71da19*/
  DataGlobal_B0EEF4 = *(_DWORD *)CellStruct::Set(&v4, 3, 1); /*0x71da3a*/
  DataGlobal_B0EEF8 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71da4c*/
  DataGlobal_B0EEFC = 0; /*0x71da62*/
  memset(&DataGlobal_B0EF00, 0, 0x230u); /*0x71da73*/
  return Array::ForEach((int)&DataGlobal_B0EEFC, 4, 141, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71da7a*/
}
}
} // namespace gamemd

// 0x71DCA0
namespace gamemd {
int ObjectTypeClass_LoadTheaterSHP(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ObjectTypeClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // edi
  char Buffer[512]; // [esp+78h] [ebp-200h] BYREF

  result = g_RulesClassInitState; /*0x71dca0*/
  for ( i = 0; i < g_RulesClassInitState; ++i ) /*0x71dcb6*/
  {
    int v4 = *((_DWORD *)DataGlobal_A8E31C + i); /*0x71dcc2*/
    if ( *(_BYTE *)(v4 + 556) ) /*0x71dcc5*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x71dcef*/
      if ( *(_BYTE *)(v4 + 168) ) /*0x71dcf4*/
      {
        if ( *(_DWORD *)(v4 + 164) ) /*0x71dd01*/
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x71dd0c*/
      }
      *(_DWORD *)(v4 + 164) = 0; /*0x71dd18*/
      *(_BYTE *)(v4 + 168) = 0; /*0x71dd23*/
  _DWORD v5[22]; // [esp+Ch] [ebp-26Ch] BYREF
      CCFileClass::Construct(v5, Buffer); /*0x71dd29*/
      *(_DWORD *)(v4 + 164) = CCFileClass::ReadEntireFile(v5); /*0x71dd3b*/
      v5[0] = &vt_CCFileClass; /*0x71dd41*/
      int v7 = 0; /*0x71dd49*/
  _BYTE v6[12]; // [esp+64h] [ebp-214h] BYREF
      Vector::Clear((int)v6); /*0x71dd4d*/
      v5[0] = &off_7E1668; /*0x71dd56*/
      BufferIOFileClass::Dtor(v5); /*0x71dd5e*/
    }
    result = g_RulesClassInitState; /*0x71dd63*/
  }
  return result; /*0x71dd72*/
}
}
} // namespace gamemd

// 0x7108E0
namespace gamemd {
void sub_7108E0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0EB60 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x710910
namespace gamemd {
void sub_710910()
{
{
    DataGlobal_B0EBB0 = DataGlobal_B0EB60 / 60.0;
}
}
} // namespace gamemd

// 0x710930
namespace gamemd {
void sub_710930()
{
{
    DataGlobal_B0EB98 = 1.0 / DataGlobal_B0EBB0;
}
}
} // namespace gamemd

// 0x710950
namespace gamemd {
void sub_710950()
{
{
    DataGlobal_B0EB90 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x710970
namespace gamemd {
void sub_710970()
{
{
    DataGlobal_B0EB68 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x710990
namespace gamemd {
void sub_710990()
{
{
    DataGlobal_B0EB40 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7109B0
namespace gamemd {
long long sub_7109B0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0EB40 - DataGlobal_B0EB68);
    result = Math::RoundToInt(v0 * DataGlobal_B0EB60 * 0.5);
    DataGlobal_B0EBB8 = result;
    return result;
}
}
} // namespace gamemd

// 0x7109F0
namespace gamemd {
void sub_7109F0()
{
{
    DataGlobal_B0EB70 = Math::ArcTan((double)DataGlobal_B0EBB8 * 0.00390625);
}
}
} // namespace gamemd

// 0x710A20
namespace gamemd {
void sub_710A20()
{
{
    DataGlobal_B0EB88 = Math::ArcTan((double)(2 * DataGlobal_B0EBB8) / DataGlobal_B0EB60);
}
}
} // namespace gamemd

// 0x710A50
namespace gamemd {
long long sub_710A50()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0EBB8) + 0.5);
    DataGlobal_B0EBAC = result;
    return result;
}
}
} // namespace gamemd

// 0x710A80
namespace gamemd {
int sub_710A80()
{
{
    DataGlobal_B0EB58 = 0;
    DataGlobal_B0EB5A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x710A90
namespace gamemd {
int sub_710A90()
{
{
    DataGlobal_B0EB78 = 0;
    DataGlobal_B0EB7C = 0;
    DataGlobal_B0EB80 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x710AB0
namespace gamemd {
int sub_710AB0()
{
{
    DataGlobal_B0EBA8 = 0;
    DataGlobal_B0EBA0 = 128;
    DataGlobal_B0EBA4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x710AD0
namespace gamemd {
int sub_710AD0()
{
{
    DataGlobal_B0EB48 = 0;
    DataGlobal_B0EB4C = 0;
    DataGlobal_B0EB50 = 0;
    DataGlobal_B0EB54 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7179C0
namespace gamemd {
void nullsub_86()
{
  ;
}
} // namespace gamemd

// 0x717A40
namespace gamemd {
int E4Recv_717A40::ReadPointerFromECX4()
{
{
    return *(int *)this;
}
}
} // namespace gamemd

// 0x717DF0
namespace gamemd {
void sub_717DF0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0EBE0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x717E20
namespace gamemd {
void sub_717E20()
{
{
    DataGlobal_B0EC30 = DataGlobal_B0EBE0 / 60.0;
}
}
} // namespace gamemd

// 0x717E40
namespace gamemd {
void sub_717E40()
{
{
    DataGlobal_B0EC18 = 1.0 / DataGlobal_B0EC30;
}
}
} // namespace gamemd

// 0x717E60
namespace gamemd {
void sub_717E60()
{
{
    DataGlobal_B0EC10 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x717E80
namespace gamemd {
void sub_717E80()
{
{
    DataGlobal_B0EBE8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x717EA0
namespace gamemd {
void sub_717EA0()
{
{
    DataGlobal_B0EBC0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x717EC0
namespace gamemd {
long long sub_717EC0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0EBC0 - DataGlobal_B0EBE8);
    result = Math::RoundToInt(v0 * DataGlobal_B0EBE0 * 0.5);
    DataGlobal_B0EC38 = result;
    return result;
}
}
} // namespace gamemd

// 0x717F00
namespace gamemd {
void sub_717F00()
{
{
    DataGlobal_B0EBF0 = Math::ArcTan((double)DataGlobal_B0EC38 * 0.00390625);
}
}
} // namespace gamemd

// 0x717F30
namespace gamemd {
void sub_717F30()
{
{
    DataGlobal_B0EC08 = Math::ArcTan((double)(2 * DataGlobal_B0EC38) / DataGlobal_B0EBE0);
}
}
} // namespace gamemd

// 0x717F60
namespace gamemd {
long long sub_717F60()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0EC38) + 0.5);
    DataGlobal_B0EC2C = result;
    return result;
}
}
} // namespace gamemd

// 0x717F90
namespace gamemd {
int sub_717F90()
{
{
    DataGlobal_B0EBD8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x717FA0
namespace gamemd {
int sub_717FA0()
{
{
    DataGlobal_B0EBF8 = 0;
    DataGlobal_B0EBFC = 0;
    DataGlobal_B0EC00 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x717FC0
namespace gamemd {
int sub_717FC0()
{
{
    DataGlobal_B0EC28 = 0;
    DataGlobal_B0EC20 = 128;
    DataGlobal_B0EC24 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x717FE0
namespace gamemd {
int sub_717FE0()
{
{
    DataGlobal_B0EBC8 = 0;
    DataGlobal_B0EBCC = 0;
    DataGlobal_B0EBD0 = 0;
    DataGlobal_B0EBD4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71A1C0
namespace gamemd {
void sub_71A1C0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0EC78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x71A1F0
namespace gamemd {
void sub_71A1F0()
{
{
    DataGlobal_B0ECC8 = DataGlobal_B0EC78 / 60.0;
}
}
} // namespace gamemd

// 0x71A210
namespace gamemd {
void sub_71A210()
{
{
    DataGlobal_B0ECB0 = 1.0 / DataGlobal_B0ECC8;
}
}
} // namespace gamemd

// 0x71A230
namespace gamemd {
void sub_71A230()
{
{
    DataGlobal_B0ECA8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x71A250
namespace gamemd {
void sub_71A250()
{
{
    DataGlobal_B0EC80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x71A270
namespace gamemd {
void sub_71A270()
{
{
    DataGlobal_B0EC40 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x71A290
namespace gamemd {
long long sub_71A290()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0EC40 - DataGlobal_B0EC80);
    result = Math::RoundToInt(v0 * DataGlobal_B0EC78 * 0.5);
    DataGlobal_B0ECD0 = result;
    return result;
}
}
} // namespace gamemd

// 0x71A2D0
namespace gamemd {
void sub_71A2D0()
{
{
    DataGlobal_B0EC88 = Math::ArcTan((double)DataGlobal_B0ECD0 * 0.00390625);
}
}
} // namespace gamemd

// 0x71A300
namespace gamemd {
void sub_71A300()
{
{
    DataGlobal_B0ECA0 = Math::ArcTan((double)(2 * DataGlobal_B0ECD0) / DataGlobal_B0EC78);
}
}
} // namespace gamemd

// 0x71A330
namespace gamemd {
long long sub_71A330()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0ECD0) + 0.5);
    DataGlobal_B0ECC4 = result;
    return result;
}
}
} // namespace gamemd

// 0x71A360
namespace gamemd {
int sub_71A360()
{
{
    DataGlobal_B0EC58 = 0;
    DataGlobal_B0EC5A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71A370
namespace gamemd {
int sub_71A370()
{
{
    DataGlobal_B0EC90 = 0;
    DataGlobal_B0EC94 = 0;
    DataGlobal_B0EC98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71A390
namespace gamemd {
int sub_71A390()
{
{
    DataGlobal_B0ECC0 = 0;
    DataGlobal_B0ECB8 = 128;
    DataGlobal_B0ECBC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x71A3B0
namespace gamemd {
int sub_71A3B0()
{
{
    DataGlobal_B0EC48 = 0;
    DataGlobal_B0EC4C = 0;
    DataGlobal_B0EC50 = 0;
    DataGlobal_B0EC54 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71A3D0
namespace gamemd {
int sub_71A3D0()
{
{
    DataGlobal_B0EC64 = 0;
    DataGlobal_B0EC68 = 0;
    DataGlobal_B0EC6C = 1;
    DataGlobal_B0EC6D = 0;
    DataGlobal_B0EC60 = (int)&vt_DynamicVectorClass_TemporalClass;
    DataGlobal_B0EC74 = 10;
    DataGlobal_B0EC70 = 0;
    return atexit(sub_71A410);
}
}
} // namespace gamemd

// 0x71A410
namespace gamemd {
void sub_71A410()
{
{
    DataGlobal_B0EC60 = (int)&vt_VectorClass_TemporalClass;
    if ( DataGlobal_B0EC64 && DataGlobal_B0EC6D )
  {
    __3_YAXPAX_Z(DataGlobal_B0EC64);
    DataGlobal_B0EC64 = 0;
  }
    DataGlobal_B0EC6D = 0;
    DataGlobal_B0EC68 = 0;
}
}
} // namespace gamemd

// 0x71AD30
namespace gamemd {
void nullsub_246()
{
  ;
}
} // namespace gamemd

// 0x71B5A0
namespace gamemd {
void sub_71B5A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0ECF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x71B5D0
namespace gamemd {
void sub_71B5D0()
{
{
    DataGlobal_B0ED48 = DataGlobal_B0ECF8 / 60.0;
}
}
} // namespace gamemd

// 0x71B5F0
namespace gamemd {
void sub_71B5F0()
{
{
    DataGlobal_B0ED30 = 1.0 / DataGlobal_B0ED48;
}
}
} // namespace gamemd

// 0x71B610
namespace gamemd {
void sub_71B610()
{
{
    DataGlobal_B0ED28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x71B630
namespace gamemd {
void sub_71B630()
{
{
    DataGlobal_B0ED00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x71B650
namespace gamemd {
void sub_71B650()
{
{
    DataGlobal_B0ECD8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x71B670
namespace gamemd {
long long sub_71B670()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0ECD8 - DataGlobal_B0ED00);
    result = Math::RoundToInt(v0 * DataGlobal_B0ECF8 * 0.5);
    DataGlobal_B0ED50 = result;
    return result;
}
}
} // namespace gamemd

// 0x71B6B0
namespace gamemd {
void sub_71B6B0()
{
{
    DataGlobal_B0ED08 = Math::ArcTan((double)DataGlobal_B0ED50 * 0.00390625);
}
}
} // namespace gamemd

// 0x71B6E0
namespace gamemd {
void sub_71B6E0()
{
{
    DataGlobal_B0ED20 = Math::ArcTan((double)(2 * DataGlobal_B0ED50) / DataGlobal_B0ECF8);
}
}
} // namespace gamemd

// 0x71B710
namespace gamemd {
long long sub_71B710()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0ED50) + 0.5);
    DataGlobal_B0ED44 = result;
    return result;
}
}
} // namespace gamemd

// 0x71B740
namespace gamemd {
int sub_71B740()
{
{
    DataGlobal_B0ECF0 = 0;
    DataGlobal_B0ECF2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71B750
namespace gamemd {
int sub_71B750()
{
{
    DataGlobal_B0ED10 = 0;
    DataGlobal_B0ED14 = 0;
    DataGlobal_B0ED18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71B770
namespace gamemd {
int sub_71B770()
{
{
    DataGlobal_B0ED40 = 0;
    DataGlobal_B0ED38 = 128;
    DataGlobal_B0ED3C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x71B790
namespace gamemd {
int sub_71B790()
{
{
    DataGlobal_B0ECE0 = 0;
    DataGlobal_B0ECE4 = 0;
    DataGlobal_B0ECE8 = 0;
    DataGlobal_B0ECEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71C8E0
namespace gamemd {
char E4Recv_71C8E0::sub_71C8E0()
{
{
    char result;
    int v2;
    result = (unsigned char)this->M205;
    if ( !result )
  {
    this->M205 = 1;
    this->M180 = g_CurrentFrame;
    this->M192 = 2;
    this->M184 = v2;
    this->M188 = 2;
    this->M172 = 0;
    return v2;
  }
    return result;
}
}
} // namespace gamemd

// 0x71D370
namespace gamemd {
int sub_71D370()
{
{
    DataGlobal_B0ED68 = 0;
    DataGlobal_B0ED6C = 0;
    DataGlobal_B0ED70 = 0;
    DataGlobal_B0ED74 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71D390
namespace gamemd {
void sub_71D390()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0ED80 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x71D3C0
namespace gamemd {
void sub_71D3C0()
{
{
    DataGlobal_B0F140 = DataGlobal_B0ED80 / 60.0;
}
}
} // namespace gamemd

// 0x71D3E0
namespace gamemd {
void sub_71D3E0()
{
{
    DataGlobal_B0EDB8 = 1.0 / DataGlobal_B0F140;
}
}
} // namespace gamemd

// 0x71D400
namespace gamemd {
void sub_71D400()
{
{
    DataGlobal_B0EDB0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x71D420
namespace gamemd {
void sub_71D420()
{
{
    DataGlobal_B0ED88 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x71D440
namespace gamemd {
void sub_71D440()
{
{
    DataGlobal_B0ED58 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x71D460
namespace gamemd {
long long sub_71D460()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0ED58 - DataGlobal_B0ED88);
    result = Math::RoundToInt(v0 * DataGlobal_B0ED80 * 0.5);
    DataGlobal_B0F148 = result;
    return result;
}
}
} // namespace gamemd

// 0x71D4A0
namespace gamemd {
void sub_71D4A0()
{
{
    DataGlobal_B0ED90 = Math::ArcTan((double)DataGlobal_B0F148 * 0.00390625);
}
}
} // namespace gamemd

// 0x71D4D0
namespace gamemd {
void sub_71D4D0()
{
{
    DataGlobal_B0EDA8 = Math::ArcTan((double)(2 * DataGlobal_B0F148) / DataGlobal_B0ED80);
}
}
} // namespace gamemd

// 0x71D500
namespace gamemd {
long long sub_71D500()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F148) + 0.5);
    DataGlobal_B0F13C = result;
    return result;
}
}
} // namespace gamemd

// 0x71D530
namespace gamemd {
int sub_71D530()
{
{
    DataGlobal_B0ED7C = 0;
    DataGlobal_B0ED7E = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71D540
namespace gamemd {
int sub_71D540()
{
{
    DataGlobal_B0ED98 = 0;
    DataGlobal_B0ED9C = 0;
    DataGlobal_B0EDA0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71D560
namespace gamemd {
int sub_71D560()
{
{
    DataGlobal_B0F138 = 0;
    DataGlobal_B0F130 = 128;
    DataGlobal_B0F134 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x71DE90
namespace gamemd {
void nullsub_247()
{
  ;
}
} // namespace gamemd

// 0x71E410
namespace gamemd {
void sub_71E410()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0F170 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x71E440
namespace gamemd {
void sub_71E440()
{
{
    DataGlobal_B0F1D8 = DataGlobal_B0F170 / 60.0;
}
}
} // namespace gamemd

// 0x71E460
namespace gamemd {
void sub_71E460()
{
{
    DataGlobal_B0F1C0 = 1.0 / DataGlobal_B0F1D8;
}
}
} // namespace gamemd

// 0x71E480
namespace gamemd {
void sub_71E480()
{
{
    DataGlobal_B0F1B8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x71E4A0
namespace gamemd {
void sub_71E4A0()
{
{
    DataGlobal_B0F178 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x71E4C0
namespace gamemd {
void sub_71E4C0()
{
{
    DataGlobal_B0F150 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x71E4E0
namespace gamemd {
long long sub_71E4E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F150 - DataGlobal_B0F178);
    result = Math::RoundToInt(v0 * DataGlobal_B0F170 * 0.5);
    DataGlobal_B0F1E0 = result;
    return result;
}
}
} // namespace gamemd

// 0x71E520
namespace gamemd {
void sub_71E520()
{
{
    DataGlobal_B0F180 = Math::ArcTan((double)DataGlobal_B0F1E0 * 0.00390625);
}
}
} // namespace gamemd

// 0x71E550
namespace gamemd {
void sub_71E550()
{
{
    DataGlobal_B0F198 = Math::ArcTan((double)(2 * DataGlobal_B0F1E0) / DataGlobal_B0F170);
}
}
} // namespace gamemd

// 0x71E580
namespace gamemd {
long long sub_71E580()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F1E0) + 0.5);
    DataGlobal_B0F1D4 = result;
    return result;
}
}
} // namespace gamemd

// 0x71E5B0
namespace gamemd {
int sub_71E5B0()
{
{
    DataGlobal_B0F168 = 0;
    DataGlobal_B0F16A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71E5C0
namespace gamemd {
int sub_71E5C0()
{
{
    DataGlobal_B0F188 = 0;
    DataGlobal_B0F18C = 0;
    DataGlobal_B0F190 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71E5E0
namespace gamemd {
int sub_71E5E0()
{
{
    DataGlobal_B0F1D0 = 0;
    DataGlobal_B0F1C8 = 128;
    DataGlobal_B0F1CC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x71E600
namespace gamemd {
int sub_71E600()
{
{
    DataGlobal_B0F158 = 0;
    DataGlobal_B0F15C = 0;
    DataGlobal_B0F160 = 0;
    DataGlobal_B0F164 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71E620
namespace gamemd {
int sub_71E620()
{
{
    DataGlobal_B0F1A4 = 0;
    DataGlobal_B0F1A8 = 0;
    DataGlobal_B0F1AC = 1;
    DataGlobal_B0F1AD = 0;
    DataGlobal_B0F1A0 = (int)&vt_DynamicVectorClass_TEventClass;
    DataGlobal_B0F1B4 = 10;
    DataGlobal_B0F1B0 = 0;
    return atexit(sub_71E660);
}
}
} // namespace gamemd

// 0x71E660
namespace gamemd {
void sub_71E660()
{
{
    DataGlobal_B0F1A0 = (int)&vt_VectorClass_TEventClass;
    if ( DataGlobal_B0F1A4 && DataGlobal_B0F1AD )
  {
    __3_YAXPAX_Z(DataGlobal_B0F1A4);
    DataGlobal_B0F1A4 = 0;
  }
    DataGlobal_B0F1AD = 0;
    DataGlobal_B0F1A8 = 0;
}
}
} // namespace gamemd

// 0x71FA40
namespace gamemd {
int E4Recv_71FA40::sub_71FA40(int a2)
{
{
    this->M84 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x71FF00
namespace gamemd {
int sub_71FF00()
{
{
    DataGlobal_B0F1E8 = 0;
    DataGlobal_B0F1EC = 0;
    DataGlobal_B0F1F0 = 0;
    DataGlobal_B0F1F4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x71FF20
namespace gamemd {
int E4Recv_71FF20::sub_71FF20(int aP1, int a3, int a4, int aP2, int aP3, int aP4, int aP5, char a9, ShapeButtonClass * aP9)
{
{
    ControlClass *Instance;
    ToggleClass::Construct( (int)this, (ControlClass *)aP1, (ControlClass *)aP2, (ControlClass *)aP3, (ControlClass *)aP4, (ControlClass *)aP5);
    this->__pad_0[53] = (char)aP9;
    this->__pad_0[52] = a9;
    this->field_38 = a3;
    this->M60 = a4;
    *(int *)this->__pad_0 = &vt_TextButtonClass;
    if ( aP4 == -1 || aP5 == -1 )
  {
    Instance = (ControlClass *)TextRenderer::GetInstance();
    if ( aP4 == -1 )
    *(int *)&this->__pad_0[20] = Text::MeasureWidth(this->field_38, 0) + 8;
    if ( aP5 == -1 )
    *(int *)&this->__pad_0[24] = Instance[1].ControlClass_field_0x0C + 2;
  }
    return (int)this->__pad_0;
}
}
} // namespace gamemd
