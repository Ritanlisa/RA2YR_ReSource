// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"

// 0x7B9040
unsigned int * WWMouseClass::initSurface()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_7B9040(_DWORD *this)
{
  _DWORD *result; // eax

  result = this; /*0x7b9040*/
  if ( (int)this->q050 > 0 && (int)this->q054 > 0 ) /*0x7b9052*/
  {
    CellStruct *v2 = this->q024; /*0x7b9054*/
    if ( v2 ) /*0x7b9059*/
    {
      int v3 = result[17]; /*0x7b905b*/
      if ( v3 ) /*0x7b9060*/
      {
        int v4 = result[21]; /*0x7b9069*/
        int v5 = result[19]; /*0x7b906d*/
        int v6 = result[20]; /*0x7b9071*/
  _DWORD v9[4]; // [esp+14h] [ebp-10h] BYREF
        v9[0] = result[11] + result[18]; /*0x7b9074*/
        int v7 = result[12]; /*0x7b9078*/
  _DWORD v8[4]; // [esp+4h] [ebp-20h] BYREF
        v8[0] = 0; /*0x7b907f*/
        v8[1] = 0; /*0x7b9083*/
        v9[2] = v6; /*0x7b908f*/
        v9[3] = v4; /*0x7b9093*/
        v9[1] = v7 + v5; /*0x7b9097*/
        v8[2] = v6; /*0x7b909b*/
        v8[3] = v4; /*0x7b909f*/
        return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)v2 + 8))( /*0x7b90ab*/
                           v2,
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
}

// 0x7B9930
BOOL WWMouseClass::hideCursor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void WWMouseClass::_vt03()
{

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b994f*/
    Debug::Log(); /*0x7b9960*/
  if ( !this->q00C ) /*0x7b9968*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 28))(this) ) /*0x7b9977*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9994*/
        Debug::Log(); /*0x7b99a5*/
      if ( (int)this->q050 > 0 && (int)this->q054 > 0 ) /*0x7b99ba*/
      {
        IUnknown *v2 = this->q024; /*0x7b99bc*/
        if ( v2 ) /*0x7b99c1*/
        {
          MouseClass *v3 = this->q044; /*0x7b99c3*/
          if ( v3 ) /*0x7b99c8*/
          {
            int v4 = this->q04C; /*0x7b99cd*/
            int v5 = this->q050; /*0x7b99d3*/
            int v6 = this->q054; /*0x7b99d7*/
  _DWORD v10[4]; // [esp+18h] [ebp-10h] BYREF
            v10[0] = this->q02C + this->q048; /*0x7b99da*/
            int v7 = this->q030 + v4; /*0x7b99e1*/
  _DWORD v9[4]; // [esp+8h] [ebp-20h] BYREF
            v9[0] = 0; /*0x7b99e7*/
            v9[1] = 0; /*0x7b99eb*/
            v10[2] = v5; /*0x7b99f4*/
            v10[3] = v6; /*0x7b99f9*/
            v10[1] = v7; /*0x7b99fd*/
            v9[2] = v5; /*0x7b9a01*/
            v9[3] = v6; /*0x7b9a05*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)v2 + 8))( /*0x7b9a11*/
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
}

// 0x7B9A60
void WWMouseClass::captureMouse()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void WWMouseClass::captureMouse()
{
  int *FoundationSize; // eax
  IUnknown *v14; // eax
  if ( this && !(*(unsigned __int8 (__thiscall **)(int *))(*this + 28))(this) ) /*0x7b9a70*/
  {
    Debug::Log(); /*0x7b9a82*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9aa3*/
      Debug::Log(); /*0x7b9ab4*/
    int v2 = *this; /*0x7b9abc*/
    this->q010 = 1; /*0x7b9ac0*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(v2 + 8))(this) ) /*0x7b9ac4*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9ae7*/
        Debug::Log(); /*0x7b9af8*/
      if ( BSurface::CreateTripleBuffer((int)this) && this->q024 ) /*0x7b9b0f*/
      {
  _DWORD v21[4]; // [esp+24h] [ebp-10h] BYREF
  int v19; // [esp+10h] [ebp-24h]
  int v18; // [esp+Ch] [ebp-28h]
  int v17; // [esp+8h] [ebp-2Ch]
  int v16; // [esp+4h] [ebp-30h] BYREF
        Rect::Set(&v16, 0, 0, 0, 0); /*0x7b9b26*/
        if ( this->q004 ) /*0x7b9b2b*/
        {
          UI_Helper_7BA2C0(); /*0x7b9b32*/
          FoundationSize = Building::GetFoundationSize(v21, this->q008); /*0x7b9b43*/
          v16 = *FoundationSize; /*0x7b9b4c*/
          v17 = FoundationSize[1]; /*0x7b9b53*/
          v18 = FoundationSize[2]; /*0x7b9b5a*/
          int v4 = this->q03C; /*0x7b9b5e*/
          v19 = FoundationSize[3]; /*0x7b9b64*/
          int v5 = this->q005 - v4; /*0x7b9b6b*/
          int v6 = this->q010; /*0x7b9b6d*/
          v16 += v5; /*0x7b9b72*/
          v17 += this->q018 - v6; /*0x7b9b7d*/
          ReleaseMutex(hMutex); /*0x7b9b88*/
        }
        int v7 = v16; /*0x7b9b8a*/
        int v8 = v17; /*0x7b9b8e*/
        int v9 = v18; /*0x7b9b98*/
        int v10 = v19; /*0x7b9b9c*/
  _DWORD v20[4]; // [esp+14h] [ebp-20h] BYREF
        v20[0] = v16; /*0x7b9ba0*/
        this->q012 = v16; /*0x7b9ba4*/
        v20[2] = v9; /*0x7b9ba7*/
        v20[3] = v10; /*0x7b9bab*/
        this->q04C = v8; /*0x7b9bb1*/
        this->q014 = v9; /*0x7b9bb6*/
        this->q054 = v10; /*0x7b9bb9*/
        int v11 = v7 + this->q02C; /*0x7b9bbf*/
        int * v12 = (int *)this->q044; /*0x7b9bc1*/
        v20[0] = v11; /*0x7b9bc4*/
        v20[1] = this->q00C + v8; /*0x7b9bcd*/
        int v13 = *v12; /*0x7b9bd1*/
        IUnknown *v15 = this->q024; /*0x7b9bdb*/
        v14 = (IUnknown *)Rect::Set(v21, 0, 0, v9, v10); /*0x7b9be6*/
        (*(void (__thiscall **)(_DWORD, IUnknown *, int, _DWORD *, _DWORD, int))(v13 + 8))( /*0x7b9bef*/
          this->q044,
          v14,
          v15,
          v20,
          0,
          1);
      }
      Mouse::DrawCursor(this, (IUnknown *)this->q024, 0, 0); /*0x7b9bfd*/
      ReleaseMutex(hMutex); /*0x7b9c09*/
    }
    ShowCursor(0); /*0x7b9c0d*/
    ReleaseMutex(hMutex); /*0x7b9c19*/
  }
}
}

// 0x7B9C30
void WWMouseClass::releaseMouse()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void WWMouseClass::_vt05()
{

  if ( this && (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q01C)(this) ) /*0x7b9c40*/
  {
    Debug::Log(); /*0x7b9c51*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9c72*/
      Debug::Log(); /*0x7b9c83*/
    int v2 = *(_DWORD *)this; /*0x7b9c8b*/
    this->q010 = 0; /*0x7b9c8f*/
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(v2 + 8))(this) ) /*0x7b9c93*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9cb0*/
        Debug::Log(); /*0x7b9cc1*/
      if ( this->q050 > 0 && this->q054 > 0 ) /*0x7b9cd6*/
      {
        int v3 = this->WWMouseClass_field_0x24; /*0x7b9cd8*/
        if ( v3 ) /*0x7b9cdd*/
        {
          int v4 = this->WWMouseClass_field_0x44; /*0x7b9cdf*/
          if ( v4 ) /*0x7b9ce4*/
          {
            int v5 = this->q04C; /*0x7b9ce9*/
            int v6 = this->q014; /*0x7b9cef*/
            int v7 = this->q054; /*0x7b9cf3*/
  _DWORD v10[4]; // [esp+14h] [ebp-10h] BYREF
            v10[0] = this->WWMouseClass_field_0x2C + this->q012; /*0x7b9cf6*/
            int v8 = this->WWMouseClass_field_0x30 + v5; /*0x7b9cfd*/
  _DWORD v9[4]; // [esp+4h] [ebp-20h] BYREF
            v9[0] = 0; /*0x7b9d03*/
            v9[1] = 0; /*0x7b9d07*/
            v10[2] = v6; /*0x7b9d10*/
            v10[3] = v7; /*0x7b9d15*/
            v10[1] = v8; /*0x7b9d19*/
            v9[2] = v6; /*0x7b9d1d*/
            v9[3] = v7; /*0x7b9d21*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)v3 + 8))( /*0x7b9d2d*/
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
}

// 0x7BA340
int WWMouseClass::checkRegion()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void WWMouseClass::_vt11()
{
  return this->q01C; /*0x7ba343*/
}
}

// 0x7BA360
unsigned int * WWMouseClass::updatePosition(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall WWMouseClass::_vt13(_DWORD *this, _DWORD *a2)
{

  int v3 = this->q01C; /*0x7ba364*/
  int v4 = this->q020; /*0x7ba367*/
  *a2 = v3; /*0x7ba36a*/
  a2[1] = v4; /*0x7ba36c*/
  return a2; /*0x7ba36f*/
}
}

// 0x7B89F0
int WWMouseClass::COMStub()
{
{
    return this->IsInitialized;
}
}

// 0x7B9D80
int WWMouseClass::checkVisible()
{
{
    return this->showCursor();
}
}

// 0x7BA300
MouseClass * WWMouseClass::updateHotspot(char a2)
{
{
    *(void**)this = &vt_Mouse;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MouseClass *)this;
}
}

// 0x7BA330
char WWMouseClass::checkCapture()
{
{
    return this->Count;
}
}

// 0x7BA350
int WWMouseClass::checkBounds()
{
{
    return this->XY1;
}
}
