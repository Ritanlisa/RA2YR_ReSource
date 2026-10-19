// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005D0070  SessionClass::loadSettings  this=SessionClass  sig=csp ====
void __thiscall SessionClass::loadSettings(SessionClass *this)
{
  int i; // ebp
  DeleteAndZero *v3; // edi
  int j; // ebp
  int v5; // ecx
  void *v6; // edi
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  int v10; // ebx
  ObjectClass *v11; // edi

  for ( i = 0; i < this->PlayerColor; ++i ) /*0x5d007f*/
  {
    v3 = *(DeleteAndZero **)(this->Handle[2] + 4 * i); /*0x5d0084*/
    if ( v3 ) /*0x5d0089*/
    {
      DeleteAndZero::Alt(v3 + 1); /*0x5d008e*/
      __3_YAXPAX_Z(v3); /*0x5d0094*/
    }
  }
  for ( j = 0; j < *(_DWORD *)&this->__pad_50[20]; ++j ) /*0x5d00ab*/
  {
    v5 = *(_DWORD *)&this->__pad_50[8]; /*0x5d00ad*/
    v6 = *(void **)(v5 + 4 * j); /*0x5d00b0*/
    if ( v6 ) /*0x5d00b5*/
    {
      DeleteAndZero(*(ObjectClass **)(v5 + 4 * j)); /*0x5d00b9*/
      __3_YAXPAX_Z(v6); /*0x5d00bf*/
    }
  }
  v7 = *(void **)&this->__pad_50[8]; /*0x5d00cf*/
  *(_DWORD *)&this->__pad_50[4] = &VectorClass<MapSelection *>::`vftable'; /*0x5d00d2*/
  if ( v7 && this->__pad_50[17] ) /*0x5d00dd*/
  {
    __3_YAXPAX_Z(v7); /*0x5d00e3*/
    *(_DWORD *)&this->__pad_50[8] = 0; /*0x5d00eb*/
  }
  this->__pad_50[17] = 0; /*0x5d00ee*/
  *(_DWORD *)&this->__pad_50[12] = 0; /*0x5d00f1*/
  v8 = (void *)this->Handle[2]; /*0x5d00f4*/
  this->Handle[1] = (int)&VectorClass<MSTextEntry *>::`vftable'; /*0x5d00f7*/
  if ( v8 && BYTE1(this->Handle[4]) ) /*0x5d0102*/
  {
    __3_YAXPAX_Z(v8); /*0x5d0108*/
    this->Handle[2] = 0; /*0x5d0110*/
  }
  BYTE1(this->Handle[4]) = 0; /*0x5d0113*/
  this->Handle[3] = 0; /*0x5d0116*/
  v9 = (void *)this->Config[4]; /*0x5d0119*/
  this->Config[3] = (int)&VectorClass<Point2D>::`vftable'; /*0x5d011c*/
  if ( v9 && BYTE1(this->Config[6]) ) /*0x5d0127*/
  {
    __3_YAXPAX_Z(v9); /*0x5d012d*/
    this->Config[4] = 0; /*0x5d0135*/
  }
  BYTE1(this->Config[6]) = 0; /*0x5d013b*/
  this->Config[5] = 0; /*0x5d013e*/
  DeleteAndZero((ObjectClass *)&this->Config[2]); /*0x5d0141*/
  v10 = 2; /*0x5d0149*/
  v11 = (ObjectClass *)&this->Config[2]; /*0x5d014e*/
  do /*0x5d015c*/
  {
    v11 = (ObjectClass *)((char *)v11 - 4); /*0x5d0151*/
    DeleteAndZero(v11); /*0x5d0156*/
    --v10; /*0x5d015b*/
  }
  while ( v10 ); /*0x5d015c*/
  DeleteAndZero::Alt((DeleteAndZero *)this->unknown_10); /*0x5d0161*/
  DeleteAndZero((ObjectClass *)this->unknown_0C); /*0x5d0169*/
  DeleteAndZero((ObjectClass *)this->unknown_08); /*0x5d0170*/
  DeleteAndZero((ObjectClass *)this->MPGameMode); /*0x5d0178*/
  DeleteAndZero((ObjectClass *)this); /*0x5d017f*/
}



// ==== 0x005D0190  ObjectClass::method_5D0190  this=ObjectClass  sig=csp ====
int __thiscall sub_5D0190(ObjectClass *this, const char *a2)
{
  int v3; // esi
  int v5; // esi
  char *v6; // [esp+8h] [ebp-4h] BYREF

  String::Assign((String *)&v6, a2); /*0x5d019e*/
  String::ToLower((String *)&v6); /*0x5d01a7*/
  v3 = 0; /*0x5d01af*/
  if ( this->customSound <= 0 ) /*0x5d01b3*/
  {
LABEL_6:
    DeleteAndZero((ObjectClass *)&v6); /*0x5d0202*/
    return 0; /*0x5d0210*/
  }
  while ( !(unsigned __int8)String::NotEquals(*(String **)(this->customSound_controller[2] + 4 * v3), 0) ) /*0x5d01c4*/
  {
LABEL_5:
    if ( ++v3 >= this->customSound ) /*0x5d0200*/
      goto LABEL_6; /*0x5d0200*/
  }
  String::AssignFromPtr((String *)&a2, *(const char ***)(this->customSound_controller[2] + 4 * v3)); /*0x5d01d1*/
  String::ToLower((String *)&a2); /*0x5d01da*/
  if ( !(unsigned __int8)String::Compare((String *)&v6, &a2) ) /*0x5d01e8*/
  {
    DeleteAndZero((ObjectClass *)&a2); /*0x5d01f5*/
    goto LABEL_5; /*0x5d01f5*/
  }
  v5 = *(_DWORD *)(this->customSound_controller[2] + 4 * v3); /*0x5d021a*/
  DeleteAndZero((ObjectClass *)&a2); /*0x5d021d*/
  DeleteAndZero((ObjectClass *)&v6); /*0x5d0226*/
  return v5; /*0x5d020b*/
}



// ==== 0x005D0240  ObjectClass::method_5D0240  this=ObjectClass  sig=csp ====
char **__thiscall sub_5D0240(ObjectClass *this, char **a2, char a3)
{
  int customSound; // esi
  int v4; // eax
  int v5; // edi
  int v6; // ecx

  customSound = this->customSound; /*0x5d0242*/
  v4 = 0; /*0x5d0245*/
  if ( customSound <= 0 ) /*0x5d024a*/
  {
LABEL_5:
    String::Assign((String *)a2, 0); /*0x5d0264*/
    return a2; /*0x5d0271*/
  }
  else
  {
    v5 = this->customSound_controller[2]; /*0x5d024c*/
    v6 = v5; /*0x5d0253*/
    while ( a3 != *(_BYTE *)(*(_DWORD *)v6 + 4) ) /*0x5d025a*/
    {
      ++v4; /*0x5d025c*/
      v6 += 4; /*0x5d025d*/
      if ( v4 >= customSound ) /*0x5d0262*/
        goto LABEL_5; /*0x5d0262*/
    }
    String::AssignFromPtr((String *)a2, *(const char ***)(v5 + 4 * v4)); /*0x5d0283*/
    return a2; /*0x5d0288*/
  }
}



// ==== 0x005D0290  MSChoiceClass::DeleteAndZero  this=AbstractClass  sig=csp ====
char *__thiscall sub_5D0290(char *this, const wchar_t **a2)
{
  void **v3; // ebp
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v8; // [esp+10h] [ebp-4h] BYREF

  v3 = (void **)(this + 12); /*0x5d0299*/
  *(_DWORD *)this = 0; /*0x5d029f*/
  this->ptr_8 = 0; /*0x5d02a1*/
  this->ptr_C = 0; /*0x5d02a4*/
  WideString::Assign((wchar_t **)this + 3, 0); /*0x5d02a7*/
  unknown_libname_74(&v8); /*0x5d02b0*/
  v4 = String::Tokenize2(a2, 0, (wchar_t *)asc_8304FC, (void **)&v8); /*0x5d02cf*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d02d1*/
    *(_DWORD *)this = Pipe::GetField((const wchar_t **)&v8); /*0x5d02e3*/
  v5 = String::Tokenize2(a2, v4, (wchar_t *)asc_8304FC, (void **)&v8); /*0x5d02fb*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d02fd*/
    this->ptr_8 = Pipe::GetField((const wchar_t **)&v8); /*0x5d030f*/
  v6 = String::Tokenize2(a2, v5, (wchar_t *)asc_8304FC, (void **)&v8); /*0x5d0328*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d032a*/
    this->ptr_C = Pipe::GetField((const wchar_t **)&v8); /*0x5d033c*/
  String::Tokenize2(a2, v6, (wchar_t *)asc_8304FC, (void **)&v8); /*0x5d034c*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d0355*/
    WideString::Reassign_Alt(v3, (const wchar_t **)&v8); /*0x5d0365*/
  DeleteAndZero::Alt((void **)&v8); /*0x5d036e*/
  return this; /*0x5d0375*/
}



// ==== 0x005D0380  String::SplitComma  this=ObjectClass  sig=csp ====
int __thiscall String::SplitComma(int this, String *a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  char *v10; // [esp+Ch] [ebp-4h] BYREF

  String::Assign((String *)this, 0); /*0x5d0389*/
  *(_DWORD *)(this + 4) = 0; /*0x5d0392*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0395*/
  *(_DWORD *)(this + 12) = 0; /*0x5d0398*/
  unknown_libname_73(&v10); /*0x5d039b*/
  v3 = String::Tokenize(a2, 0, Str, (void **)&v10); /*0x5d03ba*/
  if ( String::Length((String *)&v10) ) /*0x5d03bc*/
    String::Reassign((String *)this, (const char **)&v10); /*0x5d03cc*/
  v4 = String::Tokenize(a2, v3, Str, (void **)&v10); /*0x5d03e7*/
  if ( String::Length((String *)&v10) ) /*0x5d03e9*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d03f6*/
    *(_DWORD *)(this + 4) = v5; /*0x5d03fb*/
  }
  v6 = String::Tokenize(a2, v4, Str, (void **)&v10); /*0x5d0414*/
  if ( String::Length((String *)&v10) ) /*0x5d0416*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d0423*/
    *(_DWORD *)(this + 8) = v7; /*0x5d0428*/
  }
  String::Tokenize(a2, v6, Str, (void **)&v10); /*0x5d0438*/
  if ( String::Length((String *)&v10) ) /*0x5d0441*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d044e*/
    *(_DWORD *)(this + 12) = v8; /*0x5d0453*/
  }
  DeleteAndZero((ObjectClass *)&v10); /*0x5d045a*/
  return this; /*0x5d0461*/
}



// ==== 0x005D0470  Audio::ParseVolume  this=Audio  sig=csp ====
int __thiscall Audio::ParseVolume(int this, const char **a2, String *a3)
{
  int v4; // ebp
  int v5; // eax
  String v7; // [esp+4h] [ebp-8h] BYREF

  String::Assign((String *)this, 0); /*0x5d0478*/
  *(_BYTE *)(this + 4) = 0; /*0x5d0483*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0487*/
  *(_DWORD *)(this + 12) = 255; /*0x5d048e*/
  if ( (unsigned __int8)String::NotEquals((String *)a2, 0) && Audio::IsSoundEnabled() ) /*0x5d04a2*/
  {
    unknown_libname_73(&v7.m_3[1]); /*0x5d04b5*/
    v4 = String::Tokenize(a3, 0, Str, (void **)&v7.m_3[1]); /*0x5d04d5*/
    unknown_libname_73(&v7); /*0x5d04d7*/
    String::Tokenize(a3, v4, Str, (void **)&v7); /*0x5d04e9*/
    if ( (unsigned __int8)String::NotEquals(&v7, 0) ) /*0x5d04f4*/
    {
      __1_Timevec_std__QAE_XZ((const char **)&v7); /*0x5d0503*/
      *(_DWORD *)(this + 12) = v5; /*0x5d050b*/
      if ( v5 <= 100 ) /*0x5d050e*/
      {
        if ( v5 < 0 ) /*0x5d051b*/
          *(_DWORD *)(this + 12) = 0; /*0x5d051d*/
      }
      else
      {
        *(_DWORD *)(this + 12) = 100; /*0x5d0510*/
      }
      *(_DWORD *)(this + 12) = 255 * *(_DWORD *)(this + 12) / 100; /*0x5d053f*/
    }
    if ( *(int *)(this + 12) > 0 && (unsigned __int8)String::NotEquals((String *)&v7.m_3[1], 0) ) /*0x5d054f*/
      String::Reassign((String *)this, a2); /*0x5d055f*/
    DeleteAndZero((ObjectClass *)&v7); /*0x5d0568*/
    DeleteAndZero((ObjectClass *)&v7.m_3[1]); /*0x5d0571*/
  }
  return this; /*0x5d0578*/
}



// ==== 0x005D0580  ObjectClass::j_DeleteAndZero  this=ObjectClass  sig=csp ====
// attributes: thunk
void __thiscall j_DeleteAndZero(ObjectClass *this)
{
  DeleteAndZero(this); /*0x5d0580*/
}



// ==== 0x005D0590  ObjectClass::nullsub_24  this=ObjectClass  sig=csp ====
int nullsub_24(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5d0590*/
}



// ==== 0x005D05A0  _DynamicVectorClass_VPoint2D::FreeData  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42::FreeData(_DynamicVectorClass_VPoint2D *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d05a6*/
  this->m_10 = 0; /*0x5d05a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d05b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d05b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d05be*/
  }
  BYTE1(this->m_C) = 0; /*0x5d05c1*/
  this->m_8 = 0; /*0x5d05c4*/
}



// ==== 0x005D05D0  _DynamicVectorClass_VPoint2D::GetCount_8B  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42::GetCount_8B(_DynamicVectorClass_VPoint2D *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d05d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5d05e5*/
  else
    return 0; /*0x5d05d7*/
}



// ==== 0x005D05F0  _VectorClass_VPoint2D::Count  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Point2D::Count(_VectorClass_VPoint2D *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x5d05f0*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x5d05ff*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x5d0606*/
  return a2; /*0x5d0601*/
}



// ==== 0x005D0610  _DynamicVectorClass_PAVMSTextEntry::FreeData_0  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42::FreeData_0(_DynamicVectorClass_PAVMSTextEntry *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d0616*/
  this->m_10 = 0; /*0x5d0619*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d0620*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0626*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d062e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0631*/
  this->m_8 = 0; /*0x5d0634*/
}



// ==== 0x005D0640  _DynamicVectorClass_PAVMSTextEntry::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42::GetCount(_DynamicVectorClass_PAVMSTextEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0640*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0655*/
  else
    return 0; /*0x5d0647*/
}



// ==== 0x005D0660  _VectorClass_PAVMSTextEntry::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSTextEntry::Get(_VectorClass_PAVMSTextEntry *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d066a*/
}



// ==== 0x005D0670  _DynamicVectorClass_PAVMapSelection::FreeData_1  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42::FreeData_1(_DynamicVectorClass_PAVMapSelection *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d0676*/
  this->m_10 = 0; /*0x5d0679*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d0680*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0686*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d068e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0691*/
  this->m_8 = 0; /*0x5d0694*/
}



// ==== 0x005D06A0  _DynamicVectorClass_PAVMapSelection::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42::GetCount_0(_DynamicVectorClass_PAVMapSelection *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d06a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d06b5*/
  else
    return 0; /*0x5d06a7*/
}



// ==== 0x005D06C0  _VectorClass_PAVMapSelection::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapSelection::Get(_VectorClass_PAVMapSelection *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d06ca*/
}



// ==== 0x005D06D0  _DynamicVectorClass_PAVMapStage::ddtor  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26::ddtor(_DynamicVectorClass_PAVMapStage *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d06d6*/
  this->m_10 = 0; /*0x5d06d9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d06e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d06e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d06ee*/
  }
  BYTE1(this->m_C) = 0; /*0x5d06f1*/
  this->m_8 = 0; /*0x5d06f4*/
}



// ==== 0x005D0700  _DynamicVectorClass_PAVMapStage::Draw  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26::Draw(_DynamicVectorClass_PAVMapStage *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0700*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0715*/
  else
    return 0; /*0x5d0707*/
}



// ==== 0x005D0720  _VectorClass_PAVMapStage::GetFrame  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_26::GetFrame(_VectorClass_PAVMapStage *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d072a*/
}



// ==== 0x005D0730  _DynamicVectorClass_PAVMSAnimEntry::FreeData  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26::FreeData(_DynamicVectorClass_PAVMSAnimEntry *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d0736*/
  this->m_10 = 0; /*0x5d0739*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d0740*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0746*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d074e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0751*/
  this->m_8 = 0; /*0x5d0754*/
}



// ==== 0x005D0760  _DynamicVectorClass_PAVMSAnimEntry::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26::GetCount(_DynamicVectorClass_PAVMSAnimEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0760*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0775*/
  else
    return 0; /*0x5d0767*/
}



// ==== 0x005D0780  _VectorClass_PAVMSAnimEntry::GetFrame  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_42::GetFrame(_VectorClass_PAVMSAnimEntry *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d078a*/
}



// ==== 0x005D0790  _DynamicVectorClass_PAVMSSfxEntry::FreeData_0  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26::FreeData_0(_DynamicVectorClass_PAVMSSfxEntry *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d0796*/
  this->m_10 = 0; /*0x5d0799*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d07a0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d07a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d07ae*/
  }
  BYTE1(this->m_C) = 0; /*0x5d07b1*/
  this->m_8 = 0; /*0x5d07b4*/
}



// ==== 0x005D07C0  _DynamicVectorClass_PAVMSSfxEntry::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26::GetCount_0(_DynamicVectorClass_PAVMSSfxEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d07c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d07d5*/
  else
    return 0; /*0x5d07c7*/
}



// ==== 0x005D07E0  _VectorClass_PAVMSSfxEntry::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfxEntry::Get(_VectorClass_PAVMSSfxEntry *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d07ea*/
}



// ==== 0x005D07F0  _VectorClass_VPoint2D::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Point2D::Get(_VectorClass_VPoint2D *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x5d07fb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0800*/
  {
    v3 = 0; /*0x5d0802*/
    if ( m_8 <= 0 ) /*0x5d0806*/
      return 1; /*0x5d0836*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5d0808*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x5d080b*/
    v6 = (_DWORD *)(v4 + 4); /*0x5d080e*/
    v7 = v4 - (_DWORD)v5; /*0x5d0811*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d0823*/
    {
      ++v3; /*0x5d0825*/
      v6 += 2; /*0x5d0826*/
      v5 += 2; /*0x5d0829*/
      if ( v3 >= m_8 ) /*0x5d082e*/
        return 1; /*0x5d082e*/
    }
  }
  return 0; /*0x5d0830*/
}



// ==== 0x005D0850  _VectorClass_VPoint2D::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Point2D::Release(_VectorClass_VPoint2D *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int m_8; // ecx
  int v9; // eax
  int v10; // edx

  if ( a2 ) /*0x5d085c*/
  {
    v4 = a3; /*0x5d0862*/
    LOBYTE(this->m_C) = 0; /*0x5d0866*/
    if ( a3 ) /*0x5d086c*/
    {
      v6 = a3; /*0x5d0894*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5d0876*/
      if ( v5 ) /*0x5d0880*/
        v6 = (_DWORD *)v5; /*0x5d0885*/
      else
        v6 = 0; /*0x5d088d*/
    }
    LOBYTE(this->m_C) = 1; /*0x5d089c*/
    if ( v6 ) /*0x5d08a0*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d08ab*/
      {
        m_8 = this->m_8; /*0x5d08b2*/
        if ( a2 < m_8 ) /*0x5d08b7*/
          m_8 = a2; /*0x5d08b9*/
        v9 = 0; /*0x5d08bb*/
        if ( m_8 > 0 ) /*0x5d08bf*/
        {
          do /*0x5d08d7*/
          {
            v10 = *(_DWORD *)&this->m_1[3]; /*0x5d08c1*/
            ++v9; /*0x5d08c4*/
            v6[2 * v9 - 2] = *(_DWORD *)(v10 + 8 * v9 - 8); /*0x5d08cb*/
            v6[2 * v9 - 1] = *(_DWORD *)(v10 + 8 * v9 - 4); /*0x5d08d3*/
          }
          while ( v9 < m_8 ); /*0x5d08d7*/
          v4 = a3; /*0x5d08d9*/
        }
        if ( BYTE1(this->m_C) ) /*0x5d08dd*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d08e8*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d08f0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x5d08f9*/
      this->m_8 = a2; /*0x5d0901*/
      BYTE1(this->m_C) = v4 == 0; /*0x5d0904*/
      return 1; /*0x5d090a*/
    }
    else
    {
      return 0; /*0x5d08a5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VPoint2D *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0914*/
    return 1; /*0x5d091a*/
  }
}



// ==== 0x005D0920  _VectorClass_VPoint2D::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Point2D::Set(_VectorClass_VPoint2D *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d092d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0933*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d093b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d093e*/
  this->m_8 = 0; /*0x5d0941*/
}



// ==== 0x005D0950  _VectorClass_VPoint2D::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Point2D::GetSize(_VectorClass_VPoint2D *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d0950*/
    return 0; /*0x5d095e*/
  m_8 = this->m_8; /*0x5d0964*/
  result = 0; /*0x5d0967*/
  if ( m_8 <= 0 ) /*0x5d096b*/
    return -1; /*0x5d098c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d0971*/
  {
    if ( ++result >= m_8 ) /*0x5d098a*/
      return -1; /*0x5d098a*/
  }
  return result; /*0x5d095b*/
}



// ==== 0x005D09A0  _VectorClass_VPoint2D::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Point2D::GetCapacity(_VectorClass_VPoint2D *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d09a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5d09b5*/
  else
    return 0; /*0x5d09a7*/
}



// ==== 0x005D09C0  _DynamicVectorClass_VPoint2D::AllocCopyData_8B  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42::AllocCopyData_8B(_DynamicVectorClass_VPoint2D *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x5d09cc*/
  {
    v4 = a3; /*0x5d09d2*/
    LOBYTE(this->m_C) = 0; /*0x5d09d6*/
    if ( a3 ) /*0x5d09dc*/
    {
      v6 = a3; /*0x5d0a04*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5d09e6*/
      if ( v5 ) /*0x5d09f0*/
        v6 = (_DWORD *)v5; /*0x5d09f5*/
      else
        v6 = 0; /*0x5d09fd*/
    }
    LOBYTE(this->m_C) = 1; /*0x5d0a0c*/
    if ( !v6 ) /*0x5d0a10*/
      return 0; /*0x5d0a90*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0a12*/
    {
      m_8 = this->m_8; /*0x5d0a19*/
      if ( a2 < m_8 ) /*0x5d0a1e*/
        m_8 = a2; /*0x5d0a20*/
      v8 = 0; /*0x5d0a22*/
      if ( m_8 > 0 ) /*0x5d0a26*/
      {
        do /*0x5d0a3e*/
        {
          v9 = *(_DWORD *)&this->m_1[3]; /*0x5d0a28*/
          ++v8; /*0x5d0a2b*/
          v6[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x5d0a32*/
          v6[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x5d0a3a*/
        }
        while ( v8 < m_8 ); /*0x5d0a3e*/
        v4 = a3; /*0x5d0a40*/
      }
      if ( BYTE1(this->m_C) ) /*0x5d0a44*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0a4f*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d0a57*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x5d0a60*/
    this->m_8 = a2; /*0x5d0a68*/
    BYTE1(this->m_C) = v4 == 0; /*0x5d0a6b*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VPoint2D *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0a74*/
  }
  v10 = this->m_8; /*0x5d0a77*/
  if ( v10 < this->m_10 ) /*0x5d0a7f*/
    this->m_10 = v10; /*0x5d0a81*/
  return 1; /*0x5d0a84*/
}



// ==== 0x005D0AA0  _DynamicVectorClass_VPoint2D::FindIndex_Pair  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42::FindIndex_Pair(_DynamicVectorClass_VPoint2D *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d0aa0*/
  result = 0; /*0x5d0aa5*/
  if ( m_10 <= 0 ) /*0x5d0aab*/
    return -1; /*0x5d0acc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d0ab1*/
  {
    if ( ++result >= m_10 ) /*0x5d0aca*/
      return -1; /*0x5d0aca*/
  }
  return result; /*0x5d0acf*/
}



// ==== 0x005D0AE0  _VectorClass_PAVMSTextEntry::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSTextEntry::Add(_VectorClass_PAVMSTextEntry *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d0ae2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0aed*/
  {
    v3 = 0; /*0x5d0aef*/
    if ( m_8 <= 0 ) /*0x5d0af3*/
      return 1; /*0x5d0b13*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d0af5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0afb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0b04*/
    {
      ++v3; /*0x5d0b06*/
      ++v4; /*0x5d0b07*/
      if ( v3 >= m_8 ) /*0x5d0b0c*/
        return 1; /*0x5d0b0c*/
    }
  }
  return 0; /*0x5d0b0e*/
}



// ==== 0x005D0B20  _VectorClass_PAVMSTextEntry::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSTextEntry::Release(_VectorClass_PAVMSTextEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0b2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0b36*/
    if ( a3 ) /*0x5d0b3c*/
      v4 = a3; /*0x5d0b52*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d0b4e*/
    LOBYTE(this->m_C) = 1; /*0x5d0b56*/
    if ( v4 ) /*0x5d0b5a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0b65*/
      {
        m_8 = this->m_8; /*0x5d0b6c*/
        if ( a2 < m_8 ) /*0x5d0b71*/
          m_8 = a2; /*0x5d0b73*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d0b79*/
          ++i; /*0x5d0b7e*/
        if ( BYTE1(this->m_C) ) /*0x5d0b8b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0b96*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d0b9e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d0ba7*/
      this->m_8 = a2; /*0x5d0baf*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d0bb2*/
      return 1; /*0x5d0bb8*/
    }
    else
    {
      return 0; /*0x5d0b5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSTextEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0bc2*/
    return 1; /*0x5d0bc8*/
  }
}



// ==== 0x005D0BD0  _VectorClass_PAVMSTextEntry::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSTextEntry::Remove(_VectorClass_PAVMSTextEntry *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d0bdd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0be3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d0beb*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0bee*/
  this->m_8 = 0; /*0x5d0bf1*/
}



// ==== 0x005D0C00  _VectorClass_PAVMSTextEntry::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSTextEntry::GetSize(_VectorClass_PAVMSTextEntry *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d0c00*/
    return 0; /*0x5d0c08*/
  m_8 = this->m_8; /*0x5d0c0e*/
  result = 0; /*0x5d0c11*/
  if ( m_8 <= 0 ) /*0x5d0c15*/
    return -1; /*0x5d0c2c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d0c1b*/
  {
    if ( ++result >= m_8 ) /*0x5d0c2a*/
      return -1; /*0x5d0c2a*/
  }
  return result; /*0x5d0c0a*/
}



// ==== 0x005D0C40  _VectorClass_PAVMSTextEntry::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSTextEntry::GetCapacity(_VectorClass_PAVMSTextEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0c40*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0c55*/
  else
    return 0; /*0x5d0c47*/
}



// ==== 0x005D0C60  _DynamicVectorClass_PAVMSTextEntry::AllocCopyData_4B  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42::AllocCopyData_4B(_DynamicVectorClass_PAVMSTextEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0c6c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0c72*/
    if ( a3 ) /*0x5d0c78*/
      v4 = a3; /*0x5d0c8e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d0c8a*/
    LOBYTE(this->m_C) = 1; /*0x5d0c92*/
    if ( !v4 ) /*0x5d0c96*/
      return 0; /*0x5d0d0a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0c98*/
    {
      m_8 = this->m_8; /*0x5d0c9f*/
      if ( a2 < m_8 ) /*0x5d0ca4*/
        m_8 = a2; /*0x5d0ca6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d0cac*/
        ++i; /*0x5d0cb1*/
      if ( BYTE1(this->m_C) ) /*0x5d0cbe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0cc9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d0cd1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d0cda*/
    this->m_8 = a2; /*0x5d0ce2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d0ce5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSTextEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0cee*/
  }
  v7 = this->m_8; /*0x5d0cf1*/
  if ( v7 < this->m_10 ) /*0x5d0cf9*/
    this->m_10 = v7; /*0x5d0cfb*/
  return 1; /*0x5d0cfe*/
}



// ==== 0x005D0D10  _DynamicVectorClass_PAVMSTextEntry::FindIndex  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42::FindIndex(_DynamicVectorClass_PAVMSTextEntry *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d0d10*/
  result = 0; /*0x5d0d13*/
  if ( m_10 <= 0 ) /*0x5d0d18*/
    return -1; /*0x5d0d2f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d0d1e*/
  {
    if ( ++result >= m_10 ) /*0x5d0d2d*/
      return -1; /*0x5d0d2d*/
  }
  return result; /*0x5d0d32*/
}



// ==== 0x005D0D40  _VectorClass_PAVMapSelection::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapSelection::Add(_VectorClass_PAVMapSelection *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d0d42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0d4d*/
  {
    v3 = 0; /*0x5d0d4f*/
    if ( m_8 <= 0 ) /*0x5d0d53*/
      return 1; /*0x5d0d73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d0d55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0d5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0d64*/
    {
      ++v3; /*0x5d0d66*/
      ++v4; /*0x5d0d67*/
      if ( v3 >= m_8 ) /*0x5d0d6c*/
        return 1; /*0x5d0d6c*/
    }
  }
  return 0; /*0x5d0d6e*/
}



// ==== 0x005D0D80  _VectorClass_PAVMapSelection::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapSelection::Release(_VectorClass_PAVMapSelection *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0d8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0d96*/
    if ( a3 ) /*0x5d0d9c*/
      v4 = a3; /*0x5d0db2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d0dae*/
    LOBYTE(this->m_C) = 1; /*0x5d0db6*/
    if ( v4 ) /*0x5d0dba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0dc5*/
      {
        m_8 = this->m_8; /*0x5d0dcc*/
        if ( a2 < m_8 ) /*0x5d0dd1*/
          m_8 = a2; /*0x5d0dd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d0dd9*/
          ++i; /*0x5d0dde*/
        if ( BYTE1(this->m_C) ) /*0x5d0deb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0df6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d0dfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d0e07*/
      this->m_8 = a2; /*0x5d0e0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d0e12*/
      return 1; /*0x5d0e18*/
    }
    else
    {
      return 0; /*0x5d0dbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMapSelection *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0e22*/
    return 1; /*0x5d0e28*/
  }
}



// ==== 0x005D0E30  _VectorClass_PAVMapSelection::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MapSelection::Remove(_VectorClass_PAVMapSelection *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d0e3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0e43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d0e4b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0e4e*/
  this->m_8 = 0; /*0x5d0e51*/
}



// ==== 0x005D0E60  _VectorClass_PAVMapSelection::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapSelection::GetSize(_VectorClass_PAVMapSelection *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d0e60*/
    return 0; /*0x5d0e68*/
  m_8 = this->m_8; /*0x5d0e6e*/
  result = 0; /*0x5d0e71*/
  if ( m_8 <= 0 ) /*0x5d0e75*/
    return -1; /*0x5d0e8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d0e7b*/
  {
    if ( ++result >= m_8 ) /*0x5d0e8a*/
      return -1; /*0x5d0e8a*/
  }
  return result; /*0x5d0e6a*/
}



// ==== 0x005D0EA0  _VectorClass_PAVMapSelection::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapSelection::GetCapacity(_VectorClass_PAVMapSelection *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0ea0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0eb5*/
  else
    return 0; /*0x5d0ea7*/
}



// ==== 0x005D0EC0  _DynamicVectorClass_PAVMapSelection::AllocCopyData_4B_0  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42::AllocCopyData_4B_0(_DynamicVectorClass_PAVMapSelection *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0ecc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0ed2*/
    if ( a3 ) /*0x5d0ed8*/
      v4 = a3; /*0x5d0eee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d0eea*/
    LOBYTE(this->m_C) = 1; /*0x5d0ef2*/
    if ( !v4 ) /*0x5d0ef6*/
      return 0; /*0x5d0f6a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0ef8*/
    {
      m_8 = this->m_8; /*0x5d0eff*/
      if ( a2 < m_8 ) /*0x5d0f04*/
        m_8 = a2; /*0x5d0f06*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d0f0c*/
        ++i; /*0x5d0f11*/
      if ( BYTE1(this->m_C) ) /*0x5d0f1e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0f29*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d0f31*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d0f3a*/
    this->m_8 = a2; /*0x5d0f42*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d0f45*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMapSelection *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0f4e*/
  }
  v7 = this->m_8; /*0x5d0f51*/
  if ( v7 < this->m_10 ) /*0x5d0f59*/
    this->m_10 = v7; /*0x5d0f5b*/
  return 1; /*0x5d0f5e*/
}



// ==== 0x005D0F70  _DynamicVectorClass_PAVMapSelection::FindIndex_0  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42::FindIndex_0(_DynamicVectorClass_PAVMapSelection *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d0f70*/
  result = 0; /*0x5d0f73*/
  if ( m_10 <= 0 ) /*0x5d0f78*/
    return -1; /*0x5d0f8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d0f7e*/
  {
    if ( ++result >= m_10 ) /*0x5d0f8d*/
      return -1; /*0x5d0f8d*/
  }
  return result; /*0x5d0f92*/
}



// ==== 0x005D0FA0  _VectorClass_PAVMapStage::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_26::AddRef(_VectorClass_PAVMapStage *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d0fa2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0fad*/
  {
    v3 = 0; /*0x5d0faf*/
    if ( m_8 <= 0 ) /*0x5d0fb3*/
      return 1; /*0x5d0fd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d0fb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0fbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0fc4*/
    {
      ++v3; /*0x5d0fc6*/
      ++v4; /*0x5d0fc7*/
      if ( v3 >= m_8 ) /*0x5d0fcc*/
        return 1; /*0x5d0fcc*/
    }
  }
  return 0; /*0x5d0fce*/
}



// ==== 0x005D0FE0  _VectorClass_PAVMapStage::AllocCopyData_4B  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_26::AllocCopyData_4B(_VectorClass_PAVMapStage *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0fec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0ff6*/
    if ( a3 ) /*0x5d0ffc*/
      v4 = a3; /*0x5d1012*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d100e*/
    LOBYTE(this->m_C) = 1; /*0x5d1016*/
    if ( v4 ) /*0x5d101a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d1025*/
      {
        m_8 = this->m_8; /*0x5d102c*/
        if ( a2 < m_8 ) /*0x5d1031*/
          m_8 = a2; /*0x5d1033*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d1039*/
          ++i; /*0x5d103e*/
        if ( BYTE1(this->m_C) ) /*0x5d104b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1056*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d105e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d1067*/
      this->m_8 = a2; /*0x5d106f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d1072*/
      return 1; /*0x5d1078*/
    }
    else
    {
      return 0; /*0x5d101f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMapStage *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d1082*/
    return 1; /*0x5d1088*/
  }
}



// ==== 0x005D1090  _VectorClass_PAVMapStage::FreeData_1  this=VectorClass  sig=csp ====
void __thiscall MSPCXAnim_26::FreeData_1(_VectorClass_PAVMapStage *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d109d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d10a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d10ab*/
  }
  BYTE1(this->m_C) = 0; /*0x5d10ae*/
  this->m_8 = 0; /*0x5d10b1*/
}



// ==== 0x005D10C0  _VectorClass_PAVMapStage::FindIndex  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_26::FindIndex(_VectorClass_PAVMapStage *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d10c0*/
    return 0; /*0x5d10c8*/
  m_8 = this->m_8; /*0x5d10ce*/
  result = 0; /*0x5d10d1*/
  if ( m_8 <= 0 ) /*0x5d10d5*/
    return -1; /*0x5d10ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d10db*/
  {
    if ( ++result >= m_8 ) /*0x5d10ea*/
      return -1; /*0x5d10ea*/
  }
  return result; /*0x5d10ca*/
}



// ==== 0x005D1100  _VectorClass_PAVMapStage::GetCount_1  this=VectorClass  sig=csp ====
unsigned int __thiscall MSPCXAnim_26::GetCount_1(_VectorClass_PAVMapStage *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d1100*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d1115*/
  else
    return 0; /*0x5d1107*/
}



// ==== 0x005D1120  _DynamicVectorClass_PAVMapStage::Release  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26::Release(_DynamicVectorClass_PAVMapStage *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d112c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d1132*/
    if ( a3 ) /*0x5d1138*/
      v4 = a3; /*0x5d114e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d114a*/
    LOBYTE(this->m_C) = 1; /*0x5d1152*/
    if ( !v4 ) /*0x5d1156*/
      return 0; /*0x5d11ca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d1158*/
    {
      m_8 = this->m_8; /*0x5d115f*/
      if ( a2 < m_8 ) /*0x5d1164*/
        m_8 = a2; /*0x5d1166*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d116c*/
        ++i; /*0x5d1171*/
      if ( BYTE1(this->m_C) ) /*0x5d117e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1189*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d1191*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d119a*/
    this->m_8 = a2; /*0x5d11a2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d11a5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMapStage *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d11ae*/
  }
  v7 = this->m_8; /*0x5d11b1*/
  if ( v7 < this->m_10 ) /*0x5d11b9*/
    this->m_10 = v7; /*0x5d11bb*/
  return 1; /*0x5d11be*/
}



// ==== 0x005D11D0  _DynamicVectorClass_PAVMapStage::Load  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26::Load(_DynamicVectorClass_PAVMapStage *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d11d0*/
  result = 0; /*0x5d11d3*/
  if ( m_10 <= 0 ) /*0x5d11d8*/
    return -1; /*0x5d11ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d11de*/
  {
    if ( ++result >= m_10 ) /*0x5d11ed*/
      return -1; /*0x5d11ed*/
  }
  return result; /*0x5d11f2*/
}



// ==== 0x005D1200  _VectorClass_PAVMSAnimEntry::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_42::AddRef(_VectorClass_PAVMSAnimEntry *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d1202*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d120d*/
  {
    v3 = 0; /*0x5d120f*/
    if ( m_8 <= 0 ) /*0x5d1213*/
      return 1; /*0x5d1233*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d1215*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d121b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d1224*/
    {
      ++v3; /*0x5d1226*/
      ++v4; /*0x5d1227*/
      if ( v3 >= m_8 ) /*0x5d122c*/
        return 1; /*0x5d122c*/
    }
  }
  return 0; /*0x5d122e*/
}



// ==== 0x005D1240  _VectorClass_PAVMSAnimEntry::Release  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_42::Release(_VectorClass_PAVMSAnimEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d124c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d1256*/
    if ( a3 ) /*0x5d125c*/
      v4 = a3; /*0x5d1272*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d126e*/
    LOBYTE(this->m_C) = 1; /*0x5d1276*/
    if ( v4 ) /*0x5d127a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d1285*/
      {
        m_8 = this->m_8; /*0x5d128c*/
        if ( a2 < m_8 ) /*0x5d1291*/
          m_8 = a2; /*0x5d1293*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d1299*/
          ++i; /*0x5d129e*/
        if ( BYTE1(this->m_C) ) /*0x5d12ab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d12b6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d12be*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d12c7*/
      this->m_8 = a2; /*0x5d12cf*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d12d2*/
      return 1; /*0x5d12d8*/
    }
    else
    {
      return 0; /*0x5d127f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSAnimEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d12e2*/
    return 1; /*0x5d12e8*/
  }
}



// ==== 0x005D12F0  _VectorClass_PAVMSAnimEntry::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSPCXAnim_42::ddtor(_VectorClass_PAVMSAnimEntry *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d12fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1303*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d130b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d130e*/
  this->m_8 = 0; /*0x5d1311*/
}



// ==== 0x005D1320  _VectorClass_PAVMSAnimEntry::Load  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_42::Load(_VectorClass_PAVMSAnimEntry *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d1320*/
    return 0; /*0x5d1328*/
  m_8 = this->m_8; /*0x5d132e*/
  result = 0; /*0x5d1331*/
  if ( m_8 <= 0 ) /*0x5d1335*/
    return -1; /*0x5d134c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d133b*/
  {
    if ( ++result >= m_8 ) /*0x5d134a*/
      return -1; /*0x5d134a*/
  }
  return result; /*0x5d132a*/
}



// ==== 0x005D1360  _VectorClass_PAVMSAnimEntry::Draw  this=VectorClass  sig=csp ====
unsigned int __thiscall MSPCXAnim_42::Draw(_VectorClass_PAVMSAnimEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d1360*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d1375*/
  else
    return 0; /*0x5d1367*/
}



// ==== 0x005D1380  _DynamicVectorClass_PAVMSAnimEntry::AllocCopyData_4B_0  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26::AllocCopyData_4B_0(_DynamicVectorClass_PAVMSAnimEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d138c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d1392*/
    if ( a3 ) /*0x5d1398*/
      v4 = a3; /*0x5d13ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d13aa*/
    LOBYTE(this->m_C) = 1; /*0x5d13b2*/
    if ( !v4 ) /*0x5d13b6*/
      return 0; /*0x5d142a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d13b8*/
    {
      m_8 = this->m_8; /*0x5d13bf*/
      if ( a2 < m_8 ) /*0x5d13c4*/
        m_8 = a2; /*0x5d13c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d13cc*/
        ++i; /*0x5d13d1*/
      if ( BYTE1(this->m_C) ) /*0x5d13de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d13e9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d13f1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d13fa*/
    this->m_8 = a2; /*0x5d1402*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d1405*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSAnimEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d140e*/
  }
  v7 = this->m_8; /*0x5d1411*/
  if ( v7 < this->m_10 ) /*0x5d1419*/
    this->m_10 = v7; /*0x5d141b*/
  return 1; /*0x5d141e*/
}



// ==== 0x005D1430  _DynamicVectorClass_PAVMSAnimEntry::FindIndex_0  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26::FindIndex_0(_DynamicVectorClass_PAVMSAnimEntry *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d1430*/
  result = 0; /*0x5d1433*/
  if ( m_10 <= 0 ) /*0x5d1438*/
    return -1; /*0x5d144f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d143e*/
  {
    if ( ++result >= m_10 ) /*0x5d144d*/
      return -1; /*0x5d144d*/
  }
  return result; /*0x5d1452*/
}



// ==== 0x005D1460  _VectorClass_PAVMSSfxEntry::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfxEntry::Add(_VectorClass_PAVMSSfxEntry *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d1462*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d146d*/
  {
    v3 = 0; /*0x5d146f*/
    if ( m_8 <= 0 ) /*0x5d1473*/
      return 1; /*0x5d1493*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d1475*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d147b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d1484*/
    {
      ++v3; /*0x5d1486*/
      ++v4; /*0x5d1487*/
      if ( v3 >= m_8 ) /*0x5d148c*/
        return 1; /*0x5d148c*/
    }
  }
  return 0; /*0x5d148e*/
}



// ==== 0x005D14A0  _VectorClass_PAVMSSfxEntry::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfxEntry::Release(_VectorClass_PAVMSSfxEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d14ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d14b6*/
    if ( a3 ) /*0x5d14bc*/
      v4 = a3; /*0x5d14d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d14ce*/
    LOBYTE(this->m_C) = 1; /*0x5d14d6*/
    if ( v4 ) /*0x5d14da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d14e5*/
      {
        m_8 = this->m_8; /*0x5d14ec*/
        if ( a2 < m_8 ) /*0x5d14f1*/
          m_8 = a2; /*0x5d14f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d14f9*/
          ++i; /*0x5d14fe*/
        if ( BYTE1(this->m_C) ) /*0x5d150b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1516*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d151e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d1527*/
      this->m_8 = a2; /*0x5d152f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d1532*/
      return 1; /*0x5d1538*/
    }
    else
    {
      return 0; /*0x5d14df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSSfxEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d1542*/
    return 1; /*0x5d1548*/
  }
}



// ==== 0x005D1550  _VectorClass_PAVMSSfxEntry::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfxEntry::Remove(_VectorClass_PAVMSSfxEntry *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d155d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1563*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d156b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d156e*/
  this->m_8 = 0; /*0x5d1571*/
}



// ==== 0x005D1580  _VectorClass_PAVMSSfxEntry::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfxEntry::GetSize(_VectorClass_PAVMSSfxEntry *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d1580*/
    return 0; /*0x5d1588*/
  m_8 = this->m_8; /*0x5d158e*/
  result = 0; /*0x5d1591*/
  if ( m_8 <= 0 ) /*0x5d1595*/
    return -1; /*0x5d15ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d159b*/
  {
    if ( ++result >= m_8 ) /*0x5d15aa*/
      return -1; /*0x5d15aa*/
  }
  return result; /*0x5d158a*/
}



// ==== 0x005D15C0  _VectorClass_PAVMSSfxEntry::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfxEntry::GetCapacity(_VectorClass_PAVMSSfxEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d15c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d15d5*/
  else
    return 0; /*0x5d15c7*/
}



// ==== 0x005D15E0  _DynamicVectorClass_PAVMSSfxEntry::AllocCopyData_4B_1  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26::AllocCopyData_4B_1(_DynamicVectorClass_PAVMSSfxEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d15ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d15f2*/
    if ( a3 ) /*0x5d15f8*/
      v4 = a3; /*0x5d160e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d160a*/
    LOBYTE(this->m_C) = 1; /*0x5d1612*/
    if ( !v4 ) /*0x5d1616*/
      return 0; /*0x5d168a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d1618*/
    {
      m_8 = this->m_8; /*0x5d161f*/
      if ( a2 < m_8 ) /*0x5d1624*/
        m_8 = a2; /*0x5d1626*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d162c*/
        ++i; /*0x5d1631*/
      if ( BYTE1(this->m_C) ) /*0x5d163e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1649*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d1651*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d165a*/
    this->m_8 = a2; /*0x5d1662*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d1665*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d166e*/
  }
  v7 = this->m_8; /*0x5d1671*/
  if ( v7 < this->m_10 ) /*0x5d1679*/
    this->m_10 = v7; /*0x5d167b*/
  return 1; /*0x5d167e*/
}



// ==== 0x005D1690  _DynamicVectorClass_PAVMSSfxEntry::FindIndex_1  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26::FindIndex_1(_DynamicVectorClass_PAVMSSfxEntry *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d1690*/
  result = 0; /*0x5d1693*/
  if ( m_10 <= 0 ) /*0x5d1698*/
    return -1; /*0x5d16af*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d169e*/
  {
    if ( ++result >= m_10 ) /*0x5d16ad*/
      return -1; /*0x5d16ad*/
  }
  return result; /*0x5d16b2*/
}



// ==== 0x005D16C0  _VectorClass_VPoint2D::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Point2D::QueryInterface(_VectorClass_VPoint2D *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d16c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Point2D>::`vftable'; /*0x5d16c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d16d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d16d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d16e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d16eb*/
  this->m_8 = 0; /*0x5d16f1*/
  if ( (a2 & 1) != 0 ) /*0x5d16f8*/
    __3_YAXPAX_Z(this); /*0x5d16fb*/
  return this->__pad_0; /*0x5d1705*/
}



// ==== 0x005D1710  _DynamicVectorClass_VPoint2D::Constructor_VectorClass_Point2D_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_42::Constructor_VectorClass_Point2D_(_DynamicVectorClass_VPoint2D *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1713*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Point2D>::`vftable'; /*0x5d1716*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1720*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1728*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1730*/
  }
  BYTE1(this->m_C) = 0; /*0x5d173b*/
  this->m_8 = 0; /*0x5d1741*/
  if ( (a2 & 1) != 0 ) /*0x5d1748*/
    __3_YAXPAX_Z(this); /*0x5d174b*/
  return this->__pad_0; /*0x5d1755*/
}



// ==== 0x005D1760  _VectorClass_PAVMSTextEntry::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MSTextEntry::QueryInterface(_VectorClass_PAVMSTextEntry *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1763*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSTextEntry *>::`vftable'; /*0x5d1766*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1770*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1778*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1780*/
  }
  BYTE1(this->m_C) = 0; /*0x5d178b*/
  this->m_8 = 0; /*0x5d1791*/
  if ( (a2 & 1) != 0 ) /*0x5d1798*/
    __3_YAXPAX_Z(this); /*0x5d179b*/
  return this->__pad_0; /*0x5d17a5*/
}



// ==== 0x005D17B0  _DynamicVectorClass_PAVMSTextEntry::Constructor_VectorClass_MSTextEntry___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_42::Constructor_VectorClass_MSTextEntry___(
        _DynamicVectorClass_PAVMSTextEntry *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d17b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSTextEntry *>::`vftable'; /*0x5d17b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d17c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d17c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d17d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d17db*/
  this->m_8 = 0; /*0x5d17e1*/
  if ( (a2 & 1) != 0 ) /*0x5d17e8*/
    __3_YAXPAX_Z(this); /*0x5d17eb*/
  return this->__pad_0; /*0x5d17f5*/
}



// ==== 0x005D1800  _VectorClass_PAVMapSelection::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MapSelection::QueryInterface(_VectorClass_PAVMapSelection *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1803*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapSelection *>::`vftable'; /*0x5d1806*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1810*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1818*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1820*/
  }
  BYTE1(this->m_C) = 0; /*0x5d182b*/
  this->m_8 = 0; /*0x5d1831*/
  if ( (a2 & 1) != 0 ) /*0x5d1838*/
    __3_YAXPAX_Z(this); /*0x5d183b*/
  return this->__pad_0; /*0x5d1845*/
}



// ==== 0x005D1850  _DynamicVectorClass_PAVMapSelection::Constructor_VectorClass_MapSelection___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_42::Constructor_VectorClass_MapSelection___(
        _DynamicVectorClass_PAVMapSelection *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1853*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapSelection *>::`vftable'; /*0x5d1856*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1860*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1868*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1870*/
  }
  BYTE1(this->m_C) = 0; /*0x5d187b*/
  this->m_8 = 0; /*0x5d1881*/
  if ( (a2 & 1) != 0 ) /*0x5d1888*/
    __3_YAXPAX_Z(this); /*0x5d188b*/
  return this->__pad_0; /*0x5d1895*/
}



// ==== 0x005D18A0  _VectorClass_PAVMapStage::Constructor_VectorClass_MapStage___  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSPCXAnim_26::Constructor_VectorClass_MapStage___(_VectorClass_PAVMapStage *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d18a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapStage *>::`vftable'; /*0x5d18a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d18b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d18b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d18c0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d18cb*/
  this->m_8 = 0; /*0x5d18d1*/
  if ( (a2 & 1) != 0 ) /*0x5d18d8*/
    __3_YAXPAX_Z(this); /*0x5d18db*/
  return this->__pad_0; /*0x5d18e5*/
}



// ==== 0x005D18F0  _DynamicVectorClass_PAVMapStage::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_26::QueryInterface(_DynamicVectorClass_PAVMapStage *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d18f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapStage *>::`vftable'; /*0x5d18f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1900*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1908*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1910*/
  }
  BYTE1(this->m_C) = 0; /*0x5d191b*/
  this->m_8 = 0; /*0x5d1921*/
  if ( (a2 & 1) != 0 ) /*0x5d1928*/
    __3_YAXPAX_Z(this); /*0x5d192b*/
  return this->__pad_0; /*0x5d1935*/
}



// ==== 0x005D1940  _VectorClass_PAVMSAnimEntry::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSPCXAnim_42::QueryInterface(_VectorClass_PAVMSAnimEntry *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1943*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnimEntry *>::`vftable'; /*0x5d1946*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1950*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1958*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1960*/
  }
  BYTE1(this->m_C) = 0; /*0x5d196b*/
  this->m_8 = 0; /*0x5d1971*/
  if ( (a2 & 1) != 0 ) /*0x5d1978*/
    __3_YAXPAX_Z(this); /*0x5d197b*/
  return this->__pad_0; /*0x5d1985*/
}



// ==== 0x005D1990  _DynamicVectorClass_PAVMSAnimEntry::Constructor_VectorClass_MSAnimEntry___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_26::Constructor_VectorClass_MSAnimEntry___(
        _DynamicVectorClass_PAVMSAnimEntry *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1993*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnimEntry *>::`vftable'; /*0x5d1996*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d19a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d19a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d19b0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d19bb*/
  this->m_8 = 0; /*0x5d19c1*/
  if ( (a2 & 1) != 0 ) /*0x5d19c8*/
    __3_YAXPAX_Z(this); /*0x5d19cb*/
  return this->__pad_0; /*0x5d19d5*/
}



// ==== 0x005D19E0  _VectorClass_PAVMSSfxEntry::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MSSfxEntry::QueryInterface(_VectorClass_PAVMSSfxEntry *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d19e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSSfxEntry *>::`vftable'; /*0x5d19e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d19f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d19f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1a00*/
  }
  BYTE1(this->m_C) = 0; /*0x5d1a0b*/
  this->m_8 = 0; /*0x5d1a11*/
  if ( (a2 & 1) != 0 ) /*0x5d1a18*/
    __3_YAXPAX_Z(this); /*0x5d1a1b*/
  return this->__pad_0; /*0x5d1a25*/
}



// ==== 0x005D1A30  _DynamicVectorClass_PAVMSSfxEntry::Constructor_VectorClass_MSSfxEntry___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_26::Constructor_VectorClass_MSSfxEntry___(
        _DynamicVectorClass_PAVMSSfxEntry *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1a33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSSfxEntry *>::`vftable'; /*0x5d1a36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1a40*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1a48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1a50*/
  }
  BYTE1(this->m_C) = 0; /*0x5d1a5b*/
  this->m_8 = 0; /*0x5d1a61*/
  if ( (a2 & 1) != 0 ) /*0x5d1a68*/
    __3_YAXPAX_Z(this); /*0x5d1a6b*/
  return this->__pad_0; /*0x5d1a75*/
}



// ==== 0x005D1A80  MPBattleClass::populateTeamDropdown  this=MPBattleClass  sig=ida-proto ====
int sub_5D1A80()
{
  dword_ABFBC0 = 0; /*0x5d1a82*/
  dword_ABFBC4 = 0; /*0x5d1a87*/
  dword_ABFBC8 = 0; /*0x5d1a8c*/
  dword_ABFBCC = 0; /*0x5d1a91*/
  return 0; /*0x5d1a96*/
}



// ==== 0x005D1AA0  MSEngine::Construct  this=MSEngine  sig=csp ====
_DWORD *__thiscall MSEngine::Construct(MSEngine *this)
{
  void **p_MSEngine_field_0x8; // ecx
  void (__thiscall **v3)(void **, int, _DWORD); // edx

  p_MSEngine_field_0x8 = &this->MSEngine_field_0x8; /*0x5d1aa5*/
  p_MSEngine_field_0x8[1] = 0; /*0x5d1ab2*/
  p_MSEngine_field_0x8[2] = 0; /*0x5d1ab5*/
  *((_BYTE *)p_MSEngine_field_0x8 + 12) = 1; /*0x5d1ab8*/
  *((_BYTE *)p_MSEngine_field_0x8 + 13) = 0; /*0x5d1abb*/
  *p_MSEngine_field_0x8 = &VectorClass<TRect<int>>::`vftable'; /*0x5d1abe*/
  *((_DWORD *)this + 7) = 0; /*0x5d1ac4*/
  this->q008 = 0; /*0x5d1ac7*/
  *((_BYTE *)this + 36) = 1; /*0x5d1aca*/
  *((_BYTE *)this + 37) = 0; /*0x5d1acd*/
  *((_DWORD *)this + 6) = &DynamicVectorClass<MSAnim *>::`vftable'; /*0x5d1ad0*/
  this->q00B = 10; /*0x5d1ad6*/
  this->q00A = 0; /*0x5d1add*/
  this->IsAllocated = 0; /*0x5d1ae0*/
  this->q00E = 0; /*0x5d1ae3*/
  *((_BYTE *)this + 60) = 1; /*0x5d1ae6*/
  *((_BYTE *)this + 61) = 0; /*0x5d1ae9*/
  this->u32_C = &DynamicVectorClass<MSSfx *>::`vftable'; /*0x5d1aec*/
  *((_DWORD *)this + 17) = 10; /*0x5d1af2*/
  this->q010 = 0; /*0x5d1af9*/
  v3 = (void (__thiscall **)(void **, int, _DWORD))*p_MSEngine_field_0x8; /*0x5d1afc*/
  *(_DWORD *)this->__pad_0 = &MSEngine::`vftable'; /*0x5d1b01*/
  this->MSEngine_field_0x4 = 0; /*0x5d1b07*/
  v3[2](p_MSEngine_field_0x8, 20, 0); /*0x5d1b0a*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 6) + 12))((char *)this + 24); /*0x5d1b11*/
  (*(void (__thiscall **)(char *))(this->u32_C + 12))((char *)this + 48); /*0x5d1b18*/
  return this->__pad_0; /*0x5d1b1b*/
}



// ==== 0x005D1B30  MSEngine::Destruct  this=MSEngine  sig=csp ====
int __thiscall MSEngine::Destruct(MSEngine *this)
{
  int v2; // ebp
  int v3; // eax
  void *v4; // edi
  char *v5; // ebp
  int i; // edi
  void (__thiscall ***v7)(_DWORD, int); // ecx
  char *v8; // edi
  void (__thiscall **MSEngine_field_0x8)(void **); // edx
  void **p_MSEngine_field_0x8; // esi
  void *v11; // eax
  void *v12; // eax
  int result; // eax

  v2 = 0; /*0x5d1b37*/
  for ( *(_DWORD *)this->__pad_0 = &MSEngine::`vftable'; v2 < this->q010; ++v2 ) /*0x5d1b45*/
  {
    v3 = this->IsAllocated; /*0x5d1b47*/
    v4 = *(void **)(v3 + 4 * v2); /*0x5d1b4a*/
    if ( v4 ) /*0x5d1b4f*/
    {
      MSEngine::DestroyData(*(MSEngine **)(v3 + 4 * v2)); /*0x5d1b53*/
      __3_YAXPAX_Z(v4); /*0x5d1b59*/
    }
  }
  v5 = (char *)this + 48; /*0x5d1b6c*/
  (*(void (__thiscall **)(char *))(this->u32_C + 12))((char *)this + 48); /*0x5d1b71*/
  for ( i = 0; i < this->q00A; ++i ) /*0x5d1b7b*/
  {
    v7 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 7) + 4 * i); /*0x5d1b80*/
    if ( v7 ) /*0x5d1b85*/
      (**v7)(v7, 1); /*0x5d1b8b*/
  }
  v8 = (char *)this + 24; /*0x5d1b98*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 6) + 12))((char *)this + 24); /*0x5d1b9d*/
  MSEngine_field_0x8 = (void (__thiscall **)(void **))this->MSEngine_field_0x8; /*0x5d1ba0*/
  p_MSEngine_field_0x8 = &this->MSEngine_field_0x8; /*0x5d1ba3*/
  MSEngine_field_0x8[3](p_MSEngine_field_0x8); /*0x5d1ba8*/
  v11 = (void *)*((_DWORD *)v5 + 1); /*0x5d1bab*/
  *(_DWORD *)v5 = &VectorClass<MSSfx *>::`vftable'; /*0x5d1bae*/
  if ( v11 && v5[13] ) /*0x5d1bb9*/
  {
    __3_YAXPAX_Z(v11); /*0x5d1bbf*/
    *((_DWORD *)v5 + 1) = 0; /*0x5d1bc7*/
  }
  v5[13] = 0; /*0x5d1bca*/
  *((_DWORD *)v5 + 2) = 0; /*0x5d1bcd*/
  v12 = (void *)*((_DWORD *)v8 + 1); /*0x5d1bd0*/
  *(_DWORD *)v8 = &VectorClass<MSAnim *>::`vftable'; /*0x5d1bd3*/
  if ( v12 && v8[13] ) /*0x5d1bdd*/
  {
    __3_YAXPAX_Z(v12); /*0x5d1be3*/
    *((_DWORD *)v8 + 1) = 0; /*0x5d1beb*/
  }
  v8[13] = 0; /*0x5d1bee*/
  *((_DWORD *)v8 + 2) = 0; /*0x5d1bf1*/
  result = (int)p_MSEngine_field_0x8[1]; /*0x5d1bf4*/
  *p_MSEngine_field_0x8 = &VectorClass<TRect<int>>::`vftable'; /*0x5d1bf7*/
  if ( result && *((_BYTE *)p_MSEngine_field_0x8 + 13) ) /*0x5d1c01*/
  {
    __3_YAXPAX_Z((void *)result); /*0x5d1c07*/
    p_MSEngine_field_0x8[1] = 0; /*0x5d1c0f*/
  }
  *((_BYTE *)p_MSEngine_field_0x8 + 13) = 0; /*0x5d1c12*/
  p_MSEngine_field_0x8[2] = 0; /*0x5d1c15*/
  return result; /*0x5d1c18*/
}



// ==== 0x005D1C20  PriorityQueue::Add  this=PriorityQueue  sig=csp ====
int __thiscall PriorityQueue::Add(PriorityQueue *this, int a2)
{
  int v2; // eax
  PriorityQueue *v3; // esi
  int v4; // ecx
  int PriorityQueue_field_0x04; // eax
  int v6; // eax
  int v7; // edx

  if ( !a2 ) /*0x5d1c27*/
    return -1; /*0x5d1c27*/
  v2 = *((_DWORD *)this + 10); /*0x5d1c29*/
  v3 = this + 3; /*0x5d1c2c*/
  v4 = *((_DWORD *)this + 8); /*0x5d1c2f*/
  if ( v2 >= v4 ) /*0x5d1c34*/
  {
    if ( !BYTE1(v3[1].PriorityQueue_field_0x04) && v4 ) /*0x5d1c3f*/
      return -1; /*0x5d1c3f*/
    PriorityQueue_field_0x04 = v3[2].PriorityQueue_field_0x04; /*0x5d1c41*/
    if ( PriorityQueue_field_0x04 <= 0 /*0x5d1c51*/
      || !(*(unsigned __int8 (__thiscall **)(PriorityQueue *, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 8))(
            v3,
            v4 + PriorityQueue_field_0x04,
            0) )
    {
      return -1; /*0x5d1c7b*/
    }
  }
  v6 = *(_DWORD *)v3[2].__pad_0; /*0x5d1c58*/
  v7 = v3->PriorityQueue_field_0x04; /*0x5d1c5b*/
  *(_DWORD *)v3[2].__pad_0 = v6 + 1; /*0x5d1c61*/
  *(_DWORD *)(v7 + 4 * v6) = a2; /*0x5d1c68*/
  return (*(int (__thiscall **)(PriorityQueue *, int *))(*(_DWORD *)v3->__pad_0 + 16))(v3, &a2); /*0x5d1c77*/
}



// ==== 0x005D1C90  ObjectClass::UI_Load_5D1C90  this=ObjectClass  sig=csp ====
int __thiscall UI_Load_5D1C90(
        ObjectClass *this,
        int (__thiscall ***a2)(_DWORD, int),
        int (__thiscall ***a3)(_DWORD, int))
{
  int *p_nextArrayIndex; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // ecx

  p_nextArrayIndex = &this->?; /*0x5d1c94*/
  v4 = (*(int (__thiscall **)(int *, _DWORD))(this->? + 16))(&this->?, &a3); /*0x5d1ca5*/
  v5 = p_nextArrayIndex[2]; /*0x5d1ca7*/
  if ( p_nextArrayIndex[4] < v5 /*0x5d1cc9*/
    || (*((_BYTE *)p_nextArrayIndex + 13) || !v5)
    && (v6 = p_nextArrayIndex[5], v6 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_nextArrayIndex + 8))(p_nextArrayIndex, v5 + v6, 0) )
  {
    v7 = p_nextArrayIndex[4]; /*0x5d1cd0*/
    if ( v4 < v7 - 1 ) /*0x5d1cd8*/
      memcpy( /*0x5d1cf7*/
        (void *)(p_nextArrayIndex[1] + 4 * v4 + 8),
        (const void *)(p_nextArrayIndex[1] + 4 * (v4 + 1)),
        4 * (v7 + 0x3FFFFFFF * (v4 + 1)));
    *(_DWORD *)(p_nextArrayIndex[1] + 4 * v4 + 4) = a2; /*0x5d1d07*/
    ++p_nextArrayIndex[4]; /*0x5d1d0f*/
  }
  result = (int)a3; /*0x5d1d12*/
  a2 = a3; /*0x5d1d18*/
  if ( a3 ) /*0x5d1d1c*/
  {
    result = (*(int (__thiscall **)(int *, _DWORD))(*p_nextArrayIndex + 16))(p_nextArrayIndex, &a2); /*0x5d1d27*/
    if ( result != -1 ) /*0x5d1d2d*/
    {
      result = (*(int (__thiscall **)(int *, _DWORD))(*p_nextArrayIndex + 16))(p_nextArrayIndex, &a2); /*0x5d1d38*/
      if ( result != -1 ) /*0x5d1d3e*/
      {
        v9 = p_nextArrayIndex[4]; /*0x5d1d40*/
        if ( result < v9 ) /*0x5d1d45*/
        {
          v10 = v9 - 1; /*0x5d1d47*/
          for ( p_nextArrayIndex[4] = v10; /*0x5d1d4d*/
                result < p_nextArrayIndex[4];
                *(_DWORD *)(p_nextArrayIndex[1] + 4 * result - 4) = *(_DWORD *)(p_nextArrayIndex[1] + 4 * result) )
          {
            ++result; /*0x5d1d52*/
          }
        }
      }
      if ( a2 ) /*0x5d1d67*/
        return (**a2)(a2, 1); /*0x5d1d6d*/
    }
  }
  return result; /*0x5d1d6f*/
}



// ==== 0x005D1D80  Session::RemoveTeam  this=ObjectClass  sig=csp ====
int __thiscall Session::RemoveTeam(Session *this, int (__thiscall ***a2)(_DWORD, int))
{
  int result; // eax
  void **v3; // esi
  int v4; // ecx
  void *v5; // ecx

  result = (int)a2; /*0x5d1d80*/
  if ( a2 ) /*0x5d1d87*/
  {
    v3 = &this->field_18; /*0x5d1d8c*/
    result = (*((int (__thiscall **)(void **, _DWORD))this->field_18 + 4))(&this->field_18, &a2); /*0x5d1d96*/
    if ( result != -1 ) /*0x5d1d9c*/
    {
      result = (*((int (__thiscall **)(void **, _DWORD))*v3 + 4))(v3, &a2); /*0x5d1da7*/
      if ( result != -1 ) /*0x5d1dad*/
      {
        v4 = (int)v3[4]; /*0x5d1daf*/
        if ( result < v4 ) /*0x5d1db4*/
        {
          v5 = (void *)(v4 - 1); /*0x5d1db6*/
          for ( v3[4] = v5; result < (int)v3[4]; *((_DWORD *)v3[1] + result - 1) = *((_DWORD *)v3[1] + result) ) /*0x5d1dbc*/
            ++result; /*0x5d1dc1*/
        }
      }
      if ( a2 ) /*0x5d1dd6*/
        return (**a2)(a2, 1); /*0x5d1ddc*/
    }
  }
  return result; /*0x5d1dde*/
}



// ==== 0x005D1DF0  MSEngine::ProcessEvents  this=MSEngine  sig=csp ====
int __thiscall MSEngine::ProcessEvents(MSEngine *this, char a2, int a3)
{
  int v4; // ebx
  int result; // eax
  int v6; // ecx

  Timer::GetTicks(); /*0x5d1dfc*/
  v4 = a3; /*0x5d1e01*/
  while ( 1 ) /*0x5d1e19*/
  {
    result = (*(int (__thiscall **)(char *, char *))(*((_DWORD *)this + 6) + 16))((char *)this + 24, &a2); /*0x5d1e19*/
    if ( result == -1 ) /*0x5d1e1f*/
      break; /*0x5d1e1f*/
    v6 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * result); /*0x5d1e24*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6); /*0x5d1e29*/
    if ( (_BYTE)result || !v4 ) /*0x5d1e32*/
      break; /*0x5d1e32*/
    GameClass::FrameLoop((GameClass *)this, 1); /*0x5d1e38*/
  }
  return result; /*0x5d1e3f*/
}



// ==== 0x005D1E50  DSurface::Flip2  this=ObjectClass  sig=ida-proto ====
int sub_5D1E50()
{
  g_LoadScreenFlag = 1; /*0x5d1e55*/
  return DSurface::RenderToSurface(g_DSurface_Hidden); /*0x5d1e62*/
}



// ==== 0x005D1E70  DSurface::RenderToSurface  this=DSurface  sig=csp ====
int __thiscall DSurface::RenderToSurface(DSurface *this, int *a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int i; // ebp
  int v12; // ecx
  int *v13; // eax
  int result; // eax
  int j; // ebp
  int v16; // ecx
  void (__thiscall ***v17)(_DWORD, int); // ecx
  int DSurface_field_0x28; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // [esp+3Ch] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-1Ch]
  int v23; // [esp+44h] [ebp-18h]
  int v24; // [esp+48h] [ebp-14h]
  _BYTE v25[16]; // [esp+4Ch] [ebp-10h] BYREF

  if ( g_LoadScreenFlag == 1 ) /*0x5d1e83*/
  {
    g_LoadScreenFlag = 0; /*0x5d1e89*/
    (*(void (__thiscall **)(int *, _DWORD))(*a2 + 24))(a2, 0); /*0x5d1e96*/
    v3 = (int *)(*(int (__thiscall **)(DSurface *, _BYTE *))(DSurface_Alternate->DSurface_field_0x0 + 120))( /*0x5d1ea6*/
                  DSurface_Alternate,
                  v25);
    v21 = *v3; /*0x5d1eab*/
    v22 = v3[1]; /*0x5d1eb2*/
    v23 = v3[2]; /*0x5d1eb9*/
    v4 = v3[3]; /*0x5d1ebf*/
    v5 = *a2; /*0x5d1ec2*/
    v24 = v4; /*0x5d1ec4*/
    v6 = (*(int (__thiscall **)(int *))(v5 + 124))(a2); /*0x5d1ec8*/
    v7 = *a2; /*0x5d1ed6*/
    v21 = (v6 - v23) / 2; /*0x5d1eda*/
    v8 = (*(int (__thiscall **)(int *))(v7 + 128))(a2); /*0x5d1ede*/
    v9 = *a2; /*0x5d1ee8*/
    v22 = (v8 - v24) / 2; /*0x5d1ef9*/
    v10 = (*(int (__stdcall **)(_BYTE *, DSurface *, int *, _DWORD, int))(DSurface_Alternate->DSurface_field_0x0 + 120))( /*0x5d1f0c*/
            v25,
            DSurface_Alternate,
            &v21,
            0,
            1);
    (*(void (__thiscall **)(int *, int))(v9 + 8))(a2, v10); /*0x5d1f12*/
    for ( i = 0; i < this->DSurface_field_0x28; ++i ) /*0x5d1f1c*/
    {
      v12 = *(_DWORD *)(this->DSurface_field_0x1C + 4 * i); /*0x5d1f24*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v12 + 20))(v12, a2, 0); /*0x5d1f29*/
    }
    this->DSurface_field_0x4 = 0; /*0x5d1f38*/
    v13 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*a2 + 120))(a2, v25); /*0x5d1f44*/
    Surface::CopyRect((XSurface *)this, v13); /*0x5d1f4a*/
    (*(void (__thiscall **)(DSurface *, int *))(this->DSurface_field_0x0 + 4))(this, a2); /*0x5d1f54*/
  }
  result = this->DSurface_field_0x28; /*0x5d1f57*/
  for ( j = 0; j < result; ++j ) /*0x5d1f5e*/
  {
    v16 = *(_DWORD *)(this->DSurface_field_0x1C + 4 * j); /*0x5d1f63*/
    if ( (*(unsigned __int8 (__thiscall **)(int, int *, int *))(*(_DWORD *)v16 + 16))(v16, a2, &v21) == 1 ) /*0x5d1f73*/
    {
      v17 = *(void (__thiscall ****)(_DWORD, int))(this->DSurface_field_0x1C + 4 * j); /*0x5d1f78*/
      if ( v17 ) /*0x5d1f7d*/
        (**v17)(v17, 1); /*0x5d1f83*/
      DSurface_field_0x28 = this->DSurface_field_0x28; /*0x5d1f85*/
      if ( j < DSurface_field_0x28 ) /*0x5d1f8a*/
      {
        v19 = DSurface_field_0x28 - 1; /*0x5d1f8c*/
        v20 = j; /*0x5d1f8f*/
        for ( this->DSurface_field_0x28 = v19; /*0x5d1f96*/
              v20 < this->DSurface_field_0x28;
              *(_DWORD *)(this->DSurface_field_0x1C + 4 * v20 - 4) = *(_DWORD *)(this->DSurface_field_0x1C + 4 * v20) )
        {
          ++v20; /*0x5d1f9b*/
        }
      }
    }
    Surface::CopyRect((XSurface *)this, &v21); /*0x5d1fb1*/
    result = this->DSurface_field_0x28; /*0x5d1fb6*/
  }
  return result; /*0x5d1fbe*/
}



// ==== 0x005D1FD0  Surface::CopyRect  this=Surface  sig=csp ====
_DWORD *__thiscall Surface::CopyRect(XSurface *this, int *a2)
{
  _DWORD *result; // eax
  int v4; // ebx
  int Width; // ebp
  int v6; // edi
  int v7; // ecx
  int *v8; // eax
  int v9; // edx
  int v10; // edx
  int *v11; // ebp
  int v12; // esi
  int v13; // ebx
  int v14; // ebp
  int v15; // edx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // edi
  _DWORD *v21; // edx
  int v22; // ecx
  int v23; // ebx
  int *LockCount; // ebp
  int v25; // edi
  int v26; // esi
  int v27; // edx
  int v28; // esi
  int v29; // edx
  int v30; // edx
  int v31; // eax
  int *v32; // ecx
  int v33; // edx
  int v34; // [esp+10h] [ebp-2Ch]
  int v35; // [esp+10h] [ebp-2Ch]
  int v37; // [esp+18h] [ebp-24h]
  int v38; // [esp+18h] [ebp-24h]
  int v39; // [esp+1Ch] [ebp-20h]
  int v40; // [esp+1Ch] [ebp-20h]
  int v41; // [esp+20h] [ebp-1Ch]
  int v42; // [esp+24h] [ebp-18h]
  int v43; // [esp+28h] [ebp-14h]
  int v44; // [esp+2Ch] [ebp-10h] BYREF
  int v45; // [esp+30h] [ebp-Ch]
  int v46; // [esp+34h] [ebp-8h]
  _DWORD *v47; // [esp+38h] [ebp-4h]
  char v48; // [esp+40h] [ebp+4h]
  int *v49; // [esp+40h] [ebp+4h]
  unsigned int v50; // [esp+40h] [ebp+4h]

  result = this->__pad_0; /*0x5d1fdc*/
  v4 = a2[2]; /*0x5d1fde*/
  v37 = v4; /*0x5d1fe8*/
  if ( v4 <= 0 ) /*0x5d1fec*/
    return result; /*0x5d1fec*/
  v39 = a2[3]; /*0x5d1ff7*/
  if ( v39 <= 0 ) /*0x5d1ffb*/
    return result; /*0x5d1ffb*/
  Width = this->Width; /*0x5d2001*/
  v34 = 0; /*0x5d2004*/
  v41 = Width; /*0x5d200a*/
  if ( Width <= 0 ) /*0x5d200e*/
  {
LABEL_18:
    if ( Width >= result[4] ) /*0x5d207c*/
    {
      v22 = 0; /*0x5d2165*/
      v50 = -1; /*0x5d2169*/
      v44 = 0; /*0x5d2171*/
      v45 = 0; /*0x5d2175*/
      v46 = 0; /*0x5d2179*/
      v47 = 0; /*0x5d217d*/
      v35 = 0; /*0x5d2181*/
      if ( Width > 0 ) /*0x5d2185*/
      {
        v23 = *a2; /*0x5d218b*/
        v42 = *a2; /*0x5d2191*/
        v43 = *a2 + v37; /*0x5d219b*/
        v38 = a2[1]; /*0x5d21a3*/
        v40 = v39 + v38; /*0x5d21a9*/
        LockCount = (int *)this->LockCount; /*0x5d21b1*/
        while ( 1 ) /*0x5d21c0*/
        {
          v25 = LockCount[1]; /*0x5d21c0*/
          v26 = *LockCount + LockCount[2]; /*0x5d21c6*/
          v27 = v25 + LockCount[3]; /*0x5d21c8*/
          if ( v23 >= *LockCount ) /*0x5d21cc*/
            v23 = *LockCount; /*0x5d21ce*/
          if ( v38 < v25 ) /*0x5d21d6*/
            v25 = v38; /*0x5d21d8*/
          if ( v43 > v26 ) /*0x5d21e0*/
            v26 = v43; /*0x5d21e2*/
          v28 = v26 - v23; /*0x5d21e8*/
          if ( v40 > v27 ) /*0x5d21ec*/
            v27 = v40; /*0x5d21ee*/
          v29 = v27 - v25; /*0x5d21f0*/
          if ( v28 * v29 < v50 ) /*0x5d21fb*/
          {
            v22 = v35; /*0x5d21fd*/
            v50 = v28 * v29; /*0x5d2201*/
            v44 = v23; /*0x5d2205*/
            v45 = v25; /*0x5d2209*/
            v46 = v28; /*0x5d220d*/
            v47 = (_DWORD *)v29; /*0x5d2211*/
          }
          LockCount += 4; /*0x5d221e*/
          if ( ++v35 >= v41 ) /*0x5d2227*/
            break; /*0x5d2227*/
          v23 = v42; /*0x5d21b6*/
        }
        result = this->__pad_0; /*0x5d2229*/
      }
      v30 = result[3]; /*0x5d222d*/
      v31 = v45; /*0x5d2230*/
      v32 = (int *)(v30 + 16 * v22); /*0x5d2237*/
      *v32 = v44; /*0x5d223d*/
      v33 = v46; /*0x5d223f*/
      v32[1] = v31; /*0x5d2243*/
      result = v47; /*0x5d2246*/
      v32[2] = v33; /*0x5d224a*/
      v32[3] = (int)result; /*0x5d224d*/
    }
    else
    {
      v11 = (int *)(result[3] + 16 * Width); /*0x5d208a*/
      *v11 = *a2; /*0x5d208d*/
      v11[1] = a2[1]; /*0x5d2093*/
      v11[2] = a2[2]; /*0x5d2099*/
      v11[3] = a2[3]; /*0x5d20a0*/
      ++result[1]; /*0x5d20a8*/
    }
    return result; /*0x5d20af*/
  }
  v6 = *a2; /*0x5d2010*/
  v7 = a2[1]; /*0x5d2012*/
  v8 = (int *)result[3]; /*0x5d2015*/
  while ( 1 ) /*0x5d2020*/
  {
    v48 = 0; /*0x5d2020*/
    v9 = *v8; /*0x5d2024*/
    if ( v6 >= *v8 ) /*0x5d2028*/
    {
      if ( v9 + v8[2] < v6 ) /*0x5d2039*/
        goto LABEL_11; /*0x5d2039*/
    }
    else if ( v6 + v4 < v9 ) /*0x5d202e*/
    {
      goto LABEL_11; /*0x5d202e*/
    }
    v48 = 1; /*0x5d203b*/
LABEL_11:
    v10 = v8[1]; /*0x5d2040*/
    if ( v7 >= v10 ) /*0x5d2045*/
    {
      if ( v10 + v8[3] < v7 ) /*0x5d205a*/
        goto LABEL_16; /*0x5d205a*/
    }
    else if ( v7 + v39 < v10 ) /*0x5d204f*/
    {
      goto LABEL_16; /*0x5d204f*/
    }
    if ( v48 == 1 ) /*0x5d2061*/
      break; /*0x5d2061*/
LABEL_16:
    v8 += 4; /*0x5d2063*/
    if ( ++v34 >= Width ) /*0x5d2071*/
    {
      result = this->__pad_0; /*0x5d2073*/
      goto LABEL_18; /*0x5d2073*/
    }
    v4 = v37; /*0x5d201a*/
  }
  v12 = *v8; /*0x5d20b6*/
  v13 = v8[1]; /*0x5d20b8*/
  v14 = v6 + v37; /*0x5d20bb*/
  v49 = (int *)(v7 + v39); /*0x5d20c4*/
  v15 = *v8 + v8[2]; /*0x5d20ce*/
  v16 = v13 + v8[3]; /*0x5d20d0*/
  if ( v6 < v12 ) /*0x5d20d4*/
    v12 = v6; /*0x5d20d6*/
  v44 = v12; /*0x5d20da*/
  if ( v7 < v13 ) /*0x5d20de*/
    v13 = v7; /*0x5d20e0*/
  v45 = v13; /*0x5d20e4*/
  if ( v14 <= v15 ) /*0x5d20e8*/
    v46 = v15 - v12; /*0x5d20f4*/
  else
    v46 = v14 - v12; /*0x5d20ec*/
  if ( (int)v49 <= v16 ) /*0x5d20fe*/
    v47 = (_DWORD *)(v16 - v13); /*0x5d210a*/
  else
    v47 = (int *)((char *)v49 - v13); /*0x5d2102*/
  v17 = v34; /*0x5d2116*/
  this->Width = v41 - 1; /*0x5d211d*/
  if ( v34 < v41 - 1 ) /*0x5d2120*/
  {
    v18 = 16 * v34; /*0x5d2124*/
    do /*0x5d214f*/
    {
      v19 = this->LockCount; /*0x5d2127*/
      v20 = (_DWORD *)(v18 + v19 + 16); /*0x5d212a*/
      v21 = (_DWORD *)(v18 + v19); /*0x5d212e*/
      ++v17; /*0x5d2130*/
      v18 += 16; /*0x5d2131*/
      *v21 = *v20; /*0x5d2136*/
      v21[1] = v20[1]; /*0x5d213b*/
      v21[2] = v20[2]; /*0x5d2141*/
      v21[3] = v20[3]; /*0x5d2147*/
    }
    while ( v17 < this->Width ); /*0x5d214f*/
  }
  return Surface::CopyRect(this, &v44); /*0x5d208c*/
}



// ==== 0x005D2260  GameClass::loadScenarioFiles  this=GameClass  sig=csp ====
int __thiscall GameClass::loadScenarioFiles(GameClass *this, int a2)
{
  int result; // eax
  int v4; // ebx
  int v5; // edi
  int *v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+1Ch] [ebp-24h]
  int v8; // [esp+20h] [ebp-20h] BYREF
  int v9; // [esp+24h] [ebp-1Ch]
  int v10; // [esp+28h] [ebp-18h]
  int v11; // [esp+2Ch] [ebp-14h]
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  result = this->GameClass_field_0x4[0]; /*0x5d2267*/
  if ( result > 0 ) /*0x5d226c*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x5d227e*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5d228f*/
    v4 = a2; /*0x5d229b*/
    if ( stru_887598.lineTrailer ) /*0x5d22a1*/
      (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x5d22a8*/
        stru_887598.lineTrailer,
        a2,
        0);
    result = this->GameClass_field_0x4[0]; /*0x5d22ab*/
    v5 = 0; /*0x5d22af*/
    if ( result > 0 ) /*0x5d22b3*/
    {
      result = 0; /*0x5d22b5*/
      v7 = 0; /*0x5d22b8*/
      do /*0x5d231d*/
      {
        v6 = (int *)(*(_DWORD *)&this->__pad_8[4] + result); /*0x5d22c7*/
        v8 = *v6; /*0x5d22ce*/
        v9 = v6[1]; /*0x5d22d5*/
        v10 = v6[2]; /*0x5d22dc*/
        v11 = v6[3]; /*0x5d22e9*/
        v4 = a2; /*0x5d22f3*/
        v8 += Rect.left; /*0x5d22f7*/
        v9 += Rect.top; /*0x5d2301*/
        (*((void (__thiscall **)(DSurface *, int *, int, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 + 2))( /*0x5d2309*/
          g_DSurface_Primary,
          &v8,
          a2,
          v6,
          0,
          1);
        ++v5; /*0x5d2313*/
        result = v7 + 16; /*0x5d2314*/
        v7 += 16; /*0x5d2319*/
      }
      while ( v5 < this->GameClass_field_0x4[0] ); /*0x5d231d*/
    }
    this->GameClass_field_0x4[0] = 0; /*0x5d2320*/
    if ( stru_887598.lineTrailer ) /*0x5d2330*/
      return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x5d2337*/
               stru_887598.lineTrailer,
               v4,
               0);
  }
  return result; /*0x5d233a*/
}



// ==== 0x005D2350  sub_5D2350  this=-  sig=csp ====
int __stdcall sub_5D2350(int a1, int *a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  _DWORD v5[4]; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  result = a2[2]; /*0x5d2359*/
  if ( result > 0 ) /*0x5d235e*/
  {
    result = a2[3]; /*0x5d2364*/
    if ( result > 0 ) /*0x5d2369*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5d237b*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5d238c*/
      if ( dword_887640 ) /*0x5d239e*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_887640 + 60))(dword_887640, a1, 0); /*0x5d23a5*/
      v3 = *a2; /*0x5d23af*/
      v4 = a2[1]; /*0x5d23b3*/
      v5[2] = a2[2]; /*0x5d23b9*/
      v5[3] = a2[3]; /*0x5d23c6*/
      v5[1] = Rect.top + v4; /*0x5d23ce*/
      v5[0] = Rect.left + v3; /*0x5d23de*/
      result = (*(int (__thiscall **)(int, _DWORD *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x5d23e5*/
                 g_DSurface_Primary,
                 v5,
                 a1,
                 a2,
                 0,
                 1);
      if ( dword_887640 ) /*0x5d23f1*/
        return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_887640 + 64))(dword_887640, a1, 0); /*0x5d23f8*/
    }
  }
  return result; /*0x5d23fb*/
}



// ==== 0x005D2410  GameClass::FrameLoop  this=GameClass  sig=csp ====
int __thiscall GameClass::FrameLoop(GameClass *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v6; // eax
  bool v7; // zf
  int result; // eax
  DDraw *v9; // [esp+0h] [ebp-28h]
  int Ticks; // [esp+10h] [ebp-18h]
  int v11; // [esp+18h] [ebp-10h]

  Ticks = Timer::GetTicks(); /*0x5d2428*/
  v11 = 1; /*0x5d242c*/
  do /*0x5d2511*/
  {
    do /*0x5d24dc*/
    {
      Event::Dispatch(); /*0x5d2437*/
      (*(void (__thiscall **)(GameClass *))(*(_DWORD *)this->__pad_0 + 8))(this); /*0x5d2440*/
      DDraw::WaitForIdle(v9); /*0x5d2443*/
      DSurface::RenderToSurface((DSurface *)this, (int *)g_DSurface_Hidden); /*0x5d2451*/
      GameClass::loadScenarioFiles(this, (int)g_DSurface_Hidden); /*0x5d245f*/
      MessageLoop(); /*0x5d2464*/
      if ( !stru_A8EB00.?[412] ) /*0x5d2470*/
      {
        if ( Ticks != -1 ) /*0x5d2478*/
        {
          v3 = Timer::GetTicks() - Ticks; /*0x5d2487*/
          if ( v3 >= v11 ) /*0x5d248d*/
            v4 = 0; /*0x5d2493*/
          else
            v4 = v11 - v3; /*0x5d248f*/
          v11 = v4; /*0x5d2495*/
        }
        DDraw::HandleSuspend((DDraw *)this); /*0x5d249f*/
        Ticks = Timer::GetTicks(); /*0x5d24b3*/
      }
      Sleep(0); /*0x5d24b9*/
      v5 = v11; /*0x5d24bf*/
      if ( Ticks != -1 ) /*0x5d24c5*/
      {
        v6 = Timer::GetTicks() - Ticks; /*0x5d24d0*/
        if ( v6 >= v11 ) /*0x5d24d6*/
          break; /*0x5d24d6*/
        v5 = v11 - v6; /*0x5d24d8*/
      }
    }
    while ( v5 > 0 ); /*0x5d24dc*/
    Ticks = Timer::GetTicks(); /*0x5d24e2*/
    result = a2 - 1; /*0x5d2504*/
    v7 = a2 == 1; /*0x5d2504*/
    v11 = 1; /*0x5d2509*/
    --a2; /*0x5d250d*/
  }
  while ( !v7 ); /*0x5d2511*/
  return result; /*0x5d2517*/
}



// ==== 0x005D2530  DDraw::HandleSuspend  this=DDraw  sig=csp ====
int __thiscall DDraw::HandleSuspend(DDraw *this)
{
  int result; // eax
  int i; // edi
  int v4; // ecx
  int j; // edi
  int v6; // ecx

  LOBYTE(result) = stru_A8EB00.?[412]; /*0x5d2530*/
  if ( stru_A8EB00.?[412] != 1 ) /*0x5d253b*/
  {
    Debug::Log(); /*0x5d2546*/
    for ( i = 0; i < this->u32_28; ++i ) /*0x5d2555*/
    {
      v4 = *(_DWORD *)(this->u32_1C + 4 * i); /*0x5d255a*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x5d255f*/
    }
    while ( !stru_A8EB00.?[412] ) /*0x5d2571*/
    {
      Debug::Log(); /*0x5d257e*/
      Sleep(0x1F4u); /*0x5d258b*/
      MessageLoop(); /*0x5d258d*/
    }
    Debug::Log(); /*0x5d25a0*/
    result = this->u32_28; /*0x5d25a5*/
    for ( j = 0; j < result; ++j ) /*0x5d25af*/
    {
      v6 = *(_DWORD *)(this->u32_1C + 4 * j); /*0x5d25b4*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6); /*0x5d25b9*/
      result = this->u32_28; /*0x5d25bc*/
    }
  }
  return result; /*0x5d25c4*/
}



// ==== 0x005D25D0  ObjectClass::method_5D25D0  this=ObjectClass  sig=csp ====
char __thiscall sub_5D25D0(ObjectClass *this, char *Source, int a3)
{
  Audio *v4; // eax
  char **v5; // edi
  BombClass *attachedBomb; // ecx
  int v7; // eax
  int v8; // eax
  TagClass *attachedTag; // edx

  if ( !Source || !a3 ) /*0x5d25e3*/
    return 0; /*0x5d25e3*/
  v4 = (Audio *)__2_YAPAXI_Z(0xCu); /*0x5d25e7*/
  v5 = v4 ? Audio::SetSoundFileName(v4, Source, a3) : 0;
  attachedBomb = this->attachedBomb; /*0x5d2602*/
  if ( this->ambientSoundController[1] >= (int)attachedBomb ) /*0x5d260d*/
  {
    if ( !BYTE1(this->ambientSoundController[0]) && attachedBomb ) /*0x5d2618*/
      return 0; /*0x5d2618*/
    v7 = this->ambientSoundController[2]; /*0x5d261a*/
    if ( v7 <= 0 /*0x5d262a*/
      || !((unsigned __int8 (__thiscall *)(ObjectClass **, char *, _DWORD))this->nextObject->?)(
            &this->nextObject,
            (char *)attachedBomb + v7,
            0) )
    {
      return 0; /*0x5d264a*/
    }
  }
  v8 = this->ambientSoundController[1]; /*0x5d2631*/
  attachedTag = this->attachedTag; /*0x5d2634*/
  this->ambientSoundController[1] = v8 + 1; /*0x5d263a*/
  *((_DWORD *)&attachedTag->AbstractClass + v8) = v5; /*0x5d263d*/
  return 1; /*0x5d2640*/
}



// ==== 0x005D2650  ObjectClass::method_5D2650  this=ObjectClass  sig=csp ====
void __thiscall sub_5D2650(ObjectClass *this, void *a2, int a3)
{
  int v4; // esi
  int v5; // eax

  if ( a2 ) /*0x5d265c*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x5d265e*/
    {
      v4 = 0; /*0x5d266a*/
      if ( this->ambientSoundController[1] > 0 ) /*0x5d266e*/
      {
        while ( _strcmpi((char *)a2, **((char ***)&this->attachedTag->AbstractClass + v4)) ) /*0x5d2684*/
        {
          if ( ++v4 >= this->ambientSoundController[1] ) /*0x5d268c*/
            return; /*0x5d268c*/
        }
        LOWORD(v5) = Math::RoundToInt((double)a3 * *(float *)&stru_A8EB00.ObjectTypeClass[38]); /*0x5d269f*/
        nullsub_192(v5); /*0x5d26a7*/
      }
    }
  }
}



// ==== 0x005D26C0  Team::ReleaseAll  this=ObjectClass  sig=csp ====
int __thiscall Team::ReleaseAll(Team *this, int a2)
{
  int v3; // esi
  int result; // eax
  int v5; // ecx

  v3 = 0; /*0x5d26c4*/
  result = *(_DWORD *)&this->__pad_0[40]; /*0x5d26c6*/
  if ( result > 0 ) /*0x5d26cb*/
  {
    do /*0x5d26e4*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&this->__pad_0[28] + 4 * v3); /*0x5d26d6*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, a2); /*0x5d26db*/
      result = *(_DWORD *)&this->__pad_0[40]; /*0x5d26de*/
      ++v3; /*0x5d26e1*/
    }
    while ( v3 < result ); /*0x5d26e4*/
  }
  return result; /*0x5d26e7*/
}



// ==== 0x005D26F0  MSEngine::Release  this=MSEngine  sig=csp ====
void MSEngine_Destru::Release(MSEngine *this)
{
  ; /*0x5d26f0*/
}



// ==== 0x005D2700  MSEngine::QueryInterface  this=MSEngine  sig=csp ====
_DWORD *__thiscall MSEngine_Destru::QueryInterface(MSEngine *this, char a2)
{
  MSEngine::Destruct(this); /*0x5d2703*/
  if ( (a2 & 1) != 0 ) /*0x5d270d*/
    __3_YAXPAX_Z(this); /*0x5d2710*/
  return this->__pad_0; /*0x5d271a*/
}



// ==== 0x005D2720  _DynamicVectorClass_PAVMSAnim::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::Destroy(_DynamicVectorClass_PAVMSAnim *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d2726*/
  this->m_10 = 0; /*0x5d2729*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d2730*/
  {
    __3_YAXPAX_Z(v2); /*0x5d2736*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d273e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2741*/
  this->m_8 = 0; /*0x5d2744*/
}



// ==== 0x005D2750  _DynamicVectorClass_PAVMSAnim::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfx::GetItemIndex(_DynamicVectorClass_PAVMSAnim *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d2750*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d2765*/
  else
    return 0; /*0x5d2757*/
}



// ==== 0x005D2770  _VectorClass_PAVMSAnim::Seek  this=VectorClass  sig=csp ====
int __thiscall CampaignProperties_WorldDominationTour_22::Seek(_VectorClass_PAVMSAnim *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d277a*/
}



// ==== 0x005D2780  _DynamicVectorClass_PAVMSSfx::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_Point2D::Destroy(_DynamicVectorClass_PAVMSSfx *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d2786*/
  this->m_10 = 0; /*0x5d2789*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d2790*/
  {
    __3_YAXPAX_Z(v2); /*0x5d2796*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d279e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d27a1*/
  this->m_8 = 0; /*0x5d27a4*/
}



// ==== 0x005D27B0  _DynamicVectorClass_PAVMSSfx::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_Point2D::GetItemIndex(_DynamicVectorClass_PAVMSSfx *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d27b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d27c5*/
  else
    return 0; /*0x5d27b7*/
}



// ==== 0x005D27D0  _VectorClass_PAVMSSfx::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::Get(_VectorClass_PAVMSSfx *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d27da*/
}



// ==== 0x005D27E0  _VectorClass_PAVMSAnim::FindItemIndex  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::FindItemIndex(_VectorClass_PAVMSAnim *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d27e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d27ed*/
  {
    v3 = 0; /*0x5d27ef*/
    if ( m_8 <= 0 ) /*0x5d27f3*/
      return 1; /*0x5d2813*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d27f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d27fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d2804*/
    {
      ++v3; /*0x5d2806*/
      ++v4; /*0x5d2807*/
      if ( v3 >= m_8 ) /*0x5d280c*/
        return 1; /*0x5d280c*/
    }
  }
  return 0; /*0x5d280e*/
}



// ==== 0x005D2820  _VectorClass_PAVMSAnim::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::SetCapacity(_VectorClass_PAVMSAnim *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d282c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d2836*/
    if ( a3 ) /*0x5d283c*/
      v4 = a3; /*0x5d2852*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d284e*/
    LOBYTE(this->m_C) = 1; /*0x5d2856*/
    if ( v4 ) /*0x5d285a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d2865*/
      {
        m_8 = this->m_8; /*0x5d286c*/
        if ( a2 < m_8 ) /*0x5d2871*/
          m_8 = a2; /*0x5d2873*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d2879*/
          ++i; /*0x5d287e*/
        if ( BYTE1(this->m_C) ) /*0x5d288b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d2896*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d289e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d28a7*/
      this->m_8 = a2; /*0x5d28af*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d28b2*/
      return 1; /*0x5d28b8*/
    }
    else
    {
      return 0; /*0x5d285f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSAnim *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d28c2*/
    return 1; /*0x5d28c8*/
  }
}



// ==== 0x005D28D0  _VectorClass_PAVMSAnim::Destroy_0  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::Destroy_0(_VectorClass_PAVMSAnim *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d28dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d28e3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d28eb*/
  }
  BYTE1(this->m_C) = 0; /*0x5d28ee*/
  this->m_8 = 0; /*0x5d28f1*/
}



// ==== 0x005D2900  _VectorClass_PAVMSAnim::Read  this=VectorClass  sig=csp ====
int __thiscall CampaignProperties_WorldDominationTour_22::Read(_VectorClass_PAVMSAnim *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d2900*/
    return 0; /*0x5d2908*/
  m_8 = this->m_8; /*0x5d290e*/
  result = 0; /*0x5d2911*/
  if ( m_8 <= 0 ) /*0x5d2915*/
    return -1; /*0x5d292c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d291b*/
  {
    if ( ++result >= m_8 ) /*0x5d292a*/
      return -1; /*0x5d292a*/
  }
  return result; /*0x5d290a*/
}



// ==== 0x005D2940  _VectorClass_PAVMSAnim::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall CampaignProperties_WorldDominationTour_22::Write(_VectorClass_PAVMSAnim *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d2940*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d2955*/
  else
    return 0; /*0x5d2947*/
}



// ==== 0x005D2960  _DynamicVectorClass_PAVMSAnim::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::SetCapacity_0(_DynamicVectorClass_PAVMSAnim *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d296c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d2972*/
    if ( a3 ) /*0x5d2978*/
      v4 = a3; /*0x5d298e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d298a*/
    LOBYTE(this->m_C) = 1; /*0x5d2992*/
    if ( !v4 ) /*0x5d2996*/
      return 0; /*0x5d2a0a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d2998*/
    {
      m_8 = this->m_8; /*0x5d299f*/
      if ( a2 < m_8 ) /*0x5d29a4*/
        m_8 = a2; /*0x5d29a6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d29ac*/
        ++i; /*0x5d29b1*/
      if ( BYTE1(this->m_C) ) /*0x5d29be*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d29c9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d29d1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d29da*/
    this->m_8 = a2; /*0x5d29e2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d29e5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSAnim *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d29ee*/
  }
  v7 = this->m_8; /*0x5d29f1*/
  if ( v7 < this->m_10 ) /*0x5d29f9*/
    this->m_10 = v7; /*0x5d29fb*/
  return 1; /*0x5d29fe*/
}



// ==== 0x005D2A10  _DynamicVectorClass_PAVMSAnim::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::FindItemIndex_0(_DynamicVectorClass_PAVMSAnim *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d2a10*/
  result = 0; /*0x5d2a13*/
  if ( m_10 <= 0 ) /*0x5d2a18*/
    return -1; /*0x5d2a2f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d2a1e*/
  {
    if ( ++result >= m_10 ) /*0x5d2a2d*/
      return -1; /*0x5d2a2d*/
  }
  return result; /*0x5d2a32*/
}



// ==== 0x005D2A40  _VectorClass_PAVMSSfx::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::Add(_VectorClass_PAVMSSfx *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d2a42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d2a4d*/
  {
    v3 = 0; /*0x5d2a4f*/
    if ( m_8 <= 0 ) /*0x5d2a53*/
      return 1; /*0x5d2a73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d2a55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d2a5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d2a64*/
    {
      ++v3; /*0x5d2a66*/
      ++v4; /*0x5d2a67*/
      if ( v3 >= m_8 ) /*0x5d2a6c*/
        return 1; /*0x5d2a6c*/
    }
  }
  return 0; /*0x5d2a6e*/
}



// ==== 0x005D2A80  _VectorClass_PAVMSSfx::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::Release(_VectorClass_PAVMSSfx *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d2a8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d2a96*/
    if ( a3 ) /*0x5d2a9c*/
      v4 = a3; /*0x5d2ab2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d2aae*/
    LOBYTE(this->m_C) = 1; /*0x5d2ab6*/
    if ( v4 ) /*0x5d2aba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d2ac5*/
      {
        m_8 = this->m_8; /*0x5d2acc*/
        if ( a2 < m_8 ) /*0x5d2ad1*/
          m_8 = a2; /*0x5d2ad3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d2ad9*/
          ++i; /*0x5d2ade*/
        if ( BYTE1(this->m_C) ) /*0x5d2aeb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d2af6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d2afe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d2b07*/
      this->m_8 = a2; /*0x5d2b0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d2b12*/
      return 1; /*0x5d2b18*/
    }
    else
    {
      return 0; /*0x5d2abf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSSfx *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d2b22*/
    return 1; /*0x5d2b28*/
  }
}



// ==== 0x005D2B30  _VectorClass_PAVMSSfx::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::Remove(_VectorClass_PAVMSSfx *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d2b3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d2b43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2b4b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2b4e*/
  this->m_8 = 0; /*0x5d2b51*/
}



// ==== 0x005D2B60  _VectorClass_PAVMSSfx::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::GetSize(_VectorClass_PAVMSSfx *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d2b60*/
    return 0; /*0x5d2b68*/
  m_8 = this->m_8; /*0x5d2b6e*/
  result = 0; /*0x5d2b71*/
  if ( m_8 <= 0 ) /*0x5d2b75*/
    return -1; /*0x5d2b8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d2b7b*/
  {
    if ( ++result >= m_8 ) /*0x5d2b8a*/
      return -1; /*0x5d2b8a*/
  }
  return result; /*0x5d2b6a*/
}



// ==== 0x005D2BA0  _VectorClass_PAVMSSfx::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfx::GetCapacity(_VectorClass_PAVMSSfx *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d2ba0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d2bb5*/
  else
    return 0; /*0x5d2ba7*/
}



// ==== 0x005D2BC0  _DynamicVectorClass_PAVMSSfx::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Point2D::SetCapacity(_DynamicVectorClass_PAVMSSfx *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d2bcc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d2bd2*/
    if ( a3 ) /*0x5d2bd8*/
      v4 = a3; /*0x5d2bee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d2bea*/
    LOBYTE(this->m_C) = 1; /*0x5d2bf2*/
    if ( !v4 ) /*0x5d2bf6*/
      return 0; /*0x5d2c6a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d2bf8*/
    {
      m_8 = this->m_8; /*0x5d2bff*/
      if ( a2 < m_8 ) /*0x5d2c04*/
        m_8 = a2; /*0x5d2c06*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d2c0c*/
        ++i; /*0x5d2c11*/
      if ( BYTE1(this->m_C) ) /*0x5d2c1e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d2c29*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d2c31*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d2c3a*/
    this->m_8 = a2; /*0x5d2c42*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d2c45*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSSfx *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d2c4e*/
  }
  v7 = this->m_8; /*0x5d2c51*/
  if ( v7 < this->m_10 ) /*0x5d2c59*/
    this->m_10 = v7; /*0x5d2c5b*/
  return 1; /*0x5d2c5e*/
}



// ==== 0x005D2C70  _DynamicVectorClass_PAVMSSfx::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_Point2D::FindItemIndex(_DynamicVectorClass_PAVMSSfx *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d2c70*/
  result = 0; /*0x5d2c73*/
  if ( m_10 <= 0 ) /*0x5d2c78*/
    return -1; /*0x5d2c8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d2c7e*/
  {
    if ( ++result >= m_10 ) /*0x5d2c8d*/
      return -1; /*0x5d2c8d*/
  }
  return result; /*0x5d2c92*/
}



// ==== 0x005D2CA0  _VectorClass_PAVMSAnim::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22::QueryInterface(_VectorClass_PAVMSAnim *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2ca3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnim *>::`vftable'; /*0x5d2ca6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2cb0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2cb8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2cc0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2ccb*/
  this->m_8 = 0; /*0x5d2cd1*/
  if ( (a2 & 1) != 0 ) /*0x5d2cd8*/
    __3_YAXPAX_Z(this); /*0x5d2cdb*/
  return this->__pad_0; /*0x5d2ce5*/
}



// ==== 0x005D2CF0  _DynamicVectorClass_PAVMSAnim::Constructor_VectorClass_MSAnim___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MSSfx::Constructor_VectorClass_MSAnim___(
        _DynamicVectorClass_PAVMSAnim *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2cf3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnim *>::`vftable'; /*0x5d2cf6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2d00*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2d08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2d10*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2d1b*/
  this->m_8 = 0; /*0x5d2d21*/
  if ( (a2 & 1) != 0 ) /*0x5d2d28*/
    __3_YAXPAX_Z(this); /*0x5d2d2b*/
  return this->__pad_0; /*0x5d2d35*/
}



// ==== 0x005D2D40  _VectorClass_PAVMSSfx::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MSSfx::QueryInterface(_VectorClass_PAVMSSfx *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2d43*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSSfx *>::`vftable'; /*0x5d2d46*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2d50*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2d58*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2d60*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2d6b*/
  this->m_8 = 0; /*0x5d2d71*/
  if ( (a2 & 1) != 0 ) /*0x5d2d78*/
    __3_YAXPAX_Z(this); /*0x5d2d7b*/
  return this->__pad_0; /*0x5d2d85*/
}



// ==== 0x005D2D90  _DynamicVectorClass_PAVMSSfx::Constructor_VectorClass_MSSfx___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_Point2D::Constructor_VectorClass_MSSfx___(_DynamicVectorClass_PAVMSSfx *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2d93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSSfx *>::`vftable'; /*0x5d2d96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2da0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2da8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2db0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2dbb*/
  this->m_8 = 0; /*0x5d2dc1*/
  if ( (a2 & 1) != 0 ) /*0x5d2dc8*/
    __3_YAXPAX_Z(this); /*0x5d2dcb*/
  return this->__pad_0; /*0x5d2dd5*/
}



// ==== 0x005D2DE0  MPBattleClass::drawTeamDropdown  this=MPBattleClass  sig=ida-proto ====
int sub_5D2DE0()
{
  dword_ABFBD0 = 0; /*0x5d2de2*/
  dword_ABFBD4 = 0; /*0x5d2de7*/
  dword_ABFBD8 = 0; /*0x5d2dec*/
  dword_ABFBDC = 0; /*0x5d2df1*/
  return 0; /*0x5d2df6*/
}



// ==== 0x005D2E00  CampaignClass::Constructor_1  this=MSFont  sig=csp ====
_BYTE *__thiscall CampaignClass::Constructor_1(CampaignClass *this, __int16 a2)
{
  LOBYTE(this->?) = 0; /*0x5d2e05*/
  BYTE1(this->?) = 0; /*0x5d2e08*/
  BYTE2(this->?) = 0; /*0x5d2e0b*/
  this->AbstractClass = &MSFont::`vftable'; /*0x5d2e13*/
  FontClass::LoadFontResources((int)this, a2); /*0x5d2e19*/
  ++*(_DWORD *)&g_MissionQueueFrame.underParMessage[25]; /*0x5d2e24*/
  return this; /*0x5d2e2b*/
}



// ==== 0x005D2E30  MSFont::Constructor_MSFont  this=MSFont  sig=csp ====
void __thiscall MSFont::Constructor_MSFont(MSFont *this)
{
  char *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *(_DWORD *)this->__pad_0 = &MSFont::`vftable'; /*0x5d2e33*/
  if ( !--*(_DWORD *)&g_MissionQueueFrame.underParMessage[25] ) /*0x5d2e44*/
  {
    v2 = &g_MissionQueueFrame.overParTitle[2]; /*0x5d2e47*/
    do /*0x5d2e5f*/
    {
      if ( *(_DWORD *)v2 ) /*0x5d2e4e*/
      {
        *(_DWORD *)v2 = 0; /*0x5d2e52*/
        v2[4] = 0; /*0x5d2e54*/
      }
      v2 += 8; /*0x5d2e57*/
    }
    while ( (int)v2 < (int)&g_MissionQueueFrame.overParTitle[26] ); /*0x5d2e5f*/
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 6); /*0x5d2e61*/
    if ( v3 ) /*0x5d2e66*/
      (**v3)(v3, 1); /*0x5d2e6c*/
    if ( this->MSFont_field_0x14 ) /*0x5d2e6e*/
    {
      if ( *((_BYTE *)this + 28) == 1 ) /*0x5d2e79*/
        __3_YAXPAX_Z((void *)this->MSFont_field_0x14); /*0x5d2e7c*/
    }
    this->MSFont_field_0x14 = 0; /*0x5d2e84*/
    *((_BYTE *)this + 28) = 0; /*0x5d2e87*/
  }
}



// ==== 0x005D2E90  FontClass::LoadFontResources  this=FontClass  sig=csp ====
char __thiscall FontClass::LoadFontResources(int this, __int16 a2)
{
  int v3; // eax
  char *EntireFile; // eax
  _BYTE *v5; // esi
  int v6; // edi
  _BYTE *v7; // edx
  char v8; // al
  char *v9; // ecx
  char v10; // cl
  char v11; // dl
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v15; // eax
  _DWORD v16[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v17[12]; // [esp+64h] [ebp-14h] BYREF
  int v18; // [esp+70h] [ebp-8h]
  __int16 v19; // [esp+7Ch] [ebp+4h]

  CCFileClass::Construct3((int)v16); /*0x5d2e9c*/
  if ( !dword_ABFBE0 )
  {
    *(_BYTE *)(this + 28) = 0; /*0x5d2eb7*/
    v3 = SearchMIXFile(g_Str_File_FULLFNT3_SHP, 0); /*0x5d2eba*/
    *(_DWORD *)(this + 20) = v3; /*0x5d2ec1*/
    if ( !v3 ) /*0x5d2ec4*/
    {
      FileClass::SetFileName(v16, g_Str_File_FULLFNT3_SHP); /*0x5d2ecf*/
      *(_DWORD *)(this + 20) = CCFileClass::ReadEntireFile(v16); /*0x5d2ee2*/
      *(_BYTE *)(this + 28) = 1; /*0x5d2ee5*/
      Debug::Log(); /*0x5d2ee9*/
    }
    if ( !*(_DWORD *)(this + 20) ) /*0x5d2ef1*/
      goto LABEL_15; /*0x5d2ef1*/
    if ( (_BYTE)a2 == 1 ) /*0x5d2eff*/
      FileClass::SetFileName(v16, aSidefnt3Pal); /*0x5d2f06*/
    else
      FileClass::SetFileName(v16, aFullfnt3Pal); /*0x5d2f11*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v16); /*0x5d2f1a*/
    v5 = EntireFile; /*0x5d2f1f*/
    if ( !EntireFile ) /*0x5d2f23*/
      goto LABEL_15; /*0x5d2f23*/
    v6 = 0; /*0x5d2f2a*/
    v7 = EntireFile + 2; /*0x5d2f2c*/
    do /*0x5d2f7f*/
    {
      LOBYTE(v19) = 4 * *(v7 - 2); /*0x5d2f3b*/
      HIBYTE(v19) = 4 * *(v7 - 1); /*0x5d2f44*/
      v8 = 4 * *v7; /*0x5d2f4d*/
      v9 = (char *)&stru_886080 + 3 * (v6 % 256); /*0x5d2f68*/
      ++v6; /*0x5d2f6f*/
      v7 += 3; /*0x5d2f70*/
      *(_WORD *)v9 = v19; /*0x5d2f73*/
      v9[2] = v8; /*0x5d2f7c*/
    }
    while ( v6 < 256 ); /*0x5d2f7f*/
    v10 = v5[205]; /*0x5d2f87*/
    v11 = v5[204]; /*0x5d2f8d*/
    *(_BYTE *)(this + 14) = 4 * v5[206]; /*0x5d2f9d*/
    *(_BYTE *)(this + 12) = 4 * v11; /*0x5d2fa2*/
    *(_BYTE *)(this + 13) = 4 * v10; /*0x5d2fa5*/
    *(_DWORD *)(this + 16) = ((4 * (unsigned __int8)v5[205]) >> g_BitMask_Blue << g_BitMask_Green) /*0x5d2fff*/
                           | ((4 * (unsigned __int8)v5[206]) >> g_BitMask_Red << g_BitShift_Blue)
                           | ((4 * (unsigned __int8)v5[204]) >> g_BitShift_Green_0 << g_BitShift_Red);
    __3_YAXPAX_Z(v5); /*0x5d3002*/
    v12 = __2_YAPAXI_Z(0x188u); /*0x5d300c*/
    v13 = v12 ? ConvertClass::Construct(v12, (int)&stru_886080, (int)&stru_886080, g_DSurface_Primary, 1, 0) : 0;
    *(_DWORD *)(this + 24) = v13; /*0x5d303c*/
    if ( !v13 ) /*0x5d303f*/
    {
LABEL_15:
      v16[0] = &CCFileClass::`vftable'; /*0x5d3045*/
      v18 = 0; /*0x5d304d*/
      Vector::Clear((int)v17); /*0x5d3051*/
      v16[0] = &off_7E1668; /*0x5d305a*/
      BufferIOFileClass::Dtor(v16); /*0x5d3062*/
      return 0; /*0x5d306f*/
    }
    v15 = *(_DWORD *)(this + 20); /*0x5d3072*/
    *(_DWORD *)(this + 4) = *(__int16 *)(v15 + 2); /*0x5d3079*/
    *(_DWORD *)(this + 8) = *(__int16 *)(v15 + 4); /*0x5d3080*/
  }
  Audio::IsSoundEnabled(); /*0x5d3083*/
  v16[0] = &CCFileClass::`vftable'; /*0x5d308c*/
  v18 = 0; /*0x5d3094*/
  Vector::Clear((int)v17); /*0x5d3098*/
  v16[0] = &off_7E1668; /*0x5d30a1*/
  BufferIOFileClass::Dtor(v16); /*0x5d30a9*/
  return 1; /*0x5d3067*/
}



// ==== 0x005D30C0  ObjectClass::method_5D30C0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5D30C0(ObjectClass *this, wchar_t *String, _DWORD *a3)
{
  wchar_t *v3; // esi
  int v4; // ebx
  int v6; // eax
  char *ptr_8; // ebp
  char *ptr_4; // edi
  int v10; // [esp+Ch] [ebp-4h]

  v3 = String; /*0x5d30c3*/
  v4 = 0; /*0x5d30c7*/
  v10 = 0; /*0x5d30ce*/
  if ( String && (v6 = wcslen(String)) != 0 ) /*0x5d30df*/
  {
    ptr_8 = (char *)this->?; /*0x5d30e2*/
    while ( 1 ) /*0x5d30e9*/
    {
      for ( LOWORD(v6) = *v3; *v3; LOWORD(v6) = *v3 ) /*0x5d30e9*/
      {
        if ( (_WORD)v6 == 10 ) /*0x5d30f5*/
          break; /*0x5d30f5*/
        ++v3; /*0x5d30fc*/
        v6 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 1))(this, v6); /*0x5d30ff*/
        v4 += v6; /*0x5d3102*/
      }
      if ( v4 > v10 ) /*0x5d3110*/
        v10 = v4; /*0x5d3112*/
      if ( *v3 == 10 ) /*0x5d311a*/
      {
        v6 = (int)this->?; /*0x5d311c*/
        ++v3; /*0x5d311f*/
        ptr_8 += v6; /*0x5d3122*/
      }
      if ( !*v3 ) /*0x5d3124*/
        break; /*0x5d3124*/
      v4 = 0; /*0x5d30e7*/
    }
    ptr_4 = (char *)this->?; /*0x5d312a*/
    a3[3] = ptr_8; /*0x5d3137*/
    a3[2] = &ptr_4[v10]; /*0x5d313a*/
    *a3 = 0; /*0x5d3140*/
    a3[1] = 0; /*0x5d3146*/
    return a3; /*0x5d3133*/
  }
  else
  {
    *a3 = 0; /*0x5d3158*/
    a3[1] = 0; /*0x5d315a*/
    a3[2] = 0; /*0x5d315d*/
    a3[3] = 0; /*0x5d3160*/
    return a3; /*0x5d3152*/
  }
}



// ==== 0x005D3170  MSFont::Release  this=MSFont  sig=csp ====
int __thiscall MSFont::Release(MSFont *this, __int16 *a2)
{
  __int16 *v2; // esi
  int v3; // ebp
  __int16 v5; // ax
  int i; // ebx

  v2 = a2; /*0x5d3172*/
  v3 = 0; /*0x5d3176*/
  if ( !a2 ) /*0x5d317d*/
    return 0; /*0x5d31c4*/
  do /*0x5d31b4*/
  {
    v5 = *v2; /*0x5d3180*/
    for ( i = 0; *v2; v5 = *v2 ) /*0x5d3180*/
    {
      if ( v5 == 10 ) /*0x5d318e*/
        break; /*0x5d318e*/
      ++v2; /*0x5d3195*/
      i += (*(int (__thiscall **)(MSFont *, __int16))(*(_DWORD *)this->__pad_0 + 4))(this, v5); /*0x5d319b*/
    }
    if ( *v2 == 10 ) /*0x5d31a9*/
      ++v2; /*0x5d31ab*/
    if ( i > v3 ) /*0x5d31b0*/
      v3 = i; /*0x5d31b2*/
  }
  while ( *v2 ); /*0x5d31b4*/
  return v3; /*0x5d31bb*/
}



// ==== 0x005D31D0  MSFont::AddRef  this=MSFont  sig=csp ====
int __stdcall MSFont::AddRef(MSFont *this)
{
  int v2; // eax
  _DWORD v3[4]; // [esp+4h] [ebp-10h] BYREF

  CharToOemBuffA((LPCSTR)&this, (LPSTR)&this, 1u); /*0x5d31ea*/
  if ( (_BYTE)this == 32 ) /*0x5d31f6*/
    return 8; /*0x5d31f8*/
  if ( (unsigned __int8)this <= 0x20u ) /*0x5d3204*/
    return 0; /*0x5d3243*/
  v2 = (unsigned __int8)this - 33; /*0x5d320f*/
  if ( v2 > 0 ) /*0x5d3214*/
  {
    if ( v2 >= 216 ) /*0x5d321f*/
      v2 = 216; /*0x5d3221*/
  }
  else
  {
    v2 = 0; /*0x5d3216*/
  }
  return Building::GetFoundationSize(v3, 3 * v2 + 2)[2] + 1; /*0x5d31fd*/
}



// ==== 0x005D3250  MSFont::Create  this=MSFont  sig=csp ====
void __thiscall MSFont::Create(MSFont *this, int *a2, unsigned __int8 szSrc, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  int v13[2]; // [esp+4h] [ebp-28h] BYREF
  _DWORD v14[4]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v15[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( (char)szSrc == 176 ) /*0x5d3266*/
    Debug::Log(); /*0x5d326d*/
  CharToOemBuffA((LPCSTR)&szSrc, (LPSTR)&szSrc, 1u); /*0x5d3281*/
  if ( szSrc > 0x20u ) /*0x5d328c*/
  {
    v8 = szSrc - 33; /*0x5d329b*/
    if ( v8 > 0 ) /*0x5d32a0*/
    {
      if ( v8 >= 216 ) /*0x5d32ab*/
        v8 = 216; /*0x5d32ad*/
    }
    else
    {
      v8 = 0; /*0x5d32a2*/
    }
    v9 = 3 * v8; /*0x5d32b4*/
    v10 = *Building::GetFoundationSize(v14, 3 * v8 + 2); /*0x5d32d1*/
    v11 = *a2; /*0x5d32dc*/
    v13[0] = a4 - v10; /*0x5d32ea*/
    v13[1] = a5; /*0x5d32fc*/
    v12 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(v11 + 120))(a2, v15); /*0x5d3300*/
    DrawToSurfaceSHP( /*0x5d3319*/
      (int)a2,
      *((_DWORD *)this + 6),
      this->MSFont_field_0x14,
      a6 + v9,
      v13,
      v12,
      1024,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
}



// ==== 0x005D3330  MSFont::ddtor  this=MSFont  sig=csp ====
__int16 __thiscall MSFont::ddtor(MSFont *this, int a2, _WORD *a3, int a4, int a5, int a6)
{
  _WORD *v6; // esi
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  int *v12; // eax
  CHAR szSrc; // [esp+Ah] [ebp-2Eh] BYREF
  CHAR szDst; // [esp+Bh] [ebp-2Dh] BYREF
  int v16; // [esp+Ch] [ebp-2Ch]
  int v17[2]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v18[4]; // [esp+18h] [ebp-20h] BYREF
  _BYTE v19[16]; // [esp+28h] [ebp-10h] BYREF

  HIWORD(v8) = HIWORD(a4); /*0x5d3333*/
  v6 = a3; /*0x5d3338*/
  v16 = a4; /*0x5d333c*/
  LOWORD(v8) = *a3; /*0x5d3343*/
  if ( *a3 ) /*0x5d3343*/
  {
    do /*0x5d3439*/
    {
      if ( (_WORD)v8 == 10 ) /*0x5d3355*/
      {
        v8 = this->MSFont_field_0x08 + a5; /*0x5d3362*/
        v16 = a4; /*0x5d3364*/
        a5 = v8; /*0x5d3368*/
      }
      else
      {
        if ( (unsigned __int16)v8 > 0x20u ) /*0x5d3375*/
        {
          szSrc = *(_BYTE *)v6; /*0x5d3389*/
          CharToOemBuffA(&szSrc, &szDst, 1u); /*0x5d338d*/
          v9 = szDst - 33; /*0x5d3398*/
          if ( szDst == 33 ) /*0x5d339d*/
          {
            v9 = 0; /*0x5d339f*/
          }
          else if ( v9 >= 216 ) /*0x5d33a8*/
          {
            v9 = 216; /*0x5d33aa*/
          }
          v10 = 3 * v9; /*0x5d33af*/
          v11 = *Building::GetFoundationSize(v18, 3 * v9 + 2); /*0x5d33cb*/
          v17[1] = a5; /*0x5d33e2*/
          v17[0] = v16 - v11; /*0x5d33e7*/
          v12 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 120))(a2, v19); /*0x5d33fa*/
          v8 = DrawToSurfaceSHP( /*0x5d3413*/
                 a2,
                 *((_DWORD *)this + 6),
                 this->MSFont_field_0x14,
                 a6 + v10,
                 v17,
                 v12,
                 1024,
                 0,
                 0,
                 0,
                 1000,
                 0,
                 0,
                 0,
                 0,
                 0);
          v6 = a3; /*0x5d3418*/
        }
        LOWORD(v8) = *v6; /*0x5d341c*/
        v8 = (*(int (__thiscall **)(MSFont *, int))(*(_DWORD *)this->__pad_0 + 4))(this, v8); /*0x5d3424*/
        v16 += v8; /*0x5d3427*/
      }
      LOWORD(v8) = v6[1]; /*0x5d342b*/
      a3 = ++v6; /*0x5d3435*/
    }
    while ( (_WORD)v8 ); /*0x5d3439*/
  }
  return v8; /*0x5d3441*/
}



// ==== 0x005D3450  MSFont::QueryInterface  this=MSFont  sig=csp ====
void *__thiscall MSFont::QueryInterface(MSFont *this, char a2)
{
  MSFont::Constructor_MSFont(this); /*0x5d3453*/
  if ( (a2 & 1) != 0 ) /*0x5d345d*/
    __3_YAXPAX_Z(this); /*0x5d3460*/
  return this; /*0x5d346a*/
}



// ==== 0x005D3470  MPBattleClass::populateTeamDropdownForPlayer  this=MPBattleClass  sig=ida-proto ====
int sub_5D3470()
{
  dword_ABFC00 = 0; /*0x5d3472*/
  dword_ABFC04 = 0; /*0x5d3477*/
  dword_ABFC08 = 0; /*0x5d347c*/
  dword_ABFC0C = 0; /*0x5d3481*/
  return 0; /*0x5d3486*/
}



// ==== 0x005D3490  Dialog::ShowMessageBox  this=Dialog  sig=csp ====
int Dialog::ShowMessageBox(int *this, _WORD *lParam, _WORD *a3, _WORD *a4, _WORD *a5, int a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  unsigned __int16 v9; // cx
  HWND Dialog; // eax
  HWND v11; // esi
  HWND DlgItem; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  TechnoTypeClass *v16; // ecx
  int v18; // [esp+0h] [ebp-18h]
  char v19; // [esp+Ch] [ebp-Ch]
  char v20; // [esp+Dh] [ebp-Bh]
  char v21; // [esp+Eh] [ebp-Ah]
  char v22; // [esp+Fh] [ebp-9h]
  LONG dwNewLong; // [esp+10h] [ebp-8h] BYREF
  int v24; // [esp+14h] [ebp-4h]

  dwNewLong = -1; /*0x5d349a*/
  v7 = 0; /*0x5d34a6*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640); /*0x5d34ab*/
  v24 = v8; /*0x5d34b3*/
  if ( !this || (v21 = 1, !*(_WORD *)this) ) /*0x5d34b9*/
    v21 = 0; /*0x5d34c3*/
  if ( !lParam || (v22 = 1, !*lParam) ) /*0x5d34d0*/
    v22 = 0; /*0x5d34db*/
  if ( !a3 || (v19 = 1, !*a3) ) /*0x5d34e8*/
    v19 = 0; /*0x5d34f3*/
  if ( !a4 || (v20 = 1, !*a4) ) /*0x5d3500*/
    v20 = 0; /*0x5d350b*/
  Screen::Capture(1, 0, 0, v6); /*0x5d3514*/
  v9 = 206; /*0x5d351d*/
  if ( v20 ) /*0x5d3524*/
  {
    v9 = 289; /*0x5d3526*/
  }
  else if ( v19 ) /*0x5d3533*/
  {
    v9 = 288; /*0x5d3535*/
  }
  Dialog = (HWND)CreateDialog(v9, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_5D36A0, 0); /*0x5d3541*/
  v11 = Dialog; /*0x5d3546*/
  if ( Dialog ) /*0x5d354a*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5d3559*/
    if ( v21 ) /*0x5d3571*/
    {
      DlgItem = GetDlgItem(v11, 1456); /*0x5d3579*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)this); /*0x5d3588*/
    }
    if ( v22 ) /*0x5d3590*/
    {
      v13 = GetDlgItem(v11, 1454); /*0x5d3598*/
      SendMessageA(v13, 0x4B2u, 0, (LPARAM)lParam); /*0x5d35a7*/
      v7 = 1; /*0x5d35a9*/
    }
    if ( v19 ) /*0x5d35b4*/
    {
      v14 = GetDlgItem(v11, 2); /*0x5d35b9*/
      SendMessageA(v14, 0x4B2u, 0, (LPARAM)a3); /*0x5d35c8*/
      v7 = 2; /*0x5d35ca*/
    }
    if ( v20 ) /*0x5d35d5*/
    {
      v15 = GetDlgItem(v11, 1455); /*0x5d35dd*/
      SendMessageA(v15, 0x4B2u, 0, (LPARAM)a4); /*0x5d35ec*/
      v7 = 3; /*0x5d35ee*/
    }
    Dialog::Show(v11); /*0x5d35f5*/
    if ( v7 <= 0 ) /*0x5d35fd*/
    {
      dwNewLong = 0; /*0x5d3653*/
    }
    else
    {
      while ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640) ) /*0x5d3607*/
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x5d3616*/
      while ( dwNewLong < 0 ) /*0x5d362e*/
      {
        if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x5d3630*/
          break; /*0x5d3637*/
        if ( !byte_A8E9A0 ) /*0x5d3640*/
        {
          LOBYTE(v16) = 0; /*0x5d3642*/
          ScreenSaver::Process(v16, v18); /*0x5d3644*/
        }
      }
    }
    Dialog::Destroy(v11); /*0x5d365d*/
    v8 = v24; /*0x5d3662*/
  }
  while ( v8 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640) ) /*0x5d3673*/
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 12))(dword_887640); /*0x5d367d*/
  return dwNewLong; /*0x5d3693*/
}



// ==== 0x005D36A0  sub_5D36A0  this=-  sig=csp ====
int __stdcall sub_5D36A0(HWND hWnd, unsigned int a2, unsigned int a3, int *a4)
{
  int result; // eax
  unsigned int v5; // esi
  _DWORD *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x5d36ba*/
  if ( !result ) /*0x5d36c1*/
  {
    if ( a2 == 273 ) /*0x5d36cd*/
    {
      v5 = HIWORD(a3); /*0x5d36f2*/
      WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x5d36f5*/
      if ( (unsigned __int16)a3 > 0x5AEu ) /*0x5d3709*/
      {
        if ( (unsigned __int16)a3 == 1455 && !v5 ) /*0x5d3742*/
          *WindowLongA = 2; /*0x5d3744*/
      }
      else if ( (unsigned __int16)a3 == 1454 ) /*0x5d370b*/
      {
        if ( !v5 ) /*0x5d372b*/
        {
          *WindowLongA = 0; /*0x5d372d*/
          return 0; /*0x5d3735*/
        }
      }
      else if ( (_WORD)a3 && (unsigned __int16)a3 <= 2u && !v5 ) /*0x5d3718*/
      {
        *WindowLongA = 1; /*0x5d371c*/
        return 0; /*0x5d3726*/
      }
    }
    else if ( a2 == 534 ) /*0x5d36d5*/
    {
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x5d36ea*/
    }
    return 0; /*0x5d374a*/
  }
  return result; /*0x5d36e1*/
}



// ==== 0x005D37C0  sub_5D37C0  this=-  sig=ida-proto ====
int sub_5D37C0()
{
  dword_ABFC18 = 0; /*0x5d37c2*/
  dword_ABFC1C = 0; /*0x5d37c7*/
  dword_ABFC20 = 0; /*0x5d37cc*/
  dword_ABFC24 = 0; /*0x5d37d1*/
  return 0; /*0x5d37d6*/
}



// ==== 0x005D37E0  sub_5D37E0  this=-  sig=ida-proto ====
void sub_5D37E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d37ec*/
  dbl_ABFC30 = Math::Sqrt(v0 + v0); /*0x5d37fe*/
}



// ==== 0x005D3810  MPBattleClass::validateHouse  this=MPBattleClass  sig=ida-proto ====
void sub_5D3810()
{
  dbl_ABFC80 = dbl_ABFC30 / 60.0; /*0x5d381c*/
}



// ==== 0x005D3830  MPBattleClass::validateOwner  this=MPBattleClass  sig=ida-proto ====
void sub_5D3830()
{
  dbl_ABFC68 = 1.0 / dbl_ABFC80; /*0x5d383c*/
}



// ==== 0x005D3850  sub_5D3850  this=-  sig=ida-proto ====
void sub_5D3850()
{
  dbl_ABFC60 = 0.0174532925199433 * 45.0; /*0x5d385c*/
}



// ==== 0x005D3870  sub_5D3870  this=-  sig=ida-proto ====
void sub_5D3870()
{
  dbl_ABFC38 = 0.0174532925199433 * 60.0; /*0x5d387c*/
}



// ==== 0x005D3890  sub_5D3890  this=-  sig=ida-proto ====
void sub_5D3890()
{
  dbl_ABFC10 = 0.0174532925199433 * 90.0; /*0x5d389c*/
}



// ==== 0x005D38B0  sub_5D38B0  this=-  sig=ida-proto ====
__int64 sub_5D38B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFC10 - dbl_ABFC38); /*0x5d38c2*/
  result = Math::RoundToInt(v0 * dbl_ABFC30 * 0.5); /*0x5d38d6*/
  dword_ABFC88 = result; /*0x5d38db*/
  return result; /*0x5d38e0*/
}



// ==== 0x005D38F0  MPBattleClass::validateColor  this=MPBattleClass  sig=ida-proto ====
void sub_5D38F0()
{
  dbl_ABFC40 = Math::ArcTan((double)dword_ABFC88 * 0.00390625); /*0x5d3907*/
}



// ==== 0x005D3920  MPBattleClass::validateStartPosition  this=MPBattleClass  sig=ida-proto ====
void sub_5D3920()
{
  dbl_ABFC58 = Math::ArcTan((double)(2 * dword_ABFC88) / dbl_ABFC30); /*0x5d3942*/
}



// ==== 0x005D3950  MPBattleClass::isDefaultFix  this=MPBattleClass  sig=ida-proto ====
__int64 sub_5D3950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFC88) + 0.5); /*0x5d396b*/
  dword_ABFC7C = result; /*0x5d3970*/
  return result; /*0x5d3976*/
}



// ==== 0x005D3980  MPBattleClass::isDefaultAI  this=MPBattleClass  sig=ida-proto ====
int sub_5D3980()
{
  word_ABFC28 = 0; /*0x5d3982*/
  word_ABFC2A = 0; /*0x5d3988*/
  return 0; /*0x5d398e*/
}



// ==== 0x005D3990  MPBattleClass::randomHumanCountryIndex  this=MPBattleClass  sig=ida-proto ====
int sub_5D3990()
{
  dword_ABFC48 = 0; /*0x5d3992*/
  dword_ABFC4C = 0; /*0x5d3997*/
  dword_ABFC50 = 0; /*0x5d399c*/
  return 0; /*0x5d39a1*/
}



// ==== 0x005D39B0  MPBattleClass::randomAICountryIndex  this=MPBattleClass  sig=ida-proto ====
int sub_5D39B0()
{
  dword_ABFC78 = 0; /*0x5d39b5*/
  dword_ABFC70 = 128; /*0x5d39bf*/
  dword_ABFC74 = 128; /*0x5d39c4*/
  return 128; /*0x5d39c9*/
}



// ==== 0x005D39D0  SessionClass::saveSettings  this=SessionClass  sig=csp ====
_DWORD *__thiscall SessionClass::saveSettings(SessionClass *this)
{
  this->GameMode[0] = 0; /*0x5d39da*/
  this->MPGameMode[0] = 0; /*0x5d39dc*/
  this->unknown_08[0] = 0; /*0x5d39df*/
  this->unknown_0C[0] = 0; /*0x5d39e2*/
  this->unknown_10[0] = 0; /*0x5d39e5*/
  this->unknown_14[0] = 0; /*0x5d39e8*/
  LOBYTE(this->Config[0]) = 0; /*0x5d39eb*/
  BYTE1(this->Config[0]) = 0; /*0x5d39ee*/
  BYTE2(this->Config[0]) = 0; /*0x5d39f1*/
  this->Config[1] = 0; /*0x5d39f4*/
  this->Config[2] = 0; /*0x5d39f7*/
  this->Config[3] = 0; /*0x5d39fa*/
  this->WOLPreferences[11] = 0; /*0x5d39fd*/
  this->WOLPreferences[12] = 0; /*0x5d3a03*/
  LOWORD(this->WOLPreferences[13]) = 0; /*0x5d3a09*/
  this->WOLPreferences[14] = 0; /*0x5d3a10*/
  this->WOLPreferences[15] = 0; /*0x5d3a16*/
  this->WOLPreferences[16] = 0; /*0x5d3a1c*/
  LOWORD(this->Config[4]) = 0; /*0x5d3a22*/
  LOWORD(this->unknown_16C[0]) = 0; /*0x5d3a26*/
  memset32(&this->unknown_8AA[3030], 65537, 7u); /*0x5d3a38*/
  return this->GameMode; /*0x5d3a3c*/
}



// ==== 0x005D3A40  ObjectManager::InitMessageList  this=ObjectManager  sig=csp ====
int __thiscall ObjectManager::InitMessageList(ObjectManager *this)
{
  return MessageListClass::Init((MessageListClass *)this, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640); /*0x5d3a5e*/
}



// ==== 0x005D3A60  MessageListClass::Init  this=MessageListClass  sig=csp ====
int __thiscall MessageListClass::Init(
        MessageListClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12)
{
  int i; // edi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  int DisplayDuration; // eax
  int result; // eax

  *((_DWORD *)this + 177) = a12 - 8; /*0x5d3a72*/
  Debug::Log(); /*0x5d3a78*/
  for ( i = this->MessageCount; this->MessageCount; i = this->MessageCount ) /*0x5d3a7d*/
  {
    this->MessageCount = (*(int (__thiscall **)(int))(*(_DWORD *)i + 36))(i); /*0x5d3a91*/
    if ( i ) /*0x5d3a93*/
      (**(void (__thiscall ***)(int, int))i)(i, 1); /*0x5d3a9b*/
  }
  memset32((char *)this + 5248, 65537, 7u); /*0x5d3ab3*/
  if ( BYTE1(this->MessageTimer[1]) ) /*0x5d3ab5*/
  {
    v14 = (void (__thiscall ***)(_DWORD, int))this->MessageRect[1]; /*0x5d3aba*/
    if ( v14 ) /*0x5d3abf*/
      (**v14)(v14, 1); /*0x5d3ac5*/
    this->MessageRect[1] = 0; /*0x5d3ac7*/
  }
  this->MessageCount = 0; /*0x5d3ad9*/
  this->MaxMessageCount = a2; /*0x5d3adb*/
  this->ScrollOffset = a3; /*0x5d3ade*/
  this->TextColorIndex = a4; /*0x5d3ae1*/
  if ( a4 > 14 ) /*0x5d3ae4*/
    this->TextColorIndex = 14; /*0x5d3ae6*/
  this->DisplayDuration = a5; /*0x5d3af4*/
  if ( a5 > 112 ) /*0x5d3af7*/
    this->DisplayDuration = 112; /*0x5d3af9*/
  this->MessageTimer[0] = 19; /*0x5d3b04*/
  LOBYTE(this->MessageTimer[1]) = a9; /*0x5d3b0b*/
  BYTE1(this->MessageTimer[1]) = 0; /*0x5d3b15*/
  if ( a7 == -1 || a8 == -1 ) /*0x5d3b21*/
  {
    BYTE2(this->MessageTimer[1]) = 1; /*0x5d3b2e*/
    this->MessageTimer[2] = a2; /*0x5d3b32*/
    this->MessageRect[0] = a3; /*0x5d3b35*/
  }
  else
  {
    BYTE2(this->MessageTimer[1]) = 0; /*0x5d3b23*/
    this->MessageTimer[2] = a7; /*0x5d3b26*/
    this->MessageRect[0] = a8; /*0x5d3b29*/
  }
  DisplayDuration = this->DisplayDuration; /*0x5d3b3c*/
  this->MessageRect[1] = 0; /*0x5d3b45*/
  LOWORD(this->MessageRect[2]) = 0; /*0x5d3b48*/
  *((_WORD *)this + 182) = 0; /*0x5d3b4c*/
  *((_DWORD *)this + 172) = 0; /*0x5d3b53*/
  *((_DWORD *)this + 173) = 0; /*0x5d3b59*/
  *((_WORD *)this + 348) = 0; /*0x5d3b5f*/
  *((_DWORD *)this + 175) = a10; /*0x5d3b66*/
  this->q02C = a11; /*0x5d3b6c*/
  if ( a11 >= DisplayDuration ) /*0x5d3b72*/
    this->q02C = DisplayDuration - 1; /*0x5d3b75*/
  result = this->q02C; /*0x5d3b7b*/
  if ( a10 >= result ) /*0x5d3b83*/
    *((_DWORD *)this + 175) = --result; /*0x5d3b86*/
  return result; /*0x5d3b8c*/
}



// ==== 0x005D3BA0  MessageListClass::AddMessage  this=MessageListClass  sig=csp ====
int __thiscall MessageListClass::AddMessage(
        MessageListClass *this,
        wchar_t *Source,
        int a3,
        wchar_t *a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  MessageListClass *Instance; // edi
  int v11; // ebx
  int v12; // ebp
  signed int v13; // eax
  signed int v14; // edi
  int TextColorIndex; // eax
  int MessageCount; // eax
  int i; // edi
  _DWORD *v18; // edi
  _WORD *v19; // eax
  char *v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // ebx
  int v25; // edi
  int v26; // eax
  _WORD *j; // ecx
  char *v28; // ebp
  int ScrollOffset; // edi
  int *v30; // eax
  int v31; // edx
  wchar_t *v32; // eax
  wchar_t k; // cx
  int v34; // [esp+10h] [ebp-14Ch]
  signed int v35; // [esp+14h] [ebp-148h]
  wchar_t String[162]; // [esp+18h] [ebp-144h] BYREF

  Instance = (MessageListClass *)TextRenderer::GetInstance(); /*0x5d3bb8*/
  if ( !a4 ) /*0x5d3bc3*/
    return 0; /*0x5d3bd1*/
  if ( !Instance ) /*0x5d3bd6*/
    return 0; /*0x5d3be4*/
  String[0] = 0; /*0x5d3bee*/
  if ( Source ) /*0x5d3bf7*/
  {
    wcscpy(String, Source); /*0x5d3bff*/
    wcscat(String, asc_8306A4); /*0x5d3c0e*/
  }
  v11 = wcslen(String); /*0x5d3c23*/
  v12 = Text::MeasureWidth((int)String, 0); /*0x5d3c3a*/
  v34 = wcslen(a4); /*0x5d3c42*/
  if ( *((_DWORD *)this + 177) - v12 - 8 <= 0 ) /*0x5d3c56*/
    return 0; /*0x5d3c64*/
  v13 = MessageListClass::CountCharsInWidth(Instance, a4, *((_DWORD *)this + 177) - v12 - 8, 111, 1); /*0x5d3c76*/
  v14 = v13; /*0x5d3c7b*/
  v35 = v13; /*0x5d3c7f*/
  if ( v13 < 0 ) /*0x5d3c83*/
    return 0; /*0x5d3c91*/
  wcsncat(String, a4, v13); /*0x5d3c9b*/
  TextColorIndex = this->TextColorIndex; /*0x5d3ca0*/
  String[v11 + v14] = 0; /*0x5d3caa*/
  if ( TextColorIndex > 0 ) /*0x5d3cb1*/
  {
    MessageCount = this->MessageCount; /*0x5d3cb3*/
    for ( i = 0; MessageCount; MessageCount = (*(int (__thiscall **)(int))(*(_DWORD *)MessageCount + 4))(MessageCount) ) /*0x5d3cb3*/
      ++i; /*0x5d3cbf*/
    if ( BYTE1(this->MessageTimer[1]) && BYTE2(this->MessageTimer[1]) ) /*0x5d3cce*/
      ++i; /*0x5d3cd5*/
    if ( i + 1 > this->TextColorIndex ) /*0x5d3cdc*/
    {
      v18 = (_DWORD *)this->MessageCount; /*0x5d3cde*/
      if ( !this->MessageCount ) /*0x5d3cde*/
        return 0; /*0x5d3cf0*/
      this->MessageCount = (*(int (__thiscall **)(int))(*v18 + 36))(this->MessageCount); /*0x5d3cfa*/
      v19 = (_WORD *)((char *)this + 5248); /*0x5d3cfc*/
      v20 = (char *)this + 712; /*0x5d3d02*/
      v21 = 14; /*0x5d3d08*/
      do /*0x5d3d21*/
      {
        if ( (char *)v18[12] == v20 ) /*0x5d3d10*/
          *v19 = 1; /*0x5d3d12*/
        ++v19; /*0x5d3d17*/
        v20 += 324; /*0x5d3d1a*/
        --v21; /*0x5d3d20*/
      }
      while ( v21 ); /*0x5d3d21*/
      (*(void (__thiscall **)(_DWORD *, int))*v18)(v18, 1); /*0x5d3d29*/
    }
  }
  v22 = __2_YAPAXI_Z(0x4Cu); /*0x5d3d2d*/
  if ( v22 ) /*0x5d3d37*/
  {
    v23 = a6; /*0x5d3d39*/
    BYTE1(v23) = BYTE1(a6) | 0x80; /*0x5d3d47*/
    v24 = MessageListClass::clearMessages(v22, (int)String, this->MaxMessageCount, this->ScrollOffset, a5, v23); /*0x5d3d60*/
  }
  else
  {
    v24 = 0; /*0x5d3d64*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5d3d6e*/
  {
    if ( !a8 && byte_A8D1F9 ) /*0x5d3d82*/
    {
      *(_BYTE *)(v24 + 65) = 1; /*0x5d3d89*/
      goto LABEL_38; /*0x5d3d8c*/
    }
    goto LABEL_32; /*0x5d3d82*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x5d3d9f*/
  {
    if ( a8 || !byte_A8D1F8 ) /*0x5d3dac*/
    {
LABEL_32:
      *(_BYTE *)(v24 + 65) = 0; /*0x5d3d8e*/
      goto LABEL_38; /*0x5d3d93*/
    }
    *(_BYTE *)(v24 + 65) = 1; /*0x5d3db3*/
  }
  else
  {
    *(_BYTE *)(v24 + 65) = a8 == 0; /*0x5d3dbd*/
  }
LABEL_38:
  if ( a7 == -1 ) /*0x5d3dca*/
  {
    *(_DWORD *)(v24 + 36) = 0; /*0x5d3dcc*/
  }
  else
  {
    v25 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5d3dda*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5d3de3*/
      v25 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5d3df5*/
    *(_DWORD *)(v24 + 36) = a7 + v25; /*0x5d3df9*/
  }
  *(_DWORD *)(v24 + 40) = a3; /*0x5d3e03*/
  *(_DWORD *)(v24 + 56) = *((_DWORD *)this + 177); /*0x5d3e0c*/
  v26 = 0; /*0x5d3e0f*/
  for ( j = (_WORD *)((char *)this + 5248); !*j; ++j ) /*0x5d3e11*/
  {
    if ( ++v26 >= 14 ) /*0x5d3e24*/
    {
      if ( v24 ) /*0x5d3e28*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x5d3e30*/
      return 0; /*0x5d3e3e*/
    }
  }
  *((_WORD *)this + v26 + 2624) = 0; /*0x5d3e41*/
  v28 = (char *)this + 324 * v26 + 712; /*0x5d3e58*/
  memset(v28, 0, 0xA0u); /*0x5d3e61*/
  *((_WORD *)this + 162 * v26 + 436) = 0; /*0x5d3e63*/
  wcscpy((wchar_t *)v28, String); /*0x5d3e6b*/
  *(_DWORD *)(v24 + 48) = v28; /*0x5d3e7c*/
  if ( !a8 ) /*0x5d3e7f*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x5d3e98*/
  if ( this->MessageCount ) /*0x5d3e9d*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 16))(v24, this->MessageCount); /*0x5d3ea8*/
  else
    this->MessageCount = v24; /*0x5d3ead*/
  if ( BYTE1(this->MessageTimer[1]) && BYTE2(this->MessageTimer[1]) ) /*0x5d3eb6*/
    ScrollOffset = this->ScrollOffset + this->MessageTimer[0]; /*0x5d3ec3*/
  else
    ScrollOffset = this->ScrollOffset; /*0x5d3ec7*/
  v30 = (int *)this->MessageCount; /*0x5d3eca*/
  if ( this->MessageCount ) /*0x5d3eca*/
  {
    do /*0x5d3edf*/
    {
      v31 = *v30; /*0x5d3ed0*/
      v30[4] = ScrollOffset; /*0x5d3ed4*/
      v30 = (int *)(*(int (__thiscall **)(int *))(v31 + 4))(v30); /*0x5d3ed7*/
      ScrollOffset += this->MessageTimer[0]; /*0x5d3eda*/
    }
    while ( v30 ); /*0x5d3edf*/
  }
  if ( v35 < v34 ) /*0x5d3eeb*/
  {
    v32 = &a4[v35]; /*0x5d3ef4*/
    for ( k = *v32; k; ++v32 ) /*0x5d3ef7*/
    {
      if ( k >= 0x20u ) /*0x5d3f03*/
        break; /*0x5d3f03*/
      k = v32[1]; /*0x5d3f05*/
    }
    if ( *v32 ) /*0x5d3f11*/
      MessageListClass::AddMessage(this, Source, a3, v32, a5, a6, a7, 1); /*0x5d3f44*/
  }
  return v24; /*0x5d3bc5*/
}



// ==== 0x005D3FC0  ScrollingText::AddLine  this=ScrollingText  sig=csp ====
int __thiscall ScrollingText::AddLine(ScrollingText *this, wchar_t *String, int a3, wchar_t *Source, int a5)
{
  wchar_t *v5; // edi
  ScrollingText v7; // ebp
  wchar_t *v9; // esi
  int v10; // edi
  wchar_t *v11; // edi
  int v12; // ebp
  int v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // esi
  ScrollingText v18; // [esp+10h] [ebp-4h]
  wchar_t *Stringa; // [esp+18h] [ebp+4h]
  int v20; // [esp+1Ch] [ebp+8h]

  v5 = String; /*0x5d3fc5*/
  if ( !String ) /*0x5d3fcd*/
    return 0; /*0x5d3fcd*/
  if ( !Source ) /*0x5d3fd5*/
    return 0; /*0x5d3fd5*/
  if ( !*((_BYTE *)this + 24) ) /*0x5d3fd7*/
    return 0; /*0x5d3fd7*/
  v7 = *this; /*0x5d3fde*/
  if ( !*(_DWORD *)this ) /*0x5d3fde*/
    return 0; /*0x5d4026*/
  while ( *(_DWORD *)(*(_DWORD *)&v7 + 40) != a3 ) /*0x5d3ff1*/
  {
LABEL_8:
    v7 = (ScrollingText)(*(int (__thiscall **)(ScrollingText))(**(_DWORD **)&v7 + 4))(v7); /*0x5d400d*/
    if ( !*(_DWORD *)&v7 ) /*0x5d4019*/
      return 0; /*0x5d4019*/
  }
  if ( memcmp(*(const void **)(*(_DWORD *)&v7 + 48), v5, 2 * wcslen(v5)) ) /*0x5d4005*/
  {
    v5 = String; /*0x5d4009*/
    goto LABEL_8; /*0x5d4009*/
  }
  v18 = v7; /*0x5d402d*/
  v9 = (wchar_t *)(*(_DWORD *)(*(_DWORD *)&v7 + 48) + 2 * wcslen(String) + 2); /*0x5d403a*/
  Stringa = (wchar_t *)*((_DWORD *)this + 4); /*0x5d4042*/
  v10 = wcslen(v9); /*0x5d404f*/
  if ( wcslen(Source) + v10 >= (unsigned int)Stringa ) /*0x5d4062*/
  {
    v14 = wcslen(v9) - *((_DWORD *)this + 4); /*0x5d4150*/
    v15 = wcslen(Source) + v14; /*0x5d4158*/
    v16 = wcslen(v9); /*0x5d415a*/
    if ( v16 < v15 ) /*0x5d4164*/
      v16 = v15; /*0x5d4166*/
    WideString::WordWrap(0, v9, v15, v16, 0); /*0x5d4171*/
    wcscat(v9, Source); /*0x5d417c*/
  }
  else
  {
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * (_DWORD)Stringa + 2); /*0x5d4078*/
    TextRenderer::GetInstance(); /*0x5d407a*/
    v20 = Text::MeasureWidth((int)v9, 0); /*0x5d4099*/
    v12 = Text::MeasureWidth(*(_DWORD *)(*(_DWORD *)&v7 + 48), 0) - v20; /*0x5d40aa*/
    wcscpy(v11, v9); /*0x5d40ac*/
    wcscat(v11, Source); /*0x5d40b7*/
    while ( v12 + Text::MeasureWidth((int)v11, 0) >= *((_DWORD *)this + 177) ) /*0x5d40d5*/
    {
      v13 = wcslen(v9); /*0x5d40d8*/
      if ( v13 < 10 ) /*0x5d40e3*/
        v13 = 10; /*0x5d40e5*/
      WideString::WordWrap(0, v9, 10, v13, 0); /*0x5d40f4*/
      wcscpy(v11, v9); /*0x5d40fb*/
      wcscat(v11, Source); /*0x5d4106*/
    }
    __3_YAXPAX_Z(v11); /*0x5d4127*/
    wcscat(v9, Source); /*0x5d4132*/
    v7 = v18; /*0x5d4137*/
  }
  if ( a5 == -1 ) /*0x5d418b*/
  {
    *(_DWORD *)(*(_DWORD *)&v7 + 36) = 0; /*0x5d418e*/
    return 1; /*0x5d4197*/
  }
  else
  {
    v17 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5d41a6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5d41af*/
      v17 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5d41c1*/
    *(_DWORD *)(*(_DWORD *)&v7 + 36) = a5 + v17; /*0x5d41c6*/
    return 1; /*0x5d41cb*/
  }
}



// ==== 0x005D4210  NetworkLobby::MessageList_Append  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::MessageList_Append(NetworkLobby *this, int a2, int a3, wchar_t *String, char a5, int a6)
{
  int v8; // eax
  int i; // edi
  int v10; // edi
  _WORD *v11; // eax
  char *v12; // ecx
  int v13; // edx
  wchar_t *v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // edi
  int *v22; // eax
  int v23; // edx

  if ( this->__pad_C[13] ) /*0x5d4213*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[24] + 80))(*(_DWORD *)&this->__pad_C[24]); /*0x5d421f*/
    return 0; /*0x5d4222*/
  }
  else
  {
    if ( this->__pad_C[14] ) /*0x5d4228*/
    {
      v8 = *(_DWORD *)this->__pad_0; /*0x5d4232*/
      for ( i = 0; v8; v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8) ) /*0x5d4232*/
        ++i; /*0x5d423e*/
      if ( this->__pad_C[13] && this->__pad_C[14] ) /*0x5d424d*/
        ++i; /*0x5d4254*/
      if ( i + 1 > *(_DWORD *)this->__pad_C ) /*0x5d425b*/
      {
        v10 = *(_DWORD *)this->__pad_0; /*0x5d425d*/
        *(_DWORD *)this->__pad_0 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 36))(*(_DWORD *)this->__pad_0); /*0x5d4266*/
        v11 = (_WORD *)((char *)this + 5248); /*0x5d4268*/
        v12 = &this->__pad_3D[651]; /*0x5d426e*/
        v13 = 14; /*0x5d4274*/
        do /*0x5d428d*/
        {
          if ( *(char **)(v10 + 48) == v12 ) /*0x5d427c*/
            *v11 = 1; /*0x5d427e*/
          ++v11; /*0x5d4283*/
          v12 += 324; /*0x5d4286*/
          --v13; /*0x5d428c*/
        }
        while ( v13 ); /*0x5d428d*/
        if ( v10 ) /*0x5d4291*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x5d4299*/
      }
    }
    v14 = String; /*0x5d429b*/
    if ( !String ) /*0x5d42a1*/
      v14 = &g_TypeClass_DefaultString; /*0x5d42a3*/
    *(_WORD *)&this->__pad_3D[635] = a5; /*0x5d42b1*/
    memset(&this->__pad_C[28], 0, 0x144u); /*0x5d42c2*/
    wcscpy((wchar_t *)&this->__pad_C[28], v14); /*0x5d42c5*/
    *(_WORD *)&this->__pad_3D[303] = 0; /*0x5d42cb*/
    v15 = wcslen(v14); /*0x5d42d4*/
    *(_DWORD *)&this->__pad_3D[631] = v15; /*0x5d42db*/
    *(_DWORD *)&this->__pad_3D[627] = v15; /*0x5d42e1*/
    v16 = __2_YAPAXI_Z(0x4Cu); /*0x5d42e7*/
    if ( v16 ) /*0x5d42f1*/
    {
      v17 = a3; /*0x5d42f3*/
      BYTE1(v17) = BYTE1(a3) | 0x80; /*0x5d42fb*/
      v18 = MessageListClass::clearMessages( /*0x5d430b*/
              v16,
              (int)&this->__pad_C[28],
              *(_DWORD *)&this->__pad_C[16],
              *(_DWORD *)&this->__pad_C[20],
              a2,
              v17);
    }
    else
    {
      v18 = 0; /*0x5d4312*/
    }
    v19 = a6; /*0x5d4314*/
    *(_DWORD *)&this->__pad_C[24] = v18; /*0x5d4318*/
    if ( a6 <= 0 ) /*0x5d431d*/
      v19 = *(_DWORD *)&this->__pad_3D[647]; /*0x5d431f*/
    *(_DWORD *)(v18 + 56) = v19; /*0x5d4325*/
    v20 = *(_DWORD *)&this->__pad_C[24]; /*0x5d4328*/
    if ( v20 ) /*0x5d432d*/
    {
      this->__pad_C[13] = 1; /*0x5d432f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 80))(v20); /*0x5d4335*/
    }
    else
    {
      this->__pad_C[13] = 0; /*0x5d433a*/
    }
    Network_Append(); /*0x5d433e*/
    if ( this->__pad_C[14] ) /*0x5d4343*/
    {
      if ( this->__pad_C[13] ) /*0x5d434a*/
        v21 = this->NetworkLobby_field_0x8[0] + *(_DWORD *)&this->__pad_C[8]; /*0x5d4357*/
      else
        v21 = this->NetworkLobby_field_0x8[0]; /*0x5d435b*/
      v22 = *(int **)this->__pad_0; /*0x5d435e*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x5d435e*/
      {
        do /*0x5d4373*/
        {
          v23 = *v22; /*0x5d4364*/
          v22[4] = v21; /*0x5d4368*/
          v22 = (int *)(*(int (__thiscall **)(int *))(v23 + 4))(v22); /*0x5d436b*/
          v21 += *(_DWORD *)&this->__pad_C[8]; /*0x5d436e*/
        }
        while ( v22 ); /*0x5d4373*/
      }
      --*(_DWORD *)this->__pad_C; /*0x5d4375*/
    }
    return *(_DWORD *)&this->__pad_C[24]; /*0x5d4378*/
  }
}



// ==== 0x005D4390  Chat::RefreshMessagePositions  this=Chat  sig=csp ====
char __thiscall Chat::RefreshMessagePositions(Chat *this)
{
  int v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // edi
  int *v5; // eax
  int v6; // edx

  DisableIME(); /*0x5d4393*/
  LOBYTE(v2) = *((_BYTE *)this + 25); /*0x5d4398*/
  if ( (_BYTE)v2 ) /*0x5d439d*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 9); /*0x5d439f*/
    *((_BYTE *)this + 25) = 0; /*0x5d43a2*/
    if ( v3 ) /*0x5d43a8*/
      (**v3)(v3, 1); /*0x5d43ae*/
    nullsub_48(); /*0x5d43b0*/
    LOBYTE(v2) = *((_BYTE *)this + 26); /*0x5d43b5*/
    if ( (_BYTE)v2 ) /*0x5d43ba*/
    {
      if ( *((_BYTE *)this + 25) ) /*0x5d43bc*/
        v4 = *((_DWORD *)this + 2) + *((_DWORD *)this + 5); /*0x5d43ca*/
      else
        v4 = *((_DWORD *)this + 2); /*0x5d43ce*/
      v5 = *(int **)this->__pad_0; /*0x5d43d1*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x5d43d1*/
      {
        do /*0x5d43e6*/
        {
          v6 = *v5; /*0x5d43d7*/
          v5[4] = v4; /*0x5d43db*/
          v5 = (int *)(*(int (__thiscall **)(int *))(v6 + 4))(v5); /*0x5d43de*/
          v4 += *((_DWORD *)this + 5); /*0x5d43e1*/
        }
        while ( v5 ); /*0x5d43e6*/
      }
      v2 = *((_DWORD *)this + 3) + 1; /*0x5d43ec*/
      *((_DWORD *)this + 3) = v2; /*0x5d43ed*/
    }
  }
  return v2; /*0x5d43f0*/
}



// ==== 0x005D4400  PriQueue::GetItemPtr  this=PriQueue  sig=csp ====
int __thiscall PriQueue::GetItemPtr(PriQueue *this)
{
  return (int)this + 2 * *((_DWORD *)this + 173) + 40; /*0x5d440a*/
}



// ==== 0x005D4430  ObjectClass::SyncFrameCounter  this=ObjectClass  sig=csp ====
int __thiscall sub_5D4430(char *this)
{
  int v2; // ebp
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // ebx
  _WORD *v6; // eax
  char *v7; // ecx
  int v8; // edx
  int v9; // esi
  int *v10; // eax
  int v11; // edx

  v2 = 0; /*0x5d4435*/
  v3 = *(_DWORD **)this; /*0x5d4437*/
  if ( *(_DWORD *)this ) /*0x5d4437*/
  {
    do /*0x5d44c9*/
    {
      if ( !v3[9] ) /*0x5d4442*/
        goto LABEL_13; /*0x5d4442*/
      v4 = dword_887340; /*0x5d444e*/
      if ( dword_887338 != -1 ) /*0x5d4457*/
        v4 += Timer::GetTicks() - dword_887338; /*0x5d4469*/
      if ( v4 > v3[9] ) /*0x5d446e*/
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3); /*0x5d447b*/
        *(_DWORD *)this = (*(int (__thiscall **)(_DWORD *))(*v3 + 36))(v3); /*0x5d4480*/
        v6 = this + 5248; /*0x5d4482*/
        v7 = this + 712; /*0x5d4488*/
        v8 = 14; /*0x5d448e*/
        do /*0x5d44a7*/
        {
          if ( (char *)v3[12] == v7 ) /*0x5d4496*/
            *v6 = 1; /*0x5d4498*/
          ++v6; /*0x5d449d*/
          v7 += 324; /*0x5d44a0*/
          --v8; /*0x5d44a6*/
        }
        while ( v8 ); /*0x5d44a7*/
        if ( v3 ) /*0x5d44ab*/
          (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x5d44b3*/
        v2 = 1; /*0x5d44b5*/
        v3 = (_DWORD *)v5; /*0x5d44ba*/
      }
      else
      {
LABEL_13:
        v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3); /*0x5d44c5*/
      }
    }
    while ( v3 ); /*0x5d44c9*/
    if ( v2 ) /*0x5d44d2*/
    {
      if ( this->customSound && this->bombVisible ) /*0x5d44db*/
        v9 = this->ptr_C + this->abstractFlags; /*0x5d44e8*/
      else
        v9 = this->ptr_C; /*0x5d44ec*/
      v10 = *(int **)this; /*0x5d44ef*/
      if ( *(_DWORD *)this ) /*0x5d44ef*/
      {
        do /*0x5d4504*/
        {
          v11 = *v10; /*0x5d44f5*/
          v10[4] = v9; /*0x5d44f9*/
          v10 = (int *)(*(int (__thiscall **)(int *))(v11 + 4))(v10); /*0x5d44fc*/
          v9 += this->abstractFlags; /*0x5d44ff*/
        }
        while ( v10 ); /*0x5d4504*/
      }
    }
  }
  return v2; /*0x5d4506*/
}



// ==== 0x005D4510  ProcessEditControlKey  this=-  sig=csp ====
int __fastcall EditControl_ProcessKey(int a1, int a2, int *a3, unsigned __int16 a4)
{
  int v4; // edi
  int v5; // esi
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  int v9; // edi
  int *v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  void (__thiscall ***v22)(_DWORD, int); // ecx
  int v23; // edi
  int *v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  void (__thiscall ***v30)(_DWORD, int); // ecx
  int v31; // edi
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  void (__thiscall ***v35)(_DWORD, int); // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // eax

  v4 = 0; /*0x5d451a*/
  v5 = a1; /*0x5d451f*/
  if ( !a4 ) /*0x5d4521*/
  {
    a1 = *a3; /*0x5d452b*/
    if ( !*a3 ) /*0x5d452b*/
      return 0; /*0x5d4537*/
    v7 = *a3; /*0x5d453a*/
    BYTE1(v7) = BYTE1(a1) & 0xF7; /*0x5d453c*/
    if ( v7 == 1 || v7 == 2 ) /*0x5d4547*/
    {
      if ( (a1 & 2) != 0 && *(_BYTE *)(v5 + 25) ) /*0x5d4552*/
      {
        DisableIME(); /*0x5d455d*/
        if ( *(_BYTE *)(v5 + 25) ) /*0x5d4562*/
        {
          v8 = *(void (__thiscall ****)(_DWORD, int))(v5 + 36); /*0x5d4569*/
          *(_BYTE *)(v5 + 25) = 0; /*0x5d456c*/
          if ( v8 ) /*0x5d4572*/
            (**v8)(v8, 1); /*0x5d4578*/
          nullsub_48(); /*0x5d457a*/
          if ( *(_BYTE *)(v5 + 26) ) /*0x5d457f*/
          {
            if ( *(_BYTE *)(v5 + 25) ) /*0x5d4586*/
              v9 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 20); /*0x5d4593*/
            else
              v9 = *(_DWORD *)(v5 + 8); /*0x5d4597*/
            v10 = *(int **)v5; /*0x5d459a*/
            if ( *(_DWORD *)v5 ) /*0x5d459a*/
            {
              do /*0x5d45b1*/
              {
                v11 = *v10; /*0x5d45a0*/
                v10[4] = v9; /*0x5d45a4*/
                v10 = (int *)(*(int (__thiscall **)(int *))(v11 + 4))(v10); /*0x5d45a7*/
                v9 += *(_DWORD *)(v5 + 20); /*0x5d45ad*/
              }
              while ( v10 ); /*0x5d45b1*/
            }
            ++*(_DWORD *)(v5 + 12); /*0x5d45b3*/
          }
        }
        return 2; /*0x5d45bf*/
      }
      return 0; /*0x5d4643*/
    }
  }
  if ( !*(_BYTE *)(v5 + 25) ) /*0x5d45c7*/
    return v4; /*0x5d4990*/
  if ( a4 ) /*0x5d45d0*/
  {
    v12 = a4; /*0x5d4646*/
  }
  else
  {
    LOWORD(a1) = *(_WORD *)a3; /*0x5d45d6*/
    v12 = (unsigned __int8)Event_Process(a1); /*0x5d45eb*/
    v13 = *a3; /*0x5d45f1*/
    if ( (*a3 & 0x1000) != 0 && v12 >= 48 && v12 <= 57 ) /*0x5d4605*/
    {
      BYTE1(v13) &= ~0x10u; /*0x5d4609*/
      *a3 = v13; /*0x5d460c*/
    }
    else if ( (*a3 & 0x1000) != 0 || (v13 & 0x8000) != 0 || v12 < 32 ) /*0x5d461c*/
    {
      v14 = (unsigned __int8)*a3; /*0x5d461e*/
      if ( v14 != 13 && v14 != 8 && v14 != 27 && (_BYTE)v12 != 8 ) /*0x5d4635*/
      {
        *a3 = 0; /*0x5d463b*/
        return 0; /*0x5d463b*/
      }
    }
  }
  if ( v12 == 8 ) /*0x5d464f*/
  {
    if ( *a3 != 8 ) /*0x5d495d*/
    {
      v39 = *(_DWORD *)(v5 + 688); /*0x5d495f*/
      if ( v39 > *(_DWORD *)(v5 + 692) ) /*0x5d496d*/
      {
        v40 = v39 - 1; /*0x5d496f*/
        v4 = 2; /*0x5d4970*/
        *(_DWORD *)(v5 + 688) = v40; /*0x5d4975*/
        *(_WORD *)(v5 + 2 * v40 + 40) = 0; /*0x5d497b*/
      }
    }
    *a3 = 0; /*0x5d4984*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 36) + 80))(*(_DWORD *)(v5 + 36)); /*0x5d498d*/
    return v4; /*0x5d498d*/
  }
  if ( v12 != 13 ) /*0x5d4658*/
  {
    if ( v12 != 27 ) /*0x5d4661*/
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 36) + 80))(*(_DWORD *)(v5 + 36)); /*0x5d466c*/
      if ( v12 > 31 ) /*0x5d4672*/
      {
        if ( *(_WORD *)(v5 + 2 * *(_DWORD *)(v5 + 688) + 40) ) /*0x5d468a*/
        {
          v15 = *(_DWORD *)(v5 + 692); /*0x5d4694*/
          v16 = *(_DWORD *)(v5 + 16) - 1; /*0x5d469a*/
          do /*0x5d46b2*/
          {
            if ( *(_DWORD *)(v5 + 688) - v15 >= v16 ) /*0x5d46a9*/
              break; /*0x5d46a9*/
            v17 = *(_DWORD *)(v5 + 688) + 1; /*0x5d46ab*/
            *(_DWORD *)(v5 + 688) = v17; /*0x5d46ac*/
          }
          while ( *(_WORD *)(v5 + 2 * v17 + 40) ); /*0x5d46b2*/
        }
        if ( *(_DWORD *)(v5 + 688) - *(_DWORD *)(v5 + 692) >= *(_DWORD *)(v5 + 16) - 1 ) /*0x5d46cf*/
          goto LABEL_46; /*0x5d46cf*/
        *(_WORD *)(v5 + 2 * *(_DWORD *)(v5 + 688) + 40) = v12; /*0x5d46d1*/
        v18 = *(_DWORD *)(v5 + 688) + 1; /*0x5d46dc*/
        v4 = 1; /*0x5d46dd*/
        *(_DWORD *)(v5 + 688) = v18; /*0x5d46e4*/
        *(_WORD *)(v5 + 2 * v18 + 40) = 0; /*0x5d46ea*/
        TextRenderer::GetInstance(); /*0x5d46f5*/
        if ( Text::MeasureWidth(v5 + 40, 0) >= *(_DWORD *)(v5 + 708) - 10 ) /*0x5d4711*/
        {
          v19 = *(_DWORD *)(v5 + 688) - 1; /*0x5d4719*/
          *(_DWORD *)(v5 + 688) = v19; /*0x5d471a*/
          *(_WORD *)(v5 + 2 * v19 + 40) = 0; /*0x5d4720*/
LABEL_46:
          if ( *(_BYTE *)(v5 + 24) ) /*0x5d4725*/
          {
            v20 = *(_DWORD *)(v5 + 688) /*0x5d475f*/
                - WideString::WordWrap(
                    (wchar_t *)(v5 + 364),
                    (wchar_t *)(v5 + 2 * *(_DWORD *)(v5 + 692) + 40),
                    *(_DWORD *)(v5 + 700),
                    *(_DWORD *)(v5 + 704),
                    1);
            *(_DWORD *)(v5 + 688) = v20; /*0x5d4768*/
            *(_WORD *)(v5 + 2 * v20 + 40) = v12; /*0x5d476e*/
            v21 = *(_DWORD *)(v5 + 688) + 1; /*0x5d4779*/
            *(_DWORD *)(v5 + 688) = v21; /*0x5d477a*/
            *(_WORD *)(v5 + 2 * v21 + 40) = 0; /*0x5d4780*/
            *a3 = 0; /*0x5d4788*/
            return 4; /*0x5d478d*/
          }
          v4 = 0; /*0x5d4790*/
        }
      }
      *a3 = 0; /*0x5d4792*/
      return v4; /*0x5d479e*/
    }
    DisableIME(); /*0x5d47a1*/
    if ( !*(_BYTE *)(v5 + 25) ) /*0x5d47a6*/
      goto LABEL_77; /*0x5d47a6*/
    v22 = *(void (__thiscall ****)(_DWORD, int))(v5 + 36); /*0x5d47b1*/
    *(_BYTE *)(v5 + 25) = 0; /*0x5d47b4*/
    if ( v22 ) /*0x5d47ba*/
      (**v22)(v22, 1); /*0x5d47c0*/
    nullsub_48(); /*0x5d47c2*/
    if ( !*(_BYTE *)(v5 + 26) ) /*0x5d47c7*/
    {
LABEL_77:
      *a3 = 0; /*0x5d48b0*/
      return 2; /*0x5d48c1*/
    }
    if ( *(_BYTE *)(v5 + 25) ) /*0x5d47d2*/
      v23 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 20); /*0x5d47df*/
    else
      v23 = *(_DWORD *)(v5 + 8); /*0x5d47e3*/
    v24 = *(int **)v5; /*0x5d47e6*/
    if ( *(_DWORD *)v5 ) /*0x5d47e6*/
    {
      do /*0x5d4801*/
      {
        v25 = *v24; /*0x5d47f0*/
        v24[4] = v23; /*0x5d47f4*/
        v24 = (int *)(*(int (__thiscall **)(int *))(v25 + 4))(v24); /*0x5d47f7*/
        v23 += *(_DWORD *)(v5 + 20); /*0x5d47fd*/
      }
      while ( v24 ); /*0x5d4801*/
    }
LABEL_76:
    ++*(_DWORD *)(v5 + 12); /*0x5d48ad*/
    goto LABEL_77; /*0x5d48ad*/
  }
  v26 = *(_DWORD *)(v5 + 692); /*0x5d4808*/
  if ( *(_DWORD *)(v5 + 688) < v26 ) /*0x5d4816*/
    *(_DWORD *)(v5 + 688) = v26; /*0x5d4818*/
  if ( *(_WORD *)(v5 + 2 * *(_DWORD *)(v5 + 688) + 40) ) /*0x5d4824*/
  {
    v27 = *(_DWORD *)(v5 + 16) - 1; /*0x5d482e*/
    do /*0x5d4846*/
    {
      if ( *(_DWORD *)(v5 + 688) - v26 >= v27 ) /*0x5d483d*/
        break; /*0x5d483d*/
      v28 = *(_DWORD *)(v5 + 688) + 1; /*0x5d483f*/
      *(_DWORD *)(v5 + 688) = v28; /*0x5d4840*/
    }
    while ( *(_WORD *)(v5 + 2 * v28 + 40) ); /*0x5d4846*/
  }
  v29 = *(_DWORD *)(v5 + 688); /*0x5d484d*/
  if ( v29 == v26 ) /*0x5d4855*/
  {
    DisableIME(); /*0x5d4857*/
    if ( !*(_BYTE *)(v5 + 25) ) /*0x5d485c*/
      goto LABEL_77; /*0x5d485c*/
    v30 = *(void (__thiscall ****)(_DWORD, int))(v5 + 36); /*0x5d4863*/
    *(_BYTE *)(v5 + 25) = 0; /*0x5d4866*/
    if ( v30 ) /*0x5d486c*/
      (**v30)(v30, 1); /*0x5d4872*/
    nullsub_48(); /*0x5d4874*/
    if ( !*(_BYTE *)(v5 + 26) ) /*0x5d4879*/
      goto LABEL_77; /*0x5d487e*/
    if ( *(_BYTE *)(v5 + 25) ) /*0x5d4880*/
      v31 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 20); /*0x5d488d*/
    else
      v31 = *(_DWORD *)(v5 + 8); /*0x5d4891*/
    v32 = *(int **)v5; /*0x5d4894*/
    if ( *(_DWORD *)v5 ) /*0x5d4894*/
    {
      do /*0x5d48ab*/
      {
        v33 = *v32; /*0x5d489a*/
        v32[4] = v31; /*0x5d489e*/
        v32 = (int *)(*(int (__thiscall **)(int *))(v33 + 4))(v32); /*0x5d48a1*/
        v31 += *(_DWORD *)(v5 + 20); /*0x5d48a7*/
      }
      while ( v32 ); /*0x5d48ab*/
    }
    goto LABEL_76; /*0x5d48ab*/
  }
  if ( v29 - v26 < *(_DWORD *)(v5 + 16) - 1 ) /*0x5d48ce*/
  {
    *(_WORD *)(v5 + 2 * v29 + 40) = 32; /*0x5d48d0*/
    v34 = *(_DWORD *)(v5 + 688) + 1; /*0x5d48dd*/
    *(_DWORD *)(v5 + 688) = v34; /*0x5d48de*/
    *(_WORD *)(v5 + 2 * v34 + 40) = 0; /*0x5d48e4*/
  }
  DisableIME(); /*0x5d48e9*/
  if ( *(_BYTE *)(v5 + 25) ) /*0x5d48ee*/
  {
    v35 = *(void (__thiscall ****)(_DWORD, int))(v5 + 36); /*0x5d48f5*/
    *(_BYTE *)(v5 + 25) = 0; /*0x5d48f8*/
    if ( v35 ) /*0x5d48fe*/
      (**v35)(v35, 1); /*0x5d4904*/
    nullsub_48(); /*0x5d4906*/
    if ( *(_BYTE *)(v5 + 26) ) /*0x5d490b*/
    {
      if ( *(_BYTE *)(v5 + 25) ) /*0x5d4912*/
        v36 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 20); /*0x5d491f*/
      else
        v36 = *(_DWORD *)(v5 + 8); /*0x5d4923*/
      v37 = *(int **)v5; /*0x5d4926*/
      if ( *(_DWORD *)v5 ) /*0x5d4926*/
      {
        do /*0x5d493d*/
        {
          v38 = *v37; /*0x5d492c*/
          v37[4] = v36; /*0x5d4930*/
          v37 = (int *)(*(int (__thiscall **)(int *))(v38 + 4))(v37); /*0x5d4933*/
          v36 += *(_DWORD *)(v5 + 20); /*0x5d4939*/
        }
        while ( v37 ); /*0x5d493d*/
      }
      ++*(_DWORD *)(v5 + 12); /*0x5d493f*/
    }
  }
  *a3 = 0; /*0x5d494b*/
  return 3; /*0x5d4531*/
}



// ==== 0x005D49A0  TacticalMap::DrawCursor  this=TacticalMap  sig=csp ====
char __thiscall TacticalMap::DrawCursor(TacticalMap *this)
{
  char result; // al
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // [esp-Ch] [ebp-38h]
  int v8; // [esp-4h] [ebp-30h]
  int v9; // [esp+8h] [ebp-24h] BYREF
  _DWORD v10[2]; // [esp+Ch] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-18h] BYREF
  _BYTE v12[16]; // [esp+1Ch] [ebp-10h] BYREF

  v9 = 0; /*0x5d49a6*/
  result = BYTE1(this->m_TintFactor); /*0x5d49b4*/
  if ( result ) /*0x5d49b9*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5d49c8*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 9) + 108))(*((_DWORD *)this + 9), 1); /*0x5d49d2*/
    TextRenderer::GetInstance(); /*0x5d49db*/
    v3 = Text::MeasureWidth(*(_DWORD *)(*((_DWORD *)this + 9) + 48), 0); /*0x5d49f8*/
    if ( *((_WORD *)this + 348) /*0x5d4a1b*/
      && *((_DWORD *)this + 172) - *((_DWORD *)this + 173) < this->TacticalMap_field_10 - 1
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 9) + 88))(*((_DWORD *)this + 9)) )
    {
      LOWORD(v9) = *((_WORD *)this + 348); /*0x5d4a29*/
      v4 = (_DWORD *)*((_DWORD *)this + 9); /*0x5d4a2e*/
      v5 = v4[3]; /*0x5d4a31*/
      v10[1] = v4[4]; /*0x5d4a39*/
      v10[0] = v3 + v5; /*0x5d4a3d*/
      v8 = v4[11]; /*0x5d4a4c*/
      v7 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v4[13]); /*0x5d4a56*/
      v6 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x5d4a65*/
                       g_DSurface_Hidden_2,
                       v12);
      TextRenderer::DrawText(&v11, (size_t)&v9, (int)g_DSurface_Hidden_2, v6, (int)v10, v7, 0, v8); /*0x5d4a79*/
    }
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5d4a89*/
  }
  if ( this->TacticalMap_field_00 ) /*0x5d4a8d*/
    return (*(char (__thiscall **)(int, int))(*(_DWORD *)this->TacticalMap_field_00 + 44))( /*0x5d4a98*/
             this->TacticalMap_field_00,
             1);
  return result; /*0x5d4a8f*/
}



// ==== 0x005D4AD0  TacticalClass::processInput  this=TacticalClass  sig=csp ====
char __thiscall TacticalClass::processInput(TacticalClass *this, int a2)
{
  int v2; // esi
  int *ptr_0; // eax
  int v5; // edx
  int field24; // eax

  v2 = a2 - 8; /*0x5d4ad6*/
  this->visibleCells[120] = a2 - 8; /*0x5d4ae1*/
  Debug::Log(); /*0x5d4ae7*/
  ptr_0 = (int *)this->AbstractClass; /*0x5d4aec*/
  if ( this->AbstractClass ) /*0x5d4aec*/
  {
    do /*0x5d4b01*/
    {
      v5 = *ptr_0; /*0x5d4af5*/
      ptr_0[14] = v2; /*0x5d4af9*/
      ptr_0 = (int *)(*(int (__thiscall **)(int *))(v5 + 4))(ptr_0); /*0x5d4afc*/
    }
    while ( ptr_0 ); /*0x5d4b01*/
  }
  LOBYTE(field24) = BYTE1(this->?); /*0x5d4b03*/
  if ( (_BYTE)field24 ) /*0x5d4b08*/
  {
    field24 = this->field24; /*0x5d4b0a*/
    *(_DWORD *)(field24 + 56) = v2; /*0x5d4b0d*/
  }
  return field24; /*0x5d4b10*/
}



// ==== 0x005D4B20  WideString::WordWrap  this=WideString  sig=csp ====
int __stdcall WideString_WordWrap(wchar_t *a1, wchar_t *String, int a3, int a4, int a5)
{
  wchar_t *v6; // ebp
  signed int v7; // eax
  int v8; // ecx
  int v9; // ebx
  wchar_t *v10; // esi
  wchar_t *v11; // edx

  if ( a3 <= 0 ) /*0x5d4b27*/
    return 0; /*0x5d4b2c*/
  v6 = String; /*0x5d4b31*/
  v7 = wcslen(String); /*0x5d4b37*/
  v8 = a4; /*0x5d4b3c*/
  if ( a4 > v7 ) /*0x5d4b49*/
    v8 = v7; /*0x5d4b4b*/
  if ( a5 ) /*0x5d4b53*/
  {
    v9 = v8; /*0x5d4b79*/
    if ( v8 >= a3 ) /*0x5d4b7b*/
    {
      v11 = &String[v8 - 1]; /*0x5d4b7d*/
      while ( !*v11 || *v11 > 0x20u ) /*0x5d4b8d*/
      {
        --v9; /*0x5d4b8f*/
        --v11; /*0x5d4b90*/
        if ( v9 < a3 ) /*0x5d4b95*/
          goto LABEL_17; /*0x5d4b95*/
      }
      goto LABEL_18; /*0x5d4b8d*/
    }
  }
  else
  {
    v9 = a3; /*0x5d4b57*/
    if ( a3 <= v8 ) /*0x5d4b59*/
    {
      v10 = &String[a3 - 1]; /*0x5d4b5b*/
      while ( !*v10 || *v10 > 0x20u ) /*0x5d4b6b*/
      {
        ++v9; /*0x5d4b6d*/
        ++v10; /*0x5d4b6e*/
        if ( v9 > v8 ) /*0x5d4b73*/
          goto LABEL_17; /*0x5d4b73*/
      }
      goto LABEL_18; /*0x5d4b6b*/
    }
  }
LABEL_17:
  v9 = a3; /*0x5d4b97*/
LABEL_18:
  if ( a1 ) /*0x5d4b9f*/
  {
    qmemcpy(a1, String, 2 * v9); /*0x5d4baf*/
    v6 = String; /*0x5d4bb3*/
    a1[v9] = 0; /*0x5d4bbc*/
  }
  memcpy(v6, &v6[v9], 2 * (v7 + 0x7FFFFFFF * v9) + 2); /*0x5d4bdc*/
  return v9; /*0x5d4b2b*/
}



// ==== 0x005D4C30  MPBattleClass::onDialogCreated  this=MPBattleClass  sig=ida-proto ====
int sub_5D4C30()
{
  dword_ABFCA8 = 0; /*0x5d4c32*/
  dword_ABFCAC = 0; /*0x5d4c37*/
  dword_ABFCB0 = 0; /*0x5d4c3c*/
  dword_ABFCB4 = 0; /*0x5d4c41*/
  return 0; /*0x5d4c46*/
}



// ==== 0x005D4C50  MPBattleClass::onDialogDestroyed  this=MPBattleClass  sig=ida-proto ====
int sub_5D4C50()
{
  dword_ABFC94 = 0; /*0x5d4c57*/
  dword_ABFC98 = 0; /*0x5d4c5c*/
  byte_ABFC9C = 1; /*0x5d4c61*/
  byte_ABFC9D = 0; /*0x5d4c68*/
  dword_ABFC90 = (int)&DynamicVectorClass<HWND__ *>::`vftable'; /*0x5d4c6d*/
  dword_ABFCA4 = 10; /*0x5d4c77*/
  dword_ABFCA0 = 0; /*0x5d4c81*/
  return atexit(sub_5D4C90); /*0x5d4c8c*/
}



// ==== 0x005D4C90  sub_5D4C90  this=-  sig=ida-proto ====
void __cdecl sub_5D4C90()
{
  dword_ABFC90 = (int)&VectorClass<HWND__ *>::`vftable'; /*0x5d4c98*/
  if ( dword_ABFC94 && byte_ABFC9D ) /*0x5d4cac*/
  {
    __3_YAXPAX_Z(dword_ABFC94); /*0x5d4caf*/
    dword_ABFC94 = 0; /*0x5d4cb7*/
  }
  byte_ABFC9D = 0; /*0x5d4cbd*/
  dword_ABFC98 = 0; /*0x5d4cc3*/
}



// ==== 0x005D4CD0  MPBattleClass::unfixAlliances  this=MPBattleClass  sig=ida-proto ====
int sub_5D4CD0()
{
  dword_ABFCBC = 0; /*0x5d4cd7*/
  dword_ABFCC0 = 0; /*0x5d4cdc*/
  byte_ABFCC4 = 1; /*0x5d4ce1*/
  byte_ABFCC5 = 0; /*0x5d4ce8*/
  dword_ABFCB8 = (int)&DynamicVectorClass<AcceleratorTracker>::`vftable'; /*0x5d4ced*/
  dword_ABFCCC = 10; /*0x5d4cf7*/
  dword_ABFCC8 = 0; /*0x5d4d01*/
  return atexit(sub_5D4D10); /*0x5d4d0c*/
}



// ==== 0x005D4D10  sub_5D4D10  this=-  sig=ida-proto ====
void __cdecl sub_5D4D10()
{
  dword_ABFCB8 = (int)&VectorClass<AcceleratorTracker>::`vftable'; /*0x5d4d18*/
  if ( dword_ABFCBC && byte_ABFCC5 ) /*0x5d4d2c*/
  {
    __3_YAXPAX_Z(dword_ABFCBC); /*0x5d4d2f*/
    dword_ABFCBC = 0; /*0x5d4d37*/
  }
  byte_ABFCC5 = 0; /*0x5d4d3d*/
  dword_ABFCC0 = 0; /*0x5d4d43*/
}



// ==== 0x005D4D50  MessageLoop  this=-  sig=ida-proto ====
HWND Dialog_MessageLoop()
{
  HWND result; // eax
  int v1; // esi
  int v2; // esi
  struct tagMSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  result = g_hWnd; /*0x5d4d50*/
  if ( g_hWnd ) /*0x5d4d5e*/
  {
    ++dword_AA0430; /*0x5d4d77*/
    for ( result = (HWND)GameLoopMessagePump(&Msg, 0, 0, 0, 0); result; result = (HWND)GameLoopMessagePump( /*0x5d4d84*/
                                                                                         &Msg,
                                                                                         0,
                                                                                         0,
                                                                                         0,
                                                                                         0) )
    {
      result = (HWND)IsMessageDialog(&Msg, 0, 0); /*0x5d4da6*/
      if ( !result ) /*0x5d4dad*/
        break; /*0x5d4dad*/
      Dialog::MapDialogResource(&Msg); /*0x5d4db7*/
      if ( dword_887368 ) /*0x5d4dc4*/
        HandleToolTipMessage(&Msg); /*0x5d4dcb*/
      v1 = 0; /*0x5d4dd5*/
      if ( dword_ABFCA0 <= 0 ) /*0x5d4dd9*/
      {
LABEL_9:
        v2 = 0; /*0x5d4dff*/
        if ( dword_ABFCC8 <= 0 ) /*0x5d4e03*/
        {
LABEL_12:
          if ( !dword_ABFD34 || !(unsigned __int8)dword_ABFD34(&Msg) ) /*0x5d4e35*/
          {
            TranslateMessage(&Msg); /*0x5d4e40*/
            DispatchMessageA(&Msg); /*0x5d4e47*/
          }
        }
        else
        {
          while ( !TranslateAcceleratorA(*((HWND *)dword_ABFCBC + 2 * v2 + 1), *((HACCEL *)dword_ABFCBC + 2 * v2), &Msg) ) /*0x5d4e1c*/
          {
            if ( ++v2 >= dword_ABFCC8 ) /*0x5d4e26*/
              goto LABEL_12; /*0x5d4e26*/
          }
        }
      }
      else
      {
        while ( !IsDialogMessageA(*((HWND *)dword_ABFC94 + v1), &Msg) ) /*0x5d4dee*/
        {
          if ( ++v1 >= dword_ABFCA0 ) /*0x5d4df8*/
            goto LABEL_9; /*0x5d4df8*/
        }
      }
    }
  }
  return result; /*0x5d4e66*/
}



// ==== 0x005D4E70  DialogQueue::PushEntry  this=DialogQueue  sig=csp ====
int __thiscall DialogQueue::PushEntry(DialogQueue *this)
{
  int result; // eax

  result = g_MissionQueueFrame.ls640BkgdName[9]; /*0x5d4e70*/
  if ( g_MissionQueueFrame.ls640BkgdName[11] < g_MissionQueueFrame.ls640BkgdName[9] /*0x5d4eac*/
    || (BYTE1(g_MissionQueueFrame.ls640BkgdName[10]) || !g_MissionQueueFrame.ls640BkgdName[9])
    && g_MissionQueueFrame.ls640BkgdName[12] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.ls640BkgdName[7] + 8))(
                   &g_MissionQueueFrame.ls640BkgdName[7],
                   g_MissionQueueFrame.ls640BkgdName[9] + g_MissionQueueFrame.ls640BkgdName[12],
                   0),
        (_BYTE)result) )
  {
    result = g_MissionQueueFrame.ls640BkgdName[11]++; /*0x5d4eb4*/
    *(_DWORD *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * result) = this; /*0x5d4ec3*/
  }
  return result; /*0x5d4ec6*/
}



// ==== 0x005D4ED0  DialogQueue::RemoveEntry  this=DialogQueue  sig=csp ====
int __thiscall DialogQueue::RemoveEntry(DialogQueue *this)
{
  int result; // eax
  DialogQueue *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5d4ed7*/
  result = (*(int (__thiscall **)(int *, DialogQueue **))(g_MissionQueueFrame.ls640BkgdName[7] + 16))( /*0x5d4ee5*/
             &g_MissionQueueFrame.ls640BkgdName[7],
             &v2);
  if ( result != -1 && result < g_MissionQueueFrame.ls640BkgdName[11] ) /*0x5d4ef5*/
  {
    --g_MissionQueueFrame.ls640BkgdName[11]; /*0x5d4efa*/
    for ( ; /*0x5d4f00*/
          result < g_MissionQueueFrame.ls640BkgdName[11];
          *(_DWORD *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * result - 4) = *(_DWORD *)(g_MissionQueueFrame.ls640BkgdName[8]
                                                                                         + 4 * result) )
    {
      ++result; /*0x5d4f08*/
    }
  }
  return result; /*0x5d4f1b*/
}



// ==== 0x005D4F20  ObjectClass::method_5D4F20  this=ObjectClass  sig=csp ====
int __thiscall sub_5D4F20(ObjectClass *this)
{
  int v1; // edi

  v1 = 0; /*0x5d4f29*/
  if ( g_MissionQueueFrame.ls640BkgdName[11] <= 0 ) /*0x5d4f2f*/
    return 0; /*0x5d4f87*/
  while ( 1 ) /*0x5d4f47*/
  {
    GetWindowTextA( /*0x5d4f47*/
      *(HWND *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * v1),
      (LPSTR)&g_MissionQueueFrame.ls800BkgdName[7],
      99);
    if ( !strcmp((const char *)&g_MissionQueueFrame.ls800BkgdName[7], (const char *)this) ) /*0x5d4f56*/
      break; /*0x5d4f56*/
    if ( ++v1 >= g_MissionQueueFrame.ls640BkgdName[11] ) /*0x5d4f85*/
      return 0; /*0x5d4f85*/
  }
  return *(_DWORD *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * v1); /*0x5d4f87*/
}



// ==== 0x005D5080  _DynamicVectorClass_PAUHWND::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MSFont_18::ClearBuffer(_DynamicVectorClass_PAUHWND *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d5086*/
  this->m_10 = 0; /*0x5d5089*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d5090*/
  {
    __3_YAXPAX_Z(v2); /*0x5d5096*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d509e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d50a1*/
  this->m_8 = 0; /*0x5d50a4*/
}



// ==== 0x005D50B0  _DynamicVectorClass_PAUHWND::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFont_18::PointerToIndex(_DynamicVectorClass_PAUHWND *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d50b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d50c5*/
  else
    return 0; /*0x5d50b7*/
}



// ==== 0x005D50D0  _VectorClass_PAUHWND::GetSize  this=VectorClass  sig=csp ====
int __thiscall MSFont_18::GetSize(_VectorClass_PAUHWND *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d50da*/
}



// ==== 0x005D50E0  _DynamicVectorClass_UAcceleratorTracker::Destroy  this=DynamicVector  sig=csp ====
void __thiscall MSFont_18::Destroy(_DynamicVectorClass_UAcceleratorTracker *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d50e6*/
  this->m_10 = 0; /*0x5d50e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d50f0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d50f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d50fe*/
  }
  BYTE1(this->m_C) = 0; /*0x5d5101*/
  this->m_8 = 0; /*0x5d5104*/
}



// ==== 0x005D5110  _DynamicVectorClass_UAcceleratorTracker::PointerToIndex8  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFont_18::PointerToIndex8(_DynamicVectorClass_UAcceleratorTracker *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d5110*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5d5125*/
  else
    return 0; /*0x5d5117*/
}



// ==== 0x005D5130  _VectorClass_UAcceleratorTracker::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAcceleratorTracker::Clear(_VectorClass_UAcceleratorTracker *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x5d5130*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x5d513f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x5d5146*/
  return a2; /*0x5d5141*/
}



// ==== 0x005D5150  _VectorClass_PAUHWND::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSFont_18::AddRef(_VectorClass_PAUHWND *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d5152*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d515d*/
  {
    v3 = 0; /*0x5d515f*/
    if ( m_8 <= 0 ) /*0x5d5163*/
      return 1; /*0x5d5183*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d5165*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d516b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d5174*/
    {
      ++v3; /*0x5d5176*/
      ++v4; /*0x5d5177*/
      if ( v3 >= m_8 ) /*0x5d517c*/
        return 1; /*0x5d517c*/
    }
  }
  return 0; /*0x5d517e*/
}



// ==== 0x005D5190  _VectorClass_PAUHWND::Release  this=VectorClass  sig=csp ====
char __thiscall MSFont_18::Release(_VectorClass_PAUHWND *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d519c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d51a6*/
    if ( a3 ) /*0x5d51ac*/
      v4 = a3; /*0x5d51c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d51be*/
    LOBYTE(this->m_C) = 1; /*0x5d51c6*/
    if ( v4 ) /*0x5d51ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d51d5*/
      {
        m_8 = this->m_8; /*0x5d51dc*/
        if ( a2 < m_8 ) /*0x5d51e1*/
          m_8 = a2; /*0x5d51e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d51e9*/
          ++i; /*0x5d51ee*/
        if ( BYTE1(this->m_C) ) /*0x5d51fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5206*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d520e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d5217*/
      this->m_8 = a2; /*0x5d521f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d5222*/
      return 1; /*0x5d5228*/
    }
    else
    {
      return 0; /*0x5d51cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUHWND *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d5232*/
    return 1; /*0x5d5238*/
  }
}



// ==== 0x005D5240  _VectorClass_PAUHWND::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSFont_18::ddtor(_VectorClass_PAUHWND *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d524d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5253*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d525b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d525e*/
  this->m_8 = 0; /*0x5d5261*/
}



// ==== 0x005D5270  _VectorClass_PAUHWND::Create  this=VectorClass  sig=csp ====
int __thiscall MSFont_18::Create(_VectorClass_PAUHWND *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d5270*/
    return 0; /*0x5d5278*/
  m_8 = this->m_8; /*0x5d527e*/
  result = 0; /*0x5d5281*/
  if ( m_8 <= 0 ) /*0x5d5285*/
    return -1; /*0x5d529c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d528b*/
  {
    if ( ++result >= m_8 ) /*0x5d529a*/
      return -1; /*0x5d529a*/
  }
  return result; /*0x5d527a*/
}



// ==== 0x005D52B0  _VectorClass_PAUHWND::Draw  this=VectorClass  sig=csp ====
unsigned int __thiscall MSFont_18::Draw(_VectorClass_PAUHWND *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d52b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d52c5*/
  else
    return 0; /*0x5d52b7*/
}



// ==== 0x005D52D0  _DynamicVectorClass_PAUHWND::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MSFont_18::SetCapacity(_DynamicVectorClass_PAUHWND *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d52dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d52e2*/
    if ( a3 ) /*0x5d52e8*/
      v4 = a3; /*0x5d52fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d52fa*/
    LOBYTE(this->m_C) = 1; /*0x5d5302*/
    if ( !v4 ) /*0x5d5306*/
      return 0; /*0x5d537a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d5308*/
    {
      m_8 = this->m_8; /*0x5d530f*/
      if ( a2 < m_8 ) /*0x5d5314*/
        m_8 = a2; /*0x5d5316*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d531c*/
        ++i; /*0x5d5321*/
      if ( BYTE1(this->m_C) ) /*0x5d532e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5339*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d5341*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d534a*/
    this->m_8 = a2; /*0x5d5352*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d5355*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUHWND *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d535e*/
  }
  v7 = this->m_8; /*0x5d5361*/
  if ( v7 < this->m_10 ) /*0x5d5369*/
    this->m_10 = v7; /*0x5d536b*/
  return 1; /*0x5d536e*/
}



// ==== 0x005D5380  _DynamicVectorClass_PAUHWND::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MSFont_18::FindItem(_DynamicVectorClass_PAUHWND *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d5380*/
  result = 0; /*0x5d5383*/
  if ( m_10 <= 0 ) /*0x5d5388*/
    return -1; /*0x5d539f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d538e*/
  {
    if ( ++result >= m_10 ) /*0x5d539d*/
      return -1; /*0x5d539d*/
  }
  return result; /*0x5d53a2*/
}



// ==== 0x005D53B0  _VectorClass_UAcceleratorTracker::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAcceleratorTracker::AddRef(_VectorClass_UAcceleratorTracker *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x5d53bb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d53c0*/
  {
    v3 = 0; /*0x5d53c2*/
    if ( m_8 <= 0 ) /*0x5d53c6*/
      return 1; /*0x5d53f6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5d53c8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x5d53cb*/
    v6 = (_DWORD *)(v4 + 4); /*0x5d53ce*/
    v7 = v4 - (_DWORD)v5; /*0x5d53d1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d53e3*/
    {
      ++v3; /*0x5d53e5*/
      v6 += 2; /*0x5d53e6*/
      v5 += 2; /*0x5d53e9*/
      if ( v3 >= m_8 ) /*0x5d53ee*/
        return 1; /*0x5d53ee*/
    }
  }
  return 0; /*0x5d53f0*/
}



// ==== 0x005D5410  _VectorClass_UAcceleratorTracker::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAcceleratorTracker::Release(_VectorClass_UAcceleratorTracker *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x5d5412*/
  if ( a2 ) /*0x5d541e*/
  {
    v5 = a3; /*0x5d5424*/
    LOBYTE(this->m_C) = 0; /*0x5d5428*/
    if ( a3 ) /*0x5d542d*/
    {
      v9 = a3; /*0x5d5463*/
      if ( a2 - 1 >= 0 ) /*0x5d5467*/
      {
        v10 = a2; /*0x5d5469*/
        do /*0x5d5473*/
        {
          *v9 = 0; /*0x5d546a*/
          v9[1] = 0; /*0x5d546c*/
          v9 += 2; /*0x5d546f*/
          --v10; /*0x5d5472*/
        }
        while ( v10 ); /*0x5d5473*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x5d5437*/
      if ( v6 ) /*0x5d5441*/
      {
        v7 = (_DWORD *)v6; /*0x5d5446*/
        if ( a2 - 1 >= 0 ) /*0x5d544a*/
        {
          v8 = a2; /*0x5d544c*/
          do /*0x5d5456*/
          {
            *v7 = 0; /*0x5d544d*/
            v7[1] = 0; /*0x5d544f*/
            v7 += 2; /*0x5d5452*/
            --v8; /*0x5d5455*/
          }
          while ( v8 ); /*0x5d5456*/
        }
        v5 = (_DWORD *)v6; /*0x5d5458*/
      }
      else
      {
        v5 = 0; /*0x5d545c*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x5d5477*/
    if ( v5 ) /*0x5d547b*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d5486*/
      {
        m_8 = this->m_8; /*0x5d548b*/
        if ( a2 < m_8 ) /*0x5d5490*/
          m_8 = a2; /*0x5d5492*/
        v13 = 0; /*0x5d5494*/
        if ( m_8 > 0 ) /*0x5d5498*/
        {
          do /*0x5d54b7*/
          {
            v14 = 2 * v13; /*0x5d549d*/
            v15 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v13++); /*0x5d54a6*/
            v5[v14] = *v15; /*0x5d54ad*/
            v5[v14 + 1] = v15[1]; /*0x5d54b3*/
          }
          while ( v13 < m_8 ); /*0x5d54b7*/
          v3 = a2; /*0x5d54b9*/
        }
        if ( BYTE1(this->m_C) ) /*0x5d54bf*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d54c8*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d54d0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x5d54db*/
      this->m_8 = v3; /*0x5d54e1*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d54e4*/
      return 1; /*0x5d54ea*/
    }
    else
    {
      return 0; /*0x5d5480*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UAcceleratorTracker *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d54f4*/
    return 1; /*0x5d54fa*/
  }
}



// ==== 0x005D5500  _VectorClass_UAcceleratorTracker::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAcceleratorTracker::ddtor(_VectorClass_UAcceleratorTracker *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d550d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5513*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d551b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d551e*/
  this->m_8 = 0; /*0x5d5521*/
}



// ==== 0x005D5530  _VectorClass_UAcceleratorTracker::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAcceleratorTracker::GetSize(_VectorClass_UAcceleratorTracker *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d5530*/
    return 0; /*0x5d553e*/
  m_8 = this->m_8; /*0x5d5544*/
  result = 0; /*0x5d5547*/
  if ( m_8 <= 0 ) /*0x5d554b*/
    return -1; /*0x5d556c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d5551*/
  {
    if ( ++result >= m_8 ) /*0x5d556a*/
      return -1; /*0x5d556a*/
  }
  return result; /*0x5d553b*/
}



// ==== 0x005D5580  _VectorClass_UAcceleratorTracker::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAcceleratorTracker::GetCapacity(_VectorClass_UAcceleratorTracker *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d5580*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5d5595*/
  else
    return 0; /*0x5d5587*/
}



// ==== 0x005D55A0  _DynamicVectorClass_UAcceleratorTracker::SetCapacity8  this=DynamicVector  sig=csp ====
char __thiscall MSFont_18::SetCapacity8(_DynamicVectorClass_UAcceleratorTracker *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x5d55a2*/
  if ( a2 ) /*0x5d55ae*/
  {
    v5 = a3; /*0x5d55b4*/
    LOBYTE(this->m_C) = 0; /*0x5d55b8*/
    if ( a3 ) /*0x5d55bd*/
    {
      v9 = a3; /*0x5d55f3*/
      if ( a2 - 1 >= 0 ) /*0x5d55f7*/
      {
        v10 = a2; /*0x5d55f9*/
        do /*0x5d5603*/
        {
          *v9 = 0; /*0x5d55fa*/
          v9[1] = 0; /*0x5d55fc*/
          v9 += 2; /*0x5d55ff*/
          --v10; /*0x5d5602*/
        }
        while ( v10 ); /*0x5d5603*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x5d55c7*/
      if ( v6 ) /*0x5d55d1*/
      {
        v7 = (_DWORD *)v6; /*0x5d55d6*/
        if ( a2 - 1 >= 0 ) /*0x5d55da*/
        {
          v8 = a2; /*0x5d55dc*/
          do /*0x5d55e6*/
          {
            *v7 = 0; /*0x5d55dd*/
            v7[1] = 0; /*0x5d55df*/
            v7 += 2; /*0x5d55e2*/
            --v8; /*0x5d55e5*/
          }
          while ( v8 ); /*0x5d55e6*/
        }
        v5 = (_DWORD *)v6; /*0x5d55e8*/
      }
      else
      {
        v5 = 0; /*0x5d55ec*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x5d5607*/
    if ( !v5 ) /*0x5d560b*/
      return 0; /*0x5d5694*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d5611*/
    {
      m_8 = this->m_8; /*0x5d5616*/
      if ( a2 < m_8 ) /*0x5d561b*/
        m_8 = a2; /*0x5d561d*/
      v12 = 0; /*0x5d561f*/
      if ( m_8 > 0 ) /*0x5d5623*/
      {
        do /*0x5d5642*/
        {
          v13 = 2 * v12; /*0x5d5628*/
          v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v12++); /*0x5d5631*/
          v5[v13] = *v14; /*0x5d5638*/
          v5[v13 + 1] = v14[1]; /*0x5d563e*/
        }
        while ( v12 < m_8 ); /*0x5d5642*/
        v3 = a2; /*0x5d5644*/
      }
      if ( BYTE1(this->m_C) ) /*0x5d564a*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5653*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d565b*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x5d5666*/
    this->m_8 = v3; /*0x5d566c*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d566f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UAcceleratorTracker *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d5678*/
  }
  v15 = this->m_8; /*0x5d567b*/
  if ( v15 < this->m_10 ) /*0x5d5683*/
    this->m_10 = v15; /*0x5d5685*/
  return 1; /*0x5d5688*/
}



// ==== 0x005D56A0  _DynamicVectorClass_UAcceleratorTracker::FindPair8  this=DynamicVector  sig=csp ====
int __thiscall MSFont_18::FindPair8(_DynamicVectorClass_UAcceleratorTracker *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d56a0*/
  result = 0; /*0x5d56a5*/
  if ( m_10 <= 0 ) /*0x5d56ab*/
    return -1; /*0x5d56cc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d56b1*/
  {
    if ( ++result >= m_10 ) /*0x5d56ca*/
      return -1; /*0x5d56ca*/
  }
  return result; /*0x5d56cf*/
}



// ==== 0x005D56E0  _VectorClass_PAUHWND::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSFont_18::QueryInterface(_VectorClass_PAUHWND *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d56e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HWND__ *>::`vftable'; /*0x5d56e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d56f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d56f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d5700*/
  }
  BYTE1(this->m_C) = 0; /*0x5d570b*/
  this->m_8 = 0; /*0x5d5711*/
  if ( (a2 & 1) != 0 ) /*0x5d5718*/
    __3_YAXPAX_Z(this); /*0x5d571b*/
  return this->__pad_0; /*0x5d5725*/
}



// ==== 0x005D5730  _DynamicVectorClass_PAUHWND::Constructor_VectorClass_HWND_____  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSFont_18::Constructor_VectorClass_HWND_____(_DynamicVectorClass_PAUHWND *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d5733*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HWND__ *>::`vftable'; /*0x5d5736*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d5740*/
  {
    __3_YAXPAX_Z(v3); /*0x5d5748*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d5750*/
  }
  BYTE1(this->m_C) = 0; /*0x5d575b*/
  this->m_8 = 0; /*0x5d5761*/
  if ( (a2 & 1) != 0 ) /*0x5d5768*/
    __3_YAXPAX_Z(this); /*0x5d576b*/
  return this->__pad_0; /*0x5d5775*/
}



// ==== 0x005D5780  _VectorClass_UAcceleratorTracker::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAcceleratorTracker::QueryInterface(_VectorClass_UAcceleratorTracker *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d5783*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AcceleratorTracker>::`vftable'; /*0x5d5786*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d5790*/
  {
    __3_YAXPAX_Z(v3); /*0x5d5798*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d57a0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d57ab*/
  this->m_8 = 0; /*0x5d57b1*/
  if ( (a2 & 1) != 0 ) /*0x5d57b8*/
    __3_YAXPAX_Z(this); /*0x5d57bb*/
  return this->__pad_0; /*0x5d57c5*/
}



// ==== 0x005D57D0  _DynamicVectorClass_UAcceleratorTracker::Constructor_VectorClass_AcceleratorTracker_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSFont_18::Constructor_VectorClass_AcceleratorTracker_(
        _DynamicVectorClass_UAcceleratorTracker *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d57d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AcceleratorTracker>::`vftable'; /*0x5d57d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d57e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d57e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d57f0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d57fb*/
  this->m_8 = 0; /*0x5d5801*/
  if ( (a2 & 1) != 0 ) /*0x5d5808*/
    __3_YAXPAX_Z(this); /*0x5d580b*/
  return this->__pad_0; /*0x5d5815*/
}



// ==== 0x005D5820  Audio::SetSoundFileName  this=Audio  sig=csp ====
char **__thiscall Audio::SetSoundFileName(Audio *this, char *Source, int a3)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x5d5825*/
  *(_DWORD *)&this->__pad_0[4] = 0; /*0x5d5827*/
  this->__pad_0[8] = 0; /*0x5d582a*/
  if ( Audio::IsSoundEnabled() ) /*0x5d582d*/
    *(_DWORD *)this->__pad_0 = _strdup(Source); /*0x5d5843*/
  return (char **)this; /*0x5d5847*/
}



// ==== 0x005D5850  MSEngine::DestroyData  this=MSEngine  sig=csp ====
void __thiscall MSEngine::DestroyData(MSEngine *this)
{
  if ( *(_DWORD *)this->__pad_0 ) /*0x5d5850*/
    free(*(void **)this->__pad_0); /*0x5d5857*/
}



// ==== 0x005D5860  nullsub_192  this=-  sig=csp ====
void __stdcall nullsub_192(int a1)
{
  ; /*0x5d5860*/
}



// ==== 0x005D5870  Timer::EnableHighPrecision  this=Timer  sig=csp ====
void *__thiscall Timer::EnableHighPrecision(Timer *this)
{
  timeBeginPeriod(1u); /*0x5d5875*/
  return this; /*0x5d587d*/
}



// ==== 0x005D5880  Timer::DisableHighPrecision  this=Timer  sig=ida-proto ====
MMRESULT Timer_DisableHighPrecision()
{
  return timeEndPeriod(1u); /*0x5d5888*/
}



// ==== 0x005D5890  timeGetTime  this=-  sig=ida-proto ====
// attributes: thunk
DWORD __stdcall timeGetTime()
{
  return __imp_timeGetTime();
}



// ==== 0x005D58A0  _0timeGetTime  this=-  sig=ida-proto ====
// attributes: thunk
DWORD __stdcall 0timeGetTime()
{
  return timeGetTime();
}



// ==== 0x005D58B0  MPBattleClass::startingPositionsToHouseBaseCells  this=MPBattleClass  sig=ida-proto ====
void sub_5D58B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d58bc*/
  dbl_ABFD58 = Math::Sqrt(v0 + v0); /*0x5d58ce*/
}



// ==== 0x005D58E0  MPBattleClass::allyTeams  this=MPBattleClass  sig=ida-proto ====
void sub_5D58E0()
{
  dbl_ABFDC8 = dbl_ABFD58 / 60.0; /*0x5d58ec*/
}



// ==== 0x005D5900  MPBattleClass::isMegawealthAllowed  this=MPBattleClass  sig=ida-proto ====
void sub_5D5900()
{
  dbl_ABFD98 = 1.0 / dbl_ABFDC8; /*0x5d590c*/
}



// ==== 0x005D5920  MPBattleClass::onAIJoined  this=MPBattleClass  sig=ida-proto ====
void sub_5D5920()
{
  dbl_ABFD90 = 0.0174532925199433 * 45.0; /*0x5d592c*/
}



// ==== 0x005D5940  sub_5D5940  this=-  sig=ida-proto ====
void sub_5D5940()
{
  dbl_ABFD60 = 0.0174532925199433 * 60.0; /*0x5d594c*/
}



// ==== 0x005D5960  sub_5D5960  this=-  sig=ida-proto ====
void sub_5D5960()
{
  dbl_ABFD38 = 0.0174532925199433 * 90.0; /*0x5d596c*/
}



// ==== 0x005D5980  sub_5D5980  this=-  sig=ida-proto ====
__int64 sub_5D5980()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFD38 - dbl_ABFD60); /*0x5d5992*/
  result = Math::RoundToInt(v0 * dbl_ABFD58 * 0.5); /*0x5d59a6*/
  dword_ABFDD0 = result; /*0x5d59ab*/
  return result; /*0x5d59b0*/
}



// ==== 0x005D59C0  sub_5D59C0  this=-  sig=ida-proto ====
void sub_5D59C0()
{
  dbl_ABFD68 = Math::ArcTan((double)dword_ABFDD0 * 0.00390625); /*0x5d59d7*/
}



// ==== 0x005D59F0  sub_5D59F0  this=-  sig=ida-proto ====
void sub_5D59F0()
{
  dbl_ABFD88 = Math::ArcTan((double)(2 * dword_ABFDD0) / dbl_ABFD58); /*0x5d5a12*/
}



// ==== 0x005D5A20  Display::CalculateDefaultSize  this=Display  sig=ida-proto ====
__int64 sub_5D5A20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFDD0) + 0.5); /*0x5d5a3b*/
  dword_ABFDC4 = result; /*0x5d5a40*/
  return result; /*0x5d5a46*/
}



// ==== 0x005D5A50  sub_5D5A50  this=-  sig=ida-proto ====
int sub_5D5A50()
{
  word_ABFD50 = 0; /*0x5d5a52*/
  word_ABFD52 = 0; /*0x5d5a58*/
  return 0; /*0x5d5a5e*/
}



// ==== 0x005D5A60  sub_5D5A60  this=-  sig=ida-proto ====
int sub_5D5A60()
{
  dword_ABFD78 = 0; /*0x5d5a62*/
  dword_ABFD7C = 0; /*0x5d5a67*/
  dword_ABFD80 = 0; /*0x5d5a6c*/
  return 0; /*0x5d5a71*/
}



// ==== 0x005D5A80  sub_5D5A80  this=-  sig=ida-proto ====
int sub_5D5A80()
{
  dword_ABFDC0 = 0; /*0x5d5a85*/
  dword_ABFDB8 = 128; /*0x5d5a8f*/
  dword_ABFDBC = 128; /*0x5d5a94*/
  return 128; /*0x5d5a99*/
}



// ==== 0x005D5AA0  sub_5D5AA0  this=-  sig=ida-proto ====
int sub_5D5AA0()
{
  dword_ABFD40 = 0; /*0x5d5aa2*/
  dword_ABFD44 = 0; /*0x5d5aa7*/
  dword_ABFD48 = 0; /*0x5d5aac*/
  dword_ABFD4C = 0; /*0x5d5ab1*/
  return 0; /*0x5d5ab6*/
}



// ==== 0x005D5AC0  System_Init  this=-  sig=ida-proto ====
int *sub_5D5AC0()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5ac9*/
  {
    g_MultiplayerMode |= 1u; /*0x5d5ad6*/
    dword_ABFDA4 = 0; /*0x5d5adc*/
    dword_ABFDA8 = 0; /*0x5d5ae1*/
    byte_ABFDAC = 1; /*0x5d5ae6*/
    byte_ABFDAD = 0; /*0x5d5aec*/
    g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5af1*/
    dword_ABFDB4 = 10; /*0x5d5afb*/
    dword_ABFDB0 = 0; /*0x5d5b05*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5b0a*/
  }
  return &g_MultiplayerModeConfig; /*0x5d5b17*/
}



// ==== 0x005D5B20  MultiplayerConfig::Cleanup  this=MultiplayerConfig  sig=ida-proto ====
void __cdecl MultiplayerConfig_Cleanup()
{
  g_MultiplayerModeConfig = (int)&VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5b28*/
  if ( dword_ABFDA4 && byte_ABFDAD ) /*0x5d5b3c*/
  {
    __3_YAXPAX_Z(dword_ABFDA4); /*0x5d5b3f*/
    dword_ABFDA4 = 0; /*0x5d5b47*/
  }
  byte_ABFDAD = 0; /*0x5d5b4d*/
  dword_ABFDA8 = 0; /*0x5d5b53*/
}



// ==== 0x005D5B60  MultiplayerGameMode::Construct  this=MultiplayerGameMode  sig=csp ====
void *__thiscall MultiplayerGameMode::Construct(
        MultiplayerGameMode *this,
        const wchar_t **a2,
        const wchar_t **a3,
        const char **a4,
        const char **a5,
        char a6,
        int a7)
{
  INISectionList *v8; // eax
  Node *v9; // edi
  int v10; // ecx
  char Bool_Overwrite; // al
  char v12; // dl
  int *v13; // ecx
  char v14; // al
  char v15; // cl
  char v16; // al
  CCFileClass v18; // [esp+10h] [ebp-6Ch] BYREF
  int v19[3]; // [esp+68h] [ebp-14h] BYREF
  int v20; // [esp+74h] [ebp-8h]

  this->MultiplayerGameMode_field_0x0C = 0; /*0x5d5b73*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d5b76*/
  LOBYTE(this->MultiplayerGameMode_field_0x14) = 1; /*0x5d5b79*/
  BYTE1(this->MultiplayerGameMode_field_0x14) = 0; /*0x5d5b7d*/
  this->MultiplayerGameMode_field_0x08 = (int)&DynamicVectorClass<MultiplayerTeam *>::`vftable'; /*0x5d5b80*/
  *((_DWORD *)this + 7) = 10; /*0x5d5b87*/
  this->MultiplayerGameMode_field_0x18 = 0; /*0x5d5b8e*/
  WideString::AssignFromPtr((wchar_t **)this + 8, a2); /*0x5d5b91*/
  WideString::AssignFromPtr((wchar_t **)this + 9, a3); /*0x5d5ba1*/
  *((_DWORD *)this + 10) = a7; /*0x5d5bba*/
  String::AssignFromPtr((String *)((char *)this + 44), a4); /*0x5d5bbd*/
  String::AssignFromPtr((String *)this + 6, a5); /*0x5d5bcd*/
  this->u8_D = a6; /*0x5d5bdb*/
  *((_DWORD *)this + 14) = 0; /*0x5d5bde*/
  *(_DWORD *)this->__pad_0 = &MultiplayerGameMode::`vftable'; /*0x5d5be1*/
  LOBYTE(this->MultiplayerGameMode_field_0x04) = 0; /*0x5d5be7*/
  *((_DWORD *)this + 15) = 65793; /*0x5d5bea*/
  v8 = (INISectionList *)__2_YAPAXI_Z(0x58u); /*0x5d5bf9*/
  v9 = (Node *)v8; /*0x5d5bfe*/
  if ( v8 ) /*0x5d5c05*/
  {
    v8[1] = 0; /*0x5d5c0a*/
    v8[2] = 0; /*0x5d5c0d*/
    INISectionList::Constructor(v8 + 3); /*0x5d5c10*/
    Node::Init(v9 + 5); /*0x5d5c18*/
    v9[7].? = 0; /*0x5d5c1d*/
    v9[8].GenericNode[0] = 0; /*0x5d5c20*/
    *(_DWORD *)v9->GenericNode = &CCINIClass_Vtable; /*0x5d5c23*/
  }
  else
  {
    v9 = 0; /*0x5d5c2b*/
  }
  *((_DWORD *)this + 14) = v9; /*0x5d5c32*/
  CCFileClass::Construct2(&v18, (char **)this + 11); /*0x5d5c35*/
  if ( (unsigned __int8)CCFileClass::Open(&v18, 0) ) /*0x5d5c3f*/
    CCINIClass::Load(*((CCINIClass **)this + 14), (int)&v18, 0, 0); /*0x5d5c52*/
  *(_DWORD *)v18.CDFileClass = &CCFileClass::`vftable'; /*0x5d5c5b*/
  v20 = 0; /*0x5d5c63*/
  Vector::Clear((int)v19); /*0x5d5c67*/
  *(_DWORD *)v18.CDFileClass = &off_7E1668; /*0x5d5c70*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v18); /*0x5d5c78*/
  v10 = *((_DWORD *)this + 14); /*0x5d5c7d*/
  if ( v10 ) /*0x5d5c82*/
  {
    if ( INIClass::BinarySearchSection(v10, (unsigned __int8 *)aMultiplayerdia) ) /*0x5d5c8f*/
    {
      Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5d5cb0*/
                         *((int **)this + 14),
                         (unsigned __int8 *)aMultiplayerdia,
                         aWonlinetournam,
                         *((_BYTE *)this + 61));
      v12 = *((_BYTE *)this + 62); /*0x5d5cb5*/
      v13 = (int *)*((_DWORD *)this + 14); /*0x5d5cb8*/
      *((_BYTE *)this + 61) = Bool_Overwrite; /*0x5d5cbb*/
      v14 = INIClass::ReadBool_Overwrite(v13, (unsigned __int8 *)aMultiplayerdia, aWonlineclantou, v12); /*0x5d5cca*/
      v15 = *((_BYTE *)this + 60); /*0x5d5ccf*/
      *((_BYTE *)this + 62) = v14; /*0x5d5cd2*/
      *((_BYTE *)this + 60) = INIClass::ReadBool_Overwrite( /*0x5d5cea*/
                                *((int **)this + 14),
                                (unsigned __int8 *)aMultiplayerdia,
                                aAlliesallowed,
                                v15);
      v16 = INIClass::ReadBool_Overwrite( /*0x5d5d00*/
              *((int **)this + 14),
              (unsigned __int8 *)aMultiplayerdia,
              aMustally,
              *((_BYTE *)this + 63));
      *((_BYTE *)this + 63) = v16; /*0x5d5d07*/
      if ( v16 ) /*0x5d5d0a*/
      {
        if ( !*((_BYTE *)this + 60) ) /*0x5d5d0c*/
          *((_BYTE *)this + 63) = 0; /*0x5d5d11*/
      }
    }
  }
  return this; /*0x5d5d16*/
}



// ==== 0x005D5D20  MultiplayerGameMode::Dtor  this=MultiplayerGameMode  sig=csp ====
void __thiscall MultiplayerGameMode::Dtor(MultiplayerGameMode *this)
{
  int v2; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v2 = 0; /*0x5d5d27*/
  for ( *(_DWORD *)this->__pad_0 = &MultiplayerGameMode::`vftable'; v2 < this->MultiplayerGameMode_field_0x18; ++v2 ) /*0x5d5d34*/
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(this->MultiplayerGameMode_field_0x0C + 4 * v2); /*0x5d5d39*/
    if ( v3 ) /*0x5d5d3e*/
      (**v3)(v3, 1); /*0x5d5d44*/
  }
  (*(void (__thiscall **)(int *))(this->MultiplayerGameMode_field_0x08 + 12))(&this->MultiplayerGameMode_field_0x08); /*0x5d5d56*/
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 14); /*0x5d5d59*/
  if ( v4 ) /*0x5d5d5e*/
    (**v4)(v4, 1); /*0x5d5d64*/
  DeleteAndZero((ObjectClass *)((char *)this + 48)); /*0x5d5d69*/
  DeleteAndZero((ObjectClass *)((char *)this + 44)); /*0x5d5d71*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 3); /*0x5d5d79*/
  DeleteAndZero::Alt((DeleteAndZero *)((char *)this + 32)); /*0x5d5d81*/
  MultiplayerGameMode_field_0x0C = (void *)this->MultiplayerGameMode_field_0x0C; /*0x5d5d86*/
  this->MultiplayerGameMode_field_0x08 = (int)&VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d5d89*/
  if ( MultiplayerGameMode_field_0x0C && BYTE1(this->MultiplayerGameMode_field_0x14) ) /*0x5d5d93*/
  {
    __3_YAXPAX_Z(MultiplayerGameMode_field_0x0C); /*0x5d5d99*/
    this->MultiplayerGameMode_field_0x0C = 0; /*0x5d5da1*/
  }
  BYTE1(this->MultiplayerGameMode_field_0x14) = 0; /*0x5d5da4*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d5da7*/
}



// ==== 0x005D5DB0  MultiplayerGameMode::MissionStubReturnZero  this=MultiplayerGameMode  sig=csp ====
int ScenarioClass::MissionStubReturnZero(MultiplayerGameMode *this)
{
  return -2; /*0x5d5db5*/
}



// ==== 0x005D5DC0  MultiplayerGameMode::GetModeNeg2  this=MultiplayerGameMode  sig=csp ====
int __thiscall Dialog::GetModeNeg2(MultiplayerGameMode *this)
{
  return *((_BYTE *)this + 63) != 0 ? 0 : -2;
}



// ==== 0x005D5DD0  MultiplayerGameMode::GetMode3  this=MultiplayerGameMode  sig=csp ====
int __thiscall Dialog::GetMode3(MultiplayerGameMode *this)
{
  return *((_BYTE *)this + 60) != 0 ? 3 : -2;
}



// ==== 0x005D5DE0  MultiplayerGameMode::IsValid  this=MultiplayerGameMode  sig=csp ====
bool __thiscall GameMode::IsValid(MultiplayerGameMode *this, unsigned int a2)
{
  return (!*((_BYTE *)this + 63) || a2 != -2) && a2 < 4; /*0x5d5df2*/
}



// ==== 0x005D5E10  MultiplayerGameMode::GetFirst  this=MultiplayerGameMode  sig=ida-proto ====
int MultiplayerGameMode_GetFirst()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5e1a*/
  {
    dword_ABFDA4 = 0; /*0x5d5e26*/
    g_MultiplayerMode |= 1u; /*0x5d5e2c*/
    dword_ABFDA8 = 0; /*0x5d5e32*/
    byte_ABFDAC = 1; /*0x5d5e38*/
    byte_ABFDAD = 0; /*0x5d5e3f*/
    g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5e45*/
    dword_ABFDB4 = 10; /*0x5d5e4f*/
    dword_ABFDB0 = 0; /*0x5d5e59*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5e5f*/
  }
  if ( !dword_ABFDB0 ) /*0x5d5e6d*/
    return 0; /*0x5d5e6f*/
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5e7a*/
  {
    dword_ABFDA4 = 0; /*0x5d5e86*/
    g_MultiplayerMode |= 1u; /*0x5d5e8c*/
    dword_ABFDA8 = 0; /*0x5d5e92*/
    byte_ABFDAC = 1; /*0x5d5e98*/
    byte_ABFDAD = 0; /*0x5d5e9f*/
    g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5ea5*/
    dword_ABFDB4 = 10; /*0x5d5eaf*/
    dword_ABFDB0 = 0; /*0x5d5eb9*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5ebf*/
  }
  return *(_DWORD *)dword_ABFDA4; /*0x5d5e71*/
}



// ==== 0x005D5ED0  MultiplayerGameMode::ListGet  this=MultiplayerGameMode  sig=ida-proto ====
int MultiplayerGameMode_ListGet()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5ed9*/
  {
    g_MultiplayerMode |= 1u; /*0x5d5ee6*/
    dword_ABFDA4 = 0; /*0x5d5eec*/
    dword_ABFDA8 = 0; /*0x5d5ef1*/
    byte_ABFDAC = 1; /*0x5d5ef6*/
    byte_ABFDAD = 0; /*0x5d5efc*/
    g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5f01*/
    dword_ABFDB4 = 10; /*0x5d5f0b*/
    dword_ABFDB0 = 0; /*0x5d5f15*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5f1a*/
  }
  return dword_ABFDB0; /*0x5d5f27*/
}



// ==== 0x005D5F30  MultiplayerGameMode::Find  this=MultiplayerGameMode  sig=csp ====
int __thiscall MultiplayerGameMode::Find(MultiplayerGameMode *this)
{
  int i; // ebp
  int result; // eax

  for ( i = 0; ; ++i ) /*0x5d5f3b*/
  {
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5f4e*/
    {
      g_MultiplayerMode |= 1u; /*0x5d5f57*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d5f62*/
      *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5f67*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d5f6d*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d5f78*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d5f7e*/
    }
    if ( i >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d5f8c*/
      break; /*0x5d5f8c*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5f95*/
    {
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d5fa1*/
      g_MultiplayerMode |= 1u; /*0x5d5fa7*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d5fad*/
      LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d5fb3*/
      *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5fc0*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d5fc6*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d5fcc*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d5fd2*/
    }
    result = *(_DWORD *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * i); /*0x5d5fe3*/
    if ( *(MultiplayerGameMode **)(result + 40) == this ) /*0x5d5fe9*/
      return result; /*0x5d5fe9*/
  }
  return 0; /*0x5d5ff3*/
}



// ==== 0x005D6000  sub_5D6000  this=-  sig=ida-proto ====
char __fastcall sub_5D6000(HWND hWnd, int a2)
{
  int v3; // esi
  char result; // al
  LPARAM v5; // esi
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  ListBox::Clear(hWnd); /*0x5d600d*/
  v8 = dword_A8B238[0] == 5; /*0x5d6020*/
  v3 = 0; /*0x5d6027*/
  for ( i = 0; ; v3 = i ) /*0x5d6029*/
  {
    result = g_MultiplayerMode; /*0x5d602d*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6034*/
    {
      g_MultiplayerMode |= 1u; /*0x5d603d*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d6048*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d604d*/
      dword_ABFDB4 = 10; /*0x5d6057*/
      dword_ABFDB0 = 0; /*0x5d6066*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d606c*/
    }
    if ( v3 >= dword_ABFDB0 ) /*0x5d607a*/
      break; /*0x5d607a*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6087*/
    {
      g_MultiplayerMode |= 1u; /*0x5d6090*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d609b*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d60a0*/
      dword_ABFDB4 = 10; /*0x5d60aa*/
      dword_ABFDB0 = 0; /*0x5d60b9*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d60bf*/
    }
    v5 = *((_DWORD *)dword_ABFDA4 + v3); /*0x5d60cc*/
    if ( !v8 || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 64))(v5) ) /*0x5d60db*/
    {
      v6 = WideString::GetOrEmpty_Alt((wchar_t **)(v5 + 32)); /*0x5d60e5*/
      v7 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v6); /*0x5d60f7*/
      if ( *(_DWORD *)(v5 + 40) == a2 ) /*0x5d60ff*/
        SendMessageA(hWnd, 0x14Eu, v7, 0); /*0x5d610a*/
      SendMessageA(hWnd, 0x151u, v7, v5); /*0x5d6114*/
    }
    ++i; /*0x5d611d*/
  }
  return result; /*0x5d6128*/
}



// ==== 0x005D6130  SkirmishSetup_Setup  this=-  sig=csp ====
char __fastcall sub_5D6130(HWND hWnd, int a2)
{
  int v3; // esi
  char result; // al
  LPARAM v5; // esi
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5d614d*/
  v8 = dword_A8B238[0] == 5; /*0x5d6156*/
  v3 = 0; /*0x5d615b*/
  for ( i = 0; ; v3 = i ) /*0x5d615d*/
  {
    result = g_MultiplayerMode; /*0x5d6161*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6168*/
    {
      g_MultiplayerMode |= 1u; /*0x5d6171*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d617c*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d6181*/
      dword_ABFDB4 = 10; /*0x5d618b*/
      dword_ABFDB0 = 0; /*0x5d619a*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d61a0*/
    }
    if ( v3 >= dword_ABFDB0 ) /*0x5d61ae*/
      break; /*0x5d61ae*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d61bb*/
    {
      g_MultiplayerMode |= 1u; /*0x5d61c4*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d61cf*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d61d4*/
      dword_ABFDB4 = 10; /*0x5d61de*/
      dword_ABFDB0 = 0; /*0x5d61ed*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d61f3*/
    }
    v5 = *((_DWORD *)dword_ABFDA4 + v3); /*0x5d6200*/
    if ( (*(_BYTE *)(v5 + 61) || dword_A8B238[0] != 4 || !Network::IsMultiplayerActive()) /*0x5d6267*/
      && (*(_BYTE *)(v5 + 62) || dword_A8B238[0] != 4 || !Network::IsLobbyFeature())
      && (g_MPCooperativeState
       || *(_DWORD *)(dword_A8DA90 + 107) != -1
       || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 188))(v5))
      && (!v8 || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 64))(v5)) )
    {
      v6 = WideString::GetOrEmpty_Alt((wchar_t **)(v5 + 32)); /*0x5d6271*/
      v7 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v6); /*0x5d6280*/
      if ( *(_DWORD *)(v5 + 40) == a2 ) /*0x5d628b*/
        SendMessageA(hWnd, 0x186u, v7, 0); /*0x5d6296*/
      SendMessageA(hWnd, 0x19Au, v7, v5); /*0x5d62a0*/
    }
    ++i; /*0x5d62a9*/
  }
  return result; /*0x5d62b4*/
}



// ==== 0x005D62C0  MultiplayerGameMode::AssignPlayerIndex  this=MultiplayerGameMode  sig=csp ====
char PlayerClass::AssignPlayerIndex(MultiplayerGameMode *this)
{
  int i; // esi

  for ( i = 0; i < dword_A8DA84; ++i ) /*0x5d62ca*/
  {
    if ( SessionClass::GetPlayerSide((int *)dword_A8DA78[i]) == -3 ) /*0x5d62dc*/
      *(_DWORD *)(dword_A8DA78[i] + 107) = -1; /*0x5d62e7*/
    else
      *(_DWORD *)(dword_A8DA78[i] + 107) = i; /*0x5d62f8*/
  }
  return 1; /*0x5d6307*/
}



// ==== 0x005D6310  MultiplayerGameMode::MissionStubReturnZero2  this=MultiplayerGameMode  sig=csp ====
int __stdcall ScenarioClass::MissionStubReturnZero2(int *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x5d6310*/
  return result; /*0x5d6312*/
}



// ==== 0x005D6320  MultiplayerGameMode::saveGame  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::saveGame(MultiplayerGameMode *this)
{
  return 1; /*0x5d6322*/
}



// ==== 0x005D6330  MultiplayerGameMode::loadGame  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::loadGame(MultiplayerGameMode *this)
{
  return 1; /*0x5d6332*/
}



// ==== 0x005D6340  MultiplayerGameMode::createStartingForces  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::createStartingForces(MultiplayerGameMode *this)
{
  return 1; /*0x5d6342*/
}



// ==== 0x005D6350  MultiplayerGameMode::GetFlag  this=MultiplayerGameMode  sig=csp ====
char __thiscall DialogClass::GetFlag(MultiplayerGameMode *this)
{
  return this->u8_D; /*0x5d6353*/
}



// ==== 0x005D6360  MultiplayerGameMode::Stub  this=MultiplayerGameMode  sig=csp ====
char MPCooperative::Stub(MultiplayerGameMode *this)
{
  return 0; /*0x5d6362*/
}



// ==== 0x005D6370  MultiplayerGameMode::FindOpenSlot  this=MultiplayerGameMode  sig=csp ====
int __thiscall GameClass::FindOpenSlot(MultiplayerGameMode *this)
{
  int v1; // ebp
  int v2; // ebx
  GameClass *v4; // esi
  char inited; // al

  v1 = dword_A8B8D8; /*0x5d6372*/
  v2 = 0; /*0x5d6379*/
  if ( dword_A8B8D8 <= 0 ) /*0x5d6380*/
    return -1; /*0x5d63cc*/
  while ( 1 ) /*0x5d6387*/
  {
    v4 = *(GameClass **)(dword_A8B8CC + 4 * v2); /*0x5d6387*/
    if ( (unsigned __int8)IsRandMap::Sed((int)v4) ) /*0x5d638c*/
    {
      inited = (*(int (__thiscall **)(MultiplayerGameMode *))(*(_DWORD *)this->__pad_0 + 60))(this); /*0x5d6399*/
    }
    else
    {
      if ( !v4->__pad_3D[319] && Network::IsMultiplayerActive() ) /*0x5d63a8*/
        goto LABEL_8; /*0x5d63af*/
      inited = GameClass::initPlayerData(v4, (const char **)this + 12); /*0x5d63b7*/
    }
    if ( inited ) /*0x5d63be*/
      return v2; /*0x5d63c5*/
LABEL_8:
    if ( ++v2 >= v1 ) /*0x5d63c3*/
      return -1; /*0x5d63c3*/
  }
}



// ==== 0x005D63E0  MapPreview::Check  this=MultiplayerGameMode  sig=csp ====
int __thiscall MapPreview::Check(char *this, int a2)
{
  int result; // eax

  if ( (unsigned __int8)IsRandMap::Sed(a2) ) /*0x5d63ea*/
    return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 60))(this); /*0x5d63f7*/
  LOBYTE(result) = (*(_BYTE *)(a2 + 380) || !Network::IsMultiplayerActive()) /*0x5d641f*/
                && GameClass::initPlayerData((int *)a2, (const char **)this + 12);
  return result; /*0x5d63fa*/
}



// ==== 0x005D6430  MultiplayerGameMode::dispatchEvents  this=MultiplayerGameMode  sig=csp ====
// Microsoft VisualC 2-14/net runtime
int ScenarioClass::dispatchEvents(MultiplayerGameMode *this)
{
  return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69b684*/
}



// ==== 0x005D6440  MultiplayerGameMode::MissionStubReturnZero3  this=MultiplayerGameMode  sig=csp ====
int __thiscall ScenarioClass::MissionStubReturnZero3(MultiplayerGameMode *this)
{
  return (*(int (__thiscall **)(MultiplayerGameMode *))(*(_DWORD *)this->__pad_0 + 108))(this);
}



// ==== 0x005D6450  MultiplayerGameMode::FillEntries  this=MultiplayerGameMode  sig=csp ====
int __stdcall ListBox::FillEntries(MultiplayerGameMode *this, int a2, int a3)
{
  int result; // eax
  int i; // ebx
  LPARAM v5; // esi
  LRESULT v6; // ebp

  ListBox::Clear((ListBox *)this); /*0x5d6458*/
  result = a2; /*0x5d645d*/
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i ) /*0x5d6468*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * i); /*0x5d6473*/
    v6 = SendMessageA((HWND)this, 0x143u, 0, v5); /*0x5d6485*/
    if ( v5 == a3 ) /*0x5d648d*/
      SendMessageA((HWND)this, 0x14Eu, v6, 0); /*0x5d6498*/
    SendMessageA((HWND)this, 0x151u, v6, v5); /*0x5d64a6*/
    result = a2; /*0x5d64ac*/
  }
  return result; /*0x5d64b8*/
}



// ==== 0x005D64C0  MultiplayerGameMode::Refresh  this=MultiplayerGameMode  sig=csp ====
int __stdcall ListBox::Refresh(MultiplayerGameMode *this, int a2, int a3)
{
  int result; // eax
  int i; // ebp
  LPARAM v6; // esi
  LRESULT v7; // eax
  HWND hWnd; // [esp+10h] [ebp+4h]

  SendMessageA((HWND)this, 0x184u, 0, 0); /*0x5d64d7*/
  result = a2; /*0x5d64d9*/
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i ) /*0x5d64e4*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * i); /*0x5d64ee*/
    v7 = SendMessageA((HWND)this, 0x4CDu, 0, v6); /*0x5d64fa*/
    hWnd = (HWND)v7; /*0x5d6500*/
    if ( v6 == a3 ) /*0x5d6506*/
    {
      SendMessageA((HWND)this, 0x186u, v7, 0); /*0x5d6511*/
      v7 = (LRESULT)hWnd; /*0x5d6513*/
    }
    SendMessageA((HWND)this, 0x19Au, v7, v6); /*0x5d651f*/
    result = a2; /*0x5d6521*/
  }
  return result; /*0x5d652c*/
}



// ==== 0x005D6540  MultiplayerGameMode::FillPlayers  this=MultiplayerGameMode  sig=csp ====
int __thiscall ListBox::FillPlayers(MultiplayerGameMode *this, HWND hWnd, int a3)
{
  int i; // esi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax
  int v7; // ebx
  LPARAM v8; // esi
  wchar_t *v9; // eax
  LRESULT v10; // ebp
  int v11; // [esp+14h] [ebp+8h]

  ListBox::Clear((ListBox *)hWnd); /*0x5d6549*/
  for ( i = 0; i < this->MultiplayerGameMode_field_0x18; ++i ) /*0x5d6555*/
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(this->MultiplayerGameMode_field_0x0C + 4 * i); /*0x5d655a*/
    if ( v5 ) /*0x5d655f*/
      (**v5)(v5, 1); /*0x5d6565*/
  }
  (*(void (__thiscall **)(int *))(this->MultiplayerGameMode_field_0x08 + 12))(&this->MultiplayerGameMode_field_0x08); /*0x5d6577*/
  (*(void (__thiscall **)(MultiplayerGameMode *, int *))(*(_DWORD *)this->__pad_0 + 192))( /*0x5d657f*/
    this,
    &this->MultiplayerGameMode_field_0x08);
  result = a3; /*0x5d6585*/
  if ( a3 >= 0 && a3 < dword_A8DA84 ) /*0x5d6593*/
  {
    v7 = 0; /*0x5d659b*/
    v11 = *(_DWORD *)(dword_A8DA78[a3] + 107); /*0x5d65a3*/
    result = this->MultiplayerGameMode_field_0x18; /*0x5d65a7*/
    if ( result > 0 ) /*0x5d65ac*/
    {
      do /*0x5d6608*/
      {
        v8 = *(_DWORD *)(this->MultiplayerGameMode_field_0x0C + 4 * v7); /*0x5d65b2*/
        v9 = WideString::GetOrEmpty_Alt((wchar_t **)(v8 + 4)); /*0x5d65b8*/
        v10 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v9); /*0x5d65d3*/
        if ( *(_DWORD *)(v8 + 8) == v11 ) /*0x5d65db*/
          SendMessageA(hWnd, 0x14Eu, v10, 0); /*0x5d65ea*/
        SendMessageA(hWnd, 0x151u, v10, v8); /*0x5d65fc*/
        result = this->MultiplayerGameMode_field_0x18; /*0x5d6602*/
        ++v7; /*0x5d6605*/
      }
      while ( v7 < result ); /*0x5d6608*/
    }
  }
  return result; /*0x5d660b*/
}



// ==== 0x005D6620  StreamWrapper::readData  this=StreamWrapper  sig=csp ====
int __thiscall StreamWrapper::readData(StreamWrapper *this, int a2)
{
  int v3; // eax
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // edx
  int v7; // ecx
  int *i; // esi
  int result; // eax

  v3 = *((_DWORD *)this + 6); /*0x5d6624*/
  if ( v3 < 3 ) /*0x5d662a*/
  {
    v4 = 0; /*0x5d662c*/
    if ( v3 > 0 ) /*0x5d6630*/
    {
      do /*0x5d6648*/
      {
        v5 = *(void (__thiscall ****)(_DWORD, int))(this->StreamWrapper_field_0x0C + 4 * v4); /*0x5d6635*/
        if ( v5 ) /*0x5d663a*/
          (**v5)(v5, 1); /*0x5d6640*/
        ++v4; /*0x5d6645*/
      }
      while ( v4 < *((_DWORD *)this + 6) ); /*0x5d6648*/
    }
    (*(void (__thiscall **)(int *))(this->StreamWrapper_field_0x08 + 12))(&this->StreamWrapper_field_0x08); /*0x5d6652*/
    (*(void (__thiscall **)(StreamWrapper *, int *))(*(_DWORD *)this->__pad_0 + 192))( /*0x5d665a*/
      this,
      &this->StreamWrapper_field_0x08);
  }
  v6 = *((_DWORD *)this + 6); /*0x5d6660*/
  v7 = 0; /*0x5d6663*/
  if ( v6 <= 0 ) /*0x5d6667*/
    return 0; /*0x5d6683*/
  for ( i = (int *)this->StreamWrapper_field_0x0C; ; ++i ) /*0x5d6669*/
  {
    result = *i; /*0x5d6670*/
    if ( *i ) /*0x5d6670*/
    {
      if ( *(_DWORD *)(result + 8) == a2 ) /*0x5d6679*/
        break; /*0x5d6679*/
    }
    if ( ++v7 >= v6 ) /*0x5d6681*/
      return 0; /*0x5d6681*/
  }
  return result; /*0x5d6685*/
}



// ==== 0x005D6690  MultiplayerGameMode::AddEntries  this=MultiplayerGameMode  sig=csp ====
int __stdcall ListBox::AddEntries(MultiplayerGameMode *this)
{
  MPCombatTeam *v1; // eax
  wchar_t **v2; // edi
  int MultiplayerGameMode_field_0x08; // ecx
  int MultiplayerGameMode_field_0x14; // eax
  int MultiplayerGameMode_field_0x10; // eax
  int MultiplayerGameMode_field_0x04; // edx
  int result; // eax
  int i; // ebx
  wchar_t **v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx

  v1 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5d6695*/
  if ( v1 ) /*0x5d669f*/
    v2 = MPCombatTeam::Constructor(v1); /*0x5d66a8*/
  else
    v2 = 0; /*0x5d66ac*/
  MultiplayerGameMode_field_0x08 = this->MultiplayerGameMode_field_0x08; /*0x5d66b2*/
  if ( this->MultiplayerGameMode_field_0x10 < MultiplayerGameMode_field_0x08 /*0x5d66d7*/
    || (BYTE1(this->MultiplayerGameMode_field_0x0C) || !MultiplayerGameMode_field_0x08)
    && (MultiplayerGameMode_field_0x14 = this->MultiplayerGameMode_field_0x14, MultiplayerGameMode_field_0x14 > 0)
    && (*(unsigned __int8 (__thiscall **)(MultiplayerGameMode *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
         this,
         MultiplayerGameMode_field_0x08 + MultiplayerGameMode_field_0x14,
         0) )
  {
    MultiplayerGameMode_field_0x10 = this->MultiplayerGameMode_field_0x10; /*0x5d66de*/
    MultiplayerGameMode_field_0x04 = this->MultiplayerGameMode_field_0x04; /*0x5d66e1*/
    this->MultiplayerGameMode_field_0x10 = MultiplayerGameMode_field_0x10 + 1; /*0x5d66e7*/
    *(_DWORD *)(MultiplayerGameMode_field_0x04 + 4 * MultiplayerGameMode_field_0x10) = v2; /*0x5d66ea*/
  }
  result = dword_A8B548; /*0x5d66ed*/
  for ( i = 1; i <= dword_A8B548; ++i ) /*0x5d66f9*/
  {
    v9 = ListBox::Constructor((ListBox *)i); /*0x5d6705*/
    v10 = this->MultiplayerGameMode_field_0x08; /*0x5d6707*/
    if ( this->MultiplayerGameMode_field_0x10 < v10 /*0x5d6729*/
      || (BYTE1(this->MultiplayerGameMode_field_0x0C) || !v10)
      && (v11 = this->MultiplayerGameMode_field_0x14, v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(MultiplayerGameMode *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
           this,
           v10 + v11,
           0) )
    {
      v12 = this->MultiplayerGameMode_field_0x10; /*0x5d6730*/
      v13 = this->MultiplayerGameMode_field_0x04; /*0x5d6733*/
      this->MultiplayerGameMode_field_0x10 = v12 + 1; /*0x5d6739*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x5d673c*/
    }
    result = dword_A8B548; /*0x5d673f*/
  }
  return result; /*0x5d6749*/
}



// ==== 0x005D6790  MultiplayerGameMode::ClearFlag  this=MultiplayerGameMode  sig=csp ====
char ScenarioClass::ClearFlag(MultiplayerGameMode *this)
{
  void *ptr_0; // ecx

  ptr_0 = dword_A8B230->ptr_0; /*0x5d6795*/
  BYTE1(ptr_0) = ((unsigned __int16)dword_A8B230->ptr_0 >> 8) & 0xFB; /*0x5d6797*/
  dword_A8B230->ptr_0 = ptr_0; /*0x5d679a*/
  return 1; /*0x5d679e*/
}



// ==== 0x005D67A0  MultiplayerGameMode::MissionStubReturnZero4  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass::MissionStubReturnZero4(MultiplayerGameMode *this)
{
  return 1; /*0x5d67a2*/
}



// ==== 0x005D67B0  GameConfig::Constructor  this=GameConfig  sig=csp ====
char *__thiscall GameConfig::Constructor(GameConfig *this)
{
  GameConfig *v1; // edi
  int v2; // eax
  int v3; // esi
  CCFileClass v6; // [esp+Ch] [ebp-6Ch] BYREF
  char v7[12]; // [esp+64h] [ebp-14h] BYREF
  int v8; // [esp+70h] [ebp-8h]

  v1 = this; /*0x5d67b5*/
  if ( !*(_DWORD *)&this->__pad_0[56] ) /*0x5d67bd*/
  {
    v2 = __2_YAPAXI_Z(0x58u); /*0x5d67c9*/
    v3 = v2; /*0x5d67ce*/
    if ( v2 ) /*0x5d67d5*/
    {
      *(_DWORD *)(v2 + 4) = 0; /*0x5d67de*/
      *(_DWORD *)(v2 + 8) = 0; /*0x5d67e1*/
      *(_DWORD *)(v2 + 20) = 0; /*0x5d67e6*/
      *(_DWORD *)(v2 + 24) = 0; /*0x5d67e9*/
      *(_DWORD *)(v2 + 16) = &GenericNode::`vftable'; /*0x5d67ec*/
      GenericNode::Constructor((GenericNode *)(v2 + 28)); /*0x5d67f2*/
      *(_DWORD *)(v3 + 12) = &GenericList::`vftable'; /*0x5d67fa*/
      LinkedList::Prepend((LinkedList *)(v3 + 16), v3 + 28); /*0x5d6801*/
      v1 = this; /*0x5d6806*/
      *(_DWORD *)(v3 + 12) = &List<INIClass::INISection *>::`vftable'; /*0x5d680a*/
      *(_DWORD *)(v3 + 40) = 0; /*0x5d6811*/
      *(_DWORD *)(v3 + 44) = 0; /*0x5d6814*/
      *(_DWORD *)(v3 + 48) = 0; /*0x5d6817*/
      *(_BYTE *)(v3 + 52) = 0; /*0x5d681a*/
      *(_DWORD *)(v3 + 56) = 0; /*0x5d681d*/
      *(_DWORD *)(v3 + 60) = 0; /*0x5d6820*/
      *(_BYTE *)(v3 + 64) = 0; /*0x5d6823*/
      *(_DWORD *)v3 = &CCINIClass_Vtable; /*0x5d6826*/
    }
    else
    {
      v3 = 0; /*0x5d682f*/
    }
    *(_DWORD *)&v1->__pad_0[56] = v3; /*0x5d6839*/
    CCFileClass::Construct2(&v6, (char **)&v1->__pad_0[44]); /*0x5d683c*/
    if ( (unsigned __int8)CCFileClass::Open(&v6, 0) ) /*0x5d6846*/
      CCINIClass::Load(*(CCINIClass **)&v1->__pad_0[56], (int)&v6, 0, 0); /*0x5d685a*/
    *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x5d6863*/
    v8 = 0; /*0x5d686b*/
    Vector::Clear((int)v7); /*0x5d686f*/
    *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x5d6878*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x5d6880*/
  }
  return *(char **)&v1->__pad_0[56]; /*0x5d6888*/
}



// ==== 0x005D6890  MultiplayerGameMode::FindStartingCell  this=MultiplayerGameMode  sig=csp ====
_DWORD *__stdcall ObserverClass::FindStartingCell(MultiplayerGameMode *this, int a2, int a3, int a4)
{
  double v4; // st7
  int v5; // esi
  int v6; // eax
  int *p_uniqueId; // ecx
  House *v8; // ecx
  int v9; // esi
  int v10; // esi
  int v12; // esi
  House *v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // esi
  int v19; // eax
  double v20; // [esp+0h] [ebp-28h]
  int v21; // [esp+18h] [ebp-10h]
  House *v22; // [esp+1Ch] [ebp-Ch]
  House *v23; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  int v26; // [esp+24h] [ebp-4h]
  int v27; // [esp+24h] [ebp-4h]

  v5 = 0; /*0x5d68a5*/
  v6 = *(_DWORD *)(a3 + 16); /*0x5d68a7*/
  if ( v6 > 0 ) /*0x5d68ac*/
  {
    p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5d68ae*/
    do /*0x5d68bf*/
    {
      if ( *p_uniqueId != -1 ) /*0x5d68b7*/
        break; /*0x5d68b7*/
      ++v5; /*0x5d68b9*/
      ++p_uniqueId; /*0x5d68ba*/
    }
    while ( v5 < v6 ); /*0x5d68bf*/
  }
  if ( v5 == v6 ) /*0x5d68c3*/
  {
    byte_ABFDD4 = 0; /*0x5d68d1*/
    byte_ABFDD5 = 0; /*0x5d68d8*/
    v8 = (House *)*((_DWORD *)stru_A80220.? + a2); /*0x5d68df*/
    v22 = v8; /*0x5d68e4*/
    if ( !v8 ) /*0x5d68e8*/
      goto LABEL_13; /*0x5d68e8*/
    v9 = 0; /*0x5d68ef*/
    if ( dword_A8DA84 <= 0 ) /*0x5d68f3*/
      goto LABEL_13; /*0x5d68f3*/
    while ( !(unsigned __int8)House::IsCurrentPlayer(v8) /*0x5d6922*/
         || wcscmp((const wchar_t *)&v22[68].House_field_0x298 + 1, (const wchar_t *)dword_A8DA78[v9]) )
    {
      if ( ++v9 >= dword_A8DA84 ) /*0x5d692c*/
        goto LABEL_13; /*0x5d692c*/
      v8 = v22; /*0x5d68f7*/
    }
    if ( *(_DWORD *)(dword_A8DA78[v9] + 107) != -1 ) /*0x5d69a1*/
    {
LABEL_13:
      v10 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)(a3 + 16) - 1); /*0x5d692e*/
      Debug::Log(); /*0x5d695f*/
      *(_BYTE *)(v10 + a4) = 1; /*0x5d696a*/
      *(&dword_A8B230[124].uniqueId + v10) = a2; /*0x5d6977*/
      *(_DWORD *)this->__pad_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v10); /*0x5d6984*/
      return this->__pad_0; /*0x5d698c*/
    }
    v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)(a3 + 16) - 1); /*0x5d69bd*/
    *(_BYTE *)(v12 + a4) = 1; /*0x5d69c1*/
    *(&dword_A8B230[124].uniqueId + v12) = a2; /*0x5d69ca*/
    byte_ABFDD4 = 1; /*0x5d69d1*/
    goto LABEL_38; /*0x5d69ed*/
  }
  if ( byte_ABFDD4 && !byte_ABFDD5 ) /*0x5d6a02*/
  {
    byte_ABFDD5 = 1; /*0x5d6a07*/
    *(&dword_A8B230[124].uniqueId + v5) = a2; /*0x5d6a0e*/
    *(_DWORD *)this->__pad_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v5); /*0x5d6a1e*/
    return this->__pad_0; /*0x5d6a26*/
  }
  v13 = (House *)*((_DWORD *)stru_A80220.? + a2); /*0x5d6a31*/
  v23 = v13; /*0x5d6a36*/
  if ( !v13 ) /*0x5d6a3a*/
    goto LABEL_26; /*0x5d6a3a*/
  v14 = 0; /*0x5d6a41*/
  if ( dword_A8DA84 <= 0 ) /*0x5d6a45*/
    goto LABEL_26; /*0x5d6a45*/
  while ( !(unsigned __int8)House::IsCurrentPlayer(v13) /*0x5d6a75*/
       || wcscmp((const wchar_t *)&v23[68].House_field_0x298 + 1, (const wchar_t *)dword_A8DA78[v14]) )
  {
    if ( ++v14 >= dword_A8DA84 ) /*0x5d6a83*/
      goto LABEL_26; /*0x5d6a83*/
    v13 = v23; /*0x5d6a49*/
  }
  if ( *(_DWORD *)(dword_A8DA78[v14] + 107) != -1 ) /*0x5d6b98*/
  {
LABEL_26:
    v15 = *(_DWORD *)(a3 + 16); /*0x5d6a85*/
    v12 = -1; /*0x5d6a88*/
    v16 = 0; /*0x5d6a8b*/
    v25 = -1; /*0x5d6a8d*/
    for ( i = -1; v16 < v15; ++v16 ) /*0x5d6a97*/
    {
      if ( !*(_BYTE *)(v16 + a4) ) /*0x5d6aa0*/
      {
        v17 = 0; /*0x5d6aaa*/
        v18 = 0; /*0x5d6aac*/
        v21 = 0; /*0x5d6ab0*/
        if ( v15 > 0 ) /*0x5d6ab4*/
        {
          do /*0x5d6b18*/
          {
            if ( *(_BYTE *)(v18 + a4) ) /*0x5d6ab9*/
            {
              v19 = *(_DWORD *)(a3 + 4); /*0x5d6abf*/
              v26 = (__int16)(*(_WORD *)(v19 + 4 * v16) - *(_WORD *)(v19 + 4 * v18)); /*0x5d6add*/
              __asm { fild [esp+28h+var_4] } /*0x5d6ae1*/
              v27 = (__int16)(*(_WORD *)(v19 + 4 * v16 + 2) - *(_WORD *)(v19 + 4 * v18 + 2)); /*0x5d6ae5*/
              __asm /*0x5d6ae9*/
              {
                fild [esp+28h+var_4]
                fld st
                fmul st, st(1)
                fld st(2)
                fmul st, st(3)
                faddp st(1), st
                fstp [esp+28h+var_28]; double
                fstp st
                fstp st
              }
              Math::Sqrt(v20); /*0x5d6afe*/
              v21 += (__int16)Math::RoundToInt(v4); /*0x5d6b0e*/
            }
            ++v18; /*0x5d6b15*/
          }
          while ( v18 < *(_DWORD *)(a3 + 16) ); /*0x5d6b18*/
          v17 = v21; /*0x5d6b1a*/
        }
        if ( v17 > v25 ) /*0x5d6b22*/
        {
          v25 = v17; /*0x5d6b24*/
          i = v16; /*0x5d6b28*/
        }
        v12 = i; /*0x5d6b2c*/
      }
      v15 = *(_DWORD *)(a3 + 16); /*0x5d6b30*/
    }
    *(_BYTE *)(v12 + a4) = 1; /*0x5d6b42*/
    *(&dword_A8B230[124].uniqueId + v12) = a2; /*0x5d6b4c*/
LABEL_38:
    Debug::Log(); /*0x5d6b6a*/
    *(_DWORD *)this->__pad_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v12); /*0x5d6b7b*/
    return this->__pad_0; /*0x5d6b83*/
  }
  byte_ABFDD5 = 1; /*0x5d6ba0*/
  byte_ABFDD4 = 1; /*0x5d6ba5*/
  Debug::Log(); /*0x5d6bc0*/
  *(_DWORD *)this->__pad_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v5); /*0x5d6bd3*/
  return this->__pad_0; /*0x5d6986*/
}



// ==== 0x005D6BE0  MultiplayerGameMode::AssignStartPositions  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass::AssignStartPositions(MultiplayerGameMode *this)
{
  int i; // edi
  HouseClass *v2; // ecx
  int startingAllies; // esi
  Multiplayer v5[4]; // [esp+4h] [ebp-18h] BYREF
  void *Block; // [esp+8h] [ebp-14h]
  char v7; // [esp+11h] [ebp-Bh]

  Multiplayer::FindStartPositions(v5); /*0x5d6bec*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x5d6bfa*/
  {
    v2 = (HouseClass *)*((_DWORD *)stru_A80220.? + i); /*0x5d6c02*/
    if ( !*(_BYTE *)(v2->relatedTagsCapacity + 422) ) /*0x5d6c08*/
    {
      startingAllies = v2->startingAllies; /*0x5d6c12*/
      if ( startingAllies != -2 ) /*0x5d6c1b*/
      {
        HouseClass::SetMapSeed(v2, *((_DWORD *)Block + startingAllies)); /*0x5d6c25*/
        *(&dword_A8B230[124].uniqueId + startingAllies) = i; /*0x5d6c2f*/
      }
    }
  }
  *(_DWORD *)v5 = &VectorClass<Cell>::`vftable'; /*0x5d6c45*/
  if ( Block && v7 ) /*0x5d6c58*/
    __3_YAXPAX_Z(Block); /*0x5d6c5b*/
  return 1; /*0x5d6c4f*/
}



// ==== 0x005D6C70  MultiplayerGameMode::AssignStartingPoints  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::AssignStartingPoints(MultiplayerGameMode *this, char a2)
{
  int v2; // eax
  int *p_uniqueId; // ecx
  int i; // esi
  HouseClass *v5; // edi
  char v6; // bl
  int v7; // edx
  int v8; // eax
  int *v9; // ecx
  int v11; // [esp-14h] [ebp-40h]
  Multiplayer v13[16]; // [esp+4h] [ebp-28h] BYREF
  Multiplayer v14[4]; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  char v16; // [esp+21h] [ebp-Bh]

  Multiplayer::FindStartPositions(v14); /*0x5d6c7f*/
  v2 = 0; /*0x5d6c8a*/
  p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5d6c8c*/
  do /*0x5d6caa*/
    v13[v2++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5d6c97*/
  while ( v2 < 16 ); /*0x5d6caa*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x5d6cb6*/
  {
    v5 = (HouseClass *)*((_DWORD *)stru_A80220.? + i); /*0x5d6cc5*/
    if ( !*(_BYTE *)(v5->relatedTagsCapacity + 422) ) /*0x5d6ccb*/
    {
      v6 = 0; /*0x5d6cdb*/
      v7 = -1; /*0x5d6cdd*/
      v8 = 0; /*0x5d6ce0*/
      v9 = &dword_A8B230[124].uniqueId; /*0x5d6ce2*/
      do /*0x5d6cf7*/
      {
        if ( *v9 == i ) /*0x5d6cea*/
        {
          v6 = 1; /*0x5d6cec*/
          v7 = v8; /*0x5d6cee*/
        }
        ++v8; /*0x5d6cf0*/
        ++v9; /*0x5d6cf1*/
      }
      while ( v8 < 16 ); /*0x5d6cf7*/
      if ( v6 ) /*0x5d6cfb*/
      {
        HouseClass::SetMapSeed(v5, *((_DWORD *)Block + v7)); /*0x5d6d3a*/
      }
      else
      {
        Debug::Log(); /*0x5d6d07*/
        v11 = *(_DWORD *)(*(int (__thiscall **)(MultiplayerGameMode *, char *, int, Multiplayer *, Multiplayer *))(*(_DWORD *)this->__pad_0 + 196))( /*0x5d6d2d*/
                           this,
                           &a2,
                           i,
                           v14,
                           v13);
        HouseClass::SetMapSeed(v5, v11); /*0x5d6d2e*/
      }
    }
  }
  *(_DWORD *)v14 = &VectorClass<Cell>::`vftable'; /*0x5d6d54*/
  if ( Block && v16 ) /*0x5d6d67*/
    __3_YAXPAX_Z(Block); /*0x5d6d6a*/
  return 1; /*0x5d6d74*/
}



// ==== 0x005D6D80  ObjectClass::ComputeMultiEngineerAdjustment  this=ObjectClass  sig=csp ====
char __thiscall ComputeMultiEngineerAdjustment(TechnoClass *this)
{
  int v1; // ebp
  int v2; // edx
  HouseClass *v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  RulesClass *v7; // ebp
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // edx
  int v12; // eax
  int i; // esi
  int v14; // ecx
  int v15; // ebx
  int v16; // esi
  int v17; // edi
  int ptr_0; // edx
  int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h]
  TechnoClass *v22; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x5d6d8a*/
  v22 = this; /*0x5d6d90*/
  if ( *(int *)&stru_A8B250.__pad_0[32] > 0 ) /*0x5d6d94*/
  {
    v2 = dword_A80238; /*0x5d6d9a*/
    v20 = 0; /*0x5d6da0*/
    if ( dword_A80238 > 0 ) /*0x5d6da6*/
    {
      v3 = dword_A8022C; /*0x5d6da8*/
      do /*0x5d6dd9*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(v3->ptr_0 + 52) + 422) ) /*0x5d6db5*/
          v20 |= 1 << *(_DWORD *)(*(_DWORD *)(v3->ptr_0 + 52) + 180); /*0x5d6dd1*/
        v3 = (HouseClass *)((char *)v3 + 4); /*0x5d6dd5*/
        --v2; /*0x5d6dd8*/
      }
      while ( v2 ); /*0x5d6dd9*/
    }
    v4 = 0; /*0x5d6de1*/
    v5 = 0; /*0x5d6de3*/
    v6 = 0; /*0x5d6de5*/
    v21 = 0; /*0x5d6de9*/
    if ( dword_A83CF0 > 0 ) /*0x5d6ded*/
    {
      v7 = dword_8871E0; /*0x5d6def*/
      do /*0x5d6e66*/
      {
        v8 = *((_DWORD *)dword_A83CE4 + v6); /*0x5d6dfb*/
        if ( *(_BYTE *)(v8 + 1749) && (*(_DWORD *)(v8 + 1740) & v20) != 0 && *(_DWORD *)(v8 + 1588) <= g_RulesInitConfig ) /*0x5d6e24*/
        {
          v9 = v7->AutocreateTime[1]; /*0x5d6e26*/
          v10 = 0; /*0x5d6e2c*/
          if ( v9 <= 0 ) /*0x5d6e30*/
          {
LABEL_16:
            ++v5; /*0x5d6e44*/
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 172))(v8); /*0x5d6e47*/
            v7 = dword_8871E0; /*0x5d6e4d*/
            v4 += v12; /*0x5d6e53*/
          }
          else
          {
            v11 = (_DWORD *)v7->ReloadRate[0]; /*0x5d6e32*/
            while ( *v11 != v8 ) /*0x5d6e3a*/
            {
              ++v10; /*0x5d6e3c*/
              ++v11; /*0x5d6e3d*/
              if ( v10 >= v9 ) /*0x5d6e42*/
                goto LABEL_16; /*0x5d6e42*/
            }
          }
        }
        v6 = ++v21; /*0x5d6e5f*/
      }
      while ( v21 < dword_A83CF0 ); /*0x5d6e66*/
    }
    for ( i = 0; i < dword_A8E358; ++i ) /*0x5d6e71*/
    {
      v14 = *((_DWORD *)dword_A8E34C + i); /*0x5d6e79*/
      if ( *(_BYTE *)(v14 + 1749) /*0x5d6ea1*/
        && (*(_DWORD *)(v14 + 1740) & v20) != 0
        && *(_DWORD *)(v14 + 1588) <= g_RulesInitConfig )
      {
        ++v5; /*0x5d6ea5*/
        v4 += (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 172))(v14); /*0x5d6eac*/
      }
    }
    if ( !v5 ) /*0x5d6eba*/
      v5 = 1; /*0x5d6ebc*/
    v1 = *(_DWORD *)&stru_A8B250.__pad_0[32] * ((v4 + v5 / 2) / v5); /*0x5d6ecf*/
  }
  v15 = 0; /*0x5d6edb*/
  if ( dword_A80238 <= 0 ) /*0x5d6edf*/
  {
LABEL_42:
    Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 0xFFFF); /*0x5d6feb*/
    Debug::Log(); /*0x5d7009*/
    return 1; /*0x5d701a*/
  }
  while ( 1 ) /*0x5d6eea*/
  {
    v16 = *(&dword_A8022C->ptr_0 + v15); /*0x5d6eea*/
    if ( *(_BYTE *)(*(_DWORD *)(v16 + 52) + 422) ) /*0x5d6ef0*/
      goto LABEL_41; /*0x5d6ef0*/
    if ( v16 ) /*0x5d6f00*/
    {
      v17 = 0; /*0x5d6f07*/
      if ( dword_A8DA84 > 0 ) /*0x5d6f0b*/
      {
        while ( !(unsigned __int8)House::IsCurrentPlayer((House *)v16) /*0x5d6f33*/
             || wcscmp((const wchar_t *)(v16 + 90154), (const wchar_t *)dword_A8DA78[v17]) )
        {
          if ( ++v17 >= dword_A8DA84 ) /*0x5d6f3d*/
            goto LABEL_36; /*0x5d6f3d*/
        }
        if ( *(_DWORD *)(dword_A8DA78[v17] + 107) == -1 ) /*0x5d6f53*/
          goto LABEL_41; /*0x5d6f53*/
      }
    }
LABEL_36:
    ptr_0 = v22->ptr_0; /*0x5d6f63*/
    v20 = v1; /*0x5d6f65*/
    if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *, int, int *))(ptr_0 + 200))(v22, v16, &v20) /*0x5d6f83*/
      || !(*(unsigned __int8 (__thiscall **)(TechnoClass *, int, int *))(v22->ptr_0 + 204))(v22, v16, &v20) )
    {
      return 0; /*0x5d7013*/
    }
    if ( v20 > 0 ) /*0x5d6f97*/
      HouseClass::AddPower((HouseClass *)v16, v20); /*0x5d6f9c*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21920) + 12))(v16 + 21920); /*0x5d6fad*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21980) + 12))(v16 + 21980); /*0x5d6fbc*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21960) + 12))(v16 + 21960); /*0x5d6fcb*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21940) + 12))(v16 + 21940); /*0x5d6fda*/
LABEL_41:
    if ( ++v15 >= dword_A80238 ) /*0x5d6fe5*/
      goto LABEL_42; /*0x5d6fe5*/
  }
}



// ==== 0x005D7030  MultiplayerGameMode::CreateMCV  this=MultiplayerGameMode  sig=csp ====
char __stdcall AI::CreateMCV(MultiplayerGameMode *this, int a2)
{
  HouseClass *v3; // edi
  int v4; // esi
  int *v5; // eax
  int *v6; // eax
  int *v7; // esi
  int v8; // ebx
  _DWORD *StartCoords; // eax
  __int16 *CurrentOption; // eax
  _DWORD v11[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !stru_A8B250.__pad_0[8] ) /*0x5d703c*/
    return 1; /*0x5d7045*/
  v3 = (HouseClass *)this; /*0x5d704d*/
  v4 = BuildingClass::FindBySWType((BuildingClass *)this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2848); /*0x5d705e*/
  if ( v4 ) /*0x5d7062*/
  {
    v5 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x5d7069*/
    if ( v5 ) /*0x5d7073*/
    {
      v6 = (int *)UnitClass::Construct(v5, v4, v3); /*0x5d7079*/
      v7 = v6; /*0x5d707e*/
      if ( v6 ) /*0x5d7082*/
      {
        v8 = *v6; /*0x5d7085*/
        StartCoords = HouseClass::GetStartCoords(v3, v11); /*0x5d7090*/
        if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(v8 + 216))(v7, StartCoords, 0) ) /*0x5d7098*/
          return 1; /*0x5d70aa*/
        CurrentOption = (__int16 *)HouseClass::GetCurrentOption(v3, &this); /*0x5d70b6*/
        if ( FindInfantryDeployPosition(v7, CurrentOption, 1) ) /*0x5d70bf*/
          return 1; /*0x5d70cf*/
        (*(void (__thiscall **)(int *, int))(*v7 + 32))(v7, 1); /*0x5d70d8*/
      }
    }
  }
  return 0; /*0x5d703e*/
}


// ==== 0x005D70F0  MultiplayerGameMode::AIDecision  this=MultiplayerGameMode  sig=csp ====
char __stdcall HouseClass::AIDecision(MultiplayerGameMode *this, int *a2)
{
  int v2; // ebp
  int InfantryTypeVector_field_0x14; // edx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edi
  int InfantryTypeVector_field_0x08; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v18; // ebp
  int v19; // ecx
  int v20; // eax
  int InfantryTypeVector_field_0x1C; // edx
  int v22; // esi
  void **v23; // eax
  int *v24; // edi
  __int16 *CurrentOption; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h] BYREF
  InfantryTypeVector v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+38h] [ebp-10h]
  char v32; // [esp+3Dh] [ebp-Bh]
  int v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]

  v2 = 0; /*0x5d70fb*/
  if ( *a2 <= 0 ) /*0x5d7101*/
    return 1; /*0x5d7492*/
  v28 = *a2; /*0x5d710d*/
  UnitTypeVector::Construct2((UnitTypeVector *)&v30.InfantryTypeVector_field_0x18, 0, 0); /*0x5d7111*/
  v30.InfantryTypeVector_field_0x18 = (int)&DynamicVectorClass<UnitTypeClass *>::`vftable'; /*0x5d711c*/
  v34 = 10; /*0x5d7124*/
  v33 = 0; /*0x5d712c*/
  InfantryTypeVector::ConstructFromData(&v30, 0, 0); /*0x5d7130*/
  InfantryTypeVector_field_0x14 = 10; /*0x5d7139*/
  *(_DWORD *)v30.__pad_0 = &DynamicVectorClass<InfantryTypeClass *>::`vftable'; /*0x5d713e*/
  v30.InfantryTypeVector_field_0x14 = 10; /*0x5d7146*/
  v4 = this->u8_D; /*0x5d714a*/
  v30.InfantryTypeVector_field_0x10 = 0; /*0x5d714d*/
  v5 = 1 << *(_DWORD *)(v4 + 180); /*0x5d7161*/
  if ( dword_A83CF0 <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = v31; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *((_DWORD *)dword_A83CE4 + v2); /*0x5d7175*/
    if ( *(_BYTE *)(v7 + 1749) /*0x5d719e*/
      && (v5 & *(_DWORD *)(v7 + 1740)) != 0
      && *(_DWORD *)(v7 + 1588) <= *((_DWORD *)this + 117) )
    {
      v8 = 0; /*0x5d71a6*/
      v9 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2864); /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
LABEL_11:
        if ( v33 < v6 ) /*0x5d71c8*/
          goto LABEL_16; /*0x5d71c8*/
        if ( (v32 || !v6) && v34 > 0 ) /*0x5d71dc*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v30.InfantryTypeVector_field_0x18 + 8))( /*0x5d71eb*/
                 &v30.InfantryTypeVector_field_0x18,
                 v34 + v6,
                 0) )
          {
LABEL_16:
            v11 = v33++; /*0x5d71f2*/
            *(_DWORD *)(v30.InfantryTypeVector_field_0x1C + 4 * v11) = v7; /*0x5d7201*/
          }
          v6 = v31; /*0x5d7204*/
        }
      }
      else
      {
        v10 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2852); /*0x5d71b2*/
        while ( *v10 != v7 ) /*0x5d71ba*/
        {
          ++v8; /*0x5d71bc*/
          ++v10; /*0x5d71bd*/
          if ( v8 >= v9 ) /*0x5d71c2*/
            goto LABEL_11; /*0x5d71c2*/
        }
      }
    }
    ++v2; /*0x5d7208*/
  }
  while ( v2 < dword_A83CF0 ); /*0x5d7210*/
  InfantryTypeVector_field_0x14 = v30.InfantryTypeVector_field_0x14; /*0x5d7216*/
LABEL_20:
  v12 = 0; /*0x5d721a*/
  if ( dword_A8E358 > 0 ) /*0x5d7223*/
  {
    InfantryTypeVector_field_0x08 = v30.InfantryTypeVector_field_0x08; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *((_DWORD *)dword_A8E34C + v12); /*0x5d7239*/
      if ( *(_BYTE *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(_DWORD *)(v14 + 1740)) != 0
        && *(_DWORD *)(v14 + 1588) <= *((_DWORD *)this + 117) )
      {
        if ( v30.InfantryTypeVector_field_0x10 < InfantryTypeVector_field_0x08 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( (BYTE1(v30.InfantryTypeVector_field_0x0C) || !InfantryTypeVector_field_0x08) /*0x5d7274*/
          && InfantryTypeVector_field_0x14 > 0 )
        {
          break; /*0x5d7274*/
        }
      }
LABEL_33:
      if ( ++v12 >= dword_A8E358 ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
      InfantryTypeVector_field_0x14 = v30.InfantryTypeVector_field_0x14; /*0x5d722f*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(InfantryTypeVector *, int, _DWORD))(*(_DWORD *)v30.__pad_0 + 8))( /*0x5d7283*/
           &v30,
           InfantryTypeVector_field_0x14 + InfantryTypeVector_field_0x08,
           0) )
    {
LABEL_31:
      v15 = v30.InfantryTypeVector_field_0x10++; /*0x5d728a*/
      *(_DWORD *)(v30.InfantryTypeVector_field_0x04 + 4 * v15) = v14; /*0x5d7299*/
    }
    InfantryTypeVector_field_0x08 = v30.InfantryTypeVector_field_0x08; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
LABEL_34:
  v16 = v33; /*0x5d72ab*/
  if ( v33 || v30.InfantryTypeVector_field_0x10 ) /*0x5d72b9*/
  {
    v18 = 20; /*0x5d731a*/
    v19 = *a2; /*0x5d731f*/
    if ( *a2 > 0 ) /*0x5d7323*/
    {
      while ( v18 > 0 ) /*0x5d7331*/
      {
        if ( v19 > v28 / 3 && v16 ) /*0x5d734d*/
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v16 - 1); /*0x5d735f*/
          InfantryTypeVector_field_0x1C = v30.InfantryTypeVector_field_0x1C; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v30.InfantryTypeVector_field_0x10 - 1); /*0x5d737e*/
          InfantryTypeVector_field_0x1C = v30.InfantryTypeVector_field_0x04; /*0x5d7383*/
        }
        v22 = *(_DWORD *)(InfantryTypeVector_field_0x1C + 4 * v20); /*0x5d7387*/
        v23 = (void **)(*(int (__thiscall **)(int, MultiplayerGameMode *))(*(_DWORD *)v22 + 140))(v22, this); /*0x5d7393*/
        v24 = (int *)__RTDynamicCast( /*0x5d73b4*/
                       v23,
                       0,
                       &ObjectClass `RTTI Type Descriptor',
                       &TechnoClass `RTTI Type Descriptor',
                       0);
        CurrentOption = (__int16 *)HouseClass::GetCurrentOption((HouseClass *)this, &v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition(v24, CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a2; /*0x5d73eb*/
          *a2 -= v27; /*0x5d73f3*/
          if ( ((int)dword_A8B230->ptr_0 & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag((Timer *)(v24 + 84), 1); /*0x5d740a*/
          if ( (unsigned __int8)House::IsCurrentPlayer((House *)this) ) /*0x5d7411*/
            (*(void (__thiscall **)(int *, int))(*v24 + 496))(v24, 5); /*0x5d7420*/
          else
            (*(void (__thiscall **)(int *, int))(*v24 + 496))(v24, 11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            (*(void (__thiscall **)(int *, int))(*v24 + 32))(v24, 1); /*0x5d73d7*/
          v26 = a2; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v33; /*0x5d732b*/
      }
    }
    *(_DWORD *)v30.__pad_0 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x5d7446*/
    if ( v30.InfantryTypeVector_field_0x04 && BYTE1(v30.InfantryTypeVector_field_0x0C) ) /*0x5d7456*/
    {
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x04); /*0x5d7459*/
      v30.InfantryTypeVector_field_0x04 = 0; /*0x5d7461*/
    }
    BYTE1(v30.InfantryTypeVector_field_0x0C) = 0; /*0x5d7469*/
    v30.InfantryTypeVector_field_0x08 = 0; /*0x5d7470*/
    v30.InfantryTypeVector_field_0x18 = (int)&VectorClass<UnitTypeClass *>::`vftable'; /*0x5d7474*/
    if ( v30.InfantryTypeVector_field_0x1C && v32 ) /*0x5d7484*/
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x1C); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
  *(_DWORD *)v30.__pad_0 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x5d72bf*/
  if ( v30.InfantryTypeVector_field_0x04 && BYTE1(v30.InfantryTypeVector_field_0x0C) ) /*0x5d72d1*/
  {
    __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x04); /*0x5d72d4*/
    v30.InfantryTypeVector_field_0x04 = 0; /*0x5d72dc*/
  }
  BYTE1(v30.InfantryTypeVector_field_0x0C) = 0; /*0x5d72e4*/
  v30.InfantryTypeVector_field_0x08 = 0; /*0x5d72eb*/
  v30.InfantryTypeVector_field_0x18 = (int)&VectorClass<UnitTypeClass *>::`vftable'; /*0x5d72ef*/
  if ( v30.InfantryTypeVector_field_0x1C ) /*0x5d72f7*/
  {
    if ( v32 ) /*0x5d72ff*/
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x1C); /*0x5d7302*/
  }
  return 0; /*0x5d730a*/
}



// ==== 0x005D74A0  MultiplayerGameMode::InitAlliances  this=MultiplayerGameMode  sig=csp ====
char HouseClass::InitAlliances(MultiplayerGameMode *this)
{
  int nextArrayIndex; // edx
  _DWORD *ptr_C; // eax
  int v3; // edi
  int v4; // ebp
  int *v5; // ebx
  int v6; // ecx
  int *v7; // esi
  int v9; // [esp+0h] [ebp-4h]

  nextArrayIndex = stru_A80220.?; /*0x5d74a1*/
  if ( stru_A80220.? <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  ptr_C = stru_A80220.?; /*0x5d74af*/
  v3 = 1; /*0x5d74b8*/
  v4 = 0; /*0x5d74bd*/
  v9 = 1; /*0x5d74bf*/
  do /*0x5d7540*/
  {
    v5 = (int *)ptr_C[v4]; /*0x5d74c3*/
    if ( !*(_BYTE *)(v5[13] + 422) ) /*0x5d74c9*/
    {
      v6 = v5[22551]; /*0x5d74d4*/
      if ( v6 != -2 && v6 != -1 && v3 < nextArrayIndex ) /*0x5d74e6*/
      {
        do /*0x5d752d*/
        {
          v7 = (int *)ptr_C[v3]; /*0x5d74e8*/
          if ( !*(_BYTE *)(v7[13] + 422) && *(_DWORD *)(ptr_C[v4] + 90204) == v7[22551] ) /*0x5d7509*/
          {
            HouseClass::HandleAlliance(v5, (int)v7, 0); /*0x5d7510*/
            HouseClass::HandleAlliance(v7, (int)v5, 0); /*0x5d751a*/
            ptr_C = stru_A80220.?; /*0x5d751f*/
          }
          nextArrayIndex = stru_A80220.?; /*0x5d7524*/
          ++v3; /*0x5d752a*/
        }
        while ( v3 < stru_A80220.? ); /*0x5d752d*/
        v3 = v9; /*0x5d752f*/
      }
    }
    ++v3; /*0x5d7533*/
    ++v4; /*0x5d7534*/
    v9 = v3; /*0x5d7537*/
  }
  while ( v3 - 1 < nextArrayIndex ); /*0x5d7540*/
  return 1; /*0x5d7549*/
}



// ==== 0x005D7550  sub_5D7550  this=-  sig=csp ====
int __stdcall sub_5D7550(int a1)
{
  return *(_DWORD *)(*(_DWORD *)&dword_A8022C->AbstractClass[4 * a1] + 90204); /*0x5d7563*/
}



// ==== 0x005D7570  MultiplayerGameMode::processAI  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::processAI(MultiplayerGameMode *this)
{
  return 1; /*0x5d7572*/
}



// ==== 0x005D7580  ObjectClass::method_5D7580  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall sub_5D7580(ObjectClass *this)
{
  this->AbstractClass = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7582*/
  return &this->AbstractClass; /*0x5d7588*/
}



// ==== 0x005D7590  LoadMultiplayerModesList  this=-  sig=csp ====
int __fastcall LoadMultiplayerModesList(char **a1, int a2)
{
  char **v2; // esi
  int v3; // eax
  int v4; // edi
  int String; // esi
  int v6; // esi
  char *v7; // eax
  wchar_t *StringCSF; // eax
  int v9; // esi
  char *v10; // eax
  wchar_t *v11; // eax
  int v12; // esi
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  char v16; // al
  int v17; // esi
  ObjectClass v19; // [esp+20h] [ebp-114h] BYREF
  int v20[3]; // [esp+120h] [ebp-14h] BYREF
  int v21; // [esp+12Ch] [ebp-8h]

  v2 = a1; /*0x5d7598*/
  v19.customSound = a2; /*0x5d759a*/
  v19.customSound_controller[3] = (int)a1; /*0x5d75aa*/
  CCFileClass::Construct((CCFileClass *)&v19.lineTrailer, aMpmodesmdIni); /*0x5d75ae*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v19.lineTrailer, 0) ) /*0x5d75bd*/
  {
    v19.health = 0; /*0x5d75ce*/
    v19.estimatedHealth = 0; /*0x5d75d2*/
    GenericList::Constructor((GenericList *)&v19.isOnMap); /*0x5d75d6*/
    *(_DWORD *)&v19.isOnMap = &List<INIClass::INISection *>::`vftable'; /*0x5d75e8*/
    memset(&v19.isAliveFlag, 0, 13); /*0x5d75f3*/
    v19.location[1] = 0; /*0x5d760f*/
    v19.location[2] = 0; /*0x5d7616*/
    *(_DWORD *)&v19.bombVisible = &INIClass::`vftable'; /*0x5d761d*/
    if ( FileStraw::Open((FileStraw *)&v19.bombVisible, (int)&v19.lineTrailer, 0) > 0 ) /*0x5d762c*/
    {
      v19.customSound_controller[4] = INIClass::FindKey(&v19.bombVisible, v2); /*0x5d763e*/
      v19.owningHouseIndex = 0; /*0x5d7642*/
      if ( v19.customSound_controller[4] > 0 ) /*0x5d7646*/
      {
        while ( 1 ) /*0x5d766b*/
        {
          INIClass::GetStringByIndexEx((INIClass *)&v19.bombVisible, (char **)&v19.?, v2, v19.owningHouseIndex); /*0x5d766b*/
          __1_Timevec_std__QAE_XZ((const char **)&v19.?); /*0x5d7674*/
          v4 = v3; /*0x5d767d*/
          unknown_libname_73(&v19); /*0x5d767f*/
          String::Assign((String *)&v19.attachedBomb, &g_INI_DefaultBuffer); /*0x5d768d*/
          String = INIClass::ReadString( /*0x5d76b2*/
                     (INIClass *)&v19.bombVisible,
                     v2,
                     (char **)&v19.?,
                     (char **)&v19.attachedBomb,
                     (int)&v19);
          DeleteAndZero((ObjectClass *)&v19.attachedBomb); /*0x5d76b4*/
          if ( String <= 0 ) /*0x5d76bb*/
            goto LABEL_49; /*0x5d76bb*/
          unknown_libname_73(&v19.?); /*0x5d76c5*/
          v6 = String::Tokenize((String *)&v19, 0, Str, &v19.?); /*0x5d76e2*/
          if ( String::Length((String *)&v19.?) ) /*0x5d76e4*/
            break; /*0x5d76e4*/
LABEL_48:
          DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c50*/
LABEL_49:
          DeleteAndZero(&v19); /*0x5d7c59*/
          DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c66*/
          if ( ++v19.owningHouseIndex >= v19.customSound_controller[4] ) /*0x5d7c7a*/
            goto LABEL_50; /*0x5d7c7a*/
          v2 = (char **)v19.customSound_controller[3]; /*0x5d7655*/
        }
        String::Assign((String *)&v19.customSound_controller[1], asc_830A14); /*0x5d76fa*/
        String::TrimLeft((String *)&v19.?, (const char **)&v19.customSound_controller[1]); /*0x5d7708*/
        DeleteAndZero((ObjectClass *)&v19.customSound_controller[1]); /*0x5d7711*/
        String::Assign((String *)&v19.fallRate, asc_830A14); /*0x5d771f*/
        String::TrimRight((String *)&v19.?, (const char **)&v19.fallRate); /*0x5d772d*/
        DeleteAndZero((ObjectClass *)&v19.fallRate); /*0x5d7736*/
        v7 = String::GetOrEmpty((String *)&v19.?); /*0x5d7749*/
        StringCSF = GetStringCSF((wchar_t *)v7, 0, aDRa2mdpostMult, 1030); /*0x5d7752*/
        WideString::Assign((wchar_t **)&v19.?, StringCSF); /*0x5d775c*/
        unknown_libname_73(&v19.?); /*0x5d7765*/
        v9 = String::Tokenize((String *)&v19, v6, Str, &v19.?); /*0x5d7782*/
        if ( !String::Length((String *)&v19.?) ) /*0x5d778b*/
        {
LABEL_47:
          DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c3e*/
          DeleteAndZero::Alt((DeleteAndZero *)&v19.?); /*0x5d7c4b*/
          goto LABEL_48; /*0x5d7c4b*/
        }
        String::Assign((String *)&v19.ambientSoundController[4], asc_830A14); /*0x5d779a*/
        String::TrimLeft((String *)&v19.?, (const char **)&v19.ambientSoundController[4]); /*0x5d77a8*/
        DeleteAndZero((ObjectClass *)&v19.ambientSoundController[4]); /*0x5d77b1*/
        String::Assign((String *)&v19.ambientSoundController[1], asc_830A14); /*0x5d77bf*/
        String::TrimRight((String *)&v19.?, (const char **)&v19.ambientSoundController[1]); /*0x5d77cd*/
        DeleteAndZero((ObjectClass *)&v19.ambientSoundController[1]); /*0x5d77d6*/
        v10 = String::GetOrEmpty((String *)&v19.?); /*0x5d77e9*/
        v11 = GetStringCSF((wchar_t *)v10, 0, aDRa2mdpostMult, 1041); /*0x5d77f2*/
        WideString::Assign((wchar_t **)&v19.?, v11); /*0x5d77fc*/
        unknown_libname_73(&v19.?); /*0x5d7805*/
        v12 = String::Tokenize((String *)&v19, v9, Str, &v19.?); /*0x5d7822*/
        if ( !String::Length((String *)&v19.?) ) /*0x5d782b*/
        {
LABEL_46:
          DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c2c*/
          DeleteAndZero::Alt((DeleteAndZero *)&v19.?); /*0x5d7c39*/
          goto LABEL_47; /*0x5d7c39*/
        }
        String::Assign((String *)v19.customSound_controller, asc_830A14); /*0x5d783a*/
        String::TrimLeft((String *)&v19.?, (const char **)v19.customSound_controller); /*0x5d7848*/
        DeleteAndZero((ObjectClass *)v19.customSound_controller); /*0x5d7851*/
        String::Assign((String *)&v19.ambientSoundController[3], asc_830A14); /*0x5d785f*/
        String::TrimRight((String *)&v19.?, (const char **)&v19.ambientSoundController[3]); /*0x5d786d*/
        DeleteAndZero((ObjectClass *)&v19.ambientSoundController[3]); /*0x5d7876*/
        unknown_libname_73(&v19.?); /*0x5d787f*/
        v13 = String::Tokenize((String *)&v19, v12, Str, (void **)&v19.?); /*0x5d789c*/
        String::Assign((String *)&v19.customSound_controller[2], asc_830A14); /*0x5d78a3*/
        String::TrimLeft((String *)&v19.?, (const char **)&v19.customSound_controller[2]); /*0x5d78b1*/
        DeleteAndZero((ObjectClass *)&v19.customSound_controller[2]); /*0x5d78ba*/
        String::Assign((String *)&v19.nextObject, asc_830A14); /*0x5d78c8*/
        String::TrimRight((String *)&v19.?, (const char **)&v19.nextObject); /*0x5d78d6*/
        DeleteAndZero((ObjectClass *)&v19.nextObject); /*0x5d78df*/
        unknown_libname_73(&v19.?); /*0x5d78e8*/
        String::Tokenize((String *)&v19, v13, Str, (void **)&v19.?); /*0x5d78fc*/
        String::Assign((String *)&v19.attachedTag, asc_830A14); /*0x5d790a*/
        String::TrimLeft((String *)&v19.?, (const char **)&v19.attachedTag); /*0x5d7918*/
        DeleteAndZero((ObjectClass *)&v19.attachedTag); /*0x5d7921*/
        String::Assign((String *)v19.ambientSoundController, asc_830A14); /*0x5d792f*/
        String::TrimRight((String *)&v19.?, (const char **)v19.ambientSoundController); /*0x5d793d*/
        DeleteAndZero((ObjectClass *)v19.ambientSoundController); /*0x5d7946*/
        LOBYTE(v19.ambientSoundController[2]) = 1; /*0x5d794f*/
        if ( String::Length((String *)&v19.?) ) /*0x5d7954*/
        {
          v14 = String::GetOrEmpty((String *)&v19.?); /*0x5d7966*/
          LOBYTE(v19.ambientSoundController[2]) = _strcmpi(v14, g_Str_false) != 0; /*0x5d7979*/
        }
        if ( WideString::Length((const wchar_t **)&v19.?) /*0x5d79a3*/
          && String::Length((String *)&v19.?)
          && String::Length((String *)&v19.?) )
        {
          v15 = 0; /*0x5d79d3*/
          v19.occupant = (*(int (__thiscall **)(int, int *, void **, void **, int *, int, int))(*(_DWORD *)v19.customSound /*0x5d79d5*/
                                                                                              + 4))(
                           v19.customSound,
                           &v19.?,
                           &v19.?,
                           &v19.?,
                           &v19.?,
                           v19.ambientSoundController[2],
                           v4);
          v16 = g_MultiplayerMode; /*0x5d79d9*/
          while ( 1 ) /*0x5d79de*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d79e0*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d79eb*/
              MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d79f0*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d79fa*/
              *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7a05*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7a0b*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a11*/
              v16 = g_MultiplayerMode; /*0x5d7a16*/
            }
            if ( v15 >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7a2b*/
              break; /*0x5d7a2b*/
            if ( (v16 & 1) == 0 ) /*0x5d7a2f*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7a38*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7a3d*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7a43*/
              LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7a49*/
              *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7a56*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7a5c*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7a62*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a68*/
              v16 = g_MultiplayerMode; /*0x5d7a6d*/
            }
            if ( *(_DWORD *)(*(_DWORD *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * v15) + 40) > *(_DWORD *)(v19.occupant + 40) ) /*0x5d7a88*/
              break; /*0x5d7a88*/
            ++v15; /*0x5d7a8a*/
          }
          if ( v15 ) /*0x5d7a92*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d7b56*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7b5f*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7b64*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7b6a*/
              LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7b70*/
              *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7b7d*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7b83*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7b89*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7b8f*/
            }
            v17 = v15 - 1; /*0x5d7ba2*/
            if ( g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 /*0x5d7bcc*/
              && (!BYTE1(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C)
               && g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08
               || g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 <= 0
               || !(*(unsigned __int8 (__thiscall **)(MultiplayerGameMode *, int, _DWORD))(*(_DWORD *)g_MultiplayerModeConfig.__pad_0
                                                                                         + 8))(
                     &g_MultiplayerModeConfig,
                     g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08
                   + g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14,
                     0)) )
            {
              goto LABEL_45; /*0x5d7bd1*/
            }
            if ( v17 < g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 - 1 ) /*0x5d7bde*/
              memcpy( /*0x5d7bff*/
                (void *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * v17 + 8),
                (const void *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * (v17 + 1)),
                4 * (g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 + 0x3FFFFFFF * (v17 + 1)));
            *(_DWORD *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * v17 + 4) = v19.occupant; /*0x5d7c10*/
          }
          else
          {
            if ( (v16 & 1) == 0 ) /*0x5d7a9a*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7aa3*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7aa8*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7aae*/
              LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7ab4*/
              *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7ac1*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7ac7*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7acd*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7ad3*/
            }
            if ( g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 /*0x5d7b16*/
              && (!BYTE1(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C)
               && g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08
               || g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 <= 0
               || !(*(unsigned __int8 (__thiscall **)(MultiplayerGameMode *, int, _DWORD))(*(_DWORD *)g_MultiplayerModeConfig.__pad_0
                                                                                         + 8))(
                     &g_MultiplayerModeConfig,
                     g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08
                   + g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14,
                     0)) )
            {
              goto LABEL_45; /*0x5d7b1b*/
            }
            if ( g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7b28*/
              memcpy( /*0x5d7b3c*/
                (void *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4),
                (const void *)g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04,
                4 * g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10);
            *(_DWORD *)g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = v19.occupant; /*0x5d7b4d*/
          }
          ++g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10; /*0x5d7c14*/
        }
LABEL_45:
        DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c1a*/
        DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c27*/
        goto LABEL_46; /*0x5d7c27*/
      }
    }
LABEL_50:
    HashTable::DestroyHashTableINIClass((INIClass *)&v19.bombVisible); /*0x5d7c82*/
  }
  v19.lineTrailer = &CCFileClass::`vftable'; /*0x5d7c92*/
  v21 = 0; /*0x5d7c9d*/
  Vector::Clear((int)v20); /*0x5d7ca4*/
  v19.lineTrailer = &off_7E1668; /*0x5d7cb0*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v19.lineTrailer); /*0x5d7cc0*/
}



// ==== 0x005D7CD0  InitializerBase@MultiplayerGameMode::method_5D7CD0  this=InitializerBase@MultiplayerGameMode  sig=csp ====
void __thiscall sub_5D7CD0(_DWORD *this)
{
  *this = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7cd0*/
}



// ==== 0x005D7CE0  ObjectClass::CompleteGameInit  this=ObjectClass  sig=csp ====
int CompleteGameInit(ObjectClass *this)
{
  int i; // esi
  void (__thiscall ***v2)(_DWORD, int); // ecx
  String v4; // [esp+8h] [ebp-1Ch] BYREF
  void **v5; // [esp+10h] [ebp-14h] BYREF
  void **v6; // [esp+14h] [ebp-10h] BYREF
  void **v7; // [esp+18h] [ebp-Ch] BYREF
  void **v8; // [esp+1Ch] [ebp-8h] BYREF
  void **v9; // [esp+20h] [ebp-4h] BYREF

  for ( i = 0; ; ++i ) /*0x5d7ce5*/
  {
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7cf3*/
    {
      g_MultiplayerMode |= 1u; /*0x5d7cfd*/
      GameInit::InitMultiplayerModes((GameInit *)&g_MultiplayerModeConfig, 0, 0); /*0x5d7d08*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7d12*/
    }
    if ( i >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7d20*/
      break; /*0x5d7d20*/
    v2 = *(void (__thiscall ****)(_DWORD, int))(System_Init()[1] + 4 * i); /*0x5d7d2a*/
    if ( v2 ) /*0x5d7d32*/
      (**v2)(v2, 1); /*0x5d7d37*/
  }
  *(_DWORD *)&v4.m_3[1] = &MultiplayerGameMode::Initializer<MultiplayerBattle>::`vftable'; /*0x5d7d45*/
  String::Assign(&v4, aBattle); /*0x5d7d4d*/
  LoadMultiplayerModesList((char **)&v4, (int)&v4.m_3[1]); /*0x5d7d5a*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7d63*/
  v5 = &MultiplayerGameMode::Initializer<MultiplayerManBattle>::`vftable'; /*0x5d7d6c*/
  String::Assign(&v4, aManbattle); /*0x5d7d79*/
  LoadMultiplayerModesList((char **)&v4, (int)&v5); /*0x5d7d86*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7d8f*/
  v6 = &MultiplayerGameMode::Initializer<MultiplayerSiege>::`vftable'; /*0x5d7d98*/
  String::Assign(&v4, aSiege); /*0x5d7da5*/
  LoadMultiplayerModesList((char **)&v4, (int)&v6); /*0x5d7db2*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7dbb*/
  v7 = &MultiplayerGameMode::Initializer<UnholyAlliance>::`vftable'; /*0x5d7dc4*/
  String::Assign(&v4, aUnholy); /*0x5d7dd1*/
  LoadMultiplayerModesList((char **)&v4, (int)&v7); /*0x5d7dde*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7de7*/
  v8 = &MultiplayerGameMode::Initializer<FreeForAll>::`vftable'; /*0x5d7df0*/
  String::Assign(&v4, aFreeforall); /*0x5d7dfd*/
  LoadMultiplayerModesList((char **)&v4, (int)&v8); /*0x5d7e0a*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7e13*/
  v9 = &MultiplayerGameMode::Initializer<MPCooperative>::`vftable'; /*0x5d7e1c*/
  String::Assign(&v4, aCooperative); /*0x5d7e29*/
  LoadMultiplayerModesList((char **)&v4, (int)&v9); /*0x5d7e36*/
  return DeleteAndZero((ObjectClass *)&v4); /*0x5d7e44*/
}



// ==== 0x005D7E50  ObjectClass::WinMain_Helper_5D7E50  this=ObjectClass  sig=csp ====
char WinMain_Helper_5D7E50(ObjectClass *this)
{
  int i; // ebp
  char result; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx

  for ( i = 0; ; ++i ) /*0x5d7e56*/
  {
    result = g_MultiplayerMode; /*0x5d7e62*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7e69*/
    {
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7e75*/
      g_MultiplayerMode |= 1u; /*0x5d7e7b*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7e81*/
      LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7e87*/
      *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7e94*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7e9a*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7ea0*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d7ea6*/
    }
    if ( i >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7eb4*/
      break; /*0x5d7eb4*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7ebd*/
    {
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7ec9*/
      g_MultiplayerMode |= 1u; /*0x5d7ecf*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7ed5*/
      LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7edb*/
      *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7ee8*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7eee*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7ef4*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7efa*/
    }
    v3 = *(void (__thiscall ****)(_DWORD, int))(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * i); /*0x5d7f07*/
    if ( v3 ) /*0x5d7f0c*/
      (**v3)(v3, 1); /*0x5d7f12*/
  }
  return result; /*0x5d7f1a*/
}



// ==== 0x005D7F20  MultiplayerGameMode::QueryInterface  this=MultiplayerGameMode  sig=csp ====
char *__thiscall MultiplayerGameMode::QueryInterface(MultiplayerGameMode *this, char a2)
{
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v3 = 0; /*0x5d7f24*/
  for ( *(_DWORD *)this->__pad_0 = &MultiplayerGameMode::`vftable'; v3 < this->MultiplayerGameMode_field_0x18; ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (__thiscall ****)(_DWORD, int))(this->MultiplayerGameMode_field_0x0C + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (__thiscall **)(int *))(this->MultiplayerGameMode_field_0x08 + 12))(&this->MultiplayerGameMode_field_0x08); /*0x5d7f53*/
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((ObjectClass *)((char *)this + 48)); /*0x5d7f66*/
  DeleteAndZero((ObjectClass *)((char *)this + 44)); /*0x5d7f6e*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 3); /*0x5d7f76*/
  DeleteAndZero::Alt((DeleteAndZero *)((char *)this + 32)); /*0x5d7f7e*/
  MultiplayerGameMode_field_0x0C = (void *)this->MultiplayerGameMode_field_0x0C; /*0x5d7f83*/
  this->MultiplayerGameMode_field_0x08 = (int)&VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d7f86*/
  if ( MultiplayerGameMode_field_0x0C && BYTE1(this->MultiplayerGameMode_field_0x14) ) /*0x5d7f90*/
  {
    __3_YAXPAX_Z(MultiplayerGameMode_field_0x0C); /*0x5d7f98*/
    this->MultiplayerGameMode_field_0x0C = 0; /*0x5d7fa0*/
  }
  BYTE1(this->MultiplayerGameMode_field_0x14) = 0; /*0x5d7fab*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    __3_YAXPAX_Z(this); /*0x5d7fbb*/
  return this->__pad_0; /*0x5d7fc5*/
}



// ==== 0x005D7FD0  AbstractClass::checkVisibility  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::checkVisibility(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7fd9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fdf*/
    __3_YAXPAX_Z(this); /*0x5d7fe2*/
  return &this->ptr_0; /*0x5d7fec*/
}



// ==== 0x005D7FF0  InitializerBase@MultiplayerGameMode::??_Gfacet_locale_std__UAEPAXI_Z_127  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_127(_DWORD *Block, char a2)
{
  *Block = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7ff9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fff*/
    __3_YAXPAX_Z(Block); /*0x5d8002*/
  return Block; /*0x5d800c*/
}



// ==== 0x005D8010  InitializerBase@MultiplayerGameMode::??_Gfacet_locale_std__UAEPAXI_Z_128  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_128(_DWORD *Block, char a2)
{
  *Block = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8019*/
  if ( (a2 & 1) != 0 ) /*0x5d801f*/
    __3_YAXPAX_Z(Block); /*0x5d8022*/
  return Block; /*0x5d802c*/
}



// ==== 0x005D8030  AbstractClass::updateVisibilityState  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::updateVisibilityState(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8039*/
  if ( (a2 & 1) != 0 ) /*0x5d803f*/
    __3_YAXPAX_Z(this); /*0x5d8042*/
  return &this->ptr_0; /*0x5d804c*/
}



// ==== 0x005D8050  AbstractClass::processFogReveal  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::processFogReveal(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8059*/
  if ( (a2 & 1) != 0 ) /*0x5d805f*/
    __3_YAXPAX_Z(this); /*0x5d8062*/
  return &this->ptr_0; /*0x5d806c*/
}



// ==== 0x005D8070  AbstractClass::checkShroudState  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::checkShroudState(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8079*/
  if ( (a2 & 1) != 0 ) /*0x5d807f*/
    __3_YAXPAX_Z(this); /*0x5d8082*/
  return &this->ptr_0; /*0x5d808c*/
}



// ==== 0x005D8090  AbstractClass::updateShroudMap  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::updateShroudMap(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8099*/
  if ( (a2 & 1) != 0 ) /*0x5d809f*/
    __3_YAXPAX_Z(this); /*0x5d80a2*/
  return &this->ptr_0; /*0x5d80ac*/
}



// ==== 0x005D80B0  ?$DynamicVectorClass@PAVMultiplayerTeam@@::allocateCells  this=DynamicVector  sig=csp ====
void __thiscall ScenarioClass::sub_5D80B0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d80b6*/
  *(_DWORD *)(this + 16) = 0; /*0x5d80b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d80c0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d80c6*/
    *(_DWORD *)(this + 4) = 0; /*0x5d80ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d80d1*/
  *(_DWORD *)(this + 8) = 0; /*0x5d80d4*/
}



// ==== 0x005D80E0  ?$DynamicVectorClass@PAVMultiplayerTeam@@::deallocateCells  this=DynamicVector  sig=csp ====
unsigned int __thiscall ScenarioClass::sub_5D80E0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d80e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d80f5*/
  else
    return 0; /*0x5d80e7*/
}



// ==== 0x005D8100  _VectorClass_PAVMultiplayerTeam::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiplayerTeam::Get(_VectorClass_PAVMultiplayerTeam *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d810a*/
}



// ==== 0x005D8110  ?$DynamicVectorClass@PAVMultiplayerGameMode@@::resetScenarioData  this=DynamicVector  sig=csp ====
void __thiscall ScenarioClass::sub_5D8110(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d8116*/
  *(_DWORD *)(this + 16) = 0; /*0x5d8119*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d8120*/
  {
    __3_YAXPAX_Z(v2); /*0x5d8126*/
    *(_DWORD *)(this + 4) = 0; /*0x5d812e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d8131*/
  *(_DWORD *)(this + 8) = 0; /*0x5d8134*/
}



// ==== 0x005D8140  ?$DynamicVectorClass@PAVMultiplayerGameMode@@::validateMap  this=DynamicVector  sig=csp ====
unsigned int __thiscall ScenarioClass::sub_5D8140(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d8140*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d8155*/
  else
    return 0; /*0x5d8147*/
}



// ==== 0x005D8160  _VectorClass_PAVMultiplayerGameMode::loadTheater  this=VectorClass  sig=csp ====
int __thiscall ScenarioClass::loadTheater(_VectorClass_PAVMultiplayerGameMode *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d816a*/
}



// ==== 0x005D8170  MPBattleClass::MPBattleClass  this=MPBattleClass  sig=csp ====
_DWORD *__stdcall MPBattleClass::MPBattleClass(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8172*/
  if ( v6 ) /*0x5d817c*/
    return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6); /*0x5d819e*/
  else
    return 0; /*0x5d81a6*/
}



// ==== 0x005D81B0  Helper_5D81B0  this=-  sig=csp ====
_DWORD *__stdcall sub_5D81B0(const wchar_t **a1, const wchar_t **a2, const char **a3, const char **a4, char a5, int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d81b2*/
  if ( v6 ) /*0x5d81bc*/
    return MPBattleClass::MPManBattleClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d81de*/
  else
    return 0; /*0x5d81e6*/
}



// ==== 0x005D81F0  AbstractClass::processRevealArea  this=AbstractClass  sig=csp ====
_DWORD *__stdcall AbstractClass::sub_5D81F0(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d81f2*/
  if ( v6 ) /*0x5d81fc*/
    return MPBattleClass::MPSiegeClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d821e*/
  else
    return 0; /*0x5d8226*/
}



// ==== 0x005D8230  AbstractClass::computeRevealRadius  this=AbstractClass  sig=csp ====
_DWORD *__stdcall AbstractClass::sub_5D8230(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8232*/
  if ( v6 ) /*0x5d823c*/
    return MPBattleClass::MPUnholyAllianceClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d825e*/
  else
    return 0; /*0x5d8266*/
}



// ==== 0x005D8270  AbstractClass::applyRevealToCell  this=AbstractClass  sig=csp ====
_DWORD *__stdcall AbstractClass::sub_5D8270(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8272*/
  if ( v6 ) /*0x5d827c*/
    return MPBattleClass::MPFreeForAllClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d829e*/
  else
    return 0; /*0x5d82a6*/
}



// ==== 0x005D82B0  AbstractClass::checkRevealCell  this=AbstractClass  sig=csp ====
_DWORD *__stdcall AbstractClass::sub_5D82B0(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        int a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x344u); /*0x5d82b5*/
  if ( v6 ) /*0x5d82bf*/
    return MPCooperative::ctor(v6, a1, a2, a3, a4, a5, a6); /*0x5d82e1*/
  else
    return 0; /*0x5d82e9*/
}



// ==== 0x005D82F0  _VectorClass_PAVMultiplayerTeam::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiplayerTeam::Add(_VectorClass_PAVMultiplayerTeam *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d82f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d82fd*/
  {
    v3 = 0; /*0x5d82ff*/
    if ( m_8 <= 0 ) /*0x5d8303*/
      return 1; /*0x5d8323*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d8305*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d830b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d8314*/
    {
      ++v3; /*0x5d8316*/
      ++v4; /*0x5d8317*/
      if ( v3 >= m_8 ) /*0x5d831c*/
        return 1; /*0x5d831c*/
    }
  }
  return 0; /*0x5d831e*/
}



// ==== 0x005D8330  _VectorClass_PAVMultiplayerTeam::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiplayerTeam::Release(_VectorClass_PAVMultiplayerTeam *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d833c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d8346*/
    if ( a3 ) /*0x5d834c*/
      v4 = a3; /*0x5d8362*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d835e*/
    LOBYTE(this->m_C) = 1; /*0x5d8366*/
    if ( v4 ) /*0x5d836a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d8375*/
      {
        m_8 = this->m_8; /*0x5d837c*/
        if ( a2 < m_8 ) /*0x5d8381*/
          m_8 = a2; /*0x5d8383*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d8389*/
          ++i; /*0x5d838e*/
        if ( BYTE1(this->m_C) ) /*0x5d839b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d83a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d83ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d83b7*/
      this->m_8 = a2; /*0x5d83bf*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d83c2*/
      return 1; /*0x5d83c8*/
    }
    else
    {
      return 0; /*0x5d836f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMultiplayerTeam *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d83d2*/
    return 1; /*0x5d83d8*/
  }
}



// ==== 0x005D83E0  _VectorClass_PAVMultiplayerTeam::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MultiplayerTeam::Remove(_VectorClass_PAVMultiplayerTeam *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d83ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d83f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d83fb*/
  }
  BYTE1(this->m_C) = 0; /*0x5d83fe*/
  this->m_8 = 0; /*0x5d8401*/
}



// ==== 0x005D8410  _VectorClass_PAVMultiplayerTeam::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiplayerTeam::GetSize(_VectorClass_PAVMultiplayerTeam *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d8410*/
    return 0; /*0x5d8418*/
  m_8 = this->m_8; /*0x5d841e*/
  result = 0; /*0x5d8421*/
  if ( m_8 <= 0 ) /*0x5d8425*/
    return -1; /*0x5d843c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d842b*/
  {
    if ( ++result >= m_8 ) /*0x5d843a*/
      return -1; /*0x5d843a*/
  }
  return result; /*0x5d841a*/
}



// ==== 0x005D8450  _VectorClass_PAVMultiplayerTeam::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MultiplayerTeam::GetCapacity(_VectorClass_PAVMultiplayerTeam *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d8450*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d8465*/
  else
    return 0; /*0x5d8457*/
}



// ==== 0x005D8470  _DynamicVectorClass_PAVMultiplayerTeam::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Scenario::ResizeAndCopy(_DynamicVectorClass_PAVMultiplayerTeam *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d847c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d8482*/
    if ( a3 ) /*0x5d8488*/
      v4 = a3; /*0x5d849e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d849a*/
    LOBYTE(this->m_C) = 1; /*0x5d84a2*/
    if ( !v4 ) /*0x5d84a6*/
      return 0; /*0x5d851a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d84a8*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x5d84af*/
      if ( a2 < v5 ) /*0x5d84b4*/
        v5 = a2; /*0x5d84b6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d84bc*/
        ++i; /*0x5d84c1*/
      if ( BYTE1(this->m_C) ) /*0x5d84ce*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d84d9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d84e1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d84ea*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x5d84f2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d84f5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMultiplayerTeam *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d84fe*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x5d8501*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x5d8509*/
    *(_DWORD *)this->__tail_10 = v7; /*0x5d850b*/
  return 1; /*0x5d850e*/
}



// ==== 0x005D8520  ?$DynamicVectorClass@PAVMultiplayerTeam@@::setupPlayers  this=DynamicVector  sig=csp ====
int __thiscall ScenarioClass::sub_5D8520(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d8520*/
  result = 0; /*0x5d8523*/
  if ( v2 <= 0 ) /*0x5d8528*/
    return -1; /*0x5d853f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5d852e*/
  {
    if ( ++result >= v2 ) /*0x5d853d*/
      return -1; /*0x5d853d*/
  }
  return result; /*0x5d8542*/
}



// ==== 0x005D8550  _VectorClass_PAVMultiplayerGameMode::assignHouses  this=VectorClass  sig=csp ====
char __thiscall ScenarioClass::assignHouses(_VectorClass_PAVMultiplayerGameMode *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(_DWORD *)&this->__pad_5[3]; /*0x5d8552*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d855d*/
  {
    v3 = 0; /*0x5d855f*/
    if ( v2 <= 0 ) /*0x5d8563*/
      return 1; /*0x5d8583*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d8565*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d856b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d8574*/
    {
      ++v3; /*0x5d8576*/
      ++v4; /*0x5d8577*/
      if ( v3 >= v2 ) /*0x5d857c*/
        return 1; /*0x5d857c*/
    }
  }
  return 0; /*0x5d857e*/
}



// ==== 0x005D8590  _VectorClass_PAVMultiplayerGameMode::ResizeAndCopy  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Scenario3::ResizeAndCopy(_VectorClass_PAVMultiplayerGameMode *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d859c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d85a6*/
    if ( a3 ) /*0x5d85ac*/
      v4 = a3; /*0x5d85c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d85be*/
    LOBYTE(this->m_C) = 1; /*0x5d85c6*/
    if ( v4 ) /*0x5d85ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d85d5*/
      {
        v6 = *(_DWORD *)&this->__pad_5[3]; /*0x5d85dc*/
        if ( a2 < v6 ) /*0x5d85e1*/
          v6 = a2; /*0x5d85e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d85e9*/
          ++i; /*0x5d85ee*/
        if ( BYTE1(this->m_C) ) /*0x5d85fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d8606*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d860e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d8617*/
      *(_DWORD *)&this->__pad_5[3] = a2; /*0x5d861f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d8622*/
      return 1; /*0x5d8628*/
    }
    else
    {
      return 0; /*0x5d85cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMultiplayerGameMode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d8632*/
    return 1; /*0x5d8638*/
  }
}



// ==== 0x005D8640  ?$VectorClass@PAVMultiplayerGameMode@@::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d864d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d8653*/
    *(_DWORD *)(this + 4) = 0; /*0x5d865b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d865e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d8661*/
}



// ==== 0x005D8670  ?$VectorClass@PAVMultiplayerGameMode@@::initLocalVariables  this=VectorClass  sig=csp ====
int __thiscall ScenarioClass::sub_5D8670(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d8670*/
    return 0; /*0x5d8678*/
  v3 = *(_DWORD *)(this + 8); /*0x5d867e*/
  result = 0; /*0x5d8681*/
  if ( v3 <= 0 ) /*0x5d8685*/
    return -1; /*0x5d869c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d868b*/
  {
    if ( ++result >= v3 ) /*0x5d869a*/
      return -1; /*0x5d869a*/
  }
  return result; /*0x5d867a*/
}



// ==== 0x005D86B0  ?$VectorClass@PAVMultiplayerGameMode@@::setGameSpeed  this=VectorClass  sig=csp ====
unsigned int __thiscall ScenarioClass::sub_5D86B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d86b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d86c5*/
  else
    return 0; /*0x5d86b7*/
}



// ==== 0x005D86D0  GameInit::InitMultiplayerModes  this=VectorClass  sig=csp ====
_DWORD *__thiscall GameInit::InitMultiplayerModes(GameInit *this, int a2, int a3)
{
  this->Items = 0; /*0x5d86d9*/
  this->Capacity = a2; /*0x5d86e0*/
  this->IsInitialized = 1; /*0x5d86e3*/
  this->IsAllocated = 0; /*0x5d86e7*/
  *this = (GameInit)&VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d86eb*/
  if ( a2 ) /*0x5d86f1*/
  {
    if ( a3 ) /*0x5d86f9*/
    {
      this->Items = a3; /*0x5d86fb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x5d870c*/
      this->IsAllocated = 1; /*0x5d870f*/
    }
  }
  *this = (GameInit)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d8713*/
  *((_DWORD *)this + 5) = 10; /*0x5d8719*/
  this->Items = 0; /*0x5d8720*/
  return this; /*0x5d8729*/
}



// ==== 0x005D8730  _DynamicVectorClass_PAVMultiplayerGameMode::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Scenario2::ResizeAndCopy(
        _DynamicVectorClass_PAVMultiplayerGameMode *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d873c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d8742*/
    if ( a3 ) /*0x5d8748*/
      v4 = a3; /*0x5d875e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d875a*/
    LOBYTE(this->m_C) = 1; /*0x5d8762*/
    if ( !v4 ) /*0x5d8766*/
      return 0; /*0x5d87da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d8768*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x5d876f*/
      if ( a2 < v5 ) /*0x5d8774*/
        v5 = a2; /*0x5d8776*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d877c*/
        ++i; /*0x5d8781*/
      if ( BYTE1(this->m_C) ) /*0x5d878e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d8799*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d87a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d87aa*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x5d87b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d87b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMultiplayerGameMode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d87be*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x5d87c1*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x5d87c9*/
    *(_DWORD *)this->__tail_10 = v7; /*0x5d87cb*/
  return 1; /*0x5d87ce*/
}



// ==== 0x005D87E0  ?$DynamicVectorClass@PAVMultiplayerGameMode@@::distributeStartingUnits  this=DynamicVector  sig=csp ====
int __thiscall ScenarioClass::sub_5D87E0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d87e0*/
  result = 0; /*0x5d87e3*/
  if ( v2 <= 0 ) /*0x5d87e8*/
    return -1; /*0x5d87ff*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5d87ee*/
  {
    if ( ++result >= v2 ) /*0x5d87fd*/
      return -1; /*0x5d87fd*/
  }
  return result; /*0x5d8802*/
}



// ==== 0x005D8810  _VectorClass_PAVMultiplayerTeam::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MultiplayerTeam::QueryInterface(_VectorClass_PAVMultiplayerTeam *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d8813*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d8816*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d8820*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8828*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d8830*/
  }
  BYTE1(this->m_C) = 0; /*0x5d883b*/
  this->m_8 = 0; /*0x5d8841*/
  if ( (a2 & 1) != 0 ) /*0x5d8848*/
    __3_YAXPAX_Z(this); /*0x5d884b*/
  return this->__pad_0; /*0x5d8855*/
}



// ==== 0x005D8860  _DynamicVectorClass_PAVMultiplayerTeam::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MultiplayerTeamVector::Destruct(_DynamicVectorClass_PAVMultiplayerTeam *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d8863*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d8866*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d8870*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8878*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d8880*/
  }
  BYTE1(this->m_C) = 0; /*0x5d888b*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5d8891*/
  if ( (a2 & 1) != 0 ) /*0x5d8898*/
    __3_YAXPAX_Z(this); /*0x5d889b*/
  return this->__pad_0; /*0x5d88a5*/
}



// ==== 0x005D88B0  _VectorClass_PAVMultiplayerGameMode::Destruct  this=VectorClass  sig=csp ====
_DWORD *__thiscall MultiplayerModeVector::Destruct(_VectorClass_PAVMultiplayerGameMode *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d88b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d88b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d88c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d88c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d88d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d88db*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5d88e1*/
  if ( (a2 & 1) != 0 ) /*0x5d88e8*/
    __3_YAXPAX_Z(this); /*0x5d88eb*/
  return this->__pad_0; /*0x5d88f5*/
}



// ==== 0x005D8900  _DynamicVectorClass_PAVMultiplayerGameMode::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MultiplayerModeVector2::Destruct(_DynamicVectorClass_PAVMultiplayerGameMode *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d8903*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d8906*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d8910*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8918*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d8920*/
  }
  BYTE1(this->m_C) = 0; /*0x5d892b*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5d8931*/
  if ( (a2 & 1) != 0 ) /*0x5d8938*/
    __3_YAXPAX_Z(this); /*0x5d893b*/
  return this->__pad_0; /*0x5d8945*/
}



// ==== 0x005D8950  UnitTypeVector::Construct2  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector::Construct2(UnitTypeVector *this, int a2, int a3)
{
  this->UnitTypeVector_field_0x04 = 0; /*0x5d895b*/
  this->UnitTypeVector_field_0x08 = a2; /*0x5d895e*/
  LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x5d8961*/
  BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x5d8965*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass *>::`vftable'; /*0x5d8968*/
  if ( a2 ) /*0x5d896e*/
  {
    if ( a3 ) /*0x5d8976*/
    {
      this->UnitTypeVector_field_0x04 = a3; /*0x5d8978*/
      return this->__pad_0; /*0x5d897e*/
    }
    this->UnitTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5d898d*/
    BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x5d8990*/
  }
  return this->__pad_0; /*0x5d897d*/
}



// ==== 0x005D89A0  InfantryTypeVector::ConstructFromData  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector::ConstructFromData(InfantryTypeVector *this, int a2, int a3)
{
  this->InfantryTypeVector_field_0x04 = 0; /*0x5d89ab*/
  this->InfantryTypeVector_field_0x08 = a2; /*0x5d89ae*/
  LOBYTE(this->InfantryTypeVector_field_0x0C) = 1; /*0x5d89b1*/
  BYTE1(this->InfantryTypeVector_field_0x0C) = 0; /*0x5d89b5*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      this->InfantryTypeVector_field_0x04 = a3; /*0x5d89c8*/
      return this->__pad_0; /*0x5d89ce*/
    }
    this->InfantryTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5d89dd*/
    BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x5d89e0*/
  }
  return this->__pad_0; /*0x5d89cd*/
}



// ==== 0x005D89F0  MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass  this=VectorClass  sig=csp ====
_DWORD *__thiscall MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(
        MultiplayerGameMode *this,
        int a2,
        int a3)
{
  this->MultiplayerGameMode_field_0x04 = 0; /*0x5d89fb*/
  this->MultiplayerGameMode_field_0x08 = a2; /*0x5d89fe*/
  LOBYTE(this->MultiplayerGameMode_field_0x0C) = 1; /*0x5d8a01*/
  BYTE1(this->MultiplayerGameMode_field_0x0C) = 0; /*0x5d8a05*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      this->MultiplayerGameMode_field_0x04 = a3; /*0x5d8a18*/
      return this->__pad_0; /*0x5d8a1e*/
    }
    this->MultiplayerGameMode_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5d8a2d*/
    BYTE1(this->MultiplayerGameMode_field_0x0C) = 1; /*0x5d8a30*/
  }
  return this->__pad_0; /*0x5d8a1d*/
}



// ==== 0x005D8A40  sub_5D8A40  this=-  sig=ida-proto ====
int sub_5D8A40()
{
  dword_ABFDE0 = 0; /*0x5d8a42*/
  dword_ABFDE4 = 0; /*0x5d8a47*/
  dword_ABFDE8 = 0; /*0x5d8a4c*/
  dword_ABFDEC = 0; /*0x5d8a51*/
  return 0; /*0x5d8a56*/
}



// ==== 0x005D8A60  sub_5D8A60  this=-  sig=ida-proto ====
void sub_5D8A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d8a6c*/
  dbl_ABFDF8 = Math::Sqrt(v0 + v0); /*0x5d8a7e*/
}



// ==== 0x005D8A90  sub_5D8A90  this=-  sig=ida-proto ====
void sub_5D8A90()
{
  dbl_ABFE48 = dbl_ABFDF8 / 60.0; /*0x5d8a9c*/
}



// ==== 0x005D8AB0  sub_5D8AB0  this=-  sig=ida-proto ====
void sub_5D8AB0()
{
  dbl_ABFE30 = 1.0 / dbl_ABFE48; /*0x5d8abc*/
}



// ==== 0x005D8AD0  sub_5D8AD0  this=-  sig=ida-proto ====
void sub_5D8AD0()
{
  dbl_ABFE28 = 0.0174532925199433 * 45.0; /*0x5d8adc*/
}



// ==== 0x005D8AF0  sub_5D8AF0  this=-  sig=ida-proto ====
void sub_5D8AF0()
{
  dbl_ABFE00 = 0.0174532925199433 * 60.0; /*0x5d8afc*/
}



// ==== 0x005D8B10  sub_5D8B10  this=-  sig=ida-proto ====
void sub_5D8B10()
{
  dbl_ABFDD8 = 0.0174532925199433 * 90.0; /*0x5d8b1c*/
}



// ==== 0x005D8B30  sub_5D8B30  this=-  sig=ida-proto ====
__int64 sub_5D8B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFDD8 - dbl_ABFE00); /*0x5d8b42*/
  result = Math::RoundToInt(v0 * dbl_ABFDF8 * 0.5); /*0x5d8b56*/
  dword_ABFE50 = result; /*0x5d8b5b*/
  return result; /*0x5d8b60*/
}



// ==== 0x005D8B70  sub_5D8B70  this=-  sig=ida-proto ====
void sub_5D8B70()
{
  dbl_ABFE08 = Math::ArcTan((double)dword_ABFE50 * 0.00390625); /*0x5d8b87*/
}



// ==== 0x005D8BA0  sub_5D8BA0  this=-  sig=ida-proto ====
void sub_5D8BA0()
{
  dbl_ABFE20 = Math::ArcTan((double)(2 * dword_ABFE50) / dbl_ABFDF8); /*0x5d8bc2*/
}



// ==== 0x005D8BD0  sub_5D8BD0  this=-  sig=ida-proto ====
__int64 sub_5D8BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFE50) + 0.5); /*0x5d8beb*/
  dword_ABFE44 = result; /*0x5d8bf0*/
  return result; /*0x5d8bf6*/
}



// ==== 0x005D8C00  sub_5D8C00  this=-  sig=ida-proto ====
int sub_5D8C00()
{
  word_ABFDF0 = 0; /*0x5d8c02*/
  word_ABFDF2 = 0; /*0x5d8c08*/
  return 0; /*0x5d8c0e*/
}



// ==== 0x005D8C10  sub_5D8C10  this=-  sig=ida-proto ====
int sub_5D8C10()
{
  dword_ABFE10 = 0; /*0x5d8c12*/
  dword_ABFE14 = 0; /*0x5d8c17*/
  dword_ABFE18 = 0; /*0x5d8c1c*/
  return 0; /*0x5d8c21*/
}



// ==== 0x005D8C30  sub_5D8C30  this=-  sig=ida-proto ====
int sub_5D8C30()
{
  dword_ABFE40 = 0; /*0x5d8c35*/
  dword_ABFE38 = 128; /*0x5d8c3f*/
  dword_ABFE3C = 128; /*0x5d8c44*/
  return 128; /*0x5d8c49*/
}



// ==== 0x005D8C50  MultiplayerTeam::Constructor  this=MultiplayerTeam  sig=csp ====
wchar_t **__thiscall MultiplayerTeam::Constructor(MultiplayerTeam *this, const wchar_t **a2, wchar_t *a3)
{
  WideString::AssignFromPtr((wchar_t **)&this->MultiplayerTeam_field_0x04, a2); /*0x5d8c5b*/
  *(_DWORD *)this->__pad_0 = &MultiplayerTeam::`vftable'; /*0x5d8c64*/
  *((_DWORD *)this + 2) = a3; /*0x5d8c6a*/
  return (wchar_t **)this; /*0x5d8c6f*/
}



// ==== 0x005D8C80  MultiplayerTeam::Destructor  this=MultiplayerTeam  sig=csp ====
void __thiscall MultiplayerTeam::Destructor(MultiplayerTeam *this)
{
  *(_DWORD *)this->__pad_0 = &MultiplayerTeam::`vftable'; /*0x5d8c80*/
  DeleteAndZero::Alt((DeleteAndZero *)&this->MultiplayerTeam_field_0x04); /*0x5d8c89*/
}



// ==== 0x005D8C90  MultiplayerTeam::IsValidIndex  this=MultiplayerTeam  sig=csp ====
bool __stdcall PlayerClass::IsValidIndex(bool *this)
{
  return (int)this >= 0 && (int)this < dword_A8DA84; /*0x5d8ca2*/
}



// ==== 0x005D8CB0  MultiplayerTeam::SetHouse  this=MultiplayerTeam  sig=csp ====
char __thiscall PlayerClass::SetHouse(MultiplayerTeam *this, int a2)
{
  char result; // al

  result = (*(int (__thiscall **)(MultiplayerTeam *, int))(*(_DWORD *)this->__pad_0 + 4))(this, a2); /*0x5d8cbb*/
  if ( result ) /*0x5d8cc0*/
  {
    *(_DWORD *)(dword_A8DA78[a2] + 107) = *((_DWORD *)this + 2); /*0x5d8cd5*/
    return 1; /*0x5d8cd8*/
  }
  return result; /*0x5d8cc2*/
}



// ==== 0x005D8D10  MPCombatTeam::AddToList  this=MPCombatTeam  sig=csp ====
LRESULT __thiscall MPCombatTeam::AddToList(int this, HWND hWnd)
{
  wchar_t *v3; // eax
  LRESULT v4; // edi

  v3 = WideString::GetOrEmpty_Alt((wchar_t **)(this + 4)); /*0x5d8d19*/
  v4 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v3); /*0x5d8d33*/
  SendMessageA(hWnd, 0x151u, v4, *(_DWORD *)(this + 8)); /*0x5d8d40*/
  return v4; /*0x5d8d44*/
}



// ==== 0x005D8D50  MultiplayerTeam::QueryInterface  this=MultiplayerTeam  sig=csp ====
void **__thiscall MultiplayerTeam_Destru::QueryInterface(MultiplayerTeam *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &MultiplayerTeam::`vftable'; /*0x5d8d56*/
  DeleteAndZero::Alt((DeleteAndZero *)&this->MultiplayerTeam_field_0x04); /*0x5d8d5c*/
  if ( (a2 & 1) != 0 ) /*0x5d8d66*/
    __3_YAXPAX_Z(this); /*0x5d8d69*/
  return (void **)this; /*0x5d8d73*/
}



// ==== 0x005D8D80  sub_5D8D80  this=-  sig=ida-proto ====
void sub_5D8D80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d8d8c*/
  dbl_ABFE78 = Math::Sqrt(v0 + v0); /*0x5d8d9e*/
}



// ==== 0x005D8DB0  sub_5D8DB0  this=-  sig=ida-proto ====
void sub_5D8DB0()
{
  dbl_ABFEE0 = dbl_ABFE78 / 60.0; /*0x5d8dbc*/
}



// ==== 0x005D8DD0  sub_5D8DD0  this=-  sig=ida-proto ====
void sub_5D8DD0()
{
  dbl_ABFEB0 = 1.0 / dbl_ABFEE0; /*0x5d8ddc*/
}



// ==== 0x005D8DF0  sub_5D8DF0  this=-  sig=ida-proto ====
void sub_5D8DF0()
{
  dbl_ABFEA8 = 0.0174532925199433 * 45.0; /*0x5d8dfc*/
}



// ==== 0x005D8E10  sub_5D8E10  this=-  sig=ida-proto ====
void sub_5D8E10()
{
  dbl_ABFE80 = 0.0174532925199433 * 60.0; /*0x5d8e1c*/
}



// ==== 0x005D8E30  sub_5D8E30  this=-  sig=ida-proto ====
void sub_5D8E30()
{
  dbl_ABFE58 = 0.0174532925199433 * 90.0; /*0x5d8e3c*/
}



// ==== 0x005D8E50  sub_5D8E50  this=-  sig=ida-proto ====
__int64 sub_5D8E50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFE58 - dbl_ABFE80); /*0x5d8e62*/
  result = Math::RoundToInt(v0 * dbl_ABFE78 * 0.5); /*0x5d8e76*/
  dword_ABFEE8 = result; /*0x5d8e7b*/
  return result; /*0x5d8e80*/
}



// ==== 0x005D8E90  sub_5D8E90  this=-  sig=ida-proto ====
void sub_5D8E90()
{
  dbl_ABFE88 = Math::ArcTan((double)dword_ABFEE8 * 0.00390625); /*0x5d8ea7*/
}



// ==== 0x005D8EC0  sub_5D8EC0  this=-  sig=ida-proto ====
void sub_5D8EC0()
{
  dbl_ABFEA0 = Math::ArcTan((double)(2 * dword_ABFEE8) / dbl_ABFE78); /*0x5d8ee2*/
}



// ==== 0x005D8EF0  sub_5D8EF0  this=-  sig=ida-proto ====
__int64 sub_5D8EF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFEE8) + 0.5); /*0x5d8f0b*/
  dword_ABFEDC = result; /*0x5d8f10*/
  return result; /*0x5d8f16*/
}



// ==== 0x005D8F20  sub_5D8F20  this=-  sig=ida-proto ====
int sub_5D8F20()
{
  word_ABFE70 = 0; /*0x5d8f22*/
  word_ABFE72 = 0; /*0x5d8f28*/
  return 0; /*0x5d8f2e*/
}



// ==== 0x005D8F30  sub_5D8F30  this=-  sig=ida-proto ====
int sub_5D8F30()
{
  dword_ABFE90 = 0; /*0x5d8f32*/
  dword_ABFE94 = 0; /*0x5d8f37*/
  dword_ABFE98 = 0; /*0x5d8f3c*/
  return 0; /*0x5d8f41*/
}



// ==== 0x005D8F50  sub_5D8F50  this=-  sig=ida-proto ====
int sub_5D8F50()
{
  dword_ABFEC0 = 0; /*0x5d8f55*/
  dword_ABFEB8 = 128; /*0x5d8f5f*/
  dword_ABFEBC = 128; /*0x5d8f64*/
  return 128; /*0x5d8f69*/
}



// ==== 0x005D8F70  sub_5D8F70  this=-  sig=ida-proto ====
int sub_5D8F70()
{
  dword_ABFE60 = 0; /*0x5d8f72*/
  dword_ABFE64 = 0; /*0x5d8f77*/
  dword_ABFE68 = 0; /*0x5d8f7c*/
  dword_ABFE6C = 0; /*0x5d8f81*/
  return 0; /*0x5d8f86*/
}



// ==== 0x005D8F90  sub_5D8F90  this=-  sig=ida-proto ====
int sub_5D8F90()
{
  dword_ABFEC8 = 0; /*0x5d8f92*/
  dword_ABFECC = 0; /*0x5d8f97*/
  dword_ABFED0 = 0; /*0x5d8f9c*/
  dword_ABFED4 = 0; /*0x5d8fa1*/
  return 0; /*0x5d8fa6*/
}



// ==== 0x005D8FB0  ObjectClass::method_5D8FB0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5D8FB0(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x5d8fb4*/
  this->? = 0; /*0x5d8fb6*/
  this->? = 0; /*0x5d8fb9*/
  this->? = 0; /*0x5d8fbc*/
  return &this->AbstractClass; /*0x5d8fbf*/
}



// ==== 0x005D8FC0  ObjectClass::?_Release__NonReentrantLock_details_Concurrency__QAEXXZ  this=ObjectClass  sig=csp ====
void __thiscall __Release__NonReentrantLock_details_Concurrency__QAEXXZ(Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0; /*0x5d8fc0*/
}



// ==== 0x005D8FD0  CCFileClass::WriteINIString  this=CCFileClass  sig=csp ====
void __thiscall CCFileClass::WriteINIString(CCFileClass *this)
{
  char v2; // [esp+7h] [ebp-25h] BYREF
  RawFileClass v3; // [esp+8h] [ebp-24h] BYREF

  v2 = 0; /*0x5d8fd6*/
  if ( !*(_DWORD *)this->CDFileClass ) /*0x5d8fdb*/
  {
    *(_DWORD *)this->CDFileClass = Network::ResolveAndConnect((Network *)this, &v2); /*0x5d8fea*/
    if ( v2 ) /*0x5d8ff2*/
    {
      RawFileClass::Construct(&v3, (int)&stru_8263E0.MaxFDelta); /*0x5d8ffd*/
      INIClass::SetInt( /*0x5d9016*/
        &DSurface_ViewBounds.__pad_FC[36],
        (unsigned __int8 *)&stru_8263E0.Loop,
        g_INI_Key_FirewallSettings,
        *(_DWORD *)this->CDFileClass,
        0);
      INIClass::SetInt( /*0x5d9030*/
        &DSurface_ViewBounds.__pad_FC[36],
        (unsigned __int8 *)&stru_8263E0.Loop,
        g_INI_Key_FirewallDelta,
        this->?,
        0);
      INIClass::WriteDigest((INIClass *)&DSurface_ViewBounds.__pad_FC[36], (int)&v3, 0); /*0x5d9041*/
      RawFileClass::Dtor(&v3); /*0x5d904a*/
    }
  }
}



// ==== 0x005D9060  ObjectClass::method_5D9060  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_5D9060(ObjectClass *this, int a2)
{
  int v2; // ebx
  int v4; // ebp
  int v5; // edx
  __int16 v6; // di

  v2 = a2; /*0x5d9061*/
  if ( !a2 ) /*0x5d906c*/
    v2 = 1; /*0x5d906e*/
  v4 = 255; /*0x5d9073*/
  while ( 1 ) /*0x5d907b*/
  {
    v5 = v2 + this->?; /*0x5d907b*/
    this->? = v5; /*0x5d907f*/
    v6 = v5; /*0x5d9087*/
    if ( v5 > 0xFFFF ) /*0x5d908a*/
      this->? = 2048; /*0x5d908c*/
    if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d90a4*/
      break; /*0x5d90a4*/
    if ( (*(unsigned __int8 (__stdcall **)(_WORD))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v5) ) /*0x5d90a9*/
    {
      (*(void (__thiscall **)(_DWORD, __int16))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d90ca*/
        *(_DWORD *)&stru_887598.isAliveFlag,
        v6);
      return v6; /*0x5d90ca*/
    }
    if ( !v4-- ) /*0x5d90b0*/
      return v6; /*0x5d90be*/
  }
  return v6; /*0x5d90ba*/
}



// ==== 0x005D90E0  Network::QueryAddress  this=Network  sig=csp ====
int __stdcall Network::QueryAddress(unsigned __int16 *a1, int a2, int a3, char a4)
{
  int QueueCount; // ebx
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int result; // eax
  DWORD Ticks; // [esp+Ch] [ebp-1D4h]
  int v10; // [esp+18h] [ebp-1C8h] BYREF
  char v11[3]; // [esp+1Ch] [ebp-1C4h] BYREF
  __int16 v12; // [esp+4Dh] [ebp-193h]
  bool v13; // [esp+4Fh] [ebp-191h]

  v10 = 43; /*0x5d9103*/
  strcpy(v11, aWw); /*0x5d910e*/
  (*(void (__thiscall **)(_DWORD *, int))(*dword_887628 + 116))(dword_887628, a2); /*0x5d9127*/
  v12 = a2; /*0x5d9139*/
  v13 = a4 == 1; /*0x5d9141*/
  QueueCount = Network::GetQueueCount((int)unk_A8E9C0); /*0x5d9155*/
  Network::FormatAddress(a1, 0); /*0x5d9157*/
  Debug::Log(); /*0x5d9169*/
  LOWORD(v5) = *a1; /*0x5d9175*/
  Network::SendMessage((int)unk_A8E9C0, (int)&v10, 56, 0, (int)a1, v5, a3); /*0x5d918c*/
  Ticks = Timer::GetTicks(); /*0x5d919a*/
  while ( Network::GetQueueCount((int)unk_A8E9C0) > QueueCount || dword_887628[12] ) /*0x5d91ab*/
  {
    v6 = 180; /*0x5d91c5*/
    if ( Ticks != -1 ) /*0x5d91cc*/
    {
      v7 = Timer::GetTicks() - Ticks; /*0x5d91d7*/
      if ( v7 >= 180 ) /*0x5d91dd*/
        break; /*0x5d91dd*/
      v6 = 180 - v7; /*0x5d91df*/
    }
    if ( !v6 ) /*0x5d91e3*/
      break; /*0x5d91e3*/
    Network::ReceiveLoop(unk_A8E9C0); /*0x5d91ea*/
    Event::Dispatch(); /*0x5d91ef*/
  }
  result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*dword_887628 + 116))(dword_887628, 0); /*0x5d91f6*/
  LOBYTE(result) = 1; /*0x5d9205*/
  return result; /*0x5d9203*/
}



// ==== 0x005D9220  Network::WaitForPacket  this=Network  sig=csp ====
__int16 __stdcall Network_WaitForPacket(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  __int16 v5; // si
  __int16 v7; // [esp+Eh] [ebp-1F6h] BYREF
  DWORD Ticks; // [esp+10h] [ebp-1F4h]
  int v9; // [esp+14h] [ebp-1F0h]
  int v10; // [esp+18h] [ebp-1ECh]
  int v11; // [esp+1Ch] [ebp-1E8h] BYREF
  _BYTE v12[8]; // [esp+20h] [ebp-1E4h] BYREF
  int v13; // [esp+28h] [ebp-1DCh]
  _BYTE v14[12]; // [esp+30h] [ebp-1D4h] BYREF
  _DWORD v15[11]; // [esp+3Ch] [ebp-1C8h] BYREF
  int v16; // [esp+6Bh] [ebp-199h]
  int v17; // [esp+71h] [ebp-193h]

  v2 = 0; /*0x5d922d*/
  Waypoint::InitInvalid(v14); /*0x5d922f*/
  v3 = 60; /*0x5d9244*/
  Ticks = Timer::GetTicks(); /*0x5d924b*/
  v10 = 60; /*0x5d924f*/
  if ( a2 ) /*0x5d9253*/
  {
    Ticks = Timer::GetTicks(); /*0x5d925e*/
    v3 = a2; /*0x5d9266*/
    v9 = v13; /*0x5d9268*/
    v10 = a2; /*0x5d926c*/
  }
  while ( 1 ) /*0x5d9277*/
  {
    if ( Ticks != -1 ) /*0x5d927c*/
    {
      v4 = Timer::GetTicks() - Ticks; /*0x5d9287*/
      if ( v4 >= v3 ) /*0x5d928d*/
        return 0; /*0x5d928d*/
      v3 -= v4; /*0x5d9293*/
    }
    if ( !v3 ) /*0x5d9297*/
      break; /*0x5d9297*/
    Network::ReceiveLoop(unk_A8E9C0); /*0x5d92a2*/
    Event::Dispatch(); /*0x5d92a7*/
    if ( v2 >= Connection::GetSpeed(unk_A8E9C0) ) /*0x5d92b8*/
      v2 = 0; /*0x5d92ba*/
    if ( Network::SendPacketThunk(v2, v15, v12, v14, &v7, &v11) && v7 == -22012 && v15[0] == 44 && a1 == v11 ) /*0x5d9304*/
    {
      v5 = v16; /*0x5d9314*/
      Debug::Log( /*0x5d9322*/
        "Mangler is seeing packets from port %d as coming from port %d\n",
        (unsigned __int16)v17,
        (unsigned __int16)v16);
      Network::receiveData(v2); /*0x5d9330*/
      return v5; /*0x5d9341*/
    }
    v3 = v10; /*0x5d9306*/
    ++v2; /*0x5d930a*/
  }
  return 0; /*0x5d9338*/
}



// ==== 0x005D9360  ObjectClass::SmallFunc_5D9360  this=ObjectClass  sig=csp ====
void __thiscall SmallFunc_5D9360(ObjectClass *this)
{
  RawFileClass v2; // [esp+4h] [ebp-24h] BYREF

  RawFileClass::Construct(&v2, (int)&stru_8263E0.MaxFDelta); /*0x5d936f*/
  INIClass::SetInt( /*0x5d9388*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)&stru_8263E0.Loop,
    g_INI_Key_FirewallSettings,
    (int)this->AbstractClass,
    0);
  INIClass::SetInt( /*0x5d93a2*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)&stru_8263E0.Loop,
    g_INI_Key_FirewallDelta,
    (int)this->?,
    0);
  INIClass::WriteDigest((INIClass *)&DSurface_ViewBounds.__pad_FC[36], (int)&v2, 0); /*0x5d93b3*/
  RawFileClass::Dtor(&v2); /*0x5d93bc*/
}



// ==== 0x005D93D0  Network::dispatchEvent  this=Network  sig=csp ====
int __thiscall Network::dispatchEvent(Network *this)
{
  int result; // eax

  this->Network_field_0x4 = (void *)INIClass::ReadInt_Overwrite( /*0x5d93fa*/
                                      (bool *)&DSurface_ViewBounds.__pad_FC[36],
                                      (unsigned __int8 *)&stru_8263E0.Loop,
                                      (unsigned __int8 *)g_INI_Key_FirewallSettings,
                                      0);
  result = INIClass::ReadInt_Overwrite( /*0x5d93fd*/
             (bool *)&DSurface_ViewBounds.__pad_FC[36],
             (unsigned __int8 *)&stru_8263E0.Loop,
             (unsigned __int8 *)g_INI_Key_FirewallDelta,
             1);
  this->Network_field_0xC = (void *)result; /*0x5d9402*/
  return result; /*0x5d9405*/
}



// ==== 0x005D9410  Network::ResolveAndConnect  this=Network  sig=csp ====
int __thiscall Network::ResolveAndConnect(Network *this, _BYTE *a2)
{
  Waypoint *v3; // esi
  int v4; // edi
  int v5; // esi
  int v7; // ebx
  const char *v8; // esi
  struct hostent *v9; // eax
  int v10; // ecx
  int *v11; // edx
  _DWORD *v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  Waypoint *v16; // esi
  int *v17; // edi
  int v18; // esi
  char *v19; // eax
  bool v20; // sf
  int v21; // ecx
  int v23; // edi
  __int16 i; // si
  int v25; // eax
  int v26; // edi
  __int16 j; // bx
  int v28; // eax
  int *v29; // esi
  int k; // edi
  int v31; // ebx
  int v32; // eax
  int v33; // ecx
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // eax
  int v39; // esi
  int v40; // esi
  void *v41; // eax
  void *v42; // eax
  int v43; // ebx
  int *v44; // esi
  void *Network_field_0xC; // eax
  int v46; // ecx
  int v47; // esi
  int v48; // eax
  int v49; // ecx
  int v51; // ebx
  char *v52; // eax
  int v53; // ecx
  unsigned __int16 v55; // bx
  int v56; // esi
  int v57; // eax
  int v58; // esi
  __int16 v59; // ax
  int v60; // esi
  unsigned __int16 v61; // si
  int m; // edi
  int v63; // eax
  int v64; // esi
  int v65; // eax
  int v66; // [esp+40h] [ebp-188h]
  int v67; // [esp+40h] [ebp-188h]
  int Ticks; // [esp+44h] [ebp-184h]
  int v69; // [esp+44h] [ebp-184h]
  int v70; // [esp+44h] [ebp-184h]
  int v71; // [esp+44h] [ebp-184h]
  int v72; // [esp+44h] [ebp-184h]
  int v73; // [esp+44h] [ebp-184h]
  int v74; // [esp+50h] [ebp-178h] BYREF
  __int16 v75[2]; // [esp+54h] [ebp-174h]
  int v76; // [esp+58h] [ebp-170h] BYREF
  int v77; // [esp+5Ch] [ebp-16Ch]
  unsigned __int16 v78[2]; // [esp+60h] [ebp-168h] BYREF
  int v79; // [esp+64h] [ebp-164h]
  int v80; // [esp+68h] [ebp-160h]
  int v81; // [esp+6Ch] [ebp-15Ch] BYREF
  int v82; // [esp+70h] [ebp-158h]
  int v83; // [esp+74h] [ebp-154h]
  char *v84; // [esp+7Ch] [ebp-14Ch]
  char *v85; // [esp+80h] [ebp-148h]
  int v86; // [esp+84h] [ebp-144h]
  int v87[2]; // [esp+88h] [ebp-140h] BYREF
  _DWORD v88[2]; // [esp+90h] [ebp-138h] BYREF
  Waypoint v89; // [esp+98h] [ebp-130h] BYREF

  *(_DWORD *)v75 = 4321; /*0x5d9425*/
  v77 = 2130706432; /*0x5d942d*/
  *a2 = 0; /*0x5d9435*/
  v66 = 0; /*0x5d9437*/
  v3 = &v89; /*0x5d943b*/
  v4 = 4; /*0x5d943f*/
  do /*0x5d944f*/
  {
    Waypoint::InitInvalid(v3); /*0x5d9446*/
    v3 = (Waypoint *)((char *)v3 + 12); /*0x5d944b*/
    --v4; /*0x5d944e*/
  }
  while ( v4 ); /*0x5d944f*/
  Timer::GetTicks(); /*0x5d9455*/
  if ( dword_A8E254 ) /*0x5d9469*/
  {
    v5 = 1; /*0x5d9471*/
    Debug::Log(); /*0x5d9476*/
    if ( byte_A8E180 ) /*0x5d9485*/
    {
      v5 = 9; /*0x5d948c*/
      Debug::Log(); /*0x5d9491*/
    }
    return v5; /*0x5d94a5*/
  }
  Ticks = Timer::GetTicks(); /*0x5d94bf*/
  Debug::Log(); /*0x5d94cb*/
  v7 = 0; /*0x5d94d3*/
  v86 = 0; /*0x5d94d5*/
  *(_DWORD *)v78 = dword_B76338; /*0x5d94d9*/
  v85 = &g_WindowManager.__pad_EC[688]; /*0x5d94e1*/
  v84 = aMangler1Westwo_0; /*0x5d94e9*/
  while ( 1 ) /*0x5d94fb*/
  {
    v8 = v84; /*0x5d94fb*/
    if ( dword_B77E1C > v86 ) /*0x5d9501*/
    {
      v8 = v85; /*0x5d9507*/
      v75[0] = **(_WORD **)v78; /*0x5d9513*/
      Debug::Log(); /*0x5d9518*/
    }
    v84 += 32; /*0x5d953b*/
    v85 += 128; /*0x5d953f*/
    *(_DWORD *)v78 += 4; /*0x5d9543*/
    ++v86; /*0x5d9554*/
    if ( !strlen(v8) ) /*0x5d9549*/
      break; /*0x5d9549*/
    strcpy(&v89.__pad_0[48], v8); /*0x5d9579*/
    v9 = gethostbyname(&v89.__pad_0[48]); /*0x5d958a*/
    if ( !v9 ) /*0x5d9591*/
    {
      WSAGetLastError(); /*0x5d9628*/
      Debug::Log(); /*0x5d9633*/
      break; /*0x5d9633*/
    }
    v10 = 0; /*0x5d9597*/
    if ( v7 <= 0 ) /*0x5d959b*/
    {
LABEL_16:
      ++v66; /*0x5d95b8*/
      v12 = (int *)((char *)&v81 + v7); /*0x5d95c8*/
      v7 += 4; /*0x5d95cc*/
      *v12 = **(_DWORD **)v9->h_addr_list; /*0x5d95d1*/
      Debug::Log(); /*0x5d95f2*/
    }
    else
    {
      v11 = &v81; /*0x5d95a2*/
      while ( *v11 != **(_DWORD **)v9->h_addr_list ) /*0x5d95aa*/
      {
        ++v10; /*0x5d95b0*/
        ++v11; /*0x5d95b1*/
        if ( v10 >= v66 ) /*0x5d95b6*/
          goto LABEL_16; /*0x5d95b6*/
      }
    }
    if ( v7 < 16 ) /*0x5d95fd*/
    {
      v13 = 300; /*0x5d9603*/
      if ( Ticks != -1 ) /*0x5d960a*/
      {
        v14 = Timer::GetTicks() - Ticks; /*0x5d9615*/
        if ( v14 >= 300 ) /*0x5d961b*/
          break; /*0x5d961b*/
        v13 = 300 - v14; /*0x5d961d*/
      }
      if ( v13 ) /*0x5d9621*/
        continue; /*0x5d9621*/
    }
    break; /*0x5d9621*/
  }
  v15 = v66; /*0x5d963b*/
  if ( v66 < 3 ) /*0x5d9642*/
    return 1; /*0x5d9642*/
  v16 = &v89; /*0x5d964c*/
  v17 = &v81; /*0x5d9650*/
  do /*0x5d9679*/
  {
    *(_DWORD *)v78 = *v17; /*0x5d965d*/
    Struct::Copy6Bytes(v16->__pad_0, (int)v78); /*0x5d9661*/
    Network::SetPort((Network *)v16, v75[0]); /*0x5d966d*/
    ++v17; /*0x5d9672*/
    v16 = (Waypoint *)((char *)v16 + 12); /*0x5d9675*/
    --v15; /*0x5d9678*/
  }
  while ( v15 ); /*0x5d9679*/
  v18 = 255; /*0x5d967b*/
  while ( 1 ) /*0x5d9689*/
  {
    v19 = (char *)this->Network_field_0x10 + 1; /*0x5d9689*/
    LOWORD(v15) = LOWORD(this->Network_field_0x10) + 1; /*0x5d968b*/
    v20 = (int)this->Network_field_0x10 - 65534 < 0; /*0x5d968e*/
    this->Network_field_0x10 = v19; /*0x5d9693*/
    *(_DWORD *)v75 = v15; /*0x5d9696*/
    if ( !(v20 ^ __OFSUB__(v19, 0xFFFF) | (v19 == (char *)0xFFFF)) ) /*0x5d969a*/
      this->Network_field_0x10 = (void *)2048; /*0x5d969c*/
    v21 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d969f*/
    if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d96b0*/
      break; /*0x5d96b0*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v15) ) /*0x5d96b5*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d96ce*/
        *(_DWORD *)&stru_887598.isAliveFlag,
        v15);
LABEL_36:
      v21 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d96d1*/
      break; /*0x5d96d1*/
    }
    if ( !v18-- ) /*0x5d96bc*/
      goto LABEL_36; /*0x5d96c1*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v21 + 104))(v21, v15) ) /*0x5d96da*/
    return 1; /*0x5d9d92*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x5d96ed*/
  v69 = Timer::GetTicks(); /*0x5d96f9*/
  v23 = 360; /*0x5d9701*/
  for ( i = 0; ; i = Network::WaitForPacket(2130706432, 0) ) /*0x5d970e*/
  {
    if ( v69 != -1 ) /*0x5d9715*/
    {
      v25 = Timer::GetTicks() - v69; /*0x5d9720*/
      if ( v25 >= 360 ) /*0x5d9726*/
        break; /*0x5d9726*/
      v23 = 360 - v25; /*0x5d9728*/
    }
    if ( !v23 ) /*0x5d972c*/
      break; /*0x5d972c*/
    if ( i ) /*0x5d9731*/
      goto LABEL_46; /*0x5d9731*/
    Network::QueryAddress((unsigned __int16 *)&v89, v15, 2130706432, 0); /*0x5d9742*/
    v23 = 360; /*0x5d9755*/
  }
  if ( !i ) /*0x5d9760*/
  {
LABEL_159:
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9d6d*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      v15);
    if ( i == (_WORD)v15 ) /*0x5d9d7c*/
    {
      this->Network_field_0x8 = 0; /*0x5d9d85*/
      *a2 = 1; /*0x5d9d8c*/
    }
    return 1; /*0x5d9d8c*/
  }
LABEL_46:
  if ( i == (_WORD)v15 ) /*0x5d9769*/
    goto LABEL_159; /*0x5d9769*/
  v26 = 360; /*0x5d977c*/
  v70 = Timer::GetTicks(); /*0x5d9781*/
  for ( j = 0; ; j = Network::WaitForPacket(2130706433, 0) ) /*0x5d978d*/
  {
    if ( v70 != -1 ) /*0x5d9794*/
    {
      v28 = Timer::GetTicks() - v70; /*0x5d979f*/
      if ( v28 >= 360 ) /*0x5d97a5*/
        break; /*0x5d97a5*/
      v26 = 360 - v28; /*0x5d97a7*/
    }
    if ( !v26 || j ) /*0x5d97b0*/
      break; /*0x5d97b0*/
    Network::QueryAddress((unsigned __int16 *)&v89.__pad_0[12], *(int *)v75, 2130706433, 0); /*0x5d97c5*/
    v26 = 360; /*0x5d97d8*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d97e0*/
    *(_DWORD *)&stru_887598.isAliveFlag,
    *(_DWORD *)v75);
  if ( !j || j == v75[0] ) /*0x5d97fc*/
    return 1; /*0x5d97fc*/
  *(_DWORD *)v78 = 0; /*0x5d9805*/
  v29 = (int *)(j != i ? 4 : 2);
  v67 = (int)v29; /*0x5d9818*/
  while ( 2 ) /*0x5d981c*/
  {
    v87[0] = 0; /*0x5d981c*/
    v88[0] = 0; /*0x5d9824*/
    v87[1] = 0; /*0x5d9828*/
    v88[1] = 0; /*0x5d982c*/
    for ( k = 0; k < 4; ++k ) /*0x5d9830*/
    {
      v31 = k; /*0x5d9834*/
      if ( !k ) /*0x5d9836*/
        v31 = 1; /*0x5d9838*/
      *(_DWORD *)v75 = 255; /*0x5d983d*/
      while ( 1 ) /*0x5d984a*/
      {
        v32 = (int)this->Network_field_0x10 + v31; /*0x5d984a*/
        this->Network_field_0x10 = (void *)v32; /*0x5d984c*/
        LOWORD(v29) = v32; /*0x5d9854*/
        if ( v32 > 0xFFFF ) /*0x5d9857*/
          this->Network_field_0x10 = (void *)2048; /*0x5d9859*/
        v33 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9860*/
        if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d9871*/
          break; /*0x5d9871*/
        if ( (*(unsigned __int8 (__stdcall **)(int *))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v29) ) /*0x5d9876*/
        {
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9897*/
            *(_DWORD *)&stru_887598.isAliveFlag,
            v29);
LABEL_69:
          v33 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d989a*/
          break; /*0x5d989a*/
        }
        if ( (*(_DWORD *)v75)-- == 0 ) /*0x5d9884*/
          goto LABEL_69; /*0x5d988a*/
      }
      *((_WORD *)v87 + k) = (_WORD)v29; /*0x5d98a0*/
      v35 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v33 + 104))(v33, v29); /*0x5d98a8*/
      if ( !(_BYTE)v35 ) /*0x5d98ad*/
      {
        if ( k > 0 ) /*0x5d99e7*/
        {
          v44 = v87; /*0x5d99e9*/
          do /*0x5d9a05*/
          {
            if ( *(_WORD *)v44 ) /*0x5d99ed*/
            {
              LOWORD(v35) = *(_WORD *)v44; /*0x5d99ed*/
              v35 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d99fe*/
                      *(_DWORD *)&stru_887598.isAliveFlag,
                      v35);
            }
            v44 = (int *)((char *)v44 + 2); /*0x5d9a01*/
            --k; /*0x5d9a04*/
          }
          while ( k ); /*0x5d9a05*/
        }
        return v67; /*0x5d9a15*/
      }
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x5d98c5*/
    v36 = 0; /*0x5d98d3*/
    v77 += 10; /*0x5d98d5*/
    v38 = Timer::GetTicks(); /*0x5d98d9*/
    HIWORD(v37) = 0; /*0x5d98de*/
    v81 = v38; /*0x5d98e3*/
    v71 = v38; /*0x5d98e7*/
    HIWORD(v38) = HIWORD(v82); /*0x5d98eb*/
    v39 = 720; /*0x5d98ef*/
    v83 = 720; /*0x5d98f1*/
    while ( 1 ) /*0x5d98fd*/
    {
      if ( v71 != -1 ) /*0x5d9902*/
      {
        v38 = Timer::GetTicks() - v71; /*0x5d990d*/
        if ( v38 >= 720 ) /*0x5d9913*/
          break; /*0x5d9913*/
        v39 = 720 - v38; /*0x5d9915*/
      }
      if ( !v39 || v36 >= 4 ) /*0x5d991e*/
        break; /*0x5d991e*/
      v40 = v77; /*0x5d9920*/
      for ( k = 0; k < 4; ++k ) /*0x5d9924*/
      {
        if ( !*((_WORD *)v88 + k) ) /*0x5d9926*/
        {
          LOWORD(v37) = *((_WORD *)v87 + k); /*0x5d992e*/
          Network::QueryAddress((unsigned __int16 *)&v89, v37, v40, 0); /*0x5d993e*/
          LOWORD(v38) = Network::WaitForPacket(v40, 0); /*0x5d9948*/
          *((_WORD *)v88 + k) = v38; /*0x5d9950*/
          if ( (_WORD)v38 ) /*0x5d9955*/
            ++v36; /*0x5d9957*/
        }
        ++v40; /*0x5d9959*/
      }
      v39 = 720; /*0x5d995f*/
    }
    v29 = v87; /*0x5d9969*/
    do /*0x5d9985*/
    {
      if ( *(_WORD *)v29 ) /*0x5d996d*/
      {
        LOWORD(v38) = *(_WORD *)v29; /*0x5d996d*/
        v38 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d997e*/
                *(_DWORD *)&stru_887598.isAliveFlag,
                v38);
      }
      v29 = (int *)((char *)v29 + 2); /*0x5d9981*/
      --k; /*0x5d9984*/
    }
    while ( k ); /*0x5d9985*/
    if ( v36 < 4 ) /*0x5d998a*/
    {
      Network_field_0xC = this->Network_field_0xC; /*0x5d9a18*/
      if ( Network_field_0xC && (int)this->Network_field_0x4 > 1 ) /*0x5d9a23*/
        this->Network_field_0x8 = Network_field_0xC; /*0x5d9a25*/
      return v67; /*0x5d9a28*/
    }
    else
    {
      HIBYTE(v76) = 0; /*0x5d99a7*/
      HIBYTE(v74) = 0; /*0x5d99ac*/
      v41 = (void *)DetectPortAllocationPattern( /*0x5d99b1*/
                      v36,
                      (__int16 *)v87,
                      (unsigned __int16 *)v88,
                      (_BYTE *)&v76 + 3,
                      (_BYTE *)&v74 + 3);
      if ( v41 ) /*0x5d99b8*/
      {
        v46 = -(HIBYTE(v76) != 0); /*0x5d9a43*/
        this->Network_field_0x8 = v41; /*0x5d9a45*/
        v43 = ((v46 & 0x10) + 16) | v67; /*0x5d9a52*/
        v67 = v43; /*0x5d9a56*/
        if ( HIBYTE(v74) ) /*0x5d9a5a*/
          *a2 = 1; /*0x5d9a63*/
      }
      else
      {
        v42 = this->Network_field_0xC; /*0x5d99ba*/
        if ( v42 && (int)this->Network_field_0x4 > 1 ) /*0x5d99c5*/
          this->Network_field_0x8 = v42; /*0x5d99c7*/
        ++*(_DWORD *)v78; /*0x5d99d2*/
        if ( *(int *)v78 < 3 ) /*0x5d99d6*/
          continue; /*0x5d99d6*/
        v43 = v67; /*0x5d99dc*/
      }
      if ( (v43 & 4) != 0 ) /*0x5d9a69*/
      {
        if ( (v43 & 0x10) != 0 ) /*0x5d9a72*/
        {
          Debug::Log(); /*0x5d9a7d*/
          v47 = 255; /*0x5d9a85*/
          while ( 1 ) /*0x5d9a8e*/
          {
            v48 = (int)this->Network_field_0x10 + 1; /*0x5d9a8e*/
            this->Network_field_0x10 = (void *)v48; /*0x5d9a90*/
            LOWORD(k) = v48; /*0x5d9a98*/
            if ( v48 > 0xFFFF ) /*0x5d9a9b*/
              this->Network_field_0x10 = (void *)2048; /*0x5d9a9d*/
            v49 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9aa4*/
            if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d9ab5*/
              break; /*0x5d9ab5*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(k) ) /*0x5d9aba*/
            {
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9ad3*/
                *(_DWORD *)&stru_887598.isAliveFlag,
                k);
LABEL_118:
              v49 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9ad6*/
              break; /*0x5d9ad6*/
            }
            if ( !v47-- ) /*0x5d9ac1*/
              goto LABEL_118; /*0x5d9ac6*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v49 + 104))(v49, k) ) /*0x5d9adf*/
            return v43; /*0x5d9af2*/
          v51 = 255; /*0x5d9af5*/
          while ( 1 ) /*0x5d9afe*/
          {
            v52 = (char *)this->Network_field_0x10 + 1; /*0x5d9afe*/
            LOWORD(v47) = LOWORD(this->Network_field_0x10) + 1; /*0x5d9b00*/
            v20 = (int)this->Network_field_0x10 - 65534 < 0; /*0x5d9b03*/
            this->Network_field_0x10 = v52; /*0x5d9b08*/
            *(_DWORD *)v75 = v47; /*0x5d9b0b*/
            if ( !(v20 ^ __OFSUB__(v52, 0xFFFF) | (v52 == (char *)0xFFFF)) ) /*0x5d9b0f*/
              this->Network_field_0x10 = (void *)2048; /*0x5d9b11*/
            v53 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9b18*/
            if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d9b29*/
              break; /*0x5d9b29*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v47) ) /*0x5d9b2e*/
            {
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9b47*/
                *(_DWORD *)&stru_887598.isAliveFlag,
                v47);
LABEL_130:
              v53 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9b4a*/
              break; /*0x5d9b4a*/
            }
            if ( !v51-- ) /*0x5d9b35*/
              goto LABEL_130; /*0x5d9b3a*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v53 + 104))(v53, v47) ) /*0x5d9b53*/
            return v67; /*0x5d9b68*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x5d9b73*/
          v72 = Timer::GetTicks(); /*0x5d9b7f*/
          v55 = 0; /*0x5d9b8f*/
          v56 = 240; /*0x5d9b91*/
          v77 += 10; /*0x5d9b9d*/
          while ( 1 ) /*0x5d9ba1*/
          {
            if ( v72 != -1 ) /*0x5d9ba6*/
            {
              v57 = Timer::GetTicks() - v72; /*0x5d9bb1*/
              if ( v57 >= 240 ) /*0x5d9bb7*/
                break; /*0x5d9bb7*/
              v56 = 240 - v57; /*0x5d9bb9*/
            }
            if ( !v56 ) /*0x5d9bbd*/
              break; /*0x5d9bbd*/
            if ( v55 ) /*0x5d9bc2*/
              goto LABEL_142; /*0x5d9bc2*/
            v58 = v77; /*0x5d9bc4*/
            Network::QueryAddress((unsigned __int16 *)&v89, k, v77, 0); /*0x5d9bd3*/
            v59 = Network::WaitForPacket(v58, 0); /*0x5d9bdd*/
            v56 = 240; /*0x5d9be2*/
            v55 = v59; /*0x5d9be6*/
          }
          if ( !v55 ) /*0x5d9bed*/
          {
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9bf8*/
              *(_DWORD *)&stru_887598.isAliveFlag,
              k);
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9c08*/
              *(_DWORD *)&stru_887598.isAliveFlag,
              *(_DWORD *)v75);
            return v67; /*0x5d9c19*/
          }
LABEL_142:
          *(_DWORD *)v78 = *(_DWORD *)v89.__pad_0; /*0x5d9c1c*/
          v79 = *(_DWORD *)&v89.__pad_0[4]; /*0x5d9c2d*/
          v80 = *(_DWORD *)&v89.__pad_0[8]; /*0x5d9c36*/
          Network::SetPort((Network *)v78, *(_WORD *)v89.__pad_0 + 1); /*0x5d9c3a*/
          v60 = v77; /*0x5d9c3f*/
          Network::QueryAddress(v78, k, v77, 0); /*0x5d9c4e*/
          Network::QueryAddress(v78, k, v60, 0); /*0x5d9c5e*/
          Network::QueryAddress(v78, k, v60, 0); /*0x5d9c6e*/
          v77 = v60 + 1; /*0x5d9c78*/
          v61 = 0; /*0x5d9c7c*/
          v73 = Timer::GetTicks(); /*0x5d9c83*/
          for ( m = 240; ; m = 240 ) /*0x5d9c8b*/
          {
            if ( v73 != -1 ) /*0x5d9c9d*/
            {
              v63 = Timer::GetTicks() - v73; /*0x5d9ca8*/
              if ( v63 >= 240 ) /*0x5d9cae*/
                break; /*0x5d9cae*/
              m = 240 - v63; /*0x5d9cb0*/
            }
            if ( !m ) /*0x5d9cb4*/
              break; /*0x5d9cb4*/
            if ( v61 ) /*0x5d9cb9*/
              goto LABEL_150; /*0x5d9cb9*/
            v64 = v77; /*0x5d9cbb*/
            Network::QueryAddress((unsigned __int16 *)&v89, *(int *)v75, v77, 0); /*0x5d9cce*/
            v61 = Network::WaitForPacket(v64, 0); /*0x5d9ce1*/
          }
          if ( !v61 ) /*0x5d9ce8*/
            goto LABEL_152; /*0x5d9ce8*/
LABEL_150:
          if ( (void *)v61 == (char *)this->Network_field_0x8 + v55 ) /*0x5d9cfd*/
          {
            Debug::Log(); /*0x5d9d5e*/
          }
          else
          {
            Debug::Log(); /*0x5d9d04*/
            v65 = v67; /*0x5d9d09*/
            LOBYTE(v65) = v67 | 0x40; /*0x5d9d10*/
            v67 = v65; /*0x5d9d12*/
          }
LABEL_152:
          v43 = v67; /*0x5d9d16*/
        }
        else
        {
          v43 |= 0x40u; /*0x5d9d68*/
        }
      }
      Debug::Log(); /*0x5d9d1f*/
      if ( dword_B77E18 == 2 || byte_A8E180 ) /*0x5d9d38*/
      {
        v43 |= 8u; /*0x5d9d3f*/
        Debug::Log(); /*0x5d9d42*/
      }
      return v43; /*0x5d9d4c*/
    }
  }
}



// ==== 0x005D9DB0  DetectPortAllocationPattern  this=-  sig=csp ====
int __stdcall DetectPortAllocationPattern(int a1, __int16 *a2, unsigned __int16 *a3, _BYTE *a4, _BYTE *a5)
{
  __int16 *v5; // ebp
  int v6; // edx
  int v8; // ecx
  __int16 *v9; // edx
  unsigned __int16 *v10; // eax
  int v11; // esi
  int v12; // ebp
  unsigned __int16 v13; // cx
  __int16 v14; // cx
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v19; // eax
  unsigned __int16 v20; // ax
  int v21; // esi
  int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned __int16 v24; // cx
  int v25; // esi
  int v26; // edi
  int v27; // esi
  int v28; // eax
  int v29; // [esp+1Ch] [ebp+Ch]

  v5 = a2; /*0x5d9db2*/
  Debug::Log(); /*0x5d9dd9*/
  v6 = a1; /*0x5d9dde*/
  if ( a1 > 0 ) /*0x5d9deb*/
  {
    v29 = a1; /*0x5d9ded*/
    do /*0x5d9e46*/
    {
      v8 = v6 - 1; /*0x5d9df1*/
      if ( v6 - 1 > 0 ) /*0x5d9df6*/
      {
        v9 = v5; /*0x5d9dfa*/
        v10 = a3 + 1; /*0x5d9dfc*/
        v11 = (char *)v5 - (char *)a3; /*0x5d9dff*/
        v12 = v8; /*0x5d9e01*/
        do /*0x5d9e33*/
        {
          v13 = *(v10 - 1); /*0x5d9e03*/
          if ( v13 > *v10 ) /*0x5d9e0d*/
          {
            *(v10 - 1) = *v10; /*0x5d9e15*/
            *v10 = v13; /*0x5d9e19*/
            v14 = *v9; /*0x5d9e22*/
            *v9 = *(unsigned __int16 *)((char *)v10 + v11); /*0x5d9e25*/
            *(unsigned __int16 *)((char *)v10 + v11) = v14; /*0x5d9e28*/
          }
          ++v9; /*0x5d9e2c*/
          ++v10; /*0x5d9e2f*/
          --v12; /*0x5d9e32*/
        }
        while ( v12 ); /*0x5d9e33*/
        v5 = a2; /*0x5d9e35*/
        v6 = a1; /*0x5d9e39*/
      }
      --v29; /*0x5d9e42*/
    }
    while ( v29 ); /*0x5d9e46*/
  }
  v15 = a3[1]; /*0x5d9e4c*/
  v16 = (unsigned __int16)v15 - *a3; /*0x5d9e55*/
  if ( v16 == 1 ) /*0x5d9e5a*/
  {
    v17 = a3[2]; /*0x5d9e5e*/
    if ( (unsigned __int16)v17 - v15 == 1 && a3[3] - v17 == 1 ) /*0x5d9e74*/
    {
      Debug::Log(); /*0x5d9e7b*/
      *a4 = 0; /*0x5d9e8d*/
      *a5 = 1; /*0x5d9e90*/
      return 1; /*0x5d9e97*/
    }
  }
  if ( v16 == 2 ) /*0x5d9e9d*/
  {
    v19 = a3[2]; /*0x5d9ea1*/
    if ( (unsigned __int16)v19 - v15 == 2 && a3[3] - v19 == 2 ) /*0x5d9eb7*/
    {
      Debug::Log(); /*0x5d9ebe*/
      *a4 = 0; /*0x5d9ece*/
      *a5 = 1; /*0x5d9ed6*/
      return 2; /*0x5d9eda*/
    }
  }
  v20 = a3[2]; /*0x5d9edf*/
  v21 = v20 - v15; /*0x5d9ee5*/
  v22 = a3[3] - v20; /*0x5d9eed*/
  if ( v16 != v21 ) /*0x5d9ef1*/
  {
    if ( v21 == v22 ) /*0x5d9f42*/
    {
      Debug::Log(); /*0x5d9f4a*/
      *a4 = 0; /*0x5d9f5a*/
      *a5 = 0; /*0x5d9f62*/
      return v21; /*0x5d9f66*/
    }
    if ( v6 > 0 ) /*0x5d9f6b*/
    {
      v23 = a3; /*0x5d9f6f*/
      do /*0x5d9f7e*/
      {
        *v23 -= *(unsigned __int16 *)((char *)v23 + (char *)v5 - (char *)a3); /*0x5d9f77*/
        ++v23; /*0x5d9f7a*/
        --v6; /*0x5d9f7d*/
      }
      while ( v6 ); /*0x5d9f7e*/
    }
    v24 = a3[2]; /*0x5d9f84*/
    v25 = a3[1]; /*0x5d9f93*/
    v26 = v24 - v25; /*0x5d9f95*/
    v27 = v25 - *a3; /*0x5d9f9d*/
    v28 = a3[3] - v24; /*0x5d9f9f*/
    if ( v27 == v26 ) /*0x5d9fa3*/
    {
      if ( v26 == v28 ) /*0x5d9fa7*/
      {
        Debug::Log(); /*0x5d9faf*/
        *a4 = 1; /*0x5d9fbf*/
        *a5 = 1; /*0x5d9fc7*/
        return v27; /*0x5d9fcb*/
      }
    }
    else if ( v27 != v28 ) /*0x5d9fd0*/
    {
      if ( v26 == v28 ) /*0x5d9fd4*/
      {
        Debug::Log(); /*0x5d9fdc*/
        *a4 = 1; /*0x5d9fec*/
        *a5 = 0; /*0x5d9fef*/
        return v26; /*0x5d9ff2*/
      }
      else
      {
        *a5 = 0; /*0x5da005*/
        *a4 = 0; /*0x5da009*/
        return 0; /*0x5da00c*/
      }
    }
    Debug::Log(); /*0x5da018*/
    *a4 = 1; /*0x5da028*/
    *a5 = 0; /*0x5da030*/
    return v27; /*0x5da02b*/
  }
  if ( v21 == v22 ) /*0x5d9ef6*/
  {
    Debug::Log(); /*0x5d9efd*/
    *a4 = 0; /*0x5d9f0d*/
    *a5 = 1; /*0x5d9f10*/
  }
  else
  {
    Debug::Log(); /*0x5d9f21*/
    *a4 = 0; /*0x5d9f33*/
    *a5 = 0; /*0x5d9f36*/
  }
  return v16; /*0x5d9e93*/
}



// ==== 0x005DA040  Network_Connect  this=-  sig=csp ====
int __stdcall sub_5DA040(char a1)
{
  int result; // eax

  result = (a1 & 1) != 0; /*0x5da04b*/
  if ( (a1 & 2) != 0 ) /*0x5da053*/
    result += 2; /*0x5da055*/
  if ( (a1 & 4) != 0 ) /*0x5da05b*/
    result += 3; /*0x5da05d*/
  if ( (a1 & 8) != 0 ) /*0x5da063*/
    result += 10; /*0x5da065*/
  if ( (a1 & 0x10) != 0 ) /*0x5da06b*/
    ++result; /*0x5da06d*/
  if ( (a1 & 0x20) != 0 ) /*0x5da071*/
    result += 2; /*0x5da073*/
  return result; /*0x5da076*/
}



// ==== 0x005DA080  NetworkLobby::GetPlayerCount  this=NetworkLobby  sig=csp ====
int __stdcall NetworkLobby::GetPlayerCount(char a1)
{
  int result; // eax

  result = 2; /*0x5da084*/
  if ( (a1 & 1) != 0 ) /*0x5da08c*/
    result = 3; /*0x5da08e*/
  if ( (a1 & 2) != 0 ) /*0x5da096*/
    ++result; /*0x5da098*/
  if ( (a1 & 4) != 0 ) /*0x5da09c*/
    ++result; /*0x5da09e*/
  if ( (a1 & 0x20) != 0 ) /*0x5da0a2*/
    result += 5; /*0x5da0a4*/
  return result; /*0x5da0a7*/
}



// ==== 0x005DA0B0  Network::ResolveNetworkAddress  this=Network  sig=csp ====
unsigned int __thiscall Network::ResolveNetworkAddress(Network *this, unsigned __int16 a2)
{
  unsigned int result; // eax
  __int16 v4; // bx
  struct hostent *v5; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v11; // edi
  unsigned __int16 v12; // si
  int v13; // eax
  int v14; // edi
  int Network_field_0x8; // ebp
  int Network_field_0x0; // [esp+10h] [ebp-13Ch]
  int Ticks; // [esp+14h] [ebp-138h]
  int v18; // [esp+20h] [ebp-12Ch]
  int v19; // [esp+24h] [ebp-128h] BYREF
  int v20; // [esp+2Ch] [ebp-120h]
  int v21; // [esp+30h] [ebp-11Ch]
  Waypoint v22; // [esp+34h] [ebp-118h] BYREF

  Timer::GetTicks(); /*0x5da0c0*/
  result = this->Network_field_0x0; /*0x5da0c9*/
  Network_field_0x0 = this->Network_field_0x0; /*0x5da0d6*/
  if ( !this->Network_field_0x0 ) /*0x5da0c9*/
  {
    LOWORD(result) = a2; /*0x5da0dc*/
    return result; /*0x5da0ee*/
  }
  if ( (result & 1) != 0 ) /*0x5da0f3*/
  {
    LOWORD(result) = a2; /*0x5da0f5*/
    return result; /*0x5da107*/
  }
  v4 = 4321; /*0x5da11e*/
  strcpy(&v22.__pad_0[24], aMangler1Westwo); /*0x5da12c*/
  if ( dword_B77E1C > 0 ) /*0x5da13c*/
  {
    v4 = dword_B76338[dword_B77E20]; /*0x5da169*/
    strcpy(&v22.__pad_0[24], &g_WindowManager.__pad_EC[128 * dword_B77E20 + 688]); /*0x5da174*/
    Debug::Log(); /*0x5da17d*/
  }
  Debug::Log(); /*0x5da18f*/
  v5 = gethostbyname(&v22.__pad_0[24]); /*0x5da19c*/
  if ( !v5 ) /*0x5da1a3*/
  {
    WSAGetLastError(); /*0x5da1a5*/
    result = Debug::Log(); /*0x5da1b0*/
    LOWORD(result) = a2; /*0x5da1b5*/
    return result; /*0x5da1ca*/
  }
  v19 = **(_DWORD **)v5->h_addr_list; /*0x5da1dd*/
  Debug::Log(); /*0x5da20d*/
  Waypoint::InitInvalid(&v22); /*0x5da219*/
  Struct::Copy6Bytes(v22.__pad_0, (int)&v19); /*0x5da227*/
  Network::SetPort((Network *)&v22, v4); /*0x5da231*/
  Network::FormatAddress((Network *)&v22, 0); /*0x5da23c*/
  Debug::Log(); /*0x5da247*/
  v6 = 0; /*0x5da250*/
  v18 = 0; /*0x5da258*/
  Debug::Log(); /*0x5da25c*/
  v20 = Network_field_0x0 & 4; /*0x5da26b*/
  if ( (Network_field_0x0 & 4) != 0 ) /*0x5da26f*/
  {
    v7 = 255; /*0x5da275*/
    while ( 1 ) /*0x5da283*/
    {
      v8 = (int)this->Network_field_0x10 + 1; /*0x5da283*/
      this->Network_field_0x10 = (void *)v8; /*0x5da285*/
      LOWORD(v6) = v8; /*0x5da28d*/
      if ( v8 > 0xFFFF ) /*0x5da290*/
        this->Network_field_0x10 = (void *)2048; /*0x5da292*/
      v9 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5da295*/
      if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5da2a6*/
        break; /*0x5da2a6*/
      if ( (*(unsigned __int8 (__stdcall **)(int))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v6) ) /*0x5da2ab*/
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5da2c4*/
          *(_DWORD *)&stru_887598.isAliveFlag,
          v6);
LABEL_19:
        v9 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5da2c7*/
        break; /*0x5da2c7*/
      }
      if ( !v7-- ) /*0x5da2b2*/
        goto LABEL_19; /*0x5da2b7*/
    }
    v18 = v6; /*0x5da2cd*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 104))(v9, v6); /*0x5da2d4*/
    if ( !(_BYTE)result ) /*0x5da2d9*/
    {
      LOWORD(result) = a2; /*0x5da2db*/
      return result; /*0x5da2ed*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x5da2f8*/
  }
  v21 = (unsigned __int16)v6; /*0x5da308*/
  Debug::Log(); /*0x5da30c*/
  Ticks = Timer::GetTicks(); /*0x5da31d*/
  v11 = 180; /*0x5da325*/
  v12 = 0; /*0x5da332*/
  while ( 1 ) /*0x5da334*/
  {
    if ( Ticks != -1 ) /*0x5da339*/
    {
      v13 = Timer::GetTicks() - Ticks; /*0x5da344*/
      if ( v13 >= 180 ) /*0x5da34a*/
        break; /*0x5da34a*/
      v11 = 180 - v13; /*0x5da34c*/
    }
    if ( !v11 || v12 ) /*0x5da355*/
      break; /*0x5da355*/
    Network::QueryAddress((unsigned __int16 *)&v22, v6, dword_830CA8, 0); /*0x5da368*/
    v12 = Network::WaitForPacket(dword_830CA8, 30); /*0x5da37c*/
    Debug::Log(); /*0x5da38c*/
    v11 = 180; /*0x5da391*/
  }
  ++dword_830CA8; /*0x5da39a*/
  if ( (_WORD)v18 ) /*0x5da3ae*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5da3b9*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      v18);
  if ( v12 ) /*0x5da3bf*/
  {
    if ( v20 ) /*0x5da3e9*/
    {
      if ( (Network_field_0x0 & 0x10) != 0 ) /*0x5da415*/
      {
        v14 = (int)this->Network_field_0x8 + v12; /*0x5da420*/
      }
      else
      {
        Network_field_0x8 = (int)this->Network_field_0x8; /*0x5da424*/
        if ( Network_field_0x8 == 100 ) /*0x5da42a*/
          v14 = v12 - v21 + a2 + 100; /*0x5da445*/
        else
          v14 = a2 % Network_field_0x8 + Network_field_0x8 * (v12 / Network_field_0x8 + 1); /*0x5da46a*/
      }
      if ( v14 > 0xFFFF ) /*0x5da472*/
        v14 -= 0xFFFF; /*0x5da474*/
      if ( v14 < 1024 ) /*0x5da480*/
        LOWORD(v14) = v14 + 1024; /*0x5da482*/
      result = Debug::Log(); /*0x5da48e*/
      LOWORD(result) = v14; /*0x5da496*/
    }
    else
    {
      result = Debug::Log(); /*0x5da3f8*/
      LOWORD(result) = v12; /*0x5da400*/
    }
  }
  else
  {
    result = Debug::Log(); /*0x5da3c6*/
    LOWORD(result) = a2; /*0x5da3cb*/
  }
  return result; /*0x5da0e4*/
}



// ==== 0x005DA4B0  sub_5DA4B0  this=-  sig=ida-proto ====
int sub_5DA4B0()
{
  dword_ABFEF8 = 0; /*0x5da4b2*/
  dword_ABFEFC = 0; /*0x5da4b7*/
  dword_ABFF00 = 0; /*0x5da4bc*/
  dword_ABFF04 = 0; /*0x5da4c1*/
  return 0; /*0x5da4c6*/
}



// ==== 0x005DA4D0  sub_5DA4D0  this=-  sig=ida-proto ====
void sub_5DA4D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5da4dc*/
  dbl_ABFF10 = Math::Sqrt(v0 + v0); /*0x5da4ee*/
}



// ==== 0x005DA500  sub_5DA500  this=-  sig=ida-proto ====
void sub_5DA500()
{
  dbl_ABFF60 = dbl_ABFF10 / 60.0; /*0x5da50c*/
}



// ==== 0x005DA520  sub_5DA520  this=-  sig=ida-proto ====
void sub_5DA520()
{
  dbl_ABFF48 = 1.0 / dbl_ABFF60; /*0x5da52c*/
}



// ==== 0x005DA540  sub_5DA540  this=-  sig=ida-proto ====
void sub_5DA540()
{
  dbl_ABFF40 = 0.0174532925199433 * 45.0; /*0x5da54c*/
}



// ==== 0x005DA560  sub_5DA560  this=-  sig=ida-proto ====
void sub_5DA560()
{
  dbl_ABFF18 = 0.0174532925199433 * 60.0; /*0x5da56c*/
}



// ==== 0x005DA580  sub_5DA580  this=-  sig=ida-proto ====
void sub_5DA580()
{
  dbl_ABFEF0 = 0.0174532925199433 * 90.0; /*0x5da58c*/
}



// ==== 0x005DA5A0  sub_5DA5A0  this=-  sig=ida-proto ====
__int64 sub_5DA5A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFEF0 - dbl_ABFF18); /*0x5da5b2*/
  result = Math::RoundToInt(v0 * dbl_ABFF10 * 0.5); /*0x5da5c6*/
  dword_ABFF68 = result; /*0x5da5cb*/
  return result; /*0x5da5d0*/
}



// ==== 0x005DA5E0  sub_5DA5E0  this=-  sig=ida-proto ====
void sub_5DA5E0()
{
  dbl_ABFF20 = Math::ArcTan((double)dword_ABFF68 * 0.00390625); /*0x5da5f7*/
}



// ==== 0x005DA610  sub_5DA610  this=-  sig=ida-proto ====
void sub_5DA610()
{
  dbl_ABFF38 = Math::ArcTan((double)(2 * dword_ABFF68) / dbl_ABFF10); /*0x5da632*/
}



// ==== 0x005DA640  sub_5DA640  this=-  sig=ida-proto ====
__int64 sub_5DA640()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFF68) + 0.5); /*0x5da65b*/
  dword_ABFF5C = result; /*0x5da660*/
  return result; /*0x5da666*/
}



// ==== 0x005DA670  sub_5DA670  this=-  sig=ida-proto ====
int sub_5DA670()
{
  word_ABFF08 = 0; /*0x5da672*/
  word_ABFF0A = 0; /*0x5da678*/
  return 0; /*0x5da67e*/
}



// ==== 0x005DA680  sub_5DA680  this=-  sig=ida-proto ====
int sub_5DA680()
{
  dword_ABFF28 = 0; /*0x5da682*/
  dword_ABFF2C = 0; /*0x5da687*/
  dword_ABFF30 = 0; /*0x5da68c*/
  return 0; /*0x5da691*/
}



// ==== 0x005DA6A0  sub_5DA6A0  this=-  sig=ida-proto ====
int sub_5DA6A0()
{
  dword_ABFF58 = 0; /*0x5da6a5*/
  dword_ABFF50 = 128; /*0x5da6af*/
  dword_ABFF54 = 128; /*0x5da6b4*/
  return 128; /*0x5da6b9*/
}



// ==== 0x005DA6C0  Network_Init_5DA6C0  this=-  sig=ida-proto ====
char sub_5DA6C0()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !Network_Init((int)unk_A8E9C0) ) /*0x5da6c8*/
    return 0; /*0x5da6d1*/
  if ( dword_A8B238[0] != 4 ) /*0x5da6de*/
  {
    if ( dword_A8D5FC ) /*0x5da6e7*/
    {
      Network::CopyAddress(&stru_A8D600, &v1, (int)v2); /*0x5da6f8*/
      Network_Init_542FC0(unk_A8E9C0, (int)&v1); /*0x5da707*/
    }
  }
  return 1; /*0x5da6d3*/
}



// ==== 0x005DA720  Network::ShutdownInterface  this=Network  sig=csp ====
int Network::ShutdownInterface(Network *this)
{
  int result; // eax

  LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x5da72b*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x5da732*/
    result = (***(int (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)(*(_DWORD *)&stru_887598.isAliveFlag, 1); /*0x5da738*/
  *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x5da73a*/
  return result; /*0x5da740*/
}



// ==== 0x005DA750  HandleNetworkPlayerDisconnect  this=AbstractClass  sig=ida-proto ====
void __fastcall Network_HandlePlayerDisconnect(int a1, int a2)
{
  int v2; // ebp
  int v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  LPARAM *v17; // eax
  int v18; // eax
  wchar_t *v19; // [esp-8h] [ebp-134h]
  wchar_t *v20; // [esp-8h] [ebp-134h]
  int v21; // [esp+Ch] [ebp-120h] BYREF
  int v22; // [esp+10h] [ebp-11Ch]
  _BYTE v23[8]; // [esp+14h] [ebp-118h] BYREF
  wchar_t String[80]; // [esp+1Ch] [ebp-110h] BYREF
  char v25[112]; // [esp+BCh] [ebp-70h] BYREF

  v2 = a1; /*0x5da75d*/
  v4 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * a1]; /*0x5da762*/
  v21 = a1; /*0x5da76c*/
  if ( byte_A8ED74 ) /*0x5da770*/
    Debug::Log(); /*0x5da77f*/
  if ( !v4 || !*(_BYTE *)(v4 + 492) ) /*0x5da78f*/
    return; /*0x5da797*/
  String[0] = 0; /*0x5da7a0*/
  if ( a2 == 1 ) /*0x5da7a7*/
  {
    v19 = GetStringCSF(aTxtConnectionL, 0, aDRa2mdpostNetd, 464); /*0x5da7c6*/
    swprintf(String, (const size_t)v19, (const wchar_t *const)(v4 + 90154)); /*0x5da7cc*/
  }
  else if ( !a2 ) /*0x5da7d0*/
  {
    v20 = GetStringCSF(aTxtLeftGame, 0, aDRa2mdpostNetd, 466); /*0x5da7f3*/
    swprintf(String, (const size_t)v20, (const wchar_t *const)(v4 + 90154)); /*0x5da7f5*/
  }
  if ( wcslen(String) ) /*0x5da802*/
  {
    v5 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x5da822*/
    MessageListClass::AddMessage(unk_A8BC60, 0, 0, String, *(_DWORD *)(*(_DWORD *)(v4 + 52) + 192), 16454, v5, 0); /*0x5da845*/
    MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x5da851*/
  }
  ((void (__stdcall *)(int))Network::sendData)(v2); /*0x5da85d*/
  if ( a2 ) /*0x5da864*/
  {
    if ( dword_A8ED84 ) /*0x5da871*/
    {
      v6 = EventClass::Add2(v25, *((_DWORD *)dword_A83D4C + 12), 0x23u, v2); /*0x5da893*/
      if ( dword_A802C8 < 128 ) /*0x5da8a2*/
      {
        qmemcpy(&byte_A802D4[111 * dword_A802D0], v6, 0x6Fu); /*0x5da8c2*/
        dword_A83A54[dword_A802D0] = timeGetTime(); /*0x5da8d3*/
        dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x5da8ea*/
        ++dword_A802C8; /*0x5da8f0*/
      }
    }
    else
    {
      Network::SendOffer(v4); /*0x5da875*/
    }
LABEL_21:
    if ( dword_A8B238[0] == 4 ) /*0x5da940*/
    {
      if ( byte_A8DBA0 ) /*0x5da94d*/
      {
        if ( SessionClass::IsValidHouse((int)dword_A8B238, (#375 *)v4) ) /*0x5da959*/
        {
          byte_A8E2D0 = 1; /*0x5da96b*/
          v7 = EventClass::validateEventType(&unk_B052D0); /*0x5da972*/
          v8 = v7; /*0x5da977*/
          if ( v7 != -1 ) /*0x5da97c*/
          {
            v9 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v7]; /*0x5da987*/
            v22 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v8]; /*0x5da98c*/
            if ( v9 ) /*0x5da990*/
            {
              if ( dword_A8DA84 > 2 ) /*0x5da99f*/
              {
                v10 = 0; /*0x5da9a5*/
                v11 = 0; /*0x5da9a7*/
                if ( dword_A8DA84 > 0 ) /*0x5da9ab*/
                {
                  v12 = dword_A8DA78; /*0x5da9b3*/
                  while ( *(_DWORD *)(*(_DWORD *)v12 + 111) != v8 ) /*0x5da9ba*/
                  {
                    ++v11; /*0x5da9bc*/
                    v12 += 4; /*0x5da9bd*/
                    if ( v11 >= dword_A8DA84 ) /*0x5da9c2*/
                      goto LABEL_33; /*0x5da9c2*/
                  }
                  v10 = (_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * v11) + 40); /*0x5da9d1*/
                  LOWORD(dword_A8DBBC) = *((_WORD *)&dword_A8E2B2 + v11); /*0x5da9d4*/
LABEL_33:
                  v2 = v21; /*0x5da9db*/
                }
                Network::CopyAddress(v10, &v21, (int)v23); /*0x5da9e9*/
                NetworkID::Assign(&qword_A8DBA4, &v21, (int)v23, 0); /*0x5da9ff*/
                Network::FormatAddress((unsigned __int16 *)&qword_A8DBA4, 0); /*0x5daa0b*/
                Debug::Log(); /*0x5daa16*/
                Debug::Log(); /*0x5daa2d*/
                ((void (__stdcall *)(int *))Network::SetPlayerCoords)(&qword_A8DBA4); /*0x5daa3f*/
                v9 = v22; /*0x5daa44*/
              }
              wcscpy(word_A8E258, (const wchar_t *)(v9 + 90154)); /*0x5daa53*/
              Debug::Log(); /*0x5daa62*/
              dword_A8E2AC = v8; /*0x5daa6f*/
              if ( SessionClass::IsValidHouse((int)dword_A8B238, 0) ) /*0x5daa77*/
                Network::SendMasterPlayerList((int)&unk_B052D0); /*0x5daa85*/
            }
          }
        }
      }
    }
    goto LABEL_37; /*0x5daa85*/
  }
  if ( dword_A8B238[0] == 4 ) /*0x5da8fe*/
  {
    if ( !*(_DWORD *)dword_B779C4 || (Network::SendOffer(v4), dword_A8B238[0] == 4) ) /*0x5da91b*/
    {
      if ( byte_A8DBA0 ) /*0x5da928*/
      {
        ((void (__stdcall *)(int))NetworkManager::RemovePlayer)(v2); /*0x5da934*/
        goto LABEL_21; /*0x5da934*/
      }
    }
  }
LABEL_37:
  v13 = 0; /*0x5daa8a*/
  if ( dword_A8DA84 > 0 ) /*0x5daa94*/
  {
    v14 = dword_A8DA78; /*0x5daa9a*/
    v15 = dword_A8DA78; /*0x5daaa0*/
    while ( *(_DWORD *)(*(_DWORD *)v15 + 111) != v2 ) /*0x5daaa7*/
    {
      ++v13; /*0x5daaa9*/
      v15 += 4; /*0x5daaaa*/
      if ( v13 >= dword_A8DA84 ) /*0x5daaaf*/
        goto LABEL_54; /*0x5daaaf*/
    }
    v16 = 0; /*0x5daab9*/
    v17 = &dword_A8DA90; /*0x5daabb*/
    while ( *v17 != *(_DWORD *)(dword_A8DA78 + 4 * v13) ) /*0x5daac2*/
    {
      ++v17; /*0x5daac4*/
      ++v16; /*0x5daac7*/
      if ( (int)v17 >= (int)&dword_A8DAB0 ) /*0x5daacd*/
        goto LABEL_47; /*0x5daacd*/
    }
    *(&dword_A8DA90 + v16) = g_HouseClass_ObserverFlags; /*0x5daad6*/
    v14 = dword_A8DA78; /*0x5daadd*/
LABEL_47:
    __3_YAXPAX_Z(*(void **)(v14 + 4 * v13)); /*0x5daae3*/
    v18 = (*(int (__thiscall **)(int *, int))(stru_A8DA74 + 16))(&stru_A8DA74, dword_A8DA78 + 4 * v13); /*0x5dab03*/
    if ( v18 != -1 && v18 < dword_A8DA84 && v18 < --dword_A8DA84 ) /*0x5dab1e*/
    {
      do /*0x5dab36*/
      {
        ++v18; /*0x5dab26*/
        *(_DWORD *)(dword_A8DA78 + 4 * v18 - 4) = *(_DWORD *)(dword_A8DA78 + 4 * v18); /*0x5dab2a*/
      }
      while ( v18 < dword_A8DA84 ); /*0x5dab36*/
    }
    ((void (__stdcall *)(int))Network_Disconnect_69BBF0)(v13); /*0x5dab3e*/
    if ( dword_A8B238[0] == 4 ) /*0x5dab4a*/
    {
      if ( byte_A8DBA0 ) /*0x5dab53*/
        ((void (__stdcall *)(int))NetworkManager::RemovePlayer)(v2); /*0x5dab5b*/
    }
  }
LABEL_54:
  --dword_A8B54C; /*0x5dab60*/
}



// ==== 0x005DAB80  ObjectClass::method_5DAB80  this=ObjectClass  sig=csp ====
int __thiscall sub_5DAB80(ObjectClass *this)
{
  unsigned int i; // esi
  int v3; // [esp+8h] [ebp-54h] BYREF
  char String[80]; // [esp+Ch] [ebp-50h] BYREF

  v3 = 0; /*0x5dab96*/
  strcpy(String, (const char *)this); /*0x5daba7*/
  _strupr(String); /*0x5dabb5*/
  for ( i = 0; i < strlen(String); ++i ) /*0x5dabc8*/
    ComputeHash(&v3, String[i]); /*0x5dabd8*/
  return v3; /*0x5dabf4*/
}



// ==== 0x005DAC00  WideString::Hash  this=Player  sig=csp ====
int __thiscall WideString::Hash(WideString *this)
{
  unsigned int v1; // esi
  wchar_t *v2; // edi
  int v4; // [esp+4h] [ebp-A4h] BYREF
  wchar_t String[80]; // [esp+8h] [ebp-A0h] BYREF

  v1 = 0; /*0x5dac0b*/
  v4 = 0; /*0x5dac0f*/
  wcscpy(String, (const wchar_t *)this); /*0x5dac13*/
  _wcsupr(String); /*0x5dac1d*/
  if ( !wcslen(String) ) /*0x5dac27*/
    return v4; /*0x5dac68*/
  v2 = String; /*0x5dac34*/
  do /*0x5dac59*/
  {
    ComputeHash(&v4, *v2); /*0x5dac41*/
    ++v1; /*0x5dac4a*/
    ++v2; /*0x5dac4c*/
  }
  while ( v1 < wcslen(String) ); /*0x5dac59*/
  return v4; /*0x5dac60*/
}



// ==== 0x005DACD0  sub_5DACD0  this=-  sig=ida-proto ====
int sub_5DACD0()
{
  dword_AC01A8 = 0; /*0x5dacd2*/
  dword_AC01AC = 0; /*0x5dacd7*/
  dword_AC01B0 = 0; /*0x5dacdc*/
  dword_AC01B4 = 0; /*0x5dace1*/
  return 0; /*0x5dace6*/
}



// ==== 0x005DACF0  sub_5DACF0  this=-  sig=ida-proto ====
void sub_5DACF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5dacfc*/
  dbl_AC01C0 = Math::Sqrt(v0 + v0); /*0x5dad0e*/
}



// ==== 0x005DAD20  sub_5DAD20  this=-  sig=ida-proto ====
void sub_5DAD20()
{
  dbl_AC0250 = dbl_AC01C0 / 60.0; /*0x5dad2c*/
}



// ==== 0x005DAD40  sub_5DAD40  this=-  sig=ida-proto ====
void sub_5DAD40()
{
  dbl_AC0218 = 1.0 / dbl_AC0250; /*0x5dad4c*/
}



// ==== 0x005DAD60  sub_5DAD60  this=-  sig=ida-proto ====
void sub_5DAD60()
{
  dbl_AC0210 = 0.0174532925199433 * 45.0; /*0x5dad6c*/
}



// ==== 0x005DAD80  sub_5DAD80  this=-  sig=ida-proto ====
void sub_5DAD80()
{
  dbl_AC01C8 = 0.0174532925199433 * 60.0; /*0x5dad8c*/
}



// ==== 0x005DADA0  sub_5DADA0  this=-  sig=ida-proto ====
void sub_5DADA0()
{
  dbl_AC0198 = 0.0174532925199433 * 90.0; /*0x5dadac*/
}



// ==== 0x005DADC0  sub_5DADC0  this=-  sig=ida-proto ====
__int64 sub_5DADC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC0198 - dbl_AC01C8); /*0x5dadd2*/
  result = Math::RoundToInt(v0 * dbl_AC01C0 * 0.5); /*0x5dade6*/
  dword_AC0258 = result; /*0x5dadeb*/
  return result; /*0x5dadf0*/
}



// ==== 0x005DAE00  sub_5DAE00  this=-  sig=ida-proto ====
void sub_5DAE00()
{
  dbl_AC01D8 = Math::ArcTan((double)dword_AC0258 * 0.00390625); /*0x5dae17*/
}



// ==== 0x005DAE30  sub_5DAE30  this=-  sig=ida-proto ====
void sub_5DAE30()
{
  dbl_AC01F8 = Math::ArcTan((double)(2 * dword_AC0258) / dbl_AC01C0); /*0x5dae52*/
}



// ==== 0x005DAE60  sub_5DAE60  this=-  sig=ida-proto ====
__int64 sub_5DAE60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC0258) + 0.5); /*0x5dae7b*/
  dword_AC024C = result; /*0x5dae80*/
  return result; /*0x5dae86*/
}



// ==== 0x005DAE90  sub_5DAE90  this=-  sig=ida-proto ====
int sub_5DAE90()
{
  word_AC01B8 = 0; /*0x5dae92*/
  word_AC01BA = 0; /*0x5dae98*/
  return 0; /*0x5dae9e*/
}



// ==== 0x005DAEA0  sub_5DAEA0  this=-  sig=ida-proto ====
int sub_5DAEA0()
{
  dword_AC01E8 = 0; /*0x5daea2*/
  dword_AC01EC = 0; /*0x5daea7*/
  dword_AC01F0 = 0; /*0x5daeac*/
  return 0; /*0x5daeb1*/
}



// ==== 0x005DAEC0  sub_5DAEC0  this=-  sig=ida-proto ====
int sub_5DAEC0()
{
  dword_AC0248 = 0; /*0x5daec5*/
  dword_AC0240 = 128; /*0x5daecf*/
  dword_AC0244 = 128; /*0x5daed4*/
  return 128; /*0x5daed9*/
}



// ==== 0x005DAEE0  sub_5DAEE0  this=-  sig=ida-proto ====
int sub_5DAEE0()
{
  dword_AC0230 = Timer::GetTicks(); /*0x5daeef*/
  dword_AC0238 = 0; /*0x5daef4*/
  return atexit(nullsub_194); /*0x5daf04*/
}



// ==== 0x005DAF10  nullsub_194  this=-  sig=ida-proto ====
void __cdecl nullsub_194()
{
  ; /*0x5daf10*/
}



// ==== 0x005DAF20    this=-  sig=? ====
char sub_5E66F0()
{
  LRESULT v0; // eax
  LRESULT v1; // eax
  int v2; // esi
  _DWORD *v3; // edx
  void *v4; // ebx
  void *v5; // eax
  void *v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  const wchar_t *v9; // eax

  v0 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA(hDlg, 1363, 0x199u, v0, 0); /*0x5e672c*/
    v2 = 0; /*0x5e6734*/
    if ( g_MultiplayerOptions > 0 ) /*0x5e6738*/
    {
      v3 = (_DWORD *)g_MultiplayerGameState; /*0x5e673e*/
      while ( v1 != *v3 ) /*0x5e6746*/
      {
        ++v2; /*0x5e6748*/
        ++v3; /*0x5e6749*/
        if ( v2 >= g_MultiplayerOptions ) /*0x5e674e*/
          goto LABEL_20; /*0x5e674e*/
      }
      if ( v2 != -1 && v2 != dword_AC0D30 ) /*0x5e6764*/
      {
        LoadScenarioClassByIndex(v2); /*0x5e676c*/
        if ( IsRandMap::Sed(*(_DWORD *)(g_MultiplayerGameState + 4 * v2)) ) /*0x5e677a*/
        {
          v4 = g_UIControlState; /*0x5e6783*/
          if ( g_UIControlState ) /*0x5e678b*/
          {
            ComPtr::Dtor(g_UIControlState); /*0x5e678f*/
            __3_YAXPAX_Z(v4); /*0x5e6795*/
          }
          v5 = __2_YAPAXI_Z(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = (void *)unknown_libname_27(v5); /*0x5e67ad*/
          else
            v6 = 0; /*0x5e67b4*/
          g_UIControlState = v6; /*0x5e67bd*/
          Surface::LoadToSurfaceSHP((char **)v6, ExistingFileName); /*0x5e67c2*/
          if ( !*(_DWORD *)g_UIControlState ) /*0x5e67cc*/
            Session::PrepareGame(hDlg); /*0x5e67d7*/
          InvalidateRect(hDlg, 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame(hDlg); /*0x5e67fa*/
        }
        dword_AC0D30 = v2; /*0x5e6805*/
        g_GameRulesOptions = dword_AC10E0; /*0x5e680b*/
        LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6811*/
      }
    }
  }
LABEL_20:
  v7 = hDlg; /*0x5e6816*/
  v8 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v9 = (const wchar_t *)SendDlgItemMessageA(v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    word_AC0EC8 = 0; /*0x5e6857*/
  else
    wcscpy(&word_AC0EC8, v9); /*0x5e684d*/
  if ( g_GameMode_Current[0] == 3 ) /*0x5e686b*/
  {
    Event::Dispatch(); /*0x5daf20*/
    NetworkLobby::MessageHandler(); /*0x5daf25*/
    return 0; /*0x5daf2a*/
  }
  else if ( g_GameMode_Current[0] == 4 ) /*0x5e6875*/
  {
    return Game::ProcessIdle(); /*0x5e6877*/
  }
  else
  {
    if ( g_GameMode_Current[0] == 1 || g_GameMode_Current[0] == 2 ) /*0x5e6884*/
    {
      if ( dword_ABF10C ) /*0x5bb268*/
      {
        CellClass::SetOccupancy(dword_ABF10C, 0); /*0x5bb26c*/
        ModemGuest::ProcessPacket(dword_ABF10C, 1); /*0x5bb279*/
      }
    }
    Event::Dispatch(); /*0x5e6886*/
    return 0; /*0x5e688b*/
  }
}



// ==== 0x005DAF30  ObjectClass::PlayerSkirmishSlotHandler_Handle  this=ObjectClass  sig=csp ====
void PlayerSkirmishSlotHandler_Handle(ObjectClass *this)
{
  int v1; // edi
  int i; // esi
  int v3[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v4; // [esp+1CCh] [ebp-4h]
  char v5; // [esp+1CEh] [ebp-2h]

  memset(v3, 0, sizeof(v3)); /*0x5daf47*/
  v4 = 0; /*0x5daf49*/
  v5 = 0; /*0x5daf4b*/
  v3[0] = 22; /*0x5daf56*/
  strcpy((char *)&v3[1], unk_A8B380); /*0x5daf6d*/
  Player::BuildListString((Player *)&v3[11] + 3); /*0x5daf7a*/
  v1 = dword_A8DA84; /*0x5daf7f*/
  for ( i = 1; i < v1; ++i ) /*0x5daf8c*/
  {
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v3, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5dafb0*/
    Event::Dispatch(); /*0x5dafb5*/
  }
}



// ==== 0x005DAFD0  RetVtableStubZero_eax_27  this=-  sig=ida-proto ====
void RetVtableStubZero_eax_27()
{
  GameSetup::DisplayPlayers(); /*0x5dafd2*/
}



// ==== 0x005DAFE0  GameSetup::DisplayPlayers  this=GameSetup  sig=csp ====
void GameSetup::DisplayPlayers(GameSetup *this)
{
  char v1; // cl
  char v2; // bl
  Dialog *Current; // esi
  int CurrentType; // eax
  int v5; // eax
  HWND v6; // ebp
  HWND DlgItem; // eax
  HWND v8; // esi
  unsigned int v9; // eax
  int v10; // ecx
  char *v11; // eax
  signed int i; // edi
  int v13; // edi
  void *PlayerSide; // esi
  wchar_t *StringCSF; // eax
  int v16; // edx
  int v17; // esi
  unsigned int v18; // ebx
  unsigned int j; // eax
  DeleteAndZero *v20; // esi
  DeleteAndZero *v21; // edi
  unsigned int v22; // ecx
  GameSetup **v23; // ebx
  int v24; // esi
  GameSetup **v25; // edi
  int v26; // ebp
  GameSetup *v27; // esi
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  GameSetup *GameSetup_field_0x08; // eax
  int v32; // [esp+10h] [ebp-264h]
  HWND hWnd; // [esp+14h] [ebp-260h]
  LPARAM v34; // [esp+18h] [ebp-25Ch] BYREF
  DeleteAndZero v35; // [esp+1Ch] [ebp-258h] BYREF
  int v36; // [esp+28h] [ebp-24Ch]
  void *Block; // [esp+30h] [ebp-244h] BYREF
  int v38; // [esp+34h] [ebp-240h]
  unsigned int v39; // [esp+38h] [ebp-23Ch]
  int v40; // [esp+3Ch] [ebp-238h]
  int v41; // [esp+40h] [ebp-234h]
  int v42; // [esp+44h] [ebp-230h]
  const wchar_t *(__thiscall *v43)(GameSetup *); // [esp+48h] [ebp-22Ch]
  int v44; // [esp+50h] [ebp-224h]
  int v45; // [esp+54h] [ebp-220h]
  int v46; // [esp+58h] [ebp-21Ch]
  int v47; // [esp+5Ch] [ebp-218h]
  unsigned int v48; // [esp+60h] [ebp-214h]
  WPARAM wParam; // [esp+68h] [ebp-20Ch]
  int Default; // [esp+6Ch] [ebp-208h]
  HWND v51; // [esp+70h] [ebp-204h]
  wchar_t Buffer[128]; // [esp+74h] [ebp-200h] BYREF
  wchar_t lParam[128]; // [esp+174h] [ebp-100h] BYREF

  v2 = v1; /*0x5dafea*/
  Current = (Dialog *)Dialog::GetCurrent(); /*0x5daff1*/
  CurrentType = Dialog::GetCurrentType(); /*0x5daff3*/
  if ( CurrentType == 188 || CurrentType == 189 ) /*0x5db008*/
  {
LABEL_15:
    RefreshLobbyAll((HWND)Current, v2); /*0x5db1a2*/
    return; /*0x5db1b5*/
  }
  for ( Current = (Dialog *)Dialog::FindByPtr(Current); Current; Current = (Dialog *)Dialog::FindByPtr(Current) ) /*0x5db019*/
  {
    v5 = GameSetup::LookupDialogHash((GameSetup *)Current); /*0x5db01d*/
    if ( v5 == 188 || v5 == 189 ) /*0x5db032*/
      goto LABEL_15; /*0x5db032*/
  }
  v6 = (HWND)Dialog::GetCurrent(); /*0x5db045*/
  DlgItem = GetDlgItem(v6, 1342); /*0x5db058*/
  v8 = DlgItem; /*0x5db05a*/
  v51 = DlgItem; /*0x5db05e*/
  if ( v6 && DlgItem ) /*0x5db06a*/
  {
    hWnd = GetDlgItem(v6, 1342); /*0x5db07c*/
    Gadget::InitProperties((Gadget *)&v34); /*0x5db080*/
    wParam = SendDlgItemMessageA(v6, 1342, 0x18Eu, 0, 0); /*0x5db0ab*/
    SendDlgItemMessageA(v6, 1342, 0x49Du, 0, 1); /*0x5db0af*/
    v9 = 128; /*0x5db0b1*/
    v44 = -1717986918; /*0x5db0b6*/
    v45 = 1070176665; /*0x5db0be*/
    v46 = -1717986918; /*0x5db0c6*/
    v47 = 1072273817; /*0x5db0ce*/
    v48 = 128; /*0x5db0d6*/
    v10 = 0; /*0x5db0da*/
    do /*0x5db0df*/
    {
      ++v10; /*0x5db0dc*/
      v9 >>= 1; /*0x5db0dd*/
    }
    while ( v9 ); /*0x5db0df*/
    v41 = 0; /*0x5db0e1*/
    v40 = v10 - 1; /*0x5db0eb*/
    v38 = 0; /*0x5db0f1*/
    LOBYTE(v42) = 0; /*0x5db0f9*/
    v39 = 1 << (v10 - 1); /*0x5db0fe*/
    Block = (void *)__2_YAPAXI_Z(4 * v39); /*0x5db113*/
    memset(Block, 0, 4 * v39); /*0x5db117*/
    v43 = GameSetup::CompareWideString; /*0x5db122*/
    RehashGenericHashMap(v8, (int)&Block); /*0x5db12a*/
    SendDlgItemMessageA(v6, 1342, 0x184u, 0, 0); /*0x5db13e*/
    if ( g_NetworkSetupConfig ) /*0x5db147*/
    {
      v13 = 0; /*0x5db1bb*/
      if ( dword_A8DA84 > 0 ) /*0x5db1bf*/
      {
        do /*0x5db45d*/
        {
          if ( Render_Setup(v13) ) /*0x5db1cf*/
          {
            v32 = 2; /*0x5db1de*/
            *(_DWORD *)(dword_A8DA78[v13] + 119) = 1; /*0x5db1e9*/
          }
          else
          {
            v32 = *(_DWORD *)(dword_A8DA78[v13] + 119) != 0; /*0x5db202*/
          }
          swprintf(lParam, (const size_t)&off_8240B4, (const wchar_t *const)dword_A8DA78[v13]); /*0x5db220*/
          PlayerSide = (void *)SessionClass::GetPlayerSide((int *)dword_A8DA78[v13]); /*0x5db235*/
          Default = BuildingType::FindDefault(PlayerSide); /*0x5db241*/
          switch ( (unsigned int)PlayerSide ) /*0x5db24b*/
          {
            case 0u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 398); /*0x5db263*/
              goto LABEL_32; /*0x5db263*/
            case 1u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 401); /*0x5db276*/
              goto LABEL_32; /*0x5db276*/
            case 2u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 404); /*0x5db289*/
              goto LABEL_32; /*0x5db289*/
            case 3u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 407); /*0x5db29f*/
              goto LABEL_32; /*0x5db29f*/
            case 4u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 410); /*0x5db2b2*/
              goto LABEL_32; /*0x5db2b2*/
            case 5u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 413); /*0x5db2b9*/
              goto LABEL_32; /*0x5db2b9*/
            case 6u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 416); /*0x5db2cc*/
              goto LABEL_32; /*0x5db2cc*/
            case 7u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 419); /*0x5db2ef*/
              goto LABEL_32; /*0x5db2ef*/
            case 8u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 422); /*0x5db312*/
LABEL_32:
              swprintf(Buffer, (const size_t)&off_8240B4, StringCSF); /*0x5db317*/
              break; /*0x5db322*/
            default:
              break;
          }
          SendMessageA(hWnd, 0x4CCu, 0xFFFFFFFF, (LPARAM)lParam); /*0x5db32a*/
          v16 = *(_DWORD *)(dword_A8DA78[v13] + 83); /*0x5db351*/
          v34 = 4; /*0x5db358*/
          v35.DeleteAndZero_field_0x08 = dword_8316A8[v16]; /*0x5db367*/
          WideString::Reassign((void **)&v35.DeleteAndZero_field_0x04, &g_TypeClass_DefaultString); /*0x5db36b*/
          v17 = (unsigned __int16)v13 << 16; /*0x5db384*/
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (unsigned __int16)dword_AC01A0, (LPARAM)&v34); /*0x5db39a*/
          v34 = 2; /*0x5db3a5*/
          WideString::Reassign((void **)&v35.DeleteAndZero_field_0x04, Buffer); /*0x5db3ad*/
          v36 = Default; /*0x5db3d5*/
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (unsigned __int16)dword_AC01D0, (LPARAM)&v34); /*0x5db3d9*/
          WideString::Reassign((void **)&v35.DeleteAndZero_field_0x04, &g_TypeClass_DefaultString); /*0x5db3e4*/
          v34 = 2; /*0x5db3e9*/
          if ( v32 == 2 ) /*0x5db3f8*/
          {
            v36 = HashTable::Find(&g_DialogHashTable, (const char *)&stru_81AF8C.MaxXYVel[1], 0); /*0x5db40b*/
          }
          else if ( v32 ) /*0x5db413*/
          {
            v36 = HashTable::Find(&g_DialogHashTable, (const char *)stru_81AF8C.AnimTypeClass_field_double_320, 0); /*0x5db426*/
          }
          else
          {
            v34 = 0; /*0x5db42c*/
          }
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (unsigned __int16)dword_AC01E0, (LPARAM)&v34); /*0x5db453*/
          ++v13; /*0x5db45a*/
        }
        while ( v13 < dword_A8DA84 ); /*0x5db45d*/
        v8 = v51; /*0x5db463*/
      }
      if ( dword_A8B23C ) /*0x5db46f*/
        (*((void (__thiscall **)(ObjectClass *, HWND))dword_A8B23C->AbstractClass + 30))(dword_A8B23C, v6); /*0x5db474*/
    }
    else
    {
      v11 = CharToWideString(unk_A8B380); /*0x5db14e*/
      SendMessageA(hWnd, 0x4CCu, 0, (LPARAM)v11); /*0x5db160*/
      for ( i = 1; i < dword_A8DA54; ++i ) /*0x5db172*/
        SendMessageA(hWnd, 0x4CCu, i, *(_DWORD *)(dword_A8DA48 + 4 * i)); /*0x5db18d*/
    }
    ProcessComboBoxAddString(v8, (int)&Block); /*0x5db47d*/
    SendDlgItemMessageA(v6, 1342, 0x197u, wParam, 0); /*0x5db494*/
    SendDlgItemMessageA(v6, 1342, 0x49Du, 0, 0); /*0x5db4a5*/
    InvalidateRect(v8, 0, 0); /*0x5db4ac*/
    UpdateWindow(v8); /*0x5db4b3*/
    v18 = 0; /*0x5db4b9*/
    for ( j = v39; v18 < v39; j = v39 ) /*0x5db4c1*/
    {
      v20 = (DeleteAndZero *)*((_DWORD *)Block + v18); /*0x5db4c7*/
      while ( v20 ) /*0x5db4cc*/
      {
        v21 = v20; /*0x5db4ce*/
        v20 = (DeleteAndZero *)v20->DeleteAndZero_field_0x08; /*0x5db4d0*/
        DeleteAndZero::Alt(v21); /*0x5db4d9*/
        __3_YAXPAX_Z(v21); /*0x5db4df*/
      }
      *((_DWORD *)Block + v18++) = 0; /*0x5db4f0*/
    }
    v22 = v48; /*0x5db500*/
    v38 = 0; /*0x5db504*/
    if ( j > v48 ) /*0x5db50e*/
    {
      do /*0x5db5a8*/
      {
        if ( (_BYTE)v42 || j <= v22 ) /*0x5db522*/
          break; /*0x5db522*/
        v23 = (GameSetup **)Block; /*0x5db52c*/
        v24 = j; /*0x5db530*/
        v39 = j >> 1; /*0x5db534*/
        --v40; /*0x5db53d*/
        Block = (void *)__2_YAPAXI_Z(4 * (j >> 1)); /*0x5db551*/
        memset(Block, 0, 4 * v39); /*0x5db557*/
        if ( v24 > 0 ) /*0x5db559*/
        {
          v25 = v23; /*0x5db55b*/
          v26 = v24; /*0x5db55d*/
          do /*0x5db593*/
          {
            v27 = *v25; /*0x5db55f*/
            if ( *v25 ) /*0x5db55f*/
            {
              do /*0x5db58d*/
              {
                v28 = (int)v43(v27); /*0x5db567*/
                v29 = v28 & ((1 << v40) - 1); /*0x5db577*/
                v30 = *((_DWORD *)Block + v29); /*0x5db57d*/
                *((_DWORD *)Block + v29) = v27; /*0x5db580*/
                GameSetup_field_0x08 = (GameSetup *)v27->GameSetup_field_0x08; /*0x5db583*/
                v27->GameSetup_field_0x08 = v30; /*0x5db586*/
                v27 = GameSetup_field_0x08; /*0x5db58b*/
              }
              while ( GameSetup_field_0x08 ); /*0x5db58d*/
            }
            ++v25; /*0x5db58f*/
            --v26; /*0x5db592*/
          }
          while ( v26 ); /*0x5db593*/
        }
        __3_YAXPAX_Z(v23); /*0x5db596*/
        v22 = v48; /*0x5db59b*/
        j = v39; /*0x5db59f*/
      }
      while ( v39 > v48 ); /*0x5db5a8*/
    }
    __3_YAXPAX_Z(Block); /*0x5db5b3*/
    DeleteAndZero::Alt((DeleteAndZero *)&v35.DeleteAndZero_field_0x04); /*0x5db5bf*/
    DeleteAndZero::Alt(&v35); /*0x5db5c8*/
  }
}



// ==== 0x005DB600  ObjectClass::PlayerSkirmishSlotHandler_Handle_5DB600  this=ObjectClass  sig=csp ====
int __thiscall PlayerSkirmishSlotHandler_Handle_5DB600(ObjectClass *this)
{
  memset(&stru_A8D600.__pad_34[4], 0, 0x1C4u); /*0x5db611*/
  MEMORY[0xA8D7FC] = 0; /*0x5db618*/
  MEMORY[0xA8D7FE] = 0; /*0x5db627*/
  *(_DWORD *)&stru_A8D600.__pad_34[4] = 8; /*0x5db62d*/
  *(_DWORD *)&stru_A8D600.__pad_64[3] = 4; /*0x5db637*/
  return Network::SendMessage( /*0x5db646*/
           &unk_A8E9C0.Socket,
           (int)&stru_A8D600.__pad_34[4],
           455,
           1,
           (int)&this->owningHouseIndex,
           0,
           0);
}



// ==== 0x005DB650  Map_Handle  this=-  sig=csp ====
char __fastcall sub_5DB650(int a1, char a2, char a3)
{
  HWND v5; // eax

  v5 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5db65b*/
  return Map_Handle_5EC880(v5, a1, a2, a3); /*0x5db66f*/
}



// ==== 0x005DB680  InitNetworkGameState  this=-  sig=ida-proto ====
char InitNetworkGameState()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !Network_Init(unk_A8E9C0) ) /*0x5db688*/
    return 0; /*0x5db691*/
  if ( dword_A8B238[0] != 4 ) /*0x5db69e*/
  {
    if ( dword_A8D5FC ) /*0x5db6a7*/
    {
      Network::CopyAddress(&stru_A8D600, &v1, (int)v2); /*0x5db6b8*/
      Network_Init_542FC0(&v1); /*0x5db6c7*/
    }
  }
  LoadNetworkShareStrings(); /*0x5db6cc*/
  Game::ResetFlags(); /*0x5db6d1*/
  Network::InitPlayerSlots(); /*0x5db6d6*/
  return 1; /*0x5db693*/
}



// ==== 0x005DB6F0  ObjectClass::WinMainSetup_Setup_5DB6F0  this=ObjectClass  sig=csp ====
int WinMainSetup_Setup_5DB6F0(ObjectClass *this)
{
  int result; // eax

  result = WinMainSetup_Setup_5DB6F0_Setup(); /*0x5db6f1*/
  LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x5db700*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x5db707*/
    result = (***(int (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)(*(_DWORD *)&stru_887598.isAliveFlag, 1); /*0x5db70d*/
  *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x5db70f*/
  return result; /*0x5db715*/
}



// ==== 0x005DB720  ObjectClass::CheckNetworkGameTimeout  this=ObjectClass  sig=csp ====
int CheckNetworkGameTimeout(ObjectClass *this)
{
  int result; // eax
  int v2; // ebp
  signed int i; // edi
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // esi
  int Ticks; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  int v13; // eax
  GameSetup *v14; // [esp+0h] [ebp-1D8h]
  int v15[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v16; // [esp+1D4h] [ebp-4h]
  char v17; // [esp+1D6h] [ebp-2h]

  result = dword_A8DA6C; /*0x5db720*/
  v2 = 1; /*0x5db72c*/
  for ( i = 1; i < dword_A8DA6C; ++i ) /*0x5db737*/
  {
    if ( wcscmp(*(const wchar_t **)(dword_A8DA60 + 4 * i), (const wchar_t *)&stru_A8D600.Network_field_0x10) ) /*0x5db74b*/
    {
      v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5db760*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5db769*/
        v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db77b*/
      if ( (unsigned int)(v4 - *(_DWORD *)(*(_DWORD *)(dword_A8DA60 + 4 * i) + 53)) > 0x12C ) /*0x5db78f*/
      {
        Debug::Log(); /*0x5db797*/
        __3_YAXPAX_Z(*(void **)(dword_A8DA60 + 4 * i)); /*0x5db7a5*/
        v5 = (*(int (__thiscall **)(void *, int))(stru_A8DA5C + 16))(&stru_A8DA5C, dword_A8DA60 + 4 * i); /*0x5db7c1*/
        if ( v5 != -1 ) /*0x5db7c7*/
          Network_Check((ObjectClass *)&stru_A8DA5C, v5); /*0x5db7cf*/
        NetworkLobby::UpdatePlayerList(); /*0x5db7d4*/
        if ( i <= (int)g_NetworkSetupConfig ) /*0x5db7df*/
        {
          GameSetup::DisplayPlayers(v14); /*0x5db7e3*/
          SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db7f0*/
        }
      }
    }
    result = dword_A8DA6C; /*0x5db7f5*/
  }
  if ( dword_A8DA54 > 1 ) /*0x5db809*/
  {
    do /*0x5db99b*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(dword_A8DA48 + 4 * v2) + 52) ) /*0x5db818*/
      {
        v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5db824*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5db82d*/
          v6 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db83f*/
        *(_DWORD *)(*(_DWORD *)(dword_A8DA48 + 4 * v2) + 52) = v6; /*0x5db849*/
      }
      v7 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db84c*/
      v8 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5db852*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5db85b*/
      {
        Ticks = Timer::GetTicks(); /*0x5db862*/
        v7 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db867*/
        v8 += Ticks - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db86f*/
      }
      if ( (unsigned int)(v8 - *(_DWORD *)(*(_DWORD *)(dword_A8DA48 + 4 * v2) + 52)) <= 0x168 ) /*0x5db882*/
      {
        v11 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5db8e5*/
        if ( v7 != -1 ) /*0x5db8ee*/
          v11 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db900*/
        v12 = dword_A8DA48; /*0x5db902*/
        v13 = *(_DWORD *)(dword_A8DA48 + 4 * v2); /*0x5db908*/
        if ( (unsigned int)(v11 - *(_DWORD *)(v13 + 52)) > 0x12C && !*(_BYTE *)(v13 + 56) ) /*0x5db916*/
        {
          memset(v15, 0, sizeof(v15)); /*0x5db92c*/
          v16 = 0; /*0x5db92e*/
          v17 = 0; /*0x5db930*/
          strcpy((char *)&v15[1], unk_A8B380); /*0x5db954*/
          v15[0] = 5; /*0x5db95d*/
          Network::SendMessage(&unk_A8E9C0.Socket, (int)v15, 455, 0, *(_DWORD *)(v12 + 4 * v2) + 40, 0, 0); /*0x5db97d*/
          Event::Dispatch(); /*0x5db982*/
          *(_BYTE *)(*(_DWORD *)(dword_A8DA48 + 4 * v2) + 56) = 1; /*0x5db98f*/
        }
      }
      else
      {
        __3_YAXPAX_Z(*(void **)(dword_A8DA48 + 4 * v2)); /*0x5db887*/
        v10 = (*(int (__thiscall **)(_DWORD *, int))(dword_A8DA44 + 16))(&dword_A8DA44, dword_A8DA48 + 4 * v2); /*0x5db8a4*/
        if ( v10 != -1 && v10 < dword_A8DA54 && v10 < --dword_A8DA54 ) /*0x5db8bf*/
        {
          do /*0x5db8d7*/
          {
            ++v10; /*0x5db8c7*/
            *(_DWORD *)(dword_A8DA48 + 4 * v10 - 4) = *(_DWORD *)(dword_A8DA48 + 4 * v10); /*0x5db8cb*/
          }
          while ( v10 < dword_A8DA54 ); /*0x5db8d7*/
        }
        GameSetup::DisplayPlayers(v14); /*0x5db8db*/
      }
      result = dword_A8DA54; /*0x5db993*/
      ++v2; /*0x5db998*/
    }
    while ( v2 < dword_A8DA54 ); /*0x5db99b*/
  }
  return result; /*0x5db9a1*/
}



// ==== 0x005DB9B0  NetworkLobby::UpdatePlayerList  this=NetworkLobby  sig=ida-proto ====
int NetworkLobby_UpdatePlayerList()
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // ebp
  wchar_t *String; // eax
  int i; // ebx
  HWND v5; // esi
  wchar_t *v6; // [esp-18h] [ebp-BCh]
  int v7; // [esp-14h] [ebp-B8h]
  LRESULT wParam; // [esp+0h] [ebp-A4h]
  wchar_t lParam[80]; // [esp+4h] [ebp-A0h] BYREF

  result = Dialog::GetCurrentType(); /*0x5db9b6*/
  if ( result == 187 ) /*0x5db9c0*/
  {
    Current = Dialog::GetCurrent(); /*0x5db9cf*/
    DlgItem = GetDlgItem(Current, 1353); /*0x5db9e3*/
    if ( (int)g_NetworkSetupConfig >= dword_A8DA6C ) /*0x5db9ec*/
    {
      g_NetworkSetupConfig = dword_A8DA6C - 1; /*0x5db9fa*/
      SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db9ff*/
    }
    if ( (g_NetworkSetupConfig & 0x80000000) != 0 ) /*0x5dba0b*/
      g_NetworkSetupConfig = 0; /*0x5dba0d*/
    wParam = SendDlgItemMessageA(Current, 1353, 0x18Eu, 0, 0); /*0x5dba3d*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 1); /*0x5dba41*/
    SendMessageA(DlgItem, 0x184u, 0, 0); /*0x5dba53*/
    String = GetStringCSF(aTxtLobby, 0, g_Str_File_netdlg2_cpp, 508); /*0x5dba66*/
    SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String); /*0x5dba74*/
    for ( i = 1; i < dword_A8DA6C; ++i ) /*0x5dba82*/
    {
      v7 = *(_DWORD *)(dword_A8DA60 + 4 * i); /*0x5dba8c*/
      if ( *(_BYTE *)(v7 + 52) ) /*0x5dba8d*/
        v6 = GetStringCSF(aTxtThatguysGam, 0, g_Str_File_netdlg2_cpp, 514); /*0x5dbaae*/
      else
        v6 = GetStringCSF(aTxtThatguysGam_0, 0, g_Str_File_netdlg2_cpp, 516); /*0x5dbacc*/
      swprintf(lParam, (const size_t)v6, (const wchar_t *const)v7); /*0x5dbab0*/
      SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)lParam); /*0x5dbae3*/
    }
    SendDlgItemMessageA(Current, 1353, 0x186u, g_NetworkSetupConfig, 0); /*0x5dbb07*/
    SendDlgItemMessageA(Current, 1353, 0x197u, wParam, 0); /*0x5dbb1b*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 0); /*0x5dbb2c*/
    v5 = GetDlgItem(Current, 1353); /*0x5dbb3a*/
    InvalidateRect(v5, 0, 0); /*0x5dbb41*/
    return UpdateWindow(v5); /*0x5dbb48*/
  }
  return result; /*0x5dbb52*/
}



// ==== 0x005DBB60  Game::BuildGameSettingsPacket  this=AbstractClass  sig=csp ====
void __thiscall BuildGameSettingsPacket(char *Buffer)
{
  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  char *v4; // eax
  int v5; // ebx
  int v6; // esi
  int PlayerSideSessionClass; // edi
  int PlayerColorSessionClass; // ebp
  int *v9; // esi
  int v10; // eax
  char *v11; // [esp-20h] [ebp-48h]
  int v12; // [esp-14h] [ebp-3Ch]
  void *v13; // [esp-14h] [ebp-3Ch]
  int v14; // [esp-10h] [ebp-38h]
  int Option2SessionClass; // [esp-10h] [ebp-38h]
  int v16; // [esp-Ch] [ebp-34h]
  void *v17; // [esp+10h] [ebp-18h] BYREF
  void *v18; // [esp+14h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-10h] BYREF
  int OptionSessionClass; // [esp+1Ch] [ebp-Ch] BYREF
  char *v21; // [esp+20h] [ebp-8h]
  int v22; // [esp+24h] [ebp-4h]

  v1 = Buffer; /*0x5dbb6a*/
  v21 = Buffer; /*0x5dbb70*/
  v22 = 0; /*0x5dbb74*/
  if ( &dword_A8B320 == (int *)-2 ) /*0x5dbb7c*/
  {
    v2 = 4; /*0x5dbba5*/
    v3 = String::Assign((char **)&v19, &g_INI_DefaultBuffer); /*0x5dbbaa*/
  }
  else
  {
    WideString::Assign((wchar_t **)&v17, (wchar_t *)&dword_A8B320 + 1); /*0x5dbb83*/
    v2 = 3; /*0x5dbb90*/
    v3 = (char **)Game_Set(&OptionSessionClass, &v17); /*0x5dbb95*/
  }
  String::AssignFromPtr((char **)&v18, (const char **)v3); /*0x5dbbb4*/
  if ( (v2 & 4) != 0 ) /*0x5dbbbc*/
  {
    v2 &= ~4u; /*0x5dbbc2*/
    DeleteAndZero((void **)&v19); /*0x5dbbc5*/
  }
  if ( (v2 & 2) != 0 ) /*0x5dbbcd*/
  {
    v2 &= ~2u; /*0x5dbbd3*/
    DeleteAndZero((void **)&OptionSessionClass); /*0x5dbbd6*/
  }
  if ( (v2 & 1) != 0 ) /*0x5dbbde*/
    DeleteAndZero::Alt(&v17); /*0x5dbbe4*/
  v16 = dword_A8BB04; /*0x5dbc0a*/
  v14 = (unsigned __int8)dword_A8BB08; /*0x5dbc0b*/
  v12 = dword_A8BB0C; /*0x5dbc0c*/
  v4 = String::GetOrEmpty((char **)&v18); /*0x5dbc11*/
  sprintf( /*0x5dbc7e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    dword_A8ED94,
    *(_DWORD *)dword_A8EB60,
    MEMORY[0xA8B268],
    MEMORY[0xA8B25C],
    MEMORY[0xA8B270],
    (unsigned __int8)MEMORY[0xA8B262],
    (unsigned __int8)MEMORY[0xA8B263],
    (unsigned __int8)MEMORY[0xA8B264],
    (unsigned __int8)dword_A8B320,
    (unsigned __int8)MEMORY[0xA8B261],
    *(_DWORD *)stru_A8B250,
    dword_A8EB68,
    v4,
    v12,
    v14,
    v16,
    &byte_A8B8E0,
    &byte_A8BAE2);
  memset(byte_ABFF94, 0, 0x200u); /*0x5dbc92*/
  v5 = 0; /*0x5dbc99*/
  v19 = dword_A8DA84; /*0x5dbc9d*/
  if ( dword_A8DA84 > 0 ) /*0x5dbca1*/
  {
    do /*0x5dbd16*/
    {
      v6 = *(_DWORD *)(dword_A8DA78 + 4 * v5); /*0x5dbca8*/
      PlayerSideSessionClass = SessionClass::GetPlayerSide(v6); /*0x5dbcb4*/
      PlayerColorSessionClass = SessionClass::GetPlayerColor(v6); /*0x5dbcbd*/
      OptionSessionClass = SessionClass::GetOption(v6); /*0x5dbcc6*/
      Option2SessionClass = SessionClass::GetOption2(v6); /*0x5dbce2*/
      v13 = (void *)OptionSessionClass; /*0x5dbce3*/
      v11 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v5)); /*0x5dbcf3*/
      sprintf( /*0x5dbd07*/
        &byte_ABFF94[strlen(byte_ABFF94)],
        "%s,%d,%d,%d,%d,%x,%x,%x,",
        v11,
        PlayerSideSessionClass,
        PlayerColorSessionClass,
        v13,
        Option2SessionClass,
        0,
        0,
        0);
      ++v5; /*0x5dbd13*/
    }
    while ( v5 < v19 ); /*0x5dbd16*/
    v1 = v21; /*0x5dbd18*/
  }
  byte_ABFF92[strlen(byte_ABFF94) + 1] = 58; /*0x5dbd2f*/
  strcat(byte_ABFF94, asc_831340); /*0x5dbd53*/
  v9 = MEMORY[0xA8B29C]; /*0x5dbd5c*/
  do /*0x5dbda8*/
  {
    v10 = *v9; /*0x5dbd61*/
    if ( *v9 == -3 ) /*0x5dbd66*/
      v10 = -1; /*0x5dbd68*/
    sprintf(&byte_ABFF94[strlen(byte_ABFF94)], "%d,%d,%d,%d,%d,", *(v9 - 8), v10, v9[8], v9[16], v9[24]); /*0x5dbd97*/
    ++v9; /*0x5dbd9c*/
  }
  while ( (int)v9 < (int)MEMORY[0xA8B2BC] ); /*0x5dbda8*/
  strlen(byte_ABFF94); /*0x5dbdaf*/
  Debug::Log(); /*0x5dbdbf*/
  Debug::Log(); /*0x5dbdce*/
  strcat(v1, byte_ABFF94); /*0x5dbdf7*/
  DeleteAndZero(&v18); /*0x5dbe04*/
}



// ==== 0x005DBE20  SetGameSetupPlayerState  this=char*  sig=csp ====
void __fastcall SetGameSetupPlayerState(char *a1, int a2, GameSetup *this)
{
  char *v3; // edi
  int v4; // ebx
  HWND v5; // eax
  char *v6; // eax
  int v7; // esi
  char *v8; // eax
  GameSetup *v9; // [esp+0h] [ebp-Ch]

  v3 = a1; /*0x5dbe23*/
  v4 = a2; /*0x5dbe27*/
  if ( !a1 ) /*0x5dbe29*/
  {
    v3 = unk_A8B380; /*0x5dbe2d*/
    if ( !a2 ) /*0x5dbe32*/
    {
      v5 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5dbe39*/
      EnablePlayerSlotControls(v5, 1u); /*0x5dbe42*/
    }
  }
  v6 = CharToWideString(v3); /*0x5dbe4e*/
  if ( !wcscmp((const wchar_t *)v6, (const wchar_t *)&stru_A8D600.Network_field_0x10) ) /*0x5dbe54*/
    v4 = 1; /*0x5dbe60*/
  v7 = 0; /*0x5dbe6a*/
  if ( dword_A8DA84 > 0 ) /*0x5dbe6e*/
  {
    while ( 1 ) /*0x5dbe79*/
    {
      v8 = ToWideStringChar((char *)dword_A8DA78[v7]); /*0x5dbe79*/
      if ( !_strcmpi(v8, v3) ) /*0x5dbe7f*/
        break; /*0x5dbe7f*/
      if ( ++v7 >= dword_A8DA84 ) /*0x5dbe93*/
      {
        GameSetup::DisplayPlayers(v9); /*0x5dbe97*/
        return; /*0x5dbe9f*/
      }
    }
    if ( v7 != -1 ) /*0x5dbea3*/
      *(_DWORD *)(dword_A8DA78[v7] + 119) = v4; /*0x5dbeae*/
  }
  GameSetup::DisplayPlayers(this); /*0x5dbeb6*/
}



// ==== 0x005DBEC0  ObjectClass::SendMultiplayerStartSignal_Start  this=ObjectClass  sig=csp ====
int __thiscall sub_5DBEC0(char *this)
{
  char *v1; // ebx
  char *v2; // eax
  int v4; // edi
  int v5; // esi
  char *v6; // eax

  v1 = this; /*0x5dbec1*/
  if ( !this ) /*0x5dbec7*/
    v1 = unk_A8B380; /*0x5dbec9*/
  v2 = CharToWideString(v1); /*0x5dbed5*/
  if ( !wcscmp((const wchar_t *)v2, word_A8D610) ) /*0x5dbedb*/
    return 1; /*0x5dbee9*/
  v4 = -1; /*0x5dbef5*/
  v5 = 0; /*0x5dbef8*/
  if ( dword_A8DA84 <= 0 ) /*0x5dbefc*/
    return -1; /*0x5dbefc*/
  do /*0x5dbf23*/
  {
    v6 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v5)); /*0x5dbf07*/
    if ( !_strcmpi(v6, v1) ) /*0x5dbf0d*/
      v4 = v5; /*0x5dbf19*/
    ++v5; /*0x5dbf20*/
  }
  while ( v5 < dword_A8DA84 ); /*0x5dbf23*/
  if ( v4 == -1 ) /*0x5dbf28*/
    return -1; /*0x5dbf3c*/
  else
    return *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * v4) + 119); /*0x5dbf36*/
}



// ==== 0x005DBF50  UpdateMultiplayerPlayerOptions  this=-  sig=csp ====
int __fastcall UpdateMultiplayerPlayerOptions(char *a1, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // edi
  int v7; // ebx
  char **v8; // esi
  char *v9; // eax
  HWND v11; // esi
  int *v12; // ebx
  int ResourceID2CSF; // ebx
  bool v14; // al
  int ResourceID3CSF; // eax
  int ResourceID4CSF; // eax
  int v17; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  HWND v23; // eax
  int v24; // ebx
  GameSetup *v25; // [esp+0h] [ebp-1Ch]
  int v26; // [esp+10h] [ebp-Ch]
  int *v28; // [esp+18h] [ebp-4h]

  v5 = -1; /*0x5dbf57*/
  v7 = 0; /*0x5dbf60*/
  v8 = (char **)dword_A8DA90; /*0x5dbf62*/
  while ( 1 ) /*0x5dbf69*/
  {
    v9 = ToWideStringChar(*v8); /*0x5dbf69*/
    if ( !_strcmpi(v9, a1) ) /*0x5dbf70*/
      break; /*0x5dbf70*/
    ++v8; /*0x5dbf7c*/
    ++v7; /*0x5dbf7f*/
    if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x5dbf86*/
      goto LABEL_6; /*0x5dbf86*/
  }
  v5 = v7; /*0x5dbf8a*/
LABEL_6:
  v26 = 0; /*0x5dbf8c*/
  if ( v5 == -1 ) /*0x5dbf97*/
    return 0; /*0x5dbf9c*/
  v11 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5dbfaf*/
  if ( !v11 ) /*0x5dbfb3*/
    v11 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5dbfbf*/
  v12 = (int *)dword_A8DA90[v5]; /*0x5dbfc1*/
  v28 = v12; /*0x5dbfca*/
  if ( SessionClass::GetPlayerSide(v12) != a2 ) /*0x5dbfd9*/
  {
    v26 = 1; /*0x5dbfde*/
    SessionClass::SetPlayerOption(v12, a2); /*0x5dbfe6*/
  }
  if ( SessionClass::GetOption((int *)dword_A8DA90[v5]) != a4 ) /*0x5dbffd*/
  {
    v26 = 1; /*0x5dc002*/
    SessionClass::SetOption(v12, a4); /*0x5dc00a*/
  }
  if ( SessionClass::GetOption2((SessionClass *)dword_A8DA90[v5]) != a5 ) /*0x5dc021*/
  {
    v26 = 1; /*0x5dc026*/
    SessionClass::SetOption2(v12, a5); /*0x5dc02e*/
  }
  ResourceID2CSF = GetResourceID2CSF((ObjectClass *)v5); /*0x5dc03a*/
  v14 = GetComboBoxSelected(v11, ResourceID2CSF, -1) == -3; /*0x5dc04a*/
  if ( a2 == -3 ) /*0x5dc050*/
  {
    if ( !v14 ) /*0x5dc054*/
    {
      SetupComboBoxObserver(v11, ResourceID2CSF); /*0x5dc05e*/
      ResourceID3CSF = GetResourceID3CSF((ObjectClass *)v5); /*0x5dc065*/
      SetupComboBoxRandomAlliance(v11, ResourceID3CSF); /*0x5dc06e*/
      ResourceID4CSF = GetResourceID4CSF((ObjectClass *)v5); /*0x5dc075*/
      InitComboBoxNone(v11, ResourceID4CSF); /*0x5dc07e*/
      v17 = PlayerSlot::IndexToDlgID((PlayerSlot *)v5); /*0x5dc085*/
      DlgItem = GetDlgItem(v11, v17); /*0x5dc095*/
      SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5dc09c*/
      ResourceIDCSF = GetResourceIDCSF((ObjectClass *)v5); /*0x5dc0a9*/
      FillListBox(v11, ResourceIDCSF); /*0x5dc0af*/
      SetupSkirmishSpawnLocations(v11, ResourceIDCSF, 8); /*0x5dc0b6*/
    }
  }
  else if ( v14 ) /*0x5dc0ba*/
  {
    FillComboBoxRandomOnly(v11, ResourceID2CSF); /*0x5dc0c0*/
    v20 = GetResourceID3CSF((ObjectClass *)v5); /*0x5dc0c7*/
    FillComboBoxAllianceSlots(v11, v20); /*0x5dc0d0*/
    v21 = GetResourceID4CSF((ObjectClass *)v5); /*0x5dc0d7*/
    FillLobbyPlayerSlot(v11, v21); /*0x5dc0e0*/
    v22 = PlayerSlot::IndexToDlgID((PlayerSlot *)v5); /*0x5dc0e7*/
    v23 = GetDlgItem(v11, v22); /*0x5dc0f7*/
    SendMessageA(v23, 0x4F1u, 0, 0); /*0x5dc0fe*/
    v24 = GetResourceIDCSF((ObjectClass *)v5); /*0x5dc10b*/
    FillComboBoxFactions(v11, v24); /*0x5dc111*/
    SetupSkirmishSpawnLocations(v11, v24, -2); /*0x5dc11c*/
  }
  if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v5]) != a3 ) /*0x5dc133*/
    SessionClass::SetPlayerColor(v28, a3); /*0x5dc13a*/
  if ( dword_A8DA90[v5] == *dword_A8DA78 ) /*0x5dc14e*/
    dword_A8B394 = a3; /*0x5dc150*/
  GameSetup::DisplayPlayers(v25); /*0x5dc158*/
  return v26; /*0x5dbf99*/
}



// ==== 0x005DC170  NetworkLobby::ValidateSerialNumber  this=NetworkLobby  sig=csp ====
char __thiscall sub_5DC170(char *this)
{
  int v2; // esi
  FILE *v3; // eax
  FILE *v4; // ebp
  int i; // ecx
  HKEY phkResult; // [esp+10h] [ebp-18Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-188h] BYREF
  DWORD Type; // [esp+18h] [ebp-184h] BYREF
  BYTE Data[128]; // [esp+1Ch] [ebp-180h] BYREF
  CHAR SubKey[256]; // [esp+9Ch] [ebp-100h] BYREF

  strcpy((char *)Data, "0000000000000000000000"); /*0x5dc17c*/
  strcpy(this, (const char *)Data); /*0x5dc1b7*/
  memset(Data, 0, sizeof(Data)); /*0x5dc1c9*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x5dc1d2*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x5dc1da*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x5dc20b*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x5dc226*/
      {
        cbData = 128; /*0x5dc24b*/
        RegQueryValueExA(phkResult, aSerial, 0, &Type, Data, &cbData); /*0x5dc253*/
        RegCloseKey(phkResult); /*0x5dc25e*/
      }
    }
  }
  Data[22] = 0; /*0x5dc26d*/
  strcpy(this, (const char *)Data); /*0x5dc28b*/
  v2 = 0; /*0x5dc294*/
  v3 = fopen(aWoldataKey, aR); /*0x5dc296*/
  v4 = v3; /*0x5dc29b*/
  if ( !v3 ) /*0x5dc2a2*/
    return 0; /*0x5dc2a7*/
  for ( i = fgetc(v3); i != -1; i = fgetc(v4) ) /*0x5dc2bf*/
  {
    Data[v2] = (((char)Data[v2] - 48) % 10 - i + 1000) % 10 + 48; /*0x5dc2eb*/
    if ( ++v2 == strlen((const char *)Data) ) /*0x5dc2f7*/
      v2 = 0; /*0x5dc2f9*/
  }
  fclose(v4); /*0x5dc30c*/
  strcpy(this, (const char *)Data); /*0x5dc32e*/
  return 1; /*0x5dc2a4*/
}



// ==== 0x005DC350  NetworkLobby::CreateGame  this=NetworkLobby  sig=csp ====
char NetworkLobby::CreateGame(NetworkLobby *this)
{
  Dialog *DialogIndirect; // esi
  void (__stdcall *v2)(const MSG *); // edi
  void (__stdcall *v3)(const MSG *); // ebx
  int v4; // eax
  TechnoTypeClass *v5; // ecx
  int v6; // esi
  int v7; // eax
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v10; // esi
  HWND DlgItem; // eax
  HWND v12; // eax
  Dialog *v13; // esi
  int m; // esi
  int v15; // esi
  int v16; // eax
  int n; // esi
  int v18; // esi
  int v19; // eax
  Dialog *v20; // esi
  HWND v21; // eax
  HWND v22; // esi
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // esi
  HWND v26; // eax
  char v27; // bl
  wchar_t *v28; // eax
  int v29; // esi
  char *v30; // eax
  char *v31; // eax
  int v32; // eax
  int v33; // ebp
  wchar_t *v34; // eax
  HWND v35; // eax
  HWND v36; // esi
  HWND v37; // eax
  char *v38; // eax
  int PlayerOption; // eax
  int PlayerColor; // eax
  int v41; // eax
  int v42; // eax
  int v43; // esi
  char *v44; // eax
  int v45... [37726 chars total]



// ==== 0x005DD8A0  ObjectClass::SynchronizeMultiplayerGameStart  this=ObjectClass  sig=csp ====
char __usercall SynchronizeMultiplayerGameStart@<al>(ObjectClass *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  int LobbyStatus; // eax
  int v5; // ecx
  int *v7; // eax
  int i; // esi
  wchar_t *StringCSF; // [esp-18h] [ebp-1F4h]
  char v10[16]; // [esp+4h] [ebp-1D8h] BYREF
  int v11[113]; // [esp+14h] [ebp-1C8h] BYREF
  __int16 v12; // [esp+1D8h] [ebp-4h]
  char v13; // [esp+1DAh] [ebp-2h]

  if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) <= 0x1E ) /*0x5dd8b6*/
    v2 = 30; /*0x5dd8c7*/
  else
    v2 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x5dd8c2*/
  v3 = Network::SetConnectionParams(&unk_A8E9C0, v2, -1, 1000, 1); /*0x5dd8dd*/
  LOBYTE(v3) = dword_A8BB08; /*0x5dd8e2*/
  if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v3, 1) == 1 ) /*0x5dd906*/
  {
    Debug::Log(); /*0x5dd911*/
    memset(v11, 0, sizeof(v11)); /*0x5dd924*/
    v12 = 0; /*0x5dd92a*/
    v13 = 0; /*0x5dd942*/
    v11[0] = 19; /*0x5dd943*/
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v11, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x5dd94b*/
    while ( Network::GetQueueCount(&unk_A8E9C0) > 0 ) /*0x5dd95c*/
    {
      if ( !Network::ReceiveLoop(&unk_A8E9C0) ) /*0x5dd963*/
        break; /*0x5dd96a*/
      Event::Dispatch(); /*0x5dd96c*/
    }
    goto LABEL_8; /*0x5dd97d*/
  }
  Debug::Log(); /*0x5dda12*/
  if ( !dword_A8BB08 || (unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) ) /*0x5dda28*/
  {
    SynchronizeMultiplayerGameStart_Start(); /*0x5dda31*/
    if ( RequestNetworkFile(byte_A8B8E0, 3, 1) ) /*0x5dda42*/
    {
      if ( !(unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) || RequestNetworkFile(v10, 3, 1) ) /*0x5dda68*/
      {
LABEL_8:
        strcpy((char *)&dword_A8B230[130].abstractFlags, byte_A8B8E0); /*0x5dd97f*/
        LobbyStatus = Network::GetLobbyStatus((Network *)&unk_A8E9C0); /*0x5dd9b1*/
        if ( LobbyStatus < 20 ) /*0x5dd9b9*/
        {
          Debug::Log(); /*0x5dd9c1*/
          LobbyStatus = 20; /*0x5dd9c9*/
        }
        v5 = 8 * LobbyStatus; /*0x5dd9ce*/
        if ( 8 * LobbyStatus < 120 ) /*0x5dd9d8*/
          v5 = 120; /*0x5dd9da*/
        Network::SetConnectionParams(&unk_A8E9C0, LobbyStatus, -1, v5, 1); /*0x5dd9ea*/
        TacticalClass::SetCameraPosition(&unk_A8E9C0, 60, -1, 600); /*0x5dd9fd*/
        return 1; /*0x5dda0c*/
      }
    }
  }
  *(_DWORD *)&stru_A8B250.__pad_0[4] = -1; /*0x5dda8c*/
  StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_netdlg2_cpp, 710); /*0x5ddaaa*/
  v7 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[2], 0, g_Str_File_netdlg2_cpp, 710); /*0x5ddab5*/
  Dialog::ShowMessageBox(v7, StringCSF, 0, 0, 0, v1); /*0x5ddabf*/
  memset(v11, 0, sizeof(v11)); /*0x5ddad3*/
  v12 = 0; /*0x5ddad5*/
  v13 = 0; /*0x5ddad7*/
  v11[0] = 10; /*0x5ddae2*/
  strcpy((char *)&v11[1], unk_A8B380); /*0x5ddaf9*/
  for ( i = 1; i < dword_A8DA54; ++i ) /*0x5ddb0e*/
  {
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v11, 455, 1, *(_DWORD *)(dword_A8DA48 + 4 * i) + 40, 0, 0); /*0x5ddb32*/
    Event::Dispatch(); /*0x5ddb37*/
  }
  Network::SendMessage(&unk_A8E9C0.Socket, (int)v11, 455, 0, 0, 0, 0); /*0x5ddb5d*/
  if ( dword_A8D5FC ) /*0x5ddb69*/
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v11, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5ddb85*/
  while ( Network::GetQueueCount(&unk_A8E9C0) > 0 ) /*0x5ddb96*/
  {
    if ( !Network::ReceiveLoop(&unk_A8E9C0) ) /*0x5ddb9d*/
      break; /*0x5ddba4*/
    Event::Dispatch(); /*0x5ddba6*/
  }
  return 0; /*0x5dda06*/
}



// ==== 0x005DDBD0  NetworkSettings::DlgProc  this=NetworkSettings  sig=csp ====
int __stdcall NetworkSettings::DlgProc(HWND hWnd, UINT a2, DeleteAndZero a3)
{
  int result; // eax
  unsigned int v4; // ebx
  int v5; // esi
  WPARAM v6; // edi
  LRESULT v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  char *v10; // eax
  __int16 v11; // cx
  HWND v12; // eax
  HWND v13; // eax
  int v14; // esi
  HWND v15; // eax
  unsigned int DeleteAndZero_field_0x04_high; // edi
  int DeleteAndZero_field_0x04_low; // esi
  wchar_t *StringCSF; // ebx
  HWND v20; // eax
  char *v21; // eax
  char *v22; // edi
  HWND DlgItem; // eax
  int v24; // eax
  int v25; // edi
  char *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  HWND v31; // eax
  POINT v32; // [esp-Ch] [ebp-54h]
  GameSetup *v33; // [esp+0h] [ebp-48h]
  struct tagRECT Rect; // [esp+10h] [ebp-38h] BYREF
  char lParam[40]; // [esp+20h] [ebp-28h] BYREF
  HWND hWnda; // [esp+4Ch] [ebp+4h]

  if ( a2 > 0x200 ) /*0x5ddbe0*/
  {
    switch ( a2 ) /*0x5de05c*/
    {
      case 0x497u: /*0x5de05c*/
        g_NetworkSetupConfig = 0; /*0x5de0a7*/
        byte_831274 = 1; /*0x5de0ad*/
        Dialog::RefreshDialogsGame((Dialog *)hWnd); /*0x5de0b4*/
        SendDlgItemMessageA(hWnd, 1345, 0xC5u, 0x10u, 0); /*0x5de0cd*/
        SendDlgItemMessageA(hWnd, 1345, 0x4EBu, 0, (LPARAM)asc_8304FC); /*0x5de0e0*/
        SendDlgItemMessageA(hWnd, 1345, 0x4D1u, 1u, 0); /*0x5de0f0*/
        v22 = CharToWideString(unk_A8B380); /*0x5de108*/
        DlgItem = GetDlgItem(hWnd, 1345); /*0x5de10a*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v22); /*0x5de114*/
        MEMORY[0xA8B322][0] = 0; /*0x5de12a*/
        dword_A8B394 = dword_A8B3B4; /*0x5de131*/
        dword_A8B398 = dword_A8B3B8; /*0x5de137*/
        PtrVector::Destroy(&stru_A8DA5C); /*0x5de13c*/
        PtrVector::Destroy(&stru_A8DA74); /*0x5de146*/
        PtrVector::Destroy((PtrVector *)&dword_A8DA44); /*0x5de150*/
        v24 = __2_YAPAXI_Z(0x85u); /*0x5de15a*/
        v25 = v24; /*0x5de15f*/
        if ( v24 ) /*0x5de166*/
          Waypoint::InitInvalid((Waypoint *)(v24 + 40)); /*0x5de16b*/
        else
          v25 = 0; /*0x5de172*/
        v26 = CharToWideString(unk_A8B380); /*0x5de179*/
        wcscpy((wchar_t *)v25, (const wchar_t *)v26); /*0x5de180*/
        *(_DWORD *)(v25 + 52) = 0; /*0x5de185*/
        *(_BYTE *)(v25 + 56) = 0; /*0x5de188*/
        *(_DWORD *)(v25 + 57) = *(_DWORD *)&stru_A8D600.__pad_64[7]; /*0x5de195*/
        if ( dword_A8DA54 < dword_A8DA4C /*0x5de1cc*/
          || (byte_A8DA51 || !dword_A8DA4C)
          && dword_A8DA58 > 0
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DA44 + 8))(
               &dword_A8DA44,
               dword_A8DA4C + dword_A8DA58,
               0) )
        {
          v27 = dword_A8DA54++; /*0x5de1d9*/
          *(_DWORD *)(dword_A8DA48 + 4 * v27) = v25; /*0x5de1e8*/
        }
        v28 = __2_YAPAXI_Z(0x85u); /*0x5de1f0*/
        v29 = v28; /*0x5de1f5*/
        if ( v28 ) /*0x5de1fc*/
          Waypoint::InitInvalid((Waypoint *)(v28 + 40)); /*0x5de201*/
        else
          v29 = 0; /*0x5de208*/
        wcscpy((wchar_t *)v29, &g_TypeClass_DefaultString); /*0x5de210*/
        *(_BYTE *)(v29 + 52) = 0; /*0x5de215*/
        *(_DWORD *)(v29 + 53) = 0; /*0x5de219*/
        if ( dword_A8DA6C < dword_A8DA64 /*0x5de255*/
          || (byte_A8DA69 || !dword_A8DA64)
          && dword_A8DA70 > 0
          && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA5C + 8))(
               &stru_A8DA5C,
               dword_A8DA64 + dword_A8DA70,
               0) )
        {
          v30 = dword_A8DA6C++; /*0x5de262*/
          *(_DWORD *)(dword_A8DA60 + 4 * v30) = v29; /*0x5de271*/
        }
        SendNetworkHeartbeat(1, 0, 1, 1); /*0x5de27f*/
        NetworkLobby::UpdatePlayerList(); /*0x5de284*/
        GameSetup::DisplayPlayers(v33); /*0x5de28b*/
        Dialog::DrawBackground((Dialog *)hWnd); /*0x5de292*/
        v31 = GetDlgItem(hWnd, 1344); /*0x5de29d*/
        SetFocus(v31); /*0x5de2a0*/
        break;
      case 0x4DBu: /*0x5de05c*/
        NavigateDialogTab((HWND)a3.DeleteAndZero_field_0x04, *(_DWORD *)a3.__pad_0 != 0); /*0x5de08e*/
        return 0; /*0x5de09c*/
      case 0x4ECu: /*0x5de05c*/
        Dialog::EnumAndCleanup((Dialog *)hWnd); /*0x5de070*/
        return 0; /*0x5de07e*/
    }
    return 0; /*0x5de066*/
  }
  if ( a2 == 512 ) /*0x5ddbe6*/
  {
    hWnda = GetDlgItem(hWnd, 1685); /*0x5ddfcf*/
    if ( !hWnda ) /*0x5ddfd3*/
      return 0; /*0x5ddfd3*/
    DeleteAndZero_field_0x04_high = HIWORD(a3.DeleteAndZero_field_0x04); /*0x5ddfe2*/
    DeleteAndZero_field_0x04_low = LOWORD(a3.DeleteAndZero_field_0x04); /*0x5ddfea*/
    GetWindowRect(hWnd, &Rect); /*0x5ddff0*/
    StringCSF = &g_TypeClass_DefaultString; /*0x5de004*/
    v32.y = DeleteAndZero_field_0x04_high - Rect.top; /*0x5de009*/
    v32.x = DeleteAndZero_field_0x04_low - Rect.left; /*0x5de00a*/
    v20 = ChildWindowFromPointEx(hWnd, v32, 1u); /*0x5de00c*/
    if ( v20 ) /*0x5de014*/
    {
      v21 = DlgSkirmishMenuProc(hWnd, v20); /*0x5de01a*/
      if ( v21 ) /*0x5de021*/
        StringCSF = GetStringCSF((wchar_t *)v21, 0, g_Str_File_netdlg2_cpp, 2439); /*0x5de036*/
    }
    SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5de045*/
    return 0; /*0x5de04e*/
  }
  else
  {
    if ( a2 <= 0x2B ) /*0x5ddbef*/
    {
      switch ( a2 ) /*0x5ddbf1*/
      {
        case 0x2Bu: /*0x5ddbf1*/
          Dialog::Resize((char *)a3.DeleteAndZero_field_0x04); /*0x5ddc3b*/
          return 1; /*0x5ddc4c*/
        case 0xFu: /*0x5ddbf1*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x5ddc16*/
          Dialog::StopBink((Dialog *)hWnd); /*0x5ddc1d*/
          ValidateRect(hWnd, 0); /*0x5ddc25*/
          return 0; /*0x5ddc34*/
        case 0x14u: /*0x5ddbf1*/
          return 1; /*0x5ddc0d*/
      }
      return 0; /*0x5ddbfb*/
    }
    if ( a2 != 273 ) /*0x5ddc54*/
      return 0; /*0x5ddc54*/
    v4 = *(_DWORD *)a3.__pad_0; /*0x5ddc5a*/
    v5 = *(unsigned __int16 *)a3.__pad_0; /*0x5ddc60*/
    if ( *(unsigned __int16 *)a3.__pad_0 <= 0x5C0u ) /*0x5ddc6c*/
    {
      switch ( *(unsigned __int16 *)a3.__pad_0 ) /*0x5ddc72*/
      {
        case 0x5C0u: /*0x5ddc72*/
          g_NetworkOptionsState = 1472; /*0x5ddedb*/
          Config::SaveObserverMode(); /*0x5ddee5*/
          return 0; /*0x5ddef3*/
        case 0x540u: /*0x5ddc72*/
          ReadChatMessage((wchar_t **)&a3, (HWND)a3.DeleteAndZero_field_0x04); /*0x5dde9c*/
          DeleteAndZero::Alt(&a3); /*0x5ddea5*/
          if ( HIWORD(v4) == 1281 ) /*0x5ddeb3*/
          {
            SendNetworkLobbyChatMessage(hWnd, (int)Math::InitDegToRad, 61680); /*0x5ddeca*/
            return 0; /*0x5dded8*/
          }
          return 0; /*0x5ddeb3*/
        case 0x541u: /*0x5ddc72*/
          if ( IsWindowEnabled(hWnd) && !g_NetworkOptionsState ) /*0x5ddd90*/
          {
            *(_WORD *)lParam = 0; /*0x5ddda2*/
            v9 = GetDlgItem(hWnd, 1345); /*0x5ddda7*/
            SendMessageA(v9, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5dddbc*/
            v10 = lParam; /*0x5dddbe*/
            if ( *(_WORD *)lParam ) /*0x5dddca*/
            {
              v11 = *(_WORD *)lParam; /*0x5dddcc*/
              do /*0x5ddde0*/
              {
                if ( v11 != 32 ) /*0x5dddd4*/
                  break; /*0x5dddd4*/
                v11 = *((_WORD *)v10 + 1); /*0x5dddd6*/
                v10 += 2; /*0x5dddda*/
              }
              while ( v11 ); /*0x5ddde0*/
            }
            if ( !*(_WORD *)v10 && *(_WORD *)lParam ) /*0x5dddea*/
            {
              *(_WORD *)lParam = 0; /*0x5dddf2*/
              v12 = GetDlgItem(hWnd, 1345); /*0x5dddf7*/
              SendMessageA(v12, 0x4B2u, 0, (LPARAM)lParam); /*0x5dde05*/
            }
            if ( strcmp(ToWideStringChar(lParam), unk_A8B380) ) /*0x5dde1d*/
            {
              strcpy(unk_A8B380, ToWideStringChar(lParam)); /*0x5dde71*/
              SendNetworkHeartbeat(0, 0, 1, 0); /*0x5dde7c*/
              GameSetup::DisplayPlayers(v33); /*0x5dde83*/
              return 0; /*0x5dde91*/
            }
          }
          return 0; /*0x5dde44*/
      }
      if ( *(unsigned __int16 *)a3.__pad_0 == 1353 && g_NetworkSettingsState <= 0 ) /*0x5ddc9b*/
      {
        v6 = g_NetworkSetupConfig; /*0x5ddca5*/
        v7 = SendDlgItemMessageA(hWnd, 1353, 0x188u, 0, 0); /*0x5ddcba*/
        if ( v7 >= 0 && byte_831274 ) /*0x5ddccc*/
        {
          g_NetworkSetupConfig = v7; /*0x5ddcd4*/
          wcscpy((wchar_t *)&stru_A8D600.Network_field_0x10, *(const wchar_t **)(dword_A8DA60 + 4 * v7)); /*0x5ddce2*/
        }
        if ( HIWORD(v4) == 1 ) /*0x5ddcf3*/
        {
          PtrVector::Destroy(&stru_A8DA74); /*0x5ddcfa*/
          if ( v6 != g_NetworkSetupConfig ) /*0x5ddd05*/
            SendNetworkHeartbeat(1, 1, 1, 0); /*0x5ddd12*/
          GameSetup::DisplayPlayers(v33); /*0x5ddd19*/
          return 0; /*0x5ddd27*/
        }
        if ( HIWORD(v4) == 2 ) /*0x5ddd2e*/
        {
          EnableWindow(hWnd, 0); /*0x5ddd3d*/
          v8 = GetDlgItem(hWnd, 1345); /*0x5ddd45*/
          if ( v8 ) /*0x5ddd4d*/
            EnableWindow(v8, 0); /*0x5ddd52*/
          g_NetworkOptionsState = 1742 - (g_MenuStateFlags != 1); /*0x5ddd67*/
          return 0; /*0x5ddd71*/
        }
      }
      return 0; /*0x5de2a9*/
    }
    switch ( *(_WORD *)a3.__pad_0 ) /*0x5ddf0f*/
    {
      case 0x6CC: /*0x5ddf0f*/
        g_NetworkOptionsState = *(unsigned __int16 *)a3.__pad_0; /*0x5ddf1b*/
        byte_AC0269 = g_MenuStateFlags == 1; /*0x5ddf29*/
        result = 0; /*0x5ddf2f*/
        break; /*0x5ddf35*/
      case 0x6CD: /*0x5ddf0f*/
      case 0x6CE: /*0x5ddf0f*/
        EnableWindow(hWnd, 0); /*0x5ddf45*/
        v13 = GetDlgItem(hWnd, 1345); /*0x5ddf4d*/
        if ( v13 ) /*0x5ddf55*/
          EnableWindow(v13, 0); /*0x5ddf5a*/
        g_NetworkOptionsState = v5; /*0x5ddf5c*/
        result = 0; /*0x5ddf65*/
        break; /*0x5ddf6b*/
      case 0x75F: /*0x5ddf0f*/
      case 0x760: /*0x5ddf0f*/
        v14 = 0; /*0x5ddf78*/
        v15 = GetDlgItem(hWnd, 1888); /*0x5ddf7a*/
        if ( v15 ) /*0x5ddf82*/
          v14 = SendMessageA(v15, 0xF0u, 0, 0); /*0x5ddf92*/
        if ( (_WORD)v4 == 1887 ) /*0x5ddf99*/
          v14 = v14 == 0; /*0x5ddfa2*/
        g_MenuStateFlags = v14; /*0x5ddfa6*/
        Dialog::RefreshDialogsGame(0); /*0x5ddfac*/
        result = 0; /*0x5ddfb4*/
        break; /*0x5ddfba*/
      default:
        return 0;
    }
  }
  return result; /*0x5ddc01*/
}



// ==== 0x005DE360  SendNetworkLobbyChatMessage  this=AbstractClass  sig=csp ====
int __fastcall SendNetworkLobbyChatMessage(HWND hWnd, int a2, int a3)
{
  HWND DlgItem; // eax
  int v5; // ebp
  HWND v6; // eax
  int result; // eax
  char *v8; // eax
  int v9; // edi
  int i; // esi
  int v11; // edi
  int j; // esi
  wchar_t lParam[111]; // [esp+14h] [ebp-2A8h] BYREF
  __int16 v15; // [esp+F2h] [ebp-1CAh]
  _DWORD v16[113]; // [esp+F4h] [ebp-1C8h] BYREF
  __int16 v17; // [esp+2B8h] [ebp-4h]
  char v18; // [esp+2BAh] [ebp-2h]

  DlgItem = GetDlgItem(hWnd, 1344); /*0x5de37c*/
  SendMessageA(DlgItem, 0x4B3u, 0x6Fu, (LPARAM)lParam); /*0x5de391*/
  v15 = 0; /*0x5de397*/
  v5 = wcslen(lParam); /*0x5de3aa*/
  v6 = GetDlgItem(hWnd, 1344); /*0x5de3b2*/
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5de3c1*/
  result = InvalidateRect(hWnd, 0, 1); /*0x5de3c8*/
  if ( v5 > 2 ) /*0x5de3d1*/
  {
    v8 = CharToWideString(unk_A8B380); /*0x5de3e1*/
    Dialog::ShowMessage(a2, (size_t)g_Str_Trace___s_, v8, lParam); /*0x5de3f1*/
    memset(v16, 0, sizeof(v16)); /*0x5de40b*/
    v17 = 0; /*0x5de40d*/
    v18 = 0; /*0x5de40f*/
    v16[0] = 12; /*0x5de41a*/
    strcpy((char *)&v16[1], unk_A8B380); /*0x5de43b*/
    wcscpy((wchar_t *)&v16[12], lParam); /*0x5de44a*/
    v16[68] = a3; /*0x5de45e*/
    v16[69] = WideString::Hash(word_A8D610); /*0x5de46a*/
    result = g_NetworkSettingsState; /*0x5de471*/
    if ( g_NetworkSettingsState == 2 ) /*0x5de479*/
    {
      v9 = dword_A8DA84; /*0x5de47b*/
      for ( i = 1; i < v9; ++i ) /*0x5de488*/
      {
        Network::SendMessage((int)unk_A8E9C0, (int)v16, 455, 1, *(_DWORD *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5de4b3*/
        result = Event::Dispatch(); /*0x5de4b8*/
      }
    }
    else
    {
      v11 = dword_A8DA54; /*0x5de4cf*/
      for ( j = 1; j < v11; ++j ) /*0x5de4dc*/
      {
        Network::SendMessage((int)unk_A8E9C0, (int)v16, 455, 1, *(_DWORD *)(dword_A8DA48 + 4 * j) + 40, 0, 0); /*0x5de503*/
        result = Event::Dispatch(); /*0x5de508*/
      }
    }
  }
  return result; /*0x5de4c2*/
}



// ==== 0x005DE520  NetworkLobby::DlgProc  this=NetworkLobby  sig=csp ====
int __stdcall NetworkLobby::DlgProc(HWND hDlg, UINT a2, unsigned int nIDDlgItem, unsigned int lParam)
{
  wchar_t *StringCSF; // ebp
  HWND v5; // eax
  char *v6; // eax
  int result; // eax
  Skirmish *v8; // edi
  LRESULT v9; // eax
  HWND v10; // eax
  ObjectClass *v11; // ecx
  void *v12; // ebp
  int v13; // edi
  void *v14; // ecx
  ObjectClass *v15; // ecx
  char v16; // bl
  char v17; // al
  int v18; // edi
  int i; // esi
  unsigned int v20; // eax
  int v21; // eax
  int PlayerCountMap; // edi
  void *ptr_8; // ecx
  HWND DlgItem; // eax
  Dialog *DlgCtrlID; // edi
  GameSetup *ComboBoxSelectedRaw; // eax
  wchar_t *DifficultyString; // eax
  SideClass *ComboBoxSelected; // eax
  GameClass *ComboBoxSelectedDefault; // eax
  POINT v30; // [esp-Ch] [ebp-200h]
  ObjectClass *v31; // [esp+0h] [ebp-1F4h]
  GameSetup *v32; // [esp+0h] [ebp-1F4h]
  GameSetup *v33; // [esp+0h] [ebp-1F4h]
  char v34; // [esp+12h] [ebp-1E2h]
  char v35; // [esp+13h] [ebp-1E1h]
  HWND hWnd; // [esp+14h] [ebp-1E0h]
  DeleteAndZero v37; // [esp+18h] [ebp-1DCh] BYREF
  int v38[113]; // [esp+2Ch] [ebp-1C8h] BYREF
  __int16 v39; // [esp+1F0h] [ebp-4h]
  char v40; // [esp+1F2h] [ebp-2h]

  if ( a2 != 1175 ) /*0x5de54c*/
    SkirmishDialogProc(hDlg, a2, nIDDlgItem, (HWND)lParam); /*0x5de552*/
  if ( a2 > 0x111 ) /*0x5de55d*/
  {
    if ( a2 <= 0x49B ) /*0x5dec01*/
    {
      if ( a2 == 1179 ) /*0x5dec07*/
      {
        DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x5deed0*/
        SendMessageA(DlgItem, 0x4B3u, 0x7Fu, lParam); /*0x5deedf*/
        return 0; /*0x5deef1*/
      }
      if ( a2 >= 0x114 ) /*0x5dec13*/
      {
        if ( a2 <= 0x115 ) /*0x5dec1f*/
        {
          if ( (HWND)lParam == GetDlgItem(hDlg, 1842) ) /*0x5dee43*/
          {
            if ( byte_AC0268 ) /*0x5dee4c*/
              return 0; /*0x5dee4c*/
            stru_A8EB00.ObjectTypeClass[26] = SendDlgItemMessageA(hDlg, 1842, 0x400u, 0, 0); /*0x5dee63*/
          }
          if ( !byte_AC0268 ) /*0x5dee6f*/
          {
            *(_DWORD *)&stru_A8B250.__pad_0[24] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0); /*0x5dee9c*/
            *(_DWORD *)&stru_A8B250.__pad_0[12] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0); /*0x5deeb3*/
            *(_DWORD *)&stru_A8B250.__pad_0[32] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0); /*0x5deebc*/
            return 0; /*0x5deecb*/
          }
          return 0; /*0x5dee6f*/
        }
        if ( a2 == 1175 ) /*0x5dec2b*/
        {
          NetworkBuffer::GetField((NetworkBuffer *)&stru_A8EB00.?[252]); /*0x5dec36*/
          v20 = Random::Range(&Randomizer_Global, 1, 0x7FFF); /*0x5dec47*/
          srand(v20); /*0x5dec4d*/
          *(_DWORD *)&stru_A8EB00.?[432] = rand(); /*0x5dec5c*/
          Dialog::RestoreParent((Dialog *)hDlg); /*0x5dec61*/
          SkirmishDialog::FillComboBoxes((SkirmishDialog *)hDlg); /*0x5dec68*/
          InitGameDropdownColors(v31); /*0x5dec6d*/
          Lobby::FillPlayerFactions((Lobby *)hDlg); /*0x5dec74*/
          SetupSkirmishDialogPlayerSlot(hDlg, (int)dword_A8DA8C); /*0x5dec81*/
          MapSkirmishDialogPlayerToControl(hDlg, (int)dword_A8DA8C); /*0x5dec8e*/
          _cfltcvt_init(); /*0x5dec93*/
          memset32(&stru_A8B250.__pad_0[140], -2, 8u); /*0x5deca7*/
          GDlg::LoadLetterStrings(); /*0x5deca9*/
          memset32(&stru_A8B250.__pad_0[172], -2, 8u); /*0x5decc2*/
          SetupMultiplayerLobbyPlayers(hDlg, (int)&unk_A8B440); /*0x5decc6*/
          Lobby::InvalidatePlayerSlots((Lobby *)hDlg); /*0x5deccd*/
          RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5decd5*/
          GameSetup::DisplayPlayers(v33); /*0x5decdc*/
          if ( dword_A8B23C /*0x5decef*/
            && !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) )
          {
            g_MPCooperativeState = (ObjectClass *)-1; /*0x5decfb*/
            g_MenuStateFlags = 0; /*0x5ded05*/
            Dialog::RefreshDialogsGame(0); /*0x5ded0b*/
            *(_DWORD *)(dword_A8DA90[0] + 107) = 0; /*0x5ded15*/
            v21 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x5ded20*/
            SessionClass::SetPlayerOption((int *)dword_A8DA90[0], v21); /*0x5ded2a*/
            SessionClass::SetPlayerColor((int *)dword_A8DA90[0], -2); /*0x5ded37*/
            SessionClass::SetOption((int *)dword_A8DA90[0], -2); /*0x5ded44*/
            SessionClass::SetOption2((int *)dword_A8DA90[0], -2); /*0x5ded51*/
            Lobby::FillPlayerFactions((Lobby *)hDlg); /*0x5ded58*/
          }
          SetupSkirmishPlayerSlots(hDlg, 0, (HWND)1); /*0x5ded63*/
          SetupMultiplayerLobbyScreen(hDlg, (void *)0xFFFFFFFF, *(int *)&stru_A8B250.__pad_0[4]); /*0x5ded73*/
          if ( !g_MPCooperativeState /*0x5ded8c*/
            && dword_A8B23C
            && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) )
          {
            SessionClass::SetPlayerOption((int *)dword_A8DA90[0], -3); /*0x5ded9e*/
            *(_DWORD *)(dword_A8DA90[0] + 107) = -1; /*0x5deda8*/
          }
          NetworkLobby::Dispatch((NetworkLobby *)hDlg); /*0x5dedb1*/
          SetDialogPlayerName(hDlg, (int)dword_A8B23C); /*0x5dedbe*/
          Dialog::ShowPlayerName((Dialog *)hDlg); /*0x5dedc5*/
          Session::StartGame((Session *)hDlg); /*0x5dedcc*/
          PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5dede2*/
          if ( !dword_A8B23C /*0x5dedfe*/
            || !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)
            || (ptr_8 = dword_A8B230[127].ptr_8, (int)ptr_8 > PlayerCountMap) )
          {
            ptr_8 = (void *)PlayerCountMap; /*0x5dee00*/
          }
          ResetLobbyFactionTable((int)ptr_8); /*0x5dee02*/
          Lobby::InvalidateFactionCombos((Lobby *)hDlg); /*0x5dee09*/
          SkirmishDialogProc(hDlg, 1175, nIDDlgItem, (HWND)lParam); /*0x5dee16*/
          NetworkLobby::UpdatePlayerList(); /*0x5dee1b*/
          return 0; /*0x5dee2c*/
        }
      }
      return 0; /*0x5def0d*/
    }
    if ( a2 != 1257 ) /*0x5deefa*/
    {
      if ( a2 == 1260 ) /*0x5deeff*/
      {
        Dialog::EnumAndCleanup((Dialog *)hDlg); /*0x5def12*/
        return 0; /*0x5def12*/
      }
      return 0; /*0x5deeff*/
    }
    WideString::Assign_Alt((void **)(lParam + 8), 0); /*0x5def2d*/
    if ( *(_DWORD *)lParam && *(_DWORD *)(lParam + 4) != -1 ) /*0x5def40*/
    {
      DlgCtrlID = (Dialog *)GetDlgCtrlID(*(HWND *)lParam); /*0x5def49*/
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 ) /*0x5def55*/
      {
        ComboBoxSelectedDefault = (GameClass *)GetComboBoxSelectedDefault(hDlg, (int)DlgCtrlID, *(_DWORD *)(lParam + 4)); /*0x5defa8*/
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault); /*0x5defaf*/
        goto LABEL_132; /*0x5defaf*/
      }
      if ( CountryCombo::IDToIndex((CountryCombo *)DlgCtrlID) == -1 ) /*0x5def61*/
      {
        if ( StartCombo::IDToIndex((StartCombo *)DlgCtrlID) != -1 ) /*0x5def6d*/
        {
          ComboBoxSelectedRaw = (GameSetup *)GetComboBoxSelectedRaw(hDlg, (int)DlgCtrlID, *(_DWORD *)(lParam + 4)); /*0x5def77*/
          DifficultyString = GameSetup::GetColorTooltip(ComboBoxSelectedRaw); /*0x5def7e*/
LABEL_132:
          WideString::Assign_Alt((void **)(lParam + 8), DifficultyString); /*0x5defb4*/
        }
      }
      else
      {
        ComboBoxSelected = (SideClass *)GetComboBoxSelected(hDlg, (int)DlgCtrlID, *(_DWORD *)(lParam + 4)); /*0x5def8d*/
        if ( ComboBoxSelected != (SideClass *)-1 ) /*0x5def95*/
        {
          DifficultyString = SideClass::GetName(ComboBoxSelected); /*0x5def99*/
          goto LABEL_132; /*0x5def9e*/
        }
      }
    }
    return 1; /*0x5defbf*/
  }
  if ( a2 != 273 ) /*0x5de563*/
  {
    switch ( a2 ) /*0x5de57f*/
    {
      case 2u: /*0x5de57f*/
        if ( !(unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5de694*/
          return 0; /*0x5de694*/
        VtableStub::643E70(&stru_AC4B30.__pad_EC[828]); /*0x5de69f*/
        result = 0; /*0x5de6a7*/
        break; /*0x5de6b0*/
      case 0xFu: /*0x5de57f*/
        Dialog::DrawBackground((Dialog *)hDlg); /*0x5de634*/
        if ( g_UIControlState ) /*0x5de641*/
          Skirmish::RenderPreview(g_UIControlState, hDlg); /*0x5de644*/
        if ( (unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5de64e*/
          LoadScreen::Render((int)&stru_AC4B30.__pad_EC[828], lParam, nIDDlgItem, NAN); /*0x5de664*/
        Dialog::StopBink((Dialog *)hDlg); /*0x5de66b*/
        ValidateRect(hDlg, 0); /*0x5de673*/
        result = 0; /*0x5de67c*/
        break; /*0x5de685*/
      case 0x14u: /*0x5de57f*/
        return 1;
      case 0x2Bu: /*0x5de57f*/
        Dialog::Resize((char *)lParam); /*0x5de61b*/
        result = 1; /*0x5de623*/
        break; /*0x5de62f*/
      case 0x84u: /*0x5de57f*/
        hWnd = GetDlgItem(hDlg, 1685); /*0x5de594*/
        if ( !hWnd ) /*0x5de598*/
          return 0; /*0x5de598*/
        GetWindowRect(hDlg, (LPRECT)&v37.DeleteAndZero_field_0x04); /*0x5de5af*/
        StringCSF = &g_TypeClass_DefaultString; /*0x5de5c3*/
        v30.y = HIWORD(lParam) - v37.DeleteAndZero_field_0x08; /*0x5de5c8*/
        v30.x = (unsigned __int16)lParam - v37.DeleteAndZero_field_0x04; /*0x5de5c9*/
        v5 = ChildWindowFromPointEx(hDlg, v30, 1u); /*0x5de5cb*/
        if ( v5 ) /*0x5de5d3*/
        {
          v6 = DlgSkirmishMenuProc(hDlg, v5); /*0x5de5d9*/
          if ( v6 ) /*0x5de5e0*/
            StringCSF = GetStringCSF((wchar_t *)v6, 0, g_Str_File_netdlg2_cpp, 2857); /*0x5de5f5*/
        }
        SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5de604*/
        result = 0; /*0x5de60d*/
        break; /*0x5de616*/
      default:
        return 0;
    }
    return result; /*0x5de616*/
  }
  if ( (unsigned __int16)nIDDlgItem > 0x588u ) /*0x5de6c1*/
  {
    if ( (unsigned __int16)nIDDlgItem > 0x6A8u ) /*0x5de86a*/
    {
      switch ( (__int16)nIDDlgItem ) /*0x5deba6*/
      {
        case 1706: /*0x5deba6*/
        case 1707: /*0x5deba6*/
          goto LABEL_89;
        case 1901: /*0x5deba6*/
        case 1902: /*0x5deba6*/
        case 1903: /*0x5deba6*/
        case 1904: /*0x5deba6*/
        case 1905: /*0x5deba6*/
        case 1906: /*0x5deba6*/
        case 1907: /*0x5deba6*/
        case 1908: /*0x5deba6*/
          if ( HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5debe7*/
            return 0; /*0x5debe7*/
          ProcessNetworkLobbyOption(hDlg, (void *)(unsigned __int16)nIDDlgItem); /*0x5debf1*/
          break; /*0x5debf6*/
        default:
          return 0;
      }
      goto LABEL_51; /*0x5debf6*/
    }
    if ( (unsigned __int16)nIDDlgItem >= 0x6A3u ) /*0x5de876*/
    {
LABEL_89:
      if ( HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5debc0*/
        return 0; /*0x5debc0*/
      AssignPlayerSide(hDlg, (unsigned __int16)nIDDlgItem); /*0x5debca*/
      goto LABEL_51; /*0x5debcf*/
    }
    if ( (unsigned __int16)nIDDlgItem != 1450 ) /*0x5de883*/
    {
      if ( (unsigned __int16)nIDDlgItem != 1697 ) /*0x5de88a*/
      {
        if ( (unsigned __int16)nIDDlgItem != 1698 ) /*0x5de88d*/
          return 0; /*0x5de88d*/
LABEL_45:
        if ( HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5de8a6*/
          return 0; /*0x5de8a6*/
        AssignPlayerColor(hDlg, (void *)(unsigned __int16)nIDDlgItem); /*0x5de8b0*/
LABEL_51:
        CheckGameSettingsChanged(1, 0); /*0x5de8d9*/
        GameSetup::DisplayPlayers((GameSetup *)v31); /*0x5de8e4*/
        return 0; /*0x5de8f5*/
      }
LABEL_48:
      if ( HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5de8ca*/
        return 0; /*0x5de8ca*/
      SelectLobbyCountry(hDlg, (void *)(unsigned __int16)nIDDlgItem); /*0x5de8d4*/
      goto LABEL_51; /*0x5de8d4*/
    }
    if ( byte_AC0268 ) /*0x5de8ff*/
      return 0; /*0x5de8ff*/
    v11 = dword_A8B23C; /*0x5de905*/
    v12 = *(void **)&stru_A8B250.__pad_0[4]; /*0x5de90b*/
    if ( dword_A8B23C ) /*0x5de913*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C) ) /*0x5de917*/
      {
        v11 = dword_A8B23C; /*0x5de91e*/
        v35 = 0; /*0x5de924*/
LABEL_58:
        if ( !v11 || (v34 = 0, (*((unsigned __int8 (__thiscall **)(ObjectClass *))v11->AbstractClass + 47))(v11)) ) /*0x5de93b*/
          v34 = 1; /*0x5de94a*/
        Dialog::IdleProcess((Dialog *)v31, (ObjectClass *)hDlg); /*0x5de951*/
        ShowWindow(hDlg, 0); /*0x5de95f*/
        byte_8316D4 = 0; /*0x5de967*/
        if ( SkirmishDialog::Show(g_hWnd, lParam, (int)v12) == 2 ) /*0x5de976*/
        {
          *(_DWORD *)&stru_A8B250.__pad_0[4] = v12; /*0x5de97a*/
          LoadScenarioClassByIndex((int)v12); /*0x5de980*/
          Session::PrepareGame((Session *)hDlg); /*0x5de987*/
          byte_8316D4 = 1; /*0x5de98f*/
          ShowWindow(hDlg, 5); /*0x5de996*/
          Session::StartGame((Session *)hDlg); /*0x5de99a*/
          CheckGameSettingsChanged(1, 0); /*0x5de9a3*/
          InvalidateRect(hDlg, 0, 0); /*0x5de9ad*/
          return 0; /*0x5de9bf*/
        }
        if ( LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]) ) /*0x5de9c8*/
          SetupMultiplayerLobbyScreen(hDlg, v12, *(int *)&stru_A8B250.__pad_0[4]); /*0x5de9e3*/
        else
          *(_DWORD *)&stru_A8B250.__pad_0[4] = v12; /*0x5de9d1*/
        byte_8316D4 = 1; /*0x5de9eb*/
        ShowWindow(hDlg, 5); /*0x5de9f2*/
        Dialog::ShowPlayerName((Dialog *)hDlg); /*0x5de9f6*/
        Session::StartGame((Session *)hDlg); /*0x5de9fd*/
        v13 = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5dea13*/
        if ( !dword_A8B23C /*0x5dea2f*/
          || !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)
          || (v14 = dword_A8B230[127].ptr_8, (int)v14 > v13) )
        {
          v14 = (void *)v13; /*0x5dea31*/
        }
        ResetLobbyFactionTable((int)v14); /*0x5dea33*/
        Lobby::InvalidateFactionCombos((Lobby *)hDlg); /*0x5dea3a*/
        Lobby::InvalidatePlayerSlots((Lobby *)hDlg); /*0x5dea41*/
        NetworkLobby::UpdateLabels((NetworkLobby *)hDlg); /*0x5dea48*/
        NetworkLobby::FillOptionCombo(); /*0x5dea4d*/
        RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5dea55*/
        v15 = dword_A8B23C; /*0x5dea5a*/
        if ( dword_A8B23C ) /*0x5dea62*/
        {
          if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C) ) /*0x5dea66*/
          {
            v15 = dword_A8B23C; /*0x5dea6d*/
            v16 = 0; /*0x5dea73*/
            goto LABEL_75; /*0x5dea75*/
          }
          v15 = dword_A8B23C; /*0x5dea77*/
        }
        v16 = 1; /*0x5dea7d*/
LABEL_75:
        if ( !v15 || (v17 = (*((int (__thiscall **)(ObjectClass *))v15->AbstractClass + 47))(v15)) != 0 ) /*0x5dea8d*/
          v17 = 1; /*0x5dea8f*/
        if ( v34 && !v17 ) /*0x5dea9b*/
          MultiplayerLobby::FillSlots((MultiplayerLobby *)hDlg); /*0x5dea9f*/
        if ( v35 && !v16 && NetworkLobby::SetupPlayerSlotControls((NetworkLobby *)hDlg) ) /*0x5deaba*/
        {
          *(_DWORD *)&stru_A8B250.__pad_0[36] = 0; /*0x5dead2*/
          memset(v38, 0, sizeof(v38)); /*0x5deadc*/
          v39 = 0; /*0x5deade*/
          v40 = 0; /*0x5deae0*/
          v38[0] = 22; /*0x5deaf5*/
          strcpy((char *)&v38[1], unk_A8B380); /*0x5deb06*/
          Player::BuildListString((Player *)&v38[11] + 3); /*0x5deb13*/
          v18 = dword_A8DA84; /*0x5deb18*/
          for ( i = 1; i < v18; ++i ) /*0x5deb25*/
          {
            Network::SendMessage(&unk_A8E9C0.Socket, (int)v38, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5deb49*/
            Event::Dispatch(); /*0x5deb4e*/
          }
          GameSetup::DisplayPlayers(v32); /*0x5deb5a*/
          CheckGameSettingsChanged(1, 0); /*0x5deb63*/
          return 0; /*0x5deb6b*/
        }
        else
        {
          GameSetup::DisplayPlayers(v32); /*0x5deb79*/
          return 0; /*0x5deb81*/
        }
      }
      v11 = dword_A8B23C; /*0x5de92a*/
    }
    v35 = 1; /*0x5de930*/
    goto LABEL_58; /*0x5de930*/
  }
  if ( (unsigned __int16)nIDDlgItem == 1416 ) /*0x5de6c7*/
  {
    v10 = GetDlgItem(hDlg, 1416); /*0x5de82b*/
    EnableWindow(v10, 0); /*0x5de832*/
    byte_AC0268 = 1; /*0x5de83f*/
    SaveMultiplayerLobbySettings(hDlg, (int)&unk_A8B440); /*0x5de846*/
    g_NetworkOptionsState = 1416; /*0x5de84e*/
    return 0; /*0x5de861*/
  }
  if ( (unsigned __int16)nIDDlgItem <= 0x514u ) /*0x5de6d3*/
  {
    if ( (unsigned __int16)nIDDlgItem < 0x513u ) /*0x5de6df*/
    {
      if ( (unsigned __int16)nIDDlgItem <= 0x418u ) /*0x5de6eb*/
      {
        if ( (unsigned __int16)nIDDlgItem >= 0x411u ) /*0x5de6f7*/
        {
          if ( HIWORD(nIDDlgItem) == 1 && !byte_AC0268 && (unsigned __int8)Settings::CheckString() ) /*0x5de771*/
          {
            v9 = GetComboBoxSelectedDefault(hDlg, (unsigned __int16)nIDDlgItem, -1); /*0x5de784*/
            PlayerSkirmishSlotHandler(hDlg, (unsigned __int16)nIDDlgItem, v9, 2); /*0x5de790*/
            return 0; /*0x5de7a1*/
          }
        }
        else if ( (unsigned __int16)nIDDlgItem == 2 && !byte_AC0268 ) /*0x5de709*/
        {
          v8 = g_UIControlState; /*0x5de70f*/
          if ( g_UIControlState ) /*0x5de717*/
          {
            ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5de71b*/
            __3_YAXPAX_Z(v8); /*0x5de721*/
            g_UIControlState = 0; /*0x5de729*/
          }
          SaveMultiplayerLobbySettings(hDlg, (int)&unk_A8B440); /*0x5de73a*/
          g_NetworkOptionsState = 2; /*0x5de742*/
          return 0; /*0x5de755*/
        }
        return 0; /*0x5def23*/
      }
      if ( (unsigned __int16)nIDDlgItem != 1296 ) /*0x5de7aa*/
        return 0; /*0x5de7bc*/
    }
    goto LABEL_48; /*0x5de7aa*/
  }
  switch ( (__int16)nIDDlgItem ) /*0x5de7d6*/
  {
    case 1310: /*0x5de7d6*/
    case 1311: /*0x5de7d6*/
    case 1312: /*0x5de7d6*/
    case 1313: /*0x5de7d6*/
      goto LABEL_48;
    case 1314: /*0x5de7d6*/
    case 1315: /*0x5de7d6*/
    case 1316: /*0x5de7d6*/
    case 1317: /*0x5de7d6*/
    case 1318: /*0x5de7d6*/
    case 1319: /*0x5de7d6*/
    case 1320: /*0x5de7d6*/
      goto LABEL_45;
    case 1344: /*0x5de7d6*/
      ReadChatMessage((wchar_t **)&v37, (HWND)lParam); /*0x5de7e3*/
      DeleteAndZero::Alt(&v37); /*0x5de7ec*/
      if ( HIWORD(nIDDlgItem) != 1281 ) /*0x5de7fa*/
        return 0; /*0x5de7fa*/
      SendNetworkLobbyChatMessage(hDlg, (int)Math::InitDegToRad, 61680); /*0x5de80f*/
      result = 0; /*0x5de817*/
      break; /*0x5de820*/
    default:
      return 0;
  }
  return result; /*0x5de60a*/
}



// ==== 0x005DF180  SkirmishDialogProc  this=-  sig=csp ====
int __stdcall SkirmishDialogProc(HWND hDlg, int a2, unsigned __int16 a3, HWND a4)
{
  if ( !byte_AC0268 ) /*0x5df189*/
  {
    switch ( a2 ) /*0x5df198*/
    {
      case 273: /*0x5df198*/
        if ( a3 > 0x624u ) /*0x5df262*/
        {
          if ( a3 == 1690 ) /*0x5df395*/
          {
            MEMORY[0xA8B263] = SendDlgItemMessageA(hDlg, 1690, 0xF0u, 0, 0) == 1; /*0x5df3fb*/
          }
          else if ( a3 == 1693 ) /*0x5df39a*/
          {
            LOBYTE(MEMORY[0xA8B264]) = 0; /*0x5df3af*/
            if ( SendDlgItemMessageA(hDlg, 1693, 0xF0u, 0, 0) == 1 ) /*0x5df3c3*/
            {
              LOBYTE(MEMORY[0xA8B264]) = 1; /*0x5df3c6*/
              return 0; /*0x5df3cf*/
            }
          }
        }
        else
        {
          switch ( a3 ) /*0x5df268*/
          {
            case 0x624u: /*0x5df268*/
              MEMORY[0xA8B260] = 0; /*0x5df36d*/
              if ( SendDlgItemMessageA(hDlg, 1572, 0xF0u, 0, 0) == 1 ) /*0x5df381*/
              {
                MEMORY[0xA8B260] = 1; /*0x5df384*/
                return 0; /*0x5df38d*/
              }
              break;
            case 0x3E8u: /*0x5df268*/
              LOBYTE(dword_A8B320) = 0; /*0x5df333*/
              if ( SendDlgItemMessageA(hDlg, 1000, 0xF0u, 0, 0) == 1 ) /*0x5df347*/
              {
                LOBYTE(dword_A8B320) = 1; /*0x5df34e*/
                return 0; /*0x5df357*/
              }
              break;
            case 0x54Du: /*0x5df268*/
              MEMORY[0xA8B261] = 0; /*0x5df2f9*/
              if ( SendDlgItemMessageA(hDlg, 1357, 0xF0u, 0, 0) == 1 ) /*0x5df30d*/
              {
                MEMORY[0xA8B261] = 1; /*0x5df314*/
                return 0; /*0x5df31d*/
              }
              break;
            case 0x54Eu: /*0x5df268*/
              MEMORY[0xA8B262] = 0; /*0x5df2a0*/
              if ( SendDlgItemMessageA(hDlg, 1358, 0xF0u, 0, 0) == 1 ) /*0x5df2b0*/
              {
                MEMORY[0xA8B262] = 1; /*0x5df2bb*/
                if ( !MEMORY[0xA8B258] ) /*0x5df2c3*/
                {
                  MEMORY[0xA8B258] = 1; /*0x5df2d7*/
                  SendDlgItemMessageA(hDlg, 1355, 0xF1u, 1u, 0); /*0x5df2dd*/
                  return 0; /*0x5df2e3*/
                }
              }
              break;
          }
        }
        break;
      case 276: /*0x5df198*/
        if ( GetDlgItem(hDlg, 1321) == a4 ) /*0x5df1e3*/
          MEMORY[0xA8B268] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0); /*0x5df1fd*/
        if ( GetDlgItem(hDlg, 1026) == a4 ) /*0x5df20d*/
          MEMORY[0xA8B25C] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0); /*0x5df220*/
        if ( GetDlgItem(hDlg, 1359) == a4 ) /*0x5df231*/
        {
          MEMORY[0xA8B270] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0); /*0x5df248*/
          return 0; /*0x5df251*/
        }
        break;
      case 1175: /*0x5df198*/
        InitSkirmishDialogControls(hDlg, 1); /*0x5df1b7*/
        return 0; /*0x5df1c0*/
    }
  }
  return 0; /*0x5df1bc*/
}



// ==== 0x005DF410  SendNetworkJoinRequest  this=AbstractClass  sig=ida-proto ====
int __fastcall Network_SendJoinRequest(int a1, unsigned __int8 a2)
{
  wchar_t *String; // eax
  wchar_t *v5; // eax
  char v6; // bl
  int v7; // ebx
  wchar_t *v8; // eax
  void *v9; // [esp+10h] [ebp-1DCh] BYREF
  int v10; // [esp+14h] [ebp-1D8h]
  int v11; // [esp+1Ch] [ebp-1D0h]
  _DWORD v12[113]; // [esp+24h] [ebp-1C8h] BYREF
  __int16 v13; // [esp+1E8h] [ebp-4h]
  char v14; // [esp+1EAh] [ebp-2h]

  v10 = a1; /*0x5df41f*/
  if ( a1 < 1 ) /*0x5df423*/
  {
    String = GetStringCSF(aTxtMustSelectG, 0, g_Str_File_netdlg2_cpp, 3712); /*0x5df436*/
    Dialog::ShowMessage(-1, (size_t)String); /*0x5df442*/
    PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df462*/
    return 0; /*0x5df473*/
  }
  if ( dword_A8DA6C <= 1 || a1 > dword_A8DA6C ) /*0x5df484*/
  {
    v5 = GetStringCSF(aTxtNothingToJo, 0, g_Str_File_netdlg2_cpp, 3719); /*0x5df87b*/
  }
  else if ( strlen(unk_A8B380) ) /*0x5df48f*/
  {
    if ( !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC117C)) /*0x5df6c6*/
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1180))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1184))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1188))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC118C))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1190))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1194))
      || (String::Assign((char **)&v9, unk_A8B380), v6 = Network_Send(&v9), DeleteAndZero(&v9), v6) )
    {
      v8 = GetStringCSF(aErrorNameisres, 0, g_Str_File_netdlg2_cpp, 3742); /*0x5df82c*/
      Dialog::ShowMessage(-1, (size_t)v8); /*0x5df838*/
      PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df858*/
      return 0; /*0x5df869*/
    }
    v7 = v10; /*0x5df6d1*/
    if ( *(_BYTE *)(*(_DWORD *)(dword_A8DA60 + 4 * v10) + 52) ) /*0x5df6d8*/
    {
      memset(v12, 0, sizeof(v12)); /*0x5df704*/
      v13 = 0; /*0x5df706*/
      v14 = 0; /*0x5df708*/
      v12[0] = 6; /*0x5df713*/
      strcpy((char *)&v12[1], unk_A8B380); /*0x5df72e*/
      strcpy((char *)&v12[6], byte_ABFF7C); /*0x5df750*/
      *(_DWORD *)((char *)&v12[11] + 3) = Session::GetPlayerOption(dword_A8B238); /*0x5df768*/
      *(_DWORD *)((char *)&v12[12] + 3) = Session::GetPlayerColor(dword_A8B238); /*0x5df776*/
      *(_DWORD *)((char *)&v12[14] + 3) = NetworkBuffer::GetField2(&dword_A8ECE0); /*0x5df784*/
      *(_DWORD *)((char *)&v12[15] + 3) = NetworkBuffer::GetField3(&dword_A8ECE0); /*0x5df799*/
      *(_DWORD *)((char *)&v12[16] + 3) = dword_AC026C; /*0x5df7a2*/
      *(_DWORD *)((char *)&v12[18] + 3) = dword_AC0270; /*0x5df7a6*/
      *(_DWORD *)((char *)&v12[17] + 3) = dword_AC0274; /*0x5df7aa*/
      *(_DWORD *)((char *)&v12[19] + 3) = GameOptions::GetEntry(); /*0x5df7bf*/
      *(_DWORD *)((char *)&v12[21] + 3) = a2; /*0x5df7c3*/
      Network::SendMessage((int)unk_A8E9C0, (int)v12, 455, 1, *(_DWORD *)(dword_A8DA60 + 4 * v7) + 40, 0, 0); /*0x5df7e3*/
      dword_AC0230 = Timer::GetTicks(); /*0x5df7fa*/
      dword_AC0234 = v11; /*0x5df800*/
      dword_AC0238 = 600; /*0x5df806*/
      return 1; /*0x5df81a*/
    }
    v5 = GetStringCSF((wchar_t *)aTxtGameIsClose, 0, g_Str_File_netdlg2_cpp, 3750); /*0x5df6f0*/
  }
  else
  {
    v5 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_netdlg2_cpp, 3727); /*0x5df4ac*/
  }
  Dialog::ShowMessage(-1, (size_t)v5); /*0x5df888*/
  PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df8a7*/
  return 0; /*0x5df469*/
}



// ==== 0x005DF8C0  BroadcastNetworkMessage  this=AbstractClass  sig=ida-proto ====
int __fastcall Network_BroadcastMessage(int a1)
{
  int i; // esi
  int result; // eax
  _DWORD v4[113]; // [esp+Ch] [ebp-1C8h] BYREF
  __int16 v5; // [esp+1D0h] [ebp-4h]
  char v6; // [esp+1D2h] [ebp-2h]

  memset(v4, 0, sizeof(v4)); /*0x5df8da*/
  v5 = 0; /*0x5df8dc*/
  v6 = 0; /*0x5df8de*/
  v4[0] = 10; /*0x5df8e9*/
  strcpy((char *)&v4[1], unk_A8B380); /*0x5df900*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x5df915*/
  {
    Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 1, *(_DWORD *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5df939*/
    Event::Dispatch(); /*0x5df93e*/
  }
  if ( (g_NetworkSettingsState == 1 || g_NetworkSettingsState == 2) /*0x5df968*/
    && !Network::IsBroadcastAddr((_BYTE *)(*(_DWORD *)(dword_A8DA60 + 4 * a1) + 40)) )
  {
    Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 1, *(_DWORD *)(dword_A8DA60 + 4 * a1) + 40, 0, 0); /*0x5df991*/
  }
  Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 0, 0, 0, 0); /*0x5df9ad*/
  Game::ResetFlags(); /*0x5df9b2*/
  GameClass::InitDifficultyButtons(); /*0x5df9b7*/
  result = PtrVector::Destroy(&stru_A8DA74); /*0x5df9c1*/
  word_A8D610 = 0; /*0x5df9c6*/
  return result; /*0x5df9cf*/
}



// ==== 0x005DF9E0  SendNetworkHeartbeat  this=-  sig=csp ====
int __fastcall SendNetworkHeartbeat(int a1, int a2, int a3, int a4)
{
  int Ticks; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int result; // eax
  int v11; // esi
  unsigned int v12; // edx
  int v13; // [esp+10h] [ebp-1D4h]
  _DWORD v15[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v16; // [esp+1E0h] [ebp-4h]
  char v17; // [esp+1E2h] [ebp-2h]

  if ( (byte_AC01BC & 1) == 0 ) /*0x5df9fb*/
  {
    byte_AC01BC |= 1u; /*0x5dfa06*/
    dword_AC0220 = Timer::GetTicks(); /*0x5dfa11*/
    dword_AC0228 = 0; /*0x5dfa16*/
    atexit(nullsub_27); /*0x5dfa21*/
  }
  if ( (byte_AC01BC & 2) == 0 ) /*0x5dfa30*/
  {
    byte_AC01BC |= 2u; /*0x5dfa3c*/
    dword_AC0200 = Timer::GetTicks(); /*0x5dfa47*/
    dword_AC0208 = 0; /*0x5dfa4c*/
    atexit(nullsub_26); /*0x5dfa57*/
  }
  if ( (byte_AC01BC & 4) == 0 ) /*0x5dfa66*/
  {
    byte_AC01BC |= 4u; /*0x5dfa72*/
    dword_ABFF70 = Timer::GetTicks(); /*0x5dfa7d*/
    dword_ABFF78 = 0; /*0x5dfa82*/
    atexit(nullsub_25); /*0x5dfa8d*/
  }
  if ( a4 ) /*0x5dfa9c*/
  {
    dword_AC0220 = Timer::GetTicks(); /*0x5dfaac*/
    dword_AC0228 = 120; /*0x5dfab5*/
    dword_AC0224 = v13; /*0x5dfabf*/
    Ticks = Timer::GetTicks(); /*0x5dfac4*/
    dword_AC0208 = 35; /*0x5dfad2*/
    dword_AC0200 = Ticks; /*0x5dfadc*/
    dword_AC0204 = v13; /*0x5dfae1*/
    dword_ABFF70 = Timer::GetTicks(); /*0x5dfaec*/
    dword_ABFF74 = v13; /*0x5dfafa*/
    dword_ABFF78 = 83; /*0x5dfaff*/
  }
  v6 = dword_AC0228; /*0x5dfb0a*/
  if ( dword_AC0220 == -1 ) /*0x5dfb13*/
  {
LABEL_12:
    if ( v6 && !a1 ) /*0x5dfb31*/
      goto LABEL_18; /*0x5dfb31*/
    goto LABEL_14; /*0x5dfb31*/
  }
  v7 = Timer::GetTicks() - dword_AC0220; /*0x5dfb1f*/
  if ( v7 < v6 ) /*0x5dfb27*/
  {
    v6 -= v7; /*0x5dfb29*/
    goto LABEL_12; /*0x5dfb29*/
  }
LABEL_14:
  dword_AC0220 = Timer::GetTicks(); /*0x5dfb37*/
  dword_AC0224 = v13; /*0x5dfb4e*/
  dword_AC0228 = 120; /*0x5dfb54*/
  if ( Dialog::GetCurrentType() != 188 || a1 ) /*0x5dfb68*/
  {
    memset(v15, 0, sizeof(v15)); /*0x5dfb79*/
    v16 = 0; /*0x5dfb7b*/
    v17 = 0; /*0x5dfb7d*/
    v15[0] = 0; /*0x5dfb88*/
    strcpy((char *)&v15[1], unk_A8B380); /*0x5dfb9d*/
    Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfbb7*/
    if ( dword_A8D5FC ) /*0x5dfbc2*/
      Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfbdb*/
  }
LABEL_18:
  if ( (int)g_NetworkSetupConfig <= 0 || (int)g_NetworkSetupConfig >= dword_A8DA6C ) /*0x5dfbef*/
  {
LABEL_24:
    if ( !a2 ) /*0x5dfc1f*/
      goto LABEL_27; /*0x5dfc1f*/
    goto LABEL_25; /*0x5dfc1f*/
  }
  v8 = dword_AC0208; /*0x5dfbf6*/
  if ( dword_AC0200 != -1 ) /*0x5dfbff*/
  {
    v9 = Timer::GetTicks() - dword_AC0200; /*0x5dfc0b*/
    if ( v9 >= v8 ) /*0x5dfc13*/
      goto LABEL_25; /*0x5dfc13*/
    v8 -= v9; /*0x5dfc15*/
  }
  if ( v8 ) /*0x5dfc19*/
    goto LABEL_24; /*0x5dfc19*/
LABEL_25:
  dword_AC0200 = Timer::GetTicks(); /*0x5dfc25*/
  dword_AC0204 = v13; /*0x5dfc3c*/
  dword_AC0208 = 35; /*0x5dfc41*/
  memset(v15, 0, sizeof(v15)); /*0x5dfc52*/
  v16 = 0; /*0x5dfc60*/
  v17 = 0; /*0x5dfc62*/
  v15[0] = 2; /*0x5dfc63*/
  strcpy((char *)&v15[1], ToWideStringChar(*(char **)(dword_A8DA60 + 4 * g_NetworkSetupConfig))); /*0x5dfc8f*/
  Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfca9*/
  if ( dword_A8D5FC ) /*0x5dfcb4*/
    Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfccd*/
LABEL_27:
  result = dword_ABFF70; /*0x5dfcd2*/
  v11 = dword_ABFF78; /*0x5dfcd7*/
  if ( dword_ABFF70 != -1 ) /*0x5dfce0*/
  {
    result = Timer::GetTicks() - dword_ABFF70; /*0x5dfcec*/
    if ( result >= v11 ) /*0x5dfcf4*/
      goto LABEL_31; /*0x5dfcf4*/
    v11 -= result; /*0x5dfcf6*/
  }
  if ( v11 ) /*0x5dfcfa*/
    goto LABEL_32; /*0x5dfcfa*/
LABEL_31:
  if ( g_NetworkSettingsState >= 2 ) /*0x5dfd03*/
  {
LABEL_32:
    if ( !a3 ) /*0x5dfd0c*/
      return result; /*0x5dfd0c*/
  }
  dword_ABFF70 = Timer::GetTicks(); /*0x5dfd12*/
  dword_ABFF74 = v13; /*0x5dfd29*/
  dword_ABFF78 = 83; /*0x5dfd2e*/
  memset(v15, 0, sizeof(v15)); /*0x5dfd3f*/
  v16 = 0; /*0x5dfd41*/
  v17 = 0; /*0x5dfd43*/
  v15[0] = 4; /*0x5dfd58*/
  v12 = dword_A8B394; /*0x5dfd66*/
  strcpy((char *)&v15[1], unk_A8B380); /*0x5dfd6f*/
  *(_DWORD *)((char *)&v15[11] + 3) = dword_A8B37C; /*0x5dfd86*/
  *(_DWORD *)((char *)&v15[12] + 3) = v12; /*0x5dfd95*/
  result = Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfd99*/
  if ( dword_A8D5FC ) /*0x5dfda4*/
    return Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfdbd*/
  return result; /*0x5dfdc2*/
}



// ==== 0x005DFDD0  nullsub_25  this=-  sig=ida-proto ====
void __cdecl nullsub_25()
{
  ; /*0x5dfdd0*/
}



// ==== 0x005DFDE0  nullsub_26  this=-  sig=ida-proto ====
void __cdecl nullsub_26()
{
  ; /*0x5dfde0*/
}



// ==== 0x005DFDF0  nullsub_27  this=-  sig=ida-proto ====
void __cdecl nullsub_27()
{
  ; /*0x5dfdf0*/
}



// ==== 0x005DFE00  SendNetworkPlayerOptions  this=Network  sig=csp ====
char __fastcall SendNetworkPlayerOptions(_DWORD *a1, int a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v6; // ebx
  char *v7; // eax
  char *v8; // eax
  int v9[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v10; // [esp+1D4h] [ebp-4h]
  char v11; // [esp+1D6h] [ebp-2h]

  if ( *a1 || byte_A8D60C ) /*0x5dfe1e*/
  {
    if ( *a1 != 2 ) /*0x5dff1a*/
      return 0; /*0x5dff1a*/
    v6 = (char *)(a1 + 1); /*0x5dff20*/
    v7 = ToWideStringChar((char *)word_A8D610); /*0x5dff28*/
    if ( _strcmpi(v6, v7) || !wcslen(word_A8D610) || byte_A8D60C || g_NetworkSettingsState < 2 ) /*0x5dff68*/
    {
      return 0; /*0x5e00a0*/
    }
    else
    {
      memset(v9, 0, sizeof(v9)); /*0x5dff7d*/
      v10 = 0; /*0x5dff7f*/
      v11 = 0; /*0x5dff81*/
      v9[0] = 3; /*0x5dff8c*/
      strcpy((char *)&v9[1], unk_A8B380); /*0x5dffa7*/
      strcpy((char *)&v9[6], byte_ABFF7C); /*0x5dffc9*/
      *(int *)((char *)&v9[11] + 3) = Session::GetPlayerOption(dword_A8B238); /*0x5dffe1*/
      *(int *)((char *)&v9[12] + 3) = Session::GetPlayerColor(dword_A8B238); /*0x5dffef*/
      *(int *)((char *)&v9[13] + 3) = WideString::Hash(word_A8D610); /*0x5dfffe*/
      *(int *)((char *)&v9[20] + 3) = dword_A8DA8C; /*0x5e0009*/
      *(int *)((char *)&v9[21] + 3) = dword_A8DA8C == (_DWORD)g_MPCooperativeState; /*0x5e0019*/
      if ( dword_A8DA84 ) /*0x5e001d*/
      {
        if ( *(_DWORD *)(*(_DWORD *)dword_A8DA78 + 107) != -1 ) /*0x5e0038*/
          *(int *)((char *)&v9[21] + 3) = 0; /*0x5e003a*/
        Network::SendMessage(unk_A8E9C0, (int)v9, 455, 1, a2, 0, 0); /*0x5e0058*/
        v8 = ToWideStringChar(*(char **)dword_A8DA78); /*0x5e0065*/
        if ( !_strcmpi(v6, v8) ) /*0x5e006c*/
        {
          CheckGameSettingsChanged(1, 1); /*0x5e007c*/
          if ( dword_A8B23C ) /*0x5e0089*/
            (*(void (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 96))(dword_A8B23C); /*0x5e008d*/
        }
        return 1; /*0x5e0093*/
      }
      else
      {
        return 1; /*0x5e0022*/
      }
    }
  }
  else
  {
    if ( wcslen(word_A8D610) ) /*0x5dfe29*/
    {
      if ( !byte_A8D60E || (v3 = ToWideStringChar((char *)word_A8D610), !_strcmpi(unk_A8B380, v3)) ) /*0x5dfe52*/
      {
        v4 = ToWideStringChar((char *)word_A8D610); /*0x5dfe67*/
        if ( _strcmpi(unk_A8B380, v4) && !byte_A8ED5C ) /*0x5dfe85*/
          return 1; /*0x5dfe93*/
        memset(v9, 0, sizeof(v9)); /*0x5dfe9f*/
        v10 = 0; /*0x5dfea1*/
        v11 = 0; /*0x5dfea3*/
        v9[0] = 1; /*0x5dfea9*/
        strcpy((char *)&v9[1], ToWideStringChar((char *)word_A8D610)); /*0x5dfed4*/
        *(int *)((char *)&v9[11] + 3) = *(int *)((char *)&v9[11] + 3) & 0xFFFFFFFE | byte_A8D60E & 1; /*0x5dfef6*/
        Network::SendMessage(unk_A8E9C0, (int)v9, 455, 1, a2, 0, 0); /*0x5dff05*/
      }
    }
    return 1; /*0x5dff0d*/
  }
}



// ==== 0x005D0070  SessionClass::loadSettings  this=SessionClass  sig=csp ====
void __thiscall SessionClass::loadSettings(SessionClass *this)
{
  int i; // ebp
  DeleteAndZero *v3; // edi
  int j; // ebp
  int v5; // ecx
  void *v6; // edi
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  int v10; // ebx
  ObjectClass *v11; // edi

  for ( i = 0; i < this->PlayerColor; ++i ) /*0x5d007f*/
  {
    v3 = *(DeleteAndZero **)(this->Handle[2] + 4 * i); /*0x5d0084*/
    if ( v3 ) /*0x5d0089*/
    {
      DeleteAndZero::Alt(v3 + 1); /*0x5d008e*/
      __3_YAXPAX_Z(v3); /*0x5d0094*/
    }
  }
  for ( j = 0; j < *(_DWORD *)&this->__pad_50[20]; ++j ) /*0x5d00ab*/
  {
    v5 = *(_DWORD *)&this->__pad_50[8]; /*0x5d00ad*/
    v6 = *(void **)(v5 + 4 * j); /*0x5d00b0*/
    if ( v6 ) /*0x5d00b5*/
    {
      DeleteAndZero(*(ObjectClass **)(v5 + 4 * j)); /*0x5d00b9*/
      __3_YAXPAX_Z(v6); /*0x5d00bf*/
    }
  }
  v7 = *(void **)&this->__pad_50[8]; /*0x5d00cf*/
  *(_DWORD *)&this->__pad_50[4] = &VectorClass<MapSelection *>::`vftable'; /*0x5d00d2*/
  if ( v7 && this->__pad_50[17] ) /*0x5d00dd*/
  {
    __3_YAXPAX_Z(v7); /*0x5d00e3*/
    *(_DWORD *)&this->__pad_50[8] = 0; /*0x5d00eb*/
  }
  this->__pad_50[17] = 0; /*0x5d00ee*/
  *(_DWORD *)&this->__pad_50[12] = 0; /*0x5d00f1*/
  v8 = (void *)this->Handle[2]; /*0x5d00f4*/
  this->Handle[1] = (int)&VectorClass<MSTextEntry *>::`vftable'; /*0x5d00f7*/
  if ( v8 && BYTE1(this->Handle[4]) ) /*0x5d0102*/
  {
    __3_YAXPAX_Z(v8); /*0x5d0108*/
    this->Handle[2] = 0; /*0x5d0110*/
  }
  BYTE1(this->Handle[4]) = 0; /*0x5d0113*/
  this->Handle[3] = 0; /*0x5d0116*/
  v9 = (void *)this->Config[4]; /*0x5d0119*/
  this->Config[3] = (int)&VectorClass<Point2D>::`vftable'; /*0x5d011c*/
  if ( v9 && BYTE1(this->Config[6]) ) /*0x5d0127*/
  {
    __3_YAXPAX_Z(v9); /*0x5d012d*/
    this->Config[4] = 0; /*0x5d0135*/
  }
  BYTE1(this->Config[6]) = 0; /*0x5d013b*/
  this->Config[5] = 0; /*0x5d013e*/
  DeleteAndZero((ObjectClass *)&this->Config[2]); /*0x5d0141*/
  v10 = 2; /*0x5d0149*/
  v11 = (ObjectClass *)&this->Config[2]; /*0x5d014e*/
  do /*0x5d015c*/
  {
    v11 = (ObjectClass *)((char *)v11 - 4); /*0x5d0151*/
    DeleteAndZero(v11); /*0x5d0156*/
    --v10; /*0x5d015b*/
  }
  while ( v10 ); /*0x5d015c*/
  DeleteAndZero::Alt((DeleteAndZero *)this->unknown_10); /*0x5d0161*/
  DeleteAndZero((ObjectClass *)this->unknown_0C); /*0x5d0169*/
  DeleteAndZero((ObjectClass *)this->unknown_08); /*0x5d0170*/
  DeleteAndZero((ObjectClass *)this->MPGameMode); /*0x5d0178*/
  DeleteAndZero((ObjectClass *)this); /*0x5d017f*/
}



// ==== 0x005D0190  ObjectClass::method_5D0190  this=ObjectClass  sig=csp ====
int __thiscall sub_5D0190(ObjectClass *this, const char *a2)
{
  int v3; // esi
  int v5; // esi
  char *v6; // [esp+8h] [ebp-4h] BYREF

  String::Assign((String *)&v6, a2); /*0x5d019e*/
  String::ToLower((String *)&v6); /*0x5d01a7*/
  v3 = 0; /*0x5d01af*/
  if ( this->customSound <= 0 ) /*0x5d01b3*/
  {
LABEL_6:
    DeleteAndZero((ObjectClass *)&v6); /*0x5d0202*/
    return 0; /*0x5d0210*/
  }
  while ( !(unsigned __int8)String::NotEquals(*(String **)(this->customSound_controller[2] + 4 * v3), 0) ) /*0x5d01c4*/
  {
LABEL_5:
    if ( ++v3 >= this->customSound ) /*0x5d0200*/
      goto LABEL_6; /*0x5d0200*/
  }
  String::AssignFromPtr((String *)&a2, *(const char ***)(this->customSound_controller[2] + 4 * v3)); /*0x5d01d1*/
  String::ToLower((String *)&a2); /*0x5d01da*/
  if ( !(unsigned __int8)String::Compare((String *)&v6, &a2) ) /*0x5d01e8*/
  {
    DeleteAndZero((ObjectClass *)&a2); /*0x5d01f5*/
    goto LABEL_5; /*0x5d01f5*/
  }
  v5 = *(_DWORD *)(this->customSound_controller[2] + 4 * v3); /*0x5d021a*/
  DeleteAndZero((ObjectClass *)&a2); /*0x5d021d*/
  DeleteAndZero((ObjectClass *)&v6); /*0x5d0226*/
  return v5; /*0x5d020b*/
}



// ==== 0x005D0240  ObjectClass::method_5D0240  this=ObjectClass  sig=csp ====
char **__thiscall sub_5D0240(ObjectClass *this, char **a2, char a3)
{
  int customSound; // esi
  int v4; // eax
  int v5; // edi
  int v6; // ecx

  customSound = this->customSound; /*0x5d0242*/
  v4 = 0; /*0x5d0245*/
  if ( customSound <= 0 ) /*0x5d024a*/
  {
LABEL_5:
    String::Assign((String *)a2, 0); /*0x5d0264*/
    return a2; /*0x5d0271*/
  }
  else
  {
    v5 = this->customSound_controller[2]; /*0x5d024c*/
    v6 = v5; /*0x5d0253*/
    while ( a3 != *(_BYTE *)(*(_DWORD *)v6 + 4) ) /*0x5d025a*/
    {
      ++v4; /*0x5d025c*/
      v6 += 4; /*0x5d025d*/
      if ( v4 >= customSound ) /*0x5d0262*/
        goto LABEL_5; /*0x5d0262*/
    }
    String::AssignFromPtr((String *)a2, *(const char ***)(v5 + 4 * v4)); /*0x5d0283*/
    return a2; /*0x5d0288*/
  }
}



// ==== 0x005D0290  MSChoiceClass::DeleteAndZero  this=AbstractClass  sig=csp ====
char *__thiscall sub_5D0290(char *this, const wchar_t **a2)
{
  void **v3; // ebp
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v8; // [esp+10h] [ebp-4h] BYREF

  v3 = (void **)(this + 12); /*0x5d0299*/
  *(_DWORD *)this = 0; /*0x5d029f*/
  this->ptr_8 = 0; /*0x5d02a1*/
  this->ptr_C = 0; /*0x5d02a4*/
  WideString::Assign((wchar_t **)this + 3, 0); /*0x5d02a7*/
  unknown_libname_74(&v8); /*0x5d02b0*/
  v4 = String::Tokenize2(a2, 0, (wchar_t *)asc_8304FC, (void **)&v8); /*0x5d02cf*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d02d1*/
    *(_DWORD *)this = Pipe::GetField((const wchar_t **)&v8); /*0x5d02e3*/
  v5 = String::Tokenize2(a2, v4, (wchar_t *)asc_8304FC, (void **)&v8); /*0x5d02fb*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d02fd*/
    this->ptr_8 = Pipe::GetField((const wchar_t **)&v8); /*0x5d030f*/
  v6 = String::Tokenize2(a2, v5, (wchar_t *)asc_8304FC, (void **)&v8); /*0x5d0328*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d032a*/
    this->ptr_C = Pipe::GetField((const wchar_t **)&v8); /*0x5d033c*/
  String::Tokenize2(a2, v6, (wchar_t *)asc_8304FC, (void **)&v8); /*0x5d034c*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d0355*/
    WideString::Reassign_Alt(v3, (const wchar_t **)&v8); /*0x5d0365*/
  DeleteAndZero::Alt((void **)&v8); /*0x5d036e*/
  return this; /*0x5d0375*/
}



// ==== 0x005D0380  String::SplitComma  this=ObjectClass  sig=csp ====
int __thiscall String::SplitComma(int this, String *a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  char *v10; // [esp+Ch] [ebp-4h] BYREF

  String::Assign((String *)this, 0); /*0x5d0389*/
  *(_DWORD *)(this + 4) = 0; /*0x5d0392*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0395*/
  *(_DWORD *)(this + 12) = 0; /*0x5d0398*/
  unknown_libname_73(&v10); /*0x5d039b*/
  v3 = String::Tokenize(a2, 0, Str, (void **)&v10); /*0x5d03ba*/
  if ( String::Length((String *)&v10) ) /*0x5d03bc*/
    String::Reassign((String *)this, (const char **)&v10); /*0x5d03cc*/
  v4 = String::Tokenize(a2, v3, Str, (void **)&v10); /*0x5d03e7*/
  if ( String::Length((String *)&v10) ) /*0x5d03e9*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d03f6*/
    *(_DWORD *)(this + 4) = v5; /*0x5d03fb*/
  }
  v6 = String::Tokenize(a2, v4, Str, (void **)&v10); /*0x5d0414*/
  if ( String::Length((String *)&v10) ) /*0x5d0416*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d0423*/
    *(_DWORD *)(this + 8) = v7; /*0x5d0428*/
  }
  String::Tokenize(a2, v6, Str, (void **)&v10); /*0x5d0438*/
  if ( String::Length((String *)&v10) ) /*0x5d0441*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d044e*/
    *(_DWORD *)(this + 12) = v8; /*0x5d0453*/
  }
  DeleteAndZero((ObjectClass *)&v10); /*0x5d045a*/
  return this; /*0x5d0461*/
}



// ==== 0x005D0470  Audio::ParseVolume  this=Audio  sig=csp ====
int __thiscall Audio::ParseVolume(int this, const char **a2, String *a3)
{
  int v4; // ebp
  int v5; // eax
  String v7; // [esp+4h] [ebp-8h] BYREF

  String::Assign((String *)this, 0); /*0x5d0478*/
  *(_BYTE *)(this + 4) = 0; /*0x5d0483*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0487*/
  *(_DWORD *)(this + 12) = 255; /*0x5d048e*/
  if ( (unsigned __int8)String::NotEquals((String *)a2, 0) && Audio::IsSoundEnabled() ) /*0x5d04a2*/
  {
    unknown_libname_73(&v7.m_3[1]); /*0x5d04b5*/
    v4 = String::Tokenize(a3, 0, Str, (void **)&v7.m_3[1]); /*0x5d04d5*/
    unknown_libname_73(&v7); /*0x5d04d7*/
    String::Tokenize(a3, v4, Str, (void **)&v7); /*0x5d04e9*/
    if ( (unsigned __int8)String::NotEquals(&v7, 0) ) /*0x5d04f4*/
    {
      __1_Timevec_std__QAE_XZ((const char **)&v7); /*0x5d0503*/
      *(_DWORD *)(this + 12) = v5; /*0x5d050b*/
      if ( v5 <= 100 ) /*0x5d050e*/
      {
        if ( v5 < 0 ) /*0x5d051b*/
          *(_DWORD *)(this + 12) = 0; /*0x5d051d*/
      }
      else
      {
        *(_DWORD *)(this + 12) = 100; /*0x5d0510*/
      }
      *(_DWORD *)(this + 12) = 255 * *(_DWORD *)(this + 12) / 100; /*0x5d053f*/
    }
    if ( *(int *)(this + 12) > 0 && (unsigned __int8)String::NotEquals((String *)&v7.m_3[1], 0) ) /*0x5d054f*/
      String::Reassign((String *)this, a2); /*0x5d055f*/
    DeleteAndZero((ObjectClass *)&v7); /*0x5d0568*/
    DeleteAndZero((ObjectClass *)&v7.m_3[1]); /*0x5d0571*/
  }
  return this; /*0x5d0578*/
}



// ==== 0x005D0580  ObjectClass::j_DeleteAndZero  this=ObjectClass  sig=csp ====
// attributes: thunk
void __thiscall j_DeleteAndZero(ObjectClass *this)
{
  DeleteAndZero(this); /*0x5d0580*/
}



// ==== 0x005D0590  ObjectClass::nullsub_24  this=ObjectClass  sig=csp ====
int nullsub_24(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5d0590*/
}



// ==== 0x005D05A0  _DynamicVectorClass_VPoint2D::FreeData  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42::FreeData(_DynamicVectorClass_VPoint2D *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d05a6*/
  this->m_10 = 0; /*0x5d05a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d05b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d05b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d05be*/
  }
  BYTE1(this->m_C) = 0; /*0x5d05c1*/
  this->m_8 = 0; /*0x5d05c4*/
}



// ==== 0x005D05D0  _DynamicVectorClass_VPoint2D::GetCount_8B  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42::GetCount_8B(_DynamicVectorClass_VPoint2D *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d05d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5d05e5*/
  else
    return 0; /*0x5d05d7*/
}



// ==== 0x005D05F0  _VectorClass_VPoint2D::Count  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Point2D::Count(_VectorClass_VPoint2D *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x5d05f0*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x5d05ff*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x5d0606*/
  return a2; /*0x5d0601*/
}



// ==== 0x005D0610  _DynamicVectorClass_PAVMSTextEntry::FreeData_0  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42::FreeData_0(_DynamicVectorClass_PAVMSTextEntry *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d0616*/
  this->m_10 = 0; /*0x5d0619*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d0620*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0626*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d062e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0631*/
  this->m_8 = 0; /*0x5d0634*/
}



// ==== 0x005D0640  _DynamicVectorClass_PAVMSTextEntry::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42::GetCount(_DynamicVectorClass_PAVMSTextEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0640*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0655*/
  else
    return 0; /*0x5d0647*/
}



// ==== 0x005D0660  _VectorClass_PAVMSTextEntry::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSTextEntry::Get(_VectorClass_PAVMSTextEntry *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d066a*/
}



// ==== 0x005D0670  _DynamicVectorClass_PAVMapSelection::FreeData_1  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42::FreeData_1(_DynamicVectorClass_PAVMapSelection *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d0676*/
  this->m_10 = 0; /*0x5d0679*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d0680*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0686*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d068e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0691*/
  this->m_8 = 0; /*0x5d0694*/
}



// ==== 0x005D06A0  _DynamicVectorClass_PAVMapSelection::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42::GetCount_0(_DynamicVectorClass_PAVMapSelection *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d06a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d06b5*/
  else
    return 0; /*0x5d06a7*/
}



// ==== 0x005D06C0  _VectorClass_PAVMapSelection::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapSelection::Get(_VectorClass_PAVMapSelection *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d06ca*/
}



// ==== 0x005D06D0  _DynamicVectorClass_PAVMapStage::ddtor  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26::ddtor(_DynamicVectorClass_PAVMapStage *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d06d6*/
  this->m_10 = 0; /*0x5d06d9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d06e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d06e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d06ee*/
  }
  BYTE1(this->m_C) = 0; /*0x5d06f1*/
  this->m_8 = 0; /*0x5d06f4*/
}



// ==== 0x005D0700  _DynamicVectorClass_PAVMapStage::Draw  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26::Draw(_DynamicVectorClass_PAVMapStage *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0700*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0715*/
  else
    return 0; /*0x5d0707*/
}



// ==== 0x005D0720  _VectorClass_PAVMapStage::GetFrame  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_26::GetFrame(_VectorClass_PAVMapStage *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d072a*/
}



// ==== 0x005D0730  _DynamicVectorClass_PAVMSAnimEntry::FreeData  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26::FreeData(_DynamicVectorClass_PAVMSAnimEntry *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d0736*/
  this->m_10 = 0; /*0x5d0739*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d0740*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0746*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d074e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0751*/
  this->m_8 = 0; /*0x5d0754*/
}



// ==== 0x005D0760  _DynamicVectorClass_PAVMSAnimEntry::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26::GetCount(_DynamicVectorClass_PAVMSAnimEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0760*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0775*/
  else
    return 0; /*0x5d0767*/
}



// ==== 0x005D0780  _VectorClass_PAVMSAnimEntry::GetFrame  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_42::GetFrame(_VectorClass_PAVMSAnimEntry *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d078a*/
}



// ==== 0x005D0790  _DynamicVectorClass_PAVMSSfxEntry::FreeData_0  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26::FreeData_0(_DynamicVectorClass_PAVMSSfxEntry *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d0796*/
  this->m_10 = 0; /*0x5d0799*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d07a0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d07a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d07ae*/
  }
  BYTE1(this->m_C) = 0; /*0x5d07b1*/
  this->m_8 = 0; /*0x5d07b4*/
}



// ==== 0x005D07C0  _DynamicVectorClass_PAVMSSfxEntry::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26::GetCount_0(_DynamicVectorClass_PAVMSSfxEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d07c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d07d5*/
  else
    return 0; /*0x5d07c7*/
}



// ==== 0x005D07E0  _VectorClass_PAVMSSfxEntry::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfxEntry::Get(_VectorClass_PAVMSSfxEntry *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d07ea*/
}



// ==== 0x005D07F0  _VectorClass_VPoint2D::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Point2D::Get(_VectorClass_VPoint2D *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x5d07fb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0800*/
  {
    v3 = 0; /*0x5d0802*/
    if ( m_8 <= 0 ) /*0x5d0806*/
      return 1; /*0x5d0836*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5d0808*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x5d080b*/
    v6 = (_DWORD *)(v4 + 4); /*0x5d080e*/
    v7 = v4 - (_DWORD)v5; /*0x5d0811*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d0823*/
    {
      ++v3; /*0x5d0825*/
      v6 += 2; /*0x5d0826*/
      v5 += 2; /*0x5d0829*/
      if ( v3 >= m_8 ) /*0x5d082e*/
        return 1; /*0x5d082e*/
    }
  }
  return 0; /*0x5d0830*/
}



// ==== 0x005D0850  _VectorClass_VPoint2D::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Point2D::Release(_VectorClass_VPoint2D *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int m_8; // ecx
  int v9; // eax
  int v10; // edx

  if ( a2 ) /*0x5d085c*/
  {
    v4 = a3; /*0x5d0862*/
    LOBYTE(this->m_C) = 0; /*0x5d0866*/
    if ( a3 ) /*0x5d086c*/
    {
      v6 = a3; /*0x5d0894*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5d0876*/
      if ( v5 ) /*0x5d0880*/
        v6 = (_DWORD *)v5; /*0x5d0885*/
      else
        v6 = 0; /*0x5d088d*/
    }
    LOBYTE(this->m_C) = 1; /*0x5d089c*/
    if ( v6 ) /*0x5d08a0*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d08ab*/
      {
        m_8 = this->m_8; /*0x5d08b2*/
        if ( a2 < m_8 ) /*0x5d08b7*/
          m_8 = a2; /*0x5d08b9*/
        v9 = 0; /*0x5d08bb*/
        if ( m_8 > 0 ) /*0x5d08bf*/
        {
          do /*0x5d08d7*/
          {
            v10 = *(_DWORD *)&this->m_1[3]; /*0x5d08c1*/
            ++v9; /*0x5d08c4*/
            v6[2 * v9 - 2] = *(_DWORD *)(v10 + 8 * v9 - 8); /*0x5d08cb*/
            v6[2 * v9 - 1] = *(_DWORD *)(v10 + 8 * v9 - 4); /*0x5d08d3*/
          }
          while ( v9 < m_8 ); /*0x5d08d7*/
          v4 = a3; /*0x5d08d9*/
        }
        if ( BYTE1(this->m_C) ) /*0x5d08dd*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d08e8*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d08f0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x5d08f9*/
      this->m_8 = a2; /*0x5d0901*/
      BYTE1(this->m_C) = v4 == 0; /*0x5d0904*/
      return 1; /*0x5d090a*/
    }
    else
    {
      return 0; /*0x5d08a5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VPoint2D *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0914*/
    return 1; /*0x5d091a*/
  }
}



// ==== 0x005D0920  _VectorClass_VPoint2D::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Point2D::Set(_VectorClass_VPoint2D *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d092d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0933*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d093b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d093e*/
  this->m_8 = 0; /*0x5d0941*/
}



// ==== 0x005D0950  _VectorClass_VPoint2D::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Point2D::GetSize(_VectorClass_VPoint2D *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d0950*/
    return 0; /*0x5d095e*/
  m_8 = this->m_8; /*0x5d0964*/
  result = 0; /*0x5d0967*/
  if ( m_8 <= 0 ) /*0x5d096b*/
    return -1; /*0x5d098c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d0971*/
  {
    if ( ++result >= m_8 ) /*0x5d098a*/
      return -1; /*0x5d098a*/
  }
  return result; /*0x5d095b*/
}



// ==== 0x005D09A0  _VectorClass_VPoint2D::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Point2D::GetCapacity(_VectorClass_VPoint2D *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d09a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5d09b5*/
  else
    return 0; /*0x5d09a7*/
}



// ==== 0x005D09C0  _DynamicVectorClass_VPoint2D::AllocCopyData_8B  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42::AllocCopyData_8B(_DynamicVectorClass_VPoint2D *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x5d09cc*/
  {
    v4 = a3; /*0x5d09d2*/
    LOBYTE(this->m_C) = 0; /*0x5d09d6*/
    if ( a3 ) /*0x5d09dc*/
    {
      v6 = a3; /*0x5d0a04*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5d09e6*/
      if ( v5 ) /*0x5d09f0*/
        v6 = (_DWORD *)v5; /*0x5d09f5*/
      else
        v6 = 0; /*0x5d09fd*/
    }
    LOBYTE(this->m_C) = 1; /*0x5d0a0c*/
    if ( !v6 ) /*0x5d0a10*/
      return 0; /*0x5d0a90*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0a12*/
    {
      m_8 = this->m_8; /*0x5d0a19*/
      if ( a2 < m_8 ) /*0x5d0a1e*/
        m_8 = a2; /*0x5d0a20*/
      v8 = 0; /*0x5d0a22*/
      if ( m_8 > 0 ) /*0x5d0a26*/
      {
        do /*0x5d0a3e*/
        {
          v9 = *(_DWORD *)&this->m_1[3]; /*0x5d0a28*/
          ++v8; /*0x5d0a2b*/
          v6[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x5d0a32*/
          v6[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x5d0a3a*/
        }
        while ( v8 < m_8 ); /*0x5d0a3e*/
        v4 = a3; /*0x5d0a40*/
      }
      if ( BYTE1(this->m_C) ) /*0x5d0a44*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0a4f*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d0a57*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x5d0a60*/
    this->m_8 = a2; /*0x5d0a68*/
    BYTE1(this->m_C) = v4 == 0; /*0x5d0a6b*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VPoint2D *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0a74*/
  }
  v10 = this->m_8; /*0x5d0a77*/
  if ( v10 < this->m_10 ) /*0x5d0a7f*/
    this->m_10 = v10; /*0x5d0a81*/
  return 1; /*0x5d0a84*/
}



// ==== 0x005D0AA0  _DynamicVectorClass_VPoint2D::FindIndex_Pair  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42::FindIndex_Pair(_DynamicVectorClass_VPoint2D *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d0aa0*/
  result = 0; /*0x5d0aa5*/
  if ( m_10 <= 0 ) /*0x5d0aab*/
    return -1; /*0x5d0acc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d0ab1*/
  {
    if ( ++result >= m_10 ) /*0x5d0aca*/
      return -1; /*0x5d0aca*/
  }
  return result; /*0x5d0acf*/
}



// ==== 0x005D0AE0  _VectorClass_PAVMSTextEntry::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSTextEntry::Add(_VectorClass_PAVMSTextEntry *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d0ae2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0aed*/
  {
    v3 = 0; /*0x5d0aef*/
    if ( m_8 <= 0 ) /*0x5d0af3*/
      return 1; /*0x5d0b13*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d0af5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0afb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0b04*/
    {
      ++v3; /*0x5d0b06*/
      ++v4; /*0x5d0b07*/
      if ( v3 >= m_8 ) /*0x5d0b0c*/
        return 1; /*0x5d0b0c*/
    }
  }
  return 0; /*0x5d0b0e*/
}



// ==== 0x005D0B20  _VectorClass_PAVMSTextEntry::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSTextEntry::Release(_VectorClass_PAVMSTextEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0b2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0b36*/
    if ( a3 ) /*0x5d0b3c*/
      v4 = a3; /*0x5d0b52*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d0b4e*/
    LOBYTE(this->m_C) = 1; /*0x5d0b56*/
    if ( v4 ) /*0x5d0b5a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0b65*/
      {
        m_8 = this->m_8; /*0x5d0b6c*/
        if ( a2 < m_8 ) /*0x5d0b71*/
          m_8 = a2; /*0x5d0b73*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d0b79*/
          ++i; /*0x5d0b7e*/
        if ( BYTE1(this->m_C) ) /*0x5d0b8b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0b96*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d0b9e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d0ba7*/
      this->m_8 = a2; /*0x5d0baf*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d0bb2*/
      return 1; /*0x5d0bb8*/
    }
    else
    {
      return 0; /*0x5d0b5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSTextEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0bc2*/
    return 1; /*0x5d0bc8*/
  }
}



// ==== 0x005D0BD0  _VectorClass_PAVMSTextEntry::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSTextEntry::Remove(_VectorClass_PAVMSTextEntry *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d0bdd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0be3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d0beb*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0bee*/
  this->m_8 = 0; /*0x5d0bf1*/
}



// ==== 0x005D0C00  _VectorClass_PAVMSTextEntry::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSTextEntry::GetSize(_VectorClass_PAVMSTextEntry *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d0c00*/
    return 0; /*0x5d0c08*/
  m_8 = this->m_8; /*0x5d0c0e*/
  result = 0; /*0x5d0c11*/
  if ( m_8 <= 0 ) /*0x5d0c15*/
    return -1; /*0x5d0c2c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d0c1b*/
  {
    if ( ++result >= m_8 ) /*0x5d0c2a*/
      return -1; /*0x5d0c2a*/
  }
  return result; /*0x5d0c0a*/
}



// ==== 0x005D0C40  _VectorClass_PAVMSTextEntry::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSTextEntry::GetCapacity(_VectorClass_PAVMSTextEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0c40*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0c55*/
  else
    return 0; /*0x5d0c47*/
}



// ==== 0x005D0C60  _DynamicVectorClass_PAVMSTextEntry::AllocCopyData_4B  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42::AllocCopyData_4B(_DynamicVectorClass_PAVMSTextEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0c6c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0c72*/
    if ( a3 ) /*0x5d0c78*/
      v4 = a3; /*0x5d0c8e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d0c8a*/
    LOBYTE(this->m_C) = 1; /*0x5d0c92*/
    if ( !v4 ) /*0x5d0c96*/
      return 0; /*0x5d0d0a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0c98*/
    {
      m_8 = this->m_8; /*0x5d0c9f*/
      if ( a2 < m_8 ) /*0x5d0ca4*/
        m_8 = a2; /*0x5d0ca6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d0cac*/
        ++i; /*0x5d0cb1*/
      if ( BYTE1(this->m_C) ) /*0x5d0cbe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0cc9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d0cd1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d0cda*/
    this->m_8 = a2; /*0x5d0ce2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d0ce5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSTextEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0cee*/
  }
  v7 = this->m_8; /*0x5d0cf1*/
  if ( v7 < this->m_10 ) /*0x5d0cf9*/
    this->m_10 = v7; /*0x5d0cfb*/
  return 1; /*0x5d0cfe*/
}



// ==== 0x005D0D10  _DynamicVectorClass_PAVMSTextEntry::FindIndex  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42::FindIndex(_DynamicVectorClass_PAVMSTextEntry *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d0d10*/
  result = 0; /*0x5d0d13*/
  if ( m_10 <= 0 ) /*0x5d0d18*/
    return -1; /*0x5d0d2f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d0d1e*/
  {
    if ( ++result >= m_10 ) /*0x5d0d2d*/
      return -1; /*0x5d0d2d*/
  }
  return result; /*0x5d0d32*/
}



// ==== 0x005D0D40  _VectorClass_PAVMapSelection::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapSelection::Add(_VectorClass_PAVMapSelection *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d0d42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0d4d*/
  {
    v3 = 0; /*0x5d0d4f*/
    if ( m_8 <= 0 ) /*0x5d0d53*/
      return 1; /*0x5d0d73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d0d55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0d5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0d64*/
    {
      ++v3; /*0x5d0d66*/
      ++v4; /*0x5d0d67*/
      if ( v3 >= m_8 ) /*0x5d0d6c*/
        return 1; /*0x5d0d6c*/
    }
  }
  return 0; /*0x5d0d6e*/
}



// ==== 0x005D0D80  _VectorClass_PAVMapSelection::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapSelection::Release(_VectorClass_PAVMapSelection *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0d8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0d96*/
    if ( a3 ) /*0x5d0d9c*/
      v4 = a3; /*0x5d0db2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d0dae*/
    LOBYTE(this->m_C) = 1; /*0x5d0db6*/
    if ( v4 ) /*0x5d0dba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0dc5*/
      {
        m_8 = this->m_8; /*0x5d0dcc*/
        if ( a2 < m_8 ) /*0x5d0dd1*/
          m_8 = a2; /*0x5d0dd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d0dd9*/
          ++i; /*0x5d0dde*/
        if ( BYTE1(this->m_C) ) /*0x5d0deb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0df6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d0dfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d0e07*/
      this->m_8 = a2; /*0x5d0e0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d0e12*/
      return 1; /*0x5d0e18*/
    }
    else
    {
      return 0; /*0x5d0dbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMapSelection *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0e22*/
    return 1; /*0x5d0e28*/
  }
}



// ==== 0x005D0E30  _VectorClass_PAVMapSelection::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MapSelection::Remove(_VectorClass_PAVMapSelection *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d0e3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0e43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d0e4b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d0e4e*/
  this->m_8 = 0; /*0x5d0e51*/
}



// ==== 0x005D0E60  _VectorClass_PAVMapSelection::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapSelection::GetSize(_VectorClass_PAVMapSelection *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d0e60*/
    return 0; /*0x5d0e68*/
  m_8 = this->m_8; /*0x5d0e6e*/
  result = 0; /*0x5d0e71*/
  if ( m_8 <= 0 ) /*0x5d0e75*/
    return -1; /*0x5d0e8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d0e7b*/
  {
    if ( ++result >= m_8 ) /*0x5d0e8a*/
      return -1; /*0x5d0e8a*/
  }
  return result; /*0x5d0e6a*/
}



// ==== 0x005D0EA0  _VectorClass_PAVMapSelection::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapSelection::GetCapacity(_VectorClass_PAVMapSelection *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d0ea0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d0eb5*/
  else
    return 0; /*0x5d0ea7*/
}



// ==== 0x005D0EC0  _DynamicVectorClass_PAVMapSelection::AllocCopyData_4B_0  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42::AllocCopyData_4B_0(_DynamicVectorClass_PAVMapSelection *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0ecc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0ed2*/
    if ( a3 ) /*0x5d0ed8*/
      v4 = a3; /*0x5d0eee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d0eea*/
    LOBYTE(this->m_C) = 1; /*0x5d0ef2*/
    if ( !v4 ) /*0x5d0ef6*/
      return 0; /*0x5d0f6a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d0ef8*/
    {
      m_8 = this->m_8; /*0x5d0eff*/
      if ( a2 < m_8 ) /*0x5d0f04*/
        m_8 = a2; /*0x5d0f06*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d0f0c*/
        ++i; /*0x5d0f11*/
      if ( BYTE1(this->m_C) ) /*0x5d0f1e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d0f29*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d0f31*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d0f3a*/
    this->m_8 = a2; /*0x5d0f42*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d0f45*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMapSelection *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d0f4e*/
  }
  v7 = this->m_8; /*0x5d0f51*/
  if ( v7 < this->m_10 ) /*0x5d0f59*/
    this->m_10 = v7; /*0x5d0f5b*/
  return 1; /*0x5d0f5e*/
}



// ==== 0x005D0F70  _DynamicVectorClass_PAVMapSelection::FindIndex_0  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42::FindIndex_0(_DynamicVectorClass_PAVMapSelection *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d0f70*/
  result = 0; /*0x5d0f73*/
  if ( m_10 <= 0 ) /*0x5d0f78*/
    return -1; /*0x5d0f8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d0f7e*/
  {
    if ( ++result >= m_10 ) /*0x5d0f8d*/
      return -1; /*0x5d0f8d*/
  }
  return result; /*0x5d0f92*/
}



// ==== 0x005D0FA0  _VectorClass_PAVMapStage::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_26::AddRef(_VectorClass_PAVMapStage *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d0fa2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d0fad*/
  {
    v3 = 0; /*0x5d0faf*/
    if ( m_8 <= 0 ) /*0x5d0fb3*/
      return 1; /*0x5d0fd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d0fb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0fbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0fc4*/
    {
      ++v3; /*0x5d0fc6*/
      ++v4; /*0x5d0fc7*/
      if ( v3 >= m_8 ) /*0x5d0fcc*/
        return 1; /*0x5d0fcc*/
    }
  }
  return 0; /*0x5d0fce*/
}



// ==== 0x005D0FE0  _VectorClass_PAVMapStage::AllocCopyData_4B  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_26::AllocCopyData_4B(_VectorClass_PAVMapStage *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0fec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d0ff6*/
    if ( a3 ) /*0x5d0ffc*/
      v4 = a3; /*0x5d1012*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d100e*/
    LOBYTE(this->m_C) = 1; /*0x5d1016*/
    if ( v4 ) /*0x5d101a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d1025*/
      {
        m_8 = this->m_8; /*0x5d102c*/
        if ( a2 < m_8 ) /*0x5d1031*/
          m_8 = a2; /*0x5d1033*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d1039*/
          ++i; /*0x5d103e*/
        if ( BYTE1(this->m_C) ) /*0x5d104b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1056*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d105e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d1067*/
      this->m_8 = a2; /*0x5d106f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d1072*/
      return 1; /*0x5d1078*/
    }
    else
    {
      return 0; /*0x5d101f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMapStage *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d1082*/
    return 1; /*0x5d1088*/
  }
}



// ==== 0x005D1090  _VectorClass_PAVMapStage::FreeData_1  this=VectorClass  sig=csp ====
void __thiscall MSPCXAnim_26::FreeData_1(_VectorClass_PAVMapStage *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d109d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d10a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d10ab*/
  }
  BYTE1(this->m_C) = 0; /*0x5d10ae*/
  this->m_8 = 0; /*0x5d10b1*/
}



// ==== 0x005D10C0  _VectorClass_PAVMapStage::FindIndex  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_26::FindIndex(_VectorClass_PAVMapStage *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d10c0*/
    return 0; /*0x5d10c8*/
  m_8 = this->m_8; /*0x5d10ce*/
  result = 0; /*0x5d10d1*/
  if ( m_8 <= 0 ) /*0x5d10d5*/
    return -1; /*0x5d10ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d10db*/
  {
    if ( ++result >= m_8 ) /*0x5d10ea*/
      return -1; /*0x5d10ea*/
  }
  return result; /*0x5d10ca*/
}



// ==== 0x005D1100  _VectorClass_PAVMapStage::GetCount_1  this=VectorClass  sig=csp ====
unsigned int __thiscall MSPCXAnim_26::GetCount_1(_VectorClass_PAVMapStage *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d1100*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d1115*/
  else
    return 0; /*0x5d1107*/
}



// ==== 0x005D1120  _DynamicVectorClass_PAVMapStage::Release  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26::Release(_DynamicVectorClass_PAVMapStage *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d112c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d1132*/
    if ( a3 ) /*0x5d1138*/
      v4 = a3; /*0x5d114e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d114a*/
    LOBYTE(this->m_C) = 1; /*0x5d1152*/
    if ( !v4 ) /*0x5d1156*/
      return 0; /*0x5d11ca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d1158*/
    {
      m_8 = this->m_8; /*0x5d115f*/
      if ( a2 < m_8 ) /*0x5d1164*/
        m_8 = a2; /*0x5d1166*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d116c*/
        ++i; /*0x5d1171*/
      if ( BYTE1(this->m_C) ) /*0x5d117e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1189*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d1191*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d119a*/
    this->m_8 = a2; /*0x5d11a2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d11a5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMapStage *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d11ae*/
  }
  v7 = this->m_8; /*0x5d11b1*/
  if ( v7 < this->m_10 ) /*0x5d11b9*/
    this->m_10 = v7; /*0x5d11bb*/
  return 1; /*0x5d11be*/
}



// ==== 0x005D11D0  _DynamicVectorClass_PAVMapStage::Load  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26::Load(_DynamicVectorClass_PAVMapStage *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d11d0*/
  result = 0; /*0x5d11d3*/
  if ( m_10 <= 0 ) /*0x5d11d8*/
    return -1; /*0x5d11ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d11de*/
  {
    if ( ++result >= m_10 ) /*0x5d11ed*/
      return -1; /*0x5d11ed*/
  }
  return result; /*0x5d11f2*/
}



// ==== 0x005D1200  _VectorClass_PAVMSAnimEntry::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_42::AddRef(_VectorClass_PAVMSAnimEntry *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d1202*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d120d*/
  {
    v3 = 0; /*0x5d120f*/
    if ( m_8 <= 0 ) /*0x5d1213*/
      return 1; /*0x5d1233*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d1215*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d121b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d1224*/
    {
      ++v3; /*0x5d1226*/
      ++v4; /*0x5d1227*/
      if ( v3 >= m_8 ) /*0x5d122c*/
        return 1; /*0x5d122c*/
    }
  }
  return 0; /*0x5d122e*/
}



// ==== 0x005D1240  _VectorClass_PAVMSAnimEntry::Release  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_42::Release(_VectorClass_PAVMSAnimEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d124c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d1256*/
    if ( a3 ) /*0x5d125c*/
      v4 = a3; /*0x5d1272*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d126e*/
    LOBYTE(this->m_C) = 1; /*0x5d1276*/
    if ( v4 ) /*0x5d127a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d1285*/
      {
        m_8 = this->m_8; /*0x5d128c*/
        if ( a2 < m_8 ) /*0x5d1291*/
          m_8 = a2; /*0x5d1293*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d1299*/
          ++i; /*0x5d129e*/
        if ( BYTE1(this->m_C) ) /*0x5d12ab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d12b6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d12be*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d12c7*/
      this->m_8 = a2; /*0x5d12cf*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d12d2*/
      return 1; /*0x5d12d8*/
    }
    else
    {
      return 0; /*0x5d127f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSAnimEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d12e2*/
    return 1; /*0x5d12e8*/
  }
}



// ==== 0x005D12F0  _VectorClass_PAVMSAnimEntry::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSPCXAnim_42::ddtor(_VectorClass_PAVMSAnimEntry *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d12fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1303*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d130b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d130e*/
  this->m_8 = 0; /*0x5d1311*/
}



// ==== 0x005D1320  _VectorClass_PAVMSAnimEntry::Load  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_42::Load(_VectorClass_PAVMSAnimEntry *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d1320*/
    return 0; /*0x5d1328*/
  m_8 = this->m_8; /*0x5d132e*/
  result = 0; /*0x5d1331*/
  if ( m_8 <= 0 ) /*0x5d1335*/
    return -1; /*0x5d134c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d133b*/
  {
    if ( ++result >= m_8 ) /*0x5d134a*/
      return -1; /*0x5d134a*/
  }
  return result; /*0x5d132a*/
}



// ==== 0x005D1360  _VectorClass_PAVMSAnimEntry::Draw  this=VectorClass  sig=csp ====
unsigned int __thiscall MSPCXAnim_42::Draw(_VectorClass_PAVMSAnimEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d1360*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d1375*/
  else
    return 0; /*0x5d1367*/
}



// ==== 0x005D1380  _DynamicVectorClass_PAVMSAnimEntry::AllocCopyData_4B_0  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26::AllocCopyData_4B_0(_DynamicVectorClass_PAVMSAnimEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d138c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d1392*/
    if ( a3 ) /*0x5d1398*/
      v4 = a3; /*0x5d13ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d13aa*/
    LOBYTE(this->m_C) = 1; /*0x5d13b2*/
    if ( !v4 ) /*0x5d13b6*/
      return 0; /*0x5d142a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d13b8*/
    {
      m_8 = this->m_8; /*0x5d13bf*/
      if ( a2 < m_8 ) /*0x5d13c4*/
        m_8 = a2; /*0x5d13c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d13cc*/
        ++i; /*0x5d13d1*/
      if ( BYTE1(this->m_C) ) /*0x5d13de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d13e9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d13f1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d13fa*/
    this->m_8 = a2; /*0x5d1402*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d1405*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSAnimEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d140e*/
  }
  v7 = this->m_8; /*0x5d1411*/
  if ( v7 < this->m_10 ) /*0x5d1419*/
    this->m_10 = v7; /*0x5d141b*/
  return 1; /*0x5d141e*/
}



// ==== 0x005D1430  _DynamicVectorClass_PAVMSAnimEntry::FindIndex_0  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26::FindIndex_0(_DynamicVectorClass_PAVMSAnimEntry *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d1430*/
  result = 0; /*0x5d1433*/
  if ( m_10 <= 0 ) /*0x5d1438*/
    return -1; /*0x5d144f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d143e*/
  {
    if ( ++result >= m_10 ) /*0x5d144d*/
      return -1; /*0x5d144d*/
  }
  return result; /*0x5d1452*/
}



// ==== 0x005D1460  _VectorClass_PAVMSSfxEntry::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfxEntry::Add(_VectorClass_PAVMSSfxEntry *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d1462*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d146d*/
  {
    v3 = 0; /*0x5d146f*/
    if ( m_8 <= 0 ) /*0x5d1473*/
      return 1; /*0x5d1493*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d1475*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d147b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d1484*/
    {
      ++v3; /*0x5d1486*/
      ++v4; /*0x5d1487*/
      if ( v3 >= m_8 ) /*0x5d148c*/
        return 1; /*0x5d148c*/
    }
  }
  return 0; /*0x5d148e*/
}



// ==== 0x005D14A0  _VectorClass_PAVMSSfxEntry::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfxEntry::Release(_VectorClass_PAVMSSfxEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d14ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d14b6*/
    if ( a3 ) /*0x5d14bc*/
      v4 = a3; /*0x5d14d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d14ce*/
    LOBYTE(this->m_C) = 1; /*0x5d14d6*/
    if ( v4 ) /*0x5d14da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d14e5*/
      {
        m_8 = this->m_8; /*0x5d14ec*/
        if ( a2 < m_8 ) /*0x5d14f1*/
          m_8 = a2; /*0x5d14f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d14f9*/
          ++i; /*0x5d14fe*/
        if ( BYTE1(this->m_C) ) /*0x5d150b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1516*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d151e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d1527*/
      this->m_8 = a2; /*0x5d152f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d1532*/
      return 1; /*0x5d1538*/
    }
    else
    {
      return 0; /*0x5d14df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSSfxEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d1542*/
    return 1; /*0x5d1548*/
  }
}



// ==== 0x005D1550  _VectorClass_PAVMSSfxEntry::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfxEntry::Remove(_VectorClass_PAVMSSfxEntry *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d155d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1563*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d156b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d156e*/
  this->m_8 = 0; /*0x5d1571*/
}



// ==== 0x005D1580  _VectorClass_PAVMSSfxEntry::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfxEntry::GetSize(_VectorClass_PAVMSSfxEntry *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d1580*/
    return 0; /*0x5d1588*/
  m_8 = this->m_8; /*0x5d158e*/
  result = 0; /*0x5d1591*/
  if ( m_8 <= 0 ) /*0x5d1595*/
    return -1; /*0x5d15ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d159b*/
  {
    if ( ++result >= m_8 ) /*0x5d15aa*/
      return -1; /*0x5d15aa*/
  }
  return result; /*0x5d158a*/
}



// ==== 0x005D15C0  _VectorClass_PAVMSSfxEntry::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfxEntry::GetCapacity(_VectorClass_PAVMSSfxEntry *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d15c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d15d5*/
  else
    return 0; /*0x5d15c7*/
}



// ==== 0x005D15E0  _DynamicVectorClass_PAVMSSfxEntry::AllocCopyData_4B_1  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26::AllocCopyData_4B_1(_DynamicVectorClass_PAVMSSfxEntry *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d15ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d15f2*/
    if ( a3 ) /*0x5d15f8*/
      v4 = a3; /*0x5d160e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d160a*/
    LOBYTE(this->m_C) = 1; /*0x5d1612*/
    if ( !v4 ) /*0x5d1616*/
      return 0; /*0x5d168a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d1618*/
    {
      m_8 = this->m_8; /*0x5d161f*/
      if ( a2 < m_8 ) /*0x5d1624*/
        m_8 = a2; /*0x5d1626*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d162c*/
        ++i; /*0x5d1631*/
      if ( BYTE1(this->m_C) ) /*0x5d163e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d1649*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d1651*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d165a*/
    this->m_8 = a2; /*0x5d1662*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d1665*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSSfxEntry *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d166e*/
  }
  v7 = this->m_8; /*0x5d1671*/
  if ( v7 < this->m_10 ) /*0x5d1679*/
    this->m_10 = v7; /*0x5d167b*/
  return 1; /*0x5d167e*/
}



// ==== 0x005D1690  _DynamicVectorClass_PAVMSSfxEntry::FindIndex_1  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26::FindIndex_1(_DynamicVectorClass_PAVMSSfxEntry *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d1690*/
  result = 0; /*0x5d1693*/
  if ( m_10 <= 0 ) /*0x5d1698*/
    return -1; /*0x5d16af*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d169e*/
  {
    if ( ++result >= m_10 ) /*0x5d16ad*/
      return -1; /*0x5d16ad*/
  }
  return result; /*0x5d16b2*/
}



// ==== 0x005D16C0  _VectorClass_VPoint2D::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Point2D::QueryInterface(_VectorClass_VPoint2D *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d16c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Point2D>::`vftable'; /*0x5d16c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d16d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d16d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d16e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d16eb*/
  this->m_8 = 0; /*0x5d16f1*/
  if ( (a2 & 1) != 0 ) /*0x5d16f8*/
    __3_YAXPAX_Z(this); /*0x5d16fb*/
  return this->__pad_0; /*0x5d1705*/
}



// ==== 0x005D1710  _DynamicVectorClass_VPoint2D::Constructor_VectorClass_Point2D_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_42::Constructor_VectorClass_Point2D_(_DynamicVectorClass_VPoint2D *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1713*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Point2D>::`vftable'; /*0x5d1716*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1720*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1728*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1730*/
  }
  BYTE1(this->m_C) = 0; /*0x5d173b*/
  this->m_8 = 0; /*0x5d1741*/
  if ( (a2 & 1) != 0 ) /*0x5d1748*/
    __3_YAXPAX_Z(this); /*0x5d174b*/
  return this->__pad_0; /*0x5d1755*/
}



// ==== 0x005D1760  _VectorClass_PAVMSTextEntry::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MSTextEntry::QueryInterface(_VectorClass_PAVMSTextEntry *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1763*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSTextEntry *>::`vftable'; /*0x5d1766*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1770*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1778*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1780*/
  }
  BYTE1(this->m_C) = 0; /*0x5d178b*/
  this->m_8 = 0; /*0x5d1791*/
  if ( (a2 & 1) != 0 ) /*0x5d1798*/
    __3_YAXPAX_Z(this); /*0x5d179b*/
  return this->__pad_0; /*0x5d17a5*/
}



// ==== 0x005D17B0  _DynamicVectorClass_PAVMSTextEntry::Constructor_VectorClass_MSTextEntry___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_42::Constructor_VectorClass_MSTextEntry___(
        _DynamicVectorClass_PAVMSTextEntry *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d17b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSTextEntry *>::`vftable'; /*0x5d17b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d17c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d17c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d17d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d17db*/
  this->m_8 = 0; /*0x5d17e1*/
  if ( (a2 & 1) != 0 ) /*0x5d17e8*/
    __3_YAXPAX_Z(this); /*0x5d17eb*/
  return this->__pad_0; /*0x5d17f5*/
}



// ==== 0x005D1800  _VectorClass_PAVMapSelection::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MapSelection::QueryInterface(_VectorClass_PAVMapSelection *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1803*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapSelection *>::`vftable'; /*0x5d1806*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1810*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1818*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1820*/
  }
  BYTE1(this->m_C) = 0; /*0x5d182b*/
  this->m_8 = 0; /*0x5d1831*/
  if ( (a2 & 1) != 0 ) /*0x5d1838*/
    __3_YAXPAX_Z(this); /*0x5d183b*/
  return this->__pad_0; /*0x5d1845*/
}



// ==== 0x005D1850  _DynamicVectorClass_PAVMapSelection::Constructor_VectorClass_MapSelection___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_42::Constructor_VectorClass_MapSelection___(
        _DynamicVectorClass_PAVMapSelection *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1853*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapSelection *>::`vftable'; /*0x5d1856*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1860*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1868*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1870*/
  }
  BYTE1(this->m_C) = 0; /*0x5d187b*/
  this->m_8 = 0; /*0x5d1881*/
  if ( (a2 & 1) != 0 ) /*0x5d1888*/
    __3_YAXPAX_Z(this); /*0x5d188b*/
  return this->__pad_0; /*0x5d1895*/
}



// ==== 0x005D18A0  _VectorClass_PAVMapStage::Constructor_VectorClass_MapStage___  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSPCXAnim_26::Constructor_VectorClass_MapStage___(_VectorClass_PAVMapStage *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d18a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapStage *>::`vftable'; /*0x5d18a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d18b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d18b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d18c0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d18cb*/
  this->m_8 = 0; /*0x5d18d1*/
  if ( (a2 & 1) != 0 ) /*0x5d18d8*/
    __3_YAXPAX_Z(this); /*0x5d18db*/
  return this->__pad_0; /*0x5d18e5*/
}



// ==== 0x005D18F0  _DynamicVectorClass_PAVMapStage::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_26::QueryInterface(_DynamicVectorClass_PAVMapStage *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d18f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MapStage *>::`vftable'; /*0x5d18f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1900*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1908*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1910*/
  }
  BYTE1(this->m_C) = 0; /*0x5d191b*/
  this->m_8 = 0; /*0x5d1921*/
  if ( (a2 & 1) != 0 ) /*0x5d1928*/
    __3_YAXPAX_Z(this); /*0x5d192b*/
  return this->__pad_0; /*0x5d1935*/
}



// ==== 0x005D1940  _VectorClass_PAVMSAnimEntry::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSPCXAnim_42::QueryInterface(_VectorClass_PAVMSAnimEntry *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1943*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnimEntry *>::`vftable'; /*0x5d1946*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1950*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1958*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1960*/
  }
  BYTE1(this->m_C) = 0; /*0x5d196b*/
  this->m_8 = 0; /*0x5d1971*/
  if ( (a2 & 1) != 0 ) /*0x5d1978*/
    __3_YAXPAX_Z(this); /*0x5d197b*/
  return this->__pad_0; /*0x5d1985*/
}



// ==== 0x005D1990  _DynamicVectorClass_PAVMSAnimEntry::Constructor_VectorClass_MSAnimEntry___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_26::Constructor_VectorClass_MSAnimEntry___(
        _DynamicVectorClass_PAVMSAnimEntry *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1993*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnimEntry *>::`vftable'; /*0x5d1996*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d19a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d19a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d19b0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d19bb*/
  this->m_8 = 0; /*0x5d19c1*/
  if ( (a2 & 1) != 0 ) /*0x5d19c8*/
    __3_YAXPAX_Z(this); /*0x5d19cb*/
  return this->__pad_0; /*0x5d19d5*/
}



// ==== 0x005D19E0  _VectorClass_PAVMSSfxEntry::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MSSfxEntry::QueryInterface(_VectorClass_PAVMSSfxEntry *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d19e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSSfxEntry *>::`vftable'; /*0x5d19e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d19f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d19f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1a00*/
  }
  BYTE1(this->m_C) = 0; /*0x5d1a0b*/
  this->m_8 = 0; /*0x5d1a11*/
  if ( (a2 & 1) != 0 ) /*0x5d1a18*/
    __3_YAXPAX_Z(this); /*0x5d1a1b*/
  return this->__pad_0; /*0x5d1a25*/
}



// ==== 0x005D1A30  _DynamicVectorClass_PAVMSSfxEntry::Constructor_VectorClass_MSSfxEntry___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSPCXAnim_26::Constructor_VectorClass_MSSfxEntry___(
        _DynamicVectorClass_PAVMSSfxEntry *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d1a33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSSfxEntry *>::`vftable'; /*0x5d1a36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d1a40*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1a48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d1a50*/
  }
  BYTE1(this->m_C) = 0; /*0x5d1a5b*/
  this->m_8 = 0; /*0x5d1a61*/
  if ( (a2 & 1) != 0 ) /*0x5d1a68*/
    __3_YAXPAX_Z(this); /*0x5d1a6b*/
  return this->__pad_0; /*0x5d1a75*/
}



// ==== 0x005D1A80  MPBattleClass::populateTeamDropdown  this=MPBattleClass  sig=ida-proto ====
int sub_5D1A80()
{
  dword_ABFBC0 = 0; /*0x5d1a82*/
  dword_ABFBC4 = 0; /*0x5d1a87*/
  dword_ABFBC8 = 0; /*0x5d1a8c*/
  dword_ABFBCC = 0; /*0x5d1a91*/
  return 0; /*0x5d1a96*/
}



// ==== 0x005D1AA0  MSEngine::Construct  this=MSEngine  sig=csp ====
_DWORD *__thiscall MSEngine::Construct(MSEngine *this)
{
  void **p_MSEngine_field_0x8; // ecx
  void (__thiscall **v3)(void **, int, _DWORD); // edx

  p_MSEngine_field_0x8 = &this->MSEngine_field_0x8; /*0x5d1aa5*/
  p_MSEngine_field_0x8[1] = 0; /*0x5d1ab2*/
  p_MSEngine_field_0x8[2] = 0; /*0x5d1ab5*/
  *((_BYTE *)p_MSEngine_field_0x8 + 12) = 1; /*0x5d1ab8*/
  *((_BYTE *)p_MSEngine_field_0x8 + 13) = 0; /*0x5d1abb*/
  *p_MSEngine_field_0x8 = &VectorClass<TRect<int>>::`vftable'; /*0x5d1abe*/
  *((_DWORD *)this + 7) = 0; /*0x5d1ac4*/
  this->q008 = 0; /*0x5d1ac7*/
  *((_BYTE *)this + 36) = 1; /*0x5d1aca*/
  *((_BYTE *)this + 37) = 0; /*0x5d1acd*/
  *((_DWORD *)this + 6) = &DynamicVectorClass<MSAnim *>::`vftable'; /*0x5d1ad0*/
  this->q00B = 10; /*0x5d1ad6*/
  this->q00A = 0; /*0x5d1add*/
  this->IsAllocated = 0; /*0x5d1ae0*/
  this->q00E = 0; /*0x5d1ae3*/
  *((_BYTE *)this + 60) = 1; /*0x5d1ae6*/
  *((_BYTE *)this + 61) = 0; /*0x5d1ae9*/
  this->u32_C = &DynamicVectorClass<MSSfx *>::`vftable'; /*0x5d1aec*/
  *((_DWORD *)this + 17) = 10; /*0x5d1af2*/
  this->q010 = 0; /*0x5d1af9*/
  v3 = (void (__thiscall **)(void **, int, _DWORD))*p_MSEngine_field_0x8; /*0x5d1afc*/
  *(_DWORD *)this->__pad_0 = &MSEngine::`vftable'; /*0x5d1b01*/
  this->MSEngine_field_0x4 = 0; /*0x5d1b07*/
  v3[2](p_MSEngine_field_0x8, 20, 0); /*0x5d1b0a*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 6) + 12))((char *)this + 24); /*0x5d1b11*/
  (*(void (__thiscall **)(char *))(this->u32_C + 12))((char *)this + 48); /*0x5d1b18*/
  return this->__pad_0; /*0x5d1b1b*/
}



// ==== 0x005D1B30  MSEngine::Destruct  this=MSEngine  sig=csp ====
int __thiscall MSEngine::Destruct(MSEngine *this)
{
  int v2; // ebp
  int v3; // eax
  void *v4; // edi
  char *v5; // ebp
  int i; // edi
  void (__thiscall ***v7)(_DWORD, int); // ecx
  char *v8; // edi
  void (__thiscall **MSEngine_field_0x8)(void **); // edx
  void **p_MSEngine_field_0x8; // esi
  void *v11; // eax
  void *v12; // eax
  int result; // eax

  v2 = 0; /*0x5d1b37*/
  for ( *(_DWORD *)this->__pad_0 = &MSEngine::`vftable'; v2 < this->q010; ++v2 ) /*0x5d1b45*/
  {
    v3 = this->IsAllocated; /*0x5d1b47*/
    v4 = *(void **)(v3 + 4 * v2); /*0x5d1b4a*/
    if ( v4 ) /*0x5d1b4f*/
    {
      MSEngine::DestroyData(*(MSEngine **)(v3 + 4 * v2)); /*0x5d1b53*/
      __3_YAXPAX_Z(v4); /*0x5d1b59*/
    }
  }
  v5 = (char *)this + 48; /*0x5d1b6c*/
  (*(void (__thiscall **)(char *))(this->u32_C + 12))((char *)this + 48); /*0x5d1b71*/
  for ( i = 0; i < this->q00A; ++i ) /*0x5d1b7b*/
  {
    v7 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 7) + 4 * i); /*0x5d1b80*/
    if ( v7 ) /*0x5d1b85*/
      (**v7)(v7, 1); /*0x5d1b8b*/
  }
  v8 = (char *)this + 24; /*0x5d1b98*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 6) + 12))((char *)this + 24); /*0x5d1b9d*/
  MSEngine_field_0x8 = (void (__thiscall **)(void **))this->MSEngine_field_0x8; /*0x5d1ba0*/
  p_MSEngine_field_0x8 = &this->MSEngine_field_0x8; /*0x5d1ba3*/
  MSEngine_field_0x8[3](p_MSEngine_field_0x8); /*0x5d1ba8*/
  v11 = (void *)*((_DWORD *)v5 + 1); /*0x5d1bab*/
  *(_DWORD *)v5 = &VectorClass<MSSfx *>::`vftable'; /*0x5d1bae*/
  if ( v11 && v5[13] ) /*0x5d1bb9*/
  {
    __3_YAXPAX_Z(v11); /*0x5d1bbf*/
    *((_DWORD *)v5 + 1) = 0; /*0x5d1bc7*/
  }
  v5[13] = 0; /*0x5d1bca*/
  *((_DWORD *)v5 + 2) = 0; /*0x5d1bcd*/
  v12 = (void *)*((_DWORD *)v8 + 1); /*0x5d1bd0*/
  *(_DWORD *)v8 = &VectorClass<MSAnim *>::`vftable'; /*0x5d1bd3*/
  if ( v12 && v8[13] ) /*0x5d1bdd*/
  {
    __3_YAXPAX_Z(v12); /*0x5d1be3*/
    *((_DWORD *)v8 + 1) = 0; /*0x5d1beb*/
  }
  v8[13] = 0; /*0x5d1bee*/
  *((_DWORD *)v8 + 2) = 0; /*0x5d1bf1*/
  result = (int)p_MSEngine_field_0x8[1]; /*0x5d1bf4*/
  *p_MSEngine_field_0x8 = &VectorClass<TRect<int>>::`vftable'; /*0x5d1bf7*/
  if ( result && *((_BYTE *)p_MSEngine_field_0x8 + 13) ) /*0x5d1c01*/
  {
    __3_YAXPAX_Z((void *)result); /*0x5d1c07*/
    p_MSEngine_field_0x8[1] = 0; /*0x5d1c0f*/
  }
  *((_BYTE *)p_MSEngine_field_0x8 + 13) = 0; /*0x5d1c12*/
  p_MSEngine_field_0x8[2] = 0; /*0x5d1c15*/
  return result; /*0x5d1c18*/
}



// ==== 0x005D1C20  PriorityQueue::Add  this=PriorityQueue  sig=csp ====
int __thiscall PriorityQueue::Add(PriorityQueue *this, int a2)
{
  int v2; // eax
  PriorityQueue *v3; // esi
  int v4; // ecx
  int PriorityQueue_field_0x04; // eax
  int v6; // eax
  int v7; // edx

  if ( !a2 ) /*0x5d1c27*/
    return -1; /*0x5d1c27*/
  v2 = *((_DWORD *)this + 10); /*0x5d1c29*/
  v3 = this + 3; /*0x5d1c2c*/
  v4 = *((_DWORD *)this + 8); /*0x5d1c2f*/
  if ( v2 >= v4 ) /*0x5d1c34*/
  {
    if ( !BYTE1(v3[1].PriorityQueue_field_0x04) && v4 ) /*0x5d1c3f*/
      return -1; /*0x5d1c3f*/
    PriorityQueue_field_0x04 = v3[2].PriorityQueue_field_0x04; /*0x5d1c41*/
    if ( PriorityQueue_field_0x04 <= 0 /*0x5d1c51*/
      || !(*(unsigned __int8 (__thiscall **)(PriorityQueue *, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 8))(
            v3,
            v4 + PriorityQueue_field_0x04,
            0) )
    {
      return -1; /*0x5d1c7b*/
    }
  }
  v6 = *(_DWORD *)v3[2].__pad_0; /*0x5d1c58*/
  v7 = v3->PriorityQueue_field_0x04; /*0x5d1c5b*/
  *(_DWORD *)v3[2].__pad_0 = v6 + 1; /*0x5d1c61*/
  *(_DWORD *)(v7 + 4 * v6) = a2; /*0x5d1c68*/
  return (*(int (__thiscall **)(PriorityQueue *, int *))(*(_DWORD *)v3->__pad_0 + 16))(v3, &a2); /*0x5d1c77*/
}



// ==== 0x005D1C90  ObjectClass::UI_Load_5D1C90  this=ObjectClass  sig=csp ====
int __thiscall UI_Load_5D1C90(
        ObjectClass *this,
        int (__thiscall ***a2)(_DWORD, int),
        int (__thiscall ***a3)(_DWORD, int))
{
  int *p_nextArrayIndex; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // ecx

  p_nextArrayIndex = &this->?; /*0x5d1c94*/
  v4 = (*(int (__thiscall **)(int *, _DWORD))(this->? + 16))(&this->?, &a3); /*0x5d1ca5*/
  v5 = p_nextArrayIndex[2]; /*0x5d1ca7*/
  if ( p_nextArrayIndex[4] < v5 /*0x5d1cc9*/
    || (*((_BYTE *)p_nextArrayIndex + 13) || !v5)
    && (v6 = p_nextArrayIndex[5], v6 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_nextArrayIndex + 8))(p_nextArrayIndex, v5 + v6, 0) )
  {
    v7 = p_nextArrayIndex[4]; /*0x5d1cd0*/
    if ( v4 < v7 - 1 ) /*0x5d1cd8*/
      memcpy( /*0x5d1cf7*/
        (void *)(p_nextArrayIndex[1] + 4 * v4 + 8),
        (const void *)(p_nextArrayIndex[1] + 4 * (v4 + 1)),
        4 * (v7 + 0x3FFFFFFF * (v4 + 1)));
    *(_DWORD *)(p_nextArrayIndex[1] + 4 * v4 + 4) = a2; /*0x5d1d07*/
    ++p_nextArrayIndex[4]; /*0x5d1d0f*/
  }
  result = (int)a3; /*0x5d1d12*/
  a2 = a3; /*0x5d1d18*/
  if ( a3 ) /*0x5d1d1c*/
  {
    result = (*(int (__thiscall **)(int *, _DWORD))(*p_nextArrayIndex + 16))(p_nextArrayIndex, &a2); /*0x5d1d27*/
    if ( result != -1 ) /*0x5d1d2d*/
    {
      result = (*(int (__thiscall **)(int *, _DWORD))(*p_nextArrayIndex + 16))(p_nextArrayIndex, &a2); /*0x5d1d38*/
      if ( result != -1 ) /*0x5d1d3e*/
      {
        v9 = p_nextArrayIndex[4]; /*0x5d1d40*/
        if ( result < v9 ) /*0x5d1d45*/
        {
          v10 = v9 - 1; /*0x5d1d47*/
          for ( p_nextArrayIndex[4] = v10; /*0x5d1d4d*/
                result < p_nextArrayIndex[4];
                *(_DWORD *)(p_nextArrayIndex[1] + 4 * result - 4) = *(_DWORD *)(p_nextArrayIndex[1] + 4 * result) )
          {
            ++result; /*0x5d1d52*/
          }
        }
      }
      if ( a2 ) /*0x5d1d67*/
        return (**a2)(a2, 1); /*0x5d1d6d*/
    }
  }
  return result; /*0x5d1d6f*/
}



// ==== 0x005D1D80  Session::RemoveTeam  this=ObjectClass  sig=csp ====
int __thiscall Session::RemoveTeam(Session *this, int (__thiscall ***a2)(_DWORD, int))
{
  int result; // eax
  void **v3; // esi
  int v4; // ecx
  void *v5; // ecx

  result = (int)a2; /*0x5d1d80*/
  if ( a2 ) /*0x5d1d87*/
  {
    v3 = &this->field_18; /*0x5d1d8c*/
    result = (*((int (__thiscall **)(void **, _DWORD))this->field_18 + 4))(&this->field_18, &a2); /*0x5d1d96*/
    if ( result != -1 ) /*0x5d1d9c*/
    {
      result = (*((int (__thiscall **)(void **, _DWORD))*v3 + 4))(v3, &a2); /*0x5d1da7*/
      if ( result != -1 ) /*0x5d1dad*/
      {
        v4 = (int)v3[4]; /*0x5d1daf*/
        if ( result < v4 ) /*0x5d1db4*/
        {
          v5 = (void *)(v4 - 1); /*0x5d1db6*/
          for ( v3[4] = v5; result < (int)v3[4]; *((_DWORD *)v3[1] + result - 1) = *((_DWORD *)v3[1] + result) ) /*0x5d1dbc*/
            ++result; /*0x5d1dc1*/
        }
      }
      if ( a2 ) /*0x5d1dd6*/
        return (**a2)(a2, 1); /*0x5d1ddc*/
    }
  }
  return result; /*0x5d1dde*/
}



// ==== 0x005D1DF0  MSEngine::ProcessEvents  this=MSEngine  sig=csp ====
int __thiscall MSEngine::ProcessEvents(MSEngine *this, char a2, int a3)
{
  int v4; // ebx
  int result; // eax
  int v6; // ecx

  Timer::GetTicks(); /*0x5d1dfc*/
  v4 = a3; /*0x5d1e01*/
  while ( 1 ) /*0x5d1e19*/
  {
    result = (*(int (__thiscall **)(char *, char *))(*((_DWORD *)this + 6) + 16))((char *)this + 24, &a2); /*0x5d1e19*/
    if ( result == -1 ) /*0x5d1e1f*/
      break; /*0x5d1e1f*/
    v6 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * result); /*0x5d1e24*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6); /*0x5d1e29*/
    if ( (_BYTE)result || !v4 ) /*0x5d1e32*/
      break; /*0x5d1e32*/
    GameClass::FrameLoop((GameClass *)this, 1); /*0x5d1e38*/
  }
  return result; /*0x5d1e3f*/
}



// ==== 0x005D1E50  DSurface::Flip2  this=ObjectClass  sig=ida-proto ====
int sub_5D1E50()
{
  g_LoadScreenFlag = 1; /*0x5d1e55*/
  return DSurface::RenderToSurface(g_DSurface_Hidden); /*0x5d1e62*/
}



// ==== 0x005D1E70  DSurface::RenderToSurface  this=DSurface  sig=csp ====
int __thiscall DSurface::RenderToSurface(DSurface *this, int *a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int i; // ebp
  int v12; // ecx
  int *v13; // eax
  int result; // eax
  int j; // ebp
  int v16; // ecx
  void (__thiscall ***v17)(_DWORD, int); // ecx
  int DSurface_field_0x28; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // [esp+3Ch] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-1Ch]
  int v23; // [esp+44h] [ebp-18h]
  int v24; // [esp+48h] [ebp-14h]
  _BYTE v25[16]; // [esp+4Ch] [ebp-10h] BYREF

  if ( g_LoadScreenFlag == 1 ) /*0x5d1e83*/
  {
    g_LoadScreenFlag = 0; /*0x5d1e89*/
    (*(void (__thiscall **)(int *, _DWORD))(*a2 + 24))(a2, 0); /*0x5d1e96*/
    v3 = (int *)(*(int (__thiscall **)(DSurface *, _BYTE *))(DSurface_Alternate->DSurface_field_0x0 + 120))( /*0x5d1ea6*/
                  DSurface_Alternate,
                  v25);
    v21 = *v3; /*0x5d1eab*/
    v22 = v3[1]; /*0x5d1eb2*/
    v23 = v3[2]; /*0x5d1eb9*/
    v4 = v3[3]; /*0x5d1ebf*/
    v5 = *a2; /*0x5d1ec2*/
    v24 = v4; /*0x5d1ec4*/
    v6 = (*(int (__thiscall **)(int *))(v5 + 124))(a2); /*0x5d1ec8*/
    v7 = *a2; /*0x5d1ed6*/
    v21 = (v6 - v23) / 2; /*0x5d1eda*/
    v8 = (*(int (__thiscall **)(int *))(v7 + 128))(a2); /*0x5d1ede*/
    v9 = *a2; /*0x5d1ee8*/
    v22 = (v8 - v24) / 2; /*0x5d1ef9*/
    v10 = (*(int (__stdcall **)(_BYTE *, DSurface *, int *, _DWORD, int))(DSurface_Alternate->DSurface_field_0x0 + 120))( /*0x5d1f0c*/
            v25,
            DSurface_Alternate,
            &v21,
            0,
            1);
    (*(void (__thiscall **)(int *, int))(v9 + 8))(a2, v10); /*0x5d1f12*/
    for ( i = 0; i < this->DSurface_field_0x28; ++i ) /*0x5d1f1c*/
    {
      v12 = *(_DWORD *)(this->DSurface_field_0x1C + 4 * i); /*0x5d1f24*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v12 + 20))(v12, a2, 0); /*0x5d1f29*/
    }
    this->DSurface_field_0x4 = 0; /*0x5d1f38*/
    v13 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*a2 + 120))(a2, v25); /*0x5d1f44*/
    Surface::CopyRect((XSurface *)this, v13); /*0x5d1f4a*/
    (*(void (__thiscall **)(DSurface *, int *))(this->DSurface_field_0x0 + 4))(this, a2); /*0x5d1f54*/
  }
  result = this->DSurface_field_0x28; /*0x5d1f57*/
  for ( j = 0; j < result; ++j ) /*0x5d1f5e*/
  {
    v16 = *(_DWORD *)(this->DSurface_field_0x1C + 4 * j); /*0x5d1f63*/
    if ( (*(unsigned __int8 (__thiscall **)(int, int *, int *))(*(_DWORD *)v16 + 16))(v16, a2, &v21) == 1 ) /*0x5d1f73*/
    {
      v17 = *(void (__thiscall ****)(_DWORD, int))(this->DSurface_field_0x1C + 4 * j); /*0x5d1f78*/
      if ( v17 ) /*0x5d1f7d*/
        (**v17)(v17, 1); /*0x5d1f83*/
      DSurface_field_0x28 = this->DSurface_field_0x28; /*0x5d1f85*/
      if ( j < DSurface_field_0x28 ) /*0x5d1f8a*/
      {
        v19 = DSurface_field_0x28 - 1; /*0x5d1f8c*/
        v20 = j; /*0x5d1f8f*/
        for ( this->DSurface_field_0x28 = v19; /*0x5d1f96*/
              v20 < this->DSurface_field_0x28;
              *(_DWORD *)(this->DSurface_field_0x1C + 4 * v20 - 4) = *(_DWORD *)(this->DSurface_field_0x1C + 4 * v20) )
        {
          ++v20; /*0x5d1f9b*/
        }
      }
    }
    Surface::CopyRect((XSurface *)this, &v21); /*0x5d1fb1*/
    result = this->DSurface_field_0x28; /*0x5d1fb6*/
  }
  return result; /*0x5d1fbe*/
}



// ==== 0x005D1FD0  Surface::CopyRect  this=Surface  sig=csp ====
_DWORD *__thiscall Surface::CopyRect(XSurface *this, int *a2)
{
  _DWORD *result; // eax
  int v4; // ebx
  int Width; // ebp
  int v6; // edi
  int v7; // ecx
  int *v8; // eax
  int v9; // edx
  int v10; // edx
  int *v11; // ebp
  int v12; // esi
  int v13; // ebx
  int v14; // ebp
  int v15; // edx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // edi
  _DWORD *v21; // edx
  int v22; // ecx
  int v23; // ebx
  int *LockCount; // ebp
  int v25; // edi
  int v26; // esi
  int v27; // edx
  int v28; // esi
  int v29; // edx
  int v30; // edx
  int v31; // eax
  int *v32; // ecx
  int v33; // edx
  int v34; // [esp+10h] [ebp-2Ch]
  int v35; // [esp+10h] [ebp-2Ch]
  int v37; // [esp+18h] [ebp-24h]
  int v38; // [esp+18h] [ebp-24h]
  int v39; // [esp+1Ch] [ebp-20h]
  int v40; // [esp+1Ch] [ebp-20h]
  int v41; // [esp+20h] [ebp-1Ch]
  int v42; // [esp+24h] [ebp-18h]
  int v43; // [esp+28h] [ebp-14h]
  int v44; // [esp+2Ch] [ebp-10h] BYREF
  int v45; // [esp+30h] [ebp-Ch]
  int v46; // [esp+34h] [ebp-8h]
  _DWORD *v47; // [esp+38h] [ebp-4h]
  char v48; // [esp+40h] [ebp+4h]
  int *v49; // [esp+40h] [ebp+4h]
  unsigned int v50; // [esp+40h] [ebp+4h]

  result = this->__pad_0; /*0x5d1fdc*/
  v4 = a2[2]; /*0x5d1fde*/
  v37 = v4; /*0x5d1fe8*/
  if ( v4 <= 0 ) /*0x5d1fec*/
    return result; /*0x5d1fec*/
  v39 = a2[3]; /*0x5d1ff7*/
  if ( v39 <= 0 ) /*0x5d1ffb*/
    return result; /*0x5d1ffb*/
  Width = this->Width; /*0x5d2001*/
  v34 = 0; /*0x5d2004*/
  v41 = Width; /*0x5d200a*/
  if ( Width <= 0 ) /*0x5d200e*/
  {
LABEL_18:
    if ( Width >= result[4] ) /*0x5d207c*/
    {
      v22 = 0; /*0x5d2165*/
      v50 = -1; /*0x5d2169*/
      v44 = 0; /*0x5d2171*/
      v45 = 0; /*0x5d2175*/
      v46 = 0; /*0x5d2179*/
      v47 = 0; /*0x5d217d*/
      v35 = 0; /*0x5d2181*/
      if ( Width > 0 ) /*0x5d2185*/
      {
        v23 = *a2; /*0x5d218b*/
        v42 = *a2; /*0x5d2191*/
        v43 = *a2 + v37; /*0x5d219b*/
        v38 = a2[1]; /*0x5d21a3*/
        v40 = v39 + v38; /*0x5d21a9*/
        LockCount = (int *)this->LockCount; /*0x5d21b1*/
        while ( 1 ) /*0x5d21c0*/
        {
          v25 = LockCount[1]; /*0x5d21c0*/
          v26 = *LockCount + LockCount[2]; /*0x5d21c6*/
          v27 = v25 + LockCount[3]; /*0x5d21c8*/
          if ( v23 >= *LockCount ) /*0x5d21cc*/
            v23 = *LockCount; /*0x5d21ce*/
          if ( v38 < v25 ) /*0x5d21d6*/
            v25 = v38; /*0x5d21d8*/
          if ( v43 > v26 ) /*0x5d21e0*/
            v26 = v43; /*0x5d21e2*/
          v28 = v26 - v23; /*0x5d21e8*/
          if ( v40 > v27 ) /*0x5d21ec*/
            v27 = v40; /*0x5d21ee*/
          v29 = v27 - v25; /*0x5d21f0*/
          if ( v28 * v29 < v50 ) /*0x5d21fb*/
          {
            v22 = v35; /*0x5d21fd*/
            v50 = v28 * v29; /*0x5d2201*/
            v44 = v23; /*0x5d2205*/
            v45 = v25; /*0x5d2209*/
            v46 = v28; /*0x5d220d*/
            v47 = (_DWORD *)v29; /*0x5d2211*/
          }
          LockCount += 4; /*0x5d221e*/
          if ( ++v35 >= v41 ) /*0x5d2227*/
            break; /*0x5d2227*/
          v23 = v42; /*0x5d21b6*/
        }
        result = this->__pad_0; /*0x5d2229*/
      }
      v30 = result[3]; /*0x5d222d*/
      v31 = v45; /*0x5d2230*/
      v32 = (int *)(v30 + 16 * v22); /*0x5d2237*/
      *v32 = v44; /*0x5d223d*/
      v33 = v46; /*0x5d223f*/
      v32[1] = v31; /*0x5d2243*/
      result = v47; /*0x5d2246*/
      v32[2] = v33; /*0x5d224a*/
      v32[3] = (int)result; /*0x5d224d*/
    }
    else
    {
      v11 = (int *)(result[3] + 16 * Width); /*0x5d208a*/
      *v11 = *a2; /*0x5d208d*/
      v11[1] = a2[1]; /*0x5d2093*/
      v11[2] = a2[2]; /*0x5d2099*/
      v11[3] = a2[3]; /*0x5d20a0*/
      ++result[1]; /*0x5d20a8*/
    }
    return result; /*0x5d20af*/
  }
  v6 = *a2; /*0x5d2010*/
  v7 = a2[1]; /*0x5d2012*/
  v8 = (int *)result[3]; /*0x5d2015*/
  while ( 1 ) /*0x5d2020*/
  {
    v48 = 0; /*0x5d2020*/
    v9 = *v8; /*0x5d2024*/
    if ( v6 >= *v8 ) /*0x5d2028*/
    {
      if ( v9 + v8[2] < v6 ) /*0x5d2039*/
        goto LABEL_11; /*0x5d2039*/
    }
    else if ( v6 + v4 < v9 ) /*0x5d202e*/
    {
      goto LABEL_11; /*0x5d202e*/
    }
    v48 = 1; /*0x5d203b*/
LABEL_11:
    v10 = v8[1]; /*0x5d2040*/
    if ( v7 >= v10 ) /*0x5d2045*/
    {
      if ( v10 + v8[3] < v7 ) /*0x5d205a*/
        goto LABEL_16; /*0x5d205a*/
    }
    else if ( v7 + v39 < v10 ) /*0x5d204f*/
    {
      goto LABEL_16; /*0x5d204f*/
    }
    if ( v48 == 1 ) /*0x5d2061*/
      break; /*0x5d2061*/
LABEL_16:
    v8 += 4; /*0x5d2063*/
    if ( ++v34 >= Width ) /*0x5d2071*/
    {
      result = this->__pad_0; /*0x5d2073*/
      goto LABEL_18; /*0x5d2073*/
    }
    v4 = v37; /*0x5d201a*/
  }
  v12 = *v8; /*0x5d20b6*/
  v13 = v8[1]; /*0x5d20b8*/
  v14 = v6 + v37; /*0x5d20bb*/
  v49 = (int *)(v7 + v39); /*0x5d20c4*/
  v15 = *v8 + v8[2]; /*0x5d20ce*/
  v16 = v13 + v8[3]; /*0x5d20d0*/
  if ( v6 < v12 ) /*0x5d20d4*/
    v12 = v6; /*0x5d20d6*/
  v44 = v12; /*0x5d20da*/
  if ( v7 < v13 ) /*0x5d20de*/
    v13 = v7; /*0x5d20e0*/
  v45 = v13; /*0x5d20e4*/
  if ( v14 <= v15 ) /*0x5d20e8*/
    v46 = v15 - v12; /*0x5d20f4*/
  else
    v46 = v14 - v12; /*0x5d20ec*/
  if ( (int)v49 <= v16 ) /*0x5d20fe*/
    v47 = (_DWORD *)(v16 - v13); /*0x5d210a*/
  else
    v47 = (int *)((char *)v49 - v13); /*0x5d2102*/
  v17 = v34; /*0x5d2116*/
  this->Width = v41 - 1; /*0x5d211d*/
  if ( v34 < v41 - 1 ) /*0x5d2120*/
  {
    v18 = 16 * v34; /*0x5d2124*/
    do /*0x5d214f*/
    {
      v19 = this->LockCount; /*0x5d2127*/
      v20 = (_DWORD *)(v18 + v19 + 16); /*0x5d212a*/
      v21 = (_DWORD *)(v18 + v19); /*0x5d212e*/
      ++v17; /*0x5d2130*/
      v18 += 16; /*0x5d2131*/
      *v21 = *v20; /*0x5d2136*/
      v21[1] = v20[1]; /*0x5d213b*/
      v21[2] = v20[2]; /*0x5d2141*/
      v21[3] = v20[3]; /*0x5d2147*/
    }
    while ( v17 < this->Width ); /*0x5d214f*/
  }
  return Surface::CopyRect(this, &v44); /*0x5d208c*/
}



// ==== 0x005D2260  GameClass::loadScenarioFiles  this=GameClass  sig=csp ====
int __thiscall GameClass::loadScenarioFiles(GameClass *this, int a2)
{
  int result; // eax
  int v4; // ebx
  int v5; // edi
  int *v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+1Ch] [ebp-24h]
  int v8; // [esp+20h] [ebp-20h] BYREF
  int v9; // [esp+24h] [ebp-1Ch]
  int v10; // [esp+28h] [ebp-18h]
  int v11; // [esp+2Ch] [ebp-14h]
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  result = this->GameClass_field_0x4[0]; /*0x5d2267*/
  if ( result > 0 ) /*0x5d226c*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x5d227e*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5d228f*/
    v4 = a2; /*0x5d229b*/
    if ( stru_887598.lineTrailer ) /*0x5d22a1*/
      (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x5d22a8*/
        stru_887598.lineTrailer,
        a2,
        0);
    result = this->GameClass_field_0x4[0]; /*0x5d22ab*/
    v5 = 0; /*0x5d22af*/
    if ( result > 0 ) /*0x5d22b3*/
    {
      result = 0; /*0x5d22b5*/
      v7 = 0; /*0x5d22b8*/
      do /*0x5d231d*/
      {
        v6 = (int *)(*(_DWORD *)&this->__pad_8[4] + result); /*0x5d22c7*/
        v8 = *v6; /*0x5d22ce*/
        v9 = v6[1]; /*0x5d22d5*/
        v10 = v6[2]; /*0x5d22dc*/
        v11 = v6[3]; /*0x5d22e9*/
        v4 = a2; /*0x5d22f3*/
        v8 += Rect.left; /*0x5d22f7*/
        v9 += Rect.top; /*0x5d2301*/
        (*((void (__thiscall **)(DSurface *, int *, int, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 + 2))( /*0x5d2309*/
          g_DSurface_Primary,
          &v8,
          a2,
          v6,
          0,
          1);
        ++v5; /*0x5d2313*/
        result = v7 + 16; /*0x5d2314*/
        v7 += 16; /*0x5d2319*/
      }
      while ( v5 < this->GameClass_field_0x4[0] ); /*0x5d231d*/
    }
    this->GameClass_field_0x4[0] = 0; /*0x5d2320*/
    if ( stru_887598.lineTrailer ) /*0x5d2330*/
      return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x5d2337*/
               stru_887598.lineTrailer,
               v4,
               0);
  }
  return result; /*0x5d233a*/
}



// ==== 0x005D2350  sub_5D2350  this=-  sig=csp ====
int __stdcall sub_5D2350(int a1, int *a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  _DWORD v5[4]; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  result = a2[2]; /*0x5d2359*/
  if ( result > 0 ) /*0x5d235e*/
  {
    result = a2[3]; /*0x5d2364*/
    if ( result > 0 ) /*0x5d2369*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5d237b*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5d238c*/
      if ( dword_887640 ) /*0x5d239e*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_887640 + 60))(dword_887640, a1, 0); /*0x5d23a5*/
      v3 = *a2; /*0x5d23af*/
      v4 = a2[1]; /*0x5d23b3*/
      v5[2] = a2[2]; /*0x5d23b9*/
      v5[3] = a2[3]; /*0x5d23c6*/
      v5[1] = Rect.top + v4; /*0x5d23ce*/
      v5[0] = Rect.left + v3; /*0x5d23de*/
      result = (*(int (__thiscall **)(int, _DWORD *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x5d23e5*/
                 g_DSurface_Primary,
                 v5,
                 a1,
                 a2,
                 0,
                 1);
      if ( dword_887640 ) /*0x5d23f1*/
        return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_887640 + 64))(dword_887640, a1, 0); /*0x5d23f8*/
    }
  }
  return result; /*0x5d23fb*/
}



// ==== 0x005D2410  GameClass::FrameLoop  this=GameClass  sig=csp ====
int __thiscall GameClass::FrameLoop(GameClass *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v6; // eax
  bool v7; // zf
  int result; // eax
  DDraw *v9; // [esp+0h] [ebp-28h]
  int Ticks; // [esp+10h] [ebp-18h]
  int v11; // [esp+18h] [ebp-10h]

  Ticks = Timer::GetTicks(); /*0x5d2428*/
  v11 = 1; /*0x5d242c*/
  do /*0x5d2511*/
  {
    do /*0x5d24dc*/
    {
      Event::Dispatch(); /*0x5d2437*/
      (*(void (__thiscall **)(GameClass *))(*(_DWORD *)this->__pad_0 + 8))(this); /*0x5d2440*/
      DDraw::WaitForIdle(v9); /*0x5d2443*/
      DSurface::RenderToSurface((DSurface *)this, (int *)g_DSurface_Hidden); /*0x5d2451*/
      GameClass::loadScenarioFiles(this, (int)g_DSurface_Hidden); /*0x5d245f*/
      MessageLoop(); /*0x5d2464*/
      if ( !stru_A8EB00.?[412] ) /*0x5d2470*/
      {
        if ( Ticks != -1 ) /*0x5d2478*/
        {
          v3 = Timer::GetTicks() - Ticks; /*0x5d2487*/
          if ( v3 >= v11 ) /*0x5d248d*/
            v4 = 0; /*0x5d2493*/
          else
            v4 = v11 - v3; /*0x5d248f*/
          v11 = v4; /*0x5d2495*/
        }
        DDraw::HandleSuspend((DDraw *)this); /*0x5d249f*/
        Ticks = Timer::GetTicks(); /*0x5d24b3*/
      }
      Sleep(0); /*0x5d24b9*/
      v5 = v11; /*0x5d24bf*/
      if ( Ticks != -1 ) /*0x5d24c5*/
      {
        v6 = Timer::GetTicks() - Ticks; /*0x5d24d0*/
        if ( v6 >= v11 ) /*0x5d24d6*/
          break; /*0x5d24d6*/
        v5 = v11 - v6; /*0x5d24d8*/
      }
    }
    while ( v5 > 0 ); /*0x5d24dc*/
    Ticks = Timer::GetTicks(); /*0x5d24e2*/
    result = a2 - 1; /*0x5d2504*/
    v7 = a2 == 1; /*0x5d2504*/
    v11 = 1; /*0x5d2509*/
    --a2; /*0x5d250d*/
  }
  while ( !v7 ); /*0x5d2511*/
  return result; /*0x5d2517*/
}



// ==== 0x005D2530  DDraw::HandleSuspend  this=DDraw  sig=csp ====
int __thiscall DDraw::HandleSuspend(DDraw *this)
{
  int result; // eax
  int i; // edi
  int v4; // ecx
  int j; // edi
  int v6; // ecx

  LOBYTE(result) = stru_A8EB00.?[412]; /*0x5d2530*/
  if ( stru_A8EB00.?[412] != 1 ) /*0x5d253b*/
  {
    Debug::Log(); /*0x5d2546*/
    for ( i = 0; i < this->u32_28; ++i ) /*0x5d2555*/
    {
      v4 = *(_DWORD *)(this->u32_1C + 4 * i); /*0x5d255a*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x5d255f*/
    }
    while ( !stru_A8EB00.?[412] ) /*0x5d2571*/
    {
      Debug::Log(); /*0x5d257e*/
      Sleep(0x1F4u); /*0x5d258b*/
      MessageLoop(); /*0x5d258d*/
    }
    Debug::Log(); /*0x5d25a0*/
    result = this->u32_28; /*0x5d25a5*/
    for ( j = 0; j < result; ++j ) /*0x5d25af*/
    {
      v6 = *(_DWORD *)(this->u32_1C + 4 * j); /*0x5d25b4*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6); /*0x5d25b9*/
      result = this->u32_28; /*0x5d25bc*/
    }
  }
  return result; /*0x5d25c4*/
}



// ==== 0x005D25D0  ObjectClass::method_5D25D0  this=ObjectClass  sig=csp ====
char __thiscall sub_5D25D0(ObjectClass *this, char *Source, int a3)
{
  Audio *v4; // eax
  char **v5; // edi
  BombClass *attachedBomb; // ecx
  int v7; // eax
  int v8; // eax
  TagClass *attachedTag; // edx

  if ( !Source || !a3 ) /*0x5d25e3*/
    return 0; /*0x5d25e3*/
  v4 = (Audio *)__2_YAPAXI_Z(0xCu); /*0x5d25e7*/
  v5 = v4 ? Audio::SetSoundFileName(v4, Source, a3) : 0;
  attachedBomb = this->attachedBomb; /*0x5d2602*/
  if ( this->ambientSoundController[1] >= (int)attachedBomb ) /*0x5d260d*/
  {
    if ( !BYTE1(this->ambientSoundController[0]) && attachedBomb ) /*0x5d2618*/
      return 0; /*0x5d2618*/
    v7 = this->ambientSoundController[2]; /*0x5d261a*/
    if ( v7 <= 0 /*0x5d262a*/
      || !((unsigned __int8 (__thiscall *)(ObjectClass **, char *, _DWORD))this->nextObject->?)(
            &this->nextObject,
            (char *)attachedBomb + v7,
            0) )
    {
      return 0; /*0x5d264a*/
    }
  }
  v8 = this->ambientSoundController[1]; /*0x5d2631*/
  attachedTag = this->attachedTag; /*0x5d2634*/
  this->ambientSoundController[1] = v8 + 1; /*0x5d263a*/
  *((_DWORD *)&attachedTag->AbstractClass + v8) = v5; /*0x5d263d*/
  return 1; /*0x5d2640*/
}



// ==== 0x005D2650  ObjectClass::method_5D2650  this=ObjectClass  sig=csp ====
void __thiscall sub_5D2650(ObjectClass *this, void *a2, int a3)
{
  int v4; // esi
  int v5; // eax

  if ( a2 ) /*0x5d265c*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x5d265e*/
    {
      v4 = 0; /*0x5d266a*/
      if ( this->ambientSoundController[1] > 0 ) /*0x5d266e*/
      {
        while ( _strcmpi((char *)a2, **((char ***)&this->attachedTag->AbstractClass + v4)) ) /*0x5d2684*/
        {
          if ( ++v4 >= this->ambientSoundController[1] ) /*0x5d268c*/
            return; /*0x5d268c*/
        }
        LOWORD(v5) = Math::RoundToInt((double)a3 * *(float *)&stru_A8EB00.ObjectTypeClass[38]); /*0x5d269f*/
        nullsub_192(v5); /*0x5d26a7*/
      }
    }
  }
}



// ==== 0x005D26C0  Team::ReleaseAll  this=ObjectClass  sig=csp ====
int __thiscall Team::ReleaseAll(Team *this, int a2)
{
  int v3; // esi
  int result; // eax
  int v5; // ecx

  v3 = 0; /*0x5d26c4*/
  result = *(_DWORD *)&this->__pad_0[40]; /*0x5d26c6*/
  if ( result > 0 ) /*0x5d26cb*/
  {
    do /*0x5d26e4*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&this->__pad_0[28] + 4 * v3); /*0x5d26d6*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, a2); /*0x5d26db*/
      result = *(_DWORD *)&this->__pad_0[40]; /*0x5d26de*/
      ++v3; /*0x5d26e1*/
    }
    while ( v3 < result ); /*0x5d26e4*/
  }
  return result; /*0x5d26e7*/
}



// ==== 0x005D26F0  MSEngine::Release  this=MSEngine  sig=csp ====
void MSEngine_Destru::Release(MSEngine *this)
{
  ; /*0x5d26f0*/
}



// ==== 0x005D2700  MSEngine::QueryInterface  this=MSEngine  sig=csp ====
_DWORD *__thiscall MSEngine_Destru::QueryInterface(MSEngine *this, char a2)
{
  MSEngine::Destruct(this); /*0x5d2703*/
  if ( (a2 & 1) != 0 ) /*0x5d270d*/
    __3_YAXPAX_Z(this); /*0x5d2710*/
  return this->__pad_0; /*0x5d271a*/
}



// ==== 0x005D2720  _DynamicVectorClass_PAVMSAnim::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::Destroy(_DynamicVectorClass_PAVMSAnim *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d2726*/
  this->m_10 = 0; /*0x5d2729*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d2730*/
  {
    __3_YAXPAX_Z(v2); /*0x5d2736*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d273e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2741*/
  this->m_8 = 0; /*0x5d2744*/
}



// ==== 0x005D2750  _DynamicVectorClass_PAVMSAnim::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfx::GetItemIndex(_DynamicVectorClass_PAVMSAnim *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d2750*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d2765*/
  else
    return 0; /*0x5d2757*/
}



// ==== 0x005D2770  _VectorClass_PAVMSAnim::Seek  this=VectorClass  sig=csp ====
int __thiscall CampaignProperties_WorldDominationTour_22::Seek(_VectorClass_PAVMSAnim *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d277a*/
}



// ==== 0x005D2780  _DynamicVectorClass_PAVMSSfx::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_Point2D::Destroy(_DynamicVectorClass_PAVMSSfx *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d2786*/
  this->m_10 = 0; /*0x5d2789*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d2790*/
  {
    __3_YAXPAX_Z(v2); /*0x5d2796*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d279e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d27a1*/
  this->m_8 = 0; /*0x5d27a4*/
}



// ==== 0x005D27B0  _DynamicVectorClass_PAVMSSfx::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_Point2D::GetItemIndex(_DynamicVectorClass_PAVMSSfx *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d27b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d27c5*/
  else
    return 0; /*0x5d27b7*/
}



// ==== 0x005D27D0  _VectorClass_PAVMSSfx::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::Get(_VectorClass_PAVMSSfx *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d27da*/
}



// ==== 0x005D27E0  _VectorClass_PAVMSAnim::FindItemIndex  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::FindItemIndex(_VectorClass_PAVMSAnim *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d27e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d27ed*/
  {
    v3 = 0; /*0x5d27ef*/
    if ( m_8 <= 0 ) /*0x5d27f3*/
      return 1; /*0x5d2813*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d27f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d27fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d2804*/
    {
      ++v3; /*0x5d2806*/
      ++v4; /*0x5d2807*/
      if ( v3 >= m_8 ) /*0x5d280c*/
        return 1; /*0x5d280c*/
    }
  }
  return 0; /*0x5d280e*/
}



// ==== 0x005D2820  _VectorClass_PAVMSAnim::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::SetCapacity(_VectorClass_PAVMSAnim *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d282c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d2836*/
    if ( a3 ) /*0x5d283c*/
      v4 = a3; /*0x5d2852*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d284e*/
    LOBYTE(this->m_C) = 1; /*0x5d2856*/
    if ( v4 ) /*0x5d285a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d2865*/
      {
        m_8 = this->m_8; /*0x5d286c*/
        if ( a2 < m_8 ) /*0x5d2871*/
          m_8 = a2; /*0x5d2873*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d2879*/
          ++i; /*0x5d287e*/
        if ( BYTE1(this->m_C) ) /*0x5d288b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d2896*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d289e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d28a7*/
      this->m_8 = a2; /*0x5d28af*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d28b2*/
      return 1; /*0x5d28b8*/
    }
    else
    {
      return 0; /*0x5d285f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSAnim *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d28c2*/
    return 1; /*0x5d28c8*/
  }
}



// ==== 0x005D28D0  _VectorClass_PAVMSAnim::Destroy_0  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::Destroy_0(_VectorClass_PAVMSAnim *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d28dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d28e3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d28eb*/
  }
  BYTE1(this->m_C) = 0; /*0x5d28ee*/
  this->m_8 = 0; /*0x5d28f1*/
}



// ==== 0x005D2900  _VectorClass_PAVMSAnim::Read  this=VectorClass  sig=csp ====
int __thiscall CampaignProperties_WorldDominationTour_22::Read(_VectorClass_PAVMSAnim *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d2900*/
    return 0; /*0x5d2908*/
  m_8 = this->m_8; /*0x5d290e*/
  result = 0; /*0x5d2911*/
  if ( m_8 <= 0 ) /*0x5d2915*/
    return -1; /*0x5d292c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d291b*/
  {
    if ( ++result >= m_8 ) /*0x5d292a*/
      return -1; /*0x5d292a*/
  }
  return result; /*0x5d290a*/
}



// ==== 0x005D2940  _VectorClass_PAVMSAnim::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall CampaignProperties_WorldDominationTour_22::Write(_VectorClass_PAVMSAnim *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d2940*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d2955*/
  else
    return 0; /*0x5d2947*/
}



// ==== 0x005D2960  _DynamicVectorClass_PAVMSAnim::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::SetCapacity_0(_DynamicVectorClass_PAVMSAnim *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d296c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d2972*/
    if ( a3 ) /*0x5d2978*/
      v4 = a3; /*0x5d298e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d298a*/
    LOBYTE(this->m_C) = 1; /*0x5d2992*/
    if ( !v4 ) /*0x5d2996*/
      return 0; /*0x5d2a0a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d2998*/
    {
      m_8 = this->m_8; /*0x5d299f*/
      if ( a2 < m_8 ) /*0x5d29a4*/
        m_8 = a2; /*0x5d29a6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d29ac*/
        ++i; /*0x5d29b1*/
      if ( BYTE1(this->m_C) ) /*0x5d29be*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d29c9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d29d1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d29da*/
    this->m_8 = a2; /*0x5d29e2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d29e5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSAnim *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d29ee*/
  }
  v7 = this->m_8; /*0x5d29f1*/
  if ( v7 < this->m_10 ) /*0x5d29f9*/
    this->m_10 = v7; /*0x5d29fb*/
  return 1; /*0x5d29fe*/
}



// ==== 0x005D2A10  _DynamicVectorClass_PAVMSAnim::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::FindItemIndex_0(_DynamicVectorClass_PAVMSAnim *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d2a10*/
  result = 0; /*0x5d2a13*/
  if ( m_10 <= 0 ) /*0x5d2a18*/
    return -1; /*0x5d2a2f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d2a1e*/
  {
    if ( ++result >= m_10 ) /*0x5d2a2d*/
      return -1; /*0x5d2a2d*/
  }
  return result; /*0x5d2a32*/
}



// ==== 0x005D2A40  _VectorClass_PAVMSSfx::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::Add(_VectorClass_PAVMSSfx *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d2a42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d2a4d*/
  {
    v3 = 0; /*0x5d2a4f*/
    if ( m_8 <= 0 ) /*0x5d2a53*/
      return 1; /*0x5d2a73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d2a55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d2a5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d2a64*/
    {
      ++v3; /*0x5d2a66*/
      ++v4; /*0x5d2a67*/
      if ( v3 >= m_8 ) /*0x5d2a6c*/
        return 1; /*0x5d2a6c*/
    }
  }
  return 0; /*0x5d2a6e*/
}



// ==== 0x005D2A80  _VectorClass_PAVMSSfx::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::Release(_VectorClass_PAVMSSfx *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d2a8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d2a96*/
    if ( a3 ) /*0x5d2a9c*/
      v4 = a3; /*0x5d2ab2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d2aae*/
    LOBYTE(this->m_C) = 1; /*0x5d2ab6*/
    if ( v4 ) /*0x5d2aba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d2ac5*/
      {
        m_8 = this->m_8; /*0x5d2acc*/
        if ( a2 < m_8 ) /*0x5d2ad1*/
          m_8 = a2; /*0x5d2ad3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d2ad9*/
          ++i; /*0x5d2ade*/
        if ( BYTE1(this->m_C) ) /*0x5d2aeb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d2af6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d2afe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d2b07*/
      this->m_8 = a2; /*0x5d2b0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d2b12*/
      return 1; /*0x5d2b18*/
    }
    else
    {
      return 0; /*0x5d2abf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMSSfx *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d2b22*/
    return 1; /*0x5d2b28*/
  }
}



// ==== 0x005D2B30  _VectorClass_PAVMSSfx::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::Remove(_VectorClass_PAVMSSfx *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d2b3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d2b43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2b4b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2b4e*/
  this->m_8 = 0; /*0x5d2b51*/
}



// ==== 0x005D2B60  _VectorClass_PAVMSSfx::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::GetSize(_VectorClass_PAVMSSfx *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d2b60*/
    return 0; /*0x5d2b68*/
  m_8 = this->m_8; /*0x5d2b6e*/
  result = 0; /*0x5d2b71*/
  if ( m_8 <= 0 ) /*0x5d2b75*/
    return -1; /*0x5d2b8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d2b7b*/
  {
    if ( ++result >= m_8 ) /*0x5d2b8a*/
      return -1; /*0x5d2b8a*/
  }
  return result; /*0x5d2b6a*/
}



// ==== 0x005D2BA0  _VectorClass_PAVMSSfx::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfx::GetCapacity(_VectorClass_PAVMSSfx *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d2ba0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d2bb5*/
  else
    return 0; /*0x5d2ba7*/
}



// ==== 0x005D2BC0  _DynamicVectorClass_PAVMSSfx::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Point2D::SetCapacity(_DynamicVectorClass_PAVMSSfx *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d2bcc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d2bd2*/
    if ( a3 ) /*0x5d2bd8*/
      v4 = a3; /*0x5d2bee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d2bea*/
    LOBYTE(this->m_C) = 1; /*0x5d2bf2*/
    if ( !v4 ) /*0x5d2bf6*/
      return 0; /*0x5d2c6a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d2bf8*/
    {
      m_8 = this->m_8; /*0x5d2bff*/
      if ( a2 < m_8 ) /*0x5d2c04*/
        m_8 = a2; /*0x5d2c06*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d2c0c*/
        ++i; /*0x5d2c11*/
      if ( BYTE1(this->m_C) ) /*0x5d2c1e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d2c29*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d2c31*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d2c3a*/
    this->m_8 = a2; /*0x5d2c42*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d2c45*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMSSfx *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d2c4e*/
  }
  v7 = this->m_8; /*0x5d2c51*/
  if ( v7 < this->m_10 ) /*0x5d2c59*/
    this->m_10 = v7; /*0x5d2c5b*/
  return 1; /*0x5d2c5e*/
}



// ==== 0x005D2C70  _DynamicVectorClass_PAVMSSfx::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_Point2D::FindItemIndex(_DynamicVectorClass_PAVMSSfx *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d2c70*/
  result = 0; /*0x5d2c73*/
  if ( m_10 <= 0 ) /*0x5d2c78*/
    return -1; /*0x5d2c8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d2c7e*/
  {
    if ( ++result >= m_10 ) /*0x5d2c8d*/
      return -1; /*0x5d2c8d*/
  }
  return result; /*0x5d2c92*/
}



// ==== 0x005D2CA0  _VectorClass_PAVMSAnim::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22::QueryInterface(_VectorClass_PAVMSAnim *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2ca3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnim *>::`vftable'; /*0x5d2ca6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2cb0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2cb8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2cc0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2ccb*/
  this->m_8 = 0; /*0x5d2cd1*/
  if ( (a2 & 1) != 0 ) /*0x5d2cd8*/
    __3_YAXPAX_Z(this); /*0x5d2cdb*/
  return this->__pad_0; /*0x5d2ce5*/
}



// ==== 0x005D2CF0  _DynamicVectorClass_PAVMSAnim::Constructor_VectorClass_MSAnim___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MSSfx::Constructor_VectorClass_MSAnim___(
        _DynamicVectorClass_PAVMSAnim *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2cf3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSAnim *>::`vftable'; /*0x5d2cf6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2d00*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2d08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2d10*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2d1b*/
  this->m_8 = 0; /*0x5d2d21*/
  if ( (a2 & 1) != 0 ) /*0x5d2d28*/
    __3_YAXPAX_Z(this); /*0x5d2d2b*/
  return this->__pad_0; /*0x5d2d35*/
}



// ==== 0x005D2D40  _VectorClass_PAVMSSfx::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MSSfx::QueryInterface(_VectorClass_PAVMSSfx *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2d43*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSSfx *>::`vftable'; /*0x5d2d46*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2d50*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2d58*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2d60*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2d6b*/
  this->m_8 = 0; /*0x5d2d71*/
  if ( (a2 & 1) != 0 ) /*0x5d2d78*/
    __3_YAXPAX_Z(this); /*0x5d2d7b*/
  return this->__pad_0; /*0x5d2d85*/
}



// ==== 0x005D2D90  _DynamicVectorClass_PAVMSSfx::Constructor_VectorClass_MSSfx___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_Point2D::Constructor_VectorClass_MSSfx___(_DynamicVectorClass_PAVMSSfx *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2d93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MSSfx *>::`vftable'; /*0x5d2d96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2da0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2da8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d2db0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2dbb*/
  this->m_8 = 0; /*0x5d2dc1*/
  if ( (a2 & 1) != 0 ) /*0x5d2dc8*/
    __3_YAXPAX_Z(this); /*0x5d2dcb*/
  return this->__pad_0; /*0x5d2dd5*/
}



// ==== 0x005D2DE0  MPBattleClass::drawTeamDropdown  this=MPBattleClass  sig=ida-proto ====
int sub_5D2DE0()
{
  dword_ABFBD0 = 0; /*0x5d2de2*/
  dword_ABFBD4 = 0; /*0x5d2de7*/
  dword_ABFBD8 = 0; /*0x5d2dec*/
  dword_ABFBDC = 0; /*0x5d2df1*/
  return 0; /*0x5d2df6*/
}



// ==== 0x005D2E00  CampaignClass::Constructor_1  this=MSFont  sig=csp ====
_BYTE *__thiscall CampaignClass::Constructor_1(CampaignClass *this, __int16 a2)
{
  LOBYTE(this->?) = 0; /*0x5d2e05*/
  BYTE1(this->?) = 0; /*0x5d2e08*/
  BYTE2(this->?) = 0; /*0x5d2e0b*/
  this->AbstractClass = &MSFont::`vftable'; /*0x5d2e13*/
  FontClass::LoadFontResources((int)this, a2); /*0x5d2e19*/
  ++*(_DWORD *)&g_MissionQueueFrame.underParMessage[25]; /*0x5d2e24*/
  return this; /*0x5d2e2b*/
}



// ==== 0x005D2E30  MSFont::Constructor_MSFont  this=MSFont  sig=csp ====
void __thiscall MSFont::Constructor_MSFont(MSFont *this)
{
  char *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *(_DWORD *)this->__pad_0 = &MSFont::`vftable'; /*0x5d2e33*/
  if ( !--*(_DWORD *)&g_MissionQueueFrame.underParMessage[25] ) /*0x5d2e44*/
  {
    v2 = &g_MissionQueueFrame.overParTitle[2]; /*0x5d2e47*/
    do /*0x5d2e5f*/
    {
      if ( *(_DWORD *)v2 ) /*0x5d2e4e*/
      {
        *(_DWORD *)v2 = 0; /*0x5d2e52*/
        v2[4] = 0; /*0x5d2e54*/
      }
      v2 += 8; /*0x5d2e57*/
    }
    while ( (int)v2 < (int)&g_MissionQueueFrame.overParTitle[26] ); /*0x5d2e5f*/
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 6); /*0x5d2e61*/
    if ( v3 ) /*0x5d2e66*/
      (**v3)(v3, 1); /*0x5d2e6c*/
    if ( this->MSFont_field_0x14 ) /*0x5d2e6e*/
    {
      if ( *((_BYTE *)this + 28) == 1 ) /*0x5d2e79*/
        __3_YAXPAX_Z((void *)this->MSFont_field_0x14); /*0x5d2e7c*/
    }
    this->MSFont_field_0x14 = 0; /*0x5d2e84*/
    *((_BYTE *)this + 28) = 0; /*0x5d2e87*/
  }
}



// ==== 0x005D2E90  FontClass::LoadFontResources  this=FontClass  sig=csp ====
char __thiscall FontClass::LoadFontResources(int this, __int16 a2)
{
  int v3; // eax
  char *EntireFile; // eax
  _BYTE *v5; // esi
  int v6; // edi
  _BYTE *v7; // edx
  char v8; // al
  char *v9; // ecx
  char v10; // cl
  char v11; // dl
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v15; // eax
  _DWORD v16[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v17[12]; // [esp+64h] [ebp-14h] BYREF
  int v18; // [esp+70h] [ebp-8h]
  __int16 v19; // [esp+7Ch] [ebp+4h]

  CCFileClass::Construct3((int)v16); /*0x5d2e9c*/
  if ( !dword_ABFBE0 )
  {
    *(_BYTE *)(this + 28) = 0; /*0x5d2eb7*/
    v3 = SearchMIXFile(g_Str_File_FULLFNT3_SHP, 0); /*0x5d2eba*/
    *(_DWORD *)(this + 20) = v3; /*0x5d2ec1*/
    if ( !v3 ) /*0x5d2ec4*/
    {
      FileClass::SetFileName(v16, g_Str_File_FULLFNT3_SHP); /*0x5d2ecf*/
      *(_DWORD *)(this + 20) = CCFileClass::ReadEntireFile(v16); /*0x5d2ee2*/
      *(_BYTE *)(this + 28) = 1; /*0x5d2ee5*/
      Debug::Log(); /*0x5d2ee9*/
    }
    if ( !*(_DWORD *)(this + 20) ) /*0x5d2ef1*/
      goto LABEL_15; /*0x5d2ef1*/
    if ( (_BYTE)a2 == 1 ) /*0x5d2eff*/
      FileClass::SetFileName(v16, aSidefnt3Pal); /*0x5d2f06*/
    else
      FileClass::SetFileName(v16, aFullfnt3Pal); /*0x5d2f11*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v16); /*0x5d2f1a*/
    v5 = EntireFile; /*0x5d2f1f*/
    if ( !EntireFile ) /*0x5d2f23*/
      goto LABEL_15; /*0x5d2f23*/
    v6 = 0; /*0x5d2f2a*/
    v7 = EntireFile + 2; /*0x5d2f2c*/
    do /*0x5d2f7f*/
    {
      LOBYTE(v19) = 4 * *(v7 - 2); /*0x5d2f3b*/
      HIBYTE(v19) = 4 * *(v7 - 1); /*0x5d2f44*/
      v8 = 4 * *v7; /*0x5d2f4d*/
      v9 = (char *)&stru_886080 + 3 * (v6 % 256); /*0x5d2f68*/
      ++v6; /*0x5d2f6f*/
      v7 += 3; /*0x5d2f70*/
      *(_WORD *)v9 = v19; /*0x5d2f73*/
      v9[2] = v8; /*0x5d2f7c*/
    }
    while ( v6 < 256 ); /*0x5d2f7f*/
    v10 = v5[205]; /*0x5d2f87*/
    v11 = v5[204]; /*0x5d2f8d*/
    *(_BYTE *)(this + 14) = 4 * v5[206]; /*0x5d2f9d*/
    *(_BYTE *)(this + 12) = 4 * v11; /*0x5d2fa2*/
    *(_BYTE *)(this + 13) = 4 * v10; /*0x5d2fa5*/
    *(_DWORD *)(this + 16) = ((4 * (unsigned __int8)v5[205]) >> g_BitMask_Blue << g_BitMask_Green) /*0x5d2fff*/
                           | ((4 * (unsigned __int8)v5[206]) >> g_BitMask_Red << g_BitShift_Blue)
                           | ((4 * (unsigned __int8)v5[204]) >> g_BitShift_Green_0 << g_BitShift_Red);
    __3_YAXPAX_Z(v5); /*0x5d3002*/
    v12 = __2_YAPAXI_Z(0x188u); /*0x5d300c*/
    v13 = v12 ? ConvertClass::Construct(v12, (int)&stru_886080, (int)&stru_886080, g_DSurface_Primary, 1, 0) : 0;
    *(_DWORD *)(this + 24) = v13; /*0x5d303c*/
    if ( !v13 ) /*0x5d303f*/
    {
LABEL_15:
      v16[0] = &CCFileClass::`vftable'; /*0x5d3045*/
      v18 = 0; /*0x5d304d*/
      Vector::Clear((int)v17); /*0x5d3051*/
      v16[0] = &off_7E1668; /*0x5d305a*/
      BufferIOFileClass::Dtor(v16); /*0x5d3062*/
      return 0; /*0x5d306f*/
    }
    v15 = *(_DWORD *)(this + 20); /*0x5d3072*/
    *(_DWORD *)(this + 4) = *(__int16 *)(v15 + 2); /*0x5d3079*/
    *(_DWORD *)(this + 8) = *(__int16 *)(v15 + 4); /*0x5d3080*/
  }
  Audio::IsSoundEnabled(); /*0x5d3083*/
  v16[0] = &CCFileClass::`vftable'; /*0x5d308c*/
  v18 = 0; /*0x5d3094*/
  Vector::Clear((int)v17); /*0x5d3098*/
  v16[0] = &off_7E1668; /*0x5d30a1*/
  BufferIOFileClass::Dtor(v16); /*0x5d30a9*/
  return 1; /*0x5d3067*/
}



// ==== 0x005D30C0  ObjectClass::method_5D30C0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5D30C0(ObjectClass *this, wchar_t *String, _DWORD *a3)
{
  wchar_t *v3; // esi
  int v4; // ebx
  int v6; // eax
  char *ptr_8; // ebp
  char *ptr_4; // edi
  int v10; // [esp+Ch] [ebp-4h]

  v3 = String; /*0x5d30c3*/
  v4 = 0; /*0x5d30c7*/
  v10 = 0; /*0x5d30ce*/
  if ( String && (v6 = wcslen(String)) != 0 ) /*0x5d30df*/
  {
    ptr_8 = (char *)this->?; /*0x5d30e2*/
    while ( 1 ) /*0x5d30e9*/
    {
      for ( LOWORD(v6) = *v3; *v3; LOWORD(v6) = *v3 ) /*0x5d30e9*/
      {
        if ( (_WORD)v6 == 10 ) /*0x5d30f5*/
          break; /*0x5d30f5*/
        ++v3; /*0x5d30fc*/
        v6 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 1))(this, v6); /*0x5d30ff*/
        v4 += v6; /*0x5d3102*/
      }
      if ( v4 > v10 ) /*0x5d3110*/
        v10 = v4; /*0x5d3112*/
      if ( *v3 == 10 ) /*0x5d311a*/
      {
        v6 = (int)this->?; /*0x5d311c*/
        ++v3; /*0x5d311f*/
        ptr_8 += v6; /*0x5d3122*/
      }
      if ( !*v3 ) /*0x5d3124*/
        break; /*0x5d3124*/
      v4 = 0; /*0x5d30e7*/
    }
    ptr_4 = (char *)this->?; /*0x5d312a*/
    a3[3] = ptr_8; /*0x5d3137*/
    a3[2] = &ptr_4[v10]; /*0x5d313a*/
    *a3 = 0; /*0x5d3140*/
    a3[1] = 0; /*0x5d3146*/
    return a3; /*0x5d3133*/
  }
  else
  {
    *a3 = 0; /*0x5d3158*/
    a3[1] = 0; /*0x5d315a*/
    a3[2] = 0; /*0x5d315d*/
    a3[3] = 0; /*0x5d3160*/
    return a3; /*0x5d3152*/
  }
}



// ==== 0x005D3170  MSFont::Release  this=MSFont  sig=csp ====
int __thiscall MSFont::Release(MSFont *this, __int16 *a2)
{
  __int16 *v2; // esi
  int v3; // ebp
  __int16 v5; // ax
  int i; // ebx

  v2 = a2; /*0x5d3172*/
  v3 = 0; /*0x5d3176*/
  if ( !a2 ) /*0x5d317d*/
    return 0; /*0x5d31c4*/
  do /*0x5d31b4*/
  {
    v5 = *v2; /*0x5d3180*/
    for ( i = 0; *v2; v5 = *v2 ) /*0x5d3180*/
    {
      if ( v5 == 10 ) /*0x5d318e*/
        break; /*0x5d318e*/
      ++v2; /*0x5d3195*/
      i += (*(int (__thiscall **)(MSFont *, __int16))(*(_DWORD *)this->__pad_0 + 4))(this, v5); /*0x5d319b*/
    }
    if ( *v2 == 10 ) /*0x5d31a9*/
      ++v2; /*0x5d31ab*/
    if ( i > v3 ) /*0x5d31b0*/
      v3 = i; /*0x5d31b2*/
  }
  while ( *v2 ); /*0x5d31b4*/
  return v3; /*0x5d31bb*/
}



// ==== 0x005D31D0  MSFont::AddRef  this=MSFont  sig=csp ====
int __stdcall MSFont::AddRef(MSFont *this)
{
  int v2; // eax
  _DWORD v3[4]; // [esp+4h] [ebp-10h] BYREF

  CharToOemBuffA((LPCSTR)&this, (LPSTR)&this, 1u); /*0x5d31ea*/
  if ( (_BYTE)this == 32 ) /*0x5d31f6*/
    return 8; /*0x5d31f8*/
  if ( (unsigned __int8)this <= 0x20u ) /*0x5d3204*/
    return 0; /*0x5d3243*/
  v2 = (unsigned __int8)this - 33; /*0x5d320f*/
  if ( v2 > 0 ) /*0x5d3214*/
  {
    if ( v2 >= 216 ) /*0x5d321f*/
      v2 = 216; /*0x5d3221*/
  }
  else
  {
    v2 = 0; /*0x5d3216*/
  }
  return Building::GetFoundationSize(v3, 3 * v2 + 2)[2] + 1; /*0x5d31fd*/
}



// ==== 0x005D3250  MSFont::Create  this=MSFont  sig=csp ====
void __thiscall MSFont::Create(MSFont *this, int *a2, unsigned __int8 szSrc, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  int v13[2]; // [esp+4h] [ebp-28h] BYREF
  _DWORD v14[4]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v15[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( (char)szSrc == 176 ) /*0x5d3266*/
    Debug::Log(); /*0x5d326d*/
  CharToOemBuffA((LPCSTR)&szSrc, (LPSTR)&szSrc, 1u); /*0x5d3281*/
  if ( szSrc > 0x20u ) /*0x5d328c*/
  {
    v8 = szSrc - 33; /*0x5d329b*/
    if ( v8 > 0 ) /*0x5d32a0*/
    {
      if ( v8 >= 216 ) /*0x5d32ab*/
        v8 = 216; /*0x5d32ad*/
    }
    else
    {
      v8 = 0; /*0x5d32a2*/
    }
    v9 = 3 * v8; /*0x5d32b4*/
    v10 = *Building::GetFoundationSize(v14, 3 * v8 + 2); /*0x5d32d1*/
    v11 = *a2; /*0x5d32dc*/
    v13[0] = a4 - v10; /*0x5d32ea*/
    v13[1] = a5; /*0x5d32fc*/
    v12 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(v11 + 120))(a2, v15); /*0x5d3300*/
    DrawToSurfaceSHP( /*0x5d3319*/
      (int)a2,
      *((_DWORD *)this + 6),
      this->MSFont_field_0x14,
      a6 + v9,
      v13,
      v12,
      1024,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
}



// ==== 0x005D3330  MSFont::ddtor  this=MSFont  sig=csp ====
__int16 __thiscall MSFont::ddtor(MSFont *this, int a2, _WORD *a3, int a4, int a5, int a6)
{
  _WORD *v6; // esi
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  int *v12; // eax
  CHAR szSrc; // [esp+Ah] [ebp-2Eh] BYREF
  CHAR szDst; // [esp+Bh] [ebp-2Dh] BYREF
  int v16; // [esp+Ch] [ebp-2Ch]
  int v17[2]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v18[4]; // [esp+18h] [ebp-20h] BYREF
  _BYTE v19[16]; // [esp+28h] [ebp-10h] BYREF

  HIWORD(v8) = HIWORD(a4); /*0x5d3333*/
  v6 = a3; /*0x5d3338*/
  v16 = a4; /*0x5d333c*/
  LOWORD(v8) = *a3; /*0x5d3343*/
  if ( *a3 ) /*0x5d3343*/
  {
    do /*0x5d3439*/
    {
      if ( (_WORD)v8 == 10 ) /*0x5d3355*/
      {
        v8 = this->MSFont_field_0x08 + a5; /*0x5d3362*/
        v16 = a4; /*0x5d3364*/
        a5 = v8; /*0x5d3368*/
      }
      else
      {
        if ( (unsigned __int16)v8 > 0x20u ) /*0x5d3375*/
        {
          szSrc = *(_BYTE *)v6; /*0x5d3389*/
          CharToOemBuffA(&szSrc, &szDst, 1u); /*0x5d338d*/
          v9 = szDst - 33; /*0x5d3398*/
          if ( szDst == 33 ) /*0x5d339d*/
          {
            v9 = 0; /*0x5d339f*/
          }
          else if ( v9 >= 216 ) /*0x5d33a8*/
          {
            v9 = 216; /*0x5d33aa*/
          }
          v10 = 3 * v9; /*0x5d33af*/
          v11 = *Building::GetFoundationSize(v18, 3 * v9 + 2); /*0x5d33cb*/
          v17[1] = a5; /*0x5d33e2*/
          v17[0] = v16 - v11; /*0x5d33e7*/
          v12 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 120))(a2, v19); /*0x5d33fa*/
          v8 = DrawToSurfaceSHP( /*0x5d3413*/
                 a2,
                 *((_DWORD *)this + 6),
                 this->MSFont_field_0x14,
                 a6 + v10,
                 v17,
                 v12,
                 1024,
                 0,
                 0,
                 0,
                 1000,
                 0,
                 0,
                 0,
                 0,
                 0);
          v6 = a3; /*0x5d3418*/
        }
        LOWORD(v8) = *v6; /*0x5d341c*/
        v8 = (*(int (__thiscall **)(MSFont *, int))(*(_DWORD *)this->__pad_0 + 4))(this, v8); /*0x5d3424*/
        v16 += v8; /*0x5d3427*/
      }
      LOWORD(v8) = v6[1]; /*0x5d342b*/
      a3 = ++v6; /*0x5d3435*/
    }
    while ( (_WORD)v8 ); /*0x5d3439*/
  }
  return v8; /*0x5d3441*/
}



// ==== 0x005D3450  MSFont::QueryInterface  this=MSFont  sig=csp ====
void *__thiscall MSFont::QueryInterface(MSFont *this, char a2)
{
  MSFont::Constructor_MSFont(this); /*0x5d3453*/
  if ( (a2 & 1) != 0 ) /*0x5d345d*/
    __3_YAXPAX_Z(this); /*0x5d3460*/
  return this; /*0x5d346a*/
}



// ==== 0x005D3470  MPBattleClass::populateTeamDropdownForPlayer  this=MPBattleClass  sig=ida-proto ====
int sub_5D3470()
{
  dword_ABFC00 = 0; /*0x5d3472*/
  dword_ABFC04 = 0; /*0x5d3477*/
  dword_ABFC08 = 0; /*0x5d347c*/
  dword_ABFC0C = 0; /*0x5d3481*/
  return 0; /*0x5d3486*/
}



// ==== 0x005D3490  Dialog::ShowMessageBox  this=Dialog  sig=csp ====
int Dialog::ShowMessageBox(int *this, _WORD *lParam, _WORD *a3, _WORD *a4, _WORD *a5, int a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  unsigned __int16 v9; // cx
  HWND Dialog; // eax
  HWND v11; // esi
  HWND DlgItem; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  TechnoTypeClass *v16; // ecx
  int v18; // [esp+0h] [ebp-18h]
  char v19; // [esp+Ch] [ebp-Ch]
  char v20; // [esp+Dh] [ebp-Bh]
  char v21; // [esp+Eh] [ebp-Ah]
  char v22; // [esp+Fh] [ebp-9h]
  LONG dwNewLong; // [esp+10h] [ebp-8h] BYREF
  int v24; // [esp+14h] [ebp-4h]

  dwNewLong = -1; /*0x5d349a*/
  v7 = 0; /*0x5d34a6*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640); /*0x5d34ab*/
  v24 = v8; /*0x5d34b3*/
  if ( !this || (v21 = 1, !*(_WORD *)this) ) /*0x5d34b9*/
    v21 = 0; /*0x5d34c3*/
  if ( !lParam || (v22 = 1, !*lParam) ) /*0x5d34d0*/
    v22 = 0; /*0x5d34db*/
  if ( !a3 || (v19 = 1, !*a3) ) /*0x5d34e8*/
    v19 = 0; /*0x5d34f3*/
  if ( !a4 || (v20 = 1, !*a4) ) /*0x5d3500*/
    v20 = 0; /*0x5d350b*/
  Screen::Capture(1, 0, 0, v6); /*0x5d3514*/
  v9 = 206; /*0x5d351d*/
  if ( v20 ) /*0x5d3524*/
  {
    v9 = 289; /*0x5d3526*/
  }
  else if ( v19 ) /*0x5d3533*/
  {
    v9 = 288; /*0x5d3535*/
  }
  Dialog = (HWND)CreateDialog(v9, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_5D36A0, 0); /*0x5d3541*/
  v11 = Dialog; /*0x5d3546*/
  if ( Dialog ) /*0x5d354a*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5d3559*/
    if ( v21 ) /*0x5d3571*/
    {
      DlgItem = GetDlgItem(v11, 1456); /*0x5d3579*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)this); /*0x5d3588*/
    }
    if ( v22 ) /*0x5d3590*/
    {
      v13 = GetDlgItem(v11, 1454); /*0x5d3598*/
      SendMessageA(v13, 0x4B2u, 0, (LPARAM)lParam); /*0x5d35a7*/
      v7 = 1; /*0x5d35a9*/
    }
    if ( v19 ) /*0x5d35b4*/
    {
      v14 = GetDlgItem(v11, 2); /*0x5d35b9*/
      SendMessageA(v14, 0x4B2u, 0, (LPARAM)a3); /*0x5d35c8*/
      v7 = 2; /*0x5d35ca*/
    }
    if ( v20 ) /*0x5d35d5*/
    {
      v15 = GetDlgItem(v11, 1455); /*0x5d35dd*/
      SendMessageA(v15, 0x4B2u, 0, (LPARAM)a4); /*0x5d35ec*/
      v7 = 3; /*0x5d35ee*/
    }
    Dialog::Show(v11); /*0x5d35f5*/
    if ( v7 <= 0 ) /*0x5d35fd*/
    {
      dwNewLong = 0; /*0x5d3653*/
    }
    else
    {
      while ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640) ) /*0x5d3607*/
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x5d3616*/
      while ( dwNewLong < 0 ) /*0x5d362e*/
      {
        if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x5d3630*/
          break; /*0x5d3637*/
        if ( !byte_A8E9A0 ) /*0x5d3640*/
        {
          LOBYTE(v16) = 0; /*0x5d3642*/
          ScreenSaver::Process(v16, v18); /*0x5d3644*/
        }
      }
    }
    Dialog::Destroy(v11); /*0x5d365d*/
    v8 = v24; /*0x5d3662*/
  }
  while ( v8 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640) ) /*0x5d3673*/
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 12))(dword_887640); /*0x5d367d*/
  return dwNewLong; /*0x5d3693*/
}



// ==== 0x005D36A0  sub_5D36A0  this=-  sig=csp ====
int __stdcall sub_5D36A0(HWND hWnd, unsigned int a2, unsigned int a3, int *a4)
{
  int result; // eax
  unsigned int v5; // esi
  _DWORD *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x5d36ba*/
  if ( !result ) /*0x5d36c1*/
  {
    if ( a2 == 273 ) /*0x5d36cd*/
    {
      v5 = HIWORD(a3); /*0x5d36f2*/
      WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x5d36f5*/
      if ( (unsigned __int16)a3 > 0x5AEu ) /*0x5d3709*/
      {
        if ( (unsigned __int16)a3 == 1455 && !v5 ) /*0x5d3742*/
          *WindowLongA = 2; /*0x5d3744*/
      }
      else if ( (unsigned __int16)a3 == 1454 ) /*0x5d370b*/
      {
        if ( !v5 ) /*0x5d372b*/
        {
          *WindowLongA = 0; /*0x5d372d*/
          return 0; /*0x5d3735*/
        }
      }
      else if ( (_WORD)a3 && (unsigned __int16)a3 <= 2u && !v5 ) /*0x5d3718*/
      {
        *WindowLongA = 1; /*0x5d371c*/
        return 0; /*0x5d3726*/
      }
    }
    else if ( a2 == 534 ) /*0x5d36d5*/
    {
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x5d36ea*/
    }
    return 0; /*0x5d374a*/
  }
  return result; /*0x5d36e1*/
}



// ==== 0x005D37C0  sub_5D37C0  this=-  sig=ida-proto ====
int sub_5D37C0()
{
  dword_ABFC18 = 0; /*0x5d37c2*/
  dword_ABFC1C = 0; /*0x5d37c7*/
  dword_ABFC20 = 0; /*0x5d37cc*/
  dword_ABFC24 = 0; /*0x5d37d1*/
  return 0; /*0x5d37d6*/
}



// ==== 0x005D37E0  sub_5D37E0  this=-  sig=ida-proto ====
void sub_5D37E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d37ec*/
  dbl_ABFC30 = Math::Sqrt(v0 + v0); /*0x5d37fe*/
}



// ==== 0x005D3810  MPBattleClass::validateHouse  this=MPBattleClass  sig=ida-proto ====
void sub_5D3810()
{
  dbl_ABFC80 = dbl_ABFC30 / 60.0; /*0x5d381c*/
}



// ==== 0x005D3830  MPBattleClass::validateOwner  this=MPBattleClass  sig=ida-proto ====
void sub_5D3830()
{
  dbl_ABFC68 = 1.0 / dbl_ABFC80; /*0x5d383c*/
}



// ==== 0x005D3850  sub_5D3850  this=-  sig=ida-proto ====
void sub_5D3850()
{
  dbl_ABFC60 = 0.0174532925199433 * 45.0; /*0x5d385c*/
}



// ==== 0x005D3870  sub_5D3870  this=-  sig=ida-proto ====
void sub_5D3870()
{
  dbl_ABFC38 = 0.0174532925199433 * 60.0; /*0x5d387c*/
}



// ==== 0x005D3890  sub_5D3890  this=-  sig=ida-proto ====
void sub_5D3890()
{
  dbl_ABFC10 = 0.0174532925199433 * 90.0; /*0x5d389c*/
}



// ==== 0x005D38B0  sub_5D38B0  this=-  sig=ida-proto ====
__int64 sub_5D38B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFC10 - dbl_ABFC38); /*0x5d38c2*/
  result = Math::RoundToInt(v0 * dbl_ABFC30 * 0.5); /*0x5d38d6*/
  dword_ABFC88 = result; /*0x5d38db*/
  return result; /*0x5d38e0*/
}



// ==== 0x005D38F0  MPBattleClass::validateColor  this=MPBattleClass  sig=ida-proto ====
void sub_5D38F0()
{
  dbl_ABFC40 = Math::ArcTan((double)dword_ABFC88 * 0.00390625); /*0x5d3907*/
}



// ==== 0x005D3920  MPBattleClass::validateStartPosition  this=MPBattleClass  sig=ida-proto ====
void sub_5D3920()
{
  dbl_ABFC58 = Math::ArcTan((double)(2 * dword_ABFC88) / dbl_ABFC30); /*0x5d3942*/
}



// ==== 0x005D3950  MPBattleClass::isDefaultFix  this=MPBattleClass  sig=ida-proto ====
__int64 sub_5D3950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFC88) + 0.5); /*0x5d396b*/
  dword_ABFC7C = result; /*0x5d3970*/
  return result; /*0x5d3976*/
}



// ==== 0x005D3980  MPBattleClass::isDefaultAI  this=MPBattleClass  sig=ida-proto ====
int sub_5D3980()
{
  word_ABFC28 = 0; /*0x5d3982*/
  word_ABFC2A = 0; /*0x5d3988*/
  return 0; /*0x5d398e*/
}



// ==== 0x005D3990  MPBattleClass::randomHumanCountryIndex  this=MPBattleClass  sig=ida-proto ====
int sub_5D3990()
{
  dword_ABFC48 = 0; /*0x5d3992*/
  dword_ABFC4C = 0; /*0x5d3997*/
  dword_ABFC50 = 0; /*0x5d399c*/
  return 0; /*0x5d39a1*/
}



// ==== 0x005D39B0  MPBattleClass::randomAICountryIndex  this=MPBattleClass  sig=ida-proto ====
int sub_5D39B0()
{
  dword_ABFC78 = 0; /*0x5d39b5*/
  dword_ABFC70 = 128; /*0x5d39bf*/
  dword_ABFC74 = 128; /*0x5d39c4*/
  return 128; /*0x5d39c9*/
}



// ==== 0x005D39D0  SessionClass::saveSettings  this=SessionClass  sig=csp ====
_DWORD *__thiscall SessionClass::saveSettings(SessionClass *this)
{
  this->GameMode[0] = 0; /*0x5d39da*/
  this->MPGameMode[0] = 0; /*0x5d39dc*/
  this->unknown_08[0] = 0; /*0x5d39df*/
  this->unknown_0C[0] = 0; /*0x5d39e2*/
  this->unknown_10[0] = 0; /*0x5d39e5*/
  this->unknown_14[0] = 0; /*0x5d39e8*/
  LOBYTE(this->Config[0]) = 0; /*0x5d39eb*/
  BYTE1(this->Config[0]) = 0; /*0x5d39ee*/
  BYTE2(this->Config[0]) = 0; /*0x5d39f1*/
  this->Config[1] = 0; /*0x5d39f4*/
  this->Config[2] = 0; /*0x5d39f7*/
  this->Config[3] = 0; /*0x5d39fa*/
  this->WOLPreferences[11] = 0; /*0x5d39fd*/
  this->WOLPreferences[12] = 0; /*0x5d3a03*/
  LOWORD(this->WOLPreferences[13]) = 0; /*0x5d3a09*/
  this->WOLPreferences[14] = 0; /*0x5d3a10*/
  this->WOLPreferences[15] = 0; /*0x5d3a16*/
  this->WOLPreferences[16] = 0; /*0x5d3a1c*/
  LOWORD(this->Config[4]) = 0; /*0x5d3a22*/
  LOWORD(this->unknown_16C[0]) = 0; /*0x5d3a26*/
  memset32(&this->unknown_8AA[3030], 65537, 7u); /*0x5d3a38*/
  return this->GameMode; /*0x5d3a3c*/
}



// ==== 0x005D3A40  ObjectManager::InitMessageList  this=ObjectManager  sig=csp ====
int __thiscall ObjectManager::InitMessageList(ObjectManager *this)
{
  return MessageListClass::Init((MessageListClass *)this, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640); /*0x5d3a5e*/
}



// ==== 0x005D3A60  MessageListClass::Init  this=MessageListClass  sig=csp ====
int __thiscall MessageListClass::Init(
        MessageListClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12)
{
  int i; // edi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  int DisplayDuration; // eax
  int result; // eax

  *((_DWORD *)this + 177) = a12 - 8; /*0x5d3a72*/
  Debug::Log(); /*0x5d3a78*/
  for ( i = this->MessageCount; this->MessageCount; i = this->MessageCount ) /*0x5d3a7d*/
  {
    this->MessageCount = (*(int (__thiscall **)(int))(*(_DWORD *)i + 36))(i); /*0x5d3a91*/
    if ( i ) /*0x5d3a93*/
      (**(void (__thiscall ***)(int, int))i)(i, 1); /*0x5d3a9b*/
  }
  memset32((char *)this + 5248, 65537, 7u); /*0x5d3ab3*/
  if ( BYTE1(this->MessageTimer[1]) ) /*0x5d3ab5*/
  {
    v14 = (void (__thiscall ***)(_DWORD, int))this->MessageRect[1]; /*0x5d3aba*/
    if ( v14 ) /*0x5d3abf*/
      (**v14)(v14, 1); /*0x5d3ac5*/
    this->MessageRect[1] = 0; /*0x5d3ac7*/
  }
  this->MessageCount = 0; /*0x5d3ad9*/
  this->MaxMessageCount = a2; /*0x5d3adb*/
  this->ScrollOffset = a3; /*0x5d3ade*/
  this->TextColorIndex = a4; /*0x5d3ae1*/
  if ( a4 > 14 ) /*0x5d3ae4*/
    this->TextColorIndex = 14; /*0x5d3ae6*/
  this->DisplayDuration = a5; /*0x5d3af4*/
  if ( a5 > 112 ) /*0x5d3af7*/
    this->DisplayDuration = 112; /*0x5d3af9*/
  this->MessageTimer[0] = 19; /*0x5d3b04*/
  LOBYTE(this->MessageTimer[1]) = a9; /*0x5d3b0b*/
  BYTE1(this->MessageTimer[1]) = 0; /*0x5d3b15*/
  if ( a7 == -1 || a8 == -1 ) /*0x5d3b21*/
  {
    BYTE2(this->MessageTimer[1]) = 1; /*0x5d3b2e*/
    this->MessageTimer[2] = a2; /*0x5d3b32*/
    this->MessageRect[0] = a3; /*0x5d3b35*/
  }
  else
  {
    BYTE2(this->MessageTimer[1]) = 0; /*0x5d3b23*/
    this->MessageTimer[2] = a7; /*0x5d3b26*/
    this->MessageRect[0] = a8; /*0x5d3b29*/
  }
  DisplayDuration = this->DisplayDuration; /*0x5d3b3c*/
  this->MessageRect[1] = 0; /*0x5d3b45*/
  LOWORD(this->MessageRect[2]) = 0; /*0x5d3b48*/
  *((_WORD *)this + 182) = 0; /*0x5d3b4c*/
  *((_DWORD *)this + 172) = 0; /*0x5d3b53*/
  *((_DWORD *)this + 173) = 0; /*0x5d3b59*/
  *((_WORD *)this + 348) = 0; /*0x5d3b5f*/
  *((_DWORD *)this + 175) = a10; /*0x5d3b66*/
  this->q02C = a11; /*0x5d3b6c*/
  if ( a11 >= DisplayDuration ) /*0x5d3b72*/
    this->q02C = DisplayDuration - 1; /*0x5d3b75*/
  result = this->q02C; /*0x5d3b7b*/
  if ( a10 >= result ) /*0x5d3b83*/
    *((_DWORD *)this + 175) = --result; /*0x5d3b86*/
  return result; /*0x5d3b8c*/
}



// ==== 0x005D3BA0  MessageListClass::AddMessage  this=MessageListClass  sig=csp ====
int __thiscall MessageListClass::AddMessage(
        MessageListClass *this,
        wchar_t *Source,
        int a3,
        wchar_t *a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  MessageListClass *Instance; // edi
  int v11; // ebx
  int v12; // ebp
  signed int v13; // eax
  signed int v14; // edi
  int TextColorIndex; // eax
  int MessageCount; // eax
  int i; // edi
  _DWORD *v18; // edi
  _WORD *v19; // eax
  char *v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // ebx
  int v25; // edi
  int v26; // eax
  _WORD *j; // ecx
  char *v28; // ebp
  int ScrollOffset; // edi
  int *v30; // eax
  int v31; // edx
  wchar_t *v32; // eax
  wchar_t k; // cx
  int v34; // [esp+10h] [ebp-14Ch]
  signed int v35; // [esp+14h] [ebp-148h]
  wchar_t String[162]; // [esp+18h] [ebp-144h] BYREF

  Instance = (MessageListClass *)TextRenderer::GetInstance(); /*0x5d3bb8*/
  if ( !a4 ) /*0x5d3bc3*/
    return 0; /*0x5d3bd1*/
  if ( !Instance ) /*0x5d3bd6*/
    return 0; /*0x5d3be4*/
  String[0] = 0; /*0x5d3bee*/
  if ( Source ) /*0x5d3bf7*/
  {
    wcscpy(String, Source); /*0x5d3bff*/
    wcscat(String, asc_8306A4); /*0x5d3c0e*/
  }
  v11 = wcslen(String); /*0x5d3c23*/
  v12 = Text::MeasureWidth((int)String, 0); /*0x5d3c3a*/
  v34 = wcslen(a4); /*0x5d3c42*/
  if ( *((_DWORD *)this + 177) - v12 - 8 <= 0 ) /*0x5d3c56*/
    return 0; /*0x5d3c64*/
  v13 = MessageListClass::CountCharsInWidth(Instance, a4, *((_DWORD *)this + 177) - v12 - 8, 111, 1); /*0x5d3c76*/
  v14 = v13; /*0x5d3c7b*/
  v35 = v13; /*0x5d3c7f*/
  if ( v13 < 0 ) /*0x5d3c83*/
    return 0; /*0x5d3c91*/
  wcsncat(String, a4, v13); /*0x5d3c9b*/
  TextColorIndex = this->TextColorIndex; /*0x5d3ca0*/
  String[v11 + v14] = 0; /*0x5d3caa*/
  if ( TextColorIndex > 0 ) /*0x5d3cb1*/
  {
    MessageCount = this->MessageCount; /*0x5d3cb3*/
    for ( i = 0; MessageCount; MessageCount = (*(int (__thiscall **)(int))(*(_DWORD *)MessageCount + 4))(MessageCount) ) /*0x5d3cb3*/
      ++i; /*0x5d3cbf*/
    if ( BYTE1(this->MessageTimer[1]) && BYTE2(this->MessageTimer[1]) ) /*0x5d3cce*/
      ++i; /*0x5d3cd5*/
    if ( i + 1 > this->TextColorIndex ) /*0x5d3cdc*/
    {
      v18 = (_DWORD *)this->MessageCount; /*0x5d3cde*/
      if ( !this->MessageCount ) /*0x5d3cde*/
        return 0; /*0x5d3cf0*/
      this->MessageCount = (*(int (__thiscall **)(int))(*v18 + 36))(this->MessageCount); /*0x5d3cfa*/
      v19 = (_WORD *)((char *)this + 5248); /*0x5d3cfc*/
      v20 = (char *)this + 712; /*0x5d3d02*/
      v21 = 14; /*0x5d3d08*/
      do /*0x5d3d21*/
      {
        if ( (char *)v18[12] == v20 ) /*0x5d3d10*/
          *v19 = 1; /*0x5d3d12*/
        ++v19; /*0x5d3d17*/
        v20 += 324; /*0x5d3d1a*/
        --v21; /*0x5d3d20*/
      }
      while ( v21 ); /*0x5d3d21*/
      (*(void (__thiscall **)(_DWORD *, int))*v18)(v18, 1); /*0x5d3d29*/
    }
  }
  v22 = __2_YAPAXI_Z(0x4Cu); /*0x5d3d2d*/
  if ( v22 ) /*0x5d3d37*/
  {
    v23 = a6; /*0x5d3d39*/
    BYTE1(v23) = BYTE1(a6) | 0x80; /*0x5d3d47*/
    v24 = MessageListClass::clearMessages(v22, (int)String, this->MaxMessageCount, this->ScrollOffset, a5, v23); /*0x5d3d60*/
  }
  else
  {
    v24 = 0; /*0x5d3d64*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5d3d6e*/
  {
    if ( !a8 && byte_A8D1F9 ) /*0x5d3d82*/
    {
      *(_BYTE *)(v24 + 65) = 1; /*0x5d3d89*/
      goto LABEL_38; /*0x5d3d8c*/
    }
    goto LABEL_32; /*0x5d3d82*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x5d3d9f*/
  {
    if ( a8 || !byte_A8D1F8 ) /*0x5d3dac*/
    {
LABEL_32:
      *(_BYTE *)(v24 + 65) = 0; /*0x5d3d8e*/
      goto LABEL_38; /*0x5d3d93*/
    }
    *(_BYTE *)(v24 + 65) = 1; /*0x5d3db3*/
  }
  else
  {
    *(_BYTE *)(v24 + 65) = a8 == 0; /*0x5d3dbd*/
  }
LABEL_38:
  if ( a7 == -1 ) /*0x5d3dca*/
  {
    *(_DWORD *)(v24 + 36) = 0; /*0x5d3dcc*/
  }
  else
  {
    v25 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5d3dda*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5d3de3*/
      v25 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5d3df5*/
    *(_DWORD *)(v24 + 36) = a7 + v25; /*0x5d3df9*/
  }
  *(_DWORD *)(v24 + 40) = a3; /*0x5d3e03*/
  *(_DWORD *)(v24 + 56) = *((_DWORD *)this + 177); /*0x5d3e0c*/
  v26 = 0; /*0x5d3e0f*/
  for ( j = (_WORD *)((char *)this + 5248); !*j; ++j ) /*0x5d3e11*/
  {
    if ( ++v26 >= 14 ) /*0x5d3e24*/
    {
      if ( v24 ) /*0x5d3e28*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x5d3e30*/
      return 0; /*0x5d3e3e*/
    }
  }
  *((_WORD *)this + v26 + 2624) = 0; /*0x5d3e41*/
  v28 = (char *)this + 324 * v26 + 712; /*0x5d3e58*/
  memset(v28, 0, 0xA0u); /*0x5d3e61*/
  *((_WORD *)this + 162 * v26 + 436) = 0; /*0x5d3e63*/
  wcscpy((wchar_t *)v28, String); /*0x5d3e6b*/
  *(_DWORD *)(v24 + 48) = v28; /*0x5d3e7c*/
  if ( !a8 ) /*0x5d3e7f*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x5d3e98*/
  if ( this->MessageCount ) /*0x5d3e9d*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 16))(v24, this->MessageCount); /*0x5d3ea8*/
  else
    this->MessageCount = v24; /*0x5d3ead*/
  if ( BYTE1(this->MessageTimer[1]) && BYTE2(this->MessageTimer[1]) ) /*0x5d3eb6*/
    ScrollOffset = this->ScrollOffset + this->MessageTimer[0]; /*0x5d3ec3*/
  else
    ScrollOffset = this->ScrollOffset; /*0x5d3ec7*/
  v30 = (int *)this->MessageCount; /*0x5d3eca*/
  if ( this->MessageCount ) /*0x5d3eca*/
  {
    do /*0x5d3edf*/
    {
      v31 = *v30; /*0x5d3ed0*/
      v30[4] = ScrollOffset; /*0x5d3ed4*/
      v30 = (int *)(*(int (__thiscall **)(int *))(v31 + 4))(v30); /*0x5d3ed7*/
      ScrollOffset += this->MessageTimer[0]; /*0x5d3eda*/
    }
    while ( v30 ); /*0x5d3edf*/
  }
  if ( v35 < v34 ) /*0x5d3eeb*/
  {
    v32 = &a4[v35]; /*0x5d3ef4*/
    for ( k = *v32; k; ++v32 ) /*0x5d3ef7*/
    {
      if ( k >= 0x20u ) /*0x5d3f03*/
        break; /*0x5d3f03*/
      k = v32[1]; /*0x5d3f05*/
    }
    if ( *v32 ) /*0x5d3f11*/
      MessageListClass::AddMessage(this, Source, a3, v32, a5, a6, a7, 1); /*0x5d3f44*/
  }
  return v24; /*0x5d3bc5*/
}



// ==== 0x005D3FC0  ScrollingText::AddLine  this=ScrollingText  sig=csp ====
int __thiscall ScrollingText::AddLine(ScrollingText *this, wchar_t *String, int a3, wchar_t *Source, int a5)
{
  wchar_t *v5; // edi
  ScrollingText v7; // ebp
  wchar_t *v9; // esi
  int v10; // edi
  wchar_t *v11; // edi
  int v12; // ebp
  int v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // esi
  ScrollingText v18; // [esp+10h] [ebp-4h]
  wchar_t *Stringa; // [esp+18h] [ebp+4h]
  int v20; // [esp+1Ch] [ebp+8h]

  v5 = String; /*0x5d3fc5*/
  if ( !String ) /*0x5d3fcd*/
    return 0; /*0x5d3fcd*/
  if ( !Source ) /*0x5d3fd5*/
    return 0; /*0x5d3fd5*/
  if ( !*((_BYTE *)this + 24) ) /*0x5d3fd7*/
    return 0; /*0x5d3fd7*/
  v7 = *this; /*0x5d3fde*/
  if ( !*(_DWORD *)this ) /*0x5d3fde*/
    return 0; /*0x5d4026*/
  while ( *(_DWORD *)(*(_DWORD *)&v7 + 40) != a3 ) /*0x5d3ff1*/
  {
LABEL_8:
    v7 = (ScrollingText)(*(int (__thiscall **)(ScrollingText))(**(_DWORD **)&v7 + 4))(v7); /*0x5d400d*/
    if ( !*(_DWORD *)&v7 ) /*0x5d4019*/
      return 0; /*0x5d4019*/
  }
  if ( memcmp(*(const void **)(*(_DWORD *)&v7 + 48), v5, 2 * wcslen(v5)) ) /*0x5d4005*/
  {
    v5 = String; /*0x5d4009*/
    goto LABEL_8; /*0x5d4009*/
  }
  v18 = v7; /*0x5d402d*/
  v9 = (wchar_t *)(*(_DWORD *)(*(_DWORD *)&v7 + 48) + 2 * wcslen(String) + 2); /*0x5d403a*/
  Stringa = (wchar_t *)*((_DWORD *)this + 4); /*0x5d4042*/
  v10 = wcslen(v9); /*0x5d404f*/
  if ( wcslen(Source) + v10 >= (unsigned int)Stringa ) /*0x5d4062*/
  {
    v14 = wcslen(v9) - *((_DWORD *)this + 4); /*0x5d4150*/
    v15 = wcslen(Source) + v14; /*0x5d4158*/
    v16 = wcslen(v9); /*0x5d415a*/
    if ( v16 < v15 ) /*0x5d4164*/
      v16 = v15; /*0x5d4166*/
    WideString::WordWrap(0, v9, v15, v16, 0); /*0x5d4171*/
    wcscat(v9, Source); /*0x5d417c*/
  }
  else
  {
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * (_DWORD)Stringa + 2); /*0x5d4078*/
    TextRenderer::GetInstance(); /*0x5d407a*/
    v20 = Text::MeasureWidth((int)v9, 0); /*0x5d4099*/
    v12 = Text::MeasureWidth(*(_DWORD *)(*(_DWORD *)&v7 + 48), 0) - v20; /*0x5d40aa*/
    wcscpy(v11, v9); /*0x5d40ac*/
    wcscat(v11, Source); /*0x5d40b7*/
    while ( v12 + Text::MeasureWidth((int)v11, 0) >= *((_DWORD *)this + 177) ) /*0x5d40d5*/
    {
      v13 = wcslen(v9); /*0x5d40d8*/
      if ( v13 < 10 ) /*0x5d40e3*/
        v13 = 10; /*0x5d40e5*/
      WideString::WordWrap(0, v9, 10, v13, 0); /*0x5d40f4*/
      wcscpy(v11, v9); /*0x5d40fb*/
      wcscat(v11, Source); /*0x5d4106*/
    }
    __3_YAXPAX_Z(v11); /*0x5d4127*/
    wcscat(v9, Source); /*0x5d4132*/
    v7 = v18; /*0x5d4137*/
  }
  if ( a5 == -1 ) /*0x5d418b*/
  {
    *(_DWORD *)(*(_DWORD *)&v7 + 36) = 0; /*0x5d418e*/
    return 1; /*0x5d4197*/
  }
  else
  {
    v17 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5d41a6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5d41af*/
      v17 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5d41c1*/
    *(_DWORD *)(*(_DWORD *)&v7 + 36) = a5 + v17; /*0x5d41c6*/
    return 1; /*0x5d41cb*/
  }
}



// ==== 0x005D4210  NetworkLobby::MessageList_Append  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::MessageList_Append(NetworkLobby *this, int a2, int a3, wchar_t *String, char a5, int a6)
{
  int v8; // eax
  int i; // edi
  int v10; // edi
  _WORD *v11; // eax
  char *v12; // ecx
  int v13; // edx
  wchar_t *v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // edi
  int *v22; // eax
  int v23; // edx

  if ( this->__pad_C[13] ) /*0x5d4213*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[24] + 80))(*(_DWORD *)&this->__pad_C[24]); /*0x5d421f*/
    return 0; /*0x5d4222*/
  }
  else
  {
    if ( this->__pad_C[14] ) /*0x5d4228*/
    {
      v8 = *(_DWORD *)this->__pad_0; /*0x5d4232*/
      for ( i = 0; v8; v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8) ) /*0x5d4232*/
        ++i; /*0x5d423e*/
      if ( this->__pad_C[13] && this->__pad_C[14] ) /*0x5d424d*/
        ++i; /*0x5d4254*/
      if ( i + 1 > *(_DWORD *)this->__pad_C ) /*0x5d425b*/
      {
        v10 = *(_DWORD *)this->__pad_0; /*0x5d425d*/
        *(_DWORD *)this->__pad_0 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 36))(*(_DWORD *)this->__pad_0); /*0x5d4266*/
        v11 = (_WORD *)((char *)this + 5248); /*0x5d4268*/
        v12 = &this->__pad_3D[651]; /*0x5d426e*/
        v13 = 14; /*0x5d4274*/
        do /*0x5d428d*/
        {
          if ( *(char **)(v10 + 48) == v12 ) /*0x5d427c*/
            *v11 = 1; /*0x5d427e*/
          ++v11; /*0x5d4283*/
          v12 += 324; /*0x5d4286*/
          --v13; /*0x5d428c*/
        }
        while ( v13 ); /*0x5d428d*/
        if ( v10 ) /*0x5d4291*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x5d4299*/
      }
    }
    v14 = String; /*0x5d429b*/
    if ( !String ) /*0x5d42a1*/
      v14 = &g_TypeClass_DefaultString; /*0x5d42a3*/
    *(_WORD *)&this->__pad_3D[635] = a5; /*0x5d42b1*/
    memset(&this->__pad_C[28], 0, 0x144u); /*0x5d42c2*/
    wcscpy((wchar_t *)&this->__pad_C[28], v14); /*0x5d42c5*/
    *(_WORD *)&this->__pad_3D[303] = 0; /*0x5d42cb*/
    v15 = wcslen(v14); /*0x5d42d4*/
    *(_DWORD *)&this->__pad_3D[631] = v15; /*0x5d42db*/
    *(_DWORD *)&this->__pad_3D[627] = v15; /*0x5d42e1*/
    v16 = __2_YAPAXI_Z(0x4Cu); /*0x5d42e7*/
    if ( v16 ) /*0x5d42f1*/
    {
      v17 = a3; /*0x5d42f3*/
      BYTE1(v17) = BYTE1(a3) | 0x80; /*0x5d42fb*/
      v18 = MessageListClass::clearMessages( /*0x5d430b*/
              v16,
              (int)&this->__pad_C[28],
              *(_DWORD *)&this->__pad_C[16],
              *(_DWORD *)&this->__pad_C[20],
              a2,
              v17);
    }
    else
    {
      v18 = 0; /*0x5d4312*/
    }
    v19 = a6; /*0x5d4314*/
    *(_DWORD *)&this->__pad_C[24] = v18; /*0x5d4318*/
    if ( a6 <= 0 ) /*0x5d431d*/
      v19 = *(_DWORD *)&this->__pad_3D[647]; /*0x5d431f*/
    *(_DWORD *)(v18 + 56) = v19; /*0x5d4325*/
    v20 = *(_DWORD *)&this->__pad_C[24]; /*0x5d4328*/
    if ( v20 ) /*0x5d432d*/
    {
      this->__pad_C[13] = 1; /*0x5d432f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 80))(v20); /*0x5d4335*/
    }
    else
    {
      this->__pad_C[13] = 0; /*0x5d433a*/
    }
    Network_Append(); /*0x5d433e*/
    if ( this->__pad_C[14] ) /*0x5d4343*/
    {
      if ( this->__pad_C[13] ) /*0x5d434a*/
        v21 = this->NetworkLobby_field_0x8[0] + *(_DWORD *)&this->__pad_C[8]; /*0x5d4357*/
      else
        v21 = this->NetworkLobby_field_0x8[0]; /*0x5d435b*/
      v22 = *(int **)this->__pad_0; /*0x5d435e*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x5d435e*/
      {
        do /*0x5d4373*/
        {
          v23 = *v22; /*0x5d4364*/
          v22[4] = v21; /*0x5d4368*/
          v22 = (int *)(*(int (__thiscall **)(int *))(v23 + 4))(v22); /*0x5d436b*/
          v21 += *(_DWORD *)&this->__pad_C[8]; /*0x5d436e*/
        }
        while ( v22 ); /*0x5d4373*/
      }
      --*(_DWORD *)this->__pad_C; /*0x5d4375*/
    }
    return *(_DWORD *)&this->__pad_C[24]; /*0x5d4378*/
  }
}



// ==== 0x005D4390  Chat::RefreshMessagePositions  this=Chat  sig=csp ====
char __thiscall Chat::RefreshMessagePositions(Chat *this)
{
  int v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // edi
  int *v5; // eax
  int v6; // edx

  DisableIME(); /*0x5d4393*/
  LOBYTE(v2) = *((_BYTE *)this + 25); /*0x5d4398*/
  if ( (_BYTE)v2 ) /*0x5d439d*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 9); /*0x5d439f*/
    *((_BYTE *)this + 25) = 0; /*0x5d43a2*/
    if ( v3 ) /*0x5d43a8*/
      (**v3)(v3, 1); /*0x5d43ae*/
    nullsub_48(); /*0x5d43b0*/
    LOBYTE(v2) = *((_BYTE *)this + 26); /*0x5d43b5*/
    if ( (_BYTE)v2 ) /*0x5d43ba*/
    {
      if ( *((_BYTE *)this + 25) ) /*0x5d43bc*/
        v4 = *((_DWORD *)this + 2) + *((_DWORD *)this + 5); /*0x5d43ca*/
      else
        v4 = *((_DWORD *)this + 2); /*0x5d43ce*/
      v5 = *(int **)this->__pad_0; /*0x5d43d1*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x5d43d1*/
      {
        do /*0x5d43e6*/
        {
          v6 = *v5; /*0x5d43d7*/
          v5[4] = v4; /*0x5d43db*/
          v5 = (int *)(*(int (__thiscall **)(int *))(v6 + 4))(v5); /*0x5d43de*/
          v4 += *((_DWORD *)this + 5); /*0x5d43e1*/
        }
        while ( v5 ); /*0x5d43e6*/
      }
      v2 = *((_DWORD *)this + 3) + 1; /*0x5d43ec*/
      *((_DWORD *)this + 3) = v2; /*0x5d43ed*/
    }
  }
  return v2; /*0x5d43f0*/
}



// ==== 0x005D4400  PriQueue::GetItemPtr  this=PriQueue  sig=csp ====
int __thiscall PriQueue::GetItemPtr(PriQueue *this)
{
  return (int)this + 2 * *((_DWORD *)this + 173) + 40; /*0x5d440a*/
}



// ==== 0x005D4430  ObjectClass::SyncFrameCounter  this=ObjectClass  sig=csp ====
int __thiscall sub_5D4430(char *this)
{
  int v2; // ebp
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // ebx
  _WORD *v6; // eax
  char *v7; // ecx
  int v8; // edx
  int v9; // esi
  int *v10; // eax
  int v11; // edx

  v2 = 0; /*0x5d4435*/
  v3 = *(_DWORD **)this; /*0x5d4437*/
  if ( *(_DWORD *)this ) /*0x5d4437*/
  {
    do /*0x5d44c9*/
    {
      if ( !v3[9] ) /*0x5d4442*/
        goto LABEL_13; /*0x5d4442*/
      v4 = dword_887340; /*0x5d444e*/
      if ( dword_887338 != -1 ) /*0x5d4457*/
        v4 += Timer::GetTicks() - dword_887338; /*0x5d4469*/
      if ( v4 > v3[9] ) /*0x5d446e*/
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3); /*0x5d447b*/
        *(_DWORD *)this = (*(int (__thiscall **)(_DWORD *))(*v3 + 36))(v3); /*0x5d4480*/
        v6 = this + 5248; /*0x5d4482*/
        v7 = this + 712; /*0x5d4488*/
        v8 = 14; /*0x5d448e*/
        do /*0x5d44a7*/
        {
          if ( (char *)v3[12] == v7 ) /*0x5d4496*/
            *v6 = 1; /*0x5d4498*/
          ++v6; /*0x5d449d*/
          v7 += 324; /*0x5d44a0*/
          --v8; /*0x5d44a6*/
        }
        while ( v8 ); /*0x5d44a7*/
        if ( v3 ) /*0x5d44ab*/
          (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x5d44b3*/
        v2 = 1; /*0x5d44b5*/
        v3 = (_DWORD *)v5; /*0x5d44ba*/
      }
      else
      {
LABEL_13:
        v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3); /*0x5d44c5*/
      }
    }
    while ( v3 ); /*0x5d44c9*/
    if ( v2 ) /*0x5d44d2*/
    {
      if ( this->customSound && this->bombVisible ) /*0x5d44db*/
        v9 = this->ptr_C + this->abstractFlags; /*0x5d44e8*/
      else
        v9 = this->ptr_C; /*0x5d44ec*/
      v10 = *(int **)this; /*0x5d44ef*/
      if ( *(_DWORD *)this ) /*0x5d44ef*/
      {
        do /*0x5d4504*/
        {
          v11 = *v10; /*0x5d44f5*/
          v10[4] = v9; /*0x5d44f9*/
          v10 = (int *)(*(int (__thiscall **)(int *))(v11 + 4))(v10); /*0x5d44fc*/
          v9 += this->abstractFlags; /*0x5d44ff*/
        }
        while ( v10 ); /*0x5d4504*/
      }
    }
  }
  return v2; /*0x5d4506*/
}



// ==== 0x005D4510  ProcessEditControlKey  this=-  sig=csp ====
int __fastcall EditControl_ProcessKey(int a1, int a2, int *a3, unsigned __int16 a4)
{
  int v4; // edi
  int v5; // esi
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  int v9; // edi
  int *v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  void (__thiscall ***v22)(_DWORD, int); // ecx
  int v23; // edi
  int *v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  void (__thiscall ***v30)(_DWORD, int); // ecx
  int v31; // edi
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  void (__thiscall ***v35)(_DWORD, int); // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // eax

  v4 = 0; /*0x5d451a*/
  v5 = a1; /*0x5d451f*/
  if ( !a4 ) /*0x5d4521*/
  {
    a1 = *a3; /*0x5d452b*/
    if ( !*a3 ) /*0x5d452b*/
      return 0; /*0x5d4537*/
    v7 = *a3; /*0x5d453a*/
    BYTE1(v7) = BYTE1(a1) & 0xF7; /*0x5d453c*/
    if ( v7 == 1 || v7 == 2 ) /*0x5d4547*/
    {
      if ( (a1 & 2) != 0 && *(_BYTE *)(v5 + 25) ) /*0x5d4552*/
      {
        DisableIME(); /*0x5d455d*/
        if ( *(_BYTE *)(v5 + 25) ) /*0x5d4562*/
        {
          v8 = *(void (__thiscall ****)(_DWORD, int))(v5 + 36); /*0x5d4569*/
          *(_BYTE *)(v5 + 25) = 0; /*0x5d456c*/
          if ( v8 ) /*0x5d4572*/
            (**v8)(v8, 1); /*0x5d4578*/
          nullsub_48(); /*0x5d457a*/
          if ( *(_BYTE *)(v5 + 26) ) /*0x5d457f*/
          {
            if ( *(_BYTE *)(v5 + 25) ) /*0x5d4586*/
              v9 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 20); /*0x5d4593*/
            else
              v9 = *(_DWORD *)(v5 + 8); /*0x5d4597*/
            v10 = *(int **)v5; /*0x5d459a*/
            if ( *(_DWORD *)v5 ) /*0x5d459a*/
            {
              do /*0x5d45b1*/
              {
                v11 = *v10; /*0x5d45a0*/
                v10[4] = v9; /*0x5d45a4*/
                v10 = (int *)(*(int (__thiscall **)(int *))(v11 + 4))(v10); /*0x5d45a7*/
                v9 += *(_DWORD *)(v5 + 20); /*0x5d45ad*/
              }
              while ( v10 ); /*0x5d45b1*/
            }
            ++*(_DWORD *)(v5 + 12); /*0x5d45b3*/
          }
        }
        return 2; /*0x5d45bf*/
      }
      return 0; /*0x5d4643*/
    }
  }
  if ( !*(_BYTE *)(v5 + 25) ) /*0x5d45c7*/
    return v4; /*0x5d4990*/
  if ( a4 ) /*0x5d45d0*/
  {
    v12 = a4; /*0x5d4646*/
  }
  else
  {
    LOWORD(a1) = *(_WORD *)a3; /*0x5d45d6*/
    v12 = (unsigned __int8)Event_Process(a1); /*0x5d45eb*/
    v13 = *a3; /*0x5d45f1*/
    if ( (*a3 & 0x1000) != 0 && v12 >= 48 && v12 <= 57 ) /*0x5d4605*/
    {
      BYTE1(v13) &= ~0x10u; /*0x5d4609*/
      *a3 = v13; /*0x5d460c*/
    }
    else if ( (*a3 & 0x1000) != 0 || (v13 & 0x8000) != 0 || v12 < 32 ) /*0x5d461c*/
    {
      v14 = (unsigned __int8)*a3; /*0x5d461e*/
      if ( v14 != 13 && v14 != 8 && v14 != 27 && (_BYTE)v12 != 8 ) /*0x5d4635*/
      {
        *a3 = 0; /*0x5d463b*/
        return 0; /*0x5d463b*/
      }
    }
  }
  if ( v12 == 8 ) /*0x5d464f*/
  {
    if ( *a3 != 8 ) /*0x5d495d*/
    {
      v39 = *(_DWORD *)(v5 + 688); /*0x5d495f*/
      if ( v39 > *(_DWORD *)(v5 + 692) ) /*0x5d496d*/
      {
        v40 = v39 - 1; /*0x5d496f*/
        v4 = 2; /*0x5d4970*/
        *(_DWORD *)(v5 + 688) = v40; /*0x5d4975*/
        *(_WORD *)(v5 + 2 * v40 + 40) = 0; /*0x5d497b*/
      }
    }
    *a3 = 0; /*0x5d4984*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 36) + 80))(*(_DWORD *)(v5 + 36)); /*0x5d498d*/
    return v4; /*0x5d498d*/
  }
  if ( v12 != 13 ) /*0x5d4658*/
  {
    if ( v12 != 27 ) /*0x5d4661*/
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 36) + 80))(*(_DWORD *)(v5 + 36)); /*0x5d466c*/
      if ( v12 > 31 ) /*0x5d4672*/
      {
        if ( *(_WORD *)(v5 + 2 * *(_DWORD *)(v5 + 688) + 40) ) /*0x5d468a*/
        {
          v15 = *(_DWORD *)(v5 + 692); /*0x5d4694*/
          v16 = *(_DWORD *)(v5 + 16) - 1; /*0x5d469a*/
          do /*0x5d46b2*/
          {
            if ( *(_DWORD *)(v5 + 688) - v15 >= v16 ) /*0x5d46a9*/
              break; /*0x5d46a9*/
            v17 = *(_DWORD *)(v5 + 688) + 1; /*0x5d46ab*/
            *(_DWORD *)(v5 + 688) = v17; /*0x5d46ac*/
          }
          while ( *(_WORD *)(v5 + 2 * v17 + 40) ); /*0x5d46b2*/
        }
        if ( *(_DWORD *)(v5 + 688) - *(_DWORD *)(v5 + 692) >= *(_DWORD *)(v5 + 16) - 1 ) /*0x5d46cf*/
          goto LABEL_46; /*0x5d46cf*/
        *(_WORD *)(v5 + 2 * *(_DWORD *)(v5 + 688) + 40) = v12; /*0x5d46d1*/
        v18 = *(_DWORD *)(v5 + 688) + 1; /*0x5d46dc*/
        v4 = 1; /*0x5d46dd*/
        *(_DWORD *)(v5 + 688) = v18; /*0x5d46e4*/
        *(_WORD *)(v5 + 2 * v18 + 40) = 0; /*0x5d46ea*/
        TextRenderer::GetInstance(); /*0x5d46f5*/
        if ( Text::MeasureWidth(v5 + 40, 0) >= *(_DWORD *)(v5 + 708) - 10 ) /*0x5d4711*/
        {
          v19 = *(_DWORD *)(v5 + 688) - 1; /*0x5d4719*/
          *(_DWORD *)(v5 + 688) = v19; /*0x5d471a*/
          *(_WORD *)(v5 + 2 * v19 + 40) = 0; /*0x5d4720*/
LABEL_46:
          if ( *(_BYTE *)(v5 + 24) ) /*0x5d4725*/
          {
            v20 = *(_DWORD *)(v5 + 688) /*0x5d475f*/
                - WideString::WordWrap(
                    (wchar_t *)(v5 + 364),
                    (wchar_t *)(v5 + 2 * *(_DWORD *)(v5 + 692) + 40),
                    *(_DWORD *)(v5 + 700),
                    *(_DWORD *)(v5 + 704),
                    1);
            *(_DWORD *)(v5 + 688) = v20; /*0x5d4768*/
            *(_WORD *)(v5 + 2 * v20 + 40) = v12; /*0x5d476e*/
            v21 = *(_DWORD *)(v5 + 688) + 1; /*0x5d4779*/
            *(_DWORD *)(v5 + 688) = v21; /*0x5d477a*/
            *(_WORD *)(v5 + 2 * v21 + 40) = 0; /*0x5d4780*/
            *a3 = 0; /*0x5d4788*/
            return 4; /*0x5d478d*/
          }
          v4 = 0; /*0x5d4790*/
        }
      }
      *a3 = 0; /*0x5d4792*/
      return v4; /*0x5d479e*/
    }
    DisableIME(); /*0x5d47a1*/
    if ( !*(_BYTE *)(v5 + 25) ) /*0x5d47a6*/
      goto LABEL_77; /*0x5d47a6*/
    v22 = *(void (__thiscall ****)(_DWORD, int))(v5 + 36); /*0x5d47b1*/
    *(_BYTE *)(v5 + 25) = 0; /*0x5d47b4*/
    if ( v22 ) /*0x5d47ba*/
      (**v22)(v22, 1); /*0x5d47c0*/
    nullsub_48(); /*0x5d47c2*/
    if ( !*(_BYTE *)(v5 + 26) ) /*0x5d47c7*/
    {
LABEL_77:
      *a3 = 0; /*0x5d48b0*/
      return 2; /*0x5d48c1*/
    }
    if ( *(_BYTE *)(v5 + 25) ) /*0x5d47d2*/
      v23 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 20); /*0x5d47df*/
    else
      v23 = *(_DWORD *)(v5 + 8); /*0x5d47e3*/
    v24 = *(int **)v5; /*0x5d47e6*/
    if ( *(_DWORD *)v5 ) /*0x5d47e6*/
    {
      do /*0x5d4801*/
      {
        v25 = *v24; /*0x5d47f0*/
        v24[4] = v23; /*0x5d47f4*/
        v24 = (int *)(*(int (__thiscall **)(int *))(v25 + 4))(v24); /*0x5d47f7*/
        v23 += *(_DWORD *)(v5 + 20); /*0x5d47fd*/
      }
      while ( v24 ); /*0x5d4801*/
    }
LABEL_76:
    ++*(_DWORD *)(v5 + 12); /*0x5d48ad*/
    goto LABEL_77; /*0x5d48ad*/
  }
  v26 = *(_DWORD *)(v5 + 692); /*0x5d4808*/
  if ( *(_DWORD *)(v5 + 688) < v26 ) /*0x5d4816*/
    *(_DWORD *)(v5 + 688) = v26; /*0x5d4818*/
  if ( *(_WORD *)(v5 + 2 * *(_DWORD *)(v5 + 688) + 40) ) /*0x5d4824*/
  {
    v27 = *(_DWORD *)(v5 + 16) - 1; /*0x5d482e*/
    do /*0x5d4846*/
    {
      if ( *(_DWORD *)(v5 + 688) - v26 >= v27 ) /*0x5d483d*/
        break; /*0x5d483d*/
      v28 = *(_DWORD *)(v5 + 688) + 1; /*0x5d483f*/
      *(_DWORD *)(v5 + 688) = v28; /*0x5d4840*/
    }
    while ( *(_WORD *)(v5 + 2 * v28 + 40) ); /*0x5d4846*/
  }
  v29 = *(_DWORD *)(v5 + 688); /*0x5d484d*/
  if ( v29 == v26 ) /*0x5d4855*/
  {
    DisableIME(); /*0x5d4857*/
    if ( !*(_BYTE *)(v5 + 25) ) /*0x5d485c*/
      goto LABEL_77; /*0x5d485c*/
    v30 = *(void (__thiscall ****)(_DWORD, int))(v5 + 36); /*0x5d4863*/
    *(_BYTE *)(v5 + 25) = 0; /*0x5d4866*/
    if ( v30 ) /*0x5d486c*/
      (**v30)(v30, 1); /*0x5d4872*/
    nullsub_48(); /*0x5d4874*/
    if ( !*(_BYTE *)(v5 + 26) ) /*0x5d4879*/
      goto LABEL_77; /*0x5d487e*/
    if ( *(_BYTE *)(v5 + 25) ) /*0x5d4880*/
      v31 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 20); /*0x5d488d*/
    else
      v31 = *(_DWORD *)(v5 + 8); /*0x5d4891*/
    v32 = *(int **)v5; /*0x5d4894*/
    if ( *(_DWORD *)v5 ) /*0x5d4894*/
    {
      do /*0x5d48ab*/
      {
        v33 = *v32; /*0x5d489a*/
        v32[4] = v31; /*0x5d489e*/
        v32 = (int *)(*(int (__thiscall **)(int *))(v33 + 4))(v32); /*0x5d48a1*/
        v31 += *(_DWORD *)(v5 + 20); /*0x5d48a7*/
      }
      while ( v32 ); /*0x5d48ab*/
    }
    goto LABEL_76; /*0x5d48ab*/
  }
  if ( v29 - v26 < *(_DWORD *)(v5 + 16) - 1 ) /*0x5d48ce*/
  {
    *(_WORD *)(v5 + 2 * v29 + 40) = 32; /*0x5d48d0*/
    v34 = *(_DWORD *)(v5 + 688) + 1; /*0x5d48dd*/
    *(_DWORD *)(v5 + 688) = v34; /*0x5d48de*/
    *(_WORD *)(v5 + 2 * v34 + 40) = 0; /*0x5d48e4*/
  }
  DisableIME(); /*0x5d48e9*/
  if ( *(_BYTE *)(v5 + 25) ) /*0x5d48ee*/
  {
    v35 = *(void (__thiscall ****)(_DWORD, int))(v5 + 36); /*0x5d48f5*/
    *(_BYTE *)(v5 + 25) = 0; /*0x5d48f8*/
    if ( v35 ) /*0x5d48fe*/
      (**v35)(v35, 1); /*0x5d4904*/
    nullsub_48(); /*0x5d4906*/
    if ( *(_BYTE *)(v5 + 26) ) /*0x5d490b*/
    {
      if ( *(_BYTE *)(v5 + 25) ) /*0x5d4912*/
        v36 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 20); /*0x5d491f*/
      else
        v36 = *(_DWORD *)(v5 + 8); /*0x5d4923*/
      v37 = *(int **)v5; /*0x5d4926*/
      if ( *(_DWORD *)v5 ) /*0x5d4926*/
      {
        do /*0x5d493d*/
        {
          v38 = *v37; /*0x5d492c*/
          v37[4] = v36; /*0x5d4930*/
          v37 = (int *)(*(int (__thiscall **)(int *))(v38 + 4))(v37); /*0x5d4933*/
          v36 += *(_DWORD *)(v5 + 20); /*0x5d4939*/
        }
        while ( v37 ); /*0x5d493d*/
      }
      ++*(_DWORD *)(v5 + 12); /*0x5d493f*/
    }
  }
  *a3 = 0; /*0x5d494b*/
  return 3; /*0x5d4531*/
}



// ==== 0x005D49A0  TacticalMap::DrawCursor  this=TacticalMap  sig=csp ====
char __thiscall TacticalMap::DrawCursor(TacticalMap *this)
{
  char result; // al
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // [esp-Ch] [ebp-38h]
  int v8; // [esp-4h] [ebp-30h]
  int v9; // [esp+8h] [ebp-24h] BYREF
  _DWORD v10[2]; // [esp+Ch] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-18h] BYREF
  _BYTE v12[16]; // [esp+1Ch] [ebp-10h] BYREF

  v9 = 0; /*0x5d49a6*/
  result = BYTE1(this->m_TintFactor); /*0x5d49b4*/
  if ( result ) /*0x5d49b9*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5d49c8*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 9) + 108))(*((_DWORD *)this + 9), 1); /*0x5d49d2*/
    TextRenderer::GetInstance(); /*0x5d49db*/
    v3 = Text::MeasureWidth(*(_DWORD *)(*((_DWORD *)this + 9) + 48), 0); /*0x5d49f8*/
    if ( *((_WORD *)this + 348) /*0x5d4a1b*/
      && *((_DWORD *)this + 172) - *((_DWORD *)this + 173) < this->TacticalMap_field_10 - 1
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 9) + 88))(*((_DWORD *)this + 9)) )
    {
      LOWORD(v9) = *((_WORD *)this + 348); /*0x5d4a29*/
      v4 = (_DWORD *)*((_DWORD *)this + 9); /*0x5d4a2e*/
      v5 = v4[3]; /*0x5d4a31*/
      v10[1] = v4[4]; /*0x5d4a39*/
      v10[0] = v3 + v5; /*0x5d4a3d*/
      v8 = v4[11]; /*0x5d4a4c*/
      v7 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v4[13]); /*0x5d4a56*/
      v6 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x5d4a65*/
                       g_DSurface_Hidden_2,
                       v12);
      TextRenderer::DrawText(&v11, (size_t)&v9, (int)g_DSurface_Hidden_2, v6, (int)v10, v7, 0, v8); /*0x5d4a79*/
    }
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5d4a89*/
  }
  if ( this->TacticalMap_field_00 ) /*0x5d4a8d*/
    return (*(char (__thiscall **)(int, int))(*(_DWORD *)this->TacticalMap_field_00 + 44))( /*0x5d4a98*/
             this->TacticalMap_field_00,
             1);
  return result; /*0x5d4a8f*/
}



// ==== 0x005D4AD0  TacticalClass::processInput  this=TacticalClass  sig=csp ====
char __thiscall TacticalClass::processInput(TacticalClass *this, int a2)
{
  int v2; // esi
  int *ptr_0; // eax
  int v5; // edx
  int field24; // eax

  v2 = a2 - 8; /*0x5d4ad6*/
  this->visibleCells[120] = a2 - 8; /*0x5d4ae1*/
  Debug::Log(); /*0x5d4ae7*/
  ptr_0 = (int *)this->AbstractClass; /*0x5d4aec*/
  if ( this->AbstractClass ) /*0x5d4aec*/
  {
    do /*0x5d4b01*/
    {
      v5 = *ptr_0; /*0x5d4af5*/
      ptr_0[14] = v2; /*0x5d4af9*/
      ptr_0 = (int *)(*(int (__thiscall **)(int *))(v5 + 4))(ptr_0); /*0x5d4afc*/
    }
    while ( ptr_0 ); /*0x5d4b01*/
  }
  LOBYTE(field24) = BYTE1(this->?); /*0x5d4b03*/
  if ( (_BYTE)field24 ) /*0x5d4b08*/
  {
    field24 = this->field24; /*0x5d4b0a*/
    *(_DWORD *)(field24 + 56) = v2; /*0x5d4b0d*/
  }
  return field24; /*0x5d4b10*/
}



// ==== 0x005D4B20  WideString::WordWrap  this=WideString  sig=csp ====
int __stdcall WideString_WordWrap(wchar_t *a1, wchar_t *String, int a3, int a4, int a5)
{
  wchar_t *v6; // ebp
  signed int v7; // eax
  int v8; // ecx
  int v9; // ebx
  wchar_t *v10; // esi
  wchar_t *v11; // edx

  if ( a3 <= 0 ) /*0x5d4b27*/
    return 0; /*0x5d4b2c*/
  v6 = String; /*0x5d4b31*/
  v7 = wcslen(String); /*0x5d4b37*/
  v8 = a4; /*0x5d4b3c*/
  if ( a4 > v7 ) /*0x5d4b49*/
    v8 = v7; /*0x5d4b4b*/
  if ( a5 ) /*0x5d4b53*/
  {
    v9 = v8; /*0x5d4b79*/
    if ( v8 >= a3 ) /*0x5d4b7b*/
    {
      v11 = &String[v8 - 1]; /*0x5d4b7d*/
      while ( !*v11 || *v11 > 0x20u ) /*0x5d4b8d*/
      {
        --v9; /*0x5d4b8f*/
        --v11; /*0x5d4b90*/
        if ( v9 < a3 ) /*0x5d4b95*/
          goto LABEL_17; /*0x5d4b95*/
      }
      goto LABEL_18; /*0x5d4b8d*/
    }
  }
  else
  {
    v9 = a3; /*0x5d4b57*/
    if ( a3 <= v8 ) /*0x5d4b59*/
    {
      v10 = &String[a3 - 1]; /*0x5d4b5b*/
      while ( !*v10 || *v10 > 0x20u ) /*0x5d4b6b*/
      {
        ++v9; /*0x5d4b6d*/
        ++v10; /*0x5d4b6e*/
        if ( v9 > v8 ) /*0x5d4b73*/
          goto LABEL_17; /*0x5d4b73*/
      }
      goto LABEL_18; /*0x5d4b6b*/
    }
  }
LABEL_17:
  v9 = a3; /*0x5d4b97*/
LABEL_18:
  if ( a1 ) /*0x5d4b9f*/
  {
    qmemcpy(a1, String, 2 * v9); /*0x5d4baf*/
    v6 = String; /*0x5d4bb3*/
    a1[v9] = 0; /*0x5d4bbc*/
  }
  memcpy(v6, &v6[v9], 2 * (v7 + 0x7FFFFFFF * v9) + 2); /*0x5d4bdc*/
  return v9; /*0x5d4b2b*/
}



// ==== 0x005D4C30  MPBattleClass::onDialogCreated  this=MPBattleClass  sig=ida-proto ====
int sub_5D4C30()
{
  dword_ABFCA8 = 0; /*0x5d4c32*/
  dword_ABFCAC = 0; /*0x5d4c37*/
  dword_ABFCB0 = 0; /*0x5d4c3c*/
  dword_ABFCB4 = 0; /*0x5d4c41*/
  return 0; /*0x5d4c46*/
}



// ==== 0x005D4C50  MPBattleClass::onDialogDestroyed  this=MPBattleClass  sig=ida-proto ====
int sub_5D4C50()
{
  dword_ABFC94 = 0; /*0x5d4c57*/
  dword_ABFC98 = 0; /*0x5d4c5c*/
  byte_ABFC9C = 1; /*0x5d4c61*/
  byte_ABFC9D = 0; /*0x5d4c68*/
  dword_ABFC90 = (int)&DynamicVectorClass<HWND__ *>::`vftable'; /*0x5d4c6d*/
  dword_ABFCA4 = 10; /*0x5d4c77*/
  dword_ABFCA0 = 0; /*0x5d4c81*/
  return atexit(sub_5D4C90); /*0x5d4c8c*/
}



// ==== 0x005D4C90  sub_5D4C90  this=-  sig=ida-proto ====
void __cdecl sub_5D4C90()
{
  dword_ABFC90 = (int)&VectorClass<HWND__ *>::`vftable'; /*0x5d4c98*/
  if ( dword_ABFC94 && byte_ABFC9D ) /*0x5d4cac*/
  {
    __3_YAXPAX_Z(dword_ABFC94); /*0x5d4caf*/
    dword_ABFC94 = 0; /*0x5d4cb7*/
  }
  byte_ABFC9D = 0; /*0x5d4cbd*/
  dword_ABFC98 = 0; /*0x5d4cc3*/
}



// ==== 0x005D4CD0  MPBattleClass::unfixAlliances  this=MPBattleClass  sig=ida-proto ====
int sub_5D4CD0()
{
  dword_ABFCBC = 0; /*0x5d4cd7*/
  dword_ABFCC0 = 0; /*0x5d4cdc*/
  byte_ABFCC4 = 1; /*0x5d4ce1*/
  byte_ABFCC5 = 0; /*0x5d4ce8*/
  dword_ABFCB8 = (int)&DynamicVectorClass<AcceleratorTracker>::`vftable'; /*0x5d4ced*/
  dword_ABFCCC = 10; /*0x5d4cf7*/
  dword_ABFCC8 = 0; /*0x5d4d01*/
  return atexit(sub_5D4D10); /*0x5d4d0c*/
}



// ==== 0x005D4D10  sub_5D4D10  this=-  sig=ida-proto ====
void __cdecl sub_5D4D10()
{
  dword_ABFCB8 = (int)&VectorClass<AcceleratorTracker>::`vftable'; /*0x5d4d18*/
  if ( dword_ABFCBC && byte_ABFCC5 ) /*0x5d4d2c*/
  {
    __3_YAXPAX_Z(dword_ABFCBC); /*0x5d4d2f*/
    dword_ABFCBC = 0; /*0x5d4d37*/
  }
  byte_ABFCC5 = 0; /*0x5d4d3d*/
  dword_ABFCC0 = 0; /*0x5d4d43*/
}



// ==== 0x005D4D50  MessageLoop  this=-  sig=ida-proto ====
HWND Dialog_MessageLoop()
{
  HWND result; // eax
  int v1; // esi
  int v2; // esi
  struct tagMSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  result = g_hWnd; /*0x5d4d50*/
  if ( g_hWnd ) /*0x5d4d5e*/
  {
    ++dword_AA0430; /*0x5d4d77*/
    for ( result = (HWND)GameLoopMessagePump(&Msg, 0, 0, 0, 0); result; result = (HWND)GameLoopMessagePump( /*0x5d4d84*/
                                                                                         &Msg,
                                                                                         0,
                                                                                         0,
                                                                                         0,
                                                                                         0) )
    {
      result = (HWND)IsMessageDialog(&Msg, 0, 0); /*0x5d4da6*/
      if ( !result ) /*0x5d4dad*/
        break; /*0x5d4dad*/
      Dialog::MapDialogResource(&Msg); /*0x5d4db7*/
      if ( dword_887368 ) /*0x5d4dc4*/
        HandleToolTipMessage(&Msg); /*0x5d4dcb*/
      v1 = 0; /*0x5d4dd5*/
      if ( dword_ABFCA0 <= 0 ) /*0x5d4dd9*/
      {
LABEL_9:
        v2 = 0; /*0x5d4dff*/
        if ( dword_ABFCC8 <= 0 ) /*0x5d4e03*/
        {
LABEL_12:
          if ( !dword_ABFD34 || !(unsigned __int8)dword_ABFD34(&Msg) ) /*0x5d4e35*/
          {
            TranslateMessage(&Msg); /*0x5d4e40*/
            DispatchMessageA(&Msg); /*0x5d4e47*/
          }
        }
        else
        {
          while ( !TranslateAcceleratorA(*((HWND *)dword_ABFCBC + 2 * v2 + 1), *((HACCEL *)dword_ABFCBC + 2 * v2), &Msg) ) /*0x5d4e1c*/
          {
            if ( ++v2 >= dword_ABFCC8 ) /*0x5d4e26*/
              goto LABEL_12; /*0x5d4e26*/
          }
        }
      }
      else
      {
        while ( !IsDialogMessageA(*((HWND *)dword_ABFC94 + v1), &Msg) ) /*0x5d4dee*/
        {
          if ( ++v1 >= dword_ABFCA0 ) /*0x5d4df8*/
            goto LABEL_9; /*0x5d4df8*/
        }
      }
    }
  }
  return result; /*0x5d4e66*/
}



// ==== 0x005D4E70  DialogQueue::PushEntry  this=DialogQueue  sig=csp ====
int __thiscall DialogQueue::PushEntry(DialogQueue *this)
{
  int result; // eax

  result = g_MissionQueueFrame.ls640BkgdName[9]; /*0x5d4e70*/
  if ( g_MissionQueueFrame.ls640BkgdName[11] < g_MissionQueueFrame.ls640BkgdName[9] /*0x5d4eac*/
    || (BYTE1(g_MissionQueueFrame.ls640BkgdName[10]) || !g_MissionQueueFrame.ls640BkgdName[9])
    && g_MissionQueueFrame.ls640BkgdName[12] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.ls640BkgdName[7] + 8))(
                   &g_MissionQueueFrame.ls640BkgdName[7],
                   g_MissionQueueFrame.ls640BkgdName[9] + g_MissionQueueFrame.ls640BkgdName[12],
                   0),
        (_BYTE)result) )
  {
    result = g_MissionQueueFrame.ls640BkgdName[11]++; /*0x5d4eb4*/
    *(_DWORD *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * result) = this; /*0x5d4ec3*/
  }
  return result; /*0x5d4ec6*/
}



// ==== 0x005D4ED0  DialogQueue::RemoveEntry  this=DialogQueue  sig=csp ====
int __thiscall DialogQueue::RemoveEntry(DialogQueue *this)
{
  int result; // eax
  DialogQueue *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5d4ed7*/
  result = (*(int (__thiscall **)(int *, DialogQueue **))(g_MissionQueueFrame.ls640BkgdName[7] + 16))( /*0x5d4ee5*/
             &g_MissionQueueFrame.ls640BkgdName[7],
             &v2);
  if ( result != -1 && result < g_MissionQueueFrame.ls640BkgdName[11] ) /*0x5d4ef5*/
  {
    --g_MissionQueueFrame.ls640BkgdName[11]; /*0x5d4efa*/
    for ( ; /*0x5d4f00*/
          result < g_MissionQueueFrame.ls640BkgdName[11];
          *(_DWORD *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * result - 4) = *(_DWORD *)(g_MissionQueueFrame.ls640BkgdName[8]
                                                                                         + 4 * result) )
    {
      ++result; /*0x5d4f08*/
    }
  }
  return result; /*0x5d4f1b*/
}



// ==== 0x005D4F20  ObjectClass::method_5D4F20  this=ObjectClass  sig=csp ====
int __thiscall sub_5D4F20(ObjectClass *this)
{
  int v1; // edi

  v1 = 0; /*0x5d4f29*/
  if ( g_MissionQueueFrame.ls640BkgdName[11] <= 0 ) /*0x5d4f2f*/
    return 0; /*0x5d4f87*/
  while ( 1 ) /*0x5d4f47*/
  {
    GetWindowTextA( /*0x5d4f47*/
      *(HWND *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * v1),
      (LPSTR)&g_MissionQueueFrame.ls800BkgdName[7],
      99);
    if ( !strcmp((const char *)&g_MissionQueueFrame.ls800BkgdName[7], (const char *)this) ) /*0x5d4f56*/
      break; /*0x5d4f56*/
    if ( ++v1 >= g_MissionQueueFrame.ls640BkgdName[11] ) /*0x5d4f85*/
      return 0; /*0x5d4f85*/
  }
  return *(_DWORD *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * v1); /*0x5d4f87*/
}



// ==== 0x005D5080  _DynamicVectorClass_PAUHWND::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MSFont_18::ClearBuffer(_DynamicVectorClass_PAUHWND *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d5086*/
  this->m_10 = 0; /*0x5d5089*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d5090*/
  {
    __3_YAXPAX_Z(v2); /*0x5d5096*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d509e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d50a1*/
  this->m_8 = 0; /*0x5d50a4*/
}



// ==== 0x005D50B0  _DynamicVectorClass_PAUHWND::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFont_18::PointerToIndex(_DynamicVectorClass_PAUHWND *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d50b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d50c5*/
  else
    return 0; /*0x5d50b7*/
}



// ==== 0x005D50D0  _VectorClass_PAUHWND::GetSize  this=VectorClass  sig=csp ====
int __thiscall MSFont_18::GetSize(_VectorClass_PAUHWND *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d50da*/
}



// ==== 0x005D50E0  _DynamicVectorClass_UAcceleratorTracker::Destroy  this=DynamicVector  sig=csp ====
void __thiscall MSFont_18::Destroy(_DynamicVectorClass_UAcceleratorTracker *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d50e6*/
  this->m_10 = 0; /*0x5d50e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d50f0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d50f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d50fe*/
  }
  BYTE1(this->m_C) = 0; /*0x5d5101*/
  this->m_8 = 0; /*0x5d5104*/
}



// ==== 0x005D5110  _DynamicVectorClass_UAcceleratorTracker::PointerToIndex8  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFont_18::PointerToIndex8(_DynamicVectorClass_UAcceleratorTracker *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d5110*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5d5125*/
  else
    return 0; /*0x5d5117*/
}



// ==== 0x005D5130  _VectorClass_UAcceleratorTracker::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAcceleratorTracker::Clear(_VectorClass_UAcceleratorTracker *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x5d5130*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x5d513f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x5d5146*/
  return a2; /*0x5d5141*/
}



// ==== 0x005D5150  _VectorClass_PAUHWND::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSFont_18::AddRef(_VectorClass_PAUHWND *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d5152*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d515d*/
  {
    v3 = 0; /*0x5d515f*/
    if ( m_8 <= 0 ) /*0x5d5163*/
      return 1; /*0x5d5183*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d5165*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d516b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d5174*/
    {
      ++v3; /*0x5d5176*/
      ++v4; /*0x5d5177*/
      if ( v3 >= m_8 ) /*0x5d517c*/
        return 1; /*0x5d517c*/
    }
  }
  return 0; /*0x5d517e*/
}



// ==== 0x005D5190  _VectorClass_PAUHWND::Release  this=VectorClass  sig=csp ====
char __thiscall MSFont_18::Release(_VectorClass_PAUHWND *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d519c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d51a6*/
    if ( a3 ) /*0x5d51ac*/
      v4 = a3; /*0x5d51c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d51be*/
    LOBYTE(this->m_C) = 1; /*0x5d51c6*/
    if ( v4 ) /*0x5d51ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d51d5*/
      {
        m_8 = this->m_8; /*0x5d51dc*/
        if ( a2 < m_8 ) /*0x5d51e1*/
          m_8 = a2; /*0x5d51e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d51e9*/
          ++i; /*0x5d51ee*/
        if ( BYTE1(this->m_C) ) /*0x5d51fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5206*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d520e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d5217*/
      this->m_8 = a2; /*0x5d521f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d5222*/
      return 1; /*0x5d5228*/
    }
    else
    {
      return 0; /*0x5d51cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUHWND *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d5232*/
    return 1; /*0x5d5238*/
  }
}



// ==== 0x005D5240  _VectorClass_PAUHWND::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSFont_18::ddtor(_VectorClass_PAUHWND *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d524d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5253*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d525b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d525e*/
  this->m_8 = 0; /*0x5d5261*/
}



// ==== 0x005D5270  _VectorClass_PAUHWND::Create  this=VectorClass  sig=csp ====
int __thiscall MSFont_18::Create(_VectorClass_PAUHWND *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d5270*/
    return 0; /*0x5d5278*/
  m_8 = this->m_8; /*0x5d527e*/
  result = 0; /*0x5d5281*/
  if ( m_8 <= 0 ) /*0x5d5285*/
    return -1; /*0x5d529c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d528b*/
  {
    if ( ++result >= m_8 ) /*0x5d529a*/
      return -1; /*0x5d529a*/
  }
  return result; /*0x5d527a*/
}



// ==== 0x005D52B0  _VectorClass_PAUHWND::Draw  this=VectorClass  sig=csp ====
unsigned int __thiscall MSFont_18::Draw(_VectorClass_PAUHWND *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d52b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d52c5*/
  else
    return 0; /*0x5d52b7*/
}



// ==== 0x005D52D0  _DynamicVectorClass_PAUHWND::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MSFont_18::SetCapacity(_DynamicVectorClass_PAUHWND *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d52dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d52e2*/
    if ( a3 ) /*0x5d52e8*/
      v4 = a3; /*0x5d52fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d52fa*/
    LOBYTE(this->m_C) = 1; /*0x5d5302*/
    if ( !v4 ) /*0x5d5306*/
      return 0; /*0x5d537a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d5308*/
    {
      m_8 = this->m_8; /*0x5d530f*/
      if ( a2 < m_8 ) /*0x5d5314*/
        m_8 = a2; /*0x5d5316*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d531c*/
        ++i; /*0x5d5321*/
      if ( BYTE1(this->m_C) ) /*0x5d532e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5339*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d5341*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d534a*/
    this->m_8 = a2; /*0x5d5352*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d5355*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUHWND *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d535e*/
  }
  v7 = this->m_8; /*0x5d5361*/
  if ( v7 < this->m_10 ) /*0x5d5369*/
    this->m_10 = v7; /*0x5d536b*/
  return 1; /*0x5d536e*/
}



// ==== 0x005D5380  _DynamicVectorClass_PAUHWND::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MSFont_18::FindItem(_DynamicVectorClass_PAUHWND *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d5380*/
  result = 0; /*0x5d5383*/
  if ( m_10 <= 0 ) /*0x5d5388*/
    return -1; /*0x5d539f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d538e*/
  {
    if ( ++result >= m_10 ) /*0x5d539d*/
      return -1; /*0x5d539d*/
  }
  return result; /*0x5d53a2*/
}



// ==== 0x005D53B0  _VectorClass_UAcceleratorTracker::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAcceleratorTracker::AddRef(_VectorClass_UAcceleratorTracker *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x5d53bb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d53c0*/
  {
    v3 = 0; /*0x5d53c2*/
    if ( m_8 <= 0 ) /*0x5d53c6*/
      return 1; /*0x5d53f6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5d53c8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x5d53cb*/
    v6 = (_DWORD *)(v4 + 4); /*0x5d53ce*/
    v7 = v4 - (_DWORD)v5; /*0x5d53d1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d53e3*/
    {
      ++v3; /*0x5d53e5*/
      v6 += 2; /*0x5d53e6*/
      v5 += 2; /*0x5d53e9*/
      if ( v3 >= m_8 ) /*0x5d53ee*/
        return 1; /*0x5d53ee*/
    }
  }
  return 0; /*0x5d53f0*/
}



// ==== 0x005D5410  _VectorClass_UAcceleratorTracker::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAcceleratorTracker::Release(_VectorClass_UAcceleratorTracker *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x5d5412*/
  if ( a2 ) /*0x5d541e*/
  {
    v5 = a3; /*0x5d5424*/
    LOBYTE(this->m_C) = 0; /*0x5d5428*/
    if ( a3 ) /*0x5d542d*/
    {
      v9 = a3; /*0x5d5463*/
      if ( a2 - 1 >= 0 ) /*0x5d5467*/
      {
        v10 = a2; /*0x5d5469*/
        do /*0x5d5473*/
        {
          *v9 = 0; /*0x5d546a*/
          v9[1] = 0; /*0x5d546c*/
          v9 += 2; /*0x5d546f*/
          --v10; /*0x5d5472*/
        }
        while ( v10 ); /*0x5d5473*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x5d5437*/
      if ( v6 ) /*0x5d5441*/
      {
        v7 = (_DWORD *)v6; /*0x5d5446*/
        if ( a2 - 1 >= 0 ) /*0x5d544a*/
        {
          v8 = a2; /*0x5d544c*/
          do /*0x5d5456*/
          {
            *v7 = 0; /*0x5d544d*/
            v7[1] = 0; /*0x5d544f*/
            v7 += 2; /*0x5d5452*/
            --v8; /*0x5d5455*/
          }
          while ( v8 ); /*0x5d5456*/
        }
        v5 = (_DWORD *)v6; /*0x5d5458*/
      }
      else
      {
        v5 = 0; /*0x5d545c*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x5d5477*/
    if ( v5 ) /*0x5d547b*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d5486*/
      {
        m_8 = this->m_8; /*0x5d548b*/
        if ( a2 < m_8 ) /*0x5d5490*/
          m_8 = a2; /*0x5d5492*/
        v13 = 0; /*0x5d5494*/
        if ( m_8 > 0 ) /*0x5d5498*/
        {
          do /*0x5d54b7*/
          {
            v14 = 2 * v13; /*0x5d549d*/
            v15 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v13++); /*0x5d54a6*/
            v5[v14] = *v15; /*0x5d54ad*/
            v5[v14 + 1] = v15[1]; /*0x5d54b3*/
          }
          while ( v13 < m_8 ); /*0x5d54b7*/
          v3 = a2; /*0x5d54b9*/
        }
        if ( BYTE1(this->m_C) ) /*0x5d54bf*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d54c8*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d54d0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x5d54db*/
      this->m_8 = v3; /*0x5d54e1*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d54e4*/
      return 1; /*0x5d54ea*/
    }
    else
    {
      return 0; /*0x5d5480*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UAcceleratorTracker *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d54f4*/
    return 1; /*0x5d54fa*/
  }
}



// ==== 0x005D5500  _VectorClass_UAcceleratorTracker::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAcceleratorTracker::ddtor(_VectorClass_UAcceleratorTracker *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d550d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5513*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d551b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d551e*/
  this->m_8 = 0; /*0x5d5521*/
}



// ==== 0x005D5530  _VectorClass_UAcceleratorTracker::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAcceleratorTracker::GetSize(_VectorClass_UAcceleratorTracker *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d5530*/
    return 0; /*0x5d553e*/
  m_8 = this->m_8; /*0x5d5544*/
  result = 0; /*0x5d5547*/
  if ( m_8 <= 0 ) /*0x5d554b*/
    return -1; /*0x5d556c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d5551*/
  {
    if ( ++result >= m_8 ) /*0x5d556a*/
      return -1; /*0x5d556a*/
  }
  return result; /*0x5d553b*/
}



// ==== 0x005D5580  _VectorClass_UAcceleratorTracker::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAcceleratorTracker::GetCapacity(_VectorClass_UAcceleratorTracker *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d5580*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x5d5595*/
  else
    return 0; /*0x5d5587*/
}



// ==== 0x005D55A0  _DynamicVectorClass_UAcceleratorTracker::SetCapacity8  this=DynamicVector  sig=csp ====
char __thiscall MSFont_18::SetCapacity8(_DynamicVectorClass_UAcceleratorTracker *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x5d55a2*/
  if ( a2 ) /*0x5d55ae*/
  {
    v5 = a3; /*0x5d55b4*/
    LOBYTE(this->m_C) = 0; /*0x5d55b8*/
    if ( a3 ) /*0x5d55bd*/
    {
      v9 = a3; /*0x5d55f3*/
      if ( a2 - 1 >= 0 ) /*0x5d55f7*/
      {
        v10 = a2; /*0x5d55f9*/
        do /*0x5d5603*/
        {
          *v9 = 0; /*0x5d55fa*/
          v9[1] = 0; /*0x5d55fc*/
          v9 += 2; /*0x5d55ff*/
          --v10; /*0x5d5602*/
        }
        while ( v10 ); /*0x5d5603*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x5d55c7*/
      if ( v6 ) /*0x5d55d1*/
      {
        v7 = (_DWORD *)v6; /*0x5d55d6*/
        if ( a2 - 1 >= 0 ) /*0x5d55da*/
        {
          v8 = a2; /*0x5d55dc*/
          do /*0x5d55e6*/
          {
            *v7 = 0; /*0x5d55dd*/
            v7[1] = 0; /*0x5d55df*/
            v7 += 2; /*0x5d55e2*/
            --v8; /*0x5d55e5*/
          }
          while ( v8 ); /*0x5d55e6*/
        }
        v5 = (_DWORD *)v6; /*0x5d55e8*/
      }
      else
      {
        v5 = 0; /*0x5d55ec*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x5d5607*/
    if ( !v5 ) /*0x5d560b*/
      return 0; /*0x5d5694*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d5611*/
    {
      m_8 = this->m_8; /*0x5d5616*/
      if ( a2 < m_8 ) /*0x5d561b*/
        m_8 = a2; /*0x5d561d*/
      v12 = 0; /*0x5d561f*/
      if ( m_8 > 0 ) /*0x5d5623*/
      {
        do /*0x5d5642*/
        {
          v13 = 2 * v12; /*0x5d5628*/
          v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v12++); /*0x5d5631*/
          v5[v13] = *v14; /*0x5d5638*/
          v5[v13 + 1] = v14[1]; /*0x5d563e*/
        }
        while ( v12 < m_8 ); /*0x5d5642*/
        v3 = a2; /*0x5d5644*/
      }
      if ( BYTE1(this->m_C) ) /*0x5d564a*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5653*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d565b*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x5d5666*/
    this->m_8 = v3; /*0x5d566c*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d566f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UAcceleratorTracker *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d5678*/
  }
  v15 = this->m_8; /*0x5d567b*/
  if ( v15 < this->m_10 ) /*0x5d5683*/
    this->m_10 = v15; /*0x5d5685*/
  return 1; /*0x5d5688*/
}



// ==== 0x005D56A0  _DynamicVectorClass_UAcceleratorTracker::FindPair8  this=DynamicVector  sig=csp ====
int __thiscall MSFont_18::FindPair8(_DynamicVectorClass_UAcceleratorTracker *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5d56a0*/
  result = 0; /*0x5d56a5*/
  if ( m_10 <= 0 ) /*0x5d56ab*/
    return -1; /*0x5d56cc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d56b1*/
  {
    if ( ++result >= m_10 ) /*0x5d56ca*/
      return -1; /*0x5d56ca*/
  }
  return result; /*0x5d56cf*/
}



// ==== 0x005D56E0  _VectorClass_PAUHWND::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall MSFont_18::QueryInterface(_VectorClass_PAUHWND *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d56e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HWND__ *>::`vftable'; /*0x5d56e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d56f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d56f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d5700*/
  }
  BYTE1(this->m_C) = 0; /*0x5d570b*/
  this->m_8 = 0; /*0x5d5711*/
  if ( (a2 & 1) != 0 ) /*0x5d5718*/
    __3_YAXPAX_Z(this); /*0x5d571b*/
  return this->__pad_0; /*0x5d5725*/
}



// ==== 0x005D5730  _DynamicVectorClass_PAUHWND::Constructor_VectorClass_HWND_____  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSFont_18::Constructor_VectorClass_HWND_____(_DynamicVectorClass_PAUHWND *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d5733*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HWND__ *>::`vftable'; /*0x5d5736*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d5740*/
  {
    __3_YAXPAX_Z(v3); /*0x5d5748*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d5750*/
  }
  BYTE1(this->m_C) = 0; /*0x5d575b*/
  this->m_8 = 0; /*0x5d5761*/
  if ( (a2 & 1) != 0 ) /*0x5d5768*/
    __3_YAXPAX_Z(this); /*0x5d576b*/
  return this->__pad_0; /*0x5d5775*/
}



// ==== 0x005D5780  _VectorClass_UAcceleratorTracker::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAcceleratorTracker::QueryInterface(_VectorClass_UAcceleratorTracker *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d5783*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AcceleratorTracker>::`vftable'; /*0x5d5786*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d5790*/
  {
    __3_YAXPAX_Z(v3); /*0x5d5798*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d57a0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d57ab*/
  this->m_8 = 0; /*0x5d57b1*/
  if ( (a2 & 1) != 0 ) /*0x5d57b8*/
    __3_YAXPAX_Z(this); /*0x5d57bb*/
  return this->__pad_0; /*0x5d57c5*/
}



// ==== 0x005D57D0  _DynamicVectorClass_UAcceleratorTracker::Constructor_VectorClass_AcceleratorTracker_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MSFont_18::Constructor_VectorClass_AcceleratorTracker_(
        _DynamicVectorClass_UAcceleratorTracker *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d57d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AcceleratorTracker>::`vftable'; /*0x5d57d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d57e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d57e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d57f0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d57fb*/
  this->m_8 = 0; /*0x5d5801*/
  if ( (a2 & 1) != 0 ) /*0x5d5808*/
    __3_YAXPAX_Z(this); /*0x5d580b*/
  return this->__pad_0; /*0x5d5815*/
}



// ==== 0x005D5820  Audio::SetSoundFileName  this=Audio  sig=csp ====
char **__thiscall Audio::SetSoundFileName(Audio *this, char *Source, int a3)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x5d5825*/
  *(_DWORD *)&this->__pad_0[4] = 0; /*0x5d5827*/
  this->__pad_0[8] = 0; /*0x5d582a*/
  if ( Audio::IsSoundEnabled() ) /*0x5d582d*/
    *(_DWORD *)this->__pad_0 = _strdup(Source); /*0x5d5843*/
  return (char **)this; /*0x5d5847*/
}



// ==== 0x005D5850  MSEngine::DestroyData  this=MSEngine  sig=csp ====
void __thiscall MSEngine::DestroyData(MSEngine *this)
{
  if ( *(_DWORD *)this->__pad_0 ) /*0x5d5850*/
    free(*(void **)this->__pad_0); /*0x5d5857*/
}



// ==== 0x005D5860  nullsub_192  this=-  sig=csp ====
void __stdcall nullsub_192(int a1)
{
  ; /*0x5d5860*/
}



// ==== 0x005D5870  Timer::EnableHighPrecision  this=Timer  sig=csp ====
void *__thiscall Timer::EnableHighPrecision(Timer *this)
{
  timeBeginPeriod(1u); /*0x5d5875*/
  return this; /*0x5d587d*/
}



// ==== 0x005D5880  Timer::DisableHighPrecision  this=Timer  sig=ida-proto ====
MMRESULT Timer_DisableHighPrecision()
{
  return timeEndPeriod(1u); /*0x5d5888*/
}



// ==== 0x005D5890  timeGetTime  this=-  sig=ida-proto ====
// attributes: thunk
DWORD __stdcall timeGetTime()
{
  return __imp_timeGetTime();
}



// ==== 0x005D58A0  _0timeGetTime  this=-  sig=ida-proto ====
// attributes: thunk
DWORD __stdcall 0timeGetTime()
{
  return timeGetTime();
}



// ==== 0x005D58B0  MPBattleClass::startingPositionsToHouseBaseCells  this=MPBattleClass  sig=ida-proto ====
void sub_5D58B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d58bc*/
  dbl_ABFD58 = Math::Sqrt(v0 + v0); /*0x5d58ce*/
}



// ==== 0x005D58E0  MPBattleClass::allyTeams  this=MPBattleClass  sig=ida-proto ====
void sub_5D58E0()
{
  dbl_ABFDC8 = dbl_ABFD58 / 60.0; /*0x5d58ec*/
}



// ==== 0x005D5900  MPBattleClass::isMegawealthAllowed  this=MPBattleClass  sig=ida-proto ====
void sub_5D5900()
{
  dbl_ABFD98 = 1.0 / dbl_ABFDC8; /*0x5d590c*/
}



// ==== 0x005D5920  MPBattleClass::onAIJoined  this=MPBattleClass  sig=ida-proto ====
void sub_5D5920()
{
  dbl_ABFD90 = 0.0174532925199433 * 45.0; /*0x5d592c*/
}



// ==== 0x005D5940  sub_5D5940  this=-  sig=ida-proto ====
void sub_5D5940()
{
  dbl_ABFD60 = 0.0174532925199433 * 60.0; /*0x5d594c*/
}



// ==== 0x005D5960  sub_5D5960  this=-  sig=ida-proto ====
void sub_5D5960()
{
  dbl_ABFD38 = 0.0174532925199433 * 90.0; /*0x5d596c*/
}



// ==== 0x005D5980  sub_5D5980  this=-  sig=ida-proto ====
__int64 sub_5D5980()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFD38 - dbl_ABFD60); /*0x5d5992*/
  result = Math::RoundToInt(v0 * dbl_ABFD58 * 0.5); /*0x5d59a6*/
  dword_ABFDD0 = result; /*0x5d59ab*/
  return result; /*0x5d59b0*/
}



// ==== 0x005D59C0  sub_5D59C0  this=-  sig=ida-proto ====
void sub_5D59C0()
{
  dbl_ABFD68 = Math::ArcTan((double)dword_ABFDD0 * 0.00390625); /*0x5d59d7*/
}



// ==== 0x005D59F0  sub_5D59F0  this=-  sig=ida-proto ====
void sub_5D59F0()
{
  dbl_ABFD88 = Math::ArcTan((double)(2 * dword_ABFDD0) / dbl_ABFD58); /*0x5d5a12*/
}



// ==== 0x005D5A20  Display::CalculateDefaultSize  this=Display  sig=ida-proto ====
__int64 sub_5D5A20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFDD0) + 0.5); /*0x5d5a3b*/
  dword_ABFDC4 = result; /*0x5d5a40*/
  return result; /*0x5d5a46*/
}



// ==== 0x005D5A50  sub_5D5A50  this=-  sig=ida-proto ====
int sub_5D5A50()
{
  word_ABFD50 = 0; /*0x5d5a52*/
  word_ABFD52 = 0; /*0x5d5a58*/
  return 0; /*0x5d5a5e*/
}



// ==== 0x005D5A60  sub_5D5A60  this=-  sig=ida-proto ====
int sub_5D5A60()
{
  dword_ABFD78 = 0; /*0x5d5a62*/
  dword_ABFD7C = 0; /*0x5d5a67*/
  dword_ABFD80 = 0; /*0x5d5a6c*/
  return 0; /*0x5d5a71*/
}



// ==== 0x005D5A80  sub_5D5A80  this=-  sig=ida-proto ====
int sub_5D5A80()
{
  dword_ABFDC0 = 0; /*0x5d5a85*/
  dword_ABFDB8 = 128; /*0x5d5a8f*/
  dword_ABFDBC = 128; /*0x5d5a94*/
  return 128; /*0x5d5a99*/
}



// ==== 0x005D5AA0  sub_5D5AA0  this=-  sig=ida-proto ====
int sub_5D5AA0()
{
  dword_ABFD40 = 0; /*0x5d5aa2*/
  dword_ABFD44 = 0; /*0x5d5aa7*/
  dword_ABFD48 = 0; /*0x5d5aac*/
  dword_ABFD4C = 0; /*0x5d5ab1*/
  return 0; /*0x5d5ab6*/
}



// ==== 0x005D5AC0  System_Init  this=-  sig=ida-proto ====
int *sub_5D5AC0()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5ac9*/
  {
    g_MultiplayerMode |= 1u; /*0x5d5ad6*/
    dword_ABFDA4 = 0; /*0x5d5adc*/
    dword_ABFDA8 = 0; /*0x5d5ae1*/
    byte_ABFDAC = 1; /*0x5d5ae6*/
    byte_ABFDAD = 0; /*0x5d5aec*/
    g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5af1*/
    dword_ABFDB4 = 10; /*0x5d5afb*/
    dword_ABFDB0 = 0; /*0x5d5b05*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5b0a*/
  }
  return &g_MultiplayerModeConfig; /*0x5d5b17*/
}



// ==== 0x005D5B20  MultiplayerConfig::Cleanup  this=MultiplayerConfig  sig=ida-proto ====
void __cdecl MultiplayerConfig_Cleanup()
{
  g_MultiplayerModeConfig = (int)&VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5b28*/
  if ( dword_ABFDA4 && byte_ABFDAD ) /*0x5d5b3c*/
  {
    __3_YAXPAX_Z(dword_ABFDA4); /*0x5d5b3f*/
    dword_ABFDA4 = 0; /*0x5d5b47*/
  }
  byte_ABFDAD = 0; /*0x5d5b4d*/
  dword_ABFDA8 = 0; /*0x5d5b53*/
}



// ==== 0x005D5B60  MultiplayerGameMode::Construct  this=MultiplayerGameMode  sig=csp ====
void *__thiscall MultiplayerGameMode::Construct(
        MultiplayerGameMode *this,
        const wchar_t **a2,
        const wchar_t **a3,
        const char **a4,
        const char **a5,
        char a6,
        int a7)
{
  INISectionList *v8; // eax
  Node *v9; // edi
  int v10; // ecx
  char Bool_Overwrite; // al
  char v12; // dl
  int *v13; // ecx
  char v14; // al
  char v15; // cl
  char v16; // al
  CCFileClass v18; // [esp+10h] [ebp-6Ch] BYREF
  int v19[3]; // [esp+68h] [ebp-14h] BYREF
  int v20; // [esp+74h] [ebp-8h]

  this->MultiplayerGameMode_field_0x0C = 0; /*0x5d5b73*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d5b76*/
  LOBYTE(this->MultiplayerGameMode_field_0x14) = 1; /*0x5d5b79*/
  BYTE1(this->MultiplayerGameMode_field_0x14) = 0; /*0x5d5b7d*/
  this->MultiplayerGameMode_field_0x08 = (int)&DynamicVectorClass<MultiplayerTeam *>::`vftable'; /*0x5d5b80*/
  *((_DWORD *)this + 7) = 10; /*0x5d5b87*/
  this->MultiplayerGameMode_field_0x18 = 0; /*0x5d5b8e*/
  WideString::AssignFromPtr((wchar_t **)this + 8, a2); /*0x5d5b91*/
  WideString::AssignFromPtr((wchar_t **)this + 9, a3); /*0x5d5ba1*/
  *((_DWORD *)this + 10) = a7; /*0x5d5bba*/
  String::AssignFromPtr((String *)((char *)this + 44), a4); /*0x5d5bbd*/
  String::AssignFromPtr((String *)this + 6, a5); /*0x5d5bcd*/
  this->u8_D = a6; /*0x5d5bdb*/
  *((_DWORD *)this + 14) = 0; /*0x5d5bde*/
  *(_DWORD *)this->__pad_0 = &MultiplayerGameMode::`vftable'; /*0x5d5be1*/
  LOBYTE(this->MultiplayerGameMode_field_0x04) = 0; /*0x5d5be7*/
  *((_DWORD *)this + 15) = 65793; /*0x5d5bea*/
  v8 = (INISectionList *)__2_YAPAXI_Z(0x58u); /*0x5d5bf9*/
  v9 = (Node *)v8; /*0x5d5bfe*/
  if ( v8 ) /*0x5d5c05*/
  {
    v8[1] = 0; /*0x5d5c0a*/
    v8[2] = 0; /*0x5d5c0d*/
    INISectionList::Constructor(v8 + 3); /*0x5d5c10*/
    Node::Init(v9 + 5); /*0x5d5c18*/
    v9[7].? = 0; /*0x5d5c1d*/
    v9[8].GenericNode[0] = 0; /*0x5d5c20*/
    *(_DWORD *)v9->GenericNode = &CCINIClass_Vtable; /*0x5d5c23*/
  }
  else
  {
    v9 = 0; /*0x5d5c2b*/
  }
  *((_DWORD *)this + 14) = v9; /*0x5d5c32*/
  CCFileClass::Construct2(&v18, (char **)this + 11); /*0x5d5c35*/
  if ( (unsigned __int8)CCFileClass::Open(&v18, 0) ) /*0x5d5c3f*/
    CCINIClass::Load(*((CCINIClass **)this + 14), (int)&v18, 0, 0); /*0x5d5c52*/
  *(_DWORD *)v18.CDFileClass = &CCFileClass::`vftable'; /*0x5d5c5b*/
  v20 = 0; /*0x5d5c63*/
  Vector::Clear((int)v19); /*0x5d5c67*/
  *(_DWORD *)v18.CDFileClass = &off_7E1668; /*0x5d5c70*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v18); /*0x5d5c78*/
  v10 = *((_DWORD *)this + 14); /*0x5d5c7d*/
  if ( v10 ) /*0x5d5c82*/
  {
    if ( INIClass::BinarySearchSection(v10, (unsigned __int8 *)aMultiplayerdia) ) /*0x5d5c8f*/
    {
      Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5d5cb0*/
                         *((int **)this + 14),
                         (unsigned __int8 *)aMultiplayerdia,
                         aWonlinetournam,
                         *((_BYTE *)this + 61));
      v12 = *((_BYTE *)this + 62); /*0x5d5cb5*/
      v13 = (int *)*((_DWORD *)this + 14); /*0x5d5cb8*/
      *((_BYTE *)this + 61) = Bool_Overwrite; /*0x5d5cbb*/
      v14 = INIClass::ReadBool_Overwrite(v13, (unsigned __int8 *)aMultiplayerdia, aWonlineclantou, v12); /*0x5d5cca*/
      v15 = *((_BYTE *)this + 60); /*0x5d5ccf*/
      *((_BYTE *)this + 62) = v14; /*0x5d5cd2*/
      *((_BYTE *)this + 60) = INIClass::ReadBool_Overwrite( /*0x5d5cea*/
                                *((int **)this + 14),
                                (unsigned __int8 *)aMultiplayerdia,
                                aAlliesallowed,
                                v15);
      v16 = INIClass::ReadBool_Overwrite( /*0x5d5d00*/
              *((int **)this + 14),
              (unsigned __int8 *)aMultiplayerdia,
              aMustally,
              *((_BYTE *)this + 63));
      *((_BYTE *)this + 63) = v16; /*0x5d5d07*/
      if ( v16 ) /*0x5d5d0a*/
      {
        if ( !*((_BYTE *)this + 60) ) /*0x5d5d0c*/
          *((_BYTE *)this + 63) = 0; /*0x5d5d11*/
      }
    }
  }
  return this; /*0x5d5d16*/
}



// ==== 0x005D5D20  MultiplayerGameMode::Dtor  this=MultiplayerGameMode  sig=csp ====
void __thiscall MultiplayerGameMode::Dtor(MultiplayerGameMode *this)
{
  int v2; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v2 = 0; /*0x5d5d27*/
  for ( *(_DWORD *)this->__pad_0 = &MultiplayerGameMode::`vftable'; v2 < this->MultiplayerGameMode_field_0x18; ++v2 ) /*0x5d5d34*/
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(this->MultiplayerGameMode_field_0x0C + 4 * v2); /*0x5d5d39*/
    if ( v3 ) /*0x5d5d3e*/
      (**v3)(v3, 1); /*0x5d5d44*/
  }
  (*(void (__thiscall **)(int *))(this->MultiplayerGameMode_field_0x08 + 12))(&this->MultiplayerGameMode_field_0x08); /*0x5d5d56*/
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 14); /*0x5d5d59*/
  if ( v4 ) /*0x5d5d5e*/
    (**v4)(v4, 1); /*0x5d5d64*/
  DeleteAndZero((ObjectClass *)((char *)this + 48)); /*0x5d5d69*/
  DeleteAndZero((ObjectClass *)((char *)this + 44)); /*0x5d5d71*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 3); /*0x5d5d79*/
  DeleteAndZero::Alt((DeleteAndZero *)((char *)this + 32)); /*0x5d5d81*/
  MultiplayerGameMode_field_0x0C = (void *)this->MultiplayerGameMode_field_0x0C; /*0x5d5d86*/
  this->MultiplayerGameMode_field_0x08 = (int)&VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d5d89*/
  if ( MultiplayerGameMode_field_0x0C && BYTE1(this->MultiplayerGameMode_field_0x14) ) /*0x5d5d93*/
  {
    __3_YAXPAX_Z(MultiplayerGameMode_field_0x0C); /*0x5d5d99*/
    this->MultiplayerGameMode_field_0x0C = 0; /*0x5d5da1*/
  }
  BYTE1(this->MultiplayerGameMode_field_0x14) = 0; /*0x5d5da4*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d5da7*/
}



// ==== 0x005D5DB0  MultiplayerGameMode::MissionStubReturnZero  this=MultiplayerGameMode  sig=csp ====
int ScenarioClass::MissionStubReturnZero(MultiplayerGameMode *this)
{
  return -2; /*0x5d5db5*/
}



// ==== 0x005D5DC0  MultiplayerGameMode::GetModeNeg2  this=MultiplayerGameMode  sig=csp ====
int __thiscall Dialog::GetModeNeg2(MultiplayerGameMode *this)
{
  return *((_BYTE *)this + 63) != 0 ? 0 : -2;
}



// ==== 0x005D5DD0  MultiplayerGameMode::GetMode3  this=MultiplayerGameMode  sig=csp ====
int __thiscall Dialog::GetMode3(MultiplayerGameMode *this)
{
  return *((_BYTE *)this + 60) != 0 ? 3 : -2;
}



// ==== 0x005D5DE0  MultiplayerGameMode::IsValid  this=MultiplayerGameMode  sig=csp ====
bool __thiscall GameMode::IsValid(MultiplayerGameMode *this, unsigned int a2)
{
  return (!*((_BYTE *)this + 63) || a2 != -2) && a2 < 4; /*0x5d5df2*/
}



// ==== 0x005D5E10  MultiplayerGameMode::GetFirst  this=MultiplayerGameMode  sig=ida-proto ====
int MultiplayerGameMode_GetFirst()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5e1a*/
  {
    dword_ABFDA4 = 0; /*0x5d5e26*/
    g_MultiplayerMode |= 1u; /*0x5d5e2c*/
    dword_ABFDA8 = 0; /*0x5d5e32*/
    byte_ABFDAC = 1; /*0x5d5e38*/
    byte_ABFDAD = 0; /*0x5d5e3f*/
    g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5e45*/
    dword_ABFDB4 = 10; /*0x5d5e4f*/
    dword_ABFDB0 = 0; /*0x5d5e59*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5e5f*/
  }
  if ( !dword_ABFDB0 ) /*0x5d5e6d*/
    return 0; /*0x5d5e6f*/
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5e7a*/
  {
    dword_ABFDA4 = 0; /*0x5d5e86*/
    g_MultiplayerMode |= 1u; /*0x5d5e8c*/
    dword_ABFDA8 = 0; /*0x5d5e92*/
    byte_ABFDAC = 1; /*0x5d5e98*/
    byte_ABFDAD = 0; /*0x5d5e9f*/
    g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5ea5*/
    dword_ABFDB4 = 10; /*0x5d5eaf*/
    dword_ABFDB0 = 0; /*0x5d5eb9*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5ebf*/
  }
  return *(_DWORD *)dword_ABFDA4; /*0x5d5e71*/
}



// ==== 0x005D5ED0  MultiplayerGameMode::ListGet  this=MultiplayerGameMode  sig=ida-proto ====
int MultiplayerGameMode_ListGet()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5ed9*/
  {
    g_MultiplayerMode |= 1u; /*0x5d5ee6*/
    dword_ABFDA4 = 0; /*0x5d5eec*/
    dword_ABFDA8 = 0; /*0x5d5ef1*/
    byte_ABFDAC = 1; /*0x5d5ef6*/
    byte_ABFDAD = 0; /*0x5d5efc*/
    g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5f01*/
    dword_ABFDB4 = 10; /*0x5d5f0b*/
    dword_ABFDB0 = 0; /*0x5d5f15*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5f1a*/
  }
  return dword_ABFDB0; /*0x5d5f27*/
}



// ==== 0x005D5F30  MultiplayerGameMode::Find  this=MultiplayerGameMode  sig=csp ====
int __thiscall MultiplayerGameMode::Find(MultiplayerGameMode *this)
{
  int i; // ebp
  int result; // eax

  for ( i = 0; ; ++i ) /*0x5d5f3b*/
  {
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5f4e*/
    {
      g_MultiplayerMode |= 1u; /*0x5d5f57*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d5f62*/
      *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5f67*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d5f6d*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d5f78*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d5f7e*/
    }
    if ( i >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d5f8c*/
      break; /*0x5d5f8c*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5f95*/
    {
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d5fa1*/
      g_MultiplayerMode |= 1u; /*0x5d5fa7*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d5fad*/
      LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d5fb3*/
      *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d5fc0*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d5fc6*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d5fcc*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d5fd2*/
    }
    result = *(_DWORD *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * i); /*0x5d5fe3*/
    if ( *(MultiplayerGameMode **)(result + 40) == this ) /*0x5d5fe9*/
      return result; /*0x5d5fe9*/
  }
  return 0; /*0x5d5ff3*/
}



// ==== 0x005D6000  sub_5D6000  this=-  sig=ida-proto ====
char __fastcall sub_5D6000(HWND hWnd, int a2)
{
  int v3; // esi
  char result; // al
  LPARAM v5; // esi
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  ListBox::Clear(hWnd); /*0x5d600d*/
  v8 = dword_A8B238[0] == 5; /*0x5d6020*/
  v3 = 0; /*0x5d6027*/
  for ( i = 0; ; v3 = i ) /*0x5d6029*/
  {
    result = g_MultiplayerMode; /*0x5d602d*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6034*/
    {
      g_MultiplayerMode |= 1u; /*0x5d603d*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d6048*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d604d*/
      dword_ABFDB4 = 10; /*0x5d6057*/
      dword_ABFDB0 = 0; /*0x5d6066*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d606c*/
    }
    if ( v3 >= dword_ABFDB0 ) /*0x5d607a*/
      break; /*0x5d607a*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6087*/
    {
      g_MultiplayerMode |= 1u; /*0x5d6090*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d609b*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d60a0*/
      dword_ABFDB4 = 10; /*0x5d60aa*/
      dword_ABFDB0 = 0; /*0x5d60b9*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d60bf*/
    }
    v5 = *((_DWORD *)dword_ABFDA4 + v3); /*0x5d60cc*/
    if ( !v8 || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 64))(v5) ) /*0x5d60db*/
    {
      v6 = WideString::GetOrEmpty_Alt((wchar_t **)(v5 + 32)); /*0x5d60e5*/
      v7 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v6); /*0x5d60f7*/
      if ( *(_DWORD *)(v5 + 40) == a2 ) /*0x5d60ff*/
        SendMessageA(hWnd, 0x14Eu, v7, 0); /*0x5d610a*/
      SendMessageA(hWnd, 0x151u, v7, v5); /*0x5d6114*/
    }
    ++i; /*0x5d611d*/
  }
  return result; /*0x5d6128*/
}



// ==== 0x005D6130  SkirmishSetup_Setup  this=-  sig=csp ====
char __fastcall sub_5D6130(HWND hWnd, int a2)
{
  int v3; // esi
  char result; // al
  LPARAM v5; // esi
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5d614d*/
  v8 = dword_A8B238[0] == 5; /*0x5d6156*/
  v3 = 0; /*0x5d615b*/
  for ( i = 0; ; v3 = i ) /*0x5d615d*/
  {
    result = g_MultiplayerMode; /*0x5d6161*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6168*/
    {
      g_MultiplayerMode |= 1u; /*0x5d6171*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d617c*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d6181*/
      dword_ABFDB4 = 10; /*0x5d618b*/
      dword_ABFDB0 = 0; /*0x5d619a*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d61a0*/
    }
    if ( v3 >= dword_ABFDB0 ) /*0x5d61ae*/
      break; /*0x5d61ae*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d61bb*/
    {
      g_MultiplayerMode |= 1u; /*0x5d61c4*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d61cf*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d61d4*/
      dword_ABFDB4 = 10; /*0x5d61de*/
      dword_ABFDB0 = 0; /*0x5d61ed*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d61f3*/
    }
    v5 = *((_DWORD *)dword_ABFDA4 + v3); /*0x5d6200*/
    if ( (*(_BYTE *)(v5 + 61) || dword_A8B238[0] != 4 || !Network::IsMultiplayerActive()) /*0x5d6267*/
      && (*(_BYTE *)(v5 + 62) || dword_A8B238[0] != 4 || !Network::IsLobbyFeature())
      && (g_MPCooperativeState
       || *(_DWORD *)(dword_A8DA90 + 107) != -1
       || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 188))(v5))
      && (!v8 || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 64))(v5)) )
    {
      v6 = WideString::GetOrEmpty_Alt((wchar_t **)(v5 + 32)); /*0x5d6271*/
      v7 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v6); /*0x5d6280*/
      if ( *(_DWORD *)(v5 + 40) == a2 ) /*0x5d628b*/
        SendMessageA(hWnd, 0x186u, v7, 0); /*0x5d6296*/
      SendMessageA(hWnd, 0x19Au, v7, v5); /*0x5d62a0*/
    }
    ++i; /*0x5d62a9*/
  }
  return result; /*0x5d62b4*/
}



// ==== 0x005D62C0  MultiplayerGameMode::AssignPlayerIndex  this=MultiplayerGameMode  sig=csp ====
char PlayerClass::AssignPlayerIndex(MultiplayerGameMode *this)
{
  int i; // esi

  for ( i = 0; i < dword_A8DA84; ++i ) /*0x5d62ca*/
  {
    if ( SessionClass::GetPlayerSide((int *)dword_A8DA78[i]) == -3 ) /*0x5d62dc*/
      *(_DWORD *)(dword_A8DA78[i] + 107) = -1; /*0x5d62e7*/
    else
      *(_DWORD *)(dword_A8DA78[i] + 107) = i; /*0x5d62f8*/
  }
  return 1; /*0x5d6307*/
}



// ==== 0x005D6310  MultiplayerGameMode::MissionStubReturnZero2  this=MultiplayerGameMode  sig=csp ====
int __stdcall ScenarioClass::MissionStubReturnZero2(int *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x5d6310*/
  return result; /*0x5d6312*/
}



// ==== 0x005D6320  MultiplayerGameMode::saveGame  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::saveGame(MultiplayerGameMode *this)
{
  return 1; /*0x5d6322*/
}



// ==== 0x005D6330  MultiplayerGameMode::loadGame  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::loadGame(MultiplayerGameMode *this)
{
  return 1; /*0x5d6332*/
}



// ==== 0x005D6340  MultiplayerGameMode::createStartingForces  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::createStartingForces(MultiplayerGameMode *this)
{
  return 1; /*0x5d6342*/
}



// ==== 0x005D6350  MultiplayerGameMode::GetFlag  this=MultiplayerGameMode  sig=csp ====
char __thiscall DialogClass::GetFlag(MultiplayerGameMode *this)
{
  return this->u8_D; /*0x5d6353*/
}



// ==== 0x005D6360  MultiplayerGameMode::Stub  this=MultiplayerGameMode  sig=csp ====
char MPCooperative::Stub(MultiplayerGameMode *this)
{
  return 0; /*0x5d6362*/
}



// ==== 0x005D6370  MultiplayerGameMode::FindOpenSlot  this=MultiplayerGameMode  sig=csp ====
int __thiscall GameClass::FindOpenSlot(MultiplayerGameMode *this)
{
  int v1; // ebp
  int v2; // ebx
  GameClass *v4; // esi
  char inited; // al

  v1 = dword_A8B8D8; /*0x5d6372*/
  v2 = 0; /*0x5d6379*/
  if ( dword_A8B8D8 <= 0 ) /*0x5d6380*/
    return -1; /*0x5d63cc*/
  while ( 1 ) /*0x5d6387*/
  {
    v4 = *(GameClass **)(dword_A8B8CC + 4 * v2); /*0x5d6387*/
    if ( (unsigned __int8)IsRandMap::Sed((int)v4) ) /*0x5d638c*/
    {
      inited = (*(int (__thiscall **)(MultiplayerGameMode *))(*(_DWORD *)this->__pad_0 + 60))(this); /*0x5d6399*/
    }
    else
    {
      if ( !v4->__pad_3D[319] && Network::IsMultiplayerActive() ) /*0x5d63a8*/
        goto LABEL_8; /*0x5d63af*/
      inited = GameClass::initPlayerData(v4, (const char **)this + 12); /*0x5d63b7*/
    }
    if ( inited ) /*0x5d63be*/
      return v2; /*0x5d63c5*/
LABEL_8:
    if ( ++v2 >= v1 ) /*0x5d63c3*/
      return -1; /*0x5d63c3*/
  }
}



// ==== 0x005D63E0  MapPreview::Check  this=MultiplayerGameMode  sig=csp ====
int __thiscall MapPreview::Check(char *this, int a2)
{
  int result; // eax

  if ( (unsigned __int8)IsRandMap::Sed(a2) ) /*0x5d63ea*/
    return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 60))(this); /*0x5d63f7*/
  LOBYTE(result) = (*(_BYTE *)(a2 + 380) || !Network::IsMultiplayerActive()) /*0x5d641f*/
                && GameClass::initPlayerData((int *)a2, (const char **)this + 12);
  return result; /*0x5d63fa*/
}



// ==== 0x005D6430  MultiplayerGameMode::dispatchEvents  this=MultiplayerGameMode  sig=csp ====
// Microsoft VisualC 2-14/net runtime
int ScenarioClass::dispatchEvents(MultiplayerGameMode *this)
{
  return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69b684*/
}



// ==== 0x005D6440  MultiplayerGameMode::MissionStubReturnZero3  this=MultiplayerGameMode  sig=csp ====
int __thiscall ScenarioClass::MissionStubReturnZero3(MultiplayerGameMode *this)
{
  return (*(int (__thiscall **)(MultiplayerGameMode *))(*(_DWORD *)this->__pad_0 + 108))(this);
}



// ==== 0x005D6450  MultiplayerGameMode::FillEntries  this=MultiplayerGameMode  sig=csp ====
int __stdcall ListBox::FillEntries(MultiplayerGameMode *this, int a2, int a3)
{
  int result; // eax
  int i; // ebx
  LPARAM v5; // esi
  LRESULT v6; // ebp

  ListBox::Clear((ListBox *)this); /*0x5d6458*/
  result = a2; /*0x5d645d*/
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i ) /*0x5d6468*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * i); /*0x5d6473*/
    v6 = SendMessageA((HWND)this, 0x143u, 0, v5); /*0x5d6485*/
    if ( v5 == a3 ) /*0x5d648d*/
      SendMessageA((HWND)this, 0x14Eu, v6, 0); /*0x5d6498*/
    SendMessageA((HWND)this, 0x151u, v6, v5); /*0x5d64a6*/
    result = a2; /*0x5d64ac*/
  }
  return result; /*0x5d64b8*/
}



// ==== 0x005D64C0  MultiplayerGameMode::Refresh  this=MultiplayerGameMode  sig=csp ====
int __stdcall ListBox::Refresh(MultiplayerGameMode *this, int a2, int a3)
{
  int result; // eax
  int i; // ebp
  LPARAM v6; // esi
  LRESULT v7; // eax
  HWND hWnd; // [esp+10h] [ebp+4h]

  SendMessageA((HWND)this, 0x184u, 0, 0); /*0x5d64d7*/
  result = a2; /*0x5d64d9*/
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i ) /*0x5d64e4*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * i); /*0x5d64ee*/
    v7 = SendMessageA((HWND)this, 0x4CDu, 0, v6); /*0x5d64fa*/
    hWnd = (HWND)v7; /*0x5d6500*/
    if ( v6 == a3 ) /*0x5d6506*/
    {
      SendMessageA((HWND)this, 0x186u, v7, 0); /*0x5d6511*/
      v7 = (LRESULT)hWnd; /*0x5d6513*/
    }
    SendMessageA((HWND)this, 0x19Au, v7, v6); /*0x5d651f*/
    result = a2; /*0x5d6521*/
  }
  return result; /*0x5d652c*/
}



// ==== 0x005D6540  MultiplayerGameMode::FillPlayers  this=MultiplayerGameMode  sig=csp ====
int __thiscall ListBox::FillPlayers(MultiplayerGameMode *this, HWND hWnd, int a3)
{
  int i; // esi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax
  int v7; // ebx
  LPARAM v8; // esi
  wchar_t *v9; // eax
  LRESULT v10; // ebp
  int v11; // [esp+14h] [ebp+8h]

  ListBox::Clear((ListBox *)hWnd); /*0x5d6549*/
  for ( i = 0; i < this->MultiplayerGameMode_field_0x18; ++i ) /*0x5d6555*/
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(this->MultiplayerGameMode_field_0x0C + 4 * i); /*0x5d655a*/
    if ( v5 ) /*0x5d655f*/
      (**v5)(v5, 1); /*0x5d6565*/
  }
  (*(void (__thiscall **)(int *))(this->MultiplayerGameMode_field_0x08 + 12))(&this->MultiplayerGameMode_field_0x08); /*0x5d6577*/
  (*(void (__thiscall **)(MultiplayerGameMode *, int *))(*(_DWORD *)this->__pad_0 + 192))( /*0x5d657f*/
    this,
    &this->MultiplayerGameMode_field_0x08);
  result = a3; /*0x5d6585*/
  if ( a3 >= 0 && a3 < dword_A8DA84 ) /*0x5d6593*/
  {
    v7 = 0; /*0x5d659b*/
    v11 = *(_DWORD *)(dword_A8DA78[a3] + 107); /*0x5d65a3*/
    result = this->MultiplayerGameMode_field_0x18; /*0x5d65a7*/
    if ( result > 0 ) /*0x5d65ac*/
    {
      do /*0x5d6608*/
      {
        v8 = *(_DWORD *)(this->MultiplayerGameMode_field_0x0C + 4 * v7); /*0x5d65b2*/
        v9 = WideString::GetOrEmpty_Alt((wchar_t **)(v8 + 4)); /*0x5d65b8*/
        v10 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v9); /*0x5d65d3*/
        if ( *(_DWORD *)(v8 + 8) == v11 ) /*0x5d65db*/
          SendMessageA(hWnd, 0x14Eu, v10, 0); /*0x5d65ea*/
        SendMessageA(hWnd, 0x151u, v10, v8); /*0x5d65fc*/
        result = this->MultiplayerGameMode_field_0x18; /*0x5d6602*/
        ++v7; /*0x5d6605*/
      }
      while ( v7 < result ); /*0x5d6608*/
    }
  }
  return result; /*0x5d660b*/
}



// ==== 0x005D6620  StreamWrapper::readData  this=StreamWrapper  sig=csp ====
int __thiscall StreamWrapper::readData(StreamWrapper *this, int a2)
{
  int v3; // eax
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // edx
  int v7; // ecx
  int *i; // esi
  int result; // eax

  v3 = *((_DWORD *)this + 6); /*0x5d6624*/
  if ( v3 < 3 ) /*0x5d662a*/
  {
    v4 = 0; /*0x5d662c*/
    if ( v3 > 0 ) /*0x5d6630*/
    {
      do /*0x5d6648*/
      {
        v5 = *(void (__thiscall ****)(_DWORD, int))(this->StreamWrapper_field_0x0C + 4 * v4); /*0x5d6635*/
        if ( v5 ) /*0x5d663a*/
          (**v5)(v5, 1); /*0x5d6640*/
        ++v4; /*0x5d6645*/
      }
      while ( v4 < *((_DWORD *)this + 6) ); /*0x5d6648*/
    }
    (*(void (__thiscall **)(int *))(this->StreamWrapper_field_0x08 + 12))(&this->StreamWrapper_field_0x08); /*0x5d6652*/
    (*(void (__thiscall **)(StreamWrapper *, int *))(*(_DWORD *)this->__pad_0 + 192))( /*0x5d665a*/
      this,
      &this->StreamWrapper_field_0x08);
  }
  v6 = *((_DWORD *)this + 6); /*0x5d6660*/
  v7 = 0; /*0x5d6663*/
  if ( v6 <= 0 ) /*0x5d6667*/
    return 0; /*0x5d6683*/
  for ( i = (int *)this->StreamWrapper_field_0x0C; ; ++i ) /*0x5d6669*/
  {
    result = *i; /*0x5d6670*/
    if ( *i ) /*0x5d6670*/
    {
      if ( *(_DWORD *)(result + 8) == a2 ) /*0x5d6679*/
        break; /*0x5d6679*/
    }
    if ( ++v7 >= v6 ) /*0x5d6681*/
      return 0; /*0x5d6681*/
  }
  return result; /*0x5d6685*/
}



// ==== 0x005D6690  MultiplayerGameMode::AddEntries  this=MultiplayerGameMode  sig=csp ====
int __stdcall ListBox::AddEntries(MultiplayerGameMode *this)
{
  MPCombatTeam *v1; // eax
  wchar_t **v2; // edi
  int MultiplayerGameMode_field_0x08; // ecx
  int MultiplayerGameMode_field_0x14; // eax
  int MultiplayerGameMode_field_0x10; // eax
  int MultiplayerGameMode_field_0x04; // edx
  int result; // eax
  int i; // ebx
  wchar_t **v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx

  v1 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5d6695*/
  if ( v1 ) /*0x5d669f*/
    v2 = MPCombatTeam::Constructor(v1); /*0x5d66a8*/
  else
    v2 = 0; /*0x5d66ac*/
  MultiplayerGameMode_field_0x08 = this->MultiplayerGameMode_field_0x08; /*0x5d66b2*/
  if ( this->MultiplayerGameMode_field_0x10 < MultiplayerGameMode_field_0x08 /*0x5d66d7*/
    || (BYTE1(this->MultiplayerGameMode_field_0x0C) || !MultiplayerGameMode_field_0x08)
    && (MultiplayerGameMode_field_0x14 = this->MultiplayerGameMode_field_0x14, MultiplayerGameMode_field_0x14 > 0)
    && (*(unsigned __int8 (__thiscall **)(MultiplayerGameMode *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
         this,
         MultiplayerGameMode_field_0x08 + MultiplayerGameMode_field_0x14,
         0) )
  {
    MultiplayerGameMode_field_0x10 = this->MultiplayerGameMode_field_0x10; /*0x5d66de*/
    MultiplayerGameMode_field_0x04 = this->MultiplayerGameMode_field_0x04; /*0x5d66e1*/
    this->MultiplayerGameMode_field_0x10 = MultiplayerGameMode_field_0x10 + 1; /*0x5d66e7*/
    *(_DWORD *)(MultiplayerGameMode_field_0x04 + 4 * MultiplayerGameMode_field_0x10) = v2; /*0x5d66ea*/
  }
  result = dword_A8B548; /*0x5d66ed*/
  for ( i = 1; i <= dword_A8B548; ++i ) /*0x5d66f9*/
  {
    v9 = ListBox::Constructor((ListBox *)i); /*0x5d6705*/
    v10 = this->MultiplayerGameMode_field_0x08; /*0x5d6707*/
    if ( this->MultiplayerGameMode_field_0x10 < v10 /*0x5d6729*/
      || (BYTE1(this->MultiplayerGameMode_field_0x0C) || !v10)
      && (v11 = this->MultiplayerGameMode_field_0x14, v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(MultiplayerGameMode *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
           this,
           v10 + v11,
           0) )
    {
      v12 = this->MultiplayerGameMode_field_0x10; /*0x5d6730*/
      v13 = this->MultiplayerGameMode_field_0x04; /*0x5d6733*/
      this->MultiplayerGameMode_field_0x10 = v12 + 1; /*0x5d6739*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x5d673c*/
    }
    result = dword_A8B548; /*0x5d673f*/
  }
  return result; /*0x5d6749*/
}



// ==== 0x005D6790  MultiplayerGameMode::ClearFlag  this=MultiplayerGameMode  sig=csp ====
char ScenarioClass::ClearFlag(MultiplayerGameMode *this)
{
  void *ptr_0; // ecx

  ptr_0 = dword_A8B230->ptr_0; /*0x5d6795*/
  BYTE1(ptr_0) = ((unsigned __int16)dword_A8B230->ptr_0 >> 8) & 0xFB; /*0x5d6797*/
  dword_A8B230->ptr_0 = ptr_0; /*0x5d679a*/
  return 1; /*0x5d679e*/
}



// ==== 0x005D67A0  MultiplayerGameMode::MissionStubReturnZero4  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass::MissionStubReturnZero4(MultiplayerGameMode *this)
{
  return 1; /*0x5d67a2*/
}



// ==== 0x005D67B0  GameConfig::Constructor  this=GameConfig  sig=csp ====
char *__thiscall GameConfig::Constructor(GameConfig *this)
{
  GameConfig *v1; // edi
  int v2; // eax
  int v3; // esi
  CCFileClass v6; // [esp+Ch] [ebp-6Ch] BYREF
  char v7[12]; // [esp+64h] [ebp-14h] BYREF
  int v8; // [esp+70h] [ebp-8h]

  v1 = this; /*0x5d67b5*/
  if ( !*(_DWORD *)&this->__pad_0[56] ) /*0x5d67bd*/
  {
    v2 = __2_YAPAXI_Z(0x58u); /*0x5d67c9*/
    v3 = v2; /*0x5d67ce*/
    if ( v2 ) /*0x5d67d5*/
    {
      *(_DWORD *)(v2 + 4) = 0; /*0x5d67de*/
      *(_DWORD *)(v2 + 8) = 0; /*0x5d67e1*/
      *(_DWORD *)(v2 + 20) = 0; /*0x5d67e6*/
      *(_DWORD *)(v2 + 24) = 0; /*0x5d67e9*/
      *(_DWORD *)(v2 + 16) = &GenericNode::`vftable'; /*0x5d67ec*/
      GenericNode::Constructor((GenericNode *)(v2 + 28)); /*0x5d67f2*/
      *(_DWORD *)(v3 + 12) = &GenericList::`vftable'; /*0x5d67fa*/
      LinkedList::Prepend((LinkedList *)(v3 + 16), v3 + 28); /*0x5d6801*/
      v1 = this; /*0x5d6806*/
      *(_DWORD *)(v3 + 12) = &List<INIClass::INISection *>::`vftable'; /*0x5d680a*/
      *(_DWORD *)(v3 + 40) = 0; /*0x5d6811*/
      *(_DWORD *)(v3 + 44) = 0; /*0x5d6814*/
      *(_DWORD *)(v3 + 48) = 0; /*0x5d6817*/
      *(_BYTE *)(v3 + 52) = 0; /*0x5d681a*/
      *(_DWORD *)(v3 + 56) = 0; /*0x5d681d*/
      *(_DWORD *)(v3 + 60) = 0; /*0x5d6820*/
      *(_BYTE *)(v3 + 64) = 0; /*0x5d6823*/
      *(_DWORD *)v3 = &CCINIClass_Vtable; /*0x5d6826*/
    }
    else
    {
      v3 = 0; /*0x5d682f*/
    }
    *(_DWORD *)&v1->__pad_0[56] = v3; /*0x5d6839*/
    CCFileClass::Construct2(&v6, (char **)&v1->__pad_0[44]); /*0x5d683c*/
    if ( (unsigned __int8)CCFileClass::Open(&v6, 0) ) /*0x5d6846*/
      CCINIClass::Load(*(CCINIClass **)&v1->__pad_0[56], (int)&v6, 0, 0); /*0x5d685a*/
    *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x5d6863*/
    v8 = 0; /*0x5d686b*/
    Vector::Clear((int)v7); /*0x5d686f*/
    *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x5d6878*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x5d6880*/
  }
  return *(char **)&v1->__pad_0[56]; /*0x5d6888*/
}



// ==== 0x005D6890  MultiplayerGameMode::FindStartingCell  this=MultiplayerGameMode  sig=csp ====
_DWORD *__stdcall ObserverClass::FindStartingCell(MultiplayerGameMode *this, int a2, int a3, int a4)
{
  double v4; // st7
  int v5; // esi
  int v6; // eax
  int *p_uniqueId; // ecx
  House *v8; // ecx
  int v9; // esi
  int v10; // esi
  int v12; // esi
  House *v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // esi
  int v19; // eax
  double v20; // [esp+0h] [ebp-28h]
  int v21; // [esp+18h] [ebp-10h]
  House *v22; // [esp+1Ch] [ebp-Ch]
  House *v23; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  int v26; // [esp+24h] [ebp-4h]
  int v27; // [esp+24h] [ebp-4h]

  v5 = 0; /*0x5d68a5*/
  v6 = *(_DWORD *)(a3 + 16); /*0x5d68a7*/
  if ( v6 > 0 ) /*0x5d68ac*/
  {
    p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5d68ae*/
    do /*0x5d68bf*/
    {
      if ( *p_uniqueId != -1 ) /*0x5d68b7*/
        break; /*0x5d68b7*/
      ++v5; /*0x5d68b9*/
      ++p_uniqueId; /*0x5d68ba*/
    }
    while ( v5 < v6 ); /*0x5d68bf*/
  }
  if ( v5 == v6 ) /*0x5d68c3*/
  {
    byte_ABFDD4 = 0; /*0x5d68d1*/
    byte_ABFDD5 = 0; /*0x5d68d8*/
    v8 = (House *)*((_DWORD *)stru_A80220.? + a2); /*0x5d68df*/
    v22 = v8; /*0x5d68e4*/
    if ( !v8 ) /*0x5d68e8*/
      goto LABEL_13; /*0x5d68e8*/
    v9 = 0; /*0x5d68ef*/
    if ( dword_A8DA84 <= 0 ) /*0x5d68f3*/
      goto LABEL_13; /*0x5d68f3*/
    while ( !(unsigned __int8)House::IsCurrentPlayer(v8) /*0x5d6922*/
         || wcscmp((const wchar_t *)&v22[68].House_field_0x298 + 1, (const wchar_t *)dword_A8DA78[v9]) )
    {
      if ( ++v9 >= dword_A8DA84 ) /*0x5d692c*/
        goto LABEL_13; /*0x5d692c*/
      v8 = v22; /*0x5d68f7*/
    }
    if ( *(_DWORD *)(dword_A8DA78[v9] + 107) != -1 ) /*0x5d69a1*/
    {
LABEL_13:
      v10 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)(a3 + 16) - 1); /*0x5d692e*/
      Debug::Log(); /*0x5d695f*/
      *(_BYTE *)(v10 + a4) = 1; /*0x5d696a*/
      *(&dword_A8B230[124].uniqueId + v10) = a2; /*0x5d6977*/
      *(_DWORD *)this->__pad_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v10); /*0x5d6984*/
      return this->__pad_0; /*0x5d698c*/
    }
    v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)(a3 + 16) - 1); /*0x5d69bd*/
    *(_BYTE *)(v12 + a4) = 1; /*0x5d69c1*/
    *(&dword_A8B230[124].uniqueId + v12) = a2; /*0x5d69ca*/
    byte_ABFDD4 = 1; /*0x5d69d1*/
    goto LABEL_38; /*0x5d69ed*/
  }
  if ( byte_ABFDD4 && !byte_ABFDD5 ) /*0x5d6a02*/
  {
    byte_ABFDD5 = 1; /*0x5d6a07*/
    *(&dword_A8B230[124].uniqueId + v5) = a2; /*0x5d6a0e*/
    *(_DWORD *)this->__pad_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v5); /*0x5d6a1e*/
    return this->__pad_0; /*0x5d6a26*/
  }
  v13 = (House *)*((_DWORD *)stru_A80220.? + a2); /*0x5d6a31*/
  v23 = v13; /*0x5d6a36*/
  if ( !v13 ) /*0x5d6a3a*/
    goto LABEL_26; /*0x5d6a3a*/
  v14 = 0; /*0x5d6a41*/
  if ( dword_A8DA84 <= 0 ) /*0x5d6a45*/
    goto LABEL_26; /*0x5d6a45*/
  while ( !(unsigned __int8)House::IsCurrentPlayer(v13) /*0x5d6a75*/
       || wcscmp((const wchar_t *)&v23[68].House_field_0x298 + 1, (const wchar_t *)dword_A8DA78[v14]) )
  {
    if ( ++v14 >= dword_A8DA84 ) /*0x5d6a83*/
      goto LABEL_26; /*0x5d6a83*/
    v13 = v23; /*0x5d6a49*/
  }
  if ( *(_DWORD *)(dword_A8DA78[v14] + 107) != -1 ) /*0x5d6b98*/
  {
LABEL_26:
    v15 = *(_DWORD *)(a3 + 16); /*0x5d6a85*/
    v12 = -1; /*0x5d6a88*/
    v16 = 0; /*0x5d6a8b*/
    v25 = -1; /*0x5d6a8d*/
    for ( i = -1; v16 < v15; ++v16 ) /*0x5d6a97*/
    {
      if ( !*(_BYTE *)(v16 + a4) ) /*0x5d6aa0*/
      {
        v17 = 0; /*0x5d6aaa*/
        v18 = 0; /*0x5d6aac*/
        v21 = 0; /*0x5d6ab0*/
        if ( v15 > 0 ) /*0x5d6ab4*/
        {
          do /*0x5d6b18*/
          {
            if ( *(_BYTE *)(v18 + a4) ) /*0x5d6ab9*/
            {
              v19 = *(_DWORD *)(a3 + 4); /*0x5d6abf*/
              v26 = (__int16)(*(_WORD *)(v19 + 4 * v16) - *(_WORD *)(v19 + 4 * v18)); /*0x5d6add*/
              __asm { fild [esp+28h+var_4] } /*0x5d6ae1*/
              v27 = (__int16)(*(_WORD *)(v19 + 4 * v16 + 2) - *(_WORD *)(v19 + 4 * v18 + 2)); /*0x5d6ae5*/
              __asm /*0x5d6ae9*/
              {
                fild [esp+28h+var_4]
                fld st
                fmul st, st(1)
                fld st(2)
                fmul st, st(3)
                faddp st(1), st
                fstp [esp+28h+var_28]; double
                fstp st
                fstp st
              }
              Math::Sqrt(v20); /*0x5d6afe*/
              v21 += (__int16)Math::RoundToInt(v4); /*0x5d6b0e*/
            }
            ++v18; /*0x5d6b15*/
          }
          while ( v18 < *(_DWORD *)(a3 + 16) ); /*0x5d6b18*/
          v17 = v21; /*0x5d6b1a*/
        }
        if ( v17 > v25 ) /*0x5d6b22*/
        {
          v25 = v17; /*0x5d6b24*/
          i = v16; /*0x5d6b28*/
        }
        v12 = i; /*0x5d6b2c*/
      }
      v15 = *(_DWORD *)(a3 + 16); /*0x5d6b30*/
    }
    *(_BYTE *)(v12 + a4) = 1; /*0x5d6b42*/
    *(&dword_A8B230[124].uniqueId + v12) = a2; /*0x5d6b4c*/
LABEL_38:
    Debug::Log(); /*0x5d6b6a*/
    *(_DWORD *)this->__pad_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v12); /*0x5d6b7b*/
    return this->__pad_0; /*0x5d6b83*/
  }
  byte_ABFDD5 = 1; /*0x5d6ba0*/
  byte_ABFDD4 = 1; /*0x5d6ba5*/
  Debug::Log(); /*0x5d6bc0*/
  *(_DWORD *)this->__pad_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v5); /*0x5d6bd3*/
  return this->__pad_0; /*0x5d6986*/
}



// ==== 0x005D6BE0  MultiplayerGameMode::AssignStartPositions  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass::AssignStartPositions(MultiplayerGameMode *this)
{
  int i; // edi
  HouseClass *v2; // ecx
  int startingAllies; // esi
  Multiplayer v5[4]; // [esp+4h] [ebp-18h] BYREF
  void *Block; // [esp+8h] [ebp-14h]
  char v7; // [esp+11h] [ebp-Bh]

  Multiplayer::FindStartPositions(v5); /*0x5d6bec*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x5d6bfa*/
  {
    v2 = (HouseClass *)*((_DWORD *)stru_A80220.? + i); /*0x5d6c02*/
    if ( !*(_BYTE *)(v2->relatedTagsCapacity + 422) ) /*0x5d6c08*/
    {
      startingAllies = v2->startingAllies; /*0x5d6c12*/
      if ( startingAllies != -2 ) /*0x5d6c1b*/
      {
        HouseClass::SetMapSeed(v2, *((_DWORD *)Block + startingAllies)); /*0x5d6c25*/
        *(&dword_A8B230[124].uniqueId + startingAllies) = i; /*0x5d6c2f*/
      }
    }
  }
  *(_DWORD *)v5 = &VectorClass<Cell>::`vftable'; /*0x5d6c45*/
  if ( Block && v7 ) /*0x5d6c58*/
    __3_YAXPAX_Z(Block); /*0x5d6c5b*/
  return 1; /*0x5d6c4f*/
}



// ==== 0x005D6C70  MultiplayerGameMode::AssignStartingPoints  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::AssignStartingPoints(MultiplayerGameMode *this, char a2)
{
  int v2; // eax
  int *p_uniqueId; // ecx
  int i; // esi
  HouseClass *v5; // edi
  char v6; // bl
  int v7; // edx
  int v8; // eax
  int *v9; // ecx
  int v11; // [esp-14h] [ebp-40h]
  Multiplayer v13[16]; // [esp+4h] [ebp-28h] BYREF
  Multiplayer v14[4]; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  char v16; // [esp+21h] [ebp-Bh]

  Multiplayer::FindStartPositions(v14); /*0x5d6c7f*/
  v2 = 0; /*0x5d6c8a*/
  p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5d6c8c*/
  do /*0x5d6caa*/
    v13[v2++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5d6c97*/
  while ( v2 < 16 ); /*0x5d6caa*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x5d6cb6*/
  {
    v5 = (HouseClass *)*((_DWORD *)stru_A80220.? + i); /*0x5d6cc5*/
    if ( !*(_BYTE *)(v5->relatedTagsCapacity + 422) ) /*0x5d6ccb*/
    {
      v6 = 0; /*0x5d6cdb*/
      v7 = -1; /*0x5d6cdd*/
      v8 = 0; /*0x5d6ce0*/
      v9 = &dword_A8B230[124].uniqueId; /*0x5d6ce2*/
      do /*0x5d6cf7*/
      {
        if ( *v9 == i ) /*0x5d6cea*/
        {
          v6 = 1; /*0x5d6cec*/
          v7 = v8; /*0x5d6cee*/
        }
        ++v8; /*0x5d6cf0*/
        ++v9; /*0x5d6cf1*/
      }
      while ( v8 < 16 ); /*0x5d6cf7*/
      if ( v6 ) /*0x5d6cfb*/
      {
        HouseClass::SetMapSeed(v5, *((_DWORD *)Block + v7)); /*0x5d6d3a*/
      }
      else
      {
        Debug::Log(); /*0x5d6d07*/
        v11 = *(_DWORD *)(*(int (__thiscall **)(MultiplayerGameMode *, char *, int, Multiplayer *, Multiplayer *))(*(_DWORD *)this->__pad_0 + 196))( /*0x5d6d2d*/
                           this,
                           &a2,
                           i,
                           v14,
                           v13);
        HouseClass::SetMapSeed(v5, v11); /*0x5d6d2e*/
      }
    }
  }
  *(_DWORD *)v14 = &VectorClass<Cell>::`vftable'; /*0x5d6d54*/
  if ( Block && v16 ) /*0x5d6d67*/
    __3_YAXPAX_Z(Block); /*0x5d6d6a*/
  return 1; /*0x5d6d74*/
}



// ==== 0x005D6D80  ObjectClass::ComputeMultiEngineerAdjustment  this=ObjectClass  sig=csp ====
char __thiscall ComputeMultiEngineerAdjustment(TechnoClass *this)
{
  int v1; // ebp
  int v2; // edx
  HouseClass *v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  RulesClass *v7; // ebp
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // edx
  int v12; // eax
  int i; // esi
  int v14; // ecx
  int v15; // ebx
  int v16; // esi
  int v17; // edi
  int ptr_0; // edx
  int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h]
  TechnoClass *v22; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x5d6d8a*/
  v22 = this; /*0x5d6d90*/
  if ( *(int *)&stru_A8B250.__pad_0[32] > 0 ) /*0x5d6d94*/
  {
    v2 = dword_A80238; /*0x5d6d9a*/
    v20 = 0; /*0x5d6da0*/
    if ( dword_A80238 > 0 ) /*0x5d6da6*/
    {
      v3 = dword_A8022C; /*0x5d6da8*/
      do /*0x5d6dd9*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(v3->ptr_0 + 52) + 422) ) /*0x5d6db5*/
          v20 |= 1 << *(_DWORD *)(*(_DWORD *)(v3->ptr_0 + 52) + 180); /*0x5d6dd1*/
        v3 = (HouseClass *)((char *)v3 + 4); /*0x5d6dd5*/
        --v2; /*0x5d6dd8*/
      }
      while ( v2 ); /*0x5d6dd9*/
    }
    v4 = 0; /*0x5d6de1*/
    v5 = 0; /*0x5d6de3*/
    v6 = 0; /*0x5d6de5*/
    v21 = 0; /*0x5d6de9*/
    if ( dword_A83CF0 > 0 ) /*0x5d6ded*/
    {
      v7 = dword_8871E0; /*0x5d6def*/
      do /*0x5d6e66*/
      {
        v8 = *((_DWORD *)dword_A83CE4 + v6); /*0x5d6dfb*/
        if ( *(_BYTE *)(v8 + 1749) && (*(_DWORD *)(v8 + 1740) & v20) != 0 && *(_DWORD *)(v8 + 1588) <= g_RulesInitConfig ) /*0x5d6e24*/
        {
          v9 = v7->AutocreateTime[1]; /*0x5d6e26*/
          v10 = 0; /*0x5d6e2c*/
          if ( v9 <= 0 ) /*0x5d6e30*/
          {
LABEL_16:
            ++v5; /*0x5d6e44*/
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 172))(v8); /*0x5d6e47*/
            v7 = dword_8871E0; /*0x5d6e4d*/
            v4 += v12; /*0x5d6e53*/
          }
          else
          {
            v11 = (_DWORD *)v7->ReloadRate[0]; /*0x5d6e32*/
            while ( *v11 != v8 ) /*0x5d6e3a*/
            {
              ++v10; /*0x5d6e3c*/
              ++v11; /*0x5d6e3d*/
              if ( v10 >= v9 ) /*0x5d6e42*/
                goto LABEL_16; /*0x5d6e42*/
            }
          }
        }
        v6 = ++v21; /*0x5d6e5f*/
      }
      while ( v21 < dword_A83CF0 ); /*0x5d6e66*/
    }
    for ( i = 0; i < dword_A8E358; ++i ) /*0x5d6e71*/
    {
      v14 = *((_DWORD *)dword_A8E34C + i); /*0x5d6e79*/
      if ( *(_BYTE *)(v14 + 1749) /*0x5d6ea1*/
        && (*(_DWORD *)(v14 + 1740) & v20) != 0
        && *(_DWORD *)(v14 + 1588) <= g_RulesInitConfig )
      {
        ++v5; /*0x5d6ea5*/
        v4 += (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 172))(v14); /*0x5d6eac*/
      }
    }
    if ( !v5 ) /*0x5d6eba*/
      v5 = 1; /*0x5d6ebc*/
    v1 = *(_DWORD *)&stru_A8B250.__pad_0[32] * ((v4 + v5 / 2) / v5); /*0x5d6ecf*/
  }
  v15 = 0; /*0x5d6edb*/
  if ( dword_A80238 <= 0 ) /*0x5d6edf*/
  {
LABEL_42:
    Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 0xFFFF); /*0x5d6feb*/
    Debug::Log(); /*0x5d7009*/
    return 1; /*0x5d701a*/
  }
  while ( 1 ) /*0x5d6eea*/
  {
    v16 = *(&dword_A8022C->ptr_0 + v15); /*0x5d6eea*/
    if ( *(_BYTE *)(*(_DWORD *)(v16 + 52) + 422) ) /*0x5d6ef0*/
      goto LABEL_41; /*0x5d6ef0*/
    if ( v16 ) /*0x5d6f00*/
    {
      v17 = 0; /*0x5d6f07*/
      if ( dword_A8DA84 > 0 ) /*0x5d6f0b*/
      {
        while ( !(unsigned __int8)House::IsCurrentPlayer((House *)v16) /*0x5d6f33*/
             || wcscmp((const wchar_t *)(v16 + 90154), (const wchar_t *)dword_A8DA78[v17]) )
        {
          if ( ++v17 >= dword_A8DA84 ) /*0x5d6f3d*/
            goto LABEL_36; /*0x5d6f3d*/
        }
        if ( *(_DWORD *)(dword_A8DA78[v17] + 107) == -1 ) /*0x5d6f53*/
          goto LABEL_41; /*0x5d6f53*/
      }
    }
LABEL_36:
    ptr_0 = v22->ptr_0; /*0x5d6f63*/
    v20 = v1; /*0x5d6f65*/
    if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *, int, int *))(ptr_0 + 200))(v22, v16, &v20) /*0x5d6f83*/
      || !(*(unsigned __int8 (__thiscall **)(TechnoClass *, int, int *))(v22->ptr_0 + 204))(v22, v16, &v20) )
    {
      return 0; /*0x5d7013*/
    }
    if ( v20 > 0 ) /*0x5d6f97*/
      HouseClass::AddPower((HouseClass *)v16, v20); /*0x5d6f9c*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21920) + 12))(v16 + 21920); /*0x5d6fad*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21980) + 12))(v16 + 21980); /*0x5d6fbc*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21960) + 12))(v16 + 21960); /*0x5d6fcb*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21940) + 12))(v16 + 21940); /*0x5d6fda*/
LABEL_41:
    if ( ++v15 >= dword_A80238 ) /*0x5d6fe5*/
      goto LABEL_42; /*0x5d6fe5*/
  }
}



// ==== 0x005D7030  MultiplayerGameMode::CreateMCV  this=MultiplayerGameMode  sig=csp ====
char __stdcall AI::CreateMCV(MultiplayerGameMode *this, int a2)
{
  HouseClass *v3; // edi
  int v4; // esi
  int *v5; // eax
  int *v6; // eax
  int *v7; // esi
  int v8; // ebx
  _DWORD *StartCoords; // eax
  __int16 *CurrentOption; // eax
  _DWORD v11[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !stru_A8B250.__pad_0[8] ) /*0x5d703c*/
    return 1; /*0x5d7045*/
  v3 = (HouseClass *)this; /*0x5d704d*/
  v4 = BuildingClass::FindBySWType((BuildingClass *)this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2848); /*0x5d705e*/
  if ( v4 ) /*0x5d7062*/
  {
    v5 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x5d7069*/
    if ( v5 ) /*0x5d7073*/
    {
      v6 = (int *)UnitClass::Construct(v5, v4, v3); /*0x5d7079*/
      v7 = v6; /*0x5d707e*/
      if ( v6 ) /*0x5d7082*/
      {
        v8 = *v6; /*0x5d7085*/
        StartCoords = HouseClass::GetStartCoords(v3, v11); /*0x5d7090*/
        if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(v8 + 216))(v7, StartCoords, 0) ) /*0x5d7098*/
          return 1; /*0x5d70aa*/
        CurrentOption = (__int16 *)HouseClass::GetCurrentOption(v3, &this); /*0x5d70b6*/
        if ( FindInfantryDeployPosition(v7, CurrentOption, 1) ) /*0x5d70bf*/
          return 1; /*0x5d70cf*/
        (*(void (__thiscall **)(int *, int))(*v7 + 32))(v7, 1); /*0x5d70d8*/
      }
    }
  }
  return 0; /*0x5d703e*/
}


// ==== 0x005D70F0  MultiplayerGameMode::AIDecision  this=MultiplayerGameMode  sig=csp ====
char __stdcall HouseClass::AIDecision(MultiplayerGameMode *this, int *a2)
{
  int v2; // ebp
  int InfantryTypeVector_field_0x14; // edx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edi
  int InfantryTypeVector_field_0x08; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v18; // ebp
  int v19; // ecx
  int v20; // eax
  int InfantryTypeVector_field_0x1C; // edx
  int v22; // esi
  void **v23; // eax
  int *v24; // edi
  __int16 *CurrentOption; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h] BYREF
  InfantryTypeVector v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+38h] [ebp-10h]
  char v32; // [esp+3Dh] [ebp-Bh]
  int v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]

  v2 = 0; /*0x5d70fb*/
  if ( *a2 <= 0 ) /*0x5d7101*/
    return 1; /*0x5d7492*/
  v28 = *a2; /*0x5d710d*/
  UnitTypeVector::Construct2((UnitTypeVector *)&v30.InfantryTypeVector_field_0x18, 0, 0); /*0x5d7111*/
  v30.InfantryTypeVector_field_0x18 = (int)&DynamicVectorClass<UnitTypeClass *>::`vftable'; /*0x5d711c*/
  v34 = 10; /*0x5d7124*/
  v33 = 0; /*0x5d712c*/
  InfantryTypeVector::ConstructFromData(&v30, 0, 0); /*0x5d7130*/
  InfantryTypeVector_field_0x14 = 10; /*0x5d7139*/
  *(_DWORD *)v30.__pad_0 = &DynamicVectorClass<InfantryTypeClass *>::`vftable'; /*0x5d713e*/
  v30.InfantryTypeVector_field_0x14 = 10; /*0x5d7146*/
  v4 = this->u8_D; /*0x5d714a*/
  v30.InfantryTypeVector_field_0x10 = 0; /*0x5d714d*/
  v5 = 1 << *(_DWORD *)(v4 + 180); /*0x5d7161*/
  if ( dword_A83CF0 <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = v31; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *((_DWORD *)dword_A83CE4 + v2); /*0x5d7175*/
    if ( *(_BYTE *)(v7 + 1749) /*0x5d719e*/
      && (v5 & *(_DWORD *)(v7 + 1740)) != 0
      && *(_DWORD *)(v7 + 1588) <= *((_DWORD *)this + 117) )
    {
      v8 = 0; /*0x5d71a6*/
      v9 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2864); /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
LABEL_11:
        if ( v33 < v6 ) /*0x5d71c8*/
          goto LABEL_16; /*0x5d71c8*/
        if ( (v32 || !v6) && v34 > 0 ) /*0x5d71dc*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v30.InfantryTypeVector_field_0x18 + 8))( /*0x5d71eb*/
                 &v30.InfantryTypeVector_field_0x18,
                 v34 + v6,
                 0) )
          {
LABEL_16:
            v11 = v33++; /*0x5d71f2*/
            *(_DWORD *)(v30.InfantryTypeVector_field_0x1C + 4 * v11) = v7; /*0x5d7201*/
          }
          v6 = v31; /*0x5d7204*/
        }
      }
      else
      {
        v10 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2852); /*0x5d71b2*/
        while ( *v10 != v7 ) /*0x5d71ba*/
        {
          ++v8; /*0x5d71bc*/
          ++v10; /*0x5d71bd*/
          if ( v8 >= v9 ) /*0x5d71c2*/
            goto LABEL_11; /*0x5d71c2*/
        }
      }
    }
    ++v2; /*0x5d7208*/
  }
  while ( v2 < dword_A83CF0 ); /*0x5d7210*/
  InfantryTypeVector_field_0x14 = v30.InfantryTypeVector_field_0x14; /*0x5d7216*/
LABEL_20:
  v12 = 0; /*0x5d721a*/
  if ( dword_A8E358 > 0 ) /*0x5d7223*/
  {
    InfantryTypeVector_field_0x08 = v30.InfantryTypeVector_field_0x08; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *((_DWORD *)dword_A8E34C + v12); /*0x5d7239*/
      if ( *(_BYTE *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(_DWORD *)(v14 + 1740)) != 0
        && *(_DWORD *)(v14 + 1588) <= *((_DWORD *)this + 117) )
      {
        if ( v30.InfantryTypeVector_field_0x10 < InfantryTypeVector_field_0x08 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( (BYTE1(v30.InfantryTypeVector_field_0x0C) || !InfantryTypeVector_field_0x08) /*0x5d7274*/
          && InfantryTypeVector_field_0x14 > 0 )
        {
          break; /*0x5d7274*/
        }
      }
LABEL_33:
      if ( ++v12 >= dword_A8E358 ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
      InfantryTypeVector_field_0x14 = v30.InfantryTypeVector_field_0x14; /*0x5d722f*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(InfantryTypeVector *, int, _DWORD))(*(_DWORD *)v30.__pad_0 + 8))( /*0x5d7283*/
           &v30,
           InfantryTypeVector_field_0x14 + InfantryTypeVector_field_0x08,
           0) )
    {
LABEL_31:
      v15 = v30.InfantryTypeVector_field_0x10++; /*0x5d728a*/
      *(_DWORD *)(v30.InfantryTypeVector_field_0x04 + 4 * v15) = v14; /*0x5d7299*/
    }
    InfantryTypeVector_field_0x08 = v30.InfantryTypeVector_field_0x08; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
LABEL_34:
  v16 = v33; /*0x5d72ab*/
  if ( v33 || v30.InfantryTypeVector_field_0x10 ) /*0x5d72b9*/
  {
    v18 = 20; /*0x5d731a*/
    v19 = *a2; /*0x5d731f*/
    if ( *a2 > 0 ) /*0x5d7323*/
    {
      while ( v18 > 0 ) /*0x5d7331*/
      {
        if ( v19 > v28 / 3 && v16 ) /*0x5d734d*/
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v16 - 1); /*0x5d735f*/
          InfantryTypeVector_field_0x1C = v30.InfantryTypeVector_field_0x1C; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v30.InfantryTypeVector_field_0x10 - 1); /*0x5d737e*/
          InfantryTypeVector_field_0x1C = v30.InfantryTypeVector_field_0x04; /*0x5d7383*/
        }
        v22 = *(_DWORD *)(InfantryTypeVector_field_0x1C + 4 * v20); /*0x5d7387*/
        v23 = (void **)(*(int (__thiscall **)(int, MultiplayerGameMode *))(*(_DWORD *)v22 + 140))(v22, this); /*0x5d7393*/
        v24 = (int *)__RTDynamicCast( /*0x5d73b4*/
                       v23,
                       0,
                       &ObjectClass `RTTI Type Descriptor',
                       &TechnoClass `RTTI Type Descriptor',
                       0);
        CurrentOption = (__int16 *)HouseClass::GetCurrentOption((HouseClass *)this, &v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition(v24, CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a2; /*0x5d73eb*/
          *a2 -= v27; /*0x5d73f3*/
          if ( ((int)dword_A8B230->ptr_0 & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag((Timer *)(v24 + 84), 1); /*0x5d740a*/
          if ( (unsigned __int8)House::IsCurrentPlayer((House *)this) ) /*0x5d7411*/
            (*(void (__thiscall **)(int *, int))(*v24 + 496))(v24, 5); /*0x5d7420*/
          else
            (*(void (__thiscall **)(int *, int))(*v24 + 496))(v24, 11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            (*(void (__thiscall **)(int *, int))(*v24 + 32))(v24, 1); /*0x5d73d7*/
          v26 = a2; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v33; /*0x5d732b*/
      }
    }
    *(_DWORD *)v30.__pad_0 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x5d7446*/
    if ( v30.InfantryTypeVector_field_0x04 && BYTE1(v30.InfantryTypeVector_field_0x0C) ) /*0x5d7456*/
    {
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x04); /*0x5d7459*/
      v30.InfantryTypeVector_field_0x04 = 0; /*0x5d7461*/
    }
    BYTE1(v30.InfantryTypeVector_field_0x0C) = 0; /*0x5d7469*/
    v30.InfantryTypeVector_field_0x08 = 0; /*0x5d7470*/
    v30.InfantryTypeVector_field_0x18 = (int)&VectorClass<UnitTypeClass *>::`vftable'; /*0x5d7474*/
    if ( v30.InfantryTypeVector_field_0x1C && v32 ) /*0x5d7484*/
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x1C); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
  *(_DWORD *)v30.__pad_0 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x5d72bf*/
  if ( v30.InfantryTypeVector_field_0x04 && BYTE1(v30.InfantryTypeVector_field_0x0C) ) /*0x5d72d1*/
  {
    __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x04); /*0x5d72d4*/
    v30.InfantryTypeVector_field_0x04 = 0; /*0x5d72dc*/
  }
  BYTE1(v30.InfantryTypeVector_field_0x0C) = 0; /*0x5d72e4*/
  v30.InfantryTypeVector_field_0x08 = 0; /*0x5d72eb*/
  v30.InfantryTypeVector_field_0x18 = (int)&VectorClass<UnitTypeClass *>::`vftable'; /*0x5d72ef*/
  if ( v30.InfantryTypeVector_field_0x1C ) /*0x5d72f7*/
  {
    if ( v32 ) /*0x5d72ff*/
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x1C); /*0x5d7302*/
  }
  return 0; /*0x5d730a*/
}



// ==== 0x005D74A0  MultiplayerGameMode::InitAlliances  this=MultiplayerGameMode  sig=csp ====
char HouseClass::InitAlliances(MultiplayerGameMode *this)
{
  int nextArrayIndex; // edx
  _DWORD *ptr_C; // eax
  int v3; // edi
  int v4; // ebp
  int *v5; // ebx
  int v6; // ecx
  int *v7; // esi
  int v9; // [esp+0h] [ebp-4h]

  nextArrayIndex = stru_A80220.?; /*0x5d74a1*/
  if ( stru_A80220.? <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  ptr_C = stru_A80220.?; /*0x5d74af*/
  v3 = 1; /*0x5d74b8*/
  v4 = 0; /*0x5d74bd*/
  v9 = 1; /*0x5d74bf*/
  do /*0x5d7540*/
  {
    v5 = (int *)ptr_C[v4]; /*0x5d74c3*/
    if ( !*(_BYTE *)(v5[13] + 422) ) /*0x5d74c9*/
    {
      v6 = v5[22551]; /*0x5d74d4*/
      if ( v6 != -2 && v6 != -1 && v3 < nextArrayIndex ) /*0x5d74e6*/
      {
        do /*0x5d752d*/
        {
          v7 = (int *)ptr_C[v3]; /*0x5d74e8*/
          if ( !*(_BYTE *)(v7[13] + 422) && *(_DWORD *)(ptr_C[v4] + 90204) == v7[22551] ) /*0x5d7509*/
          {
            HouseClass::HandleAlliance(v5, (int)v7, 0); /*0x5d7510*/
            HouseClass::HandleAlliance(v7, (int)v5, 0); /*0x5d751a*/
            ptr_C = stru_A80220.?; /*0x5d751f*/
          }
          nextArrayIndex = stru_A80220.?; /*0x5d7524*/
          ++v3; /*0x5d752a*/
        }
        while ( v3 < stru_A80220.? ); /*0x5d752d*/
        v3 = v9; /*0x5d752f*/
      }
    }
    ++v3; /*0x5d7533*/
    ++v4; /*0x5d7534*/
    v9 = v3; /*0x5d7537*/
  }
  while ( v3 - 1 < nextArrayIndex ); /*0x5d7540*/
  return 1; /*0x5d7549*/
}



// ==== 0x005D7550  sub_5D7550  this=-  sig=csp ====
int __stdcall sub_5D7550(int a1)
{
  return *(_DWORD *)(*(_DWORD *)&dword_A8022C->AbstractClass[4 * a1] + 90204); /*0x5d7563*/
}



// ==== 0x005D7570  MultiplayerGameMode::processAI  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::processAI(MultiplayerGameMode *this)
{
  return 1; /*0x5d7572*/
}



// ==== 0x005D7580  ObjectClass::method_5D7580  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall sub_5D7580(ObjectClass *this)
{
  this->AbstractClass = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7582*/
  return &this->AbstractClass; /*0x5d7588*/
}



// ==== 0x005D7590  LoadMultiplayerModesList  this=-  sig=csp ====
int __fastcall LoadMultiplayerModesList(char **a1, int a2)
{
  char **v2; // esi
  int v3; // eax
  int v4; // edi
  int String; // esi
  int v6; // esi
  char *v7; // eax
  wchar_t *StringCSF; // eax
  int v9; // esi
  char *v10; // eax
  wchar_t *v11; // eax
  int v12; // esi
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  char v16; // al
  int v17; // esi
  ObjectClass v19; // [esp+20h] [ebp-114h] BYREF
  int v20[3]; // [esp+120h] [ebp-14h] BYREF
  int v21; // [esp+12Ch] [ebp-8h]

  v2 = a1; /*0x5d7598*/
  v19.customSound = a2; /*0x5d759a*/
  v19.customSound_controller[3] = (int)a1; /*0x5d75aa*/
  CCFileClass::Construct((CCFileClass *)&v19.lineTrailer, aMpmodesmdIni); /*0x5d75ae*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v19.lineTrailer, 0) ) /*0x5d75bd*/
  {
    v19.health = 0; /*0x5d75ce*/
    v19.estimatedHealth = 0; /*0x5d75d2*/
    GenericList::Constructor((GenericList *)&v19.isOnMap); /*0x5d75d6*/
    *(_DWORD *)&v19.isOnMap = &List<INIClass::INISection *>::`vftable'; /*0x5d75e8*/
    memset(&v19.isAliveFlag, 0, 13); /*0x5d75f3*/
    v19.location[1] = 0; /*0x5d760f*/
    v19.location[2] = 0; /*0x5d7616*/
    *(_DWORD *)&v19.bombVisible = &INIClass::`vftable'; /*0x5d761d*/
    if ( FileStraw::Open((FileStraw *)&v19.bombVisible, (int)&v19.lineTrailer, 0) > 0 ) /*0x5d762c*/
    {
      v19.customSound_controller[4] = INIClass::FindKey(&v19.bombVisible, v2); /*0x5d763e*/
      v19.owningHouseIndex = 0; /*0x5d7642*/
      if ( v19.customSound_controller[4] > 0 ) /*0x5d7646*/
      {
        while ( 1 ) /*0x5d766b*/
        {
          INIClass::GetStringByIndexEx((INIClass *)&v19.bombVisible, (char **)&v19.?, v2, v19.owningHouseIndex); /*0x5d766b*/
          __1_Timevec_std__QAE_XZ((const char **)&v19.?); /*0x5d7674*/
          v4 = v3; /*0x5d767d*/
          unknown_libname_73(&v19); /*0x5d767f*/
          String::Assign((String *)&v19.attachedBomb, &g_INI_DefaultBuffer); /*0x5d768d*/
          String = INIClass::ReadString( /*0x5d76b2*/
                     (INIClass *)&v19.bombVisible,
                     v2,
                     (char **)&v19.?,
                     (char **)&v19.attachedBomb,
                     (int)&v19);
          DeleteAndZero((ObjectClass *)&v19.attachedBomb); /*0x5d76b4*/
          if ( String <= 0 ) /*0x5d76bb*/
            goto LABEL_49; /*0x5d76bb*/
          unknown_libname_73(&v19.?); /*0x5d76c5*/
          v6 = String::Tokenize((String *)&v19, 0, Str, &v19.?); /*0x5d76e2*/
          if ( String::Length((String *)&v19.?) ) /*0x5d76e4*/
            break; /*0x5d76e4*/
LABEL_48:
          DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c50*/
LABEL_49:
          DeleteAndZero(&v19); /*0x5d7c59*/
          DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c66*/
          if ( ++v19.owningHouseIndex >= v19.customSound_controller[4] ) /*0x5d7c7a*/
            goto LABEL_50; /*0x5d7c7a*/
          v2 = (char **)v19.customSound_controller[3]; /*0x5d7655*/
        }
        String::Assign((String *)&v19.customSound_controller[1], asc_830A14); /*0x5d76fa*/
        String::TrimLeft((String *)&v19.?, (const char **)&v19.customSound_controller[1]); /*0x5d7708*/
        DeleteAndZero((ObjectClass *)&v19.customSound_controller[1]); /*0x5d7711*/
        String::Assign((String *)&v19.fallRate, asc_830A14); /*0x5d771f*/
        String::TrimRight((String *)&v19.?, (const char **)&v19.fallRate); /*0x5d772d*/
        DeleteAndZero((ObjectClass *)&v19.fallRate); /*0x5d7736*/
        v7 = String::GetOrEmpty((String *)&v19.?); /*0x5d7749*/
        StringCSF = GetStringCSF((wchar_t *)v7, 0, aDRa2mdpostMult, 1030); /*0x5d7752*/
        WideString::Assign((wchar_t **)&v19.?, StringCSF); /*0x5d775c*/
        unknown_libname_73(&v19.?); /*0x5d7765*/
        v9 = String::Tokenize((String *)&v19, v6, Str, &v19.?); /*0x5d7782*/
        if ( !String::Length((String *)&v19.?) ) /*0x5d778b*/
        {
LABEL_47:
          DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c3e*/
          DeleteAndZero::Alt((DeleteAndZero *)&v19.?); /*0x5d7c4b*/
          goto LABEL_48; /*0x5d7c4b*/
        }
        String::Assign((String *)&v19.ambientSoundController[4], asc_830A14); /*0x5d779a*/
        String::TrimLeft((String *)&v19.?, (const char **)&v19.ambientSoundController[4]); /*0x5d77a8*/
        DeleteAndZero((ObjectClass *)&v19.ambientSoundController[4]); /*0x5d77b1*/
        String::Assign((String *)&v19.ambientSoundController[1], asc_830A14); /*0x5d77bf*/
        String::TrimRight((String *)&v19.?, (const char **)&v19.ambientSoundController[1]); /*0x5d77cd*/
        DeleteAndZero((ObjectClass *)&v19.ambientSoundController[1]); /*0x5d77d6*/
        v10 = String::GetOrEmpty((String *)&v19.?); /*0x5d77e9*/
        v11 = GetStringCSF((wchar_t *)v10, 0, aDRa2mdpostMult, 1041); /*0x5d77f2*/
        WideString::Assign((wchar_t **)&v19.?, v11); /*0x5d77fc*/
        unknown_libname_73(&v19.?); /*0x5d7805*/
        v12 = String::Tokenize((String *)&v19, v9, Str, &v19.?); /*0x5d7822*/
        if ( !String::Length((String *)&v19.?) ) /*0x5d782b*/
        {
LABEL_46:
          DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c2c*/
          DeleteAndZero::Alt((DeleteAndZero *)&v19.?); /*0x5d7c39*/
          goto LABEL_47; /*0x5d7c39*/
        }
        String::Assign((String *)v19.customSound_controller, asc_830A14); /*0x5d783a*/
        String::TrimLeft((String *)&v19.?, (const char **)v19.customSound_controller); /*0x5d7848*/
        DeleteAndZero((ObjectClass *)v19.customSound_controller); /*0x5d7851*/
        String::Assign((String *)&v19.ambientSoundController[3], asc_830A14); /*0x5d785f*/
        String::TrimRight((String *)&v19.?, (const char **)&v19.ambientSoundController[3]); /*0x5d786d*/
        DeleteAndZero((ObjectClass *)&v19.ambientSoundController[3]); /*0x5d7876*/
        unknown_libname_73(&v19.?); /*0x5d787f*/
        v13 = String::Tokenize((String *)&v19, v12, Str, (void **)&v19.?); /*0x5d789c*/
        String::Assign((String *)&v19.customSound_controller[2], asc_830A14); /*0x5d78a3*/
        String::TrimLeft((String *)&v19.?, (const char **)&v19.customSound_controller[2]); /*0x5d78b1*/
        DeleteAndZero((ObjectClass *)&v19.customSound_controller[2]); /*0x5d78ba*/
        String::Assign((String *)&v19.nextObject, asc_830A14); /*0x5d78c8*/
        String::TrimRight((String *)&v19.?, (const char **)&v19.nextObject); /*0x5d78d6*/
        DeleteAndZero((ObjectClass *)&v19.nextObject); /*0x5d78df*/
        unknown_libname_73(&v19.?); /*0x5d78e8*/
        String::Tokenize((String *)&v19, v13, Str, (void **)&v19.?); /*0x5d78fc*/
        String::Assign((String *)&v19.attachedTag, asc_830A14); /*0x5d790a*/
        String::TrimLeft((String *)&v19.?, (const char **)&v19.attachedTag); /*0x5d7918*/
        DeleteAndZero((ObjectClass *)&v19.attachedTag); /*0x5d7921*/
        String::Assign((String *)v19.ambientSoundController, asc_830A14); /*0x5d792f*/
        String::TrimRight((String *)&v19.?, (const char **)v19.ambientSoundController); /*0x5d793d*/
        DeleteAndZero((ObjectClass *)v19.ambientSoundController); /*0x5d7946*/
        LOBYTE(v19.ambientSoundController[2]) = 1; /*0x5d794f*/
        if ( String::Length((String *)&v19.?) ) /*0x5d7954*/
        {
          v14 = String::GetOrEmpty((String *)&v19.?); /*0x5d7966*/
          LOBYTE(v19.ambientSoundController[2]) = _strcmpi(v14, g_Str_false) != 0; /*0x5d7979*/
        }
        if ( WideString::Length((const wchar_t **)&v19.?) /*0x5d79a3*/
          && String::Length((String *)&v19.?)
          && String::Length((String *)&v19.?) )
        {
          v15 = 0; /*0x5d79d3*/
          v19.occupant = (*(int (__thiscall **)(int, int *, void **, void **, int *, int, int))(*(_DWORD *)v19.customSound /*0x5d79d5*/
                                                                                              + 4))(
                           v19.customSound,
                           &v19.?,
                           &v19.?,
                           &v19.?,
                           &v19.?,
                           v19.ambientSoundController[2],
                           v4);
          v16 = g_MultiplayerMode; /*0x5d79d9*/
          while ( 1 ) /*0x5d79de*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d79e0*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d79eb*/
              MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d79f0*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d79fa*/
              *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7a05*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7a0b*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a11*/
              v16 = g_MultiplayerMode; /*0x5d7a16*/
            }
            if ( v15 >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7a2b*/
              break; /*0x5d7a2b*/
            if ( (v16 & 1) == 0 ) /*0x5d7a2f*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7a38*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7a3d*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7a43*/
              LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7a49*/
              *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7a56*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7a5c*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7a62*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a68*/
              v16 = g_MultiplayerMode; /*0x5d7a6d*/
            }
            if ( *(_DWORD *)(*(_DWORD *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * v15) + 40) > *(_DWORD *)(v19.occupant + 40) ) /*0x5d7a88*/
              break; /*0x5d7a88*/
            ++v15; /*0x5d7a8a*/
          }
          if ( v15 ) /*0x5d7a92*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d7b56*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7b5f*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7b64*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7b6a*/
              LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7b70*/
              *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7b7d*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7b83*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7b89*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7b8f*/
            }
            v17 = v15 - 1; /*0x5d7ba2*/
            if ( g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 /*0x5d7bcc*/
              && (!BYTE1(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C)
               && g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08
               || g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 <= 0
               || !(*(unsigned __int8 (__thiscall **)(MultiplayerGameMode *, int, _DWORD))(*(_DWORD *)g_MultiplayerModeConfig.__pad_0
                                                                                         + 8))(
                     &g_MultiplayerModeConfig,
                     g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08
                   + g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14,
                     0)) )
            {
              goto LABEL_45; /*0x5d7bd1*/
            }
            if ( v17 < g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 - 1 ) /*0x5d7bde*/
              memcpy( /*0x5d7bff*/
                (void *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * v17 + 8),
                (const void *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * (v17 + 1)),
                4 * (g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 + 0x3FFFFFFF * (v17 + 1)));
            *(_DWORD *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * v17 + 4) = v19.occupant; /*0x5d7c10*/
          }
          else
          {
            if ( (v16 & 1) == 0 ) /*0x5d7a9a*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7aa3*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7aa8*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7aae*/
              LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7ab4*/
              *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7ac1*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7ac7*/
              g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7acd*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7ad3*/
            }
            if ( g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 /*0x5d7b16*/
              && (!BYTE1(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C)
               && g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08
               || g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 <= 0
               || !(*(unsigned __int8 (__thiscall **)(MultiplayerGameMode *, int, _DWORD))(*(_DWORD *)g_MultiplayerModeConfig.__pad_0
                                                                                         + 8))(
                     &g_MultiplayerModeConfig,
                     g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08
                   + g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14,
                     0)) )
            {
              goto LABEL_45; /*0x5d7b1b*/
            }
            if ( g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7b28*/
              memcpy( /*0x5d7b3c*/
                (void *)(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4),
                (const void *)g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04,
                4 * g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10);
            *(_DWORD *)g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = v19.occupant; /*0x5d7b4d*/
          }
          ++g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10; /*0x5d7c14*/
        }
LABEL_45:
        DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c1a*/
        DeleteAndZero((ObjectClass *)&v19.?); /*0x5d7c27*/
        goto LABEL_46; /*0x5d7c27*/
      }
    }
LABEL_50:
    HashTable::DestroyHashTableINIClass((INIClass *)&v19.bombVisible); /*0x5d7c82*/
  }
  v19.lineTrailer = &CCFileClass::`vftable'; /*0x5d7c92*/
  v21 = 0; /*0x5d7c9d*/
  Vector::Clear((int)v20); /*0x5d7ca4*/
  v19.lineTrailer = &off_7E1668; /*0x5d7cb0*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v19.lineTrailer); /*0x5d7cc0*/
}



// ==== 0x005D7CD0  InitializerBase@MultiplayerGameMode::method_5D7CD0  this=InitializerBase@MultiplayerGameMode  sig=csp ====
void __thiscall sub_5D7CD0(_DWORD *this)
{
  *this = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7cd0*/
}



// ==== 0x005D7CE0  ObjectClass::CompleteGameInit  this=ObjectClass  sig=csp ====
int CompleteGameInit(ObjectClass *this)
{
  int i; // esi
  void (__thiscall ***v2)(_DWORD, int); // ecx
  String v4; // [esp+8h] [ebp-1Ch] BYREF
  void **v5; // [esp+10h] [ebp-14h] BYREF
  void **v6; // [esp+14h] [ebp-10h] BYREF
  void **v7; // [esp+18h] [ebp-Ch] BYREF
  void **v8; // [esp+1Ch] [ebp-8h] BYREF
  void **v9; // [esp+20h] [ebp-4h] BYREF

  for ( i = 0; ; ++i ) /*0x5d7ce5*/
  {
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7cf3*/
    {
      g_MultiplayerMode |= 1u; /*0x5d7cfd*/
      GameInit::InitMultiplayerModes((GameInit *)&g_MultiplayerModeConfig, 0, 0); /*0x5d7d08*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7d12*/
    }
    if ( i >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7d20*/
      break; /*0x5d7d20*/
    v2 = *(void (__thiscall ****)(_DWORD, int))(System_Init()[1] + 4 * i); /*0x5d7d2a*/
    if ( v2 ) /*0x5d7d32*/
      (**v2)(v2, 1); /*0x5d7d37*/
  }
  *(_DWORD *)&v4.m_3[1] = &MultiplayerGameMode::Initializer<MultiplayerBattle>::`vftable'; /*0x5d7d45*/
  String::Assign(&v4, aBattle); /*0x5d7d4d*/
  LoadMultiplayerModesList((char **)&v4, (int)&v4.m_3[1]); /*0x5d7d5a*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7d63*/
  v5 = &MultiplayerGameMode::Initializer<MultiplayerManBattle>::`vftable'; /*0x5d7d6c*/
  String::Assign(&v4, aManbattle); /*0x5d7d79*/
  LoadMultiplayerModesList((char **)&v4, (int)&v5); /*0x5d7d86*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7d8f*/
  v6 = &MultiplayerGameMode::Initializer<MultiplayerSiege>::`vftable'; /*0x5d7d98*/
  String::Assign(&v4, aSiege); /*0x5d7da5*/
  LoadMultiplayerModesList((char **)&v4, (int)&v6); /*0x5d7db2*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7dbb*/
  v7 = &MultiplayerGameMode::Initializer<UnholyAlliance>::`vftable'; /*0x5d7dc4*/
  String::Assign(&v4, aUnholy); /*0x5d7dd1*/
  LoadMultiplayerModesList((char **)&v4, (int)&v7); /*0x5d7dde*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7de7*/
  v8 = &MultiplayerGameMode::Initializer<FreeForAll>::`vftable'; /*0x5d7df0*/
  String::Assign(&v4, aFreeforall); /*0x5d7dfd*/
  LoadMultiplayerModesList((char **)&v4, (int)&v8); /*0x5d7e0a*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7e13*/
  v9 = &MultiplayerGameMode::Initializer<MPCooperative>::`vftable'; /*0x5d7e1c*/
  String::Assign(&v4, aCooperative); /*0x5d7e29*/
  LoadMultiplayerModesList((char **)&v4, (int)&v9); /*0x5d7e36*/
  return DeleteAndZero((ObjectClass *)&v4); /*0x5d7e44*/
}



// ==== 0x005D7E50  ObjectClass::WinMain_Helper_5D7E50  this=ObjectClass  sig=csp ====
char WinMain_Helper_5D7E50(ObjectClass *this)
{
  int i; // ebp
  char result; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx

  for ( i = 0; ; ++i ) /*0x5d7e56*/
  {
    result = g_MultiplayerMode; /*0x5d7e62*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7e69*/
    {
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7e75*/
      g_MultiplayerMode |= 1u; /*0x5d7e7b*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7e81*/
      LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7e87*/
      *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7e94*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7e9a*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7ea0*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d7ea6*/
    }
    if ( i >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7eb4*/
      break; /*0x5d7eb4*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7ebd*/
    {
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 = 0; /*0x5d7ec9*/
      g_MultiplayerMode |= 1u; /*0x5d7ecf*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x08 = 0; /*0x5d7ed5*/
      LOWORD(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x0C) = 1; /*0x5d7edb*/
      *(_DWORD *)g_MultiplayerModeConfig.__pad_0 = &DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d7ee8*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x14 = 10; /*0x5d7eee*/
      g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 = 0; /*0x5d7ef4*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7efa*/
    }
    v3 = *(void (__thiscall ****)(_DWORD, int))(g_MultiplayerModeConfig.MultiplayerGameMode_field_0x04 + 4 * i); /*0x5d7f07*/
    if ( v3 ) /*0x5d7f0c*/
      (**v3)(v3, 1); /*0x5d7f12*/
  }
  return result; /*0x5d7f1a*/
}



// ==== 0x005D7F20  MultiplayerGameMode::QueryInterface  this=MultiplayerGameMode  sig=csp ====
char *__thiscall MultiplayerGameMode::QueryInterface(MultiplayerGameMode *this, char a2)
{
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v3 = 0; /*0x5d7f24*/
  for ( *(_DWORD *)this->__pad_0 = &MultiplayerGameMode::`vftable'; v3 < this->MultiplayerGameMode_field_0x18; ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (__thiscall ****)(_DWORD, int))(this->MultiplayerGameMode_field_0x0C + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (__thiscall **)(int *))(this->MultiplayerGameMode_field_0x08 + 12))(&this->MultiplayerGameMode_field_0x08); /*0x5d7f53*/
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((ObjectClass *)((char *)this + 48)); /*0x5d7f66*/
  DeleteAndZero((ObjectClass *)((char *)this + 44)); /*0x5d7f6e*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 3); /*0x5d7f76*/
  DeleteAndZero::Alt((DeleteAndZero *)((char *)this + 32)); /*0x5d7f7e*/
  MultiplayerGameMode_field_0x0C = (void *)this->MultiplayerGameMode_field_0x0C; /*0x5d7f83*/
  this->MultiplayerGameMode_field_0x08 = (int)&VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d7f86*/
  if ( MultiplayerGameMode_field_0x0C && BYTE1(this->MultiplayerGameMode_field_0x14) ) /*0x5d7f90*/
  {
    __3_YAXPAX_Z(MultiplayerGameMode_field_0x0C); /*0x5d7f98*/
    this->MultiplayerGameMode_field_0x0C = 0; /*0x5d7fa0*/
  }
  BYTE1(this->MultiplayerGameMode_field_0x14) = 0; /*0x5d7fab*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    __3_YAXPAX_Z(this); /*0x5d7fbb*/
  return this->__pad_0; /*0x5d7fc5*/
}



// ==== 0x005D7FD0  AbstractClass::checkVisibility  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::checkVisibility(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7fd9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fdf*/
    __3_YAXPAX_Z(this); /*0x5d7fe2*/
  return &this->ptr_0; /*0x5d7fec*/
}



// ==== 0x005D7FF0  InitializerBase@MultiplayerGameMode::??_Gfacet_locale_std__UAEPAXI_Z_127  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_127(_DWORD *Block, char a2)
{
  *Block = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7ff9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fff*/
    __3_YAXPAX_Z(Block); /*0x5d8002*/
  return Block; /*0x5d800c*/
}



// ==== 0x005D8010  InitializerBase@MultiplayerGameMode::??_Gfacet_locale_std__UAEPAXI_Z_128  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_128(_DWORD *Block, char a2)
{
  *Block = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8019*/
  if ( (a2 & 1) != 0 ) /*0x5d801f*/
    __3_YAXPAX_Z(Block); /*0x5d8022*/
  return Block; /*0x5d802c*/
}



// ==== 0x005D8030  AbstractClass::updateVisibilityState  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::updateVisibilityState(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8039*/
  if ( (a2 & 1) != 0 ) /*0x5d803f*/
    __3_YAXPAX_Z(this); /*0x5d8042*/
  return &this->ptr_0; /*0x5d804c*/
}



// ==== 0x005D8050  AbstractClass::processFogReveal  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::processFogReveal(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8059*/
  if ( (a2 & 1) != 0 ) /*0x5d805f*/
    __3_YAXPAX_Z(this); /*0x5d8062*/
  return &this->ptr_0; /*0x5d806c*/
}



// ==== 0x005D8070  AbstractClass::checkShroudState  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::checkShroudState(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8079*/
  if ( (a2 & 1) != 0 ) /*0x5d807f*/
    __3_YAXPAX_Z(this); /*0x5d8082*/
  return &this->ptr_0; /*0x5d808c*/
}



// ==== 0x005D8090  AbstractClass::updateShroudMap  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::updateShroudMap(AbstractClass *this, char a2)
{
  this->ptr_0 = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8099*/
  if ( (a2 & 1) != 0 ) /*0x5d809f*/
    __3_YAXPAX_Z(this); /*0x5d80a2*/
  return &this->ptr_0; /*0x5d80ac*/
}



// ==== 0x005D80B0  ?$DynamicVectorClass@PAVMultiplayerTeam@@::allocateCells  this=DynamicVector  sig=csp ====
void __thiscall ScenarioClass::sub_5D80B0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d80b6*/
  *(_DWORD *)(this + 16) = 0; /*0x5d80b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d80c0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d80c6*/
    *(_DWORD *)(this + 4) = 0; /*0x5d80ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d80d1*/
  *(_DWORD *)(this + 8) = 0; /*0x5d80d4*/
}



// ==== 0x005D80E0  ?$DynamicVectorClass@PAVMultiplayerTeam@@::deallocateCells  this=DynamicVector  sig=csp ====
unsigned int __thiscall ScenarioClass::sub_5D80E0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d80e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d80f5*/
  else
    return 0; /*0x5d80e7*/
}



// ==== 0x005D8100  _VectorClass_PAVMultiplayerTeam::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiplayerTeam::Get(_VectorClass_PAVMultiplayerTeam *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d810a*/
}



// ==== 0x005D8110  ?$DynamicVectorClass@PAVMultiplayerGameMode@@::resetScenarioData  this=DynamicVector  sig=csp ====
void __thiscall ScenarioClass::sub_5D8110(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d8116*/
  *(_DWORD *)(this + 16) = 0; /*0x5d8119*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d8120*/
  {
    __3_YAXPAX_Z(v2); /*0x5d8126*/
    *(_DWORD *)(this + 4) = 0; /*0x5d812e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d8131*/
  *(_DWORD *)(this + 8) = 0; /*0x5d8134*/
}



// ==== 0x005D8140  ?$DynamicVectorClass@PAVMultiplayerGameMode@@::validateMap  this=DynamicVector  sig=csp ====
unsigned int __thiscall ScenarioClass::sub_5D8140(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d8140*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d8155*/
  else
    return 0; /*0x5d8147*/
}



// ==== 0x005D8160  _VectorClass_PAVMultiplayerGameMode::loadTheater  this=VectorClass  sig=csp ====
int __thiscall ScenarioClass::loadTheater(_VectorClass_PAVMultiplayerGameMode *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5d816a*/
}



// ==== 0x005D8170  MPBattleClass::MPBattleClass  this=MPBattleClass  sig=csp ====
_DWORD *__stdcall MPBattleClass::MPBattleClass(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8172*/
  if ( v6 ) /*0x5d817c*/
    return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6); /*0x5d819e*/
  else
    return 0; /*0x5d81a6*/
}



// ==== 0x005D81B0  Helper_5D81B0  this=-  sig=csp ====
_DWORD *__stdcall sub_5D81B0(const wchar_t **a1, const wchar_t **a2, const char **a3, const char **a4, char a5, int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d81b2*/
  if ( v6 ) /*0x5d81bc*/
    return MPBattleClass::MPManBattleClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d81de*/
  else
    return 0; /*0x5d81e6*/
}



// ==== 0x005D81F0  AbstractClass::processRevealArea  this=AbstractClass  sig=csp ====
_DWORD *__stdcall AbstractClass::sub_5D81F0(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d81f2*/
  if ( v6 ) /*0x5d81fc*/
    return MPBattleClass::MPSiegeClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d821e*/
  else
    return 0; /*0x5d8226*/
}



// ==== 0x005D8230  AbstractClass::computeRevealRadius  this=AbstractClass  sig=csp ====
_DWORD *__stdcall AbstractClass::sub_5D8230(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8232*/
  if ( v6 ) /*0x5d823c*/
    return MPBattleClass::MPUnholyAllianceClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d825e*/
  else
    return 0; /*0x5d8266*/
}



// ==== 0x005D8270  AbstractClass::applyRevealToCell  this=AbstractClass  sig=csp ====
_DWORD *__stdcall AbstractClass::sub_5D8270(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        char a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8272*/
  if ( v6 ) /*0x5d827c*/
    return MPBattleClass::MPFreeForAllClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d829e*/
  else
    return 0; /*0x5d82a6*/
}



// ==== 0x005D82B0  AbstractClass::checkRevealCell  this=AbstractClass  sig=csp ====
_DWORD *__stdcall AbstractClass::sub_5D82B0(
        const wchar_t **a1,
        const wchar_t **a2,
        const char **a3,
        const char **a4,
        int a5,
        int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x344u); /*0x5d82b5*/
  if ( v6 ) /*0x5d82bf*/
    return MPCooperative::ctor(v6, a1, a2, a3, a4, a5, a6); /*0x5d82e1*/
  else
    return 0; /*0x5d82e9*/
}



// ==== 0x005D82F0  _VectorClass_PAVMultiplayerTeam::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiplayerTeam::Add(_VectorClass_PAVMultiplayerTeam *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d82f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5d82fd*/
  {
    v3 = 0; /*0x5d82ff*/
    if ( m_8 <= 0 ) /*0x5d8303*/
      return 1; /*0x5d8323*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d8305*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d830b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d8314*/
    {
      ++v3; /*0x5d8316*/
      ++v4; /*0x5d8317*/
      if ( v3 >= m_8 ) /*0x5d831c*/
        return 1; /*0x5d831c*/
    }
  }
  return 0; /*0x5d831e*/
}



// ==== 0x005D8330  _VectorClass_PAVMultiplayerTeam::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiplayerTeam::Release(_VectorClass_PAVMultiplayerTeam *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d833c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d8346*/
    if ( a3 ) /*0x5d834c*/
      v4 = a3; /*0x5d8362*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d835e*/
    LOBYTE(this->m_C) = 1; /*0x5d8366*/
    if ( v4 ) /*0x5d836a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d8375*/
      {
        m_8 = this->m_8; /*0x5d837c*/
        if ( a2 < m_8 ) /*0x5d8381*/
          m_8 = a2; /*0x5d8383*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d8389*/
          ++i; /*0x5d838e*/
        if ( BYTE1(this->m_C) ) /*0x5d839b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d83a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d83ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d83b7*/
      this->m_8 = a2; /*0x5d83bf*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d83c2*/
      return 1; /*0x5d83c8*/
    }
    else
    {
      return 0; /*0x5d836f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMultiplayerTeam *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d83d2*/
    return 1; /*0x5d83d8*/
  }
}



// ==== 0x005D83E0  _VectorClass_PAVMultiplayerTeam::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MultiplayerTeam::Remove(_VectorClass_PAVMultiplayerTeam *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d83ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d83f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d83fb*/
  }
  BYTE1(this->m_C) = 0; /*0x5d83fe*/
  this->m_8 = 0; /*0x5d8401*/
}



// ==== 0x005D8410  _VectorClass_PAVMultiplayerTeam::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiplayerTeam::GetSize(_VectorClass_PAVMultiplayerTeam *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d8410*/
    return 0; /*0x5d8418*/
  m_8 = this->m_8; /*0x5d841e*/
  result = 0; /*0x5d8421*/
  if ( m_8 <= 0 ) /*0x5d8425*/
    return -1; /*0x5d843c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d842b*/
  {
    if ( ++result >= m_8 ) /*0x5d843a*/
      return -1; /*0x5d843a*/
  }
  return result; /*0x5d841a*/
}



// ==== 0x005D8450  _VectorClass_PAVMultiplayerTeam::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MultiplayerTeam::GetCapacity(_VectorClass_PAVMultiplayerTeam *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5d8450*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5d8465*/
  else
    return 0; /*0x5d8457*/
}



// ==== 0x005D8470  _DynamicVectorClass_PAVMultiplayerTeam::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Scenario::ResizeAndCopy(_DynamicVectorClass_PAVMultiplayerTeam *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d847c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d8482*/
    if ( a3 ) /*0x5d8488*/
      v4 = a3; /*0x5d849e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d849a*/
    LOBYTE(this->m_C) = 1; /*0x5d84a2*/
    if ( !v4 ) /*0x5d84a6*/
      return 0; /*0x5d851a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d84a8*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x5d84af*/
      if ( a2 < v5 ) /*0x5d84b4*/
        v5 = a2; /*0x5d84b6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d84bc*/
        ++i; /*0x5d84c1*/
      if ( BYTE1(this->m_C) ) /*0x5d84ce*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d84d9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d84e1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d84ea*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x5d84f2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d84f5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMultiplayerTeam *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d84fe*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x5d8501*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x5d8509*/
    *(_DWORD *)this->__tail_10 = v7; /*0x5d850b*/
  return 1; /*0x5d850e*/
}



// ==== 0x005D8520  ?$DynamicVectorClass@PAVMultiplayerTeam@@::setupPlayers  this=DynamicVector  sig=csp ====
int __thiscall ScenarioClass::sub_5D8520(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d8520*/
  result = 0; /*0x5d8523*/
  if ( v2 <= 0 ) /*0x5d8528*/
    return -1; /*0x5d853f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5d852e*/
  {
    if ( ++result >= v2 ) /*0x5d853d*/
      return -1; /*0x5d853d*/
  }
  return result; /*0x5d8542*/
}



// ==== 0x005D8550  _VectorClass_PAVMultiplayerGameMode::assignHouses  this=VectorClass  sig=csp ====
char __thiscall ScenarioClass::assignHouses(_VectorClass_PAVMultiplayerGameMode *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(_DWORD *)&this->__pad_5[3]; /*0x5d8552*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d855d*/
  {
    v3 = 0; /*0x5d855f*/
    if ( v2 <= 0 ) /*0x5d8563*/
      return 1; /*0x5d8583*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5d8565*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d856b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d8574*/
    {
      ++v3; /*0x5d8576*/
      ++v4; /*0x5d8577*/
      if ( v3 >= v2 ) /*0x5d857c*/
        return 1; /*0x5d857c*/
    }
  }
  return 0; /*0x5d857e*/
}



// ==== 0x005D8590  _VectorClass_PAVMultiplayerGameMode::ResizeAndCopy  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Scenario3::ResizeAndCopy(_VectorClass_PAVMultiplayerGameMode *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d859c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d85a6*/
    if ( a3 ) /*0x5d85ac*/
      v4 = a3; /*0x5d85c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d85be*/
    LOBYTE(this->m_C) = 1; /*0x5d85c6*/
    if ( v4 ) /*0x5d85ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5d85d5*/
      {
        v6 = *(_DWORD *)&this->__pad_5[3]; /*0x5d85dc*/
        if ( a2 < v6 ) /*0x5d85e1*/
          v6 = a2; /*0x5d85e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d85e9*/
          ++i; /*0x5d85ee*/
        if ( BYTE1(this->m_C) ) /*0x5d85fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d8606*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5d860e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5d8617*/
      *(_DWORD *)&this->__pad_5[3] = a2; /*0x5d861f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d8622*/
      return 1; /*0x5d8628*/
    }
    else
    {
      return 0; /*0x5d85cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMultiplayerGameMode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d8632*/
    return 1; /*0x5d8638*/
  }
}



// ==== 0x005D8640  ?$VectorClass@PAVMultiplayerGameMode@@::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d864d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d8653*/
    *(_DWORD *)(this + 4) = 0; /*0x5d865b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d865e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d8661*/
}



// ==== 0x005D8670  ?$VectorClass@PAVMultiplayerGameMode@@::initLocalVariables  this=VectorClass  sig=csp ====
int __thiscall ScenarioClass::sub_5D8670(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d8670*/
    return 0; /*0x5d8678*/
  v3 = *(_DWORD *)(this + 8); /*0x5d867e*/
  result = 0; /*0x5d8681*/
  if ( v3 <= 0 ) /*0x5d8685*/
    return -1; /*0x5d869c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d868b*/
  {
    if ( ++result >= v3 ) /*0x5d869a*/
      return -1; /*0x5d869a*/
  }
  return result; /*0x5d867a*/
}



// ==== 0x005D86B0  ?$VectorClass@PAVMultiplayerGameMode@@::setGameSpeed  this=VectorClass  sig=csp ====
unsigned int __thiscall ScenarioClass::sub_5D86B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d86b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d86c5*/
  else
    return 0; /*0x5d86b7*/
}



// ==== 0x005D86D0  GameInit::InitMultiplayerModes  this=VectorClass  sig=csp ====
_DWORD *__thiscall GameInit::InitMultiplayerModes(GameInit *this, int a2, int a3)
{
  this->Items = 0; /*0x5d86d9*/
  this->Capacity = a2; /*0x5d86e0*/
  this->IsInitialized = 1; /*0x5d86e3*/
  this->IsAllocated = 0; /*0x5d86e7*/
  *this = (GameInit)&VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d86eb*/
  if ( a2 ) /*0x5d86f1*/
  {
    if ( a3 ) /*0x5d86f9*/
    {
      this->Items = a3; /*0x5d86fb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x5d870c*/
      this->IsAllocated = 1; /*0x5d870f*/
    }
  }
  *this = (GameInit)&DynamicVectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d8713*/
  *((_DWORD *)this + 5) = 10; /*0x5d8719*/
  this->Items = 0; /*0x5d8720*/
  return this; /*0x5d8729*/
}



// ==== 0x005D8730  _DynamicVectorClass_PAVMultiplayerGameMode::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Scenario2::ResizeAndCopy(
        _DynamicVectorClass_PAVMultiplayerGameMode *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d873c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d8742*/
    if ( a3 ) /*0x5d8748*/
      v4 = a3; /*0x5d875e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5d875a*/
    LOBYTE(this->m_C) = 1; /*0x5d8762*/
    if ( !v4 ) /*0x5d8766*/
      return 0; /*0x5d87da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5d8768*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x5d876f*/
      if ( a2 < v5 ) /*0x5d8774*/
        v5 = a2; /*0x5d8776*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5d877c*/
        ++i; /*0x5d8781*/
      if ( BYTE1(this->m_C) ) /*0x5d878e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d8799*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5d87a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5d87aa*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x5d87b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d87b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMultiplayerGameMode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5d87be*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x5d87c1*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x5d87c9*/
    *(_DWORD *)this->__tail_10 = v7; /*0x5d87cb*/
  return 1; /*0x5d87ce*/
}



// ==== 0x005D87E0  ?$DynamicVectorClass@PAVMultiplayerGameMode@@::distributeStartingUnits  this=DynamicVector  sig=csp ====
int __thiscall ScenarioClass::sub_5D87E0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d87e0*/
  result = 0; /*0x5d87e3*/
  if ( v2 <= 0 ) /*0x5d87e8*/
    return -1; /*0x5d87ff*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5d87ee*/
  {
    if ( ++result >= v2 ) /*0x5d87fd*/
      return -1; /*0x5d87fd*/
  }
  return result; /*0x5d8802*/
}



// ==== 0x005D8810  _VectorClass_PAVMultiplayerTeam::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MultiplayerTeam::QueryInterface(_VectorClass_PAVMultiplayerTeam *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d8813*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d8816*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d8820*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8828*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d8830*/
  }
  BYTE1(this->m_C) = 0; /*0x5d883b*/
  this->m_8 = 0; /*0x5d8841*/
  if ( (a2 & 1) != 0 ) /*0x5d8848*/
    __3_YAXPAX_Z(this); /*0x5d884b*/
  return this->__pad_0; /*0x5d8855*/
}



// ==== 0x005D8860  _DynamicVectorClass_PAVMultiplayerTeam::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MultiplayerTeamVector::Destruct(_DynamicVectorClass_PAVMultiplayerTeam *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d8863*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d8866*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d8870*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8878*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d8880*/
  }
  BYTE1(this->m_C) = 0; /*0x5d888b*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5d8891*/
  if ( (a2 & 1) != 0 ) /*0x5d8898*/
    __3_YAXPAX_Z(this); /*0x5d889b*/
  return this->__pad_0; /*0x5d88a5*/
}



// ==== 0x005D88B0  _VectorClass_PAVMultiplayerGameMode::Destruct  this=VectorClass  sig=csp ====
_DWORD *__thiscall MultiplayerModeVector::Destruct(_VectorClass_PAVMultiplayerGameMode *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d88b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d88b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d88c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d88c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d88d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d88db*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5d88e1*/
  if ( (a2 & 1) != 0 ) /*0x5d88e8*/
    __3_YAXPAX_Z(this); /*0x5d88eb*/
  return this->__pad_0; /*0x5d88f5*/
}



// ==== 0x005D8900  _DynamicVectorClass_PAVMultiplayerGameMode::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MultiplayerModeVector2::Destruct(_DynamicVectorClass_PAVMultiplayerGameMode *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d8903*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d8906*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d8910*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8918*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5d8920*/
  }
  BYTE1(this->m_C) = 0; /*0x5d892b*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5d8931*/
  if ( (a2 & 1) != 0 ) /*0x5d8938*/
    __3_YAXPAX_Z(this); /*0x5d893b*/
  return this->__pad_0; /*0x5d8945*/
}



// ==== 0x005D8950  UnitTypeVector::Construct2  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector::Construct2(UnitTypeVector *this, int a2, int a3)
{
  this->UnitTypeVector_field_0x04 = 0; /*0x5d895b*/
  this->UnitTypeVector_field_0x08 = a2; /*0x5d895e*/
  LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x5d8961*/
  BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x5d8965*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass *>::`vftable'; /*0x5d8968*/
  if ( a2 ) /*0x5d896e*/
  {
    if ( a3 ) /*0x5d8976*/
    {
      this->UnitTypeVector_field_0x04 = a3; /*0x5d8978*/
      return this->__pad_0; /*0x5d897e*/
    }
    this->UnitTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5d898d*/
    BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x5d8990*/
  }
  return this->__pad_0; /*0x5d897d*/
}



// ==== 0x005D89A0  InfantryTypeVector::ConstructFromData  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector::ConstructFromData(InfantryTypeVector *this, int a2, int a3)
{
  this->InfantryTypeVector_field_0x04 = 0; /*0x5d89ab*/
  this->InfantryTypeVector_field_0x08 = a2; /*0x5d89ae*/
  LOBYTE(this->InfantryTypeVector_field_0x0C) = 1; /*0x5d89b1*/
  BYTE1(this->InfantryTypeVector_field_0x0C) = 0; /*0x5d89b5*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      this->InfantryTypeVector_field_0x04 = a3; /*0x5d89c8*/
      return this->__pad_0; /*0x5d89ce*/
    }
    this->InfantryTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5d89dd*/
    BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x5d89e0*/
  }
  return this->__pad_0; /*0x5d89cd*/
}



// ==== 0x005D89F0  MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass  this=VectorClass  sig=csp ====
_DWORD *__thiscall MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(
        MultiplayerGameMode *this,
        int a2,
        int a3)
{
  this->MultiplayerGameMode_field_0x04 = 0; /*0x5d89fb*/
  this->MultiplayerGameMode_field_0x08 = a2; /*0x5d89fe*/
  LOBYTE(this->MultiplayerGameMode_field_0x0C) = 1; /*0x5d8a01*/
  BYTE1(this->MultiplayerGameMode_field_0x0C) = 0; /*0x5d8a05*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      this->MultiplayerGameMode_field_0x04 = a3; /*0x5d8a18*/
      return this->__pad_0; /*0x5d8a1e*/
    }
    this->MultiplayerGameMode_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5d8a2d*/
    BYTE1(this->MultiplayerGameMode_field_0x0C) = 1; /*0x5d8a30*/
  }
  return this->__pad_0; /*0x5d8a1d*/
}



// ==== 0x005D8A40  sub_5D8A40  this=-  sig=ida-proto ====
int sub_5D8A40()
{
  dword_ABFDE0 = 0; /*0x5d8a42*/
  dword_ABFDE4 = 0; /*0x5d8a47*/
  dword_ABFDE8 = 0; /*0x5d8a4c*/
  dword_ABFDEC = 0; /*0x5d8a51*/
  return 0; /*0x5d8a56*/
}



// ==== 0x005D8A60  sub_5D8A60  this=-  sig=ida-proto ====
void sub_5D8A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d8a6c*/
  dbl_ABFDF8 = Math::Sqrt(v0 + v0); /*0x5d8a7e*/
}



// ==== 0x005D8A90  sub_5D8A90  this=-  sig=ida-proto ====
void sub_5D8A90()
{
  dbl_ABFE48 = dbl_ABFDF8 / 60.0; /*0x5d8a9c*/
}



// ==== 0x005D8AB0  sub_5D8AB0  this=-  sig=ida-proto ====
void sub_5D8AB0()
{
  dbl_ABFE30 = 1.0 / dbl_ABFE48; /*0x5d8abc*/
}



// ==== 0x005D8AD0  sub_5D8AD0  this=-  sig=ida-proto ====
void sub_5D8AD0()
{
  dbl_ABFE28 = 0.0174532925199433 * 45.0; /*0x5d8adc*/
}



// ==== 0x005D8AF0  sub_5D8AF0  this=-  sig=ida-proto ====
void sub_5D8AF0()
{
  dbl_ABFE00 = 0.0174532925199433 * 60.0; /*0x5d8afc*/
}



// ==== 0x005D8B10  sub_5D8B10  this=-  sig=ida-proto ====
void sub_5D8B10()
{
  dbl_ABFDD8 = 0.0174532925199433 * 90.0; /*0x5d8b1c*/
}



// ==== 0x005D8B30  sub_5D8B30  this=-  sig=ida-proto ====
__int64 sub_5D8B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFDD8 - dbl_ABFE00); /*0x5d8b42*/
  result = Math::RoundToInt(v0 * dbl_ABFDF8 * 0.5); /*0x5d8b56*/
  dword_ABFE50 = result; /*0x5d8b5b*/
  return result; /*0x5d8b60*/
}



// ==== 0x005D8B70  sub_5D8B70  this=-  sig=ida-proto ====
void sub_5D8B70()
{
  dbl_ABFE08 = Math::ArcTan((double)dword_ABFE50 * 0.00390625); /*0x5d8b87*/
}



// ==== 0x005D8BA0  sub_5D8BA0  this=-  sig=ida-proto ====
void sub_5D8BA0()
{
  dbl_ABFE20 = Math::ArcTan((double)(2 * dword_ABFE50) / dbl_ABFDF8); /*0x5d8bc2*/
}



// ==== 0x005D8BD0  sub_5D8BD0  this=-  sig=ida-proto ====
__int64 sub_5D8BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFE50) + 0.5); /*0x5d8beb*/
  dword_ABFE44 = result; /*0x5d8bf0*/
  return result; /*0x5d8bf6*/
}



// ==== 0x005D8C00  sub_5D8C00  this=-  sig=ida-proto ====
int sub_5D8C00()
{
  word_ABFDF0 = 0; /*0x5d8c02*/
  word_ABFDF2 = 0; /*0x5d8c08*/
  return 0; /*0x5d8c0e*/
}



// ==== 0x005D8C10  sub_5D8C10  this=-  sig=ida-proto ====
int sub_5D8C10()
{
  dword_ABFE10 = 0; /*0x5d8c12*/
  dword_ABFE14 = 0; /*0x5d8c17*/
  dword_ABFE18 = 0; /*0x5d8c1c*/
  return 0; /*0x5d8c21*/
}



// ==== 0x005D8C30  sub_5D8C30  this=-  sig=ida-proto ====
int sub_5D8C30()
{
  dword_ABFE40 = 0; /*0x5d8c35*/
  dword_ABFE38 = 128; /*0x5d8c3f*/
  dword_ABFE3C = 128; /*0x5d8c44*/
  return 128; /*0x5d8c49*/
}



// ==== 0x005D8C50  MultiplayerTeam::Constructor  this=MultiplayerTeam  sig=csp ====
wchar_t **__thiscall MultiplayerTeam::Constructor(MultiplayerTeam *this, const wchar_t **a2, wchar_t *a3)
{
  WideString::AssignFromPtr((wchar_t **)&this->MultiplayerTeam_field_0x04, a2); /*0x5d8c5b*/
  *(_DWORD *)this->__pad_0 = &MultiplayerTeam::`vftable'; /*0x5d8c64*/
  *((_DWORD *)this + 2) = a3; /*0x5d8c6a*/
  return (wchar_t **)this; /*0x5d8c6f*/
}



// ==== 0x005D8C80  MultiplayerTeam::Destructor  this=MultiplayerTeam  sig=csp ====
void __thiscall MultiplayerTeam::Destructor(MultiplayerTeam *this)
{
  *(_DWORD *)this->__pad_0 = &MultiplayerTeam::`vftable'; /*0x5d8c80*/
  DeleteAndZero::Alt((DeleteAndZero *)&this->MultiplayerTeam_field_0x04); /*0x5d8c89*/
}



// ==== 0x005D8C90  MultiplayerTeam::IsValidIndex  this=MultiplayerTeam  sig=csp ====
bool __stdcall PlayerClass::IsValidIndex(bool *this)
{
  return (int)this >= 0 && (int)this < dword_A8DA84; /*0x5d8ca2*/
}



// ==== 0x005D8CB0  MultiplayerTeam::SetHouse  this=MultiplayerTeam  sig=csp ====
char __thiscall PlayerClass::SetHouse(MultiplayerTeam *this, int a2)
{
  char result; // al

  result = (*(int (__thiscall **)(MultiplayerTeam *, int))(*(_DWORD *)this->__pad_0 + 4))(this, a2); /*0x5d8cbb*/
  if ( result ) /*0x5d8cc0*/
  {
    *(_DWORD *)(dword_A8DA78[a2] + 107) = *((_DWORD *)this + 2); /*0x5d8cd5*/
    return 1; /*0x5d8cd8*/
  }
  return result; /*0x5d8cc2*/
}



// ==== 0x005D8D10  MPCombatTeam::AddToList  this=MPCombatTeam  sig=csp ====
LRESULT __thiscall MPCombatTeam::AddToList(int this, HWND hWnd)
{
  wchar_t *v3; // eax
  LRESULT v4; // edi

  v3 = WideString::GetOrEmpty_Alt((wchar_t **)(this + 4)); /*0x5d8d19*/
  v4 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v3); /*0x5d8d33*/
  SendMessageA(hWnd, 0x151u, v4, *(_DWORD *)(this + 8)); /*0x5d8d40*/
  return v4; /*0x5d8d44*/
}



// ==== 0x005D8D50  MultiplayerTeam::QueryInterface  this=MultiplayerTeam  sig=csp ====
void **__thiscall MultiplayerTeam_Destru::QueryInterface(MultiplayerTeam *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &MultiplayerTeam::`vftable'; /*0x5d8d56*/
  DeleteAndZero::Alt((DeleteAndZero *)&this->MultiplayerTeam_field_0x04); /*0x5d8d5c*/
  if ( (a2 & 1) != 0 ) /*0x5d8d66*/
    __3_YAXPAX_Z(this); /*0x5d8d69*/
  return (void **)this; /*0x5d8d73*/
}



// ==== 0x005D8D80  sub_5D8D80  this=-  sig=ida-proto ====
void sub_5D8D80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d8d8c*/
  dbl_ABFE78 = Math::Sqrt(v0 + v0); /*0x5d8d9e*/
}



// ==== 0x005D8DB0  sub_5D8DB0  this=-  sig=ida-proto ====
void sub_5D8DB0()
{
  dbl_ABFEE0 = dbl_ABFE78 / 60.0; /*0x5d8dbc*/
}



// ==== 0x005D8DD0  sub_5D8DD0  this=-  sig=ida-proto ====
void sub_5D8DD0()
{
  dbl_ABFEB0 = 1.0 / dbl_ABFEE0; /*0x5d8ddc*/
}



// ==== 0x005D8DF0  sub_5D8DF0  this=-  sig=ida-proto ====
void sub_5D8DF0()
{
  dbl_ABFEA8 = 0.0174532925199433 * 45.0; /*0x5d8dfc*/
}



// ==== 0x005D8E10  sub_5D8E10  this=-  sig=ida-proto ====
void sub_5D8E10()
{
  dbl_ABFE80 = 0.0174532925199433 * 60.0; /*0x5d8e1c*/
}



// ==== 0x005D8E30  sub_5D8E30  this=-  sig=ida-proto ====
void sub_5D8E30()
{
  dbl_ABFE58 = 0.0174532925199433 * 90.0; /*0x5d8e3c*/
}



// ==== 0x005D8E50  sub_5D8E50  this=-  sig=ida-proto ====
__int64 sub_5D8E50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFE58 - dbl_ABFE80); /*0x5d8e62*/
  result = Math::RoundToInt(v0 * dbl_ABFE78 * 0.5); /*0x5d8e76*/
  dword_ABFEE8 = result; /*0x5d8e7b*/
  return result; /*0x5d8e80*/
}



// ==== 0x005D8E90  sub_5D8E90  this=-  sig=ida-proto ====
void sub_5D8E90()
{
  dbl_ABFE88 = Math::ArcTan((double)dword_ABFEE8 * 0.00390625); /*0x5d8ea7*/
}



// ==== 0x005D8EC0  sub_5D8EC0  this=-  sig=ida-proto ====
void sub_5D8EC0()
{
  dbl_ABFEA0 = Math::ArcTan((double)(2 * dword_ABFEE8) / dbl_ABFE78); /*0x5d8ee2*/
}



// ==== 0x005D8EF0  sub_5D8EF0  this=-  sig=ida-proto ====
__int64 sub_5D8EF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFEE8) + 0.5); /*0x5d8f0b*/
  dword_ABFEDC = result; /*0x5d8f10*/
  return result; /*0x5d8f16*/
}



// ==== 0x005D8F20  sub_5D8F20  this=-  sig=ida-proto ====
int sub_5D8F20()
{
  word_ABFE70 = 0; /*0x5d8f22*/
  word_ABFE72 = 0; /*0x5d8f28*/
  return 0; /*0x5d8f2e*/
}



// ==== 0x005D8F30  sub_5D8F30  this=-  sig=ida-proto ====
int sub_5D8F30()
{
  dword_ABFE90 = 0; /*0x5d8f32*/
  dword_ABFE94 = 0; /*0x5d8f37*/
  dword_ABFE98 = 0; /*0x5d8f3c*/
  return 0; /*0x5d8f41*/
}



// ==== 0x005D8F50  sub_5D8F50  this=-  sig=ida-proto ====
int sub_5D8F50()
{
  dword_ABFEC0 = 0; /*0x5d8f55*/
  dword_ABFEB8 = 128; /*0x5d8f5f*/
  dword_ABFEBC = 128; /*0x5d8f64*/
  return 128; /*0x5d8f69*/
}



// ==== 0x005D8F70  sub_5D8F70  this=-  sig=ida-proto ====
int sub_5D8F70()
{
  dword_ABFE60 = 0; /*0x5d8f72*/
  dword_ABFE64 = 0; /*0x5d8f77*/
  dword_ABFE68 = 0; /*0x5d8f7c*/
  dword_ABFE6C = 0; /*0x5d8f81*/
  return 0; /*0x5d8f86*/
}



// ==== 0x005D8F90  sub_5D8F90  this=-  sig=ida-proto ====
int sub_5D8F90()
{
  dword_ABFEC8 = 0; /*0x5d8f92*/
  dword_ABFECC = 0; /*0x5d8f97*/
  dword_ABFED0 = 0; /*0x5d8f9c*/
  dword_ABFED4 = 0; /*0x5d8fa1*/
  return 0; /*0x5d8fa6*/
}



// ==== 0x005D8FB0  ObjectClass::method_5D8FB0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5D8FB0(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x5d8fb4*/
  this->? = 0; /*0x5d8fb6*/
  this->? = 0; /*0x5d8fb9*/
  this->? = 0; /*0x5d8fbc*/
  return &this->AbstractClass; /*0x5d8fbf*/
}



// ==== 0x005D8FC0  ObjectClass::?_Release__NonReentrantLock_details_Concurrency__QAEXXZ  this=ObjectClass  sig=csp ====
void __thiscall __Release__NonReentrantLock_details_Concurrency__QAEXXZ(Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0; /*0x5d8fc0*/
}



// ==== 0x005D8FD0  CCFileClass::WriteINIString  this=CCFileClass  sig=csp ====
void __thiscall CCFileClass::WriteINIString(CCFileClass *this)
{
  char v2; // [esp+7h] [ebp-25h] BYREF
  RawFileClass v3; // [esp+8h] [ebp-24h] BYREF

  v2 = 0; /*0x5d8fd6*/
  if ( !*(_DWORD *)this->CDFileClass ) /*0x5d8fdb*/
  {
    *(_DWORD *)this->CDFileClass = Network::ResolveAndConnect((Network *)this, &v2); /*0x5d8fea*/
    if ( v2 ) /*0x5d8ff2*/
    {
      RawFileClass::Construct(&v3, (int)&stru_8263E0.MaxFDelta); /*0x5d8ffd*/
      INIClass::SetInt( /*0x5d9016*/
        &DSurface_ViewBounds.__pad_FC[36],
        (unsigned __int8 *)&stru_8263E0.Loop,
        g_INI_Key_FirewallSettings,
        *(_DWORD *)this->CDFileClass,
        0);
      INIClass::SetInt( /*0x5d9030*/
        &DSurface_ViewBounds.__pad_FC[36],
        (unsigned __int8 *)&stru_8263E0.Loop,
        g_INI_Key_FirewallDelta,
        this->?,
        0);
      INIClass::WriteDigest((INIClass *)&DSurface_ViewBounds.__pad_FC[36], (int)&v3, 0); /*0x5d9041*/
      RawFileClass::Dtor(&v3); /*0x5d904a*/
    }
  }
}



// ==== 0x005D9060  ObjectClass::method_5D9060  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_5D9060(ObjectClass *this, int a2)
{
  int v2; // ebx
  int v4; // ebp
  int v5; // edx
  __int16 v6; // di

  v2 = a2; /*0x5d9061*/
  if ( !a2 ) /*0x5d906c*/
    v2 = 1; /*0x5d906e*/
  v4 = 255; /*0x5d9073*/
  while ( 1 ) /*0x5d907b*/
  {
    v5 = v2 + this->?; /*0x5d907b*/
    this->? = v5; /*0x5d907f*/
    v6 = v5; /*0x5d9087*/
    if ( v5 > 0xFFFF ) /*0x5d908a*/
      this->? = 2048; /*0x5d908c*/
    if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d90a4*/
      break; /*0x5d90a4*/
    if ( (*(unsigned __int8 (__stdcall **)(_WORD))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v5) ) /*0x5d90a9*/
    {
      (*(void (__thiscall **)(_DWORD, __int16))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d90ca*/
        *(_DWORD *)&stru_887598.isAliveFlag,
        v6);
      return v6; /*0x5d90ca*/
    }
    if ( !v4-- ) /*0x5d90b0*/
      return v6; /*0x5d90be*/
  }
  return v6; /*0x5d90ba*/
}



// ==== 0x005D90E0  Network::QueryAddress  this=Network  sig=csp ====
int __stdcall Network::QueryAddress(unsigned __int16 *a1, int a2, int a3, char a4)
{
  int QueueCount; // ebx
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int result; // eax
  DWORD Ticks; // [esp+Ch] [ebp-1D4h]
  int v10; // [esp+18h] [ebp-1C8h] BYREF
  char v11[3]; // [esp+1Ch] [ebp-1C4h] BYREF
  __int16 v12; // [esp+4Dh] [ebp-193h]
  bool v13; // [esp+4Fh] [ebp-191h]

  v10 = 43; /*0x5d9103*/
  strcpy(v11, aWw); /*0x5d910e*/
  (*(void (__thiscall **)(_DWORD *, int))(*dword_887628 + 116))(dword_887628, a2); /*0x5d9127*/
  v12 = a2; /*0x5d9139*/
  v13 = a4 == 1; /*0x5d9141*/
  QueueCount = Network::GetQueueCount((int)unk_A8E9C0); /*0x5d9155*/
  Network::FormatAddress(a1, 0); /*0x5d9157*/
  Debug::Log(); /*0x5d9169*/
  LOWORD(v5) = *a1; /*0x5d9175*/
  Network::SendMessage((int)unk_A8E9C0, (int)&v10, 56, 0, (int)a1, v5, a3); /*0x5d918c*/
  Ticks = Timer::GetTicks(); /*0x5d919a*/
  while ( Network::GetQueueCount((int)unk_A8E9C0) > QueueCount || dword_887628[12] ) /*0x5d91ab*/
  {
    v6 = 180; /*0x5d91c5*/
    if ( Ticks != -1 ) /*0x5d91cc*/
    {
      v7 = Timer::GetTicks() - Ticks; /*0x5d91d7*/
      if ( v7 >= 180 ) /*0x5d91dd*/
        break; /*0x5d91dd*/
      v6 = 180 - v7; /*0x5d91df*/
    }
    if ( !v6 ) /*0x5d91e3*/
      break; /*0x5d91e3*/
    Network::ReceiveLoop(unk_A8E9C0); /*0x5d91ea*/
    Event::Dispatch(); /*0x5d91ef*/
  }
  result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*dword_887628 + 116))(dword_887628, 0); /*0x5d91f6*/
  LOBYTE(result) = 1; /*0x5d9205*/
  return result; /*0x5d9203*/
}



// ==== 0x005D9220  Network::WaitForPacket  this=Network  sig=csp ====
__int16 __stdcall Network_WaitForPacket(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  __int16 v5; // si
  __int16 v7; // [esp+Eh] [ebp-1F6h] BYREF
  DWORD Ticks; // [esp+10h] [ebp-1F4h]
  int v9; // [esp+14h] [ebp-1F0h]
  int v10; // [esp+18h] [ebp-1ECh]
  int v11; // [esp+1Ch] [ebp-1E8h] BYREF
  _BYTE v12[8]; // [esp+20h] [ebp-1E4h] BYREF
  int v13; // [esp+28h] [ebp-1DCh]
  _BYTE v14[12]; // [esp+30h] [ebp-1D4h] BYREF
  _DWORD v15[11]; // [esp+3Ch] [ebp-1C8h] BYREF
  int v16; // [esp+6Bh] [ebp-199h]
  int v17; // [esp+71h] [ebp-193h]

  v2 = 0; /*0x5d922d*/
  Waypoint::InitInvalid(v14); /*0x5d922f*/
  v3 = 60; /*0x5d9244*/
  Ticks = Timer::GetTicks(); /*0x5d924b*/
  v10 = 60; /*0x5d924f*/
  if ( a2 ) /*0x5d9253*/
  {
    Ticks = Timer::GetTicks(); /*0x5d925e*/
    v3 = a2; /*0x5d9266*/
    v9 = v13; /*0x5d9268*/
    v10 = a2; /*0x5d926c*/
  }
  while ( 1 ) /*0x5d9277*/
  {
    if ( Ticks != -1 ) /*0x5d927c*/
    {
      v4 = Timer::GetTicks() - Ticks; /*0x5d9287*/
      if ( v4 >= v3 ) /*0x5d928d*/
        return 0; /*0x5d928d*/
      v3 -= v4; /*0x5d9293*/
    }
    if ( !v3 ) /*0x5d9297*/
      break; /*0x5d9297*/
    Network::ReceiveLoop(unk_A8E9C0); /*0x5d92a2*/
    Event::Dispatch(); /*0x5d92a7*/
    if ( v2 >= Connection::GetSpeed(unk_A8E9C0) ) /*0x5d92b8*/
      v2 = 0; /*0x5d92ba*/
    if ( Network::SendPacketThunk(v2, v15, v12, v14, &v7, &v11) && v7 == -22012 && v15[0] == 44 && a1 == v11 ) /*0x5d9304*/
    {
      v5 = v16; /*0x5d9314*/
      Debug::Log( /*0x5d9322*/
        "Mangler is seeing packets from port %d as coming from port %d\n",
        (unsigned __int16)v17,
        (unsigned __int16)v16);
      Network::receiveData(v2); /*0x5d9330*/
      return v5; /*0x5d9341*/
    }
    v3 = v10; /*0x5d9306*/
    ++v2; /*0x5d930a*/
  }
  return 0; /*0x5d9338*/
}



// ==== 0x005D9360  ObjectClass::SmallFunc_5D9360  this=ObjectClass  sig=csp ====
void __thiscall SmallFunc_5D9360(ObjectClass *this)
{
  RawFileClass v2; // [esp+4h] [ebp-24h] BYREF

  RawFileClass::Construct(&v2, (int)&stru_8263E0.MaxFDelta); /*0x5d936f*/
  INIClass::SetInt( /*0x5d9388*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)&stru_8263E0.Loop,
    g_INI_Key_FirewallSettings,
    (int)this->AbstractClass,
    0);
  INIClass::SetInt( /*0x5d93a2*/
    &DSurface_ViewBounds.__pad_FC[36],
    (unsigned __int8 *)&stru_8263E0.Loop,
    g_INI_Key_FirewallDelta,
    (int)this->?,
    0);
  INIClass::WriteDigest((INIClass *)&DSurface_ViewBounds.__pad_FC[36], (int)&v2, 0); /*0x5d93b3*/
  RawFileClass::Dtor(&v2); /*0x5d93bc*/
}



// ==== 0x005D93D0  Network::dispatchEvent  this=Network  sig=csp ====
int __thiscall Network::dispatchEvent(Network *this)
{
  int result; // eax

  this->Network_field_0x4 = (void *)INIClass::ReadInt_Overwrite( /*0x5d93fa*/
                                      (bool *)&DSurface_ViewBounds.__pad_FC[36],
                                      (unsigned __int8 *)&stru_8263E0.Loop,
                                      (unsigned __int8 *)g_INI_Key_FirewallSettings,
                                      0);
  result = INIClass::ReadInt_Overwrite( /*0x5d93fd*/
             (bool *)&DSurface_ViewBounds.__pad_FC[36],
             (unsigned __int8 *)&stru_8263E0.Loop,
             (unsigned __int8 *)g_INI_Key_FirewallDelta,
             1);
  this->Network_field_0xC = (void *)result; /*0x5d9402*/
  return result; /*0x5d9405*/
}



// ==== 0x005D9410  Network::ResolveAndConnect  this=Network  sig=csp ====
int __thiscall Network::ResolveAndConnect(Network *this, _BYTE *a2)
{
  Waypoint *v3; // esi
  int v4; // edi
  int v5; // esi
  int v7; // ebx
  const char *v8; // esi
  struct hostent *v9; // eax
  int v10; // ecx
  int *v11; // edx
  _DWORD *v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  Waypoint *v16; // esi
  int *v17; // edi
  int v18; // esi
  char *v19; // eax
  bool v20; // sf
  int v21; // ecx
  int v23; // edi
  __int16 i; // si
  int v25; // eax
  int v26; // edi
  __int16 j; // bx
  int v28; // eax
  int *v29; // esi
  int k; // edi
  int v31; // ebx
  int v32; // eax
  int v33; // ecx
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // eax
  int v39; // esi
  int v40; // esi
  void *v41; // eax
  void *v42; // eax
  int v43; // ebx
  int *v44; // esi
  void *Network_field_0xC; // eax
  int v46; // ecx
  int v47; // esi
  int v48; // eax
  int v49; // ecx
  int v51; // ebx
  char *v52; // eax
  int v53; // ecx
  unsigned __int16 v55; // bx
  int v56; // esi
  int v57; // eax
  int v58; // esi
  __int16 v59; // ax
  int v60; // esi
  unsigned __int16 v61; // si
  int m; // edi
  int v63; // eax
  int v64; // esi
  int v65; // eax
  int v66; // [esp+40h] [ebp-188h]
  int v67; // [esp+40h] [ebp-188h]
  int Ticks; // [esp+44h] [ebp-184h]
  int v69; // [esp+44h] [ebp-184h]
  int v70; // [esp+44h] [ebp-184h]
  int v71; // [esp+44h] [ebp-184h]
  int v72; // [esp+44h] [ebp-184h]
  int v73; // [esp+44h] [ebp-184h]
  int v74; // [esp+50h] [ebp-178h] BYREF
  __int16 v75[2]; // [esp+54h] [ebp-174h]
  int v76; // [esp+58h] [ebp-170h] BYREF
  int v77; // [esp+5Ch] [ebp-16Ch]
  unsigned __int16 v78[2]; // [esp+60h] [ebp-168h] BYREF
  int v79; // [esp+64h] [ebp-164h]
  int v80; // [esp+68h] [ebp-160h]
  int v81; // [esp+6Ch] [ebp-15Ch] BYREF
  int v82; // [esp+70h] [ebp-158h]
  int v83; // [esp+74h] [ebp-154h]
  char *v84; // [esp+7Ch] [ebp-14Ch]
  char *v85; // [esp+80h] [ebp-148h]
  int v86; // [esp+84h] [ebp-144h]
  int v87[2]; // [esp+88h] [ebp-140h] BYREF
  _DWORD v88[2]; // [esp+90h] [ebp-138h] BYREF
  Waypoint v89; // [esp+98h] [ebp-130h] BYREF

  *(_DWORD *)v75 = 4321; /*0x5d9425*/
  v77 = 2130706432; /*0x5d942d*/
  *a2 = 0; /*0x5d9435*/
  v66 = 0; /*0x5d9437*/
  v3 = &v89; /*0x5d943b*/
  v4 = 4; /*0x5d943f*/
  do /*0x5d944f*/
  {
    Waypoint::InitInvalid(v3); /*0x5d9446*/
    v3 = (Waypoint *)((char *)v3 + 12); /*0x5d944b*/
    --v4; /*0x5d944e*/
  }
  while ( v4 ); /*0x5d944f*/
  Timer::GetTicks(); /*0x5d9455*/
  if ( dword_A8E254 ) /*0x5d9469*/
  {
    v5 = 1; /*0x5d9471*/
    Debug::Log(); /*0x5d9476*/
    if ( byte_A8E180 ) /*0x5d9485*/
    {
      v5 = 9; /*0x5d948c*/
      Debug::Log(); /*0x5d9491*/
    }
    return v5; /*0x5d94a5*/
  }
  Ticks = Timer::GetTicks(); /*0x5d94bf*/
  Debug::Log(); /*0x5d94cb*/
  v7 = 0; /*0x5d94d3*/
  v86 = 0; /*0x5d94d5*/
  *(_DWORD *)v78 = dword_B76338; /*0x5d94d9*/
  v85 = &g_WindowManager.__pad_EC[688]; /*0x5d94e1*/
  v84 = aMangler1Westwo_0; /*0x5d94e9*/
  while ( 1 ) /*0x5d94fb*/
  {
    v8 = v84; /*0x5d94fb*/
    if ( dword_B77E1C > v86 ) /*0x5d9501*/
    {
      v8 = v85; /*0x5d9507*/
      v75[0] = **(_WORD **)v78; /*0x5d9513*/
      Debug::Log(); /*0x5d9518*/
    }
    v84 += 32; /*0x5d953b*/
    v85 += 128; /*0x5d953f*/
    *(_DWORD *)v78 += 4; /*0x5d9543*/
    ++v86; /*0x5d9554*/
    if ( !strlen(v8) ) /*0x5d9549*/
      break; /*0x5d9549*/
    strcpy(&v89.__pad_0[48], v8); /*0x5d9579*/
    v9 = gethostbyname(&v89.__pad_0[48]); /*0x5d958a*/
    if ( !v9 ) /*0x5d9591*/
    {
      WSAGetLastError(); /*0x5d9628*/
      Debug::Log(); /*0x5d9633*/
      break; /*0x5d9633*/
    }
    v10 = 0; /*0x5d9597*/
    if ( v7 <= 0 ) /*0x5d959b*/
    {
LABEL_16:
      ++v66; /*0x5d95b8*/
      v12 = (int *)((char *)&v81 + v7); /*0x5d95c8*/
      v7 += 4; /*0x5d95cc*/
      *v12 = **(_DWORD **)v9->h_addr_list; /*0x5d95d1*/
      Debug::Log(); /*0x5d95f2*/
    }
    else
    {
      v11 = &v81; /*0x5d95a2*/
      while ( *v11 != **(_DWORD **)v9->h_addr_list ) /*0x5d95aa*/
      {
        ++v10; /*0x5d95b0*/
        ++v11; /*0x5d95b1*/
        if ( v10 >= v66 ) /*0x5d95b6*/
          goto LABEL_16; /*0x5d95b6*/
      }
    }
    if ( v7 < 16 ) /*0x5d95fd*/
    {
      v13 = 300; /*0x5d9603*/
      if ( Ticks != -1 ) /*0x5d960a*/
      {
        v14 = Timer::GetTicks() - Ticks; /*0x5d9615*/
        if ( v14 >= 300 ) /*0x5d961b*/
          break; /*0x5d961b*/
        v13 = 300 - v14; /*0x5d961d*/
      }
      if ( v13 ) /*0x5d9621*/
        continue; /*0x5d9621*/
    }
    break; /*0x5d9621*/
  }
  v15 = v66; /*0x5d963b*/
  if ( v66 < 3 ) /*0x5d9642*/
    return 1; /*0x5d9642*/
  v16 = &v89; /*0x5d964c*/
  v17 = &v81; /*0x5d9650*/
  do /*0x5d9679*/
  {
    *(_DWORD *)v78 = *v17; /*0x5d965d*/
    Struct::Copy6Bytes(v16->__pad_0, (int)v78); /*0x5d9661*/
    Network::SetPort((Network *)v16, v75[0]); /*0x5d966d*/
    ++v17; /*0x5d9672*/
    v16 = (Waypoint *)((char *)v16 + 12); /*0x5d9675*/
    --v15; /*0x5d9678*/
  }
  while ( v15 ); /*0x5d9679*/
  v18 = 255; /*0x5d967b*/
  while ( 1 ) /*0x5d9689*/
  {
    v19 = (char *)this->Network_field_0x10 + 1; /*0x5d9689*/
    LOWORD(v15) = LOWORD(this->Network_field_0x10) + 1; /*0x5d968b*/
    v20 = (int)this->Network_field_0x10 - 65534 < 0; /*0x5d968e*/
    this->Network_field_0x10 = v19; /*0x5d9693*/
    *(_DWORD *)v75 = v15; /*0x5d9696*/
    if ( !(v20 ^ __OFSUB__(v19, 0xFFFF) | (v19 == (char *)0xFFFF)) ) /*0x5d969a*/
      this->Network_field_0x10 = (void *)2048; /*0x5d969c*/
    v21 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d969f*/
    if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d96b0*/
      break; /*0x5d96b0*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v15) ) /*0x5d96b5*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d96ce*/
        *(_DWORD *)&stru_887598.isAliveFlag,
        v15);
LABEL_36:
      v21 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d96d1*/
      break; /*0x5d96d1*/
    }
    if ( !v18-- ) /*0x5d96bc*/
      goto LABEL_36; /*0x5d96c1*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v21 + 104))(v21, v15) ) /*0x5d96da*/
    return 1; /*0x5d9d92*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x5d96ed*/
  v69 = Timer::GetTicks(); /*0x5d96f9*/
  v23 = 360; /*0x5d9701*/
  for ( i = 0; ; i = Network::WaitForPacket(2130706432, 0) ) /*0x5d970e*/
  {
    if ( v69 != -1 ) /*0x5d9715*/
    {
      v25 = Timer::GetTicks() - v69; /*0x5d9720*/
      if ( v25 >= 360 ) /*0x5d9726*/
        break; /*0x5d9726*/
      v23 = 360 - v25; /*0x5d9728*/
    }
    if ( !v23 ) /*0x5d972c*/
      break; /*0x5d972c*/
    if ( i ) /*0x5d9731*/
      goto LABEL_46; /*0x5d9731*/
    Network::QueryAddress((unsigned __int16 *)&v89, v15, 2130706432, 0); /*0x5d9742*/
    v23 = 360; /*0x5d9755*/
  }
  if ( !i ) /*0x5d9760*/
  {
LABEL_159:
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9d6d*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      v15);
    if ( i == (_WORD)v15 ) /*0x5d9d7c*/
    {
      this->Network_field_0x8 = 0; /*0x5d9d85*/
      *a2 = 1; /*0x5d9d8c*/
    }
    return 1; /*0x5d9d8c*/
  }
LABEL_46:
  if ( i == (_WORD)v15 ) /*0x5d9769*/
    goto LABEL_159; /*0x5d9769*/
  v26 = 360; /*0x5d977c*/
  v70 = Timer::GetTicks(); /*0x5d9781*/
  for ( j = 0; ; j = Network::WaitForPacket(2130706433, 0) ) /*0x5d978d*/
  {
    if ( v70 != -1 ) /*0x5d9794*/
    {
      v28 = Timer::GetTicks() - v70; /*0x5d979f*/
      if ( v28 >= 360 ) /*0x5d97a5*/
        break; /*0x5d97a5*/
      v26 = 360 - v28; /*0x5d97a7*/
    }
    if ( !v26 || j ) /*0x5d97b0*/
      break; /*0x5d97b0*/
    Network::QueryAddress((unsigned __int16 *)&v89.__pad_0[12], *(int *)v75, 2130706433, 0); /*0x5d97c5*/
    v26 = 360; /*0x5d97d8*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d97e0*/
    *(_DWORD *)&stru_887598.isAliveFlag,
    *(_DWORD *)v75);
  if ( !j || j == v75[0] ) /*0x5d97fc*/
    return 1; /*0x5d97fc*/
  *(_DWORD *)v78 = 0; /*0x5d9805*/
  v29 = (int *)(j != i ? 4 : 2);
  v67 = (int)v29; /*0x5d9818*/
  while ( 2 ) /*0x5d981c*/
  {
    v87[0] = 0; /*0x5d981c*/
    v88[0] = 0; /*0x5d9824*/
    v87[1] = 0; /*0x5d9828*/
    v88[1] = 0; /*0x5d982c*/
    for ( k = 0; k < 4; ++k ) /*0x5d9830*/
    {
      v31 = k; /*0x5d9834*/
      if ( !k ) /*0x5d9836*/
        v31 = 1; /*0x5d9838*/
      *(_DWORD *)v75 = 255; /*0x5d983d*/
      while ( 1 ) /*0x5d984a*/
      {
        v32 = (int)this->Network_field_0x10 + v31; /*0x5d984a*/
        this->Network_field_0x10 = (void *)v32; /*0x5d984c*/
        LOWORD(v29) = v32; /*0x5d9854*/
        if ( v32 > 0xFFFF ) /*0x5d9857*/
          this->Network_field_0x10 = (void *)2048; /*0x5d9859*/
        v33 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9860*/
        if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d9871*/
          break; /*0x5d9871*/
        if ( (*(unsigned __int8 (__stdcall **)(int *))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v29) ) /*0x5d9876*/
        {
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9897*/
            *(_DWORD *)&stru_887598.isAliveFlag,
            v29);
LABEL_69:
          v33 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d989a*/
          break; /*0x5d989a*/
        }
        if ( (*(_DWORD *)v75)-- == 0 ) /*0x5d9884*/
          goto LABEL_69; /*0x5d988a*/
      }
      *((_WORD *)v87 + k) = (_WORD)v29; /*0x5d98a0*/
      v35 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v33 + 104))(v33, v29); /*0x5d98a8*/
      if ( !(_BYTE)v35 ) /*0x5d98ad*/
      {
        if ( k > 0 ) /*0x5d99e7*/
        {
          v44 = v87; /*0x5d99e9*/
          do /*0x5d9a05*/
          {
            if ( *(_WORD *)v44 ) /*0x5d99ed*/
            {
              LOWORD(v35) = *(_WORD *)v44; /*0x5d99ed*/
              v35 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d99fe*/
                      *(_DWORD *)&stru_887598.isAliveFlag,
                      v35);
            }
            v44 = (int *)((char *)v44 + 2); /*0x5d9a01*/
            --k; /*0x5d9a04*/
          }
          while ( k ); /*0x5d9a05*/
        }
        return v67; /*0x5d9a15*/
      }
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x5d98c5*/
    v36 = 0; /*0x5d98d3*/
    v77 += 10; /*0x5d98d5*/
    v38 = Timer::GetTicks(); /*0x5d98d9*/
    HIWORD(v37) = 0; /*0x5d98de*/
    v81 = v38; /*0x5d98e3*/
    v71 = v38; /*0x5d98e7*/
    HIWORD(v38) = HIWORD(v82); /*0x5d98eb*/
    v39 = 720; /*0x5d98ef*/
    v83 = 720; /*0x5d98f1*/
    while ( 1 ) /*0x5d98fd*/
    {
      if ( v71 != -1 ) /*0x5d9902*/
      {
        v38 = Timer::GetTicks() - v71; /*0x5d990d*/
        if ( v38 >= 720 ) /*0x5d9913*/
          break; /*0x5d9913*/
        v39 = 720 - v38; /*0x5d9915*/
      }
      if ( !v39 || v36 >= 4 ) /*0x5d991e*/
        break; /*0x5d991e*/
      v40 = v77; /*0x5d9920*/
      for ( k = 0; k < 4; ++k ) /*0x5d9924*/
      {
        if ( !*((_WORD *)v88 + k) ) /*0x5d9926*/
        {
          LOWORD(v37) = *((_WORD *)v87 + k); /*0x5d992e*/
          Network::QueryAddress((unsigned __int16 *)&v89, v37, v40, 0); /*0x5d993e*/
          LOWORD(v38) = Network::WaitForPacket(v40, 0); /*0x5d9948*/
          *((_WORD *)v88 + k) = v38; /*0x5d9950*/
          if ( (_WORD)v38 ) /*0x5d9955*/
            ++v36; /*0x5d9957*/
        }
        ++v40; /*0x5d9959*/
      }
      v39 = 720; /*0x5d995f*/
    }
    v29 = v87; /*0x5d9969*/
    do /*0x5d9985*/
    {
      if ( *(_WORD *)v29 ) /*0x5d996d*/
      {
        LOWORD(v38) = *(_WORD *)v29; /*0x5d996d*/
        v38 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d997e*/
                *(_DWORD *)&stru_887598.isAliveFlag,
                v38);
      }
      v29 = (int *)((char *)v29 + 2); /*0x5d9981*/
      --k; /*0x5d9984*/
    }
    while ( k ); /*0x5d9985*/
    if ( v36 < 4 ) /*0x5d998a*/
    {
      Network_field_0xC = this->Network_field_0xC; /*0x5d9a18*/
      if ( Network_field_0xC && (int)this->Network_field_0x4 > 1 ) /*0x5d9a23*/
        this->Network_field_0x8 = Network_field_0xC; /*0x5d9a25*/
      return v67; /*0x5d9a28*/
    }
    else
    {
      HIBYTE(v76) = 0; /*0x5d99a7*/
      HIBYTE(v74) = 0; /*0x5d99ac*/
      v41 = (void *)DetectPortAllocationPattern( /*0x5d99b1*/
                      v36,
                      (__int16 *)v87,
                      (unsigned __int16 *)v88,
                      (_BYTE *)&v76 + 3,
                      (_BYTE *)&v74 + 3);
      if ( v41 ) /*0x5d99b8*/
      {
        v46 = -(HIBYTE(v76) != 0); /*0x5d9a43*/
        this->Network_field_0x8 = v41; /*0x5d9a45*/
        v43 = ((v46 & 0x10) + 16) | v67; /*0x5d9a52*/
        v67 = v43; /*0x5d9a56*/
        if ( HIBYTE(v74) ) /*0x5d9a5a*/
          *a2 = 1; /*0x5d9a63*/
      }
      else
      {
        v42 = this->Network_field_0xC; /*0x5d99ba*/
        if ( v42 && (int)this->Network_field_0x4 > 1 ) /*0x5d99c5*/
          this->Network_field_0x8 = v42; /*0x5d99c7*/
        ++*(_DWORD *)v78; /*0x5d99d2*/
        if ( *(int *)v78 < 3 ) /*0x5d99d6*/
          continue; /*0x5d99d6*/
        v43 = v67; /*0x5d99dc*/
      }
      if ( (v43 & 4) != 0 ) /*0x5d9a69*/
      {
        if ( (v43 & 0x10) != 0 ) /*0x5d9a72*/
        {
          Debug::Log(); /*0x5d9a7d*/
          v47 = 255; /*0x5d9a85*/
          while ( 1 ) /*0x5d9a8e*/
          {
            v48 = (int)this->Network_field_0x10 + 1; /*0x5d9a8e*/
            this->Network_field_0x10 = (void *)v48; /*0x5d9a90*/
            LOWORD(k) = v48; /*0x5d9a98*/
            if ( v48 > 0xFFFF ) /*0x5d9a9b*/
              this->Network_field_0x10 = (void *)2048; /*0x5d9a9d*/
            v49 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9aa4*/
            if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d9ab5*/
              break; /*0x5d9ab5*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(k) ) /*0x5d9aba*/
            {
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9ad3*/
                *(_DWORD *)&stru_887598.isAliveFlag,
                k);
LABEL_118:
              v49 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9ad6*/
              break; /*0x5d9ad6*/
            }
            if ( !v47-- ) /*0x5d9ac1*/
              goto LABEL_118; /*0x5d9ac6*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v49 + 104))(v49, k) ) /*0x5d9adf*/
            return v43; /*0x5d9af2*/
          v51 = 255; /*0x5d9af5*/
          while ( 1 ) /*0x5d9afe*/
          {
            v52 = (char *)this->Network_field_0x10 + 1; /*0x5d9afe*/
            LOWORD(v47) = LOWORD(this->Network_field_0x10) + 1; /*0x5d9b00*/
            v20 = (int)this->Network_field_0x10 - 65534 < 0; /*0x5d9b03*/
            this->Network_field_0x10 = v52; /*0x5d9b08*/
            *(_DWORD *)v75 = v47; /*0x5d9b0b*/
            if ( !(v20 ^ __OFSUB__(v52, 0xFFFF) | (v52 == (char *)0xFFFF)) ) /*0x5d9b0f*/
              this->Network_field_0x10 = (void *)2048; /*0x5d9b11*/
            v53 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9b18*/
            if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5d9b29*/
              break; /*0x5d9b29*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v47) ) /*0x5d9b2e*/
            {
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9b47*/
                *(_DWORD *)&stru_887598.isAliveFlag,
                v47);
LABEL_130:
              v53 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5d9b4a*/
              break; /*0x5d9b4a*/
            }
            if ( !v51-- ) /*0x5d9b35*/
              goto LABEL_130; /*0x5d9b3a*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v53 + 104))(v53, v47) ) /*0x5d9b53*/
            return v67; /*0x5d9b68*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x5d9b73*/
          v72 = Timer::GetTicks(); /*0x5d9b7f*/
          v55 = 0; /*0x5d9b8f*/
          v56 = 240; /*0x5d9b91*/
          v77 += 10; /*0x5d9b9d*/
          while ( 1 ) /*0x5d9ba1*/
          {
            if ( v72 != -1 ) /*0x5d9ba6*/
            {
              v57 = Timer::GetTicks() - v72; /*0x5d9bb1*/
              if ( v57 >= 240 ) /*0x5d9bb7*/
                break; /*0x5d9bb7*/
              v56 = 240 - v57; /*0x5d9bb9*/
            }
            if ( !v56 ) /*0x5d9bbd*/
              break; /*0x5d9bbd*/
            if ( v55 ) /*0x5d9bc2*/
              goto LABEL_142; /*0x5d9bc2*/
            v58 = v77; /*0x5d9bc4*/
            Network::QueryAddress((unsigned __int16 *)&v89, k, v77, 0); /*0x5d9bd3*/
            v59 = Network::WaitForPacket(v58, 0); /*0x5d9bdd*/
            v56 = 240; /*0x5d9be2*/
            v55 = v59; /*0x5d9be6*/
          }
          if ( !v55 ) /*0x5d9bed*/
          {
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9bf8*/
              *(_DWORD *)&stru_887598.isAliveFlag,
              k);
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5d9c08*/
              *(_DWORD *)&stru_887598.isAliveFlag,
              *(_DWORD *)v75);
            return v67; /*0x5d9c19*/
          }
LABEL_142:
          *(_DWORD *)v78 = *(_DWORD *)v89.__pad_0; /*0x5d9c1c*/
          v79 = *(_DWORD *)&v89.__pad_0[4]; /*0x5d9c2d*/
          v80 = *(_DWORD *)&v89.__pad_0[8]; /*0x5d9c36*/
          Network::SetPort((Network *)v78, *(_WORD *)v89.__pad_0 + 1); /*0x5d9c3a*/
          v60 = v77; /*0x5d9c3f*/
          Network::QueryAddress(v78, k, v77, 0); /*0x5d9c4e*/
          Network::QueryAddress(v78, k, v60, 0); /*0x5d9c5e*/
          Network::QueryAddress(v78, k, v60, 0); /*0x5d9c6e*/
          v77 = v60 + 1; /*0x5d9c78*/
          v61 = 0; /*0x5d9c7c*/
          v73 = Timer::GetTicks(); /*0x5d9c83*/
          for ( m = 240; ; m = 240 ) /*0x5d9c8b*/
          {
            if ( v73 != -1 ) /*0x5d9c9d*/
            {
              v63 = Timer::GetTicks() - v73; /*0x5d9ca8*/
              if ( v63 >= 240 ) /*0x5d9cae*/
                break; /*0x5d9cae*/
              m = 240 - v63; /*0x5d9cb0*/
            }
            if ( !m ) /*0x5d9cb4*/
              break; /*0x5d9cb4*/
            if ( v61 ) /*0x5d9cb9*/
              goto LABEL_150; /*0x5d9cb9*/
            v64 = v77; /*0x5d9cbb*/
            Network::QueryAddress((unsigned __int16 *)&v89, *(int *)v75, v77, 0); /*0x5d9cce*/
            v61 = Network::WaitForPacket(v64, 0); /*0x5d9ce1*/
          }
          if ( !v61 ) /*0x5d9ce8*/
            goto LABEL_152; /*0x5d9ce8*/
LABEL_150:
          if ( (void *)v61 == (char *)this->Network_field_0x8 + v55 ) /*0x5d9cfd*/
          {
            Debug::Log(); /*0x5d9d5e*/
          }
          else
          {
            Debug::Log(); /*0x5d9d04*/
            v65 = v67; /*0x5d9d09*/
            LOBYTE(v65) = v67 | 0x40; /*0x5d9d10*/
            v67 = v65; /*0x5d9d12*/
          }
LABEL_152:
          v43 = v67; /*0x5d9d16*/
        }
        else
        {
          v43 |= 0x40u; /*0x5d9d68*/
        }
      }
      Debug::Log(); /*0x5d9d1f*/
      if ( dword_B77E18 == 2 || byte_A8E180 ) /*0x5d9d38*/
      {
        v43 |= 8u; /*0x5d9d3f*/
        Debug::Log(); /*0x5d9d42*/
      }
      return v43; /*0x5d9d4c*/
    }
  }
}



// ==== 0x005D9DB0  DetectPortAllocationPattern  this=-  sig=csp ====
int __stdcall DetectPortAllocationPattern(int a1, __int16 *a2, unsigned __int16 *a3, _BYTE *a4, _BYTE *a5)
{
  __int16 *v5; // ebp
  int v6; // edx
  int v8; // ecx
  __int16 *v9; // edx
  unsigned __int16 *v10; // eax
  int v11; // esi
  int v12; // ebp
  unsigned __int16 v13; // cx
  __int16 v14; // cx
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v19; // eax
  unsigned __int16 v20; // ax
  int v21; // esi
  int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned __int16 v24; // cx
  int v25; // esi
  int v26; // edi
  int v27; // esi
  int v28; // eax
  int v29; // [esp+1Ch] [ebp+Ch]

  v5 = a2; /*0x5d9db2*/
  Debug::Log(); /*0x5d9dd9*/
  v6 = a1; /*0x5d9dde*/
  if ( a1 > 0 ) /*0x5d9deb*/
  {
    v29 = a1; /*0x5d9ded*/
    do /*0x5d9e46*/
    {
      v8 = v6 - 1; /*0x5d9df1*/
      if ( v6 - 1 > 0 ) /*0x5d9df6*/
      {
        v9 = v5; /*0x5d9dfa*/
        v10 = a3 + 1; /*0x5d9dfc*/
        v11 = (char *)v5 - (char *)a3; /*0x5d9dff*/
        v12 = v8; /*0x5d9e01*/
        do /*0x5d9e33*/
        {
          v13 = *(v10 - 1); /*0x5d9e03*/
          if ( v13 > *v10 ) /*0x5d9e0d*/
          {
            *(v10 - 1) = *v10; /*0x5d9e15*/
            *v10 = v13; /*0x5d9e19*/
            v14 = *v9; /*0x5d9e22*/
            *v9 = *(unsigned __int16 *)((char *)v10 + v11); /*0x5d9e25*/
            *(unsigned __int16 *)((char *)v10 + v11) = v14; /*0x5d9e28*/
          }
          ++v9; /*0x5d9e2c*/
          ++v10; /*0x5d9e2f*/
          --v12; /*0x5d9e32*/
        }
        while ( v12 ); /*0x5d9e33*/
        v5 = a2; /*0x5d9e35*/
        v6 = a1; /*0x5d9e39*/
      }
      --v29; /*0x5d9e42*/
    }
    while ( v29 ); /*0x5d9e46*/
  }
  v15 = a3[1]; /*0x5d9e4c*/
  v16 = (unsigned __int16)v15 - *a3; /*0x5d9e55*/
  if ( v16 == 1 ) /*0x5d9e5a*/
  {
    v17 = a3[2]; /*0x5d9e5e*/
    if ( (unsigned __int16)v17 - v15 == 1 && a3[3] - v17 == 1 ) /*0x5d9e74*/
    {
      Debug::Log(); /*0x5d9e7b*/
      *a4 = 0; /*0x5d9e8d*/
      *a5 = 1; /*0x5d9e90*/
      return 1; /*0x5d9e97*/
    }
  }
  if ( v16 == 2 ) /*0x5d9e9d*/
  {
    v19 = a3[2]; /*0x5d9ea1*/
    if ( (unsigned __int16)v19 - v15 == 2 && a3[3] - v19 == 2 ) /*0x5d9eb7*/
    {
      Debug::Log(); /*0x5d9ebe*/
      *a4 = 0; /*0x5d9ece*/
      *a5 = 1; /*0x5d9ed6*/
      return 2; /*0x5d9eda*/
    }
  }
  v20 = a3[2]; /*0x5d9edf*/
  v21 = v20 - v15; /*0x5d9ee5*/
  v22 = a3[3] - v20; /*0x5d9eed*/
  if ( v16 != v21 ) /*0x5d9ef1*/
  {
    if ( v21 == v22 ) /*0x5d9f42*/
    {
      Debug::Log(); /*0x5d9f4a*/
      *a4 = 0; /*0x5d9f5a*/
      *a5 = 0; /*0x5d9f62*/
      return v21; /*0x5d9f66*/
    }
    if ( v6 > 0 ) /*0x5d9f6b*/
    {
      v23 = a3; /*0x5d9f6f*/
      do /*0x5d9f7e*/
      {
        *v23 -= *(unsigned __int16 *)((char *)v23 + (char *)v5 - (char *)a3); /*0x5d9f77*/
        ++v23; /*0x5d9f7a*/
        --v6; /*0x5d9f7d*/
      }
      while ( v6 ); /*0x5d9f7e*/
    }
    v24 = a3[2]; /*0x5d9f84*/
    v25 = a3[1]; /*0x5d9f93*/
    v26 = v24 - v25; /*0x5d9f95*/
    v27 = v25 - *a3; /*0x5d9f9d*/
    v28 = a3[3] - v24; /*0x5d9f9f*/
    if ( v27 == v26 ) /*0x5d9fa3*/
    {
      if ( v26 == v28 ) /*0x5d9fa7*/
      {
        Debug::Log(); /*0x5d9faf*/
        *a4 = 1; /*0x5d9fbf*/
        *a5 = 1; /*0x5d9fc7*/
        return v27; /*0x5d9fcb*/
      }
    }
    else if ( v27 != v28 ) /*0x5d9fd0*/
    {
      if ( v26 == v28 ) /*0x5d9fd4*/
      {
        Debug::Log(); /*0x5d9fdc*/
        *a4 = 1; /*0x5d9fec*/
        *a5 = 0; /*0x5d9fef*/
        return v26; /*0x5d9ff2*/
      }
      else
      {
        *a5 = 0; /*0x5da005*/
        *a4 = 0; /*0x5da009*/
        return 0; /*0x5da00c*/
      }
    }
    Debug::Log(); /*0x5da018*/
    *a4 = 1; /*0x5da028*/
    *a5 = 0; /*0x5da030*/
    return v27; /*0x5da02b*/
  }
  if ( v21 == v22 ) /*0x5d9ef6*/
  {
    Debug::Log(); /*0x5d9efd*/
    *a4 = 0; /*0x5d9f0d*/
    *a5 = 1; /*0x5d9f10*/
  }
  else
  {
    Debug::Log(); /*0x5d9f21*/
    *a4 = 0; /*0x5d9f33*/
    *a5 = 0; /*0x5d9f36*/
  }
  return v16; /*0x5d9e93*/
}



// ==== 0x005DA040  Network_Connect  this=-  sig=csp ====
int __stdcall sub_5DA040(char a1)
{
  int result; // eax

  result = (a1 & 1) != 0; /*0x5da04b*/
  if ( (a1 & 2) != 0 ) /*0x5da053*/
    result += 2; /*0x5da055*/
  if ( (a1 & 4) != 0 ) /*0x5da05b*/
    result += 3; /*0x5da05d*/
  if ( (a1 & 8) != 0 ) /*0x5da063*/
    result += 10; /*0x5da065*/
  if ( (a1 & 0x10) != 0 ) /*0x5da06b*/
    ++result; /*0x5da06d*/
  if ( (a1 & 0x20) != 0 ) /*0x5da071*/
    result += 2; /*0x5da073*/
  return result; /*0x5da076*/
}



// ==== 0x005DA080  NetworkLobby::GetPlayerCount  this=NetworkLobby  sig=csp ====
int __stdcall NetworkLobby::GetPlayerCount(char a1)
{
  int result; // eax

  result = 2; /*0x5da084*/
  if ( (a1 & 1) != 0 ) /*0x5da08c*/
    result = 3; /*0x5da08e*/
  if ( (a1 & 2) != 0 ) /*0x5da096*/
    ++result; /*0x5da098*/
  if ( (a1 & 4) != 0 ) /*0x5da09c*/
    ++result; /*0x5da09e*/
  if ( (a1 & 0x20) != 0 ) /*0x5da0a2*/
    result += 5; /*0x5da0a4*/
  return result; /*0x5da0a7*/
}



// ==== 0x005DA0B0  Network::ResolveNetworkAddress  this=Network  sig=csp ====
unsigned int __thiscall Network::ResolveNetworkAddress(Network *this, unsigned __int16 a2)
{
  unsigned int result; // eax
  __int16 v4; // bx
  struct hostent *v5; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v11; // edi
  unsigned __int16 v12; // si
  int v13; // eax
  int v14; // edi
  int Network_field_0x8; // ebp
  int Network_field_0x0; // [esp+10h] [ebp-13Ch]
  int Ticks; // [esp+14h] [ebp-138h]
  int v18; // [esp+20h] [ebp-12Ch]
  int v19; // [esp+24h] [ebp-128h] BYREF
  int v20; // [esp+2Ch] [ebp-120h]
  int v21; // [esp+30h] [ebp-11Ch]
  Waypoint v22; // [esp+34h] [ebp-118h] BYREF

  Timer::GetTicks(); /*0x5da0c0*/
  result = this->Network_field_0x0; /*0x5da0c9*/
  Network_field_0x0 = this->Network_field_0x0; /*0x5da0d6*/
  if ( !this->Network_field_0x0 ) /*0x5da0c9*/
  {
    LOWORD(result) = a2; /*0x5da0dc*/
    return result; /*0x5da0ee*/
  }
  if ( (result & 1) != 0 ) /*0x5da0f3*/
  {
    LOWORD(result) = a2; /*0x5da0f5*/
    return result; /*0x5da107*/
  }
  v4 = 4321; /*0x5da11e*/
  strcpy(&v22.__pad_0[24], aMangler1Westwo); /*0x5da12c*/
  if ( dword_B77E1C > 0 ) /*0x5da13c*/
  {
    v4 = dword_B76338[dword_B77E20]; /*0x5da169*/
    strcpy(&v22.__pad_0[24], &g_WindowManager.__pad_EC[128 * dword_B77E20 + 688]); /*0x5da174*/
    Debug::Log(); /*0x5da17d*/
  }
  Debug::Log(); /*0x5da18f*/
  v5 = gethostbyname(&v22.__pad_0[24]); /*0x5da19c*/
  if ( !v5 ) /*0x5da1a3*/
  {
    WSAGetLastError(); /*0x5da1a5*/
    result = Debug::Log(); /*0x5da1b0*/
    LOWORD(result) = a2; /*0x5da1b5*/
    return result; /*0x5da1ca*/
  }
  v19 = **(_DWORD **)v5->h_addr_list; /*0x5da1dd*/
  Debug::Log(); /*0x5da20d*/
  Waypoint::InitInvalid(&v22); /*0x5da219*/
  Struct::Copy6Bytes(v22.__pad_0, (int)&v19); /*0x5da227*/
  Network::SetPort((Network *)&v22, v4); /*0x5da231*/
  Network::FormatAddress((Network *)&v22, 0); /*0x5da23c*/
  Debug::Log(); /*0x5da247*/
  v6 = 0; /*0x5da250*/
  v18 = 0; /*0x5da258*/
  Debug::Log(); /*0x5da25c*/
  v20 = Network_field_0x0 & 4; /*0x5da26b*/
  if ( (Network_field_0x0 & 4) != 0 ) /*0x5da26f*/
  {
    v7 = 255; /*0x5da275*/
    while ( 1 ) /*0x5da283*/
    {
      v8 = (int)this->Network_field_0x10 + 1; /*0x5da283*/
      this->Network_field_0x10 = (void *)v8; /*0x5da285*/
      LOWORD(v6) = v8; /*0x5da28d*/
      if ( v8 > 0xFFFF ) /*0x5da290*/
        this->Network_field_0x10 = (void *)2048; /*0x5da292*/
      v9 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5da295*/
      if ( !*(_DWORD *)&stru_887598.isAliveFlag || *(_DWORD *)&dword_A8B238 != 4 ) /*0x5da2a6*/
        break; /*0x5da2a6*/
      if ( (*(unsigned __int8 (__stdcall **)(int))(**(_DWORD **)&stru_887598.isAliveFlag + 104))(v6) ) /*0x5da2ab*/
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5da2c4*/
          *(_DWORD *)&stru_887598.isAliveFlag,
          v6);
LABEL_19:
        v9 = *(_DWORD *)&stru_887598.isAliveFlag; /*0x5da2c7*/
        break; /*0x5da2c7*/
      }
      if ( !v7-- ) /*0x5da2b2*/
        goto LABEL_19; /*0x5da2b7*/
    }
    v18 = v6; /*0x5da2cd*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 104))(v9, v6); /*0x5da2d4*/
    if ( !(_BYTE)result ) /*0x5da2d9*/
    {
      LOWORD(result) = a2; /*0x5da2db*/
      return result; /*0x5da2ed*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x5da2f8*/
  }
  v21 = (unsigned __int16)v6; /*0x5da308*/
  Debug::Log(); /*0x5da30c*/
  Ticks = Timer::GetTicks(); /*0x5da31d*/
  v11 = 180; /*0x5da325*/
  v12 = 0; /*0x5da332*/
  while ( 1 ) /*0x5da334*/
  {
    if ( Ticks != -1 ) /*0x5da339*/
    {
      v13 = Timer::GetTicks() - Ticks; /*0x5da344*/
      if ( v13 >= 180 ) /*0x5da34a*/
        break; /*0x5da34a*/
      v11 = 180 - v13; /*0x5da34c*/
    }
    if ( !v11 || v12 ) /*0x5da355*/
      break; /*0x5da355*/
    Network::QueryAddress((unsigned __int16 *)&v22, v6, dword_830CA8, 0); /*0x5da368*/
    v12 = Network::WaitForPacket(dword_830CA8, 30); /*0x5da37c*/
    Debug::Log(); /*0x5da38c*/
    v11 = 180; /*0x5da391*/
  }
  ++dword_830CA8; /*0x5da39a*/
  if ( (_WORD)v18 ) /*0x5da3ae*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 108))( /*0x5da3b9*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      v18);
  if ( v12 ) /*0x5da3bf*/
  {
    if ( v20 ) /*0x5da3e9*/
    {
      if ( (Network_field_0x0 & 0x10) != 0 ) /*0x5da415*/
      {
        v14 = (int)this->Network_field_0x8 + v12; /*0x5da420*/
      }
      else
      {
        Network_field_0x8 = (int)this->Network_field_0x8; /*0x5da424*/
        if ( Network_field_0x8 == 100 ) /*0x5da42a*/
          v14 = v12 - v21 + a2 + 100; /*0x5da445*/
        else
          v14 = a2 % Network_field_0x8 + Network_field_0x8 * (v12 / Network_field_0x8 + 1); /*0x5da46a*/
      }
      if ( v14 > 0xFFFF ) /*0x5da472*/
        v14 -= 0xFFFF; /*0x5da474*/
      if ( v14 < 1024 ) /*0x5da480*/
        LOWORD(v14) = v14 + 1024; /*0x5da482*/
      result = Debug::Log(); /*0x5da48e*/
      LOWORD(result) = v14; /*0x5da496*/
    }
    else
    {
      result = Debug::Log(); /*0x5da3f8*/
      LOWORD(result) = v12; /*0x5da400*/
    }
  }
  else
  {
    result = Debug::Log(); /*0x5da3c6*/
    LOWORD(result) = a2; /*0x5da3cb*/
  }
  return result; /*0x5da0e4*/
}



// ==== 0x005DA4B0  sub_5DA4B0  this=-  sig=ida-proto ====
int sub_5DA4B0()
{
  dword_ABFEF8 = 0; /*0x5da4b2*/
  dword_ABFEFC = 0; /*0x5da4b7*/
  dword_ABFF00 = 0; /*0x5da4bc*/
  dword_ABFF04 = 0; /*0x5da4c1*/
  return 0; /*0x5da4c6*/
}



// ==== 0x005DA4D0  sub_5DA4D0  this=-  sig=ida-proto ====
void sub_5DA4D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5da4dc*/
  dbl_ABFF10 = Math::Sqrt(v0 + v0); /*0x5da4ee*/
}



// ==== 0x005DA500  sub_5DA500  this=-  sig=ida-proto ====
void sub_5DA500()
{
  dbl_ABFF60 = dbl_ABFF10 / 60.0; /*0x5da50c*/
}



// ==== 0x005DA520  sub_5DA520  this=-  sig=ida-proto ====
void sub_5DA520()
{
  dbl_ABFF48 = 1.0 / dbl_ABFF60; /*0x5da52c*/
}



// ==== 0x005DA540  sub_5DA540  this=-  sig=ida-proto ====
void sub_5DA540()
{
  dbl_ABFF40 = 0.0174532925199433 * 45.0; /*0x5da54c*/
}



// ==== 0x005DA560  sub_5DA560  this=-  sig=ida-proto ====
void sub_5DA560()
{
  dbl_ABFF18 = 0.0174532925199433 * 60.0; /*0x5da56c*/
}



// ==== 0x005DA580  sub_5DA580  this=-  sig=ida-proto ====
void sub_5DA580()
{
  dbl_ABFEF0 = 0.0174532925199433 * 90.0; /*0x5da58c*/
}



// ==== 0x005DA5A0  sub_5DA5A0  this=-  sig=ida-proto ====
__int64 sub_5DA5A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABFEF0 - dbl_ABFF18); /*0x5da5b2*/
  result = Math::RoundToInt(v0 * dbl_ABFF10 * 0.5); /*0x5da5c6*/
  dword_ABFF68 = result; /*0x5da5cb*/
  return result; /*0x5da5d0*/
}



// ==== 0x005DA5E0  sub_5DA5E0  this=-  sig=ida-proto ====
void sub_5DA5E0()
{
  dbl_ABFF20 = Math::ArcTan((double)dword_ABFF68 * 0.00390625); /*0x5da5f7*/
}



// ==== 0x005DA610  sub_5DA610  this=-  sig=ida-proto ====
void sub_5DA610()
{
  dbl_ABFF38 = Math::ArcTan((double)(2 * dword_ABFF68) / dbl_ABFF10); /*0x5da632*/
}



// ==== 0x005DA640  sub_5DA640  this=-  sig=ida-proto ====
__int64 sub_5DA640()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFF68) + 0.5); /*0x5da65b*/
  dword_ABFF5C = result; /*0x5da660*/
  return result; /*0x5da666*/
}



// ==== 0x005DA670  sub_5DA670  this=-  sig=ida-proto ====
int sub_5DA670()
{
  word_ABFF08 = 0; /*0x5da672*/
  word_ABFF0A = 0; /*0x5da678*/
  return 0; /*0x5da67e*/
}



// ==== 0x005DA680  sub_5DA680  this=-  sig=ida-proto ====
int sub_5DA680()
{
  dword_ABFF28 = 0; /*0x5da682*/
  dword_ABFF2C = 0; /*0x5da687*/
  dword_ABFF30 = 0; /*0x5da68c*/
  return 0; /*0x5da691*/
}



// ==== 0x005DA6A0  sub_5DA6A0  this=-  sig=ida-proto ====
int sub_5DA6A0()
{
  dword_ABFF58 = 0; /*0x5da6a5*/
  dword_ABFF50 = 128; /*0x5da6af*/
  dword_ABFF54 = 128; /*0x5da6b4*/
  return 128; /*0x5da6b9*/
}



// ==== 0x005DA6C0  Network_Init_5DA6C0  this=-  sig=ida-proto ====
char sub_5DA6C0()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !Network_Init((int)unk_A8E9C0) ) /*0x5da6c8*/
    return 0; /*0x5da6d1*/
  if ( dword_A8B238[0] != 4 ) /*0x5da6de*/
  {
    if ( dword_A8D5FC ) /*0x5da6e7*/
    {
      Network::CopyAddress(&stru_A8D600, &v1, (int)v2); /*0x5da6f8*/
      Network_Init_542FC0(unk_A8E9C0, (int)&v1); /*0x5da707*/
    }
  }
  return 1; /*0x5da6d3*/
}



// ==== 0x005DA720  Network::ShutdownInterface  this=Network  sig=csp ====
int Network::ShutdownInterface(Network *this)
{
  int result; // eax

  LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x5da72b*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x5da732*/
    result = (***(int (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)(*(_DWORD *)&stru_887598.isAliveFlag, 1); /*0x5da738*/
  *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x5da73a*/
  return result; /*0x5da740*/
}



// ==== 0x005DA750  HandleNetworkPlayerDisconnect  this=AbstractClass  sig=ida-proto ====
void __fastcall Network_HandlePlayerDisconnect(int a1, int a2)
{
  int v2; // ebp
  int v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  LPARAM *v17; // eax
  int v18; // eax
  wchar_t *v19; // [esp-8h] [ebp-134h]
  wchar_t *v20; // [esp-8h] [ebp-134h]
  int v21; // [esp+Ch] [ebp-120h] BYREF
  int v22; // [esp+10h] [ebp-11Ch]
  _BYTE v23[8]; // [esp+14h] [ebp-118h] BYREF
  wchar_t String[80]; // [esp+1Ch] [ebp-110h] BYREF
  char v25[112]; // [esp+BCh] [ebp-70h] BYREF

  v2 = a1; /*0x5da75d*/
  v4 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * a1]; /*0x5da762*/
  v21 = a1; /*0x5da76c*/
  if ( byte_A8ED74 ) /*0x5da770*/
    Debug::Log(); /*0x5da77f*/
  if ( !v4 || !*(_BYTE *)(v4 + 492) ) /*0x5da78f*/
    return; /*0x5da797*/
  String[0] = 0; /*0x5da7a0*/
  if ( a2 == 1 ) /*0x5da7a7*/
  {
    v19 = GetStringCSF(aTxtConnectionL, 0, aDRa2mdpostNetd, 464); /*0x5da7c6*/
    swprintf(String, (const size_t)v19, (const wchar_t *const)(v4 + 90154)); /*0x5da7cc*/
  }
  else if ( !a2 ) /*0x5da7d0*/
  {
    v20 = GetStringCSF(aTxtLeftGame, 0, aDRa2mdpostNetd, 466); /*0x5da7f3*/
    swprintf(String, (const size_t)v20, (const wchar_t *const)(v4 + 90154)); /*0x5da7f5*/
  }
  if ( wcslen(String) ) /*0x5da802*/
  {
    v5 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x5da822*/
    MessageListClass::AddMessage(unk_A8BC60, 0, 0, String, *(_DWORD *)(*(_DWORD *)(v4 + 52) + 192), 16454, v5, 0); /*0x5da845*/
    MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x5da851*/
  }
  ((void (__stdcall *)(int))Network::sendData)(v2); /*0x5da85d*/
  if ( a2 ) /*0x5da864*/
  {
    if ( dword_A8ED84 ) /*0x5da871*/
    {
      v6 = EventClass::Add2(v25, *((_DWORD *)dword_A83D4C + 12), 0x23u, v2); /*0x5da893*/
      if ( dword_A802C8 < 128 ) /*0x5da8a2*/
      {
        qmemcpy(&byte_A802D4[111 * dword_A802D0], v6, 0x6Fu); /*0x5da8c2*/
        dword_A83A54[dword_A802D0] = timeGetTime(); /*0x5da8d3*/
        dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x5da8ea*/
        ++dword_A802C8; /*0x5da8f0*/
      }
    }
    else
    {
      Network::SendOffer(v4); /*0x5da875*/
    }
LABEL_21:
    if ( dword_A8B238[0] == 4 ) /*0x5da940*/
    {
      if ( byte_A8DBA0 ) /*0x5da94d*/
      {
        if ( SessionClass::IsValidHouse((int)dword_A8B238, (#375 *)v4) ) /*0x5da959*/
        {
          byte_A8E2D0 = 1; /*0x5da96b*/
          v7 = EventClass::validateEventType(&unk_B052D0); /*0x5da972*/
          v8 = v7; /*0x5da977*/
          if ( v7 != -1 ) /*0x5da97c*/
          {
            v9 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v7]; /*0x5da987*/
            v22 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v8]; /*0x5da98c*/
            if ( v9 ) /*0x5da990*/
            {
              if ( dword_A8DA84 > 2 ) /*0x5da99f*/
              {
                v10 = 0; /*0x5da9a5*/
                v11 = 0; /*0x5da9a7*/
                if ( dword_A8DA84 > 0 ) /*0x5da9ab*/
                {
                  v12 = dword_A8DA78; /*0x5da9b3*/
                  while ( *(_DWORD *)(*(_DWORD *)v12 + 111) != v8 ) /*0x5da9ba*/
                  {
                    ++v11; /*0x5da9bc*/
                    v12 += 4; /*0x5da9bd*/
                    if ( v11 >= dword_A8DA84 ) /*0x5da9c2*/
                      goto LABEL_33; /*0x5da9c2*/
                  }
                  v10 = (_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * v11) + 40); /*0x5da9d1*/
                  LOWORD(dword_A8DBBC) = *((_WORD *)&dword_A8E2B2 + v11); /*0x5da9d4*/
LABEL_33:
                  v2 = v21; /*0x5da9db*/
                }
                Network::CopyAddress(v10, &v21, (int)v23); /*0x5da9e9*/
                NetworkID::Assign(&qword_A8DBA4, &v21, (int)v23, 0); /*0x5da9ff*/
                Network::FormatAddress((unsigned __int16 *)&qword_A8DBA4, 0); /*0x5daa0b*/
                Debug::Log(); /*0x5daa16*/
                Debug::Log(); /*0x5daa2d*/
                ((void (__stdcall *)(int *))Network::SetPlayerCoords)(&qword_A8DBA4); /*0x5daa3f*/
                v9 = v22; /*0x5daa44*/
              }
              wcscpy(word_A8E258, (const wchar_t *)(v9 + 90154)); /*0x5daa53*/
              Debug::Log(); /*0x5daa62*/
              dword_A8E2AC = v8; /*0x5daa6f*/
              if ( SessionClass::IsValidHouse((int)dword_A8B238, 0) ) /*0x5daa77*/
                Network::SendMasterPlayerList((int)&unk_B052D0); /*0x5daa85*/
            }
          }
        }
      }
    }
    goto LABEL_37; /*0x5daa85*/
  }
  if ( dword_A8B238[0] == 4 ) /*0x5da8fe*/
  {
    if ( !*(_DWORD *)dword_B779C4 || (Network::SendOffer(v4), dword_A8B238[0] == 4) ) /*0x5da91b*/
    {
      if ( byte_A8DBA0 ) /*0x5da928*/
      {
        ((void (__stdcall *)(int))NetworkManager::RemovePlayer)(v2); /*0x5da934*/
        goto LABEL_21; /*0x5da934*/
      }
    }
  }
LABEL_37:
  v13 = 0; /*0x5daa8a*/
  if ( dword_A8DA84 > 0 ) /*0x5daa94*/
  {
    v14 = dword_A8DA78; /*0x5daa9a*/
    v15 = dword_A8DA78; /*0x5daaa0*/
    while ( *(_DWORD *)(*(_DWORD *)v15 + 111) != v2 ) /*0x5daaa7*/
    {
      ++v13; /*0x5daaa9*/
      v15 += 4; /*0x5daaaa*/
      if ( v13 >= dword_A8DA84 ) /*0x5daaaf*/
        goto LABEL_54; /*0x5daaaf*/
    }
    v16 = 0; /*0x5daab9*/
    v17 = &dword_A8DA90; /*0x5daabb*/
    while ( *v17 != *(_DWORD *)(dword_A8DA78 + 4 * v13) ) /*0x5daac2*/
    {
      ++v17; /*0x5daac4*/
      ++v16; /*0x5daac7*/
      if ( (int)v17 >= (int)&dword_A8DAB0 ) /*0x5daacd*/
        goto LABEL_47; /*0x5daacd*/
    }
    *(&dword_A8DA90 + v16) = g_HouseClass_ObserverFlags; /*0x5daad6*/
    v14 = dword_A8DA78; /*0x5daadd*/
LABEL_47:
    __3_YAXPAX_Z(*(void **)(v14 + 4 * v13)); /*0x5daae3*/
    v18 = (*(int (__thiscall **)(int *, int))(stru_A8DA74 + 16))(&stru_A8DA74, dword_A8DA78 + 4 * v13); /*0x5dab03*/
    if ( v18 != -1 && v18 < dword_A8DA84 && v18 < --dword_A8DA84 ) /*0x5dab1e*/
    {
      do /*0x5dab36*/
      {
        ++v18; /*0x5dab26*/
        *(_DWORD *)(dword_A8DA78 + 4 * v18 - 4) = *(_DWORD *)(dword_A8DA78 + 4 * v18); /*0x5dab2a*/
      }
      while ( v18 < dword_A8DA84 ); /*0x5dab36*/
    }
    ((void (__stdcall *)(int))Network_Disconnect_69BBF0)(v13); /*0x5dab3e*/
    if ( dword_A8B238[0] == 4 ) /*0x5dab4a*/
    {
      if ( byte_A8DBA0 ) /*0x5dab53*/
        ((void (__stdcall *)(int))NetworkManager::RemovePlayer)(v2); /*0x5dab5b*/
    }
  }
LABEL_54:
  --dword_A8B54C; /*0x5dab60*/
}



// ==== 0x005DAB80  ObjectClass::method_5DAB80  this=ObjectClass  sig=csp ====
int __thiscall sub_5DAB80(ObjectClass *this)
{
  unsigned int i; // esi
  int v3; // [esp+8h] [ebp-54h] BYREF
  char String[80]; // [esp+Ch] [ebp-50h] BYREF

  v3 = 0; /*0x5dab96*/
  strcpy(String, (const char *)this); /*0x5daba7*/
  _strupr(String); /*0x5dabb5*/
  for ( i = 0; i < strlen(String); ++i ) /*0x5dabc8*/
    ComputeHash(&v3, String[i]); /*0x5dabd8*/
  return v3; /*0x5dabf4*/
}



// ==== 0x005DAC00  WideString::Hash  this=Player  sig=csp ====
int __thiscall WideString::Hash(WideString *this)
{
  unsigned int v1; // esi
  wchar_t *v2; // edi
  int v4; // [esp+4h] [ebp-A4h] BYREF
  wchar_t String[80]; // [esp+8h] [ebp-A0h] BYREF

  v1 = 0; /*0x5dac0b*/
  v4 = 0; /*0x5dac0f*/
  wcscpy(String, (const wchar_t *)this); /*0x5dac13*/
  _wcsupr(String); /*0x5dac1d*/
  if ( !wcslen(String) ) /*0x5dac27*/
    return v4; /*0x5dac68*/
  v2 = String; /*0x5dac34*/
  do /*0x5dac59*/
  {
    ComputeHash(&v4, *v2); /*0x5dac41*/
    ++v1; /*0x5dac4a*/
    ++v2; /*0x5dac4c*/
  }
  while ( v1 < wcslen(String) ); /*0x5dac59*/
  return v4; /*0x5dac60*/
}



// ==== 0x005DACD0  sub_5DACD0  this=-  sig=ida-proto ====
int sub_5DACD0()
{
  dword_AC01A8 = 0; /*0x5dacd2*/
  dword_AC01AC = 0; /*0x5dacd7*/
  dword_AC01B0 = 0; /*0x5dacdc*/
  dword_AC01B4 = 0; /*0x5dace1*/
  return 0; /*0x5dace6*/
}



// ==== 0x005DACF0  sub_5DACF0  this=-  sig=ida-proto ====
void sub_5DACF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5dacfc*/
  dbl_AC01C0 = Math::Sqrt(v0 + v0); /*0x5dad0e*/
}



// ==== 0x005DAD20  sub_5DAD20  this=-  sig=ida-proto ====
void sub_5DAD20()
{
  dbl_AC0250 = dbl_AC01C0 / 60.0; /*0x5dad2c*/
}



// ==== 0x005DAD40  sub_5DAD40  this=-  sig=ida-proto ====
void sub_5DAD40()
{
  dbl_AC0218 = 1.0 / dbl_AC0250; /*0x5dad4c*/
}



// ==== 0x005DAD60  sub_5DAD60  this=-  sig=ida-proto ====
void sub_5DAD60()
{
  dbl_AC0210 = 0.0174532925199433 * 45.0; /*0x5dad6c*/
}



// ==== 0x005DAD80  sub_5DAD80  this=-  sig=ida-proto ====
void sub_5DAD80()
{
  dbl_AC01C8 = 0.0174532925199433 * 60.0; /*0x5dad8c*/
}



// ==== 0x005DADA0  sub_5DADA0  this=-  sig=ida-proto ====
void sub_5DADA0()
{
  dbl_AC0198 = 0.0174532925199433 * 90.0; /*0x5dadac*/
}



// ==== 0x005DADC0  sub_5DADC0  this=-  sig=ida-proto ====
__int64 sub_5DADC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC0198 - dbl_AC01C8); /*0x5dadd2*/
  result = Math::RoundToInt(v0 * dbl_AC01C0 * 0.5); /*0x5dade6*/
  dword_AC0258 = result; /*0x5dadeb*/
  return result; /*0x5dadf0*/
}



// ==== 0x005DAE00  sub_5DAE00  this=-  sig=ida-proto ====
void sub_5DAE00()
{
  dbl_AC01D8 = Math::ArcTan((double)dword_AC0258 * 0.00390625); /*0x5dae17*/
}



// ==== 0x005DAE30  sub_5DAE30  this=-  sig=ida-proto ====
void sub_5DAE30()
{
  dbl_AC01F8 = Math::ArcTan((double)(2 * dword_AC0258) / dbl_AC01C0); /*0x5dae52*/
}



// ==== 0x005DAE60  sub_5DAE60  this=-  sig=ida-proto ====
__int64 sub_5DAE60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC0258) + 0.5); /*0x5dae7b*/
  dword_AC024C = result; /*0x5dae80*/
  return result; /*0x5dae86*/
}



// ==== 0x005DAE90  sub_5DAE90  this=-  sig=ida-proto ====
int sub_5DAE90()
{
  word_AC01B8 = 0; /*0x5dae92*/
  word_AC01BA = 0; /*0x5dae98*/
  return 0; /*0x5dae9e*/
}



// ==== 0x005DAEA0  sub_5DAEA0  this=-  sig=ida-proto ====
int sub_5DAEA0()
{
  dword_AC01E8 = 0; /*0x5daea2*/
  dword_AC01EC = 0; /*0x5daea7*/
  dword_AC01F0 = 0; /*0x5daeac*/
  return 0; /*0x5daeb1*/
}



// ==== 0x005DAEC0  sub_5DAEC0  this=-  sig=ida-proto ====
int sub_5DAEC0()
{
  dword_AC0248 = 0; /*0x5daec5*/
  dword_AC0240 = 128; /*0x5daecf*/
  dword_AC0244 = 128; /*0x5daed4*/
  return 128; /*0x5daed9*/
}



// ==== 0x005DAEE0  sub_5DAEE0  this=-  sig=ida-proto ====
int sub_5DAEE0()
{
  dword_AC0230 = Timer::GetTicks(); /*0x5daeef*/
  dword_AC0238 = 0; /*0x5daef4*/
  return atexit(nullsub_194); /*0x5daf04*/
}



// ==== 0x005DAF10  nullsub_194  this=-  sig=ida-proto ====
void __cdecl nullsub_194()
{
  ; /*0x5daf10*/
}



// ==== 0x005DAF20    this=-  sig=? ====
char sub_5E66F0()
{
  LRESULT v0; // eax
  LRESULT v1; // eax
  int v2; // esi
  _DWORD *v3; // edx
  void *v4; // ebx
  void *v5; // eax
  void *v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  const wchar_t *v9; // eax

  v0 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA(hDlg, 1363, 0x199u, v0, 0); /*0x5e672c*/
    v2 = 0; /*0x5e6734*/
    if ( g_MultiplayerOptions > 0 ) /*0x5e6738*/
    {
      v3 = (_DWORD *)g_MultiplayerGameState; /*0x5e673e*/
      while ( v1 != *v3 ) /*0x5e6746*/
      {
        ++v2; /*0x5e6748*/
        ++v3; /*0x5e6749*/
        if ( v2 >= g_MultiplayerOptions ) /*0x5e674e*/
          goto LABEL_20; /*0x5e674e*/
      }
      if ( v2 != -1 && v2 != dword_AC0D30 ) /*0x5e6764*/
      {
        LoadScenarioClassByIndex(v2); /*0x5e676c*/
        if ( IsRandMap::Sed(*(_DWORD *)(g_MultiplayerGameState + 4 * v2)) ) /*0x5e677a*/
        {
          v4 = g_UIControlState; /*0x5e6783*/
          if ( g_UIControlState ) /*0x5e678b*/
          {
            ComPtr::Dtor(g_UIControlState); /*0x5e678f*/
            __3_YAXPAX_Z(v4); /*0x5e6795*/
          }
          v5 = __2_YAPAXI_Z(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = (void *)unknown_libname_27(v5); /*0x5e67ad*/
          else
            v6 = 0; /*0x5e67b4*/
          g_UIControlState = v6; /*0x5e67bd*/
          Surface::LoadToSurfaceSHP((char **)v6, ExistingFileName); /*0x5e67c2*/
          if ( !*(_DWORD *)g_UIControlState ) /*0x5e67cc*/
            Session::PrepareGame(hDlg); /*0x5e67d7*/
          InvalidateRect(hDlg, 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame(hDlg); /*0x5e67fa*/
        }
        dword_AC0D30 = v2; /*0x5e6805*/
        g_GameRulesOptions = dword_AC10E0; /*0x5e680b*/
        LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6811*/
      }
    }
  }
LABEL_20:
  v7 = hDlg; /*0x5e6816*/
  v8 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v9 = (const wchar_t *)SendDlgItemMessageA(v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    word_AC0EC8 = 0; /*0x5e6857*/
  else
    wcscpy(&word_AC0EC8, v9); /*0x5e684d*/
  if ( g_GameMode_Current[0] == 3 ) /*0x5e686b*/
  {
    Event::Dispatch(); /*0x5daf20*/
    NetworkLobby::MessageHandler(); /*0x5daf25*/
    return 0; /*0x5daf2a*/
  }
  else if ( g_GameMode_Current[0] == 4 ) /*0x5e6875*/
  {
    return Game::ProcessIdle(); /*0x5e6877*/
  }
  else
  {
    if ( g_GameMode_Current[0] == 1 || g_GameMode_Current[0] == 2 ) /*0x5e6884*/
    {
      if ( dword_ABF10C ) /*0x5bb268*/
      {
        CellClass::SetOccupancy(dword_ABF10C, 0); /*0x5bb26c*/
        ModemGuest::ProcessPacket(dword_ABF10C, 1); /*0x5bb279*/
      }
    }
    Event::Dispatch(); /*0x5e6886*/
    return 0; /*0x5e688b*/
  }
}



// ==== 0x005DAF30  ObjectClass::PlayerSkirmishSlotHandler_Handle  this=ObjectClass  sig=csp ====
void PlayerSkirmishSlotHandler_Handle(ObjectClass *this)
{
  int v1; // edi
  int i; // esi
  int v3[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v4; // [esp+1CCh] [ebp-4h]
  char v5; // [esp+1CEh] [ebp-2h]

  memset(v3, 0, sizeof(v3)); /*0x5daf47*/
  v4 = 0; /*0x5daf49*/
  v5 = 0; /*0x5daf4b*/
  v3[0] = 22; /*0x5daf56*/
  strcpy((char *)&v3[1], unk_A8B380); /*0x5daf6d*/
  Player::BuildListString((Player *)&v3[11] + 3); /*0x5daf7a*/
  v1 = dword_A8DA84; /*0x5daf7f*/
  for ( i = 1; i < v1; ++i ) /*0x5daf8c*/
  {
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v3, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5dafb0*/
    Event::Dispatch(); /*0x5dafb5*/
  }
}



// ==== 0x005DAFD0  RetVtableStubZero_eax_27  this=-  sig=ida-proto ====
void RetVtableStubZero_eax_27()
{
  GameSetup::DisplayPlayers(); /*0x5dafd2*/
}



// ==== 0x005DAFE0  GameSetup::DisplayPlayers  this=GameSetup  sig=csp ====
void GameSetup::DisplayPlayers(GameSetup *this)
{
  char v1; // cl
  char v2; // bl
  Dialog *Current; // esi
  int CurrentType; // eax
  int v5; // eax
  HWND v6; // ebp
  HWND DlgItem; // eax
  HWND v8; // esi
  unsigned int v9; // eax
  int v10; // ecx
  char *v11; // eax
  signed int i; // edi
  int v13; // edi
  void *PlayerSide; // esi
  wchar_t *StringCSF; // eax
  int v16; // edx
  int v17; // esi
  unsigned int v18; // ebx
  unsigned int j; // eax
  DeleteAndZero *v20; // esi
  DeleteAndZero *v21; // edi
  unsigned int v22; // ecx
  GameSetup **v23; // ebx
  int v24; // esi
  GameSetup **v25; // edi
  int v26; // ebp
  GameSetup *v27; // esi
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  GameSetup *GameSetup_field_0x08; // eax
  int v32; // [esp+10h] [ebp-264h]
  HWND hWnd; // [esp+14h] [ebp-260h]
  LPARAM v34; // [esp+18h] [ebp-25Ch] BYREF
  DeleteAndZero v35; // [esp+1Ch] [ebp-258h] BYREF
  int v36; // [esp+28h] [ebp-24Ch]
  void *Block; // [esp+30h] [ebp-244h] BYREF
  int v38; // [esp+34h] [ebp-240h]
  unsigned int v39; // [esp+38h] [ebp-23Ch]
  int v40; // [esp+3Ch] [ebp-238h]
  int v41; // [esp+40h] [ebp-234h]
  int v42; // [esp+44h] [ebp-230h]
  const wchar_t *(__thiscall *v43)(GameSetup *); // [esp+48h] [ebp-22Ch]
  int v44; // [esp+50h] [ebp-224h]
  int v45; // [esp+54h] [ebp-220h]
  int v46; // [esp+58h] [ebp-21Ch]
  int v47; // [esp+5Ch] [ebp-218h]
  unsigned int v48; // [esp+60h] [ebp-214h]
  WPARAM wParam; // [esp+68h] [ebp-20Ch]
  int Default; // [esp+6Ch] [ebp-208h]
  HWND v51; // [esp+70h] [ebp-204h]
  wchar_t Buffer[128]; // [esp+74h] [ebp-200h] BYREF
  wchar_t lParam[128]; // [esp+174h] [ebp-100h] BYREF

  v2 = v1; /*0x5dafea*/
  Current = (Dialog *)Dialog::GetCurrent(); /*0x5daff1*/
  CurrentType = Dialog::GetCurrentType(); /*0x5daff3*/
  if ( CurrentType == 188 || CurrentType == 189 ) /*0x5db008*/
  {
LABEL_15:
    RefreshLobbyAll((HWND)Current, v2); /*0x5db1a2*/
    return; /*0x5db1b5*/
  }
  for ( Current = (Dialog *)Dialog::FindByPtr(Current); Current; Current = (Dialog *)Dialog::FindByPtr(Current) ) /*0x5db019*/
  {
    v5 = GameSetup::LookupDialogHash((GameSetup *)Current); /*0x5db01d*/
    if ( v5 == 188 || v5 == 189 ) /*0x5db032*/
      goto LABEL_15; /*0x5db032*/
  }
  v6 = (HWND)Dialog::GetCurrent(); /*0x5db045*/
  DlgItem = GetDlgItem(v6, 1342); /*0x5db058*/
  v8 = DlgItem; /*0x5db05a*/
  v51 = DlgItem; /*0x5db05e*/
  if ( v6 && DlgItem ) /*0x5db06a*/
  {
    hWnd = GetDlgItem(v6, 1342); /*0x5db07c*/
    Gadget::InitProperties((Gadget *)&v34); /*0x5db080*/
    wParam = SendDlgItemMessageA(v6, 1342, 0x18Eu, 0, 0); /*0x5db0ab*/
    SendDlgItemMessageA(v6, 1342, 0x49Du, 0, 1); /*0x5db0af*/
    v9 = 128; /*0x5db0b1*/
    v44 = -1717986918; /*0x5db0b6*/
    v45 = 1070176665; /*0x5db0be*/
    v46 = -1717986918; /*0x5db0c6*/
    v47 = 1072273817; /*0x5db0ce*/
    v48 = 128; /*0x5db0d6*/
    v10 = 0; /*0x5db0da*/
    do /*0x5db0df*/
    {
      ++v10; /*0x5db0dc*/
      v9 >>= 1; /*0x5db0dd*/
    }
    while ( v9 ); /*0x5db0df*/
    v41 = 0; /*0x5db0e1*/
    v40 = v10 - 1; /*0x5db0eb*/
    v38 = 0; /*0x5db0f1*/
    LOBYTE(v42) = 0; /*0x5db0f9*/
    v39 = 1 << (v10 - 1); /*0x5db0fe*/
    Block = (void *)__2_YAPAXI_Z(4 * v39); /*0x5db113*/
    memset(Block, 0, 4 * v39); /*0x5db117*/
    v43 = GameSetup::CompareWideString; /*0x5db122*/
    RehashGenericHashMap(v8, (int)&Block); /*0x5db12a*/
    SendDlgItemMessageA(v6, 1342, 0x184u, 0, 0); /*0x5db13e*/
    if ( g_NetworkSetupConfig ) /*0x5db147*/
    {
      v13 = 0; /*0x5db1bb*/
      if ( dword_A8DA84 > 0 ) /*0x5db1bf*/
      {
        do /*0x5db45d*/
        {
          if ( Render_Setup(v13) ) /*0x5db1cf*/
          {
            v32 = 2; /*0x5db1de*/
            *(_DWORD *)(dword_A8DA78[v13] + 119) = 1; /*0x5db1e9*/
          }
          else
          {
            v32 = *(_DWORD *)(dword_A8DA78[v13] + 119) != 0; /*0x5db202*/
          }
          swprintf(lParam, (const size_t)&off_8240B4, (const wchar_t *const)dword_A8DA78[v13]); /*0x5db220*/
          PlayerSide = (void *)SessionClass::GetPlayerSide((int *)dword_A8DA78[v13]); /*0x5db235*/
          Default = BuildingType::FindDefault(PlayerSide); /*0x5db241*/
          switch ( (unsigned int)PlayerSide ) /*0x5db24b*/
          {
            case 0u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 398); /*0x5db263*/
              goto LABEL_32; /*0x5db263*/
            case 1u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 401); /*0x5db276*/
              goto LABEL_32; /*0x5db276*/
            case 2u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 404); /*0x5db289*/
              goto LABEL_32; /*0x5db289*/
            case 3u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 407); /*0x5db29f*/
              goto LABEL_32; /*0x5db29f*/
            case 4u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 410); /*0x5db2b2*/
              goto LABEL_32; /*0x5db2b2*/
            case 5u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 413); /*0x5db2b9*/
              goto LABEL_32; /*0x5db2b9*/
            case 6u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 416); /*0x5db2cc*/
              goto LABEL_32; /*0x5db2cc*/
            case 7u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 419); /*0x5db2ef*/
              goto LABEL_32; /*0x5db2ef*/
            case 8u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 422); /*0x5db312*/
LABEL_32:
              swprintf(Buffer, (const size_t)&off_8240B4, StringCSF); /*0x5db317*/
              break; /*0x5db322*/
            default:
              break;
          }
          SendMessageA(hWnd, 0x4CCu, 0xFFFFFFFF, (LPARAM)lParam); /*0x5db32a*/
          v16 = *(_DWORD *)(dword_A8DA78[v13] + 83); /*0x5db351*/
          v34 = 4; /*0x5db358*/
          v35.DeleteAndZero_field_0x08 = dword_8316A8[v16]; /*0x5db367*/
          WideString::Reassign((void **)&v35.DeleteAndZero_field_0x04, &g_TypeClass_DefaultString); /*0x5db36b*/
          v17 = (unsigned __int16)v13 << 16; /*0x5db384*/
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (unsigned __int16)dword_AC01A0, (LPARAM)&v34); /*0x5db39a*/
          v34 = 2; /*0x5db3a5*/
          WideString::Reassign((void **)&v35.DeleteAndZero_field_0x04, Buffer); /*0x5db3ad*/
          v36 = Default; /*0x5db3d5*/
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (unsigned __int16)dword_AC01D0, (LPARAM)&v34); /*0x5db3d9*/
          WideString::Reassign((void **)&v35.DeleteAndZero_field_0x04, &g_TypeClass_DefaultString); /*0x5db3e4*/
          v34 = 2; /*0x5db3e9*/
          if ( v32 == 2 ) /*0x5db3f8*/
          {
            v36 = HashTable::Find(&g_DialogHashTable, (const char *)&stru_81AF8C.MaxXYVel[1], 0); /*0x5db40b*/
          }
          else if ( v32 ) /*0x5db413*/
          {
            v36 = HashTable::Find(&g_DialogHashTable, (const char *)stru_81AF8C.AnimTypeClass_field_double_320, 0); /*0x5db426*/
          }
          else
          {
            v34 = 0; /*0x5db42c*/
          }
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (unsigned __int16)dword_AC01E0, (LPARAM)&v34); /*0x5db453*/
          ++v13; /*0x5db45a*/
        }
        while ( v13 < dword_A8DA84 ); /*0x5db45d*/
        v8 = v51; /*0x5db463*/
      }
      if ( dword_A8B23C ) /*0x5db46f*/
        (*((void (__thiscall **)(ObjectClass *, HWND))dword_A8B23C->AbstractClass + 30))(dword_A8B23C, v6); /*0x5db474*/
    }
    else
    {
      v11 = CharToWideString(unk_A8B380); /*0x5db14e*/
      SendMessageA(hWnd, 0x4CCu, 0, (LPARAM)v11); /*0x5db160*/
      for ( i = 1; i < dword_A8DA54; ++i ) /*0x5db172*/
        SendMessageA(hWnd, 0x4CCu, i, *(_DWORD *)(dword_A8DA48 + 4 * i)); /*0x5db18d*/
    }
    ProcessComboBoxAddString(v8, (int)&Block); /*0x5db47d*/
    SendDlgItemMessageA(v6, 1342, 0x197u, wParam, 0); /*0x5db494*/
    SendDlgItemMessageA(v6, 1342, 0x49Du, 0, 0); /*0x5db4a5*/
    InvalidateRect(v8, 0, 0); /*0x5db4ac*/
    UpdateWindow(v8); /*0x5db4b3*/
    v18 = 0; /*0x5db4b9*/
    for ( j = v39; v18 < v39; j = v39 ) /*0x5db4c1*/
    {
      v20 = (DeleteAndZero *)*((_DWORD *)Block + v18); /*0x5db4c7*/
      while ( v20 ) /*0x5db4cc*/
      {
        v21 = v20; /*0x5db4ce*/
        v20 = (DeleteAndZero *)v20->DeleteAndZero_field_0x08; /*0x5db4d0*/
        DeleteAndZero::Alt(v21); /*0x5db4d9*/
        __3_YAXPAX_Z(v21); /*0x5db4df*/
      }
      *((_DWORD *)Block + v18++) = 0; /*0x5db4f0*/
    }
    v22 = v48; /*0x5db500*/
    v38 = 0; /*0x5db504*/
    if ( j > v48 ) /*0x5db50e*/
    {
      do /*0x5db5a8*/
      {
        if ( (_BYTE)v42 || j <= v22 ) /*0x5db522*/
          break; /*0x5db522*/
        v23 = (GameSetup **)Block; /*0x5db52c*/
        v24 = j; /*0x5db530*/
        v39 = j >> 1; /*0x5db534*/
        --v40; /*0x5db53d*/
        Block = (void *)__2_YAPAXI_Z(4 * (j >> 1)); /*0x5db551*/
        memset(Block, 0, 4 * v39); /*0x5db557*/
        if ( v24 > 0 ) /*0x5db559*/
        {
          v25 = v23; /*0x5db55b*/
          v26 = v24; /*0x5db55d*/
          do /*0x5db593*/
          {
            v27 = *v25; /*0x5db55f*/
            if ( *v25 ) /*0x5db55f*/
            {
              do /*0x5db58d*/
              {
                v28 = (int)v43(v27); /*0x5db567*/
                v29 = v28 & ((1 << v40) - 1); /*0x5db577*/
                v30 = *((_DWORD *)Block + v29); /*0x5db57d*/
                *((_DWORD *)Block + v29) = v27; /*0x5db580*/
                GameSetup_field_0x08 = (GameSetup *)v27->GameSetup_field_0x08; /*0x5db583*/
                v27->GameSetup_field_0x08 = v30; /*0x5db586*/
                v27 = GameSetup_field_0x08; /*0x5db58b*/
              }
              while ( GameSetup_field_0x08 ); /*0x5db58d*/
            }
            ++v25; /*0x5db58f*/
            --v26; /*0x5db592*/
          }
          while ( v26 ); /*0x5db593*/
        }
        __3_YAXPAX_Z(v23); /*0x5db596*/
        v22 = v48; /*0x5db59b*/
        j = v39; /*0x5db59f*/
      }
      while ( v39 > v48 ); /*0x5db5a8*/
    }
    __3_YAXPAX_Z(Block); /*0x5db5b3*/
    DeleteAndZero::Alt((DeleteAndZero *)&v35.DeleteAndZero_field_0x04); /*0x5db5bf*/
    DeleteAndZero::Alt(&v35); /*0x5db5c8*/
  }
}



// ==== 0x005DB600  ObjectClass::PlayerSkirmishSlotHandler_Handle_5DB600  this=ObjectClass  sig=csp ====
int __thiscall PlayerSkirmishSlotHandler_Handle_5DB600(ObjectClass *this)
{
  memset(&stru_A8D600.__pad_34[4], 0, 0x1C4u); /*0x5db611*/
  MEMORY[0xA8D7FC] = 0; /*0x5db618*/
  MEMORY[0xA8D7FE] = 0; /*0x5db627*/
  *(_DWORD *)&stru_A8D600.__pad_34[4] = 8; /*0x5db62d*/
  *(_DWORD *)&stru_A8D600.__pad_64[3] = 4; /*0x5db637*/
  return Network::SendMessage( /*0x5db646*/
           &unk_A8E9C0.Socket,
           (int)&stru_A8D600.__pad_34[4],
           455,
           1,
           (int)&this->owningHouseIndex,
           0,
           0);
}



// ==== 0x005DB650  Map_Handle  this=-  sig=csp ====
char __fastcall sub_5DB650(int a1, char a2, char a3)
{
  HWND v5; // eax

  v5 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5db65b*/
  return Map_Handle_5EC880(v5, a1, a2, a3); /*0x5db66f*/
}



// ==== 0x005DB680  InitNetworkGameState  this=-  sig=ida-proto ====
char InitNetworkGameState()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !Network_Init(unk_A8E9C0) ) /*0x5db688*/
    return 0; /*0x5db691*/
  if ( dword_A8B238[0] != 4 ) /*0x5db69e*/
  {
    if ( dword_A8D5FC ) /*0x5db6a7*/
    {
      Network::CopyAddress(&stru_A8D600, &v1, (int)v2); /*0x5db6b8*/
      Network_Init_542FC0(&v1); /*0x5db6c7*/
    }
  }
  LoadNetworkShareStrings(); /*0x5db6cc*/
  Game::ResetFlags(); /*0x5db6d1*/
  Network::InitPlayerSlots(); /*0x5db6d6*/
  return 1; /*0x5db693*/
}



// ==== 0x005DB6F0  ObjectClass::WinMainSetup_Setup_5DB6F0  this=ObjectClass  sig=csp ====
int WinMainSetup_Setup_5DB6F0(ObjectClass *this)
{
  int result; // eax

  result = WinMainSetup_Setup_5DB6F0_Setup(); /*0x5db6f1*/
  LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x5db700*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x5db707*/
    result = (***(int (__thiscall ****)(_DWORD, int))&stru_887598.isAliveFlag)(*(_DWORD *)&stru_887598.isAliveFlag, 1); /*0x5db70d*/
  *(_DWORD *)&stru_887598.isAliveFlag = 0; /*0x5db70f*/
  return result; /*0x5db715*/
}



// ==== 0x005DB720  ObjectClass::CheckNetworkGameTimeout  this=ObjectClass  sig=csp ====
int CheckNetworkGameTimeout(ObjectClass *this)
{
  int result; // eax
  int v2; // ebp
  signed int i; // edi
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // esi
  int Ticks; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  int v13; // eax
  GameSetup *v14; // [esp+0h] [ebp-1D8h]
  int v15[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v16; // [esp+1D4h] [ebp-4h]
  char v17; // [esp+1D6h] [ebp-2h]

  result = dword_A8DA6C; /*0x5db720*/
  v2 = 1; /*0x5db72c*/
  for ( i = 1; i < dword_A8DA6C; ++i ) /*0x5db737*/
  {
    if ( wcscmp(*(const wchar_t **)(dword_A8DA60 + 4 * i), (const wchar_t *)&stru_A8D600.Network_field_0x10) ) /*0x5db74b*/
    {
      v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5db760*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5db769*/
        v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db77b*/
      if ( (unsigned int)(v4 - *(_DWORD *)(*(_DWORD *)(dword_A8DA60 + 4 * i) + 53)) > 0x12C ) /*0x5db78f*/
      {
        Debug::Log(); /*0x5db797*/
        __3_YAXPAX_Z(*(void **)(dword_A8DA60 + 4 * i)); /*0x5db7a5*/
        v5 = (*(int (__thiscall **)(void *, int))(stru_A8DA5C + 16))(&stru_A8DA5C, dword_A8DA60 + 4 * i); /*0x5db7c1*/
        if ( v5 != -1 ) /*0x5db7c7*/
          Network_Check((ObjectClass *)&stru_A8DA5C, v5); /*0x5db7cf*/
        NetworkLobby::UpdatePlayerList(); /*0x5db7d4*/
        if ( i <= (int)g_NetworkSetupConfig ) /*0x5db7df*/
        {
          GameSetup::DisplayPlayers(v14); /*0x5db7e3*/
          SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db7f0*/
        }
      }
    }
    result = dword_A8DA6C; /*0x5db7f5*/
  }
  if ( dword_A8DA54 > 1 ) /*0x5db809*/
  {
    do /*0x5db99b*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(dword_A8DA48 + 4 * v2) + 52) ) /*0x5db818*/
      {
        v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5db824*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5db82d*/
          v6 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db83f*/
        *(_DWORD *)(*(_DWORD *)(dword_A8DA48 + 4 * v2) + 52) = v6; /*0x5db849*/
      }
      v7 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db84c*/
      v8 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5db852*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5db85b*/
      {
        Ticks = Timer::GetTicks(); /*0x5db862*/
        v7 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db867*/
        v8 += Ticks - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db86f*/
      }
      if ( (unsigned int)(v8 - *(_DWORD *)(*(_DWORD *)(dword_A8DA48 + 4 * v2) + 52)) <= 0x168 ) /*0x5db882*/
      {
        v11 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5db8e5*/
        if ( v7 != -1 ) /*0x5db8ee*/
          v11 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5db900*/
        v12 = dword_A8DA48; /*0x5db902*/
        v13 = *(_DWORD *)(dword_A8DA48 + 4 * v2); /*0x5db908*/
        if ( (unsigned int)(v11 - *(_DWORD *)(v13 + 52)) > 0x12C && !*(_BYTE *)(v13 + 56) ) /*0x5db916*/
        {
          memset(v15, 0, sizeof(v15)); /*0x5db92c*/
          v16 = 0; /*0x5db92e*/
          v17 = 0; /*0x5db930*/
          strcpy((char *)&v15[1], unk_A8B380); /*0x5db954*/
          v15[0] = 5; /*0x5db95d*/
          Network::SendMessage(&unk_A8E9C0.Socket, (int)v15, 455, 0, *(_DWORD *)(v12 + 4 * v2) + 40, 0, 0); /*0x5db97d*/
          Event::Dispatch(); /*0x5db982*/
          *(_BYTE *)(*(_DWORD *)(dword_A8DA48 + 4 * v2) + 56) = 1; /*0x5db98f*/
        }
      }
      else
      {
        __3_YAXPAX_Z(*(void **)(dword_A8DA48 + 4 * v2)); /*0x5db887*/
        v10 = (*(int (__thiscall **)(_DWORD *, int))(dword_A8DA44 + 16))(&dword_A8DA44, dword_A8DA48 + 4 * v2); /*0x5db8a4*/
        if ( v10 != -1 && v10 < dword_A8DA54 && v10 < --dword_A8DA54 ) /*0x5db8bf*/
        {
          do /*0x5db8d7*/
          {
            ++v10; /*0x5db8c7*/
            *(_DWORD *)(dword_A8DA48 + 4 * v10 - 4) = *(_DWORD *)(dword_A8DA48 + 4 * v10); /*0x5db8cb*/
          }
          while ( v10 < dword_A8DA54 ); /*0x5db8d7*/
        }
        GameSetup::DisplayPlayers(v14); /*0x5db8db*/
      }
      result = dword_A8DA54; /*0x5db993*/
      ++v2; /*0x5db998*/
    }
    while ( v2 < dword_A8DA54 ); /*0x5db99b*/
  }
  return result; /*0x5db9a1*/
}



// ==== 0x005DB9B0  NetworkLobby::UpdatePlayerList  this=NetworkLobby  sig=ida-proto ====
int NetworkLobby_UpdatePlayerList()
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // ebp
  wchar_t *String; // eax
  int i; // ebx
  HWND v5; // esi
  wchar_t *v6; // [esp-18h] [ebp-BCh]
  int v7; // [esp-14h] [ebp-B8h]
  LRESULT wParam; // [esp+0h] [ebp-A4h]
  wchar_t lParam[80]; // [esp+4h] [ebp-A0h] BYREF

  result = Dialog::GetCurrentType(); /*0x5db9b6*/
  if ( result == 187 ) /*0x5db9c0*/
  {
    Current = Dialog::GetCurrent(); /*0x5db9cf*/
    DlgItem = GetDlgItem(Current, 1353); /*0x5db9e3*/
    if ( (int)g_NetworkSetupConfig >= dword_A8DA6C ) /*0x5db9ec*/
    {
      g_NetworkSetupConfig = dword_A8DA6C - 1; /*0x5db9fa*/
      SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db9ff*/
    }
    if ( (g_NetworkSetupConfig & 0x80000000) != 0 ) /*0x5dba0b*/
      g_NetworkSetupConfig = 0; /*0x5dba0d*/
    wParam = SendDlgItemMessageA(Current, 1353, 0x18Eu, 0, 0); /*0x5dba3d*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 1); /*0x5dba41*/
    SendMessageA(DlgItem, 0x184u, 0, 0); /*0x5dba53*/
    String = GetStringCSF(aTxtLobby, 0, g_Str_File_netdlg2_cpp, 508); /*0x5dba66*/
    SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String); /*0x5dba74*/
    for ( i = 1; i < dword_A8DA6C; ++i ) /*0x5dba82*/
    {
      v7 = *(_DWORD *)(dword_A8DA60 + 4 * i); /*0x5dba8c*/
      if ( *(_BYTE *)(v7 + 52) ) /*0x5dba8d*/
        v6 = GetStringCSF(aTxtThatguysGam, 0, g_Str_File_netdlg2_cpp, 514); /*0x5dbaae*/
      else
        v6 = GetStringCSF(aTxtThatguysGam_0, 0, g_Str_File_netdlg2_cpp, 516); /*0x5dbacc*/
      swprintf(lParam, (const size_t)v6, (const wchar_t *const)v7); /*0x5dbab0*/
      SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)lParam); /*0x5dbae3*/
    }
    SendDlgItemMessageA(Current, 1353, 0x186u, g_NetworkSetupConfig, 0); /*0x5dbb07*/
    SendDlgItemMessageA(Current, 1353, 0x197u, wParam, 0); /*0x5dbb1b*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 0); /*0x5dbb2c*/
    v5 = GetDlgItem(Current, 1353); /*0x5dbb3a*/
    InvalidateRect(v5, 0, 0); /*0x5dbb41*/
    return UpdateWindow(v5); /*0x5dbb48*/
  }
  return result; /*0x5dbb52*/
}



// ==== 0x005DBB60  Game::BuildGameSettingsPacket  this=AbstractClass  sig=csp ====
void __thiscall BuildGameSettingsPacket(char *Buffer)
{
  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  char *v4; // eax
  int v5; // ebx
  int v6; // esi
  int PlayerSideSessionClass; // edi
  int PlayerColorSessionClass; // ebp
  int *v9; // esi
  int v10; // eax
  char *v11; // [esp-20h] [ebp-48h]
  int v12; // [esp-14h] [ebp-3Ch]
  void *v13; // [esp-14h] [ebp-3Ch]
  int v14; // [esp-10h] [ebp-38h]
  int Option2SessionClass; // [esp-10h] [ebp-38h]
  int v16; // [esp-Ch] [ebp-34h]
  void *v17; // [esp+10h] [ebp-18h] BYREF
  void *v18; // [esp+14h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-10h] BYREF
  int OptionSessionClass; // [esp+1Ch] [ebp-Ch] BYREF
  char *v21; // [esp+20h] [ebp-8h]
  int v22; // [esp+24h] [ebp-4h]

  v1 = Buffer; /*0x5dbb6a*/
  v21 = Buffer; /*0x5dbb70*/
  v22 = 0; /*0x5dbb74*/
  if ( &dword_A8B320 == (int *)-2 ) /*0x5dbb7c*/
  {
    v2 = 4; /*0x5dbba5*/
    v3 = String::Assign((char **)&v19, &g_INI_DefaultBuffer); /*0x5dbbaa*/
  }
  else
  {
    WideString::Assign((wchar_t **)&v17, (wchar_t *)&dword_A8B320 + 1); /*0x5dbb83*/
    v2 = 3; /*0x5dbb90*/
    v3 = (char **)Game_Set(&OptionSessionClass, &v17); /*0x5dbb95*/
  }
  String::AssignFromPtr((char **)&v18, (const char **)v3); /*0x5dbbb4*/
  if ( (v2 & 4) != 0 ) /*0x5dbbbc*/
  {
    v2 &= ~4u; /*0x5dbbc2*/
    DeleteAndZero((void **)&v19); /*0x5dbbc5*/
  }
  if ( (v2 & 2) != 0 ) /*0x5dbbcd*/
  {
    v2 &= ~2u; /*0x5dbbd3*/
    DeleteAndZero((void **)&OptionSessionClass); /*0x5dbbd6*/
  }
  if ( (v2 & 1) != 0 ) /*0x5dbbde*/
    DeleteAndZero::Alt(&v17); /*0x5dbbe4*/
  v16 = dword_A8BB04; /*0x5dbc0a*/
  v14 = (unsigned __int8)dword_A8BB08; /*0x5dbc0b*/
  v12 = dword_A8BB0C; /*0x5dbc0c*/
  v4 = String::GetOrEmpty((char **)&v18); /*0x5dbc11*/
  sprintf( /*0x5dbc7e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    dword_A8ED94,
    *(_DWORD *)dword_A8EB60,
    MEMORY[0xA8B268],
    MEMORY[0xA8B25C],
    MEMORY[0xA8B270],
    (unsigned __int8)MEMORY[0xA8B262],
    (unsigned __int8)MEMORY[0xA8B263],
    (unsigned __int8)MEMORY[0xA8B264],
    (unsigned __int8)dword_A8B320,
    (unsigned __int8)MEMORY[0xA8B261],
    *(_DWORD *)stru_A8B250,
    dword_A8EB68,
    v4,
    v12,
    v14,
    v16,
    &byte_A8B8E0,
    &byte_A8BAE2);
  memset(byte_ABFF94, 0, 0x200u); /*0x5dbc92*/
  v5 = 0; /*0x5dbc99*/
  v19 = dword_A8DA84; /*0x5dbc9d*/
  if ( dword_A8DA84 > 0 ) /*0x5dbca1*/
  {
    do /*0x5dbd16*/
    {
      v6 = *(_DWORD *)(dword_A8DA78 + 4 * v5); /*0x5dbca8*/
      PlayerSideSessionClass = SessionClass::GetPlayerSide(v6); /*0x5dbcb4*/
      PlayerColorSessionClass = SessionClass::GetPlayerColor(v6); /*0x5dbcbd*/
      OptionSessionClass = SessionClass::GetOption(v6); /*0x5dbcc6*/
      Option2SessionClass = SessionClass::GetOption2(v6); /*0x5dbce2*/
      v13 = (void *)OptionSessionClass; /*0x5dbce3*/
      v11 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v5)); /*0x5dbcf3*/
      sprintf( /*0x5dbd07*/
        &byte_ABFF94[strlen(byte_ABFF94)],
        "%s,%d,%d,%d,%d,%x,%x,%x,",
        v11,
        PlayerSideSessionClass,
        PlayerColorSessionClass,
        v13,
        Option2SessionClass,
        0,
        0,
        0);
      ++v5; /*0x5dbd13*/
    }
    while ( v5 < v19 ); /*0x5dbd16*/
    v1 = v21; /*0x5dbd18*/
  }
  byte_ABFF92[strlen(byte_ABFF94) + 1] = 58; /*0x5dbd2f*/
  strcat(byte_ABFF94, asc_831340); /*0x5dbd53*/
  v9 = MEMORY[0xA8B29C]; /*0x5dbd5c*/
  do /*0x5dbda8*/
  {
    v10 = *v9; /*0x5dbd61*/
    if ( *v9 == -3 ) /*0x5dbd66*/
      v10 = -1; /*0x5dbd68*/
    sprintf(&byte_ABFF94[strlen(byte_ABFF94)], "%d,%d,%d,%d,%d,", *(v9 - 8), v10, v9[8], v9[16], v9[24]); /*0x5dbd97*/
    ++v9; /*0x5dbd9c*/
  }
  while ( (int)v9 < (int)MEMORY[0xA8B2BC] ); /*0x5dbda8*/
  strlen(byte_ABFF94); /*0x5dbdaf*/
  Debug::Log(); /*0x5dbdbf*/
  Debug::Log(); /*0x5dbdce*/
  strcat(v1, byte_ABFF94); /*0x5dbdf7*/
  DeleteAndZero(&v18); /*0x5dbe04*/
}



// ==== 0x005DBE20  SetGameSetupPlayerState  this=char*  sig=csp ====
void __fastcall SetGameSetupPlayerState(char *a1, int a2, GameSetup *this)
{
  char *v3; // edi
  int v4; // ebx
  HWND v5; // eax
  char *v6; // eax
  int v7; // esi
  char *v8; // eax
  GameSetup *v9; // [esp+0h] [ebp-Ch]

  v3 = a1; /*0x5dbe23*/
  v4 = a2; /*0x5dbe27*/
  if ( !a1 ) /*0x5dbe29*/
  {
    v3 = unk_A8B380; /*0x5dbe2d*/
    if ( !a2 ) /*0x5dbe32*/
    {
      v5 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5dbe39*/
      EnablePlayerSlotControls(v5, 1u); /*0x5dbe42*/
    }
  }
  v6 = CharToWideString(v3); /*0x5dbe4e*/
  if ( !wcscmp((const wchar_t *)v6, (const wchar_t *)&stru_A8D600.Network_field_0x10) ) /*0x5dbe54*/
    v4 = 1; /*0x5dbe60*/
  v7 = 0; /*0x5dbe6a*/
  if ( dword_A8DA84 > 0 ) /*0x5dbe6e*/
  {
    while ( 1 ) /*0x5dbe79*/
    {
      v8 = ToWideStringChar((char *)dword_A8DA78[v7]); /*0x5dbe79*/
      if ( !_strcmpi(v8, v3) ) /*0x5dbe7f*/
        break; /*0x5dbe7f*/
      if ( ++v7 >= dword_A8DA84 ) /*0x5dbe93*/
      {
        GameSetup::DisplayPlayers(v9); /*0x5dbe97*/
        return; /*0x5dbe9f*/
      }
    }
    if ( v7 != -1 ) /*0x5dbea3*/
      *(_DWORD *)(dword_A8DA78[v7] + 119) = v4; /*0x5dbeae*/
  }
  GameSetup::DisplayPlayers(this); /*0x5dbeb6*/
}



// ==== 0x005DBEC0  ObjectClass::SendMultiplayerStartSignal_Start  this=ObjectClass  sig=csp ====
int __thiscall sub_5DBEC0(char *this)
{
  char *v1; // ebx
  char *v2; // eax
  int v4; // edi
  int v5; // esi
  char *v6; // eax

  v1 = this; /*0x5dbec1*/
  if ( !this ) /*0x5dbec7*/
    v1 = unk_A8B380; /*0x5dbec9*/
  v2 = CharToWideString(v1); /*0x5dbed5*/
  if ( !wcscmp((const wchar_t *)v2, word_A8D610) ) /*0x5dbedb*/
    return 1; /*0x5dbee9*/
  v4 = -1; /*0x5dbef5*/
  v5 = 0; /*0x5dbef8*/
  if ( dword_A8DA84 <= 0 ) /*0x5dbefc*/
    return -1; /*0x5dbefc*/
  do /*0x5dbf23*/
  {
    v6 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v5)); /*0x5dbf07*/
    if ( !_strcmpi(v6, v1) ) /*0x5dbf0d*/
      v4 = v5; /*0x5dbf19*/
    ++v5; /*0x5dbf20*/
  }
  while ( v5 < dword_A8DA84 ); /*0x5dbf23*/
  if ( v4 == -1 ) /*0x5dbf28*/
    return -1; /*0x5dbf3c*/
  else
    return *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * v4) + 119); /*0x5dbf36*/
}



// ==== 0x005DBF50  UpdateMultiplayerPlayerOptions  this=-  sig=csp ====
int __fastcall UpdateMultiplayerPlayerOptions(char *a1, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // edi
  int v7; // ebx
  char **v8; // esi
  char *v9; // eax
  HWND v11; // esi
  int *v12; // ebx
  int ResourceID2CSF; // ebx
  bool v14; // al
  int ResourceID3CSF; // eax
  int ResourceID4CSF; // eax
  int v17; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  HWND v23; // eax
  int v24; // ebx
  GameSetup *v25; // [esp+0h] [ebp-1Ch]
  int v26; // [esp+10h] [ebp-Ch]
  int *v28; // [esp+18h] [ebp-4h]

  v5 = -1; /*0x5dbf57*/
  v7 = 0; /*0x5dbf60*/
  v8 = (char **)dword_A8DA90; /*0x5dbf62*/
  while ( 1 ) /*0x5dbf69*/
  {
    v9 = ToWideStringChar(*v8); /*0x5dbf69*/
    if ( !_strcmpi(v9, a1) ) /*0x5dbf70*/
      break; /*0x5dbf70*/
    ++v8; /*0x5dbf7c*/
    ++v7; /*0x5dbf7f*/
    if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x5dbf86*/
      goto LABEL_6; /*0x5dbf86*/
  }
  v5 = v7; /*0x5dbf8a*/
LABEL_6:
  v26 = 0; /*0x5dbf8c*/
  if ( v5 == -1 ) /*0x5dbf97*/
    return 0; /*0x5dbf9c*/
  v11 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5dbfaf*/
  if ( !v11 ) /*0x5dbfb3*/
    v11 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5dbfbf*/
  v12 = (int *)dword_A8DA90[v5]; /*0x5dbfc1*/
  v28 = v12; /*0x5dbfca*/
  if ( SessionClass::GetPlayerSide(v12) != a2 ) /*0x5dbfd9*/
  {
    v26 = 1; /*0x5dbfde*/
    SessionClass::SetPlayerOption(v12, a2); /*0x5dbfe6*/
  }
  if ( SessionClass::GetOption((int *)dword_A8DA90[v5]) != a4 ) /*0x5dbffd*/
  {
    v26 = 1; /*0x5dc002*/
    SessionClass::SetOption(v12, a4); /*0x5dc00a*/
  }
  if ( SessionClass::GetOption2((SessionClass *)dword_A8DA90[v5]) != a5 ) /*0x5dc021*/
  {
    v26 = 1; /*0x5dc026*/
    SessionClass::SetOption2(v12, a5); /*0x5dc02e*/
  }
  ResourceID2CSF = GetResourceID2CSF((ObjectClass *)v5); /*0x5dc03a*/
  v14 = GetComboBoxSelected(v11, ResourceID2CSF, -1) == -3; /*0x5dc04a*/
  if ( a2 == -3 ) /*0x5dc050*/
  {
    if ( !v14 ) /*0x5dc054*/
    {
      SetupComboBoxObserver(v11, ResourceID2CSF); /*0x5dc05e*/
      ResourceID3CSF = GetResourceID3CSF((ObjectClass *)v5); /*0x5dc065*/
      SetupComboBoxRandomAlliance(v11, ResourceID3CSF); /*0x5dc06e*/
      ResourceID4CSF = GetResourceID4CSF((ObjectClass *)v5); /*0x5dc075*/
      InitComboBoxNone(v11, ResourceID4CSF); /*0x5dc07e*/
      v17 = PlayerSlot::IndexToDlgID((PlayerSlot *)v5); /*0x5dc085*/
      DlgItem = GetDlgItem(v11, v17); /*0x5dc095*/
      SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5dc09c*/
      ResourceIDCSF = GetResourceIDCSF((ObjectClass *)v5); /*0x5dc0a9*/
      FillListBox(v11, ResourceIDCSF); /*0x5dc0af*/
      SetupSkirmishSpawnLocations(v11, ResourceIDCSF, 8); /*0x5dc0b6*/
    }
  }
  else if ( v14 ) /*0x5dc0ba*/
  {
    FillComboBoxRandomOnly(v11, ResourceID2CSF); /*0x5dc0c0*/
    v20 = GetResourceID3CSF((ObjectClass *)v5); /*0x5dc0c7*/
    FillComboBoxAllianceSlots(v11, v20); /*0x5dc0d0*/
    v21 = GetResourceID4CSF((ObjectClass *)v5); /*0x5dc0d7*/
    FillLobbyPlayerSlot(v11, v21); /*0x5dc0e0*/
    v22 = PlayerSlot::IndexToDlgID((PlayerSlot *)v5); /*0x5dc0e7*/
    v23 = GetDlgItem(v11, v22); /*0x5dc0f7*/
    SendMessageA(v23, 0x4F1u, 0, 0); /*0x5dc0fe*/
    v24 = GetResourceIDCSF((ObjectClass *)v5); /*0x5dc10b*/
    FillComboBoxFactions(v11, v24); /*0x5dc111*/
    SetupSkirmishSpawnLocations(v11, v24, -2); /*0x5dc11c*/
  }
  if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v5]) != a3 ) /*0x5dc133*/
    SessionClass::SetPlayerColor(v28, a3); /*0x5dc13a*/
  if ( dword_A8DA90[v5] == *dword_A8DA78 ) /*0x5dc14e*/
    dword_A8B394 = a3; /*0x5dc150*/
  GameSetup::DisplayPlayers(v25); /*0x5dc158*/
  return v26; /*0x5dbf99*/
}



// ==== 0x005DC170  NetworkLobby::ValidateSerialNumber  this=NetworkLobby  sig=csp ====
char __thiscall sub_5DC170(char *this)
{
  int v2; // esi
  FILE *v3; // eax
  FILE *v4; // ebp
  int i; // ecx
  HKEY phkResult; // [esp+10h] [ebp-18Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-188h] BYREF
  DWORD Type; // [esp+18h] [ebp-184h] BYREF
  BYTE Data[128]; // [esp+1Ch] [ebp-180h] BYREF
  CHAR SubKey[256]; // [esp+9Ch] [ebp-100h] BYREF

  strcpy((char *)Data, "0000000000000000000000"); /*0x5dc17c*/
  strcpy(this, (const char *)Data); /*0x5dc1b7*/
  memset(Data, 0, sizeof(Data)); /*0x5dc1c9*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x5dc1d2*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x5dc1da*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x5dc20b*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x5dc226*/
      {
        cbData = 128; /*0x5dc24b*/
        RegQueryValueExA(phkResult, aSerial, 0, &Type, Data, &cbData); /*0x5dc253*/
        RegCloseKey(phkResult); /*0x5dc25e*/
      }
    }
  }
  Data[22] = 0; /*0x5dc26d*/
  strcpy(this, (const char *)Data); /*0x5dc28b*/
  v2 = 0; /*0x5dc294*/
  v3 = fopen(aWoldataKey, aR); /*0x5dc296*/
  v4 = v3; /*0x5dc29b*/
  if ( !v3 ) /*0x5dc2a2*/
    return 0; /*0x5dc2a7*/
  for ( i = fgetc(v3); i != -1; i = fgetc(v4) ) /*0x5dc2bf*/
  {
    Data[v2] = (((char)Data[v2] - 48) % 10 - i + 1000) % 10 + 48; /*0x5dc2eb*/
    if ( ++v2 == strlen((const char *)Data) ) /*0x5dc2f7*/
      v2 = 0; /*0x5dc2f9*/
  }
  fclose(v4); /*0x5dc30c*/
  strcpy(this, (const char *)Data); /*0x5dc32e*/
  return 1; /*0x5dc2a4*/
}



// ==== 0x005DC350  NetworkLobby::CreateGame  this=NetworkLobby  sig=csp ====
char NetworkLobby::CreateGame(NetworkLobby *this)
{
  Dialog *DialogIndirect; // esi
  void (__stdcall *v2)(const MSG *); // edi
  void (__stdcall *v3)(const MSG *); // ebx
  int v4; // eax
  TechnoTypeClass *v5; // ecx
  int v6; // esi
  int v7; // eax
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v10; // esi
  HWND DlgItem; // eax
  HWND v12; // eax
  Dialog *v13; // esi
  int m; // esi
  int v15; // esi
  int v16; // eax
  int n; // esi
  int v18; // esi
  int v19; // eax
  Dialog *v20; // esi
  HWND v21; // eax
  HWND v22; // esi
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // esi
  HWND v26; // eax
  char v27; // bl
  wchar_t *v28; // eax
  int v29; // esi
  char *v30; // eax
  char *v31; // eax
  int v32; // eax
  int v33; // ebp
  wchar_t *v34; // eax
  HWND v35; // eax
  HWND v36; // esi
  HWND v37; // eax
  char *v38; // eax
  int PlayerOption; // eax
  int PlayerColor; // eax
  int v41; // eax
  int v42; // eax
  int v43; // esi
  char *v44; // eax
  int v45... [37726 chars total]



// ==== 0x005DD8A0  ObjectClass::SynchronizeMultiplayerGameStart  this=ObjectClass  sig=csp ====
char __usercall SynchronizeMultiplayerGameStart@<al>(ObjectClass *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  int LobbyStatus; // eax
  int v5; // ecx
  int *v7; // eax
  int i; // esi
  wchar_t *StringCSF; // [esp-18h] [ebp-1F4h]
  char v10[16]; // [esp+4h] [ebp-1D8h] BYREF
  int v11[113]; // [esp+14h] [ebp-1C8h] BYREF
  __int16 v12; // [esp+1D8h] [ebp-4h]
  char v13; // [esp+1DAh] [ebp-2h]

  if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) <= 0x1E ) /*0x5dd8b6*/
    v2 = 30; /*0x5dd8c7*/
  else
    v2 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x5dd8c2*/
  v3 = Network::SetConnectionParams(&unk_A8E9C0, v2, -1, 1000, 1); /*0x5dd8dd*/
  LOBYTE(v3) = dword_A8BB08; /*0x5dd8e2*/
  if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v3, 1) == 1 ) /*0x5dd906*/
  {
    Debug::Log(); /*0x5dd911*/
    memset(v11, 0, sizeof(v11)); /*0x5dd924*/
    v12 = 0; /*0x5dd92a*/
    v13 = 0; /*0x5dd942*/
    v11[0] = 19; /*0x5dd943*/
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v11, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x5dd94b*/
    while ( Network::GetQueueCount(&unk_A8E9C0) > 0 ) /*0x5dd95c*/
    {
      if ( !Network::ReceiveLoop(&unk_A8E9C0) ) /*0x5dd963*/
        break; /*0x5dd96a*/
      Event::Dispatch(); /*0x5dd96c*/
    }
    goto LABEL_8; /*0x5dd97d*/
  }
  Debug::Log(); /*0x5dda12*/
  if ( !dword_A8BB08 || (unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) ) /*0x5dda28*/
  {
    SynchronizeMultiplayerGameStart_Start(); /*0x5dda31*/
    if ( RequestNetworkFile(byte_A8B8E0, 3, 1) ) /*0x5dda42*/
    {
      if ( !(unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) || RequestNetworkFile(v10, 3, 1) ) /*0x5dda68*/
      {
LABEL_8:
        strcpy((char *)&dword_A8B230[130].abstractFlags, byte_A8B8E0); /*0x5dd97f*/
        LobbyStatus = Network::GetLobbyStatus((Network *)&unk_A8E9C0); /*0x5dd9b1*/
        if ( LobbyStatus < 20 ) /*0x5dd9b9*/
        {
          Debug::Log(); /*0x5dd9c1*/
          LobbyStatus = 20; /*0x5dd9c9*/
        }
        v5 = 8 * LobbyStatus; /*0x5dd9ce*/
        if ( 8 * LobbyStatus < 120 ) /*0x5dd9d8*/
          v5 = 120; /*0x5dd9da*/
        Network::SetConnectionParams(&unk_A8E9C0, LobbyStatus, -1, v5, 1); /*0x5dd9ea*/
        TacticalClass::SetCameraPosition(&unk_A8E9C0, 60, -1, 600); /*0x5dd9fd*/
        return 1; /*0x5dda0c*/
      }
    }
  }
  *(_DWORD *)&stru_A8B250.__pad_0[4] = -1; /*0x5dda8c*/
  StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_netdlg2_cpp, 710); /*0x5ddaaa*/
  v7 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[2], 0, g_Str_File_netdlg2_cpp, 710); /*0x5ddab5*/
  Dialog::ShowMessageBox(v7, StringCSF, 0, 0, 0, v1); /*0x5ddabf*/
  memset(v11, 0, sizeof(v11)); /*0x5ddad3*/
  v12 = 0; /*0x5ddad5*/
  v13 = 0; /*0x5ddad7*/
  v11[0] = 10; /*0x5ddae2*/
  strcpy((char *)&v11[1], unk_A8B380); /*0x5ddaf9*/
  for ( i = 1; i < dword_A8DA54; ++i ) /*0x5ddb0e*/
  {
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v11, 455, 1, *(_DWORD *)(dword_A8DA48 + 4 * i) + 40, 0, 0); /*0x5ddb32*/
    Event::Dispatch(); /*0x5ddb37*/
  }
  Network::SendMessage(&unk_A8E9C0.Socket, (int)v11, 455, 0, 0, 0, 0); /*0x5ddb5d*/
  if ( dword_A8D5FC ) /*0x5ddb69*/
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v11, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5ddb85*/
  while ( Network::GetQueueCount(&unk_A8E9C0) > 0 ) /*0x5ddb96*/
  {
    if ( !Network::ReceiveLoop(&unk_A8E9C0) ) /*0x5ddb9d*/
      break; /*0x5ddba4*/
    Event::Dispatch(); /*0x5ddba6*/
  }
  return 0; /*0x5dda06*/
}



// ==== 0x005DDBD0  NetworkSettings::DlgProc  this=NetworkSettings  sig=csp ====
int __stdcall NetworkSettings::DlgProc(HWND hWnd, UINT a2, DeleteAndZero a3)
{
  int result; // eax
  unsigned int v4; // ebx
  int v5; // esi
  WPARAM v6; // edi
  LRESULT v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  char *v10; // eax
  __int16 v11; // cx
  HWND v12; // eax
  HWND v13; // eax
  int v14; // esi
  HWND v15; // eax
  unsigned int DeleteAndZero_field_0x04_high; // edi
  int DeleteAndZero_field_0x04_low; // esi
  wchar_t *StringCSF; // ebx
  HWND v20; // eax
  char *v21; // eax
  char *v22; // edi
  HWND DlgItem; // eax
  int v24; // eax
  int v25; // edi
  char *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  HWND v31; // eax
  POINT v32; // [esp-Ch] [ebp-54h]
  GameSetup *v33; // [esp+0h] [ebp-48h]
  struct tagRECT Rect; // [esp+10h] [ebp-38h] BYREF
  char lParam[40]; // [esp+20h] [ebp-28h] BYREF
  HWND hWnda; // [esp+4Ch] [ebp+4h]

  if ( a2 > 0x200 ) /*0x5ddbe0*/
  {
    switch ( a2 ) /*0x5de05c*/
    {
      case 0x497u: /*0x5de05c*/
        g_NetworkSetupConfig = 0; /*0x5de0a7*/
        byte_831274 = 1; /*0x5de0ad*/
        Dialog::RefreshDialogsGame((Dialog *)hWnd); /*0x5de0b4*/
        SendDlgItemMessageA(hWnd, 1345, 0xC5u, 0x10u, 0); /*0x5de0cd*/
        SendDlgItemMessageA(hWnd, 1345, 0x4EBu, 0, (LPARAM)asc_8304FC); /*0x5de0e0*/
        SendDlgItemMessageA(hWnd, 1345, 0x4D1u, 1u, 0); /*0x5de0f0*/
        v22 = CharToWideString(unk_A8B380); /*0x5de108*/
        DlgItem = GetDlgItem(hWnd, 1345); /*0x5de10a*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v22); /*0x5de114*/
        MEMORY[0xA8B322][0] = 0; /*0x5de12a*/
        dword_A8B394 = dword_A8B3B4; /*0x5de131*/
        dword_A8B398 = dword_A8B3B8; /*0x5de137*/
        PtrVector::Destroy(&stru_A8DA5C); /*0x5de13c*/
        PtrVector::Destroy(&stru_A8DA74); /*0x5de146*/
        PtrVector::Destroy((PtrVector *)&dword_A8DA44); /*0x5de150*/
        v24 = __2_YAPAXI_Z(0x85u); /*0x5de15a*/
        v25 = v24; /*0x5de15f*/
        if ( v24 ) /*0x5de166*/
          Waypoint::InitInvalid((Waypoint *)(v24 + 40)); /*0x5de16b*/
        else
          v25 = 0; /*0x5de172*/
        v26 = CharToWideString(unk_A8B380); /*0x5de179*/
        wcscpy((wchar_t *)v25, (const wchar_t *)v26); /*0x5de180*/
        *(_DWORD *)(v25 + 52) = 0; /*0x5de185*/
        *(_BYTE *)(v25 + 56) = 0; /*0x5de188*/
        *(_DWORD *)(v25 + 57) = *(_DWORD *)&stru_A8D600.__pad_64[7]; /*0x5de195*/
        if ( dword_A8DA54 < dword_A8DA4C /*0x5de1cc*/
          || (byte_A8DA51 || !dword_A8DA4C)
          && dword_A8DA58 > 0
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DA44 + 8))(
               &dword_A8DA44,
               dword_A8DA4C + dword_A8DA58,
               0) )
        {
          v27 = dword_A8DA54++; /*0x5de1d9*/
          *(_DWORD *)(dword_A8DA48 + 4 * v27) = v25; /*0x5de1e8*/
        }
        v28 = __2_YAPAXI_Z(0x85u); /*0x5de1f0*/
        v29 = v28; /*0x5de1f5*/
        if ( v28 ) /*0x5de1fc*/
          Waypoint::InitInvalid((Waypoint *)(v28 + 40)); /*0x5de201*/
        else
          v29 = 0; /*0x5de208*/
        wcscpy((wchar_t *)v29, &g_TypeClass_DefaultString); /*0x5de210*/
        *(_BYTE *)(v29 + 52) = 0; /*0x5de215*/
        *(_DWORD *)(v29 + 53) = 0; /*0x5de219*/
        if ( dword_A8DA6C < dword_A8DA64 /*0x5de255*/
          || (byte_A8DA69 || !dword_A8DA64)
          && dword_A8DA70 > 0
          && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA5C + 8))(
               &stru_A8DA5C,
               dword_A8DA64 + dword_A8DA70,
               0) )
        {
          v30 = dword_A8DA6C++; /*0x5de262*/
          *(_DWORD *)(dword_A8DA60 + 4 * v30) = v29; /*0x5de271*/
        }
        SendNetworkHeartbeat(1, 0, 1, 1); /*0x5de27f*/
        NetworkLobby::UpdatePlayerList(); /*0x5de284*/
        GameSetup::DisplayPlayers(v33); /*0x5de28b*/
        Dialog::DrawBackground((Dialog *)hWnd); /*0x5de292*/
        v31 = GetDlgItem(hWnd, 1344); /*0x5de29d*/
        SetFocus(v31); /*0x5de2a0*/
        break;
      case 0x4DBu: /*0x5de05c*/
        NavigateDialogTab((HWND)a3.DeleteAndZero_field_0x04, *(_DWORD *)a3.__pad_0 != 0); /*0x5de08e*/
        return 0; /*0x5de09c*/
      case 0x4ECu: /*0x5de05c*/
        Dialog::EnumAndCleanup((Dialog *)hWnd); /*0x5de070*/
        return 0; /*0x5de07e*/
    }
    return 0; /*0x5de066*/
  }
  if ( a2 == 512 ) /*0x5ddbe6*/
  {
    hWnda = GetDlgItem(hWnd, 1685); /*0x5ddfcf*/
    if ( !hWnda ) /*0x5ddfd3*/
      return 0; /*0x5ddfd3*/
    DeleteAndZero_field_0x04_high = HIWORD(a3.DeleteAndZero_field_0x04); /*0x5ddfe2*/
    DeleteAndZero_field_0x04_low = LOWORD(a3.DeleteAndZero_field_0x04); /*0x5ddfea*/
    GetWindowRect(hWnd, &Rect); /*0x5ddff0*/
    StringCSF = &g_TypeClass_DefaultString; /*0x5de004*/
    v32.y = DeleteAndZero_field_0x04_high - Rect.top; /*0x5de009*/
    v32.x = DeleteAndZero_field_0x04_low - Rect.left; /*0x5de00a*/
    v20 = ChildWindowFromPointEx(hWnd, v32, 1u); /*0x5de00c*/
    if ( v20 ) /*0x5de014*/
    {
      v21 = DlgSkirmishMenuProc(hWnd, v20); /*0x5de01a*/
      if ( v21 ) /*0x5de021*/
        StringCSF = GetStringCSF((wchar_t *)v21, 0, g_Str_File_netdlg2_cpp, 2439); /*0x5de036*/
    }
    SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5de045*/
    return 0; /*0x5de04e*/
  }
  else
  {
    if ( a2 <= 0x2B ) /*0x5ddbef*/
    {
      switch ( a2 ) /*0x5ddbf1*/
      {
        case 0x2Bu: /*0x5ddbf1*/
          Dialog::Resize((char *)a3.DeleteAndZero_field_0x04); /*0x5ddc3b*/
          return 1; /*0x5ddc4c*/
        case 0xFu: /*0x5ddbf1*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x5ddc16*/
          Dialog::StopBink((Dialog *)hWnd); /*0x5ddc1d*/
          ValidateRect(hWnd, 0); /*0x5ddc25*/
          return 0; /*0x5ddc34*/
        case 0x14u: /*0x5ddbf1*/
          return 1; /*0x5ddc0d*/
      }
      return 0; /*0x5ddbfb*/
    }
    if ( a2 != 273 ) /*0x5ddc54*/
      return 0; /*0x5ddc54*/
    v4 = *(_DWORD *)a3.__pad_0; /*0x5ddc5a*/
    v5 = *(unsigned __int16 *)a3.__pad_0; /*0x5ddc60*/
    if ( *(unsigned __int16 *)a3.__pad_0 <= 0x5C0u ) /*0x5ddc6c*/
    {
      switch ( *(unsigned __int16 *)a3.__pad_0 ) /*0x5ddc72*/
      {
        case 0x5C0u: /*0x5ddc72*/
          g_NetworkOptionsState = 1472; /*0x5ddedb*/
          Config::SaveObserverMode(); /*0x5ddee5*/
          return 0; /*0x5ddef3*/
        case 0x540u: /*0x5ddc72*/
          ReadChatMessage((wchar_t **)&a3, (HWND)a3.DeleteAndZero_field_0x04); /*0x5dde9c*/
          DeleteAndZero::Alt(&a3); /*0x5ddea5*/
          if ( HIWORD(v4) == 1281 ) /*0x5ddeb3*/
          {
            SendNetworkLobbyChatMessage(hWnd, (int)Math::InitDegToRad, 61680); /*0x5ddeca*/
            return 0; /*0x5dded8*/
          }
          return 0; /*0x5ddeb3*/
        case 0x541u: /*0x5ddc72*/
          if ( IsWindowEnabled(hWnd) && !g_NetworkOptionsState ) /*0x5ddd90*/
          {
            *(_WORD *)lParam = 0; /*0x5ddda2*/
            v9 = GetDlgItem(hWnd, 1345); /*0x5ddda7*/
            SendMessageA(v9, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5dddbc*/
            v10 = lParam; /*0x5dddbe*/
            if ( *(_WORD *)lParam ) /*0x5dddca*/
            {
              v11 = *(_WORD *)lParam; /*0x5dddcc*/
              do /*0x5ddde0*/
              {
                if ( v11 != 32 ) /*0x5dddd4*/
                  break; /*0x5dddd4*/
                v11 = *((_WORD *)v10 + 1); /*0x5dddd6*/
                v10 += 2; /*0x5dddda*/
              }
              while ( v11 ); /*0x5ddde0*/
            }
            if ( !*(_WORD *)v10 && *(_WORD *)lParam ) /*0x5dddea*/
            {
              *(_WORD *)lParam = 0; /*0x5dddf2*/
              v12 = GetDlgItem(hWnd, 1345); /*0x5dddf7*/
              SendMessageA(v12, 0x4B2u, 0, (LPARAM)lParam); /*0x5dde05*/
            }
            if ( strcmp(ToWideStringChar(lParam), unk_A8B380) ) /*0x5dde1d*/
            {
              strcpy(unk_A8B380, ToWideStringChar(lParam)); /*0x5dde71*/
              SendNetworkHeartbeat(0, 0, 1, 0); /*0x5dde7c*/
              GameSetup::DisplayPlayers(v33); /*0x5dde83*/
              return 0; /*0x5dde91*/
            }
          }
          return 0; /*0x5dde44*/
      }
      if ( *(unsigned __int16 *)a3.__pad_0 == 1353 && g_NetworkSettingsState <= 0 ) /*0x5ddc9b*/
      {
        v6 = g_NetworkSetupConfig; /*0x5ddca5*/
        v7 = SendDlgItemMessageA(hWnd, 1353, 0x188u, 0, 0); /*0x5ddcba*/
        if ( v7 >= 0 && byte_831274 ) /*0x5ddccc*/
        {
          g_NetworkSetupConfig = v7; /*0x5ddcd4*/
          wcscpy((wchar_t *)&stru_A8D600.Network_field_0x10, *(const wchar_t **)(dword_A8DA60 + 4 * v7)); /*0x5ddce2*/
        }
        if ( HIWORD(v4) == 1 ) /*0x5ddcf3*/
        {
          PtrVector::Destroy(&stru_A8DA74); /*0x5ddcfa*/
          if ( v6 != g_NetworkSetupConfig ) /*0x5ddd05*/
            SendNetworkHeartbeat(1, 1, 1, 0); /*0x5ddd12*/
          GameSetup::DisplayPlayers(v33); /*0x5ddd19*/
          return 0; /*0x5ddd27*/
        }
        if ( HIWORD(v4) == 2 ) /*0x5ddd2e*/
        {
          EnableWindow(hWnd, 0); /*0x5ddd3d*/
          v8 = GetDlgItem(hWnd, 1345); /*0x5ddd45*/
          if ( v8 ) /*0x5ddd4d*/
            EnableWindow(v8, 0); /*0x5ddd52*/
          g_NetworkOptionsState = 1742 - (g_MenuStateFlags != 1); /*0x5ddd67*/
          return 0; /*0x5ddd71*/
        }
      }
      return 0; /*0x5de2a9*/
    }
    switch ( *(_WORD *)a3.__pad_0 ) /*0x5ddf0f*/
    {
      case 0x6CC: /*0x5ddf0f*/
        g_NetworkOptionsState = *(unsigned __int16 *)a3.__pad_0; /*0x5ddf1b*/
        byte_AC0269 = g_MenuStateFlags == 1; /*0x5ddf29*/
        result = 0; /*0x5ddf2f*/
        break; /*0x5ddf35*/
      case 0x6CD: /*0x5ddf0f*/
      case 0x6CE: /*0x5ddf0f*/
        EnableWindow(hWnd, 0); /*0x5ddf45*/
        v13 = GetDlgItem(hWnd, 1345); /*0x5ddf4d*/
        if ( v13 ) /*0x5ddf55*/
          EnableWindow(v13, 0); /*0x5ddf5a*/
        g_NetworkOptionsState = v5; /*0x5ddf5c*/
        result = 0; /*0x5ddf65*/
        break; /*0x5ddf6b*/
      case 0x75F: /*0x5ddf0f*/
      case 0x760: /*0x5ddf0f*/
        v14 = 0; /*0x5ddf78*/
        v15 = GetDlgItem(hWnd, 1888); /*0x5ddf7a*/
        if ( v15 ) /*0x5ddf82*/
          v14 = SendMessageA(v15, 0xF0u, 0, 0); /*0x5ddf92*/
        if ( (_WORD)v4 == 1887 ) /*0x5ddf99*/
          v14 = v14 == 0; /*0x5ddfa2*/
        g_MenuStateFlags = v14; /*0x5ddfa6*/
        Dialog::RefreshDialogsGame(0); /*0x5ddfac*/
        result = 0; /*0x5ddfb4*/
        break; /*0x5ddfba*/
      default:
        return 0;
    }
  }
  return result; /*0x5ddc01*/
}



// ==== 0x005DE360  SendNetworkLobbyChatMessage  this=AbstractClass  sig=csp ====
int __fastcall SendNetworkLobbyChatMessage(HWND hWnd, int a2, int a3)
{
  HWND DlgItem; // eax
  int v5; // ebp
  HWND v6; // eax
  int result; // eax
  char *v8; // eax
  int v9; // edi
  int i; // esi
  int v11; // edi
  int j; // esi
  wchar_t lParam[111]; // [esp+14h] [ebp-2A8h] BYREF
  __int16 v15; // [esp+F2h] [ebp-1CAh]
  _DWORD v16[113]; // [esp+F4h] [ebp-1C8h] BYREF
  __int16 v17; // [esp+2B8h] [ebp-4h]
  char v18; // [esp+2BAh] [ebp-2h]

  DlgItem = GetDlgItem(hWnd, 1344); /*0x5de37c*/
  SendMessageA(DlgItem, 0x4B3u, 0x6Fu, (LPARAM)lParam); /*0x5de391*/
  v15 = 0; /*0x5de397*/
  v5 = wcslen(lParam); /*0x5de3aa*/
  v6 = GetDlgItem(hWnd, 1344); /*0x5de3b2*/
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5de3c1*/
  result = InvalidateRect(hWnd, 0, 1); /*0x5de3c8*/
  if ( v5 > 2 ) /*0x5de3d1*/
  {
    v8 = CharToWideString(unk_A8B380); /*0x5de3e1*/
    Dialog::ShowMessage(a2, (size_t)g_Str_Trace___s_, v8, lParam); /*0x5de3f1*/
    memset(v16, 0, sizeof(v16)); /*0x5de40b*/
    v17 = 0; /*0x5de40d*/
    v18 = 0; /*0x5de40f*/
    v16[0] = 12; /*0x5de41a*/
    strcpy((char *)&v16[1], unk_A8B380); /*0x5de43b*/
    wcscpy((wchar_t *)&v16[12], lParam); /*0x5de44a*/
    v16[68] = a3; /*0x5de45e*/
    v16[69] = WideString::Hash(word_A8D610); /*0x5de46a*/
    result = g_NetworkSettingsState; /*0x5de471*/
    if ( g_NetworkSettingsState == 2 ) /*0x5de479*/
    {
      v9 = dword_A8DA84; /*0x5de47b*/
      for ( i = 1; i < v9; ++i ) /*0x5de488*/
      {
        Network::SendMessage((int)unk_A8E9C0, (int)v16, 455, 1, *(_DWORD *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5de4b3*/
        result = Event::Dispatch(); /*0x5de4b8*/
      }
    }
    else
    {
      v11 = dword_A8DA54; /*0x5de4cf*/
      for ( j = 1; j < v11; ++j ) /*0x5de4dc*/
      {
        Network::SendMessage((int)unk_A8E9C0, (int)v16, 455, 1, *(_DWORD *)(dword_A8DA48 + 4 * j) + 40, 0, 0); /*0x5de503*/
        result = Event::Dispatch(); /*0x5de508*/
      }
    }
  }
  return result; /*0x5de4c2*/
}



// ==== 0x005DE520  NetworkLobby::DlgProc  this=NetworkLobby  sig=csp ====
int __stdcall NetworkLobby::DlgProc(HWND hDlg, UINT a2, unsigned int nIDDlgItem, unsigned int lParam)
{
  wchar_t *StringCSF; // ebp
  HWND v5; // eax
  char *v6; // eax
  int result; // eax
  Skirmish *v8; // edi
  LRESULT v9; // eax
  HWND v10; // eax
  ObjectClass *v11; // ecx
  void *v12; // ebp
  int v13; // edi
  void *v14; // ecx
  ObjectClass *v15; // ecx
  char v16; // bl
  char v17; // al
  int v18; // edi
  int i; // esi
  unsigned int v20; // eax
  int v21; // eax
  int PlayerCountMap; // edi
  void *ptr_8; // ecx
  HWND DlgItem; // eax
  Dialog *DlgCtrlID; // edi
  GameSetup *ComboBoxSelectedRaw; // eax
  wchar_t *DifficultyString; // eax
  SideClass *ComboBoxSelected; // eax
  GameClass *ComboBoxSelectedDefault; // eax
  POINT v30; // [esp-Ch] [ebp-200h]
  ObjectClass *v31; // [esp+0h] [ebp-1F4h]
  GameSetup *v32; // [esp+0h] [ebp-1F4h]
  GameSetup *v33; // [esp+0h] [ebp-1F4h]
  char v34; // [esp+12h] [ebp-1E2h]
  char v35; // [esp+13h] [ebp-1E1h]
  HWND hWnd; // [esp+14h] [ebp-1E0h]
  DeleteAndZero v37; // [esp+18h] [ebp-1DCh] BYREF
  int v38[113]; // [esp+2Ch] [ebp-1C8h] BYREF
  __int16 v39; // [esp+1F0h] [ebp-4h]
  char v40; // [esp+1F2h] [ebp-2h]

  if ( a2 != 1175 ) /*0x5de54c*/
    SkirmishDialogProc(hDlg, a2, nIDDlgItem, (HWND)lParam); /*0x5de552*/
  if ( a2 > 0x111 ) /*0x5de55d*/
  {
    if ( a2 <= 0x49B ) /*0x5dec01*/
    {
      if ( a2 == 1179 ) /*0x5dec07*/
      {
        DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x5deed0*/
        SendMessageA(DlgItem, 0x4B3u, 0x7Fu, lParam); /*0x5deedf*/
        return 0; /*0x5deef1*/
      }
      if ( a2 >= 0x114 ) /*0x5dec13*/
      {
        if ( a2 <= 0x115 ) /*0x5dec1f*/
        {
          if ( (HWND)lParam == GetDlgItem(hDlg, 1842) ) /*0x5dee43*/
          {
            if ( byte_AC0268 ) /*0x5dee4c*/
              return 0; /*0x5dee4c*/
            stru_A8EB00.ObjectTypeClass[26] = SendDlgItemMessageA(hDlg, 1842, 0x400u, 0, 0); /*0x5dee63*/
          }
          if ( !byte_AC0268 ) /*0x5dee6f*/
          {
            *(_DWORD *)&stru_A8B250.__pad_0[24] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0); /*0x5dee9c*/
            *(_DWORD *)&stru_A8B250.__pad_0[12] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0); /*0x5deeb3*/
            *(_DWORD *)&stru_A8B250.__pad_0[32] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0); /*0x5deebc*/
            return 0; /*0x5deecb*/
          }
          return 0; /*0x5dee6f*/
        }
        if ( a2 == 1175 ) /*0x5dec2b*/
        {
          NetworkBuffer::GetField((NetworkBuffer *)&stru_A8EB00.?[252]); /*0x5dec36*/
          v20 = Random::Range(&Randomizer_Global, 1, 0x7FFF); /*0x5dec47*/
          srand(v20); /*0x5dec4d*/
          *(_DWORD *)&stru_A8EB00.?[432] = rand(); /*0x5dec5c*/
          Dialog::RestoreParent((Dialog *)hDlg); /*0x5dec61*/
          SkirmishDialog::FillComboBoxes((SkirmishDialog *)hDlg); /*0x5dec68*/
          InitGameDropdownColors(v31); /*0x5dec6d*/
          Lobby::FillPlayerFactions((Lobby *)hDlg); /*0x5dec74*/
          SetupSkirmishDialogPlayerSlot(hDlg, (int)dword_A8DA8C); /*0x5dec81*/
          MapSkirmishDialogPlayerToControl(hDlg, (int)dword_A8DA8C); /*0x5dec8e*/
          _cfltcvt_init(); /*0x5dec93*/
          memset32(&stru_A8B250.__pad_0[140], -2, 8u); /*0x5deca7*/
          GDlg::LoadLetterStrings(); /*0x5deca9*/
          memset32(&stru_A8B250.__pad_0[172], -2, 8u); /*0x5decc2*/
          SetupMultiplayerLobbyPlayers(hDlg, (int)&unk_A8B440); /*0x5decc6*/
          Lobby::InvalidatePlayerSlots((Lobby *)hDlg); /*0x5deccd*/
          RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5decd5*/
          GameSetup::DisplayPlayers(v33); /*0x5decdc*/
          if ( dword_A8B23C /*0x5decef*/
            && !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) )
          {
            g_MPCooperativeState = (ObjectClass *)-1; /*0x5decfb*/
            g_MenuStateFlags = 0; /*0x5ded05*/
            Dialog::RefreshDialogsGame(0); /*0x5ded0b*/
            *(_DWORD *)(dword_A8DA90[0] + 107) = 0; /*0x5ded15*/
            v21 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x5ded20*/
            SessionClass::SetPlayerOption((int *)dword_A8DA90[0], v21); /*0x5ded2a*/
            SessionClass::SetPlayerColor((int *)dword_A8DA90[0], -2); /*0x5ded37*/
            SessionClass::SetOption((int *)dword_A8DA90[0], -2); /*0x5ded44*/
            SessionClass::SetOption2((int *)dword_A8DA90[0], -2); /*0x5ded51*/
            Lobby::FillPlayerFactions((Lobby *)hDlg); /*0x5ded58*/
          }
          SetupSkirmishPlayerSlots(hDlg, 0, (HWND)1); /*0x5ded63*/
          SetupMultiplayerLobbyScreen(hDlg, (void *)0xFFFFFFFF, *(int *)&stru_A8B250.__pad_0[4]); /*0x5ded73*/
          if ( !g_MPCooperativeState /*0x5ded8c*/
            && dword_A8B23C
            && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) )
          {
            SessionClass::SetPlayerOption((int *)dword_A8DA90[0], -3); /*0x5ded9e*/
            *(_DWORD *)(dword_A8DA90[0] + 107) = -1; /*0x5deda8*/
          }
          NetworkLobby::Dispatch((NetworkLobby *)hDlg); /*0x5dedb1*/
          SetDialogPlayerName(hDlg, (int)dword_A8B23C); /*0x5dedbe*/
          Dialog::ShowPlayerName((Dialog *)hDlg); /*0x5dedc5*/
          Session::StartGame((Session *)hDlg); /*0x5dedcc*/
          PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5dede2*/
          if ( !dword_A8B23C /*0x5dedfe*/
            || !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)
            || (ptr_8 = dword_A8B230[127].ptr_8, (int)ptr_8 > PlayerCountMap) )
          {
            ptr_8 = (void *)PlayerCountMap; /*0x5dee00*/
          }
          ResetLobbyFactionTable((int)ptr_8); /*0x5dee02*/
          Lobby::InvalidateFactionCombos((Lobby *)hDlg); /*0x5dee09*/
          SkirmishDialogProc(hDlg, 1175, nIDDlgItem, (HWND)lParam); /*0x5dee16*/
          NetworkLobby::UpdatePlayerList(); /*0x5dee1b*/
          return 0; /*0x5dee2c*/
        }
      }
      return 0; /*0x5def0d*/
    }
    if ( a2 != 1257 ) /*0x5deefa*/
    {
      if ( a2 == 1260 ) /*0x5deeff*/
      {
        Dialog::EnumAndCleanup((Dialog *)hDlg); /*0x5def12*/
        return 0; /*0x5def12*/
      }
      return 0; /*0x5deeff*/
    }
    WideString::Assign_Alt((void **)(lParam + 8), 0); /*0x5def2d*/
    if ( *(_DWORD *)lParam && *(_DWORD *)(lParam + 4) != -1 ) /*0x5def40*/
    {
      DlgCtrlID = (Dialog *)GetDlgCtrlID(*(HWND *)lParam); /*0x5def49*/
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 ) /*0x5def55*/
      {
        ComboBoxSelectedDefault = (GameClass *)GetComboBoxSelectedDefault(hDlg, (int)DlgCtrlID, *(_DWORD *)(lParam + 4)); /*0x5defa8*/
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault); /*0x5defaf*/
        goto LABEL_132; /*0x5defaf*/
      }
      if ( CountryCombo::IDToIndex((CountryCombo *)DlgCtrlID) == -1 ) /*0x5def61*/
      {
        if ( StartCombo::IDToIndex((StartCombo *)DlgCtrlID) != -1 ) /*0x5def6d*/
        {
          ComboBoxSelectedRaw = (GameSetup *)GetComboBoxSelectedRaw(hDlg, (int)DlgCtrlID, *(_DWORD *)(lParam + 4)); /*0x5def77*/
          DifficultyString = GameSetup::GetColorTooltip(ComboBoxSelectedRaw); /*0x5def7e*/
LABEL_132:
          WideString::Assign_Alt((void **)(lParam + 8), DifficultyString); /*0x5defb4*/
        }
      }
      else
      {
        ComboBoxSelected = (SideClass *)GetComboBoxSelected(hDlg, (int)DlgCtrlID, *(_DWORD *)(lParam + 4)); /*0x5def8d*/
        if ( ComboBoxSelected != (SideClass *)-1 ) /*0x5def95*/
        {
          DifficultyString = SideClass::GetName(ComboBoxSelected); /*0x5def99*/
          goto LABEL_132; /*0x5def9e*/
        }
      }
    }
    return 1; /*0x5defbf*/
  }
  if ( a2 != 273 ) /*0x5de563*/
  {
    switch ( a2 ) /*0x5de57f*/
    {
      case 2u: /*0x5de57f*/
        if ( !(unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5de694*/
          return 0; /*0x5de694*/
        VtableStub::643E70(&stru_AC4B30.__pad_EC[828]); /*0x5de69f*/
        result = 0; /*0x5de6a7*/
        break; /*0x5de6b0*/
      case 0xFu: /*0x5de57f*/
        Dialog::DrawBackground((Dialog *)hDlg); /*0x5de634*/
        if ( g_UIControlState ) /*0x5de641*/
          Skirmish::RenderPreview(g_UIControlState, hDlg); /*0x5de644*/
        if ( (unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5de64e*/
          LoadScreen::Render((int)&stru_AC4B30.__pad_EC[828], lParam, nIDDlgItem, NAN); /*0x5de664*/
        Dialog::StopBink((Dialog *)hDlg); /*0x5de66b*/
        ValidateRect(hDlg, 0); /*0x5de673*/
        result = 0; /*0x5de67c*/
        break; /*0x5de685*/
      case 0x14u: /*0x5de57f*/
        return 1;
      case 0x2Bu: /*0x5de57f*/
        Dialog::Resize((char *)lParam); /*0x5de61b*/
        result = 1; /*0x5de623*/
        break; /*0x5de62f*/
      case 0x84u: /*0x5de57f*/
        hWnd = GetDlgItem(hDlg, 1685); /*0x5de594*/
        if ( !hWnd ) /*0x5de598*/
          return 0; /*0x5de598*/
        GetWindowRect(hDlg, (LPRECT)&v37.DeleteAndZero_field_0x04); /*0x5de5af*/
        StringCSF = &g_TypeClass_DefaultString; /*0x5de5c3*/
        v30.y = HIWORD(lParam) - v37.DeleteAndZero_field_0x08; /*0x5de5c8*/
        v30.x = (unsigned __int16)lParam - v37.DeleteAndZero_field_0x04; /*0x5de5c9*/
        v5 = ChildWindowFromPointEx(hDlg, v30, 1u); /*0x5de5cb*/
        if ( v5 ) /*0x5de5d3*/
        {
          v6 = DlgSkirmishMenuProc(hDlg, v5); /*0x5de5d9*/
          if ( v6 ) /*0x5de5e0*/
            StringCSF = GetStringCSF((wchar_t *)v6, 0, g_Str_File_netdlg2_cpp, 2857); /*0x5de5f5*/
        }
        SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5de604*/
        result = 0; /*0x5de60d*/
        break; /*0x5de616*/
      default:
        return 0;
    }
    return result; /*0x5de616*/
  }
  if ( (unsigned __int16)nIDDlgItem > 0x588u ) /*0x5de6c1*/
  {
    if ( (unsigned __int16)nIDDlgItem > 0x6A8u ) /*0x5de86a*/
    {
      switch ( (__int16)nIDDlgItem ) /*0x5deba6*/
      {
        case 1706: /*0x5deba6*/
        case 1707: /*0x5deba6*/
          goto LABEL_89;
        case 1901: /*0x5deba6*/
        case 1902: /*0x5deba6*/
        case 1903: /*0x5deba6*/
        case 1904: /*0x5deba6*/
        case 1905: /*0x5deba6*/
        case 1906: /*0x5deba6*/
        case 1907: /*0x5deba6*/
        case 1908: /*0x5deba6*/
          if ( HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5debe7*/
            return 0; /*0x5debe7*/
          ProcessNetworkLobbyOption(hDlg, (void *)(unsigned __int16)nIDDlgItem); /*0x5debf1*/
          break; /*0x5debf6*/
        default:
          return 0;
      }
      goto LABEL_51; /*0x5debf6*/
    }
    if ( (unsigned __int16)nIDDlgItem >= 0x6A3u ) /*0x5de876*/
    {
LABEL_89:
      if ( HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5debc0*/
        return 0; /*0x5debc0*/
      AssignPlayerSide(hDlg, (unsigned __int16)nIDDlgItem); /*0x5debca*/
      goto LABEL_51; /*0x5debcf*/
    }
    if ( (unsigned __int16)nIDDlgItem != 1450 ) /*0x5de883*/
    {
      if ( (unsigned __int16)nIDDlgItem != 1697 ) /*0x5de88a*/
      {
        if ( (unsigned __int16)nIDDlgItem != 1698 ) /*0x5de88d*/
          return 0; /*0x5de88d*/
LABEL_45:
        if ( HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5de8a6*/
          return 0; /*0x5de8a6*/
        AssignPlayerColor(hDlg, (void *)(unsigned __int16)nIDDlgItem); /*0x5de8b0*/
LABEL_51:
        CheckGameSettingsChanged(1, 0); /*0x5de8d9*/
        GameSetup::DisplayPlayers((GameSetup *)v31); /*0x5de8e4*/
        return 0; /*0x5de8f5*/
      }
LABEL_48:
      if ( HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5de8ca*/
        return 0; /*0x5de8ca*/
      SelectLobbyCountry(hDlg, (void *)(unsigned __int16)nIDDlgItem); /*0x5de8d4*/
      goto LABEL_51; /*0x5de8d4*/
    }
    if ( byte_AC0268 ) /*0x5de8ff*/
      return 0; /*0x5de8ff*/
    v11 = dword_A8B23C; /*0x5de905*/
    v12 = *(void **)&stru_A8B250.__pad_0[4]; /*0x5de90b*/
    if ( dword_A8B23C ) /*0x5de913*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C) ) /*0x5de917*/
      {
        v11 = dword_A8B23C; /*0x5de91e*/
        v35 = 0; /*0x5de924*/
LABEL_58:
        if ( !v11 || (v34 = 0, (*((unsigned __int8 (__thiscall **)(ObjectClass *))v11->AbstractClass + 47))(v11)) ) /*0x5de93b*/
          v34 = 1; /*0x5de94a*/
        Dialog::IdleProcess((Dialog *)v31, (ObjectClass *)hDlg); /*0x5de951*/
        ShowWindow(hDlg, 0); /*0x5de95f*/
        byte_8316D4 = 0; /*0x5de967*/
        if ( SkirmishDialog::Show(g_hWnd, lParam, (int)v12) == 2 ) /*0x5de976*/
        {
          *(_DWORD *)&stru_A8B250.__pad_0[4] = v12; /*0x5de97a*/
          LoadScenarioClassByIndex((int)v12); /*0x5de980*/
          Session::PrepareGame((Session *)hDlg); /*0x5de987*/
          byte_8316D4 = 1; /*0x5de98f*/
          ShowWindow(hDlg, 5); /*0x5de996*/
          Session::StartGame((Session *)hDlg); /*0x5de99a*/
          CheckGameSettingsChanged(1, 0); /*0x5de9a3*/
          InvalidateRect(hDlg, 0, 0); /*0x5de9ad*/
          return 0; /*0x5de9bf*/
        }
        if ( LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]) ) /*0x5de9c8*/
          SetupMultiplayerLobbyScreen(hDlg, v12, *(int *)&stru_A8B250.__pad_0[4]); /*0x5de9e3*/
        else
          *(_DWORD *)&stru_A8B250.__pad_0[4] = v12; /*0x5de9d1*/
        byte_8316D4 = 1; /*0x5de9eb*/
        ShowWindow(hDlg, 5); /*0x5de9f2*/
        Dialog::ShowPlayerName((Dialog *)hDlg); /*0x5de9f6*/
        Session::StartGame((Session *)hDlg); /*0x5de9fd*/
        v13 = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5dea13*/
        if ( !dword_A8B23C /*0x5dea2f*/
          || !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)
          || (v14 = dword_A8B230[127].ptr_8, (int)v14 > v13) )
        {
          v14 = (void *)v13; /*0x5dea31*/
        }
        ResetLobbyFactionTable((int)v14); /*0x5dea33*/
        Lobby::InvalidateFactionCombos((Lobby *)hDlg); /*0x5dea3a*/
        Lobby::InvalidatePlayerSlots((Lobby *)hDlg); /*0x5dea41*/
        NetworkLobby::UpdateLabels((NetworkLobby *)hDlg); /*0x5dea48*/
        NetworkLobby::FillOptionCombo(); /*0x5dea4d*/
        RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5dea55*/
        v15 = dword_A8B23C; /*0x5dea5a*/
        if ( dword_A8B23C ) /*0x5dea62*/
        {
          if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C) ) /*0x5dea66*/
          {
            v15 = dword_A8B23C; /*0x5dea6d*/
            v16 = 0; /*0x5dea73*/
            goto LABEL_75; /*0x5dea75*/
          }
          v15 = dword_A8B23C; /*0x5dea77*/
        }
        v16 = 1; /*0x5dea7d*/
LABEL_75:
        if ( !v15 || (v17 = (*((int (__thiscall **)(ObjectClass *))v15->AbstractClass + 47))(v15)) != 0 ) /*0x5dea8d*/
          v17 = 1; /*0x5dea8f*/
        if ( v34 && !v17 ) /*0x5dea9b*/
          MultiplayerLobby::FillSlots((MultiplayerLobby *)hDlg); /*0x5dea9f*/
        if ( v35 && !v16 && NetworkLobby::SetupPlayerSlotControls((NetworkLobby *)hDlg) ) /*0x5deaba*/
        {
          *(_DWORD *)&stru_A8B250.__pad_0[36] = 0; /*0x5dead2*/
          memset(v38, 0, sizeof(v38)); /*0x5deadc*/
          v39 = 0; /*0x5deade*/
          v40 = 0; /*0x5deae0*/
          v38[0] = 22; /*0x5deaf5*/
          strcpy((char *)&v38[1], unk_A8B380); /*0x5deb06*/
          Player::BuildListString((Player *)&v38[11] + 3); /*0x5deb13*/
          v18 = dword_A8DA84; /*0x5deb18*/
          for ( i = 1; i < v18; ++i ) /*0x5deb25*/
          {
            Network::SendMessage(&unk_A8E9C0.Socket, (int)v38, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5deb49*/
            Event::Dispatch(); /*0x5deb4e*/
          }
          GameSetup::DisplayPlayers(v32); /*0x5deb5a*/
          CheckGameSettingsChanged(1, 0); /*0x5deb63*/
          return 0; /*0x5deb6b*/
        }
        else
        {
          GameSetup::DisplayPlayers(v32); /*0x5deb79*/
          return 0; /*0x5deb81*/
        }
      }
      v11 = dword_A8B23C; /*0x5de92a*/
    }
    v35 = 1; /*0x5de930*/
    goto LABEL_58; /*0x5de930*/
  }
  if ( (unsigned __int16)nIDDlgItem == 1416 ) /*0x5de6c7*/
  {
    v10 = GetDlgItem(hDlg, 1416); /*0x5de82b*/
    EnableWindow(v10, 0); /*0x5de832*/
    byte_AC0268 = 1; /*0x5de83f*/
    SaveMultiplayerLobbySettings(hDlg, (int)&unk_A8B440); /*0x5de846*/
    g_NetworkOptionsState = 1416; /*0x5de84e*/
    return 0; /*0x5de861*/
  }
  if ( (unsigned __int16)nIDDlgItem <= 0x514u ) /*0x5de6d3*/
  {
    if ( (unsigned __int16)nIDDlgItem < 0x513u ) /*0x5de6df*/
    {
      if ( (unsigned __int16)nIDDlgItem <= 0x418u ) /*0x5de6eb*/
      {
        if ( (unsigned __int16)nIDDlgItem >= 0x411u ) /*0x5de6f7*/
        {
          if ( HIWORD(nIDDlgItem) == 1 && !byte_AC0268 && (unsigned __int8)Settings::CheckString() ) /*0x5de771*/
          {
            v9 = GetComboBoxSelectedDefault(hDlg, (unsigned __int16)nIDDlgItem, -1); /*0x5de784*/
            PlayerSkirmishSlotHandler(hDlg, (unsigned __int16)nIDDlgItem, v9, 2); /*0x5de790*/
            return 0; /*0x5de7a1*/
          }
        }
        else if ( (unsigned __int16)nIDDlgItem == 2 && !byte_AC0268 ) /*0x5de709*/
        {
          v8 = g_UIControlState; /*0x5de70f*/
          if ( g_UIControlState ) /*0x5de717*/
          {
            ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5de71b*/
            __3_YAXPAX_Z(v8); /*0x5de721*/
            g_UIControlState = 0; /*0x5de729*/
          }
          SaveMultiplayerLobbySettings(hDlg, (int)&unk_A8B440); /*0x5de73a*/
          g_NetworkOptionsState = 2; /*0x5de742*/
          return 0; /*0x5de755*/
        }
        return 0; /*0x5def23*/
      }
      if ( (unsigned __int16)nIDDlgItem != 1296 ) /*0x5de7aa*/
        return 0; /*0x5de7bc*/
    }
    goto LABEL_48; /*0x5de7aa*/
  }
  switch ( (__int16)nIDDlgItem ) /*0x5de7d6*/
  {
    case 1310: /*0x5de7d6*/
    case 1311: /*0x5de7d6*/
    case 1312: /*0x5de7d6*/
    case 1313: /*0x5de7d6*/
      goto LABEL_48;
    case 1314: /*0x5de7d6*/
    case 1315: /*0x5de7d6*/
    case 1316: /*0x5de7d6*/
    case 1317: /*0x5de7d6*/
    case 1318: /*0x5de7d6*/
    case 1319: /*0x5de7d6*/
    case 1320: /*0x5de7d6*/
      goto LABEL_45;
    case 1344: /*0x5de7d6*/
      ReadChatMessage((wchar_t **)&v37, (HWND)lParam); /*0x5de7e3*/
      DeleteAndZero::Alt(&v37); /*0x5de7ec*/
      if ( HIWORD(nIDDlgItem) != 1281 ) /*0x5de7fa*/
        return 0; /*0x5de7fa*/
      SendNetworkLobbyChatMessage(hDlg, (int)Math::InitDegToRad, 61680); /*0x5de80f*/
      result = 0; /*0x5de817*/
      break; /*0x5de820*/
    default:
      return 0;
  }
  return result; /*0x5de60a*/
}



// ==== 0x005DF180  SkirmishDialogProc  this=-  sig=csp ====
int __stdcall SkirmishDialogProc(HWND hDlg, int a2, unsigned __int16 a3, HWND a4)
{
  if ( !byte_AC0268 ) /*0x5df189*/
  {
    switch ( a2 ) /*0x5df198*/
    {
      case 273: /*0x5df198*/
        if ( a3 > 0x624u ) /*0x5df262*/
        {
          if ( a3 == 1690 ) /*0x5df395*/
          {
            MEMORY[0xA8B263] = SendDlgItemMessageA(hDlg, 1690, 0xF0u, 0, 0) == 1; /*0x5df3fb*/
          }
          else if ( a3 == 1693 ) /*0x5df39a*/
          {
            LOBYTE(MEMORY[0xA8B264]) = 0; /*0x5df3af*/
            if ( SendDlgItemMessageA(hDlg, 1693, 0xF0u, 0, 0) == 1 ) /*0x5df3c3*/
            {
              LOBYTE(MEMORY[0xA8B264]) = 1; /*0x5df3c6*/
              return 0; /*0x5df3cf*/
            }
          }
        }
        else
        {
          switch ( a3 ) /*0x5df268*/
          {
            case 0x624u: /*0x5df268*/
              MEMORY[0xA8B260] = 0; /*0x5df36d*/
              if ( SendDlgItemMessageA(hDlg, 1572, 0xF0u, 0, 0) == 1 ) /*0x5df381*/
              {
                MEMORY[0xA8B260] = 1; /*0x5df384*/
                return 0; /*0x5df38d*/
              }
              break;
            case 0x3E8u: /*0x5df268*/
              LOBYTE(dword_A8B320) = 0; /*0x5df333*/
              if ( SendDlgItemMessageA(hDlg, 1000, 0xF0u, 0, 0) == 1 ) /*0x5df347*/
              {
                LOBYTE(dword_A8B320) = 1; /*0x5df34e*/
                return 0; /*0x5df357*/
              }
              break;
            case 0x54Du: /*0x5df268*/
              MEMORY[0xA8B261] = 0; /*0x5df2f9*/
              if ( SendDlgItemMessageA(hDlg, 1357, 0xF0u, 0, 0) == 1 ) /*0x5df30d*/
              {
                MEMORY[0xA8B261] = 1; /*0x5df314*/
                return 0; /*0x5df31d*/
              }
              break;
            case 0x54Eu: /*0x5df268*/
              MEMORY[0xA8B262] = 0; /*0x5df2a0*/
              if ( SendDlgItemMessageA(hDlg, 1358, 0xF0u, 0, 0) == 1 ) /*0x5df2b0*/
              {
                MEMORY[0xA8B262] = 1; /*0x5df2bb*/
                if ( !MEMORY[0xA8B258] ) /*0x5df2c3*/
                {
                  MEMORY[0xA8B258] = 1; /*0x5df2d7*/
                  SendDlgItemMessageA(hDlg, 1355, 0xF1u, 1u, 0); /*0x5df2dd*/
                  return 0; /*0x5df2e3*/
                }
              }
              break;
          }
        }
        break;
      case 276: /*0x5df198*/
        if ( GetDlgItem(hDlg, 1321) == a4 ) /*0x5df1e3*/
          MEMORY[0xA8B268] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0); /*0x5df1fd*/
        if ( GetDlgItem(hDlg, 1026) == a4 ) /*0x5df20d*/
          MEMORY[0xA8B25C] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0); /*0x5df220*/
        if ( GetDlgItem(hDlg, 1359) == a4 ) /*0x5df231*/
        {
          MEMORY[0xA8B270] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0); /*0x5df248*/
          return 0; /*0x5df251*/
        }
        break;
      case 1175: /*0x5df198*/
        InitSkirmishDialogControls(hDlg, 1); /*0x5df1b7*/
        return 0; /*0x5df1c0*/
    }
  }
  return 0; /*0x5df1bc*/
}



// ==== 0x005DF410  SendNetworkJoinRequest  this=AbstractClass  sig=ida-proto ====
int __fastcall Network_SendJoinRequest(int a1, unsigned __int8 a2)
{
  wchar_t *String; // eax
  wchar_t *v5; // eax
  char v6; // bl
  int v7; // ebx
  wchar_t *v8; // eax
  void *v9; // [esp+10h] [ebp-1DCh] BYREF
  int v10; // [esp+14h] [ebp-1D8h]
  int v11; // [esp+1Ch] [ebp-1D0h]
  _DWORD v12[113]; // [esp+24h] [ebp-1C8h] BYREF
  __int16 v13; // [esp+1E8h] [ebp-4h]
  char v14; // [esp+1EAh] [ebp-2h]

  v10 = a1; /*0x5df41f*/
  if ( a1 < 1 ) /*0x5df423*/
  {
    String = GetStringCSF(aTxtMustSelectG, 0, g_Str_File_netdlg2_cpp, 3712); /*0x5df436*/
    Dialog::ShowMessage(-1, (size_t)String); /*0x5df442*/
    PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df462*/
    return 0; /*0x5df473*/
  }
  if ( dword_A8DA6C <= 1 || a1 > dword_A8DA6C ) /*0x5df484*/
  {
    v5 = GetStringCSF(aTxtNothingToJo, 0, g_Str_File_netdlg2_cpp, 3719); /*0x5df87b*/
  }
  else if ( strlen(unk_A8B380) ) /*0x5df48f*/
  {
    if ( !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC117C)) /*0x5df6c6*/
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1180))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1184))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1188))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC118C))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1190))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1194))
      || (String::Assign((char **)&v9, unk_A8B380), v6 = Network_Send(&v9), DeleteAndZero(&v9), v6) )
    {
      v8 = GetStringCSF(aErrorNameisres, 0, g_Str_File_netdlg2_cpp, 3742); /*0x5df82c*/
      Dialog::ShowMessage(-1, (size_t)v8); /*0x5df838*/
      PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df858*/
      return 0; /*0x5df869*/
    }
    v7 = v10; /*0x5df6d1*/
    if ( *(_BYTE *)(*(_DWORD *)(dword_A8DA60 + 4 * v10) + 52) ) /*0x5df6d8*/
    {
      memset(v12, 0, sizeof(v12)); /*0x5df704*/
      v13 = 0; /*0x5df706*/
      v14 = 0; /*0x5df708*/
      v12[0] = 6; /*0x5df713*/
      strcpy((char *)&v12[1], unk_A8B380); /*0x5df72e*/
      strcpy((char *)&v12[6], byte_ABFF7C); /*0x5df750*/
      *(_DWORD *)((char *)&v12[11] + 3) = Session::GetPlayerOption(dword_A8B238); /*0x5df768*/
      *(_DWORD *)((char *)&v12[12] + 3) = Session::GetPlayerColor(dword_A8B238); /*0x5df776*/
      *(_DWORD *)((char *)&v12[14] + 3) = NetworkBuffer::GetField2(&dword_A8ECE0); /*0x5df784*/
      *(_DWORD *)((char *)&v12[15] + 3) = NetworkBuffer::GetField3(&dword_A8ECE0); /*0x5df799*/
      *(_DWORD *)((char *)&v12[16] + 3) = dword_AC026C; /*0x5df7a2*/
      *(_DWORD *)((char *)&v12[18] + 3) = dword_AC0270; /*0x5df7a6*/
      *(_DWORD *)((char *)&v12[17] + 3) = dword_AC0274; /*0x5df7aa*/
      *(_DWORD *)((char *)&v12[19] + 3) = GameOptions::GetEntry(); /*0x5df7bf*/
      *(_DWORD *)((char *)&v12[21] + 3) = a2; /*0x5df7c3*/
      Network::SendMessage((int)unk_A8E9C0, (int)v12, 455, 1, *(_DWORD *)(dword_A8DA60 + 4 * v7) + 40, 0, 0); /*0x5df7e3*/
      dword_AC0230 = Timer::GetTicks(); /*0x5df7fa*/
      dword_AC0234 = v11; /*0x5df800*/
      dword_AC0238 = 600; /*0x5df806*/
      return 1; /*0x5df81a*/
    }
    v5 = GetStringCSF((wchar_t *)aTxtGameIsClose, 0, g_Str_File_netdlg2_cpp, 3750); /*0x5df6f0*/
  }
  else
  {
    v5 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_netdlg2_cpp, 3727); /*0x5df4ac*/
  }
  Dialog::ShowMessage(-1, (size_t)v5); /*0x5df888*/
  PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df8a7*/
  return 0; /*0x5df469*/
}



// ==== 0x005DF8C0  BroadcastNetworkMessage  this=AbstractClass  sig=ida-proto ====
int __fastcall Network_BroadcastMessage(int a1)
{
  int i; // esi
  int result; // eax
  _DWORD v4[113]; // [esp+Ch] [ebp-1C8h] BYREF
  __int16 v5; // [esp+1D0h] [ebp-4h]
  char v6; // [esp+1D2h] [ebp-2h]

  memset(v4, 0, sizeof(v4)); /*0x5df8da*/
  v5 = 0; /*0x5df8dc*/
  v6 = 0; /*0x5df8de*/
  v4[0] = 10; /*0x5df8e9*/
  strcpy((char *)&v4[1], unk_A8B380); /*0x5df900*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x5df915*/
  {
    Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 1, *(_DWORD *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5df939*/
    Event::Dispatch(); /*0x5df93e*/
  }
  if ( (g_NetworkSettingsState == 1 || g_NetworkSettingsState == 2) /*0x5df968*/
    && !Network::IsBroadcastAddr((_BYTE *)(*(_DWORD *)(dword_A8DA60 + 4 * a1) + 40)) )
  {
    Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 1, *(_DWORD *)(dword_A8DA60 + 4 * a1) + 40, 0, 0); /*0x5df991*/
  }
  Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 0, 0, 0, 0); /*0x5df9ad*/
  Game::ResetFlags(); /*0x5df9b2*/
  GameClass::InitDifficultyButtons(); /*0x5df9b7*/
  result = PtrVector::Destroy(&stru_A8DA74); /*0x5df9c1*/
  word_A8D610 = 0; /*0x5df9c6*/
  return result; /*0x5df9cf*/
}



// ==== 0x005DF9E0  SendNetworkHeartbeat  this=-  sig=csp ====
int __fastcall SendNetworkHeartbeat(int a1, int a2, int a3, int a4)
{
  int Ticks; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int result; // eax
  int v11; // esi
  unsigned int v12; // edx
  int v13; // [esp+10h] [ebp-1D4h]
  _DWORD v15[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v16; // [esp+1E0h] [ebp-4h]
  char v17; // [esp+1E2h] [ebp-2h]

  if ( (byte_AC01BC & 1) == 0 ) /*0x5df9fb*/
  {
    byte_AC01BC |= 1u; /*0x5dfa06*/
    dword_AC0220 = Timer::GetTicks(); /*0x5dfa11*/
    dword_AC0228 = 0; /*0x5dfa16*/
    atexit(nullsub_27); /*0x5dfa21*/
  }
  if ( (byte_AC01BC & 2) == 0 ) /*0x5dfa30*/
  {
    byte_AC01BC |= 2u; /*0x5dfa3c*/
    dword_AC0200 = Timer::GetTicks(); /*0x5dfa47*/
    dword_AC0208 = 0; /*0x5dfa4c*/
    atexit(nullsub_26); /*0x5dfa57*/
  }
  if ( (byte_AC01BC & 4) == 0 ) /*0x5dfa66*/
  {
    byte_AC01BC |= 4u; /*0x5dfa72*/
    dword_ABFF70 = Timer::GetTicks(); /*0x5dfa7d*/
    dword_ABFF78 = 0; /*0x5dfa82*/
    atexit(nullsub_25); /*0x5dfa8d*/
  }
  if ( a4 ) /*0x5dfa9c*/
  {
    dword_AC0220 = Timer::GetTicks(); /*0x5dfaac*/
    dword_AC0228 = 120; /*0x5dfab5*/
    dword_AC0224 = v13; /*0x5dfabf*/
    Ticks = Timer::GetTicks(); /*0x5dfac4*/
    dword_AC0208 = 35; /*0x5dfad2*/
    dword_AC0200 = Ticks; /*0x5dfadc*/
    dword_AC0204 = v13; /*0x5dfae1*/
    dword_ABFF70 = Timer::GetTicks(); /*0x5dfaec*/
    dword_ABFF74 = v13; /*0x5dfafa*/
    dword_ABFF78 = 83; /*0x5dfaff*/
  }
  v6 = dword_AC0228; /*0x5dfb0a*/
  if ( dword_AC0220 == -1 ) /*0x5dfb13*/
  {
LABEL_12:
    if ( v6 && !a1 ) /*0x5dfb31*/
      goto LABEL_18; /*0x5dfb31*/
    goto LABEL_14; /*0x5dfb31*/
  }
  v7 = Timer::GetTicks() - dword_AC0220; /*0x5dfb1f*/
  if ( v7 < v6 ) /*0x5dfb27*/
  {
    v6 -= v7; /*0x5dfb29*/
    goto LABEL_12; /*0x5dfb29*/
  }
LABEL_14:
  dword_AC0220 = Timer::GetTicks(); /*0x5dfb37*/
  dword_AC0224 = v13; /*0x5dfb4e*/
  dword_AC0228 = 120; /*0x5dfb54*/
  if ( Dialog::GetCurrentType() != 188 || a1 ) /*0x5dfb68*/
  {
    memset(v15, 0, sizeof(v15)); /*0x5dfb79*/
    v16 = 0; /*0x5dfb7b*/
    v17 = 0; /*0x5dfb7d*/
    v15[0] = 0; /*0x5dfb88*/
    strcpy((char *)&v15[1], unk_A8B380); /*0x5dfb9d*/
    Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfbb7*/
    if ( dword_A8D5FC ) /*0x5dfbc2*/
      Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfbdb*/
  }
LABEL_18:
  if ( (int)g_NetworkSetupConfig <= 0 || (int)g_NetworkSetupConfig >= dword_A8DA6C ) /*0x5dfbef*/
  {
LABEL_24:
    if ( !a2 ) /*0x5dfc1f*/
      goto LABEL_27; /*0x5dfc1f*/
    goto LABEL_25; /*0x5dfc1f*/
  }
  v8 = dword_AC0208; /*0x5dfbf6*/
  if ( dword_AC0200 != -1 ) /*0x5dfbff*/
  {
    v9 = Timer::GetTicks() - dword_AC0200; /*0x5dfc0b*/
    if ( v9 >= v8 ) /*0x5dfc13*/
      goto LABEL_25; /*0x5dfc13*/
    v8 -= v9; /*0x5dfc15*/
  }
  if ( v8 ) /*0x5dfc19*/
    goto LABEL_24; /*0x5dfc19*/
LABEL_25:
  dword_AC0200 = Timer::GetTicks(); /*0x5dfc25*/
  dword_AC0204 = v13; /*0x5dfc3c*/
  dword_AC0208 = 35; /*0x5dfc41*/
  memset(v15, 0, sizeof(v15)); /*0x5dfc52*/
  v16 = 0; /*0x5dfc60*/
  v17 = 0; /*0x5dfc62*/
  v15[0] = 2; /*0x5dfc63*/
  strcpy((char *)&v15[1], ToWideStringChar(*(char **)(dword_A8DA60 + 4 * g_NetworkSetupConfig))); /*0x5dfc8f*/
  Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfca9*/
  if ( dword_A8D5FC ) /*0x5dfcb4*/
    Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfccd*/
LABEL_27:
  result = dword_ABFF70; /*0x5dfcd2*/
  v11 = dword_ABFF78; /*0x5dfcd7*/
  if ( dword_ABFF70 != -1 ) /*0x5dfce0*/
  {
    result = Timer::GetTicks() - dword_ABFF70; /*0x5dfcec*/
    if ( result >= v11 ) /*0x5dfcf4*/
      goto LABEL_31; /*0x5dfcf4*/
    v11 -= result; /*0x5dfcf6*/
  }
  if ( v11 ) /*0x5dfcfa*/
    goto LABEL_32; /*0x5dfcfa*/
LABEL_31:
  if ( g_NetworkSettingsState >= 2 ) /*0x5dfd03*/
  {
LABEL_32:
    if ( !a3 ) /*0x5dfd0c*/
      return result; /*0x5dfd0c*/
  }
  dword_ABFF70 = Timer::GetTicks(); /*0x5dfd12*/
  dword_ABFF74 = v13; /*0x5dfd29*/
  dword_ABFF78 = 83; /*0x5dfd2e*/
  memset(v15, 0, sizeof(v15)); /*0x5dfd3f*/
  v16 = 0; /*0x5dfd41*/
  v17 = 0; /*0x5dfd43*/
  v15[0] = 4; /*0x5dfd58*/
  v12 = dword_A8B394; /*0x5dfd66*/
  strcpy((char *)&v15[1], unk_A8B380); /*0x5dfd6f*/
  *(_DWORD *)((char *)&v15[11] + 3) = dword_A8B37C; /*0x5dfd86*/
  *(_DWORD *)((char *)&v15[12] + 3) = v12; /*0x5dfd95*/
  result = Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfd99*/
  if ( dword_A8D5FC ) /*0x5dfda4*/
    return Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfdbd*/
  return result; /*0x5dfdc2*/
}



// ==== 0x005DFDD0  nullsub_25  this=-  sig=ida-proto ====
void __cdecl nullsub_25()
{
  ; /*0x5dfdd0*/
}



// ==== 0x005DFDE0  nullsub_26  this=-  sig=ida-proto ====
void __cdecl nullsub_26()
{
  ; /*0x5dfde0*/
}



// ==== 0x005DFDF0  nullsub_27  this=-  sig=ida-proto ====
void __cdecl nullsub_27()
{
  ; /*0x5dfdf0*/
}



// ==== 0x005DFE00  SendNetworkPlayerOptions  this=Network  sig=csp ====
char __fastcall SendNetworkPlayerOptions(_DWORD *a1, int a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v6; // ebx
  char *v7; // eax
  char *v8; // eax
  int v9[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v10; // [esp+1D4h] [ebp-4h]
  char v11; // [esp+1D6h] [ebp-2h]

  if ( *a1 || byte_A8D60C ) /*0x5dfe1e*/
  {
    if ( *a1 != 2 ) /*0x5dff1a*/
      return 0; /*0x5dff1a*/
    v6 = (char *)(a1 + 1); /*0x5dff20*/
    v7 = ToWideStringChar((char *)word_A8D610); /*0x5dff28*/
    if ( _strcmpi(v6, v7) || !wcslen(word_A8D610) || byte_A8D60C || g_NetworkSettingsState < 2 ) /*0x5dff68*/
    {
      return 0; /*0x5e00a0*/
    }
    else
    {
      memset(v9, 0, sizeof(v9)); /*0x5dff7d*/
      v10 = 0; /*0x5dff7f*/
      v11 = 0; /*0x5dff81*/
      v9[0] = 3; /*0x5dff8c*/
      strcpy((char *)&v9[1], unk_A8B380); /*0x5dffa7*/
      strcpy((char *)&v9[6], byte_ABFF7C); /*0x5dffc9*/
      *(int *)((char *)&v9[11] + 3) = Session::GetPlayerOption(dword_A8B238); /*0x5dffe1*/
      *(int *)((char *)&v9[12] + 3) = Session::GetPlayerColor(dword_A8B238); /*0x5dffef*/
      *(int *)((char *)&v9[13] + 3) = WideString::Hash(word_A8D610); /*0x5dfffe*/
      *(int *)((char *)&v9[20] + 3) = dword_A8DA8C; /*0x5e0009*/
      *(int *)((char *)&v9[21] + 3) = dword_A8DA8C == (_DWORD)g_MPCooperativeState; /*0x5e0019*/
      if ( dword_A8DA84 ) /*0x5e001d*/
      {
        if ( *(_DWORD *)(*(_DWORD *)dword_A8DA78 + 107) != -1 ) /*0x5e0038*/
          *(int *)((char *)&v9[21] + 3) = 0; /*0x5e003a*/
        Network::SendMessage(unk_A8E9C0, (int)v9, 455, 1, a2, 0, 0); /*0x5e0058*/
        v8 = ToWideStringChar(*(char **)dword_A8DA78); /*0x5e0065*/
        if ( !_strcmpi(v6, v8) ) /*0x5e006c*/
        {
          CheckGameSettingsChanged(1, 1); /*0x5e007c*/
          if ( dword_A8B23C ) /*0x5e0089*/
            (*(void (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 96))(dword_A8B23C); /*0x5e008d*/
        }
        return 1; /*0x5e0093*/
      }
      else
      {
        return 1; /*0x5e0022*/
      }
    }
  }
  else
  {
    if ( wcslen(word_A8D610) ) /*0x5dfe29*/
    {
      if ( !byte_A8D60E || (v3 = ToWideStringChar((char *)word_A8D610), !_strcmpi(unk_A8B380, v3)) ) /*0x5dfe52*/
      {
        v4 = ToWideStringChar((char *)word_A8D610); /*0x5dfe67*/
        if ( _strcmpi(unk_A8B380, v4) && !byte_A8ED5C ) /*0x5dfe85*/
          return 1; /*0x5dfe93*/
        memset(v9, 0, sizeof(v9)); /*0x5dfe9f*/
        v10 = 0; /*0x5dfea1*/
        v11 = 0; /*0x5dfea3*/
        v9[0] = 1; /*0x5dfea9*/
        strcpy((char *)&v9[1], ToWideStringChar((char *)word_A8D610)); /*0x5dfed4*/
        *(int *)((char *)&v9[11] + 3) = *(int *)((char *)&v9[11] + 3) & 0xFFFFFFFE | byte_A8D60E & 1; /*0x5dfef6*/
        Network::SendMessage(unk_A8E9C0, (int)v9, 455, 1, a2, 0, 0); /*0x5dff05*/
      }
    }
    return 1; /*0x5dff0d*/
  }
}


