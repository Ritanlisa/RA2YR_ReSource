// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00490400  sub_490400  cls=ConvertClass  sig=csp  renamed_refs=0 ====
int E4Recv_490400::sub_490400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_490400(int this)
{
  void *v2; // ecx
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &vt_ConvertClass; /*0x490404*/
  COMClass::RegisterAll((_DWORD *)this); /*0x49040a*/
  __3_YAXPAX_Z(*(void **)(this + 368)); /*0x490416*/
  v2 = *(void **)(this + 376); /*0x49041b*/
  this->M368 = 0; /*0x490421*/
  __3_YAXPAX_Z(v2); /*0x49042c*/
  this->M376 = 0; /*0x490434*/
  v4 = this; /*0x49044d*/
  result = (*(int (__thiscall **)(int *, int *))(MEMORY[0x89ECF8] + 16))(&MEMORY[0x89ECF8], &v4); /*0x490451*/
  if ( result != -1 && result < MEMORY[0x89ED08] && result < --MEMORY[0x89ED08] ) /*0x49046d*/
  {
    do /*0x490485*/
    {
      ++result; /*0x490475*/
      *((_DWORD *)MEMORY[0x89ECFC] + result - 1) = *((_DWORD *)MEMORY[0x89ECFC] + result); /*0x490479*/
    }
    while ( result < MEMORY[0x89ED08] ); /*0x490485*/
  }
  return result; /*0x490457*/
}
}

// ==== BACKFILL 0x00491100  sub_491100  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int sub_491100(ObjectClass * aP0, char a2, int a3, ObjectClass * aP3, short a5, char a6, short a7)
{
{
    char v7;
    char v8;
    int v9;
    ObjectClass *result;
    char v11;
    int *v12;
    short *v13;
    int v14;
    int v15;
    int v16;
    short v17;
    unsigned char v18;
    ObjectClass *i;
    char v20;
    int v21;
    v20 = v8;
    result = 0;
    v11 = v7;
    for ( i = 0; (int)result < *(int *)&DataGlobal_89E138.__pad_BC0[16]; i = result )
  {
    v12 = *(int **)(*(int *)&DataGlobal_89E138.__pad_BC0[4] + 4 * (int)result);
    v21 = (int)v12;
    if ( v12[1] == 2 )
    {
    v13 = (short *)v12[92];
    v14 = 256;
    do
      {
    LOWORD(v9) = *v13;
    HIWORD(v15) = HIWORD(v9);
    HIWORD(v16) = HIWORD(v9);
    v17 = *v13++ >> v11;
    v18 = (unsigned char)((unsigned short)v9 >> a2) << (char)aP0;
    LOWORD(v9) = (unsigned char)((unsigned char)((unsigned char)((unsigned short)v9 >> (char)aP3) << a3) >> DataGlobal_89E138.__pad_14B0[6132]);
    LOWORD(v15) = (unsigned char)((unsigned char)((char)v17 << v20) >> DataGlobal_89E138.__pad_14B0[6124]);
    LOWORD(v16) = (unsigned char)(v18 >> DataGlobal_89E138.__pad_14B0[6140]);
    v9 = (v16 << DataGlobal_89E138.__pad_14B0[6136])
    | (v15 << DataGlobal_89E138.__pad_14B0[6120])
    | (v9 << DataGlobal_89E138.__pad_14B0[6128]);
    --v14;
    *(v13 - 1) = v9;
      }
    while ( v14 );
    v12[96] = *(unsigned short *)&DataGlobal_89E138.__pad_14B0[6144];
    v12[97] = *(unsigned short *)&DataGlobal_89E138.__pad_14B0[6146];
    COMClass::RegisterAll(v12);
    ConvertClass::InitTables(v21);
    result = i;
    }
    result = (ObjectClass *)((char *)(result) + 1);
  }
    return (int)result->__pad_0;
}
}

// ==== BACKFILL 0x004912B0  sub_4912B0  cls=-  sig=csp  free-function ====
char E4Recv_4912B0::sub_4912B0(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int v9;
    int v10;
    short *v11;
    int v13;
    v9 = this->M4;
    v10 = a4 + 1;
    v11 = (short *)(a2 - 2);
    v13 = 0;
    while ( --v10 )
  {
    ++v11;
    LOBYTE(v13) = *a3++;
    if ( (char)v13 )
    *v11 = *(short *)(v9 + 2 * v13);
  }
    return v13;
}

// ==== BACKFILL 0x00491300  sub_491300  cls=-  sig=csp  free-function ====
int E4Recv_491300::sub_491300(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00491330  sub_491330  cls=-  sig=csp  free-function ====
int E4Recv_491330::sub_491330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00491360  sub_491360  cls=-  sig=csp  free-function ====
int E4Recv_491360::sub_491360(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004914C0  AbstractClass::getFactoryCount  cls=BlitTransXlat  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::getFactoryCount(void* a1, void* a2, int a3, int a4, int a5, int a6, int a7, int a8) {
{
    unsigned char result;
    int v12;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    result = *a3++;
    if ( result )
      {
    result = *(char *)(this->vtable1 + result);
    *a2 = result;
      }
    ++a2;
    --v12;
    }
    while ( v12 );
  }
    return result;
}
} } }

// ==== BACKFILL 0x00491500  AbstractClass::getFactoryIndex  cls=BlitTransXlat  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::getFactoryIndex(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
{
    return this->COMStub_AddRef(a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491530  AbstractClass::setFactoryState  cls=BlitTransXlat  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::setFactoryState(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
{
    return this->COMStub_AddRef(a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491560  AbstractClass::checkFactoryQueue  cls=BlitTransXlat  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::checkFactoryQueue(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
{
    return this->COMStub_AddRef(a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491590  AbstractClass::readFactoryINI  cls=?$BlitTransZRemapXlat@E  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::readFactoryINI(void* a1, void* a2, int a3, int a4, int a5, int a6, int a7, int a8) {
{
    int v9;
    unsigned char result;
    int v13;
    v9 = **((int **)(this) + 1);
    result = a4;
    if ( a4 > 0 )
  {
    v13 = a4;
    do
    {
    result = *a2++;
    if ( result )
      {
    result = *(char *)(*(unsigned char *)(result + v9) + this->vtable2);
    *a1 = result;
      }
    ++a1;
    --v13;
    }
    while ( v13 );
  }
    return result;
}
} } }

// ==== BACKFILL 0x00491610  AbstractClass::resetFactoryState  cls=?$BlitTransZRemapXlat@E  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::resetFactoryState(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491640  AbstractClass::validateFactory  cls=?$BlitTransZRemapXlat@E  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::validateFactory(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491670  sub_491670  cls=-  sig=csp  free-function ====
char E4Recv_491670::sub_491670(unsigned char * a1, char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    char result;
    int v12;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    result = *a2++;
    if ( result )
      {
    result = *(char *)(this->M4 + (unsigned char)*a1);
    *a1 = result;
      }
    ++a1;
    --v12;
    }
    while ( v12 );
  }
    return result;
}
}

// ==== BACKFILL 0x004916B0  sub_4916B0  cls=-  sig=csp  free-function ====
int E4Recv_4916B0::sub_4916B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004916E0  sub_4916E0  cls=-  sig=csp  free-function ====
int E4Recv_4916E0::sub_4916E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00491710  sub_491710  cls=-  sig=csp  free-function ====
int E4Recv_491710::sub_491710(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00491740  sub_491740  cls=-  sig=csp  free-function ====
unsigned char E4Recv_491740::sub_491740(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    unsigned char result;
    int v12;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    result = *a2++;
    if ( result )
      {
    result = *(char *)(*(unsigned char *)(this->M4 + result) + this->M8);
    *a1 = result;
      }
    ++a1;
    --v12;
    }
    while ( v12 );
  }
    return result;
}
}

// ==== BACKFILL 0x00491790  sub_491790  cls=-  sig=csp  free-function ====
int E4Recv_491790::sub_491790(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004917C0  sub_4917C0  cls=-  sig=csp  free-function ====
int E4Recv_4917C0::sub_4917C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004917F0  sub_4917F0  cls=-  sig=csp  free-function ====
int E4Recv_4917F0::sub_4917F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00491820  sub_491820  cls=-  sig=csp  free-function ====
int E4Recv_491820::sub_491820(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int result;
    int v13;
    int v16;
    unsigned char v17;
    unsigned char v18;
    result = a5;
    v13 = a2;
    if ( a5 <= 0 )
  {
    v16 = a4;
  }
    else
  {
    do
    {
    if ( *a3++ )
    --result;
    else
    result -= *a3++;
    }
    while ( result > 0 );
    result = -result;
    v13 = result + a2;
    v16 = a4 - result;
  }
    while ( v16 > 0 )
  {
    v17 = *a3++;
    v18 = v17;
    if ( v17 )
    {
    result = this->M4;
    ++v13;
    --v16;
    *(char *)(v13 - 1) = *(char *)(result + v18);
    }
    else
    {
    LOBYTE(result) = *a3++;
    result = (unsigned char)result;
    v16 -= (unsigned char)result;
    v13 += (unsigned char)result;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004918A0  sub_4918A0  cls=-  sig=csp  free-function ====
int E4Recv_4918A0::sub_4918A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x004918E0  sub_4918E0  cls=-  sig=csp  free-function ====
char E4Recv_4918E0::sub_4918E0(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int v13;
    int v14;
    int v15;
    int v17;
    unsigned char v18;
    v13 = arg0;
    v14 = **((int **)(this) + 1);
    v15 = a5;
    if ( a5 <= 0 )
  {
    v17 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --v15;
    else
    v15 -= *a2++;
    }
    while ( v15 > 0 );
    v15 = -v15;
    v13 = v15 + arg0;
    v17 = a4 - v15;
  }
    while ( v17 > 0 )
  {
    v18 = *a2++;
    if ( v18 )
    {
    ++v13;
    --v17;
    LOBYTE(v15) = *(char *)(*(unsigned char *)(v18 + v14) + this->M8);
    *(char *)(v13 - 1) = v15;
    }
    else
    {
    LOBYTE(v15) = *a2++;
    v17 -= (unsigned char)v15;
    v13 += (unsigned char)v15;
    }
  }
    return v15;
}
}

// ==== BACKFILL 0x00491970  sub_491970  cls=-  sig=csp  free-function ====
int E4Recv_491970::sub_491970(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlat_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x004919B0  sub_4919B0  cls=-  sig=csp  free-function ====
int E4Recv_4919B0::sub_4919B0(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int result;
    unsigned char *v13;
    int v16;
    int v18;
    result = a5;
    v13 = a1;
    if ( a5 <= 0 )
  {
    v16 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --result;
    else
    result -= *a2++;
    }
    while ( result > 0 );
    result = -result;
    v13 = &a1[result];
    v16 = a4 - result;
  }
    while ( v16 > 0 )
  {
    if ( *a2++ )
    {
    result = this->M4;
    v18 = *v13;
    --v16;
    *v13++ = *(char *)(result + v18);
    }
    else
    {
    LOBYTE(result) = *a2++;
    result = (unsigned char)result;
    v16 -= (unsigned char)result;
    v13 += (unsigned char)result;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00491A30  sub_491A30  cls=-  sig=csp  free-function ====
int E4Recv_491A30::sub_491A30(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapDest_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00491A70  sub_491A70  cls=-  sig=csp  free-function ====
char E4Recv_491A70::sub_491A70(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int v11;
    int v13;
    int v16;
    unsigned char v17;
    v11 = a5;
    v13 = arg0;
    if ( a5 <= 0 )
  {
    v16 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --v11;
    else
    v11 -= *a2++;
    }
    while ( v11 > 0 );
    v11 = -v11;
    v13 = v11 + arg0;
    v16 = a4 - v11;
  }
    while ( v16 > 0 )
  {
    v17 = *a2++;
    if ( v17 )
    {
    ++v13;
    --v16;
    LOBYTE(v11) = *(char *)(*(unsigned char *)(this->M4 + v17) + this->M8);
    *(char *)(v13 - 1) = v11;
    }
    else
    {
    LOBYTE(v11) = *a2++;
    v16 -= (unsigned char)v11;
    v13 += (unsigned char)v11;
    }
  }
    return v11;
}
}

// ==== BACKFILL 0x00491B00  sub_491B00  cls=-  sig=csp  free-function ====
int E4Recv_491B00::sub_491B00(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapXlat_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00491C10  sub_491C10  cls=-  sig=csp  free-function ====
int E4Recv_491C10::sub_491C10(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00491D50  sub_491D50  cls=-  sig=csp  free-function ====
int E4Recv_491D50::sub_491D50(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00491D90  sub_491D90  cls=-  sig=csp  free-function ====
char E4Recv_491D90::sub_491D90(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapDestZRead_E * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_491D90(
        RLEBlitTransRemapDestZRead_E *this,
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        RLEBlitTransRemapDestZRead_E *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // eax
  unsigned int v12; // edx
  unsigned __int8 *v14; // esi
  TacticalMap *v15; // ecx
  int v18; // eax
  RLEBlitTransRemapDestZRead_E *v19; // ebx

  v11 = a5; /*0x491d91*/
  v12 = a7; /*0x491d95*/
  v14 = a1; /*0x491da0*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x491da8*/
  if ( a5 <= 0 ) /*0x491db5*/
  {
    v19 = aP3; /*0x491de7*/
  }
  else
  {
    do /*0x491dca*/
    {
      if ( *a2++ ) /*0x491db7*/
        --v11; /*0x491dc7*/
      else
        v11 -= *a2++; /*0x491dc2*/
    }
    while ( v11 > 0 ); /*0x491dca*/
    v18 = -v11; /*0x491dd0*/
    v14 = &a1[v18]; /*0x491dd2*/
    v19 = (RLEBlitTransRemapDestZRead_E *)((char *)aP3 - v18); /*0x491dd4*/
    v11 = a7 + 2 * v18; /*0x491dd6*/
    if ( (unsigned int)v11 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x491dde*/
      v11 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x491de0*/
    v12 = v11; /*0x491de3*/
  }
  while ( (int)v19 > 0 ) /*0x491ded*/
  {
    if ( *a2++ ) /*0x491def*/
    {
      v12 += 2; /*0x491e19*/
      v11 = a6 - *a10++; /*0x491e1c*/
      if ( v11 >= *(unsigned __int16 *)(v12 - 2) ) /*0x491e27*/
      {
        ++v14; /*0x491e3e*/
        v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - 1); /*0x491e3f*/
      }
      else
      {
        v11 = *v14; /*0x491e2f*/
        v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - 1); /*0x491e31*/
        ++v14; /*0x491e35*/
        LOBYTE(v11) = *(_BYTE *)(this->M4 + v11); /*0x491e36*/
        *(v14 - 1) = v11; /*0x491e39*/
      }
      v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x491e40*/
    }
    else
    {
      LOBYTE(v11) = *a2++; /*0x491df6*/
      v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - (unsigned __int8)v11); /*0x491e06*/
      v14 += (unsigned __int8)v11; /*0x491e08*/
      a10 += (unsigned __int8)v11; /*0x491e0a*/
      v12 += 2 * (unsigned __int8)v11; /*0x491e0c*/
    }
    if ( v12 >= v15->TacticalMap_field_1C ) /*0x491e49*/
      v12 -= v15->TacticalMap_field_20; /*0x491e4b*/
  }
  return v11; /*0x491e52*/
}
}

// ==== BACKFILL 0x00491E60  sub_491E60  cls=-  sig=csp  free-function ====
int E4Recv_491E60::sub_491E60(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapDestZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00491F90  sub_491F90  cls=-  sig=csp  free-function ====
int E4Recv_491F90::sub_491F90(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00491FD0  sub_491FD0  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_491FD0::sub_491FD0(int arg0, unsigned char * a2, RLEBlitTransXlatZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__thiscall sub_491FD0(
        RLEBlitTransXlatZReadWrite_E *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransXlatZReadWrite_E *aP3,
        int a5,
        int arg10,
        _WORD *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // edx
  _WORD *result; // eax
  int v14; // esi
  TacticalMap *v15; // ecx
  int v18; // edx
  RLEBlitTransXlatZReadWrite_E *v19; // ebx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl

  v11 = a5; /*0x491fd1*/
  result = a6; /*0x491fd5*/
  v14 = arg0; /*0x491fe0*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x491fe8*/
  if ( a5 <= 0 ) /*0x491ff5*/
  {
    v19 = aP3; /*0x492027*/
  }
  else
  {
    do /*0x49200c*/
    {
      if ( *a2++ ) /*0x491ff7*/
        --v11; /*0x492009*/
      else
        v11 -= *a2++; /*0x492004*/
    }
    while ( v11 > 0 ); /*0x49200c*/
    v18 = -v11; /*0x492012*/
    v14 = v18 + arg0; /*0x492014*/
    v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)aP3 - v18); /*0x492016*/
    result = &a6[v18]; /*0x492018*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x492020*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x492022*/
  }
  while ( (int)v19 > 0 ) /*0x49202d*/
  {
    v20 = *a2++; /*0x49202f*/
    if ( v20 ) /*0x492039*/
    {
      ++v14; /*0x492078*/
      if ( arg10 - *a10 < (unsigned __int16)*result ) /*0x492068*/
      {
        *(_BYTE *)(v14 - 1) = *(_BYTE *)(this->M4 + v20); /*0x49207f*/
        *result = arg10 - *a10; /*0x49208c*/
      }
      v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492092*/
      ++result; /*0x492098*/
      ++a10; /*0x49209b*/
      v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)v19 - 1); /*0x49209c*/
    }
    else
    {
      v21 = *a2++; /*0x49203b*/
      v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)v19 - v21); /*0x49204d*/
      v14 += v21; /*0x49204f*/
      a10 += v21; /*0x492051*/
      result += v21; /*0x492053*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x4920a0*/
      result = (_WORD *)((char *)result - v15->TacticalMap_field_20); /*0x4920a2*/
  }
  return result; /*0x4920a9*/
}
}

// ==== BACKFILL 0x004920C0  sub_4920C0  cls=-  sig=csp  free-function ====
int E4Recv_4920C0::sub_4920C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00492210  sub_492210  cls=-  sig=csp  free-function ====
int E4Recv_492210::sub_492210(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00492250  sub_492250  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_492250::sub_492250(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapDestZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int16 *__thiscall sub_492250(
        RLEBlitTransRemapDestZReadWrite_E *this,
        _BYTE *a1,
        unsigned __int8 *a2,
        RLEBlitTransRemapDestZReadWrite_E *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // edx
  unsigned __int16 *result; // eax
  _BYTE *v14; // esi
  TacticalMap *v15; // ecx
  int v18; // edx
  RLEBlitTransRemapDestZReadWrite_E *v19; // ebx
  unsigned __int8 v21; // dl
  int v22; // edx
  char *v23; // edi
  __int16 v24; // cx

  v11 = a5; /*0x492251*/
  result = a6; /*0x492255*/
  v14 = a1; /*0x492260*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492268*/
  if ( a5 <= 0 ) /*0x492275*/
  {
    v19 = aP3; /*0x4922a7*/
  }
  else
  {
    do /*0x49228c*/
    {
      if ( *a2++ ) /*0x492277*/
        --v11; /*0x492289*/
      else
        v11 -= *a2++; /*0x492284*/
    }
    while ( v11 > 0 ); /*0x49228c*/
    v18 = -v11; /*0x492292*/
    v14 = &a1[v18]; /*0x492294*/
    v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)aP3 - v18); /*0x492296*/
    result = &a6[v18]; /*0x492298*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4922a0*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4922a2*/
  }
  while ( (int)v19 > 0 ) /*0x4922ad*/
  {
    if ( *a2++ ) /*0x4922af*/
    {
      v22 = arg10 - *a10; /*0x4922db*/
      v23 = a10 + 1; /*0x4922e2*/
      if ( v22 >= *result ) /*0x4922e5*/
      {
        a10 = v23 + 1; /*0x49230d*/
        ++v14; /*0x49230e*/
        ++result; /*0x49230f*/
        v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - 1); /*0x492312*/
      }
      else
      {
        ++result; /*0x4922ef*/
        *v14 = *(_BYTE *)(this->M4 + (unsigned __int8)*v14); /*0x4922f8*/
        v24 = *v23; /*0x4922fe*/
        a10 = v23 + 1; /*0x492304*/
        *(result - 1) = arg10 - v24; /*0x492305*/
        v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - 1); /*0x492309*/
        ++v14; /*0x49230a*/
      }
      v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492313*/
    }
    else
    {
      v21 = *a2++; /*0x4922b7*/
      v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - v21); /*0x4922c9*/
      v14 += v21; /*0x4922cb*/
      a10 += v21; /*0x4922cd*/
      result += v21; /*0x4922cf*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x49231c*/
      result = (unsigned __int16 *)((char *)result - v15->TacticalMap_field_20); /*0x49231e*/
  }
  return result; /*0x492325*/
}
}

// ==== BACKFILL 0x00492330  sub_492330  cls=-  sig=csp  free-function ====
int E4Recv_492330::sub_492330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapDestZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00492370  sub_492370  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_492370::sub_492370(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapXlatZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int16 *__thiscall sub_492370(
        RLEBlitTransRemapXlatZReadWrite_E *this,
        _BYTE *a1,
        unsigned __int8 *a2,
        RLEBlitTransRemapXlatZReadWrite_E *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // edx
  unsigned __int16 *result; // eax
  _BYTE *v14; // esi
  TacticalMap *v15; // ecx
  int v18; // edx
  RLEBlitTransRemapXlatZReadWrite_E *v19; // ebx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl
  __int16 v22; // dx

  v11 = a5; /*0x492371*/
  result = a6; /*0x492375*/
  v14 = a1; /*0x492380*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492388*/
  if ( a5 <= 0 ) /*0x492395*/
  {
    v19 = aP3; /*0x4923c7*/
  }
  else
  {
    do /*0x4923ac*/
    {
      if ( *a2++ ) /*0x492397*/
        --v11; /*0x4923a9*/
      else
        v11 -= *a2++; /*0x4923a4*/
    }
    while ( v11 > 0 ); /*0x4923ac*/
    v18 = -v11; /*0x4923b2*/
    v14 = &a1[v18]; /*0x4923b4*/
    v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)aP3 - v18); /*0x4923b6*/
    result = &a6[v18]; /*0x4923b8*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4923c0*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4923c2*/
  }
  while ( (int)v19 > 0 ) /*0x4923cd*/
  {
    v20 = *a2++; /*0x4923d3*/
    if ( v20 ) /*0x4923e1*/
    {
      if ( arg10 - *a10 >= *result ) /*0x492410*/
      {
        v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492455*/
        ++a10; /*0x49245b*/
        ++v14; /*0x49245c*/
        ++result; /*0x49245d*/
      }
      else
      {
        ++result; /*0x492420*/
        *v14++ = *(_BYTE *)(*(unsigned __int8 *)(v20 + this->M4) + this->M8); /*0x49243a*/
        v22 = *a10++; /*0x492441*/
        *(result - 1) = arg10 - v22; /*0x492448*/
        v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x49244c*/
      }
      v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)v19 - 1); /*0x492452*/
    }
    else
    {
      v21 = *a2++; /*0x4923e3*/
      v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)v19 - v21); /*0x4923f5*/
      v14 += v21; /*0x4923f7*/
      a10 += v21; /*0x4923f9*/
      result += v21; /*0x4923fb*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x492464*/
      result = (unsigned __int16 *)((char *)result - v15->TacticalMap_field_20); /*0x492466*/
  }
  return result; /*0x492471*/
}
}

// ==== BACKFILL 0x00492480  sub_492480  cls=-  sig=csp  free-function ====
int E4Recv_492480::sub_492480(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x004924C0  sub_4924C0  cls=-  sig=csp  free-function ====
void E4Recv_4924C0::sub_4924C0(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    int v9;
    unsigned char v12;
    v9 = a4;
    if ( a4 > 0 )
  {
    do
    {
    v12 = *a3++;
    a2 += 2;
    --v9;
    *(short *)(a2 - 2) = *(short *)(this->M4 + 2 * v12);
    }
    while ( v9 );
  }
}
}

// ==== BACKFILL 0x00492500  sub_492500  cls=-  sig=csp  free-function ====
int E4Recv_492500::sub_492500(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492530  sub_492530  cls=-  sig=csp  free-function ====
int E4Recv_492530::sub_492530(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492560  sub_492560  cls=-  sig=csp  free-function ====
int E4Recv_492560::sub_492560(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492590  sub_492590  cls=-  sig=csp  free-function ====
char E4Recv_492590::sub_492590(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    int v9;
    short v10;
    int v13;
    v9 = **((int **)(this) + 1);
    LOBYTE(v10) = a4;
    if ( a4 > 0 )
  {
    v13 = a4;
    do
    {
    LOBYTE(v10) = *a2++;
    if ( (char)v10 )
      {
    v10 = *(short *)(this->M8 + 2 * *(unsigned char *)((unsigned char)v10 + v9));
    *a1 = v10;
      }
    ++a1;
    --v13;
    }
    while ( v13 );
  }
    return v10;
}
}

// ==== BACKFILL 0x004925E0  sub_4925E0  cls=-  sig=csp  free-function ====
int E4Recv_4925E0::sub_4925E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492610  sub_492610  cls=-  sig=csp  free-function ====
int E4Recv_492610::sub_492610(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492640  sub_492640  cls=-  sig=csp  free-function ====
int E4Recv_492640::sub_492640(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492670  sub_492670  cls=-  sig=csp  free-function ====
char E4Recv_492670::sub_492670(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    short v9;
    int v12;
    LOBYTE(v9) = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    LOBYTE(v9) = *a3++;
    if ( (char)v9 )
      {
    v9 = this->M4 & (*a2 >> 1);
    *a2 = v9;
      }
    ++a2;
    --v12;
    }
    while ( v12 );
  }
    return v9;
}
}

// ==== BACKFILL 0x004926B0  sub_4926B0  cls=-  sig=csp  free-function ====
int E4Recv_4926B0::sub_4926B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004926E0  sub_4926E0  cls=-  sig=csp  free-function ====
int E4Recv_4926E0::sub_4926E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492710  sub_492710  cls=-  sig=csp  free-function ====
int E4Recv_492710::sub_492710(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492740  sub_492740  cls=-  sig=csp  free-function ====
char sub_492740(int a1, int a2, unsigned short * a3, unsigned char * a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    int v10;
    int v13;
    int v14;
    short v15;
    unsigned char v17;
    LOBYTE(v10) = a5;
    if ( a5 > 0 )
  {
    v13 = a5;
    do
    {
    LOBYTE(v10) = *a4++;
    v17 = v10;
    if ( (char)v10 )
      {
    LOWORD(a2) = *(short *)(a1 + 8);
    v14 = (unsigned short)*a3;
    LOWORD(v14) = (unsigned short)v14 >> 2;
    v10 = a2 & v14;
    v15 = a2 & (*(short *)(*(int *)(a1 + 4) + 2 * v17) >> 2);
    a2 = 3 * v10;
    *a3 = 3 * v10 + v15;
      }
    ++a3;
    --v13;
    }
    while ( v13 );
  }
    return v10;
}
}

// ==== BACKFILL 0x004927A0  sub_4927A0  cls=-  sig=csp  free-function ====
int E4Recv_4927A0::sub_4927A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004927D0  sub_4927D0  cls=-  sig=csp  free-function ====
int E4Recv_4927D0::sub_4927D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492800  sub_492800  cls=-  sig=csp  free-function ====
int E4Recv_492800::sub_492800(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492830  sub_492830  cls=-  sig=csp  free-function ====
unsigned int E4Recv_492830::sub_492830(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    int v11;
    unsigned int result;
    int v14;
    v14 = this->M4;
    v11 = *(unsigned short *)(this + 8);
    do
  {
    result = (unsigned char)*a3;
    if ( *a3 )
    {
    LOWORD(result) = *(short *)(v14 + 2 * result);
    result = (v11 & ((unsigned short)*a2 >> 1)) + (v11 & (result >> 1));
    *a2 = result;
    }
    ++a3;
    ++a2;
  }
    while ( a4-- > 1 );
    return result;
}
}

// ==== BACKFILL 0x00492890  sub_492890  cls=-  sig=csp  free-function ====
int E4Recv_492890::sub_492890(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004928C0  sub_4928C0  cls=-  sig=csp  free-function ====
int E4Recv_4928C0::sub_4928C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004928F0  sub_4928F0  cls=-  sig=csp  free-function ====
int E4Recv_4928F0::sub_4928F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492920  sub_492920  cls=-  sig=csp  free-function ====
char E4Recv_492920::sub_492920(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    short v9;
    int v12;
    LOBYTE(v9) = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    LOBYTE(v9) = *a3++;
    if ( (char)v9 )
      {
    v9 = ((unsigned short)this->M8 & (*a2 >> 2))
    + 3 * ((unsigned short)this->M8 & (*(short *)(this->M4 + 2 * (unsigned char)v9) >> 2));
    *a2 = v9;
      }
    ++a2;
    --v12;
    }
    while ( v12 );
  }
    return v9;
}
}

// ==== BACKFILL 0x00492980  sub_492980  cls=-  sig=csp  free-function ====
int E4Recv_492980::sub_492980(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004929B0  sub_4929B0  cls=-  sig=csp  free-function ====
int E4Recv_4929B0::sub_4929B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004929E0  sub_4929E0  cls=-  sig=csp  free-function ====
int E4Recv_4929E0::sub_4929E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492A10  sub_492A10  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_492A10::sub_492A10(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    int v12;
    TacticalMap *v13;
    unsigned short v14;
    result = a5;
    if ( a4 > 0 )
  {
    v12 = a4;
    v13 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    do
    {
    v14 = *result++;
    if ( argC < v14 )
      {
    *a1 = *(short *)(this->M4 + 2 * *a2);
    v13 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v13->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v13->TacticalMap_field_20);
    --v12;
    }
    while ( v12 );
  }
    return result;
}
}

// ==== BACKFILL 0x00492A70  sub_492A70  cls=-  sig=csp  free-function ====
int E4Recv_492A70::sub_492A70(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492AA0  sub_492AA0  cls=-  sig=csp  free-function ====
int E4Recv_492AA0::sub_492AA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492AD0  sub_492AD0  cls=-  sig=csp  free-function ====
int E4Recv_492AD0::sub_492AD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492B00  sub_492B00  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_492B00::sub_492B00(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, int a7, int a8, int a9)
{
{
    unsigned short *result;
    int *v11;
    int v13;
    unsigned short v14;
    result = a6;
    if ( a4 > 0 )
  {
    v11 = g_ZBufferDescriptor;
    v13 = a4;
    do
    {
    v14 = *result++;
    if ( a5 < v14 && *a3 )
      {
    *a2 = *(short *)(this->M4 + 2 * (unsigned char)*a3);
    v11 = g_ZBufferDescriptor;
      }
    ++a3;
    ++a2;
    if ( (unsigned int)result >= v11[7] )
    result = (unsigned short *)((char *)result - v11[8]);
    --v13;
    }
    while ( v13 );
  }
    return result;
}
}

// ==== BACKFILL 0x00492B70  sub_492B70  cls=-  sig=csp  free-function ====
int E4Recv_492B70::sub_492B70(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492BA0  sub_492BA0  cls=-  sig=csp  free-function ====
int E4Recv_492BA0::sub_492BA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492BD0  sub_492BD0  cls=-  sig=csp  free-function ====
int E4Recv_492BD0::sub_492BD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492C00  sub_492C00  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_492C00::sub_492C00(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    TacticalMap *v13;
    unsigned short v14;
    int v15;
    unsigned short *a5a;
    result = a5;
    v15 = **((int **)(this) + 1);
    if ( a4 > 0 )
  {
    v13 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *result++;
    if ( argC < v14 && *a2 )
      {
    *a1 = *(short *)(this->M8 + 2 * *(unsigned char *)((unsigned char)*a2 + v15));
    v13 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v13->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v13->TacticalMap_field_20);
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x00492C90  sub_492C90  cls=-  sig=csp  free-function ====
int E4Recv_492C90::sub_492C90(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492CC0  sub_492CC0  cls=-  sig=csp  free-function ====
int E4Recv_492CC0::sub_492CC0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492CF0  sub_492CF0  cls=-  sig=csp  free-function ====
int E4Recv_492CF0::sub_492CF0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492D20  sub_492D20  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_492D20::sub_492D20(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    TacticalMap *v10;
    int v12;
    unsigned short v14;
    result = a5;
    if ( a4 > 0 )
  {
    v10 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    v12 = a4;
    do
    {
    v14 = *result++;
    if ( argC < v14 && *a2 )
      {
    *a1 = (unsigned short)this->M1 & (*a1 >> 1);
    v10 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v10->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v10->TacticalMap_field_20);
    --v12;
    }
    while ( v12 );
  }
    return result;
}
}

// ==== BACKFILL 0x00492D80  sub_492D80  cls=-  sig=csp  free-function ====
int E4Recv_492D80::sub_492D80(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492DB0  sub_492DB0  cls=-  sig=csp  free-function ====
int E4Recv_492DB0::sub_492DB0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492DE0  sub_492DE0  cls=-  sig=csp  free-function ====
int E4Recv_492DE0::sub_492DE0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492E10  sub_492E10  cls=-  sig=csp  free-function ====
int E4Recv_492E10::sub_492E10(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    int result;
    TacticalMap *v12;
    unsigned short v14;
    unsigned short *a5a;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = 3 * ((unsigned short)this->M2 & (*a1 >> 2))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)a5 >= v12->TacticalMap_field_1C )
    a5 = (unsigned short *)((char *)a5 - v12->TacticalMap_field_20);
    result = (int)a5a - 1;
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x00492EA0  sub_492EA0  cls=-  sig=csp  free-function ====
int E4Recv_492EA0::sub_492EA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492ED0  sub_492ED0  cls=-  sig=csp  free-function ====
int E4Recv_492ED0::sub_492ED0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492F00  sub_492F00  cls=-  sig=csp  free-function ====
int E4Recv_492F00::sub_492F00(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492F30  sub_492F30  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_492F30::sub_492F30(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    TacticalMap *v12;
    unsigned short v13;
    unsigned short *a5a;
    result = a5;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (unsigned short *)a4;
    do
    {
    v13 = *result++;
    if ( argC < v13 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (*a1 >> 1))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 1));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v12->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v12->TacticalMap_field_20);
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x00492FC0  sub_492FC0  cls=-  sig=csp  free-function ====
int E4Recv_492FC0::sub_492FC0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00492FF0  sub_492FF0  cls=-  sig=csp  free-function ====
int E4Recv_492FF0::sub_492FF0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493020  sub_493020  cls=-  sig=csp  free-function ====
int E4Recv_493020::sub_493020(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493050  sub_493050  cls=-  sig=csp  free-function ====
int E4Recv_493050::sub_493050(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    int result;
    TacticalMap *v12;
    unsigned short v14;
    unsigned short *a5a;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (*a1 >> 2))
    + 3 * ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)a5 >= v12->TacticalMap_field_1C )
    a5 = (unsigned short *)((char *)a5 - v12->TacticalMap_field_20);
    result = (int)a5a - 1;
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x004930E0  sub_4930E0  cls=-  sig=csp  free-function ====
int E4Recv_4930E0::sub_4930E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493110  sub_493110  cls=-  sig=csp  free-function ====
int E4Recv_493110::sub_493110(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493140  sub_493140  cls=-  sig=csp  free-function ====
int E4Recv_493140::sub_493140(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493170  sub_493170  cls=-  sig=csp  free-function ====
int E4Recv_493170::sub_493170(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    int result;
    TacticalMap *v12;
    unsigned short v14;
    unsigned short *a5a;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = 3 * ((unsigned short)this->M2 & (a1[a9] >> 2))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)a5 >= v12->TacticalMap_field_1C )
    a5 = (unsigned short *)((char *)a5 - v12->TacticalMap_field_20);
    result = (int)a5a - 1;
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x00493210  sub_493210  cls=-  sig=csp  free-function ====
int E4Recv_493210::sub_493210(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493240  sub_493240  cls=-  sig=csp  free-function ====
int E4Recv_493240::sub_493240(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493270  sub_493270  cls=-  sig=csp  free-function ====
int E4Recv_493270::sub_493270(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004932A0  sub_4932A0  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_4932A0::sub_4932A0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    TacticalMap *v12;
    unsigned short v13;
    unsigned short *a5a;
    result = a5;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (unsigned short *)a4;
    do
    {
    v13 = *result++;
    if ( argC < v13 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (a1[a9] >> 1))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 1));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v12->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v12->TacticalMap_field_20);
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x00493340  sub_493340  cls=-  sig=csp  free-function ====
int E4Recv_493340::sub_493340(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493370  sub_493370  cls=-  sig=csp  free-function ====
int E4Recv_493370::sub_493370(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004933A0  sub_4933A0  cls=-  sig=csp  free-function ====
int E4Recv_4933A0::sub_4933A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004933D0  sub_4933D0  cls=-  sig=csp  free-function ====
int E4Recv_4933D0::sub_4933D0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    int result;
    TacticalMap *v12;
    unsigned short v14;
    unsigned short *a5a;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (a1[a9] >> 2))
    + 3 * ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)a5 >= v12->TacticalMap_field_1C )
    a5 = (unsigned short *)((char *)a5 - v12->TacticalMap_field_20);
    result = (int)a5a - 1;
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x00493470  sub_493470  cls=-  sig=csp  free-function ====
int E4Recv_493470::sub_493470(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004934A0  sub_4934A0  cls=-  sig=csp  free-function ====
int E4Recv_4934A0::sub_4934A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004934D0  sub_4934D0  cls=-  sig=csp  free-function ====
int E4Recv_4934D0::sub_4934D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493500  sub_493500  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_493500::sub_493500(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    short *result;
    TacticalMap *v12;
    short *a5a;
    result = a5;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result )
      {
    *a1 = *(short *)(this->M4 + 2 * *a2);
    *result = (unsigned char)argC;
    v12 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++result;
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v12->TacticalMap_field_1C )
    result = (short *)((char *)result - v12->TacticalMap_field_20);
    a5a = (short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x00493570  sub_493570  cls=-  sig=csp  free-function ====
int E4Recv_493570::sub_493570(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004935A0  sub_4935A0  cls=-  sig=csp  free-function ====
int E4Recv_4935A0::sub_4935A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004935D0  sub_4935D0  cls=-  sig=csp  free-function ====
int E4Recv_4935D0::sub_4935D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493600  sub_493600  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_493600::sub_493600(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, int a7, int a8, int a9)
{
{
    short *result;
    int *v10;
    int v13;
    result = a6;
    if ( a4 > 0 )
  {
    v10 = g_ZBufferDescriptor;
    v13 = a4;
    do
    {
    if ( a5 < (unsigned short)*result && *a3 )
      {
    *a2 = *(short *)(this->M4 + 2 * (unsigned char)*a3);
    *result = a5;
    v10 = g_ZBufferDescriptor;
      }
    ++result;
    ++a3;
    ++a2;
    if ( (unsigned int)result >= v10[7] )
    result = (short *)((char *)result - v10[8]);
    --v13;
    }
    while ( v13 );
  }
    return result;
}
}

// ==== BACKFILL 0x00493680  sub_493680  cls=-  sig=csp  free-function ====
int E4Recv_493680::sub_493680(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004936B0  sub_4936B0  cls=-  sig=csp  free-function ====
int E4Recv_4936B0::sub_4936B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004936E0  sub_4936E0  cls=-  sig=csp  free-function ====
int E4Recv_4936E0::sub_4936E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493710  sub_493710  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_493710::sub_493710(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    short *result;
    int v10;
    TacticalMap *v11;
    short *a5a;
    result = a5;
    v10 = **((int **)(this) + 1);
    if ( a4 > 0 )
  {
    v11 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result && *a2 )
      {
    *a1 = *(short *)(this->M8 + 2 * *(unsigned char *)((unsigned char)*a2 + v10));
    *result = argC;
    v11 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++result;
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v11->TacticalMap_field_1C )
    result = (short *)((char *)result - v11->TacticalMap_field_20);
    a5a = (short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x004937A0  sub_4937A0  cls=-  sig=csp  free-function ====
int E4Recv_4937A0::sub_4937A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004937D0  sub_4937D0  cls=-  sig=csp  free-function ====
int E4Recv_4937D0::sub_4937D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493800  sub_493800  cls=-  sig=csp  free-function ====
int E4Recv_493800::sub_493800(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493830  sub_493830  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_493830::sub_493830(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    short *result;
    TacticalMap *v10;
    short *a5a;
    result = a5;
    if ( a4 > 0 )
  {
    v10 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result && *a2 )
      {
    *a1 = (unsigned short)this->M1 & (*a1 >> 1);
    *result = argC;
    v10 = *(TacticalMap **)&DataGlobal_87F8E4.__pad_5568[10232];
      }
    ++result;
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v10->TacticalMap_field_1C )
    result = (short *)((char *)result - v10->TacticalMap_field_20);
    a5a = (short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}

// ==== BACKFILL 0x004938A0  sub_4938A0  cls=-  sig=csp  free-function ====
int E4Recv_4938A0::sub_4938A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x004938D0  sub_4938D0  cls=-  sig=csp  free-function ====
int E4Recv_4938D0::sub_4938D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00493900  sub_493900  cls=-  sig=csp  free-function ====
int E4Recv_493900::sub_493900(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x00496310  sub_496310  cls=-  sig=csp  free-function ====
int E4Recv_496310::sub_496310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_496310(RLEBlitTransLucent75_G *this)
{
  int v1; // esi
  int result; // eax
  int v3; // edx
  unsigned __int8 *v4; // edi
  int v7; // ebx
  unsigned __int8 v8; // al
  int v9; // eax
  int v10; // ecx
  int v11; // [esp+10h] [ebp+4h]
  unsigned __int8 *v12; // [esp+14h] [ebp+8h]
  int v13; // [esp+18h] [ebp+Ch]
  unsigned __int8 v14; // [esp+18h] [ebp+Ch]
  int v15; // [esp+1Ch] [ebp+10h]

  result = v15; /*0x496310*/
  v3 = v11; /*0x496314*/
  v4 = v12; /*0x49631b*/
  if ( v15 <= 0 ) /*0x496323*/
  {
    v7 = v13; /*0x496347*/
  }
  else
  {
    do /*0x496338*/
    {
      if ( *v4++ ) /*0x496325*/
        --result; /*0x496335*/
      else
        result -= *v4++; /*0x496330*/
    }
    while ( result > 0 ); /*0x496338*/
    result = -result; /*0x49633e*/
    v7 = v13 - result; /*0x496340*/
    v3 = v11 + 2 * result; /*0x496342*/
  }
  while ( v7 > 0 ) /*0x49634d*/
  {
    v8 = *v4++; /*0x496350*/
    v14 = v8; /*0x496355*/
    if ( v8 ) /*0x496359*/
    {
      v9 = this->M4; /*0x496376*/
      LOWORD(v1) = (unsigned short)this->M8; /*0x496379*/
      v3 += 2; /*0x496383*/
      v10 = *(unsigned __int16 *)(v9 + 2 * v14); /*0x496386*/
      LOWORD(v9) = *(_WORD *)(v3 - 2) >> 2; /*0x49638e*/
      result = 3 * (v1 & v9); /*0x49639a*/
      --v7; /*0x49639f*/
      *(_WORD *)(v3 - 2) = result + (v1 & ((unsigned __int16)v10 >> 2)); /*0x4963a0*/
    }
    else
    {
      LOBYTE(result) = *v4++; /*0x49635b*/
      result = (unsigned __int8)result; /*0x496366*/
      v7 -= (unsigned __int8)result; /*0x49636b*/
      v3 += 2 * (unsigned __int8)result; /*0x49636d*/
    }
  }
  return result; /*0x4963a9*/
}
}

// ==== BACKFILL 0x004963B0  sub_4963B0  cls=-  sig=csp  free-function ====
int E4Recv_4963B0::sub_4963B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent75_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x004963F0  sub_4963F0  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_4963F0::sub_4963F0(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int v11;
    short *result;
    int v15;
    int v16;
    unsigned char v17;
    unsigned char v18;
    v11 = a5;
    result = a1;
    if ( a5 <= 0 )
  {
    v16 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --v11;
    else
    v11 -= *a2++;
    }
    while ( v11 > 0 );
    v15 = -v11;
    result = &a1[v15];
    v16 = a4 - v15;
  }
    while ( v16 > 0 )
  {
    v17 = *a2++;
    if ( v17 )
    {
    --v16;
    *result = ((unsigned short)this->M2 & (*result >> 1))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * v17) >> 1));
    ++result;
    }
    else
    {
    v18 = *a2++;
    v16 -= v18;
    result += v18;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00496490  sub_496490  cls=-  sig=csp  free-function ====
int E4Recv_496490::sub_496490(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent50_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x004964D0  sub_4964D0  cls=-  sig=csp  free-function ====
int E4Recv_4964D0::sub_4964D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4964D0(RLEBlitTransLucent25_G *this)
{
  int v1; // esi
  int result; // eax
  int v3; // edx
  unsigned __int8 *v4; // edi
  int v7; // ebx
  unsigned __int8 v8; // al
  int v9; // eax
  int v10; // eax
  __int16 v11; // cx
  int v12; // [esp+10h] [ebp+4h]
  unsigned __int8 *v13; // [esp+14h] [ebp+8h]
  int v14; // [esp+18h] [ebp+Ch]
  unsigned __int8 v15; // [esp+18h] [ebp+Ch]
  int v16; // [esp+1Ch] [ebp+10h]

  result = v16; /*0x4964d0*/
  v3 = v12; /*0x4964d4*/
  v4 = v13; /*0x4964db*/
  if ( v16 <= 0 ) /*0x4964e3*/
  {
    v7 = v14; /*0x496507*/
  }
  else
  {
    do /*0x4964f8*/
    {
      if ( *v4++ ) /*0x4964e5*/
        --result; /*0x4964f5*/
      else
        result -= *v4++; /*0x4964f0*/
    }
    while ( result > 0 ); /*0x4964f8*/
    result = -result; /*0x4964fe*/
    v7 = v14 - result; /*0x496500*/
    v3 = v12 + 2 * result; /*0x496502*/
  }
  while ( v7 > 0 ) /*0x49650d*/
  {
    v8 = *v4++; /*0x496510*/
    v15 = v8; /*0x496515*/
    if ( v8 ) /*0x496519*/
    {
      v9 = this->M4; /*0x496536*/
      LOWORD(v1) = (unsigned short)this->M8; /*0x496539*/
      v3 += 2; /*0x496543*/
      LOWORD(v9) = *(_WORD *)(v9 + 2 * v15) >> 2; /*0x49654a*/
      v10 = v1 & v9; /*0x49654e*/
      v11 = 3 * v10; /*0x496550*/
      LOWORD(v10) = *(_WORD *)(v3 - 2) >> 2; /*0x496557*/
      result = v1 & v10; /*0x49655b*/
      --v7; /*0x49655f*/
      *(_WORD *)(v3 - 2) = result + v11; /*0x496560*/
    }
    else
    {
      LOBYTE(result) = *v4++; /*0x49651b*/
      result = (unsigned __int8)result; /*0x496526*/
      v7 -= (unsigned __int8)result; /*0x49652b*/
      v3 += 2 * (unsigned __int8)result; /*0x49652d*/
    }
  }
  return result; /*0x496569*/
}
}

// ==== BACKFILL 0x00496570  sub_496570  cls=-  sig=csp  free-function ====
int E4Recv_496570::sub_496570(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496690  sub_496690  cls=-  sig=csp  free-function ====
int E4Recv_496690::sub_496690(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x004967E0  sub_4967E0  cls=-  sig=csp  free-function ====
int E4Recv_4967E0::sub_4967E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496820  sub_496820  cls=-  sig=csp  free-function ====
int E4Recv_496820::sub_496820(unsigned short * a1, unsigned char * a2, RLEBlitTransDarkenZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
{
    int result;
    unsigned int v12;
    short *v14;
    int v17;
    RLEBlitTransDarkenZRead_G *v18;
    unsigned char v20;
    int v21;
    result = a5;
    v12 = a7;
    v14 = a1;
    if ( a5 <= 0 )
  {
    v18 = aP3;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --result;
    else
    result -= *a2++;
    }
    while ( result > 0 );
    v17 = -result;
    v18 = (RLEBlitTransDarkenZRead_G *)((char *)aP3 - v17);
    v14 = &a1[v17];
    result = a7 + 2 * v17;
    if ( (unsigned int)result >= *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[23348] + 28) )
    result -= *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[23348] + 32);
    v12 = result;
  }
    while ( (int)v18 > 0 )
  {
    if ( *a2++ )
    {
    v12 += 2;
    v21 = a6 - *a10++;
    if ( v21 < *(unsigned short *)(v12 - 2) )
    *v14 = (unsigned short)this->M1 & (*v14 >> 1);
    v18 = (RLEBlitTransDarkenZRead_G *)((char *)v18 - 1);
    ++v14;
    }
    else
    {
    v20 = *a2++;
    v18 = (RLEBlitTransDarkenZRead_G *)((char *)v18 - v20);
    a10 += v20;
    v14 += v20;
    v12 += 2 * v20;
    }
    result = *(int *)&DataGlobal_87C374.__pad_579C[23348];
    if ( v12 >= *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[23348] + 28) )
    v12 -= *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[23348] + 32);
  }
    return result;
}
}

// ==== BACKFILL 0x004968F0  sub_4968F0  cls=-  sig=csp  free-function ====
int E4Recv_4968F0::sub_4968F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496930  sub_496930  cls=-  sig=csp  free-function ====
int E4Recv_496930::sub_496930(int arg0, unsigned char * a2, RLEBlitTransLucent75ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_496930(
        RLEBlitTransLucent75ZRead_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent75ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent75ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496931*/
  v12 = arg0; /*0x496935*/
  v14 = a7; /*0x496940*/
  if ( a5 <= 0 ) /*0x496955*/
  {
    v18 = aP3; /*0x496988*/
  }
  else
  {
    do /*0x49696c*/
    {
      if ( *a2++ ) /*0x496957*/
        --result; /*0x496969*/
      else
        result -= *a2++; /*0x496964*/
    }
    while ( result > 0 ); /*0x49696c*/
    v17 = -result; /*0x496972*/
    v18 = (RLEBlitTransLucent75ZRead_G *)((char *)aP3 - v17); /*0x496974*/
    v12 = arg0 + 2 * v17; /*0x496976*/
    result = a7 + 2 * v17; /*0x496979*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49697f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496981*/
    v14 = result; /*0x496984*/
  }
  while ( (int)v18 > 0 ) /*0x49698e*/
  {
    v19 = *a2++; /*0x496994*/
    if ( v19 ) /*0x49699e*/
    {
      v14 += 2; /*0x4969c5*/
      v21 = a6 - *a10++; /*0x4969c8*/
      v12 += 2; /*0x4969e7*/
      v18 = (RLEBlitTransLucent75ZRead_G *)((char *)v18 - 1); /*0x496a0a*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x4969d7*/
        *(_WORD *)(v12 - 2) = 3 * ((unsigned short)this->M2 & (*(_WORD *)(v12 - 2) >> 2)) /*0x496a0b*/
                            + ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x4969a0*/
      v18 = (RLEBlitTransLucent75ZRead_G *)((char *)v18 - v20); /*0x4969b1*/
      a10 += v20; /*0x4969b3*/
      v12 += 2 * v20; /*0x4969b8*/
      v14 += 2 * v20; /*0x4969ba*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496a19*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496a21*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496a23*/
  }
  return result; /*0x496a2e*/
}
}

// ==== BACKFILL 0x00496A40  sub_496A40  cls=-  sig=csp  free-function ====
int E4Recv_496A40::sub_496A40(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496A80  sub_496A80  cls=-  sig=csp  free-function ====
int E4Recv_496A80::sub_496A80(unsigned short * a1, unsigned char * a2, RLEBlitTransLucent50ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_496A80(
        RLEBlitTransLucent50ZRead_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        RLEBlitTransLucent50ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  unsigned int v12; // edx
  _WORD *v14; // esi
  int v17; // eax
  RLEBlitTransLucent50ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496a81*/
  v12 = a7; /*0x496a85*/
  v14 = a1; /*0x496a90*/
  if ( a5 <= 0 ) /*0x496aa5*/
  {
    v18 = aP3; /*0x496ad8*/
  }
  else
  {
    do /*0x496abc*/
    {
      if ( *a2++ ) /*0x496aa7*/
        --result; /*0x496ab9*/
      else
        result -= *a2++; /*0x496ab4*/
    }
    while ( result > 0 ); /*0x496abc*/
    v17 = -result; /*0x496ac2*/
    v18 = (RLEBlitTransLucent50ZRead_G *)((char *)aP3 - v17); /*0x496ac4*/
    v14 = &a1[v17]; /*0x496ac6*/
    result = a7 + 2 * v17; /*0x496ac9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496acf*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496ad1*/
    v12 = result; /*0x496ad4*/
  }
  while ( (int)v18 > 0 ) /*0x496ade*/
  {
    v19 = *a2++; /*0x496ae4*/
    if ( v19 ) /*0x496aee*/
    {
      v12 += 2; /*0x496b15*/
      v21 = a6 - *a10++; /*0x496b18*/
      v18 = (RLEBlitTransLucent50ZRead_G *)((char *)v18 - 1); /*0x496b51*/
      if ( v21 < *(unsigned __int16 *)(v12 - 2) ) /*0x496b27*/
        *v14 = ((unsigned short)this->M2 & (*v14 >> 1)) /*0x496b52*/
             + ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 1));
      ++v14; /*0x496b59*/
    }
    else
    {
      v20 = *a2++; /*0x496af0*/
      v18 = (RLEBlitTransLucent50ZRead_G *)((char *)v18 - v20); /*0x496b01*/
      a10 += v20; /*0x496b03*/
      v14 += v20; /*0x496b08*/
      v12 += 2 * v20; /*0x496b0a*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496b62*/
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496b6a*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496b6c*/
  }
  return result; /*0x496b77*/
}
}

// ==== BACKFILL 0x00496B80  sub_496B80  cls=-  sig=csp  free-function ====
int E4Recv_496B80::sub_496B80(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496BC0  sub_496BC0  cls=-  sig=csp  free-function ====
int E4Recv_496BC0::sub_496BC0(int arg0, unsigned char * a2, RLEBlitTransLucent25ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_496BC0(
        RLEBlitTransLucent25ZRead_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent25ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent25ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496bc1*/
  v12 = arg0; /*0x496bc5*/
  v14 = a7; /*0x496bd0*/
  if ( a5 <= 0 ) /*0x496be5*/
  {
    v18 = aP3; /*0x496c18*/
  }
  else
  {
    do /*0x496bfc*/
    {
      if ( *a2++ ) /*0x496be7*/
        --result; /*0x496bf9*/
      else
        result -= *a2++; /*0x496bf4*/
    }
    while ( result > 0 ); /*0x496bfc*/
    v17 = -result; /*0x496c02*/
    v18 = (RLEBlitTransLucent25ZRead_G *)((char *)aP3 - v17); /*0x496c04*/
    v12 = arg0 + 2 * v17; /*0x496c06*/
    result = a7 + 2 * v17; /*0x496c09*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496c0f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496c11*/
    v14 = result; /*0x496c14*/
  }
  while ( (int)v18 > 0 ) /*0x496c1e*/
  {
    v19 = *a2++; /*0x496c24*/
    if ( v19 ) /*0x496c2e*/
    {
      v14 += 2; /*0x496c55*/
      v21 = a6 - *a10++; /*0x496c58*/
      v12 += 2; /*0x496c77*/
      v18 = (RLEBlitTransLucent25ZRead_G *)((char *)v18 - 1); /*0x496c9a*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496c67*/
        *(_WORD *)(v12 - 2) = ((unsigned short)this->M2 & (*(_WORD *)(v12 - 2) >> 2)) /*0x496c9b*/
                            + 3 * ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x496c30*/
      v18 = (RLEBlitTransLucent25ZRead_G *)((char *)v18 - v20); /*0x496c41*/
      a10 += v20; /*0x496c43*/
      v12 += 2 * v20; /*0x496c48*/
      v14 += 2 * v20; /*0x496c4a*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496ca9*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496cb1*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496cb3*/
  }
  return result; /*0x496cbe*/
}
}

// ==== BACKFILL 0x00496CD0  sub_496CD0  cls=-  sig=csp  free-function ====
int E4Recv_496CD0::sub_496CD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496D10  sub_496D10  cls=-  sig=csp  free-function ====
int E4Recv_496D10::sub_496D10(int arg0, unsigned char * a2, RLEBlitTransLucent75ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_496D10(
        RLEBlitTransLucent75ZReadWarp_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent75ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent75ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496d11*/
  v12 = arg0; /*0x496d15*/
  v14 = a7; /*0x496d20*/
  if ( a5 <= 0 ) /*0x496d35*/
  {
    v18 = aP3; /*0x496d68*/
  }
  else
  {
    do /*0x496d4c*/
    {
      if ( *a2++ ) /*0x496d37*/
        --result; /*0x496d49*/
      else
        result -= *a2++; /*0x496d44*/
    }
    while ( result > 0 ); /*0x496d4c*/
    v17 = -result; /*0x496d52*/
    v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)aP3 - v17); /*0x496d54*/
    v12 = arg0 + 2 * v17; /*0x496d56*/
    result = a7 + 2 * v17; /*0x496d59*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496d5f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496d61*/
    v14 = result; /*0x496d64*/
  }
  while ( (int)v18 > 0 ) /*0x496d6e*/
  {
    v19 = *a2++; /*0x496d74*/
    if ( v19 ) /*0x496d7e*/
    {
      v14 += 2; /*0x496da5*/
      v21 = a6 - *a10++; /*0x496da8*/
      v12 += 2; /*0x496dc7*/
      v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)v18 - 1); /*0x496def*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496db7*/
        *(_WORD *)(v12 - 2) = 3 * ((unsigned short)this->M2 & (*(_WORD *)(v12 + 2 * arg20 - 2) >> 2)) /*0x496df0*/
                            + ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x496d80*/
      v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)v18 - v20); /*0x496d91*/
      a10 += v20; /*0x496d93*/
      v12 += 2 * v20; /*0x496d98*/
      v14 += 2 * v20; /*0x496d9a*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496dfe*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496e06*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496e08*/
  }
  return result; /*0x496e13*/
}
}

// ==== BACKFILL 0x00496E20  sub_496E20  cls=-  sig=csp  free-function ====
int E4Recv_496E20::sub_496E20(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496E60  sub_496E60  cls=-  sig=csp  free-function ====
int E4Recv_496E60::sub_496E60(unsigned short * a1, unsigned char * a2, RLEBlitTransLucent50ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_496E60(
        RLEBlitTransLucent50ZReadWarp_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        RLEBlitTransLucent50ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  _WORD *v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent50ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496e61*/
  v12 = a1; /*0x496e65*/
  v14 = a7; /*0x496e70*/
  if ( a5 <= 0 ) /*0x496e85*/
  {
    v18 = aP3; /*0x496eb8*/
  }
  else
  {
    do /*0x496e9c*/
    {
      if ( *a2++ ) /*0x496e87*/
        --result; /*0x496e99*/
      else
        result -= *a2++; /*0x496e94*/
    }
    while ( result > 0 ); /*0x496e9c*/
    v17 = -result; /*0x496ea2*/
    v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)aP3 - v17); /*0x496ea4*/
    v12 = &a1[v17]; /*0x496ea6*/
    result = a7 + 2 * v17; /*0x496ea9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496eaf*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496eb1*/
    v14 = result; /*0x496eb4*/
  }
  while ( (int)v18 > 0 ) /*0x496ebe*/
  {
    v19 = *a2++; /*0x496ec4*/
    if ( v19 ) /*0x496ece*/
    {
      v14 += 2; /*0x496ef5*/
      v21 = a6 - *a10++; /*0x496ef8*/
      v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)v18 - 1); /*0x496f36*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496f07*/
        *v12 = ((unsigned short)this->M2 & (v12[arg20] >> 1)) /*0x496f37*/
             + ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 1));
      ++v12; /*0x496f3e*/
    }
    else
    {
      v20 = *a2++; /*0x496ed0*/
      v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)v18 - v20); /*0x496ee1*/
      a10 += v20; /*0x496ee3*/
      v12 += v20; /*0x496ee8*/
      v14 += 2 * v20; /*0x496eea*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496f47*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496f4f*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496f51*/
  }
  return result; /*0x496f5c*/
}
}

// ==== BACKFILL 0x00496F70  sub_496F70  cls=-  sig=csp  free-function ====
int E4Recv_496F70::sub_496F70(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496FB0  sub_496FB0  cls=-  sig=csp  free-function ====
int E4Recv_496FB0::sub_496FB0(int arg0, unsigned char * a2, RLEBlitTransLucent25ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_496FB0(
        RLEBlitTransLucent25ZReadWarp_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent25ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent25ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496fb1*/
  v12 = arg0; /*0x496fb5*/
  v14 = a7; /*0x496fc0*/
  if ( a5 <= 0 ) /*0x496fd5*/
  {
    v18 = aP3; /*0x497008*/
  }
  else
  {
    do /*0x496fec*/
    {
      if ( *a2++ ) /*0x496fd7*/
        --result; /*0x496fe9*/
      else
        result -= *a2++; /*0x496fe4*/
    }
    while ( result > 0 ); /*0x496fec*/
    v17 = -result; /*0x496ff2*/
    v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)aP3 - v17); /*0x496ff4*/
    v12 = arg0 + 2 * v17; /*0x496ff6*/
    result = a7 + 2 * v17; /*0x496ff9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496fff*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x497001*/
    v14 = result; /*0x497004*/
  }
  while ( (int)v18 > 0 ) /*0x49700e*/
  {
    v19 = *a2++; /*0x497014*/
    if ( v19 ) /*0x49701e*/
    {
      v14 += 2; /*0x497045*/
      v21 = a6 - *a10++; /*0x497048*/
      v12 += 2; /*0x497067*/
      v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)v18 - 1); /*0x49708f*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x497057*/
        *(_WORD *)(v12 - 2) = ((unsigned short)this->M2 & (*(_WORD *)(v12 + 2 * arg20 - 2) >> 2)) /*0x497090*/
                            + 3 * ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x497020*/
      v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)v18 - v20); /*0x497031*/
      a10 += v20; /*0x497033*/
      v12 += 2 * v20; /*0x497038*/
      v14 += 2 * v20; /*0x49703a*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x49709e*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4970a6*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x4970a8*/
  }
  return result; /*0x4970b3*/
}
}

// ==== BACKFILL 0x004970C0  sub_4970C0  cls=-  sig=csp  free-function ====
int E4Recv_4970C0::sub_4970C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00497100  sub_497100  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_497100::sub_497100(int arg0, unsigned char * a2, RLEBlitTransXlatZReadWrite_G * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__thiscall sub_497100(
        RLEBlitTransXlatZReadWrite_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransXlatZReadWrite_G *aP3,
        int a5,
        int arg10,
        _WORD *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // edx
  _WORD *result; // eax
  int v13; // esi
  int v17; // edx
  RLEBlitTransXlatZReadWrite_G *v18; // ebp
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl

  v11 = a5; /*0x497101*/
  result = a6; /*0x497105*/
  v13 = arg0; /*0x49710c*/
  if ( a5 <= 0 ) /*0x49711f*/
  {
    v18 = aP3; /*0x497154*/
  }
  else
  {
    do /*0x497134*/
    {
      if ( *a2++ ) /*0x497121*/
        --v11; /*0x497131*/
      else
        v11 -= *a2++; /*0x49712c*/
    }
    while ( v11 > 0 ); /*0x497134*/
    v17 = -v11; /*0x49713a*/
    v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)aP3 - v17); /*0x49713c*/
    v13 = arg0 + 2 * v17; /*0x49713e*/
    result = &a6[v17]; /*0x497141*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49714d*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x49714f*/
  }
  while ( (int)v18 > 0 ) /*0x49715a*/
  {
    v19 = *a2++; /*0x497160*/
    if ( v19 ) /*0x497169*/
    {
      v13 += 2; /*0x4971a9*/
      if ( arg10 - *a10 < (unsigned __int16)*result ) /*0x497199*/
      {
        *(_WORD *)(v13 - 2) = *(_WORD *)(this->M4 + 2 * v19); /*0x4971b7*/
        *result = arg10 - *a10; /*0x4971c1*/
      }
      ++result; /*0x4971c9*/
      ++a10; /*0x4971cc*/
      v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)v18 - 1); /*0x4971cd*/
    }
    else
    {
      v20 = *a2++; /*0x49716b*/
      v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)v18 - v20); /*0x49717c*/
      a10 += v20; /*0x49717e*/
      v13 += 2 * v20; /*0x497183*/
      result += v20; /*0x497185*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4971d7*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4971d9*/
  }
  return result; /*0x4971e0*/
}
}

// ==== BACKFILL 0x004971F0  sub_4971F0  cls=-  sig=csp  free-function ====
int E4Recv_4971F0::sub_4971F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransXlatZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00497350  sub_497350  cls=-  sig=csp  free-function ====
int E4Recv_497350::sub_497350(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00497390  sub_497390  cls=-  sig=csp  free-function ====
unsigned short * E4Recv_497390::sub_497390(unsigned short * a1, unsigned char * a2, int a4, RLEBlitTransDarkenZReadWrite_G * aP4, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int16 *__thiscall sub_497390(
        RLEBlitTransDarkenZReadWrite_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransDarkenZReadWrite_G *aP4,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  RLEBlitTransDarkenZReadWrite_G *v11; // edx
  RLEBlitTransDarkenZReadWrite_G *v13; // esi
  unsigned __int16 *result; // eax
  int v17; // edx
  int v18; // ebp
  unsigned __int8 v20; // dl
  __int16 v21; // dx

  v11 = aP4; /*0x497391*/
  v13 = (RLEBlitTransDarkenZReadWrite_G *)a1; /*0x49739c*/
  result = a6; /*0x4973a9*/
  if ( (int)aP4 <= 0 ) /*0x4973b1*/
  {
    v18 = a4; /*0x4973e6*/
  }
  else
  {
    do /*0x4973c6*/
    {
      if ( *a2++ ) /*0x4973b3*/
        v11 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v11 - 1); /*0x4973c3*/
      else
        v11 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v11 - *a2++); /*0x4973be*/
    }
    while ( (int)v11 > 0 ); /*0x4973c6*/
    v17 = -(int)v11; /*0x4973cc*/
    v18 = a4 - v17; /*0x4973ce*/
    v13 = (RLEBlitTransDarkenZReadWrite_G *)&a1[v17]; /*0x4973d0*/
    result = &a6[v17]; /*0x4973d3*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4973df*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4973e1*/
  }
  while ( v18 > 0 ) /*0x4973ec*/
  {
    if ( *a2++ ) /*0x4973ee*/
    {
      if ( arg10 - *a10 >= *result ) /*0x497423*/
      {
        ++a10; /*0x49744b*/
        --v18; /*0x49744c*/
        ++result; /*0x49744d*/
      }
      else
      {
        ++result; /*0x497437*/
        LOWORD(v13->vfptr) = (unsigned short)this->M1 & (LOWORD(v13->vfptr) >> 1); /*0x49743a*/
        v21 = *a10++; /*0x49743d*/
        *(result - 1) = arg10 - v21; /*0x497444*/
        --v18; /*0x497448*/
      }
      v13 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v13 + 2); /*0x497450*/
    }
    else
    {
      v20 = *a2++; /*0x4973f5*/
      v18 -= v20; /*0x497406*/
      a10 += v20; /*0x497408*/
      v13 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v13 + 2 * v20); /*0x49740d*/
      result += v20; /*0x49740f*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49745c*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x49745e*/
  }
  return result; /*0x497465*/
}
}

// ==== BACKFILL 0x00497470  sub_497470  cls=-  sig=csp  free-function ====
int E4Recv_497470::sub_497470(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00499CA0  ??_Gfacet_locale_std__UAEPAXI_Z_4  cls=-  sig=csp  free-function ====
BlitTransXlat * E4Recv_499CA0::___Gfacet_locale_std__UAEPAXI_Z_4(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlat *)this;
}
}

// ==== BACKFILL 0x00499CC0  AbstractClass::getTileIndex  cls=Blitter  sig=csp  renamed_refs=0 ====
Blitter * AbstractClass::getTileIndex(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (Blitter *)this;
}
}

// ==== BACKFILL 0x00499CE0  AbstractClass::setTileIndex  cls=BlitPlainXlat  sig=csp  renamed_refs=0 ====
BlitPlainXlat * AbstractClass::setTileIndex(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitPlainXlat *)this;
}
}

// ==== BACKFILL 0x00499D00  AbstractClass::getOverlayType  cls=BlitTransXlat  sig=csp  renamed_refs=0 ====
BlitTransXlat * AbstractClass::getOverlayType(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlat *)this;
}
}

// ==== BACKFILL 0x00499D20  AbstractClass::setOverlayFlags  cls=?$BlitTransZRemapXlat@E  sig=csp  renamed_refs=0 ====
std::locale::facet * AbstractClass::setOverlayFlags(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499D40  ??_Gfacet_locale_std__UAEPAXI_Z_9  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499D40::___Gfacet_locale_std__UAEPAXI_Z_9(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499D60  ??_Gfacet_locale_std__UAEPAXI_Z_10  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499D60::___Gfacet_locale_std__UAEPAXI_Z_10(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499D80  ??_Gfacet_locale_std__UAEPAXI_Z_11  cls=-  sig=csp  free-function ====
RLEBlitTransXlat * E4Recv_499D80::___Gfacet_locale_std__UAEPAXI_Z_11(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitTransXlat *)this;
}
}

// ==== BACKFILL 0x00499DA0  AbstractClass::clearOverlayFlags  cls=RLEBlitter  sig=csp  renamed_refs=0 ====
RLEBlitter * AbstractClass::clearOverlayFlags(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitter *)this;
}
}

// ==== BACKFILL 0x00499DC0  ??_Gfacet_locale_std__UAEPAXI_Z_13  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499DC0::___Gfacet_locale_std__UAEPAXI_Z_13(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499DE0  ??_Gfacet_locale_std__UAEPAXI_Z_14  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499DE0::___Gfacet_locale_std__UAEPAXI_Z_14(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499E00  ??_Gfacet_locale_std__UAEPAXI_Z_15  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499E00::___Gfacet_locale_std__UAEPAXI_Z_15(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499E20  ??_Gfacet_locale_std__UAEPAXI_Z_16  cls=-  sig=csp  free-function ====
RLEBlitTransXlatZRead * E4Recv_499E20::___Gfacet_locale_std__UAEPAXI_Z_16(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitTransXlatZRead *)this;
}
}

// ==== BACKFILL 0x00499E40  ??_Gfacet_locale_std__UAEPAXI_Z_17  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499E40::___Gfacet_locale_std__UAEPAXI_Z_17(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499E60  ??_Gfacet_locale_std__UAEPAXI_Z_18  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499E60::___Gfacet_locale_std__UAEPAXI_Z_18(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499E80  ??_Gfacet_locale_std__UAEPAXI_Z_19  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499E80::___Gfacet_locale_std__UAEPAXI_Z_19(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499EA0  ??_Gfacet_locale_std__UAEPAXI_Z_20  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499EA0::___Gfacet_locale_std__UAEPAXI_Z_20(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499EC0  ??_Gfacet_locale_std__UAEPAXI_Z_21  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499EC0::___Gfacet_locale_std__UAEPAXI_Z_21(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499EE0  ??_Gfacet_locale_std__UAEPAXI_Z_22  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499EE0::___Gfacet_locale_std__UAEPAXI_Z_22(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499F00  ??_Gfacet_locale_std__UAEPAXI_Z_23  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499F00::___Gfacet_locale_std__UAEPAXI_Z_23(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499F20  ??_Gfacet_locale_std__UAEPAXI_Z_24  cls=-  sig=csp  free-function ====
BlitPlainXlat * E4Recv_499F20::___Gfacet_locale_std__UAEPAXI_Z_24(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitPlainXlat *)this;
}
}

// ==== BACKFILL 0x00499F40  ??_Gfacet_locale_std__UAEPAXI_Z_25  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499F40::___Gfacet_locale_std__UAEPAXI_Z_25(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00499F60  ??_Gfacet_locale_std__UAEPAXI_Z_26  cls=-  sig=csp  free-function ====
BlitTransDarken * E4Recv_499F60::___Gfacet_locale_std__UAEPAXI_Z_26(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransDarken *)this;
}
}

// ==== BACKFILL 0x00499F80  ??_Gfacet_locale_std__UAEPAXI_Z_27  cls=-  sig=csp  free-function ====
BlitTransLucent75 * E4Recv_499F80::___Gfacet_locale_std__UAEPAXI_Z_27(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransLucent75 *)this;
}
}

// ==== BACKFILL 0x00499FA0  ??_Gfacet_locale_std__UAEPAXI_Z_28  cls=-  sig=csp  free-function ====
BlitTransLucent50 * E4Recv_499FA0::___Gfacet_locale_std__UAEPAXI_Z_28(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransLucent50 *)this;
}
}

// ==== BACKFILL 0x00499FC0  ??_Gfacet_locale_std__UAEPAXI_Z_29  cls=-  sig=csp  free-function ====
BlitTransLucent25 * E4Recv_499FC0::___Gfacet_locale_std__UAEPAXI_Z_29(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransLucent25 *)this;
}
}

// ==== BACKFILL 0x00499FE0  ??_Gfacet_locale_std__UAEPAXI_Z_30  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_499FE0::___Gfacet_locale_std__UAEPAXI_Z_30(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A000  ??_Gfacet_locale_std__UAEPAXI_Z_31  cls=-  sig=csp  free-function ====
BlitTransXlatZRead * E4Recv_49A000::___Gfacet_locale_std__UAEPAXI_Z_31(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlatZRead *)this;
}
}

// ==== BACKFILL 0x0049A020  ??_Gfacet_locale_std__UAEPAXI_Z_32  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A020::___Gfacet_locale_std__UAEPAXI_Z_32(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A040  ??_Gfacet_locale_std__UAEPAXI_Z_33  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A040::___Gfacet_locale_std__UAEPAXI_Z_33(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A060  ??_Gfacet_locale_std__UAEPAXI_Z_34  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A060::___Gfacet_locale_std__UAEPAXI_Z_34(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A080  ??_Gfacet_locale_std__UAEPAXI_Z_35  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A080::___Gfacet_locale_std__UAEPAXI_Z_35(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A0A0  ??_Gfacet_locale_std__UAEPAXI_Z_36  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A0A0::___Gfacet_locale_std__UAEPAXI_Z_36(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A0C0  ??_Gfacet_locale_std__UAEPAXI_Z_37  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A0C0::___Gfacet_locale_std__UAEPAXI_Z_37(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A0E0  ??_Gfacet_locale_std__UAEPAXI_Z_38  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A0E0::___Gfacet_locale_std__UAEPAXI_Z_38(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A100  ??_Gfacet_locale_std__UAEPAXI_Z_39  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A100::___Gfacet_locale_std__UAEPAXI_Z_39(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A120  ??_Gfacet_locale_std__UAEPAXI_Z_40  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A120::___Gfacet_locale_std__UAEPAXI_Z_40(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A140  ??_Gfacet_locale_std__UAEPAXI_Z_41  cls=-  sig=csp  free-function ====
BlitTransXlatZReadWrite * E4Recv_49A140::___Gfacet_locale_std__UAEPAXI_Z_41(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlatZReadWrite *)this;
}
}

// ==== BACKFILL 0x0049A160  ??_Gfacet_locale_std__UAEPAXI_Z_42  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A160::___Gfacet_locale_std__UAEPAXI_Z_42(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A180  ??_Gfacet_locale_std__UAEPAXI_Z_43  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A180::___Gfacet_locale_std__UAEPAXI_Z_43(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A7C0  ??_Gfacet_locale_std__UAEPAXI_Z_55  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A7C0::___Gfacet_locale_std__UAEPAXI_Z_55(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A7E0  ??_Gfacet_locale_std__UAEPAXI_Z_56  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A7E0::___Gfacet_locale_std__UAEPAXI_Z_56(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A800  ??_Gfacet_locale_std__UAEPAXI_Z_57  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A800::___Gfacet_locale_std__UAEPAXI_Z_57(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A820  ??_Gfacet_locale_std__UAEPAXI_Z_58  cls=-  sig=csp  free-function ====
RLEBlitTransXlatZRead * E4Recv_49A820::___Gfacet_locale_std__UAEPAXI_Z_58(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitTransXlatZRead *)this;
}
}

// ==== BACKFILL 0x0049A840  ??_Gfacet_locale_std__UAEPAXI_Z_59  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A840::___Gfacet_locale_std__UAEPAXI_Z_59(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A860  ??_Gfacet_locale_std__UAEPAXI_Z_60  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A860::___Gfacet_locale_std__UAEPAXI_Z_60(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A880  ??_Gfacet_locale_std__UAEPAXI_Z_61  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A880::___Gfacet_locale_std__UAEPAXI_Z_61(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A8A0  ??_Gfacet_locale_std__UAEPAXI_Z_62  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A8A0::___Gfacet_locale_std__UAEPAXI_Z_62(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A8C0  ??_Gfacet_locale_std__UAEPAXI_Z_63  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A8C0::___Gfacet_locale_std__UAEPAXI_Z_63(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A8E0  ??_Gfacet_locale_std__UAEPAXI_Z_64  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A8E0::___Gfacet_locale_std__UAEPAXI_Z_64(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A900  ??_Gfacet_locale_std__UAEPAXI_Z_65  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A900::___Gfacet_locale_std__UAEPAXI_Z_65(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A920  ??_Gfacet_locale_std__UAEPAXI_Z_66  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A920::___Gfacet_locale_std__UAEPAXI_Z_66(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A940  ??_Gfacet_locale_std__UAEPAXI_Z_67  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A940::___Gfacet_locale_std__UAEPAXI_Z_67(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A960  ??_Gfacet_locale_std__UAEPAXI_Z_68  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A960::___Gfacet_locale_std__UAEPAXI_Z_68(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049A980  ??_Gfacet_locale_std__UAEPAXI_Z_69  cls=-  sig=csp  free-function ====
std::locale::facet * E4Recv_49A980::___Gfacet_locale_std__UAEPAXI_Z_69(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0049B610  MissionClass::Init  cls=MissionClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* MissionClass::Init() {
{
      this->abstractFlags = -2;
      this->nextObject = -2;
      this->nextArrayIndex = -2;
      this->attachedTag = -2;
      *(_BYTE *)this = 0;
      this->referenceCount = 0;
      this->ambientSoundController = 0;
      this->q044 = -1;
      this->health = 0;
      this->q040 = 0;
      this->attachedBomb = -1;
      this->q048 = 0;
      this->q04C = 0;
      this->customSound_controller = 0;
      this->q054 = 0;
      this->q058 = 0;
      this->q05C = 0;
      this->bombVisible = 0;
      this->q060 = 0;
      this->customSound = 0;
      return this;
}
} } }

// ==== BACKFILL 0x0049B720  Array::Cleanup  cls=Array  sig=csp  renamed_refs=0 ====
void Array::Cleanup()
{
{
    int i;
    if ( this->Array_field_0x3C )
  {
    for ( i = 0; i < this->Array_field_0x40; ++i )
    {
    if ( *(int *)(this->Array_field_0x3C + 4 * i) )
    __3_YAXPAX_Z(*(void **)(this->Array_field_0x3C + 4 * i));
    }
    __3_YAXPAX_Z(*(void **)(this + 60));
  }
}
}

// ==== BACKFILL 0x0049BC80  Movie::GetSectionID  cls=Movie  sig=csp  renamed_refs=0 ====
char Movie::GetSectionID(unsigned int * a2)
{
{
    if ( !(unsigned char)this->Movie_field_0x6C )
    return 0;
    *a2 = this->Movie_field_0x44;
    return 1;
}
}

// ==== BACKFILL 0x0049BCA0  MPCooperative::GetMovieScore  cls=MPCooperative  sig=csp  renamed_refs=0 ====
char MPCooperative::GetMovieScore(CampaignEndScoreClass * aP1)
{
{
    if ( !(unsigned char)this->MPCooperative_field_0x6C )
    return 0;
    aP1->vfptr = *(void **)(this + 64);
    return 1;
}
}

// ==== BACKFILL 0x0049BCC0  Movie::GetState  cls=Movie  sig=csp  renamed_refs=0 ====
char Movie::GetState(CCINIClass * aP1)
{
{
    if ( !(unsigned char)this->Movie_field_0x6C )
    return 0;
    *(int *)aP1->__pad_0 = this->Movie_field_0x38;
    return 1;
}
}

// ==== BACKFILL 0x0049D070  Array::GetElementAt  cls=Array  sig=csp  renamed_refs=0 ====
char Array::GetElementAt(unsigned int * a2, int a3)
{
{
    int v3;
    char result;
    v3 = a3;
    result = 0;
    *a2 = 0;
    if ( a3 == -1 )
    v3 = this->Array_field_0x38;
    if ( v3 < 0 || v3 >= this->Array_field_0x40 )
    v3 = -1;
    if ( (unsigned char)this->Array_field_0x6C )
  {
    if ( v3 != -1 )
    *a2 = *(int *)(this->Array_field_0x3C + 4 * v3);
    if ( *a2 )
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x0049D9F0  SideClass::FindByName  cls=SideClass  sig=csp  renamed_refs=0 ====
int SideClass::FindByName()
{
{
    int v3;
    int v4;
    if ( !_strcmpi(this, &g_INI_Key_Digest.__pad_20[8]) )
    return -2;
    if ( !this )
    return -1;
    v3 = 0;
    if ( g_SuperWeaponTypeArray <= 0 )
    return -1;
    while ( 1 )
  {
    v4 = *((int *)(g_SuperWeaponTypeCount) + v3);
    if ( !_strcmpi((const void *)(v4 + 100), this) || !_strcmpi((const void *)(v4 + 36), this) )
    break;
    if ( ++v3 >= g_SuperWeaponTypeArray )
    return -1;
  }
    return v3;
}
}

// ==== BACKFILL 0x0049DA60  sub_49DA60  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_49DA60::sub_49DA60()
{
{
    int *result;
    int *v2;
    int *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    result = this;
    v2 = this + 4;
    v3 = this + 7;
    result[1] = 0;
    result[2] = 0;
    v2[1] = 0;
    v2[2] = 0;
    *v2 = &vt_GenericNode;
    v3[1] = 0;
    v3[2] = 0;
    *v3 = &vt_GenericNode;
    result[3] = &vt_GenericList;
    if ( v3 )
  {
    v4 = v3[1];
    if ( v4 )
    {
    v5 = v3[2];
    if ( v5 )
      {
    *(int *)(v5 + 4) = v4;
    *(int *)(v3[1] + 8) = v3[2];
    v3[2] = 0;
    v3[1] = 0;
      }
    }
  }
    v6 = v2[1];
    v3[2] = v2;
    v3[1] = v6;
    v7 = v2[1];
    if ( v7 )
    *(int *)(v7 + 8) = v3;
    v2[1] = v3;
    result[3] = &vt_List_INIClass_INISection;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    *((char *)(result) + 52) = 0;
    result[14] = 0;
    result[15] = 0;
    *((char *)(result) + 64) = 0;
    *result = &CCINIClass_Vtable;
    *((char *)(result) + 96) = 0;
    return result;
}
}

// ==== BACKFILL 0x0049E4F0  CampaignClass::GetValue  cls=CampaignClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CampaignClass::GetValue(void* a1) {
{
      if ( !this->q060 )
        CampaignClass::LoadFromINI(this);
      *(_DWORD *)aP1->__pad_0 = this->q05C;
      return this->q060;
}
} }

// ==== BACKFILL 0x0049E510  INIClass::ClearContents  cls=INIClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* INIClass::ClearContents() {
{
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      void (__thiscall ***v9)(_DWORD, int); // ecx
      int v10;
      int i;
      int v12;
      int v13;
      int v14;
      void (__thiscall ***v15)(_DWORD, int); // ecx
      int v16;
      int v17;
      void *v18;
      int v19;
      int v20;
      int v21;
      int v22;
      void *v23;
      void *v24;
      int v26;
      int v27;
      void *v28;

      v2 = 0;
      if ( this->q058 )
      {
        v26 = 0;
        if ( this->q05C > 0 )
        {
          v3 = 0;
          while ( 1 )
          {
            v4 = v3 + this->q058;
            if ( *(_DWORD *)(v4 + 12) )
            {
              __3_YAXPAX_Z(*(void **)(v4 + 4));
              __3_YAXPAX_Z(*(void **)(v3 + this->q058 + 64));
              __3_YAXPAX_Z(*(void **)(v3 + this->q058 + 12));
            }
            v5 = this->q058;
            if ( *(int *)(v3 + v5 + 56) > 0 )
            {
              do
              {
                v6 = 0;
                if ( *(int *)(*(_DWORD *)(*(_DWORD *)(v3 + v5 + 44) + 4 * v2) + 16) > 0 )
                {
                  v7 = *(_DWORD *)(*(_DWORD *)(v3 + v5 + 44) + 4 * v2);
                  do
                  {
                    __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v7 + 4) + 4 * v6++));
                    v7 = *(_DWORD *)(*(_DWORD *)(v3 + this->q058 + 44) + 4 * v2);
                  }
                  while ( v6 < *(_DWORD *)(v7 + 16) );
                }
                v8 = *(_DWORD *)(*(_DWORD *)(v3 + this->q058 + 44) + 4 * v2);
                (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
                v9 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(v3 + this->q058 + 44) + 4 * v2);
                if ( v9 )
                  (**v9)(v9, 1);
                v5 = this->q058;
                ++v2;
              }
              while ( v2 < *(_DWORD *)(v3 + v5 + 56) );
            }
            (*(void (__thiscall **)(int))(*(_DWORD *)(v3 + this->q058 + 40) + 12))(v3 + this->q058 + 40);
            v10 = this->q058;
            for ( i = 0; i < *(_DWORD *)(v3 + v10 + 32); ++i )
            {
              v12 = 0;
              if ( *(int *)(*(_DWORD *)(*(_DWORD *)(v3 + v10 + 20) + 4 * i) + 16) > 0 )
              {
                v13 = *(_DWORD *)(*(_DWORD *)(v3 + v10 + 20) + 4 * i);
                do
                {
                  __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v13 + 4) + 4 * v12++));
                  v13 = *(_DWORD *)(*(_DWORD *)(v3 + this->q058 + 20) + 4 * i);
                }
                while ( v12 < *(_DWORD *)(v13 + 16) );
              }
              v14 = *(_DWORD *)(*(_DWORD *)(v3 + this->q058 + 20) + 4 * i);
              (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
              v15 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(v3 + this->q058 + 20) + 4 * i);
              if ( v15 )
                (**v15)(v15, 1);
              v10 = this->q058;
            }
            (*(void (__thiscall **)(int))(*(_DWORD *)(v3 + this->q058 + 16) + 12))(v3 + this->q058 + 16);
            v3 += 76;
            if ( ++v26 >= this->q05C )
              break;
            v2 = 0;
          }
        }
        v16 = this->q058;
        if ( v16 )
        {
          v17 = *(_DWORD *)(v16 - 4);
          v18 = (void *)(v16 - 4);
          v28 = (void *)(v16 - 4);
          v19 = 19 * v17;
          v20 = v17 - 1;
          v21 = v16 + 4 * v19;
          if ( v20 >= 0 )
          {
            v22 = v21 + 44;
            v27 = v20 + 1;
            do
            {
              v22 -= 76;
              DeleteAndZero((void **)(v22 + 28));
              DeleteAndZero((void **)(v22 + 24));
              v23 = *(void **)v22;
              *(_DWORD *)(v22 - 4) = &vt_VectorClass_DynamicVectorClass_char;
              if ( v23 && *(_BYTE *)(v22 + 9) )
              {
                __3_YAXPAX_Z(v23);
                *(_DWORD *)v22 = 0;
              }
              *(_BYTE *)(v22 + 9) = 0;
              *(_DWORD *)(v22 + 4) = 0;
              v24 = *(void **)(v22 - 24);
              *(_DWORD *)(v22 - 28) = &vt_VectorClass_DynamicVectorClass_char;
              if ( v24 && *(_BYTE *)(v22 - 15) )
              {
                __3_YAXPAX_Z(v24);
                *(_DWORD *)(v22 - 24) = 0;
              }
              *(_BYTE *)(v22 - 15) = 0;
              *(_DWORD *)(v22 - 20) = 0;
              --v27;
            }
            while ( v27 );
            v18 = v28;
          }
          __3_YAXPAX_Z(v18);
        }
        this->q058 = 0;
        this->q060 = 0;
      }
      return HashTable::DestroyHashTableINIClass((void **)this);
}
} }

// ==== BACKFILL 0x0049EA10  Node::Init  cls=Node  sig=csp  renamed_refs=0 ====
unsigned int * Node::Init()
{
{
    *(void**)this = 0;
    this->Previous = 0;
    this->Blowfish = 0;
    this->CountFiles = 0;
    this->FileSize = 0;
    return this;
}
}

// ==== BACKFILL 0x0049F090  CampaignClass::Constructor_0  cls=CampaignClass  sig=csp  renamed_refs=5 ====
namespace gamemd { void* CampaignClass::Constructor_0(int a2, int a3) {
{
    this->vtable2 = 0;
    this->vtable3 = a2;
    this->vtable4 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_DynamicVectorClass_char;
    if ( a2 )
  {
    if ( a3 )
    {
    this->vtable2 = a3;
    return this;
    }
    this->vtable2 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
} }

// ==== BACKFILL 0x0049F2F0  sub_49F2F0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_49F2F0()
{
{
    Direction_X_Offsets[0] = -65536;
    DataGlobal_89F68C = -65535;
    g_CellDirectionOffsets = 1;
    DataGlobal_89F694 = 65537;
    DataGlobal_89F69C = 0x1FFFF;
    g_DirectionOffsetPool = 0x10000;
    Direction_Y_Offsets = 0xFFFF;
    DataGlobal_89F6A4 = -1;
    return -1;
}
}

// ==== BACKFILL 0x0049F420  RandomCoordScatter  cls=unknown  sig=csp  renamed_refs=0 ====
int * RandomCoordScatter(int * a0, IUnknown * aP1, int aP2, ScenarioClass * aP3)
{
{
    char v5;
    short v6;
    IUnknown *v7;
    double v8;
    double v9;
    IUnknown *v10;
    IUnknown *v11;
    int v12;
    IUnknown *v13;
    int *result;
    int *v15;
    IUnknown *a0[2];
    int v17;
    int *v18;
    double v19;
    double v20;
    IUnknown *aP2a;
    v18 = a0;
    LOWORD(a0[0]) = 0;
    v5 = Random::State((int *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 536));
    LOBYTE(v6) = 0;
    HIBYTE(v6) = v5;
    v7 = (IUnknown *)aP1->field_8;
    *(double *)a0 = (double)(v6 - 0x3FFF) * -0.00009587672516830327;
    v19 = (double)aP2;
    v20 = (double)aP1->field_4;
    v8 = Math::SinCos(a0[0]);
    aP2a = (IUnknown *)Math::RoundToInt(v20 - v8 * v19);
    v9 = Math::ArcTan2(a0[0]);
    v10 = (IUnknown *)Math::RoundToInt(v9 * v19 + (double)aP1->field_0);
    Coord::Subtract(a0, v10, aP2a, v7);
    v11 = a0[1];
    v12 = v17;
    v13 = a0[0];
    if ( (unsigned int)((int)a0[0] / 256) >= 0x200 || (unsigned int)((int)a0[1] / 256) >= 0x200 )
  {
    v13 = (IUnknown *)aP1->field_0;
    v11 = (IUnknown *)aP1->field_4;
    v12 = aP1->field_8;
  }
    if ( (char)aP3 )
  {
    v13 = (IUnknown *)&v13->__pad_68[-(unsigned char)v13 + 24];
    v11 = (IUnknown *)&v11->__pad_68[-(unsigned char)v11 + 24];
  }
    result = v18;
    v15 = v18;
    *v18 = (int)v13;
    v15[1] = (int)v11;
    v15[2] = v12;
    return result;
}
}

// ==== BACKFILL 0x0049F550  globalHelper_09F550  cls=unknown  sig=csp  renamed_refs=0 ====
IUnknown * globalHelper_09F550(int * a1, IUnknown * a2, int a3)
{
{
    int v4;
    IUnknown *v5;
    char *v6;
    int GroundHeight;
    int v9;
    int v10;
    IUnknown *v11;
    v4 = *(int *)&DataGlobal_89E138.__pad_14B0[8 * a3 + 240] + a2->field_0;
    v5 = (IUnknown *)a2->field_8;
    v10 = a2->field_4 + *(int *)&DataGlobal_89E138.__pad_14B0[8 * a3 + 244];
    v9 = v4;
    v11 = v5;
    v6 = (char *)v5 - Cell::GetGroundHeight(a2);
    GroundHeight = Cell::GetGroundHeight((IUnknown *)&v9);
    *a1 = v9;
    *((int*)(a1) + 1) = v10;
    *((int*)(a1) + 2) = (int)&v6[GroundHeight];
    return (IUnknown *)a1;
}
}

// ==== BACKFILL 0x0049F8B0  WinMain::CleanupResource  cls=WinMain  sig=csp  renamed_refs=0 ====
LSTATUS WinMain::CleanupResource()
{
{
    LSTATUS result;
    HKEY phkResult;
    phkResult = (HKEY)this;
    Debug::Log();
    if ( lpBaseAddress )
  {
    UnmapViewOfFile(lpBaseAddress);
    lpBaseAddress = 0;
  }
    result = RegOpenKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0xF003Fu, &phkResult);
    if ( !result )
  {
    RegDeleteValueA(phkResult, ValueName);
    return RegCloseKey(phkResult);
  }
    return result;
}
}

// ==== BACKFILL 0x0049FAE0  DynamicVector::GetOrGrow  cls=DynamicVector  sig=csp  renamed_refs=3 ====
int DynamicVector::GetOrGrow(DynamicVector * aP1)
{
{
    int v3;
    int i;
    v3 = this->DynamicVector_field_0x8;
    if ( (int)aP1 < v3 )
    return *(int *)(this->q004 + 4 * (int)aP1);
    if ( this->SetCapacity((char *)&aP1->field_8 + 2, 0) )
  {
    for ( i = v3; i < this->DynamicVector_field_0x8; *(int *)(this->q004 + 4 * i - 4) = 0 )
    ++i;
    return *(int *)(this->q004 + 4 * (int)aP1);
  }
    return 0;
}
}

// ==== BACKFILL 0x0049FB60  VectorClass::GetCount  cls=VectorClass  sig=csp  renamed_refs=0 ====
int VectorClass::GetCount()
{
{
    return this->Count;
}
}

// ==== BACKFILL 0x0049FCE0  CounterClass::QueryInterface  cls=CounterClass  sig=csp  renamed_refs=0 ====
CounterClass * CounterClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_int;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CounterClass *)this;
}
}
