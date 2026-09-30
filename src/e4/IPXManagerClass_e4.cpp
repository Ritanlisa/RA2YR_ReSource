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

  v4 = *((unsigned int *)this + 19); /*0x540d80*/
  if ( v4 ) /*0x540d93*/
  {
    *(unsigned int *)(v4 + 40) = a2; /*0x540d95*/
    *(unsigned int *)(*((unsigned int *)this + 19) + 44) = a3; /*0x540d9b*/
    *(unsigned int *)(*((unsigned int *)this + 19) + 48) = a4; /*0x540da1*/
  }
  result = *((unsigned int *)this + 20); /*0x540da4*/
  if ( result ) /*0x540da9*/
  {
    *(unsigned int *)(result + 40) = a2; /*0x540dab*/
    result = *((unsigned int *)this + 20); /*0x540dae*/
    *(unsigned int *)(result + 44) = a3; /*0x540db1*/
    *(unsigned int *)(*((unsigned int *)this + 20) + 48) = a4; /*0x540db7*/
  }
  return result; /*0x540dba*/

}
} // namespace gamemd
// 0x541040
namespace gamemd {
int IPXManagerClass::send(int a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = (unsigned int *)(*((char *)this + 17));
  result = 0; /*0x541043*/
  if ( v2 <= 0 ) /*0x541049*/
    return -1; /*0x541061*/
  for ( i = (char *)this + 10; *(unsigned int *)(*i + 100) != a2; ++i ) /*0x54104f*/
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
  unsigned int *v4; // esi

  v2 = *((unsigned int *)this + 17); /*0x541070*/
  result = 0; /*0x541074*/
  if ( v2 <= 0 ) /*0x54107d*/
  {
LABEL_5:
    if ( a2 == *((unsigned int *)this + 20) ) /*0x541091*/
    {
      return -4; /*0x541095*/
    }
    else if ( a2 == *((unsigned int *)this + 19) ) /*0x5410a0*/
    {
      return -3; /*0x5410a4*/
    }
    else
    {
      return (a2 != *((unsigned int *)this + 18)) - 2; /*0x5410b6*/
    }
  }
  else
  {
    v4 = (unsigned int *)this + 10; /*0x54107f*/
    while ( *v4 != a2 ) /*0x541084*/
    {
      ++result; /*0x541086*/
      ++v4; /*0x541087*/
      if ( result >= v2 ) /*0x54108c*/
        goto LABEL_5; /*0x54108c*/
    }
  }
  return result; /*0x541093*/

}
} // namespace gamemd
// 0x5415F0
namespace gamemd {
int IPXManagerClass::ddtor(int a2, int a3, unsigned int * a4)
{

  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // edx
  int v13; // [esp+10h] [ebp-4h]

  if ( !*((unsigned char *)this + 4) ) /*0x5415f7*/
    return 0; /*0x5415f7*/
  if ( !*((unsigned char *)this + 5) ) /*0x5415fe*/
    return 0; /*0x5415fe*/
  v5 = *((unsigned int *)this + 17); /*0x541605*/
  if ( !v5 ) /*0x54160c*/
    return 0; /*0x54160c*/
  if ( *((unsigned int *)this + 21) >= v5 ) /*0x541611*/
    *((unsigned int *)this + 21) = 0; /*0x541613*/
  v13 = 0; /*0x541618*/
  if ( v5 <= 0 ) /*0x54161c*/
    return 0; /*0x541661*/
  while ( 1 ) /*0x54162b*/
  {
    v6 = this->connTable[this->curConnIndex]; /*0x54162b*/
    v7 = (*(int (**)(int, int, int))(*(unsigned int *)v6 + 16))(v6, a2, a3); /*0x541631*/
    v8 = *((unsigned int *)this + 21); /*0x541634*/
    v9 = this-((unsigned int *)(>connTable))[v8++]; /*0x541637*/
    v10 = *(unsigned int *)(v9 + 100); /*0x54163c*/
    v11 = *((unsigned int *)this + 17); /*0x54163f*/
    *((unsigned int *)this + 21) = v8; /*0x541644*/
    if ( v8 >= v11 ) /*0x541647*/
      *((unsigned int *)this + 21) = 0; /*0x541649*/
    if ( v7 ) /*0x541652*/
      break; /*0x541652*/
    if ( ++v13 >= v11 ) /*0x54165f*/
      return 0; /*0x54165f*/
  }
  *a4 = v10; /*0x54166f*/
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

  IPXManagerClass::processPacket(Block); /*0x5430e3*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5430ed*/
    RA2_OPDEL(Block); /*0x5430f0*/
  return (IPXManagerClass *)Block; /*0x5430fa*/

}
} // namespace gamemd