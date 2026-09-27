// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x4A3020
namespace gamemd {
int IStream::Read(IStream * pstm, void * pv, ULONG cb)
{
  unsigned int *v3; // ecx
  unsigned int *v4; // esi
  void *v5; // ecx
  HRESULT result; // eax
  void *v7; // [esp+20h] [ebp-4h] BYREF

  v4 = (unsigned int)(v3);
  v7 = pv; /*0x4a302d*/
  WriteCompressionBlock(v3[7], &v7, v3[8]); /*0x4a303e*/
  v5 = v7; /*0x4a3043*/
  v4[10] = 0x10000; /*0x4a304a*/
  pv = 0; /*0x4a3051*/
  v4[9] = v5; /*0x4a3059*/
  if ( !v4[2] ) /*0x4a305b*/
    WinAPI::Wrapper(-2147467261); /*0x4a3067*/
  result = (*(int (__stdcall **)(unsigned int, unsigned int *, int, void **))(*(unsigned int *)v4[2] + 16))(v4[2], v4 + 9, 8, &pv); /*0x4a307a*/
  if ( result >= 0 )
  {
    if ( pv == (void *)8 )
    {
      if ( !v4[2] ) /*0x4a3093*/
        WinAPI::Wrapper(-2147467261); /*0x4a309f*/
      result = (*(int (__stdcall **)(unsigned int, unsigned int, void *, void **))(*(unsigned int *)v4[2] + 16))(v4[2], v4[7], v7, &pv); /*0x4a30b8*/
      if ( result >= 0 )
        return v7 != pv ? 0x80004005 : 0;
    }
    else
    {
      return -2147467259; /*0x4a3089*/
    }
  }
  return result; /*0x4a3088*/
}
} // namespace gamemd