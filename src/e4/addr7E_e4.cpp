// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_7B9530_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/AudioConfig_e4.hpp"

// 0x7E0000
namespace gamemd {
void nullsub_272()
{
  ; /*0x7e0000*/
}
} // namespace gamemd

// 0x7E0001
namespace gamemd {
void  __spoils<ecx> sub_7E0001(int * a1, unsigned int * a2, int a3, int a4, int a5)
{
  unsigned int v6; // ecx
  unsigned int *v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebx
  uint16_t v11; // ax
  unsigned char *v12; // edi

  do /*0x7e0099*/
  {
    v6 = (unsigned int)(a4 - 2) >> 1; /*0x7e001b*/
    v7 = a2; /*0x7e001d*/
    do /*0x7e0074*/
    {
      v8 = *a1; /*0x7e0040*/
      a1 = (int *)((char *)a1 + 2); /*0x7e0042*/
      v9 = __ROR4__(v8, 8); /*0x7e004f*/
      IDA_LOBYTE(v9) = byte_A8F91C[(uint16_t)v8]; /*0x7e0052*/
      IDA_BYTE1(v9) = IDA_BYTE1(v8); /*0x7e0058*/
      v10 = __ROR4__(v9, 8); /*0x7e005f*/
      IDA_BYTE1(v10) = byte_A8F91C[(v8 & 0xFFFF00u) >> 8]; /*0x7e0065*/
      *v7++ = __ROR4__(v10, 16); /*0x7e006e*/
      --v6; /*0x7e0073*/
    }
    while ( v6 ); /*0x7e0074*/
    v11 = *(unsigned short *)a1; /*0x7e0078*/
    *(unsigned char *)v7 = *(unsigned short *)a1; /*0x7e007b*/
    v12 = (char *)v7 + 1; /*0x7e007d*/
    a1 = (int *)((char *)a1 + 2); /*0x7e007e*/
    *v12++ = byte_A8F91C[v11]; /*0x7e0087*/
    *v12 = IDA_HIBYTE(v11); /*0x7e008a*/
    v12[1] = 0; /*0x7e008d*/
    a2 = (unsigned int *)((char *)a2 + a5); /*0x7e0093*/
    --a3; /*0x7e0096*/
  }
  while ( a3 ); /*0x7e0099*/
}
} // namespace gamemd

// 0x7E00A6
namespace gamemd {
void  __spoils<ecx> sub_7E00A6(int * a1, char * a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int *v6; // ecx
  unsigned int *v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  uint16_t v12; // ax
  unsigned char *v13; // edi
  unsigned char *v14; // ecx
  unsigned int v15; // [esp+0h] [ebp-Ch]
  char *v17; // [esp+8h] [ebp-4h]

  do /*0x7e0167*/
  {
    v15 = (a4 - 2) >> 1; /*0x7e00c8*/
    v6 = &byte_879124; /*0x7e00cb*/
    v7 = a2; /*0x7e00d0*/
    do /*0x7e011b*/
    {
      v8 = *a1; /*0x7e00e0*/
      a1 = (int *)((char *)a1 + 2); /*0x7e00e2*/
      v9 = __ROR4__(v8, 8); /*0x7e00ef*/
      IDA_LOBYTE(v9) = byte_A8F91C[(uint16_t)v8]; /*0x7e00f2*/
      IDA_BYTE1(v9) = IDA_BYTE1(v8); /*0x7e00f8*/
      v10 = __ROR4__(v9, 8); /*0x7e00ff*/
      IDA_BYTE1(v10) = byte_A8F91C[(v8 & 0xFFFF00u) >> 8]; /*0x7e0105*/
      v11 = __ROR4__(v10, 16); /*0x7e010b*/
      *v7 = v11; /*0x7e010e*/
      *v6 = v11; /*0x7e0110*/
      ++v7; /*0x7e0112*/
      ++v6; /*0x7e0115*/
      --v15; /*0x7e0118*/
    }
    while ( v15 ); /*0x7e011b*/
    v12 = *(unsigned short *)a1; /*0x7e011f*/
    *(unsigned char *)v7 = *(unsigned short *)a1; /*0x7e0122*/
    *(unsigned char *)v6 = v12; /*0x7e0124*/
    v13 = (char *)v7 + 1; /*0x7e0126*/
    v14 = (char *)v6 + 1; /*0x7e0127*/
    IDA_LOBYTE(v12) = byte_A8F91C[v12]; /*0x7e012b*/
    *v13 = v12; /*0x7e0131*/
    *v14 = v12; /*0x7e0133*/
    ++v13; /*0x7e0135*/
    ++v14; /*0x7e0136*/
    *v13 = IDA_HIBYTE(v12); /*0x7e0137*/
    *v14 = IDA_HIBYTE(v12); /*0x7e0139*/
    v13[1] = 0; /*0x7e013d*/
    v14[1] = 0; /*0x7e0140*/
    v17 = &a2[a5 >> 1]; /*0x7e0148*/
    qmemcpy(v17, &byte_879124, 4 * (a4 >> 1)); /*0x7e015a*/
    a1 = (int *)((char *)a1 + 2); /*0x7e015d*/
    a2 = &v17[a5 >> 1]; /*0x7e015e*/
    --a3; /*0x7e0164*/
  }
  while ( a3 ); /*0x7e0167*/
}
} // namespace gamemd

// 0x7E0170
namespace gamemd {
void  __spoils<ecx> ObfuscateDataBlock(int * a1, unsigned int * a2, int a3)
{
  unsigned int v3; // ecx
  int v6; // eax
  int v7; // ebx
  int v8; // ebx
  uint16_t v9; // ax
  unsigned char *v10; // edi

  v3 = (unsigned int)(a3 - 2) >> 1; /*0x7e017a*/
  do /*0x7e01b6*/
  {
    v6 = *a1; /*0x7e0182*/
    a1 = (int *)((char *)a1 + 2); /*0x7e0184*/
    v7 = __ROR4__(v6, 8); /*0x7e0191*/
    IDA_LOBYTE(v7) = byte_A8F91C[(uint16_t)v6]; /*0x7e0194*/
    IDA_BYTE1(v7) = IDA_BYTE1(v6); /*0x7e019a*/
    v8 = __ROR4__(v7, 8); /*0x7e01a1*/
    IDA_BYTE1(v8) = byte_A8F91C[(v6 & 0xFFFF00u) >> 8]; /*0x7e01a7*/
    *a2++ = __ROR4__(v8, 16); /*0x7e01b0*/
    --v3; /*0x7e01b5*/
  }
  while ( v3 ); /*0x7e01b6*/
  v9 = *(unsigned short *)a1; /*0x7e01ba*/
  *(unsigned char *)a2 = *(unsigned short *)a1; /*0x7e01bd*/
  v10 = (char *)a2 + 1; /*0x7e01bf*/
  *v10++ = byte_A8F91C[v9]; /*0x7e01c6*/
  *v10 = IDA_HIBYTE(v9); /*0x7e01c9*/
  v10[1] = 0; /*0x7e01cc*/
}
} // namespace gamemd

// 0x7E01D2
namespace gamemd {
void  __spoils<ecx> sub_7E01D2(unsigned char * a1, unsigned char * a2, unsigned char * a3, int a4)
{
  int v7; // eax
  int v8; // ecx

  IDA_HIWORD(v7) = 0; /*0x7e01df*/
  v8 = 2 * a4; /*0x7e01e4*/
  do /*0x7e01f6*/
  {
    IDA_LOBYTE(v7) = *a1; /*0x7e01e6*/
    IDA_BYTE1(v7) = *a2; /*0x7e01e8*/
    ++a1; /*0x7e01ea*/
    ++a2; /*0x7e01eb*/
    *a3++ = byte_A8F91C[v7]; /*0x7e01f2*/
    --v8; /*0x7e01f5*/
  }
  while ( v8 ); /*0x7e01f6*/
}
} // namespace gamemd

// 0x7E01FB
namespace gamemd {
void sub_7E01FB(int * a1, char * a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5;
  unsigned char * v6;
  unsigned char * v7;
  unsigned char * v8;
  char *v10; // [esp+Ch] [ebp-4h]
  int *v11; // [esp+18h] [ebp+8h]
  int v12; // [esp+20h] [ebp+10h]
  unsigned int v13; // [esp+28h] [ebp+18h]

  v8 = (unsigned char *)(a4 >> 1);
  v13 = (unsigned int)(a5 >> 1);
  ObfuscateDataBlock(a1, dword_877D20, a4); /*0x7e022a*/
  v7 = &unk_878720; /*0x7e023b*/
  v6 = dword_877D20; /*0x7e023e*/
  v11 = (int *)((char *)a1 + a4); /*0x7e0241*/
  v12 = a3 - 1; /*0x7e0244*/
  do /*0x7e02aa*/
  {
    ObfuscateDataBlock(v11, v7, a4); /*0x7e0250*/
    sub_7E01D2(v6, v7, byte_879124, a4); /*0x7e0266*/
    qmemcpy(a2, v6, 4 * v8); /*0x7e0277*/
    v10 = &a2[v13]; /*0x7e0287*/
    qmemcpy(v10, byte_879124, 4 * v8); /*0x7e028a*/
    v11 = (int *)((char *)v11 + a4); /*0x7e0295*/
    a2 = &v10[v13]; /*0x7e0298*/
    v5 = v7; /*0x7e029b*/
    v7 = v6; /*0x7e02a1*/
    v6 = v5; /*0x7e02a4*/
    --v12; /*0x7e02a7*/
  }
  while ( v12 ); /*0x7e02aa*/
  ObfuscateDataBlock(v11, v7, a4); /*0x7e02b5*/
  qmemcpy(a2, v7, 4 * v8); /*0x7e02c6*/
}
} // namespace gamemd
