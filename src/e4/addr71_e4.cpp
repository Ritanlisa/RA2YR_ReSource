// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/ToggleClass_e4.hpp"  // G57w10 D supply

// 0x710860
namespace gamemd {  // G42.18 ns repair
int sub_710860(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x710870*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}  // G42.18 ns repair
// 0x7187A0
namespace gamemd {
UnitTypeClass * * E4Recv_7187A0::ProcessUnitDeploymentAtCell(int a2, int a3, int a4)
{

  unsigned int *i; // edi
  bool v6; // bl
  int v7; // eax
  unsigned int *v8; // eax
  TechnoClass *v9; // ecx
  int v10; // ecx
  unsigned int *v11; // ecx
  unsigned int *v12; // eax
  int *vtable3; // ecx
  int v14; // edi
  void *v15; // eax
  Cell *v16; // eax
  TechnoClass *v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  char v22; // [esp+31h] [ebp-5h]
  __int16 v23[2]; // [esp+32h] [ebp-4h] BYREF

  for ( i = (unsigned int *)Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->firstObject; i; i = (unsigned int *)i[12] ) /*0x7187bf*/
  {
    if ( (*(unsigned __int8 (**)(unsigned int *))(*i + 352))(i) ) /*0x7187c5*/
    {
      *(unsigned int *)v23 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)this->vtable3 + 132))(this->vtable3) + 160); /*0x7187e7*/
      (*(void (**)(int, __int16 *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)this->vtable3 /*0x718804*/
                                                                                          + 364))(
        this->vtable3,
        v23,
        0,
        *&dword_8871E0->u32_FA8,
        0,
        1,
        0,
        0);
    }
  }
  v22 = 0; /*0x718814*/
  if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)this->vtable3 + 132))(this->vtable3) + 3278) /*0x71885d*/
    && ((Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->flags & 0x100) != 0
     || Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->landType == 1) )
  {
    v22 = 1; /*0x71885f*/
  }
  v6 = 0; /*0x718867*/
  if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)this->vtable3 + 132))(this->vtable3) + 1660) == 3 ) /*0x718878*/
  {
    v6 = 1; /*0x71887d*/
    if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)this->vtable3 + 132))(this->vtable3) + 1040) ) /*0x718887*/
    {
      v7 = (*(int (**)(int))(*(unsigned int *)this->vtable3 + 132))(this->vtable3); /*0x718896*/
      v6 = HouseClass::GainedPoweredCenter(*(HouseClass **)(this->vtable3 + 540), v7); /*0x7188af*/
    }
  }
  v23[0] = a2 / 256; /*0x7188c1*/
  v23[1] = a3 / 256; /*0x7188da*/
  if ( *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23) + 59) != 2 /*0x718962*/
    || v6
    || *(unsigned char *)((*(int (**)(int))(*(unsigned int *)this->vtable3 + 132))(this->vtable3) + 3278)
    || (*(int (**)(int))(*(unsigned int *)this->vtable3 + 44))(this->vtable3) == 15
    || (Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->flags & 0x100) != 0
    || Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->landType == 1 )
  {
    vtable3 = (int *)this->vtable3; /*0x718a01*/
    v23[0] = a2 / 256; /*0x718a14*/
    v23[1] = a3 / 256; /*0x718a2f*/
    v14 = *vtable3; /*0x718a3c*/
    v15 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23); /*0x718a46*/
    if ( (*(int (**)(int, void *, int, int, unsigned int, int))(v14 + 428))(this->vtable3, v15, -1, -1, 0, 1) == 7 /*0x718a60*/
      || (LOBYTE(v12) = v22) != 0 )
    {
      v23[0] = a2 / 256; /*0x718a80*/
      v23[1] = a3 / 256; /*0x718a95*/
      v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23); /*0x718aa2*/
      if ( !(unsigned __int8)Cell::IsGroundTypeRange(v16) /*0x718abd*/
        || (*(int (**)(int))(*(unsigned int *)this->vtable3 + 44))(this->vtable3) == 15 )
      {
        v19 = (*(int (**)(int))(*(unsigned int *)this->vtable3 + 132))(this->vtable3); /*0x718b23*/
        v20 = this->vtable3; /*0x718b2f*/
        *(unsigned int *)v23 = *(unsigned int *)(v19 + 160); /*0x718b32*/
        LOBYTE(v12) = (*(char (**)(int, __int16 *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)v20 + 364))( /*0x718b53*/
                        v20,
                        v23,
                        0,
                        *&dword_8871E0->u32_FA8,
                        0,
                        1,
                        0,
                        0);
      }
      else
      {
        *(unsigned char *)(this->vtable3 + 973) = 1; /*0x718ac2*/
        (*(void (**)(int))(*(unsigned int *)this->vtable3 + 928))(this->vtable3); /*0x718ace*/
        v12 = (unsigned int *)this->vtable3; /*0x718ad4*/
        v17 = v12->threatAvoidValue; /*0x718ad7*/
        if ( v17 ) /*0x718adf*/
        {
          TechnoClass::MutateAll(v17, v12[266], v12[267]); /*0x718aef*/
          v18 = *(unsigned int *)(this->vtable3 + 728); /*0x718af7*/
          if ( v18 ) /*0x718aff*/
            (*(void (**)(int, int))(*(unsigned int *)v18 + 32))(v18, 1); /*0x718b05*/
          v12 = (unsigned int *)this->vtable3; /*0x718b08*/
          v12[182] = 0; /*0x718b0e*/
        }
      }
    }
  }
  else
  {
    *(unsigned char *)(this->vtable3 + 973) = 1; /*0x71896b*/
    (*(void (**)(int))(*(unsigned int *)this->vtable3 + 928))(this->vtable3); /*0x718977*/
    v8 = (unsigned int *)this->vtable3; /*0x71897d*/
    v9 = v8->threatAvoidValue; /*0x718980*/
    if ( v9 ) /*0x718988*/
    {
      TechnoClass::MutateAll(v9, v8[266], v8[267]); /*0x718998*/
      v10 = *(unsigned int *)(this->vtable3 + 728); /*0x7189a0*/
      if ( v10 ) /*0x7189a8*/
        (*(void (**)(int, int))(*(unsigned int *)v10 + 32))(v10, 1); /*0x7189ae*/
      *(unsigned int *)(this->vtable3 + 728) = 0; /*0x7189b4*/
    }
    v11 = (unsigned int *)this->vtable3; /*0x7189be*/
    if ( v11[266] ) /*0x7189c1*/
    {
      LOBYTE(v12) = (*(char (**)(unsigned int *, unsigned int))(*v11 + 224))(v11, v11[266]); /*0x7189ce*/
    }
    else
    {
      v12 = v11->CreateSound; /*0x7189dd*/
      if ( v12 ) /*0x7189e5*/
        LOBYTE(v12) = (*(char (**)(unsigned int *, unsigned int))(*v11 + 228))(v11, v11[267]); /*0x7189ee*/
    }
  }
  return (char)v12; /*0x7189d4*/

}
}
// 0x71D580
namespace gamemd {
int InitializeCellSpreadTables()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0; /*0x71d582*/
  dword_B0EDC0 = 0; /*0x71d5a2*/
  dword_B0EDC4 = *(unsigned int *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d5b3*/
  memset(&unk_B0EDC8, 0, 0x20u); /*0x71d5c9*/
  Array::For  Array::ForEach((gamemd::Array *)((int)&unk_B0EDC8), 4, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); 
  dword_B0EDE8 = *(unsigned int *)CellStruct::Set(&v4, 0, 0); /*0x71d5ec*/
  dword_B0EDEC = *(unsigned int *)CellStruct::Set(&v4, 1, 0); /*0x71d607*/
  dword_B0EDF0 = *(unsigned int *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d618*/
  memset(&unk_B0EDF4, 0, 0x1Cu); /*0x71d62e*/
  Array::For  Array::ForEach((gamemd::Array *)((int)&unk_B0EDF4), 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); 
  dword_B0EE10 = *(unsigned int *)CellStruct::Set(&v4, 0, 0); /*0x71d651*/
  dword_B0EE14 = *(unsigned int *)CellStruct::Set(&v4, 0, 1); /*0x71d66c*/
  dword_B0EE18 = *(unsigned int *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d67d*/
  memset(&unk_B0EE1C, 0, 0x1Cu); /*0x71d693*/
  Array::For  Array::ForEach((gamemd::Array *)((int)&unk_B0EE1C), 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); 
  dword_B0EE38 = *(unsigned int *)CellStruct::Set(&v4, 0, 0); /*0x71d6b0*/
  dword_B0EE3C = *(unsigned int *)CellStruct::Set(&v4, 1, 0); /*0x71d6cb*/
  dword_B0EE40 = *(unsigned int *)CellStruct::Set(&v4, 0, 1); /*0x71d6d9*/
  dword_B0EE44 = *(unsigned int *)CellStruct::Set(&v4, 1, 1); /*0x71d6fa*/
  v0 = *(unsigned int *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d705*/
  dword_B0EE4C = 0; /*0x71d709*/
  dword_B0EE50 = 0; /*0x71d714*/
  dword_B0EE54 = 0; /*0x71d71c*/
  dword_B0EE58 = 0; /*0x71d724*/
  dword_B0EE48 = v0; /*0x71d72f*/
  dword_B0EE5C = 0; /*0x71d734*/
  Array::For  Array::ForEach((gamemd::Array *)((int)&dword_B0EE4C), 4, 5, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); 
  dword_B0EE60 = *(unsigned int *)CellStruct::Set(&v4, 0, 0); /*0x71d756*/
  dword_B0EE64 = *(unsigned int *)CellStruct::Set(&v4, 1, 0); /*0x71d76b*/
  dword_B0EE68 = *(unsigned int *)CellStruct::Set(&v4, 0, 1); /*0x71d779*/
  dword_B0EE6C = *(unsigned int *)CellStruct::Set(&v4, 1, 1); /*0x71d794*/
  dword_B0EE70 = *(unsigned int *)CellStruct::Set(&v4, 0, 2); /*0x71d7a9*/
  dword_B0EE74 = *(unsigned int *)CellStruct::Set(&v4, 1, 2); /*0x71d7ba*/
  v1 = *(unsigned int *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d7ce*/
  dword_B0EE7C = 0; /*0x71d7d2*/
  dword_B0EE78 = v1; /*0x71d7d7*/
  dword_B0EE80 = 0; /*0x71d7dd*/
  dword_B0EE84 = 0; /*0x71d7e7*/
  Array::For  Array::ForEach((gamemd::Array *)((int)&dword_B0EE7C), 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); 
  dword_B0EE88 = *(unsigned int *)CellStruct::Set(&v4, 0, 0); /*0x71d80b*/
  dword_B0EE8C = *(unsigned int *)CellStruct::Set(&v4, 1, 0); /*0x71d826*/
  dword_B0EE90 = *(unsigned int *)CellStruct::Set(&v4, 2, 0); /*0x71d83b*/
  dword_B0EE94 = *(unsigned int *)CellStruct::Set(&v4, 0, 1); /*0x71d849*/
  dword_B0EE98 = *(unsigned int *)CellStruct::Set(&v4, 1, 1); /*0x71d864*/
  dword_B0EE9C = *(unsigned int *)CellStruct::Set(&v4, 2, 1); /*0x71d87f*/
  v2 = *(unsigned int *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d889*/
  dword_B0EEA4 = 0; /*0x71d88d*/
  dword_B0EEA8 = 0; /*0x71d89a*/
  dword_B0EEA0 = v2; /*0x71d8a7*/
  dword_B0EEAC = 0; /*0x71d8ad*/
  Array::For  Array::ForEach((gamemd::Array *)((int)&dword_B0EEA4), 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); 
  dword_B0EEB0 = *(unsigned int *)CellStruct::Set(&v4, 0, 0); /*0x71d8cf*/
  dword_B0EEB4 = *(unsigned int *)CellStruct::Set(&v4, 1, 0); /*0x71d8dd*/
  dword_B0EEB8 = *(unsigned int *)CellStruct::Set(&v4, 2, 0); /*0x71d8f8*/
  dword_B0EEBC = *(unsigned int *)CellStruct::Set(&v4, 0, 1); /*0x71d907*/
  dword_B0EEC0 = *(unsigned int *)CellStruct::Set(&v4, 1, 1); /*0x71d91b*/
  dword_B0EEC4 = *(unsigned int *)CellStruct::Set(&v4, 2, 1); /*0x71d936*/
  dword_B0EEC8 = *(unsigned int *)CellStruct::Set(&v4, 0, 2); /*0x71d94b*/
  dword_B0EECC = *(unsigned int *)CellStruct::Set(&v4, 1, 2); /*0x71d959*/
  dword_B0EED0 = *(unsigned int *)CellStruct::Set(&v4, 2, 2); /*0x71d97a*/
  dword_B0EED4 = *(unsigned int *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d98f*/
  dword_B0EED8 = *(unsigned int *)CellStruct::Set(&v4, 0, 0); /*0x71d99d*/
  dword_B0EEDC = *(unsigned int *)CellStruct::Set(&v4, 1, 0); /*0x71d9b8*/
  dword_B0EEE0 = *(unsigned int *)CellStruct::Set(&v4, 2, 0); /*0x71d9cd*/
  dword_B0EEE4 = *(unsigned int *)CellStruct::Set(&v4, 3, 0); /*0x71d9db*/
  dword_B0EEE8 = *(unsigned int *)CellStruct::Set(&v4, 0, 1); /*0x71d9f6*/
  dword_B0EEEC = *(unsigned int *)CellStruct::Set(&v4, 1, 1); /*0x71da0b*/
  dword_B0EEF0 = *(unsigned int *)CellStruct::Set(&v4, 2, 1); /*0x71da19*/
  dword_B0EEF4 = *(unsigned int *)CellStruct::Set(&v4, 3, 1); /*0x71da3a*/
  dword_B0EEF8 = *(unsigned int *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71da4c*/
  dword_B0EEFC = 0; /*0x71da62*/
  memset(&unk_B0EF00, 0, 0x230u); /*0x71da73*/
  return Arr  return Array::ForEach((gamemd::Array *)((int)&dword_B0EEFC), 4, 141, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); 
}
}
// 0x71DCA0
namespace gamemd {
int ObjectTypeClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  unsigned int v5[22]; // [esp+Ch] [ebp-26Ch] BYREF
  unsigned char v6[12]; // [esp+64h] [ebp-214h] BYREF
  int v7; // [esp+70h] [ebp-208h]
  char Buffer[512]; // [esp+78h] [ebp-200h] BYREF

  result = dword_A8E328; /*0x71dca0*/
  for ( i = 0; i < dword_A8E328; ++i ) /*0x71dcb6*/
  {
    v4 = *((unsigned int *)dword_A8E31C + i); /*0x71dcc2*/
    if ( *(unsigned char *)(v4 + 556) ) /*0x71dcc5*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x71dcef*/
      if ( *(unsigned char *)(v4 + 168) ) /*0x71dcf4*/
      {
        if ( *(unsigned int *)(v4 + 164) ) /*0x71dd01*/
          operator delete((void *)(*(void **)(v4 + 164))); /*0x71dd0c*/
      }
      *(unsigned int *)(v4 + 164) = 0; /*0x71dd18*/
      *(unsigned char *)(v4 + 168) = 0; /*0x71dd23*/
      CCFileClass::Construct(v5, Buffer); /*0x71dd29*/
      *(unsigned int *)(v4 + 164) = (unsigned int)(CCFileClass::ReadEntireFile(v5)); /*0x71dd3b*/
      v5[0] = (unsigned int)(&vt_CCFileClass); /*0x71dd41*/
      v7 = 0; /*0x71dd49*/
      Vector::Clear((int)v6); /*0x71dd4d*/
      v5[0] = (unsigned int)&off_7E1668; /*0x71dd56*/
      ((BufferIOFileClass *)(v5))->Dtor(); /*0x71dd5e*/
    }
    result = dword_A8E328; /*0x71dd63*/
  }
  return result; /*0x71dd72*/
}
}
// 0x7108E0
namespace gamemd {
void sub_7108E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7108ec*/
  dbl_B0EB60 = Math::Sqrt(v0 + v0); /*0x7108fe*/
}
} // namespace gamemd

// 0x710910
namespace gamemd {
void sub_710910()
{
  dbl_B0EBB0 = dbl_B0EB60 / 60.0; /*0x71091c*/
}
} // namespace gamemd

// 0x710930
namespace gamemd {
void sub_710930()
{
  dbl_B0EB98 = 1.0 / dbl_B0EBB0; /*0x71093c*/
}
} // namespace gamemd

// 0x710950
namespace gamemd {
void sub_710950()
{
  dbl_B0EB90 = 0.0174532925199433 * 45.0; /*0x71095c*/
}
} // namespace gamemd

// 0x710970
namespace gamemd {
void sub_710970()
{
  dbl_B0EB68 = 0.0174532925199433 * 60.0; /*0x71097c*/
}
} // namespace gamemd

// 0x710990
namespace gamemd {
void sub_710990()
{
  dbl_B0EB40 = 0.0174532925199433 * 90.0; /*0x71099c*/
}
} // namespace gamemd

// 0x7109B0
namespace gamemd {
long long sub_7109B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0EB40 - dbl_B0EB68); /*0x7109c2*/
  result = Math::RoundToInt(v0 * dbl_B0EB60 * 0.5); /*0x7109d6*/
  dword_B0EBB8 = result; /*0x7109db*/
  return result; /*0x7109e0*/
}
} // namespace gamemd

// 0x7109F0
namespace gamemd {
void sub_7109F0()
{
  dbl_B0EB70 = Math::ArcTan((double)dword_B0EBB8 * 0.00390625); /*0x710a07*/
}
} // namespace gamemd

// 0x710A20
namespace gamemd {
void sub_710A20()
{
  dbl_B0EB88 = Math::ArcTan((double)(2 * dword_B0EBB8) / dbl_B0EB60); /*0x710a42*/
}
} // namespace gamemd

// 0x710A50
namespace gamemd {
long long sub_710A50()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EBB8) + 0.5); /*0x710a6b*/
  dword_B0EBAC = result; /*0x710a70*/
  return result; /*0x710a76*/
}
} // namespace gamemd

// 0x710A80
namespace gamemd {
int sub_710A80()
{
  word_B0EB58 = 0; /*0x710a82*/
  word_B0EB5A = 0; /*0x710a88*/
  return 0; /*0x710a8e*/
}
} // namespace gamemd

// 0x710A90
namespace gamemd {
int sub_710A90()
{
  dword_B0EB78 = 0; /*0x710a92*/
  dword_B0EB7C = 0; /*0x710a97*/
  dword_B0EB80 = 0; /*0x710a9c*/
  return 0; /*0x710aa1*/
}
} // namespace gamemd

// 0x710AB0
namespace gamemd {
int sub_710AB0()
{
  dword_B0EBA8 = 0; /*0x710ab5*/
  dword_B0EBA0 = 128; /*0x710abf*/
  dword_B0EBA4 = 128; /*0x710ac4*/
  return 128; /*0x710ac9*/
}
} // namespace gamemd

// 0x710AD0
namespace gamemd {
int sub_710AD0()
{
  dword_B0EB48 = 0; /*0x710ad2*/
  dword_B0EB4C = 0; /*0x710ad7*/
  dword_B0EB50 = 0; /*0x710adc*/
  dword_B0EB54 = 0; /*0x710ae1*/
  return 0; /*0x710ae6*/
}
} // namespace gamemd

// 0x7179C0
namespace gamemd {
void ObjectClass::nullsub_86()
{
  ; /*0x7179c0*/
}
} // namespace gamemd

// 0x717A40
namespace gamemd {
int E4Recv_717A40::ReadPointerFromECX4()
{
  return (int)this->vfptr; /*0x717a42*/
}
} // namespace gamemd

// 0x717DF0
namespace gamemd {
void sub_717DF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x717dfc*/
  dbl_B0EBE0 = Math::Sqrt(v0 + v0); /*0x717e0e*/
}
} // namespace gamemd

// 0x717E20
namespace gamemd {
void sub_717E20()
{
  dbl_B0EC30 = dbl_B0EBE0 / 60.0; /*0x717e2c*/
}
} // namespace gamemd

// 0x717E40
namespace gamemd {
void sub_717E40()
{
  dbl_B0EC18 = 1.0 / dbl_B0EC30; /*0x717e4c*/
}
} // namespace gamemd

// 0x717E60
namespace gamemd {
void sub_717E60()
{
  dbl_B0EC10 = 0.0174532925199433 * 45.0; /*0x717e6c*/
}
} // namespace gamemd

// 0x717E80
namespace gamemd {
void sub_717E80()
{
  dbl_B0EBE8 = 0.0174532925199433 * 60.0; /*0x717e8c*/
}
} // namespace gamemd

// 0x717EA0
namespace gamemd {
void sub_717EA0()
{
  dbl_B0EBC0 = 0.0174532925199433 * 90.0; /*0x717eac*/
}
} // namespace gamemd

// 0x717EC0
namespace gamemd {
long long sub_717EC0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0EBC0 - dbl_B0EBE8); /*0x717ed2*/
  result = Math::RoundToInt(v0 * dbl_B0EBE0 * 0.5); /*0x717ee6*/
  dword_B0EC38 = result; /*0x717eeb*/
  return result; /*0x717ef0*/
}
} // namespace gamemd

// 0x717F00
namespace gamemd {
void sub_717F00()
{
  dbl_B0EBF0 = Math::ArcTan((double)dword_B0EC38 * 0.00390625); /*0x717f17*/
}
} // namespace gamemd

// 0x717F30
namespace gamemd {
void sub_717F30()
{
  dbl_B0EC08 = Math::ArcTan((double)(2 * dword_B0EC38) / dbl_B0EBE0); /*0x717f52*/
}
} // namespace gamemd

// 0x717F60
namespace gamemd {
long long sub_717F60()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EC38) + 0.5); /*0x717f7b*/
  dword_B0EC2C = result; /*0x717f80*/
  return result; /*0x717f86*/
}
} // namespace gamemd

// 0x717F90
namespace gamemd {
int sub_717F90()
{
  word_B0EBD8 = 0; /*0x717f92*/
  return 0; /*0x717f9e*/
}
} // namespace gamemd

// 0x717FA0
namespace gamemd {
int sub_717FA0()
{
  dword_B0EBF8 = 0; /*0x717fa2*/
  dword_B0EBFC = 0; /*0x717fa7*/
  dword_B0EC00 = 0; /*0x717fac*/
  return 0; /*0x717fb1*/
}
} // namespace gamemd

// 0x717FC0
namespace gamemd {
int sub_717FC0()
{
  dword_B0EC28 = 0; /*0x717fc5*/
  dword_B0EC20 = 128; /*0x717fcf*/
  dword_B0EC24 = 128; /*0x717fd4*/
  return 128; /*0x717fd9*/
}
} // namespace gamemd

// 0x717FE0
namespace gamemd {
int sub_717FE0()
{
  dword_B0EBC8 = 0; /*0x717fe2*/
  dword_B0EBCC = 0; /*0x717fe7*/
  dword_B0EBD0 = 0; /*0x717fec*/
  dword_B0EBD4 = 0; /*0x717ff1*/
  return 0; /*0x717ff6*/
}
} // namespace gamemd

// 0x71A1C0
namespace gamemd {
void sub_71A1C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71a1cc*/
  dbl_B0EC78 = Math::Sqrt(v0 + v0); /*0x71a1de*/
}
} // namespace gamemd

// 0x71A1F0
namespace gamemd {
void sub_71A1F0()
{
  dbl_B0ECC8 = dbl_B0EC78 / 60.0; /*0x71a1fc*/
}
} // namespace gamemd

// 0x71A210
namespace gamemd {
void sub_71A210()
{
  dbl_B0ECB0 = 1.0 / dbl_B0ECC8; /*0x71a21c*/
}
} // namespace gamemd

// 0x71A230
namespace gamemd {
void sub_71A230()
{
  dbl_B0ECA8 = 0.0174532925199433 * 45.0; /*0x71a23c*/
}
} // namespace gamemd

// 0x71A250
namespace gamemd {
void sub_71A250()
{
  dbl_B0EC80 = 0.0174532925199433 * 60.0; /*0x71a25c*/
}
} // namespace gamemd

// 0x71A270
namespace gamemd {
void sub_71A270()
{
  dbl_B0EC40 = 0.0174532925199433 * 90.0; /*0x71a27c*/
}
} // namespace gamemd

// 0x71A290
namespace gamemd {
long long sub_71A290()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0EC40 - dbl_B0EC80); /*0x71a2a2*/
  result = Math::RoundToInt(v0 * dbl_B0EC78 * 0.5); /*0x71a2b6*/
  dword_B0ECD0 = result; /*0x71a2bb*/
  return result; /*0x71a2c0*/
}
} // namespace gamemd

// 0x71A2D0
namespace gamemd {
void sub_71A2D0()
{
  dbl_B0EC88 = Math::ArcTan((double)dword_B0ECD0 * 0.00390625); /*0x71a2e7*/
}
} // namespace gamemd

// 0x71A300
namespace gamemd {
void sub_71A300()
{
  dbl_B0ECA0 = Math::ArcTan((double)(2 * dword_B0ECD0) / dbl_B0EC78); /*0x71a322*/
}
} // namespace gamemd

// 0x71A330
namespace gamemd {
long long sub_71A330()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0ECD0) + 0.5); /*0x71a34b*/
  dword_B0ECC4 = result; /*0x71a350*/
  return result; /*0x71a356*/
}
} // namespace gamemd

// 0x71A360
namespace gamemd {
int sub_71A360()
{
  word_B0EC58 = 0; /*0x71a362*/
  word_B0EC5A = 0; /*0x71a368*/
  return 0; /*0x71a36e*/
}
} // namespace gamemd

// 0x71A370
namespace gamemd {
int sub_71A370()
{
  dword_B0EC90 = 0; /*0x71a372*/
  dword_B0EC94 = 0; /*0x71a377*/
  dword_B0EC98 = 0; /*0x71a37c*/
  return 0; /*0x71a381*/
}
} // namespace gamemd

// 0x71A390
namespace gamemd {
int sub_71A390()
{
  dword_B0ECC0 = 0; /*0x71a395*/
  dword_B0ECB8 = 128; /*0x71a39f*/
  dword_B0ECBC = 128; /*0x71a3a4*/
  return 128; /*0x71a3a9*/
}
} // namespace gamemd

// 0x71A3B0
namespace gamemd {
int sub_71A3B0()
{
  dword_B0EC48 = 0; /*0x71a3b2*/
  dword_B0EC4C = 0; /*0x71a3b7*/
  dword_B0EC50 = 0; /*0x71a3bc*/
  dword_B0EC54 = 0; /*0x71a3c1*/
  return 0; /*0x71a3c6*/
}
} // namespace gamemd

// 0x71A3D0
namespace gamemd {
int sub_71A3D0()
{
  dword_B0EC64 = 0; /*0x71a3d7*/
  dword_B0EC68 = 0; /*0x71a3dc*/
  byte_B0EC6C = 1; /*0x71a3e1*/
  byte_B0EC6D = 0; /*0x71a3e8*/
  dword_B0EC60 = (int)&vt_DynamicVectorClass; /*0x71a3ed*/
  dword_B0EC74 = 10; /*0x71a3f7*/
  dword_B0EC70 = 0; /*0x71a401*/
  return atexit(sub_71A410); /*0x71a40c*/
}
} // namespace gamemd

// 0x71A410
namespace gamemd {
void sub_71A410()
{
  dword_B0EC60 = (int)&vt_VectorClass; /*0x71a418*/
  if ( dword_B0EC64 && byte_B0EC6D ) /*0x71a42c*/
  {
    operator delete((void *)(dword_B0EC64)); /*0x71a42f*/
    dword_B0EC64 = 0; /*0x71a437*/
  }
  byte_B0EC6D = 0; /*0x71a43d*/
  dword_B0EC68 = 0; /*0x71a443*/
}
} // namespace gamemd

// 0x71AD30
namespace gamemd {
void nullsub_246()
{
  ; /*0x71ad30*/
}
} // namespace gamemd

// 0x71B5A0
namespace gamemd {
void sub_71B5A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71b5ac*/
  dbl_B0ECF8 = Math::Sqrt(v0 + v0); /*0x71b5be*/
}
} // namespace gamemd

// 0x71B5D0
namespace gamemd {
void sub_71B5D0()
{
  dbl_B0ED48 = dbl_B0ECF8 / 60.0; /*0x71b5dc*/
}
} // namespace gamemd

// 0x71B5F0
namespace gamemd {
void sub_71B5F0()
{
  dbl_B0ED30 = 1.0 / dbl_B0ED48; /*0x71b5fc*/
}
} // namespace gamemd

// 0x71B610
namespace gamemd {
void sub_71B610()
{
  dbl_B0ED28 = 0.0174532925199433 * 45.0; /*0x71b61c*/
}
} // namespace gamemd

// 0x71B630
namespace gamemd {
void sub_71B630()
{
  dbl_B0ED00 = 0.0174532925199433 * 60.0; /*0x71b63c*/
}
} // namespace gamemd

// 0x71B650
namespace gamemd {
void sub_71B650()
{
  dbl_B0ECD8 = 0.0174532925199433 * 90.0; /*0x71b65c*/
}
} // namespace gamemd

// 0x71B670
namespace gamemd {
long long sub_71B670()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0ECD8 - dbl_B0ED00); /*0x71b682*/
  result = Math::RoundToInt(v0 * dbl_B0ECF8 * 0.5); /*0x71b696*/
  dword_B0ED50 = result; /*0x71b69b*/
  return result; /*0x71b6a0*/
}
} // namespace gamemd

// 0x71B6B0
namespace gamemd {
void sub_71B6B0()
{
  dbl_B0ED08 = Math::ArcTan((double)dword_B0ED50 * 0.00390625); /*0x71b6c7*/
}
} // namespace gamemd

// 0x71B6E0
namespace gamemd {
void sub_71B6E0()
{
  dbl_B0ED20 = Math::ArcTan((double)(2 * dword_B0ED50) / dbl_B0ECF8); /*0x71b702*/
}
} // namespace gamemd

// 0x71B710
namespace gamemd {
long long sub_71B710()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0ED50) + 0.5); /*0x71b72b*/
  dword_B0ED44 = result; /*0x71b730*/
  return result; /*0x71b736*/
}
} // namespace gamemd

// 0x71B740
namespace gamemd {
int sub_71B740()
{
  word_B0ECF0 = 0; /*0x71b742*/
  word_B0ECF2 = 0; /*0x71b748*/
  return 0; /*0x71b74e*/
}
} // namespace gamemd

// 0x71B750
namespace gamemd {
int sub_71B750()
{
  dword_B0ED10 = 0; /*0x71b752*/
  dword_B0ED14 = 0; /*0x71b757*/
  dword_B0ED18 = 0; /*0x71b75c*/
  return 0; /*0x71b761*/
}
} // namespace gamemd

// 0x71B770
namespace gamemd {
int sub_71B770()
{
  dword_B0ED40 = 0; /*0x71b775*/
  dword_B0ED38 = 128; /*0x71b77f*/
  dword_B0ED3C = 128; /*0x71b784*/
  return 128; /*0x71b789*/
}
} // namespace gamemd

// 0x71B790
namespace gamemd {
int sub_71B790()
{
  dword_B0ECE0 = 0; /*0x71b792*/
  dword_B0ECE4 = 0; /*0x71b797*/
  dword_B0ECE8 = 0; /*0x71b79c*/
  dword_B0ECEC = 0; /*0x71b7a1*/
  return 0; /*0x71b7a6*/
}
} // namespace gamemd

// 0x71C8E0
namespace gamemd {
char E4Recv_71C8E0::sub_71C8E0()
{
  char result; // al
  int v2; // [esp+4h] [ebp-8h]

  result = this->M205; /*0x71c8e0*/
  if ( !result ) /*0x71c8eb*/
  {
    this->M205 = 1; /*0x71c8ee*/
    this->M180 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x71c905*/
    this->M192 = 2; /*0x71c90b*/
    this->M184 = v2; /*0x71c911*/
    this->M188 = 2; /*0x71c914*/
    this->M172 = 0; /*0x71c917*/
    return v2; /*0x71c907*/
  }
  return result; /*0x71c922*/
}
} // namespace gamemd

// 0x71D370
namespace gamemd {
int sub_71D370()
{
  dword_B0ED68 = 0; /*0x71d372*/
  dword_B0ED6C = 0; /*0x71d377*/
  dword_B0ED70 = 0; /*0x71d37c*/
  dword_B0ED74 = 0; /*0x71d381*/
  return 0; /*0x71d386*/
}
} // namespace gamemd

// 0x71D390
namespace gamemd {
void sub_71D390()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71d39c*/
  dbl_B0ED80 = Math::Sqrt(v0 + v0); /*0x71d3ae*/
}
} // namespace gamemd

// 0x71D3C0
namespace gamemd {
void sub_71D3C0()
{
  dbl_B0F140 = dbl_B0ED80 / 60.0; /*0x71d3cc*/
}
} // namespace gamemd

// 0x71D3E0
namespace gamemd {
void sub_71D3E0()
{
  dbl_B0EDB8 = 1.0 / dbl_B0F140; /*0x71d3ec*/
}
} // namespace gamemd

// 0x71D400
namespace gamemd {
void sub_71D400()
{
  dbl_B0EDB0 = 0.0174532925199433 * 45.0; /*0x71d40c*/
}
} // namespace gamemd

// 0x71D420
namespace gamemd {
void sub_71D420()
{
  dbl_B0ED88 = 0.0174532925199433 * 60.0; /*0x71d42c*/
}
} // namespace gamemd

// 0x71D440
namespace gamemd {
void sub_71D440()
{
  dbl_B0ED58 = 0.0174532925199433 * 90.0; /*0x71d44c*/
}
} // namespace gamemd

// 0x71D460
namespace gamemd {
long long sub_71D460()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0ED58 - dbl_B0ED88); /*0x71d472*/
  result = Math::RoundToInt(v0 * dbl_B0ED80 * 0.5); /*0x71d486*/
  dword_B0F148 = result; /*0x71d48b*/
  return result; /*0x71d490*/
}
} // namespace gamemd

// 0x71D4A0
namespace gamemd {
void sub_71D4A0()
{
  dbl_B0ED90 = Math::ArcTan((double)dword_B0F148 * 0.00390625); /*0x71d4b7*/
}
} // namespace gamemd

// 0x71D4D0
namespace gamemd {
void sub_71D4D0()
{
  dbl_B0EDA8 = Math::ArcTan((double)(2 * dword_B0F148) / dbl_B0ED80); /*0x71d4f2*/
}
} // namespace gamemd

// 0x71D500
namespace gamemd {
long long sub_71D500()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F148) + 0.5); /*0x71d51b*/
  dword_B0F13C = result; /*0x71d520*/
  return result; /*0x71d526*/
}
} // namespace gamemd

// 0x71D530
namespace gamemd {
int sub_71D530()
{
  word_B0ED7C = 0; /*0x71d532*/
  word_B0ED7E = 0; /*0x71d538*/
  return 0; /*0x71d53e*/
}
} // namespace gamemd

// 0x71D540
namespace gamemd {
int sub_71D540()
{
  dword_B0ED98 = 0; /*0x71d542*/
  dword_B0ED9C = 0; /*0x71d547*/
  dword_B0EDA0 = 0; /*0x71d54c*/
  return 0; /*0x71d551*/
}
} // namespace gamemd

// 0x71D560
namespace gamemd {
int sub_71D560()
{
  dword_B0F138 = 0; /*0x71d565*/
  dword_B0F130 = 128; /*0x71d56f*/
  dword_B0F134 = 128; /*0x71d574*/
  return 128; /*0x71d579*/
}
} // namespace gamemd

// 0x71DE90
namespace gamemd {
void nullsub_247()
{
  ; /*0x71de90*/
}
} // namespace gamemd

// 0x71E410
namespace gamemd {
void sub_71E410()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71e41c*/
  dbl_B0F170 = Math::Sqrt(v0 + v0); /*0x71e42e*/
}
} // namespace gamemd

// 0x71E440
namespace gamemd {
void sub_71E440()
{
  dbl_B0F1D8 = dbl_B0F170 / 60.0; /*0x71e44c*/
}
} // namespace gamemd

// 0x71E460
namespace gamemd {
void sub_71E460()
{
  dbl_B0F1C0 = 1.0 / dbl_B0F1D8; /*0x71e46c*/
}
} // namespace gamemd

// 0x71E480
namespace gamemd {
void sub_71E480()
{
  dbl_B0F1B8 = 0.0174532925199433 * 45.0; /*0x71e48c*/
}
} // namespace gamemd

// 0x71E4A0
namespace gamemd {
void sub_71E4A0()
{
  dbl_B0F178 = 0.0174532925199433 * 60.0; /*0x71e4ac*/
}
} // namespace gamemd

// 0x71E4C0
namespace gamemd {
void sub_71E4C0()
{
  dbl_B0F150 = 0.0174532925199433 * 90.0; /*0x71e4cc*/
}
} // namespace gamemd

// 0x71E4E0
namespace gamemd {
long long sub_71E4E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F150 - dbl_B0F178); /*0x71e4f2*/
  result = Math::RoundToInt(v0 * dbl_B0F170 * 0.5); /*0x71e506*/
  dword_B0F1E0 = result; /*0x71e50b*/
  return result; /*0x71e510*/
}
} // namespace gamemd

// 0x71E520
namespace gamemd {
void sub_71E520()
{
  dbl_B0F180 = Math::ArcTan((double)dword_B0F1E0 * 0.00390625); /*0x71e537*/
}
} // namespace gamemd

// 0x71E550
namespace gamemd {
void sub_71E550()
{
  dbl_B0F198 = Math::ArcTan((double)(2 * dword_B0F1E0) / dbl_B0F170); /*0x71e572*/
}
} // namespace gamemd

// 0x71E580
namespace gamemd {
long long sub_71E580()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F1E0) + 0.5); /*0x71e59b*/
  dword_B0F1D4 = result; /*0x71e5a0*/
  return result; /*0x71e5a6*/
}
} // namespace gamemd

// 0x71E5B0
namespace gamemd {
int sub_71E5B0()
{
  word_B0F168 = 0; /*0x71e5b2*/
  word_B0F16A = 0; /*0x71e5b8*/
  return 0; /*0x71e5be*/
}
} // namespace gamemd

// 0x71E5C0
namespace gamemd {
int sub_71E5C0()
{
  dword_B0F188 = 0; /*0x71e5c2*/
  dword_B0F18C = 0; /*0x71e5c7*/
  dword_B0F190 = 0; /*0x71e5cc*/
  return 0; /*0x71e5d1*/
}
} // namespace gamemd

// 0x71E5E0
namespace gamemd {
int sub_71E5E0()
{
  dword_B0F1D0 = 0; /*0x71e5e5*/
  dword_B0F1C8 = 128; /*0x71e5ef*/
  dword_B0F1CC = 128; /*0x71e5f4*/
  return 128; /*0x71e5f9*/
}
} // namespace gamemd

// 0x71E600
namespace gamemd {
int sub_71E600()
{
  dword_B0F158 = 0; /*0x71e602*/
  dword_B0F15C = 0; /*0x71e607*/
  dword_B0F160 = 0; /*0x71e60c*/
  dword_B0F164 = 0; /*0x71e611*/
  return 0; /*0x71e616*/
}
} // namespace gamemd

// 0x71E620
namespace gamemd {
int sub_71E620()
{
  dword_B0F1A4 = 0; /*0x71e627*/
  dword_B0F1A8 = 0; /*0x71e62c*/
  byte_B0F1AC = 1; /*0x71e631*/
  byte_B0F1AD = 0; /*0x71e638*/
  dword_B0F1A0 = (int)&vt_DynamicVectorClass; /*0x71e63d*/
  dword_B0F1B4 = 10; /*0x71e647*/
  dword_B0F1B0 = 0; /*0x71e651*/
  return atexit(sub_71E660); /*0x71e65c*/
}
} // namespace gamemd

// 0x71E660
namespace gamemd {
void sub_71E660()
{
  dword_B0F1A0 = (int)&vt_VectorClass; /*0x71e668*/
  if ( dword_B0F1A4 && byte_B0F1AD ) /*0x71e67c*/
  {
    operator delete((void *)(dword_B0F1A4)); /*0x71e67f*/
    dword_B0F1A4 = 0; /*0x71e687*/
  }
  byte_B0F1AD = 0; /*0x71e68d*/
  dword_B0F1A8 = 0; /*0x71e693*/
}
} // namespace gamemd

// 0x71FA40
namespace gamemd {
int E4Recv_71FA40::sub_71FA40(int a2)
{
  this->M84 = a2; /*0x71fa44*/
  return a2; /*0x71fa47*/
}
} // namespace gamemd

// 0x71FF00
namespace gamemd {
int sub_71FF00()
{
  dword_B0F1E8 = 0; /*0x71ff02*/
  dword_B0F1EC = 0; /*0x71ff07*/
  dword_B0F1F0 = 0; /*0x71ff0c*/
  dword_B0F1F4 = 0; /*0x71ff11*/
  return 0; /*0x71ff16*/
}
} // namespace gamemd

// 0x71FF20
namespace gamemd {
int E4Recv_71FF20::sub_71FF20(int aP1, int a3, int a4, int aP2, int aP3, int aP4, int aP5, char a9, ShapeButtonClass * aP9)
{

  int Instance; // ebx

  ToggleClass::Construct((int)this, aP1, aP2, aP3, aP4, aP5); /*0x71ff41*/
  this->__pad_0[53] = aP9; /*0x71ff52*/
  this->__pad_0[52] = a9; /*0x71ff5c*/
  this->field_38 = a3; /*0x71ff5f*/
  this->M60 = a4; /*0x71ff62*/
  /* X11: vtable install elided (implicit via TextButtonClass virtuals 0x71ff65) */
  if ( aP4 == -1 || aP5 == -1 ) /*0x71ff70*/
  {
    Instance = TextRenderer::GetInstance(); /*0x71ff7a*/
    if ( aP4 == -1 ) /*0x71ff7c*/
      *(unsigned int *)&this->__pad_0[20] = Text::MeasureWidth(this->field_38, 0) + 8; /*0x71ff8e*/
    if ( aP5 == -1 ) /*0x71ff94*/
      *(unsigned int *)&this->__pad_0[24] = *(unsigned int *)(Instance + 28) + 2; /*0x71ff9c*/
  }
  return (int)this->__pad_0; /*0x71ffa1*/

}
} // namespace gamemd
