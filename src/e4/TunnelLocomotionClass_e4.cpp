// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TunnelLocomotionClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/TypeList_TechnoType_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"  // G42.36 C2027 supply

// 0x728C00
namespace gamemd {
void TunnelLocomotionClass::ProcessFormationPosition(unsigned int * a1)
{

  double v1; // st7
  int *CurrentState; // esi
  int v4; // eax
  int v5; // edx
  int TileIndex; // eax
  int v8; // eax
  double v9; // [esp+0h] [ebp-34h]
  int16_t v10[2]; // [esp+14h] [ebp-20h] BYREF
  int16_t v11[2]; // [esp+18h] [ebp-1Ch] BYREF
  int16_t v12[2]; // [esp+1Ch] [ebp-18h] BYREF
  unsigned char v13[4]; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-10h] BYREF
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]
  TunnelLocomotionClass *thisa; // [esp+38h] [ebp+4h]
  uint16_t this_2; // [esp+3Ah] [ebp+6h]

  switch ( ((unsigned int *)a1)[0] ) /*0x728c17*/
  {
    case 1: /*0x728c17*/
    case 5: /*0x728c17*/
    case 6: /*0x728c17*/
    case 7: /*0x728c17*/
      goto LABEL_11;
    case 2: /*0x728c17*/
      ((unsigned int *)a1)[0] = 7; /*0x728dd9*/
      goto LABEL_11; /*0x728dd9*/
    case 3: /*0x728c17*/
      ((unsigned int *)a1)[0] = 5; /*0x728dd0*/
LABEL_11:
      a1->CurrentState[0] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728de0*/
      a1->CurrentState[1] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728df0*/
      a1->CurrentState[2] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728df9*/
      break; /*0x728df9*/
    case 4: /*0x728c17*/
      CurrentState = a1->CurrentState; /*0x728c29*/
      v4 = ((unsigned int *)&((unsigned int *)a1)[0])[0]; /*0x728c31*/
      v5 = ((unsigned int *)&((unsigned int *)a1)[0])[2]; /*0x728c38*/
      v16 = ((unsigned int *)&((unsigned int *)a1)[0])[1] - a1->CurrentState[1]; /*0x728c3b*/
      __asm { fild [esp+34h+var_8] } /*0x728c3f*/
      v17 = v5; /*0x728c43*/
      v15 = v4 - a1->CurrentState[0]; /*0x728c4b*/
      __asm /*0x728c4f*/
      {
        fild [esp+34h+var_C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+34h+var_34]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v9); /*0x728c64*/
      LOWORD(_EAX) = Math::RoundToInt(v1); /*0x728c6c*/
      thisa = _EAX; /*0x728c71*/
      __asm /*0x728c75*/
      {
        fild [esp+2Ch+a1]
        fcomp dbl_B0F8F8
        fnstsw ax
      }
      if ( (BYTE1(_EAX) & 0x41) == 0 ) /*0x728c84*/
      {
*(unsigned int *)v10 = *(unsigned int *)(*((int (**)(FootClass *, unsigned char *))((unsigned int *)a1)[0]->vtable1 + 110))( /*0x728c9e*/ ((unsigned int *)a1)[0], (unsigned char *)(v13));


        v11[0] = 0; /*0x728cc4*/
        v11[1] = 0; /*0x728cc9*/
        TileIndex = ((MapClass *)((MapClass *)&stru_87F5F0.__pad_58[416]))->GetTileIndex( (int16_t *)(v10), 0, 0); /*0x728cce*/
        v8 = *LayerClass::Pathfinding_Find( /*0x728cea*/
                (Type *)&stru_87F5F0.__pad_58[416],
                (int)&v14,
                &v14,
                v10,
                1,
                TileIndex,
                0,
                0,
                1,
                1,
                0,
                0,
                1,
                1,
                v11,
                0,
                0);
        this_2 = HIWORD(v8); /*0x728cf3*/
        if ( (unsigned short)v8 != *(unsigned short *)&g_BuildingLoadQueue_Array.__pad_F70[320] ) /*0x728cf7*/
          goto LABEL_8; /*0x728cf7*/
        if ( HIWORD(v8) == *(unsigned short *)&g_BuildingLoadQueue_Array.__pad_F70[322] ) /*0x728d09*/
        {
          v12[0] = 0; /*0x728d33*/
          v12[1] = 0; /*0x728d38*/
          v8 = *LayerClass::Pathfinding_Find( /*0x728d42*/
                  (Type *)&stru_87F5F0.__pad_58[416],
                  (int)v12,
                  &v15,
                  v10,
                  1,
                  -1,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  1,
                  1,
                  v12,
                  0,
                  0);
          this_2 = HIWORD(v8); /*0x728d44*/
        }
        if ( __PAIR32__(this_2, v8) == *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[320] ) /*0x728d4f*/
        {
          (*((void (**)(int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))((unsigned int *)a1)[0]->vtable1 + 91))( /*0x728d7c*/
            &((unsigned int *)a1)[0],
            0,
            *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
          *CurrentState = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728d88*/
          a1->CurrentState[1] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728d90*/
          a1->CurrentState[2] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728d99*/
        }
        else
        {
LABEL_8:
          *CurrentState = ((int16_t)v8 << 8) + 128; /*0x728dbf*/
          a1->CurrentState[1] = ((int16_t)this_2 << 8) + 128; /*0x728dc1*/
          a1->CurrentState[2] = 0; /*0x728dc4*/
        }
      }
      break; /*0x728da1*/
    default:
      return;
  }

}
} // namespace gamemd
// 0x72A110
namespace gamemd {
int TunnelLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x72a116*/
    return -2147467261; /*0x72a118*/
  *a2 = 1247291203; /*0x72a126*/
  a2[1] = 298948665; /*0x72a12e*/
  a2[2] = -1610610249; /*0x72a137*/
  a2[3] = unk_7E9A5C; /*0x72a140*/
  return 0; /*0x72a11d*/

}
} // namespace gamemd
// 0x72A150
namespace gamemd {
int TunnelLocomotionClass::BeginMove(int * a1, int * a2)
{

  int result; // eax
  int v3; // edx

  result = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, a2); /*0x72a15b*/
  if ( result >= 0 ) /*0x72a164*/
  {
    if ( a1 ) /*0x72a168*/
    {
      *(unsigned int *)a1->LocomotionClass = (unsigned int)&vt_LocomotionClass;
      *(unsigned int *)&a1->LocomotionClass[4] = (unsigned int)&vt_LocomotionClass;
      v3 = *(unsigned int *)&(unsigned int *)(unsigned int)&dword_A8ED84; /*0x72a177*/
      a1->CurrentState[6] = 0; /*0x72a17d*/
      a1->CurrentState[4] = v3; /*0x72a180*/
      a1->CurrentState[7] = 0; /*0x72a183*/
      *(unsigned int *)a1->LocomotionClass = (unsigned int)&vt_TunnelLocomotionClass;
      *(unsigned int *)&a1->LocomotionClass[4] = (unsigned int)&vt_TunnelLocomotionClass;
    }
  }
  return result; /*0x72a193*/

}
} // namespace gamemd
// 0x72A200
namespace gamemd {
int TunnelLocomotionClass::StubReturn60()
{

  return 60; /*0x72a205*/

}
} // namespace gamemd
// 0x72A210
namespace gamemd {
TunnelLocomotionClass * TunnelLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{

  ((gamemd::LocomotionClass*)this)->Construct(); /*0x72a213*/
  if ( (a2 & 1) != 0 ) /*0x72a21d*/
    __3_YAXPAX_Z(this); /*0x72a220*/
  return this->LocomotionClass; /*0x72a22a*/

}
} // namespace gamemd