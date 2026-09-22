// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x4A8BF0
namespace gamemd {
void Mouse::SetBounds(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  __int16 v4; // cx
  Tactical *v5; // esi
  __int16 v8; // cx
  __int16 v9; // [esp+8h] [ebp-8h] BYREF
  __int16 v10; // [esp+Ah] [ebp-6h]
  result = *(_DWORD *)(this + 4476); /*0x4a8bf7*/
  if ( result ) /*0x4a8bff*/
  {
    v4 = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a8c16*/
    v9 = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a8c1f*/
    v10 = v4; /*0x4a8c24*/
    LOBYTE(result) = MapClass::SetCellFlagsAlongPath((__int16 **)this, (IUnknown *)&v9, 0); /*0x4a8c38*/
  }
  v5 = (Tactical *)aP1; /*0x4a8c3d*/
  bool v6 = aP1 == 0; /*0x4a8c47*/
  *(_DWORD *)(this + 4472) = *(_DWORD *)&g_CellDirectionOffsets[3432]; /*0x4a8c49*/
  if ( v6 ) /*0x4a8c4f*/
  {
    *(_DWORD *)(this + 4476) = 0; /*0x4a8d1f*/
  }
  else
  {
    if ( (g_CellDirectionOffsets[3976] & 1) == 0 ) /*0x4a8c5c*/
    {
      g_CellDirectionOffsets[3976] |= 1u; /*0x4a8c68*/
      atexit(nullsub_10); /*0x4a8c6e*/
    }
    qmemcpy(&g_CellDirectionOffsets[3468], v5, 0x1E0u); /*0x4a8c85*/
    *(_DWORD *)(this + 4476) = &g_CellDirectionOffsets[3468]; /*0x4a8c8f*/
    int v7 = *CoordList::GetBounds(&aP1, (__int16 *)&g_CellDirectionOffsets[3468]); /*0x4a8c9e*/
    v9 = v7 - 1; /*0x4a8ca6*/
    v10 = HIWORD(v7) - 1; /*0x4a8cab*/
    LOWORD(aP1) = (__int16)(1 - v7) / 2; /*0x4a8cc4*/
    HIWORD(aP1) = (__int16)(1 - HIWORD(v7)) / 2; /*0x4a8cd1*/
    v8 = (__int16)aP1; /*0x4a8cd6*/
    *(_DWORD *)(this + 4472) = aP1; /*0x4a8cda*/
    LOWORD(v7) = *(_WORD *)(this + 4474) + *(_WORD *)(this + 4470); /*0x4a8cee*/
    LOWORD(aP1) = v8 + *(_WORD *)(this + 4468); /*0x4a8cf8*/
    HIWORD(aP1) = v7; /*0x4a8cfd*/
    LOBYTE(result) = MapClass::SetCellFlagsAlongPath((__int16 **)this, (IUnknown *)&aP1, (_WORD *)1); /*0x4a8d11*/
  }
  return result; /*0x4a8d17*/
}
}
} // namespace gamemd

// 0x5BDC80
namespace gamemd {
void Mouse::SetCursor(ObjectClass * aP1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char v4; // bl
  MPCooperative *v6; // edi
  CoordStruct *Ticks; // eax
  int Y_low; // ecx
  int v9; // eax
  int v10; // ebx
  int X_high; // edi
  int v12; // esi
  int v13; // [esp+10h] [ebp-Ch] BYREF
  CoordStruct *v14; // [esp+14h] [ebp-8h]
  if ( DataGlobal_82D034[7 * (_DWORD)aP1] == -1 ) /*0x5bdca6*/
  {
    v4 = 0; /*0x5bdca8*/
    LOBYTE(aP2) = 0; /*0x5bdcaa*/
  }
  else
  {
    v4 = (char)aP2; /*0x5bdcb0*/
  }
  if ( *((_BYTE *)&g_MatrixTransformState + 1229) /*0x5bdcd6*/
    && (!*(&g_MatrixTransformState + 289) || aP1 == *(ObjectClass **)(this + 21856) && v4 == *(_BYTE *)(this + 21852)) )
  {
    return 0; /*0x5bdcda*/
  }
  *((_BYTE *)&g_MatrixTransformState + 1229) = 1; /*0x5bdce4*/
  v6 = (MPCooperative *)DataGlobal_82D030[7 * (_DWORD)aP1]; /*0x5bdceb*/
  Ticks = (CoordStruct *)Timer::GetTicks(); /*0x5bdcf2*/
  Y_low = 0; /*0x5bdcfb*/
  *(&g_MatrixTransformState + 292) = Ticks; /*0x5bdcfd*/
  *(&g_MatrixTransformState + 293) = v14; /*0x5bdd02*/
  *(&g_MatrixTransformState + 294) = (CoordStruct *)v6; /*0x5bdd08*/
  *(_DWORD *)(this + 21864) = 0; /*0x5bdd0e*/
  if ( !v4 || (v9 = DataGlobal_82D034[7 * (_DWORD)aP1], v9 == -1) ) /*0x5bdd1e*/
    v9 = MouseClass_Cursors[7 * (_DWORD)aP1]; /*0x5bdd20*/
  v10 = DataGlobal_82D03C[7 * (_DWORD)aP1]; /*0x5bdd22*/
  X_high = 0; /*0x5bdd25*/
  if ( v10 == 12345 ) /*0x5bdd31*/
    X_high = SHIWORD((*(&g_MatrixTransformState + 289))->X) / 2; /*0x5bdd42*/
  if ( v10 == 54321 ) /*0x5bdd50*/
    X_high = SHIWORD((*(&g_MatrixTransformState + 289))->X); /*0x5bdd52*/
  v12 = DataGlobal_82D040[7 * (_DWORD)aP1]; /*0x5bdd56*/
  if ( v12 == 12345 ) /*0x5bdd5f*/
    Y_low = SLOWORD((*(&g_MatrixTransformState + 289))->Y) / 2; /*0x5bdd6a*/
  if ( v12 == 54321 ) /*0x5bdd72*/
    Y_low = SLOWORD((*(&g_MatrixTransformState + 289))->Y); /*0x5bdd74*/
  v14 = (CoordStruct *)Y_low; /*0x5bdd7c*/
  v13 = X_high; /*0x5bdd87*/
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(**(_DWORD **)&DataGlobal_87F8E4[32092] + 4))( /*0x5bdd93*/
    *(_DWORD *)&DataGlobal_87F8E4[32092],
    &v13,
    *(&g_MatrixTransformState + 289),
    v9);
  *(_DWORD *)(this + 21856) = aP1; /*0x5bdd9f*/
  *(_BYTE *)(this + 21852) = (_BYTE)aP2; /*0x5bdda5*/
  return 1; /*0x5bdcd8*/
}
}
} // namespace gamemd

// 0x6938C0
namespace gamemd {
void Mouse::ReleaseCapture()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
} // namespace gamemd

// 0x7B93F0
namespace gamemd {
void Mouse::DrawCursor(IUnknown * aP1, WWMouseClass * aP2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v5; // ecx
  int SubFile; // eax
  IUnknown *v9; // ecx
  int (__thiscall **v12)(void *, char); // [esp+2Ch] [ebp-20h]

  v5 = (char **)*(this + 1); /*0x7b93f9*/
  if ( v5 && aP1 && DataGlobal_87F6C8 ) /*0x7b9418*/
  {
    int v6 = *(this + 20); /*0x7b942e*/
    int v7 = *(this + 21); /*0x7b9431*/
    SubFile = MixFileClass::GetSubFile(v5, *(this + 2)); /*0x7b9440*/
    int v13 = v6; /*0x7b9447*/
    int v14 = v7; /*0x7b9454*/
    int v15 = 0; /*0x7b9458*/
    int v16 = 1; /*0x7b9468*/
  _DWORD v17[3]; // [esp+40h] [ebp-Ch] BYREF
    Buffer::Init(v17, SubFile, (AbstractClass *)(v7 * v6)); /*0x7b9470*/
    v9 = aP1; /*0x7b9479*/
    v12 = &BSurface_Vtable; /*0x7b947d*/
    if ( aP1 != (IUnknown *)*(this + 9) ) /*0x7b9488*/
    {
  _BYTE v11[16]; // [esp+1Ch] [ebp-30h] BYREF
      (*(void (__thiscall **)(IUnknown *, _BYTE *))(aP1->field_0 + 120))(aP1, v11); /*0x7b94f6*/
      v9 = aP1; /*0x7b9508*/
    }
    BlitterDrawSHP(v9); /*0x7b9516*/
    Vector::Clear((int)v17); /*0x7b951f*/
  }
}
}
} // namespace gamemd

// 0x53EC90
namespace gamemd {
SHORT Mouse::GetKeyState()
{
{
    if ( g_StreamBufferState )
    return DataGlobal_AA0168[this];
    else
    return GetAsyncKeyState(this);
}
}
} // namespace gamemd

// 0x54F5C0
namespace gamemd {
BOOL Mouse::IsButtonDown(unsigned char a1)
{
{
    unsigned short v1;
    v1 = a1;
    if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 )
    v1 = 2 - (a1 != 1);
    return (unsigned short)Mouse::GetKeyState(v1) != 0;
}
}
} // namespace gamemd

// 0x5BC400
namespace gamemd {
HWND Mouse::HideWindow()
{
{
    HWND result;
    result = DataGlobal_ABF240;
    DataGlobal_ABF239 = 0;
    if ( DataGlobal_ABF240 )
  {
    g_MiscFlag = 0;
    return (HWND)ShowWindow(DataGlobal_ABF240, 0);
  }
    return result;
}
}
} // namespace gamemd
