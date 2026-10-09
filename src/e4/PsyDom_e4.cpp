// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/RadBeam_e4.hpp"
#include "e4/classes/Progress_e4.hpp"
#include "e4/classes/E4Recv_7AECD0_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/ActionQueue_e4.hpp"

// 0x53B080
namespace gamemd {
void PsyDom::Fire()
{
  ActionQueue *v1; // esi
  void *v2; // eax
  int *v3; // eax
  _DWORD *v4; // eax
  void *v5; // esi
  void *v6; // eax
  int *v7; // eax
  AnimClass *v8; // eax
  int v9; // eax
  int v10; // esi
  char *v11; // ebp
  int v12; // eax
  Object *v13; // eax
  int i; // esi
  int v15; // edx
  int v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  AnimClass *v21; // eax
  BuildingClass *v22; // eax
  int v23; // eax
  int v24; // esi
  int j; // esi
  _DWORD *v26; // [esp+4h] [ebp-60h]
  int v27; // [esp+8h] [ebp-5Ch]
  _DWORD *v28; // [esp+Ch] [ebp-58h]
  int v29; // [esp+14h] [ebp-50h]
  int v30; // [esp+18h] [ebp-4Ch]
  __int16 v31[2]; // [esp+1Ch] [ebp-48h] BYREF
  _DWORD v32[2]; // [esp+20h] [ebp-44h] BYREF
  int v33[3]; // [esp+28h] [ebp-3Ch] BYREF
  int v34[3]; // [esp+34h] [ebp-30h] BYREF
  char v35[12]; // [esp+40h] [ebp-24h] BYREF
  void **v36; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v38; // [esp+54h] [ebp-10h]
  int v39; // [esp+58h] [ebp-Ch]
  int v40; // [esp+5Ch] [ebp-8h]
  int v41; // [esp+60h] [ebp-4h]

  v1 = (ActionQueue *)RA2_OPNEW(0x14u); /*0x53b08e*/
  if ( v1 ) /*0x53b097*/
  {
    v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53b0a3*/
    v3 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v2 + 72))(v2, v34); /*0x53b0b1*/
    v4 = ActionQueue::PushEntry(v1, *v3, v3[1], v3[2]); /*0x53b0cb*/
  }
  else
  {
    v4 = 0; /*0x53b0d2*/
  }
  v4[4] = 1; /*0x53b0d4*/
  v5 = *(void **)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 768); /*0x53b0e6*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53b0f1*/
  v7 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v6 + 72))(v6, v34); /*0x53b0ff*/
  v33[0] = *v7; /*0x53b104*/
  v33[1] = v7[1]; /*0x53b110*/
  v33[2] = v7[2]; /*0x53b117*/
  v8 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x53b11b*/
  if ( v8 ) /*0x53b125*/
    PsyDom_Anim = (int)AnimClass::ctor(v8, v5, v33, 0, 1, (void *)0x600, 0, 0); /*0x53b13e*/
  else
    PsyDom_Anim = 0; /*0x53b145*/
  PlaySoundEffectAt( /*0x53b16b*/
    v33,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 780),
    0,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 760),
    1,
    (int)LightningStorm_Owner);
  v9 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 776); /*0x53b176*/
  if ( v9 >= 10 ) /*0x53b17f*/
    v9 = 10; /*0x53b181*/
  v10 = dword_7ED3D0[v9]; /*0x53b186*/
  EventClass::resetEvent((EventClass *)&v36, 0, 0); /*0x53b193*/
  v36 = &(void*)(void*)&DynamicVectorClass_TechnoClass___vftable; /*0x53b19a*/
  v41 = 10; /*0x53b1a2*/
  v40 = 0; /*0x53b1aa*/
  if ( v10 > 0 )
  {
    v11 = &g_MissionQueueFrame.waypoints[2150]; /*0x53b1b4*/
    v30 = v10; /*0x53b1b9*/
    do
    {
      v12 = *(_DWORD *)v11; /*0x53b1bd*/
      v31[1] = IDA_HIWORD(*(_DWORD *)v11); /*0x53b1c6*/
      IDA_HIWORD(v29) = *(&PsyDom_Coords + 1) + v31[1]; /*0x53b1dd*/
      IDA_LOWORD(v29) = PsyDom_Coords + v12; /*0x53b1e2*/
      *(_DWORD *)v31 = v29; /*0x53b1f7*/
      v32[0] = 0; /*0x53b1fb*/
      v32[1] = 0; /*0x53b1ff*/
      v13 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x53b203*/
      for ( i = Object::FindClosestObjectCell(v13, v32, 0, 0); i; i = (*(_BYTE *)(v24 + 20) & 1) != 0 ? v24 : 0 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)i + 44))(i) != 6 /*0x53b26b*/
          && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)i + 132))(i) + 3381)
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 352))(i)
          && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)i + 132))(i) + 3434)
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 84))(i) )
        {
          if ( *(_DWORD *)(i + 704) ) /*0x53b276*/
            CaptureManagerClass::FreeUnit((CaptureManagerClass *)i, 0, (int)v11, v26, v27, v28); /*0x53b287*/
          (*(void (__thiscall **)(int, House *, int))(*(_DWORD *)i + 980))(i, PsyDom_Owner, 1); /*0x53b298*/
          v15 = *(_DWORD *)i; /*0x53b29e*/
          *(_BYTE *)(i + 708) = 1; /*0x53b2a2*/
          v16 = *(_DWORD *)((*(int (__thiscall **)(int))(v15 + 132))(i) + 1548); /*0x53b2af*/
          v17 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)i + 72))(i, v35); /*0x53b2be*/
          v18 = *v17; /*0x53b2c1*/
          v19 = v17[1]; /*0x53b2c3*/
          v20 = v17[2]; /*0x53b2c6*/
          v34[0] = v18; /*0x53b2d0*/
          v34[1] = v19; /*0x53b2d4*/
          v34[2] = v16 + v20; /*0x53b2d8*/
          v21 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x53b2dc*/
          if ( v21 ) /*0x53b2e6*/
            v22 = (BuildingClass *)AnimClass::ctor( /*0x53b306*/
                                     v21,
                                     *(void **)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 804),
                                     v34,
                                     0,
                                     1,
                                     (void *)0x600,
                                     0,
                                     0);
          else
            v22 = 0; /*0x53b30d*/
          *(_DWORD *)(i + 712) = v22; /*0x53b311*/
          if ( v22 ) /*0x53b317*/
            BuildingClass::AimTurret(v22, (_BYTE *)i); /*0x53b31c*/
          if ( v40 < v38 /*0x53b34b*/
            || (IDA_BYTE1(v39) || !v38)
            && v41 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v36[2])(&v36, v41 + v38, 0) )
          {
            v23 = v40++; /*0x53b356*/
            *((_DWORD *)Block + v23) = i; /*0x53b361*/
          }
        }
        v24 = *(_DWORD *)(i + 48); /*0x53b364*/
        if ( !v24 ) /*0x53b369*/
          break; /*0x53b369*/
      }
      v11 += 4; /*0x53b389*/
      --v30; /*0x53b38d*/
    }
    while ( v30 );
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(PsyDom_Owner) ) /*0x53b39d*/
  {
    for ( j = v40 - 1; j >= 0; --j ) /*0x53b3af*/
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)Block + j) + 488))(*((_DWORD *)Block + j), 15, 0); /*0x53b3bd*/
  }
  v36 = &(void*)(void*)&VectorClass_TechnoClass___vftable; /*0x53b3ca*/
  if ( Block ) /*0x53b3d4*/
  {
    if ( IDA_BYTE1(v39) ) /*0x53b3da*/
      RA2_OPDEL(Block); /*0x53b3dd*/
  }
}
}
// 0x53B400
namespace gamemd {
bool PsyDom::IsActive()
{
  int result; // eax

  result = PsyDom_Status; /*0x53b400*/
  IDA_LOBYTE(result) = PsyDom_Status != 0; /*0x53b407*/
  return result; /*0x53b40a*/
}
} // namespace gamemd
