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
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x7B9040
namespace gamemd {  // G42.18 ns repair
unsigned int * WWMouseClass::initSurface()
{


  unsigned int *result = this->HandleClick_ph; // eax /*0x7b9040*/
  if ( *&this->q050 > 0 && *&this->q054 > 0 ) /*0x7b9052*/
  {
    int WWMouseClass_field_0x24 = this->outBuffer; // ecx /*0x7b9054*/
    if ( WWMouseClass_field_0x24 ) /*0x7b9059*/
    {
      int v3 = result->__pad_044; // ebp /*0x7b905b*/
      if ( v3 ) /*0x7b9060*/
      {
        int v4 = result->q054; // ebx /*0x7b9069*/
        int v5 = result->q04C; // esi /*0x7b906d*/
        int v6 = result->q050; // edi /*0x7b9071*/
        unsigned int v9[4]; // [esp+14h] [ebp-10h] BYREF
        v9[0] = result[11] + result[18]; /*0x7b9074*/
        int v7 = result->q_30; // edx /*0x7b9078*/
        unsigned int v8[4]; // [esp+4h] [ebp-20h] BYREF
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
} // namespace gamemd
// 0x7B9930
namespace gamemd {
int WWMouseClass::hideCursor()
{

  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebp
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  char *v7; // edx
  unsigned int v9[4]; // [esp+8h] [ebp-20h] BYREF
  unsigned int v10[4]; // [esp+18h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b994f*/
    Debug::Log(); /*0x7b9960*/
  if ( !this->m_MaxY ) /*0x7b9968*/
  {
    if ( (*(unsigned __int8 (**)(WWMouseClass *))(*(unsigned int *)this->HandleClick_ph + 28))(this) ) /*0x7b9977*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9994*/
        Debug::Log(); /*0x7b99a5*/
      if ( *&this->q050 > 0 && *&this->q054 > 0 ) /*0x7b99ba*/
      {
        WWMouseClass_field_0x24 = this->outBuffer; /*0x7b99bc*/
        if ( WWMouseClass_field_0x24 ) /*0x7b99c1*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b99c3*/
          if ( WWMouseClass_field_0x44 ) /*0x7b99c8*/
          {
            v4 = *&this->q04C; /*0x7b99cd*/
            v5 = *&this->q050; /*0x7b99d3*/
            v6 = *&this->q054; /*0x7b99d7*/
            v10[0] = (char *)this->WWMouseClass_field_0x2C + *(unsigned int *)this->__pad_48; /*0x7b99da*/
            v7 = (char *)this->q_30 + v4; /*0x7b99e1*/
            v9[0] = 0; /*0x7b99e7*/
            v9[1] = 0; /*0x7b99eb*/
            v10[2] = v5; /*0x7b99f4*/
            v10[3] = v6; /*0x7b99f9*/
            v10[1] = v7; /*0x7b99fd*/
            v9[2] = v5; /*0x7b9a01*/
            v9[3] = v6; /*0x7b9a05*/
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
      ReleaseMutex(hMutex); /*0x7b9a1c*/
    }
    else
    {
      while ( ShowCursor(0) >= 0 ) /*0x7b9a31*/
        ; /*0x7b9a33*/
    }
  }
  --this->m_MaxY; /*0x7b9a3f*/
  return ReleaseMutex(hMutex); /*0x7b9a4f*/

}
} // namespace gamemd
// 0x7B9A60
namespace gamemd {
void* WWMouseClass::captureMouse()
{

  Rect v16; // [esp+4h] [ebp-30h] BYREF
  Rect v18; // [esp+24h] [ebp-10h] BYREF

  if ( this && !(*(unsigned __int8 (**)(WWMouseClass *))(*(unsigned int *)this->HandleClick_ph + 28))(this) ) /*0x7b9a70*/
  {
    Debug::Log(); /*0x7b9a82*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9aa3*/
      Debug::Log(); /*0x7b9ab4*/
    int v2; // edx
    v2 = *(unsigned int *)this->HandleClick_ph; /*0x7b9abc*/
    LOBYTE(this->Count) = 1; /*0x7b9ac0*/
    if ( !(*(unsigned __int8 (**)(WWMouseClass *))(v2 + 8))(this) ) /*0x7b9ac4*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9ae7*/
        Debug::Log(); /*0x7b9af8*/
      if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->outBuffer ) /*0x7b9b0f*/
      {
        (&v16)->Set(0, 0, 0, 0); /*0x7b9b26*/
        if ( this->m_ScrollY ) /*0x7b9b2b*/
        {
          UI_Helper_7BA2C0(); /*0x7b9b32*/
          int *FoundationSize; // eax
          FoundationSize = (int *)(Building::GetFoundationSize(&v18, (unsigned int)this->m_MaxX)); /*0x7b9b43*/
          v16.X = *FoundationSize; /*0x7b9b4c*/
          v16.Y = FoundationSize[1]; /*0x7b9b53*/
          v16.Width = FoundationSize[2]; /*0x7b9b5a*/
          int v4; // edi
          v4 = *(unsigned int *)this->q03C; /*0x7b9b5e*/
          v16.Height = FoundationSize[3]; /*0x7b9b64*/
          int v5; // edx
          v5 = *(unsigned int *)this->CapacityIncrement - v4; /*0x7b9b6b*/
          int v6 = *&this->XY2; // edi /*0x7b9b6d*/
          v16.X += v5; /*0x7b9b72*/
          v16.Y += *&this->q018 - v6; /*0x7b9b7d*/
          ReleaseMutex(hMutex); /*0x7b9b88*/
        }
        int X; // eax
        X = (int)(v16.X); /*0x7b9b8a*/
        int Y; // ecx
        Y = (int)(v16.Y); /*0x7b9b8e*/
        int Width; // edx
        Width = (int)(v16.Width); /*0x7b9b98*/
        int Height; // edi
        Height = (int)(v16.Height); /*0x7b9b9c*/
        unsigned int v17[4]; // [esp+14h] [ebp-20h] BYREF
        v17[0] = (unsigned int)(v16.X); /*0x7b9ba0*/
        *(unsigned int *)this->q048 = (unsigned int)(v16.X); /*0x7b9ba4*/
        v17[2] = Width; /*0x7b9ba7*/
        v17[3] = Height; /*0x7b9bab*/
        *&this->q04C = Y; /*0x7b9bb1*/
        *&this->q050 = Width; /*0x7b9bb6*/
        *&this->q054 = Height; /*0x7b9bb9*/
        char *v11; // ebp
        v11 = (char *)this->q02C + X; /*0x7b9bbf*/
        int *WWMouseClass_field_0x44; // eax
        WWMouseClass_field_0x44 = (int *)this->__pad_044; /*0x7b9bc1*/
        v17[0] = (unsigned int)(v11); /*0x7b9bc4*/
        v17[1] = (char *)this->q_30 + Y; /*0x7b9bcd*/
        int v13 = *WWMouseClass_field_0x44; // ebp /*0x7b9bd1*/
        int WWMouseClass_field_0x24; // [esp-1Ch] [ebp-50h]
        WWMouseClass_field_0x24 = this->outBuffer; /*0x7b9bdb*/
        unsigned int *v14; // eax
        v14 = (&v18)->Set(0, 0, Width, Height); /*0x7b9be6*/
        (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(v13 + 8))( /*0x7b9bef*/
          this->__pad_044,
          v14,
          WWMouseClass_field_0x24,
          v17,
          0,
          1);
      }
      ((Mouse *)this)->DrawCursor((int *)this->outBuffer, 0, 0); /*0x7b9bfd*/
      ReleaseMutex(hMutex); /*0x7b9c09*/
    }
    ShowCursor(0); /*0x7b9c0d*/
    ReleaseMutex(hMutex); /*0x7b9c19*/
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
  int v7; // ebp
  char *v8; // edx
  unsigned int v9[4]; // [esp+4h] [ebp-20h] BYREF
  unsigned int v10[4]; // [esp+14h] [ebp-10h] BYREF

  if ( this && (*(unsigned __int8 (**)(WWMouseClass *))(*(unsigned int *)this->HandleClick_ph + 28))(this) ) /*0x7b9c40*/
  {
    Debug::Log(); /*0x7b9c51*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9c72*/
      Debug::Log(); /*0x7b9c83*/
    v2 = *(unsigned int *)this->HandleClick_ph; /*0x7b9c8b*/
    LOBYTE(this->Count) = 0; /*0x7b9c8f*/
    if ( !(*(unsigned __int8 (**)(WWMouseClass *))(v2 + 8))(this) ) /*0x7b9c93*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9cb0*/
        Debug::Log(); /*0x7b9cc1*/
      if ( *&this->q050 > 0 && *&this->q054 > 0 ) /*0x7b9cd6*/
      {
        WWMouseClass_field_0x24 = this->outBuffer; /*0x7b9cd8*/
        if ( WWMouseClass_field_0x24 ) /*0x7b9cdd*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9cdf*/
          if ( WWMouseClass_field_0x44 ) /*0x7b9ce4*/
          {
            v5 = *&this->q04C; /*0x7b9ce9*/
            v6 = *&this->q050; /*0x7b9cef*/
            v7 = *&this->q054; /*0x7b9cf3*/
            v10[0] = (char *)this->WWMouseClass_field_0x2C + *(unsigned int *)this->__pad_48; /*0x7b9cf6*/
            v8 = (char *)this->q_30 + v5; /*0x7b9cfd*/
            v9[0] = 0; /*0x7b9d03*/
            v9[1] = 0; /*0x7b9d07*/
            v10[2] = v6; /*0x7b9d10*/
            v10[3] = v7; /*0x7b9d15*/
            v10[1] = v8; /*0x7b9d19*/
            v9[2] = v6; /*0x7b9d1d*/
            v9[3] = v7; /*0x7b9d21*/
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
      ReleaseMutex(hMutex); /*0x7b9d38*/
      while ( ShowCursor(1) < 0 ) /*0x7b9d4b*/
        ; /*0x7b9d4d*/
    }
    ReleaseMutex(hMutex); /*0x7b9d5c*/
  }

}
} // namespace gamemd
// 0x7BA340
namespace gamemd {
int WWMouseClass::checkRegion()
{

  return (int)this->q01C; /*0x7ba343*/

}
} // namespace gamemd
// 0x7BA360
namespace gamemd {
unsigned int * WWMouseClass::updatePosition(unsigned int * a2)
{


  void *WWMouseClass_field_0x1C; // edx
  WWMouseClass_field_0x1C = (void *)(this->q01C); /*0x7ba364*/
  void *WWMouseClass_field_0x20 = this->CapacityIncrement; // ecx /*0x7ba367*/
  *a2 = (unsigned int)(WWMouseClass_field_0x1C); /*0x7ba36a*/
  a2[1] = (unsigned int)(WWMouseClass_field_0x20); /*0x7ba36c*/
  return a2; /*0x7ba36f*/

}
} // namespace gamemd
// 0x7B89F0
namespace gamemd {
int WWMouseClass::COMStub()
{

  return (int)this->m_MaxY; /*0x7b89f3*/

}
} // namespace gamemd
// 0x7B9D80
namespace gamemd {
int WWMouseClass::checkVisible()
{
  return ();
}
} // namespace gamemd
// 0x7BA300
namespace gamemd {
MouseClass * WWMouseClass::updateHotspot(char a2)
{

  /* X11: vtable install elided (X67 star-deref, RHS vt_Mouse) */  /*0x7ba309*/
  if ( (a2 & 1) != 0 ) /*0x7ba30f*/
    __3_YAXPAX_Z(this); /*0x7ba312*/
  return this->HandleClick_ph; /*0x7ba31c*/

}
} // namespace gamemd
// 0x7BA330
namespace gamemd {
char WWMouseClass::checkCapture()
{

  return this->Count; /*0x7ba333*/

}
} // namespace gamemd
// 0x7BA350
namespace gamemd {
int WWMouseClass::checkBounds()
{

  return (int)this->CapacityIncrement; /*0x7ba353*/

}
} // namespace gamemd