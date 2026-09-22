// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00491100  sub_491100  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
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
    for ( i = 0; (int)result < *(int *)&DataGlobal_89E138[3024]; i = result )
  {
    v12 = *(int **)(*(int *)&DataGlobal_89E138[3012] + 4 * (int)result);
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
    LOWORD(v9) = (unsigned char)((unsigned char)((unsigned char)((unsigned short)v9 >> (char)aP3) << a3) >> DataGlobal_89E138[11428]);
    LOWORD(v15) = (unsigned char)((unsigned char)((char)v17 << v20) >> DataGlobal_89E138[11420]);
    LOWORD(v16) = (unsigned char)(v18 >> DataGlobal_89E138[11436]);
    v9 = (v16 << DataGlobal_89E138[11432])
    | (v15 << DataGlobal_89E138[11416])
    | (v9 << DataGlobal_89E138[11424]);
    --v14;
    *(v13 - 1) = v9;
      }
    while ( v14 );
    v12[96] = *(unsigned short *)&DataGlobal_89E138[11440];
    v12[97] = *(unsigned short *)&DataGlobal_89E138[11442];
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

// ==== BACKFILL 0x004914C0  AbstractClass::getFactoryCount  cls=BlitTransXlat  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x00491500  AbstractClass::getFactoryIndex  cls=BlitTransXlat  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::getFactoryIndex(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
{
    return this->COMStub_AddRef(a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491530  AbstractClass::setFactoryState  cls=BlitTransXlat  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::setFactoryState(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
{
    return this->COMStub_AddRef(a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491560  AbstractClass::checkFactoryQueue  cls=BlitTransXlat  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::checkFactoryQueue(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
{
    return this->COMStub_AddRef(a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491590  AbstractClass::readFactoryINI  cls=?$BlitTransZRemapXlat@E  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x00491610  AbstractClass::resetFactoryState  cls=?$BlitTransZRemapXlat@E  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::resetFactoryState(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
} } }

// ==== BACKFILL 0x00491640  AbstractClass::validateFactory  cls=?$BlitTransZRemapXlat@E  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x00492330  sub_492330  cls=-  sig=csp  free-function ====
int E4Recv_492330::sub_492330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapDestZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
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
    v13 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    do
    {
    v14 = *result++;
    if ( argC < v14 )
      {
    *a1 = *(short *)(this->M4 + 2 * *a2);
    v13 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v13 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *result++;
    if ( argC < v14 && *a2 )
      {
    *a1 = *(short *)(this->M8 + 2 * *(unsigned char *)((unsigned char)*a2 + v15));
    v13 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v10 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    v12 = a4;
    do
    {
    v14 = *result++;
    if ( argC < v14 && *a2 )
      {
    *a1 = (unsigned short)this->M1 & (*a1 >> 1);
    v10 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = 3 * ((unsigned short)this->M2 & (*a1 >> 2))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v13 = *result++;
    if ( argC < v13 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (*a1 >> 1))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 1));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (*a1 >> 2))
    + 3 * ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = 3 * ((unsigned short)this->M2 & (a1[a9] >> 2))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v13 = *result++;
    if ( argC < v13 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (a1[a9] >> 1))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 1));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (a1[a9] >> 2))
    + 3 * ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result )
      {
    *a1 = *(short *)(this->M4 + 2 * *a2);
    *result = (unsigned char)argC;
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v11 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result && *a2 )
      {
    *a1 = *(short *)(this->M8 + 2 * *(unsigned char *)((unsigned char)*a2 + v10));
    *result = argC;
    v11 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    v10 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result && *a2 )
      {
    *a1 = (unsigned short)this->M1 & (*a1 >> 1);
    *result = argC;
    v10 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
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
    if ( (unsigned int)result >= *(int *)(*(int *)&DataGlobal_87C374[45776] + 28) )
    result -= *(int *)(*(int *)&DataGlobal_87C374[45776] + 32);
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
    result = *(int *)&DataGlobal_87C374[45776];
    if ( v12 >= *(int *)(*(int *)&DataGlobal_87C374[45776] + 28) )
    v12 -= *(int *)(*(int *)&DataGlobal_87C374[45776] + 32);
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

// ==== BACKFILL 0x00496A40  sub_496A40  cls=-  sig=csp  free-function ====
int E4Recv_496A40::sub_496A40(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496B80  sub_496B80  cls=-  sig=csp  free-function ====
int E4Recv_496B80::sub_496B80(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496CD0  sub_496CD0  cls=-  sig=csp  free-function ====
int E4Recv_496CD0::sub_496CD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496E20  sub_496E20  cls=-  sig=csp  free-function ====
int E4Recv_496E20::sub_496E20(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x00496F70  sub_496F70  cls=-  sig=csp  free-function ====
int E4Recv_496F70::sub_496F70(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// ==== BACKFILL 0x004970C0  sub_4970C0  cls=-  sig=csp  free-function ====
int E4Recv_4970C0::sub_4970C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
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

// ==== BACKFILL 0x00499CC0  AbstractClass::getTileIndex  cls=Blitter  sig=csp  renamed_refs=0  residual=- ====
Blitter * AbstractClass::getTileIndex(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (Blitter *)this;
}
}

// ==== BACKFILL 0x00499CE0  AbstractClass::setTileIndex  cls=BlitPlainXlat  sig=csp  renamed_refs=0  residual=- ====
BlitPlainXlat * AbstractClass::setTileIndex(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitPlainXlat *)this;
}
}

// ==== BACKFILL 0x00499D00  AbstractClass::getOverlayType  cls=BlitTransXlat  sig=csp  renamed_refs=0  residual=- ====
BlitTransXlat * AbstractClass::getOverlayType(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlat *)this;
}
}

// ==== BACKFILL 0x00499D20  AbstractClass::setOverlayFlags  cls=?$BlitTransZRemapXlat@E  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x00499DA0  AbstractClass::clearOverlayFlags  cls=RLEBlitter  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049B610  MissionClass::Init  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049B720  Array::Cleanup  cls=Array  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049BC80  Movie::GetSectionID  cls=Movie  sig=csp  renamed_refs=0  residual=- ====
char Movie::GetSectionID(unsigned int * a2)
{
{
    if ( !(unsigned char)this->Movie_field_0x6C )
    return 0;
    *a2 = this->Movie_field_0x44;
    return 1;
}
}

// ==== BACKFILL 0x0049BCA0  MPCooperative::GetMovieScore  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::GetMovieScore(CampaignEndScoreClass * aP1)
{
{
    if ( !(unsigned char)this->MPCooperative_field_0x6C )
    return 0;
    aP1->vfptr = *(void **)(this + 64);
    return 1;
}
}

// ==== BACKFILL 0x0049BCC0  Movie::GetState  cls=Movie  sig=csp  renamed_refs=0  residual=- ====
char Movie::GetState(CCINIClass * aP1)
{
{
    if ( !(unsigned char)this->Movie_field_0x6C )
    return 0;
    *(int *)aP1->__pad_0 = this->Movie_field_0x38;
    return 1;
}
}

// ==== BACKFILL 0x0049D070  Array::GetElementAt  cls=Array  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049D9F0  SideClass::FindByName  cls=SideClass  sig=csp  renamed_refs=0  residual=- ====
int SideClass::FindByName()
{
{
    int v3;
    int v4;
    if ( !_strcmpi(this, &g_INI_Key_Digest[40]) )
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

// ==== BACKFILL 0x0049DA60  sub_49DA60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049E4F0  CampaignClass::GetValue  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CampaignClass::GetValue(void* a1) {
{
      if ( !this->q060 )
        CampaignClass::LoadFromINI(this);
      *(_DWORD *)aP1->__pad_0 = this->q05C;
      return this->q060;
}
} }

// ==== BACKFILL 0x0049E510  INIClass::ClearContents  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049EA10  Node::Init  cls=Node  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049F090  CampaignClass::Constructor_0  cls=CampaignClass  sig=csp  renamed_refs=5  residual=IsAllocated ====
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

// ==== BACKFILL 0x0049F2F0  sub_49F2F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049F420  RandomCoordScatter  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
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
    v5 = Random::State((int *)(*(int *)&HouseClass_Player[29924] + 536));
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

// ==== BACKFILL 0x0049F550  globalHelper_09F550  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
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
    v4 = *(int *)&DataGlobal_89E138[5296][8 * a3 + 240] + a2->field_0;
    v5 = (IUnknown *)a2->field_8;
    v10 = a2->field_4 + *(int *)&DataGlobal_89E138[5296][8 * a3 + 244];
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

// ==== BACKFILL 0x0049F8B0  WinMain::CleanupResource  cls=WinMain  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x0049FAE0  DynamicVector::GetOrGrow  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
int DynamicVector::GetOrGrow(DynamicVector * aP1)
{
{
    int v3;
    int i;
    v3 = this->q008;
    if ( (int)aP1 < v3 )
    return *(int *)(this->Items + 4 * (int)aP1);
    if ( this->SetCapacity((char *)&aP1->field_8 + 2, 0) )
  {
    for ( i = v3; i < this->q008; *(int *)(this->Items + 4 * i - 4) = 0 )
    ++i;
    return *(int *)(this->Items + 4 * (int)aP1);
  }
    return 0;
}
}

// ==== BACKFILL 0x0049FB60  VectorClass::GetCount  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass::GetCount()
{
{
    return this->Count;
}
}

// ==== BACKFILL 0x0049FCE0  CounterClass::QueryInterface  cls=CounterClass  sig=csp  renamed_refs=0  residual=- ====
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
