// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007D06E8  __callnewh  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _callnewh(IUnknown * aP0)
{
{
    return CRTGlobal_B782B8.sectionHead[0] && ((int (__cdecl *)(IUnknown *))CRTGlobal_B782B8.sectionHead[0])(aP0);
}
}

// ==== BACKFILL 0x007D07DF  __read  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _read(int FileHandle, void * DstBuf, unsigned int MaxCharCount)
{
{
    int lk;
    if ( FileHandle < uNumber && (*(char *)(CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(FileHandle);
    lk = _read_lk(FileHandle, DstBuf, MaxCharCount);
    _unlock_fhandle(FileHandle);
    return lk;
  }
    else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}
}

// ==== BACKFILL 0x007D0D55  __write  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _write(int FileHandle, CCINIClass * aP1, unsigned int MaxCharCount)
{
{
    int v3;
    if ( FileHandle < uNumber && (*(char *)(CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(FileHandle);
    v3 = _write_lk(FileHandle, aP1, MaxCharCount);
    _unlock_fhandle(FileHandle);
    return v3;
  }
    else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}
}

// ==== BACKFILL 0x007D107D  __msize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t _msize(CCINIClass * aP0)
{
{
    size_t v1;
    _lock(9);
    if ( __sbh_find_block((INIClass *)aP0) )
  {
    v1 = aP0[-1].unknown54 - 9;
    _unlock(9);
  }
    else
  {
    _unlock(9);
    return HeapSize(hHeap, 0, aP0);
  }
    return v1;
}
}

// ==== BACKFILL 0x007D12E6  _strncnt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * strncnt(const unsigned char * String, int Count)
{
const unsigned char* scan = String;
int remaining = Count - 1;
if (Count)
{
    do
    {
        if (!*scan)
            break;
        ++scan;
    }
    while (remaining--);
}
if (*scan)
    return (unsigned char *)Count;
else
    return (unsigned char *)(scan - String);
}

// ==== BACKFILL 0x007D13F8  __initptd  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _initptd(int a1)
{
{
    *(int *)(a1 + 80) = &DataGlobal_87CB20;
    *(int *)(a1 + 20) = 1;
    return a1;
}
}

// ==== BACKFILL 0x007D140B  __getptd  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _getptd()
{
{
    DWORD LastError;
    int *Value;
    int *v2;
    DWORD CurrentThreadId;
    LastError = GetLastError();
    Value = TlsGetValue(dwTlsIndex);
    if ( !Value )
  {
    v2 = calloc(1u, 0x74u);
    Value = v2;
    if ( !v2 || !TlsSetValue(dwTlsIndex, v2) )
    _amsg_exit(0x10u);
    _initptd(Value);
    CurrentThreadId = GetCurrentThreadId();
    Value[1] = -1;
    *Value = CurrentThreadId;
  }
    SetLastError(LastError);
    return Value;
}
}

// ==== BACKFILL 0x007D151E  __fltin2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _fltin2(int a1, int a2)
{
{
    int v2;
    char v3;
    int v4;
    int v6;
    double v7;
    char v8[12];
    double v9;
    int v10;
    v2 = 0;
    v3 = __strgtold12(v8, &v10, a2, 0, 0, 0, 0);
    if ( (v3 & 4) != 0 )
  {
    v2 = 512;
    v9 = 0.0;
  }
    else
  {
    v4 = Fltin2_Helper((int)v8, (int)&v9);
    if ( (v3 & 2) != 0 || v4 == 1 )
    v2 = 128;
    if ( (v3 & 1) != 0 || v4 == 2 )
    v2 |= 0x100u;
  }
    v6 = v10 - a2;
    v7 = v9;
    *(int *)a1 = v2;
    *(double *)(a1 + 16) = v7;
    *(int *)(a1 + 4) = v6;
    return a1;
}
}

// ==== BACKFILL 0x007D161B  __dosmaperr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * _dosmaperr(unsigned int a1)
{
{
    int v1;
    int *v2;
    int *result;
    v1 = 0;
    *__doserrno() = a1;
    v2 = &DataGlobal_87C7B0;
    do
  {
    if ( a1 == *v2 )
    {
    result = _errno();
    *result = DataGlobal_87C7B4[2 * v1];
    return result;
    }
    v2 += 2;
    ++v1;
  }
    while ( (int)v2 < (int)DataGlobal_87C918 );
    if ( a1 < 0x13 || a1 > 0x24 )
  {
    if ( a1 < 0xBC || a1 > 0xCA )
    {
    result = _errno();
    *result = 22;
    }
    else
    {
    result = _errno();
    *result = 8;
    }
  }
    else
  {
    result = _errno();
    *result = 13;
  }
    return result;
}
}

// ==== BACKFILL 0x007D1697  ___doserrno  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * __doserrno()
{
return (unsigned int *)(_getptd() + 12);
}

// ==== BACKFILL 0x007D16A0  __mbsdec  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * _mbsdec(const unsigned char * Start, const unsigned char * Pos)
{
{
    const unsigned __int8 *v3;
    if ( Start >= Pos )
    return 0;
    if ( !CRTGlobal_B7885C )
    return (unsigned char *)(Pos - 1);
    _lock(25);
    v3 = Pos - 1;
    if ( (CRTGlobal_B78961[*(Pos - 1)] & 4) != 0 )
  {
    _unlock(25);
    return (unsigned char *)(Pos - 2);
  }
    else
  {
    do
    --v3;
    while ( Start <= v3 && (CRTGlobal_B78961[*v3] & 4) != 0 );
    _unlock(25);
    return (unsigned char *)&Pos[-(((char)Pos - (char)v3) & 1) - 1];
  }
}
}

// ==== BACKFILL 0x007D2169  _fgetc_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fgetc_0(FILE * Stream)
{
{
    if ( --Stream->_cnt < 0 )
    return _filbuf(Stream);
    return *(unsigned char *)Stream->_ptr++;
}
}

// ==== BACKFILL 0x007D2183  __un_inc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _un_inc(int Character, FILE * Stream)
{
if (Character != -1)
    return ungetc_0(Character, Stream);
return Character;
}

// ==== BACKFILL 0x007D219A  __whiteout  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _whiteout(unsigned int * a1, FILE * Stream)
{
int current;
do
{
    ++*a1;
    current = fgetc_0(Stream);
}
while (isspace(current));
return current;
}

// ==== BACKFILL 0x007D290B  _write_char_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_char_0(wchar_t WCh, FILE * File, unsigned int * a3)
{
bool failed = (unsigned __int16)_putwc_lk(WCh, File) == 0xFFFF;
unsigned int* result = a3;
if (failed)
    *a3 = -1;
else
    ++*a3;
return result;
}

// ==== BACKFILL 0x007D292B  _write_multi_char_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_multi_char_0(wchar_t WCh, unsigned int * a2, FILE * File, unsigned int * a4)
{
{
    int *result;
    int *i;
    result = a2;
    for ( i = (int *)((char *)a2 - 1); (int)result > 0; i = (int *)((char *)i - 1) )
  {
    result = write_char_0(WCh, File, a4);
    if ( *a4 == -1 )
    break;
    result = i;
  }
    return result;
}
}

// ==== BACKFILL 0x007D295C  _write_string_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_string_0(wchar_t * a1, unsigned int * a2, FILE * File, unsigned int * a4)
{
{
    int *result;
    int *i;
    wchar_t v7;
    result = a2;
    for ( i = (int *)((char *)a2 - 1); (int)result > 0; i = (int *)((char *)i - 1) )
  {
    v7 = *a1++;
    result = write_char_0(v7, File, a4);
    if ( *a4 == -1 )
    break;
    result = i;
  }
    return result;
}
}

// ==== BACKFILL 0x007D2995  _get_int_arg_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int get_int_arg_0(ObjectClass * aP0)
{
{
    *(int *)aP0->__pad_0 += 4;
    return *(int *)(*(int *)aP0->__pad_0 - 4);
}
}

// ==== BACKFILL 0x007D29A2  _get_int64_arg_0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long get_int64_arg_0(ObjectClass * aP0)
{
{
    *(int *)aP0->__pad_0 += 8;
    return *(__int64 *)(*(int *)aP0->__pad_0 - 8);
}
}

// ==== BACKFILL 0x007D2A74  __close  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _close(int FileHandle)
{
{
    int v1;
    if ( FileHandle < uNumber && (*(char *)(CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(FileHandle);
    v1 = _close_lk(FileHandle);
    _unlock_fhandle(FileHandle);
    return v1;
  }
    else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}
}

// ==== BACKFILL 0x007D2AD1  __close_lk  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _close_lk(int FileHandle)
{
{
    intptr_t osfhandle;
    void *v2;
    DWORD LastError;
    if ( _get_osfhandle(FileHandle) == -1 || (FileHandle == 1 || FileHandle == 2) && (osfhandle = _get_osfhandle(2), _get_osfhandle(1) == osfhandle) || (v2 = (void *)_get_osfhandle(FileHandle), CloseHandle(v2)) )
  {
    LastError = 0;
  }
    else
  {
    LastError = GetLastError();
  }
    _free_osfhnd(FileHandle);
    *(char *)(CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) = 0;
    if ( !LastError )
    return 0;
    _dosmaperr(LastError);
    return -1;
}
}

// ==== BACKFILL 0x007D2B54  __freebuf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _freebuf(MouseClass * aP0)
{
{
    int result;
    result = (int)aP0->field_C;
    if ( (result & 0x83) != 0 && (result & 8) != 0 )
  {
    free(aP0->field_8);
    LOWORD(aP0->field_C) &= 0xFBF7u;
    aP0->field_0 = 0;
    aP0->field_8 = 0;
    aP0->field_4 = 0;
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x007D2B7F  __stbuf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _stbuf(int a1)
{
{
    int v1;
    int *v2;
    void *v3;
    int v4;
    if ( !_isatty(*(int *)(a1 + 16)) )
    return 0;
    if ( (FILE *)a1 == &File )
  {
    v1 = 0;
  }
    else
  {
    if ( (_UNKNOWN *)a1 != &DataGlobal_87BF90 )
    return 0;
    v1 = 1;
  }
    ++CRTGlobal_B781C0;
    if ( (*(short *)(a1 + 12) & 0x10C) != 0 )
    return 0;
    v2 = (int *)(4 * v1 + 12026576);
    if ( CRTGlobal_B782D0[v1] || (v3 = malloc(0x1000u), (*v2 = (int)v3) != 0) )
  {
    v4 = *v2;
    *(int *)(a1 + 24) = 4096;
    *(int *)(a1 + 8) = v4;
    *(int *)a1 = v4;
    *(int *)(a1 + 4) = 4096;
  }
    else
  {
    *(int *)(a1 + 8) = a1 + 20;
    *(int *)a1 = a1 + 20;
    *(int *)(a1 + 24) = 2;
    *(int *)(a1 + 4) = 2;
  }
    *(short *)(a1 + 12) |= 0x1102u;
    return 1;
}
}

// ==== BACKFILL 0x007D2C0C  __ftbuf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _ftbuf(int a1, int a2)
{
{
    int result;
    if ( a1 )
  {
    if ( (*(char *)(a2 + 13) & 0x10) != 0 )
    {
    result = _flush((int *)a2);
    *(char *)(a2 + 13) &= 0xEEu;
    *(int *)(a2 + 24) = 0;
    *(int *)a2 = 0;
    *(int *)(a2 + 8) = 0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x007D2E6E  sub_7D2E6E  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_7D2E6E::sub_7D2E6E()
{
{
    this->M4 = 0;
    this->M8 = 0;
    *(void**)this = &vt_exception;
    return this;
}
}

// ==== BACKFILL 0x007D2E7F  sub_7D2E7F  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_7D2E7F::sub_7D2E7F(char a2)
{
{
    Exception::Destructor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x007D2E9B  ??0exception_QAE_ABQBD_Z  cls=exception  sig=csp  renamed_refs=0  residual=- ====
exception * E4Recv_7D2E9B::__0exception_QAE_ABQBD_Z(const char ** a2)
{
{
    size_t v3;
    char *v4;
    *(void**)this = vt_exception;
    v3 = strlen(*a2);
    v4 = (char *)__2_YAPAXI_Z(v3 + 1);
    this->M4 = v4;
    if ( v4 )
    strcpy(v4, *a2);
    this->M8 = 1;
    return this;
}
}

// ==== BACKFILL 0x007D2ED8  ??0exception_QAE_ABV0__Z  cls=exception  sig=csp  renamed_refs=0  residual=- ====
exception * E4Recv_7D2ED8::__0exception_QAE_ABV0__Z(const struct exception * a2)
{
{
    int v3;
    size_t v4;
    char *v5;
    *(void**)this = vt_exception;
    v3 = *((int *)(a2) + 2);
    this->M8 = v3;
    if ( v3 )
  {
    v4 = strlen(*((const char **)(a2) + 1));
    v5 = (char *)__2_YAPAXI_Z(v4 + 1);
    this->M4 = v5;
    if ( v5 )
    strcpy(v5, *((const char **)(a2) + 1));
  }
    else
  {
    this->M4 = *((int *)(a2) + 1);
  }
    return this;
}
}

// ==== BACKFILL 0x007D2F22  ??4exception_QAEAAV0_ABV0__Z  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_7D2F22::__4exception_QAEAAV0_ABV0__Z(struct exception * a2)
{
{
    if ( this != a2 )
  {
    Exception::Destructor(this);
    __0exception_QAE_ABV0__Z(this, a2);
  }
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x007D2F57  ?what_exception__UBEPBDXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
const char * E4Recv_7D2F57::_what_exception__UBEPBDXZ()
{
{
    const char *result;
    result = (const char *)this->M4;
    if ( !result )
    return "Unknown exception";
    return result;
}
}

// ==== BACKFILL 0x007D2F64  __CxxThrowException_8  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void  __noreturn _CxxThrowException_8(void * pExceptionObject, _ThrowInfo * pThrowInfo)
{
{
    DWORD dwExceptionCode[8];
    qmemcpy(dwExceptionCode, &DataGlobal_7F9928, sizeof(dwExceptionCode));
    dwExceptionCode[6] = (DWORD)pExceptionObject;
    dwExceptionCode[7] = (DWORD)pThrowInfo;
    RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}
}

// ==== BACKFILL 0x007D3374  _calloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * calloc(size_t Count, size_t Size)
{
{
    SIZE_T v2;
    size_t v3;
    void *v4;
    v2 = Size * Count;
    v3 = Size * Count;
    if ( Size * Count <= 0xFFFFFFE0 )
  {
    if ( !v2 )
    v2 = 1;
    v2 = (v2 + 15) & 0xFFFFFFF0;
  }
    do
  {
    v4 = 0;
    if ( v2 <= 0xFFFFFFE0 )
    {
    if ( v3 <= DataGlobal_87C584 )
      {
    _lock(9);
    v4 = __sbh_alloc_block(v3);
    _unlock(9);
    if ( v4 )
        {
    memset(v4, 0, v3);
    return v4;
        }
      }
    v4 = HeapAlloc(hHeap, 8u, v2);
    if ( v4 )
    return v4;
    }
    if ( !CRTGlobal_B782C4 )
    return v4;
  }
    while ( _callnewh(v2) );
    return 0;
}
}

// ==== BACKFILL 0x007D362F  _getSystemCP  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
UINT getSystemCP(UINT)
{
{
    UINT result;
    result = a1;
    CRTGlobal_B782D8 = 0;
    switch ( a1 )
  {
    case 0xFFFFFFFE: CRTGlobal_B782D8 = 1;
    return GetOEMCP();
    case 0xFFFFFFFD: CRTGlobal_B782D8 = 1;
    return GetACP();
    case 0xFFFFFFFC: CRTGlobal_B782D8 = 1;
    return CodePage;
  }
    return result;
}
}

// ==== BACKFILL 0x007D3679  _CPtoLCID  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CPtoLCID(int a1)
{
switch (a1)
{
case 932:
    return 1041;
case 936:
    return 2052;
case 949:
    return 1042;
case 950:
    return 1028;
}
return 0;
}

// ==== BACKFILL 0x007D3982  _towupper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wint_t towupper(wint_t C)
{
{
    int v1;
    wint_t result;
    wint_t Ca;
    v1 = 0;
    if ( CRTGlobal_B782A0 )
  {
    InterlockedIncrement(&CRTGlobal_B78BA4);
    if ( CRTGlobal_B78BA0 )
    {
    InterlockedDecrement(&CRTGlobal_B78BA4);
    _lock(19);
    v1 = 1;
    }
    Ca = towupper_0(C);
    if ( v1 )
    _unlock(19);
    else
    InterlockedDecrement(&CRTGlobal_B78BA4);
    return Ca;
  }
    else
  {
    result = C;
    if ( C >= 0x61u && C <= 0x7Au )
    return C - 32;
  }
    return result;
}
}

// ==== BACKFILL 0x007D39F6  _towupper_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wint_t towupper_0(wint_t C)
{
{
    int v1;
    wint_t result;
    bool v3;
    WCHAR DestStr;
    DestStr = HIWORD(v1);
    result = C;
    if ( C != 0xFFFF )
  {
    if ( CRTGlobal_B782A0 )
    {
    if ( C >= 0x100u || iswctype(C, 2u) )
      {
    v3 = __crtLCMapStringW((LCID)CRTGlobal_B782A0, 0x200u, &C, 1, &DestStr, 1, 0) == 0;
    result = C;
    if ( !v3 )
    return DestStr;
      }
    else
      {
    return C;
      }
    }
    else if ( C >= 0x61u && C <= 0x7Au )
    {
    return C - 32;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x007D4596  fgetwc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fgetwc(FILE * File)
{
return _getwc_lk(File);
}

// ==== BACKFILL 0x007D45A1  __un_inc_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _un_inc_0(short MbCh, int a2)
{
{
    int result;
    if ( MbCh != -1 )
    return _ungetwc_lk(MbCh, a2);
    return result;
}
}

// ==== BACKFILL 0x007D45BA  __whiteout_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wint_t _whiteout_0(unsigned int * a1, FILE * File)
{
{
    wint_t v2;
    do
  {
    ++*a1;
    v2 = fgetwc(File);
  }
    while ( iswspace(v2) );
    return v2;
}
}

// ==== BACKFILL 0x007D45DF  __mbsnbicoll  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _mbsnbicoll(const unsigned char * Str1, const unsigned char * Str2, size_t MaxCount)
{
{
    int v4;
    if ( !MaxCount )
    return 0;
    v4 = __crtCompareStringA(Locale, 1u, (PCNZCH)Str1, MaxCount, (PCNZCH)Str2, MaxCount, CRTGlobal_B78840);
    if ( v4 )
    return v4 - 2;
    else
    return 0x7FFFFFFF;
}
}

// ==== BACKFILL 0x007D468C  __itoa  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _itoa(int Value, char * Buffer, int Radix)
{
if (Radix == 10 && Value < 0)
    xtoa(Value, Buffer, 10, 1);
else
    xtoa(Value, Buffer, Radix, 0);
return Buffer;
}

// ==== BACKFILL 0x007D46B9  _xtoa  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char xtoa(unsigned int a1, char * a2, unsigned int a3, int a4)
{
char* out = a2;
unsigned int value;
if (a4)
{
    *a2 = 45;
    ++out;
    value = -a1;
}
else
{
    value = a1;
}
char* start = out;
char result = 0;
do
{
    int digit = value % a3;
    bool isDecimal = value % a3 <= 9;
    value /= a3;
    char digitChar;
    if (isDecimal)
        digitChar = digit + 48;
    else
        digitChar = digit + 87;
    *out = digitChar;
    ++out;
}
while (value);
*out = 0;
char* back = out;
--back;
do
{
    result = *back;
    *back = *start;
    *start = result;
    --back;
    ++start;
}
while (start < back);
return result;
}

// ==== BACKFILL 0x007D4715  __ltoa  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _ltoa(int Value, char * Buffer, int Radix)
{
int isNegative = 0;
if (Radix == 10)
    isNegative = Value < 0;
xtoa(Value, Buffer, Radix, isNegative);
return Buffer;
}

// ==== BACKFILL 0x007D473F  __ultoa  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _ultoa(unsigned int Value, char * Buffer, int Radix)
{
xtoa(Value, Buffer, Radix, 0);
return Buffer;
}

// ==== BACKFILL 0x007D475A  __i64toa  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _i64toa(long long Value, char * Buffer, int Radix)
{
int isNegative = 0;
if (Radix == 10 && (int)(Value >> 32) <= 0)
    isNegative = Value < 0;
x64toa_20(Value, Buffer, Radix, isNegative);
return Buffer;
}

// ==== BACKFILL 0x007D478B  _x64toa_20  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * x64toa_20(unsigned long long a1, char * a2, unsigned int a3, int a4)
{
char* out = a2;
unsigned long long value;
if (a4)
{
    *a2 = 45;
    ++out;
    value = -(__int64)a1;
}
else
{
    value = a1;
}
char* start = out;
do
{
    unsigned int digit = value % a3;
    value /= a3;
    char digitChar;
    if (digit <= 9)
        digitChar = digit + 48;
    else
        digitChar = digit + 87;
    *out = digitChar;
    ++out;
}
while ((unsigned int)(value >> 32) || (unsigned int)value);
*out = 0;
char* back = out;
--back;
char* result;
do
{
    char temp = *back;
    *back = *start;
    *start = temp;
    --back;
    ++start;
    result = start;
}
while (result < back);
return result;
}

// ==== BACKFILL 0x007D4811  __ui64toa  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _ui64toa(unsigned long long Value, char * Buffer, int Radix)
{
x64toa_20(Value, Buffer, Radix, 0);
return Buffer;
}

// ==== BACKFILL 0x007D49AE  _ctrlevent_capture_4  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ctrlevent_capture_4(DWORD CtrlType)
{
{
    void (__cdecl *v1)(int);
    int *v2;
    int v3;
    int v5;
    _lock(1);
    if ( CtrlType )
  {
    v1 = (void (__cdecl *)(int))CRTGlobal_B782E0;
    v2 = &CRTGlobal_B782E0;
    v5 = 21;
  }
    else
  {
    v1 = (void (__cdecl *)(int))CRTGlobal_B782DC;
    v2 = &CRTGlobal_B782DC;
    v5 = 2;
  }
    v3 = v5;
    if ( v1 )
  {
    if ( v1 == (void (__cdecl *)(int))1 )
    {
    _unlock(1);
    }
    else
    {
    *v2 = 0;
    _unlock(1);
    v1(v3);
    }
    return 1;
  }
    else
  {
    _unlock(1);
    return 0;
  }
}
}

// ==== BACKFILL 0x007D4B92  _siglookup  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int siglookup(int a1, unsigned int a2)
{
{
    unsigned int result;
    result = a2;
    if ( *(int *)(a2 + 4) != a1 )
  {
    do
    result += 12;
    while ( result < a2 + 12 * DataGlobal_87CBA4 && *(int *)(result + 4) != a1 );
  }
    if ( result >= a2 + 12 * DataGlobal_87CBA4 || *(int *)(result + 4) != a1 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x007D4BD8  ___pxcptinfoptrs  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void ** __pxcptinfoptrs()
{
return (void **)(_getptd() + 84);
}

// ==== BACKFILL 0x007D4BF0  _strcpy  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * strcpy(IUnknown * aP0, const char * Source)
{
{
    JUMPOUT(0x7D4C61);
}
}

// ==== BACKFILL 0x007D4FAB  __isindst  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _isindst(CampaignScore * aP0)
{
{
    int v1;
    _lock(11);
    v1 = _isindst_0(aP0);
    _unlock(11);
    return v1;
}
}

// ==== BACKFILL 0x007D52B8  _gmtime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
struct tm * gmtime(CampaignScore * aP0)
{
{
    int v1;
    int v2;
    ObjectClass *v3;
    ObjectClass *v4;
    void *v6;
    struct tm *v7;
    int v8;
    int v9;
    int v10;
    char *v11;
    int v12;
    int v13;
    int *i;
    int tm_yday;
    int v16;
    int v17;
    v1 = *(int *)aP0->__pad_0;
    v2 = 0;
    v3 = (ObjectClass *)_getptd();
    v4 = v3;
    if ( v1 < 0 )
    return 0;
    if ( v3->ambientSoundController[1] || (v6 = malloc((AbstractClass *)0x24), v4->ambientSoundController[1] = (int)v6, v7 = (struct tm *)&DataGlobal_B783B0, v6) )
  {
    v7 = (struct tm *)v4->ambientSoundController[1];
  }
    v8 = v1 / 126230400;
    v9 = v1 % 126230400;
    v10 = 4 * v8 + 70;
    if ( v9 >= 31536000 )
  {
    v9 -= 31536000;
    v10 = 4 * v8 + 71;
    if ( v9 >= 31536000 )
    {
    v9 -= 31536000;
    v10 = 4 * v8 + 72;
    if ( v9 < 31622400 )
      {
    v2 = 1;
      }
    else
      {
    v10 = 4 * v8 + 73;
    v9 -= 31622400;
      }
    }
  }
    v7->tm_year = v10;
    v11 = &DataGlobal_87C374[4620];
    v7->tm_yday = v9 / 86400;
    v12 = v9 % 86400;
    if ( !v2 )
    v11 = &DataGlobal_87C374[4672];
    v13 = 1;
    for ( i = (int *)(v11 + 4); *i < v7->tm_yday; ++i )
    ++v13;
    tm_yday = v7->tm_yday;
    v16 = v13 - 1;
    v7->tm_mon = v16;
    v7->tm_mday = tm_yday - *(int *)&v11[4 * v16];
    v7->tm_wday = (*(int *)aP0->__pad_0 / 86400 + 4) % 7;
    v7->tm_hour = v12 / 3600;
    v17 = v12 % 3600;
    v7->tm_min = v17 / 60;
    v7->tm_isdst = 0;
    v7->tm_sec = v17 % 60;
    return v7;
}
}

// ==== BACKFILL 0x007D53C2  __access  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _access(const char * FileName, int AccessMode)
{
DWORD FileAttributesA = GetFileAttributesA(FileName);
if (FileAttributesA == -1)
{
    DWORD LastError = GetLastError();
    _dosmaperr(LastError);
    return -1;
}
if ((FileAttributesA & 1) != 0 && (AccessMode & 2) != 0)
{
    *_errno() = 13;
    *__doserrno() = 5;
    return -1;
}
return 0;
}

// ==== BACKFILL 0x007D5408  __strdup  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _strdup(INIClass * aP0)
{
{
    size_t v1;
    IUnknown *v2;
    if ( aP0 && (v1 = strlen(aP0->__pad_0), (v2 = (IUnknown *)malloc((AbstractClass *)(v1 + 1))) != 0) )
    return strcpy(v2, aP0->__pad_0);
    else
    return 0;
}
}

// ==== BACKFILL 0x007D5433  __open  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _open(const char * FileName, int OpenFlag, ... a3)
{
{
    int v3;
    va_list va;
    va_start(va, OpenFlag);
    v3 = va_arg(va, int);
    return _sopen(FileName, OpenFlag, 64, v3);
}
}

// ==== BACKFILL 0x007D5719  GetCurrentProcessId  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetCurrentProcessId()
{
    DWORD __stdcall GetCurrentProcessId()
{
    return __imp_GetCurrentProcessId();
}
}

// ==== BACKFILL 0x007D57FE  _asctime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * asctime(const struct tm * Tm)
{
{
    int v1;
    void *v2;
    bool v3;
    char *v4;
    char *v5;
    int v6;
    int v7;
    int v8;
    char v9;
    char *v10;
    char *v11;
    char *v12;
    char *v13;
    char *v14;
    int v15;
    char *v16;
    v1 = _getptd();
    if ( *(int *)(v1 + 56) || (v2 = malloc(0x1Au), *(int *)(v1 + 56) = v2, v3 = v2 == 0, v4 = (char *)&DataGlobal_B783DC, !v3) )
  {
    v4 = *(char **)(v1 + 56);
  }
    v5 = v4;
    v6 = 3 * Tm->tm_wday;
    v7 = 3 * Tm->tm_mon;
    v8 = 0;
    do
  {
    v9 = DataGlobal_7F9948[v6 + v8++];
    *v4 = v9;
    v4[4] = DataGlobal_7F995F[v8 + v7];
    ++v4;
  }
    while ( v8 < 3 );
    *v4 = 32;
    v10 = v4 + 4;
    *v10 = 32;
    v11 = (char *)store_dt(v10 + 1, Tm->tm_mday);
    *v11 = 32;
    v12 = (char *)store_dt(v11 + 1, Tm->tm_hour);
    *v12 = 58;
    v13 = (char *)store_dt(v12 + 1, Tm->tm_min);
    *v13 = 58;
    v14 = (char *)store_dt(v13 + 1, Tm->tm_sec);
    *v14 = 32;
    v15 = store_dt(v14 + 1, Tm->tm_year / 100 + 19);
    v16 = (char *)store_dt(v15, Tm->tm_year % 100);
    *v16 = 10;
    v16[1] = 0;
    return v5;
}
}

// ==== BACKFILL 0x007D58C8  _store_dt  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * store_dt(unsigned char * a1, int a2)
{
  *a1 = a2 / 10 + 48;
  a1[1] = a2 % 10 + 48;
  return a1 + 2;
}

// ==== BACKFILL 0x007D58F0  __XcptFilter  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG _XcptFilter(ObjectClass * aP0, struct _EXCEPTION_POINTERS * ExceptionInfo)
{
{
    ObjectClass *v2;
    int *v3;
    ObjectClass *v4;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    v2 = (ObjectClass *)_getptd();
    v3 = xcptlookup(aP0, (int *)v2->customSound_controller[0]);
    if ( !v3 )
    return UnhandledExceptionFilter(ExceptionInfo);
    v4 = (ObjectClass *)v3[2];
    if ( !v4 )
    return UnhandledExceptionFilter(ExceptionInfo);
    if ( v4 == (ObjectClass *)5 )
  {
    v3[2] = 0;
    return 1;
  }
    else
  {
    if ( v4 != (ObjectClass *)1 )
    {
    v11 = v2->customSound_controller[1];
    v2->customSound_controller[1] = (int)ExceptionInfo;
    v6 = v3[1];
    if ( v6 == 8 )
      {
    v7 = *(int *)&DataGlobal_87C374[2084];
    if ( *(int *)&DataGlobal_87C374[2084] < *(int *)&DataGlobal_87C374[2084] + *(int *)&DataGlobal_87C374[2088] )
        {
    v8 = 12 * *(int *)&DataGlobal_87C374[2084];
    do
          {
    v8 += 12;
    *(int *)(v8 + v2->customSound_controller[0] - 4) = 0;
    ++v7;
          }
    while ( v7 < *(int *)&DataGlobal_87C374[2084] + *(int *)&DataGlobal_87C374[2088] );
        }
    v9 = *v3;
    v10 = v2->customSound_controller[2];
    switch ( v9 )
        {
    case -1073741682: v2->customSound_controller[2] = 131;
    break;
    case -1073741680: v2->customSound_controller[2] = 129;
    break;
    case -1073741679: v2->customSound_controller[2] = 132;
    break;
    case -1073741677: v2->customSound_controller[2] = 133;
    break;
    case -1073741683: v2->customSound_controller[2] = 130;
    break;
    case -1073741681: v2->customSound_controller[2] = 134;
    break;
    case -1073741678: v2->customSound_controller[2] = 138;
    break;
        }
    ((void (__cdecl *)(int))v4)(8);
    v2->customSound_controller[2] = v10;
      }
    else
      {
    v3[2] = 0;
    ((void (__cdecl *)(int))v4)(v6);
      }
    v2->customSound_controller[1] = v11;
    }
    return -1;
  }
}
}

// ==== BACKFILL 0x007D5A2E  _xcptlookup  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * xcptlookup(ObjectClass * aP0, unsigned int * a1)
{
{
    int *result;
    result = a1;
    if ( (ObjectClass *)*a1 != aP0 )
  {
    do
    result += 3;
    while ( result < &a1[3 * *(int *)&DataGlobal_87C374[2096]] && (ObjectClass *)*result != aP0 );
  }
    if ( result >= &a1[3 * *(int *)&DataGlobal_87C374[2096]] || (ObjectClass *)*result != aP0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x007D5F31  __NMSG_WRITE  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * _NMSG_WRITE(DWORD NumberOfBytesWritten)
{
{
    int v1;
    int *result;
    int v3;
    char *v4;
    const char **v5;
    HANDLE StdHandle;
    const char *v7;
    DWORD v8;
    DWORD *p_NumberOfBytesWritten;
    int v10;
    CHAR Filename[260];
    char Destination[160];
    int savedregs;
    v1 = 0;
    result = DataGlobal_87CBA8;
    do
  {
    if ( NumberOfBytesWritten == *result )
    break;
    result += 2;
    ++v1;
  }
    while ( (int)result < (int)&DataGlobal_87CC38 );
    v3 = 2 * v1;
    if ( NumberOfBytesWritten == DataGlobal_87CBA8[2 * v1] )
  {
    result = (int *)CRTGlobal_B78230;
    if ( CRTGlobal_B78230 == 1 || !CRTGlobal_B78230 && DataGlobal_87C2A4 == 1 )
    {
    v5 = (const char **)&(&DataGlobal_87CBAC)[v3];
    v10 = 0;
    p_NumberOfBytesWritten = &NumberOfBytesWritten;
    v8 = strlen(*v5);
    v7 = *v5;
    StdHandle = GetStdHandle(0xFFFFFFF4);
    return (int *)WriteFile(StdHandle, v7, v8, &NumberOfBytesWritten, 0);
    }
    else if ( NumberOfBytesWritten != 252 )
    {
    if ( !GetModuleFileNameA(0, Filename, 0x104u) )
    strcpy(Filename, "<program name unknown>");
    v4 = Filename;
    if ( strlen(Filename) + 1 > 0x3C )
      {
    v4 = (char *)&savedregs + strlen(Filename) - 479;
    strncpy(v4, "...", 3u);
      }
    strcpy(Destination, "Runtime Error!\n\nProgram: ");
    strcat(Destination, v4);
    strcat(Destination, DataGlobal_83F318);
    strcat(Destination, (&DataGlobal_87CBAC)[v3]);
    return (int *)__crtMessageBoxA(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x007D6146  __get_lc_time  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _get_lc_time(CCINIClass * aP0)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    LCID unknown38_low;
    LCID Locale;
    Locale = *(unsigned short *)&CRTGlobal_B78508[54];
    unknown38_low = LOWORD(CRTGlobal_B78508.unknown38);
    if ( !aP0 )
    return -1;
    v2 = __getlocaleinfo(1, *(unsigned short *)&CRTGlobal_B78508[54], 0x31u, (CCINIClass *)aP0->headNode);
    v3 = __getlocaleinfo(1, Locale, 0x32u, (CCINIClass *)&aP0->headNode[1]) | v2;
    v4 = __getlocaleinfo(1, Locale, 0x33u, (CCINIClass *)&aP0->headNode[2]) | v3;
    v5 = __getlocaleinfo(1, Locale, 0x34u, (CCINIClass *)aP0->sectionHead) | v4;
    v6 = __getlocaleinfo(1, Locale, 0x35u, (CCINIClass *)&aP0->sectionHead[1]) | v5;
    v7 = __getlocaleinfo(1, Locale, 0x36u, (CCINIClass *)&aP0->sectionHead[2]) | v6;
    v8 = __getlocaleinfo(1, Locale, 0x37u, aP0) | v7;
    v9 = __getlocaleinfo(1, Locale, 0x2Au, (CCINIClass *)aP0->__pad_20) | v8;
    v10 = __getlocaleinfo(1, Locale, 0x2Bu, (CCINIClass *)&aP0->__pad_20[4]) | v9;
    v11 = __getlocaleinfo(1, Locale, 0x2Cu, (CCINIClass *)&aP0->__pad_20[8]) | v10;
    v12 = __getlocaleinfo(1, Locale, 0x2Du, (CCINIClass *)&aP0->INIClass_field_2C) | v11;
    v13 = __getlocaleinfo(1, Locale, 0x2Eu, (CCINIClass *)&aP0->unknown30) | v12;
    v14 = __getlocaleinfo(1, Locale, 0x2Fu, (CCINIClass *)&aP0->needsSave_flag) | v13;
    v15 = __getlocaleinfo(1, Locale, 0x30u, (CCINIClass *)&aP0->sectionCount) | v14;
    v16 = __getlocaleinfo(1, Locale, 0x44u, (CCINIClass *)&aP0->unknown38) | v15;
    v17 = __getlocaleinfo(1, Locale, 0x45u, (CCINIClass *)&aP0->INIClass_field_3C) | v16;
    v18 = __getlocaleinfo(1, Locale, 0x46u, (CCINIClass *)&aP0->ownsFile) | v17;
    v19 = __getlocaleinfo(1, Locale, 0x47u, (CCINIClass *)&aP0->__pad_41[3]) | v18;
    v20 = __getlocaleinfo(1, Locale, 0x48u, (CCINIClass *)aP0->__pad_48) | v19;
    v21 = __getlocaleinfo(1, Locale, 0x49u, (CCINIClass *)&aP0->CCINIClass_field_4C) | v20;
    v22 = __getlocaleinfo(1, Locale, 0x4Au, (CCINIClass *)&aP0->unknown50) | v21;
    v23 = __getlocaleinfo(1, Locale, 0x4Bu, (CCINIClass *)&aP0->unknown54) | v22;
    v24 = __getlocaleinfo(1, Locale, 0x4Cu, aP0 + 1) | v23;
    v25 = __getlocaleinfo(1, Locale, 0x4Du, (CCINIClass *)((char *)(aP0) + 92)) | v24;
    v26 = __getlocaleinfo(1, Locale, 0x4Eu, (CCINIClass *)((char *)(aP0) + 96)) | v25;
    v27 = __getlocaleinfo(1, Locale, 0x4Fu, (CCINIClass *)((char *)(aP0) + 100)) | v26;
    v28 = __getlocaleinfo(1, Locale, 0x38u, (CCINIClass *)((char *)(aP0) + 104)) | v27;
    v29 = __getlocaleinfo(1, Locale, 0x39u, (CCINIClass *)((char *)(aP0) + 108)) | v28;
    v30 = __getlocaleinfo(1, Locale, 0x3Au, (CCINIClass *)((char *)(aP0) + 112)) | v29;
    v31 = __getlocaleinfo(1, Locale, 0x3Bu, (CCINIClass *)((char *)(aP0) + 116)) | v30;
    v32 = __getlocaleinfo(1, Locale, 0x3Cu, (CCINIClass *)((char *)(aP0) + 120)) | v31;
    v33 = __getlocaleinfo(1, Locale, 0x3Du, (CCINIClass *)((char *)(aP0) + 124)) | v32;
    v34 = __getlocaleinfo(1, Locale, 0x3Eu, (CCINIClass *)((char *)(aP0) + 128)) | v33;
    v35 = __getlocaleinfo(1, Locale, 0x3Fu, (CCINIClass *)((char *)(aP0) + 132)) | v34;
    v36 = __getlocaleinfo(1, Locale, 0x40u, (CCINIClass *)((char *)(aP0) + 136)) | v35;
    v37 = __getlocaleinfo(1, Locale, 0x41u, (CCINIClass *)((char *)(aP0) + 140)) | v36;
    v38 = __getlocaleinfo(1, Locale, 0x42u, (CCINIClass *)((char *)(aP0) + 144)) | v37;
    v39 = __getlocaleinfo(1, Locale, 0x43u, (CCINIClass *)((char *)(aP0) + 148)) | v38;
    v40 = __getlocaleinfo(1, Locale, 0x28u, (CCINIClass *)((char *)(aP0) + 152)) | v39;
    v41 = __getlocaleinfo(1, Locale, 0x29u, (CCINIClass *)((char *)(aP0) + 156)) | v40;
    v42 = __getlocaleinfo(1, unknown38_low, 0x1Fu, (CCINIClass *)((char *)(aP0) + 160)) | v41;
    v43 = __getlocaleinfo(1, unknown38_low, 0x20u, (CCINIClass *)((char *)(aP0) + 164)) | v42;
    return v43 | __getlocaleinfo(1, unknown38_low, 0x1003u, (CCINIClass *)((char *)(aP0) + 168));
}
}

// ==== BACKFILL 0x007D6494  __free_lc_time  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _free_lc_time(CCINIClass * aP0)
{
{
    if ( aP0 )
  {
    free((void *)aP0->headNode[0]);
    free((void *)aP0->headNode[1]);
    free((void *)aP0->headNode[2]);
    free((void *)aP0->sectionHead[0]);
    free((void *)aP0->sectionHead[1]);
    free((void *)aP0->sectionHead[2]);
    free(*(void **)aP0->__pad_0);
    free(*(void **)aP0->__pad_20);
    free(*(void **)&aP0->__pad_20[4]);
    free(*(void **)&aP0->__pad_20[8]);
    free((void *)aP0->INIClass_field_2C);
    free((void *)aP0->unknown30);
    free(*(void **)&aP0->needsSave_flag);
    free((void *)aP0->sectionCount);
    free((void *)aP0->unknown38);
    free((void *)aP0->INIClass_field_3C);
    free(*(void **)&aP0->ownsFile);
    free(*(void **)&aP0->__pad_41[3]);
    free(*(void **)aP0->__pad_48);
    free((void *)aP0->CCINIClass_field_4C);
    free((void *)aP0->unknown50);
    free((void *)aP0->unknown54);
    free(*(void **)aP0[1].__pad_0);
    free((void *)aP0[1].headNode[0]);
    free((void *)aP0[1].headNode[1]);
    free((void *)aP0[1].headNode[2]);
    free((void *)aP0[1].sectionHead[0]);
    free((void *)aP0[1].sectionHead[1]);
    free((void *)aP0[1].sectionHead[2]);
    free((void *)aP0[1].sectionCount);
    free(*(void **)aP0[1].__pad_20);
    free(*(void **)&aP0[1].__pad_20[4]);
    free(*(void **)&aP0[1].__pad_20[8]);
    free((void *)aP0[1].INIClass_field_2C);
    free((void *)aP0[1].unknown30);
    free(*(void **)&aP0[1].needsSave_flag);
    free((void *)aP0[1].unknown38);
    free((void *)aP0[1].INIClass_field_3C);
    free(*(void **)&aP0[1].ownsFile);
    free(*(void **)&aP0[1].__pad_41[3]);
    free(*(void **)aP0[1].__pad_48);
    free((void *)aP0[1].CCINIClass_field_4C);
    free((void *)aP0[1].unknown50);
  }
}
}

// ==== BACKFILL 0x007D67F9  _fix_grouping  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char fix_grouping(CCINIClass * aP0)
{
{
    CCINIClass *v1;
    char result;
    CCINIClass *v3;
    v1 = aP0;
    for ( result = aP0->__pad_0[0]; v1->__pad_0[0]; result = v1->__pad_0[0] )
  {
    if ( result < 48 || result > 57 )
    {
    if ( result == 59 )
      {
    v3 = v1;
    do
        {
    v3->__pad_0[0] = v3->__pad_0[1];
    v3 = (CCINIClass *)((char *)(v3) + 1);
        }
    while ( v3->__pad_0[0] );
    co ntinue;
      }
    }
    else
    {
    v1->__pad_0[0] = result - 48;
    }
    v1 = (CCINIClass *)((char *)(v1) + 1);
  }
    return result;
}
}

// ==== BACKFILL 0x007D68FB  __get_lc_lconv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _get_lc_lconv(CCINIClass * aP0)
{
{
    LCID INIClass_field_2C_low;
    CCINIClass *v3;
    unsigned int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    INIClass_field_2C_low = LOWORD(CRTGlobal_B78508.INIClass_field_2C);
    if ( !aP0 )
    return -1;
    v3 = (CCINIClass *)__getlocaleinfo(1, LOWORD(CRTGlobal_B78508.INIClass_field_2C), 0x15u, (CCINIClass *)&aP0->headNode[2]);
    v4 = __getlocaleinfo(1, INIClass_field_2C_low, 0x14u, (CCINIClass *)aP0->sectionHead) | (unsigned int)v3;
    v5 = __getlocaleinfo(1, INIClass_field_2C_low, 0x16u, (CCINIClass *)&aP0->sectionHead[1]) | v4;
    v6 = __getlocaleinfo(1, INIClass_field_2C_low, 0x17u, (CCINIClass *)&aP0->sectionHead[2]) | v5;
    v7 = __getlocaleinfo(1, INIClass_field_2C_low, 0x18u, (CCINIClass *)&aP0->sectionCount) | v6;
    fix_grouping_0((char *)aP0->sectionCount);
    v8 = __getlocaleinfo(1, INIClass_field_2C_low, 0x50u, (CCINIClass *)aP0->__pad_20) | v7;
    v9 = __getlocaleinfo(1, INIClass_field_2C_low, 0x51u, (CCINIClass *)&aP0->__pad_20[4]) | v8;
    v10 = __getlocaleinfo(0, INIClass_field_2C_low, 0x1Au, (CCINIClass *)&aP0->__pad_20[8]) | v9;
    v11 = __getlocaleinfo(0, INIClass_field_2C_low, 0x19u, (CCINIClass *)&aP0->__pad_20[9]) | v10;
    v12 = __getlocaleinfo(0, INIClass_field_2C_low, 0x54u, (CCINIClass *)&aP0->__pad_20[10]) | v11;
    v13 = __getlocaleinfo(0, INIClass_field_2C_low, 0x55u, (CCINIClass *)&aP0->__pad_20[11]) | v12;
    v14 = __getlocaleinfo(0, INIClass_field_2C_low, 0x56u, (CCINIClass *)&aP0->INIClass_field_2C) | v13;
    v15 = __getlocaleinfo(0, INIClass_field_2C_low, 0x57u, (CCINIClass *)((char *)&aP0->INIClass_field_2C + 1)) | v14;
    v16 = __getlocaleinfo(0, INIClass_field_2C_low, 0x52u, (CCINIClass *)((char *)&aP0->INIClass_field_2C + 2)) | v15;
    return v16 | __getlocaleinfo(0, INIClass_field_2C_low, 0x53u, (CCINIClass *)((char *)&aP0->INIClass_field_2C + 3));
}
}

// ==== BACKFILL 0x007D6A1D  _fix_grouping_0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char fix_grouping_0(char * a1)
{
char* scan = a1;
char result = *a1;
for (; *scan; result = *scan)
{
    if (result < 48 || result > 57)
    {
        if (result == 59)
        {
            char* shift = scan;
            char* next = shift;
            ++next;
            do
            {
                *shift = *next;
                ++shift;
                ++next;
            }
            while (*shift);
            continue;
        }
    }
    else
    {
        *scan = result - 48;
    }
    ++scan;
}
return result;
}

// ==== BACKFILL 0x007D6A54  __free_lc_lconv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _free_lc_lconv(CCINIClass * aP0)
{
{
    if ( aP0 )
  {
    if ( (WCHAR *)aP0->headNode[2] != CRTGlobal_B78594 )
    {
    free((void *)aP0->headNode[2]);
    free((void *)aP0->sectionHead[0]);
    free((void *)aP0->sectionHead[1]);
    free((void *)aP0->sectionHead[2]);
    free((void *)aP0->sectionCount);
    free(*(void **)aP0->__pad_20);
    free(*(void **)&aP0->__pad_20[4]);
    }
  }
}
}

// ==== BACKFILL 0x007D6CF0  _strpbrk  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * strpbrk(const char * Str, const char * Control)
{
char* result = 0;
int table[9];
memset(table, 0, 32);
while (1)
{
    char current = *Control;
    if (!*Control)
        break;
    ++Control;
    unsigned int bit = (unsigned char)current;
    table[bit >> 5] |= 1 << (bit & 31);
}
while (1)
{
    char current = *Str;
    if (!*Str)
        break;
    ++Str;
    unsigned int bit = (unsigned char)current;
    if (table[bit >> 5] & (1 << (bit & 31)))
        return (char *)(Str - 1);
}
return result;
}

// ==== BACKFILL 0x007D6EA7  _TranslateName  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int TranslateName(int a1, int a2, char ** a3)
{
{
    int v3;
    int result;
    int v5;
    v3 = 0;
    result = 1;
    while ( v3 <= a2 )
  {
    if ( !result )
    break;
    v5 = (v3 + a2) / 2;
    result = _strcmpi(*a3, *(char **)(a1 + 8 * v5));
    if ( result )
    {
    if ( result >= 0 )
    v3 = v5 + 1;
    else
    a2 = v5 - 1;
    }
    else
    {
    *a3 = (char *)(a1 + 8 * v5 + 4);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x007D7374  _ProcessCodePage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ProcessCodePage(char * String)
{
{
    const char *v1;
    int result;
    char v3[8];
    v1 = String;
    if ( String && *String && strcmp(String, DataGlobal_7FA2D8) )
  {
    if ( strcmp(String, DataGlobal_7FA2D4) )
    return atol(v1);
    result = DataGlobal_B78564(CRTGlobal_B78560, 11, v3, 8);
  }
    else
  {
    result = DataGlobal_B78564(CRTGlobal_B78560, 4100, v3, 8);
  }
    if ( !result )
    return result;
    v1 = v3;
    return atol(v1);
}
}

// ==== BACKFILL 0x007D73DA  _TestDefaultCountry  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TestDefaultCountry(short a1)
{
{
    short *v1;
    v1 = &DataGlobal_87D0E4;
    while ( a1 != *v1 )
  {
    if ( (int)++v1 >= (int)&DataGlobal_87D0F8 )
    return 1;
  }
    return 0;
}
}

// ==== BACKFILL 0x007D73F9  _TestDefaultLanguage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL TestDefaultLanguage(int a1, int a2)
{
{
    int v2;
    int PrimaryLen;
    int result;
    char v5[120];
    v2 = a1 & 0x3FF;
    BYTE1(v2) |= 4u;
    result = 0;
    if ( DataGlobal_B78564(v2, 1, v5, 120) )
  {
    if ( a1 == LcidFromHexString(v5) )
    return 1;
    if ( !a2 )
    return 1;
    PrimaryLen = GetPrimaryLen(CRTGlobal_B78554);
    if ( PrimaryLen != strlen(CRTGlobal_B78554) )
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x007D7491  _crtGetLocaleInfoA_16  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int crtGetLocaleInfoA_16(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
{
    int v4;
    int v5;
    int v6;
    unsigned int v7;
    const char *v9;
    v4 = 0;
    v5 = 26;
    while ( 1 )
  {
    v6 = (v5 + v4) / 2;
    v7 = DataGlobal_87CC40[11 * v6];
    if ( Locale == v7 )
    break;
    if ( Locale >= v7 )
    v4 = v6 + 1;
    else
    v5 = v6 - 1;
    if ( v4 > v5 )
    return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
  }
    switch ( LCType )
  {
    case 1u: v9 = &DataGlobal_87CC44[44 * v6];
    break;
    case 3u: v9 = (char *)&DataGlobal_87CC50 + 44 * v6;
    break;
    case 7u: v9 = (char *)&DataGlobal_87CC58 + 44 * v6;
    break;
    case 0xBu: v9 = (char *)&DataGlobal_87CC5C + 44 * v6;
    break;
    case 0x1001u: v9 = (&DataGlobal_87CC4C)[11 * v6];
    break;
    case 0x1002u: v9 = (&DataGlobal_87CC54)[11 * v6];
    break;
    case 0x1004u: v9 = &DataGlobal_87CC64[44 * v6];
    break;
    default: return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
  }
    if ( !v9 || cchData < 1 )
    return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
    strncpy(lpLCData, v9, cchData - 1);
    lpLCData[cchData - 1] = 0;
    return 1;
}
}

// ==== BACKFILL 0x007D7577  _LcidFromHexString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LcidFromHexString(char * a1)
{
int result = 0;
char current;
for (;; result = current + 16 * (result + 268435453))
{
    current = *a1;
    ++a1;
    if (!current)
        break;
    if (current < 97 || current > 102)
    {
        if (current >= 65 && current <= 70)
            current -= 7;
    }
    else
    {
        current -= 39;
    }
}
return result;
}

// ==== BACKFILL 0x007D75B0  _GetPrimaryLen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetPrimaryLen(char * a1)
{
int result = 0;
char current;
for (;; ++result)
{
    current = *a1;
    ++a1;
    if ((current < 65 || current > 90) && (current < 97 || current > 122))
        break;
}
return result;
}

// ==== BACKFILL 0x007D7638  __lseek  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _lseek(int FileHandle, int Offset, int Origin)
{
{
    int v3;
    if ( FileHandle < uNumber && (*(char *)(CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(FileHandle);
    v3 = _lseek_lk(FileHandle, Offset, Origin);
    _unlock_fhandle(FileHandle);
    return v3;
  }
    else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}
}

// ==== BACKFILL 0x007D769D  __lseek_lk  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD _lseek_lk(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
{
{
    void *osfhandle;
    DWORD v4;
    DWORD LastError;
    osfhandle = (void *)_get_osfhandle(FileHandle);
    if ( osfhandle == (void *)-1 )
  {
    *_errno() = 9;
    return -1;
  }
    v4 = SetFilePointer(osfhandle, lDistanceToMove, 0, dwMoveMethod);
    if ( v4 == -1 )
    LastError = GetLastError();
    else
    LastError = 0;
    if ( LastError )
  {
    _dosmaperr(LastError);
    return -1;
  }
    *(char *)(CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) &= ~2u;
    return v4;
}
}

// ==== BACKFILL 0x007D7710  __getbuf  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _getbuf(MouseClass * aP0)
{
{
    void *v1;
    int result;
    ++CRTGlobal_B781C0;
    v1 = malloc((AbstractClass *)0x1000);
    aP0->field_8 = v1;
    if ( v1 )
  {
    aP0->field_C = (void *)((int)aP0->field_C | 8);
    *(int *)aP0->__pad_18 = 4096;
  }
    else
  {
    aP0->field_C = (void *)((int)aP0->field_C | 4);
    aP0->field_8 = &aP0->field_14;
    *(int *)aP0->__pad_18 = 2;
  }
    result = (int)aP0->field_8;
    aP0->field_4 = 0;
    aP0->field_0 = result;
    return result;
}
}

// ==== BACKFILL 0x007D7754  __isatty  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _isatty(int FileHandle)
{
{
    if ( FileHandle < uNumber )
    return *(char *)(CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 0x40;
    else
    return 0;
}
}

// ==== BACKFILL 0x007D777D  _wctomb  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wctomb(char * MbCh, wchar_t WCh)
{
{
    int v2;
    int WCha;
    InterlockedIncrement(&CRTGlobal_B78BA4);
    v2 = 0;
    if ( CRTGlobal_B78BA0 )
  {
    InterlockedDecrement(&CRTGlobal_B78BA4);
    _lock(19);
    v2 = 1;
  }
    WCha = _wctomb_lk(MbCh, WCh);
    if ( v2 )
    _unlock(19);
    else
    InterlockedDecrement(&CRTGlobal_B78BA4);
    return WCha;
}
}

// ==== BACKFILL 0x007D7840  __aullrem  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned long long _aullrem(unsigned long long a1, long long a2)
{
{
    unsigned __int64 v2;
    unsigned int v4;
    unsigned int v5;
    unsigned __int64 v6;
    bool v7;
    int v8;
    unsigned __int64 v9;
    if ( HIDWORD(a2) )
  {
    v4 = HIDWORD(a2);
    v5 = a2;
    v6 = a1;
    do
    {
    v7 = v4 & 1;
    v4 >>= 1;
    v5 = (v5 >> 1) | (v7 << 31);
    v6 >>= 1;
    }
    while ( v4 );
    v8 = HIDWORD(a2) * (v6 / v5);
    v9 = (unsigned int)a2 * (unsigned __int64)(unsigned int)(v6 / v5);
    v7 = __CFADD__(v8, HIDWORD(v9));
    HIDWORD(v9) += v8;
    if ( v7 || v9 > a1 )
    v9 -= a2;
    return a1 - v9;
  }
    else
  {
    LODWORD(v2) = a1;
    HIDWORD(v2) = HIDWORD(a1) % (unsigned int)a2;
    return v2 % (unsigned int)a2;
  }
}
}

// ==== BACKFILL 0x007D78B5  __ZeroTail  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _ZeroTail(int a1, int a2)
{
{
    int v2;
    int *i;
    if ( (~(-1 << (31 - a2 % 32)) & *(int *)(a1 + 4 * (a2 / 32))) == 0 )
  {
    v2 = a2 / 32 + 1;
    if ( v2 >= 3 )
    return 1;
    for ( i = (int *)(a1 + 4 * v2); !*i; ++i )
    {
    if ( ++v2 >= 3 )
    return 1;
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x007D78FE  __IncMan  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _IncMan(int a1, int a2)
{
{
    int result;
    int v3;
    int *v4;
    result = __addl(*(int *)(a1 + 4 * (a2 / 32)), 1 << (31 - a2 % 32), a1 + 4 * (a2 / 32));
    v3 = a2 / 32 - 1;
    if ( v3 >= 0 )
  {
    v4 = (int *)(a1 + 4 * v3);
    do
    {
    if ( !result )
    break;
    result = __addl(*v4, 1, v4);
    --v3;
    --v4;
    }
    while ( v3 >= 0 );
  }
    return result;
}
}

// ==== BACKFILL 0x007D7954  __RoundMan  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _RoundMan(int a1, int a2)
{
{
    int v2;
    int v4;
    int *v5;
    char v6;
    int v8;
    int v9;
    int *v10;
    v2 = a2 - 1;
    v9 = 0;
    v4 = a2 % 32;
    v8 = a2 / 32;
    v5 = (int *)(a1 + 4 * (a2 / 32));
    v10 = v5;
    v6 = 31 - v4;
    if ( ((1 << (31 - v4)) & *v5) != 0 )
  {
    if ( !_ZeroTail(a1, a2 + 1) )
    v9 = _IncMan(a1, v2);
    v5 = v10;
  }
    *v5 &= -1 << v6;
    if ( v8 + 1 < 3 )
    memset((void *)(a1 + 4 * (v8 + 1)), 0, 4 * (3 - (v8 + 1)));
    return v9;
}
}

// ==== BACKFILL 0x007D79E0  __CopyMan  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _CopyMan(int a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    result = a2;
    v3 = 3;
    do
  {
    *(int *)((char *)(result) + a1 - (int)a2) = *result;
    ++result;
    --v3;
  }
    while ( v3 );
    return result;
}
}

// ==== BACKFILL 0x007D79FB  __FillZeroMan  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _FillZeroMan(unsigned int * a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  return 0;
}

// ==== BACKFILL 0x007D7A07  __IsZeroMan  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _IsZeroMan(unsigned int * a1)
{
{
    int v2;
    v2 = 0;
    while ( !*a1 )
  {
    ++v2;
    ++a1;
    if ( v2 >= 3 )
    return 1;
  }
    return 0;
}
}

// ==== BACKFILL 0x007D7A22  __ShrMan  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int * _ShrMan(int * a1, int a2)
{
{
    int *v2;
    int v3;
    bool v4;
    int v5;
    int i;
    int *result;
    int v8;
    int v9;
    int v10;
    int v11;
    v2 = a1;
    v10 = 3;
    v8 = a2 / 32;
    v3 = a2 % 32;
    v11 = 0;
    do
  {
    v9 = ~(-1 << v3) & *v2;
    *v2 = v11 | ((unsigned int)*v2 >> v3);
    ++v2;
    v4 = v10-- == 1;
    v11 = v9 << (32 - v3);
  }
    while ( !v4 );
    v5 = 2;
    for ( i = 2; i >= 0; --i )
  {
    if ( v5 < v8 )
    {
    result = a1;
    a1[i] = 0;
    }
    else
    {
    result = *(int **)((char *)(a1) + i * 4 - 4 * v8);
    a1[i] = (int)result;
    }
    --v5;
  }
    return result;
}
}

// ==== BACKFILL 0x007D7C1B  Fltin2_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7D7C1B(int a1, int a2)
{
{
    return _ld12cvt(a1, a2, &DataGlobal_87D3C0);
}
}

// ==== BACKFILL 0x007D7C31  Fassign_Helper_7D7D1C_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7D7C31(int a1, int a2)
{
{
    return _ld12cvt(a1, a2, &DataGlobal_87D3D8);
}
}

// ==== BACKFILL 0x007D7C47  __ld12told  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _ld12told(unsigned short * a1, int a2)
{
{
    unsigned short v2;
    short v3;
    int v4;
    short v5;
    unsigned int v6;
    int v7;
    unsigned int v9;
    int v10;
    int v11;
    int v12;
    v12 = 0;
    v2 = *((int*)(a1) + 5);
    v3 = v2 & 0x8000;
    v9 = *(int *)(a1 + 3);
    v4 = *(int *)(a1 + 1);
    v11 = *a1 << 16;
    v5 = v2 & 0x7FFF;
    v10 = v4;
    if ( _RoundMan((int)&v9, 64) )
  {
    v6 = 0x80000000;
    ++v5;
  }
    else
  {
    v6 = v9;
  }
    if ( v5 == 0x7FFF )
    v12 = 1;
    *(int *)(a2 + 4) = v6;
    v7 = v10;
    *(short *)(a2 + 8) = v5 | v3;
    *(int *)a2 = v7;
    return v12;
}
}

// ==== BACKFILL 0x007D7CC1  Fassign_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7D7CC1(int a1, int a2)
{
{
    char v3[12];
    __strgtold12(v3, &a2, a2, 0, 0, 0, 0);
    return Fltin2_Helper((int)v3, a1);
}
}

// ==== BACKFILL 0x007D7D1C  Fassign_Helper_7D7D1C  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7D7D1C(int a1, int a2)
{
{
    char v3[12];
    __strgtold12(v3, &a2, a2, 0, 0, 0, 0);
    return Fassign_Helper_7D7D1C_Helper((int)v3, a1);
}
}

// ==== BACKFILL 0x007D7D49  __fptostr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _fptostr(BlowStraw * aP0, char * a1, int a3)
{
{
    int v3;
    char *v4;
    char *v6;
    BombClass *v7;
    BombClass *result;
    char v9;
    size_t v10;
    BlowStraw *aP0a;
    v3 = a3;
    v4 = a1;
    v6 = *(char **)(a3 + 12);
    v7 = (BombClass *)&aP0->__pad_0[1];
    aP0->__pad_0[0] = 48;
    result = (BombClass *)&aP0->__pad_0[1];
    if ( (int)a1 > 0 )
  {
    aP0a = (BlowStraw *)a1;
    v4 = 0;
    do
    {
    v9 = *v6;
    if ( *v6 )
    ++v6;
    else
    v9 = 48;
    result->__pad_0[0] = v9;
    result = (BombClass *)((char *)(result) + 1);
    aP0a = (BlowStraw *)((char *)aP0a - 1);
    }
    while ( aP0a );
    v3 = a3;
  }
    result->__pad_0[0] = 0;
    if ( (int)v4 >= 0 && *v6 >= 53 )
  {
    while ( 1 )
    {
    result = (BombClass *)((char *)result - 1);
    if ( result->__pad_0[0] != 57 )
    break;
    result->__pad_0[0] = 48;
    }
    ++result->__pad_0[0];
  }
    if ( aP0->__pad_0[0] == 49 )
  {
    ++*(int *)(v3 + 4);
  }
    else
  {
    v10 = strlen(v7->__pad_0);
    return (char *)memcpy(aP0, (AbstractClass *)v7, v10 + 1);
  }
    return result->__pad_0;
}
}

// ==== BACKFILL 0x007D7DC0  __fltout2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _fltout2(char a1, int a2, unsigned int * a3, char * Destination)
{
{
    int v4;
    int *v5;
    char *v6;
    int v8;
    short v9;
    char v10;
    char Source[24];
    __int64 v12;
    short v13;
    __dtold(&v12, &a1);
    LOWORD(v8) = v13;
    v4 = _I10_OUTPUT(v12, v8, 17, 0, (int)&v9);
    v5 = a3;
    v6 = Destination;
    *((int*)(a3) + 2) = v4;
    *v5 = v10;
    v5[1] = v9;
    strcpy(v6, Source);
    v5[3] = v6;
    return v5;
}
}

// ==== BACKFILL 0x007D8D3B  __set_exp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double _set_exp(double a1, short a2)
{
{
    double v3;
    v3 = a1;
    HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022));
    return v3;
}
}

// ==== BACKFILL 0x007D8DC8  __sptype  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _sptype(int a1, int a2)
{
{
    if ( a2 == 2146435072 )
  {
    if ( !a1 )
    return 1;
  }
    else if ( a2 == -1048576 && !a1 )
  {
    return 2;
  }
    if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 )
    return 3;
    if ( (HIWORD(a2) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1) )
    return 4;
    return 0;
}
}

// ==== BACKFILL 0x007D8EF5  __copysign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double _copysign(double Number, double Sign)
{
{
    double v3;
    LODWORD(v3) = LODWORD(Number);
    HIDWORD(v3) = HIDWORD(Sign) ^ (HIDWORD(Number) ^ HIDWORD(Sign)) & 0x7FFFFFFF;
    return v3;
}
}

// ==== BACKFILL 0x007D930F  __fpclass  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _fpclass(double X)
{
{
    int v1;
    int v2;
    int v4;
    int v5;
    if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    v1 = _sptype(SLODWORD(X), SHIDWORD(X)) - 1;
    if ( v1 )
    {
    v2 = v1 - 1;
    if ( !v2 )
    return 4;
    if ( v2 == 1 )
    return 2;
    return 1;
    }
    else
    {
    return 512;
    }
  }
    else if ( (HIWORD(X) & 0x7FF0) == 0 && ((HIDWORD(X) & 0xFFFFF) != 0 || LODWORD(X)) )
  {
    v4 = -((HIWORD(X) & 0x8000) != 0);
    LOBYTE(v4) = v4 & 0x90;
    return v4 + 128;
  }
    else
  {
    v5 = -((HIWORD(X) & 0x8000) != 0);
    LOBYTE(v5) = 0;
    if ( X == 0.0 )
    return v5 + 64;
    else
    return v5 + 256;
  }
}
}

// ==== BACKFILL 0x007D94C4  __set_osfhnd  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _set_osfhnd(int a1, HANDLE hHandle)
{
{
    if ( a1 < uNumber && *(int *)(CRTGlobal_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) == -1 )
  {
    if ( DataGlobal_87C2A4 == 1 )
    {
    if ( a1 )
      {
    if ( a1 == 1 )
        {
    SetStdHandle(0xFFFFFFF5, hHandle);
        }
    else if ( a1 == 2 )
        {
    SetStdHandle(0xFFFFFFF4, hHandle);
        }
      }
    else
      {
    SetStdHandle(0xFFFFFFF6, hHandle);
      }
    }
    *(int *)(CRTGlobal_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) = hHandle;
    return 0;
  }
    else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}
}

// ==== BACKFILL 0x007D9540  __free_osfhnd  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _free_osfhnd(int a1)
{
{
    int v1;
    if ( a1 >= uNumber || (v1 = 36 * (a1 & 0x1F) + CRTGlobal_B78A80[a1 >> 5], (*(char *)(v1 + 4) & 1) == 0) || *(int *)v1 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
    else
  {
    if ( DataGlobal_87C2A4 == 1 )
    {
    if ( a1 )
      {
    if ( a1 == 1 )
        {
    SetStdHandle(0xFFFFFFF5, 0);
        }
    else if ( a1 == 2 )
        {
    SetStdHandle(0xFFFFFFF4, 0);
        }
      }
    else
      {
    SetStdHandle(0xFFFFFFF6, 0);
      }
    }
    *(int *)(CRTGlobal_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) = -1;
    return 0;
  }
}
}

// ==== BACKFILL 0x007D95BF  __get_osfhandle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
intptr_t _get_osfhandle(int FileHandle)
{
{
    int v1;
    if ( FileHandle < uNumber )
  {
    v1 = CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F);
    if ( (*(char *)(v1 + 4) & 1) != 0 )
    return *(int *)v1;
  }
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
}
}

// ==== BACKFILL 0x007D96A8  __lock_fhandle  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void _lock_fhandle(int a1)
{
{
    int v1;
    int v2;
    v1 = 36 * (a1 & 0x1F);
    v2 = v1 + CRTGlobal_B78A80[a1 >> 5];
    if ( !*(int *)(v2 + 8) )
  {
    _lock(17);
    if ( !*(int *)(v2 + 8) )
    {
    InitializeCriticalSection((LPCRITICAL_SECTION)(v2 + 12));
    ++*(int *)(v2 + 8);
    }
    _unlock(17);
  }
    EnterCriticalSection((LPCRITICAL_SECTION)(CRTGlobal_B78A80[a1 >> 5] + v1 + 12));
}
}

// ==== BACKFILL 0x007D9707  __unlock_fhandle  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void _unlock_fhandle(int a1)
{
{
    LeaveCriticalSection((LPCRITICAL_SECTION)(CRTGlobal_B78A80[a1 >> 5] + 36 * (a1 & 0x1F) + 12));
}
}

// ==== BACKFILL 0x007D9D7F  _mbtowc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int mbtowc(wchar_t * DstCh, const char * SrcCh, size_t SrcSizeInBytes)
{
{
    int v3;
    size_t SrcSizeInBytesa;
    InterlockedIncrement(&CRTGlobal_B78BA4);
    v3 = 0;
    if ( CRTGlobal_B78BA0 )
  {
    InterlockedDecrement(&CRTGlobal_B78BA4);
    _lock(19);
    v3 = 1;
  }
    SrcSizeInBytesa = _mbtowc_lk(DstCh, SrcCh, SrcSizeInBytes);
    if ( v3 )
    _unlock(19);
    else
    InterlockedDecrement(&CRTGlobal_B78BA4);
    return SrcSizeInBytesa;
}
}

// ==== BACKFILL 0x007D9ECF  _ungetc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ungetc(int Character, FILE * Stream)
{
{
    int v2;
    _lock_file(Stream);
    v2 = ungetc_0(Character, Stream);
    _unlock_file(Stream);
    return v2;
}
}

// ==== BACKFILL 0x007D9EF8  _ungetc_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ungetc_0(int Character, FILE * Stream)
{
{
    int flag;
    int v4;
    if ( Character == -1 )
    return -1;
    flag = Stream->_flag;
    if ( (flag & 1) == 0 && ((flag & 0x80u) == 0 || (flag & 2) != 0) )
    return -1;
    if ( !Stream->_base )
    _getbuf(Stream);
    if ( Stream->_ptr == Stream->_base )
  {
    if ( Stream->_cnt )
    return -1;
    ++Stream->_ptr;
  }
    if ( (Stream->_flag & 0x40) != 0 )
  {
    if ( *--Stream->_ptr != (char)Character )
    {
    ++Stream->_ptr;
    return -1;
    }
  }
    else
  {
    *--Stream->_ptr = Character;
  }
    v4 = Stream->_flag;
    ++Stream->_cnt;
    LOBYTE(v4) = v4 & 0xEE | 1;
    Stream->_flag = v4;
    return (unsigned char)Character;
}
}

// ==== BACKFILL 0x007D9F66  ?__CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG ___CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z(struct _EXCEPTION_POINTERS * ExceptionInfo)
{
{
    PEXCEPTION_RECORD ExceptionRecord;
    ExceptionRecord = ExceptionInfo->ExceptionRecord;
    if ( ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949 && ExceptionRecord->NumberParameters == 3 && ExceptionRecord->ExceptionInformation[0] == 429065504 )
  {
    _terminate_YAXXZ();
  }
    if ( lpfn && __ValidateExecute_YAHP6GHXZ_Z((FARPROC)lpfn) )
    return lpfn(ExceptionInfo);
    else
    return 0;
}
}

// ==== BACKFILL 0x007DA4BF  _wcsncnt_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcsncnt_0(CampaignScore * aP0, int a2)
{
{
    CampaignScore *v2;
    int v3;
    int v4;
    v2 = aP0;
    v3 = a2 - 1;
    if ( a2 )
  {
    do
    {
    if ( !*(short *)v2->__pad_0 )
    break;
    v4 = v3;
    v2 = (CampaignScore *)((char *)(v2) + 2);
    --v3;
    }
    while ( v4 );
  }
    if ( *(short *)v2->__pad_0 )
    return a2;
    else
    return ((char *)v2 - (char *)aP0) >> 1;
}
}

// ==== BACKFILL 0x007DA9A2  _strncnt_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * strncnt_0(unsigned char * a1, int a2)
{
{
    char *v2;
    int v3;
    v2 = a1;
    v3 = a2 - 1;
    if ( a2 )
  {
    do
    {
    if ( !*v2 )
    break;
    ++v2;
    }
    while ( v3-- );
  }
    if ( *v2 )
    return (char *)a2;
    else
    return (char *)(v2 - a1);
}
}

// ==== BACKFILL 0x007DAB54  _findenv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int findenv(unsigned char * Str1, size_t MaxCount)
{
{
    char *v2;
    const unsigned __int8 *v3;
    char v4;
    v2 = (char *)CRTGlobal_B781E4;
    v3 = *(const unsigned char **)CRTGlobal_B781E4;
    if ( !*(int *)CRTGlobal_B781E4 )
    return -((v2 - (char *)CRTGlobal_B781E4) >> 2);
    while ( 1 )
  {
    if ( !_mbsnbicoll(Str1, v3, MaxCount) )
    {
    v4 = *(char *)(*(int *)(v2) + MaxCount);
    if ( v4 == 61 || !v4 )
    break;
    }
    v3 = (const unsigned char *)*((int *)(v2) + 1);
    v2 += 4;
    if ( !v3 )
    return -((v2 - (char *)CRTGlobal_B781E4) >> 2);
  }
    return (v2 - (char *)CRTGlobal_B781E4) >> 2;
}
}

// ==== BACKFILL 0x007DABAC  _copy_environ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * copy_environ(unsigned int * a1)
{
{
    int v1;
    int *v3;
    int v4;
    int *v5;
    int *v6;
    const char *v7;
    const char **v8;
    v1 = 0;
    if ( !a1 )
    return 0;
    v3 = a1 + 1;
    if ( *a1 )
  {
    do
    {
    v4 = *v3;
    ++v1;
    ++v3;
    }
    while ( v4 );
  }
    v5 = malloc(4 * v1 + 4);
    v6 = v5;
    if ( !v5 )
    _amsg_exit(9u);
    v7 = (const char *)*a1;
    v8 = (const char **)a1;
    while ( v7 )
  {
    ++v8;
    *v5 = _strdup(v7);
    v7 = *v8;
    ++v5;
  }
    *v5 = 0;
    return v6;
}
}

// ==== BACKFILL 0x007DAE25  __ismbblead  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _ismbblead(unsigned int Ch)
{
{
    return CRTisctype(Ch, 0, 4u);
}
}

// ==== BACKFILL 0x007DB066  ___addl  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int __addl(unsigned int a1, unsigned int a2, unsigned int * a3)
{
{
    int result;
    unsigned int v4;
    result = 0;
    v4 = a1 + a2;
    if ( a1 + a2 < a1 || v4 < a2 )
    result = 1;
    *a3 = v4;
    return result;
}
}

// ==== BACKFILL 0x007DB087  ___add_12  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int __add_12(unsigned int * a1, unsigned int * a2)
{
{
    if ( __addl(*a1, *a2, a1) && __addl(*((int*)(a1) + 1), 1u, a1 + 1) )
    ++*((int*)(a1) + 2);
    if ( __addl(*((int*)(a1) + 1), *((int*)(a2) + 1), a1 + 1) )
    ++*((int*)(a1) + 2);
    return __addl(*((int*)(a1) + 2), *((int*)(a2) + 2), a1 + 2);
}
}

// ==== BACKFILL 0x007DB0E5  ___shl_12  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * __shl_12(unsigned int * a1)
{
{
    unsigned int v2;
    unsigned int v3;
    int v4;
    unsigned int v5;
    v2 = *((int*)(a1) + 1);
    v3 = *a1;
    *a1 *= 2;
    v4 = (v3 >> 31) | (2 * v2);
    v5 = *((int*)(a1) + 2);
    *((int*)(a1) + 1) = v4;
    *((int*)(a1) + 2) = (v2 >> 31) | (2 * v5);
    return a1;
}
}

// ==== BACKFILL 0x007DB113  ___shr_12  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * __shr_12(int * a1)
{
{
    unsigned int v2;
    int v3;
    int v4;
    v2 = *((int*)(a1) + 2);
    v3 = *((int*)(a1) + 1);
    *((int*)(a1) + 1) = *(__int64 *)(a1 + 1) >> 1;
    v4 = (v3 << 31) | ((unsigned int)*a1 >> 1);
    *((int*)(a1) + 2) = v2 >> 1;
    *a1 = v4;
    return a1;
}
}

// ==== BACKFILL 0x007DB140  ___mtold12  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
short __mtold12(char * a1, int a2, int a3)
{
{
    unsigned int v4;
    int v5;
    int v6;
    short result;
    unsigned int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    v11 = 16462;
    *(int *)a3 = 0;
    *(int *)(a3 + 4) = 0;
    *(int *)(a3 + 8) = 0;
    if ( a2 )
  {
    v12 = a2;
    do
    {
    v8 = *(int *)a3;
    v9 = *(int *)(a3 + 4);
    v10 = *(int *)(a3 + 8);
    __shl_12((unsigned int *)a3);
    __shl_12((unsigned int *)a3);
    __add_12((unsigned int *)a3, &v8);
    __shl_12((unsigned int *)a3);
    v9 = 0;
    v10 = 0;
    v8 = *a1;
    __add_12((unsigned int *)a3, &v8);
    ++a1;
    --v12;
    }
    while ( v12 );
  }
    while ( !*(int *)(a3 + 8) )
  {
    v4 = *(int *)(a3 + 4);
    *(int *)(a3 + 8) = HIWORD(v4);
    v5 = (v4 << 16) | HIWORD(*(int *)a3);
    v6 = *(int *)a3 << 16;
    v11 += 65520;
    *(int *)(a3 + 4) = v5;
    *(int *)a3 = v6;
  }
    while ( (*(int *)(a3 + 8) & 0x8000) == 0 )
  {
    __shl_12((unsigned int *)a3);
    v11 += 0xFFFF;
  }
    result = v11;
    *(short *)(a3 + 10) = v11;
    return result;
}
}

// ==== BACKFILL 0x007DB49A  __handle_qnan1  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double _handle_qnan1(int a1, double a2, int a3)
{
{
    if ( DataGlobal_87D700 )
  {
    *_errno() = 33;
    _ctrlfp(a3, 0xFFFF);
  }
    else
  {
    _umatherr( 1, a1, SLODWORD(a2), SHIDWORD(a2), COERCE_UNSIGNED_INT64(0.0), HIDWORD(COERCE_UNSIGNED_INT64(0.0)), a2, a3);
  }
    return a2;
}
}

// ==== BACKFILL 0x007DB4EE  __handle_qnan2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double _handle_qnan2(int a1, double a2, double a3, int a4)
{
{
    double v6;
    v6 = a2 + a3;
    if ( DataGlobal_87D700 )
  {
    *_errno() = 33;
    _ctrlfp(a4, 0xFFFF);
    return v6;
  }
    else
  {
    _umatherr(1, a1, SLODWORD(a2), SHIDWORD(a2), SLODWORD(a3), SHIDWORD(a3), v6, a4);
    return a2;
  }
}
}

// ==== BACKFILL 0x007DB54E  __except1  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double _except1(DWORD dwExceptionCode, int a2, double a3, double a4, int a5)
{
{
    int v5;
    double result;
    ULONG_PTR Arguments[14];
    int v8;
    if ( !_handle_exc(dwExceptionCode, &a4, a5) )
  {
    v8 &= ~1u;
    _raise_exc((ULONG_PTR)Arguments, (int)&a5, dwExceptionCode, a2, (int)&a3, (int)&a4);
  }
    v5 = _errcode(dwExceptionCode);
    if ( DataGlobal_87D700 || !v5 )
  {
    _set_errno(v5);
    _ctrlfp(a5, 0xFFFF);
    return a4;
  }
    else
  {
    result = a3;
    _umatherr( v5, a2, SLODWORD(a3), SHIDWORD(a3), COERCE_UNSIGNED_INT64(0.0), HIDWORD(COERCE_UNSIGNED_INT64(0.0)), a4, a5);
  }
    return result;
}
}

// ==== BACKFILL 0x007DB5E6  __except2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double _except2(DWORD dwExceptionCode, int a2, double a3, double a4, double a5, int a6)
{
{
    int v6;
    int v7;
    double result;
    ULONG_PTR Arguments[10];
    double v10;
    int v11;
    if ( !_handle_exc(dwExceptionCode, &a5, a6) )
  {
    v6 = v11;
    LOBYTE(v6) = v11 & 0xE0 | 3;
    v11 = v6;
    v10 = a4;
    _raise_exc((ULONG_PTR)Arguments, (int)&a6, dwExceptionCode, a2, (int)&a3, (int)&a5);
  }
    v7 = _errcode(dwExceptionCode);
    if ( DataGlobal_87D700 || !v7 )
  {
    _set_errno(v7);
    _ctrlfp(a6, 0xFFFF);
    return a5;
  }
    else
  {
    result = a3;
    _umatherr(v7, a2, SLODWORD(a3), SHIDWORD(a3), SLODWORD(a4), SHIDWORD(a4), a5, a6);
  }
    return result;
}
}

// ==== BACKFILL 0x007DBB55  __umatherr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double _umatherr(int Value, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
{
    if ( _get_fname(a2) )
  {
    _ctrlfp(a8, 0xFFFF);
    if ( !ReturnNull5() )
    _set_errno(Value);
    return a7;
  }
    else
  {
    _ctrlfp(a8, 0xFFFF);
    _set_errno(Value);
    return a7;
  }
}
}

// ==== BACKFILL 0x007DBBDD  __set_errno  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
errno_t _set_errno(int Value)
{
{
    errno_t result;
    result = Value;
    if ( Value == 1 )
  {
    result = (errno_t)_errno();
    *(int *)result = 33;
  }
    else if ( Value > 1 && Value <= 3 )
  {
    result = (errno_t)_errno();
    *(int *)result = 34;
  }
    return result;
}
}

// ==== BACKFILL 0x007DBC05  __get_fname  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
_UNKNOWN ** _get_fname(int a1)
{
{
    int v1;
    int *v2;
    v1 = 0;
    v2 = (int *)&DataGlobal_87D628;
    while ( *v2 != a1 )
  {
    v2 += 2;
    ++v1;
    if ( (int)v2 >= (int)&DataGlobal_87D700 )
    return 0;
  }
    return (&DataGlobal_87D62C)[2 * v1];
}
}

// ==== BACKFILL 0x007DBC2A  __errcode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _errcode(char a1)
{
{
    if ( (a1 & 0x20) != 0 )
    return 5;
    if ( (a1 & 8) != 0 )
    return 1;
    if ( (a1 & 4) != 0 )
    return 2;
    if ( (a1 & 1) != 0 )
    return 3;
    return 2 * (a1 & 2);
}
}

// ==== BACKFILL 0x007DBC57  ReturnNull5  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ReturnNull5()
{
return 0;
}

// ==== BACKFILL 0x007DBC77  __ctrlfp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _ctrlfp(short a1)
{
return a1;
}

// ==== BACKFILL 0x007DBC9A  __set_statfp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _set_statfp()
{
  ;
}

// ==== BACKFILL 0x007DC0F6  ___multtenpow12  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void __multtenpow12(unsigned short * a1, int a2, int a3)
{
{
    char *v3;
    char v4;
    int v5;
    char *v6;
    int *v7;
    __int64 v8;
    int v9;
    v3 = (char *)&DataGlobal_87D720 - 96;
    if ( a2 )
  {
    if ( a2 < 0 )
    {
    a2 = -a2;
    v3 = (char *)&DataGlobal_87D880 - 96;
    }
    if ( !a3 )
    *a1 = 0;
    while ( a2 )
    {
    v4 = a2;
    v3 += 84;
    a2 >>= 3;
    v5 = v4 & 7;
    if ( v5 )
      {
    v6 = &v3[12 * v5];
    if ( *(short *)v6 >= 0x8000u )
        {
    LODWORD(v8) = *(int *)v6;
    v7 = v6 + 4;
    HIDWORD(v8) = *v7;
    v9 = v7[1];
    --*(int *)((char *)&v8 + 2);
    v6 = (char *)&v8;
        }
    __ld12mul((int)a1, (int)v6);
      }
    }
  }
}
}

// ==== BACKFILL 0x007DC1AA  ?_ValidateExecute_YAHP6GHXZ_Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL __ValidateExecute_YAHP6GHXZ_Z(FARPROC lpfn)
{
{
    return !IsBadCodePtr(lpfn);
}
}

// ==== BACKFILL 0x007DC72B  nullsub_271  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_271(int a1)
{
  ;
}

// ==== BACKFILL 0x007DCD9C  ThrowErrorCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void  __noreturn COM_ThrowError(int a1, int a2, int a3)
{
{
    char pExceptionObject[16];
    ThrowErrorCOM_Helper(a1, a2, 0);
    _CxxThrowException_8(pExceptionObject, (_ThrowInfo *)&DataGlobal_80F0D0);
}
}

// ==== BACKFILL 0x007DCDF2  sub_7DCDF2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_7DCDF2::sub_7DCDF2(char a2)
{
{
    sub_7DCE3B(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x007DCE62  HeapFree  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HeapFree()
{
    int __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
{
    return __imp_HeapFree(hHeap, dwFlags, lpMem);
}
}

// ==== BACKFILL 0x007DCE68  HeapAlloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HeapAlloc()
{
    LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
{
    return __imp_HeapAlloc(hHeap, dwFlags, dwBytes);
}
}

// ==== BACKFILL 0x007DCE6E  GetTimeZoneInformation  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetTimeZoneInformation()
{
    DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
{
    return __imp_GetTimeZoneInformation(lpTimeZoneInformation);
}
}

// ==== BACKFILL 0x007DCE74  GetLocalTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetLocalTime()
{
    void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)
{
    __imp_GetLocalTime(lpSystemTime);
}
}

// ==== BACKFILL 0x007DCE7A  RtlUnwind  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RtlUnwind()
{
    void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
    __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}
}

// ==== BACKFILL 0x007DCE8C  FatalAppExitA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FatalAppExitA()
{
    void __stdcall __noreturn FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
{
    __imp_FatalAppExitA(uAction, lpMessageText);
}
}

// ==== BACKFILL 0x007DCE92  HeapCreate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HeapCreate()
{
    HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize)
{
    return __imp_HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
}
}

// ==== BACKFILL 0x007DCE98  VirtualFree  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int VirtualFree()
{
    int __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType)
{
    return __imp_VirtualFree(lpAddress, dwSize, dwFreeType);
}
}

// ==== BACKFILL 0x007DCE9E  VirtualAlloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int VirtualAlloc()
{
    LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)
{
    return __imp_VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
}
}

// ==== BACKFILL 0x007DCEA4  HeapReAlloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HeapReAlloc()
{
    LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
{
    return __imp_HeapReAlloc(hHeap, dwFlags, lpMem, dwBytes);
}
}

// ==== BACKFILL 0x007DCEAA  IsBadWritePtr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsBadWritePtr()
{
    int __stdcall IsBadWritePtr(LPVOID lp, UINT_PTR ucb)
{
    return __imp_IsBadWritePtr(lp, ucb);
}
}

// ==== BACKFILL 0x007DCEB0  HeapSize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HeapSize()
{
    SIZE_T __stdcall HeapSize(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem)
{
    return __imp_HeapSize(hHeap, dwFlags, lpMem);
}
}

// ==== BACKFILL 0x007DCEB6  LCMapStringA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LCMapStringA()
{
    int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest)
{
    return __imp_LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
}

// ==== BACKFILL 0x007DCEBC  LCMapStringW  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LCMapStringW()
{
    int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
{
    return __imp_LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
}

// ==== BACKFILL 0x007DCEC2  TlsSetValue  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TlsSetValue()
{
    int __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
    return __imp_TlsSetValue(dwTlsIndex, lpTlsValue);
}
}

// ==== BACKFILL 0x007DCECE  TlsFree  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TlsFree()
{
    int __stdcall TlsFree(DWORD dwTlsIndex)
{
    return __imp_TlsFree(dwTlsIndex);
}
}

// ==== BACKFILL 0x007DCED4  SetLastError  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetLastError()
{
    void __stdcall SetLastError(DWORD dwErrCode)
{
    __imp_SetLastError(dwErrCode);
}
}

// ==== BACKFILL 0x007DCEDA  TlsGetValue  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TlsGetValue()
{
    LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
{
    return __imp_TlsGetValue(dwTlsIndex);
}
}

// ==== BACKFILL 0x007DCEE6  RaiseException  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RaiseException()
{
    void __stdcall RaiseException( DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, const ULONG_PTR *lpArguments)
{
    __imp_RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments);
}
}

// ==== BACKFILL 0x007DCEEC  FlushFileBuffers  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FlushFileBuffers()
{
    int __stdcall FlushFileBuffers(HANDLE hFile)
{
    return __imp_FlushFileBuffers(hFile);
}
}

// ==== BACKFILL 0x007DCEF2  SetHandleCount  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetHandleCount()
{
    UINT __stdcall SetHandleCount(UINT uNumber)
{
    return __imp_SetHandleCount(uNumber);
}
}

// ==== BACKFILL 0x007DCEF8  GetStdHandle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetStdHandle()
{
    HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
{
    return __imp_GetStdHandle(nStdHandle);
}
}

// ==== BACKFILL 0x007DCEFE  GetFileType  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetFileType()
{
    DWORD __stdcall GetFileType(HANDLE hFile)
{
    return __imp_GetFileType(hFile);
}
}

// ==== BACKFILL 0x007DCF04  GetCPInfo  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetCPInfo()
{
    int __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
{
    return __imp_GetCPInfo(CodePage, lpCPInfo);
}
}

// ==== BACKFILL 0x007DCF16  SetConsoleCtrlHandler  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetConsoleCtrlHandler()
{
    int __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, int Add)
{
    return __imp_SetConsoleCtrlHandler(HandlerRoutine, Add);
}
}

// ==== BACKFILL 0x007DCF1C  GetFileAttributesA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetFileAttributesA()
{
    DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)
{
    return __imp_GetFileAttributesA(lpFileName);
}
}

// ==== BACKFILL 0x007DCF28  UnhandledExceptionFilter  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int UnhandledExceptionFilter()
{
    LONG __stdcall UnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
    return __imp_UnhandledExceptionFilter(ExceptionInfo);
}
}

// ==== BACKFILL 0x007DCF2E  FreeEnvironmentStringsA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FreeEnvironmentStringsA()
{
    int __stdcall FreeEnvironmentStringsA(LPCH penv)
{
    return __imp_FreeEnvironmentStringsA(penv);
}
}

// ==== BACKFILL 0x007DCF34  FreeEnvironmentStringsW  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FreeEnvironmentStringsW()
{
    int __stdcall FreeEnvironmentStringsW(LPWCH penv)
{
    return __imp_FreeEnvironmentStringsW(penv);
}
}

// ==== BACKFILL 0x007DCF46  IsValidLocale  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsValidLocale()
{
    int __stdcall IsValidLocale(LCID Locale, DWORD dwFlags)
{
    return __imp_IsValidLocale(Locale, dwFlags);
}
}

// ==== BACKFILL 0x007DCF4C  IsValidCodePage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsValidCodePage()
{
    int __stdcall IsValidCodePage(UINT CodePage)
{
    return __imp_IsValidCodePage(CodePage);
}
}

// ==== BACKFILL 0x007DCF52  GetLocaleInfoA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetLocaleInfoA()
{
    int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
    return __imp_GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
}
}

// ==== BACKFILL 0x007DCF58  EnumSystemLocalesA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EnumSystemLocalesA()
{
    int __stdcall EnumSystemLocalesA(LOCALE_ENUMPROCA lpLocaleEnumProc, DWORD dwFlags)
{
    return __imp_EnumSystemLocalesA(lpLocaleEnumProc, dwFlags);
}
}

// ==== BACKFILL 0x007DCF64  SetStdHandle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetStdHandle()
{
    int __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle)
{
    return __imp_SetStdHandle(nStdHandle, hHandle);
}
}

// ==== BACKFILL 0x007DCF6A  GetStringTypeA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetStringTypeA()
{
    int __stdcall GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
{
    return __imp_GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
}

// ==== BACKFILL 0x007DCF70  GetStringTypeW  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetStringTypeW()
{
    int __stdcall GetStringTypeW(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)
{
    return __imp_GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
}

// ==== BACKFILL 0x007DCF76  CompareStringA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CompareStringA()
{
    int __stdcall CompareStringA( LCID Locale, DWORD dwCmpFlags, PCNZCH lpString1, int cchCount1, PCNZCH lpString2, int cchCount2)
{
    return __imp_CompareStringA(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
}

// ==== BACKFILL 0x007DCF7C  CompareStringW  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CompareStringW()
{
    int __stdcall CompareStringW( LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2)
{
    return __imp_CompareStringW(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
}

// ==== BACKFILL 0x007DCF82  SetEnvironmentVariableA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetEnvironmentVariableA()
{
    int __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
{
    return __imp_SetEnvironmentVariableA(lpName, lpValue);
}
}

// ==== BACKFILL 0x007DCF88  SetEndOfFile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetEndOfFile()
{
    int __stdcall SetEndOfFile(HANDLE hFile)
{
    return __imp_SetEndOfFile(hFile);
}
}

// ==== BACKFILL 0x007DCF8E  GetLocaleInfoW  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetLocaleInfoW()
{
    int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
    return __imp_GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
}
}

// ==== BACKFILL 0x007DCF94  lstrlenW  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int lstrlenW()
{
    int __stdcall lstrlenW(LPCWSTR lpString)
{
    return __imp_lstrlenW(lpString);
}
}

// ==== BACKFILL 0x007DCF9A  LocalFree  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LocalFree()
{
    HLOCAL __stdcall LocalFree(HLOCAL hMem)
{
    return __imp_LocalFree(hMem);
}
}

// ==== BACKFILL 0x007DCFA0  GetErrorInfo  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetErrorInfo()
{
    HRESULT __stdcall GetErrorInfo(ULONG dwReserved, IErrorInfo **pperrinfo)
{
    return __imp_GetErrorInfo(dwReserved, pperrinfo);
}
}

// ==== BACKFILL 0x007DCFA6  SetErrorInfo  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetErrorInfo()
{
    HRESULT __stdcall SetErrorInfo(ULONG dwReserved, IErrorInfo *perrinfo)
{
    return __imp_SetErrorInfo(dwReserved, perrinfo);
}
}

// ==== BACKFILL 0x007DCFAC  VariantChangeType  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int VariantChangeType()
{
    HRESULT __stdcall VariantChangeType(VARIANTARG *pvargDest, const VARIANTARG *pvarSrc, USHORT wFlags, VARTYPE vt)
{
    return __imp_VariantChangeType(pvargDest, pvarSrc, wFlags, vt);
}
}

// ==== BACKFILL 0x007DCFB2  CreateErrorInfo  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateErrorInfo()
{
    HRESULT __stdcall CreateErrorInfo(ICreateErrorInfo **pperrinfo)
{
    return __imp_CreateErrorInfo(pperrinfo);
}
}

// ==== BACKFILL 0x007DCFB8  VariantClear  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int VariantClear()
{
    HRESULT __stdcall VariantClear(VARIANTARG *pvarg)
{
    return __imp_VariantClear(pvarg);
}
}

// ==== BACKFILL 0x007DCFBE  VariantInit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int VariantInit()
{
    void __stdcall VariantInit(VARIANTARG *pvarg)
{
    __imp_VariantInit(pvarg);
}
}

// ==== BACKFILL 0x007DD0F8  __wcsicmp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _wcsicmp(const wchar_t * String1, const wchar_t * String2)
{
{
    const wchar_t *v2;
    const wchar_t *v3;
    const wchar_t *v4;
    const wchar_t *v5;
    const wchar_t *v6;
    wint_t v7;
    wint_t v8;
    wint_t v9;
    int v11;
    wint_t String1a;
    const wchar_t *String2a;
    if ( CRTGlobal_B782A0 )
  {
    InterlockedIncrement(&CRTGlobal_B78BA4);
    if ( CRTGlobal_B78BA0 )
    {
    InterlockedDecrement(&CRTGlobal_B78BA4);
    _lock(19);
    v11 = 1;
    }
    else
    {
    v11 = 0;
    }
    v5 = String1;
    v6 = String2;
    do
    {
    v7 = *v5++;
    LOWORD(String2a) = towlower_0(v7);
    v8 = *v6++;
    v9 = towlower_0(v8);
    String1a = v9;
    }
    while ( (short)String2a && (short)String2a == v9 );
    if ( v11 )
    _unlock(19);
    else
    InterlockedDecrement(&CRTGlobal_B78BA4);
  }
    else
  {
    v3 = String2;
    v4 = String1;
    do
    {
    LOWORD(v2) = *v4;
    if ( *v4 <= 0x5Au && (unsigned short)v2 >= 0x41u )
    v2 += 16;
    String2a = v2;
    LOWORD(v2) = *v3;
    if ( *v3 <= 0x5Au && (unsigned short)v2 >= 0x41u )
    LOWORD(v2) = (short)v2 + 32;
    String1a = (unsigned short)v2;
    HIWORD(v2) = HIWORD(String2a);
    ++v4;
    ++v3;
    }
    while ( (short)String2a && (short)String2a == (short)v2 );
  }
    return (unsigned short)String2a - String1a;
}
}

// ==== BACKFILL 0x007DD434  __getextendedkeycode  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * _getextendedkeycode(int a1)
{
{
    int v1;
    char *result;
    int v3;
    short *v4;
    int v5;
    v1 = *(int *)(a1 + 12);
    if ( (v1 & 0x100) != 0 )
  {
    result = 0;
    v3 = 0;
    v4 = &DataGlobal_87DA30;
    while ( *v4 != *(short *)(a1 + 8) )
    {
    v4 += 5;
    ++v3;
    if ( (int)v4 >= (int)DataGlobal_87DAA8 )
    return result;
    }
    if ( (v1 & 3) != 0 )
    {
    return (char *)(10 * v3 + 8903224);
    }
    else if ( (v1 & 0xC) != 0 )
    {
    return (char *)(10 * v3 + 8903222);
    }
    else if ( (v1 & 0x10) != 0 )
    {
    return (char *)(10 * v3 + 8903220);
    }
    else
    {
    return (char *)(10 * v3 + 8903218);
    }
  }
    else
  {
    if ( (v1 & 3) != 0 )
    {
    result = (char *)(8 * *(unsigned short *)(a1 + 8) + 8903342);
    }
    else if ( (v1 & 0xC) != 0 )
    {
    result = (char *)(8 * *(unsigned short *)(a1 + 8) + 8903340);
    }
    else
    {
    v5 = *(unsigned short *)(a1 + 8);
    if ( (v1 & 0x10) != 0 )
    result = (char *)(8 * v5 + 8903338);
    else
    result = (char *)(8 * v5 + 8903336);
    }
    if ( *result && *result != 0xE0 || !result[1] )
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x007DD4F4  __cwprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _cwprintf(const wchar_t *const Format, ... a2)
{
{
    va_list va;
    va_start(va, Format);
    return output(Format, va);
}
}

// ==== BACKFILL 0x007DDC32  _write_char_1  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_char_1(int a1, unsigned int * a2)
{
{
    bool v2;
    int *result;
    v2 = _putch(a1) == -1;
    result = a2;
    if ( v2 )
    *a2 = -1;
    else
    ++*a2;
    return result;
}
}

// ==== BACKFILL 0x007DDC4C  _write_multi_char_1  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_multi_char_1(int a1, unsigned int * a2, unsigned int * a3)
{
{
    int *result;
    int *i;
    result = a2;
    for ( i = (int *)((char *)a2 - 1); (int)result > 0; i = (int *)((char *)i - 1) )
  {
    result = write_char_1(a1, a3);
    if ( *a3 == -1 )
    break;
    result = i;
  }
    return result;
}
}

// ==== BACKFILL 0x007DDC78  _write_string_1  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_string_1(char * a1, unsigned int * a2, unsigned int * a3)
{
{
    int *result;
    int *i;
    int v6;
    result = a2;
    for ( i = (int *)((char *)a2 - 1); (int)result > 0; i = (int *)((char *)i - 1) )
  {
    v6 = *a1++;
    result = write_char_1(v6, a3);
    if ( *a3 == -1 )
    break;
    result = i;
  }
    return result;
}
}

// ==== BACKFILL 0x007DDCAB  _get_int_arg_1  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int get_int_arg_1(unsigned int * a1)
{
{
    *a1 += 4;
    return *(int *)(*a1 - 4);
}
}

// ==== BACKFILL 0x007DDCB8  _get_int64_arg_1  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long get_int64_arg_1(unsigned int * a1)
{
{
    *a1 += 8;
    return *(__int64 *)(*a1 - 8);
}
}

// ==== BACKFILL 0x007DDE13  __wcsdup  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * _wcsdup(CampaignScore * aP0)
{
{
    size_t v1;
    wchar_t *v2;
    if ( aP0 && (v1 = wcslen((const wchar_t *)aP0), (v2 = (wchar_t *)malloc((AbstractClass *)(2 * v1 + 2))) != 0) )
    return wcscpy(v2, (const wchar_t *)aP0);
    else
    return 0;
}
}

// ==== BACKFILL 0x007DDE50  __strrev  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _strrev(IUnknown * aP0)
{
{
    ObjectClass *v1;
    unsigned int v2;
    char *i;
    char v4;
    v1 = (ObjectClass *)aP0;
    v2 = strlen((const char *)aP0) + 1;
    if ( ~v2 != -2 )
  {
    for ( i = (char *)(aP0) + v2 - 2; v1 < (ObjectClass *)i; --i )
    {
    v4 = v1->__pad_0[0];
    v1->__pad_0[0] = *i;
    *i = v4;
    v1 = (ObjectClass *)((char *)(v1) + 1);
    }
  }
    return (char *)aP0;
}
}

// ==== BACKFILL 0x007DDE80  __wcsnicmp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _wcsnicmp(ObjectClass * aP0, const wchar_t * String2, size_t MaxCount)
{
{
    int result;
    const wchar_t *v4;
    ObjectClass *v5;
    wchar_t v6;
    ObjectClass *v7;
    const wchar_t *v8;
    wint_t v9;
    wint_t v10;
    wint_t v11;
    bool v12;
    int v13;
    wint_t String1;
    const wchar_t *String2a;
    result = 0;
    if ( MaxCount )
  {
    if ( CRTGlobal_B782A0 )
    {
    InterlockedIncrement(&CRTGlobal_B78BA4);
    if ( CRTGlobal_B78BA0 )
      {
    InterlockedDecrement(&CRTGlobal_B78BA4);
    _lock(19);
    v13 = 1;
      }
    else
      {
    v13 = 0;
      }
    v7 = aP0;
    v8 = String2;
    do
      {
    v9 = *(short *)v7->__pad_0;
    v7 = (ObjectClass *)((char *)(v7) + 2);
    LOWORD(String2a) = towlower_0(v9);
    v10 = *v8++;
    v11 = towlower_0(v10);
    v12 = MaxCount-- == 1;
    String1 = v11;
      }
    while ( !v12 && (short)String2a && (short)String2a == v11 );
    if ( v13 )
    _unlock(19);
    else
    InterlockedDecrement(&CRTGlobal_B78BA4);
    }
    else
    {
    v4 = String2;
    v5 = aP0;
    do
      {
    LOWORD(result) = *(short *)v5->__pad_0;
    if ( *(short *)v5->__pad_0 <= 0x5Au && (unsigned short)result >= 0x41u )
    result += 32;
    String2a = (const wchar_t *)result;
    v6 = *v4;
    if ( *v4 <= 0x5Au && v6 >= 0x41u )
    v6 += 32;
    String1 = v6;
    v5 = (ObjectClass *)((char *)(v5) + 2);
    ++v4;
    if ( !--MaxCount )
    break;
    HIWORD(result) = HIWORD(String2a);
    if ( !(short)String2a )
    break;
      }
    while ( (short)String2a == v6 );
    }
    return (unsigned short)String2a - String1;
  }
    return result;
}
}

// ==== BACKFILL 0x007DDF78  __filelength  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _filelength(int FileHandle)
{
{
    LONG v1;
    DWORD v2;
    if ( FileHandle < uNumber && (*(char *)(CRTGlobal_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(FileHandle);
    v1 = _lseek_lk(FileHandle, 0, 1u);
    v2 = -1;
    if ( v1 != -1 )
    {
    v2 = _lseek_lk(FileHandle, 0, 2u);
    if ( v1 != v2 )
    _lseek_lk(FileHandle, v1, 0);
    }
    _unlock_fhandle(FileHandle);
    return v2;
  }
    else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}
}

// ==== BACKFILL 0x007DE07C  _towlower_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wint_t towlower_0(wint_t C)
{
{
    int v1;
    wint_t result;
    bool v3;
    WCHAR DestStr;
    DestStr = HIWORD(v1);
    result = C;
    if ( C != 0xFFFF )
  {
    if ( CRTGlobal_B782A0 )
    {
    if ( C >= 0x100u || iswctype(C, 1u) )
      {
    v3 = __crtLCMapStringW(CRTGlobal_B782A0, 0x100u, &C, 1, &DestStr, 1, 0) == 0;
    result = C;
    if ( !v3 )
    return DestStr;
      }
    else
      {
    return C;
      }
    }
    else if ( C >= 0x41u && C <= 0x5Au )
    {
    return C + 32;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x007DE17D  __putch  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _putch(int Ch)
{
{
    DWORD v1;
    DWORD NumberOfCharsWritten;
    NumberOfCharsWritten = v1;
    HIBYTE(Ch) = Ch;
    if ( hConsoleOutput == (HANDLE)-2 )
    __initconout();
    if ( hConsoleOutput == (HANDLE)-1 || !WriteConsoleA(hConsoleOutput, (char *)&Ch + 3, 1u, &NumberOfCharsWritten, 0) )
    return -1;
    else
    return HIBYTE(Ch);
}
}

// ==== BACKFILL 0x007DE1C2  ReadConsoleInputA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ReadConsoleInputA()
{
    int __stdcall ReadConsoleInputA( HANDLE hConsoleInput, PINPUT_RECORD lpBuffer, DWORD nLength, LPDWORD lpNumberOfEventsRead)
{
    return __imp_ReadConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
}

// ==== BACKFILL 0x007DE1C8  SetConsoleMode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetConsoleMode()
{
    int __stdcall SetConsoleMode(HANDLE hConsoleHandle, DWORD dwMode)
{
    return __imp_SetConsoleMode(hConsoleHandle, dwMode);
}
}

// ==== BACKFILL 0x007DE1CE  GetConsoleMode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetConsoleMode()
{
    int __stdcall GetConsoleMode(HANDLE hConsoleHandle, LPDWORD lpMode)
{
    return __imp_GetConsoleMode(hConsoleHandle, lpMode);
}
}

// ==== BACKFILL 0x007DE1D4  PeekConsoleInputA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PeekConsoleInputA()
{
    int __stdcall PeekConsoleInputA( HANDLE hConsoleInput, PINPUT_RECORD lpBuffer, DWORD nLength, LPDWORD lpNumberOfEventsRead)
{
    return __imp_PeekConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
}

// ==== BACKFILL 0x007DE1DA  GetNumberOfConsoleInputEvents  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetNumberOfConsoleInputEvents()
{
    int __stdcall GetNumberOfConsoleInputEvents(HANDLE hConsoleInput, LPDWORD lpNumberOfEvents)
{
    return __imp_GetNumberOfConsoleInputEvents(hConsoleInput, lpNumberOfEvents);
}
}

// ==== BACKFILL 0x007DE1E0  WriteConsoleA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WriteConsoleA()
{
    int __stdcall WriteConsoleA( HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)
{
    return __imp_WriteConsoleA(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, lpReserved);
}
}
