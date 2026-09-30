// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x5ACD30
namespace gamemd {
AbstractClass * * MSEngine::Release(int a2, char * a3)
{
    unsigned int v12 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v12 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v12 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v12 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v12 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v12 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v12 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */

  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v9; // ecx
  unsigned int * v10;
  char *v11; // ebx
  unsigned int *v12; // edx

  v3 = a2; /*0x5acd32*/
  if ( a2 ) /*0x5acd3d*/
  {
    v5 = a3; /*0x5acd43*/
    *((unsigned char *)this + 12) = 0; /*0x5acd47*/
    if ( a3 ) /*0x5acd4d*/
    {
      v7 = a3; /*0x5acd73*/
    }
    else
    {
      v6 = (char *)RA2_OPNEW(16 * a2); /*0x5acd55*/
      if ( v6 ) /*0x5acd5f*/
        v7 = v6; /*0x5acd64*/
      else
        v7 = 0; /*0x5acd6c*/
    }
    *((unsigned char *)this + 12) = 1; /*0x5acd7b*/
    if ( v7 ) /*0x5acd7f*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x5acd8b*/
      {
        v9 = *((unsigned int *)this + 2); /*0x5acd92*/
        if ( a2 < v9 ) /*0x5acd97*/
          v9 = a2; /*0x5acd99*/
        if ( v9 > 0 ) /*0x5acd9d*/
        {
          v10 = (unsigned int)(0);
          do /*0x5acdc3*/
          {
            v11 = (unsigned int)(&v7[v10]);
            v12 = (unsigned int *)(v10 + *((unsigned int *)this + 1)); /*0x5acda7*/
            v10 += 16; /*0x5acda9*/
            --v9; /*0x5acdac*/
            *(unsigned int *)v11 = *(unsigned int *)(v12); /*0x5acdaf*/
            *((unsigned int *)v11 + 1) = ((unsigned int *)(v12))[1]; /*0x5acdb4*/
            *((unsigned int *)v11 + 2) = ((unsigned int *)(v12))[2]; /*0x5acdba*/
            *((unsigned int *)v11 + 3) = ((unsigned int *)(v12))[3]; /*0x5acdc0*/
          }
          while ( v9 ); /*0x5acdc3*/
          v5 = a3; /*0x5acdc5*/
          v3 = a2; /*0x5acdc9*/
        }
        if ( *((unsigned char *)this + 13) ) /*0x5acdcd*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x5acdd8*/
          *((unsigned int *)this + 1) = 0; /*0x5acde0*/
        }
      }
      *((unsigned int *)this + 1) = v7; /*0x5acde9*/
      *((unsigned int *)this + 2) = v3; /*0x5acdf1*/
      *((unsigned char *)this + 13) = v5 == 0; /*0x5acdf4*/
      return 1; /*0x5acdfa*/
    }
    else
    {
      return 0; /*0x5acd84*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x5ace05*/
    return 1; /*0x5ace0b*/
  }

}
}
// 0x5ACED0
namespace gamemd {
AbstractClass * * MSEngine::SetCapacity(int a2, char * a3)
{

  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v8; // ecx
  int v9; // eax
  char *v10; // ebx
  unsigned int *v11; // edx
  int v12; // eax

  v3 = a2; /*0x5aced2*/
  if ( a2 ) /*0x5acedd*/
  {
    v5 = a3; /*0x5acee3*/
    *((unsigned char *)this + 12) = 0; /*0x5acee7*/
    if ( a3 ) /*0x5aceed*/
    {
      v7 = a3; /*0x5acf13*/
    }
    else
    {
      v6 = (char *)RA2_OPNEW(16 * a2); /*0x5acef5*/
      if ( v6 ) /*0x5aceff*/
        v7 = v6; /*0x5acf04*/
      else
        v7 = 0; /*0x5acf0c*/
    }
    *((unsigned char *)this + 12) = 1; /*0x5acf1b*/
    if ( !v7 ) /*0x5acf1f*/
      return 0; /*0x5acfb4*/
    if ( *((unsigned int *)this + 1) ) /*0x5acf25*/
    {
      v8 = *((unsigned int *)this + 2); /*0x5acf2c*/
      if ( a2 < v8 ) /*0x5acf31*/
        v8 = a2; /*0x5acf33*/
      if ( v8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
          v11 = (unsigned int *)(v9 + *((unsigned int *)this + 1)); /*0x5acf41*/
          v9 += 16; /*0x5acf43*/
          --v8; /*0x5acf46*/
          *(unsigned int *)v10 = *v11; /*0x5acf49*/
          *((unsigned int *)v10 + 1) = v11[1]; /*0x5acf4e*/
          *((unsigned int *)v10 + 2) = v11[2]; /*0x5acf54*/
          *((unsigned int *)v10 + 3) = v11[3]; /*0x5acf5a*/
        }
        while ( v8 ); /*0x5acf5d*/
        v3 = a2; /*0x5acf5f*/
        v5 = a3; /*0x5acf63*/
      }
      if ( *((unsigned char *)this + 13) ) /*0x5acf67*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5acf72*/
        *((unsigned int *)this + 1) = 0; /*0x5acf7a*/
      }
    }
    *((unsigned int *)this + 1) = v7; /*0x5acf83*/
    *((unsigned int *)this + 2) = v3; /*0x5acf8b*/
    *((unsigned char *)this + 13) = v5 == 0; /*0x5acf8e*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x5acf97*/
  }
  v12 = *((unsigned int *)this + 2); /*0x5acf9a*/
  if ( v12 < *((unsigned int *)this + 4) ) /*0x5acfa2*/
    *((unsigned int *)this + 4) = v12; /*0x5acfa4*/
  return 1; /*0x5acfa7*/

}
}
// 0x5CEE60
namespace gamemd {
CampaignClass * MSEngine::Destructor()
{

  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  SessionClass::Destruct((unsigned int *)this); /*0x5cee64*/
  v2 = *(void **)((char *)this + 72); /*0x5cee69*/
  *((unsigned int *)this + 17) = &vt_VectorClass_MSSfxEntry; /*0x5cee70*/
  if ( v2 && *((unsigned char *)this + 81) ) /*0x5cee79*/
  {
    RA2_OPDEL(v2); /*0x5cee7f*/
    *((unsigned int *)this + 18) = 0; /*0x5cee87*/
  }
  *((unsigned char *)this + 81) = 0; /*0x5cee8a*/
  *((unsigned int *)this + 19) = 0; /*0x5cee8d*/
  v3 = *(void **)((char *)this + 48); /*0x5cee90*/
  *((unsigned int *)this + 11) = &vt_VectorClass_MSAnimEntry; /*0x5cee93*/
  if ( v3 && *((unsigned char *)this + 57) ) /*0x5cee9e*/
  {
    RA2_OPDEL(v3); /*0x5ceea4*/
    *((unsigned int *)this + 12) = 0; /*0x5ceeac*/
  }
  *((unsigned char *)this + 57) = 0; /*0x5ceeb2*/
  *((unsigned int *)this + 13) = 0; /*0x5ceeb5*/
  DeleteAndZero((void **)((char *)this + 40)); /*0x5ceeb8*/
  v4 = *(void **)((char *)this + 4); /*0x5ceebd*/
  *(unsigned int *)this = &vt_VectorClass_MapStage; /*0x5ceec0*/
  if ( v4 && *((unsigned char *)this + 13) ) /*0x5ceeca*/
  {
    RA2_OPDEL(v4); /*0x5ceed0*/
    *((unsigned int *)this + 1) = 0; /*0x5ceed8*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5ceedb*/
  *((unsigned int *)this + 2) = 0; /*0x5ceede*/

}
}
// 0x5D1AA0
namespace gamemd {
CampaignClass * MSEngine::Construct()
{

  char *v2; // ecx
  int v3; // edx

  v2 = (unsigned int)((char *)((unsigned int *)this + 2));
  *((unsigned int *)v2 + 1) = 0; /*0x5d1ab2*/
  *((unsigned int *)v2 + 2) = 0; /*0x5d1ab5*/
  v2[12] = 1; /*0x5d1ab8*/
  v2[13] = 0; /*0x5d1abb*/
  *(unsigned int *)v2 = &vt_VectorClass_TRect_int; /*0x5d1abe*/
  *((unsigned int *)this + 7) = 0; /*0x5d1ac4*/
  *((unsigned int *)this + 8) = 0; /*0x5d1ac7*/
  *((unsigned char *)this + 36) = 1; /*0x5d1aca*/
  *((unsigned char *)this + 37) = 0; /*0x5d1acd*/
  *((unsigned int *)this + 6) = &vt_DynamicVectorClass_MSAnim; /*0x5d1ad0*/
  *((unsigned int *)this + 11) = 10; /*0x5d1ad6*/
  *((unsigned int *)this + 10) = 0; /*0x5d1add*/
  *((unsigned int *)this + 13) = 0; /*0x5d1ae0*/
  *((unsigned int *)this + 14) = 0; /*0x5d1ae3*/
  *((unsigned char *)this + 60) = 1; /*0x5d1ae6*/
  *((unsigned char *)this + 61) = 0; /*0x5d1ae9*/
  *((unsigned int *)this + 12) = &vt_DynamicVectorClass_MSSfx; /*0x5d1aec*/
  *((unsigned int *)this + 17) = 10; /*0x5d1af2*/
  *((unsigned int *)this + 16) = 0; /*0x5d1af9*/
  v3 = *(unsigned int *)v2; /*0x5d1afc*/
  *this = &vt_MSEngine; /*0x5d1b01*/
  *((unsigned int *)this + 1) = 0; /*0x5d1b07*/
  (*(void (**)(char *, int, unsigned int))(v3 + 8))(v2, 20, 0); /*0x5d1b0a*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 6) + 12))((unsigned int *)this + 6); /*0x5d1b11*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 12) + 12))((unsigned int *)this + 12); /*0x5d1b18*/
  return this; /*0x5d1b1b*/

}
}
// 0x5D1B30
namespace gamemd {
CampaignClass * MSEngine::Destruct()
{
    void * v13 = 0;

  int v2; // ebp
  int v3; // eax
  void *v4; // edi
  unsigned int *v5; // ebp
  int i; // edi
  void (***v7)(unsigned int, int); // ecx
  unsigned int *v8; // edi
  unsigned char (*)[4] v9;
  unsigned int *v10; // esi
  unsigned char (*)[4] v11;
  unsigned char (*)[4] v12;
  unsigned char (*)[4] v13;

  v2 = 0; /*0x5d1b37*/
  for ( *this = &vt_MSEngine; v2 < *((unsigned int *)this + 16); ++v2 ) /*0x5d1b45*/
  {
    v3 = *((unsigned int *)this + 13); /*0x5d1b47*/
    v4 = *(void **)(v3 + 4 * v2); /*0x5d1b4a*/
    if ( v4 ) /*0x5d1b4f*/
    {
      MSEngine::DestroyData(*(unsigned int *)(v3 + 4 * v2)); /*0x5d1b53*/
      RA2_OPDEL(v4); /*0x5d1b59*/
    }
  }
  v5 = (unsigned int *)this + 12; /*0x5d1b6c*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 12) + 12))((unsigned int *)this + 12); /*0x5d1b71*/
  for ( i = 0; i < *((unsigned int *)this + 10); ++i ) /*0x5d1b7b*/
  {
    v7 = *(void (****)(unsigned int, int))(*((unsigned int *)this + 7) + 4 * i); /*0x5d1b80*/
    if ( v7 ) /*0x5d1b85*/
      (**v7)(v7, 1); /*0x5d1b8b*/
  }
  v8 = (unsigned int *)this + 6; /*0x5d1b98*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 6) + 12))((unsigned int *)this + 6); /*0x5d1b9d*/
  v9 = *((unsigned int *)this + 2); /*0x5d1ba0*/
  v10 = (unsigned int *)this + 2; /*0x5d1ba3*/
  (*(void (**)(unsigned int *))(v9 + 12))(v10); /*0x5d1ba8*/
  v11 = (void *)v5[1]; /*0x5d1bab*/
  *v5 = &vt_VectorClass_MSSfx; /*0x5d1bae*/
  if ( v11 && *((unsigned char *)v5 + 13) ) /*0x5d1bb9*/
  {
    RA2_OPDEL(v11); /*0x5d1bbf*/
    v5[1] = 0; /*0x5d1bc7*/
  }
  *((unsigned char *)v5 + 13) = 0; /*0x5d1bca*/
  v5[2] = 0; /*0x5d1bcd*/
  v12 = (void *)v8[1]; /*0x5d1bd0*/
  *v8 = &vt_VectorClass_MSAnim; /*0x5d1bd3*/
  if ( v12 && *((unsigned char *)v8 + 13) ) /*0x5d1bdd*/
  {
    RA2_OPDEL(v12); /*0x5d1be3*/
    v8[1] = 0; /*0x5d1beb*/
  }
  *((unsigned char *)v8 + 13) = 0; /*0x5d1bee*/
  v8[2] = 0; /*0x5d1bf1*/
  v13 = (void *)v10[1]; /*0x5d1bf4*/
  *v10 = &vt_VectorClass_TRect_int; /*0x5d1bf7*/
  if ( v13 && *((unsigned char *)v10 + 13) ) /*0x5d1c01*/
  {
    RA2_OPDEL(v13); /*0x5d1c07*/
    v10[1] = 0; /*0x5d1c0f*/
  }
  *((unsigned char *)v10 + 13) = 0; /*0x5d1c12*/
  v10[2] = 0; /*0x5d1c15*/

}
}
// 0x5D1DF0
namespace gamemd {
int MSEngine::ProcessEvents(MSVQAnim * aP1, int a3)
{

  int v4; // ebx
  int result; // eax
  int v6; // ecx

  Timer::GetTicks(); /*0x5d1dfc*/
  v4 = a3; /*0x5d1e01*/
  while ( 1 ) /*0x5d1e19*/
  {
    result = (*(int (**)(unsigned int *, MSVQAnim **))(*((unsigned int *)this + 6) + 16))((unsigned int *)this + 6, &aP1); /*0x5d1e19*/
    if ( result == -1 ) /*0x5d1e1f*/
      break; /*0x5d1e1f*/
    v6 = *(unsigned int *)(*((unsigned int *)this + 7) + 4 * result); /*0x5d1e24*/
    result = (*(int (**)(int))(*(unsigned int *)v6 + 28))(v6); /*0x5d1e29*/
    if ( (unsigned char)result || !v4 ) /*0x5d1e32*/
      break; /*0x5d1e32*/
    GameClass::FrameLoop(this, 1); /*0x5d1e38*/
  }
  return result; /*0x5d1e3f*/

}
}
// 0x5AC520
namespace gamemd {
CampaignClass * MSEngine::ClearBuffer()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5ac526*/
  *((unsigned int *)this + 4) = 0; /*0x5ac529*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5ac530*/
  {
    RA2_OPDEL(v2); /*0x5ac536*/
    *((unsigned int *)this + 1) = 0; /*0x5ac53e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5ac541*/
  *((unsigned int *)this + 2) = 0; /*0x5ac544*/

}
} // namespace gamemd

// 0x5AC550
namespace gamemd {
unsigned int MSEngine::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5ac550*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 4; /*0x5ac565*/
  else
    return 0; /*0x5ac557*/

}
} // namespace gamemd

// 0x5AC570
namespace gamemd {
unsigned int * MSEngine::Shutdown(unsigned int * a2, int a3)
{

  unsigned int *v3; // ecx

  v3 = (unsigned int *)(*((unsigned int *)this + 1) + 16 * a3); /*0x5ac57d*/
  *a2 = *v3; /*0x5ac587*/
  a2[1] = v3[1]; /*0x5ac58c*/
  a2[2] = v3[2]; /*0x5ac592*/
  a2[3] = v3[3]; /*0x5ac599*/
  return a2; /*0x5ac595*/

}
} // namespace gamemd

// 0x5ACCC0
namespace gamemd {
char MSEngine::AddRef(int a2)
{

  int v2; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  v2 = *((char *)this + 2); /*0x5acccb*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5accd0*/
  {
    v3 = 0; /*0x5accd2*/
    if ( v2 <= 0 ) /*0x5accd6*/
      return 1; /*0x5acd1a*/
    v4 = *(unsigned int *)(a2 + 4); /*0x5accd8*/
    v5 = (unsigned int *)*((char *)this + 1); /*0x5accdb*/
    v6 = (unsigned int *)(v4 + 8); /*0x5accde*/
    v7 = v4 - (unsigned int)v5; /*0x5acce1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] ) /*0x5acd07*/
    {
      ++v3; /*0x5acd09*/
      v6 += 4; /*0x5acd0a*/
      v5 += 4; /*0x5acd0d*/
      if ( v3 >= v2 ) /*0x5acd12*/
        return 1; /*0x5acd12*/
    }
  }
  return 0; /*0x5acd14*/

}
} // namespace gamemd

// 0x5ACE20
namespace gamemd {
CampaignClass * MSEngine::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x5ace2d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x5ace33*/
    *((unsigned int *)this + 1) = 0; /*0x5ace3b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5ace3e*/
  *((unsigned int *)this + 2) = 0; /*0x5ace41*/

}
} // namespace gamemd

// 0x5ACE50
namespace gamemd {
CampaignClass * MSEngine::Init( unsigned int * a2)
{

  int result; // eax
  int v3; // esi
  unsigned int *i; // ecx

  if ( !*(unsigned char *)(this + 12) ) /*0x5ace50*/
    return 0; /*0x5ace5e*/
  v3 = *(unsigned int *)(this + 8); /*0x5ace64*/
  result = 0; /*0x5ace67*/
  if ( v3 <= 0 ) /*0x5ace6b*/
    return -1; /*0x5acea0*/
  for ( i = *(unsigned int **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5ace71*/
  {
    if ( ++result >= v3 ) /*0x5ace9e*/
      return -1; /*0x5ace9e*/
  }
  return result; /*0x5ace5b*/

}
} // namespace gamemd

// 0x5ACEB0
namespace gamemd {
unsigned int MSEngine::Run(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5aceb0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 4; /*0x5acec5*/
  else
    return 0; /*0x5aceb7*/

}
} // namespace gamemd

// 0x5ACFC0
namespace gamemd {
int MSEngine::FindItem(unsigned int * a2)
{

  int v2; // esi
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5acfc3*/
  result = 0; /*0x5acfc6*/
  if ( v2 <= 0 ) /*0x5acfcb*/
    return -1; /*0x5ad000*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5acfd1*/
  {
    if ( ++result >= v2 ) /*0x5acffe*/
      return -1; /*0x5acffe*/
  }
  return result; /*0x5ad003*/

}
}
// 0x5AD4D0
namespace gamemd {
VectorClass_flat * MSEngine::QueryInterface(unsigned int * Block, char a2)
{

  unsigned char (*)[4] v3;

  v3 = (unsigned int)((void *)*(Block + 1));
  *Block = (unsigned int)(&vt_VectorClass_TRect_int);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5ad4e0*/
  {
    RA2_OPDEL(v3); /*0x5ad4e8*/
    *(Block + 1) = 0; /*0x5ad4f0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5ad4fb*/
  *(unsigned int *)(((unsigned int)(Block)+ 2)) = 0; /*0x5ad501*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5ad508*/
    RA2_OPDEL(Block); /*0x5ad50b*/
  return (VectorClass *)Block; /*0x5ad515*/

}
} // namespace gamemd

// 0x5AD520
namespace gamemd {
CampaignClass * MSEngine::Constructor(unsigned int * Block, char a2)
{

  unsigned char (*)[4] v3;

  v3 = (unsigned int)((void *)*(Block + 1));
  *Block = (unsigned int)(&vt_VectorClass_TRect_int);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5ad530*/
  {
    RA2_OPDEL(v3); /*0x5ad538*/
    *(Block + 1) = 0; /*0x5ad540*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5ad54b*/
  *(Block + 2) = 0; /*0x5ad551*/
  if ( (a2 & 1) != 0 ) /*0x5ad558*/
    RA2_OPDEL(Block); /*0x5ad55b*/
  return (DynamicVector *)Block; /*0x5ad565*/

}
} // namespace gamemd

// 0x5D5850
namespace gamemd {
void MSEngine::DestroyData()
{

  if ( *this ) /*0x5d5850*/
    free(*this); /*0x5d5857*/

}
} // namespace gamemd
