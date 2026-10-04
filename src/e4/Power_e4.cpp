// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/Checksum_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"

// 0x43A5D0
namespace gamemd {
int Power::Update(int * a2, void *a2_2, void *a3_1, void *a4_1)
{

  ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x43a5d9*/
  return Power::TimerProcess(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - *((unsigned int *)this + 12)); /*0x43a5f0*/

}
}
// 0x67C6E0
namespace gamemd {
unsigned int * Power::UpdateAll()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67C6E0)
}
}
// 0x68B940
namespace gamemd {
void* Power::ComputeHousePowerChecksum(unsigned int * a2, void *a2_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x68B940)
}
}
// 0x4A1C10
namespace gamemd {
int Power::FinalizeDrain(int a2)
{

  void *Power_field_0x4; // eax
  int result; // eax
  char *i; // eax
  int *p_Power_field_0x8; // esi
  unsigned int v6; // eax
  int v7; // edi

  Power_field_0x4 = (void *)(this->Power_field_0x4); /*0x4a1c10*/
  if ( !Power_field_0x4 ) /*0x4a1c15*/
    this->a2 = 0; /*0x4a1c17*/
  *((unsigned char *)&this->a2 + (unsigned int)Power_field_0x4) = a2; /*0x4a1c1f*/
  result = (int)this->Power_field_0x4 + 1; /*0x4a1c27*/
  this->Power_field_0x4 = (unsigned int)((void *)result); /*0x4a1c29*/
  if ( result == 4 ) /*0x4a1c2f*/
  {
    LOBYTE(this->Power_field_0xC) = this->Power_field_0x4; /*0x4a1c34*/
    for ( i = (char *)this->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1c3d*/
      i[(unsigned int)(unsigned int *)&this->q008] = (char)this->a2; /*0x4a1c42*/
    a2 = (int)this->a2; /*0x4a1c50*/
    p_Power_field_0x8 = &a2; /*0x4a1c57*/
    v6 = ~this->Power_field_0x0; /*0x4a1c5b*/
    v7 = 4; /*0x4a1c5d*/
    do /*0x4a1c7e*/
    {
      v6 = (&CRC32_Table)[*(uint8_t *)p_Power_field_0x8 ^ (uint8_t)v6] ^ (v6 >> 8); /*0x4a1c7a*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1c7c*/
      --v7; /*0x4a1c7d*/
    }
    while ( v7 ); /*0x4a1c7e*/
    result = ~v6; /*0x4a1c80*/
    this->Power_field_0x0 = result; /*0x4a1c83*/
    this->Power_field_0x4 = 0; /*0x4a1c85*/
  }
  return result; /*0x4a1c8e*/

}
} // namespace gamemd

// 0x4A1CA0
namespace gamemd {
int Power::FlagProcess(int Power_field_0x8, int a2, int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A1CA0)
}
} // namespace gamemd

// 0x4A1D50
namespace gamemd {
int Power::TimerProcess(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A1D50)
}
} // namespace gamemd

// 0x750090
namespace gamemd {
char Power::ChangedHouse(char a2)
{

  int result; // eax

  LOBYTE(result) = a2; /*0x750090*/
  if ( a2 ) /*0x750096*/
    this->Power_field_0x0 = 1065353216; /*0x750098*/
  else
    this->Power_field_0x0 = 0; /*0x7500a1*/
  return result; /*0x75009e*/

}
} // namespace gamemd
