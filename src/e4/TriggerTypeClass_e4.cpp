// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/SpawnManagerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/COMObject_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/IPersistStream_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x6FC0B0
namespace gamemd {
TechnoClass * * TriggerTypeClass::ReadINI(unsigned int * a0, TechnoClass * aP1, TechnoClass * aP2, int a4, TechnoClass * aP4)
{
  TemporalClass *temporalUsing; // eax
  void **v8; // ebp
  _DWORD *v9; // eax
  CellClass *v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  TechnoClass *transporter; // ecx
  TechnoClass *v21; // eax
  _BYTE *v22; // eax
  bool v23; // bl
  FootClass *locomotorTarget; // eax
  FootClass *v25; // edi
  FootClass *v26; // eax
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

  if ( !aP2 || a0->slaveOwner ) /*0x6fc0c5*/
    return 5; /*0x6fc0c5*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))a0->vfptr + 118))(a0) ) /*0x6fc0d5*/
    return 3; /*0x6fc0eb*/
  if ( a0->locomotorTarget == (FootClass *)aP2 ) /*0x6fc0f4*/
    return 3; /*0x6fc102*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))a0->vfptr + 117))(a0) /*0x6fc145*/
    || a0->__pad_1C4[4]
    || a0->isSinking
    || aP2 == (_BYTE *)a0->drainTarget
    || aP2 == (_BYTE *)a0->transporter )
  {
    return 5; /*0x6fc145*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))a0->vfptr + 119))(a0) ) /*0x6fc14f*/
  {
    temporalUsing = a0->temporalUsing; /*0x6fc159*/
    if ( temporalUsing ) /*0x6fc161*/
    {
      if ( aP2 == *(_BYTE **)temporalUsing->q028 ) /*0x6fc166*/
        return 3; /*0x6fc174*/
    }
  }
  v8 = (aP2[20] & 1) != 0 ? (void **)aP2 : 0;
  v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(aP2->u32_48)(aP2, &v39); /*0x6fc18e*/
  v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v9); /*0x6fc19e*/
  if ( a0 ) /*0x6fc1a0*/
  {
    if ( (a0->abstractFlags & 4) != 0 && *((_BYTE *)a0 + 1709) ) /*0x6fc1a8*/
      return 5; /*0x6fc1b0*/
  }
  if ( v8 ) /*0x6fc1b8*/
  {
    if ( *((_BYTE *)v8 + 129) /*0x6fc23f*/
      || a0->isBerserk && *(_BYTE *)((*((int (__thiscall **)(void **))*v8 + 33))(v8) + 1680)
      || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))a0->vfptr + 33))(a0) + 1683)
      && *(_BYTE *)((*((int (__thiscall **)(void **))*v8 + 33))(v8) + 1684)
      || *((_BYTE *)v8 + 636)
      || !a0->owner->currentPlayer && (*((unsigned __int8 (__thiscall **)(void **))*v8 + 88))(v8) )
    {
      return 5; /*0x6fc247*/
    }
    if ( (*((int (__thiscall **)(void **, int, HouseClass *))*v8 + 26))(v8, 1, a0->owner) == 5 /*0x6fc296*/
      && !(unsigned __int8)Cell::IsPassableOffset((Cell *)v10, a0->owner->relatedTagsCount)
      && (TechnoClass::GetValue(a0, -1) > 0 || !(unsigned __int8)HouseClass::IsAlliedWith(
                                                                     v8[135],
                                                                     (void *)a0->owner)) )
    {
      return 6; /*0x6fc29d*/
    }
    if ( *((_BYTE *)v8 + 1048) /*0x6fc2cc*/
      && *(_BYTE *)((*((int (__thiscall **)(void **))*v8 + 33))(v8) + 3434)
      && !(*((unsigned __int8 (__thiscall **)(void **))*v8 + 21))(v8) )
    {
      return 5; /*0x6fc2cc*/
    }
  }
  if ( a0->isFallingDown ) /*0x6fc2d2*/
    return 5; /*0x6fc2d2*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))a0->vfptr + 223))(a0) ) /*0x6fc2e4*/
  {
    if ( (*((int (__thiscall **)(TechnoClass *))a0->vfptr + 11))(a0) != 1 ) /*0x6fc2f8*/
      return 6; /*0x6fc2f8*/
    v11 = *((_DWORD *)a0 + 433); /*0x6fc2fe*/
    if ( !*(_BYTE *)(v11 + 3609) && !*(_BYTE *)(v11 + 3608) ) /*0x6fc30e*/
      return 6; /*0x6fc30e*/
  }
  v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))a0->vfptr + 254))(a0, a4); /*0x6fc32b*/
  v12 = v12; /*0x6fc32f*/
  if ( !v12 || *(_BYTE *)(v12 + 335) && HouseClass::IonSensitivesShouldBeOffline() ) /*0x6fc349*/
    return 6; /*0x6fc350*/
  if ( *(_BYTE *)(v12 + 322) ) /*0x6fc356*/
  {
    if ( v8 && v8[116] ) /*0x6fc364*/
      return 5; /*0x6fc36c*/
    if ( !v8 ) /*0x6fc378*/
      goto LABEL_52; /*0x6fc378*/
    if ( !*(_BYTE *)((*((int (__thiscall **)(void **))*v8 + 33))(v8) + 1519) ) /*0x6fc385*/
      return 5; /*0x6fc876*/
  }
  if ( v8 && v8[185] && (*((int (__thiscall **)(void **))*v8 + 11))(v8) == 1 && (double)*(int *)(v12 + 180) < 384.0 ) /*0x6fc3bf*/
    return 5; /*0x6fc3bf*/
  LABEL_52:
  if ( a0 )
  {
    if ( (*((int (__thiscall **)(TechnoClass *))a0->vfptr + 11))(a0) == 1 )
    {
      v13 = (*((int (__thiscall **)(TechnoClass *))a0->vfptr + 11))(a0); /*0x6fc3d9*/
      if ( (unsigned __int8)TechnoClass::HasDeployFlags(v13 == 1 ? a0 : 0) )
        return 5; /*0x6fc3e7*/
    }
  }
  v14 = *(_DWORD *)(v12 + 172); /*0x6fc3f4*/
  if ( v14 ) /*0x6fc3fc*/
  {
    if ( *(_BYTE *)(v14 + 365) && v8 && *(_BYTE *)((*((int (__thiscall **)(void **))*v8 + 33))(v8) + 3381) ) /*0x6fc417*/
      return 5; /*0x6fc417*/
  }
  v15 = *(_DWORD *)(v12 + 172); /*0x6fc425*/
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 365) && v8 && v8[185] ) /*0x6fc43d*/
      return 5; /*0x6fc43d*/
    if ( *(_BYTE *)(v15 + 347) )
    {
      if ( (*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2) == 1 )
      {
        v16 = (*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2); /*0x6fc469*/
        if ( (unsigned __int8)TechnoClass::HasDeployFlags(v16 == 1 ? (TechnoClass *)aP2 : 0) )
          return 5; /*0x6fc477*/
      }
    }
  }
  v17 = *(_DWORD *)(v12 + 172); /*0x6fc484*/
  if ( v17
    && *(_BYTE *)(v17 + 347)
    && (aP2[20] & 4) != 0
    && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(aP2->hasParachute)(aP2) + 3476) )
  {
    if ( !*((aP2[20] & 4) != 0 ? (_DWORD *)(aP2 + 1652) : (_DWORD *)1652) )
      sub_7DC720(-2147467261); /*0x6fc4cf*/
    v37 = *((aP2[20] & 4) != 0 ? (_DWORD *)(aP2 + 1652) : (_DWORD *)1652);
    if ( (*(unsigned __int8 (__stdcall **)(int))(v37->needsRedraw)(v37) ) /*0x6fc4dd*/
      return 5; /*0x6fc4dd*/
  }
  v18 = *(_DWORD *)(v12 + 172); /*0x6fc4ef*/
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 347)
      && (*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2) == 1
      && *(_BYTE *)(*((*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2) == 1
                    ? (_DWORD *)(aP2 + 1732)
                    : (_DWORD *)1732)
                  + 3603)
      && *((*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2) == 1 ? (_DWORD *)(aP2 + 172) : (_DWORD *)172) == 16 )
    {
      return 5; /*0x6fc546*/
    }
  }
  v19 = *(_DWORD *)(v12 + 172); /*0x6fc54c*/
  if ( v19 ) /*0x6fc554*/
  {
    if ( *(_BYTE *)(v19 + 347) && v8 && *(_BYTE *)((*((int (__thiscall **)(void **))*v8 + 33))(v8) + 3479) ) /*0x6fc56f*/
      return 5; /*0x6fc56f*/
  }
  if ( a0->inOpenToppedTransport ) /*0x6fc57d*/
  {
    if ( !*(_BYTE *)(v12 + 323) ) /*0x6fc587*/
      return 5; /*0x6fc587*/
    transporter = a0->transporter; /*0x6fc599*/
    if ( transporter ) /*0x6fc5a1*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))transporter->vfptr + 117))(transporter) ) /*0x6fc5a5*/
        return 5; /*0x6fc5a5*/
    }
  }
  if ( a0->inOpenToppedTransport ) /*0x6fc5b3*/
  {
    v21 = a0->transporter; /*0x6fc5bd*/
    if ( v21 ) /*0x6fc5c5*/
    {
      if ( v21->transporter ) /*0x6fc5c7*/
        return 5; /*0x6fc5c7*/
    }
  }
  if ( v8 /*0x6fc5f8*/
    && *(_DWORD *)(v12 + 172)
    && (*((unsigned __int8 (__thiscall **)(void **))*v8 + 117))(v8)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) )
  {
    return 5; /*0x6fc600*/
  }
  if ( *(_BYTE *)(v12 + 305) ) /*0x6fc606*/
  {
    if ( !TechnoClass::CheckTargetCell(a0) /*0x6fc623*/
      && !(*((unsigned __int8 (__thiscall **)(TechnoClass *))a0->vfptr + 224))(a0) )
    {
      if ( !SpawnManagerClass::CountAliveSpawns(a0->spawnManager) ) /*0x6fc637*/
        return 3; /*0x6fc64c*/
      goto LABEL_98; /*0x6fc63e*/
    }
    return 6; /*0x6fcd2c*/
  }
  LABEL_98:
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) /*0x6fc67b*/
    && v8
    && (*((int (__thiscall **)(void **))*v8 + 11))(v8) == 2
    && *(_BYTE *)((*((int (__thiscall **)(void **))*v8 + 33))(v8) + 3412) )
  {
    return 5; /*0x6fc683*/
  }
  v22 = *(_BYTE **)(*((int (__thiscall **)(TechnoClass *, bool))a0->vfptr + 254))(a0, a4 == 0); /*0x6fc69f*/
  if ( v22 /*0x6fc6f7*/
    && (v22[297] && a0->fireParticles
     || v22[301] && a0->railgunParticles
     || v22[298] && a0->sparkParticles
     || v22[304] && a0->damageParticles_2) )
  {
    return 6; /*0x6fc6ff*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(aP2->u32_54)(aP2)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return aP2 != (_BYTE *)a0->locomotorTarget ? 5 : 3;
  }
  if ( (aP2[20] & 4) != 0 /*0x6fc75c*/
    && (*(int (__thiscall **)(_BYTE *))(aP2->spawnStatus)(aP2) != 2
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return 5; /*0x6fc75c*/
  }
  if ( v8 )
  {
    v23 = *(_DWORD *)((*((int (__thiscall **)(void **))*v8 + 111))(v8) + 236) == 2 /*0x6fc796*/
       || *(_DWORD *)((*((int (__thiscall **)(void **))*v8 + 111))(v8) + 236) == 6;
    if ( (*((unsigned __int8 (__thiscall **)(void **))*v8 + 21))(v8) ) /*0x6fc79d*/
      v23 = 0; /*0x6fc7a4*/
    if ( *((_BYTE *)v8 + 140) ) /*0x6fc7a6*/
    {
      v23 = 0; /*0x6fc7b0*/
    }
    else if ( v23 && (*((int (__thiscall **)(TechnoClass *, _BYTE *))a0->vfptr + 186))(a0, aP2) == -1 ) /*0x6fc7ca*/
    {
      return 5; /*0x6fc7ca*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(aP2->customSound_controller)(aP2) || v23 ) /*0x6fc7e3*/
      goto LABEL_139; /*0x6fc7e3*/
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(aP2->u32_54)(aP2) /*0x6fc7fc*/
      && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 677) )
    {
      return 5; /*0x6fc812*/
    }
    if ( (*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2) != 11
      || *((*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2) == 11 ? (_DWORD *)(aP2 + 236) : (_DWORD *)236) == 2
      || *((*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2) == 11 ? (_DWORD *)(aP2 + 236) : (_DWORD *)236) == 6 )
    {
      goto LABEL_139; /*0x6fc855*/
    }
  }
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))a0->vfptr + 33))(a0) + 1540) == 1 ) /*0x6fc868*/
    return 5; /*0x6fc868*/
  LABEL_139:
  if ( *(_BYTE *)(v12 + 348) ) /*0x6fc87d*/
  {
    locomotorTarget = a0->locomotorTarget; /*0x6fc887*/
    v25 = (FootClass *)aP2; /*0x6fc88d*/
    if ( locomotorTarget /*0x6fc8ad*/
      && locomotorTarget != (FootClass *)aP2
      && a0->damageParticles_2
      && (*(int (__thiscall **)(_BYTE *))(aP2->fallRate)(aP2) != 6 )
    {
      return 3; /*0x6fc8bb*/
    }
  }
  else
  {
    v25 = (FootClass *)aP2; /*0x6fc8be*/
  }
  if ( *(_BYTE *)(v12 + 348) ) /*0x6fc8c2*/
  {
    v26 = a0->locomotorTarget; /*0x6fc8cc*/
    if ( v26 ) /*0x6fc8d4*/
    {
      if ( v26 == v25 && (*((int (__thiscall **)(FootClass *))v25->vfptr + 11))(v25) != 6 ) /*0x6fc8e4*/
        return 3; /*0x6fc8f2*/
    }
  }
  if ( a4 /*0x6fc93a*/
    || !a0
    || (*((int (__thiscall **)(TechnoClass *))a0->vfptr + 11))(a0) != 1
    || (v27 = a0->currentBurstIndex % *(_DWORD *)(v12 + 156), v27 >= 2)
    || (v28 = *(_DWORD *)(*((_DWORD *)a0 + 433) + 4 * v27 + 3648), v28 == -1)
    || (v29 = *((_DWORD *)a0 + 432), v29 == -1) )
  {
    v30 = a0->diskLaserTimer[0]; /*0x6fc94f*/
    v31 = a0->diskLaserTimer[2]; /*0x6fc955*/
    if ( v30 != -1 ) /*0x6fc95e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v30 >= v31 ) /*0x6fc96a*/
        goto LABEL_164; /*0x6fc96a*/
      v31 -= *(_DWORD *)&stru_A8EB00.?[416] - v30; /*0x6fc96c*/
    }
    if ( v31 ) /*0x6fc970*/
      return 3; /*0x6fc97e*/
  }
  else if ( v29 != v28 ) /*0x6fc93e*/
  {
    return 3; /*0x6fc94c*/
  }
  LABEL_164:
  if ( *(_BYTE *)(v12 + 297) && a0->fireParticles ) /*0x6fc98b*/
    return 3; /*0x6fc9a1*/
  if ( *(_BYTE *)(v12 + 301) && a0->railgunParticles ) /*0x6fc9ae*/
    return 3; /*0x6fc9c4*/
  if ( *(_BYTE *)(v12 + 298) && a0->sparkParticles ) /*0x6fc9d1*/
    return 3; /*0x6fc9e7*/
  if ( *(_BYTE *)(v12 + 304) && a0->damageParticles_2 ) /*0x6fc9f4*/
    return 3; /*0x6fca0a*/
  if ( !a0->ammo ) /*0x6fca0d*/
    return 1; /*0x6fca23*/
  if ( *(_BYTE *)(v12 + 307) /*0x6fca4d*/
    && a0->cloakState
    && ((*((int (__thiscall **)(TechnoClass *))a0->vfptr + 11))(a0) != 2 || a0->cloakState == 2) )
  {
    return 9; /*0x6fca5b*/
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))a0->vfptr + 33))(a0) + 3367) ) /*0x6fca68*/
    return 8; /*0x6fca7e*/
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 172) + 345)
    && a0
    && (a0->abstractFlags & 4) != 0
    && !ParasiteClass::CanInfect(*((ParasiteClass **)a0 + 423), (v25->abstractFlags & 4) != 0 ? v25 : 0) )
  {
    return 5; /*0x6fcac2*/
  }
  v32 = *(_BYTE *)(*(_DWORD *)(v12 + 172) + 345); /*0x6fcacb*/
  if ( v32 && (v25->abstractFlags & 4) != 0 && *(int *)&stru_A8EB00.?[416] < v25->unknown698 ) /*0x6fcae9*/
    return 5; /*0x6fcaf7*/
  if ( !v8 ) /*0x6fcafc*/
    goto LABEL_231; /*0x6fcafc*/
  if ( v32 && (*((unsigned __int8 (__thiscall **)(void **))*v8 + 88))(v8) ) /*0x6fcb0b*/
    return 5; /*0x6fcb21*/
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 172) + 341) && !CaptureManagerClass::CanCapture((int)a0->captureManager, v8) ) /*0x6fcb3b*/
    return 5; /*0x6fcb50*/
  v33 = *(_DWORD *)(v12 + 172); /*0x6fcb56*/
  if ( *(double *)(v33 + 8 * *(_DWORD *)((*((int (__thiscall **)(void **))*v8 + 33))(v8) + 156) + 160) == 0.0 ) /*0x6fcb7c*/
    return 5; /*0x6fcb8a*/
  if ( *(_BYTE *)(v33 + 366) && !v8[14] ) /*0x6fcb97*/
    return 5; /*0x6fcbaa*/
  if ( *(_BYTE *)(v33 + 343) && v8[14] ) /*0x6fcbb7*/
    return 5; /*0x6fcbca*/
  if ( *((_BYTE *)v8 + 973) ) /*0x6fcbcd*/
    return 5; /*0x6fcbe3*/
  if ( a0->onBridge == *((_BYTE *)v8 + 140) ) /*0x6fcbf4*/
    goto LABEL_231; /*0x6fcbf4*/
  if ( (*((int (__thiscall **)(TechnoClass *))a0->vfptr + 111))(a0) /*0x6fcc4c*/
    && (*(_DWORD *)((*((int (__thiscall **)(TechnoClass *))a0->vfptr + 111))(a0) + 320) & 0x100) != 0
    && !(*((unsigned __int8 (__thiscall **)(TechnoClass *))a0->vfptr + 21))(a0)
    && (*((int (__thiscall **)(void **))*v8 + 111))(v8)
    && (*(_DWORD *)((*((int (__thiscall **)(void **))*v8 + 111))(v8) + 320) & 0x100) != 0 )
  {
    return 5; /*0x6fcc5a*/
  }
  v34 = (int *)(v8 + 39); /*0x6fcc63*/
  v39 = a0->location[0]; /*0x6fcc6b*/
  v35 = a0->location[1]; /*0x6fcc72*/
  v39 = *v34; /*0x6fcc75*/
  v40 = v35; /*0x6fcc79*/
  v36 = a0->location[2]; /*0x6fcc80*/
  v40 = v34[1]; /*0x6fcc83*/
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 172) + 345) ) /*0x6fcc90*/
  {
    if ( (int)abs32(v36 - v34[2]) > 2 * g_BuildingLoadQueue_Array.ThreatAvoidanceCoefficient[1] ) /*0x6fccac*/
      return 5; /*0x6fccb1*/
  }
  LABEL_231:
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))a0->vfptr + 33))(a0) + 3479) /*0x6fccd5*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))a0->vfptr + 224))(a0) )
  {
    return 5; /*0x6fcce2*/
  }
  if ( !aP4 || (*((unsigned __int8 (__thiscall **)(TechnoClass *, _BYTE *, int))a0->vfptr + 234))(a0, aP2, a4) ) /*0x6fcd04*/
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
  a2[3] = unk_7E97FC; /*0x727be0*/
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
      aP0->vfptr = &(void*)(void*)&TriggerTypeClass_vftable; /*0x727c14*/
      aP0->vfptr1 = &(void*)(void*)&TriggerTypeClass_vftable; /*0x727c1a*/
      aP0->vfptr2 = &(void*)(void*)&TriggerTypeClass_vftable; /*0x727c21*/
      aP0->vfptr3 = &(void*)(void*)&TriggerTypeClass_vftable; /*0x727c28*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->NextTrigger); /*0x727c3b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->FirstEvent); /*0x727c4c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->FirstAction); /*0x727c5d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->House); /*0x727c6e*/
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

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x727c8f*/
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
