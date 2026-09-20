// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007E0001  sub_7E0001  cls=unknown  sig=csp  renamed_refs=0 ====
void  __spoils<ecx> sub_7E0001(int * a1, unsigned int * a2, int a3, int a4, int a5)
{
{
    unsigned int v6;
    int *v7;
    int v8;
    int v9;
    int v10;
    unsigned short v11;
    char *v12;
    do
  {
    v6 = (unsigned int)(a4 - 2) >> 1;
    v7 = a2;
    do
    {
    v8 = *a1;
    a1 = (int *)((char *)(a1) + 2);
    v9 = __ROR4__(v8, 8);
    LOBYTE(v9) = DataGlobal_A8F91C[(unsigned short)v8];
    BYTE1(v9) = BYTE1(v8);
    v10 = __ROR4__(v9, 8);
    BYTE1(v10) = DataGlobal_A8F91C[(v8 & 0xFFFF00u) >> 8];
    *v7++ = __ROR4__(v10, 16);
    --v6;
    }
    while ( v6 );
    v11 = *(short *)a1;
    *(char *)v7 = *(short *)a1;
    v12 = (char *)(v7) + 1;
    a1 = (int *)((char *)(a1) + 2);
    *v12++ = DataGlobal_A8F91C[v11];
    *v12 = HIBYTE(v11);
    v12[1] = 0;
    a2 = (int *)((char *)(a2) + a5);
    --a3;
  }
    while ( a3 );
}
}

// ==== BACKFILL 0x007E00A6  sub_7E00A6  cls=unknown  sig=csp  renamed_refs=0 ====
void  __spoils<ecx> sub_7E00A6(int * a1, char * a2, int a3, unsigned int a4, unsigned int a5)
{
{
    int *v6;
    int *v7;
    int v8;
    int v9;
    int v10;
    int v11;
    unsigned short v12;
    char *v13;
    char *v14;
    unsigned int v15;
    char *v17;
    do
  {
    v15 = (a4 - 2) >> 1;
    v6 = &DataGlobal_879124;
    v7 = a2;
    do
    {
    v8 = *a1;
    a1 = (int *)((char *)(a1) + 2);
    v9 = __ROR4__(v8, 8);
    LOBYTE(v9) = DataGlobal_A8F91C[(unsigned short)v8];
    BYTE1(v9) = BYTE1(v8);
    v10 = __ROR4__(v9, 8);
    BYTE1(v10) = DataGlobal_A8F91C[(v8 & 0xFFFF00u) >> 8];
    v11 = __ROR4__(v10, 16);
    *v7 = v11;
    *v6 = v11;
    ++v7;
    ++v6;
    --v15;
    }
    while ( v15 );
    v12 = *(short *)a1;
    *(char *)v7 = *(short *)a1;
    *(char *)v6 = v12;
    v13 = (char *)(v7) + 1;
    v14 = (char *)(v6) + 1;
    LOBYTE(v12) = DataGlobal_A8F91C[v12];
    *v13 = v12;
    *v14 = v12;
    ++v13;
    ++v14;
    *v13 = HIBYTE(v12);
    *v14 = HIBYTE(v12);
    v13[1] = 0;
    v14[1] = 0;
    v17 = &a2[a5 >> 1];
    qmemcpy(v17, &DataGlobal_879124, 4 * (a4 >> 1));
    a1 = (int *)((char *)(a1) + 2);
    a2 = &v17[a5 >> 1];
    --a3;
  }
    while ( a3 );
}
}

// ==== BACKFILL 0x007E0170  ObfuscateDataBlock  cls=unknown  sig=csp  renamed_refs=0 ====
void  __spoils<ecx> ObfuscateDataBlock(int * a1, unsigned int * a2, int a3)
{
{
    unsigned int v3;
    int v6;
    int v7;
    int v8;
    unsigned short v9;
    char *v10;
    v3 = (unsigned int)(a3 - 2) >> 1;
    do
  {
    v6 = *a1;
    a1 = (int *)((char *)(a1) + 2);
    v7 = __ROR4__(v6, 8);
    LOBYTE(v7) = DataGlobal_A8F91C[(unsigned short)v6];
    BYTE1(v7) = BYTE1(v6);
    v8 = __ROR4__(v7, 8);
    BYTE1(v8) = DataGlobal_A8F91C[(v6 & 0xFFFF00u) >> 8];
    *a2++ = __ROR4__(v8, 16);
    --v3;
  }
    while ( v3 );
    v9 = *(short *)a1;
    *(char *)a2 = *(short *)a1;
    v10 = (char *)(a2) + 1;
    *v10++ = DataGlobal_A8F91C[v9];
    *v10 = HIBYTE(v9);
    v10[1] = 0;
}
}

// ==== BACKFILL 0x007E01D2  sub_7E01D2  cls=unknown  sig=csp  renamed_refs=0 ====
void  __spoils<ecx> sub_7E01D2(unsigned char * a1, unsigned char * a2, unsigned char * a3, int a4)
{
{
    int v7;
    int v8;
    HIWORD(v7) = 0;
    v8 = 2 * a4;
    do
  {
    LOBYTE(v7) = *a1;
    BYTE1(v7) = *a2;
    ++a1;
    ++a2;
    *a3++ = DataGlobal_A8F91C[v7];
    --v8;
  }
    while ( v8 );
}
}

// ==== BACKFILL 0x007E01FB  sub_7E01FB  cls=unknown  sig=csp  renamed_refs=0 ====
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
