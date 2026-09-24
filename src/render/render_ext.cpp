#include "render/render_ext.hpp"

namespace gamemd {

// --- BlitPlainXlatAlpha_ushort ---

// 0x493cc0
void BlitPlainXlatAlpha_ushort::AddRef() {}
  int v10; // eax
  int v11; // ebp
  int result; // eax
  unsigned __int16 v15; // ax
  int v16; // [esp+24h] [ebp+18h]
  unsigned __int8 v17; // [esp+28h] [ebp+1Ch]

  v10 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v10 > 254 ) /*0x493ce7*/
    v10 = 254; /*0x493ce9*/
  v11 = *(this + 2) + (v10 << 9); /*0x493cf6*/
  result = a4; /*0x493cf8*/
  if ( a4 > 0 ) /*0x493cfe*/
  {
    v16 = a4; /*0x493d09*/
    do /*0x493d53*/
    {
      v17 = *a3; /*0x493d11*/
      v15 = *a7++; /*0x493d17*/
      ++a3; /*0x493d1d*/
      a2 += 2; /*0x493d1e*/
      *(_WORD *)(a2 - 2) = *(_WORD *)(*(this + 1) + 2 * (v17 | *(unsigned __int16 *)(v11 + 2 * v15))); /*0x493d38*/
      if ( (unsigned int)a7 >= *((_DWORD *)g_VisibleSurfaceDescriptor + 7) ) /*0x493d45*/
        a7 = (unsigned __int16 *)((char *)a7 - *((_DWORD *)g_VisibleSurfaceDescriptor + 8)); /*0x493d47*/
      result = --v16; /*0x493d4e*/
    }
    while ( v16 ); /*0x493d53*/
  }
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
  return result; /*0x493d56*/
// 0x493d90
void BlitPlainXlatAlpha_ushort::Release() {}
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x493dba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
