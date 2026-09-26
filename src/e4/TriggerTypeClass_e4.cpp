// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6FC0B0
namespace gamemd {
TechnoClass * * TriggerTypeClass::ReadINI(unsigned int * a0, TechnoClass * aP1, TechnoClass * aP2, int a4, TechnoClass * aP4)
{
  int v7; // eax
  unsigned int *v8; // ebp
  unsigned int *v9; // eax
  unsigned short *v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned char *v22; // eax
  bool v23; // bl
  unsigned char *v24; // eax
  unsigned char *v25; // edi
  unsigned char *v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  char v32; // al
  int v33; // edi
  int *v34; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // [esp+8h] [ebp-24h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]

  if ( !aP2 || a0[183] ) /*0x6fc0c5*/
    return 5; /*0x6fc0c5*/
  if ( (*(uint8_t (__thiscall **)(unsigned int *))(*a0 + 472))(a0) ) /*0x6fc0d5*/
    return 3; /*0x6fc0eb*/
  if ( (unsigned char *)a0[171] == aP2 ) /*0x6fc0f4*/
    return 3; /*0x6fc102*/
  if ( (*(uint8_t (__thiscall **)(unsigned int *))(*a0 + 468))(a0) /*0x6fc145*/
    || *((unsigned char *)a0 + 456)
    || *((unsigned char *)a0 + 973)
    || aP2 == (unsigned char *)a0[115]
    || aP2 == (unsigned char *)a0[71] )
  {
    return 5; /*0x6fc145*/
  }
  if ( (*(uint8_t (__thiscall **)(unsigned int *))(*a0 + 476))(a0) ) /*0x6fc14f*/
  {
    v7 = a0[157]; /*0x6fc159*/
    if ( v7 ) /*0x6fc161*/
    {
      if ( aP2 == v7->q028 ) /*0x6fc166*/
        return 3; /*0x6fc174*/
    }
  }
  v8 = (aP2[20] & 1) != 0 ? (unsigned int *)aP2 : 0;
  v9 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, int *))(aP2->u32_48)(aP2, &v39); /*0x6fc18e*/
  v10 = Coord::To_Cell(&MapClass_Instance, v9); /*0x6fc19e*/
  if ( a0 ) /*0x6fc1a0*/
  {
    if ( (a0[5] & 4) != 0 && *((unsigned char *)a0 + 1709) ) /*0x6fc1a8*/
      return 5; /*0x6fc1b0*/
  }
  if ( v8 ) /*0x6fc1b8*/
  {
    if ( *((unsigned char *)v8 + 129) /*0x6fc23f*/
      || *((unsigned char *)a0 + 664) && *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v8 + 132))(v8) + 1680)
      || *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*a0 + 132))(a0) + 1683)
      && *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v8 + 132))(v8) + 1684)
      || *((unsigned char *)v8 + 636)
      || !*(unsigned char *)(a0[135] + 492) && (*(uint8_t (__thiscall **)(unsigned int *))(*v8 + 352))(v8) )
    {
      return 5; /*0x6fc247*/
    }
    if ( (*(int (__thiscall **)(unsigned int *, int, unsigned int))(*v8 + 104))(v8, 1, a0[135]) == 5 /*0x6fc296*/
      && !Cell::IsPassableOffset(v10, *(unsigned int *)(a0[135] + 48))
      && (TechnoClass::GetValue(a0, -1) > 0
       || !(uint8_t)HouseClass::IsAlliedWith((void *)v8[135], (void *)a0[135])) )
    {
      return 6; /*0x6fc29d*/
    }
    if ( *((unsigned char *)v8 + 1048) /*0x6fc2cc*/
      && *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v8 + 132))(v8) + 3434)
      && !(*(uint8_t (__thiscall **)(unsigned int *))(*v8 + 84))(v8) )
    {
      return 5; /*0x6fc2cc*/
    }
  }
  if ( *((unsigned char *)a0 + 141) ) /*0x6fc2d2*/
    return 5; /*0x6fc2d2*/
  if ( (*(uint8_t (__thiscall **)(unsigned int *))(*a0 + 892))(a0) ) /*0x6fc2e4*/
  {
    if ( (*(int (__thiscall **)(unsigned int *))(*a0 + 44))(a0) != 1 ) /*0x6fc2f8*/
      return 6; /*0x6fc2f8*/
    v11 = a0[433]; /*0x6fc2fe*/
    if ( !*(unsigned char *)(v11 + 3609) && !*(unsigned char *)(v11 + 3608) ) /*0x6fc30e*/
      return 6; /*0x6fc30e*/
  }
  v12 = *(unsigned int *)(*(int (__thiscall **)(unsigned int *, int))(*a0 + 1016))(a0, a4); /*0x6fc32b*/
  v12 = v12; /*0x6fc32f*/
  if ( !v12 || *(unsigned char *)(v12 + 335) && HouseClass::IonSensitivesShouldBeOffline() ) /*0x6fc349*/
    return 6; /*0x6fc350*/
  if ( *(unsigned char *)(v12 + 322) ) /*0x6fc356*/
  {
    if ( v8 && v8[116] ) /*0x6fc364*/
      return 5; /*0x6fc36c*/
    if ( !v8 ) /*0x6fc378*/
      goto LABEL_52; /*0x6fc378*/
    if ( !*(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v8 + 132))(v8) + 1519) ) /*0x6fc385*/
      return 5; /*0x6fc876*/
  }
  if ( v8 && v8[185] && (*(int (__thiscall **)(unsigned int *))(*v8 + 44))(v8) == 1 && (double)*(int *)(v12 + 180) < 384.0 ) /*0x6fc3bf*/
    return 5; /*0x6fc3bf*/
  LABEL_52:
  if ( a0 )
  {
    if ( (*(int (__thiscall **)(unsigned int *))(*a0 + 44))(a0) == 1 )
    {
      v13 = (*(int (__thiscall **)(unsigned int *))(*a0 + 44))(a0); /*0x6fc3d9*/
      if ( (uint8_t)TechnoClass::HasDeployFlags(v13 == 1 ? a0 : 0) )
        return 5; /*0x6fc3e7*/
    }
  }
  v14 = *(unsigned int *)(v12 + 172); /*0x6fc3f4*/
  if ( v14 ) /*0x6fc3fc*/
  {
    if ( *(unsigned char *)(v14 + 365) && v8 && *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v8 + 132))(v8) + 3381) ) /*0x6fc417*/
      return 5; /*0x6fc417*/
  }
  v15 = *(unsigned int *)(v12 + 172); /*0x6fc425*/
  if ( v15 )
  {
    if ( *(unsigned char *)(v15 + 365) && v8 && v8[185] ) /*0x6fc43d*/
      return 5; /*0x6fc43d*/
    if ( *(unsigned char *)(v15 + 347) )
    {
      if ( (*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2) == 1 )
      {
        v16 = (*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2); /*0x6fc469*/
        if ( (uint8_t)TechnoClass::HasDeployFlags(v16 == 1 ? aP2 : 0) )
          return 5; /*0x6fc477*/
      }
    }
  }
  v17 = *(unsigned int *)(v12 + 172); /*0x6fc484*/
  if ( v17
    && *(unsigned char *)(v17 + 347)
    && (aP2[20] & 4) != 0
    && *(unsigned char *)((*(int (__thiscall **)(unsigned char *))(aP2->hasParachute)(aP2) + 3476) )
  {
    if ( !*((aP2[20] & 4) != 0 ? (unsigned int *)(aP2 + 1652) : (unsigned int *)1652) )
      WinAPI::Wrapper(-2147467261); /*0x6fc4cf*/
    v37 = *((aP2[20] & 4) != 0 ? (unsigned int *)(aP2 + 1652) : (unsigned int *)1652);
    if ( (*(uint8_t (__stdcall **)(int))(v37->needsRedraw)(v37) ) /*0x6fc4dd*/
      return 5; /*0x6fc4dd*/
  }
  v18 = *(unsigned int *)(v12 + 172); /*0x6fc4ef*/
  if ( v18 )
  {
    if ( *(unsigned char *)(v18 + 347)
      && (*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2) == 1
      && *(unsigned char *)(*((*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2) == 1
                    ? (unsigned int *)(aP2 + 1732)
                    : (unsigned int *)1732)
                  + 3603)
      && *((*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2) == 1 ? (unsigned int *)(aP2 + 172) : (unsigned int *)172) == 16 )
    {
      return 5; /*0x6fc546*/
    }
  }
  v19 = *(unsigned int *)(v12 + 172); /*0x6fc54c*/
  if ( v19 ) /*0x6fc554*/
  {
    if ( *(unsigned char *)(v19 + 347) && v8 && *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v8 + 132))(v8) + 3479) ) /*0x6fc56f*/
      return 5; /*0x6fc56f*/
  }
  if ( *((unsigned char *)a0 + 130) ) /*0x6fc57d*/
  {
    if ( !*(unsigned char *)(v12 + 323) ) /*0x6fc587*/
      return 5; /*0x6fc587*/
    v20 = a0[71]; /*0x6fc599*/
    if ( v20 ) /*0x6fc5a1*/
    {
      if ( (*(uint8_t (__thiscall **)(int))(*(unsigned int *)v20 + 468))(v20) ) /*0x6fc5a5*/
        return 5; /*0x6fc5a5*/
    }
  }
  if ( *((unsigned char *)a0 + 130) ) /*0x6fc5b3*/
  {
    v21 = a0[71]; /*0x6fc5bd*/
    if ( v21 ) /*0x6fc5c5*/
    {
      if ( *(unsigned int *)(v21 + 284) ) /*0x6fc5c7*/
        return 5; /*0x6fc5c7*/
    }
  }
  if ( v8 /*0x6fc5f8*/
    && *(unsigned int *)(v12 + 172)
    && (*(uint8_t (__thiscall **)(unsigned int *))(*v8 + 468))(v8)
    && !*(unsigned char *)(*(unsigned int *)(v12 + 172) + 346) )
  {
    return 5; /*0x6fc600*/
  }
  if ( *(unsigned char *)(v12 + 305) ) /*0x6fc606*/
  {
    if ( !(uint8_t)TechnoClass::CheckTargetCell(a0) /*0x6fc623*/
      && !(*(uint8_t (__thiscall **)(unsigned int *))(*a0 + 896))(a0) )
    {
      if ( !SpawnManagerClass::CountAliveSpawns(a0[180]) ) /*0x6fc637*/
        return 3; /*0x6fc64c*/
      goto LABEL_98; /*0x6fc63e*/
    }
    return 6; /*0x6fcd2c*/
  }
  LABEL_98:
  if ( *(unsigned char *)(*(unsigned int *)(v12 + 172) + 346) /*0x6fc67b*/
    && v8
    && (*(int (__thiscall **)(unsigned int *))(*v8 + 44))(v8) == 2
    && *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v8 + 132))(v8) + 3412) )
  {
    return 5; /*0x6fc683*/
  }
  v22 = *(unsigned char **)(*(int (__thiscall **)(unsigned int *, bool))(*a0 + 1016))(a0, a4 == 0); /*0x6fc69f*/
  if ( v22 && (v22[297] && a0[193] || v22[301] && a0[197] || v22[298] && a0[194] || v22[304] && a0[201]) ) /*0x6fc6f7*/
    return 6; /*0x6fc6ff*/
  if ( (*(uint8_t (__thiscall **)(unsigned char *))(aP2->u32_54)(aP2)
    && !*(unsigned char *)(*(unsigned int *)(v12 + 160) + 676) )
  {
    return aP2 != (unsigned char *)a0[171] ? 5 : 3;
  }
  if ( (aP2[20] & 4) != 0 /*0x6fc75c*/
    && (*(int (__thiscall **)(unsigned char *))(aP2->spawnStatus)(aP2) != 2
    && !*(unsigned char *)(*(unsigned int *)(v12 + 160) + 676) )
  {
    return 5; /*0x6fc75c*/
  }
  if ( v8 )
  {
    v23 = *(unsigned int *)((*(int (__thiscall **)(unsigned int *))(*v8 + 444))(v8) + 236) == 2 /*0x6fc796*/
       || *(unsigned int *)((*(int (__thiscall **)(unsigned int *))(*v8 + 444))(v8) + 236) == 6;
    if ( (*(uint8_t (__thiscall **)(unsigned int *))(*v8 + 84))(v8) ) /*0x6fc79d*/
      v23 = 0; /*0x6fc7a4*/
    if ( *((unsigned char *)v8 + 140) ) /*0x6fc7a6*/
    {
      v23 = 0; /*0x6fc7b0*/
    }
    else if ( v23 && (*(int (__thiscall **)(unsigned int *, unsigned char *))(*a0 + 744))(a0, aP2) == -1 ) /*0x6fc7ca*/
    {
      return 5; /*0x6fc7ca*/
    }
    if ( !(*(uint8_t (__thiscall **)(unsigned char *))(aP2->customSound_controller)(aP2) || v23 ) /*0x6fc7e3*/
      goto LABEL_139; /*0x6fc7e3*/
  }
  else
  {
    if ( !(*(uint8_t (__thiscall **)(unsigned char *))(aP2->u32_54)(aP2) /*0x6fc7fc*/
      && !*(unsigned char *)(*(unsigned int *)(v12 + 160) + 677) )
    {
      return 5; /*0x6fc812*/
    }
    if ( (*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2) != 11
      || *((*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2) == 11 ? (unsigned int *)(aP2 + 236) : (unsigned int *)236) == 2
      || *((*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2) == 11 ? (unsigned int *)(aP2 + 236) : (unsigned int *)236) == 6 )
    {
      goto LABEL_139; /*0x6fc855*/
    }
  }
  if ( *(unsigned int *)((*(int (__thiscall **)(unsigned int *))(*a0 + 132))(a0) + 1540) == 1 ) /*0x6fc868*/
    return 5; /*0x6fc868*/
  LABEL_139:
  if ( *(unsigned char *)(v12 + 348) ) /*0x6fc87d*/
  {
    v24 = (unsigned char *)a0[171]; /*0x6fc887*/
    v25 = aP2; /*0x6fc88d*/
    if ( v24 && v24 != aP2 && a0[201] && (*(int (__thiscall **)(unsigned char *))(aP2->fallRate)(aP2) != 6 ) /*0x6fc8ad*/
      return 3; /*0x6fc8bb*/
  }
  else
  {
    v25 = aP2; /*0x6fc8be*/
  }
  if ( *(unsigned char *)(v12 + 348) ) /*0x6fc8c2*/
  {
    v26 = (unsigned char *)a0[171]; /*0x6fc8cc*/
    if ( v26 ) /*0x6fc8d4*/
    {
      if ( v26 == v25 && (*(int (__thiscall **)(unsigned char *))(v25->fallRate)(v25) != 6 ) /*0x6fc8e4*/
        return 3; /*0x6fc8f2*/
    }
  }
  if ( a4 /*0x6fc93a*/
    || !a0
    || (*(int (__thiscall **)(unsigned int *))(*a0 + 44))(a0) != 1
    || (v27 = a0[238] % *(unsigned int *)(v12 + 156), v27 >= 2)
    || (v28 = *(unsigned int *)(a0[433] + 4 * v27 + 3648), v28 == -1)
    || (v29 = a0[432], v29 == -1) )
  {
    v30 = a0[187]; /*0x6fc94f*/
    v31 = a0[189]; /*0x6fc955*/
    if ( v30 != -1 ) /*0x6fc95e*/
    {
      if ( (int)g_CurrentFrame - v30 >= v31 ) /*0x6fc96a*/
        goto LABEL_164; /*0x6fc96a*/
      v31 -= (int)g_CurrentFrame - v30; /*0x6fc96c*/
    }
    if ( v31 ) /*0x6fc970*/
      return 3; /*0x6fc97e*/
  }
  else if ( v29 != v28 ) /*0x6fc93e*/
  {
    return 3; /*0x6fc94c*/
  }
  LABEL_164:
  if ( *(unsigned char *)(v12 + 297) && a0[193] ) /*0x6fc98b*/
    return 3; /*0x6fc9a1*/
  if ( *(unsigned char *)(v12 + 301) && a0[197] ) /*0x6fc9ae*/
    return 3; /*0x6fc9c4*/
  if ( *(unsigned char *)(v12 + 298) && a0[194] ) /*0x6fc9d1*/
    return 3; /*0x6fc9e7*/
  if ( *(unsigned char *)(v12 + 304) && a0[201] ) /*0x6fc9f4*/
    return 3; /*0x6fca0a*/
  if ( !a0[191] ) /*0x6fca0d*/
    return 1; /*0x6fca23*/
  if ( *(unsigned char *)(v12 + 307) && a0[136] && ((*(int (__thiscall **)(unsigned int *))(*a0 + 44))(a0) != 2 || a0[136] == 2) ) /*0x6fca4d*/
    return 9; /*0x6fca5b*/
  if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*a0 + 132))(a0) + 3367) ) /*0x6fca68*/
    return 8; /*0x6fca7e*/
  if ( *(unsigned char *)(*(unsigned int *)(v12 + 172) + 345)
    && a0
    && (a0[5] & 4) != 0
    && !(uint8_t)ParasiteClass::CanInfect((v25[20] & 4) != 0 ? v25 : 0) )
  {
    return 5; /*0x6fcac2*/
  }
  v32 = *(unsigned char *)(*(unsigned int *)(v12 + 172) + 345); /*0x6fcacb*/
  if ( v32 && (v25[20] & 4) != 0 && (int)g_CurrentFrame < *((unsigned int *)v25 + 422) ) /*0x6fcae9*/
    return 5; /*0x6fcaf7*/
  if ( !v8 ) /*0x6fcafc*/
    goto LABEL_231; /*0x6fcafc*/
  if ( v32 && (*(uint8_t (__thiscall **)(unsigned int *))(*v8 + 352))(v8) ) /*0x6fcb0b*/
    return 5; /*0x6fcb21*/
  if ( *(unsigned char *)(*(unsigned int *)(v12 + 172) + 341) && !(uint8_t)CaptureManagerClass::CanCapture(v8) ) /*0x6fcb3b*/
    return 5; /*0x6fcb50*/
  v33 = *(unsigned int *)(v12 + 172); /*0x6fcb56*/
  if ( *(double *)(v33 + 8 * *(unsigned int *)((*(int (__thiscall **)(unsigned int *))(*v8 + 132))(v8) + 156) + 160) == 0.0 ) /*0x6fcb7c*/
    return 5; /*0x6fcb8a*/
  if ( *(unsigned char *)(v33 + 366) && !v8[14] ) /*0x6fcb97*/
    return 5; /*0x6fcbaa*/
  if ( *(unsigned char *)(v33 + 343) && v8[14] ) /*0x6fcbb7*/
    return 5; /*0x6fcbca*/
  if ( *((unsigned char *)v8 + 973) ) /*0x6fcbcd*/
    return 5; /*0x6fcbe3*/
  if ( *((unsigned char *)a0 + 140) == *((unsigned char *)v8 + 140) ) /*0x6fcbf4*/
    goto LABEL_231; /*0x6fcbf4*/
  if ( (*(int (__thiscall **)(unsigned int *))(*a0 + 444))(a0) /*0x6fcc4c*/
    && (*(unsigned int *)((*(int (__thiscall **)(unsigned int *))(*a0 + 444))(a0) + 320) & 0x100) != 0
    && !(*(uint8_t (__thiscall **)(unsigned int *))(*a0 + 84))(a0)
    && (*(int (__thiscall **)(unsigned int *))(*v8 + 444))(v8)
    && (*(unsigned int *)((*(int (__thiscall **)(unsigned int *))(*v8 + 444))(v8) + 320) & 0x100) != 0 )
  {
    return 5; /*0x6fcc5a*/
  }
  v34 = v8 + 39; /*0x6fcc63*/
  v39 = a0[39]; /*0x6fcc6b*/
  v35 = a0[40]; /*0x6fcc72*/
  v39 = *v34; /*0x6fcc75*/
  v40 = v35; /*0x6fcc79*/
  v36 = a0[41]; /*0x6fcc80*/
  v40 = v34[1]; /*0x6fcc83*/
  if ( *(unsigned char *)(*(unsigned int *)(v12 + 172) + 345) ) /*0x6fcc90*/
  {
    if ( (int)abs32(v36 - v34[2]) > 2 * dword_B0EB34 ) /*0x6fccac*/
      return 5; /*0x6fccb1*/
  }
  LABEL_231:
  if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*a0 + 132))(a0) + 3479) /*0x6fccd5*/
    && (*(uint8_t (__thiscall **)(unsigned int *))(*a0 + 896))(a0) )
  {
    return 5; /*0x6fcce2*/
  }
  if ( !aP4 || (*(uint8_t (__thiscall **)(unsigned int *, unsigned char *, int))(*a0 + 936))(a0, aP2, a4) ) /*0x6fcd04*/
    return 0; /*0x6fcd20*/
  return 8; /*0x6fc0df*/
}
}
// 0x727BB0
namespace gamemd {
int TriggerTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x727bb6*/
    return -2147467261; /*0x727bb8*/
  *a2 = -1070787183; /*0x727bc6*/
  a2[1] = 298977834; /*0x727bce*/
  a2[2] = 1610655660; /*0x727bd7*/
  a2[3] = -1252326136; /*0x727be0*/
  return 0; /*0x727bbd*/
}
} // namespace gamemd

// 0x727BF0
namespace gamemd {
int TriggerTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x727bfb*/
  if ( result >= 0 ) /*0x727c02*/
  {
    if ( aP0 ) /*0x727c06*/
    {
      AbstractTypeClass::Init((int)aP0, (int)&aP1); /*0x727c0f*/
      *aP0 = (int)&TriggerTypeClass_vftable; /*0x727c14*/
      aP0[1] = (int)&TriggerTypeClass_vftable; /*0x727c1a*/
      aP0[2] = (int)&TriggerTypeClass_vftable; /*0x727c21*/
      aP0[3] = (int)&TriggerTypeClass_vftable; /*0x727c28*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 42); /*0x727c3b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 43); /*0x727c4c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 44); /*0x727c5d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 41); /*0x727c6e*/
    return 0; /*0x727c73*/
  }
  return result; /*0x727c75*/
}
} // namespace gamemd

// 0x727C80
namespace gamemd {
int TriggerTypeClass::Write(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x727c8f*/
  if ( result >= 0 ) /*0x727c96*/
    return 0; /*0x727c98*/
  return result; /*0x727c9a*/
}
} // namespace gamemd

// 0x727CA0
namespace gamemd {
int TriggerTypeClass::GetTypeIdentifier()
{
  return 39; /*0x727ca5*/
}
} // namespace gamemd

// 0x727CB0
namespace gamemd {
int TriggerTypeClass::GetObjectSize()
{
  return 180; /*0x727cb5*/
}
} // namespace gamemd
