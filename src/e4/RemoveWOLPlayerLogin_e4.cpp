// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AE830_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7AE830
namespace gamemd {
void E4Recv_7AE830::sub_7AE830()
{
  unsigned int vtable2; // esi
  int *vtable0; // ebp
  char *vtable3; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

    v2 = *((unsigned int *)this + 8);
    if ( v2 > *((unsigned int *)this + 48) && *((unsigned char *)this + 20) != 1 )
  {
    vtable0 = (int *)((unsigned int)((int *)this->AbstractClass));
    vtable3 = (unsigned int)((char *)this->?);
    v13 = (int *)((unsigned int)((int *)this->AbstractClass));
        *((unsigned int *)this + 8) = v2 >> 1;
        *((unsigned int *)this + 12) = v4 - 1;
    v5 = (void *)RA2_OPNEW(4 * (vtable2 >> 1)); /*0x7ae86f*/
        v6 = 4 * *((unsigned int *)this + 8);
    this->AbstractClass = v5; /*0x7ae87b*/
    memset(v5, 0, v6); /*0x7ae880*/
    if ( (int)vtable2 > 0 ) /*0x7ae88b*/
    {
      v7 = vtable0; /*0x7ae88d*/
      v8 = vtable2; /*0x7ae88f*/
      do /*0x7ae8c3*/
      {
        v9 = *v7; /*0x7ae891*/
        if ( *v7 ) /*0x7ae891*/
        {
          do /*0x7ae8bd*/
          {
                        v10 = ((int (*)(int))*((unsigned int *)this + 24))(v9) & ((1 << *((unsigned int *)this + 12)) - 1);
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
    RA2_OPDEL(vtable0); /*0x7ae8ca*/
  }
}
}