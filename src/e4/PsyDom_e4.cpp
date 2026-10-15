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
namespace gamemd {  // G42.18 ns repair
void PsyDom::Fire()
{
  unsigned int *v4; // eax
  int v34[3]; // [esp+34h] [ebp-30h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v39; // [esp+58h] [ebp-Ch]

  ActionQueue *v1; // esi
  v1 = (ActionQueue *)operator new(0x14u); /*0x53b08e*/
  if ( v1 ) /*0x53b097*/
  {
  void *v2; // eax
    v2 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)(&PsyDom_Coords)); /*0x53b0a3*/
  int *v3; // eax
    v3 = (int *)(*(int (**)(void *, int *))(*(unsigned int *)v2 + 72))(v2, v34); /*0x53b0b1*/
    v4 = ActionQueue::PushEntry((int)(v1), *v3, v3[1], v3[2]); /*0x53b0cb*/
  }
  else
  {
    v4 = 0; /*0x53b0d2*/
  }
  v4->u32_10 = 1; /*0x53b0d4*/
  void *v5; // esi
  v5 = *(void **)(*(unsigned int *)&g_RulesClass_Instance + 768); /*0x53b0e6*/
  void *v6; // eax
  v6 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)(&PsyDom_Coords)); /*0x53b0f1*/
  int *v7; // eax
  v7 = (int *)(*(int (**)(void *, int *))(*(unsigned int *)v6 + 72))(v6, v34); /*0x53b0ff*/
  int v33[3]; // [esp+28h] [ebp-3Ch] BYREF
  v33[0] = *v7; /*0x53b104*/
  v33[1] = v7[1]; /*0x53b110*/
  v33[2] = v7[2]; /*0x53b117*/
  AnimClass *v8; // eax
  v8 = (AnimClass *)operator new(0x1C8u); /*0x53b11b*/
  if ( v8 ) /*0x53b125*/
    PsyDom_Anim = (int)AnimClass::ctor(v8,(int *)(v5), v33, 0, 1, (void *)0x600, 0, 0); /*0x53b13e*/
  else
    PsyDom_Anim = 0; /*0x53b145*/
  PlaySoundEffectAt( /*0x53b16b*/
    v33,
    *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 780),
    0,
    *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 760),
    1,
    (int)LightningStorm_Owner);
  int v9; // eax
  v9 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 776); /*0x53b176*/
  if ( v9 >= 10 ) /*0x53b17f*/
    v9 = 10; /*0x53b181*/
  int v10; // esi
  v10 = ((unsigned int *)(dword_7ED3D0))[v9]; /*0x53b186*/
  void **v36; // [esp+4Ch] [ebp-18h] BYREF
  ((int)((EventClass *)&v36))->resetEvent(0, 0); /*0x53b193*/
  v36 = &vt_DynamicVectorClass; /*0x53b19a*/
  int v41; // [esp+60h] [ebp-4h]
  v41 = 10; /*0x53b1a2*/
  int v40; // [esp+5Ch] [ebp-8h]
  v40 = 0; /*0x53b1aa*/
  if ( v10 > 0 )
  {
  char *v11; // ebp
    v11 = &g_MissionQueueFrame.waypoints[2150]; /*0x53b1b4*/
  int v30; // [esp+18h] [ebp-4Ch]
    v30 = v10; /*0x53b1b9*/
    do
    {
  int v12; // eax
      v12 = *(unsigned int *)v11; /*0x53b1bd*/
  int16_t v31[2]; // [esp+1Ch] [ebp-48h] BYREF
      v31[1] = (*(((unsigned short *)&(*(unsigned int *)v11)) + 1)); /*0x53b1c6*/
  int v29; // [esp+14h] [ebp-50h]
      (*(((unsigned short *)&(v29)) + 1)) = *(&PsyDom_Coords + 1) + v31[1]; /*0x53b1dd*/
      (*((unsigned short *)&(v29))) = PsyDom_Coords + v12; /*0x53b1e2*/
      *(unsigned int *)v31 = v29; /*0x53b1f7*/
  unsigned int v32[2]; // [esp+20h] [ebp-44h] BYREF
      v32[0] = 0; /*0x53b1fb*/
      v32[1] = 0; /*0x53b1ff*/
  Object *v13; // eax
      v13 = (Object *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v31); /*0x53b203*/
  int i; // esi
  int v24; // esi
      for ( i = ((Object *)(v13))->FindClosestObjectCell(v32, 0, 0); i; i = (*(unsigned char *)(v24 + 20) & 1) != 0 ? v24 : 0 )
      {
        if ( (*(int (**)(int))(*(unsigned int *)i + 44))(i) != 6 /*0x53b26b*/
          && !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)i + 132))(i) + 3381)
          && !(*(uint8_t (**)(int))(*(unsigned int *)i + 352))(i)
          && !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)i + 132))(i) + 3434)
          && !(*(uint8_t (**)(int))(*(unsigned int *)i + 84))(i) )
        {
  unsigned int *v26; // [esp+4h] [ebp-60h]
  int v27; // [esp+8h] [ebp-5Ch]
  unsigned int *v28; // [esp+Ch] [ebp-58h]
          if ( *(unsigned int *)(i + 704) ) /*0x53b276*/
            CaptureManagerClass::FreeUnit((int)((CaptureManagerClass *)i), 0,(unsigned int *)((int)v11), v26, v27, v28); /*0x53b287*/
          (*(void (**)(int, House *, int))(*(unsigned int *)i + 980))(i, PsyDom_Owner, 1); /*0x53b298*/
  int v15; // edx
          v15 = *(unsigned int *)i; /*0x53b29e*/
          *(unsigned char *)(i + 708) = 1; /*0x53b2a2*/
  int v16; // edi
          v16 = *(unsigned int *)((*(int (**)(int))(v15 + 132))(i) + 1548); /*0x53b2af*/
  int *v17; // eax
  char v35[12]; // [esp+40h] [ebp-24h] BYREF
          v17 = (int *)(*(int (**)(int, char *))(*(unsigned int *)i + 72))(i, v35); /*0x53b2be*/
  int v18; // ecx
          v18 = *v17; /*0x53b2c1*/
  int v19; // edx
          v19 = v17[1]; /*0x53b2c3*/
  int v20; // eax
          v20 = v17[2]; /*0x53b2c6*/
          v34[0] = v18; /*0x53b2d0*/
          v34[1] = v19; /*0x53b2d4*/
          v34[2] = v16 + v20; /*0x53b2d8*/
  AnimClass *v21; // eax
          v21 = (AnimClass *)operator new(0x1C8u); /*0x53b2dc*/
  BuildingClass *v22; // eax
          if ( v21 ) /*0x53b2e6*/
                        v22 = (BuildingClass *)AnimClass::ctor( /*0x53b306*/                                      v21,(int *)(*(void **)(*(unsigned int *)&g_RulesClass_Instance + 804)),                                      v34,                                      0,                                      1,                                      (void *)0x600,                                      0,                                      0);
          else
            v22 = 0; /*0x53b30d*/
          *(unsigned int *)(i + 712) = (unsigned int)(v22); /*0x53b311*/
          if ( v22 ) /*0x53b317*/
            BuildingClass::AimTurret(v22, (unsigned char *)i); /*0x53b31c*/
  int v38; // [esp+54h] [ebp-10h]
          if ( v40 < v38 /*0x53b34b*/
            || ((((unsigned char *)&(v39))[1]) || !v38)
            && v41 > 0
            && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v36[2])(&v36, v41 + v38, 0) )
          {
  int v23; // eax
            v23 = v40++; /*0x53b356*/
            *((unsigned int *)Block + v23) = i; /*0x53b361*/
          }
        }
        v24 = *(unsigned int *)(i + 48); /*0x53b364*/
        if ( !v24 ) /*0x53b369*/
          break; /*0x53b369*/
      }
      v11 += 4; /*0x53b389*/
      --v30; /*0x53b38d*/
    }
    while ( v30 );
  }
  if ( !(uint8_t)((House *)(PsyDom_Owner))->IsCurrentPlayer() ) /*0x53b39d*/
  {
  int j; // esi
    for ( j = v40 - 1; j >= 0; --j ) /*0x53b3af*/
      (*(void (**)(unsigned int, int, unsigned int))(**((unsigned int **)Block + j) + 488))(*((unsigned int *)Block + j), 15, 0); /*0x53b3bd*/
  }
  v36 = &vt_VectorClass; /*0x53b3ca*/
  if ( Block ) /*0x53b3d4*/
  {
    if ( (((unsigned char *)&(v39))[1]) ) /*0x53b3da*/
      operator delete((void *)(Block)); /*0x53b3dd*/
  }
}
}  // G42.18 ns repair
// 0x53B400
namespace gamemd {
bool PsyDom::IsActive()
{

  int result; // eax
  result = PsyDom_Status; /*0x53b400*/
  (*((unsigned char *)&(result))) = PsyDom_Status != 0; /*0x53b407*/
  return result; /*0x53b40a*/
}
} // namespace gamemd
