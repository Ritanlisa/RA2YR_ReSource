// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"

// 0x6FC0B0
namespace gamemd {
int TriggerTypeClass::ReadINI(unsigned int * a0, TechnoClass * aP1, TechnoClass * aP2, int a4, TechnoClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall TriggerTypeClass::ReadINI(_DWORD *a0, TechnoClass *aP1, TechnoClass *aP2, int a4, TechnoClass *aP4)
{
  TechnoClass *v8; // ebp
  IUnknown *v9; // eax
  IUnknown *v10; // edi
  TechnoClass *v24; // eax
  TechnoClass *v25; // edi
  TechnoClass *v26; // eax
  SlaveManagerClass *v30; // edx
  HouseClass *v31; // eax
  int *location; // ebp
  TechnoClass *v37; // [esp+8h] [ebp-24h]
  if ( !aP2 || a0[183] ) /*0x6fc0c5*/
    return 5; /*0x6fc0c5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 472))(a0) ) /*0x6fc0d5*/
    return 3; /*0x6fc0eb*/
  if ( (TechnoClass *)a0[171] == aP2 ) /*0x6fc0f4*/
    return 3; /*0x6fc102*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 468))(a0) /*0x6fc145*/
    || *((_BYTE *)a0 + 456)
    || *((_BYTE *)a0 + 973)
    || aP2 == (TechnoClass *)a0[115]
    || aP2 == (TechnoClass *)a0[71] )
  {
    return 5; /*0x6fc145*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 476))(a0) ) /*0x6fc14f*/
  {
    int v7 = a0[157]; /*0x6fc159*/
    if ( v7 ) /*0x6fc161*/
    {
      if ( aP2 == *(TechnoClass **)(v7 + 40) ) /*0x6fc166*/
        return 3; /*0x6fc174*/
    }
  }
  v8 = (aP2->abstractFlags & 1) != 0 ? aP2 : 0;
  IUnknown *v39 = (IUnknown *)(*(int (__thiscall **)(TechnoClass *, int *))(*(_DWORD *)aP2->__pad_0 + 72))(aP2, &v39); /*0x6fc18e*/
  v10 = (IUnknown *)Coord::To_Cell(&stru_87C374[13428], v9); /*0x6fc19e*/
  if ( a0 ) /*0x6fc1a0*/
  {
    if ( (a0[5] & 4) != 0 && *((_BYTE *)a0 + 1709) ) /*0x6fc1a8*/
      return 5; /*0x6fc1b0*/
  }
  if ( v8 ) /*0x6fc1b8*/
  {
    if ( v8->inLimbo /*0x6fc23f*/
      || *((_BYTE *)a0 + 664)
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 1680)
      || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a0 + 132))(a0) + 1683)
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 1684)
      || v8->__pad_26A[18]
      || !*(_BYTE *)(a0[135] + 492)
      && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 352))(v8) )
    {
      return 5; /*0x6fc247*/
    }
    if ( (*(int (__thiscall **)(TechnoClass *, int, _DWORD))(*(_DWORD *)v8->__pad_0 + 104))(v8, 1, a0[135]) == 5 /*0x6fc296*/
      && !Cell::IsPassableOffset(v10, *(IUnknown **)(a0[135] + 48))
      && (TechnoClass::GetValue(a0, (ObjectClass *)0xFFFFFFFF) > 0
       || !(unsigned __int8)HouseClass::IsAlliedWith(v8->focus, (IUnknown *)a0[135])) )
    {
      return 6; /*0x6fc29d*/
    }
    if ( v8->__pad_3F7[33] /*0x6fc2cc*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 3434)
      && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 84))(v8) )
    {
      return 5; /*0x6fc2cc*/
    }
  }
  if ( *((_BYTE *)a0 + 141) ) /*0x6fc2d2*/
    return 5; /*0x6fc2d2*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 892))(a0) ) /*0x6fc2e4*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 1 ) /*0x6fc2f8*/
      return 6; /*0x6fc2f8*/
    int v11 = a0[433]; /*0x6fc2fe*/
    if ( !*(_BYTE *)(v11 + 3609) && !*(_BYTE *)(v11 + 3608) ) /*0x6fc30e*/
      return 6; /*0x6fc30e*/
  }
  int v12 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*a0 + 1016))(a0, a4); /*0x6fc32b*/
  int v38 = v12; /*0x6fc32f*/
  if ( !v12 || *(_BYTE *)(v12 + 335) && HouseClass::IonSensitivesShouldBeOffline() ) /*0x6fc349*/
    return 6; /*0x6fc350*/
  if ( *(_BYTE *)(v12 + 322) ) /*0x6fc356*/
  {
    if ( v8 && v8->drainTarget ) /*0x6fc364*/
      return 5; /*0x6fc36c*/
    if ( !v8 ) /*0x6fc378*/
      goto LABEL_52; /*0x6fc378*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 1519) ) /*0x6fc385*/
      return 5; /*0x6fc876*/
  }
  if ( v8 /*0x6fc3bf*/
    && v8->spawnManager
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 44))(v8) == 1
    && (double)*(int *)(v12 + 180) < 384.0 )
  {
    return 5; /*0x6fc3bf*/
  }
LABEL_52:
  if ( a0 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) == 1 )
    {
      int v13 = (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0); /*0x6fc3d9*/
      if ( TechnoClass::HasDeployFlags(v13 == 1 ? a0 : 0) )
        return 5; /*0x6fc3e7*/
    }
  }
  int v14 = *(_DWORD *)(v12 + 172); /*0x6fc3f4*/
  if ( v14 ) /*0x6fc3fc*/
  {
    if ( *(_BYTE *)(v14 + 365) /*0x6fc417*/
      && v8
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 3381) )
    {
      return 5; /*0x6fc417*/
    }
  }
  int v15 = *(_DWORD *)(v12 + 172); /*0x6fc425*/
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 365) && v8 && v8->spawnManager ) /*0x6fc43d*/
      return 5; /*0x6fc43d*/
    if ( *(_BYTE *)(v15 + 347) )
    {
      if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 1 )
      {
        int v16 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2); /*0x6fc469*/
        if ( TechnoClass::HasDeployFlags(v16 == 1 ? aP2 : 0) )
          return 5; /*0x6fc477*/
      }
    }
  }
  int v17 = *(_DWORD *)(v12 + 172); /*0x6fc484*/
  if ( v17
    && *(_BYTE *)(v17 + 347)
    && (aP2->abstractFlags & 4) != 0
    && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 132))(aP2) + 3476) )
  {
    if ( !*((aP2->abstractFlags & 4) != 0 ? aP2[1].veterancy : (int *)1652) )
      WinAPI::Wrapper(-2147467261); /*0x6fc4cf*/
    v37 = (TechnoClass *)*((aP2->abstractFlags & 4) != 0 ? aP2[1].veterancy : (int *)1652);
    if ( (*(unsigned __int8 (__stdcall **)(TechnoClass *))(*(_DWORD *)v37->__pad_0 + 128))(v37) ) /*0x6fc4dd*/
      return 5; /*0x6fc4dd*/
  }
  int v18 = *(_DWORD *)(v12 + 172); /*0x6fc4ef*/
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 347)
      && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 1
      && *(_BYTE *)(*((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 1
                    ? &aP2[1].ironTintTimer[2]
                    : (int *)1732)
                  + 3603)
      && *((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 1
         ? &aP2->currentMission
         : (int *)172) == 16 )
    {
      return 5; /*0x6fc546*/
    }
  }
  int v19 = *(_DWORD *)(v12 + 172); /*0x6fc54c*/
  if ( v19 ) /*0x6fc554*/
  {
    if ( *(_BYTE *)(v19 + 347) /*0x6fc56f*/
      && v8
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 3479) )
    {
      return 5; /*0x6fc56f*/
    }
  }
  if ( *((_BYTE *)a0 + 130) ) /*0x6fc57d*/
  {
    if ( !*(_BYTE *)(v12 + 323) ) /*0x6fc587*/
      return 5; /*0x6fc587*/
    int v20 = a0[71]; /*0x6fc599*/
    if ( v20 ) /*0x6fc5a1*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 468))(v20) ) /*0x6fc5a5*/
        return 5; /*0x6fc5a5*/
    }
  }
  if ( *((_BYTE *)a0 + 130) ) /*0x6fc5b3*/
  {
    int v21 = a0[71]; /*0x6fc5bd*/
    if ( v21 ) /*0x6fc5c5*/
    {
      if ( *(_DWORD *)(v21 + 284) ) /*0x6fc5c7*/
        return 5; /*0x6fc5c7*/
    }
  }
  if ( v8 /*0x6fc5f8*/
    && *(_DWORD *)(v12 + 172)
    && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 468))(v8)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) )
  {
    return 5; /*0x6fc600*/
  }
  if ( *(_BYTE *)(v12 + 305) ) /*0x6fc606*/
  {
    if ( !TechnoClass::CheckTargetCell(a0) && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 896))(a0) ) /*0x6fc623*/
    {
      if ( !SpawnManagerClass::CountAliveSpawns((int *)a0[180]) ) /*0x6fc637*/
        return 3; /*0x6fc64c*/
      goto LABEL_98; /*0x6fc63e*/
    }
    return 6; /*0x6fcd2c*/
  }
LABEL_98:
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) /*0x6fc67b*/
    && v8
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 44))(v8) == 2
    && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 3412) )
  {
    return 5; /*0x6fc683*/
  }
  _BYTE * v22 = *(_BYTE **)(*(int (__thiscall **)(_DWORD *, bool))(*a0 + 1016))(a0, a4 == 0); /*0x6fc69f*/
  if ( v22 && (v22[297] && a0[193] || v22[301] && a0[197] || v22[298] && a0[194] || v22[304] && a0[201]) ) /*0x6fc6f7*/
    return 6; /*0x6fc6ff*/
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 84))(aP2)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return aP2 != (TechnoClass *)a0[171] ? 5 : 3;
  }
  if ( (aP2->abstractFlags & 4) != 0 /*0x6fc75c*/
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 120))(aP2) != 2
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return 5; /*0x6fc75c*/
  }
  if ( v8 )
  {
  bool v23; // bl
    v23 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 444))(v8) + 236) == 2 /*0x6fc796*/
       || *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 444))(v8) + 236) == 6;
    if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 84))(v8) ) /*0x6fc79d*/
      v23 = 0; /*0x6fc7a4*/
    if ( v8->onBridge ) /*0x6fc7a6*/
    {
      v23 = 0; /*0x6fc7b0*/
    }
    else if ( v23 && (*(int (__thiscall **)(_DWORD *, TechnoClass *))(*a0 + 744))(a0, aP2) == -1 ) /*0x6fc7ca*/
    {
      return 5; /*0x6fc7ca*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 80))(aP2) || v23 ) /*0x6fc7e3*/
      goto LABEL_139; /*0x6fc7e3*/
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 84))(aP2) /*0x6fc7fc*/
      && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 677) )
    {
      return 5; /*0x6fc812*/
    }
    if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) != 11
      || *((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 11 ? aP2->animation : (int *)236) == 2
      || *((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 11 ? aP2->animation : (int *)236) == 6 )
    {
      goto LABEL_139; /*0x6fc855*/
    }
  }
  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*a0 + 132))(a0) + 1540) == 1 ) /*0x6fc868*/
    return 5; /*0x6fc868*/
LABEL_139:
  if ( *(_BYTE *)(v12 + 348) ) /*0x6fc87d*/
  {
    v24 = (TechnoClass *)a0[171]; /*0x6fc887*/
    v25 = aP2; /*0x6fc88d*/
    if ( v24 && v24 != aP2 && a0[201] && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) != 6 ) /*0x6fc8ad*/
      return 3; /*0x6fc8bb*/
  }
  else
  {
    v25 = aP2; /*0x6fc8be*/
  }
  if ( *(_BYTE *)(v38 + 348) ) /*0x6fc8c2*/
  {
    v26 = (TechnoClass *)a0[171]; /*0x6fc8cc*/
    if ( v26 ) /*0x6fc8d4*/
    {
      if ( v26 == v25 && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v25->__pad_0 + 44))(v25) != 6 ) /*0x6fc8e4*/
        return 3; /*0x6fc8f2*/
    }
  }
  if ( a4 /*0x6fc93a*/
    || !a0
    || (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 1
  int v27; // edx
    || (v27 = a0[238] % *(_DWORD *)(v38 + 156), v27 >= 2)
  int v28; // edx
    || (v28 = *(_DWORD *)(a0[433] + 4 * v27 + 3648), v28 == -1)
  int v29; // eax
    || (v29 = a0[432], v29 == -1) )
  {
    v30 = (SlaveManagerClass *)a0[187]; /*0x6fc94f*/
    v31 = (HouseClass *)a0[189]; /*0x6fc955*/
    if ( v30 != (SlaveManagerClass *)-1 ) /*0x6fc95e*/
    {
      if ( *(_DWORD *)&HouseClass_Player[45112] - (int)v30 >= (int)v31 ) /*0x6fc96a*/
        goto LABEL_164; /*0x6fc96a*/
      v31 = (HouseClass *)((char *)v31 - (*(_DWORD *)&HouseClass_Player[45112] - (_DWORD)v30)); /*0x6fc96c*/
    }
    if ( v31 ) /*0x6fc970*/
      return 3; /*0x6fc97e*/
  }
  else if ( v29 != v28 ) /*0x6fc93e*/
  {
    return 3; /*0x6fc94c*/
  }
LABEL_164:
  if ( *(_BYTE *)(v38 + 297) && a0[193] ) /*0x6fc98b*/
    return 3; /*0x6fc9a1*/
  if ( *(_BYTE *)(v38 + 301) && a0[197] ) /*0x6fc9ae*/
    return 3; /*0x6fc9c4*/
  if ( *(_BYTE *)(v38 + 298) && a0[194] ) /*0x6fc9d1*/
    return 3; /*0x6fc9e7*/
  if ( *(_BYTE *)(v38 + 304) && a0[201] ) /*0x6fc9f4*/
    return 3; /*0x6fca0a*/
  if ( !a0[191] ) /*0x6fca0d*/
    return 1; /*0x6fca23*/
  if ( *(_BYTE *)(v38 + 307) && a0[136] && ((*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 2 || a0[136] == 2) ) /*0x6fca4d*/
    return 9; /*0x6fca5b*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a0 + 132))(a0) + 3367) ) /*0x6fca68*/
    return 8; /*0x6fca7e*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345)
    && a0
    && (a0[5] & 4) != 0
    && !ParasiteClass::CanInfect((_DWORD *)a0[423], (v25->abstractFlags & 4) != 0 ? v25 : 0) )
  {
    return 5; /*0x6fcac2*/
  }
  char v32 = *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345); /*0x6fcacb*/
  if ( v32 && (v25->abstractFlags & 4) != 0 && *(int *)&HouseClass_Player[45112] < v25[1].radarFlashTimer[0] ) /*0x6fcae9*/
    return 5; /*0x6fcaf7*/
  if ( !v8 ) /*0x6fcafc*/
    goto LABEL_231; /*0x6fcafc*/
  if ( v32 && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 352))(v8) ) /*0x6fcb0b*/
    return 5; /*0x6fcb21*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 341) && !CaptureManagerClass::CanCapture(a0[175], v8) ) /*0x6fcb3b*/
    return 5; /*0x6fcb50*/
  int v33 = *(_DWORD *)(v38 + 172); /*0x6fcb56*/
  if ( *(double *)(v33 /*0x6fcb7c*/
                 + 8 * *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 156)
                 + 160) == 0.0 )
    return 5; /*0x6fcb8a*/
  if ( *(_BYTE *)(v33 + 366) && !v8->attachedBomb ) /*0x6fcb97*/
    return 5; /*0x6fcbaa*/
  if ( *(_BYTE *)(v33 + 343) && v8->attachedBomb ) /*0x6fcbb7*/
    return 5; /*0x6fcbca*/
  if ( BYTE1(v8->barrelRecoil[4]) ) /*0x6fcbcd*/
    return 5; /*0x6fcbe3*/
  if ( *((_BYTE *)a0 + 140) == v8->onBridge ) /*0x6fcbf4*/
    goto LABEL_231; /*0x6fcbf4*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 444))(a0) /*0x6fcc4c*/
    && (*(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*a0 + 444))(a0) + 320) & 0x100) != 0
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 84))(a0)
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 444))(v8)
    && (*(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 444))(v8) + 320) & 0x100) != 0 )
  {
    return 5; /*0x6fcc5a*/
  }
  location = v8->location; /*0x6fcc63*/
  v39 = a0[39]; /*0x6fcc6b*/
  int v35 = a0[40]; /*0x6fcc72*/
  v39 = *location; /*0x6fcc75*/
  int v40 = v35; /*0x6fcc79*/
  int v36 = a0[41]; /*0x6fcc80*/
  v40 = location[1]; /*0x6fcc83*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345) ) /*0x6fcc90*/
  {
    if ( (int)abs32(v36 - location[2]) > 2 * *(_DWORD *)&stru_B05488[38572] ) /*0x6fccac*/
      return 5; /*0x6fccb1*/
  }
LABEL_231:
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a0 + 132))(a0) + 3479) /*0x6fccd5*/
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 896))(a0) )
  {
    return 5; /*0x6fcce2*/
  }
  if ( !(_BYTE)aP4 || (*(unsigned __int8 (__thiscall **)(_DWORD *, TechnoClass *, int))(*a0 + 936))(a0, aP2, a4) ) /*0x6fcd04*/
    return 0; /*0x6fcd20*/
  return 8; /*0x6fc0df*/
}
}
} // namespace gamemd

// 0x727BB0
namespace gamemd {
int TriggerTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1070787183;
  a2[1] = 298977834;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x727BF0
namespace gamemd {
int TriggerTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TriggerTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TriggerTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TriggerTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_TriggerTypeClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].uniqueId);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].nextArrayIndex);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[12]);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x727C80
namespace gamemd {
int TriggerTypeClass::Write(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x727CA0
namespace gamemd {
int TriggerTypeClass::GetTypeIdentifier()
{
return 39;
}
} // namespace gamemd

// 0x727CB0
namespace gamemd {
int TriggerTypeClass::GetObjectSize()
{
return 180;
}
} // namespace gamemd
