// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_7ACB90_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"

// 0x439110
namespace gamemd {
int Stream::FlushAndReset()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x439110)
}
} // namespace gamemd
// 0x49FB70
namespace gamemd {
int Stream::ReadIntArray(int a2)
{

  int v2; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx

  v2 = a2; /*0x49fb72*/
  result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 16))( /*0x49fb84*/
             a2,
             (int *)&this->Stream_field_10,
             4,
             0);
  if ( result >= 0 ) /*0x49fb89*/
  {
    v5 = *(unsigned int *)v2; /*0x49fb8e*/
    a2 =(int)this->a2; /*0x49fb9a*/
    result = (*(int (**)(int, int *, int, unsigned int))(v5 + 16))(v2, &a2, 4, 0); /*0x49fb9e*/
    if ( result >= 0 ) /*0x49fba3*/
    {
      v6 = 0; /*0x49fba9*/
      if ( a2 <= 0 ) /*0x49fbad*/
      {
        return 0; /*0x49fbcd*/
      }
      else
      {
        while ( 1 ) /*0x49fbbd*/
        {
          result = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)v2 + 16))( /*0x49fbbd*/
                     v2,
                     (int)this->Stream_field_04 + 4 * v6,
                     4,
                     0);
          if ( result < 0 ) /*0x49fbc2*/
            break; /*0x49fbc2*/
          if ( ++v6 >= a2 ) /*0x49fbcb*/
            return 0; /*0x49fbcb*/
        }
      }
    }
  }
  return result; /*0x49fbcf*/

}
} // namespace gamemd
// 0x67A4A0
namespace gamemd {
int Stream::WriteIntArray(TechnoTypeClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67A4A0)
}
} // namespace gamemd
// 0x759260
namespace gamemd {
void * Stream::InitializeBinkAudio(const char * a1, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759260)
}
} // namespace gamemd
// 0x45A050
namespace gamemd {
int Stream::GetChecked()
{

  if ( !this->m_Stream ) /*0x45a053*/
    WinAPI::Wrapper(-2147467261); /*0x45a05d*/
  return (int)this->m_Stream->__pad_0; /*0x45a064*/

}
} // namespace gamemd