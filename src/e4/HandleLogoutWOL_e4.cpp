// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7AC500
namespace gamemd {
int sub_7AC500(int a1)
{
  int v2; // esi
  int v3; // eax
  unsigned int *v4; // esi
  unsigned int *v5; // ebp
  unsigned int v6; // esi

  if ( !a1 ) /*0x7ac507*/
    return -2147024809; /*0x7ac509*/
  v2 = *(unsigned int *)(a1 + 16); /*0x7ac514*/
  if ( v2 && *(unsigned int *)v2 ) /*0x7ac51b*/
  {
    do /*0x7ac546*/
    {
      v3 = *(unsigned int *)(v2 + 16); /*0x7ac520*/
      if ( v3 ) /*0x7ac525*/
        (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v3 + 8))(*(unsigned int *)(v2 + 16)); /*0x7ac52a*/
      *(unsigned int *)(v2 + 16) = 0; /*0x7ac52f*/
      (*(void (__stdcall **)(unsigned int))(v2 + 32))(0); /*0x7ac536*/
      if ( *(unsigned int *)a1 == 100 ) /*0x7ac53c*/
        v2 += 28; /*0x7ac53e*/
      else
        v2 += 36; /*0x7ac543*/
    }
    while ( *(unsigned int *)v2 ); /*0x7ac546*/
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 28)); /*0x7ac555*/
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 52)); /*0x7ac55b*/
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 76)); /*0x7ac561*/
  v4 = *(unsigned int **)(a1 + 128); /*0x7ac563*/
  if ( v4 ) /*0x7ac56b*/
  {
    do /*0x7ac583*/
    {
      ((void (__stdcall *)(unsigned int))*v4)(v4[1]); /*0x7ac571*/
      v5 = (unsigned int *)v4[2]; /*0x7ac573*/
      RA2_OPDEL(v4); /*0x7ac577*/
      v4 = v5; /*0x7ac57f*/
    }
    while ( v5 ); /*0x7ac583*/
  }
  if ( *(unsigned int *)(a1 + 24) && *(unsigned char *)(a1 + 108) ) /*0x7ac58c*/
  {
    if ( *(unsigned int *)(a1 + 120) ) /*0x7ac593*/
    {
      v6 = 0; /*0x7ac5a0*/
      do /*0x7ac5b1*/
        HeapDestroy(*(HANDLE *)(*(unsigned int *)(a1 + 120) + 4 * v6++)); /*0x7ac5a9*/
      while ( v6 <= *(unsigned int *)(a1 + 116) ); /*0x7ac5b1*/
    }
    HeapDestroy(*(HANDLE *)(a1 + 24)); /*0x7ac5b7*/
  }
  return 0; /*0x7ac50e*/
}
} // namespace gamemd
