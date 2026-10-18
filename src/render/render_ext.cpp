#include "render/render_ext.hpp"

namespace gamemd {

// --- BlitPlainXlatAlpha_ushort ---

// 0x493cc0
int BlitPlainXlatAlpha_ushort::AddRef(int a2, uint8_t *a3, int a4, int a5, int a6, uint16_t *a7, int a8, int a9)
{
  int v10; // eax
  int v11; // ebp
  int result; // eax
  uint16_t v15; // ax
  uint16_t *v16; // [esp+24h] [ebp+18h]
  uint8_t v17; // [esp+28h] [ebp+1Ch]

  v10 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v10 > 254 ) /*0x493ce7*/
    v10 = 254; /*0x493ce9*/
  v11 = this->u32_8 + (v10 << 9); /*0x493cf6*/
  result = a4; /*0x493cf8*/
  if ( a4 > 0 ) /*0x493cfe*/
  {
    v16 = (uint16_t *)a4; /*0x493d09*/
    do /*0x493d53*/
    {
      v17 = *a3; /*0x493d11*/
      v15 = *a7++; /*0x493d17*/
      ++a3; /*0x493d1d*/
      a2 += 2; /*0x493d1e*/
      *(unsigned short *)(a2 - 2) = *(unsigned short *)(*&this->Data + 2 * (v17 | *(uint16_t *)(v11 + 2 * v15))); /*0x493d38*/
      if ( (unsigned int)a7 >= *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 28) ) /*0x493d45*/
        a7 = (uint16_t *)((char *)a7 - *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x493d47*/
      result = (int)v16 - 1; /*0x493d4e*/
      v16 = (uint16_t *)((char *)v16 - 1); /*0x493d4f*/
    }
    while ( v16 ); /*0x493d53*/
  }
  return result; /*0x493d56*/
}
// 0x493d90
void BlitPlainXlatAlpha_ushort::Release() {
  return this->AddRef(/*0x493dba*/
           this, a2, a3, a4, a5, a6, a7, a8, 0);
}
} // namespace gamemd