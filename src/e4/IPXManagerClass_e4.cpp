// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
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
namespace gamemd {  // G42.18 ns repair
int IPXManagerClass::sendPacket(int a2, int a3, int a4)
{

  int v4; // eax
  v4 = this->u32_4C; /*0x540d80*/
  if ( v4 ) /*0x540d93*/
  {
    v4->u32_28 = a2; /*0x540d95*/
    *(unsigned int *)(this->u32_4C + 44) = a3; /*0x540d9b*/
    *(unsigned int *)(this->u32_4C + 48) = a4; /*0x540da1*/
  }
  int result; // eax
  result = this->u32_50; /*0x540da4*/
  if ( result ) /*0x540da9*/
  {
    result->u8_28 = a2; /*0x540dab*/
    result = this->u32_50; /*0x540dae*/
    result->u32_2C = a3; /*0x540db1*/
    *(unsigned int *)(this->u32_50 + 48) = a4; /*0x540db7*/
  }
  return result; /*0x540dba*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x541040
namespace gamemd {
int IPXManagerClass::send(int a2)
{

  int v2; // edx
  v2 = this->u32_44; /*0x541040*/
  int result; // eax
  result = 0; /*0x541043*/
  if ( v2 <= 0 ) /*0x541049*/
    return -1; /*0x541061*/
  IPXManagerClass *i; // ecx
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
    v4 = (gamemd::IPXManagerClass *)(&this->Active); /*0x54107f*/
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
int IPXManagerClass::ddtor(int a2, int a3, unsigned int * v10)  // G42.40f: param renamed back (was colliding with local v10)
{
  int v10; // edi

  if ( !this->Initialized ) /*0x5415f7*/
    return 0; /*0x5415f7*/
  if ( !this->Active ) /*0x5415fe*/
    return 0; /*0x5415fe*/
  int v5; // eax
  v5 = this->u32_44; /*0x541605*/
  if ( !v5 ) /*0x54160c*/
    return 0; /*0x54160c*/
  if ( this->u32_54 >= v5 ) /*0x541611*/
    this->u32_54 = 0; /*0x541613*/
  int v13; // [esp+10h] [ebp-4h]
  v13 = 0; /*0x541618*/
  if ( v5 <= 0 ) /*0x54161c*/
    return 0; /*0x541661*/
  while ( 1 ) /*0x54162b*/
  {
  int v6; // ecx
    v6 = *((unsigned int *)this + this->u32_54 + 10); /*0x54162b*/
  int v7; // eax
    v7 = (*(int (__thiscall **)(int, int, int))(*(unsigned int *)v6 + 16))(v6, a2, a3); /*0x541631*/
  int v8; // ecx
    v8 = this->u32_54; /*0x541634*/
  int v9; // edx
    v9 = *((unsigned int *)this + v8++ + 10); /*0x541637*/
    v10 = (unsigned int *)(*(unsigned int *)(v9 + 100)); /*0x54163c*/
  int v11; // edx
    v11 = this->u32_44; /*0x54163f*/
    this->u32_54 = v8; /*0x541644*/
    if ( v8 >= v11 ) /*0x541647*/
      this->u32_54 = 0; /*0x541649*/
    if ( v7 ) /*0x541652*/
      break; /*0x541652*/
    if ( ++v13 >= v11 ) /*0x54165f*/
      return 0; /*0x54165f*/
  }
  *v10 = (unsigned int)(v10); /*0x54166f*/
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
IPXManagerClass * IPXManagerClass::QueryInterface(char * Block, char a2)
{
  IPXManagerClass::processPacket((char *)Block); /*0x5430e3*/
  if ( (a2 & 1) != 0 ) /*0x5430ed*/
    operator delete((void *)(Block)); /*0x5430f0*/
  return (gamemd::IPXManagerClass *)((char *)Block); /*0x5430fa*/
}
} // namespace gamemd