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
#include "classes/Array_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/ObjectClass_e4.hpp"  // w16g4 C3861 ObjectClass:: supply
namespace gamemd {  // g57w12-r nsfix (orphan re-wrap)

// 0x543780
IsometricTileClass::IsometricTileClass(int aP1, unsigned short *aP2)
{
  int v4; // eax

  this->ObjectClass::ctor(); /*0x543786*/
  this->u32_AC = (unsigned int)(*(IsometricTileClass *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[328] + 4 * aP1)); /*0x54379c*/
  *this = (gamemd::IsometricTileClass)((IsometricTileClass)&vt_IsometricTileClass); /*0x5437a2*/
  this->u32_4 = (unsigned int)(&vt_IsometricTileClass); /*0x5437a8*/
  this->u32_8 = (unsigned int)(&vt_IsometricTileClass); /*0x5437af*/
  this->u32_C = (unsigned int)(&vt_IsometricTileClass); /*0x5437b6*/
  if ( *aP2 != word_AA06D0 || aP2[1] != word_AA06D2 ) /*0x5437d4*/
  {
    this->inLimbo = 0; /*0x543805*/
    ObjectClass::SetPosition(); /*0x54380c*/
    (*(void (**)(IsometricTileClass *, int))(*(unsigned int *)this->q48F + 1)))(this, 1); /*0x543818*/
  }
  if ( *(int *)&DataGlobal_87F760 < *(int *)&DataGlobal_87F758 /*0x543855*/
    || (DataGlobal_87F75D || !*(unsigned int *)&DataGlobal_87F758)
    && *(int *)&DataGlobal_87F764 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&DataGlobal_87F750 + 8))(
         &DataGlobal_87F750,
         *(unsigned int *)&DataGlobal_87F758 + *(unsigned int *)&DataGlobal_87F764,
         0) )
  {
    v4 = (*(unsigned int *)&DataGlobal_87F760)++; /*0x543862*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_87F754 + 4 * v4) = (unsigned int)(this); /*0x543871*/
  }
  return this; /*0x543876*/
}