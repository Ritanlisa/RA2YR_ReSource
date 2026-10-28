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

  ActionQueue *v1; // esi
  void *v2; // eax
  int *v3; // eax
  unsigned int *v4; // eax
  void *v5; // esi
  void *v6; // eax
  int *v7; // eax
  AnimClass *v8; // eax
  int v9; // eax
  int v10; // esi
  int *v11; // ebp
  int v12; // eax
  Object *v13; // eax
  unsigned __int8 *i; // esi
  int v15; // edx
  int v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  AnimClass *v21; // eax
  void **v22; // eax
  int v23; // eax
  unsigned __int8 *v24; // esi
  int j; // esi
  unsigned int *v26; // [esp+4h] [ebp-60h]
  int v27; // [esp+8h] [ebp-5Ch]
  unsigned int *v28; // [esp+Ch] [ebp-58h]
  unsigned __int16 *v29; // [esp+14h] [ebp-50h]
  int v30; // [esp+18h] [ebp-4Ch]
  __int16 v31[2]; // [esp+1Ch] [ebp-48h] BYREF
  unsigned int v32[2]; // [esp+20h] [ebp-44h] BYREF
  int v33[3]; // [esp+28h] [ebp-3Ch] BYREF
  int v34[3]; // [esp+34h] [ebp-30h] BYREF
  char v35[12]; // [esp+40h] [ebp-24h] BYREF
  void **v36; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v38; // [esp+54h] [ebp-10h]
  unsigned __int8 *v39; // [esp+58h] [ebp-Ch]
  int v40; // [esp+5Ch] [ebp-8h]
  int v41; // [esp+60h] [ebp-4h]

  v1 = (ActionQueue *)__2_YAPAXI_Z(0x14u); /*0x53b08e*/
  if ( v1 ) /*0x53b097*/
  {
    v2 = ((CellCoord *)&dword_87F7E8)->To_CellObj(&PsyDom_Coords); /*0x53b0a3*/
    v3 = (int *)(*(int (**)(void *, int *))(*(unsigned int *)v2 + 72))(v2, v34); /*0x53b0b1*/
    v4 = (v1)->PushEntry(*v3, v3[1], v3[2]); /*0x53b0cb*/
  }
  else
  {
    v4 = 0; /*0x53b0d2*/
  }
  v4->u32_10 = 1; /*0x53b0d4*/
  v5 = *&dword_8871E0->q300; /*0x53b0e6*/
  v6 = ((CellCoord *)&dword_87F7E8)->To_CellObj(&PsyDom_Coords); /*0x53b0f1*/
  v7 = (int *)(*(int (**)(void *, int *))(*(unsigned int *)v6 + 72))(v6, v34); /*0x53b0ff*/
  v33[0] = *v7; /*0x53b104*/
  v33[1] = v7[1]; /*0x53b110*/
  v33[2] = v7[2]; /*0x53b117*/
  v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53b11b*/
  if ( v8 ) /*0x53b125*/
    PsyDom_Anim = (int)AnimClass::ctor(v8, v5, v33, 0, 1, (void *)0x600, 0, 0); /*0x53b13e*/
  else
    PsyDom_Anim = 0; /*0x53b145*/
  PlaySoundEffectAt( /*0x53b16b*/
    v33,
    *&dword_8871E0->u32_30C,
    0,
    *&dword_8871E0->q2F8,
    1,
    (int)LightningStorm_Owner);
  v9 = *&dword_8871E0->q308; /*0x53b176*/
  if ( v9 >= 10 ) /*0x53b17f*/
    v9 = 10; /*0x53b181*/
  v10 = dword_7ED3D0[v9]; /*0x53b186*/
  ((EventClass *)&v36)->resetEvent(0, 0); /*0x53b193*/
  v36 = &g_ptr_7E17AC; /*0x53b19a*/
  v41 = 10; /*0x53b1a2*/
  v40 = 0; /*0x53b1aa*/
  if ( v10 > 0 )
  {
    v11 = dword_ABD490; /*0x53b1b4*/
    v30 = v10; /*0x53b1b9*/
    do
    {
      v12 = *v11; /*0x53b1bd*/
      v31[1] = (((*v11) >> 16) & 0xFFFF); /*0x53b1c6*/
      HIWORD(v29) = *(&PsyDom_Coords + 1) + v31[1]; /*0x53b1dd*/
      LOWORD(v29) = PsyDom_Coords + v12; /*0x53b1e2*/
      *(unsigned int *)v31 = v29; /*0x53b1f7*/
      v32[0] = 0; /*0x53b1fb*/
      v32[1] = 0; /*0x53b1ff*/
      v13 = (Object *)((CellCoord *)&dword_87F7E8)->To_CellObj(v31); /*0x53b203*/
      for ( i = (unsigned __int8 *)Object::FindClosestObjectCell(v13, v32, 0, 0); i; i = (v24[20] & 1) != 0 ? v24 : 0 )
      {
        if ( (*(int (**)(unsigned __int8 *))(*(unsigned int *)i + 44))(i) != 6 /*0x53b26b*/
          && !*(unsigned char *)((*(int (**)(unsigned __int8 *))(*(unsigned int *)i + 132))(i) + 3381)
          && !(*(unsigned __int8 (**)(unsigned __int8 *))(*(unsigned int *)i + 352))(i)
          && !*(unsigned char *)((*(int (**)(unsigned __int8 *))(*(unsigned int *)i + 132))(i) + 3434)
          && !(*(unsigned __int8 (**)(unsigned __int8 *))(*(unsigned int *)i + 84))(i) )
        {
          if ( *((unsigned int *)i + 176) ) /*0x53b276*/
            CaptureManagerClass::FreeUnit((CaptureManagerClass *)i, 0, (int)v11, v26, v27, v28); /*0x53b287*/
          (*(void (**)(unsigned __int8 *, House *, int))(*(unsigned int *)i + 980))(i, PsyDom_Owner, 1); /*0x53b298*/
          v15 = *(unsigned int *)i; /*0x53b29e*/
          i[708] = 1; /*0x53b2a2*/
          v16 = *(unsigned int *)((*(int (**)(unsigned __int8 *))(v15 + 132))(i) + 1548); /*0x53b2af*/
          v17 = (int *)(*(int (**)(unsigned __int8 *, char *))(*(unsigned int *)i + 72))(i, v35); /*0x53b2be*/
          v18 = *v17; /*0x53b2c1*/
          v19 = v17[1]; /*0x53b2c3*/
          v20 = v17[2]; /*0x53b2c6*/
          v34[0] = v18; /*0x53b2d0*/
          v34[1] = v19; /*0x53b2d4*/
          v34[2] = v16 + v20; /*0x53b2d8*/
          v21 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53b2dc*/
          if ( v21 ) /*0x53b2e6*/
            v22 = AnimClass::ctor(v21, *&dword_8871E0->q324, v34, 0, 1, (void *)0x600, 0, 0); /*0x53b306*/
          else
            v22 = 0; /*0x53b30d*/
          *((unsigned int *)i + 178) = v22; /*0x53b311*/
          if ( v22 ) /*0x53b317*/
            BuildingClass::AimTurret((BuildingClass *)v22, i); /*0x53b31c*/
          if ( v40 < v38 /*0x53b34b*/
            || (BYTE1(v39) || !v38)
            && v41 > 0
            && ((unsigned __int8 (*)(void ***, int, unsigned int))v36[2])(&v36, v41 + v38, 0) )
          {
            v23 = v40++; /*0x53b356*/
            *((unsigned int *)Block + v23) = i; /*0x53b361*/
          }
        }
        v24 = (unsigned __int8 *)*((unsigned int *)i + 12); /*0x53b364*/
        if ( !v24 ) /*0x53b369*/
          break; /*0x53b369*/
      }
      ++v11; /*0x53b389*/
      --v30; /*0x53b38d*/
    }
    while ( v30 );
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(PsyDom_Owner) ) /*0x53b39d*/
  {
    for ( j = v40 - 1; j >= 0; --j ) /*0x53b3af*/
      (*(void (**)(unsigned int, int, unsigned int))(**((unsigned int **)Block + j) + 488))(*((unsigned int *)Block + j), 15, 0); /*0x53b3bd*/
  }
  v36 = &g_ptr_7E180C; /*0x53b3ca*/
  if ( Block ) /*0x53b3d4*/
  {
    if ( BYTE1(v39) ) /*0x53b3da*/
      __3_YAXPAX_Z(Block); /*0x53b3dd*/
  }

}
}  // G42.18 ns repair
// 0x53B400
namespace gamemd {
bool PsyDom::IsActive()
{

  int result = PsyDom_Status; // eax /*0x53b400*/
  (*((unsigned char *)&(result))) = PsyDom_Status != 0; /*0x53b407*/
  return result; /*0x53b40a*/
}
} // namespace gamemd
