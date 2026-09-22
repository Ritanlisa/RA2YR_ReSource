// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4A3020
int IStream::Read(IStream * pstm, void * pv, ULONG cb)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HRESULT result; // eax

  _DWORD * v3 = v3; /*0x4a3026*/
  void * v7 = pv; /*0x4a302d*/
  WriteCompressionBlock(v3[7], &v7, v3[8]); /*0x4a303e*/
  void * v5 = v7; /*0x4a3043*/
  _DWORD * v4 = 0x10000; /*0x4a304a*/
  pv = 0; /*0x4a3051*/
  v4[9] = v5; /*0x4a3059*/
  if ( !v4[2] ) /*0x4a305b*/
    WinAPI::Wrapper(-2147467261); /*0x4a3067*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD *, int, void **))(*(_DWORD *)v4[2] + 16))(v4[2], v4 + 9, 8, &pv); /*0x4a307a*/
  if ( result >= 0 )
  {
    if ( pv == (void *)8 )
    {
      if ( !v4[2] ) /*0x4a3093*/
        WinAPI::Wrapper(-2147467261); /*0x4a309f*/
      result = (*(int (__stdcall **)(_DWORD, _DWORD, void *, void **))(*(_DWORD *)v4[2] + 16))(v4[2], v4[7], v7, &pv); /*0x4a30b8*/
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
}
