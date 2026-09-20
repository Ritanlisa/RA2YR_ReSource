// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005D0070  SessionClass::loadSettings  this=SessionClass  sig=csp ====
void __thiscall SessionClass::loadSettings(int this)
{
  int i; // ebp
  void **v3; // edi
  int j; // ebp
  CCINIClass *v5; // ecx
  SessionClass *v6; // edi
  CCINIClass *v7; // eax
  CCINIClass *v8; // eax
  CCINIClass *v9; // eax
  int v10; // ebx
  int v11; // edi

  for ( i = 0; i < *(_DWORD *)(this + 76); ++i ) /*0x5d007f*/
  {
    v3 = *(void ***)(*(_DWORD *)(this + 64) + 4 * i); /*0x5d0084*/
    if ( v3 ) /*0x5d0089*/
    {
      DeleteAndZero::Alt(v3 + 3); /*0x5d008e*/
      __3_YAXPAX_Z(v3); /*0x5d0094*/
    }
  }
  for ( j = 0; j < *(_DWORD *)(this + 100); ++j ) /*0x5d00ab*/
  {
    v5 = *(CCINIClass **)(this + 88); /*0x5d00ad*/
    v6 = *(SessionClass **)&v5->__pad_0[4 * j]; /*0x5d00b0*/
    if ( v6 ) /*0x5d00b5*/
    {
      DeleteAndZero(*(_DWORD *)&v5->__pad_0[4 * j]); /*0x5d00b9*/
      __3_YAXPAX_Z(v6); /*0x5d00bf*/
    }
  }
  v7 = *(CCINIClass **)(this + 88); /*0x5d00cf*/
  *(_DWORD *)(this + 84) = &vt_VectorClass_MapSelection; /*0x5d00d2*/
  if ( v7 && *(_BYTE *)(this + 97) ) /*0x5d00dd*/
  {
    __3_YAXPAX_Z(v7); /*0x5d00e3*/
    *(_DWORD *)(this + 88) = 0; /*0x5d00eb*/
  }
  *(_BYTE *)(this + 97) = 0; /*0x5d00ee*/
  *(_DWORD *)(this + 92) = 0; /*0x5d00f1*/
  v8 = *(CCINIClass **)(this + 64); /*0x5d00f4*/
  *(_DWORD *)(this + 60) = &vt_VectorClass_MSTextEntry; /*0x5d00f7*/
  if ( v8 && *(_BYTE *)(this + 73) ) /*0x5d0102*/
  {
    __3_YAXPAX_Z(v8); /*0x5d0108*/
    *(_DWORD *)(this + 64) = 0; /*0x5d0110*/
  }
  *(_BYTE *)(this + 73) = 0; /*0x5d0113*/
  *(_DWORD *)(this + 68) = 0; /*0x5d0116*/
  v9 = *(CCINIClass **)(this + 40); /*0x5d0119*/
  *(_DWORD *)(this + 36) = &vt_VectorClass_Point2D; /*0x5d011c*/
  if ( v9 && *(_BYTE *)(this + 49) ) /*0x5d0127*/
  {
    __3_YAXPAX_Z(v9); /*0x5d012d*/
    *(_DWORD *)(this + 40) = 0; /*0x5d0135*/
  }
  *(_BYTE *)(this + 49) = 0; /*0x5d013b*/
  *(_DWORD *)(this + 44) = 0; /*0x5d013e*/
  DeleteAndZero(this + 32); /*0x5d0141*/
  v10 = 2; /*0x5d0149*/
  v11 = this + 32; /*0x5d014e*/
  do /*0x5d015c*/
  {
    v11 -= 4; /*0x5d0151*/
    DeleteAndZero(v11); /*0x5d0156*/
    --v10; /*0x5d015b*/
  }
  while ( v10 ); /*0x5d015c*/
  DeleteAndZero::Alt((void **)(this + 16)); /*0x5d0161*/
  DeleteAndZero(this + 12); /*0x5d0169*/
  DeleteAndZero(this + 8); /*0x5d0170*/
  DeleteAndZero(this + 4); /*0x5d0178*/
  DeleteAndZero(this); /*0x5d017f*/
}


// ==== 0x005D0190  ObjectClass::method_5D0190  this=ObjectClass  sig=csp ====
int __thiscall sub_5D0190(_DWORD *this, const char *a2)
{
  int v3; // esi
  int v5; // esi
  void *v6; // [esp+8h] [ebp-4h] BYREF

  String::Assign((char **)&v6, a2); /*0x5d019e*/
  String::ToLower((const char **)&v6); /*0x5d01a7*/
  v3 = 0; /*0x5d01af*/
  if ( (int)this->customSound <= 0 ) /*0x5d01b3*/
  {
LABEL_6:
    DeleteAndZero(&v6); /*0x5d0202*/
    return 0; /*0x5d0210*/
  }
  while ( !String::NotEquals(*(const char ***)(this->q058 + 4 * v3), 0) ) /*0x5d01c4*/
  {
LABEL_5:
    if ( ++v3 >= this->customSound ) /*0x5d0200*/
      goto LABEL_6; /*0x5d0200*/
  }
  String::AssignFromPtr((char **)&a2, *(const char ***)(this->q058 + 4 * v3)); /*0x5d01d1*/
  String::ToLower(&a2); /*0x5d01da*/
  if ( !String::Compare((const char **)&v6, &a2) ) /*0x5d01e8*/
  {
    DeleteAndZero((void **)&a2); /*0x5d01f5*/
    goto LABEL_5; /*0x5d01f5*/
  }
  v5 = *(_DWORD *)(this->q058 + 4 * v3); /*0x5d021a*/
  DeleteAndZero((void **)&a2); /*0x5d021d*/
  DeleteAndZero(&v6); /*0x5d0226*/
  return v5; /*0x5d020b*/
}


// ==== 0x005D0240  ObjectClass::method_5D0240  this=ObjectClass  sig=csp ====
char **__thiscall sub_5D0240(int *this, char **a2, char a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // ecx

  v3 = *(this + 25); /*0x5d0242*/
  v4 = 0; /*0x5d0245*/
  if ( v3 <= 0 ) /*0x5d024a*/
  {
LABEL_5:
    String::Assign(a2, 0); /*0x5d0264*/
    return a2; /*0x5d0271*/
  }
  else
  {
    v5 = *(this + 22); /*0x5d024c*/
    v6 = v5; /*0x5d0253*/
    while ( a3 != *(_BYTE *)(*(_DWORD *)v6 + 4) ) /*0x5d025a*/
    {
      ++v4; /*0x5d025c*/
      v6 += 4; /*0x5d025d*/
      if ( v4 >= v3 ) /*0x5d0262*/
        goto LABEL_5; /*0x5d0262*/
    }
    String::AssignFromPtr(a2, *(const char ***)(v5 + 4 * v4)); /*0x5d0283*/
    return a2; /*0x5d0288*/
  }
}


// ==== 0x005D0290  MSChoiceClass::DeleteAndZero  this=ObjectClass  sig=csp ====
char *__thiscall MSChoiceClass::DeleteAndZero(char *this, ObjectClass *aP1)
{
  void **v3; // ebp
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v8; // [esp+10h] [ebp-4h] BYREF

  v3 = (void **)(this + 12); /*0x5d0299*/
  *(_DWORD *)this = 0; /*0x5d029f*/
  this->vtable2 = 0; /*0x5d02a1*/
  this->vtable3 = 0; /*0x5d02a4*/
  WideString::Assign((wchar_t **)this + 3, 0); /*0x5d02a7*/
  unknown_libname_74(&v8); /*0x5d02b0*/
  v4 = String::Tokenize2((const wchar_t **)aP1, 0, (wchar_t *)MEMORY[0x8304FC], (void **)&v8); /*0x5d02cf*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d02d1*/
    *(_DWORD *)this = Pipe::GetField((const wchar_t **)&v8); /*0x5d02e3*/
  v5 = String::Tokenize2((const wchar_t **)aP1, v4, (wchar_t *)MEMORY[0x8304FC], (void **)&v8); /*0x5d02fb*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d02fd*/
    this->vtable2 = Pipe::GetField((const wchar_t **)&v8); /*0x5d030f*/
  v6 = String::Tokenize2((const wchar_t **)aP1, v5, (wchar_t *)MEMORY[0x8304FC], (void **)&v8); /*0x5d0328*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d032a*/
    this->vtable3 = Pipe::GetField((const wchar_t **)&v8); /*0x5d033c*/
  String::Tokenize2((const wchar_t **)aP1, v6, (wchar_t *)MEMORY[0x8304FC], (void **)&v8); /*0x5d034c*/
  if ( WideString::Length((const wchar_t **)&v8) ) /*0x5d0355*/
    WideString::Reassign_Alt(v3, (const wchar_t **)&v8); /*0x5d0365*/
  DeleteAndZero::Alt((void **)&v8); /*0x5d036e*/
  return this; /*0x5d0375*/
}


// ==== 0x005D0380  String::SplitComma  this=ObjectClass  sig=csp ====
int __thiscall String::SplitComma(int this, ObjectClass *aP1)
{
  ObjectClass *v3; // ebx
  ObjectClass *v4; // ebx
  int v5; // eax
  ObjectClass *v6; // ebx
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-4h] BYREF

  String::Assign((char **)this, 0); /*0x5d0389*/
  *(_DWORD *)(this + 4) = 0; /*0x5d0392*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0395*/
  *(_DWORD *)(this + 12) = 0; /*0x5d0398*/
  unknown_libname_73(&v10); /*0x5d039b*/
  v3 = (ObjectClass *)String::Tokenize((const char **)aP1, 0, &MEMORY[0x817F70], (ObjectClass *)&v10); /*0x5d03ba*/
  if ( String::Length((const char **)&v10) ) /*0x5d03bc*/
    String::Reassign((char **)this, (AbstractClass *)&v10); /*0x5d03cc*/
  v4 = (ObjectClass *)String::Tokenize((const char **)aP1, (int)v3, &MEMORY[0x817F70], (ObjectClass *)&v10); /*0x5d03e7*/
  if ( String::Length((const char **)&v10) ) /*0x5d03e9*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d03f6*/
    *(_DWORD *)(this + 4) = v5; /*0x5d03fb*/
  }
  v6 = (ObjectClass *)String::Tokenize((const char **)aP1, (int)v4, &MEMORY[0x817F70], (ObjectClass *)&v10); /*0x5d0414*/
  if ( String::Length((const char **)&v10) ) /*0x5d0416*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d0423*/
    *(_DWORD *)(this + 8) = v7; /*0x5d0428*/
  }
  String::Tokenize((const char **)aP1, (int)v6, &MEMORY[0x817F70], (ObjectClass *)&v10); /*0x5d0438*/
  if ( String::Length((const char **)&v10) ) /*0x5d0441*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d044e*/
    *(_DWORD *)(this + 12) = v8; /*0x5d0453*/
  }
  DeleteAndZero((void **)&v10); /*0x5d045a*/
  return this; /*0x5d0461*/
}


// ==== 0x005D0470  Audio::ParseVolume  this=VOID_PTR  sig=csp ====
int __thiscall Audio::ParseVolume(int this, const char **a1, ObjectClass *aP2)
{
  int v4; // ebp
  int v5; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  ObjectClass *v8; // [esp+8h] [ebp-4h] BYREF

  String::Assign((char **)this, 0); /*0x5d0478*/
  *(_BYTE *)(this + 4) = 0; /*0x5d0483*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0487*/
  *(_DWORD *)(this + 12) = 255; /*0x5d048e*/
  if ( String::NotEquals(a1, 0) && Audio::IsSoundEnabled() ) /*0x5d04a2*/
  {
    unknown_libname_73(&v8); /*0x5d04b5*/
    v4 = String::Tokenize((const char **)aP2, 0, &MEMORY[0x817F70], (ObjectClass *)&v8); /*0x5d04d5*/
    unknown_libname_73(&v7); /*0x5d04d7*/
    String::Tokenize((const char **)aP2, v4, &MEMORY[0x817F70], (ObjectClass *)&v7); /*0x5d04e9*/
    if ( String::NotEquals((const char **)&v7, 0) ) /*0x5d04f4*/
    {
      __1_Timevec_std__QAE_XZ((std::_Timevec *)&v7); /*0x5d0503*/
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
    if ( *(int *)(this + 12) > 0 && String::NotEquals((const char **)&v8, 0) ) /*0x5d054f*/
      String::Reassign((char **)this, (AbstractClass *)a1); /*0x5d055f*/
    DeleteAndZero((void **)&v7); /*0x5d0568*/
    DeleteAndZero((void **)&v8); /*0x5d0571*/
  }
  return this; /*0x5d0578*/
}


// ==== 0x005D0580  ObjectClass::j_DeleteAndZero  this=AbstractClass  sig=csp ====
// attributes: thunk
void __thiscall j_DeleteAndZero(void **this)
{
  DeleteAndZero(this); /*0x5d0580*/
}


// ==== 0x005D0590  ObjectClass::nullsub_24  this=ObjectClass  sig=csp ====
void nullsub_24()
{
  ; /*0x5d0590*/
}


// ==== 0x005D05A0  _DynamicVectorClass_VPoint2D::FreeData  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42_::sub_5D05A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d05a6*/
  *(_DWORD *)(this + 16) = 0; /*0x5d05a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d05b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d05b6*/
    *(_DWORD *)(this + 4) = 0; /*0x5d05be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d05c1*/
  *(_DWORD *)(this + 8) = 0; /*0x5d05c4*/
}


// ==== 0x005D05D0  _DynamicVectorClass_VPoint2D::GetCount_8B  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42_::sub_5D05D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d05d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x5d05e5*/
  else
    return 0; /*0x5d05d7*/
}


// ==== 0x005D05F0  _VectorClass_VPoint2D::Count  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Point2D::Count(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = this->Items; /*0x5d05f0*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x5d05ff*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x5d0606*/
  return a2; /*0x5d0601*/
}


// ==== 0x005D0610  _DynamicVectorClass_PAVMSTextEntry::FreeData_0  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42_::sub_5D0610(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d0616*/
  *(_DWORD *)(this + 16) = 0; /*0x5d0619*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d0620*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0626*/
    *(_DWORD *)(this + 4) = 0; /*0x5d062e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d0631*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0634*/
}


// ==== 0x005D0640  _DynamicVectorClass_PAVMSTextEntry::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42_::sub_5D0640(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d0640*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d0655*/
  else
    return 0; /*0x5d0647*/
}


// ==== 0x005D0660  _VectorClass_PAVMSTextEntry::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSTextEntry::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d066a*/
}


// ==== 0x005D0670  _DynamicVectorClass_PAVMapSelection::FreeData_1  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_42_::sub_5D0670(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d0676*/
  *(_DWORD *)(this + 16) = 0; /*0x5d0679*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d0680*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0686*/
    *(_DWORD *)(this + 4) = 0; /*0x5d068e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d0691*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0694*/
}


// ==== 0x005D06A0  _DynamicVectorClass_PAVMapSelection::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_42_::sub_5D06A0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d06a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d06b5*/
  else
    return 0; /*0x5d06a7*/
}


// ==== 0x005D06C0  _VectorClass_PAVMapSelection::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapSelection::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d06ca*/
}


// ==== 0x005D06D0  _DynamicVectorClass_PAVMapStage::ddtor  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d06d6*/
  *(_DWORD *)(this + 16) = 0; /*0x5d06d9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d06e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d06e6*/
    *(_DWORD *)(this + 4) = 0; /*0x5d06ee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d06f1*/
  *(_DWORD *)(this + 8) = 0; /*0x5d06f4*/
}


// ==== 0x005D0700  _DynamicVectorClass_PAVMapStage::Draw  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d0700*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d0715*/
  else
    return 0; /*0x5d0707*/
}


// ==== 0x005D0720  _VectorClass_PAVMapStage::GetFrame  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_26_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d072a*/
}


// ==== 0x005D0730  _DynamicVectorClass_PAVMSAnimEntry::FreeData  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26_::sub_5D0730(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d0736*/
  *(_DWORD *)(this + 16) = 0; /*0x5d0739*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d0740*/
  {
    __3_YAXPAX_Z(v2); /*0x5d0746*/
    *(_DWORD *)(this + 4) = 0; /*0x5d074e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d0751*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0754*/
}


// ==== 0x005D0760  _DynamicVectorClass_PAVMSAnimEntry::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26_::sub_5D0760(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d0760*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d0775*/
  else
    return 0; /*0x5d0767*/
}


// ==== 0x005D0780  _VectorClass_PAVMSAnimEntry::GetFrame  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_42_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d078a*/
}


// ==== 0x005D0790  _DynamicVectorClass_PAVMSSfxEntry::FreeData_0  this=DynamicVector  sig=csp ====
void __thiscall MSPCXAnim_26_::sub_5D0790(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d0796*/
  *(_DWORD *)(this + 16) = 0; /*0x5d0799*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d07a0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d07a6*/
    *(_DWORD *)(this + 4) = 0; /*0x5d07ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d07b1*/
  *(_DWORD *)(this + 8) = 0; /*0x5d07b4*/
}


// ==== 0x005D07C0  _DynamicVectorClass_PAVMSSfxEntry::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSPCXAnim_26_::sub_5D07C0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d07c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d07d5*/
  else
    return 0; /*0x5d07c7*/
}


// ==== 0x005D07E0  _VectorClass_PAVMSSfxEntry::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfxEntry::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d07ea*/
}


// ==== 0x005D07F0  _VectorClass_VPoint2D::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Point2D::Get(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = *(this + 2); /*0x5d07fb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d0800*/
  {
    v3 = 0; /*0x5d0802*/
    if ( v2 <= 0 ) /*0x5d0806*/
      return 1; /*0x5d0836*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5d0808*/
    v5 = (_DWORD *)*(this + 1); /*0x5d080b*/
    v6 = (_DWORD *)(v4 + 4); /*0x5d080e*/
    v7 = v4 - (_DWORD)v5; /*0x5d0811*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d0823*/
    {
      ++v3; /*0x5d0825*/
      v6 += 2; /*0x5d0826*/
      v5 += 2; /*0x5d0829*/
      if ( v3 >= v2 ) /*0x5d082e*/
        return 1; /*0x5d082e*/
    }
  }
  return 0; /*0x5d0830*/
}


// ==== 0x005D0850  _VectorClass_VPoint2D::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Point2D::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx

  if ( a2 ) /*0x5d085c*/
  {
    v4 = a3; /*0x5d0862*/
    *((_BYTE *)this + 12) = 0; /*0x5d0866*/
    if ( a3 ) /*0x5d086c*/
    {
      v6 = a3; /*0x5d0894*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5d0876*/
      if ( v5 ) /*0x5d0880*/
        v6 = v5; /*0x5d0885*/
      else
        v6 = 0; /*0x5d088d*/
    }
    *((_BYTE *)this + 12) = 1; /*0x5d089c*/
    if ( v6 ) /*0x5d08a0*/
    {
      if ( this->Items ) /*0x5d08ab*/
      {
        v8 = this->Capacity; /*0x5d08b2*/
        if ( a2 < v8 ) /*0x5d08b7*/
          v8 = a2; /*0x5d08b9*/
        v9 = 0; /*0x5d08bb*/
        if ( v8 > 0 ) /*0x5d08bf*/
        {
          do /*0x5d08d7*/
          {
            v10 = this->Items; /*0x5d08c1*/
            ++v9; /*0x5d08c4*/
            v6[2 * v9 - 2] = *(_DWORD *)(v10 + 8 * v9 - 8); /*0x5d08cb*/
            v6[2 * v9 - 1] = *(_DWORD *)(v10 + 8 * v9 - 4); /*0x5d08d3*/
          }
          while ( v9 < v8 ); /*0x5d08d7*/
          v4 = a3; /*0x5d08d9*/
        }
        if ( *((_BYTE *)this + 13) ) /*0x5d08dd*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d08e8*/
          this->Items = 0; /*0x5d08f0*/
        }
      }
      this->Items = v6; /*0x5d08f9*/
      this->Capacity = a2; /*0x5d0901*/
      *((_BYTE *)this + 13) = v4 == 0; /*0x5d0904*/
      return 1; /*0x5d090a*/
    }
    else
    {
      return 0; /*0x5d08a5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d0914*/
    return 1; /*0x5d091a*/
  }
}


// ==== 0x005D0920  _VectorClass_VPoint2D::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Point2D::Set(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d092d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d0933*/
    *(_DWORD *)(this + 4) = 0; /*0x5d093b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d093e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0941*/
}


// ==== 0x005D0950  _VectorClass_VPoint2D::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Point2D::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d0950*/
    return 0; /*0x5d095e*/
  v3 = *(_DWORD *)(this + 8); /*0x5d0964*/
  result = 0; /*0x5d0967*/
  if ( v3 <= 0 ) /*0x5d096b*/
    return -1; /*0x5d098c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d0971*/
  {
    if ( ++result >= v3 ) /*0x5d098a*/
      return -1; /*0x5d098a*/
  }
  return result; /*0x5d095b*/
}


// ==== 0x005D09A0  _VectorClass_VPoint2D::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Point2D::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d09a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x5d09b5*/
  else
    return 0; /*0x5d09a7*/
}


// ==== 0x005D09C0  _DynamicVectorClass_VPoint2D::AllocCopyData_8B  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42_::sub_5D09C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x5d09cc*/
  {
    v4 = a3; /*0x5d09d2*/
    *((_BYTE *)this + 12) = 0; /*0x5d09d6*/
    if ( a3 ) /*0x5d09dc*/
    {
      v6 = a3; /*0x5d0a04*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5d09e6*/
      if ( v5 ) /*0x5d09f0*/
        v6 = v5; /*0x5d09f5*/
      else
        v6 = 0; /*0x5d09fd*/
    }
    *((_BYTE *)this + 12) = 1; /*0x5d0a0c*/
    if ( !v6 ) /*0x5d0a10*/
      return 0; /*0x5d0a90*/
    if ( this->Items ) /*0x5d0a12*/
    {
      v7 = this->DynamicVector_field_0x8; /*0x5d0a19*/
      if ( a2 < v7 ) /*0x5d0a1e*/
        v7 = a2; /*0x5d0a20*/
      v8 = 0; /*0x5d0a22*/
      if ( v7 > 0 ) /*0x5d0a26*/
      {
        do /*0x5d0a3e*/
        {
          v9 = this->Items; /*0x5d0a28*/
          ++v8; /*0x5d0a2b*/
          v6[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x5d0a32*/
          v6[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x5d0a3a*/
        }
        while ( v8 < v7 ); /*0x5d0a3e*/
        v4 = a3; /*0x5d0a40*/
      }
      if ( *((_BYTE *)this + 13) ) /*0x5d0a44*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d0a4f*/
        this->Items = 0; /*0x5d0a57*/
      }
    }
    this->Items = v6; /*0x5d0a60*/
    this->DynamicVector_field_0x8 = a2; /*0x5d0a68*/
    *((_BYTE *)this + 13) = v4 == 0; /*0x5d0a6b*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d0a74*/
  }
  v10 = this->DynamicVector_field_0x8; /*0x5d0a77*/
  if ( v10 < this->DynamicVector_field_0x10 ) /*0x5d0a7f*/
    this->DynamicVector_field_0x10 = v10; /*0x5d0a81*/
  return 1; /*0x5d0a84*/
}


// ==== 0x005D0AA0  _DynamicVectorClass_VPoint2D::FindIndex_Pair  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42_::sub_5D0AA0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d0aa0*/
  result = 0; /*0x5d0aa5*/
  if ( v2 <= 0 ) /*0x5d0aab*/
    return -1; /*0x5d0acc*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d0ab1*/
  {
    if ( ++result >= v2 ) /*0x5d0aca*/
      return -1; /*0x5d0aca*/
  }
  return result; /*0x5d0acf*/
}


// ==== 0x005D0AE0  _VectorClass_PAVMSTextEntry::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSTextEntry::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d0ae2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d0aed*/
  {
    v3 = 0; /*0x5d0aef*/
    if ( v2 <= 0 ) /*0x5d0af3*/
      return 1; /*0x5d0b13*/
    v4 = (_DWORD *)*(this + 1); /*0x5d0af5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0afb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0b04*/
    {
      ++v3; /*0x5d0b06*/
      ++v4; /*0x5d0b07*/
      if ( v3 >= v2 ) /*0x5d0b0c*/
        return 1; /*0x5d0b0c*/
    }
  }
  return 0; /*0x5d0b0e*/
}


// ==== 0x005D0B20  _VectorClass_PAVMSTextEntry::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSTextEntry::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0b2c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d0b36*/
    if ( a3 ) /*0x5d0b3c*/
      v4 = a3; /*0x5d0b52*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d0b4e*/
    *((_BYTE *)this + 12) = 1; /*0x5d0b56*/
    if ( v4 ) /*0x5d0b5a*/
    {
      if ( this->Items ) /*0x5d0b65*/
      {
        v6 = this->Capacity; /*0x5d0b6c*/
        if ( a2 < v6 ) /*0x5d0b71*/
          v6 = a2; /*0x5d0b73*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d0b79*/
          ++i; /*0x5d0b7e*/
        if ( *((_BYTE *)this + 13) ) /*0x5d0b8b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d0b96*/
          this->Items = 0; /*0x5d0b9e*/
        }
      }
      this->Items = v4; /*0x5d0ba7*/
      this->Capacity = a2; /*0x5d0baf*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d0bb2*/
      return 1; /*0x5d0bb8*/
    }
    else
    {
      return 0; /*0x5d0b5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d0bc2*/
    return 1; /*0x5d0bc8*/
  }
}


// ==== 0x005D0BD0  _VectorClass_PAVMSTextEntry::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSTextEntry::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d0bdd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d0be3*/
    *(_DWORD *)(this + 4) = 0; /*0x5d0beb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d0bee*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0bf1*/
}


// ==== 0x005D0C00  _VectorClass_PAVMSTextEntry::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSTextEntry::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d0c00*/
    return 0; /*0x5d0c08*/
  v3 = *(_DWORD *)(this + 8); /*0x5d0c0e*/
  result = 0; /*0x5d0c11*/
  if ( v3 <= 0 ) /*0x5d0c15*/
    return -1; /*0x5d0c2c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d0c1b*/
  {
    if ( ++result >= v3 ) /*0x5d0c2a*/
      return -1; /*0x5d0c2a*/
  }
  return result; /*0x5d0c0a*/
}


// ==== 0x005D0C40  _VectorClass_PAVMSTextEntry::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSTextEntry::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d0c40*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d0c55*/
  else
    return 0; /*0x5d0c47*/
}


// ==== 0x005D0C60  _DynamicVectorClass_PAVMSTextEntry::AllocCopyData_4B  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42_::sub_5D0C60(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0c6c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d0c72*/
    if ( a3 ) /*0x5d0c78*/
      v4 = a3; /*0x5d0c8e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d0c8a*/
    *((_BYTE *)this + 12) = 1; /*0x5d0c92*/
    if ( !v4 ) /*0x5d0c96*/
      return 0; /*0x5d0d0a*/
    if ( this->Items ) /*0x5d0c98*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d0c9f*/
      if ( a2 < v5 ) /*0x5d0ca4*/
        v5 = a2; /*0x5d0ca6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d0cac*/
        ++i; /*0x5d0cb1*/
      if ( *((_BYTE *)this + 13) ) /*0x5d0cbe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d0cc9*/
        this->Items = 0; /*0x5d0cd1*/
      }
    }
    this->Items = v4; /*0x5d0cda*/
    this->DynamicVector_field_0x8 = a2; /*0x5d0ce2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d0ce5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d0cee*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d0cf1*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d0cf9*/
    this->DynamicVector_field_0x10 = v7; /*0x5d0cfb*/
  return 1; /*0x5d0cfe*/
}


// ==== 0x005D0D10  _DynamicVectorClass_PAVMSTextEntry::FindIndex  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42_::sub_5D0D10(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d0d10*/
  result = 0; /*0x5d0d13*/
  if ( v2 <= 0 ) /*0x5d0d18*/
    return -1; /*0x5d0d2f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d0d1e*/
  {
    if ( ++result >= v2 ) /*0x5d0d2d*/
      return -1; /*0x5d0d2d*/
  }
  return result; /*0x5d0d32*/
}


// ==== 0x005D0D40  _VectorClass_PAVMapSelection::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapSelection::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d0d42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d0d4d*/
  {
    v3 = 0; /*0x5d0d4f*/
    if ( v2 <= 0 ) /*0x5d0d53*/
      return 1; /*0x5d0d73*/
    v4 = (_DWORD *)*(this + 1); /*0x5d0d55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0d5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0d64*/
    {
      ++v3; /*0x5d0d66*/
      ++v4; /*0x5d0d67*/
      if ( v3 >= v2 ) /*0x5d0d6c*/
        return 1; /*0x5d0d6c*/
    }
  }
  return 0; /*0x5d0d6e*/
}


// ==== 0x005D0D80  _VectorClass_PAVMapSelection::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MapSelection::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0d8c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d0d96*/
    if ( a3 ) /*0x5d0d9c*/
      v4 = a3; /*0x5d0db2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d0dae*/
    *((_BYTE *)this + 12) = 1; /*0x5d0db6*/
    if ( v4 ) /*0x5d0dba*/
    {
      if ( this->Items ) /*0x5d0dc5*/
      {
        v6 = this->Capacity; /*0x5d0dcc*/
        if ( a2 < v6 ) /*0x5d0dd1*/
          v6 = a2; /*0x5d0dd3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d0dd9*/
          ++i; /*0x5d0dde*/
        if ( *((_BYTE *)this + 13) ) /*0x5d0deb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d0df6*/
          this->Items = 0; /*0x5d0dfe*/
        }
      }
      this->Items = v4; /*0x5d0e07*/
      this->Capacity = a2; /*0x5d0e0f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d0e12*/
      return 1; /*0x5d0e18*/
    }
    else
    {
      return 0; /*0x5d0dbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d0e22*/
    return 1; /*0x5d0e28*/
  }
}


// ==== 0x005D0E30  _VectorClass_PAVMapSelection::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MapSelection::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d0e3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d0e43*/
    *(_DWORD *)(this + 4) = 0; /*0x5d0e4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d0e4e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0e51*/
}


// ==== 0x005D0E60  _VectorClass_PAVMapSelection::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MapSelection::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d0e60*/
    return 0; /*0x5d0e68*/
  v3 = *(_DWORD *)(this + 8); /*0x5d0e6e*/
  result = 0; /*0x5d0e71*/
  if ( v3 <= 0 ) /*0x5d0e75*/
    return -1; /*0x5d0e8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d0e7b*/
  {
    if ( ++result >= v3 ) /*0x5d0e8a*/
      return -1; /*0x5d0e8a*/
  }
  return result; /*0x5d0e6a*/
}


// ==== 0x005D0EA0  _VectorClass_PAVMapSelection::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MapSelection::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d0ea0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d0eb5*/
  else
    return 0; /*0x5d0ea7*/
}


// ==== 0x005D0EC0  _DynamicVectorClass_PAVMapSelection::AllocCopyData_4B_0  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_42_::sub_5D0EC0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0ecc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d0ed2*/
    if ( a3 ) /*0x5d0ed8*/
      v4 = a3; /*0x5d0eee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d0eea*/
    *((_BYTE *)this + 12) = 1; /*0x5d0ef2*/
    if ( !v4 ) /*0x5d0ef6*/
      return 0; /*0x5d0f6a*/
    if ( this->Items ) /*0x5d0ef8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d0eff*/
      if ( a2 < v5 ) /*0x5d0f04*/
        v5 = a2; /*0x5d0f06*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d0f0c*/
        ++i; /*0x5d0f11*/
      if ( *((_BYTE *)this + 13) ) /*0x5d0f1e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d0f29*/
        this->Items = 0; /*0x5d0f31*/
      }
    }
    this->Items = v4; /*0x5d0f3a*/
    this->DynamicVector_field_0x8 = a2; /*0x5d0f42*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d0f45*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d0f4e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d0f51*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d0f59*/
    this->DynamicVector_field_0x10 = v7; /*0x5d0f5b*/
  return 1; /*0x5d0f5e*/
}


// ==== 0x005D0F70  _DynamicVectorClass_PAVMapSelection::FindIndex_0  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_42_::sub_5D0F70(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d0f70*/
  result = 0; /*0x5d0f73*/
  if ( v2 <= 0 ) /*0x5d0f78*/
    return -1; /*0x5d0f8f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d0f7e*/
  {
    if ( ++result >= v2 ) /*0x5d0f8d*/
      return -1; /*0x5d0f8d*/
  }
  return result; /*0x5d0f92*/
}


// ==== 0x005D0FA0  _VectorClass_PAVMapStage::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_26_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d0fa2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d0fad*/
  {
    v3 = 0; /*0x5d0faf*/
    if ( v2 <= 0 ) /*0x5d0fb3*/
      return 1; /*0x5d0fd3*/
    v4 = (_DWORD *)*(this + 1); /*0x5d0fb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d0fbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d0fc4*/
    {
      ++v3; /*0x5d0fc6*/
      ++v4; /*0x5d0fc7*/
      if ( v3 >= v2 ) /*0x5d0fcc*/
        return 1; /*0x5d0fcc*/
    }
  }
  return 0; /*0x5d0fce*/
}


// ==== 0x005D0FE0  _VectorClass_PAVMapStage::AllocCopyData_4B  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_26_::sub_5D0FE0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0fec*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d0ff6*/
    if ( a3 ) /*0x5d0ffc*/
      v4 = a3; /*0x5d1012*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d100e*/
    *((_BYTE *)this + 12) = 1; /*0x5d1016*/
    if ( v4 ) /*0x5d101a*/
    {
      if ( this->Items ) /*0x5d1025*/
      {
        v6 = this->Capacity; /*0x5d102c*/
        if ( a2 < v6 ) /*0x5d1031*/
          v6 = a2; /*0x5d1033*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d1039*/
          ++i; /*0x5d103e*/
        if ( *((_BYTE *)this + 13) ) /*0x5d104b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d1056*/
          this->Items = 0; /*0x5d105e*/
        }
      }
      this->Items = v4; /*0x5d1067*/
      this->Capacity = a2; /*0x5d106f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d1072*/
      return 1; /*0x5d1078*/
    }
    else
    {
      return 0; /*0x5d101f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d1082*/
    return 1; /*0x5d1088*/
  }
}


// ==== 0x005D1090  _VectorClass_PAVMapStage::FreeData_1  this=VectorClass  sig=csp ====
void __thiscall MSPCXAnim_26_::sub_5D1090(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d109d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d10a3*/
    *(_DWORD *)(this + 4) = 0; /*0x5d10ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d10ae*/
  *(_DWORD *)(this + 8) = 0; /*0x5d10b1*/
}


// ==== 0x005D10C0  _VectorClass_PAVMapStage::FindIndex  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_26_::sub_5D10C0(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d10c0*/
    return 0; /*0x5d10c8*/
  v3 = *(_DWORD *)(this + 8); /*0x5d10ce*/
  result = 0; /*0x5d10d1*/
  if ( v3 <= 0 ) /*0x5d10d5*/
    return -1; /*0x5d10ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d10db*/
  {
    if ( ++result >= v3 ) /*0x5d10ea*/
      return -1; /*0x5d10ea*/
  }
  return result; /*0x5d10ca*/
}


// ==== 0x005D1100  _VectorClass_PAVMapStage::GetCount_1  this=VectorClass  sig=csp ====
unsigned int __thiscall MSPCXAnim_26_::sub_5D1100(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d1100*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d1115*/
  else
    return 0; /*0x5d1107*/
}


// ==== 0x005D1120  _DynamicVectorClass_PAVMapStage::Release  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d112c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d1132*/
    if ( a3 ) /*0x5d1138*/
      v4 = a3; /*0x5d114e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d114a*/
    *((_BYTE *)this + 12) = 1; /*0x5d1152*/
    if ( !v4 ) /*0x5d1156*/
      return 0; /*0x5d11ca*/
    if ( this->Items ) /*0x5d1158*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d115f*/
      if ( a2 < v5 ) /*0x5d1164*/
        v5 = a2; /*0x5d1166*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d116c*/
        ++i; /*0x5d1171*/
      if ( *((_BYTE *)this + 13) ) /*0x5d117e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d1189*/
        this->Items = 0; /*0x5d1191*/
      }
    }
    this->Items = v4; /*0x5d119a*/
    this->DynamicVector_field_0x8 = a2; /*0x5d11a2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d11a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d11ae*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d11b1*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d11b9*/
    this->DynamicVector_field_0x10 = v7; /*0x5d11bb*/
  return 1; /*0x5d11be*/
}


// ==== 0x005D11D0  _DynamicVectorClass_PAVMapStage::Load  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d11d0*/
  result = 0; /*0x5d11d3*/
  if ( v2 <= 0 ) /*0x5d11d8*/
    return -1; /*0x5d11ef*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d11de*/
  {
    if ( ++result >= v2 ) /*0x5d11ed*/
      return -1; /*0x5d11ed*/
  }
  return result; /*0x5d11f2*/
}


// ==== 0x005D1200  _VectorClass_PAVMSAnimEntry::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_42_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d1202*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d120d*/
  {
    v3 = 0; /*0x5d120f*/
    if ( v2 <= 0 ) /*0x5d1213*/
      return 1; /*0x5d1233*/
    v4 = (_DWORD *)*(this + 1); /*0x5d1215*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d121b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d1224*/
    {
      ++v3; /*0x5d1226*/
      ++v4; /*0x5d1227*/
      if ( v3 >= v2 ) /*0x5d122c*/
        return 1; /*0x5d122c*/
    }
  }
  return 0; /*0x5d122e*/
}


// ==== 0x005D1240  _VectorClass_PAVMSAnimEntry::Release  this=VectorClass  sig=csp ====
char __thiscall MSPCXAnim_42_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d124c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d1256*/
    if ( a3 ) /*0x5d125c*/
      v4 = a3; /*0x5d1272*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d126e*/
    *((_BYTE *)this + 12) = 1; /*0x5d1276*/
    if ( v4 ) /*0x5d127a*/
    {
      if ( this->Items ) /*0x5d1285*/
      {
        v6 = this->Capacity; /*0x5d128c*/
        if ( a2 < v6 ) /*0x5d1291*/
          v6 = a2; /*0x5d1293*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d1299*/
          ++i; /*0x5d129e*/
        if ( *((_BYTE *)this + 13) ) /*0x5d12ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d12b6*/
          this->Items = 0; /*0x5d12be*/
        }
      }
      this->Items = v4; /*0x5d12c7*/
      this->Capacity = a2; /*0x5d12cf*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d12d2*/
      return 1; /*0x5d12d8*/
    }
    else
    {
      return 0; /*0x5d127f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d12e2*/
    return 1; /*0x5d12e8*/
  }
}


// ==== 0x005D12F0  _VectorClass_PAVMSAnimEntry::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSPCXAnim_42_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d12fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d1303*/
    *(_DWORD *)(this + 4) = 0; /*0x5d130b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d130e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d1311*/
}


// ==== 0x005D1320  _VectorClass_PAVMSAnimEntry::Load  this=VectorClass  sig=csp ====
int __thiscall MSPCXAnim_42_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d1320*/
    return 0; /*0x5d1328*/
  v3 = *(_DWORD *)(this + 8); /*0x5d132e*/
  result = 0; /*0x5d1331*/
  if ( v3 <= 0 ) /*0x5d1335*/
    return -1; /*0x5d134c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d133b*/
  {
    if ( ++result >= v3 ) /*0x5d134a*/
      return -1; /*0x5d134a*/
  }
  return result; /*0x5d132a*/
}


// ==== 0x005D1360  _VectorClass_PAVMSAnimEntry::Draw  this=VectorClass  sig=csp ====
unsigned int __thiscall MSPCXAnim_42_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d1360*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d1375*/
  else
    return 0; /*0x5d1367*/
}


// ==== 0x005D1380  _DynamicVectorClass_PAVMSAnimEntry::AllocCopyData_4B_0  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26_::sub_5D1380(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d138c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d1392*/
    if ( a3 ) /*0x5d1398*/
      v4 = a3; /*0x5d13ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d13aa*/
    *((_BYTE *)this + 12) = 1; /*0x5d13b2*/
    if ( !v4 ) /*0x5d13b6*/
      return 0; /*0x5d142a*/
    if ( this->Items ) /*0x5d13b8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d13bf*/
      if ( a2 < v5 ) /*0x5d13c4*/
        v5 = a2; /*0x5d13c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d13cc*/
        ++i; /*0x5d13d1*/
      if ( *((_BYTE *)this + 13) ) /*0x5d13de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d13e9*/
        this->Items = 0; /*0x5d13f1*/
      }
    }
    this->Items = v4; /*0x5d13fa*/
    this->DynamicVector_field_0x8 = a2; /*0x5d1402*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d1405*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d140e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d1411*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d1419*/
    this->DynamicVector_field_0x10 = v7; /*0x5d141b*/
  return 1; /*0x5d141e*/
}


// ==== 0x005D1430  _DynamicVectorClass_PAVMSAnimEntry::FindIndex_0  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26_::sub_5D1430(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d1430*/
  result = 0; /*0x5d1433*/
  if ( v2 <= 0 ) /*0x5d1438*/
    return -1; /*0x5d144f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d143e*/
  {
    if ( ++result >= v2 ) /*0x5d144d*/
      return -1; /*0x5d144d*/
  }
  return result; /*0x5d1452*/
}


// ==== 0x005D1460  _VectorClass_PAVMSSfxEntry::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfxEntry::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d1462*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d146d*/
  {
    v3 = 0; /*0x5d146f*/
    if ( v2 <= 0 ) /*0x5d1473*/
      return 1; /*0x5d1493*/
    v4 = (_DWORD *)*(this + 1); /*0x5d1475*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d147b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d1484*/
    {
      ++v3; /*0x5d1486*/
      ++v4; /*0x5d1487*/
      if ( v3 >= v2 ) /*0x5d148c*/
        return 1; /*0x5d148c*/
    }
  }
  return 0; /*0x5d148e*/
}


// ==== 0x005D14A0  _VectorClass_PAVMSSfxEntry::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfxEntry::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d14ac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d14b6*/
    if ( a3 ) /*0x5d14bc*/
      v4 = a3; /*0x5d14d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d14ce*/
    *((_BYTE *)this + 12) = 1; /*0x5d14d6*/
    if ( v4 ) /*0x5d14da*/
    {
      if ( this->Items ) /*0x5d14e5*/
      {
        v6 = this->Capacity; /*0x5d14ec*/
        if ( a2 < v6 ) /*0x5d14f1*/
          v6 = a2; /*0x5d14f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d14f9*/
          ++i; /*0x5d14fe*/
        if ( *((_BYTE *)this + 13) ) /*0x5d150b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d1516*/
          this->Items = 0; /*0x5d151e*/
        }
      }
      this->Items = v4; /*0x5d1527*/
      this->Capacity = a2; /*0x5d152f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d1532*/
      return 1; /*0x5d1538*/
    }
    else
    {
      return 0; /*0x5d14df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d1542*/
    return 1; /*0x5d1548*/
  }
}


// ==== 0x005D1550  _VectorClass_PAVMSSfxEntry::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfxEntry::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d155d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d1563*/
    *(_DWORD *)(this + 4) = 0; /*0x5d156b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d156e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d1571*/
}


// ==== 0x005D1580  _VectorClass_PAVMSSfxEntry::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfxEntry::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d1580*/
    return 0; /*0x5d1588*/
  v3 = *(_DWORD *)(this + 8); /*0x5d158e*/
  result = 0; /*0x5d1591*/
  if ( v3 <= 0 ) /*0x5d1595*/
    return -1; /*0x5d15ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d159b*/
  {
    if ( ++result >= v3 ) /*0x5d15aa*/
      return -1; /*0x5d15aa*/
  }
  return result; /*0x5d158a*/
}


// ==== 0x005D15C0  _VectorClass_PAVMSSfxEntry::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfxEntry::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d15c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d15d5*/
  else
    return 0; /*0x5d15c7*/
}


// ==== 0x005D15E0  _DynamicVectorClass_PAVMSSfxEntry::AllocCopyData_4B_1  this=DynamicVector  sig=csp ====
char __thiscall MSPCXAnim_26_::sub_5D15E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d15ec*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d15f2*/
    if ( a3 ) /*0x5d15f8*/
      v4 = a3; /*0x5d160e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d160a*/
    *((_BYTE *)this + 12) = 1; /*0x5d1612*/
    if ( !v4 ) /*0x5d1616*/
      return 0; /*0x5d168a*/
    if ( this->Items ) /*0x5d1618*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d161f*/
      if ( a2 < v5 ) /*0x5d1624*/
        v5 = a2; /*0x5d1626*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d162c*/
        ++i; /*0x5d1631*/
      if ( *((_BYTE *)this + 13) ) /*0x5d163e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d1649*/
        this->Items = 0; /*0x5d1651*/
      }
    }
    this->Items = v4; /*0x5d165a*/
    this->DynamicVector_field_0x8 = a2; /*0x5d1662*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d1665*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d166e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d1671*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d1679*/
    this->DynamicVector_field_0x10 = v7; /*0x5d167b*/
  return 1; /*0x5d167e*/
}


// ==== 0x005D1690  _DynamicVectorClass_PAVMSSfxEntry::FindIndex_1  this=DynamicVector  sig=csp ====
int __thiscall MSPCXAnim_26_::sub_5D1690(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d1690*/
  result = 0; /*0x5d1693*/
  if ( v2 <= 0 ) /*0x5d1698*/
    return -1; /*0x5d16af*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d169e*/
  {
    if ( ++result >= v2 ) /*0x5d16ad*/
      return -1; /*0x5d16ad*/
  }
  return result; /*0x5d16b2*/
}


// ==== 0x005D16C0  _VectorClass_VPoint2D::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_Point2D::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d16c3*/
  *Block = &vt_VectorClass_Point2D; /*0x5d16c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d16d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d16d8*/
    *(Block + 1) = 0; /*0x5d16e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d16eb*/
  *(Block + 2) = 0; /*0x5d16f1*/
  if ( (a2 & 1) != 0 ) /*0x5d16f8*/
    __3_YAXPAX_Z(Block); /*0x5d16fb*/
  return (VectorClass *)Block; /*0x5d1705*/
}


// ==== 0x005D1710  _DynamicVectorClass_VPoint2D::Constructor_VectorClass_Point2D_  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSPCXAnim_42_::Constructor_VectorClass_Point2D_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d1713*/
  *Block = &vt_VectorClass_Point2D; /*0x5d1716*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d1720*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1728*/
    *(Block + 1) = 0; /*0x5d1730*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d173b*/
  *(Block + 2) = 0; /*0x5d1741*/
  if ( (a2 & 1) != 0 ) /*0x5d1748*/
    __3_YAXPAX_Z(Block); /*0x5d174b*/
  return (DynamicVector *)Block; /*0x5d1755*/
}


// ==== 0x005D1760  _VectorClass_PAVMSTextEntry::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_MSTextEntry::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d1763*/
  *Block = &vt_VectorClass_MSTextEntry; /*0x5d1766*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d1770*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1778*/
    *(Block + 1) = 0; /*0x5d1780*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d178b*/
  *(Block + 2) = 0; /*0x5d1791*/
  if ( (a2 & 1) != 0 ) /*0x5d1798*/
    __3_YAXPAX_Z(Block); /*0x5d179b*/
  return (VectorClass *)Block; /*0x5d17a5*/
}


// ==== 0x005D17B0  _DynamicVectorClass_PAVMSTextEntry::Constructor_VectorClass_MSTextEntry___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSPCXAnim_42_::Constructor_VectorClass_MSTextEntry___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d17b3*/
  *Block = &vt_VectorClass_MSTextEntry; /*0x5d17b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d17c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d17c8*/
    *(Block + 1) = 0; /*0x5d17d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d17db*/
  *(Block + 2) = 0; /*0x5d17e1*/
  if ( (a2 & 1) != 0 ) /*0x5d17e8*/
    __3_YAXPAX_Z(Block); /*0x5d17eb*/
  return (DynamicVector *)Block; /*0x5d17f5*/
}


// ==== 0x005D1800  _VectorClass_PAVMapSelection::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_MapSelection::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d1803*/
  *Block = &vt_VectorClass_MapSelection; /*0x5d1806*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d1810*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1818*/
    *(Block + 1) = 0; /*0x5d1820*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d182b*/
  *(Block + 2) = 0; /*0x5d1831*/
  if ( (a2 & 1) != 0 ) /*0x5d1838*/
    __3_YAXPAX_Z(Block); /*0x5d183b*/
  return (VectorClass *)Block; /*0x5d1845*/
}


// ==== 0x005D1850  _DynamicVectorClass_PAVMapSelection::Constructor_VectorClass_MapSelection___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSPCXAnim_42_::Constructor_VectorClass_MapSelection___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d1853*/
  *Block = &vt_VectorClass_MapSelection; /*0x5d1856*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d1860*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1868*/
    *(Block + 1) = 0; /*0x5d1870*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d187b*/
  *(Block + 2) = 0; /*0x5d1881*/
  if ( (a2 & 1) != 0 ) /*0x5d1888*/
    __3_YAXPAX_Z(Block); /*0x5d188b*/
  return (DynamicVector *)Block; /*0x5d1895*/
}


// ==== 0x005D18A0  _VectorClass_PAVMapStage::Constructor_VectorClass_MapStage___  this=VectorClass  sig=csp ====
VectorClass *__thiscall MSPCXAnim_26_::Constructor_VectorClass_MapStage___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d18a3*/
  *Block = &vt_VectorClass_MapStage; /*0x5d18a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d18b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d18b8*/
    *(Block + 1) = 0; /*0x5d18c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d18cb*/
  *(Block + 2) = 0; /*0x5d18d1*/
  if ( (a2 & 1) != 0 ) /*0x5d18d8*/
    __3_YAXPAX_Z(Block); /*0x5d18db*/
  return (VectorClass *)Block; /*0x5d18e5*/
}


// ==== 0x005D18F0  _DynamicVectorClass_PAVMapStage::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSPCXAnim_26_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d18f3*/
  *Block = &vt_VectorClass_MapStage; /*0x5d18f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d1900*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1908*/
    *(Block + 1) = 0; /*0x5d1910*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d191b*/
  *(Block + 2) = 0; /*0x5d1921*/
  if ( (a2 & 1) != 0 ) /*0x5d1928*/
    __3_YAXPAX_Z(Block); /*0x5d192b*/
  return (DynamicVector *)Block; /*0x5d1935*/
}


// ==== 0x005D1940  _VectorClass_PAVMSAnimEntry::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall MSPCXAnim_42_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d1943*/
  *Block = &vt_VectorClass_MSAnimEntry; /*0x5d1946*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d1950*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1958*/
    *(Block + 1) = 0; /*0x5d1960*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d196b*/
  *(Block + 2) = 0; /*0x5d1971*/
  if ( (a2 & 1) != 0 ) /*0x5d1978*/
    __3_YAXPAX_Z(Block); /*0x5d197b*/
  return (VectorClass *)Block; /*0x5d1985*/
}


// ==== 0x005D1990  _DynamicVectorClass_PAVMSAnimEntry::Constructor_VectorClass_MSAnimEntry___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSPCXAnim_26_::Constructor_VectorClass_MSAnimEntry___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d1993*/
  *Block = &vt_VectorClass_MSAnimEntry; /*0x5d1996*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d19a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d19a8*/
    *(Block + 1) = 0; /*0x5d19b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d19bb*/
  *(Block + 2) = 0; /*0x5d19c1*/
  if ( (a2 & 1) != 0 ) /*0x5d19c8*/
    __3_YAXPAX_Z(Block); /*0x5d19cb*/
  return (DynamicVector *)Block; /*0x5d19d5*/
}


// ==== 0x005D19E0  _VectorClass_PAVMSSfxEntry::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_MSSfxEntry::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d19e3*/
  *Block = &vt_VectorClass_MSSfxEntry; /*0x5d19e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d19f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d19f8*/
    *(Block + 1) = 0; /*0x5d1a00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d1a0b*/
  *(Block + 2) = 0; /*0x5d1a11*/
  if ( (a2 & 1) != 0 ) /*0x5d1a18*/
    __3_YAXPAX_Z(Block); /*0x5d1a1b*/
  return (VectorClass *)Block; /*0x5d1a25*/
}


// ==== 0x005D1A30  _DynamicVectorClass_PAVMSSfxEntry::Constructor_VectorClass_MSSfxEntry___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSPCXAnim_26_::Constructor_VectorClass_MSSfxEntry___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d1a33*/
  *Block = &vt_VectorClass_MSSfxEntry; /*0x5d1a36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d1a40*/
  {
    __3_YAXPAX_Z(v3); /*0x5d1a48*/
    *(Block + 1) = 0; /*0x5d1a50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d1a5b*/
  *(Block + 2) = 0; /*0x5d1a61*/
  if ( (a2 & 1) != 0 ) /*0x5d1a68*/
    __3_YAXPAX_Z(Block); /*0x5d1a6b*/
  return (DynamicVector *)Block; /*0x5d1a75*/
}


// ==== 0x005D1A80  MPBattleClass::populateTeamDropdown  this=MPBattleClass  sig=ida-proto ====
int sub_5D1A80()
{
  MEMORY[0xABFBC0] = 0; /*0x5d1a82*/
  MEMORY[0xABFBC4] = 0; /*0x5d1a87*/
  MEMORY[0xABFBC8] = 0; /*0x5d1a8c*/
  MEMORY[0xABFBCC] = 0; /*0x5d1a91*/
  return 0; /*0x5d1a96*/
}


// ==== 0x005D1AA0  MSEngine::Construct  this=MSEngine  sig=csp ====
_DWORD *__thiscall sub_5D1AA0(_DWORD *this)
{
  char *v2; // ecx
  int v3; // edx

  v2 = (char *)(this + 2); /*0x5d1aa5*/
  *((_DWORD *)v2 + 1) = 0; /*0x5d1ab2*/
  *((_DWORD *)v2 + 2) = 0; /*0x5d1ab5*/
  v2[12] = 1; /*0x5d1ab8*/
  v2[13] = 0; /*0x5d1abb*/
  *(_DWORD *)v2 = &vt_VectorClass_TRect_int; /*0x5d1abe*/
  *(this + 7) = 0; /*0x5d1ac4*/
  *(this + 8) = 0; /*0x5d1ac7*/
  *((_BYTE *)this + 36) = 1; /*0x5d1aca*/
  *((_BYTE *)this + 37) = 0; /*0x5d1acd*/
  *(this + 6) = &vt_DynamicVectorClass_MSAnim; /*0x5d1ad0*/
  *(this + 11) = 10; /*0x5d1ad6*/
  *(this + 10) = 0; /*0x5d1add*/
  *(this + 13) = 0; /*0x5d1ae0*/
  *(this + 14) = 0; /*0x5d1ae3*/
  *((_BYTE *)this + 60) = 1; /*0x5d1ae6*/
  *((_BYTE *)this + 61) = 0; /*0x5d1ae9*/
  *(this + 12) = &vt_DynamicVectorClass_MSSfx; /*0x5d1aec*/
  *(this + 17) = 10; /*0x5d1af2*/
  *(this + 16) = 0; /*0x5d1af9*/
  v3 = *(_DWORD *)v2; /*0x5d1afc*/
  *this = &vt_MSEngine; /*0x5d1b01*/
  this->MSEngine_field_0x4 = 0; /*0x5d1b07*/
  (*(void (__thiscall **)(char *, int, _DWORD))(v3 + 8))(v2, 20, 0); /*0x5d1b0a*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 6) + 12))(this + 6); /*0x5d1b11*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 12) + 12))(this + 12); /*0x5d1b18*/
  return this; /*0x5d1b1b*/
}


// ==== 0x005D1B30  MSEngine::Destruct  this=MSEngine  sig=csp ====
void __thiscall MSEngine_Destructor(_DWORD *this)
{
  int v2; // ebp
  int v3; // eax
  void *v4; // edi
  _DWORD *v5; // ebp
  int i; // edi
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // edi
  int v9; // edx
  _DWORD *v10; // esi
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax

  v2 = 0; /*0x5d1b37*/
  for ( *this = &vt_MSEngine; v2 < *(this + 16); ++v2 ) /*0x5d1b45*/
  {
    v3 = *(this + 13); /*0x5d1b47*/
    v4 = *(void **)(v3 + 4 * v2); /*0x5d1b4a*/
    if ( v4 ) /*0x5d1b4f*/
    {
      MSEngine::DestroyData(*(_DWORD *)(v3 + 4 * v2)); /*0x5d1b53*/
      __3_YAXPAX_Z(v4); /*0x5d1b59*/
    }
  }
  v5 = this + 12; /*0x5d1b6c*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 12) + 12))(this + 12); /*0x5d1b71*/
  for ( i = 0; i < *(this + 10); ++i ) /*0x5d1b7b*/
  {
    v7 = *(void (__thiscall ****)(_DWORD, int))(*(this + 7) + 4 * i); /*0x5d1b80*/
    if ( v7 ) /*0x5d1b85*/
      (**v7)(v7, 1); /*0x5d1b8b*/
  }
  v8 = this + 6; /*0x5d1b98*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 6) + 12))(this + 6); /*0x5d1b9d*/
  v9 = this->MSEngine_field_0x8; /*0x5d1ba0*/
  v10 = this + 2; /*0x5d1ba3*/
  (*(void (__thiscall **)(_DWORD *))(v9 + 12))(v10); /*0x5d1ba8*/
  v11 = (void *)v5[1]; /*0x5d1bab*/
  *v5 = &vt_VectorClass_MSSfx; /*0x5d1bae*/
  if ( v11 && *((_BYTE *)v5 + 13) ) /*0x5d1bb9*/
  {
    __3_YAXPAX_Z(v11); /*0x5d1bbf*/
    v5[1] = 0; /*0x5d1bc7*/
  }
  *((_BYTE *)v5 + 13) = 0; /*0x5d1bca*/
  v5[2] = 0; /*0x5d1bcd*/
  v12 = (void *)v8[1]; /*0x5d1bd0*/
  *v8 = &vt_VectorClass_MSAnim; /*0x5d1bd3*/
  if ( v12 && *((_BYTE *)v8 + 13) ) /*0x5d1bdd*/
  {
    __3_YAXPAX_Z(v12); /*0x5d1be3*/
    v8[1] = 0; /*0x5d1beb*/
  }
  *((_BYTE *)v8 + 13) = 0; /*0x5d1bee*/
  v8[2] = 0; /*0x5d1bf1*/
  v13 = (void *)v10[1]; /*0x5d1bf4*/
  *v10 = &vt_VectorClass_TRect_int; /*0x5d1bf7*/
  if ( v13 && *((_BYTE *)v10 + 13) ) /*0x5d1c01*/
  {
    __3_YAXPAX_Z(v13); /*0x5d1c07*/
    v10[1] = 0; /*0x5d1c0f*/
  }
  *((_BYTE *)v10 + 13) = 0; /*0x5d1c12*/
  v10[2] = 0; /*0x5d1c15*/
}


// ==== 0x005D1C20  PriorityQueue::Add  this=Selection@WorldDominationTour  sig=csp ====
int __thiscall PriorityQueue::Add(Selection_WorldDominationTour *this, MSAnim *aP1)
{
  int v2; // eax
  char *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  if ( !aP1 ) /*0x5d1c27*/
    return -1; /*0x5d1c27*/
  v2 = *(_DWORD *)&this->__pad_4[36]; /*0x5d1c29*/
  v3 = &this->__pad_4[20]; /*0x5d1c2c*/
  v4 = *(_DWORD *)&this->__pad_4[28]; /*0x5d1c2f*/
  if ( v2 >= v4 ) /*0x5d1c34*/
  {
    if ( !v3[13] && v4 ) /*0x5d1c3f*/
      return -1; /*0x5d1c3f*/
    v5 = *((_DWORD *)v3 + 5); /*0x5d1c41*/
    if ( v5 <= 0 || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v3 + 8))(v3, v4 + v5, 0) ) /*0x5d1c51*/
      return -1; /*0x5d1c7b*/
  }
  v6 = *((_DWORD *)v3 + 4); /*0x5d1c58*/
  v7 = *((_DWORD *)v3 + 1); /*0x5d1c5b*/
  *((_DWORD *)v3 + 4) = v6 + 1; /*0x5d1c61*/
  *(_DWORD *)(v7 + 4 * v6) = aP1; /*0x5d1c68*/
  return (*(int (__thiscall **)(char *, MSAnim **))(*(_DWORD *)v3 + 16))(v3, &aP1); /*0x5d1c77*/
}


// ==== 0x005D1C90  ObjectClass::UI_Load_5D1C90  this=VOID_PTR  sig=csp ====
int __thiscall sub_5D1C90(_DWORD *this, int (__thiscall ***a2)(_DWORD, int), int (__thiscall ***a3)(_DWORD, int))
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // ecx

  v3 = this + 6; /*0x5d1c94*/
  v4 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*(this + 6) + 16))(this + 6, &a3); /*0x5d1ca5*/
  v5 = v3[2]; /*0x5d1ca7*/
  if ( v3[4] < v5 /*0x5d1cc9*/
    || (*((_BYTE *)v3 + 13) || !v5)
    && (v6 = v3[5], v6 > 0)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v5 + v6, 0) )
  {
    v7 = v3[4]; /*0x5d1cd0*/
    if ( v4 < v7 - 1 ) /*0x5d1cd8*/
      memcpy((void *)(v3[1] + 4 * v4 + 8), (const void *)(v3[1] + 4 * (v4 + 1)), 4 * (v7 + 0x3FFFFFFF * (v4 + 1))); /*0x5d1cf7*/
    *(_DWORD *)(v3[1] + 4 * v4 + 4) = a2; /*0x5d1d07*/
    ++v3[4]; /*0x5d1d0f*/
  }
  result = (int)a3; /*0x5d1d12*/
  a2 = a3; /*0x5d1d18*/
  if ( a3 ) /*0x5d1d1c*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 16))(v3, &a2); /*0x5d1d27*/
    if ( result != -1 ) /*0x5d1d2d*/
    {
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 16))(v3, &a2); /*0x5d1d38*/
      if ( result != -1 ) /*0x5d1d3e*/
      {
        v9 = v3[4]; /*0x5d1d40*/
        if ( result < v9 ) /*0x5d1d45*/
        {
          v10 = v9 - 1; /*0x5d1d47*/
          for ( v3[4] = v10; result < v3[4]; *(_DWORD *)(v3[1] + 4 * result - 4) = *(_DWORD *)(v3[1] + 4 * result) ) /*0x5d1d4d*/
            ++result; /*0x5d1d52*/
        }
      }
      if ( a2 ) /*0x5d1d67*/
        return (**a2)(a2, 1); /*0x5d1d6d*/
    }
  }
  return result; /*0x5d1d6f*/
}


// ==== 0x005D1D80  Session::RemoveTeam  this=ObjectClass  sig=csp ====
int __thiscall Session::RemoveTeam(_DWORD *this, MSShapeAnim *aP1)
{
  MSShapeAnim *result; // eax
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // ecx

  result = aP1; /*0x5d1d80*/
  if ( aP1 ) /*0x5d1d87*/
  {
    v3 = this + 6; /*0x5d1d8c*/
    result = (MSShapeAnim *)(*(int (__thiscall **)(_DWORD *, MSShapeAnim **))(this->nextArrayIndex + 16))(this + 6, &aP1); /*0x5d1d96*/
    if ( result != (MSShapeAnim *)-1 ) /*0x5d1d9c*/
    {
      result = (MSShapeAnim *)(*(int (__thiscall **)(_DWORD *, MSShapeAnim **))(*v3 + 16))(v3, &aP1); /*0x5d1da7*/
      if ( result != (MSShapeAnim *)-1 ) /*0x5d1dad*/
      {
        v4 = v3[4]; /*0x5d1daf*/
        if ( (int)result < v4 ) /*0x5d1db4*/
        {
          v5 = v4 - 1; /*0x5d1db6*/
          for ( v3[4] = v5; /*0x5d1dbc*/
                (int)result < v3[4];
                *(_DWORD *)(v3[1] + 4 * (_DWORD)result - 4) = *(_DWORD *)(v3[1] + 4 * (_DWORD)result) )
          {
            result = (MSShapeAnim *)((char *)result + 1); /*0x5d1dc1*/
          }
        }
      }
      if ( aP1 ) /*0x5d1dd6*/
        return (**(int (__thiscall ***)(MSShapeAnim *, int))aP1->__pad_0)(aP1, 1); /*0x5d1ddc*/
    }
  }
  return (int)result->__pad_0; /*0x5d1dde*/
}


// ==== 0x005D1DF0  MSEngine::ProcessEvents  this=ObjectClass  sig=csp ====
int __thiscall MSEngine::ProcessEvents(_DWORD *this, MSVQAnim *aP1, int a3)
{
  int v4; // ebx
  int result; // eax
  int v6; // ecx

  Timer::GetTicks(); /*0x5d1dfc*/
  v4 = a3; /*0x5d1e01*/
  while ( 1 ) /*0x5d1e19*/
  {
    result = (*(int (__thiscall **)(_DWORD *, MSVQAnim **))(this->nextArrayIndex + 16))(this + 6, &aP1); /*0x5d1e19*/
    if ( result == -1 ) /*0x5d1e1f*/
      break; /*0x5d1e1f*/
    v6 = *(_DWORD *)(this->referenceCount + 4 * result); /*0x5d1e24*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6); /*0x5d1e29*/
    if ( (_BYTE)result || !v4 ) /*0x5d1e32*/
      break; /*0x5d1e32*/
    GameClass::FrameLoop(this, 1); /*0x5d1e38*/
  }
  return result; /*0x5d1e3f*/
}


// ==== 0x005D1E50  DSurface::Flip2  this=ObjectClass  sig=ida-proto ====
int sub_5D1E50()
{
  MEMORY[0x8A00A0] = 1; /*0x5d1e55*/
  return DSurface::RenderToSurface(MEMORY[0x88730C]); /*0x5d1e62*/
}


// ==== 0x005D1E70  DSurface::RenderToSurface  this=ObjectClass  sig=csp ====
int __thiscall DSurface::RenderToSurface(_DWORD *this, ObjectClass *aP1)
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
  ObjectClass *v13; // eax
  int result; // eax
  int j; // ebp
  int v16; // ecx
  void (__thiscall ***v17)(_DWORD, int); // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // [esp+3Ch] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-1Ch]
  int v23; // [esp+44h] [ebp-18h]
  int v24; // [esp+48h] [ebp-14h]
  _BYTE v25[16]; // [esp+4Ch] [ebp-10h] BYREF

  if ( MEMORY[0x89F690].__pad_71C[756] == 1 ) /*0x5d1e83*/
  {
    MEMORY[0x89F690].__pad_71C[756] = 0; /*0x5d1e89*/
    (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)aP1->__pad_0 + 24))(aP1, 0); /*0x5d1e96*/
    v3 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 120))( /*0x5d1ea6*/
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                  v25);
    v21 = *v3; /*0x5d1eab*/
    v22 = v3[1]; /*0x5d1eb2*/
    v23 = v3[2]; /*0x5d1eb9*/
    v4 = v3[3]; /*0x5d1ebf*/
    v5 = *(_DWORD *)aP1->__pad_0; /*0x5d1ec2*/
    v24 = v4; /*0x5d1ec4*/
    v6 = (*(int (__thiscall **)(ObjectClass *))(v5 + 124))(aP1); /*0x5d1ec8*/
    v7 = *(_DWORD *)aP1->__pad_0; /*0x5d1ed6*/
    v21 = (v6 - v23) / 2; /*0x5d1eda*/
    v8 = (*(int (__thiscall **)(ObjectClass *))(v7 + 128))(aP1); /*0x5d1ede*/
    v9 = *(_DWORD *)aP1->__pad_0; /*0x5d1ee8*/
    v22 = (v8 - v24) / 2; /*0x5d1ef9*/
    v10 = (*(int (__stdcall **)(_BYTE *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] /*0x5d1f0c*/
                                                                    + 120))(
            v25,
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
            &v21,
            0,
            1);
    (*(void (__thiscall **)(ObjectClass *, int))(v9 + 8))(aP1, v10); /*0x5d1f12*/
    for ( i = 0; i < this->owningHouseIndex; ++i ) /*0x5d1f1c*/
    {
      v12 = *(_DWORD *)(this->referenceCount + 4 * i); /*0x5d1f24*/
      (*(void (__thiscall **)(int, ObjectClass *, _DWORD))(*(_DWORD *)v12 + 20))(v12, aP1, 0); /*0x5d1f29*/
    }
    this->vtable2 = 0; /*0x5d1f38*/
    v13 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(*(_DWORD *)aP1->__pad_0 + 120))(aP1, v25); /*0x5d1f44*/
    Surface::CopyRect(this, v13); /*0x5d1f4a*/
    (*(void (__thiscall **)(_DWORD *, ObjectClass *))(*this + 4))(this, aP1); /*0x5d1f54*/
  }
  result = this->owningHouseIndex; /*0x5d1f57*/
  for ( j = 0; j < result; ++j ) /*0x5d1f5e*/
  {
    v16 = *(_DWORD *)(this->referenceCount + 4 * j); /*0x5d1f63*/
    if ( (*(unsigned __int8 (__thiscall **)(int, ObjectClass *, int *))(*(_DWORD *)v16 + 16))(v16, aP1, &v21) == 1 ) /*0x5d1f73*/
    {
      v17 = *(void (__thiscall ****)(_DWORD, int))(this->referenceCount + 4 * j); /*0x5d1f78*/
      if ( v17 ) /*0x5d1f7d*/
        (**v17)(v17, 1); /*0x5d1f83*/
      v18 = this->owningHouseIndex; /*0x5d1f85*/
      if ( j < v18 ) /*0x5d1f8a*/
      {
        v19 = v18 - 1; /*0x5d1f8c*/
        v20 = j; /*0x5d1f8f*/
        for ( this->owningHouseIndex = v19; /*0x5d1f96*/
              v20 < this->owningHouseIndex;
              *(_DWORD *)(this->referenceCount + 4 * v20 - 4) = *(_DWORD *)(this->referenceCount + 4 * v20) )
        {
          ++v20; /*0x5d1f9b*/
        }
      }
    }
    Surface::CopyRect(this, (ObjectClass *)&v21); /*0x5d1fb1*/
    result = this->owningHouseIndex; /*0x5d1fb6*/
  }
  return result; /*0x5d1fbe*/
}


// ==== 0x005D1FD0  Surface::CopyRect  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Surface::CopyRect(_DWORD *this, ObjectClass *aP1)
{
  ObjectClass *result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  ObjectClass *v7; // ecx
  int *v8; // eax
  int v9; // edx
  int v10; // edx
  _DWORD *v11; // ebp
  int v12; // esi
  ObjectClass *v13; // ebx
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
  int *v24; // ebp
  ObjectClass *v25; // edi
  int v26; // esi
  char *v27; // edx
  int v28; // esi
  ObjectClass *v29; // edx
  int v30; // edx
  ObjectClass *v31; // eax
  _DWORD *v32; // ecx
  int v33; // edx
  int v34; // [esp+10h] [ebp-2Ch]
  int v35; // [esp+10h] [ebp-2Ch]
  int v37; // [esp+18h] [ebp-24h]
  ObjectClass *v38; // [esp+18h] [ebp-24h]
  int v39; // [esp+1Ch] [ebp-20h]
  char *v40; // [esp+1Ch] [ebp-20h]
  int v41; // [esp+20h] [ebp-1Ch]
  int v42; // [esp+24h] [ebp-18h]
  int v43; // [esp+28h] [ebp-14h]
  int v44; // [esp+2Ch] [ebp-10h] BYREF
  ObjectClass *v45; // [esp+30h] [ebp-Ch]
  int v46; // [esp+34h] [ebp-8h]
  ObjectClass *v47; // [esp+38h] [ebp-4h]
  char aP1a; // [esp+40h] [ebp+4h]
  ObjectClass *aP1b; // [esp+40h] [ebp+4h]
  unsigned int aP1c; // [esp+40h] [ebp+4h]

  result = (ObjectClass *)this; /*0x5d1fdc*/
  v4 = *(_DWORD *)&aP1->__pad_0[8]; /*0x5d1fde*/
  v37 = v4; /*0x5d1fe8*/
  if ( v4 <= 0 ) /*0x5d1fec*/
    return result->__pad_0; /*0x5d1fec*/
  v39 = *(_DWORD *)&aP1->__pad_0[12]; /*0x5d1ff7*/
  if ( v39 <= 0 ) /*0x5d1ffb*/
    return result->__pad_0; /*0x5d1ffb*/
  v5 = this->vtable2; /*0x5d2001*/
  v34 = 0; /*0x5d2004*/
  v41 = v5; /*0x5d200a*/
  if ( v5 <= 0 ) /*0x5d200e*/
  {
LABEL_18:
    if ( v5 >= result->uniqueId ) /*0x5d207c*/
    {
      v22 = 0; /*0x5d2165*/
      aP1c = -1; /*0x5d2169*/
      v44 = 0; /*0x5d2171*/
      v45 = 0; /*0x5d2175*/
      v46 = 0; /*0x5d2179*/
      v47 = 0; /*0x5d217d*/
      v35 = 0; /*0x5d2181*/
      if ( v5 > 0 ) /*0x5d2185*/
      {
        v23 = *(_DWORD *)aP1->__pad_0; /*0x5d218b*/
        v42 = *(_DWORD *)aP1->__pad_0; /*0x5d2191*/
        v43 = *(_DWORD *)aP1->__pad_0 + v37; /*0x5d219b*/
        v38 = *(ObjectClass **)&aP1->__pad_0[4]; /*0x5d21a3*/
        v40 = &v38->__pad_0[v39]; /*0x5d21a9*/
        v24 = (int *)this->vtable4; /*0x5d21b1*/
        while ( 1 ) /*0x5d21c0*/
        {
          v25 = (ObjectClass *)v24[1]; /*0x5d21c0*/
          v26 = *v24 + v24[2]; /*0x5d21c6*/
          v27 = &v25->__pad_0[v24[3]]; /*0x5d21c8*/
          if ( v23 >= *v24 ) /*0x5d21cc*/
            v23 = *v24; /*0x5d21ce*/
          if ( (int)v38 < (int)v25 ) /*0x5d21d6*/
            v25 = v38; /*0x5d21d8*/
          if ( v43 > v26 ) /*0x5d21e0*/
            v26 = v43; /*0x5d21e2*/
          v28 = v26 - v23; /*0x5d21e8*/
          if ( (int)v40 > (int)v27 ) /*0x5d21ec*/
            v27 = v40; /*0x5d21ee*/
          v29 = (ObjectClass *)(v27 - (char *)v25); /*0x5d21f0*/
          if ( v28 * (int)v29 < aP1c ) /*0x5d21fb*/
          {
            v22 = v35; /*0x5d21fd*/
            aP1c = v28 * (_DWORD)v29; /*0x5d2201*/
            v44 = v23; /*0x5d2205*/
            v45 = v25; /*0x5d2209*/
            v46 = v28; /*0x5d220d*/
            v47 = v29; /*0x5d2211*/
          }
          v24 += 4; /*0x5d221e*/
          if ( ++v35 >= v41 ) /*0x5d2227*/
            break; /*0x5d2227*/
          v23 = v42; /*0x5d21b6*/
        }
        result = (ObjectClass *)this; /*0x5d2229*/
      }
      v30 = *(_DWORD *)&result->__pad_0[12]; /*0x5d222d*/
      v31 = v45; /*0x5d2230*/
      v32 = (_DWORD *)(v30 + 16 * v22); /*0x5d2237*/
      *v32 = v44; /*0x5d223d*/
      v33 = v46; /*0x5d223f*/
      v32[1] = v31; /*0x5d2243*/
      result = v47; /*0x5d2246*/
      v32[2] = v33; /*0x5d224a*/
      v32[3] = result; /*0x5d224d*/
    }
    else
    {
      v11 = (_DWORD *)(*(_DWORD *)&result->__pad_0[12] + 16 * v5); /*0x5d208a*/
      *v11 = *(_DWORD *)aP1->__pad_0; /*0x5d208d*/
      v11[1] = *(_DWORD *)&aP1->__pad_0[4]; /*0x5d2093*/
      v11[2] = *(_DWORD *)&aP1->__pad_0[8]; /*0x5d2099*/
      v11[3] = *(_DWORD *)&aP1->__pad_0[12]; /*0x5d20a0*/
      ++*(_DWORD *)&result->__pad_0[4]; /*0x5d20a8*/
    }
    return result->__pad_0; /*0x5d20af*/
  }
  v6 = *(_DWORD *)aP1->__pad_0; /*0x5d2010*/
  v7 = *(ObjectClass **)&aP1->__pad_0[4]; /*0x5d2012*/
  v8 = *(int **)&result->__pad_0[12]; /*0x5d2015*/
  while ( 1 ) /*0x5d2020*/
  {
    aP1a = 0; /*0x5d2020*/
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
    aP1a = 1; /*0x5d203b*/
LABEL_11:
    v10 = v8[1]; /*0x5d2040*/
    if ( (int)v7 >= v10 ) /*0x5d2045*/
    {
      if ( v10 + v8[3] < (int)v7 ) /*0x5d205a*/
        goto LABEL_16; /*0x5d205a*/
    }
    else if ( (int)&v7->__pad_0[v39] < v10 ) /*0x5d204f*/
    {
      goto LABEL_16; /*0x5d204f*/
    }
    if ( aP1a == 1 ) /*0x5d2061*/
      break; /*0x5d2061*/
LABEL_16:
    v8 += 4; /*0x5d2063*/
    if ( ++v34 >= v5 ) /*0x5d2071*/
    {
      result = (ObjectClass *)this; /*0x5d2073*/
      goto LABEL_18; /*0x5d2073*/
    }
    v4 = v37; /*0x5d201a*/
  }
  v12 = *v8; /*0x5d20b6*/
  v13 = (ObjectClass *)v8[1]; /*0x5d20b8*/
  v14 = v6 + v37; /*0x5d20bb*/
  aP1b = (ObjectClass *)((char *)v7 + v39); /*0x5d20c4*/
  v15 = *v8 + v8[2]; /*0x5d20ce*/
  v16 = (int)&v13->__pad_0[v8[3]]; /*0x5d20d0*/
  if ( v6 < v12 ) /*0x5d20d4*/
    v12 = v6; /*0x5d20d6*/
  v44 = v12; /*0x5d20da*/
  if ( (int)v7 < (int)v13 ) /*0x5d20de*/
    v13 = v7; /*0x5d20e0*/
  v45 = v13; /*0x5d20e4*/
  if ( v14 <= v15 ) /*0x5d20e8*/
    v46 = v15 - v12; /*0x5d20f4*/
  else
    v46 = v14 - v12; /*0x5d20ec*/
  if ( (int)aP1b <= v16 ) /*0x5d20fe*/
    v47 = (ObjectClass *)(v16 - (_DWORD)v13); /*0x5d210a*/
  else
    v47 = (ObjectClass *)((char *)aP1b - (char *)v13); /*0x5d2102*/
  v17 = v34; /*0x5d2116*/
  this->vtable2 = v41 - 1; /*0x5d211d*/
  if ( v34 < v41 - 1 ) /*0x5d2120*/
  {
    v18 = 16 * v34; /*0x5d2124*/
    do /*0x5d214f*/
    {
      v19 = this->vtable4; /*0x5d2127*/
      v20 = (_DWORD *)(v18 + v19 + 16); /*0x5d212a*/
      v21 = (_DWORD *)(v18 + v19); /*0x5d212e*/
      ++v17; /*0x5d2130*/
      v18 += 16; /*0x5d2131*/
      *v21 = *v20; /*0x5d2136*/
      v21[1] = v20[1]; /*0x5d213b*/
      v21[2] = v20[2]; /*0x5d2141*/
      v21[3] = v20[3]; /*0x5d2147*/
    }
    while ( v17 < this->vtable2 ); /*0x5d214f*/
  }
  return Surface::CopyRect(this, (ObjectClass *)&v44); /*0x5d208c*/
}


// ==== 0x005D2260  GameClass::loadScenarioFiles  this=ObjectClass  sig=csp ====
int __thiscall GameClass::loadScenarioFiles(int *this, ObjectClass *aP1)
{
  int result; // eax
  ObjectClass *v4; // ebx
  int v5; // edi
  int *v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+1Ch] [ebp-24h]
  int v8; // [esp+20h] [ebp-20h] BYREF
  int v9; // [esp+24h] [ebp-1Ch]
  int v10; // [esp+28h] [ebp-18h]
  int v11; // [esp+2Ch] [ebp-14h]
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  result = *(this + 1); /*0x5d2267*/
  if ( result > 0 ) /*0x5d226c*/
  {
    GetClientRect((HWND)g_hWnd, &Rect); /*0x5d227e*/
    ClientToScreen((HWND)g_hWnd, (LPPOINT)&Rect); /*0x5d228f*/
    v4 = aP1; /*0x5d229b*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228] ) /*0x5d22a1*/
      (*(void (__thiscall **)(_DWORD, ObjectClass *, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 60))( /*0x5d22a8*/
        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
        aP1,
        0);
    result = *(this + 1); /*0x5d22ab*/
    v5 = 0; /*0x5d22af*/
    if ( result > 0 ) /*0x5d22b3*/
    {
      result = 0; /*0x5d22b5*/
      v7 = 0; /*0x5d22b8*/
      do /*0x5d231d*/
      {
        v6 = (int *)(*(this + 3) + result); /*0x5d22c7*/
        v8 = *v6; /*0x5d22ce*/
        v9 = v6[1]; /*0x5d22d5*/
        v10 = v6[2]; /*0x5d22dc*/
        v11 = v6[3]; /*0x5d22e9*/
        v4 = aP1; /*0x5d22f3*/
        v8 += Rect.left; /*0x5d22f7*/
        v9 += Rect.top; /*0x5d2301*/
        (*(void (__thiscall **)(_DWORD, int *, ObjectClass *, int *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9404] /*0x5d2309*/
                                                                                 + 8))(
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9404],
          &v8,
          aP1,
          v6,
          0,
          1);
        ++v5; /*0x5d2313*/
        result = v7 + 16; /*0x5d2314*/
        v7 += 16; /*0x5d2319*/
      }
      while ( v5 < *(this + 1) ); /*0x5d231d*/
    }
    *(this + 1) = 0; /*0x5d2320*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228] ) /*0x5d2330*/
      return (*(int (__thiscall **)(_DWORD, ObjectClass *, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 64))( /*0x5d2337*/
               *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
               v4,
               0);
  }
  return result; /*0x5d233a*/
}


// ==== 0x005D2350  sub_5D2350  this=VOID_PTR  sig=csp ====
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
      if ( MEMORY[0x887640] ) /*0x5d239e*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 60))(MEMORY[0x887640], a1, 0); /*0x5d23a5*/
      v3 = *a2; /*0x5d23af*/
      v4 = a2[1]; /*0x5d23b3*/
      v5[2] = a2[2]; /*0x5d23b9*/
      v5[3] = a2[3]; /*0x5d23c6*/
      v5[1] = Rect.top + v4; /*0x5d23ce*/
      v5[0] = Rect.left + v3; /*0x5d23de*/
      result = (*(int (__thiscall **)(int, _DWORD *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x5d23e5*/
                 MEMORY[0x887308],
                 v5,
                 a1,
                 a2,
                 0,
                 1);
      if ( MEMORY[0x887640] ) /*0x5d23f1*/
        return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 64))(MEMORY[0x887640], a1, 0); /*0x5d23f8*/
    }
  }
  return result; /*0x5d23fb*/
}


// ==== 0x005D2410  GameClass::FrameLoop  this=ObjectClass  sig=csp ====
int __thiscall GameClass::FrameLoop(int *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v6; // eax
  bool v7; // zf
  int result; // eax
  DWORD Ticks; // [esp+10h] [ebp-18h]
  int v10; // [esp+18h] [ebp-10h]

  Ticks = Timer::GetTicks(); /*0x5d2428*/
  v10 = 1; /*0x5d242c*/
  do /*0x5d2511*/
  {
    do /*0x5d24dc*/
    {
      Event::Dispatch(); /*0x5d2437*/
      (*(void (__thiscall **)(int *))(*this + 8))(this); /*0x5d2440*/
      DDraw::WaitForIdle(); /*0x5d2443*/
      DSurface::RenderToSurface(this, *(ObjectClass **)&MEMORY[0x87F8E4].__pad_5568[9408]); /*0x5d2451*/
      GameClass::loadScenarioFiles(this, *(ObjectClass **)&MEMORY[0x87F8E4].__pad_5568[9408]); /*0x5d245f*/
      MessageLoop(); /*0x5d2464*/
      if ( !MEMORY[0xA8D63C].__pad_14B0[660] ) /*0x5d2470*/
      {
        if ( Ticks != -1 ) /*0x5d2478*/
        {
          v3 = Timer::GetTicks() - Ticks; /*0x5d2487*/
          if ( v3 >= v10 ) /*0x5d248d*/
            v4 = 0; /*0x5d2493*/
          else
            v4 = v10 - v3; /*0x5d248f*/
          v10 = v4; /*0x5d2495*/
        }
        DDraw::HandleSuspend(this); /*0x5d249f*/
        Ticks = Timer::GetTicks(); /*0x5d24b3*/
      }
      Sleep(0); /*0x5d24b9*/
      v5 = v10; /*0x5d24bf*/
      if ( Ticks != -1 ) /*0x5d24c5*/
      {
        v6 = Timer::GetTicks() - Ticks; /*0x5d24d0*/
        if ( v6 >= v10 ) /*0x5d24d6*/
          break; /*0x5d24d6*/
        v5 = v10 - v6; /*0x5d24d8*/
      }
    }
    while ( v5 > 0 ); /*0x5d24dc*/
    Ticks = Timer::GetTicks(); /*0x5d24e2*/
    result = a2 - 1; /*0x5d2504*/
    v7 = a2 == 1; /*0x5d2504*/
    v10 = 1; /*0x5d2509*/
    --a2; /*0x5d250d*/
  }
  while ( !v7 ); /*0x5d2511*/
  return result; /*0x5d2517*/
}


// ==== 0x005D2530  DDraw::HandleSuspend  this=ObjectClass  sig=csp ====
char __thiscall DDraw_HandleSuspend(_DWORD *this)
{
  int v1; // eax
  int i; // edi
  int v4; // ecx
  int j; // edi
  int v6; // ecx

  LOBYTE(v1) = MEMORY[0xA8ED80]; /*0x5d2530*/
  if ( MEMORY[0xA8ED80] != 1 ) /*0x5d253b*/
  {
    Debug::Log(aMsenginePausin); /*0x5d2546*/
    for ( i = 0; i < this->owningHouseIndex; ++i ) /*0x5d2555*/
    {
      v4 = *(_DWORD *)(this->referenceCount + 4 * i); /*0x5d255a*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x5d255f*/
    }
    while ( !MEMORY[0xA8ED80] ) /*0x5d2571*/
    {
      Debug::Log(aMsengineSleepi); /*0x5d257e*/
      Sleep(0x1F4u); /*0x5d258b*/
      MessageLoop(); /*0x5d258d*/
    }
    Debug::Log(aMsengineResumi); /*0x5d25a0*/
    v1 = this->owningHouseIndex; /*0x5d25a5*/
    for ( j = 0; j < v1; ++j ) /*0x5d25af*/
    {
      v6 = *(_DWORD *)(this->referenceCount + 4 * j); /*0x5d25b4*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6); /*0x5d25b9*/
      v1 = this->owningHouseIndex; /*0x5d25bc*/
    }
  }
  return v1; /*0x5d25c4*/
}


// ==== 0x005D25D0  ObjectClass::method_5D25D0  this=ObjectClass  sig=csp ====
char __thiscall sub_5D25D0(int this, char *Source, int a3)
{
  char **v4; // eax
  char **v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx

  if ( !Source || !a3 ) /*0x5d25e3*/
    return 0; /*0x5d25e3*/
  v4 = (char **)__2_YAPAXI_Z(0xCu); /*0x5d25e7*/
  v5 = v4 ? Audio::SetSoundFileName(v4, Source, a3) : 0;
  v6 = *(_DWORD *)(this + 56); /*0x5d2602*/
  if ( *(_DWORD *)(this + 64) >= v6 ) /*0x5d260d*/
  {
    if ( !*(_BYTE *)(this + 61) && v6 ) /*0x5d2618*/
      return 0; /*0x5d2618*/
    v7 = *(_DWORD *)(this + 68); /*0x5d261a*/
    if ( v7 <= 0 /*0x5d262a*/
      || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 48) + 8))(this + 48, v6 + v7, 0) )
    {
      return 0; /*0x5d264a*/
    }
  }
  v8 = *(_DWORD *)(this + 64); /*0x5d2631*/
  v9 = *(_DWORD *)(this + 52); /*0x5d2634*/
  *(_DWORD *)(this + 64) = v8 + 1; /*0x5d263a*/
  *(_DWORD *)(v9 + 4 * v8) = v5; /*0x5d263d*/
  return 1; /*0x5d2640*/
}


// ==== 0x005D2650  ObjectClass::method_5D2650  this=ObjectClass  sig=csp ====
void __thiscall sub_5D2650(_DWORD *this, void *a2, int a3)
{
  int v4; // esi
  int v5; // eax

  if ( a2 ) /*0x5d265c*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x5d265e*/
    {
      v4 = 0; /*0x5d266a*/
      if ( (int)this->q040 > 0 ) /*0x5d266e*/
      {
        while ( _strcmpi(a2, **(const void ***)(this->attachedTag + 4 * v4)) ) /*0x5d2684*/
        {
          if ( ++v4 >= this->q040 ) /*0x5d268c*/
            return; /*0x5d268c*/
        }
        v5 = Math::RoundToInt((double)a3 * MEMORY[0xA8EB98]); /*0x5d269f*/
        nullsub_192(v5); /*0x5d26a7*/
      }
    }
  }
}


// ==== 0x005D26C0  Team::ReleaseAll  this=ObjectClass  sig=csp ====
int __thiscall Team::ReleaseAll(int *this, ObjectClass *aP1)
{
  int v3; // esi
  int result; // eax
  int v5; // ecx

  v3 = 0; /*0x5d26c4*/
  result = *(this + 10); /*0x5d26c6*/
  if ( result > 0 ) /*0x5d26cb*/
  {
    do /*0x5d26e4*/
    {
      v5 = *(_DWORD *)(*(this + 7) + 4 * v3); /*0x5d26d6*/
      (*(void (__thiscall **)(int, ObjectClass *))(*(_DWORD *)v5 + 32))(v5, aP1); /*0x5d26db*/
      result = *(this + 10); /*0x5d26de*/
      ++v3; /*0x5d26e1*/
    }
    while ( v3 < result ); /*0x5d26e4*/
  }
  return result; /*0x5d26e7*/
}


// ==== 0x005D26F0  MSEngine::Release  this=MSEngine  sig=csp ====
void MSEngine_Destru::Release()
{
  ; /*0x5d26f0*/
}


// ==== 0x005D2700  MSEngine::QueryInterface  this=MSEngine  sig=csp ====
MSEngine *__thiscall MSEngine_Destru::QueryInterface(_DWORD *Block, char a2)
{
  MSEngine::Destruct(Block); /*0x5d2703*/
  if ( (a2 & 1) != 0 ) /*0x5d270d*/
    __3_YAXPAX_Z(Block); /*0x5d2710*/
  return (MSEngine *)Block; /*0x5d271a*/
}


// ==== 0x005D2720  _DynamicVectorClass_PAVMSAnim::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::sub_5D2720(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d2726*/
  *(_DWORD *)(this + 16) = 0; /*0x5d2729*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d2730*/
  {
    __3_YAXPAX_Z(v2); /*0x5d2736*/
    *(_DWORD *)(this + 4) = 0; /*0x5d273e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d2741*/
  *(_DWORD *)(this + 8) = 0; /*0x5d2744*/
}


// ==== 0x005D2750  _DynamicVectorClass_PAVMSAnim::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfx::sub_5D2750(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d2750*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d2765*/
  else
    return 0; /*0x5d2757*/
}


// ==== 0x005D2770  _VectorClass_PAVMSAnim::Seek  this=VectorClass  sig=csp ====
int __thiscall CampaignProperties_WorldDominationTour_22_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d277a*/
}


// ==== 0x005D2780  _DynamicVectorClass_PAVMSSfx::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_Point2D::sub_5D2780(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d2786*/
  *(_DWORD *)(this + 16) = 0; /*0x5d2789*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d2790*/
  {
    __3_YAXPAX_Z(v2); /*0x5d2796*/
    *(_DWORD *)(this + 4) = 0; /*0x5d279e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d27a1*/
  *(_DWORD *)(this + 8) = 0; /*0x5d27a4*/
}


// ==== 0x005D27B0  _DynamicVectorClass_PAVMSSfx::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_Point2D::sub_5D27B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d27b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d27c5*/
  else
    return 0; /*0x5d27b7*/
}


// ==== 0x005D27D0  _VectorClass_PAVMSSfx::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d27da*/
}


// ==== 0x005D27E0  _VectorClass_PAVMSAnim::FindItemIndex  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::sub_5D27E0(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d27e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d27ed*/
  {
    v3 = 0; /*0x5d27ef*/
    if ( v2 <= 0 ) /*0x5d27f3*/
      return 1; /*0x5d2813*/
    v4 = (_DWORD *)*(this + 1); /*0x5d27f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d27fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d2804*/
    {
      ++v3; /*0x5d2806*/
      ++v4; /*0x5d2807*/
      if ( v3 >= v2 ) /*0x5d280c*/
        return 1; /*0x5d280c*/
    }
  }
  return 0; /*0x5d280e*/
}


// ==== 0x005D2820  _VectorClass_PAVMSAnim::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::sub_5D2820(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d282c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d2836*/
    if ( a3 ) /*0x5d283c*/
      v4 = a3; /*0x5d2852*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d284e*/
    *((_BYTE *)this + 12) = 1; /*0x5d2856*/
    if ( v4 ) /*0x5d285a*/
    {
      if ( this->Items ) /*0x5d2865*/
      {
        v6 = this->Capacity; /*0x5d286c*/
        if ( a2 < v6 ) /*0x5d2871*/
          v6 = a2; /*0x5d2873*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d2879*/
          ++i; /*0x5d287e*/
        if ( *((_BYTE *)this + 13) ) /*0x5d288b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d2896*/
          this->Items = 0; /*0x5d289e*/
        }
      }
      this->Items = v4; /*0x5d28a7*/
      this->Capacity = a2; /*0x5d28af*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d28b2*/
      return 1; /*0x5d28b8*/
    }
    else
    {
      return 0; /*0x5d285f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d28c2*/
    return 1; /*0x5d28c8*/
  }
}


// ==== 0x005D28D0  _VectorClass_PAVMSAnim::Destroy_0  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::sub_5D28D0(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d28dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d28e3*/
    *(_DWORD *)(this + 4) = 0; /*0x5d28eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d28ee*/
  *(_DWORD *)(this + 8) = 0; /*0x5d28f1*/
}


// ==== 0x005D2900  _VectorClass_PAVMSAnim::Read  this=VectorClass  sig=csp ====
int __thiscall CampaignProperties_WorldDominationTour_22_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d2900*/
    return 0; /*0x5d2908*/
  v3 = *(_DWORD *)(this + 8); /*0x5d290e*/
  result = 0; /*0x5d2911*/
  if ( v3 <= 0 ) /*0x5d2915*/
    return -1; /*0x5d292c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d291b*/
  {
    if ( ++result >= v3 ) /*0x5d292a*/
      return -1; /*0x5d292a*/
  }
  return result; /*0x5d290a*/
}


// ==== 0x005D2940  _VectorClass_PAVMSAnim::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall CampaignProperties_WorldDominationTour_22_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d2940*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d2955*/
  else
    return 0; /*0x5d2947*/
}


// ==== 0x005D2960  _DynamicVectorClass_PAVMSAnim::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::sub_5D2960(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d296c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d2972*/
    if ( a3 ) /*0x5d2978*/
      v4 = a3; /*0x5d298e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d298a*/
    *((_BYTE *)this + 12) = 1; /*0x5d2992*/
    if ( !v4 ) /*0x5d2996*/
      return 0; /*0x5d2a0a*/
    if ( this->Items ) /*0x5d2998*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d299f*/
      if ( a2 < v5 ) /*0x5d29a4*/
        v5 = a2; /*0x5d29a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d29ac*/
        ++i; /*0x5d29b1*/
      if ( *((_BYTE *)this + 13) ) /*0x5d29be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d29c9*/
        this->Items = 0; /*0x5d29d1*/
      }
    }
    this->Items = v4; /*0x5d29da*/
    this->DynamicVector_field_0x8 = a2; /*0x5d29e2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d29e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d29ee*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d29f1*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d29f9*/
    this->DynamicVector_field_0x10 = v7; /*0x5d29fb*/
  return 1; /*0x5d29fe*/
}


// ==== 0x005D2A10  _DynamicVectorClass_PAVMSAnim::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::sub_5D2A10(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d2a10*/
  result = 0; /*0x5d2a13*/
  if ( v2 <= 0 ) /*0x5d2a18*/
    return -1; /*0x5d2a2f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d2a1e*/
  {
    if ( ++result >= v2 ) /*0x5d2a2d*/
      return -1; /*0x5d2a2d*/
  }
  return result; /*0x5d2a32*/
}


// ==== 0x005D2A40  _VectorClass_PAVMSSfx::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d2a42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d2a4d*/
  {
    v3 = 0; /*0x5d2a4f*/
    if ( v2 <= 0 ) /*0x5d2a53*/
      return 1; /*0x5d2a73*/
    v4 = (_DWORD *)*(this + 1); /*0x5d2a55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d2a5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d2a64*/
    {
      ++v3; /*0x5d2a66*/
      ++v4; /*0x5d2a67*/
      if ( v3 >= v2 ) /*0x5d2a6c*/
        return 1; /*0x5d2a6c*/
    }
  }
  return 0; /*0x5d2a6e*/
}


// ==== 0x005D2A80  _VectorClass_PAVMSSfx::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MSSfx::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d2a8c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d2a96*/
    if ( a3 ) /*0x5d2a9c*/
      v4 = a3; /*0x5d2ab2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d2aae*/
    *((_BYTE *)this + 12) = 1; /*0x5d2ab6*/
    if ( v4 ) /*0x5d2aba*/
    {
      if ( this->Items ) /*0x5d2ac5*/
      {
        v6 = this->Capacity; /*0x5d2acc*/
        if ( a2 < v6 ) /*0x5d2ad1*/
          v6 = a2; /*0x5d2ad3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d2ad9*/
          ++i; /*0x5d2ade*/
        if ( *((_BYTE *)this + 13) ) /*0x5d2aeb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d2af6*/
          this->Items = 0; /*0x5d2afe*/
        }
      }
      this->Items = v4; /*0x5d2b07*/
      this->Capacity = a2; /*0x5d2b0f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d2b12*/
      return 1; /*0x5d2b18*/
    }
    else
    {
      return 0; /*0x5d2abf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d2b22*/
    return 1; /*0x5d2b28*/
  }
}


// ==== 0x005D2B30  _VectorClass_PAVMSSfx::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MSSfx::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d2b3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d2b43*/
    *(_DWORD *)(this + 4) = 0; /*0x5d2b4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d2b4e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d2b51*/
}


// ==== 0x005D2B60  _VectorClass_PAVMSSfx::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MSSfx::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d2b60*/
    return 0; /*0x5d2b68*/
  v3 = *(_DWORD *)(this + 8); /*0x5d2b6e*/
  result = 0; /*0x5d2b71*/
  if ( v3 <= 0 ) /*0x5d2b75*/
    return -1; /*0x5d2b8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d2b7b*/
  {
    if ( ++result >= v3 ) /*0x5d2b8a*/
      return -1; /*0x5d2b8a*/
  }
  return result; /*0x5d2b6a*/
}


// ==== 0x005D2BA0  _VectorClass_PAVMSSfx::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MSSfx::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d2ba0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d2bb5*/
  else
    return 0; /*0x5d2ba7*/
}


// ==== 0x005D2BC0  _DynamicVectorClass_PAVMSSfx::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_Point2D::sub_5D2BC0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d2bcc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d2bd2*/
    if ( a3 ) /*0x5d2bd8*/
      v4 = a3; /*0x5d2bee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d2bea*/
    *((_BYTE *)this + 12) = 1; /*0x5d2bf2*/
    if ( !v4 ) /*0x5d2bf6*/
      return 0; /*0x5d2c6a*/
    if ( this->Items ) /*0x5d2bf8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d2bff*/
      if ( a2 < v5 ) /*0x5d2c04*/
        v5 = a2; /*0x5d2c06*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d2c0c*/
        ++i; /*0x5d2c11*/
      if ( *((_BYTE *)this + 13) ) /*0x5d2c1e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d2c29*/
        this->Items = 0; /*0x5d2c31*/
      }
    }
    this->Items = v4; /*0x5d2c3a*/
    this->DynamicVector_field_0x8 = a2; /*0x5d2c42*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d2c45*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d2c4e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d2c51*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d2c59*/
    this->DynamicVector_field_0x10 = v7; /*0x5d2c5b*/
  return 1; /*0x5d2c5e*/
}


// ==== 0x005D2C70  _DynamicVectorClass_PAVMSSfx::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_Point2D::sub_5D2C70(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d2c70*/
  result = 0; /*0x5d2c73*/
  if ( v2 <= 0 ) /*0x5d2c78*/
    return -1; /*0x5d2c8f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d2c7e*/
  {
    if ( ++result >= v2 ) /*0x5d2c8d*/
      return -1; /*0x5d2c8d*/
  }
  return result; /*0x5d2c92*/
}


// ==== 0x005D2CA0  _VectorClass_PAVMSAnim::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall CampaignProperties_WorldDominationTour_22_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d2ca3*/
  *Block = &vt_VectorClass_MSAnim; /*0x5d2ca6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d2cb0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2cb8*/
    *(Block + 1) = 0; /*0x5d2cc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d2ccb*/
  *(Block + 2) = 0; /*0x5d2cd1*/
  if ( (a2 & 1) != 0 ) /*0x5d2cd8*/
    __3_YAXPAX_Z(Block); /*0x5d2cdb*/
  return (VectorClass *)Block; /*0x5d2ce5*/
}


// ==== 0x005D2CF0  _DynamicVectorClass_PAVMSAnim::Constructor_VectorClass_MSAnim___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_MSSfx::Constructor_VectorClass_MSAnim___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d2cf3*/
  *Block = &vt_VectorClass_MSAnim; /*0x5d2cf6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d2d00*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2d08*/
    *(Block + 1) = 0; /*0x5d2d10*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d2d1b*/
  *(Block + 2) = 0; /*0x5d2d21*/
  if ( (a2 & 1) != 0 ) /*0x5d2d28*/
    __3_YAXPAX_Z(Block); /*0x5d2d2b*/
  return (DynamicVector *)Block; /*0x5d2d35*/
}


// ==== 0x005D2D40  _VectorClass_PAVMSSfx::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_MSSfx::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d2d43*/
  *Block = &vt_VectorClass_MSSfx; /*0x5d2d46*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d2d50*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2d58*/
    *(Block + 1) = 0; /*0x5d2d60*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d2d6b*/
  *(Block + 2) = 0; /*0x5d2d71*/
  if ( (a2 & 1) != 0 ) /*0x5d2d78*/
    __3_YAXPAX_Z(Block); /*0x5d2d7b*/
  return (VectorClass *)Block; /*0x5d2d85*/
}


// ==== 0x005D2D90  _DynamicVectorClass_PAVMSSfx::Constructor_VectorClass_MSSfx___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_Point2D::Constructor_VectorClass_MSSfx___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d2d93*/
  *Block = &vt_VectorClass_MSSfx; /*0x5d2d96*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d2da0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2da8*/
    *(Block + 1) = 0; /*0x5d2db0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d2dbb*/
  *(Block + 2) = 0; /*0x5d2dc1*/
  if ( (a2 & 1) != 0 ) /*0x5d2dc8*/
    __3_YAXPAX_Z(Block); /*0x5d2dcb*/
  return (DynamicVector *)Block; /*0x5d2dd5*/
}


// ==== 0x005D2DE0  MPBattleClass::drawTeamDropdown  this=MPBattleClass  sig=ida-proto ====
int sub_5D2DE0()
{
  MEMORY[0xABFBD0] = 0; /*0x5d2de2*/
  MEMORY[0xABFBD4] = 0; /*0x5d2de7*/
  MEMORY[0xABFBD8] = 0; /*0x5d2dec*/
  MEMORY[0xABFBDC] = 0; /*0x5d2df1*/
  return 0; /*0x5d2df6*/
}


// ==== 0x005D2E00  CampaignClass::Constructor_1  this=MSFont  sig=csp ====
_BYTE *__thiscall sub_5D2E00(_BYTE *this, __int16 a2)
{
  this->MSFont_field_0x0C = 0; /*0x5d2e05*/
  *(this + 13) = 0; /*0x5d2e08*/
  *(this + 14) = 0; /*0x5d2e0b*/
  *(_DWORD *)this = &MSFont::`vftable'; /*0x5d2e13*/
  FontClass::LoadFontResources((int)this, a2); /*0x5d2e19*/
  ++MEMORY[0xABFBE0]; /*0x5d2e24*/
  return this; /*0x5d2e2b*/
}


// ==== 0x005D2E30  MSFont::Constructor_MSFont  this=MSFont  sig=csp ====
void __thiscall sub_5D2E30(void *this)
{
  int *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *(_DWORD *)this = &MSFont::`vftable'; /*0x5d2e33*/
  if ( !--MEMORY[0xABFBE0] ) /*0x5d2e44*/
  {
    v2 = (int *)&MEMORY[0xABFBE8]; /*0x5d2e47*/
    do /*0x5d2e5f*/
    {
      if ( *v2 ) /*0x5d2e4e*/
      {
        *v2 = 0; /*0x5d2e52*/
        *((_BYTE *)v2 + 4) = 0; /*0x5d2e54*/
      }
      v2 += 2; /*0x5d2e57*/
    }
    while ( (int)v2 < (int)&MEMORY[0xABFC00] ); /*0x5d2e5f*/
    v3 = (void (__thiscall ***)(_DWORD, int))this->texHeight; /*0x5d2e61*/
    if ( v3 ) /*0x5d2e66*/
      (**v3)(v3, 1); /*0x5d2e6c*/
    if ( this->MSFont_field_0x14 ) /*0x5d2e6e*/
    {
      if ( *((_BYTE *)this + 28) == 1 ) /*0x5d2e79*/
        __3_YAXPAX_Z(*((void **)this + 5)); /*0x5d2e7c*/
    }
    this->MSFont_field_0x14 = 0; /*0x5d2e84*/
    *((_BYTE *)this + 28) = 0; /*0x5d2e87*/
  }
}


// ==== 0x005D2E90  FontClass::LoadFontResources  this=int  sig=csp ====
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
  if ( !MEMORY[0xABFBE0] )
  {
    *(_BYTE *)(this + 28) = 0; /*0x5d2eb7*/
    v3 = SearchMIXFile(MEMORY[0x830664], 0); /*0x5d2eba*/
    *(_DWORD *)(this + 20) = v3; /*0x5d2ec1*/
    if ( !v3 ) /*0x5d2ec4*/
    {
      FileClass::SetFileName(v16, MEMORY[0x830664]); /*0x5d2ecf*/
      *(_DWORD *)(this + 20) = CCFileClass::ReadEntireFile(v16); /*0x5d2ee2*/
      *(_BYTE *)(this + 28) = 1; /*0x5d2ee5*/
      Debug::Log(); /*0x5d2ee9*/
    }
    if ( !*(_DWORD *)(this + 20) ) /*0x5d2ef1*/
      goto LABEL_15; /*0x5d2ef1*/
    if ( (_BYTE)a2 == 1 ) /*0x5d2eff*/
      FileClass::SetFileName(v16, MEMORY[0x830630]); /*0x5d2f06*/
    else
      FileClass::SetFileName(v16, stru_830620); /*0x5d2f11*/
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
      v9 = (char *)&MEMORY[0x886080] + 3 * (v6 % 256); /*0x5d2f68*/
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
    *(_DWORD *)(this + 16) = ((4 * (unsigned __int8)v5[205]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]) /*0x5d2fff*/
                           | ((4 * (unsigned __int8)v5[206]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
                           | ((4 * (unsigned __int8)v5[204]) >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
    __3_YAXPAX_Z(v5); /*0x5d3002*/
    v12 = __2_YAPAXI_Z(0x188u); /*0x5d300c*/
    v13 = v12 ? ConvertClass::Construct(v12, (int)&MEMORY[0x886080], (int)&MEMORY[0x886080], MEMORY[0x887308], 1, 0) : 0;
    *(_DWORD *)(this + 24) = v13; /*0x5d303c*/
    if ( !v13 ) /*0x5d303f*/
    {
LABEL_15:
      v16[0] = &vt_CCFileClass; /*0x5d3045*/
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
  v16[0] = &vt_CCFileClass; /*0x5d308c*/
  v18 = 0; /*0x5d3094*/
  Vector::Clear((int)v17); /*0x5d3098*/
  v16[0] = &off_7E1668; /*0x5d30a1*/
  BufferIOFileClass::Dtor(v16); /*0x5d30a9*/
  return 1; /*0x5d3067*/
}


// ==== 0x005D30C0  ObjectClass::method_5D30C0  this=VOID_PTR  sig=csp ====
_DWORD *__thiscall sub_5D30C0(size_t *this, wchar_t *String, _DWORD *a3)
{
  wchar_t *v3; // esi
  int v4; // ebx
  size_t v6; // eax
  int v7; // ebp
  int v8; // edi
  int v10; // [esp+Ch] [ebp-4h]

  v3 = String; /*0x5d30c3*/
  v4 = 0; /*0x5d30c7*/
  v10 = 0; /*0x5d30ce*/
  if ( String && (v6 = wcslen(String)) != 0 ) /*0x5d30df*/
  {
    v7 = *(this + 2); /*0x5d30e2*/
    while ( 1 ) /*0x5d30e9*/
    {
      for ( LOWORD(v6) = *v3; *v3; LOWORD(v6) = *v3 ) /*0x5d30e9*/
      {
        if ( (_WORD)v6 == 10 ) /*0x5d30f5*/
          break; /*0x5d30f5*/
        ++v3; /*0x5d30fc*/
        v6 = (*(int (__thiscall **)(size_t *, size_t))(*this + 4))(this, v6); /*0x5d30ff*/
        v4 += v6; /*0x5d3102*/
      }
      if ( v4 > v10 ) /*0x5d3110*/
        v10 = v4; /*0x5d3112*/
      if ( *v3 == 10 ) /*0x5d311a*/
      {
        v6 = *(this + 2); /*0x5d311c*/
        ++v3; /*0x5d311f*/
        v7 += v6; /*0x5d3122*/
      }
      if ( !*v3 ) /*0x5d3124*/
        break; /*0x5d3124*/
      v4 = 0; /*0x5d30e7*/
    }
    v8 = *(this + 1); /*0x5d312a*/
    a3[3] = v7; /*0x5d3137*/
    a3[2] = v10 + v8; /*0x5d313a*/
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
int __thiscall MSFont::_vt02(void *this, __int16 *a2)
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
      i += (*(int (__thiscall **)(void *, __int16))(this->MSFont_field_0x04)(this, v5); /*0x5d319b*/
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
int __stdcall MSFont::_vt01(unsigned __int8 szSrc)
{
  int v2; // eax
  _DWORD v3[4]; // [esp+4h] [ebp-10h] BYREF

  CharToOemBuffA((LPCSTR)&szSrc, (LPSTR)&szSrc, 1u); /*0x5d31ea*/
  if ( szSrc == 32 ) /*0x5d31f6*/
    return 8; /*0x5d31f8*/
  if ( szSrc <= 0x20u ) /*0x5d3204*/
    return 0; /*0x5d3243*/
  v2 = szSrc - 33; /*0x5d320f*/
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
void __thiscall MSFont::_vt04(int *this, int *a2, unsigned __int8 szSrc, int a4, int a5, int a6, int a7)
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
    DrawToSurfaceSHP((int)a2, *(this + 6), *(this + 5), a6 + v9, v13, v12, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x5d3319*/
  }
}


// ==== 0x005D3330  MSFont::ddtor  this=MSFont  sig=csp ====
__int16 __thiscall MSFont::_vt03(int *this, int a2, _WORD *a3, int a4, int a5, int a6)
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
        v8 = *(this + 2) + a5; /*0x5d3362*/
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
          DrawToSurfaceSHP(a2, *(this + 6), *(this + 5), a6 + v10, v17, v12, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x5d3413*/
          v6 = a3; /*0x5d3418*/
        }
        LOWORD(v8) = *v6; /*0x5d341c*/
        v8 = (*(int (__thiscall **)(int *, int))(*this + 4))(this, v8); /*0x5d3424*/
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
MSFont *__thiscall MSFont::QueryInterface(void *Block, char a2)
{
  MSFont::Constructor_MSFont(Block); /*0x5d3453*/
  if ( (a2 & 1) != 0 ) /*0x5d345d*/
    __3_YAXPAX_Z(Block); /*0x5d3460*/
  return (MSFont *)Block; /*0x5d346a*/
}


// ==== 0x005D3470  MPBattleClass::populateTeamDropdownForPlayer  this=MPBattleClass  sig=ida-proto ====
int sub_5D3470()
{
  MEMORY[0xABFC00] = 0; /*0x5d3472*/
  MEMORY[0xABFC04] = 0; /*0x5d3477*/
  MEMORY[0xABFC08] = 0; /*0x5d347c*/
  MEMORY[0xABFC0C] = 0; /*0x5d3481*/
  return 0; /*0x5d3486*/
}


// ==== 0x005D3490  Dialog::ShowMessageBox  this=int  sig=csp ====
int __userpurge Dialog::ShowMessageBox@<eax>(int a1@<ebp>, _WORD *lParam, _WORD *a3, _WORD *a4, _WORD *a5, int a6)
{
  int v6; // ebx
  int v7; // edi
  int Dialog; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  char v16; // [esp+Ch] [ebp-Ch]
  char v17; // [esp+Dh] [ebp-Bh]
  char v18; // [esp+Eh] [ebp-Ah]
  char v19; // [esp+Fh] [ebp-9h]
  int dwNewLong; // [esp+10h] [ebp-8h] BYREF
  int v21; // [esp+14h] [ebp-4h]

  dwNewLong = -1; /*0x5d349a*/
  v6 = 0; /*0x5d34a6*/
  v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 40))(MEMORY[0x87F7E8][8086]); /*0x5d34ab*/
  v21 = v7; /*0x5d34b3*/
  if ( !lParam || (v18 = 1, !*lParam) ) /*0x5d34b9*/
    v18 = 0; /*0x5d34c3*/
  if ( !a3 || (v19 = 1, !*a3) ) /*0x5d34d0*/
    v19 = 0; /*0x5d34db*/
  if ( !a4 || (v16 = 1, !*a4) ) /*0x5d34e8*/
    v16 = 0; /*0x5d34f3*/
  if ( !a5 || (v17 = 1, !*a5) ) /*0x5d3500*/
    v17 = 0; /*0x5d350b*/
  Screen::Capture(1, 0, 0, a1); /*0x5d3514*/
  Dialog = CreateDialog(0); /*0x5d3541*/
  v9 = Dialog; /*0x5d3546*/
  if ( Dialog ) /*0x5d354a*/
  {
    ((void (__stdcall *)(int, int, int *))SetWindowLongA)(Dialog, 8, &dwNewLong); /*0x5d3559*/
    if ( v18 ) /*0x5d3571*/
    {
      v10 = ((int (__stdcall *)(int, int))GetDlgItem)(v9, 1456); /*0x5d3579*/
      ((void (__stdcall *)(int, int, _DWORD, _WORD *))SendMessageA)(v10, 1202, 0, lParam); /*0x5d3588*/
    }
    if ( v19 ) /*0x5d3590*/
    {
      v11 = ((int (__stdcall *)(int, int))GetDlgItem)(v9, 1454); /*0x5d3598*/
      ((void (__stdcall *)(int, int, _DWORD, _WORD *))SendMessageA)(v11, 1202, 0, a3); /*0x5d35a7*/
      v6 = 1; /*0x5d35a9*/
    }
    if ( v16 ) /*0x5d35b4*/
    {
      v12 = ((int (__stdcall *)(int, int))GetDlgItem)(v9, 2); /*0x5d35b9*/
      ((void (__stdcall *)(int, int, _DWORD, _WORD *))SendMessageA)(v12, 1202, 0, a4); /*0x5d35c8*/
      v6 = 2; /*0x5d35ca*/
    }
    if ( v17 ) /*0x5d35d5*/
    {
      v13 = ((int (__stdcall *)(int, int))GetDlgItem)(v9, 1455); /*0x5d35dd*/
      ((void (__stdcall *)(int, int, _DWORD, _WORD *))SendMessageA)(v13, 1202, 0, a5); /*0x5d35ec*/
      v6 = 3; /*0x5d35ee*/
    }
    Dialog::Show(v9); /*0x5d35f5*/
    if ( v6 <= 0 ) /*0x5d35fd*/
    {
      dwNewLong = 0; /*0x5d3653*/
    }
    else
    {
      while ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 40))(MEMORY[0x87F7E8][8086]) ) /*0x5d3607*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 16))(MEMORY[0x87F7E8][8086]); /*0x5d3616*/
      while ( dwNewLong < 0 ) /*0x5d362e*/
      {
        if ( Dialog::PumpMessages() ) /*0x5d3630*/
          break; /*0x5d3637*/
        if ( !LOBYTE(MEMORY[0x87F7E8][539758]) ) /*0x5d3640*/
        {
          LOBYTE(v14) = 0; /*0x5d3642*/
          ScreenSaver::Process(v14); /*0x5d3644*/
        }
      }
    }
    Dialog::Destroy(v9); /*0x5d365d*/
    v7 = v21; /*0x5d3662*/
  }
  while ( v7 < (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 40))(MEMORY[0x87F7E8][8086]) ) /*0x5d3673*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 12))(MEMORY[0x87F7E8][8086]); /*0x5d367d*/
  return dwNewLong; /*0x5d3693*/
}


// ==== 0x005D36A0  sub_5D36A0  this=unknown  sig=csp ====
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
  MEMORY[0xABFC18] = 0; /*0x5d37c2*/
  MEMORY[0xABFC1C] = 0; /*0x5d37c7*/
  MEMORY[0xABFC20] = 0; /*0x5d37cc*/
  MEMORY[0xABFC24] = 0; /*0x5d37d1*/
  return 0; /*0x5d37d6*/
}


// ==== 0x005D37E0  sub_5D37E0  this=-  sig=ida-proto ====
void sub_5D37E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d37ec*/
  MEMORY[0xABFC30] = Math::Sqrt(v0 + v0); /*0x5d37fe*/
}


// ==== 0x005D3810  MPBattleClass::validateHouse  this=MPBattleClass  sig=ida-proto ====
void sub_5D3810()
{
  MEMORY[0xABFC80] = MEMORY[0xABFC30] / 60.0; /*0x5d381c*/
}


// ==== 0x005D3830  MPBattleClass::validateOwner  this=MPBattleClass  sig=ida-proto ====
void sub_5D3830()
{
  MEMORY[0xABFC68] = 1.0 / MEMORY[0xABFC80]; /*0x5d383c*/
}


// ==== 0x005D3850  sub_5D3850  this=-  sig=ida-proto ====
void sub_5D3850()
{
  MEMORY[0xABFC60] = 0.0174532925199433 * 45.0; /*0x5d385c*/
}


// ==== 0x005D3870  sub_5D3870  this=-  sig=ida-proto ====
void sub_5D3870()
{
  MEMORY[0xABFC38] = 0.0174532925199433 * 60.0; /*0x5d387c*/
}


// ==== 0x005D3890  sub_5D3890  this=-  sig=ida-proto ====
void sub_5D3890()
{
  MEMORY[0xABFC10] = 0.0174532925199433 * 90.0; /*0x5d389c*/
}


// ==== 0x005D38B0  sub_5D38B0  this=-  sig=ida-proto ====
__int64 sub_5D38B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFC10] - MEMORY[0xABFC38]); /*0x5d38c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFC30] * 0.5); /*0x5d38d6*/
  MEMORY[0xABFC88] = result; /*0x5d38db*/
  return result; /*0x5d38e0*/
}


// ==== 0x005D38F0  MPBattleClass::validateColor  this=MPBattleClass  sig=ida-proto ====
void sub_5D38F0()
{
  MEMORY[0xABFC40] = Math::ArcTan((double)MEMORY[0xABFC88] * 0.00390625); /*0x5d3907*/
}


// ==== 0x005D3920  MPBattleClass::validateStartPosition  this=MPBattleClass  sig=ida-proto ====
void sub_5D3920()
{
  MEMORY[0xABFC58] = Math::ArcTan((double)(2 * MEMORY[0xABFC88]) / MEMORY[0xABFC30]); /*0x5d3942*/
}


// ==== 0x005D3950  MPBattleClass::isDefaultFix  this=MPBattleClass  sig=ida-proto ====
__int64 sub_5D3950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFC88]) + 0.5); /*0x5d396b*/
  MEMORY[0xABFC7C] = result; /*0x5d3970*/
  return result; /*0x5d3976*/
}


// ==== 0x005D3980  MPBattleClass::isDefaultAI  this=MPBattleClass  sig=ida-proto ====
int sub_5D3980()
{
  MEMORY[0xABFC28] = 0; /*0x5d3982*/
  MEMORY[0xABFC2A] = 0; /*0x5d3988*/
  return 0; /*0x5d398e*/
}


// ==== 0x005D3990  MPBattleClass::randomHumanCountryIndex  this=MPBattleClass  sig=ida-proto ====
int sub_5D3990()
{
  MEMORY[0xABFC48] = 0; /*0x5d3992*/
  MEMORY[0xABFC4C] = 0; /*0x5d3997*/
  MEMORY[0xABFC50] = 0; /*0x5d399c*/
  return 0; /*0x5d39a1*/
}


// ==== 0x005D39B0  MPBattleClass::randomAICountryIndex  this=MPBattleClass  sig=ida-proto ====
int sub_5D39B0()
{
  MEMORY[0xABFC78] = 0; /*0x5d39b5*/
  MEMORY[0xABFC70] = 128; /*0x5d39bf*/
  MEMORY[0xABFC74] = 128; /*0x5d39c4*/
  return 128; /*0x5d39c9*/
}


// ==== 0x005D39D0  SessionClass::saveSettings  this=int  sig=csp ====
_DWORD *__thiscall sub_5D39D0(_DWORD *this)
{
  *this = 0; /*0x5d39da*/
  *(this + 1) = 0; /*0x5d39dc*/
  *(this + 2) = 0; /*0x5d39df*/
  *(this + 3) = 0; /*0x5d39e2*/
  *(this + 4) = 0; /*0x5d39e5*/
  *(this + 5) = 0; /*0x5d39e8*/
  *((_BYTE *)this + 24) = 0; /*0x5d39eb*/
  *((_BYTE *)this + 25) = 0; /*0x5d39ee*/
  *((_BYTE *)this + 26) = 0; /*0x5d39f1*/
  *(this + 7) = 0; /*0x5d39f4*/
  *(this + 8) = 0; /*0x5d39f7*/
  *(this + 9) = 0; /*0x5d39fa*/
  *(this + 172) = 0; /*0x5d39fd*/
  *(this + 173) = 0; /*0x5d3a03*/
  *((_WORD *)this + 348) = 0; /*0x5d3a09*/
  *(this + 175) = 0; /*0x5d3a10*/
  *(this + 176) = 0; /*0x5d3a16*/
  *(this + 177) = 0; /*0x5d3a1c*/
  *((_WORD *)this + 20) = 0; /*0x5d3a22*/
  *((_WORD *)this + 182) = 0; /*0x5d3a26*/
  memset32(this + 1312, 65537, 7u); /*0x5d3a38*/
  return this; /*0x5d3a3c*/
}


// ==== 0x005D3A40  ObjectManager::InitMessageList  this=VOID_PTR  sig=csp ====
int __thiscall sub_5D3A40(_DWORD *this)
{
  return MessageListClass::Init(this, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640); /*0x5d3a5e*/
}


// ==== 0x005D3A60  MessageListClass::Init  this=CellStruct  sig=csp ====
int __thiscall MessageListClass::Init(
        _DWORD *this,
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
        CellStruct *aP11)
{
  IUnknown *i; // edi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  int v15; // eax
  int result; // eax

  *(this + 177) = (char *)aP11 - 8; /*0x5d3a72*/
  Debug::Log(); /*0x5d3a78*/
  for ( i = (IUnknown *)*this; *this; i = (IUnknown *)*this ) /*0x5d3a7d*/
  {
    *this = (*(int (__thiscall **)(IUnknown *))(i->field_0 + 36))(i); /*0x5d3a91*/
    if ( i ) /*0x5d3a93*/
      (*(void (__thiscall **)(IUnknown *, int))i->field_0)(i, 1); /*0x5d3a9b*/
  }
  memset32(this + 1312, 65537, 7u); /*0x5d3ab3*/
  if ( *((_BYTE *)this + 25) ) /*0x5d3ab5*/
  {
    v14 = (void (__thiscall ***)(_DWORD, int))*(this + 9); /*0x5d3aba*/
    if ( v14 ) /*0x5d3abf*/
      (**v14)(v14, 1); /*0x5d3ac5*/
    *(this + 9) = 0; /*0x5d3ac7*/
  }
  *this = 0; /*0x5d3ad9*/
  *(this + 1) = a2; /*0x5d3adb*/
  this->q002 = a3; /*0x5d3ade*/
  *(this + 3) = a4; /*0x5d3ae1*/
  if ( a4 > 14 ) /*0x5d3ae4*/
    *(this + 3) = 14; /*0x5d3ae6*/
  this->q004 = a5; /*0x5d3af4*/
  if ( a5 > 112 ) /*0x5d3af7*/
    this->q004 = 112; /*0x5d3af9*/
  *(this + 5) = 19; /*0x5d3b04*/
  *((_BYTE *)this + 24) = a9; /*0x5d3b0b*/
  *((_BYTE *)this + 25) = 0; /*0x5d3b15*/
  if ( a7 == -1 || a8 == -1 ) /*0x5d3b21*/
  {
    *((_BYTE *)this + 26) = 1; /*0x5d3b2e*/
    *(this + 7) = a2; /*0x5d3b32*/
    *(this + 8) = a3; /*0x5d3b35*/
  }
  else
  {
    *((_BYTE *)this + 26) = 0; /*0x5d3b23*/
    *(this + 7) = a7; /*0x5d3b26*/
    *(this + 8) = a8; /*0x5d3b29*/
  }
  v15 = this->q004; /*0x5d3b3c*/
  *(this + 9) = 0; /*0x5d3b45*/
  *((_WORD *)this + 20) = 0; /*0x5d3b48*/
  *((_WORD *)this + 182) = 0; /*0x5d3b4c*/
  *(this + 172) = 0; /*0x5d3b53*/
  *(this + 173) = 0; /*0x5d3b59*/
  *((_WORD *)this + 348) = 0; /*0x5d3b5f*/
  *(this + 175) = a10; /*0x5d3b66*/
  *(this + 176) = a11; /*0x5d3b6c*/
  if ( a11 >= v15 ) /*0x5d3b72*/
    *(this + 176) = v15 - 1; /*0x5d3b75*/
  result = *(this + 176); /*0x5d3b7b*/
  if ( a10 >= result ) /*0x5d3b83*/
    *(this + 175) = --result; /*0x5d3b86*/
  return result; /*0x5d3b8c*/
}


// ==== 0x005D3BA0  MessageListClass::AddMessage  this=VOID_PTR  sig=csp ====
int __thiscall MessageListClass::AddMessage(
        _DWORD *this,
        IUnknown *aP1,
        IUnknown *aP2,
        CellStruct *aP3,
        int a5,
        IUnknown *aP5,
        int a7,
        char a8)
{
  AbstractClass *Instance; // edi
  ObjectClass *v11; // ebx
  int v12; // ebp
  signed int v13; // eax
  signed int v14; // edi
  int v15; // eax
  int v16; // eax
  int i; // edi
  _DWORD *v18; // edi
  _WORD *v19; // eax
  _DWORD *v20; // ecx
  int v21; // edx
  TextLabelClass *v22; // eax
  IUnknown *ecx26; // ecx
  TextLabelClass *v23; // ebx
  int v25; // edi
  int v26; // eax
  _WORD *j; // ecx
  _DWORD *v28; // ebp
  int v29; // edi
  int *v30; // eax
  int v31; // edx
  char *v32; // eax
  unsigned __int16 k; // cx
  signed int v34; // [esp+10h] [ebp-14Ch]
  signed int v35; // [esp+14h] [ebp-148h]
  wchar_t String[162]; // [esp+18h] [ebp-144h] BYREF

  Instance = TextRenderer::GetInstance(); /*0x5d3bb8*/
  if ( !aP3 ) /*0x5d3bc3*/
    return 0; /*0x5d3bd1*/
  if ( !Instance ) /*0x5d3bd6*/
    return 0; /*0x5d3be4*/
  String[0] = 0; /*0x5d3bee*/
  if ( aP1 ) /*0x5d3bf7*/
  {
    wcscpy(String, (const wchar_t *)aP1); /*0x5d3bff*/
    wcscat(String, (const wchar_t *)&stru_830620.__pad_68[28]); /*0x5d3c0e*/
  }
  v11 = (ObjectClass *)wcslen(String); /*0x5d3c23*/
  v12 = Text::MeasureWidth((int)String, 0); /*0x5d3c3a*/
  v34 = wcslen((const wchar_t *)aP3); /*0x5d3c42*/
  if ( *(this + 177) - v12 - 8 <= 0 ) /*0x5d3c56*/
    return 0; /*0x5d3c64*/
  v13 = MessageListClass::CountCharsInWidth(Instance, aP3, *(this + 177) - v12 - 8, 111, 1); /*0x5d3c76*/
  v14 = v13; /*0x5d3c7b*/
  v35 = v13; /*0x5d3c7f*/
  if ( v13 < 0 ) /*0x5d3c83*/
    return 0; /*0x5d3c91*/
  wcsncat(String, (const wchar_t *)aP3, v13); /*0x5d3c9b*/
  v15 = *(this + 3); /*0x5d3ca0*/
  String[(_DWORD)v11 + v14] = 0; /*0x5d3caa*/
  if ( v15 > 0 ) /*0x5d3cb1*/
  {
    v16 = *this; /*0x5d3cb3*/
    for ( i = 0; v16; v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 4))(v16) ) /*0x5d3cb3*/
      ++i; /*0x5d3cbf*/
    if ( *((_BYTE *)this + 25) && *((_BYTE *)this + 26) ) /*0x5d3cce*/
      ++i; /*0x5d3cd5*/
    if ( i + 1 > *(this + 3) ) /*0x5d3cdc*/
    {
      v18 = (_DWORD *)*this; /*0x5d3cde*/
      if ( !*this ) /*0x5d3cde*/
        return 0; /*0x5d3cf0*/
      *this = (*(int (__thiscall **)(_DWORD))(*v18 + 36))(*this); /*0x5d3cfa*/
      v19 = this + 1312; /*0x5d3cfc*/
      v20 = this + 178; /*0x5d3d02*/
      v21 = 14; /*0x5d3d08*/
      do /*0x5d3d21*/
      {
        if ( (_DWORD *)v18[12] == v20 ) /*0x5d3d10*/
          *v19 = 1; /*0x5d3d12*/
        ++v19; /*0x5d3d17*/
        v20 += 81; /*0x5d3d1a*/
        --v21; /*0x5d3d20*/
      }
      while ( v21 ); /*0x5d3d21*/
      (*(void (__thiscall **)(_DWORD *, int))*v18)(v18, 1); /*0x5d3d29*/
    }
  }
  v22 = (TextLabelClass *)__2_YAPAXI_Z(0x4Cu); /*0x5d3d2d*/
  if ( v22 ) /*0x5d3d37*/
  {
    ecx26 = aP5; /*0x5d3d39*/
    BYTE1(ecx26) = BYTE1(aP5) | 0x80; /*0x5d3d47*/
    v23 = (TextLabelClass *)MessageListClass::clearMessages(v22, (int)String, *(this + 1), *(this + 2), a5, (int)ecx26); /*0x5d3d60*/
  }
  else
  {
    v23 = 0; /*0x5d3d64*/
  }
  if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x5d3d6e*/
  {
    if ( !a8 && MEMORY[0xA8D1F9] ) /*0x5d3d82*/
    {
      v23->__pad_40[1] = 1; /*0x5d3d89*/
      goto LABEL_38; /*0x5d3d8c*/
    }
    goto LABEL_32; /*0x5d3d82*/
  }
  if ( MEMORY[0xA8B238] == (CellStruct *)3 ) /*0x5d3d9f*/
  {
    if ( a8 || !MEMORY[0xA8D1F8] ) /*0x5d3dac*/
    {
LABEL_32:
      v23->__pad_40[1] = 0; /*0x5d3d8e*/
      goto LABEL_38; /*0x5d3d93*/
    }
    v23->__pad_40[1] = 1; /*0x5d3db3*/
  }
  else
  {
    v23->__pad_40[1] = a8 == 0; /*0x5d3dbd*/
  }
LABEL_38:
  if ( a7 == -1 ) /*0x5d3dca*/
  {
    v23->field_24 = 0; /*0x5d3dcc*/
  }
  else
  {
    v25 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5d3dda*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5d3de3*/
      v25 += Timer::GetTicks() - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5d3df5*/
    v23->field_24 = a7 + v25; /*0x5d3df9*/
  }
  v23->field_28 = (int)aP2; /*0x5d3e03*/
  *(_DWORD *)&v23->__pad_2C[12] = *(this + 177); /*0x5d3e0c*/
  v26 = 0; /*0x5d3e0f*/
  for ( j = this + 1312; !*j; ++j ) /*0x5d3e11*/
  {
    if ( ++v26 >= 14 ) /*0x5d3e24*/
    {
      if ( v23 ) /*0x5d3e28*/
        (**(void (__thiscall ***)(TextLabelClass *, int))v23->__pad_0)(v23, 1); /*0x5d3e30*/
      return 0; /*0x5d3e3e*/
    }
  }
  *((_WORD *)this + v26 + 2624) = 0; /*0x5d3e41*/
  v28 = this + 81 * v26 + 178; /*0x5d3e58*/
  memset(v28, 0, 0xA0u); /*0x5d3e61*/
  *((_WORD *)this + 162 * v26 + 436) = 0; /*0x5d3e63*/
  wcscpy((wchar_t *)v28, String); /*0x5d3e6b*/
  *(_DWORD *)&v23->__pad_2C[4] = v28; /*0x5d3e7c*/
  if ( !a8 ) /*0x5d3e7f*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1708), 0x2000, 1.0, 0); /*0x5d3e98*/
  if ( *this ) /*0x5d3e9d*/
    (*(void (__thiscall **)(TextLabelClass *, _DWORD))(*(_DWORD *)v23->__pad_0 + 16))(v23, *this); /*0x5d3ea8*/
  else
    *this = v23; /*0x5d3ead*/
  if ( *((_BYTE *)this + 25) && *((_BYTE *)this + 26) ) /*0x5d3eb6*/
    v29 = *(this + 2) + *(this + 5); /*0x5d3ec3*/
  else
    v29 = *(this + 2); /*0x5d3ec7*/
  v30 = (int *)*this; /*0x5d3eca*/
  if ( *this ) /*0x5d3eca*/
  {
    do /*0x5d3edf*/
    {
      v31 = *v30; /*0x5d3ed0*/
      v30[4] = v29; /*0x5d3ed4*/
      v30 = (int *)(*(int (__thiscall **)(int *))(v31 + 4))(v30); /*0x5d3ed7*/
      v29 += *(this + 5); /*0x5d3eda*/
    }
    while ( v30 ); /*0x5d3edf*/
  }
  if ( v35 < v34 ) /*0x5d3eeb*/
  {
    v32 = (char *)aP3 + 2 * v35; /*0x5d3ef4*/
    for ( k = *(_WORD *)v32; k; v32 += 2 ) /*0x5d3ef7*/
    {
      if ( k >= 0x20u ) /*0x5d3f03*/
        break; /*0x5d3f03*/
      k = *((_WORD *)v32 + 1); /*0x5d3f05*/
    }
    if ( *(_WORD *)v32 ) /*0x5d3f11*/
      MessageListClass::AddMessage(this, aP1, aP2, (CellStruct *)v32, a5, aP5, a7, 1); /*0x5d3f44*/
  }
  return (int)v23->__pad_0; /*0x5d3bc5*/
}


// ==== 0x005D3FC0  ScrollingText::AddLine  this=CellStruct  sig=csp ====
int __thiscall ScrollingText::AddLine(_BYTE *this, wchar_t *String, CellStruct *aP2, CellStruct *aP3, int a5)
{
  wchar_t *v5; // edi
  CampaignScore *v7; // ebp
  CampaignScore *v9; // esi
  size_t v10; // edi
  CampaignScore *v11; // edi
  int v12; // ebp
  signed int v13; // eax
  size_t v14; // edi
  int v15; // edi
  signed int v16; // eax
  int v17; // esi
  CampaignScore *v18; // [esp+10h] [ebp-4h]
  wchar_t *Stringa; // [esp+18h] [ebp+4h]
  CampaignScore *v20; // [esp+1Ch] [ebp+8h]

  v5 = String; /*0x5d3fc5*/
  if ( !String ) /*0x5d3fcd*/
    return 0; /*0x5d3fcd*/
  if ( !aP3 ) /*0x5d3fd5*/
    return 0; /*0x5d3fd5*/
  if ( !*(this + 24) ) /*0x5d3fd7*/
    return 0; /*0x5d3fd7*/
  v7 = *(CampaignScore **)this; /*0x5d3fde*/
  if ( !*(_DWORD *)this ) /*0x5d3fde*/
    return 0; /*0x5d4026*/
  while ( (CellStruct *)v7[1].CampaignScore_field_0x04 != aP2 ) /*0x5d3ff1*/
  {
LABEL_8:
    v7 = (CampaignScore *)(*(int (__thiscall **)(CampaignScore *))(*(_DWORD *)v7->__pad_0 + 4))(v7); /*0x5d400d*/
    if ( !v7 ) /*0x5d4019*/
      return 0; /*0x5d4019*/
  }
  if ( memcmp((const void *)v7[1].CampaignScore_field_0x0C, v5, 2 * wcslen(v5)) ) /*0x5d4005*/
  {
    v5 = String; /*0x5d4009*/
    goto LABEL_8; /*0x5d4009*/
  }
  v18 = v7; /*0x5d402d*/
  v9 = (CampaignScore *)(v7[1].CampaignScore_field_0x0C + 2 * wcslen(String) + 2); /*0x5d403a*/
  Stringa = (wchar_t *)*((_DWORD *)this + 4); /*0x5d4042*/
  v10 = wcslen((const wchar_t *)v9); /*0x5d404f*/
  if ( wcslen((const wchar_t *)aP3) + v10 >= (unsigned int)Stringa ) /*0x5d4062*/
  {
    v14 = wcslen((const wchar_t *)v9) - *((_DWORD *)this + 4); /*0x5d4150*/
    v15 = wcslen((const wchar_t *)aP3) + v14; /*0x5d4158*/
    v16 = wcslen((const wchar_t *)v9); /*0x5d415a*/
    if ( v16 < v15 ) /*0x5d4164*/
      v16 = v15; /*0x5d4166*/
    WideString::WordWrap(0, (wchar_t *)v9, v15, v16, 0); /*0x5d4171*/
    wcscat((wchar_t *)v9, (const wchar_t *)aP3); /*0x5d417c*/
  }
  else
  {
    v11 = (CampaignScore *)__2_YAPAXI_Z(2 * (_DWORD)Stringa + 2); /*0x5d4078*/
    TextRenderer::GetInstance(); /*0x5d407a*/
    v20 = (CampaignScore *)Text::MeasureWidth((int)v9, 0); /*0x5d4099*/
    v12 = Text::MeasureWidth(v7[1].CampaignScore_field_0x0C, 0) - (_DWORD)v20; /*0x5d40aa*/
    wcscpy((wchar_t *)v11, (const wchar_t *)v9); /*0x5d40ac*/
    wcscat((wchar_t *)v11, (const wchar_t *)aP3); /*0x5d40b7*/
    while ( v12 + Text::MeasureWidth((int)v11, 0) >= this->q2C4 ) /*0x5d40d5*/
    {
      v13 = wcslen((const wchar_t *)v9); /*0x5d40d8*/
      if ( v13 < 10 ) /*0x5d40e3*/
        v13 = 10; /*0x5d40e5*/
      WideString::WordWrap(0, (wchar_t *)v9, 10, v13, 0); /*0x5d40f4*/
      wcscpy((wchar_t *)v11, (const wchar_t *)v9); /*0x5d40fb*/
      wcscat((wchar_t *)v11, (const wchar_t *)aP3); /*0x5d4106*/
    }
    __3_YAXPAX_Z(v11); /*0x5d4127*/
    wcscat((wchar_t *)v9, (const wchar_t *)aP3); /*0x5d4132*/
    v7 = v18; /*0x5d4137*/
  }
  if ( a5 == -1 ) /*0x5d418b*/
  {
    *(_DWORD *)v7[1].__pad_0 = 0; /*0x5d418e*/
    return 1; /*0x5d4197*/
  }
  else
  {
    v17 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5d41a6*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5d41af*/
      v17 += Timer::GetTicks() - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5d41c1*/
    *(_DWORD *)v7[1].__pad_0 = a5 + v17; /*0x5d41c6*/
    return 1; /*0x5d41cb*/
  }
}


// ==== 0x005D4210  NetworkLobby::MessageList_Append  this=CellStruct  sig=csp ====
int __thiscall NetworkLobby::MessageList_Append(_DWORD *this, int a2, int a3, CellStruct *aP3, char a5, int a6)
{
  int v8; // eax
  int i; // edi
  int v10; // edi
  _WORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  CellStruct *v14; // ebx
  size_t v15; // eax
  TextLabelClass *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // edi
  int *v22; // eax
  int v23; // edx

  if ( *((_BYTE *)this + 25) ) /*0x5d4213*/
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 80))(*(this + 9)); /*0x5d421f*/
    return 0; /*0x5d4222*/
  }
  else
  {
    if ( *((_BYTE *)this + 26) ) /*0x5d4228*/
    {
      v8 = *this; /*0x5d4232*/
      for ( i = 0; v8; v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8) ) /*0x5d4232*/
        ++i; /*0x5d423e*/
      if ( *((_BYTE *)this + 25) && *((_BYTE *)this + 26) ) /*0x5d424d*/
        ++i; /*0x5d4254*/
      if ( i + 1 > *(this + 3) ) /*0x5d425b*/
      {
        v10 = *this; /*0x5d425d*/
        *this = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 36))(*this); /*0x5d4266*/
        v11 = this + 1312; /*0x5d4268*/
        v12 = this + 178; /*0x5d426e*/
        v13 = 14; /*0x5d4274*/
        do /*0x5d428d*/
        {
          if ( *(_DWORD **)(v10 + 48) == v12 ) /*0x5d427c*/
            *v11 = 1; /*0x5d427e*/
          ++v11; /*0x5d4283*/
          v12 += 81; /*0x5d4286*/
          --v13; /*0x5d428c*/
        }
        while ( v13 ); /*0x5d428d*/
        if ( v10 ) /*0x5d4291*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x5d4299*/
      }
    }
    v14 = aP3; /*0x5d429b*/
    if ( !aP3 ) /*0x5d42a1*/
      v14 = (CellStruct *)&MEMORY[0x87F8E4].__pad_5568[10472]; /*0x5d42a3*/
    *((_WORD *)this + 348) = a5; /*0x5d42b1*/
    memset(this + 10, 0, 0x144u); /*0x5d42c2*/
    wcscpy((wchar_t *)this + 20, (const wchar_t *)v14); /*0x5d42c5*/
    *((_WORD *)this + 182) = 0; /*0x5d42cb*/
    v15 = wcslen((const wchar_t *)v14); /*0x5d42d4*/
    this->q2B4 = v15; /*0x5d42db*/
    this->q2B0 = v15; /*0x5d42e1*/
    v16 = (TextLabelClass *)__2_YAPAXI_Z(0x4Cu); /*0x5d42e7*/
    if ( v16 ) /*0x5d42f1*/
    {
      v17 = a3; /*0x5d42f3*/
      BYTE1(v17) = BYTE1(a3) | 0x80; /*0x5d42fb*/
      v18 = MessageListClass::clearMessages(v16, (int)(this + 10), *(this + 7), *(this + 8), a2, v17); /*0x5d430b*/
    }
    else
    {
      v18 = 0; /*0x5d4312*/
    }
    v19 = a6; /*0x5d4314*/
    *(this + 9) = v18; /*0x5d4318*/
    if ( a6 <= 0 ) /*0x5d431d*/
      v19 = this->q2C4; /*0x5d431f*/
    *(_DWORD *)(v18 + 56) = v19; /*0x5d4325*/
    v20 = *(this + 9); /*0x5d4328*/
    if ( v20 ) /*0x5d432d*/
    {
      *((_BYTE *)this + 25) = 1; /*0x5d432f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 80))(v20); /*0x5d4335*/
    }
    else
    {
      *((_BYTE *)this + 25) = 0; /*0x5d433a*/
    }
    Network_Append(); /*0x5d433e*/
    if ( *((_BYTE *)this + 26) ) /*0x5d4343*/
    {
      if ( *((_BYTE *)this + 25) ) /*0x5d434a*/
        v21 = *(this + 2) + *(this + 5); /*0x5d4357*/
      else
        v21 = *(this + 2); /*0x5d435b*/
      v22 = (int *)*this; /*0x5d435e*/
      if ( *this ) /*0x5d435e*/
      {
        do /*0x5d4373*/
        {
          v23 = *v22; /*0x5d4364*/
          v22[4] = v21; /*0x5d4368*/
          v22 = (int *)(*(int (__thiscall **)(int *))(v23 + 4))(v22); /*0x5d436b*/
          v21 += *(this + 5); /*0x5d436e*/
        }
        while ( v22 ); /*0x5d4373*/
      }
      --*(this + 3); /*0x5d4375*/
    }
    return *(this + 9); /*0x5d4378*/
  }
}


// ==== 0x005D4390  Chat::RefreshMessagePositions  this=CellStruct  sig=csp ====
char __thiscall sub_5D4390(void *this)
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
      v5 = *(int **)this; /*0x5d43d1*/
      if ( *(_DWORD *)this ) /*0x5d43d1*/
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


// ==== 0x005D4400  PriQueue::GetItemPtr  this=CellStruct  sig=csp ====
int __thiscall PriQueue_GetItemPtr(_DWORD *this)
{
  return (int)this + 2 * this->q2B4 + 40; /*0x5d440a*/
}


// ==== 0x005D4430  ObjectClass::SyncFrameCounter  this=CellStruct  sig=csp ====
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
      v4 = MEMORY[0x887340]; /*0x5d444e*/
      if ( MEMORY[0x887338] != -1 ) /*0x5d4457*/
        v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5d4469*/
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
      if ( *(this + 25) && *(this + 26) ) /*0x5d44db*/
        v9 = *((_DWORD *)this + 2) + *((_DWORD *)this + 5); /*0x5d44e8*/
      else
        v9 = *((_DWORD *)this + 2); /*0x5d44ec*/
      v10 = *(int **)this; /*0x5d44ef*/
      if ( *(_DWORD *)this ) /*0x5d44ef*/
      {
        do /*0x5d4504*/
        {
          v11 = *v10; /*0x5d44f5*/
          v10[4] = v9; /*0x5d44f9*/
          v10 = (int *)(*(int (__thiscall **)(int *))(v11 + 4))(v10); /*0x5d44fc*/
          v9 += *((_DWORD *)this + 5); /*0x5d44ff*/
        }
        while ( v10 ); /*0x5d4504*/
      }
    }
  }
  return v2; /*0x5d4506*/
}


// ==== 0x005D4510  ProcessEditControlKey  this=CellStruct  sig=csp ====
int __fastcall ProcessEditControlKey(CellStruct *aP0, int edx0, int *a2, unsigned __int16 a4)
{
  int v4; // edi
  CellStruct *v5; // esi
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
  AbstractClass *v26; // ecx
  int v27; // edx
  int v28; // eax
  AbstractClass *v29; // eax
  void (__thiscall ***v30)(_DWORD, int); // ecx
  int v31; // edi
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  void (__thiscall ***v35)(_DWORD, int); // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // edx
  AbstractClass *v39; // eax
  int v40; // eax

  v4 = 0; /*0x5d451a*/
  v5 = aP0; /*0x5d451f*/
  if ( !a4 ) /*0x5d4521*/
  {
    aP0 = (CellStruct *)*a2; /*0x5d452b*/
    if ( !*a2 ) /*0x5d452b*/
      return 0; /*0x5d4537*/
    v7 = *a2; /*0x5d453a*/
    BYTE1(v7) = BYTE1(aP0) & 0xF7; /*0x5d453c*/
    if ( v7 == 1 || v7 == 2 ) /*0x5d4547*/
    {
      if ( ((unsigned __int8)aP0 & 2) != 0 && v5->__pad_8[17] ) /*0x5d4552*/
      {
        DisableIME(); /*0x5d455d*/
        if ( v5->__pad_8[17] ) /*0x5d4562*/
        {
          v8 = *(void (__thiscall ****)(_DWORD, int))&v5->__pad_8[28]; /*0x5d4569*/
          v5->__pad_8[17] = 0; /*0x5d456c*/
          if ( v8 ) /*0x5d4572*/
            (**v8)(v8, 1); /*0x5d4578*/
          nullsub_48(); /*0x5d457a*/
          if ( v5->__pad_8[18] ) /*0x5d457f*/
          {
            if ( v5->__pad_8[17] ) /*0x5d4586*/
              v9 = *(_DWORD *)v5->__pad_8 + *(_DWORD *)&v5->__pad_8[12]; /*0x5d4593*/
            else
              v9 = *(_DWORD *)v5->__pad_8; /*0x5d4597*/
            v10 = (int *)v5->field_0; /*0x5d459a*/
            if ( v5->field_0 ) /*0x5d459a*/
            {
              do /*0x5d45b1*/
              {
                v11 = *v10; /*0x5d45a0*/
                v10[4] = v9; /*0x5d45a4*/
                v10 = (int *)(*(int (__thiscall **)(int *))(v11 + 4))(v10); /*0x5d45a7*/
                v9 += *(_DWORD *)&v5->__pad_8[12]; /*0x5d45ad*/
              }
              while ( v10 ); /*0x5d45b1*/
            }
            ++*(_DWORD *)&v5->__pad_8[4]; /*0x5d45b3*/
          }
        }
        return 2; /*0x5d45bf*/
      }
      return 0; /*0x5d4643*/
    }
  }
  if ( !v5->__pad_8[17] ) /*0x5d45c7*/
    return v4; /*0x5d4990*/
  if ( a4 ) /*0x5d45d0*/
  {
    v12 = a4; /*0x5d4646*/
  }
  else
  {
    LOWORD(aP0) = *(_WORD *)a2; /*0x5d45d6*/
    v12 = (unsigned __int8)Event_Process(*(_BYTE **)&stru_87C374.__pad_14B0[8012], (CCINIClass *)aP0); /*0x5d45eb*/
    v13 = *a2; /*0x5d45f1*/
    if ( (*a2 & 0x1000) != 0 && v12 >= 48 && v12 <= 57 ) /*0x5d4605*/
    {
      BYTE1(v13) &= ~0x10u; /*0x5d4609*/
      *a2 = v13; /*0x5d460c*/
    }
    else if ( (*a2 & 0x1000) != 0 || (v13 & 0x8000) != 0 || v12 < 32 ) /*0x5d461c*/
    {
      v14 = (unsigned __int8)*a2; /*0x5d461e*/
      if ( v14 != 13 && v14 != 8 && v14 != 27 && (_BYTE)v12 != 8 ) /*0x5d4635*/
      {
        *a2 = 0; /*0x5d463b*/
        return 0; /*0x5d463b*/
      }
    }
  }
  if ( v12 == 8 ) /*0x5d464f*/
  {
    if ( *a2 != 8 ) /*0x5d495d*/
    {
      v39 = (AbstractClass *)v5->field_2B0; /*0x5d495f*/
      if ( (int)v39 > v5->field_2B4 ) /*0x5d496d*/
      {
        v40 = (int)&v39[-1].NeedsSaveOrLink + 3; /*0x5d496f*/
        v4 = 2; /*0x5d4970*/
        v5->field_2B0 = v40; /*0x5d4975*/
        *(_WORD *)&v5->__pad_8[2 * v40 + 32] = 0; /*0x5d497b*/
      }
    }
    *a2 = 0; /*0x5d4984*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&v5->__pad_8[28] + 80))(*(_DWORD *)&v5->__pad_8[28]); /*0x5d498d*/
    return v4; /*0x5d498d*/
  }
  if ( v12 != 13 ) /*0x5d4658*/
  {
    if ( v12 != 27 ) /*0x5d4661*/
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&v5->__pad_8[28] + 80))(*(_DWORD *)&v5->__pad_8[28]); /*0x5d466c*/
      if ( v12 > 31 ) /*0x5d4672*/
      {
        if ( *(_WORD *)&v5->__pad_8[2 * v5->field_2B0 + 32] ) /*0x5d468a*/
        {
          v15 = v5->field_2B4; /*0x5d4694*/
          v16 = *(_DWORD *)&v5->__pad_8[8] - 1; /*0x5d469a*/
          do /*0x5d46b2*/
          {
            if ( v5->field_2B0 - v15 >= v16 ) /*0x5d46a9*/
              break; /*0x5d46a9*/
            v17 = v5->field_2B0 + 1; /*0x5d46ab*/
            v5->field_2B0 = v17; /*0x5d46ac*/
          }
          while ( *(_WORD *)&v5->__pad_8[2 * v17 + 32] ); /*0x5d46b2*/
        }
        if ( v5->field_2B0 - v5->field_2B4 >= *(_DWORD *)&v5->__pad_8[8] - 1 ) /*0x5d46cf*/
          goto LABEL_46; /*0x5d46cf*/
        *(_WORD *)&v5->__pad_8[2 * v5->field_2B0 + 32] = v12; /*0x5d46d1*/
        v18 = v5->field_2B0 + 1; /*0x5d46dc*/
        v4 = 1; /*0x5d46dd*/
        v5->field_2B0 = v18; /*0x5d46e4*/
        *(_WORD *)&v5->__pad_8[2 * v18 + 32] = 0; /*0x5d46ea*/
        TextRenderer::GetInstance(); /*0x5d46f5*/
        if ( Text::MeasureWidth((CampaignScore *)&v5->field_28, 0) >= v5->field_2C4 - 10 ) /*0x5d4711*/
        {
          v19 = v5->field_2B0 - 1; /*0x5d4719*/
          v5->field_2B0 = v19; /*0x5d471a*/
          *(_WORD *)&v5->__pad_8[2 * v19 + 32] = 0; /*0x5d4720*/
LABEL_46:
          if ( v5->__pad_8[16] ) /*0x5d4725*/
          {
            v20 = v5->field_2B0 /*0x5d475f*/
                - WideString::WordWrap(
                    (wchar_t *)&v5->field_16C,
                    (CampaignScore *)&v5->__pad_8[2 * v5->field_2B4 + 32],
                    *(_DWORD *)v5->__pad_2BC,
                    *(CampaignScore **)&v5->__pad_2BC[4],
                    1);
            v5->field_2B0 = v20; /*0x5d4768*/
            *(_WORD *)&v5->__pad_8[2 * v20 + 32] = v12; /*0x5d476e*/
            v21 = v5->field_2B0 + 1; /*0x5d4779*/
            v5->field_2B0 = v21; /*0x5d477a*/
            *(_WORD *)&v5->__pad_8[2 * v21 + 32] = 0; /*0x5d4780*/
            *a2 = 0; /*0x5d4788*/
            return 4; /*0x5d478d*/
          }
          v4 = 0; /*0x5d4790*/
        }
      }
      *a2 = 0; /*0x5d4792*/
      return v4; /*0x5d479e*/
    }
    DisableIME(); /*0x5d47a1*/
    if ( !v5->__pad_8[17] ) /*0x5d47a6*/
      goto LABEL_77; /*0x5d47a6*/
    v22 = *(void (__thiscall ****)(_DWORD, int))&v5->__pad_8[28]; /*0x5d47b1*/
    v5->__pad_8[17] = 0; /*0x5d47b4*/
    if ( v22 ) /*0x5d47ba*/
      (**v22)(v22, 1); /*0x5d47c0*/
    nullsub_48(); /*0x5d47c2*/
    if ( !v5->__pad_8[18] ) /*0x5d47c7*/
    {
LABEL_77:
      *a2 = 0; /*0x5d48b0*/
      return 2; /*0x5d48c1*/
    }
    if ( v5->__pad_8[17] ) /*0x5d47d2*/
      v23 = *(_DWORD *)v5->__pad_8 + *(_DWORD *)&v5->__pad_8[12]; /*0x5d47df*/
    else
      v23 = *(_DWORD *)v5->__pad_8; /*0x5d47e3*/
    v24 = (int *)v5->field_0; /*0x5d47e6*/
    if ( v5->field_0 ) /*0x5d47e6*/
    {
      do /*0x5d4801*/
      {
        v25 = *v24; /*0x5d47f0*/
        v24[4] = v23; /*0x5d47f4*/
        v24 = (int *)(*(int (__thiscall **)(int *))(v25 + 4))(v24); /*0x5d47f7*/
        v23 += *(_DWORD *)&v5->__pad_8[12]; /*0x5d47fd*/
      }
      while ( v24 ); /*0x5d4801*/
    }
LABEL_76:
    ++*(_DWORD *)&v5->__pad_8[4]; /*0x5d48ad*/
    goto LABEL_77; /*0x5d48ad*/
  }
  v26 = (AbstractClass *)v5->field_2B4; /*0x5d4808*/
  if ( v5->field_2B0 < (int)v26 ) /*0x5d4816*/
    v5->field_2B0 = (int)v26; /*0x5d4818*/
  if ( *(_WORD *)&v5->__pad_8[2 * v5->field_2B0 + 32] ) /*0x5d4824*/
  {
    v27 = *(_DWORD *)&v5->__pad_8[8] - 1; /*0x5d482e*/
    do /*0x5d4846*/
    {
      if ( v5->field_2B0 - (int)v26 >= v27 ) /*0x5d483d*/
        break; /*0x5d483d*/
      v28 = v5->field_2B0 + 1; /*0x5d483f*/
      v5->field_2B0 = v28; /*0x5d4840*/
    }
    while ( *(_WORD *)&v5->__pad_8[2 * v28 + 32] ); /*0x5d4846*/
  }
  v29 = (AbstractClass *)v5->field_2B0; /*0x5d484d*/
  if ( v29 == v26 ) /*0x5d4855*/
  {
    DisableIME(); /*0x5d4857*/
    if ( !v5->__pad_8[17] ) /*0x5d485c*/
      goto LABEL_77; /*0x5d485c*/
    v30 = *(void (__thiscall ****)(_DWORD, int))&v5->__pad_8[28]; /*0x5d4863*/
    v5->__pad_8[17] = 0; /*0x5d4866*/
    if ( v30 ) /*0x5d486c*/
      (**v30)(v30, 1); /*0x5d4872*/
    nullsub_48(); /*0x5d4874*/
    if ( !v5->__pad_8[18] ) /*0x5d4879*/
      goto LABEL_77; /*0x5d487e*/
    if ( v5->__pad_8[17] ) /*0x5d4880*/
      v31 = *(_DWORD *)v5->__pad_8 + *(_DWORD *)&v5->__pad_8[12]; /*0x5d488d*/
    else
      v31 = *(_DWORD *)v5->__pad_8; /*0x5d4891*/
    v32 = (int *)v5->field_0; /*0x5d4894*/
    if ( v5->field_0 ) /*0x5d4894*/
    {
      do /*0x5d48ab*/
      {
        v33 = *v32; /*0x5d489a*/
        v32[4] = v31; /*0x5d489e*/
        v32 = (int *)(*(int (__thiscall **)(int *))(v33 + 4))(v32); /*0x5d48a1*/
        v31 += *(_DWORD *)&v5->__pad_8[12]; /*0x5d48a7*/
      }
      while ( v32 ); /*0x5d48ab*/
    }
    goto LABEL_76; /*0x5d48ab*/
  }
  if ( (char *)v29 - (char *)v26 < *(_DWORD *)&v5->__pad_8[8] - 1 ) /*0x5d48ce*/
  {
    *(_WORD *)&v5->__pad_8[2 * (_DWORD)v29 + 32] = 32; /*0x5d48d0*/
    v34 = v5->field_2B0 + 1; /*0x5d48dd*/
    v5->field_2B0 = v34; /*0x5d48de*/
    *(_WORD *)&v5->__pad_8[2 * v34 + 32] = 0; /*0x5d48e4*/
  }
  DisableIME(); /*0x5d48e9*/
  if ( v5->__pad_8[17] ) /*0x5d48ee*/
  {
    v35 = *(void (__thiscall ****)(_DWORD, int))&v5->__pad_8[28]; /*0x5d48f5*/
    v5->__pad_8[17] = 0; /*0x5d48f8*/
    if ( v35 ) /*0x5d48fe*/
      (**v35)(v35, 1); /*0x5d4904*/
    nullsub_48(); /*0x5d4906*/
    if ( v5->__pad_8[18] ) /*0x5d490b*/
    {
      if ( v5->__pad_8[17] ) /*0x5d4912*/
        v36 = *(_DWORD *)v5->__pad_8 + *(_DWORD *)&v5->__pad_8[12]; /*0x5d491f*/
      else
        v36 = *(_DWORD *)v5->__pad_8; /*0x5d4923*/
      v37 = (int *)v5->field_0; /*0x5d4926*/
      if ( v5->field_0 ) /*0x5d4926*/
      {
        do /*0x5d493d*/
        {
          v38 = *v37; /*0x5d492c*/
          v37[4] = v36; /*0x5d4930*/
          v37 = (int *)(*(int (__thiscall **)(int *))(v38 + 4))(v37); /*0x5d4933*/
          v36 += *(_DWORD *)&v5->__pad_8[12]; /*0x5d4939*/
        }
        while ( v37 ); /*0x5d493d*/
      }
      ++*(_DWORD *)&v5->__pad_8[4]; /*0x5d493f*/
    }
  }
  *a2 = 0; /*0x5d494b*/
  return 3; /*0x5d4531*/
}


// ==== 0x005D49A0  TacticalMap::DrawCursor  this=CellStruct  sig=csp ====
char __thiscall sub_5D49A0(_DWORD *this)
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
  result = *((_BYTE *)this + 25); /*0x5d49b4*/
  if ( result ) /*0x5d49b9*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x5d49c8*/
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 9) + 108))(*(this + 9), 1); /*0x5d49d2*/
    TextRenderer::GetInstance(); /*0x5d49db*/
    v3 = Text::MeasureWidth(*(_DWORD *)(*(this + 9) + 48), 0); /*0x5d49f8*/
    if ( *((_WORD *)this + 348) /*0x5d4a1b*/
      && this->q2B0 - this->q2B4 < *(this + 4) - 1
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 88))(*(this + 9)) )
    {
      LOWORD(v9) = *((_WORD *)this + 348); /*0x5d4a29*/
      v4 = (_DWORD *)*(this + 9); /*0x5d4a2e*/
      v5 = v4[3]; /*0x5d4a31*/
      v10[1] = v4[4]; /*0x5d4a39*/
      v10[0] = v3 + v5; /*0x5d4a3d*/
      v8 = v4[11]; /*0x5d4a4c*/
      v7 = *((_DWORD *)MEMORY[0xB054D4] + v4[13]); /*0x5d4a56*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v12); /*0x5d4a65*/
      TextRenderer::DrawText(&v11, (size_t)&v9, MEMORY[0x887314], v6, (int)v10, v7, 0, v8); /*0x5d4a79*/
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x5d4a89*/
  }
  if ( *this ) /*0x5d4a8d*/
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 44))(*this, 1); /*0x5d4a98*/
  return result; /*0x5d4a8f*/
}


// ==== 0x005D4AD0  TacticalClass::processInput  this=VOID_PTR  sig=csp ====
char __thiscall TacticalClass::processInput(int **this, CellStruct *aP1)
{
  AnimClass *v2; // esi
  int *i; // eax
  int v5; // edx
  int v6; // eax

  v2 = (AnimClass *)&aP1[-1].__pad_2BC[4]; /*0x5d4ad6*/
  *(this + 177) = (int *)&aP1[-1].__pad_2BC[4]; /*0x5d4ae1*/
  Debug::Log(); /*0x5d4ae7*/
  for ( i = *this; i; i = (int *)(*(int (__thiscall **)(int *))(v5 + 4))(i) ) /*0x5d4aec*/
  {
    v5 = *i; /*0x5d4af5*/
    i[14] = (int)v2; /*0x5d4af9*/
  }
  LOBYTE(v6) = *((_BYTE *)this + 25); /*0x5d4b03*/
  if ( (_BYTE)v6 ) /*0x5d4b08*/
  {
    v6 = (int)*(this + 9); /*0x5d4b0a*/
    *(_DWORD *)(v6 + 56) = v2; /*0x5d4b0d*/
  }
  return v6; /*0x5d4b10*/
}


// ==== 0x005D4B20  WideString::WordWrap  this=int  sig=csp ====
int __stdcall WideString::WordWrap(wchar_t *a0, CampaignScore *aP1, int a3, CampaignScore *aP3, int a5)
{
  CampaignScore *v6; // ebp
  signed int v7; // eax
  int v8; // ecx
  int v9; // ebx
  char *v10; // esi
  char *v11; // edx

  if ( a3 <= 0 ) /*0x5d4b27*/
    return 0; /*0x5d4b2c*/
  v6 = aP1; /*0x5d4b31*/
  v7 = wcslen((const wchar_t *)aP1); /*0x5d4b37*/
  v8 = (int)aP3; /*0x5d4b3c*/
  if ( (int)aP3 > v7 ) /*0x5d4b49*/
    v8 = v7; /*0x5d4b4b*/
  if ( a5 ) /*0x5d4b53*/
  {
    v9 = v8; /*0x5d4b79*/
    if ( v8 >= a3 ) /*0x5d4b7b*/
    {
      v11 = &aP1->__pad_0[2 * v8 - 2]; /*0x5d4b7d*/
      while ( !*(_WORD *)v11 || *(_WORD *)v11 > 0x20u ) /*0x5d4b8d*/
      {
        --v9; /*0x5d4b8f*/
        v11 -= 2; /*0x5d4b90*/
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
      v10 = &aP1->__pad_0[2 * a3 - 2]; /*0x5d4b5b*/
      while ( !*(_WORD *)v10 || *(_WORD *)v10 > 0x20u ) /*0x5d4b6b*/
      {
        ++v9; /*0x5d4b6d*/
        v10 += 2; /*0x5d4b6e*/
        if ( v9 > v8 ) /*0x5d4b73*/
          goto LABEL_17; /*0x5d4b73*/
      }
      goto LABEL_18; /*0x5d4b6b*/
    }
  }
LABEL_17:
  v9 = a3; /*0x5d4b97*/
LABEL_18:
  if ( a0 ) /*0x5d4b9f*/
  {
    qmemcpy(a0, aP1, 2 * v9); /*0x5d4baf*/
    v6 = aP1; /*0x5d4bb3*/
    a0[v9] = 0; /*0x5d4bbc*/
  }
  memcpy(v6, (AbstractClass *)((char *)v6 + 2 * v9), 2 * (v7 + 0x7FFFFFFF * v9) + 2); /*0x5d4bdc*/
  return v9; /*0x5d4b2b*/
}


// ==== 0x005D4C30  MPBattleClass::onDialogCreated  this=MPBattleClass  sig=ida-proto ====
int sub_5D4C30()
{
  MEMORY[0xABFCA8] = 0; /*0x5d4c32*/
  MEMORY[0xABFCAC] = 0; /*0x5d4c37*/
  MEMORY[0xABFCB0] = 0; /*0x5d4c3c*/
  MEMORY[0xABFCB4] = 0; /*0x5d4c41*/
  return 0; /*0x5d4c46*/
}


// ==== 0x005D4C50  MPBattleClass::onDialogDestroyed  this=MPBattleClass  sig=ida-proto ====
int sub_5D4C50()
{
  MEMORY[0xABFC94] = 0; /*0x5d4c57*/
  MEMORY[0xABFC98] = 0; /*0x5d4c5c*/
  MEMORY[0xABFC9C] = 1; /*0x5d4c61*/
  MEMORY[0xABFC9D] = 0; /*0x5d4c68*/
  MEMORY[0xABFC90] = (int)&vt_DynamicVectorClass_HWND; /*0x5d4c6d*/
  MEMORY[0xABFCA4] = 10; /*0x5d4c77*/
  MEMORY[0xABFCA0] = 0; /*0x5d4c81*/
  return atexit(sub_5D4C90); /*0x5d4c8c*/
}


// ==== 0x005D4C90  sub_5D4C90  this=-  sig=ida-proto ====
void __cdecl sub_5D4C90()
{
  MEMORY[0xABFC90] = (int)&vt_VectorClass_HWND; /*0x5d4c98*/
  if ( MEMORY[0xABFC94] && MEMORY[0xABFC9D] ) /*0x5d4cac*/
  {
    __3_YAXPAX_Z(MEMORY[0xABFC94]); /*0x5d4caf*/
    MEMORY[0xABFC94] = 0; /*0x5d4cb7*/
  }
  MEMORY[0xABFC9D] = 0; /*0x5d4cbd*/
  MEMORY[0xABFC98] = 0; /*0x5d4cc3*/
}


// ==== 0x005D4CD0  MPBattleClass::unfixAlliances  this=MPBattleClass  sig=ida-proto ====
int sub_5D4CD0()
{
  MEMORY[0xABFCBC] = 0; /*0x5d4cd7*/
  MEMORY[0xABFCC0] = 0; /*0x5d4cdc*/
  MEMORY[0xABFCC4] = 1; /*0x5d4ce1*/
  MEMORY[0xABFCC5] = 0; /*0x5d4ce8*/
  MEMORY[0xABFCB8] = (int)&vt_DynamicVectorClass_AcceleratorTracker; /*0x5d4ced*/
  MEMORY[0xABFCCC] = 10; /*0x5d4cf7*/
  MEMORY[0xABFCC8] = 0; /*0x5d4d01*/
  return atexit(sub_5D4D10); /*0x5d4d0c*/
}


// ==== 0x005D4D10  sub_5D4D10  this=-  sig=ida-proto ====
void __cdecl sub_5D4D10()
{
  MEMORY[0xABFCB8] = (int)&vt_VectorClass_AcceleratorTracker; /*0x5d4d18*/
  if ( MEMORY[0xABFCBC] && MEMORY[0xABFCC5] ) /*0x5d4d2c*/
  {
    __3_YAXPAX_Z(MEMORY[0xABFCBC]); /*0x5d4d2f*/
    MEMORY[0xABFCBC] = 0; /*0x5d4d37*/
  }
  MEMORY[0xABFCC5] = 0; /*0x5d4d3d*/
  MEMORY[0xABFCC0] = 0; /*0x5d4d43*/
}


// ==== 0x005D4D50  MessageLoop  this=-  sig=ida-proto ====
int Dialog::MessageLoop()
{
  int result; // eax
  int v1; // esi
  int v2; // esi
  _DWORD Msg[7]; // [esp+10h] [ebp-1Ch] BYREF

  result = dword_A8ED54[233983]; /*0x5d4d50*/
  if ( dword_A8ED54[233983] ) /*0x5d4d5e*/
  {
    ++dword_A8ED54[17847]; /*0x5d4d77*/
    for ( result = GameLoopMessagePump((char *)Msg, 0, 0, 0, 0); /*0x5d4d84*/
          result;
          result = GameLoopMessagePump((char *)Msg, 0, 0, 0, 0) )
    {
      result = IsMessageDialog((int)Msg, 0, 0, 0); /*0x5d4da6*/
      if ( !result ) /*0x5d4dad*/
        break; /*0x5d4dad*/
      Dialog::MapDialogResource(Msg); /*0x5d4db7*/
      if ( MEMORY[0x87F7E8][7904] ) /*0x5d4dc4*/
        HandleToolTipMessage(MEMORY[0x87F7E8][7904], (int)Msg); /*0x5d4dcb*/
      v1 = 0; /*0x5d4dd5*/
      if ( dword_A8ED54[50131] <= 0 ) /*0x5d4dd9*/
      {
LABEL_9:
        v2 = 0; /*0x5d4dff*/
        if ( dword_A8ED54[50141] <= 0 ) /*0x5d4e03*/
        {
LABEL_12:
          if ( !dword_A8ED54[50168] || !((unsigned __int8 (__thiscall *)(_DWORD *))dword_A8ED54[50168])(Msg) ) /*0x5d4e35*/
          {
            TranslateMessage((const MSG *)Msg); /*0x5d4e40*/
            ((void (__stdcall *)(_DWORD *))DispatchMessageA)(Msg); /*0x5d4e47*/
          }
        }
        else
        {
          while ( !((int (__stdcall *)(_DWORD, _DWORD, _DWORD *))TranslateAcceleratorA)( /*0x5d4e1c*/
                     *(_DWORD *)(dword_A8ED54[50138] + 8 * v2 + 4),
                     *(_DWORD *)(dword_A8ED54[50138] + 8 * v2),
                     Msg) )
          {
            if ( ++v2 >= dword_A8ED54[50141] ) /*0x5d4e26*/
              goto LABEL_12; /*0x5d4e26*/
          }
        }
      }
      else
      {
        while ( !((int (__stdcall *)(_DWORD, _DWORD *))IsDialogMessageA)(*(_DWORD *)(dword_A8ED54[50128] + 4 * v1), Msg) ) /*0x5d4dee*/
        {
          if ( ++v1 >= dword_A8ED54[50131] ) /*0x5d4df8*/
            goto LABEL_9; /*0x5d4df8*/
        }
      }
    }
  }
  return result; /*0x5d4e66*/
}


// ==== 0x005D4E70  DialogQueue::PushEntry  this=int  sig=csp ====
int __thiscall sub_5D4E70(void *this)
{
  int result; // eax

  result = MEMORY[0xABFC98]; /*0x5d4e70*/
  if ( MEMORY[0xABFCA0] < MEMORY[0xABFC98] /*0x5d4eac*/
    || (MEMORY[0xABFC9D] || !MEMORY[0xABFC98])
    && MEMORY[0xABFCA4] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xABFC90] + 8))(
                   &MEMORY[0xABFC90],
                   MEMORY[0xABFC98] + MEMORY[0xABFCA4],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xABFCA0]++; /*0x5d4eb4*/
    *((_DWORD *)MEMORY[0xABFC94] + result) = this; /*0x5d4ec3*/
  }
  return result; /*0x5d4ec6*/
}


// ==== 0x005D4ED0  DialogQueue::RemoveEntry  this=int  sig=csp ====
int __thiscall DialogQueue::RemoveEntry(void *this)
{
  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5d4ed7*/
  result = (*(int (__thiscall **)(int *, void **))(MEMORY[0xABFC90] + 16))(&MEMORY[0xABFC90], &v2); /*0x5d4ee5*/
  if ( result != -1 && result < MEMORY[0xABFCA0] && result < --MEMORY[0xABFCA0] ) /*0x5d4f00*/
  {
    do /*0x5d4f18*/
    {
      ++result; /*0x5d4f08*/
      *((_DWORD *)MEMORY[0xABFC94] + result - 1) = *((_DWORD *)MEMORY[0xABFC94] + result); /*0x5d4f0c*/
    }
    while ( result < MEMORY[0xABFCA0] ); /*0x5d4f18*/
  }
  return result; /*0x5d4f1b*/
}


// ==== 0x005D4F20  ObjectClass::method_5D4F20  this=ObjectClass  sig=csp ====
int __thiscall sub_5D4F20(const char *this)
{
  int v1; // edi

  v1 = 0; /*0x5d4f29*/
  if ( MEMORY[0xABFCA0] <= 0 ) /*0x5d4f2f*/
    return 0; /*0x5d4f87*/
  while ( 1 ) /*0x5d4f47*/
  {
    GetWindowTextA(*((HWND *)MEMORY[0xABFC94] + v1), MEMORY[0xABFCD0], 99); /*0x5d4f47*/
    if ( !strcmp(MEMORY[0xABFCD0], this) ) /*0x5d4f56*/
      break; /*0x5d4f56*/
    if ( ++v1 >= MEMORY[0xABFCA0] ) /*0x5d4f85*/
      return 0; /*0x5d4f85*/
  }
  return *((_DWORD *)MEMORY[0xABFC94] + v1); /*0x5d4f87*/
}


// ==== 0x005D5080  _DynamicVectorClass_PAUHWND::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MSFont_18_::sub_5D5080(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d5086*/
  *(_DWORD *)(this + 16) = 0; /*0x5d5089*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d5090*/
  {
    __3_YAXPAX_Z(v2); /*0x5d5096*/
    *(_DWORD *)(this + 4) = 0; /*0x5d509e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d50a1*/
  *(_DWORD *)(this + 8) = 0; /*0x5d50a4*/
}


// ==== 0x005D50B0  _DynamicVectorClass_PAUHWND::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFont_18_::sub_5D50B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d50b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d50c5*/
  else
    return 0; /*0x5d50b7*/
}


// ==== 0x005D50D0  _VectorClass_PAUHWND::GetSize  this=VectorClass  sig=csp ====
int __thiscall MSFont_18_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d50da*/
}


// ==== 0x005D50E0  _DynamicVectorClass_UAcceleratorTracker::Destroy  this=DynamicVector  sig=csp ====
void __thiscall MSFont_18_::sub_5D50E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d50e6*/
  *(_DWORD *)(this + 16) = 0; /*0x5d50e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d50f0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d50f6*/
    *(_DWORD *)(this + 4) = 0; /*0x5d50fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d5101*/
  *(_DWORD *)(this + 8) = 0; /*0x5d5104*/
}


// ==== 0x005D5110  _DynamicVectorClass_UAcceleratorTracker::PointerToIndex8  this=DynamicVector  sig=csp ====
unsigned int __thiscall MSFont_18_::sub_5D5110(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d5110*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x5d5125*/
  else
    return 0; /*0x5d5117*/
}


// ==== 0x005D5130  _VectorClass_UAcceleratorTracker::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAcceleratorTracker::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = this->Items; /*0x5d5130*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x5d513f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x5d5146*/
  return a2; /*0x5d5141*/
}


// ==== 0x005D5150  _VectorClass_PAUHWND::AddRef  this=VectorClass  sig=csp ====
char __thiscall MSFont_18_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d5152*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d515d*/
  {
    v3 = 0; /*0x5d515f*/
    if ( v2 <= 0 ) /*0x5d5163*/
      return 1; /*0x5d5183*/
    v4 = (_DWORD *)*(this + 1); /*0x5d5165*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d516b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d5174*/
    {
      ++v3; /*0x5d5176*/
      ++v4; /*0x5d5177*/
      if ( v3 >= v2 ) /*0x5d517c*/
        return 1; /*0x5d517c*/
    }
  }
  return 0; /*0x5d517e*/
}


// ==== 0x005D5190  _VectorClass_PAUHWND::Release  this=VectorClass  sig=csp ====
char __thiscall MSFont_18_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d519c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d51a6*/
    if ( a3 ) /*0x5d51ac*/
      v4 = a3; /*0x5d51c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d51be*/
    *((_BYTE *)this + 12) = 1; /*0x5d51c6*/
    if ( v4 ) /*0x5d51ca*/
    {
      if ( this->Items ) /*0x5d51d5*/
      {
        v6 = this->Capacity; /*0x5d51dc*/
        if ( a2 < v6 ) /*0x5d51e1*/
          v6 = a2; /*0x5d51e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d51e9*/
          ++i; /*0x5d51ee*/
        if ( *((_BYTE *)this + 13) ) /*0x5d51fb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d5206*/
          this->Items = 0; /*0x5d520e*/
        }
      }
      this->Items = v4; /*0x5d5217*/
      this->Capacity = a2; /*0x5d521f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d5222*/
      return 1; /*0x5d5228*/
    }
    else
    {
      return 0; /*0x5d51cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d5232*/
    return 1; /*0x5d5238*/
  }
}


// ==== 0x005D5240  _VectorClass_PAUHWND::ddtor  this=VectorClass  sig=csp ====
void __thiscall MSFont_18_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d524d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d5253*/
    *(_DWORD *)(this + 4) = 0; /*0x5d525b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d525e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d5261*/
}


// ==== 0x005D5270  _VectorClass_PAUHWND::Create  this=VectorClass  sig=csp ====
int __thiscall MSFont_18_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d5270*/
    return 0; /*0x5d5278*/
  v3 = *(_DWORD *)(this + 8); /*0x5d527e*/
  result = 0; /*0x5d5281*/
  if ( v3 <= 0 ) /*0x5d5285*/
    return -1; /*0x5d529c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d528b*/
  {
    if ( ++result >= v3 ) /*0x5d529a*/
      return -1; /*0x5d529a*/
  }
  return result; /*0x5d527a*/
}


// ==== 0x005D52B0  _VectorClass_PAUHWND::Draw  this=VectorClass  sig=csp ====
unsigned int __thiscall MSFont_18_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d52b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d52c5*/
  else
    return 0; /*0x5d52b7*/
}


// ==== 0x005D52D0  _DynamicVectorClass_PAUHWND::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MSFont_18_::sub_5D52D0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d52dc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d52e2*/
    if ( a3 ) /*0x5d52e8*/
      v4 = a3; /*0x5d52fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d52fa*/
    *((_BYTE *)this + 12) = 1; /*0x5d5302*/
    if ( !v4 ) /*0x5d5306*/
      return 0; /*0x5d537a*/
    if ( this->Items ) /*0x5d5308*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d530f*/
      if ( a2 < v5 ) /*0x5d5314*/
        v5 = a2; /*0x5d5316*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d531c*/
        ++i; /*0x5d5321*/
      if ( *((_BYTE *)this + 13) ) /*0x5d532e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d5339*/
        this->Items = 0; /*0x5d5341*/
      }
    }
    this->Items = v4; /*0x5d534a*/
    this->DynamicVector_field_0x8 = a2; /*0x5d5352*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d5355*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d535e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d5361*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d5369*/
    this->DynamicVector_field_0x10 = v7; /*0x5d536b*/
  return 1; /*0x5d536e*/
}


// ==== 0x005D5380  _DynamicVectorClass_PAUHWND::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MSFont_18_::sub_5D5380(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d5380*/
  result = 0; /*0x5d5383*/
  if ( v2 <= 0 ) /*0x5d5388*/
    return -1; /*0x5d539f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d538e*/
  {
    if ( ++result >= v2 ) /*0x5d539d*/
      return -1; /*0x5d539d*/
  }
  return result; /*0x5d53a2*/
}


// ==== 0x005D53B0  _VectorClass_UAcceleratorTracker::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAcceleratorTracker::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = *(this + 2); /*0x5d53bb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d53c0*/
  {
    v3 = 0; /*0x5d53c2*/
    if ( v2 <= 0 ) /*0x5d53c6*/
      return 1; /*0x5d53f6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5d53c8*/
    v5 = (_DWORD *)*(this + 1); /*0x5d53cb*/
    v6 = (_DWORD *)(v4 + 4); /*0x5d53ce*/
    v7 = v4 - (_DWORD)v5; /*0x5d53d1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x5d53e3*/
    {
      ++v3; /*0x5d53e5*/
      v6 += 2; /*0x5d53e6*/
      v5 += 2; /*0x5d53e9*/
      if ( v3 >= v2 ) /*0x5d53ee*/
        return 1; /*0x5d53ee*/
    }
  }
  return 0; /*0x5d53f0*/
}


// ==== 0x005D5410  _VectorClass_UAcceleratorTracker::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAcceleratorTracker::_vt02(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x5d5412*/
  if ( a2 ) /*0x5d541e*/
  {
    v5 = a3; /*0x5d5424*/
    *((_BYTE *)this + 12) = 0; /*0x5d5428*/
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
        v7 = v6; /*0x5d5446*/
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
        v5 = v6; /*0x5d5458*/
      }
      else
      {
        v5 = 0; /*0x5d545c*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x5d5477*/
    if ( v5 ) /*0x5d547b*/
    {
      if ( this->Items ) /*0x5d5486*/
      {
        v12 = this->Capacity; /*0x5d548b*/
        if ( a2 < v12 ) /*0x5d5490*/
          v12 = a2; /*0x5d5492*/
        v13 = 0; /*0x5d5494*/
        if ( v12 > 0 ) /*0x5d5498*/
        {
          do /*0x5d54b7*/
          {
            v14 = 2 * v13; /*0x5d549d*/
            v15 = (_DWORD *)(this->Items + 8 * v13++); /*0x5d54a6*/
            v5[v14] = *v15; /*0x5d54ad*/
            v5[v14 + 1] = v15[1]; /*0x5d54b3*/
          }
          while ( v13 < v12 ); /*0x5d54b7*/
          v3 = a2; /*0x5d54b9*/
        }
        if ( *((_BYTE *)this + 13) ) /*0x5d54bf*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d54c8*/
          this->Items = 0; /*0x5d54d0*/
        }
      }
      this->Items = v5; /*0x5d54db*/
      this->Capacity = v3; /*0x5d54e1*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d54e4*/
      return 1; /*0x5d54ea*/
    }
    else
    {
      return 0; /*0x5d5480*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d54f4*/
    return 1; /*0x5d54fa*/
  }
}


// ==== 0x005D5500  _VectorClass_UAcceleratorTracker::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAcceleratorTracker::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d550d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d5513*/
    *(_DWORD *)(this + 4) = 0; /*0x5d551b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d551e*/
  *(_DWORD *)(this + 8) = 0; /*0x5d5521*/
}


// ==== 0x005D5530  _VectorClass_UAcceleratorTracker::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAcceleratorTracker::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d5530*/
    return 0; /*0x5d553e*/
  v3 = *(_DWORD *)(this + 8); /*0x5d5544*/
  result = 0; /*0x5d5547*/
  if ( v3 <= 0 ) /*0x5d554b*/
    return -1; /*0x5d556c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d5551*/
  {
    if ( ++result >= v3 ) /*0x5d556a*/
      return -1; /*0x5d556a*/
  }
  return result; /*0x5d553b*/
}


// ==== 0x005D5580  _VectorClass_UAcceleratorTracker::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAcceleratorTracker::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d5580*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x5d5595*/
  else
    return 0; /*0x5d5587*/
}


// ==== 0x005D55A0  _DynamicVectorClass_UAcceleratorTracker::SetCapacity8  this=DynamicVector  sig=csp ====
char __thiscall MSFont_18_::sub_5D55A0(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x5d55a2*/
  if ( a2 ) /*0x5d55ae*/
  {
    v5 = a3; /*0x5d55b4*/
    *((_BYTE *)this + 12) = 0; /*0x5d55b8*/
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
        v7 = v6; /*0x5d55d6*/
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
        v5 = v6; /*0x5d55e8*/
      }
      else
      {
        v5 = 0; /*0x5d55ec*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x5d5607*/
    if ( !v5 ) /*0x5d560b*/
      return 0; /*0x5d5694*/
    if ( this->Items ) /*0x5d5611*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x5d5616*/
      if ( a2 < v11 ) /*0x5d561b*/
        v11 = a2; /*0x5d561d*/
      v12 = 0; /*0x5d561f*/
      if ( v11 > 0 ) /*0x5d5623*/
      {
        do /*0x5d5642*/
        {
          v13 = 2 * v12; /*0x5d5628*/
          v14 = (_DWORD *)(this->Items + 8 * v12++); /*0x5d5631*/
          v5[v13] = *v14; /*0x5d5638*/
          v5[v13 + 1] = v14[1]; /*0x5d563e*/
        }
        while ( v12 < v11 ); /*0x5d5642*/
        v3 = a2; /*0x5d5644*/
      }
      if ( *((_BYTE *)this + 13) ) /*0x5d564a*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d5653*/
        this->Items = 0; /*0x5d565b*/
      }
    }
    this->Items = v5; /*0x5d5666*/
    this->DynamicVector_field_0x8 = v3; /*0x5d566c*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d566f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d5678*/
  }
  v15 = this->DynamicVector_field_0x8; /*0x5d567b*/
  if ( v15 < this->DynamicVector_field_0x10 ) /*0x5d5683*/
    this->DynamicVector_field_0x10 = v15; /*0x5d5685*/
  return 1; /*0x5d5688*/
}


// ==== 0x005D56A0  _DynamicVectorClass_UAcceleratorTracker::FindPair8  this=DynamicVector  sig=csp ====
int __thiscall MSFont_18_::sub_5D56A0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5d56a0*/
  result = 0; /*0x5d56a5*/
  if ( v2 <= 0 ) /*0x5d56ab*/
    return -1; /*0x5d56cc*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d56b1*/
  {
    if ( ++result >= v2 ) /*0x5d56ca*/
      return -1; /*0x5d56ca*/
  }
  return result; /*0x5d56cf*/
}


// ==== 0x005D56E0  _VectorClass_PAUHWND::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall MSFont_18_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d56e3*/
  *Block = &vt_VectorClass_HWND; /*0x5d56e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d56f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d56f8*/
    *(Block + 1) = 0; /*0x5d5700*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d570b*/
  *(Block + 2) = 0; /*0x5d5711*/
  if ( (a2 & 1) != 0 ) /*0x5d5718*/
    __3_YAXPAX_Z(Block); /*0x5d571b*/
  return (VectorClass *)Block; /*0x5d5725*/
}


// ==== 0x005D5730  _DynamicVectorClass_PAUHWND::Constructor_VectorClass_HWND_____  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSFont_18_::Constructor_VectorClass_HWND_____(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d5733*/
  *Block = &vt_VectorClass_HWND; /*0x5d5736*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d5740*/
  {
    __3_YAXPAX_Z(v3); /*0x5d5748*/
    *(Block + 1) = 0; /*0x5d5750*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d575b*/
  *(Block + 2) = 0; /*0x5d5761*/
  if ( (a2 & 1) != 0 ) /*0x5d5768*/
    __3_YAXPAX_Z(Block); /*0x5d576b*/
  return (DynamicVector *)Block; /*0x5d5775*/
}


// ==== 0x005D5780  _VectorClass_UAcceleratorTracker::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UAcceleratorTracker::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d5783*/
  *Block = &vt_VectorClass_AcceleratorTracker; /*0x5d5786*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d5790*/
  {
    __3_YAXPAX_Z(v3); /*0x5d5798*/
    *(Block + 1) = 0; /*0x5d57a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d57ab*/
  *(Block + 2) = 0; /*0x5d57b1*/
  if ( (a2 & 1) != 0 ) /*0x5d57b8*/
    __3_YAXPAX_Z(Block); /*0x5d57bb*/
  return (VectorClass *)Block; /*0x5d57c5*/
}


// ==== 0x005D57D0  _DynamicVectorClass_UAcceleratorTracker::Constructor_VectorClass_AcceleratorTracker_  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MSFont_18_::Constructor_VectorClass_AcceleratorTracker_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d57d3*/
  *Block = &vt_VectorClass_AcceleratorTracker; /*0x5d57d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d57e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d57e8*/
    *(Block + 1) = 0; /*0x5d57f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d57fb*/
  *(Block + 2) = 0; /*0x5d5801*/
  if ( (a2 & 1) != 0 ) /*0x5d5808*/
    __3_YAXPAX_Z(Block); /*0x5d580b*/
  return (DynamicVector *)Block; /*0x5d5815*/
}


// ==== 0x005D5820  Audio::SetSoundFileName  this=Movie  sig=csp ====
char **__thiscall sub_5D5820(char **this, char *Source, int a3)
{
  *this = 0; /*0x5d5825*/
  *(this + 1) = 0; /*0x5d5827*/
  *((_BYTE *)this + 8) = 0; /*0x5d582a*/
  if ( Audio::IsSoundEnabled() ) /*0x5d582d*/
    *this = _strdup(Source); /*0x5d5843*/
  return this; /*0x5d5847*/
}


// ==== 0x005D5850  MSEngine::DestroyData  this=CampaignClass  sig=csp ====
void __thiscall sub_5D5850(void **this)
{
  if ( *this ) /*0x5d5850*/
    free(*this); /*0x5d5857*/
}


// ==== 0x005D5860  nullsub_192  this=VOID_PTR  sig=csp ====
void __stdcall nullsub_192(int a1)
{
  ; /*0x5d5860*/
}


// ==== 0x005D5870  Timer::EnableHighPrecision  this=int  sig=csp ====
void *__thiscall Timer_EnableHighPrecision(void *this)
{
  timeBeginPeriod(1u); /*0x5d5875*/
  return this; /*0x5d587d*/
}


// ==== 0x005D5880  Timer::DisableHighPrecision  this=Timer  sig=ida-proto ====
MMRESULT Timer_DisableHighPrecision()
{
  return timeEndPeriod(1u); /*0x5d5888*/
}


// ==== 0x005D5890  timeGetTime  this=int  sig=ida-proto ====
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
  MEMORY[0xABFD58] = Math::Sqrt(v0 + v0); /*0x5d58ce*/
}


// ==== 0x005D58E0  MPBattleClass::allyTeams  this=MPBattleClass  sig=ida-proto ====
void sub_5D58E0()
{
  MEMORY[0xABFDC8] = MEMORY[0xABFD58] / 60.0; /*0x5d58ec*/
}


// ==== 0x005D5900  MPBattleClass::isMegawealthAllowed  this=MPBattleClass  sig=ida-proto ====
void sub_5D5900()
{
  MEMORY[0xABFD98] = 1.0 / MEMORY[0xABFDC8]; /*0x5d590c*/
}


// ==== 0x005D5920  MPBattleClass::onAIJoined  this=MPBattleClass  sig=ida-proto ====
void sub_5D5920()
{
  MEMORY[0xABFD90] = 0.0174532925199433 * 45.0; /*0x5d592c*/
}


// ==== 0x005D5940  sub_5D5940  this=-  sig=ida-proto ====
void sub_5D5940()
{
  MEMORY[0xABFD60] = 0.0174532925199433 * 60.0; /*0x5d594c*/
}


// ==== 0x005D5960  sub_5D5960  this=-  sig=ida-proto ====
void sub_5D5960()
{
  MEMORY[0xABFD38] = 0.0174532925199433 * 90.0; /*0x5d596c*/
}


// ==== 0x005D5980  sub_5D5980  this=-  sig=ida-proto ====
__int64 sub_5D5980()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFD38] - MEMORY[0xABFD60]); /*0x5d5992*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFD58] * 0.5); /*0x5d59a6*/
  MEMORY[0xABFDD0] = result; /*0x5d59ab*/
  return result; /*0x5d59b0*/
}


// ==== 0x005D59C0  sub_5D59C0  this=-  sig=ida-proto ====
void sub_5D59C0()
{
  MEMORY[0xABFD68] = Math::ArcTan((double)MEMORY[0xABFDD0] * 0.00390625); /*0x5d59d7*/
}


// ==== 0x005D59F0  sub_5D59F0  this=-  sig=ida-proto ====
void sub_5D59F0()
{
  MEMORY[0xABFD88] = Math::ArcTan((double)(2 * MEMORY[0xABFDD0]) / MEMORY[0xABFD58]); /*0x5d5a12*/
}


// ==== 0x005D5A20  Display::CalculateDefaultSize  this=Display  sig=ida-proto ====
__int64 sub_5D5A20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFDD0]) + 0.5); /*0x5d5a3b*/
  MEMORY[0xABFDC4] = result; /*0x5d5a40*/
  return result; /*0x5d5a46*/
}


// ==== 0x005D5A50  sub_5D5A50  this=-  sig=ida-proto ====
int sub_5D5A50()
{
  MEMORY[0xABFD50] = 0; /*0x5d5a52*/
  MEMORY[0xABFD52] = 0; /*0x5d5a58*/
  return 0; /*0x5d5a5e*/
}


// ==== 0x005D5A60  sub_5D5A60  this=-  sig=ida-proto ====
int sub_5D5A60()
{
  MEMORY[0xABFD78] = 0; /*0x5d5a62*/
  MEMORY[0xABFD7C] = 0; /*0x5d5a67*/
  MEMORY[0xABFD80] = 0; /*0x5d5a6c*/
  return 0; /*0x5d5a71*/
}


// ==== 0x005D5A80  sub_5D5A80  this=-  sig=ida-proto ====
int sub_5D5A80()
{
  MEMORY[0xABFDC0] = 0; /*0x5d5a85*/
  MEMORY[0xABFDB8] = 128; /*0x5d5a8f*/
  MEMORY[0xABFDBC] = 128; /*0x5d5a94*/
  return 128; /*0x5d5a99*/
}


// ==== 0x005D5AA0  sub_5D5AA0  this=-  sig=ida-proto ====
int sub_5D5AA0()
{
  MEMORY[0xABFD40] = 0; /*0x5d5aa2*/
  MEMORY[0xABFD44] = 0; /*0x5d5aa7*/
  MEMORY[0xABFD48] = 0; /*0x5d5aac*/
  MEMORY[0xABFD4C] = 0; /*0x5d5ab1*/
  return 0; /*0x5d5ab6*/
}


// ==== 0x005D5AC0  System_Init  this=-  sig=ida-proto ====
DynamicVector *System_Init()
{
  if ( ((int)(&g_MatrixTransformState)[82] & 1) == 0 ) /*0x5d5ac9*/
  {
    LOBYTE((&g_MatrixTransformState)[82]) |= 1u; /*0x5d5ad6*/
    *(_QWORD *)(&(&g_MatrixTransformState)[83] + 1) = 0; /*0x5d5adc*/
    *((_WORD *)&g_MatrixTransformState + 1998) = 1; /*0x5d5aec*/
    *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d5af1*/
    *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d5b05*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5b0a*/
  }
  return (DynamicVector *)&(&g_MatrixTransformState)[83]; /*0x5d5b17*/
}


// ==== 0x005D5B20  MultiplayerConfig::Cleanup  this=MultiplayerConfig  sig=ida-proto ====
void __cdecl MultiplayerConfig_Cleanup()
{
  MEMORY[0xABFDA0] = (int)&vt_VectorClass_MultiplayerGameMode; /*0x5d5b28*/
  if ( MEMORY[0xABFDA4] && MEMORY[0xABFDAD] ) /*0x5d5b3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xABFDA4]); /*0x5d5b3f*/
    MEMORY[0xABFDA4] = 0; /*0x5d5b47*/
  }
  MEMORY[0xABFDAD] = 0; /*0x5d5b4d*/
  MEMORY[0xABFDA8] = 0; /*0x5d5b53*/
}


// ==== 0x005D5B60  MultiplayerGameMode::Construct  this=MultiplayerGameMode  sig=csp ====
void *__thiscall MultiplayerGameMode::Construct(
        void *this,
        MultiplayerGameMode *aP1,
        MultiplayerGameMode *aP2,
        MultiplayerGameMode *aP3,
        MultiplayerGameMode *aP4,
        MultiplayerGameMode *aP5,
        MultiplayerGameMode *aP6)
{
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  CCINIClass *v10; // ecx
  char Bool_Overwrite; // al
  char v12; // dl
  int v13; // ecx
  char v14; // al
  char v15; // cl
  char v16; // al
  MultiplayerGameMode v18; // [esp+10h] [ebp-6Ch] BYREF
  _BYTE v19[12]; // [esp+68h] [ebp-14h] BYREF
  int v20; // [esp+74h] [ebp-8h]

  this->MultiplayerGameMode_field_0x0C = 0; /*0x5d5b73*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d5b76*/
  *((_BYTE *)this + 20) = 1; /*0x5d5b79*/
  *((_BYTE *)this + 21) = 0; /*0x5d5b7d*/
  this->MultiplayerGameMode_field_0x08 = &DynamicVectorClass<MultiplayerTeam *>::`vftable'; /*0x5d5b80*/
  *((_DWORD *)this + 7) = 10; /*0x5d5b87*/
  this->MultiplayerGameMode_field_0x18 = 0; /*0x5d5b8e*/
  WideString::AssignFromPtr((wchar_t **)this + 8, (const wchar_t **)aP1); /*0x5d5b91*/
  WideString::AssignFromPtr((wchar_t **)this + 9, (const wchar_t **)aP2); /*0x5d5ba1*/
  this->__pad_028 = aP6; /*0x5d5bba*/
  String::AssignFromPtr((char **)this + 11, (const char **)aP3); /*0x5d5bbd*/
  String::AssignFromPtr((char **)this + 12, (const char **)aP4); /*0x5d5bcd*/
  *((_BYTE *)this + 52) = (_BYTE)aP5; /*0x5d5bdb*/
  *((_DWORD *)this + 14) = 0; /*0x5d5bde*/
  *(_DWORD *)this = &vt_MultiplayerGameMode; /*0x5d5be1*/
  *((_BYTE *)this + 4) = 0; /*0x5d5be7*/
  *((_DWORD *)this + 15) = 65793; /*0x5d5bea*/
  v8 = (_DWORD *)__2_YAPAXI_Z(0x58u); /*0x5d5bf9*/
  v9 = v8; /*0x5d5bfe*/
  if ( v8 ) /*0x5d5c05*/
  {
    v8[1] = 0; /*0x5d5c0a*/
    v8[2] = 0; /*0x5d5c0d*/
    INISectionList::Constructor(v8 + 3); /*0x5d5c10*/
    Node::Init(v9 + 10); /*0x5d5c18*/
    v9[15] = 0; /*0x5d5c1d*/
    *((_BYTE *)v9 + 64) = 0; /*0x5d5c20*/
    *v9 = &CCINIClass_Vtable; /*0x5d5c23*/
  }
  else
  {
    v9 = 0; /*0x5d5c2b*/
  }
  *((_DWORD *)this + 14) = v9; /*0x5d5c32*/
  CCFileClass::Construct2(&v18, (char **)this + 11); /*0x5d5c35*/
  if ( CCFileClass::Open(&v18, 0) ) /*0x5d5c3f*/
    CCINIClass::Load(*((_BYTE **)this + 14), &v18, 0, 0); /*0x5d5c52*/
  *(_DWORD *)v18.__pad_0 = &vt_CCFileClass; /*0x5d5c5b*/
  v20 = 0; /*0x5d5c63*/
  Vector::Clear((int)v19); /*0x5d5c67*/
  *(_DWORD *)v18.__pad_0 = &off_7E1668; /*0x5d5c70*/
  BufferIOFileClass::Dtor(&v18); /*0x5d5c78*/
  v10 = (CCINIClass *)*((_DWORD *)this + 14); /*0x5d5c7d*/
  if ( v10 ) /*0x5d5c82*/
  {
    if ( INIClass::BinarySearchSection((int)v10, (INIClass *)&stru_830620.__pad_164[24]) ) /*0x5d5c8f*/
    {
      Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5d5cb0*/
                         *((_DWORD *)this + 14),
                         (unsigned __int8 *)&stru_830620.__pad_164[24],
                         (CCINIClass *)&stru_830620.__pad_2B8[4],
                         *((_BYTE *)this + 61));
      v12 = *((_BYTE *)this + 62); /*0x5d5cb5*/
      v13 = *((_DWORD *)this + 14); /*0x5d5cb8*/
      *((_BYTE *)this + 61) = Bool_Overwrite; /*0x5d5cbb*/
      v14 = INIClass::ReadBool_Overwrite( /*0x5d5cca*/
              v13,
              (unsigned __int8 *)&stru_830620.__pad_164[24],
              (CCINIClass *)&stru_830620.__pad_220[124],
              v12);
      v15 = *((_BYTE *)this + 60); /*0x5d5ccf*/
      *((_BYTE *)this + 62) = v14; /*0x5d5cd2*/
      *((_BYTE *)this + 60) = INIClass::ReadBool_Overwrite( /*0x5d5cea*/
                                *((_DWORD *)this + 14),
                                (unsigned __int8 *)&stru_830620.__pad_164[24],
                                (CCINIClass *)&stru_830620.__pad_220[108],
                                v15);
      v16 = INIClass::ReadBool_Overwrite( /*0x5d5d00*/
              *((_DWORD *)this + 14),
              (unsigned __int8 *)&stru_830620.__pad_164[24],
              (CCINIClass *)&stru_830620.__pad_220[96],
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
void __thiscall sub_5D5D20(void *this)
{
  int v2; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void *v5; // eax

  v2 = 0; /*0x5d5d27*/
  for ( *(_DWORD *)this = &vt_MultiplayerGameMode; v2 < this->MultiplayerGameMode_field_0x18; ++v2 ) /*0x5d5d34*/
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(this->MultiplayerGameMode_field_0x0C + 4 * v2); /*0x5d5d39*/
    if ( v3 ) /*0x5d5d3e*/
      (**v3)(v3, 1); /*0x5d5d44*/
  }
  (*(void (__thiscall **)(int))(this->MultiplayerGameMode_field_0x08 + 12))((int)this + 8); /*0x5d5d56*/
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 14); /*0x5d5d59*/
  if ( v4 ) /*0x5d5d5e*/
    (**v4)(v4, 1); /*0x5d5d64*/
  DeleteAndZero((void **)this + 12); /*0x5d5d69*/
  DeleteAndZero((void **)this + 11); /*0x5d5d71*/
  DeleteAndZero::Alt((void **)this + 9); /*0x5d5d79*/
  DeleteAndZero::Alt((void **)this + 8); /*0x5d5d81*/
  v5 = (void *)this->MultiplayerGameMode_field_0x0C; /*0x5d5d86*/
  this->MultiplayerGameMode_field_0x08 = &vt_VectorClass_MultiplayerTeam; /*0x5d5d89*/
  if ( v5 && *((_BYTE *)this + 21) ) /*0x5d5d93*/
  {
    __3_YAXPAX_Z(v5); /*0x5d5d99*/
    this->MultiplayerGameMode_field_0x0C = 0; /*0x5d5da1*/
  }
  *((_BYTE *)this + 21) = 0; /*0x5d5da4*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d5da7*/
}


// ==== 0x005D5DB0  MultiplayerGameMode::MissionStubReturnZero  this=MultiplayerGameMode  sig=csp ====
int VtableStub_RetNegTwo()
{
  return -2; /*0x5d5db5*/
}


// ==== 0x005D5DC0  MultiplayerGameMode::GetModeNeg2  this=MultiplayerGameMode  sig=csp ====
int __thiscall Dialog_GetModeNeg2(_BYTE *this)
{
  return *(this + 63) != 0 ? 0 : -2;
}


// ==== 0x005D5DD0  MultiplayerGameMode::GetMode3  this=MultiplayerGameMode  sig=csp ====
int __thiscall Dialog_GetMode3(_BYTE *this)
{
  return *(this + 60) != 0 ? 3 : -2;
}


// ==== 0x005D5DE0  MultiplayerGameMode::IsValid  this=MultiplayerGameMode  sig=csp ====
bool __thiscall GameMode_IsValid(_BYTE *this, unsigned int a2)
{
  return (!*(this + 63) || a2 != -2) && a2 < 4; /*0x5d5df2*/
}


// ==== 0x005D5E10  MultiplayerGameMode::GetFirst  this=MultiplayerGameMode  sig=ida-proto ====
int MultiplayerGameMode_GetFirst()
{
  if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d5e1a*/
  {
    MEMORY[0xABFDA4] = 0; /*0x5d5e26*/
    MEMORY[0xABFD70] |= 1u; /*0x5d5e2c*/
    MEMORY[0xABFDA8] = 0; /*0x5d5e32*/
    MEMORY[0xABFDAC] = 1; /*0x5d5e38*/
    MEMORY[0xABFDAD] = 0; /*0x5d5e3f*/
    MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d5e45*/
    MEMORY[0xABFDB4] = 10; /*0x5d5e4f*/
    MEMORY[0xABFDB0] = 0; /*0x5d5e59*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5e5f*/
  }
  if ( !MEMORY[0xABFDB0] ) /*0x5d5e6d*/
    return 0; /*0x5d5e6f*/
  if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d5e7a*/
  {
    MEMORY[0xABFDA4] = 0; /*0x5d5e86*/
    MEMORY[0xABFD70] |= 1u; /*0x5d5e8c*/
    MEMORY[0xABFDA8] = 0; /*0x5d5e92*/
    MEMORY[0xABFDAC] = 1; /*0x5d5e98*/
    MEMORY[0xABFDAD] = 0; /*0x5d5e9f*/
    MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d5ea5*/
    MEMORY[0xABFDB4] = 10; /*0x5d5eaf*/
    MEMORY[0xABFDB0] = 0; /*0x5d5eb9*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5ebf*/
  }
  return *(_DWORD *)MEMORY[0xABFDA4]; /*0x5d5e71*/
}


// ==== 0x005D5ED0  MultiplayerGameMode::ListGet  this=MultiplayerGameMode  sig=ida-proto ====
int MultiplayerGameMode_ListGet()
{
  if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d5ed9*/
  {
    MEMORY[0xABFD70] |= 1u; /*0x5d5ee6*/
    MEMORY[0xABFDA4] = 0; /*0x5d5eec*/
    MEMORY[0xABFDA8] = 0; /*0x5d5ef1*/
    MEMORY[0xABFDAC] = 1; /*0x5d5ef6*/
    MEMORY[0xABFDAD] = 0; /*0x5d5efc*/
    MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d5f01*/
    MEMORY[0xABFDB4] = 10; /*0x5d5f0b*/
    MEMORY[0xABFDB0] = 0; /*0x5d5f15*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5f1a*/
  }
  return MEMORY[0xABFDB0]; /*0x5d5f27*/
}


// ==== 0x005D5F30  MultiplayerGameMode::Find  this=AbstractClass  sig=csp ====
int __thiscall MultiplayerGameMode_Find(void *this)
{
  int i; // ebp
  int result; // eax

  for ( i = 0; ; ++i ) /*0x5d5f3b*/
  {
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d5f4e*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d5f57*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(0, 0); /*0x5d5f62*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d5f67*/
      MEMORY[0xABFDB4] = 10; /*0x5d5f6d*/
      MEMORY[0xABFDB0] = 0; /*0x5d5f78*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d5f7e*/
    }
    if ( i >= MEMORY[0xABFDB0] ) /*0x5d5f8c*/
      break; /*0x5d5f8c*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d5f95*/
    {
      MEMORY[0xABFDA4] = 0; /*0x5d5fa1*/
      MEMORY[0xABFD70] |= 1u; /*0x5d5fa7*/
      MEMORY[0xABFDA8] = 0; /*0x5d5fad*/
      MEMORY[0xABFDAC] = 1; /*0x5d5fb3*/
      MEMORY[0xABFDAD] = 0; /*0x5d5fba*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d5fc0*/
      MEMORY[0xABFDB4] = 10; /*0x5d5fc6*/
      MEMORY[0xABFDB0] = 0; /*0x5d5fcc*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d5fd2*/
    }
    result = *((_DWORD *)MEMORY[0xABFDA4] + i); /*0x5d5fe3*/
    if ( *(void **)(result + 40) == this ) /*0x5d5fe9*/
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
  v8 = MEMORY[0xA8B238][0] == 5; /*0x5d6020*/
  v3 = 0; /*0x5d6027*/
  for ( i = 0; ; v3 = i ) /*0x5d6029*/
  {
    result = MEMORY[0xABFD70]; /*0x5d602d*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d6034*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d603d*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&MEMORY[0xABFDA0], 0, 0); /*0x5d6048*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d604d*/
      MEMORY[0xABFDB4] = 10; /*0x5d6057*/
      MEMORY[0xABFDB0] = 0; /*0x5d6066*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d606c*/
    }
    if ( v3 >= MEMORY[0xABFDB0] ) /*0x5d607a*/
      break; /*0x5d607a*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d6087*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d6090*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&MEMORY[0xABFDA0], 0, 0); /*0x5d609b*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d60a0*/
      MEMORY[0xABFDB4] = 10; /*0x5d60aa*/
      MEMORY[0xABFDB0] = 0; /*0x5d60b9*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d60bf*/
    }
    v5 = *((_DWORD *)MEMORY[0xABFDA4] + v3); /*0x5d60cc*/
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


// ==== 0x005D6130  SkirmishSetup_Setup  this=int  sig=csp ====
char __fastcall SkirmishSetup_Setup(HWND hWnd, int a2)
{
  int v3; // esi
  char result; // al
  LPARAM v5; // esi
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5d614d*/
  v8 = MEMORY[0xA8B238][0] == 5; /*0x5d6156*/
  v3 = 0; /*0x5d615b*/
  for ( i = 0; ; v3 = i ) /*0x5d615d*/
  {
    result = MEMORY[0xABFD70]; /*0x5d6161*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d6168*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d6171*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&MEMORY[0xABFDA0], 0, 0); /*0x5d617c*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d6181*/
      MEMORY[0xABFDB4] = 10; /*0x5d618b*/
      MEMORY[0xABFDB0] = 0; /*0x5d619a*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d61a0*/
    }
    if ( v3 >= MEMORY[0xABFDB0] ) /*0x5d61ae*/
      break; /*0x5d61ae*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d61bb*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d61c4*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&MEMORY[0xABFDA0], 0, 0); /*0x5d61cf*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d61d4*/
      MEMORY[0xABFDB4] = 10; /*0x5d61de*/
      MEMORY[0xABFDB0] = 0; /*0x5d61ed*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d61f3*/
    }
    v5 = *((_DWORD *)MEMORY[0xABFDA4] + v3); /*0x5d6200*/
    if ( (*(_BYTE *)(v5 + 61) || MEMORY[0xA8B238][0] != 4 || !Network::IsMultiplayerActive()) /*0x5d6267*/
      && (*(_BYTE *)(v5 + 62) || MEMORY[0xA8B238][0] != 4 || !Network::IsLobbyFeature())
      && (MEMORY[0x8316A4]
       || *(_DWORD *)(MEMORY[0xA8DA90] + 107) != -1
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
char PlayerClass_AssignPlayerIndex()
{
  int i; // esi

  for ( i = 0; i < MEMORY[0xA8DA84]; ++i ) /*0x5d62ca*/
  {
    if ( SessionClass::GetPlayerSide(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i)) == -3 ) /*0x5d62dc*/
      *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 107) = -1; /*0x5d62e7*/
    else
      *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 107) = i; /*0x5d62f8*/
  }
  return 1; /*0x5d6307*/
}


// ==== 0x005D6310  MultiplayerGameMode::MissionStubReturnZero2  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass::MissionStubReturnZero2(MPCooperative *aP0)
{
  return 1; /*0x5d6312*/
}


// ==== 0x005D6320  MultiplayerGameMode::saveGame  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::saveGame(std::codecvt_base *this)
{
  return 1; /*0x5d6322*/
}


// ==== 0x005D6330  MultiplayerGameMode::loadGame  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::loadGame(std::codecvt_base *this)
{
  return 1; /*0x5d6332*/
}


// ==== 0x005D6340  MultiplayerGameMode::createStartingForces  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::createStartingForces(std::codecvt_base *this)
{
  return 1; /*0x5d6342*/
}


// ==== 0x005D6350  MultiplayerGameMode::GetFlag  this=MultiplayerGameMode  sig=csp ====
char __thiscall DialogClass_GetFlag(_BYTE *this)
{
  return *(this + 52); /*0x5d6353*/
}


// ==== 0x005D6360  MultiplayerGameMode::Stub  this=MultiplayerGameMode  sig=csp ====
char MPCooperative::_vt16()
{
  return 0; /*0x5d6362*/
}


// ==== 0x005D6370  MultiplayerGameMode::FindOpenSlot  this=MultiplayerGameMode  sig=csp ====
int __thiscall GameClass_FindOpenSlot(char *this)
{
  int v1; // ebp
  int v2; // ebx
  int v4; // esi
  char v5; // al

  v1 = MEMORY[0xA8B8D8]; /*0x5d6372*/
  v2 = 0; /*0x5d6379*/
  if ( MEMORY[0xA8B8D8] <= 0 ) /*0x5d6380*/
    return -1; /*0x5d63cc*/
  while ( 1 ) /*0x5d6387*/
  {
    v4 = *(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v2); /*0x5d6387*/
    if ( IsRandMap::Sed(v4) ) /*0x5d638c*/
    {
      v5 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 60))(this); /*0x5d6399*/
    }
    else
    {
      if ( !*(_BYTE *)(v4 + 380) && Network::IsMultiplayerActive() ) /*0x5d63a8*/
        goto LABEL_8; /*0x5d63af*/
      v5 = GameClass::initPlayerData(this + 48); /*0x5d63b7*/
    }
    if ( v5 ) /*0x5d63be*/
      return v2; /*0x5d63c5*/
LABEL_8:
    if ( ++v2 >= v1 ) /*0x5d63c3*/
      return -1; /*0x5d63c3*/
  }
}


// ==== 0x005D63E0  MapPreview::Check  this=ObjectClass  sig=csp ====
char __thiscall MapPreview_Check(char *this, int a2)
{
  if ( IsRandMap::Sed(a2) ) /*0x5d63ea*/
    return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 60))(this); /*0x5d63f7*/
  if ( *(_BYTE *)(a2 + 380) || !Network::IsMultiplayerActive() ) /*0x5d6409*/
    return GameClass::initPlayerData(this + 48); /*0x5d641f*/
  return 0; /*0x5d63fa*/
}


// ==== 0x005D6430  MultiplayerGameMode::dispatchEvents  this=MultiplayerGameMode  sig=csp ====
// Microsoft VisualC 2-14/net runtime
int ScenarioClass::dispatchEvents()
{
  return Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 9); /*0x69b684*/
}


// ==== 0x005D6440  MultiplayerGameMode::MissionStubReturnZero3  this=MultiplayerGameMode  sig=csp ====
int __thiscall ScenarioClass::_vt28(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 108))(this);
}


// ==== 0x005D6450  MultiplayerGameMode::FillEntries  this=MultiplayerGameMode  sig=csp ====
int __stdcall ListBox::FillEntries(HWND hWnd, MultiplayerGameMode *aP1, int a3)
{
  int result; // eax
  int i; // ebx
  LPARAM v5; // esi
  LRESULT v6; // ebp

  ListBox::Clear(hWnd); /*0x5d6458*/
  result = (int)aP1; /*0x5d645d*/
  for ( i = 0; i < aP1->MultiplayerGameMode_field_0x10; ++i ) /*0x5d6468*/
  {
    v5 = *(_DWORD *)(aP1->MultiplayerGameMode_field_0x04 + 4 * i); /*0x5d6473*/
    v6 = SendMessageA(hWnd, 0x143u, 0, v5); /*0x5d6485*/
    if ( v5 == a3 ) /*0x5d648d*/
      SendMessageA(hWnd, 0x14Eu, v6, 0); /*0x5d6498*/
    SendMessageA(hWnd, 0x151u, v6, v5); /*0x5d64a6*/
    result = (int)aP1; /*0x5d64ac*/
  }
  return result; /*0x5d64b8*/
}


// ==== 0x005D64C0  MultiplayerGameMode::Refresh  this=MultiplayerGameMode  sig=csp ====
int __stdcall ListBox_Refresh(HWND hWnd, int a2, int a3)
{
  int result; // eax
  int i; // ebp
  LPARAM v6; // esi
  LRESULT v7; // eax
  HWND hWnda; // [esp+10h] [ebp+4h]

  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5d64d7*/
  result = a2; /*0x5d64d9*/
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i ) /*0x5d64e4*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * i); /*0x5d64ee*/
    v7 = SendMessageA(hWnd, 0x4CDu, 0, v6); /*0x5d64fa*/
    hWnda = (HWND)v7; /*0x5d6500*/
    if ( v6 == a3 ) /*0x5d6506*/
    {
      SendMessageA(hWnd, 0x186u, v7, 0); /*0x5d6511*/
      v7 = (LRESULT)hWnda; /*0x5d6513*/
    }
    SendMessageA(hWnd, 0x19Au, v7, v6); /*0x5d651f*/
    result = a2; /*0x5d6521*/
  }
  return result; /*0x5d652c*/
}


// ==== 0x005D6540  MultiplayerGameMode::FillPlayers  this=MultiplayerGameMode  sig=csp ====
int __thiscall ListBox_FillPlayers(_DWORD *this, HWND hWnd, int a3)
{
  int i; // esi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax
  int v7; // ebx
  LPARAM v8; // esi
  wchar_t *v9; // eax
  LRESULT v10; // ebp
  int v11; // [esp+14h] [ebp+8h]

  ListBox::Clear(hWnd); /*0x5d6549*/
  for ( i = 0; i < this->MultiplayerGameMode_field_0x18; ++i ) /*0x5d6555*/
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(this->MultiplayerGameMode_field_0x0C + 4 * i); /*0x5d655a*/
    if ( v5 ) /*0x5d655f*/
      (**v5)(v5, 1); /*0x5d6565*/
  }
  (*(void (__thiscall **)(_DWORD *))(this->MultiplayerGameMode_field_0x08 + 12))(this + 2); /*0x5d6577*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 192))(this, this + 2); /*0x5d657f*/
  result = a3; /*0x5d6585*/
  if ( a3 >= 0 && a3 < MEMORY[0xA8DA84] ) /*0x5d6593*/
  {
    v7 = 0; /*0x5d659b*/
    v11 = *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * a3) + 107); /*0x5d65a3*/
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


// ==== 0x005D6620  StreamWrapper::readData  this=FreeForAll  sig=csp ====
int __thiscall StreamWrapper::readData(FreeForAll *this, int a2)
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
        v5 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 3) + 4 * v4); /*0x5d6635*/
        if ( v5 ) /*0x5d663a*/
          (**v5)(v5, 1); /*0x5d6640*/
        ++v4; /*0x5d6645*/
      }
      while ( v4 < *((_DWORD *)this + 6) ); /*0x5d6648*/
    }
    (*(void (__thiscall **)(FreeForAll *))(*((_DWORD *)this + 2) + 12))(this + 2); /*0x5d6652*/
    (*((void (__thiscall **)(FreeForAll *, FreeForAll *))this->vfptr + 48))(this, this + 2); /*0x5d665a*/
  }
  v6 = *((_DWORD *)this + 6); /*0x5d6660*/
  v7 = 0; /*0x5d6663*/
  if ( v6 <= 0 ) /*0x5d6667*/
    return 0; /*0x5d6683*/
  for ( i = (int *)*((_DWORD *)this + 3); ; ++i ) /*0x5d6669*/
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
int __stdcall ListBox_AddEntries(int a1)
{
  void *v1; // eax
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int result; // eax
  int i; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx

  v1 = __2_YAPAXI_Z(0xCu); /*0x5d6695*/
  if ( v1 ) /*0x5d669f*/
    v2 = MPCombatTeam::Constructor(v1); /*0x5d66a8*/
  else
    v2 = 0; /*0x5d66ac*/
  v3 = *(_DWORD *)(a1 + 8); /*0x5d66b2*/
  if ( *(_DWORD *)(a1 + 16) < v3 /*0x5d66d7*/
    || (*(_BYTE *)(a1 + 13) || !v3)
    && (v4 = *(_DWORD *)(a1 + 20), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v3 + v4, 0) )
  {
    v5 = *(_DWORD *)(a1 + 16); /*0x5d66de*/
    v6 = *(_DWORD *)(a1 + 4); /*0x5d66e1*/
    *(_DWORD *)(a1 + 16) = v5 + 1; /*0x5d66e7*/
    *(_DWORD *)(v6 + 4 * v5) = v2; /*0x5d66ea*/
  }
  result = MEMORY[0xA8B548]; /*0x5d66ed*/
  for ( i = 1; i <= MEMORY[0xA8B548]; ++i ) /*0x5d66f9*/
  {
    v9 = ListBox::Constructor(i); /*0x5d6705*/
    v10 = *(_DWORD *)(a1 + 8); /*0x5d6707*/
    if ( *(_DWORD *)(a1 + 16) < v10 /*0x5d6729*/
      || (*(_BYTE *)(a1 + 13) || !v10)
      && (v11 = *(_DWORD *)(a1 + 20), v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v10 + v11, 0) )
    {
      v12 = *(_DWORD *)(a1 + 16); /*0x5d6730*/
      v13 = *(_DWORD *)(a1 + 4); /*0x5d6733*/
      *(_DWORD *)(a1 + 16) = v12 + 1; /*0x5d6739*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x5d673c*/
    }
    result = MEMORY[0xA8B548]; /*0x5d673f*/
  }
  return result; /*0x5d6749*/
}


// ==== 0x005D6790  MultiplayerGameMode::ClearFlag  this=MultiplayerGameMode  sig=csp ====
char ScenarioClass_ClearFlag()
{
  int v0; // ecx

  v0 = *(_DWORD *)MEMORY[0xA8B230]; /*0x5d6795*/
  BYTE1(v0) = BYTE1(*(_DWORD *)MEMORY[0xA8B230]) & 0xFB; /*0x5d6797*/
  *(_DWORD *)MEMORY[0xA8B230] = v0; /*0x5d679a*/
  return 1; /*0x5d679e*/
}


// ==== 0x005D67A0  MultiplayerGameMode::MissionStubReturnZero4  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass::_vt7(int a1)
{
  return 1; /*0x5d67a2*/
}


// ==== 0x005D67B0  GameConfig::Constructor  this=int  sig=csp ====
char *__thiscall sub_5D67B0(char **this)
{
  char **v1; // edi
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD v6[22]; // [esp+Ch] [ebp-6Ch] BYREF
  char v7[12]; // [esp+64h] [ebp-14h] BYREF
  int v8; // [esp+70h] [ebp-8h]

  v1 = this; /*0x5d67b5*/
  if ( !*(this + 14) ) /*0x5d67bd*/
  {
    v2 = __2_YAPAXI_Z(0x58u); /*0x5d67c9*/
    v3 = v2; /*0x5d67ce*/
    if ( v2 ) /*0x5d67d5*/
    {
      v2[1] = 0; /*0x5d67de*/
      v2[2] = 0; /*0x5d67e1*/
      v2[5] = 0; /*0x5d67e6*/
      v2[6] = 0; /*0x5d67e9*/
      v2[4] = &vt_GenericNode; /*0x5d67ec*/
      GenericNode::Constructor(v2 + 7); /*0x5d67f2*/
      v3[3] = &vt_GenericList; /*0x5d67fa*/
      LinkedList::Prepend(v3 + 4, (int)(v3 + 7)); /*0x5d6801*/
      v1 = this; /*0x5d6806*/
      v3[3] = &vt_List_INIClass_INISection; /*0x5d680a*/
      v3[10] = 0; /*0x5d6811*/
      v3[11] = 0; /*0x5d6814*/
      v3[12] = 0; /*0x5d6817*/
      *((_BYTE *)v3 + 52) = 0; /*0x5d681a*/
      v3[14] = 0; /*0x5d681d*/
      v3[15] = 0; /*0x5d6820*/
      *((_BYTE *)v3 + 64) = 0; /*0x5d6823*/
      *v3 = &CCINIClass_Vtable; /*0x5d6826*/
    }
    else
    {
      v3 = 0; /*0x5d682f*/
    }
    v1[14] = (char *)v3; /*0x5d6839*/
    CCFileClass::Construct2(v6, v1 + 11); /*0x5d683c*/
    if ( CCFileClass::Open(v6, 0) ) /*0x5d6846*/
      CCINIClass::Load(v1[14], (int)v6, 0, 0); /*0x5d685a*/
    v6[0] = &vt_CCFileClass; /*0x5d6863*/
    v8 = 0; /*0x5d686b*/
    Vector::Clear((int)v7); /*0x5d686f*/
    v6[0] = &off_7E1668; /*0x5d6878*/
    BufferIOFileClass::Dtor(v6); /*0x5d6880*/
  }
  return v1[14]; /*0x5d6888*/
}


// ==== 0x005D6890  MultiplayerGameMode::FindStartingCell  this=MultiplayerGameMode  sig=csp ====
_DWORD *__stdcall ObserverClass_FindStartingCell(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // ecx
  #375 *v7; // ecx
  int v8; // esi
  int v9; // esi
  int v11; // esi
  #375 *v12; // ecx
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  double v19; // st7
  double v20; // st7
  int v21; // [esp+18h] [ebp-10h]
  #375 *v22; // [esp+1Ch] [ebp-Ch]
  #375 *v23; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  int v26; // [esp+24h] [ebp-4h]

  v4 = 0; /*0x5d68a5*/
  v5 = *(_DWORD *)(a3 + 16); /*0x5d68a7*/
  if ( v5 > 0 ) /*0x5d68ac*/
  {
    v6 = (char *)MEMORY[0xA8B230] + 4480; /*0x5d68ae*/
    do /*0x5d68bf*/
    {
      if ( *v6 != -1 ) /*0x5d68b7*/
        break; /*0x5d68b7*/
      ++v4; /*0x5d68b9*/
      ++v6; /*0x5d68ba*/
    }
    while ( v4 < v5 ); /*0x5d68bf*/
  }
  if ( v4 == v5 ) /*0x5d68c3*/
  {
    MEMORY[0xABFDD4] = 0; /*0x5d68d1*/
    MEMORY[0xABFDD5] = 0; /*0x5d68d8*/
    v7 = *(#375 **)&HouseClass_Array->__pad_0[4 * a2]; /*0x5d68df*/
    v22 = v7; /*0x5d68e4*/
    if ( !v7 ) /*0x5d68e8*/
      goto LABEL_13; /*0x5d68e8*/
    v8 = 0; /*0x5d68ef*/
    if ( MEMORY[0xA8DA84] <= 0 ) /*0x5d68f3*/
      goto LABEL_13; /*0x5d68f3*/
    while ( !(unsigned __int8)House::IsCurrentPlayer(v7) /*0x5d6922*/
         || wcscmp((const wchar_t *)v22 + 45077, *(const wchar_t **)(MEMORY[0xA8DA78] + 4 * v8)) )
    {
      if ( ++v8 >= MEMORY[0xA8DA84] ) /*0x5d692c*/
        goto LABEL_13; /*0x5d692c*/
      v7 = v22; /*0x5d68f7*/
    }
    if ( *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v8) + 107) != -1 ) /*0x5d69a1*/
    {
LABEL_13:
      v9 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, *(_DWORD *)(a3 + 16) - 1); /*0x5d692e*/
      Debug::Log(); /*0x5d695f*/
      *(_BYTE *)(v9 + a4) = 1; /*0x5d696a*/
      *((_DWORD *)MEMORY[0xA8B230] + v9 + 1120) = a2; /*0x5d6977*/
      *a1 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v9); /*0x5d6984*/
      return a1; /*0x5d698c*/
    }
    v11 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, *(_DWORD *)(a3 + 16) - 1); /*0x5d69bd*/
    *(_BYTE *)(v11 + a4) = 1; /*0x5d69c1*/
    *((_DWORD *)MEMORY[0xA8B230] + v11 + 1120) = a2; /*0x5d69ca*/
    MEMORY[0xABFDD4] = 1; /*0x5d69d1*/
    goto LABEL_38; /*0x5d69ed*/
  }
  if ( MEMORY[0xABFDD4] && !MEMORY[0xABFDD5] ) /*0x5d6a02*/
  {
    MEMORY[0xABFDD5] = 1; /*0x5d6a07*/
    *((_DWORD *)MEMORY[0xA8B230] + v4 + 1120) = a2; /*0x5d6a0e*/
    *a1 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v4); /*0x5d6a1e*/
    return a1; /*0x5d6a26*/
  }
  v12 = *(#375 **)&HouseClass_Array->__pad_0[4 * a2]; /*0x5d6a31*/
  v23 = v12; /*0x5d6a36*/
  if ( !v12 ) /*0x5d6a3a*/
    goto LABEL_26; /*0x5d6a3a*/
  v13 = 0; /*0x5d6a41*/
  if ( MEMORY[0xA8DA84] <= 0 ) /*0x5d6a45*/
    goto LABEL_26; /*0x5d6a45*/
  while ( !(unsigned __int8)House::IsCurrentPlayer(v12) /*0x5d6a75*/
       || wcscmp((const wchar_t *)v23 + 45077, *(const wchar_t **)(MEMORY[0xA8DA78] + 4 * v13)) )
  {
    if ( ++v13 >= MEMORY[0xA8DA84] ) /*0x5d6a83*/
      goto LABEL_26; /*0x5d6a83*/
    v12 = v23; /*0x5d6a49*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v13) + 107) != -1 ) /*0x5d6b98*/
  {
LABEL_26:
    v14 = *(_DWORD *)(a3 + 16); /*0x5d6a85*/
    v11 = -1; /*0x5d6a88*/
    v15 = 0; /*0x5d6a8b*/
    v25 = -1; /*0x5d6a8d*/
    for ( i = -1; v15 < v14; ++v15 ) /*0x5d6a97*/
    {
      if ( !*(_BYTE *)(v15 + a4) ) /*0x5d6aa0*/
      {
        v16 = 0; /*0x5d6aaa*/
        v17 = 0; /*0x5d6aac*/
        v21 = 0; /*0x5d6ab0*/
        if ( v14 > 0 ) /*0x5d6ab4*/
        {
          do /*0x5d6b18*/
          {
            if ( *(_BYTE *)(v17 + a4) ) /*0x5d6ab9*/
            {
              v18 = *(_DWORD *)(a3 + 4); /*0x5d6abf*/
              v19 = (double)(__int16)(*(_WORD *)(v18 + 4 * v15) - *(_WORD *)(v18 + 4 * v17)); /*0x5d6ae1*/
              v26 = (__int16)(*(_WORD *)(v18 + 4 * v15 + 2) - *(_WORD *)(v18 + 4 * v17 + 2)); /*0x5d6ae5*/
              v20 = Math::Sqrt((double)v26 * (double)v26 + v19 * v19); /*0x5d6afe*/
              v21 += (__int16)Math::RoundToInt(v20); /*0x5d6b0e*/
            }
            ++v17; /*0x5d6b15*/
          }
          while ( v17 < *(_DWORD *)(a3 + 16) ); /*0x5d6b18*/
          v16 = v21; /*0x5d6b1a*/
        }
        if ( v16 > v25 ) /*0x5d6b22*/
        {
          v25 = v16; /*0x5d6b24*/
          i = v15; /*0x5d6b28*/
        }
        v11 = i; /*0x5d6b2c*/
      }
      v14 = *(_DWORD *)(a3 + 16); /*0x5d6b30*/
    }
    *(_BYTE *)(v11 + a4) = 1; /*0x5d6b42*/
    *((_DWORD *)MEMORY[0xA8B230] + v11 + 1120) = a2; /*0x5d6b4c*/
LABEL_38:
    Debug::Log(); /*0x5d6b6a*/
    *a1 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v11); /*0x5d6b7b*/
    return a1; /*0x5d6b83*/
  }
  MEMORY[0xABFDD5] = 1; /*0x5d6ba0*/
  MEMORY[0xABFDD4] = 1; /*0x5d6ba5*/
  Debug::Log(); /*0x5d6bc0*/
  *a1 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v4); /*0x5d6bd3*/
  return a1; /*0x5d6986*/
}


// ==== 0x005D6BE0  MultiplayerGameMode::AssignStartPositions  this=MultiplayerGameMode  sig=csp ====
char __stdcall ScenarioClass_AssignStartPositions(char a1)
{
  int i; // edi
  _DWORD *v2; // ecx
  int v3; // esi
  void **v5; // [esp+4h] [ebp-18h] BYREF
  void *Block; // [esp+8h] [ebp-14h]
  char v7; // [esp+11h] [ebp-Bh]

  Multiplayer::FindStartPositions(&v5); /*0x5d6bec*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5d6bfa*/
  {
    v2 = (_DWORD *)*((_DWORD *)HouseClass_Array + i); /*0x5d6c02*/
    if ( !*(_BYTE *)(v2[13] + 422) ) /*0x5d6c08*/
    {
      v3 = v2[22550]; /*0x5d6c12*/
      if ( v3 != -2 ) /*0x5d6c1b*/
      {
        HouseClass::SetMapSeed(v2, *((_DWORD *)Block + v3)); /*0x5d6c25*/
        *((_DWORD *)MEMORY[0xA8B230] + v3 + 1120) = i; /*0x5d6c2f*/
      }
    }
  }
  v5 = &vt_VectorClass_Cell; /*0x5d6c45*/
  if ( Block && v7 ) /*0x5d6c58*/
    __3_YAXPAX_Z(Block); /*0x5d6c5b*/
  return 1; /*0x5d6c4f*/
}


// ==== 0x005D6C70  MultiplayerGameMode::AssignStartingPoints  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass_AssignStartingPoints(void *this, char a2)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int i; // esi
  _DWORD *v5; // edi
  char v6; // bl
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // ecx
  int v11; // [esp-14h] [ebp-40h]
  _BYTE v13[16]; // [esp+4h] [ebp-28h] BYREF
  void **v14; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  char v16; // [esp+21h] [ebp-Bh]

  Multiplayer::FindStartPositions(&v14); /*0x5d6c7f*/
  v2 = 0; /*0x5d6c8a*/
  v3 = (char *)MEMORY[0xA8B230] + 4480; /*0x5d6c8c*/
  do /*0x5d6caa*/
    v13[v2++] = *v3++ != -1; /*0x5d6c97*/
  while ( v2 < 16 ); /*0x5d6caa*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5d6cb6*/
  {
    v5 = (_DWORD *)*((_DWORD *)HouseClass_Array + i); /*0x5d6cc5*/
    if ( !*(_BYTE *)(v5[13] + 422) ) /*0x5d6ccb*/
    {
      v6 = 0; /*0x5d6cdb*/
      v7 = -1; /*0x5d6cdd*/
      v8 = 0; /*0x5d6ce0*/
      v9 = (char *)MEMORY[0xA8B230] + 4480; /*0x5d6ce2*/
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
        v11 = *(_DWORD *)(*(int (__thiscall **)(void *, char *, int, void ***, _BYTE *))(*(_DWORD *)this + 196))( /*0x5d6d2d*/
                           this,
                           &a2,
                           i,
                           &v14,
                           v13);
        HouseClass::SetMapSeed(v5, v11); /*0x5d6d2e*/
      }
    }
  }
  v14 = &vt_VectorClass_Cell; /*0x5d6d54*/
  if ( Block && v16 ) /*0x5d6d67*/
    __3_YAXPAX_Z(Block); /*0x5d6d6a*/
  return 1; /*0x5d6d74*/
}


// ==== 0x005D6D80  ObjectClass::ComputeMultiEngineerAdjustment  this=SkirmishDialog  sig=csp ====
char __thiscall ComputeMultiEngineerAdjustment(int *this)
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
  int v18; // edx
  int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h]
  int *v22; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x5d6d8a*/
  v22 = this; /*0x5d6d90*/
  if ( MEMORY[0xA8B270] > 0 ) /*0x5d6d94*/
  {
    v2 = HouseClass_Count; /*0x5d6d9a*/
    v20 = 0; /*0x5d6da0*/
    if ( HouseClass_Count > 0 ) /*0x5d6da6*/
    {
      v3 = HouseClass_Array; /*0x5d6da8*/
      do /*0x5d6dd9*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v3->__pad_0 + 52) + 422) ) /*0x5d6db5*/
          v20 |= 1 << *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3->__pad_0 + 52) + 180); /*0x5d6dd1*/
        v3 = (HouseClass *)((char *)v3 + 4); /*0x5d6dd5*/
        --v2; /*0x5d6dd8*/
      }
      while ( v2 ); /*0x5d6dd9*/
    }
    v4 = 0; /*0x5d6de1*/
    v5 = 0; /*0x5d6de3*/
    v6 = 0; /*0x5d6de5*/
    v21 = 0; /*0x5d6de9*/
    if ( g_CrateCount > 0 ) /*0x5d6ded*/
    {
      v7 = MEMORY[0x8871E0]; /*0x5d6def*/
      do /*0x5d6e66*/
      {
        v8 = *((_DWORD *)g_UnitTypeCount2 + v6); /*0x5d6dfb*/
        if ( *(_BYTE *)(v8 + 1749) && (*(_DWORD *)(v8 + 1740) & v20) != 0 && *(_DWORD *)(v8 + 1588) <= g_RulesInitConfig ) /*0x5d6e24*/
        {
          v9 = v7->AutocreateTime[1]; /*0x5d6e26*/
          v10 = 0; /*0x5d6e2c*/
          if ( v9 <= 0 ) /*0x5d6e30*/
          {
LABEL_16:
            ++v5; /*0x5d6e44*/
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 172))(v8); /*0x5d6e47*/
            v7 = MEMORY[0x8871E0]; /*0x5d6e4d*/
            v4 += v12; /*0x5d6e53*/
          }
          else
          {
            v11 = (_DWORD *)v7->SovietSurvivorDivisor[2]; /*0x5d6e32*/
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
      while ( v21 < g_CrateCount ); /*0x5d6e66*/
    }
    for ( i = 0; i < MEMORY[0xA8E358]; ++i ) /*0x5d6e71*/
    {
      v14 = *((_DWORD *)MEMORY[0xA8E34C] + i); /*0x5d6e79*/
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
    v1 = MEMORY[0xA8B270] * ((v4 + v5 / 2) / v5); /*0x5d6ecf*/
  }
  v15 = 0; /*0x5d6edb*/
  if ( HouseClass_Count <= 0 ) /*0x5d6edf*/
  {
LABEL_42:
    Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 0xFFFF); /*0x5d6feb*/
    Debug::Log(); /*0x5d7009*/
    return 1; /*0x5d701a*/
  }
  while ( 1 ) /*0x5d6eea*/
  {
    v16 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v15]; /*0x5d6eea*/
    if ( *(_BYTE *)(*(_DWORD *)(v16 + 52) + 422) ) /*0x5d6ef0*/
      goto LABEL_41; /*0x5d6ef0*/
    if ( v16 ) /*0x5d6f00*/
    {
      v17 = 0; /*0x5d6f07*/
      if ( MEMORY[0xA8DA84] > 0 ) /*0x5d6f0b*/
      {
        while ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)v16) /*0x5d6f33*/
             || wcscmp((const wchar_t *)(v16 + 90154), *(const wchar_t **)(MEMORY[0xA8DA78] + 4 * v17)) )
        {
          if ( ++v17 >= MEMORY[0xA8DA84] ) /*0x5d6f3d*/
            goto LABEL_36; /*0x5d6f3d*/
        }
        if ( *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v17) + 107) == -1 ) /*0x5d6f53*/
          goto LABEL_41; /*0x5d6f53*/
      }
    }
LABEL_36:
    v18 = *v22; /*0x5d6f63*/
    v20 = v1; /*0x5d6f65*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int, int *))(v18 + 200))(v22, v16, &v20) /*0x5d6f83*/
      || !(*(unsigned __int8 (__thiscall **)(int *, int, int *))(*v22 + 204))(v22, v16, &v20) )
    {
      return 0; /*0x5d7013*/
    }
    if ( v20 > 0 ) /*0x5d6f97*/
      HouseClass::AddPower((_DWORD *)v16, v20); /*0x5d6f9c*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21920) + 12))(v16 + 21920); /*0x5d6fad*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21980) + 12))(v16 + 21980); /*0x5d6fbc*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21960) + 12))(v16 + 21960); /*0x5d6fcb*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(v16 + 21940) + 12))(v16 + 21940); /*0x5d6fda*/
LABEL_41:
    if ( ++v15 >= HouseClass_Count ) /*0x5d6fe5*/
      goto LABEL_42; /*0x5d6fe5*/
  }
}


// ==== 0x005D70F0  MultiplayerGameMode::AIDecision  this=MultiplayerGameMode  sig=csp ====
char __stdcall HouseClass::AIDecision(ObjectClass *aP0, int *a1)
{
  int v2; // ebp
  int v3; // edx
  _DWORD *attachedTag; // eax
  int v5; // ebx
  CCINIClass *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edi
  CCINIClass *v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v18; // ebp
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // edx
  int v22; // esi
  IUnknown *v23; // eax
  ObjectClass *v24; // edi
  ObjectClass *CurrentOption; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h] BYREF
  void **v30; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  CCINIClass *v32; // [esp+20h] [ebp-28h]
  CCINIClass *v33; // [esp+24h] [ebp-24h]
  int v34; // [esp+28h] [ebp-20h]
  int v35; // [esp+2Ch] [ebp-1Ch]
  void **v36; // [esp+30h] [ebp-18h] BYREF
  void *v37; // [esp+34h] [ebp-14h]
  AbstractClass *v38; // [esp+38h] [ebp-10h]
  char v39; // [esp+3Dh] [ebp-Bh]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v2 = 0; /*0x5d70fb*/
  if ( *a1 <= 0 ) /*0x5d7101*/
    return 1; /*0x5d7492*/
  v28 = *a1; /*0x5d710d*/
  UnitTypeVector::Construct2(&v36, 0, 0); /*0x5d7111*/
  v36 = &vt_DynamicVectorClass_UnitTypeClass; /*0x5d711c*/
  v41 = 10; /*0x5d7124*/
  v40 = 0; /*0x5d712c*/
  InfantryTypeVector::ConstructFromData(&v30, 0, 0); /*0x5d7130*/
  v3 = 10; /*0x5d7139*/
  v30 = &vt_DynamicVectorClass_InfantryTypeClass; /*0x5d713e*/
  v35 = 10; /*0x5d7146*/
  attachedTag = aP0->attachedTag; /*0x5d714a*/
  v34 = 0; /*0x5d714d*/
  v5 = 1 << attachedTag[45]; /*0x5d7161*/
  if ( (int)g_CrateCount <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = (CCINIClass *)v38; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * v2]; /*0x5d7175*/
    if ( *(_BYTE *)(v7 + 1749) && (v5 & *(_DWORD *)(v7 + 1740)) != 0 && *(_DWORD *)(v7 + 1588) <= aP0[2].visibilityFlags ) /*0x5d719e*/
    {
      v8 = 0; /*0x5d71a6*/
      v9 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2864); /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
LABEL_11:
        if ( v40 < (int)v6 ) /*0x5d71c8*/
          goto LABEL_16; /*0x5d71c8*/
        if ( (v39 || !v6) && v41 > 0 ) /*0x5d71dc*/
        {
          if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v36[2])(&v36, &v6->__pad_0[v41], 0) ) /*0x5d71eb*/
          {
LABEL_16:
            v11 = v40++; /*0x5d71f2*/
            *((_DWORD *)v37 + v11) = v7; /*0x5d7201*/
          }
          v6 = (CCINIClass *)v38; /*0x5d7204*/
        }
      }
      else
      {
        v10 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2852); /*0x5d71b2*/
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
  while ( v2 < (int)g_CrateCount ); /*0x5d7210*/
  v3 = v35; /*0x5d7216*/
LABEL_20:
  v12 = 0; /*0x5d721a*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20644] > 0 ) /*0x5d7223*/
  {
    v13 = v32; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * v12); /*0x5d7239*/
      if ( *(_BYTE *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(_DWORD *)(v14 + 1740)) != 0
        && *(_DWORD *)(v14 + 1588) <= aP0[2].visibilityFlags )
      {
        if ( v34 < (int)v13 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( (BYTE1(v33) || !v13) && v3 > 0 ) /*0x5d7274*/
          break; /*0x5d7274*/
      }
LABEL_33:
      if ( ++v12 >= *(int *)&HouseClass_Player.__pad_5568[20644] ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
      v3 = v35; /*0x5d722f*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v30[2])(&v30, &v13->__pad_0[v3], 0) ) /*0x5d7283*/
    {
LABEL_31:
      v15 = v34++; /*0x5d728a*/
      *((_DWORD *)Block + v15) = v14; /*0x5d7299*/
    }
    v13 = v32; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
LABEL_34:
  v16 = v40; /*0x5d72ab*/
  if ( v40 || v34 ) /*0x5d72b9*/
  {
    v18 = 20; /*0x5d731a*/
    v19 = *a1; /*0x5d731f*/
    if ( *a1 > 0 ) /*0x5d7323*/
    {
      while ( v18 > 0 ) /*0x5d7331*/
      {
        if ( v19 > v28 / 3 && v16 ) /*0x5d734d*/
        {
          v20 = Random::Range( /*0x5d735f*/
                  (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                  0,
                  (IUnknown *)(v16 - 1));
          v21 = v37; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range( /*0x5d737e*/
                  (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                  0,
                  (IUnknown *)(v34 - 1));
          v21 = Block; /*0x5d7383*/
        }
        v22 = v21[v20]; /*0x5d7387*/
        v23 = (IUnknown *)(*(int (__thiscall **)(int, ObjectClass *))(*(_DWORD *)v22 + 140))(v22, aP0); /*0x5d7393*/
        v24 = (ObjectClass *)__RTDynamicCast( /*0x5d73b4*/
                               v23,
                               0,
                               &ObjectClass `RTTI Type Descriptor',
                               &TechnoClass `RTTI Type Descriptor',
                               0);
        CurrentOption = HouseClass::GetCurrentOption(aP0, (IUnknown *)&v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition((int *)v24->__pad_0, (RadarClass *)CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a1; /*0x5d73eb*/
          *a1 -= v27; /*0x5d73f3*/
          if ( (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag(&v24[1].location[2], 1); /*0x5d740a*/
          if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)aP0) ) /*0x5d7411*/
            (*(void (__thiscall **)(ObjectClass *, int))(*(_DWORD *)v24->__pad_0 + 496))(v24, 5); /*0x5d7420*/
          else
            (*(void (__thiscall **)(ObjectClass *, int))(*(_DWORD *)v24->__pad_0 + 496))(v24, 11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            (*(void (__thiscall **)(ObjectClass *, int))(*(_DWORD *)v24->__pad_0 + 32))(v24, 1); /*0x5d73d7*/
          v26 = a1; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v40; /*0x5d732b*/
      }
    }
    v30 = &vt_VectorClass_InfantryTypeClass; /*0x5d7446*/
    if ( Block && BYTE1(v33) ) /*0x5d7456*/
    {
      __3_YAXPAX_Z(Block); /*0x5d7459*/
      Block = 0; /*0x5d7461*/
    }
    BYTE1(v33) = 0; /*0x5d7469*/
    v32 = 0; /*0x5d7470*/
    v36 = &vt_VectorClass_UnitTypeClass; /*0x5d7474*/
    if ( v37 && v39 ) /*0x5d7484*/
      __3_YAXPAX_Z(v37); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
  v30 = &vt_VectorClass_InfantryTypeClass; /*0x5d72bf*/
  if ( Block && BYTE1(v33) ) /*0x5d72d1*/
  {
    __3_YAXPAX_Z(Block); /*0x5d72d4*/
    Block = 0; /*0x5d72dc*/
  }
  BYTE1(v33) = 0; /*0x5d72e4*/
  v32 = 0; /*0x5d72eb*/
  v36 = &vt_VectorClass_UnitTypeClass; /*0x5d72ef*/
  if ( v37 ) /*0x5d72f7*/
  {
    if ( v39 ) /*0x5d72ff*/
      __3_YAXPAX_Z(v37); /*0x5d7302*/
  }
  return 0; /*0x5d730a*/
}


// ==== 0x005D74A0  MultiplayerGameMode::InitAlliances  this=MultiplayerGameMode  sig=csp ====
char HouseClass_InitAlliances()
{
  int v0; // edx
  _DWORD *v1; // eax
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v8; // [esp+0h] [ebp-4h]

  v0 = HouseClass_Count; /*0x5d74a1*/
  if ( HouseClass_Count <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  v1 = HouseClass_Array; /*0x5d74af*/
  v2 = 1; /*0x5d74b8*/
  v3 = 0; /*0x5d74bd*/
  v8 = 1; /*0x5d74bf*/
  do /*0x5d7540*/
  {
    v4 = v1[v3]; /*0x5d74c3*/
    if ( !*(_BYTE *)(*(_DWORD *)(v4 + 52) + 422) ) /*0x5d74c9*/
    {
      v5 = *(_DWORD *)(v4 + 90204); /*0x5d74d4*/
      if ( v5 != -2 && v5 != -1 && v2 < v0 ) /*0x5d74e6*/
      {
        do /*0x5d752d*/
        {
          v6 = v1[v2]; /*0x5d74e8*/
          if ( !*(_BYTE *)(*(_DWORD *)(v6 + 52) + 422) && *(_DWORD *)(v1[v3] + 90204) == *(_DWORD *)(v6 + 90204) ) /*0x5d7509*/
          {
            HouseClass::HandleAlliance(v4, v6, 0); /*0x5d7510*/
            HouseClass::HandleAlliance(v6, v4, 0); /*0x5d751a*/
            v1 = HouseClass_Array; /*0x5d751f*/
          }
          v0 = HouseClass_Count; /*0x5d7524*/
          ++v2; /*0x5d752a*/
        }
        while ( v2 < HouseClass_Count ); /*0x5d752d*/
        v2 = v8; /*0x5d752f*/
      }
    }
    ++v2; /*0x5d7533*/
    ++v3; /*0x5d7534*/
    v8 = v2; /*0x5d7537*/
  }
  while ( v2 - 1 < v0 ); /*0x5d7540*/
  return 1; /*0x5d7549*/
}


// ==== 0x005D7550  sub_5D7550  this=unknown  sig=csp ====
int __stdcall sub_5D7550(int a1)
{
  return *(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * a1] + 90204); /*0x5d7563*/
}


// ==== 0x005D7570  MultiplayerGameMode::processAI  this=MultiplayerGameMode  sig=csp ====
char __thiscall ScenarioClass::processAI(std::codecvt_base *this)
{
  return 1; /*0x5d7572*/
}


// ==== 0x005D7580  ObjectClass::method_5D7580  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall sub_5D7580(InitializerBase_MultiplayerGameMode *this)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d7582*/
  return &this->vfptr; /*0x5d7588*/
}


// ==== 0x005D7590  LoadMultiplayerModesList  this=unknown  sig=csp ====
int __fastcall LoadMultiplayerModesList(AbstractClass *a1, int edx0)
{
  AbstractClass *v2; // esi
  int v3; // eax
  int v4; // edi
  signed int String; // esi
  int v6; // esi
  char *v7; // eax
  wchar_t *StringCSF; // eax
  int v9; // esi
  char *v10; // eax
  wchar_t *v11; // eax
  ObjectClass *v12; // esi
  ObjectClass *v13; // esi
  char *v14; // eax
  int v15; // esi
  char v16; // al
  int v17; // esi
  ObjectClass *v19; // [esp+20h] [ebp-114h] BYREF
  ObjectClass aP3; // [esp+24h] [ebp-110h] BYREF
  _DWORD v21[5]; // [esp+120h] [ebp-14h] BYREF

  v2 = a1; /*0x5d7598*/
  aP3.customSound_controller[4] = edx0; /*0x5d759a*/
  aP3.customSound_controller[2] = (int)a1; /*0x5d75aa*/
  CCFileClass::Construct(&aP3.location[2], &stru_830620.__pad_3BC[60]); /*0x5d75ae*/
  if ( CCFileClass::Open(&aP3.location[2], 0) ) /*0x5d75bd*/
  {
    *(_DWORD *)&aP3.bombVisible = 0; /*0x5d75ce*/
    aP3.health = 0; /*0x5d75d2*/
    GenericList::Constructor(&aP3.estimatedHealth); /*0x5d75d6*/
    aP3.estimatedHealth = (int)&vt_List_INIClass_INISection; /*0x5d75e8*/
    memset(&aP3.onBridge, 0, 13); /*0x5d75f3*/
    aP3.location[0] = 0; /*0x5d760f*/
    aP3.location[1] = 0; /*0x5d7616*/
    aP3.customSound = (int)&vt_INIClass; /*0x5d761d*/
    if ( FileStraw::Open(&aP3.customSound, (int)&aP3.location[2], 0) > 0 ) /*0x5d762c*/
    {
      aP3.customSound_controller[3] = INIClass::FindKey((char *)&aP3.customSound, v2); /*0x5d763e*/
      aP3.objectTypeFlags = 0; /*0x5d7642*/
      if ( aP3.customSound_controller[3] > 0 ) /*0x5d7646*/
      {
        while ( 1 ) /*0x5d766b*/
        {
          INIClass::GetStringByIndexEx( /*0x5d766b*/
            &aP3.customSound,
            (ObjectClass *)&aP3.__pad_0[12],
            (ObjectClass *)v2,
            (ObjectClass *)aP3.objectTypeFlags);
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP3.__pad_0[12]); /*0x5d7674*/
          v4 = v3; /*0x5d767d*/
          unknown_libname_73(&v19); /*0x5d767f*/
          String::Assign((char **)&aP3.attachedTag, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x5d768d*/
          String = INIClass::ReadString( /*0x5d76b2*/
                     (ObjectClass *)&aP3.customSound,
                     (ObjectClass *)v2,
                     (ObjectClass *)&aP3.__pad_0[12],
                     (ReferenceCounted *)&aP3.attachedTag,
                     (int)&v19);
          DeleteAndZero(&aP3.attachedTag); /*0x5d76b4*/
          if ( String <= 0 ) /*0x5d76bb*/
            goto LABEL_49; /*0x5d76bb*/
          unknown_libname_73(&aP3); /*0x5d76c5*/
          v6 = String::Tokenize((const char **)&v19, 0, &MEMORY[0x817F70], &aP3); /*0x5d76e2*/
          if ( String::Length((const char **)&aP3) ) /*0x5d76e4*/
            break; /*0x5d76e4*/
LABEL_48:
          DeleteAndZero((void **)&aP3); /*0x5d7c50*/
LABEL_49:
          DeleteAndZero((void **)&v19); /*0x5d7c59*/
          DeleteAndZero((void **)&aP3.__pad_0[12]); /*0x5d7c66*/
          if ( ++aP3.objectTypeFlags >= aP3.customSound_controller[3] ) /*0x5d7c7a*/
            goto LABEL_50; /*0x5d7c7a*/
          v2 = (AbstractClass *)aP3.customSound_controller[2]; /*0x5d7655*/
        }
        String::Assign((char **)aP3.customSound_controller, &stru_830620.__pad_3BC[56]); /*0x5d76fa*/
        String::TrimLeft((const char **)&aP3, (ObjectClass *)aP3.customSound_controller); /*0x5d7708*/
        DeleteAndZero((void **)aP3.customSound_controller); /*0x5d7711*/
        String::Assign((char **)&aP3.owningHouseIndex, &stru_830620.__pad_3BC[56]); /*0x5d771f*/
        String::TrimRight((const char **)&aP3, (ObjectClass *)&aP3.owningHouseIndex); /*0x5d772d*/
        DeleteAndZero((void **)&aP3.owningHouseIndex); /*0x5d7736*/
        v7 = String::GetOrEmpty((char **)&aP3); /*0x5d7749*/
        StringCSF = GetStringCSF((wchar_t *)v7, 0, &stru_830620.__pad_3BC[24], 1030); /*0x5d7752*/
        WideString::Assign((wchar_t **)&aP3.nextArrayIndex, (CampaignScore *)StringCSF); /*0x5d775c*/
        unknown_libname_73(&aP3.__pad_0[8]); /*0x5d7765*/
        v9 = String::Tokenize((const char **)&v19, v6, &MEMORY[0x817F70], (ObjectClass *)&aP3.__pad_0[8]); /*0x5d7782*/
        if ( !String::Length((const char **)&aP3.__pad_0[8]) ) /*0x5d778b*/
        {
LABEL_47:
          DeleteAndZero((void **)&aP3.__pad_0[8]); /*0x5d7c3e*/
          DeleteAndZero::Alt((void **)&aP3.nextArrayIndex); /*0x5d7c4b*/
          goto LABEL_48; /*0x5d7c4b*/
        }
        String::Assign((char **)&aP3.ambientSoundController[3], &stru_830620.__pad_3BC[56]); /*0x5d779a*/
        String::TrimLeft((const char **)&aP3.__pad_0[8], (ObjectClass *)&aP3.ambientSoundController[3]); /*0x5d77a8*/
        DeleteAndZero((void **)&aP3.ambientSoundController[3]); /*0x5d77b1*/
        String::Assign((char **)aP3.ambientSoundController, &stru_830620.__pad_3BC[56]); /*0x5d77bf*/
        String::TrimRight((const char **)&aP3.__pad_0[8], (ObjectClass *)aP3.ambientSoundController); /*0x5d77cd*/
        DeleteAndZero((void **)aP3.ambientSoundController); /*0x5d77d6*/
        v10 = String::GetOrEmpty((char **)&aP3.__pad_0[8]); /*0x5d77e9*/
        v11 = GetStringCSF((wchar_t *)v10, 0, &stru_830620.__pad_3BC[24], 1041); /*0x5d77f2*/
        WideString::Assign((wchar_t **)&aP3.referenceCount, (CampaignScore *)v11); /*0x5d77fc*/
        unknown_libname_73(&aP3.__pad_0[4]); /*0x5d7805*/
        v12 = (ObjectClass *)String::Tokenize( /*0x5d7822*/
                               (const char **)&v19,
                               v9,
                               &MEMORY[0x817F70],
                               (ObjectClass *)&aP3.__pad_0[4]);
        if ( !String::Length((const char **)&aP3.__pad_0[4]) ) /*0x5d782b*/
        {
LABEL_46:
          DeleteAndZero((void **)&aP3.__pad_0[4]); /*0x5d7c2c*/
          DeleteAndZero::Alt((void **)&aP3.referenceCount); /*0x5d7c39*/
          goto LABEL_47; /*0x5d7c39*/
        }
        String::Assign((char **)&aP3.ambientSoundController[4], &stru_830620.__pad_3BC[56]); /*0x5d783a*/
        String::TrimLeft((const char **)&aP3.__pad_0[4], (ObjectClass *)&aP3.ambientSoundController[4]); /*0x5d7848*/
        DeleteAndZero((void **)&aP3.ambientSoundController[4]); /*0x5d7851*/
        String::Assign((char **)&aP3.ambientSoundController[2], &stru_830620.__pad_3BC[56]); /*0x5d785f*/
        String::TrimRight((const char **)&aP3.__pad_0[4], (ObjectClass *)&aP3.ambientSoundController[2]); /*0x5d786d*/
        DeleteAndZero((void **)&aP3.ambientSoundController[2]); /*0x5d7876*/
        unknown_libname_73(&aP3.abstractFlags); /*0x5d787f*/
        v13 = (ObjectClass *)String::Tokenize( /*0x5d789c*/
                               (const char **)&v19,
                               (int)v12,
                               &MEMORY[0x817F70],
                               (ObjectClass *)&aP3.abstractFlags);
        String::Assign((char **)&aP3.customSound_controller[1], &stru_830620.__pad_3BC[56]); /*0x5d78a3*/
        String::TrimLeft((const char **)&aP3.abstractFlags, (ObjectClass *)&aP3.customSound_controller[1]); /*0x5d78b1*/
        DeleteAndZero((void **)&aP3.customSound_controller[1]); /*0x5d78ba*/
        String::Assign((char **)&aP3.fallRate, &stru_830620.__pad_3BC[56]); /*0x5d78c8*/
        String::TrimRight((const char **)&aP3.abstractFlags, (ObjectClass *)&aP3.fallRate); /*0x5d78d6*/
        DeleteAndZero((void **)&aP3.fallRate); /*0x5d78df*/
        unknown_libname_73(&aP3.uniqueId); /*0x5d78e8*/
        String::Tokenize((const char **)&v19, (int)v13, &MEMORY[0x817F70], (ObjectClass *)&aP3.uniqueId); /*0x5d78fc*/
        String::Assign((char **)&aP3.nextObject, &stru_830620.__pad_3BC[56]); /*0x5d790a*/
        String::TrimLeft((const char **)&aP3.uniqueId, (ObjectClass *)&aP3.nextObject); /*0x5d7918*/
        DeleteAndZero(&aP3.nextObject); /*0x5d7921*/
        String::Assign((char **)&aP3.attachedBomb, &stru_830620.__pad_3BC[56]); /*0x5d792f*/
        String::TrimRight((const char **)&aP3.uniqueId, (ObjectClass *)&aP3.attachedBomb); /*0x5d793d*/
        DeleteAndZero(&aP3.attachedBomb); /*0x5d7946*/
        LOBYTE(aP3.ambientSoundController[1]) = 1; /*0x5d794f*/
        if ( String::Length((const char **)&aP3.uniqueId) ) /*0x5d7954*/
        {
          v14 = String::GetOrEmpty((char **)&aP3.uniqueId); /*0x5d7966*/
          LOBYTE(aP3.ambientSoundController[1]) = _strcmpi(v14, g_Str_false) != 0; /*0x5d7979*/
        }
        if ( WideString::Length((const wchar_t **)&aP3.nextArrayIndex) /*0x5d79a3*/
          && String::Length((const char **)&aP3.__pad_0[4])
          && String::Length((const char **)&aP3.abstractFlags) )
        {
          v15 = 0; /*0x5d79d3*/
          aP3.NeedsSaveOrLink = (void *)(*(int (__thiscall **)(int, int *, int *, char *, int *, int, int))(*(_DWORD *)aP3.customSound_controller[4] + 4))( /*0x5d79d5*/
                                          aP3.customSound_controller[4],
                                          &aP3.nextArrayIndex,
                                          &aP3.referenceCount,
                                          &aP3.__pad_0[4],
                                          &aP3.abstractFlags,
                                          aP3.ambientSoundController[1],
                                          v4);
          v16 = (char)(&g_MatrixTransformState)[82]; /*0x5d79d9*/
          while ( 1 ) /*0x5d79de*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d79e0*/
            {
              LOBYTE((&g_MatrixTransformState)[82]) = v16 | 1; /*0x5d79eb*/
              MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MatrixTransformState + 996, 0, 0); /*0x5d79f0*/
              *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7a05*/
              *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d7a0b*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a11*/
              v16 = (char)(&g_MatrixTransformState)[82]; /*0x5d7a16*/
            }
            if ( v15 >= (int)*(&g_MatrixTransformState + 1000) ) /*0x5d7a2b*/
              break; /*0x5d7a2b*/
            if ( (v16 & 1) == 0 ) /*0x5d7a2f*/
            {
              LOBYTE((&g_MatrixTransformState)[82]) = v16 | 1; /*0x5d7a38*/
              *(_QWORD *)(&(&g_MatrixTransformState)[83] + 1) = 0; /*0x5d7a3d*/
              *((_WORD *)&g_MatrixTransformState + 1998) = 1; /*0x5d7a49*/
              *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7a56*/
              *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d7a62*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a68*/
              v16 = (char)(&g_MatrixTransformState)[82]; /*0x5d7a6d*/
            }
            if ( *(_DWORD *)(*(&(*(&g_MatrixTransformState + 997))->X + v15) + 40) > *((_DWORD *)aP3.NeedsSaveOrLink + 10) ) /*0x5d7a88*/
              break; /*0x5d7a88*/
            ++v15; /*0x5d7a8a*/
          }
          if ( v15 ) /*0x5d7a92*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d7b56*/
            {
              LOBYTE((&g_MatrixTransformState)[82]) = v16 | 1; /*0x5d7b5f*/
              *(_QWORD *)(&(&g_MatrixTransformState)[83] + 1) = 0; /*0x5d7b64*/
              *((_WORD *)&g_MatrixTransformState + 1998) = 1; /*0x5d7b70*/
              *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7b7d*/
              *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d7b89*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7b8f*/
            }
            v17 = v15 - 1; /*0x5d7ba2*/
            if ( (int)*(&g_MatrixTransformState + 1000) >= (int)*(&g_MatrixTransformState + 998) /*0x5d7bcc*/
              && (!*((_BYTE *)&g_MatrixTransformState + 3997) && *(&g_MatrixTransformState + 998)
               || (int)*(&g_MatrixTransformState + 1001) <= 0
               || !((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 996))->Z)(
                     &(&g_MatrixTransformState)[83],
                     (char *)*(&g_MatrixTransformState + 1001) + (_DWORD)*(&g_MatrixTransformState + 998),
                     0)) )
            {
              goto LABEL_45; /*0x5d7bd1*/
            }
            if ( v17 < (int)&(*(&g_MatrixTransformState + 1000))[-1].Z + 3 ) /*0x5d7bde*/
              memcpy( /*0x5d7bff*/
                &(*(&g_MatrixTransformState + 997))->Z + v17,
                &(*(&g_MatrixTransformState + 997))->Y + v17,
                4 * ((_DWORD)*(&g_MatrixTransformState + 1000) + 0x3FFFFFFF * v17 + 0x3FFFFFFF));
            *(&(*(&g_MatrixTransformState + 997))->Y + v17) = (int)aP3.NeedsSaveOrLink; /*0x5d7c10*/
          }
          else
          {
            if ( (v16 & 1) == 0 ) /*0x5d7a9a*/
            {
              LOBYTE((&g_MatrixTransformState)[82]) = v16 | 1; /*0x5d7aa3*/
              *(_QWORD *)(&(&g_MatrixTransformState)[83] + 1) = 0; /*0x5d7aa8*/
              *((_WORD *)&g_MatrixTransformState + 1998) = 1; /*0x5d7ab4*/
              *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7ac1*/
              *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d7acd*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7ad3*/
            }
            if ( (int)*(&g_MatrixTransformState + 1000) >= (int)*(&g_MatrixTransformState + 998) /*0x5d7b16*/
              && (!*((_BYTE *)&g_MatrixTransformState + 3997) && *(&g_MatrixTransformState + 998)
               || (int)*(&g_MatrixTransformState + 1001) <= 0
               || !((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 996))->Z)(
                     &(&g_MatrixTransformState)[83],
                     (char *)*(&g_MatrixTransformState + 1001) + (_DWORD)*(&g_MatrixTransformState + 998),
                     0)) )
            {
              goto LABEL_45; /*0x5d7b1b*/
            }
            if ( *(&g_MatrixTransformState + 1000) ) /*0x5d7b28*/
              memcpy( /*0x5d7b3c*/
                &(*(&g_MatrixTransformState + 997))->Y,
                *(&g_MatrixTransformState + 997),
                4 * (_DWORD)*(&g_MatrixTransformState + 1000));
            (*(&g_MatrixTransformState + 997))->X = (int)aP3.NeedsSaveOrLink; /*0x5d7b4d*/
          }
          *(&g_MatrixTransformState + 1000) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 1000) + 1); /*0x5d7c14*/
        }
LABEL_45:
        DeleteAndZero((void **)&aP3.uniqueId); /*0x5d7c1a*/
        DeleteAndZero((void **)&aP3.abstractFlags); /*0x5d7c27*/
        goto LABEL_46; /*0x5d7c27*/
      }
    }
LABEL_50:
    HashTable::DestroyHashTableINIClass((void **)&aP3.customSound); /*0x5d7c82*/
  }
  aP3.location[2] = (int)&vt_CCFileClass; /*0x5d7c92*/
  v21[3] = 0; /*0x5d7c9d*/
  Vector::Clear((int)v21); /*0x5d7ca4*/
  aP3.location[2] = (int)&off_7E1668; /*0x5d7cb0*/
  return BufferIOFileClass::Dtor(&aP3.location[2]); /*0x5d7cc0*/
}


// ==== 0x005D7CD0  InitializerBase@MultiplayerGameMode::method_5D7CD0  this=InitializerBase@MultiplayerGameMode  sig=csp ====
void __thiscall sub_5D7CD0(InitializerBase_MultiplayerGameMode *this)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d7cd0*/
}


// ==== 0x005D7CE0  ObjectClass::CompleteGameInit  this=ObjectClass  sig=csp ====
int GameInit_Complete()
{
  int i; // esi
  void (__thiscall ***v1)(_DWORD, int); // ecx
  _BYTE v3[4]; // [esp+8h] [ebp-1Ch] BYREF
  void **v4; // [esp+Ch] [ebp-18h] BYREF
  void **v5; // [esp+10h] [ebp-14h] BYREF
  void **v6; // [esp+14h] [ebp-10h] BYREF
  void **v7; // [esp+18h] [ebp-Ch] BYREF
  void **v8; // [esp+1Ch] [ebp-8h] BYREF
  void **v9; // [esp+20h] [ebp-4h] BYREF

  for ( i = 0; ; ++i ) /*0x5d7ce5*/
  {
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d7cf3*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d7cfd*/
      GameInit::InitMultiplayerModes(0, 0); /*0x5d7d08*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7d12*/
    }
    if ( i >= MEMORY[0xABFDB0] ) /*0x5d7d20*/
      break; /*0x5d7d20*/
    v1 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(System_Init() + 4) + 4 * i); /*0x5d7d2a*/
    if ( v1 ) /*0x5d7d32*/
      (**v1)(v1, 1); /*0x5d7d37*/
  }
  v4 = &MultiplayerGameMode::Initializer<MultiplayerBattle>::`vftable'; /*0x5d7d45*/
  String::Assign(aBattle); /*0x5d7d4d*/
  LoadMultiplayerModesList(v3, &v4); /*0x5d7d5a*/
  DeleteAndZero(v3); /*0x5d7d63*/
  v5 = &MultiplayerGameMode::Initializer<MultiplayerManBattle>::`vftable'; /*0x5d7d6c*/
  String::Assign(aManbattle); /*0x5d7d79*/
  LoadMultiplayerModesList(v3, &v5); /*0x5d7d86*/
  DeleteAndZero(v3); /*0x5d7d8f*/
  v6 = &MultiplayerGameMode::Initializer<MultiplayerSiege>::`vftable'; /*0x5d7d98*/
  String::Assign(aSiege); /*0x5d7da5*/
  LoadMultiplayerModesList(v3, &v6); /*0x5d7db2*/
  DeleteAndZero(v3); /*0x5d7dbb*/
  v7 = &MultiplayerGameMode::Initializer<UnholyAlliance>::`vftable'; /*0x5d7dc4*/
  String::Assign(aUnholy); /*0x5d7dd1*/
  LoadMultiplayerModesList(v3, &v7); /*0x5d7dde*/
  DeleteAndZero(v3); /*0x5d7de7*/
  v8 = &MultiplayerGameMode::Initializer<FreeForAll>::`vftable'; /*0x5d7df0*/
  String::Assign(aFreeforall); /*0x5d7dfd*/
  LoadMultiplayerModesList(v3, &v8); /*0x5d7e0a*/
  DeleteAndZero(v3); /*0x5d7e13*/
  v9 = &MultiplayerGameMode::Initializer<MPCooperative>::`vftable'; /*0x5d7e1c*/
  String::Assign(aCooperative); /*0x5d7e29*/
  LoadMultiplayerModesList(v3, &v9); /*0x5d7e36*/
  return DeleteAndZero(v3); /*0x5d7e44*/
}


// ==== 0x005D7E50  ObjectClass::WinMain_Helper_5D7E50  this=ObjectClass  sig=csp ====
char sub_5D7E50()
{
  int i; // ebp
  char result; // al
  void (__thiscall ***v2)(_DWORD, int); // ecx

  for ( i = 0; ; ++i ) /*0x5d7e56*/
  {
    result = MEMORY[0xABFD70]; /*0x5d7e62*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d7e69*/
    {
      MEMORY[0xABFDA4] = 0; /*0x5d7e75*/
      MEMORY[0xABFD70] |= 1u; /*0x5d7e7b*/
      MEMORY[0xABFDA8] = 0; /*0x5d7e81*/
      MEMORY[0xABFDAC] = 1; /*0x5d7e87*/
      MEMORY[0xABFDAD] = 0; /*0x5d7e8e*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7e94*/
      MEMORY[0xABFDB4] = 10; /*0x5d7e9a*/
      MEMORY[0xABFDB0] = 0; /*0x5d7ea0*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d7ea6*/
    }
    if ( i >= MEMORY[0xABFDB0] ) /*0x5d7eb4*/
      break; /*0x5d7eb4*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d7ebd*/
    {
      MEMORY[0xABFDA4] = 0; /*0x5d7ec9*/
      MEMORY[0xABFD70] |= 1u; /*0x5d7ecf*/
      MEMORY[0xABFDA8] = 0; /*0x5d7ed5*/
      MEMORY[0xABFDAC] = 1; /*0x5d7edb*/
      MEMORY[0xABFDAD] = 0; /*0x5d7ee2*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7ee8*/
      MEMORY[0xABFDB4] = 10; /*0x5d7eee*/
      MEMORY[0xABFDB0] = 0; /*0x5d7ef4*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7efa*/
    }
    v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)MEMORY[0xABFDA4] + i); /*0x5d7f07*/
    if ( v2 ) /*0x5d7f0c*/
      (**v2)(v2, 1); /*0x5d7f12*/
  }
  return result; /*0x5d7f1a*/
}


// ==== 0x005D7F20  MultiplayerGameMode::QueryInterface  this=MultiplayerGameMode  sig=csp ====
MultiplayerGameMode *__thiscall MultiplayerGameMode::QueryInterface(char *Block, char a2)
{
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *v6; // eax

  v3 = 0; /*0x5d7f24*/
  for ( *(_DWORD *)Block = &vt_MultiplayerGameMode; v3 < *((_DWORD *)Block + 6); ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)Block + 3) + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (__thiscall **)(char *))(*((_DWORD *)Block + 2) + 12))(Block + 8); /*0x5d7f53*/
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)Block + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((void **)Block + 12); /*0x5d7f66*/
  DeleteAndZero((void **)Block + 11); /*0x5d7f6e*/
  DeleteAndZero::Alt((void **)Block + 9); /*0x5d7f76*/
  DeleteAndZero::Alt((void **)Block + 8); /*0x5d7f7e*/
  v6 = (void *)*((_DWORD *)Block + 3); /*0x5d7f83*/
  *((_DWORD *)Block + 2) = &vt_VectorClass_MultiplayerTeam; /*0x5d7f86*/
  if ( v6 && *(Block + 21) ) /*0x5d7f90*/
  {
    __3_YAXPAX_Z(v6); /*0x5d7f98*/
    *((_DWORD *)Block + 3) = 0; /*0x5d7fa0*/
  }
  *(Block + 21) = 0; /*0x5d7fab*/
  *((_DWORD *)Block + 4) = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    __3_YAXPAX_Z(Block); /*0x5d7fbb*/
  return (MultiplayerGameMode *)Block; /*0x5d7fc5*/
}


// ==== 0x005D7FD0  AbstractClass::checkVisibility  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::checkVisibility(InitializerBase_MultiplayerGameMode *this, char a2)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d7fd9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fdf*/
    __3_YAXPAX_Z(this); /*0x5d7fe2*/
  return &this->vfptr; /*0x5d7fec*/
}


// ==== 0x005D7FF0  InitializerBase@MultiplayerGameMode::??_Gfacet_locale_std__UAEPAXI_Z_127  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_127(_DWORD *Block, char a2)
{
  *Block = &vt_MultiplayerGameMode_InitializerBase; /*0x5d7ff9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fff*/
    __3_YAXPAX_Z(Block); /*0x5d8002*/
  return Block; /*0x5d800c*/
}


// ==== 0x005D8010  InitializerBase@MultiplayerGameMode::??_Gfacet_locale_std__UAEPAXI_Z_128  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_128(_DWORD *Block, char a2)
{
  *Block = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8019*/
  if ( (a2 & 1) != 0 ) /*0x5d801f*/
    __3_YAXPAX_Z(Block); /*0x5d8022*/
  return Block; /*0x5d802c*/
}


// ==== 0x005D8030  AbstractClass::updateVisibilityState  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::updateVisibilityState(InitializerBase_MultiplayerGameMode *this, char a2)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8039*/
  if ( (a2 & 1) != 0 ) /*0x5d803f*/
    __3_YAXPAX_Z(this); /*0x5d8042*/
  return &this->vfptr; /*0x5d804c*/
}


// ==== 0x005D8050  AbstractClass::processFogReveal  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::processFogReveal(InitializerBase_MultiplayerGameMode *this, char a2)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8059*/
  if ( (a2 & 1) != 0 ) /*0x5d805f*/
    __3_YAXPAX_Z(this); /*0x5d8062*/
  return &this->vfptr; /*0x5d806c*/
}


// ==== 0x005D8070  AbstractClass::checkShroudState  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::checkShroudState(InitializerBase_MultiplayerGameMode *this, char a2)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8079*/
  if ( (a2 & 1) != 0 ) /*0x5d807f*/
    __3_YAXPAX_Z(this); /*0x5d8082*/
  return &this->vfptr; /*0x5d808c*/
}


// ==== 0x005D8090  AbstractClass::updateShroudMap  this=InitializerBase@MultiplayerGameMode  sig=csp ====
_DWORD *__thiscall AbstractClass::updateShroudMap(InitializerBase_MultiplayerGameMode *this, char a2)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8099*/
  if ( (a2 & 1) != 0 ) /*0x5d809f*/
    __3_YAXPAX_Z(this); /*0x5d80a2*/
  return &this->vfptr; /*0x5d80ac*/
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
int __thiscall VectorClass_ptr_MultiplayerTeam::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d810a*/
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
int __thiscall ScenarioClass::sub_5D8160(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5d816a*/
}


// ==== 0x005D8170  MPBattleClass::MPBattleClass  this=unknown  sig=csp ====
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


// ==== 0x005D81B0  Helper_5D81B0  this=unknown  sig=csp ====
_DWORD *__stdcall sub_5D81B0(const wchar_t **a1, const wchar_t **a2, const char **a3, const char **a4, char a5, int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d81b2*/
  if ( v6 ) /*0x5d81bc*/
    return MPBattleClass::MPManBattleClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d81de*/
  else
    return 0; /*0x5d81e6*/
}


// ==== 0x005D81F0  AbstractClass::processRevealArea  this=unknown  sig=csp ====
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


// ==== 0x005D8230  AbstractClass::computeRevealRadius  this=unknown  sig=csp ====
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


// ==== 0x005D8270  AbstractClass::applyRevealToCell  this=unknown  sig=csp ====
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


// ==== 0x005D82B0  AbstractClass::checkRevealCell  this=unknown  sig=csp ====
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
char __thiscall VectorClass_ptr_MultiplayerTeam::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d82f2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d82fd*/
  {
    v3 = 0; /*0x5d82ff*/
    if ( v2 <= 0 ) /*0x5d8303*/
      return 1; /*0x5d8323*/
    v4 = (_DWORD *)*(this + 1); /*0x5d8305*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d830b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d8314*/
    {
      ++v3; /*0x5d8316*/
      ++v4; /*0x5d8317*/
      if ( v3 >= v2 ) /*0x5d831c*/
        return 1; /*0x5d831c*/
    }
  }
  return 0; /*0x5d831e*/
}


// ==== 0x005D8330  _VectorClass_PAVMultiplayerTeam::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiplayerTeam::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d833c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d8346*/
    if ( a3 ) /*0x5d834c*/
      v4 = a3; /*0x5d8362*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d835e*/
    *((_BYTE *)this + 12) = 1; /*0x5d8366*/
    if ( v4 ) /*0x5d836a*/
    {
      if ( this->Items ) /*0x5d8375*/
      {
        v6 = this->Capacity; /*0x5d837c*/
        if ( a2 < v6 ) /*0x5d8381*/
          v6 = a2; /*0x5d8383*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d8389*/
          ++i; /*0x5d838e*/
        if ( *((_BYTE *)this + 13) ) /*0x5d839b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d83a6*/
          this->Items = 0; /*0x5d83ae*/
        }
      }
      this->Items = v4; /*0x5d83b7*/
      this->Capacity = a2; /*0x5d83bf*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d83c2*/
      return 1; /*0x5d83c8*/
    }
    else
    {
      return 0; /*0x5d836f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d83d2*/
    return 1; /*0x5d83d8*/
  }
}


// ==== 0x005D83E0  _VectorClass_PAVMultiplayerTeam::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MultiplayerTeam::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5d83ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d83f3*/
    *(_DWORD *)(this + 4) = 0; /*0x5d83fb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d83fe*/
  *(_DWORD *)(this + 8) = 0; /*0x5d8401*/
}


// ==== 0x005D8410  _VectorClass_PAVMultiplayerTeam::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiplayerTeam::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5d8410*/
    return 0; /*0x5d8418*/
  v3 = *(_DWORD *)(this + 8); /*0x5d841e*/
  result = 0; /*0x5d8421*/
  if ( v3 <= 0 ) /*0x5d8425*/
    return -1; /*0x5d843c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d842b*/
  {
    if ( ++result >= v3 ) /*0x5d843a*/
      return -1; /*0x5d843a*/
  }
  return result; /*0x5d841a*/
}


// ==== 0x005D8450  _VectorClass_PAVMultiplayerTeam::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MultiplayerTeam::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5d8450*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5d8465*/
  else
    return 0; /*0x5d8457*/
}


// ==== 0x005D8470  _DynamicVectorClass_PAVMultiplayerTeam::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall ScenarioClass::sub_5D8470(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d847c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d8482*/
    if ( a3 ) /*0x5d8488*/
      v4 = a3; /*0x5d849e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d849a*/
    *((_BYTE *)this + 12) = 1; /*0x5d84a2*/
    if ( !v4 ) /*0x5d84a6*/
      return 0; /*0x5d851a*/
    if ( this->Items ) /*0x5d84a8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d84af*/
      if ( a2 < v5 ) /*0x5d84b4*/
        v5 = a2; /*0x5d84b6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d84bc*/
        ++i; /*0x5d84c1*/
      if ( *((_BYTE *)this + 13) ) /*0x5d84ce*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d84d9*/
        this->Items = 0; /*0x5d84e1*/
      }
    }
    this->Items = v4; /*0x5d84ea*/
    this->DynamicVector_field_0x8 = a2; /*0x5d84f2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d84f5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d84fe*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d8501*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d8509*/
    this->DynamicVector_field_0x10 = v7; /*0x5d850b*/
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
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d852e*/
  {
    if ( ++result >= v2 ) /*0x5d853d*/
      return -1; /*0x5d853d*/
  }
  return result; /*0x5d8542*/
}


// ==== 0x005D8550  _VectorClass_PAVMultiplayerGameMode::assignHouses  this=VectorClass  sig=csp ====
char __thiscall ScenarioClass::sub_5D8550(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d8552*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d855d*/
  {
    v3 = 0; /*0x5d855f*/
    if ( v2 <= 0 ) /*0x5d8563*/
      return 1; /*0x5d8583*/
    v4 = (_DWORD *)*(this + 1); /*0x5d8565*/
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
char __thiscall ScenarioClass::sub_5D8590(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d859c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d85a6*/
    if ( a3 ) /*0x5d85ac*/
      v4 = a3; /*0x5d85c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d85be*/
    *((_BYTE *)this + 12) = 1; /*0x5d85c6*/
    if ( v4 ) /*0x5d85ca*/
    {
      if ( this->Items ) /*0x5d85d5*/
      {
        v6 = this->Capacity; /*0x5d85dc*/
        if ( a2 < v6 ) /*0x5d85e1*/
          v6 = a2; /*0x5d85e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d85e9*/
          ++i; /*0x5d85ee*/
        if ( *((_BYTE *)this + 13) ) /*0x5d85fb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d8606*/
          this->Items = 0; /*0x5d860e*/
        }
      }
      this->Items = v4; /*0x5d8617*/
      this->Capacity = a2; /*0x5d861f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d8622*/
      return 1; /*0x5d8628*/
    }
    else
    {
      return 0; /*0x5d85cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d8632*/
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
_DWORD *__thiscall sub_5D86D0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5d86d9*/
  this->Capacity = a2; /*0x5d86e0*/
  *((_BYTE *)this + 12) = 1; /*0x5d86e3*/
  *((_BYTE *)this + 13) = 0; /*0x5d86e7*/
  *this = &vt_VectorClass_MultiplayerGameMode; /*0x5d86eb*/
  if ( a2 ) /*0x5d86f1*/
  {
    if ( a3 ) /*0x5d86f9*/
    {
      this->Items = a3; /*0x5d86fb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x5d870c*/
      *((_BYTE *)this + 13) = 1; /*0x5d870f*/
    }
  }
  *this = &vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d8713*/
  *(this + 5) = 10; /*0x5d8719*/
  this->q010 = 0; /*0x5d8720*/
  return this; /*0x5d8729*/
}


// ==== 0x005D8730  _DynamicVectorClass_PAVMultiplayerGameMode::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall ScenarioClass::sub_5D8730(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d873c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d8742*/
    if ( a3 ) /*0x5d8748*/
      v4 = a3; /*0x5d875e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d875a*/
    *((_BYTE *)this + 12) = 1; /*0x5d8762*/
    if ( !v4 ) /*0x5d8766*/
      return 0; /*0x5d87da*/
    if ( this->Items ) /*0x5d8768*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5d876f*/
      if ( a2 < v5 ) /*0x5d8774*/
        v5 = a2; /*0x5d8776*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5d877c*/
        ++i; /*0x5d8781*/
      if ( *((_BYTE *)this + 13) ) /*0x5d878e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d8799*/
        this->Items = 0; /*0x5d87a1*/
      }
    }
    this->Items = v4; /*0x5d87aa*/
    this->DynamicVector_field_0x8 = a2; /*0x5d87b2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d87b5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5d87be*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5d87c1*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5d87c9*/
    this->DynamicVector_field_0x10 = v7; /*0x5d87cb*/
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
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d87ee*/
  {
    if ( ++result >= v2 ) /*0x5d87fd*/
      return -1; /*0x5d87fd*/
  }
  return result; /*0x5d8802*/
}


// ==== 0x005D8810  _VectorClass_PAVMultiplayerTeam::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_MultiplayerTeam::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d8813*/
  *Block = &vt_VectorClass_MultiplayerTeam; /*0x5d8816*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d8820*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8828*/
    *(Block + 1) = 0; /*0x5d8830*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d883b*/
  *(Block + 2) = 0; /*0x5d8841*/
  if ( (a2 & 1) != 0 ) /*0x5d8848*/
    __3_YAXPAX_Z(Block); /*0x5d884b*/
  return (VectorClass *)Block; /*0x5d8855*/
}


// ==== 0x005D8860  _DynamicVectorClass_PAVMultiplayerTeam::Destruct  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MultiplayerTeamVector::Destruct(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d8863*/
  *Block = &vt_VectorClass_MultiplayerTeam; /*0x5d8866*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d8870*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8878*/
    *(Block + 1) = 0; /*0x5d8880*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d888b*/
  *(Block + 2) = 0; /*0x5d8891*/
  if ( (a2 & 1) != 0 ) /*0x5d8898*/
    __3_YAXPAX_Z(Block); /*0x5d889b*/
  return (DynamicVector *)Block; /*0x5d88a5*/
}


// ==== 0x005D88B0  _VectorClass_PAVMultiplayerGameMode::Destruct  this=VectorClass  sig=csp ====
VectorClass *__thiscall MultiplayerModeVector::Destruct(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d88b3*/
  *Block = &vt_VectorClass_MultiplayerGameMode; /*0x5d88b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d88c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d88c8*/
    *(Block + 1) = 0; /*0x5d88d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d88db*/
  *(Block + 2) = 0; /*0x5d88e1*/
  if ( (a2 & 1) != 0 ) /*0x5d88e8*/
    __3_YAXPAX_Z(Block); /*0x5d88eb*/
  return (VectorClass *)Block; /*0x5d88f5*/
}


// ==== 0x005D8900  _DynamicVectorClass_PAVMultiplayerGameMode::Destruct  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MultiplayerModeVector2::Destruct(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5d8903*/
  *Block = &vt_VectorClass_MultiplayerGameMode; /*0x5d8906*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5d8910*/
  {
    __3_YAXPAX_Z(v3); /*0x5d8918*/
    *(Block + 1) = 0; /*0x5d8920*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5d892b*/
  *(Block + 2) = 0; /*0x5d8931*/
  if ( (a2 & 1) != 0 ) /*0x5d8938*/
    __3_YAXPAX_Z(Block); /*0x5d893b*/
  return (DynamicVector *)Block; /*0x5d8945*/
}


// ==== 0x005D8950  UnitTypeVector::Construct2  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5D8950(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5d895b*/
  this->Capacity = a2; /*0x5d895e*/
  *((_BYTE *)this + 12) = 1; /*0x5d8961*/
  *((_BYTE *)this + 13) = 0; /*0x5d8965*/
  *this = &vt_VectorClass_UnitTypeClass; /*0x5d8968*/
  if ( a2 ) /*0x5d896e*/
  {
    if ( a3 ) /*0x5d8976*/
    {
      this->Items = a3; /*0x5d8978*/
      return this; /*0x5d897e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5d898d*/
    *((_BYTE *)this + 13) = 1; /*0x5d8990*/
  }
  return this; /*0x5d897d*/
}


// ==== 0x005D89A0  InfantryTypeVector::ConstructFromData  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5D89A0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5d89ab*/
  this->Capacity = a2; /*0x5d89ae*/
  *((_BYTE *)this + 12) = 1; /*0x5d89b1*/
  *((_BYTE *)this + 13) = 0; /*0x5d89b5*/
  *this = &vt_VectorClass_InfantryTypeClass; /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      this->Items = a3; /*0x5d89c8*/
      return this; /*0x5d89ce*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5d89dd*/
    *((_BYTE *)this + 13) = 1; /*0x5d89e0*/
  }
  return this; /*0x5d89cd*/
}


// ==== 0x005D89F0  MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Constructor_MultiplayerGameMode(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5d89fb*/
  this->Capacity = a2; /*0x5d89fe*/
  *((_BYTE *)this + 12) = 1; /*0x5d8a01*/
  *((_BYTE *)this + 13) = 0; /*0x5d8a05*/
  *this = &vt_VectorClass_MultiplayerGameMode; /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      this->Items = a3; /*0x5d8a18*/
      return this; /*0x5d8a1e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5d8a2d*/
    *((_BYTE *)this + 13) = 1; /*0x5d8a30*/
  }
  return this; /*0x5d8a1d*/
}


// ==== 0x005D8A40  sub_5D8A40  this=-  sig=ida-proto ====
int sub_5D8A40()
{
  MEMORY[0xABFDE0] = 0; /*0x5d8a42*/
  MEMORY[0xABFDE4] = 0; /*0x5d8a47*/
  MEMORY[0xABFDE8] = 0; /*0x5d8a4c*/
  MEMORY[0xABFDEC] = 0; /*0x5d8a51*/
  return 0; /*0x5d8a56*/
}


// ==== 0x005D8A60  sub_5D8A60  this=-  sig=ida-proto ====
void sub_5D8A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d8a6c*/
  MEMORY[0xABFDF8] = Math::Sqrt(v0 + v0); /*0x5d8a7e*/
}


// ==== 0x005D8A90  sub_5D8A90  this=-  sig=ida-proto ====
void sub_5D8A90()
{
  MEMORY[0xABFE48] = MEMORY[0xABFDF8] / 60.0; /*0x5d8a9c*/
}


// ==== 0x005D8AB0  sub_5D8AB0  this=-  sig=ida-proto ====
void sub_5D8AB0()
{
  MEMORY[0xABFE30] = 1.0 / MEMORY[0xABFE48]; /*0x5d8abc*/
}


// ==== 0x005D8AD0  sub_5D8AD0  this=-  sig=ida-proto ====
void sub_5D8AD0()
{
  MEMORY[0xABFE28] = 0.0174532925199433 * 45.0; /*0x5d8adc*/
}


// ==== 0x005D8AF0  sub_5D8AF0  this=-  sig=ida-proto ====
void sub_5D8AF0()
{
  MEMORY[0xABFE00] = 0.0174532925199433 * 60.0; /*0x5d8afc*/
}


// ==== 0x005D8B10  sub_5D8B10  this=-  sig=ida-proto ====
void sub_5D8B10()
{
  MEMORY[0xABFDD8] = 0.0174532925199433 * 90.0; /*0x5d8b1c*/
}


// ==== 0x005D8B30  sub_5D8B30  this=-  sig=ida-proto ====
__int64 sub_5D8B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFDD8] - MEMORY[0xABFE00]); /*0x5d8b42*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFDF8] * 0.5); /*0x5d8b56*/
  MEMORY[0xABFE50] = result; /*0x5d8b5b*/
  return result; /*0x5d8b60*/
}


// ==== 0x005D8B70  sub_5D8B70  this=-  sig=ida-proto ====
void sub_5D8B70()
{
  MEMORY[0xABFE08] = Math::ArcTan((double)MEMORY[0xABFE50] * 0.00390625); /*0x5d8b87*/
}


// ==== 0x005D8BA0  sub_5D8BA0  this=-  sig=ida-proto ====
void sub_5D8BA0()
{
  MEMORY[0xABFE20] = Math::ArcTan((double)(2 * MEMORY[0xABFE50]) / MEMORY[0xABFDF8]); /*0x5d8bc2*/
}


// ==== 0x005D8BD0  sub_5D8BD0  this=-  sig=ida-proto ====
__int64 sub_5D8BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFE50]) + 0.5); /*0x5d8beb*/
  MEMORY[0xABFE44] = result; /*0x5d8bf0*/
  return result; /*0x5d8bf6*/
}


// ==== 0x005D8C00  sub_5D8C00  this=-  sig=ida-proto ====
int sub_5D8C00()
{
  MEMORY[0xABFDF0] = 0; /*0x5d8c02*/
  MEMORY[0xABFDF2] = 0; /*0x5d8c08*/
  return 0; /*0x5d8c0e*/
}


// ==== 0x005D8C10  sub_5D8C10  this=-  sig=ida-proto ====
int sub_5D8C10()
{
  MEMORY[0xABFE10] = 0; /*0x5d8c12*/
  MEMORY[0xABFE14] = 0; /*0x5d8c17*/
  MEMORY[0xABFE18] = 0; /*0x5d8c1c*/
  return 0; /*0x5d8c21*/
}


// ==== 0x005D8C30  sub_5D8C30  this=-  sig=ida-proto ====
int sub_5D8C30()
{
  MEMORY[0xABFE40] = 0; /*0x5d8c35*/
  MEMORY[0xABFE38] = 128; /*0x5d8c3f*/
  MEMORY[0xABFE3C] = 128; /*0x5d8c44*/
  return 128; /*0x5d8c49*/
}


// ==== 0x005D8C50  MultiplayerTeam::Constructor  this=MultiplayerTeam  sig=csp ====
wchar_t **__thiscall MultiplayerTeam::Constructor(wchar_t **this, MPCooperative *aP1, wchar_t *a2)
{
  WideString::AssignFromPtr(this + 1, (const wchar_t **)aP1); /*0x5d8c5b*/
  *this = (wchar_t *)&MultiplayerTeam::`vftable'; /*0x5d8c64*/
  *(this + 2) = a2; /*0x5d8c6a*/
  return this; /*0x5d8c6f*/
}


// ==== 0x005D8C80  MultiplayerTeam::Destructor  this=MultiplayerTeam  sig=csp ====
void __thiscall MultiplayerTeam_Destructor(void **this)
{
  *this = &MultiplayerTeam::`vftable'; /*0x5d8c80*/
  DeleteAndZero::Alt(this + 1); /*0x5d8c89*/
}


// ==== 0x005D8C90  MultiplayerTeam::IsValidIndex  this=MultiplayerTeam  sig=csp ====
bool __stdcall PlayerClass_IsValidIndex(int a1)
{
  return a1 >= 0 && a1 < MEMORY[0xA8DA84]; /*0x5d8ca2*/
}


// ==== 0x005D8CB0  MultiplayerTeam::SetHouse  this=MultiplayerTeam  sig=csp ====
char __thiscall PlayerClass_SetHouse(_DWORD *this, int a2)
{
  char result; // al

  result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x5d8cbb*/
  if ( result ) /*0x5d8cc0*/
  {
    *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * a2) + 107) = *(this + 2); /*0x5d8cd5*/
    return 1; /*0x5d8cd8*/
  }
  return result; /*0x5d8cc2*/
}


// ==== 0x005D8D10  MPCombatTeam::AddToList  this=VOID_PTR  sig=csp ====
LRESULT __thiscall MPCombatTeam::AddToList(int this, MultiplayerGameMode *aP1)
{
  CampaignScore *v3; // eax
  LRESULT v4; // edi

  v3 = WideString::GetOrEmpty_Alt((wchar_t **)(this + 4)); /*0x5d8d19*/
  v4 = SendMessageA((HWND)aP1, 0x143u, 0, (LPARAM)v3); /*0x5d8d33*/
  SendMessageA((HWND)aP1, 0x151u, v4, *(_DWORD *)(this + 8)); /*0x5d8d40*/
  return v4; /*0x5d8d44*/
}


// ==== 0x005D8D50  MultiplayerTeam::QueryInterface  this=MultiplayerTeam  sig=csp ====
MultiplayerTeam *__thiscall MultiplayerTeam_Destru::QueryInterface(void **Block, char a2)
{
  *Block = &MultiplayerTeam::`vftable'; /*0x5d8d56*/
  DeleteAndZero::Alt(Block + 1); /*0x5d8d5c*/
  if ( (a2 & 1) != 0 ) /*0x5d8d66*/
    __3_YAXPAX_Z(Block); /*0x5d8d69*/
  return (MultiplayerTeam *)Block; /*0x5d8d73*/
}


// ==== 0x005D8D80  sub_5D8D80  this=-  sig=ida-proto ====
void sub_5D8D80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d8d8c*/
  MEMORY[0xABFE78] = Math::Sqrt(v0 + v0); /*0x5d8d9e*/
}


// ==== 0x005D8DB0  sub_5D8DB0  this=-  sig=ida-proto ====
void sub_5D8DB0()
{
  MEMORY[0xABFEE0] = MEMORY[0xABFE78] / 60.0; /*0x5d8dbc*/
}


// ==== 0x005D8DD0  sub_5D8DD0  this=-  sig=ida-proto ====
void sub_5D8DD0()
{
  MEMORY[0xABFEB0] = 1.0 / MEMORY[0xABFEE0]; /*0x5d8ddc*/
}


// ==== 0x005D8DF0  sub_5D8DF0  this=-  sig=ida-proto ====
void sub_5D8DF0()
{
  MEMORY[0xABFEA8] = 0.0174532925199433 * 45.0; /*0x5d8dfc*/
}


// ==== 0x005D8E10  sub_5D8E10  this=-  sig=ida-proto ====
void sub_5D8E10()
{
  MEMORY[0xABFE80] = 0.0174532925199433 * 60.0; /*0x5d8e1c*/
}


// ==== 0x005D8E30  sub_5D8E30  this=-  sig=ida-proto ====
void sub_5D8E30()
{
  MEMORY[0xABFE58] = 0.0174532925199433 * 90.0; /*0x5d8e3c*/
}


// ==== 0x005D8E50  sub_5D8E50  this=-  sig=ida-proto ====
__int64 sub_5D8E50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFE58] - MEMORY[0xABFE80]); /*0x5d8e62*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFE78] * 0.5); /*0x5d8e76*/
  MEMORY[0xABFEE8] = result; /*0x5d8e7b*/
  return result; /*0x5d8e80*/
}


// ==== 0x005D8E90  sub_5D8E90  this=-  sig=ida-proto ====
void sub_5D8E90()
{
  MEMORY[0xABFE88] = Math::ArcTan((double)MEMORY[0xABFEE8] * 0.00390625); /*0x5d8ea7*/
}


// ==== 0x005D8EC0  sub_5D8EC0  this=-  sig=ida-proto ====
void sub_5D8EC0()
{
  MEMORY[0xABFEA0] = Math::ArcTan((double)(2 * MEMORY[0xABFEE8]) / MEMORY[0xABFE78]); /*0x5d8ee2*/
}


// ==== 0x005D8EF0  sub_5D8EF0  this=-  sig=ida-proto ====
__int64 sub_5D8EF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFEE8]) + 0.5); /*0x5d8f0b*/
  MEMORY[0xABFEDC] = result; /*0x5d8f10*/
  return result; /*0x5d8f16*/
}


// ==== 0x005D8F20  sub_5D8F20  this=-  sig=ida-proto ====
int sub_5D8F20()
{
  MEMORY[0xABFE70] = 0; /*0x5d8f22*/
  MEMORY[0xABFE72] = 0; /*0x5d8f28*/
  return 0; /*0x5d8f2e*/
}


// ==== 0x005D8F30  sub_5D8F30  this=-  sig=ida-proto ====
int sub_5D8F30()
{
  MEMORY[0xABFE90] = 0; /*0x5d8f32*/
  MEMORY[0xABFE94] = 0; /*0x5d8f37*/
  MEMORY[0xABFE98] = 0; /*0x5d8f3c*/
  return 0; /*0x5d8f41*/
}


// ==== 0x005D8F50  sub_5D8F50  this=-  sig=ida-proto ====
int sub_5D8F50()
{
  MEMORY[0xABFEC0] = 0; /*0x5d8f55*/
  MEMORY[0xABFEB8] = 128; /*0x5d8f5f*/
  MEMORY[0xABFEBC] = 128; /*0x5d8f64*/
  return 128; /*0x5d8f69*/
}


// ==== 0x005D8F70  sub_5D8F70  this=-  sig=ida-proto ====
int sub_5D8F70()
{
  MEMORY[0xABFE60] = 0; /*0x5d8f72*/
  MEMORY[0xABFE64] = 0; /*0x5d8f77*/
  MEMORY[0xABFE68] = 0; /*0x5d8f7c*/
  MEMORY[0xABFE6C] = 0; /*0x5d8f81*/
  return 0; /*0x5d8f86*/
}


// ==== 0x005D8F90  sub_5D8F90  this=-  sig=ida-proto ====
int sub_5D8F90()
{
  MEMORY[0xABFEC8] = 0; /*0x5d8f92*/
  MEMORY[0xABFECC] = 0; /*0x5d8f97*/
  MEMORY[0xABFED0] = 0; /*0x5d8f9c*/
  MEMORY[0xABFED4] = 0; /*0x5d8fa1*/
  return 0; /*0x5d8fa6*/
}


// ==== 0x005D8FB0  ObjectClass::method_5D8FB0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5D8FB0(_DWORD *this)
{
  *this = 0; /*0x5d8fb4*/
  this->vtable2 = 0; /*0x5d8fb6*/
  this->vtable3 = 0; /*0x5d8fb9*/
  this->vtable4 = 0; /*0x5d8fbc*/
  return this; /*0x5d8fbf*/
}


// ==== 0x005D8FC0  ObjectClass::?_Release__NonReentrantLock_details_Concurrency__QAEXXZ  this=int  sig=csp ====
void __thiscall __Release__NonReentrantLock_details_Concurrency__QAEXXZ(Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0; /*0x5d8fc0*/
}


// ==== 0x005D8FD0  CCFileClass::WriteINIString  this=int  sig=csp ====
void __thiscall sub_5D8FD0(int *this)
{
  char v2; // [esp+7h] [ebp-25h] BYREF
  int v3[9]; // [esp+8h] [ebp-24h] BYREF

  v2 = 0; /*0x5d8fd6*/
  if ( !*this ) /*0x5d8fdb*/
  {
    *this = Network::ResolveAndConnect(this, &v2); /*0x5d8fea*/
    if ( v2 ) /*0x5d8ff2*/
    {
      RawFileClass::Construct(v3, (int)MEMORY[0x826444]); /*0x5d8ffd*/
      INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x830CC0], *this, 0); /*0x5d9016*/
      INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x830CB0], *(this + 2), 0); /*0x5d9030*/
      INIClass::WriteDigest(&MEMORY[0x8870C0], (int)v3, 0); /*0x5d9041*/
      RawFileClass::Dtor(v3); /*0x5d904a*/
    }
  }
}


// ==== 0x005D9060  ObjectClass::method_5D9060  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_5D9060(_DWORD *this, int a2)
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
    v5 = v2 + this->uniqueId; /*0x5d907b*/
    this->uniqueId = v5; /*0x5d907f*/
    v6 = v5; /*0x5d9087*/
    if ( v5 > 0xFFFF ) /*0x5d908a*/
      this->uniqueId = 2048; /*0x5d908c*/
    if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d90a4*/
      break; /*0x5d90a4*/
    if ( (*(unsigned __int8 (__stdcall **)(_WORD))(*(_DWORD *)MEMORY[0x887628] + 104))(v5) ) /*0x5d90a9*/
    {
      (*(void (__thiscall **)(int, __int16))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v6); /*0x5d90ca*/
      return v6; /*0x5d90ca*/
    }
    if ( !v4-- ) /*0x5d90b0*/
      return v6; /*0x5d90be*/
  }
  return v6; /*0x5d90ba*/
}


// ==== 0x005D90E0  Network::QueryAddress  this=int  sig=csp ====
char __stdcall Network::QueryAddress(IPXManagerClass *aP0, int a2, int a3, char a4)
{
  int QueueCount; // ebx
  int v5; // edx
  int v6; // esi
  int v7; // eax
  DWORD Ticks; // [esp+Ch] [ebp-1D4h]
  int v10; // [esp+18h] [ebp-1C8h] BYREF
  char v11[3]; // [esp+1Ch] [ebp-1C4h] BYREF
  __int16 v12; // [esp+4Dh] [ebp-193h]
  bool v13; // [esp+4Fh] [ebp-191h]

  v10 = 43; /*0x5d9103*/
  strcpy(v11, &stru_830620.__pad_690[64]); /*0x5d910e*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 116))( /*0x5d9127*/
    *(_DWORD *)&stru_87C374.__pad_579C[23320],
    a2);
  v12 = a2; /*0x5d9139*/
  v13 = a4 == 1; /*0x5d9141*/
  QueueCount = Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]); /*0x5d9155*/
  Network::FormatAddress((unsigned __int16 *)aP0, 0); /*0x5d9157*/
  Debug::Log(); /*0x5d9169*/
  LOWORD(v5) = aP0->Socket; /*0x5d9175*/
  Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)&v10, 56, 0, (int)aP0, v5, a3); /*0x5d918c*/
  Ticks = Timer::GetTicks(); /*0x5d919a*/
  while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > QueueCount /*0x5d91ab*/
       || *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23320] + 48) )
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
    Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]); /*0x5d91ea*/
    Event::Dispatch(); /*0x5d91ef*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 116))( /*0x5d91f6*/
    *(_DWORD *)&stru_87C374.__pad_579C[23320],
    0);
  return 1; /*0x5d9203*/
}


// ==== 0x005D9220  Network::WaitForPacket  this=int  sig=csp ====
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
    Network::ReceiveLoop(MEMORY[0xA8E9C0]); /*0x5d92a2*/
    Event::Dispatch(); /*0x5d92a7*/
    if ( v2 >= Connection::GetSpeed(MEMORY[0xA8E9C0]) ) /*0x5d92b8*/
      v2 = 0; /*0x5d92ba*/
    if ( Network::SendPacketThunk(v2, v15, v12, v14, &v7, &v11) && v7 == -22012 && v15[0] == 44 && a1 == v11 ) /*0x5d9304*/
    {
      v5 = v16; /*0x5d9314*/
      Debug::Log(MEMORY[0x830CF4], (unsigned __int16)v17, (unsigned __int16)v16); /*0x5d9322*/
      Network::receiveData(v2); /*0x5d9330*/
      return v5; /*0x5d9341*/
    }
    v3 = v10; /*0x5d9306*/
    ++v2; /*0x5d930a*/
  }
  return 0; /*0x5d9338*/
}


// ==== 0x005D9360  ObjectClass::SmallFunc_5D9360  this=ObjectClass  sig=csp ====
void __thiscall sub_5D9360(int *this)
{
  int v2[9]; // [esp+4h] [ebp-24h] BYREF

  RawFileClass::Construct(v2, (int)MEMORY[0x826444]); /*0x5d936f*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x830CC0], *this, 0); /*0x5d9388*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x830CB0], *(this + 2), 0); /*0x5d93a2*/
  INIClass::WriteDigest(&MEMORY[0x8870C0], (int)v2, 0); /*0x5d93b3*/
  RawFileClass::Dtor(v2); /*0x5d93bc*/
}


// ==== 0x005D93D0  Network::dispatchEvent  this=int  sig=csp ====
int __thiscall sub_5D93D0(_DWORD *this)
{
  int result; // eax

  *(this + 1) = INIClass::ReadInt_Overwrite( /*0x5d93fa*/
                  (int)&MEMORY[0x8870C0],
                  (unsigned __int8 *)MEMORY[0x82642C],
                  (unsigned __int8 *)MEMORY[0x830CC0],
                  0);
  result = INIClass::ReadInt_Overwrite( /*0x5d93fd*/
             (int)&MEMORY[0x8870C0],
             (unsigned __int8 *)MEMORY[0x82642C],
             (unsigned __int8 *)MEMORY[0x830CB0],
             1);
  *(this + 3) = result; /*0x5d9402*/
  return result; /*0x5d9405*/
}


// ==== 0x005D9410  Network::ResolveAndConnect  this=IPXGlobalConnClass  sig=csp ====
int __thiscall Network_ResolveAndConnect(int *this, _BYTE *a2)
{
  _BYTE *v3; // esi
  int v4; // edi
  int v5; // esi
  int v7; // ebx
  const char *v8; // esi
  struct hostent *v9; // eax
  int v10; // ecx
  signed int *v11; // edx
  _DWORD *v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  char *v16; // esi
  signed int *v17; // edi
  int v18; // esi
  int v19; // eax
  bool v20; // sf
  int v21; // ecx
  int v23; // edi
  __int16 i; // si
  int v25; // eax
  int v26; // edi
  __int16 j; // bx
  int v28; // eax
  _WORD *v29; // esi
  int k; // edi
  int v31; // ebx
  int v32; // eax
  int v33; // ecx
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  signed int v38; // eax
  int v39; // esi
  int v40; // esi
  int v41; // eax
  int v42; // eax
  int v43; // ebx
  _WORD *v44; // esi
  int v45; // eax
  int v46; // ecx
  int v47; // esi
  int v48; // eax
  int v49; // ecx
  int v51; // ebx
  int v52; // eax
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
  DWORD Ticks; // [esp+44h] [ebp-184h]
  DWORD v69; // [esp+44h] [ebp-184h]
  DWORD v70; // [esp+44h] [ebp-184h]
  signed int v71; // [esp+44h] [ebp-184h]
  DWORD v72; // [esp+44h] [ebp-184h]
  DWORD v73; // [esp+44h] [ebp-184h]
  int v74; // [esp+50h] [ebp-178h] BYREF
  int v75; // [esp+54h] [ebp-174h]
  int v76; // [esp+58h] [ebp-170h] BYREF
  int v77; // [esp+5Ch] [ebp-16Ch]
  _DWORD v78[3]; // [esp+60h] [ebp-168h] BYREF
  signed int v79; // [esp+6Ch] [ebp-15Ch] BYREF
  int v80; // [esp+70h] [ebp-158h]
  int v81; // [esp+74h] [ebp-154h]
  char *v82; // [esp+7Ch] [ebp-14Ch]
  char *v83; // [esp+80h] [ebp-148h]
  int v84; // [esp+84h] [ebp-144h]
  _DWORD v85[2]; // [esp+88h] [ebp-140h] BYREF
  _DWORD v86[2]; // [esp+90h] [ebp-138h] BYREF
  _DWORD v87[3]; // [esp+98h] [ebp-130h] BYREF
  unsigned __int16 v88[18]; // [esp+A4h] [ebp-124h] BYREF
  char name[256]; // [esp+C8h] [ebp-100h] BYREF

  v75 = 4321; /*0x5d9425*/
  v77 = 2130706432; /*0x5d942d*/
  *a2 = 0; /*0x5d9435*/
  v66 = 0; /*0x5d9437*/
  v3 = v87; /*0x5d943b*/
  v4 = 4; /*0x5d943f*/
  do /*0x5d944f*/
  {
    Waypoint::InitInvalid(v3); /*0x5d9446*/
    v3 += 12; /*0x5d944b*/
    --v4; /*0x5d944e*/
  }
  while ( v4 ); /*0x5d944f*/
  Timer::GetTicks(); /*0x5d9455*/
  if ( MEMORY[0xA8E254] ) /*0x5d9469*/
  {
    v5 = 1; /*0x5d9471*/
    Debug::Log(); /*0x5d9476*/
    if ( MEMORY[0xA8E180] ) /*0x5d9485*/
    {
      v5 = 9; /*0x5d948c*/
      Debug::Log(); /*0x5d9491*/
    }
    return v5; /*0x5d94a5*/
  }
  Ticks = Timer::GetTicks(); /*0x5d94bf*/
  Debug::Log(); /*0x5d94cb*/
  v7 = 0; /*0x5d94d3*/
  v84 = 0; /*0x5d94d5*/
  v78[0] = dword_B76338; /*0x5d94d9*/
  v83 = MEMORY[0xB73E44]; /*0x5d94e1*/
  v82 = MEMORY[0x830C08]; /*0x5d94e9*/
  while ( 1 ) /*0x5d94fb*/
  {
    v8 = v82; /*0x5d94fb*/
    if ( dword_B77E1C > v84 ) /*0x5d9501*/
    {
      v8 = v83; /*0x5d9507*/
      LOWORD(v75) = *(_WORD *)v78[0]; /*0x5d9513*/
      Debug::Log(); /*0x5d9518*/
    }
    v82 += 32; /*0x5d953b*/
    v83 += 128; /*0x5d953f*/
    v78[0] += 4; /*0x5d9543*/
    ++v84; /*0x5d9554*/
    if ( !strlen(v8) ) /*0x5d954f*/
      break; /*0x5d954f*/
    strcpy(name, v8); /*0x5d9579*/
    v9 = gethostbyname(name); /*0x5d958a*/
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
      v12 = (signed int *)((char *)&v79 + v7); /*0x5d95c8*/
      v7 += 4; /*0x5d95cc*/
      *v12 = **(_DWORD **)v9->h_addr_list; /*0x5d95d1*/
      Debug::Log(); /*0x5d95f2*/
    }
    else
    {
      v11 = &v79; /*0x5d95a2*/
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
  v16 = (char *)v87; /*0x5d964c*/
  v17 = &v79; /*0x5d9650*/
  do /*0x5d9679*/
  {
    v78[0] = *v17; /*0x5d965d*/
    Struct::Copy6Bytes(v16, (int)v78); /*0x5d9661*/
    Network::SetPort(v16, v75); /*0x5d966d*/
    ++v17; /*0x5d9672*/
    v16 += 12; /*0x5d9675*/
    --v15; /*0x5d9678*/
  }
  while ( v15 ); /*0x5d9679*/
  v18 = 255; /*0x5d967b*/
  while ( 1 ) /*0x5d9689*/
  {
    v19 = this->IPXGlobalConnClass_field_0x04 + 1; /*0x5d9689*/
    LOWORD(v15) = *((_WORD *)this + 8) + 1; /*0x5d968b*/
    v20 = this->IPXGlobalConnClass_field_0x04 - 65534 < 0; /*0x5d968e*/
    this->IPXGlobalConnClass_field_0x04 = v19; /*0x5d9693*/
    v75 = v15; /*0x5d9696*/
    if ( !(v20 ^ __OFSUB__(v19, 0xFFFF) | (v19 == 0xFFFF)) ) /*0x5d969a*/
      this->IPXGlobalConnClass_field_0x04 = 2048; /*0x5d969c*/
    v21 = MEMORY[0x887628]; /*0x5d969f*/
    if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d96b0*/
      break; /*0x5d96b0*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)MEMORY[0x887628] + 104))(v15) ) /*0x5d96b5*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v15); /*0x5d96ce*/
LABEL_36:
      v21 = MEMORY[0x887628]; /*0x5d96d1*/
      break; /*0x5d96d1*/
    }
    if ( !v18-- ) /*0x5d96bc*/
      goto LABEL_36; /*0x5d96c1*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v21 + 104))(v21, v15) ) /*0x5d96da*/
    return 1; /*0x5d9d92*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x5d96ed*/
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
    Network::QueryAddress((unsigned __int16 *)v87, v15, 2130706432, 0); /*0x5d9742*/
    v23 = 360; /*0x5d9755*/
  }
  if ( !i ) /*0x5d9760*/
  {
LABEL_159:
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v15); /*0x5d9d6d*/
    if ( i == (_WORD)v15 ) /*0x5d9d7c*/
    {
      *(this + 2) = 0; /*0x5d9d85*/
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
    Network::QueryAddress(v88, v75, 2130706433, 0); /*0x5d97c5*/
    v26 = 360; /*0x5d97d8*/
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v75); /*0x5d97e0*/
  if ( !j || j == (_WORD)v75 ) /*0x5d97fc*/
    return 1; /*0x5d97fc*/
  v78[0] = 0; /*0x5d9805*/
  v29 = (_WORD *)(j != i ? 4 : 2);
  v67 = (int)v29; /*0x5d9818*/
  while ( 2 ) /*0x5d981c*/
  {
    v85[0] = 0; /*0x5d981c*/
    v86[0] = 0; /*0x5d9824*/
    v85[1] = 0; /*0x5d9828*/
    v86[1] = 0; /*0x5d982c*/
    for ( k = 0; k < 4; ++k ) /*0x5d9830*/
    {
      v31 = k; /*0x5d9834*/
      if ( !k ) /*0x5d9836*/
        v31 = 1; /*0x5d9838*/
      v75 = 255; /*0x5d983d*/
      while ( 1 ) /*0x5d984a*/
      {
        v32 = v31 + this->IPXGlobalConnClass_field_0x04; /*0x5d984a*/
        this->IPXGlobalConnClass_field_0x04 = v32; /*0x5d984c*/
        LOWORD(v29) = v32; /*0x5d9854*/
        if ( v32 > 0xFFFF ) /*0x5d9857*/
          this->IPXGlobalConnClass_field_0x04 = 2048; /*0x5d9859*/
        v33 = MEMORY[0x887628]; /*0x5d9860*/
        if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d9871*/
          break; /*0x5d9871*/
        if ( (*(unsigned __int8 (__stdcall **)(_WORD *))(*(_DWORD *)MEMORY[0x887628] + 104))(v29) ) /*0x5d9876*/
        {
          (*(void (__thiscall **)(int, _WORD *))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v29); /*0x5d9897*/
LABEL_69:
          v33 = MEMORY[0x887628]; /*0x5d989a*/
          break; /*0x5d989a*/
        }
        if ( v75-- == 0 ) /*0x5d9884*/
          goto LABEL_69; /*0x5d988a*/
      }
      *((_WORD *)v85 + k) = (_WORD)v29; /*0x5d98a0*/
      v35 = (*(int (__thiscall **)(int, _WORD *))(*(_DWORD *)v33 + 104))(v33, v29); /*0x5d98a8*/
      if ( !(_BYTE)v35 ) /*0x5d98ad*/
      {
        if ( k > 0 ) /*0x5d99e7*/
        {
          v44 = v85; /*0x5d99e9*/
          do /*0x5d9a05*/
          {
            if ( *v44 ) /*0x5d99ed*/
            {
              LOWORD(v35) = *v44; /*0x5d99ed*/
              v35 = (*(int (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v35); /*0x5d99fe*/
            }
            ++v44; /*0x5d9a01*/
            --k; /*0x5d9a04*/
          }
          while ( k ); /*0x5d9a05*/
        }
        return v67; /*0x5d9a15*/
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x5d98c5*/
    v36 = 0; /*0x5d98d3*/
    v77 += 10; /*0x5d98d5*/
    v38 = Timer::GetTicks(); /*0x5d98d9*/
    HIWORD(v37) = 0; /*0x5d98de*/
    v79 = v38; /*0x5d98e3*/
    v71 = v38; /*0x5d98e7*/
    HIWORD(v38) = HIWORD(v80); /*0x5d98eb*/
    v39 = 720; /*0x5d98ef*/
    v81 = 720; /*0x5d98f1*/
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
        if ( !*((_WORD *)v86 + k) ) /*0x5d9926*/
        {
          LOWORD(v37) = *((_WORD *)v85 + k); /*0x5d992e*/
          Network::QueryAddress((unsigned __int16 *)v87, v37, v40, 0); /*0x5d993e*/
          LOWORD(v38) = Network::WaitForPacket(v40, 0); /*0x5d9948*/
          *((_WORD *)v86 + k) = v38; /*0x5d9950*/
          if ( (_WORD)v38 ) /*0x5d9955*/
            ++v36; /*0x5d9957*/
        }
        ++v40; /*0x5d9959*/
      }
      v39 = 720; /*0x5d995f*/
    }
    v29 = v85; /*0x5d9969*/
    do /*0x5d9985*/
    {
      if ( *v29 ) /*0x5d996d*/
      {
        LOWORD(v38) = *v29; /*0x5d996d*/
        v38 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v38); /*0x5d997e*/
      }
      ++v29; /*0x5d9981*/
      --k; /*0x5d9984*/
    }
    while ( k ); /*0x5d9985*/
    if ( v36 < 4 ) /*0x5d998a*/
    {
      v45 = *(this + 3); /*0x5d9a18*/
      if ( v45 && *(this + 1) > 1 ) /*0x5d9a23*/
        *(this + 2) = v45; /*0x5d9a25*/
      return v67; /*0x5d9a28*/
    }
    else
    {
      HIBYTE(v76) = 0; /*0x5d99a7*/
      HIBYTE(v74) = 0; /*0x5d99ac*/
      v41 = DetectPortAllocationPattern(v36, v85, v86, (char *)&v76 + 3, (char *)&v74 + 3); /*0x5d99b1*/
      if ( v41 ) /*0x5d99b8*/
      {
        v46 = -(HIBYTE(v76) != 0); /*0x5d9a43*/
        *(this + 2) = v41; /*0x5d9a45*/
        v43 = ((v46 & 0x10) + 16) | v67; /*0x5d9a52*/
        v67 = v43; /*0x5d9a56*/
        if ( HIBYTE(v74) ) /*0x5d9a5a*/
          *a2 = 1; /*0x5d9a63*/
      }
      else
      {
        v42 = *(this + 3); /*0x5d99ba*/
        if ( v42 && *(this + 1) > 1 ) /*0x5d99c5*/
          *(this + 2) = v42; /*0x5d99c7*/
        if ( ++v78[0] < 3 ) /*0x5d99d6*/
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
            v48 = this->IPXGlobalConnClass_field_0x04 + 1; /*0x5d9a8e*/
            this->IPXGlobalConnClass_field_0x04 = v48; /*0x5d9a90*/
            LOWORD(k) = v48; /*0x5d9a98*/
            if ( v48 > 0xFFFF ) /*0x5d9a9b*/
              this->IPXGlobalConnClass_field_0x04 = 2048; /*0x5d9a9d*/
            v49 = MEMORY[0x887628]; /*0x5d9aa4*/
            if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d9ab5*/
              break; /*0x5d9ab5*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)MEMORY[0x887628] + 104))(k) ) /*0x5d9aba*/
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], k); /*0x5d9ad3*/
LABEL_118:
              v49 = MEMORY[0x887628]; /*0x5d9ad6*/
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
            v52 = this->IPXGlobalConnClass_field_0x04 + 1; /*0x5d9afe*/
            LOWORD(v47) = *((_WORD *)this + 8) + 1; /*0x5d9b00*/
            v20 = this->IPXGlobalConnClass_field_0x04 - 65534 < 0; /*0x5d9b03*/
            this->IPXGlobalConnClass_field_0x04 = v52; /*0x5d9b08*/
            v75 = v47; /*0x5d9b0b*/
            if ( !(v20 ^ __OFSUB__(v52, 0xFFFF) | (v52 == 0xFFFF)) ) /*0x5d9b0f*/
              this->IPXGlobalConnClass_field_0x04 = 2048; /*0x5d9b11*/
            v53 = MEMORY[0x887628]; /*0x5d9b18*/
            if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d9b29*/
              break; /*0x5d9b29*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)MEMORY[0x887628] + 104))(v47) ) /*0x5d9b2e*/
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v47); /*0x5d9b47*/
LABEL_130:
              v53 = MEMORY[0x887628]; /*0x5d9b4a*/
              break; /*0x5d9b4a*/
            }
            if ( !v51-- ) /*0x5d9b35*/
              goto LABEL_130; /*0x5d9b3a*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v53 + 104))(v53, v47) ) /*0x5d9b53*/
            return v67; /*0x5d9b68*/
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x5d9b73*/
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
            Network::QueryAddress((unsigned __int16 *)v87, k, v77, 0); /*0x5d9bd3*/
            v59 = Network::WaitForPacket(v58, 0); /*0x5d9bdd*/
            v56 = 240; /*0x5d9be2*/
            v55 = v59; /*0x5d9be6*/
          }
          if ( !v55 ) /*0x5d9bed*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], k); /*0x5d9bf8*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v75); /*0x5d9c08*/
            return v67; /*0x5d9c19*/
          }
LABEL_142:
          v78[0] = v87[0]; /*0x5d9c1c*/
          v78[1] = v87[1]; /*0x5d9c2d*/
          v78[2] = v87[2]; /*0x5d9c36*/
          Network::SetPort(v78, LOWORD(v87[0]) + 1); /*0x5d9c3a*/
          v60 = v77; /*0x5d9c3f*/
          Network::QueryAddress((unsigned __int16 *)v78, k, v77, 0); /*0x5d9c4e*/
          Network::QueryAddress((unsigned __int16 *)v78, k, v60, 0); /*0x5d9c5e*/
          Network::QueryAddress((unsigned __int16 *)v78, k, v60, 0); /*0x5d9c6e*/
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
            Network::QueryAddress((unsigned __int16 *)v87, v75, v77, 0); /*0x5d9cce*/
            v61 = Network::WaitForPacket(v64, 0); /*0x5d9ce1*/
          }
          if ( !v61 ) /*0x5d9ce8*/
            goto LABEL_152; /*0x5d9ce8*/
LABEL_150:
          if ( v61 == v55 + *(this + 2) ) /*0x5d9cfd*/
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
      if ( dword_B77E18 == 2 || MEMORY[0xA8E180] ) /*0x5d9d38*/
      {
        v43 |= 8u; /*0x5d9d3f*/
        Debug::Log(); /*0x5d9d42*/
      }
      return v43; /*0x5d9d4c*/
    }
  }
}


// ==== 0x005D9DB0  DetectPortAllocationPattern  this=int  sig=csp ====
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


// ==== 0x005DA040  Network_Connect  this=int  sig=csp ====
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


// ==== 0x005DA080  NetworkLobby::GetPlayerCount  this=int  sig=csp ====
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


// ==== 0x005DA0B0  Network::ResolveNetworkAddress  this=ScenarioClass  sig=csp ====
unsigned __int16 __thiscall Network_ResolveAddress(int *this, unsigned __int16 a2)
{
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
  int v15; // ebp
  int v16; // [esp+10h] [ebp-13Ch]
  DWORD Ticks; // [esp+14h] [ebp-138h]
  int v18; // [esp+20h] [ebp-12Ch]
  int v19; // [esp+24h] [ebp-128h] BYREF
  int v20; // [esp+2Ch] [ebp-120h]
  int v21; // [esp+30h] [ebp-11Ch]
  unsigned __int16 v22[8]; // [esp+34h] [ebp-118h] BYREF
  char name[256]; // [esp+4Ch] [ebp-100h] BYREF

  Timer::GetTicks(); /*0x5da0c0*/
  v16 = *this; /*0x5da0d6*/
  if ( !*this ) /*0x5da0c9*/
    return a2; /*0x5da0ee*/
  if ( (*this & 1) != 0 ) /*0x5da0f3*/
    return a2; /*0x5da107*/
  v4 = 4321; /*0x5da11e*/
  strcpy(name, MEMORY[0x8311EC]); /*0x5da12c*/
  if ( dword_B77E1C > 0 ) /*0x5da13c*/
  {
    v4 = dword_B76338[dword_B77E20]; /*0x5da169*/
    strcpy(name, &MEMORY[0xB73E44][128 * dword_B77E20]); /*0x5da174*/
    Debug::Log(); /*0x5da17d*/
  }
  Debug::Log(); /*0x5da18f*/
  v5 = gethostbyname(name); /*0x5da19c*/
  if ( !v5 ) /*0x5da1a3*/
  {
    WSAGetLastError(); /*0x5da1a5*/
    Debug::Log(); /*0x5da1b0*/
    return a2; /*0x5da1ca*/
  }
  v19 = **(_DWORD **)v5->h_addr_list; /*0x5da1dd*/
  Debug::Log(); /*0x5da20d*/
  Waypoint::InitInvalid(v22); /*0x5da219*/
  Struct::Copy6Bytes((char *)v22, (int)&v19); /*0x5da227*/
  Network::SetPort(v22, v4); /*0x5da231*/
  Network::FormatAddress(v22, 0); /*0x5da23c*/
  Debug::Log(); /*0x5da247*/
  v6 = 0; /*0x5da250*/
  v18 = 0; /*0x5da258*/
  Debug::Log(); /*0x5da25c*/
  v20 = v16 & 4; /*0x5da26b*/
  if ( (v16 & 4) != 0 ) /*0x5da26f*/
  {
    v7 = 255; /*0x5da275*/
    while ( 1 ) /*0x5da283*/
    {
      v8 = this->Items + 1; /*0x5da283*/
      this->Items = v8; /*0x5da285*/
      LOWORD(v6) = v8; /*0x5da28d*/
      if ( v8 > 0xFFFF ) /*0x5da290*/
        this->Items = 2048; /*0x5da292*/
      v9 = MEMORY[0x887628]; /*0x5da295*/
      if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5da2a6*/
        break; /*0x5da2a6*/
      if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)MEMORY[0x887628] + 104))(v6) ) /*0x5da2ab*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v6); /*0x5da2c4*/
LABEL_19:
        v9 = MEMORY[0x887628]; /*0x5da2c7*/
        break; /*0x5da2c7*/
      }
      if ( !v7-- ) /*0x5da2b2*/
        goto LABEL_19; /*0x5da2b7*/
    }
    v18 = v6; /*0x5da2cd*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v9 + 104))(v9, v6) ) /*0x5da2d4*/
      return a2; /*0x5da2ed*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x5da2f8*/
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
    Network::QueryAddress(v22, v6, MEMORY[0x830CA8], 0); /*0x5da368*/
    v12 = Network::WaitForPacket(MEMORY[0x830CA8], 30); /*0x5da37c*/
    Debug::Log(); /*0x5da38c*/
    v11 = 180; /*0x5da391*/
  }
  ++MEMORY[0x830CA8]; /*0x5da39a*/
  if ( (_WORD)v18 ) /*0x5da3ae*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v18); /*0x5da3b9*/
  if ( v12 ) /*0x5da3bf*/
  {
    if ( v20 ) /*0x5da3e9*/
    {
      if ( (v16 & 0x10) != 0 ) /*0x5da415*/
      {
        v14 = v12 + this->q002; /*0x5da420*/
      }
      else
      {
        v15 = this->q002; /*0x5da424*/
        if ( v15 == 100 ) /*0x5da42a*/
          v14 = v12 - v21 + a2 + 100; /*0x5da445*/
        else
          v14 = a2 % v15 + v15 * (v12 / v15 + 1); /*0x5da46a*/
      }
      if ( v14 > 0xFFFF ) /*0x5da472*/
        v14 -= 0xFFFF; /*0x5da474*/
      if ( v14 < 1024 ) /*0x5da480*/
        LOWORD(v14) = v14 + 1024; /*0x5da482*/
      Debug::Log(); /*0x5da48e*/
      return v14; /*0x5da496*/
    }
    else
    {
      Debug::Log(); /*0x5da3f8*/
      return v12; /*0x5da400*/
    }
  }
  else
  {
    Debug::Log(); /*0x5da3c6*/
    return a2; /*0x5da3cb*/
  }
}


// ==== 0x005DA4B0  sub_5DA4B0  this=-  sig=ida-proto ====
int sub_5DA4B0()
{
  MEMORY[0xABFEF8] = 0; /*0x5da4b2*/
  MEMORY[0xABFEFC] = 0; /*0x5da4b7*/
  MEMORY[0xABFF00] = 0; /*0x5da4bc*/
  MEMORY[0xABFF04] = 0; /*0x5da4c1*/
  return 0; /*0x5da4c6*/
}


// ==== 0x005DA4D0  sub_5DA4D0  this=-  sig=ida-proto ====
void sub_5DA4D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5da4dc*/
  MEMORY[0xABFF10] = Math::Sqrt(v0 + v0); /*0x5da4ee*/
}


// ==== 0x005DA500  sub_5DA500  this=-  sig=ida-proto ====
void sub_5DA500()
{
  MEMORY[0xABFF60] = MEMORY[0xABFF10] / 60.0; /*0x5da50c*/
}


// ==== 0x005DA520  sub_5DA520  this=-  sig=ida-proto ====
void sub_5DA520()
{
  MEMORY[0xABFF48] = 1.0 / MEMORY[0xABFF60]; /*0x5da52c*/
}


// ==== 0x005DA540  sub_5DA540  this=-  sig=ida-proto ====
void sub_5DA540()
{
  MEMORY[0xABFF40] = 0.0174532925199433 * 45.0; /*0x5da54c*/
}


// ==== 0x005DA560  sub_5DA560  this=-  sig=ida-proto ====
void sub_5DA560()
{
  MEMORY[0xABFF18] = 0.0174532925199433 * 60.0; /*0x5da56c*/
}


// ==== 0x005DA580  sub_5DA580  this=-  sig=ida-proto ====
void sub_5DA580()
{
  MEMORY[0xABFEF0] = 0.0174532925199433 * 90.0; /*0x5da58c*/
}


// ==== 0x005DA5A0  sub_5DA5A0  this=-  sig=ida-proto ====
__int64 sub_5DA5A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFEF0] - MEMORY[0xABFF18]); /*0x5da5b2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFF10] * 0.5); /*0x5da5c6*/
  MEMORY[0xABFF68] = result; /*0x5da5cb*/
  return result; /*0x5da5d0*/
}


// ==== 0x005DA5E0  sub_5DA5E0  this=-  sig=ida-proto ====
void sub_5DA5E0()
{
  MEMORY[0xABFF20] = Math::ArcTan((double)MEMORY[0xABFF68] * 0.00390625); /*0x5da5f7*/
}


// ==== 0x005DA610  sub_5DA610  this=-  sig=ida-proto ====
void sub_5DA610()
{
  MEMORY[0xABFF38] = Math::ArcTan((double)(2 * MEMORY[0xABFF68]) / MEMORY[0xABFF10]); /*0x5da632*/
}


// ==== 0x005DA640  sub_5DA640  this=-  sig=ida-proto ====
__int64 sub_5DA640()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFF68]) + 0.5); /*0x5da65b*/
  MEMORY[0xABFF5C] = result; /*0x5da660*/
  return result; /*0x5da666*/
}


// ==== 0x005DA670  sub_5DA670  this=-  sig=ida-proto ====
int sub_5DA670()
{
  MEMORY[0xABFF08] = 0; /*0x5da672*/
  MEMORY[0xABFF0A] = 0; /*0x5da678*/
  return 0; /*0x5da67e*/
}


// ==== 0x005DA680  sub_5DA680  this=-  sig=ida-proto ====
int sub_5DA680()
{
  MEMORY[0xABFF28] = 0; /*0x5da682*/
  MEMORY[0xABFF2C] = 0; /*0x5da687*/
  MEMORY[0xABFF30] = 0; /*0x5da68c*/
  return 0; /*0x5da691*/
}


// ==== 0x005DA6A0  sub_5DA6A0  this=-  sig=ida-proto ====
int sub_5DA6A0()
{
  MEMORY[0xABFF58] = 0; /*0x5da6a5*/
  MEMORY[0xABFF50] = 128; /*0x5da6af*/
  MEMORY[0xABFF54] = 128; /*0x5da6b4*/
  return 128; /*0x5da6b9*/
}


// ==== 0x005DA6C0  Network_Init_5DA6C0  this=-  sig=ida-proto ====
char sub_5DA6C0()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !Network_Init((int)MEMORY[0xA8E9C0]) ) /*0x5da6c8*/
    return 0; /*0x5da6d1*/
  if ( MEMORY[0xA8B238][0] != 4 ) /*0x5da6de*/
  {
    if ( MEMORY[0xA8D5FC] ) /*0x5da6e7*/
    {
      Network::CopyAddress(&MEMORY[0xA8D600], &v1, (int)v2); /*0x5da6f8*/
      Network_Init_542FC0(MEMORY[0xA8E9C0], (int)&v1); /*0x5da707*/
    }
  }
  return 1; /*0x5da6d3*/
}


// ==== 0x005DA720  Network::ShutdownInterface  this=Network  sig=csp ====
int Network::ShutdownInterface()
{
  int result; // eax

  MEMORY[0xA8D610][0] = 0; /*0x5da72b*/
  if ( MEMORY[0x887628] ) /*0x5da732*/
    result = (**(int (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x5da738*/
  MEMORY[0x887628] = 0; /*0x5da73a*/
  return result; /*0x5da740*/
}


// ==== 0x005DA750  HandleNetworkPlayerDisconnect  this=int  sig=ida-proto ====
void __fastcall HandleNetworkPlayerDisconnect(wchar_t *a1, int a2)
{
  wchar_t *v2; // ebp
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
  char *v17; // eax
  int v18; // eax
  wchar_t *StringCSF; // [esp-8h] [ebp-134h]
  wchar_t *v20; // [esp-8h] [ebp-134h]
  CampaignScore *_0; // [esp+0h] [ebp-12Ch]
  wchar_t *v21; // [esp+Ch] [ebp-120h] BYREF
  int aP1_4; // [esp+10h] [ebp-11Ch]
  int v24[2]; // [esp+14h] [ebp-118h] BYREF
  wchar_t String[80]; // [esp+1Ch] [ebp-110h] BYREF
  char v26[112]; // [esp+BCh] [ebp-70h] BYREF

  v2 = a1; /*0x5da75d*/
  v4 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)a1]; /*0x5da762*/
  v21 = a1; /*0x5da76c*/
  if ( HouseClass_Player.__pad_5568[23232] ) /*0x5da770*/
    Debug::Log(); /*0x5da77f*/
  if ( !v4 || !*(_BYTE *)(v4 + 492) ) /*0x5da78f*/
    return; /*0x5da797*/
  String[0] = 0; /*0x5da7a0*/
  if ( a2 == 1 ) /*0x5da7a7*/
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[76], 0, &stru_830620.__pad_BC0[52], 464); /*0x5da7c6*/
    swprintf(String, (const size_t)StringCSF, (const wchar_t *const)(v4 + 90154), _0); /*0x5da7cc*/
  }
  else if ( !a2 ) /*0x5da7d0*/
  {
    v20 = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[36], 0, &stru_830620.__pad_BC0[52], 466); /*0x5da7f3*/
    swprintf(String, (const size_t)v20, (const wchar_t *const)(v4 + 90154), _0); /*0x5da7f5*/
  }
  if ( wcslen(String) ) /*0x5da802*/
  {
    v5 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x5da822*/
    MessageListClass::AddMessage( /*0x5da845*/
      &HouseClass_Player.__pad_5568[10668],
      0,
      0,
      (CellStruct *)String,
      *(_DWORD *)(*(_DWORD *)(v4 + 52) + 192),
      (IUnknown *)0x4046,
      v5,
      0);
    MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0); /*0x5da851*/
  }
  Network::sendData((int)&HouseClass_Player.__pad_5568[22284], (AnimClass *)v2); /*0x5da85d*/
  if ( a2 ) /*0x5da864*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] ) /*0x5da871*/
    {
      v6 = EventClass::Add2(v26, *(AnimClass **)(HouseClass_Player.field_0 + 48), 0x23u, (IUnknown *)v2); /*0x5da893*/
      if ( Networking_LastEventIndex < 128 ) /*0x5da8a2*/
      {
        qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v6, 0x6Fu); /*0x5da8c2*/
        g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x5da8d3*/
        Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x5da8ea*/
        ++Networking_LastEventIndex; /*0x5da8f0*/
      }
    }
    else
    {
      Network::SendOffer(v4); /*0x5da875*/
    }
LABEL_21:
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5da940*/
    {
      if ( HouseClass_Player.__pad_5568[18668] ) /*0x5da94d*/
      {
        if ( SessionClass::IsValidHouse((int)&HouseClass_Player.__pad_5568[8068], (#375 *)v4) ) /*0x5da959*/
        {
          HouseClass_Player.__pad_5568[20508] = 1; /*0x5da96b*/
          v7 = EventClass::validateEventType((int *)&g_NetworkEventQueue); /*0x5da972*/
          v8 = v7; /*0x5da977*/
          if ( v7 != -1 ) /*0x5da97c*/
          {
            v9 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v7]; /*0x5da987*/
            aP1_4 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v8]; /*0x5da98c*/
            if ( v9 ) /*0x5da990*/
            {
              if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 2 ) /*0x5da99f*/
              {
                v10 = 0; /*0x5da9a5*/
                v11 = 0; /*0x5da9a7*/
                if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5da9ab*/
                {
                  v12 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x5da9b3*/
                  while ( *(_DWORD *)(*(_DWORD *)v12 + 111) != v8 ) /*0x5da9ba*/
                  {
                    ++v11; /*0x5da9bc*/
                    v12 += 4; /*0x5da9bd*/
                    if ( v11 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5da9c2*/
                      goto LABEL_33; /*0x5da9c2*/
                  }
                  v10 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v11) + 40); /*0x5da9d1*/
                  *(_WORD *)&HouseClass_Player.__pad_5568[18696] = *(_WORD *)&HouseClass_Player.__pad_5568[2 * v11 + 20478]; /*0x5da9d4*/
LABEL_33:
                  v2 = v21; /*0x5da9db*/
                }
                Network::CopyAddress(v10, &v21, (int)v24); /*0x5da9e9*/
                NetworkID::Assign(&HouseClass_Player.__pad_5568[18672], (IPXManagerClass *)&v21, (int)v24, 0); /*0x5da9ff*/
                Network::FormatAddress((unsigned __int16 *)&HouseClass_Player.__pad_5568[18672], 0); /*0x5daa0b*/
                Debug::Log(); /*0x5daa16*/
                Debug::Log(); /*0x5daa2d*/
                Network::SetPlayerCoords( /*0x5daa3f*/
                  &HouseClass_Player.__pad_5568[22284],
                  (IPXManagerClass *)&HouseClass_Player.__pad_5568[18672]);
                v9 = aP1_4; /*0x5daa44*/
              }
              wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[20388], (const wchar_t *)(v9 + 90154)); /*0x5daa53*/
              Debug::Log(); /*0x5daa62*/
              *(_DWORD *)&HouseClass_Player.__pad_5568[20472] = v8; /*0x5daa6f*/
              if ( SessionClass::IsValidHouse((int)&HouseClass_Player.__pad_5568[8068], 0) ) /*0x5daa77*/
                Network::SendMasterPlayerList((int)&g_NetworkEventQueue); /*0x5daa85*/
            }
          }
        }
      }
    }
    goto LABEL_37; /*0x5daa85*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5da8fe*/
  {
    if ( !dword_B779C4 || (Network::SendOffer(v4), *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4) ) /*0x5da91b*/
    {
      if ( HouseClass_Player.__pad_5568[18668] ) /*0x5da928*/
      {
        NetworkManager::RemovePlayer((int)&g_NetworkEventQueue, (AnimClass *)v2); /*0x5da934*/
        goto LABEL_21; /*0x5da934*/
      }
    }
  }
LABEL_37:
  v13 = 0; /*0x5daa8a*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5daa94*/
  {
    v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x5daa9a*/
    v15 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x5daaa0*/
    while ( *(wchar_t **)(*(_DWORD *)v15 + 111) != v2 ) /*0x5daaa7*/
    {
      ++v13; /*0x5daaa9*/
      v15 += 4; /*0x5daaaa*/
      if ( v13 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5daaaf*/
        goto LABEL_54; /*0x5daaaf*/
    }
    v16 = 0; /*0x5daab9*/
    v17 = &HouseClass_Player.__pad_5568[18396]; /*0x5daabb*/
    while ( *(_DWORD *)v17 != *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v13) ) /*0x5daac2*/
    {
      v17 += 4; /*0x5daac4*/
      ++v16; /*0x5daac7*/
      if ( (int)v17 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x5daacd*/
        goto LABEL_47; /*0x5daacd*/
    }
    *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v16 + 18396] = *(&g_MatrixTransformState + 2275); /*0x5daad6*/
    v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x5daadd*/
LABEL_47:
    __3_YAXPAX_Z(*(void **)(v14 + 4 * v13)); /*0x5daae3*/
    v18 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 16))( /*0x5dab03*/
            &HouseClass_Player.__pad_5568[18368],
            *(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v13);
    if ( v18 != -1 && v18 < *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5dab13*/
    {
      --*(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5dab18*/
      for ( ; /*0x5dab1e*/
            v18 < *(int *)&HouseClass_Player.__pad_5568[18384];
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v18 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v18) )
      {
        ++v18; /*0x5dab26*/
      }
    }
    Network_Disconnect_69BBF0(&HouseClass_Player.__pad_5568[8068], v13); /*0x5dab3e*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5dab4a*/
    {
      if ( HouseClass_Player.__pad_5568[18668] ) /*0x5dab53*/
        NetworkManager::RemovePlayer((int)&g_NetworkEventQueue, (AnimClass *)v2); /*0x5dab5b*/
    }
  }
LABEL_54:
  --*(_DWORD *)&HouseClass_Player.__pad_5568[8856]; /*0x5dab60*/
}


// ==== 0x005DAB80  ObjectClass::method_5DAB80  this=ObjectClass  sig=csp ====
int __thiscall sub_5DAB80(const char *this)
{
  unsigned int i; // esi
  int v3; // [esp+8h] [ebp-54h] BYREF
  char String[80]; // [esp+Ch] [ebp-50h] BYREF

  v3 = 0; /*0x5dab96*/
  strcpy(String, this); /*0x5daba7*/
  _strupr(String); /*0x5dabb5*/
  for ( i = 0; i < strlen(String); ++i ) /*0x5dabc8*/
    ComputeHash(&v3, String[i]); /*0x5dabd8*/
  return v3; /*0x5dabf4*/
}


// ==== 0x005DAC00  WideString::Hash  this=CampaignScore  sig=csp ====
int __thiscall WideString::Hash(wchar_t *Source)
{
  size_t v1; // esi
  wchar_t *v2; // edi
  int v4; // [esp+4h] [ebp-A4h] BYREF
  wchar_t String[80]; // [esp+8h] [ebp-A0h] BYREF

  v1 = 0; /*0x5dac0b*/
  v4 = 0; /*0x5dac0f*/
  wcscpy(String, Source); /*0x5dac13*/
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
  MEMORY[0xAC01A8] = 0; /*0x5dacd2*/
  MEMORY[0xAC01AC] = 0; /*0x5dacd7*/
  MEMORY[0xAC01B0] = 0; /*0x5dacdc*/
  MEMORY[0xAC01B4] = 0; /*0x5dace1*/
  return 0; /*0x5dace6*/
}


// ==== 0x005DACF0  sub_5DACF0  this=-  sig=ida-proto ====
void sub_5DACF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5dacfc*/
  MEMORY[0xAC01C0] = Math::Sqrt(v0 + v0); /*0x5dad0e*/
}


// ==== 0x005DAD20  sub_5DAD20  this=-  sig=ida-proto ====
void sub_5DAD20()
{
  MEMORY[0xAC0250] = MEMORY[0xAC01C0] / 60.0; /*0x5dad2c*/
}


// ==== 0x005DAD40  sub_5DAD40  this=-  sig=ida-proto ====
void sub_5DAD40()
{
  MEMORY[0xAC0218] = 1.0 / MEMORY[0xAC0250]; /*0x5dad4c*/
}


// ==== 0x005DAD60  sub_5DAD60  this=-  sig=ida-proto ====
void sub_5DAD60()
{
  MEMORY[0xAC0210] = 0.0174532925199433 * 45.0; /*0x5dad6c*/
}


// ==== 0x005DAD80  sub_5DAD80  this=-  sig=ida-proto ====
void sub_5DAD80()
{
  MEMORY[0xAC01C8] = 0.0174532925199433 * 60.0; /*0x5dad8c*/
}


// ==== 0x005DADA0  sub_5DADA0  this=-  sig=ida-proto ====
void sub_5DADA0()
{
  MEMORY[0xAC0198] = 0.0174532925199433 * 90.0; /*0x5dadac*/
}


// ==== 0x005DADC0  sub_5DADC0  this=-  sig=ida-proto ====
__int64 sub_5DADC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC0198] - MEMORY[0xAC01C8]); /*0x5dadd2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC01C0] * 0.5); /*0x5dade6*/
  MEMORY[0xAC0258] = result; /*0x5dadeb*/
  return result; /*0x5dadf0*/
}


// ==== 0x005DAE00  sub_5DAE00  this=-  sig=ida-proto ====
void sub_5DAE00()
{
  MEMORY[0xAC01D8] = Math::ArcTan((double)MEMORY[0xAC0258] * 0.00390625); /*0x5dae17*/
}


// ==== 0x005DAE30  sub_5DAE30  this=-  sig=ida-proto ====
void sub_5DAE30()
{
  MEMORY[0xAC01F8] = Math::ArcTan((double)(2 * MEMORY[0xAC0258]) / MEMORY[0xAC01C0]); /*0x5dae52*/
}


// ==== 0x005DAE60  sub_5DAE60  this=-  sig=ida-proto ====
__int64 sub_5DAE60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC0258]) + 0.5); /*0x5dae7b*/
  MEMORY[0xAC024C] = result; /*0x5dae80*/
  return result; /*0x5dae86*/
}


// ==== 0x005DAE90  sub_5DAE90  this=-  sig=ida-proto ====
int sub_5DAE90()
{
  MEMORY[0xAC01B8] = 0; /*0x5dae92*/
  MEMORY[0xAC01BA] = 0; /*0x5dae98*/
  return 0; /*0x5dae9e*/
}


// ==== 0x005DAEA0  sub_5DAEA0  this=-  sig=ida-proto ====
int sub_5DAEA0()
{
  MEMORY[0xAC01E8] = 0; /*0x5daea2*/
  MEMORY[0xAC01EC] = 0; /*0x5daea7*/
  MEMORY[0xAC01F0] = 0; /*0x5daeac*/
  return 0; /*0x5daeb1*/
}


// ==== 0x005DAEC0  sub_5DAEC0  this=-  sig=ida-proto ====
int sub_5DAEC0()
{
  MEMORY[0xAC0248] = 0; /*0x5daec5*/
  MEMORY[0xAC0240] = 128; /*0x5daecf*/
  MEMORY[0xAC0244] = 128; /*0x5daed4*/
  return 128; /*0x5daed9*/
}


// ==== 0x005DAEE0  sub_5DAEE0  this=-  sig=ida-proto ====
int sub_5DAEE0()
{
  MEMORY[0xAC0230] = Timer::GetTicks(); /*0x5daeef*/
  MEMORY[0xAC0238] = 0; /*0x5daef4*/
  return atexit(nullsub_194); /*0x5daf04*/
}


// ==== 0x005DAF10  nullsub_194  this=-  sig=ida-proto ====
void __cdecl nullsub_194()
{
  ; /*0x5daf10*/
}


// ==== 0x005DAF20    this=-  sig=? ====
unsigned __int8 sub_5DAF20()
{
  Event::Dispatch(); /*0x5daf20*/
  NetworkLobby::MessageHandler(); /*0x5daf25*/
  return 0; /*0x5daf2c*/
}


// ==== 0x005DAF30  ObjectClass::PlayerSkirmishSlotHandler_Handle  this=ObjectClass  sig=csp ====
void sub_5DAF30()
{
  int v0; // edi
  int i; // esi
  _DWORD v2[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v3; // [esp+1CCh] [ebp-4h]
  char v4; // [esp+1CEh] [ebp-2h]

  memset(v2, 0, sizeof(v2)); /*0x5daf47*/
  v3 = 0; /*0x5daf49*/
  v4 = 0; /*0x5daf4b*/
  v2[0] = 22; /*0x5daf56*/
  strcpy((char *)&v2[1], MEMORY[0xA8B380]); /*0x5daf6d*/
  Player::BuildListString((wchar_t *)((char *)&v2[11] + 3)); /*0x5daf7a*/
  v0 = MEMORY[0xA8DA84]; /*0x5daf7f*/
  for ( i = 1; i < v0; ++i ) /*0x5daf8c*/
  {
    Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v2, 455, 1, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40, 0, 0); /*0x5dafb0*/
    Event::Dispatch(); /*0x5dafb5*/
  }
}


// ==== 0x005DAFD0  RetVtableStubZero_eax_27  this=-  sig=ida-proto ====
void RetVtableStubZero_eax_27()
{
  GameSetup::DisplayPlayers(); /*0x5dafd2*/
}


// ==== 0x005DAFE0  GameSetup::DisplayPlayers  this=GameSetup  sig=csp ====
void __fastcall GameSetup::DisplayPlayers(char a1)
{
  HWND Current; // esi
  int CurrentType; // eax
  int v4; // eax
  HWND v5; // ebp
  HWND DlgItem; // eax
  HWND v7; // esi
  unsigned int v8; // eax
  int v9; // ecx
  char *v10; // eax
  signed int i; // edi
  int v12; // edi
  void *PlayerSide; // esi
  wchar_t *StringCSF; // eax
  int v15; // edx
  int v16; // esi
  unsigned int ebx42; // ebx
  unsigned int j; // eax
  CCINIClass *v17; // esi
  CCINIClass *v18; // edi
  wchar_t *v21; // ecx
  CCINIClass *v20; // ebx
  int v23; // esi
  CCINIClass *v22; // edi
  int v25; // ebp
  int v26; // esi
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  CampaignScore *v31; // [esp+0h] [ebp-274h]
  int v32; // [esp+10h] [ebp-264h]
  HWND hWnd; // [esp+14h] [ebp-260h]
  LPARAM v34; // [esp+18h] [ebp-25Ch] BYREF
  void *v35; // [esp+1Ch] [ebp-258h] BYREF
  void *v36[2]; // [esp+20h] [ebp-254h] BYREF
  int v37; // [esp+28h] [ebp-24Ch]
  void *Block; // [esp+30h] [ebp-244h] BYREF
  int v39; // [esp+34h] [ebp-240h]
  unsigned int v40; // [esp+38h] [ebp-23Ch]
  int v41; // [esp+3Ch] [ebp-238h]
  int v42; // [esp+40h] [ebp-234h]
  int v43; // [esp+44h] [ebp-230h]
  const wchar_t *(__thiscall *v44)(const wchar_t **); // [esp+48h] [ebp-22Ch]
  int v45; // [esp+50h] [ebp-224h]
  int var220; // [esp+54h] [ebp-220h]
  int v47; // [esp+58h] [ebp-21Ch]
  int v48; // [esp+5Ch] [ebp-218h]
  wchar_t *v46; // [esp+60h] [ebp-214h]
  WPARAM wParam; // [esp+68h] [ebp-20Ch]
  int Default; // [esp+6Ch] [ebp-208h]
  HWND v52; // [esp+70h] [ebp-204h]
  wchar_t Buffer[128]; // [esp+74h] [ebp-200h] BYREF
  wchar_t lParam[128]; // [esp+174h] [ebp-100h] BYREF

  Current = Dialog::GetCurrent(); /*0x5daff1*/
  CurrentType = Dialog::GetCurrentType(); /*0x5daff3*/
  if ( CurrentType == 188 || CurrentType == 189 ) /*0x5db008*/
  {
LABEL_15:
    RefreshLobbyAll(Current, a1); /*0x5db1a2*/
    return; /*0x5db1b5*/
  }
  for ( Current = (HWND)Dialog::FindByPtr(Current); Current; Current = (HWND)Dialog::FindByPtr(Current) ) /*0x5db019*/
  {
    v4 = GameSetup::LookupDialogHash(Current); /*0x5db01d*/
    if ( v4 == 188 || v4 == 189 ) /*0x5db032*/
      goto LABEL_15; /*0x5db032*/
  }
  v5 = Dialog::GetCurrent(); /*0x5db045*/
  DlgItem = GetDlgItem(v5, 1342); /*0x5db058*/
  v7 = DlgItem; /*0x5db05a*/
  v52 = DlgItem; /*0x5db05e*/
  if ( v5 && DlgItem ) /*0x5db06a*/
  {
    hWnd = GetDlgItem(v5, 1342); /*0x5db07c*/
    Gadget::InitProperties(&v34); /*0x5db080*/
    wParam = SendDlgItemMessageA(v5, 1342, 0x18Eu, 0, 0); /*0x5db0ab*/
    SendDlgItemMessageA(v5, 1342, 0x49Du, 0, 1); /*0x5db0af*/
    v8 = 128; /*0x5db0b1*/
    v45 = -1717986918; /*0x5db0b6*/
    var220 = 1070176665; /*0x5db0be*/
    v47 = -1717986918; /*0x5db0c6*/
    v48 = 1072273817; /*0x5db0ce*/
    v46 = (wchar_t *)128; /*0x5db0d6*/
    v9 = 0; /*0x5db0da*/
    do /*0x5db0df*/
    {
      ++v9; /*0x5db0dc*/
      v8 >>= 1; /*0x5db0dd*/
    }
    while ( v8 ); /*0x5db0df*/
    v42 = 0; /*0x5db0e1*/
    v41 = v9 - 1; /*0x5db0eb*/
    v39 = 0; /*0x5db0f1*/
    LOBYTE(v43) = 0; /*0x5db0f9*/
    v40 = 1 << (v9 - 1); /*0x5db0fe*/
    Block = (void *)__2_YAPAXI_Z(4 * v40); /*0x5db113*/
    memset(Block, 0, 4 * v40); /*0x5db117*/
    v44 = GameSetup::CompareWideString; /*0x5db122*/
    RehashGenericHashMap(v7, (int)&Block); /*0x5db12a*/
    SendDlgItemMessageA(v5, 1342, 0x184u, 0, 0); /*0x5db13e*/
    if ( *(&g_MatrixTransformState + 1300) ) /*0x5db147*/
    {
      v12 = 0; /*0x5db1bb*/
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5db1bf*/
      {
        do /*0x5db45d*/
        {
          if ( Render_Setup(v12) ) /*0x5db1cf*/
          {
            v32 = 2; /*0x5db1de*/
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v12) + 119) = 1; /*0x5db1e9*/
          }
          else
          {
            v32 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v12) + 119) != 0; /*0x5db202*/
          }
          swprintf( /*0x5db220*/
            lParam,
            (const size_t)&off_8240B4,
            *(const wchar_t *const *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v12),
            v31);
          PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] /*0x5db235*/
                                                                     + 4 * v12));
          Default = BuildingType::FindDefault(PlayerSide); /*0x5db241*/
          switch ( (unsigned int)PlayerSide ) /*0x5db24b*/
          {
            case 0u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[160], 0, &stru_830620.__pad_BC0[168], 398); /*0x5db263*/
              goto LABEL_32; /*0x5db263*/
            case 1u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[160], 0, &stru_830620.__pad_BC0[168], 401); /*0x5db276*/
              goto LABEL_32; /*0x5db276*/
            case 2u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[160], 0, &stru_830620.__pad_BC0[168], 404); /*0x5db289*/
              goto LABEL_32; /*0x5db289*/
            case 3u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[160], 0, &stru_830620.__pad_BC0[168], 407); /*0x5db29f*/
              goto LABEL_32; /*0x5db29f*/
            case 4u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[160], 0, &stru_830620.__pad_BC0[168], 410); /*0x5db2b2*/
              goto LABEL_32; /*0x5db2b2*/
            case 5u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[152], 0, &stru_830620.__pad_BC0[168], 413); /*0x5db2b9*/
              goto LABEL_32; /*0x5db2b9*/
            case 6u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[152], 0, &stru_830620.__pad_BC0[168], 416); /*0x5db2cc*/
              goto LABEL_32; /*0x5db2cc*/
            case 7u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[152], 0, &stru_830620.__pad_BC0[168], 419); /*0x5db2ef*/
              goto LABEL_32; /*0x5db2ef*/
            case 8u: /*0x5db24b*/
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[152], 0, &stru_830620.__pad_BC0[168], 422); /*0x5db312*/
LABEL_32:
              swprintf(Buffer, (const size_t)&off_8240B4, StringCSF, v31); /*0x5db317*/
              break; /*0x5db322*/
            default:
              break;
          }
          SendMessageA(hWnd, 0x4CCu, 0xFFFFFFFF, (LPARAM)lParam); /*0x5db32a*/
          v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v12) + 83); /*0x5db351*/
          v34 = 4; /*0x5db358*/
          v36[1] = *(void **)&stru_830620.__pad_DFC[4 * v15 + 652]; /*0x5db367*/
          WideString::Reassign(v36, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x5db36b*/
          v16 = (unsigned __int16)v12 << 16; /*0x5db384*/
          SendDlgItemMessageA( /*0x5db39a*/
            v5,
            1342,
            0x4A8u,
            v16 | *((unsigned __int16 *)&g_MatrixTransformState + 2504),
            (LPARAM)&v34);
          v34 = 2; /*0x5db3a5*/
          WideString::Reassign(v36, Buffer); /*0x5db3ad*/
          v37 = Default; /*0x5db3d5*/
          SendDlgItemMessageA( /*0x5db3d9*/
            v5,
            1342,
            0x4A8u,
            v16 | *((unsigned __int16 *)&g_MatrixTransformState + 2528),
            (LPARAM)&v34);
          WideString::Reassign(v36, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x5db3e4*/
          v34 = 2; /*0x5db3e9*/
          if ( v32 == 2 ) /*0x5db3f8*/
          {
            v37 = HashTable::Find(&g_MatrixTransformState + 5774, g_Str_File_wolhost_pcx, 0); /*0x5db40b*/
          }
          else if ( v32 ) /*0x5db413*/
          {
            v37 = HashTable::Find(&g_MatrixTransformState + 5774, g_Str_File_wolacpt_pcx, 0); /*0x5db426*/
          }
          else
          {
            v34 = 0; /*0x5db42c*/
          }
          SendDlgItemMessageA( /*0x5db453*/
            v5,
            1342,
            0x4A8u,
            v16 | *((unsigned __int16 *)&g_MatrixTransformState + 2536),
            (LPARAM)&v34);
          ++v12; /*0x5db45a*/
        }
        while ( v12 < *(int *)&HouseClass_Player.__pad_5568[18384] ); /*0x5db45d*/
        v7 = v52; /*0x5db463*/
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x5db46f*/
        (*(void (__thiscall **)(_DWORD, HWND))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 120))( /*0x5db474*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8072],
          v5);
    }
    else
    {
      v10 = CharToWideString(&HouseClass_Player.__pad_5568[8396]); /*0x5db14e*/
      SendMessageA(hWnd, 0x4CCu, 0, (LPARAM)v10); /*0x5db160*/
      for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18336]; ++i ) /*0x5db172*/
        SendMessageA(hWnd, 0x4CCu, i, *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * i)); /*0x5db18d*/
    }
    ProcessComboBoxAddString(v7, (int)&Block); /*0x5db47d*/
    SendDlgItemMessageA(v5, 1342, 0x197u, wParam, 0); /*0x5db494*/
    SendDlgItemMessageA(v5, 1342, 0x49Du, 0, 0); /*0x5db4a5*/
    InvalidateRect(v7, 0, 0); /*0x5db4ac*/
    UpdateWindow(v7); /*0x5db4b3*/
    ebx42 = 0; /*0x5db4b9*/
    for ( j = v40; ebx42 < v40; j = v40 ) /*0x5db4c1*/
    {
      v17 = (CCINIClass *)*((_DWORD *)Block + ebx42); /*0x5db4c7*/
      while ( v17 ) /*0x5db4cc*/
      {
        v18 = v17; /*0x5db4ce*/
        v17 = (CCINIClass *)v17->headNode[1]; /*0x5db4d0*/
        DeleteAndZero::Alt((void **)v18); /*0x5db4d9*/
        __3_YAXPAX_Z(v18); /*0x5db4df*/
      }
      *((_DWORD *)Block + ebx42++) = 0; /*0x5db4f0*/
    }
    v21 = v46; /*0x5db500*/
    v39 = 0; /*0x5db504*/
    if ( j > (unsigned int)v46 ) /*0x5db50e*/
    {
      do /*0x5db5a8*/
      {
        if ( (_BYTE)v43 || j <= (unsigned int)v21 ) /*0x5db522*/
          break; /*0x5db522*/
        v20 = (CCINIClass *)Block; /*0x5db52c*/
        v23 = j; /*0x5db530*/
        v40 = j >> 1; /*0x5db534*/
        --v41; /*0x5db53d*/
        Block = (void *)__2_YAPAXI_Z(4 * (j >> 1)); /*0x5db551*/
        memset(Block, 0, 4 * v40); /*0x5db557*/
        if ( v23 > 0 ) /*0x5db559*/
        {
          v22 = v20; /*0x5db55b*/
          v25 = v23; /*0x5db55d*/
          do /*0x5db593*/
          {
            v26 = *(_DWORD *)v22->__pad_0; /*0x5db55f*/
            if ( *(_DWORD *)v22->__pad_0 ) /*0x5db55f*/
            {
              do /*0x5db58d*/
              {
                v27 = (int)v44((const wchar_t **)v26); /*0x5db567*/
                v28 = v27 & ((1 << v41) - 1); /*0x5db577*/
                v29 = *((_DWORD *)Block + v28); /*0x5db57d*/
                *((_DWORD *)Block + v28) = v26; /*0x5db580*/
                v30 = *(_DWORD *)(v26 + 8); /*0x5db583*/
                *(_DWORD *)(v26 + 8) = v29; /*0x5db586*/
                v26 = v30; /*0x5db58b*/
              }
              while ( v30 ); /*0x5db58d*/
            }
            v22 = (CCINIClass *)((char *)v22 + 4); /*0x5db58f*/
            --v25; /*0x5db592*/
          }
          while ( v25 ); /*0x5db593*/
        }
        __3_YAXPAX_Z(v20); /*0x5db596*/
        v21 = v46; /*0x5db59b*/
        j = v40; /*0x5db59f*/
      }
      while ( v40 > (unsigned int)v46 ); /*0x5db5a8*/
    }
    __3_YAXPAX_Z(Block); /*0x5db5b3*/
    DeleteAndZero::Alt(v36); /*0x5db5bf*/
    DeleteAndZero::Alt(&v35); /*0x5db5c8*/
  }
}


// ==== 0x005DB600  ObjectClass::PlayerSkirmishSlotHandler_Handle_5DB600  this=int  sig=csp ====
int __thiscall sub_5DB600(void *this)
{
  memset(&MEMORY[0xA8D638], 0, 0x1C4u); /*0x5db611*/
  *(_WORD *)((char *)&MEMORY[0xA8D7FB] + 1) = 0; /*0x5db618*/
  HIBYTE(MEMORY[0xA8D7FB]) = 0; /*0x5db627*/
  MEMORY[0xA8D638] = 8; /*0x5db62d*/
  wcscpy(&MEMORY[0xA8D667], L"\x04"); /*0x5db637*/
  return Network::SendMessage((int)MEMORY[0xA8E9C0], (int)&MEMORY[0xA8D638], 455, 1, (int)this + 40, 0, 0); /*0x5db646*/
}


// ==== 0x005DB650  Map_Handle  this=int  sig=csp ====
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

  if ( !Network_Init(MEMORY[0xA8E9C0]) ) /*0x5db688*/
    return 0; /*0x5db691*/
  if ( MEMORY[0xA8B238][0] != 4 ) /*0x5db69e*/
  {
    if ( MEMORY[0xA8D5FC] ) /*0x5db6a7*/
    {
      Network::CopyAddress(&MEMORY[0xA8D600], &v1, (int)v2); /*0x5db6b8*/
      Network_Init_542FC0(&v1); /*0x5db6c7*/
    }
  }
  LoadNetworkShareStrings(); /*0x5db6cc*/
  Game::ResetFlags(); /*0x5db6d1*/
  Network::InitPlayerSlots(); /*0x5db6d6*/
  return 1; /*0x5db693*/
}


// ==== 0x005DB6F0  ObjectClass::WinMainSetup_Setup_5DB6F0  this=ObjectClass  sig=csp ====
int sub_5DB6F0()
{
  int result; // eax

  result = WinMainSetup_Setup_5DB6F0_Setup(); /*0x5db6f1*/
  MEMORY[0xA8D610][0] = 0; /*0x5db700*/
  if ( MEMORY[0x887628] ) /*0x5db707*/
    result = (**(int (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x5db70d*/
  MEMORY[0x887628] = 0; /*0x5db70f*/
  return result; /*0x5db715*/
}


// ==== 0x005DB720  ObjectClass::CheckNetworkGameTimeout  this=ObjectClass  sig=csp ====
int CheckNetworkGameTimeout()
{
  int result; // eax
  int v1; // ebp
  signed int i; // edi
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // esi
  DWORD Ticks; // eax
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  _DWORD v13[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v14; // [esp+1D4h] [ebp-4h]
  char v15; // [esp+1D6h] [ebp-2h]

  result = MEMORY[0xA8DA6C]; /*0x5db720*/
  v1 = 1; /*0x5db72c*/
  for ( i = 1; i < MEMORY[0xA8DA6C]; ++i ) /*0x5db737*/
  {
    if ( wcscmp(*(const wchar_t **)(MEMORY[0xA8DA60] + 4 * i), MEMORY[0xA8D610]) ) /*0x5db74b*/
    {
      v3 = MEMORY[0x887340]; /*0x5db760*/
      if ( MEMORY[0x887338] != -1 ) /*0x5db769*/
        v3 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5db77b*/
      if ( (unsigned int)(v3 - *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA60] + 4 * i) + 53)) > 0x12C ) /*0x5db78f*/
      {
        Debug::Log(); /*0x5db797*/
        __3_YAXPAX_Z(*(void **)(MEMORY[0xA8DA60] + 4 * i)); /*0x5db7a5*/
        v4 = (*(int (__thiscall **)(int *, int))(MEMORY[0xA8DA5C] + 16))(&MEMORY[0xA8DA5C], MEMORY[0xA8DA60] + 4 * i); /*0x5db7c1*/
        if ( v4 != -1 ) /*0x5db7c7*/
          Network_Check(v4); /*0x5db7cf*/
        NetworkLobby::UpdatePlayerList(); /*0x5db7d4*/
        if ( i <= (int)MEMORY[0xAC0260] ) /*0x5db7df*/
        {
          GameSetup::DisplayPlayers(); /*0x5db7e3*/
          SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db7f0*/
        }
      }
    }
    result = MEMORY[0xA8DA6C]; /*0x5db7f5*/
  }
  if ( MEMORY[0xA8DA54] > 1 ) /*0x5db809*/
  {
    do /*0x5db99b*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1) + 52) ) /*0x5db818*/
      {
        v5 = MEMORY[0x887340]; /*0x5db824*/
        if ( MEMORY[0x887338] != -1 ) /*0x5db82d*/
          v5 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5db83f*/
        *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1) + 52) = v5; /*0x5db849*/
      }
      v6 = MEMORY[0x887338]; /*0x5db84c*/
      v7 = MEMORY[0x887340]; /*0x5db852*/
      if ( MEMORY[0x887338] != -1 ) /*0x5db85b*/
      {
        Ticks = Timer::GetTicks(); /*0x5db862*/
        v6 = MEMORY[0x887338]; /*0x5db867*/
        v7 += Ticks - MEMORY[0x887338]; /*0x5db86f*/
      }
      if ( (unsigned int)(v7 - *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1) + 52)) <= 0x168 ) /*0x5db882*/
      {
        v10 = MEMORY[0x887340]; /*0x5db8e5*/
        if ( v6 != -1 ) /*0x5db8ee*/
          v10 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5db900*/
        v11 = MEMORY[0xA8DA48]; /*0x5db902*/
        v12 = *(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1); /*0x5db908*/
        if ( (unsigned int)(v10 - *(_DWORD *)(v12 + 52)) > 0x12C && !*(_BYTE *)(v12 + 56) ) /*0x5db916*/
        {
          memset(v13, 0, sizeof(v13)); /*0x5db92c*/
          v14 = 0; /*0x5db92e*/
          v15 = 0; /*0x5db930*/
          strcpy((char *)&v13[1], MEMORY[0xA8B380]); /*0x5db954*/
          v13[0] = 5; /*0x5db95d*/
          Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v13, 455, 0, *(_DWORD *)(v11 + 4 * v1) + 40, 0, 0); /*0x5db97d*/
          Event::Dispatch(); /*0x5db982*/
          *(_BYTE *)(*(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1) + 56) = 1; /*0x5db98f*/
        }
      }
      else
      {
        __3_YAXPAX_Z(*(void **)(MEMORY[0xA8DA48] + 4 * v1)); /*0x5db887*/
        v9 = (*(int (__thiscall **)(int *, int))(MEMORY[0xA8DA44] + 16))(&MEMORY[0xA8DA44], MEMORY[0xA8DA48] + 4 * v1); /*0x5db8a4*/
        if ( v9 != -1 && v9 < MEMORY[0xA8DA54] && v9 < --MEMORY[0xA8DA54] ) /*0x5db8bf*/
        {
          do /*0x5db8d7*/
          {
            ++v9; /*0x5db8c7*/
            *(_DWORD *)(MEMORY[0xA8DA48] + 4 * v9 - 4) = *(_DWORD *)(MEMORY[0xA8DA48] + 4 * v9); /*0x5db8cb*/
          }
          while ( v9 < MEMORY[0xA8DA54] ); /*0x5db8d7*/
        }
        GameSetup::DisplayPlayers(); /*0x5db8db*/
      }
      result = MEMORY[0xA8DA54]; /*0x5db993*/
      ++v1; /*0x5db998*/
    }
    while ( v1 < MEMORY[0xA8DA54] ); /*0x5db99b*/
  }
  return result; /*0x5db9a1*/
}


// ==== 0x005DB9B0  NetworkLobby::UpdatePlayerList  this=NetworkLobby  sig=ida-proto ====
int __usercall NetworkLobby::UpdatePlayerList@<eax>(CampaignScore *a1@<edi>)
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // ebp
  wchar_t *StringCSF; // eax
  int i; // ebx
  HWND v6; // esi
  wchar_t *v7; // [esp-18h] [ebp-BCh]
  int v8; // [esp-14h] [ebp-B8h]
  CampaignScore *v9; // [esp-10h] [ebp-B4h]
  LRESULT wParam; // [esp+0h] [ebp-A4h]
  wchar_t lParam[80]; // [esp+4h] [ebp-A0h] BYREF

  result = Dialog::GetCurrentType(); /*0x5db9b6*/
  if ( result == 187 ) /*0x5db9c0*/
  {
    v9 = a1; /*0x5db9c9*/
    Current = Dialog::GetCurrent(); /*0x5db9cf*/
    DlgItem = GetDlgItem(Current, 1353); /*0x5db9e3*/
    if ( (int)*(&g_MatrixTransformState + 1300) >= *(int *)&HouseClass_Player.__pad_5568[18360] ) /*0x5db9ec*/
    {
      *(&g_MatrixTransformState + 1300) = (CoordStruct *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18360] - 1); /*0x5db9fa*/
      SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db9ff*/
    }
    if ( (int)*(&g_MatrixTransformState + 1300) < 0 ) /*0x5dba0b*/
      *(&g_MatrixTransformState + 1300) = 0; /*0x5dba0d*/
    wParam = SendDlgItemMessageA(Current, 1353, 0x18Eu, 0, 0); /*0x5dba3d*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 1); /*0x5dba41*/
    SendMessageA(DlgItem, 0x184u, 0, 0); /*0x5dba53*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[272], 0, &stru_830620.__pad_BC0[168], 508); /*0x5dba66*/
    SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5dba74*/
    for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18360]; ++i ) /*0x5dba82*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i); /*0x5dba8c*/
      if ( *(_BYTE *)(v8 + 52) ) /*0x5dba8d*/
        v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[252], 0, &stru_830620.__pad_BC0[168], 514); /*0x5dbaae*/
      else
        v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[224], 0, &stru_830620.__pad_BC0[168], 516); /*0x5dbacc*/
      swprintf(lParam, (const size_t)v7, (const wchar_t *const)v8, v9); /*0x5dbab0*/
      SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)lParam); /*0x5dbae3*/
    }
    SendDlgItemMessageA(Current, 1353, 0x186u, (WPARAM)*(&g_MatrixTransformState + 1300), 0); /*0x5dbb07*/
    SendDlgItemMessageA(Current, 1353, 0x197u, wParam, 0); /*0x5dbb1b*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 0); /*0x5dbb2c*/
    v6 = GetDlgItem(Current, 1353); /*0x5dbb3a*/
    InvalidateRect(v6, 0, 0); /*0x5dbb41*/
    return UpdateWindow(v6); /*0x5dbb48*/
  }
  return result; /*0x5dbb52*/
}


// ==== 0x005DBB60  Game::BuildGameSettingsPacket  this=int  sig=csp ====
void __thiscall Game::BuildGameSettingsPacket(char *Buffer)
{
  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  int v4; // ebx
  SessionClass *v6; // esi
  char *esi13; // esi
  INIClass *v7; // [esp-20h] [ebp-48h]
  wchar_t *v8; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+18h] [ebp-10h] BYREF
  int Option; // [esp+1Ch] [ebp-Ch] BYREF
  char *v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+24h] [ebp-4h]

  v1 = Buffer; /*0x5dbb6a*/
  v12 = Buffer; /*0x5dbb70*/
  v13 = 0; /*0x5dbb74*/
  if ( &HouseClass_Player == (MouseClass *)-30166 ) /*0x5dbb7c*/
  {
    v2 = 4; /*0x5dbba5*/
    v3 = String::Assign((char **)&v10, &stru_87C374.__pad_579C[33876]); /*0x5dbbaa*/
  }
  else
  {
    WideString::Assign(&v8, (CampaignScore *)&HouseClass_Player.__pad_5568[8302]); /*0x5dbb83*/
    v2 = 3; /*0x5dbb90*/
    v3 = Game_Set((char **)&Option, (const wchar_t **)&v8); /*0x5dbb95*/
  }
  String::AssignFromPtr((char **)&v9, (const char **)v3); /*0x5dbbb4*/
  if ( (v2 & 4) != 0 ) /*0x5dbbbc*/
  {
    v2 &= ~4u; /*0x5dbbc2*/
    DeleteAndZero((int)&v10); /*0x5dbbc5*/
  }
  if ( (v2 & 2) != 0 ) /*0x5dbbcd*/
  {
    v2 &= ~2u; /*0x5dbbd3*/
    DeleteAndZero((int)&Option); /*0x5dbbd6*/
  }
  if ( (v2 & 1) != 0 ) /*0x5dbbde*/
    DeleteAndZero::Alt((void **)&v8); /*0x5dbbe4*/
  String::GetOrEmpty((char **)&v9); /*0x5dbc11*/
  sprintf(v1, (ObjectClass *)&stru_830620.__pad_BC0[384], *(INIClass **)&HouseClass_Player.__pad_5568[23264]); /*0x5dbc7e*/
  memset(&g_MatrixTransformState + 1121, 0, 0x200u); /*0x5dbc92*/
  v4 = 0; /*0x5dbc99*/
  v10 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5dbc9d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5dbca1*/
  {
    do /*0x5dbd16*/
    {
      v6 = *(SessionClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v4); /*0x5dbca8*/
      SessionClass::GetPlayerSide((int)v6); /*0x5dbcad*/
      SessionClass::GetPlayerColor((int)v6); /*0x5dbcb6*/
      Option = SessionClass::GetOption((int)v6); /*0x5dbcc6*/
      SessionClass::GetOption2((int)v6); /*0x5dbcca*/
      v7 = (INIClass *)ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v4)); /*0x5dbcf3*/
      sprintf( /*0x5dbd07*/
        (char *const)&g_MatrixTransformState + strlen((const char *)&g_MatrixTransformState + 4484) + 4484,
        (ObjectClass *)&stru_830620.__pad_BC0[356],
        v7);
      ++v4; /*0x5dbd13*/
    }
    while ( v4 < v10 ); /*0x5dbd16*/
    v1 = v12; /*0x5dbd18*/
  }
  *((_BYTE *)&g_MatrixTransformState + strlen((const char *)&g_MatrixTransformState + 4484) + 4483) = 58; /*0x5dbd2f*/
  strcat((char *)&g_MatrixTransformState + 4484, &stru_830620.__pad_BC0[352]); /*0x5dbd53*/
  esi13 = &HouseClass_Player.__pad_5568[8168]; /*0x5dbd5c*/
  do /*0x5dbda8*/
  {
    sprintf( /*0x5dbd97*/
      (char *const)&g_MatrixTransformState + strlen((const char *)&g_MatrixTransformState + 4484) + 4484,
      (ObjectClass *)&stru_830620.__pad_BC0[336],
      *((INIClass **)esi13 - 8));
    esi13 += 4; /*0x5dbd9c*/
  }
  while ( (int)esi13 < (int)&HouseClass_Player.__pad_5568[8200] ); /*0x5dbda8*/
  strlen((const char *)&g_MatrixTransformState + 4484); /*0x5dbdaf*/
  Debug::Log(); /*0x5dbdbf*/
  Debug::Log(); /*0x5dbdce*/
  strcat(v1, (const char *)&g_MatrixTransformState + 4484); /*0x5dbdf7*/
  DeleteAndZero((int)&v9); /*0x5dbe04*/
}


// ==== 0x005DBE20  SetGameSetupPlayerState  this=char*  sig=csp ====
void __fastcall SetGameSetupPlayerState(char *a1, int a2)
{
  char *v2; // edi
  int v3; // ebx
  HWND v4; // eax
  char *v5; // eax
  int v6; // esi
  char *v7; // eax

  v2 = a1; /*0x5dbe23*/
  v3 = a2; /*0x5dbe27*/
  if ( !a1 ) /*0x5dbe29*/
  {
    v2 = &HouseClass_Player.__pad_5568[8396]; /*0x5dbe2d*/
    if ( !a2 ) /*0x5dbe32*/
    {
      v4 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5dbe39*/
      EnablePlayerSlotControls(v4, 1); /*0x5dbe42*/
    }
  }
  v5 = CharToWideString(v2); /*0x5dbe4e*/
  if ( !wcscmp((const wchar_t *)v5, (const wchar_t *)&HouseClass_Player.__pad_5568[17244]) ) /*0x5dbe54*/
    v3 = 1; /*0x5dbe60*/
  v6 = 0; /*0x5dbe6a*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5dbe6e*/
  {
    while ( 1 ) /*0x5dbe79*/
    {
      v7 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6)); /*0x5dbe79*/
      if ( !_strcmpi(v7, v2) ) /*0x5dbe7f*/
        break; /*0x5dbe7f*/
      if ( ++v6 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5dbe93*/
      {
        GameSetup::DisplayPlayers(0); /*0x5dbe97*/
        return; /*0x5dbe9f*/
      }
    }
    if ( v6 != -1 ) /*0x5dbea3*/
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6) + 119) = v3; /*0x5dbeae*/
  }
  GameSetup::DisplayPlayers(0); /*0x5dbeb6*/
}


// ==== 0x005DBEC0  ObjectClass::SendMultiplayerStartSignal_Start  this=VOID_PTR  sig=csp ====
int __thiscall SendMultiplayerStartSignal_Start(char *this)
{
  char *v1; // ebx
  char *v2; // eax
  int v4; // edi
  int v5; // esi
  char *v6; // eax

  v1 = this; /*0x5dbec1*/
  if ( !this ) /*0x5dbec7*/
    v1 = &HouseClass_Player.__pad_5568[8396]; /*0x5dbec9*/
  v2 = CharToWideString(v1); /*0x5dbed5*/
  if ( !wcscmp((const wchar_t *)v2, (const wchar_t *)&HouseClass_Player.__pad_5568[17244]) ) /*0x5dbedb*/
    return 1; /*0x5dbee9*/
  v4 = -1; /*0x5dbef5*/
  v5 = 0; /*0x5dbef8*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 ) /*0x5dbefc*/
    return -1; /*0x5dbefc*/
  do /*0x5dbf23*/
  {
    v6 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v5)); /*0x5dbf07*/
    if ( !_strcmpi(v6, v1) ) /*0x5dbf0d*/
      v4 = v5; /*0x5dbf19*/
    ++v5; /*0x5dbf20*/
  }
  while ( v5 < *(int *)&HouseClass_Player.__pad_5568[18384] ); /*0x5dbf23*/
  if ( v4 == -1 ) /*0x5dbf28*/
    return -1; /*0x5dbf3c*/
  else
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v4) + 119); /*0x5dbf36*/
}


// ==== 0x005DBF50  UpdateMultiplayerPlayerOptions  this=int  sig=csp ====
int __fastcall UpdateMultiplayerPlayerOptions(CCINIClass *aP0, CCINIClass *aP1, CCINIClass *aP2, int a4, int a5)
{
  ObjectClass *v5; // edi
  ObjectClass *v7; // ebx
  SessionClass *v8; // esi
  char *v9; // eax
  ReferenceCounted *v11; // esi
  SessionClass *v12; // ebx
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
  int v25; // [esp+10h] [ebp-Ch]
  SessionClass *v27; // [esp+18h] [ebp-4h]

  v5 = (ObjectClass *)-1; /*0x5dbf57*/
  v7 = 0; /*0x5dbf60*/
  v8 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x5dbf62*/
  while ( 1 ) /*0x5dbf69*/
  {
    v9 = ToWideStringChar((IUnknown *)v8->GameMode[0]); /*0x5dbf69*/
    if ( !_strcmpi(v9, aP0) ) /*0x5dbf70*/
      break; /*0x5dbf70*/
    v8 = (SessionClass *)((char *)v8 + 4); /*0x5dbf7c*/
    v7 = (ObjectClass *)((char *)v7 + 1); /*0x5dbf7f*/
    if ( (int)v8 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x5dbf86*/
      goto LABEL_6; /*0x5dbf86*/
  }
  v5 = v7; /*0x5dbf8a*/
LABEL_6:
  v25 = 0; /*0x5dbf8c*/
  if ( v5 == (ObjectClass *)-1 ) /*0x5dbf97*/
    return 0; /*0x5dbf9c*/
  v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xBC); /*0x5dbfaf*/
  if ( !v11 ) /*0x5dbfb3*/
    v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xBD); /*0x5dbfbf*/
  v12 = *(SessionClass **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396]; /*0x5dbfc1*/
  v27 = v12; /*0x5dbfca*/
  if ( (CCINIClass *)SessionClass::GetPlayerSide((int)v12) != aP1 ) /*0x5dbfd9*/
  {
    v25 = 1; /*0x5dbfde*/
    SessionClass::SetPlayerOption((int)v12, (SkirmishDialog *)aP1); /*0x5dbfe6*/
  }
  if ( SessionClass::GetOption(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396]) != a4 ) /*0x5dbffd*/
  {
    v25 = 1; /*0x5dc002*/
    SessionClass::SetOption((int)v12, (SessionClass *)a4); /*0x5dc00a*/
  }
  if ( SessionClass::GetOption2(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396]) != a5 ) /*0x5dc021*/
  {
    v25 = 1; /*0x5dc026*/
    SessionClass::SetOption2((int)v12, (SessionClass *)a5); /*0x5dc02e*/
  }
  ResourceID2CSF = GetResourceID2CSF(v5); /*0x5dc03a*/
  v14 = GetComboBoxSelected(v11, ResourceID2CSF, 0xFFFFFFFF) == -3; /*0x5dc04a*/
  if ( aP1 == (CCINIClass *)-3 ) /*0x5dc050*/
  {
    if ( !v14 ) /*0x5dc054*/
    {
      SetupComboBoxObserver((HWND)v11, ResourceID2CSF); /*0x5dc05e*/
      ResourceID3CSF = GetResourceID3CSF(v5); /*0x5dc065*/
      SetupComboBoxRandomAlliance((HWND)v11, ResourceID3CSF); /*0x5dc06e*/
      ResourceID4CSF = GetResourceID4CSF(v5); /*0x5dc075*/
      InitComboBoxNone((HWND)v11, ResourceID4CSF); /*0x5dc07e*/
      v17 = PlayerSlot::IndexToDlgID(v5); /*0x5dc085*/
      DlgItem = GetDlgItem((HWND)v11, v17); /*0x5dc095*/
      SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5dc09c*/
      ResourceIDCSF = GetResourceIDCSF(v5); /*0x5dc0a9*/
      FillListBox((HWND)v11, ResourceIDCSF); /*0x5dc0af*/
      SetupSkirmishSpawnLocations((HWND)v11, ResourceIDCSF, 8); /*0x5dc0b6*/
    }
  }
  else if ( v14 ) /*0x5dc0ba*/
  {
    FillComboBoxRandomOnly((HWND)v11, ResourceID2CSF); /*0x5dc0c0*/
    v20 = GetResourceID3CSF(v5); /*0x5dc0c7*/
    FillComboBoxAllianceSlots((HWND)v11, v20); /*0x5dc0d0*/
    v21 = GetResourceID4CSF(v5); /*0x5dc0d7*/
    FillLobbyPlayerSlot((HWND)v11, v21); /*0x5dc0e0*/
    v22 = PlayerSlot::IndexToDlgID(v5); /*0x5dc0e7*/
    v23 = GetDlgItem((HWND)v11, v22); /*0x5dc0f7*/
    SendMessageA(v23, 0x4F1u, 0, 0); /*0x5dc0fe*/
    v24 = GetResourceIDCSF(v5); /*0x5dc10b*/
    FillComboBoxFactions((HWND)v11, v24); /*0x5dc111*/
    SetupSkirmishSpawnLocations((HWND)v11, v24, -2); /*0x5dc11c*/
  }
  if ( (CCINIClass *)SessionClass::GetPlayerColor(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396]) != aP2 ) /*0x5dc133*/
    SessionClass::SetPlayerColor((int)v27, (int)aP2); /*0x5dc13a*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396] == **(_DWORD **)&HouseClass_Player.__pad_5568[18372] ) /*0x5dc14e*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8416] = aP2; /*0x5dc150*/
  GameSetup::DisplayPlayers(0); /*0x5dc158*/
  return v25; /*0x5dbf99*/
}


// ==== 0x005DC170  NetworkLobby::ValidateSerialNumber  this=int  sig=csp ====
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
  if ( MEMORY[0x8313B0] ) /*0x5dc1d2*/
  {
    if ( strlen(MEMORY[0x8313B0]) ) /*0x5dc1da*/
    {
      strcpy(SubKey, MEMORY[0x8313B0]); /*0x5dc20b*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x5dc226*/
      {
        cbData = 128; /*0x5dc24b*/
        RegQueryValueExA(phkResult, MEMORY[0x8313A8], 0, &Type, Data, &cbData); /*0x5dc253*/
        RegCloseKey(phkResult); /*0x5dc25e*/
      }
    }
  }
  Data[22] = 0; /*0x5dc26d*/
  strcpy(this, (const char *)Data); /*0x5dc28b*/
  v2 = 0; /*0x5dc294*/
  v3 = fopen(MEMORY[0x831398], MEMORY[0x8313A4]); /*0x5dc296*/
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
char NetworkLobby::CreateGame()
{
  DLGTEMPLATE *DialogIndirect; // esi
  void (__stdcall *v1)(const MSG *); // edi
  void (__stdcall *v2)(const MSG *); // ebx
  int v3; // eax
  signed int v4; // esi
  signed int v5; // eax
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v8; // esi
  HWND DlgItem; // eax
  HWND v10; // eax
  DLGTEMPLATE *v11; // esi
  int m; // esi
  CellStruct *v14; // esi
  int eax33; // eax
  int n; // esi
  int v16; // esi
  int v17; // eax
  DLGTEMPLATE *v18; // esi
  HWND v19; // eax
  ObjectClass *v22; // esi
  HWND v21; // eax
  HWND eax64; // eax
  ObjectClass *v26; // esi
  HWND v24; // eax
  char v25; // bl
  wchar_t *eax71; // eax
  int v27; // esi
  char *v28; // eax
  char *v29; // eax
  int v30; // eax
  int v31; // ebp
  wchar_t *v32; // eax
  HWND v33; // eax
  HWND v34; // esi
  HWND v35; // eax
  CellStruct *v36; // ecx
  char *v37; // eax
  SkirmishDialog *PlayerOption; // eax
  int PlayerColor; // eax
  int v40; // eax
  int v41; // eax
  SessionClass *v44; // esi
  char *v43; // eax
  WinModemClass *v46; // edx
  int v45; // edi
  int eax115; // eax
  DLGTEMPLATE *v47; // esi
  int v48; // ebp
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  wchar_t *v52; // eax
  HWND v53; // eax
  HWND v54; // eax
  void (__stdcall *v55)(HWND, BOOL); // ebx
  int v56; // esi
  char v57; // cl
  wchar_t *v58; // eax
  HWND v59; // eax
  HWND v60; // eax
  SkirmishDialog *v63; // esi
  int PlayerCountMap; // eax
  wchar_t *eax138; // eax
  HWND v64; // eax
  HWND v65; // eax
  CampaignScore *v68; // eax
  HWND v67; // eax
  HWND eax140a; // eax
  HWND v69; // eax
  int v70; // ebx
  int i; // edi
  SessionClass *v74; // esi
  wchar_t *v73; // eax
  HWND eax157a; // eax
  HWND v75; // eax
  int v76; // eax
  int v77; // ecx
  wchar_t *v78; // eax
  HWND v79; // eax
  HWND v80; // eax
  int v82; // esi
  int v83; // esi
  int v84; // ecx
  SkirmishDialog *v87; // ebx
  int v86; // edi
  int j; // esi
  CellStruct *v88; // ecx
  ObjectClass *v90; // esi
  int eax194; // eax
  int v91; // ebx
  int v92; // esi
  int v93; // esi
  int v94; // eax
  int v95; // edi
  int k; // esi
  int v97; // eax
  CellStruct *v99; // esi
  int eax217; // eax
  int v100; // eax
  UINT *p_message; // ecx
  int v102; // esi
  int v103; // eax
  int v104; // [esp-8h] [ebp-3F4h]
  int v105; // [esp-4h] [ebp-3F0h]
  DWORD v106; // [esp+10h] [ebp-3DCh]
  DWORD v107; // [esp+10h] [ebp-3DCh]
  DWORD v108; // [esp+1Ch] [ebp-3D0h]
  DWORD Ticks; // [esp+1Ch] [ebp-3D0h]
  wchar_t *v110; // [esp+28h] [ebp-3C4h] BYREF
  SkirmishDialog *v111; // [esp+2Ch] [ebp-3C0h]
  struct tagMSG Msg; // [esp+30h] [ebp-3BCh] BYREF
  _DWORD v113[113]; // [esp+5Ch] [ebp-390h] BYREF
  __int16 v114; // [esp+220h] [ebp-1CCh]
  char v115; // [esp+222h] [ebp-1CAh]
  _DWORD v116[113]; // [esp+224h] [ebp-1C8h] BYREF
  __int16 v117; // [esp+3E8h] [ebp-4h]
  char v118; // [esp+3EAh] [ebp-2h]

  *(&g_MatrixTransformState + 1303) = (CoordStruct *)GameConfig::ComputeHash();
  LoadArtINI();
  *(&g_MatrixTransformState + 1304) = (CoordStruct *)unknown_libname_29();
  *(&g_MatrixTransformState + 1305) = (CoordStruct *)unknown_libname_30();
  NetworkLobby::ValidateSerialNumber((char *)&g_MatrixTransformState + 4460);
  Network::SetConnectionParams((int *)&HouseClass_Player.__pad_5568[22284], (IUnknown *)0x1E, -1, 600, (CellStruct *)1);
  HouseClass_Player.__pad_5568[17240] = 0;
  *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
  HouseClass_Player.__pad_5568[17242] = 1;
  *((_BYTE *)&g_MatrixTransformState + 5208) = 0;
  DialogClass::RegisterWinClasses();
  DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(
                                    g_hInstance,
                                    (HWND)0xBB,
                                    g_hWnd,
                                    (DLGPROC)NetworkSettings::DlgProc,
                                    0);
  SetupDialog((HWND)DialogIndirect, 187);
  ShowWindow((HWND)DialogIndirect, 1);
  GameSetup::DisplayPlayers(0);
  v1 = (void (__stdcall *)(const MSG *))TranslateMessage;
  v2 = (void (__stdcall *)(const MSG *))DispatchMessageA;
  v3 = 0;
  *(_QWORD *)(&g_MatrixTransformState + 1299) = 0;
  *(&g_MatrixTransformState + 1301) = 0;
  stru_830620.__pad_BC0[148] = 1;
  while ( 1 )
  {
    if ( !v3 )
    {
      do
      {
        Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
        Sleep(0);
        Event::Dispatch();
        Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
        ScreenSaver::Process(0, (int)v2, 0);
        ++unk_AA0430;
        while ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) )
        {
          v1(&Msg);
          v2(&Msg);
        }
        Event::Dispatch();
        v3 = (int)*(&g_MatrixTransformState + 1299);
        if ( *(&g_MatrixTransformState + 1299) )
          break;
        if ( Dialog::GetCurrent() )
        {
          SendNetworkHeartbeat(0, 0, 0, 0);
          NetworkLobby::MessageHandler();
          if ( Dialog::GetCurrentType() == 188 )
            CheckGameSettingsChanged(0, 0);
          CheckNetworkGameTimeout();
          v4 = (signed int)*(&g_MatrixTransformState + 1290);
          if ( *(&g_MatrixTransformState + 1288) != (CoordStruct *)-1 )
          {
            v5 = Timer::GetTicks() - (_DWORD)*(&g_MatrixTransformState + 1288);
            if ( v5 >= v4 )
              goto LABEL_13;
            v4 -= v5;
          }
          if ( !v4 )
          {
LABEL_13:
            if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)1 )
            {
              Debug::Log();
              BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
              *(&g_MatrixTransformState + 1301) = 0;
              SendNetworkHeartbeat(0, 0, 1, 0);
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[144], 0, &stru_830620.__pad_BC0[168], 1406);
              Dialog::ShowMessage(-1, (size_t)StringCSF);
              PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1712), 0x2000, 1.0, 0);
              Current = Dialog::GetCurrent();
              v8 = Current;
              if ( Current )
              {
                EnableWindow(Current, 1);
                DlgItem = GetDlgItem(v8, 1345);
                if ( DlgItem )
                  EnableWindow(DlgItem, 1);
              }
            }
          }
        }
        v3 = (int)*(&g_MatrixTransformState + 1299);
      }
      while ( !*(&g_MatrixTransformState + 1299) );
    }
    if ( v3 == 1472 || v3 == 2 )
      break;
LABEL_53:
    if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1741 )
    {
      HouseClass_Player.__pad_5568[17240] = 0;
      SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
      if ( SendNetworkJoinRequest((int)*(&g_MatrixTransformState + 1300), *(&g_MatrixTransformState + 2222) != 0) )
      {
        *(&g_MatrixTransformState + 1301) = (CoordStruct *)1;
      }
      else
      {
        v19 = Dialog::GetCurrent();
        v22 = (ObjectClass *)v19;
        if ( v19 )
        {
          EnableWindow(v19, 1);
          v21 = GetDlgItem((HWND)v22, 1345);
          if ( v21 )
            EnableWindow(v21, 1);
        }
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 36))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
    }
    if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1742 )
    {
      HouseClass_Player.__pad_5568[17240] = 0;
      SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
      if ( SendNetworkJoinRequest((int)*(&g_MatrixTransformState + 1300), 1u) )
      {
        *(&g_MatrixTransformState + 1301) = (CoordStruct *)1;
      }
      else
      {
        eax64 = Dialog::GetCurrent();
        v26 = (ObjectClass *)eax64;
        if ( eax64 )
        {
          EnableWindow(eax64, 1);
          v24 = GetDlgItem((HWND)v26, 1345);
          if ( v24 )
            EnableWindow(v24, 1);
        }
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 36))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
    }
    if ( *(&g_MatrixTransformState + 1299) != (CoordStruct *)1740 )
      goto LABEL_83;
    v25 = 1;
    if ( !strlen(&HouseClass_Player.__pad_5568[8396]) )
    {
      eax71 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[128], 0, &stru_830620.__pad_BC0[168], 1667);
      ShowDialogConfirm((CampaignScore *)eax71, 0, sub_5DAF20, 0);
      v25 = 0;
    }
    v27 = 0;
    if ( *(int *)&HouseClass_Player.__pad_5568[18360] > 0 )
    {
      while ( 1 )
      {
        if ( v25 )
        {
          v28 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v27));
          if ( !_strcmpi(v28, &HouseClass_Player.__pad_5568[8396]) )
            break;
        }
        if ( ++v27 >= *(int *)&HouseClass_Player.__pad_5568[18360] )
          goto LABEL_76;
      }
      v32 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[100], 0, &stru_830620.__pad_BC0[168], 1677);
      ShowDialogConfirm((CampaignScore *)v32, 0, sub_5DAF20, 0);
LABEL_80:
      v33 = Dialog::GetCurrent();
      v34 = v33;
      if ( v33 )
      {
        EnableWindow(v33, 1);
        v35 = GetDlgItem(v34, 1345);
        if ( v35 )
          EnableWindow(v35, 1);
      }
      goto LABEL_83;
    }
LABEL_76:
    if ( !v25 )
      goto LABEL_80;
    v29 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
    wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[17244], (const wchar_t *)v29);
    HouseClass_Player.__pad_5568[17242] = 1;
    HouseClass_Player.__pad_5568[17240] = 0;
    *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = 0;
    *(_DWORD *)&HouseClass_Player.__pad_5568[9744] = VersionInfo::Read((int)&HouseClass_Player.__pad_5568[23084]);
    LoadScenarioClassByIndex(*(int *)&HouseClass_Player.__pad_5568[8096]);
    CloseDialog(0, 0);
    *(&g_MatrixTransformState + 1299) = 0;
    PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
    v30 = __2_YAPAXI_Z(0x85u);
    v31 = v30;
    if ( v30 )
      Waypoint::InitInvalid((_BYTE *)(v30 + 40));
    else
      v31 = 0;
    memset((void *)v31, 0, 0x84u);
    *(_BYTE *)(v31 + 132) = 0;
    v37 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
    wcscpy((wchar_t *)v31, (const wchar_t *)v37);
    strcpy((char *)(v31 + 52), (const char *)&g_MatrixTransformState + 4460);
    PlayerOption = (SkirmishDialog *)Session::GetPlayerOption(&HouseClass_Player.__pad_5568[8068]);
    SessionClass::SetPlayerOption(v31, PlayerOption);
    PlayerColor = Session::GetPlayerColor(&HouseClass_Player.__pad_5568[8068]);
    SessionClass::SetPlayerColor(v31, PlayerColor);
    SessionClass::SetOption(v31, (SessionClass *)0xFFFFFFFE);
    SessionClass::SetOption2(v31, (SessionClass *)0xFFFFFFFE);
    *(_DWORD *)(v31 + 119) = 1;
    *(_DWORD *)(v31 + 107) = 0;
    *(_DWORD *)&stru_830620.__pad_DFC[648] = 7;
    if ( *((_BYTE *)&g_MatrixTransformState + 5209) )
    {
      *(_DWORD *)&stru_830620.__pad_DFC[648] = 0;
      *(_DWORD *)(v31 + 107) = -1;
    }
    else if ( SessionClass::GetPlayerSide(v31) == -3 )
    {
      SessionClass::SetPlayerOption(v31, (SkirmishDialog *)0xFFFFFFFE);
    }
    if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
      || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
      && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 8))(
           &HouseClass_Player.__pad_5568[18368],
           *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
           0) )
    {
      v40 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v40) = v31;
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 36))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
    Game::ResetFlags();
    Network::InitPlayerSlots();
    NetworkShare::GetField(0);
    if ( !*(_DWORD *)&stru_830620.__pad_DFC[648] )
    {
      SessionClass::SetPlayerOption(*(int *)&HouseClass_Player.__pad_5568[18396], (SkirmishDialog *)0xFFFFFFFD);
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18396] + 107) = -1;
    }
    *(&g_MatrixTransformState + 1301) = (CoordStruct *)2;
    v41 = __2_YAPAXI_Z(0x85u);
    v44 = (SessionClass *)v41;
    if ( v41 )
      Waypoint::InitInvalid((_BYTE *)(v41 + 40));
    else
      v44 = 0;
    v43 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
    wcscpy((wchar_t *)v44, (const wchar_t *)v43);
    v44->Config[4] = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
    v44->Config[5] = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
    v46 = *(WinModemClass **)&HouseClass_Player.__pad_5568[17752];
    LOBYTE(v44->UniqueID) = 1;
    v44->Config[6] = (int)v46;
    v45 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
      v45 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
    *(int *)((char *)&v44->UniqueID + 1) = v45;
    if ( *(int *)&HouseClass_Player.__pad_5568[18360] < *(int *)&HouseClass_Player.__pad_5568[18352]
      || (HouseClass_Player.__pad_5568[18357] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18352])
      && *(int *)&HouseClass_Player.__pad_5568[18364] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18344] + 8))(
           &HouseClass_Player.__pad_5568[18344],
           *(_DWORD *)&HouseClass_Player.__pad_5568[18352] + *(_DWORD *)&HouseClass_Player.__pad_5568[18364],
           0) )
    {
      eax115 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18360])++;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * eax115) = v44;
    }
    *(&g_MatrixTransformState + 1300) = (CoordStruct *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18360] - 1);
    LoadingScreen::Init();
    v47 = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBC, g_hWnd, NetworkLobby::DlgProc, 0);
    SetupDialog((HWND)v47, 188);
    SendMessageA((HWND)v47, 0x4A9u, 0, 1);
    ShowWindow((HWND)v47, 1);
LABEL_83:
    if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1 && Dialog::GetCurrentType() == 189 )
    {
      while ( CloseDialog(0, 0) == 1 )
        ;
      CleanupFileTree();
      if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)3 )
      {
        if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)4 )
          SynchronizeMultiplayerGameStart(0);
LABEL_172:
        *(&g_MatrixTransformState + 1299) = 0;
        Scenario::PreGameInit(v36);
        v82 = 2;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8864] = 5;
        *(_DWORD *)&HouseClass_Player.__pad_5568[18664] = 0;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8888] = 0;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8892] = 0;
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] == 2 )
        {
          v82 = 10;
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
             * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) >> 3)
               + *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
               - 1)
              / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]) > 0xA )
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                           * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) >> 3)
                                                             + *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                             - 1)
                                                            / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]);
LABEL_235:
            HouseClass_Player.__pad_5568[17242] = 0;
            SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
            return 1;
          }
        }
        else if ( Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) / 8 > 2 )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284])
                                                         / 8;
          goto LABEL_235;
        }
        *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = v82;
        goto LABEL_235;
      }
      if ( SynchronizeMultiplayerGameStart(0) )
      {
        *((_BYTE *)&g_MatrixTransformState + 5208) = 1;
        goto LABEL_172;
      }
      v2 = (void (__stdcall *)(const MSG *))DispatchMessageA;
      v1 = (void (__stdcall *)(const MSG *))TranslateMessage;
      v3 = 2;
      *((_BYTE *)&g_MatrixTransformState + 5208) = 0;
      *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
    }
    else
    {
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        *((_BYTE *)&g_MatrixTransformState + 5208) = 0;
        SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
      }
      v48 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
      v49 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 )
      {
        v50 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
        v51 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)v50 + 107) == -1 )
            ++v49;
          v50 += 4;
          --v51;
        }
        while ( v51 );
      }
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] - v49 > 1 )
        {
          v55 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
        }
        else
        {
          v52 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[84], 0, &stru_830620.__pad_BC0[168], 1864);
          Dialog::ShowMessage(-1, (size_t)v52);
          *(&g_MatrixTransformState + 1299) = 0;
          v53 = Dialog::GetCurrent();
          v54 = GetDlgItem(v53, 1416);
          v55 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
          EnableWindow(v54, 1);
          if ( *(&g_MatrixTransformState + 1299) != (CoordStruct *)1416 )
            goto LABEL_136;
        }
        v56 = 1;
        v57 = 0;
        if ( v48 > 1 )
        {
          do
          {
            if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v56) + 127) )
            {
              v104 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v56);
              v58 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[68], 0, &stru_830620.__pad_BC0[168], 1876);
              Dialog::ShowMessage(-1, (size_t)v58, v104, &HouseClass_Player.__pad_5568[8302]);
              v57 = 1;
            }
            ++v56;
          }
          while ( v56 < v48 );
          if ( v57 )
          {
            *(&g_MatrixTransformState + 1299) = 0;
            v59 = Dialog::GetCurrent();
            v60 = GetDlgItem(v59, 1416);
            v55(v60, 1);
          }
        }
      }
      else
      {
        v55 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
      }
LABEL_136:
      v63 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
      v111 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
        if ( PlayerCountMap < v48 + *(_DWORD *)&HouseClass_Player.__pad_5568[8128] - v49 )
        {
          v105 = PlayerCountMap;
          eax138 = GetStringCSF(g_Str_TXT_SCENARIO_TOO_SMALL, 0, &stru_830620.__pad_BC0[168], 1895);
          Dialog::ShowMessage(-1, (size_t)eax138, v105);
          v64 = Dialog::GetCurrent();
          v65 = GetDlgItem(v64, 1416);
          v55(v65, 1);
          *(&g_MatrixTransformState + 1299) = 0;
        }
        unknown_libname_74(&v110);
        if ( !(*(unsigned __int8 (__thiscall **)(SkirmishDialog *, wchar_t **))(*(_DWORD *)v63->__pad_0 + 20))(
                v63,
                &v110) )
        {
          v68 = WideString::GetOrEmpty(&v110);
          Dialog::ShowMessage(-1, (size_t)v68);
          v67 = Dialog::GetCurrent();
          eax140a = GetDlgItem(v67, 1416);
          v55(eax140a, 1);
          *(&g_MatrixTransformState + 1299) = 0;
        }
        DeleteAndZero::Alt((void **)&v110);
      }
      v69 = Dialog::GetCurrent();
      NetworkLobby::InitLobbyDropdowns(v69);
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        v70 = -1;
        for ( i = 0; i < 8; ++i )
        {
          v74 = *(SessionClass **)&HouseClass_Player.__pad_5568[4 * i + 18396];
          if ( NetworkLobby::IsValidPlayerName((wchar_t *)v74) )
          {
            if ( !IsKnownPointer((wchar_t *)v74) || *(_DWORD *)&v74->__pad_50[27] == -1 )
            {
              if ( Player::IsObserver(v74)
                && *(_DWORD *)&v74->__pad_50[27] != -1
                && v70 != *(_DWORD *)&HouseClass_Player.__pad_5568[4 * i + 8264] )
              {
                goto LABEL_158;
              }
            }
            else if ( i )
            {
              if ( v70 != *(_DWORD *)&v74->__pad_50[19] )
                goto LABEL_158;
            }
            else
            {
              v70 = *(_DWORD *)&v74->__pad_50[19];
            }
          }
        }
        if ( v70 < 0 || (*(unsigned __int8 (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v111->__pad_0 + 4))(v111) )
        {
LABEL_158:
          if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
          {
            v76 = 0;
            if ( v48 <= 0 )
              goto LABEL_178;
            v77 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
            while ( *(_DWORD *)(*(_DWORD *)v77 + 119) )
            {
              ++v76;
              v77 += 4;
              if ( v76 >= v48 )
                goto LABEL_178;
            }
            Network_Create();
            v78 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[28], 0, &stru_830620.__pad_BC0[168], 1964);
            Dialog::ShowMessage(-1, (size_t)v78);
            *(&g_MatrixTransformState + 1299) = 0;
            v79 = Dialog::GetCurrent();
            v80 = GetDlgItem(v79, 1416);
            EnableWindow(v80, 1);
            if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
            {
LABEL_178:
              v83 = 0;
              for ( *((_BYTE *)&g_MatrixTransformState + 5208) = 1;
                    v83 < *(int *)&HouseClass_Player.__pad_5568[18384];
                    ++v83 )
              {
                v84 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v83);
                if ( *(_DWORD *)(v84 + 107) == -1 )
                  SessionClass::SetPlayerColor(v84, -2);
              }
              v87 = v111;
              (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v111->__pad_0 + 104))(v111);
              Player::RandomAssign(&HouseClass_Player.__pad_5568[8068]);
              CheckGameSettingsChanged(1, 1);
              memset(v113, 0, sizeof(v113));
              v114 = 0;
              v115 = 0;
              v113[0] = 22;
              strcpy((char *)&v113[1], &HouseClass_Player.__pad_5568[8396]);
              Player::BuildListString((wchar_t *)((char *)&v113[11] + 3));
              v86 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
              for ( j = 1; j < v86; ++j )
              {
                Network::SendMessage(
                  (int)&HouseClass_Player.__pad_5568[22284],
                  (int)v113,
                  455,
                  1,
                  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j) + 40,
                  0,
                  0);
                Event::Dispatch();
              }
              (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v87->__pad_0 + 100))(v87);
              v90 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
              if ( *(&g_MatrixTransformState + 2257) )
              {
                ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                __3_YAXPAX_Z(v90);
                *(&g_MatrixTransformState + 2257) = 0;
              }
              Scenario::PreGameInit(v88);
              *(_DWORD *)&HouseClass_Player.__pad_5568[8864] = 5;
              *(_DWORD *)&HouseClass_Player.__pad_5568[18664] = 0;
              *(_DWORD *)&HouseClass_Player.__pad_5568[8888] = 0;
              *(_DWORD *)&HouseClass_Player.__pad_5568[8892] = 0;
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] == 2 )
              {
                if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                   * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) >> 3)
                     + *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                     - 1)
                    / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]) <= 0xA )
                  *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = 10;
                else
                  *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                                 * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) >> 3)
                                                                   + *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                                   - 1)
                                                                  / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]);
              }
              else if ( Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) / 8 <= 2 )
              {
                *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = 2;
              }
              else
              {
                *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284])
                                                               / 8;
              }
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) >= 0x1E )
                eax194 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2;
              else
                eax194 = 30;
              v91 = -1;
              Network::SetConnectionParams(
                (int *)&HouseClass_Player.__pad_5568[22284],
                (IUnknown *)eax194,
                -1,
                600,
                (CellStruct *)1);
              v92 = 1;
              memset(v116, 0, sizeof(v116));
              v117 = 0;
              v118 = 0;
              v116[0] = 11;
              *(_DWORD *)((char *)&v116[11] + 3) = *(_DWORD *)&HouseClass_Player.__pad_5568[8860];
              if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 1 )
              {
                do
                  Network::SendMessage(
                    (int)&HouseClass_Player.__pad_5568[22284],
                    (int)v116,
                    455,
                    1,
                    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v92++) + 40,
                    0,
                    0);
                while ( v92 < *(int *)&HouseClass_Player.__pad_5568[18384] );
              }
              Ticks = Timer::GetTicks();
              if ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) <= 0 )
              {
LABEL_204:
                memset(&Msg, 0, 0x20u);
                v95 = 0;
                LOBYTE(v91) = 0;
                Debug::Log();
                Timer::GetTicks();
                v107 = Timer::GetTicks();
                do
                {
                  Event::Dispatch();
                  if ( Network::Send(
                         (int)&HouseClass_Player.__pad_5568[22284],
                         (int)&HouseClass_Player.__pad_5568[17284],
                         (int)&HouseClass_Player.__pad_5568[17740],
                         (TechnoTypeClass *)&HouseClass_Player.__pad_5568[17744],
                         (int)&HouseClass_Player.__pad_5568[17756]) )
                  {
                    if ( *(_WORD *)&HouseClass_Player.__pad_5568[17756] == 0xAA04 )
                    {
                      for ( k = 1; k < *(int *)&HouseClass_Player.__pad_5568[18384]; ++k )
                      {
                        if ( GUID::Compare(
                               (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * k) + 40),
                               (int)&HouseClass_Player.__pad_5568[17744])
                          && !*((_DWORD *)&Msg.hwnd + k) )
                        {
                          v97 = *(_DWORD *)&HouseClass_Player.__pad_5568[17284];
                          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] == 16 )
                          {
                            Debug::Log();
                            v97 = *(_DWORD *)&HouseClass_Player.__pad_5568[17284];
                            *((_DWORD *)&Msg.hwnd + k) = *(_DWORD *)&HouseClass_Player.__pad_5568[17284];
                            LOBYTE(v91) = 1;
                            ++v95;
                          }
                          if ( v97 == 19 )
                          {
                            Debug::Log();
                            *((_DWORD *)&Msg.hwnd + k) = *(_DWORD *)&HouseClass_Player.__pad_5568[17284];
                            ++v95;
                          }
                        }
                      }
                    }
                  }
                  if ( v95 >= *(_DWORD *)&HouseClass_Player.__pad_5568[18384] - 1 )
                    break;
                  v99 = (CellStruct *)600;
                  if ( v107 != -1 )
                  {
                    eax217 = Timer::GetTicks() - v107;
                    if ( eax217 >= 600 )
                      break;
                    v99 = (CellStruct *)(600 - eax217);
                  }
                }
                while ( v99 );
                CloseDialog(0, 0);
                CleanupFileTree();
                Screen::Capture(1, 0, v91, 43524);
                if ( (_BYTE)v91 )
                {
                  *(_DWORD *)&HouseClass_Player.__pad_5568[10332] = 0;
                  *(_DWORD *)&HouseClass_Player.__pad_5568[10336] = 0;
                  *(_DWORD *)&HouseClass_Player.__pad_5568[10340] = 0;
                  v100 = 1;
                  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 1 )
                  {
                    p_message = &Msg.message;
                    do
                    {
                      if ( *p_message == 16 )
                        HouseClass_Player.__pad_5568[(*(_DWORD *)&HouseClass_Player.__pad_5568[10340])++ + 10332] = v100;
                      ++v100;
                      ++p_message;
                    }
                    while ( v100 < *(int *)&HouseClass_Player.__pad_5568[18384] );
                  }
                  SendNetworkFile((char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700), 3, 0, 1);
                  if ( IsRandMap::Sed2((int)&HouseClass_Player.__pad_5568[8068]) )
                    SendNetworkFile(stru_829ABC.__pad_0, 3, 0, 1);
                }
                if ( (unsigned int)(8 * Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284])) >= 0x78 )
                  v102 = 8 * Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]);
                else
                  v102 = 120;
                if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) <= 0x1E )
                  v103 = 30;
                else
                  v103 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2;
                Network::SetConnectionParams(
                  (int *)&HouseClass_Player.__pad_5568[22284],
                  (IUnknown *)v103,
                  -1,
                  v102,
                  (CellStruct *)1);
                goto LABEL_235;
              }
              while ( 2 )
              {
                v93 = 1200;
                if ( Ticks == -1 )
                {
LABEL_202:
                  if ( v93 )
                    goto LABEL_204;
                }
                else
                {
                  v94 = Timer::GetTicks() - Ticks;
                  if ( v94 < 1200 )
                  {
                    v93 = 1200 - v94;
                    goto LABEL_202;
                  }
                }
                Event::Dispatch();
                if ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) <= 0 )
                  goto LABEL_204;
                continue;
              }
            }
          }
        }
        else
        {
          v73 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[52], 0, &stru_830620.__pad_BC0[168], 1946);
          Dialog::ShowMessage(-1, (size_t)v73);
          eax157a = Dialog::GetCurrent();
          v75 = GetDlgItem(eax157a, 1416);
          EnableWindow(v75, 1);
        }
      }
      v1 = (void (__stdcall *)(const MSG *))TranslateMessage;
      v2 = (void (__stdcall *)(const MSG *))DispatchMessageA;
      v3 = 0;
      *(&g_MatrixTransformState + 1299) = 0;
    }
  }
  SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
  if ( Dialog::GetCurrentType() != 187 )
  {
    if ( Dialog::GetCurrentType() == 188 )
    {
      BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
      *(&g_MatrixTransformState + 1301) = 0;
      v10 = Dialog::GetCurrent();
      CloseDialog(v10, 0);
      CleanupFileTree();
      Network::InitPlayerSlots();
      v11 = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBB, g_hWnd, (DLGPROC)NetworkSettings::DlgProc, 0);
      SetupDialog((HWND)v11, 187);
      ShowWindow((HWND)v11, 1);
      SendNetworkHeartbeat(0, 0, 1, 0);
    }
    else
    {
      if ( Dialog::GetCurrentType() == 189 )
      {
        if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
        {
          BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
          *(&g_MatrixTransformState + 1301) = 0;
        }
        else
        {
          memset(v116, 0, sizeof(v116));
          v117 = 0;
          v118 = 0;
          v116[0] = 10;
          strcpy((char *)&v116[1], &HouseClass_Player.__pad_5568[8396]);
          for ( m = 1; m < *(int *)&HouseClass_Player.__pad_5568[18336]; ++m )
          {
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v116,
              455,
              1,
              *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * m) + 40,
              0,
              0);
            Event::Dispatch();
          }
          Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v116, 455, 0, 0, 0, 0);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17224] )
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v116,
              455,
              0,
              (int)&HouseClass_Player.__pad_5568[17228],
              0,
              0);
        }
        v106 = Timer::GetTicks();
        while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 )
        {
          if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) )
            break;
          v14 = (CellStruct *)600;
          if ( v106 != -1 )
          {
            eax33 = Timer::GetTicks() - v106;
            if ( eax33 >= 600 )
              break;
            v14 = (CellStruct *)(600 - eax33);
          }
          if ( !v14 )
            break;
          Event::Dispatch();
        }
        *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
        *(&g_MatrixTransformState + 1301) = 0;
        CloseDialog(0, 0);
        *(&g_MatrixTransformState + 1299) = 0;
        CleanupFileTree();
      }
      else
      {
        if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
        {
          BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
          *(&g_MatrixTransformState + 1301) = 0;
        }
        else
        {
          memset(v113, 0, sizeof(v113));
          v114 = 0;
          v115 = 0;
          v113[0] = 10;
          strcpy((char *)&v113[1], &HouseClass_Player.__pad_5568[8396]);
          for ( n = 1; n < *(int *)&HouseClass_Player.__pad_5568[18336]; ++n )
          {
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v113,
              455,
              1,
              *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * n) + 40,
              0,
              0);
            Event::Dispatch();
          }
          Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v113, 455, 0, 0, 0, 0);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17224] )
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v113,
              455,
              0,
              (int)&HouseClass_Player.__pad_5568[17228],
              0,
              0);
        }
        v108 = Timer::GetTicks();
        while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 )
        {
          if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) )
            break;
          v16 = 600;
          if ( v108 != -1 )
          {
            v17 = Timer::GetTicks() - v108;
            if ( v17 >= 600 )
              break;
            v16 = 600 - v17;
          }
          if ( !v16 )
            break;
          Event::Dispatch();
        }
        *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
        *(&g_MatrixTransformState + 1301) = 0;
        *(&g_MatrixTransformState + 1299) = 0;
      }
      *(&g_MatrixTransformState + 1300) = 0;
      PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
      Game::ResetFlags();
      Network::InitPlayerSlots();
      v18 = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBB, g_hWnd, (DLGPROC)NetworkSettings::DlgProc, 0);
      SetupDialog((HWND)v18, 187);
      ShowWindow((HWND)v18, 1);
    }
    goto LABEL_53;
  }
  if ( (int)*(&g_MatrixTransformState + 1301) > 0 )
  {
    BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
    Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
  }
  CloseDialog(0, 0);
  Game::ResetFlags();
  GameClass::InitDifficultyButtons();
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18344]);
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18320]);
  HouseClass_Player.__pad_5568[17242] = 0;
  Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
  return 0;
}


// ==== 0x005DD8A0  ObjectClass::SynchronizeMultiplayerGameStart  this=ObjectClass  sig=csp ====
char __usercall SynchronizeMultiplayerGameStart@<al>(int a1@<edi>)
{
  int v2; // eax
  int v3; // eax
  int LobbyStatus; // eax
  int v5; // ecx
  wchar_t *v7; // eax
  int i; // esi
  wchar_t *StringCSF; // [esp-18h] [ebp-1F4h]
  char v10[16]; // [esp+4h] [ebp-1D8h] BYREF
  _DWORD v11[113]; // [esp+14h] [ebp-1C8h] BYREF
  __int16 v12; // [esp+1D8h] [ebp-4h]
  char v13; // [esp+1DAh] [ebp-2h]

  if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) <= 0x1E ) /*0x5dd8b6*/
    v2 = 30; /*0x5dd8c7*/
  else
    v2 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2; /*0x5dd8c2*/
  v3 = Network::SetConnectionParams( /*0x5dd8dd*/
         (int *)&HouseClass_Player.__pad_5568[22284],
         (IUnknown *)v2,
         -1,
         1000,
         (CellStruct *)1);
  LOBYTE(v3) = HouseClass_Player.__pad_5568[10324]; /*0x5dd8e2*/
  if ( FindAndValidateMap( /*0x5dd906*/
         (ObjectClass *)&HouseClass_Player.__pad_5568[9772],
         *(int *)&HouseClass_Player.__pad_5568[10320],
         &HouseClass_Player.__pad_5568[10286],
         v3,
         1) == 1 )
  {
    Debug::Log(); /*0x5dd911*/
    memset(v11, 0, sizeof(v11)); /*0x5dd924*/
    v12 = 0; /*0x5dd92a*/
    v13 = 0; /*0x5dd942*/
    v11[0] = 19; /*0x5dd943*/
    Network::SendMessage( /*0x5dd94b*/
      (int)&HouseClass_Player.__pad_5568[22284],
      (int)v11,
      455,
      1,
      (int)&HouseClass_Player.__pad_5568[10344],
      0,
      0);
    while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 ) /*0x5dd95c*/
    {
      if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) ) /*0x5dd963*/
        break; /*0x5dd96a*/
      Event::Dispatch(); /*0x5dd96c*/
    }
    goto LABEL_8; /*0x5dd97d*/
  }
  Debug::Log(); /*0x5dda12*/
  if ( !HouseClass_Player.__pad_5568[10324] || IsRandMap::Sed2((int)&HouseClass_Player.__pad_5568[8068]) ) /*0x5dda28*/
  {
    SynchronizeMultiplayerGameStart_Start(); /*0x5dda31*/
    if ( RequestNetworkFile(&HouseClass_Player.__pad_5568[9772], 3, 1) ) /*0x5dda42*/
    {
      if ( !IsRandMap::Sed2((int)&HouseClass_Player.__pad_5568[8068]) || RequestNetworkFile(v10, 3, 1) ) /*0x5dda68*/
      {
LABEL_8:
        strcpy((char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700), &HouseClass_Player.__pad_5568[9772]); /*0x5dd97f*/
        LobbyStatus = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]); /*0x5dd9b1*/
        if ( LobbyStatus < 20 ) /*0x5dd9b9*/
        {
          Debug::Log(); /*0x5dd9c1*/
          LobbyStatus = 20; /*0x5dd9c9*/
        }
        v5 = 8 * LobbyStatus; /*0x5dd9ce*/
        if ( 8 * LobbyStatus < 120 ) /*0x5dd9d8*/
          v5 = 120; /*0x5dd9da*/
        Network::SetConnectionParams( /*0x5dd9ea*/
          (int *)&HouseClass_Player.__pad_5568[22284],
          (IUnknown *)LobbyStatus,
          -1,
          v5,
          (CellStruct *)1);
        TacticalClass::SetCameraPosition(&HouseClass_Player.__pad_5568[22284], 60, -1, 600); /*0x5dd9fd*/
        return 1; /*0x5dda0c*/
      }
    }
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = -1; /*0x5dda8c*/
  StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_BC0[168], 710); /*0x5ddaaa*/
  v7 = GetStringCSF(aTxtUnablePlayW, 0, &stru_830620.__pad_BC0[168], 710); /*0x5ddab5*/
  Dialog::ShowMessageBox((int)v7, StringCSF, 0, 0, 0, a1); /*0x5ddabf*/
  memset(v11, 0, sizeof(v11)); /*0x5ddad3*/
  v12 = 0; /*0x5ddad5*/
  v13 = 0; /*0x5ddad7*/
  v11[0] = 10; /*0x5ddae2*/
  strcpy((char *)&v11[1], &HouseClass_Player.__pad_5568[8396]); /*0x5ddaf9*/
  for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18336]; ++i ) /*0x5ddb0e*/
  {
    Network::SendMessage( /*0x5ddb32*/
      (int)&HouseClass_Player.__pad_5568[22284],
      (int)v11,
      455,
      1,
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * i) + 40,
      0,
      0);
    Event::Dispatch(); /*0x5ddb37*/
  }
  Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v11, 455, 0, 0, 0, 0); /*0x5ddb5d*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17224] ) /*0x5ddb69*/
    Network::SendMessage( /*0x5ddb85*/
      (int)&HouseClass_Player.__pad_5568[22284],
      (int)v11,
      455,
      0,
      (int)&HouseClass_Player.__pad_5568[17228],
      0,
      0);
  while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 ) /*0x5ddb96*/
  {
    if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) ) /*0x5ddb9d*/
      break; /*0x5ddba4*/
    Event::Dispatch(); /*0x5ddba6*/
  }
  return 0; /*0x5dda06*/
}


// ==== 0x005DDBD0  NetworkSettings::DlgProc  this=unknown  sig=csp ====
int __stdcall NetworkSettings_DlgProc(HWND hWnd, UINT a2, WPARAM a3, HWND hCtl)
{
  int result; // eax
  WPARAM v5; // ebx
  int v6; // esi
  WPARAM v7; // edi
  LRESULT v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  LPARAM *v11; // eax
  __int16 v12; // cx
  HWND v13; // eax
  HWND v14; // eax
  int v15; // esi
  HWND v16; // eax
  unsigned int v18; // edi
  int v19; // esi
  wchar_t *String; // ebx
  HWND v21; // eax
  char *v22; // eax
  char *v23; // edi
  HWND DlgItem; // eax
  char *v25; // eax
  char *v26; // edi
  char *v27; // eax
  int v28; // eax
  char *v29; // eax
  char *v30; // edi
  int v31; // eax
  HWND v32; // eax
  POINT v33; // [esp-Ch] [ebp-54h]
  struct tagRECT Rect; // [esp+10h] [ebp-38h] BYREF
  char lParam[40]; // [esp+20h] [ebp-28h] BYREF
  HWND hWnda; // [esp+4Ch] [ebp+4h]

  if ( a2 > 0x200 ) /*0x5ddbe0*/
  {
    switch ( a2 ) /*0x5de05c*/
    {
      case 0x497u: /*0x5de05c*/
        MEMORY[0xAC0260] = 0; /*0x5de0a7*/
        MEMORY[0x831274] = 1; /*0x5de0ad*/
        Dialog::RefreshDialogsGame(hWnd); /*0x5de0b4*/
        SendDlgItemMessageA(hWnd, 1345, 0xC5u, 0x10u, 0); /*0x5de0cd*/
        SendDlgItemMessageA(hWnd, 1345, 0x4EBu, 0, (LPARAM)MEMORY[0x8304FC]); /*0x5de0e0*/
        SendDlgItemMessageA(hWnd, 1345, 0x4D1u, 1u, 0); /*0x5de0f0*/
        v23 = CharToWideString(MEMORY[0xA8B380]); /*0x5de108*/
        DlgItem = GetDlgItem(hWnd, 1345); /*0x5de10a*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v23); /*0x5de114*/
        HIWORD(MEMORY[0xA8B320]) = 0; /*0x5de12a*/
        MEMORY[0xA8B394] = MEMORY[0xA8B3B4]; /*0x5de131*/
        MEMORY[0xA8B398] = MEMORY[0xA8B3B8]; /*0x5de137*/
        PtrVector::Destroy(&MEMORY[0xA8DA5C]); /*0x5de13c*/
        PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5de146*/
        PtrVector::Destroy(&MEMORY[0xA8DA44]); /*0x5de150*/
        v25 = (char *)__2_YAPAXI_Z(0x85u); /*0x5de15a*/
        v26 = v25; /*0x5de15f*/
        if ( v25 ) /*0x5de166*/
          Waypoint::InitInvalid(v25 + 40); /*0x5de16b*/
        else
          v26 = 0; /*0x5de172*/
        v27 = CharToWideString(MEMORY[0xA8B380]); /*0x5de179*/
        wcscpy((wchar_t *)v26, (const wchar_t *)v27); /*0x5de180*/
        *((_DWORD *)v26 + 13) = 0; /*0x5de185*/
        v26[56] = 0; /*0x5de188*/
        *(_DWORD *)(v26 + 57) = *((_DWORD *)&MEMORY[0xA8D667] + 1); /*0x5de195*/
        if ( MEMORY[0xA8DA54] < MEMORY[0xA8DA4C] /*0x5de1cc*/
          || (MEMORY[0xA8DA51] || !MEMORY[0xA8DA4C])
          && MEMORY[0xA8DA58] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA44] + 8))(
               &MEMORY[0xA8DA44],
               MEMORY[0xA8DA4C] + MEMORY[0xA8DA58],
               0) )
        {
          v28 = MEMORY[0xA8DA54]++; /*0x5de1d9*/
          *(_DWORD *)(MEMORY[0xA8DA48] + 4 * v28) = v26; /*0x5de1e8*/
        }
        v29 = (char *)__2_YAPAXI_Z(0x85u); /*0x5de1f0*/
        v30 = v29; /*0x5de1f5*/
        if ( v29 ) /*0x5de1fc*/
          Waypoint::InitInvalid(v29 + 40); /*0x5de201*/
        else
          v30 = 0; /*0x5de208*/
        wcscpy((wchar_t *)v30, &MEMORY[0x887734]); /*0x5de210*/
        v30[52] = 0; /*0x5de215*/
        *(_DWORD *)(v30 + 53) = 0; /*0x5de219*/
        if ( MEMORY[0xA8DA6C] < MEMORY[0xA8DA64] /*0x5de255*/
          || (MEMORY[0xA8DA69] || !MEMORY[0xA8DA64])
          && MEMORY[0xA8DA70] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA5C] + 8))(
               &MEMORY[0xA8DA5C],
               MEMORY[0xA8DA64] + MEMORY[0xA8DA70],
               0) )
        {
          v31 = MEMORY[0xA8DA6C]++; /*0x5de262*/
          *(_DWORD *)(MEMORY[0xA8DA60] + 4 * v31) = v30; /*0x5de271*/
        }
        SendNetworkHeartbeat(1, 0, 1, 1); /*0x5de27f*/
        NetworkLobby::UpdatePlayerList(); /*0x5de284*/
        GameSetup::DisplayPlayers(); /*0x5de28b*/
        Dialog::DrawBackground(hWnd); /*0x5de292*/
        v32 = GetDlgItem(hWnd, 1344); /*0x5de29d*/
        SetFocus(v32); /*0x5de2a0*/
        break;
      case 0x4DBu: /*0x5de05c*/
        NavigateDialogTab(hCtl, a3 != 0); /*0x5de08e*/
        return 0; /*0x5de09c*/
      case 0x4ECu: /*0x5de05c*/
        Dialog::EnumAndCleanup(hWnd); /*0x5de070*/
        return 0; /*0x5de07e*/
    }
    return 0; /*0x5de066*/
  }
  if ( a2 == 512 ) /*0x5ddbe6*/
  {
    hWnda = GetDlgItem(hWnd, 1685); /*0x5ddfcf*/
    if ( !hWnda ) /*0x5ddfd3*/
      return 0; /*0x5ddfd3*/
    v18 = (unsigned int)hCtl >> 16; /*0x5ddfe2*/
    v19 = (unsigned __int16)hCtl; /*0x5ddfea*/
    GetWindowRect(hWnd, &Rect); /*0x5ddff0*/
    String = &MEMORY[0x887734]; /*0x5de004*/
    v33.y = v18 - Rect.top; /*0x5de009*/
    v33.x = v19 - Rect.left; /*0x5de00a*/
    v21 = ChildWindowFromPointEx(hWnd, v33, 1u); /*0x5de00c*/
    if ( v21 ) /*0x5de014*/
    {
      v22 = DlgSkirmishMenuProc(hWnd, v21); /*0x5de01a*/
      if ( v22 ) /*0x5de021*/
        String = GetStringCSF((wchar_t *)v22, 0, MEMORY[0x831288], 2439); /*0x5de036*/
    }
    SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)String); /*0x5de045*/
    return 0; /*0x5de04e*/
  }
  else
  {
    if ( a2 <= 0x2B ) /*0x5ddbef*/
    {
      switch ( a2 ) /*0x5ddbf1*/
      {
        case 0x2Bu: /*0x5ddbf1*/
          Dialog::Resize((char *)hCtl); /*0x5ddc3b*/
          return 1; /*0x5ddc4c*/
        case 0xFu: /*0x5ddbf1*/
          Dialog::DrawBackground(hWnd); /*0x5ddc16*/
          Dialog::StopBink(hWnd); /*0x5ddc1d*/
          ValidateRect(hWnd, 0); /*0x5ddc25*/
          return 0; /*0x5ddc34*/
        case 0x14u: /*0x5ddbf1*/
          return 1; /*0x5ddc0d*/
      }
      return 0; /*0x5ddbfb*/
    }
    if ( a2 != 273 ) /*0x5ddc54*/
      return 0; /*0x5ddc54*/
    v5 = a3; /*0x5ddc5a*/
    v6 = (unsigned __int16)a3; /*0x5ddc60*/
    if ( (unsigned __int16)a3 <= 0x5C0u ) /*0x5ddc6c*/
    {
      switch ( (unsigned __int16)a3 ) /*0x5ddc72*/
      {
        case 0x5C0u: /*0x5ddc72*/
          MEMORY[0xAC025C] = 1472; /*0x5ddedb*/
          Config::SaveObserverMode(); /*0x5ddee5*/
          return 0; /*0x5ddef3*/
        case 0x540u: /*0x5ddc72*/
          ReadChatMessage((wchar_t **)&a3, hCtl); /*0x5dde9c*/
          DeleteAndZero::Alt((void **)&a3); /*0x5ddea5*/
          if ( HIWORD(v5) == 1281 ) /*0x5ddeb3*/
          {
            SendNetworkLobbyChatMessage(hWnd, 61680); /*0x5ddeca*/
            return 0; /*0x5dded8*/
          }
          return 0; /*0x5ddeb3*/
        case 0x541u: /*0x5ddc72*/
          if ( IsWindowEnabled(hWnd) && !MEMORY[0xAC025C] ) /*0x5ddd90*/
          {
            *(_WORD *)lParam = 0; /*0x5ddda2*/
            v10 = GetDlgItem(hWnd, 1345); /*0x5ddda7*/
            SendMessageA(v10, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5dddbc*/
            v11 = (LPARAM *)lParam; /*0x5dddbe*/
            if ( *(_WORD *)lParam ) /*0x5dddca*/
            {
              v12 = *(_WORD *)lParam; /*0x5dddcc*/
              do /*0x5ddde0*/
              {
                if ( v12 != 32 ) /*0x5dddd4*/
                  break; /*0x5dddd4*/
                v12 = *((_WORD *)v11 + 1); /*0x5dddd6*/
                v11 = (LPARAM *)((char *)v11 + 2); /*0x5dddda*/
              }
              while ( v12 ); /*0x5ddde0*/
            }
            if ( !*(_WORD *)v11 && *(_WORD *)lParam ) /*0x5dddea*/
            {
              *(_WORD *)lParam = 0; /*0x5dddf2*/
              v13 = GetDlgItem(hWnd, 1345); /*0x5dddf7*/
              SendMessageA(v13, 0x4B2u, 0, (LPARAM)lParam); /*0x5dde05*/
            }
            if ( strcmp(ToWideStringChar(lParam), MEMORY[0xA8B380]) ) /*0x5dde1d*/
            {
              strcpy(MEMORY[0xA8B380], ToWideStringChar(lParam)); /*0x5dde71*/
              SendNetworkHeartbeat(0, 0, 1, 0); /*0x5dde7c*/
              GameSetup::DisplayPlayers(); /*0x5dde83*/
              return 0; /*0x5dde91*/
            }
          }
          return 0; /*0x5dde44*/
      }
      if ( (unsigned __int16)a3 == 1353 && MEMORY[0xAC0264] <= 0 ) /*0x5ddc9b*/
      {
        v7 = MEMORY[0xAC0260]; /*0x5ddca5*/
        v8 = SendDlgItemMessageA(hWnd, 1353, 0x188u, 0, 0); /*0x5ddcba*/
        if ( v8 >= 0 && MEMORY[0x831274] ) /*0x5ddccc*/
        {
          MEMORY[0xAC0260] = v8; /*0x5ddcd4*/
          wcscpy(&MEMORY[0xA8D610], *(const wchar_t **)(MEMORY[0xA8DA60] + 4 * v8)); /*0x5ddce2*/
        }
        if ( HIWORD(v5) == 1 ) /*0x5ddcf3*/
        {
          PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5ddcfa*/
          if ( v7 != MEMORY[0xAC0260] ) /*0x5ddd05*/
            SendNetworkHeartbeat(1, 1, 1, 0); /*0x5ddd12*/
          GameSetup::DisplayPlayers(); /*0x5ddd19*/
          return 0; /*0x5ddd27*/
        }
        if ( HIWORD(v5) == 2 ) /*0x5ddd2e*/
        {
          EnableWindow(hWnd, 0); /*0x5ddd3d*/
          v9 = GetDlgItem(hWnd, 1345); /*0x5ddd45*/
          if ( v9 ) /*0x5ddd4d*/
            EnableWindow(v9, 0); /*0x5ddd52*/
          MEMORY[0xAC025C] = 1742 - (MEMORY[0xAC10C8] != 1); /*0x5ddd67*/
          return 0; /*0x5ddd71*/
        }
      }
      return 0; /*0x5de2a9*/
    }
    switch ( (__int16)a3 ) /*0x5ddf0f*/
    {
      case 1740: /*0x5ddf0f*/
        MEMORY[0xAC025C] = (unsigned __int16)a3; /*0x5ddf1b*/
        MEMORY[0xAC0269] = MEMORY[0xAC10C8] == 1; /*0x5ddf29*/
        result = 0; /*0x5ddf2f*/
        break; /*0x5ddf35*/
      case 1741: /*0x5ddf0f*/
      case 1742: /*0x5ddf0f*/
        EnableWindow(hWnd, 0); /*0x5ddf45*/
        v14 = GetDlgItem(hWnd, 1345); /*0x5ddf4d*/
        if ( v14 ) /*0x5ddf55*/
          EnableWindow(v14, 0); /*0x5ddf5a*/
        MEMORY[0xAC025C] = v6; /*0x5ddf5c*/
        result = 0; /*0x5ddf65*/
        break; /*0x5ddf6b*/
      case 1887: /*0x5ddf0f*/
      case 1888: /*0x5ddf0f*/
        v15 = 0; /*0x5ddf78*/
        v16 = GetDlgItem(hWnd, 1888); /*0x5ddf7a*/
        if ( v16 ) /*0x5ddf82*/
          v15 = SendMessageA(v16, 0xF0u, 0, 0); /*0x5ddf92*/
        if ( (_WORD)v5 == 1887 ) /*0x5ddf99*/
          v15 = v15 == 0; /*0x5ddfa2*/
        MEMORY[0xAC10C8] = v15; /*0x5ddfa6*/
        Dialog::RefreshDialogsGame(0); /*0x5ddfac*/
        result = 0; /*0x5ddfb4*/
        break; /*0x5ddfba*/
      default:
        return 0;
    }
  }
  return result; /*0x5ddc01*/
}


// ==== 0x005DE360  SendNetworkLobbyChatMessage  this=ObjectClass  sig=csp ====
char __fastcall SendNetworkLobbyChatMessage(HWND hWnd, LPARAM a2, int a3)
{
  HWND DlgItem; // eax
  signed int v5; // ebp
  HWND v6; // eax
  char result; // al
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
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x5de3c1*/
  result = InvalidateRect(hWnd, 0, 1); /*0x5de3c8*/
  if ( v5 > 2 ) /*0x5de3d1*/
  {
    v8 = CharToWideString(MEMORY[0xA8B380]); /*0x5de3e1*/
    Dialog::ShowMessage(a2, (size_t)g_Str_Trace___s_, v8, lParam); /*0x5de3f1*/
    memset(v16, 0, sizeof(v16)); /*0x5de40b*/
    v17 = 0; /*0x5de40d*/
    v18 = 0; /*0x5de40f*/
    v16[0] = 12; /*0x5de41a*/
    strcpy((char *)&v16[1], MEMORY[0xA8B380]); /*0x5de43b*/
    wcscpy((wchar_t *)&v16[12], lParam); /*0x5de44a*/
    v16[68] = a3; /*0x5de45e*/
    v16[69] = WideString::Hash(MEMORY[0xA8D610]); /*0x5de46a*/
    result = MEMORY[0xAC0264]; /*0x5de471*/
    if ( MEMORY[0xAC0264] == 2 ) /*0x5de479*/
    {
      v9 = MEMORY[0xA8DA84]; /*0x5de47b*/
      for ( i = 1; i < v9; ++i ) /*0x5de488*/
      {
        Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v16, 455, 1, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40, 0, 0); /*0x5de4b3*/
        result = Event::Dispatch(); /*0x5de4b8*/
      }
    }
    else
    {
      v11 = MEMORY[0xA8DA54]; /*0x5de4cf*/
      for ( j = 1; j < v11; ++j ) /*0x5de4dc*/
      {
        Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v16, 455, 1, *(_DWORD *)(MEMORY[0xA8DA48] + 4 * j) + 40, 0, 0); /*0x5de503*/
        result = Event::Dispatch(); /*0x5de508*/
      }
    }
  }
  return result; /*0x5de4c2*/
}


// ==== 0x005DE520  NetworkLobby::DlgProc  this=VOID_PTR  sig=csp ====
INT_PTR __stdcall NetworkLobby::DlgProc(HWND hDlg, UINT a2, WPARAM nIDDlgItem, unsigned int lParam)
{
  wchar_t *StringCSF; // ebp
  HWND v5; // eax
  char *v6; // eax
  INT_PTR result; // eax
  ObjectClass *v8; // edi
  LRESULT v9; // eax
  HWND v10; // eax
  SkirmishDialog *v11; // ecx
  void *v12; // ebp
  CCINIClass *v13; // edi
  CCINIClass *v14; // ecx
  SkirmishDialog *v15; // ecx
  char v16; // bl
  char v17; // al
  int v18; // edi
  int i; // esi
  IUnknown *v20; // eax
  SkirmishDialog *v21; // eax
  CampaignScore *PlayerCountMap; // edi
  int v23; // ecx
  HWND DlgItem; // eax
  void *DlgCtrlID; // edi
  void *ComboBoxSelectedRaw; // eax
  wchar_t *DifficultyString; // eax
  void *ComboBoxSelected; // eax
  void *ComboBoxSelectedDefault; // eax
  POINT v30; // [esp-Ch] [ebp-200h]
  char v31; // [esp+12h] [ebp-1E2h]
  char v32; // [esp+13h] [ebp-1E1h]
  HWND hWnd; // [esp+14h] [ebp-1E0h]
  void *v34; // [esp+18h] [ebp-1DCh] BYREF
  struct tagRECT Rect; // [esp+1Ch] [ebp-1D8h] BYREF
  _DWORD v36[113]; // [esp+2Ch] [ebp-1C8h] BYREF
  __int16 v37; // [esp+1F0h] [ebp-4h]
  char v38; // [esp+1F2h] [ebp-2h]

  if ( a2 != 1175 )
    SkirmishDialogProc((SkirmishDialog *)hDlg, a2, nIDDlgItem, (HWND)lParam);
  if ( a2 > 0x111 )
  {
    if ( a2 <= 0x49B )
    {
      if ( a2 == 1179 )
      {
        DlgItem = GetDlgItem(hDlg, nIDDlgItem);
        SendMessageA(DlgItem, 0x4B3u, 0x7Fu, lParam);
        return 0;
      }
      if ( a2 >= 0x114 )
      {
        if ( a2 <= 0x115 )
        {
          if ( (HWND)lParam == GetDlgItem(hDlg, 1842) )
          {
            if ( *((_BYTE *)&g_MatrixTransformState + 5208) )
              return 0;
            *(_DWORD *)&HouseClass_Player.__pad_5568[22708] = SendDlgItemMessageA(hDlg, 1842, 0x400u, 0, 0);
          }
          if ( !*((_BYTE *)&g_MatrixTransformState + 5208) )
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0);
            *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0);
            *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0);
            return 0;
          }
          return 0;
        }
        if ( a2 == 1175 )
        {
          NetworkBuffer::GetField((VersionClass *)&HouseClass_Player.__pad_5568[23084]);
          v20 = (IUnknown *)Random::Range(&stru_87C374.__pad_579C[20600], (IUnknown *)1, (IUnknown *)0x7FFF);
          srand(v20);
          *(_DWORD *)&HouseClass_Player.__pad_5568[23264] = rand();
          Dialog::RestoreParent(hDlg);
          SkirmishDialog::FillComboBoxes((SkirmishDialog *)hDlg);
          InitGameDropdownColors();
          Lobby::FillPlayerFactions(hDlg);
          SetupSkirmishDialogPlayerSlot(hDlg, *(int *)&HouseClass_Player.__pad_5568[18392]);
          MapSkirmishDialogPlayerToControl(hDlg, *(int *)&HouseClass_Player.__pad_5568[18392]);
          _cfltcvt_init();
          memset32(&HouseClass_Player.__pad_5568[8232], -2, 8u);
          GDlg::LoadLetterStrings();
          memset32(&HouseClass_Player.__pad_5568[8264], -2, 8u);
          SetupMultiplayerLobbyPlayers(hDlg, (int)&HouseClass_Player.__pad_5568[8588]);
          Lobby::InvalidatePlayerSlots(hDlg);
          RefreshLobbyPlayerSlots(0xFFFFFFFF);
          GameSetup::DisplayPlayers(0);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
            && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 188))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
          {
            *(_DWORD *)&stru_830620.__pad_DFC[648] = -1;
            *(&g_MatrixTransformState + 2222) = 0;
            Dialog::RefreshDialogsGame(0);
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18396] + 107) = 0;
            v21 = (SkirmishDialog *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
            SessionClass::SetPlayerOption(*(int *)&HouseClass_Player.__pad_5568[18396], v21);
            SessionClass::SetPlayerColor(*(int *)&HouseClass_Player.__pad_5568[18396], -2);
            SessionClass::SetOption(*(int *)&HouseClass_Player.__pad_5568[18396], (SessionClass *)0xFFFFFFFE);
            SessionClass::SetOption2(*(int *)&HouseClass_Player.__pad_5568[18396], (SessionClass *)0xFFFFFFFE);
            Lobby::FillPlayerFactions(hDlg);
          }
          SetupSkirmishPlayerSlots(hDlg, 0, (HWND)1);
          SetupMultiplayerLobbyScreen(hDlg, (void *)0xFFFFFFFF, *(int *)&HouseClass_Player.__pad_5568[8096]);
          if ( !*(_DWORD *)&stru_830620.__pad_DFC[648]
            && *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
            && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 188))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
          {
            SessionClass::SetPlayerOption(*(int *)&HouseClass_Player.__pad_5568[18396], (SkirmishDialog *)0xFFFFFFFD);
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18396] + 107) = -1;
          }
          NetworkLobby::Dispatch(hDlg);
          SetDialogPlayerName(hDlg, *(int *)&HouseClass_Player.__pad_5568[8072]);
          Dialog::ShowPlayerName(hDlg);
          Session::StartGame(hDlg);
          PlayerCountMap = (CampaignScore *)ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
          if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8072]
            || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
            || (v23 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), v23 > (int)PlayerCountMap) )
          {
            v23 = (int)PlayerCountMap;
          }
          ResetLobbyFactionTable(v23);
          Lobby::InvalidateFactionCombos(hDlg);
          SkirmishDialogProc((SkirmishDialog *)hDlg, 1175, nIDDlgItem, (HWND)lParam);
          NetworkLobby::UpdatePlayerList(PlayerCountMap);
          return 0;
        }
      }
      return 0;
    }
    if ( a2 != 1257 )
    {
      if ( a2 == 1260 )
      {
        Dialog::EnumAndCleanup(hDlg);
        return 0;
      }
      return 0;
    }
    WideString::Assign_Alt((void **)(lParam + 8), 0);
    if ( *(_DWORD *)lParam && *(_DWORD *)(lParam + 4) != -1 )
    {
      DlgCtrlID = (void *)GetDlgCtrlID(*(HWND *)lParam);
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 )
      {
        ComboBoxSelectedDefault = (void *)GetComboBoxSelectedDefault(
                                            (SkirmishDialog *)hDlg,
                                            (int)DlgCtrlID,
                                            *(_DWORD *)(lParam + 4));
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault);
        goto LABEL_132;
      }
      if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 )
      {
        if ( StartCombo::IDToIndex(DlgCtrlID) != -1 )
        {
          ComboBoxSelectedRaw = (void *)GetComboBoxSelectedRaw(
                                          (ReferenceCounted *)hDlg,
                                          (int)DlgCtrlID,
                                          *(_DWORD *)(lParam + 4));
          DifficultyString = GameSetup::GetColorTooltip(ComboBoxSelectedRaw);
LABEL_132:
          WideString::Assign_Alt((void **)(lParam + 8), DifficultyString);
        }
      }
      else
      {
        ComboBoxSelected = (void *)GetComboBoxSelected(
                                     (ReferenceCounted *)hDlg,
                                     (int)DlgCtrlID,
                                     *(_DWORD *)(lParam + 4));
        if ( ComboBoxSelected != (void *)-1 )
        {
          DifficultyString = SideClass::GetName(ComboBoxSelected);
          goto LABEL_132;
        }
      }
    }
    return 1;
  }
  if ( a2 != 273 )
  {
    switch ( a2 )
    {
      case 2u:
        if ( !LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) )
          return 0;
        VtableStub::643E70(&g_MatrixTransformState + 6226);
        result = 0;
        break;
      case 0xFu:
        Dialog::DrawBackground(hDlg);
        if ( *(&g_MatrixTransformState + 2257) )
          Skirmish::RenderPreview(*(&g_MatrixTransformState + 2257), (SkirmishDialog *)hDlg);
        if ( LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) )
          LoadScreen::Render((ProgressScreenClass *)&g_MatrixTransformState + 283);
        Dialog::StopBink(hDlg);
        ValidateRect(hDlg, 0);
        result = 0;
        break;
      case 0x14u:
        return 1;
      case 0x2Bu:
        Dialog::Resize((char *)lParam);
        result = 1;
        break;
      case 0x84u:
        hWnd = GetDlgItem(hDlg, 1685);
        if ( !hWnd )
          return 0;
        GetWindowRect(hDlg, &Rect);
        StringCSF = (wchar_t *)&stru_87C374.__pad_579C[23588];
        v30.y = HIWORD(lParam) - Rect.top;
        v30.x = (unsigned __int16)lParam - Rect.left;
        v5 = ChildWindowFromPointEx(hDlg, v30, 1u);
        if ( v5 )
        {
          v6 = DlgSkirmishMenuProc(hDlg, v5);
          if ( v6 )
            StringCSF = GetStringCSF((wchar_t *)v6, 0, &stru_830620.__pad_BC0[168], 2857);
        }
        SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)StringCSF);
        result = 0;
        break;
      default:
        return 0;
    }
    return result;
  }
  if ( (unsigned __int16)nIDDlgItem > 0x588u )
  {
    if ( (unsigned __int16)nIDDlgItem > 0x6A8u )
    {
      switch ( (__int16)nIDDlgItem )
      {
        case 1706:
        case 1707:
          goto LABEL_89;
        case 1901:
        case 1902:
        case 1903:
        case 1904:
        case 1905:
        case 1906:
        case 1907:
        case 1908:
          if ( HIWORD(nIDDlgItem) != 1 || *((_BYTE *)&g_MatrixTransformState + 5208) )
            return 0;
          ProcessNetworkLobbyOption(hDlg, (void *)(unsigned __int16)nIDDlgItem);
          break;
        default:
          return 0;
      }
      goto LABEL_51;
    }
    if ( (unsigned __int16)nIDDlgItem >= 0x6A3u )
    {
LABEL_89:
      if ( HIWORD(nIDDlgItem) != 1 || *((_BYTE *)&g_MatrixTransformState + 5208) )
        return 0;
      AssignPlayerSide(hDlg, (unsigned __int16)nIDDlgItem);
      goto LABEL_51;
    }
    if ( (unsigned __int16)nIDDlgItem != 1450 )
    {
      if ( (unsigned __int16)nIDDlgItem != 1697 )
      {
        if ( (unsigned __int16)nIDDlgItem != 1698 )
          return 0;
LABEL_45:
        if ( HIWORD(nIDDlgItem) != 1 || *((_BYTE *)&g_MatrixTransformState + 5208) )
          return 0;
        AssignPlayerColor(hDlg, (void *)(unsigned __int16)nIDDlgItem);
LABEL_51:
        CheckGameSettingsChanged(1, 0);
        GameSetup::DisplayPlayers(0);
        return 0;
      }
LABEL_48:
      if ( HIWORD(nIDDlgItem) != 1 || *((_BYTE *)&g_MatrixTransformState + 5208) )
        return 0;
      SelectLobbyCountry(hDlg, (void *)(unsigned __int16)nIDDlgItem);
      goto LABEL_51;
    }
    if ( *((_BYTE *)&g_MatrixTransformState + 5208) )
      return 0;
    v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
    v12 = *(void **)&HouseClass_Player.__pad_5568[8096];
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 64))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
      {
        v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
        v32 = 0;
LABEL_58:
        if ( !v11
          || (v31 = 0, (*(unsigned __int8 (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v11->__pad_0 + 188))(v11)) )
        {
          v31 = 1;
        }
        Dialog::IdleProcess((SkirmishDialog *)hDlg);
        ShowWindow(hDlg, 0);
        stru_830620.__pad_DFC[696] = 0;
        if ( SkirmishDialog::Show(g_hWnd, lParam, (int)v12) == 2 )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v12;
          LoadScenarioClassByIndex((int)v12);
          Session::PrepareGame(hDlg);
          stru_830620.__pad_DFC[696] = 1;
          ShowWindow(hDlg, 5);
          Session::StartGame(hDlg);
          CheckGameSettingsChanged(1, 0);
          InvalidateRect(hDlg, 0, 0);
          return 0;
        }
        if ( LoadScenarioClassByIndex(*(int *)&HouseClass_Player.__pad_5568[8096]) )
          SetupMultiplayerLobbyScreen(hDlg, v12, *(int *)&HouseClass_Player.__pad_5568[8096]);
        else
          *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v12;
        stru_830620.__pad_DFC[696] = 1;
        ShowWindow(hDlg, 5);
        Dialog::ShowPlayerName(hDlg);
        Session::StartGame(hDlg);
        v13 = (CCINIClass *)ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8072]
          || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
          || (v14 = *(CCINIClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), (int)v14 > (int)v13) )
        {
          v14 = v13;
        }
        ResetLobbyFactionTable((int)v14);
        Lobby::InvalidateFactionCombos(hDlg);
        Lobby::InvalidatePlayerSlots(hDlg);
        NetworkLobby::UpdateLabels(hDlg);
        NetworkLobby::FillOptionCombo();
        RefreshLobbyPlayerSlots(0xFFFFFFFF);
        v15 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 64))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
          {
            v15 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
            v16 = 0;
            goto LABEL_75;
          }
          v15 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
        }
        v16 = 1;
LABEL_75:
        if ( !v15 || (v17 = (*(int (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v15->__pad_0 + 188))(v15)) != 0 )
          v17 = 1;
        if ( v31 && !v17 )
          MultiplayerLobby::FillSlots(hDlg);
        if ( v32 && !v16 && NetworkLobby::SetupPlayerSlotControls(hDlg) )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = 0;
          memset(v36, 0, sizeof(v36));
          v37 = 0;
          v38 = 0;
          v36[0] = 22;
          strcpy((char *)&v36[1], &HouseClass_Player.__pad_5568[8396]);
          Player::BuildListString((wchar_t *)((char *)&v36[11] + 3));
          v18 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
          for ( i = 1; i < v18; ++i )
          {
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v36,
              455,
              1,
              *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i) + 40,
              0,
              0);
            Event::Dispatch();
          }
          GameSetup::DisplayPlayers(0);
          CheckGameSettingsChanged(1, 0);
          return 0;
        }
        else
        {
          GameSetup::DisplayPlayers(1);
          return 0;
        }
      }
      v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
    }
    v32 = 1;
    goto LABEL_58;
  }
  if ( (unsigned __int16)nIDDlgItem == 1416 )
  {
    v10 = GetDlgItem(hDlg, 1416);
    EnableWindow(v10, 0);
    *((_BYTE *)&g_MatrixTransformState + 5208) = 1;
    SaveMultiplayerLobbySettings(hDlg, (int)&HouseClass_Player.__pad_5568[8588]);
    *(&g_MatrixTransformState + 1299) = (CoordStruct *)1416;
    return 0;
  }
  if ( (unsigned __int16)nIDDlgItem <= 0x514u )
  {
    if ( (unsigned __int16)nIDDlgItem < 0x513u )
    {
      if ( (unsigned __int16)nIDDlgItem <= 0x418u )
      {
        if ( (unsigned __int16)nIDDlgItem >= 0x411u )
        {
          if ( HIWORD(nIDDlgItem) == 1 && !*((_BYTE *)&g_MatrixTransformState + 5208) && Settings::CheckString() )
          {
            v9 = GetComboBoxSelectedDefault((SkirmishDialog *)hDlg, (unsigned __int16)nIDDlgItem, 0xFFFFFFFF);
            PlayerSkirmishSlotHandler((SkirmishDialog *)hDlg, (unsigned __int16)nIDDlgItem, v9, 2);
            return 0;
          }
        }
        else if ( (unsigned __int16)nIDDlgItem == 2 && !*((_BYTE *)&g_MatrixTransformState + 5208) )
        {
          v8 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
          if ( *(&g_MatrixTransformState + 2257) )
          {
            ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
            __3_YAXPAX_Z(v8);
            *(&g_MatrixTransformState + 2257) = 0;
          }
          SaveMultiplayerLobbySettings(hDlg, (int)&HouseClass_Player.__pad_5568[8588]);
          *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
          return 0;
        }
        return 0;
      }
      if ( (unsigned __int16)nIDDlgItem != 1296 )
        return 0;
    }
    goto LABEL_48;
  }
  switch ( (__int16)nIDDlgItem )
  {
    case 1310:
    case 1311:
    case 1312:
    case 1313:
      goto LABEL_48;
    case 1314:
    case 1315:
    case 1316:
    case 1317:
    case 1318:
    case 1319:
    case 1320:
      goto LABEL_45;
    case 1344:
      ReadChatMessage((wchar_t **)&v34, (HWND)lParam);
      DeleteAndZero::Alt(&v34);
      if ( HIWORD(nIDDlgItem) != 1281 )
        return 0;
      SendNetworkLobbyChatMessage(hDlg, (LPARAM)Math::InitDegToRad, 61680);
      result = 0;
      break;
    default:
      return 0;
  }
  return result;
}


// ==== 0x005DF180  SkirmishDialogProc  this=unknown  sig=csp ====
int __stdcall SkirmishDialogProc(SkirmishDialog *aP0, int a2, unsigned __int16 a3, HWND a4)
{
  if ( !*((_BYTE *)&g_MatrixTransformState + 5208) ) /*0x5df189*/
  {
    switch ( a2 ) /*0x5df198*/
    {
      case 273: /*0x5df198*/
        if ( a3 > 0x624u ) /*0x5df262*/
        {
          if ( a3 == 1690 ) /*0x5df395*/
          {
            HouseClass_Player.__pad_5568[8111] = SendDlgItemMessageA((HWND)aP0, 1690, 0xF0u, 0, 0) == 1; /*0x5df3fb*/
          }
          else if ( a3 == 1693 ) /*0x5df39a*/
          {
            HouseClass_Player.__pad_5568[8112] = 0; /*0x5df3af*/
            if ( SendDlgItemMessageA((HWND)aP0, 1693, 0xF0u, 0, 0) == 1 ) /*0x5df3c3*/
            {
              HouseClass_Player.__pad_5568[8112] = 1; /*0x5df3c6*/
              return 0; /*0x5df3cf*/
            }
          }
        }
        else
        {
          switch ( a3 ) /*0x5df268*/
          {
            case 0x624u: /*0x5df268*/
              HouseClass_Player.__pad_5568[8108] = 0; /*0x5df36d*/
              if ( SendDlgItemMessageA((HWND)aP0, 1572, 0xF0u, 0, 0) == 1 ) /*0x5df381*/
              {
                HouseClass_Player.__pad_5568[8108] = 1; /*0x5df384*/
                return 0; /*0x5df38d*/
              }
              break;
            case 0x3E8u: /*0x5df268*/
              HouseClass_Player.__pad_5568[8300] = 0; /*0x5df333*/
              if ( SendDlgItemMessageA((HWND)aP0, 1000, 0xF0u, 0, 0) == 1 ) /*0x5df347*/
              {
                HouseClass_Player.__pad_5568[8300] = 1; /*0x5df34e*/
                return 0; /*0x5df357*/
              }
              break;
            case 0x54Du: /*0x5df268*/
              HouseClass_Player.__pad_5568[8109] = 0; /*0x5df2f9*/
              if ( SendDlgItemMessageA((HWND)aP0, 1357, 0xF0u, 0, 0) == 1 ) /*0x5df30d*/
              {
                HouseClass_Player.__pad_5568[8109] = 1; /*0x5df314*/
                return 0; /*0x5df31d*/
              }
              break;
            case 0x54Eu: /*0x5df268*/
              HouseClass_Player.__pad_5568[8110] = 0; /*0x5df2a0*/
              if ( SendDlgItemMessageA((HWND)aP0, 1358, 0xF0u, 0, 0) == 1 ) /*0x5df2b0*/
              {
                HouseClass_Player.__pad_5568[8110] = 1; /*0x5df2bb*/
                if ( !HouseClass_Player.__pad_5568[8100] ) /*0x5df2c3*/
                {
                  HouseClass_Player.__pad_5568[8100] = 1; /*0x5df2d7*/
                  SendDlgItemMessageA((HWND)aP0, 1355, 0xF1u, 1u, 0); /*0x5df2dd*/
                  return 0; /*0x5df2e3*/
                }
              }
              break;
          }
        }
        break;
      case 276: /*0x5df198*/
        if ( GetDlgItem((HWND)aP0, 1321) == a4 ) /*0x5df1e3*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = 6 - SendDlgItemMessageA((HWND)aP0, 1321, 0x400u, 0, 0); /*0x5df1fd*/
        if ( GetDlgItem((HWND)aP0, 1026) == a4 ) /*0x5df20d*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = SendDlgItemMessageA((HWND)aP0, 1026, 0x400u, 0, 0); /*0x5df220*/
        if ( GetDlgItem((HWND)aP0, 1359) == a4 ) /*0x5df231*/
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = SendDlgItemMessageA((HWND)aP0, 1359, 0x400u, 0, 0); /*0x5df248*/
          return 0; /*0x5df251*/
        }
        break;
      case 1175: /*0x5df198*/
        InitSkirmishDialogControls((HWND)aP0, 1); /*0x5df1b7*/
        return 0; /*0x5df1c0*/
    }
  }
  return 0; /*0x5df1bc*/
}


// ==== 0x005DF410  SendNetworkJoinRequest  this=ObjectClass  sig=ida-proto ====
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
    String = GetStringCSF(MEMORY[0x8315C0], 0, MEMORY[0x831288], 3712); /*0x5df436*/
    Dialog::ShowMessage(-1, (size_t)String); /*0x5df442*/
    PlayVocClass(MEMORY[0x8871E0]->MovieOff, 0x2000, 1.0, 0); /*0x5df462*/
    return 0; /*0x5df473*/
  }
  if ( MEMORY[0xA8DA6C] <= 1 || a1 > MEMORY[0xA8DA6C] ) /*0x5df484*/
  {
    v5 = GetStringCSF(MEMORY[0x83156C], 0, MEMORY[0x831288], 3719); /*0x5df87b*/
  }
  else if ( strlen(MEMORY[0xA8B380]) ) /*0x5df48f*/
  {
    if ( !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC117C])) /*0x5df6c6*/
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1180]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1184]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1188]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC118C]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1190]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1194]))
      || (String::Assign((char **)&v9, MEMORY[0xA8B380]), v6 = Network_Send(&v9), DeleteAndZero(&v9), v6) )
    {
      v8 = GetStringCSF(MEMORY[0x831580], 0, MEMORY[0x831288], 3742); /*0x5df82c*/
      Dialog::ShowMessage(-1, (size_t)v8); /*0x5df838*/
      PlayVocClass(MEMORY[0x8871E0]->MovieOff, 0x2000, 1.0, 0); /*0x5df858*/
      return 0; /*0x5df869*/
    }
    v7 = v10; /*0x5df6d1*/
    if ( *(_BYTE *)(*(_DWORD *)(MEMORY[0xA8DA60] + 4 * v10) + 52) ) /*0x5df6d8*/
    {
      memset(v12, 0, sizeof(v12)); /*0x5df704*/
      v13 = 0; /*0x5df706*/
      v14 = 0; /*0x5df708*/
      v12[0] = 6; /*0x5df713*/
      strcpy((char *)&v12[1], MEMORY[0xA8B380]); /*0x5df72e*/
      strcpy((char *)&v12[6], MEMORY[0xABFF7C]); /*0x5df750*/
      *(_DWORD *)((char *)&v12[11] + 3) = Session::GetPlayerOption(MEMORY[0xA8B238]); /*0x5df768*/
      *(_DWORD *)((char *)&v12[12] + 3) = Session::GetPlayerColor(MEMORY[0xA8B238]); /*0x5df776*/
      *(_DWORD *)((char *)&v12[14] + 3) = NetworkBuffer::GetField2(&MEMORY[0xA8ECE0]); /*0x5df784*/
      *(_DWORD *)((char *)&v12[15] + 3) = NetworkBuffer::GetField3(&MEMORY[0xA8ECE0]); /*0x5df799*/
      *(_DWORD *)((char *)&v12[16] + 3) = MEMORY[0xAC026C]; /*0x5df7a2*/
      *(_DWORD *)((char *)&v12[18] + 3) = MEMORY[0xAC0270]; /*0x5df7a6*/
      *(_DWORD *)((char *)&v12[17] + 3) = MEMORY[0xAC0274]; /*0x5df7aa*/
      *(_DWORD *)((char *)&v12[19] + 3) = GameOptions::GetEntry(); /*0x5df7bf*/
      *(_DWORD *)((char *)&v12[21] + 3) = a2; /*0x5df7c3*/
      Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v12, 455, 1, *(_DWORD *)(MEMORY[0xA8DA60] + 4 * v7) + 40, 0, 0); /*0x5df7e3*/
      MEMORY[0xAC0230] = Timer::GetTicks(); /*0x5df7fa*/
      MEMORY[0xAC0234] = v11; /*0x5df800*/
      MEMORY[0xAC0238] = 600; /*0x5df806*/
      return 1; /*0x5df81a*/
    }
    v5 = GetStringCSF((wchar_t *)MEMORY[0x83159C], 0, MEMORY[0x831288], 3750); /*0x5df6f0*/
  }
  else
  {
    v5 = GetStringCSF((wchar_t *)MEMORY[0x8315B0], 0, MEMORY[0x831288], 3727); /*0x5df4ac*/
  }
  Dialog::ShowMessage(-1, (size_t)v5); /*0x5df888*/
  PlayVocClass(MEMORY[0x8871E0]->MovieOff, 0x2000, 1.0, 0); /*0x5df8a7*/
  return 0; /*0x5df469*/
}


// ==== 0x005DF8C0  BroadcastNetworkMessage  this=ObjectClass  sig=ida-proto ====
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
  strcpy((char *)&v4[1], MEMORY[0xA8B380]); /*0x5df900*/
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x5df915*/
  {
    Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v4, 455, 1, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40, 0, 0); /*0x5df939*/
    Event::Dispatch(); /*0x5df93e*/
  }
  if ( (MEMORY[0xAC0264] == 1 || MEMORY[0xAC0264] == 2) /*0x5df968*/
    && !Network::IsBroadcastAddr((_BYTE *)(*(_DWORD *)(MEMORY[0xA8DA60] + 4 * a1) + 40)) )
  {
    Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v4, 455, 1, *(_DWORD *)(MEMORY[0xA8DA60] + 4 * a1) + 40, 0, 0); /*0x5df991*/
  }
  Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v4, 455, 0, 0, 0, 0); /*0x5df9ad*/
  Game::ResetFlags(); /*0x5df9b2*/
  GameClass::InitDifficultyButtons(); /*0x5df9b7*/
  result = PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5df9c1*/
  MEMORY[0xA8D610] = 0; /*0x5df9c6*/
  return result; /*0x5df9cf*/
}


// ==== 0x005DF9E0  SendNetworkHeartbeat  this=int  sig=csp ====
signed int __fastcall Network_SendHeartbeat(int a1, int a2, int a3, int a4)
{
  DWORD Ticks; // eax
  int v6; // esi
  signed int v7; // eax
  int v8; // esi
  signed int v9; // eax
  signed int result; // eax
  int v11; // esi
  int v12; // edx
  int v13; // [esp+10h] [ebp-1D4h]
  _DWORD v15[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v16; // [esp+1E0h] [ebp-4h]
  char v17; // [esp+1E2h] [ebp-2h]

  if ( (MEMORY[0xAC01BC] & 1) == 0 ) /*0x5df9fb*/
  {
    MEMORY[0xAC01BC] |= 1u; /*0x5dfa06*/
    MEMORY[0xAC0220] = Timer::GetTicks(); /*0x5dfa11*/
    MEMORY[0xAC0228] = 0; /*0x5dfa16*/
    atexit(nullsub_27); /*0x5dfa21*/
  }
  if ( (MEMORY[0xAC01BC] & 2) == 0 ) /*0x5dfa30*/
  {
    MEMORY[0xAC01BC] |= 2u; /*0x5dfa3c*/
    MEMORY[0xAC0200] = Timer::GetTicks(); /*0x5dfa47*/
    MEMORY[0xAC0208] = 0; /*0x5dfa4c*/
    atexit(nullsub_26); /*0x5dfa57*/
  }
  if ( (MEMORY[0xAC01BC] & 4) == 0 ) /*0x5dfa66*/
  {
    MEMORY[0xAC01BC] |= 4u; /*0x5dfa72*/
    MEMORY[0xABFF70] = Timer::GetTicks(); /*0x5dfa7d*/
    MEMORY[0xABFF78] = 0; /*0x5dfa82*/
    atexit(nullsub_25); /*0x5dfa8d*/
  }
  if ( a4 ) /*0x5dfa9c*/
  {
    MEMORY[0xAC0220] = Timer::GetTicks(); /*0x5dfaac*/
    MEMORY[0xAC0228] = 120; /*0x5dfab5*/
    MEMORY[0xAC0224] = v13; /*0x5dfabf*/
    Ticks = Timer::GetTicks(); /*0x5dfac4*/
    MEMORY[0xAC0208] = 35; /*0x5dfad2*/
    MEMORY[0xAC0200] = Ticks; /*0x5dfadc*/
    MEMORY[0xAC0204] = v13; /*0x5dfae1*/
    MEMORY[0xABFF70] = Timer::GetTicks(); /*0x5dfaec*/
    MEMORY[0xABFF74] = v13; /*0x5dfafa*/
    MEMORY[0xABFF78] = 83; /*0x5dfaff*/
  }
  v6 = MEMORY[0xAC0228]; /*0x5dfb0a*/
  if ( MEMORY[0xAC0220] == -1 ) /*0x5dfb13*/
  {
LABEL_12:
    if ( v6 && !a1 ) /*0x5dfb31*/
      goto LABEL_18; /*0x5dfb31*/
    goto LABEL_14; /*0x5dfb31*/
  }
  v7 = Timer::GetTicks() - MEMORY[0xAC0220]; /*0x5dfb1f*/
  if ( v7 < v6 ) /*0x5dfb27*/
  {
    v6 -= v7; /*0x5dfb29*/
    goto LABEL_12; /*0x5dfb29*/
  }
LABEL_14:
  MEMORY[0xAC0220] = Timer::GetTicks(); /*0x5dfb37*/
  MEMORY[0xAC0224] = v13; /*0x5dfb4e*/
  MEMORY[0xAC0228] = 120; /*0x5dfb54*/
  if ( Dialog::GetCurrentType() != 188 || a1 ) /*0x5dfb68*/
  {
    memset(v15, 0, sizeof(v15)); /*0x5dfb79*/
    v16 = 0; /*0x5dfb7b*/
    v17 = 0; /*0x5dfb7d*/
    v15[0] = 0; /*0x5dfb88*/
    strcpy((char *)&v15[1], MEMORY[0xA8B380]); /*0x5dfb9d*/
    Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, 0, 0, 0); /*0x5dfbb7*/
    if ( MEMORY[0xA8D5FC] ) /*0x5dfbc2*/
      Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, (int)&MEMORY[0xA8D600], 0, 0); /*0x5dfbdb*/
  }
LABEL_18:
  if ( (int)MEMORY[0xAC0260] <= 0 || (int)MEMORY[0xAC0260] >= MEMORY[0xA8DA6C] ) /*0x5dfbef*/
  {
LABEL_24:
    if ( !a2 ) /*0x5dfc1f*/
      goto LABEL_27; /*0x5dfc1f*/
    goto LABEL_25; /*0x5dfc1f*/
  }
  v8 = MEMORY[0xAC0208]; /*0x5dfbf6*/
  if ( MEMORY[0xAC0200] != -1 ) /*0x5dfbff*/
  {
    v9 = Timer::GetTicks() - MEMORY[0xAC0200]; /*0x5dfc0b*/
    if ( v9 >= v8 ) /*0x5dfc13*/
      goto LABEL_25; /*0x5dfc13*/
    v8 -= v9; /*0x5dfc15*/
  }
  if ( v8 ) /*0x5dfc19*/
    goto LABEL_24; /*0x5dfc19*/
LABEL_25:
  MEMORY[0xAC0200] = Timer::GetTicks(); /*0x5dfc25*/
  MEMORY[0xAC0204] = v13; /*0x5dfc3c*/
  MEMORY[0xAC0208] = 35; /*0x5dfc41*/
  memset(v15, 0, sizeof(v15)); /*0x5dfc52*/
  v16 = 0; /*0x5dfc60*/
  v17 = 0; /*0x5dfc62*/
  v15[0] = 2; /*0x5dfc63*/
  strcpy((char *)&v15[1], ToWideStringChar(*(char **)(MEMORY[0xA8DA60] + 4 * MEMORY[0xAC0260]))); /*0x5dfc8f*/
  Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, 0, 0, 0); /*0x5dfca9*/
  if ( MEMORY[0xA8D5FC] ) /*0x5dfcb4*/
    Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, (int)&MEMORY[0xA8D600], 0, 0); /*0x5dfccd*/
LABEL_27:
  result = MEMORY[0xABFF70]; /*0x5dfcd2*/
  v11 = MEMORY[0xABFF78]; /*0x5dfcd7*/
  if ( MEMORY[0xABFF70] != -1 ) /*0x5dfce0*/
  {
    result = Timer::GetTicks() - MEMORY[0xABFF70]; /*0x5dfcec*/
    if ( result >= v11 ) /*0x5dfcf4*/
      goto LABEL_31; /*0x5dfcf4*/
    v11 -= result; /*0x5dfcf6*/
  }
  if ( v11 ) /*0x5dfcfa*/
    goto LABEL_32; /*0x5dfcfa*/
LABEL_31:
  if ( MEMORY[0xAC0264] >= 2 ) /*0x5dfd03*/
  {
LABEL_32:
    if ( !a3 ) /*0x5dfd0c*/
      return result; /*0x5dfd0c*/
  }
  MEMORY[0xABFF70] = Timer::GetTicks(); /*0x5dfd12*/
  MEMORY[0xABFF74] = v13; /*0x5dfd29*/
  MEMORY[0xABFF78] = 83; /*0x5dfd2e*/
  memset(v15, 0, sizeof(v15)); /*0x5dfd3f*/
  v16 = 0; /*0x5dfd41*/
  v17 = 0; /*0x5dfd43*/
  v15[0] = 4; /*0x5dfd58*/
  v12 = MEMORY[0xA8B394]; /*0x5dfd66*/
  strcpy((char *)&v15[1], MEMORY[0xA8B380]); /*0x5dfd6f*/
  *(_DWORD *)((char *)&v15[11] + 3) = MEMORY[0xA8B37C]; /*0x5dfd86*/
  *(_DWORD *)((char *)&v15[12] + 3) = v12; /*0x5dfd95*/
  result = Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, 0, 0, 0); /*0x5dfd99*/
  if ( MEMORY[0xA8D5FC] ) /*0x5dfda4*/
    return Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, (int)&MEMORY[0xA8D600], 0, 0); /*0x5dfdbd*/
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


// ==== 0x005DFE00  SendNetworkPlayerOptions  this=int  sig=csp ====
char __fastcall Network_SendPlayerOptions(_DWORD *a1, int a2)
{
  char *v3; // eax
  char *v4; // eax
  const void *v6; // ebx
  char *v7; // eax
  char *v8; // eax
  _DWORD v9[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v10; // [esp+1D4h] [ebp-4h]
  char v11; // [esp+1D6h] [ebp-2h]

  if ( *a1 || MEMORY[0xA8D60C] ) /*0x5dfe1e*/
  {
    if ( *a1 != 2 ) /*0x5dff1a*/
      return 0; /*0x5dff1a*/
    v6 = a1 + 1; /*0x5dff20*/
    v7 = ToWideStringChar((char *)MEMORY[0xA8D610]); /*0x5dff28*/
    if ( _strcmpi(v6, v7) || !wcslen(MEMORY[0xA8D610]) || MEMORY[0xA8D60C] || MEMORY[0xAC0264] < 2 ) /*0x5dff68*/
    {
      return 0; /*0x5e00a0*/
    }
    else
    {
      memset(v9, 0, sizeof(v9)); /*0x5dff7d*/
      v10 = 0; /*0x5dff7f*/
      v11 = 0; /*0x5dff81*/
      v9[0] = 3; /*0x5dff8c*/
      strcpy((char *)&v9[1], MEMORY[0xA8B380]); /*0x5dffa7*/
      strcpy((char *)&v9[6], MEMORY[0xABFF7C]); /*0x5dffc9*/
      *(_DWORD *)((char *)&v9[11] + 3) = Session::GetPlayerOption(MEMORY[0xA8B238]); /*0x5dffe1*/
      *(_DWORD *)((char *)&v9[12] + 3) = Session::GetPlayerColor(MEMORY[0xA8B238]); /*0x5dffef*/
      *(_DWORD *)((char *)&v9[13] + 3) = WideString::Hash(MEMORY[0xA8D610]); /*0x5dfffe*/
      *(_DWORD *)((char *)&v9[20] + 3) = MEMORY[0xA8DA8C]; /*0x5e0009*/
      *(_DWORD *)((char *)&v9[21] + 3) = MEMORY[0xA8DA8C] == MEMORY[0x8316A4]; /*0x5e0019*/
      if ( MEMORY[0xA8DA84] ) /*0x5e001d*/
      {
        if ( *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 107) != -1 ) /*0x5e0038*/
          *(_DWORD *)((char *)&v9[21] + 3) = 0; /*0x5e003a*/
        Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v9, 455, 1, a2, 0, 0); /*0x5e0058*/
        v8 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x5e0065*/
        if ( !_strcmpi(v6, v8) ) /*0x5e006c*/
        {
          CheckGameSettingsChanged(1, 1); /*0x5e007c*/
          if ( MEMORY[0xA8B23C] ) /*0x5e0089*/
            (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 96))(MEMORY[0xA8B23C]); /*0x5e008d*/
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
    if ( wcslen(MEMORY[0xA8D610]) ) /*0x5dfe29*/
    {
      if ( !MEMORY[0xA8D60E] || (v3 = ToWideStringChar((char *)MEMORY[0xA8D610]), !_strcmpi(MEMORY[0xA8B380], v3)) ) /*0x5dfe52*/
      {
        v4 = ToWideStringChar((char *)MEMORY[0xA8D610]); /*0x5dfe67*/
        if ( _strcmpi(MEMORY[0xA8B380], v4) && !MEMORY[0xA8ED5C] ) /*0x5dfe85*/
          return 1; /*0x5dfe93*/
        memset(v9, 0, sizeof(v9)); /*0x5dfe9f*/
        v10 = 0; /*0x5dfea1*/
        v11 = 0; /*0x5dfea3*/
        v9[0] = 1; /*0x5dfea9*/
        strcpy((char *)&v9[1], ToWideStringChar((char *)MEMORY[0xA8D610])); /*0x5dfed4*/
        *(_DWORD *)((char *)&v9[11] + 3) = *(_DWORD *)((char *)&v9[11] + 3) & 0xFFFFFFFE | MEMORY[0xA8D60E] & 1; /*0x5dfef6*/
        Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v9, 455, 1, a2, 0, 0); /*0x5dff05*/
      }
    }
    return 1; /*0x5dff0d*/
  }
}

