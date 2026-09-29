// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/BulkData_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"

// 0x697AD0
namespace gamemd {
void BulkData::InitMissionHashing()
{
  DWORD v2; // eax
  char *inited; // eax
  unsigned int v5; // ebx
  DWORD Time; // [esp+10h] [ebp-4h] BYREF

  this->SessionClass::LoadMissionList(); /*0x697ad7*/
  Time = timeGetTime(); /*0x697ae2*/
  v2 = DiskSpace::CheckAvailable(); /*0x697ae6*/
  ComputeHash(&Time, v2); /*0x697af1*/
  inited = Object_Init_7CBC11(aPath); /*0x697afb*/
  inited = inited; /*0x697b00*/
  if ( inited ) /*0x697b07*/
  {
    v5 = 0; /*0x697b10*/
    if ( strlen(inited) ) /*0x697b12*/
    {
      do /*0x697b35*/
        ComputeHash(&Time, inited[v5++]); /*0x697b21*/
      while ( v5 < strlen(inited) ); /*0x697b35*/
    }
  }
  *(unsigned int *)&this->ptr_144 = (gamemd::AbstractClass *)(Time);
  this->Debug::Log(); /*0x697b47*/
}
} // namespace gamemd