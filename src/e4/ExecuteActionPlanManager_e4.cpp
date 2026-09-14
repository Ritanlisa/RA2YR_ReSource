// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_633AC0_e4.hpp"
#include "e4/classes/E4Recv_636EB0_e4.hpp"
#include "e4/classes/E4Recv_638C40_e4.hpp"
#include "e4/classes/E4Recv_63DEC0_e4.hpp"
#include "e4/classes/E4Recv_63E1D0_e4.hpp"

// 0x633AC0
namespace gamemd {
unsigned int * E4Recv_633AC0::sub_633AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_633AC0(_DWORD *this)
{
  *(_BYTE *)this = 0; /*0x633ac2*/
  *(this + 28) = 0; /*0x633ac5*/
  *(this + 29) = -1; /*0x633acc*/
  return this; /*0x633ad3*/
}
}
} // namespace gamemd

// 0x636EB0
namespace gamemd {
int E4Recv_636EB0::sub_636EB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_636EB0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 5) - 1; /*0x636eb3*/
  if ( v1 >= 0 ) /*0x636eb4*/
    return *(_DWORD *)(*(this + 2) + 4 * v1); /*0x636ebc*/
  else
    return 0; /*0x636eb6*/
}
}
} // namespace gamemd

// 0x638C40
namespace gamemd {
bool E4Recv_638C40::sub_638C40(int a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_638C40(void *this, int a2, char a3)
{
  if ( this != (void *)1 && this != (void *)11 ) /*0x638c48*/
    return 0; /*0x638c48*/
  if ( a3 == 11 ) /*0x638c50*/
    return 1; /*0x638c54*/
  return this == (void *)11 && !a3; /*0x638c60*/
}
}
} // namespace gamemd

// 0x63DEC0
namespace gamemd {
unsigned int * E4Recv_63DEC0::sub_63DEC0(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_63DEC0(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x63dec9*/
  *(this + 2) = a2; /*0x63ded0*/
  *((_BYTE *)this + 12) = 1; /*0x63ded3*/
  *((_BYTE *)this + 13) = 0; /*0x63ded7*/
  *this = &vt_VectorClass_PlanningMemberClass; /*0x63dedb*/
  if ( a2 ) /*0x63dee1*/
  {
    if ( a3 ) /*0x63dee9*/
    {
      *(this + 1) = a3; /*0x63deeb*/
    }
    else
    {
      *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x63defc*/
      *((_BYTE *)this + 13) = 1; /*0x63deff*/
    }
  }
  *this = &DynamicVectorClass<PlanningMemberClass *>::`vftable'; /*0x63df03*/
  *(this + 5) = 10; /*0x63df09*/
  *(this + 4) = 0; /*0x63df10*/
  return this; /*0x63df19*/
}
}
} // namespace gamemd

// 0x63E1D0
namespace gamemd {
unsigned int * E4Recv_63E1D0::sub_63E1D0(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_63E1D0(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x63e1d9*/
  *(this + 2) = a2; /*0x63e1e0*/
  *((_BYTE *)this + 12) = 1; /*0x63e1e3*/
  *((_BYTE *)this + 13) = 0; /*0x63e1e7*/
  *this = &vt_VectorClass_PlanningBranchClass; /*0x63e1eb*/
  if ( a2 ) /*0x63e1f1*/
  {
    if ( a3 ) /*0x63e1f9*/
    {
      *(this + 1) = a3; /*0x63e1fb*/
    }
    else
    {
      *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x63e20c*/
      *((_BYTE *)this + 13) = 1; /*0x63e20f*/
    }
  }
  *this = &DynamicVectorClass<PlanningBranchClass *>::`vftable'; /*0x63e213*/
  *(this + 5) = 10; /*0x63e219*/
  *(this + 4) = 0; /*0x63e220*/
  return this; /*0x63e229*/
}
}
} // namespace gamemd
