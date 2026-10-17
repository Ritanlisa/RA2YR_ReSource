// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/IPXInterfaceClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x4A3020
namespace gamemd {  // G42.18 ns repair
int IStream::Read(void * pstm, ULONG cb, void *a3)
{

  unsigned int *v3; // ecx
  unsigned int *v4; // esi
  unsigned int v5; // ecx
  int result; // eax
  void *v7; // [esp+20h] [ebp-4h] BYREF

  v4 = v3; /*0x4a3026*/
  v7 = a3; /*0x4a302d*/
  WriteCompressionBlock(pstm, (unsigned int)a3, (unsigned char *)v3[7], (int *)&v7, v3[8]); /*0x4a303e*/
  v5 = (unsigned int)v7; /*0x4a3043*/
  v4[10] = 0x10000; /*0x4a304a*/
  a3 = 0; /*0x4a3051*/
  v4[9] = v5; /*0x4a3059*/
  if ( !v4[2] ) /*0x4a305b*/
    sub_7DC720(-2147467261); /*0x4a3067*/
  result = (*(int (**)(unsigned int, unsigned int *, int, void **))(*(unsigned int *)v4[2] + 16))( /*0x4a307a*/
             v4[2],
             v4 + 9,
             8,
             &a3);
  if ( result >= 0 )
  {
    if ( a3 == 8 )
    {
      if ( !v4[2] ) /*0x4a3093*/
        sub_7DC720(-2147467261); /*0x4a309f*/
      result = (*(int (**)(unsigned int, unsigned int, void *, void **))(*(unsigned int *)v4[2] + 16))( /*0x4a30b8*/
                 v4[2],
                 v4[7],
                 v7,
                 &a3);
      if ( result >= 0 )
        return v7 != a3 ? 0x80004005 : 0;
    }
    else
    {
      return -2147467259; /*0x4a3089*/
    }
  }
  return result; /*0x4a3088*/

}
} // namespace gamemd