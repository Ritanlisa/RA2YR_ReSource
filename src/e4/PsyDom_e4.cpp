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

// 0x53B080
namespace gamemd {
void PsyDom::Fire()
{

  unsigned int *v0; // esi
  void *v1; // eax
  int *v2; // eax
  unsigned int *v3; // eax
  CoordStruct *v4; // esi
  void *v5; // eax
  void **v6; // eax
  int v7; // eax
  AnimClass *v8; // esi
  int *v9; // ebp
  int v10; // eax
  unsigned int *v11; // eax
  IUnknown *i; // esi
  int v13; // edx
  int v14; // edi
  int *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  void **v19; // eax
  AnimClass *v20; // eax
  AnimClass *v23; // eax
  int v22; // esi
  int j; // esi
  int v24; // [esp+4h] [ebp-60h]
  IUnknown *v25; // [esp+8h] [ebp-5Ch]
  IUnknown *v26; // [esp+Ch] [ebp-58h]
  int v27; // [esp+10h] [ebp-54h]
  IUnknown **a5; // [esp+14h] [ebp-50h]
  AnimClass *v29; // [esp+18h] [ebp-4Ch]
  IUnknown **v30; // [esp+1Ch] [ebp-48h] BYREF
  unsigned int v31[2]; // [esp+20h] [ebp-44h] BYREF
  CoordStruct aP2; // [esp+28h] [ebp-3Ch] BYREF
  CoordStruct v33; // [esp+34h] [ebp-30h] BYREF
  char v34[12]; // [esp+40h] [ebp-24h] BYREF
  void **v35; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v37; // [esp+54h] [ebp-10h]
  int v38; // [esp+58h] [ebp-Ch]
  AnimClass *v39; // [esp+5Ch] [ebp-8h]
  int v40; // [esp+60h] [ebp-4h]

  v0 = (unsigned int *)__2_YAPAXI_Z(0x14u); /*0x53b08e*/
  if ( v0 ) /*0x53b097*/
  {
    v1 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], &word_A9FA48); /*0x53b0a3*/
    v2 = (int *)(*(int (**)(void *, CoordStruct *))(*(unsigned int *)v1 + 72))(v1, &v33); /*0x53b0b1*/
    v3 = ActionQueue::PushEntry(v0, *v2, v2[1], v2[2]); /*0x53b0cb*/
  }
  else
  {
    v3 = 0; /*0x53b0d2*/
  }
  v3[4] = 1; /*0x53b0d4*/
  v4 = *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 768); /*0x53b0e6*/
  v5 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], &word_A9FA48); /*0x53b0f1*/
  aP2 = *(CoordStruct *)(*(int (**)(void *, CoordStruct *))(*(unsigned int *)v5 + 72))(v5, &v33); /*0x53b104*/
  v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53b11b*/
  if ( v6 ) /*0x53b125*/
    unk_A9FAC4 = AnimClass::ctor(v6, v4, &aP2, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x53b13e*/
  else
    unk_A9FAC4 = 0; /*0x53b145*/
  PlaySoundEffectAt( /*0x53b16b*/
    (TechnoClass *)&aP2,
    *(IUnknown **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 780),
    0,
    *(ObjectClass **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 760),
    1,
    (int)unk_A9FACC);
  v7 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 776); /*0x53b176*/
  if ( v7 >= 10 ) /*0x53b17f*/
    v7 = 10; /*0x53b181*/
  v8 = (AnimClass *)dword_7ED3D0[v7]; /*0x53b186*/
  EventClass::resetEvent(&v35, 0, 0); /*0x53b193*/
  v35 = &vt_DynamicVectorClass_TechnoClass; /*0x53b19a*/
  v40 = 10; /*0x53b1a2*/
  v39 = 0; /*0x53b1aa*/
  if ( (int)v8 > 0 )
  {
    v9 = dword_ABD490; /*0x53b1b4*/
    v29 = v8; /*0x53b1b9*/
    do
    {
      v10 = *v9; /*0x53b1bd*/
      HIWORD(v30) = HIWORD(*v9); /*0x53b1c6*/
      HIWORD(a5) = unk_A9FA4A + HIWORD(v30); /*0x53b1dd*/
      LOWORD(a5) = word_A9FA48 + v10; /*0x53b1e2*/
      v30 = a5; /*0x53b1f7*/
      v31[0] = 0; /*0x53b1fb*/
      v31[1] = 0; /*0x53b1ff*/
      v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v30); /*0x53b203*/
      for ( i = (IUnknown *)Object::FindClosestObjectCell(v11, (IUnknown *)v31, 0, 0);
            i;
            i = (*(unsigned char *)(v22 + 20) & 1) != 0 ? (IUnknown *)v22 : 0 )
      {
        if ( (*(int (**)(IUnknown *))(i->field_0 + 44))(i) != 6 /*0x53b26b*/
          && !*(unsigned char *)((*(int (**)(IUnknown *))(i->field_0 + 132))(i) + 3381)
          && !(*(unsigned __int8 (**)(IUnknown *))(i->field_0 + 352))(i)
          && !*(unsigned char *)((*(int (**)(IUnknown *))(i->field_0 + 132))(i) + 3434)
          && !(*(unsigned __int8 (**)(IUnknown *))(i->field_0 + 84))(i) )
        {
          if ( *(unsigned int *)&i->__pad_2B8[8] ) /*0x53b276*/
            CaptureManagerClass::FreeUnit(i, v24, v25, v26, v27, a5); /*0x53b287*/
          (*(void (**)(IUnknown *, #375 *, int))(i->field_0 + 980))(i, unk_A9FAC8, 1); /*0x53b298*/
          v13 = i->field_0; /*0x53b29e*/
          i->__pad_2B8[12] = 1; /*0x53b2a2*/
          v14 = *(unsigned int *)((*(int (**)(IUnknown *))(v13 + 132))(i) + 1548); /*0x53b2af*/
          v15 = (int *)(*(int (**)(IUnknown *, char *))(i->field_0 + 72))(i, v34); /*0x53b2be*/
          v16 = *v15; /*0x53b2c1*/
          v17 = v15[1]; /*0x53b2c3*/
          v18 = v15[2]; /*0x53b2c6*/
          v33.X = v16; /*0x53b2d0*/
          v33.Y = v17; /*0x53b2d4*/
          v33.Z = v14 + v18; /*0x53b2d8*/
          v19 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53b2dc*/
          if ( v19 ) /*0x53b2e6*/
            v20 = AnimClass::ctor( /*0x53b306*/
                    v19,
                    *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 804),
                    &v33,
                    0,
                    (CoordStruct *)1,
                    (void *)0x600,
                    0,
                    0);
          else
            v20 = 0; /*0x53b30d*/
          *(unsigned int *)&i->__pad_2B8[16] = v20; /*0x53b311*/
          if ( v20 ) /*0x53b317*/
            BuildingClass::AimTurret(v20, i); /*0x53b31c*/
          if ( (int)v39 < v37 /*0x53b34b*/
            || (BYTE1(v38) || !v37)
            && v40 > 0
            && ((unsigned __int8 (*)(void ***, int, unsigned int))v35[2])(&v35, v40 + v37, 0) )
          {
            v23 = v39; /*0x53b356*/
            v39 = (AnimClass *)((char *)v39 + 1); /*0x53b359*/
            *((unsigned int *)Block + (unsigned int)v23) = i; /*0x53b361*/
          }
        }
        v22 = *(unsigned int *)&i->__pad_28[8]; /*0x53b364*/
        if ( !v22 ) /*0x53b369*/
          break; /*0x53b369*/
      }
      ++v9; /*0x53b389*/
      v29 = (AnimClass *)((char *)v29 - 1); /*0x53b38d*/
    }
    while ( v29 );
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(unk_A9FAC8) ) /*0x53b39d*/
  {
    for ( j = (int)&v39[-1].field_16054 + 3; j >= 0; --j ) /*0x53b3af*/
      (*(void (**)(unsigned int, int, unsigned int))(**((unsigned int **)Block + j) + 488))(*((unsigned int *)Block + j), 15, 0); /*0x53b3bd*/
  }
  v35 = &vt_VectorClass_TechnoClass; /*0x53b3ca*/
  if ( Block ) /*0x53b3d4*/
  {
    if ( BYTE1(v38) ) /*0x53b3da*/
      __3_YAXPAX_Z(Block); /*0x53b3dd*/
  }

}
}
// 0x53B400
namespace gamemd {
bool PsyDom::IsActive()
{

  return unk_A9FAC0 != 0; /*0x53b40a*/

}
} // namespace gamemd
