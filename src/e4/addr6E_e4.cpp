// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6E0080_e4.hpp"
#include "e4/classes/E4Recv_6E0250_e4.hpp"
#include "e4/classes/E4Recv_6E0270_e4.hpp"
#include "e4/classes/E4Recv_6E0290_e4.hpp"
#include "e4/classes/E4Recv_6E0790_e4.hpp"
#include "e4/classes/E4Recv_6E07F0_e4.hpp"
#include "e4/classes/E4Recv_6E0850_e4.hpp"
#include "e4/classes/E4Recv_6E1180_e4.hpp"
#include "e4/classes/E4Recv_6E2790_e4.hpp"
#include "e4/classes/E4Recv_6E2A50_e4.hpp"
#include "e4/classes/E4Recv_6E3380_e4.hpp"
#include "e4/classes/E4Recv_6E35F0_e4.hpp"
#include "e4/classes/E4Recv_6E37F0_e4.hpp"
#include "e4/classes/E4Recv_6E3F70_e4.hpp"
#include "e4/classes/E4Recv_6E5290_e4.hpp"
#include "e4/classes/E4Recv_6E6B70_e4.hpp"
#include "e4/classes/E4Recv_6E8000_e4.hpp"
#include "e4/classes/E4Recv_6E85B0_e4.hpp"
#include "e4/classes/E4Recv_6EA080_e4.hpp"
#include "e4/classes/E4Recv_6EC370_e4.hpp"
#include "e4/classes/E4Recv_6EDDC0_e4.hpp"
#include "e4/classes/E4Recv_6EDE80_e4.hpp"
#include "e4/classes/E4Recv_6EDF10_e4.hpp"
#include "e4/classes/E4Recv_6EDF90_e4.hpp"
#include "e4/classes/E4Recv_6EDFB0_e4.hpp"
#include "e4/classes/E4Recv_6EDFD0_e4.hpp"
#include "e4/classes/E4Recv_6EE050_e4.hpp"
#include "e4/classes/E4Recv_6EF450_e4.hpp"
#include "e4/classes/E4Recv_6EFC70_e4.hpp"
#include "e4/classes/Tactical_42_e4.hpp"

// 0x6E0250
namespace gamemd {
char E4Recv_6E0250::sub_6E0250(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6E0250(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)MEMORY[0xA8B230] + 13479) = *(this + 144); /*0x6e025c*/
  return 1; /*0x6e0264*/
}
}
} // namespace gamemd

// 0x6E0270
namespace gamemd {
char E4Recv_6E0270::sub_6E0270(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6E0270(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)MEMORY[0xA8B230] + 13478) = *(this + 144); /*0x6e027c*/
  return 1; /*0x6e0284*/
}
}
} // namespace gamemd

// 0x6E0290
namespace gamemd {
char E4Recv_6E0290::sub_6E0290(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6E0290(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)MEMORY[0xA8B230] + 13480) = *(this + 144); /*0x6e029c*/
  return 1; /*0x6e02a4*/
}
}
} // namespace gamemd

// 0x6E2050
namespace gamemd {
int globalHelper_0E2050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x6E2790
namespace gamemd {
char E4Recv_6E2790::sub_6E2790(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6E2790(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, *(this + 17)); /*0x6e27ab*/
  GroundHeight = 0; /*0x6e27af*/
  v8[1] = (SHIWORD(v6) << 8) + 128; /*0x6e27d0*/
  v8[0] = ((__int16)v6 << 8) + 128; /*0x6e27da*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x6e27e3*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6) + 80) & 0x100) != 0 /*0x6e2819*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += MEMORY[0xB0E6D4]; /*0x6e2827*/
  }
  Tactical::SetTacticalPosition((int)MEMORY[0x887324], v8); /*0x6e2836*/
  return 1; /*0x6e283d*/
}
}
} // namespace gamemd

// 0x6E30C0
namespace gamemd {
int CreateHouseClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x6E3380
namespace gamemd {
char E4Recv_6E3380::sub_6E3380(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6E3380(int *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // eax
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, *(this + 17)); /*0x6e339b*/
  GroundHeight = 0; /*0x6e339f*/
  v9 = (SHIWORD(v7) << 8) + 128; /*0x6e33c0*/
  v8 = ((__int16)v7 << 8) + 128; /*0x6e33ca*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e33d5*/
  v5 = __2_YAPAXI_Z(0x14u); /*0x6e33d9*/
  if ( v5 ) /*0x6e33e3*/
    ActionQueue::PushEntry(v5, v8, v9, GroundHeight); /*0x6e3400*/
  return 1; /*0x6e3407*/
}
}
} // namespace gamemd

// 0x6E35F0
namespace gamemd {
char E4Recv_6E35F0::sub_6E35F0(void * a2, int a3, int a4, int a5)
{
{
    int v6;
    int v7;
    int v8;
    int v9;
    int GroundHeight;
    v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->M68);
    GroundHeight = 0;
    v9 = (SHIWORD(v6) << 8) + 128;
    v8 = ((short)v6 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(&v8);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v6) + 80) & 0x100) != 0 )
    GroundHeight += DataGlobal_B0E6D4;
    LOWORD(v7) = v8 / 256;
    HIWORD(v7) = v9 / 256;
    if ( LightningStorm::IsActive() )
    return 0;
    LightningStorm::Start(HIDWORD(g_RulesClass_Instance[1].?), *(int *)&g_RulesClass_Instance[1].?[4], v7, a2);
    return 1;
}
}
} // namespace gamemd

// 0x6E37F0
namespace gamemd {
char E4Recv_6E37F0::sub_6E37F0(int a2, int a3, int a4, ObjectClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6E37F0(int this, int a2, int a3, int a4, ObjectClass *aP4)
{
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  char result; // al

  v5 = *(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1; /*0x6e37fa*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1 >= 0 ) /*0x6e3803*/
  {
    v6 = *(_DWORD *)&HouseClass_Player.__pad_5568[22608] + 4 * v5; /*0x6e380b*/
    while ( strcmp((const char *)(*(_DWORD *)v6 + 36), (const char *)(this + 84)) ) /*0x6e3845*/
    {
      --v5; /*0x6e3847*/
      v6 -= 4; /*0x6e3848*/
      if ( v5 < 0 ) /*0x6e384d*/
        goto LABEL_7; /*0x6e384d*/
    }
    *(_DWORD *)(*(_DWORD *)v6 + 1588) = this->M144; /*0x6e385b*/
  }
LABEL_7:
  v7 = (int)&HouseClass_Count[-1].__tail_1602E[1]; /*0x6e3861*/
  for ( result = 1; v7 >= 0; *(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v7 + 4] + 508) = 1 ) /*0x6e3870*/
    --v7; /*0x6e3878*/
  return result; /*0x6e3867*/
}
}
} // namespace gamemd

// 0x6E4090
namespace gamemd {
char sub_6E4090(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_6E4090(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e409b*/
  if ( MEMORY[0xA8EB50] <= 0 ) /*0x6e409f*/
    return 0; /*0x6e40e3*/
  while ( 1 ) /*0x6e40aa*/
  {
    v5 = *((_DWORD *)MEMORY[0xA8EB44] + v4); /*0x6e40aa*/
    if ( *(_BYTE *)(v5 + 144) ) /*0x6e40ad*/
    {
      if ( *(_BYTE *)(v5 + 116) ) /*0x6e40b7*/
      {
        if ( !*(_BYTE *)(v5 + 129) ) /*0x6e40be*/
        {
          v6 = *(_DWORD **)(v5 + 52); /*0x6e40c8*/
          if ( v6 ) /*0x6e40cd*/
          {
            if ( LinkedList::Contains(v6, a3) ) /*0x6e40d0*/
              break; /*0x6e40d0*/
          }
        }
      }
    }
    if ( ++v4 >= MEMORY[0xA8EB50] ) /*0x6e40e1*/
      return 0; /*0x6e40e1*/
  }
  BuildingClass::UnloadUnits((int *)v5, 0, 0); /*0x6e40f2*/
  return 1; /*0x6e40e3*/
}
}
} // namespace gamemd

// 0x6E4B00
namespace gamemd {
unsigned int * Tactical_42::loc_6E4B00(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TActionClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x6E6B70
namespace gamemd {
unsigned char * E4Recv_6E6B70::sub_6E6B70(unsigned int * a2)
{
{
    this->M4 = 11;
    *(int *)this = *a2 / 256 + 1000 * (*((int*)(a2) + 1) / 256);
    return this;
}
}
} // namespace gamemd

// 0x6E8000
namespace gamemd {
unsigned int * E4Recv_6E8000::sub_6E8000(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6E8000(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edx

  result = this; /*0x6e8004*/
  *(this + 2) = &vt_INoticeSink; /*0x6e8008*/
  *(this + 3) = &vt_INoticeSource; /*0x6e800f*/
  *(this + 4) = *(_DWORD *)(a2 + 16); /*0x6e801c*/
  *((_BYTE *)this + 20) = *(_BYTE *)(a2 + 20); /*0x6e8022*/
  *(this + 6) = *(_DWORD *)(a2 + 24); /*0x6e8028*/
  *(this + 7) = *(_DWORD *)(a2 + 28); /*0x6e802e*/
  *((_BYTE *)this + 32) = *(_BYTE *)(a2 + 32); /*0x6e8034*/
  *this = &AbstractClass::`vftable'; /*0x6e803f*/
  *(this + 1) = &AbstractClass::`vftable'; /*0x6e8045*/
  *(this + 2) = &AbstractClass::`vftable'; /*0x6e804c*/
  *(this + 3) = &vt_AbstractClass; /*0x6e8053*/
  qmemcpy(this + 9, (const void *)(a2 + 36), 0x19u); /*0x6e805a*/
  qmemcpy((char *)this + 61, (const void *)(a2 + 61), 0x20u); /*0x6e8068*/
  *(this + 24) = *(_DWORD *)(a2 + 96); /*0x6e8070*/
  qmemcpy(this + 25, (const void *)(a2 + 100), 0x31u); /*0x6e807b*/
  *this = &TaskForceClass::`vftable'; /*0x6e807e*/
  *(this + 1) = &TaskForceClass::`vftable'; /*0x6e8084*/
  *(this + 2) = &TaskForceClass::`vftable'; /*0x6e808b*/
  *(this + 3) = &vt_TaskForceClass; /*0x6e8092*/
  v3 = this + 41; /*0x6e809f*/
  result[38] = *(_DWORD *)(a2 + 152); /*0x6e80a5*/
  result[39] = *(_DWORD *)(a2 + 156); /*0x6e80b1*/
  v4 = result[39]; /*0x6e80bd*/
  result[40] = *(_DWORD *)(a2 + 160); /*0x6e80c3*/
  v5 = 0; /*0x6e80c9*/
  if ( v4 > 0 ) /*0x6e80cd*/
  {
    v6 = a2 - (_DWORD)result; /*0x6e80cf*/
    do /*0x6e80e9*/
    {
      ++v5; /*0x6e80d4*/
      *v3 = *(_DWORD *)((char *)v3 + v6); /*0x6e80d5*/
      v3[1] = *(_DWORD *)((char *)v3 + v6 + 4); /*0x6e80db*/
      v3 += 2; /*0x6e80e4*/
    }
    while ( v5 < result[39] ); /*0x6e80e9*/
  }
  return result; /*0x6e80eb*/
}
}
} // namespace gamemd

// 0x6EA080
namespace gamemd {
char E4Recv_6EA080::sub_6EA080()
{
{
    int v2;
    char result;
    v2 = this->M84;
    this->M127 = 1;
    this->M120 = 1;
    for ( this->M122 = 0; v2; v2 = *(int *)(v2 + 1496) )
  {
    if ( (unsigned char)this->M123 || (unsigned char)this->M119 )
    *(char *)(v2 + 1673) = 1;
  }
    result = SetLandTypeMap(*(int **)(this + 40));
    this->M128 = 1;
    return result;
}
}
} // namespace gamemd

// 0x6EC250
namespace gamemd {
int sub_6EC250(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6EC250(int a1, int a2)
{
  int result; // eax
  int i; // ebp
  int v4; // esi
  int j; // eax
  wchar_t *v6; // edi
  int v7; // eax
  int v10; // [esp+10h] [ebp-8h]

  result = MEMORY[0x8B40F8]; /*0x6ec253*/
  for ( i = 0; i < MEMORY[0x8B40F8]; ++i ) /*0x6ec265*/
  {
    v4 = *((_DWORD *)MEMORY[0x8B40EC] + i); /*0x6ec275*/
    if ( v4 && a2 == *(_DWORD *)(v4 + 44) && *(_DWORD *)(*(_DWORD *)(v4 + 36) + 180) < a1 ) /*0x6ec294*/
    {
      for ( j = *(_DWORD *)(v4 + 84); j; j = *(_DWORD *)(v4 + 84) ) /*0x6ec29b*/
        TeamClass::LiberateMember_Start(v4, j, 0xFFFFFFFF, 0); /*0x6ec2a4*/
      *(_BYTE *)(v4 + 126) = 1; /*0x6ec2b0*/
      *(_BYTE *)(v4 + 125) = 1; /*0x6ec2b3*/
      v6 = MEMORY[0xA8ED84]; /*0x6ec2bc*/
      v7 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].AITriggerFailureWeightDelta * 900.0); /*0x6ec2ce*/
      *(_BYTE *)(v4 + 131) = 1; /*0x6ec2da*/
      *(_DWORD *)(v4 + 100) = v6; /*0x6ec2e0*/
      *(_DWORD *)(v4 + 104) = v10; /*0x6ec2e2*/
      *(_DWORD *)(v4 + 108) = v7; /*0x6ec2e5*/
    }
    result = MEMORY[0x8B40F8]; /*0x6ec2e8*/
  }
  return result; /*0x6ec2f9*/
}
}
} // namespace gamemd

// 0x6EDDC0
namespace gamemd {
int E4Recv_6EDDC0::sub_6EDDC0(int a2, int a3)
{
{
    int *v4;
    int result;
    v4 = *(int **)(this + 84);
    if ( v4 )
  {
    do
    {
    result = (*(int (__thiscall **)(int *, int))(*v4 + 1312))(v4, *(int *)(a2 + 4));
    v4 = (int *)v4[374];
    }
    while ( v4 );
    this->M128 = 1;
  }
    else
  {
    this->M128 = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6EDF10
namespace gamemd {
void E4Recv_6EDF10::sub_6EDF10(int a2, int a3)
{
{
    int *i;
    int *v5;
    int v6;
    int v7;
    char v8[12];
    for ( i = *(int **)(this + 84); i; i = (int *)i[374] )
  {
    v5 = (int *)(*(int (__thiscall **)(int *, char *))(*i + 72))(i, v8);
    LOWORD(v6) = *v5 / 256;
    HIWORD(v6) = v5[1] / 256;
    v7 = v6;
    MapClass::TriggerEVA((short *)&v7);
  }
    this->M128 = 1;
}
}
} // namespace gamemd

// 0x6EDF90
namespace gamemd {
char E4Recv_6EDF90::sub_6EDF90(int a2, int a3)
{
{
    *(char *)(this->M44 + 494) = 1;
    this->M128 = 1;
    return 1;
}
}
} // namespace gamemd

// 0x6EDFB0
namespace gamemd {
int E4Recv_6EDFB0::sub_6EDFB0(int a2, int a3)
{
{
    int result;
    result = this->M44;
    *(int *)(result + 592) = 4;
    this->M128 = 1;
    return result;
}
}
} // namespace gamemd

// 0x6EDFD0
namespace gamemd {
void E4Recv_6EDFD0::sub_6EDFD0(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_6EDFD0(int this, int a2, int a3)
{
  int v4; // esi
  char v5; // cl
  int v6; // [esp+8h] [ebp-4h] BYREF

  do /*0x6ee038*/
  {
    v4 = this->M84; /*0x6edfd5*/
    v5 = 0; /*0x6edfd8*/
    if ( !v4 ) /*0x6edfdc*/
      break; /*0x6edfdc*/
    do /*0x6ee034*/
    {
      if ( *(int *)(v4 + 108) > 0 && *(_BYTE *)(v4 + 144) && *(_BYTE *)(v4 + 116) && !*(_BYTE *)(v4 + 129) ) /*0x6edff6*/
      {
        v6 = *(_DWORD *)(v4 + 108); /*0x6ee008*/
        (*(void (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 364))( /*0x6ee024*/
          v4,
          &v6,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          1,
          0,
          0);
        v5 = 1; /*0x6ee02a*/
      }
      v4 = *(_DWORD *)(v4 + 1496); /*0x6ee02c*/
    }
    while ( v4 ); /*0x6ee034*/
  }
  while ( v5 ); /*0x6ee038*/
  *(_BYTE *)(this + 128) = 1; /*0x6ee03a*/
}
}
} // namespace gamemd

// 0x6EE050
namespace gamemd {
int E4Recv_6EE050::sub_6EE050(int a2, int a3)
{
{
    int *v4;
    int *v5;
    int result;
    v4 = *(int **)(this + 84);
    if ( v4 )
  {
    do
    {
    v5 = (int *)v4[374];
    (*(void (__thiscall **)(int *))(*v4 + 212))(v4);
    result = (*(int (__thiscall **)(int *))(*v4 + 248))(v4);
    v4 = v5;
    }
    while ( v5 );
    this->M128 = 1;
  }
    else
  {
    this->M128 = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6EEBD0
namespace gamemd {
unsigned int * DamageMapClassArea(int ecx0, void * a1, FootClass * aP2, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall DamageMapClassArea(int ecx0, void *a1, FootClass *aP2, int a4, char a5)
{
  int v5; // ecx
  _DWORD *result; // eax
  _DWORD *v7; // esi
  HouseClass *v8; // eax
  FootClass *v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  HouseClass *v12; // edx
  _DWORD *v13; // eax
  HouseClass *v14; // edx
  int TileData; // eax
  int *location; // ecx
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  int *v22; // eax
  int v23; // edi
  int v24; // ebx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  double v29; // st7
  bool v30; // [esp+1Bh] [ebp-75h]
  int v31; // [esp+1Ch] [ebp-74h]
  int v32; // [esp+20h] [ebp-70h]
  MouseClass *v33; // [esp+24h] [ebp-6Ch]
  int v34; // [esp+28h] [ebp-68h]
  int v35; // [esp+2Ch] [ebp-64h]
  _DWORD *v36; // [esp+30h] [ebp-60h]
  _DWORD *v37; // [esp+34h] [ebp-5Ch]
  MouseClass *v40; // [esp+40h] [ebp-50h] BYREF
  int v41; // [esp+44h] [ebp-4Ch] BYREF
  int v42; // [esp+48h] [ebp-48h]
  int v43; // [esp+4Ch] [ebp-44h]
  int v44; // [esp+50h] [ebp-40h]
  int v45; // [esp+54h] [ebp-3Ch]
  int v46; // [esp+58h] [ebp-38h]
  int v47; // [esp+5Ch] [ebp-34h]
  int v48; // [esp+68h] [ebp-28h]
  int v49; // [esp+74h] [ebp-1Ch]
  char v50[12]; // [esp+78h] [ebp-18h] BYREF
  char v51[12]; // [esp+84h] [ebp-Ch] BYREF

  v5 = 0; /*0x6eebe4*/
  v31 = -1; /*0x6eebe6*/
  v32 = -1; /*0x6eebea*/
  result = 0; /*0x6eebf5*/
  v36 = 0; /*0x6eebfb*/
  v37 = 0; /*0x6eebff*/
  v35 = 0; /*0x6eec03*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22684] <= 0 ) /*0x6eec07*/
  {
LABEL_22:
    if ( !a5 ) /*0x6eee74*/
      return v37; /*0x6eee76*/
    return result; /*0x6eee76*/
  }
  do /*0x6eee55*/
  {
    v7 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v5); /*0x6eec1a*/
    v8 = (HouseClass *)v7[135]; /*0x6eec1d*/
    v30 = v8 == a1; /*0x6eec30*/
    if ( v7[328] != ecx0 ) /*0x6eec34*/
      goto LABEL_19; /*0x6eec34*/
    if ( v8 == a1 ) /*0x6eec3c*/
    {
      v9 = aP2; /*0x6eec6a*/
    }
    else
    {
      v9 = aP2; /*0x6eec3e*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(aP2->focus, (IUnknown *)v8) /*0x6eec62*/
        && !*(_BYTE *)(*(_DWORD *)(v7[135] + 52) + 422) )
      {
        goto LABEL_19; /*0x6eec62*/
      }
    }
    v10 = -1; /*0x6eec70*/
    switch ( a4 ) /*0x6eec7c*/
    {
      case 0: /*0x6eec7c*/
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v50); /*0x6eec8c*/
        LOWORD(v33) = *v11 / 256; /*0x6eec9f*/
        v12 = (HouseClass *)v9->focus; /*0x6eecb0*/
        HIWORD(v33) = v11[1] / 256; /*0x6eecb9*/
        v40 = v33; /*0x6eecc6*/
        v10 = 0x7FFFFFFF - CellClass::GetTileData((IUnknown *)&v40, (IUnknown *)v12); /*0x6eecdb*/
        break; /*0x6eecdd*/
      case 1: /*0x6eec7c*/
        v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v51); /*0x6eeceb*/
        LOWORD(v34) = *v13 / 256; /*0x6eecfe*/
        v14 = (HouseClass *)v9->focus; /*0x6eed0f*/
        HIWORD(v34) = v13[1] / 256; /*0x6eed18*/
        v41 = v34; /*0x6eed25*/
        TileData = CellClass::GetTileData((IUnknown *)&v41, (IUnknown *)v14); /*0x6eed30*/
        goto LABEL_13; /*0x6eed35*/
      case 2: /*0x6eec7c*/
        location = v9->location; /*0x6eed46*/
        v17 = v9->location[0]; /*0x6eed4b*/
        v18 = location[1]; /*0x6eed4d*/
        v48 = location[2]; /*0x6eed53*/
        v19 = v7[40]; /*0x6eed5d*/
        v42 = v7[39] - v17; /*0x6eed60*/
        v20 = v7[41]; /*0x6eed6a*/
        v43 = v19 - v18; /*0x6eed6d*/
        v44 = v20 - v48; /*0x6eed77*/
        v21 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x6eed9c*/
                                            (double)v42 * (double)v42
                                          + (double)(v20 - v48) * (double)(v20 - v48)
                                          + (double)(v19 - v18) * (double)(v19 - v18)));
        v10 = 0x7FFFFFFF - Math::RoundToInt(v21); /*0x6eedae*/
        break; /*0x6eedb0*/
      case 3: /*0x6eec7c*/
        v22 = v9->location; /*0x6eedbe*/
        v23 = v9->location[0]; /*0x6eedc3*/
        v24 = v22[1]; /*0x6eedc5*/
        v25 = v22[2]; /*0x6eedc8*/
        v26 = v7[39]; /*0x6eedcb*/
        v49 = v25; /*0x6eedcd*/
        v27 = v7[40] - v24; /*0x6eedda*/
        v45 = v26 - v23; /*0x6eeddc*/
        v28 = v7[41]; /*0x6eede0*/
        v46 = v27; /*0x6eede3*/
        v47 = v28 - v49; /*0x6eeded*/
        v29 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x6eee12*/
                                            (double)(v26 - v23) * (double)(v26 - v23)
                                          + (double)(v28 - v49) * (double)(v28 - v49)
                                          + (double)v27 * (double)v27));
        TileData = Math::RoundToInt(v29); /*0x6eee1a*/
LABEL_13:
        v10 = TileData; /*0x6eee1f*/
        break; /*0x6eee1f*/
      default:
        break;
    }
    if ( v10 > v31 && v30 ) /*0x6eee2d*/
    {
      v36 = v7; /*0x6eee2f*/
      v31 = v10; /*0x6eee33*/
    }
    if ( v10 > v32 ) /*0x6eee3b*/
    {
      v37 = v7; /*0x6eee3d*/
      v32 = v10; /*0x6eee41*/
    }
LABEL_19:
    v5 = ++v35; /*0x6eee45*/
  }
  while ( v35 < *(int *)&HouseClass_Player.__pad_5568[22684] ); /*0x6eee55*/
  result = v36; /*0x6eee5b*/
  if ( !v36 || v31 <= v32 ) /*0x6eee6d*/
    goto LABEL_22; /*0x6eee6d*/
  return result; /*0x6eee7a*/
}
}
} // namespace gamemd

// 0x6EFC70
namespace gamemd {
void E4Recv_6EFC70::ProcessAISuperWeaponSelection(ScriptClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ProcessAISuperWeaponSelection(int *this, ScriptClass *aP1, int a3)
{
  TechnoClass *v3; // esi
  int v4; // ebp
  TechnoClass *i; // ebx
  int v6; // edi
  _DWORD *focus; // edi
  int v8; // eax
  int v9; // ecx
  int j; // edx
  int v11; // esi
  int *v12; // ebp
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int *v17; // [esp+10h] [ebp-18h] BYREF
  int v18; // [esp+14h] [ebp-14h]
  int DefaultTimer; // [esp+18h] [ebp-10h]
  char v20[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = (TechnoClass *)*(this + 21); /*0x6efc76*/
  v4 = -1; /*0x6efc79*/
  v17 = this; /*0x6efc7f*/
  for ( i = v3; v3; v3 = *(TechnoClass **)&v3[1].missionQueued ) /*0x6efc85*/
  {
    v6 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v3->__pad_0 + 132))(v3) + 1532); /*0x6efc91*/
    if ( TechnoClass::IsDeployed((int)v3) /*0x6efcba*/
      && (BYTE1(v3[1].firepowerMultiplier[1])
       || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v3->__pad_0 + 44))(v3) == 2)
      && v6 > v4 )
    {
      i = v3; /*0x6efcbc*/
      v4 = v6; /*0x6efcbe*/
    }
  }
  if ( !i ) /*0x6efccc*/
  {
    *((_BYTE *)v17 + 128) = 1; /*0x6efcd5*/
    return; /*0x6efce0*/
  }
  focus = i->focus; /*0x6efce3*/
  v8 = 0; /*0x6efce9*/
  v9 = focus[153]; /*0x6efcf0*/
  if ( v9 <= 0 ) /*0x6efcf8*/
    goto LABEL_16; /*0x6efcf8*/
  for ( j = focus[150]; *(_DWORD *)(*(_DWORD *)(*(_DWORD *)j + 40) + 180) != 1; j += 4 ) /*0x6efd00*/
  {
    if ( ++v8 >= v9 ) /*0x6efd15*/
    {
      *((_BYTE *)v17 + 128) = 1; /*0x6efd1e*/
      return; /*0x6efd28*/
    }
  }
  v11 = *(_DWORD *)(focus[150] + 4 * v8); /*0x6efd2b*/
  if ( !v11 ) /*0x6efd30*/
  {
LABEL_16:
    *((_BYTE *)v17 + 128) = 1; /*0x6efd39*/
    return; /*0x6efd43*/
  }
  if ( *(_BYTE *)(v11 + 111) && HouseClass::GetPowerRatio(focus) >= 1.0 ) /*0x6efd5f*/
  {
    v12 = v17; /*0x6efd61*/
    v13 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v17[13] + 72))(v17[13], v20); /*0x6efd6f*/
    LOWORD(v18) = *v13 / 256; /*0x6efd82*/
    HIWORD(v18) = v13[1] / 256; /*0x6efd9a*/
    v14 = *(_DWORD *)(v11 + 40); /*0x6efda3*/
    v17 = (int *)v18; /*0x6efda6*/
    SuperWeapon::FireSuperWeaponHouseClass(focus, *(AbstractClass **)(v14 + 180), (AbstractClass *)&v17); /*0x6efdb4*/
    *((_BYTE *)v12 + 128) = 1; /*0x6efdba*/
    return; /*0x6efdc6*/
  }
  v15 = *(_DWORD *)(v11 + 48); /*0x6efdc9*/
  v16 = *(_DWORD *)(v11 + 56); /*0x6efdcc*/
  if ( v15 == -1 ) /*0x6efdd2*/
    goto LABEL_23; /*0x6efdd2*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v15 < v16 ) /*0x6efddd*/
  {
    v16 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v15; /*0x6efddf*/
LABEL_23:
    v18 = v16; /*0x6efde1*/
    goto LABEL_24; /*0x6efde1*/
  }
  v18 = 0; /*0x6efe32*/
LABEL_24:
  DefaultTimer = Super::GetDefaultTimer((_DWORD *)v11); /*0x6efde5*/
  if ( *(_BYTE *)(v11 + 109) ) /*0x6efdf0*/
  {
    if ( 1.0 - *(float *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3440) < (double)v18 / (double)DefaultTimer ) /*0x6efe1c*/
      *((_BYTE *)v17 + 128) = 1; /*0x6efe25*/
  }
  else
  {
    *((_BYTE *)v17 + 128) = 1; /*0x6efe42*/
  }
}
}
} // namespace gamemd

// 0x6E0030
namespace gamemd {
char sub_6E0030(int a1, int a2, int a3, int a4)
{
return 1;
}
} // namespace gamemd

// 0x6E0040
namespace gamemd {
char sub_6E0040(int a1, int a2, int a3, int a4)
{
return 1;
}
} // namespace gamemd

// 0x6E0080
namespace gamemd {
char E4Recv_6E0080::sub_6E0080(int a2, int a3, int a4, int a5)
{
{
    int v5;
    int v6;
    short v7;
    char *v8;
    short *v9;
    int v11;
    v5 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v11, this->M68);
    v6 = 0;
    v11 = v5;
    if ( g_GameCleanupState <= 0 )
    return 1;
    v7 = HIWORD(v11);
    do
  {
    v8 = (char *)*((int *)(DataGlobal_A8020C) + v6);
    if ( v8[144] )
    {
    v9 = (short *)(*(int (__thiscall **)(char *, int *))(*(int *)(v8) + 440))(v8, &v11);
    if ( *v9 == (short)v5 && v9[1] == v7 )
    (*(void (__thiscall **)(char *))(*(int *)(v8) + 248))(v8);
    }
    ++v6;
  }
    while ( v6 < g_GameCleanupState );
    return 1;
}
}
} // namespace gamemd

// 0x6E01C0
namespace gamemd {
char globalHelper_0E01C0(int a1, int a2, int aP1, IUnknown * aP3)
{
{
    int v4;
    char *v5;
    int *v6;
    v4 = 0;
    if ( *(int *)&HouseClass_Player.__pad_5568[22996] <= 0 )
    return 1;
    do
  {
    v5 = *(char **)(*(int *)&HouseClass_Player.__pad_5568[22984] + 4 * v4);
    if ( (*(int (__thiscall **)(char *))(*(int *)(v5) + 44))(v5) != 6 )
    {
    if ( v5[144] )
      {
    if ( v5[116] )
        {
    v6 = (int *)*((int *)(v5) + 13);
    if ( v6 )
          {
    if ( LinkedList::Contains(v6, (IUnknown *)aP1) && (!(*(int (__thiscall **)(char *))(*(int *)(v5) + 388))(v5) || (*(int (__thiscall **)(char *))(*(int *)(v5) + 388))(v5) == 23) )
            {
    (*(void (__thiscall **)(char *, int, int))(*(int *)(v5) + 488))(v5, 5, 0);
            }
          }
        }
      }
    }
    ++v4;
  }
    while ( v4 < *(int *)&HouseClass_Player.__pad_5568[22996] );
    return 1;
}
}
} // namespace gamemd

// 0x6E0790
namespace gamemd {
char E4Recv_6E0790::sub_6E0790(int a2, int a3, int a4, int a5)
{
{
    int v5;
    int *WorldCoords;
    int v8[3];
    v5 = g_RulesClass_Instance->?[5];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v8, this->M144);
    CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
    return 1;
}
}
} // namespace gamemd

// 0x6E07F0
namespace gamemd {
char E4Recv_6E07F0::sub_6E07F0(int a2, int a3, int a4, int a5)
{
{
    int v5;
    int *WorldCoords;
    int v8[3];
    v5 = g_RulesClass_Instance->?[5];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v8, this->M144);
    CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
    return 1;
}
}
} // namespace gamemd

// 0x6E0850
namespace gamemd {
char E4Recv_6E0850::sub_6E0850(int a2, int a3, int a4, int a5)
{
{
    int v5;
    int *WorldCoords;
    int v8[3];
    v5 = g_RulesClass_Instance->?[5];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v8, this->M144);
    CreateSmokeEffectAt(300, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
    return 1;
}
}
} // namespace gamemd

// 0x6E1180
namespace gamemd {
char E4Recv_6E1180::sub_6E1180(int a2, int a3, int a4, int a5)
{
{
    int v6;
    int v7;
    v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->M144);
    MapClass::TriggerEVA((short *)&v6);
    return 1;
}
}
} // namespace gamemd

// 0x6E21D0
namespace gamemd {
char sub_6E21D0(int a1, int a2, int a3, int a4)
{
return 1;
}
} // namespace gamemd

// 0x6E2A50
namespace gamemd {
char E4Recv_6E2A50::sub_6E2A50(int a2, int a3, int a4, int a5)
{
{
    int v6;
    int v7;
    int *v8;
    int v9;
    if ( this->M76 )
  {
    v6 = g_GameObjectCleanup;
    v7 = 0;
    if ( g_GameObjectCleanup > 0 )
    {
    v8 = g_TagClassCount;
    do
      {
    if ( *(int *)(v8[v7] + 36) == this->M76 )
        {
    v9 = v8[v7];
    if ( v9 )
          {
    (*(void (__thiscall **)(int, int))(*(int *)(v9) + 32))(v9, 1);
    v8 = g_TagClassCount;
          }
    --v7;
        }
    ++v7;
      }
    while ( v7 < v6 );
    }
  }
    return 1;
}
}
} // namespace gamemd

// 0x6E2C20
namespace gamemd {
char globalHelper_0E2C20(int a1, int a2, int a3, IUnknown * aP3)
{
{
    LayerClass::ClearFactoryCellAssignments(&DataGlobal_87C374.__pad_14B0[8132]);
    MapClass::MarkForRedraw(&DataGlobal_87C374.__pad_14B0[8132], 1);
    return 1;
}
}
} // namespace gamemd

// 0x6E3F70
namespace gamemd {
unsigned int * E4Recv_6E3F70::sub_6E3F70(unsigned int * a2)
{
{
    int *WorldCoords;
    int v4[3];
    WorldCoords = Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v4, this->M144);
    *a2 = *WorldCoords;
    *((int*)(a2) + 1) = WorldCoords[1];
    *((int*)(a2) + 2) = WorldCoords[2];
    return a2;
}
}
} // namespace gamemd

// 0x6E4440
namespace gamemd {
char globalHelper_0E4440(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
{
    if ( !a0 )
    return 0;
    GlobalHelper_0E4440_Helper(a0);
    return 1;
}
}
} // namespace gamemd

// 0x6E44C0
namespace gamemd {
char globalHelper_0E44C0(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
{
    if ( !a0 )
    return 0;
    GlobalHelper_0E44C0_Helper(a0);
    return 1;
}
}
} // namespace gamemd

// 0x6E4540
namespace gamemd {
char globalHelper_0E4540(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
{
    if ( !a0 )
    return 0;
    GlobalHelper_0E4540_Helper(a0);
    return 1;
}
}
} // namespace gamemd

// 0x6E4B50
namespace gamemd {
void sub_6E4B50()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0E708 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6E4B80
namespace gamemd {
void sub_6E4B80()
{
{
    DataGlobal_B0E770 = DataGlobal_B0E708 / 60.0;
}
}
} // namespace gamemd

// 0x6E4BA0
namespace gamemd {
void sub_6E4BA0()
{
{
    DataGlobal_B0E758 = 1.0 / DataGlobal_B0E770;
}
}
} // namespace gamemd

// 0x6E4BC0
namespace gamemd {
void sub_6E4BC0()
{
{
    DataGlobal_B0E750 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6E4BE0
namespace gamemd {
void sub_6E4BE0()
{
{
    DataGlobal_B0E710 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6E4C00
namespace gamemd {
void sub_6E4C00()
{
{
    DataGlobal_B0E6E8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6E4C20
namespace gamemd {
long long sub_6E4C20()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0E6E8 - DataGlobal_B0E710);
    result = Math::RoundToInt(v0 * DataGlobal_B0E708 * 0.5);
    DataGlobal_B0E778 = result;
    return result;
}
}
} // namespace gamemd

// 0x6E4C60
namespace gamemd {
void sub_6E4C60()
{
{
    DataGlobal_B0E718 = Math::ArcTan((double)DataGlobal_B0E778 * 0.00390625);
}
}
} // namespace gamemd

// 0x6E4C90
namespace gamemd {
void sub_6E4C90()
{
{
    DataGlobal_B0E748 = Math::ArcTan((double)(2 * DataGlobal_B0E778) / DataGlobal_B0E708);
}
}
} // namespace gamemd

// 0x6E4CC0
namespace gamemd {
long long sub_6E4CC0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0E778) + 0.5);
    DataGlobal_B0E76C = result;
    return result;
}
}
} // namespace gamemd

// 0x6E4CF0
namespace gamemd {
int sub_6E4CF0()
{
{
    DataGlobal_B0E700 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E4D00
namespace gamemd {
int sub_6E4D00()
{
{
    DataGlobal_B0E738 = 0;
    DataGlobal_B0E73C = 0;
    DataGlobal_B0E740 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E4D20
namespace gamemd {
int sub_6E4D20()
{
{
    DataGlobal_B0E768 = 0;
    DataGlobal_B0E760 = 128;
    DataGlobal_B0E764 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6E4D40
namespace gamemd {
int sub_6E4D40()
{
{
    DataGlobal_B0E6F0 = 0;
    DataGlobal_B0E6F4 = 0;
    DataGlobal_B0E6F8 = 0;
    DataGlobal_B0E6FC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E4D60
namespace gamemd {
int sub_6E4D60()
{
{
    g_TagClassCount = 0;
    DataGlobal_B0E728 = 0;
    DataGlobal_B0E72C = 1;
    DataGlobal_B0E72D = 0;
    TagClass_Array = (int)&vt_DynamicVectorClass_TagClass;
    DataGlobal_B0E734 = 10;
    g_GameObjectCleanup = 0;
    return atexit(sub_6E4DA0);
}
}
} // namespace gamemd

// 0x6E4DA0
namespace gamemd {
void sub_6E4DA0()
{
{
    TagClass_Array = (int)&vt_VectorClass_TagClass;
    if ( g_TagClassCount && DataGlobal_B0E72D )
  {
    __3_YAXPAX_Z(g_TagClassCount);
    g_TagClassCount = 0;
  }
    DataGlobal_B0E72D = 0;
    DataGlobal_B0E728 = 0;
}
}
} // namespace gamemd

// 0x6E5290
namespace gamemd {
char E4Recv_6E5290::sub_6E5290()
{
{
    return this->M52;
}
}
} // namespace gamemd

// 0x6E57DE
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_18()
{
return 1;
}
} // namespace gamemd

// 0x6E58D0
namespace gamemd {
void sub_6E58D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0E7B8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6E5900
namespace gamemd {
void sub_6E5900()
{
{
    DataGlobal_B0E808 = DataGlobal_B0E7B8 / 60.0;
}
}
} // namespace gamemd

// 0x6E5920
namespace gamemd {
void sub_6E5920()
{
{
    DataGlobal_B0E7F0 = 1.0 / DataGlobal_B0E808;
}
}
} // namespace gamemd

// 0x6E5940
namespace gamemd {
void sub_6E5940()
{
{
    DataGlobal_B0E7E8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6E5960
namespace gamemd {
void sub_6E5960()
{
{
    DataGlobal_B0E7C0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6E5980
namespace gamemd {
void sub_6E5980()
{
{
    DataGlobal_B0E798 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6E59A0
namespace gamemd {
long long sub_6E59A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0E798 - DataGlobal_B0E7C0);
    result = Math::RoundToInt(v0 * DataGlobal_B0E7B8 * 0.5);
    DataGlobal_B0E810 = result;
    return result;
}
}
} // namespace gamemd

// 0x6E59E0
namespace gamemd {
void sub_6E59E0()
{
{
    DataGlobal_B0E7C8 = Math::ArcTan((double)DataGlobal_B0E810 * 0.00390625);
}
}
} // namespace gamemd

// 0x6E5A10
namespace gamemd {
void sub_6E5A10()
{
{
    DataGlobal_B0E7E0 = Math::ArcTan((double)(2 * DataGlobal_B0E810) / DataGlobal_B0E7B8);
}
}
} // namespace gamemd

// 0x6E5A40
namespace gamemd {
long long sub_6E5A40()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0E810) + 0.5);
    DataGlobal_B0E804 = result;
    return result;
}
}
} // namespace gamemd

// 0x6E5A70
namespace gamemd {
int sub_6E5A70()
{
{
    DataGlobal_B0E7B0 = 0;
    DataGlobal_B0E7B2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E5A80
namespace gamemd {
int sub_6E5A80()
{
{
    DataGlobal_B0E7D0 = 0;
    DataGlobal_B0E7D4 = 0;
    DataGlobal_B0E7D8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E5AA0
namespace gamemd {
int sub_6E5AA0()
{
{
    DataGlobal_B0E800 = 0;
    DataGlobal_B0E7F8 = 128;
    DataGlobal_B0E7FC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6E5AC0
namespace gamemd {
int sub_6E5AC0()
{
{
    DataGlobal_B0E7A0 = 0;
    DataGlobal_B0E7A4 = 0;
    DataGlobal_B0E7A8 = 0;
    DataGlobal_B0E7AC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E5AE0
namespace gamemd {
int sub_6E5AE0()
{
{
    DataGlobal_B0E784 = 0;
    DataGlobal_B0E788 = 0;
    DataGlobal_B0E78C = 1;
    DataGlobal_B0E78D = 0;
    DataGlobal_B0E780 = (int)&vt_DynamicVectorClass_TagTypeClass;
    DataGlobal_B0E794 = 10;
    g_MultiplayerCleanup = 0;
    return atexit(sub_6E5B20);
}
}
} // namespace gamemd

// 0x6E5B20
namespace gamemd {
void sub_6E5B20()
{
{
    DataGlobal_B0E780 = (int)&vt_VectorClass_TagTypeClass;
    if ( DataGlobal_B0E784 && DataGlobal_B0E78D )
  {
    __3_YAXPAX_Z(DataGlobal_B0E784);
    DataGlobal_B0E784 = 0;
  }
    DataGlobal_B0E78D = 0;
    DataGlobal_B0E788 = 0;
}
}
} // namespace gamemd

// 0x6E6840
namespace gamemd {
void sub_6E6840()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0E838 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6E6870
namespace gamemd {
void sub_6E6870()
{
{
    DataGlobal_B0E8A0 = DataGlobal_B0E838 / 60.0;
}
}
} // namespace gamemd

// 0x6E6890
namespace gamemd {
void sub_6E6890()
{
{
    DataGlobal_B0E888 = 1.0 / DataGlobal_B0E8A0;
}
}
} // namespace gamemd

// 0x6E68B0
namespace gamemd {
void sub_6E68B0()
{
{
    DataGlobal_B0E880 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6E68D0
namespace gamemd {
void sub_6E68D0()
{
{
    DataGlobal_B0E858 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6E68F0
namespace gamemd {
void sub_6E68F0()
{
{
    DataGlobal_B0E818 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6E6910
namespace gamemd {
long long sub_6E6910()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0E818 - DataGlobal_B0E858);
    result = Math::RoundToInt(v0 * DataGlobal_B0E838 * 0.5);
    DataGlobal_B0E8A8 = result;
    return result;
}
}
} // namespace gamemd

// 0x6E6950
namespace gamemd {
void sub_6E6950()
{
{
    DataGlobal_B0E860 = Math::ArcTan((double)DataGlobal_B0E8A8 * 0.00390625);
}
}
} // namespace gamemd

// 0x6E6980
namespace gamemd {
void sub_6E6980()
{
{
    DataGlobal_B0E878 = Math::ArcTan((double)(2 * DataGlobal_B0E8A8) / DataGlobal_B0E838);
}
}
} // namespace gamemd

// 0x6E69B0
namespace gamemd {
long long sub_6E69B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0E8A8) + 0.5);
    DataGlobal_B0E89C = result;
    return result;
}
}
} // namespace gamemd

// 0x6E69E0
namespace gamemd {
int sub_6E69E0()
{
{
    DataGlobal_B0E830 = 0;
    DataGlobal_B0E832 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E69F0
namespace gamemd {
int sub_6E69F0()
{
{
    DataGlobal_B0E868 = 0;
    DataGlobal_B0E86C = 0;
    DataGlobal_B0E870 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E6A10
namespace gamemd {
int sub_6E6A10()
{
{
    DataGlobal_B0E898 = 0;
    DataGlobal_B0E890 = 128;
    DataGlobal_B0E894 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6E6A30
namespace gamemd {
int sub_6E6A30()
{
{
    DataGlobal_B0E820 = 0;
    DataGlobal_B0E824 = 0;
    DataGlobal_B0E828 = 0;
    DataGlobal_B0E82C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E6A50
namespace gamemd {
int sub_6E6A50()
{
{
    g_BuildingLoadQueue_Array = 0;
    g_BuildingLoadQueue_Count = 0;
    g_BuildingLoadQueue_Capacity = 0;
    g_BuildingLoadQueue_Dirty = 0;
    g_BuildingLoadQueue_Active = 0;
    return atexit(sub_6E6A80);
}
}
} // namespace gamemd

// 0x6E6A80
namespace gamemd {
void sub_6E6A80()
{
{
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array);
    g_BuildingLoadQueue_Array = 0;
    g_BuildingLoadQueue_Count = 0;
    g_BuildingLoadQueue_Capacity = 0;
    g_BuildingLoadQueue_Dirty = 0;
    g_BuildingLoadQueue_Active = 0;
}
}
} // namespace gamemd

// 0x6E7C70
namespace gamemd {
void sub_6E7C70()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0E8D0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6E7CA0
namespace gamemd {
void sub_6E7CA0()
{
{
    DataGlobal_B0E920 = DataGlobal_B0E8D0 / 60.0;
}
}
} // namespace gamemd

// 0x6E7CC0
namespace gamemd {
void sub_6E7CC0()
{
{
    DataGlobal_B0E908 = 1.0 / DataGlobal_B0E920;
}
}
} // namespace gamemd

// 0x6E7CE0
namespace gamemd {
void sub_6E7CE0()
{
{
    DataGlobal_B0E900 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6E7D00
namespace gamemd {
void sub_6E7D00()
{
{
    DataGlobal_B0E8D8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6E7D20
namespace gamemd {
void sub_6E7D20()
{
{
    DataGlobal_B0E8B0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6E7D40
namespace gamemd {
long long sub_6E7D40()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0E8B0 - DataGlobal_B0E8D8);
    result = Math::RoundToInt(v0 * DataGlobal_B0E8D0 * 0.5);
    DataGlobal_B0E928 = result;
    return result;
}
}
} // namespace gamemd

// 0x6E7D80
namespace gamemd {
void sub_6E7D80()
{
{
    DataGlobal_B0E8E0 = Math::ArcTan((double)DataGlobal_B0E928 * 0.00390625);
}
}
} // namespace gamemd

// 0x6E7DB0
namespace gamemd {
void sub_6E7DB0()
{
{
    DataGlobal_B0E8F8 = Math::ArcTan((double)(2 * DataGlobal_B0E928) / DataGlobal_B0E8D0);
}
}
} // namespace gamemd

// 0x6E7DE0
namespace gamemd {
long long sub_6E7DE0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0E928) + 0.5);
    DataGlobal_B0E91C = result;
    return result;
}
}
} // namespace gamemd

// 0x6E7E10
namespace gamemd {
int sub_6E7E10()
{
{
    DataGlobal_B0E8C8 = 0;
    DataGlobal_B0E8CA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E7E20
namespace gamemd {
int sub_6E7E20()
{
{
    DataGlobal_B0E8E8 = 0;
    DataGlobal_B0E8EC = 0;
    DataGlobal_B0E8F0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E7E40
namespace gamemd {
int sub_6E7E40()
{
{
    DataGlobal_B0E918 = 0;
    DataGlobal_B0E910 = 128;
    DataGlobal_B0E914 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6E7E60
namespace gamemd {
int sub_6E7E60()
{
{
    DataGlobal_B0E8B8 = 0;
    DataGlobal_B0E8BC = 0;
    DataGlobal_B0E8C0 = 0;
    DataGlobal_B0E8C4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E85B0
namespace gamemd {
char E4Recv_6E85B0::sub_6E85B0()
{
{
    int v2;
    int *i;
    v2 = 0;
    if ( this->M156 <= 0 )
    return 1;
    for ( i = this + 42; (*(int (__thiscall **)(int))(*(int *)*i + 44))(*i) == 16; i += 2 )
  {
    if ( ++v2 >= this->M156 )
    return 1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x6E8880
namespace gamemd {
void sub_6E8880()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0E950 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6E88B0
namespace gamemd {
void sub_6E88B0()
{
{
    DataGlobal_B0E9A0 = DataGlobal_B0E950 / 60.0;
}
}
} // namespace gamemd

// 0x6E88D0
namespace gamemd {
void sub_6E88D0()
{
{
    DataGlobal_B0E988 = 1.0 / DataGlobal_B0E9A0;
}
}
} // namespace gamemd

// 0x6E88F0
namespace gamemd {
void sub_6E88F0()
{
{
    DataGlobal_B0E980 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6E8910
namespace gamemd {
void sub_6E8910()
{
{
    DataGlobal_B0E958 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6E8930
namespace gamemd {
void sub_6E8930()
{
{
    DataGlobal_B0E930 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6E8950
namespace gamemd {
long long sub_6E8950()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0E930 - DataGlobal_B0E958);
    result = Math::RoundToInt(v0 * DataGlobal_B0E950 * 0.5);
    DataGlobal_B0E9A8 = result;
    return result;
}
}
} // namespace gamemd

// 0x6E8990
namespace gamemd {
void sub_6E8990()
{
{
    DataGlobal_B0E960 = Math::ArcTan((double)DataGlobal_B0E9A8 * 0.00390625);
}
}
} // namespace gamemd

// 0x6E89C0
namespace gamemd {
void sub_6E89C0()
{
{
    DataGlobal_B0E978 = Math::ArcTan((double)(2 * DataGlobal_B0E9A8) / DataGlobal_B0E950);
}
}
} // namespace gamemd

// 0x6E89F0
namespace gamemd {
long long sub_6E89F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0E9A8) + 0.5);
    DataGlobal_B0E99C = result;
    return result;
}
}
} // namespace gamemd

// 0x6E8A20
namespace gamemd {
int sub_6E8A20()
{
{
    DataGlobal_B0E948 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E8A30
namespace gamemd {
int sub_6E8A30()
{
{
    DataGlobal_B0E968 = 0;
    DataGlobal_B0E96C = 0;
    DataGlobal_B0E970 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6E8A50
namespace gamemd {
int sub_6E8A50()
{
{
    DataGlobal_B0E998 = 0;
    DataGlobal_B0E990 = 128;
    DataGlobal_B0E994 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6E8A70
namespace gamemd {
int sub_6E8A70()
{
{
    DataGlobal_B0E938 = 0;
    DataGlobal_B0E93C = 0;
    DataGlobal_B0E940 = 0;
    DataGlobal_B0E944 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6EC370
namespace gamemd {
char E4Recv_6EC370::sub_6EC370()
{
{
    int v1;
    char result;
    v1 = this->M84;
    result = 1;
    if ( v1 )
  {
    while ( *(char *)(v1 + 981) )
    {
    v1 = *(int *)(v1 + 1496);
    if ( !v1 )
    return result;
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6EDE80
namespace gamemd {
void E4Recv_6EDE80::sub_6EDE80(int a2, int a3)
{
{
    this->M128 = 1;
}
}
} // namespace gamemd

// 0x6EF450
namespace gamemd {
char E4Recv_6EF450::sub_6EF450(int a2, int a3)
{
{
    this->M128 = 1;
    this->M132 = 1;
    return 1;
}
}
} // namespace gamemd
