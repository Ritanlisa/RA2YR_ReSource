// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"

// 0x43A350
NeuronClass::NeuronClass()
{

  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x43a353*/
  *((unsigned int *)this + 9) = 0; /*0x43a358*/
  *((unsigned int *)this + 10) = 0; /*0x43a35f*/
  *((unsigned int *)this + 11) = 0; /*0x43a366*/
  *((unsigned int *)this + 12) = MEMORY[0xA8ED84]; /*0x43a372*/
  *(unsigned int *)this = &NeuronClass::`vftable'; /*0x43a375*/
  *((unsigned int *)this + 1) = &NeuronClass::`vftable'; /*0x43a37b*/
  *((unsigned int *)this + 2) = &NeuronClass::`vftable'; /*0x43a382*/
  *((unsigned int *)this + 3) = &vt_NeuronClass; /*0x43a389*/
  if ( MEMORY[0xB0F5E8] < MEMORY[0xB0F5E0] /*0x43a3c5*/
    || (MEMORY[0xB0F5E5] || !MEMORY[0xB0F5E0])
    && MEMORY[0xB0F5EC] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F5D8] + 8))(
         &MEMORY[0xB0F5D8],
         MEMORY[0xB0F5E0] + MEMORY[0xB0F5EC],
         0) )
  {
    v2 = MEMORY[0xB0F5E8]++; /*0x43a3d2*/
    *((unsigned int *)MEMORY[0xB0F5DC] + v2) = this; /*0x43a3e1*/
  }
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x43a41b*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v3 = MEMORY[0xB0F680]++; /*0x43a428*/
    *((unsigned int *)MEMORY[0xB0F674] + v3) = this; /*0x43a437*/
  }
  return this; /*0x43a43c*/

}
// 0x43A9C0
void * NeuronClass::Reset(char a2)
{

  int v3; // eax
  int v4; // eax
  unsigned int *v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &NeuronClass::`vftable'; /*0x43a9cd*/
  *(Block + 1) = &NeuronClass::`vftable'; /*0x43a9d3*/
  *(Block + 2) = &NeuronClass::`vftable'; /*0x43a9da*/
  *(Block + 3) = &vt_NeuronClass; /*0x43a9e1*/
  v6 = Block; /*0x43a9ef*/
  v3 = (*(int (**)(int *, unsigned int **))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x43a9f3*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x43aa0e*/
  {
    do /*0x43aa26*/
    {
      ++v3; /*0x43aa16*/
      *((unsigned int *)MEMORY[0xB0F674] + v3 - 1) = *((unsigned int *)MEMORY[0xB0F674] + v3); /*0x43aa1a*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x43aa26*/
  }
  v6 = Block; /*0x43aa38*/
  v4 = (*(int (**)(int *, unsigned int **))(MEMORY[0xB0F5D8] + 16))(&MEMORY[0xB0F5D8], &v6); /*0x43aa3c*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F5E8] && v4 < --MEMORY[0xB0F5E8] ) /*0x43aa57*/
  {
    do /*0x43aa6f*/
    {
      ++v4; /*0x43aa5f*/
      *((unsigned int *)MEMORY[0xB0F5DC] + v4 - 1) = *((unsigned int *)MEMORY[0xB0F5DC] + v4); /*0x43aa63*/
    }
    while ( v4 < MEMORY[0xB0F5E8] ); /*0x43aa6f*/
  }
  AbstractClass::DTOR(Block); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    __3_YAXPAX_Z(Block); /*0x43aa80*/
  return (NeuronClass *)Block; /*0x43aa8a*/

}
// 0x43AB20
namespace gamemd {
int NeuronClass_25::Update(int a2, void *a4 = 0, void *a3 = 0, void *a1 = 0)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x43ab2a*/

}
} // namespace gamemd

// 0x43AB30
namespace gamemd {
char NeuronClass_25::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x43ab32*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x43ab3d*/
  {
    v3 = 0; /*0x43ab3f*/
    if ( v2 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x43ab45*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x43ab4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x43ab54*/
    {
      ++v3; /*0x43ab56*/
      ++v4; /*0x43ab57*/
      if ( v3 >= v2 ) /*0x43ab5c*/
        return 1; /*0x43ab5c*/
    }
  }
  return 0; /*0x43ab5e*/

}
} // namespace gamemd

// 0x43AB70
namespace gamemd {
char NeuronClass_25::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x43ab9e*/
    *((unsigned char *)this + 12) = 1; /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x43abb5*/
      {
        v6 = *((unsigned int *)this + 2); /*0x43abbc*/
        if ( a2 < v6 ) /*0x43abc1*/
          v6 = a2; /*0x43abc3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( *((unsigned char *)this + 13) ) /*0x43abdb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x43abe6*/
          *((unsigned int *)this + 1) = 0; /*0x43abee*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x43abf7*/
      *((unsigned int *)this + 2) = a2; /*0x43abff*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }

}
} // namespace gamemd

// 0x43AC20
namespace gamemd {
int NeuronClass_25::ddtor(int a2, void *a4 = 0, void *a3 = 0, void *a1 = 0)
{

  if ( *(unsigned int *)(a2 + 4) && *(unsigned char *)(a2 + 13) ) /*0x43ac2d*/
  {
    __3_YAXPAX_Z(*(void **)(a2 + 4)); /*0x43ac33*/
    *(unsigned int *)(a2 + 4) = 0; /*0x43ac3b*/
  }
  *(unsigned char *)(a2 + 13) = 0; /*0x43ac3e*/
  *(unsigned int *)(a2 + 8) = 0; /*0x43ac41*/

}
} // namespace gamemd

// 0x43AC50
namespace gamemd {
int NeuronClass_25::Activate(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  v3 = *((unsigned int *)this + 2); /*0x43ac5e*/
  result = 0; /*0x43ac61*/
  if ( v3 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= v3 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/

}
} // namespace gamemd

// 0x43AC90
namespace gamemd {
unsigned int NeuronClass_25::Fire(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x43ac90*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/

}
} // namespace gamemd

// 0x43ACB0
namespace gamemd {
VectorClass_flat * NeuronClass_25::QueryInterface(char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x43acb3*/
  *Block = &vt_VectorClass_NeuronClass; /*0x43acb6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x43acc0*/
  {
    __3_YAXPAX_Z(v3); /*0x43acc8*/
    *(Block + 1) = 0; /*0x43acd0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x43acdb*/
  *(Block + 2) = 0; /*0x43ace1*/
  if ( (a2 & 1) != 0 ) /*0x43ace8*/
    __3_YAXPAX_Z(Block); /*0x43aceb*/
  return (VectorClass *)Block; /*0x43acf5*/

}
} // namespace gamemd
