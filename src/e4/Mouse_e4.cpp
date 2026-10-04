// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/MoveFeedback_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Movement_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/MovementAI_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/E4Recv_4AF2A0_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/NetworkGameSetup_e4.hpp"
#include "e4/classes/CoordList_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x4A8BF0
namespace gamemd {
int Mouse::SetBounds(const void *aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A8BF0)
}
}
// 0x5BDC80
namespace gamemd {
int Mouse::SetCursor(int aP1, char aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BDC80)
}
}
// 0x6938C0
namespace gamemd {
HWND Mouse::ReleaseCapture()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6938C0)
}
}
// 0x7B93F0
namespace gamemd {
void Mouse::DrawCursor(int * aP1, int aP2, int a4)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B93F0)
}
}
// 0x53EC90
namespace gamemd {
SHORT Mouse::GetKeyState(uint8_t vKey)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x53EC90)
}
} // namespace gamemd

// 0x54F5C0
namespace gamemd {
BOOL Mouse::IsButtonDown(unsigned char a1)
{

  uint8_t v1; // si

  v1 = a1; /*0x54f5c5*/
  if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 ) /*0x54f5e2*/
    v1 = 2 - (a1 != 1); /*0x54f5eb*/
  return Mouse::GetKeyState(v1) != 0; /*0x54f600*/

}
} // namespace gamemd

// 0x5BC400
namespace gamemd {
HWND Mouse::HideWindow()
{

  HWND result; // eax

  result = (HWND)(dword_ABF240);
  byte_ABF239 = 0; /*0x5bc409*/
  if ( dword_ABF240 ) /*0x5bc40f*/
  {
    byte_ABF23A = 0; /*0x5bc413*/
    return (HWND)ShowWindow((HWND)(dword_ABF240), 0); /*0x5bc419*/
  }
  return result; /*0x5bc41f*/

}
} // namespace gamemd
