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
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/e4_protos.h"

// 0x52A9E0
namespace gamemd {
unsigned char * sub_52A9E0(unsigned char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
  _BYTE *result; // eax
  unsigned __int8 v5; // bl
  unsigned int v6; // esi
  unsigned __int8 v7; // bl

  *a2 = -1; /*0x52a9ec*/
  result = 0; /*0x52a9f2*/
  *a3 = -1; /*0x52a9f4*/
  *a4 = -1; /*0x52a9fa*/
  v5 = *a1; /*0x52aa01*/
  v6 = 0; /*0x52aa03*/
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
}
// 0x52B750
namespace gamemd {
void System_Search(ObjectClass * aP0, int edx0, int * a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = edx0; /*0x52b755*/
  if ( edx0 <= 0 ) /*0x52b757*/
    return 0; /*0x52b789*/
  v4 = *a2; /*0x52b75d*/
  while ( 1 ) /*0x52b766*/
  {
    v5 = *(_DWORD *)(aP0 + 8 * (v3 / 2)); /*0x52b766*/
    if ( v5 <= v4 ) /*0x52b76e*/
      break; /*0x52b76e*/
    v3 /= 2; /*0x52b770*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x52b782*/
      return 0; /*0x52b782*/
  }
  if ( v5 != v4 ) /*0x52b774*/
  {
    aP0 += 8 * (v3 / 2) + 8; /*0x52b776*/
    v3 += -1 - v3 / 2; /*0x52b77e*/
    goto LABEL_7; /*0x52b77e*/
  }
  return aP0 + 8 * (v3 / 2); /*0x52b784*/
}
}
// 0x6269A0
namespace gamemd {
void sub_6269A0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int *v7; // eax
  int v8; // esi
  int v9; // edi

  v0 = g_FileExtensionState; /*0x6269a0*/
  if ( !g_FileExtensionState ) /*0x6269a9*/
  {
    v1 = RA2_OPNEW(0x10u); /*0x6269b1*/
    v2 = v1; /*0x6269b6*/
    if ( v1 ) /*0x6269bd*/
    {
      *v1 = -1; /*0x6269c5*/
      v3 = RA2_OPNEW(0x18u); /*0x6269cb*/
      v4 = v3; /*0x6269d0*/
      if ( v3 ) /*0x6269d7*/
      {
        StringVector::Construct(v3, 0, 0); /*0x6269df*/
        *v4 = &(void*)(void*)&DynamicVectorClass_char___vftable; /*0x6269e4*/
        v4[5] = 10; /*0x6269ea*/
        v4[4] = 0; /*0x6269f1*/
      }
      else
      {
        v4 = 0; /*0x6269fa*/
      }
      v2[1] = v4; /*0x6269fe*/
      v5 = RA2_OPNEW(0x18u); /*0x626a01*/
      v6 = v5; /*0x626a06*/
      if ( v5 ) /*0x626a0d*/
      {
        VectorClass::ConstructHSV(v5, 0, 0); /*0x626a15*/
        *v6 = &(void*)(void*)&DynamicVectorClass_HSVClass_vftable; /*0x626a1a*/
        v6[5] = 10; /*0x626a20*/
        v6[4] = 0; /*0x626a27*/
      }
      else
      {
        v6 = 0; /*0x626a30*/
      }
      v2[2] = v6; /*0x626a34*/
      v7 = (int *)RA2_OPNEW(0x10u); /*0x626a37*/
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
  v8 = 0; /*0x626a6d*/
  v9 = *(_DWORD *)(v0[1] + 16); /*0x626a6f*/
  if ( v9 > 0 ) /*0x626a74*/
  {
    do /*0x626a90*/
    {
      RA2_OPDEL(*(void **)(*(_DWORD *)(v0[1] + 4) + 4 * v8)); /*0x626a80*/
      v0 = g_FileExtensionState; /*0x626a85*/
      ++v8; /*0x626a8d*/
    }
    while ( v8 < v9 ); /*0x626a90*/
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v0[1] + 12))(v0[1]); /*0x626a99*/
  return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)g_FileExtensionState + 2) + 12))(*((_DWORD *)g_FileExtensionState /*0x626aa9*/
                                                                                        + 2));
}
}
// 0x626AB0
namespace gamemd {
void sub_626AB0(const char * a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int *v8; // eax
  char *v9; // ebp
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // edx

  if ( !g_FileExtensionState ) /*0x626ac5*/
  {
    v2 = RA2_OPNEW(0x10u); /*0x626acd*/
    v3 = v2; /*0x626ad2*/
    if ( v2 ) /*0x626ad9*/
    {
      *v2 = -1; /*0x626ae1*/
      v4 = RA2_OPNEW(0x18u); /*0x626ae8*/
      v5 = v4; /*0x626aed*/
      if ( v4 ) /*0x626af9*/
      {
        StringVector::Construct(v4, 0, 0); /*0x626b01*/
        *v5 = &(void*)(void*)&DynamicVectorClass_char___vftable; /*0x626b06*/
        v5[5] = 10; /*0x626b0c*/
        v5[4] = 0; /*0x626b0f*/
      }
      else
      {
        v5 = 0; /*0x626b18*/
      }
      v3[1] = v5; /*0x626b1c*/
      v6 = RA2_OPNEW(0x18u); /*0x626b1f*/
      v7 = v6; /*0x626b24*/
      if ( v6 ) /*0x626b2b*/
      {
        VectorClass::ConstructHSV(v6, 0, 0); /*0x626b33*/
        *v7 = &(void*)(void*)&DynamicVectorClass_HSVClass_vftable; /*0x626b38*/
        v7[5] = 10; /*0x626b3e*/
        v7[4] = 0; /*0x626b41*/
      }
      else
      {
        v7 = 0; /*0x626b4a*/
      }
      v3[2] = v7; /*0x626b4e*/
      v8 = (int *)RA2_OPNEW(0x10u); /*0x626b51*/
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
  v9 = (char *)RA2_OPNEW(0x100u); /*0x626b9c*/
  strcpy(v9, a1); /*0x626bb5*/
  v10 = *((_DWORD *)g_FileExtensionState + 1); /*0x626bc4*/
  v11 = *(_DWORD *)(v10 + 8); /*0x626bc7*/
  if ( *(_DWORD *)(v10 + 16) < v11 /*0x626bec*/
    || (*(_BYTE *)(v10 + 13) || !v11)
    && (v12 = *(_DWORD *)(v10 + 20), v12 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 8))(v10, v11 + v12, 0) )
  {
    v13 = *(_DWORD *)(v10 + 16); /*0x626bf3*/
    v14 = *(_DWORD *)(v10 + 4); /*0x626bf6*/
    *(_DWORD *)(v10 + 16) = v13 + 1; /*0x626bfc*/
    *(_DWORD *)(v14 + 4 * v13) = v9; /*0x626bff*/
  }
  v15 = *((_DWORD *)g_FileExtensionState + 2); /*0x626c07*/
  v16 = *(_DWORD *)(v15 + 8); /*0x626c0a*/
  if ( *(_DWORD *)(v15 + 16) < v16 /*0x626c34*/
    || ((IDA_LOBYTE(v17) = *(_BYTE *)(v15 + 13), (_BYTE)v17) || !v16)
    && (v17 = *(_DWORD *)(v15 + 20), v17 > 0)
    && (IDA_LOBYTE(v17) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(v15, v16 + v17, 0), (_BYTE)v17) )
  {
    v18 = *(_DWORD *)(v15 + 16); /*0x626c36*/
    v19 = v18 + 1; /*0x626c39*/
    v20 = 3 * v18; /*0x626c3c*/
    v17 = *(_DWORD *)(v15 + 4); /*0x626c3f*/
    *(_DWORD *)(v15 + 16) = v19; /*0x626c42*/
    v21 = v17 + v20; /*0x626c45*/
    *(_WORD *)v21 = *(_WORD *)a2; /*0x626c4e*/
    IDA_LOBYTE(v17) = *(_BYTE *)(a2 + 2); /*0x626c51*/
    *(_BYTE *)(v21 + 2) = v17; /*0x626c54*/
  }
  return v17; /*0x626c57*/
}
}
// 0x7C8F46
namespace gamemd {
int sub_7C8F46()
{
  int result; // eax

  _cfltcvt_init_13(); /*0x7c8f46*/
  dword_B781A0 = _ms_p5_mp_test_fdiv(); /*0x7c8f50*/
  result = _setdefaultprecision(); /*0x7c8f55*/
  __asm { fnclex } /*0x7c8f5a*/
  return result; /*0x7c8f5c*/
}
}
// 0x7A2EA0
namespace gamemd {
void sub_7A2EA0(int (__stdcall ***a1)(unsigned int, void *, int *) a1, int a2, int a3, int a4)
{
  int (__stdcall **v4)(_DWORD, void *, int *); // ecx
  int v5; // esi
  int v7; // [esp+24h] [ebp-8h] BYREF
  int v8; // [esp+28h] [ebp-4h] BYREF

  v4 = *a1; /*0x7a2ead*/
  v8 = 0; /*0x7a2eb5*/
  v7 = 0; /*0x7a2ebd*/
  v5 = (*v4)(a1, &unk_7F7CD0, &v8); /*0x7a2ec7*/
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
}
// 0x68C9C0
namespace gamemd {
AbstractClass * * System_Read_68C9C0(BlowStraw * aP0, ObjectClass * a1, ObjectClass * aP3, int a4, int a5)
{
  int v6; // esi
  _DWORD *v7; // eax
  bool v8; // zf
  char *v9; // eax

  while ( 1 ) /*0x68c9d8*/
  {
    v6 = 0; /*0x68c9d8*/
    if ( g_AnimClass_SaveState > 0 ) /*0x68c9dc*/
      break; /*0x68c9dc*/
  LABEL_6:
    v9 = (char *)RA2_OPNEW(0x33Cu); /*0x68ca15*/
    if ( v9 ) /*0x68ca24*/
      FontClass::InitMetrics(v9, aP0, a1, aP3, a4, a5, 1); /*0x68ca37*/
  }
  v7 = BuildingTypeClass_AnimTable; /*0x68c9de*/
  while ( 1 ) /*0x68c9f6*/
  {
    v8 = _strcmpi(aP0, *(const void **)(v7[v6] + 772)) == 0; /*0x68c9f6*/
    v7 = BuildingTypeClass_AnimTable; /*0x68c9f8*/
    if ( v8 && *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v6) + 784) == a5 ) /*0x68ca08*/
      return v6; /*0x68ca40*/
    if ( ++v6 >= g_AnimClass_SaveState ) /*0x68ca13*/
      goto LABEL_6; /*0x68ca13*/
  }
}
}
// 0x5BDB90
namespace gamemd {
int sub_5BDB90(int a1, char a2)
{
  int result; // eax

  if ( !a2 ) /*0x5bdbaa*/
    return MouseClass_Cursors[7 * a1]; /*0x5bdbaa*/
  result = dword_82D034[7 * a1]; /*0x5bdbac*/
  if ( result == -1 ) /*0x5bdbb2*/
    return MouseClass_Cursors[7 * a1]; /*0x5bdbb4*/
  return result; /*0x5bdbb6*/
}
} // namespace gamemd

// 0x5D5AC0
namespace gamemd {
DynamicVector * System_Init()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5ac9*/
  {
    g_MultiplayerMode |= 1u; /*0x5d5ad6*/
    Src = 0; /*0x5d5adc*/
    dword_ABFDA8 = 0; /*0x5d5ae1*/
    byte_ABFDAC = 1; /*0x5d5ae6*/
    byte_ABFDAD = 0; /*0x5d5aec*/
    g_MultiplayerModeConfig = (int)&(void*)(void*)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d5af1*/
    dword_ABFDB4 = 10; /*0x5d5afb*/
    g_MultiplayerGameList = 0; /*0x5d5b05*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5b0a*/
  }
  return &g_MultiplayerModeConfig; /*0x5d5b17*/
}
} // namespace gamemd

// 0x63A0D0
namespace gamemd {
char sub_63A0D0()
{
  char result; // al
  wchar_t *StringCSF; // eax

  result = g_PlanningModeActive; /*0x63a0d0*/
  if ( !g_PlanningModeActive ) /*0x63a0d7*/
  {
    g_PlanningModeActive = 1; /*0x63a0ea*/
    StringCSF = GetStringCSF(aMsgPlanningmod_12, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a0f1*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x63a0fd*/
    return PlayVocClass(g_RulesClass_Instance->Scorches1[3], 0x2000, 1.0, 0); /*0x63a119*/
  }
  return result; /*0x63a11e*/
}
} // namespace gamemd

// 0x72C9C0
namespace gamemd {
char sub_72C9C0()
{
  char result; // al

  result = byte_B0FCF1; /*0x72c9c0*/
  if ( !byte_B0FCF1 ) /*0x72c9c7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c9d3*/
      dword_B0FA60 = LoadFileSHP(off_844D7C, (bool *)&byte_B0FCF0); /*0x72c9e5*/
    result = LoadPaletteSimple(off_844D80, &dword_B0FCF4, &dword_B0FCF8); /*0x72c9fa*/
    byte_B0FCF1 = 1; /*0x72c9ff*/
  }
  return result; /*0x72ca06*/
}
} // namespace gamemd

// 0x72CA10
namespace gamemd {
void sub_72CA10()
{
  void *v0; // esi

  if ( byte_B0FCF1 ) /*0x72ca1a*/
  {
    if ( byte_B0FCF0 ) /*0x72ca22*/
    {
      v0 = dword_B0FA60; /*0x72ca25*/
      if ( dword_B0FA60 ) /*0x72ca2d*/
      {
        FileTreeNode::Destroy(dword_B0FA60); /*0x72ca31*/
        RA2_OPDEL(v0); /*0x72ca37*/
      }
      byte_B0FCF0 = 0; /*0x72ca3f*/
    }
    dword_B0FA60 = 0; /*0x72ca4b*/
    if ( dword_B0FCF4 ) /*0x72ca53*/
    {
      RA2_OPDEL(dword_B0FCF4); /*0x72ca56*/
      dword_B0FCF4 = 0; /*0x72ca5e*/
    }
    if ( dword_B0FCF8 ) /*0x72ca6c*/
    {
      (**(void (__thiscall ***)(int, int))dword_B0FCF8)(dword_B0FCF8, 1); /*0x72ca72*/
      dword_B0FCF8 = 0; /*0x72ca74*/
    }
  }
  byte_B0FCF1 = 0; /*0x72ca7a*/
}
} // namespace gamemd

// 0x748360
namespace gamemd {
void sub_748360()
{
  if ( dword_B1D14C ) /*0x748367*/
  {
    RA2_OPDEL(dword_B1D14C); /*0x74836a*/
    dword_B1D14C = 0; /*0x748372*/
  }
}
} // namespace gamemd

// 0x766880
namespace gamemd {
rc_ptr * System_Init_766880(rc_ptr_base * a1, int a2, int a3, void * a4, ObjectClass * aP4)
{
  char *v7; // ecx
  void *v8; // esi
  void *v9; // esi
  char *v11; // [esp-8h] [ebp-14h] BYREF
  int v12; // [esp-4h] [ebp-10h]

  v8 = RA2_OPNEW(0x18u); /*0x76688e*/
  if ( v8 ) /*0x766895*/
  {
    v12 = aP4; /*0x76689f*/
    v11 = v7; /*0x7668a0*/
    String::AssignFromPtr(&v11, (const char **)&a4); /*0x7668a4*/
    v9 = System_Init_766A10(v8, a2, a3, v11, v12); /*0x7668b6*/
  }
  else
  {
    v9 = 0; /*0x7668ba*/
  }
  ComPtr::Constructor(a1); /*0x7668be*/
  *a1 = &(void*)(void*)&rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char_vftable; /*0x7668c5*/
  ComPtr::Set(a1, (int)v9); /*0x7668cc*/
  DeleteAndZero(&a4); /*0x7668d5*/
  return a1; /*0x7668dc*/
}
} // namespace gamemd

// 0x7676F0
namespace gamemd {
rc_ptr * System_Init_7676F0(rc_ptr_base * a1, int a2)
{
  _DWORD *v4; // eax
  int v5; // edi

  v4 = RA2_OPNEW(0xCu); /*0x7676f8*/
  if ( v4 ) /*0x767702*/
  {
    v4[2] = a2; /*0x767704*/
    v4[1] = 0; /*0x767707*/
    *v4 = &(void*)(void*)&WorldDominationTour_MapSizeGameOption_vftable; /*0x76770e*/
    v5 = (int)v4; /*0x767714*/
  }
  else
  {
    v5 = 0; /*0x767718*/
  }
  ComPtr::Constructor(a1); /*0x76771c*/
  *a1 = &(void*)(void*)&rc_ptr_WorldDominationTour_MapSizeGameOption_vftable; /*0x767723*/
  ComPtr::Set(a1, v5); /*0x76772a*/
  return a1; /*0x767731*/
}
} // namespace gamemd

// 0x7A2F30
namespace gamemd {
int System_Init_7A2F30(int a1, int a2, ObjectClass * aP2)
{
  int v4; // edi

  if ( !a1 ) /*0x7a2f3a*/
    return -2147024809; /*0x7a2f3d*/
  *(_DWORD *)(a1 + 16) = a2; /*0x7a2f4d*/
  *(_DWORD *)(a1 + 8) = aP2; /*0x7a2f5c*/
  *(_DWORD *)(a1 + 12) = aP2; /*0x7a2f5f*/
  *(_DWORD *)(a1 + 4) = aP2; /*0x7a2f62*/
  *(_DWORD *)(a1 + 20) = 0; /*0x7a2f65*/
  *(_DWORD *)(a1 + 24) = 0; /*0x7a2f68*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 28)); /*0x7a2f6b*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 52)); /*0x7a2f71*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 76)); /*0x7a2f77*/
  v4 = *(_DWORD *)(a1 + 16); /*0x7a2f79*/
  *(_DWORD *)(a1 + 104) = 0; /*0x7a2f7c*/
  *(_BYTE *)(a1 + 108) = 1; /*0x7a2f81*/
  *(_DWORD *)(a1 + 116) = 0; /*0x7a2f85*/
  *(_DWORD *)(a1 + 124) = 0; /*0x7a2f88*/
  *(_DWORD *)(a1 + 120) = 0; /*0x7a2f8b*/
  *(_DWORD *)(a1 + 128) = 0; /*0x7a2f8e*/
  if ( v4 && *(_DWORD *)v4 ) /*0x7a2f96*/
  {
    do /*0x7a2fac*/
    {
      (*(void (__stdcall **)(int))(v4 + 32))(1); /*0x7a2f9c*/
      if ( *(_DWORD *)a1 == 100 ) /*0x7a2fa2*/
        v4 += 28; /*0x7a2fa4*/
      else
        v4 += 36; /*0x7a2fa9*/
    }
    while ( *(_DWORD *)v4 ); /*0x7a2fac*/
  }
  return 0; /*0x7a2f3c*/
}
} // namespace gamemd
