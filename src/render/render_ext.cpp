#include "render/render_ext.hpp"

namespace gamemd {

// --- BlitPlainXlatAlpha_ushort ---

// 0x493cc0
int BlitPlainXlatAlpha_ushort::BlitPlainXlatAlpha_ushort::AddRef(int a2, unsigned __int8 *a3, int a4, int a5, int a6, unsigned __int16 *a7, int a8, int a9)
{
  int v10; // eax
  int v11; // ebp
  int result; // eax
  unsigned __int16 v15; // ax
  unsigned __int16 *v16; // [esp+24h] [ebp+18h]
  unsigned __int8 v17; // [esp+28h] [ebp+1Ch]

  v10 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v10 > 254 ) /*0x493ce7*/
    v10 = 254; /*0x493ce9*/
  v11 = this->q008 + (v10 << 9); /*0x493cf6*/
  result = a4; /*0x493cf8*/
  if ( a4 > 0 ) /*0x493cfe*/
  {
    v16 = (unsigned __int16 *)a4; /*0x493d09*/
    do /*0x493d53*/
    {
      v17 = *a3; /*0x493d11*/
      v15 = *a7++; /*0x493d17*/
      ++a3; /*0x493d1d*/
      a2 += 2; /*0x493d1e*/
      *(_WORD *)(a2 - 2) = *(_WORD *)(*(_DWORD *)&this->m_1[3] + 2 * (v17 | *(unsigned __int16 *)(v11 + 2 * v15))); /*0x493d38*/
      if ( (unsigned int)a7 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.q0D8[60] + 28) ) /*0x493d45*/
        a7 = (unsigned __int16 *)((char *)a7 - *(_DWORD *)(*(_DWORD *)&stru_87E790.q0D8[60] + 32)); /*0x493d47*/
      result = (int)v16 - 1; /*0x493d4e*/
      v16 = (unsigned __int16 *)((char *)v16 - 1); /*0x493d4f*/
    }
    while ( v16 ); /*0x493d53*/
  }
  return result; /*0x493d56*/
}
// 0x493d90
void BlitPlainXlatAlpha_ushort::Release() {
  return (*(int (__thiscall **)(_BlitPlainXlatAlpha_G *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->q000 + 4))( /*0x493dba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}