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

  ObjectClass::ctor(); /*0x543786*/
  this->u32_AC = *(IsometricTileClass *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * aP1); /*0x54379c*/
  *this = (IsometricTileClass)(void*)&IsometricTileClass_vftable; /*0x5437a2*/
  this->u32_4 = (void*)&IsometricTileClass_vftable; /*0x5437a8*/
  this->u32_8 = (void*)&IsometricTileClass_vftable; /*0x5437af*/
  this->u32_C = (void*)&IsometricTileClass_vftable; /*0x5437b6*/
  if ( *aP2 != word_AA06D0 || aP2[1] != word_AA06D2 ) /*0x5437d4*/
  {
    this->u32_81 = 0; /*0x543805*/
    ObjectClass::SetPosition(); /*0x54380c*/
    (*(void (**)(IsometricTileClass *, int))(*(unsigned int *)this + 292))(this, 1); /*0x543818*/
  }
  if ( *(int *)&stru_87F5F0.__pad_58[280] < *(int *)&stru_87F5F0.__pad_58[272] /*0x543855*/
    || (stru_87F5F0.__pad_58[277] || !*(unsigned int *)&stru_87F5F0.__pad_58[272])
    && *(int *)&stru_87F5F0.__pad_58[284] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_87F5F0.__pad_58[264] + 8))(
         &stru_87F5F0.__pad_58[264],
         *(unsigned int *)&stru_87F5F0.__pad_58[272] + *(unsigned int *)&stru_87F5F0.__pad_58[284],
         0) )
  {
    v4 = (*(unsigned int *)&stru_87F5F0.__pad_58[280])++; /*0x543862*/
    *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[268] + 4 * v4) = this; /*0x543871*/
  }
  return this; /*0x543876*/
}