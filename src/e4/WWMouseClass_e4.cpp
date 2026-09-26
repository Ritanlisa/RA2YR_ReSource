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

// 0x7B9040
namespace gamemd {
unsigned int * WWMouseClass::initSurface()
{
  IUnknown * v2;
  MouseClass * v3;
  int v4; // ebx
  int v5; // esi
  void * v6;
  void * v7;
  unsigned int v8[4]; // [esp+4h] [ebp-20h] BYREF
  unsigned int v9[4]; // [esp+14h] [ebp-10h] BYREF

  if ( (int)*(&this->q0080) > 0 && (int)*(&this->q0081) > 0 ) /*0x7b9052*/
  {
    v2 = this->q024; /*0x7b9054*/
    if ( v2 ) /*0x7b9059*/
    {
      v3 = this->q044; /*0x7b905b*/
      if ( v3 ) /*0x7b9060*/
      {
        v4 = this->q054; /*0x7b9069*/
        v5 = this->q04C; /*0x7b906d*/
        v6 = this->q050; /*0x7b9071*/
        v9[0] = this->q02C + this->Rect0; /*0x7b9074*/
        v7 = this->q030; /*0x7b9078*/
        v8[0] = 0; /*0x7b907f*/
        v8[1] = 0; /*0x7b9083*/
        v9[2] = v6; /*0x7b908f*/
        v9[3] = v4; /*0x7b9093*/
        v9[1] = v7 + v5; /*0x7b9097*/
        v8[2] = v6; /*0x7b909b*/
        v8[3] = v4; /*0x7b909f*/
        return (unsigned int *)(*(int (__thiscall **)(int, unsigned int *, int, unsigned int *, unsigned int, int))(v2->vtable3)( /*0x7b90ab*/
                           v2,
                           v9,
                           v3,
                           v8,
                           0,
                           1);
      }
    }
  }
}
} // namespace gamemd
// 0x7B9930
namespace gamemd {
int WWMouseClass::hideCursor()
{
  IUnknown * v2;
  int v3; // ebp
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // edx
  unsigned int v9[4]; // [esp+8h] [ebp-20h] BYREF
  unsigned int v10[4]; // [esp+18h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b994f*/
    Debug::Log(); /*0x7b9960*/
  if ( !this->q00C ) /*0x7b9968*/
  {
    if ( this->checkCapture() ) /*0x7b9977*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9994*/
        Debug::Log(); /*0x7b99a5*/
      if ( (int)*(&this->q0080) > 0 && (int)*(&this->q0081) > 0 ) /*0x7b99ba*/
      {
        v2 = this->q024; /*0x7b99bc*/
        if ( v2 ) /*0x7b99c1*/
        {
          v3 = *(&this->q0047); /*0x7b99c3*/
          if ( v3 ) /*0x7b99c8*/
          {
            v4 = *(&this->q0049); /*0x7b99cd*/
            v5 = *(&this->q0080); /*0x7b99d3*/
            v6 = *(&this->q0081); /*0x7b99d7*/
            v10[0] = *(&this->q0041) + *(&this->q0048); /*0x7b99da*/
            v7 = *(&this->q0042) + v4; /*0x7b99e1*/
            v9[0] = 0; /*0x7b99e7*/
            v9[1] = 0; /*0x7b99eb*/
            v10[2] = v5; /*0x7b99f4*/
            v10[3] = v6; /*0x7b99f9*/
            v10[1] = v7; /*0x7b99fd*/
            v9[2] = v5; /*0x7b9a01*/
            v9[3] = v6; /*0x7b9a05*/
            (*(void (__thiscall **)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)v2 + 8))( /*0x7b9a11*/
              v2,
              v10,
              v3,
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
  --this->q00C; /*0x7b9a3f*/
  return ReleaseMutex(hMutex); /*0x7b9a4f*/
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
  void * v11;
  void * v12;
  void * v13;
  unsigned int *v14; // eax
  IUnknown * v15;
  int v16; // [esp+4h] [ebp-30h] BYREF
  int v17; // [esp+8h] [ebp-2Ch]
  int v18; // [esp+Ch] [ebp-28h]
  int v19; // [esp+10h] [ebp-24h]
  unsigned int v20[4]; // [esp+14h] [ebp-20h] BYREF
  unsigned int v21[4]; // [esp+24h] [ebp-10h] BYREF

  if ( this && !(*(uint8_t (__thiscall **)(int))(((unsigned int)(this->q0088))))(this) ) /*0x7b9a70*/
  {
    Debug::Log(); /*0x7b9a82*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9aa3*/
      Debug::Log(); /*0x7b9ab4*/
    v2 = *(unsigned int *)this; /*0x7b9abc*/
    this->q010 = 1; /*0x7b9ac0*/
    if ( !(*(uint8_t (__thiscall **)(int))(v2 + 8))(this) ) /*0x7b9ac4*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9ae7*/
        Debug::Log(); /*0x7b9af8*/
      if ( BSurface::CreateTripleBuffer(this) && this->q024 ) /*0x7b9b0f*/
      {
        Rect::Set(&v16, 0, 0, 0, 0); /*0x7b9b26*/
        if ( this->q004 ) /*0x7b9b2b*/
        {
          UI_Helper_7BA2C0(); /*0x7b9b32*/
          FoundationSize = Building::GetFoundationSize(v21, this->q008); /*0x7b9b43*/
          v16 = *FoundationSize; /*0x7b9b4c*/
          v17 = FoundationSize[1]; /*0x7b9b53*/
          v18 = FoundationSize[2]; /*0x7b9b5a*/
          v4 = this->q03C; /*0x7b9b5e*/
          v19 = FoundationSize[3]; /*0x7b9b64*/
          v5 = this->q014 - v4; /*0x7b9b6b*/
          v6 = this->XY2; /*0x7b9b6d*/
          v16 += v5; /*0x7b9b72*/
          v17 += this->q018 - v6; /*0x7b9b7d*/
          ReleaseMutex(hMutex); /*0x7b9b88*/
        }
        v16 = v16; /*0x7b9b8a*/
        v17 = v17; /*0x7b9b8e*/
        v18 = v18; /*0x7b9b98*/
        v19 = v19; /*0x7b9b9c*/
        v20[0] = v16; /*0x7b9ba0*/
        this->Rect0 = v16; /*0x7b9ba4*/
        v20[2] = v18; /*0x7b9ba7*/
        v20[3] = v19; /*0x7b9bab*/
        this->q04C = v17; /*0x7b9bb1*/
        this->q050 = v18; /*0x7b9bb6*/
        this->q054 = v19; /*0x7b9bb9*/
        v11 = v16 + this->q02C; /*0x7b9bbf*/
        v12 = *(int **)(&this->q0188); /*0x7b9bc1*/
        v20[0] = v11; /*0x7b9bc4*/
        v20[1] = this->q030 + v17; /*0x7b9bcd*/
        v13 = *v12; /*0x7b9bd1*/
        v15 = this->q024; /*0x7b9bdb*/
        v14 = Rect::Set(v21, 0, 0, v18, v19); /*0x7b9be6*/
        (*(void (__thiscall **)(unsigned int, unsigned int *, int, unsigned int *, unsigned int, int))(v13 + 8))( /*0x7b9bef*/
          this->q044,
          v14,
          v15,
          v20,
          0,
          1);
      }
      Mouse::DrawCursor(*(int **)(&this->q00C6), 0, 0); /*0x7b9bfd*/
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
  IUnknown * v3;
  MouseClass * v4;
  int v5; // edx
  int v6; // edi
  void * v7;
  void * v8;
  unsigned int v9[4]; // [esp+4h] [ebp-20h] BYREF
  unsigned int v10[4]; // [esp+14h] [ebp-10h] BYREF

  if ( this && (*(uint8_t (__thiscall **)(unsigned char *))(((unsigned int)(this->q0088))))(this) ) /*0x7b9c40*/
  {
    Debug::Log(); /*0x7b9c51*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9c72*/
      Debug::Log(); /*0x7b9c83*/
    v2 = *(unsigned int *)this; /*0x7b9c8b*/
    *(&this->q0046) = 0; /*0x7b9c8f*/
    if ( !(*(uint8_t (__thiscall **)(unsigned char *))(v2 + 8))(this) ) /*0x7b9c93*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9cb0*/
        Debug::Log(); /*0x7b9cc1*/
      if ( this->q050 > 0 && this->q054 > 0 ) /*0x7b9cd6*/
      {
        v3 = this->q024; /*0x7b9cd8*/
        if ( v3 ) /*0x7b9cdd*/
        {
          v4 = this->q044; /*0x7b9cdf*/
          if ( v4 ) /*0x7b9ce4*/
          {
            v5 = this->q04C; /*0x7b9ce9*/
            v6 = this->q050; /*0x7b9cef*/
            v7 = this->q054; /*0x7b9cf3*/
            v10[0] = this->q02C + this->Rect0; /*0x7b9cf6*/
            v8 = this->q030 + v5; /*0x7b9cfd*/
            v9[0] = 0; /*0x7b9d03*/
            v9[1] = 0; /*0x7b9d07*/
            v10[2] = v6; /*0x7b9d10*/
            v10[3] = v7; /*0x7b9d15*/
            v10[1] = v8; /*0x7b9d19*/
            v9[2] = v6; /*0x7b9d1d*/
            v9[3] = v7; /*0x7b9d21*/
            (*(void (__thiscall **)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)v3 + 8))( /*0x7b9d2d*/
              v3,
              v10,
              v4,
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
  return this->q01C; /*0x7ba343*/
}
} // namespace gamemd
// 0x7BA360
namespace gamemd {
unsigned int * WWMouseClass::updatePosition(unsigned int * a2)
{
  int v3; // edx
  int v4; // ecx

  v3 = *(unsigned int *)&this->q01C; /*0x7ba364*/
  v4 = this->q020; /*0x7ba367*/
  *v3 = v3; /*0x7ba36a*/
  v3[1] = v4; /*0x7ba36c*/
}
} // namespace gamemd
// 0x7B89F0
namespace gamemd {
int WWMouseClass::COMStub()
{
  return this->q00C; /*0x7b89f3*/
}
} // namespace gamemd
// 0x7B9D80
namespace gamemd {
int WWMouseClass::checkVisible()
{
  return 0;
}
} // namespace gamemd
// 0x7BA300
namespace gamemd {
MouseClass * WWMouseClass::updateHotspot(char a2)
{
  if ( (a2 & 1) != 0 ) /*0x7ba30f*/
    RA2_OPDEL(); /*0x7ba312*/
  return this; /*0x7ba31c*/
}
} // namespace gamemd
// 0x7BA330
namespace gamemd {
char WWMouseClass::checkCapture()
{
  return *(&this->u32_46); /*0x7ba333*/
}
} // namespace gamemd
// 0x7BA350
namespace gamemd {
int WWMouseClass::checkBounds()
{
  return this->q020; /*0x7ba353*/
}
} // namespace gamemd