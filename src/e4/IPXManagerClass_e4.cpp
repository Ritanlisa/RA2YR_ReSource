// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/IPXManagerClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/IPXInterfaceClass_e4.hpp"

// 0x540D80
namespace gamemd {
int IPXManagerClass::sendPacket(int a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax

  v4 = *(&this->Initialized9); /*0x540d80*/
  if ( v4 ) /*0x540d93*/
  {
    v4->q028 = a2; /*0x540d95*/
    *(unsigned int *)(*(&this->Initialized9) + 44) = a3; /*0x540d9b*/
    *(unsigned int *)(*(&this->Initialized9) + 48) = a4; /*0x540da1*/
  }
  result = *(&this->q0080); /*0x540da4*/
  if ( result ) /*0x540da9*/
  {
    *(unsigned int *)(result + 40) = a2; /*0x540dab*/
    result = *(&this->q0080); /*0x540dae*/
    *(unsigned int *)(result + 44) = a3; /*0x540db1*/
    *(unsigned int *)(*(&this->q0080) + 48) = a4; /*0x540db7*/
  }
  return result; /*0x540dba*/
}
} // namespace gamemd
// 0x541040
namespace gamemd {
int IPXManagerClass::send(int a2)
{
  IPXManagerClass * v2;
  IPXManagerClass * result;
  IPXManagerClass *i; // ecx

  v2 = (gamemd::IPXManagerClass *)((int)((gamemd::IPXManagerClass *)(this->u32_44)));
  result = (int)((gamemd::IPXManagerClass *)(0));
  if ( v2 <= 0 ) /*0x541049*/
    return -1; /*0x541061*/
  for ( i = &this->Active; *(unsigned int *)(i->Socket + 100) != a2; i = (IPXManagerClass *)((char *)i + 4) ) /*0x54104f*/
  {
    if ( ++result >= v2 ) /*0x54105f*/
      return -1; /*0x54105f*/
  }
  return result; /*0x541064*/
}
} // namespace gamemd
// 0x541070
namespace gamemd {
int IPXManagerClass::receivePacket(int a2)
{
  int v2; // edx
  int result; // eax
  IPXManagerClass *v4; // esi

  v2 = this->u32_44; /*0x541070*/
  result = 0; /*0x541074*/
  if ( v2 <= 0 ) /*0x54107d*/
  {
  LABEL_5:
    if ( a2 == this->u32_50 ) /*0x541091*/
    {
      return -4; /*0x541095*/
    }
    else if ( a2 == this->u32_4C ) /*0x5410a0*/
    {
      return -3; /*0x5410a4*/
    }
    else
    {
      return (a2 != this->u32_48) - 2; /*0x5410b6*/
    }
  }
  else
  {
    v4 = (gamemd::IPXManagerClass *)(&this->Active);
    while ( v4->Socket != a2 ) /*0x541084*/
    {
      ++result; /*0x541086*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x541087*/
      if ( result >= v2 ) /*0x54108c*/
        goto LABEL_5; /*0x54108c*/
    }
  }
  return result; /*0x541093*/
}
} // namespace gamemd
// 0x5415F0
namespace gamemd {
int IPXManagerClass::ddtor(int a2, int a3, unsigned int * v10)
{
  void * v5;
  void * v6;
  void * v7;
  unsigned int * v8;
  int v9; // edx
  int v10; // edi
  void * v11;
  int v13; // [esp+10h] [ebp-4h]

  if ( !this->Initialized ) /*0x5415f7*/
    return 0; /*0x5415f7*/
  if ( !this->Active ) /*0x5415fe*/
    return 0; /*0x5415fe*/
  v5 = this->q044; /*0x541605*/
  if ( !v5 ) /*0x54160c*/
    return 0; /*0x54160c*/
  if ( this->curConnIndex >= v5 ) /*0x541611*/
    this->curConnIndex = 0; /*0x541613*/
  v13 = 0; /*0x541618*/
  if ( v5 <= 0 ) /*0x54161c*/
    return 0; /*0x541661*/
  while ( 1 ) /*0x54162b*/
  {
    v6 = (int)((void *)(*(unsigned int *)(&this->q010 * this->curConnIndex + 40)));
    v7 = (void *)((int)((void *)((*(int (__thiscall **)(int, int, int))(*(unsigned int *)v6 + 16))(v6, a2, a3))));
    v8 = (int)((unsigned int *)(this->curConnIndex));
    v9 = (void *)(*(unsigned int *)(&this->q010 * v8++ + 40));
    v10 = (unsigned int *)((void *)(*(unsigned int *)(v9 + 100)));
    v11 = (void *)((unsigned int)(this->q044));
    this->curConnIndex = (unsigned int)(v8);
    if ( v8 >= v11 ) /*0x541647*/
      this->curConnIndex = 0; /*0x541649*/
    if ( v7 ) /*0x541652*/
      break; /*0x541652*/
    if ( ++v13 >= v11 ) /*0x54165f*/
      return 0; /*0x54165f*/
  }
  *v10 = (unsigned int)(v10);
  return 1; /*0x541661*/
}
} // namespace gamemd
// 0x543040
namespace gamemd {
void IPXManagerClass::StubReturnFalse(int a1, int a2)
{
  ; /*0x543040*/
}
} // namespace gamemd
// 0x5430E0
namespace gamemd {
IPXManagerClass * IPXManagerClass::QueryInterface(char a2)
{
  IPXManagerClass::processPacket(); /*0x5430e3*/
  if ( (a2 & 1) != 0 ) /*0x5430ed*/
    RA2_OPDEL(); /*0x5430f0*/
  return (char *)this; /*0x5430fa*/
}
} // namespace gamemd