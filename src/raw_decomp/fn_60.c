// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00600010  _VectorClass_PAVSpotLightClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::Get(_VectorClass_PAVSpotLightClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x60001a*/
}



// ==== 0x00600020  _VectorClass_PAVSpotLightClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::Add(_VectorClass_PAVSpotLightClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x600022*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x60002d*/
  {
    v3 = 0; /*0x60002f*/
    if ( m_8 <= 0 ) /*0x600033*/
      return 1; /*0x600053*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x600035*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x60003b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x600044*/
    {
      ++v3; /*0x600046*/
      ++v4; /*0x600047*/
      if ( v3 >= m_8 ) /*0x60004c*/
        return 1; /*0x60004c*/
    }
  }
  return 0; /*0x60004e*/
}



// ==== 0x00600060  _VectorClass_PAVSpotLightClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::Release(_VectorClass_PAVSpotLightClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x60006c*/
  {
    LOBYTE(this->m_C) = 0; /*0x600076*/
    if ( a3 ) /*0x60007c*/
      v4 = a3; /*0x600092*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x60008e*/
    LOBYTE(this->m_C) = 1; /*0x600096*/
    if ( v4 ) /*0x60009a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6000a5*/
      {
        m_8 = this->m_8; /*0x6000ac*/
        if ( a2 < m_8 ) /*0x6000b1*/
          m_8 = a2; /*0x6000b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6000b9*/
          ++i; /*0x6000be*/
        if ( BYTE1(this->m_C) ) /*0x6000cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6000d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6000de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6000e7*/
      this->m_8 = a2; /*0x6000ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x6000f2*/
      return 1; /*0x6000f8*/
    }
    else
    {
      return 0; /*0x60009f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSpotLightClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x600102*/
    return 1; /*0x600108*/
  }
}



// ==== 0x00600110  _VectorClass_PAVSpotLightClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SpotLightClass::Remove(_VectorClass_PAVSpotLightClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x60011d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x600123*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x60012b*/
  }
  BYTE1(this->m_C) = 0; /*0x60012e*/
  this->m_8 = 0; /*0x600131*/
}



// ==== 0x00600140  _VectorClass_PAVSpotLightClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::GetSize(_VectorClass_PAVSpotLightClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x600140*/
    return 0; /*0x600148*/
  m_8 = this->m_8; /*0x60014e*/
  result = 0; /*0x600151*/
  if ( m_8 <= 0 ) /*0x600155*/
    return -1; /*0x60016c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x60015b*/
  {
    if ( ++result >= m_8 ) /*0x60016a*/
      return -1; /*0x60016a*/
  }
  return result; /*0x60014a*/
}



// ==== 0x00600180  _VectorClass_PAVSpotLightClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpotLightClass::GetCapacity(_VectorClass_PAVSpotLightClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x600180*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x600195*/
  else
    return 0; /*0x600187*/
}



// ==== 0x006001A0  _DynamicVectorClass_PAVSpotLightClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::SetCapacity(
        _DynamicVectorClass_PAVSpotLightClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6001ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x6001b2*/
    if ( a3 ) /*0x6001b8*/
      v4 = a3; /*0x6001ce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6001ca*/
    LOBYTE(this->m_C) = 1; /*0x6001d2*/
    if ( !v4 ) /*0x6001d6*/
      return 0; /*0x60024a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6001d8*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x6001df*/
      if ( a2 < v5 ) /*0x6001e4*/
        v5 = a2; /*0x6001e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6001ec*/
        ++i; /*0x6001f1*/
      if ( BYTE1(this->m_C) ) /*0x6001fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x600209*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x600211*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x60021a*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x600222*/
    BYTE1(this->m_C) = a3 == 0; /*0x600225*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVSpotLightClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x60022e*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x600231*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x600239*/
    *(_DWORD *)this->__tail_10 = v7; /*0x60023b*/
  return 1; /*0x60023e*/
}



// ==== 0x00600250  _DynamicVectorClass_PAVSpotLightClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::FindItemIndex(_DynamicVectorClass_PAVSpotLightClass *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)this->__tail_10; /*0x600250*/
  result = 0; /*0x600253*/
  if ( v2 <= 0 ) /*0x600258*/
    return -1; /*0x60026f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x60025e*/
  {
    if ( ++result >= v2 ) /*0x60026d*/
      return -1; /*0x60026d*/
  }
  return result; /*0x600272*/
}



// ==== 0x00600280  _VectorClass_PAVSpotLightClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SpotLightClass::QueryInterface(_VectorClass_PAVSpotLightClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x600283*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpotLightClass *>::`vftable'; /*0x600286*/
  if ( v3 && BYTE1(this->m_C) ) /*0x600290*/
  {
    __3_YAXPAX_Z(v3); /*0x600298*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6002a0*/
  }
  BYTE1(this->m_C) = 0; /*0x6002ab*/
  this->m_8 = 0; /*0x6002b1*/
  if ( (a2 & 1) != 0 ) /*0x6002b8*/
    __3_YAXPAX_Z(this); /*0x6002bb*/
  return this->__pad_0; /*0x6002c5*/
}



// ==== 0x006002D0  _DynamicVectorClass_PAVSpotLightClass::Constructor_VectorClass_SpotLightClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SpotLightClass::Constructor_VectorClass_SpotLightClass___(
        _DynamicVectorClass_PAVSpotLightClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6002d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpotLightClass *>::`vftable'; /*0x6002d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6002e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6002e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6002f0*/
  }
  BYTE1(this->m_C) = 0; /*0x6002fb*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x600301*/
  if ( (a2 & 1) != 0 ) /*0x600308*/
    __3_YAXPAX_Z(this); /*0x60030b*/
  return this->__pad_0; /*0x600315*/
}



// ==== 0x00600320  sub_600320  this=-  sig=ida-proto ====
int sub_600320()
{
  dword_AC18B0 = 0; /*0x600322*/
  dword_AC18B4 = 0; /*0x600327*/
  dword_AC18B8 = 0; /*0x60032c*/
  dword_AC18BC = 0; /*0x600331*/
  return 0; /*0x600336*/
}



// ==== 0x00600340  sub_600340  this=-  sig=ida-proto ====
void sub_600340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x60034c*/
  dbl_AC1B40 = Math::Sqrt(v0 + v0); /*0x60035e*/
}



// ==== 0x00600370  sub_600370  this=-  sig=ida-proto ====
void sub_600370()
{
  dbl_AC48A0 = dbl_AC1B40 / 60.0; /*0x60037c*/
}



// ==== 0x00600390  sub_600390  this=-  sig=ida-proto ====
void sub_600390()
{
  dbl_AC4838 = 1.0 / dbl_AC48A0; /*0x60039c*/
}



// ==== 0x006003B0  sub_6003B0  this=-  sig=ida-proto ====
void sub_6003B0()
{
  dbl_AC4830 = 0.0174532925199433 * 45.0; /*0x6003bc*/
}



// ==== 0x006003D0  sub_6003D0  this=-  sig=ida-proto ====
void sub_6003D0()
{
  dbl_AC1B88 = 0.0174532925199433 * 60.0; /*0x6003dc*/
}



// ==== 0x006003F0  sub_6003F0  this=-  sig=ida-proto ====
void sub_6003F0()
{
  dbl_AC1898 = 0.0174532925199433 * 90.0; /*0x6003fc*/
}



// ==== 0x00600410  sub_600410  this=-  sig=ida-proto ====
__int64 sub_600410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1898 - dbl_AC1B88); /*0x600422*/
  result = Math::RoundToInt(v0 * dbl_AC1B40 * 0.5); /*0x600436*/
  dword_AC48AC = result; /*0x60043b*/
  return result; /*0x600440*/
}



// ==== 0x00600450  sub_600450  this=-  sig=ida-proto ====
void sub_600450()
{
  dbl_AC1CA0 = Math::ArcTan((double)dword_AC48AC * 0.00390625); /*0x600467*/
}



// ==== 0x00600480  sub_600480  this=-  sig=ida-proto ====
void sub_600480()
{
  dbl_AC4610 = Math::ArcTan((double)(2 * dword_AC48AC) / dbl_AC1B40); /*0x6004a2*/
}



// ==== 0x006004B0  sub_6004B0  this=-  sig=ida-proto ====
__int64 sub_6004B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC48AC) + 0.5); /*0x6004cb*/
  dword_AC489C = result; /*0x6004d0*/
  return result; /*0x6004d6*/
}



// ==== 0x006004E0  sub_6004E0  this=-  sig=ida-proto ====
int sub_6004E0()
{
  word_AC1B38 = 0; /*0x6004e2*/
  word_AC1B3A = 0; /*0x6004e8*/
  return 0; /*0x6004ee*/
}



// ==== 0x006004F0  sub_6004F0  this=-  sig=ida-proto ====
int sub_6004F0()
{
  dword_AC1DF8 = 0; /*0x6004f2*/
  dword_AC1DFC = 0; /*0x6004f7*/
  dword_AC1E00 = 0; /*0x6004fc*/
  return 0; /*0x600501*/
}



// ==== 0x00600510  sub_600510  this=-  sig=ida-proto ====
int sub_600510()
{
  dword_AC4890 = 0; /*0x600515*/
  dword_AC4888 = 128; /*0x60051f*/
  dword_AC488C = 128; /*0x600524*/
  return 128; /*0x600529*/
}



// ==== 0x00600530  sub_600530  this=-  sig=ida-proto ====
int sub_600530()
{
  sub_6B9450(g_DialogHashTable); /*0x600535*/
  return atexit(unknown_libname_26); /*0x600545*/
}



// ==== 0x00600550  unknown_libname_26  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_26()
{
  HashTable::Clear((int)g_DialogHashTable); /*0x600555*/
}



// ==== 0x00600630  Gadget::InitProperties  this=Gadget  sig=csp ====
_DWORD *__thiscall Gadget::InitProperties(Gadget *this)
{
  unknown_libname_74(&this->m_1[3]); /*0x600636*/
  unknown_libname_74(&this->m_5[3]); /*0x60063e*/
  *(_DWORD *)this->__pad_0 = 0; /*0x600646*/
  this->u32_C = -1; /*0x60064c*/
  this->u32_14 = -1; /*0x60064f*/
  this->u32_10 = 0; /*0x600652*/
  return this->__pad_0; /*0x60065b*/
}



// ==== 0x00600660  ObjectClass::ReadPointerFromECX  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x600662*/
}



// ==== 0x00600670  ComboBoxOwnerDraw::GetWidthHeight  this=ComboBoxOwnerDraw  sig=csp ====
int __thiscall ComboBoxOwnerDraw::GetWidthHeight(ComboBoxOwnerDraw *this)
{
  return *(_DWORD *)this->__pad_0 * this->ComboBoxOwnerDraw_field_0x04; /*0x600676*/
}



// ==== 0x00600680  ComboBoxOwnerDraw::MatchDimensions  this=ComboBoxOwnerDraw  sig=csp ====
bool __thiscall ComboBoxOwnerDraw::MatchDimensions(ComboBoxOwnerDraw *this, _DWORD *a2)
{
  return a2[1] == this->ComboBoxOwnerDraw_field_0x04 && *a2 == *(_DWORD *)this->__pad_0; /*0x60068d*/
}



// ==== 0x006006B0  sub_6006B0  this=-  sig=ida-proto ====
int sub_6006B0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x6006b0*/
  dbl_AC1B68 = 0.2; /*0x6006b7*/
  dbl_AC1B70 = 0.8; /*0x6006cb*/
  dword_AC1B78 = 128; /*0x6006df*/
  v1 = 0; /*0x6006e4*/
  do /*0x6006e9*/
  {
    ++v1; /*0x6006e6*/
    v0 >>= 1; /*0x6006e7*/
  }
  while ( v0 ); /*0x6006e9*/
  dword_AC1B58 = 0; /*0x6006eb*/
  dword_AC1B54 = v1 - 1; /*0x6006f9*/
  dword_AC1B4C = 0; /*0x6006ff*/
  byte_AC1B5C = 0; /*0x600705*/
  dword_AC1B50 = 1 << (v1 - 1); /*0x60070b*/
  dword_AC1B48 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x600723*/
  memset(dword_AC1B48, 0, 4 * dword_AC1B50); /*0x600729*/
  dword_AC1B60 = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600730*/
  return atexit(sub_600750); /*0x600742*/
}



// ==== 0x00600750  sub_600750  this=-  sig=ida-proto ====
void __cdecl sub_600750()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_AC1B50; /*0x600750*/
  for ( i = 0; i < dword_AC1B50; v0 = dword_AC1B50 ) /*0x60075d*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_AC1B48 + i); /*0x600764*/
    while ( v2 ) /*0x600769*/
    {
      v3 = v2; /*0x60076b*/
      v2 = (_DWORD *)v2[2]; /*0x60076d*/
      __3_YAXPAX_Z(v3); /*0x600771*/
    }
    *((_DWORD *)dword_AC1B48 + i++) = 0; /*0x600784*/
  }
  v4 = dword_AC1B78; /*0x600795*/
  dword_AC1B4C = 0; /*0x60079b*/
  if ( v0 > dword_AC1B78 ) /*0x6007a7*/
  {
    do /*0x60085a*/
    {
      if ( byte_AC1B5C || v0 <= v4 ) /*0x6007bd*/
        break; /*0x6007bd*/
      v5 = (int *)dword_AC1B48; /*0x6007c9*/
      v6 = v0; /*0x6007cf*/
      dword_AC1B50 = v0 >> 1; /*0x6007d4*/
      --dword_AC1B54; /*0x6007e0*/
      dword_AC1B48 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6007f9*/
      memset(dword_AC1B48, 0, 4 * dword_AC1B50); /*0x600801*/
      if ( v6 > 0 ) /*0x600803*/
      {
        v7 = v5; /*0x600805*/
        v8 = v6; /*0x600807*/
        do /*0x600842*/
        {
          v9 = *v7; /*0x600809*/
          if ( *v7 ) /*0x600809*/
          {
            do /*0x60083c*/
            {
              v10 = dword_AC1B60(v9) & ((1 << dword_AC1B54) - 1); /*0x600825*/
              v11 = *((_DWORD *)dword_AC1B48 + v10); /*0x60082c*/
              *((_DWORD *)dword_AC1B48 + v10) = v9; /*0x60082f*/
              v12 = *(_DWORD *)(v9 + 8); /*0x600832*/
              *(_DWORD *)(v9 + 8) = v11; /*0x600835*/
              v9 = v12; /*0x60083a*/
            }
            while ( v12 ); /*0x60083c*/
          }
          ++v7; /*0x60083e*/
          --v8; /*0x600841*/
        }
        while ( v8 ); /*0x600842*/
      }
      __3_YAXPAX_Z(v5); /*0x600845*/
      v4 = dword_AC1B78; /*0x60084a*/
      v0 = dword_AC1B50; /*0x600850*/
    }
    while ( dword_AC1B50 > (unsigned int)dword_AC1B78 ); /*0x60085a*/
  }
  __3_YAXPAX_Z(dword_AC1B48); /*0x600866*/
}



// ==== 0x00600880  sub_600880  this=-  sig=ida-proto ====
int sub_600880()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600880*/
  dbl_AC18E0 = 0.2; /*0x600887*/
  dbl_AC18E8 = 0.8; /*0x60089b*/
  dword_AC18F0 = 128; /*0x6008af*/
  v1 = 0; /*0x6008b4*/
  do /*0x6008b9*/
  {
    ++v1; /*0x6008b6*/
    v0 >>= 1; /*0x6008b7*/
  }
  while ( v0 ); /*0x6008b9*/
  dword_AC18D0 = 0; /*0x6008bb*/
  dword_AC18CC = v1 - 1; /*0x6008c9*/
  unk_AC18C4 = 0; /*0x6008cf*/
  byte_AC18D4 = 0; /*0x6008d5*/
  dword_AC18C8 = 1 << (v1 - 1); /*0x6008db*/
  g_DialogPool = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x6008f3*/
  memset(g_DialogPool, 0, 4 * dword_AC18C8); /*0x6008f9*/
  dword_AC18D8 = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600900*/
  return atexit(sub_600920); /*0x600912*/
}



// ==== 0x00600920  sub_600920  this=-  sig=ida-proto ====
void __cdecl sub_600920()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_AC18C8; /*0x600920*/
  for ( i = 0; i < dword_AC18C8; v0 = dword_AC18C8 ) /*0x60092d*/
  {
    v2 = (_DWORD *)*((_DWORD *)g_DialogPool + i); /*0x600934*/
    while ( v2 ) /*0x600939*/
    {
      v3 = v2; /*0x60093b*/
      v2 = (_DWORD *)v2[2]; /*0x60093d*/
      __3_YAXPAX_Z(v3); /*0x600941*/
    }
    *((_DWORD *)g_DialogPool + i++) = 0; /*0x600954*/
  }
  v4 = dword_AC18F0; /*0x600965*/
  unk_AC18C4 = 0; /*0x60096b*/
  if ( v0 > dword_AC18F0 ) /*0x600977*/
  {
    do /*0x600a2a*/
    {
      if ( byte_AC18D4 || v0 <= v4 ) /*0x60098d*/
        break; /*0x60098d*/
      v5 = (int *)g_DialogPool; /*0x600999*/
      v6 = v0; /*0x60099f*/
      dword_AC18C8 = v0 >> 1; /*0x6009a4*/
      --dword_AC18CC; /*0x6009b0*/
      g_DialogPool = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6009c9*/
      memset(g_DialogPool, 0, 4 * dword_AC18C8); /*0x6009d1*/
      if ( v6 > 0 ) /*0x6009d3*/
      {
        v7 = v5; /*0x6009d5*/
        v8 = v6; /*0x6009d7*/
        do /*0x600a12*/
        {
          v9 = *v7; /*0x6009d9*/
          if ( *v7 ) /*0x6009d9*/
          {
            do /*0x600a0c*/
            {
              v10 = dword_AC18D8(v9) & ((1 << dword_AC18CC) - 1); /*0x6009f5*/
              v11 = *((_DWORD *)g_DialogPool + v10); /*0x6009fc*/
              *((_DWORD *)g_DialogPool + v10) = v9; /*0x6009ff*/
              v12 = *(_DWORD *)(v9 + 8); /*0x600a02*/
              *(_DWORD *)(v9 + 8) = v11; /*0x600a05*/
              v9 = v12; /*0x600a0a*/
            }
            while ( v12 ); /*0x600a0c*/
          }
          ++v7; /*0x600a0e*/
          --v8; /*0x600a11*/
        }
        while ( v8 ); /*0x600a12*/
      }
      __3_YAXPAX_Z(v5); /*0x600a15*/
      v4 = dword_AC18F0; /*0x600a1a*/
      v0 = dword_AC18C8; /*0x600a20*/
    }
    while ( dword_AC18C8 > (unsigned int)dword_AC18F0 ); /*0x600a2a*/
  }
  __3_YAXPAX_Z(g_DialogPool); /*0x600a36*/
}



// ==== 0x00600A50  sub_600A50  this=-  sig=ida-proto ====
int sub_600A50()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600a50*/
  dbl_AC1B20 = 0.2; /*0x600a57*/
  dbl_AC1B28 = 0.8; /*0x600a6b*/
  dword_AC1B30 = 128; /*0x600a7f*/
  v1 = 0; /*0x600a84*/
  do /*0x600a89*/
  {
    ++v1; /*0x600a86*/
    v0 >>= 1; /*0x600a87*/
  }
  while ( v0 ); /*0x600a89*/
  dword_AC1B10 = 0; /*0x600a8b*/
  dword_AC1B0C = v1 - 1; /*0x600a99*/
  dword_AC1B04 = 0; /*0x600a9f*/
  byte_AC1B14 = 0; /*0x600aa5*/
  dword_AC1B08 = 1 << (v1 - 1); /*0x600aab*/
  dword_AC1B00 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x600ac3*/
  memset(dword_AC1B00, 0, 4 * dword_AC1B08); /*0x600ac9*/
  dword_AC1B18 = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600ad0*/
  return atexit(sub_600AF0); /*0x600ae2*/
}



// ==== 0x00600AF0  sub_600AF0  this=-  sig=ida-proto ====
void __cdecl sub_600AF0()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  int j; // ebp
  int v3; // edi
  _DWORD *k; // eax
  void **v5; // ecx
  unsigned int v6; // ecx
  int *v7; // ebp
  int v8; // esi
  int *v9; // edi
  int v10; // ebx
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int i; // [esp+10h] [ebp-4h]

  v0 = dword_AC1B08; /*0x600af1*/
  v1 = 0; /*0x600afa*/
  for ( i = 0; v1 < dword_AC1B08; v0 = dword_AC1B08 ) /*0x600b04*/
  {
    for ( j = *((_DWORD *)dword_AC1B00 + v1); j; v1 = i ) /*0x600b10*/
    {
      v3 = j; /*0x600b12*/
      j = *(_DWORD *)(j + 516); /*0x600b14*/
      if ( *(_DWORD *)(v3 + 44) ) /*0x600b1e*/
      {
        __3_YAXPAX_Z(*(void **)(v3 + 44)); /*0x600b29*/
        *(_DWORD *)(v3 + 44) = 0; /*0x600b31*/
      }
      for ( k = *(_DWORD **)(v3 + 56); k; k = *(_DWORD **)(v3 + 56) ) /*0x600b39*/
        LinkedList::Remove((_DWORD *)(v3 + 4), k); /*0x600b3e*/
      v5 = *(void ***)(v3 + 64); /*0x600b4a*/
      if ( v5 ) /*0x600b4f*/
        DeleteAndZero::OrFree(v5, 1); /*0x600b53*/
      __3_YAXPAX_Z((void *)v3); /*0x600b59*/
    }
    i = ++v1; /*0x600b70*/
    *((_DWORD *)dword_AC1B00 + v1 - 1) = 0; /*0x600b74*/
  }
  v6 = dword_AC1B30; /*0x600b81*/
  dword_AC1B04 = 0; /*0x600b87*/
  if ( v0 > dword_AC1B30 ) /*0x600b8f*/
  {
    do /*0x600c46*/
    {
      if ( byte_AC1B14 || v0 <= v6 ) /*0x600ba5*/
        break; /*0x600ba5*/
      v7 = (int *)dword_AC1B00; /*0x600bb1*/
      v8 = v0; /*0x600bb7*/
      dword_AC1B08 = v0 >> 1; /*0x600bbb*/
      --dword_AC1B0C; /*0x600bc5*/
      dword_AC1B00 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x600bdd*/
      memset(dword_AC1B00, 0, 4 * dword_AC1B08); /*0x600be5*/
      if ( v8 > 0 ) /*0x600be7*/
      {
        v9 = v7; /*0x600be9*/
        v10 = v8; /*0x600beb*/
        do /*0x600c2c*/
        {
          v11 = *v9; /*0x600bed*/
          if ( *v9 ) /*0x600bed*/
          {
            do /*0x600c26*/
            {
              v12 = dword_AC1B18(v11) & ((1 << dword_AC1B0C) - 1); /*0x600c09*/
              v13 = *((_DWORD *)dword_AC1B00 + v12); /*0x600c10*/
              *((_DWORD *)dword_AC1B00 + v12) = v11; /*0x600c13*/
              v14 = *(_DWORD *)(v11 + 516); /*0x600c16*/
              *(_DWORD *)(v11 + 516) = v13; /*0x600c1c*/
              v11 = v14; /*0x600c24*/
            }
            while ( v14 ); /*0x600c26*/
          }
          ++v9; /*0x600c28*/
          --v10; /*0x600c2b*/
        }
        while ( v10 ); /*0x600c2c*/
      }
      __3_YAXPAX_Z(v7); /*0x600c31*/
      v6 = dword_AC1B30; /*0x600c36*/
      v0 = dword_AC1B08; /*0x600c3c*/
    }
    while ( dword_AC1B08 > (unsigned int)dword_AC1B30 ); /*0x600c46*/
  }
  __3_YAXPAX_Z(dword_AC1B00); /*0x600c53*/
}



// ==== 0x00600C70  NavigateDialogTab  this=ObjectClass  sig=csp ====
int __fastcall NavigateDialogTab(HWND hCtl, unsigned __int8 a2)
{
  HWND Parent; // eax
  int result; // eax

  Parent = GetParent(hCtl); /*0x600c77*/
  result = (int)GetNextDlgTabItem(Parent, hCtl, a2); /*0x600c86*/
  if ( (HWND)result == hCtl ) /*0x600c90*/
  {
    LOBYTE(result) = 0; /*0x600c9c*/
  }
  else
  {
    result = (int)SetFocus((HWND)result); /*0x600c93*/
    LOBYTE(result) = 1; /*0x600c99*/
  }
  return result; /*0x600c8e*/
}



// ==== 0x00600CA0  ValidateDialogEvent  this=-  sig=csp ====
int __fastcall Dialog_ValidateEvent(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x600cac*/
  if ( !dword_AC1B04 ) /*0x600cb0*/
    goto LABEL_5; /*0x600cb0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x600cd1*/
  if ( !v3 ) /*0x600cd6*/
    goto LABEL_5; /*0x600cd6*/
  while ( *v3 != v8 ) /*0x600cde*/
  {
    v3 = (_DWORD *)v3[129]; /*0x600ce4*/
    if ( !v3 ) /*0x600cec*/
      goto LABEL_5; /*0x600cec*/
  }
  v7 = v3 + 1; /*0x600f18*/
  if ( v7 ) /*0x600f1d*/
    v4 = (void *)v7[27]; /*0x600f23*/
  else
LABEL_5:
    v4 = 0; /*0x600cee*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x600cf1*/
  if ( (v4 == (void *)268 /*0x600f05*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || v4 == (void *)293
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)276
     || v4 == (void *)700
     || v4 == (void *)275
     || v4 == (void *)265
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)270
     || v4 == (void *)274)
    && DlgCtrlID == 1684 )
  {
    return 30; /*0x600f0f*/
  }
  if ( (v4 == (void *)188 /*0x600f69*/
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 30; /*0x600f69*/
  }
  if ( v4 != (void *)259 && v4 != (void *)3015 ) /*0x600f82*/
    goto LABEL_102; /*0x600f82*/
  if ( DlgCtrlID != 1780 ) /*0x600f8e*/
  {
    if ( DlgCtrlID == 1779 /*0x601026*/
      || DlgCtrlID == 1695
      || DlgCtrlID == 1782
      || DlgCtrlID == 1775
      || DlgCtrlID == 1777
      || DlgCtrlID == 1776
      || DlgCtrlID == 1778
      || DlgCtrlID == 1852
      || DlgCtrlID == 1853
      || DlgCtrlID == 1854
      || DlgCtrlID == 1855
      || DlgCtrlID == 1856
      || DlgCtrlID == 1845
      || DlgCtrlID == 1842
      || DlgCtrlID == 1002
      || DlgCtrlID == 1843 )
    {
      return 30; /*0x601026*/
    }
    if ( DlgCtrlID == 1041 /*0x60109a*/
      || DlgCtrlID == 1042
      || DlgCtrlID == 1049
      || DlgCtrlID == 1050
      || DlgCtrlID == 1699
      || DlgCtrlID == 1700
      || DlgCtrlID == 1701
      || DlgCtrlID == 1703
      || DlgCtrlID == 1702
      || DlgCtrlID == 1704
      || DlgCtrlID == 1850
      || DlgCtrlID == 1849
      || DlgCtrlID == 1851
      || DlgCtrlID == 1848 )
    {
      return 60; /*0x6010a4*/
    }
LABEL_102:
    if ( v4 != (void *)264 && v4 != (void *)3014 ) /*0x6010b3*/
    {
LABEL_164:
      Event::IsValidActionType(v4); /*0x601346*/
      return 15; /*0x601348*/
    }
    if ( DlgCtrlID != 1746 /*0x601197*/
      && DlgCtrlID != 1002
      && DlgCtrlID != 1843
      && DlgCtrlID != 1819
      && DlgCtrlID != 1842
      && DlgCtrlID != 1693
      && DlgCtrlID != 1695
      && DlgCtrlID != 1694
      && DlgCtrlID != 1696
      && DlgCtrlID != 1931
      && DlgCtrlID != 1480
      && DlgCtrlID != 1041
      && DlgCtrlID != 1042
      && DlgCtrlID != 1043
      && DlgCtrlID != 1044
      && DlgCtrlID != 1045
      && DlgCtrlID != 1046
      && DlgCtrlID != 1047
      && DlgCtrlID != 1048 )
    {
      if ( DlgCtrlID == 1049 /*0x60133b*/
        || DlgCtrlID == 1050
        || DlgCtrlID == 1051
        || DlgCtrlID == 1052
        || DlgCtrlID == 1053
        || DlgCtrlID == 1054
        || DlgCtrlID == 1055
        || DlgCtrlID == 1056
        || DlgCtrlID == 1699
        || DlgCtrlID == 1700
        || DlgCtrlID == 1705
        || DlgCtrlID == 1708
        || DlgCtrlID == 1711
        || DlgCtrlID == 1714
        || DlgCtrlID == 1717
        || DlgCtrlID == 1720
        || DlgCtrlID == 1701
        || DlgCtrlID == 1703
        || DlgCtrlID == 1706
        || DlgCtrlID == 1709
        || DlgCtrlID == 1712
        || DlgCtrlID == 1715
        || DlgCtrlID == 1718
        || DlgCtrlID == 1721
        || DlgCtrlID == 1702
        || DlgCtrlID == 1704
        || DlgCtrlID == 1707
        || DlgCtrlID == 1710
        || DlgCtrlID == 1713
        || DlgCtrlID == 1716
        || DlgCtrlID == 1719
        || DlgCtrlID == 1722
        || DlgCtrlID == 1802
        || DlgCtrlID == 1803
        || DlgCtrlID == 1804
        || DlgCtrlID == 1805
        || DlgCtrlID == 1806
        || DlgCtrlID == 1807
        || DlgCtrlID == 1808
        || DlgCtrlID == 1809 )
      {
        return 60; /*0x601345*/
      }
      goto LABEL_164; /*0x60133b*/
    }
    return 30; /*0x600f73*/
  }
  return 15; /*0x600f07*/
}



// ==== 0x00601360  Event::IsValidActionType  this=Dialog  sig=csp ====
int __thiscall Event::IsValidActionType(Event *this)
{
  int result; // eax

  LOBYTE(result) = this == (Event *)268 /*0x6015d5*/
                || this == (Event *)148
                || this == (Event *)182
                || this == (Event *)163
                || this == (Event *)115
                || this == (Event *)216
                || this == (Event *)3003
                || this == (Event *)245
                || this == (Event *)261
                || this == (Event *)226
                || this == (Event *)213
                || this == (Event *)693
                || this == (Event *)183
                || this == (Event *)692
                || this == (Event *)257
                || this == (Event *)297
                || this == (Event *)3015
                || this == (Event *)3014
                || this == (Event *)215
                || this == (Event *)264
                || this == (Event *)188
                || this == (Event *)189
                || this == (Event *)187
                || this == (Event *)181
                || this == (Event *)3002
                || this == (Event *)255
                || this == (Event *)234
                || this == (Event *)107
                || this == (Event *)256
                || this == (Event *)258
                || this == (Event *)184
                || this == (Event *)214
                || this == (Event *)259
                || this == (Event *)287
                || this == (Event *)293
                || this == (Event *)277
                || this == (Event *)290
                || this == (Event *)274
                || this == (Event *)231
                || this == (Event *)278
                || this == (Event *)194
                || this == (Event *)201
                || this == (Event *)285
                || this == (Event *)284
                || this == (Event *)275
                || this == (Event *)254
                || this == (Event *)265
                || this == (Event *)271
                || this == (Event *)279
                || this == (Event *)276
                || this == (Event *)195
                || this == (Event *)292
                || this == (Event *)230
                || this == (Event *)243
                || this == (Event *)244
                || this == (Event *)700
                || this == (Event *)283
                || this == (Event *)270;
  return result; /*0x6015d4*/
}



// ==== 0x006015E0  CtlDialogColorHandler  this=-  sig=csp ====
int __fastcall Dialog_CtlColorHandler(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  int result; // eax
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6015ec*/
  if ( !dword_AC1B04 ) /*0x6015f0*/
    goto LABEL_5; /*0x6015f0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x601611*/
  if ( !v3 ) /*0x601616*/
    goto LABEL_5; /*0x601616*/
  while ( *v3 != v9 ) /*0x60161e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x601624*/
    if ( !v3 ) /*0x60162c*/
      goto LABEL_5; /*0x60162c*/
  }
  v8 = v3 + 1; /*0x6018c0*/
  if ( v8 ) /*0x6018c5*/
    v4 = (void *)v8[27]; /*0x6018cb*/
  else
LABEL_5:
    v4 = 0; /*0x60162e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x601631*/
  v6 = DlgCtrlID; /*0x60163d*/
  if ( (v4 == (void *)268 /*0x60188d*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || v4 == (void *)293
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)276
     || v4 == (void *)700
     || v4 == (void *)275
     || v4 == (void *)265
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)270
     || v4 == (void *)274)
    && DlgCtrlID == 1684
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 1; /*0x60188d*/
  }
  if ( v4 == (void *)259 || v4 == (void *)3015 ) /*0x6018a1*/
  {
    if ( DlgCtrlID == 1780 ) /*0x6018ad*/
      return 3; /*0x6018b7*/
    if ( DlgCtrlID == 1779 /*0x601a4d*/
      || DlgCtrlID == 1695
      || DlgCtrlID == 1782
      || DlgCtrlID == 1775
      || DlgCtrlID == 1777
      || DlgCtrlID == 1776
      || DlgCtrlID == 1778
      || DlgCtrlID == 1843
      || DlgCtrlID == 1845
      || DlgCtrlID == 1842
      || DlgCtrlID == 1002
      || DlgCtrlID == 1852
      || DlgCtrlID == 1853
      || DlgCtrlID == 1854
      || DlgCtrlID == 1855
      || DlgCtrlID == 1856
      || DlgCtrlID == 1846
      || DlgCtrlID == 1847
      || DlgCtrlID == 1041
      || DlgCtrlID == 1042
      || DlgCtrlID == 1049
      || DlgCtrlID == 1050
      || DlgCtrlID == 1699
      || DlgCtrlID == 1700
      || DlgCtrlID == 1701
      || DlgCtrlID == 1703
      || DlgCtrlID == 1702
      || DlgCtrlID == 1704
      || DlgCtrlID == 1850
      || DlgCtrlID == 1849
      || DlgCtrlID == 1851
      || DlgCtrlID == 1848 )
    {
      return 1; /*0x601a4d*/
    }
  }
  if ( (v4 == (void *)264 || v4 == (void *)3014) /*0x601cf5*/
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1843
     || DlgCtrlID == 1819
     || DlgCtrlID == 1842
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809) )
  {
    return 1; /*0x601cf5*/
  }
  if ( !Event::IsValidActionType(v4) ) /*0x601cf9*/
    return 1; /*0x601cf9*/
  result = 3; /*0x601d08*/
  if ( v6 != 1685 ) /*0x601d0d*/
    return 1; /*0x601d0f*/
  return result; /*0x6018af*/
}



// ==== 0x00601D20  ValidateDialogControl  this=-  sig=csp ====
int __fastcall Dialog_ValidateControl(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x601d2c*/
  if ( !dword_AC1B04 ) /*0x601d30*/
    goto LABEL_5; /*0x601d30*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x601d51*/
  if ( !v3 ) /*0x601d56*/
    goto LABEL_5; /*0x601d56*/
  while ( *v3 != v9 ) /*0x601d5e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x601d64*/
    if ( !v3 ) /*0x601d6c*/
      goto LABEL_5; /*0x601d6c*/
  }
  v8 = v3 + 1; /*0x602000*/
  if ( v8 ) /*0x602005*/
    v4 = (void *)v8[27]; /*0x60200b*/
  else
LABEL_5:
    v4 = 0; /*0x601d6e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x601d71*/
  v6 = DlgCtrlID; /*0x601d7d*/
  if ( (v4 != (void *)268 /*0x601fcd*/
     && v4 != (void *)148
     && v4 != (void *)163
     && v4 != (void *)115
     && v4 != (void *)216
     && v4 != (void *)3003
     && v4 != (void *)245
     && v4 != (void *)261
     && v4 != (void *)226
     && v4 != (void *)213
     && v4 != (void *)693
     && v4 != (void *)183
     && v4 != (void *)692
     && v4 != (void *)3015
     && v4 != (void *)257
     && v4 != (void *)297
     && v4 != (void *)3014
     && v4 != (void *)215
     && v4 != (void *)264
     && v4 != (void *)188
     && v4 != (void *)189
     && v4 != (void *)187
     && v4 != (void *)181
     && v4 != (void *)3002
     && v4 != (void *)255
     && v4 != (void *)107
     && v4 != (void *)256
     && v4 != (void *)258
     && v4 != (void *)184
     && v4 != (void *)214
     && v4 != (void *)259
     && v4 != (void *)293
     && v4 != (void *)231
     && v4 != (void *)278
     && v4 != (void *)194
     && v4 != (void *)201
     && v4 != (void *)285
     && v4 != (void *)284
     && v4 != (void *)276
     && v4 != (void *)700
     && v4 != (void *)275
     && v4 != (void *)265
     && v4 != (void *)271
     && v4 != (void *)279
     && v4 != (void *)230
     && v4 != (void *)243
     && v4 != (void *)244
     && v4 != (void *)270
     && v4 != (void *)274
     || DlgCtrlID != 1684)
    && (v4 != (void *)188
     && v4 != (void *)189
     && v4 != (void *)258
     && v4 != (void *)194
     && v4 != (void *)201
     && v4 != (void *)3014
     || DlgCtrlID != 1772 && DlgCtrlID != 1448) )
  {
    if ( v4 == (void *)259 || v4 == (void *)3015 ) /*0x601fe1*/
    {
      switch ( DlgCtrlID ) /*0x601fed*/
      {
        case 1780: /*0x601fed*/
          return 16; /*0x601ff7*/
        case 1779: /*0x601fed*/
        case 1695: /*0x601fed*/
        case 1782: /*0x601fed*/
        case 1775: /*0x601fed*/
        case 1777: /*0x601fed*/
        case 1776: /*0x601fed*/
        case 1778: /*0x601fed*/
        case 1843: /*0x601fed*/
        case 1845: /*0x601fed*/
        case 1842: /*0x601fed*/
        case 1002: /*0x601fed*/
          return 8; /*0x602091*/
        case 1852: /*0x601fed*/
        case 1853: /*0x601fed*/
        case 1854: /*0x601fed*/
        case 1855: /*0x601fed*/
        case 1856: /*0x601fed*/
          return 16; /*0x6023d8*/
        case 1041: /*0x601fed*/
        case 1042: /*0x601fed*/
        case 1049: /*0x601fed*/
        case 1050: /*0x601fed*/
        case 1699: /*0x601fed*/
        case 1700: /*0x601fed*/
        case 1701: /*0x601fed*/
        case 1703: /*0x601fed*/
        case 1702: /*0x601fed*/
        case 1704: /*0x601fed*/
        case 1850: /*0x601fed*/
        case 1849: /*0x601fed*/
        case 1851: /*0x601fed*/
        case 1848: /*0x601fed*/
          return 32; /*0x602141*/
      }
    }
    if ( v4 == (void *)264 || v4 == (void *)3014 ) /*0x60215a*/
    {
      if ( DlgCtrlID == 1746 /*0x60220e*/
        || DlgCtrlID == 1002
        || DlgCtrlID == 1843
        || DlgCtrlID == 1819
        || DlgCtrlID == 1842
        || DlgCtrlID == 1693
        || DlgCtrlID == 1695
        || DlgCtrlID == 1694
        || DlgCtrlID == 1696
        || DlgCtrlID == 1931
        || DlgCtrlID == 1480
        || DlgCtrlID == 1041
        || DlgCtrlID == 1042
        || DlgCtrlID == 1043
        || DlgCtrlID == 1044
        || DlgCtrlID == 1045
        || DlgCtrlID == 1046
        || DlgCtrlID == 1047
        || DlgCtrlID == 1048 )
      {
        return 32; /*0x60214b*/
      }
      if ( DlgCtrlID == 1049 /*0x6023b2*/
        || DlgCtrlID == 1050
        || DlgCtrlID == 1051
        || DlgCtrlID == 1052
        || DlgCtrlID == 1053
        || DlgCtrlID == 1054
        || DlgCtrlID == 1055
        || DlgCtrlID == 1056
        || DlgCtrlID == 1699
        || DlgCtrlID == 1700
        || DlgCtrlID == 1705
        || DlgCtrlID == 1708
        || DlgCtrlID == 1711
        || DlgCtrlID == 1714
        || DlgCtrlID == 1717
        || DlgCtrlID == 1720
        || DlgCtrlID == 1701
        || DlgCtrlID == 1703
        || DlgCtrlID == 1706
        || DlgCtrlID == 1709
        || DlgCtrlID == 1712
        || DlgCtrlID == 1715
        || DlgCtrlID == 1718
        || DlgCtrlID == 1721
        || DlgCtrlID == 1702
        || DlgCtrlID == 1704
        || DlgCtrlID == 1707
        || DlgCtrlID == 1710
        || DlgCtrlID == 1713
        || DlgCtrlID == 1716
        || DlgCtrlID == 1719
        || DlgCtrlID == 1722
        || DlgCtrlID == 1802
        || DlgCtrlID == 1803
        || DlgCtrlID == 1804
        || DlgCtrlID == 1805
        || DlgCtrlID == 1806
        || DlgCtrlID == 1807
        || DlgCtrlID == 1808
        || DlgCtrlID == 1809 )
      {
        return 64; /*0x6023bc*/
      }
    }
    if ( Event::IsValidActionType(v4) && v6 == 1685 ) /*0x6023ce*/
      return 16; /*0x6023ce*/
  }
  return 8; /*0x601fef*/
}



// ==== 0x006023F0  sub_6023F0  this=-  sig=ida-proto ====
int __fastcall sub_6023F0(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x6023fc*/
  if ( !dword_AC1B04 ) /*0x602400*/
    goto LABEL_5; /*0x602400*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x602421*/
  if ( !v3 ) /*0x602426*/
    goto LABEL_5; /*0x602426*/
  while ( *v3 != v8 ) /*0x60242e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602430*/
    if ( !v3 ) /*0x602438*/
      goto LABEL_5; /*0x602438*/
  }
  v7 = v3 + 1; /*0x60246e*/
  if ( v7 ) /*0x602473*/
    v4 = v7[27]; /*0x602475*/
  else
LABEL_5:
    v4 = 0; /*0x60243a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60243d*/
  if ( (v4 == 259 || v4 == 3015) && DlgCtrlID == 1780 ) /*0x602458*/
    return HIDWORD(dword_8871E0->GenericClick); /*0x602462*/
  else
    return -1; /*0x60247b*/
}



// ==== 0x00602490  IsValidActionDialog  this=-  sig=csp ====
bool __fastcall sub_602490(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // esi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60249c*/
  if ( !dword_AC1B04 ) /*0x6024a0*/
    goto LABEL_5; /*0x6024a0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x6024c1*/
  if ( !v3 ) /*0x6024c6*/
    goto LABEL_5; /*0x6024c6*/
  while ( *v3 != v8 ) /*0x6024ce*/
  {
    v3 = (_DWORD *)v3[129]; /*0x6024d4*/
    if ( !v3 ) /*0x6024dc*/
      goto LABEL_5; /*0x6024dc*/
  }
  v7 = v3 + 1; /*0x60263c*/
  if ( v7 ) /*0x602641*/
    v4 = (void *)v7[27]; /*0x602647*/
  else
LABEL_5:
    v4 = 0; /*0x6024de*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x6024ed*/
  if ( (v4 == (void *)268 /*0x60262c*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || Dialog::IsSpecialTemplate(v4))
    && DlgCtrlID == 1684 )
  {
    return 1; /*0x60262f*/
  }
  if ( (v4 == (void *)188 /*0x60268d*/
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 1; /*0x602690*/
  }
  if ( (v4 == (void *)259 || v4 == (void *)3015) /*0x6027f3*/
    && (DlgCtrlID == 1779
     || DlgCtrlID == 1780
     || DlgCtrlID == 1695
     || DlgCtrlID == 1782
     || DlgCtrlID == 1775
     || DlgCtrlID == 1777
     || DlgCtrlID == 1776
     || DlgCtrlID == 1778
     || DlgCtrlID == 1843
     || DlgCtrlID == 1845
     || DlgCtrlID == 1842
     || DlgCtrlID == 1002
     || DlgCtrlID == 1846
     || DlgCtrlID == 1847
     || DlgCtrlID == 1852
     || DlgCtrlID == 1853
     || DlgCtrlID == 1854
     || DlgCtrlID == 1855
     || DlgCtrlID == 1856
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1850
     || DlgCtrlID == 1849
     || DlgCtrlID == 1851
     || DlgCtrlID == 1848) )
  {
    return 1; /*0x6027f6*/
  }
  if ( (v4 == (void *)264 || v4 == (void *)3014) /*0x602a9d*/
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809
     || DlgCtrlID == 1843
     || DlgCtrlID == 1842
     || DlgCtrlID == 1819
     || DlgCtrlID == 1845) )
  {
    return 1; /*0x602aa0*/
  }
  return Event::IsValidActionType(v4) && DlgCtrlID == 1685 && !SessionClass::GetGameSpeed(dword_A8B238); /*0x60262e*/
}



// ==== 0x00602AE0  Dialog::IsSpecialTemplate  this=Dialog  sig=csp ====
int __thiscall Dialog::IsSpecialTemplate(Dialog *this)
{
  return this == (Dialog *)293 /*0x602b7a*/
      || this == (Dialog *)231
      || this == (Dialog *)278
      || this == (Dialog *)194
      || this == (Dialog *)201
      || this == (Dialog *)285
      || this == (Dialog *)284
      || this == (Dialog *)276
      || this == (Dialog *)700
      || this == (Dialog *)275
      || this == (Dialog *)265
      || this == (Dialog *)271
      || this == (Dialog *)279
      || this == (Dialog *)230
      || this == (Dialog *)243
      || this == (Dialog *)244
      || this == (Dialog *)270
      || this == (Dialog *)274;
}



// ==== 0x00602B90  UI_Helper_602B90  this=-  sig=csp ====
bool __fastcall sub_602B90(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602b9c*/
  if ( !dword_AC1B04 ) /*0x602ba0*/
    goto LABEL_5; /*0x602ba0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x602bc1*/
  if ( !v3 ) /*0x602bc6*/
    goto LABEL_5; /*0x602bc6*/
  while ( *v3 != v8 ) /*0x602bce*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602bd4*/
    if ( !v3 ) /*0x602bdc*/
      goto LABEL_5; /*0x602bdc*/
  }
  v7 = v3 + 1; /*0x602d4f*/
  if ( v7 ) /*0x602d54*/
    v4 = v7[27]; /*0x602d5a*/
  else
LABEL_5:
    v4 = 0; /*0x602bde*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x602be1*/
  return (v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201 || v4 == 3014) /*0x602d41*/
      && (DlgCtrlID == 1746
       || DlgCtrlID == 1747
       || DlgCtrlID == 1748
       || DlgCtrlID == 1749
       || DlgCtrlID == 1750
       || DlgCtrlID == 1751
       || DlgCtrlID == 1752
       || DlgCtrlID == 1753)
      || (v4 == 258 || v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201)
      && (DlgCtrlID == 1754
       || DlgCtrlID == 1755
       || DlgCtrlID == 1756
       || DlgCtrlID == 1757
       || DlgCtrlID == 1758
       || DlgCtrlID == 1759
       || DlgCtrlID == 1760
       || DlgCtrlID == 1761)
      || (v4 == 194 || v4 == 201)
      && (DlgCtrlID == 1876
       || DlgCtrlID == 1877
       || DlgCtrlID == 1878
       || DlgCtrlID == 1879
       || DlgCtrlID == 1880
       || DlgCtrlID == 1881
       || DlgCtrlID == 1882
       || DlgCtrlID == 1883)
      || v4 == 3014 && (DlgCtrlID == 1919 || DlgCtrlID == 1755);
}



// ==== 0x00602DD0  IsDialogControlHidden  this=-  sig=ida-proto ====
char __fastcall IsDialogControlHidden(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602ddc*/
  if ( !dword_AC1B04 ) /*0x602de0*/
    goto LABEL_5; /*0x602de0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x602e01*/
  if ( !v3 ) /*0x602e06*/
    goto LABEL_5; /*0x602e06*/
  while ( *v3 != v8 ) /*0x602e0e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602e14*/
    if ( !v3 ) /*0x602e1c*/
      goto LABEL_5; /*0x602e1c*/
  }
  v7 = v3 + 1; /*0x602f64*/
  if ( v7 ) /*0x602f69*/
    v4 = v7[27]; /*0x602f6f*/
  else
LABEL_5:
    v4 = 0; /*0x602e1e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x602e21*/
  if ( (v4 == 148 /*0x602f54*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 1; /*0x602f5b*/
  }
  switch ( v4 ) /*0x602f7d*/
  {
    case 148: /*0x602f7d*/
      if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 || DlgCtrlID == 1771 ) /*0x602f92*/
        return 1; /*0x602f99*/
      break;
    case 259: /*0x602f7d*/
      if ( DlgCtrlID == 1835 ) /*0x602fa7*/
        return 1; /*0x602fae*/
      break;
    case 3015: /*0x602f7d*/
      if ( DlgCtrlID == 1835 ) /*0x602fbc*/
        return 1; /*0x602fc3*/
      break;
    default:
      if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x602fd1*/
        return 1; /*0x602fd8*/
      break;
  }
  return 0; /*0x602f56*/
}



// ==== 0x00603040  LoadCampaignMissionData  this=-  sig=ida-proto ====
int __fastcall sub_603040(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60304c*/
  if ( !dword_AC1B04 ) /*0x603050*/
    goto LABEL_5; /*0x603050*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x603071*/
  if ( !v3 ) /*0x603076*/
    goto LABEL_5; /*0x603076*/
  while ( *v3 != v8 ) /*0x60307e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603084*/
    if ( !v3 ) /*0x60308c*/
      goto LABEL_5; /*0x60308c*/
  }
  v7 = v3 + 1; /*0x6031d7*/
  if ( v7 ) /*0x6031dc*/
    v4 = v7[27]; /*0x6031e2*/
  else
LABEL_5:
    v4 = 0; /*0x60308e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603091*/
  if ( (v4 == 148 /*0x6031c4*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 37; /*0x6031c7*/
  }
  if ( (v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201 || v4 == 258 || v4 == 3014) /*0x603226*/
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 14; /*0x60322f*/
  }
  return 0; /*0x6031c6*/
}



// ==== 0x00603240  UI_Helper  this=-  sig=csp ====
BOOL __fastcall sub_603240(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60324c*/
  if ( !dword_AC1B04 ) /*0x603250*/
    goto LABEL_5; /*0x603250*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x603271*/
  if ( !v3 ) /*0x603276*/
    goto LABEL_5; /*0x603276*/
  while ( *v3 != v8 ) /*0x60327e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603284*/
    if ( !v3 ) /*0x60328c*/
      goto LABEL_5; /*0x60328c*/
  }
  v7 = v3 + 1; /*0x6033d7*/
  if ( v7 ) /*0x6033dc*/
    v4 = v7[27]; /*0x6033e2*/
  else
LABEL_5:
    v4 = 0; /*0x60328e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603291*/
  return (v4 == 148 /*0x6033c6*/
       || v4 == 216
       || v4 == 245
       || v4 == 226
       || v4 == 213
       || v4 == 257
       || v4 == 297
       || v4 == 215
       || v4 == 187
       || v4 == 256
       || v4 == 214
       || v4 == 293
       || v4 == 290
       || v4 == 274
       || v4 == 231
       || v4 == 278
       || v4 == 285
       || v4 == 284
       || v4 == 254
       || v4 == 271
       || v4 == 279
       || v4 == 276
       || v4 == 230
       || v4 == 243
       || v4 == 244
       || v4 == 700
       || v4 == 270
       || v4 == 264
       || v4 == 3014
       || v4 == 3015)
      && DlgCtrlID == 1820;
}



// ==== 0x006033F0  BinkMovie::HandleKeyboard  this=BinkMovie  sig=csp ====
int __fastcall BinkMovie::HandleKeyboard(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  bool v6; // zf
  _DWORD *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6033fc*/
  if ( !dword_AC1B04 ) /*0x603400*/
    goto LABEL_5; /*0x603400*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x603421*/
  if ( !v3 ) /*0x603426*/
    goto LABEL_5; /*0x603426*/
  while ( *v3 != v9 ) /*0x60342e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603434*/
    if ( !v3 ) /*0x60343c*/
      goto LABEL_5; /*0x60343c*/
  }
  v7 = v3 + 1; /*0x60359b*/
  if ( v7 ) /*0x6035a0*/
    v4 = v7[27]; /*0x6035a6*/
  else
LABEL_5:
    v4 = 0; /*0x60343e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603441*/
  if ( (v4 == 148 /*0x603574*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 100; /*0x603574*/
  }
  if ( v4 == 148 ) /*0x60357c*/
  {
    if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 ) /*0x60358a*/
      return 100; /*0x60358a*/
    v6 = DlgCtrlID == 1771; /*0x60358c*/
LABEL_46:
    if ( v6 ) /*0x6035c3*/
      return 100; /*0x6035cd*/
    return 0; /*0x6035c3*/
  }
  if ( v4 == 259 || v4 == 3015 ) /*0x6035bc*/
  {
    v6 = DlgCtrlID == 1835; /*0x6035be*/
    goto LABEL_46; /*0x6035be*/
  }
  if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x6035db*/
    return 50; /*0x6035e5*/
  return 0; /*0x6035c5*/
}



// ==== 0x006035F0  DispatchDialogControlAction  this=-  sig=csp ====
int __fastcall DispatchDialogControlAction(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // edi
  int v6; // ecx
  int result; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // [esp+8h] [ebp-4h] BYREF

  v10 = a1; /*0x6035fc*/
  if ( !dword_AC1B04 ) /*0x603600*/
    goto LABEL_5; /*0x603600*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v10) & ((1 << dword_AC1B0C) - 1))); /*0x603621*/
  if ( !v3 ) /*0x603626*/
    goto LABEL_5; /*0x603626*/
  while ( *v3 != v10 ) /*0x60362e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603634*/
    if ( !v3 ) /*0x60363c*/
      goto LABEL_5; /*0x60363c*/
  }
  v9 = v3 + 1; /*0x6037a4*/
  if ( v9 ) /*0x6037a9*/
    v4 = v9[27]; /*0x6037af*/
  else
LABEL_5:
    v4 = 0; /*0x60363e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603647*/
  result = VtableStub_72E280(v6); /*0x603649*/
  if ( (v4 == 148 /*0x60377c*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    result = UI_Helper_72E2A0(); /*0x60377e*/
  }
  if ( v4 == 148 ) /*0x603789*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603791*/
    {
      return UI_Helper_72DAC0(); /*0x603793*/
    }
    else if ( DlgCtrlID == 1772 ) /*0x6037bd*/
    {
      return UI_Helper_72DAD0(); /*0x6037bf*/
    }
  }
  else if ( v4 == 259 || v4 == 3015 ) /*0x6037d6*/
  {
    if ( DlgCtrlID == 1835 ) /*0x6037de*/
      return VtableStub_72D450(v8); /*0x6037e0*/
  }
  else if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x6037f7*/
  {
    return UI_Helper_72CC80(); /*0x6037f9*/
  }
  return result; /*0x603798*/
}



// ==== 0x00603870  GetDialogControlSHP  this=-  sig=csp ====
void *__fastcall GetDialogControlSHP(int a1, HWND a2, bool *a3)
{
  _DWORD *v4; // eax
  int v5; // esi
  int DlgCtrlID; // eax
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x60387c*/
  if ( !dword_AC1B04 ) /*0x603880*/
    goto LABEL_5; /*0x603880*/
  v4 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x6038a1*/
  if ( !v4 ) /*0x6038a6*/
    goto LABEL_5; /*0x6038a6*/
  while ( *v4 != v9 ) /*0x6038ae*/
  {
    v4 = (_DWORD *)v4[129]; /*0x6038b4*/
    if ( !v4 ) /*0x6038bc*/
      goto LABEL_5; /*0x6038bc*/
  }
  v8 = v4 + 1; /*0x603a13*/
  if ( v8 ) /*0x603a18*/
    v5 = v8[27]; /*0x603a1e*/
  else
LABEL_5:
    v5 = 0; /*0x6038be*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x6038c1*/
  if ( (v5 == 148 /*0x6039f4*/
     || v5 == 216
     || v5 == 245
     || v5 == 226
     || v5 == 213
     || v5 == 257
     || v5 == 297
     || v5 == 215
     || v5 == 187
     || v5 == 256
     || v5 == 214
     || v5 == 293
     || v5 == 290
     || v5 == 274
     || v5 == 231
     || v5 == 278
     || v5 == 285
     || v5 == 284
     || v5 == 254
     || v5 == 271
     || v5 == 279
     || v5 == 276
     || v5 == 230
     || v5 == 243
     || v5 == 244
     || v5 == 700
     || v5 == 270
     || v5 == 264
     || v5 == 3014
     || v5 == 3015)
    && DlgCtrlID == 1820 )
  {
    return LoadFileSHP(off_833674, a3); /*0x603a08*/
  }
  if ( v5 == 148 ) /*0x603a2c*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603a33*/
      return dword_B0FB48; /*0x603a3d*/
    if ( DlgCtrlID == 1772 ) /*0x603a45*/
      return dword_B0FB10; /*0x603a4f*/
  }
  else if ( v5 == 259 || v5 == 3015 ) /*0x603a60*/
  {
    if ( DlgCtrlID == 1835 ) /*0x603a67*/
      return dword_B0FB30; /*0x603a71*/
  }
  else if ( v5 == 196 && DlgCtrlID == 1961 ) /*0x603a81*/
  {
    return (void *)dword_B0FAD0; /*0x603a8b*/
  }
  return 0; /*0x603a05*/
}



// ==== 0x00603AA0  IsDialogWindowClass  this=-  sig=ida-proto ====
int __fastcall IsDialogWindowClass(HWND a1, HWND a2)
{
  int v3; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  HWND v8; // edi
  bool v9; // al
  HWND hWnd; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnd = a1; /*0x603ab2*/
  if ( !dword_AC1B04 ) /*0x603ab6*/
    return 0; /*0x603ab6*/
  v3 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x603ad7*/
  if ( !v3 ) /*0x603adc*/
    return 0; /*0x603adc*/
  while ( *(HWND *)v3 != hWnd ) /*0x603ae4*/
  {
    v3 = *(_DWORD *)(v3 + 516); /*0x603ae6*/
    if ( !v3 ) /*0x603aee*/
      return 0; /*0x603aee*/
  }
  v5 = v3 + 4; /*0x603b00*/
  if ( v3 == -4 ) /*0x603b05*/
    return 0; /*0x603b05*/
  v6 = *(_DWORD *)(v3 + 112); /*0x603b07*/
  if ( v6 != 269 /*0x603b91*/
    && v6 != 217
    && v6 != 240
    && v6 != 206
    && v6 != 288
    && v6 != 289
    && v6 != 277
    && v6 != 211
    && v6 != 207
    && v6 != 287
    && v6 != 195
    && v6 != 283
    && v6 != 225
    && v6 != 286
    && v6 != 196
    && v6 != 304
    && v6 != 208
    && v6 != 252
    && v6 != 294 )
  {
    return 0; /*0x603b91*/
  }
  *(_DWORD *)(v5 + 176) = 2; /*0x603b97*/
  hWnd = a2; /*0x603bac*/
  GetClassNameA(a2, ClassName, 128); /*0x603bb0*/
  if ( !strcmp(ClassName, g_INI_Key_Edit) || !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x603c05*/
    return 192; /*0x603c2c*/
  if ( !strcmp(ClassName, g_INI_Key_ListBox) /*0x603c99*/
    && dword_AC1B04
    && (v7 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    v8 = hWnd; /*0x603c9b*/
    while ( *(HWND *)v7 != hWnd ) /*0x603ca1*/
    {
      v7 = *(_DWORD *)(v7 + 516); /*0x603ca3*/
      if ( !v7 ) /*0x603cab*/
        goto LABEL_37; /*0x603cab*/
    }
    v9 = *(_DWORD *)(v7 + 108) == 1; /*0x603cb7*/
  }
  else
  {
    v8 = hWnd; /*0x603cbc*/
LABEL_37:
    if ( strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x603cd1*/
      return 0; /*0x603cf8*/
    v9 = (GetWindowLongA(v8, -16) & 3) != 3; /*0x603d0c*/
  }
  if ( !v9 ) /*0x603d11*/
    return 0; /*0x603afb*/
  return 192; /*0x603af0*/
}



// ==== 0x00603D30  CacheDialogInvalidate  this=Skirmish  sig=csp ====
HWND *__fastcall Dialog_CacheInvalidate(HWND hWnd, HWND a2)
{
  HWND *result; // eax
  HWND v5; // [esp+8h] [ebp-4h] BYREF

  result = (HWND *)dword_AC1B04; /*0x603d31*/
  v5 = hWnd; /*0x603d3e*/
  if ( dword_AC1B04 ) /*0x603d42*/
  {
    result = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v5) & ((1 << dword_AC1B0C) - 1))); /*0x603d63*/
    if ( result ) /*0x603d68*/
    {
      while ( *result != v5 ) /*0x603d70*/
      {
        result = (HWND *)result[129]; /*0x603d72*/
        if ( !result ) /*0x603d7a*/
          return result; /*0x603d7a*/
      }
      if ( ++result ) /*0x603d89*/
      {
        result[28] = (HWND)2; /*0x603d90*/
        result[5] = a2; /*0x603d97*/
        return (HWND *)InvalidateRect(hWnd, 0, 1); /*0x603d9a*/
      }
    }
  }
  return result; /*0x603d7c*/
}



// ==== 0x00603DB0  Diplomacy_Helper  this=-  sig=csp ====
LRESULT __fastcall sub_603DB0(HWND hWnd, unsigned __int8 a2)
{
  return SendMessageA(hWnd, 0x4E5u, 0, a2); /*0x603dc5*/
}



// ==== 0x00603DD0  globalHelper_003DD0  this=-  sig=csp ====
LRESULT __fastcall sub_603DD0(HWND hWnd, unsigned __int8 a2)
{
  return SendMessageA(hWnd, 0x4E6u, 0, a2); /*0x603de5*/
}



// ==== 0x00603E40  sub_603E40  this=ObjectClass  sig=ida-proto ====
_DWORD *__fastcall sub_603E40(int a1, int a2)
{
  _DWORD *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)dword_AC1B04; /*0x603e41*/
  v4 = a1; /*0x603e4b*/
  if ( dword_AC1B04 ) /*0x603e4f*/
  {
    result = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v4) & ((1 << dword_AC1B0C) - 1))); /*0x603e70*/
    if ( result ) /*0x603e75*/
    {
      while ( *result != v4 ) /*0x603e7d*/
      {
        result = (_DWORD *)result[129]; /*0x603e7f*/
        if ( !result ) /*0x603e87*/
          return result; /*0x603e87*/
      }
      if ( ++result ) /*0x603e95*/
        result[48] = a2; /*0x603e97*/
    }
  }
  return result; /*0x603e89*/
}



// ==== 0x00603F00  UI_Assign  this=-  sig=csp ====
wchar_t **__fastcall UI_Assign(wchar_t **a1, HWND a2, LPARAM a3, LPARAM a4)
{
  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  wchar_t *v8; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v8); /*0x603f0d*/
  lParam[0] = a3; /*0x603f1e*/
  lParam[1] = a4; /*0x603f2b*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f2f*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v8); /*0x603f3c*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8); /*0x603f45*/
  return a1; /*0x603f4c*/
}



// ==== 0x00603F60  WOLobby_Setup  this=-  sig=csp ====
wchar_t **__fastcall WOLobby_Setup(wchar_t **a1, HWND a2, LPARAM a3)
{
  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  wchar_t *v7; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v7); /*0x603f6d*/
  lParam[0] = a3; /*0x603f83*/
  lParam[1] = -1; /*0x603f87*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f8f*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v7); /*0x603f9c*/
  DeleteAndZero::Alt((DeleteAndZero *)&v7); /*0x603fa5*/
  return a1; /*0x603fac*/
}



// ==== 0x00603FC0  sub_603FC0  this=-  sig=ida-proto ====
wchar_t **__userpurge sub_603FC0@<eax>(
        wchar_t **a1@<ecx>,
        HWND a2@<edx>,
        HWND hWnd,
        unsigned __int16 a4,
        DeleteAndZero a5)
{
  LPARAM lParam[2]; // [esp+10h] [ebp-Ch] BYREF
  wchar_t *v9; // [esp+18h] [ebp-4h] BYREF
  LRESULT v10; // [esp+24h] [ebp+8h]

  v10 = SendMessageA(hWnd, 0x4E8u, 0, a4 | (*(unsigned __int16 *)a5.__pad_0 << 16)); /*0x603ffc*/
  unknown_libname_74(&v9); /*0x604000*/
  lParam[0] = (LPARAM)hWnd; /*0x604016*/
  lParam[1] = v10; /*0x60401a*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x60401e*/
  WideString::AssignFromPtr((WideString *)&a5, (const wchar_t **)&v9); /*0x604029*/
  DeleteAndZero::Alt((DeleteAndZero *)&v9); /*0x604032*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&a5); /*0x60403e*/
  DeleteAndZero::Alt(&a5); /*0x604047*/
  return a1; /*0x60404e*/
}



// ==== 0x00604060  GetSkirmishMenuOwnerName  this=-  sig=csp ====
wchar_t **__fastcall GetSkirmishMenuOwnerName(wchar_t **a1, HWND a2, HWND a3)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax

  v4 = DlgSkirmishMenuProc(a2, a3); /*0x60406b*/
  if ( v4 ) /*0x604072*/
  {
    StringCSF = GetStringCSF((wchar_t *)v4, 0, g_Str_File_ownrdraw_cpp, 1957); /*0x604082*/
    WideString::Assign((WideString *)a1, StringCSF); /*0x60408a*/
  }
  else
  {
    WideString::Assign((WideString *)a1, &g_TypeClass_DefaultString); /*0x60409c*/
  }
  return a1; /*0x604091*/
}



// ==== 0x006040B0  DlgSkirmishMenuProc  this=Dialog  sig=csp ====
char *__fastcall sub_6040B0(HWND a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  char *result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  HWND v13; // [esp+8h] [ebp-4h] BYREF

  v13 = a1; /*0x6040bc*/
  if ( !dword_AC1B04 ) /*0x6040c0*/
    goto LABEL_5; /*0x6040c0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v13) & ((1 << dword_AC1B0C) - 1))); /*0x6040e1*/
  if ( !v3 ) /*0x6040e6*/
    goto LABEL_5; /*0x6040e6*/
  while ( (HWND)*v3 != v13 ) /*0x6040ee*/
  {
    v3 = (_DWORD *)v3[129]; /*0x6040f0*/
    if ( !v3 ) /*0x6040f8*/
      goto LABEL_5; /*0x6040f8*/
  }
  v6 = v3 + 1; /*0x60410f*/
  if ( v6 ) /*0x604114*/
    v4 = v6[27]; /*0x604116*/
  else
LABEL_5:
    v4 = 0; /*0x6040fa*/
  result = (char *)GetDlgCtrlID(a2); /*0x6040fd*/
  if ( result ) /*0x604105*/
  {
    if ( result == (char *)-1 ) /*0x60411e*/
      return 0; /*0x60411e*/
    switch ( v4 ) /... [55494 chars total]



// ==== 0x00606740  SetDialogActiveFlag  this=-  sig=ida-proto ====
int __fastcall Dialog_SetActiveFlag(int a1, char a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = dword_AC1B04; /*0x606741*/
  v4 = a1; /*0x60674b*/
  if ( dword_AC1B04 ) /*0x60674f*/
  {
    result = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v4) & ((1 << dword_AC1B0C) - 1))); /*0x606770*/
    if ( result ) /*0x606775*/
    {
      while ( *(_DWORD *)result != v4 ) /*0x60677d*/
      {
        result = *(_DWORD *)(result + 516); /*0x60677f*/
        if ( !result ) /*0x606787*/
          return result; /*0x606787*/
      }
      result += 4; /*0x606790*/
      if ( result ) /*0x606795*/
        *(_BYTE *)(result + 188) = a2; /*0x606797*/
    }
  }
  return result; /*0x606789*/
}



// ==== 0x006067A0  SkirmishMapGen::LookupDialogHash  this=SkirmishMapGen  sig=csp ====
char __thiscall SkirmishMapGen::LookupDialogHash(SkirmishMapGen *this)
{
  SkirmishMapGen **v1; // eax
  _DWORD *v3; // eax
  SkirmishMapGen *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6067a6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x6067ac*/
    return 0; /*0x6067ac*/
  v1 = *(SkirmishMapGen ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6067cd*/
                           + 4
                           * ((*(int (__thiscall **)(SkirmishMapGen **))&g_DialogPool.__pad_208[80])(&v4)
                            & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x6067d2*/
    return 0; /*0x6067d2*/
  while ( *v1 != v4 ) /*0x6067da*/
  {
    v1 = (SkirmishMapGen **)v1[129]; /*0x6067dc*/
    if ( !v1 ) /*0x6067e4*/
      return 0; /*0x6067e4*/
  }
  v3 = v1 + 1; /*0x6067ee*/
  if ( v3 ) /*0x6067f3*/
    return *((_BYTE *)v3 + 188); /*0x6067f5*/
  else
    return 0; /*0x6067e6*/
}



// ==== 0x00606800  Dialog::MapControlToAction  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_MapControlToAction(HWND hWnd, LPARAM a2)
{
  HWND v2; // ebp
  int v3; // eax
  void *v4; // esi
  int DlgCtrlID; // edi
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  HWND Parent; // [esp+10h] [ebp-4h]

  v2 = hWnd; /*0x606803*/
  Parent = GetParent(hWnd); /*0x606810*/
  hWnd = Parent; /*0x606814*/
  if ( !dword_AC1B04 ) /*0x60681f*/
    goto LABEL_5; /*0x60681f*/
  v3 = *((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd)); /*0x606836*/
  if ( !v3 ) /*0x60683b*/
    goto LABEL_5; /*0x60683b*/
  while ( *(HWND *)v3 != hWnd ) /*0x606843*/
  {
    v3 = *(_DWORD *)(v3 + 516); /*0x606849*/
    if ( !v3 ) /*0x606851*/
      goto LABEL_5; /*0x606851*/
  }
  v8 = v3 + 4; /*0x607089*/
  if ( v8 ) /*0x60708e*/
    v4 = *(void **)(v8 + 108); /*0x607094*/
  else
LABEL_5:
    v4 = 0; /*0x606853*/
  DlgCtrlID = GetDlgCtrlID(v2); /*0x60685c*/
  v6 = a2 != 0; /*0x606864*/
  if ( (v4 == (void *)268 /*0x60701e*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || (unsigned __int8)Dialog::IsSpecialTemplate(v4))
    && DlgCtrlID == 1684
    || Event::IsValidActionType(v4) && DlgCtrlID == 1685
    || (v4 == (void *)148
     || v4 == (void *)216
     || v4 == (void *)245
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)215
     || v4 == (void *)187
     || v4 == (void *)256
     || v4 == (void *)214
     || v4 == (void *)293
     || v4 == (void *)290
     || v4 == (void *)274
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)254
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)276
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)700
     || v4 == (void *)270
     || v4 == (void *)264
     || v4 == (void *)3014
     || v4 == (void *)3015)
    && DlgCtrlID == 1820
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014
     || v4 == (void *)261
     || v4 == (void *)107
     || v4 == (void *)275)
    && DlgCtrlID == 1128
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448)
    || (v4 == (void *)259 || v4 == (void *)3015)
    && (DlgCtrlID == 1779
     || DlgCtrlID == 1780
     || DlgCtrlID == 1835
     || DlgCtrlID == 1775
     || DlgCtrlID == 1777
     || DlgCtrlID == 1776
     || DlgCtrlID == 1778
     || DlgCtrlID == 1695
     || DlgCtrlID == 1782
     || DlgCtrlID == 1843
     || DlgCtrlID == 1845
     || DlgCtrlID == 1842
     || DlgCtrlID == 1002
     || DlgCtrlID == 1846
     || DlgCtrlID == 1847
     || DlgCtrlID == 1852
     || DlgCtrlID == 1853
     || DlgCtrlID == 1854
     || DlgCtrlID == 1855
     || DlgCtrlID == 1856
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1850
     || DlgCtrlID == 1849
     || DlgCtrlID == 1851
     || DlgCtrlID == 1848)
    || (v4 == (void *)264 || v4 == (void *)3014)
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809
     || DlgCtrlID == 1843
     || DlgCtrlID == 1842
     || DlgCtrlID == 1819
     || DlgCtrlID == 1845) )
  {
    goto LABEL_208; /*0x60701e*/
  }
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x607034*/
  {
    hWnd = v2; /*0x60703f*/
    if ( dword_AC1B04 ) /*0x607045*/
    {
      v7 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x607066*/
      if ( v7 ) /*0x60706b*/
      {
        while ( *(HWND *)v7 != hWnd ) /*0x607073*/
        {
          v7 = *(_DWORD *)(v7 + 516); /*0x607075*/
          if ( !v7 ) /*0x60707d*/
            goto LABEL_199; /*0x60707d*/
        }
        v9 = v7 + 4; /*0x6070a0*/
        if ( v9 ) /*0x6070a5*/
        {
          if ( !*(_DWORD *)(v9 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x6070b4*/
            goto LABEL_208; /*0x6070bb*/
        }
      }
    }
  }
LABEL_199:
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x6070cb*/
  {
    hWnd = v2; /*0x6070d6*/
    if ( dword_AC1B04 ) /*0x6070dc*/
    {
      v10 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x607101*/
      if ( v10 ) /*0x607106*/
      {
        while ( *(HWND *)v10 != hWnd ) /*0x607112*/
        {
          v10 = *(_DWORD *)(v10 + 516); /*0x607114*/
          if ( !v10 ) /*0x60711c*/
            return 1; /*0x607128*/
        }
        v12 = v10 + 4; /*0x607133*/
        if ( v12 ) /*0x607138*/
        {
          if ( !*(_DWORD *)(v12 + 104) && GetDialogDefaultButton((int)Parent, v2) ) /*0x607147*/
          {
LABEL_208:
            hWnd = v2; /*0x607150*/
            if ( dword_AC1B04 ) /*0x60715b*/
            {
              v13 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x60717c*/
              if ( v13 ) /*0x607181*/
              {
                while ( *(HWND *)v13 != hWnd ) /*0x607189*/
                {
                  v13 = *(_DWORD *)(v13 + 516); /*0x60718b*/
                  if ( !v13 ) /*0x607193*/
                    return 1; /*0x60719f*/
                }
                v14 = v13 + 4; /*0x6071a6*/
                if ( v14 ) /*0x6071ab*/
                  *(_BYTE *)(v14 + 188) = v6; /*0x6071ad*/
              }
            }
          }
        }
      }
    }
  }
  return 1; /*0x60711e*/
}



// ==== 0x006071E0  RenderGadgetClassAnimation  this=-  sig=csp ====
LRESULT __fastcall GadgetClass_RenderAnimation(HWND a1, char a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  int *v14; // eax
  int v15; // edi
  int v16; // esi
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  HWND v23; // edi
  int v24; // ebp
  int v25; // edi
  int *v26; // edx
  int v27; // eax
  int *v28; // ecx
  int v29; // esi
  int v30; // ecx
  int v31; // edi
  int v32; // ebx
  int v33; // ebp
  _DWORD *v34; // eax
  int v35; // esi
  int *v36; // eax
  int v37; // eax
  int *v38; // eax
  int v39; // esi
  int *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int v43; // eax
  _DWORD *v44; // esi
  int v45; // ebx
  int v46; // eax
  int v47; // esi
  int v48; // ebx
  int v49; // edx
  int v50; // eax
  int v51; // eax
  in... [20074 chars total]



// ==== 0x00607FD0  Dialog::StopBink  this=Dialog  sig=csp ====
int __thiscall Dialog::StopBink(Dialog *this)
{
  int result; // eax
  int v3; // esi
  HWND DlgItem; // eax
  Dialog *v5; // [esp+8h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x607fd1*/
  v5 = this; /*0x607fdc*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x607fe0*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x608005*/
                       + 4
                       * ((*(int (__thiscall **)(Dialog **))&g_DialogPool.__pad_208[80])(&v5)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60800a*/
    {
      while ( *(Dialog **)result != v5 ) /*0x608012*/
      {
        result = *(_DWORD *)(result + 516); /*0x608014*/
        if ( !result ) /*0x60801c*/
          return result; /*0x60801c*/
      }
      v3 = result + 4; /*0x608026*/
      if ( result != -4 ) /*0x60802b*/
      {
        LOBYTE(result) = *(_BYTE *)(result + 194); /*0x60802d*/
        if ( (_BYTE)result ) /*0x608035*/
        {
          DlgItem = GetDlgItem((HWND)this, 1818); /*0x60803d*/
          if ( DlgItem ) /*0x608045*/
            SendMessageA(DlgItem, 0x4E2u, 0, 0); /*0x608051*/
          result = RenderGadgetClassAnimation((HWND)this, 0); /*0x60805b*/
          *(_BYTE *)(v3 + 190) = 0; /*0x608060*/
        }
      }
    }
  }
  return result; /*0x60801e*/
}



// ==== 0x00608070  Dialog::IdleProcess  this=Dialog  sig=csp ====
char __usercall Dialog::IdleProcess@<al>(Dialog *this, ObjectClass *a2@<esi>)
{
  HWND v2; // ecx
  HWND v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v6; // eax
  bool v7; // bl
  bool v8; // al
  int v9; // eax
  int v10; // edi
  BOOL v11; // esi
  ObjectClass *v12; // [esp-4h] [ebp-1Ch]
  HWND v13; // [esp+Ch] [ebp-Ch] BYREF
  DWORD TickCount; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v3 = v2; /*0x608075*/
  if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x60807d*/
    return 0; /*0x60807d*/
  v13 = v3; /*0x60808b*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x608091*/
    return 0; /*0x608091*/
  v4 = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6080b2*/
                  + 4
                  * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&v13)
                   & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v4 ) /*0x6080b7*/
    return 0; /*0x6080b7*/
  while ( (HWND)*v4 != v13 ) /*0x6080bf*/
  {
    v4 = (_DWORD *)v4[129]; /*0x6080c1*/
    if ( !v4 ) /*0x6080c9*/
      return 0; /*0x6080c9*/
  }
  v6 = v4 + 1; /*0x6080d8*/
  if ( !v6 ) /*0x6080dd*/
    return 0; /*0x6080dd*/
  v7 = *((_BYTE *)v6 + 189) && v6[44] == 1; /*0x6080e7*/
  v8 = IsWindowVisible(v3); /*0x608101*/
  if ( !v7 ) /*0x608106*/
    return 0; /*0x608106*/
  if ( !v8 ) /*0x60810a*/
    return 0; /*0x60810a*/
  PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 412), 0x2000, 1.0, 0); /*0x608124*/
  LOBYTE(v15) = IsWindowEnabled(v3); /*0x608138*/
  EnableWindow(v3, 0); /*0x60813c*/
  EnumChildWindows(v3, Dialog::MapControlToAction, 1); /*0x60814a*/
  v13 = v3; /*0x608157*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60815b*/
    return 0; /*0x60815b*/
  v9 = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x608180*/
                 + 4
                 * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&v13)
                  & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v9 ) /*0x608185*/
    return 0; /*0x608185*/
  while ( *(HWND *)v9 != v13 ) /*0x608191*/
  {
    v9 = *(_DWORD *)(v9 + 516); /*0x608193*/
    if ( !v9 ) /*0x60819b*/
      return 0; /*0x6081a5*/
  }
  v10 = v9 + 4; /*0x6081ae*/
  if ( v9 == -4 ) /*0x6081b3*/
    return 0; /*0x6080d3*/
  v12 = a2; /*0x6081b9*/
  *(_BYTE *)(v9 + 194) = 1; /*0x6081bf*/
  InvalidateRect(v3, 0, 0); /*0x6081c6*/
  TickCount = GetTickCount(); /*0x6081d4*/
  while ( 1 ) /*0x6081d8*/
  {
    MessageLoop(); /*0x6081d8*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x6081e4*/
    {
      if ( *(_DWORD *)&dword_A8B238 != 5 && !BYTE2(stru_A8D600.Network_field_0xC) && !dword_A8DAB4 ) /*0x6081fb*/
        break; /*0x6081fb*/
    }
    Event::Dispatch(); /*0x608211*/
LABEL_29:
    v11 = *(_BYTE *)(v10 + 190) == 0; /*0x608216*/
    if ( (int)(GetTickCount() - TickCount) > 5000 || v11 ) /*0x608234*/
      goto LABEL_31; /*0x608234*/
  }
  if ( VtableStub::55CBF0() || !(unsigned __int8)GameFrameLoop(v12) ) /*0x608206*/
    goto LABEL_29; /*0x60820d*/
LABEL_31:
  EnumChildWindows(v3, Dialog::MapControlToAction, 0); /*0x608236*/
  EnableWindow(v3, (unsigned __int8)v15); /*0x608250*/
  return 1; /*0x6080cb*/
}



// ==== 0x00608260  SkirmishSetup::PlayButtonClickAnim  this=SkirmishSetup  sig=csp ====
int __thiscall SkirmishSetup::PlayButtonClickAnim(SkirmishSetup *this)
{
  int result; // eax
  char v3; // bl
  SkirmishSetup *v4; // [esp+8h] [ebp-4h] BYREF

  result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60826a*/
  if ( (_BYTE)result ) /*0x608271*/
    goto LABEL_6; /*0x608271*/
  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x608273*/
  v4 = this; /*0x608278*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60827e*/
    goto LABEL_6; /*0x60827e*/
  result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60829f*/
                     + 4
                     * ((*(int (__thiscall **)(SkirmishSetup **))&g_DialogPool.__pad_208[80])(&v4)
                      & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !result ) /*0x6082a4*/
    goto LABEL_6; /*0x6082a4*/
  while ( *(SkirmishSetup **)result != v4 ) /*0x6082ac*/
  {
    result = *(_DWORD *)(result + 516); /*0x6082ae*/
    if ( !result ) /*0x6082b6*/
      goto LABEL_6; /*0x6082b6*/
  }
  result += 4; /*0x6082c2*/
  if ( result
    && (!*(_BYTE *)(result + 189) || *(_DWORD *)(result + 176) != 1 ? (v3 = 0) : (v3 = 1),
        (result = IsWindowVisible((HWND)this), LOBYTE(result) = result != 0, v3) && (_BYTE)result) )
  {
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 416), 0x2000, 1.0, 0); /*0x60830f*/
    LOBYTE(v4) = IsWindowEnabled((HWND)this); /*0x608329*/
    EnableWindow((HWND)this, 0); /*0x60832d*/
    EnumChildWindows((HWND)this, Dialog::MapControlToAction, 1); /*0x60833d*/
    RenderGadgetClassAnimation((HWND)this, 1); /*0x608343*/
    EnumChildWindows((HWND)this, Dialog::MapControlToAction, 0); /*0x608350*/
    EnableWindow((HWND)this, (unsigned __int8)v4); /*0x60835d*/
    result = InvalidateRect((HWND)this, 0, 0); /*0x608364*/
    LOBYTE(result) = 1; /*0x60836a*/
  }
  else
  {
LABEL_6:
    LOBYTE(result) = 0; /*0x6082b8*/
  }
  return result; /*0x6082b8*/
}



// ==== 0x00608380  SaveLoadDialog::LookupDialogHash  this=SaveLoadDialog  sig=csp ====
int __thiscall SaveLoadDialog::LookupDialogHash(SaveLoadDialog *this)
{
  int result; // eax
  SaveLoadDialog *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x608381*/
  v2 = this; /*0x608386*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60838c*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6083ad*/
                       + 4
                       * ((*(int (__thiscall **)(SaveLoadDialog **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x6083b2*/
    {
      while ( *(SaveLoadDialog **)result != v2 ) /*0x6083ba*/
      {
        result = *(_DWORD *)(result + 516); /*0x6083bc*/
        if ( !result ) /*0x6083c4*/
          return result; /*0x6083c4*/
      }
      result += 4; /*0x6083cc*/
      if ( result ) /*0x6083d1*/
        *(_BYTE *)(result + 189) = 1; /*0x6083d3*/
    }
  }
  return result; /*0x6083c7*/
}



// ==== 0x006083E0  SaveLoadDialog::FindDialogTemplate  this=SaveLoadDialog  sig=csp ====
int __thiscall SaveLoadDialog::FindDialogTemplate(SaveLoadDialog *this)
{
  int result; // eax
  SaveLoadDialog *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x6083e1*/
  v2 = this; /*0x6083e6*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x6083ec*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60840d*/
                       + 4
                       * ((*(int (__thiscall **)(SaveLoadDialog **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x608412*/
    {
      while ( *(SaveLoadDialog **)result != v2 ) /*0x60841a*/
      {
        result = *(_DWORD *)(result + 516); /*0x60841c*/
        if ( !result ) /*0x608424*/
          return result; /*0x608424*/
      }
      result += 4; /*0x60842c*/
      if ( result ) /*0x608431*/
        *(_BYTE *)(result + 189) = 0; /*0x608433*/
    }
  }
  return result; /*0x608427*/
}



// ==== 0x00608440  HashTable::LookupAndMark  this=HashTable  sig=csp ====
int __thiscall HashTable::LookupAndMark(HashTable *this)
{
  int result; // eax
  HashTable *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x608441*/
  v2 = this; /*0x608446*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60844c*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60846d*/
                       + 4
                       * ((*(int (__thiscall **)(HashTable **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x608472*/
    {
      while ( *(HashTable **)result != v2 ) /*0x60847a*/
      {
        result = *(_DWORD *)(result + 516); /*0x60847c*/
        if ( !result ) /*0x608484*/
          return result; /*0x608484*/
      }
      result += 4; /*0x60848c*/
      if ( result ) /*0x608491*/
        *(_BYTE *)(result + 212) = 1; /*0x608493*/
    }
  }
  return result; /*0x608487*/
}



// ==== 0x00608500  ControlDialogHandler  this=-  sig=csp ====
char __fastcall Dialog_ControlHandler(int a1, HWND a2, _DWORD *a3)
{
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v16 = a1; /*0x608504*/
  v15 = 0; /*0x60851a*/
  HashTable::Get(&dword_AC1B00, &v16, &v15); /*0x608522*/
  if ( v15 ) /*0x60852d*/
    v4 = *(_DWORD *)(v15 + 108); /*0x60852f*/
  else
    v4 = 0; /*0x608534*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x608537*/
  if ( v4 != 148 ) /*0x608543*/
  {
    if ( v4 == 259 ) /*0x6086da*/
    {
      if ( DlgCtrlID != 1835 ) /*0x6086e1*/
        return 0; /*0x6086e1*/
      v7 = *((_DWORD *)dword_A8B230 + 3374); /*0x6086f8*/
      if ( g_DisplayWidth >= 800 ) /*0x608700*/
      {
        if ( v7 ) /*0x608704*/
        {
LABEL_31:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608706*/
          if ( !v6 ) /*0x608715*/
            return 0; /*0x608715*/
          *v6 = 103; /*0x60871b*/
LABEL_47:
          v6[1] = 130; /*0x6087d2*/
          v6[2] = 424; /*0x6087d9*/
          v6[3] = 230; /*0x6087e0*/
          goto LABEL_143; /*0x6087e7*/
        }
        goto LABEL_39; /*0x608704*/
      }
      if ( !v7 ) /*0x608728*/
        goto LABEL_43; /*0x608728*/
      goto LABEL_45; /*0x608728*/
    }
    if ( v4 == 3015 ) /*0x608736*/
    {
      if ( DlgCtrlID != 1835 ) /*0x608741*/
        return 0; /*0x608741*/
      v8 = *((_DWORD *)dword_A8B230 + 3374); /*0x608753*/
      if ( g_DisplayWidth >= 800 ) /*0x608761*/
      {
        if ( v8 ) /*0x608765*/
          goto LABEL_31; /*0x608765*/
LABEL_39:
        v6 = __2_YAPAXI_Z(0x10u); /*0x608767*/
        if ( !v6 ) /*0x608773*/
          return 0; /*0x608773*/
        *v6 = 104; /*0x608779*/
LABEL_41:
        v6[1] = 142; /*0x60877f*/
        v6[2] = 424; /*0x608786*/
        v6[3] = 220; /*0x60878d*/
        goto LABEL_143; /*0x608794*/
      }
      if ( !v8 ) /*0x60879b*/
      {
LABEL_43:
        v6 = __2_YAPAXI_Z(0x10u); /*0x60879d*/
        if ( !v6 ) /*0x6087a9*/
          return 0; /*0x6087a9*/
        *v6 = 24; /*0x6087af*/
        goto LABEL_41; /*0x6087b5*/
      }
LABEL_45:
      v6 = __2_YAPAXI_Z(0x10u); /*0x6087b7*/
      if ( !v6 ) /*0x6087c6*/
        return 0; /*0x6087c6*/
      *v6 = 23; /*0x6087cc*/
      goto LABEL_47; /*0x6087cc*/
    }
    if ( v4 == 188 ) /*0x6087f2*/
    {
      switch ( DlgCtrlID ) /*0x6087fd*/
      {
        case 1839: /*0x6087fd*/
          v9 = g_DisplayWidth; /*0x6087ff*/
          if ( g_DisplayWidth == 640 ) /*0x60880c*/
            goto LABEL_51; /*0x60880c*/
          goto LABEL_80; /*0x60880c*/
        case 1842: /*0x6087fd*/
          goto LABEL_54; /*0x608849*/
        case 1934: /*0x6087fd*/
          goto LABEL_58; /*0x608874*/
        case 1933: /*0x6087fd*/
          goto LABEL_62; /*0x60889f*/
      }
    }
    else
    {
      if ( v4 != 189 ) /*0x6088fa*/
      {
        if ( v4 == 194 ) /*0x60893f*/
        {
          if ( DlgCtrlID != 1839 ) /*0x60894a*/
          {
            switch ( DlgCtrlID ) /*0x608975*/
            {
              case 1842: /*0x608975*/
                if ( g_DisplayWidth == 640 ) /*0x608984*/
                {
                  v6 = __2_YAPAXI_Z(0x10u); /*0x608988*/
                  if ( !v6 ) /*0x608992*/
                    return 0; /*0x608992*/
                  *v6 = 110; /*0x608998*/
LABEL_116:
                  v6[1] = 215; /*0x608b49*/
                  v6[2] = 266; /*0x608b50*/
                  v6[3] = 22; /*0x608b57*/
                  goto LABEL_143; /*0x608b5e*/
                }
                if ( g_DisplayWidth != 800 && g_DisplayWidth != 1024 ) /*0x6089b1*/
                  return 0; /*0x6089b1*/
                v6 = __2_YAPAXI_Z(0x10u); /*0x6089b9*/
                if ( !v6 ) /*0x6089c3*/
                  return 0; /*0x6089c3*/
                *v6 = 180; /*0x6089c9*/
LABEL_111:
                v6[1] = 215; /*0x608b03*/
                v6[2] = 266; /*0x608b0a*/
                v6[3] = 21; /*0x608b11*/
                goto LABEL_143; /*0x608b18*/
              case 1934: /*0x608975*/
                goto LABEL_58; /*0x6089d9*/
              case 1933: /*0x608975*/
                goto LABEL_62; /*0x6089e4*/
            }
            if ( DlgCtrlID != 1932 ) /*0x6089ef*/
              return 0; /*0x6089ef*/
            v13 = g_DisplayWidth; /*0x6089f5*/
            if ( g_DisplayWidth != 640 ) /*0x608a02*/
            {
              if ( g_DisplayWidth != 800 ) /*0x608a0e*/
                goto LABEL_95; /*0x608a0e*/
              goto LABEL_96; /*0x608a0e*/
            }
LABEL_135:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608c42*/
            if ( !v6 ) /*0x608c4e*/
              return 0; /*0x608c4e*/
            *v6 = 346; /*0x608c50*/
            goto LABEL_141; /*0x608c56*/
          }
          v9 = g_DisplayWidth; /*0x60894c*/
          if ( g_DisplayWidth != 640 ) /*0x608959*/
            goto LABEL_80; /*0x608959*/
        }
        else
        {
          if ( v4 != 201 ) /*0x608a39*/
            return 0; /*0x608a39*/
          if ( DlgCtrlID != 1839 ) /*0x608a44*/
          {
            switch ( DlgCtrlID ) /*0x608ad6*/
            {
              case 1842: /*0x608ad6*/
                v10 = g_DisplayWidth; /*0x608adc*/
                if ( g_DisplayWidth != 640 ) /*0x608ae9*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608b23*/
                    goto LABEL_113; /*0x608b23*/
                  goto LABEL_114; /*0x608b23*/
                }
                goto LABEL_109; /*0x608ae9*/
              case 1934: /*0x608ad6*/
                v11 = g_DisplayWidth; /*0x608b6a*/
                if ( g_DisplayWidth != 640 ) /*0x608b77*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608b9c*/
                    goto LABEL_122; /*0x608b9c*/
                  goto LABEL_123; /*0x608b9c*/
                }
LABEL_119:
                v6 = __2_YAPAXI_Z(0x10u); /*0x608b79*/
                if ( !v6 ) /*0x608b85*/
                  return 0; /*0x608b85*/
                *v6 = 80; /*0x608b8b*/
                goto LABEL_141; /*0x608b91*/
              case 1933: /*0x608ad6*/
                v12 = g_DisplayWidth; /*0x608bce*/
                if ( g_DisplayWidth != 640 ) /*0x608bdb*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608c00*/
                    goto LABEL_130; /*0x608c00*/
                  goto LABEL_131; /*0x608c00*/
                }
LABEL_127:
                v6 = __2_YAPAXI_Z(0x10u); /*0x608bdd*/
                if ( !v6 ) /*0x608be9*/
                  return 0; /*0x608be9*/
                *v6 = 228; /*0x608bef*/
                goto LABEL_141; /*0x608bf5*/
            }
            if ( DlgCtrlID != 1932 ) /*0x608c2d*/
              return 0; /*0x608c2d*/
            if ( g_DisplayWidth != 640 ) /*0x608c40*/
            {
              if ( g_DisplayWidth != 800 && g_DisplayWidth != 1024 ) /*0x608c66*/
                return 0; /*0x608c66*/
              v6 = __2_YAPAXI_Z(0x10u); /*0x608c6a*/
              if ( !v6 ) /*0x608c74*/
                return 0; /*0x608c74*/
LABEL_140:
              *v6 = 430; /*0x608c76*/
LABEL_141:
              v6[1] = 190; /*0x608c7c*/
              v6[2] = 75; /*0x608c83*/
              goto LABEL_142; /*0x608c83*/
            }
            goto LABEL_135; /*0x608c40*/
          }
          v9 = g_DisplayWidth; /*0x608a4a*/
          if ( g_DisplayWidth != 640 ) /*0x608a57*/
          {
            if ( g_DisplayWidth != 800 ) /*0x608a91*/
              goto LABEL_104; /*0x608a91*/
            goto LABEL_105; /*0x608a91*/
          }
        }
        v6 = __2_YAPAXI_Z(0x10u); /*0x608a5b*/
        if ( v6 ) /*0x608a65*/
        {
          *v6 = 52; /*0x608a6b*/
          v6[1] = 78; /*0x608a71*/
          v6[2] = 396; /*0x608a78*/
          v6[3] = 143; /*0x608a7f*/
          goto LABEL_143; /*0x608a86*/
        }
        return 0; /*0x608a65*/
      }
      switch ( DlgCtrlID ) /*0x608901*/
      {
        case 1839: /*0x608901*/
          v9 = g_DisplayWidth; /*0x608903*/
          if ( g_DisplayWidth == 640 ) /*0x608910*/
          {
LABEL_51:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608812*/
            if ( v6 ) /*0x60881e*/
            {
              *v6 = 52; /*0x608824*/
              v6[1] = 78; /*0x60882a*/
              v6[2] = 396; /*0x608831*/
              v6[3] = 143; /*0x608838*/
              goto LABEL_143; /*0x60883f*/
            }
            return 0; /*0x60881e*/
          }
LABEL_80:
          if ( v9 != 800 ) /*0x608965*/
          {
LABEL_104:
            if ( v9 != 1024 ) /*0x608a99*/
              return 0; /*0x608a99*/
          }
LABEL_105:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608a9f*/
          if ( v6 ) /*0x608aab*/
          {
            *v6 = 60; /*0x608ab1*/
            v6[1] = 98; /*0x608ab7*/
            v6[2] = 540; /*0x608abe*/
            v6[3] = 143; /*0x608ac5*/
            goto LABEL_143; /*0x608acc*/
          }
          return 0; /*0x608aab*/
        case 1842: /*0x608901*/
LABEL_54:
          v10 = g_DisplayWidth; /*0x60884b*/
          if ( g_DisplayWidth != 640 ) /*0x608858*/
          {
            if ( g_DisplayWidth != 800 ) /*0x608864*/
            {
LABEL_113:
              if ( v10 != 1024 ) /*0x608b2b*/
                return 0; /*0x608b2b*/
            }
LABEL_114:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608b31*/
            if ( !v6 ) /*0x608b3d*/
              return 0; /*0x608b3d*/
            *v6 = 180; /*0x608b43*/
            goto LABEL_116; /*0x608b43*/
          }
LABEL_109:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608aeb*/
          if ( !v6 ) /*0x608af7*/
            return 0; /*0x608af7*/
          *v6 = 110; /*0x608afd*/
          goto LABEL_111; /*0x608afd*/
        case 1934: /*0x608901*/
LABEL_58:
          v11 = g_DisplayWidth; /*0x608876*/
          if ( g_DisplayWidth != 640 ) /*0x608883*/
          {
            if ( g_DisplayWidth != 800 ) /*0x60888f*/
            {
LABEL_122:
              if ( v11 != 1024 ) /*0x608ba4*/
                return 0; /*0x608ba4*/
            }
LABEL_123:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608baa*/
            if ( !v6 ) /*0x608bb6*/
              return 0; /*0x608bb6*/
            *v6 = 170; /*0x608bbc*/
            goto LABEL_141; /*0x608bc2*/
          }
          goto LABEL_119; /*0x608883*/
        case 1933: /*0x608901*/
LABEL_62:
          v12 = g_DisplayWidth; /*0x6088a1*/
          if ( g_DisplayWidth != 640 ) /*0x6088ae*/
          {
            if ( g_DisplayWidth != 800 ) /*0x6088ba*/
            {
LABEL_130:
              if ( v12 != 1024 ) /*0x608c08*/
                return 0; /*0x608c08*/
            }
LABEL_131:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608c0e*/
            if ( !v6 ) /*0x608c1a*/
              return 0; /*0x608c1a*/
            *v6 = 295; /*0x608c20*/
            goto LABEL_141; /*0x608c26*/
          }
          goto LABEL_127; /*0x6088ae*/
      }
    }
    if ( DlgCtrlID != 1932 ) /*0x6088ca*/
      return 0; /*0x6088ca*/
    v13 = g_DisplayWidth; /*0x6088d0*/
    if ( g_DisplayWidth != 640 ) /*0x6088dd*/
    {
      if ( g_DisplayWidth != 800 ) /*0x6088e9*/
      {
LABEL_95:
        if ( v13 != 1024 ) /*0x608a16*/
          return 0; /*0x608a16*/
      }
LABEL_96:
      v6 = __2_YAPAXI_Z(0x10u); /*0x608a1c*/
      if ( !v6 ) /*0x608a28*/
        return 0; /*0x608a28*/
      goto LABEL_140; /*0x608a28*/
    }
    goto LABEL_135; /*0x6088dd*/
  }
  if ( g_DisplayWidth < 800 ) /*0x608557*/
    return 0; /*0x608557*/
  if ( DlgCtrlID == 1770 ) /*0x608562*/
  {
    v6 = __2_YAPAXI_Z(0x10u); /*0x608566*/
    if ( v6 ) /*0x608570*/
    {
      *v6 = 141; /*0x608576*/
      v6[1] = 58; /*0x60857c*/
      v6[2] = 348; /*0x608583*/
      v6[3] = 136; /*0x60858a*/
LABEL_143:
      *a3 = *v6; /*0x608c95*/
      a3[1] = v6[1]; /*0x608ca3*/
      a3[2] = v6[2]; /*0x608ca9*/
      a3[3] = v6[3]; /*0x608caf*/
      __3_YAXPAX_Z(v6); /*0x608cb2*/
      return 1; /*0x608cc1*/
    }
    return 0; /*0x608570*/
  }
  if ( DlgCtrlID != 1772 ) /*0x60859b*/
  {
    switch ( DlgCtrlID ) /*0x6085d4*/
    {
      case 1295: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x6085d8*/
        if ( v6 ) /*0x6085e2*/
        {
          *v6 = 177; /*0x6085e8*/
          v6[1] = 265; /*0x6085ee*/
          v6[2] = 272; /*0x6085f5*/
          v6[3] = 22; /*0x6085fc*/
          goto LABEL_143; /*0x608603*/
        }
        return 0; /*0x6085e2*/
      case 1822: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608611*/
        if ( !v6 ) /*0x60861b*/
          return 0; /*0x60861b*/
        *v6 = 177; /*0x608621*/
        v6[1] = 291; /*0x608627*/
        v6[2] = 141; /*0x60862e*/
        break;
      case 1648: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608643*/
        if ( !v6 ) /*0x60864d*/
          return 0; /*0x60864d*/
        *v6 = 309; /*0x608653*/
        v6[1] = 291; /*0x608659*/
        v6[2] = 141; /*0x608660*/
        break;
      case 1959: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608675*/
        if ( !v6 ) /*0x60867f*/
          return 0; /*0x60867f*/
        *v6 = 10; /*0x608685*/
        v6[1] = 198; /*0x60868b*/
        v6[2] = 610; /*0x608692*/
        break;
      case 1960: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x6086ab*/
        if ( !v6 ) /*0x6086b5*/
          return 0; /*0x6086b5*/
        *v6 = 10; /*0x6086bb*/
        v6[1] = 505; /*0x6086c1*/
        v6[2] = 610; /*0x6086c8*/
        break;
      default:
        return 0; /*0x6086a3*/
    }
LABEL_142:
    v6[3] = 20; /*0x608c8a*/
    goto LABEL_143; /*0x608c8a*/
  }
  v6 = __2_YAPAXI_Z(0x10u); /*0x60859f*/
  if ( v6 ) /*0x6085a9*/
  {
    *v6 = 141; /*0x6085af*/
    v6[1] = 364; /*0x6085b5*/
    v6[2] = 348; /*0x6085bc*/
    v6[3] = 136; /*0x6085c3*/
    goto LABEL_143; /*0x6085ca*/
  }
  return 0; /*0x608cbc*/
}



// ==== 0x00608CD0  IsDialogControlVisible  this=-  sig=csp ====
int __fastcall IsDialogControlVisible(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int result; // eax
  _DWORD *v6; // eax
  bool v8; // zf
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x608cdc*/
  if ( !dword_AC1B04 ) /*0x608ce0*/
    goto LABEL_5; /*0x608ce0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x608d01*/
  if ( !v3 ) /*0x608d06*/
    goto LABEL_5; /*0x608d06*/
  while ( *v3 != v9 ) /*0x608d0e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x608d14*/
    if ( !v3 ) /*0x608d1c*/
      goto LABEL_5; /*0x608d1c*/
  }
  v6 = v3 + 1; /*0x608f42*/
  if ( v6 ) /*0x608f47*/
    v4 = v6[27]; /*0x608f4d*/
  else
LABEL_5:
    v4 = 0; /*0x608d1e*/
  result = GetDlgCtrlID(a2); /*0x608d21*/
  if ( (v4 == 268 /*0x608f32*/
     || v4 == 148
     || v4 == 163
     || v4 == 115
     || v4 == 216
     || v4 == 3003
     || v4 == 245
     || v4 == 261
     || v4 == 226
     || v4 == 213
     || v4 == 693
     || v4 == 183
     || v4 == 692
     || v4 == 3015
     || v4 == 257
     || v4 == 297
     || v4 == 3014
     || v4 == 215
     || v4 == 264
     || v4 == 188
     || v4 == 189
     || v4 == 187
     || v4 == 181
     || v4 == 3002
     || v4 == 255
     || v4 == 107
     || v4 == 256
     || v4 == 258
     || v4 == 184
     || v4 == 214
     || v4 == 259
     || v4 == 293
     || v4 == 231
     || v4 == 278
     || v4 == 194
     || v4 == 201
     || v4 == 285
     || v4 == 284
     || v4 == 276
     || v4 == 700
     || v4 == 275
     || v4 == 265
     || v4 == 271
     || v4 == 279
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 270
     || v4 == 274)
    && result == 1684 )
  {
    LOBYTE(result) = 1; /*0x608f35*/
    return result; /*0x608f39*/
  }
  if ( (v4 == 148 /*0x609082*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && result == 1820 )
  {
    LOBYTE(result) = 1; /*0x609085*/
    return result; /*0x609089*/
  }
  if ( (v4 == 188 /*0x6090d4*/
     || v4 == 189
     || v4 == 258
     || v4 == 194
     || v4 == 201
     || v4 == 3014
     || v4 == 261
     || v4 == 107
     || v4 == 275)
    && result == 1128 )
  {
    LOBYTE(result) = 1; /*0x6090d7*/
    return result; /*0x6090db*/
  }
  switch ( v4 ) /*0x6090e2*/
  {
    case 226: /*0x6090e2*/
      if ( result != 1670 && result != 1400 && result != 1372 && result != 1667 && result != 1375 ) /*0x609115*/
        return result == 1668; /*0x609120*/
      return 1; /*0x609115*/
    case 257: /*0x6090e2*/
      if ( result == 1678 || result == 1677 ) /*0x60913d*/
        return 1; /*0x60913d*/
      return result == 1679; /*0x609148*/
    case 297: /*0x6090e2*/
      LOBYTE(result) = result == 1861; /*0x609160*/
      return result; /*0x609164*/
    case 256: /*0x6090e2*/
      if ( result == 1673 || result == 1672 ) /*0x60917d*/
        return 1; /*0x60917d*/
      return result == 1401; /*0x609188*/
    case 148: /*0x6090e2*/
      LOBYTE(result) = result == 1038; /*0x6091a0*/
      return result; /*0x6091a4*/
    case 183: /*0x6090e2*/
      LOBYTE(result) = result == 1039; /*0x6091b8*/
      return result; /*0x6091bc*/
    case 692: /*0x6090e2*/
      LOBYTE(result) = result == 1735; /*0x6091d0*/
      return result; /*0x6091d4*/
    case 693: /*0x6090e2*/
      LOBYTE(result) = result == 1736; /*0x6091e8*/
      return result; /*0x6091ec*/
    case 261: /*0x6090e2*/
      if ( result == 1732 || result == 1730 || result == 1731 ) /*0x609210*/
        return 1; /*0x609210*/
      return result == 1733; /*0x60921b*/
    case 258: /*0x6090e2*/
      if ( result == 1772 || result == 1450 || result == 1448 ) /*0x609243*/
        return 1; /*0x609243*/
      return result == 1559; /*0x60924e*/
    case 181: /*0x6090e2*/
      if ( result == 1314 || result == 1313 || result == 1310 || result == 1311 ) /*0x609281*/
        return 1; /*0x609281*/
      return result == 1312; /*0x60928c*/
    case 3002: /*0x6090e2*/
      if ( result == 1314 ) /*0x60929e*/
        return 1; /*0x60929e*/
      return result == 1313; /*0x609662*/
    case 3003: /*0x6090e2*/
      if ( result == 1324 ) /*0x6092bb*/
        return 1; /*0x6092bb*/
      return result == 1325; /*0x6092c6*/
    case 213: /*0x6090e2*/
      if ( result == 1486 ) /*0x6092d8*/
        return 1; /*0x6092d8*/
      return result == 1485; /*0x6092e3*/
    case 251: /*0x6090e2*/
      if ( result == 6 ) /*0x6092f3*/
        return 1; /*0x6092f3*/
      return result == 1; /*0x6092fc*/
    case 216: /*0x6090e2*/
      LOBYTE(result) = result == 1739; /*0x609314*/
      return result; /*0x609318*/
    case 215: /*0x6090e2*/
      LOBYTE(result) = result == 1; /*0x60932a*/
      return result; /*0x60932e*/
    case 188: /*0x6090e2*/
    case 194: /*0x6090e2*/
      return result == 1772 || result == 1416 || result == 1450 || result == 1448 || result == 1474; /*0x60968b*/
    case 189: /*0x6090e2*/
    case 201: /*0x6090e2*/
      if ( result == 1439 || result == 1772 ) /*0x609654*/
        return 1; /*0x609654*/
      v8 = result == 1448; /*0x609656*/
LABEL_244:
      if ( v8 ) /*0x60965b*/
        return 1; /*0x60965b*/
      return result == 1474; /*0x60965d*/
    case 187: /*0x6090e2*/
      if ( result == 1741 || result == 1740 ) /*0x609377*/
        return 1; /*0x609377*/
      return result == 1742; /*0x609382*/
    case 182: /*0x6090e2*/
      if ( result == 1737 || result == 1810 ) /*0x60939f*/
        return 1; /*0x60939f*/
      return result == 1316; /*0x6093aa*/
    case 107: /*0x6090e2*/
      if ( result == 1411 ) /*0x6093b9*/
        return 1; /*0x6093b9*/
      return result == 1733; /*0x6093c4*/
    case 3014: /*0x6090e2*/
      if ( result == 1745 || result == 1772 ) /*0x6093e1*/
        return 1; /*0x6093e1*/
      return result == 1448; /*0x6093ec*/
    case 271: /*0x6090e2*/
    case 285: /*0x6090e2*/
      return result == 1337 || result == 1772 || result == 1771; /*0x609640*/
    case 265: /*0x6090e2*/
      if ( result == 1 || result == 1573 ) /*0x60941f*/
        return 1; /*0x60941f*/
      return result == 1339; /*0x60942a*/
    case 270: /*0x6090e2*/
    case 284: /*0x6090e2*/
      return result == 1760 || result == 1761 || result == 1762 || result == 1764 || result == 1905 || result == 1375; /*0x609625*/
    case 276: /*0x6090e2*/
      if ( result == 1671 || result == 1772 || result == 1771 || result == 1672 ) /*0x609475*/
        return 1; /*0x609475*/
      return result == 1955; /*0x609480*/
    case 275: /*0x6090e2*/
      if ( result == 1567 /*0x6094d4*/
        || result == 1672
        || result == 1955
        || result == 1958
        || result == 1673
        || result == 1581
        || result == 1579 )
      {
        return 1; /*0x6094d4*/
      }
      v8 = result == 1341; /*0x6094da*/
      goto LABEL_244; /*0x6094df*/
    case 700: /*0x6090e2*/
      if ( result != 1 && result != 1594 ) /*0x6094fa*/
        return 0; /*0x609505*/
      break;
    case 278: /*0x6090e2*/
      if ( result != 1579 && result != 1581 && result != 1474 && result != 1794 && result != 1795 ) /*0x60953f*/
        return 0; /*0x60954a*/
      break;
    case 255: /*0x6090e2*/
      if ( result != 1313 && result != 1314 ) /*0x609563*/
        return 0; /*0x60956e*/
      break;
    case 290: /*0x6090e2*/
      LOBYTE(result) = result == 1; /*0x609580*/
      return result; /*0x609584*/
    default:
      if ( v4 != 274 ) /*0x60958b*/
      {
        if ( v4 == 231 ) /*0x6095a1*/
          return result == 1 || result == 1398; /*0x6095b1*/
        if ( v4 == 254 ) /*0x6095c3*/
        {
          LOBYTE(result) = result == 1; /*0x6095ce*/
          return result; /*0x6095d2*/
        }
        if ( v4 != 230 && v4 != 243 && v4 != 244 ) /*0x6095e9*/
        {
          LOBYTE(result) = 0; /*0x6095ec*/
          return result; /*0x6095f0*/
        }
      }
      LOBYTE(result) = result == 1; /*0x609596*/
      return result; /*0x60959a*/
  }
  return 1; /*0x608f34*/
}



// ==== 0x006096A0  sub_6096A0  this=-  sig=ida-proto ====
char __fastcall sub_6096A0(int a1, HWND a2)
{
  HWND *v4; // eax
  _DWORD *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x6096b5*/
    return 0; /*0x6096b5*/
  v7 = a2; /*0x6096bc*/
  if ( !dword_AC1B04 ) /*0x6096c2*/
    return 0; /*0x6096c2*/
  v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v7) & ((1 << dword_AC1B0C) - 1))); /*0x6096e3*/
  if ( !v4 ) /*0x6096e8*/
    return 0; /*0x6096e8*/
  while ( *v4 != v7 ) /*0x6096f0*/
  {
    v4 = (HWND *)v4[129]; /*0x6096f2*/
    if ( !v4 ) /*0x6096fa*/
      return 0; /*0x6096fa*/
  }
  v6 = v4 + 1; /*0x609706*/
  if ( v6 && !v6[26] ) /*0x60970d*/
    return IsDialogControlVisible(a1, a2); /*0x609718*/
  else
    return 0; /*0x6096fc*/
}



// ==== 0x00609730  GetDialogDefaultButton  this=-  sig=csp ====
int __fastcall GetDialogDefaultButton(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int result; // eax
  _DWORD *v6; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = a1; /*0x60973c*/
  if ( !dword_AC1B04 ) /*0x609740*/
    goto LABEL_5; /*0x609740*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v7) & ((1 << dword_AC1B0C) - 1))); /*0x609761*/
  if ( !v3 ) /*0x609766*/
    goto LABEL_5; /*0x609766*/
  while ( *v3 != v7 ) /*0x60976e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609770*/
    if ( !v3 ) /*0x609778*/
      goto LABEL_5; /*0x609778*/
  }
  v6 = v3 + 1; /*0x60979f*/
  if ( v6 ) /*0x6097a4*/
    v4 = v6[27]; /*0x6097a6*/
  else
LABEL_5:
    v4 = 0; /*0x60977a*/
  result = GetDlgCtrlID(a2); /*0x60977d*/
  switch ( v4 ) /*0x609789*/
  {
    case 226: /*0x609789*/
      LOBYTE(result) = result == 1006; /*0x609796*/
      break;
    case 115: /*0x609789*/
    case 268: /*0x609789*/
    case 259: /*0x609789*/
      LOBYTE(result) = result == 1059; /*0x609a8c*/
      break;
    case 264: /*0x609789*/
    case 3015: /*0x609789*/
      LOBYTE(result) = result == 1745; /*0x609a7c*/
      break;
    case 148: /*0x609789*/
    case 182: /*0x609789*/
    case 163: /*0x609789*/
    case 216: /*0x609789*/
    case 3003: /*0x609789*/
    case 245: /*0x609789*/
    case 213: /*0x609789*/
    case 693: /*0x609789*/
    case 183: /*0x609789*/
    case 692: /*0x609789*/
    case 257: /*0x609789*/
    case 297: /*0x609789*/
    case 181: /*0x609789*/
    case 3002: /*0x609789*/
    case 256: /*0x609789*/
    case 184: /*0x609789*/
    case 214: /*0x609789*/
    case 293: /*0x609789*/
    case 278: /*0x609789*/
    case 285: /*0x609789*/
    case 284: /*0x609789*/
    case 275: /*0x609789*/
    case 265: /*0x609789*/
    case 271: /*0x609789*/
    case 276: /*0x609789*/
    case 270: /*0x609789*/
      LOBYTE(result) = result == 1670; /*0x609a6c*/
      break;
    case 258: /*0x609789*/
    case 261: /*0x609789*/
    case 107: /*0x609789*/
    case 187: /*0x609789*/
    case 279: /*0x609789*/
    case 3014: /*0x609789*/
      LOBYTE(result) = result == 1472; /*0x609a5c*/
      break;
    case 188: /*0x609789*/
    case 189: /*0x609789*/
    case 234: /*0x609789*/
    case 215: /*0x609789*/
    case 194: /*0x609789*/
    case 201: /*0x609789*/
    case 700: /*0x609789*/
    case 231: /*0x609789*/
    case 230: /*0x609789*/
    case 243: /*0x609789*/
    case 244: /*0x609789*/
    case 290: /*0x609789*/
    case 274: /*0x609789*/
    case 254: /*0x609789*/
    case 252: /*0x609789*/
      LOBYTE(result) = result == 2; /*0x609a4c*/
      break;
    case 212: /*0x609789*/
      LOBYTE(result) = result == 1; /*0x609a0a*/
      break;
    case 251: /*0x609789*/
      LOBYTE(result) = result == 7; /*0x609a20*/
      break;
    default:
      LOBYTE(result) = v4 == 255 && result == 1653; /*0x609a38*/
      break;
  }
  return result; /*0x609795*/
}



// ==== 0x00609AA0  sub_609AA0  this=-  sig=ida-proto ====
bool __fastcall sub_609AA0(int a1, HWND a2)
{
  HWND *v4; // eax
  _DWORD *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609ab5*/
    return 0; /*0x609ab5*/
  v7 = a2; /*0x609abc*/
  if ( !dword_AC1B04 ) /*0x609ac2*/
    return 0; /*0x609ac2*/
  v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v7) & ((1 << dword_AC1B0C) - 1))); /*0x609ae3*/
  if ( !v4 ) /*0x609ae8*/
    return 0; /*0x609ae8*/
  while ( *v4 != v7 ) /*0x609af0*/
  {
    v4 = (HWND *)v4[129]; /*0x609af2*/
    if ( !v4 ) /*0x609afa*/
      return 0; /*0x609afa*/
  }
  v6 = v4 + 1; /*0x609b06*/
  if ( v6 && !v6[26] ) /*0x609b0d*/
    return GetDialogDefaultButton(a1, a2); /*0x609b18*/
  else
    return 0; /*0x609afc*/
}



// ==== 0x00609B30  sub_609B30  this=-  sig=ida-proto ====
bool __fastcall sub_609B30(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // esi
  int DlgCtrlID; // edi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x609b3c*/
  if ( !dword_AC1B04 ) /*0x609b40*/
    goto LABEL_5; /*0x609b40*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x609b61*/
  if ( !v3 ) /*0x609b66*/
    goto LABEL_5; /*0x609b66*/
  while ( *v3 != v8 ) /*0x609b6e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609b70*/
    if ( !v3 ) /*0x609b78*/
      goto LABEL_5; /*0x609b78*/
  }
  v7 = v3 + 1; /*0x609ba2*/
  if ( v7 ) /*0x609ba7*/
    v4 = (void *)v7[27]; /*0x609ba9*/
  else
LABEL_5:
    v4 = 0; /*0x609b7a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x609b85*/
  return Event::IsValidActionType(v4) && DlgCtrlID == 1685; /*0x609b98*/
}



// ==== 0x00609BC0  sub_609BC0  this=-  sig=ida-proto ====
bool __fastcall sub_609BC0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( (unsigned __int8)SessionClass::GetGameSpeed(dword_A8B238) ) /*0x609bcd*/
    return 0; /*0x609bcd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609bea*/
  {
    v9 = a2; /*0x609bf1*/
    if ( dword_AC1B04 ) /*0x609bf7*/
    {
      v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609c18*/
      if ( v4 ) /*0x609c1d*/
      {
        while ( *v4 != v9 ) /*0x609c25*/
        {
          v4 = (HWND *)v4[129]; /*0x609c27*/
          if ( !v4 ) /*0x609c2f*/
            goto LABEL_7; /*0x609c2f*/
        }
        v7 = v4 + 1; /*0x609c95*/
        if ( v7 ) /*0x609c9a*/
        {
          if ( !v7[26] && (unsigned __int8)IsDialogControlVisible(a1, a2) ) /*0x609ca7*/
            return 1; /*0x609cb6*/
        }
      }
    }
  }
LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609c3b*/
    return 0; /*0x609c3b*/
  v9 = a2; /*0x609c46*/
  if ( !dword_AC1B04 ) /*0x609c4c*/
    return 0; /*0x609c4c*/
  v5 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609c71*/
  if ( !v5 ) /*0x609c76*/
    return 0; /*0x609c76*/
  while ( *v5 != v9 ) /*0x609c7e*/
  {
    v5 = (HWND *)v5[129]; /*0x609c80*/
    if ( !v5 ) /*0x609c88*/
      return 0; /*0x609c90*/
  }
  v8 = v5 + 1; /*0x609cbb*/
  return v8 && !v8[26] && (unsigned __int8)GetDialogDefaultButton(a1, a2); /*0x609cd8*/
}



// ==== 0x00609CF0  sub_609CF0  this=-  sig=ida-proto ====
bool __fastcall sub_609CF0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( !(unsigned __int8)SessionClass::GetGameSpeed(dword_A8B238) ) /*0x609cfd*/
    return 0; /*0x609cfd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609d1a*/
  {
    v9 = a2; /*0x609d21*/
    if ( dword_AC1B04 ) /*0x609d27*/
    {
      v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609d48*/
      if ( v4 ) /*0x609d4d*/
      {
        while ( *v4 != v9 ) /*0x609d55*/
        {
          v4 = (HWND *)v4[129]; /*0x609d57*/
          if ( !v4 ) /*0x609d5f*/
            goto LABEL_7; /*0x609d5f*/
        }
        v7 = v4 + 1; /*0x609dc5*/
        if ( v7 ) /*0x609dca*/
        {
          if ( !v7[26] && (unsigned __int8)IsDialogControlVisible(a1, a2) ) /*0x609dd7*/
            return 1; /*0x609de6*/
        }
      }
    }
  }
LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609d6b*/
    return 0; /*0x609d6b*/
  v9 = a2; /*0x609d76*/
  if ( !dword_AC1B04 ) /*0x609d7c*/
    return 0; /*0x609d7c*/
  v5 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609da1*/
  if ( !v5 ) /*0x609da6*/
    return 0; /*0x609da6*/
  while ( *v5 != v9 ) /*0x609dae*/
  {
    v5 = (HWND *)v5[129]; /*0x609db0*/
    if ( !v5 ) /*0x609db8*/
      return 0; /*0x609dc0*/
  }
  v8 = v5 + 1; /*0x609deb*/
  return v8 && !v8[26] && (unsigned __int8)GetDialogDefaultButton(a1, a2); /*0x609e08*/
}



// ==== 0x00609E20  FilterDialogButtonAction  this=-  sig=csp ====
char __fastcall FilterDialogButtonAction(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x609e2c*/
  if ( !dword_AC1B04 ) /*0x609e30*/
    goto LABEL_5; /*0x609e30*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609e51*/
  if ( !v3 ) /*0x609e56*/
    goto LABEL_5; /*0x609e56*/
  while ( *v3 != v9 ) /*0x609e5e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609e60*/
    if ( !v3 ) /*0x609e68*/
      goto LABEL_5; /*0x609e68*/
  }
  v7 = v3 + 1; /*0x609e94*/
  if ( v7 ) /*0x609e99*/
    v4 = v7[27]; /*0x609e9b*/
  else
LABEL_5:
    v4 = 0; /*0x609e6a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x609e6d*/
  switch ( v4 ) /*0x609e79*/
  {
    case 269: /*0x609e79*/
      if ( DlgCtrlID != 1473 ) /*0x609e80*/
        return DlgCtrlID == 1472; /*0x609e8b*/
      return 1; /*0x60a0ee*/
    case 217: /*0x609e79*/
      if ( DlgCtrlID == 1473 ) /*0x609ead*/
        return 1; /*0x609ead*/
      return DlgCtrlID == 1738; /*0x60a0de*/
    case 163: /*0x609e79*/
      if ( DlgCtrlID == 1231 ) /*0x609eca*/
        return 1; /*0x609eca*/
      return DlgCtrlID == 1232; /*0x609ed5*/
    case 261: /*0x609e79*/
      if ( DlgCtrlID == 1568 ) /*0x609ee7*/
        return 1; /*0x609ee7*/
      return DlgCtrlID == 1569; /*0x609ef2*/
    case 240: /*0x609e79*/
      return DlgCtrlID == 1472; /*0x609f0e*/
    case 206: /*0x609e79*/
      return DlgCtrlID == 1454; /*0x609f26*/
    case 288: /*0x609e79*/
      if ( DlgCtrlID == 1454 ) /*0x609f34*/
        return 1; /*0x609f34*/
      return DlgCtrlID == 2; /*0x609f3d*/
    case 289: /*0x609e79*/
      if ( DlgCtrlID == 1454 || DlgCtrlID == 1455 ) /*0x609f5a*/
        return 1; /*0x609f5a*/
      return DlgCtrlID == 2; /*0x609f63*/
    case 234: /*0x609e79*/
      if ( DlgCtrlID == 1600 /*0x609fb7*/
        || DlgCtrlID == 1602
        || DlgCtrlID == 1601
        || DlgCtrlID == 1603
        || DlgCtrlID == 1604
        || DlgCtrlID == 1605
        || DlgCtrlID == 1606 )
      {
        return 1; /*0x609fb7*/
      }
      return DlgCtrlID == 1607; /*0x609fc2*/
    case 184: /*0x609e79*/
      if ( DlgCtrlID == 1329 ) /*0x609fd4*/
        return 1; /*0x609fd4*/
      return DlgCtrlID == 1333; /*0x609fdf*/
    case 287: /*0x609e79*/
      return DlgCtrlID == 1472; /*0x609ffb*/
    case 277: /*0x609e79*/
      if ( DlgCtrlID == 1794 ) /*0x60a009*/
        return 1; /*0x60a009*/
      return DlgCtrlID == 1670; /*0x60a014*/
    case 211: /*0x609e79*/
      return DlgCtrlID == 2; /*0x60a02e*/
    case 207: /*0x609e79*/
      if ( DlgCtrlID == 1474 ) /*0x60a03c*/
        return 1; /*0x60a03c*/
      return DlgCtrlID == 2; /*0x60a045*/
    case 195: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a055*/
        return 1; /*0x60a055*/
      return DlgCtrlID == 2; /*0x60a05e*/
    case 283: /*0x609e79*/
      goto LABEL_57; /*0x60a066*/
    case 225: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a081*/
        return 1; /*0x60a081*/
      return DlgCtrlID == 2; /*0x60a086*/
    case 286: /*0x609e79*/
LABEL_57:
      if ( DlgCtrlID == 1474 ) /*0x60a06d*/
        return 1; /*0x60a06d*/
      return DlgCtrlID == 1670; /*0x60a074*/
    case 196: /*0x609e79*/
      if ( DlgCtrlID == 1421 ) /*0x60a09d*/
        return 1; /*0x60a09d*/
      return DlgCtrlID == 1422; /*0x60a0a4*/
    case 208: /*0x609e79*/
      return DlgCtrlID == 1; /*0x60a0bb*/
    case 252: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a0c7*/
        return 1; /*0x60a0c7*/
      return DlgCtrlID == 2; /*0x60a0cc*/
    case 294: /*0x609e79*/
      if ( DlgCtrlID == 6 ) /*0x60a0d9*/
        return 1; /*0x60a0d9*/
      return DlgCtrlID == 7; /*0x60a0db*/
  }
  return 0; /*0x609f09*/
}



// ==== 0x0060A100  sub_60A100  this=-  sig=ida-proto ====
bool __fastcall sub_60A100(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60a10c*/
  if ( !dword_AC1B04 ) /*0x60a110*/
    goto LABEL_5; /*0x60a110*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x60a131*/
  if ( !v3 ) /*0x60a136*/
    goto LABEL_5; /*0x60a136*/
  while ( *v3 != v8 ) /*0x60a13e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x60a140*/
    if ( !v3 ) /*0x60a148*/
      goto LABEL_5; /*0x60a148*/
  }
  v7 = v3 + 1; /*0x60a16f*/
  if ( v7 ) /*0x60a174*/
    v4 = v7[27]; /*0x60a176*/
  else
LABEL_5:
    v4 = 0; /*0x60a14a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60a14d*/
  return v4 == 226 && DlgCtrlID == 1821; /*0x60a159*/
}



// ==== 0x0060A180  EnumFunc  this=-  sig=csp ====
BOOL __stdcall EnumFunc(HWND hWnd, LPARAM a2)
{
  HWND v2; // esi
  HWND Parent; // edi
  int v4; // eax
  int v6; // eax

  v2 = hWnd; /*0x60a181*/
  Parent = GetParent(hWnd); /*0x60a190*/
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x60a19d*/
  {
    hWnd = v2; /*0x60a1a4*/
    if ( dword_AC1B04 ) /*0x60a1aa*/
    {
      v4 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x60a1cb*/
      if ( v4 ) /*0x60a1d0*/
      {
        while ( *(HWND *)v4 != hWnd ) /*0x60a1d8*/
        {
          v4 = *(_DWORD *)(v4 + 516); /*0x60a1da*/
          if ( !v4 ) /*0x60a1e2*/
            return 1; /*0x60a1eb*/
        }
        v6 = v4 + 4; /*0x60a1f2*/
        if ( v6 && !*(_DWORD *)(v6 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x60a204*/
        {
          if ( IsWindowVisible(v2) ) /*0x60a20e*/
            ++dword_AC1CAC; /*0x60a218*/
        }
      }
    }
  }
  return 1; /*0x60a1e4*/
}



// ==== 0x0060A250  sub_60A250  this=-  sig=csp ====
BOOL __stdcall sub_60A250(HWND hWnd, LPARAM a2)
{
  HWND v2; // esi
  HWND Parent; // edi
  int v4; // eax
  int v6; // eax

  v2 = hWnd; /*0x60a251*/
  Parent = GetParent(hWnd); /*0x60a260*/
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x60a26d*/
  {
    hWnd = v2; /*0x60a274*/
    if ( dword_AC1B04 ) /*0x60a27a*/
    {
      v4 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x60a29b*/
      if ( v4 ) /*0x60a2a0*/
      {
        while ( *(HWND *)v4 != hWnd ) /*0x60a2a8*/
        {
          v4 = *(_DWORD *)(v4 + 516); /*0x60a2aa*/
          if ( !v4 ) /*0x60a2b2*/
            return 1; /*0x60a2bb*/
        }
        v6 = v4 + 4; /*0x60a2c2*/
        if ( v6 && !*(_DWORD *)(v6 + 104) && GetDialogDefaultButton((int)Parent, v2) ) /*0x60a2d4*/
        {
          if ( IsWindowVisible(v2) ) /*0x60a2de*/
            ++dword_AC4894; /*0x60a2e8*/
        }
      }
    }
  }
  return 1; /*0x60a2b4*/
}



// ==== 0x0060A330  Dialog::HandleTabKey  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_HandleTabKey(HWND hWnd, LPARAM a2)
{
  HWND *v3; // eax
  HWND Parent; // ebp
  HWND *v5; // eax
  _DWORD *v6; // eax
  HWND *v8; // eax
  _DWORD *v9; // eax
  HWND v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  HWND v12; // [esp+14h] [ebp-4h] BYREF
  HWND hWnda; // [esp+1Ch] [ebp+4h]

  v10 = hWnd; /*0x60a341*/
  hWnda = 0; /*0x60a345*/
  if ( dword_AC1B04 ) /*0x60a34d*/
  {
    v3 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v10) & ((1 << dword_AC1B0C) - 1))); /*0x60a36e*/
    if ( v3 ) /*0x60a373*/
    {
      while ( *v3 != v10 ) /*0x60a37b*/
      {
        v3 = (HWND *)v3[129]; /*0x60a37d*/
        if ( !v3 ) /*0x60a385*/
          goto LABEL_7; /*0x60a385*/
      }
      hWnda = (HWND)(v3 + 1); /*0x60a390*/
    }
  }
LABEL_7:
  if ( !hWnda ) /*0x60a39a*/
    return 1; /*0x60a39a*/
  Parent = GetParent(hWnd); /*0x60a3ac*/
  if ( !SessionClass::GetGameSpeed(dword_A8B238) ) /*0x60a3ae*/
  {
    if ( (GetWindowLongA(hWnd, -16) & 0xB) == 0xB ) /*0x60a3cb*/
    {
      v10 = hWnd; /*0x60a3d2*/
      if ( dword_AC1B04 ) /*0x60a3d8*/
      {
        v5 = (HWND *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v10)); /*0x60a3ef*/
        if ( v5 ) /*0x60a3f4*/
        {
          while ( *v5 != v10 ) /*0x60a3fc*/
          {
            v5 = (HWND *)v5[129]; /*0x60a3fe*/
            if ( !v5 ) /*0x60a406*/
              goto LABEL_18; /*0x60a406*/
          }
          v6 = v5 + 1; /*0x60a40e*/
          if ( v6 ) /*0x60a413*/
          {
            if ( !v6[26] && IsDialogControlVisible((int)Parent, hWnd) ) /*0x60a420*/
              goto LABEL_22; /*0x60a427*/
          }
        }
      }
    }
LABEL_18:
    if ( (GetWindowLongA(hWnd, -16) & 0xB) == 0xB ) /*0x60a433*/
    {
      v12 = hWnd; /*0x60a444*/
      v11 = 0; /*0x60a448*/
      HashTable::Get(&dword_AC1B00, &v12, &v11); /*0x60a450*/
      if ( v11 ) /*0x60a45b*/
      {
        if ( !*(_DWORD *)(v11 + 104) && GetDialogDefaultButton((int)Parent, hWnd) ) /*0x60a468*/
        {
LABEL_22:
          *((_DWORD *)hWnda + 44) = 1; /*0x60a471*/
          return 1; /*0x60a486*/
        }
      }
    }
  }
  if ( !SessionClass::GetGameSpeed(dword_A8B238) ) /*0x60a48e*/
    goto LABEL_33; /*0x60a48e*/
  if ( (GetWindowLongA(hWnd, -16) & 0xB) != 0xB /*0x60a4da*/
    || (v12 = hWnd, v11 = 0, HashTable::Get(&dword_AC1B00, &v12, &v11), !v11)
    || *(_DWORD *)(v11 + 104)
    || !IsDialogControlVisible((int)Parent, hWnd) )
  {
    if ( (GetWindowLongA(hWnd, -16) & 0xB) != 0xB ) /*0x60a4f1*/
      goto LABEL_33; /*0x60a4f1*/
    v10 = hWnd; /*0x60a4f8*/
    if ( !dword_AC1B04 ) /*0x60a4fe*/
      goto LABEL_33; /*0x60a4fe*/
    v8 = (HWND *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v10)); /*0x60a515*/
    if ( !v8 ) /*0x60a51a*/
      goto LABEL_33; /*0x60a51a*/
    while ( *v8 != v10 ) /*0x60a522*/
    {
      v8 = (HWND *)v8[129]; /*0x60a524*/
      if ( !v8 ) /*0x60a52c*/
        goto LABEL_33; /*0x60a52c*/
    }
    v9 = v8 + 1; /*0x60a55b*/
    if ( !v9 || v9[26] || !GetDialogDefaultButton((int)Parent, hWnd) ) /*0x60a56d*/
    {
LABEL_33:
      if ( (unsigned __int8)FilterDialogButtonAction(Parent, hWnd) ) /*0x60a532*/
        *((_DWORD *)hWnda + 44) = 3; /*0x60a53f*/
      return 1; /*0x60a554*/
    }
  }
  *((_DWORD *)hWnda + 44) = 2; /*0x60a581*/
  return 1; /*0x60a47a*/
}



// ==== 0x0060A5B0  Dialog::DispatchEvent  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_DispatchEvent(HWND hWnd, LPARAM a2)
{
  HWND v2; // ebp
  HWND Parent; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // eax
  HWND *i; // eax
  HWND *j; // eax
  int v12; // edi
  int DlgCtrlID; // eax
  int v14; // edi
  signed int v15; // eax
  int v16; // eax
  char v17; // [esp+13h] [ebp-11h] BYREF
  HWND v18; // [esp+14h] [ebp-10h]
  HWND v19; // [esp+18h] [ebp-Ch] BYREF
  HWND v20; // [esp+1Ch] [ebp-8h] BYREF
  HWND v21; // [esp+20h] [ebp-4h] BYREF

  v2 = hWnd; /*0x60a5b5*/
  Parent = GetParent(hWnd); /*0x60a5c2*/
  v4 = 0; /*0x60a5c9*/
  v18 = Parent; /*0x60a5cb*/
  v19 = v2; /*0x60a5d1*/
  if ( dword_AC1B04 ) /*0x60a5d5*/
  {
    v5 = (_DWORD *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v19)); /*0x60a5ec*/
    if ( v5 ) /*0x60a5f1*/
    {
      while ( (HWND)*v5 != v19 ) /*0x60a5f9*/
      {
        v5 = (_DWORD *)v5[129]; /*0x60a5fb*/
        if ( !v5 ) /*0x60a603*/
          goto LABEL_7; /*0x60a603*/
      }
      v4 = v5 + 1; /*0x60a60b*/
    }
  }
LABEL_7:
  if ( !v4 ) /*0x60a610*/
    return 1; /*0x60aa44*/
  if ( !(unsigned __int8)IsValidActionDialog(Parent, v2) ) /*0x60a621*/
  {
    LOBYTE(hWnd) = 0; /*0x60a6e7*/
    if ( (unsigned __int8)UI_Helper_602B90(Parent, v2) ) /*0x60a6ec*/
    {
      v9 = v4[5]; /*0x60a6f5*/
      v4[28] = 2; /*0x60a6f8*/
      if ( !v9 ) /*0x60a701*/
      {
        v20 = Parent; /*0x60a70c*/
        if ( dword_AC1B04 ) /*0x60a712*/
        {
          for ( i = (HWND *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v20)); /*0x60a72e*/
                i;
                i = (HWND *)i[129] )
          {
            if ( *i == v20 ) /*0x60a736*/
              break; /*0x60a736*/
          }
        }
        GetDlgCtrlID(v2); /*0x60a743*/
        v4[5] = 0; /*0x60a749*/
      }
LABEL_77:
      v4[38] = 0; /*0x60a9c8*/
      v4[39] = GetTickCount(); /*0x60a9dc*/
      v4[40] = UI_Helper_603240(Parent, v2); /*0x60a9e7*/
      goto LABEL_78; /*0x60a9e7*/
    }
    v20 = Parent; /*0x60a75a*/
    if ( dword_AC1B04 ) /*0x60a760*/
    {
      for ( j = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v20) & ((1 << dword_AC1B0C) - 1))); j; j = (HWND *)j[129] ) /*0x60a786*/
      {
        if ( *j == v20 ) /*0x60a78e*/
          break; /*0x60a78e*/
      }
    }
    GetDlgCtrlID(v2); /*0x60a7a1*/
    v21 = Parent; /*0x60a7ab*/
    v12 = 0; /*0x60a7af*/
    v20 = 0; /*0x60a7b8*/
    HashTable::Get(&dword_AC1B00, &v21, &v20); /*0x60a7bc*/
    if ( v20 ) /*0x60a7c7*/
      v12 = *((_DWORD *)v20 + 27); /*0x60a7c9*/
    DlgCtrlID = GetDlgCtrlID(v2); /*0x60a7cd*/
    if ( v12 != 148 /*0x60a8fc*/
      && v12 != 216
      && v12 != 245
      && v12 != 226
      && v12 != 213
      && v12 != 257
      && v12 != 297
      && v12 != 215
      && v12 != 187
      && v12 != 256
      && v12 != 214
      && v12 != 293
      && v12 != 290
      && v12 != 274
      && v12 != 231
      && v12 != 278
      && v12 != 285
      && v12 != 284
      && v12 != 254
      && v12 != 271
      && v12 != 279
      && v12 != 276
      && v12 != 230
      && v12 != 243
      && v12 != 244
      && v12 != 700
      && v12 != 270
      && v12 != 264
      && v12 != 3014
      && v12 != 3015
      || DlgCtrlID != 1820 )
    {
      switch ( v12 ) /*0x60a908*/
      {
        case 148: /*0x60a908*/
          if ( DlgCtrlID != 1770 && DlgCtrlID != 1772 ) /*0x60a916*/
          {
            if ( DlgCtrlID != 1771 ) /*0x60a91d*/
              goto LABEL_78; /*0x60a91d*/
            LOBYTE(hWnd) = 1; /*0x60a923*/
            v4[28] = 4; /*0x60a928*/
            goto LABEL_74; /*0x60a92f*/
          }
          break;
        case 259: /*0x60a908*/
          if ( DlgCtrlID != 1835 ) /*0x60a93e*/
            goto LABEL_78; /*0x60a93e*/
          LOBYTE(hWnd) = 1; /*0x60a944*/
          v4[28] = 4; /*0x60a949*/
          goto LABEL_74; /*0x60a950*/
        case 3015: /*0x60a908*/
          if ( DlgCtrlID != 1835 ) /*0x60a95f*/
            goto LABEL_78; /*0x60a95f*/
          LOBYTE(hWnd) = 1; /*0x60a965*/
          v4[28] = 4; /*0x60a96a*/
          goto LABEL_74; /*0x60a971*/
        default:
          if ( v12 != 196 || DlgCtrlID != 1961 ) /*0x60a980*/
          {
LABEL_78:
            v15 = v4[40]; /*0x60a9ed*/
            if ( v15 <= 0 ) /*0x60a9f5*/
            {
              if ( (_BYTE)hWnd ) /*0x60aa27*/
              {
                v16 = v4[30]; /*0x60aa29*/
                if ( v16 ) /*0x60aa2e*/
                {
                  v4[37] = *(__int16 *)(v16 + 6); /*0x60aa34*/
                  *((_BYTE *)v4 + 168) = 0; /*0x60aa3a*/
                }
              }
            }
            else
            {
              SetTimer(v2, 0, v15, 0); /*0x60a9fd*/
              if ( (_BYTE)hWnd ) /*0x60aa09*/
              {
                *((_BYTE *)v4 + 168) = 1; /*0x60aa0b*/
                return 1; /*0x60aa1e*/
              }
            }
            return 1; /*0x60aa09*/
          }
          break;
      }
    }
    LOBYTE(hWnd) = 1; /*0x60a982*/
    v4[28] = 4; /*0x60a987*/
LABEL_74:
    if ( !v4[30] ) /*0x60a98e*/
    {
      v17 = 0; /*0x60a99d*/
      v14 = DispatchDialogControlAction(v18, v2); /*0x60a9b0*/
      v4[30] = GetDialogControlSHP(v18, v2, &v17); /*0x60a9b7*/
      v4[29] = v14; /*0x60a9ba*/
      *((_BYTE *)v4 + 124) = v17; /*0x60a9c1*/
    }
    Parent = v18; /*0x60a9c4*/
    goto LABEL_77; /*0x60a9c4*/
  }
  v4[28] = 1; /*0x60a630*/
  *((_BYTE *)v4 + 168) = 0; /*0x60a633*/
  v4[32] = 1; /*0x60a63a*/
  v4[33] = ValidateDialogEvent(Parent, v2); /*0x60a649*/
  v4[34] = CtlDialogColorHandler(Parent, v2); /*0x60a658*/
  v4[35] = ValidateDialogControl(Parent, v2); /*0x60a663*/
  v20 = Parent; /*0x60a66d*/
  v6 = 0; /*0x60a675*/
  hWnd = 0; /*0x60a67e*/
  HashTable::Get(&dword_AC1B00, &v20, &hWnd); /*0x60a682*/
  if ( hWnd ) /*0x60a68d*/
    v6 = *((_DWORD *)hWnd + 27); /*0x60a68f*/
  v7 = GetDlgCtrlID(v2); /*0x60a693*/
  if ( (v6 == 259 || v6 == 3015) && v7 == 1780 ) /*0x60a6ae*/
  {
    v4[36] = *((_DWORD *)dword_8871E0 + 433); /*0x60a6bd*/
    return 1; /*0x60a6c4*/
  }
  else
  {
    v4[36] = -1; /*0x60a6d2*/
    return 1; /*0x60a6d9*/
  }
}



// ==== 0x0060AA60  sub_60AA60  this=-  sig=csp ====
BOOL __stdcall sub_60AA60(HWND hWnd, LPARAM a2)
{
  HWND Parent; // eax

  Parent = GetParent(hWnd); /*0x60aa66*/
  if ( IsValidActionDialog((int)Parent, hWnd) ) /*0x60aa70*/
    SendMessageA(hWnd, 0x4EEu, 0, 0); /*0x60aa83*/
  return 1; /*0x60aa8e*/
}



// ==== 0x0060AAA0  Dialog::EnumAndCleanup  this=Dialog  sig=csp ====
BOOL __thiscall Dialog::EnumAndCleanup(Dialog *this)
{
  return EnumChildWindows((HWND)this, sub_60AA60, 0); /*0x60aaae*/
}



// ==== 0x0060AAB0  GadgetClass::FindByWindow  this=GadgetClass  sig=csp ====
BOOL __stdcall GadgetClass_FindByWindow(HWND hWnd, LPARAM a2)
{
  HWND Parent; // edi
  _DWORD *v3; // esi
  HWND *v4; // eax
  HWND *v5; // eax
  int v6; // esi
  int DlgCtrlID; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  bool v11; // al
  int v12; // eax
  HWND v14; // [esp+Ch] [ebp-94h] BYREF
  _DWORD *v15; // [esp+10h] [ebp-90h]
  int v16; // [esp+14h] [ebp-8Ch] BYREF
  HWND v17; // [esp+18h] [ebp-88h] BYREF
  HWND v18; // [esp+1Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+20h] [ebp-80h] BYREF

  Parent = GetParent(hWnd); /*0x60aac7*/
  v3 = 0; /*0x60aace*/
  v14 = hWnd; /*0x60aad0*/
  v15 = 0; /*0x60aad6*/
  if ( dword_AC1B04 ) /*0x60aada*/
  {
    v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v14) & ((1 << dword_AC1B0C) - 1))); /*0x60aafb*/
    if ( v4 ) /*0x60ab00*/
    {
      while ( *v4 != v14 ) /*0x60ab08*/
      {
        v4 = (HWND *)v4[129]; /*0x60ab0a*/
        if ( !v4 ) /*0x60ab12*/
          goto LABEL_7; /*0x60ab12*/
      }
      v3 = v4 + 1; /*0x60ab1a*/
      v15 = v4 + 1; /*0x60ab1d*/
    }
  }
LABEL_7:
  if ( v3 ) /*0x60ab23*/
  {
    v14 = Parent; /*0x60ab2e*/
    if ( !dword_AC1B04 ) /*0x60ab34*/
      goto LABEL_12; /*0x60ab34*/
    v5 = (HWND *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v14)); /*0x60ab4b*/
    if ( !v5 ) /*0x60ab50*/
      goto LABEL_12; /*0x60ab50*/
    while ( *v5 != v14 ) /*0x60ab58*/
    {
      v5 = (HWND *)v5[129]; /*0x60ab5e*/
      if ( !v5 ) /*0x60ab66*/
        goto LABEL_12; /*0x60ab66*/
    }
    v9 = v5 + 1; /*0x60acaf*/
    if ( v9 ) /*0x60acb4*/
      v6 = v9[27]; /*0x60acba*/
    else
LABEL_12:
      v6 = 0; /*0x60ab68*/
    DlgCtrlID = GetDlgCtrlID(hWnd); /*0x60ab6b*/
    if ( (v6 == 148 /*0x60ac9e*/
       || v6 == 216
       || v6 == 245
       || v6 == 226
       || v6 == 213
       || v6 == 257
       || v6 == 297
       || v6 == 215
       || v6 == 187
       || v6 == 256
       || v6 == 214
       || v6 == 293
       || v6 == 290
       || v6 == 274
       || v6 == 231
       || v6 == 278
       || v6 == 285
       || v6 == 284
       || v6 == 254
       || v6 == 271
       || v6 == 279
       || v6 == 276
       || v6 == 230
       || v6 == 243
       || v6 == 244
       || v6 == 700
       || v6 == 270
       || v6 == 264
       || v6 == 3014
       || v6 == 3015)
      && DlgCtrlID == 1820 )
    {
      v8 = 37; /*0x60aca0*/
    }
    else if ( (v6 == 188 || v6 == 189 || v6 == 194 || v6 == 201 || v6 == 258 || v6 == 3014) /*0x60acfe*/
           && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
    {
      v8 = 14; /*0x60ad04*/
    }
    else
    {
      v8 = 0; /*0x60ad00*/
    }
    v18 = Parent; /*0x60ad12*/
    v15[55] = v8; /*0x60ad16*/
    v14 = 0; /*0x60ad26*/
    HashTable::Get(&dword_AC1B00, &v18, &v14); /*0x60ad2e*/
    if ( !v14 ) /*0x60ad39*/
      goto LABEL_86; /*0x60ad39*/
    v10 = *((_DWORD *)v14 + 27); /*0x60ad3f*/
    if ( v10 != 269 /*0x60adc9*/
      && v10 != 217
      && v10 != 240
      && v10 != 206
      && v10 != 288
      && v10 != 289
      && v10 != 277
      && v10 != 211
      && v10 != 207
      && v10 != 287
      && v10 != 195
      && v10 != 283
      && v10 != 225
      && v10 != 286
      && v10 != 196
      && v10 != 304
      && v10 != 208
      && v10 != 252
      && v10 != 294 )
    {
      goto LABEL_86; /*0x60adc9*/
    }
    *((_DWORD *)v14 + 44) = 2; /*0x60adcf*/
    v17 = hWnd; /*0x60ade4*/
    GetClassNameA(hWnd, ClassName, 128); /*0x60ade8*/
    if ( !strcmp(ClassName, g_INI_Key_Edit) || !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x60ae37*/
      goto LABEL_85; /*0x60ae5c*/
    if ( !strcmp(ClassName, g_INI_Key_ListBox) && (v16 = 0, HashTable::Get(&dword_AC1B00, &v17, &v16)) ) /*0x60aeab*/
    {
      v11 = *(_DWORD *)(v16 + 104) == 1; /*0x60aebc*/
    }
    else
    {
      if ( strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x60aed0*/
        goto LABEL_86; /*0x60aef5*/
      v11 = (GetWindowLongA(v17, -16) & 3) != 3; /*0x60af09*/
    }
    if ( v11 ) /*0x60af0e*/
    {
LABEL_85:
      v12 = 192; /*0x60af10*/
LABEL_87:
      v15[50] = v12; /*0x60af19*/
      return 1; /*0x60af1d*/
    }
LABEL_86:
    v12 = 0; /*0x60af17*/
    goto LABEL_87; /*0x60af17*/
  }
  return 1; /*0x60af23*/
}



// ==== 0x0060AF50  UI_Get  this=Control  sig=csp ====
BOOL __fastcall sub_60AF50(HWND hWnd, _DWORD *a2)
{
  HWND Parent; // ebp
  char GameSpeed; // bl
  int v6; // ebp
  int v7; // ecx
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60af67*/
  GameSpeed = SessionClass::GetGameSpeed(dword_A8B238); /*0x60af6e*/
  GetWindowRect(Parent, &Rect); /*0x60af76*/
  v6 = 0; /*0x60af7c*/
  if ( !GameSpeed )
    v6 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v7 = 0; /*0x60afb0*/
  if ( !GameSpeed )
    v7 = (Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2;
  MoveWindow(hWnd, v6 + *a2, v7 + a2[1], a2[2], a2[3], 0); /*0x60afe4*/
  return InvalidateRect(hWnd, 0, 0); /*0x60aff5*/
}



// ==== 0x0060B000  RepositionGameSpeedIndicator  this=Control  sig=csp ====
BOOL __fastcall RepositionGameSpeedIndicator(HWND hWnd, int a2)
{
  HWND Parent; // esi
  char GameSpeedSessionClass; // bl
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  HWND v10; // eax
  _DWORD *v12; // [esp+10h] [ebp-54h]
  int nWidtha; // [esp+14h] [ebp-50h]
  int v15; // [esp+1Ch] [ebp-48h]
  struct tagRECT Rect; // [esp+24h] [ebp-40h] BYREF
  struct tagRECT v17; // [esp+34h] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+44h] [ebp-20h] BYREF
  struct tagRECT v19; // [esp+54h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b019*/
  GameSpeedSessionClass = SessionClass::GetGameSpeed(dword_A8B238); /*0x60b020*/
  GetWindowRect(Parent, &Rect); /*0x60b02e*/
  GetWindowRect(hWnd, &v19); /*0x60b036*/
  if ( GameSpeedSessionClass )
  {
    v8 = *((__int16 *)dword_B0F9EC + 2); /*0x60b134*/
    nWidtha = *((__int16 *)dword_B0F9EC + 1); /*0x60b145*/
    v12 = dword_B0FC48; /*0x60b149*/
    v9 = Rect.right - Rect.left - 147; /*0x60b14d*/
    v10 = GetParent(hWnd); /*0x60b14f*/
    GetWindowRect(v10, &v18); /*0x60b15b*/
    GetWindowRect(hWnd, &v17); /*0x60b163*/
    return MoveWindow( /*0x60b1a0*/
             hWnd,
             v9,
             v12[1] + v8 * (((v17.bottom - v17.top) / 2 + v17.top - v18.top - 198) / 44),
             nWidtha,
             v8,
             0);
  }
  else
  {
    v5 = *((_DWORD *)dword_B0FC24 + 3); /*0x60b0d8*/
    v15 = *((_DWORD *)dword_B0FC24 + 1); /*0x60b0db*/
    v6 = ((Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2)
       - ((*(_DWORD *)(a2 + 4) - 600) / 2 < 0 ? 0 : (*(_DWORD *)(a2 + 4) - 600) / 2)
       + v19.top
       - v15
       - Rect.top;
    if ( (int)abs32(v6 % v5) >= (int)abs32(v6 / v5 * v5 + v5 - v6) ) /*0x60b115*/
      v7 = v6 / v5 + 1; /*0x60b1a6*/
    else
      v7 = v6 / v5; /*0x60b11b*/
    return MoveWindow(
             hWnd,
             Rect.right
           - ((Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2)
           - Rect.left
           - 156,
             v15 + v7 * v5,
             *((__int16 *)dword_B0FAC4 + 1),
             *((__int16 *)dword_B0FAC4 + 2),
             0);
  }
}



// ==== 0x0060B1D0  UI_Get_60B1D0  this=Control  sig=csp ====
BOOL __fastcall sub_60B1D0(HWND hWnd, HWND a2)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v6; // edi
  LONG top; // esi
  int v8; // ebx
  HWND *v9; // eax
  int v10; // eax
  _DWORD *v12; // eax
  HWND v13; // [esp+10h] [ebp-2Ch] BYREF
  int v14; // [esp+14h] [ebp-28h]
  int v15; // [esp+18h] [ebp-24h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT v17; // [esp+2Ch] [ebp-10h] BYREF

  v13 = a2; /*0x60b1d9*/
  Parent = GetParent(hWnd); /*0x60b1e9*/
  GameSpeed = SessionClass::GetGameSpeed(dword_A8B238); /*0x60b1f0*/
  GetWindowRect(Parent, &Rect); /*0x60b1fe*/
  GetWindowRect(hWnd, &v17); /*0x60b206*/
  right = Rect.right; /*0x60b20a*/
  v15 = 0; /*0x60b214*/
  if ( !GameSpeed )
    v15 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v14 = 0; /*0x60b244*/
  if ( !GameSpeed )
    v14 = ((Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2)
        - ((*((_DWORD *)v13 + 1) - 600) / 2 < 0 ? 0 : (*((_DWORD *)v13 + 1) - 600) / 2);
  v6 = v17.right - v17.left; /*0x60b296*/
  top = v17.top; /*0x60b298*/
  v8 = v17.bottom - v17.top; /*0x60b29c*/
  v13 = hWnd; /*0x60b29e*/
  if ( dword_AC1B04 ) /*0x60b2a4*/
  {
    v9 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v13) & ((1 << dword_AC1B0C) - 1))); /*0x60b2c5*/
    if ( v9 ) /*0x60b2ca*/
    {
      while ( *v9 != v13 ) /*0x60b2d2*/
      {
        v9 = (HWND *)v9[129]; /*0x60b2d4*/
        if ( !v9 ) /*0x60b2dc*/
          goto LABEL_9; /*0x60b2dc*/
      }
      v12 = v9 + 1; /*0x60b327*/
      if ( v12 ) /*0x60b32c*/
      {
        v10 = v12[55]; /*0x60b32e*/
        if ( v10 ) /*0x60b336*/
        {
          right = Rect.right; /*0x60b338*/
          top = v17.top; /*0x60b33c*/
          return MoveWindow(hWnd, right - v10 - v6 - v15 - Rect.left, v14 + top - Rect.top, v6, v8, 0); /*0x60b340*/
        }
      }
    }
LABEL_9:
    right = Rect.right; /*0x60b2de*/
    top = v17.top; /*0x60b2e2*/
  }
  v10 = (168 - v6) / 2; /*0x60b2f0*/
  return MoveWindow(hWnd, right - v10 - v6 - v15 - Rect.left, v14 + top - Rect.top, v6, v8, 0); /*0x60b31b*/
}



// ==== 0x0060B350  ObjectClass::UI_Get_60B350  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B350(ObjectClass *this)
{
  ObjectClass *v1; // edi
  HWND Parent; // esi
  char GameSpeed; // bl
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  struct tagRECT Rect; // [esp+14h] [ebp-20h] BYREF
  struct tagRECT v11; // [esp+24h] [ebp-10h] BYREF

  v1 = this; /*0x60b357*/
  Parent = GetParent((HWND)this); /*0x60b369*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b370*/
  GetWindowRect(Parent, &Rect); /*0x60b37e*/
  GetWindowRect((HWND)v1, &v11); /*0x60b386*/
  if ( GameSpeed )
  {
    v5 = *(__int16 *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[572] + 4); /*0x60b409*/
    v4 = *(__int16 *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[572] + 2); /*0x60b40d*/
    v6 = Rect.right - Rect.left - 147; /*0x60b414*/
    v7 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1180] + 4) - v5; /*0x60b41a*/
  }
  else
  {
    v4 = *(__int16 *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[788] + 2); /*0x60b3b5*/
    v5 = *(__int16 *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[788] + 4); /*0x60b3b9*/
    v6 = Rect.right
       - ((Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2)
       - Rect.left
       - 156;
    v1 = this; /*0x60b3e1*/
    v7 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 4) /*0x60b3e5*/
       + *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 12)
       * ((*(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] + 4)
         - *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 4))
        / *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 12)
        - 1);
  }
  return MoveWindow((HWND)v1, v6, v7, v4, v5, 0); /*0x60b3f4*/
}



// ==== 0x0060B420  ObjectClass::UI_Get_60B420  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B420(ObjectClass *this)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v5; // esi
  int v6; // ebp
  ObjectClass **v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // eax
  ObjectClass *v13; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-24h]
  struct tagRECT Rect; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT v16; // [esp+28h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b435*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b43c*/
  GetClientRect(Parent, &Rect); /*0x60b444*/
  GetWindowRect((HWND)this, &v16); /*0x60b450*/
  right = Rect.right; /*0x60b45a*/
  v14 = 0; /*0x60b45e*/
  if ( !GameSpeed )
    v14 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = v16.right - v16.left; /*0x60b499*/
  v6 = v16.bottom - v16.top; /*0x60b49f*/
  v13 = this; /*0x60b4a1*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60b4a7*/
    goto LABEL_8; /*0x60b4a7*/
  v7 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60b4c8*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v13)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v7 ) /*0x60b4cd*/
    goto LABEL_7; /*0x60b4cd*/
  while ( *v7 != v13 ) /*0x60b4d5*/
  {
    v7 = (ObjectClass **)v7[129]; /*0x60b4d7*/
    if ( !v7 ) /*0x60b4df*/
      goto LABEL_7; /*0x60b4df*/
  }
  v11 = v7 + 1; /*0x60b514*/
  if ( !v11 || (v8 = v11[55]) == 0 ) /*0x60b523*/
  {
LABEL_7:
    right = Rect.right; /*0x60b4e1*/
LABEL_8:
    v8 = (168 - v5) / 2; /*0x60b4e5*/
    goto LABEL_9; /*0x60b4ef*/
  }
  right = Rect.right; /*0x60b525*/
LABEL_9:
  v9 = right - v8 - v5 - v14 - Rect.left; /*0x60b4f1*/
  if ( GameSpeed ) /*0x60b503*/
    v10 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1184] + 4); /*0x60b50b*/
  else
    v10 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] + 4); /*0x60b530*/
  return MoveWindow((HWND)this, v9, v10 - v6, v5, v6, 0); /*0x60b542*/
}



// ==== 0x0060B550  ObjectClass::UI_Get_60B550  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B550(ObjectClass *this)
{
  HWND Parent; // edi
  char GameSpeed; // bl
  int v4; // edi
  int v5; // edx
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v8; // [esp+20h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b565*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b56c*/
  GetClientRect(Parent, &Rect); /*0x60b574*/
  GetWindowRect((HWND)this, &v8); /*0x60b580*/
  v4 = 0; /*0x60b58a*/
  if ( !GameSpeed )
    v4 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = 0; /*0x60b5ba*/
  if ( !GameSpeed )
    v5 = (Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2;
  return MoveWindow( /*0x60b5fe*/
           (HWND)this,
           v4 + Rect.left + 10,
           Rect.bottom - (v8.bottom - v8.top) - v5 - 1,
           v8.right - v8.left,
           v8.bottom - v8.top,
           0);
}



// ==== 0x0060B610  ObjectClass::UI_Get_60B610  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B610(ObjectClass *this)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v5; // esi
  int v6; // ebp
  ObjectClass **v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  _DWORD *v12; // eax
  ObjectClass *v13; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-24h]
  struct tagRECT Rect; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT v16; // [esp+28h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b625*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b62c*/
  GetClientRect(Parent, &Rect); /*0x60b634*/
  GetWindowRect((HWND)this, &v16); /*0x60b640*/
  right = Rect.right; /*0x60b64a*/
  v14 = 0; /*0x60b64e*/
  if ( !GameSpeed )
    v14 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = v16.right - v16.left; /*0x60b689*/
  v6 = v16.bottom - v16.top; /*0x60b68f*/
  v13 = this; /*0x60b691*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60b697*/
    goto LABEL_8; /*0x60b697*/
  v7 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60b6b8*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v13)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v7 ) /*0x60b6bd*/
    goto LABEL_7; /*0x60b6bd*/
  while ( *v7 != v13 ) /*0x60b6c5*/
  {
    v7 = (ObjectClass **)v7[129]; /*0x60b6c7*/
    if ( !v7 ) /*0x60b6cf*/
      goto LABEL_7; /*0x60b6cf*/
  }
  v12 = v7 + 1; /*0x60b724*/
  if ( !v12 || (v8 = v12[55]) == 0 ) /*0x60b733*/
  {
LABEL_7:
    right = Rect.right; /*0x60b6d1*/
LABEL_8:
    v8 = (168 - v5) / 2; /*0x60b6d5*/
    goto LABEL_9; /*0x60b6df*/
  }
  right = Rect.right; /*0x60b735*/
LABEL_9:
  v9 = right - v8 - v5 - v14 - Rect.left; /*0x60b6e1*/
  v10 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1184]; /*0x60b6f1*/
  if ( !GameSpeed ) /*0x60b6f9*/
    v10 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144]; /*0x60b6fb*/
  return MoveWindow((HWND)this, v9, *(_DWORD *)(v10 + 4) + *(_DWORD *)(v10 + 12) - v6, v5, v6, 0); /*0x60b718*/
}



// ==== 0x0060B740  ObjectClass::method_60B740  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_60B740(ObjectClass *this)
{
  HWND Parent; // eax
  struct tagRECT v4; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b748*/
  GetWindowRect(Parent, &Rect); /*0x60b75a*/
  GetWindowRect((HWND)this, &v4); /*0x60b762*/
  return MoveWindow((HWND)this, v4.left - Rect.left, v4.top - Rect.top, v4.right - v4.left, v4.bottom - v4.top, 0); /*0x60b791*/
}



// ==== 0x0060B7A0  ObjectClass::UI_Get_60B7A0  this=ObjectClass  sig=csp ====
char __thiscall UI_Get_60B7A0(ObjectClass *this)
{
  HWND Parent; // edi
  char result; // al
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  struct tagRECT v11; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b7b3*/
  result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b7b5*/
  if ( result )
  {
    GetWindowRect((HWND)this, &Rect); /*0x60b7cf*/
    GetWindowRect(Parent, &v11); /*0x60b7d7*/
    v4 = v11.right - v11.left; /*0x60b7e7*/
    v5 = 0; /*0x60b7e9*/
    if ( v11.right - v11.left <= 800 )
    {
      if ( v11.right - v11.left < 800 ) /*0x60b802*/
        v5 = (v4 - 800) / 2; /*0x60b80b*/
    }
    else
    {
      v5 = (v4 - 800) / 2 < 0 ? 0 : (v4 - 800) / 2;
    }
    v6 = v11.bottom - v11.top; /*0x60b81c*/
    v7 = 0; /*0x60b81e*/
    if ( v11.bottom - v11.top <= 600 ) /*0x60b822*/
    {
      if ( v11.bottom - v11.top < 600 ) /*0x60b833*/
        v7 = (v6 - 600) / 2; /*0x60b83c*/
    }
    else
    {
      v8 = (v6 - 600) / 2; /*0x60b829*/
      LOBYTE(v7) = v8 < 0; /*0x60b82b*/
      v7 = v8 & (v7 - 1); /*0x60b82f*/
    }
    v9 = Rect.left + v5; /*0x60b84a*/
    v10 = Rect.top + v7; /*0x60b84d*/
    if ( v9 < 0 ) /*0x60b85b*/
      v9 = 0; /*0x60b85d*/
    if ( v10 < 0 ) /*0x60b861*/
      v10 = 0; /*0x60b863*/
    return MoveWindow((HWND)this, v9, v10, Rect.right - Rect.left, Rect.bottom - Rect.top, 0); /*0x60b86c*/
  }
  return result; /*0x60b873*/
}



// ==== 0x0060B880  sub_60B880  this=-  sig=ida-proto ====
bool __fastcall sub_60B880(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  _DWORD *v6; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = a1; /*0x60b88c*/
  if ( !dword_AC1B04 ) /*0x60b890*/
    goto LABEL_5; /*0x60b890*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v7) & ((1 << dword_AC1B0C) - 1))); /*0x60b8b1*/
  if ( !v3 ) /*0x60b8b6*/
    goto LABEL_5; /*0x60b8b6*/
  while ( *v3 != v7 ) /*0x60b8be*/
  {
    v3 = (_DWORD *)v3[129]; /*0x60b8c0*/
    if ( !v3 ) /*0x60b8c8*/
      goto LABEL_5; /*0x60b8c8*/
  }
  v6 = v3 + 1; /*0x60b93a*/
  if ( v6 ) /*0x60b93f*/
    v4 = v6[27]; /*0x60b941*/
  else
LABEL_5:
    v4 = 0; /*0x60b8ca*/
  GetDlgCtrlID(a2); /*0x60b8cd*/
  return v4 == 183 /*0x60b930*/
      || v4 == 692
      || v4 == 3003
      || v4 == 245
      || v4 == 693
      || v4 == 184
      || v4 == 163
      || v4 == 182
      || v4 == 268
      || v4 == 115
      || v4 == 255
      || v4 == 234;
}



// ==== 0x0060B950  Control::RepositionControlsDialog  this=Control  sig=csp ====
int __thiscall Control::RepositionControlsDialog(Control *this)
{
  HWND Parent; // esi
  int v3; // ebp
  _DWORD *v4; // eax
  Dialog *v5; // esi
  int DlgCtrlID; // edi
  int result; // eax
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // eax
  int X; // [esp+10h] [ebp-3Ch]
  int nWidth; // [esp+14h] [ebp-38h]
  int nHeight; // [esp+18h] [ebp-34h]
  HWND v14; // [esp+1Ch] [ebp-30h] BYREF
  HWND hWnd; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  struct tagRECT v18; // [esp+2Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+3Ch] [ebp-10h] BYREF

  hWnd = (HWND)this; /*0x60b95a*/
  Parent = GetParent((HWND)this); /*0x60b96a*/
  GetWindowRect(Parent, &Rect); /*0x60b972*/
  GetWindowRect((HWND)this, &v18); /*0x60b97a*/
  X = v18.left - Rect.left; /*0x60b996*/
  nHeight = v18.bottom - v18.top; /*0x60b9a2*/
  v3 = v18.top - Rect.top; /*0x60b9ab*/
  nWidth = v18.right - v18.left; /*0x60b9ad*/
  v14 = Parent; /*0x60b9b3*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60b9b7*/
    goto LABEL_5; /*0x60b9b7*/
  v4 = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60b9d8*/
                  + 4
                  * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&v14)
                   & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v4 ) /*0x60b9dd*/
    goto LABEL_5; /*0x60b9dd*/
  while ( (HWND)*v4 != v14 ) /*0x60b9e5*/
  {
    v4 = (_DWORD *)v4[129]; /*0x60b9eb*/
    if ( !v4 ) /*0x60b9f3*/
      goto LABEL_5; /*0x60b9f3*/
  }
  v9 = v4 + 1; /*0x60bd04*/
  if ( v9 ) /*0x60bd09*/
    v5 = (Dialog *)v9[27]; /*0x60bd0f*/
  else
LABEL_5:
    v5 = 0; /*0x60b9f5*/
  DlgCtrlID = GetDlgCtrlID(hWnd); /*0x60ba02*/
  result = nHeight; /*0x60ba0e*/
  v8 = X; /*0x60ba12*/
  v14 = (HWND)v3; /*0x60ba16*/
  v16 = nWidth; /*0x60ba1a*/
  v17 = nHeight; /*0x60ba1e*/
  if ( v5 == (Dialog *)268 /*0x60bb57*/
    || v5 == (Dialog *)148
    || v5 == (Dialog *)163
    || v5 == (Dialog *)115
    || v5 == (Dialog *)216
    || v5 == (Dialog *)3003
    || v5 == (Dialog *)245
    || v5 == (Dialog *)261
    || v5 == (Dialog *)226
    || v5 == (Dialog *)213
    || v5 == (Dialog *)693
    || v5 == (Dialog *)183
    || v5 == (Dialog *)692
    || v5 == (Dialog *)3015
    || v5 == (Dialog *)257
    || v5 == (Dialog *)297
    || v5 == (Dialog *)3014
    || v5 == (Dialog *)215
    || v5 == (Dialog *)264
    || v5 == (Dialog *)188
    || v5 == (Dialog *)189
    || v5 == (Dialog *)187
    || v5 == (Dialog *)181
    || v5 == (Dialog *)3002
    || v5 == (Dialog *)255
    || v5 == (Dialog *)107
    || v5 == (Dialog *)256
    || v5 == (Dialog *)258
    || v5 == (Dialog *)184
    || v5 == (Dialog *)214
    || v5 == (Dialog *)259
    || (result = Dialog::IsSpecialTemplate(v5), (_BYTE)result) )
  {
    if ( DlgCtrlID == 1684 ) /*0x60bb63*/
    {
      if ( v5 == (Dialog *)268 /*0x60bc38*/
        || v5 == (Dialog *)148
        || v5 == (Dialog *)163
        || v5 == (Dialog *)115
        || v5 == (Dialog *)216
        || v5 == (Dialog *)3003
        || v5 == (Dialog *)245
        || v5 == (Dialog *)261
        || v5 == (Dialog *)226
        || v5 == (Dialog *)213
        || v5 == (Dialog *)693
        || v5 == (Dialog *)183
        || v5 == (Dialog *)692
        || v5 == (Dialog *)3015
        || v5 == (Dialog *)257
        || v5 == (Dialog *)297
        || v5 == (Dialog *)3014
        || v5 == (Dialog *)215
        || v5 == (Dialog *)264 )
      {
        goto LABEL_74; /*0x60bc38*/
      }
      if ( v5 == (Dialog *)188 ) /*0x60bc40*/
      {
LABEL_75:
        result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60bce4*/
        if ( (_BYTE)result ) /*0x60bcf0*/
          return result; /*0x60bcf0*/
        ++v3; /*0x60bcf6*/
        goto LABEL_170; /*0x60bcf7*/
      }
      if ( v5 == (Dialog *)189 /*0x60bc99*/
        || v5 == (Dialog *)187
        || v5 == (Dialog *)181
        || v5 == (Dialog *)3002
        || v5 == (Dialog *)255
        || v5 == (Dialog *)107
        || v5 == (Dialog *)256
        || v5 == (Dialog *)258
        || v5 == (Dialog *)184
        || v5 == (Dialog *)214
        || v5 == (Dialog *)259 )
      {
LABEL_74:
        if ( v5 == (Dialog *)189 /*0x60bcda*/
          || v5 == (Dialog *)258
          || v5 == (Dialog *)3014
          || v5 == (Dialog *)261
          || v5 == (Dialog *)107 )
        {
          goto LABEL_75; /*0x60bcda*/
        }
        result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60bd1c*/
        if ( (_BYTE)result ) /*0x60bd23*/
          return result; /*0x60bd23*/
        v3 += 7; /*0x60bd2d*/
        ++nHeight; /*0x60bd31*/
      }
      else
      {
        if ( v5 != (Dialog *)293 /*0x60bdfc*/
          && v5 != (Dialog *)231
          && v5 != (Dialog *)278
          && (v5 == (Dialog *)194
           || v5 != (Dialog *)201
           && v5 != (Dialog *)285
           && v5 != (Dialog *)284
           && v5 != (Dialog *)276
           && v5 != (Dialog *)700
           && v5 != (Dialog *)275
           && v5 != (Dialog *)265
           && v5 != (Dialog *)271
           && v5 != (Dialog *)279
           && v5 != (Dialog *)230
           && v5 != (Dialog *)243
           && v5 != (Dialog *)244
           && v5 != (Dialog *)270
           && v5 != (Dialog *)274)
          || v5 == (Dialog *)201
          || v5 == (Dialog *)275 )
        {
          return result; /*0x60bdfc*/
        }
        v3 += 2; /*0x60be02*/
      }
LABEL_170:
      if ( (HWND)v3 == v14 ) /*0x60c078*/
        goto LABEL_171; /*0x60c078*/
      return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c0a9*/
    }
  }
  if ( v5 == (Dialog *)258 ) /*0x60be10*/
  {
    if ( DlgCtrlID == 1292 ) /*0x60be18*/
    {
      --v3; /*0x60be1a*/
      goto LABEL_170; /*0x60be1b*/
    }
    if ( DlgCtrlID != 1358 && DlgCtrlID != 1683 && DlgCtrlID != 1686 && DlgCtrlID != 1690 ) /*0x60be4a*/
    {
      if ( DlgCtrlID != 1696 ) /*0x60be56*/
        return result; /*0x60be56*/
      ++X; /*0x60be66*/
      ++nWidth; /*0x60be6a*/
LABEL_169:
      if ( X != v8 ) /*0x60c072*/
        return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c072*/
      goto LABEL_170; /*0x60c072*/
    }
    goto LABEL_167; /*0x60be4a*/
  }
  if ( v5 == (Dialog *)187 ) /*0x60be79*/
  {
    if ( DlgCtrlID != 1344 ) /*0x60be81*/
      return result; /*0x60be81*/
    --nWidth; /*0x60be87*/
  }
  else if ( v5 == (Dialog *)188 || v5 == (Dialog *)189 ) /*0x60bea2*/
  {
    if ( DlgCtrlID != 1343 ) /*0x60c027*/
    {
      if ( DlgCtrlID == 1359 ) /*0x60c035*/
      {
        --v3; /*0x60c037*/
        goto LABEL_170; /*0x60c038*/
      }
      if ( DlgCtrlID != 1358 && DlgCtrlID != 1000 && DlgCtrlID != 1357 && DlgCtrlID != 1690 ) /*0x60c058*/
      {
        if ( DlgCtrlID != 1026 ) /*0x60c060*/
          return result; /*0x60c060*/
        --v3; /*0x60c062*/
        goto LABEL_170; /*0x60c063*/
      }
LABEL_167:
      v10 = X - 1; /*0x60c065*/
      goto LABEL_168; /*0x60c069*/
    }
    ++nWidth; /*0x60c029*/
  }
  else
  {
    if ( v5 == (Dialog *)259 ) /*0x60beae*/
    {
      if ( DlgCtrlID != 1779 /*0x60beee*/
        && DlgCtrlID != 1780
        && DlgCtrlID != 1695
        && DlgCtrlID != 1782
        && DlgCtrlID != 1775
        && DlgCtrlID != 1777
        && DlgCtrlID != 1776
        && DlgCtrlID != 1778 )
      {
        return result; /*0x60beee*/
      }
      result = 800; /*0x60befa*/
      if ( (int)g_DisplayWidth < 800 ) /*0x60bf01*/
        return result; /*0x60bf01*/
      v3 -= 50; /*0x60bf20*/
      goto LABEL_170; /*0x60bf22*/
    }
    if ( v5 == (Dialog *)3015 ) /*0x60bf2d*/
      return result; /*0x60bf2d*/
    if ( v5 == (Dialog *)264 ) /*0x60bf39*/
    {
      if ( DlgCtrlID == 1939 || DlgCtrlID == 1940 || DlgCtrlID == 1938 || DlgCtrlID == 1941 ) /*0x60bf5d*/
        ++v3; /*0x60bf5f*/
      if ( DlgCtrlID == 1943 || DlgCtrlID == 1942 || DlgCtrlID == 1944 ) /*0x60bf76*/
        v3 += 2; /*0x60bf78*/
      if ( DlgCtrlID != 1936 /*0x60bfc9*/
        && DlgCtrlID != 1937
        && DlgCtrlID != 1935
        && DlgCtrlID != 1938
        && DlgCtrlID != 1939
        && DlgCtrlID != 1940
        && DlgCtrlID != 1941
        && DlgCtrlID != 1942
        && DlgCtrlID != 1943
        && DlgCtrlID != 1944 )
      {
        goto LABEL_170; /*0x60bfc9*/
      }
      v10 = X + 1; /*0x60bfd3*/
      goto LABEL_168; /*0x60bfd4*/
    }
    if ( v5 != (Dialog *)275 ) /*0x60bfdf*/
    {
      if ( v5 != (Dialog *)270 || DlgCtrlID != 1951 ) /*0x60c014*/
        return result; /*0x60c014*/
      v10 = X + 1; /*0x60c01e*/
      goto LABEL_168; /*0x60c01f*/
    }
    if ( DlgCtrlID == 1896 ) /*0x60bfe7*/
    {
      v10 = X + 1; /*0x60bfed*/
LABEL_168:
      X = v10; /*0x60c06a*/
      goto LABEL_169; /*0x60c06a*/
    }
    if ( DlgCtrlID != 1343 ) /*0x60bff6*/
      return result; /*0x60bff6*/
    --nWidth; /*0x60bffc*/
  }
LABEL_171:
  if ( nWidth != v16 ) /*0x60c084*/
    return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c084*/
  result = nHeight; /*0x60c08a*/
  if ( nHeight != v17 ) /*0x60c090*/
    return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c090*/
  return result; /*0x60c0af*/
}



// ==== 0x0060C0C0  RepositionDialogControls  this=-  sig=csp ====
BOOL __stdcall RepositionDialogControls(HWND hWnd, HWND a2)
{
  HWND v2; // esi
  HWND Parent; // ebx
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  void *v8; // edi
  int DlgCtrlID; // ebp
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  HWND v16; // eax
  _DWORD v17[4]; // [esp+Ch] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+2Ch] [ebp-10h] BYREF

  v2 = hWnd; /*0x60c0c5*/
  Parent = GetParent(hWnd); /*0x60c0d0*/
  if ( (HWND)dword_AC48A8 != Parent ) /*0x60c0dd*/
    return 1; /*0x60c48f*/
  memset(v17, 0, sizeof(v17)); /*0x60c0f0*/
  if ( ControlDialogHandler((int)Parent, v2, v17) ) /*0x60c100*/
  {
    UI_Get(v2); /*0x60c10f*/
    Control::RepositionControlsDialog(v2); /*0x60c116*/
    return 1; /*0x60c11e*/
  }
  else
  {
    if ( (GetWindowLongA(v2, -16) & 0xB) != 0xB ) /*0x60c13a*/
      goto LABEL_9; /*0x60c13a*/
    hWnd = v2; /*0x60c141*/
    if ( !dword_AC1B04 ) /*0x60c147*/
      goto LABEL_9; /*0x60c147*/
    v5 = *((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd)); /*0x60c15e*/
    if ( !v5 ) /*0x60c163*/
      goto LABEL_9; /*0x60c163*/
    while ( *(HWND *)v5 != hWnd ) /*0x60c16b*/
    {
      v5 = *(_DWORD *)(v5 + 516); /*0x60c16d*/
      if ( !v5 ) /*0x60c175*/
        goto LABEL_9; /*0x60c175*/
    }
    v6 = v5 + 4; /*0x60c1a9*/
    if ( v6 && !*(_DWORD *)(v6 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x60c1b9*/
    {
      RepositionGameSpeedIndicator(v2); /*0x60c1c8*/
      Control::RepositionControlsDialog(v2); /*0x60c1cf*/
      return 1; /*0x60c1d7*/
    }
    else
    {
LABEL_9:
      if ( IsDialogControlVisible((int)Parent, v2) ) /*0x60c17b*/
      {
        UI_Get_60B1D0(v2); /*0x60c18a*/
        Control::RepositionControlsDialog(v2); /*0x60c191*/
        return 1; /*0x60c199*/
      }
      else if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB /*0x60c21c*/
             && (hWnd = v2, a2 = 0, HashTable::Get(&dword_AC1B00, &hWnd, &a2), a2)
             && !*((_DWORD *)a2 + 26)
             && GetDialogDefaultButton((int)Parent, v2) )
      {
        UI_Get_60B350(v2); /*0x60c227*/
        Control::RepositionControlsDialog(v2); /*0x60c22e*/
        return 1; /*0x60c236*/
      }
      else if ( GetDialogDefaultButton((int)Parent, v2) ) /*0x60c246*/
      {
        UI_Get_60B420(v2); /*0x60c251*/
        Control::RepositionControlsDialog(v2); /*0x60c258*/
        return 1; /*0x60c260*/
      }
      else
      {
        a2 = Parent; /*0x60c271*/
        if ( !dword_AC1B04 ) /*0x60c277*/
          goto LABEL_26; /*0x60c277*/
        v7 = (_DWORD *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&a2)); /*0x60c28e*/
        if ( !v7 ) /*0x60c293*/
          goto LABEL_26; /*0x60c293*/
        while ( (HWND)*v7 != a2 ) /*0x60c29b*/
        {
          v7 = (_DWORD *)v7[129]; /*0x60c29d*/
          if ( !v7 ) /*0x60c2a5*/
            goto LABEL_26; /*0x60c2a5*/
        }
        v10 = v7 + 1; /*0x60c2e8*/
        if ( v10 ) /*0x60c2ed*/
          v8 = (void *)v10[27]; /*0x60c2ef*/
        else
LABEL_26:
          v8 = 0; /*0x60c2a7*/
        DlgCtrlID = GetDlgCtrlID(v2); /*0x60c2b4*/
        if ( Event::IsValidActionType(v8) && DlgCtrlID == 1685 ) /*0x60c2c5*/
        {
          UI_Get_60B550(v2); /*0x60c2c9*/
          Control::RepositionControlsDialog(v2); /*0x60c2d0*/
          return 1; /*0x60c2d8*/
        }
        else
        {
          v11 = 0; /*0x60c300*/
          hWnd = Parent; /*0x60c309*/
          a2 = 0; /*0x60c30d*/
          HashTable::Get(&dword_AC1B00, &hWnd, &a2); /*0x60c311*/
          if ( a2 ) /*0x60c31c*/
            v11 = *((_DWORD *)a2 + 27); /*0x60c31e*/
          v12 = GetDlgCtrlID(v2); /*0x60c322*/
          if ( v11 == 226 && v12 == 1821 ) /*0x60c336*/
          {
            UI_Get_60B610(v2); /*0x60c33a*/
            Control::RepositionControlsDialog(v2); /*0x60c341*/
            return 1; /*0x60c349*/
          }
          else
          {
            a2 = Parent; /*0x60c35a*/
            if ( !dword_AC1B04 ) /*0x60c360*/
              goto LABEL_41; /*0x60c360*/
            v13 = (_DWORD *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&a2)); /*0x60c377*/
            if ( !v13 ) /*0x60c37c*/
              goto LABEL_41; /*0x60c37c*/
            while ( (HWND)*v13 != a2 ) /*0x60c384*/
            {
              v13 = (_DWORD *)v13[129]; /*0x60c38a*/
              if ( !v13 ) /*0x60c392*/
                goto LABEL_41; /*0x60c392*/
            }
            v15 = v13 + 1; /*0x60c41b*/
            if ( v15 ) /*0x60c420*/
              v14 = v15[27]; /*0x60c426*/
            else
LABEL_41:
              v14 = 0; /*0x60c394*/
            GetDlgCtrlID(v2); /*0x60c397*/
            if ( v14 == 183 /*0x60c3f4*/
              || v14 == 692
              || v14 == 3003
              || v14 == 245
              || v14 == 693
              || v14 == 184
              || v14 == 163
              || v14 == 182
              || v14 == 268
              || v14 == 115
              || v14 == 255
              || v14 == 234 )
            {
              UI_Get_60B7A0(v2); /*0x60c3f8*/
              Control::RepositionControlsDialog(v2); /*0x60c3ff*/
              return 1; /*0x60c407*/
            }
            else
            {
              v16 = GetParent(v2); /*0x60c42f*/
              GetWindowRect(v16, &Rect); /*0x60c441*/
              GetWindowRect(v2, &v18); /*0x60c449*/
              MoveWindow(v2, v18.left - Rect.left, v18.top - Rect.top, v18.right - v18.left, v18.bottom - v18.top, 0); /*0x60c472*/
              Control::RepositionControlsDialog(v2); /*0x60c47a*/
              return 1; /*0x60c482*/
            }
          }
        }
      }
    }
  }
}



// ==== 0x0060C4A0  ResizeDialogAndEnum  this=-  sig=csp ====
int __fastcall ResizeDialogAndEnum(HWND hWndParent, LPARAM lParam)
{
  MoveWindow(hWndParent, 0, 0, g_DisplayWidth, *(&g_DisplayWidth + 1), 0); /*0x60c4ba*/
  dword_AC48A8 = (int)hWndParent; /*0x60c4c0*/
  return EnumChildWindows(hWndParent, (WNDENUMPROC)RepositionDialogControls, lParam); /*0x60c4d3*/
}



// ==== 0x0060C540  Control::CheckControlTypeDialog  this=Control  sig=csp ====
int __thiscall Control::CheckControlTypeDialog(Control *this)
{
  int result; // eax
  int v2; // ecx
  Control *v3; // [esp+4h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x60c541*/
  v3 = this; /*0x60c549*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60c54d*/
    goto LABEL_7; /*0x60c54d*/
  result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60c570*/
                     + 4
                     * ((*(int (__thiscall **)(Control **))&g_DialogPool.__pad_208[80])(&v3)
                      & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !result ) /*0x60c575*/
    goto LABEL_7; /*0x60c575*/
  while ( *(Control **)result != v3 ) /*0x60c57d*/
  {
    result = *(_DWORD *)(result + 516); /*0x60c57f*/
    if ( !result ) /*0x60c587*/
    {
      LOBYTE(result) = 0; /*0x60c589*/
      return result; /*0x60c58d*/
    }
  }
  v2 = result + 4; /*0x60c592*/
  if ( result != -4 ) /*0x60c597*/
  {
    result = *(_DWORD *)(result + 112); /*0x60c59e*/
    if ( result == 268 /*0x60c7b0*/
      || result == 148
      || result == 182
      || result == 163
      || result == 115
      || result == 216
      || result == 3003
      || result == 245
      || result == 261
      || result == 213
      || result == 226
      || result == 693
      || result == 183
      || result == 692
      || result == 257
      || result == 297
      || result == 3014
      || result == 3015
      || result == 267
      || result == 215
      || result == 264
      || result == 188
      || result == 189
      || result == 187
      || result == 181
      || result == 3002
      || result == 255
      || result == 234
      || result == 107
      || result == 256
      || result == 258
      || result == 184
      || result == 214
      || result == 259
      || result == 212
      || result == 293
      || result == 290
      || result == 274
      || result == 231
      || result == 278
      || result == 194
      || result == 201
      || result == 275
      || result == 254
      || result == 271
      || result == 285
      || result == 284
      || result == 279
      || result == 276
      || result == 230
      || result == 243
      || result == 244
      || result == 700
      || result == 270
      || result == 251 )
    {
      LOBYTE(result) = 1; /*0x60c7b7*/
      *(_DWORD *)(v2 + 176) = 1; /*0x60c7b9*/
      *(_BYTE *)(v2 + 189) = 1; /*0x60c7bf*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x60c7b2*/
    }
  }
  else
  {
LABEL_7:
    LOBYTE(result) = 0; /*0x60c599*/
  }
  return result; /*0x60c58b*/
}



// ==== 0x0060C7D0  ObjectClass::UI_Helper_60C7D0  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60C7D0(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60c7d6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60c7dc*/
    return 0; /*0x60c7dc*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60c7fd*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60c802*/
    return 0; /*0x60c802*/
  while ( *v1 != v5 ) /*0x60c80a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60c80c*/
    if ( !v1 ) /*0x60c814*/
      return 0; /*0x60c819*/
  }
  v3 = v1 + 1; /*0x60c81e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60c823*/
    return 0; /*0x60c825*/
  v4 = v1[28]; /*0x60c829*/
  if ( v4 != (ObjectClass *)269 /*0x60c8b3*/
    && v4 != (ObjectClass *)217
    && v4 != (ObjectClass *)240
    && v4 != (ObjectClass *)206
    && v4 != (ObjectClass *)288
    && v4 != (ObjectClass *)289
    && v4 != (ObjectClass *)277
    && v4 != (ObjectClass *)211
    && v4 != (ObjectClass *)207
    && v4 != (ObjectClass *)287
    && v4 != (ObjectClass *)195
    && v4 != (ObjectClass *)283
    && v4 != (ObjectClass *)225
    && v4 != (ObjectClass *)286
    && v4 != (ObjectClass *)196
    && v4 != (ObjectClass *)304
    && v4 != (ObjectClass *)208
    && v4 != (ObjectClass *)252
    && v4 != (ObjectClass *)294 )
  {
    return 0; /*0x60c8b5*/
  }
  v3[44] = 2; /*0x60c8bb*/
  return 1; /*0x60c819*/
}



// ==== 0x0060C930  ObjectClass::UI_Helper_60C930  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60C930(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60c936*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60c93c*/
    return 0; /*0x60c93c*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60c95d*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60c962*/
    return 0; /*0x60c962*/
  while ( *v1 != v5 ) /*0x60c96a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60c96c*/
    if ( !v1 ) /*0x60c974*/
      return 0; /*0x60c979*/
  }
  v3 = v1 + 1; /*0x60c97e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60c983*/
    return 0; /*0x60c985*/
  v4 = v1[28]; /*0x60c989*/
  if ( v4 == (ObjectClass *)188 /*0x60c9b4*/
    || v4 == (ObjectClass *)189
    || v4 == (ObjectClass *)258
    || v4 == (ObjectClass *)194
    || v4 == (ObjectClass *)201
    || v4 == (ObjectClass *)3014 )
  {
    *((_BYTE *)v3 + 214) = 1; /*0x60c9c5*/
    return 1; /*0x60c9c0*/
  }
  else
  {
    *((_BYTE *)v3 + 214) = 0; /*0x60c9b8*/
    return 0; /*0x60c9b6*/
  }
}



// ==== 0x0060CAF0  ObjectClass::UI_Helper_60CAF0  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60CAF0(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60caf6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cafc*/
    return 0; /*0x60cafc*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cb1d*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60cb22*/
    return 0; /*0x60cb22*/
  while ( *v1 != v5 ) /*0x60cb2a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60cb2c*/
    if ( !v1 ) /*0x60cb34*/
      return 0; /*0x60cb39*/
  }
  v3 = v1 + 1; /*0x60cb3e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60cb43*/
    return 0; /*0x60cb45*/
  v4 = v1[28]; /*0x60cb49*/
  if ( v4 == (ObjectClass *)188 /*0x60cb87*/
    || v4 == (ObjectClass *)189
    || v4 == (ObjectClass *)258
    || v4 == (ObjectClass *)194
    || v4 == (ObjectClass *)201
    || v4 == (ObjectClass *)3014
    || v4 == (ObjectClass *)261
    || v4 == (ObjectClass *)107
    || v4 == (ObjectClass *)275 )
  {
    *((_BYTE *)v3 + 213) = 1; /*0x60cb98*/
    return 1; /*0x60cb93*/
  }
  else
  {
    *((_BYTE *)v3 + 213) = 0; /*0x60cb8b*/
    return 0; /*0x60cb89*/
  }
}



// ==== 0x0060CBA0  CampaignScore::LookupDialogHash  this=CampaignScore  sig=csp ====
int __thiscall CampaignScore::LookupDialogHash(CampaignScore *this)
{
  int result; // eax
  CampaignScore *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x60cba1*/
  v2 = this; /*0x60cba6*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cbac*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cbcd*/
                       + 4
                       * ((*(int (__thiscall **)(CampaignScore **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60cbd2*/
    {
      while ( *(CampaignScore **)result != v2 ) /*0x60cbda*/
      {
        result = *(_DWORD *)(result + 516); /*0x60cbdc*/
        if ( !result ) /*0x60cbe4*/
          return result; /*0x60cbe4*/
      }
      result += 4; /*0x60cbec*/
      if ( result ) /*0x60cbf1*/
        *(_BYTE *)(result + 213) = 1; /*0x60cbf3*/
    }
  }
  return result; /*0x60cbe7*/
}



// ==== 0x0060CC00  CampaignScore::FindDialogTemplate  this=CampaignScore  sig=csp ====
int __thiscall CampaignScore::FindDialogTemplate(CampaignScore *this)
{
  int result; // eax
  CampaignScore *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x60cc01*/
  v2 = this; /*0x60cc06*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cc0c*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cc2d*/
                       + 4
                       * ((*(int (__thiscall **)(CampaignScore **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60cc32*/
    {
      while ( *(CampaignScore **)result != v2 ) /*0x60cc3a*/
      {
        result = *(_DWORD *)(result + 516); /*0x60cc3c*/
        if ( !result ) /*0x60cc44*/
          return result; /*0x60cc44*/
      }
      result += 4; /*0x60cc4c*/
      if ( result ) /*0x60cc51*/
        *(_BYTE *)(result + 213) = 0; /*0x60cc53*/
    }
  }
  return result; /*0x60cc47*/
}



// ==== 0x0060CCC0  ObjectClass::UI_Helper_60CCC0  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60CCC0(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60ccc6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cccc*/
    return 0; /*0x60cccc*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cced*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60ccf2*/
    return 0; /*0x60ccf2*/
  while ( *v1 != v5 ) /*0x60ccfa*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60ccfc*/
    if ( !v1 ) /*0x60cd04*/
      return 0; /*0x60cd09*/
  }
  v3 = v1 + 1; /*0x60cd0e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60cd13*/
    return 0; /*0x60cd15*/
  v4 = v1[28]; /*0x60cd19*/
  if ( v4 == (ObjectClass *)259 || v4 == (ObjectClass *)3015 ) /*0x60cd28*/
  {
    *((_BYTE *)v3 + 215) = 1; /*0x60cd39*/
    return 1; /*0x60cd34*/
  }
  else
  {
    *((_BYTE *)v3 + 215) = 0; /*0x60cd2c*/
    return 0; /*0x60cd2a*/
  }
}



// ==== 0x0060CDB0  ObjectClass::UI_Helper_60CDB0  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60CDB0(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60cdb6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cdbc*/
    return 0; /*0x60cdbc*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cddd*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60cde2*/
    return 0; /*0x60cde2*/
  while ( *v1 != v5 ) /*0x60cdea*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60cdec*/
    if ( !v1 ) /*0x60cdf4*/
      return 0; /*0x60cdf9*/
  }
  v3 = v1 + 1; /*0x60cdfe*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60ce03*/
    return 0; /*0x60ce05*/
  v4 = v1[28]; /*0x60ce09*/
  if ( v4 == (ObjectClass *)264 || v4 == (ObjectClass *)3014 ) /*0x60ce18*/
  {
    *((_BYTE *)v3 + 216) = 1; /*0x60ce29*/
    return 1; /*0x60ce24*/
  }
  else
  {
    *((_BYTE *)v3 + 216) = 0; /*0x60ce1c*/
    return 0; /*0x60ce1a*/
  }
}



// ==== 0x0060CF00  Control::CreateControlDialog  this=Control  sig=csp ====
_DWORD *__thiscall Control::CreateControlDialog(Control *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  int v3; // eax
  Control *v4; // [esp+4h] [ebp-4h] BYREF

  result = *(_DWORD **)&g_DialogPool.__pad_208[60]; /*0x60cf01*/
  v4 = this; /*0x60cf09*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cf0d*/
  {
    result = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cf32*/
                        + 4
                        * ((*(int (__thiscall **)(Control **))&g_DialogPool.__pad_208[80])(&v4)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60cf37*/
    {
      while ( (Control *)*result != v4 ) /*0x60cf43*/
      {
        result = (_DWORD *)result[129]; /*0x60cf45*/
        if ( !result ) /*0x60cf4d*/
          return result; /*0x60cf4d*/
      }
      v2 = result + 1; /*0x60cf5a*/
      if ( result != (_DWORD *)-4 ) /*0x60cf5f*/
      {
        v3 = result[28]; /*0x60cf65*/
        switch ( v3 ) /*0x60cf6d*/
        {
          case 148: /*0x60cf6d*/
            result = (_DWORD *)CreatureClass::GetManager(); /*0x60cf6f*/
            v2[29] = result; /*0x60cf74*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[700]; /*0x60cf7d*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[700]; /*0x60cf89*/
            return result; /*0x60cf91*/
          case 259: /*0x60cf6d*/
            goto LABEL_10; /*0x60cf97*/
          case 264: /*0x60cf6d*/
            v2[29] = UI_Create_72D820(); /*0x60cfc7*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfd0*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfd6*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfdb*/
            break;
          case 3014: /*0x60cf6d*/
            result = (_DWORD *)VtableStub_72D450(); /*0x60cfeb*/
            v2[29] = result; /*0x60cff0*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cff9*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60d005*/
            break;
          case 3015: /*0x60cf6d*/
LABEL_10:
            v2[29] = VtableStub_72D450(); /*0x60cf99*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfa1*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfa6*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfb2*/
            return result; /*0x60cfba*/
          case 107: /*0x60cf6d*/
            v2[29] = UI_Create_72D210(); /*0x60d01f*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d028*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x60d02e*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x60d033*/
            break;
          case 258: /*0x60cf6d*/
          case 188: /*0x60cf6d*/
          case 189: /*0x60cf6d*/
          case 194: /*0x60cf6d*/
          case 201: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72D030(); /*0x60d294*/
            v2[29] = result; /*0x60d299*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d2a2*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[616]; /*0x60d2ae*/
            break;
          case 275: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72CE50(); /*0x60d07a*/
            v2[29] = result; /*0x60d07f*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d088*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[764]; /*0x60d094*/
            break;
          case 276: /*0x60cf6d*/
            v2[29] = UI_Create_72CAB0(); /*0x60d0a9*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d0ac*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d0b1*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[688]; /*0x60d0bd*/
            break;
          case 270: /*0x60cf6d*/
          case 284: /*0x60cf6d*/
            v2[29] = UI_Create_72C8D0(); /*0x60d277*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d280*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[568]; /*0x60d286*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[568]; /*0x60d28b*/
            break;
          case 271: /*0x60cf6d*/
          case 285: /*0x60cf6d*/
            v2[29] = UI_Create_72C6F0(); /*0x60d255*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d258*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d25d*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[860]; /*0x60d269*/
            break;
          case 230: /*0x60cf6d*/
          case 243: /*0x60cf6d*/
          case 244: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72C510(); /*0x60d22d*/
            v2[29] = result; /*0x60d232*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d23b*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[692]; /*0x60d247*/
            break;
          case 231: /*0x60cf6d*/
            v2[29] = UI_Create_72C330(); /*0x60d11f*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d128*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x60d12e*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x60d133*/
            break;
          case 278: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72C150(); /*0x60d143*/
            v2[29] = result; /*0x60d148*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d151*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[668]; /*0x60d15d*/
            break;
          case 279: /*0x60cf6d*/
            v2[29] = UI_Create_72BF70(); /*0x60d172*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d175*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d17a*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[748]; /*0x60d186*/
            break;
          case 274: /*0x60cf6d*/
            v2[29] = UI_Create_72BD90(); /*0x60d19b*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1a4*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x60d1aa*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x60d1af*/
            break;
          case 700: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72BBB0(); /*0x60d1bf*/
            v2[29] = result; /*0x60d1c4*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1cd*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[892]; /*0x60d1d9*/
            break;
          case 214: /*0x60cf6d*/
            v2[29] = UI_Create_72B9D0(); /*0x60d1ee*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1f1*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1f6*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[932]; /*0x60d202*/
            break;
          default:
            v2[29] = VtableStub_72E280(); /*0x60d210*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d219*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[596]; /*0x60d21f*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[596]; /*0x60d224*/
            break;
        }
      }
    }
  }
  return result; /*0x60cf4f*/
}



// ==== 0x0060D2C0  UI_Helper_60D2C0  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_60D2C0(int a1, int a2)
{
  _DWORD *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)dword_AC1B04; /*0x60d2c1*/
  v4 = a1; /*0x60d2cb*/
  if ( dword_AC1B04 ) /*0x60d2cf*/
  {
    result = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v4) & ((1 << dword_AC1B0C) - 1))); /*0x60d2f0*/
    if ( result ) /*0x60d2f5*/
    {
      while ( *result != v4 ) /*0x60d2fd*/
      {
        result = (_DWORD *)result[129]; /*0x60d2ff*/
        if ( !result ) /*0x60d307*/
          return result; /*0x60d307*/
      }
      if ( ++result ) /*0x60d315*/
        result[27] = a2; /*0x60d317*/
    }
  }
  return result; /*0x60d309*/
}



// ==== 0x0060D320  GameSetup::LookupDialogHash  this=GameSetup  sig=csp ====
int __thiscall GameSetup::LookupDialogHash(GameSetup *this)
{
  GameSetup **v1; // eax
  _DWORD *v3; // eax
  GameSetup *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x60d326*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  v1 = *(GameSetup ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60d34d*/
                      + 4
                      * ((*(int (__thiscall **)(GameSetup **))&g_DialogPool.__pad_208[80])(&v4)
                       & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( *v1 != v4 ) /*0x60d35a*/
  {
    v1 = (GameSetup **)v1[129]; /*0x60d35c*/
    if ( !v1 ) /*0x60d364*/
      return 0; /*0x60d364*/
  }
  v3 = v1 + 1; /*0x60d36e*/
  if ( v3 ) /*0x60d373*/
    return v3[27]; /*0x60d375*/
  else
    return 0; /*0x60d366*/
}



// ==== 0x0060D380  Campaign::Screen  this=Campaign  sig=csp ====
int __stdcall Campaign::Screen(char a1)
{
  INT_PTR (__stdcall *v1)(HWND, UINT, WPARAM, LPARAM); // edx
  unsigned __int16 v2; // cx
  BINK *Dialog; // esi
  int result; // eax
  ObjectClass *v5; // [esp+0h] [ebp-8h]
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  Dialog = (BINK *)CreateDialog(v2, v1, 0); /*0x60d389*/
  result = 0; /*0x60d38b*/
  dwNewLong = 0; /*0x60d38f*/
  if ( Dialog ) /*0x60d393*/
  {
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x60d3a1*/
    ShowWindow((HWND)Dialog, 1); /*0x60d3aa*/
    SetForegroundWindow((HWND)Dialog); /*0x60d3b1*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x60d3bd*/
    if ( a1 ) /*0x60d3c8*/
      BINK::Background_Setup(Dialog); /*0x60d3cc*/
    while ( !dwNewLong ) /*0x60d3d7*/
    {
      MessageLoop(); /*0x60d3d9*/
      if ( !*(_DWORD *)&dword_A8B238 /*0x60d3fc*/
        || *(_DWORD *)&dword_A8B238 == 5
        || BYTE2(stru_A8D600.Network_field_0xC)
        || dword_A8DAB4 )
      {
        Event::Dispatch(); /*0x60d412*/
      }
      else if ( !VtableStub::55CBF0() && (unsigned __int8)GameFrameLoop(v5) ) /*0x60d407*/
      {
        break; /*0x60d40e*/
      }
    }
    Dialog::Destroy((Dialog *)Dialog); /*0x60d41f*/
    return dwNewLong; /*0x60d426*/
  }
  return result; /*0x60d42a*/
}



// ==== 0x0060D430  Init::StubPlaceholder  this=Init  sig=ida-proto ====
void Init::StubPlaceholder()
{
  ; /*0x60d430*/
}



// ==== 0x0060D440  nullsub_31  this=-  sig=ida-proto ====
void nullsub_31()
{
  ; /*0x60d440*/
}



// ==== 0x0060D450  DialogClass::RegisterWinClasses  this=DialogClass  sig=csp ====
int DialogClass::RegisterWinClasses()
{
  int result; // eax
  WNDCLASSA WndClass; // [esp+0h] [ebp-28h] BYREF

  result = 1; /*0x60d456*/
  if ( dword_AC48CC != 1 ) /*0x60d460*/
  {
    dword_AC48CC = 1; /*0x60d469*/
    WndClass.hInstance = g_hInstance; /*0x60d48a*/
    WndClass.style = 3; /*0x60d496*/
    WndClass.lpfnWndProc = (WNDPROC)GameScreen::DlgProc; /*0x60d49e*/
    WndClass.cbClsExtra = 0; /*0x60d4a6*/
    WndClass.cbWndExtra = 0; /*0x60d4aa*/
    memset(&WndClass.hIcon, 0, 12); /*0x60d4ae*/
    WndClass.lpszMenuName = aCombodropwin; /*0x60d4ba*/
    WndClass.lpszClassName = aCombodropwin; /*0x60d4be*/
    RegisterClassA(&WndClass); /*0x60d4c2*/
    WndClass.style = 131; /*0x60d4db*/
    WndClass.lpfnWndProc = sub_60D520; /*0x60d4e4*/
    WndClass.cbClsExtra = 0; /*0x60d4ec*/
    WndClass.cbWndExtra = 0; /*0x60d4f0*/
    WndClass.hInstance = g_hInstance; /*0x60d4f4*/
    memset(&WndClass.hIcon, 0, 16); /*0x60d4f8*/
    WndClass.lpszClassName = g_INI_Key_NewEdit; /*0x60d508*/
    LOWORD(result) = RegisterClassA(&WndClass); /*0x60d510*/
  }
  return result; /*0x60d515*/
}



// ==== 0x0060D520  sub_60D520  this=-  sig=csp ====
LRESULT __stdcall sub_60D520(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x60d53a*/
}



// ==== 0x0060D540  GameScreen::DlgProc  this=GameScreen  sig=csp ====
HWND __userpurge GameScreen::DlgProc@<eax>(
        GameScreen *this,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        unsigned int a8)
{
  HWND Parent; // eax
  int v9; // edx
  int v10; // ebp
  int v11; // eax
  HWND result; // eax
  int v13; // ecx
  HWND v14; // ecx
  LRESULT v15; // esi
  LRESULT v16; // ecx
  HWND v17; // esi
  HWND v18; // eax
  int v19; // ecx
  char *v20; // ecx
  char *v21; // ecx
  LONG v22; // edx
  int v23; // ecx
  int v24; // esi
  LONG v25; // eax
  LONG v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  __int16 *v31; // esi
  __int16 v32; // cx
  bool v33; // zf
  int v34; // eax
  int v35; // eax
  int v36; // esi
  LONG v37; // ebp
  LONG v38; // esi
  HWND v39; // ecx
  LRESULT (__stdcall *v40)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v41; // eax
  _DWORD *v42; // eax
  LRESULT (__stdcall **v43)(HWND, UINT, WPARAM, LPARAM); // ea... [59942 chars total]



// ==== 0x0060F320  Dialog::SubclassEditControl  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_SubclassEditControl(HWND hWnd, LPARAM a2)
{
  LONG WindowLongA; // ebx
  HWND Parent; // esi
  DWORD v4; // edx
  HWND Window; // esi
  _DWORD *v6; // ebx
  LONG v7; // eax
  LONG dwNewLong; // [esp+10h] [ebp-A4h]
  struct tagRECT Rect; // [esp+14h] [ebp-A0h] BYREF
  struct tagRECT v11; // [esp+24h] [ebp-90h] BYREF
  CHAR ClassName[128]; // [esp+34h] [ebp-80h] BYREF

  WindowLongA = GetWindowLongA(hWnd, -16); /*0x60f341*/
  SetWindowLongA(hWnd, -21, 0); /*0x60f343*/
  if ( (WindowLongA & 0x10000000) != 0 && (WindowLongA & 0x8000000) == 0 ) /*0x60f35b*/
  {
    GetClassNameA(hWnd, ClassName, 128); /*0x60f36c*/
    if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60f381*/
    {
      Parent = GetParent(hWnd); /*0x60f3b9*/
      ScreenDialogToClient(hWnd, &Rect); /*0x60f3bb*/
      ScreenDialogToClient(Parent, &v11); /*0x60f3c6*/
      v4 = 1073742096; /*0x60f3df*/
      if ( (WindowLongA & 0x10000) != 0 ) /*0x60f3ea*/
        v4 = 1073807632; /*0x60f3ec*/
      Window = CreateWindowExA( /*0x60f427*/
                 0,
                 g_INI_Key_ListBox,
                 0,
                 v4,
                 Rect.left - v11.left,
                 Rect.top - v11.top,
                 Rect.right - Rect.left,
                 Rect.bottom - Rect.top,
                 Parent,
                 0,
                 g_hInstance,
                 0);
      v6 = __2_YAPAXI_Z(8u); /*0x60f431*/
      *v6 = g_INI_Key_NewEdit; /*0x60f436*/
      v6[1] = GetWindowLongA(hWnd, -16); /*0x60f43f*/
      SetWindowLongA(Window, -21, (LONG)v6); /*0x60f44b*/
      EnableWindow(hWnd, 0); /*0x60f450*/
      ShowWindow(hWnd, 0); /*0x60f459*/
      EnableWindow(Window, 1); /*0x60f462*/
      ShowWindow(Window, 1); /*0x60f46b*/
      dwNewLong = GetWindowLongA(hWnd, -12); /*0x60f479*/
      v7 = GetWindowLongA(Window, -12); /*0x60f47d*/
      SetWindowLongA(hWnd, -12, v7); /*0x60f483*/
      SetWindowLongA(Window, -12, dwNewLong); /*0x60f48d*/
    }
  }
  return 1; /*0x60f48f*/
}



// ==== 0x0060F4B0  InitializeDialogControls  this=-  sig=csp ====
char __fastcall InitializeDialogControls(HWND a1, LPARAM a2)
{
  LPARAM v2; // edi
  _DWORD *v4; // eax
  void *v5; // eax
  void *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  void *v10; // eax
  void *v11; // eax
  _DWORD *i; // eax
  int v14; // [esp+10h] [ebp-20Ch] BYREF
  _DWORD *v15; // [esp+14h] [ebp-208h] BYREF
  LPARAM v16; // [esp+18h] [ebp-204h]
  void *v17[128]; // [esp+1Ch] [ebp-200h] BYREF

  v2 = a2; /*0x60f4ba*/
  v16 = a2; /*0x60f4be*/
  DialogClass::RegisterWinClasses(); /*0x60f4c2*/
  dword_AC48A8 = (int)a1; /*0x60f4cd*/
  EnumChildWindows(a1, Dialog::InitWindow, 1); /*0x60f4db*/
  v14 = (int)a1; /*0x60f4e6*/
  v15 = 0; /*0x60f4ea*/
  if ( dword_AC1B04 /*0x60f514*/
    && (v4 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v14) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    while ( *v4 != v14 ) /*0x60f51c*/
    {
      v4 = (_DWORD *)v4[129]; /*0x60f51e*/
      if ( !v4 ) /*0x60f526*/
        goto LABEL_5; /*0x60f526*/
    }
    v7 = v4 + 1; /*0x60f568*/
  }
  else
  {
LABEL_5:
    memset(v17, 0, sizeof(v17)); /*0x60f528*/
    v17[26] = (void *)11; /*0x60f53d*/
    v17[25] = (void *)g_FogOfWarState; /*0x60f548*/
    v5 = __2_YAPAXI_Z(4u); /*0x60f54f*/
    if ( v5 ) /*0x60f559*/
      v6 = (void *)unknown_libname_74(v5); /*0x60f55d*/
    else
      v6 = 0; /*0x60f570*/
    v17[15] = v6; /*0x60f572*/
    v17[16] = 0; /*0x60f585*/
    v17[23] = 0; /*0x60f589*/
    v17[36] = (void *)-1; /*0x60f590*/
    SymbolTable::Insert((int)&v14, v17); /*0x60f59b*/
    if ( dword_AC1B04 ) /*0x60f5a6*/
    {
      v8 = (_DWORD *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v14)); /*0x60f5bd*/
      if ( v8 ) /*0x60f5c2*/
      {
        while ( *v8 != v14 ) /*0x60f5ca*/
        {
          v8 = (_DWORD *)v8[129]; /*0x60f5cc*/
          if ( !v8 ) /*0x60f5d4*/
            goto LABEL_15; /*0x60f5d4*/
        }
        v15 = v8 + 1; /*0x60f5df*/
      }
    }
LABEL_15:
    Dialog::CleanupTree((int)v17); /*0x60f5e3*/
    v2 = v16; /*0x60f5ec*/
    v7 = v15; /*0x60f5f0*/
  }
  v7[8] = 1; /*0x60f5fc*/
  EnumChildWindows(a1, Dialog::SubclassEditControl, 1); /*0x60f603*/
  EnumChildWindows(a1, Dialog::InitializeControls, v2); /*0x60f60c*/
  Dialog::InitializeControls(a1, v2); /*0x60f610*/
  EnumChildWindows(a1, Dialog::InitWindow, 0); /*0x60f61c*/
  v14 = (int)a1; /*0x60f625*/
  v15 = 0; /*0x60f629*/
  if ( dword_AC1B04 /*0x60f653*/
    && (v9 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v14) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    while ( *v9 != v14 ) /*0x60f65b*/
    {
      v9 = (_DWORD *)v9[129]; /*0x60f65d*/
      if ( !v9 ) /*0x60f665*/
        goto LABEL_20; /*0x60f665*/
    }
    v9[9] = 0; /*0x60f6a8*/
    return 1; /*0x60f6ad*/
  }
  else
  {
LABEL_20:
    memset(v17, 0, sizeof(v17)); /*0x60f667*/
    v17[26] = (void *)11; /*0x60f67c*/
    v17[25] = (void *)g_FogOfWarState; /*0x60f687*/
    v10 = __2_YAPAXI_Z(4u); /*0x60f68e*/
    if ( v10 ) /*0x60f698*/
      v11 = (void *)unknown_libname_74(v10); /*0x60f69c*/
    else
      v11 = 0; /*0x60f6b7*/
    v17[15] = v11; /*0x60f6b9*/
    v17[16] = 0; /*0x60f6cc*/
    v17[23] = 0; /*0x60f6d0*/
    v17[36] = (void *)-1; /*0x60f6d7*/
    SymbolTable::Insert((int)&v14, v17); /*0x60f6e2*/
    HashTable::Get(&dword_AC1B00, &v14, &v15); /*0x60f6f6*/
    GadgetClass::SetTooltip(v17, 0); /*0x60f700*/
    for ( i = v17[13]; v17[13]; i = v17[13] ) /*0x60f70b*/
      LinkedList::Remove(v17, i); /*0x60f712*/
    if ( v17[15] ) /*0x60f725*/
      DeleteAndZero::OrFree((void **)v17[15], 1); /*0x60f729*/
    v15[8] = 0; /*0x60f734*/
    return 1; /*0x60f738*/
  }
}



// ==== 0x0060F760  Dialog::InitWindow  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_InitWindow(HWND a1, LPARAM a2)
{
  int v2; // ebp
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  void *i; // eax
  void *v13[128]; // [esp+10h] [ebp-200h] BYREF

  v2 = 0; /*0x60f76f*/
  if ( dword_AC1B04 && (v3 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x60f79c*/
  {
    while ( *(HWND *)v3 != a1 ) /*0x60f7a7*/
    {
      v3 = *(_DWORD *)(v3 + 516); /*0x60f7a9*/
      if ( !v3 ) /*0x60f7b1*/
        goto LABEL_5; /*0x60f7b1*/
    }
    *(_DWORD *)(v3 + 36) = a2; /*0x60f7fa*/
    return 1; /*0x60f7fd*/
  }
  else
  {
LABEL_5:
    memset(v13, 0, sizeof(v13)); /*0x60f7b3*/
    v13[26] = (void *)11; /*0x60f7c9*/
    v13[25] = (void *)g_FogOfWarState; /*0x60f7d4*/
    v4 = __2_YAPAXI_Z(4u); /*0x60f7d8*/
    if ( v4 ) /*0x60f7e3*/
      v5 = (void *)unknown_libname_74(v4); /*0x60f7e7*/
    else
      v5 = 0; /*0x60f80c*/
    v13[15] = v5; /*0x60f814*/
    v13[16] = 0; /*0x60f818*/
    v13[23] = 0; /*0x60f81c*/
    v13[36] = (void *)-1; /*0x60f820*/
    v7 = __2_YAPAXI_Z(0x208u); /*0x60f82b*/
    v8 = v7; /*0x60f830*/
    if ( v7 ) /*0x60f837*/
      DialogControl::Constructor(v7 + 1); /*0x60f83c*/
    else
      v8 = 0; /*0x60f843*/
    *v8 = a1; /*0x60f854*/
    DialogClass::CopyTemplateStruct(v13); /*0x60f856*/
    v8[129] = 0; /*0x60f862*/
    v9 = dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1); /*0x60f882*/
    v10 = *((_DWORD *)dword_AC1B00 + v9); /*0x60f884*/
    *((_DWORD *)dword_AC1B00 + v9) = v8; /*0x60f887*/
    if ( v10 ) /*0x60f88c*/
      v8[129] = v10; /*0x60f88e*/
    if ( (double)(unsigned int)++dword_AC1B04 / (double)dword_AC1B08 >= dbl_AC1B28 ) /*0x60f8c9*/
      HashTable::Grow2(&dword_AC1B00); /*0x60f8d0*/
    if ( dword_AC1B04 ) /*0x60f8db*/
    {
      v11 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1))); /*0x60f8ff*/
      if ( v11 ) /*0x60f904*/
      {
        while ( *(HWND *)v11 != a1 ) /*0x60f90f*/
        {
          v11 = *(_DWORD *)(v11 + 516); /*0x60f911*/
          if ( !v11 ) /*0x60f919*/
            goto LABEL_22; /*0x60f919*/
        }
        v2 = v11 + 4; /*0x60f921*/
      }
    }
LABEL_22:
    if ( v13[10] ) /*0x60f92a*/
    {
      __3_YAXPAX_Z(v13[10]); /*0x60f92d*/
      v13[10] = 0; /*0x60f935*/
    }
    for ( i = v13[13]; v13[13]; i = v13[13] ) /*0x60f93f*/
      LinkedList::Remove(i); /*0x60f946*/
    if ( v13[15] ) /*0x60f959*/
      DeleteAndZero::OrFree(v13[15], 1); /*0x60f95d*/
    *(_DWORD *)(v2 + 32) = a2; /*0x60f96e*/
    return 1; /*0x60f962*/
  }
}



// ==== 0x0060F9A0  Dialog::InitializeControls  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_InitializeControls(HWND hWnd, LPARAM a2)
{
  char v2; // al
  char v3; // al
  int (__stdcall *v4)(int, int, int, int); // ebp
  const char **WindowLongA; // eax
  LONG v6; // edi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  void *v17; // eax
  void *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  _DWORD *i; // eax
  LPARAM v25; // edx
  const char **v26; // eax
  bool v27; // zf
  LRESULT (__stdcall *v28)(HWND, UINT, WPARAM, LPARAM); // esi
  wchar_t *String; // [esp-4h] [ebp-AC4h]
  int v31; // [esp+10h] [ebp-AB0h] BYREF
  __int64 v32; // [esp+14h] [ebp-AACh]
  const char **v33; // [esp+1Ch] [ebp-AA4h]
  CHAR ClassName[128]; // [esp+20h] [ebp-AA0h] BYREF
  struct tagRECT v35; // [esp+A0h] [ebp-A20h] BYREF
  struct tagRECT Rect; // [esp+B0h] [ebp-A10h] BYREF
  void *v37[128]; // [esp+C0h] [ebp-A00h] BYREF
  wchar_t lParam[1024]; // [esp+2C0h] [ebp-800h] BYREF

  GetClassNameA(hWnd, ClassName, 128); /*0x60f9bc*/
  LODWORD(v32) = GetWindowLongA(hWnd, -16); /*0x60f9e2*/
  ScreenDialogToClient(hWnd, &v35); /*0x60f9e6*/
  GetClientRect(hWnd, &Rect); /*0x60f9fb*/
  TimerPool::AllocSlot(hWnd); /*0x60fa08*/
  dword_AC1CB4 = 159; /*0x60fa14*/
  dword_AC1CA8 = 159; /*0x60fa19*/
  dword_AC1DF0 = 1; /*0x60fa2f*/
  dword_AC1890 = 127; /*0x60fa35*/
  dword_AC18A4 = 0xFFFF; /*0x60fa3f*/
  dword_AC1CB0 = 15658734; /*0x60fa49*/
  dword_AC4618 = 40863; /*0x60fa53*/
  dword_AC184C = 0xFFFFFF; /*0x60fa5d*/
  dword_AC4628 = (int)&off_808080; /*0x60fa67*/
  dword_AC4604 = 255; /*0x60fa71*/
  dword_AC4880 = (int)&loc_626261 + 1; /*0x60fa77*/
  dword_AC4624 = 255; /*0x60fa81*/
  dword_AC1DD8 = (int)&unk_929292; /*0x60fa87*/
  dword_AC1B98 = 12959399; /*0x60fa91*/
  dword_AC1B94 = (int)&unk_807A68; /*0x60fa9b*/
  dword_AC1AF8 = (int)&unk_8F8F8F; /*0x60faa5*/
  dword_AC4620 = (int)sub_646464; /*0x60faaf*/
  dword_AC4898 = 96; /*0x60fab9*/
  dword_AC4608 = 43690; /*0x60fac3*/
  dword_AC48B0 = 2235147; /*0x60facd*/
  dword_AC1B90 = (int)&loc_443714 + 2; /*0x60fad7*/
  if ( !dword_AC48D4 ) /*0x60fae1*/
  {
    LOWORD(g_ScreenSaverState) = 255; /*0x60fae3*/
    LOWORD(g_ScreenSaverState) = 0xFFu >> GetBitShift_Green(); /*0x60faf2*/
    v2 = GetBitShift_Red(); /*0x60faf9*/
    HIWORD(g_ScreenSaverState) = 255; /*0x60fb01*/
    LOWORD(g_ScreenSaverState) = (_WORD)g_ScreenSaverState << v2; /*0x60fb08*/
    HIWORD(g_ScreenSaverState) = 0xFFu >> GetBitMask_Blue(); /*0x60fb17*/
    v3 = GetBitMask_Green(); /*0x60fb1e*/
    LOWORD(g_CreditsScreenState) = 255; /*0x60fb26*/
    HIWORD(g_ScreenSaverState) <<= v3; /*0x60fb2d*/
    LOWORD(g_CreditsScreenState) = 0xFFu >> GetBitMask_Red(); /*0x60fb3c*/
    LOWORD(g_CreditsScreenState) = (_WORD)g_CreditsScreenState << GetBitShift_Blue(); /*0x60fb4b*/
    InitDialogCountryIcons(); /*0x60fb52*/
    dword_AC48D4 = 1; /*0x60fb57*/
  }
  v4 = 0; /*0x60fb67*/
  v31 = 11; /*0x60fb69*/
  WindowLongA = (const char **)GetWindowLongA(hWnd, -21); /*0x60fb71*/
  v33 = WindowLongA; /*0x60fb75*/
  if ( WindowLongA ) /*0x60fb79*/
    strcpy(ClassName, *WindowLongA); /*0x60fb95*/
  if ( !strcmp(ClassName, aScrollbar) ) /*0x60fbad*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))Scrollbar::DlgProc; /*0x60fbd4*/
    v31 = 8; /*0x60fbd9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ListBox) ) /*0x60fbf5*/
  {
    v4 = Options::DialogProc; /*0x60fc1c*/
    v31 = 4; /*0x60fc21*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x60fc3d*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))ComboBoxDropDown::WndProc; /*0x60fc64*/
    v31 = 3; /*0x60fc69*/
  }
  else if ( !strcmp(ClassName, aMsctlsTrackbar) ) /*0x60fc85*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))TabControl::DlgProc; /*0x60fcac*/
    v31 = 7; /*0x60fcb1*/
  }
  else if ( !strcmp(ClassName, aMsctlsProgress) ) /*0x60fccd*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))NetworkLobbyPaintProc; /*0x60fcf4*/
    v31 = 6; /*0x60fcf9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x60fd15*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))EditControl::WndProc; /*0x60fd3c*/
    v31 = 1; /*0x60fd41*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60fd5d*/
  {
    v4 = ListBox::EditSubclassProc; /*0x60fd84*/
    v31 = 1; /*0x60fd89*/
  }
  else if ( !strcmp(ClassName, aStatic) ) /*0x60fda5*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))BinkMovie::WndProc; /*0x60fdcc*/
    v31 = 2; /*0x60fdd1*/
  }
  else if ( !strcmp(ClassName, aSystabcontrol3) ) /*0x60fded*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))Dialog::TabControlPaint; /*0x60fe14*/
    v31 = 10; /*0x60fe19*/
  }
  else if ( !strcmp(ClassName, aButton) ) /*0x60fe35*/
  {
    if ( (v32 & 7) == 7 ) /*0x60fe68*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))GroupLabel::WndProc; /*0x60fe6a*/
      v31 = 0; /*0x60fe6f*/
    }
    else if ( (v32 & 0xB) == 0xB ) /*0x60fe80*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))TabControl::WndProc; /*0x60fe82*/
      v31 = 0; /*0x60fe87*/
    }
    else if ( (v32 & 3) == 3 ) /*0x60fe95*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))Checkbox::WndProc; /*0x60fe97*/
      v31 = 0; /*0x60fe9c*/
    }
    else
    {
      if ( (v32 & 9) == 9 ) /*0x60fea7*/
        v4 = (int (__stdcall *)(int, int, int, int))ButtonOwnerDraw::DlgProc; /*0x60fea9*/
      v31 = 0; /*0x60feae*/
    }
  }
  else if ( !strcmp(ClassName, aMsctlsHotkey32) ) /*0x60fec3*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))RenderDialogSurface; /*0x60feea*/
    v31 = 9; /*0x60feef*/
  }
  else
  {
    v4 = (int (__stdcall *)(int, int, int, int))sub_612A60; /*0x60fef9*/
  }
  v6 = SetWindowLongA(hWnd, -4, (LONG)ComboBoxOwnerDraw::DlgProc); /*0x60ff1a*/
  v7 = *((_DWORD *)g_DialogPool + (dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1))); /*0x60ff37*/
  if ( v7 ) /*0x60ff3c*/
  {
    while ( *(HWND *)v7 != hWnd ) /*0x60ff47*/
    {
      v7 = *(_DWORD *)(v7 + 8); /*0x60ff4d*/
      if ( !v7 ) /*0x60ff52*/
        goto LABEL_39; /*0x60ff52*/
    }
  }
  else
  {
LABEL_39:
    v8 = __2_YAPAXI_Z(0xCu); /*0x60ff54*/
    *v8 = hWnd; /*0x60ff67*/
    v8[1] = v4; /*0x60ff70*/
    v8[2] = 0; /*0x60ff73*/
    v9 = dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1); /*0x60ff90*/
    v10 = *((_DWORD *)g_DialogPool + v9); /*0x60ff92*/
    *((_DWORD *)g_DialogPool + v9) = v8; /*0x60ff95*/
    if ( v10 ) /*0x60ff9a*/
      v8[2] = v10; /*0x60ff9c*/
    v32 = (unsigned int)++unk_AC18C4; /*0x60ffaf*/
    LODWORD(v32) = dword_AC18C8; /*0x60ffbc*/
    if ( (double)(unsigned int)unk_AC18C4 / (double)dword_AC18C8 >= dbl_AC18E8 ) /*0x60ffd3*/
      Dialog::GrowBuffer(&g_DialogPool); /*0x60ffda*/
  }
  v11 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x610001*/
  if ( v11 ) /*0x610006*/
  {
    while ( *(HWND *)v11 != hWnd ) /*0x610011*/
    {
      v11 = *(_DWORD *)(v11 + 8); /*0x610017*/
      if ( !v11 ) /*0x61001c*/
        goto LABEL_46; /*0x61001c*/
    }
  }
  else
  {
LABEL_46:
    v12 = __2_YAPAXI_Z(0xCu); /*0x61001e*/
    *v12 = hWnd; /*0x610031*/
    v12[1] = v6; /*0x61003a*/
    v12[2] = 0; /*0x61003d*/
    v13 = dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1); /*0x61005a*/
    v14 = *((_DWORD *)dword_AC1B48 + v13); /*0x61005c*/
    *((_DWORD *)dword_AC1B48 + v13) = v12; /*0x61005f*/
    if ( v14 ) /*0x610064*/
      v12[2] = v14; /*0x610066*/
    v32 = (unsigned int)++dword_AC1B4C; /*0x610079*/
    LODWORD(v32) = dword_AC1B50; /*0x610086*/
    if ( (double)(unsigned int)dword_AC1B4C / (double)dword_AC1B50 >= dbl_AC1B70 ) /*0x61009d*/
      Dialog::GrowBuffer(&dword_AC1B48); /*0x6100a4*/
  }
  v15 = 0; /*0x6100ae*/
  if ( dword_AC1B04 && (v16 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x6100db*/
  {
    while ( *(HWND *)v16 != hWnd ) /*0x6100e6*/
    {
      v16 = *(_DWORD *)(v16 + 516); /*0x6100e8*/
      if ( !v16 ) /*0x6100f0*/
        goto LABEL_54; /*0x6100f0*/
    }
    v15 = v16 + 4; /*0x610135*/
  }
  else
  {
LABEL_54:
    memset(v37, 0, sizeof(v37)); /*0x6100f2*/
    v37[26] = (void *)11; /*0x61010a*/
    v37[25] = (void *)g_FogOfWarState; /*0x610115*/
    v17 = __2_YAPAXI_Z(4u); /*0x61011c*/
    if ( v17 ) /*0x610126*/
      v18 = (void *)unknown_libname_74(v17); /*0x61012a*/
    else
      v18 = 0; /*0x61013d*/
    v37[15] = v18; /*0x610144*/
    v37[16] = 0; /*0x61014b*/
    v37[23] = 0; /*0x610152*/
    v37[36] = (void *)-1; /*0x610159*/
    v19 = __2_YAPAXI_Z(0x208u); /*0x610164*/
    v20 = v19; /*0x610169*/
    if ( v19 ) /*0x610170*/
      DialogControl::Constructor(v19 + 1); /*0x610175*/
    else
      v20 = 0; /*0x61017c*/
    *v20 = hWnd; /*0x610190*/
    DialogClass::CopyTemplateStruct(v37); /*0x610192*/
    v20[129] = 0; /*0x61019e*/
    v21 = HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd); /*0x6101aa*/
    v22 = *((_DWORD *)dword_AC1B00 + v21); /*0x6101b5*/
    *((_DWORD *)dword_AC1B00 + v21) = v20; /*0x6101b8*/
    if ( v22 ) /*0x6101bd*/
      v20[129] = v22; /*0x6101bf*/
    v32 = (unsigned int)++dword_AC1B04; /*0x6101d5*/
    LODWORD(v32) = dword_AC1B08; /*0x6101e2*/
    if ( (double)(unsigned int)dword_AC1B04 / (double)dword_AC1B08 >= dbl_AC1B28 ) /*0x6101f9*/
      HashTable::Grow2(&dword_AC1B00); /*0x610200*/
    if ( dword_AC1B04 ) /*0x61020b*/
    {
      v23 = *((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd)); /*0x610225*/
      if ( v23 ) /*0x61022a*/
      {
        while ( *(HWND *)v23 != hWnd ) /*0x610235*/
        {
          v23 = *(_DWORD *)(v23 + 516); /*0x610237*/
          if ( !v23 ) /*0x61023f*/
            goto LABEL_71; /*0x61023f*/
        }
        v15 = v23 + 4; /*0x610247*/
      }
    }
LABEL_71:
    GadgetClass::SetTooltip(v37, 0); /*0x61024a*/
    for ( i = v37[13]; v37[13]; i = v37[13] ) /*0x610260*/
      LinkedList::Remove(v37, i); /*0x61026a*/
    if ( v37[15] ) /*0x610283*/
      DeleteAndZero::OrFree((void **)v37[15], 1); /*0x610287*/
  }
  v25 = a2; /*0x610290*/
  *(_DWORD *)(v15 + 104) = v31; /*0x610297*/
  v26 = v33; /*0x61029a*/
  v27 = v33 == 0; /*0x61029e*/
  *(_DWORD *)v15 = v25; /*0x6102a0*/
  if ( !v27 ) /*0x6102a3*/
    *(_DWORD *)(v15 + 84) = v26[1]; /*0x6102a8*/
  v28 = 0; /*0x6102bd*/
  v31 = 0; /*0x6102bf*/
  if ( (unsigned __int8)Dialog::UpdateControlState(&hWnd, &v31) && v31 ) /*0x6102d2*/
    v28 = *(LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))v31; /*0x6102d4*/
  LOBYTE(lParam[0]) = 0; /*0x6102ee*/
  CallWindowProcA(v28, hWnd, 0xDu, 0x800u, (LPARAM)lParam); /*0x6102f5*/
  if ( LOBYTE(lParam[0]) ) /*0x610302*/
  {
    String = GetStringCSF(lParam, 0, g_Str_File_ownrdraw_cpp, 7392); /*0x61031c*/
    GadgetClass::SetTooltip((void **)v15, String); /*0x61031d*/
  }
  else
  {
    GadgetClass::SetTooltip((void **)v15, 0); /*0x610322*/
  }
  *(_DWORD *)(v15 + 44) = 0; /*0x610327*/
  SendMessageA(hWnd, 0x497u, 0, 0); /*0x610339*/
  return 1; /*0x61033f*/
}



// ==== 0x00600010  _VectorClass_PAVSpotLightClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::Get(_VectorClass_PAVSpotLightClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x60001a*/
}



// ==== 0x00600020  _VectorClass_PAVSpotLightClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::Add(_VectorClass_PAVSpotLightClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x600022*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x60002d*/
  {
    v3 = 0; /*0x60002f*/
    if ( m_8 <= 0 ) /*0x600033*/
      return 1; /*0x600053*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x600035*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x60003b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x600044*/
    {
      ++v3; /*0x600046*/
      ++v4; /*0x600047*/
      if ( v3 >= m_8 ) /*0x60004c*/
        return 1; /*0x60004c*/
    }
  }
  return 0; /*0x60004e*/
}



// ==== 0x00600060  _VectorClass_PAVSpotLightClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::Release(_VectorClass_PAVSpotLightClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x60006c*/
  {
    LOBYTE(this->m_C) = 0; /*0x600076*/
    if ( a3 ) /*0x60007c*/
      v4 = a3; /*0x600092*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x60008e*/
    LOBYTE(this->m_C) = 1; /*0x600096*/
    if ( v4 ) /*0x60009a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6000a5*/
      {
        m_8 = this->m_8; /*0x6000ac*/
        if ( a2 < m_8 ) /*0x6000b1*/
          m_8 = a2; /*0x6000b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6000b9*/
          ++i; /*0x6000be*/
        if ( BYTE1(this->m_C) ) /*0x6000cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6000d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6000de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6000e7*/
      this->m_8 = a2; /*0x6000ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x6000f2*/
      return 1; /*0x6000f8*/
    }
    else
    {
      return 0; /*0x60009f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSpotLightClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x600102*/
    return 1; /*0x600108*/
  }
}



// ==== 0x00600110  _VectorClass_PAVSpotLightClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SpotLightClass::Remove(_VectorClass_PAVSpotLightClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x60011d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x600123*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x60012b*/
  }
  BYTE1(this->m_C) = 0; /*0x60012e*/
  this->m_8 = 0; /*0x600131*/
}



// ==== 0x00600140  _VectorClass_PAVSpotLightClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::GetSize(_VectorClass_PAVSpotLightClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x600140*/
    return 0; /*0x600148*/
  m_8 = this->m_8; /*0x60014e*/
  result = 0; /*0x600151*/
  if ( m_8 <= 0 ) /*0x600155*/
    return -1; /*0x60016c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x60015b*/
  {
    if ( ++result >= m_8 ) /*0x60016a*/
      return -1; /*0x60016a*/
  }
  return result; /*0x60014a*/
}



// ==== 0x00600180  _VectorClass_PAVSpotLightClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpotLightClass::GetCapacity(_VectorClass_PAVSpotLightClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x600180*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x600195*/
  else
    return 0; /*0x600187*/
}



// ==== 0x006001A0  _DynamicVectorClass_PAVSpotLightClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::SetCapacity(
        _DynamicVectorClass_PAVSpotLightClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6001ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x6001b2*/
    if ( a3 ) /*0x6001b8*/
      v4 = a3; /*0x6001ce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6001ca*/
    LOBYTE(this->m_C) = 1; /*0x6001d2*/
    if ( !v4 ) /*0x6001d6*/
      return 0; /*0x60024a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6001d8*/
    {
      v5 = *(_DWORD *)&this->__pad_5[3]; /*0x6001df*/
      if ( a2 < v5 ) /*0x6001e4*/
        v5 = a2; /*0x6001e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6001ec*/
        ++i; /*0x6001f1*/
      if ( BYTE1(this->m_C) ) /*0x6001fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x600209*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x600211*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x60021a*/
    *(_DWORD *)&this->__pad_5[3] = a2; /*0x600222*/
    BYTE1(this->m_C) = a3 == 0; /*0x600225*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVSpotLightClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x60022e*/
  }
  v7 = *(_DWORD *)&this->__pad_5[3]; /*0x600231*/
  if ( v7 < *(_DWORD *)this->__tail_10 ) /*0x600239*/
    *(_DWORD *)this->__tail_10 = v7; /*0x60023b*/
  return 1; /*0x60023e*/
}



// ==== 0x00600250  _DynamicVectorClass_PAVSpotLightClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::FindItemIndex(_DynamicVectorClass_PAVSpotLightClass *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)this->__tail_10; /*0x600250*/
  result = 0; /*0x600253*/
  if ( v2 <= 0 ) /*0x600258*/
    return -1; /*0x60026f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x60025e*/
  {
    if ( ++result >= v2 ) /*0x60026d*/
      return -1; /*0x60026d*/
  }
  return result; /*0x600272*/
}



// ==== 0x00600280  _VectorClass_PAVSpotLightClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SpotLightClass::QueryInterface(_VectorClass_PAVSpotLightClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x600283*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpotLightClass *>::`vftable'; /*0x600286*/
  if ( v3 && BYTE1(this->m_C) ) /*0x600290*/
  {
    __3_YAXPAX_Z(v3); /*0x600298*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6002a0*/
  }
  BYTE1(this->m_C) = 0; /*0x6002ab*/
  this->m_8 = 0; /*0x6002b1*/
  if ( (a2 & 1) != 0 ) /*0x6002b8*/
    __3_YAXPAX_Z(this); /*0x6002bb*/
  return this->__pad_0; /*0x6002c5*/
}



// ==== 0x006002D0  _DynamicVectorClass_PAVSpotLightClass::Constructor_VectorClass_SpotLightClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SpotLightClass::Constructor_VectorClass_SpotLightClass___(
        _DynamicVectorClass_PAVSpotLightClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6002d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpotLightClass *>::`vftable'; /*0x6002d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6002e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6002e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6002f0*/
  }
  BYTE1(this->m_C) = 0; /*0x6002fb*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x600301*/
  if ( (a2 & 1) != 0 ) /*0x600308*/
    __3_YAXPAX_Z(this); /*0x60030b*/
  return this->__pad_0; /*0x600315*/
}



// ==== 0x00600320  sub_600320  this=-  sig=ida-proto ====
int sub_600320()
{
  dword_AC18B0 = 0; /*0x600322*/
  dword_AC18B4 = 0; /*0x600327*/
  dword_AC18B8 = 0; /*0x60032c*/
  dword_AC18BC = 0; /*0x600331*/
  return 0; /*0x600336*/
}



// ==== 0x00600340  sub_600340  this=-  sig=ida-proto ====
void sub_600340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x60034c*/
  dbl_AC1B40 = Math::Sqrt(v0 + v0); /*0x60035e*/
}



// ==== 0x00600370  sub_600370  this=-  sig=ida-proto ====
void sub_600370()
{
  dbl_AC48A0 = dbl_AC1B40 / 60.0; /*0x60037c*/
}



// ==== 0x00600390  sub_600390  this=-  sig=ida-proto ====
void sub_600390()
{
  dbl_AC4838 = 1.0 / dbl_AC48A0; /*0x60039c*/
}



// ==== 0x006003B0  sub_6003B0  this=-  sig=ida-proto ====
void sub_6003B0()
{
  dbl_AC4830 = 0.0174532925199433 * 45.0; /*0x6003bc*/
}



// ==== 0x006003D0  sub_6003D0  this=-  sig=ida-proto ====
void sub_6003D0()
{
  dbl_AC1B88 = 0.0174532925199433 * 60.0; /*0x6003dc*/
}



// ==== 0x006003F0  sub_6003F0  this=-  sig=ida-proto ====
void sub_6003F0()
{
  dbl_AC1898 = 0.0174532925199433 * 90.0; /*0x6003fc*/
}



// ==== 0x00600410  sub_600410  this=-  sig=ida-proto ====
__int64 sub_600410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC1898 - dbl_AC1B88); /*0x600422*/
  result = Math::RoundToInt(v0 * dbl_AC1B40 * 0.5); /*0x600436*/
  dword_AC48AC = result; /*0x60043b*/
  return result; /*0x600440*/
}



// ==== 0x00600450  sub_600450  this=-  sig=ida-proto ====
void sub_600450()
{
  dbl_AC1CA0 = Math::ArcTan((double)dword_AC48AC * 0.00390625); /*0x600467*/
}



// ==== 0x00600480  sub_600480  this=-  sig=ida-proto ====
void sub_600480()
{
  dbl_AC4610 = Math::ArcTan((double)(2 * dword_AC48AC) / dbl_AC1B40); /*0x6004a2*/
}



// ==== 0x006004B0  sub_6004B0  this=-  sig=ida-proto ====
__int64 sub_6004B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC48AC) + 0.5); /*0x6004cb*/
  dword_AC489C = result; /*0x6004d0*/
  return result; /*0x6004d6*/
}



// ==== 0x006004E0  sub_6004E0  this=-  sig=ida-proto ====
int sub_6004E0()
{
  word_AC1B38 = 0; /*0x6004e2*/
  word_AC1B3A = 0; /*0x6004e8*/
  return 0; /*0x6004ee*/
}



// ==== 0x006004F0  sub_6004F0  this=-  sig=ida-proto ====
int sub_6004F0()
{
  dword_AC1DF8 = 0; /*0x6004f2*/
  dword_AC1DFC = 0; /*0x6004f7*/
  dword_AC1E00 = 0; /*0x6004fc*/
  return 0; /*0x600501*/
}



// ==== 0x00600510  sub_600510  this=-  sig=ida-proto ====
int sub_600510()
{
  dword_AC4890 = 0; /*0x600515*/
  dword_AC4888 = 128; /*0x60051f*/
  dword_AC488C = 128; /*0x600524*/
  return 128; /*0x600529*/
}



// ==== 0x00600530  sub_600530  this=-  sig=ida-proto ====
int sub_600530()
{
  sub_6B9450(g_DialogHashTable); /*0x600535*/
  return atexit(unknown_libname_26); /*0x600545*/
}



// ==== 0x00600550  unknown_libname_26  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_26()
{
  HashTable::Clear((int)g_DialogHashTable); /*0x600555*/
}



// ==== 0x00600630  Gadget::InitProperties  this=Gadget  sig=csp ====
_DWORD *__thiscall Gadget::InitProperties(Gadget *this)
{
  unknown_libname_74(&this->m_1[3]); /*0x600636*/
  unknown_libname_74(&this->m_5[3]); /*0x60063e*/
  *(_DWORD *)this->__pad_0 = 0; /*0x600646*/
  this->u32_C = -1; /*0x60064c*/
  this->u32_14 = -1; /*0x60064f*/
  this->u32_10 = 0; /*0x600652*/
  return this->__pad_0; /*0x60065b*/
}



// ==== 0x00600660  ObjectClass::ReadPointerFromECX  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x600662*/
}



// ==== 0x00600670  ComboBoxOwnerDraw::GetWidthHeight  this=ComboBoxOwnerDraw  sig=csp ====
int __thiscall ComboBoxOwnerDraw::GetWidthHeight(ComboBoxOwnerDraw *this)
{
  return *(_DWORD *)this->__pad_0 * this->ComboBoxOwnerDraw_field_0x04; /*0x600676*/
}



// ==== 0x00600680  ComboBoxOwnerDraw::MatchDimensions  this=ComboBoxOwnerDraw  sig=csp ====
bool __thiscall ComboBoxOwnerDraw::MatchDimensions(ComboBoxOwnerDraw *this, _DWORD *a2)
{
  return a2[1] == this->ComboBoxOwnerDraw_field_0x04 && *a2 == *(_DWORD *)this->__pad_0; /*0x60068d*/
}



// ==== 0x006006B0  sub_6006B0  this=-  sig=ida-proto ====
int sub_6006B0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x6006b0*/
  dbl_AC1B68 = 0.2; /*0x6006b7*/
  dbl_AC1B70 = 0.8; /*0x6006cb*/
  dword_AC1B78 = 128; /*0x6006df*/
  v1 = 0; /*0x6006e4*/
  do /*0x6006e9*/
  {
    ++v1; /*0x6006e6*/
    v0 >>= 1; /*0x6006e7*/
  }
  while ( v0 ); /*0x6006e9*/
  dword_AC1B58 = 0; /*0x6006eb*/
  dword_AC1B54 = v1 - 1; /*0x6006f9*/
  dword_AC1B4C = 0; /*0x6006ff*/
  byte_AC1B5C = 0; /*0x600705*/
  dword_AC1B50 = 1 << (v1 - 1); /*0x60070b*/
  dword_AC1B48 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x600723*/
  memset(dword_AC1B48, 0, 4 * dword_AC1B50); /*0x600729*/
  dword_AC1B60 = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600730*/
  return atexit(sub_600750); /*0x600742*/
}



// ==== 0x00600750  sub_600750  this=-  sig=ida-proto ====
void __cdecl sub_600750()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_AC1B50; /*0x600750*/
  for ( i = 0; i < dword_AC1B50; v0 = dword_AC1B50 ) /*0x60075d*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_AC1B48 + i); /*0x600764*/
    while ( v2 ) /*0x600769*/
    {
      v3 = v2; /*0x60076b*/
      v2 = (_DWORD *)v2[2]; /*0x60076d*/
      __3_YAXPAX_Z(v3); /*0x600771*/
    }
    *((_DWORD *)dword_AC1B48 + i++) = 0; /*0x600784*/
  }
  v4 = dword_AC1B78; /*0x600795*/
  dword_AC1B4C = 0; /*0x60079b*/
  if ( v0 > dword_AC1B78 ) /*0x6007a7*/
  {
    do /*0x60085a*/
    {
      if ( byte_AC1B5C || v0 <= v4 ) /*0x6007bd*/
        break; /*0x6007bd*/
      v5 = (int *)dword_AC1B48; /*0x6007c9*/
      v6 = v0; /*0x6007cf*/
      dword_AC1B50 = v0 >> 1; /*0x6007d4*/
      --dword_AC1B54; /*0x6007e0*/
      dword_AC1B48 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6007f9*/
      memset(dword_AC1B48, 0, 4 * dword_AC1B50); /*0x600801*/
      if ( v6 > 0 ) /*0x600803*/
      {
        v7 = v5; /*0x600805*/
        v8 = v6; /*0x600807*/
        do /*0x600842*/
        {
          v9 = *v7; /*0x600809*/
          if ( *v7 ) /*0x600809*/
          {
            do /*0x60083c*/
            {
              v10 = dword_AC1B60(v9) & ((1 << dword_AC1B54) - 1); /*0x600825*/
              v11 = *((_DWORD *)dword_AC1B48 + v10); /*0x60082c*/
              *((_DWORD *)dword_AC1B48 + v10) = v9; /*0x60082f*/
              v12 = *(_DWORD *)(v9 + 8); /*0x600832*/
              *(_DWORD *)(v9 + 8) = v11; /*0x600835*/
              v9 = v12; /*0x60083a*/
            }
            while ( v12 ); /*0x60083c*/
          }
          ++v7; /*0x60083e*/
          --v8; /*0x600841*/
        }
        while ( v8 ); /*0x600842*/
      }
      __3_YAXPAX_Z(v5); /*0x600845*/
      v4 = dword_AC1B78; /*0x60084a*/
      v0 = dword_AC1B50; /*0x600850*/
    }
    while ( dword_AC1B50 > (unsigned int)dword_AC1B78 ); /*0x60085a*/
  }
  __3_YAXPAX_Z(dword_AC1B48); /*0x600866*/
}



// ==== 0x00600880  sub_600880  this=-  sig=ida-proto ====
int sub_600880()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600880*/
  dbl_AC18E0 = 0.2; /*0x600887*/
  dbl_AC18E8 = 0.8; /*0x60089b*/
  dword_AC18F0 = 128; /*0x6008af*/
  v1 = 0; /*0x6008b4*/
  do /*0x6008b9*/
  {
    ++v1; /*0x6008b6*/
    v0 >>= 1; /*0x6008b7*/
  }
  while ( v0 ); /*0x6008b9*/
  dword_AC18D0 = 0; /*0x6008bb*/
  dword_AC18CC = v1 - 1; /*0x6008c9*/
  unk_AC18C4 = 0; /*0x6008cf*/
  byte_AC18D4 = 0; /*0x6008d5*/
  dword_AC18C8 = 1 << (v1 - 1); /*0x6008db*/
  g_DialogPool = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x6008f3*/
  memset(g_DialogPool, 0, 4 * dword_AC18C8); /*0x6008f9*/
  dword_AC18D8 = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600900*/
  return atexit(sub_600920); /*0x600912*/
}



// ==== 0x00600920  sub_600920  this=-  sig=ida-proto ====
void __cdecl sub_600920()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_AC18C8; /*0x600920*/
  for ( i = 0; i < dword_AC18C8; v0 = dword_AC18C8 ) /*0x60092d*/
  {
    v2 = (_DWORD *)*((_DWORD *)g_DialogPool + i); /*0x600934*/
    while ( v2 ) /*0x600939*/
    {
      v3 = v2; /*0x60093b*/
      v2 = (_DWORD *)v2[2]; /*0x60093d*/
      __3_YAXPAX_Z(v3); /*0x600941*/
    }
    *((_DWORD *)g_DialogPool + i++) = 0; /*0x600954*/
  }
  v4 = dword_AC18F0; /*0x600965*/
  unk_AC18C4 = 0; /*0x60096b*/
  if ( v0 > dword_AC18F0 ) /*0x600977*/
  {
    do /*0x600a2a*/
    {
      if ( byte_AC18D4 || v0 <= v4 ) /*0x60098d*/
        break; /*0x60098d*/
      v5 = (int *)g_DialogPool; /*0x600999*/
      v6 = v0; /*0x60099f*/
      dword_AC18C8 = v0 >> 1; /*0x6009a4*/
      --dword_AC18CC; /*0x6009b0*/
      g_DialogPool = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6009c9*/
      memset(g_DialogPool, 0, 4 * dword_AC18C8); /*0x6009d1*/
      if ( v6 > 0 ) /*0x6009d3*/
      {
        v7 = v5; /*0x6009d5*/
        v8 = v6; /*0x6009d7*/
        do /*0x600a12*/
        {
          v9 = *v7; /*0x6009d9*/
          if ( *v7 ) /*0x6009d9*/
          {
            do /*0x600a0c*/
            {
              v10 = dword_AC18D8(v9) & ((1 << dword_AC18CC) - 1); /*0x6009f5*/
              v11 = *((_DWORD *)g_DialogPool + v10); /*0x6009fc*/
              *((_DWORD *)g_DialogPool + v10) = v9; /*0x6009ff*/
              v12 = *(_DWORD *)(v9 + 8); /*0x600a02*/
              *(_DWORD *)(v9 + 8) = v11; /*0x600a05*/
              v9 = v12; /*0x600a0a*/
            }
            while ( v12 ); /*0x600a0c*/
          }
          ++v7; /*0x600a0e*/
          --v8; /*0x600a11*/
        }
        while ( v8 ); /*0x600a12*/
      }
      __3_YAXPAX_Z(v5); /*0x600a15*/
      v4 = dword_AC18F0; /*0x600a1a*/
      v0 = dword_AC18C8; /*0x600a20*/
    }
    while ( dword_AC18C8 > (unsigned int)dword_AC18F0 ); /*0x600a2a*/
  }
  __3_YAXPAX_Z(g_DialogPool); /*0x600a36*/
}



// ==== 0x00600A50  sub_600A50  this=-  sig=ida-proto ====
int sub_600A50()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600a50*/
  dbl_AC1B20 = 0.2; /*0x600a57*/
  dbl_AC1B28 = 0.8; /*0x600a6b*/
  dword_AC1B30 = 128; /*0x600a7f*/
  v1 = 0; /*0x600a84*/
  do /*0x600a89*/
  {
    ++v1; /*0x600a86*/
    v0 >>= 1; /*0x600a87*/
  }
  while ( v0 ); /*0x600a89*/
  dword_AC1B10 = 0; /*0x600a8b*/
  dword_AC1B0C = v1 - 1; /*0x600a99*/
  dword_AC1B04 = 0; /*0x600a9f*/
  byte_AC1B14 = 0; /*0x600aa5*/
  dword_AC1B08 = 1 << (v1 - 1); /*0x600aab*/
  dword_AC1B00 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x600ac3*/
  memset(dword_AC1B00, 0, 4 * dword_AC1B08); /*0x600ac9*/
  dword_AC1B18 = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600ad0*/
  return atexit(sub_600AF0); /*0x600ae2*/
}



// ==== 0x00600AF0  sub_600AF0  this=-  sig=ida-proto ====
void __cdecl sub_600AF0()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  int j; // ebp
  int v3; // edi
  _DWORD *k; // eax
  void **v5; // ecx
  unsigned int v6; // ecx
  int *v7; // ebp
  int v8; // esi
  int *v9; // edi
  int v10; // ebx
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int i; // [esp+10h] [ebp-4h]

  v0 = dword_AC1B08; /*0x600af1*/
  v1 = 0; /*0x600afa*/
  for ( i = 0; v1 < dword_AC1B08; v0 = dword_AC1B08 ) /*0x600b04*/
  {
    for ( j = *((_DWORD *)dword_AC1B00 + v1); j; v1 = i ) /*0x600b10*/
    {
      v3 = j; /*0x600b12*/
      j = *(_DWORD *)(j + 516); /*0x600b14*/
      if ( *(_DWORD *)(v3 + 44) ) /*0x600b1e*/
      {
        __3_YAXPAX_Z(*(void **)(v3 + 44)); /*0x600b29*/
        *(_DWORD *)(v3 + 44) = 0; /*0x600b31*/
      }
      for ( k = *(_DWORD **)(v3 + 56); k; k = *(_DWORD **)(v3 + 56) ) /*0x600b39*/
        LinkedList::Remove((_DWORD *)(v3 + 4), k); /*0x600b3e*/
      v5 = *(void ***)(v3 + 64); /*0x600b4a*/
      if ( v5 ) /*0x600b4f*/
        DeleteAndZero::OrFree(v5, 1); /*0x600b53*/
      __3_YAXPAX_Z((void *)v3); /*0x600b59*/
    }
    i = ++v1; /*0x600b70*/
    *((_DWORD *)dword_AC1B00 + v1 - 1) = 0; /*0x600b74*/
  }
  v6 = dword_AC1B30; /*0x600b81*/
  dword_AC1B04 = 0; /*0x600b87*/
  if ( v0 > dword_AC1B30 ) /*0x600b8f*/
  {
    do /*0x600c46*/
    {
      if ( byte_AC1B14 || v0 <= v6 ) /*0x600ba5*/
        break; /*0x600ba5*/
      v7 = (int *)dword_AC1B00; /*0x600bb1*/
      v8 = v0; /*0x600bb7*/
      dword_AC1B08 = v0 >> 1; /*0x600bbb*/
      --dword_AC1B0C; /*0x600bc5*/
      dword_AC1B00 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x600bdd*/
      memset(dword_AC1B00, 0, 4 * dword_AC1B08); /*0x600be5*/
      if ( v8 > 0 ) /*0x600be7*/
      {
        v9 = v7; /*0x600be9*/
        v10 = v8; /*0x600beb*/
        do /*0x600c2c*/
        {
          v11 = *v9; /*0x600bed*/
          if ( *v9 ) /*0x600bed*/
          {
            do /*0x600c26*/
            {
              v12 = dword_AC1B18(v11) & ((1 << dword_AC1B0C) - 1); /*0x600c09*/
              v13 = *((_DWORD *)dword_AC1B00 + v12); /*0x600c10*/
              *((_DWORD *)dword_AC1B00 + v12) = v11; /*0x600c13*/
              v14 = *(_DWORD *)(v11 + 516); /*0x600c16*/
              *(_DWORD *)(v11 + 516) = v13; /*0x600c1c*/
              v11 = v14; /*0x600c24*/
            }
            while ( v14 ); /*0x600c26*/
          }
          ++v9; /*0x600c28*/
          --v10; /*0x600c2b*/
        }
        while ( v10 ); /*0x600c2c*/
      }
      __3_YAXPAX_Z(v7); /*0x600c31*/
      v6 = dword_AC1B30; /*0x600c36*/
      v0 = dword_AC1B08; /*0x600c3c*/
    }
    while ( dword_AC1B08 > (unsigned int)dword_AC1B30 ); /*0x600c46*/
  }
  __3_YAXPAX_Z(dword_AC1B00); /*0x600c53*/
}



// ==== 0x00600C70  NavigateDialogTab  this=ObjectClass  sig=csp ====
int __fastcall NavigateDialogTab(HWND hCtl, unsigned __int8 a2)
{
  HWND Parent; // eax
  int result; // eax

  Parent = GetParent(hCtl); /*0x600c77*/
  result = (int)GetNextDlgTabItem(Parent, hCtl, a2); /*0x600c86*/
  if ( (HWND)result == hCtl ) /*0x600c90*/
  {
    LOBYTE(result) = 0; /*0x600c9c*/
  }
  else
  {
    result = (int)SetFocus((HWND)result); /*0x600c93*/
    LOBYTE(result) = 1; /*0x600c99*/
  }
  return result; /*0x600c8e*/
}



// ==== 0x00600CA0  ValidateDialogEvent  this=-  sig=csp ====
int __fastcall Dialog_ValidateEvent(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x600cac*/
  if ( !dword_AC1B04 ) /*0x600cb0*/
    goto LABEL_5; /*0x600cb0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x600cd1*/
  if ( !v3 ) /*0x600cd6*/
    goto LABEL_5; /*0x600cd6*/
  while ( *v3 != v8 ) /*0x600cde*/
  {
    v3 = (_DWORD *)v3[129]; /*0x600ce4*/
    if ( !v3 ) /*0x600cec*/
      goto LABEL_5; /*0x600cec*/
  }
  v7 = v3 + 1; /*0x600f18*/
  if ( v7 ) /*0x600f1d*/
    v4 = (void *)v7[27]; /*0x600f23*/
  else
LABEL_5:
    v4 = 0; /*0x600cee*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x600cf1*/
  if ( (v4 == (void *)268 /*0x600f05*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || v4 == (void *)293
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)276
     || v4 == (void *)700
     || v4 == (void *)275
     || v4 == (void *)265
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)270
     || v4 == (void *)274)
    && DlgCtrlID == 1684 )
  {
    return 30; /*0x600f0f*/
  }
  if ( (v4 == (void *)188 /*0x600f69*/
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 30; /*0x600f69*/
  }
  if ( v4 != (void *)259 && v4 != (void *)3015 ) /*0x600f82*/
    goto LABEL_102; /*0x600f82*/
  if ( DlgCtrlID != 1780 ) /*0x600f8e*/
  {
    if ( DlgCtrlID == 1779 /*0x601026*/
      || DlgCtrlID == 1695
      || DlgCtrlID == 1782
      || DlgCtrlID == 1775
      || DlgCtrlID == 1777
      || DlgCtrlID == 1776
      || DlgCtrlID == 1778
      || DlgCtrlID == 1852
      || DlgCtrlID == 1853
      || DlgCtrlID == 1854
      || DlgCtrlID == 1855
      || DlgCtrlID == 1856
      || DlgCtrlID == 1845
      || DlgCtrlID == 1842
      || DlgCtrlID == 1002
      || DlgCtrlID == 1843 )
    {
      return 30; /*0x601026*/
    }
    if ( DlgCtrlID == 1041 /*0x60109a*/
      || DlgCtrlID == 1042
      || DlgCtrlID == 1049
      || DlgCtrlID == 1050
      || DlgCtrlID == 1699
      || DlgCtrlID == 1700
      || DlgCtrlID == 1701
      || DlgCtrlID == 1703
      || DlgCtrlID == 1702
      || DlgCtrlID == 1704
      || DlgCtrlID == 1850
      || DlgCtrlID == 1849
      || DlgCtrlID == 1851
      || DlgCtrlID == 1848 )
    {
      return 60; /*0x6010a4*/
    }
LABEL_102:
    if ( v4 != (void *)264 && v4 != (void *)3014 ) /*0x6010b3*/
    {
LABEL_164:
      Event::IsValidActionType(v4); /*0x601346*/
      return 15; /*0x601348*/
    }
    if ( DlgCtrlID != 1746 /*0x601197*/
      && DlgCtrlID != 1002
      && DlgCtrlID != 1843
      && DlgCtrlID != 1819
      && DlgCtrlID != 1842
      && DlgCtrlID != 1693
      && DlgCtrlID != 1695
      && DlgCtrlID != 1694
      && DlgCtrlID != 1696
      && DlgCtrlID != 1931
      && DlgCtrlID != 1480
      && DlgCtrlID != 1041
      && DlgCtrlID != 1042
      && DlgCtrlID != 1043
      && DlgCtrlID != 1044
      && DlgCtrlID != 1045
      && DlgCtrlID != 1046
      && DlgCtrlID != 1047
      && DlgCtrlID != 1048 )
    {
      if ( DlgCtrlID == 1049 /*0x60133b*/
        || DlgCtrlID == 1050
        || DlgCtrlID == 1051
        || DlgCtrlID == 1052
        || DlgCtrlID == 1053
        || DlgCtrlID == 1054
        || DlgCtrlID == 1055
        || DlgCtrlID == 1056
        || DlgCtrlID == 1699
        || DlgCtrlID == 1700
        || DlgCtrlID == 1705
        || DlgCtrlID == 1708
        || DlgCtrlID == 1711
        || DlgCtrlID == 1714
        || DlgCtrlID == 1717
        || DlgCtrlID == 1720
        || DlgCtrlID == 1701
        || DlgCtrlID == 1703
        || DlgCtrlID == 1706
        || DlgCtrlID == 1709
        || DlgCtrlID == 1712
        || DlgCtrlID == 1715
        || DlgCtrlID == 1718
        || DlgCtrlID == 1721
        || DlgCtrlID == 1702
        || DlgCtrlID == 1704
        || DlgCtrlID == 1707
        || DlgCtrlID == 1710
        || DlgCtrlID == 1713
        || DlgCtrlID == 1716
        || DlgCtrlID == 1719
        || DlgCtrlID == 1722
        || DlgCtrlID == 1802
        || DlgCtrlID == 1803
        || DlgCtrlID == 1804
        || DlgCtrlID == 1805
        || DlgCtrlID == 1806
        || DlgCtrlID == 1807
        || DlgCtrlID == 1808
        || DlgCtrlID == 1809 )
      {
        return 60; /*0x601345*/
      }
      goto LABEL_164; /*0x60133b*/
    }
    return 30; /*0x600f73*/
  }
  return 15; /*0x600f07*/
}



// ==== 0x00601360  Event::IsValidActionType  this=Dialog  sig=csp ====
int __thiscall Event::IsValidActionType(Event *this)
{
  int result; // eax

  LOBYTE(result) = this == (Event *)268 /*0x6015d5*/
                || this == (Event *)148
                || this == (Event *)182
                || this == (Event *)163
                || this == (Event *)115
                || this == (Event *)216
                || this == (Event *)3003
                || this == (Event *)245
                || this == (Event *)261
                || this == (Event *)226
                || this == (Event *)213
                || this == (Event *)693
                || this == (Event *)183
                || this == (Event *)692
                || this == (Event *)257
                || this == (Event *)297
                || this == (Event *)3015
                || this == (Event *)3014
                || this == (Event *)215
                || this == (Event *)264
                || this == (Event *)188
                || this == (Event *)189
                || this == (Event *)187
                || this == (Event *)181
                || this == (Event *)3002
                || this == (Event *)255
                || this == (Event *)234
                || this == (Event *)107
                || this == (Event *)256
                || this == (Event *)258
                || this == (Event *)184
                || this == (Event *)214
                || this == (Event *)259
                || this == (Event *)287
                || this == (Event *)293
                || this == (Event *)277
                || this == (Event *)290
                || this == (Event *)274
                || this == (Event *)231
                || this == (Event *)278
                || this == (Event *)194
                || this == (Event *)201
                || this == (Event *)285
                || this == (Event *)284
                || this == (Event *)275
                || this == (Event *)254
                || this == (Event *)265
                || this == (Event *)271
                || this == (Event *)279
                || this == (Event *)276
                || this == (Event *)195
                || this == (Event *)292
                || this == (Event *)230
                || this == (Event *)243
                || this == (Event *)244
                || this == (Event *)700
                || this == (Event *)283
                || this == (Event *)270;
  return result; /*0x6015d4*/
}



// ==== 0x006015E0  CtlDialogColorHandler  this=-  sig=csp ====
int __fastcall Dialog_CtlColorHandler(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  int result; // eax
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6015ec*/
  if ( !dword_AC1B04 ) /*0x6015f0*/
    goto LABEL_5; /*0x6015f0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x601611*/
  if ( !v3 ) /*0x601616*/
    goto LABEL_5; /*0x601616*/
  while ( *v3 != v9 ) /*0x60161e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x601624*/
    if ( !v3 ) /*0x60162c*/
      goto LABEL_5; /*0x60162c*/
  }
  v8 = v3 + 1; /*0x6018c0*/
  if ( v8 ) /*0x6018c5*/
    v4 = (void *)v8[27]; /*0x6018cb*/
  else
LABEL_5:
    v4 = 0; /*0x60162e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x601631*/
  v6 = DlgCtrlID; /*0x60163d*/
  if ( (v4 == (void *)268 /*0x60188d*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || v4 == (void *)293
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)276
     || v4 == (void *)700
     || v4 == (void *)275
     || v4 == (void *)265
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)270
     || v4 == (void *)274)
    && DlgCtrlID == 1684
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 1; /*0x60188d*/
  }
  if ( v4 == (void *)259 || v4 == (void *)3015 ) /*0x6018a1*/
  {
    if ( DlgCtrlID == 1780 ) /*0x6018ad*/
      return 3; /*0x6018b7*/
    if ( DlgCtrlID == 1779 /*0x601a4d*/
      || DlgCtrlID == 1695
      || DlgCtrlID == 1782
      || DlgCtrlID == 1775
      || DlgCtrlID == 1777
      || DlgCtrlID == 1776
      || DlgCtrlID == 1778
      || DlgCtrlID == 1843
      || DlgCtrlID == 1845
      || DlgCtrlID == 1842
      || DlgCtrlID == 1002
      || DlgCtrlID == 1852
      || DlgCtrlID == 1853
      || DlgCtrlID == 1854
      || DlgCtrlID == 1855
      || DlgCtrlID == 1856
      || DlgCtrlID == 1846
      || DlgCtrlID == 1847
      || DlgCtrlID == 1041
      || DlgCtrlID == 1042
      || DlgCtrlID == 1049
      || DlgCtrlID == 1050
      || DlgCtrlID == 1699
      || DlgCtrlID == 1700
      || DlgCtrlID == 1701
      || DlgCtrlID == 1703
      || DlgCtrlID == 1702
      || DlgCtrlID == 1704
      || DlgCtrlID == 1850
      || DlgCtrlID == 1849
      || DlgCtrlID == 1851
      || DlgCtrlID == 1848 )
    {
      return 1; /*0x601a4d*/
    }
  }
  if ( (v4 == (void *)264 || v4 == (void *)3014) /*0x601cf5*/
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1843
     || DlgCtrlID == 1819
     || DlgCtrlID == 1842
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809) )
  {
    return 1; /*0x601cf5*/
  }
  if ( !Event::IsValidActionType(v4) ) /*0x601cf9*/
    return 1; /*0x601cf9*/
  result = 3; /*0x601d08*/
  if ( v6 != 1685 ) /*0x601d0d*/
    return 1; /*0x601d0f*/
  return result; /*0x6018af*/
}



// ==== 0x00601D20  ValidateDialogControl  this=-  sig=csp ====
int __fastcall Dialog_ValidateControl(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x601d2c*/
  if ( !dword_AC1B04 ) /*0x601d30*/
    goto LABEL_5; /*0x601d30*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x601d51*/
  if ( !v3 ) /*0x601d56*/
    goto LABEL_5; /*0x601d56*/
  while ( *v3 != v9 ) /*0x601d5e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x601d64*/
    if ( !v3 ) /*0x601d6c*/
      goto LABEL_5; /*0x601d6c*/
  }
  v8 = v3 + 1; /*0x602000*/
  if ( v8 ) /*0x602005*/
    v4 = (void *)v8[27]; /*0x60200b*/
  else
LABEL_5:
    v4 = 0; /*0x601d6e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x601d71*/
  v6 = DlgCtrlID; /*0x601d7d*/
  if ( (v4 != (void *)268 /*0x601fcd*/
     && v4 != (void *)148
     && v4 != (void *)163
     && v4 != (void *)115
     && v4 != (void *)216
     && v4 != (void *)3003
     && v4 != (void *)245
     && v4 != (void *)261
     && v4 != (void *)226
     && v4 != (void *)213
     && v4 != (void *)693
     && v4 != (void *)183
     && v4 != (void *)692
     && v4 != (void *)3015
     && v4 != (void *)257
     && v4 != (void *)297
     && v4 != (void *)3014
     && v4 != (void *)215
     && v4 != (void *)264
     && v4 != (void *)188
     && v4 != (void *)189
     && v4 != (void *)187
     && v4 != (void *)181
     && v4 != (void *)3002
     && v4 != (void *)255
     && v4 != (void *)107
     && v4 != (void *)256
     && v4 != (void *)258
     && v4 != (void *)184
     && v4 != (void *)214
     && v4 != (void *)259
     && v4 != (void *)293
     && v4 != (void *)231
     && v4 != (void *)278
     && v4 != (void *)194
     && v4 != (void *)201
     && v4 != (void *)285
     && v4 != (void *)284
     && v4 != (void *)276
     && v4 != (void *)700
     && v4 != (void *)275
     && v4 != (void *)265
     && v4 != (void *)271
     && v4 != (void *)279
     && v4 != (void *)230
     && v4 != (void *)243
     && v4 != (void *)244
     && v4 != (void *)270
     && v4 != (void *)274
     || DlgCtrlID != 1684)
    && (v4 != (void *)188
     && v4 != (void *)189
     && v4 != (void *)258
     && v4 != (void *)194
     && v4 != (void *)201
     && v4 != (void *)3014
     || DlgCtrlID != 1772 && DlgCtrlID != 1448) )
  {
    if ( v4 == (void *)259 || v4 == (void *)3015 ) /*0x601fe1*/
    {
      switch ( DlgCtrlID ) /*0x601fed*/
      {
        case 1780: /*0x601fed*/
          return 16; /*0x601ff7*/
        case 1779: /*0x601fed*/
        case 1695: /*0x601fed*/
        case 1782: /*0x601fed*/
        case 1775: /*0x601fed*/
        case 1777: /*0x601fed*/
        case 1776: /*0x601fed*/
        case 1778: /*0x601fed*/
        case 1843: /*0x601fed*/
        case 1845: /*0x601fed*/
        case 1842: /*0x601fed*/
        case 1002: /*0x601fed*/
          return 8; /*0x602091*/
        case 1852: /*0x601fed*/
        case 1853: /*0x601fed*/
        case 1854: /*0x601fed*/
        case 1855: /*0x601fed*/
        case 1856: /*0x601fed*/
          return 16; /*0x6023d8*/
        case 1041: /*0x601fed*/
        case 1042: /*0x601fed*/
        case 1049: /*0x601fed*/
        case 1050: /*0x601fed*/
        case 1699: /*0x601fed*/
        case 1700: /*0x601fed*/
        case 1701: /*0x601fed*/
        case 1703: /*0x601fed*/
        case 1702: /*0x601fed*/
        case 1704: /*0x601fed*/
        case 1850: /*0x601fed*/
        case 1849: /*0x601fed*/
        case 1851: /*0x601fed*/
        case 1848: /*0x601fed*/
          return 32; /*0x602141*/
      }
    }
    if ( v4 == (void *)264 || v4 == (void *)3014 ) /*0x60215a*/
    {
      if ( DlgCtrlID == 1746 /*0x60220e*/
        || DlgCtrlID == 1002
        || DlgCtrlID == 1843
        || DlgCtrlID == 1819
        || DlgCtrlID == 1842
        || DlgCtrlID == 1693
        || DlgCtrlID == 1695
        || DlgCtrlID == 1694
        || DlgCtrlID == 1696
        || DlgCtrlID == 1931
        || DlgCtrlID == 1480
        || DlgCtrlID == 1041
        || DlgCtrlID == 1042
        || DlgCtrlID == 1043
        || DlgCtrlID == 1044
        || DlgCtrlID == 1045
        || DlgCtrlID == 1046
        || DlgCtrlID == 1047
        || DlgCtrlID == 1048 )
      {
        return 32; /*0x60214b*/
      }
      if ( DlgCtrlID == 1049 /*0x6023b2*/
        || DlgCtrlID == 1050
        || DlgCtrlID == 1051
        || DlgCtrlID == 1052
        || DlgCtrlID == 1053
        || DlgCtrlID == 1054
        || DlgCtrlID == 1055
        || DlgCtrlID == 1056
        || DlgCtrlID == 1699
        || DlgCtrlID == 1700
        || DlgCtrlID == 1705
        || DlgCtrlID == 1708
        || DlgCtrlID == 1711
        || DlgCtrlID == 1714
        || DlgCtrlID == 1717
        || DlgCtrlID == 1720
        || DlgCtrlID == 1701
        || DlgCtrlID == 1703
        || DlgCtrlID == 1706
        || DlgCtrlID == 1709
        || DlgCtrlID == 1712
        || DlgCtrlID == 1715
        || DlgCtrlID == 1718
        || DlgCtrlID == 1721
        || DlgCtrlID == 1702
        || DlgCtrlID == 1704
        || DlgCtrlID == 1707
        || DlgCtrlID == 1710
        || DlgCtrlID == 1713
        || DlgCtrlID == 1716
        || DlgCtrlID == 1719
        || DlgCtrlID == 1722
        || DlgCtrlID == 1802
        || DlgCtrlID == 1803
        || DlgCtrlID == 1804
        || DlgCtrlID == 1805
        || DlgCtrlID == 1806
        || DlgCtrlID == 1807
        || DlgCtrlID == 1808
        || DlgCtrlID == 1809 )
      {
        return 64; /*0x6023bc*/
      }
    }
    if ( Event::IsValidActionType(v4) && v6 == 1685 ) /*0x6023ce*/
      return 16; /*0x6023ce*/
  }
  return 8; /*0x601fef*/
}



// ==== 0x006023F0  sub_6023F0  this=-  sig=ida-proto ====
int __fastcall sub_6023F0(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x6023fc*/
  if ( !dword_AC1B04 ) /*0x602400*/
    goto LABEL_5; /*0x602400*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x602421*/
  if ( !v3 ) /*0x602426*/
    goto LABEL_5; /*0x602426*/
  while ( *v3 != v8 ) /*0x60242e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602430*/
    if ( !v3 ) /*0x602438*/
      goto LABEL_5; /*0x602438*/
  }
  v7 = v3 + 1; /*0x60246e*/
  if ( v7 ) /*0x602473*/
    v4 = v7[27]; /*0x602475*/
  else
LABEL_5:
    v4 = 0; /*0x60243a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60243d*/
  if ( (v4 == 259 || v4 == 3015) && DlgCtrlID == 1780 ) /*0x602458*/
    return HIDWORD(dword_8871E0->GenericClick); /*0x602462*/
  else
    return -1; /*0x60247b*/
}



// ==== 0x00602490  IsValidActionDialog  this=-  sig=csp ====
bool __fastcall sub_602490(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // esi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60249c*/
  if ( !dword_AC1B04 ) /*0x6024a0*/
    goto LABEL_5; /*0x6024a0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x6024c1*/
  if ( !v3 ) /*0x6024c6*/
    goto LABEL_5; /*0x6024c6*/
  while ( *v3 != v8 ) /*0x6024ce*/
  {
    v3 = (_DWORD *)v3[129]; /*0x6024d4*/
    if ( !v3 ) /*0x6024dc*/
      goto LABEL_5; /*0x6024dc*/
  }
  v7 = v3 + 1; /*0x60263c*/
  if ( v7 ) /*0x602641*/
    v4 = (void *)v7[27]; /*0x602647*/
  else
LABEL_5:
    v4 = 0; /*0x6024de*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x6024ed*/
  if ( (v4 == (void *)268 /*0x60262c*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || Dialog::IsSpecialTemplate(v4))
    && DlgCtrlID == 1684 )
  {
    return 1; /*0x60262f*/
  }
  if ( (v4 == (void *)188 /*0x60268d*/
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 1; /*0x602690*/
  }
  if ( (v4 == (void *)259 || v4 == (void *)3015) /*0x6027f3*/
    && (DlgCtrlID == 1779
     || DlgCtrlID == 1780
     || DlgCtrlID == 1695
     || DlgCtrlID == 1782
     || DlgCtrlID == 1775
     || DlgCtrlID == 1777
     || DlgCtrlID == 1776
     || DlgCtrlID == 1778
     || DlgCtrlID == 1843
     || DlgCtrlID == 1845
     || DlgCtrlID == 1842
     || DlgCtrlID == 1002
     || DlgCtrlID == 1846
     || DlgCtrlID == 1847
     || DlgCtrlID == 1852
     || DlgCtrlID == 1853
     || DlgCtrlID == 1854
     || DlgCtrlID == 1855
     || DlgCtrlID == 1856
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1850
     || DlgCtrlID == 1849
     || DlgCtrlID == 1851
     || DlgCtrlID == 1848) )
  {
    return 1; /*0x6027f6*/
  }
  if ( (v4 == (void *)264 || v4 == (void *)3014) /*0x602a9d*/
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809
     || DlgCtrlID == 1843
     || DlgCtrlID == 1842
     || DlgCtrlID == 1819
     || DlgCtrlID == 1845) )
  {
    return 1; /*0x602aa0*/
  }
  return Event::IsValidActionType(v4) && DlgCtrlID == 1685 && !SessionClass::GetGameSpeed(dword_A8B238); /*0x60262e*/
}



// ==== 0x00602AE0  Dialog::IsSpecialTemplate  this=Dialog  sig=csp ====
int __thiscall Dialog::IsSpecialTemplate(Dialog *this)
{
  return this == (Dialog *)293 /*0x602b7a*/
      || this == (Dialog *)231
      || this == (Dialog *)278
      || this == (Dialog *)194
      || this == (Dialog *)201
      || this == (Dialog *)285
      || this == (Dialog *)284
      || this == (Dialog *)276
      || this == (Dialog *)700
      || this == (Dialog *)275
      || this == (Dialog *)265
      || this == (Dialog *)271
      || this == (Dialog *)279
      || this == (Dialog *)230
      || this == (Dialog *)243
      || this == (Dialog *)244
      || this == (Dialog *)270
      || this == (Dialog *)274;
}



// ==== 0x00602B90  UI_Helper_602B90  this=-  sig=csp ====
bool __fastcall sub_602B90(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602b9c*/
  if ( !dword_AC1B04 ) /*0x602ba0*/
    goto LABEL_5; /*0x602ba0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x602bc1*/
  if ( !v3 ) /*0x602bc6*/
    goto LABEL_5; /*0x602bc6*/
  while ( *v3 != v8 ) /*0x602bce*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602bd4*/
    if ( !v3 ) /*0x602bdc*/
      goto LABEL_5; /*0x602bdc*/
  }
  v7 = v3 + 1; /*0x602d4f*/
  if ( v7 ) /*0x602d54*/
    v4 = v7[27]; /*0x602d5a*/
  else
LABEL_5:
    v4 = 0; /*0x602bde*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x602be1*/
  return (v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201 || v4 == 3014) /*0x602d41*/
      && (DlgCtrlID == 1746
       || DlgCtrlID == 1747
       || DlgCtrlID == 1748
       || DlgCtrlID == 1749
       || DlgCtrlID == 1750
       || DlgCtrlID == 1751
       || DlgCtrlID == 1752
       || DlgCtrlID == 1753)
      || (v4 == 258 || v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201)
      && (DlgCtrlID == 1754
       || DlgCtrlID == 1755
       || DlgCtrlID == 1756
       || DlgCtrlID == 1757
       || DlgCtrlID == 1758
       || DlgCtrlID == 1759
       || DlgCtrlID == 1760
       || DlgCtrlID == 1761)
      || (v4 == 194 || v4 == 201)
      && (DlgCtrlID == 1876
       || DlgCtrlID == 1877
       || DlgCtrlID == 1878
       || DlgCtrlID == 1879
       || DlgCtrlID == 1880
       || DlgCtrlID == 1881
       || DlgCtrlID == 1882
       || DlgCtrlID == 1883)
      || v4 == 3014 && (DlgCtrlID == 1919 || DlgCtrlID == 1755);
}



// ==== 0x00602DD0  IsDialogControlHidden  this=-  sig=ida-proto ====
char __fastcall IsDialogControlHidden(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602ddc*/
  if ( !dword_AC1B04 ) /*0x602de0*/
    goto LABEL_5; /*0x602de0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x602e01*/
  if ( !v3 ) /*0x602e06*/
    goto LABEL_5; /*0x602e06*/
  while ( *v3 != v8 ) /*0x602e0e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602e14*/
    if ( !v3 ) /*0x602e1c*/
      goto LABEL_5; /*0x602e1c*/
  }
  v7 = v3 + 1; /*0x602f64*/
  if ( v7 ) /*0x602f69*/
    v4 = v7[27]; /*0x602f6f*/
  else
LABEL_5:
    v4 = 0; /*0x602e1e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x602e21*/
  if ( (v4 == 148 /*0x602f54*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 1; /*0x602f5b*/
  }
  switch ( v4 ) /*0x602f7d*/
  {
    case 148: /*0x602f7d*/
      if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 || DlgCtrlID == 1771 ) /*0x602f92*/
        return 1; /*0x602f99*/
      break;
    case 259: /*0x602f7d*/
      if ( DlgCtrlID == 1835 ) /*0x602fa7*/
        return 1; /*0x602fae*/
      break;
    case 3015: /*0x602f7d*/
      if ( DlgCtrlID == 1835 ) /*0x602fbc*/
        return 1; /*0x602fc3*/
      break;
    default:
      if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x602fd1*/
        return 1; /*0x602fd8*/
      break;
  }
  return 0; /*0x602f56*/
}



// ==== 0x00603040  LoadCampaignMissionData  this=-  sig=ida-proto ====
int __fastcall sub_603040(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60304c*/
  if ( !dword_AC1B04 ) /*0x603050*/
    goto LABEL_5; /*0x603050*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x603071*/
  if ( !v3 ) /*0x603076*/
    goto LABEL_5; /*0x603076*/
  while ( *v3 != v8 ) /*0x60307e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603084*/
    if ( !v3 ) /*0x60308c*/
      goto LABEL_5; /*0x60308c*/
  }
  v7 = v3 + 1; /*0x6031d7*/
  if ( v7 ) /*0x6031dc*/
    v4 = v7[27]; /*0x6031e2*/
  else
LABEL_5:
    v4 = 0; /*0x60308e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603091*/
  if ( (v4 == 148 /*0x6031c4*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 37; /*0x6031c7*/
  }
  if ( (v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201 || v4 == 258 || v4 == 3014) /*0x603226*/
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 14; /*0x60322f*/
  }
  return 0; /*0x6031c6*/
}



// ==== 0x00603240  UI_Helper  this=-  sig=csp ====
BOOL __fastcall sub_603240(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60324c*/
  if ( !dword_AC1B04 ) /*0x603250*/
    goto LABEL_5; /*0x603250*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x603271*/
  if ( !v3 ) /*0x603276*/
    goto LABEL_5; /*0x603276*/
  while ( *v3 != v8 ) /*0x60327e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603284*/
    if ( !v3 ) /*0x60328c*/
      goto LABEL_5; /*0x60328c*/
  }
  v7 = v3 + 1; /*0x6033d7*/
  if ( v7 ) /*0x6033dc*/
    v4 = v7[27]; /*0x6033e2*/
  else
LABEL_5:
    v4 = 0; /*0x60328e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603291*/
  return (v4 == 148 /*0x6033c6*/
       || v4 == 216
       || v4 == 245
       || v4 == 226
       || v4 == 213
       || v4 == 257
       || v4 == 297
       || v4 == 215
       || v4 == 187
       || v4 == 256
       || v4 == 214
       || v4 == 293
       || v4 == 290
       || v4 == 274
       || v4 == 231
       || v4 == 278
       || v4 == 285
       || v4 == 284
       || v4 == 254
       || v4 == 271
       || v4 == 279
       || v4 == 276
       || v4 == 230
       || v4 == 243
       || v4 == 244
       || v4 == 700
       || v4 == 270
       || v4 == 264
       || v4 == 3014
       || v4 == 3015)
      && DlgCtrlID == 1820;
}



// ==== 0x006033F0  BinkMovie::HandleKeyboard  this=BinkMovie  sig=csp ====
int __fastcall BinkMovie::HandleKeyboard(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  bool v6; // zf
  _DWORD *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6033fc*/
  if ( !dword_AC1B04 ) /*0x603400*/
    goto LABEL_5; /*0x603400*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x603421*/
  if ( !v3 ) /*0x603426*/
    goto LABEL_5; /*0x603426*/
  while ( *v3 != v9 ) /*0x60342e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603434*/
    if ( !v3 ) /*0x60343c*/
      goto LABEL_5; /*0x60343c*/
  }
  v7 = v3 + 1; /*0x60359b*/
  if ( v7 ) /*0x6035a0*/
    v4 = v7[27]; /*0x6035a6*/
  else
LABEL_5:
    v4 = 0; /*0x60343e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603441*/
  if ( (v4 == 148 /*0x603574*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 100; /*0x603574*/
  }
  if ( v4 == 148 ) /*0x60357c*/
  {
    if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 ) /*0x60358a*/
      return 100; /*0x60358a*/
    v6 = DlgCtrlID == 1771; /*0x60358c*/
LABEL_46:
    if ( v6 ) /*0x6035c3*/
      return 100; /*0x6035cd*/
    return 0; /*0x6035c3*/
  }
  if ( v4 == 259 || v4 == 3015 ) /*0x6035bc*/
  {
    v6 = DlgCtrlID == 1835; /*0x6035be*/
    goto LABEL_46; /*0x6035be*/
  }
  if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x6035db*/
    return 50; /*0x6035e5*/
  return 0; /*0x6035c5*/
}



// ==== 0x006035F0  DispatchDialogControlAction  this=-  sig=csp ====
int __fastcall DispatchDialogControlAction(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // edi
  int v6; // ecx
  int result; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // [esp+8h] [ebp-4h] BYREF

  v10 = a1; /*0x6035fc*/
  if ( !dword_AC1B04 ) /*0x603600*/
    goto LABEL_5; /*0x603600*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v10) & ((1 << dword_AC1B0C) - 1))); /*0x603621*/
  if ( !v3 ) /*0x603626*/
    goto LABEL_5; /*0x603626*/
  while ( *v3 != v10 ) /*0x60362e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603634*/
    if ( !v3 ) /*0x60363c*/
      goto LABEL_5; /*0x60363c*/
  }
  v9 = v3 + 1; /*0x6037a4*/
  if ( v9 ) /*0x6037a9*/
    v4 = v9[27]; /*0x6037af*/
  else
LABEL_5:
    v4 = 0; /*0x60363e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603647*/
  result = VtableStub_72E280(v6); /*0x603649*/
  if ( (v4 == 148 /*0x60377c*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    result = UI_Helper_72E2A0(); /*0x60377e*/
  }
  if ( v4 == 148 ) /*0x603789*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603791*/
    {
      return UI_Helper_72DAC0(); /*0x603793*/
    }
    else if ( DlgCtrlID == 1772 ) /*0x6037bd*/
    {
      return UI_Helper_72DAD0(); /*0x6037bf*/
    }
  }
  else if ( v4 == 259 || v4 == 3015 ) /*0x6037d6*/
  {
    if ( DlgCtrlID == 1835 ) /*0x6037de*/
      return VtableStub_72D450(v8); /*0x6037e0*/
  }
  else if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x6037f7*/
  {
    return UI_Helper_72CC80(); /*0x6037f9*/
  }
  return result; /*0x603798*/
}



// ==== 0x00603870  GetDialogControlSHP  this=-  sig=csp ====
void *__fastcall GetDialogControlSHP(int a1, HWND a2, bool *a3)
{
  _DWORD *v4; // eax
  int v5; // esi
  int DlgCtrlID; // eax
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x60387c*/
  if ( !dword_AC1B04 ) /*0x603880*/
    goto LABEL_5; /*0x603880*/
  v4 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x6038a1*/
  if ( !v4 ) /*0x6038a6*/
    goto LABEL_5; /*0x6038a6*/
  while ( *v4 != v9 ) /*0x6038ae*/
  {
    v4 = (_DWORD *)v4[129]; /*0x6038b4*/
    if ( !v4 ) /*0x6038bc*/
      goto LABEL_5; /*0x6038bc*/
  }
  v8 = v4 + 1; /*0x603a13*/
  if ( v8 ) /*0x603a18*/
    v5 = v8[27]; /*0x603a1e*/
  else
LABEL_5:
    v5 = 0; /*0x6038be*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x6038c1*/
  if ( (v5 == 148 /*0x6039f4*/
     || v5 == 216
     || v5 == 245
     || v5 == 226
     || v5 == 213
     || v5 == 257
     || v5 == 297
     || v5 == 215
     || v5 == 187
     || v5 == 256
     || v5 == 214
     || v5 == 293
     || v5 == 290
     || v5 == 274
     || v5 == 231
     || v5 == 278
     || v5 == 285
     || v5 == 284
     || v5 == 254
     || v5 == 271
     || v5 == 279
     || v5 == 276
     || v5 == 230
     || v5 == 243
     || v5 == 244
     || v5 == 700
     || v5 == 270
     || v5 == 264
     || v5 == 3014
     || v5 == 3015)
    && DlgCtrlID == 1820 )
  {
    return LoadFileSHP(off_833674, a3); /*0x603a08*/
  }
  if ( v5 == 148 ) /*0x603a2c*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603a33*/
      return dword_B0FB48; /*0x603a3d*/
    if ( DlgCtrlID == 1772 ) /*0x603a45*/
      return dword_B0FB10; /*0x603a4f*/
  }
  else if ( v5 == 259 || v5 == 3015 ) /*0x603a60*/
  {
    if ( DlgCtrlID == 1835 ) /*0x603a67*/
      return dword_B0FB30; /*0x603a71*/
  }
  else if ( v5 == 196 && DlgCtrlID == 1961 ) /*0x603a81*/
  {
    return (void *)dword_B0FAD0; /*0x603a8b*/
  }
  return 0; /*0x603a05*/
}



// ==== 0x00603AA0  IsDialogWindowClass  this=-  sig=ida-proto ====
int __fastcall IsDialogWindowClass(HWND a1, HWND a2)
{
  int v3; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  HWND v8; // edi
  bool v9; // al
  HWND hWnd; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnd = a1; /*0x603ab2*/
  if ( !dword_AC1B04 ) /*0x603ab6*/
    return 0; /*0x603ab6*/
  v3 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x603ad7*/
  if ( !v3 ) /*0x603adc*/
    return 0; /*0x603adc*/
  while ( *(HWND *)v3 != hWnd ) /*0x603ae4*/
  {
    v3 = *(_DWORD *)(v3 + 516); /*0x603ae6*/
    if ( !v3 ) /*0x603aee*/
      return 0; /*0x603aee*/
  }
  v5 = v3 + 4; /*0x603b00*/
  if ( v3 == -4 ) /*0x603b05*/
    return 0; /*0x603b05*/
  v6 = *(_DWORD *)(v3 + 112); /*0x603b07*/
  if ( v6 != 269 /*0x603b91*/
    && v6 != 217
    && v6 != 240
    && v6 != 206
    && v6 != 288
    && v6 != 289
    && v6 != 277
    && v6 != 211
    && v6 != 207
    && v6 != 287
    && v6 != 195
    && v6 != 283
    && v6 != 225
    && v6 != 286
    && v6 != 196
    && v6 != 304
    && v6 != 208
    && v6 != 252
    && v6 != 294 )
  {
    return 0; /*0x603b91*/
  }
  *(_DWORD *)(v5 + 176) = 2; /*0x603b97*/
  hWnd = a2; /*0x603bac*/
  GetClassNameA(a2, ClassName, 128); /*0x603bb0*/
  if ( !strcmp(ClassName, g_INI_Key_Edit) || !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x603c05*/
    return 192; /*0x603c2c*/
  if ( !strcmp(ClassName, g_INI_Key_ListBox) /*0x603c99*/
    && dword_AC1B04
    && (v7 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    v8 = hWnd; /*0x603c9b*/
    while ( *(HWND *)v7 != hWnd ) /*0x603ca1*/
    {
      v7 = *(_DWORD *)(v7 + 516); /*0x603ca3*/
      if ( !v7 ) /*0x603cab*/
        goto LABEL_37; /*0x603cab*/
    }
    v9 = *(_DWORD *)(v7 + 108) == 1; /*0x603cb7*/
  }
  else
  {
    v8 = hWnd; /*0x603cbc*/
LABEL_37:
    if ( strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x603cd1*/
      return 0; /*0x603cf8*/
    v9 = (GetWindowLongA(v8, -16) & 3) != 3; /*0x603d0c*/
  }
  if ( !v9 ) /*0x603d11*/
    return 0; /*0x603afb*/
  return 192; /*0x603af0*/
}



// ==== 0x00603D30  CacheDialogInvalidate  this=Skirmish  sig=csp ====
HWND *__fastcall Dialog_CacheInvalidate(HWND hWnd, HWND a2)
{
  HWND *result; // eax
  HWND v5; // [esp+8h] [ebp-4h] BYREF

  result = (HWND *)dword_AC1B04; /*0x603d31*/
  v5 = hWnd; /*0x603d3e*/
  if ( dword_AC1B04 ) /*0x603d42*/
  {
    result = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v5) & ((1 << dword_AC1B0C) - 1))); /*0x603d63*/
    if ( result ) /*0x603d68*/
    {
      while ( *result != v5 ) /*0x603d70*/
      {
        result = (HWND *)result[129]; /*0x603d72*/
        if ( !result ) /*0x603d7a*/
          return result; /*0x603d7a*/
      }
      if ( ++result ) /*0x603d89*/
      {
        result[28] = (HWND)2; /*0x603d90*/
        result[5] = a2; /*0x603d97*/
        return (HWND *)InvalidateRect(hWnd, 0, 1); /*0x603d9a*/
      }
    }
  }
  return result; /*0x603d7c*/
}



// ==== 0x00603DB0  Diplomacy_Helper  this=-  sig=csp ====
LRESULT __fastcall sub_603DB0(HWND hWnd, unsigned __int8 a2)
{
  return SendMessageA(hWnd, 0x4E5u, 0, a2); /*0x603dc5*/
}



// ==== 0x00603DD0  globalHelper_003DD0  this=-  sig=csp ====
LRESULT __fastcall sub_603DD0(HWND hWnd, unsigned __int8 a2)
{
  return SendMessageA(hWnd, 0x4E6u, 0, a2); /*0x603de5*/
}



// ==== 0x00603E40  sub_603E40  this=ObjectClass  sig=ida-proto ====
_DWORD *__fastcall sub_603E40(int a1, int a2)
{
  _DWORD *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)dword_AC1B04; /*0x603e41*/
  v4 = a1; /*0x603e4b*/
  if ( dword_AC1B04 ) /*0x603e4f*/
  {
    result = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v4) & ((1 << dword_AC1B0C) - 1))); /*0x603e70*/
    if ( result ) /*0x603e75*/
    {
      while ( *result != v4 ) /*0x603e7d*/
      {
        result = (_DWORD *)result[129]; /*0x603e7f*/
        if ( !result ) /*0x603e87*/
          return result; /*0x603e87*/
      }
      if ( ++result ) /*0x603e95*/
        result[48] = a2; /*0x603e97*/
    }
  }
  return result; /*0x603e89*/
}



// ==== 0x00603F00  UI_Assign  this=-  sig=csp ====
wchar_t **__fastcall UI_Assign(wchar_t **a1, HWND a2, LPARAM a3, LPARAM a4)
{
  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  wchar_t *v8; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v8); /*0x603f0d*/
  lParam[0] = a3; /*0x603f1e*/
  lParam[1] = a4; /*0x603f2b*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f2f*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v8); /*0x603f3c*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8); /*0x603f45*/
  return a1; /*0x603f4c*/
}



// ==== 0x00603F60  WOLobby_Setup  this=-  sig=csp ====
wchar_t **__fastcall WOLobby_Setup(wchar_t **a1, HWND a2, LPARAM a3)
{
  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  wchar_t *v7; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v7); /*0x603f6d*/
  lParam[0] = a3; /*0x603f83*/
  lParam[1] = -1; /*0x603f87*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f8f*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v7); /*0x603f9c*/
  DeleteAndZero::Alt((DeleteAndZero *)&v7); /*0x603fa5*/
  return a1; /*0x603fac*/
}



// ==== 0x00603FC0  sub_603FC0  this=-  sig=ida-proto ====
wchar_t **__userpurge sub_603FC0@<eax>(
        wchar_t **a1@<ecx>,
        HWND a2@<edx>,
        HWND hWnd,
        unsigned __int16 a4,
        DeleteAndZero a5)
{
  LPARAM lParam[2]; // [esp+10h] [ebp-Ch] BYREF
  wchar_t *v9; // [esp+18h] [ebp-4h] BYREF
  LRESULT v10; // [esp+24h] [ebp+8h]

  v10 = SendMessageA(hWnd, 0x4E8u, 0, a4 | (*(unsigned __int16 *)a5.__pad_0 << 16)); /*0x603ffc*/
  unknown_libname_74(&v9); /*0x604000*/
  lParam[0] = (LPARAM)hWnd; /*0x604016*/
  lParam[1] = v10; /*0x60401a*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x60401e*/
  WideString::AssignFromPtr((WideString *)&a5, (const wchar_t **)&v9); /*0x604029*/
  DeleteAndZero::Alt((DeleteAndZero *)&v9); /*0x604032*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&a5); /*0x60403e*/
  DeleteAndZero::Alt(&a5); /*0x604047*/
  return a1; /*0x60404e*/
}



// ==== 0x00604060  GetSkirmishMenuOwnerName  this=-  sig=csp ====
wchar_t **__fastcall GetSkirmishMenuOwnerName(wchar_t **a1, HWND a2, HWND a3)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax

  v4 = DlgSkirmishMenuProc(a2, a3); /*0x60406b*/
  if ( v4 ) /*0x604072*/
  {
    StringCSF = GetStringCSF((wchar_t *)v4, 0, g_Str_File_ownrdraw_cpp, 1957); /*0x604082*/
    WideString::Assign((WideString *)a1, StringCSF); /*0x60408a*/
  }
  else
  {
    WideString::Assign((WideString *)a1, &g_TypeClass_DefaultString); /*0x60409c*/
  }
  return a1; /*0x604091*/
}



// ==== 0x006040B0  DlgSkirmishMenuProc  this=Dialog  sig=csp ====
char *__fastcall sub_6040B0(HWND a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  char *result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  HWND v13; // [esp+8h] [ebp-4h] BYREF

  v13 = a1; /*0x6040bc*/
  if ( !dword_AC1B04 ) /*0x6040c0*/
    goto LABEL_5; /*0x6040c0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v13) & ((1 << dword_AC1B0C) - 1))); /*0x6040e1*/
  if ( !v3 ) /*0x6040e6*/
    goto LABEL_5; /*0x6040e6*/
  while ( (HWND)*v3 != v13 ) /*0x6040ee*/
  {
    v3 = (_DWORD *)v3[129]; /*0x6040f0*/
    if ( !v3 ) /*0x6040f8*/
      goto LABEL_5; /*0x6040f8*/
  }
  v6 = v3 + 1; /*0x60410f*/
  if ( v6 ) /*0x604114*/
    v4 = v6[27]; /*0x604116*/
  else
LABEL_5:
    v4 = 0; /*0x6040fa*/
  result = (char *)GetDlgCtrlID(a2); /*0x6040fd*/
  if ( result ) /*0x604105*/
  {
    if ( result == (char *)-1 ) /*0x60411e*/
      return 0; /*0x60411e*/
    switch ( v4 ) /... [55494 chars total]



// ==== 0x00606740  SetDialogActiveFlag  this=-  sig=ida-proto ====
int __fastcall Dialog_SetActiveFlag(int a1, char a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = dword_AC1B04; /*0x606741*/
  v4 = a1; /*0x60674b*/
  if ( dword_AC1B04 ) /*0x60674f*/
  {
    result = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v4) & ((1 << dword_AC1B0C) - 1))); /*0x606770*/
    if ( result ) /*0x606775*/
    {
      while ( *(_DWORD *)result != v4 ) /*0x60677d*/
      {
        result = *(_DWORD *)(result + 516); /*0x60677f*/
        if ( !result ) /*0x606787*/
          return result; /*0x606787*/
      }
      result += 4; /*0x606790*/
      if ( result ) /*0x606795*/
        *(_BYTE *)(result + 188) = a2; /*0x606797*/
    }
  }
  return result; /*0x606789*/
}



// ==== 0x006067A0  SkirmishMapGen::LookupDialogHash  this=SkirmishMapGen  sig=csp ====
char __thiscall SkirmishMapGen::LookupDialogHash(SkirmishMapGen *this)
{
  SkirmishMapGen **v1; // eax
  _DWORD *v3; // eax
  SkirmishMapGen *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6067a6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x6067ac*/
    return 0; /*0x6067ac*/
  v1 = *(SkirmishMapGen ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6067cd*/
                           + 4
                           * ((*(int (__thiscall **)(SkirmishMapGen **))&g_DialogPool.__pad_208[80])(&v4)
                            & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x6067d2*/
    return 0; /*0x6067d2*/
  while ( *v1 != v4 ) /*0x6067da*/
  {
    v1 = (SkirmishMapGen **)v1[129]; /*0x6067dc*/
    if ( !v1 ) /*0x6067e4*/
      return 0; /*0x6067e4*/
  }
  v3 = v1 + 1; /*0x6067ee*/
  if ( v3 ) /*0x6067f3*/
    return *((_BYTE *)v3 + 188); /*0x6067f5*/
  else
    return 0; /*0x6067e6*/
}



// ==== 0x00606800  Dialog::MapControlToAction  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_MapControlToAction(HWND hWnd, LPARAM a2)
{
  HWND v2; // ebp
  int v3; // eax
  void *v4; // esi
  int DlgCtrlID; // edi
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  HWND Parent; // [esp+10h] [ebp-4h]

  v2 = hWnd; /*0x606803*/
  Parent = GetParent(hWnd); /*0x606810*/
  hWnd = Parent; /*0x606814*/
  if ( !dword_AC1B04 ) /*0x60681f*/
    goto LABEL_5; /*0x60681f*/
  v3 = *((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd)); /*0x606836*/
  if ( !v3 ) /*0x60683b*/
    goto LABEL_5; /*0x60683b*/
  while ( *(HWND *)v3 != hWnd ) /*0x606843*/
  {
    v3 = *(_DWORD *)(v3 + 516); /*0x606849*/
    if ( !v3 ) /*0x606851*/
      goto LABEL_5; /*0x606851*/
  }
  v8 = v3 + 4; /*0x607089*/
  if ( v8 ) /*0x60708e*/
    v4 = *(void **)(v8 + 108); /*0x607094*/
  else
LABEL_5:
    v4 = 0; /*0x606853*/
  DlgCtrlID = GetDlgCtrlID(v2); /*0x60685c*/
  v6 = a2 != 0; /*0x606864*/
  if ( (v4 == (void *)268 /*0x60701e*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || (unsigned __int8)Dialog::IsSpecialTemplate(v4))
    && DlgCtrlID == 1684
    || Event::IsValidActionType(v4) && DlgCtrlID == 1685
    || (v4 == (void *)148
     || v4 == (void *)216
     || v4 == (void *)245
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)215
     || v4 == (void *)187
     || v4 == (void *)256
     || v4 == (void *)214
     || v4 == (void *)293
     || v4 == (void *)290
     || v4 == (void *)274
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)254
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)276
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)700
     || v4 == (void *)270
     || v4 == (void *)264
     || v4 == (void *)3014
     || v4 == (void *)3015)
    && DlgCtrlID == 1820
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014
     || v4 == (void *)261
     || v4 == (void *)107
     || v4 == (void *)275)
    && DlgCtrlID == 1128
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448)
    || (v4 == (void *)259 || v4 == (void *)3015)
    && (DlgCtrlID == 1779
     || DlgCtrlID == 1780
     || DlgCtrlID == 1835
     || DlgCtrlID == 1775
     || DlgCtrlID == 1777
     || DlgCtrlID == 1776
     || DlgCtrlID == 1778
     || DlgCtrlID == 1695
     || DlgCtrlID == 1782
     || DlgCtrlID == 1843
     || DlgCtrlID == 1845
     || DlgCtrlID == 1842
     || DlgCtrlID == 1002
     || DlgCtrlID == 1846
     || DlgCtrlID == 1847
     || DlgCtrlID == 1852
     || DlgCtrlID == 1853
     || DlgCtrlID == 1854
     || DlgCtrlID == 1855
     || DlgCtrlID == 1856
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1850
     || DlgCtrlID == 1849
     || DlgCtrlID == 1851
     || DlgCtrlID == 1848)
    || (v4 == (void *)264 || v4 == (void *)3014)
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809
     || DlgCtrlID == 1843
     || DlgCtrlID == 1842
     || DlgCtrlID == 1819
     || DlgCtrlID == 1845) )
  {
    goto LABEL_208; /*0x60701e*/
  }
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x607034*/
  {
    hWnd = v2; /*0x60703f*/
    if ( dword_AC1B04 ) /*0x607045*/
    {
      v7 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x607066*/
      if ( v7 ) /*0x60706b*/
      {
        while ( *(HWND *)v7 != hWnd ) /*0x607073*/
        {
          v7 = *(_DWORD *)(v7 + 516); /*0x607075*/
          if ( !v7 ) /*0x60707d*/
            goto LABEL_199; /*0x60707d*/
        }
        v9 = v7 + 4; /*0x6070a0*/
        if ( v9 ) /*0x6070a5*/
        {
          if ( !*(_DWORD *)(v9 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x6070b4*/
            goto LABEL_208; /*0x6070bb*/
        }
      }
    }
  }
LABEL_199:
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x6070cb*/
  {
    hWnd = v2; /*0x6070d6*/
    if ( dword_AC1B04 ) /*0x6070dc*/
    {
      v10 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x607101*/
      if ( v10 ) /*0x607106*/
      {
        while ( *(HWND *)v10 != hWnd ) /*0x607112*/
        {
          v10 = *(_DWORD *)(v10 + 516); /*0x607114*/
          if ( !v10 ) /*0x60711c*/
            return 1; /*0x607128*/
        }
        v12 = v10 + 4; /*0x607133*/
        if ( v12 ) /*0x607138*/
        {
          if ( !*(_DWORD *)(v12 + 104) && GetDialogDefaultButton((int)Parent, v2) ) /*0x607147*/
          {
LABEL_208:
            hWnd = v2; /*0x607150*/
            if ( dword_AC1B04 ) /*0x60715b*/
            {
              v13 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x60717c*/
              if ( v13 ) /*0x607181*/
              {
                while ( *(HWND *)v13 != hWnd ) /*0x607189*/
                {
                  v13 = *(_DWORD *)(v13 + 516); /*0x60718b*/
                  if ( !v13 ) /*0x607193*/
                    return 1; /*0x60719f*/
                }
                v14 = v13 + 4; /*0x6071a6*/
                if ( v14 ) /*0x6071ab*/
                  *(_BYTE *)(v14 + 188) = v6; /*0x6071ad*/
              }
            }
          }
        }
      }
    }
  }
  return 1; /*0x60711e*/
}



// ==== 0x006071E0  RenderGadgetClassAnimation  this=-  sig=csp ====
LRESULT __fastcall GadgetClass_RenderAnimation(HWND a1, char a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  int *v14; // eax
  int v15; // edi
  int v16; // esi
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  HWND v23; // edi
  int v24; // ebp
  int v25; // edi
  int *v26; // edx
  int v27; // eax
  int *v28; // ecx
  int v29; // esi
  int v30; // ecx
  int v31; // edi
  int v32; // ebx
  int v33; // ebp
  _DWORD *v34; // eax
  int v35; // esi
  int *v36; // eax
  int v37; // eax
  int *v38; // eax
  int v39; // esi
  int *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int v43; // eax
  _DWORD *v44; // esi
  int v45; // ebx
  int v46; // eax
  int v47; // esi
  int v48; // ebx
  int v49; // edx
  int v50; // eax
  int v51; // eax
  in... [20074 chars total]



// ==== 0x00607FD0  Dialog::StopBink  this=Dialog  sig=csp ====
int __thiscall Dialog::StopBink(Dialog *this)
{
  int result; // eax
  int v3; // esi
  HWND DlgItem; // eax
  Dialog *v5; // [esp+8h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x607fd1*/
  v5 = this; /*0x607fdc*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x607fe0*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x608005*/
                       + 4
                       * ((*(int (__thiscall **)(Dialog **))&g_DialogPool.__pad_208[80])(&v5)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60800a*/
    {
      while ( *(Dialog **)result != v5 ) /*0x608012*/
      {
        result = *(_DWORD *)(result + 516); /*0x608014*/
        if ( !result ) /*0x60801c*/
          return result; /*0x60801c*/
      }
      v3 = result + 4; /*0x608026*/
      if ( result != -4 ) /*0x60802b*/
      {
        LOBYTE(result) = *(_BYTE *)(result + 194); /*0x60802d*/
        if ( (_BYTE)result ) /*0x608035*/
        {
          DlgItem = GetDlgItem((HWND)this, 1818); /*0x60803d*/
          if ( DlgItem ) /*0x608045*/
            SendMessageA(DlgItem, 0x4E2u, 0, 0); /*0x608051*/
          result = RenderGadgetClassAnimation((HWND)this, 0); /*0x60805b*/
          *(_BYTE *)(v3 + 190) = 0; /*0x608060*/
        }
      }
    }
  }
  return result; /*0x60801e*/
}



// ==== 0x00608070  Dialog::IdleProcess  this=Dialog  sig=csp ====
char __usercall Dialog::IdleProcess@<al>(Dialog *this, ObjectClass *a2@<esi>)
{
  HWND v2; // ecx
  HWND v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v6; // eax
  bool v7; // bl
  bool v8; // al
  int v9; // eax
  int v10; // edi
  BOOL v11; // esi
  ObjectClass *v12; // [esp-4h] [ebp-1Ch]
  HWND v13; // [esp+Ch] [ebp-Ch] BYREF
  DWORD TickCount; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v3 = v2; /*0x608075*/
  if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x60807d*/
    return 0; /*0x60807d*/
  v13 = v3; /*0x60808b*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x608091*/
    return 0; /*0x608091*/
  v4 = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6080b2*/
                  + 4
                  * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&v13)
                   & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v4 ) /*0x6080b7*/
    return 0; /*0x6080b7*/
  while ( (HWND)*v4 != v13 ) /*0x6080bf*/
  {
    v4 = (_DWORD *)v4[129]; /*0x6080c1*/
    if ( !v4 ) /*0x6080c9*/
      return 0; /*0x6080c9*/
  }
  v6 = v4 + 1; /*0x6080d8*/
  if ( !v6 ) /*0x6080dd*/
    return 0; /*0x6080dd*/
  v7 = *((_BYTE *)v6 + 189) && v6[44] == 1; /*0x6080e7*/
  v8 = IsWindowVisible(v3); /*0x608101*/
  if ( !v7 ) /*0x608106*/
    return 0; /*0x608106*/
  if ( !v8 ) /*0x60810a*/
    return 0; /*0x60810a*/
  PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 412), 0x2000, 1.0, 0); /*0x608124*/
  LOBYTE(v15) = IsWindowEnabled(v3); /*0x608138*/
  EnableWindow(v3, 0); /*0x60813c*/
  EnumChildWindows(v3, Dialog::MapControlToAction, 1); /*0x60814a*/
  v13 = v3; /*0x608157*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60815b*/
    return 0; /*0x60815b*/
  v9 = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x608180*/
                 + 4
                 * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&v13)
                  & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v9 ) /*0x608185*/
    return 0; /*0x608185*/
  while ( *(HWND *)v9 != v13 ) /*0x608191*/
  {
    v9 = *(_DWORD *)(v9 + 516); /*0x608193*/
    if ( !v9 ) /*0x60819b*/
      return 0; /*0x6081a5*/
  }
  v10 = v9 + 4; /*0x6081ae*/
  if ( v9 == -4 ) /*0x6081b3*/
    return 0; /*0x6080d3*/
  v12 = a2; /*0x6081b9*/
  *(_BYTE *)(v9 + 194) = 1; /*0x6081bf*/
  InvalidateRect(v3, 0, 0); /*0x6081c6*/
  TickCount = GetTickCount(); /*0x6081d4*/
  while ( 1 ) /*0x6081d8*/
  {
    MessageLoop(); /*0x6081d8*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x6081e4*/
    {
      if ( *(_DWORD *)&dword_A8B238 != 5 && !BYTE2(stru_A8D600.Network_field_0xC) && !dword_A8DAB4 ) /*0x6081fb*/
        break; /*0x6081fb*/
    }
    Event::Dispatch(); /*0x608211*/
LABEL_29:
    v11 = *(_BYTE *)(v10 + 190) == 0; /*0x608216*/
    if ( (int)(GetTickCount() - TickCount) > 5000 || v11 ) /*0x608234*/
      goto LABEL_31; /*0x608234*/
  }
  if ( VtableStub::55CBF0() || !(unsigned __int8)GameFrameLoop(v12) ) /*0x608206*/
    goto LABEL_29; /*0x60820d*/
LABEL_31:
  EnumChildWindows(v3, Dialog::MapControlToAction, 0); /*0x608236*/
  EnableWindow(v3, (unsigned __int8)v15); /*0x608250*/
  return 1; /*0x6080cb*/
}



// ==== 0x00608260  SkirmishSetup::PlayButtonClickAnim  this=SkirmishSetup  sig=csp ====
int __thiscall SkirmishSetup::PlayButtonClickAnim(SkirmishSetup *this)
{
  int result; // eax
  char v3; // bl
  SkirmishSetup *v4; // [esp+8h] [ebp-4h] BYREF

  result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60826a*/
  if ( (_BYTE)result ) /*0x608271*/
    goto LABEL_6; /*0x608271*/
  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x608273*/
  v4 = this; /*0x608278*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60827e*/
    goto LABEL_6; /*0x60827e*/
  result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60829f*/
                     + 4
                     * ((*(int (__thiscall **)(SkirmishSetup **))&g_DialogPool.__pad_208[80])(&v4)
                      & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !result ) /*0x6082a4*/
    goto LABEL_6; /*0x6082a4*/
  while ( *(SkirmishSetup **)result != v4 ) /*0x6082ac*/
  {
    result = *(_DWORD *)(result + 516); /*0x6082ae*/
    if ( !result ) /*0x6082b6*/
      goto LABEL_6; /*0x6082b6*/
  }
  result += 4; /*0x6082c2*/
  if ( result
    && (!*(_BYTE *)(result + 189) || *(_DWORD *)(result + 176) != 1 ? (v3 = 0) : (v3 = 1),
        (result = IsWindowVisible((HWND)this), LOBYTE(result) = result != 0, v3) && (_BYTE)result) )
  {
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 416), 0x2000, 1.0, 0); /*0x60830f*/
    LOBYTE(v4) = IsWindowEnabled((HWND)this); /*0x608329*/
    EnableWindow((HWND)this, 0); /*0x60832d*/
    EnumChildWindows((HWND)this, Dialog::MapControlToAction, 1); /*0x60833d*/
    RenderGadgetClassAnimation((HWND)this, 1); /*0x608343*/
    EnumChildWindows((HWND)this, Dialog::MapControlToAction, 0); /*0x608350*/
    EnableWindow((HWND)this, (unsigned __int8)v4); /*0x60835d*/
    result = InvalidateRect((HWND)this, 0, 0); /*0x608364*/
    LOBYTE(result) = 1; /*0x60836a*/
  }
  else
  {
LABEL_6:
    LOBYTE(result) = 0; /*0x6082b8*/
  }
  return result; /*0x6082b8*/
}



// ==== 0x00608380  SaveLoadDialog::LookupDialogHash  this=SaveLoadDialog  sig=csp ====
int __thiscall SaveLoadDialog::LookupDialogHash(SaveLoadDialog *this)
{
  int result; // eax
  SaveLoadDialog *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x608381*/
  v2 = this; /*0x608386*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60838c*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6083ad*/
                       + 4
                       * ((*(int (__thiscall **)(SaveLoadDialog **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x6083b2*/
    {
      while ( *(SaveLoadDialog **)result != v2 ) /*0x6083ba*/
      {
        result = *(_DWORD *)(result + 516); /*0x6083bc*/
        if ( !result ) /*0x6083c4*/
          return result; /*0x6083c4*/
      }
      result += 4; /*0x6083cc*/
      if ( result ) /*0x6083d1*/
        *(_BYTE *)(result + 189) = 1; /*0x6083d3*/
    }
  }
  return result; /*0x6083c7*/
}



// ==== 0x006083E0  SaveLoadDialog::FindDialogTemplate  this=SaveLoadDialog  sig=csp ====
int __thiscall SaveLoadDialog::FindDialogTemplate(SaveLoadDialog *this)
{
  int result; // eax
  SaveLoadDialog *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x6083e1*/
  v2 = this; /*0x6083e6*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x6083ec*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60840d*/
                       + 4
                       * ((*(int (__thiscall **)(SaveLoadDialog **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x608412*/
    {
      while ( *(SaveLoadDialog **)result != v2 ) /*0x60841a*/
      {
        result = *(_DWORD *)(result + 516); /*0x60841c*/
        if ( !result ) /*0x608424*/
          return result; /*0x608424*/
      }
      result += 4; /*0x60842c*/
      if ( result ) /*0x608431*/
        *(_BYTE *)(result + 189) = 0; /*0x608433*/
    }
  }
  return result; /*0x608427*/
}



// ==== 0x00608440  HashTable::LookupAndMark  this=HashTable  sig=csp ====
int __thiscall HashTable::LookupAndMark(HashTable *this)
{
  int result; // eax
  HashTable *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x608441*/
  v2 = this; /*0x608446*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60844c*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60846d*/
                       + 4
                       * ((*(int (__thiscall **)(HashTable **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x608472*/
    {
      while ( *(HashTable **)result != v2 ) /*0x60847a*/
      {
        result = *(_DWORD *)(result + 516); /*0x60847c*/
        if ( !result ) /*0x608484*/
          return result; /*0x608484*/
      }
      result += 4; /*0x60848c*/
      if ( result ) /*0x608491*/
        *(_BYTE *)(result + 212) = 1; /*0x608493*/
    }
  }
  return result; /*0x608487*/
}



// ==== 0x00608500  ControlDialogHandler  this=-  sig=csp ====
char __fastcall Dialog_ControlHandler(int a1, HWND a2, _DWORD *a3)
{
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v16 = a1; /*0x608504*/
  v15 = 0; /*0x60851a*/
  HashTable::Get(&dword_AC1B00, &v16, &v15); /*0x608522*/
  if ( v15 ) /*0x60852d*/
    v4 = *(_DWORD *)(v15 + 108); /*0x60852f*/
  else
    v4 = 0; /*0x608534*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x608537*/
  if ( v4 != 148 ) /*0x608543*/
  {
    if ( v4 == 259 ) /*0x6086da*/
    {
      if ( DlgCtrlID != 1835 ) /*0x6086e1*/
        return 0; /*0x6086e1*/
      v7 = *((_DWORD *)dword_A8B230 + 3374); /*0x6086f8*/
      if ( g_DisplayWidth >= 800 ) /*0x608700*/
      {
        if ( v7 ) /*0x608704*/
        {
LABEL_31:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608706*/
          if ( !v6 ) /*0x608715*/
            return 0; /*0x608715*/
          *v6 = 103; /*0x60871b*/
LABEL_47:
          v6[1] = 130; /*0x6087d2*/
          v6[2] = 424; /*0x6087d9*/
          v6[3] = 230; /*0x6087e0*/
          goto LABEL_143; /*0x6087e7*/
        }
        goto LABEL_39; /*0x608704*/
      }
      if ( !v7 ) /*0x608728*/
        goto LABEL_43; /*0x608728*/
      goto LABEL_45; /*0x608728*/
    }
    if ( v4 == 3015 ) /*0x608736*/
    {
      if ( DlgCtrlID != 1835 ) /*0x608741*/
        return 0; /*0x608741*/
      v8 = *((_DWORD *)dword_A8B230 + 3374); /*0x608753*/
      if ( g_DisplayWidth >= 800 ) /*0x608761*/
      {
        if ( v8 ) /*0x608765*/
          goto LABEL_31; /*0x608765*/
LABEL_39:
        v6 = __2_YAPAXI_Z(0x10u); /*0x608767*/
        if ( !v6 ) /*0x608773*/
          return 0; /*0x608773*/
        *v6 = 104; /*0x608779*/
LABEL_41:
        v6[1] = 142; /*0x60877f*/
        v6[2] = 424; /*0x608786*/
        v6[3] = 220; /*0x60878d*/
        goto LABEL_143; /*0x608794*/
      }
      if ( !v8 ) /*0x60879b*/
      {
LABEL_43:
        v6 = __2_YAPAXI_Z(0x10u); /*0x60879d*/
        if ( !v6 ) /*0x6087a9*/
          return 0; /*0x6087a9*/
        *v6 = 24; /*0x6087af*/
        goto LABEL_41; /*0x6087b5*/
      }
LABEL_45:
      v6 = __2_YAPAXI_Z(0x10u); /*0x6087b7*/
      if ( !v6 ) /*0x6087c6*/
        return 0; /*0x6087c6*/
      *v6 = 23; /*0x6087cc*/
      goto LABEL_47; /*0x6087cc*/
    }
    if ( v4 == 188 ) /*0x6087f2*/
    {
      switch ( DlgCtrlID ) /*0x6087fd*/
      {
        case 1839: /*0x6087fd*/
          v9 = g_DisplayWidth; /*0x6087ff*/
          if ( g_DisplayWidth == 640 ) /*0x60880c*/
            goto LABEL_51; /*0x60880c*/
          goto LABEL_80; /*0x60880c*/
        case 1842: /*0x6087fd*/
          goto LABEL_54; /*0x608849*/
        case 1934: /*0x6087fd*/
          goto LABEL_58; /*0x608874*/
        case 1933: /*0x6087fd*/
          goto LABEL_62; /*0x60889f*/
      }
    }
    else
    {
      if ( v4 != 189 ) /*0x6088fa*/
      {
        if ( v4 == 194 ) /*0x60893f*/
        {
          if ( DlgCtrlID != 1839 ) /*0x60894a*/
          {
            switch ( DlgCtrlID ) /*0x608975*/
            {
              case 1842: /*0x608975*/
                if ( g_DisplayWidth == 640 ) /*0x608984*/
                {
                  v6 = __2_YAPAXI_Z(0x10u); /*0x608988*/
                  if ( !v6 ) /*0x608992*/
                    return 0; /*0x608992*/
                  *v6 = 110; /*0x608998*/
LABEL_116:
                  v6[1] = 215; /*0x608b49*/
                  v6[2] = 266; /*0x608b50*/
                  v6[3] = 22; /*0x608b57*/
                  goto LABEL_143; /*0x608b5e*/
                }
                if ( g_DisplayWidth != 800 && g_DisplayWidth != 1024 ) /*0x6089b1*/
                  return 0; /*0x6089b1*/
                v6 = __2_YAPAXI_Z(0x10u); /*0x6089b9*/
                if ( !v6 ) /*0x6089c3*/
                  return 0; /*0x6089c3*/
                *v6 = 180; /*0x6089c9*/
LABEL_111:
                v6[1] = 215; /*0x608b03*/
                v6[2] = 266; /*0x608b0a*/
                v6[3] = 21; /*0x608b11*/
                goto LABEL_143; /*0x608b18*/
              case 1934: /*0x608975*/
                goto LABEL_58; /*0x6089d9*/
              case 1933: /*0x608975*/
                goto LABEL_62; /*0x6089e4*/
            }
            if ( DlgCtrlID != 1932 ) /*0x6089ef*/
              return 0; /*0x6089ef*/
            v13 = g_DisplayWidth; /*0x6089f5*/
            if ( g_DisplayWidth != 640 ) /*0x608a02*/
            {
              if ( g_DisplayWidth != 800 ) /*0x608a0e*/
                goto LABEL_95; /*0x608a0e*/
              goto LABEL_96; /*0x608a0e*/
            }
LABEL_135:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608c42*/
            if ( !v6 ) /*0x608c4e*/
              return 0; /*0x608c4e*/
            *v6 = 346; /*0x608c50*/
            goto LABEL_141; /*0x608c56*/
          }
          v9 = g_DisplayWidth; /*0x60894c*/
          if ( g_DisplayWidth != 640 ) /*0x608959*/
            goto LABEL_80; /*0x608959*/
        }
        else
        {
          if ( v4 != 201 ) /*0x608a39*/
            return 0; /*0x608a39*/
          if ( DlgCtrlID != 1839 ) /*0x608a44*/
          {
            switch ( DlgCtrlID ) /*0x608ad6*/
            {
              case 1842: /*0x608ad6*/
                v10 = g_DisplayWidth; /*0x608adc*/
                if ( g_DisplayWidth != 640 ) /*0x608ae9*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608b23*/
                    goto LABEL_113; /*0x608b23*/
                  goto LABEL_114; /*0x608b23*/
                }
                goto LABEL_109; /*0x608ae9*/
              case 1934: /*0x608ad6*/
                v11 = g_DisplayWidth; /*0x608b6a*/
                if ( g_DisplayWidth != 640 ) /*0x608b77*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608b9c*/
                    goto LABEL_122; /*0x608b9c*/
                  goto LABEL_123; /*0x608b9c*/
                }
LABEL_119:
                v6 = __2_YAPAXI_Z(0x10u); /*0x608b79*/
                if ( !v6 ) /*0x608b85*/
                  return 0; /*0x608b85*/
                *v6 = 80; /*0x608b8b*/
                goto LABEL_141; /*0x608b91*/
              case 1933: /*0x608ad6*/
                v12 = g_DisplayWidth; /*0x608bce*/
                if ( g_DisplayWidth != 640 ) /*0x608bdb*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608c00*/
                    goto LABEL_130; /*0x608c00*/
                  goto LABEL_131; /*0x608c00*/
                }
LABEL_127:
                v6 = __2_YAPAXI_Z(0x10u); /*0x608bdd*/
                if ( !v6 ) /*0x608be9*/
                  return 0; /*0x608be9*/
                *v6 = 228; /*0x608bef*/
                goto LABEL_141; /*0x608bf5*/
            }
            if ( DlgCtrlID != 1932 ) /*0x608c2d*/
              return 0; /*0x608c2d*/
            if ( g_DisplayWidth != 640 ) /*0x608c40*/
            {
              if ( g_DisplayWidth != 800 && g_DisplayWidth != 1024 ) /*0x608c66*/
                return 0; /*0x608c66*/
              v6 = __2_YAPAXI_Z(0x10u); /*0x608c6a*/
              if ( !v6 ) /*0x608c74*/
                return 0; /*0x608c74*/
LABEL_140:
              *v6 = 430; /*0x608c76*/
LABEL_141:
              v6[1] = 190; /*0x608c7c*/
              v6[2] = 75; /*0x608c83*/
              goto LABEL_142; /*0x608c83*/
            }
            goto LABEL_135; /*0x608c40*/
          }
          v9 = g_DisplayWidth; /*0x608a4a*/
          if ( g_DisplayWidth != 640 ) /*0x608a57*/
          {
            if ( g_DisplayWidth != 800 ) /*0x608a91*/
              goto LABEL_104; /*0x608a91*/
            goto LABEL_105; /*0x608a91*/
          }
        }
        v6 = __2_YAPAXI_Z(0x10u); /*0x608a5b*/
        if ( v6 ) /*0x608a65*/
        {
          *v6 = 52; /*0x608a6b*/
          v6[1] = 78; /*0x608a71*/
          v6[2] = 396; /*0x608a78*/
          v6[3] = 143; /*0x608a7f*/
          goto LABEL_143; /*0x608a86*/
        }
        return 0; /*0x608a65*/
      }
      switch ( DlgCtrlID ) /*0x608901*/
      {
        case 1839: /*0x608901*/
          v9 = g_DisplayWidth; /*0x608903*/
          if ( g_DisplayWidth == 640 ) /*0x608910*/
          {
LABEL_51:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608812*/
            if ( v6 ) /*0x60881e*/
            {
              *v6 = 52; /*0x608824*/
              v6[1] = 78; /*0x60882a*/
              v6[2] = 396; /*0x608831*/
              v6[3] = 143; /*0x608838*/
              goto LABEL_143; /*0x60883f*/
            }
            return 0; /*0x60881e*/
          }
LABEL_80:
          if ( v9 != 800 ) /*0x608965*/
          {
LABEL_104:
            if ( v9 != 1024 ) /*0x608a99*/
              return 0; /*0x608a99*/
          }
LABEL_105:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608a9f*/
          if ( v6 ) /*0x608aab*/
          {
            *v6 = 60; /*0x608ab1*/
            v6[1] = 98; /*0x608ab7*/
            v6[2] = 540; /*0x608abe*/
            v6[3] = 143; /*0x608ac5*/
            goto LABEL_143; /*0x608acc*/
          }
          return 0; /*0x608aab*/
        case 1842: /*0x608901*/
LABEL_54:
          v10 = g_DisplayWidth; /*0x60884b*/
          if ( g_DisplayWidth != 640 ) /*0x608858*/
          {
            if ( g_DisplayWidth != 800 ) /*0x608864*/
            {
LABEL_113:
              if ( v10 != 1024 ) /*0x608b2b*/
                return 0; /*0x608b2b*/
            }
LABEL_114:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608b31*/
            if ( !v6 ) /*0x608b3d*/
              return 0; /*0x608b3d*/
            *v6 = 180; /*0x608b43*/
            goto LABEL_116; /*0x608b43*/
          }
LABEL_109:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608aeb*/
          if ( !v6 ) /*0x608af7*/
            return 0; /*0x608af7*/
          *v6 = 110; /*0x608afd*/
          goto LABEL_111; /*0x608afd*/
        case 1934: /*0x608901*/
LABEL_58:
          v11 = g_DisplayWidth; /*0x608876*/
          if ( g_DisplayWidth != 640 ) /*0x608883*/
          {
            if ( g_DisplayWidth != 800 ) /*0x60888f*/
            {
LABEL_122:
              if ( v11 != 1024 ) /*0x608ba4*/
                return 0; /*0x608ba4*/
            }
LABEL_123:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608baa*/
            if ( !v6 ) /*0x608bb6*/
              return 0; /*0x608bb6*/
            *v6 = 170; /*0x608bbc*/
            goto LABEL_141; /*0x608bc2*/
          }
          goto LABEL_119; /*0x608883*/
        case 1933: /*0x608901*/
LABEL_62:
          v12 = g_DisplayWidth; /*0x6088a1*/
          if ( g_DisplayWidth != 640 ) /*0x6088ae*/
          {
            if ( g_DisplayWidth != 800 ) /*0x6088ba*/
            {
LABEL_130:
              if ( v12 != 1024 ) /*0x608c08*/
                return 0; /*0x608c08*/
            }
LABEL_131:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608c0e*/
            if ( !v6 ) /*0x608c1a*/
              return 0; /*0x608c1a*/
            *v6 = 295; /*0x608c20*/
            goto LABEL_141; /*0x608c26*/
          }
          goto LABEL_127; /*0x6088ae*/
      }
    }
    if ( DlgCtrlID != 1932 ) /*0x6088ca*/
      return 0; /*0x6088ca*/
    v13 = g_DisplayWidth; /*0x6088d0*/
    if ( g_DisplayWidth != 640 ) /*0x6088dd*/
    {
      if ( g_DisplayWidth != 800 ) /*0x6088e9*/
      {
LABEL_95:
        if ( v13 != 1024 ) /*0x608a16*/
          return 0; /*0x608a16*/
      }
LABEL_96:
      v6 = __2_YAPAXI_Z(0x10u); /*0x608a1c*/
      if ( !v6 ) /*0x608a28*/
        return 0; /*0x608a28*/
      goto LABEL_140; /*0x608a28*/
    }
    goto LABEL_135; /*0x6088dd*/
  }
  if ( g_DisplayWidth < 800 ) /*0x608557*/
    return 0; /*0x608557*/
  if ( DlgCtrlID == 1770 ) /*0x608562*/
  {
    v6 = __2_YAPAXI_Z(0x10u); /*0x608566*/
    if ( v6 ) /*0x608570*/
    {
      *v6 = 141; /*0x608576*/
      v6[1] = 58; /*0x60857c*/
      v6[2] = 348; /*0x608583*/
      v6[3] = 136; /*0x60858a*/
LABEL_143:
      *a3 = *v6; /*0x608c95*/
      a3[1] = v6[1]; /*0x608ca3*/
      a3[2] = v6[2]; /*0x608ca9*/
      a3[3] = v6[3]; /*0x608caf*/
      __3_YAXPAX_Z(v6); /*0x608cb2*/
      return 1; /*0x608cc1*/
    }
    return 0; /*0x608570*/
  }
  if ( DlgCtrlID != 1772 ) /*0x60859b*/
  {
    switch ( DlgCtrlID ) /*0x6085d4*/
    {
      case 1295: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x6085d8*/
        if ( v6 ) /*0x6085e2*/
        {
          *v6 = 177; /*0x6085e8*/
          v6[1] = 265; /*0x6085ee*/
          v6[2] = 272; /*0x6085f5*/
          v6[3] = 22; /*0x6085fc*/
          goto LABEL_143; /*0x608603*/
        }
        return 0; /*0x6085e2*/
      case 1822: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608611*/
        if ( !v6 ) /*0x60861b*/
          return 0; /*0x60861b*/
        *v6 = 177; /*0x608621*/
        v6[1] = 291; /*0x608627*/
        v6[2] = 141; /*0x60862e*/
        break;
      case 1648: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608643*/
        if ( !v6 ) /*0x60864d*/
          return 0; /*0x60864d*/
        *v6 = 309; /*0x608653*/
        v6[1] = 291; /*0x608659*/
        v6[2] = 141; /*0x608660*/
        break;
      case 1959: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608675*/
        if ( !v6 ) /*0x60867f*/
          return 0; /*0x60867f*/
        *v6 = 10; /*0x608685*/
        v6[1] = 198; /*0x60868b*/
        v6[2] = 610; /*0x608692*/
        break;
      case 1960: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x6086ab*/
        if ( !v6 ) /*0x6086b5*/
          return 0; /*0x6086b5*/
        *v6 = 10; /*0x6086bb*/
        v6[1] = 505; /*0x6086c1*/
        v6[2] = 610; /*0x6086c8*/
        break;
      default:
        return 0; /*0x6086a3*/
    }
LABEL_142:
    v6[3] = 20; /*0x608c8a*/
    goto LABEL_143; /*0x608c8a*/
  }
  v6 = __2_YAPAXI_Z(0x10u); /*0x60859f*/
  if ( v6 ) /*0x6085a9*/
  {
    *v6 = 141; /*0x6085af*/
    v6[1] = 364; /*0x6085b5*/
    v6[2] = 348; /*0x6085bc*/
    v6[3] = 136; /*0x6085c3*/
    goto LABEL_143; /*0x6085ca*/
  }
  return 0; /*0x608cbc*/
}



// ==== 0x00608CD0  IsDialogControlVisible  this=-  sig=csp ====
int __fastcall IsDialogControlVisible(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int result; // eax
  _DWORD *v6; // eax
  bool v8; // zf
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x608cdc*/
  if ( !dword_AC1B04 ) /*0x608ce0*/
    goto LABEL_5; /*0x608ce0*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x608d01*/
  if ( !v3 ) /*0x608d06*/
    goto LABEL_5; /*0x608d06*/
  while ( *v3 != v9 ) /*0x608d0e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x608d14*/
    if ( !v3 ) /*0x608d1c*/
      goto LABEL_5; /*0x608d1c*/
  }
  v6 = v3 + 1; /*0x608f42*/
  if ( v6 ) /*0x608f47*/
    v4 = v6[27]; /*0x608f4d*/
  else
LABEL_5:
    v4 = 0; /*0x608d1e*/
  result = GetDlgCtrlID(a2); /*0x608d21*/
  if ( (v4 == 268 /*0x608f32*/
     || v4 == 148
     || v4 == 163
     || v4 == 115
     || v4 == 216
     || v4 == 3003
     || v4 == 245
     || v4 == 261
     || v4 == 226
     || v4 == 213
     || v4 == 693
     || v4 == 183
     || v4 == 692
     || v4 == 3015
     || v4 == 257
     || v4 == 297
     || v4 == 3014
     || v4 == 215
     || v4 == 264
     || v4 == 188
     || v4 == 189
     || v4 == 187
     || v4 == 181
     || v4 == 3002
     || v4 == 255
     || v4 == 107
     || v4 == 256
     || v4 == 258
     || v4 == 184
     || v4 == 214
     || v4 == 259
     || v4 == 293
     || v4 == 231
     || v4 == 278
     || v4 == 194
     || v4 == 201
     || v4 == 285
     || v4 == 284
     || v4 == 276
     || v4 == 700
     || v4 == 275
     || v4 == 265
     || v4 == 271
     || v4 == 279
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 270
     || v4 == 274)
    && result == 1684 )
  {
    LOBYTE(result) = 1; /*0x608f35*/
    return result; /*0x608f39*/
  }
  if ( (v4 == 148 /*0x609082*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && result == 1820 )
  {
    LOBYTE(result) = 1; /*0x609085*/
    return result; /*0x609089*/
  }
  if ( (v4 == 188 /*0x6090d4*/
     || v4 == 189
     || v4 == 258
     || v4 == 194
     || v4 == 201
     || v4 == 3014
     || v4 == 261
     || v4 == 107
     || v4 == 275)
    && result == 1128 )
  {
    LOBYTE(result) = 1; /*0x6090d7*/
    return result; /*0x6090db*/
  }
  switch ( v4 ) /*0x6090e2*/
  {
    case 226: /*0x6090e2*/
      if ( result != 1670 && result != 1400 && result != 1372 && result != 1667 && result != 1375 ) /*0x609115*/
        return result == 1668; /*0x609120*/
      return 1; /*0x609115*/
    case 257: /*0x6090e2*/
      if ( result == 1678 || result == 1677 ) /*0x60913d*/
        return 1; /*0x60913d*/
      return result == 1679; /*0x609148*/
    case 297: /*0x6090e2*/
      LOBYTE(result) = result == 1861; /*0x609160*/
      return result; /*0x609164*/
    case 256: /*0x6090e2*/
      if ( result == 1673 || result == 1672 ) /*0x60917d*/
        return 1; /*0x60917d*/
      return result == 1401; /*0x609188*/
    case 148: /*0x6090e2*/
      LOBYTE(result) = result == 1038; /*0x6091a0*/
      return result; /*0x6091a4*/
    case 183: /*0x6090e2*/
      LOBYTE(result) = result == 1039; /*0x6091b8*/
      return result; /*0x6091bc*/
    case 692: /*0x6090e2*/
      LOBYTE(result) = result == 1735; /*0x6091d0*/
      return result; /*0x6091d4*/
    case 693: /*0x6090e2*/
      LOBYTE(result) = result == 1736; /*0x6091e8*/
      return result; /*0x6091ec*/
    case 261: /*0x6090e2*/
      if ( result == 1732 || result == 1730 || result == 1731 ) /*0x609210*/
        return 1; /*0x609210*/
      return result == 1733; /*0x60921b*/
    case 258: /*0x6090e2*/
      if ( result == 1772 || result == 1450 || result == 1448 ) /*0x609243*/
        return 1; /*0x609243*/
      return result == 1559; /*0x60924e*/
    case 181: /*0x6090e2*/
      if ( result == 1314 || result == 1313 || result == 1310 || result == 1311 ) /*0x609281*/
        return 1; /*0x609281*/
      return result == 1312; /*0x60928c*/
    case 3002: /*0x6090e2*/
      if ( result == 1314 ) /*0x60929e*/
        return 1; /*0x60929e*/
      return result == 1313; /*0x609662*/
    case 3003: /*0x6090e2*/
      if ( result == 1324 ) /*0x6092bb*/
        return 1; /*0x6092bb*/
      return result == 1325; /*0x6092c6*/
    case 213: /*0x6090e2*/
      if ( result == 1486 ) /*0x6092d8*/
        return 1; /*0x6092d8*/
      return result == 1485; /*0x6092e3*/
    case 251: /*0x6090e2*/
      if ( result == 6 ) /*0x6092f3*/
        return 1; /*0x6092f3*/
      return result == 1; /*0x6092fc*/
    case 216: /*0x6090e2*/
      LOBYTE(result) = result == 1739; /*0x609314*/
      return result; /*0x609318*/
    case 215: /*0x6090e2*/
      LOBYTE(result) = result == 1; /*0x60932a*/
      return result; /*0x60932e*/
    case 188: /*0x6090e2*/
    case 194: /*0x6090e2*/
      return result == 1772 || result == 1416 || result == 1450 || result == 1448 || result == 1474; /*0x60968b*/
    case 189: /*0x6090e2*/
    case 201: /*0x6090e2*/
      if ( result == 1439 || result == 1772 ) /*0x609654*/
        return 1; /*0x609654*/
      v8 = result == 1448; /*0x609656*/
LABEL_244:
      if ( v8 ) /*0x60965b*/
        return 1; /*0x60965b*/
      return result == 1474; /*0x60965d*/
    case 187: /*0x6090e2*/
      if ( result == 1741 || result == 1740 ) /*0x609377*/
        return 1; /*0x609377*/
      return result == 1742; /*0x609382*/
    case 182: /*0x6090e2*/
      if ( result == 1737 || result == 1810 ) /*0x60939f*/
        return 1; /*0x60939f*/
      return result == 1316; /*0x6093aa*/
    case 107: /*0x6090e2*/
      if ( result == 1411 ) /*0x6093b9*/
        return 1; /*0x6093b9*/
      return result == 1733; /*0x6093c4*/
    case 3014: /*0x6090e2*/
      if ( result == 1745 || result == 1772 ) /*0x6093e1*/
        return 1; /*0x6093e1*/
      return result == 1448; /*0x6093ec*/
    case 271: /*0x6090e2*/
    case 285: /*0x6090e2*/
      return result == 1337 || result == 1772 || result == 1771; /*0x609640*/
    case 265: /*0x6090e2*/
      if ( result == 1 || result == 1573 ) /*0x60941f*/
        return 1; /*0x60941f*/
      return result == 1339; /*0x60942a*/
    case 270: /*0x6090e2*/
    case 284: /*0x6090e2*/
      return result == 1760 || result == 1761 || result == 1762 || result == 1764 || result == 1905 || result == 1375; /*0x609625*/
    case 276: /*0x6090e2*/
      if ( result == 1671 || result == 1772 || result == 1771 || result == 1672 ) /*0x609475*/
        return 1; /*0x609475*/
      return result == 1955; /*0x609480*/
    case 275: /*0x6090e2*/
      if ( result == 1567 /*0x6094d4*/
        || result == 1672
        || result == 1955
        || result == 1958
        || result == 1673
        || result == 1581
        || result == 1579 )
      {
        return 1; /*0x6094d4*/
      }
      v8 = result == 1341; /*0x6094da*/
      goto LABEL_244; /*0x6094df*/
    case 700: /*0x6090e2*/
      if ( result != 1 && result != 1594 ) /*0x6094fa*/
        return 0; /*0x609505*/
      break;
    case 278: /*0x6090e2*/
      if ( result != 1579 && result != 1581 && result != 1474 && result != 1794 && result != 1795 ) /*0x60953f*/
        return 0; /*0x60954a*/
      break;
    case 255: /*0x6090e2*/
      if ( result != 1313 && result != 1314 ) /*0x609563*/
        return 0; /*0x60956e*/
      break;
    case 290: /*0x6090e2*/
      LOBYTE(result) = result == 1; /*0x609580*/
      return result; /*0x609584*/
    default:
      if ( v4 != 274 ) /*0x60958b*/
      {
        if ( v4 == 231 ) /*0x6095a1*/
          return result == 1 || result == 1398; /*0x6095b1*/
        if ( v4 == 254 ) /*0x6095c3*/
        {
          LOBYTE(result) = result == 1; /*0x6095ce*/
          return result; /*0x6095d2*/
        }
        if ( v4 != 230 && v4 != 243 && v4 != 244 ) /*0x6095e9*/
        {
          LOBYTE(result) = 0; /*0x6095ec*/
          return result; /*0x6095f0*/
        }
      }
      LOBYTE(result) = result == 1; /*0x609596*/
      return result; /*0x60959a*/
  }
  return 1; /*0x608f34*/
}



// ==== 0x006096A0  sub_6096A0  this=-  sig=ida-proto ====
char __fastcall sub_6096A0(int a1, HWND a2)
{
  HWND *v4; // eax
  _DWORD *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x6096b5*/
    return 0; /*0x6096b5*/
  v7 = a2; /*0x6096bc*/
  if ( !dword_AC1B04 ) /*0x6096c2*/
    return 0; /*0x6096c2*/
  v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v7) & ((1 << dword_AC1B0C) - 1))); /*0x6096e3*/
  if ( !v4 ) /*0x6096e8*/
    return 0; /*0x6096e8*/
  while ( *v4 != v7 ) /*0x6096f0*/
  {
    v4 = (HWND *)v4[129]; /*0x6096f2*/
    if ( !v4 ) /*0x6096fa*/
      return 0; /*0x6096fa*/
  }
  v6 = v4 + 1; /*0x609706*/
  if ( v6 && !v6[26] ) /*0x60970d*/
    return IsDialogControlVisible(a1, a2); /*0x609718*/
  else
    return 0; /*0x6096fc*/
}



// ==== 0x00609730  GetDialogDefaultButton  this=-  sig=csp ====
int __fastcall GetDialogDefaultButton(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int result; // eax
  _DWORD *v6; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = a1; /*0x60973c*/
  if ( !dword_AC1B04 ) /*0x609740*/
    goto LABEL_5; /*0x609740*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v7) & ((1 << dword_AC1B0C) - 1))); /*0x609761*/
  if ( !v3 ) /*0x609766*/
    goto LABEL_5; /*0x609766*/
  while ( *v3 != v7 ) /*0x60976e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609770*/
    if ( !v3 ) /*0x609778*/
      goto LABEL_5; /*0x609778*/
  }
  v6 = v3 + 1; /*0x60979f*/
  if ( v6 ) /*0x6097a4*/
    v4 = v6[27]; /*0x6097a6*/
  else
LABEL_5:
    v4 = 0; /*0x60977a*/
  result = GetDlgCtrlID(a2); /*0x60977d*/
  switch ( v4 ) /*0x609789*/
  {
    case 226: /*0x609789*/
      LOBYTE(result) = result == 1006; /*0x609796*/
      break;
    case 115: /*0x609789*/
    case 268: /*0x609789*/
    case 259: /*0x609789*/
      LOBYTE(result) = result == 1059; /*0x609a8c*/
      break;
    case 264: /*0x609789*/
    case 3015: /*0x609789*/
      LOBYTE(result) = result == 1745; /*0x609a7c*/
      break;
    case 148: /*0x609789*/
    case 182: /*0x609789*/
    case 163: /*0x609789*/
    case 216: /*0x609789*/
    case 3003: /*0x609789*/
    case 245: /*0x609789*/
    case 213: /*0x609789*/
    case 693: /*0x609789*/
    case 183: /*0x609789*/
    case 692: /*0x609789*/
    case 257: /*0x609789*/
    case 297: /*0x609789*/
    case 181: /*0x609789*/
    case 3002: /*0x609789*/
    case 256: /*0x609789*/
    case 184: /*0x609789*/
    case 214: /*0x609789*/
    case 293: /*0x609789*/
    case 278: /*0x609789*/
    case 285: /*0x609789*/
    case 284: /*0x609789*/
    case 275: /*0x609789*/
    case 265: /*0x609789*/
    case 271: /*0x609789*/
    case 276: /*0x609789*/
    case 270: /*0x609789*/
      LOBYTE(result) = result == 1670; /*0x609a6c*/
      break;
    case 258: /*0x609789*/
    case 261: /*0x609789*/
    case 107: /*0x609789*/
    case 187: /*0x609789*/
    case 279: /*0x609789*/
    case 3014: /*0x609789*/
      LOBYTE(result) = result == 1472; /*0x609a5c*/
      break;
    case 188: /*0x609789*/
    case 189: /*0x609789*/
    case 234: /*0x609789*/
    case 215: /*0x609789*/
    case 194: /*0x609789*/
    case 201: /*0x609789*/
    case 700: /*0x609789*/
    case 231: /*0x609789*/
    case 230: /*0x609789*/
    case 243: /*0x609789*/
    case 244: /*0x609789*/
    case 290: /*0x609789*/
    case 274: /*0x609789*/
    case 254: /*0x609789*/
    case 252: /*0x609789*/
      LOBYTE(result) = result == 2; /*0x609a4c*/
      break;
    case 212: /*0x609789*/
      LOBYTE(result) = result == 1; /*0x609a0a*/
      break;
    case 251: /*0x609789*/
      LOBYTE(result) = result == 7; /*0x609a20*/
      break;
    default:
      LOBYTE(result) = v4 == 255 && result == 1653; /*0x609a38*/
      break;
  }
  return result; /*0x609795*/
}



// ==== 0x00609AA0  sub_609AA0  this=-  sig=ida-proto ====
bool __fastcall sub_609AA0(int a1, HWND a2)
{
  HWND *v4; // eax
  _DWORD *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609ab5*/
    return 0; /*0x609ab5*/
  v7 = a2; /*0x609abc*/
  if ( !dword_AC1B04 ) /*0x609ac2*/
    return 0; /*0x609ac2*/
  v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v7) & ((1 << dword_AC1B0C) - 1))); /*0x609ae3*/
  if ( !v4 ) /*0x609ae8*/
    return 0; /*0x609ae8*/
  while ( *v4 != v7 ) /*0x609af0*/
  {
    v4 = (HWND *)v4[129]; /*0x609af2*/
    if ( !v4 ) /*0x609afa*/
      return 0; /*0x609afa*/
  }
  v6 = v4 + 1; /*0x609b06*/
  if ( v6 && !v6[26] ) /*0x609b0d*/
    return GetDialogDefaultButton(a1, a2); /*0x609b18*/
  else
    return 0; /*0x609afc*/
}



// ==== 0x00609B30  sub_609B30  this=-  sig=ida-proto ====
bool __fastcall sub_609B30(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // esi
  int DlgCtrlID; // edi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x609b3c*/
  if ( !dword_AC1B04 ) /*0x609b40*/
    goto LABEL_5; /*0x609b40*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x609b61*/
  if ( !v3 ) /*0x609b66*/
    goto LABEL_5; /*0x609b66*/
  while ( *v3 != v8 ) /*0x609b6e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609b70*/
    if ( !v3 ) /*0x609b78*/
      goto LABEL_5; /*0x609b78*/
  }
  v7 = v3 + 1; /*0x609ba2*/
  if ( v7 ) /*0x609ba7*/
    v4 = (void *)v7[27]; /*0x609ba9*/
  else
LABEL_5:
    v4 = 0; /*0x609b7a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x609b85*/
  return Event::IsValidActionType(v4) && DlgCtrlID == 1685; /*0x609b98*/
}



// ==== 0x00609BC0  sub_609BC0  this=-  sig=ida-proto ====
bool __fastcall sub_609BC0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( (unsigned __int8)SessionClass::GetGameSpeed(dword_A8B238) ) /*0x609bcd*/
    return 0; /*0x609bcd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609bea*/
  {
    v9 = a2; /*0x609bf1*/
    if ( dword_AC1B04 ) /*0x609bf7*/
    {
      v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609c18*/
      if ( v4 ) /*0x609c1d*/
      {
        while ( *v4 != v9 ) /*0x609c25*/
        {
          v4 = (HWND *)v4[129]; /*0x609c27*/
          if ( !v4 ) /*0x609c2f*/
            goto LABEL_7; /*0x609c2f*/
        }
        v7 = v4 + 1; /*0x609c95*/
        if ( v7 ) /*0x609c9a*/
        {
          if ( !v7[26] && (unsigned __int8)IsDialogControlVisible(a1, a2) ) /*0x609ca7*/
            return 1; /*0x609cb6*/
        }
      }
    }
  }
LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609c3b*/
    return 0; /*0x609c3b*/
  v9 = a2; /*0x609c46*/
  if ( !dword_AC1B04 ) /*0x609c4c*/
    return 0; /*0x609c4c*/
  v5 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609c71*/
  if ( !v5 ) /*0x609c76*/
    return 0; /*0x609c76*/
  while ( *v5 != v9 ) /*0x609c7e*/
  {
    v5 = (HWND *)v5[129]; /*0x609c80*/
    if ( !v5 ) /*0x609c88*/
      return 0; /*0x609c90*/
  }
  v8 = v5 + 1; /*0x609cbb*/
  return v8 && !v8[26] && (unsigned __int8)GetDialogDefaultButton(a1, a2); /*0x609cd8*/
}



// ==== 0x00609CF0  sub_609CF0  this=-  sig=ida-proto ====
bool __fastcall sub_609CF0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( !(unsigned __int8)SessionClass::GetGameSpeed(dword_A8B238) ) /*0x609cfd*/
    return 0; /*0x609cfd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609d1a*/
  {
    v9 = a2; /*0x609d21*/
    if ( dword_AC1B04 ) /*0x609d27*/
    {
      v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609d48*/
      if ( v4 ) /*0x609d4d*/
      {
        while ( *v4 != v9 ) /*0x609d55*/
        {
          v4 = (HWND *)v4[129]; /*0x609d57*/
          if ( !v4 ) /*0x609d5f*/
            goto LABEL_7; /*0x609d5f*/
        }
        v7 = v4 + 1; /*0x609dc5*/
        if ( v7 ) /*0x609dca*/
        {
          if ( !v7[26] && (unsigned __int8)IsDialogControlVisible(a1, a2) ) /*0x609dd7*/
            return 1; /*0x609de6*/
        }
      }
    }
  }
LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609d6b*/
    return 0; /*0x609d6b*/
  v9 = a2; /*0x609d76*/
  if ( !dword_AC1B04 ) /*0x609d7c*/
    return 0; /*0x609d7c*/
  v5 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609da1*/
  if ( !v5 ) /*0x609da6*/
    return 0; /*0x609da6*/
  while ( *v5 != v9 ) /*0x609dae*/
  {
    v5 = (HWND *)v5[129]; /*0x609db0*/
    if ( !v5 ) /*0x609db8*/
      return 0; /*0x609dc0*/
  }
  v8 = v5 + 1; /*0x609deb*/
  return v8 && !v8[26] && (unsigned __int8)GetDialogDefaultButton(a1, a2); /*0x609e08*/
}



// ==== 0x00609E20  FilterDialogButtonAction  this=-  sig=csp ====
char __fastcall FilterDialogButtonAction(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x609e2c*/
  if ( !dword_AC1B04 ) /*0x609e30*/
    goto LABEL_5; /*0x609e30*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v9) & ((1 << dword_AC1B0C) - 1))); /*0x609e51*/
  if ( !v3 ) /*0x609e56*/
    goto LABEL_5; /*0x609e56*/
  while ( *v3 != v9 ) /*0x609e5e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609e60*/
    if ( !v3 ) /*0x609e68*/
      goto LABEL_5; /*0x609e68*/
  }
  v7 = v3 + 1; /*0x609e94*/
  if ( v7 ) /*0x609e99*/
    v4 = v7[27]; /*0x609e9b*/
  else
LABEL_5:
    v4 = 0; /*0x609e6a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x609e6d*/
  switch ( v4 ) /*0x609e79*/
  {
    case 269: /*0x609e79*/
      if ( DlgCtrlID != 1473 ) /*0x609e80*/
        return DlgCtrlID == 1472; /*0x609e8b*/
      return 1; /*0x60a0ee*/
    case 217: /*0x609e79*/
      if ( DlgCtrlID == 1473 ) /*0x609ead*/
        return 1; /*0x609ead*/
      return DlgCtrlID == 1738; /*0x60a0de*/
    case 163: /*0x609e79*/
      if ( DlgCtrlID == 1231 ) /*0x609eca*/
        return 1; /*0x609eca*/
      return DlgCtrlID == 1232; /*0x609ed5*/
    case 261: /*0x609e79*/
      if ( DlgCtrlID == 1568 ) /*0x609ee7*/
        return 1; /*0x609ee7*/
      return DlgCtrlID == 1569; /*0x609ef2*/
    case 240: /*0x609e79*/
      return DlgCtrlID == 1472; /*0x609f0e*/
    case 206: /*0x609e79*/
      return DlgCtrlID == 1454; /*0x609f26*/
    case 288: /*0x609e79*/
      if ( DlgCtrlID == 1454 ) /*0x609f34*/
        return 1; /*0x609f34*/
      return DlgCtrlID == 2; /*0x609f3d*/
    case 289: /*0x609e79*/
      if ( DlgCtrlID == 1454 || DlgCtrlID == 1455 ) /*0x609f5a*/
        return 1; /*0x609f5a*/
      return DlgCtrlID == 2; /*0x609f63*/
    case 234: /*0x609e79*/
      if ( DlgCtrlID == 1600 /*0x609fb7*/
        || DlgCtrlID == 1602
        || DlgCtrlID == 1601
        || DlgCtrlID == 1603
        || DlgCtrlID == 1604
        || DlgCtrlID == 1605
        || DlgCtrlID == 1606 )
      {
        return 1; /*0x609fb7*/
      }
      return DlgCtrlID == 1607; /*0x609fc2*/
    case 184: /*0x609e79*/
      if ( DlgCtrlID == 1329 ) /*0x609fd4*/
        return 1; /*0x609fd4*/
      return DlgCtrlID == 1333; /*0x609fdf*/
    case 287: /*0x609e79*/
      return DlgCtrlID == 1472; /*0x609ffb*/
    case 277: /*0x609e79*/
      if ( DlgCtrlID == 1794 ) /*0x60a009*/
        return 1; /*0x60a009*/
      return DlgCtrlID == 1670; /*0x60a014*/
    case 211: /*0x609e79*/
      return DlgCtrlID == 2; /*0x60a02e*/
    case 207: /*0x609e79*/
      if ( DlgCtrlID == 1474 ) /*0x60a03c*/
        return 1; /*0x60a03c*/
      return DlgCtrlID == 2; /*0x60a045*/
    case 195: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a055*/
        return 1; /*0x60a055*/
      return DlgCtrlID == 2; /*0x60a05e*/
    case 283: /*0x609e79*/
      goto LABEL_57; /*0x60a066*/
    case 225: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a081*/
        return 1; /*0x60a081*/
      return DlgCtrlID == 2; /*0x60a086*/
    case 286: /*0x609e79*/
LABEL_57:
      if ( DlgCtrlID == 1474 ) /*0x60a06d*/
        return 1; /*0x60a06d*/
      return DlgCtrlID == 1670; /*0x60a074*/
    case 196: /*0x609e79*/
      if ( DlgCtrlID == 1421 ) /*0x60a09d*/
        return 1; /*0x60a09d*/
      return DlgCtrlID == 1422; /*0x60a0a4*/
    case 208: /*0x609e79*/
      return DlgCtrlID == 1; /*0x60a0bb*/
    case 252: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a0c7*/
        return 1; /*0x60a0c7*/
      return DlgCtrlID == 2; /*0x60a0cc*/
    case 294: /*0x609e79*/
      if ( DlgCtrlID == 6 ) /*0x60a0d9*/
        return 1; /*0x60a0d9*/
      return DlgCtrlID == 7; /*0x60a0db*/
  }
  return 0; /*0x609f09*/
}



// ==== 0x0060A100  sub_60A100  this=-  sig=ida-proto ====
bool __fastcall sub_60A100(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60a10c*/
  if ( !dword_AC1B04 ) /*0x60a110*/
    goto LABEL_5; /*0x60a110*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x60a131*/
  if ( !v3 ) /*0x60a136*/
    goto LABEL_5; /*0x60a136*/
  while ( *v3 != v8 ) /*0x60a13e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x60a140*/
    if ( !v3 ) /*0x60a148*/
      goto LABEL_5; /*0x60a148*/
  }
  v7 = v3 + 1; /*0x60a16f*/
  if ( v7 ) /*0x60a174*/
    v4 = v7[27]; /*0x60a176*/
  else
LABEL_5:
    v4 = 0; /*0x60a14a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60a14d*/
  return v4 == 226 && DlgCtrlID == 1821; /*0x60a159*/
}



// ==== 0x0060A180  EnumFunc  this=-  sig=csp ====
BOOL __stdcall EnumFunc(HWND hWnd, LPARAM a2)
{
  HWND v2; // esi
  HWND Parent; // edi
  int v4; // eax
  int v6; // eax

  v2 = hWnd; /*0x60a181*/
  Parent = GetParent(hWnd); /*0x60a190*/
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x60a19d*/
  {
    hWnd = v2; /*0x60a1a4*/
    if ( dword_AC1B04 ) /*0x60a1aa*/
    {
      v4 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x60a1cb*/
      if ( v4 ) /*0x60a1d0*/
      {
        while ( *(HWND *)v4 != hWnd ) /*0x60a1d8*/
        {
          v4 = *(_DWORD *)(v4 + 516); /*0x60a1da*/
          if ( !v4 ) /*0x60a1e2*/
            return 1; /*0x60a1eb*/
        }
        v6 = v4 + 4; /*0x60a1f2*/
        if ( v6 && !*(_DWORD *)(v6 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x60a204*/
        {
          if ( IsWindowVisible(v2) ) /*0x60a20e*/
            ++dword_AC1CAC; /*0x60a218*/
        }
      }
    }
  }
  return 1; /*0x60a1e4*/
}



// ==== 0x0060A250  sub_60A250  this=-  sig=csp ====
BOOL __stdcall sub_60A250(HWND hWnd, LPARAM a2)
{
  HWND v2; // esi
  HWND Parent; // edi
  int v4; // eax
  int v6; // eax

  v2 = hWnd; /*0x60a251*/
  Parent = GetParent(hWnd); /*0x60a260*/
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x60a26d*/
  {
    hWnd = v2; /*0x60a274*/
    if ( dword_AC1B04 ) /*0x60a27a*/
    {
      v4 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x60a29b*/
      if ( v4 ) /*0x60a2a0*/
      {
        while ( *(HWND *)v4 != hWnd ) /*0x60a2a8*/
        {
          v4 = *(_DWORD *)(v4 + 516); /*0x60a2aa*/
          if ( !v4 ) /*0x60a2b2*/
            return 1; /*0x60a2bb*/
        }
        v6 = v4 + 4; /*0x60a2c2*/
        if ( v6 && !*(_DWORD *)(v6 + 104) && GetDialogDefaultButton((int)Parent, v2) ) /*0x60a2d4*/
        {
          if ( IsWindowVisible(v2) ) /*0x60a2de*/
            ++dword_AC4894; /*0x60a2e8*/
        }
      }
    }
  }
  return 1; /*0x60a2b4*/
}



// ==== 0x0060A330  Dialog::HandleTabKey  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_HandleTabKey(HWND hWnd, LPARAM a2)
{
  HWND *v3; // eax
  HWND Parent; // ebp
  HWND *v5; // eax
  _DWORD *v6; // eax
  HWND *v8; // eax
  _DWORD *v9; // eax
  HWND v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  HWND v12; // [esp+14h] [ebp-4h] BYREF
  HWND hWnda; // [esp+1Ch] [ebp+4h]

  v10 = hWnd; /*0x60a341*/
  hWnda = 0; /*0x60a345*/
  if ( dword_AC1B04 ) /*0x60a34d*/
  {
    v3 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v10) & ((1 << dword_AC1B0C) - 1))); /*0x60a36e*/
    if ( v3 ) /*0x60a373*/
    {
      while ( *v3 != v10 ) /*0x60a37b*/
      {
        v3 = (HWND *)v3[129]; /*0x60a37d*/
        if ( !v3 ) /*0x60a385*/
          goto LABEL_7; /*0x60a385*/
      }
      hWnda = (HWND)(v3 + 1); /*0x60a390*/
    }
  }
LABEL_7:
  if ( !hWnda ) /*0x60a39a*/
    return 1; /*0x60a39a*/
  Parent = GetParent(hWnd); /*0x60a3ac*/
  if ( !SessionClass::GetGameSpeed(dword_A8B238) ) /*0x60a3ae*/
  {
    if ( (GetWindowLongA(hWnd, -16) & 0xB) == 0xB ) /*0x60a3cb*/
    {
      v10 = hWnd; /*0x60a3d2*/
      if ( dword_AC1B04 ) /*0x60a3d8*/
      {
        v5 = (HWND *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v10)); /*0x60a3ef*/
        if ( v5 ) /*0x60a3f4*/
        {
          while ( *v5 != v10 ) /*0x60a3fc*/
          {
            v5 = (HWND *)v5[129]; /*0x60a3fe*/
            if ( !v5 ) /*0x60a406*/
              goto LABEL_18; /*0x60a406*/
          }
          v6 = v5 + 1; /*0x60a40e*/
          if ( v6 ) /*0x60a413*/
          {
            if ( !v6[26] && IsDialogControlVisible((int)Parent, hWnd) ) /*0x60a420*/
              goto LABEL_22; /*0x60a427*/
          }
        }
      }
    }
LABEL_18:
    if ( (GetWindowLongA(hWnd, -16) & 0xB) == 0xB ) /*0x60a433*/
    {
      v12 = hWnd; /*0x60a444*/
      v11 = 0; /*0x60a448*/
      HashTable::Get(&dword_AC1B00, &v12, &v11); /*0x60a450*/
      if ( v11 ) /*0x60a45b*/
      {
        if ( !*(_DWORD *)(v11 + 104) && GetDialogDefaultButton((int)Parent, hWnd) ) /*0x60a468*/
        {
LABEL_22:
          *((_DWORD *)hWnda + 44) = 1; /*0x60a471*/
          return 1; /*0x60a486*/
        }
      }
    }
  }
  if ( !SessionClass::GetGameSpeed(dword_A8B238) ) /*0x60a48e*/
    goto LABEL_33; /*0x60a48e*/
  if ( (GetWindowLongA(hWnd, -16) & 0xB) != 0xB /*0x60a4da*/
    || (v12 = hWnd, v11 = 0, HashTable::Get(&dword_AC1B00, &v12, &v11), !v11)
    || *(_DWORD *)(v11 + 104)
    || !IsDialogControlVisible((int)Parent, hWnd) )
  {
    if ( (GetWindowLongA(hWnd, -16) & 0xB) != 0xB ) /*0x60a4f1*/
      goto LABEL_33; /*0x60a4f1*/
    v10 = hWnd; /*0x60a4f8*/
    if ( !dword_AC1B04 ) /*0x60a4fe*/
      goto LABEL_33; /*0x60a4fe*/
    v8 = (HWND *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v10)); /*0x60a515*/
    if ( !v8 ) /*0x60a51a*/
      goto LABEL_33; /*0x60a51a*/
    while ( *v8 != v10 ) /*0x60a522*/
    {
      v8 = (HWND *)v8[129]; /*0x60a524*/
      if ( !v8 ) /*0x60a52c*/
        goto LABEL_33; /*0x60a52c*/
    }
    v9 = v8 + 1; /*0x60a55b*/
    if ( !v9 || v9[26] || !GetDialogDefaultButton((int)Parent, hWnd) ) /*0x60a56d*/
    {
LABEL_33:
      if ( (unsigned __int8)FilterDialogButtonAction(Parent, hWnd) ) /*0x60a532*/
        *((_DWORD *)hWnda + 44) = 3; /*0x60a53f*/
      return 1; /*0x60a554*/
    }
  }
  *((_DWORD *)hWnda + 44) = 2; /*0x60a581*/
  return 1; /*0x60a47a*/
}



// ==== 0x0060A5B0  Dialog::DispatchEvent  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_DispatchEvent(HWND hWnd, LPARAM a2)
{
  HWND v2; // ebp
  HWND Parent; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // eax
  HWND *i; // eax
  HWND *j; // eax
  int v12; // edi
  int DlgCtrlID; // eax
  int v14; // edi
  signed int v15; // eax
  int v16; // eax
  char v17; // [esp+13h] [ebp-11h] BYREF
  HWND v18; // [esp+14h] [ebp-10h]
  HWND v19; // [esp+18h] [ebp-Ch] BYREF
  HWND v20; // [esp+1Ch] [ebp-8h] BYREF
  HWND v21; // [esp+20h] [ebp-4h] BYREF

  v2 = hWnd; /*0x60a5b5*/
  Parent = GetParent(hWnd); /*0x60a5c2*/
  v4 = 0; /*0x60a5c9*/
  v18 = Parent; /*0x60a5cb*/
  v19 = v2; /*0x60a5d1*/
  if ( dword_AC1B04 ) /*0x60a5d5*/
  {
    v5 = (_DWORD *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v19)); /*0x60a5ec*/
    if ( v5 ) /*0x60a5f1*/
    {
      while ( (HWND)*v5 != v19 ) /*0x60a5f9*/
      {
        v5 = (_DWORD *)v5[129]; /*0x60a5fb*/
        if ( !v5 ) /*0x60a603*/
          goto LABEL_7; /*0x60a603*/
      }
      v4 = v5 + 1; /*0x60a60b*/
    }
  }
LABEL_7:
  if ( !v4 ) /*0x60a610*/
    return 1; /*0x60aa44*/
  if ( !(unsigned __int8)IsValidActionDialog(Parent, v2) ) /*0x60a621*/
  {
    LOBYTE(hWnd) = 0; /*0x60a6e7*/
    if ( (unsigned __int8)UI_Helper_602B90(Parent, v2) ) /*0x60a6ec*/
    {
      v9 = v4[5]; /*0x60a6f5*/
      v4[28] = 2; /*0x60a6f8*/
      if ( !v9 ) /*0x60a701*/
      {
        v20 = Parent; /*0x60a70c*/
        if ( dword_AC1B04 ) /*0x60a712*/
        {
          for ( i = (HWND *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v20)); /*0x60a72e*/
                i;
                i = (HWND *)i[129] )
          {
            if ( *i == v20 ) /*0x60a736*/
              break; /*0x60a736*/
          }
        }
        GetDlgCtrlID(v2); /*0x60a743*/
        v4[5] = 0; /*0x60a749*/
      }
LABEL_77:
      v4[38] = 0; /*0x60a9c8*/
      v4[39] = GetTickCount(); /*0x60a9dc*/
      v4[40] = UI_Helper_603240(Parent, v2); /*0x60a9e7*/
      goto LABEL_78; /*0x60a9e7*/
    }
    v20 = Parent; /*0x60a75a*/
    if ( dword_AC1B04 ) /*0x60a760*/
    {
      for ( j = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v20) & ((1 << dword_AC1B0C) - 1))); j; j = (HWND *)j[129] ) /*0x60a786*/
      {
        if ( *j == v20 ) /*0x60a78e*/
          break; /*0x60a78e*/
      }
    }
    GetDlgCtrlID(v2); /*0x60a7a1*/
    v21 = Parent; /*0x60a7ab*/
    v12 = 0; /*0x60a7af*/
    v20 = 0; /*0x60a7b8*/
    HashTable::Get(&dword_AC1B00, &v21, &v20); /*0x60a7bc*/
    if ( v20 ) /*0x60a7c7*/
      v12 = *((_DWORD *)v20 + 27); /*0x60a7c9*/
    DlgCtrlID = GetDlgCtrlID(v2); /*0x60a7cd*/
    if ( v12 != 148 /*0x60a8fc*/
      && v12 != 216
      && v12 != 245
      && v12 != 226
      && v12 != 213
      && v12 != 257
      && v12 != 297
      && v12 != 215
      && v12 != 187
      && v12 != 256
      && v12 != 214
      && v12 != 293
      && v12 != 290
      && v12 != 274
      && v12 != 231
      && v12 != 278
      && v12 != 285
      && v12 != 284
      && v12 != 254
      && v12 != 271
      && v12 != 279
      && v12 != 276
      && v12 != 230
      && v12 != 243
      && v12 != 244
      && v12 != 700
      && v12 != 270
      && v12 != 264
      && v12 != 3014
      && v12 != 3015
      || DlgCtrlID != 1820 )
    {
      switch ( v12 ) /*0x60a908*/
      {
        case 148: /*0x60a908*/
          if ( DlgCtrlID != 1770 && DlgCtrlID != 1772 ) /*0x60a916*/
          {
            if ( DlgCtrlID != 1771 ) /*0x60a91d*/
              goto LABEL_78; /*0x60a91d*/
            LOBYTE(hWnd) = 1; /*0x60a923*/
            v4[28] = 4; /*0x60a928*/
            goto LABEL_74; /*0x60a92f*/
          }
          break;
        case 259: /*0x60a908*/
          if ( DlgCtrlID != 1835 ) /*0x60a93e*/
            goto LABEL_78; /*0x60a93e*/
          LOBYTE(hWnd) = 1; /*0x60a944*/
          v4[28] = 4; /*0x60a949*/
          goto LABEL_74; /*0x60a950*/
        case 3015: /*0x60a908*/
          if ( DlgCtrlID != 1835 ) /*0x60a95f*/
            goto LABEL_78; /*0x60a95f*/
          LOBYTE(hWnd) = 1; /*0x60a965*/
          v4[28] = 4; /*0x60a96a*/
          goto LABEL_74; /*0x60a971*/
        default:
          if ( v12 != 196 || DlgCtrlID != 1961 ) /*0x60a980*/
          {
LABEL_78:
            v15 = v4[40]; /*0x60a9ed*/
            if ( v15 <= 0 ) /*0x60a9f5*/
            {
              if ( (_BYTE)hWnd ) /*0x60aa27*/
              {
                v16 = v4[30]; /*0x60aa29*/
                if ( v16 ) /*0x60aa2e*/
                {
                  v4[37] = *(__int16 *)(v16 + 6); /*0x60aa34*/
                  *((_BYTE *)v4 + 168) = 0; /*0x60aa3a*/
                }
              }
            }
            else
            {
              SetTimer(v2, 0, v15, 0); /*0x60a9fd*/
              if ( (_BYTE)hWnd ) /*0x60aa09*/
              {
                *((_BYTE *)v4 + 168) = 1; /*0x60aa0b*/
                return 1; /*0x60aa1e*/
              }
            }
            return 1; /*0x60aa09*/
          }
          break;
      }
    }
    LOBYTE(hWnd) = 1; /*0x60a982*/
    v4[28] = 4; /*0x60a987*/
LABEL_74:
    if ( !v4[30] ) /*0x60a98e*/
    {
      v17 = 0; /*0x60a99d*/
      v14 = DispatchDialogControlAction(v18, v2); /*0x60a9b0*/
      v4[30] = GetDialogControlSHP(v18, v2, &v17); /*0x60a9b7*/
      v4[29] = v14; /*0x60a9ba*/
      *((_BYTE *)v4 + 124) = v17; /*0x60a9c1*/
    }
    Parent = v18; /*0x60a9c4*/
    goto LABEL_77; /*0x60a9c4*/
  }
  v4[28] = 1; /*0x60a630*/
  *((_BYTE *)v4 + 168) = 0; /*0x60a633*/
  v4[32] = 1; /*0x60a63a*/
  v4[33] = ValidateDialogEvent(Parent, v2); /*0x60a649*/
  v4[34] = CtlDialogColorHandler(Parent, v2); /*0x60a658*/
  v4[35] = ValidateDialogControl(Parent, v2); /*0x60a663*/
  v20 = Parent; /*0x60a66d*/
  v6 = 0; /*0x60a675*/
  hWnd = 0; /*0x60a67e*/
  HashTable::Get(&dword_AC1B00, &v20, &hWnd); /*0x60a682*/
  if ( hWnd ) /*0x60a68d*/
    v6 = *((_DWORD *)hWnd + 27); /*0x60a68f*/
  v7 = GetDlgCtrlID(v2); /*0x60a693*/
  if ( (v6 == 259 || v6 == 3015) && v7 == 1780 ) /*0x60a6ae*/
  {
    v4[36] = *((_DWORD *)dword_8871E0 + 433); /*0x60a6bd*/
    return 1; /*0x60a6c4*/
  }
  else
  {
    v4[36] = -1; /*0x60a6d2*/
    return 1; /*0x60a6d9*/
  }
}



// ==== 0x0060AA60  sub_60AA60  this=-  sig=csp ====
BOOL __stdcall sub_60AA60(HWND hWnd, LPARAM a2)
{
  HWND Parent; // eax

  Parent = GetParent(hWnd); /*0x60aa66*/
  if ( IsValidActionDialog((int)Parent, hWnd) ) /*0x60aa70*/
    SendMessageA(hWnd, 0x4EEu, 0, 0); /*0x60aa83*/
  return 1; /*0x60aa8e*/
}



// ==== 0x0060AAA0  Dialog::EnumAndCleanup  this=Dialog  sig=csp ====
BOOL __thiscall Dialog::EnumAndCleanup(Dialog *this)
{
  return EnumChildWindows((HWND)this, sub_60AA60, 0); /*0x60aaae*/
}



// ==== 0x0060AAB0  GadgetClass::FindByWindow  this=GadgetClass  sig=csp ====
BOOL __stdcall GadgetClass_FindByWindow(HWND hWnd, LPARAM a2)
{
  HWND Parent; // edi
  _DWORD *v3; // esi
  HWND *v4; // eax
  HWND *v5; // eax
  int v6; // esi
  int DlgCtrlID; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  bool v11; // al
  int v12; // eax
  HWND v14; // [esp+Ch] [ebp-94h] BYREF
  _DWORD *v15; // [esp+10h] [ebp-90h]
  int v16; // [esp+14h] [ebp-8Ch] BYREF
  HWND v17; // [esp+18h] [ebp-88h] BYREF
  HWND v18; // [esp+1Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+20h] [ebp-80h] BYREF

  Parent = GetParent(hWnd); /*0x60aac7*/
  v3 = 0; /*0x60aace*/
  v14 = hWnd; /*0x60aad0*/
  v15 = 0; /*0x60aad6*/
  if ( dword_AC1B04 ) /*0x60aada*/
  {
    v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v14) & ((1 << dword_AC1B0C) - 1))); /*0x60aafb*/
    if ( v4 ) /*0x60ab00*/
    {
      while ( *v4 != v14 ) /*0x60ab08*/
      {
        v4 = (HWND *)v4[129]; /*0x60ab0a*/
        if ( !v4 ) /*0x60ab12*/
          goto LABEL_7; /*0x60ab12*/
      }
      v3 = v4 + 1; /*0x60ab1a*/
      v15 = v4 + 1; /*0x60ab1d*/
    }
  }
LABEL_7:
  if ( v3 ) /*0x60ab23*/
  {
    v14 = Parent; /*0x60ab2e*/
    if ( !dword_AC1B04 ) /*0x60ab34*/
      goto LABEL_12; /*0x60ab34*/
    v5 = (HWND *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v14)); /*0x60ab4b*/
    if ( !v5 ) /*0x60ab50*/
      goto LABEL_12; /*0x60ab50*/
    while ( *v5 != v14 ) /*0x60ab58*/
    {
      v5 = (HWND *)v5[129]; /*0x60ab5e*/
      if ( !v5 ) /*0x60ab66*/
        goto LABEL_12; /*0x60ab66*/
    }
    v9 = v5 + 1; /*0x60acaf*/
    if ( v9 ) /*0x60acb4*/
      v6 = v9[27]; /*0x60acba*/
    else
LABEL_12:
      v6 = 0; /*0x60ab68*/
    DlgCtrlID = GetDlgCtrlID(hWnd); /*0x60ab6b*/
    if ( (v6 == 148 /*0x60ac9e*/
       || v6 == 216
       || v6 == 245
       || v6 == 226
       || v6 == 213
       || v6 == 257
       || v6 == 297
       || v6 == 215
       || v6 == 187
       || v6 == 256
       || v6 == 214
       || v6 == 293
       || v6 == 290
       || v6 == 274
       || v6 == 231
       || v6 == 278
       || v6 == 285
       || v6 == 284
       || v6 == 254
       || v6 == 271
       || v6 == 279
       || v6 == 276
       || v6 == 230
       || v6 == 243
       || v6 == 244
       || v6 == 700
       || v6 == 270
       || v6 == 264
       || v6 == 3014
       || v6 == 3015)
      && DlgCtrlID == 1820 )
    {
      v8 = 37; /*0x60aca0*/
    }
    else if ( (v6 == 188 || v6 == 189 || v6 == 194 || v6 == 201 || v6 == 258 || v6 == 3014) /*0x60acfe*/
           && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
    {
      v8 = 14; /*0x60ad04*/
    }
    else
    {
      v8 = 0; /*0x60ad00*/
    }
    v18 = Parent; /*0x60ad12*/
    v15[55] = v8; /*0x60ad16*/
    v14 = 0; /*0x60ad26*/
    HashTable::Get(&dword_AC1B00, &v18, &v14); /*0x60ad2e*/
    if ( !v14 ) /*0x60ad39*/
      goto LABEL_86; /*0x60ad39*/
    v10 = *((_DWORD *)v14 + 27); /*0x60ad3f*/
    if ( v10 != 269 /*0x60adc9*/
      && v10 != 217
      && v10 != 240
      && v10 != 206
      && v10 != 288
      && v10 != 289
      && v10 != 277
      && v10 != 211
      && v10 != 207
      && v10 != 287
      && v10 != 195
      && v10 != 283
      && v10 != 225
      && v10 != 286
      && v10 != 196
      && v10 != 304
      && v10 != 208
      && v10 != 252
      && v10 != 294 )
    {
      goto LABEL_86; /*0x60adc9*/
    }
    *((_DWORD *)v14 + 44) = 2; /*0x60adcf*/
    v17 = hWnd; /*0x60ade4*/
    GetClassNameA(hWnd, ClassName, 128); /*0x60ade8*/
    if ( !strcmp(ClassName, g_INI_Key_Edit) || !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x60ae37*/
      goto LABEL_85; /*0x60ae5c*/
    if ( !strcmp(ClassName, g_INI_Key_ListBox) && (v16 = 0, HashTable::Get(&dword_AC1B00, &v17, &v16)) ) /*0x60aeab*/
    {
      v11 = *(_DWORD *)(v16 + 104) == 1; /*0x60aebc*/
    }
    else
    {
      if ( strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x60aed0*/
        goto LABEL_86; /*0x60aef5*/
      v11 = (GetWindowLongA(v17, -16) & 3) != 3; /*0x60af09*/
    }
    if ( v11 ) /*0x60af0e*/
    {
LABEL_85:
      v12 = 192; /*0x60af10*/
LABEL_87:
      v15[50] = v12; /*0x60af19*/
      return 1; /*0x60af1d*/
    }
LABEL_86:
    v12 = 0; /*0x60af17*/
    goto LABEL_87; /*0x60af17*/
  }
  return 1; /*0x60af23*/
}



// ==== 0x0060AF50  UI_Get  this=Control  sig=csp ====
BOOL __fastcall sub_60AF50(HWND hWnd, _DWORD *a2)
{
  HWND Parent; // ebp
  char GameSpeed; // bl
  int v6; // ebp
  int v7; // ecx
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60af67*/
  GameSpeed = SessionClass::GetGameSpeed(dword_A8B238); /*0x60af6e*/
  GetWindowRect(Parent, &Rect); /*0x60af76*/
  v6 = 0; /*0x60af7c*/
  if ( !GameSpeed )
    v6 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v7 = 0; /*0x60afb0*/
  if ( !GameSpeed )
    v7 = (Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2;
  MoveWindow(hWnd, v6 + *a2, v7 + a2[1], a2[2], a2[3], 0); /*0x60afe4*/
  return InvalidateRect(hWnd, 0, 0); /*0x60aff5*/
}



// ==== 0x0060B000  RepositionGameSpeedIndicator  this=Control  sig=csp ====
BOOL __fastcall RepositionGameSpeedIndicator(HWND hWnd, int a2)
{
  HWND Parent; // esi
  char GameSpeedSessionClass; // bl
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  HWND v10; // eax
  _DWORD *v12; // [esp+10h] [ebp-54h]
  int nWidtha; // [esp+14h] [ebp-50h]
  int v15; // [esp+1Ch] [ebp-48h]
  struct tagRECT Rect; // [esp+24h] [ebp-40h] BYREF
  struct tagRECT v17; // [esp+34h] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+44h] [ebp-20h] BYREF
  struct tagRECT v19; // [esp+54h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b019*/
  GameSpeedSessionClass = SessionClass::GetGameSpeed(dword_A8B238); /*0x60b020*/
  GetWindowRect(Parent, &Rect); /*0x60b02e*/
  GetWindowRect(hWnd, &v19); /*0x60b036*/
  if ( GameSpeedSessionClass )
  {
    v8 = *((__int16 *)dword_B0F9EC + 2); /*0x60b134*/
    nWidtha = *((__int16 *)dword_B0F9EC + 1); /*0x60b145*/
    v12 = dword_B0FC48; /*0x60b149*/
    v9 = Rect.right - Rect.left - 147; /*0x60b14d*/
    v10 = GetParent(hWnd); /*0x60b14f*/
    GetWindowRect(v10, &v18); /*0x60b15b*/
    GetWindowRect(hWnd, &v17); /*0x60b163*/
    return MoveWindow( /*0x60b1a0*/
             hWnd,
             v9,
             v12[1] + v8 * (((v17.bottom - v17.top) / 2 + v17.top - v18.top - 198) / 44),
             nWidtha,
             v8,
             0);
  }
  else
  {
    v5 = *((_DWORD *)dword_B0FC24 + 3); /*0x60b0d8*/
    v15 = *((_DWORD *)dword_B0FC24 + 1); /*0x60b0db*/
    v6 = ((Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2)
       - ((*(_DWORD *)(a2 + 4) - 600) / 2 < 0 ? 0 : (*(_DWORD *)(a2 + 4) - 600) / 2)
       + v19.top
       - v15
       - Rect.top;
    if ( (int)abs32(v6 % v5) >= (int)abs32(v6 / v5 * v5 + v5 - v6) ) /*0x60b115*/
      v7 = v6 / v5 + 1; /*0x60b1a6*/
    else
      v7 = v6 / v5; /*0x60b11b*/
    return MoveWindow(
             hWnd,
             Rect.right
           - ((Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2)
           - Rect.left
           - 156,
             v15 + v7 * v5,
             *((__int16 *)dword_B0FAC4 + 1),
             *((__int16 *)dword_B0FAC4 + 2),
             0);
  }
}



// ==== 0x0060B1D0  UI_Get_60B1D0  this=Control  sig=csp ====
BOOL __fastcall sub_60B1D0(HWND hWnd, HWND a2)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v6; // edi
  LONG top; // esi
  int v8; // ebx
  HWND *v9; // eax
  int v10; // eax
  _DWORD *v12; // eax
  HWND v13; // [esp+10h] [ebp-2Ch] BYREF
  int v14; // [esp+14h] [ebp-28h]
  int v15; // [esp+18h] [ebp-24h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT v17; // [esp+2Ch] [ebp-10h] BYREF

  v13 = a2; /*0x60b1d9*/
  Parent = GetParent(hWnd); /*0x60b1e9*/
  GameSpeed = SessionClass::GetGameSpeed(dword_A8B238); /*0x60b1f0*/
  GetWindowRect(Parent, &Rect); /*0x60b1fe*/
  GetWindowRect(hWnd, &v17); /*0x60b206*/
  right = Rect.right; /*0x60b20a*/
  v15 = 0; /*0x60b214*/
  if ( !GameSpeed )
    v15 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v14 = 0; /*0x60b244*/
  if ( !GameSpeed )
    v14 = ((Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2)
        - ((*((_DWORD *)v13 + 1) - 600) / 2 < 0 ? 0 : (*((_DWORD *)v13 + 1) - 600) / 2);
  v6 = v17.right - v17.left; /*0x60b296*/
  top = v17.top; /*0x60b298*/
  v8 = v17.bottom - v17.top; /*0x60b29c*/
  v13 = hWnd; /*0x60b29e*/
  if ( dword_AC1B04 ) /*0x60b2a4*/
  {
    v9 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v13) & ((1 << dword_AC1B0C) - 1))); /*0x60b2c5*/
    if ( v9 ) /*0x60b2ca*/
    {
      while ( *v9 != v13 ) /*0x60b2d2*/
      {
        v9 = (HWND *)v9[129]; /*0x60b2d4*/
        if ( !v9 ) /*0x60b2dc*/
          goto LABEL_9; /*0x60b2dc*/
      }
      v12 = v9 + 1; /*0x60b327*/
      if ( v12 ) /*0x60b32c*/
      {
        v10 = v12[55]; /*0x60b32e*/
        if ( v10 ) /*0x60b336*/
        {
          right = Rect.right; /*0x60b338*/
          top = v17.top; /*0x60b33c*/
          return MoveWindow(hWnd, right - v10 - v6 - v15 - Rect.left, v14 + top - Rect.top, v6, v8, 0); /*0x60b340*/
        }
      }
    }
LABEL_9:
    right = Rect.right; /*0x60b2de*/
    top = v17.top; /*0x60b2e2*/
  }
  v10 = (168 - v6) / 2; /*0x60b2f0*/
  return MoveWindow(hWnd, right - v10 - v6 - v15 - Rect.left, v14 + top - Rect.top, v6, v8, 0); /*0x60b31b*/
}



// ==== 0x0060B350  ObjectClass::UI_Get_60B350  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B350(ObjectClass *this)
{
  ObjectClass *v1; // edi
  HWND Parent; // esi
  char GameSpeed; // bl
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  struct tagRECT Rect; // [esp+14h] [ebp-20h] BYREF
  struct tagRECT v11; // [esp+24h] [ebp-10h] BYREF

  v1 = this; /*0x60b357*/
  Parent = GetParent((HWND)this); /*0x60b369*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b370*/
  GetWindowRect(Parent, &Rect); /*0x60b37e*/
  GetWindowRect((HWND)v1, &v11); /*0x60b386*/
  if ( GameSpeed )
  {
    v5 = *(__int16 *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[572] + 4); /*0x60b409*/
    v4 = *(__int16 *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[572] + 2); /*0x60b40d*/
    v6 = Rect.right - Rect.left - 147; /*0x60b414*/
    v7 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1180] + 4) - v5; /*0x60b41a*/
  }
  else
  {
    v4 = *(__int16 *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[788] + 2); /*0x60b3b5*/
    v5 = *(__int16 *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[788] + 4); /*0x60b3b9*/
    v6 = Rect.right
       - ((Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2)
       - Rect.left
       - 156;
    v1 = this; /*0x60b3e1*/
    v7 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 4) /*0x60b3e5*/
       + *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 12)
       * ((*(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] + 4)
         - *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 4))
        / *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 12)
        - 1);
  }
  return MoveWindow((HWND)v1, v6, v7, v4, v5, 0); /*0x60b3f4*/
}



// ==== 0x0060B420  ObjectClass::UI_Get_60B420  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B420(ObjectClass *this)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v5; // esi
  int v6; // ebp
  ObjectClass **v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // eax
  ObjectClass *v13; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-24h]
  struct tagRECT Rect; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT v16; // [esp+28h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b435*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b43c*/
  GetClientRect(Parent, &Rect); /*0x60b444*/
  GetWindowRect((HWND)this, &v16); /*0x60b450*/
  right = Rect.right; /*0x60b45a*/
  v14 = 0; /*0x60b45e*/
  if ( !GameSpeed )
    v14 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = v16.right - v16.left; /*0x60b499*/
  v6 = v16.bottom - v16.top; /*0x60b49f*/
  v13 = this; /*0x60b4a1*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60b4a7*/
    goto LABEL_8; /*0x60b4a7*/
  v7 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60b4c8*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v13)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v7 ) /*0x60b4cd*/
    goto LABEL_7; /*0x60b4cd*/
  while ( *v7 != v13 ) /*0x60b4d5*/
  {
    v7 = (ObjectClass **)v7[129]; /*0x60b4d7*/
    if ( !v7 ) /*0x60b4df*/
      goto LABEL_7; /*0x60b4df*/
  }
  v11 = v7 + 1; /*0x60b514*/
  if ( !v11 || (v8 = v11[55]) == 0 ) /*0x60b523*/
  {
LABEL_7:
    right = Rect.right; /*0x60b4e1*/
LABEL_8:
    v8 = (168 - v5) / 2; /*0x60b4e5*/
    goto LABEL_9; /*0x60b4ef*/
  }
  right = Rect.right; /*0x60b525*/
LABEL_9:
  v9 = right - v8 - v5 - v14 - Rect.left; /*0x60b4f1*/
  if ( GameSpeed ) /*0x60b503*/
    v10 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1184] + 4); /*0x60b50b*/
  else
    v10 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] + 4); /*0x60b530*/
  return MoveWindow((HWND)this, v9, v10 - v6, v5, v6, 0); /*0x60b542*/
}



// ==== 0x0060B550  ObjectClass::UI_Get_60B550  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B550(ObjectClass *this)
{
  HWND Parent; // edi
  char GameSpeed; // bl
  int v4; // edi
  int v5; // edx
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v8; // [esp+20h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b565*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b56c*/
  GetClientRect(Parent, &Rect); /*0x60b574*/
  GetWindowRect((HWND)this, &v8); /*0x60b580*/
  v4 = 0; /*0x60b58a*/
  if ( !GameSpeed )
    v4 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = 0; /*0x60b5ba*/
  if ( !GameSpeed )
    v5 = (Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2;
  return MoveWindow( /*0x60b5fe*/
           (HWND)this,
           v4 + Rect.left + 10,
           Rect.bottom - (v8.bottom - v8.top) - v5 - 1,
           v8.right - v8.left,
           v8.bottom - v8.top,
           0);
}



// ==== 0x0060B610  ObjectClass::UI_Get_60B610  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B610(ObjectClass *this)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v5; // esi
  int v6; // ebp
  ObjectClass **v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  _DWORD *v12; // eax
  ObjectClass *v13; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-24h]
  struct tagRECT Rect; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT v16; // [esp+28h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b625*/
  GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b62c*/
  GetClientRect(Parent, &Rect); /*0x60b634*/
  GetWindowRect((HWND)this, &v16); /*0x60b640*/
  right = Rect.right; /*0x60b64a*/
  v14 = 0; /*0x60b64e*/
  if ( !GameSpeed )
    v14 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = v16.right - v16.left; /*0x60b689*/
  v6 = v16.bottom - v16.top; /*0x60b68f*/
  v13 = this; /*0x60b691*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60b697*/
    goto LABEL_8; /*0x60b697*/
  v7 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60b6b8*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v13)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v7 ) /*0x60b6bd*/
    goto LABEL_7; /*0x60b6bd*/
  while ( *v7 != v13 ) /*0x60b6c5*/
  {
    v7 = (ObjectClass **)v7[129]; /*0x60b6c7*/
    if ( !v7 ) /*0x60b6cf*/
      goto LABEL_7; /*0x60b6cf*/
  }
  v12 = v7 + 1; /*0x60b724*/
  if ( !v12 || (v8 = v12[55]) == 0 ) /*0x60b733*/
  {
LABEL_7:
    right = Rect.right; /*0x60b6d1*/
LABEL_8:
    v8 = (168 - v5) / 2; /*0x60b6d5*/
    goto LABEL_9; /*0x60b6df*/
  }
  right = Rect.right; /*0x60b735*/
LABEL_9:
  v9 = right - v8 - v5 - v14 - Rect.left; /*0x60b6e1*/
  v10 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1184]; /*0x60b6f1*/
  if ( !GameSpeed ) /*0x60b6f9*/
    v10 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144]; /*0x60b6fb*/
  return MoveWindow((HWND)this, v9, *(_DWORD *)(v10 + 4) + *(_DWORD *)(v10 + 12) - v6, v5, v6, 0); /*0x60b718*/
}



// ==== 0x0060B740  ObjectClass::method_60B740  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_60B740(ObjectClass *this)
{
  HWND Parent; // eax
  struct tagRECT v4; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b748*/
  GetWindowRect(Parent, &Rect); /*0x60b75a*/
  GetWindowRect((HWND)this, &v4); /*0x60b762*/
  return MoveWindow((HWND)this, v4.left - Rect.left, v4.top - Rect.top, v4.right - v4.left, v4.bottom - v4.top, 0); /*0x60b791*/
}



// ==== 0x0060B7A0  ObjectClass::UI_Get_60B7A0  this=ObjectClass  sig=csp ====
char __thiscall UI_Get_60B7A0(ObjectClass *this)
{
  HWND Parent; // edi
  char result; // al
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  struct tagRECT v11; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  Parent = GetParent((HWND)this); /*0x60b7b3*/
  result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b7b5*/
  if ( result )
  {
    GetWindowRect((HWND)this, &Rect); /*0x60b7cf*/
    GetWindowRect(Parent, &v11); /*0x60b7d7*/
    v4 = v11.right - v11.left; /*0x60b7e7*/
    v5 = 0; /*0x60b7e9*/
    if ( v11.right - v11.left <= 800 )
    {
      if ( v11.right - v11.left < 800 ) /*0x60b802*/
        v5 = (v4 - 800) / 2; /*0x60b80b*/
    }
    else
    {
      v5 = (v4 - 800) / 2 < 0 ? 0 : (v4 - 800) / 2;
    }
    v6 = v11.bottom - v11.top; /*0x60b81c*/
    v7 = 0; /*0x60b81e*/
    if ( v11.bottom - v11.top <= 600 ) /*0x60b822*/
    {
      if ( v11.bottom - v11.top < 600 ) /*0x60b833*/
        v7 = (v6 - 600) / 2; /*0x60b83c*/
    }
    else
    {
      v8 = (v6 - 600) / 2; /*0x60b829*/
      LOBYTE(v7) = v8 < 0; /*0x60b82b*/
      v7 = v8 & (v7 - 1); /*0x60b82f*/
    }
    v9 = Rect.left + v5; /*0x60b84a*/
    v10 = Rect.top + v7; /*0x60b84d*/
    if ( v9 < 0 ) /*0x60b85b*/
      v9 = 0; /*0x60b85d*/
    if ( v10 < 0 ) /*0x60b861*/
      v10 = 0; /*0x60b863*/
    return MoveWindow((HWND)this, v9, v10, Rect.right - Rect.left, Rect.bottom - Rect.top, 0); /*0x60b86c*/
  }
  return result; /*0x60b873*/
}



// ==== 0x0060B880  sub_60B880  this=-  sig=ida-proto ====
bool __fastcall sub_60B880(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  _DWORD *v6; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = a1; /*0x60b88c*/
  if ( !dword_AC1B04 ) /*0x60b890*/
    goto LABEL_5; /*0x60b890*/
  v3 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v7) & ((1 << dword_AC1B0C) - 1))); /*0x60b8b1*/
  if ( !v3 ) /*0x60b8b6*/
    goto LABEL_5; /*0x60b8b6*/
  while ( *v3 != v7 ) /*0x60b8be*/
  {
    v3 = (_DWORD *)v3[129]; /*0x60b8c0*/
    if ( !v3 ) /*0x60b8c8*/
      goto LABEL_5; /*0x60b8c8*/
  }
  v6 = v3 + 1; /*0x60b93a*/
  if ( v6 ) /*0x60b93f*/
    v4 = v6[27]; /*0x60b941*/
  else
LABEL_5:
    v4 = 0; /*0x60b8ca*/
  GetDlgCtrlID(a2); /*0x60b8cd*/
  return v4 == 183 /*0x60b930*/
      || v4 == 692
      || v4 == 3003
      || v4 == 245
      || v4 == 693
      || v4 == 184
      || v4 == 163
      || v4 == 182
      || v4 == 268
      || v4 == 115
      || v4 == 255
      || v4 == 234;
}



// ==== 0x0060B950  Control::RepositionControlsDialog  this=Control  sig=csp ====
int __thiscall Control::RepositionControlsDialog(Control *this)
{
  HWND Parent; // esi
  int v3; // ebp
  _DWORD *v4; // eax
  Dialog *v5; // esi
  int DlgCtrlID; // edi
  int result; // eax
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // eax
  int X; // [esp+10h] [ebp-3Ch]
  int nWidth; // [esp+14h] [ebp-38h]
  int nHeight; // [esp+18h] [ebp-34h]
  HWND v14; // [esp+1Ch] [ebp-30h] BYREF
  HWND hWnd; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  struct tagRECT v18; // [esp+2Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+3Ch] [ebp-10h] BYREF

  hWnd = (HWND)this; /*0x60b95a*/
  Parent = GetParent((HWND)this); /*0x60b96a*/
  GetWindowRect(Parent, &Rect); /*0x60b972*/
  GetWindowRect((HWND)this, &v18); /*0x60b97a*/
  X = v18.left - Rect.left; /*0x60b996*/
  nHeight = v18.bottom - v18.top; /*0x60b9a2*/
  v3 = v18.top - Rect.top; /*0x60b9ab*/
  nWidth = v18.right - v18.left; /*0x60b9ad*/
  v14 = Parent; /*0x60b9b3*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60b9b7*/
    goto LABEL_5; /*0x60b9b7*/
  v4 = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60b9d8*/
                  + 4
                  * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&v14)
                   & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v4 ) /*0x60b9dd*/
    goto LABEL_5; /*0x60b9dd*/
  while ( (HWND)*v4 != v14 ) /*0x60b9e5*/
  {
    v4 = (_DWORD *)v4[129]; /*0x60b9eb*/
    if ( !v4 ) /*0x60b9f3*/
      goto LABEL_5; /*0x60b9f3*/
  }
  v9 = v4 + 1; /*0x60bd04*/
  if ( v9 ) /*0x60bd09*/
    v5 = (Dialog *)v9[27]; /*0x60bd0f*/
  else
LABEL_5:
    v5 = 0; /*0x60b9f5*/
  DlgCtrlID = GetDlgCtrlID(hWnd); /*0x60ba02*/
  result = nHeight; /*0x60ba0e*/
  v8 = X; /*0x60ba12*/
  v14 = (HWND)v3; /*0x60ba16*/
  v16 = nWidth; /*0x60ba1a*/
  v17 = nHeight; /*0x60ba1e*/
  if ( v5 == (Dialog *)268 /*0x60bb57*/
    || v5 == (Dialog *)148
    || v5 == (Dialog *)163
    || v5 == (Dialog *)115
    || v5 == (Dialog *)216
    || v5 == (Dialog *)3003
    || v5 == (Dialog *)245
    || v5 == (Dialog *)261
    || v5 == (Dialog *)226
    || v5 == (Dialog *)213
    || v5 == (Dialog *)693
    || v5 == (Dialog *)183
    || v5 == (Dialog *)692
    || v5 == (Dialog *)3015
    || v5 == (Dialog *)257
    || v5 == (Dialog *)297
    || v5 == (Dialog *)3014
    || v5 == (Dialog *)215
    || v5 == (Dialog *)264
    || v5 == (Dialog *)188
    || v5 == (Dialog *)189
    || v5 == (Dialog *)187
    || v5 == (Dialog *)181
    || v5 == (Dialog *)3002
    || v5 == (Dialog *)255
    || v5 == (Dialog *)107
    || v5 == (Dialog *)256
    || v5 == (Dialog *)258
    || v5 == (Dialog *)184
    || v5 == (Dialog *)214
    || v5 == (Dialog *)259
    || (result = Dialog::IsSpecialTemplate(v5), (_BYTE)result) )
  {
    if ( DlgCtrlID == 1684 ) /*0x60bb63*/
    {
      if ( v5 == (Dialog *)268 /*0x60bc38*/
        || v5 == (Dialog *)148
        || v5 == (Dialog *)163
        || v5 == (Dialog *)115
        || v5 == (Dialog *)216
        || v5 == (Dialog *)3003
        || v5 == (Dialog *)245
        || v5 == (Dialog *)261
        || v5 == (Dialog *)226
        || v5 == (Dialog *)213
        || v5 == (Dialog *)693
        || v5 == (Dialog *)183
        || v5 == (Dialog *)692
        || v5 == (Dialog *)3015
        || v5 == (Dialog *)257
        || v5 == (Dialog *)297
        || v5 == (Dialog *)3014
        || v5 == (Dialog *)215
        || v5 == (Dialog *)264 )
      {
        goto LABEL_74; /*0x60bc38*/
      }
      if ( v5 == (Dialog *)188 ) /*0x60bc40*/
      {
LABEL_75:
        result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60bce4*/
        if ( (_BYTE)result ) /*0x60bcf0*/
          return result; /*0x60bcf0*/
        ++v3; /*0x60bcf6*/
        goto LABEL_170; /*0x60bcf7*/
      }
      if ( v5 == (Dialog *)189 /*0x60bc99*/
        || v5 == (Dialog *)187
        || v5 == (Dialog *)181
        || v5 == (Dialog *)3002
        || v5 == (Dialog *)255
        || v5 == (Dialog *)107
        || v5 == (Dialog *)256
        || v5 == (Dialog *)258
        || v5 == (Dialog *)184
        || v5 == (Dialog *)214
        || v5 == (Dialog *)259 )
      {
LABEL_74:
        if ( v5 == (Dialog *)189 /*0x60bcda*/
          || v5 == (Dialog *)258
          || v5 == (Dialog *)3014
          || v5 == (Dialog *)261
          || v5 == (Dialog *)107 )
        {
          goto LABEL_75; /*0x60bcda*/
        }
        result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60bd1c*/
        if ( (_BYTE)result ) /*0x60bd23*/
          return result; /*0x60bd23*/
        v3 += 7; /*0x60bd2d*/
        ++nHeight; /*0x60bd31*/
      }
      else
      {
        if ( v5 != (Dialog *)293 /*0x60bdfc*/
          && v5 != (Dialog *)231
          && v5 != (Dialog *)278
          && (v5 == (Dialog *)194
           || v5 != (Dialog *)201
           && v5 != (Dialog *)285
           && v5 != (Dialog *)284
           && v5 != (Dialog *)276
           && v5 != (Dialog *)700
           && v5 != (Dialog *)275
           && v5 != (Dialog *)265
           && v5 != (Dialog *)271
           && v5 != (Dialog *)279
           && v5 != (Dialog *)230
           && v5 != (Dialog *)243
           && v5 != (Dialog *)244
           && v5 != (Dialog *)270
           && v5 != (Dialog *)274)
          || v5 == (Dialog *)201
          || v5 == (Dialog *)275 )
        {
          return result; /*0x60bdfc*/
        }
        v3 += 2; /*0x60be02*/
      }
LABEL_170:
      if ( (HWND)v3 == v14 ) /*0x60c078*/
        goto LABEL_171; /*0x60c078*/
      return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c0a9*/
    }
  }
  if ( v5 == (Dialog *)258 ) /*0x60be10*/
  {
    if ( DlgCtrlID == 1292 ) /*0x60be18*/
    {
      --v3; /*0x60be1a*/
      goto LABEL_170; /*0x60be1b*/
    }
    if ( DlgCtrlID != 1358 && DlgCtrlID != 1683 && DlgCtrlID != 1686 && DlgCtrlID != 1690 ) /*0x60be4a*/
    {
      if ( DlgCtrlID != 1696 ) /*0x60be56*/
        return result; /*0x60be56*/
      ++X; /*0x60be66*/
      ++nWidth; /*0x60be6a*/
LABEL_169:
      if ( X != v8 ) /*0x60c072*/
        return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c072*/
      goto LABEL_170; /*0x60c072*/
    }
    goto LABEL_167; /*0x60be4a*/
  }
  if ( v5 == (Dialog *)187 ) /*0x60be79*/
  {
    if ( DlgCtrlID != 1344 ) /*0x60be81*/
      return result; /*0x60be81*/
    --nWidth; /*0x60be87*/
  }
  else if ( v5 == (Dialog *)188 || v5 == (Dialog *)189 ) /*0x60bea2*/
  {
    if ( DlgCtrlID != 1343 ) /*0x60c027*/
    {
      if ( DlgCtrlID == 1359 ) /*0x60c035*/
      {
        --v3; /*0x60c037*/
        goto LABEL_170; /*0x60c038*/
      }
      if ( DlgCtrlID != 1358 && DlgCtrlID != 1000 && DlgCtrlID != 1357 && DlgCtrlID != 1690 ) /*0x60c058*/
      {
        if ( DlgCtrlID != 1026 ) /*0x60c060*/
          return result; /*0x60c060*/
        --v3; /*0x60c062*/
        goto LABEL_170; /*0x60c063*/
      }
LABEL_167:
      v10 = X - 1; /*0x60c065*/
      goto LABEL_168; /*0x60c069*/
    }
    ++nWidth; /*0x60c029*/
  }
  else
  {
    if ( v5 == (Dialog *)259 ) /*0x60beae*/
    {
      if ( DlgCtrlID != 1779 /*0x60beee*/
        && DlgCtrlID != 1780
        && DlgCtrlID != 1695
        && DlgCtrlID != 1782
        && DlgCtrlID != 1775
        && DlgCtrlID != 1777
        && DlgCtrlID != 1776
        && DlgCtrlID != 1778 )
      {
        return result; /*0x60beee*/
      }
      result = 800; /*0x60befa*/
      if ( (int)g_DisplayWidth < 800 ) /*0x60bf01*/
        return result; /*0x60bf01*/
      v3 -= 50; /*0x60bf20*/
      goto LABEL_170; /*0x60bf22*/
    }
    if ( v5 == (Dialog *)3015 ) /*0x60bf2d*/
      return result; /*0x60bf2d*/
    if ( v5 == (Dialog *)264 ) /*0x60bf39*/
    {
      if ( DlgCtrlID == 1939 || DlgCtrlID == 1940 || DlgCtrlID == 1938 || DlgCtrlID == 1941 ) /*0x60bf5d*/
        ++v3; /*0x60bf5f*/
      if ( DlgCtrlID == 1943 || DlgCtrlID == 1942 || DlgCtrlID == 1944 ) /*0x60bf76*/
        v3 += 2; /*0x60bf78*/
      if ( DlgCtrlID != 1936 /*0x60bfc9*/
        && DlgCtrlID != 1937
        && DlgCtrlID != 1935
        && DlgCtrlID != 1938
        && DlgCtrlID != 1939
        && DlgCtrlID != 1940
        && DlgCtrlID != 1941
        && DlgCtrlID != 1942
        && DlgCtrlID != 1943
        && DlgCtrlID != 1944 )
      {
        goto LABEL_170; /*0x60bfc9*/
      }
      v10 = X + 1; /*0x60bfd3*/
      goto LABEL_168; /*0x60bfd4*/
    }
    if ( v5 != (Dialog *)275 ) /*0x60bfdf*/
    {
      if ( v5 != (Dialog *)270 || DlgCtrlID != 1951 ) /*0x60c014*/
        return result; /*0x60c014*/
      v10 = X + 1; /*0x60c01e*/
      goto LABEL_168; /*0x60c01f*/
    }
    if ( DlgCtrlID == 1896 ) /*0x60bfe7*/
    {
      v10 = X + 1; /*0x60bfed*/
LABEL_168:
      X = v10; /*0x60c06a*/
      goto LABEL_169; /*0x60c06a*/
    }
    if ( DlgCtrlID != 1343 ) /*0x60bff6*/
      return result; /*0x60bff6*/
    --nWidth; /*0x60bffc*/
  }
LABEL_171:
  if ( nWidth != v16 ) /*0x60c084*/
    return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c084*/
  result = nHeight; /*0x60c08a*/
  if ( nHeight != v17 ) /*0x60c090*/
    return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c090*/
  return result; /*0x60c0af*/
}



// ==== 0x0060C0C0  RepositionDialogControls  this=-  sig=csp ====
BOOL __stdcall RepositionDialogControls(HWND hWnd, HWND a2)
{
  HWND v2; // esi
  HWND Parent; // ebx
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  void *v8; // edi
  int DlgCtrlID; // ebp
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  HWND v16; // eax
  _DWORD v17[4]; // [esp+Ch] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+2Ch] [ebp-10h] BYREF

  v2 = hWnd; /*0x60c0c5*/
  Parent = GetParent(hWnd); /*0x60c0d0*/
  if ( (HWND)dword_AC48A8 != Parent ) /*0x60c0dd*/
    return 1; /*0x60c48f*/
  memset(v17, 0, sizeof(v17)); /*0x60c0f0*/
  if ( ControlDialogHandler((int)Parent, v2, v17) ) /*0x60c100*/
  {
    UI_Get(v2); /*0x60c10f*/
    Control::RepositionControlsDialog(v2); /*0x60c116*/
    return 1; /*0x60c11e*/
  }
  else
  {
    if ( (GetWindowLongA(v2, -16) & 0xB) != 0xB ) /*0x60c13a*/
      goto LABEL_9; /*0x60c13a*/
    hWnd = v2; /*0x60c141*/
    if ( !dword_AC1B04 ) /*0x60c147*/
      goto LABEL_9; /*0x60c147*/
    v5 = *((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd)); /*0x60c15e*/
    if ( !v5 ) /*0x60c163*/
      goto LABEL_9; /*0x60c163*/
    while ( *(HWND *)v5 != hWnd ) /*0x60c16b*/
    {
      v5 = *(_DWORD *)(v5 + 516); /*0x60c16d*/
      if ( !v5 ) /*0x60c175*/
        goto LABEL_9; /*0x60c175*/
    }
    v6 = v5 + 4; /*0x60c1a9*/
    if ( v6 && !*(_DWORD *)(v6 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x60c1b9*/
    {
      RepositionGameSpeedIndicator(v2); /*0x60c1c8*/
      Control::RepositionControlsDialog(v2); /*0x60c1cf*/
      return 1; /*0x60c1d7*/
    }
    else
    {
LABEL_9:
      if ( IsDialogControlVisible((int)Parent, v2) ) /*0x60c17b*/
      {
        UI_Get_60B1D0(v2); /*0x60c18a*/
        Control::RepositionControlsDialog(v2); /*0x60c191*/
        return 1; /*0x60c199*/
      }
      else if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB /*0x60c21c*/
             && (hWnd = v2, a2 = 0, HashTable::Get(&dword_AC1B00, &hWnd, &a2), a2)
             && !*((_DWORD *)a2 + 26)
             && GetDialogDefaultButton((int)Parent, v2) )
      {
        UI_Get_60B350(v2); /*0x60c227*/
        Control::RepositionControlsDialog(v2); /*0x60c22e*/
        return 1; /*0x60c236*/
      }
      else if ( GetDialogDefaultButton((int)Parent, v2) ) /*0x60c246*/
      {
        UI_Get_60B420(v2); /*0x60c251*/
        Control::RepositionControlsDialog(v2); /*0x60c258*/
        return 1; /*0x60c260*/
      }
      else
      {
        a2 = Parent; /*0x60c271*/
        if ( !dword_AC1B04 ) /*0x60c277*/
          goto LABEL_26; /*0x60c277*/
        v7 = (_DWORD *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&a2)); /*0x60c28e*/
        if ( !v7 ) /*0x60c293*/
          goto LABEL_26; /*0x60c293*/
        while ( (HWND)*v7 != a2 ) /*0x60c29b*/
        {
          v7 = (_DWORD *)v7[129]; /*0x60c29d*/
          if ( !v7 ) /*0x60c2a5*/
            goto LABEL_26; /*0x60c2a5*/
        }
        v10 = v7 + 1; /*0x60c2e8*/
        if ( v10 ) /*0x60c2ed*/
          v8 = (void *)v10[27]; /*0x60c2ef*/
        else
LABEL_26:
          v8 = 0; /*0x60c2a7*/
        DlgCtrlID = GetDlgCtrlID(v2); /*0x60c2b4*/
        if ( Event::IsValidActionType(v8) && DlgCtrlID == 1685 ) /*0x60c2c5*/
        {
          UI_Get_60B550(v2); /*0x60c2c9*/
          Control::RepositionControlsDialog(v2); /*0x60c2d0*/
          return 1; /*0x60c2d8*/
        }
        else
        {
          v11 = 0; /*0x60c300*/
          hWnd = Parent; /*0x60c309*/
          a2 = 0; /*0x60c30d*/
          HashTable::Get(&dword_AC1B00, &hWnd, &a2); /*0x60c311*/
          if ( a2 ) /*0x60c31c*/
            v11 = *((_DWORD *)a2 + 27); /*0x60c31e*/
          v12 = GetDlgCtrlID(v2); /*0x60c322*/
          if ( v11 == 226 && v12 == 1821 ) /*0x60c336*/
          {
            UI_Get_60B610(v2); /*0x60c33a*/
            Control::RepositionControlsDialog(v2); /*0x60c341*/
            return 1; /*0x60c349*/
          }
          else
          {
            a2 = Parent; /*0x60c35a*/
            if ( !dword_AC1B04 ) /*0x60c360*/
              goto LABEL_41; /*0x60c360*/
            v13 = (_DWORD *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&a2)); /*0x60c377*/
            if ( !v13 ) /*0x60c37c*/
              goto LABEL_41; /*0x60c37c*/
            while ( (HWND)*v13 != a2 ) /*0x60c384*/
            {
              v13 = (_DWORD *)v13[129]; /*0x60c38a*/
              if ( !v13 ) /*0x60c392*/
                goto LABEL_41; /*0x60c392*/
            }
            v15 = v13 + 1; /*0x60c41b*/
            if ( v15 ) /*0x60c420*/
              v14 = v15[27]; /*0x60c426*/
            else
LABEL_41:
              v14 = 0; /*0x60c394*/
            GetDlgCtrlID(v2); /*0x60c397*/
            if ( v14 == 183 /*0x60c3f4*/
              || v14 == 692
              || v14 == 3003
              || v14 == 245
              || v14 == 693
              || v14 == 184
              || v14 == 163
              || v14 == 182
              || v14 == 268
              || v14 == 115
              || v14 == 255
              || v14 == 234 )
            {
              UI_Get_60B7A0(v2); /*0x60c3f8*/
              Control::RepositionControlsDialog(v2); /*0x60c3ff*/
              return 1; /*0x60c407*/
            }
            else
            {
              v16 = GetParent(v2); /*0x60c42f*/
              GetWindowRect(v16, &Rect); /*0x60c441*/
              GetWindowRect(v2, &v18); /*0x60c449*/
              MoveWindow(v2, v18.left - Rect.left, v18.top - Rect.top, v18.right - v18.left, v18.bottom - v18.top, 0); /*0x60c472*/
              Control::RepositionControlsDialog(v2); /*0x60c47a*/
              return 1; /*0x60c482*/
            }
          }
        }
      }
    }
  }
}



// ==== 0x0060C4A0  ResizeDialogAndEnum  this=-  sig=csp ====
int __fastcall ResizeDialogAndEnum(HWND hWndParent, LPARAM lParam)
{
  MoveWindow(hWndParent, 0, 0, g_DisplayWidth, *(&g_DisplayWidth + 1), 0); /*0x60c4ba*/
  dword_AC48A8 = (int)hWndParent; /*0x60c4c0*/
  return EnumChildWindows(hWndParent, (WNDENUMPROC)RepositionDialogControls, lParam); /*0x60c4d3*/
}



// ==== 0x0060C540  Control::CheckControlTypeDialog  this=Control  sig=csp ====
int __thiscall Control::CheckControlTypeDialog(Control *this)
{
  int result; // eax
  int v2; // ecx
  Control *v3; // [esp+4h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x60c541*/
  v3 = this; /*0x60c549*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60c54d*/
    goto LABEL_7; /*0x60c54d*/
  result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60c570*/
                     + 4
                     * ((*(int (__thiscall **)(Control **))&g_DialogPool.__pad_208[80])(&v3)
                      & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !result ) /*0x60c575*/
    goto LABEL_7; /*0x60c575*/
  while ( *(Control **)result != v3 ) /*0x60c57d*/
  {
    result = *(_DWORD *)(result + 516); /*0x60c57f*/
    if ( !result ) /*0x60c587*/
    {
      LOBYTE(result) = 0; /*0x60c589*/
      return result; /*0x60c58d*/
    }
  }
  v2 = result + 4; /*0x60c592*/
  if ( result != -4 ) /*0x60c597*/
  {
    result = *(_DWORD *)(result + 112); /*0x60c59e*/
    if ( result == 268 /*0x60c7b0*/
      || result == 148
      || result == 182
      || result == 163
      || result == 115
      || result == 216
      || result == 3003
      || result == 245
      || result == 261
      || result == 213
      || result == 226
      || result == 693
      || result == 183
      || result == 692
      || result == 257
      || result == 297
      || result == 3014
      || result == 3015
      || result == 267
      || result == 215
      || result == 264
      || result == 188
      || result == 189
      || result == 187
      || result == 181
      || result == 3002
      || result == 255
      || result == 234
      || result == 107
      || result == 256
      || result == 258
      || result == 184
      || result == 214
      || result == 259
      || result == 212
      || result == 293
      || result == 290
      || result == 274
      || result == 231
      || result == 278
      || result == 194
      || result == 201
      || result == 275
      || result == 254
      || result == 271
      || result == 285
      || result == 284
      || result == 279
      || result == 276
      || result == 230
      || result == 243
      || result == 244
      || result == 700
      || result == 270
      || result == 251 )
    {
      LOBYTE(result) = 1; /*0x60c7b7*/
      *(_DWORD *)(v2 + 176) = 1; /*0x60c7b9*/
      *(_BYTE *)(v2 + 189) = 1; /*0x60c7bf*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x60c7b2*/
    }
  }
  else
  {
LABEL_7:
    LOBYTE(result) = 0; /*0x60c599*/
  }
  return result; /*0x60c58b*/
}



// ==== 0x0060C7D0  ObjectClass::UI_Helper_60C7D0  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60C7D0(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60c7d6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60c7dc*/
    return 0; /*0x60c7dc*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60c7fd*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60c802*/
    return 0; /*0x60c802*/
  while ( *v1 != v5 ) /*0x60c80a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60c80c*/
    if ( !v1 ) /*0x60c814*/
      return 0; /*0x60c819*/
  }
  v3 = v1 + 1; /*0x60c81e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60c823*/
    return 0; /*0x60c825*/
  v4 = v1[28]; /*0x60c829*/
  if ( v4 != (ObjectClass *)269 /*0x60c8b3*/
    && v4 != (ObjectClass *)217
    && v4 != (ObjectClass *)240
    && v4 != (ObjectClass *)206
    && v4 != (ObjectClass *)288
    && v4 != (ObjectClass *)289
    && v4 != (ObjectClass *)277
    && v4 != (ObjectClass *)211
    && v4 != (ObjectClass *)207
    && v4 != (ObjectClass *)287
    && v4 != (ObjectClass *)195
    && v4 != (ObjectClass *)283
    && v4 != (ObjectClass *)225
    && v4 != (ObjectClass *)286
    && v4 != (ObjectClass *)196
    && v4 != (ObjectClass *)304
    && v4 != (ObjectClass *)208
    && v4 != (ObjectClass *)252
    && v4 != (ObjectClass *)294 )
  {
    return 0; /*0x60c8b5*/
  }
  v3[44] = 2; /*0x60c8bb*/
  return 1; /*0x60c819*/
}



// ==== 0x0060C930  ObjectClass::UI_Helper_60C930  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60C930(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60c936*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60c93c*/
    return 0; /*0x60c93c*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60c95d*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60c962*/
    return 0; /*0x60c962*/
  while ( *v1 != v5 ) /*0x60c96a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60c96c*/
    if ( !v1 ) /*0x60c974*/
      return 0; /*0x60c979*/
  }
  v3 = v1 + 1; /*0x60c97e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60c983*/
    return 0; /*0x60c985*/
  v4 = v1[28]; /*0x60c989*/
  if ( v4 == (ObjectClass *)188 /*0x60c9b4*/
    || v4 == (ObjectClass *)189
    || v4 == (ObjectClass *)258
    || v4 == (ObjectClass *)194
    || v4 == (ObjectClass *)201
    || v4 == (ObjectClass *)3014 )
  {
    *((_BYTE *)v3 + 214) = 1; /*0x60c9c5*/
    return 1; /*0x60c9c0*/
  }
  else
  {
    *((_BYTE *)v3 + 214) = 0; /*0x60c9b8*/
    return 0; /*0x60c9b6*/
  }
}



// ==== 0x0060CAF0  ObjectClass::UI_Helper_60CAF0  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60CAF0(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60caf6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cafc*/
    return 0; /*0x60cafc*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cb1d*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60cb22*/
    return 0; /*0x60cb22*/
  while ( *v1 != v5 ) /*0x60cb2a*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60cb2c*/
    if ( !v1 ) /*0x60cb34*/
      return 0; /*0x60cb39*/
  }
  v3 = v1 + 1; /*0x60cb3e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60cb43*/
    return 0; /*0x60cb45*/
  v4 = v1[28]; /*0x60cb49*/
  if ( v4 == (ObjectClass *)188 /*0x60cb87*/
    || v4 == (ObjectClass *)189
    || v4 == (ObjectClass *)258
    || v4 == (ObjectClass *)194
    || v4 == (ObjectClass *)201
    || v4 == (ObjectClass *)3014
    || v4 == (ObjectClass *)261
    || v4 == (ObjectClass *)107
    || v4 == (ObjectClass *)275 )
  {
    *((_BYTE *)v3 + 213) = 1; /*0x60cb98*/
    return 1; /*0x60cb93*/
  }
  else
  {
    *((_BYTE *)v3 + 213) = 0; /*0x60cb8b*/
    return 0; /*0x60cb89*/
  }
}



// ==== 0x0060CBA0  CampaignScore::LookupDialogHash  this=CampaignScore  sig=csp ====
int __thiscall CampaignScore::LookupDialogHash(CampaignScore *this)
{
  int result; // eax
  CampaignScore *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x60cba1*/
  v2 = this; /*0x60cba6*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cbac*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cbcd*/
                       + 4
                       * ((*(int (__thiscall **)(CampaignScore **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60cbd2*/
    {
      while ( *(CampaignScore **)result != v2 ) /*0x60cbda*/
      {
        result = *(_DWORD *)(result + 516); /*0x60cbdc*/
        if ( !result ) /*0x60cbe4*/
          return result; /*0x60cbe4*/
      }
      result += 4; /*0x60cbec*/
      if ( result ) /*0x60cbf1*/
        *(_BYTE *)(result + 213) = 1; /*0x60cbf3*/
    }
  }
  return result; /*0x60cbe7*/
}



// ==== 0x0060CC00  CampaignScore::FindDialogTemplate  this=CampaignScore  sig=csp ====
int __thiscall CampaignScore::FindDialogTemplate(CampaignScore *this)
{
  int result; // eax
  CampaignScore *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x60cc01*/
  v2 = this; /*0x60cc06*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cc0c*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cc2d*/
                       + 4
                       * ((*(int (__thiscall **)(CampaignScore **))&g_DialogPool.__pad_208[80])(&v2)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60cc32*/
    {
      while ( *(CampaignScore **)result != v2 ) /*0x60cc3a*/
      {
        result = *(_DWORD *)(result + 516); /*0x60cc3c*/
        if ( !result ) /*0x60cc44*/
          return result; /*0x60cc44*/
      }
      result += 4; /*0x60cc4c*/
      if ( result ) /*0x60cc51*/
        *(_BYTE *)(result + 213) = 0; /*0x60cc53*/
    }
  }
  return result; /*0x60cc47*/
}



// ==== 0x0060CCC0  ObjectClass::UI_Helper_60CCC0  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60CCC0(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60ccc6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cccc*/
    return 0; /*0x60cccc*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cced*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60ccf2*/
    return 0; /*0x60ccf2*/
  while ( *v1 != v5 ) /*0x60ccfa*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60ccfc*/
    if ( !v1 ) /*0x60cd04*/
      return 0; /*0x60cd09*/
  }
  v3 = v1 + 1; /*0x60cd0e*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60cd13*/
    return 0; /*0x60cd15*/
  v4 = v1[28]; /*0x60cd19*/
  if ( v4 == (ObjectClass *)259 || v4 == (ObjectClass *)3015 ) /*0x60cd28*/
  {
    *((_BYTE *)v3 + 215) = 1; /*0x60cd39*/
    return 1; /*0x60cd34*/
  }
  else
  {
    *((_BYTE *)v3 + 215) = 0; /*0x60cd2c*/
    return 0; /*0x60cd2a*/
  }
}



// ==== 0x0060CDB0  ObjectClass::UI_Helper_60CDB0  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_60CDB0(ObjectClass *this)
{
  ObjectClass **v1; // eax
  _DWORD *v3; // ecx
  ObjectClass *v4; // eax
  ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60cdb6*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cdbc*/
    return 0; /*0x60cdbc*/
  v1 = *(ObjectClass ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cddd*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v5)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60cde2*/
    return 0; /*0x60cde2*/
  while ( *v1 != v5 ) /*0x60cdea*/
  {
    v1 = (ObjectClass **)v1[129]; /*0x60cdec*/
    if ( !v1 ) /*0x60cdf4*/
      return 0; /*0x60cdf9*/
  }
  v3 = v1 + 1; /*0x60cdfe*/
  if ( v1 == (ObjectClass **)-4 ) /*0x60ce03*/
    return 0; /*0x60ce05*/
  v4 = v1[28]; /*0x60ce09*/
  if ( v4 == (ObjectClass *)264 || v4 == (ObjectClass *)3014 ) /*0x60ce18*/
  {
    *((_BYTE *)v3 + 216) = 1; /*0x60ce29*/
    return 1; /*0x60ce24*/
  }
  else
  {
    *((_BYTE *)v3 + 216) = 0; /*0x60ce1c*/
    return 0; /*0x60ce1a*/
  }
}



// ==== 0x0060CF00  Control::CreateControlDialog  this=Control  sig=csp ====
_DWORD *__thiscall Control::CreateControlDialog(Control *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  int v3; // eax
  Control *v4; // [esp+4h] [ebp-4h] BYREF

  result = *(_DWORD **)&g_DialogPool.__pad_208[60]; /*0x60cf01*/
  v4 = this; /*0x60cf09*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60cf0d*/
  {
    result = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60cf32*/
                        + 4
                        * ((*(int (__thiscall **)(Control **))&g_DialogPool.__pad_208[80])(&v4)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60cf37*/
    {
      while ( (Control *)*result != v4 ) /*0x60cf43*/
      {
        result = (_DWORD *)result[129]; /*0x60cf45*/
        if ( !result ) /*0x60cf4d*/
          return result; /*0x60cf4d*/
      }
      v2 = result + 1; /*0x60cf5a*/
      if ( result != (_DWORD *)-4 ) /*0x60cf5f*/
      {
        v3 = result[28]; /*0x60cf65*/
        switch ( v3 ) /*0x60cf6d*/
        {
          case 148: /*0x60cf6d*/
            result = (_DWORD *)CreatureClass::GetManager(); /*0x60cf6f*/
            v2[29] = result; /*0x60cf74*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[700]; /*0x60cf7d*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[700]; /*0x60cf89*/
            return result; /*0x60cf91*/
          case 259: /*0x60cf6d*/
            goto LABEL_10; /*0x60cf97*/
          case 264: /*0x60cf6d*/
            v2[29] = UI_Create_72D820(); /*0x60cfc7*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfd0*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfd6*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfdb*/
            break;
          case 3014: /*0x60cf6d*/
            result = (_DWORD *)VtableStub_72D450(); /*0x60cfeb*/
            v2[29] = result; /*0x60cff0*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cff9*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60d005*/
            break;
          case 3015: /*0x60cf6d*/
LABEL_10:
            v2[29] = VtableStub_72D450(); /*0x60cf99*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfa1*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfa6*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfb2*/
            return result; /*0x60cfba*/
          case 107: /*0x60cf6d*/
            v2[29] = UI_Create_72D210(); /*0x60d01f*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d028*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x60d02e*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x60d033*/
            break;
          case 258: /*0x60cf6d*/
          case 188: /*0x60cf6d*/
          case 189: /*0x60cf6d*/
          case 194: /*0x60cf6d*/
          case 201: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72D030(); /*0x60d294*/
            v2[29] = result; /*0x60d299*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d2a2*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[616]; /*0x60d2ae*/
            break;
          case 275: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72CE50(); /*0x60d07a*/
            v2[29] = result; /*0x60d07f*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d088*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[764]; /*0x60d094*/
            break;
          case 276: /*0x60cf6d*/
            v2[29] = UI_Create_72CAB0(); /*0x60d0a9*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d0ac*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d0b1*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[688]; /*0x60d0bd*/
            break;
          case 270: /*0x60cf6d*/
          case 284: /*0x60cf6d*/
            v2[29] = UI_Create_72C8D0(); /*0x60d277*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d280*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[568]; /*0x60d286*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[568]; /*0x60d28b*/
            break;
          case 271: /*0x60cf6d*/
          case 285: /*0x60cf6d*/
            v2[29] = UI_Create_72C6F0(); /*0x60d255*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d258*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d25d*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[860]; /*0x60d269*/
            break;
          case 230: /*0x60cf6d*/
          case 243: /*0x60cf6d*/
          case 244: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72C510(); /*0x60d22d*/
            v2[29] = result; /*0x60d232*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d23b*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[692]; /*0x60d247*/
            break;
          case 231: /*0x60cf6d*/
            v2[29] = UI_Create_72C330(); /*0x60d11f*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d128*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x60d12e*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x60d133*/
            break;
          case 278: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72C150(); /*0x60d143*/
            v2[29] = result; /*0x60d148*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d151*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[668]; /*0x60d15d*/
            break;
          case 279: /*0x60cf6d*/
            v2[29] = UI_Create_72BF70(); /*0x60d172*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d175*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d17a*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[748]; /*0x60d186*/
            break;
          case 274: /*0x60cf6d*/
            v2[29] = UI_Create_72BD90(); /*0x60d19b*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1a4*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x60d1aa*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x60d1af*/
            break;
          case 700: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72BBB0(); /*0x60d1bf*/
            v2[29] = result; /*0x60d1c4*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1cd*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[892]; /*0x60d1d9*/
            break;
          case 214: /*0x60cf6d*/
            v2[29] = UI_Create_72B9D0(); /*0x60d1ee*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1f1*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1f6*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[932]; /*0x60d202*/
            break;
          default:
            v2[29] = VtableStub_72E280(); /*0x60d210*/
            v2[56] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d219*/
            result = *(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[596]; /*0x60d21f*/
            v2[57] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[596]; /*0x60d224*/
            break;
        }
      }
    }
  }
  return result; /*0x60cf4f*/
}



// ==== 0x0060D2C0  UI_Helper_60D2C0  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_60D2C0(int a1, int a2)
{
  _DWORD *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)dword_AC1B04; /*0x60d2c1*/
  v4 = a1; /*0x60d2cb*/
  if ( dword_AC1B04 ) /*0x60d2cf*/
  {
    result = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v4) & ((1 << dword_AC1B0C) - 1))); /*0x60d2f0*/
    if ( result ) /*0x60d2f5*/
    {
      while ( *result != v4 ) /*0x60d2fd*/
      {
        result = (_DWORD *)result[129]; /*0x60d2ff*/
        if ( !result ) /*0x60d307*/
          return result; /*0x60d307*/
      }
      if ( ++result ) /*0x60d315*/
        result[27] = a2; /*0x60d317*/
    }
  }
  return result; /*0x60d309*/
}



// ==== 0x0060D320  GameSetup::LookupDialogHash  this=GameSetup  sig=csp ====
int __thiscall GameSetup::LookupDialogHash(GameSetup *this)
{
  GameSetup **v1; // eax
  _DWORD *v3; // eax
  GameSetup *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x60d326*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  v1 = *(GameSetup ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x60d34d*/
                      + 4
                      * ((*(int (__thiscall **)(GameSetup **))&g_DialogPool.__pad_208[80])(&v4)
                       & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( *v1 != v4 ) /*0x60d35a*/
  {
    v1 = (GameSetup **)v1[129]; /*0x60d35c*/
    if ( !v1 ) /*0x60d364*/
      return 0; /*0x60d364*/
  }
  v3 = v1 + 1; /*0x60d36e*/
  if ( v3 ) /*0x60d373*/
    return v3[27]; /*0x60d375*/
  else
    return 0; /*0x60d366*/
}



// ==== 0x0060D380  Campaign::Screen  this=Campaign  sig=csp ====
int __stdcall Campaign::Screen(char a1)
{
  INT_PTR (__stdcall *v1)(HWND, UINT, WPARAM, LPARAM); // edx
  unsigned __int16 v2; // cx
  BINK *Dialog; // esi
  int result; // eax
  ObjectClass *v5; // [esp+0h] [ebp-8h]
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  Dialog = (BINK *)CreateDialog(v2, v1, 0); /*0x60d389*/
  result = 0; /*0x60d38b*/
  dwNewLong = 0; /*0x60d38f*/
  if ( Dialog ) /*0x60d393*/
  {
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x60d3a1*/
    ShowWindow((HWND)Dialog, 1); /*0x60d3aa*/
    SetForegroundWindow((HWND)Dialog); /*0x60d3b1*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x60d3bd*/
    if ( a1 ) /*0x60d3c8*/
      BINK::Background_Setup(Dialog); /*0x60d3cc*/
    while ( !dwNewLong ) /*0x60d3d7*/
    {
      MessageLoop(); /*0x60d3d9*/
      if ( !*(_DWORD *)&dword_A8B238 /*0x60d3fc*/
        || *(_DWORD *)&dword_A8B238 == 5
        || BYTE2(stru_A8D600.Network_field_0xC)
        || dword_A8DAB4 )
      {
        Event::Dispatch(); /*0x60d412*/
      }
      else if ( !VtableStub::55CBF0() && (unsigned __int8)GameFrameLoop(v5) ) /*0x60d407*/
      {
        break; /*0x60d40e*/
      }
    }
    Dialog::Destroy((Dialog *)Dialog); /*0x60d41f*/
    return dwNewLong; /*0x60d426*/
  }
  return result; /*0x60d42a*/
}



// ==== 0x0060D430  Init::StubPlaceholder  this=Init  sig=ida-proto ====
void Init::StubPlaceholder()
{
  ; /*0x60d430*/
}



// ==== 0x0060D440  nullsub_31  this=-  sig=ida-proto ====
void nullsub_31()
{
  ; /*0x60d440*/
}



// ==== 0x0060D450  DialogClass::RegisterWinClasses  this=DialogClass  sig=csp ====
int DialogClass::RegisterWinClasses()
{
  int result; // eax
  WNDCLASSA WndClass; // [esp+0h] [ebp-28h] BYREF

  result = 1; /*0x60d456*/
  if ( dword_AC48CC != 1 ) /*0x60d460*/
  {
    dword_AC48CC = 1; /*0x60d469*/
    WndClass.hInstance = g_hInstance; /*0x60d48a*/
    WndClass.style = 3; /*0x60d496*/
    WndClass.lpfnWndProc = (WNDPROC)GameScreen::DlgProc; /*0x60d49e*/
    WndClass.cbClsExtra = 0; /*0x60d4a6*/
    WndClass.cbWndExtra = 0; /*0x60d4aa*/
    memset(&WndClass.hIcon, 0, 12); /*0x60d4ae*/
    WndClass.lpszMenuName = aCombodropwin; /*0x60d4ba*/
    WndClass.lpszClassName = aCombodropwin; /*0x60d4be*/
    RegisterClassA(&WndClass); /*0x60d4c2*/
    WndClass.style = 131; /*0x60d4db*/
    WndClass.lpfnWndProc = sub_60D520; /*0x60d4e4*/
    WndClass.cbClsExtra = 0; /*0x60d4ec*/
    WndClass.cbWndExtra = 0; /*0x60d4f0*/
    WndClass.hInstance = g_hInstance; /*0x60d4f4*/
    memset(&WndClass.hIcon, 0, 16); /*0x60d4f8*/
    WndClass.lpszClassName = g_INI_Key_NewEdit; /*0x60d508*/
    LOWORD(result) = RegisterClassA(&WndClass); /*0x60d510*/
  }
  return result; /*0x60d515*/
}



// ==== 0x0060D520  sub_60D520  this=-  sig=csp ====
LRESULT __stdcall sub_60D520(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x60d53a*/
}



// ==== 0x0060D540  GameScreen::DlgProc  this=GameScreen  sig=csp ====
HWND __userpurge GameScreen::DlgProc@<eax>(
        GameScreen *this,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        unsigned int a8)
{
  HWND Parent; // eax
  int v9; // edx
  int v10; // ebp
  int v11; // eax
  HWND result; // eax
  int v13; // ecx
  HWND v14; // ecx
  LRESULT v15; // esi
  LRESULT v16; // ecx
  HWND v17; // esi
  HWND v18; // eax
  int v19; // ecx
  char *v20; // ecx
  char *v21; // ecx
  LONG v22; // edx
  int v23; // ecx
  int v24; // esi
  LONG v25; // eax
  LONG v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  __int16 *v31; // esi
  __int16 v32; // cx
  bool v33; // zf
  int v34; // eax
  int v35; // eax
  int v36; // esi
  LONG v37; // ebp
  LONG v38; // esi
  HWND v39; // ecx
  LRESULT (__stdcall *v40)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v41; // eax
  _DWORD *v42; // eax
  LRESULT (__stdcall **v43)(HWND, UINT, WPARAM, LPARAM); // ea... [59942 chars total]



// ==== 0x0060F320  Dialog::SubclassEditControl  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_SubclassEditControl(HWND hWnd, LPARAM a2)
{
  LONG WindowLongA; // ebx
  HWND Parent; // esi
  DWORD v4; // edx
  HWND Window; // esi
  _DWORD *v6; // ebx
  LONG v7; // eax
  LONG dwNewLong; // [esp+10h] [ebp-A4h]
  struct tagRECT Rect; // [esp+14h] [ebp-A0h] BYREF
  struct tagRECT v11; // [esp+24h] [ebp-90h] BYREF
  CHAR ClassName[128]; // [esp+34h] [ebp-80h] BYREF

  WindowLongA = GetWindowLongA(hWnd, -16); /*0x60f341*/
  SetWindowLongA(hWnd, -21, 0); /*0x60f343*/
  if ( (WindowLongA & 0x10000000) != 0 && (WindowLongA & 0x8000000) == 0 ) /*0x60f35b*/
  {
    GetClassNameA(hWnd, ClassName, 128); /*0x60f36c*/
    if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60f381*/
    {
      Parent = GetParent(hWnd); /*0x60f3b9*/
      ScreenDialogToClient(hWnd, &Rect); /*0x60f3bb*/
      ScreenDialogToClient(Parent, &v11); /*0x60f3c6*/
      v4 = 1073742096; /*0x60f3df*/
      if ( (WindowLongA & 0x10000) != 0 ) /*0x60f3ea*/
        v4 = 1073807632; /*0x60f3ec*/
      Window = CreateWindowExA( /*0x60f427*/
                 0,
                 g_INI_Key_ListBox,
                 0,
                 v4,
                 Rect.left - v11.left,
                 Rect.top - v11.top,
                 Rect.right - Rect.left,
                 Rect.bottom - Rect.top,
                 Parent,
                 0,
                 g_hInstance,
                 0);
      v6 = __2_YAPAXI_Z(8u); /*0x60f431*/
      *v6 = g_INI_Key_NewEdit; /*0x60f436*/
      v6[1] = GetWindowLongA(hWnd, -16); /*0x60f43f*/
      SetWindowLongA(Window, -21, (LONG)v6); /*0x60f44b*/
      EnableWindow(hWnd, 0); /*0x60f450*/
      ShowWindow(hWnd, 0); /*0x60f459*/
      EnableWindow(Window, 1); /*0x60f462*/
      ShowWindow(Window, 1); /*0x60f46b*/
      dwNewLong = GetWindowLongA(hWnd, -12); /*0x60f479*/
      v7 = GetWindowLongA(Window, -12); /*0x60f47d*/
      SetWindowLongA(hWnd, -12, v7); /*0x60f483*/
      SetWindowLongA(Window, -12, dwNewLong); /*0x60f48d*/
    }
  }
  return 1; /*0x60f48f*/
}



// ==== 0x0060F4B0  InitializeDialogControls  this=-  sig=csp ====
char __fastcall InitializeDialogControls(HWND a1, LPARAM a2)
{
  LPARAM v2; // edi
  _DWORD *v4; // eax
  void *v5; // eax
  void *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  void *v10; // eax
  void *v11; // eax
  _DWORD *i; // eax
  int v14; // [esp+10h] [ebp-20Ch] BYREF
  _DWORD *v15; // [esp+14h] [ebp-208h] BYREF
  LPARAM v16; // [esp+18h] [ebp-204h]
  void *v17[128]; // [esp+1Ch] [ebp-200h] BYREF

  v2 = a2; /*0x60f4ba*/
  v16 = a2; /*0x60f4be*/
  DialogClass::RegisterWinClasses(); /*0x60f4c2*/
  dword_AC48A8 = (int)a1; /*0x60f4cd*/
  EnumChildWindows(a1, Dialog::InitWindow, 1); /*0x60f4db*/
  v14 = (int)a1; /*0x60f4e6*/
  v15 = 0; /*0x60f4ea*/
  if ( dword_AC1B04 /*0x60f514*/
    && (v4 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v14) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    while ( *v4 != v14 ) /*0x60f51c*/
    {
      v4 = (_DWORD *)v4[129]; /*0x60f51e*/
      if ( !v4 ) /*0x60f526*/
        goto LABEL_5; /*0x60f526*/
    }
    v7 = v4 + 1; /*0x60f568*/
  }
  else
  {
LABEL_5:
    memset(v17, 0, sizeof(v17)); /*0x60f528*/
    v17[26] = (void *)11; /*0x60f53d*/
    v17[25] = (void *)g_FogOfWarState; /*0x60f548*/
    v5 = __2_YAPAXI_Z(4u); /*0x60f54f*/
    if ( v5 ) /*0x60f559*/
      v6 = (void *)unknown_libname_74(v5); /*0x60f55d*/
    else
      v6 = 0; /*0x60f570*/
    v17[15] = v6; /*0x60f572*/
    v17[16] = 0; /*0x60f585*/
    v17[23] = 0; /*0x60f589*/
    v17[36] = (void *)-1; /*0x60f590*/
    SymbolTable::Insert((int)&v14, v17); /*0x60f59b*/
    if ( dword_AC1B04 ) /*0x60f5a6*/
    {
      v8 = (_DWORD *)*((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&v14)); /*0x60f5bd*/
      if ( v8 ) /*0x60f5c2*/
      {
        while ( *v8 != v14 ) /*0x60f5ca*/
        {
          v8 = (_DWORD *)v8[129]; /*0x60f5cc*/
          if ( !v8 ) /*0x60f5d4*/
            goto LABEL_15; /*0x60f5d4*/
        }
        v15 = v8 + 1; /*0x60f5df*/
      }
    }
LABEL_15:
    Dialog::CleanupTree((int)v17); /*0x60f5e3*/
    v2 = v16; /*0x60f5ec*/
    v7 = v15; /*0x60f5f0*/
  }
  v7[8] = 1; /*0x60f5fc*/
  EnumChildWindows(a1, Dialog::SubclassEditControl, 1); /*0x60f603*/
  EnumChildWindows(a1, Dialog::InitializeControls, v2); /*0x60f60c*/
  Dialog::InitializeControls(a1, v2); /*0x60f610*/
  EnumChildWindows(a1, Dialog::InitWindow, 0); /*0x60f61c*/
  v14 = (int)a1; /*0x60f625*/
  v15 = 0; /*0x60f629*/
  if ( dword_AC1B04 /*0x60f653*/
    && (v9 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v14) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    while ( *v9 != v14 ) /*0x60f65b*/
    {
      v9 = (_DWORD *)v9[129]; /*0x60f65d*/
      if ( !v9 ) /*0x60f665*/
        goto LABEL_20; /*0x60f665*/
    }
    v9[9] = 0; /*0x60f6a8*/
    return 1; /*0x60f6ad*/
  }
  else
  {
LABEL_20:
    memset(v17, 0, sizeof(v17)); /*0x60f667*/
    v17[26] = (void *)11; /*0x60f67c*/
    v17[25] = (void *)g_FogOfWarState; /*0x60f687*/
    v10 = __2_YAPAXI_Z(4u); /*0x60f68e*/
    if ( v10 ) /*0x60f698*/
      v11 = (void *)unknown_libname_74(v10); /*0x60f69c*/
    else
      v11 = 0; /*0x60f6b7*/
    v17[15] = v11; /*0x60f6b9*/
    v17[16] = 0; /*0x60f6cc*/
    v17[23] = 0; /*0x60f6d0*/
    v17[36] = (void *)-1; /*0x60f6d7*/
    SymbolTable::Insert((int)&v14, v17); /*0x60f6e2*/
    HashTable::Get(&dword_AC1B00, &v14, &v15); /*0x60f6f6*/
    GadgetClass::SetTooltip(v17, 0); /*0x60f700*/
    for ( i = v17[13]; v17[13]; i = v17[13] ) /*0x60f70b*/
      LinkedList::Remove(v17, i); /*0x60f712*/
    if ( v17[15] ) /*0x60f725*/
      DeleteAndZero::OrFree((void **)v17[15], 1); /*0x60f729*/
    v15[8] = 0; /*0x60f734*/
    return 1; /*0x60f738*/
  }
}



// ==== 0x0060F760  Dialog::InitWindow  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_InitWindow(HWND a1, LPARAM a2)
{
  int v2; // ebp
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  void *i; // eax
  void *v13[128]; // [esp+10h] [ebp-200h] BYREF

  v2 = 0; /*0x60f76f*/
  if ( dword_AC1B04 && (v3 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x60f79c*/
  {
    while ( *(HWND *)v3 != a1 ) /*0x60f7a7*/
    {
      v3 = *(_DWORD *)(v3 + 516); /*0x60f7a9*/
      if ( !v3 ) /*0x60f7b1*/
        goto LABEL_5; /*0x60f7b1*/
    }
    *(_DWORD *)(v3 + 36) = a2; /*0x60f7fa*/
    return 1; /*0x60f7fd*/
  }
  else
  {
LABEL_5:
    memset(v13, 0, sizeof(v13)); /*0x60f7b3*/
    v13[26] = (void *)11; /*0x60f7c9*/
    v13[25] = (void *)g_FogOfWarState; /*0x60f7d4*/
    v4 = __2_YAPAXI_Z(4u); /*0x60f7d8*/
    if ( v4 ) /*0x60f7e3*/
      v5 = (void *)unknown_libname_74(v4); /*0x60f7e7*/
    else
      v5 = 0; /*0x60f80c*/
    v13[15] = v5; /*0x60f814*/
    v13[16] = 0; /*0x60f818*/
    v13[23] = 0; /*0x60f81c*/
    v13[36] = (void *)-1; /*0x60f820*/
    v7 = __2_YAPAXI_Z(0x208u); /*0x60f82b*/
    v8 = v7; /*0x60f830*/
    if ( v7 ) /*0x60f837*/
      DialogControl::Constructor(v7 + 1); /*0x60f83c*/
    else
      v8 = 0; /*0x60f843*/
    *v8 = a1; /*0x60f854*/
    DialogClass::CopyTemplateStruct(v13); /*0x60f856*/
    v8[129] = 0; /*0x60f862*/
    v9 = dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1); /*0x60f882*/
    v10 = *((_DWORD *)dword_AC1B00 + v9); /*0x60f884*/
    *((_DWORD *)dword_AC1B00 + v9) = v8; /*0x60f887*/
    if ( v10 ) /*0x60f88c*/
      v8[129] = v10; /*0x60f88e*/
    if ( (double)(unsigned int)++dword_AC1B04 / (double)dword_AC1B08 >= dbl_AC1B28 ) /*0x60f8c9*/
      HashTable::Grow2(&dword_AC1B00); /*0x60f8d0*/
    if ( dword_AC1B04 ) /*0x60f8db*/
    {
      v11 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1))); /*0x60f8ff*/
      if ( v11 ) /*0x60f904*/
      {
        while ( *(HWND *)v11 != a1 ) /*0x60f90f*/
        {
          v11 = *(_DWORD *)(v11 + 516); /*0x60f911*/
          if ( !v11 ) /*0x60f919*/
            goto LABEL_22; /*0x60f919*/
        }
        v2 = v11 + 4; /*0x60f921*/
      }
    }
LABEL_22:
    if ( v13[10] ) /*0x60f92a*/
    {
      __3_YAXPAX_Z(v13[10]); /*0x60f92d*/
      v13[10] = 0; /*0x60f935*/
    }
    for ( i = v13[13]; v13[13]; i = v13[13] ) /*0x60f93f*/
      LinkedList::Remove(i); /*0x60f946*/
    if ( v13[15] ) /*0x60f959*/
      DeleteAndZero::OrFree(v13[15], 1); /*0x60f95d*/
    *(_DWORD *)(v2 + 32) = a2; /*0x60f96e*/
    return 1; /*0x60f962*/
  }
}



// ==== 0x0060F9A0  Dialog::InitializeControls  this=Dialog  sig=csp ====
BOOL __stdcall Dialog_InitializeControls(HWND hWnd, LPARAM a2)
{
  char v2; // al
  char v3; // al
  int (__stdcall *v4)(int, int, int, int); // ebp
  const char **WindowLongA; // eax
  LONG v6; // edi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  void *v17; // eax
  void *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  _DWORD *i; // eax
  LPARAM v25; // edx
  const char **v26; // eax
  bool v27; // zf
  LRESULT (__stdcall *v28)(HWND, UINT, WPARAM, LPARAM); // esi
  wchar_t *String; // [esp-4h] [ebp-AC4h]
  int v31; // [esp+10h] [ebp-AB0h] BYREF
  __int64 v32; // [esp+14h] [ebp-AACh]
  const char **v33; // [esp+1Ch] [ebp-AA4h]
  CHAR ClassName[128]; // [esp+20h] [ebp-AA0h] BYREF
  struct tagRECT v35; // [esp+A0h] [ebp-A20h] BYREF
  struct tagRECT Rect; // [esp+B0h] [ebp-A10h] BYREF
  void *v37[128]; // [esp+C0h] [ebp-A00h] BYREF
  wchar_t lParam[1024]; // [esp+2C0h] [ebp-800h] BYREF

  GetClassNameA(hWnd, ClassName, 128); /*0x60f9bc*/
  LODWORD(v32) = GetWindowLongA(hWnd, -16); /*0x60f9e2*/
  ScreenDialogToClient(hWnd, &v35); /*0x60f9e6*/
  GetClientRect(hWnd, &Rect); /*0x60f9fb*/
  TimerPool::AllocSlot(hWnd); /*0x60fa08*/
  dword_AC1CB4 = 159; /*0x60fa14*/
  dword_AC1CA8 = 159; /*0x60fa19*/
  dword_AC1DF0 = 1; /*0x60fa2f*/
  dword_AC1890 = 127; /*0x60fa35*/
  dword_AC18A4 = 0xFFFF; /*0x60fa3f*/
  dword_AC1CB0 = 15658734; /*0x60fa49*/
  dword_AC4618 = 40863; /*0x60fa53*/
  dword_AC184C = 0xFFFFFF; /*0x60fa5d*/
  dword_AC4628 = (int)&off_808080; /*0x60fa67*/
  dword_AC4604 = 255; /*0x60fa71*/
  dword_AC4880 = (int)&loc_626261 + 1; /*0x60fa77*/
  dword_AC4624 = 255; /*0x60fa81*/
  dword_AC1DD8 = (int)&unk_929292; /*0x60fa87*/
  dword_AC1B98 = 12959399; /*0x60fa91*/
  dword_AC1B94 = (int)&unk_807A68; /*0x60fa9b*/
  dword_AC1AF8 = (int)&unk_8F8F8F; /*0x60faa5*/
  dword_AC4620 = (int)sub_646464; /*0x60faaf*/
  dword_AC4898 = 96; /*0x60fab9*/
  dword_AC4608 = 43690; /*0x60fac3*/
  dword_AC48B0 = 2235147; /*0x60facd*/
  dword_AC1B90 = (int)&loc_443714 + 2; /*0x60fad7*/
  if ( !dword_AC48D4 ) /*0x60fae1*/
  {
    LOWORD(g_ScreenSaverState) = 255; /*0x60fae3*/
    LOWORD(g_ScreenSaverState) = 0xFFu >> GetBitShift_Green(); /*0x60faf2*/
    v2 = GetBitShift_Red(); /*0x60faf9*/
    HIWORD(g_ScreenSaverState) = 255; /*0x60fb01*/
    LOWORD(g_ScreenSaverState) = (_WORD)g_ScreenSaverState << v2; /*0x60fb08*/
    HIWORD(g_ScreenSaverState) = 0xFFu >> GetBitMask_Blue(); /*0x60fb17*/
    v3 = GetBitMask_Green(); /*0x60fb1e*/
    LOWORD(g_CreditsScreenState) = 255; /*0x60fb26*/
    HIWORD(g_ScreenSaverState) <<= v3; /*0x60fb2d*/
    LOWORD(g_CreditsScreenState) = 0xFFu >> GetBitMask_Red(); /*0x60fb3c*/
    LOWORD(g_CreditsScreenState) = (_WORD)g_CreditsScreenState << GetBitShift_Blue(); /*0x60fb4b*/
    InitDialogCountryIcons(); /*0x60fb52*/
    dword_AC48D4 = 1; /*0x60fb57*/
  }
  v4 = 0; /*0x60fb67*/
  v31 = 11; /*0x60fb69*/
  WindowLongA = (const char **)GetWindowLongA(hWnd, -21); /*0x60fb71*/
  v33 = WindowLongA; /*0x60fb75*/
  if ( WindowLongA ) /*0x60fb79*/
    strcpy(ClassName, *WindowLongA); /*0x60fb95*/
  if ( !strcmp(ClassName, aScrollbar) ) /*0x60fbad*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))Scrollbar::DlgProc; /*0x60fbd4*/
    v31 = 8; /*0x60fbd9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ListBox) ) /*0x60fbf5*/
  {
    v4 = Options::DialogProc; /*0x60fc1c*/
    v31 = 4; /*0x60fc21*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x60fc3d*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))ComboBoxDropDown::WndProc; /*0x60fc64*/
    v31 = 3; /*0x60fc69*/
  }
  else if ( !strcmp(ClassName, aMsctlsTrackbar) ) /*0x60fc85*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))TabControl::DlgProc; /*0x60fcac*/
    v31 = 7; /*0x60fcb1*/
  }
  else if ( !strcmp(ClassName, aMsctlsProgress) ) /*0x60fccd*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))NetworkLobbyPaintProc; /*0x60fcf4*/
    v31 = 6; /*0x60fcf9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x60fd15*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))EditControl::WndProc; /*0x60fd3c*/
    v31 = 1; /*0x60fd41*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60fd5d*/
  {
    v4 = ListBox::EditSubclassProc; /*0x60fd84*/
    v31 = 1; /*0x60fd89*/
  }
  else if ( !strcmp(ClassName, aStatic) ) /*0x60fda5*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))BinkMovie::WndProc; /*0x60fdcc*/
    v31 = 2; /*0x60fdd1*/
  }
  else if ( !strcmp(ClassName, aSystabcontrol3) ) /*0x60fded*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))Dialog::TabControlPaint; /*0x60fe14*/
    v31 = 10; /*0x60fe19*/
  }
  else if ( !strcmp(ClassName, aButton) ) /*0x60fe35*/
  {
    if ( (v32 & 7) == 7 ) /*0x60fe68*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))GroupLabel::WndProc; /*0x60fe6a*/
      v31 = 0; /*0x60fe6f*/
    }
    else if ( (v32 & 0xB) == 0xB ) /*0x60fe80*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))TabControl::WndProc; /*0x60fe82*/
      v31 = 0; /*0x60fe87*/
    }
    else if ( (v32 & 3) == 3 ) /*0x60fe95*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))Checkbox::WndProc; /*0x60fe97*/
      v31 = 0; /*0x60fe9c*/
    }
    else
    {
      if ( (v32 & 9) == 9 ) /*0x60fea7*/
        v4 = (int (__stdcall *)(int, int, int, int))ButtonOwnerDraw::DlgProc; /*0x60fea9*/
      v31 = 0; /*0x60feae*/
    }
  }
  else if ( !strcmp(ClassName, aMsctlsHotkey32) ) /*0x60fec3*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))RenderDialogSurface; /*0x60feea*/
    v31 = 9; /*0x60feef*/
  }
  else
  {
    v4 = (int (__stdcall *)(int, int, int, int))sub_612A60; /*0x60fef9*/
  }
  v6 = SetWindowLongA(hWnd, -4, (LONG)ComboBoxOwnerDraw::DlgProc); /*0x60ff1a*/
  v7 = *((_DWORD *)g_DialogPool + (dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1))); /*0x60ff37*/
  if ( v7 ) /*0x60ff3c*/
  {
    while ( *(HWND *)v7 != hWnd ) /*0x60ff47*/
    {
      v7 = *(_DWORD *)(v7 + 8); /*0x60ff4d*/
      if ( !v7 ) /*0x60ff52*/
        goto LABEL_39; /*0x60ff52*/
    }
  }
  else
  {
LABEL_39:
    v8 = __2_YAPAXI_Z(0xCu); /*0x60ff54*/
    *v8 = hWnd; /*0x60ff67*/
    v8[1] = v4; /*0x60ff70*/
    v8[2] = 0; /*0x60ff73*/
    v9 = dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1); /*0x60ff90*/
    v10 = *((_DWORD *)g_DialogPool + v9); /*0x60ff92*/
    *((_DWORD *)g_DialogPool + v9) = v8; /*0x60ff95*/
    if ( v10 ) /*0x60ff9a*/
      v8[2] = v10; /*0x60ff9c*/
    v32 = (unsigned int)++unk_AC18C4; /*0x60ffaf*/
    LODWORD(v32) = dword_AC18C8; /*0x60ffbc*/
    if ( (double)(unsigned int)unk_AC18C4 / (double)dword_AC18C8 >= dbl_AC18E8 ) /*0x60ffd3*/
      Dialog::GrowBuffer(&g_DialogPool); /*0x60ffda*/
  }
  v11 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x610001*/
  if ( v11 ) /*0x610006*/
  {
    while ( *(HWND *)v11 != hWnd ) /*0x610011*/
    {
      v11 = *(_DWORD *)(v11 + 8); /*0x610017*/
      if ( !v11 ) /*0x61001c*/
        goto LABEL_46; /*0x61001c*/
    }
  }
  else
  {
LABEL_46:
    v12 = __2_YAPAXI_Z(0xCu); /*0x61001e*/
    *v12 = hWnd; /*0x610031*/
    v12[1] = v6; /*0x61003a*/
    v12[2] = 0; /*0x61003d*/
    v13 = dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1); /*0x61005a*/
    v14 = *((_DWORD *)dword_AC1B48 + v13); /*0x61005c*/
    *((_DWORD *)dword_AC1B48 + v13) = v12; /*0x61005f*/
    if ( v14 ) /*0x610064*/
      v12[2] = v14; /*0x610066*/
    v32 = (unsigned int)++dword_AC1B4C; /*0x610079*/
    LODWORD(v32) = dword_AC1B50; /*0x610086*/
    if ( (double)(unsigned int)dword_AC1B4C / (double)dword_AC1B50 >= dbl_AC1B70 ) /*0x61009d*/
      Dialog::GrowBuffer(&dword_AC1B48); /*0x6100a4*/
  }
  v15 = 0; /*0x6100ae*/
  if ( dword_AC1B04 && (v16 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x6100db*/
  {
    while ( *(HWND *)v16 != hWnd ) /*0x6100e6*/
    {
      v16 = *(_DWORD *)(v16 + 516); /*0x6100e8*/
      if ( !v16 ) /*0x6100f0*/
        goto LABEL_54; /*0x6100f0*/
    }
    v15 = v16 + 4; /*0x610135*/
  }
  else
  {
LABEL_54:
    memset(v37, 0, sizeof(v37)); /*0x6100f2*/
    v37[26] = (void *)11; /*0x61010a*/
    v37[25] = (void *)g_FogOfWarState; /*0x610115*/
    v17 = __2_YAPAXI_Z(4u); /*0x61011c*/
    if ( v17 ) /*0x610126*/
      v18 = (void *)unknown_libname_74(v17); /*0x61012a*/
    else
      v18 = 0; /*0x61013d*/
    v37[15] = v18; /*0x610144*/
    v37[16] = 0; /*0x61014b*/
    v37[23] = 0; /*0x610152*/
    v37[36] = (void *)-1; /*0x610159*/
    v19 = __2_YAPAXI_Z(0x208u); /*0x610164*/
    v20 = v19; /*0x610169*/
    if ( v19 ) /*0x610170*/
      DialogControl::Constructor(v19 + 1); /*0x610175*/
    else
      v20 = 0; /*0x61017c*/
    *v20 = hWnd; /*0x610190*/
    DialogClass::CopyTemplateStruct(v37); /*0x610192*/
    v20[129] = 0; /*0x61019e*/
    v21 = HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd); /*0x6101aa*/
    v22 = *((_DWORD *)dword_AC1B00 + v21); /*0x6101b5*/
    *((_DWORD *)dword_AC1B00 + v21) = v20; /*0x6101b8*/
    if ( v22 ) /*0x6101bd*/
      v20[129] = v22; /*0x6101bf*/
    v32 = (unsigned int)++dword_AC1B04; /*0x6101d5*/
    LODWORD(v32) = dword_AC1B08; /*0x6101e2*/
    if ( (double)(unsigned int)dword_AC1B04 / (double)dword_AC1B08 >= dbl_AC1B28 ) /*0x6101f9*/
      HashTable::Grow2(&dword_AC1B00); /*0x610200*/
    if ( dword_AC1B04 ) /*0x61020b*/
    {
      v23 = *((_DWORD *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd)); /*0x610225*/
      if ( v23 ) /*0x61022a*/
      {
        while ( *(HWND *)v23 != hWnd ) /*0x610235*/
        {
          v23 = *(_DWORD *)(v23 + 516); /*0x610237*/
          if ( !v23 ) /*0x61023f*/
            goto LABEL_71; /*0x61023f*/
        }
        v15 = v23 + 4; /*0x610247*/
      }
    }
LABEL_71:
    GadgetClass::SetTooltip(v37, 0); /*0x61024a*/
    for ( i = v37[13]; v37[13]; i = v37[13] ) /*0x610260*/
      LinkedList::Remove(v37, i); /*0x61026a*/
    if ( v37[15] ) /*0x610283*/
      DeleteAndZero::OrFree((void **)v37[15], 1); /*0x610287*/
  }
  v25 = a2; /*0x610290*/
  *(_DWORD *)(v15 + 104) = v31; /*0x610297*/
  v26 = v33; /*0x61029a*/
  v27 = v33 == 0; /*0x61029e*/
  *(_DWORD *)v15 = v25; /*0x6102a0*/
  if ( !v27 ) /*0x6102a3*/
    *(_DWORD *)(v15 + 84) = v26[1]; /*0x6102a8*/
  v28 = 0; /*0x6102bd*/
  v31 = 0; /*0x6102bf*/
  if ( (unsigned __int8)Dialog::UpdateControlState(&hWnd, &v31) && v31 ) /*0x6102d2*/
    v28 = *(LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))v31; /*0x6102d4*/
  LOBYTE(lParam[0]) = 0; /*0x6102ee*/
  CallWindowProcA(v28, hWnd, 0xDu, 0x800u, (LPARAM)lParam); /*0x6102f5*/
  if ( LOBYTE(lParam[0]) ) /*0x610302*/
  {
    String = GetStringCSF(lParam, 0, g_Str_File_ownrdraw_cpp, 7392); /*0x61031c*/
    GadgetClass::SetTooltip((void **)v15, String); /*0x61031d*/
  }
  else
  {
    GadgetClass::SetTooltip((void **)v15, 0); /*0x610322*/
  }
  *(_DWORD *)(v15 + 44) = 0; /*0x610327*/
  SendMessageA(hWnd, 0x497u, 0, 0); /*0x610339*/
  return 1; /*0x61033f*/
}


