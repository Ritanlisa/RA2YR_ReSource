// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_632000_e4.hpp"
#include "e4/classes/E4Recv_632030_e4.hpp"
#include "e4/classes/E4Recv_67BFA0_e4.hpp"
#include "e4/classes/E4Recv_6AC840_e4.hpp"
#include "e4/classes/E4Recv_6AC8D0_e4.hpp"
#include "e4/classes/E4Recv_6B2520_e4.hpp"
#include "e4/classes/E4Recv_6E7330_e4.hpp"
#include "e4/classes/E4Recv_74E8A0_e4.hpp"
#include "e4/classes/E4Recv_751520_e4.hpp"
#include "e4/classes/E4Recv_7515C0_e4.hpp"
#include "e4/classes/E4Recv_7668F0_e4.hpp"
#include "e4/classes/E4Recv_766900_e4.hpp"
#include "e4/classes/E4Recv_766910_e4.hpp"
#include "e4/classes/E4Recv_766EE0_e4.hpp"
#include "e4/classes/E4Recv_766F70_e4.hpp"
#include "e4/classes/E4Recv_770430_e4.hpp"
#include "e4/classes/E4Recv_776880_e4.hpp"
#include "e4/classes/E4Recv_7768A0_e4.hpp"
#include "e4/classes/E4Recv_7A2FC0_e4.hpp"
#include "e4/classes/E4Recv_7A41A0_e4.hpp"
#include "e4/classes/E4Recv_7AC670_e4.hpp"
#include "e4/classes/E4Recv_7AC680_e4.hpp"
#include "e4/classes/E4Recv_7AD410_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x52A9E0
namespace gamemd {
unsigned char * sub_52A9E0(unsigned char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
{
  _BYTE *result; // eax
  unsigned __int8 v5; // bl
  unsigned __int8 v7; // bl
  *a2 = -1; /*0x52a9ec*/
  result = 0; /*0x52a9f2*/
  *a3 = -1; /*0x52a9f4*/
  *a4 = -1; /*0x52a9fa*/
  v5 = *a1; /*0x52aa01*/
  unsigned int v6 = 0; /*0x52aa03*/
  if ( *a1 ) /*0x52aa01*/
  {
    while ( 1 ) /*0x52aa09*/
    {
      if ( (*a2 & 0x80000000) == 0 && (*a3 & 0x80000000) != 0 && v5 > 0x20u ) /*0x52aa16*/
        *a3 = v6; /*0x52aa18*/
      v7 = *a1; /*0x52aa1a*/
      if ( *a1 == 59 ) /*0x52aa1f*/
        break; /*0x52aa1f*/
      if ( v7 == 9 ) /*0x52aa24*/
      {
        v6 = (v6 & 0xFFFFFFF8) + 8; /*0x52aa3b*/
      }
      else if ( v7 == 61 ) /*0x52aa29*/
      {
        if ( (*a2 & 0x80000000) != 0 ) /*0x52aa31*/
          *a2 = v6; /*0x52aa33*/
        ++v6; /*0x52aa35*/
      }
      else
      {
        ++v6; /*0x52aa2b*/
      }
      v5 = *++a1; /*0x52aa3e*/
      if ( !v5 ) /*0x52aa44*/
        goto LABEL_17; /*0x52aa44*/
    }
    *a4 = v6; /*0x52aa48*/
    result = a1 + 1; /*0x52aa4b*/
  }
LABEL_17:
  *a2 &= ((*a2 & 0x80000000) != 0) - 1; /*0x52aa4e*/
  *a3 &= ((*a3 & 0x80000000) != 0) - 1; /*0x52aa6a*/
  *a4 &= ((*a4 & 0x80000000) != 0) - 1; /*0x52aa79*/
  return result; /*0x52aa75*/
}
} // namespace gamemd
}

// 0x52B750
namespace gamemd {
void System_Search(ObjectClass * aP0, int edx0, int * a2)
{
{
  int v5; // edi
  int v3 = edx0; /*0x52b755*/
  if ( edx0 <= 0 ) /*0x52b757*/
    return 0; /*0x52b789*/
  int v4 = *a2; /*0x52b75d*/
  while ( 1 ) /*0x52b766*/
  {
    v5 = *(_DWORD *)&aP0->__pad_0[8 * (v3 / 2)]; /*0x52b766*/
    if ( v5 <= v4 ) /*0x52b76e*/
      break; /*0x52b76e*/
    v3 /= 2; /*0x52b770*/
LABEL_7:
    if ( v3 <= 0 ) /*0x52b782*/
      return 0; /*0x52b782*/
  }
  if ( v5 != v4 ) /*0x52b774*/
  {
    aP0 = (ObjectClass *)((char *)aP0 + 8 * (v3 / 2) + 8); /*0x52b776*/
    v3 += -1 - v3 / 2; /*0x52b77e*/
    goto LABEL_7; /*0x52b77e*/
  }
  return (int)&aP0->__pad_0[8 * (v3 / 2)]; /*0x52b784*/
}
} // namespace gamemd
}

// 0x6269A0
namespace gamemd {
void sub_6269A0()
{
{

  ObjectClass *v0 = g_FileExtensionState; /*0x6269a0*/
  if ( !g_FileExtensionState ) /*0x6269a9*/
  {
    _DWORD * v1 = __2_YAPAXI_Z(0x10u); /*0x6269b1*/
    _DWORD * v2 = v1; /*0x6269b6*/
    if ( v1 ) /*0x6269bd*/
    {
      *v1 = -1; /*0x6269c5*/
      _DWORD * v3 = __2_YAPAXI_Z(0x18u); /*0x6269cb*/
      VectorClass *v4 = v3; /*0x6269d0*/
      if ( v3 ) /*0x6269d7*/
      {
        StringVector::Construct(v3, 0, 0); /*0x6269df*/
        *v4 = &vt_DynamicVectorClass_char; /*0x6269e4*/
        v4[5] = 10; /*0x6269ea*/
        v4[4] = 0; /*0x6269f1*/
      }
      else
      {
        v4 = 0; /*0x6269fa*/
      }
      v2[1] = v4; /*0x6269fe*/
      _DWORD * v5 = __2_YAPAXI_Z(0x18u); /*0x626a01*/
      VectorClass *v6 = v5; /*0x626a06*/
      if ( v5 ) /*0x626a0d*/
      {
        VectorClass::ConstructHSV(v5, 0, 0); /*0x626a15*/
        *v6 = &vt_DynamicVectorClass_HSVClass; /*0x626a1a*/
        v6[5] = 10; /*0x626a20*/
        v6[4] = 0; /*0x626a27*/
      }
      else
      {
        v6 = 0; /*0x626a30*/
      }
      v2[2] = v6; /*0x626a34*/
      int * v7 = (int *)__2_YAPAXI_Z(0x10u); /*0x626a37*/
      if ( v7 ) /*0x626a41*/
        v2[3] = DynamicVectorArray::Constructor(v7, 10, 31, (int)HashStringMod31); /*0x626a53*/
      else
        v2[3] = 0; /*0x626a5c*/
      v0 = v2; /*0x626a56*/
    }
    else
    {
      v0 = 0; /*0x626a63*/
    }
    g_FileExtensionState = v0; /*0x626a65*/
  }
  int v8 = 0; /*0x626a6d*/
  int v9 = *(_DWORD *)(v0[1] + 16); /*0x626a6f*/
  if ( v9 > 0 ) /*0x626a74*/
  {
    do /*0x626a90*/
    {
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v0[1] + 4) + 4 * v8)); /*0x626a80*/
      v0 = g_FileExtensionState; /*0x626a85*/
      ++v8; /*0x626a8d*/
    }
    while ( v8 < v9 ); /*0x626a90*/
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v0[1] + 12))(v0[1]); /*0x626a99*/
  return (*(int (__thiscall **)(_DWORD))(*g_FileExtensionState->vtable3 + 12))(g_FileExtensionState->vtable3); /*0x626aa9*/
}
} // namespace gamemd
}

// 0x626AB0
namespace gamemd {
void sub_626AB0(const char * a1, int a2)
{
{

  if ( !g_FileExtensionState ) /*0x626ac5*/
  {
    _DWORD * v2 = __2_YAPAXI_Z(0x10u); /*0x626acd*/
    _DWORD * v3 = v2; /*0x626ad2*/
    if ( v2 ) /*0x626ad9*/
    {
      *v2 = -1; /*0x626ae1*/
      _DWORD * v4 = __2_YAPAXI_Z(0x18u); /*0x626ae8*/
      VectorClass *v5 = v4; /*0x626aed*/
      if ( v4 ) /*0x626af9*/
      {
        StringVector::Construct(v4, 0, 0); /*0x626b01*/
        *v5 = &vt_DynamicVectorClass_char; /*0x626b06*/
        v5[5] = 10; /*0x626b0c*/
        v5[4] = 0; /*0x626b0f*/
      }
      else
      {
        v5 = 0; /*0x626b18*/
      }
      v3[1] = v5; /*0x626b1c*/
      _DWORD * v6 = __2_YAPAXI_Z(0x18u); /*0x626b1f*/
      VectorClass *v7 = v6; /*0x626b24*/
      if ( v6 ) /*0x626b2b*/
      {
        VectorClass::ConstructHSV(v6, 0, 0); /*0x626b33*/
        *v7 = &vt_DynamicVectorClass_HSVClass; /*0x626b38*/
        v7[5] = 10; /*0x626b3e*/
        v7[4] = 0; /*0x626b41*/
      }
      else
      {
        v7 = 0; /*0x626b4a*/
      }
      v3[2] = v7; /*0x626b4e*/
      int * v8 = (int *)__2_YAPAXI_Z(0x10u); /*0x626b51*/
      if ( v8 ) /*0x626b5b*/
        v3[3] = DynamicVectorArray::Constructor(v8, 10, 31, (int)HashStringMod31); /*0x626b6c*/
      else
        v3[3] = 0; /*0x626b79*/
      g_FileExtensionState = v3; /*0x626b6f*/
    }
    else
    {
      g_FileExtensionState = 0; /*0x626b84*/
    }
  }
  char * v9 = (char *)__2_YAPAXI_Z(0x100u); /*0x626b9c*/
  strcpy(v9, a1); /*0x626bb5*/
  int v10 = *((_DWORD *)g_FileExtensionState + 1); /*0x626bc4*/
  int v11 = *(_DWORD *)(v10 + 8); /*0x626bc7*/
  if ( *(_DWORD *)(v10 + 16) < v11 /*0x626bec*/
    || (*(_BYTE *)(v10 + 13) || !v11)
  int v12; // ecx
    && (v12 = *(_DWORD *)(v10 + 20), v12 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 8))(v10, v11 + v12, 0) )
  {
    int v13 = *(_DWORD *)(v10 + 16); /*0x626bf3*/
    int v14 = *(_DWORD *)(v10 + 4); /*0x626bf6*/
    *(_DWORD *)(v10 + 16) = v13 + 1; /*0x626bfc*/
    *(_DWORD *)(v14 + 4 * v13) = v9; /*0x626bff*/
  }
  int v15 = *((_DWORD *)g_FileExtensionState + 2); /*0x626c07*/
  int v16 = *(_DWORD *)(v15 + 8); /*0x626c0a*/
  if ( *(_DWORD *)(v15 + 16) < v16 /*0x626c34*/
  int v17; // eax
    || ((LOBYTE(v17) = *(_BYTE *)(v15 + 13), (_BYTE)v17) || !v16)
    && (v17 = *(_DWORD *)(v15 + 20), v17 > 0)
    && (LOBYTE(v17) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(v15, v16 + v17, 0), (_BYTE)v17) )
  {
    int v18 = *(_DWORD *)(v15 + 16); /*0x626c36*/
    int v19 = v18 + 1; /*0x626c39*/
    int v20 = 3 * v18; /*0x626c3c*/
    v17 = *(_DWORD *)(v15 + 4); /*0x626c3f*/
    *(_DWORD *)(v15 + 16) = v19; /*0x626c42*/
    int v21 = v17 + v20; /*0x626c45*/
    *(_WORD *)v21 = *(_WORD *)a2; /*0x626c4e*/
    LOBYTE(v17) = *(_BYTE *)(a2 + 2); /*0x626c51*/
    *(_BYTE *)(v21 + 2) = v17; /*0x626c54*/
  }
  return v17; /*0x626c57*/
}
} // namespace gamemd
}

// 0x7C8F46
namespace gamemd {
int sub_7C8F46()
{
{
  int result; // eax

  _cfltcvt_init_13(); /*0x7c8f46*/
  dword_B781A0 = _ms_p5_mp_test_fdiv(); /*0x7c8f50*/
  result = _setdefaultprecision(); /*0x7c8f55*/
  __asm { fnclex } /*0x7c8f5a*/
  return result; /*0x7c8f5c*/
}
} // namespace gamemd
}

// 0x7A2EA0
namespace gamemd {
void sub_7A2EA0(int (__stdcall ***a1)(unsigned int, void *, int *) a1, int a2, int a3, int a4)
{
{
  int (__stdcall **v4)(_DWORD, void *, int *); // ecx

  v4 = *a1; /*0x7a2ead*/
  int v8 = 0; /*0x7a2eb5*/
  int v7 = 0; /*0x7a2ebd*/
  Coord *v5 = (*v4)(a1, &unk_7F7CD0, &v8); /*0x7a2ec7*/
  if ( v5 >= 0 ) /*0x7a2ecb*/
  {
    v5 = (*(int (__stdcall **)(int, int, int *))(*(_DWORD *)v8 + 16))(v8, a3, &v7); /*0x7a2ee1*/
    if ( v5 >= 0 ) /*0x7a2ee5*/
      v5 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v7 + 20))(v7, a2, a4); /*0x7a2efb*/
  }
  if ( v7 ) /*0x7a2f03*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x7a2f08*/
  if ( v8 ) /*0x7a2f11*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x7a2f16*/
  return v5; /*0x7a2f1b*/
}
} // namespace gamemd
}

// 0x68C9C0
namespace gamemd {
AbstractClass * * System_Read_68C9C0(BlowStraw * aP0, ObjectClass * a1, ObjectClass * aP3, int a4, int a5)
{
{
  int v6; // esi
  IUnknown *v7; // eax
  while ( 1 ) /*0x68c9d8*/
  {
    v6 = 0; /*0x68c9d8*/
    if ( *(int *)stru_B05488[88] > 0 ) /*0x68c9dc*/
      break; /*0x68c9dc*/
LABEL_6:
    char * v9 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x68ca15*/
    if ( v9 ) /*0x68ca24*/
      FontClass::InitMetrics(v9, aP0->__pad_0, a1, aP3, a4, a5, 1); /*0x68ca37*/
  }
  v7 = (IUnknown *)stru_B05488.field_4C; /*0x68c9de*/
  while ( 1 ) /*0x68c9f6*/
  {
    bool v8 = _strcmpi(aP0, *(const void **)(*(&v7->field_0 + v6) + 772)) == 0; /*0x68c9f6*/
    v7 = (IUnknown *)stru_B05488.field_4C; /*0x68c9f8*/
    if ( v8 && *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * v6) + 784) == a5 ) /*0x68ca08*/
      return v6; /*0x68ca40*/
    if ( ++v6 >= *(int *)stru_B05488[88] ) /*0x68ca13*/
      goto LABEL_6; /*0x68ca13*/
  }
}
} // namespace gamemd
}

// 0x5BDB90
namespace gamemd {
int sub_5BDB90(int a1, char a2)
{
{
    int result;
    if ( !a2 )
    return MouseClass_Cursors[7 * a1];
    result = DataGlobal_82D034[7 * a1];
    if ( result == -1 )
    return MouseClass_Cursors[7 * a1];
    return result;
}
}
} // namespace gamemd

// 0x5D5AC0
namespace gamemd {
DynamicVector * System_Init()
{
{
    if ( ((int)(&g_MatrixTransformState)[82] & 1) == 0 )
  {
    LOBYTE((&g_MatrixTransformState)[82]) |= 1u;
    *(__int64 *)(&(&g_MatrixTransformState)[83] + 1) = 0;
    *((short *)&g_MatrixTransformState + 1998) = 1;
    *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode;
    *((__int64 *)&g_MatrixTransformState + 500) = 0xA00000000LL;
    atexit(MultiplayerConfig::Cleanup);
  }
    return (DynamicVector *)&(&g_MatrixTransformState)[83];
}
}
} // namespace gamemd

// 0x63A0D0
namespace gamemd {
char sub_63A0D0()
{
{
    char result;
    wchar_t *StringCSF;
    result = g_PlanningModeActive;
    if ( !g_PlanningModeActive )
  {
    g_PlanningModeActive = 1;
    StringCSF = GetStringCSF(DataGlobal_836C80, 0, g_Str_File_PlanMgr_cpp, 3233);
    AddMessageListPlayerMessage(StringCSF, 480);
    return PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0);
  }
    return result;
}
}
} // namespace gamemd

// 0x72C9C0
namespace gamemd {
char sub_72C9C0()
{
{
    char result;
    result = DataGlobal_B0FCF1;
    if ( !DataGlobal_B0FCF1 )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FA60 = LoadFileSHP(DataGlobal_844D7C, (bool *)&DataGlobal_B0FCF0);
    result = LoadPaletteSimple(DataGlobal_844D80, &DataGlobal_B0FCF4, &DataGlobal_B0FCF8);
    DataGlobal_B0FCF1 = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72CA10
namespace gamemd {
void sub_72CA10()
{
{
    void *v0;
    if ( DataGlobal_B0FCF1 )
  {
    if ( DataGlobal_B0FCF0 )
    {
    v0 = DataGlobal_B0FA60;
    if ( DataGlobal_B0FA60 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA60);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCF0 = 0;
    }
    DataGlobal_B0FA60 = 0;
    if ( DataGlobal_B0FCF4 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FCF4);
    DataGlobal_B0FCF4 = 0;
    }
    if ( DataGlobal_B0FCF8 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCF8)(DataGlobal_B0FCF8, 1);
    DataGlobal_B0FCF8 = 0;
    }
  }
    DataGlobal_B0FCF1 = 0;
}
}
} // namespace gamemd

// 0x748360
namespace gamemd {
void sub_748360()
{
{
    if ( DataGlobal_B1D14C )
  {
    __3_YAXPAX_Z(DataGlobal_B1D14C);
    DataGlobal_B1D14C = 0;
  }
}
}
} // namespace gamemd

// 0x766880
namespace gamemd {
rc_ptr * System_Init_766880(rc_ptr_base * a1, int a2, int a3, void * a4, ObjectClass * aP4)
{
{
    char *v7;
    GameOption_WorldDominationTour *v8;
    void *inited;
    char *v11;
    ObjectClass *v12;
    v8 = (GameOption_WorldDominationTour *)__2_YAPAXI_Z(0x18u);
    if ( v8 )
  {
    v12 = aP4;
    v11 = v7;
    String::AssignFromPtr(&v11, (const char **)&a4);
    inited = System_Init_766A10(v8, a2, a3, v11, v12);
  }
    else
  {
    inited = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char;
    ComPtr::Set(a1, (int)inited);
    DeleteAndZero(&a4);
    return (rc_ptr *)a1;
}
}
} // namespace gamemd

// 0x7676F0
namespace gamemd {
rc_ptr * System_Init_7676F0(rc_ptr_base * a1, int a2)
{
{
    int *v4;
    int v5;
    v4 = (int *)__2_YAPAXI_Z(0xCu);
    if ( v4 )
  {
    v4[2] = a2;
    v4[1] = 0;
    *v4 = &vt_WorldDominationTour_MapSizeGameOption;
    v5 = (int)v4;
  }
    else
  {
    v5 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_MapSizeGameOption;
    ComPtr::Set(a1, v5);
    return (rc_ptr *)a1;
}
}
} // namespace gamemd

// 0x7A2F30
namespace gamemd {
int System_Init_7A2F30(int a1, int a2, ObjectClass * aP2)
{
{
    int v4;
    if ( !a1 )
    return -2147024809;
    *(int *)(a1 + 16) = a2;
    *(int *)(a1 + 8) = aP2;
    *(int *)(a1 + 12) = aP2;
    *(int *)(a1 + 4) = aP2;
    *(int *)(a1 + 20) = 0;
    *(int *)(a1 + 24) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 28));
    InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 52));
    InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 76));
    v4 = *(int *)(a1 + 16);
    *(int *)(a1 + 104) = 0;
    *(char *)(a1 + 108) = 1;
    *(int *)(a1 + 116) = 0;
    *(int *)(a1 + 124) = 0;
    *(int *)(a1 + 120) = 0;
    *(int *)(a1 + 128) = 0;
    if ( v4 && *(int *)v4 )
  {
    do
    {
    (*(void (__stdcall **)(int))(v4 + 32))(1);
    if ( *(int *)a1 == 100 )
    v4 += 28;
    else
    v4 += 36;
    }
    while ( *(int *)v4 );
  }
    return 0;
}
}
} // namespace gamemd
