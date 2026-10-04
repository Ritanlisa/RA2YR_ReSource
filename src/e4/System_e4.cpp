// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/DynamicVectorArray_e4.hpp"
#include "e4/classes/StringVector_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_632000_e4.hpp"
#include "e4/classes/E4Recv_632030_e4.hpp"
#include "e4/classes/E4Recv_67BFA0_e4.hpp"
#include "e4/classes/E4Recv_6AC840_e4.hpp"
#include "e4/classes/E4Recv_6AC8D0_e4.hpp"
#include "e4/classes/E4Recv_6B2520_e4.hpp"
#include "e4/classes/E4Recv_6E7330_e4.hpp"
#include "e4/classes/E4Recv_74E8A0_e4.hpp"
#include "e4/classes/E4Recv_751520_e4.hpp"
#include "e4/classes/E4Recv_7515C0_e4.hpp"
#include "e4/classes/E4Recv_7668F0_e4.hpp"
#include "e4/classes/E4Recv_766900_e4.hpp"
#include "e4/classes/E4Recv_766910_e4.hpp"
#include "e4/classes/E4Recv_766EE0_e4.hpp"
#include "e4/classes/E4Recv_766F70_e4.hpp"
#include "e4/classes/E4Recv_770430_e4.hpp"
#include "e4/classes/E4Recv_776880_e4.hpp"
#include "e4/classes/E4Recv_7768A0_e4.hpp"
#include "e4/classes/E4Recv_7A2FC0_e4.hpp"
#include "e4/classes/E4Recv_7A41A0_e4.hpp"
#include "e4/classes/E4Recv_7AC670_e4.hpp"
#include "e4/classes/E4Recv_7AC680_e4.hpp"
#include "e4/classes/E4Recv_7AD410_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/TClassFactory_MechLocomotionClass_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/TClassFactory_CampaignClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/FontClass_e4.hpp"
#include "e4/classes/MultiplayerConfig_e4.hpp"

// 0x52A9E0
namespace gamemd {
unsigned char * sub_52A9E0(unsigned char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
  unsigned char *result; // eax
  uint8_t v5; // bl
  unsigned int v6; // esi
  uint8_t v7; // bl

  *a2 = -1; /*0x52a9ec*/
  result = 0; /*0x52a9f2*/
  *a3 = -1; /*0x52a9f4*/
  *a4 = -1; /*0x52a9fa*/
  v5 = *a1; /*0x52aa01*/
  v6 = 0; /*0x52aa03*/
  if ( *a1 ) /*0x52aa01*/
  {
    while ( 1 ) /*0x52aa09*/
    {
      if ( (*a2 & 0x80000000) == 0 && (*a3 & 0x80000000) != 0 && v5 > 0x20u ) /*0x52aa16*/
        *a3 = v6; /*0x52aa18*/
      v7 = *a1; /*0x52aa1a*/
      if ( *a1 == 59 ) /*0x52aa1f*/
        break; /*0x52aa1f*/
      if ( v7 == 9 ) /*0x52aa24*/
      {
        v6 = (v6 & 0xFFFFFFF8) + 8; /*0x52aa3b*/
      }
      else if ( v7 == 61 ) /*0x52aa29*/
      {
        if ( (*a2 & 0x80000000) != 0 ) /*0x52aa31*/
          *a2 = v6; /*0x52aa33*/
        ++v6; /*0x52aa35*/
      }
      else
      {
        ++v6; /*0x52aa2b*/
      }
      v5 = *++a1; /*0x52aa3e*/
      if ( !v5 ) /*0x52aa44*/
        goto LABEL_17; /*0x52aa44*/
    }
    *a4 = v6; /*0x52aa48*/
    result = a1 + 1; /*0x52aa4b*/
  }
  LABEL_17:
  *a2 &= ((*a2 & 0x80000000) != 0) - 1; /*0x52aa4e*/
  *a3 &= ((*a3 & 0x80000000) != 0) - 1; /*0x52aa6a*/
  *a4 &= ((*a4 & 0x80000000) != 0) - 1; /*0x52aa79*/
  return result; /*0x52aa75*/
}
}
// 0x52B750
namespace gamemd {
int System_Search(ObjectClass * aP0, int edx0, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0052B750.json)
}
}
// 0x6269A0
namespace gamemd {
int sub_6269A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006269A0.json)
}
}
// 0x626AB0
namespace gamemd {
char sub_626AB0(const char * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00626AB0.json)
}
}
// 0x7C8F46
namespace gamemd {
int sub_7C8F46()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C8F46.json)
}
}
// 0x7A2EA0
namespace gamemd {
void sub_7A2EA0(int (__stdcall ***a1)(unsigned int, void *, int *), int a2, int a3, int a4)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007A2EA0.json)
}
}
// 0x68C9C0
namespace gamemd {
AbstractClass * * System_Read_68C9C0(BlowStraw * aP0, ObjectClass * a1, ObjectClass * aP3, int a4, int a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x68C9C0)
}
}
// 0x5BDB90
namespace gamemd {
int sub_5BDB90(int a1, char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BDB90.json)
}
} // namespace gamemd

// 0x5D5AC0
namespace gamemd {
DynamicVector * System_Init()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D5AC0)
}
} // namespace gamemd

// 0x63A0D0
namespace gamemd {
char sub_63A0D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063A0D0.json)
}
} // namespace gamemd

// 0x72C9C0
namespace gamemd {
char sub_72C9C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072C9C0.json)
}
} // namespace gamemd

// 0x72CA10
namespace gamemd {
void sub_72CA10()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072CA10.json)
}
} // namespace gamemd

// 0x748360
namespace gamemd {
void sub_748360()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00748360.json)
}
} // namespace gamemd

// 0x766880
namespace gamemd {
void * System_Init_766880(void * a1, int a2, int a3, void * a4, void * aP4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766880)
}
} // namespace gamemd

// 0x7676F0
namespace gamemd {
void * System_Init_7676F0(void * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7676F0)
}
} // namespace gamemd

// 0x7A2F30
namespace gamemd {
int System_Init_7A2F30(int a1, int a2, ObjectClass * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007A2F30.json)
}
} // namespace gamemd
