// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7AC500
namespace gamemd {
int sub_7AC500(int a1)
{
{
    int v2;
    int v3;
    int *v4;
    int *v5;
    unsigned int v6;
    if ( !a1 )
    return -2147024809;
    v2 = *(int *)(a1 + 16);
    if ( v2 && *(int *)v2 )
  {
    do
    {
    v3 = *(int *)(v2 + 16);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(int *)(v3) + 8))(*(int *)(v2 + 16));
    *(int *)(v2 + 16) = 0;
    (*(void (__stdcall **)(int))(v2 + 32))(0);
    if ( *(int *)a1 == 100 )
    v2 += 28;
    else
    v2 += 36;
    }
    while ( *(int *)v2 );
  }
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 28));
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 52));
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 76));
    v4 = *(int **)(a1 + 128);
    if ( v4 )
  {
    do
    {
    ((void (__stdcall *)(int))*v4)(v4[1]);
    v5 = (int *)v4[2];
    __3_YAXPAX_Z(v4);
    v4 = v5;
    }
    while ( v5 );
  }
    if ( *(int *)(a1 + 24) && *(char *)(a1 + 108) )
  {
    if ( *(int *)(a1 + 120) )
    {
    v6 = 0;
    do
    HeapDestroy(*(HANDLE *)(*(int *)(a1 + 120) + 4 * v6++));
    while ( v6 <= *(int *)(a1 + 116) );
    }
    HeapDestroy(*(HANDLE *)(a1 + 24));
  }
    return 0;
}
}
} // namespace gamemd
