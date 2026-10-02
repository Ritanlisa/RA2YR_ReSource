// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/WWMouseClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/WalkLocomotionClass_e4.hpp"
#include "e4/classes/Rect_e4.hpp"

// 0x7B9040
namespace gamemd {  // G42.18 ns repair
unsigned int * WWMouseClass::initSurface()
{

  unsigned int *result; // eax
  int WWMouseClass_field_0x24; // ecx
  int v3; // ebp
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // edx
  unsigned int v8[4]; // [esp+4h] [ebp-20h] BYREF
  unsigned int v9[4]; // [esp+14h] [ebp-10h] BYREF

  result = (unsigned int *)(this->__pad_0);
  if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b9052*/
  {
    WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9054*/
    if ( WWMouseClass_field_0x24 ) /*0x7b9059*/
    {
      v3 = result[17]; /*0x7b905b*/
      if ( v3 ) /*0x7b9060*/
      {
        v4 = result[21]; /*0x7b9069*/
        v5 = result[19]; /*0x7b906d*/
        v6 = result[20]; /*0x7b9071*/
        v9[0] = result[11] + result[18]; /*0x7b9074*/
        v7 = result[12]; /*0x7b9078*/
        v8[0] = 0; /*0x7b907f*/
        v8[1] = 0; /*0x7b9083*/
        v9[2] = v6; /*0x7b908f*/
        v9[3] = v4; /*0x7b9093*/
        v9[1] = v7 + v5; /*0x7b9097*/
        v8[2] = v6; /*0x7b909b*/
        v8[3] = v4; /*0x7b909f*/
        return (unsigned int *)(*(int (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)WWMouseClass_field_0x24 /*0x7b90ab*/
                                                                                          + 8))(
                           WWMouseClass_field_0x24,
                           v9,
                           v3,
                           v8,
                           0,
                           1);
      }
    }
  }
  return result; /*0x7b90b1*/

}
}  // G42.18 ns repair
} // namespace gamemd
// 0x7B9930
namespace gamemd {
int WWMouseClass::hideCursor()
{

  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebp
  int v4; // edx
  int v5; // edi
  char * v6;
  char *v7; // edx
  unsigned int v9[4]; // [esp+8h] [ebp-20h] BYREF
  unsigned int v10[4]; // [esp+18h] [ebp-10h] BYREF

  if ( WaitForSingleObject((HANDLE)(hMutex), 0x2710u) == 258 ) /*0x7b994f*/
    ((Debug *)this)->Log(); /*0x7b9960*/
  if ( !this->WWMouseClass_field_0xC ) /*0x7b9968*/
  {
    if ( (*(uint8_t (**)(WWMouseClass *))(*(unsigned int *)this->__pad_0 + 28))(this) ) /*0x7b9977*/
    {
      if ( WaitForSingleObject((HANDLE)(hMutex), 0x2710u) == 258 ) /*0x7b9994*/
        ((Debug *)this)->Log(); /*0x7b99a5*/
      if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b99ba*/
      {
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b99bc*/
        if ( WWMouseClass_field_0x24 ) /*0x7b99c1*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b99c3*/
          if ( WWMouseClass_field_0x44 ) /*0x7b99c8*/
          {
            v4 = *(unsigned int *)&this->__pad_48[4]; /*0x7b99cd*/
            v5 = *(unsigned int *)&this->__pad_48[8]; /*0x7b99d3*/
            v6 = (char *)(*(unsigned int *)&this->__pad_48[12]); /*0x7b99d7*/
            v10[0] = (unsigned int)((char *)this->WWMouseClass_field_0x2C + *(unsigned int *)this->__pad_48); /*0x7b99da*/
            v7 = (char *)this->WWMouseClass_field_0x30 + v4; /*0x7b99e1*/
            v9[0] = 0; /*0x7b99e7*/
            v9[1] = 0; /*0x7b99eb*/
            v10[2] = v5; /*0x7b99f4*/
            v10[3] = (unsigned int)(v6); /*0x7b99f9*/
            v10[1] = (unsigned int)(v7); /*0x7b99fd*/
            v9[2] = v5; /*0x7b9a01*/
            v9[3] = (unsigned int)(v6); /*0x7b9a05*/
            (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)WWMouseClass_field_0x24 + 8))( /*0x7b9a11*/
              WWMouseClass_field_0x24,
              v10,
              WWMouseClass_field_0x44,
              v9,
              0,
              1);
          }
        }
      }
      ReleaseMutex((HANDLE)(hMutex)); /*0x7b9a1c*/
    }
    else
    {
      while ( ShowCursor(0) >= 0 ) /*0x7b9a31*/
        ; /*0x7b9a33*/
    }
  }
  --this->WWMouseClass_field_0xC; /*0x7b9a3f*/
  return ReleaseMutex((HANDLE)(hMutex)); /*0x7b9a4f*/

}
} // namespace gamemd
// 0x7B9A60
namespace gamemd {
void* WWMouseClass::captureMouse()
{

  int v2; // edx
  int *FoundationSize; // eax
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int X; // eax
  int Y; // ecx
  int Width; // edx
  int Height; // edi
  char *v11; // ebp
  char * WWMouseClass_field_0x44;
  int v13; // ebp
  unsigned int *v14; // eax
  int WWMouseClass_field_0x24; // [esp-1Ch] [ebp-50h]
  Rect v16; // [esp+4h] [ebp-30h] BYREF
  unsigned int v17[4]; // [esp+14h] [ebp-20h] BYREF
  Rect v18; // [esp+24h] [ebp-10h] BYREF

  if ( this && !(*(uint8_t (**)(WWMouseClass *))(*(unsigned int *)this->__pad_0 + 28))(this) ) /*0x7b9a70*/
  {
    ((Debug *)this)->Log(); /*0x7b9a82*/
    if ( WaitForSingleObject((HANDLE)(hMutex), 0x2710u) == 258 ) /*0x7b9aa3*/
      ((Debug *)this)->Log(); /*0x7b9ab4*/
    v2 = *(unsigned int *)this->__pad_0; /*0x7b9abc*/
    LOBYTE(this->WWMouseClass_field_0x10) = 1; /*0x7b9ac0*/
    if ( !(*(uint8_t (**)(WWMouseClass *))(v2 + 8))(this) ) /*0x7b9ac4*/
    {
      if ( WaitForSingleObject((HANDLE)(hMutex), 0x2710u) == 258 ) /*0x7b9ae7*/
        ((Debug *)this)->Log(); /*0x7b9af8*/
      if ( (uint8_t)((BSurface *)((int)this))->CreateTripleBuffer() && this->WWMouseClass_field_0x24 ) /*0x7b9b0f*/
      {
        ((Rect *)(&v16))->Set(0, 0, 0, 0); /*0x7b9b26*/
        if ( this->WWMouseClass_field_0x4 ) /*0x7b9b2b*/
        {
          UI_Helper_7BA2C0(); /*0x7b9b32*/
          FoundationSize = (int *)(Building::GetFoundationSize((unsigned int *)(&v18), (unsigned int)this->WWMouseClass_field_0x8)); /*0x7b9b43*/
          v16.X = *FoundationSize; /*0x7b9b4c*/
          v16.Y = FoundationSize[1]; /*0x7b9b53*/
          v16.Width = FoundationSize[2]; /*0x7b9b5a*/
          v4 = *(unsigned int *)this->__pad_3C; /*0x7b9b5e*/
          v16.Height = FoundationSize[3]; /*0x7b9b64*/
          v5 = *(unsigned int *)this->__pad_14 - v4; /*0x7b9b6b*/
          v6 = *(unsigned int *)&this->__pad_3C[4]; /*0x7b9b6d*/
          v16.X += v5; /*0x7b9b72*/
          v16.Y += *(unsigned int *)&this->__pad_14[4] - v6; /*0x7b9b7d*/
          ReleaseMutex((HANDLE)(hMutex)); /*0x7b9b88*/
        }
        X = (unsigned int)(v16.X);
        Y = (unsigned int)(v16.Y);
        Width = (unsigned int)(v16.Width);
        Height = (unsigned int)(v16.Height);
        v17[0] = (unsigned int)(v16.X);
        *(unsigned int *)this->__pad_48 = (unsigned int)(v16.X); /*0x7b9ba4*/
        v17[2] = Width; /*0x7b9ba7*/
        v17[3] = Height; /*0x7b9bab*/
        *(unsigned int *)&this->__pad_48[4] = Y; /*0x7b9bb1*/
        *(unsigned int *)&this->__pad_48[8] = Width; /*0x7b9bb6*/
        *(unsigned int *)&this->__pad_48[12] = Height; /*0x7b9bb9*/
        v11 = (char *)this->WWMouseClass_field_0x2C + X; /*0x7b9bbf*/
        WWMouseClass_field_0x44 = (char *)((int *)this->WWMouseClass_field_0x44); /*0x7b9bc1*/
        v17[0] = (unsigned int)(v11); /*0x7b9bc4*/
        v17[1] = (unsigned int)((char *)this->WWMouseClass_field_0x30 + Y); /*0x7b9bcd*/
        v13 = *WWMouseClass_field_0x44; /*0x7b9bd1*/
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9bdb*/
        v14 = ((Rect *)(&v18))->Set(0, 0, Width, Height); /*0x7b9be6*/
        (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(v13 + 8))( /*0x7b9bef*/
          this->WWMouseClass_field_0x44,
          v14,
          WWMouseClass_field_0x24,
          v17,
          0,
          1);
      }
      ((Mouse *)((Mouse *)this))->DrawCursor((int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7b9bfd*/
      ReleaseMutex((HANDLE)(hMutex)); /*0x7b9c09*/
    }
    ShowCursor(0); /*0x7b9c0d*/
    ReleaseMutex((HANDLE)(hMutex)); /*0x7b9c19*/
  }

}
} // namespace gamemd
// 0x7B9C30
namespace gamemd {
void WWMouseClass::releaseMouse()
{

  int v2; // edx
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebx
  int v5; // edx
  int v6; // edi
  char * v7;
  char *v8; // edx
  unsigned int v9[4]; // [esp+4h] [ebp-20h] BYREF
  unsigned int v10[4]; // [esp+14h] [ebp-10h] BYREF

  if ( this && (*(uint8_t (**)(WWMouseClass *))(*(unsigned int *)this->__pad_0 + 28))(this) ) /*0x7b9c40*/
  {
    ((Debug *)this)->Log(); /*0x7b9c51*/
    if ( WaitForSingleObject((HANDLE)(hMutex), 0x2710u) == 258 ) /*0x7b9c72*/
      ((Debug *)this)->Log(); /*0x7b9c83*/
    v2 = *(unsigned int *)this->__pad_0; /*0x7b9c8b*/
    LOBYTE(this->WWMouseClass_field_0x10) = 0; /*0x7b9c8f*/
    if ( !(*(uint8_t (**)(WWMouseClass *))(v2 + 8))(this) ) /*0x7b9c93*/
    {
      if ( WaitForSingleObject((HANDLE)(hMutex), 0x2710u) == 258 ) /*0x7b9cb0*/
        ((Debug *)this)->Log(); /*0x7b9cc1*/
      if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b9cd6*/
      {
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9cd8*/
        if ( WWMouseClass_field_0x24 ) /*0x7b9cdd*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9cdf*/
          if ( WWMouseClass_field_0x44 ) /*0x7b9ce4*/
          {
            v5 = *(unsigned int *)&this->__pad_48[4]; /*0x7b9ce9*/
            v6 = *(unsigned int *)&this->__pad_48[8]; /*0x7b9cef*/
            v7 = (char *)(*(unsigned int *)&this->__pad_48[12]); /*0x7b9cf3*/
            v10[0] = (unsigned int)((char *)this->WWMouseClass_field_0x2C + *(unsigned int *)this->__pad_48); /*0x7b9cf6*/
            v8 = (char *)this->WWMouseClass_field_0x30 + v5; /*0x7b9cfd*/
            v9[0] = 0; /*0x7b9d03*/
            v9[1] = 0; /*0x7b9d07*/
            v10[2] = v6; /*0x7b9d10*/
            v10[3] = (unsigned int)(v7); /*0x7b9d15*/
            v10[1] = (unsigned int)(v8); /*0x7b9d19*/
            v9[2] = v6; /*0x7b9d1d*/
            v9[3] = (unsigned int)(v7); /*0x7b9d21*/
            (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)WWMouseClass_field_0x24 + 8))( /*0x7b9d2d*/
              WWMouseClass_field_0x24,
              v10,
              WWMouseClass_field_0x44,
              v9,
              0,
              1);
          }
        }
      }
      ReleaseMutex((HANDLE)(hMutex)); /*0x7b9d38*/
      while ( ShowCursor(1) < 0 ) /*0x7b9d4b*/
        ; /*0x7b9d4d*/
    }
    ReleaseMutex((HANDLE)(hMutex)); /*0x7b9d5c*/
  }

}
} // namespace gamemd
// 0x7BA340
namespace gamemd {
int WWMouseClass::checkRegion()
{

  return (int)this->WWMouseClass_field_0x1C; /*0x7ba343*/

}
} // namespace gamemd
// 0x7BA360
namespace gamemd {
unsigned int * WWMouseClass::updatePosition(unsigned int * a2)
{

  void *WWMouseClass_field_0x1C; // edx
  void *WWMouseClass_field_0x20; // ecx

  WWMouseClass_field_0x1C = (void *)((unsigned int)(this->WWMouseClass_field_0x1C));
  WWMouseClass_field_0x20 = (void *)((unsigned int)(this->WWMouseClass_field_0x20));
  *a2 = (unsigned int)(WWMouseClass_field_0x1C);
  a2[1] = (unsigned int)(WWMouseClass_field_0x20);
  return a2; /*0x7ba36f*/

}
} // namespace gamemd
// 0x7B89F0
namespace gamemd {
int WWMouseClass::COMStub()
{

  return (int)this->WWMouseClass_field_0xC; /*0x7b89f3*/

}
} // namespace gamemd
// 0x7B9D80
namespace gamemd {
int WWMouseClass::checkVisible()
{

  return (*(int (**)(WWMouseClass *))(*(unsigned int *)this->__pad_0 + 16))(this);

}
} // namespace gamemd
// 0x7BA300
namespace gamemd {
MouseClass * WWMouseClass::updateHotspot(unsigned int * Block, char a2)
{

  *(unsigned int *)Block->__pad_0 = &vt_Mouse; /*0x7ba309*/
  if ( (a2 & 1) != 0 ) /*0x7ba30f*/
    __3_YAXPAX_Z(Block); /*0x7ba312*/
  return Block->__pad_0; /*0x7ba31c*/

}
} // namespace gamemd
// 0x7BA330
namespace gamemd {
char WWMouseClass::checkCapture()
{

  return this->WWMouseClass_field_0x10; /*0x7ba333*/

}
} // namespace gamemd
// 0x7BA350
namespace gamemd {
int WWMouseClass::checkBounds()
{

  return (int)this->WWMouseClass_field_0x20; /*0x7ba353*/

}
} // namespace gamemd