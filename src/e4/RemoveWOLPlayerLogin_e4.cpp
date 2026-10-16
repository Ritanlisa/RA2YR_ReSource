// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AE830_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7AE830
namespace gamemd {  // G42.18 ns repair
void E4Recv_7AE830::sub_7AE830()
{

  int v12; // eax

  unsigned int vtable2; // esi
  vtable2 = (unsigned int)this->M8; /*0x7ae835*/
  if ( (ObjectClass *)vtable2 > this->nextObject && LOBYTE(this->M20) != 1 ) /*0x7ae847*/
  {
    int *vtable0; // ebp
    vtable0 = (int *)this->AbstractClass; /*0x7ae850*/
    char *vtable3; // edi
    vtable3 = (char *)this->M12; /*0x7ae853*/
    int *v13; // [esp+8h] [ebp-4h]
    v13 = (int *)this->AbstractClass; /*0x7ae856*/
    this->M8 = (unsigned int)((void *)(vtable2 >> 1)); /*0x7ae85c*/
    this->M12 = (unsigned int)(vtable3 - 1); /*0x7ae864*/
    void *v5; // edi
    v5 = __2_YAPAXI_Z(4 * (vtable2 >> 1)); /*0x7ae86f*/
    unsigned int v6; // edx
    v6 = 4 * (int)this->M8; /*0x7ae874*/
    this->AbstractClass = v5; /*0x7ae87b*/
    memset(v5, 0, v6); /*0x7ae880*/
    if ( (int)vtable2 > 0 ) /*0x7ae88b*/
    {
      int *v7 = vtable0; // edi /*0x7ae88d*/
      unsigned int v8 = vtable2; // ebp /*0x7ae88f*/
      do /*0x7ae8c3*/
      {
        int v9 = *v7; // esi /*0x7ae891*/
        if ( *v7 ) /*0x7ae891*/
        {
          do /*0x7ae8bd*/
          {
            int v10; // edx
            v10 = ((int (*)(int))this->M12)(v9) & ((1 << (int)this->M12) - 1); /*0x7ae8a7*/
            int v11; // ecx
            v11 = *((unsigned int *)this->AbstractClass + v10); /*0x7ae8ab*/
            *((unsigned int *)this->AbstractClass + v10) = v9; /*0x7ae8b1*/
            v12 = *(unsigned int *)(v9 + 8); /*0x7ae8b3*/
            *(unsigned int *)(v9 + 8) = v11; /*0x7ae8b6*/
            v9 = v12; /*0x7ae8b9*/
          }
          while ( v12 ); /*0x7ae8bd*/
        }
        ++v7; /*0x7ae8bf*/
        --v8; /*0x7ae8c2*/
      }
      while ( v8 ); /*0x7ae8c3*/
      vtable0 = v13; /*0x7ae8c5*/
    }
    __3_YAXPAX_Z(vtable0); /*0x7ae8ca*/
  }

}
}  // G42.18 ns repair