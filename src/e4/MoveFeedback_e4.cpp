// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/MoveFeedback_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Movement_e4.hpp"

// 0x7327D0
namespace gamemd {
int MoveFeedback::ProcessCommand()
{

  char v1; // bl
  int Height; // eax
  unsigned int *v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // ebp
  int i; // edi
  int v14; // ecx
  char v16; // [esp+13h] [ebp-9h]
  int v18; // [esp+18h] [ebp-4h] BYREF

  v1 = g_MoveFeedback; /*0x7327d9*/
  v16 = g_MoveFeedback; /*0x7327e8*/
  g_MoveFeedback = 0; /*0x7327ec*/
  if ( MEMORY[0xB0FE64] ) /*0x7327f5*/
  {
    Height = (int)__2_YAPAXI_Z(0x18u); /*0x7327fb*/
    v3 = (unsigned int *)Height; /*0x732800*/
    v4 = 0; /*0x732802*/
    if ( Height ) /*0x732809*/
    {
      LOBYTE(Height) = (unsigned __int8)EventClass::resetEvent((unsigned int *)Height, 0, 0); /*0x73280f*/
      *v3 = &vt_DynamicVectorClass_TechnoClass; /*0x732814*/
      v3[5] = 10; /*0x73281a*/
      v3[4] = 0; /*0x732821*/
    }
    else
    {
      v3 = 0; /*0x732826*/
    }
    v5 = MEMORY[0xA8EC88]; /*0x732828*/
    if ( MEMORY[0xA8EC88] > 0 ) /*0x732830*/
    {
      do /*0x732887*/
      {
        v6 = *((unsigned int *)MEMORY[0xA8EC7C] + v4); /*0x73283b*/
        LOBYTE(Height) = StepTechnoClassCleanupIfHuman(v6, this); /*0x732840*/
        if ( (unsigned char)Height ) /*0x732847*/
        {
          v7 = v3[2]; /*0x732849*/
          if ( v3[4] < v7 /*0x732873*/
            || ((LOBYTE(Height) = *((unsigned char *)v3 + 13), (unsigned char)Height) || !v7)
            && (Height = v3[5], Height > 0)
            && (LOBYTE(Height) = (*(int (**)(unsigned int *, int, unsigned int))(*v3 + 8))(v3, v7 + Height, 0),
                (unsigned char)Height) )
          {
            Height = v3[4]; /*0x732875*/
            v8 = v3[1]; /*0x732878*/
            v3[4] = Height + 1; /*0x73287e*/
            *(unsigned int *)(v8 + 4 * Height) = v6; /*0x732881*/
          }
        }
        ++v4; /*0x732884*/
      }
      while ( v4 < v5 ); /*0x732887*/
    }
    v1 = v16; /*0x732889*/
  }
  else
  {
    v9 = __2_YAPAXI_Z(0x18u); /*0x73288f*/
    v3 = v9; /*0x732894*/
    v10 = 0; /*0x732896*/
    if ( v9 ) /*0x73289d*/
    {
      EventClass::resetEvent(v9, 0, 0); /*0x7328a3*/
      *v3 = &vt_DynamicVectorClass_TechnoClass; /*0x7328a8*/
      v3[5] = 10; /*0x7328ae*/
      v3[4] = 0; /*0x7328b5*/
    }
    else
    {
      v3 = 0; /*0x7328ba*/
    }
    Height = GetHeightMap(MEMORY[0x887324]); /*0x7328c2*/
    v11 = Height; /*0x7328c7*/
    if ( Height > 0 ) /*0x7328cb*/
    {
      do /*0x73290b*/
      {
        Height = GetCoordDataMap(v10); /*0x7328d4*/
        if ( Height ) /*0x7328db*/
        {
          if ( (*(unsigned char *)(Height + 20) & 1) != 0 ) /*0x7328e7*/
          {
            v18 = Height; /*0x7328ef*/
            LOBYTE(Height) = StepTechnoClassCleanupIfHuman(Height, this); /*0x7328f3*/
            if ( (unsigned char)Height ) /*0x7328fa*/
              LOBYTE(Height) = DynamicVector::AddItem(v3, &v18); /*0x732903*/
          }
        }
        ++v10; /*0x732908*/
      }
      while ( v10 < v11 ); /*0x73290b*/
    }
  }
  v12 = v3[4]; /*0x73290d*/
  for ( i = 0; i < v12; ++i ) /*0x732914*/
  {
    v14 = *(unsigned int *)(v3[1] + 4 * i); /*0x732919*/
    LOBYTE(Height) = (*(int (**)(int))(*(unsigned int *)v14 + 332))(v14); /*0x73291e*/
  }
  if ( v3 ) /*0x73292b*/
    LOBYTE(Height) = (*(int (**)(unsigned int *, int))*v3)(v3, 1); /*0x732933*/
  g_MoveFeedback = v1; /*0x732937*/
  return Height; /*0x732935*/

}
} // namespace gamemd
// 0x40B960
namespace gamemd {
char MoveFeedback::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x40b962*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x40b96d*/
  {
    v3 = 0; /*0x40b96f*/
    if ( v2 <= 0 ) /*0x40b973*/
      return 1; /*0x40b993*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x40b975*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40b97b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40b984*/
    {
      ++v3; /*0x40b986*/
      ++v4; /*0x40b987*/
      if ( v3 >= v2 ) /*0x40b98c*/
        return 1; /*0x40b98c*/
    }
  }
  return 0; /*0x40b98e*/

}
} // namespace gamemd
// 0x40BB90
namespace gamemd {
int MoveFeedback::Draw(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x40bb90*/
  result = 0; /*0x40bb93*/
  if ( v2 <= 0 ) /*0x40bb98*/
    return -1; /*0x40bbaf*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x40bb9e*/
  {
    if ( ++result >= v2 ) /*0x40bbad*/
      return -1; /*0x40bbad*/
  }
  return result; /*0x40bbb2*/

}
} // namespace gamemd
// 0x40BCB0
namespace gamemd {
DynamicVector * MoveFeedback::QueryInterface(char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40bcb3*/
  *Block = &vt_VectorClass_TechnoClass; /*0x40bcb6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x40bcc0*/
  {
    __3_YAXPAX_Z(v3); /*0x40bcc8*/
    *(Block + 1) = 0; /*0x40bcd0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x40bcdb*/
  *(Block + 2) = 0; /*0x40bce1*/
  if ( (a2 & 1) != 0 ) /*0x40bce8*/
    __3_YAXPAX_Z(Block); /*0x40bceb*/
  return (DynamicVector *)Block; /*0x40bcf5*/

}
} // namespace gamemd
// 0x40BE50
namespace gamemd {
void MoveFeedback::Destroy()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x40be56*/
  *((unsigned int *)this + 4) = 0; /*0x40be59*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x40be60*/
  {
    __3_YAXPAX_Z(v2); /*0x40be66*/
    *((unsigned int *)this + 1) = 0; /*0x40be6e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x40be71*/
  *((unsigned int *)this + 2) = 0; /*0x40be74*/

}
} // namespace gamemd
// 0x40BE80
namespace gamemd {
unsigned int MoveFeedback::GetIndex2(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x40be80*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x40be95*/
  else
    return 0; /*0x40be87*/

}
} // namespace gamemd
// 0x40C030
namespace gamemd {
char MoveFeedback::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40c03c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x40c042*/
    if ( a3 ) /*0x40c048*/
      v4 = a3; /*0x40c05e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40c05a*/
    *((unsigned char *)this + 12) = 1; /*0x40c062*/
    if ( !v4 ) /*0x40c066*/
      return 0; /*0x40c0da*/
    if ( *((unsigned int *)this + 1) ) /*0x40c068*/
    {
      v5 = *((unsigned int *)this + 2); /*0x40c06f*/
      if ( a2 < v5 ) /*0x40c074*/
        v5 = a2; /*0x40c076*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x40c07c*/
        ++i; /*0x40c081*/
      if ( *((unsigned char *)this + 13) ) /*0x40c08e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40c099*/
        *((unsigned int *)this + 1) = 0; /*0x40c0a1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x40c0aa*/
    *((unsigned int *)this + 2) = a2; /*0x40c0b2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x40c0b5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x40c0be*/
  }
  v7 = *((unsigned int *)this + 2); /*0x40c0c1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x40c0c9*/
    *((unsigned int *)this + 4) = v7; /*0x40c0cb*/
  return 1; /*0x40c0ce*/

}
} // namespace gamemd
// 0x40C0E0
namespace gamemd {
int MoveFeedback::FindMoveItem(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x40c0e0*/
  result = 0; /*0x40c0e3*/
  if ( v2 <= 0 ) /*0x40c0e8*/
    return -1; /*0x40c0ff*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x40c0ee*/
  {
    if ( ++result >= v2 ) /*0x40c0fd*/
      return -1; /*0x40c0fd*/
  }
  return result; /*0x40c102*/

}
} // namespace gamemd
// 0x40C160
namespace gamemd {
void MoveFeedback::Constructor()
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40c163*/
  *Block = &vt_VectorClass_CommandClass_const; /*0x40c166*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x40c170*/
  {
    __3_YAXPAX_Z(v3); /*0x40c178*/
    *(Block + 1) = 0; /*0x40c180*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x40c18b*/
  *(Block + 2) = 0; /*0x40c191*/
  if ( (a2 & 1) != 0 ) /*0x40c198*/
    __3_YAXPAX_Z(Block); /*0x40c19b*/
  return (DynamicVector *)Block; /*0x40c1a5*/

}
} // namespace gamemd