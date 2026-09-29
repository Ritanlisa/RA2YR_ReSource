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

// 0x53B080
namespace gamemd {
void PsyDom::Fire()
{
  unsigned int *v0; // esi
  void *v1; // eax
  int *v2; // eax
  unsigned int *v3; // eax
  void *v4; // esi
  void *v5; // eax
  int *v6; // eax
  void **v7; // eax
  int v8; // eax
  int v9; // esi
  unsigned int v10;
  int v11; // eax
  unsigned int *v12; // eax
  int i; // esi
  void ** v14;
  int v15; // edx
  int v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  void **v21; // eax
  void **v22; // eax
  int v23; // eax
  int v24; // esi
  int j; // esi
  int v26; // [esp+4h] [ebp-60h]
  unsigned int *v27; // [esp+8h] [ebp-5Ch]
  int v28; // [esp+14h] [ebp-50h]
  int v29; // [esp+18h] [ebp-4Ch]
  int v30; // [esp+1Ch] [ebp-48h] BYREF
  unsigned int v31[2]; // [esp+20h] [ebp-44h] BYREF
  int v32[3]; // [esp+28h] [ebp-3Ch] BYREF
  int v33[3]; // [esp+34h] [ebp-30h] BYREF
  char v34[12]; // [esp+40h] [ebp-24h] BYREF
  void* v35;
  void *Block; // [esp+50h] [ebp-14h]
  int v37; // [esp+54h] [ebp-10h]
  int v38; // [esp+58h] [ebp-Ch]
  int v39; // [esp+5Ch] [ebp-8h]
  int v40; // [esp+60h] [ebp-4h]

  v0 = (unsigned int *)(operator new(0x14u));
  if ( v0 ) /*0x53b097*/
  {
    v1 = (unsigned int *)(CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&PsyDom_Coords));
    v2 = (int *)((unsigned int *)((int *)(*(int (__thiscall **)(void *, int *))(*(unsigned int *)v1 + 72))(v1, v33)));
    v3 = (unsigned int *)(ActionQueue::PushEntry(v0, *v2, v2[1], v2[2]));
  }
  else
  {
    v3 = 0; /*0x53b0d2*/
  }
  v3[4] = (unsigned int)((void **)(1));
  v4 = (void *)g_RulesClass_Instance->PrerequisitePower[1]; /*0x53b0e6*/
  v5 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&PsyDom_Coords); /*0x53b0f1*/
  v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(unsigned int *)v5 + 72))(v5, v33); /*0x53b0ff*/
  v32[0] = *v6; /*0x53b104*/
  v32[1] = v6[1]; /*0x53b110*/
  v32[2] = v6[2]; /*0x53b117*/
  v7 = (void *)operator new(0x1C8u); /*0x53b11b*/
  if ( v7 ) /*0x53b125*/
    PsyDom_Anim = (int)AnimClass::ctor(v7, v4, v32, 0, 1, (void *)0x600, 0, 0); /*0x53b13e*/
  else
    PsyDom_Anim = 0; /*0x53b145*/
  PlaySoundEffectAt( /*0x53b16b*/
    v32,
    g_RulesClass_Instance->PrerequisiteFactory[0],
    0,
    g_RulesClass_Instance->AtmosphereEntry,
    1,
    (int)LightningStorm_Owner);
  v8 = g_RulesClass_Instance->PrerequisitePower[3]; /*0x53b176*/
  if ( v8 >= 10 ) /*0x53b17f*/
    v8 = 10; /*0x53b181*/
  v9 = dword_7ED3D0[v8]; /*0x53b186*/
  EventClass::resetEvent(&v35, 0, 0); /*0x53b193*/
  v40 = 10; /*0x53b1a2*/
  v39 = 0; /*0x53b1aa*/
  if ( v9 > 0 )
  {
    v10 = dword_ABD490; /*0x53b1b4*/
    v29 = v9; /*0x53b1b9*/
    do
    {
      v11 = *v10; /*0x53b1bd*/
      IDA_HIWORD(v30) = IDA_HIWORD(*v10); /*0x53b1c6*/
      IDA_HIWORD(v28) = IDA_HIWORD(PsyDom_Coords) + IDA_HIWORD(v30); /*0x53b1dd*/
      IDA_LOWORD(v28) = PsyDom_Coords + v11; /*0x53b1e2*/
      v30 = v28; /*0x53b1f7*/
      v31[0] = 0; /*0x53b1fb*/
      v31[1] = 0; /*0x53b1ff*/
      v12 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v30); /*0x53b203*/
      for ( i = Object::FindClosestObjectCell(v12, v31, 0, 0); i; i = (*(unsigned char *)(v24 + 20) & 1) != 0 ? v24 : 0 )
      {
        if ( (*(int (__thiscall **)(int))(*(unsigned int *)i + 44))(i) != 6 /*0x53b26b*/
          && !*(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)i + 132))(i) + 3381)
          && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)i + 352))(i)
          && !*(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)i + 132))(i) + 3434)
          && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)i + 84))(i) )
        {
          v14 = (void **)((int)((void **)(*(unsigned int *)(i + 704))));
          if ( v14 ) /*0x53b27e*/
            CaptureManagerClass::FreeUnit(*(unsigned int **)(v14 + 700), 0, (int)v10, (unsigned int *)i, v26, v27); /*0x53b287*/
          (*(void (__thiscall **)(int, void *, int))(*(unsigned int *)i + 980))(i, PsyDom_Owner, 1); /*0x53b298*/
          v15 = *(unsigned int *)i; /*0x53b29e*/
          *(unsigned char *)(i + 708) = 1; /*0x53b2a2*/
          v16 = *(unsigned int *)((*(int (__thiscall **)(int))(v15 + 132))(i) + 1548); /*0x53b2af*/
          v17 = (int *)(*(int (__thiscall **)(int, char *))(*(unsigned int *)i + 72))(i, v34); /*0x53b2be*/
          v18 = *v17; /*0x53b2c1*/
          v19 = v17[1]; /*0x53b2c3*/
          v20 = v17[2]; /*0x53b2c6*/
          v33[0] = v18; /*0x53b2d0*/
          v33[1] = v19; /*0x53b2d4*/
          v33[2] = v16 + v20; /*0x53b2d8*/
          v21 = (void *)operator new(0x1C8u); /*0x53b2dc*/
          if ( v21 ) /*0x53b2e6*/
            v22 = AnimClass::ctor( /*0x53b306*/
                    v21,
                    (void *)g_RulesClass_Instance->PrerequisiteBarracks[2],
                    v33,
                    0,
                    1,
                    (void *)0x600,
                    0,
                    0);
          else
            v22 = 0; /*0x53b30d*/
          *(unsigned int *)(i + 712) = v22; /*0x53b311*/
          if ( v22 ) /*0x53b317*/
            BuildingClass::AimTurret(v22, (unsigned char *)i); /*0x53b31c*/
          if ( v39 < v37 /*0x53b34b*/
            || (IDA_BYTE1(v38) || !v37)
            && v40 > 0
            && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v35[2])(&v35, v40 + v37, 0) )
          {
            v23 = v39++; /*0x53b356*/
            *((unsigned int *)Block + v23) = i; /*0x53b361*/
          }
        }
        v24 = *(unsigned int *)(i + 48); /*0x53b364*/
        if ( !v24 ) /*0x53b369*/
          break; /*0x53b369*/
      }
      ++v10; /*0x53b389*/
      --v29; /*0x53b38d*/
    }
    while ( v29 );
  }
  if ( !(uint8_t)House::IsCurrentPlayer(PsyDom_Owner) ) /*0x53b39d*/
  {
    for ( j = v39 - 1; j >= 0; --j ) /*0x53b3af*/
      (*(void (__thiscall **)(unsigned int, int, unsigned int))(**((unsigned int **)Block + j) + 488))(*((unsigned int *)Block + j), 15, 0); /*0x53b3bd*/
  }
  if ( Block ) /*0x53b3d4*/
  {
    if ( IDA_BYTE1(v38) ) /*0x53b3da*/
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
