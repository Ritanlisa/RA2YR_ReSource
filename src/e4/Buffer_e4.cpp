// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"

// 0x7BCB50
namespace gamemd {
void * Buffer::FillCircularBufferScroll2(int a2, MouseClass * aP2, unsigned short a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7BCB50)
}
} // namespace gamemd
// 0x7C1730
namespace gamemd {
int Buffer::AllocateCodecFrameBuffers()
{

  unsigned int *v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  bool v20; // cf
  int v21; // [esp+10h] [ebp-20h]
  int v22; // [esp+14h] [ebp-1Ch]
  int v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-14h]
  int v25; // [esp+20h] [ebp-10h]
  int *v26; // [esp+20h] [ebp-10h]
  unsigned int v27; // [esp+24h] [ebp-Ch]
  int v28; // [esp+28h] [ebp-8h] BYREF
  unsigned int v29; // [esp+2Ch] [ebp-4h]

  if ( (*((int (**)(Buffer *, int, int *, int))(unsigned int *)this + 16))(this, 5, &v28, 8) ) /*0x7c1743*/
    return -2; /*0x7c1759*/
  if ( v28 != 1212371789 ) /*0x7c1762*/
    return -4; /*0x7c1770*/
  v3 = (unsigned int *)((char *)this + 1852); /*0x7c1775*/
  v4 = ((((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8)) + 1; /*0x7c179e*/
  LOBYTE(v4) = (HIBYTE(v29) + 1) & 0xFE; /*0x7c179f*/
  if ( (*((int (**)(Buffer *, int, char *, unsigned int))(unsigned int *)this + 16))(this, 5, (char *)this + 1852, v4) ) /*0x7c17a6*/
    return -4; /*0x7c17bc*/
  v5 = *v3; /*0x7c17bd*/
  if ( !*v3 ) /*0x7c17bd*/
    goto LABEL_16; /*0x7c17bd*/
  v6 = 16 * v5; /*0x7c17cc*/
  v7 = (*((int (**)(Buffer *, int, unsigned int, unsigned int))(unsigned int *)this + 17))(this, 2, 0, 16 * v5); /*0x7c17d3*/
  *((unsigned int *)this + 465) = v7; /*0x7c17db*/
  if ( !v7 ) /*0x7c17e1*/
    return -8; /*0x7c17ef*/
  (*((void (**)(Buffer *, int, int, int))(unsigned int *)this + 17))(this, 4, v7, v6); /*0x7c17f5*/
  *((unsigned int *)this + 12) += v6; /*0x7c17ff*/
  if ( (*((int (**)(Buffer *, int, int *, int))(unsigned int *)this + 16))(this, 5, &v28, 8) ) /*0x7c180a*/
    return -2; /*0x7c1820*/
  if ( v28 != 1413698381 ) /*0x7c1829*/
    return -4; /*0x7c1837*/
  v8 = ((((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8)) + 1; /*0x7c185f*/
  LOBYTE(v8) = (HIBYTE(v29) + 1) & 0xFE; /*0x7c1860*/
  if ( (*((int (**)(Buffer *, int, unsigned int, unsigned int))(unsigned int *)this + 16))(this, 5, *((unsigned int *)this + 465), v8) ) /*0x7c186d*/
    return -4; /*0x7c187a*/
LABEL_16:
  v9 = *v3; /*0x7c1884*/
  v27 = v9; /*0x7c1888*/
  if ( !v9 ) /*0x7c188c*/
    return -1; /*0x7c19de*/
  v10 = (*((int (**)(Buffer *, int, unsigned int, unsigned int))(unsigned int *)this + 17))(this, 2, 0, 12 * v9); /*0x7c189d*/
  *((unsigned int *)this + 466) = v10; /*0x7c18a5*/
  if ( v10 ) /*0x7c18ab*/
  {
    (*((void (**)(Buffer *, int, int, unsigned int))(unsigned int *)this + 17))(this, 4, v10, 12 * v9); /*0x7c18bf*/
    *((unsigned int *)this + 12) += 12 * v9; /*0x7c18cc*/
    v24 = 0; /*0x7c18cf*/
    v11 = 0; /*0x7c18d9*/
    v21 = 0; /*0x7c18db*/
    v22 = 0; /*0x7c18df*/
    while ( 1 ) /*0x7c18ed*/
    {
      v12 = *((unsigned int *)this + 34); /*0x7c18ed*/
      v13 = *((unsigned int *)this + 466); /*0x7c18f3*/
      v25 = v13; /*0x7c18fd*/
      v23 = *(unsigned int *)(v21 + *((unsigned int *)this + 465) + 4); /*0x7c1903*/
      if ( v12 > 0 ) /*0x7c1907*/
      {
        *(unsigned int *)(v11 + v13) = v12; /*0x7c1911*/
        *(unsigned int *)(v11 + v13 + 4) = 0; /*0x7c191d*/
        v14 = (*((int (**)(Buffer *, int, unsigned int, int))(unsigned int *)this + 17))(this, 2, 0, 12 * v12); /*0x7c1925*/
        v15 = v14; /*0x7c1928*/
        if ( !v14 ) /*0x7c192f*/
          return -8; /*0x7c192f*/
        (*((void (**)(Buffer *, int, int, int))(unsigned int *)this + 17))(this, 4, v14, 12 * v12); /*0x7c193a*/
        *((unsigned int *)this + 12) += 12 * v12; /*0x7c194d*/
        v16 = v12 * ((v23 + 1) & 0xFFFFFFFE); /*0x7c1957*/
        v26 = (int *)(v22 + v25 + 8); /*0x7c1964*/
        *v26 = v15; /*0x7c1968*/
        v17 = (*((int (**)(Buffer *, int, unsigned int, unsigned int))(unsigned int *)this + 17))(this, 2, 0, v16); /*0x7c196a*/
        v18 = v17; /*0x7c196d*/
        if ( !v17 ) /*0x7c1974*/
          return -8; /*0x7c1974*/
        (*((void (**)(Buffer *, int, int, unsigned int))(unsigned int *)this + 17))(this, 4, v17, v16); /*0x7c197f*/
        *((unsigned int *)this + 12) += v16; /*0x7c198c*/
        v19 = 0; /*0x7c1991*/
        do /*0x7c19b1*/
        {
          v19 += 12; /*0x7c199b*/
          *(unsigned int *)(*v26 + v19 - 12) = v18; /*0x7c19a0*/
          v18 += v23; /*0x7c19a6*/
          --v12; /*0x7c19a8*/
          *(unsigned int *)(*v26 + v19 - 4) = -1; /*0x7c19a9*/
        }
        while ( v12 ); /*0x7c19b1*/
        v9 = v27; /*0x7c19b3*/
        v11 = v22; /*0x7c19b7*/
      }
      v11 += 12; /*0x7c19c7*/
      v20 = ++v24 < v9; /*0x7c19ca*/
      v21 += 16; /*0x7c19d0*/
      v22 = v11; /*0x7c19d4*/
      if ( !v20 ) /*0x7c19d8*/
        return -1; /*0x7c19d8*/
    }
  }
  return -8; /*0x7c174d*/

}
} // namespace gamemd
// 0x43AD00
namespace gamemd {
_DWORD * Buffer::Init(int a2, int Size, int aP2, int a3, int aP1)
{

  this->Buffer_field_00 = (unsigned int)(a2);
  this->Buffer_field_04 = (unsigned int)(aP2);
  LOBYTE(this->Buffer_field_08) = 0; /*0x43ad12*/
  if ( !a2 && aP2 > 0 ) /*0x43ad1a*/
  {
    this->Buffer_field_00 = (unsigned int)(__2_YAPAXI_Z((unsigned int)(aP2))); /*0x43ad25*/
    LOBYTE(this->Buffer_field_08) = 1; /*0x43ad27*/
  }
  return &this->Buffer_field_00; /*0x43ad2d*/

}
} // namespace gamemd
// 0x488030
namespace gamemd {
DynamicVector * Buffer::Constructor_VectorClass_ObjectClass___(char a2, int a3, int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x488030)
}
} // namespace gamemd
// 0x632B70
namespace gamemd {
int * Buffer::RotateBufferCrypto(int * a2, int a3)
{

  int v4[64]; // [esp+8h] [ebp-100h] BYREF

  qmemcpy(v4, this, sizeof(v4)); /*0x632b8c*/
  RotateBitBufferLeft(v4, a3, 64); /*0x632b92*/
  qmemcpy(a2, v4, 0x100u); /*0x632ba9*/
  return a2; /*0x632bab*/

}
} // namespace gamemd
// 0x6C89E0
namespace gamemd {
int Buffer::AppendCellData(AbstractClass * aP1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C89E0)
}
} // namespace gamemd