// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/FacingClass_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/FrameSnapshot_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x4AF540
namespace gamemd {
int LocomotionClass::Initialize()
{

  int v2; // ecx
  int v3; // ecx

  ((LocomotionClass*)this)->Init(); /*0x4af543*/
  *((unsigned int *)this + 7) = 0; /*0x4af54d*/
  *((unsigned int *)this + 8) = 0; /*0x4af550*/
  v2 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4af553*/
  *((unsigned int *)this + 11) = 0; /*0x4af559*/
  *((unsigned int *)this + 9) = v2; /*0x4af55c*/
  *((unsigned int *)this + 12) = 0; /*0x4af55f*/
  *((unsigned int *)this + 13) = g_DDraw_ClipRect; /*0x4af568*/
  *((unsigned long long *)this + 7) = qword_8A0794; /*0x4af570*/
  *((unsigned int *)this + 16) = g_DDraw_ClipRect; /*0x4af585*/
  *((unsigned int *)this + 17) = qword_8A0794; /*0x4af58e*/
  v3 = HIDWORD(qword_8A0794); /*0x4af591*/
  *((unsigned int *)this + 20) = 0; /*0x4af597*/
  *((unsigned int *)this + 19) = 0; /*0x4af59a*/
  *((unsigned int *)this + 18) = v3; /*0x4af59d*/
  *((unsigned int *)this + 21) = 0; /*0x4af5a3*/
  *((unsigned int *)this + 22) = -1; /*0x4af5a6*/
  *((unsigned int *)this + 23) = -1; /*0x4af5a9*/
  *((unsigned char *)this + 96) = 0; /*0x4af5ac*/
  *((unsigned char *)this + 97) = 0; /*0x4af5af*/
  *((unsigned char *)this + 98) = 0; /*0x4af5b2*/
  *((unsigned char *)this + 99) = 0; /*0x4af5b5*/
  *((unsigned char *)this + 100) = 0; /*0x4af5b8*/
  *((unsigned char *)this + 101) = 1; /*0x4af5bb*/
  *((unsigned int *)this + 26) = 0; /*0x4af5bf*/
  *(unsigned int *)this->ILocomotion = (unsigned int)(&vt_DriveLocomotionClass); /*0x4af5c2*/
  *(unsigned int *)&(&this->ILocomotion)[4] = (unsigned int)(&vt_DriveLocomotionClass); /*0x4af5c8*/
  *((unsigned int *)this + 6) = (unsigned int)(&off_7E7E8C); /*0x4af5cf*/
  return (int)this->ILocomotion; /*0x4af5d8*/

}
} // namespace gamemd
// 0x4C54A0
namespace gamemd {
void * LocomotionClass::UpdateAll()
{

  wchar_t *result; // eax
  int i; // esi
  unsigned int *v3; // ecx

  result = (wchar_t *)dword_8A3880; /*0x4c54a0*/
  for ( i = dword_8A3880 - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v3 = (unsigned int *)*((unsigned int *)dword_8A3874 + i); /*0x4c54b3*/
    result = *(wchar_t **)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4c54be*/
    if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 416) >= v3[11] + v3[12] ) /*0x4c54c5*/
    {
      if ( v3 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (**)(unsigned int *, int))(*v3 + 32))(v3, 1); /*0x4c54cf*/
    }
  }
  return result; /*0x4c54d5*/

}
} // namespace gamemd
// 0x4CFA70
namespace gamemd {
int LocomotionClass::CheckBridgeBlock()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CFA70)
}
} // namespace gamemd
// 0x4DC760
namespace gamemd {
int LocomotionClass::GetSpeedMultiplier()
{

  int result; // eax

  result = this->u32_5D4; /*0x4dc760*/
  if ( result ) /*0x4dc768*/
    return result->u32_24; /*0x4dc76a*/
  return result; /*0x4dc77d*/

}
} // namespace gamemd
// 0x513C20
namespace gamemd {
int LocomotionClass::ProcessData()
{

  ((LocomotionClass*)this)->Init(); /*0x513c24*/
  *((unsigned int *)this + 6) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x513c34*/
  *((unsigned int *)this + 7) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1440); /*0x513c3d*/
  *((unsigned int *)this + 8) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1444); /*0x513c49*/
  *((unsigned int *)this + 9) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x513c51*/
  *((unsigned int *)this + 10) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1440); /*0x513c59*/
  *((unsigned int *)this + 11) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1444); /*0x513c64*/
  ((FrameSnapshot *)((FrameSnapshot *)this + 6))->InitMax(0); /*0x513c67*/
  *((unsigned int *)this + 18) = 0; /*0x513c6c*/
  *((unsigned int *)this + 20) = 0; /*0x513c6f*/
  *((unsigned int *)this + 22) = 0; /*0x513c72*/
  *((unsigned int *)this + 24) = 0; /*0x513c75*/
  *((unsigned int *)this + 19) = 0; /*0x513c78*/
  *((unsigned int *)this + 21) = 0; /*0x513c7b*/
  *((unsigned int *)this + 23) = 1072693248; /*0x513c7e*/
  *((unsigned int *)this + 25) = 0; /*0x513c85*/
  *((unsigned char *)this + 104) = 0; /*0x513c88*/
  *((unsigned int *)this + 27) = 0; /*0x513c8b*/
  *((unsigned char *)this + 112) = 0; /*0x513c8e*/
  *(unsigned int *)this->ILocomotion = (unsigned int)(&vt_HoverLocomotionClass); /*0x513c91*/
  *(unsigned int *)&(&this->ILocomotion)[4] = (unsigned int)(&vt_HoverLocomotionClass); /*0x513c97*/
  return (int)this->ILocomotion; /*0x513ca0*/

}
} // namespace gamemd
// 0x54AC40
namespace gamemd {
int LocomotionClass::Update(void *a1, void *a2, void *a3, void *a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54AC40)
}
} // namespace gamemd
// 0x55A6C0
namespace gamemd {
int LocomotionClass::Init()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A6C0)
}
} // namespace gamemd
// 0x55A6F0
namespace gamemd {
void LocomotionClass::Construct()
{

  *(unsigned int *)this->ILocomotion = (unsigned int)(&vt_LocomotionClass); /*0x55a6f0*/
  *(unsigned int *)&(&this->ILocomotion)[4] = (unsigned int)(&vt_LocomotionClass); /*0x55a6f6*/
  this->LinkedTo = 0; /*0x55a6fd*/

}
} // namespace gamemd
// 0x5172F0
namespace gamemd {
LocomotionClass * LocomotionClass::ProcessMove(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5172F0)
}
} // namespace gamemd
