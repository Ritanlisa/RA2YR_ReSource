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
namespace gamemd {  // G42.18 ns repair
TechnoClass * * TriggerTypeClass::ReadINI(unsigned int * a0, TechnoClass * aP1, TechnoClass * aP2, int a4, TechnoClass * aP4)
{

  int temporalUsing; // eax
  BuildingClass *v8; // ebp
  unsigned int *v9; // eax
  CellClass *v10; // edi
  unsigned __int8 *v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  unsigned __int8 *v15; // eax
  int v16; // eax
  unsigned __int8 *v17; // eax
  unsigned __int8 *v18; // eax
  int v19; // eax
  int transporter; // ecx
  int v21; // eax
  unsigned char *v22; // eax
  bool v23; // bl
  unsigned char *locomotorTarget; // eax
  unsigned char *v25; // edi
  int v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  char v32; // al
  int v33; // edi
  int *location; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // [esp+8h] [ebp-24h]
  int v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]

  if ( !aP2 || this->slaveOwner ) /*0x6fc0c5*/
    return 5; /*0x6fc0c5*/
  if ( (*(unsigned __int8 (**)(TechnoClass *))(this->vfptr + 472))(this) ) /*0x6fc0d5*/
    return 3; /*0x6fc0eb*/
  if ( (unsigned char *)this->locomotorTarget == aP2 ) /*0x6fc0f4*/
    return 3; /*0x6fc102*/
  if ( (*(unsigned __int8 (**)(TechnoClass *))(this->vfptr + 468))(this) /*0x6fc145*/
    || this->u32_1C8
    || this->isSinking[0]
    || aP2 == (unsigned char *)this->drainTarget
    || aP2 == (unsigned char *)this->transporter )
  {
    return 5; /*0x6fc145*/
  }
  if ( (*(unsigned __int8 (**)(TechnoClass *))(this->vfptr + 476))(this) ) /*0x6fc14f*/
  {
    temporalUsing = this->temporalUsing; /*0x6fc159*/
    if ( temporalUsing ) /*0x6fc161*/
    {
      if ( aP2 == temporalUsing->__pad_028 ) /*0x6fc166*/
        return 3; /*0x6fc174*/
    }
  }
  v8 = (aP2[20] & 1) != 0 ? (BuildingClass *)aP2 : 0;
  v9 = (unsigned int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)aP2 + 72))(aP2, &v39); /*0x6fc18e*/
  v10 = Coord::To_Cell((Coord *)&dword_87F7E8, v9); /*0x6fc19e*/
  if ( this ) /*0x6fc1a0*/
  {
    if ( (this->abstractFlags & 4) != 0 && this->u32_6AD ) /*0x6fc1a8*/
      return 5; /*0x6fc1b0*/
  }
  if ( v8 ) /*0x6fc1b8*/
  {
    if ( v8->inLimbo[0] /*0x6fc23f*/
      || this->isBerserk[0] && *(unsigned char *)((*(int (**)(BuildingClass *))(v8->vfptr + 132))(v8) + 1680)
      || *(unsigned char *)((*(int (**)(TechnoClass *))(this->vfptr + 132))(this) + 1683)
      && *(unsigned char *)((*(int (**)(BuildingClass *))(v8->vfptr + 132))(v8) + 1684)
      || v8->isImmobilized[0]
      || !*(unsigned char *)(this->owner + 492) && (*(unsigned __int8 (**)(BuildingClass *))(v8->vfptr + 352))(v8) )
    {
      return 5; /*0x6fc247*/
    }
    if ( (*(int (**)(BuildingClass *, int, int))(v8->vfptr + 104))(v8, 1, this->owner) == 5 /*0x6fc296*/
      && !(unsigned __int8)Cell::IsPassableOffset((Cell *)v10, *(unsigned int *)(this->owner + 48))
      && (TechnoClass::GetValue(this, -1) > 0 || !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)v8->owner)) )
    {
      return 6; /*0x6fc29d*/
    }
    if ( v8->isTether[0] /*0x6fc2cc*/
      && *(unsigned char *)((*(int (**)(BuildingClass *))(v8->vfptr + 132))(v8) + 3434)
      && !(*(unsigned __int8 (**)(BuildingClass *))(v8->vfptr + 84))(v8) )
    {
      return 5; /*0x6fc2cc*/
    }
  }
  if ( this->isFallingDown[0] ) /*0x6fc2d2*/
    return 5; /*0x6fc2d2*/
  if ( (*(unsigned __int8 (**)(TechnoClass *))(this->vfptr + 892))(this) ) /*0x6fc2e4*/
  {
    if ( (*(int (**)(TechnoClass *))(this->vfptr + 44))(this) != 1 ) /*0x6fc2f8*/
      return 6; /*0x6fc2f8*/
    v11 = (unsigned __int8 *)this->u32_6C4; /*0x6fc2fe*/
    if ( !v11[3609] && !v11[3608] ) /*0x6fc30e*/
      return 6; /*0x6fc30e*/
  }
  v12 = *(unsigned int *)(*(int (**)(TechnoClass *, int))(this->vfptr + 1016))(this, a4); /*0x6fc32b*/
  v38 = v12; /*0x6fc32f*/
  if ( !v12 || *(unsigned char *)(v12 + 335) && HouseClass::IonSensitivesShouldBeOffline() ) /*0x6fc349*/
    return 6; /*0x6fc350*/
  if ( *(unsigned char *)(v12 + 322) ) /*0x6fc356*/
  {
    if ( v8 && v8->drainingMe ) /*0x6fc364*/
      return 5; /*0x6fc36c*/
    if ( !v8 ) /*0x6fc378*/
      goto LABEL_52; /*0x6fc378*/
    if ( !*(unsigned char *)((*(int (**)(BuildingClass *))(v8->vfptr + 132))(v8) + 1519) ) /*0x6fc385*/
      return 5; /*0x6fc876*/
  }
  if ( v8 /*0x6fc3bf*/
    && v8->bunkerLinkedUnit
    && (*(int (**)(BuildingClass *))(v8->vfptr + 44))(v8) == 1
    && (double)*(int *)(v12 + 180) < 384.0 )
  {
    return 5; /*0x6fc3bf*/
  }
LABEL_52:
  if ( this )
  {
    if ( (*(int (**)(TechnoClass *))(this->vfptr + 44))(this) == 1 )
    {
      v13 = (*(int (**)(TechnoClass *))(this->vfptr + 44))(this); /*0x6fc3d9*/
      if ( (unsigned __int8)TechnoClass::HasDeployFlags(v13 == 1 ? this : 0) )
        return 5; /*0x6fc3e7*/
    }
  }
  v14 = *(unsigned int *)(v12 + 172); /*0x6fc3f4*/
  if ( v14 ) /*0x6fc3fc*/
  {
    if ( *(unsigned char *)(v14 + 365) /*0x6fc417*/
      && v8
      && *(unsigned char *)((*(int (**)(BuildingClass *))(v8->vfptr + 132))(v8) + 3381) )
    {
      return 5; /*0x6fc417*/
    }
  }
  v15 = *(unsigned __int8 **)(v12 + 172); /*0x6fc425*/
  if ( v15 )
  {
    if ( v15[365] && v8 && v8->bunkerLinkedUnit ) /*0x6fc43d*/
      return 5; /*0x6fc43d*/
    if ( v15[347] )
    {
      if ( (*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) == 1 )
      {
        v16 = (*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2); /*0x6fc469*/
        if ( (unsigned __int8)TechnoClass::HasDeployFlags(v16 == 1 ? (TechnoClass *)aP2 : 0) )
          return 5; /*0x6fc477*/
      }
    }
  }
  v17 = *(unsigned __int8 **)(v12 + 172); /*0x6fc484*/
  if ( v17
    && v17[347]
    && (aP2[20] & 4) != 0
    && *(unsigned char *)((*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 132))(aP2) + 3476) )
  {
    if ( !*((aP2[20] & 4) != 0 ? (unsigned int *)(aP2 + 1652) : (unsigned int *)1652) )
      sub_7DC720(-2147467261); /*0x6fc4cf*/
    v37 = *((aP2[20] & 4) != 0 ? (unsigned int *)(aP2 + 1652) : (unsigned int *)1652);
    if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v37 + 128))(v37) ) /*0x6fc4dd*/
      return 5; /*0x6fc4dd*/
  }
  v18 = *(unsigned __int8 **)(v12 + 172); /*0x6fc4ef*/
  if ( v18 )
  {
    if ( v18[347]
      && (*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) == 1
      && *(unsigned char *)(*((*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) == 1
                    ? (unsigned int *)(aP2 + 1732)
                    : (unsigned int *)1732)
                  + 3603)
      && *((*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) == 1 ? (unsigned int *)(aP2 + 172) : (unsigned int *)172) == 16 )
    {
      return 5; /*0x6fc546*/
    }
  }
  v19 = *(unsigned int *)(v12 + 172); /*0x6fc54c*/
  if ( v19 ) /*0x6fc554*/
  {
    if ( *(unsigned char *)(v19 + 347) /*0x6fc56f*/
      && v8
      && *(unsigned char *)((*(int (**)(BuildingClass *))(v8->vfptr + 132))(v8) + 3479) )
    {
      return 5; /*0x6fc56f*/
    }
  }
  if ( this->inOpenToppedTransport[0] ) /*0x6fc57d*/
  {
    if ( !*(unsigned char *)(v12 + 323) ) /*0x6fc587*/
      return 5; /*0x6fc587*/
    transporter = this->transporter; /*0x6fc599*/
    if ( transporter ) /*0x6fc5a1*/
    {
      if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)transporter + 468))(transporter) ) /*0x6fc5a5*/
        return 5; /*0x6fc5a5*/
    }
  }
  if ( this->inOpenToppedTransport[0] ) /*0x6fc5b3*/
  {
    v21 = this->transporter; /*0x6fc5bd*/
    if ( v21 ) /*0x6fc5c5*/
    {
      if ( *(unsigned int *)(v21 + 284) ) /*0x6fc5c7*/
        return 5; /*0x6fc5c7*/
    }
  }
  if ( v8 /*0x6fc5f8*/
    && *(unsigned int *)(v12 + 172)
    && (*(unsigned __int8 (**)(BuildingClass *))(v8->vfptr + 468))(v8)
    && !*(unsigned char *)(*(unsigned int *)(v12 + 172) + 346) )
  {
    return 5; /*0x6fc600*/
  }
  if ( *(unsigned char *)(v12 + 305) ) /*0x6fc606*/
  {
    if ( !TechnoClass::CheckTargetCell(this) /*0x6fc623*/
      && !(*(unsigned __int8 (**)(TechnoClass *))(this->vfptr + 896))(this) )
    {
      if ( !SpawnManagerClass::CountAliveSpawns((SpawnManagerClass *)this->spawnManager) ) /*0x6fc637*/
        return 3; /*0x6fc64c*/
      goto LABEL_98; /*0x6fc63e*/
    }
    return 6; /*0x6fcd2c*/
  }
LABEL_98:
  if ( *(unsigned char *)(*(unsigned int *)(v12 + 172) + 346) /*0x6fc67b*/
    && v8
    && (*(int (**)(BuildingClass *))(v8->vfptr + 44))(v8) == 2
    && *(unsigned char *)((*(int (**)(BuildingClass *))(v8->vfptr + 132))(v8) + 3412) )
  {
    return 5; /*0x6fc683*/
  }
  v22 = *(unsigned char **)(*(int (**)(TechnoClass *, bool))(this->vfptr + 1016))(this, a4 == 0); /*0x6fc69f*/
  if ( v22 /*0x6fc6f7*/
    && (v22[297] && this->fireParticles
     || v22[301] && this->railgunParticles
     || v22[298] && this->sparkParticles
     || v22[304] && this->damageParticles_2) )
  {
    return 6; /*0x6fc6ff*/
  }
  if ( (*(unsigned __int8 (**)(unsigned char *))(*(unsigned int *)aP2 + 84))(aP2)
    && !*(unsigned char *)(*(unsigned int *)(v12 + 160) + 676) )
  {
    return aP2 != (unsigned char *)this->locomotorTarget ? 5 : 3;
  }
  if ( (aP2[20] & 4) != 0 /*0x6fc75c*/
    && (*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 120))(aP2) != 2
    && !*(unsigned char *)(*(unsigned int *)(v12 + 160) + 676) )
  {
    return 5; /*0x6fc75c*/
  }
  if ( v8 )
  {
    v23 = *(unsigned int *)((*(int (**)(BuildingClass *))(v8->vfptr + 444))(v8) + 236) == 2 /*0x6fc796*/
       || *(unsigned int *)((*(int (**)(BuildingClass *))(v8->vfptr + 444))(v8) + 236) == 6;
    if ( (*(unsigned __int8 (**)(BuildingClass *))(v8->vfptr + 84))(v8) ) /*0x6fc79d*/
      v23 = 0; /*0x6fc7a4*/
    if ( v8->onBridge[0] ) /*0x6fc7a6*/
    {
      v23 = 0; /*0x6fc7b0*/
    }
    else if ( v23 && (*(int (**)(TechnoClass *, unsigned char *))(this->vfptr + 744))(this, aP2) == -1 ) /*0x6fc7ca*/
    {
      return 5; /*0x6fc7ca*/
    }
    if ( !(*(unsigned __int8 (**)(unsigned char *))(*(unsigned int *)aP2 + 80))(aP2) || v23 ) /*0x6fc7e3*/
      goto LABEL_139; /*0x6fc7e3*/
  }
  else
  {
    if ( !(*(unsigned __int8 (**)(unsigned char *))(*(unsigned int *)aP2 + 84))(aP2) /*0x6fc7fc*/
      && !*(unsigned char *)(*(unsigned int *)(v12 + 160) + 677) )
    {
      return 5; /*0x6fc812*/
    }
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) != 11
      || *((*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) == 11 ? (unsigned int *)(aP2 + 236) : (unsigned int *)236) == 2
      || *((*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) == 11 ? (unsigned int *)(aP2 + 236) : (unsigned int *)236) == 6 )
    {
      goto LABEL_139; /*0x6fc855*/
    }
  }
  if ( *(unsigned int *)((*(int (**)(TechnoClass *))(this->vfptr + 132))(this) + 1540) == 1 ) /*0x6fc868*/
    return 5; /*0x6fc868*/
LABEL_139:
  if ( *(unsigned char *)(v12 + 348) ) /*0x6fc87d*/
  {
    locomotorTarget = (unsigned char *)this->locomotorTarget; /*0x6fc887*/
    v25 = aP2; /*0x6fc88d*/
    if ( locomotorTarget /*0x6fc8ad*/
      && locomotorTarget != aP2
      && this->damageParticles_2
      && (*(int (**)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) != 6 )
    {
      return 3; /*0x6fc8bb*/
    }
  }
  else
  {
    v25 = aP2; /*0x6fc8be*/
  }
  if ( *(unsigned char *)(v38 + 348) ) /*0x6fc8c2*/
  {
    v26 = this->locomotorTarget; /*0x6fc8cc*/
    if ( v26 ) /*0x6fc8d4*/
    {
      if ( (unsigned char *)v26 == v25 && (*(int (**)(unsigned char *))(*(unsigned int *)v25 + 44))(v25) != 6 ) /*0x6fc8e4*/
        return 3; /*0x6fc8f2*/
    }
  }
  if ( a4 /*0x6fc93a*/
    || !this
    || (*(int (**)(TechnoClass *))(this->vfptr + 44))(this) != 1
    || (v27 = this->currentBurstIndex % *(unsigned int *)(v38 + 156), v27 >= 2)
    || (v28 = *(unsigned int *)(this->u32_6C4 + 4 * v27 + 3648), v28 == -1)
    || (v29 = this->u32_6C0, v29 == -1) )
  {
    v30 = this->diskLaserTimer[0]; /*0x6fc94f*/
    v31 = this->diskLaserTimer[2]; /*0x6fc955*/
    if ( v30 != -1 ) /*0x6fc95e*/
    {
      if ( *(unsigned int *)&stru_A8E960.random[528] - v30 >= v31 ) /*0x6fc96a*/
        goto LABEL_164; /*0x6fc96a*/
      v31 -= *(unsigned int *)&stru_A8E960.random[528] - v30; /*0x6fc96c*/
    }
    if ( v31 ) /*0x6fc970*/
      return 3; /*0x6fc97e*/
  }
  else if ( v29 != v28 ) /*0x6fc93e*/
  {
    return 3; /*0x6fc94c*/
  }
LABEL_164:
  if ( *(unsigned char *)(v38 + 297) && this->fireParticles ) /*0x6fc98b*/
    return 3; /*0x6fc9a1*/
  if ( *(unsigned char *)(v38 + 301) && this->railgunParticles ) /*0x6fc9ae*/
    return 3; /*0x6fc9c4*/
  if ( *(unsigned char *)(v38 + 298) && this->sparkParticles ) /*0x6fc9d1*/
    return 3; /*0x6fc9e7*/
  if ( *(unsigned char *)(v38 + 304) && this->damageParticles_2 ) /*0x6fc9f4*/
    return 3; /*0x6fca0a*/
  if ( !this->ammo ) /*0x6fca0d*/
    return 1; /*0x6fca23*/
  if ( *(unsigned char *)(v38 + 307) /*0x6fca4d*/
    && this->cloakState
    && ((*(int (**)(TechnoClass *))(this->vfptr + 44))(this) != 2 || this->cloakState == 2) )
  {
    return 9; /*0x6fca5b*/
  }
  if ( *(unsigned char *)((*(int (**)(TechnoClass *))(this->vfptr + 132))(this) + 3367) ) /*0x6fca68*/
    return 8; /*0x6fca7e*/
  if ( *(unsigned char *)(*(unsigned int *)(v38 + 172) + 345)
    && this
    && (this->abstractFlags & 4) != 0
    && !ParasiteClass::CanInfect(this->q69C, (v25[20] & 4) != 0 ? v25 : 0) )
  {
    return 5; /*0x6fcac2*/
  }
  v32 = *(unsigned char *)(*(unsigned int *)(v38 + 172) + 345); /*0x6fcacb*/
  if ( v32 && (v25[20] & 4) != 0 && *(int *)&stru_A8E960.random[528] < *((unsigned int *)v25 + 422) ) /*0x6fcae9*/
    return 5; /*0x6fcaf7*/
  if ( !v8 ) /*0x6fcafc*/
    goto LABEL_231; /*0x6fcafc*/
  if ( v32 && (*(unsigned __int8 (**)(BuildingClass *))(v8->vfptr + 352))(v8) ) /*0x6fcb0b*/
    return 5; /*0x6fcb21*/
  if ( *(unsigned char *)(*(unsigned int *)(v38 + 172) + 341) && !CaptureManagerClass::CanCapture(this->captureManager, v8) ) /*0x6fcb3b*/
    return 5; /*0x6fcb50*/
  v33 = *(unsigned int *)(v38 + 172); /*0x6fcb56*/
  if ( *(double *)(v33 + 8 * *(unsigned int *)((*(int (**)(BuildingClass *))(v8->vfptr + 132))(v8) + 156) + 160) == 0.0 ) /*0x6fcb7c*/
    return 5; /*0x6fcb8a*/
  if ( *(unsigned char *)(v33 + 366) && !v8->attachedBomb ) /*0x6fcb97*/
    return 5; /*0x6fcbaa*/
  if ( *(unsigned char *)(v33 + 343) && v8->attachedBomb ) /*0x6fcbb7*/
    return 5; /*0x6fcbca*/
  if ( v8->isSinking[0] ) /*0x6fcbcd*/
    return 5; /*0x6fcbe3*/
  if ( this->onBridge[0] == v8->onBridge[0] ) /*0x6fcbf4*/
    goto LABEL_231; /*0x6fcbf4*/
  if ( (*(int (**)(TechnoClass *))(this->vfptr + 444))(this) /*0x6fcc4c*/
    && (*(unsigned int *)((*(int (**)(TechnoClass *))(this->vfptr + 444))(this) + 320) & 0x100) != 0
    && !(*(unsigned __int8 (**)(TechnoClass *))(this->vfptr + 84))(this)
    && (*(int (**)(BuildingClass *))(v8->vfptr + 444))(v8)
    && (*(unsigned int *)((*(int (**)(BuildingClass *))(v8->vfptr + 444))(v8) + 320) & 0x100) != 0 )
  {
    return 5; /*0x6fcc5a*/
  }
  location = v8->location; /*0x6fcc63*/
  v39 = this->location[0]; /*0x6fcc6b*/
  v35 = this->location[1]; /*0x6fcc72*/
  v39 = *location; /*0x6fcc75*/
  v40 = v35; /*0x6fcc79*/
  v36 = this->location[2]; /*0x6fcc80*/
  v40 = location[1]; /*0x6fcc83*/
  if ( *(unsigned char *)(*(unsigned int *)(v38 + 172) + 345) ) /*0x6fcc90*/
  {
    if ( (int)abs32(v36 - location[2]) > 2 * *(unsigned int *)&stru_B0EA70.__pad_1C[168] ) /*0x6fccac*/
      return 5; /*0x6fccb1*/
  }
LABEL_231:
  if ( *(unsigned char *)((*(int (**)(TechnoClass *))(this->vfptr + 132))(this) + 3479) /*0x6fccd5*/
    && (*(unsigned __int8 (**)(TechnoClass *))(this->vfptr + 896))(this) )
  {
    return 5; /*0x6fcce2*/
  }
  if ( !a5 || (*(unsigned __int8 (**)(TechnoClass *, unsigned char *, int))(this->vfptr + 936))(this, aP2, a4) ) /*0x6fcd04*/
    return 0; /*0x6fcd20*/
  return 8; /*0x6fc0df*/

}
}  // G42.18 ns repair
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
      /* X11: vtable install elided (implicit via TriggerTypeClass virtuals 0x727c14) */
      /* X11: vtable install elided (implicit via TriggerTypeClass virtuals 0x727c1a) */
      /* X11: vtable install elided (implicit via TriggerTypeClass virtuals 0x727c21) */
      /* X11: vtable install elided (implicit via TriggerTypeClass virtuals 0x727c28) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->q11C); /*0x727c3b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->q11C); /*0x727c4c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->q11C); /*0x727c5d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->q11C); /*0x727c6e*/
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
