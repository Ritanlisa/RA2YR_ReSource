// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"

// 0x7B1AB0
namespace gamemd {  // G42.18c ns repair
WinsockInterfaceClass::WinsockInterfaceClass()
{

  char v2; // al
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  v2 = *((unsigned char *)this + 258152); /*0x7b1ab6*/
  *(unsigned int *)this = (unsigned int)(&vt_WinsockInterfaceClass); /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    ((NetworkClass*)(SOCKET *)this)->UnregisterAsync(); /*0x7b1ac6*/
    (*(void (**)(int))(*(unsigned int *)this + 4))((int)this); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    *((unsigned char *)this + 258152) = 0; /*0x7b1ad8*/
  }
  v3 = *(void **)((char *)this + 60); /*0x7b1ade*/
  *((unsigned int *)this + 14) = (unsigned int)(&vt_VectorClass); /*0x7b1ae1*/
  if ( v3 && *((unsigned char *)this + 69) ) /*0x7b1aec*/
  {
    __3_YAXPAX_Z(v3); /*0x7b1af2*/
    *((unsigned int *)this + 15) = 0; /*0x7b1afa*/
  }
  *((unsigned char *)this + 69) = 0; /*0x7b1afd*/
  *((unsigned int *)this + 16) = 0; /*0x7b1b00*/
  v4 = *(void **)((char *)this + 36); /*0x7b1b03*/
  *((unsigned int *)this + 8) = (unsigned int)(&vt_VectorClass); /*0x7b1b06*/
  if ( v4 && *((unsigned char *)this + 45) ) /*0x7b1b11*/
  {
    __3_YAXPAX_Z(v4); /*0x7b1b17*/
    *((unsigned int *)this + 9) = 0; /*0x7b1b1f*/
  }
  *((unsigned char *)this + 45) = 0; /*0x7b1b22*/
  *((unsigned int *)this + 10) = 0; /*0x7b1b25*/
  v5 = *(void **)((char *)this + 12); /*0x7b1b28*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_VectorClass); /*0x7b1b2b*/
  if ( v5 && *((unsigned char *)this + 21) ) /*0x7b1b36*/
  {
    __3_YAXPAX_Z(v5); /*0x7b1b3c*/
    *((unsigned int *)this + 3) = 0; /*0x7b1b44*/
  }
  *((unsigned char *)this + 21) = 0; /*0x7b1b47*/
  *((unsigned int *)this + 4) = 0; /*0x7b1b4a*/

}
}  // G42.18c ns repair
// 0x7B2740
namespace gamemd {  // G42.18c ns repair
int WinsockInterfaceClass::Destru_vt13()
{

  return 0; /*0x7b2742*/

}
}  // G42.18c ns repair
// 0x7B2750
namespace gamemd {  // G42.18c ns repair
int WinsockInterfaceClass::Destru_vt14(int a1)
{

  return 0; /*0x7b2752*/

}
}  // G42.18c ns repair
// 0x7B2760
namespace gamemd {  // G42.18c ns repair
char WinsockInterfaceClass::Destru_vt15(int a1)
{

  return 0; /*0x7b2762*/

}
}  // G42.18c ns repair
// 0x7B2770
namespace gamemd {  // G42.18c ns repair
int WinsockInterfaceClass::Destru_vt16(int a1, int a2, int a3, int a4)
{

  return 1; /*0x7b2775*/

}
}  // G42.18c ns repair
// 0x7B2780
SOCKET * WinsockInterfaceClass::Destru_vt00(SOCKET * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B2780)
}