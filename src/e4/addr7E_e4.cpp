// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7E0001
namespace gamemd {
void  __spoils<ecx> sub_7E0001(int * a1, unsigned int * a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl __spoils<ecx> sub_7E0001(int *a1, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // ecx
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebx
  unsigned __int16 v11; // ax
  _BYTE *v12; // edi

  do /*0x7e0099*/
  {
    v6 = (unsigned int)(a4 - 2) >> 1; /*0x7e001b*/
    v7 = a2; /*0x7e001d*/
    do /*0x7e0074*/
    {
      v8 = *a1; /*0x7e0040*/
      a1 = (int *)((char *)a1 + 2); /*0x7e0042*/
      v9 = __ROR4__(v8, 8); /*0x7e004f*/
      LOBYTE(v9) = MEMORY[0xA8F91C][(unsigned __int16)v8]; /*0x7e0052*/
      BYTE1(v9) = BYTE1(v8); /*0x7e0058*/
      v10 = __ROR4__(v9, 8); /*0x7e005f*/
      BYTE1(v10) = MEMORY[0xA8F91C][(v8 & 0xFFFF00u) >> 8]; /*0x7e0065*/
      *v7++ = __ROR4__(v10, 16); /*0x7e006e*/
      --v6; /*0x7e0073*/
    }
    while ( v6 ); /*0x7e0074*/
    v11 = *(_WORD *)a1; /*0x7e0078*/
    *(_BYTE *)v7 = *(_WORD *)a1; /*0x7e007b*/
    v12 = (char *)v7 + 1; /*0x7e007d*/
    a1 = (int *)((char *)a1 + 2); /*0x7e007e*/
    *v12++ = MEMORY[0xA8F91C][v11]; /*0x7e0087*/
    *v12 = HIBYTE(v11); /*0x7e008a*/
    v12[1] = 0; /*0x7e008d*/
    a2 = (_DWORD *)((char *)a2 + a5); /*0x7e0093*/
    --a3; /*0x7e0096*/
  }
  while ( a3 ); /*0x7e0099*/
}
}
} // namespace gamemd

// 0x7E00A6
namespace gamemd {
void  __spoils<ecx> sub_7E00A6(int * a1, char * a2, int a3, unsigned int a4, unsigned int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl __spoils<ecx> sub_7E00A6(int *a1, char *a2, int a3, unsigned int a4, unsigned int a5)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  unsigned __int16 v12; // ax
  _BYTE *v13; // edi
  _BYTE *v14; // ecx
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
      LOBYTE(v9) = MEMORY[0xA8F91C][(unsigned __int16)v8]; /*0x7e00f2*/
      BYTE1(v9) = BYTE1(v8); /*0x7e00f8*/
      v10 = __ROR4__(v9, 8); /*0x7e00ff*/
      BYTE1(v10) = MEMORY[0xA8F91C][(v8 & 0xFFFF00u) >> 8]; /*0x7e0105*/
      v11 = __ROR4__(v10, 16); /*0x7e010b*/
      *v7 = v11; /*0x7e010e*/
      *v6 = v11; /*0x7e0110*/
      ++v7; /*0x7e0112*/
      ++v6; /*0x7e0115*/
      --v15; /*0x7e0118*/
    }
    while ( v15 ); /*0x7e011b*/
    v12 = *(_WORD *)a1; /*0x7e011f*/
    *(_BYTE *)v7 = *(_WORD *)a1; /*0x7e0122*/
    *(_BYTE *)v6 = v12; /*0x7e0124*/
    v13 = (char *)v7 + 1; /*0x7e0126*/
    v14 = (char *)v6 + 1; /*0x7e0127*/
    LOBYTE(v12) = MEMORY[0xA8F91C][v12]; /*0x7e012b*/
    *v13 = v12; /*0x7e0131*/
    *v14 = v12; /*0x7e0133*/
    ++v13; /*0x7e0135*/
    ++v14; /*0x7e0136*/
    *v13 = HIBYTE(v12); /*0x7e0137*/
    *v14 = HIBYTE(v12); /*0x7e0139*/
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
}
} // namespace gamemd

// 0x7E0170
namespace gamemd {
void  __spoils<ecx> ObfuscateDataBlock(int * a1, unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl __spoils<ecx> ObfuscateDataBlock(int *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ecx
  int v6; // eax
  int v7; // ebx
  int v8; // ebx
  unsigned __int16 v9; // ax
  _BYTE *v10; // edi

  v3 = (unsigned int)(a3 - 2) >> 1; /*0x7e017a*/
  do /*0x7e01b6*/
  {
    v6 = *a1; /*0x7e0182*/
    a1 = (int *)((char *)a1 + 2); /*0x7e0184*/
    v7 = __ROR4__(v6, 8); /*0x7e0191*/
    LOBYTE(v7) = MEMORY[0xA8F91C][(unsigned __int16)v6]; /*0x7e0194*/
    BYTE1(v7) = BYTE1(v6); /*0x7e019a*/
    v8 = __ROR4__(v7, 8); /*0x7e01a1*/
    BYTE1(v8) = MEMORY[0xA8F91C][(v6 & 0xFFFF00u) >> 8]; /*0x7e01a7*/
    *a2++ = __ROR4__(v8, 16); /*0x7e01b0*/
    --v3; /*0x7e01b5*/
  }
  while ( v3 ); /*0x7e01b6*/
  v9 = *(_WORD *)a1; /*0x7e01ba*/
  *(_BYTE *)a2 = *(_WORD *)a1; /*0x7e01bd*/
  v10 = (char *)a2 + 1; /*0x7e01bf*/
  *v10++ = MEMORY[0xA8F91C][v9]; /*0x7e01c6*/
  *v10 = HIBYTE(v9); /*0x7e01c9*/
  v10[1] = 0; /*0x7e01cc*/
}
}
} // namespace gamemd

// 0x7E01D2
namespace gamemd {
void  __spoils<ecx> sub_7E01D2(unsigned char * a1, unsigned char * a2, unsigned char * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl __spoils<ecx> sub_7E01D2(_BYTE *a1, _BYTE *a2, _BYTE *a3, int a4)
{
  int v7; // eax
  int v8; // ecx

  HIWORD(v7) = 0; /*0x7e01df*/
  v8 = 2 * a4; /*0x7e01e4*/
  do /*0x7e01f6*/
  {
    LOBYTE(v7) = *a1; /*0x7e01e6*/
    BYTE1(v7) = *a2; /*0x7e01e8*/
    ++a1; /*0x7e01ea*/
    ++a2; /*0x7e01eb*/
    *a3++ = MEMORY[0xA8F91C][v7]; /*0x7e01f2*/
    --v8; /*0x7e01f5*/
  }
  while ( v8 ); /*0x7e01f6*/
}
}
} // namespace gamemd

// 0x7E01FB
namespace gamemd {
void sub_7E01FB(int * a1, char * a2, int a3, unsigned int a4, unsigned int a5)
{
{
    char *v5;
    char *v6;
    int *v7;
    unsigned int v8;
    char *v10;
    int *v11;
    int v12;
    unsigned int v13;
    v8 = a4 >> 1;
    v13 = a5 >> 1;
    ObfuscateDataBlock(a1, DataGlobal_877D20, a4);
    v7 = &DataGlobal_878720;
    v6 = DataGlobal_877D20;
    v11 = (int *)((char *)(a1) + a4);
    v12 = a3 - 1;
    do
  {
    ObfuscateDataBlock(v11, v7, a4);
    sub_7E01D2(v6, v7, DataGlobal_879124, a4);
    qmemcpy(a2, v6, 4 * v8);
    v10 = &a2[v13];
    qmemcpy(v10, DataGlobal_879124, 4 * v8);
    v11 = (int *)((char *)(v11) + a4);
    a2 = &v10[v13];
    v5 = v7;
    v7 = v6;
    v6 = v5;
    --v12;
  }
    while ( v12 );
    ObfuscateDataBlock(v11, v7, a4);
    qmemcpy(a2, v7, 4 * v8);
}
}
} // namespace gamemd

// 0x7E0000
namespace gamemd {
void nullsub_272()
{
  ;
}
} // namespace gamemd
