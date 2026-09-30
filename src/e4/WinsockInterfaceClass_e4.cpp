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
WinsockInterfaceClass::WinsockInterfaceClass()
{

  char v2; // al
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  v2 = *((unsigned char *)this + 258152); /*0x7b1ab6*/
  *(unsigned int *)this = &vt_WinsockInterfaceClass; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync((SOCKET *)this); /*0x7b1ac6*/
    (*(void (**)(int))(*(unsigned int *)this + 4))(this); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    *((unsigned char *)this + 258152) = 0; /*0x7b1ad8*/
  }
  v3 = *(void **)((char *)this + 60); /*0x7b1ade*/
  *((unsigned int *)this + 14) = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1ae1*/
  if ( v3 && *((unsigned char *)this + 69) ) /*0x7b1aec*/
  {
    RA2_OPDEL(v3); /*0x7b1af2*/
    *((unsigned int *)this + 15) = 0; /*0x7b1afa*/
  }
  *((unsigned char *)this + 69) = 0; /*0x7b1afd*/
  *((unsigned int *)this + 16) = 0; /*0x7b1b00*/
  v4 = *(void **)((char *)this + 36); /*0x7b1b03*/
  *((unsigned int *)this + 8) = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1b06*/
  if ( v4 && *((unsigned char *)this + 45) ) /*0x7b1b11*/
  {
    RA2_OPDEL(v4); /*0x7b1b17*/
    *((unsigned int *)this + 9) = 0; /*0x7b1b1f*/
  }
  *((unsigned char *)this + 45) = 0; /*0x7b1b22*/
  *((unsigned int *)this + 10) = 0; /*0x7b1b25*/
  v5 = *(void **)((char *)this + 12); /*0x7b1b28*/
  *((unsigned int *)this + 2) = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1b2b*/
  if ( v5 && *((unsigned char *)this + 21) ) /*0x7b1b36*/
  {
    RA2_OPDEL(v5); /*0x7b1b3c*/
    *((unsigned int *)this + 3) = 0; /*0x7b1b44*/
  }
  *((unsigned char *)this + 21) = 0; /*0x7b1b47*/
  *((unsigned int *)this + 4) = 0; /*0x7b1b4a*/

}
// 0x7B2740
int WinsockInterfaceClass::Destru_vt13()
{

  return 0; /*0x7b2742*/

}
// 0x7B2750
int WinsockInterfaceClass::Destru_vt14(int a1)
{

  return 0; /*0x7b2752*/

}
// 0x7B2760
char WinsockInterfaceClass::Destru_vt15(int a1)
{

  return 0; /*0x7b2762*/

}
// 0x7B2770
int WinsockInterfaceClass::Destru_vt16(int a1, int a2, int a3, int a4)
{

  return 1; /*0x7b2775*/

}
// 0x7B2780
SOCKET * WinsockInterfaceClass::Destru_vt00(SOCKET * Block, char a2)
{

  char v3; // al
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  v3 = *((unsigned char *)Block + 258152); /*0x7b2786*/
  *Block = (SOCKET)&vt_WinsockInterfaceClass; /*0x7b278c*/
  if ( v3 ) /*0x7b2794*/
  {
    NetworkClass::UnregisterAsync(Block); /*0x7b2796*/
    (*(void (**)(SOCKET *))(*Block + 4))(Block); /*0x7b27a0*/
    WSACleanup(); /*0x7b27a3*/
    *((unsigned char *)Block + 258152) = 0; /*0x7b27a8*/
  }
  v4 = (void *)*(Block + 15); /*0x7b27ae*/
  *(Block + 14) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b27b1*/
  if ( v4 && *((unsigned char *)Block + 69) ) /*0x7b27bc*/
  {
    RA2_OPDEL(v4); /*0x7b27c2*/
    *(Block + 15) = 0; /*0x7b27ca*/
  }
  *((unsigned char *)Block + 69) = 0; /*0x7b27cd*/
  *(Block + 16) = 0; /*0x7b27d0*/
  v5 = (void *)*(Block + 9); /*0x7b27d3*/
  *(Block + 8) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b27d6*/
  if ( v5 && *((unsigned char *)Block + 45) ) /*0x7b27e1*/
  {
    RA2_OPDEL(v5); /*0x7b27e7*/
    *(Block + 9) = 0; /*0x7b27ef*/
  }
  *((unsigned char *)Block + 45) = 0; /*0x7b27f2*/
  *(Block + 10) = 0; /*0x7b27f5*/
  v6 = (void *)*(Block + 3); /*0x7b27f8*/
  *(Block + 2) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b27fb*/
  if ( v6 && *((unsigned char *)Block + 21) ) /*0x7b2806*/
  {
    RA2_OPDEL(v6); /*0x7b280c*/
    *(Block + 3) = 0; /*0x7b2814*/
  }
  *((unsigned char *)Block + 21) = 0; /*0x7b281b*/
  *(Block + 4) = 0; /*0x7b2820*/
  if ( (Block & 1) != 0 ) /*0x7b2823*/
    RA2_OPDEL(Block); /*0x7b2826*/
  return Block; /*0x7b2830*/

}