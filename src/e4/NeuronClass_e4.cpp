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
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/NukeFlash_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"

// 0x43A350
namespace gamemd {  // G42.18c ns repair
NeuronClass::NeuronClass()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x43A350)
}
}  // G42.18c ns repair
// 0x43A9C0
namespace gamemd {  // G42.18c ns repair
void * NeuronClass::Reset(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x43A9C0)
}
}  // G42.18c ns repair
// 0x43AB20
namespace gamemd {
int NeuronClass_25::Update(int a2, void *a2_2, void *a3_1, void *a4_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x43ab2a*/

}
} // namespace gamemd

// 0x43AB30
namespace gamemd {
char NeuronClass_25::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x43ab32*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x43ab3d*/
  {
    v3 = 0; /*0x43ab3f*/
    if ( m_8 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x43ab45*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x43ab4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x43ab54*/
    {
      ++v3; /*0x43ab56*/
      ++v4; /*0x43ab57*/
      if ( v3 >= m_8 ) /*0x43ab5c*/
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
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x43ab9e*/
    LOBYTE(this->m_C) = 1; /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x43abb5*/
      {
        m_8 = this->m_8; /*0x43abbc*/
        if ( a2 < m_8 ) /*0x43abc1*/
          m_8 = a2; /*0x43abc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( BYTE1(this->m_C) ) /*0x43abdb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x43abe6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x43abee*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x43abf7*/
      this->m_8 = a2; /*0x43abff*/
      BYTE1(this->m_C) = a3 == 0; /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }

}
} // namespace gamemd

// 0x43AC20
namespace gamemd {
int NeuronClass_25::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x43ac2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x43ac33*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x43ac3b*/
  }
  BYTE1(this->m_C) = 0; /*0x43ac3e*/
  this->m_8 = 0; /*0x43ac41*/

}
} // namespace gamemd

// 0x43AC50
namespace gamemd {
int NeuronClass_25::Activate(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  m_8 = this->m_8; /*0x43ac5e*/
  result = 0; /*0x43ac61*/
  if ( m_8 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= m_8 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/

}
} // namespace gamemd

// 0x43AC90
namespace gamemd {
unsigned int NeuronClass_25::Fire(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x43ac90*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/

}
} // namespace gamemd

// 0x43ACB0
namespace gamemd {
VectorClass_flat * NeuronClass_25::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x43ACB0)
}
} // namespace gamemd
