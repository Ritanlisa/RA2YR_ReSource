// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12__e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12_e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_26_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x766C10
namespace gamemd {
int Conflict_WorldDominationTour_12::Release(int a2, unsigned int * a3)
{

  int v3; // ebp
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  int v7; // ebx
  unsigned int *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (***v12)(unsigned int, int); // ecx
  unsigned int *v13; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x766c13*/
  if ( !a2 ) /*0x766c1d*/
  {
    (*(void (**)(unsigned char *))(*(unsigned int *)this + 12))(this); /*0x766d1d*/
    return 1; /*0x766d23*/
  }
  *((unsigned char *)this + 12) = 0; /*0x766c27*/
  if ( a3 ) /*0x766c2d*/
  {
    *a3 = a2; /*0x766c73*/
    v6 = a3 + 1; /*0x766c75*/
    if ( a2 - 1 >= 0 ) /*0x766c81*/
    {
      v9 = a2; /*0x766c83*/
      do /*0x766c97*/
      {
        ComPtr::Constructor(v6); /*0x766c88*/
        *v6 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766c8d*/
        v6 += 2; /*0x766c93*/
        --v9; /*0x766c96*/
      }
      while ( v9 ); /*0x766c97*/
      v6 = a3 + 1; /*0x766c99*/
    }
  }
  else
  {
    v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x766c37*/
    if ( !v5 ) /*0x766c41*/
    {
      v8 = 0; /*0x766c6f*/
      goto LABEL_14; /*0x766c71*/
    }
    *v5 = a2; /*0x766c43*/
    v6 = v5 + 1; /*0x766c45*/
    v13 = v5 + 1; /*0x766c4b*/
    if ( a2 - 1 >= 0 ) /*0x766c51*/
    {
      v7 = a2; /*0x766c53*/
      do /*0x766c67*/
      {
        ComPtr::Constructor(v6); /*0x766c58*/
        *v6 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766c5d*/
        v6 += 2; /*0x766c63*/
        --v7; /*0x766c66*/
      }
      while ( v7 ); /*0x766c67*/
      v6 = v13; /*0x766c69*/
    }
  }
  v8 = v6; /*0x766c9d*/
LABEL_14:
  *((unsigned char *)this + 12) = 1; /*0x766c9f*/
  if ( !v8 ) /*0x766ca5*/
    return 0; /*0x766caa*/
  if ( *((unsigned int *)this + 1) ) /*0x766cb1*/
  {
    if ( a2 >= *((unsigned int *)this + 2) ) /*0x766cbd*/
      v3 = *((unsigned int *)this + 2); /*0x766cbf*/
    for ( i = 0; i < v3; ++i ) /*0x766cc5*/
      ComPtr::Set(&v8[2 * i], *(unsigned int *)(*((unsigned int *)this + 1) + 8 * i + 4)); /*0x766cd2*/
    if ( *((unsigned char *)this + 13) ) /*0x766cdc*/
    {
      v12 = (void (***)(unsigned int, int))*((unsigned int *)this + 1); /*0x766ce3*/
      if ( v12 ) /*0x766ce8*/
        (**v12)(v12, 3); /*0x766cee*/
      *((unsigned int *)this + 1) = 0; /*0x766cf0*/
    }
    v3 = a2; /*0x766cf7*/
  }
  *((unsigned int *)this + 1) = v8; /*0x766d06*/
  *((unsigned int *)this + 2) = v3; /*0x766d09*/
  *((unsigned char *)this + 13) = a3 == 0; /*0x766d0c*/
  return 1; /*0x766ca7*/

}
}
// 0x766DC0
namespace gamemd {
AbstractClass * * Conflict_WorldDominationTour_12::Constructor_1(int a2, unsigned int * a3)
{

  int v3; // ebp
  unsigned int *v5; // eax
  unsigned int *v6; // ebx
  unsigned int *v7; // esi
  unsigned int *v8; // esi
  int v9; // ebx
  int i; // esi
  void (***v11)(unsigned int, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x766dc3*/
  if ( a2 ) /*0x766dcd*/
  {
    *((unsigned char *)this + 12) = 0; /*0x766dd7*/
    if ( a3 ) /*0x766ddd*/
    {
      *a3 = a2; /*0x766e21*/
      v8 = a3 + 1; /*0x766e23*/
      if ( a2 - 1 >= 0 ) /*0x766e2f*/
      {
        v9 = a2; /*0x766e31*/
        do /*0x766e45*/
        {
          ComPtr::Constructor(v8); /*0x766e36*/
          *v8 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766e3b*/
          v8 += 2; /*0x766e41*/
          --v9; /*0x766e44*/
        }
        while ( v9 ); /*0x766e45*/
        v8 = a3 + 1; /*0x766e47*/
      }
      v6 = v8; /*0x766e4b*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x766de7*/
      if ( v5 ) /*0x766df1*/
      {
        *v5 = a2; /*0x766df3*/
        v6 = v5 + 1; /*0x766df5*/
        v7 = v5 + 1; /*0x766dfb*/
        if ( a2 - 1 >= 0 ) /*0x766dff*/
        {
          v14 = a2; /*0x766e02*/
          do /*0x766e19*/
          {
            Conflict_WorldDominationTour_12::Constructor_3(v7); /*0x766e08*/
            v7 += 2; /*0x766e11*/
            --v14; /*0x766e15*/
          }
          while ( v14 ); /*0x766e19*/
        }
      }
      else
      {
        v6 = 0; /*0x766e1d*/
      }
    }
    *((unsigned char *)this + 12) = 1; /*0x766e4f*/
    if ( !v6 ) /*0x766e53*/
      return 0; /*0x766ed6*/
    if ( *((unsigned int *)this + 1) ) /*0x766e55*/
    {
      if ( a2 >= *((unsigned int *)this + 2) ) /*0x766e61*/
        v3 = *((unsigned int *)this + 2); /*0x766e63*/
      for ( i = 0; i < v3; ++i ) /*0x766e69*/
        ComPtr::Set(&v6[2 * i], *(unsigned int *)(*((unsigned int *)this + 1) + 8 * i + 4)); /*0x766e76*/
      if ( *((unsigned char *)this + 13) ) /*0x766e80*/
      {
        v11 = (void (***)(unsigned int, int))*((unsigned int *)this + 1); /*0x766e87*/
        if ( v11 ) /*0x766e8c*/
          (**v11)(v11, 3); /*0x766e92*/
        *((unsigned int *)this + 1) = 0; /*0x766e94*/
      }
      v3 = a2; /*0x766e9b*/
    }
    *((unsigned int *)this + 1) = v6; /*0x766eaa*/
    *((unsigned int *)this + 2) = v3; /*0x766ead*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x766eb0*/
  }
  else
  {
    (*(void (**)(unsigned char *))(*(unsigned int *)this + 12))(this); /*0x766eb9*/
  }
  v12 = *((unsigned int *)this + 2); /*0x766ebc*/
  if ( v12 < *((unsigned int *)this + 4) ) /*0x766ec4*/
    *((unsigned int *)this + 4) = v12; /*0x766ec6*/
  return 1; /*0x766ec9*/

}
}
// 0x766800
namespace gamemd {
int Conflict_WorldDominationTour_12_::ReleaseBuffer(void *a1 = 0, void *a2 = 0)
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))((char *)this + 4); /*0x766806*/
  *((unsigned int *)this + 4) = 0; /*0x766809*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x766810*/
  {
    result = (**v2)(v2, 3); /*0x76681d*/
    *((unsigned int *)this + 1) = 0; /*0x76681f*/
  }
  *((unsigned char *)this + 13) = 0; /*0x766822*/
  *((unsigned int *)this + 2) = 0; /*0x766825*/
  return result; /*0x766828*/

}
}
// 0x766920
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::AddRef(void *a1 = 0)
{

  return *((unsigned int *)this + 2) < *(unsigned int *)(*((unsigned int *)this + 1) + 16); /*0x76692d*/

}
}
// 0x766FA0
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::Release(void *a1 = 0)
{

  ++*((unsigned int *)this + 2); /*0x766fa2*/
  return this; /*0x766fa5*/

}
}
// 0x766FB0
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::ddtor(void *a1 = 0)
{

  --*((unsigned int *)this + 2); /*0x766fb2*/
  return this; /*0x766fb5*/

}
}
// 0x766830
namespace gamemd {
unsigned int Conflict_WorldDominationTour_12::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x766830*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x766845*/
  else
    return 0; /*0x766837*/

}
} // namespace gamemd

// 0x766850
namespace gamemd {
unsigned int * Conflict_WorldDominationTour_12::Seek(unsigned int * a2, int a3)
{

  int v3; // edi

  v3 = *((unsigned int *)this + 1) + 8 * a3; /*0x76685d*/
  ComPtr::Constructor(a2); /*0x766862*/
  *a2 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766867*/
  ComPtr::Set(a2, *(unsigned int *)(v3 + 4)); /*0x766873*/
  return a2; /*0x76687a*/

}
} // namespace gamemd

// 0x766960
namespace gamemd {
rc_ptr * Conflict_WorldDominationTour_12::Constructor(char a2)
{

  *Block = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char; /*0x766963*/
  ComPtr::Release(Block); /*0x766969*/
  if ( (a2 & 1) != 0 ) /*0x766973*/
    __3_YAXPAX_Z(Block); /*0x766976*/
  return (rc_ptr *)Block; /*0x766980*/

}
} // namespace gamemd

// 0x766990
namespace gamemd {
rc_ptr * Conflict_WorldDominationTour_12::Constructor_0(char a2)
{

  *Block = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x766993*/
  ComPtr::Release(Block); /*0x766999*/
  if ( (a2 & 1) != 0 ) /*0x7669a3*/
    __3_YAXPAX_Z(Block); /*0x7669a6*/
  return (rc_ptr *)Block; /*0x7669b0*/

}
} // namespace gamemd

// 0x766BC0
namespace gamemd {
char Conflict_WorldDominationTour_12::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // ecx
  unsigned int *i; // eax

  v2 = *((char *)this + 2); /*0x766bc6*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x766bcf*/
  {
    v3 = 0; /*0x766bd1*/
    if ( v2 <= 0 ) /*0x766bd5*/
      return 1; /*0x766bfb*/
    v4 = (unsigned int *)(*((char *)this + 1) + 4); /*0x766bdd*/
    for ( i = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x766be0*/
    {
      ++v3; /*0x766beb*/
      v4 += 2; /*0x766bef*/
      if ( v3 >= v2 ) /*0x766bf4*/
        return 1; /*0x766bf4*/
    }
  }
  return 0; /*0x766bf6*/

}
} // namespace gamemd

// 0x766D30
namespace gamemd {
int Conflict_WorldDominationTour_12::ddtor(void *a1 = 0)
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))((char *)this + 4); /*0x766d36*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x766d3d*/
  {
    result = (**v2)(v2, 3); /*0x766d4a*/
    *((unsigned int *)this + 1) = 0; /*0x766d4c*/
  }
  *((unsigned char *)this + 13) = 0; /*0x766d4f*/
  *((unsigned int *)this + 2) = 0; /*0x766d52*/
  return result; /*0x766d55*/

}
} // namespace gamemd

// 0x766D60
namespace gamemd {
int Conflict_WorldDominationTour_12::Read(void *a1 = 0)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*(unsigned char *)(this + 12) ) /*0x766d60*/
    return 0; /*0x766d68*/
  v3 = *(unsigned int *)(this + 8); /*0x766d6e*/
  result = 0; /*0x766d71*/
  if ( v3 <= 0 ) /*0x766d75*/
    return -1; /*0x766d90*/
  for ( i = (unsigned int *)(*(unsigned int *)(this + 4) + 4); *i != *(unsigned int *)(a2 + 4); i += 2 ) /*0x766d7e*/
  {
    if ( ++result >= v3 ) /*0x766d8e*/
      return -1; /*0x766d8e*/
  }
  return result; /*0x766d6a*/

}
}
// 0x766DA0
namespace gamemd {
unsigned int Conflict_WorldDominationTour_12::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x766da0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x766db5*/
  else
    return 0; /*0x766da7*/

}
} // namespace gamemd

// 0x766F40
namespace gamemd {
int Conflict_WorldDominationTour_12::IndexOf(int a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x766f40*/
  result = 0; /*0x766f43*/
  if ( v2 <= 0 ) /*0x766f48*/
    return -1; /*0x766f63*/
  for ( i = (unsigned int *)(*((char *)this + 1) + 4); *i != *(unsigned int *)(a2 + 4); i += 2 ) /*0x766f51*/
  {
    if ( ++result >= v2 ) /*0x766f61*/
      return -1; /*0x766f61*/
  }
  return result; /*0x766f66*/

}
}
// 0x766FC0
namespace gamemd {
VectorClass_flat * Conflict_WorldDominationTour_12::QueryInterface(char a2)
{

  void (***v3)(unsigned int, int); // ecx

  v3 = (void (***)(unsigned int, int))*(Block + 1); /*0x766fc3*/
  *Block = &vt_VectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x766fc6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x766fd0*/
  {
    (**v3)(v3, 3); /*0x766fdf*/
    *(Block + 1) = 0; /*0x766fe1*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x766fec*/
  *(Block + 2) = 0; /*0x766ff2*/
  if ( (a2 & 1) != 0 ) /*0x766ff9*/
    __3_YAXPAX_Z(Block); /*0x766ffc*/
  return (VectorClass *)Block; /*0x767006*/

}
} // namespace gamemd

// 0x767080
namespace gamemd {
DynamicVector * Conflict_WorldDominationTour_12::Constructor_2(char a2)
{

  void (***v3)(unsigned int, int); // ecx

  v3 = (void (***)(unsigned int, int))*(Block + 1); /*0x767083*/
  *Block = &vt_VectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x767086*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x767090*/
  {
    (**v3)(v3, 3); /*0x76709f*/
    *(Block + 1) = 0; /*0x7670a1*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x7670ac*/
  *(Block + 2) = 0; /*0x7670b2*/
  if ( (a2 & 1) != 0 ) /*0x7670b9*/
    __3_YAXPAX_Z(Block); /*0x7670bc*/
  return (DynamicVector *)Block; /*0x7670c6*/

}
} // namespace gamemd

// 0x7670D0
namespace gamemd {
int Conflict_WorldDominationTour_12::Constructor_3(void *a1 = 0)
{

  ComPtr::Constructor(this); /*0x7670d3*/
  *this = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7670d8*/
  return this; /*0x7670e0*/

}
} // namespace gamemd
