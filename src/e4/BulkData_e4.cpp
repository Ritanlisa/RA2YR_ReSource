// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x697AD0
void BulkData::InitMissionHashing()
{
{
  DWORD v2; // eax
  DWORD Time; // [esp+10h] [ebp-4h] BYREF

  SessionClass::LoadMissionList(this); /*0x697ad7*/
  Time = timeGetTime(); /*0x697ae2*/
  v2 = DiskSpace::CheckAvailable(); /*0x697ae6*/
  ComputeHash(&Time, v2); /*0x697af1*/
  char * v3 = Object_Init_7CBC11(DataGlobal_83EF00); /*0x697afb*/
  const char * v4 = v3; /*0x697b00*/
  if ( v3 ) /*0x697b07*/
  {
    unsigned int v5 = 0; /*0x697b10*/
    if ( strlen(v3) ) /*0x697b12*/
    {
      do /*0x697b35*/
        ComputeHash(&Time, v4[v5++]); /*0x697b21*/
      while ( v5 < strlen(v4) ); /*0x697b35*/
    }
  }
  this->q051 = Time; /*0x697b41*/
  Debug::Log(); /*0x697b47*/
}
}
