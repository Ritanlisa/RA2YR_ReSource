// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BulkData_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Random_e4.hpp"

// 0x425D10
namespace gamemd {
AnimClass * * AnimClass::ComputePosition(int *aP1)
{
    (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00425D10.json)
}
}
// 0x485020
namespace gamemd {
int Building::GetNthOfType()
{

  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(*(unsigned int *)&this->__pad_C[56]); /*0x485026*/
  if ( BuildingByTiberiumType == -1 ) /*0x48502e*/
    return 0; /*0x485030*/
  else
    return ((uint8_t)this->__pad_A4[122] + 1) /*0x48504f*/
         * *(unsigned int *)(*(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) + 4 * BuildingByTiberiumType) + 184);

}
}
// 0x772A90
namespace gamemd {
int Building::GetRenderType()
{

  unsigned char *Building_field_0xA0; // ecx
  int result; // eax
Building_field_0xA0 = (unsigned char *)(this->Building_field_0xA0);
  result = 0; /*0x772a96*/
  if ( Building_field_0xA0[676] ) /*0x772a98*/
    result = 4; /*0x772aa2*/
  if ( Building_field_0xA0[677] ) /*0x772aa7*/
    LOBYTE(result) = result | 0xB8; /*0x772ab1*/
  return result; /*0x772ab3*/

}
}
// 0x69E7E0
namespace gamemd {
unsigned int * Building::GetFoundationSize(unsigned int * a1, unsigned int a2)
{

  int v2; // eax
  int16_t *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi

  v2 = MixFileClass::LoadSubFile(); /*0x69e7e0*/
  if ( v2 && a2 < v2->nextArrayIndex && (v3 = (int16_t *)(v2 + 24 * a2 + 8)) != 0 ) /*0x69e7fe*/
  {
    v4 = *v3; /*0x69e800*/
    v5 = v3[1]; /*0x69e803*/
    v6 = v3[2]; /*0x69e809*/
    v7 = v3[3]; /*0x69e80e*/
    *a1 = v4; /*0x69e818*/
    a1[1] = v5; /*0x69e81a*/
    a1[2] = v6; /*0x69e81d*/
    a1[3] = v7; /*0x69e820*/
    return a1; /*0x69e812*/
  }
  else
  {
    *a1 = dword_B077A0; /*0x69e835*/
    a1[1] = dword_B077A4; /*0x69e83d*/
    a1[2] = dword_B077A8; /*0x69e846*/
    a1[3] = dword_B077AC; /*0x69e84f*/
    return a1; /*0x69e829*/
  }

}
} // namespace gamemd
