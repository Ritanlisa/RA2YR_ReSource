// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/BulkData_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x697AD0
namespace gamemd {
void BulkData::InitMissionHashing()
{
  DWORD v2; // eax
  char *v3; // eax
  unsigned int v5; // ebx
  DWORD Time; // [esp+10h] [ebp-4h] BYREF

  SessionClass::LoadMissionList(); /*0x697ad7*/
  Time = timeGetTime(); /*0x697ae2*/
  v2 = DiskSpace::CheckAvailable(); /*0x697ae6*/
  ComputeHash(&Time, v2); /*0x697af1*/
  v3 = Object_Init_7CBC11(aPath); /*0x697afb*/
  v3 = v3; /*0x697b00*/
  if ( v3 ) /*0x697b07*/
  {
    v5 = 0; /*0x697b10*/
    if ( strlen(v3) ) /*0x697b12*/
    {
      do /*0x697b35*/
        ComputeHash(&Time, v3[v5++]); /*0x697b21*/
      while ( v5 < strlen(v3) ); /*0x697b35*/
    }
  }
  this->ptr_144 = Time; /*0x697b41*/
  Debug::Log(); /*0x697b47*/
}
} // namespace gamemd