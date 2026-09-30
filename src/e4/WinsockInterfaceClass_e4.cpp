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

    v2 = *((unsigned char *)this + 1032608);
  *(unsigned int *)this = (void*)&WinsockInterfaceClass_vftable; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync(); /*0x7b1ac6*/
        (*(void (**)(int))(*(unsigned int *)this + 4))(this);
    WSACleanup(); /*0x7b1ad3*/
        *((unsigned char *)this + 1032608) = 0;
  }
    v3 = *(void **)((char *)this + 240);
    *((unsigned int *)this + 224) = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v3 && *((unsigned char *)this + 276) )
  {
    RA2_OPDEL(v3); /*0x7b1af2*/
        *((unsigned int *)this + 240) = 0;
  }
    *((unsigned char *)this + 276) = 0;
    *((unsigned int *)this + 256) = 0;
    v4 = *(void **)((char *)this + 144);
    *((unsigned int *)this + 128) = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v4 && *((unsigned char *)this + 180) )
  {
    RA2_OPDEL(v4); /*0x7b1b17*/
        *((unsigned int *)this + 144) = 0;
  }
    *((unsigned char *)this + 180) = 0;
    *((unsigned int *)this + 160) = 0;
    v5 = *(void **)((char *)this + 48);
    *((unsigned int *)this + 32) = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v5 && *((unsigned char *)this + 84) )
  {
    RA2_OPDEL(v5); /*0x7b1b3c*/
        *((unsigned int *)this + 48) = 0;
  }
    *((unsigned char *)this + 84) = 0;
    *((unsigned int *)this + 64) = 0;
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

    v3 = *((unsigned char *)Block + 258152);
    *Block = (SOCKET)&vt_WinsockInterfaceClass;
  if ( v3 ) /*0x7b2794*/
  {
    NetworkClass::UnregisterAsync(); /*0x7b2796*/
        (*(void (**)(SOCKET *))(*Block + 4))(Block);
    WSACleanup(); /*0x7b27a3*/
        *((unsigned char *)Block + 258152) = 0;
  }
    v4 = (void *)*(Block + 15);
    *(Block + 14) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v4 && *((unsigned char *)Block + 69) )
  {
    RA2_OPDEL(v4); /*0x7b27c2*/
        *(Block + 15) = 0;
  }
    *((unsigned char *)Block + 69) = 0;
    *(Block + 16) = 0;
    v5 = (void *)*(Block + 9);
    *(Block + 8) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v5 && *((unsigned char *)Block + 45) )
  {
    RA2_OPDEL(v5); /*0x7b27e7*/
        *(Block + 9) = 0;
  }
    *((unsigned char *)Block + 45) = 0;
    *(Block + 10) = 0;
    v6 = (void *)*(Block + 3);
    *(Block + 2) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v6 && *((unsigned char *)Block + 21) )
  {
    RA2_OPDEL(v6); /*0x7b280c*/
        *(Block + 3) = 0;
  }
    *((unsigned char *)Block + 21) = 0;
    *(Block + 4) = 0;
  if ( (a2 & 1) != 0 ) /*0x7b2823*/
    RA2_OPDEL(); /*0x7b2826*/
  return (SOCKET *)this; /*0x7b2830*/
}