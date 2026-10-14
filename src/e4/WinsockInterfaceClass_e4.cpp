// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include <new>  // W20L4 T2 placement-new Constructor forwarding
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

// 0x7B1AB0 site-form Constructor supply (W20L4 T2; forwards to ctor def below)
namespace gamemd {
void WinsockInterfaceClass::Constructor(void *aP1) { new (aP1) WinsockInterfaceClass(); }

  char v2; // al
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  v2 = aP1->u32_3F068; /*0x7b1ab6*/
  *(unsigned int *)aP1 = &WinsockInterfaceClass::`vftable'; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync((SOCKET *)aP1); /*0x7b1ac6*/
    (*(void (**)(int))(*(unsigned int *)aP1 + 4))(aP1); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    *(unsigned char *)(aP1 + 258152) = 0; /*0x7b1ad8*/
  }
  v3 = *(void **)(aP1 + 60); /*0x7b1ade*/
  *(unsigned int *)(aP1 + 56) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1ae1*/
  if ( v3 && *(unsigned char *)(aP1 + 69) ) /*0x7b1aec*/
  {
    __3_YAXPAX_Z(v3); /*0x7b1af2*/
    *(unsigned int *)(aP1 + 60) = 0; /*0x7b1afa*/
  }
  *(unsigned char *)(aP1 + 69) = 0; /*0x7b1afd*/
  *(unsigned int *)(aP1 + 64) = 0; /*0x7b1b00*/
  v4 = *(void **)(aP1 + 36); /*0x7b1b03*/
  *(unsigned int *)(aP1 + 32) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1b06*/
  if ( v4 && *(unsigned char *)(aP1 + 45) ) /*0x7b1b11*/
  {
    __3_YAXPAX_Z(v4); /*0x7b1b17*/
    *(unsigned int *)(aP1 + 36) = 0; /*0x7b1b1f*/
  }
  *(unsigned char *)(aP1 + 45) = 0; /*0x7b1b22*/
  *(unsigned int *)(aP1 + 40) = 0; /*0x7b1b25*/
  v5 = *(void **)(aP1 + 12); /*0x7b1b28*/
  *(unsigned int *)(aP1 + 8) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1b2b*/
  if ( v5 && *(unsigned char *)(aP1 + 21) ) /*0x7b1b36*/
  {
    __3_YAXPAX_Z(v5); /*0x7b1b3c*/
    *(unsigned int *)(aP1 + 12) = 0; /*0x7b1b44*/
  }
  *(unsigned char *)(aP1 + 21) = 0; /*0x7b1b47*/
  *(unsigned int *)(aP1 + 16) = 0; /*0x7b1b4a*/

}
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
}
// 0x7B2780
SOCKET * WinsockInterfaceClass::Destru_vt00(SOCKET * Block, char a2)
{
  char v3; // al
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  v3 = *((unsigned char *)Block + 258152); /*0x7b2786*/
  Block->Socket = (int)&vt_WinsockInterfaceClass; /*0x7b278c*/
  if ( v3 ) /*0x7b2794*/
  {
    NetworkClass::UnregisterAsync(Block); /*0x7b2796*/
    (*(void (**)(WinsockInterfaceClass *))(Block->Socket + 4))(Block); /*0x7b27a0*/
    WSACleanup(); /*0x7b27a3*/
    *((unsigned char *)Block + 258152) = 0; /*0x7b27a8*/
  }
  v4 = (void *)*((unsigned int *)Block + 15); /*0x7b27ae*/
  *((unsigned int *)Block + 14) = &vt_VectorClass; /*0x7b27b1*/
  if ( v4 && *((unsigned char *)Block + 69) ) /*0x7b27bc*/
  {
    operator delete((void *)(v4)); /*0x7b27c2*/
    *((unsigned int *)Block + 15) = 0; /*0x7b27ca*/
  }
  *((unsigned char *)Block + 69) = 0; /*0x7b27cd*/
  *((unsigned int *)Block + 16) = 0; /*0x7b27d0*/
  v5 = (void *)*((unsigned int *)Block + 9); /*0x7b27d3*/
  *((unsigned int *)Block + 8) = &vt_VectorClass; /*0x7b27d6*/
  if ( v5 && *((unsigned char *)Block + 45) ) /*0x7b27e1*/
  {
    operator delete((void *)(v5)); /*0x7b27e7*/
    *((unsigned int *)Block + 9) = 0; /*0x7b27ef*/
  }
  *((unsigned char *)Block + 45) = 0; /*0x7b27f2*/
  *((unsigned int *)Block + 10) = 0; /*0x7b27f5*/
  v6 = (void *)*((unsigned int *)Block + 3); /*0x7b27f8*/
  Block->LocalAddress = (int)&vt_VectorClass; /*0x7b27fb*/
  if ( v6 && *((unsigned char *)Block + 21) ) /*0x7b2806*/
  {
    operator delete((void *)(v6)); /*0x7b280c*/
    *((unsigned int *)Block + 3) = 0; /*0x7b2814*/
  }
  *((unsigned char *)Block + 21) = 0; /*0x7b281b*/
  *((unsigned int *)Block + 4) = 0; /*0x7b2820*/
  if ( (a2 & 1) != 0 ) /*0x7b2823*/
    operator delete((void *)(Block)); /*0x7b2826*/
  return (SOCKET *)Block; /*0x7b2830*/
}