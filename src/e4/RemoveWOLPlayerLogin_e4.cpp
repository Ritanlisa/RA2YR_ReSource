// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AE830_e4.hpp"

// 0x7AE830
namespace gamemd {
void E4Recv_7AE830::sub_7AE830()
{
{

  unsigned int v2 = *(this + 2); /*0x7ae835*/
  if ( v2 > *(this + 12) && (unsigned char)this->M20 != 1 ) /*0x7ae847*/
  {
    int * v3 = (int *)*this; /*0x7ae850*/
    int v4 = *(this + 3); /*0x7ae853*/
    int * v13 = (int *)*this; /*0x7ae856*/
    *(this + 2) = v2 >> 1; /*0x7ae85c*/
    *(this + 3) = v4 - 1; /*0x7ae864*/
    AbstractClass *v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7ae86f*/
    unsigned int v6 = 4 * *(this + 2); /*0x7ae874*/
    *this = v5; /*0x7ae87b*/
    memset(v5, 0, v6); /*0x7ae880*/
    if ( (int)v2 > 0 ) /*0x7ae88b*/
    {
      rc_ptr_base *v7 = v3; /*0x7ae88d*/
      unsigned int v8 = v2; /*0x7ae88f*/
      do /*0x7ae8c3*/
      {
        int v9 = *v7; /*0x7ae891*/
        if ( *v7 ) /*0x7ae891*/
        {
  int v12; // eax
          do /*0x7ae8bd*/
          {
            int v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << *(this + 3)) - 1); /*0x7ae8a7*/
            int v11 = *(_DWORD *)(*this + 4 * v10); /*0x7ae8ab*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7ae8b1*/
            v12 = *(_DWORD *)(v9 + 8); /*0x7ae8b3*/
            *(_DWORD *)(v9 + 8) = v11; /*0x7ae8b6*/
            v9 = v12; /*0x7ae8b9*/
          }
          while ( v12 ); /*0x7ae8bd*/
        }
        ++v7; /*0x7ae8bf*/
        --v8; /*0x7ae8c2*/
      }
      while ( v8 ); /*0x7ae8c3*/
      v3 = v13; /*0x7ae8c5*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae8ca*/
  }
}
} // namespace gamemd
