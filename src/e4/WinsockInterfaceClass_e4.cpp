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

  v2 = this->u32_3F068; /*0x7b1ab6*/
  *(unsigned int *)this = (void*)&WinsockInterfaceClass_vftable; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync(); /*0x7b1ac6*/
    (*(void (**)(int))(this->u32_4)(this); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    this->u32_3F068 = 0; /*0x7b1ad8*/
  }
  v3 = *(void **)(&this->BoundPort0); /*0x7b1ade*/
  this->u32_38 = (void*)&VectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b1ae1*/
  if ( v3 && this->u32_45 ) /*0x7b1aec*/
  {
    RA2_OPDEL(v3); /*0x7b1af2*/
    this->u32_3C = 0; /*0x7b1afa*/
  }
  this->u32_45 = 0; /*0x7b1afd*/
  this->u32_40 = 0; /*0x7b1b00*/
  v4 = this->u32_24; /*0x7b1b03*/
  this->u32_8 = (void*)&VectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b1b06*/
  if ( v4 && this->u32_2D ) /*0x7b1b11*/
  {
    RA2_OPDEL(v4); /*0x7b1b17*/
    this->u32_24 = 0; /*0x7b1b1f*/
  }
  this->u32_2D = 0; /*0x7b1b22*/
  this->u32_28 = 0; /*0x7b1b25*/
  v5 = *(void **)(&this->u32_42); /*0x7b1b28*/
  this->u32_8 = (void*)&VectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b1b2b*/
  if ( v5 && this->u32_15 ) /*0x7b1b36*/
  {
    RA2_OPDEL(v5); /*0x7b1b3c*/
    this->u32_C = 0; /*0x7b1b44*/
  }
  this->u32_15 = 0; /*0x7b1b47*/
  this->u32_4 = 0; /*0x7b1b4a*/
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
SOCKET * WinsockInterfaceClass::Destru_vt00(char a2)
{
  char v3; // al
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  v3 = this->u32_3F068; /*0x7b2786*/
  this->Socket = (int)&WinsockInterfaceClass_vftable; /*0x7b278c*/
  if ( v3 ) /*0x7b2794*/
  {
    NetworkClass::UnregisterAsync(); /*0x7b2796*/
    (*(void (**)(WinsockInterfaceClass *))(this->Socket + 4))(this); /*0x7b27a0*/
    WSACleanup(); /*0x7b27a3*/
    this->u32_3F068 = 0; /*0x7b27a8*/
  }
  v4 = (void *)this->u32_3C; /*0x7b27ae*/
  this->u32_38 = (void*)&VectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b27b1*/
  if ( v4 && this->u32_45 ) /*0x7b27bc*/
  {
    RA2_OPDEL(v4); /*0x7b27c2*/
    this->u32_3C = 0; /*0x7b27ca*/
  }
  this->u32_45 = 0; /*0x7b27cd*/
  this->u32_40 = 0; /*0x7b27d0*/
  v5 = (void *)this->u32_24; /*0x7b27d3*/
  *(void **)&this->u32_8 = (void*)&VectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b27d6*/
  if ( v5 && this->u32_2D ) /*0x7b27e1*/
  {
    RA2_OPDEL(v5); /*0x7b27e7*/
    this->u32_24 = 0; /*0x7b27ef*/
  }
  this->u32_2D = 0; /*0x7b27f2*/
  this->u32_28 = 0; /*0x7b27f5*/
  v6 = (void *)this->u32_C; /*0x7b27f8*/
  this->LocalAddress = (int)&VectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b27fb*/
  if ( v6 && this->u32_15 ) /*0x7b2806*/
  {
    RA2_OPDEL(v6); /*0x7b280c*/
    this->u32_C = 0; /*0x7b2814*/
  }
  this->u32_15 = 0; /*0x7b281b*/
  this->u32_4 = 0; /*0x7b2820*/
  if ( (a2 & 1) != 0 ) /*0x7b2823*/
    RA2_OPDEL(); /*0x7b2826*/
  return (SOCKET *)this; /*0x7b2830*/
}