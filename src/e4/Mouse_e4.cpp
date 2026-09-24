// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x4A8BF0
namespace gamemd {
Tactical * * Mouse::SetBounds(IUnknown * aP1)
{
  int result; // eax
  __int16 v4; // cx
  const void *v5; // esi
  bool v6; // zf
  int v7; // eax
  __int16 v8; // cx
  __int16 v9; // [esp+8h] [ebp-8h] BYREF
  __int16 v10; // [esp+Ah] [ebp-6h]

  result = *(_DWORD *)(this + 4476); /*0x4a8bf7*/
  if ( result ) /*0x4a8bff*/
  {
    v4 = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a8c16*/
    v9 = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a8c1f*/
    v10 = v4; /*0x4a8c24*/
    result = MapClass::SetCellFlagsAlongPath(&v9, 0); /*0x4a8c38*/
  }
  v5 = aP1; /*0x4a8c3d*/
  v6 = aP1 == 0; /*0x4a8c47*/
  *(_DWORD *)(this + 4472) = dword_8A03F8; /*0x4a8c49*/
  if ( v6 ) /*0x4a8c4f*/
  {
    *(_DWORD *)(this + 4476) = 0; /*0x4a8d1f*/
  }
  else
  {
    if ( (byte_8A0618 & 1) == 0 ) /*0x4a8c5c*/
    {
      byte_8A0618 |= 1u; /*0x4a8c68*/
      atexit(nullsub_10); /*0x4a8c6e*/
    }
    qmemcpy(&unk_8A041C, v5, 0x1E0u); /*0x4a8c85*/
    *(_DWORD *)(this + 4476) = &unk_8A041C; /*0x4a8c8f*/
    v7 = *(_DWORD *)CoordList::GetBounds(&aP1, &unk_8A041C); /*0x4a8c9e*/
    v9 = v7 - 1; /*0x4a8ca6*/
    v10 = HIWORD(v7) - 1; /*0x4a8cab*/
    LOWORD(aP1) = (__int16)(1 - v7) / 2; /*0x4a8cc4*/
    HIWORD(aP1) = (__int16)(1 - HIWORD(v7)) / 2; /*0x4a8cd1*/
    v8 = (__int16)aP1; /*0x4a8cd6*/
    *(_DWORD *)(this + 4472) = aP1; /*0x4a8cda*/
    LOWORD(v7) = *(_WORD *)(this + 4474) + *(_WORD *)(this + 4470); /*0x4a8cee*/
    LOWORD(aP1) = v8 + *(_WORD *)(this + 4468); /*0x4a8cf8*/
    HIWORD(aP1) = v7; /*0x4a8cfd*/
    return MapClass::SetCellFlagsAlongPath(&aP1, 1); /*0x4a8d11*/
  }
  return result; /*0x4a8d17*/
}
}
// 0x5BDC80
namespace gamemd {
int Mouse::SetCursor(ObjectClass * aP1, ObjectClass * aP2)
{
  char v4; // bl
  int v6; // edi
  DWORD Ticks; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // esi
  int v13; // [esp+10h] [ebp-Ch] BYREF
  int v14; // [esp+14h] [ebp-8h]

  if ( dword_82D034[7 * aP1] == -1 ) /*0x5bdca6*/
  {
    v4 = 0; /*0x5bdca8*/
    aP2 = 0; /*0x5bdcaa*/
  }
  else
  {
    v4 = aP2; /*0x5bdcb0*/
  }
  if ( byte_ABF2DD && (!dword_ABF294 || aP1 == *(_DWORD *)(this + 21856) && v4 == *(_BYTE *)(this + 21852)) ) /*0x5bdcd6*/
    return 0; /*0x5bdcda*/
  byte_ABF2DD = 1; /*0x5bdce4*/
  v6 = dword_82D030[7 * aP1]; /*0x5bdceb*/
  Ticks = Timer::GetTicks(); /*0x5bdcf2*/
  v8 = 0; /*0x5bdcfb*/
  dword_ABF2A0 = Ticks; /*0x5bdcfd*/
  dword_ABF2A4 = v14; /*0x5bdd02*/
  dword_ABF2A8 = v6; /*0x5bdd08*/
  *(_DWORD *)(this + 21864) = 0; /*0x5bdd0e*/
  if ( !v4 || (v9 = dword_82D034[7 * aP1], v9 == -1) ) /*0x5bdd1e*/
    v9 = MouseClass_Cursors[7 * aP1]; /*0x5bdd20*/
  v10 = dword_82D03C[7 * aP1]; /*0x5bdd22*/
  v11 = 0; /*0x5bdd25*/
  if ( v10 == 12345 ) /*0x5bdd31*/
    v11 = *((__int16 *)dword_ABF294 + 1) / 2; /*0x5bdd42*/
  if ( v10 == 54321 ) /*0x5bdd50*/
    v11 = *((__int16 *)dword_ABF294 + 1); /*0x5bdd52*/
  v12 = dword_82D040[7 * aP1]; /*0x5bdd56*/
  if ( v12 == 12345 ) /*0x5bdd5f*/
    v8 = *((__int16 *)dword_ABF294 + 2) / 2; /*0x5bdd6a*/
  if ( v12 == 54321 ) /*0x5bdd72*/
    v8 = *((__int16 *)dword_ABF294 + 2); /*0x5bdd74*/
  v14 = v8; /*0x5bdd7c*/
  v13 = v11; /*0x5bdd87*/
  (*(void (__thiscall **)(int, int *, void *, int))(*(_DWORD *)g_WWMouseClass_Instance + 4))( /*0x5bdd93*/
    g_WWMouseClass_Instance,
    &v13,
    dword_ABF294,
    v9);
  *(_DWORD *)(this + 21856) = aP1; /*0x5bdd9f*/
  *(_BYTE *)(this + 21852) = aP2; /*0x5bdda5*/
  return 1; /*0x5bdcd8*/
}
}
// 0x6938C0
namespace gamemd {
int Mouse::ReleaseCapture()
{
  HWND result; // eax

  DisplayClass::ExitMode(); /*0x6938c3*/
  *(this + 21850) = 0; /*0x6938c8*/
  result = GetCapture(); /*0x6938cf*/
  if ( result == g_hWnd ) /*0x6938de*/
    return (HWND)ReleaseCapture(); /*0x6938e0*/
  return result; /*0x6938db*/
}
}
// 0x7B93F0
namespace gamemd {
AbstractClass * * Mouse::DrawCursor(IUnknown * aP1, WWMouseClass * aP2, int a4)
{
  char **v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // esi
  int v9; // edi
  int SubFile; // eax
  int v11; // eax
  _DWORD *v12; // [esp-2Ch] [ebp-78h]
  _DWORD *v13; // [esp+4h] [ebp-48h] BYREF
  int v14; // [esp+8h] [ebp-44h]
  int v15; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+10h] [ebp-3Ch]
  int v17; // [esp+14h] [ebp-38h]
  int v18; // [esp+18h] [ebp-34h]
  _BYTE v19[16]; // [esp+1Ch] [ebp-30h] BYREF
  int v20[5]; // [esp+2Ch] [ebp-20h] BYREF
  _DWORD v21[3]; // [esp+40h] [ebp-Ch] BYREF

  v13 = this; /*0x7b93f5*/
  v5 = (char **)*(this + 1); /*0x7b93f9*/
  if ( v5 && aP1 && FileSystem_MOUSE_PAL ) /*0x7b9418*/
  {
    v6 = *(this + 20); /*0x7b942e*/
    v7 = *(this + 21); /*0x7b9431*/
    v8 = aP2 + *(this + 18); /*0x7b9438*/
    v9 = a4 + *(this + 19); /*0x7b943e*/
    SubFile = MixFileClass::GetSubFile(v5, *(this + 2)); /*0x7b9440*/
    v20[1] = v6; /*0x7b9447*/
    v20[2] = v7; /*0x7b9454*/
    v20[3] = 0; /*0x7b9458*/
    v20[4] = 1; /*0x7b9468*/
    Buffer::Init(v21, SubFile, v7 * v6); /*0x7b9470*/
    v20[0] = (int)&BSurface_Vtable; /*0x7b947d*/
    if ( aP1 == (int *)v13[9] ) /*0x7b9488*/
    {
      v15 = 0; /*0x7b9499*/
      v16 = 0; /*0x7b949d*/
      v12 = v13 + 11; /*0x7b94a6*/
      v13 = (_DWORD *)v8; /*0x7b94b8*/
      v14 = v9; /*0x7b94bc*/
      v17 = v6; /*0x7b94c0*/
      v18 = v7; /*0x7b94c4*/
    }
    else
    {
      v15 = 0; /*0x7b94da*/
      v16 = 0; /*0x7b94de*/
      v11 = *aP1; /*0x7b94e3*/
      v13 = (_DWORD *)v8; /*0x7b94e6*/
      v14 = v9; /*0x7b94ea*/
      v17 = v6; /*0x7b94ee*/
      v18 = v7; /*0x7b94f2*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v11 + 120))(aP1, v19); /*0x7b94f9*/
    }
    BlitterDrawSHP(aP1, FileSystem_MOUSE_PAL, v20, &v15, (int *)&v13, v12, 0, 0, 0, 0, 1000, 0, 0); /*0x7b94c8*/
    Vector::Clear((int)v21); /*0x7b951f*/
  }
}
}
// 0x53EC90
namespace gamemd {
SHORT Mouse::GetKeyState()
{
  if ( g_StreamBufferState ) /*0x53ec97*/
    return word_AA0168[vKey]; /*0x53eca7*/
  else
    return GetAsyncKeyState(vKey); /*0x53ec9a*/
}
} // namespace gamemd

// 0x54F5C0
namespace gamemd {
BOOL Mouse::IsButtonDown(unsigned char a1)
{
  unsigned __int16 v1; // si

  v1 = a1; /*0x54f5c5*/
  if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 ) /*0x54f5e2*/
    v1 = 2 - (a1 != 1); /*0x54f5eb*/
  return (unsigned __int16)Mouse::GetKeyState(v1) != 0; /*0x54f600*/
}
} // namespace gamemd

// 0x5BC400
namespace gamemd {
HWND Mouse::HideWindow()
{
  HWND result; // eax

  result = dword_ABF240; /*0x5bc400*/
  byte_ABF239 = 0; /*0x5bc409*/
  if ( dword_ABF240 ) /*0x5bc40f*/
  {
    g_MiscFlag = 0; /*0x5bc413*/
    return (HWND)ShowWindow(dword_ABF240, 0); /*0x5bc419*/
  }
  return result; /*0x5bc41f*/
}
} // namespace gamemd
