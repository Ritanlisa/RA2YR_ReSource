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

  unsigned int pN; // esi
  unsigned int **vfptr; // ebp
  int pN; // edi
  void *v5; // edi
  unsigned int v6; // edx
  unsigned int **v7; // edi
  unsigned int v8; // ebp
  unsigned int *v9; // esi
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int *v12; // eax
  int v13; // [esp+8h] [ebp-4h]

  pN = this->ptr_8; /*0x7ae835*/
  if ( pN > this->nextObject && LOBYTE(this->abstractFlags) != 1 ) /*0x7ae847*/
  {
    vfptr = (unsigned int **)this->ptr_0; /*0x7ae850*/
    pN = this->ptr_C; /*0x7ae853*/
    v13 = this->ptr_0; /*0x7ae856*/
    this->ptr_8 = pN >> 1; /*0x7ae85c*/
    this->ptr_C = pN - 1; /*0x7ae864*/
    v5 = (void *)__2_YAPAXI_Z(4 * (pN >> 1)); /*0x7ae86f*/
    v6 = 4 * this->ptr_8; /*0x7ae874*/
    this->ptr_0 = (int)v5; /*0x7ae87b*/
    memset(v5, 0, v6); /*0x7ae880*/
    if ( (int)pN > 0 ) /*0x7ae88b*/
    {
      v7 = vfptr; /*0x7ae88d*/
      v8 = pN; /*0x7ae88f*/
      do /*0x7ae8c3*/
      {
        v9 = *v7; /*0x7ae891*/
        if ( *v7 ) /*0x7ae891*/
        {
          do /*0x7ae8bd*/
          {
            v10 = ((int (*)(unsigned int *))this->nextArrayIndex)(v9) & ((1 << this->ptr_C) - 1); /*0x7ae8a7*/
            v11 = *(unsigned int *)(this->ptr_0 + 4 * v10); /*0x7ae8ab*/
            *(unsigned int *)(this->ptr_0 + 4 * v10) = v9; /*0x7ae8b1*/
            v12 = (unsigned int *)v9[2]; /*0x7ae8b3*/
            v9[2] = v11; /*0x7ae8b6*/
            v9 = v12; /*0x7ae8b9*/
          }
          while ( v12 ); /*0x7ae8bd*/
        }
        ++v7; /*0x7ae8bf*/
        --v8; /*0x7ae8c2*/
      }
      while ( v8 ); /*0x7ae8c3*/
      vfptr = (unsigned int **)v13; /*0x7ae8c5*/
    }
    __3_YAXPAX_Z(vfptr); /*0x7ae8ca*/
  }

}
}  // G42.18 ns repair