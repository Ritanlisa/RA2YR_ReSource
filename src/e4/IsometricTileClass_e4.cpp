// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/IsometricTileClass_e4.hpp"
#include "e4/classes/Isometric_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"

// 0x543780
IsometricTileClass::IsometricTileClass(IsometricTileClass * aP1, IsometricTileClass * aP2)
{

  int v4; // eax

  ObjectClass::ctor(this); /*0x543786*/
  *((unsigned int *)this + 43) = *(IsometricTileClass *)(*(unsigned int *)&HouseClass_Player.__pad_5568[23160] + 4 * (unsigned int)aP1); /*0x54379c*/
  *this = (IsometricTileClass)&vt_IsometricTileClass; /*0x5437a2*/
  *((unsigned int *)this + 1) = &vt_IsometricTileClass; /*0x5437a8*/
  *((unsigned int *)this + 2) = &vt_IsometricTileClass; /*0x5437af*/
  *((unsigned int *)this + 3) = &vt_IsometricTileClass; /*0x5437b6*/
  if ( *(unsigned short *)aP2->__tail_0 != unk_AA06D0 || *(unsigned short *)&aP2->__tail_0[2] != unk_AA06D2 ) /*0x5437d4*/
  {
    *((unsigned char *)this + 129) = 0; /*0x543805*/
    ObjectClass::SetPosition((void *)this); /*0x54380c*/
    IsometricTileClass *IsometricTileClass::IsometricTileClass(IsometricTileClass *this, int a2, unsigned short *a3)
  }
  if ( *(int *)&stru_87C374.__pad_14B0[7996] < *(int *)&stru_87C374.__pad_14B0[7988] /*0x543855*/
    || (stru_87C374.__pad_14B0[7993] || !*(unsigned int *)&stru_87C374.__pad_14B0[7988])
    && *(int *)&stru_87C374.__pad_14B0[8000] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_87C374.__pad_14B0[7980] + 8))(
         &stru_87C374.__pad_14B0[7980],
         *(unsigned int *)&stru_87C374.__pad_14B0[7988] + *(unsigned int *)&stru_87C374.__pad_14B0[8000],
         0) )
  {
    v4 = (*(unsigned int *)&stru_87C374.__pad_14B0[7996])++; /*0x543862*/
    *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_14B0[7984] + 4 * v4) = this; /*0x543871*/
  }
  return this; /*0x543876*/

}