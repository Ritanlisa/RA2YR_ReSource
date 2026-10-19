// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00420080  sub_420080  this=-  sig=ida-proto ====
int sub_420080()
{
  dword_88A084 = 0; /*0x420087*/
  dword_88A088 = 0; /*0x42008c*/
  byte_88A08C = 1; /*0x420091*/
  byte_88A08D = 0; /*0x420098*/
  dword_88A080 = (int)&DynamicVectorClass<AlphaLightingRemapClass *>::`vftable'; /*0x42009d*/
  dword_88A094 = 10; /*0x4200a7*/
  dword_88A090 = 0; /*0x4200b1*/
  return atexit(sub_4200C0); /*0x4200bc*/
}



// ==== 0x004200C0  sub_4200C0  this=-  sig=ida-proto ====
void __cdecl sub_4200C0()
{
  if ( (byte_88A098 & 1) == 0 ) /*0x4200ca*/
  {
    dword_88A080 = (int)&VectorClass<AlphaLightingRemapClass *>::`vftable'; /*0x4200ce*/
    byte_88A098 |= 1u; /*0x4200e1*/
    if ( dword_88A084 ) /*0x4200e7*/
    {
      if ( byte_88A08D ) /*0x4200f1*/
      {
        __3_YAXPAX_Z(dword_88A084); /*0x4200f4*/
        dword_88A084 = 0; /*0x4200fc*/
      }
    }
    byte_88A08D = 0; /*0x420106*/
    dword_88A088 = 0; /*0x42010d*/
  }
}



// ==== 0x00420120  ObjectClass::??0Iostream_init_QAE_XZ_0  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall Iostream_init::Iostream_init(Iostream_init *this)
{
  return this; /*0x420122*/
}



// ==== 0x00420130  ObjectClass::nullsub_53  this=ObjectClass  sig=csp ====
void nullsub_53(ObjectClass *this)
{
  ; /*0x420130*/
}



// ==== 0x00420140  CreateFractalNoise  this=ObjectClass  sig=csp ====
_DWORD *__stdcall FractalNoise_Create(int a1)
{
  int v1; // eax
  char *v2; // ecx
  _DWORD *v3; // eax
  _DWORD *v4; // ebp
  int v5; // esi
  int v6; // edi
  _WORD *v7; // ebx
  int v8; // edx
  __int16 v9; // cx
  int v11; // eax

  v1 = 0; /*0x420149*/
  if ( dword_88A090 <= 0 ) /*0x420152*/
  {
LABEL_5:
    v3 = __2_YAPAXI_Z(0x20008u); /*0x42016e*/
    v4 = v3; /*0x420178*/
    if ( v3 ) /*0x42017f*/
    {
      v3[0x8000] = a1; /*0x420181*/
      v5 = 0; /*0x420187*/
      v3[32769] = 0; /*0x420189*/
      v6 = a1 - 1; /*0x420193*/
      v7 = v3; /*0x420194*/
      do /*0x4201d3*/
      {
        v8 = v6 * (v5 >> 8) * (unsigned __int8)v5 / 32258; /*0x4201ba*/
        if ( v8 > v6 ) /*0x4201be*/
          LOBYTE(v8) = a1 - 1; /*0x4201c0*/
        LOBYTE(v9) = 0; /*0x4201c2*/
        ++v5; /*0x4201c4*/
        HIBYTE(v9) = v8; /*0x4201c5*/
        *v7++ = v9; /*0x4201c7*/
      }
      while ( v5 <= 0xFFFF ); /*0x4201d3*/
    }
    else
    {
      v4 = 0; /*0x4201f7*/
    }
    if ( dword_88A090 < dword_88A088 /*0x420230*/
      || (byte_88A08D || !dword_88A088)
      && dword_88A094 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_88A080 + 8))(
           &dword_88A080,
           dword_88A088 + dword_88A094,
           0) )
    {
      v11 = dword_88A090++; /*0x42023d*/
      *((_DWORD *)dword_88A084 + v11) = v4; /*0x42024c*/
    }
    ++v4[32769]; /*0x420258*/
    return v4; /*0x42025e*/
  }
  else
  {
    v2 = (char *)dword_88A084; /*0x42015a*/
    while ( *(_DWORD *)(*(_DWORD *)v2 + 0x20000) != a1 ) /*0x420164*/
    {
      ++v1; /*0x420166*/
      v2 += 4; /*0x420167*/
      if ( v1 >= dword_88A090 ) /*0x42016c*/
        goto LABEL_5; /*0x42016c*/
    }
    ++*(_DWORD *)(*((_DWORD *)dword_88A084 + v1) + 131076); /*0x4201e5*/
    return (_DWORD *)*((_DWORD *)dword_88A084 + v1); /*0x4201f1*/
  }
}



// ==== 0x00420270  FractalNoise::Dtor  this=ObjectClass  sig=csp ====
void __stdcall FractalNoise_Release(void *Block)
{
  int v1; // eax

  if ( Block ) /*0x420276*/
  {
    if ( !--*((_DWORD *)Block + 32769) ) /*0x42028d*/
    {
      v1 = (*(int (__thiscall **)(int *, void **))(dword_88A080 + 16))(&dword_88A080, &Block); /*0x4202a7*/
      if ( v1 != -1 && v1 < dword_88A090 && v1 < --dword_88A090 ) /*0x4202c2*/
      {
        do /*0x4202da*/
        {
          ++v1; /*0x4202ca*/
          *((_DWORD *)dword_88A084 + v1 - 1) = *((_DWORD *)dword_88A084 + v1); /*0x4202ce*/
        }
        while ( v1 < dword_88A090 ); /*0x4202da*/
      }
      if ( Block ) /*0x4202e2*/
        __3_YAXPAX_Z(Block); /*0x4202e5*/
    }
  }
}



// ==== 0x004202F0  ObjectClass::method_4202F0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4202F0(ObjectClass *this, int a2)
{
  int v2; // edi
  int v3; // ebx
  ObjectClass *v4; // ebp
  int v5; // edx
  __int16 v6; // ax

  v2 = 0; /*0x4202f8*/
  *((_DWORD *)this + 0x8000) = a2; /*0x4202fa*/
  *((_DWORD *)this + 32769) = 0; /*0x420300*/
  v3 = a2 - 1; /*0x420306*/
  v4 = this; /*0x420309*/
  do /*0x420349*/
  {
    v5 = v3 * (v2 >> 8) * (unsigned __int8)v2 / 32258; /*0x42032f*/
    if ( v5 > v3 ) /*0x420333*/
      LOBYTE(v5) = a2 - 1; /*0x420335*/
    LOBYTE(v6) = 0; /*0x420337*/
    ++v2; /*0x420339*/
    HIBYTE(v6) = v5; /*0x42033a*/
    LOWORD(v4->AbstractClass) = v6; /*0x42033c*/
    v4 = (ObjectClass *)((char *)v4 + 2); /*0x420340*/
  }
  while ( v2 <= 0xFFFF ); /*0x420349*/
  return &this->AbstractClass; /*0x42034b*/
}



// ==== 0x00420360  nullsub_88  this=-  sig=ida-proto ====
void nullsub_88()
{
  ; /*0x420360*/
}



// ==== 0x00420370  _DynamicVectorClass_PAVAlphaLightingRemapClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall AITriggerTypeClass_40::ClearBuffer(_DynamicVectorClass_PAVAlphaLightingRemapClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x420376*/
  this->m_10 = 0; /*0x420379*/
  if ( v2 && BYTE1(this->m_C) ) /*0x420380*/
  {
    __3_YAXPAX_Z(v2); /*0x420386*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42038e*/
  }
  BYTE1(this->m_C) = 0; /*0x420391*/
  this->m_8 = 0; /*0x420394*/
}



// ==== 0x004203A0  _DynamicVectorClass_PAVAlphaLightingRemapClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall AITriggerTypeClass_40::PointerToIndex(
        _DynamicVectorClass_PAVAlphaLightingRemapClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4203a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4203b5*/
  else
    return 0; /*0x4203a7*/
}



// ==== 0x004203C0  _VectorClass_PAVAlphaLightingRemapClass::Seek  this=VectorClass  sig=csp ====
int __thiscall AITriggerTypeClass_40::Seek(_VectorClass_PAVAlphaLightingRemapClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4203ca*/
}



// ==== 0x004203D0  _VectorClass_PAVAlphaLightingRemapClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall AITriggerTypeClass_40::AddRef(_VectorClass_PAVAlphaLightingRemapClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4203d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4203dd*/
  {
    v3 = 0; /*0x4203df*/
    if ( m_8 <= 0 ) /*0x4203e3*/
      return 1; /*0x420403*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4203e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4203eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4203f4*/
    {
      ++v3; /*0x4203f6*/
      ++v4; /*0x4203f7*/
      if ( v3 >= m_8 ) /*0x4203fc*/
        return 1; /*0x4203fc*/
    }
  }
  return 0; /*0x4203fe*/
}



// ==== 0x00420410  _VectorClass_PAVAlphaLightingRemapClass::Release  this=VectorClass  sig=csp ====
char __thiscall AITriggerTypeClass_40::Release(_VectorClass_PAVAlphaLightingRemapClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42041c*/
  {
    LOBYTE(this->m_C) = 0; /*0x420426*/
    if ( a3 ) /*0x42042c*/
      v4 = a3; /*0x420442*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x42043e*/
    LOBYTE(this->m_C) = 1; /*0x420446*/
    if ( v4 ) /*0x42044a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x420455*/
      {
        m_8 = this->m_8; /*0x42045c*/
        if ( a2 < m_8 ) /*0x420461*/
          m_8 = a2; /*0x420463*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x420469*/
          ++i; /*0x42046e*/
        if ( BYTE1(this->m_C) ) /*0x42047b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x420486*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42048e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x420497*/
      this->m_8 = a2; /*0x42049f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4204a2*/
      return 1; /*0x4204a8*/
    }
    else
    {
      return 0; /*0x42044f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVAlphaLightingRemapClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4204b2*/
    return 1; /*0x4204b8*/
  }
}



// ==== 0x004204C0  _VectorClass_PAVAlphaLightingRemapClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall AITriggerTypeClass_40::ddtor(_VectorClass_PAVAlphaLightingRemapClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4204cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4204d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4204db*/
  }
  BYTE1(this->m_C) = 0; /*0x4204de*/
  this->m_8 = 0; /*0x4204e1*/
}



// ==== 0x004204F0  _VectorClass_PAVAlphaLightingRemapClass::Read  this=VectorClass  sig=csp ====
int __thiscall AITriggerTypeClass_40::Read(_VectorClass_PAVAlphaLightingRemapClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4204f0*/
    return 0; /*0x4204f8*/
  m_8 = this->m_8; /*0x4204fe*/
  result = 0; /*0x420501*/
  if ( m_8 <= 0 ) /*0x420505*/
    return -1; /*0x42051c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42050b*/
  {
    if ( ++result >= m_8 ) /*0x42051a*/
      return -1; /*0x42051a*/
  }
  return result; /*0x4204fa*/
}



// ==== 0x00420530  _VectorClass_PAVAlphaLightingRemapClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall AITriggerTypeClass_40::Write(_VectorClass_PAVAlphaLightingRemapClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x420530*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x420545*/
  else
    return 0; /*0x420537*/
}



// ==== 0x00420550  _DynamicVectorClass_PAVAlphaLightingRemapClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall AITriggerTypeClass_40::SetCapacity(
        _DynamicVectorClass_PAVAlphaLightingRemapClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42055c*/
  {
    LOBYTE(this->m_C) = 0; /*0x420562*/
    if ( a3 ) /*0x420568*/
      v4 = a3; /*0x42057e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x42057a*/
    LOBYTE(this->m_C) = 1; /*0x420582*/
    if ( !v4 ) /*0x420586*/
      return 0; /*0x4205fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x420588*/
    {
      m_8 = this->m_8; /*0x42058f*/
      if ( a2 < m_8 ) /*0x420594*/
        m_8 = a2; /*0x420596*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42059c*/
        ++i; /*0x4205a1*/
      if ( BYTE1(this->m_C) ) /*0x4205ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4205b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4205c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4205ca*/
    this->m_8 = a2; /*0x4205d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4205d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVAlphaLightingRemapClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4205de*/
  }
  v7 = this->m_8; /*0x4205e1*/
  if ( v7 < this->m_10 ) /*0x4205e9*/
    this->m_10 = v7; /*0x4205eb*/
  return 1; /*0x4205ee*/
}



// ==== 0x00420600  _DynamicVectorClass_PAVAlphaLightingRemapClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall AITriggerTypeClass_40::FindItem(_DynamicVectorClass_PAVAlphaLightingRemapClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x420600*/
  result = 0; /*0x420603*/
  if ( m_10 <= 0 ) /*0x420608*/
    return -1; /*0x42061f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42060e*/
  {
    if ( ++result >= m_10 ) /*0x42061d*/
      return -1; /*0x42061d*/
  }
  return result; /*0x420622*/
}



// ==== 0x00420630  _VectorClass_PAVAlphaLightingRemapClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall AITriggerTypeClass_40::QueryInterface(_VectorClass_PAVAlphaLightingRemapClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x420633*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AlphaLightingRemapClass *>::`vftable'; /*0x420636*/
  if ( v3 && BYTE1(this->m_C) ) /*0x420640*/
  {
    __3_YAXPAX_Z(v3); /*0x420648*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x420650*/
  }
  BYTE1(this->m_C) = 0; /*0x42065b*/
  this->m_8 = 0; /*0x420661*/
  if ( (a2 & 1) != 0 ) /*0x420668*/
    __3_YAXPAX_Z(this); /*0x42066b*/
  return this->__pad_0; /*0x420675*/
}



// ==== 0x00420680  _DynamicVectorClass_PAVAlphaLightingRemapClass::Constructor_VectorClass_AlphaLightingRemapClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AITriggerTypeClass_40::Constructor_VectorClass_AlphaLightingRemapClass___(
        _DynamicVectorClass_PAVAlphaLightingRemapClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x420683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AlphaLightingRemapClass *>::`vftable'; /*0x420686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x420690*/
  {
    __3_YAXPAX_Z(v3); /*0x420698*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4206a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4206ab*/
  this->m_8 = 0; /*0x4206b1*/
  if ( (a2 & 1) != 0 ) /*0x4206b8*/
    __3_YAXPAX_Z(this); /*0x4206bb*/
  return this->__pad_0; /*0x4206c5*/
}



// ==== 0x004206D0  sub_4206D0  this=-  sig=ida-proto ====
int sub_4206D0()
{
  dword_88A0A8 = 0; /*0x4206d2*/
  dword_88A0AC = 0; /*0x4206d7*/
  dword_88A0B0 = 0; /*0x4206dc*/
  dword_88A0B4 = 0; /*0x4206e1*/
  return 0; /*0x4206e6*/
}



// ==== 0x004206F0  sub_4206F0  this=-  sig=ida-proto ====
void sub_4206F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4206fc*/
  dbl_88A0C0 = Math::Sqrt(v0 + v0); /*0x42070e*/
}



// ==== 0x00420720  sub_420720  this=-  sig=ida-proto ====
void sub_420720()
{
  dbl_89A128 = dbl_88A0C0 / 60.0; /*0x42072c*/
}



// ==== 0x00420740  sub_420740  this=-  sig=ida-proto ====
void sub_420740()
{
  dbl_88A110 = 1.0 / dbl_89A128; /*0x42074c*/
}



// ==== 0x00420760  sub_420760  this=-  sig=ida-proto ====
void sub_420760()
{
  dbl_88A108 = 0.0174532925199433 * 45.0; /*0x42076c*/
}



// ==== 0x00420780  sub_420780  this=-  sig=ida-proto ====
void sub_420780()
{
  dbl_88A0C8 = 0.0174532925199433 * 60.0; /*0x42078c*/
}



// ==== 0x004207A0  sub_4207A0  this=-  sig=ida-proto ====
void sub_4207A0()
{
  dbl_88A0A0 = 0.0174532925199433 * 90.0; /*0x4207ac*/
}



// ==== 0x004207C0  sub_4207C0  this=-  sig=ida-proto ====
__int64 sub_4207C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_88A0A0 - dbl_88A0C8); /*0x4207d2*/
  result = Math::RoundToInt(v0 * dbl_88A0C0 * 0.5); /*0x4207e6*/
  dword_89A130 = result; /*0x4207eb*/
  return result; /*0x4207f0*/
}



// ==== 0x00420800  sub_420800  this=-  sig=ida-proto ====
void sub_420800()
{
  dbl_88A0D0 = Math::ArcTan((double)dword_89A130 * 0.00390625); /*0x420817*/
}



// ==== 0x00420830  sub_420830  this=-  sig=ida-proto ====
void sub_420830()
{
  dbl_88A0E8 = Math::ArcTan((double)(2 * dword_89A130) / dbl_88A0C0); /*0x420852*/
}



// ==== 0x00420860  sub_420860  this=-  sig=ida-proto ====
__int64 sub_420860()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A130) + 0.5); /*0x42087b*/
  dword_89A124 = result; /*0x420880*/
  return result; /*0x420886*/
}



// ==== 0x00420890  sub_420890  this=-  sig=ida-proto ====
int sub_420890()
{
  word_88A0B8 = 0; /*0x420892*/
  word_88A0BA = 0; /*0x420898*/
  return 0; /*0x42089e*/
}



// ==== 0x004208A0  sub_4208A0  this=-  sig=ida-proto ====
int sub_4208A0()
{
  dword_88A0D8 = 0; /*0x4208a2*/
  dword_88A0DC = 0; /*0x4208a7*/
  dword_88A0E0 = 0; /*0x4208ac*/
  return 0; /*0x4208b1*/
}



// ==== 0x004208C0  sub_4208C0  this=-  sig=ida-proto ====
int sub_4208C0()
{
  dword_89A120 = 0; /*0x4208c5*/
  dword_89A118 = 128; /*0x4208cf*/
  dword_89A11C = 128; /*0x4208d4*/
  return 128; /*0x4208d9*/
}



// ==== 0x004208E0  sub_4208E0  this=-  sig=ida-proto ====
int sub_4208E0()
{
  dword_88A0F4 = 0; /*0x4208e7*/
  dword_88A0F8 = 0; /*0x4208ec*/
  byte_88A0FC = 1; /*0x4208f1*/
  byte_88A0FD = 0; /*0x4208f8*/
  dword_88A0F0 = (int)&off_7E3238; /*0x4208fd*/
  dword_88A104 = 10; /*0x420907*/
  g_AlphaShapeLimit = 0; /*0x420911*/
  return atexit(sub_420920); /*0x42091c*/
}



// ==== 0x00420920  sub_420920  this=-  sig=ida-proto ====
void __cdecl sub_420920()
{
  dword_88A0F0 = (int)&VectorClass<AlphaShapeClass *>::`vftable'; /*0x420928*/
  if ( dword_88A0F4 && byte_88A0FD ) /*0x42093c*/
  {
    __3_YAXPAX_Z(dword_88A0F4); /*0x42093f*/
    dword_88A0F4 = 0; /*0x420947*/
  }
  byte_88A0FD = 0; /*0x42094d*/
  dword_88A0F8 = 0; /*0x420953*/
}



// ==== 0x00420960  AlphaShapeClass::CTOR  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::CTOR(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int i; // edi
  int v11; // edx

  AbstractClass::Constructor((AbstractClass *)this); /*0x420965*/
  *(_DWORD *)(this + 56) = 0; /*0x42096e*/
  *(_DWORD *)(this + 36) = a2; /*0x420975*/
  *(_BYTE *)(this + 60) = 0; /*0x420978*/
  *(_DWORD *)this = &AlphaShapeClass::`vftable'; /*0x42097c*/
  *(_DWORD *)(this + 4) = &AlphaShapeClass::`vftable'; /*0x420982*/
  *(_DWORD *)(this + 8) = &AlphaShapeClass::`vftable'; /*0x420989*/
  *(_DWORD *)(this + 12) = &AlphaShapeClass::`vftable'; /*0x420990*/
  v5 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) + 172); /*0x42099f*/
  *(_DWORD *)(this + 56) = v5; /*0x4209ad*/
  v6 = *(__int16 *)(v5 + 2); /*0x4209b0*/
  v7 = *(__int16 *)(v5 + 4); /*0x4209b4*/
  *(_DWORD *)(this + 40) = a3; /*0x4209bb*/
  *(_DWORD *)(this + 44) = a4; /*0x4209be*/
  *(_DWORD *)(this + 48) = v6; /*0x4209c1*/
  *(_DWORD *)(this + 52) = v7; /*0x4209c4*/
  if ( g_AlphaShapeLimit < dword_88A0F8 /*0x4209fc*/
    || (byte_88A0FD || !dword_88A0F8)
    && dword_88A104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_88A0F0 + 8))(
         &dword_88A0F0,
         dword_88A0F8 + dword_88A104,
         0) )
  {
    v8 = g_AlphaShapeLimit++; /*0x420a09*/
    *((_DWORD *)dword_88A0F4 + v8) = this; /*0x420a18*/
  }
  if ( dword_B0F730 < dword_B0F728 /*0x420a52*/
    || (byte_B0F72D || !dword_B0F728)
    && dword_B0F734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F720 + 8))(
         &dword_B0F720,
         dword_B0F728 + dword_B0F734,
         0) )
  {
    v9 = dword_B0F730++; /*0x420a5f*/
    *((_DWORD *)dword_B0F724 + v9) = this; /*0x420a6e*/
  }
  if ( !byte_89A134 ) /*0x420a78*/
  {
    byte_89A134 = 1; /*0x420a7a*/
    for ( i = 0; i < 0x10000; ++i ) /*0x420a81*/
    {
      v11 = i % 256 * (i / 256) / 127; /*0x420ab9*/
      if ( v11 > 255 ) /*0x420ac1*/
      {
        LOBYTE(v11) = -1; /*0x420ad3*/
      }
      else if ( v11 < 0 ) /*0x420ac5*/
      {
        LOBYTE(v11) = 0; /*0x420ac7*/
      }
      byte_88A118[i] = v11; /*0x420ad8*/
    }
  }
  return this; /*0x420ae9*/
}



// ==== 0x00420AF0  AlphaShapeClass::Constructor  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::Constructor(AlphaShapeClass *this)
{
  int v2; // eax
  int v3; // eax
  int i; // esi
  int v5; // edx

  AbstractClass::Constructor((AbstractClass *)this); /*0x420af4*/
  this->AlphaShapeClass_field_0x24 = 0; /*0x420afb*/
  *((_DWORD *)this + 10) = 0; /*0x420afe*/
  *((_DWORD *)this + 11) = 0; /*0x420b01*/
  this->ptr_10 = 0; /*0x420b04*/
  *((_DWORD *)this + 13) = 0; /*0x420b07*/
  *((_DWORD *)this + 14) = 0; /*0x420b0a*/
  *((_BYTE *)this + 60) = 0; /*0x420b0d*/
  *(_DWORD *)this->__pad_0 = &AlphaShapeClass::`vftable'; /*0x420b10*/
  this->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x420b16*/
  this->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x420b1d*/
  this->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x420b24*/
  if ( g_AlphaShapeLimit < dword_88A0F8 /*0x420b5c*/
    || (byte_88A0FD || !dword_88A0F8)
    && dword_88A104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_88A0F0 + 8))(
         &dword_88A0F0,
         dword_88A0F8 + dword_88A104,
         0) )
  {
    v2 = g_AlphaShapeLimit++; /*0x420b69*/
    *((_DWORD *)dword_88A0F4 + v2) = this; /*0x420b78*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x420baf*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x420bbc*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v3) = this; /*0x420bcb*/
  }
  if ( byte_89A134 ) /*0x420bd4*/
    return (int)this->__pad_0; /*0x420c4a*/
  byte_89A134 = 1; /*0x420bd7*/
  for ( i = 0; i < 0x10000; ++i ) /*0x420bde*/
  {
    v5 = i % 256 * (i / 256) / 127; /*0x420c16*/
    if ( v5 > 255 ) /*0x420c1e*/
    {
      LOBYTE(v5) = -1; /*0x420c30*/
    }
    else if ( v5 < 0 ) /*0x420c22*/
    {
      LOBYTE(v5) = 0; /*0x420c24*/
    }
    byte_88A118[i] = v5; /*0x420c35*/
  }
  return (int)this->__pad_0; /*0x420c47*/
}



// ==== 0x00420D40  AlphaShapeClass::SD_vt03  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt03(AlphaShapeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x420d46*/
    return -2147467261; /*0x420d48*/
  *a2 = 1648129412; /*0x420d56*/
  a2[1] = 299005159; /*0x420d5e*/
  a2[2] = 1610675640; /*0x420d67*/
  a2[3] = unk_7E99AC; /*0x420d70*/
  return 0; /*0x420d4d*/
}



// ==== 0x00420D80  AlphaShapeClass::SD_vt11  this=AlphaShapeClass  sig=csp ====
int AlphaShapeClass::SD_vt11(AlphaShapeClass *this)
{
  return 62; /*0x420d85*/
}



// ==== 0x00420D90  AlphaShapeClass::SD_vt12  this=AlphaShapeClass  sig=csp ====
int AlphaShapeClass::SD_vt12(AlphaShapeClass *this)
{
  return 64; /*0x420d95*/
}



// ==== 0x00420DA0  AlphaShapeClass::SD_vt13  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::SD_vt13(AlphaShapeClass *this, int a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x420da9*/
  Power::TimerProcess(*((_DWORD *)this + 10)); /*0x420db4*/
  Power::TimerProcess(*((_DWORD *)this + 11)); /*0x420dbf*/
  Power::TimerProcess(this->ptr_10); /*0x420dca*/
  return Power::TimerProcess(*((_DWORD *)this + 13)); /*0x420dda*/
}



// ==== 0x00420DE0  AlphaShapeClass::SD_vt05  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt05(AlphaShapeClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x420df1*/
  if ( Prefix_0 >= 0 ) /*0x420df5*/
  {
    if ( this ) /*0x420df9*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x420e02*/
      *(_DWORD *)this->__pad_0 = &AlphaShapeClass::`vftable'; /*0x420e07*/
      this->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x420e0d*/
      this->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x420e14*/
      this->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x420e1b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AlphaShapeClass_field_0x24); /*0x420e2b*/
    *((_DWORD *)this + 14) = 0; /*0x420e30*/
  }
  return Prefix_0; /*0x420e39*/
}



// ==== 0x00420E40  AlphaShapeClass::SD_vt06  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt06(AlphaShapeClass *this, int *a2, int a3)
{
  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x420e4f*/
  return Prefix >= 0 ? 0 : Prefix;
}



// ==== 0x00420E70  AlphaShapeClass::SD_vt10  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::SD_vt10(AlphaShapeClass *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x420e70*/
  if ( a2 == this->AlphaShapeClass_field_0x24 ) /*0x420e79*/
    *((_BYTE *)this + 60) = 1; /*0x420e7b*/
  return result; /*0x420e7f*/
}



// ==== 0x00420E90  AirstrikeClass::UpdateAll  this=AirstrikeClass  sig=csp ====
char AirstrikeClass::UpdateAll(AirstrikeClass *this)
{
  _DWORD *v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _BYTE *v6; // edx

  LOBYTE(v1) = byte_89A134; /*0x420e90*/
  if ( !byte_89A134 ) /*0x420e98*/
  {
    byte_89A134 = 1; /*0x420e9a*/
    v2 = 0; /*0x420ea1*/
    while ( 1 ) /*0x420ec6*/
    {
      v3 = v2 % 256 * (v2 / 256); /*0x420ec6*/
      v1 = (_DWORD *)((unsigned int)((unsigned __int64)(2164392969LL * v3) >> 32) >> 31); /*0x420ed6*/
      v4 = v3 / 127; /*0x420ed9*/
      if ( v3 / 127 > 255 ) /*0x420ee1*/
        break; /*0x420ee1*/
      if ( v4 >= 0 ) /*0x420ee5*/
      {
        if ( v4 > 255 ) /*0x420ef1*/
          break; /*0x420ef1*/
      }
      else
      {
        LOBYTE(v4) = 0; /*0x420ee7*/
      }
LABEL_8:
      byte_88A118[v2++] = v4; /*0x420ef8*/
      if ( v2 >= 0x10000 ) /*0x420f05*/
        goto LABEL_9; /*0x420f05*/
    }
    LOBYTE(v4) = -1; /*0x420ef3*/
    goto LABEL_8; /*0x420ef3*/
  }
LABEL_9:
  v5 = g_AlphaShapeLimit - 1; /*0x420f07*/
  if ( g_AlphaShapeLimit - 1 >= 0 ) /*0x420f12*/
  {
    v1 = dword_88A0F4; /*0x420f14*/
    do /*0x420f36*/
    {
      v6 = (_BYTE *)v1[v5]; /*0x420f19*/
      if ( v6[60] && v6 ) /*0x420f27*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 32))(1); /*0x420f2d*/
        v1 = dword_88A0F4; /*0x420f30*/
      }
      --v5; /*0x420f35*/
    }
    while ( v5 >= 0 ); /*0x420f36*/
  }
  return (char)v1; /*0x420f38*/
}



// ==== 0x00420F40  UpdateSpotlightsFoo  this=-  sig=csp ====
int __fastcall UpdateSpotlightsFoo(int *a1, int *a2)
{
  int result; // eax
  int *v3; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int *v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // ebp
  unsigned int v17; // esi
  int v18; // edx
  int *FoundationSize; // edx
  int v20; // eax
  int v21; // edi
  int v22; // ebx
  int v23; // ecx
  int SubFile; // esi
  _WORD *v25; // eax
  _DWORD *v26; // edx
  unsigned __int8 *v27; // esi
  char *v28; // ebp
  int v29; // ecx
  int v30; // edi
  unsigned __int8 v31; // cl
  char v32; // cl
  char *v33; // edx
  int v34; // edi
  unsigned __int8 v35; // cl
  char v36; // cl
  int v37; // [esp+8h] [ebp-C8h]
  int v38; // [esp+8h] [ebp-C8h]
  int v39; // [esp+8h] [ebp-C8h]
  int v40; // [esp+Ch] [ebp-C4h]
  int v41; // [esp+10h] [ebp-C0h]
  int v42; // [esp+14h] [ebp-BCh]
  int v43; // [esp+18h] [ebp-B8h]
  int v44; // [esp+1Ch] [ebp-B4h]
  unsigned __int8 v45; // [esp+20h] [ebp-B0h]
  unsigned __int8 v46; // [esp+20h] [ebp-B0h]
  int v47; // [esp+24h] [ebp-ACh]
  int v48; // [esp+28h] [ebp-A8h]
  char *v49; // [esp+2Ch] [ebp-A4h]
  unsigned int v50; // [esp+30h] [ebp-A0h] BYREF
  int v51; // [esp+34h] [ebp-9Ch]
  int v52; // [esp+38h] [ebp-98h]
  int v53; // [esp+3Ch] [ebp-94h]
  int *v54; // [esp+40h] [ebp-90h]
  int v55; // [esp+44h] [ebp-8Ch]
  int v56; // [esp+4Ch] [ebp-84h]
  int v57; // [esp+50h] [ebp-80h]
  int v58; // [esp+58h] [ebp-78h]
  int *v59; // [esp+5Ch] [ebp-74h]
  int v60; // [esp+60h] [ebp-70h]
  char **v61; // [esp+64h] [ebp-6Ch]
  int v62; // [esp+68h] [ebp-68h] BYREF
  int v63; // [esp+6Ch] [ebp-64h]
  int v64; // [esp+70h] [ebp-60h]
  int v65; // [esp+74h] [ebp-5Ch]
  int v66; // [esp+7Ch] [ebp-54h]
  int v67; // [esp+84h] [ebp-4Ch]
  int v68[4]; // [esp+88h] [ebp-48h] BYREF
  int v69; // [esp+98h] [ebp-38h]
  int v70[4]; // [esp+A0h] [ebp-30h] BYREF
  int v71[4]; // [esp+B0h] [ebp-20h] BYREF
  int v72[4]; // [esp+C0h] [ebp-10h] BYREF

  result = g_AlphaShapeLimit; /*0x420f46*/
  v3 = a1; /*0x420f4d*/
  v4 = 0; /*0x420f4f*/
  v54 = a2; /*0x420f51*/
  v59 = a1; /*0x420f57*/
  v44 = 0; /*0x420f5b*/
  if ( g_AlphaShapeLimit > 0 ) /*0x420f5f*/
  {
    while ( 1 ) /*0x420f72*/
    {
      v5 = *((_DWORD *)dword_88A0F4 + v4); /*0x420f72*/
      if ( !*(_BYTE *)(v5 + 60) ) /*0x420f75*/
      {
        v50 = *(_DWORD *)(v5 + 40); /*0x420f8b*/
        v51 = *(_DWORD *)(v5 + 44); /*0x420f92*/
        v52 = *(_DWORD *)(v5 + 48); /*0x420f99*/
        v53 = *(_DWORD *)(v5 + 52); /*0x420fa0*/
        v6 = v51 - (unsigned int)g_TacticalClass_Instance[45].__tail_0; /*0x420fb6*/
        v50 = DSurface_ViewBounds + v50 - (unsigned int)g_TacticalClass_Instance[44].__tail_0; /*0x420fca*/
        v51 = dword_886FA4 + v6; /*0x420fd2*/
        v7 = ClipRectIntersection(v70, (int *)&v50, v54, 0, 0); /*0x420fe2*/
        v68[0] = *v7; /*0x420fe9*/
        v68[1] = v7[1]; /*0x420ff7*/
        v68[2] = v7[2]; /*0x421001*/
        v8 = v3[1]; /*0x421008*/
        v9 = v7[3]; /*0x42100b*/
        v10 = *v3; /*0x42100e*/
        v68[3] = v9; /*0x421010*/
        v63 = v8; /*0x42101b*/
        v62 = v10; /*0x42102e*/
        v64 = 60; /*0x421032*/
        v65 = 30; /*0x42103d*/
        v11 = ClipRectIntersection(v71, v68, &v62, 0, 0); /*0x42104d*/
        v12 = *v11; /*0x42104f*/
        v55 = *v11; /*0x421051*/
        v13 = v11[1]; /*0x421055*/
        v14 = v11[2]; /*0x421058*/
        v15 = v11[3]; /*0x42105d*/
        v56 = v14; /*0x421060*/
        v57 = v15; /*0x421064*/
        if ( v14 > 0 && v15 > 0 ) /*0x421070*/
        {
          v16 = v13 - v63; /*0x421082*/
          v17 = v50; /*0x42108a*/
          v69 = v12 - v62; /*0x42108e*/
          v18 = *((_DWORD *)dword_88A0F4 + v4); /*0x421099*/
          v58 = v51; /*0x42109c*/
          v61 = *(char ***)(v18 + 56); /*0x4210ad*/
          FoundationSize = Building::GetFoundationSize(v72, 0); /*0x4210b6*/
          v41 = v13; /*0x4210b8*/
          v20 = *FoundationSize; /*0x4210bc*/
          v66 = FoundationSize[1]; /*0x4210c1*/
          v21 = FoundationSize[2]; /*0x4210c8*/
          v67 = FoundationSize[3]; /*0x4210ce*/
          if ( v13 <= v58 + v66 ) /*0x4210dd*/
            v41 = v58 + v66; /*0x4210df*/
          v60 = v41 - v58 - v66; /*0x4210fd*/
          v37 = v57 + v13; /*0x421118*/
          if ( v57 + v13 >= v66 + v67 + v58 ) /*0x42111c*/
            v37 = v66 + v67 + v58; /*0x42111e*/
          v40 = v55; /*0x42112b*/
          if ( v55 <= (int)(v17 + v20) ) /*0x42112f*/
            v40 = v17 + v20; /*0x421131*/
          v22 = v40 - v17 - v20; /*0x421144*/
          v23 = v55 + v56; /*0x42114e*/
          if ( v55 + v56 >= (int)(v20 + v17 + v21) ) /*0x421156*/
          {
            v42 = v20 + v17 + v21; /*0x42115e*/
            v23 = v42; /*0x421162*/
          }
          else
          {
            v42 = v55 + v56; /*0x421158*/
          }
          v47 = v40 + *((_DWORD *)dword_87E8A4 + 10) - v23; /*0x421187*/
          v43 = 60 - v56; /*0x421199*/
          v48 = v40 + v21 - v23; /*0x4211a1*/
          v49 = (char *)&unk_7E2B20 + 60 * v16 + v69; /*0x4211b0*/
          SubFile = MixFileClass::GetSubFile(v61, 0); /*0x4211c9*/
          v25 = (_WORD *)StreamClass::ReadAndSeek((int)dword_87E8A4, v40, v41 - dword_886FA4); /*0x4211d3*/
          v26 = dword_87E8A4; /*0x4211d8*/
          v27 = (unsigned __int8 *)(v22 + v60 * v21 + SubFile); /*0x4211ed*/
          if ( (unsigned int)&v25[(v37 - v41) * *((_DWORD *)dword_87E8A4 + 10) + 2 + v42 + 0x7FFFFFFF * v40] < *((_DWORD *)dword_87E8A4 + 7) ) /*0x421211*/
          {
            if ( v41 < v37 ) /*0x4212bb*/
            {
              v33 = v49; /*0x4212c1*/
              v39 = v37 - v41; /*0x4212c5*/
              do /*0x421324*/
              {
                if ( v40 < v42 ) /*0x4212cf*/
                {
                  v34 = v42 - v40; /*0x4212d3*/
                  do /*0x421306*/
                  {
                    v35 = *v27++; /*0x4212d5*/
                    v46 = v35; /*0x4212d8*/
                    v36 = *v33++; /*0x4212dc*/
                    if ( v36 != 32 ) /*0x4212e2*/
                      *v25 = (unsigned __int8)byte_88A118[256 * v46 + (unsigned __int16)*v25]; /*0x4212ff*/
                    ++v25; /*0x421302*/
                    --v34; /*0x421305*/
                  }
                  while ( v34 ); /*0x421306*/
                }
                v27 += v48; /*0x421314*/
                v25 += v47; /*0x421316*/
                v33 += v43; /*0x42131d*/
                --v39; /*0x421320*/
              }
              while ( v39 ); /*0x421324*/
            }
          }
          else if ( v41 < v37 ) /*0x421221*/
          {
            v28 = v49; /*0x42122b*/
            v38 = v37 - v41; /*0x42122f*/
            v29 = v40; /*0x421233*/
            do /*0x4212ad*/
            {
              if ( v29 < v42 ) /*0x421239*/
              {
                v30 = v42 - v29; /*0x42123d*/
                do /*0x421281*/
                {
                  v31 = *v27++; /*0x42123f*/
                  v45 = v31; /*0x421242*/
                  v32 = *v28++; /*0x421246*/
                  if ( v32 != 32 ) /*0x42124d*/
                  {
                    *v25 = (unsigned __int8)byte_88A118[256 * v45 + (unsigned __int16)*v25]; /*0x42126a*/
                    v26 = dword_87E8A4; /*0x42126d*/
                  }
                  if ( (unsigned int)++v25 >= v26[7] ) /*0x42127b*/
                    v25 = (_WORD *)((char *)v25 - v26[8]); /*0x42127d*/
                  --v30; /*0x421280*/
                }
                while ( v30 ); /*0x421281*/
                v29 = v40; /*0x421283*/
              }
              v27 += v48; /*0x42128b*/
              v28 += v43; /*0x421291*/
              v25 += v47; /*0x421297*/
              if ( (unsigned int)v25 >= v26[7] ) /*0x42129f*/
                v25 = (_WORD *)((char *)v25 - v26[8]); /*0x4212a1*/
              --v38; /*0x4212a9*/
            }
            while ( v38 ); /*0x4212ad*/
          }
          v4 = v44; /*0x421326*/
        }
      }
      result = g_AlphaShapeLimit; /*0x42132a*/
      v44 = ++v4; /*0x421332*/
      if ( v4 >= g_AlphaShapeLimit ) /*0x421336*/
        break; /*0x421336*/
      v3 = v59; /*0x420f69*/
    }
  }
  return result; /*0x42133e*/
}



// ==== 0x00421350  ObjectClass::RenderAlphaShapes  this=ObjectClass  sig=csp ====
int __thiscall RenderAlphaShapes(ObjectClass *this)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edx
  char *v4; // ecx
  int *v5; // eax
  int v6; // esi
  int v7; // eax
  char *v8; // ebp
  MixFileClass *v9; // edi
  int *FoundationSize; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  char *v14; // ecx
  int v15; // ebp
  int v16; // ecx
  int SubFile; // edi
  unsigned __int16 *v18; // eax
  int v19; // ecx
  unsigned __int8 *v20; // edi
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  unsigned __int16 v26; // bx
  bool v27; // zf
  int v28; // [esp+4h] [ebp-90h]
  int v29; // [esp+4h] [ebp-90h]
  int v30; // [esp+4h] [ebp-90h]
  int v31; // [esp+8h] [ebp-8Ch]
  int v32; // [esp+Ch] [ebp-88h]
  char *v33; // [esp+10h] [ebp-84h]
  int v34; // [esp+14h] [ebp-80h]
  unsigned __int8 v35; // [esp+18h] [ebp-7Ch]
  unsigned __int8 v36; // [esp+18h] [ebp-7Ch]
  int i; // [esp+1Ch] [ebp-78h]
  int v38; // [esp+20h] [ebp-74h]
  int v39; // [esp+24h] [ebp-70h] BYREF
  int v40; // [esp+28h] [ebp-6Ch]
  int v41; // [esp+2Ch] [ebp-68h]
  int v42; // [esp+30h] [ebp-64h]
  int v43; // [esp+34h] [ebp-60h] BYREF
  char *v44; // [esp+38h] [ebp-5Ch]
  int v45; // [esp+3Ch] [ebp-58h]
  int v46; // [esp+40h] [ebp-54h]
  int *v47; // [esp+44h] [ebp-50h]
  int v48; // [esp+48h] [ebp-4Ch]
  char *v49; // [esp+50h] [ebp-44h]
  int v50; // [esp+54h] [ebp-40h]
  char *v51; // [esp+58h] [ebp-3Ch]
  int v52; // [esp+70h] [ebp-24h]
  int v53[4]; // [esp+74h] [ebp-20h] BYREF
  int v54[4]; // [esp+84h] [ebp-10h] BYREF

  result = g_AlphaShapeLimit; /*0x421356*/
  v2 = 0; /*0x42135c*/
  v47 = (int *)this; /*0x42135e*/
  for ( i = 0; v2 < g_AlphaShapeLimit; i = v2 ) /*0x421368*/
  {
    v3 = (int *)(*((_DWORD *)dword_88A0F4 + v2) + 40); /*0x421380*/
    v43 = *v3; /*0x421384*/
    v44 = (char *)v3[1]; /*0x42138b*/
    v45 = v3[2]; /*0x421392*/
    v46 = v3[3]; /*0x421399*/
    v4 = &v44[-*(_DWORD *)&g_TacticalClass_Instance[45]]; /*0x4213af*/
    v43 = DSurface_ViewBounds.field_0 + v43 - *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4213c3*/
    v44 = (char *)DSurface_ViewBounds.field_4 + (unsigned int)v4; /*0x4213cb*/
    v39 = *v47; /*0x4213d1*/
    v40 = v47[1]; /*0x4213d8*/
    v41 = v47[2]; /*0x4213df*/
    v42 = v47[3]; /*0x4213f1*/
    v5 = ClipRectIntersection(v53, &v43, &v39, 0, 0); /*0x4213fa*/
    v50 = *v5; /*0x421403*/
    v51 = (char *)v5[1]; /*0x42140a*/
    if ( v5[2] > 0 && v5[3] > 0 ) /*0x42141e*/
    {
      v6 = v43; /*0x42142e*/
      v49 = v44; /*0x421432*/
      v7 = *((_DWORD *)dword_88A0F4 + v2); /*0x421436*/
      v9 = *(MixFileClass **)(v7 + 56); /*0x42143c*/
      if ( !v9 ) /*0x421441*/
      {
        v8 = (char *)dword_88A0F4 + 4 * v2; /*0x421439*/
        *(_DWORD *)(*(_DWORD *)v8 + 56) = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 36) + 136))(*(_DWORD *)(v7 + 36)) /*0x421459*/
                                                    + 172);
        v9 = *(MixFileClass **)(*((_DWORD *)dword_88A0F4 + v2) + 56); /*0x421464*/
      }
      FoundationSize = Building::GetFoundationSize(v54, 0); /*0x421478*/
      v11 = *FoundationSize; /*0x42147e*/
      v33 = v51; /*0x421480*/
      v12 = FoundationSize[1]; /*0x421484*/
      v13 = FoundationSize[2]; /*0x421487*/
      v52 = FoundationSize[3]; /*0x42148d*/
      if ( (int)v51 <= (int)&v49[v12] ) /*0x421499*/
        v33 = &v49[v12]; /*0x42149b*/
      v48 = v33 - v49 - v12; /*0x4214ab*/
      v14 = &v49[v52 + v12]; /*0x4214b9*/
      v28 = v42 + v40; /*0x4214c3*/
      if ( v42 + v40 >= (int)v14 ) /*0x4214c7*/
        v28 = (int)v14; /*0x4214c9*/
      v31 = v50; /*0x4214d6*/
      if ( v50 <= v6 + v11 ) /*0x4214da*/
        v31 = v6 + v11; /*0x4214dc*/
      v15 = v31 - v6 - v11; /*0x4214ef*/
      v16 = v39 + v41; /*0x4214f9*/
      if ( v39 + v41 >= v11 + v6 + v13 ) /*0x421501*/
      {
        v32 = v11 + v6 + v13; /*0x421509*/
        v16 = v32; /*0x42150d*/
      }
      else
      {
        v32 = v39 + v41; /*0x421503*/
      }
      v34 = v31 + v13 - v16; /*0x42152c*/
      v38 = v31 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40) - v16; /*0x421530*/
      SubFile = MixFileClass::GetSubFile(v9, 0); /*0x421549*/
      v18 = (unsigned __int16 *)StreamClass::ReadAndSeek( /*0x42155d*/
                                  *(int **)&stru_87E790.__pad_D8[60],
                                  v31 - DSurface_ViewBounds.field_0,
                                  v33 - (char *)DSurface_ViewBounds.field_4);
      v19 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x421562*/
      v20 = (unsigned __int8 *)(v15 + v48 * v13 + SubFile); /*0x421577*/
      if ( (unsigned int)&v18[(v28 - (_DWORD)v33) * *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40) /*0x42159b*/
                            + 2
                            + v32
                            + 0x7FFFFFFF * v31] < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) )
      {
        if ( (int)v33 < v28 ) /*0x421630*/
        {
          v23 = v32; /*0x421632*/
          v30 = v28 - (_DWORD)v33; /*0x42163e*/
          v24 = v31; /*0x421642*/
          do /*0x42168e*/
          {
            if ( v24 < v23 ) /*0x421648*/
            {
              v25 = v23 - v24; /*0x42164a*/
              do /*0x421676*/
              {
                v26 = *v18; /*0x421650*/
                v36 = *v20++; /*0x421653*/
                ++v18; /*0x421662*/
                --v25; /*0x421668*/
                *(v18 - 1) = (unsigned __int8)byte_88A118[256 * v36 + v26]; /*0x421672*/
              }
              while ( v25 ); /*0x421676*/
              v23 = v32; /*0x421678*/
              v24 = v31; /*0x42167c*/
            }
            v20 += v34; /*0x421684*/
            v27 = v30 == 1; /*0x421686*/
            v18 += v38; /*0x421687*/
            --v30; /*0x42168a*/
          }
          while ( !v27 ); /*0x42168e*/
        }
      }
      else if ( (int)v33 < v28 ) /*0x4215ab*/
      {
        v21 = v32; /*0x4215b1*/
        v29 = v28 - (_DWORD)v33; /*0x4215bd*/
        do /*0x421622*/
        {
          if ( v31 < v21 ) /*0x4215c7*/
          {
            v22 = v21 - v31; /*0x4215c9*/
            do /*0x421604*/
            {
              ++v18; /*0x4215cd*/
              v35 = *v20++; /*0x4215d0*/
              *(v18 - 1) = (unsigned __int8)byte_88A118[256 * v35 + *(v18 - 1)]; /*0x4215f1*/
              v19 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4215f5*/
              if ( (unsigned int)v18 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4215fe*/
                v18 = (unsigned __int16 *)((char *)v18 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x421600*/
              --v22; /*0x421603*/
            }
            while ( v22 ); /*0x421604*/
            v21 = v32; /*0x421606*/
          }
          v18 += v38; /*0x42160d*/
          v20 += v34; /*0x421610*/
          if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 28) ) /*0x421614*/
            v18 = (unsigned __int16 *)((char *)v18 - *(_DWORD *)(v19 + 32)); /*0x421616*/
          --v29; /*0x42161e*/
        }
        while ( v29 ); /*0x421622*/
      }
      v2 = i; /*0x421690*/
    }
    result = g_AlphaShapeLimit; /*0x421694*/
    ++v2; /*0x421699*/
  }
  return result; /*0x4216a9*/
}



// ==== 0x00421730  AlphaShapeClass::SDDTOR  this=AlphaShapeClass  sig=csp ====
_DWORD *__thiscall AlphaShapeClass::SDDTOR(AlphaShapeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  AlphaShapeClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &AlphaShapeClass::`vftable'; /*0x42173d*/
  this->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x421743*/
  this->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x42174a*/
  this->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x421751*/
  v6 = this; /*0x42175f*/
  v3 = (*(int (__thiscall **)(int *, AlphaShapeClass **))(dword_88A0F0 + 16))(&dword_88A0F0, &v6); /*0x421763*/
  if ( v3 != -1 && v3 < g_AlphaShapeLimit && v3 < --g_AlphaShapeLimit ) /*0x42177e*/
  {
    do /*0x421796*/
    {
      ++v3; /*0x421786*/
      *((_DWORD *)dword_88A0F4 + v3 - 1) = *((_DWORD *)dword_88A0F4 + v3); /*0x42178a*/
    }
    while ( v3 < g_AlphaShapeLimit ); /*0x421796*/
  }
  v6 = this; /*0x4217a8*/
  v4 = (*(int (__thiscall **)(int *, AlphaShapeClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x4217ac*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x4217bc*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x4217c1*/
    for ( ; /*0x4217c7*/
          v4 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x4217cf*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x4217e3*/
  if ( (a2 & 1) != 0 ) /*0x4217ed*/
    __3_YAXPAX_Z(this); /*0x4217f0*/
  return this->__pad_0; /*0x4217fa*/
}



// ==== 0x00421800  VectorClass_ptr_AlphaShapeClass::Destroy  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
void __thiscall VectorClass_ptr_AlphaShapeClass::Destroy(VectorClass_ptr_AlphaShapeClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x421806*/
  this->Count = 0; /*0x421809*/
  if ( Items && this->IsAllocated ) /*0x421810*/
  {
    __3_YAXPAX_Z(Items); /*0x421816*/
    this->Items = 0; /*0x42181e*/
  }
  this->IsAllocated = 0; /*0x421821*/
  this->Capacity = 0; /*0x421824*/
}



// ==== 0x00421830  VectorClass_ptr_AlphaShapeClass::GetItemIndex  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AlphaShapeClass::GetItemIndex(VectorClass_ptr_AlphaShapeClass *this, int a2)
{
  if ( this->IsInitialized ) /*0x421830*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x421845*/
  else
    return 0; /*0x421837*/
}



// ==== 0x00421850  _VectorClass_PAVAlphaShapeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::Get(_VectorClass_PAVAlphaShapeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x42185a*/
}



// ==== 0x00421860  _VectorClass_PAVAlphaShapeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::Add(_VectorClass_PAVAlphaShapeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x421862*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42186d*/
  {
    v3 = 0; /*0x42186f*/
    if ( m_8 <= 0 ) /*0x421873*/
      return 1; /*0x421893*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x421875*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42187b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x421884*/
    {
      ++v3; /*0x421886*/
      ++v4; /*0x421887*/
      if ( v3 >= m_8 ) /*0x42188c*/
        return 1; /*0x42188c*/
    }
  }
  return 0; /*0x42188e*/
}



// ==== 0x004218A0  _VectorClass_PAVAlphaShapeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::Release(_VectorClass_PAVAlphaShapeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4218ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x4218b6*/
    if ( a3 ) /*0x4218bc*/
      v4 = a3; /*0x4218d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4218ce*/
    LOBYTE(this->m_C) = 1; /*0x4218d6*/
    if ( v4 ) /*0x4218da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4218e5*/
      {
        m_8 = this->m_8; /*0x4218ec*/
        if ( a2 < m_8 ) /*0x4218f1*/
          m_8 = a2; /*0x4218f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4218f9*/
          ++i; /*0x4218fe*/
        if ( BYTE1(this->m_C) ) /*0x42190b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x421916*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42191e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x421927*/
      this->m_8 = a2; /*0x42192f*/
      BYTE1(this->m_C) = a3 == 0; /*0x421932*/
      return 1; /*0x421938*/
    }
    else
    {
      return 0; /*0x4218df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVAlphaShapeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x421942*/
    return 1; /*0x421948*/
  }
}



// ==== 0x00421950  _VectorClass_PAVAlphaShapeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AlphaShapeClass::Remove(_VectorClass_PAVAlphaShapeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x42195d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x421963*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42196b*/
  }
  BYTE1(this->m_C) = 0; /*0x42196e*/
  this->m_8 = 0; /*0x421971*/
}



// ==== 0x00421980  _VectorClass_PAVAlphaShapeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::GetSize(_VectorClass_PAVAlphaShapeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x421980*/
    return 0; /*0x421988*/
  m_8 = this->m_8; /*0x42198e*/
  result = 0; /*0x421991*/
  if ( m_8 <= 0 ) /*0x421995*/
    return -1; /*0x4219ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42199b*/
  {
    if ( ++result >= m_8 ) /*0x4219aa*/
      return -1; /*0x4219aa*/
  }
  return result; /*0x42198a*/
}



// ==== 0x004219C0  _VectorClass_PAVAlphaShapeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AlphaShapeClass::GetCapacity(_VectorClass_PAVAlphaShapeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4219c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4219d5*/
  else
    return 0; /*0x4219c7*/
}



// ==== 0x004219E0  VectorClass_ptr_AlphaShapeClass::SetCapacity  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::SetCapacity(VectorClass_ptr_AlphaShapeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x4219ec*/
  {
    this->IsInitialized = 0; /*0x4219f2*/
    if ( a3 ) /*0x4219f8*/
      v4 = a3; /*0x421a0e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x421a0a*/
    this->IsInitialized = 1; /*0x421a12*/
    if ( !v4 ) /*0x421a16*/
      return 0; /*0x421a8a*/
    if ( this->Items ) /*0x421a18*/
    {
      Capacity = this->Capacity; /*0x421a1f*/
      if ( a2 < (int)Capacity ) /*0x421a24*/
        Capacity = (void *)a2; /*0x421a26*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x421a2c*/
        ++i; /*0x421a31*/
      if ( this->IsAllocated ) /*0x421a3e*/
      {
        __3_YAXPAX_Z(this->Items); /*0x421a49*/
        this->Items = 0; /*0x421a51*/
      }
    }
    this->Items = v4; /*0x421a5a*/
    this->Capacity = (void *)a2; /*0x421a62*/
    this->IsAllocated = a3 == 0; /*0x421a65*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_AlphaShapeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x421a6e*/
  }
  v7 = this->Capacity; /*0x421a71*/
  if ( (int)v7 < (int)this->Count ) /*0x421a79*/
    this->Count = v7; /*0x421a7b*/
  return 1; /*0x421a7e*/
}



// ==== 0x00421A90  VectorClass_ptr_AlphaShapeClass::FindItemIndex  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::FindItemIndex(VectorClass_ptr_AlphaShapeClass *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x421a90*/
  result = 0; /*0x421a93*/
  if ( (int)Count <= 0 ) /*0x421a98*/
    return -1; /*0x421aaf*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x421a9e*/
  {
    if ( ++result >= (int)Count ) /*0x421aad*/
      return -1; /*0x421aad*/
  }
  return result; /*0x421ab2*/
}



// ==== 0x00421AC0  _VectorClass_PAVAlphaShapeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_AlphaShapeClass::QueryInterface(_VectorClass_PAVAlphaShapeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x421ac3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AlphaShapeClass *>::`vftable'; /*0x421ac6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x421ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x421ad8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x421ae0*/
  }
  BYTE1(this->m_C) = 0; /*0x421aeb*/
  this->m_8 = 0; /*0x421af1*/
  if ( (a2 & 1) != 0 ) /*0x421af8*/
    __3_YAXPAX_Z(this); /*0x421afb*/
  return this->__pad_0; /*0x421b05*/
}



// ==== 0x00421B60  ClipRectIntersection  this=IUnknown  sig=csp ====
_DWORD *__fastcall Rect_ClipIntersection(_DWORD *a1, int *a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // ecx
  int v10; // ebp
  int v11; // edx
  int v12; // ebp
  int v13; // ecx
  int v14; // esi
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+20h] [ebp-8h]
  int v17; // [esp+24h] [ebp-4h]

  result = a1; /*0x421b63*/
  v6 = *a3; /*0x421b6f*/
  v7 = a3[1]; /*0x421b71*/
  v16 = a3[2]; /*0x421b77*/
  v17 = a3[3]; /*0x421b7e*/
  v8 = a2[2]; /*0x421b82*/
  if ( v8 <= 0 ) /*0x421b87*/
    goto LABEL_23; /*0x421b87*/
  v15 = a2[3]; /*0x421b92*/
  if ( v15 <= 0 || a3[2] <= 0 || a3[3] <= 0 ) /*0x421bac*/
    goto LABEL_23; /*0x421bac*/
  v9 = *a2; /*0x421bb2*/
  if ( v6 < *a2 ) /*0x421bb6*/
  {
    v10 = v6 - v9 + v16; /*0x421bbe*/
    v6 = *a2; /*0x421bc0*/
    v16 = v10; /*0x421bc2*/
  }
  if ( v16 < 1 ) /*0x421bcb*/
    goto LABEL_23; /*0x421bcb*/
  v11 = a2[1]; /*0x421bd1*/
  if ( v7 < v11 ) /*0x421bda*/
  {
    v12 = v7 - v11 + v17; /*0x421be2*/
    v7 = v11; /*0x421be4*/
    v17 = v12; /*0x421be6*/
  }
  if ( v17 < 1 ) /*0x421bef*/
    goto LABEL_23; /*0x421bef*/
  v13 = v6 + v16 <= v9 + v8 ? v16 : v8 + v9 - v6;
  if ( v13 < 1 ) /*0x421c0b*/
    goto LABEL_23; /*0x421c0b*/
  v14 = v17; /*0x421c17*/
  if ( v17 + v7 > v15 + v11 ) /*0x421c20*/
    v14 = v15 + v11 - v7; /*0x421c24*/
  if ( v14 < 1 ) /*0x421c29*/
  {
LABEL_23:
    *result = 0; /*0x421c6e*/
    result[1] = 0; /*0x421c72*/
    result[2] = 0; /*0x421c75*/
    result[3] = 0; /*0x421c78*/
  }
  else
  {
    if ( a4 ) /*0x421c31*/
      *a4 += *a3 - v6; /*0x421c3c*/
    if ( a5 ) /*0x421c44*/
      *a5 += a3[1] - v7; /*0x421c4f*/
    *result = v6; /*0x421c53*/
    result[1] = v7; /*0x421c55*/
    result[2] = v13; /*0x421c59*/
    result[3] = v14; /*0x421c5c*/
  }
  return result; /*0x421c58*/
}



// ==== 0x00421C90  sub_421C90  this=-  sig=ida-proto ====
int sub_421C90()
{
  dword_89A140 = 0; /*0x421c92*/
  dword_89A144 = 0; /*0x421c97*/
  dword_89A148 = 0; /*0x421c9c*/
  dword_89A14C = 0; /*0x421ca1*/
  return 0; /*0x421ca6*/
}



// ==== 0x00421CB0  sub_421CB0  this=-  sig=ida-proto ====
void sub_421CB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x421cbc*/
  dbl_89A158 = Math::Sqrt(v0 + v0); /*0x421cce*/
}



// ==== 0x00421CE0  sub_421CE0  this=-  sig=ida-proto ====
void sub_421CE0()
{
  dbl_89A1B8 = dbl_89A158 / 60.0; /*0x421cec*/
}



// ==== 0x00421D00  sub_421D00  this=-  sig=ida-proto ====
void sub_421D00()
{
  dbl_89A1A0 = 1.0 / dbl_89A1B8; /*0x421d0c*/
}



// ==== 0x00421D20  sub_421D20  this=-  sig=ida-proto ====
void sub_421D20()
{
  dbl_89A198 = 0.0174532925199433 * 45.0; /*0x421d2c*/
}



// ==== 0x00421D40  sub_421D40  this=-  sig=ida-proto ====
void sub_421D40()
{
  dbl_89A168 = 0.0174532925199433 * 60.0; /*0x421d4c*/
}



// ==== 0x00421D60  sub_421D60  this=-  sig=ida-proto ====
void sub_421D60()
{
  dbl_89A138 = 0.0174532925199433 * 90.0; /*0x421d6c*/
}



// ==== 0x00421D80  sub_421D80  this=-  sig=ida-proto ====
__int64 sub_421D80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89A138 - dbl_89A168); /*0x421d92*/
  result = Math::RoundToInt(v0 * dbl_89A158 * 0.5); /*0x421da6*/
  Map_CellHeight = result; /*0x421dab*/
  return result; /*0x421db0*/
}



// ==== 0x00421DC0  sub_421DC0  this=-  sig=ida-proto ====
void sub_421DC0()
{
  dbl_89A170 = Math::ArcTan((double)Map_CellHeight * 0.00390625); /*0x421dd7*/
}



// ==== 0x00421DF0  sub_421DF0  this=-  sig=ida-proto ====
void sub_421DF0()
{
  dbl_89A188 = Math::ArcTan((double)(2 * Map_CellHeight) / dbl_89A158); /*0x421e12*/
}



// ==== 0x00421E20  sub_421E20  this=-  sig=ida-proto ====
__int64 sub_421E20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * Map_CellHeight) + 0.5); /*0x421e3b*/
  Map_MaxHeight = result; /*0x421e40*/
  return result; /*0x421e46*/
}



// ==== 0x00421E50  sub_421E50  this=-  sig=ida-proto ====
int sub_421E50()
{
  dword_89A150 = 0; /*0x421e52*/
  return 0; /*0x421e5e*/
}



// ==== 0x00421E60  sub_421E60  this=-  sig=ida-proto ====
int sub_421E60()
{
  Map_InvalidCoord_X = 0; /*0x421e62*/
  Map_InvalidCoord_Y = 0; /*0x421e67*/
  Map_InvalidCoord_Z = 0; /*0x421e6c*/
  return 0; /*0x421e71*/
}



// ==== 0x00421E80  sub_421E80  this=-  sig=ida-proto ====
int sub_421E80()
{
  dword_89A1B0 = 0; /*0x421e85*/
  dword_89A1A8 = 128; /*0x421e8f*/
  dword_89A1AC = 128; /*0x421e94*/
  return 128; /*0x421e99*/
}



// ==== 0x00421EA0  AnimClass::ctor  this=AnimClass  sig=csp ====
void **__thiscall AnimClass::ctor(AnimClass *this, void *a2, int *a3, void *a4, int a5, void *a6, void *a7, char a8)
{
  wchar_t *v9; // eax
  int v10; // eax
  int v11; // eax
  int AnimClass_field_0xC8; // eax
  int AnimClass_field_0xCC; // ecx
  int v14; // eax
  _DWORD *v15; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // edx
  char *ProductionTimeMult; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  double v28; // st7
  int v29; // eax
  double v30; // st7
  double v31; // st7
  float v32; // eax
  float v33; // eax
  float v34; // eax
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // eax
  int *v38; // eax
  int v39; // edx
  _DWORD *v40; // edi
  _DWORD *v41; // eax
  int v42; // ecx
  int v43; // edx
  int v44; // eax
  int *v45; // eax
  int v46; // ebx
  int v47; // eax
  int v48; // edi
  int v49; // eax
  double v50; // st7
  int v51; // eax
  double v52; // st6
  char v53; // cl
  char v54; // al
  int v55; // [esp+Ch] [ebp-54h]
  float v56; // [esp+Ch] [ebp-54h]
  int v57; // [esp+Ch] [ebp-54h]
  int v58; // [esp+10h] [ebp-50h]
  _DWORD *Coords; // [esp+10h] [ebp-50h]
  int v60; // [esp+10h] [ebp-50h]
  float v61; // [esp+10h] [ebp-50h]
  int v62; // [esp+14h] [ebp-4Ch]
  float v63; // [esp+18h] [ebp-48h] BYREF
  float v64; // [esp+1Ch] [ebp-44h]
  float v65; // [esp+20h] [ebp-40h]
  int vfptr; // [esp+24h] [ebp-3Ch] BYREF
  int v67; // [esp+28h] [ebp-38h]
  int v68; // [esp+2Ch] [ebp-34h]
  float v69; // [esp+30h] [ebp-30h] BYREF
  float v70; // [esp+34h] [ebp-2Ch]
  float v71; // [esp+38h] [ebp-28h]
  CoordStruct v72; // [esp+3Ch] [ebp-24h] BYREF
  int v73; // [esp+40h] [ebp-20h]
  CoordStruct out; // [esp+48h] [ebp-18h] BYREF
  CoordStruct v75; // [esp+54h] [ebp-Ch] BYREF

  ObjectClass::ctor((ObjectClass *)this); /*0x421eae*/
  this->AnimClass_field_0xAC = 0; /*0x421eb8*/
  this->__pad_B0[0] = 0; /*0x421ebe*/
  v9 = dword_A8ED84; /*0x421ec4*/
  this->AnimClass_field_0xBC = 0; /*0x421ec9*/
  this->AnimClass_field_0xB4 = (int)v9; /*0x421ecf*/
  this->AnimClass_field_0xC0 = 0; /*0x421ed5*/
  *(_DWORD *)this->__pad_C4 = 1; /*0x421edb*/
  this->AnimClass_field_0xC8 = (int)a2; /*0x421ee5*/
  this->AnimClass_field_0xCC = 0; /*0x421eee*/
  this->AnimClass_field_0xD0 = -1; /*0x421ef4*/
  this->AnimClass_field_0xD4 = 0; /*0x421efa*/
  *(_DWORD *)this->__pad_D8 = -1; /*0x421f00*/
  this->AnimClass_field_0xFC = 1000; /*0x421f06*/
  this->AnimClass_field_0x100 = 0; /*0x421f10*/
  this->AnimClass_field_0x104 = 0; /*0x421f16*/
  this->AnimClass_field_0x108 = Map_InvalidCoord_X; /*0x421f32*/
  *(_DWORD *)this->__pad_10C = Map_InvalidCoord_Y; /*0x421f3c*/
  v10 = Map_InvalidCoord_Z; /*0x421f3f*/
  this->__pad_118[0] = 0; /*0x421f44*/
  this->__pad_118[1] = 0; /*0x421f4a*/
  *(_DWORD *)&this->__pad_10C[4] = v10; /*0x421f50*/
  this->AnimClass_field_0x114 = 0; /*0x421f53*/
  this->__pad_118[2] = 0; /*0x421f59*/
  this->__pad_118[3] = 0; /*0x421f5f*/
  this->AnimClass_field_0x11C = 0; /*0x421f65*/
  this->__pad_120[0] = 0; /*0x421f6b*/
  *(_DWORD *)&this->__pad_120[8] = 0; /*0x421f71*/
  *(_DWORD *)&this->__pad_120[16] = 0; /*0x421f73*/
  *(_DWORD *)&this->__pad_120[24] = 0; /*0x421f76*/
  *(_DWORD *)&this->__pad_120[12] = 0; /*0x421f7d*/
  *(_DWORD *)&this->__pad_120[20] = 0; /*0x421f80*/
  *(_DWORD *)&this->__pad_120[28] = 0; /*0x421f83*/
  Int4::Set((Int4 *)&this->__pad_120[56], 0, 0, 0, 1065353216); /*0x421f86*/
  Int4::Set((Int4 *)&this->__pad_120[72], 0, 0, 0, 1065353216); /*0x421f96*/
  this->AnimClass_field_0x188 = 0; /*0x421fa4*/
  this->__pad_178[0] = 0; /*0x421faa*/
  this->__pad_178[1] = 0; /*0x421fb0*/
  this->AnimClass_field_0x17C = 0; /*0x421fb6*/
  this->AnimClass_field_0x180 = 0; /*0x421fbc*/
  this->AnimClass_field_0x184 = (int)a4; /*0x421fc2*/
  *(_DWORD *)this->__pad_18C = 1072693248; /*0x421fc8*/
  this->AnimClass_field_0x190 = (int)a6; /*0x421fd2*/
  this->__pad_194[0] = 0; /*0x421fd8*/
  this->__pad_194[1] = 1; /*0x421fde*/
  this->__pad_194[2] = 0; /*0x421fe5*/
  this->__pad_194[3] = 0; /*0x421feb*/
  this->__pad_194[4] = 0; /*0x421ff1*/
  this->__pad_194[5] = 0; /*0x421ff7*/
  this->__pad_194[6] = 0; /*0x421ffd*/
  this->__pad_194[7] = 0; /*0x422003*/
  this->__pad_194[8] = 1; /*0x422009*/
  this->__pad_194[9] = 0; /*0x422010*/
  this->__pad_194[10] = 0; /*0x422016*/
  this->AnimClass_field_0x0 = (int)&AnimClass::`vftable'; /*0x42201c*/
  this->AnimClass_field_0x4 = (int)&AnimClass::`vftable'; /*0x422022*/
  this->AnimClass_field_0x8 = (int)&AnimClass::`vftable'; /*0x422028*/
  *(_DWORD *)this->__pad_C = &off_7E3328; /*0x422030*/
  this->__pad_D8[4] = 0; /*0x422037*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->AnimClass_field_0x4); /*0x42203d*/
  AudioController::Init((AudioController *)&this->AnimClass_field_0x1A0); /*0x422048*/
  AudioController::Init((AudioController *)&this->AnimClass_field_0x1B4); /*0x422053*/
  if ( dword_A8E9B8 < dword_A8E9B0 /*0x42208b*/
    || (byte_A8E9B5 || !dword_A8E9B0)
    && dword_A8E9BC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E9A8 + 8))(
         &dword_A8E9A8,
         dword_A8E9BC + dword_A8E9B0,
         0) )
  {
    v11 = dword_A8E9B8++; /*0x422098*/
    *((_DWORD *)dword_A8E9AC + v11) = this; /*0x4220a7*/
  }
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x4220aa*/
  this->__pad_7C[20] = 1; /*0x4220b0*/
  if ( AnimClass_field_0xC8 ) /*0x4220b9*/
  {
    this->AnimClass_field_0x104 = *(_DWORD *)(AnimClass_field_0xC8 + 832); /*0x422137*/
    v17 = (_DWORD *)this->AnimClass_field_0xC8; /*0x42213d*/
    if ( v17[176] == -1 ) /*0x42214a*/
    {
      *(_DWORD *)(this->AnimClass_field_0xC8 + 704) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v17 + 156))(v17) /*0x42215e*/
                                                                 + 6);
      v18 = this->AnimClass_field_0xC8; /*0x422164*/
      if ( *(_BYTE *)(v18 + 882) ) /*0x42216a*/
        *(int *)(v18 + 704) /= 2; /*0x42217d*/
    }
    v19 = this->AnimClass_field_0xC8; /*0x422183*/
    if ( *(_DWORD *)(v19 + 700) == -1 ) /*0x422190*/
      *(_DWORD *)(v19 + 700) = *(_DWORD *)(v19 + 704); /*0x422198*/
    if ( a7 ) /*0x4221a3*/
      this->AnimClass_field_0x100 = (int)a7; /*0x4221a5*/
    else
      this->AnimClass_field_0x100 = *(_DWORD *)(this->AnimClass_field_0xC8 + 840); /*0x4221b9*/
    v20 = (_DWORD *)this->AnimClass_field_0xC8; /*0x4221bf*/
    v21 = v20[185]; /*0x4221c5*/
    ProductionTimeMult = (char *)v20[172]; /*0x4221cb*/
    if ( v21 || v20[186] ) /*0x4221d5*/
    {
      v23 = v20[186]; /*0x4221dd*/
      if ( v21 <= v23 ) /*0x4221e5*/
        ProductionTimeMult = (char *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v21, v23); /*0x4221f5*/
    }
    if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 866) ) /*0x422200*/
      ProductionTimeMult = Rules::GetProductionTimeMult((Rules *)&dword_A8EB60, (int)ProductionTimeMult); /*0x42220e*/
    this->AnimClass_field_0xB4 = (int)dword_A8ED84; /*0x42221f*/
    this->AnimClass_field_0xB8 = v73; /*0x422241*/
    this->AnimClass_field_0xBC = (int)ProductionTimeMult; /*0x422244*/
    this->AnimClass_field_0xC0 = (int)ProductionTimeMult; /*0x422247*/
    v24 = this->AnimClass_field_0xC8; /*0x42224d*/
    this->AnimClass_field_0xAC = 0; /*0x422253*/
    v25 = *(_DWORD *)(v24 + 868); /*0x422259*/
    if ( v25 == 3 || v25 == 4 ) /*0x422267*/
      ObjectClass::SetAnim((ObjectClass *)this, dword_8871E0->GDIWallDefense[1]); /*0x422281*/
    else
      ObjectClass::SetZ((IUnknown *)this); /*0x42226c*/
    if ( a8 ) /*0x422289*/
      this->__pad_120[0] = 1; /*0x42228b*/
    v26 = this->AnimClass_field_0xC8; /*0x422292*/
    if ( *(_BYTE *)(v26 + 881) || this->__pad_120[0] ) /*0x4222a0*/
    {
      this->AnimClass_field_0xAC = *(_DWORD *)(v26 + 700) - 1; /*0x4222af*/
      *(_DWORD *)this->__pad_C4 = -*(_DWORD *)this->__pad_C4; /*0x4222bd*/
    }
    v27 = this->AnimClass_field_0xC8; /*0x4222c3*/
    if ( *(_BYTE *)(v27 + 858) || *(_BYTE *)(v27 + 854) ) /*0x4222d1*/
    {
      this->__pad_194[0] = 1; /*0x4222ea*/
      if ( *(_BYTE *)(v27 + 854) ) /*0x4222f1*/
      {
        v55 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x422310*/
        v58 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x422324*/
        v28 = *(double *)(this->AnimClass_field_0xC8 + 792); /*0x42232e*/
        LOWORD(v29) = Math::RoundToInt(v28); /*0x42233c*/
        v56 = (double)((int)abs32(v55) % v29) - *(double *)(this->AnimClass_field_0xC8 + 808); /*0x422375*/
        v63 = (double)((int)abs32(v58) % v29) - *(double *)(this->AnimClass_field_0xC8 + 808); /*0x422387*/
        v64 = v56; /*0x42238b*/
        v65 = v28; /*0x42238f*/
        v30 = -v56; /*0x422397*/
        if ( v63 < v30 ) /*0x4223a4*/
        {
          v63 = -v63; /*0x4223ac*/
          v64 = v30; /*0x4223b0*/
        }
        v31 = (double)(int)(70 - abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 20)); /*0x4223e6*/
        LOWORD(v32) = Math::RoundToInt(v31); /*0x4223f4*/
        v69 = v32; /*0x4223fc*/
        LOWORD(v33) = Math::RoundToInt(v31); /*0x42240b*/
        v70 = v33; /*0x422413*/
        LOWORD(v34) = Math::RoundToInt((double)a3[2] - v31 * v65); /*0x422422*/
        v71 = v34; /*0x422427*/
        ObjectClass::Deploy((ObjectClass *)this); /*0x422433*/
        if ( this->AnimClass_field_0xCC ) /*0x422438*/
        {
          Coords = (_DWORD *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422452*/
          v35 = (_DWORD *)(*(int (__thiscall **)(int, CoordStruct *))(*(_DWORD *)this->AnimClass_field_0xCC + 72))( /*0x42245d*/
                            this->AnimClass_field_0xCC,
                            &v75);
          v72.vfptr = (void *)(*v35 + *Coords); /*0x422468*/
          v36 = Coords[1] + v35[1]; /*0x422472*/
          v37 = Coords[2] + v35[2]; /*0x422475*/
          vfptr = (int)v72.vfptr; /*0x42247c*/
          v67 = v36; /*0x422480*/
        }
        else
        {
          v38 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x42248d*/
          vfptr = *v38; /*0x422494*/
          v67 = v38[1]; /*0x42249b*/
          v37 = v38[2]; /*0x42249f*/
        }
        v39 = this->AnimClass_field_0xC8; /*0x4224a2*/
        v68 = v37; /*0x4224ae*/
        AnimClass::InitRotation( /*0x4224d4*/
          (AnimClass *)&this->__pad_120[8],
          &vfptr,
          *(_DWORD *)(v39 + 784),
          *(_DWORD *)(v39 + 788),
          1610612736,
          1073112678,
          0,
          0,
          &v63,
          0.0);
      }
      else
      {
        ObjectClass::Deploy((ObjectClass *)this); /*0x4224e0*/
        if ( this->AnimClass_field_0xCC ) /*0x4224e5*/
        {
          v40 = (_DWORD *)ObjectClass::GetCoords((ObjectClass *)this); /*0x4224ff*/
          v41 = (_DWORD *)(*(int (__thiscall **)(int, CoordStruct *))(*(_DWORD *)this->AnimClass_field_0xCC + 72))( /*0x422508*/
                            this->AnimClass_field_0xCC,
                            &out);
          v42 = *v40 + *v41; /*0x422512*/
          v43 = v40[1] + v41[1]; /*0x42251a*/
          v44 = v40[2] + v41[2]; /*0x42251f*/
        }
        else
        {
          v45 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x42252a*/
          v42 = *v45; /*0x42252f*/
          v43 = v45[1]; /*0x422531*/
          v44 = v45[2]; /*0x422534*/
        }
        v67 = v43; /*0x422537*/
        vfptr = v42; /*0x422544*/
        v68 = v44 + 10; /*0x42254e*/
        v46 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x422557*/
        v60 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x42256f*/
        v47 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x422579*/
        v48 = this->AnimClass_field_0xC8; /*0x42257e*/
        v57 = v47; /*0x422584*/
        LOWORD(v49) = Math::RoundToInt(*(double *)(v48 + 808) + *(double *)(v48 + 808)); /*0x422590*/
        v62 = v49; /*0x42259e*/
        v50 = (double)((int)abs32(v60) % v49) - *(double *)(v48 + 808); /*0x4225b2*/
        LOWORD(v51) = Math::RoundToInt(v50); /*0x4225d0*/
        v61 = (double)((int)abs32(v46) % v51) + *(double *)(v48 + 792); /*0x4225f8*/
        v52 = (double)((int)abs32(v57) % v62) - *(double *)(v48 + 808); /*0x422621*/
        v71 = v61; /*0x422627*/
        v69 = v52; /*0x42262b*/
        v70 = v50; /*0x42262f*/
        AnimClass::InitRotation( /*0x422648*/
          (AnimClass *)&this->__pad_120[8],
          &vfptr,
          *(_DWORD *)(v48 + 784),
          *(_DWORD *)(v48 + 788),
          1610612736,
          1073112678,
          0,
          0,
          &v69,
          0.0);
      }
    }
    else
    {
      ObjectClass::Deploy((ObjectClass *)this); /*0x4222e0*/
    }
    if ( this->AnimClass_field_0xC8 == *(_DWORD *)&dword_8871E0->__pad_13BC[192] ) /*0x42265e*/
    {
      MapClass::RevealArea1( /*0x422689*/
        (MapClass *)&dword_87F7E8,
        a3,
        *(_DWORD *)&dword_8871E0->__pad_13BC[256] / 256,
        dword_A83D4C,
        0,
        0,
        0,
        1,
        0);
      MapClass::RevealArea1( /*0x4226ba*/
        (MapClass *)&dword_87F7E8,
        a3,
        *(_DWORD *)&dword_8871E0->__pad_13BC[256] / 256,
        dword_A83D4C,
        0,
        0,
        0,
        1,
        1);
    }
    v53 = a5; /*0x4226bf*/
    if ( a5 <= 1 ) /*0x4226c5*/
      v53 = 1; /*0x4226c7*/
    v54 = v53 * *(_BYTE *)(this->AnimClass_field_0xC8 + 708); /*0x4226d8*/
    this->__pad_194[1] = v54; /*0x4226dc*/
    if ( (unsigned __int8)v54 <= 1u ) /*0x4226e2*/
      v54 = 1; /*0x4226eb*/
    this->__pad_194[1] = v54; /*0x4226f0*/
    if ( !this->AnimClass_field_0x184 ) /*0x4226f6*/
      ProductionCompletionCallback((TechnoClass *)this); /*0x422702*/
    return (void **)this; /*0x422707*/
  }
  else
  {
    AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x4220bb*/
    if ( AnimClass_field_0xCC ) /*0x4220c3*/
      (*(void (__thiscall **)(int, AnimClass *))(*(_DWORD *)AnimClass_field_0xCC + 96))(AnimClass_field_0xCC, this); /*0x4220c8*/
    BuildingClass::AimTurret((BuildingClass *)this, 0); /*0x4220ce*/
    Mixer::ReleaseChannel((Mixer *)&this->AnimClass_field_0x1A0); /*0x4220d9*/
    if ( !this->__pad_194[4] ) /*0x4220de*/
    {
      v14 = this->AnimClass_field_0xC8; /*0x4220e6*/
      if ( v14 ) /*0x4220ee*/
      {
        if ( *(_DWORD *)(v14 + 764) != -1 ) /*0x4220f7*/
        {
          v15 = (_DWORD *)(*(int (__thiscall **)(AnimClass *, CoordStruct *))(this->AnimClass_field_0x0 + 72))( /*0x422109*/
                            this,
                            &v72);
          StartAudioControllerAt( /*0x42211a*/
            *(_DWORD *)(this->AnimClass_field_0xC8 + 764),
            v15,
            (int **)&this->AnimClass_field_0x1B4);
        }
      }
    }
    ObjectClass::Destroy((ObjectClass *)this); /*0x422121*/
    return (void **)this; /*0x422126*/
  }
}



// ==== 0x00422720  AnimClass::SimpleCtor  this=AnimClass  sig=csp ====
int __thiscall AnimClass::SimpleCtor(AnimClass *this)
{
  IUnknown *v2; // eax
  int v3; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x422724*/
  this->AnimClass_field_0xAC = 0; /*0x422730*/
  this->__pad_B0[0] = 0; /*0x422736*/
  v2 = *(IUnknown **)&stru_A8EB00.?[416]; /*0x42273c*/
  this->AnimClass_field_0xBC = 0; /*0x422741*/
  this->AnimClass_field_0xB4 = v2; /*0x422747*/
  this->AnimClass_field_0xC0 = 0; /*0x422750*/
  *(_DWORD *)this->__pad_C4 = 1; /*0x422756*/
  this->AnimClass_field_0xC8 = 0; /*0x422761*/
  this->AnimClass_field_0xCC = 0; /*0x422767*/
  this->AnimClass_field_0xD0[0] = -1; /*0x42276d*/
  this->AnimClass_field_0xD4 = 0; /*0x422773*/
  *(_DWORD *)this->__pad_D8 = -1; /*0x422779*/
  this->AnimClass_field_0xFC[0] = 1000; /*0x42277f*/
  this->AnimClass_field_0x100 = 0; /*0x422789*/
  this->AnimClass_field_0x104 = 0; /*0x42278f*/
  this->__pad_118[0] = 0; /*0x422795*/
  this->__pad_118[1] = 0; /*0x42279b*/
  this->__pad_118[2] = 0; /*0x4227a1*/
  this->__pad_118[3] = 0; /*0x4227a7*/
  this->AnimClass_field_0x11C = 0; /*0x4227ad*/
  this->__pad_120[0] = 0; /*0x4227b3*/
  *(_DWORD *)&this->__pad_120[8] = 0; /*0x4227ba*/
  *(_DWORD *)&this->__pad_120[16] = 0; /*0x4227c0*/
  *(_DWORD *)&this->__pad_120[24] = 0; /*0x4227c6*/
  *(_DWORD *)&this->__pad_120[12] = 0; /*0x4227d3*/
  *(_DWORD *)&this->__pad_120[20] = 0; /*0x4227d9*/
  *(_DWORD *)&this->__pad_120[28] = 0; /*0x4227df*/
  Int4::Set((Int4 *)&this->__pad_120[56], 0, 0, 0, 1065353216); /*0x4227e5*/
  Int4::Set((Int4 *)&this->__pad_120[72], 0, 0, 0, 1065353216); /*0x4227f8*/
  this->AnimClass_field_0x188 = 0; /*0x4227fd*/
  this->__pad_178[1] = 0; /*0x422803*/
  this->AnimClass_field_0x184 = 0; /*0x422809*/
  *(_DWORD *)this->__pad_18C = 0; /*0x42280f*/
  this->__pad_194[0] = 0; /*0x422815*/
  this->__pad_194[1] = 1; /*0x42281b*/
  this->__pad_194[2] = 0; /*0x422822*/
  this->__pad_194[3] = 0; /*0x422828*/
  this->__pad_194[7] = 0; /*0x42282e*/
  this->__pad_194[8] = 1; /*0x422834*/
  this->__pad_194[9] = 0; /*0x42283b*/
  this->__pad_194[10] = 0; /*0x422841*/
  this->AnimClass_field_0x0 = &AnimClass::`vftable'; /*0x422847*/
  this->AnimClass_field_0x4 = &AnimClass::`vftable'; /*0x42284d*/
  this->AnimClass_field_0x8 = &AnimClass::`vftable'; /*0x422854*/
  *(_DWORD *)this->__pad_C = &off_7E3328; /*0x42285b*/
  if ( dword_A8E9B8 < dword_A8E9B0 /*0x422896*/
    || (byte_A8E9B5 || !dword_A8E9B0)
    && dword_A8E9BC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E9A8 + 8))(
         &dword_A8E9A8,
         dword_A8E9B0 + dword_A8E9BC,
         0) )
  {
    v3 = dword_A8E9B8++; /*0x4228a3*/
    *((_DWORD *)dword_A8E9AC + v3) = this; /*0x4228b2*/
  }
  AudioController::Init((AudioController *)this->AnimClass_field_0x1A0); /*0x4228bb*/
  AudioController::Init((AudioController *)&this->AnimClass_field_0x1B4); /*0x4228c6*/
  this->__pad_7C[20] = 1; /*0x4228cb*/
  return (int)this; /*0x4228d4*/
}



// ==== 0x004228E0  AnimClass::Destruct  this=AnimClass  sig=csp ====
int __thiscall AnimClass::Destruct(AnimClass *this)
{
  _BYTE *AnimClass_field_0xCC; // ebp
  int v3; // ecx
  char *v4; // edx
  Coord *AnimClass_field_0xC8; // eax
  CellClass *v6; // eax
  int v7; // eax
  AnimClass *v8; // ecx
  int v9; // eax
  int v10; // eax
  AnimClass *v12; // [esp+10h] [ebp-10h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  this->AnimClass_field_0x0 = &AnimClass::`vftable'; /*0x4228eb*/
  this->AnimClass_field_0x4 = &AnimClass::`vftable'; /*0x4228f1*/
  this->AnimClass_field_0x8 = &AnimClass::`vftable'; /*0x4228f8*/
  *(_DWORD *)this->__pad_C = &off_7E3328; /*0x4228ff*/
  AbstractClass::AnnounceExpiredPointer(&this->AnimClass_field_0x0, 1); /*0x422906*/
  if ( byte_A8E9A0 ) /*0x422914*/
  {
    AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x42291a*/
    if ( AnimClass_field_0xCC ) /*0x422922*/
    {
      v3 = 0; /*0x42292a*/
      if ( dword_A8E9B8 > 0 ) /*0x42292e*/
      {
        v4 = (char *)dword_A8E9AC; /*0x422930*/
        do /*0x42294a*/
        {
          if ( *(AnimClass **)v4 != this && *(_BYTE **)(*(_DWORD *)v4 + 204) == AnimClass_field_0xCC ) /*0x422942*/
            break; /*0x422942*/
          ++v3; /*0x422944*/
          v4 += 4; /*0x422945*/
        }
        while ( v3 < dword_A8E9B8 ); /*0x42294a*/
      }
      if ( v3 == dword_A8E9B8 ) /*0x42294e*/
      {
        (*(void (__thiscall **)(void *))(*(_DWORD *)AnimClass_field_0xCC + 380))(this->AnimClass_field_0xCC); /*0x422955*/
        AnimClass_field_0xCC[132] = 0; /*0x42295b*/
      }
      this->AnimClass_field_0xCC = 0; /*0x422961*/
    }
    AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x422967*/
    if ( AnimClass_field_0xC8 && AnimClass_field_0xC8[2].__pad_C[201] ) /*0x422971*/
    {
      v13[0] = this->AnimClass_field_0x9C; /*0x422985*/
      v13[1] = *(_DWORD *)this->__pad_A0; /*0x422991*/
      v13[2] = this->AnimClass_field_0xA4; /*0x422998*/
      v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x4229a1*/
      v6->flags[0] &= ~0x20000u; /*0x4229b7*/
    }
    if ( (unsigned __int8)ObjectClass::Undeploy((ObjectClass *)this) ) /*0x4229bb*/
      RemoveTarget((int)this); /*0x4229ca*/
  }
  v12 = this; /*0x4229df*/
  v7 = (*(int (__thiscall **)(int *, AnimClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x4229e3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v12);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x4229f3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x4229f8*/
    for ( ; /*0x4229fe*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x422a06*/
    }
  }
  v8 = (AnimClass *)this->AnimClass_field_0xC8; /*0x422a18*/
  if ( v8 ) /*0x422a20*/
    AnimClass::FreeRenderBuffer(v8); /*0x422a22*/
  Mixer::ReleaseChannel((Mixer *)this->AnimClass_field_0x1A0); /*0x422a2f*/
  Mixer::ReleaseChannel((Mixer *)&this->AnimClass_field_0x1B4); /*0x422a3c*/
  AudioFileClass::Release((AudioFileClass *)this->AnimClass_field_0x1A0); /*0x422a43*/
  AudioFileClass::Release((AudioFileClass *)&this->AnimClass_field_0x1B4); /*0x422a4a*/
  this->AnimClass_field_0xCC = 0; /*0x422a52*/
  this->AnimClass_field_0xC8 = 0; /*0x422a59*/
  if ( AbstractClass::GetVtable3((AbstractClass *)&this->AnimClass_field_0x4) == -2 ) /*0x422a67*/
  {
    v12 = this; /*0x422a79*/
    v9 = (*((int (__thiscall **)(void **, AnimClass **))stru_A83D50.SuperClass_field_0xB0 + 4))( /*0x422a7d*/
           &stru_A83D50.SuperClass_field_0xB0,
           &v12);
    if ( v9 != -1 && v9 < *(int *)&stru_A83D50.__pad_B4[12] ) /*0x422a91*/
    {
      --*(_DWORD *)&stru_A83D50.__pad_B4[12]; /*0x422a96*/
      for ( ; /*0x422a9c*/
            v9 < *(int *)&stru_A83D50.__pad_B4[12];
            *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_B4 + 4 * v9 - 4) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_B4
                                                                                  + 4 * v9) )
      {
        ++v9; /*0x422aa4*/
      }
    }
  }
  else
  {
    v12 = this; /*0x422ad5*/
    v10 = (*(int (__thiscall **)(_DWORD *, AnimClass **))(dword_A8E9A8 + 16))(&dword_A8E9A8, &v12); /*0x422ad9*/
    if ( v10 != -1 && v10 < dword_A8E9B8 && v10 < --dword_A8E9B8 ) /*0x422af4*/
    {
      do /*0x422b0c*/
      {
        ++v10; /*0x422afc*/
        *((_DWORD *)dword_A8E9AC + v10 - 1) = *((_DWORD *)dword_A8E9AC + v10); /*0x422b00*/
      }
      while ( v10 < dword_A8E9B8 ); /*0x422b0c*/
    }
  }
  return ObjectClass::Dtor((ObjectClass *)this); /*0x422abd*/
}



// ==== 0x00422B20  GlobalArray::FindString  this=GlobalArray  sig=csp ====
int __thiscall GlobalArray::FindString(GlobalArray *this)
{
  int v2; // esi

  if ( !this ) /*0x422b26*/
    return -1; /*0x422b26*/
  if ( !_strcmpi((char *)this, g_Str__none_) ) /*0x422b2e*/
    return -1; /*0x422b2e*/
  v2 = 0; /*0x422b3f*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x422b43*/
    return -1; /*0x422b68*/
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v2) + 36), (char *)this) ) /*0x422b5c*/
  {
    if ( ++v2 >= FootClass_Array.?[0] ) /*0x422b66*/
      return -1; /*0x422b66*/
  }
  return v2; /*0x422b68*/
}



// ==== 0x00422B80  TerrainClass::ClearAnimationLinkFlags  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::ClearAnimationLinkFlags(TerrainClass *this)
{
  int i; // edx
  int v2; // eax

  if ( this ) /*0x422b82*/
  {
    for ( i = 0; i < dword_A8E9B8; ++i ) /*0x422b8d*/
    {
      v2 = *((_DWORD *)dword_A8E9AC + i); /*0x422b94*/
      if ( *(TerrainClass **)(v2 + 204) == this ) /*0x422b9d*/
        *(_BYTE *)(v2 + 405) = 0; /*0x422b9f*/
    }
  }
}



// ==== 0x00422BC0  AnimClass::SetAnimSpeed  this=AnimClass  sig=csp ====
int __thiscall AnimClass::SetAnimSpeed(AnimClass *this)
{
  return this->AnimClass_field_0x104 + ObjectClass::GetBoundingSize((ObjectClass *)this); /*0x422bce*/
}



// ==== 0x00422BE0  AnimClass::UpdateZAdjust  this=AnimClass  sig=csp ====
int *__thiscall AnimClass::UpdateZAdjust(AnimClass *this, int *a2)
{
  _DWORD *Coords; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int v8; // edx
  int v9; // edi
  int *v11; // edx
  CoordStruct v12; // [esp+14h] [ebp-Ch] BYREF

  if ( this->AnimClass_field_0xCC ) /*0x422be7*/
  {
    Coords = (_DWORD *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422c01*/
    v4 = (_DWORD *)(*(int (__thiscall **)(int, CoordStruct *))(*(_DWORD *)this->AnimClass_field_0xCC + 72))( /*0x422c0a*/
                     this->AnimClass_field_0xCC,
                     &v12);
    v5 = *Coords + *v4; /*0x422c14*/
    v6 = Coords[1]; /*0x422c16*/
    v7 = Coords[2]; /*0x422c19*/
    v8 = v4[1] + v6; /*0x422c1c*/
    v9 = v4[2]; /*0x422c1e*/
    *a2 = v5; /*0x422c29*/
    a2[1] = v8; /*0x422c2b*/
    a2[2] = v9 + v7; /*0x422c2e*/
    return a2; /*0x422c21*/
  }
  else
  {
    v11 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422c45*/
    *a2 = *v11; /*0x422c50*/
    a2[1] = v11[1]; /*0x422c55*/
    a2[2] = v11[2]; /*0x422c5c*/
    return a2; /*0x422c47*/
  }
}



// ==== 0x00422C70  AnimClass::CheckLayerFlags  this=AnimClass  sig=csp ====
char __thiscall AnimClass::CheckLayerFlags(AnimClass *this, int a2, int a3, int a4)
{
  if ( this->AnimClass_field_0x184 ) /*0x422c70*/
    return 0; /*0x422c7a*/
  else
    return ObjectClass::CalcDrawRect((ObjectClass *)this); /*0x422c8e*/
}



// ==== 0x00422CA0  AnimClass::Render  this=AnimClass  sig=csp ====
void __thiscall AnimClass::Render(AnimClass *this, int *a2, int *a3)
{
  IUnknown *AnimClass_field_0xB4; // edi
  CellStruct *AnimClass_field_0xC0; // ebx
  IUnknown *AnimClass_field_0xBC; // eax
  int v7; // edi
  int v8; // ecx
  __int16 v9; // bx
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  unsigned __int8 v15; // di
  int v16; // eax
  __int16 v17; // ax
  int v18; // edi
  int v19; // ebx
  Coord *AnimClass_field_0xC8; // eax
  Coord *v21; // eax
  int AnimClass_field_0x190; // ebx
  double v23; // st7
  double v24; // st6
  Coord *v25; // eax
  _DWORD *v26; // eax
  int v27; // ecx
  int v28; // eax
  char v29; // al
  _DWORD *v30; // eax
  int *v31; // edi
  Coord *v32; // ecx
  _DWORD *v33; // eax
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int (__thiscall **AnimClass_field_0x0)(AnimClass *); // eax
  int v38; // eax
  int v39; // eax
  char v40; // al
  float v41; // ebp
  _DWORD *v42; // eax
  CellClass *v43; // eax
  _DWORD *v44; // eax
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // edx
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  _DWORD *v60; // eax
  CellClass *v61; // eax
  Coord *v62; // eax
  _DWORD *FoundationSize; // eax
  int v64; // ecx
  int v65; // edi
  int (__thiscall **v66)(AnimClass *); // edx
  int v67; // ebp
  int v68; // eax
  int v69; // edi
  int v70; // eax
  int v71; // edi
  int (__thiscall **v72)(AnimClass *); // edx
  int v73; // eax
  int v74; // edx
  int v75; // eax
  int v76; // edx
  int v77; // eax
  int v78; // ebp
  int v79; // eax
  int v80; // [esp-20h] [ebp-130h]
  int v81; // [esp-20h] [ebp-130h]
  int v82; // [esp-18h] [ebp-128h]
  int v83; // [esp-18h] [ebp-128h]
  unsigned __int8 v84; // [esp+13h] [ebp-FDh]
  unsigned __int8 v85; // [esp+13h] [ebp-FDh]
  char v86; // [esp+13h] [ebp-FDh]
  int v87; // [esp+14h] [ebp-FCh]
  int v88; // [esp+14h] [ebp-FCh]
  int v89; // [esp+14h] [ebp-FCh]
  IUnknown *AnimClass_field_0xAC; // [esp+14h] [ebp-FCh]
  float v91; // [esp+14h] [ebp-FCh]
  float v92; // [esp+14h] [ebp-FCh]
  _DWORD *v93; // [esp+14h] [ebp-FCh]
  int v94; // [esp+14h] [ebp-FCh]
  int v95; // [esp+14h] [ebp-FCh]
  unsigned __int8 v96; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v97; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v98; // [esp+1Bh] [ebp-F5h]
  unsigned __int8 v99; // [esp+1Bh] [ebp-F5h]
  unsigned __int8 v100[4]; // [esp+1Ch] [ebp-F4h] BYREF
  __int16 v101[2]; // [esp+20h] [ebp-F0h] BYREF
  int v102; // [esp+24h] [ebp-ECh]
  int v103; // [esp+28h] [ebp-E8h]
  unsigned int v104; // [esp+2Ch] [ebp-E4h]
  int v105[2]; // [esp+30h] [ebp-E0h] BYREF
  int v106; // [esp+38h] [ebp-D8h]
  int v107; // [esp+3Ch] [ebp-D4h]
  int v108; // [esp+40h] [ebp-D0h] BYREF
  int v109; // [esp+44h] [ebp-CCh]
  ColorStruct v110; // [esp+50h] [ebp-C0h] BYREF
  ColorStruct v111; // [esp+B0h] [ebp-60h] BYREF

  if ( byte_8A0DF0 /*0x422ccb*/
    && g_ZBufferDescriptor
    && (unsigned __int8)ObjectClass::StepCleanup((ObjectClass *)this, &g_INI_Key_Civilian.__pad_16D[31]) )
  {
    AnimClass_field_0xB4 = this->AnimClass_field_0xB4; /*0x422cd8*/
    AnimClass_field_0xC0 = this->AnimClass_field_0xC0; /*0x422ce4*/
    AnimClass_field_0xBC = this->AnimClass_field_0xBC; /*0x422cea*/
    if ( AnimClass_field_0xB4 != (IUnknown *)-1 ) /*0x422cf3*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)AnimClass_field_0xB4 >= (int)AnimClass_field_0xBC ) /*0x422cff*/
        AnimClass_field_0xBC = 0; /*0x422d05*/
      else
        AnimClass_field_0xBC = (IUnknown *)((char *)AnimClass_field_0xBC /*0x422d01*/
                                          - (*(_DWORD *)&stru_A8EB00.?[416]
                                           - (_DWORD)AnimClass_field_0xB4));
    }
    v7 = (int)AnimClass_field_0xC0 /*0x422d12*/
       + (int)this->AnimClass_field_0xAC * (_DWORD)AnimClass_field_0xC0
       - (_DWORD)AnimClass_field_0xBC;
    v8 = (_DWORD)AnimClass_field_0xC0 * (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 123))(this); /*0x422d23*/
    v9 = v7 + 8; /*0x422d28*/
    v10 = *a2 + 2 * (v7 + 8); /*0x422d30*/
    *(_DWORD *)v101 = *a2 - 2 * (v7 + 8); /*0x422d3c*/
    v106 = v10; /*0x422d40*/
    v11 = a2[1]; /*0x422d47*/
    v107 = v7 + 8 + v11; /*0x422d4d*/
    v102 = v11 - (v7 + 8); /*0x422d51*/
    v104 = (v8 - v7) << 8; /*0x422d5e*/
    *(_DWORD *)v100 = (int)v104 / v8; /*0x422d67*/
    if ( (int)v104 / v8 >= 0 ) /*0x422d6b*/
    {
      if ( (int)v104 / v8 > 255 ) /*0x422d7c*/
        *(_DWORD *)v100 = 255; /*0x422d7e*/
    }
    else
    {
      *(float *)v100 = 0.0; /*0x422d6d*/
    }
    if ( v7 >= v8 / 3 ) /*0x422d9a*/
      v12 = ((v8 - v7) << 8) / (v8 - v8 / 3); /*0x422db7*/
    else
      v12 = (v7 << 8) / (v8 / 3); /*0x422da2*/
    if ( v12 >= 0 ) /*0x422dbb*/
    {
      if ( v12 > 255 ) /*0x422dc6*/
        v12 = 255; /*0x422dc8*/
    }
    else
    {
      v12 = 0; /*0x422dbd*/
    }
    v13 = 2 * v12 / 3; /*0x422de3*/
    v87 = 2 * v8 / 3; /*0x422df3*/
    if ( v7 >= v87 ) /*0x422df7*/
      v14 = (int)v104 / (v8 - v87); /*0x422e10*/
    else
      v14 = (v7 << 8) / v87; /*0x422dff*/
    v15 = v14; /*0x422e12*/
    if ( v14 >= 0 ) /*0x422e16*/
    {
      if ( v14 > 255 ) /*0x422e22*/
        v15 = -1; /*0x422e24*/
    }
    else
    {
      v15 = 0; /*0x422e18*/
    }
    v16 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x422e2d*/
    v17 = LOWORD(g_ZBufferDescriptor->Stream_field_04) /*0x422e87*/
        + LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
        - *((_WORD *)a2 + 2)
        - LOWORD(DSurface_ViewBounds.field_4)
        + this->AnimClass_field_0x100
        + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v16)
        - 2;
    *(float *)&v104 = (double)(unsigned __int16)(v17 + v9) * 0.000015259022; /*0x422eab*/
    *(float *)&v103 = (double)(unsigned __int16)(v17 - v9) * 0.000015259022; /*0x422eb9*/
    ColorStruct::SetRGB(&v110, v100[0], v13, v15); /*0x422ebd*/
    ColorStruct::SetRGB(&v111, v100[0], v13, v15); /*0x422ecc*/
    *(float *)&v88 = (float)v102; /*0x422ede*/
    v18 = v88; /*0x422ee6*/
    *(float *)v100 = (float)*(int *)v101; /*0x422eef*/
    v19 = *(_DWORD *)v100; /*0x422ef3*/
    Tactical::SetCellTransform(v110.__pad_0, 0, *(int *)v100, v88, v104, 0, 0); /*0x422efa*/
    *(float *)v100 = (float)v107; /*0x422f0f*/
    Tactical::SetCellTransform(v110.__pad_0, 1, v19, *(int *)v100, v103, 0, 1065353216); /*0x422f1f*/
    *(float *)&v89 = (float)v106; /*0x422f37*/
    Tactical::SetCellTransform(v110.__pad_0, 2, v89, *(int *)v100, v103, 1065353216, 1065353216); /*0x422f47*/
    Tactical::SetCellTransform(v111.__pad_0, 0, v19, v18, v104, 0, 0); /*0x422f5c*/
    Tactical::SetCellTransform(v111.__pad_0, 1, v89, *(int *)v100, v103, 1065353216, 1065353216); /*0x422f7f*/
    Tactical::SetCellTransform(v111.__pad_0, 2, v89, v18, v104, 1065353216, 0); /*0x422f97*/
    StructTable::Append(dword_8A0E10, &v110); /*0x422fa7*/
    StructTable::Append(dword_8A0E10, &v111); /*0x422fba*/
    return; /*0x422fc9*/
  }
  if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[282] < (unsigned int)PingPongBuffer::GetWriteOffset() /*0x422fe6*/
    && *(int *)&this->AnimClass_field_0xC8[2].__pad_C[72] > 1 )
  {
    return; /*0x422fe6*/
  }
  if ( this->__pad_194[9] ) /*0x422fec*/
    return; /*0x422fec*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x422ffa*/
  if ( *(_DWORD *)&AnimClass_field_0xC8[2].__pad_C[72] > stru_A8EB00.ObjectTypeClass[30] /*0x42301e*/
    || this->__pad_194[5] && AnimClass_field_0xC8[2].__pad_C[232] )
  {
    return; /*0x42301e*/
  }
  *(float *)&v103 = COERCE_FLOAT((*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 27))(this)); /*0x423035*/
  if ( *(float *)&v103 == 0.0 ) /*0x423039*/
    return; /*0x423039*/
  v21 = this->AnimClass_field_0xC8; /*0x42303f*/
  AnimClass_field_0x190 = this->AnimClass_field_0x190; /*0x42304b*/
  AnimClass_field_0xAC = this->AnimClass_field_0xAC; /*0x423051*/
  v104 = (unsigned int)AnimClass_field_0xAC + *(_DWORD *)&v21[2].__pad_C[40]; /*0x42305d*/
  if ( this->__pad_118[1] ) /*0x423061*/
  {
    if ( v21[2].__pad_C[220] ) /*0x42306b*/
      AnimClass_field_0x190 |= 6u; /*0x423075*/
    else
      AnimClass_field_0x190 |= 4u; /*0x42307a*/
  }
  if ( *(_DWORD *)&v21[2].__pad_C[76] <= stru_A8EB00.ObjectTypeClass[30] ) /*0x42308b*/
  {
    if ( !v21[2].__pad_C[222] ) /*0x423095*/
    {
      v28 = *(_DWORD *)&v21[2].__pad_C[96]; /*0x423183*/
      if ( v28 <= 0 ) /*0x42318b*/
      {
        v29 = this->__pad_178[0]; /*0x4231c1*/
        if ( !v29 ) /*0x4231c9*/
          goto LABEL_47; /*0x4231c9*/
        if ( v29 > 15 ) /*0x4231d1*/
          return; /*0x4231d1*/
        if ( v29 > 10 ) /*0x4231d9*/
        {
          AnimClass_field_0x190 |= 4u; /*0x4231db*/
          goto LABEL_47; /*0x4231de*/
        }
        if ( v29 > 5 ) /*0x4231e5*/
        {
          AnimClass_field_0x190 |= 4u; /*0x4231eb*/
          goto LABEL_47; /*0x4231ee*/
        }
      }
      else
      {
        if ( this->__pad_178[0] >= 15 ) /*0x423194*/
          return; /*0x423194*/
        if ( v28 != 25 ) /*0x42319d*/
        {
          if ( v28 == 50 ) /*0x4231a6*/
          {
            AnimClass_field_0x190 |= 4u; /*0x4231a8*/
          }
          else if ( v28 == 75 ) /*0x4231b3*/
          {
            AnimClass_field_0x190 |= 6u; /*0x4231b9*/
          }
          goto LABEL_47; /*0x4231ab*/
        }
      }
LABEL_46:
      AnimClass_field_0x190 |= 2u; /*0x4230fb*/
      goto LABEL_47; /*0x4230fb*/
    }
    if ( this->__pad_178[0] >= 15 ) /*0x4230a2*/
      return; /*0x4230a2*/
    v23 = (double)(int)AnimClass_field_0xAC; /*0x4230a8*/
    v24 = (double)*(int *)&v21[2].__pad_C[52]; /*0x4230ac*/
    if ( v23 > v24 * 0.6 ) /*0x4230c3*/
    {
      AnimClass_field_0x190 |= 6u; /*0x4230c9*/
      goto LABEL_47; /*0x4230cc*/
    }
    if ( v23 > v24 * 0.4 ) /*0x4230df*/
    {
      AnimClass_field_0x190 |= 4u; /*0x4230e5*/
      goto LABEL_47; /*0x4230e8*/
    }
    if ( v23 > v24 * 0.2 ) /*0x4230f9*/
      goto LABEL_46; /*0x4230f9*/
  }
LABEL_47:
  if ( (AnimClass_field_0x190 & 1) == 0 ) /*0x423101*/
    BYTE1(AnimClass_field_0x190) |= 8u; /*0x423103*/
  *(_DWORD *)v101 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 114))(this); /*0x423110*/
  v25 = this->AnimClass_field_0xC8; /*0x423114*/
  v106 = 1000; /*0x42311a*/
  if ( v25[2].__pad_C[201] ) /*0x423122*/
  {
    v105[0] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4]) /*0x42314b*/
                        + 780);
    if ( v25[2].__pad_C[209] ) /*0x42314f*/
      goto LABEL_78; /*0x423157*/
    v26 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x423166*/
    v27 = *(__int16 *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v26)->CellClass_field_10C; /*0x423177*/
    goto LABEL_77; /*0x42317e*/
  }
  if ( this->__pad_194[2] ) /*0x4231f3*/
  {
    v30 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x42320a*/
    LOWORD(v91) = *v30 / 256; /*0x423220*/
    HIWORD(v91) = v30[1] / 256; /*0x423238*/
    *(float *)v100 = v91; /*0x423241*/
    v31 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v100); /*0x423250*/
    if ( !v31[13] ) /*0x423252*/
      TacticalClass::SetView(v31, 0, 0x10000, 0, 1000, 1000, 1000); /*0x423273*/
    v32 = this->AnimClass_field_0xC8; /*0x42327b*/
    v105[0] = v31[13]; /*0x423281*/
    if ( !v32[2].__pad_C[209] ) /*0x423285*/
      v106 = *((__int16 *)v31 + 134); /*0x42329a*/
  }
  else if ( this->AnimClass_field_0xD4 ) /*0x4232a3*/
  {
    v105[0] = (int)this->AnimClass_field_0xD4; /*0x4232ad*/
    if ( !v25[2].__pad_C[209] ) /*0x4232b1*/
      v106 = this->AnimClass_field_0xFC[0]; /*0x4232c5*/
  }
  else
  {
    v105[0] = *(_DWORD *)&stru_87F5F0.__pad_58[120]; /*0x4232d4*/
    if ( v25[2].__pad_C[213] ) /*0x4232d8*/
      v105[0] = *(_DWORD *)(**(_DWORD **)&stru_B054D0.m_1[3] + 780); /*0x4232f0*/
    if ( !v25[2].__pad_C[209] ) /*0x4232f4*/
    {
      v33 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x423307*/
      LOWORD(v92) = *v33 / 256; /*0x42331d*/
      HIWORD(v92) = v33[1] / 256; /*0x423336*/
      *(float *)v100 = v92; /*0x423343*/
      v27 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v100) + 133); /*0x42334d*/
LABEL_77:
      v106 = v27; /*0x423354*/
    }
  }
LABEL_78:
  if ( this->__pad_194[0] ) /*0x423358*/
  {
    v34 = ZCoordToScreenY(*(int *)v101); /*0x423373*/
    v35 = *a2; /*0x423384*/
    v36 = *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184] + v34 + a2[1]; /*0x42338b*/
    AnimClass_field_0x0 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x42339a*/
    v102 = v36; /*0x42339c*/
    *(_DWORD *)v101 = v35; /*0x4233a2*/
    v38 = AnimClass_field_0x0[116](this); /*0x4233a6*/
    v39 = ZCoordToScreenY(v38); /*0x4233ae*/
    DrawToSurfaceSHP( /*0x4233e9*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      a3,
      9729,
      0,
      *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184] - v39,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  v40 = this->__pad_118[0]; /*0x4233ee*/
  v41 = 0.0; /*0x4233f4*/
  *(float *)v100 = 0.0; /*0x4233f8*/
  if ( !v40 ) /*0x4233fc*/
    goto LABEL_99; /*0x4233fc*/
  v42 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v108); /*0x42340b*/
  v43 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v42); /*0x423414*/
  v44 = Cell::IsBridge((Cell *)v43); /*0x42341b*/
  v93 = v44; /*0x423422*/
  if ( !v44 ) /*0x423426*/
    goto LABEL_99; /*0x423426*/
  if ( v44[165] ) /*0x42342e*/
  {
    v45 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6308); /*0x423442*/
    v46 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v45; /*0x423448*/
    *(_DWORD *)v101 = v45 + v46; /*0x423454*/
    v98 = *(_BYTE *)(v45 + v46 + 6260); /*0x42345e*/
    v96 = *(_BYTE *)(v45 + v46 + 4174 + 2087); /*0x42346d*/
    v84 = *(_BYTE *)(v45 + v46 + 6262); /*0x423477*/
    v47 = DDraw::GetStatus() - 1; /*0x423480*/
    if ( v47 ) /*0x423481*/
    {
      v50 = v47 - 1; /*0x423483*/
      if ( v50 ) /*0x423484*/
      {
        LOBYTE(v50) = v96; /*0x4234ce*/
        goto LABEL_89; /*0x4234ce*/
      }
      LOWORD(v41) = v98; /*0x423486*/
      v50 = v96; /*0x42348c*/
      LOWORD(v49) = v84; /*0x423493*/
      LOWORD(v48) = v96; /*0x42349c*/
      LODWORD(v41) = v49 | (32 * (v48 | (LODWORD(v41) << 6))); /*0x4234a3*/
    }
    else
    {
      v50 = v96; /*0x4234a7*/
    }
    LOWORD(v49) = (unsigned __int8)v50 >> 1; /*0x4234b2*/
    LOWORD(v48) = v98; /*0x4234b4*/
    v48 *= 32; /*0x4234ba*/
    v51 = v48 | v49; /*0x4234bd*/
    LOWORD(v48) = v84; /*0x4234bf*/
    v49 = v48 | (v51 << 6); /*0x4234c8*/
    LODWORD(v41) |= v49; /*0x4234ca*/
LABEL_89:
    LOWORD(v49) = v98; /*0x4234d2*/
    LOWORD(v48) = v84; /*0x4234d8*/
    LOWORD(v50) = (unsigned __int8)v50 >> 1; /*0x4234e0*/
    LODWORD(v41) |= v48 | (32 * ((32 * v49) | v50)); /*0x4234ee*/
    *(float *)v100 = v41; /*0x4234f0*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v93 + 352))(v93) || v93[113] != 1 ) /*0x423513*/
    goto LABEL_99; /*0x423513*/
  v52 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6320); /*0x42351f*/
  v53 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v52; /*0x423525*/
  *(_DWORD *)v101 = v52 + v53; /*0x423531*/
  v99 = *(_BYTE *)(v52 + v53 + 6260); /*0x42353b*/
  v85 = *(_BYTE *)(v52 + v53 + 4174 + 2087); /*0x42354a*/
  v97 = *(_BYTE *)(v52 + v53 + 6262); /*0x423554*/
  v54 = DDraw::GetStatus() - 1; /*0x42355d*/
  if ( v54 ) /*0x42355e*/
  {
    v57 = v54 - 1; /*0x423560*/
    if ( v57 ) /*0x423561*/
    {
      LOBYTE(v57) = v85; /*0x4235ad*/
      goto LABEL_98; /*0x4235ad*/
    }
    LOWORD(v55) = v99; /*0x423563*/
    v57 = v85; /*0x423569*/
    LOWORD(v56) = v85; /*0x423573*/
    v58 = v56 | (v55 << 6); /*0x423575*/
    LOWORD(v56) = v97; /*0x423577*/
    v55 = v56 | (32 * v58); /*0x423580*/
    LODWORD(v41) |= v55; /*0x423582*/
  }
  else
  {
    v57 = v85; /*0x423586*/
  }
  LOWORD(v56) = (unsigned __int8)v57 >> 1; /*0x423591*/
  LOWORD(v55) = v99; /*0x423593*/
  v55 *= 32; /*0x423599*/
  v59 = v55 | v56; /*0x42359c*/
  LOWORD(v55) = v97; /*0x42359e*/
  v56 = v55 | (v59 << 6); /*0x4235a7*/
  LODWORD(v41) |= v56; /*0x4235a9*/
LABEL_98:
  LOWORD(v56) = v99; /*0x4235b1*/
  LOWORD(v55) = v97; /*0x4235b7*/
  LOWORD(v57) = (unsigned __int8)v57 >> 1; /*0x4235bf*/
  LODWORD(v41) |= v55 | (32 * ((32 * v56) | v57)); /*0x4235cd*/
  *(float *)v100 = v41; /*0x4235cf*/
LABEL_99:
  v60 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v108); /*0x4235d3*/
  LOWORD(v94) = *v60 / 256; /*0x4235ef*/
  HIWORD(v94) = v60[1] / 256; /*0x423608*/
  *(_DWORD *)v101 = v94; /*0x423615*/
  v61 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v101); /*0x42361a*/
  if ( (unsigned __int8)CellClass::QuickPassable(v61) ) /*0x423621*/
  {
    v41 = 0.0; /*0x42362a*/
    *(float *)v100 = 0.0; /*0x42362c*/
  }
  v62 = this->AnimClass_field_0xC8; /*0x423630*/
  if ( v62[2].__pad_C[207] ) /*0x423636*/
  {
    FoundationSize = Building::GetFoundationSize(&v108, 0); /*0x42364f*/
    v64 = *a2; /*0x423657*/
    v65 = a2[1]; /*0x423659*/
    *(_DWORD *)v101 = FoundationSize[3]; /*0x42365c*/
    v66 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x423663*/
    v108 = v64; /*0x423667*/
    v105[0] = v64; /*0x42366d*/
    v95 = *(_DWORD *)v101 / 2; /*0x423673*/
    v67 = v65 - *(_DWORD *)v101 / 2; /*0x423677*/
    v86 = 0; /*0x423679*/
    v68 = v66[116](this); /*0x42367e*/
    v69 = this->AnimClass_field_0x100 /*0x4236a1*/
        + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v68)
        - 50;
    BYTE1(AnimClass_field_0x190) |= 0x20u; /*0x4236a4*/
    do /*0x423719*/
    {
      v70 = v67 + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184]; /*0x4236bb*/
      v105[0] = v108; /*0x4236bd*/
      v105[1] = v70; /*0x4236c1*/
      DrawToSurfaceSHP( /*0x4236f7*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[120],
        v103,
        v104,
        v105,
        &DSurface_ViewBounds.field_0,
        AnimClass_field_0x190,
        0,
        v69,
        2,
        v106,
        *(int *)v100,
        0,
        0,
        0,
        0);
      if ( v67 < 0 ) /*0x4236fe*/
        v86 = 1; /*0x423700*/
      v67 -= *(_DWORD *)v101; /*0x42370d*/
      v69 -= *(_DWORD *)v101 + v95; /*0x423715*/
    }
    while ( !v86 ); /*0x423719*/
  }
  else if ( v62[2].__pad_C[221] ) /*0x423728*/
  {
    v109 = *(_DWORD *)&v62[2].__pad_C[184]; /*0x42373c*/
    v71 = a2[1]; /*0x423742*/
    *(_DWORD *)v101 = *a2; /*0x42374c*/
    v82 = v106; /*0x423756*/
    v72 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x42375e*/
    v102 = v109 + v71; /*0x423766*/
    v73 = v72[116](this); /*0x42376a*/
    BYTE1(AnimClass_field_0x190) |= 0x20u; /*0x42379b*/
    v80 = this->AnimClass_field_0x100 /*0x42379e*/
        + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v73)
        - 3;
    DrawToSurfaceSHP( /*0x4237a9*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      a3,
      AnimClass_field_0x190,
      0,
      v80,
      0,
      v82,
      SLODWORD(v41),
      0,
      0,
      0,
      0);
  }
  else
  {
    v74 = *a2; /*0x4237b9*/
    v102 = *(_DWORD *)&v62[2].__pad_C[184] + a2[1]; /*0x4237bb*/
    *(_DWORD *)v101 = v74; /*0x4237cb*/
    v83 = v106; /*0x4237d2*/
    v75 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x4237d7*/
    v76 = this->AnimClass_field_0x100 + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184] - ZCoordToScreenY(v75); /*0x4237ff*/
    v77 = AnimClass_field_0x190; /*0x423801*/
    BYTE1(v77) = BYTE1(AnimClass_field_0x190) | 0x20; /*0x423806*/
    DrawToSurfaceSHP( /*0x423827*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      a3,
      v77,
      0,
      v76 - 2,
      2,
      v83,
      SLODWORD(v41),
      0,
      0,
      0,
      0);
    if ( this->AnimClass_field_0xC8[2].__pad_C[230] ) /*0x423832*/
    {
      v78 = *(__int16 *)(v103 + 6); /*0x423845*/
      v79 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x423857*/
      v81 = -2 - ZCoordToScreenY(v79); /*0x423875*/
      DrawToSurfaceSHP( /*0x42389e*/
        (int)g_DSurface_Hidden_2,
        v105[0],
        v103,
        v104 + v78 / 2,
        a2,
        a3,
        AnimClass_field_0x190 & 0xFFFFF9F8 | 0x601,
        0,
        v81,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
  }
}



// ==== 0x004238B0  AnimClass::UpdateMirrorState  this=AnimClass  sig=csp ====
bool __thiscall AnimClass::UpdateMirrorState(AnimClass *this, int a2)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x4238bf*/
}



// ==== 0x004238D0  AnimClass::CheckMirrorFlags  this=AnimClass  sig=csp ====
int *__stdcall AnimClass::CheckMirrorFlags(AnimClass *this)
{
  if ( (byte_89A190 & 1) == 0 ) /*0x4238db*/
  {
    byte_89A190 |= 1u; /*0x4238f9*/
    dword_89A160 = 2147450879; /*0x4238ff*/
    atexit(nullsub_89); /*0x423904*/
  }
  return &dword_89A160; /*0x423912*/
}



// ==== 0x00423920  nullsub_89  this=-  sig=ida-proto ====
void __cdecl nullsub_89()
{
  ; /*0x423920*/
}



// ==== 0x00423930  AnimClass::UpdateProjectileTrajectory  this=AnimClass  sig=csp ====
int __thiscall AnimClass::UpdateProjectileTrajectory(AnimClass *this)
{
  float *v1; // edi
  char *v3; // esi
  int v4; // ebx
  Coord *AnimClass_field_0xC8; // eax
  AnimClass *v6; // edi
  int *v7; // eax
  _DWORD *Coords; // eax
  ObjectClass *firstObject; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  Coord *v12; // ebx
  int v13; // esi
  int v14; // eax
  void *ptr_0; // edx
  int v16; // eax
  void (__thiscall **AnimClass_field_0x0)(AnimClass *, int); // esi
  int v18; // eax
  int v20; // [esp-8h] [ebp-60h]
  _DWORD *v21; // [esp+Ch] [ebp-4Ch]
  int v22; // [esp+1Ch] [ebp-3Ch] BYREF
  void (__thiscall **v23)(ObjectClass *, _DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [esp+20h] [ebp-38h]
  int v24; // [esp+24h] [ebp-34h]
  char v25[12]; // [esp+28h] [ebp-30h] BYREF
  int v26[3]; // [esp+34h] [ebp-24h] BYREF
  char v27[12]; // [esp+40h] [ebp-18h] BYREF
  int v28[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v3 = &this->__pad_120[8]; /*0x423939*/
  v4 = JumpjetLocomotionClass::Update2((double *)&this->__pad_120[8], v1); /*0x423946*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x423948*/
  v24 = v4; /*0x42394e*/
  if ( AnimClass_field_0xC8[2].__pad_C[202] ) /*0x423952*/
    *((float *)v3 + 11) = *((float *)v3 + 11) + *((double *)v3 + 1); /*0x423962*/
  if ( v4 == 1 ) /*0x423968*/
  {
    if ( *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[116] ) /*0x423987*/
    {
      v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x42399b*/
      if ( v6 ) /*0x4239a2*/
      {
        v7 = (int *)(*((int (__thiscall **)(AnimClass *, char *))this->AnimClass_field_0x0 + 18))(this, v25); /*0x4239bb*/
        AnimClass::ctor(v6, *(void **)&this->AnimClass_field_0xC8[2].__pad_C[116], v7, 0, 1, (void *)0x600, 0, 0); /*0x4239ce*/
      }
    }
    Coords = (_DWORD *)Coord::GetCoords(v26, v21); /*0x4239da*/
    firstObject = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], Coords)->firstObject; /*0x4239ea*/
    if ( firstObject ) /*0x4239f2*/
    {
      do /*0x423a88*/
      {
        v10 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))firstObject->AbstractClass + 18))( /*0x423a08*/
                          firstObject,
                          v27);
        v11 = (_DWORD *)Coord::GetCoords(v28, v21); /*0x423a11*/
        v12 = this->AnimClass_field_0xC8; /*0x423a29*/
        v13 = abs32(v11[1] - v10[1]) + abs32(*v11 - *v10); /*0x423a3a*/
        if ( v13 <= *(_DWORD *)&v12[2].__pad_C[168] ) /*0x423a44*/
        {
          LOWORD(v14) = Math::RoundToInt(*(double *)&v12[2].__pad_C[28]); /*0x423a4c*/
          ptr_0 = firstObject->AbstractClass; /*0x423a51*/
          v22 = v14; /*0x423a55*/
          v20 = *(_DWORD *)&v12[2].__pad_C[164]; /*0x423a65*/
          v23 = (void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))ptr_0; /*0x423a68*/
          v16 = ZCoordToScreenY(v13); /*0x423a6c*/
          v23[91](firstObject, &v22, v16, v20, 0, 0, 0, 0); /*0x423a7d*/
        }
        firstObject = firstObject->nextObject; /*0x423a83*/
      }
      while ( firstObject ); /*0x423a88*/
      v4 = v24; /*0x423a8e*/
    }
  }
  else if ( v4 == 2 ) /*0x42396b*/
  {
    (*((void (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 62))(this); /*0x423976*/
  }
  AnimClass_field_0x0 = (void (__thiscall **)(AnimClass *, int))this->AnimClass_field_0x0; /*0x423a92*/
  v18 = Coord::GetCoords(v28, v21); /*0x423aa0*/
  AnimClass_field_0x0[109](this, v18); /*0x423aa8*/
  return v4; /*0x423aae*/
}



// ==== 0x00423AC0  AnimClass::CreateUnit  this=AnimClass  sig=csp ====
// TechnoClass::CreateUnit — per-frame production pipeline (4234B).
// Sections: Audio → Placement → Deploy → Progress → Cost → Milestone → TypeSwitch → UnitCreate
int __thiscall TechnoClass::CreateUnit(AnimClass *this)
{
  double v1; // st7
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  CellClass *v5; // eax
  Building *v6; // eax
  int AnimClass_field_0x0; // eax
  int v8; // eax
  int *p_AnimClass_field_0x9C; // edi
  int landType; // ebx
  int v11; // ebp
  bool v12; // bl
  bool v13; // al
  AnimClass *v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // edi
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  int v20; // edx
  int v21; // ebp
  int v22; // edi
  AnimClass *v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int AnimClass_field_0xC8; // edx
  int v29; // eax
  int v30; // ebp
  _DWORD *Coords; // eax
  int v33; // ebp
  int v34; // eax
  int v35; // ebp
  int *v36; // eax
  int *v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // edi... [35225 chars total]



// ==== 0x00424B50  BuildingClass::AimTurret  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AimTurret(BuildingClass *this, _BYTE *a2)
{
  _BYTE *v3; // ebp
  char isOnMap; // bl
  int v5; // ecx
  char *v6; // edx
  int *v7; // eax
  int v8; // edx
  int (__thiscall **ptr_0)(BuildingClass *, _DWORD *); // eax
  int result; // eax
  int *v11; // eax
  int v12; // ebx
  int v13; // ebp
  _DWORD *v14; // eax
  int v15; // ebx
  void (__thiscall **v16)(BuildingClass *, _DWORD *); // edx
  int v17; // ebp
  int v18; // [esp+10h] [ebp-24h] BYREF
  int v19; // [esp+14h] [ebp-20h]
  int v20; // [esp+18h] [ebp-1Ch]
  _BYTE v21[8]; // [esp+1Ch] [ebp-18h] BYREF
  int v22; // [esp+24h] [ebp-10h]
  _BYTE v23[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (_BYTE *)this->?[1]; /*0x424b59*/
  if ( v3 ) /*0x424b61*/
  {
    isOnMap = this->?; /*0x424b67*/
    if ( isOnMap ) /*0x424b6c*/
      RemoveTarget((int)this); /*0x424b74*/
    v5 = 0; /*0x424b7f*/
    if ( dword_A8E9B8 > 0 ) /*0x424b83*/
    {
      v6 = (char *)dword_A8E9AC; /*0x424b85*/
      do /*0x424ba5*/
      {
        if ( *(BuildingClass **)v6 != this && *(_DWORD *)(*(_DWORD *)v6 + 204) == this->?[1] ) /*0x424b9d*/
          break; /*0x424b9d*/
        ++v5; /*0x424b9f*/
        v6 += 4; /*0x424ba0*/
      }
      while ( v5 < dword_A8E9B8 ); /*0x424ba5*/
    }
    if ( v5 == dword_A8E9B8 ) /*0x424ba9*/
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 380))(v3); /*0x424bb0*/
      v3[132] = 0; /*0x424bb6*/
    }
    v7 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v21); /*0x424bc6*/
    v18 = *v7; /*0x424bcb*/
    v19 = v7[1]; /*0x424bd2*/
    v8 = v7[2]; /*0x424bda*/
    ptr_0 = (int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass; /*0x424bdd*/
    v20 = v8; /*0x424be2*/
    this->?[1] = 0; /*0x424be6*/
    result = ptr_0[109](this, &v18); /*0x424bf0*/
    if ( isOnMap ) /*0x424bf8*/
      result = Targeting::Readd(this); /*0x424c00*/
  }
  if ( a2 ) /*0x424c0b*/
  {
    v11 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v21); /*0x424c16*/
    v12 = *v11; /*0x424c19*/
    v13 = v11[1]; /*0x424c1c*/
    v22 = v11[2]; /*0x424c22*/
    RemoveTarget((int)this); /*0x424c2b*/
    a2[132] = 1; /*0x424c30*/
    this->?[1] = (int)a2; /*0x424c37*/
    v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v23); /*0x424c46*/
    v15 = v12 - *v14; /*0x424c51*/
    v16 = (void (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass; /*0x424c5d*/
    v17 = v13 - v14[1]; /*0x424c5f*/
    v20 = v22 - v14[2]; /*0x424c61*/
    v18 = v15; /*0x424c68*/
    v19 = v17; /*0x424c6c*/
    v16[109](this, &v18); /*0x424c70*/
    return Targeting::Readd(this); /*0x424c7c*/
  }
  return result; /*0x424c81*/
}



// ==== 0x00424C90  BuildingClass::SetField95  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetField95(BuildingClass *this, int a2)
{
  this->?[2] = a2; /*0x424c94*/
  return a2; /*0x424c9a*/
}



// ==== 0x00424CA0  Function::424CA0  this=Function  sig=csp ====
int __thiscall Function::Method_424CA0(Function *this, int a2)
{
  this->q018 = a2; /*0x424ca4*/
  return a2; /*0x424caa*/
}



// ==== 0x00424CB0  AnimClass::InWhichLayer_AttachedObjectLayer  this=AnimClass  sig=csp ====
int __thiscall AnimClass::InWhichLayer_AttachedObjectLayer(AnimClass *this)
{
  Coord *AnimClass_field_0xC8; // eax

  if ( this->AnimClass_field_0xCC ) /*0x424cb0*/
    return 2; /*0x424cba*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x424cc0*/
  if ( AnimClass_field_0xC8 ) /*0x424cc8*/
    return *(_DWORD *)&AnimClass_field_0xC8[2].__pad_C[216]; /*0x424cca*/
  else
    return 3; /*0x424cd1*/
}



// ==== 0x00424CE0  ObjectClass::ProductionCompletionCallback  this=ObjectClass  sig=csp ====
// Production completion callback (543B). Handles audio, special building anims, unit creation.
bool __thiscall ProductionCompletionCallback(TechnoClass *this)
{
  _DWORD *v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  CellClass *v5; // ebx
  _DWORD *v6; // edi
  AnimClass *v7; // ebp
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  void **v13; // eax
  int *location; // esi
  __int16 *p_smudgeTypeIndex; // ebx
  int v17; // [esp-8h] [ebp-38h]
  int v18; // [esp+Ch] [ebp-24h] BYREF
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  char v21[12]; // [esp+18h] [ebp-18h] BYREF
  char v22[12]; // [esp+24h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(TechnoClass *, int))(this->ptr_0 + 292))(this, 2); /*0x424ceb*/
  if ( LOBYTE(this->ironCurtainTimer[2]) || *(_DWORD *)(this->missionTimer[0] + 760) == -1 ) /*0x424d08*/
  {
    AudioController::Stop((AudioController *)&this->ironTintTimer[1]); /*0x424d38*/
  }
  else
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, &v18); /*0x424d1a*/
    StartAudioControllerAt(*(_DWORD *)(this->missionTimer[0] + 760), v2, (int **)&this->ironTintTimer[1]); /*0x424d2b*/
  }
  AudioController::Stop((AudioController *)&this->airstrikeTimer[2]); /*0x424d43*/
  if ( !*(_DWORD *)(this->missionTimer[0] + 664) ) /*0x424d4e*/
    CreateUnitOnCompletion(this); /*0x424d5a*/
  LOBYTE(v3) = this->ironCurtainTimer[2]; /*0x424d5f*/
  if ( !(_BYTE)v3 ) /*0x424d67*/
  {
    LOBYTE(v3) = *(_BYTE *)(this->missionTimer[0] + 855); /*0x424d73*/
    if ( (_BYTE)v3 ) /*0x424d7b*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, char *))(this->ptr_0 + 72))(this, v21); /*0x424d8a*/
      v5 = Coord::To_Cell((Coord *)&dword_87F7E8, v4); /*0x424d98*/
      v3 = BuildingClass::FindByCellHash((BuildingClass *)v5); /*0x424d9c*/
      if ( v3 != -1 ) /*0x424da4*/
      {
        v6 = (_DWORD *)*(&dword_B0F4EC->ptr_0 + v3); /*0x424db3*/
        CellClass::ReduceTiberium(&v5->mapCoords, (unsigned __int8)v5->powerup[0] + 1); /*0x424dc0*/
        if ( (int)v6[53] > 0 && !((int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3) ) /*0x424def*/
        {
          v7 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x424e04*/
          if ( v7 ) /*0x424e0b*/
          {
            v8 = (int *)(*(int (__thiscall **)(TechnoClass *, char *))(this->ptr_0 + 72))(this, v22); /*0x424e16*/
            v9 = *v8; /*0x424e19*/
            v10 = v8[1]; /*0x424e1b*/
            v11 = v8[2]; /*0x424e1e*/
            v18 = v9; /*0x424e21*/
            v20 = v11 + 10; /*0x424e2e*/
            v17 = v6[53] - 1; /*0x424e3f*/
            v19 = v10; /*0x424e42*/
            v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v17); /*0x424e46*/
            v13 = AnimClass::ctor(v7, *(void **)(v6[50] + 4 * v12), &v18, 0, 1, (void *)0x600, 0, 0); /*0x424e69*/
          }
          else
          {
            v13 = 0; /*0x424e70*/
          }
          v13[53] = *(void **)(*((_DWORD *)dword_B054D4 + v6[48]) + 780); /*0x424e88*/
          v13[63] = (void *)*(__int16 *)v5->CellClass_field_10A; /*0x424e95*/
        }
        location = this->location; /*0x424e9b*/
        v18 = *location; /*0x424ea7*/
        v19 = location[1]; /*0x424eae*/
        v20 = location[2]; /*0x424eba*/
        PlaySoundEffectAt( /*0x424ed1*/
          &v18,
          *(_DWORD *)&dword_8871E0->__pad_240[808],
          0,
          *(_DWORD *)&dword_8871E0->__pad_C3C[876],
          0,
          0);
        House::AnnounceUpgrade((int)v5, -1); /*0x424eda*/
        p_smudgeTypeIndex = (__int16 *)&v5->smudgeTypeIndex; /*0x424edf*/
        Cell::SetRadar((Cell *)&dword_87F7E8, p_smudgeTypeIndex); /*0x424ee8*/
        Radar::Update((Radar *)&dword_87F7E8, p_smudgeTypeIndex); /*0x424ef3*/
      }
    }
  }
  return v3; /*0x424ef9*/
}



// ==== 0x00424F00  ObjectClass::CreateUnitOnCompletion  this=ObjectClass  sig=csp ====
// Create unit at completion (583B). Calculates exit cell, foundation offsets, spawns unit.
bool __thiscall CreateUnitOnCompletion(TechnoClass *this)
{
  _DWORD *v2; // eax
  int *v3; // eax
  int ptr_0; // edx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int i; // edi
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+10h] [ebp-20h]
  __int16 v19[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h]
  int *v21; // [esp+1Ch] [ebp-14h]
  int v22[4]; // [esp+20h] [ebp-10h] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, v22); /*0x424f12*/
  LOWORD(v17) = *v2 / 256; /*0x424f25*/
  HIWORD(v17) = v2[1] / 256; /*0x424f3e*/
  *(_DWORD *)v19 = v17; /*0x424f4b*/
  v3 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v19); /*0x424f50*/
  ptr_0 = this->ptr_0; /*0x424f55*/
  v5 = 30; /*0x424f57*/
  v21 = v3; /*0x424f5e*/
  v18 = 30; /*0x424f62*/
  if ( (*(int (__thiscall **)(TechnoClass *))(ptr_0 + 108))(this) ) /*0x424f66*/
  {
    v6 = this->missionTimer[0]; /*0x424f72*/
    if ( *(_DWORD *)(v6 + 668) == -1 ) /*0x424f7e*/
      *(_DWORD *)(this->missionTimer[0] + 668) = Building::GetFoundationSize(v22, *(_DWORD *)(v6 + 664))[2]; /*0x424f9c*/
    v7 = this->missionTimer[0]; /*0x424fa2*/
    if ( *(_DWORD *)(v7 + 672) == -1 ) /*0x424fae*/
      *(_DWORD *)(this->missionTimer[0] + 672) = Building::GetFoundationSize(v22, *(_DWORD *)(v7 + 664))[3]; /*0x424fcc*/
    v8 = this->missionTimer[0]; /*0x424fd2*/
    v5 = *(_DWORD *)(v8 + 668); /*0x424fd8*/
    v18 = *(_DWORD *)(v8 + 672); /*0x424fe4*/
  }
  v9 = this->missionTimer[0]; /*0x424fe8*/
  if ( *(_DWORD *)(v9 + 716) != -1 ) /*0x424ff4*/
  {
    for ( i = 0; i < *(_DWORD *)(v9 + 720); ++i ) /*0x425000*/
    {
      v22[0] = this->location[0]; /*0x42500c*/
      v22[1] = this->location[1]; /*0x425013*/
      v22[2] = this->location[2]; /*0x42501f*/
      CreateFireAtSW(dword_A8ED78, *((_DWORD *)dword_A83D9C + *(_DWORD *)(v9 + 716)), (int)v22); /*0x425039*/
      v9 = this->missionTimer[0]; /*0x42503e*/
    }
  }
  v11 = (*(int (__thiscall **)(TechnoClass *))(this->ptr_0 + 456))(this); /*0x425051*/
  if ( v11 < 30 ) /*0x42505a*/
  {
    v12 = this->missionTimer[0]; /*0x425060*/
    if ( !*(_BYTE *)(v12 + 875) /*0x4250ab*/
      || *(_BYTE *)(v12 + 877)
      && (v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646),
          (double)v20 * 4.656612877414201e-10 >= 0.5) )
    {
      LOBYTE(v11) = *(_BYTE *)(this->missionTimer[0] + 877); /*0x4250d7*/
      if ( (_BYTE)v11 ) /*0x4250df*/
      {
        CellClass::ReduceTiberium(v21, 6); /*0x4250e7*/
        if ( *(_BYTE *)(this->missionTimer[0] + 878) ) /*0x4250f2*/
        {
          v14 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, v22); /*0x42510c*/
          LOBYTE(v11) = TimedCreateUnitAtCoords(v14, 300, 300, 1); /*0x425116*/
        }
        else
        {
          v15 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, v22); /*0x425133*/
          LOBYTE(v11) = TimedCreateUnitAtCoords(v15, v5, v18, 0); /*0x42513a*/
        }
      }
    }
    else
    {
      v13 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, v22); /*0x4250bd*/
      LOBYTE(v11) = StandardCreateUnitAtCoords(v13, v5, v18, 0); /*0x4250c4*/
    }
  }
  return v11; /*0x4250c9*/
}



// ==== 0x00425150  AnimClass::ClearTargetReferences  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ClearTargetReferences(AnimClass *this, int a2, int a3)
{
  int result; // eax
  int (__thiscall **AnimClass_field_0x0)(AnimClass *, _DWORD); // eax
  int (__thiscall **v6)(AnimClass *); // edx
  int (__thiscall **v7)(AnimClass *); // eax

  Object::Unlink((ObjectClass *)this); /*0x42515f*/
  result = (int)this->AnimClass_field_0xCC; /*0x425164*/
  if ( result == a2 && a2 ) /*0x425172*/
  {
    RemoveTarget((int)this); /*0x42517a*/
    (*(void (__thiscall **)(void *, AnimClass *))(*(_DWORD *)this->AnimClass_field_0xCC + 96))( /*0x425188*/
      this->AnimClass_field_0xCC,
      this);
    AnimClass_field_0x0 = (int (__thiscall **)(AnimClass *, _DWORD))this->AnimClass_field_0x0; /*0x42518b*/
    this->AnimClass_field_0xCC = 0; /*0x425190*/
    this->__pad_194[7] = 1; /*0x425196*/
    result = AnimClass_field_0x0[73](this, 0); /*0x42519d*/
  }
  if ( this->AnimClass_field_0xC8 == (Coord *)a2 ) /*0x4251a9*/
    this->AnimClass_field_0xC8 = 0; /*0x4251ab*/
  if ( this->AnimClass_field_0x17C == (AbstractClass *)a2 ) /*0x4251b7*/
  {
    v6 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x4251b9*/
    this->AnimClass_field_0x17C = 0; /*0x4251bd*/
    result = v6[62](this); /*0x4251c3*/
  }
  if ( this->AnimClass_field_0x180 == a2 ) /*0x4251cf*/
  {
    v7 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x4251d1*/
    this->AnimClass_field_0x17C = 0; /*0x4251d5*/
    return v7[62](this); /*0x4251db*/
  }
  return result; /*0x4251e1*/
}



// ==== 0x004251F0  sub_4251F0  this=-  sig=csp ====
int __fastcall sub_4251F0(int a1, __int16 *a2)
{
  int v2; // ecx
  int v3; // eax
  int result; // eax
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v2 = a2[1]; /*0x4251f6*/
  v3 = (*a2 << 8) + 128; /*0x4251fd*/
  v5[2] = 0; /*0x425202*/
  v5[0] = v3; /*0x42520d*/
  v5[1] = (v2 << 8) + 128; /*0x42521e*/
  PlaySoundEffectAt(v5, dword_8871E0[1].GUIMoveInSound[1], 0, dword_8871E0->?, 0, 0); /*0x425237*/
  result = dword_A8B238[0]; /*0x42523c*/
  if ( !dword_A8B238[0] ) /*0x425243*/
    return FadePalette(&FileSystem_TEMPERAT_PAL, 30, (void (*)(void))Event::Dispatch); /*0x425254*/
  return result; /*0x425259*/
}



// ==== 0x00425260  BuildingClass::SetField8  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetField8(BuildingClass *this)
{
  int result; // eax

  BYTE2(this->?[0]) = 1; /*0x425260*/
  return result; /*0x425267*/
}



// ==== 0x00425270  VtableStub::425270  this=VtableStub  sig=csp ====
void __thiscall VtableStub::Method_425270(VtableStub *this)
{
  *((_BYTE *)this + 414) = 0; /*0x425270*/
}



// ==== 0x00425280  AnimClass::SaveLoad_Prefix  this=AnimClass  sig=csp ====
int __thiscall AnimClass::SaveLoad_Prefix(AnimClass *this, int a2, int a3)
{
  int Register; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x425291*/
  if ( Register >= 0 ) /*0x425295*/
  {
    if ( a2 ) /*0x42529d*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x4252a6*/
      __4type_info_AAEAAV0_ABV0__Z((void *)(a2 + 180), (int)&a3); /*0x4252b6*/
      *(_DWORD *)a2 = &AnimClass::`vftable'; /*0x4252bb*/
      *(_DWORD *)(a2 + 4) = &AnimClass::`vftable'; /*0x4252c1*/
      *(_DWORD *)(a2 + 8) = &AnimClass::`vftable'; /*0x4252c8*/
      *(_DWORD *)(a2 + 12) = &off_7E3328; /*0x4252cf*/
    }
    AudioController::Init((AudioController *)(a2 + 416)); /*0x4252dc*/
    AudioController::Init((AudioController *)(a2 + 436)); /*0x4252e7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 200)); /*0x4252f8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 204)); /*0x425309*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 380)); /*0x42531a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 384)); /*0x42532b*/
    v4 = *(_DWORD *)(a2 + 216); /*0x425330*/
    if ( v4 <= -1 ) /*0x425339*/
    {
      if ( *(_BYTE *)(a2 + 220) ) /*0x42535f*/
      {
        v6 = FileExtension::MapHandler((const char *)(a2 + 220)); /*0x42536f*/
        if ( v6 ) /*0x425376*/
        {
          v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0); /*0x42537e*/
          if ( v7 ) /*0x425383*/
          {
            *(_DWORD *)(a2 + 212) = *(_DWORD *)(v7 + 780); /*0x42538b*/
            return Register; /*0x425395*/
          }
        }
      }
      *(_DWORD *)(a2 + 212) = 0; /*0x425398*/
    }
    else if ( v4 < *(int *)stru_B054D0.__tail_10 ) /*0x425341*/
    {
      *(_DWORD *)(a2 + 212) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v4) + 780); /*0x425352*/
      return Register; /*0x42535c*/
    }
  }
  return Register; /*0x42535a*/
}



// ==== 0x004253B0  AnimClass::SaveLoad_Prefix_0  this=AnimClass  sig=csp ====
int __stdcall AnimClass::SaveLoad_Prefix_0(AnimClass *this, int *a2, int a3)
{
  IUnknown *AnimClass_field_0xD4; // edx
  int v4; // eax
  int v5; // ecx

  AnimClass_field_0xD4 = this->AnimClass_field_0xD4; /*0x4253b6*/
  if ( AnimClass_field_0xD4 && (v4 = *(_DWORD *)stru_B054D0.__tail_10 - 1, *(_DWORD *)stru_B054D0.__tail_10 - 1 >= 0) ) /*0x4253c8*/
  {
    v5 = *(_DWORD *)&stru_B054D0.m_1[3] + 4 * v4; /*0x4253d0*/
    while ( AnimClass_field_0xD4 != *(IUnknown **)(*(_DWORD *)v5 + 780) ) /*0x4253db*/
    {
      --v4; /*0x4253dd*/
      v5 -= 4; /*0x4253de*/
      if ( v4 < 0 ) /*0x4253e3*/
        goto LABEL_6; /*0x4253e3*/
    }
    *(_DWORD *)this->__pad_D8 = v4; /*0x425404*/
  }
  else
  {
LABEL_6:
    *(_DWORD *)this->__pad_D8 = -1; /*0x4253e5*/
  }
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x4253ff*/
}



// ==== 0x00425410  AnimClass::ProcessPower  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessPower(AnimClass *this, int *a2)
{
  _DWORD *AnimClass_field_0xCC; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx

  HouseClass::ProcessPower((ObjectClass *)this); /*0x425419*/
  AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x42541e*/
  if ( AnimClass_field_0xCC ) /*0x425426*/
  {
    v4 = (*(int (__stdcall **)(_DWORD *))(AnimClass_field_0xCC[1] + 16))(AnimClass_field_0xCC + 1); /*0x42542f*/
    Power::TimerProcess(v4); /*0x425435*/
  }
  Power::TimerProcess(this->AnimClass_field_0xD0[0]); /*0x425443*/
  Power::TimerProcess(this->AnimClass_field_0xFC[0]); /*0x425451*/
  Power::TimerProcess(this->AnimClass_field_0x100); /*0x42545f*/
  Power::TimerProcess(this->AnimClass_field_0x104); /*0x42546d*/
  Power::TimerProcess((int)this->AnimClass_field_0x184->__pad_0); /*0x42547b*/
  Checksummer::Add_double((Checksummer *)a2, this->AnimClass_field_0x188, *(_DWORD *)this->__pad_18C); /*0x425490*/
  Power::TimerProcess(this->AnimClass_field_0x190); /*0x42549e*/
  LOBYTE(v5) = this->__pad_194[0]; /*0x4254a3*/
  Power::FlagProcess((Power *)a2, v5); /*0x4254ac*/
  v6 = Power::TimerProcess((unsigned __int8)this->__pad_194[1]); /*0x4254bc*/
  LOBYTE(v6) = this->__pad_194[2]; /*0x4254c1*/
  Power::FlagProcess((Power *)a2, v6); /*0x4254ca*/
  LOBYTE(v7) = this->__pad_194[3]; /*0x4254cf*/
  Power::FlagProcess((Power *)a2, v7); /*0x4254d8*/
  LOBYTE(v8) = this->__pad_194[7]; /*0x4254dd*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x4254e6*/
  LOBYTE(v9) = this->__pad_194[8]; /*0x4254eb*/
  Power::FlagProcess((Power *)a2, v9); /*0x4254f4*/
  LOBYTE(v10) = this->__pad_194[10]; /*0x4254f9*/
  return Power::FlagProcess((Power *)a2, v10); /*0x425507*/
}



// ==== 0x00425510  AnimClass::CheckEndOfSequence  this=AnimClass  sig=csp ====
int __thiscall AnimClass::CheckEndOfSequence(AnimClass *this)
{
  return *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[52]; /*0x42551c*/
}



// ==== 0x00425520  AbstractClass::updateLayer  this=AnimClass  sig=csp ====
unsigned int __thiscall AbstractClass::updateLayer(AbstractClass *this)
{
  return this->q0C8; /*0x425526*/
}



// ==== 0x00425530  AnimClass::Undeploy  this=AnimClass  sig=csp ====
char __thiscall AnimClass::Undeploy(AnimClass *this)
{
  Coord *AnimClass_field_0xC8; // eax
  CellClass *v3; // eax
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x425536*/
  if ( AnimClass_field_0xC8 && AnimClass_field_0xC8[2].__pad_C[201] ) /*0x425540*/
  {
    v5[0] = this->AnimClass_field_0x9C; /*0x425556*/
    v5[1] = *(_DWORD *)this->__pad_A0; /*0x425567*/
    v5[2] = this->AnimClass_field_0xA4; /*0x42556e*/
    v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x425572*/
    v3->flags[0] &= ~0x20000u; /*0x425588*/
  }
  if ( !(unsigned __int8)ObjectClass::Undeploy((ObjectClass *)this) ) /*0x42558c*/
    return 0; /*0x4255a7*/
  RemoveTarget((int)this); /*0x42559b*/
  return 1; /*0x4255a2*/
}



// ==== 0x004255B0  AnimClass::ProcessCraterFormation  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessCraterFormation(AnimClass *this)
{
  void *AnimClass_field_0xCC; // ecx
  Coord *AnimClass_field_0xC8; // eax
  _DWORD *v4; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x4255b6*/
  if ( AnimClass_field_0xCC ) /*0x4255be*/
    (*(void (__thiscall **)(void *, AnimClass *))(*(_DWORD *)AnimClass_field_0xCC + 96))(AnimClass_field_0xCC, this); /*0x4255c3*/
  BuildingClass::AimTurret((BuildingClass *)this, 0); /*0x4255ca*/
  Mixer::ReleaseChannel((Mixer *)this->AnimClass_field_0x1A0); /*0x4255d5*/
  if ( !this->__pad_194[4] ) /*0x4255da*/
  {
    AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x4255e4*/
    if ( AnimClass_field_0xC8 ) /*0x4255ec*/
    {
      if ( *(_DWORD *)&AnimClass_field_0xC8[2].__pad_C[112] != -1 ) /*0x4255f5*/
      {
        v4 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, _BYTE *))this->AnimClass_field_0x0 + 18))(this, v6); /*0x425607*/
        StartAudioControllerAt( /*0x425618*/
          *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[112],
          v4,
          (int **)&this->AnimClass_field_0x1B4);
      }
    }
  }
  return ObjectClass::Destroy((ObjectClass *)this); /*0x425624*/
}



// ==== 0x00425630  AnimClass::CheckDamageFlags  this=AnimClass  sig=csp ====
int __thiscall AnimClass::CheckDamageFlags(AnimClass *this)
{
  AnimClass **p_AnimClass_field_0x9C; // eax
  _DWORD *AnimClass_field_0xCC; // ecx
  int result; // eax

  p_AnimClass_field_0x9C = &this->AnimClass_field_0x9C; /*0x425633*/
  AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x425639*/
  result = (int)p_AnimClass_field_0x9C[2]; /*0x42564e*/
  if ( AnimClass_field_0xCC ) /*0x425651*/
    result += AnimClass_field_0xCC[41]; /*0x425669*/
  return result; /*0x42566b*/
}



// ==== 0x00425670  ObjectClass::ConstructionPositionTracker  this=ObjectClass  sig=csp ====
bool __thiscall ConstructionPositionTracker(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int *v4; // edi
  int *location; // ebp
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int *v9; // eax
  int v10; // ebx
  bool v11; // dl
  int v12; // eax
  signed int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int ptr_0; // edx
  signed int v21; // ebx
  int *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int GroundHeight; // eax
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  __int16 v36; // bp
  int *v37; // ecx
  int v38; // edx
  int v39; // ebx
  int v40; // ecx
  wchar_t *v41; // eax
  unsigned int v42; // ecx
  int *v43; // eax
  int v44; // edx
  int v45; // edi
  int v47; // [esp+Ch] [ebp-44h]
  double v48; // [esp+24h] [ebp-2Ch] BYREF
  double v49; // [esp+2Ch] [ebp-24h] BYREF
  int v50; // [esp+34h] [ebp-1Ch]
  int v51; // [esp+38h] [ebp-18h] BYREF
  int v52; // [esp+3Ch] [ebp-14h]
  int v53; // [esp+40h] [ebp-10h]
  int v54; // [esp+44h] [ebp-Ch] BYREF
  int v55; // [esp+48h] [ebp-8h]
  int v56; // [esp+4Ch] [ebp-4h]

  if ( !BYTE2(this->ironCurtainTimer[2]) ) /*0x425679*/
  {
    this->queuedMission = (int)dword_A8ED84; /*0x425690*/
    v3 = v55; /*0x425692*/
    this->missionStartTime = 0; /*0x425696*/
    *(_DWORD *)this->missionQueued = v3; /*0x42569c*/
    this->missionStatus = 0; /*0x42569f*/
  }
  v4 = &this->animation[4]; /*0x4256ad*/
  if ( this->animation[4] == Map_InvalidCoord_X /*0x4256d4*/
    && this->animation[5] == Map_InvalidCoord_Y
    && this->animation[6] == Map_InvalidCoord_Z
    || BYTE2(this->ironCurtainTimer[2]) )
  {
    if ( !this->isFallingDown[0] ) /*0x425b53*/
    {
      if ( BYTE2(this->ironCurtainTimer[2]) ) /*0x425b61*/
        goto LABEL_47; /*0x425b69*/
      v37 = Building::ComputePosition((Building *)this, &v54); /*0x425b7b*/
      v38 = v37[1]; /*0x425b7f*/
      v39 = v37[2]; /*0x425b82*/
      if ( *v37 == Map_InvalidCoord_X && v38 == Map_InvalidCoord_Y && v39 == Map_InvalidCoord_Z ) /*0x425b9d*/
      {
        *v4 = Map_InvalidCoord_X; /*0x425bad*/
        this->animation[5] = Map_InvalidCoord_Y; /*0x425bb4*/
        v40 = Map_InvalidCoord_Z; /*0x425bb7*/
        BYTE2(this->ironCurtainTimer[2]) = 1; /*0x425bbd*/
        this->animation[6] = v40; /*0x425bc4*/
        v41 = dword_A8ED84; /*0x425bc7*/
        this->missionStartTime = 1; /*0x425bd7*/
        this->queuedMission = (int)v41; /*0x425bdd*/
        *(_DWORD *)this->missionQueued = v55; /*0x425be3*/
        this->missionStatus = 1; /*0x425be6*/
        this->currentMission = 8 * *(_DWORD *)(this->missionTimer[0] + 848) + 1; /*0x425bfc*/
      }
      else
      {
        *v4 = *v37; /*0x425ba1*/
        this->animation[5] = v38; /*0x425ba3*/
        this->animation[6] = v39; /*0x425ba6*/
      }
    }
  }
  else
  {
    location = this->location; /*0x4256e2*/
    v6 = this->location[0]; /*0x4256ee*/
    v7 = this->location[1]; /*0x4256f0*/
    v56 = this->location[2]; /*0x4256f6*/
    v54 = *v4; /*0x4256fc*/
    v47 = v7 - this->animation[5]; /*0x425708*/
    v56 = this->animation[6]; /*0x425709*/
    v8 = Coord::Subtract((Coord *)&v51, v6 - v54, v47, 0); /*0x425718*/
    v54 = *v8; /*0x42571f*/
    v55 = v8[1]; /*0x42572a*/
    v56 = v8[2]; /*0x425731*/
    if ( (int)Coord::Length((Coord *)&v54) > 18 ) /*0x42573d*/
    {
      v54 = *location; /*0x4258f3*/
      ptr_0 = this->ptr_0; /*0x4258f7*/
      v55 = this->location[1]; /*0x4258fc*/
      v21 = this->location[2]; /*0x425904*/
      v22 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(ptr_0 + 72))(this, &v54); /*0x42590a*/
      v23 = *(_DWORD *)Cell::GetHeight((Cell *)&v49, v22, &this->animation[4]); /*0x425917*/
      v54 = *location; /*0x42591d*/
      v55 = this->location[1]; /*0x425924*/
      v56 = this->location[2]; /*0x425938*/
      v49 = (double)((__int16)v23 - 0x3FFF) * -0.00009587672516830327; /*0x425946*/
      v48 = (double)v55; /*0x425958*/
      Math::SinCos(v49); /*0x42595c*/
      LOWORD(v24) = Math::RoundToInt(v1); /*0x42596b*/
      LODWORD(v48) = v24; /*0x425974*/
      Math::ArcTan2(v49); /*0x42597e*/
      v1 = v1 * 18.0 + (double)v54; /*0x42598c*/
      LOWORD(v25) = Math::RoundToInt(v1); /*0x425990*/
      v51 = v25; /*0x42599d*/
      v52 = LODWORD(v48); /*0x4259a5*/
      v53 = v56; /*0x4259af*/
      if ( v21 > (int)(Cell::GetGroundHeight(&v51) + 2 * Map_CellHeight) ) /*0x4259c3*/
        GroundHeight = Map_MaxHeight + Cell::GetGroundHeight(&v51); /*0x4259e5*/
      else
        GroundHeight = Cell::GetGroundHeight(&v51); /*0x4259cf*/
      v27 = this->ptr_0; /*0x4259eb*/
      v53 = GroundHeight; /*0x4259ed*/
      (*(void (__thiscall **)(TechnoClass *, int *))(v27 + 436))(this, &v51); /*0x4259f8*/
    }
    else
    {
      if ( this->isFallingDown[0] ) /*0x425743*/
        goto LABEL_41; /*0x42574b*/
      v9 = Building::ComputePosition((Building *)this, &v54); /*0x425758*/
      v10 = *v9; /*0x42575d*/
      v51 = *v9; /*0x425765*/
      v52 = v9[1]; /*0x42576c*/
      v53 = v9[2]; /*0x425773*/
      v11 = (Coord::To_Cell((Coord *)&dword_87F7E8, &this->animation[4])->landType == 2 /*0x4257ab*/
          || Coord::To_Cell((Coord *)&dword_87F7E8, &this->animation[4])->landType == 6)
         && (*(int (__thiscall **)(TechnoClass *))(this->ptr_0 + 456))(this) <= Map_CellHeight;
      if ( v10 == Map_InvalidCoord_X && v52 == Map_InvalidCoord_Y && v53 == Map_InvalidCoord_Z /*0x4257ec*/
        || (v12 = this->passengers[0], v12 >= 7)
        || v11 )
      {
        *v4 = Map_InvalidCoord_X; /*0x425891*/
        this->animation[5] = Map_InvalidCoord_Y; /*0x425898*/
        this->animation[6] = Map_InvalidCoord_Z; /*0x4258a1*/
        BYTE2(this->ironCurtainTimer[2]) = 1; /*0x4258a4*/
        this->queuedMission = (int)dword_A8ED84; /*0x4258bc*/
        v18 = v55; /*0x4258be*/
        this->missionStartTime = 1; /*0x4258c2*/
        *(_DWORD *)this->missionQueued = v18; /*0x4258c8*/
        this->missionStatus = 1; /*0x4258cb*/
        v19 = 8 * *(_DWORD *)(this->missionTimer[0] + 848) + 1; /*0x4258da*/
        this->currentMission = v19; /*0x4258e1*/
        return v19; /*0x4258ed*/
      }
      this->passengers[0] = v12 + 1; /*0x4257f5*/
      v54 = *location; /*0x4257fd*/
      v55 = this->location[1]; /*0x425804*/
      v13 = this->location[2]; /*0x425808*/
      LODWORD(v49) = *v4; /*0x42580f*/
      HIDWORD(v49) = this->animation[5]; /*0x42581b*/
      v50 = this->animation[6]; /*0x425822*/
      if ( v13 > (int)(Cell::GetGroundHeight(&v49) + 2 * Map_CellHeight) ) /*0x42583b*/
        v14 = Map_MaxHeight + Cell::GetGroundHeight(&v49); /*0x42585d*/
      else
        v14 = Cell::GetGroundHeight(&v49); /*0x425847*/
      v15 = this->ptr_0; /*0x425863*/
      v50 = v14; /*0x425865*/
      (*(void (__thiscall **)(TechnoClass *, double *))(v15 + 436))(this, &v49); /*0x425870*/
      v16 = v52; /*0x42587a*/
      *v4 = v51; /*0x425880*/
      v17 = v53; /*0x425882*/
      this->animation[5] = v16; /*0x425886*/
      this->animation[6] = v17; /*0x425889*/
    }
    if ( !this->isFallingDown[0] ) /*0x4259fe*/
    {
      v28 = *location; /*0x425a0e*/
      v29 = this->location[1]; /*0x425a10*/
      v56 = this->location[2]; /*0x425a16*/
      LOWORD(v48) = v28 / 256; /*0x425a26*/
      v30 = v29 / 256; /*0x425a3a*/
      v31 = *location; /*0x425a3d*/
      WORD1(v48) = v30; /*0x425a3f*/
      v51 = v31; /*0x425a44*/
      v52 = this->location[1]; /*0x425a4d*/
      v32 = this->location[2]; /*0x425a53*/
      v54 = *location; /*0x425a56*/
      v53 = v32; /*0x425a5a*/
      v55 = this->location[1]; /*0x425a65*/
      v56 = this->location[2]; /*0x425a6d*/
      v33 = Cell::GetGroundHeight(&v54); /*0x425a76*/
      if ( v53 >= Map_MaxHeight + v33 ) /*0x425a89*/
      {
        v34 = this->location[1]; /*0x425a92*/
        v35 = this->location[2]; /*0x425a95*/
        v54 = *location; /*0x425a98*/
        v55 = v34; /*0x425aa0*/
        v56 = v35; /*0x425aaa*/
        if ( (Coord::To_Cell((Coord *)&dword_87F7E8, &v54)->flags & 0x100) == 0 ) /*0x425abc*/
        {
          v36 = LOWORD(v48); /*0x425ac2*/
          LOWORD(v48) += dword_89F6A0; /*0x425ad9*/
          WORD1(v48) = HIWORD(dword_89F6A0) + v30; /*0x425ae2*/
          if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v48) + 80) & 0x100) == 0 ) /*0x425b03*/
          {
            LOWORD(v48) = LOWORD(dword_89F688[0]) + v36; /*0x425b1b*/
            WORD1(v48) = HIWORD(dword_89F688[0]) + v30; /*0x425b20*/
            if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v48) + 80) & 0x100) == 0 ) /*0x425b41*/
              this->isFallingDown[0] = 1; /*0x425b47*/
          }
        }
      }
    }
  }
LABEL_41:
  if ( !BYTE2(this->ironCurtainTimer[2]) ) /*0x425c02*/
  {
    v42 = 0; /*0x425c18*/
    if ( *v4 != Map_InvalidCoord_X /*0x425c35*/
      || this->animation[5] != Map_InvalidCoord_Y
      || this->animation[6] != Map_InvalidCoord_Z )
    {
      v43 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, &v54); /*0x425c40*/
      v44 = *v43; /*0x425c45*/
      LODWORD(v48) = *v4; /*0x425c47*/
      LODWORD(v49) = v44; /*0x425c4b*/
      Math::CalcAngle((double)v43[1] - (double)this->animation[5], (double)SLODWORD(v48) - (double)v44); /*0x425c6a*/
      LOWORD(v49) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x425c83*/
      v42 = *(_DWORD *)(this->missionTimer[0] + 848) /*0x425ca3*/
          * ((-1 - (((unsigned int)((LODWORD(v49) >> 12) + 1) >> 1) & 7)) & 7);
    }
    v45 = this->missionTimer[0]; /*0x425cb7*/
    v19 = (int)dword_A8ED84 / 3 / *(_DWORD *)(v45 + 848); /*0x425cc5*/
    this->currentMission = v42 + (int)dword_A8ED84 / 3 % *(_DWORD *)(v45 + 848); /*0x425cce*/
    return v19; /*0x425cda*/
  }
LABEL_47:
  v19 = *(__int16 *)((*(int (__thiscall **)(TechnoClass *))(this->ptr_0 + 108))(this) + 6) / 2 - 1; /*0x425cdb*/
  if ( this->currentMission >= v19 ) /*0x425cf4*/
    LOBYTE(v19) = (*(bool (__thiscall **)(TechnoClass *))(this->ptr_0 + 248))(this); /*0x425cfa*/
  return v19; /*0x4258bb*/
}



// ==== 0x00425D10  Building::ComputePosition  this=Building  sig=csp ====
int *__thiscall Building::ComputePosition(Building *this, int *a2)
{
  double v2; // st7
  int *v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  Cell *v14; // eax
  Cell *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int16 v19; // dx
  __int16 v20; // di
  __int16 v21; // di
  __int16 v22; // bx
  int v23; // ecx
  int v24; // edx
  int v26; // edi
  int v27; // esi
  int v28; // edx
  __int16 v29; // cx
  double v30; // [esp+0h] [ebp-48h]
  int v31; // [esp+14h] [ebp-34h]
  int v32; // [esp+18h] [ebp-30h]
  __int16 v34[2]; // [esp+20h] [ebp-28h] BYREF
  __int16 v35[2]; // [esp+24h] [ebp-24h] BYREF
  __int16 v36[2]; // [esp+28h] [ebp-20h] BYREF
  int v37; // [esp+2Ch] [ebp-1Ch]
  __int16 v38[2]; // [esp+30h] [ebp-18h] BYREF
  int v39; // [esp+34h] [ebp-14h]
  int v40; // [esp+3Ch] [ebp-Ch]
  int v41; // [esp+40h] [ebp-8h]
  int v42; // [esp+44h] [ebp-4h]

  v3 = (int *)&this->__pad_C[144]; /*0x425d1d*/
  v4 = v3[1]; /*0x425d29*/
  v5 = (unsigned __int8)(*v3 >> 31) + *v3; /*0x425d32*/
  v37 = 10000; /*0x425d34*/
  v42 = v3[2]; /*0x425d3f*/
  v6 = v5; /*0x425d43*/
  v7 = v4; /*0x425d45*/
  v6 >>= 8; /*0x425d47*/
  v8 = (__int16)v6; /*0x425d4b*/
  LOWORD(v39) = v6; /*0x425d54*/
  v9 = (__int16)v6 - 5; /*0x425d61*/
  v10 = v7 / 256; /*0x425d67*/
  HIWORD(v39) = v10; /*0x425d6c*/
  *(_DWORD *)v34 = dword_89A150; /*0x425d71*/
  v32 = (__int16)v6; /*0x425d75*/
  if ( v9 < (__int16)v6 + 5 ) /*0x425d79*/
  {
    v11 = (__int16)v10; /*0x425d7f*/
    v31 = (__int16)v10; /*0x425d82*/
    v12 = (__int16)v10 + 5; /*0x425d86*/
    do /*0x425ec0*/
    {
      v13 = v11 - 5; /*0x425d89*/
      if ( v11 - 5 < v12 ) /*0x425d8e*/
      {
        do /*0x425eb2*/
        {
          v35[0] = v9; /*0x425da0*/
          v35[1] = v13; /*0x425da5*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v35, 1) ) /*0x425daa*/
          {
            v36[0] = v9; /*0x425dbb*/
            v36[1] = v13; /*0x425dc6*/
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x425dcb*/
            v15 = v14; /*0x425dd0*/
            if ( *(_DWORD *)&v14->__pad_E8[4] == 2 /*0x425e18*/
              && ((int)v14->Cell_field_0x140 & 0x100) == 0
              && (*((_DWORD *)Cell::GetNeighbourContent(v14, 6u) + 80) & 0x100) == 0
              && (*((_DWORD *)Cell::GetNeighbourContent(v15, 0) + 80) & 0x100) == 0 )
            {
              if ( *(_DWORD *)&v15->__pad_1C[8] == v39 ) /*0x425e27*/
              {
                v16 = 0; /*0x425e77*/
              }
              else
              {
                v41 = v13 - v31; /*0x425e44*/
                v40 = v9 - v32; /*0x425e48*/
                __asm /*0x425e4c*/
                {
                  fild [esp+40h+var_8]
                  fild [esp+40h+var_C]
                }
                __asm
                {
                  fld st
                  fmul st, st(1)
                  fld st(2)
                  fmul st, st(3)
                  faddp st(1), st
                  fstp [esp+48h+var_48]; double
                  fstp st
                  fstp st
                }
                Math::Sqrt(v30); /*0x425e68*/
                LOWORD(v16) = Math::RoundToInt(v2); /*0x425e70*/
              }
              if ( v9 > v32 || v13 > v31 ) /*0x425e83*/
                v16 -= 3; /*0x425e85*/
              if ( v16 < v37 ) /*0x425e8c*/
              {
                v37 = v16; /*0x425e8e*/
                v38[0] = v9; /*0x425e92*/
                v38[1] = v13; /*0x425e97*/
                *(_DWORD *)v34 = *(_DWORD *)v38; /*0x425ea0*/
              }
            }
            v8 = v32; /*0x425ea4*/
          }
          ++v13; /*0x425eac*/
          v12 = v31 + 5; /*0x425ead*/
        }
        while ( v13 < v31 + 5 ); /*0x425eb2*/
        v11 = v31; /*0x425eb8*/
      }
      ++v9; /*0x425eba*/
    }
    while ( v9 < v8 + 5 ); /*0x425ec0*/
    if ( *(_DWORD *)v34 != dword_89A150 ) /*0x425ed6*/
    {
      v17 = v34[0] - v8; /*0x425eeb*/
      v18 = v34[1] - v11; /*0x425eed*/
      v19 = 0; /*0x425ef1*/
      if ( v17 >= 0 ) /*0x425ef5*/
        v20 = v17 > 0; /*0x425efe*/
      else
        v20 = -1; /*0x425ef7*/
      if ( v18 >= 0 ) /*0x425f05*/
      {
        if ( v18 > 0 ) /*0x425f0c*/
          v19 = 1; /*0x425f0e*/
      }
      else
      {
        v19 = -1; /*0x425f07*/
      }
      v21 = v39 + v20; /*0x425f1b*/
      v22 = v19 + HIWORD(v39); /*0x425f21*/
      v38[0] = v21; /*0x425f28*/
      v38[1] = v19 + HIWORD(v39); /*0x425f2d*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425f3b*/
      {
        v23 = (v21 << 8) + 128; /*0x425f4a*/
        v24 = v22; /*0x425f50*/
        goto LABEL_41; /*0x425f53*/
      }
      v38[0] = v21; /*0x425f5d*/
      v38[1] = HIWORD(v39); /*0x425f62*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425f78*/
      {
        *a2 = (v21 << 8) + 128; /*0x425f99*/
        a2[1] = (v31 << 8) + 128; /*0x425fa2*/
        a2[2] = 0; /*0x425fa7*/
        return a2; /*0x425fb0*/
      }
      v38[1] = v22; /*0x425fb8*/
      v38[0] = v39; /*0x425fbd*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425fd3*/
      {
        *a2 = (v8 << 8) + 128; /*0x425ff0*/
        a2[1] = (v22 << 8) + 128; /*0x425ffa*/
        a2[2] = 0; /*0x425ffd*/
        return a2; /*0x426006*/
      }
    }
  }
  if ( dword_89A150 ) /*0x426011*/
  {
LABEL_39:
    *a2 = Map_InvalidCoord_X; /*0x426090*/
    a2[1] = Map_InvalidCoord_Y; /*0x4260a3*/
    a2[2] = Map_InvalidCoord_Z; /*0x4260ac*/
    return a2; /*0x4260b5*/
  }
  v26 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x426032*/
  v27 = 0; /*0x426034*/
  while ( 1 ) /*0x426046*/
  {
    v28 = ((v27 + v26) % 8) & 7; /*0x426046*/
    v29 = v39 + LOWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x426058*/
    LOWORD(v28) = HIWORD(v39) + HIWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x426061*/
    v38[0] = v29; /*0x426066*/
    v38[1] = v28; /*0x42606f*/
    *(_DWORD *)v34 = *(_DWORD *)v38; /*0x42607d*/
    if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v34) ) /*0x426081*/
      break; /*0x426081*/
    if ( ++v27 >= 8 ) /*0x42608e*/
      goto LABEL_39; /*0x42608e*/
  }
  v24 = v34[1]; /*0x4260bd*/
  v23 = (v34[0] << 8) + 128; /*0x4260c5*/
LABEL_41:
  *a2 = v23; /*0x4260cb*/
  a2[1] = (v24 << 8) + 128; /*0x4260dd*/
  a2[2] = 0; /*0x4260e0*/
  return a2; /*0x425faa*/
}



// ==== 0x004260F0  BuildingClass::IsCellPlaceable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsCellPlaceable(BuildingClass *this, __int16 *a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x426101*/
  if ( (*(_DWORD *)(result + 320) & 0x100) != 0 /*0x426142*/
    && this->?[2] - Map_CellHeight * *(char *)(result + 283) > 2 * Map_CellHeight )
  {
    if ( (*(_BYTE *)(result + 296) & 0xE0) != 0 ) /*0x42614b*/
    {
LABEL_4:
      LOBYTE(result) = 0; /*0x42614d*/
      return result; /*0x426154*/
    }
  }
  else
  {
    v4 = *(_DWORD *)(result + 236); /*0x426157*/
    switch ( v4 ) /*0x426160*/
    {
      case 3: /*0x426160*/
        goto LABEL_4; /*0x426160*/
      case 10: /*0x426160*/
        goto LABEL_4; /*0x426165*/
      case 4: /*0x426160*/
        goto LABEL_4; /*0x42616a*/
    }
    v5 = *(_DWORD *)(result + 68); /*0x42616c*/
    if ( v5 != -1 ) /*0x426172*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v5) + 680) ) /*0x42617e*/
        goto LABEL_4; /*0x42617e*/
    }
    if ( (*(_BYTE *)(result + 292) & 0xE0) != 0 ) /*0x426190*/
      goto LABEL_4; /*0x426190*/
    result = Map_CellHeight * *(char *)(result + 283) - this->?[2]; /*0x4261b2*/
    if ( result > 2 * Map_CellHeight ) /*0x4261b9*/
      goto LABEL_4; /*0x4261b9*/
  }
  LOBYTE(result) = 1; /*0x4261bc*/
  return result; /*0x42614d*/
}



// ==== 0x004261D0  ObjectClass::FindBuildingClass  this=ObjectClass  sig=csp ====
int FindBuildingClass(TechnoClass *this)
{
  int result; // eax
  int i; // edi
  _DWORD *v3; // esi
  CellClass *v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD v7[3]; // [esp+4h] [ebp-Ch] BYREF

  result = dword_A8E9B8; /*0x4261d0*/
  for ( i = 0; i < dword_A8E9B8; ++i ) /*0x4261dd*/
  {
    v3 = (_DWORD *)*((_DWORD *)dword_A8E9AC + i); /*0x4261e9*/
    if ( *(_BYTE *)(v3[50] + 864) ) /*0x4261f2*/
    {
      v7[0] = v3[39]; /*0x426208*/
      v7[1] = v3[40]; /*0x426214*/
      v7[2] = v3[41]; /*0x426220*/
      v4 = Coord::To_Cell((Coord *)&dword_87F7E8, v7); /*0x426224*/
      v5 = BuildingClass::FindByCellHash((BuildingClass *)v4); /*0x42622b*/
      if ( v5 != -1 ) /*0x426233*/
      {
        v6 = *(&dword_B0F4EC->ptr_0 + v5); /*0x42623b*/
        if ( v6 ) /*0x426240*/
          v3[53] = *(_DWORD *)(*((_DWORD *)dword_B054D4 + *(_DWORD *)(v6 + 192)) + 780); /*0x426256*/
      }
    }
    result = dword_A8E9B8; /*0x42625c*/
  }
  return result; /*0x42626b*/
}



// ==== 0x00426270  AnimClass::UpdateDamageRadius  this=AnimClass  sig=csp ====
int __thiscall AnimClass::UpdateDamageRadius(AnimClass *this, _DWORD *a2)
{
  char v3; // bp
  CellClass *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection((Input *)a2); /*0x426287*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x426294*/
  if ( Map_MaxHeight + Cell::GetGroundHeight(a2) <= a2[2] && (v4->flags[0] & 0x100) != 0 ) /*0x4262b3*/
  {
    LOBYTE(v4->altOccupationFlags) |= 1 << v3; /*0x4262c3*/
    result = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 14))(this); /*0x4262cd*/
    v4->altInfantryOwnerIndex = result; /*0x4262d0*/
  }
  else
  {
    LOBYTE(v4->occupationFlags) |= 1 << v3; /*0x4262e8*/
    result = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 14))(this); /*0x4262f2*/
    v4->infantryOwnerIndex = result; /*0x4262f5*/
  }
  return result; /*0x4262d3*/
}



// ==== 0x00426300  AnimClass::ProcessAreaEffect  this=AnimClass  sig=csp ====
char __stdcall AnimClass::ProcessAreaEffect(AnimClass *this)
{
  char v1; // bl
  CellClass *v2; // esi
  char result; // al

  v1 = Input::OffsetToDirection((Input *)this); /*0x426314*/
  v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this); /*0x426321*/
  if ( Cell::GetGroundHeight(this) + Map_MaxHeight > (int)this->AnimClass_field_0x8 ) /*0x426335*/
  {
    result = ~(1 << v1) & LOBYTE(v2->occupationFlags); /*0x426370*/
    LOBYTE(v2->occupationFlags) = result; /*0x426372*/
    if ( (result & 0x1C) == 0 ) /*0x42637a*/
      v2->infantryOwnerIndex = -1; /*0x42637c*/
  }
  else
  {
    result = ~(1 << v1) & LOBYTE(v2->altOccupationFlags); /*0x426347*/
    LOBYTE(v2->altOccupationFlags) = result; /*0x426349*/
    if ( (result & 0x1C) == 0 ) /*0x426351*/
      v2->altInfantryOwnerIndex = -1; /*0x426353*/
  }
  return result; /*0x42635a*/
}



// ==== 0x00426390  ObjectClass::COMStub_Return0_25  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_25(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426390*/
  return result; /*0x426392*/
}



// ==== 0x004263A0  ObjectClass::COMStub_26  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_26(ObjectClass *this)
{
  return 0; /*0x4263a2*/
}



// ==== 0x004263B0  ObjectClass::COMStub_Return0_32  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_32(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4263b0*/
  return result; /*0x4263b2*/
}



// ==== 0x004263C0  ObjectClass::COMStub_Ret8487648_36  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret8487648_36(ObjectClass *this)
{
  return (int)&g_INI_Key_Civilian.__pad_16D[15]; /*0x4263c5*/
}



// ==== 0x004263D0  ObjectClass::GetDrawPosition  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetDrawPosition(ObjectClass *this)
{
  int *v1; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v7; // [esp+18h] [ebp+4h]

  v1 = (int *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v6); /*0x4263dc*/
  v2 = *v1; /*0x4263e3*/
  v3 = v1[1]; /*0x4263e5*/
  v4 = v1[2]; /*0x4263e8*/
  *v7 = v2; /*0x4263f0*/
  v7[1] = v3; /*0x4263f2*/
  v7[2] = v4 + 50; /*0x4263f5*/
  return (int)v7; /*0x4263fa*/
}



// ==== 0x00426410  IUnknown::getCoordCenter  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::getCoordCenter(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x426410*/
  return result; /*0x426412*/
}



// ==== 0x00426420  ObjectClass::COMStub_Return0_49  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_49(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426420*/
  return result; /*0x426422*/
}



// ==== 0x00426430  ObjectClass::COMStub_50  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_50(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426430*/
  return result; /*0x426432*/
}



// ==== 0x00426440  ObjectClass::COMStub_Return0_67  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_67(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426440*/
}



// ==== 0x00426450  ObjectClass::COMStub_Return0_68  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_68(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426450*/
}



// ==== 0x00426460  ObjectClass::COMStub_Return0_85  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_85(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426460*/
}



// ==== 0x00426470  ObjectClass::COMStub_Return0_86  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_86(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426470*/
}



// ==== 0x00426480  ObjectClass::COMStub_Return0_87  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_87(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426480*/
}



// ==== 0x00426490  ObjectClass::COMStub_Return0_88  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_88(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426490*/
  return result; /*0x426492*/
}



// ==== 0x004264A0  ObjectClass::COMStub_Return0_92  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_92(ObjectClass *this)
{
  int result; // eax

  return result; /*0x4264a0*/
}



// ==== 0x004264B0  ObjectClass::COMStub_Return0_99  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_99(ObjectClass *this)
{
  int result; // eax

  return result; /*0x4264b0*/
}



// ==== 0x004264C0  ObjectClass::COMStub_107  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_107(ObjectClass *this)
{
  return 0; /*0x4264c2*/
}



// ==== 0x004264D0  IUnknown::COMStub_108  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::COMStub_108(IUnknown *this)
{
  return 0; /*0x4264d2*/
}



// ==== 0x004264E0  ObjectClass::COMStub_Return0_117  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_117(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4264e0*/
  return result; /*0x4264e2*/
}



// ==== 0x004264F0  ObjectClass::COMStub_Return0_118  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_118(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4264f0*/
  return result; /*0x4264f2*/
}



// ==== 0x00426500  ObjectClass::COMStub_Return0_119  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_119(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426500*/
  return result; /*0x426502*/
}



// ==== 0x00426510  ObjectClass::getCoordCenter2  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::getCoordCenter2(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x426510*/
  return result; /*0x426512*/
}



// ==== 0x00426520  ObjectClass::COMStub_Return0_121  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_121(ObjectClass *this)
{
  return 0; /*0x426522*/
}



// ==== 0x00426530  AnimClass::MissionStubReturnZero  this=AnimClass  sig=csp ====
int AnimClass::MissionStubReturnZero(AnimClass *this)
{
  return 456; /*0x426535*/
}



// ==== 0x00426540  AnimClass::MissionStubReturnZero2  this=AnimClass  sig=csp ====
int __stdcall AnimClass::MissionStubReturnZero2(AnimClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x426546*/
    return -2147467261; /*0x426548*/
  *a2 = 237448643; /*0x426556*/
  a2[1] = 298949647; /*0x42655e*/
  a2[2] = -1610610249; /*0x426567*/
  a2[3] = unk_7E967C; /*0x426570*/
  return 0; /*0x42654d*/
}



// ==== 0x00426580  AbstractClass::getAltitude  this=AnimClass  sig=csp ====
int __cdecl AbstractClass::getAltitude(AbstractClass *this)
{
  return 4; /*0x426585*/
}



// ==== 0x00426590  AnimClass::MissionStubReturnZero3  this=AnimClass  sig=csp ====
void *__thiscall AnimClass::MissionStubReturnZero3(AnimClass *this, char a2)
{
  AnimClass::Destruct(this); /*0x426593*/
  if ( (a2 & 1) != 0 ) /*0x42659d*/
    __3_YAXPAX_Z(this); /*0x4265a0*/
  return this; /*0x4265aa*/
}



// ==== 0x004265B0  Cell::GetHeight  this=Cell  sig=csp ====
_WORD *__thiscall Cell::GetHeight(Cell *this, int *a2, int *a3)
{
  double v3; // st7
  double v8; // [esp+0h] [ebp-18h]
  double v9; // [esp+8h] [ebp-10h]

  _EAX = a2; /*0x4265b0*/
  _ECX = a3; /*0x4265b8*/
  if ( *a2 == *a3 && a2[1] == a3[1] ) /*0x4265ca*/
    LOWORD(this->Cell_field_0x0) = 0; /*0x4265cc*/
  __asm { fild dword ptr [ecx] } /*0x4265d1*/
  __asm
  {
    fisub dword ptr [eax]
    fstp [esp+18h+var_10]; double
    fild dword ptr [eax+4]
    fisub dword ptr [ecx+4]
    fstp [esp+18h+var_18]; double
  }
  Math::CalcAngle(v8, v9); /*0x4265e8*/
  __asm { fsub ds:dbl_7E2820 } /*0x4265ed*/
  __asm { fmul ds:dbl_7E2818 }
  LOWORD(a2) = Math::RoundToInt(v3); /*0x426601*/
  this->Cell_field_0x0 = (int)a2; /*0x42660a*/
  return this; /*0x42660e*/
}



// ==== 0x00426620  ??4type_info_AAEAAV0_ABV0__Z  this=-  sig=csp ====
void *__thiscall __4type_info_AAEAAV0_ABV0__Z(void *this, int a2)
{
  return this; /*0x426622*/
}



// ==== 0x00426630  Locomotor::GetSpeed  this=Locomotor  sig=csp ====
int __thiscall Locomotor::GetSpeed(Locomotor *this)
{
  int Locomotor_field_00; // edx
  int result; // eax

  Locomotor_field_00 = this->Locomotor_field_00; /*0x426630*/
  result = *((_DWORD *)this + 2); /*0x426632*/
  if ( this->Locomotor_field_00 != -1 ) /*0x426638*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - Locomotor_field_00 >= result ) /*0x426644*/
      return 0; /*0x426649*/
    else
      result -= *(_DWORD *)&stru_A8EB00.?[416] - Locomotor_field_00; /*0x426646*/
  }
  return result; /*0x426648*/
}



// ==== 0x00426650  sub_426650  this=-  sig=ida-proto ====
int sub_426650()
{
  dword_89A1C8 = 0; /*0x426652*/
  dword_89A1CC = 0; /*0x426657*/
  dword_89A1D0 = 0; /*0x42665c*/
  dword_89A1D4 = 0; /*0x426661*/
  return 0; /*0x426666*/
}



// ==== 0x004266D0  AnimFile::method_4266D0  this=AnimFile  sig=csp ====
void __thiscall sub_4266D0(AnimFile *this)
{
  char v2; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = *((_BYTE *)this + 137); /*0x4266d6*/
  *(_DWORD *)this->__pad_0 = &AnimFile::`vftable'; /*0x4266dc*/
  if ( v2 ) /*0x4266e4*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 33) + 52))(*((_DWORD *)this + 33)); /*0x4266ee*/
    *((_BYTE *)this + 137) = 0; /*0x4266f1*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 899); /*0x4266f7*/
  *((_DWORD *)this + 33) = 0; /*0x4266fd*/
  if ( v3 ) /*0x426705*/
  {
    (**v3)(v3, 1); /*0x42670b*/
    *((_DWORD *)this + 899) = 0; /*0x42670d*/
  }
  if ( *((_DWORD *)this + 900) ) /*0x426713*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x42671e*/
    *((_DWORD *)this + 900) = 0; /*0x426726*/
  }
  *((_BYTE *)this + 136) = 0; /*0x42672c*/
  *(_DWORD *)this->__pad_0 = &Animate::`vftable'; /*0x426732*/
}



// ==== 0x00426740  sub_426740  this=-  sig=ida-proto ====
int sub_426740()
{
  return 2816; /*0x426745*/
}



// ==== 0x00426750  AnimFile::AddRef  this=AnimFile  sig=csp ====
char __userpurge AnimFile::AddRef@<al>(AnimFile *this, int a2@<ebx>, int a3)
{
  int v3; // ecx
  int v4; // esi
  ObjectClass *v6; // [esp+0h] [ebp-4h]

  v4 = v3; /*0x426751*/
  *(_DWORD *)(v3 + 132) = this; /*0x426759*/
  if ( !this ) /*0x42675f*/
    return 0; /*0x426789*/
  if ( !(*(unsigned __int8 (__thiscall **)(AnimFile *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x426763*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v4 + 132) + 28))(*(_DWORD *)(v4 + 132), 1); /*0x426774*/
    *(_BYTE *)(v4 + 137) = 1; /*0x426777*/
  }
  return sub_4267F0(v6, a2); /*0x426785*/
}



// ==== 0x00426790  AnimFile::Release  this=AnimFile  sig=csp ====
void __thiscall AnimFile::Release(AnimFile *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  if ( *((_BYTE *)this + 137) ) /*0x426796*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 33) + 52))(*((_DWORD *)this + 33)); /*0x4267a6*/
    *((_BYTE *)this + 137) = 0; /*0x4267a9*/
  }
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 899); /*0x4267af*/
  *((_DWORD *)this + 33) = 0; /*0x4267b5*/
  if ( v2 ) /*0x4267bd*/
  {
    (**v2)(v2, 1); /*0x4267c3*/
    *((_DWORD *)this + 899) = 0; /*0x4267c5*/
  }
  if ( *((_DWORD *)this + 900) ) /*0x4267cb*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x4267d6*/
    *((_DWORD *)this + 900) = 0; /*0x4267de*/
  }
  *((_BYTE *)this + 136) = 0; /*0x4267e4*/
}



// ==== 0x004267F0  ObjectClass::method_4267F0  this=ObjectClass  sig=csp ====
char __usercall sub_4267F0@<al>(ObjectClass *this, int a2@<ebx>)
{
  int v2; // ecx
  _DWORD **v3; // esi
  int v4; // edx
  _BYTE *v5; // ecx
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int v10; // edi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // cx
  _DWORD *v13; // edi
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]

  v3 = (_DWORD **)v2; /*0x4267f2*/
  if ( !*(_BYTE *)(v2 + 136) && *(_DWORD *)(v2 + 132) ) /*0x426803*/
  {
    *(_BYTE *)(v2 + 136) = 1; /*0x426820*/
    memset((void *)(v2 + 140), 0, 0x80u); /*0x426828*/
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(v2 + 132) + 36))( /*0x426838*/
      *(_DWORD *)(v2 + 132),
      v2 + 140,
      128,
      a2);
    memset(v3 + 1, 0, 0x80u); /*0x426847*/
    (*(void (__thiscall **)(_DWORD *, _DWORD **, int))(*v3[33] + 36))(v3[33], v3 + 1, 128); /*0x426857*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v3[33] + 40))(v3[33], 0, 1); /*0x426866*/
    (*(void (__thiscall **)(_DWORD *, _DWORD **, int))(*v3[33] + 36))(v3[33], v3 + 67, 1024); /*0x42687d*/
    v4 = 0; /*0x426880*/
    v5 = (char *)v3 + 269; /*0x426882*/
    do /*0x4268c7*/
    {
      v6 = *(v5 - 1); /*0x42688b*/
      LOBYTE(retaddr) = v5[1]; /*0x42688e*/
      BYTE1(retaddr) = *v5; /*0x426894*/
      v7 = v4 % 256; /*0x4268a7*/
      ++v4; /*0x4268ab*/
      v5 += 4; /*0x4268ac*/
      v8 = (int)v3 + 2 * v7 + v7 + 1292; /*0x4268b5*/
      *(_WORD *)v8 = (_WORD)retaddr; /*0x4268c1*/
      *(_BYTE *)(v8 + 2) = v6; /*0x4268c4*/
    }
    while ( v4 < 256 ); /*0x4268c7*/
    memset(v3 + 515, 0, 0x600u); /*0x4268d8*/
    (*(void (__thiscall **)(_DWORD *, _DWORD **))(*v3[33] + 36))(v3[33], v3 + 515); /*0x4268e8*/
    if ( !sub_426990((ObjectClass *)v3) ) /*0x4268ed*/
    {
      ((void (__thiscall *)(_DWORD **))(*v3)[2])(v3); /*0x4268fb*/
      return 0; /*0x426903*/
    }
    v10 = __2_YAPAXI_Z(0x20u); /*0x42690b*/
    if ( v10 ) /*0x426912*/
    {
      v11 = *((_WORD *)v3 + 80); /*0x426918*/
      v12 = *((_WORD *)v3 + 81); /*0x42691f*/
      *(_DWORD *)(v10 + 4) = v11; /*0x426926*/
      *(_DWORD *)(v10 + 8) = v12; /*0x42692c*/
      *(_DWORD *)(v10 + 12) = 0; /*0x426935*/
      *(_DWORD *)v10 = &XSurface_Vtable; /*0x42693c*/
      *(_DWORD *)(v10 + 16) = 1; /*0x426942*/
      Buffer::Init((Buffer *)(v10 + 20), 0, v12 * v11); /*0x426949*/
      *(_DWORD *)v10 = &BSurface_Vtable; /*0x42694e*/
    }
    else
    {
      v10 = 0; /*0x426956*/
    }
    v3[899] = (_DWORD *)v10; /*0x42695d*/
    v13 = (_DWORD *)__2_YAPAXI_Z(0x10000u); /*0x42696b*/
    v3[900] = v13; /*0x426974*/
    memset(v13, 0, 0x10000u); /*0x42697a*/
  }
  return *((_BYTE *)v3 + 136); /*0x4268fe*/
}



// ==== 0x00426990  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_426990(ObjectClass *this)
{
  char result; // al
  int v2; // esi
  int v3; // edx
  _WORD *i; // ecx

  if ( *(_DWORD *)&this->onBridge == 541478988 /*0x4269f7*/
    && this->location[0] == 1296649793
    && *(_WORD *)&this->isAliveFlag == 256
    && this->lastLayer <= 0xFFFFu
    && *(_WORD *)&this->isInLogic <= 0x100u
    && *(_WORD *)this->alignmentPadding99 == 1280
    && LOWORD(this->location[1]) == 320
    && HIWORD(this->location[1]) == 200 )
  {
    result = 1; /*0x4269ff*/
    if ( BYTE1(this->lineTrailer) <= 1u /*0x426a17*/
      && HIBYTE(this->lineTrailer) == 1
      && !BYTE2(this->lineTrailer)
      && !LOBYTE(this->lineTrailer) )
    {
      v2 = 0; /*0x426a23*/
      v3 = *(unsigned __int16 *)&this->alignmentPadding91[1]; /*0x426a25*/
      if ( !(_WORD)v3 ) /*0x426a2e*/
        return result; /*0x426a2e*/
      for ( i = (_WORD *)((char *)this + 2062); *i <= 0x100u; i += 3 ) /*0x426a30*/
      {
        if ( ++v2 >= v3 ) /*0x426a43*/
          return result; /*0x426a43*/
      }
    }
  }
  return 0; /*0x426a45*/
}



// ==== 0x00426A50  AnimFile::Load  this=AnimFile  sig=csp ====
int __thiscall AnimFile::Load(AnimFile *this)
{
  int result; // eax

  result = *((_DWORD *)this + 51); /*0x426a56*/
  if ( *((_BYTE *)this + 166) ) /*0x426a50*/
    --result; /*0x426a60*/
  return result; /*0x426a61*/
}



// ==== 0x00426A73  ObjectClass::?UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ  this=ObjectClass  sig=csp ====
struct Concurrency::details::VirtualProcessor *__thiscall _UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ(
        Concurrency::details::InternalContextBase *this)
{
  return (struct Concurrency::details::VirtualProcessor *)this->owningHouseIndex; /*0x426a79*/
}



// ==== 0x00426A80  AbstractClass::getMapCoords  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::getMapCoords(AbstractClass *this)
{
  return *((unsigned __int16 *)this + 81); /*0x426a89*/
}



// ==== 0x00426A90  AnimFile::ddtor  this=AnimFile  sig=csp ====
int __thiscall AnimFile::ddtor(AnimFile *this, int a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // edi
  int v14; // edx
  unsigned __int16 *v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edi
  int v20; // ebp
  int v21; // edx
  unsigned __int16 *v22; // ecx
  unsigned __int16 v23; // ax
  int v24; // ebx
  int v25; // ebp
  int v26; // edi
  int v27; // edx
  unsigned __int16 *v28; // ecx
  int v29; // eax
  int v30; // ecx
  unsigned __int16 *v31; // eax
  int v32; // ebx
  int v33; // ecx
  int v34; // [esp+2Ch] [ebp-18h]
  int i; // [esp+38h] [ebp-Ch]
  char *v36; // [esp+3Ch] [ebp-8h]
  __int16 *v37; // [esp+40h] [ebp-4h]

  if ( !*((_BYTE *)this + 136) ) /*0x426a96*/
    return 0; /*0x426aa0*/
  v4 = *((_DWORD *)this + 901); /*0x426aa9*/
  if ( v4 > a2 && (!*((_BYTE *)this + 166) || !*((_BYTE *)this + 167) || v4 != *((_DWORD *)this + 37) || a2) ) /*0x426ada*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 899) + 24))(*((_DWORD *)this + 899), 0); /*0x426af5*/
    *((_DWORD *)this + 901) = -1; /*0x426af8*/
  }
  if ( *((_DWORD *)this + 901) != a2 ) /*0x426b04*/
  {
    v5 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 899) + 92))(*((_DWORD *)this + 899), 0, 0); /*0x426b19*/
    v6 = *((_DWORD *)this + 899); /*0x426b1c*/
    v36 = (char *)v5; /*0x426b22*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 128))(v6); /*0x426b34*/
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 124))(v6) * v7; /*0x426b39*/
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 112))(v6) * v8; /*0x426b43*/
    v10 = *((_DWORD *)this + 901); /*0x426b46*/
    for ( i = v9; v10 != a2; v10 = *((_DWORD *)this + 901) ) /*0x426b52*/
    {
      v11 = v10 + 1; /*0x426b58*/
      *((_DWORD *)this + 901) = v11; /*0x426b59*/
      v12 = v11; /*0x426b5f*/
      if ( v11 < *((_DWORD *)this + 51) ) /*0x426b67*/
      {
        v13 = 0; /*0x426b6f*/
        v14 = *((unsigned __int16 *)this + 73); /*0x426b71*/
        if ( (_WORD)v14 ) /*0x426b7a*/
        {
          v15 = (unsigned __int16 *)((char *)this + 2060); /*0x426b80*/
          while ( 1 ) /*0x426b86*/
          {
            HIWORD(v16) = 0; /*0x426b86*/
            if ( *v15 <= v12 ) /*0x426b8d*/
            {
              LOWORD(v16) = *v15; /*0x426b88*/
              if ( v16 + v15[1] > v12 ) /*0x426b99*/
                break; /*0x426b99*/
            }
            ++v13; /*0x426b9b*/
            v15 += 3; /*0x426b9c*/
            if ( v13 >= v14 ) /*0x426ba1*/
              goto LABEL_42; /*0x426ba1*/
          }
          if ( v13 != -1 ) /*0x426bab*/
          {
            if ( *((_BYTE *)this + 136) && *((_DWORD *)this + 902) != v13 ) /*0x426bc1*/
            {
              v17 = *((_DWORD *)this + 33); /*0x426bc3*/
              *((_DWORD *)this + 902) = v13; /*0x426bce*/
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 40))(v17, (v13 << 16) + 2816, 0); /*0x426bde*/
              (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 33) + 36))( /*0x426c15*/
                *((_DWORD *)this + 33),
                *((_DWORD *)this + 900),
                *((unsigned __int16 *)this + 3 * v13 + 1032) + 2 * *((unsigned __int16 *)this + 3 * v13 + 1031) + 8);
            }
            v18 = 3 * v13; /*0x426c18*/
            v19 = *((_DWORD *)this + 900); /*0x426c1b*/
            v20 = v12 - *((unsigned __int16 *)this + v18 + 1030); /*0x426c38*/
            v21 = 2 * *((unsigned __int16 *)this + v18 + 1031) + 8; /*0x426c3c*/
            v22 = (unsigned __int16 *)(v19 + 8); /*0x426c40*/
            if ( v20 > 0 ) /*0x426c43*/
            {
              do /*0x426c50*/
              {
                v23 = *v22++; /*0x426c47*/
                v21 += v23; /*0x426c4d*/
                --v20; /*0x426c4f*/
              }
              while ( v20 ); /*0x426c50*/
            }
            v37 = (__int16 *)(v19 + v21 + 2); /*0x426c58*/
            if ( v19 + v21 != -2 ) /*0x426c5c*/
            {
              v24 = *((_DWORD *)this + 901); /*0x426c62*/
              v25 = 0; /*0x426c6e*/
              v34 = v24; /*0x426c72*/
              if ( v24 < *((_DWORD *)this + 51) ) /*0x426c7a*/
              {
                v26 = 0; /*0x426c82*/
                v27 = *((unsigned __int16 *)this + 73); /*0x426c84*/
                if ( (_WORD)v27 ) /*0x426c8d*/
                {
                  v28 = (unsigned __int16 *)((char *)this + 2060); /*0x426c93*/
                  while ( 1 ) /*0x426c99*/
                  {
                    HIWORD(v29) = 0; /*0x426c99*/
                    if ( *v28 <= v24 ) /*0x426ca0*/
                    {
                      LOWORD(v29) = *v28; /*0x426c9b*/
                      v24 = *((_DWORD *)this + 901); /*0x426cac*/
                      if ( v29 + v28[1] > v34 ) /*0x426cb2*/
                        break; /*0x426cb2*/
                    }
                    ++v26; /*0x426cb4*/
                    v28 += 3; /*0x426cb5*/
                    if ( v26 >= v27 ) /*0x426cba*/
                      goto LABEL_41; /*0x426cba*/
                  }
                  if ( v26 != -1 ) /*0x426cc4*/
                  {
                    if ( *((_BYTE *)this + 136) && *((_DWORD *)this + 902) != v26 ) /*0x426cda*/
                    {
                      v30 = *((_DWORD *)this + 33); /*0x426cdc*/
                      *((_DWORD *)this + 902) = v26; /*0x426ce7*/
                      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 40))(v30, (v26 << 16) + 2816, 0); /*0x426cf7*/
                      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 33) + 36))( /*0x426d28*/
                        *((_DWORD *)this + 33),
                        *((_DWORD *)this + 900),
                        *((unsigned __int16 *)this + 3 * v26 + 1032)
                      + 2 * *((unsigned __int16 *)this + 3 * v26 + 1031)
                      + 8);
                      AnimFile::Check(this, v26); /*0x426d2e*/
                      v25 = 0; /*0x426d33*/
                      v24 = v34; /*0x426d37*/
                    }
                    v31 = (unsigned __int16 *)(*((_DWORD *)this + 900) + 8); /*0x426d46*/
                    v32 = v24 - *((unsigned __int16 *)this + 3 * v26 + 1030); /*0x426d51*/
                    if ( v32 >= 0 ) /*0x426d53*/
                    {
                      v33 = v32 + 1; /*0x426d55*/
                      do /*0x426d69*/
                      {
                        v25 = *v31++; /*0x426d5a*/
                        if ( (unsigned __int16)v25 >= 2u ) /*0x426d63*/
                          v25 -= 2; /*0x426d65*/
                        --v33; /*0x426d68*/
                      }
                      while ( v33 ); /*0x426d69*/
                    }
                  }
                }
              }
LABEL_41:
              sub_4270D0((int)this, (unsigned int)v37, v37, v25, v36, i); /*0x426d6b*/
            }
          }
        }
      }
LABEL_42:
      if ( *((_DWORD *)this + 901) > *((_DWORD *)this + 51) ) /*0x426d90*/
        *((_DWORD *)this + 901) = 0; /*0x426d92*/
    }
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 899) + 96))(*((_DWORD *)this + 899)); /*0x426db6*/
  }
  return *((_DWORD *)this + 899); /*0x426aa2*/
}



// ==== 0x00426DD0  AnimFile::Check  this=AnimFile  sig=csp ====
int __thiscall AnimFile::Check(AnimFile *this, int a2)
{
  return *((unsigned __int16 *)this + 3 * a2 + 1032) + 2 * *((unsigned __int16 *)this + 3 * a2 + 1031) + 8; /*0x426df3*/
}



// ==== 0x00426E80  ObjectClass::method_426E80  this=ObjectClass  sig=csp ====
int __thiscall sub_426E80(UnitClass *this, int a2)
{
  int result; // eax
  int v3; // esi
  char *i; // edx
  int v5; // ecx

  if ( a2 >= this->missionTimer[1] ) /*0x426e8f*/
    return -1; /*0x426e8f*/
  result = 0; /*0x426e93*/
  v3 = *(unsigned __int16 *)&this->alignmentPadding91[1]; /*0x426e95*/
  if ( !(_WORD)v3 ) /*0x426e9e*/
    return -1; /*0x426ec3*/
  for ( i = &this->ToolTipText[292]; ; i += 6 ) /*0x426ea0*/
  {
    HIWORD(v5) = 0; /*0x426ea6*/
    if ( *(unsigned __int16 *)i <= a2 ) /*0x426ead*/
    {
      LOWORD(v5) = *(_WORD *)i; /*0x426ea8*/
      if ( v5 + *((unsigned __int16 *)i + 1) > a2 ) /*0x426eb9*/
        break; /*0x426eb9*/
    }
    if ( ++result >= v3 ) /*0x426ec1*/
      return -1; /*0x426ec1*/
  }
  return result; /*0x426ec6*/
}



// ==== 0x00426ED0  ObjectClass::method_426ED0  this=ObjectClass  sig=csp ====
int __thiscall sub_426ED0(UnitClass *this, int a2)
{
  int v3; // esi
  int v4; // edx
  char *i; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // edx
  unsigned __int16 v10; // si
  unsigned __int16 v11; // cx
  int v12; // edi
  int v13; // ebx
  int v14; // edx
  unsigned __int16 *v15; // ecx
  unsigned __int16 v16; // ax

  if ( a2 >= this->missionTimer[1] ) /*0x426ee0*/
    return 0; /*0x426ee0*/
  v3 = 0; /*0x426ee4*/
  v4 = *(unsigned __int16 *)&this->alignmentPadding91[1]; /*0x426ee6*/
  if ( !(_WORD)v4 ) /*0x426eef*/
    return 0; /*0x426eef*/
  for ( i = &this->ToolTipText[292]; ; i += 6 ) /*0x426ef1*/
  {
    HIWORD(v6) = 0; /*0x426ef7*/
    if ( *(unsigned __int16 *)i <= a2 ) /*0x426efe*/
    {
      LOWORD(v6) = *(_WORD *)i; /*0x426ef9*/
      if ( v6 + *((unsigned __int16 *)i + 1) > a2 ) /*0x426f0a*/
        break; /*0x426f0a*/
    }
    if ( ++v3 >= v4 ) /*0x426f12*/
      return 0; /*0x426f12*/
  }
  if ( v3 == -1 ) /*0x426f20*/
    return 0; /*0x426f14*/
  if ( LOBYTE(this->parachute) && *((_DWORD *)this + 902) != v3 ) /*0x426f32*/
  {
    v8 = *(_DWORD *)this->hasParachute; /*0x426f34*/
    *((_DWORD *)this + 902) = v3; /*0x426f3f*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 40))(v8, (v3 << 16) + 2816, 0); /*0x426f50*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)this->hasParachute + 36))( /*0x426f87*/
      *(_DWORD *)this->hasParachute,
      *((_DWORD *)this + 900),
      *(unsigned __int16 *)&this->ToolTipText[6 * v3 + 296]
    + 2 * *(unsigned __int16 *)&this->ToolTipText[6 * v3 + 294]
    + 8);
  }
  v9 = 3 * v3; /*0x426f8a*/
  v10 = *(_WORD *)&this->ToolTipText[6 * v3 + 292]; /*0x426f8f*/
  v11 = *(_WORD *)&this->ToolTipText[2 * v9 + 294]; /*0x426f99*/
  v12 = *((_DWORD *)this + 900); /*0x426fa4*/
  v13 = a2 - v10; /*0x426faa*/
  v14 = 2 * v11 + 8; /*0x426fac*/
  v15 = (unsigned __int16 *)(v12 + 8); /*0x426fb2*/
  if ( v13 > 0 ) /*0x426fb5*/
  {
    do /*0x426fc2*/
    {
      v16 = *v15++; /*0x426fb9*/
      v14 += v16; /*0x426fbf*/
      --v13; /*0x426fc1*/
    }
    while ( v13 ); /*0x426fc2*/
  }
  return v12 + v14 + 2; /*0x426f14*/
}



// ==== 0x00426FD0  ObjectClass::method_426FD0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_426FD0(UnitClass *this, int a2)
{
  int v2; // ebx
  unsigned int result; // eax
  int v5; // esi
  int v6; // edx
  char *i; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned __int16 *v10; // ecx
  int v11; // ebx
  int v12; // edx

  v2 = a2; /*0x426fd1*/
  result = 0; /*0x426fda*/
  if ( a2 < this->missionTimer[1] ) /*0x426fe2*/
  {
    v5 = 0; /*0x426fe6*/
    v6 = *(unsigned __int16 *)&this->alignmentPadding91[1]; /*0x426fe8*/
    if ( (_WORD)v6 ) /*0x426ff1*/
    {
      for ( i = &this->ToolTipText[292]; ; i += 6 ) /*0x426ff3*/
      {
        HIWORD(v8) = 0; /*0x426ff9*/
        if ( *(unsigned __int16 *)i <= a2 ) /*0x427000*/
        {
          LOWORD(v8) = *(_WORD *)i; /*0x426ffb*/
          if ( v8 + *((unsigned __int16 *)i + 1) > a2 ) /*0x42700c*/
            break; /*0x42700c*/
        }
        if ( ++v5 >= v6 ) /*0x427014*/
          return 0; /*0x427014*/
      }
      if ( v5 == -1 ) /*0x427022*/
        return 0; /*0x427022*/
      if ( LOBYTE(this->parachute) && *((_DWORD *)this + 902) != v5 ) /*0x427034*/
      {
        v9 = *(_DWORD *)this->hasParachute; /*0x427036*/
        *((_DWORD *)this + 902) = v5; /*0x427041*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 40))(v9, (v5 << 16) + 2816, 0); /*0x427052*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)this->hasParachute + 36))( /*0x427083*/
          *(_DWORD *)this->hasParachute,
          *((_DWORD *)this + 900),
          *(unsigned __int16 *)&this->ToolTipText[6 * v5 + 296]
        + 2 * *(unsigned __int16 *)&this->ToolTipText[6 * v5 + 294]
        + 8);
        v2 = a2; /*0x427086*/
      }
      v10 = (unsigned __int16 *)(*((_DWORD *)this + 900) + 8); /*0x427095*/
      v11 = v2 - *(unsigned __int16 *)&this->ToolTipText[6 * v5 + 292]; /*0x4270a0*/
      if ( v11 < 0 ) /*0x4270a2*/
        return 0; /*0x427016*/
      v12 = v11 + 1; /*0x4270a8*/
      do /*0x4270bc*/
      {
        result = *v10++; /*0x4270ad*/
        if ( (unsigned __int16)result >= 2u ) /*0x4270b6*/
          result -= 2; /*0x4270b8*/
        --v12; /*0x4270bb*/
      }
      while ( v12 ); /*0x4270bc*/
    }
  }
  return result; /*0x427018*/
}



// ==== 0x004270D0  sub_4270D0  this=AnimFile  sig=csp ====
char __fastcall sub_4270D0(int a1, unsigned int a2, __int16 *a3, int a4, char *a5, int a6)
{
  signed int v7; // ecx
  void *v8; // ebx
  int v9; // ebp
  char *v10; // esi
  char *i; // ebp
  char v12; // al
  unsigned int v13; // ecx
  char *v14; // edi
  unsigned int v15; // esi
  int v16; // eax
  char v17; // al
  char *v18; // edi
  int v19; // eax
  char *v20; // edi
  void *v21; // [esp+14h] [ebp+4h]

  if ( !a4 ) /*0x4270da*/
    return 1; /*0x4270e2*/
  v7 = a4 - 2; /*0x4270ed*/
  v8 = a5; /*0x4270f0*/
  v9 = *a3; /*0x4270f2*/
  v10 = (char *)(a3 + 1); /*0x4270f5*/
  v21 = a5; /*0x4270f8*/
  if ( a4 == 2 ) /*0x4270fe*/
    return 1; /*0x427106*/
  if ( v9 ) /*0x427111*/
  {
    if ( v9 == 1 && v7 >= 3 && v10[v7 - 3] == (char)0x80 && !v10[v7 - 2] && !v10[v7 - 1] ) /*0x42713e*/
    {
      for ( i = v10; ; i += a2 ) /*0x427146*/
      {
        while ( 1 ) /*0x4271ab*/
        {
          while ( 1 ) /*0x427171*/
          {
            while ( 1 ) /*0x42714e*/
            {
              while ( 1 ) /*0x427148*/
              {
                v12 = *i++; /*0x427148*/
                if ( v12 <= 0 ) /*0x42714e*/
                  break; /*0x42714e*/
                a2 = v12; /*0x427157*/
                v13 = (unsigned int)v12 >> 2; /*0x42715b*/
                qmemcpy(v8, i, 4 * v13); /*0x42715e*/
                v14 = (char *)v8 + 4 * v13; /*0x42715e*/
                v8 = (char *)v8 + v12; /*0x427162*/
                v21 = v8; /*0x427167*/
                qmemcpy(v14, &i[4 * v13], v12 & 3); /*0x42716b*/
                i += v12; /*0x42716d*/
              }
              if ( v12 ) /*0x427171*/
                break; /*0x427171*/
              LOBYTE(a2) = i[1]; /*0x42717e*/
              BYTE1(a2) = a2; /*0x427180*/
              v15 = (unsigned __int8)*i; /*0x427188*/
              v16 = a2 << 16; /*0x42718a*/
              LOWORD(v16) = a2; /*0x42718f*/
              memset32(v8, v16, v15 >> 2); /*0x427195*/
              i += 2; /*0x427199*/
              memset((char *)v8 + 4 * (v15 >> 2), a2, v15 & 3); /*0x42719d*/
              v8 = (char *)v8 + v15; /*0x4271a1*/
              v21 = v8; /*0x4271a3*/
            }
            v17 = v12 + 0x80; /*0x4271a9*/
            if ( !v17 ) /*0x4271ab*/
              break; /*0x4271ab*/
            v8 = (char *)v8 + v17; /*0x42722e*/
            v21 = v8; /*0x427230*/
          }
          a2 = *(unsigned __int16 *)i; /*0x4271af*/
          i += 2; /*0x4271b3*/
          if ( (__int16)a2 <= 0 ) /*0x4271b9*/
            break; /*0x4271b9*/
LABEL_22:
          v8 = (char *)v8 + a2; /*0x4271ff*/
          v21 = v8; /*0x427201*/
        }
        if ( !a2 ) /*0x4271bd*/
          return 1; /*0x4271bd*/
        a2 -= 0x8000; /*0x4271c3*/
        if ( (int)a2 >= 0x4000 ) /*0x4271cf*/
        {
          v18 = (char *)v8; /*0x4271d3*/
          a2 -= 0x4000; /*0x4271d8*/
          LOBYTE(v8) = *i; /*0x4271de*/
          BYTE1(v8) = *i++; /*0x4271e2*/
          v19 = (_DWORD)v8 << 16; /*0x4271e9*/
          LOWORD(v19) = (_WORD)v8; /*0x4271ec*/
          v8 = v21; /*0x4271ef*/
          memset32(v18, v19, a2 >> 2); /*0x4271f6*/
          memset(&v18[4 * (a2 >> 2)], v19, a2 & 3); /*0x4271fd*/
          goto LABEL_22; /*0x4271fd*/
        }
        qmemcpy(v8, i, 4 * (a2 >> 2)); /*0x427215*/
        v20 = (char *)v8 + 4 * (a2 >> 2); /*0x427215*/
        v8 = (char *)v8 + a2; /*0x427219*/
        v21 = v8; /*0x42721e*/
        qmemcpy(v20, &i[4 * (a2 >> 2)], a2 & 3); /*0x427222*/
      }
    }
    return 0; /*0x427120*/
  }
  else if ( v7 == a6 ) /*0x42723d*/
  {
    qmemcpy(a5, v10, v7); /*0x427254*/
    return 1; /*0x42725d*/
  }
  else
  {
    return 0; /*0x427245*/
  }
}



// ==== 0x00427270  Animate::setMapCoords  this=Animate  sig=csp ====
std::locale::facet *__thiscall AbstractClass::setMapCoords(Animate *this, char a2)
{
  this->m_0 = (int)&Animate::`vftable'; /*0x427279*/
  if ( (a2 & 1) != 0 ) /*0x42727f*/
    __3_YAXPAX_Z(this); /*0x427282*/
  return (std::locale::facet *)this; /*0x42728c*/
}



// ==== 0x00427290  AnimFile::Stub  this=AnimFile  sig=csp ====
char *__thiscall AnimFile::Stub(AnimFile *this)
{
  return (char *)this + 1292; /*0x427296*/
}



// ==== 0x004272A0  AnimFile::QueryInterface  this=AnimFile  sig=csp ====
void *__thiscall AnimFile::QueryInterface(AnimFile *this, char a2)
{
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v3 = *((_BYTE *)this + 137); /*0x4272a6*/
  *(_DWORD *)this->__pad_0 = &AnimFile::`vftable'; /*0x4272ac*/
  if ( v3 ) /*0x4272b4*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 33) + 52))(*((_DWORD *)this + 33)); /*0x4272be*/
    *((_BYTE *)this + 137) = 0; /*0x4272c1*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 899); /*0x4272c7*/
  *((_DWORD *)this + 33) = 0; /*0x4272cd*/
  if ( v4 ) /*0x4272d5*/
  {
    (**v4)(v4, 1); /*0x4272db*/
    *((_DWORD *)this + 899) = 0; /*0x4272dd*/
  }
  if ( *((_DWORD *)this + 900) ) /*0x4272e3*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x4272ee*/
    *((_DWORD *)this + 900) = 0; /*0x4272f6*/
  }
  *((_BYTE *)this + 136) = 0; /*0x427300*/
  *(_DWORD *)this->__pad_0 = &Animate::`vftable'; /*0x427308*/
  if ( (a2 & 1) != 0 ) /*0x42730e*/
    __3_YAXPAX_Z(this); /*0x427311*/
  return this; /*0x42731b*/
}



// ==== 0x00427320  sub_427320  this=-  sig=ida-proto ====
void sub_427320()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42732c*/
  dbl_89A1F8 = Math::Sqrt(v0 + v0); /*0x42733e*/
}



// ==== 0x00427350  sub_427350  this=-  sig=ida-proto ====
void sub_427350()
{
  dbl_89A248 = dbl_89A1F8 / 60.0; /*0x42735c*/
}



// ==== 0x00427370  sub_427370  this=-  sig=ida-proto ====
void sub_427370()
{
  dbl_89A230 = 1.0 / dbl_89A248; /*0x42737c*/
}



// ==== 0x00427390  sub_427390  this=-  sig=ida-proto ====
void sub_427390()
{
  dbl_89A228 = 0.0174532925199433 * 45.0; /*0x42739c*/
}



// ==== 0x004273B0  sub_4273B0  this=-  sig=ida-proto ====
void sub_4273B0()
{
  dbl_89A200 = 0.0174532925199433 * 60.0; /*0x4273bc*/
}



// ==== 0x004273D0  sub_4273D0  this=-  sig=ida-proto ====
void sub_4273D0()
{
  dbl_89A1D8 = 0.0174532925199433 * 90.0; /*0x4273dc*/
}



// ==== 0x004273F0  sub_4273F0  this=-  sig=ida-proto ====
__int64 sub_4273F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89A1D8 - dbl_89A200); /*0x427402*/
  result = Math::RoundToInt(v0 * dbl_89A1F8 * 0.5); /*0x427416*/
  dword_89A250 = result; /*0x42741b*/
  return result; /*0x427420*/
}



// ==== 0x00427430  sub_427430  this=-  sig=ida-proto ====
void sub_427430()
{
  dbl_89A208 = Math::ArcTan((double)dword_89A250 * 0.00390625); /*0x427447*/
}



// ==== 0x00427460  sub_427460  this=-  sig=ida-proto ====
void sub_427460()
{
  dbl_89A220 = Math::ArcTan((double)(2 * dword_89A250) / dbl_89A1F8); /*0x427482*/
}



// ==== 0x00427490  sub_427490  this=-  sig=ida-proto ====
__int64 sub_427490()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A250) + 0.5); /*0x4274ab*/
  dword_89A244 = result; /*0x4274b0*/
  return result; /*0x4274b6*/
}



// ==== 0x004274C0  sub_4274C0  this=-  sig=ida-proto ====
int sub_4274C0()
{
  word_89A1F0 = 0; /*0x4274c2*/
  word_89A1F2 = 0; /*0x4274c8*/
  return 0; /*0x4274ce*/
}



// ==== 0x004274D0  sub_4274D0  this=-  sig=ida-proto ====
int sub_4274D0()
{
  dword_89A210 = 0; /*0x4274d2*/
  dword_89A214 = 0; /*0x4274d7*/
  dword_89A218 = 0; /*0x4274dc*/
  return 0; /*0x4274e1*/
}



// ==== 0x004274F0  sub_4274F0  this=-  sig=ida-proto ====
int sub_4274F0()
{
  dword_89A240 = 0; /*0x4274f5*/
  dword_89A238 = 128; /*0x4274ff*/
  dword_89A23C = 128; /*0x427504*/
  return 128; /*0x427509*/
}



// ==== 0x00427510  sub_427510  this=-  sig=ida-proto ====
int sub_427510()
{
  dword_89A1E0 = 0; /*0x427512*/
  dword_89A1E4 = 0; /*0x427517*/
  dword_89A1E8 = 0; /*0x42751c*/
  dword_89A1EC = 0; /*0x427521*/
  return 0; /*0x427526*/
}



// ==== 0x00427530  AnimTypeClass::Construct  this=AnimTypeClass  sig=csp ====
_DWORD *__thiscall AnimTypeClass::Construct(AnimTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  AnimTypeClass **v6; // ecx

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x42753a*/
  this->MiddleFrameIndex = -1; /*0x427544*/
  this->MiddleFrameWidth = 0; /*0x42754a*/
  this->MiddleFrameHeight = 0; /*0x427550*/
  *(_DWORD *)this->__pad_2A0 = 0; /*0x427556*/
  this->AnimTypeClass_field_2A4 = 0; /*0x42755c*/
  this->Damage[0] = 0; /*0x427562*/
  this->Damage[1] = 0; /*0x427568*/
  this->Rate = 1; /*0x42756e*/
  this->Start = 0; /*0x427578*/
  this->LoopStart = 0; /*0x42757e*/
  this->LoopEnd = 0; /*0x427584*/
  this->End = 0; /*0x42758a*/
  this->LoopCount = 0; /*0x427590*/
  this->Next = 0; /*0x427596*/
  this->SpawnsParticle = -1; /*0x42759c*/
  this->NumParticles = 0; /*0x4275a2*/
  this->DetailLevel = 0; /*0x4275a8*/
  this->TranslucencyDetailLevel = 0; /*0x4275ae*/
  this->RandomLoopDelay[0] = 0; /*0x4275b4*/
  this->RandomLoopDelay[1] = 0; /*0x4275ba*/
  this->RandomRate[0] = 0; /*0x4275c0*/
  this->RandomRate[1] = 0; /*0x4275c6*/
  this->Translucency = 0; /*0x4275cc*/
  this->Spawns = 0; /*0x4275d2*/
  this->SpawnCount = 0; /*0x4275d8*/
  this->Report = -1; /*0x4275de*/
  this->StopSound = -1; /*0x4275e4*/
  this->BounceAnim = 0; /*0x4275ea*/
  this->ExpireAnim = 0; /*0x4275f0*/
  this->TrailerAnim = 0; /*0x4275f6*/
  this->TrailerSeperation = 0; /*0x4275fc*/
  this->Elasticity[0] = -1610612736; /*0x427602*/
  this->Elasticity[1] = 1072273817; /*0x42760c*/
  this->MinZVel[0] = 0; /*0x42761b*/
  this->MinZVel[1] = 1074528256; /*0x427621*/
  this->AnimTypeClass_field_double_320[0] = 0; /*0x427627*/
  this->AnimTypeClass_field_double_320[1] = 1074528256; /*0x42762d*/
  this->MaxXYVel[0] = 0; /*0x427633*/
  this->MaxXYVel[1] = 1076756480; /*0x427639*/
  this->Warhead = 0; /*0x427643*/
  this->DamageRadius = 0; /*0x427649*/
  this->TiberiumSpawnType = 0; /*0x42764f*/
  this->TiberiumSpreadRadius = 0; /*0x427655*/
  this->YSortAdjust = 0; /*0x42765b*/
  this->YDrawOffset = 0; /*0x427661*/
  this->ZAdjust = 0; /*0x427667*/
  this->MakeInfantry = -1; /*0x42766d*/
  this->RunningFrames = 0; /*0x427673*/
  this->IsFlamingGuy = 0; /*0x427679*/
  this->IsVeins = 0; /*0x42767f*/
  this->IsMeteor = 0; /*0x427685*/
  this->TiberiumChainReaction = 0; /*0x42768b*/
  this->IsTiberium = 0; /*0x427691*/
  this->HideIfNoOre = 0; /*0x427697*/
  this->Bouncer = 0; /*0x42769d*/
  this->Tiled = 0; /*0x4276a3*/
  this->ShouldUseCellDrawer = 1; /*0x4276a9*/
  this->UseNormalLight = 0; /*0x4276b0*/
  this->DemandLoad = 0; /*0x4276b6*/
  this->FreeLoad = 0; /*0x4276bc*/
  this->IsAnimatedTiberium = 0; /*0x4276c2*/
  this->AltPalette = 0; /*0x4276c8*/
  this->Normalized = 0; /*0x4276ce*/
  this->Layer[0] = 3; /*0x4276d4*/
  this->DoubleThick = 0; /*0x4276de*/
  this->Flat_flag = 0; /*0x4276e4*/
  this->Translucent = 0; /*0x4276ea*/
  this->Scorch = 0; /*0x4276f0*/
  this->Flamer = 0; /*0x4276f6*/
  this->Crater = 0; /*0x4276fc*/
  this->ForceBigCraters = 0; /*0x427702*/
  this->Sticky = 0; /*0x42770b*/
  this->PingPong = 0; /*0x427712*/
  this->Reverse = 0; /*0x427718*/
  this->Shadow = 0; /*0x42771e*/
  this->PsiWarning = 0; /*0x427724*/
  this->ShouldFogRemove = 1; /*0x42772a*/
  this->ObjectTypeClass = &AnimTypeClass::`vftable'; /*0x427731*/
  this->? = &AnimTypeClass::`vftable'; /*0x427737*/
  this->? = &AnimTypeClass::`vftable'; /*0x42773d*/
  this->? = &AnimTypeClass::`vftable'; /*0x427744*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x42774b*/
  this->? = 1; /*0x427750*/
  this->? = 1; /*0x427757*/
  this->? = 0; /*0x42775e*/
  this->? = 0; /*0x427764*/
  this->? = 1; /*0x42776a*/
  this->? = 1; /*0x427771*/
  this->? = 0; /*0x427778*/
  if ( FootClass_Array.?[0] < FootClass_Array.?[4] /*0x4277b0*/
    || (BYTE1(FootClass_Array.?[5]) || !FootClass_Array.?[4])
    && FootClass_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[2] + 8))(
         &FootClass_Array.?[2],
         FootClass_Array.?[4] + FootClass_Array.?[1],
         0) )
  {
    v3 = FootClass_Array.?[0]++; /*0x4277bd*/
    *(_DWORD *)(FootClass_Array.?[3] + 4 * v3) = this; /*0x4277cc*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x427803*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x427810*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x42781f*/
  }
  v5 = 0; /*0x427828*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x42782c*/
  {
LABEL_17:
    v5 = -1; /*0x427840*/
  }
  else
  {
    v6 = (AnimTypeClass **)FootClass_Array.?[3]; /*0x42782e*/
    while ( *v6 != this ) /*0x427836*/
    {
      ++v5; /*0x427838*/
      ++v6; /*0x427839*/
      if ( v5 >= FootClass_Array.?[0] ) /*0x42783e*/
        goto LABEL_17; /*0x42783e*/
    }
  }
  this->MiddleFrameIndex = v5; /*0x427842*/
  return &this->ObjectTypeClass; /*0x42784a*/
}



// ==== 0x00427940  LoadBuildingTypeClassTheatreSHP  this=BuildingTypeClass  sig=ida-proto ====
int __fastcall BuildingTypeClass_LoadTheatreSHP(int a1)
{
  int result; // eax
  int v3; // esi
  char v4; // al
  int v5; // eax
  int i; // [esp+8h] [ebp-204h]
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x427952*/
  for ( i = 0; i < dword_8B4160; ++i ) /*0x42795a*/
  {
    v3 = *((_DWORD *)dword_8B4154 + result); /*0x427968*/
    v4 = *(_BYTE *)(v3 + 556); /*0x427973*/
    if ( *(_BYTE *)(v3 + 862) ) /*0x42796b*/
    {
      if ( v4 || *(_BYTE *)(v3 + 567) ) /*0x427a2a*/
      {
        if ( *(_DWORD *)(v3 + 164) && *(_BYTE *)(v3 + 168) ) /*0x427a3c*/
        {
          __3_YAXPAX_Z(*(void **)(v3 + 164)); /*0x427a45*/
          *(_BYTE *)(v3 + 168) = 0; /*0x427a4d*/
        }
        *(_DWORD *)(v3 + 164) = 0; /*0x427a53*/
      }
    }
    else if ( v4 ) /*0x427981*/
    {
      if ( *(_DWORD *)(v3 + 164) && *(_BYTE *)(v3 + 168) ) /*0x427991*/
      {
        __3_YAXPAX_Z(*(void **)(v3 + 164)); /*0x42799a*/
        *(_BYTE *)(v3 + 168) = 0; /*0x4279a2*/
      }
      *(_DWORD *)(v3 + 164) = 0; /*0x4279c1*/
      _makepath(Buffer, 0, 0, (const char *)(v3 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x4279cc*/
      v5 = SearchMIXFile(Buffer, 1); /*0x4279da*/
      *(_DWORD *)(v3 + 164) = v5; /*0x4279e1*/
      if ( !v5 ) /*0x4279e7*/
      {
        _makepath(Buffer, 0, 0, (const char *)(v3 + 36), Ext); /*0x4279f6*/
        *(_DWORD *)(v3 + 164) = SearchMIXFile(Buffer, 1); /*0x427a09*/
      }
    }
    else if ( *(_BYTE *)(v3 + 567) ) /*0x427a11*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 160))(v3, a1); /*0x427a1e*/
    }
    result = i + 1; /*0x427a63*/
  }
  return result; /*0x427a72*/
}



// ==== 0x00427A80  AnimTypeClass::GetLoopCount  this=AnimTypeClass  sig=csp ====
char __thiscall AnimTypeClass::GetLoopCount(AnimTypeClass *this, int a2)
{
  SHPStruct *v2; // eax
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  LOBYTE(v2) = stru_A8EB00.?[391]; /*0x427a80*/
  if ( stru_A8EB00.?[391] || a2 != dword_822CF8 ) /*0x427aa0*/
  {
    if ( !this->? || this->DemandLoad ) /*0x427ab0*/
    {
      LOBYTE(v2) = this->?; /*0x427b2b*/
      if ( (_BYTE)v2 ) /*0x427b33*/
        LOBYTE(v2) = (*((char (__thiscall **)(AnimTypeClass *, int))this->ObjectTypeClass + 40))(this, a2); /*0x427b3a*/
    }
    else
    {
      if ( this->? && this->? ) /*0x427ac4*/
      {
        __3_YAXPAX_Z(this->?); /*0x427acf*/
        this->? = 0; /*0x427ad7*/
      }
      this->? = 0; /*0x427af6*/
      _makepath(Buffer, 0, 0, (const char *)this->?, (const char *)&off_7E1BC6 + 112 * a2); /*0x427b07*/
      v2 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427b15*/
      this->? = v2; /*0x427b1a*/
    }
  }
  return (char)v2; /*0x427b20*/
}



// ==== 0x00427B50  AnimTypeClass::GetWarhead  this=AnimTypeClass  sig=csp ====
char __thiscall AnimTypeClass::GetWarhead(AnimTypeClass *this, int a2)
{
  SHPStruct *v3; // eax
  char v4; // cl
  const char *ImageFile; // eax
  SHPStruct *Image; // ecx
  int End; // eax
  int unused_high; // eax
  char Shadow; // dl
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  LOBYTE(v3) = this->DemandLoad; /*0x427b59*/
  if ( !(_BYTE)v3 ) /*0x427b61*/
  {
    if ( this->? ) /*0x427b67*/
    {
      LOBYTE(v3) = ObjectTypeClass::Load2DArt((char *)this); /*0x427b71*/
    }
    else
    {
      if ( this->? && this->? ) /*0x427b85*/
      {
        __3_YAXPAX_Z(this->?); /*0x427b90*/
        this->? = 0; /*0x427b98*/
      }
      v4 = this->?[0]; /*0x427b9f*/
      ImageFile = this->?; /*0x427ba5*/
      this->? = 0; /*0x427bad*/
      if ( !v4 ) /*0x427bb7*/
        ImageFile = (const char *)this->?; /*0x427bb9*/
      _makepath(Buffer, 0, 0, ImageFile, Ext); /*0x427bcb*/
      TheaterObjectTypeClassSpecificID(Buffer, a2); /*0x427bde*/
      v3 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427be9*/
      this->? = v3; /*0x427bf0*/
      if ( !v3 ) /*0x427bf6*/
      {
        ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Buffer); /*0x427bfc*/
        v3 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427c07*/
        this->? = v3; /*0x427c0c*/
      }
    }
  }
  Image = this->?; /*0x427c12*/
  if ( Image ) /*0x427c1a*/
  {
    End = this->End; /*0x427c1c*/
    this->AnimTypeClass_field_2A4 = 1; /*0x427c22*/
    if ( !End ) /*0x427c2b*/
    {
      unused_high = SHIWORD(Image[1].unused); /*0x427c2d*/
      Shadow = this->Shadow; /*0x427c31*/
      this->End = unused_high; /*0x427c37*/
      if ( Shadow ) /*0x427c3f*/
        this->End = unused_high / 2; /*0x427c46*/
    }
    if ( !this->LoopEnd ) /*0x427c4c*/
      this->LoopEnd = this->End; /*0x427c5c*/
    this->MiddleFrameWidth = SHIWORD(Image[1].unused) / 2; /*0x427c6b*/
    this->MiddleFrameHeight = -1; /*0x427c74*/
    *(_DWORD *)this->__pad_2A0 = -1; /*0x427c7a*/
    LOBYTE(v3) = -1; /*0x427c71*/
  }
  return (char)v3; /*0x427c80*/
}



// ==== 0x00427CB0  AnimTypeClass::FindIndex  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::FindIndex(AnimTypeClass *this)
{
  int v2; // esi

  if ( !this ) /*0x427cb6*/
    return -1; /*0x427cb6*/
  v2 = 0; /*0x427cbd*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x427cc1*/
    return -1; /*0x427ce6*/
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v2) + 36), (char *)this) ) /*0x427cda*/
  {
    if ( ++v2 >= FootClass_Array.?[0] ) /*0x427ce4*/
      return -1; /*0x427ce4*/
  }
  return v2; /*0x427ce6*/
}



// ==== 0x00427D00  AnimTypeClass::LoadFromINI  this=AnimTypeClass  sig=csp ====
char __userpurge AnimTypeClass::LoadFromINI@<al>(AnimTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  int v6; // eax
  int Int_Overwrite; // eax
  int v8; // eax
  _DWORD *v10; // ebp
  _DWORD *v11; // eax
  int v12; // edx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  double v16; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v21; // eax
  int v23; // eax
  _DWORD *v24; // ebp
  _DWORD *v25; // eax
  char v26; // al
  char v27; // cl
  char v28; // al
  int v29; // eax
  int v30; // ebp
  int v31; // eax
  char v32; // cl
  char v33; // al
  char v34; // al
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // ebp
  int Index; // eax
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  _DWORD *v43; // ebp
  int v44; // ebp
  AnimTypeClass *v45; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // ebp
  int v48; // ebp
  AnimTypeClass *v49; // eax
  _DWORD *v50; // eax
 ... [22585 chars total]



// ==== 0x00428800  AnimTypeClass::SaveLoad_Prefix  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::SaveLoad_Prefix(AnimTypeClass *this, int a2)
{
  int result; // eax
  char v3[513]; // [esp+7h] [ebp-201h] BYREF

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x428814*/
  if ( result >= 0 ) /*0x42881b*/
  {
    if ( this ) /*0x428823*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)v3); /*0x42882c*/
      this->ObjectTypeClass = &AnimTypeClass::`vftable'; /*0x428831*/
      this->? = &AnimTypeClass::`vftable'; /*0x428837*/
      this->? = &AnimTypeClass::`vftable'; /*0x42883e*/
      this->? = &AnimTypeClass::`vftable'; /*0x428845*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x42884e*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x428855*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->Next); /*0x428866*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->ExpireAnim); /*0x428877*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TrailerAnim); /*0x428888*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->BounceAnim); /*0x428899*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->Spawns); /*0x4288aa*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->Warhead); /*0x4288bb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TiberiumSpawnType); /*0x4288cc*/
    if ( !this->DemandLoad ) /*0x4288d1*/
    {
      if ( this->? ) /*0x4288db*/
      {
        _makepath(&v3[1], 0, 0, (const char *)this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x428910*/
        this->? = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x428923*/
        return 0; /*0x428932*/
      }
      if ( this->? ) /*0x428935*/
        (*((void (__thiscall **)(AnimTypeClass *, int))this->ObjectTypeClass + 40))(this, dword_A8B230[130].uniqueId); /*0x42894f*/
    }
    return 0; /*0x428955*/
  }
  return result; /*0x42892b*/
}



// ==== 0x00428970  AnimTypeClass::SaveLoad_Prefix_0  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::SaveLoad_Prefix_0(AnimTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x42897f*/
  if ( result >= 0 ) /*0x428986*/
    return 0; /*0x428988*/
  return result; /*0x42898a*/
}



// ==== 0x00428990  AnimTypeClass::GetClassIdentifier  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::GetClassIdentifier(AnimTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x428996*/
    return -2147467261; /*0x428998*/
  *a2 = -1366608934; /*0x4289a6*/
  a2[1] = 298976796; /*0x4289ae*/
  a2[2] = 1610654892; /*0x4289b7*/
  a2[3] = unk_7E962C; /*0x4289c0*/
  return 0; /*0x42899d*/
}



// ==== 0x004289D0  AnimTypeClass::PowerDrainUpdate  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::PowerDrainUpdate(AnimTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x4289d9*/
  Power::TimerProcess(this->Layer[0]); /*0x4289e7*/
  LOBYTE(v3) = this->Normalized; /*0x4289ec*/
  Power::FlagProcess((Power *)a2, v3); /*0x4289f5*/
  LOBYTE(v4) = this->Flat_flag; /*0x4289fa*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x428a03*/
  LOBYTE(v5) = this->Translucent; /*0x428a08*/
  Power::FlagProcess((Power *)a2, v5); /*0x428a11*/
  LOBYTE(v6) = this->Scorch; /*0x428a16*/
  Power::FlagProcess((Power *)a2, v6); /*0x428a1f*/
  LOBYTE(v7) = this->Flamer; /*0x428a24*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x428a2d*/
  LOBYTE(v8) = this->Crater; /*0x428a32*/
  Power::FlagProcess((Power *)a2, v8); /*0x428a3b*/
  LOBYTE(v9) = this->Sticky; /*0x428a40*/
  Power::FlagProcess((Power *)a2, v9); /*0x428a49*/
  LOBYTE(v10) = this->PingPong; /*0x428a4e*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x428a57*/
  LOBYTE(v11) = this->Reverse; /*0x428a5c*/
  Power::FlagProcess((Power *)a2, v11); /*0x428a65*/
  LOBYTE(v12) = this->Shadow; /*0x428a6a*/
  Power::FlagProcess((Power *)a2, v12); /*0x428a73*/
  Power::TimerProcess(this->MiddleFrameWidth); /*0x428a81*/
  Checksummer::Add_double((Checksummer *)a2, this->Damage[0], this->Damage[1]); /*0x428a96*/
  LOBYTE(v13) = this->TiberiumChainReaction; /*0x428a9b*/
  Power::FlagProcess((Power *)a2, v13); /*0x428aa4*/
  Power::TimerProcess(this->Rate); /*0x428ab2*/
  Power::TimerProcess(this->Start); /*0x428ac0*/
  Power::TimerProcess(this->LoopStart); /*0x428ace*/
  Power::TimerProcess(this->LoopEnd); /*0x428adc*/
  Power::TimerProcess(this->End); /*0x428aea*/
  Power::TimerProcess(this->Report); /*0x428af8*/
  Power::TimerProcess(this->StopSound); /*0x428b06*/
  Power::TimerProcess(this->NumParticles); /*0x428b14*/
  Power::TimerProcess(this->DetailLevel); /*0x428b22*/
  Power::TimerProcess(this->TranslucencyDetailLevel); /*0x428b30*/
  Power::TimerProcess(this->RandomLoopDelay[0]); /*0x428b3e*/
  Power::TimerProcess(this->RandomLoopDelay[1]); /*0x428b4c*/
  Power::TimerProcess(this->Translucency); /*0x428b5a*/
  LOBYTE(v14) = this->Tiled; /*0x428b5f*/
  return Power::FlagProcess((Power *)a2, v14); /*0x428b6d*/
}



// ==== 0x00428B80  AnimTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
_DWORD *__thiscall AnimTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  AnimTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428b9c*/
    return 0; /*0x428bff*/
  v2 = 0; /*0x428bad*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x428bb1*/
  {
LABEL_6:
    v3 = (AnimTypeClass *)__2_YAPAXI_Z(0x378u); /*0x428bd6*/
    if ( v3 ) /*0x428be5*/
      return AnimTypeClass::Construct(v3, Source); /*0x428bf1*/
    return 0; /*0x428be5*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v2) + 36), Source) ) /*0x428bca*/
  {
    if ( ++v2 >= FootClass_Array.?[0] ) /*0x428bd4*/
      goto LABEL_6; /*0x428bd4*/
  }
  return *(_DWORD **)(FootClass_Array.?[3] + 4 * v2); /*0x428bef*/
}



// ==== 0x00428C10  AnimTypeClass::GetAnimData  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::GetAnimData(AnimTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = (int)this->Next; /*0x428c10*/
  if ( result == a2 ) /*0x428c1c*/
    this->Next = 0; /*0x428c1e*/
  return result; /*0x428c28*/
}



// ==== 0x00428C30  AnimTypeClass::GetDamage  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::GetDamage(AnimTypeClass *this)
{
  int result; // eax
  const char *ImageFile; // eax
  SHPStruct *v4; // eax
  SHPStruct *v5; // eax
  SHPStruct *Image; // esi
  CCFileClass v7; // [esp+4h] [ebp-2D8h] BYREF
  char v8[12]; // [esp+5Ch] [ebp-280h] BYREF
  int v9; // [esp+68h] [ebp-274h]
  CCFileClass v10; // [esp+70h] [ebp-26Ch] BYREF
  char v11[12]; // [esp+C8h] [ebp-214h] BYREF
  int v12; // [esp+D4h] [ebp-208h]
  char Buffer[512]; // [esp+DCh] [ebp-200h] BYREF

  result = (int)this->?; /*0x428c39*/
  if ( !result && this->DemandLoad ) /*0x428c47*/
  {
    Debug::Log(); /*0x428c5e*/
    ImageFile = this->?; /*0x428c69*/
    if ( !this->?[0] ) /*0x428c63*/
      ImageFile = (const char *)this->?; /*0x428c76*/
    _makepath(Buffer, 0, 0, ImageFile, Ext); /*0x428c8b*/
    if ( this->? ) /*0x428c90*/
    {
      _makepath(Buffer, 0, 0, (const char *)this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x428ccc*/
    }
    else if ( this->? ) /*0x428cd6*/
    {
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x428cf3*/
    }
    CCFileClass::Construct(&v7, Buffer); /*0x428d04*/
    v4 = (SHPStruct *)CCFileClass::ReadEntireFile(&v7); /*0x428d0d*/
    this->? = v4; /*0x428d14*/
    if ( v4 ) /*0x428d1a*/
    {
      this->? = 1; /*0x428d1c*/
    }
    else
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Buffer); /*0x428d2c*/
      CCFileClass::Construct(&v10, Buffer); /*0x428d3d*/
      v5 = (SHPStruct *)CCFileClass::ReadEntireFile(&v10); /*0x428d46*/
      this->? = v5; /*0x428d4d*/
      if ( v5 ) /*0x428d53*/
        this->? = 1; /*0x428d55*/
      *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x428d63*/
      v12 = 0; /*0x428d6b*/
      Vector::Clear((int)v11); /*0x428d76*/
      *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x428d7f*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x428d87*/
    }
    (*((void (__thiscall **)(AnimTypeClass *, int))this->ObjectTypeClass + 40))(this, dword_A8B230[130].uniqueId); /*0x428d9c*/
    Image = this->?; /*0x428da2*/
    *(_DWORD *)v7.CDFileClass = &CCFileClass::`vftable'; /*0x428dac*/
    v9 = 0; /*0x428db4*/
    Vector::Clear((int)v8); /*0x428dbc*/
    *(_DWORD *)v7.CDFileClass = &off_7E1668; /*0x428dc5*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x428dcd*/
    return (int)Image; /*0x428dd2*/
  }
  return result; /*0x428dd4*/
}



// ==== 0x00428DE0  AnimClass::FreeRenderBuffer  this=AnimClass  sig=csp ====
void __thiscall AnimClass::FreeRenderBuffer(AnimClass *this)
{
  if ( this->AnimClass_field_0x35D[1] && this->AnimClass_field_0xA4 ) /*0x428ded*/
  {
    if ( this->AnimClass_field_0x35D[2] ) /*0x428df7*/
    {
      Debug::Log(); /*0x428e0a*/
      __3_YAXPAX_Z(this->AnimClass_field_0xA4); /*0x428e16*/
      this->AnimClass_field_0xA4 = 0; /*0x428e1e*/
      this->__pad_A8[0] = 0; /*0x428e28*/
    }
  }
}



// ==== 0x00428E40  ObjectTypeClass::Thunk_AnimTypeClass_sub_428E40  this=ObjectTypeClass  sig=csp ====
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E40(ObjectTypeClass *this)
{
  return -1; /*0x428e43*/
}



// ==== 0x00428E50  AnimTypeClass::Thunk_AnimTypeClass_sub_428E50  this=AnimTypeClass  sig=csp ====
int __cdecl AnimTypeClass::Thunk_AnimTypeClass_sub_428E50(AnimTypeClass *this)
{
  return 5; /*0x428e55*/
}



// ==== 0x00428E60  AnimTypeClass::GetAuxField  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::GetAuxField(AnimTypeClass *this)
{
  return this->MiddleFrameIndex; /*0x428e66*/
}



// ==== 0x00428E70  AnimTypeClass::GetObjectSize  this=AnimTypeClass  sig=csp ====
int AnimTypeClass::GetObjectSize(AnimTypeClass *this)
{
  return 888; /*0x428e75*/
}



// ==== 0x00428E80  AnimTypeClass::Stub  this=AnimTypeClass  sig=csp ====
char __stdcall AnimTypeClass::Stub(AnimTypeClass *this, int a2)
{
  return 0; /*0x428e82*/
}



// ==== 0x00428E90  AnimTypeClass::StubReturnFalse  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::StubReturnFalse(AnimTypeClass *this)
{
  return 0; /*0x428e92*/
}



// ==== 0x00428EA0  AnimTypeClass::ddtor  this=AnimTypeClass  sig=csp ====
_DWORD *__thiscall AnimTypeClass::ddtor(AnimTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  AnimTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->ObjectTypeClass = &AnimTypeClass::`vftable'; /*0x428ead*/
  this->? = &AnimTypeClass::`vftable'; /*0x428eb3*/
  this->? = &AnimTypeClass::`vftable'; /*0x428eba*/
  this->? = &AnimTypeClass::`vftable'; /*0x428ec1*/
  v6 = this; /*0x428ecf*/
  v3 = (*(int (__thiscall **)(int *, AnimTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x428ed3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x428ee3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x428ee8*/
    for ( ; /*0x428eee*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x428ef6*/
    }
  }
  v6 = this; /*0x428f18*/
  v4 = (*(int (__thiscall **)(int *, AnimTypeClass **))(FootClass_Array.?[2] + 16))(&FootClass_Array.?[2], &v6); /*0x428f1c*/
  if ( v4 != -1 && v4 < FootClass_Array.?[0] ) /*0x428f2c*/
  {
    --FootClass_Array.?[0]; /*0x428f31*/
    for ( ; /*0x428f37*/
          v4 < FootClass_Array.?[0];
          *(_DWORD *)(FootClass_Array.?[3] + 4 * v4 - 4) = *(_DWORD *)(FootClass_Array.?[3] + 4 * v4) )
    {
      ++v4; /*0x428f3f*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x428f53*/
  if ( (a2 & 1) != 0 ) /*0x428f5d*/
    __3_YAXPAX_Z(this); /*0x428f60*/
  return &this->ObjectTypeClass; /*0x428f6a*/
}



// ==== 0x00428F70  globalHelper_028F70  this=-  sig=csp ====
_DWORD *__fastcall globalHelper_028F70(char *Source, int a2)
{
  int v4; // esi
  AnimTypeClass *v5; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428f8f*/
    return 0; /*0x428fec*/
  v4 = 0; /*0x428f9e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x428fa2*/
  {
LABEL_6:
    v5 = (AnimTypeClass *)__2_YAPAXI_Z(0x378u); /*0x428fc3*/
    if ( v5 ) /*0x428fd2*/
      return AnimTypeClass::Construct(v5, Source); /*0x428fdf*/
    return 0; /*0x428fd2*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x428fb9*/
  {
    if ( ++v4 >= *(_DWORD *)(a2 + 16) ) /*0x428fc1*/
      goto LABEL_6; /*0x428fc1*/
  }
  return *(_DWORD **)(*(_DWORD *)(a2 + 4) + 4 * v4); /*0x428fdc*/
}



// ==== 0x00428FF0  sub_428FF0  this=-  sig=ida-proto ====
int sub_428FF0()
{
  dword_89A260 = 0; /*0x428ff2*/
  dword_89A264 = 0; /*0x428ff7*/
  dword_89A268 = 0; /*0x428ffc*/
  dword_89A26C = 0; /*0x429001*/
  return 0; /*0x429006*/
}



// ==== 0x00429010  sub_429010  this=-  sig=ida-proto ====
void sub_429010()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42901c*/
  dbl_89A278 = Math::Sqrt(v0 + v0); /*0x42902e*/
}



// ==== 0x00429040  sub_429040  this=-  sig=ida-proto ====
void sub_429040()
{
  dbl_89A2C8 = dbl_89A278 / 60.0; /*0x42904c*/
}



// ==== 0x00429060  sub_429060  this=-  sig=ida-proto ====
void sub_429060()
{
  dbl_89A2B0 = 1.0 / dbl_89A2C8; /*0x42906c*/
}



// ==== 0x00429080  sub_429080  this=-  sig=ida-proto ====
void sub_429080()
{
  dbl_89A2A8 = 0.0174532925199433 * 45.0; /*0x42908c*/
}



// ==== 0x004290A0  sub_4290A0  this=-  sig=ida-proto ====
void sub_4290A0()
{
  dbl_89A280 = 0.0174532925199433 * 60.0; /*0x4290ac*/
}



// ==== 0x004290C0  sub_4290C0  this=-  sig=ida-proto ====
void sub_4290C0()
{
  dbl_89A258 = 0.0174532925199433 * 90.0; /*0x4290cc*/
}



// ==== 0x004290E0  sub_4290E0  this=-  sig=ida-proto ====
__int64 sub_4290E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89A258 - dbl_89A280); /*0x4290f2*/
  result = Math::RoundToInt(v0 * dbl_89A278 * 0.5); /*0x429106*/
  dword_89A2D0 = result; /*0x42910b*/
  return result; /*0x429110*/
}



// ==== 0x00429120  sub_429120  this=-  sig=ida-proto ====
void sub_429120()
{
  dbl_89A288 = Math::ArcTan((double)dword_89A2D0 * 0.00390625); /*0x429137*/
}



// ==== 0x00429150  sub_429150  this=-  sig=ida-proto ====
void sub_429150()
{
  dbl_89A2A0 = Math::ArcTan((double)(2 * dword_89A2D0) / dbl_89A278); /*0x429172*/
}



// ==== 0x00429180  sub_429180  this=-  sig=ida-proto ====
__int64 sub_429180()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A2D0) + 0.5); /*0x42919b*/
  dword_89A2C4 = result; /*0x4291a0*/
  return result; /*0x4291a6*/
}



// ==== 0x004291B0  sub_4291B0  this=-  sig=ida-proto ====
int sub_4291B0()
{
  word_89A270 = 0; /*0x4291b2*/
  word_89A272 = 0; /*0x4291b8*/
  return 0; /*0x4291be*/
}



// ==== 0x004291C0  sub_4291C0  this=-  sig=ida-proto ====
int sub_4291C0()
{
  dword_89A290 = 0; /*0x4291c2*/
  dword_89A294 = 0; /*0x4291c7*/
  dword_89A298 = 0; /*0x4291cc*/
  return 0; /*0x4291d1*/
}



// ==== 0x004291E0  sub_4291E0  this=-  sig=ida-proto ====
int sub_4291E0()
{
  dword_89A2C0 = 0; /*0x4291e5*/
  dword_89A2B8 = 128; /*0x4291ef*/
  dword_89A2BC = 128; /*0x4291f4*/
  return 128; /*0x4291f9*/
}



// ==== 0x00429200  sub_429200  this=-  sig=ida-proto ====
void sub_429200()
{
  punk.field_0 = (struct IUnknownVtbl *)&off_7E36D4; /*0x429200*/
}



// ==== 0x00429210  TiberianSunClassFactory::QueryInterface_Helper  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::QueryInterface_Helper(TiberianSunClassFactory *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+14h] [ebp+Ch]

  if ( !v4 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(a3, &unk_7F7CA0, 0x10u) && memcmp(a3, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *v4 = a2; /*0x42925c*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x429261*/
  return 0; /*0x42921a*/
}



// ==== 0x00429270  TiberianSunClassFactory::QueryInterface_Dispatch  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::QueryInterface_Dispatch(TiberianSunClassFactory *this, int a2, const IID *a3, void **a4)
{
  _DWORD *v4; // eax
  int v6; // ebx
  _DWORD *v7; // [esp+20h] [ebp+10h]

  v4 = v7; /*0x429270*/
  if ( !v7 ) /*0x42927a*/
    return -2147024809; /*0x429285*/
  *v7 = 0; /*0x42928c*/
  if ( a3 ) /*0x429294*/
    return -2147221232; /*0x42929f*/
  v6 = -2147467262; /*0x4292b4*/
  if ( !memcmp(a4, &unk_7E36C0, 0x10u) || !memcmp(a4, &IID_IUnknown, 0x10u) ) /*0x4292cb*/
  {
    if ( !&punk ) /*0x4292d6*/
      return -2147024882; /*0x4292e1*/
    v6 = (*(int (__stdcall **)(IUnknown *, void **, _DWORD *))punk.field_0)(&punk, a4, v7); /*0x4292f3*/
    if ( v6 < 0 ) /*0x4292f7*/
      __3_YAXPAX_Z(&punk); /*0x4292fe*/
    v4 = v7; /*0x429306*/
  }
  if ( !memcmp(a4, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&dword_87F7E8 ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v6 = (*(int (__stdcall **)(IUnknown *, void **, _DWORD *))dword_87F7E8.field_0)(&dword_87F7E8, a4, v4); /*0x429340*/
    if ( v6 < 0 ) /*0x429344*/
      __3_YAXPAX_Z(&dword_87F7E8); /*0x42934b*/
  }
  return v6; /*0x42927c*/
}



// ==== 0x00429360  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __stdcall sub_429360(int a1, const void *a2, _DWORD *a3)
{
  int result; // eax

  if ( !a3 ) /*0x429369*/
    return -2147467261; /*0x42936d*/
  if ( !memcmp(a2, &unk_7E36C0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x42939a*/
  {
    *a3 = a1; /*0x4293cb*/
    (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x4293d0*/
    return 0; /*0x4293d5*/
  }
  else
  {
    result = 0; /*0x4293aa*/
    if ( !memcmp(a2, &unk_7EA6E8, 0x10u) ) /*0x4293ac*/
      *a3 = &dword_87F7E8; /*0x4293b2*/
    else
      return -2147467262; /*0x4293be*/
  }
  return result; /*0x42936b*/
}



// ==== 0x004293E0  ApplicationClass::method_4293E0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4293E0(ApplicationClass *this)
{
  return 1; /*0x4293e5*/
}



// ==== 0x004293F0  ApplicationClass::method_4293F0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4293F0(ApplicationClass *this)
{
  return 1; /*0x4293f5*/
}



// ==== 0x00429400  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429400(ApplicationClass *this, int a2)
{
  int v3; // [esp+8h] [ebp+8h]

  return (**(int (__stdcall ***)(int, void *, int))a2)(a2, &unk_7E36C0, v3); /*0x429413*/
}



// ==== 0x00429420  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429420(ApplicationClass *this, BSTR *a2)
{
  BSTR *v3; // [esp+Ch] [ebp+8h]

  if ( !v3 ) /*0x429427*/
    return -2147467261; /*0x429429*/
  *v3 = SysAllocString(&psz); /*0x42943d*/
  return 0; /*0x42942e*/
}



// ==== 0x00429450  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429450(ApplicationClass *this, BSTR *a2)
{
  BSTR *v3; // [esp+Ch] [ebp+8h]

  if ( !v3 ) /*0x429457*/
    return -2147467261; /*0x429459*/
  *v3 = SysAllocString(aSun); /*0x42946d*/
  return 0; /*0x42945e*/
}



// ==== 0x00429480  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429480(ApplicationClass *this, int a2)
{
  int v3; // [esp+8h] [ebp+8h]

  return (**(int (__stdcall ***)(int, void *, int))a2)(a2, &unk_7E36C0, v3); /*0x429493*/
}



// ==== 0x004294A0  ApplicationClass::method_4294A0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4294A0(ApplicationClass *this)
{
  return 0; /*0x4294a2*/
}



// ==== 0x004294B0  ApplicationClass::method_4294B0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4294B0(ApplicationClass *this, BSTR *a2)
{
  WCHAR WideCharStr[32]; // [esp+4h] [ebp-40h] BYREF
  BSTR *v4; // [esp+4Ch] [ebp+8h]

  if ( !v4 ) /*0x4294ba*/
    return -2147467261; /*0x4294bc*/
  MultiByteToWideChar(0, 1u, (LPCCH)&dword_A8B230[130].abstractFlags, -1, WideCharStr, 32); /*0x4294e2*/
  *v4 = SysAllocString(WideCharStr); /*0x4294f3*/
  return 0; /*0x4294c1*/
}



// ==== 0x00429500  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429500(ApplicationClass *this, _DWORD *a2)
{
  int uniqueId; // edi
  int *p_vtable2; // esi
  int *v5; // [esp+Ch] [ebp+8h]

  if ( !v5 ) /*0x429507*/
    return -2147467261; /*0x429509*/
  uniqueId = dword_A8B230[43].uniqueId; /*0x429519*/
  if ( dword_A8B230[43].ptr_8 != -1 ) /*0x42952e*/
  {
    p_vtable2 = &dword_A8B230[43].ptr_8; /*0x42951f*/
    uniqueId += Timer::GetTicks() - *p_vtable2; /*0x42953a*/
  }
  *v5 = uniqueId; /*0x42953c*/
  return 0; /*0x42950e*/
}



// ==== 0x00429550  ApplicationClass::COMStub  this=ApplicationClass  sig=csp ====
int __thiscall COMStub_429550(ApplicationClass *this, _DWORD *a2)
{
  _DWORD *v3; // [esp+8h] [ebp+8h]

  return SwizzleManagerClass::Process((int)&SwizzleManagerClass_Instance, &IID_ISwizzle, v3); /*0x429564*/
}



// ==== 0x00429570  sub_429570  this=-  sig=ida-proto ====
int sub_429570()
{
  dword_89C268 = 0; /*0x429572*/
  dword_89C26C = 0; /*0x429577*/
  dword_89C270 = 0; /*0x42957c*/
  dword_89C274 = 0; /*0x429581*/
  return 0; /*0x429586*/
}



// ==== 0x00429590  sub_429590  this=-  sig=ida-proto ====
void sub_429590()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42959c*/
  dbl_89C280 = Math::Sqrt(v0 + v0); /*0x4295ae*/
}



// ==== 0x004295C0  sub_4295C0  this=-  sig=ida-proto ====
void sub_4295C0()
{
  dbl_89C2D0 = dbl_89C280 / 60.0; /*0x4295cc*/
}



// ==== 0x004295E0  sub_4295E0  this=-  sig=ida-proto ====
void sub_4295E0()
{
  dbl_89C2B8 = 1.0 / dbl_89C2D0; /*0x4295ec*/
}



// ==== 0x00429600  sub_429600  this=-  sig=ida-proto ====
void sub_429600()
{
  dbl_89C2B0 = 0.0174532925199433 * 45.0; /*0x42960c*/
}



// ==== 0x00429620  sub_429620  this=-  sig=ida-proto ====
void sub_429620()
{
  dbl_89C288 = 0.0174532925199433 * 60.0; /*0x42962c*/
}



// ==== 0x00429640  sub_429640  this=-  sig=ida-proto ====
void sub_429640()
{
  dbl_89A2F8 = 0.0174532925199433 * 90.0; /*0x42964c*/
}



// ==== 0x00429660  sub_429660  this=-  sig=ida-proto ====
__int64 sub_429660()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89A2F8 - dbl_89C288); /*0x429672*/
  result = Math::RoundToInt(v0 * dbl_89C280 * 0.5); /*0x429686*/
  dword_89C2D8 = result; /*0x42968b*/
  return result; /*0x429690*/
}



// ==== 0x004296A0  sub_4296A0  this=-  sig=ida-proto ====
void sub_4296A0()
{
  dbl_89C290 = Math::ArcTan((double)dword_89C2D8 * 0.00390625); /*0x4296b7*/
}



// ==== 0x004296D0  sub_4296D0  this=-  sig=ida-proto ====
void sub_4296D0()
{
  dbl_89C2A8 = Math::ArcTan((double)(2 * dword_89C2D8) / dbl_89C280); /*0x4296f2*/
}



// ==== 0x00429700  sub_429700  this=-  sig=ida-proto ====
__int64 sub_429700()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C2D8) + 0.5); /*0x42971b*/
  dword_89C2CC = result; /*0x429720*/
  return result; /*0x429726*/
}



// ==== 0x00429730  sub_429730  this=-  sig=ida-proto ====
int sub_429730()
{
  dword_89C278 = 0; /*0x429732*/
  return 0; /*0x42973e*/
}



// ==== 0x00429740  sub_429740  this=-  sig=ida-proto ====
int sub_429740()
{
  dword_89C298 = 0; /*0x429742*/
  dword_89C29C = 0; /*0x429747*/
  dword_89C2A0 = 0; /*0x42974c*/
  return 0; /*0x429751*/
}



// ==== 0x00429760  sub_429760  this=-  sig=ida-proto ====
int sub_429760()
{
  dword_89C2C8 = 0; /*0x429765*/
  dword_89C2C0 = 128; /*0x42976f*/
  dword_89C2C4 = 128; /*0x429774*/
  return 128; /*0x429779*/
}



// ==== 0x00429780  WalkPathClassPath  this=-  sig=csp ====
_DWORD *__fastcall PathClass_WalkPath(_DWORD *a1, int *a2, int a3, int *a4)
{
  int v4; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF
  int v12; // [esp+14h] [ebp+8h]

  v4 = *a2; /*0x429781*/
  v11 = *a2; /*0x42978f*/
  if ( a3 <= 0 ) /*0x429793*/
  {
    *a1 = v4; /*0x42981d*/
    return a1; /*0x42981f*/
  }
  else
  {
    v7 = a3; /*0x42979f*/
    do /*0x42980f*/
    {
      v8 = *a4; /*0x4297a1*/
      if ( *a4 == 8 ) /*0x4297a6*/
      {
        v9 = *((__int16 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v11) + 139); /*0x4297b7*/
        if ( v9 == -1 ) /*0x4297c1*/
          v4 = 0; /*0x4297db*/
        else
          v4 = *(_DWORD *)(*((_DWORD *)dword_8B413C + v9) + 40); /*0x4297cc*/
      }
      else
      {
        LOWORD(v12) = v4 + LOWORD(dword_89F688[v8]); /*0x4297f9*/
        HIWORD(v12) = HIWORD(v11) + HIWORD(dword_89F688[v8]); /*0x4297fe*/
        v4 = v12; /*0x429803*/
      }
      ++a4; /*0x429807*/
      --v7; /*0x42980a*/
      v11 = v4; /*0x42980b*/
    }
    while ( v7 ); /*0x42980f*/
    *a1 = v4; /*0x429812*/
    return a1; /*0x429815*/
  }
}



// ==== 0x00429830  ObjectClass::ComputeMovementWeight  this=DynamicVectorClass_uint  sig=csp ====
double __thiscall ComputeMovementWeight(int this, int *a2, _DWORD *a3, char a4, int a5, int a6)
{
  _DWORD *v6; // esi
  int v7; // ebx
  bool v8; // zf
  int v9; // edi
  int v10; // ebp
  unsigned int v11; // esi
  _WORD *v12; // eax
  int v13; // esi
  _DWORD *v14; // esi
  int v15; // esi
  int v16; // edx
  double v17; // st7
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v22; // [esp+Ch] [ebp-18h]
  int v23; // [esp+10h] [ebp-14h]
  int v24; // [esp+14h] [ebp-10h] BYREF
  int v25; // [esp+18h] [ebp-Ch]
  int v26; // [esp+1Ch] [ebp-8h] BYREF
  char v27[4]; // [esp+20h] [ebp-4h] BYREF
  float v28; // [esp+34h] [ebp+10h]

  v6 = a3; /*0x429839*/
  v7 = *a3; /*0x429843*/
  v8 = a5 == 2; /*0x429845*/
  v23 = this; /*0x429850*/
  v28 = flt_81870C[a5]; /*0x429854*/
  v25 = *a2; /*0x429858*/
  if ( v8 ) /*0x42985c*/
  {
    if ( a4 ) /*0x429868*/
      v9 = *(_DWORD *)(v7 + 232); /*0x42986a*/
    else
      v9 = *(_DWORD *)(v7 + 228); /*0x429872*/
    v10 = 0; /*0x42987c*/
    if ( *(_DWORD *)(this + 60) ) /*0x429878*/
      goto LABEL_20; /*0x429878*/
    while ( v9 ) /*0x429888*/
    {
      if ( (*(_BYTE *)(v9 + 20) & 4) == 0 ) /*0x42989a*/
        goto LABEL_20; /*0x42989a*/
      if ( *(double *)(v9 + 1400) == 0.0 ) /*0x4298b1*/
      {
        v11 = *(_DWORD *)(v9 + 1504); /*0x4298b3*/
        if ( v11 == -1 ) /*0x4298bc*/
          break; /*0x4298bc*/
      }
      else
      {
        v11 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v9 + 904), &v26) >> 12) + 1) >> 1) & 7; /*0x4298dc*/
      }
      v12 = (_WORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v9 + 440))(v9, v27); /*0x4298e8*/
      v13 = v11 & 7; /*0x4298f1*/
      LOWORD(v22) = LOWORD(dword_89F688[v13]) + *v12; /*0x42990b*/
      HIWORD(v22) = v12[1] + HIWORD(dword_89F688[v13]); /*0x429919*/
      v24 = v22; /*0x429927*/
      v14 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v24); /*0x429930*/
      if ( (v14[80] & 0x100) != 0 /*0x429964*/
        && (*(_BYTE *)(v9 + 140)
         || *(char *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 444))(v9) + 283) - *((char *)v14 + 283) > 2) )
      {
        v15 = v14[58]; /*0x429966*/
      }
      else
      {
        v15 = v14[57]; /*0x42996e*/
      }
      this = v23; /*0x429974*/
      ++v10; /*0x429978*/
      v9 = v15; /*0x42997c*/
      if ( v10 >= 10 ) /*0x42997e*/
        goto LABEL_20; /*0x42997e*/
    }
    if ( *(_DWORD *)(this + 60) ) /*0x429986*/
LABEL_20:
      v28 = 4.0; /*0x42998d*/
    if ( *(_DWORD *)(this + 60) == 2 ) /*0x42999c*/
      v28 = 1000.0; /*0x42999e*/
    v6 = a3; /*0x4299a6*/
  }
  v16 = *(_DWORD *)(v7 + 320); /*0x4299aa*/
  if ( (v16 & 0x40000) != 0 ) /*0x4299b6*/
    v28 = v28 * 4.0; /*0x4299c2*/
  if ( !a4 || !*(_BYTE *)(this + 1) ) /*0x4299d2*/
    return v28; /*0x429a82*/
  v17 = 1.0; /*0x4299f1*/
  v18 = dword_7E3760[3 * (__int16)(*(_WORD *)(v7 + 38) - *(_WORD *)(v25 + 38)) /*0x429a05*/
                   + (__int16)(*(_WORD *)(v7 + 36) - *(_WORD *)(v25 + 36))];
  if ( (v16 & 0x800) != 0 ) /*0x429a0c*/
  {
    v19 = v6[dword_7E3730[v18]]; /*0x429a1b*/
    v20 = dword_7E3730[((_BYTE)v18 - 4) & 7]; /*0x429a1e*/
  }
  else
  {
    v19 = v6[dword_7E3710[v18]]; /*0x429a34*/
    v20 = dword_7E3710[((_BYTE)v18 - 4) & 7]; /*0x429a37*/
  }
  if ( (*(_DWORD *)(v19 + 320) & 0x100) == 0 ) /*0x429a4e*/
    return 10.0 * v28; /*0x429a58*/
  if ( (*(_DWORD *)(v6[v20] + 320) & 0x100) != 0 ) /*0x429a6b*/
    v17 = 2.0; /*0x429a6f*/
  return v17 * v28; /*0x429a5c*/
}



// ==== 0x00429A90  BuildingClass::UpdatePowerAnimation  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::UpdatePowerAnimation(int this, int a2, __int16 *a3, _DWORD *a4, int a5, int a6, char a7)
{
  __int16 *v7; // edi
  int v8; // ebp
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  float *v20; // edi
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int *v25; // eax
  int v26; // eax
  int *v27; // eax
  int v28; // ebx
  int v29; // edi
  int v30; // eax
  int v31; // edi
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ebp
  double v37; // st7
  char v38; // fps^1
  double v39; // st6
  bool v40; // c0
  char v41; // c2
  bool v42; // c3
  double v43; // st7
  char v44; // fps^1
  double v45; // st6
  bool v46; // c0
  char v47; // c2
  bool v48; // c3
  _DWORD *v49; // edi
  int v50; // ebx
  int *v51; // edi
  signed int v52; // ecx
  __int64 v53; // rax
  int v54; // ebx
  _DWORD *v55; // edi
  unsigned int v56; // ecx
  unsigned int v57; // edx
  int v58; // ebp
  int v59; // ebx
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // edx
  int v63; // ebp
  int v64; // ebx
  unsigned int v65; // ecx
  int v66; // ecx
  int v67; // eax
  __int64 v68; // rax
  int ***v69; // ecx
  int *v70; // edx
  int v71; // edi
  int v72; // ebp
  int v73; // ebx
  int v74; // ecx
  int v75; // eax
  int v76; // edi
  int v77; // ebp
  bool v78; // cc
  int *v79; // ecx
  int v80; // eax
  int v81; // ebx
  int ***v82; // edi
  int v83; // edi
  int v84; // edx
  int v85; // eax
  int v86; // edi
  int v87; // ebp
  int *v88; // eax
  int v89; // ebx
  int *v90; // edi
  int v92; // [esp-2h] [ebp-60h]
  char v93; // [esp+14h] [ebp-4Ah]
  char v94; // [esp+15h] [ebp-49h]
  int ***v95; // [esp+16h] [ebp-48h]
  int v96; // [esp+1Ah] [ebp-44h]
  int v97; // [esp+1Eh] [ebp-40h]
  int *v98; // [esp+22h] [ebp-3Ch]
  int *v99; // [esp+26h] [ebp-38h]
  int *v100; // [esp+26h] [ebp-38h]
  int v101; // [esp+2Ah] [ebp-34h]
  int *v102; // [esp+2Eh] [ebp-30h]
  int *v103; // [esp+2Eh] [ebp-30h]
  int v104; // [esp+32h] [ebp-2Ch]
  __int16 *v105; // [esp+32h] [ebp-2Ch]
  float v106; // [esp+36h] [ebp-28h]
  int v107; // [esp+36h] [ebp-28h]
  int *v108; // [esp+3Ah] [ebp-24h]
  int v109; // [esp+3Eh] [ebp-20h]
  int v110; // [esp+42h] [ebp-1Ch]
  float v111; // [esp+46h] [ebp-18h]
  float v112; // [esp+4Ah] [ebp-14h]
  int v113; // [esp+4Eh] [ebp-10h]
  int v114; // [esp+4Eh] [ebp-10h]
  int ***v115; // [esp+4Eh] [ebp-10h]

  v7 = a3; /*0x429a97*/
  v8 = a2; /*0x429a9b*/
  v101 = 0; /*0x429ab6*/
  v108 = (int *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * (*a3 + (a3[1] << 9))); /*0x429aca*/
  v10 = *v108; /*0x429ace*/
  v102 = (int *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * (*(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9))); /*0x429ad3*/
  v104 = *v108; /*0x429ad7*/
  a2 = *v102; /*0x429adf*/
  if ( !a2 || !v10 ) /*0x429aeb*/
    return 0; /*0x429aeb*/
  v11 = (int)a4; /*0x429af1*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a4 + 44))(a4) == 2 || (*(_DWORD *)(v104 + 320) & 0x100) == 0 ) /*0x429b0e*/
    v12 = *(char *)(v104 + 283); /*0x429b1c*/
  else
    v12 = *(char *)(v104 + 283) + 4; /*0x429b17*/
  *(_DWORD *)(this + 52) = v12; /*0x429b23*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 || !*(_BYTE *)(v11 + 140) ) /*0x429b32*/
    v13 = *(char *)(a2 + 283); /*0x429b50*/
  else
    v13 = *(char *)(a2 + 283) + 4; /*0x429b47*/
  *(_DWORD *)(this + 48) = v13; /*0x429b57*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11) + 3220) ) /*0x429b64*/
  {
    if ( (*(_DWORD *)(a2 + 320) & 0x100) != 0 ) /*0x429b7b*/
    {
      v14 = *(_DWORD *)(this + 48); /*0x429b97*/
      v15 = *(_DWORD *)(v11 + 164) / dword_89C2D8 - v14; /*0x429ba3*/
      if ( (int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) > 2 ) /*0x429bab*/
        *(_DWORD *)(this + 48) = v14 + 4; /*0x429bb0*/
    }
  }
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x429bb7*/
  v17 = *(_DWORD *)(this + 64); /*0x429bc3*/
  *(_DWORD *)(this + 44) = *(_DWORD *)(v16 + 1660); /*0x429bc6*/
  *(_DWORD *)(this + 108) = 0; /*0x429bcd*/
  *(_DWORD *)(this + 112) = *(_DWORD *)v8; /*0x429bda*/
  v110 = v17; /*0x429be2*/
  v95 = (int ***)BuildingClass::AddRectToDrawList((BuildingClass *)this, 0, v102, v7, 0.0); /*0x429bef*/
  if ( *(_WORD *)v8 == *v7 && *(_WORD *)(v8 + 2) == v7[1] && *(_DWORD *)(this + 48) == *(_DWORD *)(this + 52) ) /*0x429c0a*/
    return 0; /*0x429c0a*/
  if ( *(_DWORD *)(this + 60) ) /*0x429c10*/
    BuildingClass::UpdatePowerAnim((BuildingClass *)this, v11); /*0x429c1a*/
  v18 = *(__int16 *)(a2 + 36) + g_MapCellWidth * *(__int16 *)(a2 + 38); /*0x429c39*/
  if ( *(_DWORD *)(this + 48) <= *(char *)(a2 + 283) ) /*0x429c40*/
  {
    *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v18) = *(_DWORD *)(this + 40); /*0x429c5d*/
    *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * v18) = 0; /*0x429c63*/
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v18) = *(_DWORD *)(this + 40); /*0x429c48*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * v18) = 0; /*0x429c4e*/
  }
  v93 = 0; /*0x429c6e*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11) + 3220) ) /*0x429c79*/
  {
    v93 = 1; /*0x429c87*/
    v19 = 0; /*0x429c8c*/
    v20 = (float *)dword_7E3774; /*0x429c8e*/
    do /*0x429d25*/
    {
      v21 = (int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v11 + 904), &a2) >> 12) + 1) >> 1) & 7) /*0x429cb0*/
                - v19);
      v22 = (HIDWORD(v21) ^ v21) - HIDWORD(v21); /*0x429cb3*/
      if ( v22 > 2 && v22 < 6 && v20 != flt_7E3794 ) /*0x429cc5*/
      {
        v23 = v102[*(_DWORD *)v20]; /*0x429cd0*/
        v24 = *(__int16 *)(v23 + 36) + g_MapCellWidth * *(__int16 *)(v23 + 38); /*0x429ce9*/
        if ( *(_DWORD *)(this + 48) <= *(char *)(v23 + 283) + 1 ) /*0x429cf1*/
        {
          *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v24) = *(_DWORD *)(this + 40); /*0x429d0e*/
          *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * v24) = 0; /*0x429d14*/
        }
        else
        {
          *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v24) = *(_DWORD *)(this + 40); /*0x429cf9*/
          *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * v24) = 0; /*0x429cff*/
        }
      }
      ++v20; /*0x429d1b*/
      ++v19; /*0x429d1e*/
    }
    while ( (int)v20 <= (int)flt_7E3794 ); /*0x429d25*/
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) != 1 /*0x429d42*/
    || (v94 = 1, !*(_BYTE *)(*(_DWORD *)(v11 + 1732) + 3596)) )
  {
    v94 = 0; /*0x429d4c*/
  }
  if ( a6 < 0 ) /*0x429d57*/
    a6 = 65527; /*0x429d59*/
  if ( !v95 ) /*0x429d67*/
  {
LABEL_156:
    if ( *(_DWORD *)(this + 60) ) /*0x42a442*/
      BuildingClass::UpdatePowerAnim((BuildingClass *)this, v11); /*0x42a44c*/
    return 0; /*0x42a454*/
  }
  do /*0x42a3d8*/
  {
    if ( v101 >= a6 ) /*0x429d79*/
      break; /*0x429d79*/
    v25 = **v95; /*0x429d89*/
    v98 = v25; /*0x429d8d*/
    if ( v25 == v108 && (*v95)[1] == *(int **)(this + 52) ) /*0x429d9b*/
      break; /*0x429d9b*/
    v97 = 0; /*0x429da3*/
    v96 = 0; /*0x429daa*/
    v109 = *(__int16 *)(*v25 + 36) + g_MapCellWidth * *(__int16 *)(*v25 + 38); /*0x429dbe*/
    do /*0x42a1ad*/
    {
      if ( v96 == 8 ) /*0x429dc9*/
      {
        v26 = *(__int16 *)(*v98 + 278); /*0x429dd1*/
        if ( v26 == -1 ) /*0x429ddb*/
        {
          v27 = (int *)&unk_89C2E0; /*0x429e04*/
        }
        else
        {
          a2 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v26) + 40); /*0x429de9*/
          v27 = (int *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * ((__int16)a2 + (SHIWORD(a2) << 9))); /*0x429dff*/
        }
      }
      else
      {
        v27 = &v98[dword_7E3774[v96]]; /*0x429e16*/
      }
      v28 = *v27; /*0x429e19*/
      v99 = v27; /*0x429e1b*/
      if ( !*v27 ) /*0x429e21*/
        goto LABEL_107; /*0x429e21*/
      v105 = (__int16 *)(v28 + 36); /*0x429e31*/
      if ( v96 == 8 ) /*0x429e35*/
      {
        v29 = g_MapCellWidth * *(__int16 *)(v28 + 38); /*0x429e48*/
        v30 = *(__int16 *)(v28 + 36); /*0x429e4f*/
      }
      else
      {
        v29 = dword_89A304[v96]; /*0x429e37*/
        v30 = v109; /*0x429e3e*/
      }
      v31 = v30 + v29; /*0x429e52*/
      if ( (*(_DWORD *)(v28 + 320) & 0x100) == 0 /*0x429e78*/
        || (v32 = *(char *)(v28 + 283), v33 = *(_DWORD *)(this + 48), LOBYTE(a2) = 0, (int)abs32(v33 - v32) <= 1) )
      {
        LOBYTE(a2) = 1; /*0x429e7a*/
      }
      v34 = *(__int16 *)(*(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x429e9a*/
                       + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(v28 + 36)));
      v35 = *(_DWORD *)(this + 40); /*0x429e9d*/
      v113 = v34; /*0x429ea0*/
      if ( *(_DWORD *)(v110 + 4 * v34) != v35 ) /*0x429ea7*/
      {
        if ( !(_BYTE)a2 ) /*0x429eaf*/
          goto LABEL_62; /*0x429eaf*/
        if ( !*(_BYTE *)(v28 + 290) && a7 ) /*0x429ec1*/
          goto LABEL_107; /*0x429ec1*/
      }
      if ( !(_BYTE)a2 ) /*0x429ecd*/
      {
LABEL_62:
        v36 = 4 * v31; /*0x429f04*/
        v103 = (int *)(4 * v31); /*0x429f0e*/
        if ( *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v31) == v35 ) /*0x429f15*/
        {
          v35 = *(_DWORD *)(this + 32); /*0x429f1b*/
          v43 = *((float *)v95 + 1) + 1.009; /*0x429f21*/
          v45 = *(float *)(v35 + 4 * v31); /*0x429f27*/
          v46 = v45 < v43; /*0x429f2a*/
          v47 = 0; /*0x429f2a*/
          v48 = v45 == v43; /*0x429f2a*/
          BYTE1(v35) = v44; /*0x429f2c*/
          if ( v45 < v43 ) /*0x429f31*/
            goto LABEL_107; /*0x429f31*/
        }
        goto LABEL_64; /*0x429f31*/
      }
      v36 = 4 * v31; /*0x429ed2*/
      v103 = (int *)(4 * v31); /*0x429ed9*/
      if ( *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v31) == v35 ) /*0x429ee0*/
      {
        v35 = *(_DWORD *)(this + 36); /*0x429ee6*/
        v37 = *((float *)v95 + 1) + 1.009; /*0x429eec*/
        v39 = *(float *)(v35 + 4 * v31); /*0x429ef2*/
        v40 = v39 < v37; /*0x429ef5*/
        v41 = 0; /*0x429ef5*/
        v42 = v39 == v37; /*0x429ef5*/
        BYTE1(v35) = v38; /*0x429ef7*/
        if ( v39 < v37 ) /*0x429efc*/
          goto LABEL_107; /*0x429efc*/
      }
LABEL_64:
      LOBYTE(v35) = *(_BYTE *)(this + 8); /*0x429f37*/
      v49 = a4; /*0x429f3e*/
      v50 = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD, int, int))(*a4 + 428))( /*0x429f5a*/
              a4,
              v28,
              v96,
              *(_DWORD *)(this + 48),
              *v98,
              v35);
      if ( v93 && v50 < 7 ) /*0x429f67*/
        v50 = 0; /*0x429f69*/
      if ( v96 == 8 ) /*0x429f70*/
      {
        v52 = abs32(*(__int16 *)(*v98 + 38) - v105[1]); /*0x429fc2*/
        v53 = *(__int16 *)(*v98 + 36) - *v105; /*0x429fcd*/
        v107 = (HIDWORD(v53) ^ v53) - HIDWORD(v53); /*0x429fd4*/
        if ( v107 <= v52 ) /*0x429fd8*/
          v107 = v52; /*0x429fda*/
        v51 = v99; /*0x429fe2*/
        v106 = (float)v107; /*0x429fe6*/
      }
      else
      {
        v92 = (int)v49; /*0x429f7c*/
        v51 = v99; /*0x429f7d*/
        v106 = ComputeMovementWeight(this, v98, v99, (_BYTE)a2 == 0, v50, v92) * *(float *)(this + 4) + flt_81872C[v96]; /*0x429f9d*/
      }
      if ( v50 >= 7 ) /*0x429fed*/
      {
        if ( v51 == v108 && !v94 ) /*0x42a189*/
        {
          v68 = *(_DWORD *)(this + 48) - *(_DWORD *)(this + 52); /*0x42a193*/
          if ( (int)((HIDWORD(v68) ^ v68) - HIDWORD(v68)) <= 1 ) /*0x42a19b*/
            goto LABEL_148; /*0x42a19b*/
        }
      }
      else
      {
        if ( (_BYTE)a2 ) /*0x429ff9*/
        {
          if ( *(_DWORD *)(*(_DWORD *)(this + 24) + v36) == *(_DWORD *)(this + 40) ) /*0x42a006*/
            goto LABEL_107; /*0x42a006*/
        }
        else if ( *(_DWORD *)(*(_DWORD *)(this + 28) + v36) == *(_DWORD *)(this + 40) ) /*0x42a018*/
        {
          goto LABEL_107; /*0x42a018*/
        }
        v54 = BuildingClass::AddRectToDrawList((BuildingClass *)this, v95, v51, a3, v106); /*0x42a035*/
        v100 = (int *)v54; /*0x42a03d*/
        if ( v97 ) /*0x42a041*/
        {
          v55 = *(_DWORD **)(this + 20); /*0x42a052*/
          v56 = *v55 + 1; /*0x42a05c*/
          if ( *v55 == -1 ) /*0x42a05f*/
          {
            v112 = *(float *)(v54 + 8); /*0x42a0d0*/
            v62 = v56 >> 1; /*0x42a0d7*/
            if ( v56 < v55[1] ) /*0x42a0db*/
            {
              for ( ; v56 > 1; v62 >>= 1 ) /*0x42a0e0*/
              {
                v63 = v55[2]; /*0x42a0e2*/
                v64 = *(_DWORD *)(v63 + 4 * v62); /*0x42a0e5*/
                if ( *(float *)(v64 + 8) <= (double)v112 ) /*0x42a0f5*/
                  break; /*0x42a0f5*/
                *(_DWORD *)(v63 + 4 * v56) = v64; /*0x42a0f7*/
                v56 = v62; /*0x42a0fb*/
              }
              *(_DWORD *)(v55[2] + 4 * v56) = v100; /*0x42a10b*/
              v65 = v55[3]; /*0x42a110*/
              ++*v55; /*0x42a116*/
              if ( (unsigned int)v100 > v65 ) /*0x42a118*/
                v55[3] = v100; /*0x42a11a*/
              if ( (unsigned int)v100 < v55[4] ) /*0x42a120*/
                v55[4] = v100; /*0x42a122*/
            }
          }
          else
          {
            v57 = v56 >> 1; /*0x42a065*/
            v111 = *(float *)(v97 + 8); /*0x42a06a*/
            if ( v56 < v55[1] ) /*0x42a073*/
            {
              if ( v56 <= 1 ) /*0x42a078*/
              {
                v60 = v97; /*0x42a0a6*/
              }
              else
              {
                do /*0x42a09a*/
                {
                  v58 = v55[2]; /*0x42a07a*/
                  v59 = *(_DWORD *)(v58 + 4 * v57); /*0x42a07d*/
                  if ( *(float *)(v59 + 8) <= (double)v111 ) /*0x42a08d*/
                    break; /*0x42a08d*/
                  *(_DWORD *)(v58 + 4 * v56) = v59; /*0x42a08f*/
                  v56 = v57; /*0x42a093*/
                  v57 >>= 1; /*0x42a095*/
                }
                while ( v56 > 1 ); /*0x42a09a*/
                v60 = v97; /*0x42a09c*/
                v54 = (int)v100; /*0x42a0a0*/
              }
              *(_DWORD *)(v55[2] + 4 * v56) = v60; /*0x42a0ad*/
              v61 = v55[3]; /*0x42a0b2*/
              ++*v55; /*0x42a0b8*/
              if ( v60 > v61 ) /*0x42a0ba*/
                v55[3] = v60; /*0x42a0bc*/
              if ( v60 < v55[4] ) /*0x42a0c2*/
                v55[4] = v60; /*0x42a0c4*/
            }
            v97 = v54; /*0x42a0c7*/
          }
        }
        else
        {
          v97 = v54; /*0x42a043*/
        }
        if ( (_BYTE)a2 ) /*0x42a12b*/
        {
          *(int *)((char *)v103 + *(_DWORD *)(this + 24)) = *(_DWORD *)(this + 40); /*0x42a137*/
          v66 = *(_DWORD *)(this + 36); /*0x42a13a*/
        }
        else
        {
          *(int *)((char *)v103 + *(_DWORD *)(this + 28)) = *(_DWORD *)(this + 40); /*0x42a149*/
          v66 = *(_DWORD *)(this + 32); /*0x42a14c*/
        }
        *(int *)((char *)v103 + v66) = v100[1]; /*0x42a156*/
        v67 = *(_DWORD *)(this + 108); /*0x42a159*/
        if ( v113 == *(unsigned __int16 *)(this + 2 * v67 + 190) ) /*0x42a16c*/
        {
          *(_DWORD *)(this + 108) = v67 + 1; /*0x42a173*/
          *(_DWORD *)(this + 112) = *(_DWORD *)v105; /*0x42a178*/
        }
      }
LABEL_107:
      ++v96; /*0x42a1a1*/
    }
    while ( v96 <= 8 ); /*0x42a1ad*/
    v69 = (int ***)v97; /*0x42a1b3*/
    if ( !v97 ) /*0x42a1b9*/
    {
      v79 = *(int **)(this + 20); /*0x42a2bb*/
      if ( !*v79 ) /*0x42a2be*/
      {
        v95 = 0; /*0x42a2c4*/
        goto LABEL_147; /*0x42a2c8*/
      }
      v80 = v79[2]; /*0x42a2cd*/
      v81 = 1; /*0x42a2d0*/
      v82 = *(int ****)(v80 + 4); /*0x42a2d8*/
      *(_DWORD *)(v80 + 4) = *(_DWORD *)(v80 + 4 * *v79); /*0x42a2db*/
      v115 = v82; /*0x42a2e3*/
      *(_DWORD *)(v79[2] + 4 * *v79) = 0; /*0x42a2e7*/
      v83 = *v79 - 1; /*0x42a2f1*/
      *v79 = v83; /*0x42a2f3*/
      if ( v83 < 2 /*0x42a315*/
        || (v84 = 2, *(float *)(*(_DWORD *)(v79[2] + 4) + 8) <= (double)*(float *)(*(_DWORD *)(v79[2] + 8) + 8)) )
      {
        v84 = 1; /*0x42a317*/
      }
      if ( v83 < 3 || *(float *)(*(_DWORD *)(v79[2] + 4 * v84) + 8) <= (double)*(float *)(*(_DWORD *)(v79[2] + 12) + 8) ) /*0x42a337*/
      {
        if ( v84 == 1 ) /*0x42a343*/
        {
LABEL_143:
          v69 = v115; /*0x42a3b1*/
LABEL_144:
          v95 = v69; /*0x42a3b5*/
          goto LABEL_145; /*0x42a3b5*/
        }
      }
      else
      {
        v84 = 3; /*0x42a339*/
      }
      do /*0x42a3af*/
      {
        v85 = v79[2]; /*0x42a345*/
        v86 = *(_DWORD *)(v85 + 4 * v81); /*0x42a34b*/
        *(_DWORD *)(v85 + 4 * v81) = *(_DWORD *)(v85 + 4 * v84); /*0x42a34e*/
        v81 = v84; /*0x42a354*/
        *(_DWORD *)(v79[2] + 4 * v84) = v86; /*0x42a356*/
        v87 = *v79; /*0x42a359*/
        v78 = 2 * v84 <= *v79; /*0x42a362*/
        a2 = 2 * v84 + 1; /*0x42a364*/
        if ( v78 /*0x42a383*/
          && *(float *)(*(_DWORD *)(v79[2] + 4 * v84) + 8) > (double)*(float *)(*(_DWORD *)(v79[2] + 8 * v84) + 8) )
        {
          v84 *= 2; /*0x42a385*/
        }
        if ( a2 <= v87 /*0x42a3a7*/
          && *(float *)(*(_DWORD *)(v79[2] + 4 * v84) + 8) > (double)*(float *)(*(_DWORD *)(v79[2] + 4 * a2) + 8) )
        {
          v84 = a2; /*0x42a3a9*/
        }
      }
      while ( v84 != v81 ); /*0x42a3af*/
      goto LABEL_143; /*0x42a3af*/
    }
    v70 = *(int **)(this + 20); /*0x42a1bf*/
    if ( !*v70 ) /*0x42a1c2*/
      goto LABEL_144; /*0x42a1c2*/
    v71 = v70[2]; /*0x42a1cb*/
    v72 = *(_DWORD *)(v71 + 4); /*0x42a1d1*/
    v114 = v72; /*0x42a1d9*/
    if ( *(float *)(v72 + 8) > (double)*(float *)(v97 + 8) ) /*0x42a1e2*/
      goto LABEL_144; /*0x42a1e2*/
    *(_DWORD *)(v71 + 4) = v97; /*0x42a1e8*/
    v73 = 1; /*0x42a1f0*/
    if ( *v70 < 2 /*0x42a212*/
      || (v74 = 2, *(float *)(*(_DWORD *)(v70[2] + 4) + 8) <= (double)*(float *)(*(_DWORD *)(v70[2] + 8) + 8)) )
    {
      v74 = 1; /*0x42a214*/
    }
    if ( *v70 < 3 || *(float *)(*(_DWORD *)(v70[2] + 4 * v74) + 8) <= (double)*(float *)(*(_DWORD *)(v70[2] + 12) + 8) ) /*0x42a234*/
    {
      if ( v74 != 1 ) /*0x42a240*/
        goto LABEL_118; /*0x42a240*/
    }
    else
    {
      v74 = 3; /*0x42a236*/
      do /*0x42a2ac*/
      {
LABEL_118:
        v75 = v70[2]; /*0x42a242*/
        v76 = *(_DWORD *)(v75 + 4 * v73); /*0x42a248*/
        *(_DWORD *)(v75 + 4 * v73) = *(_DWORD *)(v75 + 4 * v74); /*0x42a24b*/
        v73 = v74; /*0x42a251*/
        *(_DWORD *)(v70[2] + 4 * v74) = v76; /*0x42a253*/
        v77 = *v70; /*0x42a256*/
        v78 = 2 * v74 <= *v70; /*0x42a25f*/
        a2 = 2 * v74 + 1; /*0x42a261*/
        if ( v78 /*0x42a280*/
          && *(float *)(*(_DWORD *)(v70[2] + 4 * v74) + 8) > (double)*(float *)(*(_DWORD *)(v70[2] + 8 * v74) + 8) )
        {
          v74 *= 2; /*0x42a282*/
        }
        if ( a2 <= v77 /*0x42a2a4*/
          && *(float *)(*(_DWORD *)(v70[2] + 4 * v74) + 8) > (double)*(float *)(*(_DWORD *)(v70[2] + 4 * a2) + 8) )
        {
          v74 = a2; /*0x42a2a6*/
        }
      }
      while ( v74 != v73 ); /*0x42a2ac*/
      v72 = v114; /*0x42a2ae*/
    }
    v95 = (int ***)v72; /*0x42a2b2*/
LABEL_145:
    if ( v95 ) /*0x42a3bf*/
      *(_DWORD *)(this + 48) = (*v95)[1]; /*0x42a3c6*/
LABEL_147:
    ++v101; /*0x42a3c9*/
  }
  while ( v95 ); /*0x42a3d8*/
LABEL_148:
  if ( v101 == 10000 || !v95 || v101 == a6 || (int)v95[3] < 2 ) /*0x42a3fc*/
  {
    v11 = (int)a4; /*0x42a43e*/
    goto LABEL_156; /*0x42a43e*/
  }
  v88 = globalHelper_02AA90((int)v95, a5); /*0x42a406*/
  v89 = (int)a4; /*0x42a40b*/
  v90 = v88; /*0x42a40f*/
  ParsePathDirections((ObjectClass *)this, (int)v88, a4); /*0x42a415*/
  SimplifyPathFilter((ObjectClass *)this, v90, v89); /*0x42a41e*/
  if ( *(_DWORD *)(this + 60) ) /*0x42a423*/
    BuildingClass::UpdatePowerAnim((BuildingClass *)this, v89); /*0x42a42d*/
  return v90; /*0x42a434*/
}



// ==== 0x0042A460  BuildingClass::AddRectToDrawList  this=TOP  sig=csp ====
int __thiscall BuildingClass::AddRectToDrawList(BuildingClass *this, int ***a2, int *a3, __int16 *a4, float a5)
{
  int uniqueId; // eax
  _DWORD *ptr_C; // eax
  int v9; // edx
  int **v10; // edi
  int v11; // eax
  int *v12; // edx
  int v13; // ecx
  int v14; // ebp
  __int64 v15; // rax
  ObjectClass *nextObject; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  double v22; // [esp+0h] [ebp-18h]
  int *v23; // [esp+20h] [ebp+8h]

  uniqueId = this->?; /*0x42a460*/
  _EBX = a2; /*0x42a46c*/
  _ESI = uniqueId + 16 * (*(_DWORD *)(uniqueId + 0x100000))++; /*0x42a476*/
  ptr_C = this->?; /*0x42a47f*/
  v9 = ptr_C[393216]; /*0x42a482*/
  ptr_C[393216] = v9 + 1; /*0x42a48c*/
  v10 = (int **)&ptr_C[3 * v9]; /*0x42a492*/
  *v10 = a3; /*0x42a49b*/
  if ( a2 ) /*0x42a49d*/
  {
    v10[2] = (int *)*a2; /*0x42a4a1*/
    v11 = *a3; /*0x42a4a6*/
    v12 = (int *)*(char *)(*a3 + 283); /*0x42a4aa*/
    v13 = ***a2; /*0x42a4b1*/
    v10[1] = v12; /*0x42a4b3*/
    if ( (*(_DWORD *)(v11 + 320) & 0x100) == 0 ) /*0x42a4c0*/
      goto LABEL_12; /*0x42a4c0*/
    v14 = *(_DWORD *)(v13 + 320) & 0x100; /*0x42a4c8*/
    if ( v14 ) /*0x42a4d2*/
    {
      if ( (*a2)[1] == (int *)(*(char *)(v13 + 283) + 4) ) /*0x42a4e3*/
      {
        v10[1] = v12 + 1; /*0x42a4e8*/
        goto LABEL_12; /*0x42a4eb*/
      }
      v14 = *(_DWORD *)(v13 + 320) & 0x100; /*0x42a4ed*/
    }
    if ( v14 ) /*0x42a4f3*/
      goto LABEL_12; /*0x42a4f3*/
    v15 = *(char *)(v11 + 283) - (int)(*a2)[1] + 3; /*0x42a504*/
    if ( (int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) > 1 ) /*0x42a50c*/
      goto LABEL_12; /*0x42a50c*/
    nextObject = (ObjectClass *)(v10[1] + 1); /*0x42a511*/
  }
  else
  {
    v10[2] = 0; /*0x42a516*/
    nextObject = this->?; /*0x42a51d*/
  }
  v10[1] = (int *)nextObject; /*0x42a520*/
LABEL_12:
  *(_DWORD *)_ESI = v10; /*0x42a523*/
  if ( a2 ) /*0x42a527*/
  {
    __asm /*0x42a529*/
    {
      fld [esp+10h+arg_C]
      fadd dword ptr [ebx+4]
      fstp dword ptr [esi+4]
    }
    *(float *)(_ESI + 4) = _ET1; /*0x42a530*/
    *(_DWORD *)(_ESI + 12) = (char *)a2[3] + 1; /*0x42a537*/
  }
  else
  {
    *(_DWORD *)(_ESI + 4) = 0; /*0x42a53c*/
    *(_DWORD *)(_ESI + 12) = 1; /*0x42a543*/
  }
  v18 = abs32(*(__int16 *)(*a3 + 36) - *a4); /*0x42a56c*/
  v19 = *(__int16 *)(*a3 + 38) - a4[1]; /*0x42a574*/
  v23 = (int *)(v18 * v18 + ((HIDWORD(v19) ^ v19) - HIDWORD(v19)) * ((HIDWORD(v19) ^ v19) - HIDWORD(v19))); /*0x42a585*/
  __asm /*0x42a589*/
  {
    fild [esp+18h+arg_4]
    fstp [esp+18h+var_18]; double
  }
  Math::Sqrt(v22); /*0x42a590*/
  __asm { fadd dword ptr [esi+4] } /*0x42a595*/
  __asm { fstp dword ptr [esi+8] }
  *(float *)(_ESI + 8) = _ET1; /*0x42a59e*/
  return _ESI; /*0x42a5a1*/
}



// ==== 0x0042A5B0  CellClass::ClearOccupancyGrid  this=CellClass  sig=csp ====
int __thiscall CellClass::ClearOccupancyGrid(CellClass *this)
{
  _DWORD *isoTileTypeIndex; // eax
  int i; // edx
  _DWORD *unknown68; // eax
  int j; // edx
  int result; // eax
  int k; // eax
  int v7; // eax
  int *p_CellClass_field_4C; // ebp
  int v9; // esi
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // edx
  int v15; // [esp+8h] [ebp-8h]

  *(_DWORD *)(this->unknown30 + 1572864) = 0; /*0x42a5b9*/
  *(_DWORD *)&this->lightConvert[2449].__pad_190[4] = 0; /*0x42a5c3*/
  isoTileTypeIndex = (_DWORD *)this->isoTileTypeIndex; /*0x42a5c9*/
  for ( i = 0; i <= *isoTileTypeIndex; *(_DWORD *)(isoTileTypeIndex[2] + 4 * i - 4) = 0 ) /*0x42a5d0*/
    ++i; /*0x42a5d5*/
  *isoTileTypeIndex = 0; /*0x42a5e0*/
  unknown68 = (_DWORD *)this->unknown68; /*0x42a5e2*/
  for ( j = 0; j <= *unknown68; *(_DWORD *)(unknown68[2] + 4 * j - 4) = 0 ) /*0x42a5e9*/
    ++j; /*0x42a5ee*/
  *unknown68 = 0; /*0x42a5f9*/
  result = *(_DWORD *)this->__pad_28 + 1; /*0x42a5fe*/
  *(_DWORD *)this->__pad_28 = result; /*0x42a5ff*/
  if ( !result ) /*0x42a602*/
  {
    for ( k = g_MapCellWidth * g_MapCellWidth - 1; k >= 0; *((_DWORD *)&this->rubble->? + k) = 0 ) /*0x42a611*/
    {
      --k; /*0x42a616*/
      *((_DWORD *)&this->attachedTag->? + k) = 0; /*0x42a617*/
    }
    v7 = &stru_87F5F0.__pad_58[456] - (char *)this; /*0x42a62a*/
    p_CellClass_field_4C = &this->CellClass_field_4C; /*0x42a62d*/
    v15 = 3; /*0x42a634*/
    do /*0x42a67d*/
    {
      v9 = *p_CellClass_field_4C; /*0x42a642*/
      v10 = *(int *)((char *)p_CellClass_field_4C + v7) - 1; /*0x42a648*/
      if ( v10 >= 0 ) /*0x42a649*/
      {
        v11 = (_DWORD *)(v9 + 4 * v10); /*0x42a64b*/
        v12 = *(p_CellClass_field_4C - 3) - v9; /*0x42a64e*/
        v13 = p_CellClass_field_4C[3] - v9; /*0x42a650*/
        v14 = v10 + 1; /*0x42a652*/
        do /*0x42a66b*/
        {
          *(_DWORD *)((char *)v11 + v12) = 0; /*0x42a653*/
          *v11 = 0; /*0x42a65a*/
          *(_DWORD *)((char *)v11-- + v13) = 0; /*0x42a660*/
          --v14; /*0x42a66a*/
        }
        while ( v14 ); /*0x42a66b*/
        v7 = &stru_87F5F0.__pad_58[456] - (char *)this; /*0x42a66d*/
      }
      ++p_CellClass_field_4C; /*0x42a675*/
      --v15; /*0x42a679*/
    }
    while ( v15 ); /*0x42a67d*/
    result = *(_DWORD *)this->__pad_28 + 1; /*0x42a683*/
    *(_DWORD *)this->__pad_28 = result; /*0x42a685*/
  }
  return result; /*0x42a688*/
}



// ==== 0x0042A6D0  Tactical::ConstructTacticalSurface  this=CellClass  sig=csp ====
char *__thiscall ConstructTacticalSurface(char *this)
{
  _DWORD *v2; // edi
  int v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  void *v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  void *v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int *v19; // eax
  _DWORD *v20; // eax
  int i; // ecx
  char *v22; // ecx
  _DWORD *v23; // ebp
  char *v25; // [esp+10h] [ebp-Ch]
  char *v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+18h] [ebp-4h]

  *this = 0; /*0x42a6e0*/
  this->ptr_8 = 0; /*0x42a6e2*/
  this->ptr_C = 0; /*0x42a6e5*/
  this->ptr_10 = 1; /*0x42a6e8*/
  this->ptr_8 = 1065353216; /*0x42a6eb*/
  this->ptr_C = 1; /*0x42a6f2*/
  this->attachedTag = 0; /*0x42a6f5*/
  this->rubble = 0; /*0x42a6f8*/
  this->ptr_C = 0; /*0x42a6fb*/
  this->smudgeTypeIndex = 0; /*0x42a6fe*/
  this->attached1 = -1; /*0x42a701*/
  this->q02C = -1; /*0x42a704*/
  this->q038 = 1; /*0x42a707*/
  this->q03C = 0; /*0x42a70a*/
  this->CellClass_field_6C = -1; /*0x42a70d*/
  this->q038 = 0; /*0x42a710*/
  this->firstObject = 0; /*0x42a714*/
  v2 = this + 116; /*0x42a718*/
  v3 = 3; /*0x42a71b*/
  do /*0x42a73d*/
  {
    VectorClassUInt::Constructor(0, 0); /*0x42a724*/
    *v2 = &DynamicVectorClass<unsigned int>::`vftable'; /*0x42a729*/
    v2[5] = 10; /*0x42a72f*/
    v2[4] = 0; /*0x42a736*/
    v2 += 6; /*0x42a739*/
    --v3; /*0x42a73c*/
  }
  while ( v3 ); /*0x42a73d*/
  v4 = __2_YAPAXI_Z(0x14u); /*0x42a741*/
  v5 = v4; /*0x42a746*/
  if ( v4 ) /*0x42a74d*/
  {
    v4[3] = 0; /*0x42a754*/
    v4[4] = -1; /*0x42a757*/
    *v4 = 0; /*0x42a75e*/
    v4[1] = 0x10000; /*0x42a760*/
    v6 = __2_YAPAXI_Z(0x40004u); /*0x42a767*/
    v7 = v5[1]; /*0x42a76c*/
    v5[2] = v6; /*0x42a76f*/
    v8 = 0; /*0x42a775*/
    if ( v7 >= 0 ) /*0x42a779*/
    {
      do /*0x42a788*/
      {
        ++v8; /*0x42a77e*/
        *(_DWORD *)(v5[2] + 4 * v8 - 4) = 0; /*0x42a77f*/
      }
      while ( v8 <= v5[1] ); /*0x42a788*/
    }
  }
  else
  {
    v5 = 0; /*0x42a78c*/
  }
  this->isoTileTypeIndex = v5; /*0x42a790*/
  v9 = __2_YAPAXI_Z(0x14u); /*0x42a793*/
  v10 = v9; /*0x42a798*/
  if ( v9 ) /*0x42a79f*/
  {
    v9[3] = 0; /*0x42a7a6*/
    v9[4] = -1; /*0x42a7a9*/
    *v9 = 0; /*0x42a7b0*/
    v9[1] = 10000; /*0x42a7b2*/
    v11 = __2_YAPAXI_Z(0x9C44u); /*0x42a7b9*/
    v12 = v10[1]; /*0x42a7be*/
    v10[2] = v11; /*0x42a7c1*/
    v13 = 0; /*0x42a7c7*/
    if ( v12 >= 0 ) /*0x42a7cb*/
    {
      do /*0x42a7da*/
      {
        ++v13; /*0x42a7d0*/
        *(_DWORD *)(v10[2] + 4 * v13 - 4) = 0; /*0x42a7d1*/
      }
      while ( v13 <= v10[1] ); /*0x42a7da*/
    }
  }
  else
  {
    v10 = 0; /*0x42a7de*/
  }
  this->q01A = v10; /*0x42a7e5*/
  v14 = __2_YAPAXI_Z(0x100004u); /*0x42a7e8*/
  if ( v14 ) /*0x42a7f2*/
  {
    v15 = v14 + 2; /*0x42a7f4*/
    v16 = 0x10000; /*0x42a7f7*/
    do /*0x42a808*/
    {
      v15[1] = 0; /*0x42a7fc*/
      *v15 = 0; /*0x42a7ff*/
      *(v15 - 1) = 0; /*0x42a801*/
      v15 += 4; /*0x42a804*/
      --v16; /*0x42a807*/
    }
    while ( v16 ); /*0x42a808*/
    v14[0x40000] = 0; /*0x42a80a*/
  }
  else
  {
    v14 = 0; /*0x42a812*/
  }
  this->ptr_8 = v14; /*0x42a819*/
  v17 = __2_YAPAXI_Z(0x180004u); /*0x42a81c*/
  if ( v17 ) /*0x42a826*/
    v17[393216] = 0; /*0x42a828*/
  else
    v17 = 0; /*0x42a830*/
  this->ptr_10 = v17; /*0x42a832*/
  v17[393216] = 0; /*0x42a835*/
  v18 = 0; /*0x42a83e*/
  *(_DWORD *)(this->ptr_8 + 0x100000) = 0; /*0x42a840*/
  v19 = (int *)this->isoTileTypeIndex; /*0x42a846*/
  if ( *v19 >= 0 ) /*0x42a84b*/
  {
    do /*0x42a859*/
    {
      ++v18; /*0x42a850*/
      *(_DWORD *)(v19[2] + 4 * v18 - 4) = 0; /*0x42a851*/
    }
    while ( v18 <= *v19 ); /*0x42a859*/
  }
  *v19 = 0; /*0x42a85b*/
  v20 = (_DWORD *)this->q01A; /*0x42a85d*/
  for ( i = 0; i <= *v20; *(_DWORD *)(v20[2] + 4 * i - 4) = 0 ) /*0x42a864*/
    ++i; /*0x42a869*/
  *v20 = 0; /*0x42a874*/
  v22 = this + 116; /*0x42a87c*/
  v26 = this + 188; /*0x42a87f*/
  v25 = this + 116; /*0x42a883*/
  v23 = this + 76; /*0x42a887*/
  v27 = 3; /*0x42a88a*/
  while ( 1 ) /*0x42a898*/
  {
    *(v23 - 3) = 0; /*0x42a898*/
    *v23 = 0; /*0x42a89b*/
    v23[3] = 0; /*0x42a89e*/
    (*(void (__thiscall **)(char *))(*(_DWORD *)v22 + 12))(v22); /*0x42a8a3*/
    memset(v26, 0, 0x3E8u); /*0x42a8b5*/
    v23[778] = 0; /*0x42a8bf*/
    ++v23; /*0x42a8c5*/
    v25 += 24; /*0x42a8d2*/
    v26 += 1000; /*0x42a8d6*/
    if ( !--v27 ) /*0x42a8de*/
      break; /*0x42a8de*/
    v22 = v25; /*0x42a894*/
  }
  this->unknown64 = __2_YAPAXI_Z(0x27100u); /*0x42a8ed*/
  return this; /*0x42a8f2*/
}



// ==== 0x0042A900  ObjectClass::method_42A900  this=ObjectClass  sig=csp ====
void __thiscall sub_42A900(ObjectClass *this)
{
  void **abstractFlags; // esi
  void **v3; // esi
  void *uniqueId; // eax
  void *ptr_C; // eax
  void *nextArrayIndex; // eax
  void **v7; // esi
  int v8; // ebp
  char *v9; // esi
  int v10; // edi
  void *v11; // eax

  abstractFlags = (void **)this->?; /*0x42a907*/
  if ( abstractFlags ) /*0x42a90c*/
  {
    __3_YAXPAX_Z(abstractFlags[2]); /*0x42a912*/
    __3_YAXPAX_Z(abstractFlags); /*0x42a918*/
  }
  v3 = *(void ***)&this->bombVisible; /*0x42a920*/
  this->? = 0; /*0x42a923*/
  if ( v3 ) /*0x42a928*/
  {
    __3_YAXPAX_Z(v3[2]); /*0x42a92e*/
    __3_YAXPAX_Z(v3); /*0x42a934*/
  }
  uniqueId = (void *)this->?; /*0x42a93c*/
  *(_DWORD *)&this->bombVisible = 0; /*0x42a93f*/
  if ( uniqueId ) /*0x42a944*/
    __3_YAXPAX_Z(uniqueId); /*0x42a947*/
  ptr_C = this->?; /*0x42a94f*/
  this->? = 0; /*0x42a952*/
  if ( ptr_C ) /*0x42a957*/
    __3_YAXPAX_Z(ptr_C); /*0x42a95a*/
  nextArrayIndex = (void *)this->?; /*0x42a962*/
  this->? = 0; /*0x42a965*/
  if ( nextArrayIndex ) /*0x42a96a*/
  {
    __3_YAXPAX_Z(nextArrayIndex); /*0x42a96d*/
    this->? = 0; /*0x42a975*/
  }
  if ( this->? ) /*0x42a978*/
  {
    __3_YAXPAX_Z((void *)this->?); /*0x42a980*/
    this->? = 0; /*0x42a988*/
  }
  if ( this->occupant ) /*0x42a98b*/
  {
    __3_YAXPAX_Z((void *)this->occupant); /*0x42a993*/
    this->occupant = 0; /*0x42a99b*/
  }
  if ( this->? ) /*0x42a99e*/
  {
    __3_YAXPAX_Z(this->?); /*0x42a9a6*/
    this->? = 0; /*0x42a9ae*/
  }
  v7 = (void **)&this->ambientSoundController[4]; /*0x42a9b2*/
  v8 = 3; /*0x42a9b5*/
  do /*0x42a9f5*/
  {
    if ( *(v7 - 3) ) /*0x42a9ba*/
    {
      __3_YAXPAX_Z(*(v7 - 3)); /*0x42a9c2*/
      *(v7 - 3) = 0; /*0x42a9ca*/
    }
    if ( *v7 ) /*0x42a9cd*/
    {
      __3_YAXPAX_Z(*v7); /*0x42a9d4*/
      *v7 = 0; /*0x42a9dc*/
    }
    if ( v7[3] ) /*0x42a9de*/
    {
      __3_YAXPAX_Z(v7[3]); /*0x42a9e6*/
      v7[3] = 0; /*0x42a9ee*/
    }
    ++v7; /*0x42a9f1*/
    --v8; /*0x42a9f4*/
  }
  while ( v8 ); /*0x42a9f5*/
  __3_YAXPAX_Z((void *)this->customSound); /*0x42a9fb*/
  v9 = (char *)this + 188; /*0x42aa03*/
  v10 = 3; /*0x42aa09*/
  do /*0x42aa37*/
  {
    v11 = (void *)*((_DWORD *)v9 - 5); /*0x42aa0f*/
    v9 -= 24; /*0x42aa12*/
    *(_DWORD *)v9 = &VectorClass<unsigned int>::`vftable'; /*0x42aa17*/
    if ( v11 ) /*0x42aa1d*/
    {
      if ( v9[13] ) /*0x42aa1f*/
      {
        __3_YAXPAX_Z(v11); /*0x42aa25*/
        *((_DWORD *)v9 + 1) = 0; /*0x42aa2d*/
      }
    }
    --v10; /*0x42aa30*/
    v9[13] = 0; /*0x42aa31*/
    *((_DWORD *)v9 + 2) = 0; /*0x42aa34*/
  }
  while ( v10 ); /*0x42aa37*/
}



// ==== 0x0042AA90  globalHelper_02AA90  this=-  sig=csp ====
int *__stdcall sub_42AA90(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // ebp
  _DWORD *v6; // ebx
  int v7; // eax
  char *v8; // ecx
  __int64 v9; // rax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  bool v13; // zf
  int *v15; // [esp+0h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-8h]

  if ( (byte_89A300 & 1) == 0 ) /*0x42aa9a*/
  {
    byte_89A300 |= 1u; /*0x42aaa6*/
    atexit(nullsub_4); /*0x42aaac*/
  }
  v2 = a1; /*0x42aab7*/
  v3 = Math::RoundToInt(*(float *)(a1 + 8)); /*0x42aabf*/
  v4 = a2; /*0x42aac4*/
  dword_89A2DC = v3; /*0x42aac8*/
  dword_89A2E0 = *(_DWORD *)(a1 + 12); /*0x42aad7*/
  dword_89A2E8 = 0; /*0x42aadc*/
  word_89A2F0 = 0; /*0x42aae2*/
  word_89A2F2 = 0; /*0x42aae9*/
  dword_89A2E4 = a2; /*0x42aaf0*/
  dword_89A2EC = (int)&unk_89A324; /*0x42aaf6*/
  v5 = *(_DWORD **)a1; /*0x42aafc*/
  v6 = *(_DWORD **)(*(_DWORD *)a1 + 8); /*0x42ab01*/
  v7 = *(_DWORD *)(a1 + 12) - 2; /*0x42ab04*/
  if ( v7 >= 0 ) /*0x42ab07*/
  {
    v8 = (char *)&unk_89A324 - a2; /*0x42ab10*/
    v15 = (int *)(a2 + 4 * v7); /*0x42ab13*/
    v16 = v7 + 1; /*0x42ab1b*/
    do /*0x42aba7*/
    {
      if ( v6 ) /*0x42ab21*/
      {
        *(int *)((char *)v15 + (_DWORD)v8) = v6[1]; /*0x42ab2a*/
        v9 = *(__int16 *)(*(_DWORD *)*v6 + 38) - *(__int16 *)(*(_DWORD *)*v5 + 38); /*0x42ab48*/
        if ( (int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) > 1 /*0x42ab64*/
          || (v10 = *(__int16 *)(*(_DWORD *)*v6 + 36), v11 = *(__int16 *)(*(_DWORD *)*v5 + 36),
                                                       (int)abs32(v10 - v11) > 1) )
        {
          v12 = 8; /*0x42ab76*/
        }
        else
        {
          v12 = dword_818760[v10 + 3 * (*(__int16 *)(*(_DWORD *)*v6 + 38) - *(__int16 *)(*(_DWORD *)*v5 + 38)) - v11]; /*0x42ab6d*/
        }
        v2 = a1; /*0x42ab7f*/
        v4 = a2; /*0x42ab83*/
        *v15 = v12; /*0x42ab87*/
        v8 = (char *)&unk_89A324 - a2; /*0x42ab89*/
      }
      v5 = (_DWORD *)v5[2]; /*0x42ab95*/
      v6 = (_DWORD *)v6[2]; /*0x42ab98*/
      v13 = v16 == 1; /*0x42ab9e*/
      --v15; /*0x42ab9f*/
      --v16; /*0x42aba3*/
    }
    while ( !v13 ); /*0x42aba7*/
  }
  *(_DWORD *)(v4 + 4 * *(_DWORD *)(v2 + 12) - 4) = -1; /*0x42abb2*/
  dword_89A2D8 = *(_DWORD *)(*(_DWORD *)*v5 + 36); /*0x42abc2*/
  if ( !dword_89A2DC ) /*0x42abd2*/
    dword_89A2DC = 1; /*0x42abd4*/
  return &dword_89A2D8; /*0x42abe3*/
}



// ==== 0x0042ABF0  nullsub_4  this=-  sig=ida-proto ====
void __cdecl nullsub_4()
{
  ; /*0x42abf0*/
}



// ==== 0x0042AC00  CellClass::setOverlayType  this=CellClass  sig=csp ====
int __thiscall CellClass::setOverlayType(CellClass *this, int a2)
{
  size_t v3; // edi

  if ( this->attachedTag ) /*0x42ac06*/
  {
    __3_YAXPAX_Z(this->attachedTag); /*0x42ac0e*/
    this->attachedTag = 0; /*0x42ac16*/
  }
  if ( this->rubble ) /*0x42ac19*/
  {
    __3_YAXPAX_Z(this->rubble); /*0x42ac21*/
    this->rubble = 0; /*0x42ac29*/
  }
  if ( this->smudgeTypeIndex ) /*0x42ac2c*/
  {
    __3_YAXPAX_Z((void *)this->smudgeTypeIndex); /*0x42ac34*/
    this->smudgeTypeIndex = 0; /*0x42ac3c*/
  }
  if ( this->overlayTypeIndex ) /*0x42ac3f*/
  {
    __3_YAXPAX_Z((void *)this->overlayTypeIndex); /*0x42ac47*/
    this->overlayTypeIndex = 0; /*0x42ac4f*/
  }
  g_MapCellWidth = *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 8) + 1; /*0x42ac60*/
  v3 = 4 * g_MapCellWidth * g_MapCellWidth; /*0x42ac68*/
  this->rubble = (BuildingTypeClass *)__2_YAPAXI_Z(v3); /*0x42ac76*/
  this->attachedTag = (TagClass *)__2_YAPAXI_Z(v3); /*0x42ac7f*/
  this->smudgeTypeIndex = __2_YAPAXI_Z(v3); /*0x42ac88*/
  this->overlayTypeIndex = __2_YAPAXI_Z(v3); /*0x42ac90*/
  dword_89A304[0] = -g_MapCellWidth; /*0x42aca1*/
  dword_89A310 = g_MapCellWidth + 1; /*0x42acac*/
  dword_89A308 = 1 - g_MapCellWidth; /*0x42acb8*/
  dword_89A30C = 1; /*0x42acc4*/
  dword_89A314 = g_MapCellWidth; /*0x42acce*/
  dword_89A318 = g_MapCellWidth - 1; /*0x42acd3*/
  dword_89A31C = -1; /*0x42acd9*/
  dword_89A320 = -1 - g_MapCellWidth; /*0x42ace3*/
  return g_MapCellWidth; /*0x42acc3*/
}



// ==== 0x0042ACF0  BuildingClass::UpdatePowerAnim  this=TOP  sig=csp ====
char __thiscall BuildingClass::UpdatePowerAnim(BuildingClass *this, int a2)
{
  int v2; // eax
  int v3; // esi
  char *v4; // edi
  unsigned int v5; // edx
  __int16 v6; // cx
  __int16 *v7; // ebx
  __int64 v8; // rax
  int *v9; // ebp
  char v10; // al
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  int *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int16 v19; // dx
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  int v22; // edi
  int v23; // esi
  _DWORD *v24; // eax
  __int16 v26[2]; // [esp+10h] [ebp-28h] BYREF
  __int16 *v27; // [esp+14h] [ebp-24h]
  __int16 v28[2]; // [esp+18h] [ebp-20h] BYREF
  BuildingClass *v29; // [esp+1Ch] [ebp-1Ch]
  int v30; // [esp+20h] [ebp-18h]
  int v31; // [esp+28h] [ebp-10h]
  __int16 v32[2]; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v33[2]; // [esp+30h] [ebp-8h] BYREF
  int v34; // [esp+34h] [ebp-4h] BYREF

  LOBYTE(v2) = HIBYTE(this->TechnoClass); /*0x42acf3*/
  v29 = this; /*0x42acfc*/
  if ( !(_BYTE)v2 ) /*0x42ad00*/
    return v2; /*0x42ad00*/
  v3 = a2; /*0x42ad06*/
  *(_DWORD *)v28 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 440))(a2, &a2); /*0x42ad25*/
  v4 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x42ad32*/
  v5 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v3 + 904), &v34) >> 12) + 1) >> 1) & 7; /*0x42ad4d*/
  v6 = LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]) + v28[0]; /*0x42ad50*/
  LOWORD(v5) = HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x42ad5f*/
  LOWORD(a2) = v6; /*0x42ad67*/
  HIWORD(a2) = v28[1] + v5; /*0x42ad7b*/
  *(_DWORD *)v32 = a2; /*0x42ad84*/
  v7 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x42ad8d*/
  v27 = v7; /*0x42ad8f*/
  if ( (*((_DWORD *)v7 + 80) & 0x100) != 0 /*0x42adb8*/
    && ((v8 = v4[283] - *((char *)v7 + 283), (int)((HIDWORD(v8) ^ v8) - HIDWORD(v8)) > 3) || *(_BYTE *)(v3 + 140)) )
  {
    v9 = (int *)*((_DWORD *)v7 + 58); /*0x42adc2*/
    v10 = 1; /*0x42adc8*/
  }
  else
  {
    v9 = (int *)*((_DWORD *)v7 + 57); /*0x42adcc*/
    v10 = 0; /*0x42add2*/
  }
  if ( !v9 )
    v9 = (int *)globalHelper_02B080(v7 + 18, (v10 != 0 ? 4 : 0) + *((char *)v7 + 283));
  v11 = *(_DWORD *)v3; /*0x42adf8*/
  LOBYTE(a2) = 0; /*0x42adfc*/
  v12 = (*(int (__thiscall **)(int))(v11 + 132))(v3); /*0x42ae07*/
  *(_DWORD *)v33 = v12; /*0x42ae0b*/
  if ( v9 ) /*0x42ae0f*/
  {
    while ( 1 ) /*0x42ae15*/
    {
      if ( (*(int (__thiscall **)(int *))(*v9 + 44))(v9) != 1 && (*(int (__thiscall **)(int *))(*v9 + 44))(v9) != 15 ) /*0x42ae2d*/
        goto LABEL_36; /*0x42ae2d*/
      v13 = 0; /*0x42ae39*/
      *(_DWORD *)v26 = v9[342]; /*0x42ae3b*/
      v14 = (*(int (__thiscall **)(int *))(*v9 + 132))(v9); /*0x42ae44*/
      if ( v29->?[0] == 2 /*0x42ae74*/
        || v12 != v14
        && *(_DWORD *)(v12 + 1656) > *(_DWORD *)(v14 + 1656)
        && (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v26, 1) )
      {
        v15 = v9 + 376; /*0x42ae88*/
        if ( (*(int (__thiscall **)(int *))(*v9 + 44))(v9) == 1 ) /*0x42ae8e*/
        {
          if ( *v15 != -1 && v9[377] != -1 ) /*0x42ae9c*/
            goto LABEL_27; /*0x42ae9c*/
        }
        else if ( *v15 != -1 && v9[377] != -1 && v9[378] != -1 ) /*0x42aeef*/
        {
LABEL_27:
          LOBYTE(a2) = 1; /*0x42aef1*/
          do /*0x42afb5*/
          {
            if ( v13 >= 24 ) /*0x42aef9*/
              break; /*0x42aef9*/
            v16 = *v15; /*0x42aeff*/
            if ( *v15 == 8 ) /*0x42af04*/
            {
              v17 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26) + 139); /*0x42af15*/
              if ( v17 == -1 ) /*0x42af1f*/
              {
                v30 = 0; /*0x42af31*/
                v18 = 0; /*0x42af3b*/
              }
              else
              {
                v18 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v17) + 40); /*0x42af2a*/
              }
            }
            else
            {
              v19 = HIWORD(g_DDrawSurfaceManager.scenario[v16 + 82]); /*0x42af49*/
              LOWORD(v31) = v26[0] + LOWORD(g_DDrawSurfaceManager.scenario[v16 + 82]); /*0x42af5b*/
              HIWORD(v31) = v26[1] + v19; /*0x42af60*/
              v18 = v31; /*0x42af65*/
            }
            *(_DWORD *)v26 = v18; /*0x42af69*/
            v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x42af80*/
            v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x42af88*/
            ++v15; /*0x42af9e*/
            ++v13; /*0x42afad*/
            v21[80] ^= (v21[80] ^ ~v20[80]) & 0x40000; /*0x42afae*/
          }
          while ( *v15 != -1 ); /*0x42afb5*/
          v7 = v27; /*0x42afbb*/
LABEL_36:
          v9 = (int *)v9[12]; /*0x42afbf*/
          v12 = *(_DWORD *)v33; /*0x42afc2*/
          goto LABEL_20; /*0x42afc6*/
        }
      }
      v9 = (int *)v9[12]; /*0x42ae9e*/
      v7 = v27; /*0x42aea1*/
LABEL_20:
      if ( !v9 ) /*0x42aea7*/
      {
        if ( !(_BYTE)a2 ) /*0x42aeb3*/
          break; /*0x42aeb3*/
LABEL_37:
        v22 = -2; /*0x42afcb*/
        do /*0x42b04d*/
        {
          v23 = -2; /*0x42afd0*/
          do /*0x42b047*/
          {
            v30 = *((_DWORD *)v7 + 9); /*0x42afd8*/
            LOWORD(a2) = v22 + v30; /*0x42afe4*/
            HIWORD(a2) = v23 + HIWORD(v30); /*0x42afe9*/
            *(_DWORD *)v33 = a2; /*0x42affc*/
            v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v33); /*0x42b000*/
            if ( *((_BYTE *)v24 + 292) ) /*0x42b005*/
            {
              v31 = v24[9]; /*0x42b017*/
              if ( v31 != *(_DWORD *)v28 ) /*0x42b01b*/
                v24[80] ^= (v24[80] ^ ~v24[80]) & 0x40000; /*0x42b03d*/
            }
            ++v23; /*0x42b043*/
          }
          while ( v23 < 3 ); /*0x42b047*/
          ++v22; /*0x42b049*/
        }
        while ( v22 < 3 ); /*0x42b04d*/
        v2 = *((_DWORD *)v7 + 80); /*0x42b04f*/
        *((_DWORD *)v7 + 80) = v2 ^ (v2 ^ ~v2) & 0x40000; /*0x42b063*/
        return v2; /*0x42b063*/
      }
    }
  }
  LOBYTE(v2) = (_BYTE)v29; /*0x42aeb9*/
  if ( v29->?[0] != 1 ) /*0x42aec1*/
    goto LABEL_37; /*0x42aec1*/
  v29->?[0] = 0; /*0x42aeca*/
  return v2; /*0x42aec7*/
}



// ==== 0x0042B080  globalHelper_02B080  this=-  sig=csp ====
int __stdcall sub_42B080(__int16 *a1, int a2)
{
  _WORD *v2; // ebx
  int v3; // edi
  int v4; // ebp
  _DWORD *v5; // ecx
  __int64 v6; // rax
  int v7; // esi
  bool v8; // zf
  int v10; // [esp+10h] [ebp-18h]
  __int16 *v11; // [esp+14h] [ebp-14h]
  int v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-Ch]
  int v14; // [esp+20h] [ebp-8h]

  v2 = a1; /*0x42b084*/
  v3 = a2 * dword_89C2D8; /*0x42b0ab*/
  v13 = (*a1 << 8) + 128; /*0x42b0b0*/
  v14 = (a1[1] << 8) + 128; /*0x42b0b4*/
  v10 = -2; /*0x42b0bc*/
  while ( 2 ) /*0x42b0c4*/
  {
    v4 = -2; /*0x42b0c4*/
    v12 = -2; /*0x42b0c9*/
    do /*0x42b18f*/
    {
      LOWORD(v11) = v4 + *v2; /*0x42b0dc*/
      HIWORD(v11) = v10 + v2[1]; /*0x42b0e5*/
      a1 = v11; /*0x42b0f4*/
      v5 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x42b0fd*/
      if ( (v5[80] & 0x100) != 0 && (v6 = *((char *)v5 + 283) - a2, (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) > 2) ) /*0x42b11d*/
        v7 = v5[58]; /*0x42b11f*/
      else
        v7 = v5[57]; /*0x42b127*/
      if ( v7 ) /*0x42b12f*/
      {
        while ( 1 ) /*0x42b137*/
        {
          v8 = (*(_BYTE *)(v7 + 20) & 4) == 0; /*0x42b137*/
          LOBYTE(a1) = (*(_BYTE *)(v7 + 20) & 4) != 0; /*0x42b13a*/
          if ( !v8 ) /*0x42b13e*/
          {
            if ( !*(_DWORD *)(v7 + 1652) ) /*0x42b140*/
              WinAPI::Wrapper(-2147467261); /*0x42b14f*/
            if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v7 + 1652) + 160))( /*0x42b172*/
                   *(_DWORD *)(v7 + 1652),
                   v13,
                   v14,
                   v3) )
            {
              return v7; /*0x42b1b3*/
            }
          }
          v7 = *(_DWORD *)(v7 + 48); /*0x42b17c*/
          if ( !v7 ) /*0x42b181*/
          {
            v4 = v12; /*0x42b183*/
            break; /*0x42b183*/
          }
        }
      }
      v12 = ++v4; /*0x42b18b*/
    }
    while ( v4 < 3 ); /*0x42b18f*/
    if ( ++v10 < 3 ) /*0x42b1a1*/
      continue; /*0x42b1a1*/
    break;
  }
  return 0; /*0x42b1a9*/
}



// ==== 0x0042B1C0  Cell::PosToIndex  this=Cell  sig=csp ====
int __thiscall Cell::PosToIndex(Cell *this)
{
  return ((SLOWORD(this->Cell_field_0x0) - SHIWORD(this->Cell_field_0x0) + *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1) >> 1) /*0x42b1e3*/
       + *(_DWORD *)&stru_87F5F0.__pad_58[660]
       * (SLOWORD(this->Cell_field_0x0) - *(_DWORD *)&stru_87F5F0.__pad_58[660] + SHIWORD(this->Cell_field_0x0) - 1);
}



// ==== 0x0042B1F0  Object::ComputeAllocationSize  this=Object  sig=csp ====
int Object_ComputeAllocationSize()
{
  return 2 * dword_87F8DC * (dword_87F8E0 + 4); /*0x42b201*/
}



// ==== 0x0042B210  ObjectClass::ParsePathDirections  this=ObjectClass  sig=csp ====
char __thiscall ParsePathDirections(ObjectClass *this, int a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // edi
  int *v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  bool v10; // zf
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  __int16 v14; // dx
  int v15; // eax
  __int16 v16; // dx
  __int16 v18[2]; // [esp+10h] [ebp-2Ch] BYREF
  int v19; // [esp+14h] [ebp-28h]
  int *v20; // [esp+18h] [ebp-24h] BYREF
  int v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+28h] [ebp-14h]
  int v25; // [esp+2Ch] [ebp-10h]
  int v26; // [esp+30h] [ebp-Ch]
  int v27; // [esp+34h] [ebp-8h]
  ObjectClass *v28; // [esp+38h] [ebp-4h]
  char v29; // [esp+40h] [ebp+4h]

  v28 = this; /*0x42b218*/
  v3 = *(_DWORD *)(a2 + 20); /*0x42b220*/
  v4 = *(_DWORD *)(a2 + 12); /*0x42b225*/
  v5 = *(int **)a2; /*0x42b228*/
  v7 = -1; /*0x42b22b*/
  v8 = 0; /*0x42b22e*/
  v9 = 0; /*0x42b230*/
  v10 = *(_DWORD *)(a2 + 8) == 1; /*0x42b232*/
  v26 = *(_DWORD *)(a2 + 8) - 1; /*0x42b234*/
  v6 = v26; /*0x42b22a*/
  v24 = -1; /*0x42b238*/
  v27 = v3; /*0x42b23c*/
  v21 = 0; /*0x42b240*/
  v29 = 0; /*0x42b244*/
  v19 = 0; /*0x42b249*/
  v20 = v5; /*0x42b24d*/
  *(_DWORD *)v18 = v5; /*0x42b251*/
  if ( v26 < 0 || v10 ) /*0x42b255*/
    return (char)v5; /*0x42b255*/
  while ( v19 + v21 < v6 ) /*0x42b267*/
  {
    if ( !v29 ) /*0x42b273*/
    {
      v11 = *(_DWORD *)(v4 + 4 * (v9 + v8)); /*0x42b27c*/
      v12 = ((_BYTE)v11 - (_BYTE)v7) & 7; /*0x42b283*/
      if ( v11 == v7 ) /*0x42b288*/
      {
        ++v8; /*0x42b28a*/
      }
      else if ( v12 != 2 && v12 != 6 || v7 == -1 || v7 == 8 || v11 == 8 ) /*0x42b2a4*/
      {
        v9 += v8; /*0x42b2bf*/
        v8 = 1; /*0x42b2c1*/
        if ( (v11 & 1) != 0 ) /*0x42b2c6*/
          v7 = v11; /*0x42b2c8*/
        else
          v7 = -1; /*0x42b2cc*/
        v20 = *(int **)v18; /*0x42b2d3*/
      }
      else
      {
        v29 = 1; /*0x42b2a6*/
        v24 = *(_DWORD *)(v4 + 4 * (v9 + v8)); /*0x42b2ab*/
        v19 = 1; /*0x42b2af*/
        v21 = v9 + v8; /*0x42b2b7*/
      }
      if ( v11 == 8 ) /*0x42b2da*/
      {
        v13 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18) + 139); /*0x42b2eb*/
        if ( v13 == -1 ) /*0x42b2f5*/
        {
          v22 = 0; /*0x42b30e*/
          *(_DWORD *)v18 = 0; /*0x42b31c*/
        }
        else
        {
          *(_DWORD *)v18 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v13) + 40); /*0x42b303*/
        }
      }
      else
      {
        v14 = HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x42b32d*/
        LOWORD(v23) = v18[0] + LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x42b33f*/
        HIWORD(v23) = v18[1] + v14; /*0x42b344*/
        *(_DWORD *)v18 = v23; /*0x42b34d*/
      }
      goto LABEL_24; /*0x42b307*/
    }
    if ( *(_DWORD *)(v4 + 4 * (v19 + v21)) != v24 ) /*0x42b35a*/
    {
      v9 += GeneratePathWaypoints(a3, (int *)(v4 + 4 * v9), v27 + 4 * v9, v8, v19, &v20); /*0x42b387*/
      v8 = 1; /*0x42b38e*/
      v29 = 0; /*0x42b393*/
      v15 = *(_DWORD *)(v4 + 4 * v9) & 7; /*0x42b39b*/
      v16 = HIWORD(g_DDrawSurfaceManager.scenario[v15 + 82]); /*0x42b39e*/
      LOWORD(v25) = LOWORD(g_DDrawSurfaceManager.scenario[v15 + 82]) + (_WORD)v20; /*0x42b3ba*/
      HIWORD(v25) = HIWORD(v20) + v16; /*0x42b3bf*/
      *(_DWORD *)v18 = v25; /*0x42b3c8*/
      v7 = *(_DWORD *)(v4 + 4 * v9); /*0x42b3cc*/
LABEL_24:
      v6 = v26; /*0x42b3cf*/
      goto LABEL_25; /*0x42b3cf*/
    }
    ++v19; /*0x42b35c*/
LABEL_25:
    if ( v9 + v8 >= v6 ) /*0x42b3d8*/
      break; /*0x42b3d8*/
  }
  LOBYTE(v5) = v29; /*0x42b3de*/
  if ( v29 ) /*0x42b3e4*/
    LOBYTE(v5) = GeneratePathWaypoints(a3, (int *)(v4 + 4 * v9), v27 + 4 * v9, v8, v19, &v20); /*0x42b406*/
  return (char)v5; /*0x42b40b*/
}



// ==== 0x0042B420  GeneratePathWaypoints  this=-  sig=csp ====
int __stdcall GeneratePathWaypoints(_DWORD *a1, int *a2, int a3, int a4, int a5, int **a6)
{
  int *v6; // ebp
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int *v11; // eax
  int *v12; // ebx
  int v13; // ebp
  int v14; // eax
  int *v15; // eax
  double v16; // st7
  int v17; // eax
  __int16 v18; // ax
  int v19; // ecx
  __int16 *v20; // ebp
  __int16 v21; // dx
  __int16 v22; // dx
  __int16 v23; // ax
  int v24; // esi
  _DWORD *v25; // edi
  bool v26; // bl
  __int16 v27; // dx
  __int16 v28; // ax
  int v29; // eax
  int v30; // eax
  __int16 v31; // dx
  int *v32; // eax
  int *v33; // edi
  int v34; // ebx
  int *v36; // edx
  int v37; // esi
  int **v38; // ebp
  int *v39; // eax
  int *v40; // edi
  int v41; // ebx
  int v42; // eax
  int **v43; // eax
  int **v44; // ebp
  int *v45; // eax
  int v46; // ebx
  int *v47; // esi
  int v48; // edi
  int *v49; // [esp+14h] [ebp-34h] BYREF
  int *v50; // [esp+18h] [ebp-30h] BYREF
  int v51; // [esp+1Ch] [ebp-2Ch]
  int v52; // [esp+20h] [ebp-28h]
  int v53; // [esp+24h] [ebp-24h]
  int *v54; // [esp+28h] [ebp-20h]
  int *v55; // [esp+2Ch] [ebp-1Ch]
  int *v56; // [esp+30h] [ebp-18h]
  int v57; // [esp+34h] [ebp-14h] BYREF
  int TileDataCellClass; // [esp+38h] [ebp-10h] BYREF
  int v59; // [esp+3Ch] [ebp-Ch]
  double v60; // [esp+40h] [ebp-8h]

  v6 = a2; /*0x42b425*/
  v7 = a4; /*0x42b42a*/
  v8 = *a2; /*0x42b42f*/
  v9 = a2[a4]; /*0x42b432*/
  v59 = v8; /*0x42b436*/
  v10 = (v8 + v9) >> 1; /*0x42b43d*/
  v51 = v10; /*0x42b43f*/
  if ( v10 + 1 != v9 && v10 + 1 != v8 ) /*0x42b44c*/
  {
    v51 = 0; /*0x42b44e*/
    LOBYTE(v10) = 0; /*0x42b456*/
  }
  if ( v8 == 8 || v9 == 8 ) /*0x42b466*/
  {
    v44 = a6; /*0x42b7a8*/
    v45 = *a6; /*0x42b7ac*/
    v46 = a4 + a5; /*0x42b7af*/
    a6 = (int **)*a6; /*0x42b7b4*/
    if ( a4 + a5 > 0 ) /*0x42b7b8*/
    {
      v47 = a2; /*0x42b7ba*/
      v48 = a4 + a5; /*0x42b7be*/
      do /*0x42b7da*/
      {
        v45 = (int *)*GetCellNeighborCoord(&a2, (__int16 *)&a6, *v47++); /*0x42b7d0*/
        --v48; /*0x42b7d5*/
        a6 = (int **)v45; /*0x42b7d6*/
      }
      while ( v48 ); /*0x42b7da*/
    }
    *v44 = v45; /*0x42b7dd*/
    return v46; /*0x42b7e1*/
  }
  v11 = *a6; /*0x42b476*/
  v49 = *a6; /*0x42b478*/
  if ( a4 < a5 ) /*0x42b47c*/
  {
    a5 = a4; /*0x42b47e*/
    goto LABEL_20; /*0x42b482*/
  }
  if ( a5 < a4 ) /*0x42b48d*/
  {
    v50 = v11; /*0x42b491*/
    if ( a4 - a5 <= 0 ) /*0x42b499*/
      goto LABEL_19; /*0x42b499*/
    v12 = a2; /*0x42b49b*/
    v13 = a4 - a5; /*0x42b49d*/
    while ( *v12 == 8 ) /*0x42b4a4*/
    {
      v14 = *((__int16 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v50) + 139); /*0x42b4b5*/
      if ( v14 == -1 ) /*0x42b4bf*/
      {
        v15 = (int *)CellStruct::Set(&TileDataCellClass, 0, 0); /*0x42b4d7*/
LABEL_16:
        v11 = (int *)*v15; /*0x42b4f4*/
        goto LABEL_17; /*0x42b4f4*/
      }
      v11 = *(int **)(*((_DWORD *)dword_8B413C + v14) + 40); /*0x42b4ca*/
LABEL_17:
      ++v12; /*0x42b4f6*/
      --v13; /*0x42b4f9*/
      v50 = v11; /*0x42b4fa*/
      if ( !v13 ) /*0x42b4fe*/
      {
        v6 = a2; /*0x42b500*/
LABEL_19:
        v49 = v11; /*0x42b504*/
        goto LABEL_20; /*0x42b504*/
      }
    }
    v15 = CellStruct::Add(&v50, &v57, (_WORD *)(4 * *v12 + 9041544)); /*0x42b4ef*/
    goto LABEL_16; /*0x42b4ef*/
  }
LABEL_20:
  v16 = LocomotionClass::GetSpeedMultiplier(a1); /*0x42b508*/
  v17 = a1[135]; /*0x42b513*/
  v60 = v16; /*0x42b519*/
  v57 = v17; /*0x42b51d*/
  if ( a5 <= 0 ) /*0x42b527*/
    goto LABEL_38; /*0x42b527*/
  v18 = (__int16)v49; /*0x42b52f*/
  v19 = 2 * a5; /*0x42b536*/
  v53 = 2 * a5; /*0x42b538*/
  v20 = (__int16 *)(4 * (v10 & 7) + 9041544); /*0x42b53c*/
  while ( 1 ) /*0x42b549*/
  {
    v21 = *v20; /*0x42b549*/
    v52 = v19; /*0x42b54d*/
    v22 = v18 + v21; /*0x42b551*/
    v23 = HIWORD(v49) + v20[1]; /*0x42b558*/
    LOWORD(v54) = v22; /*0x42b55d*/
    HIWORD(v54) = v23; /*0x42b564*/
    v50 = v54; /*0x42b579*/
    v24 = *(_DWORD *)(a3 + 4 * (v7 + a5 - v19)); /*0x42b581*/
    v25 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v50); /*0x42b58f*/
    do /*0x42b655*/
    {
      if ( v52 <= 0 ) /*0x42b597*/
      {
        v36 = a2; /*0x42b70b*/
        v37 = a4 - a5; /*0x42b70f*/
        if ( 2 * a5 > 0 ) /*0x42b719*/
          memset32(&a2[a4 - a5], v51, 2 * a5); /*0x42b71f*/
        v38 = a6; /*0x42b721*/
        v39 = *a6; /*0x42b727*/
        a6 = (int **)*a6; /*0x42b72a*/
        if ( v37 <= 0 ) /*0x42b72e*/
        {
LABEL_53:
          *v38 = v39; /*0x42b795*/
          return v37; /*0x42b7a1*/
        }
        v40 = v36; /*0x42b730*/
        v41 = v37; /*0x42b732*/
        while ( *v40 == 8 ) /*0x42b739*/
        {
          v42 = *((__int16 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a6) + 139); /*0x42b74a*/
          if ( v42 == -1 ) /*0x42b754*/
          {
            v43 = (int **)CellStruct::Set(&a2, 0, 0); /*0x42b76c*/
LABEL_51:
            v39 = *v43; /*0x42b789*/
            goto LABEL_52; /*0x42b789*/
          }
          v39 = *(int **)(*((_DWORD *)dword_8B413C + v42) + 40); /*0x42b75f*/
LABEL_52:
          ++v40; /*0x42b78b*/
          --v41; /*0x42b78e*/
          a6 = (int **)v39; /*0x42b78f*/
          if ( !v41 ) /*0x42b793*/
            goto LABEL_53; /*0x42b793*/
        }
        v43 = (int **)CellStruct::Add(&a6, &a4, (_WORD *)(4 * *v40 + 9041544)); /*0x42b784*/
        goto LABEL_51; /*0x42b784*/
      }
      v26 = 1; /*0x42b5f5*/
      if ( !(*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*a1 + 428))(a1, v25, v51, v24, 0, 1) /*0x42b5c2*/
        && (v25[80] & 0x40000) == 0 )
      {
        TileDataCellClass = CellClass::GetTileData((__int16 *)&v49, v57); /*0x42b5d8*/
        if ( (double)TileDataCellClass * v60 < 1.0 ) /*0x42b5ef*/
          v26 = 0; /*0x42b5b6*/
      }
      v27 = (_WORD)v50 + *v20; /*0x42b5ff*/
      --v52; /*0x42b605*/
      v28 = HIWORD(v50) + v20[1]; /*0x42b60d*/
      LOWORD(v55) = v27; /*0x42b612*/
      HIWORD(v55) = v28; /*0x42b61b*/
      v50 = v55; /*0x42b624*/
      v25 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v50); /*0x42b633*/
      v29 = *((char *)v25 + 283); /*0x42b635*/
      if ( v24 - v29 == 4 ) /*0x42b641*/
      {
        v24 = v29 + 4; /*0x42b649*/
        if ( (v25[80] & 0x100) != 0 ) /*0x42b64f*/
          continue; /*0x42b64f*/
      }
      v24 = *((char *)v25 + 283); /*0x42b651*/
    }
    while ( !v26 ); /*0x42b655*/
    v30 = v59 & 7; /*0x42b66e*/
    v31 = HIWORD(v49) + HIWORD(dword_89F688[v30]); /*0x42b688*/
    LOWORD(v56) = LOWORD(dword_89F688[v30]) + (_WORD)v49; /*0x42b694*/
    HIWORD(v56) = v31; /*0x42b69d*/
    v18 = (__int16)v56; /*0x42b6a2*/
    v53 -= 2; /*0x42b6a7*/
    v7 = a4; /*0x42b6ab*/
    v49 = v56; /*0x42b6af*/
    if ( --a5 <= 0 ) /*0x42b6b9*/
      break; /*0x42b6b9*/
    v19 = v53; /*0x42b545*/
  }
  v6 = a2; /*0x42b6bf*/
LABEL_38:
  v32 = *a6; /*0x42b6c3*/
  a2 = *a6; /*0x42b6cb*/
  if ( v7 > 0 ) /*0x42b6cf*/
  {
    v33 = v6; /*0x42b6d1*/
    v34 = v7; /*0x42b6d3*/
    do /*0x42b6ef*/
    {
      v32 = (int *)*GetCellNeighborCoord(&a4, (__int16 *)&a2, *v33++); /*0x42b6e5*/
      --v34; /*0x42b6ea*/
      a2 = v32; /*0x42b6eb*/
    }
    while ( v34 ); /*0x42b6ef*/
  }
  *a6 = v32; /*0x42b6f6*/
  return v7; /*0x42b6f5*/
}



// ==== 0x0042B7F0  ObjectClass::SimplifyPathFilter  this=ObjectClass  sig=csp ====
_DWORD *__thiscall SimplifyPathFilter(ObjectClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  bool v9; // cc
  ObjectClass *v10; // eax
  int v11; // eax
  __int16 v12; // cx
  __int16 v13; // bx
  __int16 v14; // bp
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  __int16 v20; // cx
  __int16 v21; // bx
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // esi
  _DWORD *v26; // edx
  int v27; // esi
  int v28; // eax
  int v29; // ebp
  _DWORD *v30; // edi
  int v31; // edx
  _DWORD *result; // eax
  ObjectClass **v33; // [esp+10h] [ebp-80h]
  int v34; // [esp+14h] [ebp-7Ch]
  int v35; // [esp+18h] [ebp-78h]
  _DWORD *v36; // [esp+1Ch] [ebp-74h]
  int v37; // [esp+20h] [ebp-70h]
  int v38; // [esp+24h] [ebp-6Ch]
  int v39; // [esp+28h] [ebp-68h]
  int v40; // [esp+2Ch] [ebp-64h]
  int v41; // [esp+30h] [ebp-60h]
  int v42; // [esp+34h] [ebp-5Ch]
  int v43; // [esp+38h] [ebp-58h] BYREF
  _BYTE v44[6]; // [esp+3Ch] [ebp-54h]
  __int16 v45; // [esp+42h] [ebp-4Eh]
  int v46; // [esp+44h] [ebp-4Ch]
  int v47; // [esp+48h] [ebp-48h]
  ObjectClass *v48; // [esp+4Ch] [ebp-44h]
  int v49; // [esp+50h] [ebp-40h]
  int v50; // [esp+54h] [ebp-3Ch]
  int v51; // [esp+58h] [ebp-38h]
  int v52; // [esp+5Ch] [ebp-34h]
  ObjectClass *v53; // [esp+60h] [ebp-30h]
  int v54; // [esp+64h] [ebp-2Ch]
  int v55; // [esp+68h] [ebp-28h]
  ObjectClass *v56; // [esp+6Ch] [ebp-24h] BYREF
  int v57; // [esp+70h] [ebp-20h]
  int v58[2]; // [esp+78h] [ebp-18h] BYREF
  int v59; // [esp+80h] [ebp-10h]
  int v60; // [esp+88h] [ebp-8h]

  v53 = this; /*0x42b7f6*/
  v3 = a2; /*0x42b7fb*/
  v4 = (_DWORD *)a2[3]; /*0x42b808*/
  v5 = *a2; /*0x42b80b*/
  v6 = a2[5]; /*0x42b80d*/
  v7 = 0; /*0x42b811*/
  v8 = 0; /*0x42b813*/
  v9 = a2[2] - 1 <= 0; /*0x42b815*/
  v36 = v4; /*0x42b817*/
  v55 = a2[2] - 1; /*0x42b81b*/
  v42 = 0; /*0x42b81f*/
  v59 = v5; /*0x42b823*/
  v54 = v6; /*0x42b82a*/
  v40 = 0; /*0x42b82e*/
  v39 = 0; /*0x42b832*/
  v35 = 0; /*0x42b836*/
  v57 = 0; /*0x42b840*/
  v37 = 0; /*0x42b84a*/
  v38 = 0; /*0x42b84e*/
  v34 = 0; /*0x42b852*/
  if ( !v9 ) /*0x42b85c*/
  {
    v33 = (ObjectClass **)v4; /*0x42b862*/
    do /*0x42bb62*/
    {
      if ( v8 >= 20 ) /*0x42b869*/
        break; /*0x42b869*/
      v10 = *v33; /*0x42b873*/
      v56 = *v33; /*0x42b878*/
      if ( v56 == (ObjectClass *)8 ) /*0x42b87c*/
      {
        v45 = 0; /*0x42b899*/
        *(_DWORD *)&v44[2] = (unsigned __int16)(HIWORD(g_DDrawSurfaceManager.scenario[82]) + HIWORD(v59)); /*0x42b8a7*/
        ++v8; /*0x42b8b0*/
        *(_WORD *)v44 = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v5; /*0x42b8b4*/
        v5 = *(_DWORD *)v44; /*0x42b8b9*/
        v35 = 0; /*0x42b8bd*/
        ++v33; /*0x42b8c1*/
        v46 = 0; /*0x42b8c5*/
        v47 = 0; /*0x42b8d3*/
        v59 = *(_DWORD *)v44; /*0x42b8e1*/
        v42 = v8; /*0x42b8e8*/
        v39 = 0; /*0x42b8ec*/
        v37 = 0; /*0x42b8f0*/
        v38 = 0; /*0x42b8f4*/
        v34 = 0; /*0x42b8f8*/
        v40 = v8; /*0x42b8fc*/
        v57 = 0; /*0x42b900*/
      }
      else if ( v10 == (ObjectClass *)-2 ) /*0x42b90c*/
      {
        ++v8; /*0x42b912*/
        ++v33; /*0x42b916*/
      }
      else
      {
        v11 = (unsigned __int8)v10 & 7; /*0x42b91f*/
        v12 = g_DDrawSurfaceManager.scenario[v11 + 82]; /*0x42b932*/
        v13 = v35 + v12; /*0x42b946*/
        LOWORD(v11) = HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x42b94b*/
        v14 = HIWORD(v35) + v11; /*0x42b94f*/
        LOWORD(v41) = v34 + v12; /*0x42b959*/
        LOWORD(v49) = v35 + v12; /*0x42b95e*/
        HIWORD(v49) = HIWORD(v35) + v11; /*0x42b963*/
        HIWORD(v41) = HIWORD(v34) + v11; /*0x42b968*/
        v15 = abs16(v34 + v12); /*0x42b979*/
        if ( v15 < v37 || (v16 = abs16(SHIWORD(v41)), v16 < v38) ) /*0x42b993*/
        {
          if ( v57 ) /*0x42babb*/
          {
            v42 = v40; /*0x42baf4*/
            LOWORD(v51) = v57 - v5; /*0x42bb03*/
            HIWORD(v51) = HIWORD(v57) - HIWORD(v59); /*0x42bb08*/
            v35 = v51; /*0x42bb14*/
            v37 = 0; /*0x42bb18*/
            v38 = 0; /*0x42bb1c*/
            v52 = 0; /*0x42bb20*/
            v34 = 0; /*0x42bb2f*/
            v22 = abs16(HIWORD(v57) - HIWORD(v59)); /*0x42bb3a*/
            v39 = abs16(v57 - v5); /*0x42bb43*/
            if ( v39 <= v22 ) /*0x42bb47*/
              v39 = v22; /*0x42bb49*/
            v57 = v5; /*0x42bb4d*/
            v40 = v8; /*0x42bb51*/
          }
          else
          {
            v37 = 0; /*0x42bac4*/
            v38 = 0; /*0x42bac8*/
            v50 = 0; /*0x42bacc*/
            v57 = v5; /*0x42bada*/
            v40 = v8; /*0x42bade*/
            v34 = 0; /*0x42bae2*/
          }
        }
        else
        {
          v38 = v16; /*0x42b99d*/
          v34 = v41; /*0x42b9a4*/
          v37 = v15; /*0x42b9a8*/
          v17 = abs16(v14); /*0x42b9b4*/
          v18 = abs16(v13); /*0x42b9b9*/
          if ( v18 <= v17 ) /*0x42b9bd*/
            v18 = v17; /*0x42b9bf*/
          v19 = (unsigned __int8)v56 & 7; /*0x42b9c5*/
          v20 = g_DDrawSurfaceManager.scenario[v19 + 82]; /*0x42b9c8*/
          LOWORD(v19) = HIWORD(g_DDrawSurfaceManager.scenario[v19 + 82]); /*0x42b9da*/
          LOWORD(v60) = v5 + v20; /*0x42b9de*/
          HIWORD(v60) = HIWORD(v59) + v19; /*0x42b9f4*/
          v21 = v5 + v20; /*0x42b9fc*/
          v5 = v60; /*0x42ba03*/
          v59 = v60; /*0x42ba05*/
          if ( v39 >= v18 ) /*0x42ba0c*/
          {
            v58[0] = v60; /*0x42ba32*/
            sub_42BCA0((int)v36, v8, v42, &v43, v58); /*0x42ba39*/
            LOWORD(v48) = v21 - LOWORD(v58[0]); /*0x42ba55*/
            HIWORD(v48) = HIWORD(v60) - HIWORD(v58[0]); /*0x42ba5a*/
            v56 = v48; /*0x42ba67*/
            WalkLineOfSight( /*0x42ba96*/
              (char *)&v36[v43],
              v8 - v43 + 1,
              v58,
              (__int16 *)&v56,
              (_DWORD *)a3,
              *(_DWORD *)(v54 + 4 * v43),
              0);
          }
          else
          {
            v39 = v18; /*0x42ba0e*/
          }
          ++v8; /*0x42ba9f*/
          v35 = v49; /*0x42baa0*/
          ++v33; /*0x42baab*/
        }
        v3 = a2; /*0x42bb55*/
        v7 = 0; /*0x42bb5c*/
      }
    }
    while ( v8 < v55 ); /*0x42bb62*/
    if ( v57 ) /*0x42bb6d*/
    {
      v23 = abs16(HIWORD(v59) - HIWORD(v57)); /*0x42bb9a*/
      v24 = abs16(v5 - v57); /*0x42bb9f*/
      if ( v24 <= v23 ) /*0x42bba3*/
        v24 = v23; /*0x42bba5*/
      if ( v8 - v40 - 1 > v24 ) /*0x42bbb2*/
      {
        v25 = v8 - 1; /*0x42bbc2*/
        v58[0] = v5; /*0x42bbcc*/
        sub_42BCA0((int)v36, v25, v40, &v43, v58); /*0x42bbd3*/
        LOWORD(v53) = v5 - LOWORD(v58[0]); /*0x42bbef*/
        HIWORD(v53) = HIWORD(v59) - HIWORD(v58[0]); /*0x42bbf4*/
        v56 = v53; /*0x42bbff*/
        WalkLineOfSight( /*0x42bc2e*/
          (char *)&v36[v43],
          v25 - v43 + 1,
          v58,
          (__int16 *)&v56,
          (_DWORD *)a3,
          *(_DWORD *)(v54 + 4 * v43),
          1);
      }
      v3 = a2; /*0x42bc33*/
    }
  }
  v26 = v36; /*0x42bc3a*/
  v27 = 0; /*0x42bc3e*/
  v28 = *v36; /*0x42bc40*/
  if ( *v36 != -1 ) /*0x42bc45*/
  {
    v29 = v55; /*0x42bc47*/
    v30 = v36; /*0x42bc4b*/
    do /*0x42bc68*/
    {
      if ( v27 >= v29 ) /*0x42bc4f*/
        break; /*0x42bc4f*/
      if ( v28 != -2 ) /*0x42bc54*/
      {
        ++v7; /*0x42bc58*/
        *v30++ = *v26; /*0x42bc59*/
      }
      v28 = v26[1]; /*0x42bc5e*/
      ++v26; /*0x42bc61*/
      ++v27; /*0x42bc64*/
    }
    while ( v28 != -1 ); /*0x42bc68*/
  }
  v31 = v7; /*0x42bc6d*/
  result = (_DWORD *)(v3[2] + 1); /*0x42bc6f*/
  if ( v7 < (int)result ) /*0x42bc72*/
  {
    result = &v36[v7]; /*0x42bc78*/
    do /*0x42bc8b*/
    {
      *result = -1; /*0x42bc7b*/
      ++v31; /*0x42bc84*/
      ++result; /*0x42bc85*/
    }
    while ( v31 < v3[2] + 1 ); /*0x42bc8b*/
  }
  v3[2] = v7 + 1; /*0x42bc90*/
  return result; /*0x42bc8e*/
}



// ==== 0x0042BCA0  sub_42BCA0  this=-  sig=csp ====
__int16 __stdcall sub_42BCA0(int a1, int a2, int a3, _DWORD *a4, int *a5)
{
  int v6; // edx
  int v7; // esi
  __int16 v8; // cx
  __int16 v9; // bx
  bool v10; // cc
  int v11; // eax
  __int16 v12; // si
  _WORD *v13; // eax
  __int16 v14; // bx
  __int16 v15; // bp
  int v16; // ecx
  int v17; // eax
  __int16 result; // ax
  int v19; // edi
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]
  __int16 v22; // [esp+18h] [ebp-10h]
  __int16 v23; // [esp+1Ah] [ebp-Eh]
  int v24; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  _DWORD *v26; // [esp+2Ch] [ebp+4h]
  char v27; // [esp+30h] [ebp+8h]
  int v28; // [esp+34h] [ebp+Ch]

  v6 = *a5; /*0x42bcad*/
  v7 = a3; /*0x42bcb0*/
  v8 = 0; /*0x42bcb4*/
  v9 = 0; /*0x42bcb6*/
  v10 = a2 < a3; /*0x42bcb9*/
  v25 = 0; /*0x42bcbc*/
  v20 = a2; /*0x42bcc0*/
  v21 = *a5; /*0x42bcc4*/
  v27 = 0; /*0x42bcc8*/
  if ( v10 ) /*0x42bccc*/
  {
LABEL_13:
    *a4 = v7; /*0x42bdb5*/
    *a5 = v6; /*0x42bdc2*/
    return (__int16)a4; /*0x42bdc8*/
  }
  v26 = (_DWORD *)(a1 + 4 * a2); /*0x42bcd9*/
  while ( *v26 == -2 ) /*0x42bce6*/
  {
    --v20; /*0x42bcf0*/
    --v26; /*0x42bcf4*/
LABEL_12:
    if ( v20 < v7 ) /*0x42bdaf*/
      goto LABEL_13; /*0x42bdaf*/
  }
  v11 = ((unsigned __int8)*v26 - 4) & 7; /*0x42bd05*/
  v12 = dword_89F688[v11]; /*0x42bd08*/
  v13 = (_WORD *)(4 * v11 + 9041544); /*0x42bd10*/
  v22 = v8 + v12; /*0x42bd24*/
  v23 = v9 + v13[1]; /*0x42bd29*/
  v14 = HIWORD(v21) + v13[1]; /*0x42bd3a*/
  v15 = v6 + *v13; /*0x42bd3f*/
  LOWORD(v24) = v15; /*0x42bd42*/
  HIWORD(v24) = v14; /*0x42bd47*/
  HIWORD(v21) = v14; /*0x42bd53*/
  v16 = abs16(v23); /*0x42bd5f*/
  v17 = abs16(v22); /*0x42bd64*/
  if ( v17 <= v16 ) /*0x42bd68*/
    v17 = v16; /*0x42bd6a*/
  if ( v17 <= v25 ) /*0x42bd70*/
  {
    v27 = 1; /*0x42bd80*/
    goto LABEL_11; /*0x42bd80*/
  }
  if ( !v27 ) /*0x42bd78*/
  {
    v25 = v17; /*0x42bd7a*/
LABEL_11:
    v9 = v23; /*0x42bd85*/
    v7 = a3; /*0x42bd92*/
    v6 = v24; /*0x42bd96*/
    --v20; /*0x42bd9e*/
    v8 = v22; /*0x42bda2*/
    --v26; /*0x42bda7*/
    goto LABEL_12; /*0x42bda7*/
  }
  v19 = ((((unsigned __int8)*v26 - 4) & 7) - 4) & 7; /*0x42bdd7*/
  *a4 = v20 + 1; /*0x42bdda*/
  LOWORD(v28) = v15 + LOWORD(dword_89F688[v19]); /*0x42bdf3*/
  result = v14 + HIWORD(dword_89F688[v19]); /*0x42bdfc*/
  HIWORD(v28) = result; /*0x42bdff*/
  *a5 = v28; /*0x42be0a*/
  return result; /*0x42bdbd*/
}



// ==== 0x0042BE20  WalkLineOfSight  this=-  sig=csp ====
char __stdcall WalkLineOfSight(char *a1, int a2, _DWORD *a3, __int16 *a4, _DWORD *a5, int a6, char a7)
{
  __int16 v7; // dx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  signed int v13; // ecx
  signed int v14; // eax
  _DWORD *v15; // ebx
  int v16; // ebp
  int v17; // esi
  bool v18; // cl
  _DWORD *v19; // eax
  int v20; // ecx
  _DWORD *v21; // edi
  int v22; // eax
  int v23; // ecx
  _DWORD *v24; // edi
  int v25; // eax
  int v26; // ecx
  bool v27; // cc
  signed int v29; // [esp+28h] [ebp-34h]
  signed int v30; // [esp+2Ch] [ebp-30h]
  int v31; // [esp+30h] [ebp-2Ch]
  int v32; // [esp+34h] [ebp-28h]
  int v33; // [esp+38h] [ebp-24h]
  int v34; // [esp+3Ch] [ebp-20h]
  _DWORD *v35; // [esp+40h] [ebp-1Ch]
  _DWORD *v36; // [esp+44h] [ebp-18h]
  int v37; // [esp+48h] [ebp-14h]
  int v38; // [esp+4Ch] [ebp-10h]
  double v39; // [esp+54h] [ebp-8h]

  v7 = a4[1]; /*0x42be2d*/
  v38 = 0; /*0x42be35*/
  v8 = *a4; /*0x42be3d*/
  v9 = v7; /*0x42be40*/
  if ( *a4 >= 0 )
    v10 = v7 >= 0 ? 3 : 1;
  else
    v10 = v7 >= 0 ? 5 : 7;
  v32 = v10; /*0x42be67*/
  v11 = v7 + v8; /*0x42be6d*/
  if ( v8 - v7 <= 0 )
    v12 = v11 <= 0 ? 6 : 4;
  else
    v12 = v11 <= 0 ? 0 : 2;
  v33 = v12; /*0x42be8f*/
  v13 = abs32(v9); /*0x42be9a*/
  v14 = abs16(*a4); /*0x42be9f*/
  v29 = v14; /*0x42bea3*/
  if ( v14 >= v13 ) /*0x42bea7*/
    v29 = v13; /*0x42bea9*/
  if ( v14 <= v13 ) /*0x42beaf*/
    v14 = v13; /*0x42beb1*/
  v15 = a5; /*0x42beb7*/
  v30 = v14 - v29; /*0x42bebf*/
  v39 = LocomotionClass::GetSpeedMultiplier(a5); /*0x42bec8*/
  v37 = v15[135]; /*0x42bedd*/
  while ( 1 ) /*0x42beed*/
  {
    v16 = v29; /*0x42beed*/
    v31 = 0; /*0x42bef1*/
    if ( v29 ) /*0x42befb*/
      break; /*0x42befb*/
LABEL_49:
    v26 = v32; /*0x42c121*/
    v32 = v33; /*0x42c129*/
    v29 = v30; /*0x42c131*/
    v33 = v26; /*0x42c13a*/
    v27 = v38 + 1 < 2; /*0x42c13e*/
    v30 = v16; /*0x42c141*/
    ++v38; /*0x42c145*/
    if ( !v27 ) /*0x42c149*/
      return 0; /*0x42c158*/
  }
  v17 = a6; /*0x42bf05*/
  v18 = 0; /*0x42bf09*/
  v19 = (_DWORD *)*a3; /*0x42bf0b*/
  a5 = (_DWORD *)*a3; /*0x42bf13*/
  v34 = v30; /*0x42bf17*/
  if ( v29 > 0 ) /*0x42bf1b*/
  {
    do /*0x42c00c*/
    {
      if ( v18 ) /*0x42bf23*/
        break; /*0x42bf23*/
      v20 = v32 & 7; /*0x42bf2d*/
      LOWORD(v35) = (_WORD)v19 + LOWORD(dword_89F688[v20]); /*0x42bf46*/
      HIWORD(v35) = HIWORD(a5) + HIWORD(dword_89F688[v20]); /*0x42bf55*/
      a5 = v35; /*0x42bf5e*/
      v21 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a5); /*0x42bf6c*/
      if ( v39 > 0.00001 && (double)CellClass::GetTileData((__int16 *)&a5, v37) * v39 >= 0.01 ) /*0x42bfa1*/
        ++v31; /*0x42bfa3*/
      v18 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v15 + 428))(v15, v21, v32, v17, 0, 1) /*0x42bfe5*/
         || (v21[80] & 0x40000) != 0
         || v31 > 3
         || !a7 && v31 > 0;
      v22 = *((char *)v21 + 283); /*0x42bfe7*/
      --v16; /*0x42bff0*/
      if ( v17 - v22 == 4 ) /*0x42bff4*/
      {
        v17 = v22 + 4; /*0x42bffc*/
        if ( (v21[80] & 0x100) != 0 ) /*0x42c002*/
          continue; /*0x42c002*/
      }
      v17 = *((char *)v21 + 283); /*0x42c004*/
      LOWORD(v19) = (_WORD)a5; /*0x42c006*/
    }
    while ( v16 > 0 ); /*0x42c00c*/
  }
  if ( v30 > 0 ) /*0x42c018*/
  {
    while ( !v18 ) /*0x42c026*/
    {
      v23 = v33 & 7; /*0x42c030*/
      LOWORD(v36) = LOWORD(dword_89F688[v23]) + (_WORD)v19; /*0x42c053*/
      HIWORD(v36) = HIWORD(a5) + HIWORD(dword_89F688[v23]); /*0x42c058*/
      a5 = v36; /*0x42c067*/
      v24 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a5); /*0x42c070*/
      if ( v39 > 0.00001 && (double)CellClass::GetTileData((__int16 *)&a5, v37) * v39 >= 0.01 ) /*0x42c0a5*/
        ++v31; /*0x42c0a7*/
      v18 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v15 + 428))(v15, v24, v33, v17, 0, 1) /*0x42c0e9*/
         || (v24[80] & 0x40000) != 0
         || v31 > 3
         || !a7 && v31 > 0;
      --v34; /*0x42c0eb*/
      v25 = *((char *)v24 + 283); /*0x42c0ef*/
      if ( v17 - v25 != 4 || (v17 = v25 + 4, (v24[80] & 0x100) == 0) ) /*0x42c109*/
        v17 = *((char *)v24 + 283); /*0x42c10b*/
      if ( v34 <= 0 ) /*0x42c113*/
        goto LABEL_47; /*0x42c113*/
      LOWORD(v19) = (_WORD)a5; /*0x42c020*/
    }
    goto LABEL_48; /*0x42c026*/
  }
LABEL_47:
  if ( v18 ) /*0x42c11b*/
  {
LABEL_48:
    v16 = v29; /*0x42c11d*/
    goto LABEL_49; /*0x42c11d*/
  }
  if ( v29 > 0 ) /*0x42c165*/
    memset32(a1, v32, v29); /*0x42c16d*/
  if ( v30 > 0 ) /*0x42c175*/
    memset32(&a1[4 * v29], v33, v30); /*0x42c186*/
  if ( a2 - v30 - v29 > 0 ) /*0x42c19a*/
    memset32(&a1[4 * v29 + 4 * v30], -2, a2 - v30 - v29); /*0x42c1a6*/
  return 1; /*0x42c14f*/
}



// ==== 0x0042C1C0  MapClass::AllocArrays  this=CellClass  sig=csp ====
_DWORD *__thiscall sub_42C1C0(char *this)
{
  void **v1; // esi
  char *v2; // edi
  int v3; // ebx
  char *v4; // eax
  int v5; // ecx
  char *v6; // eax
  int v7; // ecx
  char *v8; // eax
  int v9; // ecx
  char *v10; // eax
  int v11; // ecx
  _DWORD *result; // eax
  int v13; // ecx
  int v14; // ecx

  v1 = (void **)(this + 76); /*0x42c1c8*/
  v2 = (char *)(&unk_87F810 - (_UNKNOWN *)this); /*0x42c1cb*/
  v3 = 3; /*0x42c1cd*/
  do /*0x42c27c*/
  {
    if ( *(v1 - 3) ) /*0x42c1d2*/
      __3_YAXPAX_Z(*(v1 - 3)); /*0x42c1da*/
    v4 = (char *)__2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c1e9*/
    *(v1 - 3) = v4; /*0x42c1ee*/
    v5 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c1f7*/
    if ( v5 >= 0 ) /*0x42c1f8*/
    {
      v6 = &v4[4 * v5]; /*0x42c1fa*/
      v7 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c1fd*/
      do /*0x42c208*/
      {
        *(_DWORD *)v6 = 0; /*0x42c1fe*/
        v6 -= 4; /*0x42c204*/
        --v7; /*0x42c207*/
      }
      while ( v7 ); /*0x42c208*/
    }
    if ( *v1 ) /*0x42c20a*/
      __3_YAXPAX_Z(*v1); /*0x42c211*/
    v8 = (char *)__2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c220*/
    *v1 = v8; /*0x42c225*/
    v9 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c22d*/
    if ( v9 >= 0 ) /*0x42c22e*/
    {
      v10 = &v8[4 * v9]; /*0x42c230*/
      v11 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c233*/
      do /*0x42c23e*/
      {
        *(_DWORD *)v10 = 0; /*0x42c234*/
        v10 -= 4; /*0x42c23a*/
        --v11; /*0x42c23d*/
      }
      while ( v11 ); /*0x42c23e*/
    }
    if ( v1[3] ) /*0x42c240*/
      __3_YAXPAX_Z(v1[3]); /*0x42c248*/
    result = __2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c257*/
    v1[3] = result; /*0x42c25c*/
    v13 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c265*/
    if ( v13 >= 0 ) /*0x42c266*/
    {
      result += v13; /*0x42c268*/
      v14 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c26b*/
      do /*0x42c276*/
      {
        *result-- = 0; /*0x42c26c*/
        --v14; /*0x42c275*/
      }
      while ( v14 ); /*0x42c276*/
    }
    ++v1; /*0x42c278*/
    --v3; /*0x42c27b*/
  }
  while ( v3 ); /*0x42c27c*/
  return result; /*0x42c282*/
}



// ==== 0x0042C290  Pathfinding::AStar  this=DynamicVectorClass_uint  sig=csp ====
char __thiscall Pathfinding::AStar(Pathfinding *this, __int16 *a2, __int16 *a3, int a4, int a5)
{
  double v5; // st7
  Pathfinding *v6; // edi
  int v8; // esi
  _DWORD *Pathfinding_field_0x14; // eax
  int i; // ecx
  int v11; // ebx
  int v12; // eax
  int Pathfinding_field_0x10; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  Pathfinding *v17; // ecx
  _DWORD *v18; // eax
  int Pathfinding_field_0x08; // eax
  _DWORD *v20; // ebx
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v28; // edx
  int v29; // esi
  int v31; // eax
  int Pathfinding_field_0x0C; // ecx
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // ax
  int v37; // eax
  int v38; // ecx
  _DWORD *v39; // edx
  int v40; // eax
  unsigned int v41; // esi
  _DWORD *v42; // edi
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v46; // eax
  int v47; // eax
  bool v49; // zf
  int *v50; // ecx
  int v51; // eax
  int v52; // ebx
  _DWORD *v53; // esi
  int v54; // esi
  int v55; // eax
  int v58; // edx
  int v59; // eax
  int v62; // eax
  int v63; // esi
  int v66; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  _WORD *v72; // edx
  char v74; // [esp+10h] [ebp-58h]
  char v75; // [esp+11h] [ebp-57h]
  bool v76; // [esp+12h] [ebp-56h]
  bool v77; // [esp+13h] [ebp-55h]
  _DWORD *v78; // [esp+14h] [ebp-54h]
  int v79; // [esp+18h] [ebp-50h]
  int v80; // [esp+18h] [ebp-50h]
  float v81; // [esp+18h] [ebp-50h]
  _DWORD *v83; // [esp+20h] [ebp-48h]
  int v84; // [esp+20h] [ebp-48h]
  int v85; // [esp+24h] [ebp-44h]
  int v86; // [esp+28h] [ebp-40h]
  int v87; // [esp+2Ch] [ebp-3Ch]
  int v88; // [esp+30h] [ebp-38h]
  int v89; // [esp+34h] [ebp-34h]
  int v90; // [esp+34h] [ebp-34h]
  int v91; // [esp+34h] [ebp-34h]
  int v92; // [esp+38h] [ebp-30h]
  int v93; // [esp+3Ch] [ebp-2Ch]
  int v94; // [esp+40h] [ebp-28h]
  int v95; // [esp+44h] [ebp-24h]
  int v96; // [esp+48h] [ebp-20h]
  _DWORD *v97; // [esp+4Ch] [ebp-1Ch]
  int v98; // [esp+4Ch] [ebp-1Ch]
  int v99; // [esp+50h] [ebp-18h]
  int v100; // [esp+50h] [ebp-18h]
  int v101; // [esp+54h] [ebp-14h]
  int v102; // [esp+54h] [ebp-14h]
  _DWORD *v103; // [esp+54h] [ebp-14h]
  _DWORD *v104; // [esp+54h] [ebp-14h]
  int v105; // [esp+5Ch] [ebp-Ch]
  double v106; // [esp+60h] [ebp-8h]

  v6 = this; /*0x42c2a5*/
  if ( !a5 ) /*0x42c2b6*/
  {
    v106 = 0.0; /*0x42c2cf*/
    v94 = 0; /*0x42c2df*/
LABEL_5:
    v74 = 0; /*0x42c2fb*/
    goto LABEL_6; /*0x42c2fb*/
  }
  LocomotionClass::GetSpeedMultiplier((LocomotionClass *)a5); /*0x42c2ba*/
  __asm { fst [esp+68h+var_8] } /*0x42c2c5*/
  v94 = *(_DWORD *)(a5 + 540); /*0x42c2c9*/
  __asm { fcomp ds:dbl_7E3810 } /*0x42c2e9*/
  v74 = 1; /*0x42c2ef*/
  __asm { fnstsw ax } /*0x42c2f4*/
  if ( (_AX & 0x4100) != 0 ) /*0x42c2f9*/
    goto LABEL_5; /*0x42c2f9*/
LABEL_6:
  v8 = 2; /*0x42c300*/
  v92 = 2; /*0x42c305*/
  while ( 2 ) /*0x42c309*/
  {
    Pathfinding_field_0x14 = (_DWORD *)v6[3].Pathfinding_field_0x14; /*0x42c309*/
    for ( i = 0; i <= *Pathfinding_field_0x14; *(_DWORD *)(Pathfinding_field_0x14[2] + 4 * i - 4) = 0 ) /*0x42c311*/
      ++i; /*0x42c316*/
    *Pathfinding_field_0x14 = 0; /*0x42c325*/
    v11 = *(__int16 *)(*(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x42c34a*/
                     + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], a2)
                     + 2 * v8);
    v89 = v11; /*0x42c351*/
    v93 = *(__int16 *)(*(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x42c36e*/
                     + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], a3)
                     + 2 * v8);
    v76 = v8 == 2; /*0x42c377*/
    if ( v8 == 2 ) /*0x42c37b*/
      v95 = 0; /*0x42c387*/
    else
      v95 = *(&v6[2].Pathfinding_field_0x0C + v8); /*0x42c381*/
    v12 = *(&v6[2].Pathfinding_field_0x08 + v8); /*0x42c393*/
    v85 = *(&v6[2].Pathfinding_field_0x14 + v8); /*0x42c39b*/
    v86 = *(_DWORD *)&v6[3].__pad_0[4 * v8 + 4]; /*0x42c3a2*/
    *(_DWORD *)(v12 + 4 * v11) = v6[1].Pathfinding_field_0x0C; /*0x42c3aa*/
    v105 = v12; /*0x42c3b2*/
    *(_DWORD *)(v12 + 4 * v93) = v6[1].Pathfinding_field_0x0C; /*0x42c3b6*/
    if ( v11 == v93 ) /*0x42c3b9*/
    {
      if ( !v8 ) /*0x42c3bd*/
      {
        Pathfinding_field_0x10 = v6[3].Pathfinding_field_0x10; /*0x42c3bf*/
        *(_DWORD *)(Pathfinding_field_0x10 + 12) = 0; /*0x42c3c2*/
        *(_DWORD *)(Pathfinding_field_0x10 + 4) = v11; /*0x42c3c5*/
      }
      *((_WORD *)&v6[6].Pathfinding_field_0x14 + 500 * v8) = v11; /*0x42c3d1*/
      *(&v6[113].Pathfinding_field_0x18 + v8) = 1; /*0x42c3d9*/
      goto LABEL_85; /*0x42c3e4*/
    }
    v97 = (_DWORD *)v6[3].Pathfinding_field_0x10; /*0x42c3ee*/
    *v97 = -1; /*0x42c3f2*/
    v97[1] = v11; /*0x42c3f8*/
    v97[2] = 0; /*0x42c3fb*/
    v97[3] = 0; /*0x42c3fe*/
    v83 = (_DWORD *)v6[3].Pathfinding_field_0x14; /*0x42c404*/
    v14 = *v83 + 1; /*0x42c40a*/
    v15 = v14 >> 1; /*0x42c40d*/
    if ( v14 < v83[1] ) /*0x42c412*/
    {
      for ( ; v14 > 1; v15 >>= 1 ) /*0x42c417*/
      {
        v99 = v83[2]; /*0x42c420*/
        _EAX = *(_DWORD *)(v99 + 4 * v15); /*0x42c424*/
        __asm /*0x42c427*/
        {
          fld dword ptr [eax+8]
          fcomp ds:flt_7E1748
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x42c435*/
          break; /*0x42c435*/
        *(_DWORD *)(v99 + 4 * v14) = *(_DWORD *)(v99 + 4 * v15); /*0x42c43e*/
        v11 = v89; /*0x42c441*/
        v14 = v15; /*0x42c445*/
      }
      *(_DWORD *)(v83[2] + 4 * v14) = v97; /*0x42c459*/
      ++*v83; /*0x42c463*/
      if ( (unsigned int)v97 > v83[3] ) /*0x42c46a*/
        v83[3] = v97; /*0x42c46c*/
      if ( (unsigned int)v97 < v83[4] ) /*0x42c472*/
        v83[4] = v97; /*0x42c474*/
    }
    v87 = 1; /*0x42c482*/
    *(_DWORD *)(v85 + 4 * v11) = v6[1].Pathfinding_field_0x0C; /*0x42c48a*/
    *(_DWORD *)(v86 + 4 * v11) = 0; /*0x42c48d*/
    v17 = (Pathfinding *)v6[3].Pathfinding_field_0x14; /*0x42c494*/
    if ( *(_DWORD *)v17->__pad_0 ) /*0x42c497*/
    {
      Pathfinding_field_0x08 = v17->Pathfinding_field_0x08; /*0x42c4a1*/
      v20 = *(_DWORD **)(Pathfinding_field_0x08 + 4); /*0x42c4a9*/
      *(_DWORD *)(Pathfinding_field_0x08 + 4) = *(_DWORD *)(Pathfinding_field_0x08 + 4 * *(_DWORD *)v17->__pad_0); /*0x42c4ac*/
      *(_DWORD *)(v17->Pathfinding_field_0x08 + 4 * (*(_DWORD *)v17->__pad_0)--) = 0; /*0x42c4b4*/
      Pathfinding::SiftDown(v17, 1); /*0x42c4c0*/
      v18 = v20; /*0x42c4c5*/
    }
    else
    {
      v18 = 0; /*0x42c49d*/
    }
    v78 = v18; /*0x42c4ca*/
    v21 = 24 * v8; /*0x42c4ce*/
    v84 = 24 * v8; /*0x42c4d1*/
    v77 = *(&v6[4].Pathfinding_field_0x14 + 6 * v8) == 0; /*0x42c4de*/
    if ( !v18 ) /*0x42c4e5*/
      return 0; /*0x42c8ea*/
    while ( 1 ) /*0x42c4eb*/
    {
      v22 = v18[1]; /*0x42c4eb*/
      v96 = v22; /*0x42c4f4*/
      if ( v22 == v93 ) /*0x42c4f8*/
        break; /*0x42c4f8*/
      v23 = 9 * v22; /*0x42c4fe*/
      v24 = *(_DWORD *)&stru_87F5F0.__pad_58[v21 + 560]; /*0x42c501*/
      v25 = *(_DWORD *)(v24 + 4 * v23 + 4); /*0x42c507*/
      v26 = *(_DWORD *)(v24 + 4 * v23 + 16); /*0x42c50e*/
      if ( v26 > 0 ) /*0x42c513*/
      {
        v90 = v25; /*0x42c51d*/
        v88 = 16 * v87; /*0x42c524*/
        v100 = v26; /*0x42c528*/
        do /*0x42c73a*/
        {
          HIWORD(v29) = 0; /*0x42c534*/
          v79 = 0; /*0x42c536*/
          _EBX = *(_DWORD *)v90; /*0x42c53e*/
          v75 = *(_BYTE *)(v90 + 4); /*0x42c543*/
          v28 = *(_DWORD *)&stru_87F5F0.__pad_58[v84 + 560]; /*0x42c547*/
          v98 = *(_DWORD *)v90; /*0x42c550*/
          LOWORD(v29) = *(_WORD *)(v28 + 36 * *(_DWORD *)v90 + 24); /*0x42c554*/
          _EDX = *(_DWORD *)(v28 + 36 * *(_DWORD *)v90 + 28); /*0x42c55c*/
          v101 = _EDX; /*0x42c565*/
          if ( v74 ) /*0x42c569*/
          {
            v80 = InterpolateTerrainLighting(v94, v92, v96, _EBX); /*0x42c585*/
            __asm /*0x42c589*/
            {
              fild [esp+68h+var_50]
              fmul [esp+68h+var_8]
            }
            LOWORD(v31) = Math::RoundToInt(v5); /*0x42c591*/
            _EDX = v101; /*0x42c596*/
            v79 = v31; /*0x42c59a*/
          }
          if ( v75 ) /*0x42c5a4*/
            __asm { fld ds:dbl_7E3818 } /*0x42c5a6*/
          else
            __asm { fld ds:dbl_7E2800 } /*0x42c5ae*/
          _EAX = v78; /*0x42c5b4*/
          Pathfinding_field_0x0C = v6[1].Pathfinding_field_0x0C; /*0x42c5b8*/
          __asm /*0x42c5bb*/
          {
            fld ds:flt_7E3794[edx*4]
            fadd dword ptr [eax+8]
          }
          __asm { fiadd [esp+68h+var_50] }
          __asm
          {
            fadd st, st(1)
            fstp [esp+68h+var_50]
            fstp st
          }
          if ( *(_DWORD *)(v85 + 4 * _EBX) != Pathfinding_field_0x0C ) /*0x42c5d8*/
            goto LABEL_41; /*0x42c5d8*/
          _EAX = v86; /*0x42c5da*/
          __asm /*0x42c5de*/
          {
            fld dword ptr [eax+ebx*4]
            fcomp [esp+68h+var_50]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x42c5ea*/
          {
LABEL_41:
            if ( (v76 || *(_DWORD *)(v95 + 4 * v29) == Pathfinding_field_0x0C || _EDX == 1) /*0x42c612*/
              && dword_82A594[8 * a4 + _EDX] == 1 )
            {
              if ( v77 ) /*0x42c61e*/
                goto LABEL_49; /*0x42c61e*/
              v35 = _EBX; /*0x42c624*/
              v36 = v96; /*0x42c629*/
              if ( (unsigned __int16)_EBX < (unsigned __int16)v96 ) /*0x42c62b*/
              {
                v36 = _EBX; /*0x42c62d*/
                v35 = v96; /*0x42c62f*/
              }
              v37 = v35 | (v36 << 16); /*0x42c643*/
              v38 = *(int *)((char *)&v6[4].Pathfinding_field_0x14 + v84) - 1; /*0x42c64c*/
              if ( v38 < 0 ) /*0x42c64d*/
              {
LABEL_49:
                v40 = this->q064; /*0x42c666*/
                *(_DWORD *)(v40 + v88 + 4) = _EBX; /*0x42c671*/
                v41 = v40 + v88; /*0x42c675*/
                *(_DWORD *)v41 = ((int)v78 - v40) >> 4; /*0x42c687*/
                *(float *)(v41 + 8) = v81; /*0x42c689*/
                *(_DWORD *)(v41 + 12) = v78[3] + 1; /*0x42c690*/
                v42 = (_DWORD *)this->q01A; /*0x42c693*/
                v43 = *v42 + 1; /*0x42c69b*/
                v44 = v43 >> 1; /*0x42c69e*/
                if ( v43 < v42[1] ) /*0x42c6a2*/
                {
                  for ( ; v43 > 1; v44 >>= 1 ) /*0x42c6a7*/
                  {
                    v102 = *(_DWORD *)(v42[2] + 4 * v44); /*0x42c6af*/
                    __asm /*0x42c6b3*/
                    {
                      fld dword ptr [eax+8]
                      fcomp [esp+68h+var_50]
                      fnstsw ax
                    }
                    if ( (_AX & 0x4100) != 0 ) /*0x42c6bf*/
                      break; /*0x42c6bf*/
                    *(_DWORD *)(v42[2] + 4 * v43) = v102; /*0x42c6c8*/
                    _EBX = v98; /*0x42c6cb*/
                    v43 = v44; /*0x42c6cf*/
                  }
                  *(_DWORD *)(v42[2] + 4 * v43) = v41; /*0x42c6db*/
                  v46 = v42[3]; /*0x42c6e0*/
                  ++*v42; /*0x42c6e6*/
                  if ( v41 > v46 ) /*0x42c6e8*/
                    v42[3] = v41; /*0x42c6ea*/
                  if ( v41 < v42[4] ) /*0x42c6f0*/
                    v42[4] = v41; /*0x42c6f2*/
                }
                __asm { fld [esp+68h+var_50] } /*0x42c6fd*/
                v47 = v86; /*0x42c704*/
                v6 = this; /*0x42c708*/
                *(_DWORD *)(v85 + 4 * _EBX) = this->q00A; /*0x42c70c*/
                __asm { fstp dword ptr [eax+ebx*4] } /*0x42c70f*/
                *(float *)(v47 + 4 * _EBX) = _ET1; /*0x42c70f*/
                ++v87; /*0x42c71e*/
                v88 += 16; /*0x42c722*/
              }
              else
              {
                v39 = (_DWORD *)(*(int *)((char *)&v6[4].Pathfinding_field_0x08 + v84) + 4 * v38); /*0x42c653*/
                while ( *v39 != v37 ) /*0x42c658*/
                {
                  --v38; /*0x42c65e*/
                  --v39; /*0x42c65f*/
                  if ( v38 < 0 ) /*0x42c664*/
                    goto LABEL_49; /*0x42c664*/
                }
              }
            }
          }
          v49 = v100 == 1; /*0x42c731*/
          v90 += 8; /*0x42c732*/
          --v100; /*0x42c736*/
        }
        while ( !v49 ); /*0x42c73a*/
      }
      v50 = (int *)v6[3].Pathfinding_field_0x14; /*0x42c740*/
      if ( !*v50 ) /*0x42c747*/
        return 0; /*0x42c747*/
      v51 = v50[2]; /*0x42c74d*/
      v52 = 1; /*0x42c750*/
      v53 = *(_DWORD **)(v51 + 4); /*0x42c758*/
      *(_DWORD *)(v51 + 4) = *(_DWORD *)(v51 + 4 * *v50); /*0x42c75b*/
      v103 = v53; /*0x42c763*/
      *(_DWORD *)(v50[2] + 4 * *v50) = 0; /*0x42c767*/
      v54 = *v50 - 1; /*0x42c771*/
      *v50 = v54; /*0x42c773*/
      if ( v54 < 2 ) /*0x42c778*/
        goto LABEL_62; /*0x42c778*/
      v55 = v50[2]; /*0x42c77a*/
      _EDX = *(_DWORD *)(v55 + 8); /*0x42c77d*/
      _EAX = *(_DWORD *)(v55 + 4); /*0x42c780*/
      __asm /*0x42c783*/
      {
        fld dword ptr [edx+8]
        fld dword ptr [eax+8]
        fcompp
      }
      v58 = 2; /*0x42c78b*/
      __asm { fnstsw ax } /*0x42c790*/
      if ( (_EAX & 0x4100) != 0 ) /*0x42c795*/
LABEL_62:
        v58 = 1; /*0x42c797*/
      if ( v54 < 3 ) /*0x42c79f*/
        goto LABEL_66; /*0x42c79f*/
      v59 = v50[2]; /*0x42c7a1*/
      _ESI = *(_DWORD *)(v59 + 12); /*0x42c7a4*/
      _EAX = *(_DWORD *)(v59 + 4 * v58); /*0x42c7a7*/
      __asm /*0x42c7aa*/
      {
        fld dword ptr [esi+8]
        fld dword ptr [eax+8]
        fcompp
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x42c7b7*/
      {
LABEL_66:
        if ( v58 == 1 ) /*0x42c7c3*/
          goto LABEL_75; /*0x42c7c3*/
      }
      else
      {
        v58 = 3; /*0x42c7b9*/
      }
      do /*0x42c82f*/
      {
        v62 = v50[2]; /*0x42c7c5*/
        v63 = *(_DWORD *)(v62 + 4 * v52); /*0x42c7cb*/
        *(_DWORD *)(v62 + 4 * v52) = *(_DWORD *)(v62 + 4 * v58); /*0x42c7ce*/
        v52 = v58; /*0x42c7d4*/
        *(_DWORD *)(v50[2] + 4 * v58) = v63; /*0x42c7d6*/
        v91 = 2 * v58 + 1; /*0x42c7e4*/
        if ( 2 * v58 <= *v50 ) /*0x42c7e8*/
        {
          _EAX = *(_DWORD *)(v50[2] + 8 * v58); /*0x42c7ed*/
          __asm { fld dword ptr [eax+8] } /*0x42c7f0*/
          _EAX = *(_DWORD *)(v50[2] + 4 * v58); /*0x42c7f6*/
          __asm /*0x42c7f9*/
          {
            fld dword ptr [eax+8]
            fcompp
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x42c803*/
            v58 *= 2; /*0x42c805*/
        }
        if ( v91 <= *v50 ) /*0x42c80b*/
        {
          v66 = v50[2]; /*0x42c80d*/
          _ESI = *(_DWORD *)(v66 + 4 * v91); /*0x42c814*/
          _EAX = *(_DWORD *)(v66 + 4 * v58); /*0x42c817*/
          __asm /*0x42c81a*/
          {
            fld dword ptr [esi+8]
            fld dword ptr [eax+8]
            fcompp
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x42c827*/
            v58 = v91; /*0x42c829*/
        }
      }
      while ( v58 != v52 ); /*0x42c82f*/
      v6 = this; /*0x42c831*/
LABEL_75:
      v18 = v103; /*0x42c835*/
      v78 = v103; /*0x42c83b*/
      if ( !v103 ) /*0x42c83f*/
        return 0; /*0x42c83f*/
      v8 = v92; /*0x42c845*/
      v21 = v84; /*0x42c849*/
    }
    if ( !v18 ) /*0x42c854*/
      return 0; /*0x42c854*/
    v69 = (int)v18; /*0x42c85c*/
    v104 = v18; /*0x42c861*/
    if ( *v18 != -1 ) /*0x42c865*/
    {
      do /*0x42c881*/
      {
        *(_DWORD *)(v105 + 4 * v18[1]) = v6[1].Pathfinding_field_0x0C; /*0x42c871*/
        v18 = (_DWORD *)(v6[3].Pathfinding_field_0x10 + 16 * *v18); /*0x42c87c*/
      }
      while ( *v18 != -1 ); /*0x42c881*/
      v69 = (int)v104; /*0x42c883*/
    }
    v70 = *(_DWORD *)(v69 + 12) + 1; /*0x42c88a*/
    *(&v6[113].Pathfinding_field_0x18 + v8) = v70; /*0x42c88b*/
    v71 = v70 - 1; /*0x42c892*/
    if ( v71 > 0 ) /*0x42c895*/
    {
      v72 = (_WORD *)&v6[6].Pathfinding_field_0x14 + 500 * v8 + v71; /*0x42c8a3*/
      do /*0x42c8bf*/
      {
        *v72-- = *(_WORD *)(v69 + 4); /*0x42c8ae*/
        v69 = v6[3].Pathfinding_field_0x10 + 16 * *(_DWORD *)v69; /*0x42c8bc*/
        --v71; /*0x42c8be*/
      }
      while ( v71 ); /*0x42c8bf*/
    }
    *((_WORD *)&v6[6].Pathfinding_field_0x14 + 500 * v8) = *(_WORD *)(v69 + 4); /*0x42c8ce*/
LABEL_85:
    v92 = --v8; /*0x42c8d7*/
    if ( v8 >= 0 ) /*0x42c8db*/
      continue; /*0x42c8db*/
    return 1; /*0x42c8e4*/
  }
}



// ==== 0x0042C900  ObjectClass::FindPathWithRetry  this=CellClass  sig=csp ====
int *__thiscall FindPathWithRetry(int this, __int16 *a2, __int16 *a3, char *a4, int a5, int a6, int a7, int a8)
{
  int v9; // esi
  int v10; // edi
  _DWORD *v12; // ebx
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // ecx
  int (__stdcall ***v17)(_DWORD, void *, int *); // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  char IsWithinUsableArea; // al
  int *result; // eax
  int v23; // eax
  signed int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  char v27; // dl
  __int16 v28[2]; // [esp+18h] [ebp-20h] BYREF
  __int16 v29[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v30; // [esp+20h] [ebp-18h]
  int TileIndex; // [esp+24h] [ebp-14h]
  _DWORD v32[4]; // [esp+28h] [ebp-10h] BYREF
  int v33; // [esp+44h] [ebp+Ch]
  int v34; // [esp+44h] [ebp+Ch]

  *(_BYTE *)(this + 56) = 1; /*0x42c909*/
  CellClass::ClearOccupancyGrid((CellClass *)this); /*0x42c90d*/
  v9 = this + 116; /*0x42c912*/
  v10 = 3; /*0x42c915*/
  do /*0x42c925*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9); /*0x42c91e*/
    v9 += 24; /*0x42c921*/
    --v10; /*0x42c924*/
  }
  while ( v10 ); /*0x42c925*/
  *(_DWORD *)(this + 60) = a8; /*0x42c92f*/
  v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x42c93d*/
  v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x42c95b*/
  if ( a7 == -1 ) /*0x42c95d*/
    v13 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 132))(a4) + 1460); /*0x42c96d*/
  else
    v13 = a7; /*0x42c95f*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], a2, v13, a4[140]); /*0x42c98d*/
  if ( a7 == -1 ) /*0x42c991*/
    a8 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 132))(a4) + 1460); /*0x42c9a9*/
  else
    a8 = a7; /*0x42c993*/
  v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x42c9b7*/
  v15 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], a3, a8, BYTE1(v14[80]) & 1); /*0x42c9d7*/
  v33 = v15; /*0x42c9e0*/
  LOBYTE(v15) = a4[140]; /*0x42c9e4*/
  *(_DWORD *)v29 = *Pathfinding::CrossBridge(&a8, (int)v30, v15); /*0x42ca01*/
  v16 = v12[80] >> 8; /*0x42ca0b*/
  LOBYTE(v16) = v16 & 1; /*0x42ca0e*/
  *(_DWORD *)v28 = *Pathfinding::CrossBridge(&a8, (int)v12, v16); /*0x42ca23*/
  if ( a7 == -1 ) /*0x42ca27*/
    a7 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 132))(a4) + 1460); /*0x42ca3f*/
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 44))(a4) == 15 && *(_BYTE *)(*((_DWORD *)a4 + 432) + 3476) ) /*0x42ca55*/
  {
    v17 = (int (__stdcall ***)(_DWORD, void *, int *))*((_DWORD *)a4 + 413); /*0x42ca5f*/
    v18 = 0; /*0x42ca65*/
    a7 = 7; /*0x42ca69*/
    if ( !v17 ) /*0x42ca71*/
      goto LABEL_18; /*0x42ca71*/
    v19 = (**v17)(v17, &unk_818858, &a8); /*0x42ca80*/
    LOBYTE(v18) = v19 < 0; /*0x42ca88*/
    v20 = a8 & (v18 - 1); /*0x42ca8c*/
    if ( v19 < 0 && v19 != -2147467262 ) /*0x42ca97*/
      WinAPI::Wrapper(v19); /*0x42ca9a*/
    if ( !v20 ) /*0x42caa1*/
LABEL_18:
      WinAPI::Wrapper(-2147467261); /*0x42caa8*/
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v20 + 12))(v20, v32); /*0x42cab5*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v20 + 8))(v20); /*0x42cabf*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 132))(a4) + 3220) /*0x42cb1b*/
    || !a4[981]
    || (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a4 + 800))(a4)
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v29, 1)
    || (IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v28, 1),
        LOBYTE(a8) = 1,
        !IsWithinUsableArea) )
  {
    LOBYTE(a8) = 0; /*0x42cb1d*/
  }
  if ( TileIndex == v33 ) /*0x42cb30*/
  {
    if ( (_BYTE)a8 && !Pathfinding::AStar((Pathfinding *)this, v29, v28, a7, (int)a4) ) /*0x42cb58*/
    {
      Debug::Log(); /*0x42cb7e*/
      LOBYTE(a8) = 0; /*0x42cb86*/
    }
  }
  else if ( (_BYTE)a8 ) /*0x42cb34*/
  {
    return 0; /*0x42cb3f*/
  }
  v34 = 0; /*0x42cb8f*/
  v23 = -(a6 != -1); /*0x42cb9a*/
  LOBYTE(v23) = v23 & 0xFC; /*0x42cb9c*/
  TileIndex = v23 + 5; /*0x42cba1*/
  while ( 1 ) /*0x42cba5*/
  {
    if ( !(_BYTE)a8 && (v29[0] != v28[0] || v29[1] != v28[1]) ) /*0x42cbc7*/
      Debug::Log(); /*0x42cbde*/
    result = BuildingClass::UpdatePowerAnimation(this, (int)a2, a3, a4, a5, a6, a8); /*0x42cc02*/
    v30 = result; /*0x42cc09*/
    if ( result || !(_BYTE)a8 ) /*0x42cc19*/
      break; /*0x42cc19*/
    v24 = abs32(a2[1] - a3[1]); /*0x42cc31*/
    v25 = *a2 - *a3; /*0x42cc38*/
    v26 = (HIDWORD(v25) ^ v25) - HIDWORD(v25); /*0x42cc3b*/
    if ( v26 <= v24 ) /*0x42cc3f*/
      v26 = v24; /*0x42cc41*/
    if ( v26 > 1 ) /*0x42cc46*/
      Debug::Log(); /*0x42cc65*/
    ++v34; /*0x42cc75*/
    sub_42CCD0(this, (int)a4); /*0x42cc79*/
    CellClass::ClearOccupancyGrid((CellClass *)this); /*0x42cc80*/
    v27 = *(_BYTE *)(this + 56); /*0x42cc85*/
    LOBYTE(a8) = v27 != 0; /*0x42cc93*/
    if ( v34 >= TileIndex || v27 && !Pathfinding::AStar((Pathfinding *)this, v29, v28, a7, (int)a4) ) /*0x42ccb3*/
      return (int *)v30; /*0x42ccc0*/
  }
  return result; /*0x42cb36*/
}



// ==== 0x0042CCD0  ObjectClass::method_42CCD0  this=ObjectClass  sig=csp ====
void __thiscall sub_42CCD0(int this, int a2)
{
  int v2; // ebx
  int v3; // ebp
  int *v4; // esi
  unsigned __int16 v5; // di
  __int16 *v6; // ebx
  void *v7; // eax
  int v8; // eax
  void *v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v19; // [esp+14h] [ebp-24h]
  int v20; // [esp+18h] [ebp-20h]
  unsigned int i; // [esp+1Ch] [ebp-1Ch]
  void **v22; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v24; // [esp+28h] [ebp-10h]
  char v25; // [esp+2Dh] [ebp-Bh]
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]

  v2 = this; /*0x42ccd4*/
  v3 = 0; /*0x42ccf4*/
  v4 = (int *)(this + 124); /*0x42ccf6*/
  v20 = dword_87F858 + 10 * CellToTileIndexMap((int *)&dword_87F7E8, (__int16 *)(this + 112)); /*0x42ccfc*/
  while ( 1 ) /*0x42cd12*/
  {
    v5 = *(_WORD *)(v20 + 2 * v3); /*0x42cd12*/
    WordVector::Constructor(&v22, 0, 0); /*0x42cd16*/
    v22 = &DynamicVectorClass<unsigned short>::`vftable'; /*0x42cd1f*/
    v27 = 10; /*0x42cd29*/
    v26 = 0; /*0x42cd31*/
    if ( Block && v25 ) /*0x42cd41*/
    {
      __3_YAXPAX_Z(Block); /*0x42cd44*/
      Block = 0; /*0x42cd4c*/
    }
    v6 = (__int16 *)(v2 + 112); /*0x42cd5e*/
    v25 = 0; /*0x42cd68*/
    v24 = 0; /*0x42cd6d*/
    v7 = CellCoord::To_CellObj(&dword_87F7E8, v6); /*0x42cd75*/
    if ( CheckMapReachability(&dword_87F7E8, (int)v7, v3, (int)&v22, a2) ) /*0x42cd80*/
    {
      v8 = CellToTileIndexMap((int *)&dword_87F7E8, v6); /*0x42cd8f*/
      sub_42CF80((_BYTE *)this, *(unsigned __int16 *)(dword_87F858 + 10 * v8 + 2 * v3), v3); /*0x42cdac*/
      v9 = Block; /*0x42cdb1*/
      v22 = &VectorClass<unsigned short>::`vftable'; /*0x42cdb9*/
      if ( Block && v25 ) /*0x42cdcd*/
        goto LABEL_25; /*0x42cdcd*/
    }
    else
    {
      v10 = v26 - 1; /*0x42cddc*/
      v19 = v26 - 1; /*0x42cde1*/
      if ( v26 - 1 >= 0 ) /*0x42cde5*/
      {
        v11 = v5; /*0x42cde9*/
        for ( i = v5; ; v11 = i ) /*0x42cdee*/
        {
          v12 = *((unsigned __int16 *)Block + v10); /*0x42cdfe*/
          if ( (unsigned __int16)v12 != v11 ) /*0x42ce04*/
          {
            if ( (unsigned __int16)v12 < v11 ) /*0x42ce06*/
            {
              v12 = v11; /*0x42ce0a*/
              v11 = *((unsigned __int16 *)Block + v10); /*0x42ce0c*/
            }
            v13 = v12 | (v11 << 16); /*0x42ce16*/
            v14 = *v4; /*0x42ce18*/
            if ( v4[2] < *v4 /*0x42ce3b*/
              || (*((_BYTE *)v4 + 5) || !v14)
              && (v15 = v4[3], v15 > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v4 - 2) + 8))(v4 - 2, v14 + v15, 0) )
            {
              v16 = v4[2]; /*0x42ce42*/
              v17 = *(v4 - 1); /*0x42ce45*/
              v4[2] = v16 + 1; /*0x42ce4b*/
              *(_DWORD *)(v17 + 4 * v16) = v13; /*0x42ce4e*/
            }
          }
          v10 = --v19; /*0x42ce55*/
          if ( v19 < 0 ) /*0x42ce5a*/
            break; /*0x42ce5a*/
        }
      }
      v9 = Block; /*0x42ce5c*/
      v22 = &VectorClass<unsigned short>::`vftable'; /*0x42ce64*/
      if ( Block && v25 ) /*0x42ce74*/
      {
LABEL_25:
        __3_YAXPAX_Z(v9); /*0x42ce76*/
        Block = 0; /*0x42ce7f*/
      }
    }
    ++v3; /*0x42ce83*/
    v4 += 6; /*0x42ce84*/
    v25 = 0; /*0x42ce8a*/
    v24 = 0; /*0x42ce8f*/
    if ( v3 >= 3 ) /*0x42ce93*/
      break; /*0x42ce93*/
    v2 = this; /*0x42cd02*/
  }
}



// ==== 0x0042CF80  ObjectClass::method_42CF80  this=ObjectClass  sig=csp ====
void __thiscall sub_42CF80(ObjectClass *this, int a2, int a3)
{
  int v3; // esi
  int v5; // edx
  int v6; // eax
  unsigned __int16 *i; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  unsigned int v27; // [esp+10h] [ebp-14h]
  int v28; // [esp+14h] [ebp-10h]
  int j; // [esp+18h] [ebp-Ch]
  unsigned int k; // [esp+1Ch] [ebp-8h]
  int v31; // [esp+20h] [ebp-4h]

  v3 = a3; /*0x42cf86*/
  v5 = *((_DWORD *)this + a3 + 797); /*0x42cf8d*/
  if ( v5 > 1 ) /*0x42cf97*/
  {
    v6 = 0; /*0x42cfa7*/
    for ( i = (unsigned __int16 *)((char *)this + 1000 * a3 + 188); *i != a2; ++i ) /*0x42cfba*/
    {
      if ( ++v6 >= v5 ) /*0x42cfd0*/
      {
        LOBYTE(this->attachedBomb) = 0; /*0x42cfd3*/
        return; /*0x42cfdd*/
      }
    }
    if ( v6 == -1 ) /*0x42cfe3*/
    {
      LOBYTE(this->attachedBomb) = 0; /*0x42cfe6*/
    }
    else
    {
      if ( v6 == v5 - 1 ) /*0x42cffc*/
      {
        v8 = v6 + 500 * a3; /*0x42d001*/
        LOWORD(v9) = *((_WORD *)this + v8 + 94); /*0x42d004*/
        LOWORD(a3) = *((_WORD *)this + v8 + 93); /*0x42d014*/
      }
      else
      {
        v10 = v6 + 500 * a3; /*0x42d01e*/
        LOWORD(v9) = *((_WORD *)this + v10 + 95); /*0x42d029*/
        LOWORD(a3) = *((_WORD *)this + v10 + 94); /*0x42d031*/
      }
      v9 = (unsigned __int16)v9; /*0x42d03a*/
      v11 = (unsigned __int16)a3; /*0x42d040*/
      v12 = v9; /*0x42d046*/
      v27 = (unsigned __int16)a3; /*0x42d04a*/
      if ( (unsigned __int16)a3 != (unsigned __int16)v9 ) /*0x42d04e*/
      {
        if ( (unsigned __int16)a3 < (unsigned int)(unsigned __int16)v9 ) /*0x42d050*/
        {
          v11 = (unsigned __int16)v9; /*0x42d054*/
          v12 = (unsigned __int16)a3; /*0x42d056*/
        }
        a2 = v11 | (v12 << 16); /*0x42d060*/
        sub_42D830((ObjectClass *)(&this->isOnMap + 24 * v3), &a2); /*0x42d06d*/
      }
      v13 = 24 * v3; /*0x42d079*/
      v14 = *(_DWORD *)&stru_87F5F0.__pad_58[24 * v3 + 560]; /*0x42d082*/
      v15 = v14 + 36 * (unsigned __int16)v9; /*0x42d088*/
      v31 = v15; /*0x42d08e*/
      a2 = v14 + 36 * v27; /*0x42d092*/
      v16 = *(_DWORD *)(v15 + 16) - 1; /*0x42d099*/
      for ( j = v16; v16 >= 0; j = v16 ) /*0x42d09e*/
      {
        if ( *(_WORD *)(*(_DWORD *)(v15 + 4) + 8 * v16) != (_WORD)a3 ) /*0x42d0b0*/
        {
          v17 = *(_DWORD *)(a2 + 16) - 1; /*0x42d0bd*/
          v28 = v17; /*0x42d0be*/
          if ( v17 >= 0 ) /*0x42d0c2*/
          {
            v18 = *(unsigned __int16 *)(*(_DWORD *)(v15 + 4) + 8 * v16); /*0x42d0c8*/
            for ( k = v18; ; v18 = k ) /*0x42d0cd*/
            {
              if ( *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8 * v17) == v18 ) /*0x42d0e1*/
              {
                v19 = v18; /*0x42d0e3*/
                v20 = v27; /*0x42d0e5*/
                if ( v19 != v27 ) /*0x42d0eb*/
                {
                  if ( v19 < v27 ) /*0x42d0ed*/
                  {
                    v21 = v19; /*0x42d0ef*/
                    v19 = v27; /*0x42d0f1*/
                    v20 = v21; /*0x42d0f3*/
                  }
                  v22 = v19 | (v20 << 16); /*0x42d105*/
                  v23 = *(int *)((char *)&this->visibilityFlags + v13); /*0x42d107*/
                  if ( *(_DWORD *)(&this->hasParachute + v13) < v23 /*0x42d129*/
                    || (*(&this->inLimbo + v13) || !v23)
                    && (v24 = *(_DWORD *)&this->alignmentPadding85[v13 + 3], v24 > 0)
                    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)(&this->isOnMap + v13) + 8))(
                         &this->isOnMap + v13,
                         v23 + v24,
                         0) )
                  {
                    v25 = *(_DWORD *)(&this->hasParachute + v13); /*0x42d130*/
                    v26 = *(_DWORD *)&this->alignmentPadding75[v13 + 3]; /*0x42d133*/
                    *(_DWORD *)(&this->hasParachute + v13) = v25 + 1; /*0x42d139*/
                    *(_DWORD *)(v26 + 4 * v25) = v22; /*0x42d13c*/
                  }
                }
              }
              v17 = --v28; /*0x42d143*/
              if ( v28 < 0 ) /*0x42d148*/
                break; /*0x42d148*/
            }
            v16 = j; /*0x42d14a*/
            v15 = v31; /*0x42d14e*/
          }
        }
        --v16; /*0x42d152*/
      }
    }
  }
  else
  {
    LOBYTE(this->attachedBomb) = 0; /*0x42cf9a*/
  }
}



// ==== 0x0042D170  Pathfinding::CalcDistance  this=CellClass  sig=csp ====
int __thiscall Pathfinding::CalcDistance(int this, __int16 *a2, __int16 *a3, int a4, int a5, int a6, signed int a7)
{
  int v8; // esi
  int v9; // edi
  void *v10; // eax
  __int16 *v11; // esi
  int v12; // edi
  void *v13; // ebp
  int v14; // ecx
  int v15; // eax
  int v16; // edi
  __int16 *v17; // edi
  signed int v18; // ecx
  __int64 v19; // rax
  int v20; // ebp
  int RegionMap; // edi
  int v22; // ecx
  __int16 v23; // ax
  __int16 v24; // dx
  signed int v25; // edi
  __int64 v26; // rax
  signed int v27; // eax
  __int16 *v28; // ecx
  __int16 v29; // ax
  __int16 v30; // dx
  signed int v31; // esi
  __int64 v32; // rax
  signed int v33; // eax
  int result; // eax
  __int16 v35[2]; // [esp+10h] [ebp-8h] BYREF
  __int16 v36[2]; // [esp+14h] [ebp-4h] BYREF

  *(_BYTE *)(this + 56) = 1; /*0x42d179*/
  CellClass::ClearOccupancyGrid((CellClass *)this); /*0x42d17d*/
  v8 = this + 116; /*0x42d182*/
  v9 = 3; /*0x42d185*/
  do /*0x42d195*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8); /*0x42d18e*/
    v8 += 24; /*0x42d191*/
    --v9; /*0x42d194*/
  }
  while ( v9 ); /*0x42d195*/
  v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x42d1a1*/
  v11 = a3; /*0x42d1a6*/
  v12 = (int)v10; /*0x42d1b0*/
  v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x42d1bb*/
  *(_DWORD *)v36 = *Pathfinding::CrossBridge((int *)&a3, v12, a5); /*0x42d1d9*/
  v14 = *Pathfinding::CrossBridge((int *)&a3, (int)v13, a6); /*0x42d1e9*/
  v15 = a7; /*0x42d1eb*/
  v16 = a4; /*0x42d1ef*/
  *(_DWORD *)v35 = v14; /*0x42d1f6*/
  if ( a7 == -1 ) /*0x42d1fa*/
  {
    if ( a4 ) /*0x42d1fe*/
      v15 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a4 + 132))(a4) + 1460); /*0x42d20a*/
    else
      v15 = 0; /*0x42d212*/
  }
  if ( Pathfinding::AStar((Pathfinding *)this, v36, v35, v15, v16) ) /*0x42d222*/
  {
    v17 = a2; /*0x42d22f*/
    v18 = abs32(a2[1] - v11[1]); /*0x42d245*/
    v19 = *a2 - *v11; /*0x42d24c*/
    a7 = (HIDWORD(v19) ^ v19) - HIDWORD(v19); /*0x42d253*/
    if ( a7 <= v18 ) /*0x42d257*/
      a7 = v18; /*0x42d259*/
    v20 = *(_DWORD *)(this + 3188); /*0x42d25d*/
    a3 = (__int16 *)(2 * v20 - 2); /*0x42d267*/
    if ( !(_BYTE)a6 ) /*0x42d271*/
      goto LABEL_27; /*0x42d271*/
    if ( (_BYTE)a5 ) /*0x42d27d*/
    {
      RegionMap = GetRegionMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v11, 3, 0); /*0x42d29c*/
      if ( RegionMap == GetRegionMap((ObjectClass *)&stru_87F5F0.__pad_58[416], a2, 3, 0) && RegionMap != -1 ) /*0x42d2aa*/
        return a7; /*0x42d44f*/
      v17 = a2; /*0x42d2b0*/
    }
    if ( v20 < 4 ) /*0x42d2b7*/
      goto LABEL_18; /*0x42d2b7*/
    v22 = *Pathfinding::CheckCliff( /*0x42d2d6*/
             (Pathfinding *)&stru_87F5F0.__pad_58[416],
             &a6,
             v11,
             0,
             *(unsigned __int16 *)(this + 2 * v20 + 184));
    v23 = dword_89C278; /*0x42d2d8*/
    a6 = v22; /*0x42d2e0*/
    if ( (_WORD)v22 != (_WORD)dword_89C278 ) /*0x42d2e4*/
    {
LABEL_24:
      v25 = abs32(v11[1] - SHIWORD(a6)); /*0x42d343*/
      v26 = *v11 - (__int16)v22; /*0x42d35d*/
      v27 = (HIDWORD(v26) ^ v26) - HIDWORD(v26); /*0x42d360*/
      if ( v27 <= v25 ) /*0x42d364*/
        v27 = v25; /*0x42d366*/
      v17 = a2; /*0x42d36c*/
      a3 = (__int16 *)((char *)a3 + v27); /*0x42d372*/
LABEL_27:
      if ( !(_BYTE)a5 ) /*0x42d37c*/
        goto LABEL_40; /*0x42d37c*/
      if ( v20 < 4 ) /*0x42d385*/
        goto LABEL_31; /*0x42d385*/
      v28 = (__int16 *)*Pathfinding::CheckCliff( /*0x42d3a3*/
                          (Pathfinding *)&stru_87F5F0.__pad_58[416],
                          &a2,
                          v17,
                          0,
                          *(unsigned __int16 *)(this + 190));
      v29 = dword_89C278; /*0x42d3a5*/
      a2 = v28; /*0x42d3ad*/
      if ( (_WORD)v28 != (_WORD)dword_89C278 ) /*0x42d3b1*/
        goto LABEL_37; /*0x42d3b1*/
      v30 = HIWORD(dword_89C278); /*0x42d3b3*/
      if ( HIWORD(a2) == HIWORD(dword_89C278) ) /*0x42d3bf*/
      {
LABEL_31:
        v28 = (__int16 *)*Pathfinding::CheckCliff( /*0x42d3dd*/
                            (Pathfinding *)&stru_87F5F0.__pad_58[416],
                            &a2,
                            v17,
                            0,
                            *(unsigned __int16 *)(this + 188));
        v30 = HIWORD(dword_89C278); /*0x42d3e4*/
        v29 = dword_89C278; /*0x42d3e4*/
        a2 = v28; /*0x42d3eb*/
      }
      if ( (_WORD)v28 == v29 ) /*0x42d3f2*/
      {
        if ( HIWORD(a2) == v30 ) /*0x42d3f9*/
        {
          LOWORD(v28) = v36[0]; /*0x42d3fb*/
          a2 = *(__int16 **)v36; /*0x42d3ff*/
        }
        if ( (_WORD)v28 == v29 && HIWORD(a2) == v30 ) /*0x42d40d*/
        {
LABEL_40:
          result = (int)a3; /*0x42d438*/
          if ( (int)a3 > a7 ) /*0x42d442*/
            return result; /*0x42d442*/
          return a7; /*0x42d442*/
        }
      }
LABEL_37:
      v31 = abs32(v17[1] - SHIWORD(a2)); /*0x42d40f*/
      v32 = *v17 - (__int16)v28; /*0x42d429*/
      v33 = (HIDWORD(v32) ^ v32) - HIDWORD(v32); /*0x42d42c*/
      if ( v33 <= v31 ) /*0x42d430*/
        v33 = v31; /*0x42d432*/
      a3 = (__int16 *)((char *)a3 + v33); /*0x42d434*/
      goto LABEL_40; /*0x42d434*/
    }
    v24 = HIWORD(dword_89C278); /*0x42d2e6*/
    if ( HIWORD(a6) == HIWORD(dword_89C278) ) /*0x42d2f2*/
    {
LABEL_18:
      v22 = *Pathfinding::CheckCliff( /*0x42d311*/
               (Pathfinding *)&stru_87F5F0.__pad_58[416],
               &a6,
               v11,
               0,
               *(unsigned __int16 *)(this + 2 * v20 + 186));
      v24 = HIWORD(dword_89C278); /*0x42d318*/
      v23 = dword_89C278; /*0x42d318*/
      a6 = v22; /*0x42d31f*/
    }
    if ( (_WORD)v22 == v23 ) /*0x42d326*/
    {
      if ( HIWORD(a6) == v24 ) /*0x42d32d*/
      {
        LOWORD(v22) = v35[0]; /*0x42d32f*/
        a6 = *(_DWORD *)v35; /*0x42d333*/
      }
      if ( (_WORD)v22 == v23 && HIWORD(a6) == v24 ) /*0x42d341*/
        goto LABEL_27; /*0x42d341*/
    }
    goto LABEL_24; /*0x42d341*/
  }
  return 0x7FFFFFFF; /*0x42d448*/
}



// ==== 0x0042D470  CellStruct::Set  this=CellStruct  sig=csp ====
_WORD *__thiscall CellStruct::Set(CellStruct *this, __int16 a2, __int16 a3)
{
  LOWORD(this->field_0) = a2; /*0x42d47c*/
  HIWORD(this->field_0) = a3; /*0x42d47f*/
  return this; /*0x42d483*/
}



// ==== 0x0042D490  GetCellNeighborCoord  this=-  sig=csp ====
_DWORD *__fastcall GetCellNeighborCoord(_DWORD *a1, __int16 *a2, int a3)
{
  int v4; // eax
  __int16 v6; // ax
  int v7; // [esp+8h] [ebp+4h]

  if ( a3 == 8 ) /*0x42d49a*/
  {
    v4 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2) + 139); /*0x42d4a7*/
    if ( v4 == -1 ) /*0x42d4b1*/
      *a1 = 0; /*0x42d4d7*/
    else
      *a1 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v4) + 40); /*0x42d4bf*/
    return a1; /*0x42d4c1*/
  }
  else
  {
    v6 = HIWORD(g_DDrawSurfaceManager.scenario[a3 + 82]); /*0x42d4ea*/
    LOWORD(v7) = LOWORD(g_DDrawSurfaceManager.scenario[a3 + 82]) + *a2; /*0x42d4f6*/
    HIWORD(v7) = a2[1] + v6; /*0x42d4fb*/
    *a1 = v7; /*0x42d504*/
    return a1; /*0x42d506*/
  }
}



// ==== 0x0042D510  CellStruct::Add  this=AbstractClass  sig=csp ====
_DWORD *__thiscall CellStruct::Add(CellStruct *this, _DWORD *a2, _WORD *a3)
{
  __int16 v3; // dx
  _WORD *v5; // [esp+8h] [ebp+8h]

  v3 = LOWORD(this->field_0) + *a3; /*0x42d51f*/
  HIWORD(v5) = HIWORD(this->field_0) + a3[1]; /*0x42d522*/
  LOWORD(v5) = v3; /*0x42d52b*/
  *a2 = v5; /*0x42d534*/
  return a2; /*0x42d536*/
}



// ==== 0x0042D540  _DynamicVectorClass_I::ddtor  this=DynamicVectorClass_uint  sig=csp ====
void __thiscall DynamicVectorClass_uint::ddtor(_DynamicVectorClass_I *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42d546*/
  this->m_10 = 0; /*0x42d549*/
  if ( v2 && BYTE1(this->m_C) ) /*0x42d550*/
  {
    __3_YAXPAX_Z(v2); /*0x42d556*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d55e*/
  }
  BYTE1(this->m_C) = 0; /*0x42d561*/
  this->m_8 = 0; /*0x42d564*/
}



// ==== 0x0042D570  _DynamicVectorClass_I::GetIndex  this=DynamicVectorClass_uint  sig=csp ====
unsigned int __thiscall SortedArray::GetIndex(_DynamicVectorClass_I *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42d570*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42d585*/
  else
    return 0; /*0x42d577*/
}



// ==== 0x0042D590  _VectorClass_I::Clear  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_uint::Clear(_VectorClass_I *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x42d59a*/
}



// ==== 0x0042D5A0  _DynamicVectorClass_G::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ushort::Destroy(_DynamicVectorClass_G *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42d5a6*/
  this->m_10 = 0; /*0x42d5a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x42d5b0*/
  {
    __3_YAXPAX_Z(v2); /*0x42d5b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d5be*/
  }
  BYTE1(this->m_C) = 0; /*0x42d5c1*/
  this->m_8 = 0; /*0x42d5c4*/
}



// ==== 0x0042D5D0  _DynamicVectorClass_G::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ushort::GetItemIndex(_DynamicVectorClass_G *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42d5d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 1; /*0x42d5e5*/
  else
    return 0; /*0x42d5d7*/
}



// ==== 0x0042D5F0  _VectorClass_G::Clear  this=VectorClass_ushort  sig=csp ====
__int16 __thiscall VectorClass_ushort::Clear(_VectorClass_G *this, int a2)
{
  return *(_WORD *)(*(_DWORD *)&this->m_1[3] + 2 * a2); /*0x42d5fb*/
}



// ==== 0x0042D600  _VectorClass_I::AddRef  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_uint::AddRef(_VectorClass_I *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x42d602*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42d60d*/
  {
    v3 = 0; /*0x42d60f*/
    if ( m_8 <= 0 ) /*0x42d613*/
      return 1; /*0x42d633*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x42d615*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42d61b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x42d624*/
    {
      ++v3; /*0x42d626*/
      ++v4; /*0x42d627*/
      if ( v3 >= m_8 ) /*0x42d62c*/
        return 1; /*0x42d62c*/
    }
  }
  return 0; /*0x42d62e*/
}



// ==== 0x0042D640  _VectorClass_I::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_uint::SetCapacity(_VectorClass_I *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42d64c*/
  {
    LOBYTE(this->m_C) = 0; /*0x42d656*/
    if ( a3 ) /*0x42d65c*/
      v4 = a3; /*0x42d672*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x42d66e*/
    LOBYTE(this->m_C) = 1; /*0x42d676*/
    if ( v4 ) /*0x42d67a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42d685*/
      {
        m_8 = this->m_8; /*0x42d68c*/
        if ( a2 < m_8 ) /*0x42d691*/
          m_8 = a2; /*0x42d693*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42d699*/
          ++i; /*0x42d69e*/
        if ( BYTE1(this->m_C) ) /*0x42d6ab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d6b6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42d6be*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x42d6c7*/
      this->m_8 = a2; /*0x42d6cf*/
      BYTE1(this->m_C) = a3 == 0; /*0x42d6d2*/
      return 1; /*0x42d6d8*/
    }
    else
    {
      return 0; /*0x42d67f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_I *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42d6e2*/
    return 1; /*0x42d6e8*/
  }
}



// ==== 0x0042D6F0  _VectorClass_I::Clear_0  this=VectorClass  sig=csp ====
void __thiscall DynamicVectorClass_uint::Clear_0(_VectorClass_I *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x42d6fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d703*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d70b*/
  }
  BYTE1(this->m_C) = 0; /*0x42d70e*/
  this->m_8 = 0; /*0x42d711*/
}



// ==== 0x0042D720  _VectorClass_I::FindItemIndex  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_uint::FindItemIndex(_VectorClass_I *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x42d720*/
    return 0; /*0x42d728*/
  m_8 = this->m_8; /*0x42d72e*/
  result = 0; /*0x42d731*/
  if ( m_8 <= 0 ) /*0x42d735*/
    return -1; /*0x42d74c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42d73b*/
  {
    if ( ++result >= m_8 ) /*0x42d74a*/
      return -1; /*0x42d74a*/
  }
  return result; /*0x42d72a*/
}



// ==== 0x0042D760  _VectorClass_I::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall DynamicVectorClass_uint::GetCapacity(_VectorClass_I *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42d760*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42d775*/
  else
    return 0; /*0x42d767*/
}



// ==== 0x0042D780  _DynamicVectorClass_I::Remove  this=DynamicVectorClass_uint  sig=csp ====
char __thiscall DynamicVectorClass_uint::Remove(_DynamicVectorClass_I *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42d78c*/
  {
    LOBYTE(this->m_C) = 0; /*0x42d792*/
    if ( a3 ) /*0x42d798*/
      v4 = a3; /*0x42d7ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x42d7aa*/
    LOBYTE(this->m_C) = 1; /*0x42d7b2*/
    if ( !v4 ) /*0x42d7b6*/
      return 0; /*0x42d82a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x42d7b8*/
    {
      m_8 = this->m_8; /*0x42d7bf*/
      if ( a2 < m_8 ) /*0x42d7c4*/
        m_8 = a2; /*0x42d7c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42d7cc*/
        ++i; /*0x42d7d1*/
      if ( BYTE1(this->m_C) ) /*0x42d7de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d7e9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x42d7f1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x42d7fa*/
    this->m_8 = a2; /*0x42d802*/
    BYTE1(this->m_C) = a3 == 0; /*0x42d805*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_I *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42d80e*/
  }
  v7 = this->m_8; /*0x42d811*/
  if ( v7 < this->m_10 ) /*0x42d819*/
    this->m_10 = v7; /*0x42d81b*/
  return 1; /*0x42d81e*/
}



// ==== 0x0042D830  ObjectClass::method_42D830  this=ObjectClass  sig=csp ====
char __thiscall sub_42D830(ObjectClass *this, _DWORD *a2)
{
  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *ptr_4; // edx

  ptr_8 = this->?; /*0x42d833*/
  if ( this->? >= (int)ptr_8 ) /*0x42d83b*/
  {
    if ( !BYTE1(this->?) && ptr_8 ) /*0x42d846*/
      return 0; /*0x42d846*/
    abstractFlags = this->?; /*0x42d848*/
    if ( abstractFlags <= 0 /*0x42d858*/
      || !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x42d85f*/
    }
  }
  uniqueId = this->?; /*0x42d865*/
  ptr_4 = this->?; /*0x42d868*/
  this->? = uniqueId + 1; /*0x42d86e*/
  ptr_4[uniqueId] = *a2; /*0x42d878*/
  return 1; /*0x42d861*/
}



// ==== 0x0042D880  _DynamicVectorClass_I::GetSize  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall DynamicVectorClass_uint::GetSize(_DynamicVectorClass_I *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x42d880*/
  result = 0; /*0x42d883*/
  if ( m_10 <= 0 ) /*0x42d888*/
    return -1; /*0x42d89f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42d88e*/
  {
    if ( ++result >= m_10 ) /*0x42d89d*/
      return -1; /*0x42d89d*/
  }
  return result; /*0x42d8a2*/
}



// ==== 0x0042D8B0  _VectorClass_G::AddRef  this=VectorClass_ushort  sig=csp ====
char __thiscall VectorClass_ushort::AddRef(_VectorClass_G *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _WORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x42d8b1*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42d8bc*/
  {
    v3 = 0; /*0x42d8be*/
    if ( m_8 <= 0 ) /*0x42d8c2*/
      return 1; /*0x42d8e1*/
    v4 = *(_WORD **)&this->m_1[3]; /*0x42d8c4*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42d8ca*/
    while ( *v4 == *(_WORD *)((char *)v4 + v5) ) /*0x42d8d3*/
    {
      ++v3; /*0x42d8d5*/
      ++v4; /*0x42d8d6*/
      if ( v3 >= m_8 ) /*0x42d8db*/
        return 1; /*0x42d8db*/
    }
  }
  return 0; /*0x42d8dd*/
}



// ==== 0x0042D8F0  _VectorClass_G::Remove  this=VectorClass_ushort  sig=csp ====
char __thiscall VectorClass_ushort::Remove(_VectorClass_G *this, int a2, _WORD *a3)
{
  _WORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42d8fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x42d906*/
    if ( a3 ) /*0x42d90c*/
      v4 = a3; /*0x42d91f*/
    else
      v4 = (_WORD *)__2_YAPAXI_Z(2 * a2); /*0x42d91b*/
    LOBYTE(this->m_C) = 1; /*0x42d923*/
    if ( v4 ) /*0x42d927*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42d932*/
      {
        m_8 = this->m_8; /*0x42d939*/
        if ( a2 < m_8 ) /*0x42d93e*/
          m_8 = a2; /*0x42d940*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_WORD *)(*(_DWORD *)&this->m_1[3] + 2 * i - 2) ) /*0x42d946*/
          ++i; /*0x42d94b*/
        if ( BYTE1(this->m_C) ) /*0x42d95a*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d965*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42d96d*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x42d976*/
      this->m_8 = a2; /*0x42d97e*/
      BYTE1(this->m_C) = a3 == 0; /*0x42d981*/
      return 1; /*0x42d987*/
    }
    else
    {
      return 0; /*0x42d92c*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_G *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42d991*/
    return 1; /*0x42d997*/
  }
}



// ==== 0x0042D9A0  _VectorClass_G::ddtor  this=VectorClass_ushort  sig=csp ====
void __thiscall VectorClass_ushort::ddtor(_VectorClass_G *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x42d9ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d9b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d9bb*/
  }
  BYTE1(this->m_C) = 0; /*0x42d9be*/
  this->m_8 = 0; /*0x42d9c1*/
}



// ==== 0x0042D9D0  _VectorClass_G::GetSize  this=VectorClass_ushort  sig=csp ====
int __thiscall VectorClass_ushort::GetSize(_VectorClass_G *this, _WORD *a2)
{
  int result; // eax
  int m_8; // edx
  _WORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x42d9d0*/
    return 0; /*0x42d9d8*/
  m_8 = this->m_8; /*0x42d9de*/
  result = 0; /*0x42d9e1*/
  if ( m_8 <= 0 ) /*0x42d9e5*/
    return -1; /*0x42d9fe*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42d9eb*/
  {
    if ( ++result >= m_8 ) /*0x42d9fc*/
      return -1; /*0x42d9fc*/
  }
  return result; /*0x42d9da*/
}



// ==== 0x0042DA10  _VectorClass_G::Get  this=VectorClass_ushort  sig=csp ====
unsigned int __thiscall VectorClass_ushort::Get(_VectorClass_G *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42da10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 1; /*0x42da25*/
  else
    return 0; /*0x42da17*/
}



// ==== 0x0042DA30  _DynamicVectorClass_G::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ushort::SetCapacity(_DynamicVectorClass_G *this, int a2, _WORD *a3)
{
  _WORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42da3c*/
  {
    LOBYTE(this->m_C) = 0; /*0x42da42*/
    if ( a3 ) /*0x42da48*/
      v4 = a3; /*0x42da5b*/
    else
      v4 = (_WORD *)__2_YAPAXI_Z(2 * a2); /*0x42da57*/
    LOBYTE(this->m_C) = 1; /*0x42da5f*/
    if ( !v4 ) /*0x42da63*/
      return 0; /*0x42dad9*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x42da65*/
    {
      m_8 = this->m_8; /*0x42da6c*/
      if ( a2 < m_8 ) /*0x42da71*/
        m_8 = a2; /*0x42da73*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_WORD *)(*(_DWORD *)&this->m_1[3] + 2 * i - 2) ) /*0x42da79*/
        ++i; /*0x42da7e*/
      if ( BYTE1(this->m_C) ) /*0x42da8d*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42da98*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x42daa0*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x42daa9*/
    this->m_8 = a2; /*0x42dab1*/
    BYTE1(this->m_C) = a3 == 0; /*0x42dab4*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_G *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42dabd*/
  }
  v7 = this->m_8; /*0x42dac0*/
  if ( v7 < this->m_10 ) /*0x42dac8*/
    this->m_10 = v7; /*0x42daca*/
  return 1; /*0x42dacd*/
}



// ==== 0x0042DAE0  _DynamicVectorClass_G::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ushort::FindItemIndex(_DynamicVectorClass_G *this, _WORD *a2)
{
  int m_10; // edx
  int result; // eax
  _WORD *i; // ecx

  m_10 = this->m_10; /*0x42dae0*/
  result = 0; /*0x42dae3*/
  if ( m_10 <= 0 ) /*0x42dae8*/
    return -1; /*0x42db01*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42daee*/
  {
    if ( ++result >= m_10 ) /*0x42daff*/
      return -1; /*0x42daff*/
  }
  return result; /*0x42db04*/
}



// ==== 0x0042DB10  _VectorClass_I::Destructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_uint::Destructor(_VectorClass_I *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42db13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned int>::`vftable'; /*0x42db16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42db20*/
  {
    __3_YAXPAX_Z(v3); /*0x42db28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42db30*/
  }
  BYTE1(this->m_C) = 0; /*0x42db3b*/
  this->m_8 = 0; /*0x42db41*/
  if ( (a2 & 1) != 0 ) /*0x42db48*/
    __3_YAXPAX_Z(this); /*0x42db4b*/
  return this->__pad_0; /*0x42db55*/
}



// ==== 0x0042DB60  _DynamicVectorClass_I::Add  this=DynamicVectorClass_uint  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_uint::Add(_DynamicVectorClass_I *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42db63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned int>::`vftable'; /*0x42db66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42db70*/
  {
    __3_YAXPAX_Z(v3); /*0x42db78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42db80*/
  }
  BYTE1(this->m_C) = 0; /*0x42db8b*/
  this->m_8 = 0; /*0x42db91*/
  if ( (a2 & 1) != 0 ) /*0x42db98*/
    __3_YAXPAX_Z(this); /*0x42db9b*/
  return this->__pad_0; /*0x42dba5*/
}



// ==== 0x0042DBB0  _VectorClass_G::Add  this=VectorClass_ushort  sig=csp ====
_DWORD *__thiscall VectorClass_ushort::Add(_VectorClass_G *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42dbb3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short>::`vftable'; /*0x42dbb6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42dbc0*/
  {
    __3_YAXPAX_Z(v3); /*0x42dbc8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42dbd0*/
  }
  BYTE1(this->m_C) = 0; /*0x42dbdb*/
  this->m_8 = 0; /*0x42dbe1*/
  if ( (a2 & 1) != 0 ) /*0x42dbe8*/
    __3_YAXPAX_Z(this); /*0x42dbeb*/
  return this->__pad_0; /*0x42dbf5*/
}



// ==== 0x0042DC00  _DynamicVectorClass_G::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ushort::Constructor(_DynamicVectorClass_G *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42dc03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short>::`vftable'; /*0x42dc06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42dc10*/
  {
    __3_YAXPAX_Z(v3); /*0x42dc18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42dc20*/
  }
  BYTE1(this->m_C) = 0; /*0x42dc2b*/
  this->m_8 = 0; /*0x42dc31*/
  if ( (a2 & 1) != 0 ) /*0x42dc38*/
    __3_YAXPAX_Z(this); /*0x42dc3b*/
  return this->__pad_0; /*0x42dc45*/
}



// ==== 0x0042DC50  VectorClassUInt::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClassUInt::Constructor(VectorClassUInt *this, int a2, int a3)
{
  this->Items = 0; /*0x42dc5b*/
  this->Capacity = a2; /*0x42dc5e*/
  this->IsInitialized = 1; /*0x42dc61*/
  this->IsAllocated = 0; /*0x42dc65*/
  *this = (VectorClassUInt)&VectorClass<unsigned int>::`vftable'; /*0x42dc68*/
  if ( a2 ) /*0x42dc6e*/
  {
    if ( a3 ) /*0x42dc76*/
    {
      this->Items = a3; /*0x42dc78*/
      return this; /*0x42dc7e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x42dc8d*/
    this->IsAllocated = 1; /*0x42dc90*/
  }
  return this; /*0x42dc7d*/
}



// ==== 0x0042DCA0  Pathfinding::SiftDown  this=Pathfinding  sig=csp ====
void __thiscall Pathfinding::SiftDown(Pathfinding *this, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // edi
  int Pathfinding_field_0x08; // eax
  int v6; // ebp
  int v7; // edi

  v2 = a2; /*0x42dca5*/
  v3 = 2 * a2; /*0x42dcaa*/
  v4 = 2 * a2 + 1; /*0x42dcad*/
  if ( 2 * a2 > *(_DWORD *)this->__pad_0 /*0x42dccb*/
    || *(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * a2) + 8) <= (double)*(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 8 * a2)
                                                                                              + 8) )
  {
    v3 = a2; /*0x42dccd*/
  }
  if ( v4 <= *(_DWORD *)this->__pad_0 /*0x42dce9*/
    && *(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v4)
                                                                                             + 8) )
  {
    v3 = 2 * a2 + 1; /*0x42dceb*/
  }
  if ( v3 != a2 ) /*0x42dcef*/
  {
    do /*0x42dd4f*/
    {
      Pathfinding_field_0x08 = this->Pathfinding_field_0x08; /*0x42dcf1*/
      v6 = 2 * v3 + 1; /*0x42dcf4*/
      v7 = *(_DWORD *)(Pathfinding_field_0x08 + 4 * v2); /*0x42dcfb*/
      *(_DWORD *)(Pathfinding_field_0x08 + 4 * v2) = *(_DWORD *)(Pathfinding_field_0x08 + 4 * v3); /*0x42dcfe*/
      v2 = v3; /*0x42dd04*/
      *(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v3) = v7; /*0x42dd06*/
      if ( 2 * v3 <= *(_DWORD *)this->__pad_0 /*0x42dd2b*/
        && *(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 8 * v3)
                                                                                                 + 8) )
      {
        v3 *= 2; /*0x42dd2d*/
      }
      if ( v6 <= *(_DWORD *)this->__pad_0 /*0x42dd49*/
        && *(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v6)
                                                                                                 + 8) )
      {
        v3 = v6; /*0x42dd4b*/
      }
    }
    while ( v3 != v2 ); /*0x42dd4f*/
  }
}



// ==== 0x0042DD60  WordVector::Constructor  this=VectorClass_ushort  sig=csp ====
_DWORD *__thiscall WordVector::Constructor(WordVector *this, int a2, int a3)
{
  this->Items = 0; /*0x42dd6b*/
  this->Capacity = a2; /*0x42dd6e*/
  this->IsInitialized = 1; /*0x42dd71*/
  this->IsAllocated = 0; /*0x42dd75*/
  *this = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x42dd78*/
  if ( a2 ) /*0x42dd7e*/
  {
    if ( a3 ) /*0x42dd86*/
    {
      this->Items = a3; /*0x42dd88*/
      return this; /*0x42dd8e*/
    }
    this->Items = __2_YAPAXI_Z(2 * a2); /*0x42dd9c*/
    this->IsAllocated = 1; /*0x42dd9f*/
  }
  return this; /*0x42dd8d*/
}



// ==== 0x0042DDB0  Base64Pipe::ProcessBitmapStream  this=Base64Pipe  sig=csp ====
int __thiscall Delegate::ProcessBitmapStream(Base64Pipe *this, char *Src, int a3)
{
  char *v3; // ebp
  int v5; // esi
  _BYTE *v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned __int8 *pad_14; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  int Size; // [esp+10h] [ebp-4h]
  int Srca; // [esp+18h] [ebp+4h]

  v3 = Src; /*0x42ddb4*/
  if ( !Src || a3 < 1 ) /*0x42ddc8*/
    return Delegate::Dispatch((Pipe *)this, (int)Src, a3); /*0x42df25*/
  v13 = 0; /*0x42ddd5*/
  if ( this->field_C ) /*0x42ddce*/
  {
    v5 = 4; /*0x42ddfb*/
    pad_14 = (unsigned __int8 *)this->__pad_14; /*0x42de00*/
    v6 = &this->field_18; /*0x42de04*/
    Srca = 3; /*0x42de07*/
  }
  else
  {
    v5 = 3; /*0x42dde2*/
    pad_14 = (unsigned __int8 *)&this->field_18; /*0x42dde7*/
    v6 = this->__pad_14; /*0x42ddeb*/
    Srca = 4; /*0x42ddee*/
  }
  v7 = this->field_10; /*0x42de0f*/
  if ( v7 > 0 ) /*0x42de14*/
  {
    Size = a3; /*0x42de24*/
    if ( a3 >= v5 - v7 ) /*0x42de28*/
      Size = v5 - v7; /*0x42de2a*/
    memcpy(&pad_14[this->field_10], v3, Size); /*0x42de3e*/
    v8 = Size + this->field_10; /*0x42de4e*/
    v3 += Size; /*0x42de55*/
    this->field_10 = v8; /*0x42de59*/
    a3 -= Size; /*0x42de5c*/
    if ( v8 == v5 ) /*0x42de60*/
    {
      if ( this->field_C ) /*0x42de62*/
        v9 = DecodeBitmapRGB(pad_14, v5, v6, Srca); /*0x42de88*/
      else
        v9 = EncodeBitmapRGB((char *)pad_14, v5, v6, Srca); /*0x42de75*/
      v13 = Delegate::Dispatch((Pipe *)this, (int)v6, v9); /*0x42de96*/
      this->field_10 = 0; /*0x42de9a*/
    }
  }
  for ( ; a3 >= v5; a3 -= v5 ) /*0x42dea5*/
  {
    if ( this->field_C ) /*0x42dea7*/
      v10 = DecodeBitmapRGB((unsigned __int8 *)v3, v5, v6, Srca); /*0x42dec9*/
    else
      v10 = EncodeBitmapRGB(v3, v5, v6, Srca); /*0x42deb8*/
    v3 += v5; /*0x42ded2*/
    v13 += Delegate::Dispatch((Pipe *)this, (int)v6, v10); /*0x42dee5*/
  }
  if ( a3 > 0 ) /*0x42def9*/
  {
    memcpy(pad_14, v3, a3); /*0x42df02*/
    this->field_10 = a3; /*0x42df0e*/
  }
  return v13; /*0x42df15*/
}



// ==== 0x0042DF40  Base64Pipe::ProcessBitmapAndDispatch  this=Base64Pipe  sig=csp ====
int __thiscall Delegate::ProcessBitmapAndDispatch(Base64Pipe *this)
{
  int v2; // edi
  int v3; // edx
  void *pad_14; // edi
  int v5; // eax

  v2 = 0; /*0x42df44*/
  v3 = this->field_10; /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( this->field_C ) /*0x42df4d*/
    {
      pad_14 = &this->field_18; /*0x42df64*/
      v5 = DecodeBitmapRGB((unsigned __int8 *)this->__pad_14, v3, &this->field_18, 3); /*0x42df6d*/
    }
    else
    {
      pad_14 = this->__pad_14; /*0x42df54*/
      v5 = EncodeBitmapRGB((char *)&this->field_18, v3, this->__pad_14, 4); /*0x42df5d*/
    }
    v2 = Delegate::Dispatch((Pipe *)this, (int)pad_14, v5); /*0x42df7b*/
    this->field_10 = 0; /*0x42df7d*/
  }
  return v2 + GameClass::GetRelatedObject((Pipe *)this); /*0x42df8d*/
}



// ==== 0x0042DF90  Base64Straw::ProcessFrame  this=Base64Straw  sig=csp ====
size_t __thiscall BitmapClass::ProcessFrame(Base64Straw *this, char *a2, signed int Size)
{
  size_t result; // eax
  Base64Straw *v5; // edi
  Base64Straw *v6; // ebx
  int v7; // ebp
  signed int v8; // ecx
  int v9; // eax
  size_t v10; // edi
  signed int v11; // edx
  char *v12; // ecx
  size_t v13; // eax
  int v14; // edx
  int v15; // eax
  size_t v16; // [esp+10h] [ebp-Ch]
  Base64Straw *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  result = 0; /*0x42df98*/
  v16 = 0; /*0x42df9e*/
  if ( this->q00C ) /*0x42df9b*/
  {
    v18 = 4; /*0x42dfc2*/
    v17 = (Base64Straw *)((char *)this + 20); /*0x42dfca*/
    v6 = this + 2; /*0x42dfce*/
    v7 = 3; /*0x42dfd1*/
    v5 = (Base64Straw *)((char *)this + 20); /*0x42dfd6*/
  }
  else
  {
    v5 = this + 2; /*0x42dfa6*/
    v18 = 3; /*0x42dfa9*/
    v17 = this + 2; /*0x42dfb1*/
    v6 = (Base64Straw *)((char *)this + 20); /*0x42dfb5*/
    v7 = 4; /*0x42dfb8*/
  }
  v8 = Size; /*0x42dfd8*/
  if ( Size > 0 )
  {
    while ( 1 )
    {
      v9 = this->q004; /*0x42dfea*/
      if ( v9 > 0 ) /*0x42dfef*/
      {
        v10 = v8; /*0x42dff3*/
        if ( v8 >= v9 ) /*0x42dff5*/
          v10 = this->q004; /*0x42dff7*/
        memcpy(a2, &v6->__pad_0[v7 - v9], v10); /*0x42e006*/
        this->q004 -= v10; /*0x42e018*/
        v11 = Size - v10; /*0x42e022*/
        v12 = &a2[v10]; /*0x42e024*/
        v13 = v10 + v16; /*0x42e026*/
        v5 = v17; /*0x42e028*/
        a2 = v12; /*0x42e02c*/
        Size = v11; /*0x42e030*/
        v16 = v13; /*0x42e034*/
        v8 = v11; /*0x42e038*/
      }
      if ( !v8 ) /*0x42e03c*/
        break; /*0x42e03c*/
      v14 = Delegate::Invoke((Straw *)this, (int)v5, v18); /*0x42e04b*/
      v15 = this->q00C
          ? DecodeBitmapRGB((unsigned __int8 *)v5, v14, v6, v7)
          : EncodeBitmapRGB(v5->__pad_0, v14, v6, v7);
      this->q004 = v15; /*0x42e066*/
      if ( !v15 || Size <= 0 ) /*0x42e071*/
        break; /*0x42e071*/
      v8 = Size; /*0x42dfe6*/
    }
    return v16; /*0x42e077*/
  }
  return result; /*0x42e07b*/
}



// ==== 0x0042E090  sub_42E090  this=-  sig=ida-proto ====
int sub_42E090()
{
  dword_89C2E8 = 0; /*0x42e092*/
  dword_89C2EC = 0; /*0x42e097*/
  dword_89C2F0 = 0; /*0x42e09c*/
  dword_89C2F4 = 0; /*0x42e0a1*/
  return 0; /*0x42e0a6*/
}



// ==== 0x0042E150  ObjectClass::method_42E150  this=ObjectClass  sig=csp ====
int __usercall sub_42E150@<eax>(ObjectClass *this, _DWORD *a2@<ecx>)
{
  int result; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  _DWORD v7[4]; // [esp+0h] [ebp-10h] BYREF

  v3 = a2[6]; /*0x42e150*/
  if ( v3 ) /*0x42e158*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x42e164*/
      v4 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v3); /*0x42e172*/
    else
      v4 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v3); /*0x42e17f*/
    v7[0] = *a2; /*0x42e186*/
    v7[1] = a2[1]; /*0x42e18d*/
    v5 = a2[2]; /*0x42e191*/
    v6 = a2[3]; /*0x42e194*/
    v7[2] = v5; /*0x42e197*/
    v7[3] = v6; /*0x42e19b*/
    return (*(int (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x42e1ac*/
             g_DSurface_Hidden_2,
             v7,
             v4);
  }
  return result; /*0x42e1b0*/
}



// ==== 0x0042E1C0  ObjectClass::RenderTooltipBorder  this=ObjectClass  sig=csp ====
int __thiscall RenderTooltipBorder(ObjectClass *this)
{
  int nextArrayIndex; // eax
  int v3; // ecx
  int v4; // edi
  _DWORD *v5; // eax
  char *ptr_8; // edi
  char *ptr_C; // ebp
  char *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  bool v12; // cc
  int uniqueId; // edi
  int v14; // edx
  bool v15; // zf
  int v16; // edx
  int v17; // eax
  int v18; // edi
  int v19; // edx
  int v20; // eax
  int v21; // ebp
  int v22; // edx
  int v23; // eax
  int abstractFlags; // edx
  int v25; // eax
  int result; // eax
  int occupant; // ecx
  int v28; // [esp-4h] [ebp-34h]
  char *ptr_0; // [esp+10h] [ebp-20h]
  char *ptr_4; // [esp+14h] [ebp-1Ch]
  int v31; // [esp+18h] [ebp-18h]
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+1Ch] [ebp-14h]
  Rect v34; // [esp+20h] [ebp-10h] BYREF

  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x42e1d1*/
  nextArrayIndex = this->?; /*0x42e1d4*/
  if ( nextArrayIndex ) /*0x42e1d9*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x42e1e5*/
      v3 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + nextArrayIndex); /*0x42e1f2*/
    else
      v3 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * nextArrayIndex); /*0x42e1fe*/
    v28 = v3; /*0x42e20a*/
    v4 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x42e20e*/
    v5 = Rect::Set(&v34, (int)this->AbstractClass, (int)this->?, (int)this->?, (int)this->?); /*0x42e21d*/
    (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(v4 + 88))(g_DSurface_Hidden_2, v5, v28); /*0x42e229*/
  }
  ptr_8 = (char *)this->?; /*0x42e22f*/
  ptr_C = (char *)this->?; /*0x42e237*/
  ptr_4 = (char *)this->?; /*0x42e23a*/
  v8 = ptr_8; /*0x42e23e*/
  ptr_0 = (char *)this->AbstractClass; /*0x42e240*/
  v31 = (int)ptr_8; /*0x42e246*/
  v9 = (int)ptr_C; /*0x42e24a*/
  if ( this->? ) /*0x42e232*/
  {
    v8 = ptr_8 - 2; /*0x42e254*/
    ptr_0 = (char *)this->AbstractClass + 1; /*0x42e257*/
    ++ptr_4; /*0x42e25b*/
    v31 = (int)(ptr_8 - 2); /*0x42e25f*/
    v9 = (int)(ptr_C - 2); /*0x42e263*/
  }
  v32 = (int)v8; /*0x42e268*/
  if ( (int)ptr_8 <= (int)ptr_C ) /*0x42e26c*/
    v32 = v9; /*0x42e26e*/
  LOWORD(v10) = Math::RoundToInt((double)v32 * *(double *)&this->?); /*0x42e279*/
  v11 = v10; /*0x42e27e*/
  v33 = v10; /*0x42e282*/
  if ( v10 <= 0 ) /*0x42e286*/
  {
    v18 = v31; /*0x42e333*/
  }
  else
  {
    v12 = (int)ptr_8 <= (int)ptr_C; /*0x42e291*/
    uniqueId = this->?; /*0x42e293*/
    v14 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4); /*0x42e296*/
    if ( v12 ) /*0x42e299*/
    {
      v15 = v14 == 1; /*0x42e2e6*/
      v19 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x42e2e9*/
      if ( v15 ) /*0x42e2ef*/
        v20 = *(unsigned __int8 *)(v19 + uniqueId); /*0x42e2f3*/
      else
        v20 = *(unsigned __int16 *)(v19 + 2 * uniqueId); /*0x42e2fa*/
      v18 = v31; /*0x42e302*/
      v34.X = (int)ptr_0; /*0x42e306*/
      v34.Y = (int)&ptr_4[v11]; /*0x42e311*/
      v34.Width = v31; /*0x42e31b*/
      v34.Height = v9; /*0x42e31f*/
      (*(void (__thiscall **)(AudioStream *, Rect *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x42e32a*/
        g_DSurface_Hidden_2,
        &v34,
        v20);
      v11 = v33; /*0x42e32d*/
    }
    else
    {
      v15 = v14 == 1; /*0x42e29b*/
      v16 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x42e29e*/
      if ( v15 ) /*0x42e2a4*/
        v17 = *(unsigned __int8 *)(v16 + uniqueId); /*0x42e2a8*/
      else
        v17 = *(unsigned __int16 *)(v16 + 2 * uniqueId); /*0x42e2af*/
      v34.Width = v11; /*0x42e2b7*/
      v34.X = (int)ptr_0; /*0x42e2c1*/
      v34.Y = (int)ptr_4; /*0x42e2ca*/
      v34.Height = v9; /*0x42e2ce*/
      (*(void (__thiscall **)(AudioStream *, Rect *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x42e2d9*/
        g_DSurface_Hidden_2,
        &v34,
        v17);
      v18 = v31; /*0x42e2dc*/
      v11 = v33; /*0x42e2e0*/
    }
  }
  if ( v18 - v11 > 0 ) /*0x42e33d*/
  {
    if ( (int)this->? <= (int)this->? ) /*0x42e34b*/
    {
      abstractFlags = this->?; /*0x42e39e*/
      if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x42e3a5*/
        v25 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + abstractFlags); /*0x42e3b2*/
      else
        v25 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * abstractFlags); /*0x42e3be*/
      v34.X = (int)ptr_0; /*0x42e3c7*/
      v34.Height = v11 - 1; /*0x42e3cf*/
      v34.Y = (int)ptr_4; /*0x42e3d9*/
      v34.Width = v18; /*0x42e3dd*/
      (*(void (__stdcall **)(Rect *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))(&v34, v25); /*0x42e3e9*/
    }
    else
    {
      v21 = this->?; /*0x42e352*/
      v22 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x42e35b*/
      if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x42e361*/
        v23 = *(unsigned __int8 *)(v22 + v21); /*0x42e365*/
      else
        v23 = *(unsigned __int16 *)(v22 + 2 * v21); /*0x42e36c*/
      v34.Width = v18; /*0x42e374*/
      v34.Height = v9; /*0x42e37a*/
      v34.X = (int)&ptr_0[v11]; /*0x42e37e*/
      v34.Y = (int)ptr_4; /*0x42e386*/
      (*(void (__stdcall **)(Rect *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))(&v34, v23); /*0x42e397*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x42e3f4*/
  result = (int)this->?; /*0x42e3f7*/
  occupant = this->occupant; /*0x42e3fa*/
  this->owningHouseIndex = result; /*0x42e3fd*/
  this->fallRate = occupant; /*0x42e400*/
  LOBYTE(this->nextObject) = 1; /*0x42e403*/
  return result; /*0x42e407*/
}



// ==== 0x0042E410  Rect::Set  this=Rect  sig=csp ====
_DWORD *__thiscall Rect::Set(Rect *this, int a2, int a3, int a4, int a5)
{
  this->X = a2; /*0x42e41a*/
  this->Y = a3; /*0x42e420*/
  this->Width = a4; /*0x42e427*/
  this->Height = a5; /*0x42e42a*/
  return &this->X; /*0x42e42d*/
}



// ==== 0x0042E430  sub_42E430  this=-  sig=ida-proto ====
void sub_42E430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42e43c*/
  dbl_89C318 = Math::Sqrt(v0 + v0); /*0x42e44e*/
}



// ==== 0x0042E460  sub_42E460  this=-  sig=ida-proto ====
void sub_42E460()
{
  dbl_89C368 = dbl_89C318 / 60.0; /*0x42e46c*/
}



// ==== 0x0042E480  sub_42E480  this=-  sig=ida-proto ====
void sub_42E480()
{
  dbl_89C350 = 1.0 / dbl_89C368; /*0x42e48c*/
}



// ==== 0x0042E4A0  sub_42E4A0  this=-  sig=ida-proto ====
void sub_42E4A0()
{
  dbl_89C348 = 0.0174532925199433 * 45.0; /*0x42e4ac*/
}



// ==== 0x0042E4C0  sub_42E4C0  this=-  sig=ida-proto ====
void sub_42E4C0()
{
  dbl_89C320 = 0.0174532925199433 * 60.0; /*0x42e4cc*/
}



// ==== 0x0042E4E0  sub_42E4E0  this=-  sig=ida-proto ====
void sub_42E4E0()
{
  dbl_89C2F8 = 0.0174532925199433 * 90.0; /*0x42e4ec*/
}



// ==== 0x0042E500  sub_42E500  this=-  sig=ida-proto ====
__int64 sub_42E500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C2F8 - dbl_89C320); /*0x42e512*/
  result = Math::RoundToInt(v0 * dbl_89C318 * 0.5); /*0x42e526*/
  dword_89C370 = result; /*0x42e52b*/
  return result; /*0x42e530*/
}



// ==== 0x0042E540  sub_42E540  this=-  sig=ida-proto ====
void sub_42E540()
{
  dbl_89C328 = Math::ArcTan((double)dword_89C370 * 0.00390625); /*0x42e557*/
}



// ==== 0x0042E570  sub_42E570  this=-  sig=ida-proto ====
void sub_42E570()
{
  dbl_89C340 = Math::ArcTan((double)(2 * dword_89C370) / dbl_89C318); /*0x42e592*/
}



// ==== 0x0042E5A0  sub_42E5A0  this=-  sig=ida-proto ====
__int64 sub_42E5A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C370) + 0.5); /*0x42e5bb*/
  dword_89C364 = result; /*0x42e5c0*/
  return result; /*0x42e5c6*/
}



// ==== 0x0042E5D0  sub_42E5D0  this=-  sig=ida-proto ====
int sub_42E5D0()
{
  dword_89C310 = 0; /*0x42e5d2*/
  return 0; /*0x42e5de*/
}



// ==== 0x0042E5E0  sub_42E5E0  this=-  sig=ida-proto ====
int sub_42E5E0()
{
  dword_89C330 = 0; /*0x42e5e2*/
  dword_89C334 = 0; /*0x42e5e7*/
  dword_89C338 = 0; /*0x42e5ec*/
  return 0; /*0x42e5f1*/
}



// ==== 0x0042E600  sub_42E600  this=-  sig=ida-proto ====
int sub_42E600()
{
  dword_89C360 = 0; /*0x42e605*/
  dword_89C358 = 128; /*0x42e60f*/
  dword_89C35C = 128; /*0x42e614*/
  return 128; /*0x42e619*/
}



// ==== 0x0042E620  sub_42E620  this=-  sig=ida-proto ====
int sub_42E620()
{
  dword_89C300 = 0; /*0x42e622*/
  dword_89C304 = 0; /*0x42e627*/
  dword_89C308 = 0; /*0x42e62c*/
  dword_89C30C = 0; /*0x42e631*/
  return 0; /*0x42e636*/
}



// ==== 0x0042E6C0  sub_42E6C0  this=-  sig=csp ====
char __stdcall sub_42E6C0(int a1)
{
  return 1; /*0x42e6c2*/
}



// ==== 0x0042E6D0  CellClass::setTileIndex  this=CellClass  sig=csp ====
__int16 __thiscall CellClass::setTileIndex(CellClass *this, int a2)
{
  LOWORD(this->foggedObjects) += a2; /*0x42e6da*/
  HIWORD(this->foggedObjects) += HIWORD(a2); /*0x42e6de*/
  return a2; /*0x42e6e2*/
}



// ==== 0x0042E6F0  BaseClass::Constructor  this=BaseClass  sig=csp ====
_DWORD *__thiscall BaseClass::Constructor(BaseClass *this)
{
  int *p_baseNodeCount; // ebx

  p_baseNodeCount = &this->baseNodeCount; /*0x42e6f7*/
  BaseNodeClass::Vector_Constructor((BaseNodeClass *)&this->baseNodeCount, 0, 0); /*0x42e6fe*/
  *p_baseNodeCount = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x42e703*/
  p_baseNodeCount[5] = 10; /*0x42e709*/
  p_baseNodeCount[4] = 0; /*0x42e710*/
  this->cells38 = 0; /*0x42e71a*/
  VectorClass::CellConstructor((VectorClass *)&this->cells38Count, 0, 0); /*0x42e71d*/
  this->cells38Count = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x42e722*/
  this->unknown54[2] = 10; /*0x42e728*/
  this->unknown54[1] = 0; /*0x42e72f*/
  VectorClass::CellConstructor((VectorClass *)&this->unknown54[3], 0, 0); /*0x42e739*/
  this->unknown54[3] = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x42e73e*/
  this->owner = (HouseClass *)10; /*0x42e744*/
  this->unknown54[7] = 0; /*0x42e74b*/
  this->center = 0; /*0x42e74e*/
  *((_WORD *)this + 41) = 0; /*0x42e752*/
  *((_DWORD *)this + 21) = 0; /*0x42e756*/
  this->Count = 0; /*0x42e759*/
  *((_DWORD *)this + 23) = 0; /*0x42e75c*/
  this->cells24Capacity = 0; /*0x42e75f*/
  *((_DWORD *)this + 25) = 0; /*0x42e762*/
  *((_DWORD *)this + 26) = 0; /*0x42e765*/
  *((_DWORD *)this + 27) = 0; /*0x42e768*/
  this->cells38 = 0; /*0x42e76b*/
  *((_DWORD *)this + 29) = 0; /*0x42e76e*/
  this->baseNodes = (BaseNodeClass *)&BaseClass::`vftable'; /*0x42e771*/
  return &this->baseNodes; /*0x42e779*/
}



// ==== 0x0042E780  BuildingQueue::IsCellSuitable  this=BuildingQueue  sig=csp ====
int __thiscall BuildingQueue::IsCellSuitable(BuildingQueue *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // esi

  result = (int)BridgeClass::GetCellData((BridgeClass *)this, a2); /*0x42e789*/
  if ( result ) /*0x42e790*/
  {
    LOBYTE(result) = 1; /*0x42e793*/
    return result; /*0x42e796*/
  }
  v4 = 16 * a2 + this->BuildingQueue_field_0x08; /*0x42e79f*/
  result = *(_DWORD *)v4; /*0x42e7a2*/
  if ( *(int *)v4 < 0 ) /*0x42e7a7*/
    goto LABEL_9; /*0x42e7a7*/
  v5 = *((_DWORD *)dword_A83C6C + result); /*0x42e7af*/
  if ( !*(_BYTE *)(v5 + 5489) ) /*0x42e7b2*/
    goto LABEL_9; /*0x42e7b2*/
  result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(v4 + 4)); /*0x42e7c5*/
  if ( *(_DWORD *)(result + 68) == *(_DWORD *)(*(_DWORD *)(v5 + 3668) + 660) ) /*0x42e7d9*/
  {
    LOBYTE(result) = 1; /*0x42e7dc*/
    return result; /*0x42e7df*/
  }
  result = (int)Cell::IsBridge((Cell *)result); /*0x42e7e4*/
  if ( result ) /*0x42e7eb*/
    LOBYTE(result) = 1; /*0x42e7ee*/
  else
LABEL_9:
    LOBYTE(result) = 0; /*0x42e7f5*/
  return result; /*0x42e792*/
}



// ==== 0x0042E800  ObjectClass::method_42E800  this=ObjectClass  sig=csp ====
char __thiscall sub_42E800(ObjectClass *this, int a2)
{
  return *((_BYTE *)this->? + 16 * a2 + 8); /*0x42e80e*/
}



// ==== 0x0042E820  BridgeClass::GetCellData  this=BridgeClass  sig=csp ====
_DWORD *__thiscall BridgeClass::GetCellData(BridgeClass *this, int a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // ebp
  Cell *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _WORD *v9; // esi
  _WORD *v10; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // esi
  int v17; // eax
  int v18; // edi
  int v19; // [esp+10h] [ebp-18h] BYREF
  __int16 v20[2]; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+24h] [ebp-4h]

  v3 = (int *)(16 * a2 + *((_DWORD *)this + 2)); /*0x42e833*/
  *(_DWORD *)v20 = v3[1]; /*0x42e83b*/
  if ( !*(_DWORD *)v20 ) /*0x42e83f*/
    return 0; /*0x42e83f*/
  v4 = *v3; /*0x42e84c*/
  if ( v4 < 0 ) /*0x42e850*/
    return 0; /*0x42e850*/
  v5 = *((_DWORD *)dword_A83C6C + v4); /*0x42e861*/
  v21 = v5; /*0x42e869*/
  v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x42e86d*/
  v7 = Cell::IsBridge(v6); /*0x42e874*/
  v8 = v7; /*0x42e879*/
  if ( !v7 ) /*0x42e87d*/
    return 0; /*0x42e87d*/
  v9 = (_WORD *)(16 * a2 + *((_DWORD *)this + 2) + 4); /*0x42e88a*/
  v10 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v7 + 440))(v7, &v19); /*0x42e893*/
  if ( *v10 != *v9 || v10[1] != v9[1] || v8[135] != *((_DWORD *)this + 29) ) /*0x42e8be*/
    return 0; /*0x42e8be*/
  if ( v8[328] == v5 ) /*0x42e8ca*/
    return v8; /*0x42e8d5*/
  if ( !*(_BYTE *)(v5 + 3720) ) /*0x42e8d8*/
    return 0; /*0x42e987*/
  v12 = 0; /*0x42e8e6*/
  v13 = v8 + 379; /*0x42e8e8*/
  v19 = 0; /*0x42e8ee*/
  v14 = 3; /*0x42e8f2*/
  do /*0x42e900*/
  {
    if ( *v13 == v5 ) /*0x42e8f9*/
      ++v12; /*0x42e8fb*/
    ++v13; /*0x42e8fc*/
    --v14; /*0x42e8ff*/
  }
  while ( v14 ); /*0x42e900*/
  v15 = a2; /*0x42e902*/
  v19 = v12; /*0x42e906*/
  if ( a2 > 0 ) /*0x42e90c*/
  {
    v16 = *((_DWORD *)this + 2); /*0x42e90e*/
    do /*0x42e96a*/
    {
      if ( *(int *)v16 >= 0 && *((_DWORD *)dword_A83C6C + *(_DWORD *)v16) == v21 ) /*0x42e924*/
      {
        v17 = v8[39]; /*0x42e92e*/
        v18 = v8[40]; /*0x42e930*/
        v22 = v8[41]; /*0x42e936*/
        if ( *(_WORD *)(v16 + 4) == (unsigned __int16)(v17 / 256) /*0x42e960*/
          && *(_WORD *)(v16 + 6) == (unsigned __int16)(v18 / 256) )
        {
          --v19; /*0x42e962*/
        }
      }
      v16 += 16; /*0x42e966*/
      --v15; /*0x42e969*/
    }
    while ( v15 ); /*0x42e96a*/
    v12 = v19; /*0x42e96c*/
  }
  return v12 <= 0 ? 0 : v8;
}



// ==== 0x0042E990  ObjectClass::method_42E990  this=ObjectClass  sig=csp ====
bool __thiscall sub_42E990(ObjectClass *this, _DWORD *a2)
{
  int v4; // esi
  _DWORD *v5; // edi
  char *v6; // edi
  _WORD *v7; // eax
  _BYTE v9[4]; // [esp+10h] [ebp-4h] BYREF
  _DWORD *i; // [esp+18h] [ebp+4h]

  if ( a2[135] != *(_DWORD *)&this->isOnMap ) /*0x42e9a6*/
    return 0; /*0x42e9a6*/
  v4 = 0; /*0x42e9ab*/
  if ( this->? <= 0 ) /*0x42e9af*/
    return 0; /*0x42e9af*/
  v5 = 0; /*0x42e9b1*/
  for ( i = 0; ; i += 4 ) /*0x42e9b3*/
  {
    v6 = (char *)this->? + (unsigned int)v5; /*0x42e9c0*/
    if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v6 ) /*0x42e9ca*/
    {
      v7 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 440))(a2, v9); /*0x42e9d6*/
      if ( *v7 == *((_WORD *)v6 + 2) && v7[1] == *((_WORD *)v6 + 3) ) /*0x42e9ed*/
        break; /*0x42e9ed*/
    }
    ++v4; /*0x42e9f6*/
    v5 = i + 4; /*0x42e9f7*/
    if ( v4 >= this->? ) /*0x42ea00*/
      return 0; /*0x42ea00*/
  }
  return (char *)this->? + 16 * v4 != 0; /*0x42ea13*/
}



// ==== 0x0042EA30  ObjectClass::method_42EA30  this=ObjectClass  sig=csp ====
int __thiscall sub_42EA30(ObjectClass *this, _DWORD *a2)
{
  int v4; // ebp
  char *v5; // esi
  _WORD *v6; // eax
  _BYTE v8[4]; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+18h] [ebp+4h]

  if ( a2[135] != *(_DWORD *)&this->isOnMap ) /*0x42ea44*/
    return 0; /*0x42ea44*/
  v4 = 0; /*0x42ea49*/
  v9 = 0; /*0x42ea4d*/
  if ( this->? <= 0 ) /*0x42ea51*/
    return 0; /*0x42eab7*/
  while ( 1 ) /*0x42ea62*/
  {
    v5 = (char *)this->? + v4; /*0x42ea62*/
    if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v5 ) /*0x42ea6a*/
    {
      v6 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 440))(a2, v8); /*0x42ea75*/
      if ( *v6 == *((_WORD *)v5 + 2) && v6[1] == *((_WORD *)v5 + 3) ) /*0x42ea8c*/
        break; /*0x42ea8c*/
    }
    v4 += 16; /*0x42ea96*/
    if ( ++v9 >= this->? ) /*0x42ea9f*/
      return 0; /*0x42ea9f*/
  }
  return (int)this->? + 16 * v9; /*0x42eaaa*/
}



// ==== 0x0042EAD0  ObjectClass::method_42EAD0  this=ObjectClass  sig=csp ====
int __thiscall sub_42EAD0(ObjectClass *this, _WORD *a2)
{
  int abstractFlags; // edx
  int v3; // eax
  char *ptr_8; // esi
  _WORD *i; // ecx

  abstractFlags = this->?; /*0x42ead0*/
  v3 = 0; /*0x42ead5*/
  if ( abstractFlags <= 0 ) /*0x42eadb*/
    return 0; /*0x42eb0f*/
  ptr_8 = (char *)this->?; /*0x42eae1*/
  for ( i = ptr_8 + 4; *a2 != *i || a2[1] != i[1]; i += 8 ) /*0x42eae7*/
  {
    if ( ++v3 >= abstractFlags ) /*0x42eaff*/
      return 0; /*0x42eaff*/
  }
  return (int)&ptr_8[16 * v3]; /*0x42eb08*/
}



// ==== 0x0042EB20  BuildingQueue::AllocSlot  this=BuildingQueue  sig=csp ====
int __thiscall BuildingQueue::AllocSlot(BuildingQueue *this, int a2)
{
  int FreeSlot; // eax

  FreeSlot = BuildingQueue::FindFreeSlot(this, a2); /*0x42eb28*/
  if ( FreeSlot == -1 ) /*0x42eb30*/
    return 0; /*0x42eb3e*/
  else
    return this->BuildingQueue_field_0x08 + 16 * FreeSlot; /*0x42eb39*/
}



// ==== 0x0042EB50  BuildingQueue::FindFreeSlot  this=BuildingQueue  sig=csp ====
int __thiscall BuildingQueue::FindFreeSlot(BuildingQueue *this, int a2)
{
  int v3; // edi
  int v4; // ebx

  v3 = 0; /*0x42eb56*/
  if ( *((int *)this + 5) <= 0 ) /*0x42eb5d*/
    return -1; /*0x42ebc0*/
  v4 = 0; /*0x42eb63*/
  while ( a2 != -1 ) /*0x42eb68*/
  {
    if ( *(_DWORD *)(this->BuildingQueue_field_0x08 + v4) == a2 /*0x42ebac*/
      && !(unsigned __int8)BuildingQueue::IsCellSuitable(this, v3) )
    {
      return v3; /*0x42ebac*/
    }
LABEL_11:
    ++v3; /*0x42ebae*/
    v4 += 16; /*0x42ebb2*/
    if ( v3 >= *((_DWORD *)this + 5) ) /*0x42ebb7*/
      return -1; /*0x42ebb7*/
  }
  if ( (unsigned __int8)BuildingQueue::IsCellSuitable(this, v3) ) /*0x42eb6d*/
    goto LABEL_11; /*0x42eb6d*/
  if ( !*(_DWORD *)&dword_A8B238 || !*(_BYTE *)(v4 + this->BuildingQueue_field_0x08 + 8) ) /*0x42eb84*/
    return v3; /*0x42eb89*/
  if ( !TechnoClass::ProcessTarget(*((TechnoClass **)this + 29), v4 + this->BuildingQueue_field_0x08) ) /*0x42eb8f*/
    goto LABEL_11; /*0x42eb96*/
  *(_DWORD *)(16 * v3 + this->BuildingQueue_field_0x08 + 4) = dword_89C310; /*0x42ebd1*/
  return v3; /*0x42ebb9*/
}



// ==== 0x0042EBE0  BuildingPrerequisiteClass::ReadNodeGraph  this=BuildingPrerequisiteClass  sig=csp ====
int __thiscall BuildingPrerequisiteClass::ReadNodeGraph(
        BuildingPrerequisiteClass *this,
        unsigned __int8 ***a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v4; // edi
  int result; // eax
  BuildingPrerequisiteClass *v6; // esi
  char *v7; // eax
  int IndexByName; // eax
  char *v9; // eax
  int v10; // ebp
  char *v11; // eax
  char *v12; // eax
  BuildingPrerequisiteClass v13; // eax
  int v14; // ecx
  BuildingPrerequisiteClass v15; // eax
  int *v16; // eax
  int v17; // [esp+Ch] [ebp-9Ch]
  int v18; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char Buffer[8]; // [esp+18h] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-88h]
  int v22; // [esp+24h] [ebp-84h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x42ebf4*/
  v4 = a3; /*0x42ebfc*/
  *((_DWORD *)this + 7) = INIClass::ReadInt_Overwrite( /*0x42ec1b*/
                            (bool *)a2,
                            a3,
                            (unsigned __int8 *)aPercentbuilt,
                            *((_DWORD *)this + 7));
  result = INIClass::ReadInt_Overwrite((bool *)a2, a3, (unsigned __int8 *)aNodecount, 0); /*0x42ec1e*/
  v19 = result; /*0x42ec25*/
  v17 = 0; /*0x42ec29*/
  if ( result > 0 ) /*0x42ec31*/
  {
    v6 = this + 1; /*0x42ec38*/
    while ( 1 ) /*0x42ec53*/
    {
      sprintf(Buffer, "%03d", v17); /*0x42ec53*/
      INIClass::GetString((INIClass *)a2, v4, (unsigned __int8 *)Buffer, 0, String, 128); /*0x42ec6f*/
      if ( String[0] == 45 ) /*0x42ec7f*/
      {
        v7 = strtok(String, Str); /*0x42ec86*/
        IndexByName = atoi(v7); /*0x42ec8c*/
      }
      else
      {
        v9 = strtok(String, Str); /*0x42ec9b*/
        IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v9); /*0x42eca5*/
      }
      v10 = IndexByName; /*0x42ecb1*/
      v11 = strtok(0, Str); /*0x42ecb3*/
      LOWORD(v18) = atoi(v11); /*0x42ecc5*/
      v12 = strtok(0, Str); /*0x42ecca*/
      HIWORD(v18) = atoi(v12); /*0x42ecd8*/
      v13 = v6[2]; /*0x42ecdd*/
      if ( *(_DWORD *)&v6[4] < *(_DWORD *)&v13 /*0x42ed06*/
        || (v6[3].__tail_0[1] || !*(_DWORD *)&v13)
        && (v14 = (int)v6[5], v14 > 0)
        && (*(unsigned __int8 (__thiscall **)(BuildingPrerequisiteClass *, int, _DWORD))(*(_DWORD *)v6 + 8))(
             v6,
             *(_DWORD *)&v13 + v14,
             0) )
      {
        v15 = v6[4]; /*0x42ed0d*/
        v6[4] = (BuildingPrerequisiteClass)(*(_DWORD *)&v15 + 1); /*0x42ed13*/
        v16 = (int *)(*(_DWORD *)&v6[1] + 16 * *(_DWORD *)&v15); /*0x42ed1c*/
        *v16 = v10; /*0x42ed1e*/
        v16[1] = v18; /*0x42ed20*/
        v16[2] = v21; /*0x42ed27*/
        v16[3] = v22; /*0x42ed2e*/
      }
      result = ++v17; /*0x42ed39*/
      if ( v17 >= v19 ) /*0x42ed40*/
        break; /*0x42ed40*/
      v4 = a3; /*0x42ec3d*/
    }
  }
  return result; /*0x42ed47*/
}



// ==== 0x0042ED60  HouseClass::SaveTriggerNodeData  this=HouseClass  sig=csp ====
int __thiscall HouseClass::SaveTriggerNodeData(HouseClass *this, char *a2, unsigned __int8 *Block)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  char *v7; // eax
  int v8; // ecx
  int v9; // [esp-Ch] [ebp-A4h]
  int v10; // [esp-8h] [ebp-A0h]
  char Buffer[12]; // [esp+Ch] [ebp-8Ch] BYREF
  char Source[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::SetInt(a2, Block, aPercentbuilt, this->?, 0); /*0x42ed87*/
  INIClass::SetInt(a2, Block, aNodecount, this->?, 0); /*0x42ed9a*/
  result = this->?; /*0x42ed9f*/
  v5 = 0; /*0x42eda2*/
  if ( result > 0 ) /*0x42eda6*/
  {
    v6 = 0; /*0x42eda9*/
    do /*0x42ee1a*/
    {
      sprintf(Buffer, "%03d", v5); /*0x42edb6*/
      v7 = (char *)this->? + v6; /*0x42edc1*/
      v8 = *(_DWORD *)v7; /*0x42edc3*/
      v10 = *((__int16 *)v7 + 3); /*0x42edcf*/
      v9 = *((__int16 *)v7 + 2); /*0x42edd0*/
      if ( *(int *)v7 < 0 ) /*0x42edd1*/
        sprintf(Source, "%d,%d,%d", v8, v9, v10); /*0x42edf2*/
      else
        sprintf(Source, "%s,%d,%d", *((_DWORD *)dword_A83C6C + v8) + 36, v9, v10); /*0x42ede5*/
      INIClass::SetString(a2, Block, Buffer, Source); /*0x42ee0c*/
      result = this->?; /*0x42ee11*/
      ++v5; /*0x42ee14*/
      v6 += 16; /*0x42ee15*/
    }
    while ( v5 < result ); /*0x42ee1a*/
  }
  return result; /*0x42ee1d*/
}



// ==== 0x0042EE30  BaseClass::LoadBaseNodeClass  this=BaseClass  sig=csp ====
int __stdcall BaseClass::LoadBaseNodeClass(BaseClass *this, int a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // ebp
  int percentBuilt; // ecx
  int cells24Capacity; // eax
  int cells24Count; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int cells38Capacity; // edx
  int v15; // ebp
  int v16; // ecx
  HouseClass *owner; // eax
  int v18; // eax
  int v19; // edx
  int v21; // [esp+88h] [ebp-14h] BYREF
  _DWORD v22[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = a2; /*0x42ee3a*/
  if ( (*(int (__stdcall **)(int, BaseClass *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 120, 0) >= 0 ) /*0x42ee4b*/
  {
    if ( this ) /*0x42ee53*/
    {
      BaseNodeClass::Vector_Constructor((BaseNodeClass *)&this->baseNodeCount, 0, 0); /*0x42ee5e*/
      this->baseNodeCount = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x42ee6a*/
      this->cells24Capacity = 10; /*0x42ee70*/
      this->cells24Count = 0; /*0x42ee77*/
      DynamicVector::Constructor_Cell((DynamicVector *)&this->cells38Count, 0, 0); /*0x42ee7e*/
      DynamicVector::Constructor_Cell((DynamicVector *)&this->unknown54[3], 0, 0); /*0x42ee8a*/
      this->baseNodes = (BaseNodeClass *)&BaseClass::`vftable'; /*0x42ee8f*/
    }
    v3 = *(_DWORD *)v2; /*0x42ee96*/
    a2 = 0; /*0x42eea2*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42eeaf*/
    {
      v4 = 0; /*0x42eeb9*/
      if ( a2 <= 0 ) /*0x42eebd*/
      {
LABEL_14:
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42ef4f*/
        {
          v10 = 0; /*0x42ef59*/
          if ( a2 <= 0 ) /*0x42ef5d*/
          {
LABEL_24:
            if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42efd6*/
            {
              v15 = 0; /*0x42efdc*/
              if ( a2 <= 0 ) /*0x42efe0*/
              {
LABEL_34:
                ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 29); /*0x42f044*/
              }
              else
              {
                while ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42eff3*/
                {
                  v16 = this->unknown54[5]; /*0x42eff9*/
                  if ( this->unknown54[7] < v16 /*0x42f021*/
                    || (BYTE1(this->unknown54[6]) || !v16)
                    && (owner = this->owner, (int)owner > 0)
                    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->unknown54[3] + 8))(
                         &this->unknown54[3],
                         (int)owner + v16,
                         0) )
                  {
                    v18 = this->unknown54[7]; /*0x42f028*/
                    v19 = this->unknown54[4]; /*0x42f02b*/
                    this->unknown54[7] = v18 + 1; /*0x42f031*/
                    *(_DWORD *)(v19 + 4 * v18) = v21; /*0x42f038*/
                  }
                  if ( ++v15 >= a2 ) /*0x42f042*/
                    goto LABEL_34; /*0x42f042*/
                }
              }
            }
          }
          else
          {
            while ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42ef70*/
            {
              v11 = this->center[0]; /*0x42ef7a*/
              if ( this->unknown54[1] < v11 /*0x42efa2*/
                || (BYTE1(this->unknown54[0]) || !v11)
                && (v12 = this->unknown54[2], v12 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->cells38Count + 8))(
                     &this->cells38Count,
                     v11 + v12,
                     0) )
              {
                v13 = this->unknown54[1]; /*0x42efa9*/
                cells38Capacity = this->cells38Capacity; /*0x42efac*/
                this->unknown54[1] = v13 + 1; /*0x42efb2*/
                *(_DWORD *)(cells38Capacity + 4 * v13) = v21; /*0x42efb9*/
              }
              if ( ++v10 >= a2 ) /*0x42efc3*/
                goto LABEL_24; /*0x42efc3*/
            }
          }
        }
      }
      else
      {
        while ( (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v22, 16, 0) >= 0 ) /*0x42eed0*/
        {
          percentBuilt = this->percentBuilt; /*0x42eeda*/
          if ( this->cells24Count < percentBuilt /*0x42ef02*/
            || (BYTE1(this->cells24) || !percentBuilt)
            && (cells24Capacity = this->cells24Capacity, cells24Capacity > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->baseNodeCount + 8))(
                 &this->baseNodeCount,
                 percentBuilt + cells24Capacity,
                 0) )
          {
            cells24Count = this->cells24Count; /*0x42ef09*/
            v8 = v22[0]; /*0x42ef0c*/
            this->cells24Count = cells24Count + 1; /*0x42ef13*/
            v9 = (_DWORD *)(this->baseNodeCapacity + 16 * cells24Count); /*0x42ef1c*/
            *v9 = v8; /*0x42ef1e*/
            v9[1] = v22[1]; /*0x42ef24*/
            v9[2] = v22[2]; /*0x42ef2b*/
            v9[3] = v22[3]; /*0x42ef32*/
          }
          if ( ++v4 >= a2 ) /*0x42ef3c*/
            goto LABEL_14; /*0x42ef3c*/
        }
      }
    }
  }
  return 0; /*0x42f056*/
}



// ==== 0x0042F070  BaseClass::LoadArrayFields  this=BaseClass  sig=csp ====
int __stdcall BaseClass::LoadArrayFields(BaseClass *this, int cells24Count)
{
  int v2; // esi
  int v3; // edx
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // ebx
  int v8; // ecx
  int result; // eax
  int v10; // ebx

  v2 = cells24Count; /*0x42f073*/
  if ( (*(int (__stdcall **)(int, BaseClass *, int, _DWORD))(*(_DWORD *)cells24Count + 16))(cells24Count, this, 120, 0) >= 0 ) /*0x42f089*/
  {
    v3 = *(_DWORD *)v2; /*0x42f092*/
    cells24Count = this->cells24Count; /*0x42f09e*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 16))(v2, &cells24Count, 4, 0) >= 0 ) /*0x42f0a7*/
    {
      v4 = 0; /*0x42f0b1*/
      if ( cells24Count <= 0 ) /*0x42f0b5*/
      {
LABEL_7:
        v6 = *(_DWORD *)v2; /*0x42f0dd*/
        cells24Count = this->unknown54[1]; /*0x42f0ec*/
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 16))(v2, &cells24Count, 4, 0) >= 0 ) /*0x42f0f5*/
        {
          v7 = 0; /*0x42f0fb*/
          if ( cells24Count <= 0 ) /*0x42f0ff*/
          {
LABEL_11:
            v8 = *(_DWORD *)v2; /*0x42f11f*/
            cells24Count = this->unknown54[7]; /*0x42f12e*/
            result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v8 + 16))(v2, &cells24Count, 4, 0); /*0x42f132*/
            if ( result >= 0 ) /*0x42f137*/
            {
              v10 = 0; /*0x42f13d*/
              if ( cells24Count <= 0 ) /*0x42f141*/
                return result; /*0x42f141*/
              while ( 1 ) /*0x42f151*/
              {
                result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x42f151*/
                           v2,
                           this->unknown54[4] + 4 * v10,
                           4,
                           0);
                if ( result < 0 ) /*0x42f156*/
                  break; /*0x42f156*/
                if ( ++v10 >= cells24Count ) /*0x42f15f*/
                  return result; /*0x42f15f*/
              }
            }
          }
          else
          {
            while ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x42f114*/
                      v2,
                      this->cells38Capacity + 4 * v7,
                      4,
                      0) >= 0 )
            {
              if ( ++v7 >= cells24Count ) /*0x42f11d*/
                goto LABEL_11; /*0x42f11d*/
            }
          }
        }
      }
      else
      {
        v5 = 0; /*0x42f0b7*/
        while ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x42f0cb*/
                  v2,
                  v5 + this->baseNodeCapacity,
                  16,
                  0) >= 0 )
        {
          ++v4; /*0x42f0d5*/
          v5 += 16; /*0x42f0d6*/
          if ( v4 >= cells24Count ) /*0x42f0db*/
            goto LABEL_7; /*0x42f0db*/
        }
      }
    }
  }
  return 0; /*0x42f161*/
}



// ==== 0x0042F180  BaseClass::ProcessPowerTimer  this=BaseClass  sig=csp ====
int __thiscall BaseClass::ProcessPowerTimer(BaseClass *this, unsigned int *a2)
{
  int result; // eax
  int v4; // ebp
  int v5; // edi

  Power::TimerProcess(this->cells24Count); /*0x42f18f*/
  result = this->cells24Count; /*0x42f194*/
  v4 = 0; /*0x42f197*/
  if ( result > 0 ) /*0x42f19b*/
  {
    v5 = 0; /*0x42f19e*/
    do /*0x42f1d7*/
    {
      Power::TimerProcess(*(_DWORD *)(this->baseNodeCapacity + v5)); /*0x42f1a9*/
      Checksummer::Add_WORD((Checksummer *)a2, *(_WORD *)(this->baseNodeCapacity + v5 + 4)); /*0x42f1b9*/
      Checksummer::Add_WORD((Checksummer *)a2, *(_WORD *)(this->baseNodeCapacity + v5 + 6)); /*0x42f1c9*/
      result = this->cells24Count; /*0x42f1ce*/
      ++v4; /*0x42f1d1*/
      v5 += 16; /*0x42f1d2*/
    }
    while ( v4 < result ); /*0x42f1d7*/
  }
  return result; /*0x42f1da*/
}



// ==== 0x0042F1E0  BaseClass::Construct  this=BaseClass  sig=csp ====
_DWORD *__thiscall BaseClass::Construct(BaseClass *this, int a2)
{
  int *p_baseNodeCount; // edi

  p_baseNodeCount = &this->baseNodeCount; /*0x42f1e6*/
  BaseNodeClass::Vector_Constructor((BaseNodeClass *)&this->baseNodeCount, 0, 0); /*0x42f1ed*/
  *p_baseNodeCount = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x42f1f2*/
  p_baseNodeCount[5] = 10; /*0x42f1f8*/
  p_baseNodeCount[4] = 0; /*0x42f1ff*/
  VectorClass::CellConstructor((VectorClass *)&this->cells38Count, 0, 0); /*0x42f20f*/
  this->cells38Count = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x42f214*/
  this->unknown54[2] = 10; /*0x42f21a*/
  this->unknown54[1] = 0; /*0x42f221*/
  VectorClass::CellConstructor((VectorClass *)&this->unknown54[3], 0, 0); /*0x42f231*/
  this->unknown54[3] = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x42f236*/
  this->owner = (HouseClass *)10; /*0x42f23c*/
  this->unknown54[7] = 0; /*0x42f243*/
  this->baseNodes = (BaseNodeClass *)&BaseClass::`vftable'; /*0x42f24a*/
  return &this->baseNodes; /*0x42f252*/
}



// ==== 0x0042F260  BuildingClass::MarkUpgradeComponentUsed  this=BuildingClass  sig=csp ====
_WORD *__thiscall BuildingClass::MarkUpgradeComponentUsed(BuildingClass *this, _DWORD *a2)
{
  int v4; // edi
  _DWORD *v5; // ebx
  char *v6; // ebx
  _WORD *result; // eax
  char *v8; // edi
  int v9; // ebp
  int abstractFlags; // ecx
  int v11; // ebp
  char *i; // esi
  char v13[4]; // [esp+10h] [ebp-4h] BYREF
  _DWORD *v14; // [esp+18h] [ebp+4h]

  if ( a2[135] == *(_DWORD *)&this->? ) /*0x42f274*/
  {
    v4 = 0; /*0x42f279*/
    if ( this->? > 0 ) /*0x42f27d*/
    {
      v5 = 0; /*0x42f27f*/
      v14 = 0; /*0x42f281*/
      while ( 1 ) /*0x42f28e*/
      {
        v6 = (char *)this->? + (unsigned int)v5; /*0x42f28e*/
        if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v6 ) /*0x42f298*/
        {
          result = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a2 + 440))(a2, v13); /*0x42f2a4*/
          if ( *result == *((_WORD *)v6 + 2) && result[1] == *((_WORD *)v6 + 3) ) /*0x42f2bb*/
            break; /*0x42f2bb*/
        }
        ++v4; /*0x42f2c4*/
        v5 = v14 + 4; /*0x42f2c5*/
        v14 += 4; /*0x42f2ca*/
        if ( v4 >= this->? ) /*0x42f2ce*/
          goto LABEL_10; /*0x42f2ce*/
      }
      v8 = (char *)this->? + 16 * v4; /*0x42f2d8*/
      if ( v8 ) /*0x42f2dc*/
        goto LABEL_18; /*0x42f2dc*/
    }
  }
LABEL_10:
  v9 = a2[328]; /*0x42f2de*/
  result = *(_WORD **)(v9 + 1032); /*0x42f2e4*/
  if ( result ) /*0x42f2ec*/
  {
    abstractFlags = this->?; /*0x42f2ee*/
    v11 = *(_DWORD *)(v9 + 3576); /*0x42f2f1*/
    result = 0; /*0x42f2f7*/
    if ( abstractFlags > 0 ) /*0x42f2fb*/
    {
      for ( i = (char *)this->?; *(_DWORD *)i != v11 || i[8]; i += 16 ) /*0x42f2fd*/
      {
        result = (_WORD *)((char *)result + 1); /*0x42f30b*/
        if ( (int)result >= abstractFlags ) /*0x42f311*/
          return result; /*0x42f311*/
      }
      v8 = i; /*0x42f31d*/
      if ( i ) /*0x42f31f*/
      {
LABEL_18:
        v8[8] = 1; /*0x42f321*/
        *((_DWORD *)v8 + 3) = 0; /*0x42f325*/
      }
    }
  }
  return result; /*0x42f313*/
}



// ==== 0x0042F380  HouseClass::FailedToPlaceNode  this=HouseClass  sig=csp ====
int __stdcall HouseClass::FailedToPlaceNode(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1; /*0x42f380*/
  if ( a1 ) /*0x42f386*/
  {
    v2 = *(_DWORD *)(a1 + 12) + 1; /*0x42f38e*/
    *(_DWORD *)(a1 + 12) = v2; /*0x42f38f*/
    return v2; /*0x42f392*/
  }
  return result; /*0x42f388*/
}



// ==== 0x0042F3A0  _DynamicVectorClass_VBaseNodeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall BaseClass::ddtor(_DynamicVectorClass_VBaseNodeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42f3a6*/
  this->m_10 = 0; /*0x42f3a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x42f3b0*/
  {
    __3_YAXPAX_Z(v2); /*0x42f3b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f3be*/
  }
  BYTE1(this->m_C) = 0; /*0x42f3c1*/
  this->m_8 = 0; /*0x42f3c4*/
}



// ==== 0x0042F3D0  _DynamicVectorClass_VBaseNodeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall BaseClass::Write(_DynamicVectorClass_VBaseNodeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42f3d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x42f3e5*/
  else
    return 0; /*0x42f3d7*/
}



// ==== 0x0042F3F0  _VectorClass_VBaseNodeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall BaseClass::Seek(_VectorClass_VBaseNodeClass *this, int a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 16 * a3; /*0x42f3fa*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x42f402*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x42f407*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x42f40d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x42f413*/
  return a2; /*0x42f416*/
}



// ==== 0x0042F420  _DynamicVectorClass_VCell::ddtor  this=DynamicVector  sig=csp ====
void __thiscall RandomMap::ddtor(_DynamicVectorClass_VCell *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42f426*/
  this->m_10 = 0; /*0x42f429*/
  if ( v2 && BYTE1(this->m_C) ) /*0x42f430*/
  {
    __3_YAXPAX_Z(v2); /*0x42f436*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f43e*/
  }
  BYTE1(this->m_C) = 0; /*0x42f441*/
  this->m_8 = 0; /*0x42f444*/
}



// ==== 0x0042F450  _DynamicVectorClass_VCell::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall RandomMap::Write(_DynamicVectorClass_VCell *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42f450*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42f465*/
  else
    return 0; /*0x42f457*/
}



// ==== 0x0042F470  _VectorClass_VCell::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::Seek(_VectorClass_VCell *this, _DWORD *a2, int a3)
{
  *a2 = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a3); /*0x42f47e*/
  return a2; /*0x42f480*/
}



// ==== 0x0042F490  _VectorClass_VBaseNodeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall BaseClass::AddRef(_VectorClass_VBaseNodeClass *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  _WORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x42f49b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42f4a0*/
  {
    v3 = 0; /*0x42f4a2*/
    if ( m_8 <= 0 ) /*0x42f4a6*/
      return 1; /*0x42f4e0*/
    v4 = *(_DWORD *)(a2 + 4); /*0x42f4a8*/
    v5 = *(_DWORD *)&this->m_1[3]; /*0x42f4ab*/
    v6 = (_WORD *)(v4 + 4); /*0x42f4ae*/
    v7 = v4 - v5; /*0x42f4b1*/
    while ( *(_DWORD *)v5 == *(_DWORD *)(v7 + v5) && *(_WORD *)(v5 + 4) == *v6 && *(_WORD *)(v5 + 6) == v6[1] ) /*0x42f4cd*/
    {
      ++v3; /*0x42f4cf*/
      v6 += 8; /*0x42f4d0*/
      v5 += 16; /*0x42f4d3*/
      if ( v3 >= m_8 ) /*0x42f4d8*/
        return 1; /*0x42f4d8*/
    }
  }
  return 0; /*0x42f4da*/
}



// ==== 0x0042F4F0  _DynamicVectorClass_VBaseNodeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall BaseClass::Release(_DynamicVectorClass_VBaseNodeClass *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v9; // eax
  char *v10; // ebx
  _DWORD *v11; // edx
  int v12; // eax

  v3 = a2; /*0x42f4f2*/
  if ( a2 ) /*0x42f4fd*/
  {
    v5 = a3; /*0x42f503*/
    LOBYTE(this->m_C) = 0; /*0x42f507*/
    if ( a3 ) /*0x42f50d*/
    {
      v7 = a3; /*0x42f533*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x42f515*/
      if ( v6 ) /*0x42f51f*/
        v7 = (char *)v6; /*0x42f524*/
      else
        v7 = 0; /*0x42f52c*/
    }
    LOBYTE(this->m_C) = 1; /*0x42f53b*/
    if ( !v7 ) /*0x42f53f*/
      return 0; /*0x42f5d4*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x42f545*/
    {
      m_8 = this->m_8; /*0x42f54c*/
      if ( a2 < m_8 ) /*0x42f551*/
        m_8 = a2; /*0x42f553*/
      if ( m_8 > 0 ) /*0x42f557*/
      {
        v9 = 0; /*0x42f559*/
        do /*0x42f57d*/
        {
          v10 = &v7[v9]; /*0x42f55e*/
          v11 = (_DWORD *)(v9 + *(_DWORD *)&this->m_1[3]); /*0x42f561*/
          v9 += 16; /*0x42f563*/
          --m_8; /*0x42f566*/
          *(_DWORD *)v10 = *v11; /*0x42f569*/
          *((_DWORD *)v10 + 1) = v11[1]; /*0x42f56e*/
          *((_DWORD *)v10 + 2) = v11[2]; /*0x42f574*/
          *((_DWORD *)v10 + 3) = v11[3]; /*0x42f57a*/
        }
        while ( m_8 ); /*0x42f57d*/
        v3 = a2; /*0x42f57f*/
        v5 = a3; /*0x42f583*/
      }
      if ( BYTE1(this->m_C) ) /*0x42f587*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42f592*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x42f59a*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v7; /*0x42f5a3*/
    this->m_8 = v3; /*0x42f5ab*/
    BYTE1(this->m_C) = v5 == 0; /*0x42f5ae*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VBaseNodeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42f5b7*/
  }
  v12 = this->m_8; /*0x42f5ba*/
  if ( v12 < this->m_10 ) /*0x42f5c2*/
    this->m_10 = v12; /*0x42f5c4*/
  return 1; /*0x42f5c7*/
}



// ==== 0x0042F5E0  _DynamicVectorClass_VBaseNodeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall BaseClass::Read(_DynamicVectorClass_VBaseNodeClass *this, int a2)
{
  int m_10; // edx
  int result; // eax
  int i; // ecx

  m_10 = this->m_10; /*0x42f5e0*/
  result = 0; /*0x42f5e4*/
  if ( m_10 <= 0 ) /*0x42f5ea*/
    return -1; /*0x42f615*/
  for ( i = *(_DWORD *)&this->m_1[3]; /*0x42f5f0*/
        *(_DWORD *)i != *(_DWORD *)a2
     || *(_WORD *)(i + 4) != *(_WORD *)(a2 + 4)
     || *(_WORD *)(i + 6) != *(_WORD *)(a2 + 6);
        i += 16 )
  {
    if ( ++result >= m_10 ) /*0x42f613*/
      return -1; /*0x42f613*/
  }
  return result; /*0x42f618*/
}



// ==== 0x0042F620  _VectorClass_VCell::AddRef  this=VectorClass  sig=csp ====
char __thiscall RandomMap::AddRef(_VectorClass_VCell *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _WORD *v5; // eax
  _WORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x42f627*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42f62f*/
  {
    v3 = 0; /*0x42f631*/
    if ( m_8 <= 0 ) /*0x42f635*/
      return 1; /*0x42f664*/
    v4 = *(_DWORD *)(a2 + 4); /*0x42f637*/
    v5 = *(_WORD **)&this->m_1[3]; /*0x42f63a*/
    v6 = (_WORD *)(v4 + 2); /*0x42f63d*/
    v7 = v4 - (_DWORD)v5; /*0x42f640*/
    while ( *v5 == *(_WORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x42f652*/
    {
      ++v3; /*0x42f654*/
      v6 += 2; /*0x42f655*/
      v5 += 2; /*0x42f658*/
      if ( v3 >= m_8 ) /*0x42f65d*/
        return 1; /*0x42f65d*/
    }
  }
  return 0; /*0x42f65f*/
}



// ==== 0x0042F670  DynamicVector::Constructor_Cell  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVector::Constructor_Cell(DynamicVector *this, int a2, int a3)
{
  int v4; // eax

  *(_DWORD *)&this->DynamicVector_field_0x1[3] = 0; /*0x42f67a*/
  this->DynamicVector_field_0x8 = a2; /*0x42f681*/
  this->__pad_C[0] = 1; /*0x42f684*/
  this->__pad_C[1] = 0; /*0x42f688*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Cell>::`vftable'; /*0x42f68c*/
  if ( a2 ) /*0x42f692*/
  {
    if ( a3 ) /*0x42f69a*/
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = a3; /*0x42f69d*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = v4; /*0x42f6c3*/
      this->__pad_C[1] = 1; /*0x42f6c6*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x42f6ca*/
  *(_DWORD *)this->__pad_14 = 10; /*0x42f6d0*/
  this->DynamicVector_field_0x10 = 0; /*0x42f6d7*/
  return this->__pad_0; /*0x42f6e0*/
}



// ==== 0x0042F6F0  _VectorClass_VCell::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Cell::Release(_VectorClass_VCell *this, int a2, _DWORD *a3)
{
  int v4; // eax
  _DWORD *v5; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42f6fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x42f706*/
    if ( a3 ) /*0x42f70c*/
    {
      v5 = a3; /*0x42f734*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42f716*/
      if ( v4 ) /*0x42f720*/
        v5 = (_DWORD *)v4; /*0x42f725*/
      else
        v5 = 0; /*0x42f72d*/
    }
    LOBYTE(this->m_C) = 1; /*0x42f73c*/
    if ( v5 ) /*0x42f740*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42f74b*/
      {
        m_8 = this->m_8; /*0x42f752*/
        if ( a2 < m_8 ) /*0x42f757*/
          m_8 = a2; /*0x42f759*/
        for ( i = 0; i < m_8; v5[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42f75f*/
          ++i; /*0x42f764*/
        if ( BYTE1(this->m_C) ) /*0x42f771*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42f77c*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42f784*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x42f78d*/
      this->m_8 = a2; /*0x42f795*/
      BYTE1(this->m_C) = a3 == 0; /*0x42f798*/
      return 1; /*0x42f79e*/
    }
    else
    {
      return 0; /*0x42f745*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VCell *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42f7a8*/
    return 1; /*0x42f7ae*/
  }
}



// ==== 0x0042F7C0  _VectorClass_VCell::Cleanup  this=VectorClass  sig=csp ====
int __thiscall Buffer::Cleanup(_VectorClass_VCell *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x42f7c6*/
  if ( result && BYTE1(this->m_C) ) /*0x42f7cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42f7d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f7db*/
  }
  BYTE1(this->m_C) = 0; /*0x42f7de*/
  this->m_8 = 0; /*0x42f7e1*/
  return result; /*0x42f7e4*/
}



// ==== 0x0042F7F0  _VectorClass_VCell::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Cell::GetSize(_VectorClass_VCell *this, _WORD *a2)
{
  int result; // eax
  int m_8; // edx
  _WORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x42f7f0*/
    return 0; /*0x42f7fc*/
  m_8 = this->m_8; /*0x42f802*/
  result = 0; /*0x42f805*/
  if ( m_8 <= 0 ) /*0x42f809*/
    return -1; /*0x42f82c*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f80f*/
  {
    if ( ++result >= m_8 ) /*0x42f82a*/
      return -1; /*0x42f82a*/
  }
  return result; /*0x42f7fa*/
}



// ==== 0x0042F840  _VectorClass_VCell::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Cell::GetCapacity(_VectorClass_VCell *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42f840*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42f855*/
  else
    return 0; /*0x42f847*/
}



// ==== 0x0042F860  ?$DynamicVectorClass@VCell@@::ResizeEx  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ResizeEx(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // ecx
  int i; // eax
  int v8; // eax

  if ( a2 ) /*0x42f86c*/
  {
    this->IsInitialized = 0; /*0x42f876*/
    if ( a3 ) /*0x42f87c*/
    {
      v5 = a3; /*0x42f8a4*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42f886*/
      if ( v4 ) /*0x42f890*/
        v5 = v4; /*0x42f895*/
      else
        v5 = 0; /*0x42f89d*/
    }
    this->IsInitialized = 1; /*0x42f8ac*/
    if ( !v5 ) /*0x42f8b0*/
      return 0; /*0x42f924*/
    if ( this->Items ) /*0x42f8b2*/
    {
      v6 = this->q008; /*0x42f8b9*/
      if ( a2 < v6 ) /*0x42f8be*/
        v6 = a2; /*0x42f8c0*/
      for ( i = 0; i < v6; v5[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x42f8c6*/
        ++i; /*0x42f8cb*/
      if ( this->IsAllocated ) /*0x42f8d8*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x42f8e3*/
        this->Items = 0; /*0x42f8eb*/
      }
    }
    this->Items = v5; /*0x42f8f4*/
    this->q008 = a2; /*0x42f8fc*/
    this->IsAllocated = a3 == 0; /*0x42f8ff*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42f908*/
  }
  v8 = this->q008; /*0x42f90b*/
  if ( v8 < this->Items ) /*0x42f913*/
    this->Items = v8; /*0x42f915*/
  return 1; /*0x42f918*/
}



// ==== 0x0042F930  _DynamicVectorClass_VCell::Read  this=DynamicVector  sig=csp ====
int __thiscall RandomMap::Read(_DynamicVectorClass_VCell *this, _WORD *a2)
{
  int m_10; // edx
  int result; // eax
  _WORD *i; // ecx

  m_10 = this->m_10; /*0x42f930*/
  result = 0; /*0x42f934*/
  if ( m_10 <= 0 ) /*0x42f93a*/
    return -1; /*0x42f95d*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f940*/
  {
    if ( ++result >= m_10 ) /*0x42f95b*/
      return -1; /*0x42f95b*/
  }
  return result; /*0x42f960*/
}



// ==== 0x0042F970  _DynamicVectorClass_VBaseNodeClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BaseClass::QueryInterface(_DynamicVectorClass_VBaseNodeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42f973*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BaseNodeClass>::`vftable'; /*0x42f976*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42f980*/
  {
    __3_YAXPAX_Z(v3); /*0x42f988*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f990*/
  }
  BYTE1(this->m_C) = 0; /*0x42f99b*/
  this->m_8 = 0; /*0x42f9a1*/
  if ( (a2 & 1) != 0 ) /*0x42f9a8*/
    __3_YAXPAX_Z(this); /*0x42f9ab*/
  return this->__pad_0; /*0x42f9b5*/
}



// ==== 0x0042F9C0  _VectorClass_VBaseNodeClass::Release  this=VectorClass  sig=csp ====
char __thiscall BaseNodeClass_Vector::Release(_VectorClass_VBaseNodeClass *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x42f9c2*/
  if ( a2 ) /*0x42f9cd*/
  {
    v5 = a3; /*0x42f9d3*/
    LOBYTE(this->m_C) = 0; /*0x42f9d7*/
    if ( a3 ) /*0x42f9dd*/
    {
      v7 = a3; /*0x42fa03*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x42f9e5*/
      if ( v6 ) /*0x42f9ef*/
        v7 = (char *)v6; /*0x42f9f4*/
      else
        v7 = 0; /*0x42f9fc*/
    }
    LOBYTE(this->m_C) = 1; /*0x42fa0b*/
    if ( v7 ) /*0x42fa0f*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42fa1b*/
      {
        m_8 = this->m_8; /*0x42fa22*/
        if ( a2 < m_8 ) /*0x42fa27*/
          m_8 = a2; /*0x42fa29*/
        if ( m_8 > 0 ) /*0x42fa2d*/
        {
          v10 = 0; /*0x42fa2f*/
          do /*0x42fa53*/
          {
            v11 = &v7[v10]; /*0x42fa34*/
            v12 = (_DWORD *)(v10 + *(_DWORD *)&this->m_1[3]); /*0x42fa37*/
            v10 += 16; /*0x42fa39*/
            --m_8; /*0x42fa3c*/
            *(_DWORD *)v11 = *v12; /*0x42fa3f*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x42fa44*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x42fa4a*/
            *((_DWORD *)v11 + 3) = v12[3]; /*0x42fa50*/
          }
          while ( m_8 ); /*0x42fa53*/
          v5 = a3; /*0x42fa55*/
          v3 = a2; /*0x42fa59*/
        }
        if ( BYTE1(this->m_C) ) /*0x42fa5d*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42fa68*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42fa70*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v7; /*0x42fa79*/
      this->m_8 = v3; /*0x42fa81*/
      BYTE1(this->m_C) = v5 == 0; /*0x42fa84*/
      return 1; /*0x42fa8a*/
    }
    else
    {
      return 0; /*0x42fa14*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VBaseNodeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42fa95*/
    return 1; /*0x42fa9b*/
  }
}



// ==== 0x0042FAB0  _VectorClass_VBaseNodeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall BaseNodeClass_Vector::ddtor(_VectorClass_VBaseNodeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x42fabd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42fac3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42facb*/
  }
  BYTE1(this->m_C) = 0; /*0x42face*/
  this->m_8 = 0; /*0x42fad1*/
}



// ==== 0x0042FAE0  _VectorClass_VBaseNodeClass::Read  this=VectorClass  sig=csp ====
int __thiscall BaseNodeClass_Vector::Read(_VectorClass_VBaseNodeClass *this, int a2)
{
  int result; // eax
  int m_8; // edx
  int i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x42fae0*/
    return 0; /*0x42faec*/
  m_8 = this->m_8; /*0x42faf2*/
  result = 0; /*0x42faf5*/
  if ( m_8 <= 0 ) /*0x42faf9*/
    return -1; /*0x42fb24*/
  for ( i = *(_DWORD *)&this->m_1[3]; /*0x42faff*/
        *(_DWORD *)i != *(_DWORD *)a2
     || *(_WORD *)(i + 4) != *(_WORD *)(a2 + 4)
     || *(_WORD *)(i + 6) != *(_WORD *)(a2 + 6);
        i += 16 )
  {
    if ( ++result >= m_8 ) /*0x42fb22*/
      return -1; /*0x42fb22*/
  }
  return result; /*0x42faea*/
}



// ==== 0x0042FB30  _VectorClass_VBaseNodeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall BaseNodeClass_Vector::Write(_VectorClass_VBaseNodeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42fb30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x42fb45*/
  else
    return 0; /*0x42fb37*/
}



// ==== 0x0042FB50  _VectorClass_VBaseNodeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall BaseNodeClass_Vector::QueryInterface(_VectorClass_VBaseNodeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42fb53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BaseNodeClass>::`vftable'; /*0x42fb56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42fb60*/
  {
    __3_YAXPAX_Z(v3); /*0x42fb68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42fb70*/
  }
  BYTE1(this->m_C) = 0; /*0x42fb7b*/
  this->m_8 = 0; /*0x42fb81*/
  if ( (a2 & 1) != 0 ) /*0x42fb88*/
    __3_YAXPAX_Z(this); /*0x42fb8b*/
  return this->__pad_0; /*0x42fb95*/
}



// ==== 0x0042FBA0  _VectorClass_VCell::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Cell::QueryInterface(_VectorClass_VCell *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42fba3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Cell>::`vftable'; /*0x42fba6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42fbb0*/
  {
    __3_YAXPAX_Z(v3); /*0x42fbb8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42fbc0*/
  }
  BYTE1(this->m_C) = 0; /*0x42fbcb*/
  this->m_8 = 0; /*0x42fbd1*/
  if ( (a2 & 1) != 0 ) /*0x42fbd8*/
    __3_YAXPAX_Z(this); /*0x42fbdb*/
  return this->__pad_0; /*0x42fbe5*/
}



// ==== 0x0042FBF0  _DynamicVectorClass_VCell::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall RandomMap::QueryInterface(_DynamicVectorClass_VCell *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42fbf3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Cell>::`vftable'; /*0x42fbf6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42fc00*/
  {
    __3_YAXPAX_Z(v3); /*0x42fc08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42fc10*/
  }
  BYTE1(this->m_C) = 0; /*0x42fc1b*/
  this->m_8 = 0; /*0x42fc21*/
  if ( (a2 & 1) != 0 ) /*0x42fc28*/
    __3_YAXPAX_Z(this); /*0x42fc2b*/
  return this->__pad_0; /*0x42fc35*/
}



// ==== 0x0042FC40  BaseNodeClass::Vector_Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall BaseNodeClass::Vector_Constructor(BaseNodeClass *this, int a2, int a3)
{
  int v5; // eax

  this->mapCoords[0] = 0; /*0x42fc4a*/
  *(_DWORD *)&this->placed = a2; /*0x42fc51*/
  LOBYTE(this->attempts) = 1; /*0x42fc54*/
  BYTE1(this->attempts) = 0; /*0x42fc58*/
  this->buildingTypeIndex = (int)&VectorClass<BaseNodeClass>::`vftable'; /*0x42fc5c*/
  if ( a2 ) /*0x42fc62*/
  {
    if ( a3 ) /*0x42fc6a*/
    {
      this->mapCoords[0] = a3; /*0x42fc6d*/
      return &this->buildingTypeIndex; /*0x42fc78*/
    }
    v5 = __2_YAPAXI_Z(16 * a2); /*0x42fc81*/
    if ( v5 ) /*0x42fc8b*/
    {
      this->mapCoords[0] = v5; /*0x42fc8e*/
      BYTE1(this->attempts) = 1; /*0x42fc95*/
      return &this->buildingTypeIndex; /*0x42fc9d*/
    }
    BYTE1(this->attempts) = 1; /*0x42fca2*/
    this->mapCoords[0] = 0; /*0x42fca6*/
  }
  return &this->buildingTypeIndex; /*0x42fc76*/
}



// ==== 0x0042FCB0  VectorClass::CellConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CellConstructor(VectorClass *this, int a2, int a3)
{
  void *v5; // eax

  this->Items = 0; /*0x42fcba*/
  this->Capacity = a2; /*0x42fcc1*/
  this->IsInitialized = 1; /*0x42fcc4*/
  this->IsAllocated = 0; /*0x42fcc8*/
  this->ptr_0 = &VectorClass<Cell>::`vftable'; /*0x42fccc*/
  if ( a2 ) /*0x42fcd2*/
  {
    if ( a3 ) /*0x42fcda*/
    {
      this->Items = (void *)a3; /*0x42fcdd*/
      return &this->ptr_0; /*0x42fce8*/
    }
    v5 = (void *)__2_YAPAXI_Z(4 * a2); /*0x42fcf3*/
    if ( v5 ) /*0x42fcfd*/
    {
      this->Items = v5; /*0x42fd00*/
      this->IsAllocated = 1; /*0x42fd07*/
      return &this->ptr_0; /*0x42fd0f*/
    }
    this->IsAllocated = 1; /*0x42fd14*/
    this->Items = 0; /*0x42fd18*/
  }
  return &this->ptr_0; /*0x42fce6*/
}



// ==== 0x0042FD30  EncodeBitmapRGB  this=Pipe  sig=csp ====
int __fastcall Bitmap_EncodeRGB(char *a1, int a2, _BYTE *a3, int a4)
{
  int v4; // eax
  char *v5; // ebp
  _BYTE *v6; // ecx
  char v7; // al
  int v8; // edi
  char v9; // al
  char v10; // al
  _BYTE *v11; // ecx
  char *v12; // ecx
  char v13; // al
  char *v14; // ecx
  char v15; // al
  int v17; // [esp+4h] [ebp-4h]
  unsigned int v18; // [esp+Ch] [ebp+4h]

  if ( !a1 ) /*0x42fd34*/
    return 0; /*0x42fd34*/
  if ( !a2 ) /*0x42fd3c*/
    return 0; /*0x42fd3c*/
  if ( !a3 ) /*0x42fd48*/
    return 0; /*0x42fd48*/
  v4 = a4; /*0x42fd4e*/
  if ( !a4 ) /*0x42fd54*/
    return 0; /*0x42fe46*/
  v5 = a1; /*0x42fd5c*/
  v17 = 0; /*0x42fd61*/
  v6 = a3; /*0x42fd69*/
  if ( a2 > 0 ) /*0x42fd6b*/
  {
    while ( 1 ) /*0x42fd71*/
    {
      if ( v4 < 4 ) /*0x42fd74*/
        goto LABEL_19; /*0x42fd74*/
      v7 = *v5; /*0x42fd7a*/
      v8 = 0; /*0x42fd7d*/
      ++v5; /*0x42fd7f*/
      v18 = 0; /*0x42fd80*/
      --a2; /*0x42fd84*/
      BYTE2(v18) = v7; /*0x42fd85*/
      if ( !a2 ) /*0x42fd89*/
        break; /*0x42fd89*/
      v9 = *v5++; /*0x42fd8b*/
      --a2; /*0x42fd8f*/
      BYTE1(v18) = v9; /*0x42fd90*/
      if ( !a2 ) /*0x42fd96*/
        goto LABEL_11; /*0x42fd96*/
      v10 = *v5++; /*0x42fd98*/
      LOBYTE(v18) = v10; /*0x42fd9c*/
      --a2; /*0x42fda0*/
LABEL_12:
      v11 = v6 + 1; /*0x42fda9*/
      *(v11 - 1) = aAbcdefghijklmn[(v18 >> 18) & 0x3F]; /*0x42fdbf*/
      v12 = v11 + 1; /*0x42fdd0*/
      *(v12 - 1) = aAbcdefghijklmn[(v18 >> 12) & 0x3F]; /*0x42fdd7*/
      if ( v8 >= 2 ) /*0x42fdda*/
        v13 = asc_818A0C[0]; /*0x42fdf4*/
      else
        v13 = aAbcdefghijklmn[(v18 >> 6) & 0x3F]; /*0x42fdea*/
      *v12 = v13; /*0x42fdf6*/
      v14 = v12 + 1; /*0x42fdf8*/
      if ( v8 >= 1 ) /*0x42fdfc*/
        v15 = asc_818A0C[0]; /*0x42fe10*/
      else
        v15 = aAbcdefghijklmn[v18 & 0x3F]; /*0x42fe06*/
      *v14 = v15; /*0x42fe16*/
      v6 = v14 + 1; /*0x42fe1c*/
      v4 = a4 - 4; /*0x42fe1d*/
      a4 -= 4; /*0x42fe25*/
      v17 += 4; /*0x42fe29*/
      if ( a2 <= 0 ) /*0x42fe2d*/
        goto LABEL_19; /*0x42fe2d*/
    }
    v8 = 1; /*0x42fda3*/
LABEL_11:
    ++v8; /*0x42fda8*/
    goto LABEL_12; /*0x42fda8*/
  }
LABEL_19:
  if ( v4 > 0 ) /*0x42fe38*/
    *v6 = 0; /*0x42fe3a*/
  return v17; /*0x42fe41*/
}



// ==== 0x0042FE50  DecodeBitmapRGB  this=Pipe  sig=csp ====
int __fastcall Bitmap_DecodeRGB(unsigned __int8 *a1, int a2, _BYTE *a3, int a4)
{
  _BYTE *v4; // esi
  int v5; // eax
  unsigned __int8 *v6; // ebp
  int v7; // ebx
  int v8; // edi
  unsigned __int8 v9; // cl
  char v10; // cl
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // ecx
  int v15; // [esp+Ch] [ebp+4h]
  char v16; // [esp+12h] [ebp+Ah]

  if ( a1 ) /*0x42fe54*/
  {
    if ( a2 ) /*0x42fe5c*/
    {
      v4 = a3; /*0x42fe62*/
      if ( a3 ) /*0x42fe68*/
      {
        v5 = a4; /*0x42fe6e*/
        if ( a4 ) /*0x42fe74*/
        {
          v15 = 0; /*0x42fe7f*/
          v6 = a1; /*0x42fe87*/
          if ( a2 <= 0 ) /*0x42fe89*/
            return v15; /*0x42fe89*/
          while ( 1 ) /*0x42fe8f*/
          {
            if ( v5 <= 0 ) /*0x42fe91*/
              return v15; /*0x42fe91*/
            v7 = 0; /*0x42fe97*/
            v8 = 0; /*0x42fe99*/
            while ( 1 ) /*0x42fe9f*/
            {
              if ( a2 <= 0 ) /*0x42fea1*/
              {
LABEL_19:
                v16 = BYTE2(v7); /*0x42ff10*/
                goto LABEL_20; /*0x42ff10*/
              }
              v9 = *v6++; /*0x42fea3*/
              --a2; /*0x42feab*/
              v10 = byte_7E3914[v9]; /*0x42feb6*/
              if ( v10 != -2 ) /*0x42febf*/
                break; /*0x42febf*/
LABEL_18:
              if ( v8 >= 4 ) /*0x42ff0e*/
                goto LABEL_19; /*0x42ff0e*/
            }
            if ( v10 != -1 ) /*0x42fec4*/
              break; /*0x42fec4*/
            v16 = BYTE2(v7); /*0x42ff61*/
            a2 = 0; /*0x42ff65*/
LABEL_20:
            *v4++ = v16; /*0x42ff14*/
            --v5; /*0x42ff1f*/
            v13 = ++v15; /*0x42ff20*/
            if ( v5 > 0 ) /*0x42ff27*/
            {
              if ( v8 > 2 ) /*0x42ff2c*/
              {
                *v4++ = BYTE1(v7); /*0x42ff2e*/
                --v5; /*0x42ff31*/
                v15 = v13 + 1; /*0x42ff33*/
              }
              if ( v5 > 0 && v8 > 3 ) /*0x42ff3e*/
              {
                *v4++ = v7; /*0x42ff44*/
                --v5; /*0x42ff47*/
                ++v15; /*0x42ff49*/
              }
            }
            if ( a2 <= 0 ) /*0x42ff4f*/
              return v15; /*0x42ff5e*/
          }
          switch ( v8 ) /*0x42fecf*/
          {
            case 0: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 18; /*0x42fed9*/
              v12 = v7 & 0xFF03FFFF; /*0x42fedc*/
              goto LABEL_16; /*0x42fee2*/
            case 1: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 12; /*0x42fee7*/
              v12 = v7 & 0xFFFC0FFF; /*0x42feea*/
              goto LABEL_16; /*0x42fef0*/
            case 2: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 6; /*0x42fef5*/
              v12 = v7 & 0xFFFFF03F; /*0x42fef8*/
              goto LABEL_16; /*0x42fefe*/
            case 3: /*0x42fecf*/
              v11 = v10 & 0x3F; /*0x42ff00*/
              v12 = v7 & 0xFFFFFFC0; /*0x42ff03*/
LABEL_16:
              v7 = v12 | v11; /*0x42ff06*/
              break; /*0x42ff08*/
            default:
              break;
          }
          ++v8; /*0x42ff0a*/
          goto LABEL_18; /*0x42ff0a*/
        }
      }
    }
  }
  return 0; /*0x42ff5c*/
}



// ==== 0x0042FF80  sub_42FF80  this=-  sig=ida-proto ====
int sub_42FF80()
{
  dword_89C380 = 0; /*0x42ff82*/
  dword_89C384 = 0; /*0x42ff87*/
  dword_89C388 = 0; /*0x42ff8c*/
  dword_89C38C = 0; /*0x42ff91*/
  return 0; /*0x42ff96*/
}



// ==== 0x0042FFA0  sub_42FFA0  this=-  sig=ida-proto ====
void sub_42FFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42ffac*/
  dbl_89C398 = Math::Sqrt(v0 + v0); /*0x42ffbe*/
}



// ==== 0x0042FFD0  sub_42FFD0  this=-  sig=ida-proto ====
void sub_42FFD0()
{
  dbl_89C468 = dbl_89C398 / 60.0; /*0x42ffdc*/
}



// ==== 0x0042FFF0  sub_42FFF0  this=-  sig=ida-proto ====
void sub_42FFF0()
{
  dbl_89C450 = 1.0 / dbl_89C468; /*0x42fffc*/
}



// ==== 0x00420080  sub_420080  this=-  sig=ida-proto ====
int sub_420080()
{
  dword_88A084 = 0; /*0x420087*/
  dword_88A088 = 0; /*0x42008c*/
  byte_88A08C = 1; /*0x420091*/
  byte_88A08D = 0; /*0x420098*/
  dword_88A080 = (int)&DynamicVectorClass<AlphaLightingRemapClass *>::`vftable'; /*0x42009d*/
  dword_88A094 = 10; /*0x4200a7*/
  dword_88A090 = 0; /*0x4200b1*/
  return atexit(sub_4200C0); /*0x4200bc*/
}



// ==== 0x004200C0  sub_4200C0  this=-  sig=ida-proto ====
void __cdecl sub_4200C0()
{
  if ( (byte_88A098 & 1) == 0 ) /*0x4200ca*/
  {
    dword_88A080 = (int)&VectorClass<AlphaLightingRemapClass *>::`vftable'; /*0x4200ce*/
    byte_88A098 |= 1u; /*0x4200e1*/
    if ( dword_88A084 ) /*0x4200e7*/
    {
      if ( byte_88A08D ) /*0x4200f1*/
      {
        __3_YAXPAX_Z(dword_88A084); /*0x4200f4*/
        dword_88A084 = 0; /*0x4200fc*/
      }
    }
    byte_88A08D = 0; /*0x420106*/
    dword_88A088 = 0; /*0x42010d*/
  }
}



// ==== 0x00420120  ObjectClass::??0Iostream_init_QAE_XZ_0  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall Iostream_init::Iostream_init(Iostream_init *this)
{
  return this; /*0x420122*/
}



// ==== 0x00420130  ObjectClass::nullsub_53  this=ObjectClass  sig=csp ====
void nullsub_53(ObjectClass *this)
{
  ; /*0x420130*/
}



// ==== 0x00420140  CreateFractalNoise  this=ObjectClass  sig=csp ====
_DWORD *__stdcall FractalNoise_Create(int a1)
{
  int v1; // eax
  char *v2; // ecx
  _DWORD *v3; // eax
  _DWORD *v4; // ebp
  int v5; // esi
  int v6; // edi
  _WORD *v7; // ebx
  int v8; // edx
  __int16 v9; // cx
  int v11; // eax

  v1 = 0; /*0x420149*/
  if ( dword_88A090 <= 0 ) /*0x420152*/
  {
LABEL_5:
    v3 = __2_YAPAXI_Z(0x20008u); /*0x42016e*/
    v4 = v3; /*0x420178*/
    if ( v3 ) /*0x42017f*/
    {
      v3[0x8000] = a1; /*0x420181*/
      v5 = 0; /*0x420187*/
      v3[32769] = 0; /*0x420189*/
      v6 = a1 - 1; /*0x420193*/
      v7 = v3; /*0x420194*/
      do /*0x4201d3*/
      {
        v8 = v6 * (v5 >> 8) * (unsigned __int8)v5 / 32258; /*0x4201ba*/
        if ( v8 > v6 ) /*0x4201be*/
          LOBYTE(v8) = a1 - 1; /*0x4201c0*/
        LOBYTE(v9) = 0; /*0x4201c2*/
        ++v5; /*0x4201c4*/
        HIBYTE(v9) = v8; /*0x4201c5*/
        *v7++ = v9; /*0x4201c7*/
      }
      while ( v5 <= 0xFFFF ); /*0x4201d3*/
    }
    else
    {
      v4 = 0; /*0x4201f7*/
    }
    if ( dword_88A090 < dword_88A088 /*0x420230*/
      || (byte_88A08D || !dword_88A088)
      && dword_88A094 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_88A080 + 8))(
           &dword_88A080,
           dword_88A088 + dword_88A094,
           0) )
    {
      v11 = dword_88A090++; /*0x42023d*/
      *((_DWORD *)dword_88A084 + v11) = v4; /*0x42024c*/
    }
    ++v4[32769]; /*0x420258*/
    return v4; /*0x42025e*/
  }
  else
  {
    v2 = (char *)dword_88A084; /*0x42015a*/
    while ( *(_DWORD *)(*(_DWORD *)v2 + 0x20000) != a1 ) /*0x420164*/
    {
      ++v1; /*0x420166*/
      v2 += 4; /*0x420167*/
      if ( v1 >= dword_88A090 ) /*0x42016c*/
        goto LABEL_5; /*0x42016c*/
    }
    ++*(_DWORD *)(*((_DWORD *)dword_88A084 + v1) + 131076); /*0x4201e5*/
    return (_DWORD *)*((_DWORD *)dword_88A084 + v1); /*0x4201f1*/
  }
}



// ==== 0x00420270  FractalNoise::Dtor  this=ObjectClass  sig=csp ====
void __stdcall FractalNoise_Release(void *Block)
{
  int v1; // eax

  if ( Block ) /*0x420276*/
  {
    if ( !--*((_DWORD *)Block + 32769) ) /*0x42028d*/
    {
      v1 = (*(int (__thiscall **)(int *, void **))(dword_88A080 + 16))(&dword_88A080, &Block); /*0x4202a7*/
      if ( v1 != -1 && v1 < dword_88A090 && v1 < --dword_88A090 ) /*0x4202c2*/
      {
        do /*0x4202da*/
        {
          ++v1; /*0x4202ca*/
          *((_DWORD *)dword_88A084 + v1 - 1) = *((_DWORD *)dword_88A084 + v1); /*0x4202ce*/
        }
        while ( v1 < dword_88A090 ); /*0x4202da*/
      }
      if ( Block ) /*0x4202e2*/
        __3_YAXPAX_Z(Block); /*0x4202e5*/
    }
  }
}



// ==== 0x004202F0  ObjectClass::method_4202F0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4202F0(ObjectClass *this, int a2)
{
  int v2; // edi
  int v3; // ebx
  ObjectClass *v4; // ebp
  int v5; // edx
  __int16 v6; // ax

  v2 = 0; /*0x4202f8*/
  *((_DWORD *)this + 0x8000) = a2; /*0x4202fa*/
  *((_DWORD *)this + 32769) = 0; /*0x420300*/
  v3 = a2 - 1; /*0x420306*/
  v4 = this; /*0x420309*/
  do /*0x420349*/
  {
    v5 = v3 * (v2 >> 8) * (unsigned __int8)v2 / 32258; /*0x42032f*/
    if ( v5 > v3 ) /*0x420333*/
      LOBYTE(v5) = a2 - 1; /*0x420335*/
    LOBYTE(v6) = 0; /*0x420337*/
    ++v2; /*0x420339*/
    HIBYTE(v6) = v5; /*0x42033a*/
    LOWORD(v4->AbstractClass) = v6; /*0x42033c*/
    v4 = (ObjectClass *)((char *)v4 + 2); /*0x420340*/
  }
  while ( v2 <= 0xFFFF ); /*0x420349*/
  return &this->AbstractClass; /*0x42034b*/
}



// ==== 0x00420360  nullsub_88  this=-  sig=ida-proto ====
void nullsub_88()
{
  ; /*0x420360*/
}



// ==== 0x00420370  _DynamicVectorClass_PAVAlphaLightingRemapClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall AITriggerTypeClass_40::ClearBuffer(_DynamicVectorClass_PAVAlphaLightingRemapClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x420376*/
  this->m_10 = 0; /*0x420379*/
  if ( v2 && BYTE1(this->m_C) ) /*0x420380*/
  {
    __3_YAXPAX_Z(v2); /*0x420386*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42038e*/
  }
  BYTE1(this->m_C) = 0; /*0x420391*/
  this->m_8 = 0; /*0x420394*/
}



// ==== 0x004203A0  _DynamicVectorClass_PAVAlphaLightingRemapClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall AITriggerTypeClass_40::PointerToIndex(
        _DynamicVectorClass_PAVAlphaLightingRemapClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4203a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4203b5*/
  else
    return 0; /*0x4203a7*/
}



// ==== 0x004203C0  _VectorClass_PAVAlphaLightingRemapClass::Seek  this=VectorClass  sig=csp ====
int __thiscall AITriggerTypeClass_40::Seek(_VectorClass_PAVAlphaLightingRemapClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4203ca*/
}



// ==== 0x004203D0  _VectorClass_PAVAlphaLightingRemapClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall AITriggerTypeClass_40::AddRef(_VectorClass_PAVAlphaLightingRemapClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4203d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4203dd*/
  {
    v3 = 0; /*0x4203df*/
    if ( m_8 <= 0 ) /*0x4203e3*/
      return 1; /*0x420403*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4203e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4203eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4203f4*/
    {
      ++v3; /*0x4203f6*/
      ++v4; /*0x4203f7*/
      if ( v3 >= m_8 ) /*0x4203fc*/
        return 1; /*0x4203fc*/
    }
  }
  return 0; /*0x4203fe*/
}



// ==== 0x00420410  _VectorClass_PAVAlphaLightingRemapClass::Release  this=VectorClass  sig=csp ====
char __thiscall AITriggerTypeClass_40::Release(_VectorClass_PAVAlphaLightingRemapClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42041c*/
  {
    LOBYTE(this->m_C) = 0; /*0x420426*/
    if ( a3 ) /*0x42042c*/
      v4 = a3; /*0x420442*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x42043e*/
    LOBYTE(this->m_C) = 1; /*0x420446*/
    if ( v4 ) /*0x42044a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x420455*/
      {
        m_8 = this->m_8; /*0x42045c*/
        if ( a2 < m_8 ) /*0x420461*/
          m_8 = a2; /*0x420463*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x420469*/
          ++i; /*0x42046e*/
        if ( BYTE1(this->m_C) ) /*0x42047b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x420486*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42048e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x420497*/
      this->m_8 = a2; /*0x42049f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4204a2*/
      return 1; /*0x4204a8*/
    }
    else
    {
      return 0; /*0x42044f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVAlphaLightingRemapClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4204b2*/
    return 1; /*0x4204b8*/
  }
}



// ==== 0x004204C0  _VectorClass_PAVAlphaLightingRemapClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall AITriggerTypeClass_40::ddtor(_VectorClass_PAVAlphaLightingRemapClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4204cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4204d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4204db*/
  }
  BYTE1(this->m_C) = 0; /*0x4204de*/
  this->m_8 = 0; /*0x4204e1*/
}



// ==== 0x004204F0  _VectorClass_PAVAlphaLightingRemapClass::Read  this=VectorClass  sig=csp ====
int __thiscall AITriggerTypeClass_40::Read(_VectorClass_PAVAlphaLightingRemapClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4204f0*/
    return 0; /*0x4204f8*/
  m_8 = this->m_8; /*0x4204fe*/
  result = 0; /*0x420501*/
  if ( m_8 <= 0 ) /*0x420505*/
    return -1; /*0x42051c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42050b*/
  {
    if ( ++result >= m_8 ) /*0x42051a*/
      return -1; /*0x42051a*/
  }
  return result; /*0x4204fa*/
}



// ==== 0x00420530  _VectorClass_PAVAlphaLightingRemapClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall AITriggerTypeClass_40::Write(_VectorClass_PAVAlphaLightingRemapClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x420530*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x420545*/
  else
    return 0; /*0x420537*/
}



// ==== 0x00420550  _DynamicVectorClass_PAVAlphaLightingRemapClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall AITriggerTypeClass_40::SetCapacity(
        _DynamicVectorClass_PAVAlphaLightingRemapClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42055c*/
  {
    LOBYTE(this->m_C) = 0; /*0x420562*/
    if ( a3 ) /*0x420568*/
      v4 = a3; /*0x42057e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x42057a*/
    LOBYTE(this->m_C) = 1; /*0x420582*/
    if ( !v4 ) /*0x420586*/
      return 0; /*0x4205fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x420588*/
    {
      m_8 = this->m_8; /*0x42058f*/
      if ( a2 < m_8 ) /*0x420594*/
        m_8 = a2; /*0x420596*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42059c*/
        ++i; /*0x4205a1*/
      if ( BYTE1(this->m_C) ) /*0x4205ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4205b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4205c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4205ca*/
    this->m_8 = a2; /*0x4205d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4205d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVAlphaLightingRemapClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4205de*/
  }
  v7 = this->m_8; /*0x4205e1*/
  if ( v7 < this->m_10 ) /*0x4205e9*/
    this->m_10 = v7; /*0x4205eb*/
  return 1; /*0x4205ee*/
}



// ==== 0x00420600  _DynamicVectorClass_PAVAlphaLightingRemapClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall AITriggerTypeClass_40::FindItem(_DynamicVectorClass_PAVAlphaLightingRemapClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x420600*/
  result = 0; /*0x420603*/
  if ( m_10 <= 0 ) /*0x420608*/
    return -1; /*0x42061f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42060e*/
  {
    if ( ++result >= m_10 ) /*0x42061d*/
      return -1; /*0x42061d*/
  }
  return result; /*0x420622*/
}



// ==== 0x00420630  _VectorClass_PAVAlphaLightingRemapClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall AITriggerTypeClass_40::QueryInterface(_VectorClass_PAVAlphaLightingRemapClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x420633*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AlphaLightingRemapClass *>::`vftable'; /*0x420636*/
  if ( v3 && BYTE1(this->m_C) ) /*0x420640*/
  {
    __3_YAXPAX_Z(v3); /*0x420648*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x420650*/
  }
  BYTE1(this->m_C) = 0; /*0x42065b*/
  this->m_8 = 0; /*0x420661*/
  if ( (a2 & 1) != 0 ) /*0x420668*/
    __3_YAXPAX_Z(this); /*0x42066b*/
  return this->__pad_0; /*0x420675*/
}



// ==== 0x00420680  _DynamicVectorClass_PAVAlphaLightingRemapClass::Constructor_VectorClass_AlphaLightingRemapClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AITriggerTypeClass_40::Constructor_VectorClass_AlphaLightingRemapClass___(
        _DynamicVectorClass_PAVAlphaLightingRemapClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x420683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AlphaLightingRemapClass *>::`vftable'; /*0x420686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x420690*/
  {
    __3_YAXPAX_Z(v3); /*0x420698*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4206a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4206ab*/
  this->m_8 = 0; /*0x4206b1*/
  if ( (a2 & 1) != 0 ) /*0x4206b8*/
    __3_YAXPAX_Z(this); /*0x4206bb*/
  return this->__pad_0; /*0x4206c5*/
}



// ==== 0x004206D0  sub_4206D0  this=-  sig=ida-proto ====
int sub_4206D0()
{
  dword_88A0A8 = 0; /*0x4206d2*/
  dword_88A0AC = 0; /*0x4206d7*/
  dword_88A0B0 = 0; /*0x4206dc*/
  dword_88A0B4 = 0; /*0x4206e1*/
  return 0; /*0x4206e6*/
}



// ==== 0x004206F0  sub_4206F0  this=-  sig=ida-proto ====
void sub_4206F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4206fc*/
  dbl_88A0C0 = Math::Sqrt(v0 + v0); /*0x42070e*/
}



// ==== 0x00420720  sub_420720  this=-  sig=ida-proto ====
void sub_420720()
{
  dbl_89A128 = dbl_88A0C0 / 60.0; /*0x42072c*/
}



// ==== 0x00420740  sub_420740  this=-  sig=ida-proto ====
void sub_420740()
{
  dbl_88A110 = 1.0 / dbl_89A128; /*0x42074c*/
}



// ==== 0x00420760  sub_420760  this=-  sig=ida-proto ====
void sub_420760()
{
  dbl_88A108 = 0.0174532925199433 * 45.0; /*0x42076c*/
}



// ==== 0x00420780  sub_420780  this=-  sig=ida-proto ====
void sub_420780()
{
  dbl_88A0C8 = 0.0174532925199433 * 60.0; /*0x42078c*/
}



// ==== 0x004207A0  sub_4207A0  this=-  sig=ida-proto ====
void sub_4207A0()
{
  dbl_88A0A0 = 0.0174532925199433 * 90.0; /*0x4207ac*/
}



// ==== 0x004207C0  sub_4207C0  this=-  sig=ida-proto ====
__int64 sub_4207C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_88A0A0 - dbl_88A0C8); /*0x4207d2*/
  result = Math::RoundToInt(v0 * dbl_88A0C0 * 0.5); /*0x4207e6*/
  dword_89A130 = result; /*0x4207eb*/
  return result; /*0x4207f0*/
}



// ==== 0x00420800  sub_420800  this=-  sig=ida-proto ====
void sub_420800()
{
  dbl_88A0D0 = Math::ArcTan((double)dword_89A130 * 0.00390625); /*0x420817*/
}



// ==== 0x00420830  sub_420830  this=-  sig=ida-proto ====
void sub_420830()
{
  dbl_88A0E8 = Math::ArcTan((double)(2 * dword_89A130) / dbl_88A0C0); /*0x420852*/
}



// ==== 0x00420860  sub_420860  this=-  sig=ida-proto ====
__int64 sub_420860()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A130) + 0.5); /*0x42087b*/
  dword_89A124 = result; /*0x420880*/
  return result; /*0x420886*/
}



// ==== 0x00420890  sub_420890  this=-  sig=ida-proto ====
int sub_420890()
{
  word_88A0B8 = 0; /*0x420892*/
  word_88A0BA = 0; /*0x420898*/
  return 0; /*0x42089e*/
}



// ==== 0x004208A0  sub_4208A0  this=-  sig=ida-proto ====
int sub_4208A0()
{
  dword_88A0D8 = 0; /*0x4208a2*/
  dword_88A0DC = 0; /*0x4208a7*/
  dword_88A0E0 = 0; /*0x4208ac*/
  return 0; /*0x4208b1*/
}



// ==== 0x004208C0  sub_4208C0  this=-  sig=ida-proto ====
int sub_4208C0()
{
  dword_89A120 = 0; /*0x4208c5*/
  dword_89A118 = 128; /*0x4208cf*/
  dword_89A11C = 128; /*0x4208d4*/
  return 128; /*0x4208d9*/
}



// ==== 0x004208E0  sub_4208E0  this=-  sig=ida-proto ====
int sub_4208E0()
{
  dword_88A0F4 = 0; /*0x4208e7*/
  dword_88A0F8 = 0; /*0x4208ec*/
  byte_88A0FC = 1; /*0x4208f1*/
  byte_88A0FD = 0; /*0x4208f8*/
  dword_88A0F0 = (int)&off_7E3238; /*0x4208fd*/
  dword_88A104 = 10; /*0x420907*/
  g_AlphaShapeLimit = 0; /*0x420911*/
  return atexit(sub_420920); /*0x42091c*/
}



// ==== 0x00420920  sub_420920  this=-  sig=ida-proto ====
void __cdecl sub_420920()
{
  dword_88A0F0 = (int)&VectorClass<AlphaShapeClass *>::`vftable'; /*0x420928*/
  if ( dword_88A0F4 && byte_88A0FD ) /*0x42093c*/
  {
    __3_YAXPAX_Z(dword_88A0F4); /*0x42093f*/
    dword_88A0F4 = 0; /*0x420947*/
  }
  byte_88A0FD = 0; /*0x42094d*/
  dword_88A0F8 = 0; /*0x420953*/
}



// ==== 0x00420960  AlphaShapeClass::CTOR  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::CTOR(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int i; // edi
  int v11; // edx

  AbstractClass::Constructor((AbstractClass *)this); /*0x420965*/
  *(_DWORD *)(this + 56) = 0; /*0x42096e*/
  *(_DWORD *)(this + 36) = a2; /*0x420975*/
  *(_BYTE *)(this + 60) = 0; /*0x420978*/
  *(_DWORD *)this = &AlphaShapeClass::`vftable'; /*0x42097c*/
  *(_DWORD *)(this + 4) = &AlphaShapeClass::`vftable'; /*0x420982*/
  *(_DWORD *)(this + 8) = &AlphaShapeClass::`vftable'; /*0x420989*/
  *(_DWORD *)(this + 12) = &AlphaShapeClass::`vftable'; /*0x420990*/
  v5 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) + 172); /*0x42099f*/
  *(_DWORD *)(this + 56) = v5; /*0x4209ad*/
  v6 = *(__int16 *)(v5 + 2); /*0x4209b0*/
  v7 = *(__int16 *)(v5 + 4); /*0x4209b4*/
  *(_DWORD *)(this + 40) = a3; /*0x4209bb*/
  *(_DWORD *)(this + 44) = a4; /*0x4209be*/
  *(_DWORD *)(this + 48) = v6; /*0x4209c1*/
  *(_DWORD *)(this + 52) = v7; /*0x4209c4*/
  if ( g_AlphaShapeLimit < dword_88A0F8 /*0x4209fc*/
    || (byte_88A0FD || !dword_88A0F8)
    && dword_88A104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_88A0F0 + 8))(
         &dword_88A0F0,
         dword_88A0F8 + dword_88A104,
         0) )
  {
    v8 = g_AlphaShapeLimit++; /*0x420a09*/
    *((_DWORD *)dword_88A0F4 + v8) = this; /*0x420a18*/
  }
  if ( dword_B0F730 < dword_B0F728 /*0x420a52*/
    || (byte_B0F72D || !dword_B0F728)
    && dword_B0F734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F720 + 8))(
         &dword_B0F720,
         dword_B0F728 + dword_B0F734,
         0) )
  {
    v9 = dword_B0F730++; /*0x420a5f*/
    *((_DWORD *)dword_B0F724 + v9) = this; /*0x420a6e*/
  }
  if ( !byte_89A134 ) /*0x420a78*/
  {
    byte_89A134 = 1; /*0x420a7a*/
    for ( i = 0; i < 0x10000; ++i ) /*0x420a81*/
    {
      v11 = i % 256 * (i / 256) / 127; /*0x420ab9*/
      if ( v11 > 255 ) /*0x420ac1*/
      {
        LOBYTE(v11) = -1; /*0x420ad3*/
      }
      else if ( v11 < 0 ) /*0x420ac5*/
      {
        LOBYTE(v11) = 0; /*0x420ac7*/
      }
      byte_88A118[i] = v11; /*0x420ad8*/
    }
  }
  return this; /*0x420ae9*/
}



// ==== 0x00420AF0  AlphaShapeClass::Constructor  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::Constructor(AlphaShapeClass *this)
{
  int v2; // eax
  int v3; // eax
  int i; // esi
  int v5; // edx

  AbstractClass::Constructor((AbstractClass *)this); /*0x420af4*/
  this->AlphaShapeClass_field_0x24 = 0; /*0x420afb*/
  *((_DWORD *)this + 10) = 0; /*0x420afe*/
  *((_DWORD *)this + 11) = 0; /*0x420b01*/
  this->ptr_10 = 0; /*0x420b04*/
  *((_DWORD *)this + 13) = 0; /*0x420b07*/
  *((_DWORD *)this + 14) = 0; /*0x420b0a*/
  *((_BYTE *)this + 60) = 0; /*0x420b0d*/
  *(_DWORD *)this->__pad_0 = &AlphaShapeClass::`vftable'; /*0x420b10*/
  this->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x420b16*/
  this->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x420b1d*/
  this->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x420b24*/
  if ( g_AlphaShapeLimit < dword_88A0F8 /*0x420b5c*/
    || (byte_88A0FD || !dword_88A0F8)
    && dword_88A104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_88A0F0 + 8))(
         &dword_88A0F0,
         dword_88A0F8 + dword_88A104,
         0) )
  {
    v2 = g_AlphaShapeLimit++; /*0x420b69*/
    *((_DWORD *)dword_88A0F4 + v2) = this; /*0x420b78*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x420baf*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x420bbc*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v3) = this; /*0x420bcb*/
  }
  if ( byte_89A134 ) /*0x420bd4*/
    return (int)this->__pad_0; /*0x420c4a*/
  byte_89A134 = 1; /*0x420bd7*/
  for ( i = 0; i < 0x10000; ++i ) /*0x420bde*/
  {
    v5 = i % 256 * (i / 256) / 127; /*0x420c16*/
    if ( v5 > 255 ) /*0x420c1e*/
    {
      LOBYTE(v5) = -1; /*0x420c30*/
    }
    else if ( v5 < 0 ) /*0x420c22*/
    {
      LOBYTE(v5) = 0; /*0x420c24*/
    }
    byte_88A118[i] = v5; /*0x420c35*/
  }
  return (int)this->__pad_0; /*0x420c47*/
}



// ==== 0x00420D40  AlphaShapeClass::SD_vt03  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt03(AlphaShapeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x420d46*/
    return -2147467261; /*0x420d48*/
  *a2 = 1648129412; /*0x420d56*/
  a2[1] = 299005159; /*0x420d5e*/
  a2[2] = 1610675640; /*0x420d67*/
  a2[3] = unk_7E99AC; /*0x420d70*/
  return 0; /*0x420d4d*/
}



// ==== 0x00420D80  AlphaShapeClass::SD_vt11  this=AlphaShapeClass  sig=csp ====
int AlphaShapeClass::SD_vt11(AlphaShapeClass *this)
{
  return 62; /*0x420d85*/
}



// ==== 0x00420D90  AlphaShapeClass::SD_vt12  this=AlphaShapeClass  sig=csp ====
int AlphaShapeClass::SD_vt12(AlphaShapeClass *this)
{
  return 64; /*0x420d95*/
}



// ==== 0x00420DA0  AlphaShapeClass::SD_vt13  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::SD_vt13(AlphaShapeClass *this, int a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x420da9*/
  Power::TimerProcess(*((_DWORD *)this + 10)); /*0x420db4*/
  Power::TimerProcess(*((_DWORD *)this + 11)); /*0x420dbf*/
  Power::TimerProcess(this->ptr_10); /*0x420dca*/
  return Power::TimerProcess(*((_DWORD *)this + 13)); /*0x420dda*/
}



// ==== 0x00420DE0  AlphaShapeClass::SD_vt05  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt05(AlphaShapeClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x420df1*/
  if ( Prefix_0 >= 0 ) /*0x420df5*/
  {
    if ( this ) /*0x420df9*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x420e02*/
      *(_DWORD *)this->__pad_0 = &AlphaShapeClass::`vftable'; /*0x420e07*/
      this->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x420e0d*/
      this->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x420e14*/
      this->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x420e1b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AlphaShapeClass_field_0x24); /*0x420e2b*/
    *((_DWORD *)this + 14) = 0; /*0x420e30*/
  }
  return Prefix_0; /*0x420e39*/
}



// ==== 0x00420E40  AlphaShapeClass::SD_vt06  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt06(AlphaShapeClass *this, int *a2, int a3)
{
  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x420e4f*/
  return Prefix >= 0 ? 0 : Prefix;
}



// ==== 0x00420E70  AlphaShapeClass::SD_vt10  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::SD_vt10(AlphaShapeClass *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x420e70*/
  if ( a2 == this->AlphaShapeClass_field_0x24 ) /*0x420e79*/
    *((_BYTE *)this + 60) = 1; /*0x420e7b*/
  return result; /*0x420e7f*/
}



// ==== 0x00420E90  AirstrikeClass::UpdateAll  this=AirstrikeClass  sig=csp ====
char AirstrikeClass::UpdateAll(AirstrikeClass *this)
{
  _DWORD *v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _BYTE *v6; // edx

  LOBYTE(v1) = byte_89A134; /*0x420e90*/
  if ( !byte_89A134 ) /*0x420e98*/
  {
    byte_89A134 = 1; /*0x420e9a*/
    v2 = 0; /*0x420ea1*/
    while ( 1 ) /*0x420ec6*/
    {
      v3 = v2 % 256 * (v2 / 256); /*0x420ec6*/
      v1 = (_DWORD *)((unsigned int)((unsigned __int64)(2164392969LL * v3) >> 32) >> 31); /*0x420ed6*/
      v4 = v3 / 127; /*0x420ed9*/
      if ( v3 / 127 > 255 ) /*0x420ee1*/
        break; /*0x420ee1*/
      if ( v4 >= 0 ) /*0x420ee5*/
      {
        if ( v4 > 255 ) /*0x420ef1*/
          break; /*0x420ef1*/
      }
      else
      {
        LOBYTE(v4) = 0; /*0x420ee7*/
      }
LABEL_8:
      byte_88A118[v2++] = v4; /*0x420ef8*/
      if ( v2 >= 0x10000 ) /*0x420f05*/
        goto LABEL_9; /*0x420f05*/
    }
    LOBYTE(v4) = -1; /*0x420ef3*/
    goto LABEL_8; /*0x420ef3*/
  }
LABEL_9:
  v5 = g_AlphaShapeLimit - 1; /*0x420f07*/
  if ( g_AlphaShapeLimit - 1 >= 0 ) /*0x420f12*/
  {
    v1 = dword_88A0F4; /*0x420f14*/
    do /*0x420f36*/
    {
      v6 = (_BYTE *)v1[v5]; /*0x420f19*/
      if ( v6[60] && v6 ) /*0x420f27*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 32))(1); /*0x420f2d*/
        v1 = dword_88A0F4; /*0x420f30*/
      }
      --v5; /*0x420f35*/
    }
    while ( v5 >= 0 ); /*0x420f36*/
  }
  return (char)v1; /*0x420f38*/
}



// ==== 0x00420F40  UpdateSpotlightsFoo  this=-  sig=csp ====
int __fastcall UpdateSpotlightsFoo(int *a1, int *a2)
{
  int result; // eax
  int *v3; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int *v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // ebp
  unsigned int v17; // esi
  int v18; // edx
  int *FoundationSize; // edx
  int v20; // eax
  int v21; // edi
  int v22; // ebx
  int v23; // ecx
  int SubFile; // esi
  _WORD *v25; // eax
  _DWORD *v26; // edx
  unsigned __int8 *v27; // esi
  char *v28; // ebp
  int v29; // ecx
  int v30; // edi
  unsigned __int8 v31; // cl
  char v32; // cl
  char *v33; // edx
  int v34; // edi
  unsigned __int8 v35; // cl
  char v36; // cl
  int v37; // [esp+8h] [ebp-C8h]
  int v38; // [esp+8h] [ebp-C8h]
  int v39; // [esp+8h] [ebp-C8h]
  int v40; // [esp+Ch] [ebp-C4h]
  int v41; // [esp+10h] [ebp-C0h]
  int v42; // [esp+14h] [ebp-BCh]
  int v43; // [esp+18h] [ebp-B8h]
  int v44; // [esp+1Ch] [ebp-B4h]
  unsigned __int8 v45; // [esp+20h] [ebp-B0h]
  unsigned __int8 v46; // [esp+20h] [ebp-B0h]
  int v47; // [esp+24h] [ebp-ACh]
  int v48; // [esp+28h] [ebp-A8h]
  char *v49; // [esp+2Ch] [ebp-A4h]
  unsigned int v50; // [esp+30h] [ebp-A0h] BYREF
  int v51; // [esp+34h] [ebp-9Ch]
  int v52; // [esp+38h] [ebp-98h]
  int v53; // [esp+3Ch] [ebp-94h]
  int *v54; // [esp+40h] [ebp-90h]
  int v55; // [esp+44h] [ebp-8Ch]
  int v56; // [esp+4Ch] [ebp-84h]
  int v57; // [esp+50h] [ebp-80h]
  int v58; // [esp+58h] [ebp-78h]
  int *v59; // [esp+5Ch] [ebp-74h]
  int v60; // [esp+60h] [ebp-70h]
  char **v61; // [esp+64h] [ebp-6Ch]
  int v62; // [esp+68h] [ebp-68h] BYREF
  int v63; // [esp+6Ch] [ebp-64h]
  int v64; // [esp+70h] [ebp-60h]
  int v65; // [esp+74h] [ebp-5Ch]
  int v66; // [esp+7Ch] [ebp-54h]
  int v67; // [esp+84h] [ebp-4Ch]
  int v68[4]; // [esp+88h] [ebp-48h] BYREF
  int v69; // [esp+98h] [ebp-38h]
  int v70[4]; // [esp+A0h] [ebp-30h] BYREF
  int v71[4]; // [esp+B0h] [ebp-20h] BYREF
  int v72[4]; // [esp+C0h] [ebp-10h] BYREF

  result = g_AlphaShapeLimit; /*0x420f46*/
  v3 = a1; /*0x420f4d*/
  v4 = 0; /*0x420f4f*/
  v54 = a2; /*0x420f51*/
  v59 = a1; /*0x420f57*/
  v44 = 0; /*0x420f5b*/
  if ( g_AlphaShapeLimit > 0 ) /*0x420f5f*/
  {
    while ( 1 ) /*0x420f72*/
    {
      v5 = *((_DWORD *)dword_88A0F4 + v4); /*0x420f72*/
      if ( !*(_BYTE *)(v5 + 60) ) /*0x420f75*/
      {
        v50 = *(_DWORD *)(v5 + 40); /*0x420f8b*/
        v51 = *(_DWORD *)(v5 + 44); /*0x420f92*/
        v52 = *(_DWORD *)(v5 + 48); /*0x420f99*/
        v53 = *(_DWORD *)(v5 + 52); /*0x420fa0*/
        v6 = v51 - (unsigned int)g_TacticalClass_Instance[45].__tail_0; /*0x420fb6*/
        v50 = DSurface_ViewBounds + v50 - (unsigned int)g_TacticalClass_Instance[44].__tail_0; /*0x420fca*/
        v51 = dword_886FA4 + v6; /*0x420fd2*/
        v7 = ClipRectIntersection(v70, (int *)&v50, v54, 0, 0); /*0x420fe2*/
        v68[0] = *v7; /*0x420fe9*/
        v68[1] = v7[1]; /*0x420ff7*/
        v68[2] = v7[2]; /*0x421001*/
        v8 = v3[1]; /*0x421008*/
        v9 = v7[3]; /*0x42100b*/
        v10 = *v3; /*0x42100e*/
        v68[3] = v9; /*0x421010*/
        v63 = v8; /*0x42101b*/
        v62 = v10; /*0x42102e*/
        v64 = 60; /*0x421032*/
        v65 = 30; /*0x42103d*/
        v11 = ClipRectIntersection(v71, v68, &v62, 0, 0); /*0x42104d*/
        v12 = *v11; /*0x42104f*/
        v55 = *v11; /*0x421051*/
        v13 = v11[1]; /*0x421055*/
        v14 = v11[2]; /*0x421058*/
        v15 = v11[3]; /*0x42105d*/
        v56 = v14; /*0x421060*/
        v57 = v15; /*0x421064*/
        if ( v14 > 0 && v15 > 0 ) /*0x421070*/
        {
          v16 = v13 - v63; /*0x421082*/
          v17 = v50; /*0x42108a*/
          v69 = v12 - v62; /*0x42108e*/
          v18 = *((_DWORD *)dword_88A0F4 + v4); /*0x421099*/
          v58 = v51; /*0x42109c*/
          v61 = *(char ***)(v18 + 56); /*0x4210ad*/
          FoundationSize = Building::GetFoundationSize(v72, 0); /*0x4210b6*/
          v41 = v13; /*0x4210b8*/
          v20 = *FoundationSize; /*0x4210bc*/
          v66 = FoundationSize[1]; /*0x4210c1*/
          v21 = FoundationSize[2]; /*0x4210c8*/
          v67 = FoundationSize[3]; /*0x4210ce*/
          if ( v13 <= v58 + v66 ) /*0x4210dd*/
            v41 = v58 + v66; /*0x4210df*/
          v60 = v41 - v58 - v66; /*0x4210fd*/
          v37 = v57 + v13; /*0x421118*/
          if ( v57 + v13 >= v66 + v67 + v58 ) /*0x42111c*/
            v37 = v66 + v67 + v58; /*0x42111e*/
          v40 = v55; /*0x42112b*/
          if ( v55 <= (int)(v17 + v20) ) /*0x42112f*/
            v40 = v17 + v20; /*0x421131*/
          v22 = v40 - v17 - v20; /*0x421144*/
          v23 = v55 + v56; /*0x42114e*/
          if ( v55 + v56 >= (int)(v20 + v17 + v21) ) /*0x421156*/
          {
            v42 = v20 + v17 + v21; /*0x42115e*/
            v23 = v42; /*0x421162*/
          }
          else
          {
            v42 = v55 + v56; /*0x421158*/
          }
          v47 = v40 + *((_DWORD *)dword_87E8A4 + 10) - v23; /*0x421187*/
          v43 = 60 - v56; /*0x421199*/
          v48 = v40 + v21 - v23; /*0x4211a1*/
          v49 = (char *)&unk_7E2B20 + 60 * v16 + v69; /*0x4211b0*/
          SubFile = MixFileClass::GetSubFile(v61, 0); /*0x4211c9*/
          v25 = (_WORD *)StreamClass::ReadAndSeek((int)dword_87E8A4, v40, v41 - dword_886FA4); /*0x4211d3*/
          v26 = dword_87E8A4; /*0x4211d8*/
          v27 = (unsigned __int8 *)(v22 + v60 * v21 + SubFile); /*0x4211ed*/
          if ( (unsigned int)&v25[(v37 - v41) * *((_DWORD *)dword_87E8A4 + 10) + 2 + v42 + 0x7FFFFFFF * v40] < *((_DWORD *)dword_87E8A4 + 7) ) /*0x421211*/
          {
            if ( v41 < v37 ) /*0x4212bb*/
            {
              v33 = v49; /*0x4212c1*/
              v39 = v37 - v41; /*0x4212c5*/
              do /*0x421324*/
              {
                if ( v40 < v42 ) /*0x4212cf*/
                {
                  v34 = v42 - v40; /*0x4212d3*/
                  do /*0x421306*/
                  {
                    v35 = *v27++; /*0x4212d5*/
                    v46 = v35; /*0x4212d8*/
                    v36 = *v33++; /*0x4212dc*/
                    if ( v36 != 32 ) /*0x4212e2*/
                      *v25 = (unsigned __int8)byte_88A118[256 * v46 + (unsigned __int16)*v25]; /*0x4212ff*/
                    ++v25; /*0x421302*/
                    --v34; /*0x421305*/
                  }
                  while ( v34 ); /*0x421306*/
                }
                v27 += v48; /*0x421314*/
                v25 += v47; /*0x421316*/
                v33 += v43; /*0x42131d*/
                --v39; /*0x421320*/
              }
              while ( v39 ); /*0x421324*/
            }
          }
          else if ( v41 < v37 ) /*0x421221*/
          {
            v28 = v49; /*0x42122b*/
            v38 = v37 - v41; /*0x42122f*/
            v29 = v40; /*0x421233*/
            do /*0x4212ad*/
            {
              if ( v29 < v42 ) /*0x421239*/
              {
                v30 = v42 - v29; /*0x42123d*/
                do /*0x421281*/
                {
                  v31 = *v27++; /*0x42123f*/
                  v45 = v31; /*0x421242*/
                  v32 = *v28++; /*0x421246*/
                  if ( v32 != 32 ) /*0x42124d*/
                  {
                    *v25 = (unsigned __int8)byte_88A118[256 * v45 + (unsigned __int16)*v25]; /*0x42126a*/
                    v26 = dword_87E8A4; /*0x42126d*/
                  }
                  if ( (unsigned int)++v25 >= v26[7] ) /*0x42127b*/
                    v25 = (_WORD *)((char *)v25 - v26[8]); /*0x42127d*/
                  --v30; /*0x421280*/
                }
                while ( v30 ); /*0x421281*/
                v29 = v40; /*0x421283*/
              }
              v27 += v48; /*0x42128b*/
              v28 += v43; /*0x421291*/
              v25 += v47; /*0x421297*/
              if ( (unsigned int)v25 >= v26[7] ) /*0x42129f*/
                v25 = (_WORD *)((char *)v25 - v26[8]); /*0x4212a1*/
              --v38; /*0x4212a9*/
            }
            while ( v38 ); /*0x4212ad*/
          }
          v4 = v44; /*0x421326*/
        }
      }
      result = g_AlphaShapeLimit; /*0x42132a*/
      v44 = ++v4; /*0x421332*/
      if ( v4 >= g_AlphaShapeLimit ) /*0x421336*/
        break; /*0x421336*/
      v3 = v59; /*0x420f69*/
    }
  }
  return result; /*0x42133e*/
}



// ==== 0x00421350  ObjectClass::RenderAlphaShapes  this=ObjectClass  sig=csp ====
int __thiscall RenderAlphaShapes(ObjectClass *this)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edx
  char *v4; // ecx
  int *v5; // eax
  int v6; // esi
  int v7; // eax
  char *v8; // ebp
  MixFileClass *v9; // edi
  int *FoundationSize; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  char *v14; // ecx
  int v15; // ebp
  int v16; // ecx
  int SubFile; // edi
  unsigned __int16 *v18; // eax
  int v19; // ecx
  unsigned __int8 *v20; // edi
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  unsigned __int16 v26; // bx
  bool v27; // zf
  int v28; // [esp+4h] [ebp-90h]
  int v29; // [esp+4h] [ebp-90h]
  int v30; // [esp+4h] [ebp-90h]
  int v31; // [esp+8h] [ebp-8Ch]
  int v32; // [esp+Ch] [ebp-88h]
  char *v33; // [esp+10h] [ebp-84h]
  int v34; // [esp+14h] [ebp-80h]
  unsigned __int8 v35; // [esp+18h] [ebp-7Ch]
  unsigned __int8 v36; // [esp+18h] [ebp-7Ch]
  int i; // [esp+1Ch] [ebp-78h]
  int v38; // [esp+20h] [ebp-74h]
  int v39; // [esp+24h] [ebp-70h] BYREF
  int v40; // [esp+28h] [ebp-6Ch]
  int v41; // [esp+2Ch] [ebp-68h]
  int v42; // [esp+30h] [ebp-64h]
  int v43; // [esp+34h] [ebp-60h] BYREF
  char *v44; // [esp+38h] [ebp-5Ch]
  int v45; // [esp+3Ch] [ebp-58h]
  int v46; // [esp+40h] [ebp-54h]
  int *v47; // [esp+44h] [ebp-50h]
  int v48; // [esp+48h] [ebp-4Ch]
  char *v49; // [esp+50h] [ebp-44h]
  int v50; // [esp+54h] [ebp-40h]
  char *v51; // [esp+58h] [ebp-3Ch]
  int v52; // [esp+70h] [ebp-24h]
  int v53[4]; // [esp+74h] [ebp-20h] BYREF
  int v54[4]; // [esp+84h] [ebp-10h] BYREF

  result = g_AlphaShapeLimit; /*0x421356*/
  v2 = 0; /*0x42135c*/
  v47 = (int *)this; /*0x42135e*/
  for ( i = 0; v2 < g_AlphaShapeLimit; i = v2 ) /*0x421368*/
  {
    v3 = (int *)(*((_DWORD *)dword_88A0F4 + v2) + 40); /*0x421380*/
    v43 = *v3; /*0x421384*/
    v44 = (char *)v3[1]; /*0x42138b*/
    v45 = v3[2]; /*0x421392*/
    v46 = v3[3]; /*0x421399*/
    v4 = &v44[-*(_DWORD *)&g_TacticalClass_Instance[45]]; /*0x4213af*/
    v43 = DSurface_ViewBounds.field_0 + v43 - *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4213c3*/
    v44 = (char *)DSurface_ViewBounds.field_4 + (unsigned int)v4; /*0x4213cb*/
    v39 = *v47; /*0x4213d1*/
    v40 = v47[1]; /*0x4213d8*/
    v41 = v47[2]; /*0x4213df*/
    v42 = v47[3]; /*0x4213f1*/
    v5 = ClipRectIntersection(v53, &v43, &v39, 0, 0); /*0x4213fa*/
    v50 = *v5; /*0x421403*/
    v51 = (char *)v5[1]; /*0x42140a*/
    if ( v5[2] > 0 && v5[3] > 0 ) /*0x42141e*/
    {
      v6 = v43; /*0x42142e*/
      v49 = v44; /*0x421432*/
      v7 = *((_DWORD *)dword_88A0F4 + v2); /*0x421436*/
      v9 = *(MixFileClass **)(v7 + 56); /*0x42143c*/
      if ( !v9 ) /*0x421441*/
      {
        v8 = (char *)dword_88A0F4 + 4 * v2; /*0x421439*/
        *(_DWORD *)(*(_DWORD *)v8 + 56) = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 36) + 136))(*(_DWORD *)(v7 + 36)) /*0x421459*/
                                                    + 172);
        v9 = *(MixFileClass **)(*((_DWORD *)dword_88A0F4 + v2) + 56); /*0x421464*/
      }
      FoundationSize = Building::GetFoundationSize(v54, 0); /*0x421478*/
      v11 = *FoundationSize; /*0x42147e*/
      v33 = v51; /*0x421480*/
      v12 = FoundationSize[1]; /*0x421484*/
      v13 = FoundationSize[2]; /*0x421487*/
      v52 = FoundationSize[3]; /*0x42148d*/
      if ( (int)v51 <= (int)&v49[v12] ) /*0x421499*/
        v33 = &v49[v12]; /*0x42149b*/
      v48 = v33 - v49 - v12; /*0x4214ab*/
      v14 = &v49[v52 + v12]; /*0x4214b9*/
      v28 = v42 + v40; /*0x4214c3*/
      if ( v42 + v40 >= (int)v14 ) /*0x4214c7*/
        v28 = (int)v14; /*0x4214c9*/
      v31 = v50; /*0x4214d6*/
      if ( v50 <= v6 + v11 ) /*0x4214da*/
        v31 = v6 + v11; /*0x4214dc*/
      v15 = v31 - v6 - v11; /*0x4214ef*/
      v16 = v39 + v41; /*0x4214f9*/
      if ( v39 + v41 >= v11 + v6 + v13 ) /*0x421501*/
      {
        v32 = v11 + v6 + v13; /*0x421509*/
        v16 = v32; /*0x42150d*/
      }
      else
      {
        v32 = v39 + v41; /*0x421503*/
      }
      v34 = v31 + v13 - v16; /*0x42152c*/
      v38 = v31 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40) - v16; /*0x421530*/
      SubFile = MixFileClass::GetSubFile(v9, 0); /*0x421549*/
      v18 = (unsigned __int16 *)StreamClass::ReadAndSeek( /*0x42155d*/
                                  *(int **)&stru_87E790.__pad_D8[60],
                                  v31 - DSurface_ViewBounds.field_0,
                                  v33 - (char *)DSurface_ViewBounds.field_4);
      v19 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x421562*/
      v20 = (unsigned __int8 *)(v15 + v48 * v13 + SubFile); /*0x421577*/
      if ( (unsigned int)&v18[(v28 - (_DWORD)v33) * *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40) /*0x42159b*/
                            + 2
                            + v32
                            + 0x7FFFFFFF * v31] < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) )
      {
        if ( (int)v33 < v28 ) /*0x421630*/
        {
          v23 = v32; /*0x421632*/
          v30 = v28 - (_DWORD)v33; /*0x42163e*/
          v24 = v31; /*0x421642*/
          do /*0x42168e*/
          {
            if ( v24 < v23 ) /*0x421648*/
            {
              v25 = v23 - v24; /*0x42164a*/
              do /*0x421676*/
              {
                v26 = *v18; /*0x421650*/
                v36 = *v20++; /*0x421653*/
                ++v18; /*0x421662*/
                --v25; /*0x421668*/
                *(v18 - 1) = (unsigned __int8)byte_88A118[256 * v36 + v26]; /*0x421672*/
              }
              while ( v25 ); /*0x421676*/
              v23 = v32; /*0x421678*/
              v24 = v31; /*0x42167c*/
            }
            v20 += v34; /*0x421684*/
            v27 = v30 == 1; /*0x421686*/
            v18 += v38; /*0x421687*/
            --v30; /*0x42168a*/
          }
          while ( !v27 ); /*0x42168e*/
        }
      }
      else if ( (int)v33 < v28 ) /*0x4215ab*/
      {
        v21 = v32; /*0x4215b1*/
        v29 = v28 - (_DWORD)v33; /*0x4215bd*/
        do /*0x421622*/
        {
          if ( v31 < v21 ) /*0x4215c7*/
          {
            v22 = v21 - v31; /*0x4215c9*/
            do /*0x421604*/
            {
              ++v18; /*0x4215cd*/
              v35 = *v20++; /*0x4215d0*/
              *(v18 - 1) = (unsigned __int8)byte_88A118[256 * v35 + *(v18 - 1)]; /*0x4215f1*/
              v19 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4215f5*/
              if ( (unsigned int)v18 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4215fe*/
                v18 = (unsigned __int16 *)((char *)v18 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x421600*/
              --v22; /*0x421603*/
            }
            while ( v22 ); /*0x421604*/
            v21 = v32; /*0x421606*/
          }
          v18 += v38; /*0x42160d*/
          v20 += v34; /*0x421610*/
          if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 28) ) /*0x421614*/
            v18 = (unsigned __int16 *)((char *)v18 - *(_DWORD *)(v19 + 32)); /*0x421616*/
          --v29; /*0x42161e*/
        }
        while ( v29 ); /*0x421622*/
      }
      v2 = i; /*0x421690*/
    }
    result = g_AlphaShapeLimit; /*0x421694*/
    ++v2; /*0x421699*/
  }
  return result; /*0x4216a9*/
}



// ==== 0x00421730  AlphaShapeClass::SDDTOR  this=AlphaShapeClass  sig=csp ====
_DWORD *__thiscall AlphaShapeClass::SDDTOR(AlphaShapeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  AlphaShapeClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &AlphaShapeClass::`vftable'; /*0x42173d*/
  this->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x421743*/
  this->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x42174a*/
  this->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x421751*/
  v6 = this; /*0x42175f*/
  v3 = (*(int (__thiscall **)(int *, AlphaShapeClass **))(dword_88A0F0 + 16))(&dword_88A0F0, &v6); /*0x421763*/
  if ( v3 != -1 && v3 < g_AlphaShapeLimit && v3 < --g_AlphaShapeLimit ) /*0x42177e*/
  {
    do /*0x421796*/
    {
      ++v3; /*0x421786*/
      *((_DWORD *)dword_88A0F4 + v3 - 1) = *((_DWORD *)dword_88A0F4 + v3); /*0x42178a*/
    }
    while ( v3 < g_AlphaShapeLimit ); /*0x421796*/
  }
  v6 = this; /*0x4217a8*/
  v4 = (*(int (__thiscall **)(int *, AlphaShapeClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x4217ac*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x4217bc*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x4217c1*/
    for ( ; /*0x4217c7*/
          v4 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x4217cf*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x4217e3*/
  if ( (a2 & 1) != 0 ) /*0x4217ed*/
    __3_YAXPAX_Z(this); /*0x4217f0*/
  return this->__pad_0; /*0x4217fa*/
}



// ==== 0x00421800  VectorClass_ptr_AlphaShapeClass::Destroy  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
void __thiscall VectorClass_ptr_AlphaShapeClass::Destroy(VectorClass_ptr_AlphaShapeClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x421806*/
  this->Count = 0; /*0x421809*/
  if ( Items && this->IsAllocated ) /*0x421810*/
  {
    __3_YAXPAX_Z(Items); /*0x421816*/
    this->Items = 0; /*0x42181e*/
  }
  this->IsAllocated = 0; /*0x421821*/
  this->Capacity = 0; /*0x421824*/
}



// ==== 0x00421830  VectorClass_ptr_AlphaShapeClass::GetItemIndex  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AlphaShapeClass::GetItemIndex(VectorClass_ptr_AlphaShapeClass *this, int a2)
{
  if ( this->IsInitialized ) /*0x421830*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x421845*/
  else
    return 0; /*0x421837*/
}



// ==== 0x00421850  _VectorClass_PAVAlphaShapeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::Get(_VectorClass_PAVAlphaShapeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x42185a*/
}



// ==== 0x00421860  _VectorClass_PAVAlphaShapeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::Add(_VectorClass_PAVAlphaShapeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x421862*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42186d*/
  {
    v3 = 0; /*0x42186f*/
    if ( m_8 <= 0 ) /*0x421873*/
      return 1; /*0x421893*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x421875*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42187b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x421884*/
    {
      ++v3; /*0x421886*/
      ++v4; /*0x421887*/
      if ( v3 >= m_8 ) /*0x42188c*/
        return 1; /*0x42188c*/
    }
  }
  return 0; /*0x42188e*/
}



// ==== 0x004218A0  _VectorClass_PAVAlphaShapeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::Release(_VectorClass_PAVAlphaShapeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4218ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x4218b6*/
    if ( a3 ) /*0x4218bc*/
      v4 = a3; /*0x4218d2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4218ce*/
    LOBYTE(this->m_C) = 1; /*0x4218d6*/
    if ( v4 ) /*0x4218da*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4218e5*/
      {
        m_8 = this->m_8; /*0x4218ec*/
        if ( a2 < m_8 ) /*0x4218f1*/
          m_8 = a2; /*0x4218f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4218f9*/
          ++i; /*0x4218fe*/
        if ( BYTE1(this->m_C) ) /*0x42190b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x421916*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42191e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x421927*/
      this->m_8 = a2; /*0x42192f*/
      BYTE1(this->m_C) = a3 == 0; /*0x421932*/
      return 1; /*0x421938*/
    }
    else
    {
      return 0; /*0x4218df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVAlphaShapeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x421942*/
    return 1; /*0x421948*/
  }
}



// ==== 0x00421950  _VectorClass_PAVAlphaShapeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AlphaShapeClass::Remove(_VectorClass_PAVAlphaShapeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x42195d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x421963*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42196b*/
  }
  BYTE1(this->m_C) = 0; /*0x42196e*/
  this->m_8 = 0; /*0x421971*/
}



// ==== 0x00421980  _VectorClass_PAVAlphaShapeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::GetSize(_VectorClass_PAVAlphaShapeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x421980*/
    return 0; /*0x421988*/
  m_8 = this->m_8; /*0x42198e*/
  result = 0; /*0x421991*/
  if ( m_8 <= 0 ) /*0x421995*/
    return -1; /*0x4219ac*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42199b*/
  {
    if ( ++result >= m_8 ) /*0x4219aa*/
      return -1; /*0x4219aa*/
  }
  return result; /*0x42198a*/
}



// ==== 0x004219C0  _VectorClass_PAVAlphaShapeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AlphaShapeClass::GetCapacity(_VectorClass_PAVAlphaShapeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4219c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4219d5*/
  else
    return 0; /*0x4219c7*/
}



// ==== 0x004219E0  VectorClass_ptr_AlphaShapeClass::SetCapacity  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::SetCapacity(VectorClass_ptr_AlphaShapeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x4219ec*/
  {
    this->IsInitialized = 0; /*0x4219f2*/
    if ( a3 ) /*0x4219f8*/
      v4 = a3; /*0x421a0e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x421a0a*/
    this->IsInitialized = 1; /*0x421a12*/
    if ( !v4 ) /*0x421a16*/
      return 0; /*0x421a8a*/
    if ( this->Items ) /*0x421a18*/
    {
      Capacity = this->Capacity; /*0x421a1f*/
      if ( a2 < (int)Capacity ) /*0x421a24*/
        Capacity = (void *)a2; /*0x421a26*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x421a2c*/
        ++i; /*0x421a31*/
      if ( this->IsAllocated ) /*0x421a3e*/
      {
        __3_YAXPAX_Z(this->Items); /*0x421a49*/
        this->Items = 0; /*0x421a51*/
      }
    }
    this->Items = v4; /*0x421a5a*/
    this->Capacity = (void *)a2; /*0x421a62*/
    this->IsAllocated = a3 == 0; /*0x421a65*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_AlphaShapeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x421a6e*/
  }
  v7 = this->Capacity; /*0x421a71*/
  if ( (int)v7 < (int)this->Count ) /*0x421a79*/
    this->Count = v7; /*0x421a7b*/
  return 1; /*0x421a7e*/
}



// ==== 0x00421A90  VectorClass_ptr_AlphaShapeClass::FindItemIndex  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::FindItemIndex(VectorClass_ptr_AlphaShapeClass *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x421a90*/
  result = 0; /*0x421a93*/
  if ( (int)Count <= 0 ) /*0x421a98*/
    return -1; /*0x421aaf*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x421a9e*/
  {
    if ( ++result >= (int)Count ) /*0x421aad*/
      return -1; /*0x421aad*/
  }
  return result; /*0x421ab2*/
}



// ==== 0x00421AC0  _VectorClass_PAVAlphaShapeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_AlphaShapeClass::QueryInterface(_VectorClass_PAVAlphaShapeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x421ac3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AlphaShapeClass *>::`vftable'; /*0x421ac6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x421ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x421ad8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x421ae0*/
  }
  BYTE1(this->m_C) = 0; /*0x421aeb*/
  this->m_8 = 0; /*0x421af1*/
  if ( (a2 & 1) != 0 ) /*0x421af8*/
    __3_YAXPAX_Z(this); /*0x421afb*/
  return this->__pad_0; /*0x421b05*/
}



// ==== 0x00421B10  VectorClass_ptr_AlphaShapeClass::loc_421B10  this=VectorClass_ptr_AlphaShapeClass  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_AlphaShapeClass::loc_421B10(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x421b13*/
  *Block = &g_ptr_7E3258; /*0x421b16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x421b20*/
  {
    __3_YAXPAX_Z(v3); /*0x421b28*/
    *(Block + 1) = 0; /*0x421b30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x421b3b*/
  *(Block + 2) = 0; /*0x421b41*/
  if ( (a2 & 1) != 0 ) /*0x421b48*/
    __3_YAXPAX_Z(Block); /*0x421b4b*/
  return Block; /*0x421b55*/
}


// ==== 0x00421B60  ClipRectIntersection  this=IUnknown  sig=csp ====
_DWORD *__fastcall Rect_ClipIntersection(_DWORD *a1, int *a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // ecx
  int v10; // ebp
  int v11; // edx
  int v12; // ebp
  int v13; // ecx
  int v14; // esi
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+20h] [ebp-8h]
  int v17; // [esp+24h] [ebp-4h]

  result = a1; /*0x421b63*/
  v6 = *a3; /*0x421b6f*/
  v7 = a3[1]; /*0x421b71*/
  v16 = a3[2]; /*0x421b77*/
  v17 = a3[3]; /*0x421b7e*/
  v8 = a2[2]; /*0x421b82*/
  if ( v8 <= 0 ) /*0x421b87*/
    goto LABEL_23; /*0x421b87*/
  v15 = a2[3]; /*0x421b92*/
  if ( v15 <= 0 || a3[2] <= 0 || a3[3] <= 0 ) /*0x421bac*/
    goto LABEL_23; /*0x421bac*/
  v9 = *a2; /*0x421bb2*/
  if ( v6 < *a2 ) /*0x421bb6*/
  {
    v10 = v6 - v9 + v16; /*0x421bbe*/
    v6 = *a2; /*0x421bc0*/
    v16 = v10; /*0x421bc2*/
  }
  if ( v16 < 1 ) /*0x421bcb*/
    goto LABEL_23; /*0x421bcb*/
  v11 = a2[1]; /*0x421bd1*/
  if ( v7 < v11 ) /*0x421bda*/
  {
    v12 = v7 - v11 + v17; /*0x421be2*/
    v7 = v11; /*0x421be4*/
    v17 = v12; /*0x421be6*/
  }
  if ( v17 < 1 ) /*0x421bef*/
    goto LABEL_23; /*0x421bef*/
  v13 = v6 + v16 <= v9 + v8 ? v16 : v8 + v9 - v6;
  if ( v13 < 1 ) /*0x421c0b*/
    goto LABEL_23; /*0x421c0b*/
  v14 = v17; /*0x421c17*/
  if ( v17 + v7 > v15 + v11 ) /*0x421c20*/
    v14 = v15 + v11 - v7; /*0x421c24*/
  if ( v14 < 1 ) /*0x421c29*/
  {
LABEL_23:
    *result = 0; /*0x421c6e*/
    result[1] = 0; /*0x421c72*/
    result[2] = 0; /*0x421c75*/
    result[3] = 0; /*0x421c78*/
  }
  else
  {
    if ( a4 ) /*0x421c31*/
      *a4 += *a3 - v6; /*0x421c3c*/
    if ( a5 ) /*0x421c44*/
      *a5 += a3[1] - v7; /*0x421c4f*/
    *result = v6; /*0x421c53*/
    result[1] = v7; /*0x421c55*/
    result[2] = v13; /*0x421c59*/
    result[3] = v14; /*0x421c5c*/
  }
  return result; /*0x421c58*/
}



// ==== 0x00421C90  sub_421C90  this=-  sig=ida-proto ====
int sub_421C90()
{
  dword_89A140 = 0; /*0x421c92*/
  dword_89A144 = 0; /*0x421c97*/
  dword_89A148 = 0; /*0x421c9c*/
  dword_89A14C = 0; /*0x421ca1*/
  return 0; /*0x421ca6*/
}



// ==== 0x00421CB0  sub_421CB0  this=-  sig=ida-proto ====
void sub_421CB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x421cbc*/
  dbl_89A158 = Math::Sqrt(v0 + v0); /*0x421cce*/
}



// ==== 0x00421CE0  sub_421CE0  this=-  sig=ida-proto ====
void sub_421CE0()
{
  dbl_89A1B8 = dbl_89A158 / 60.0; /*0x421cec*/
}



// ==== 0x00421D00  sub_421D00  this=-  sig=ida-proto ====
void sub_421D00()
{
  dbl_89A1A0 = 1.0 / dbl_89A1B8; /*0x421d0c*/
}



// ==== 0x00421D20  sub_421D20  this=-  sig=ida-proto ====
void sub_421D20()
{
  dbl_89A198 = 0.0174532925199433 * 45.0; /*0x421d2c*/
}



// ==== 0x00421D40  sub_421D40  this=-  sig=ida-proto ====
void sub_421D40()
{
  dbl_89A168 = 0.0174532925199433 * 60.0; /*0x421d4c*/
}



// ==== 0x00421D60  sub_421D60  this=-  sig=ida-proto ====
void sub_421D60()
{
  dbl_89A138 = 0.0174532925199433 * 90.0; /*0x421d6c*/
}



// ==== 0x00421D80  sub_421D80  this=-  sig=ida-proto ====
__int64 sub_421D80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89A138 - dbl_89A168); /*0x421d92*/
  result = Math::RoundToInt(v0 * dbl_89A158 * 0.5); /*0x421da6*/
  Map_CellHeight = result; /*0x421dab*/
  return result; /*0x421db0*/
}



// ==== 0x00421DC0  sub_421DC0  this=-  sig=ida-proto ====
void sub_421DC0()
{
  dbl_89A170 = Math::ArcTan((double)Map_CellHeight * 0.00390625); /*0x421dd7*/
}



// ==== 0x00421DF0  sub_421DF0  this=-  sig=ida-proto ====
void sub_421DF0()
{
  dbl_89A188 = Math::ArcTan((double)(2 * Map_CellHeight) / dbl_89A158); /*0x421e12*/
}



// ==== 0x00421E20  sub_421E20  this=-  sig=ida-proto ====
__int64 sub_421E20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * Map_CellHeight) + 0.5); /*0x421e3b*/
  Map_MaxHeight = result; /*0x421e40*/
  return result; /*0x421e46*/
}



// ==== 0x00421E50  sub_421E50  this=-  sig=ida-proto ====
int sub_421E50()
{
  dword_89A150 = 0; /*0x421e52*/
  return 0; /*0x421e5e*/
}



// ==== 0x00421E60  sub_421E60  this=-  sig=ida-proto ====
int sub_421E60()
{
  Map_InvalidCoord_X = 0; /*0x421e62*/
  Map_InvalidCoord_Y = 0; /*0x421e67*/
  Map_InvalidCoord_Z = 0; /*0x421e6c*/
  return 0; /*0x421e71*/
}



// ==== 0x00421E80  sub_421E80  this=-  sig=ida-proto ====
int sub_421E80()
{
  dword_89A1B0 = 0; /*0x421e85*/
  dword_89A1A8 = 128; /*0x421e8f*/
  dword_89A1AC = 128; /*0x421e94*/
  return 128; /*0x421e99*/
}



// ==== 0x00421EA0  AnimClass::ctor  this=AnimClass  sig=csp ====
void **__thiscall AnimClass::ctor(AnimClass *this, void *a2, int *a3, void *a4, int a5, void *a6, void *a7, char a8)
{
  wchar_t *v9; // eax
  int v10; // eax
  int v11; // eax
  int AnimClass_field_0xC8; // eax
  int AnimClass_field_0xCC; // ecx
  int v14; // eax
  _DWORD *v15; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // edx
  char *ProductionTimeMult; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  double v28; // st7
  int v29; // eax
  double v30; // st7
  double v31; // st7
  float v32; // eax
  float v33; // eax
  float v34; // eax
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // eax
  int *v38; // eax
  int v39; // edx
  _DWORD *v40; // edi
  _DWORD *v41; // eax
  int v42; // ecx
  int v43; // edx
  int v44; // eax
  int *v45; // eax
  int v46; // ebx
  int v47; // eax
  int v48; // edi
  int v49; // eax
  double v50; // st7
  int v51; // eax
  double v52; // st6
  char v53; // cl
  char v54; // al
  int v55; // [esp+Ch] [ebp-54h]
  float v56; // [esp+Ch] [ebp-54h]
  int v57; // [esp+Ch] [ebp-54h]
  int v58; // [esp+10h] [ebp-50h]
  _DWORD *Coords; // [esp+10h] [ebp-50h]
  int v60; // [esp+10h] [ebp-50h]
  float v61; // [esp+10h] [ebp-50h]
  int v62; // [esp+14h] [ebp-4Ch]
  float v63; // [esp+18h] [ebp-48h] BYREF
  float v64; // [esp+1Ch] [ebp-44h]
  float v65; // [esp+20h] [ebp-40h]
  int vfptr; // [esp+24h] [ebp-3Ch] BYREF
  int v67; // [esp+28h] [ebp-38h]
  int v68; // [esp+2Ch] [ebp-34h]
  float v69; // [esp+30h] [ebp-30h] BYREF
  float v70; // [esp+34h] [ebp-2Ch]
  float v71; // [esp+38h] [ebp-28h]
  CoordStruct v72; // [esp+3Ch] [ebp-24h] BYREF
  int v73; // [esp+40h] [ebp-20h]
  CoordStruct out; // [esp+48h] [ebp-18h] BYREF
  CoordStruct v75; // [esp+54h] [ebp-Ch] BYREF

  ObjectClass::ctor((ObjectClass *)this); /*0x421eae*/
  this->AnimClass_field_0xAC = 0; /*0x421eb8*/
  this->__pad_B0[0] = 0; /*0x421ebe*/
  v9 = dword_A8ED84; /*0x421ec4*/
  this->AnimClass_field_0xBC = 0; /*0x421ec9*/
  this->AnimClass_field_0xB4 = (int)v9; /*0x421ecf*/
  this->AnimClass_field_0xC0 = 0; /*0x421ed5*/
  *(_DWORD *)this->__pad_C4 = 1; /*0x421edb*/
  this->AnimClass_field_0xC8 = (int)a2; /*0x421ee5*/
  this->AnimClass_field_0xCC = 0; /*0x421eee*/
  this->AnimClass_field_0xD0 = -1; /*0x421ef4*/
  this->AnimClass_field_0xD4 = 0; /*0x421efa*/
  *(_DWORD *)this->__pad_D8 = -1; /*0x421f00*/
  this->AnimClass_field_0xFC = 1000; /*0x421f06*/
  this->AnimClass_field_0x100 = 0; /*0x421f10*/
  this->AnimClass_field_0x104 = 0; /*0x421f16*/
  this->AnimClass_field_0x108 = Map_InvalidCoord_X; /*0x421f32*/
  *(_DWORD *)this->__pad_10C = Map_InvalidCoord_Y; /*0x421f3c*/
  v10 = Map_InvalidCoord_Z; /*0x421f3f*/
  this->__pad_118[0] = 0; /*0x421f44*/
  this->__pad_118[1] = 0; /*0x421f4a*/
  *(_DWORD *)&this->__pad_10C[4] = v10; /*0x421f50*/
  this->AnimClass_field_0x114 = 0; /*0x421f53*/
  this->__pad_118[2] = 0; /*0x421f59*/
  this->__pad_118[3] = 0; /*0x421f5f*/
  this->AnimClass_field_0x11C = 0; /*0x421f65*/
  this->__pad_120[0] = 0; /*0x421f6b*/
  *(_DWORD *)&this->__pad_120[8] = 0; /*0x421f71*/
  *(_DWORD *)&this->__pad_120[16] = 0; /*0x421f73*/
  *(_DWORD *)&this->__pad_120[24] = 0; /*0x421f76*/
  *(_DWORD *)&this->__pad_120[12] = 0; /*0x421f7d*/
  *(_DWORD *)&this->__pad_120[20] = 0; /*0x421f80*/
  *(_DWORD *)&this->__pad_120[28] = 0; /*0x421f83*/
  Int4::Set((Int4 *)&this->__pad_120[56], 0, 0, 0, 1065353216); /*0x421f86*/
  Int4::Set((Int4 *)&this->__pad_120[72], 0, 0, 0, 1065353216); /*0x421f96*/
  this->AnimClass_field_0x188 = 0; /*0x421fa4*/
  this->__pad_178[0] = 0; /*0x421faa*/
  this->__pad_178[1] = 0; /*0x421fb0*/
  this->AnimClass_field_0x17C = 0; /*0x421fb6*/
  this->AnimClass_field_0x180 = 0; /*0x421fbc*/
  this->AnimClass_field_0x184 = (int)a4; /*0x421fc2*/
  *(_DWORD *)this->__pad_18C = 1072693248; /*0x421fc8*/
  this->AnimClass_field_0x190 = (int)a6; /*0x421fd2*/
  this->__pad_194[0] = 0; /*0x421fd8*/
  this->__pad_194[1] = 1; /*0x421fde*/
  this->__pad_194[2] = 0; /*0x421fe5*/
  this->__pad_194[3] = 0; /*0x421feb*/
  this->__pad_194[4] = 0; /*0x421ff1*/
  this->__pad_194[5] = 0; /*0x421ff7*/
  this->__pad_194[6] = 0; /*0x421ffd*/
  this->__pad_194[7] = 0; /*0x422003*/
  this->__pad_194[8] = 1; /*0x422009*/
  this->__pad_194[9] = 0; /*0x422010*/
  this->__pad_194[10] = 0; /*0x422016*/
  this->AnimClass_field_0x0 = (int)&AnimClass::`vftable'; /*0x42201c*/
  this->AnimClass_field_0x4 = (int)&AnimClass::`vftable'; /*0x422022*/
  this->AnimClass_field_0x8 = (int)&AnimClass::`vftable'; /*0x422028*/
  *(_DWORD *)this->__pad_C = &off_7E3328; /*0x422030*/
  this->__pad_D8[4] = 0; /*0x422037*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->AnimClass_field_0x4); /*0x42203d*/
  AudioController::Init((AudioController *)&this->AnimClass_field_0x1A0); /*0x422048*/
  AudioController::Init((AudioController *)&this->AnimClass_field_0x1B4); /*0x422053*/
  if ( dword_A8E9B8 < dword_A8E9B0 /*0x42208b*/
    || (byte_A8E9B5 || !dword_A8E9B0)
    && dword_A8E9BC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E9A8 + 8))(
         &dword_A8E9A8,
         dword_A8E9BC + dword_A8E9B0,
         0) )
  {
    v11 = dword_A8E9B8++; /*0x422098*/
    *((_DWORD *)dword_A8E9AC + v11) = this; /*0x4220a7*/
  }
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x4220aa*/
  this->__pad_7C[20] = 1; /*0x4220b0*/
  if ( AnimClass_field_0xC8 ) /*0x4220b9*/
  {
    this->AnimClass_field_0x104 = *(_DWORD *)(AnimClass_field_0xC8 + 832); /*0x422137*/
    v17 = (_DWORD *)this->AnimClass_field_0xC8; /*0x42213d*/
    if ( v17[176] == -1 ) /*0x42214a*/
    {
      *(_DWORD *)(this->AnimClass_field_0xC8 + 704) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v17 + 156))(v17) /*0x42215e*/
                                                                 + 6);
      v18 = this->AnimClass_field_0xC8; /*0x422164*/
      if ( *(_BYTE *)(v18 + 882) ) /*0x42216a*/
        *(int *)(v18 + 704) /= 2; /*0x42217d*/
    }
    v19 = this->AnimClass_field_0xC8; /*0x422183*/
    if ( *(_DWORD *)(v19 + 700) == -1 ) /*0x422190*/
      *(_DWORD *)(v19 + 700) = *(_DWORD *)(v19 + 704); /*0x422198*/
    if ( a7 ) /*0x4221a3*/
      this->AnimClass_field_0x100 = (int)a7; /*0x4221a5*/
    else
      this->AnimClass_field_0x100 = *(_DWORD *)(this->AnimClass_field_0xC8 + 840); /*0x4221b9*/
    v20 = (_DWORD *)this->AnimClass_field_0xC8; /*0x4221bf*/
    v21 = v20[185]; /*0x4221c5*/
    ProductionTimeMult = (char *)v20[172]; /*0x4221cb*/
    if ( v21 || v20[186] ) /*0x4221d5*/
    {
      v23 = v20[186]; /*0x4221dd*/
      if ( v21 <= v23 ) /*0x4221e5*/
        ProductionTimeMult = (char *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v21, v23); /*0x4221f5*/
    }
    if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 866) ) /*0x422200*/
      ProductionTimeMult = Rules::GetProductionTimeMult((Rules *)&dword_A8EB60, (int)ProductionTimeMult); /*0x42220e*/
    this->AnimClass_field_0xB4 = (int)dword_A8ED84; /*0x42221f*/
    this->AnimClass_field_0xB8 = v73; /*0x422241*/
    this->AnimClass_field_0xBC = (int)ProductionTimeMult; /*0x422244*/
    this->AnimClass_field_0xC0 = (int)ProductionTimeMult; /*0x422247*/
    v24 = this->AnimClass_field_0xC8; /*0x42224d*/
    this->AnimClass_field_0xAC = 0; /*0x422253*/
    v25 = *(_DWORD *)(v24 + 868); /*0x422259*/
    if ( v25 == 3 || v25 == 4 ) /*0x422267*/
      ObjectClass::SetAnim((ObjectClass *)this, dword_8871E0->GDIWallDefense[1]); /*0x422281*/
    else
      ObjectClass::SetZ((IUnknown *)this); /*0x42226c*/
    if ( a8 ) /*0x422289*/
      this->__pad_120[0] = 1; /*0x42228b*/
    v26 = this->AnimClass_field_0xC8; /*0x422292*/
    if ( *(_BYTE *)(v26 + 881) || this->__pad_120[0] ) /*0x4222a0*/
    {
      this->AnimClass_field_0xAC = *(_DWORD *)(v26 + 700) - 1; /*0x4222af*/
      *(_DWORD *)this->__pad_C4 = -*(_DWORD *)this->__pad_C4; /*0x4222bd*/
    }
    v27 = this->AnimClass_field_0xC8; /*0x4222c3*/
    if ( *(_BYTE *)(v27 + 858) || *(_BYTE *)(v27 + 854) ) /*0x4222d1*/
    {
      this->__pad_194[0] = 1; /*0x4222ea*/
      if ( *(_BYTE *)(v27 + 854) ) /*0x4222f1*/
      {
        v55 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x422310*/
        v58 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x422324*/
        v28 = *(double *)(this->AnimClass_field_0xC8 + 792); /*0x42232e*/
        LOWORD(v29) = Math::RoundToInt(v28); /*0x42233c*/
        v56 = (double)((int)abs32(v55) % v29) - *(double *)(this->AnimClass_field_0xC8 + 808); /*0x422375*/
        v63 = (double)((int)abs32(v58) % v29) - *(double *)(this->AnimClass_field_0xC8 + 808); /*0x422387*/
        v64 = v56; /*0x42238b*/
        v65 = v28; /*0x42238f*/
        v30 = -v56; /*0x422397*/
        if ( v63 < v30 ) /*0x4223a4*/
        {
          v63 = -v63; /*0x4223ac*/
          v64 = v30; /*0x4223b0*/
        }
        v31 = (double)(int)(70 - abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 20)); /*0x4223e6*/
        LOWORD(v32) = Math::RoundToInt(v31); /*0x4223f4*/
        v69 = v32; /*0x4223fc*/
        LOWORD(v33) = Math::RoundToInt(v31); /*0x42240b*/
        v70 = v33; /*0x422413*/
        LOWORD(v34) = Math::RoundToInt((double)a3[2] - v31 * v65); /*0x422422*/
        v71 = v34; /*0x422427*/
        ObjectClass::Deploy((ObjectClass *)this); /*0x422433*/
        if ( this->AnimClass_field_0xCC ) /*0x422438*/
        {
          Coords = (_DWORD *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422452*/
          v35 = (_DWORD *)(*(int (__thiscall **)(int, CoordStruct *))(*(_DWORD *)this->AnimClass_field_0xCC + 72))( /*0x42245d*/
                            this->AnimClass_field_0xCC,
                            &v75);
          v72.vfptr = (void *)(*v35 + *Coords); /*0x422468*/
          v36 = Coords[1] + v35[1]; /*0x422472*/
          v37 = Coords[2] + v35[2]; /*0x422475*/
          vfptr = (int)v72.vfptr; /*0x42247c*/
          v67 = v36; /*0x422480*/
        }
        else
        {
          v38 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x42248d*/
          vfptr = *v38; /*0x422494*/
          v67 = v38[1]; /*0x42249b*/
          v37 = v38[2]; /*0x42249f*/
        }
        v39 = this->AnimClass_field_0xC8; /*0x4224a2*/
        v68 = v37; /*0x4224ae*/
        AnimClass::InitRotation( /*0x4224d4*/
          (AnimClass *)&this->__pad_120[8],
          &vfptr,
          *(_DWORD *)(v39 + 784),
          *(_DWORD *)(v39 + 788),
          1610612736,
          1073112678,
          0,
          0,
          &v63,
          0.0);
      }
      else
      {
        ObjectClass::Deploy((ObjectClass *)this); /*0x4224e0*/
        if ( this->AnimClass_field_0xCC ) /*0x4224e5*/
        {
          v40 = (_DWORD *)ObjectClass::GetCoords((ObjectClass *)this); /*0x4224ff*/
          v41 = (_DWORD *)(*(int (__thiscall **)(int, CoordStruct *))(*(_DWORD *)this->AnimClass_field_0xCC + 72))( /*0x422508*/
                            this->AnimClass_field_0xCC,
                            &out);
          v42 = *v40 + *v41; /*0x422512*/
          v43 = v40[1] + v41[1]; /*0x42251a*/
          v44 = v40[2] + v41[2]; /*0x42251f*/
        }
        else
        {
          v45 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x42252a*/
          v42 = *v45; /*0x42252f*/
          v43 = v45[1]; /*0x422531*/
          v44 = v45[2]; /*0x422534*/
        }
        v67 = v43; /*0x422537*/
        vfptr = v42; /*0x422544*/
        v68 = v44 + 10; /*0x42254e*/
        v46 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x422557*/
        v60 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x42256f*/
        v47 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x422579*/
        v48 = this->AnimClass_field_0xC8; /*0x42257e*/
        v57 = v47; /*0x422584*/
        LOWORD(v49) = Math::RoundToInt(*(double *)(v48 + 808) + *(double *)(v48 + 808)); /*0x422590*/
        v62 = v49; /*0x42259e*/
        v50 = (double)((int)abs32(v60) % v49) - *(double *)(v48 + 808); /*0x4225b2*/
        LOWORD(v51) = Math::RoundToInt(v50); /*0x4225d0*/
        v61 = (double)((int)abs32(v46) % v51) + *(double *)(v48 + 792); /*0x4225f8*/
        v52 = (double)((int)abs32(v57) % v62) - *(double *)(v48 + 808); /*0x422621*/
        v71 = v61; /*0x422627*/
        v69 = v52; /*0x42262b*/
        v70 = v50; /*0x42262f*/
        AnimClass::InitRotation( /*0x422648*/
          (AnimClass *)&this->__pad_120[8],
          &vfptr,
          *(_DWORD *)(v48 + 784),
          *(_DWORD *)(v48 + 788),
          1610612736,
          1073112678,
          0,
          0,
          &v69,
          0.0);
      }
    }
    else
    {
      ObjectClass::Deploy((ObjectClass *)this); /*0x4222e0*/
    }
    if ( this->AnimClass_field_0xC8 == *(_DWORD *)&dword_8871E0->__pad_13BC[192] ) /*0x42265e*/
    {
      MapClass::RevealArea1( /*0x422689*/
        (MapClass *)&dword_87F7E8,
        a3,
        *(_DWORD *)&dword_8871E0->__pad_13BC[256] / 256,
        dword_A83D4C,
        0,
        0,
        0,
        1,
        0);
      MapClass::RevealArea1( /*0x4226ba*/
        (MapClass *)&dword_87F7E8,
        a3,
        *(_DWORD *)&dword_8871E0->__pad_13BC[256] / 256,
        dword_A83D4C,
        0,
        0,
        0,
        1,
        1);
    }
    v53 = a5; /*0x4226bf*/
    if ( a5 <= 1 ) /*0x4226c5*/
      v53 = 1; /*0x4226c7*/
    v54 = v53 * *(_BYTE *)(this->AnimClass_field_0xC8 + 708); /*0x4226d8*/
    this->__pad_194[1] = v54; /*0x4226dc*/
    if ( (unsigned __int8)v54 <= 1u ) /*0x4226e2*/
      v54 = 1; /*0x4226eb*/
    this->__pad_194[1] = v54; /*0x4226f0*/
    if ( !this->AnimClass_field_0x184 ) /*0x4226f6*/
      ProductionCompletionCallback((TechnoClass *)this); /*0x422702*/
    return (void **)this; /*0x422707*/
  }
  else
  {
    AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x4220bb*/
    if ( AnimClass_field_0xCC ) /*0x4220c3*/
      (*(void (__thiscall **)(int, AnimClass *))(*(_DWORD *)AnimClass_field_0xCC + 96))(AnimClass_field_0xCC, this); /*0x4220c8*/
    BuildingClass::AimTurret((BuildingClass *)this, 0); /*0x4220ce*/
    Mixer::ReleaseChannel((Mixer *)&this->AnimClass_field_0x1A0); /*0x4220d9*/
    if ( !this->__pad_194[4] ) /*0x4220de*/
    {
      v14 = this->AnimClass_field_0xC8; /*0x4220e6*/
      if ( v14 ) /*0x4220ee*/
      {
        if ( *(_DWORD *)(v14 + 764) != -1 ) /*0x4220f7*/
        {
          v15 = (_DWORD *)(*(int (__thiscall **)(AnimClass *, CoordStruct *))(this->AnimClass_field_0x0 + 72))( /*0x422109*/
                            this,
                            &v72);
          StartAudioControllerAt( /*0x42211a*/
            *(_DWORD *)(this->AnimClass_field_0xC8 + 764),
            v15,
            (int **)&this->AnimClass_field_0x1B4);
        }
      }
    }
    ObjectClass::Destroy((ObjectClass *)this); /*0x422121*/
    return (void **)this; /*0x422126*/
  }
}



// ==== 0x00422720  AnimClass::SimpleCtor  this=AnimClass  sig=csp ====
int __thiscall AnimClass::SimpleCtor(AnimClass *this)
{
  IUnknown *v2; // eax
  int v3; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x422724*/
  this->AnimClass_field_0xAC = 0; /*0x422730*/
  this->__pad_B0[0] = 0; /*0x422736*/
  v2 = *(IUnknown **)&stru_A8EB00.?[416]; /*0x42273c*/
  this->AnimClass_field_0xBC = 0; /*0x422741*/
  this->AnimClass_field_0xB4 = v2; /*0x422747*/
  this->AnimClass_field_0xC0 = 0; /*0x422750*/
  *(_DWORD *)this->__pad_C4 = 1; /*0x422756*/
  this->AnimClass_field_0xC8 = 0; /*0x422761*/
  this->AnimClass_field_0xCC = 0; /*0x422767*/
  this->AnimClass_field_0xD0[0] = -1; /*0x42276d*/
  this->AnimClass_field_0xD4 = 0; /*0x422773*/
  *(_DWORD *)this->__pad_D8 = -1; /*0x422779*/
  this->AnimClass_field_0xFC[0] = 1000; /*0x42277f*/
  this->AnimClass_field_0x100 = 0; /*0x422789*/
  this->AnimClass_field_0x104 = 0; /*0x42278f*/
  this->__pad_118[0] = 0; /*0x422795*/
  this->__pad_118[1] = 0; /*0x42279b*/
  this->__pad_118[2] = 0; /*0x4227a1*/
  this->__pad_118[3] = 0; /*0x4227a7*/
  this->AnimClass_field_0x11C = 0; /*0x4227ad*/
  this->__pad_120[0] = 0; /*0x4227b3*/
  *(_DWORD *)&this->__pad_120[8] = 0; /*0x4227ba*/
  *(_DWORD *)&this->__pad_120[16] = 0; /*0x4227c0*/
  *(_DWORD *)&this->__pad_120[24] = 0; /*0x4227c6*/
  *(_DWORD *)&this->__pad_120[12] = 0; /*0x4227d3*/
  *(_DWORD *)&this->__pad_120[20] = 0; /*0x4227d9*/
  *(_DWORD *)&this->__pad_120[28] = 0; /*0x4227df*/
  Int4::Set((Int4 *)&this->__pad_120[56], 0, 0, 0, 1065353216); /*0x4227e5*/
  Int4::Set((Int4 *)&this->__pad_120[72], 0, 0, 0, 1065353216); /*0x4227f8*/
  this->AnimClass_field_0x188 = 0; /*0x4227fd*/
  this->__pad_178[1] = 0; /*0x422803*/
  this->AnimClass_field_0x184 = 0; /*0x422809*/
  *(_DWORD *)this->__pad_18C = 0; /*0x42280f*/
  this->__pad_194[0] = 0; /*0x422815*/
  this->__pad_194[1] = 1; /*0x42281b*/
  this->__pad_194[2] = 0; /*0x422822*/
  this->__pad_194[3] = 0; /*0x422828*/
  this->__pad_194[7] = 0; /*0x42282e*/
  this->__pad_194[8] = 1; /*0x422834*/
  this->__pad_194[9] = 0; /*0x42283b*/
  this->__pad_194[10] = 0; /*0x422841*/
  this->AnimClass_field_0x0 = &AnimClass::`vftable'; /*0x422847*/
  this->AnimClass_field_0x4 = &AnimClass::`vftable'; /*0x42284d*/
  this->AnimClass_field_0x8 = &AnimClass::`vftable'; /*0x422854*/
  *(_DWORD *)this->__pad_C = &off_7E3328; /*0x42285b*/
  if ( dword_A8E9B8 < dword_A8E9B0 /*0x422896*/
    || (byte_A8E9B5 || !dword_A8E9B0)
    && dword_A8E9BC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E9A8 + 8))(
         &dword_A8E9A8,
         dword_A8E9B0 + dword_A8E9BC,
         0) )
  {
    v3 = dword_A8E9B8++; /*0x4228a3*/
    *((_DWORD *)dword_A8E9AC + v3) = this; /*0x4228b2*/
  }
  AudioController::Init((AudioController *)this->AnimClass_field_0x1A0); /*0x4228bb*/
  AudioController::Init((AudioController *)&this->AnimClass_field_0x1B4); /*0x4228c6*/
  this->__pad_7C[20] = 1; /*0x4228cb*/
  return (int)this; /*0x4228d4*/
}



// ==== 0x004228E0  AnimClass::Destruct  this=AnimClass  sig=csp ====
int __thiscall AnimClass::Destruct(AnimClass *this)
{
  _BYTE *AnimClass_field_0xCC; // ebp
  int v3; // ecx
  char *v4; // edx
  Coord *AnimClass_field_0xC8; // eax
  CellClass *v6; // eax
  int v7; // eax
  AnimClass *v8; // ecx
  int v9; // eax
  int v10; // eax
  AnimClass *v12; // [esp+10h] [ebp-10h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  this->AnimClass_field_0x0 = &AnimClass::`vftable'; /*0x4228eb*/
  this->AnimClass_field_0x4 = &AnimClass::`vftable'; /*0x4228f1*/
  this->AnimClass_field_0x8 = &AnimClass::`vftable'; /*0x4228f8*/
  *(_DWORD *)this->__pad_C = &off_7E3328; /*0x4228ff*/
  AbstractClass::AnnounceExpiredPointer(&this->AnimClass_field_0x0, 1); /*0x422906*/
  if ( byte_A8E9A0 ) /*0x422914*/
  {
    AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x42291a*/
    if ( AnimClass_field_0xCC ) /*0x422922*/
    {
      v3 = 0; /*0x42292a*/
      if ( dword_A8E9B8 > 0 ) /*0x42292e*/
      {
        v4 = (char *)dword_A8E9AC; /*0x422930*/
        do /*0x42294a*/
        {
          if ( *(AnimClass **)v4 != this && *(_BYTE **)(*(_DWORD *)v4 + 204) == AnimClass_field_0xCC ) /*0x422942*/
            break; /*0x422942*/
          ++v3; /*0x422944*/
          v4 += 4; /*0x422945*/
        }
        while ( v3 < dword_A8E9B8 ); /*0x42294a*/
      }
      if ( v3 == dword_A8E9B8 ) /*0x42294e*/
      {
        (*(void (__thiscall **)(void *))(*(_DWORD *)AnimClass_field_0xCC + 380))(this->AnimClass_field_0xCC); /*0x422955*/
        AnimClass_field_0xCC[132] = 0; /*0x42295b*/
      }
      this->AnimClass_field_0xCC = 0; /*0x422961*/
    }
    AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x422967*/
    if ( AnimClass_field_0xC8 && AnimClass_field_0xC8[2].__pad_C[201] ) /*0x422971*/
    {
      v13[0] = this->AnimClass_field_0x9C; /*0x422985*/
      v13[1] = *(_DWORD *)this->__pad_A0; /*0x422991*/
      v13[2] = this->AnimClass_field_0xA4; /*0x422998*/
      v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x4229a1*/
      v6->flags[0] &= ~0x20000u; /*0x4229b7*/
    }
    if ( (unsigned __int8)ObjectClass::Undeploy((ObjectClass *)this) ) /*0x4229bb*/
      RemoveTarget((int)this); /*0x4229ca*/
  }
  v12 = this; /*0x4229df*/
  v7 = (*(int (__thiscall **)(int *, AnimClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x4229e3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v12);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x4229f3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x4229f8*/
    for ( ; /*0x4229fe*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x422a06*/
    }
  }
  v8 = (AnimClass *)this->AnimClass_field_0xC8; /*0x422a18*/
  if ( v8 ) /*0x422a20*/
    AnimClass::FreeRenderBuffer(v8); /*0x422a22*/
  Mixer::ReleaseChannel((Mixer *)this->AnimClass_field_0x1A0); /*0x422a2f*/
  Mixer::ReleaseChannel((Mixer *)&this->AnimClass_field_0x1B4); /*0x422a3c*/
  AudioFileClass::Release((AudioFileClass *)this->AnimClass_field_0x1A0); /*0x422a43*/
  AudioFileClass::Release((AudioFileClass *)&this->AnimClass_field_0x1B4); /*0x422a4a*/
  this->AnimClass_field_0xCC = 0; /*0x422a52*/
  this->AnimClass_field_0xC8 = 0; /*0x422a59*/
  if ( AbstractClass::GetVtable3((AbstractClass *)&this->AnimClass_field_0x4) == -2 ) /*0x422a67*/
  {
    v12 = this; /*0x422a79*/
    v9 = (*((int (__thiscall **)(void **, AnimClass **))stru_A83D50.SuperClass_field_0xB0 + 4))( /*0x422a7d*/
           &stru_A83D50.SuperClass_field_0xB0,
           &v12);
    if ( v9 != -1 && v9 < *(int *)&stru_A83D50.__pad_B4[12] ) /*0x422a91*/
    {
      --*(_DWORD *)&stru_A83D50.__pad_B4[12]; /*0x422a96*/
      for ( ; /*0x422a9c*/
            v9 < *(int *)&stru_A83D50.__pad_B4[12];
            *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_B4 + 4 * v9 - 4) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_B4
                                                                                  + 4 * v9) )
      {
        ++v9; /*0x422aa4*/
      }
    }
  }
  else
  {
    v12 = this; /*0x422ad5*/
    v10 = (*(int (__thiscall **)(_DWORD *, AnimClass **))(dword_A8E9A8 + 16))(&dword_A8E9A8, &v12); /*0x422ad9*/
    if ( v10 != -1 && v10 < dword_A8E9B8 && v10 < --dword_A8E9B8 ) /*0x422af4*/
    {
      do /*0x422b0c*/
      {
        ++v10; /*0x422afc*/
        *((_DWORD *)dword_A8E9AC + v10 - 1) = *((_DWORD *)dword_A8E9AC + v10); /*0x422b00*/
      }
      while ( v10 < dword_A8E9B8 ); /*0x422b0c*/
    }
  }
  return ObjectClass::Dtor((ObjectClass *)this); /*0x422abd*/
}



// ==== 0x00422B20  GlobalArray::FindString  this=GlobalArray  sig=csp ====
int __thiscall GlobalArray::FindString(GlobalArray *this)
{
  int v2; // esi

  if ( !this ) /*0x422b26*/
    return -1; /*0x422b26*/
  if ( !_strcmpi((char *)this, g_Str__none_) ) /*0x422b2e*/
    return -1; /*0x422b2e*/
  v2 = 0; /*0x422b3f*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x422b43*/
    return -1; /*0x422b68*/
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v2) + 36), (char *)this) ) /*0x422b5c*/
  {
    if ( ++v2 >= FootClass_Array.?[0] ) /*0x422b66*/
      return -1; /*0x422b66*/
  }
  return v2; /*0x422b68*/
}



// ==== 0x00422B80  TerrainClass::ClearAnimationLinkFlags  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::ClearAnimationLinkFlags(TerrainClass *this)
{
  int i; // edx
  int v2; // eax

  if ( this ) /*0x422b82*/
  {
    for ( i = 0; i < dword_A8E9B8; ++i ) /*0x422b8d*/
    {
      v2 = *((_DWORD *)dword_A8E9AC + i); /*0x422b94*/
      if ( *(TerrainClass **)(v2 + 204) == this ) /*0x422b9d*/
        *(_BYTE *)(v2 + 405) = 0; /*0x422b9f*/
    }
  }
}



// ==== 0x00422BC0  AnimClass::SetAnimSpeed  this=AnimClass  sig=csp ====
int __thiscall AnimClass::SetAnimSpeed(AnimClass *this)
{
  return this->AnimClass_field_0x104 + ObjectClass::GetBoundingSize((ObjectClass *)this); /*0x422bce*/
}



// ==== 0x00422BE0  AnimClass::UpdateZAdjust  this=AnimClass  sig=csp ====
int *__thiscall AnimClass::UpdateZAdjust(AnimClass *this, int *a2)
{
  _DWORD *Coords; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int v8; // edx
  int v9; // edi
  int *v11; // edx
  CoordStruct v12; // [esp+14h] [ebp-Ch] BYREF

  if ( this->AnimClass_field_0xCC ) /*0x422be7*/
  {
    Coords = (_DWORD *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422c01*/
    v4 = (_DWORD *)(*(int (__thiscall **)(int, CoordStruct *))(*(_DWORD *)this->AnimClass_field_0xCC + 72))( /*0x422c0a*/
                     this->AnimClass_field_0xCC,
                     &v12);
    v5 = *Coords + *v4; /*0x422c14*/
    v6 = Coords[1]; /*0x422c16*/
    v7 = Coords[2]; /*0x422c19*/
    v8 = v4[1] + v6; /*0x422c1c*/
    v9 = v4[2]; /*0x422c1e*/
    *a2 = v5; /*0x422c29*/
    a2[1] = v8; /*0x422c2b*/
    a2[2] = v9 + v7; /*0x422c2e*/
    return a2; /*0x422c21*/
  }
  else
  {
    v11 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422c45*/
    *a2 = *v11; /*0x422c50*/
    a2[1] = v11[1]; /*0x422c55*/
    a2[2] = v11[2]; /*0x422c5c*/
    return a2; /*0x422c47*/
  }
}



// ==== 0x00422C70  AnimClass::CheckLayerFlags  this=AnimClass  sig=csp ====
char __thiscall AnimClass::CheckLayerFlags(AnimClass *this, int a2, int a3, int a4)
{
  if ( this->AnimClass_field_0x184 ) /*0x422c70*/
    return 0; /*0x422c7a*/
  else
    return ObjectClass::CalcDrawRect((ObjectClass *)this); /*0x422c8e*/
}



// ==== 0x00422CA0  AnimClass::Render  this=AnimClass  sig=csp ====
void __thiscall AnimClass::Render(AnimClass *this, int *a2, int *a3)
{
  IUnknown *AnimClass_field_0xB4; // edi
  CellStruct *AnimClass_field_0xC0; // ebx
  IUnknown *AnimClass_field_0xBC; // eax
  int v7; // edi
  int v8; // ecx
  __int16 v9; // bx
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  unsigned __int8 v15; // di
  int v16; // eax
  __int16 v17; // ax
  int v18; // edi
  int v19; // ebx
  Coord *AnimClass_field_0xC8; // eax
  Coord *v21; // eax
  int AnimClass_field_0x190; // ebx
  double v23; // st7
  double v24; // st6
  Coord *v25; // eax
  _DWORD *v26; // eax
  int v27; // ecx
  int v28; // eax
  char v29; // al
  _DWORD *v30; // eax
  int *v31; // edi
  Coord *v32; // ecx
  _DWORD *v33; // eax
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int (__thiscall **AnimClass_field_0x0)(AnimClass *); // eax
  int v38; // eax
  int v39; // eax
  char v40; // al
  float v41; // ebp
  _DWORD *v42; // eax
  CellClass *v43; // eax
  _DWORD *v44; // eax
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // edx
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  _DWORD *v60; // eax
  CellClass *v61; // eax
  Coord *v62; // eax
  _DWORD *FoundationSize; // eax
  int v64; // ecx
  int v65; // edi
  int (__thiscall **v66)(AnimClass *); // edx
  int v67; // ebp
  int v68; // eax
  int v69; // edi
  int v70; // eax
  int v71; // edi
  int (__thiscall **v72)(AnimClass *); // edx
  int v73; // eax
  int v74; // edx
  int v75; // eax
  int v76; // edx
  int v77; // eax
  int v78; // ebp
  int v79; // eax
  int v80; // [esp-20h] [ebp-130h]
  int v81; // [esp-20h] [ebp-130h]
  int v82; // [esp-18h] [ebp-128h]
  int v83; // [esp-18h] [ebp-128h]
  unsigned __int8 v84; // [esp+13h] [ebp-FDh]
  unsigned __int8 v85; // [esp+13h] [ebp-FDh]
  char v86; // [esp+13h] [ebp-FDh]
  int v87; // [esp+14h] [ebp-FCh]
  int v88; // [esp+14h] [ebp-FCh]
  int v89; // [esp+14h] [ebp-FCh]
  IUnknown *AnimClass_field_0xAC; // [esp+14h] [ebp-FCh]
  float v91; // [esp+14h] [ebp-FCh]
  float v92; // [esp+14h] [ebp-FCh]
  _DWORD *v93; // [esp+14h] [ebp-FCh]
  int v94; // [esp+14h] [ebp-FCh]
  int v95; // [esp+14h] [ebp-FCh]
  unsigned __int8 v96; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v97; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v98; // [esp+1Bh] [ebp-F5h]
  unsigned __int8 v99; // [esp+1Bh] [ebp-F5h]
  unsigned __int8 v100[4]; // [esp+1Ch] [ebp-F4h] BYREF
  __int16 v101[2]; // [esp+20h] [ebp-F0h] BYREF
  int v102; // [esp+24h] [ebp-ECh]
  int v103; // [esp+28h] [ebp-E8h]
  unsigned int v104; // [esp+2Ch] [ebp-E4h]
  int v105[2]; // [esp+30h] [ebp-E0h] BYREF
  int v106; // [esp+38h] [ebp-D8h]
  int v107; // [esp+3Ch] [ebp-D4h]
  int v108; // [esp+40h] [ebp-D0h] BYREF
  int v109; // [esp+44h] [ebp-CCh]
  ColorStruct v110; // [esp+50h] [ebp-C0h] BYREF
  ColorStruct v111; // [esp+B0h] [ebp-60h] BYREF

  if ( byte_8A0DF0 /*0x422ccb*/
    && g_ZBufferDescriptor
    && (unsigned __int8)ObjectClass::StepCleanup((ObjectClass *)this, &g_INI_Key_Civilian.__pad_16D[31]) )
  {
    AnimClass_field_0xB4 = this->AnimClass_field_0xB4; /*0x422cd8*/
    AnimClass_field_0xC0 = this->AnimClass_field_0xC0; /*0x422ce4*/
    AnimClass_field_0xBC = this->AnimClass_field_0xBC; /*0x422cea*/
    if ( AnimClass_field_0xB4 != (IUnknown *)-1 ) /*0x422cf3*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)AnimClass_field_0xB4 >= (int)AnimClass_field_0xBC ) /*0x422cff*/
        AnimClass_field_0xBC = 0; /*0x422d05*/
      else
        AnimClass_field_0xBC = (IUnknown *)((char *)AnimClass_field_0xBC /*0x422d01*/
                                          - (*(_DWORD *)&stru_A8EB00.?[416]
                                           - (_DWORD)AnimClass_field_0xB4));
    }
    v7 = (int)AnimClass_field_0xC0 /*0x422d12*/
       + (int)this->AnimClass_field_0xAC * (_DWORD)AnimClass_field_0xC0
       - (_DWORD)AnimClass_field_0xBC;
    v8 = (_DWORD)AnimClass_field_0xC0 * (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 123))(this); /*0x422d23*/
    v9 = v7 + 8; /*0x422d28*/
    v10 = *a2 + 2 * (v7 + 8); /*0x422d30*/
    *(_DWORD *)v101 = *a2 - 2 * (v7 + 8); /*0x422d3c*/
    v106 = v10; /*0x422d40*/
    v11 = a2[1]; /*0x422d47*/
    v107 = v7 + 8 + v11; /*0x422d4d*/
    v102 = v11 - (v7 + 8); /*0x422d51*/
    v104 = (v8 - v7) << 8; /*0x422d5e*/
    *(_DWORD *)v100 = (int)v104 / v8; /*0x422d67*/
    if ( (int)v104 / v8 >= 0 ) /*0x422d6b*/
    {
      if ( (int)v104 / v8 > 255 ) /*0x422d7c*/
        *(_DWORD *)v100 = 255; /*0x422d7e*/
    }
    else
    {
      *(float *)v100 = 0.0; /*0x422d6d*/
    }
    if ( v7 >= v8 / 3 ) /*0x422d9a*/
      v12 = ((v8 - v7) << 8) / (v8 - v8 / 3); /*0x422db7*/
    else
      v12 = (v7 << 8) / (v8 / 3); /*0x422da2*/
    if ( v12 >= 0 ) /*0x422dbb*/
    {
      if ( v12 > 255 ) /*0x422dc6*/
        v12 = 255; /*0x422dc8*/
    }
    else
    {
      v12 = 0; /*0x422dbd*/
    }
    v13 = 2 * v12 / 3; /*0x422de3*/
    v87 = 2 * v8 / 3; /*0x422df3*/
    if ( v7 >= v87 ) /*0x422df7*/
      v14 = (int)v104 / (v8 - v87); /*0x422e10*/
    else
      v14 = (v7 << 8) / v87; /*0x422dff*/
    v15 = v14; /*0x422e12*/
    if ( v14 >= 0 ) /*0x422e16*/
    {
      if ( v14 > 255 ) /*0x422e22*/
        v15 = -1; /*0x422e24*/
    }
    else
    {
      v15 = 0; /*0x422e18*/
    }
    v16 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x422e2d*/
    v17 = LOWORD(g_ZBufferDescriptor->Stream_field_04) /*0x422e87*/
        + LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
        - *((_WORD *)a2 + 2)
        - LOWORD(DSurface_ViewBounds.field_4)
        + this->AnimClass_field_0x100
        + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v16)
        - 2;
    *(float *)&v104 = (double)(unsigned __int16)(v17 + v9) * 0.000015259022; /*0x422eab*/
    *(float *)&v103 = (double)(unsigned __int16)(v17 - v9) * 0.000015259022; /*0x422eb9*/
    ColorStruct::SetRGB(&v110, v100[0], v13, v15); /*0x422ebd*/
    ColorStruct::SetRGB(&v111, v100[0], v13, v15); /*0x422ecc*/
    *(float *)&v88 = (float)v102; /*0x422ede*/
    v18 = v88; /*0x422ee6*/
    *(float *)v100 = (float)*(int *)v101; /*0x422eef*/
    v19 = *(_DWORD *)v100; /*0x422ef3*/
    Tactical::SetCellTransform(v110.__pad_0, 0, *(int *)v100, v88, v104, 0, 0); /*0x422efa*/
    *(float *)v100 = (float)v107; /*0x422f0f*/
    Tactical::SetCellTransform(v110.__pad_0, 1, v19, *(int *)v100, v103, 0, 1065353216); /*0x422f1f*/
    *(float *)&v89 = (float)v106; /*0x422f37*/
    Tactical::SetCellTransform(v110.__pad_0, 2, v89, *(int *)v100, v103, 1065353216, 1065353216); /*0x422f47*/
    Tactical::SetCellTransform(v111.__pad_0, 0, v19, v18, v104, 0, 0); /*0x422f5c*/
    Tactical::SetCellTransform(v111.__pad_0, 1, v89, *(int *)v100, v103, 1065353216, 1065353216); /*0x422f7f*/
    Tactical::SetCellTransform(v111.__pad_0, 2, v89, v18, v104, 1065353216, 0); /*0x422f97*/
    StructTable::Append(dword_8A0E10, &v110); /*0x422fa7*/
    StructTable::Append(dword_8A0E10, &v111); /*0x422fba*/
    return; /*0x422fc9*/
  }
  if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[282] < (unsigned int)PingPongBuffer::GetWriteOffset() /*0x422fe6*/
    && *(int *)&this->AnimClass_field_0xC8[2].__pad_C[72] > 1 )
  {
    return; /*0x422fe6*/
  }
  if ( this->__pad_194[9] ) /*0x422fec*/
    return; /*0x422fec*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x422ffa*/
  if ( *(_DWORD *)&AnimClass_field_0xC8[2].__pad_C[72] > stru_A8EB00.ObjectTypeClass[30] /*0x42301e*/
    || this->__pad_194[5] && AnimClass_field_0xC8[2].__pad_C[232] )
  {
    return; /*0x42301e*/
  }
  *(float *)&v103 = COERCE_FLOAT((*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 27))(this)); /*0x423035*/
  if ( *(float *)&v103 == 0.0 ) /*0x423039*/
    return; /*0x423039*/
  v21 = this->AnimClass_field_0xC8; /*0x42303f*/
  AnimClass_field_0x190 = this->AnimClass_field_0x190; /*0x42304b*/
  AnimClass_field_0xAC = this->AnimClass_field_0xAC; /*0x423051*/
  v104 = (unsigned int)AnimClass_field_0xAC + *(_DWORD *)&v21[2].__pad_C[40]; /*0x42305d*/
  if ( this->__pad_118[1] ) /*0x423061*/
  {
    if ( v21[2].__pad_C[220] ) /*0x42306b*/
      AnimClass_field_0x190 |= 6u; /*0x423075*/
    else
      AnimClass_field_0x190 |= 4u; /*0x42307a*/
  }
  if ( *(_DWORD *)&v21[2].__pad_C[76] <= stru_A8EB00.ObjectTypeClass[30] ) /*0x42308b*/
  {
    if ( !v21[2].__pad_C[222] ) /*0x423095*/
    {
      v28 = *(_DWORD *)&v21[2].__pad_C[96]; /*0x423183*/
      if ( v28 <= 0 ) /*0x42318b*/
      {
        v29 = this->__pad_178[0]; /*0x4231c1*/
        if ( !v29 ) /*0x4231c9*/
          goto LABEL_47; /*0x4231c9*/
        if ( v29 > 15 ) /*0x4231d1*/
          return; /*0x4231d1*/
        if ( v29 > 10 ) /*0x4231d9*/
        {
          AnimClass_field_0x190 |= 4u; /*0x4231db*/
          goto LABEL_47; /*0x4231de*/
        }
        if ( v29 > 5 ) /*0x4231e5*/
        {
          AnimClass_field_0x190 |= 4u; /*0x4231eb*/
          goto LABEL_47; /*0x4231ee*/
        }
      }
      else
      {
        if ( this->__pad_178[0] >= 15 ) /*0x423194*/
          return; /*0x423194*/
        if ( v28 != 25 ) /*0x42319d*/
        {
          if ( v28 == 50 ) /*0x4231a6*/
          {
            AnimClass_field_0x190 |= 4u; /*0x4231a8*/
          }
          else if ( v28 == 75 ) /*0x4231b3*/
          {
            AnimClass_field_0x190 |= 6u; /*0x4231b9*/
          }
          goto LABEL_47; /*0x4231ab*/
        }
      }
LABEL_46:
      AnimClass_field_0x190 |= 2u; /*0x4230fb*/
      goto LABEL_47; /*0x4230fb*/
    }
    if ( this->__pad_178[0] >= 15 ) /*0x4230a2*/
      return; /*0x4230a2*/
    v23 = (double)(int)AnimClass_field_0xAC; /*0x4230a8*/
    v24 = (double)*(int *)&v21[2].__pad_C[52]; /*0x4230ac*/
    if ( v23 > v24 * 0.6 ) /*0x4230c3*/
    {
      AnimClass_field_0x190 |= 6u; /*0x4230c9*/
      goto LABEL_47; /*0x4230cc*/
    }
    if ( v23 > v24 * 0.4 ) /*0x4230df*/
    {
      AnimClass_field_0x190 |= 4u; /*0x4230e5*/
      goto LABEL_47; /*0x4230e8*/
    }
    if ( v23 > v24 * 0.2 ) /*0x4230f9*/
      goto LABEL_46; /*0x4230f9*/
  }
LABEL_47:
  if ( (AnimClass_field_0x190 & 1) == 0 ) /*0x423101*/
    BYTE1(AnimClass_field_0x190) |= 8u; /*0x423103*/
  *(_DWORD *)v101 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 114))(this); /*0x423110*/
  v25 = this->AnimClass_field_0xC8; /*0x423114*/
  v106 = 1000; /*0x42311a*/
  if ( v25[2].__pad_C[201] ) /*0x423122*/
  {
    v105[0] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4]) /*0x42314b*/
                        + 780);
    if ( v25[2].__pad_C[209] ) /*0x42314f*/
      goto LABEL_78; /*0x423157*/
    v26 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x423166*/
    v27 = *(__int16 *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v26)->CellClass_field_10C; /*0x423177*/
    goto LABEL_77; /*0x42317e*/
  }
  if ( this->__pad_194[2] ) /*0x4231f3*/
  {
    v30 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x42320a*/
    LOWORD(v91) = *v30 / 256; /*0x423220*/
    HIWORD(v91) = v30[1] / 256; /*0x423238*/
    *(float *)v100 = v91; /*0x423241*/
    v31 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v100); /*0x423250*/
    if ( !v31[13] ) /*0x423252*/
      TacticalClass::SetView(v31, 0, 0x10000, 0, 1000, 1000, 1000); /*0x423273*/
    v32 = this->AnimClass_field_0xC8; /*0x42327b*/
    v105[0] = v31[13]; /*0x423281*/
    if ( !v32[2].__pad_C[209] ) /*0x423285*/
      v106 = *((__int16 *)v31 + 134); /*0x42329a*/
  }
  else if ( this->AnimClass_field_0xD4 ) /*0x4232a3*/
  {
    v105[0] = (int)this->AnimClass_field_0xD4; /*0x4232ad*/
    if ( !v25[2].__pad_C[209] ) /*0x4232b1*/
      v106 = this->AnimClass_field_0xFC[0]; /*0x4232c5*/
  }
  else
  {
    v105[0] = *(_DWORD *)&stru_87F5F0.__pad_58[120]; /*0x4232d4*/
    if ( v25[2].__pad_C[213] ) /*0x4232d8*/
      v105[0] = *(_DWORD *)(**(_DWORD **)&stru_B054D0.m_1[3] + 780); /*0x4232f0*/
    if ( !v25[2].__pad_C[209] ) /*0x4232f4*/
    {
      v33 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x423307*/
      LOWORD(v92) = *v33 / 256; /*0x42331d*/
      HIWORD(v92) = v33[1] / 256; /*0x423336*/
      *(float *)v100 = v92; /*0x423343*/
      v27 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v100) + 133); /*0x42334d*/
LABEL_77:
      v106 = v27; /*0x423354*/
    }
  }
LABEL_78:
  if ( this->__pad_194[0] ) /*0x423358*/
  {
    v34 = ZCoordToScreenY(*(int *)v101); /*0x423373*/
    v35 = *a2; /*0x423384*/
    v36 = *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184] + v34 + a2[1]; /*0x42338b*/
    AnimClass_field_0x0 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x42339a*/
    v102 = v36; /*0x42339c*/
    *(_DWORD *)v101 = v35; /*0x4233a2*/
    v38 = AnimClass_field_0x0[116](this); /*0x4233a6*/
    v39 = ZCoordToScreenY(v38); /*0x4233ae*/
    DrawToSurfaceSHP( /*0x4233e9*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      a3,
      9729,
      0,
      *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184] - v39,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  v40 = this->__pad_118[0]; /*0x4233ee*/
  v41 = 0.0; /*0x4233f4*/
  *(float *)v100 = 0.0; /*0x4233f8*/
  if ( !v40 ) /*0x4233fc*/
    goto LABEL_99; /*0x4233fc*/
  v42 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v108); /*0x42340b*/
  v43 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v42); /*0x423414*/
  v44 = Cell::IsBridge((Cell *)v43); /*0x42341b*/
  v93 = v44; /*0x423422*/
  if ( !v44 ) /*0x423426*/
    goto LABEL_99; /*0x423426*/
  if ( v44[165] ) /*0x42342e*/
  {
    v45 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6308); /*0x423442*/
    v46 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v45; /*0x423448*/
    *(_DWORD *)v101 = v45 + v46; /*0x423454*/
    v98 = *(_BYTE *)(v45 + v46 + 6260); /*0x42345e*/
    v96 = *(_BYTE *)(v45 + v46 + 4174 + 2087); /*0x42346d*/
    v84 = *(_BYTE *)(v45 + v46 + 6262); /*0x423477*/
    v47 = DDraw::GetStatus() - 1; /*0x423480*/
    if ( v47 ) /*0x423481*/
    {
      v50 = v47 - 1; /*0x423483*/
      if ( v50 ) /*0x423484*/
      {
        LOBYTE(v50) = v96; /*0x4234ce*/
        goto LABEL_89; /*0x4234ce*/
      }
      LOWORD(v41) = v98; /*0x423486*/
      v50 = v96; /*0x42348c*/
      LOWORD(v49) = v84; /*0x423493*/
      LOWORD(v48) = v96; /*0x42349c*/
      LODWORD(v41) = v49 | (32 * (v48 | (LODWORD(v41) << 6))); /*0x4234a3*/
    }
    else
    {
      v50 = v96; /*0x4234a7*/
    }
    LOWORD(v49) = (unsigned __int8)v50 >> 1; /*0x4234b2*/
    LOWORD(v48) = v98; /*0x4234b4*/
    v48 *= 32; /*0x4234ba*/
    v51 = v48 | v49; /*0x4234bd*/
    LOWORD(v48) = v84; /*0x4234bf*/
    v49 = v48 | (v51 << 6); /*0x4234c8*/
    LODWORD(v41) |= v49; /*0x4234ca*/
LABEL_89:
    LOWORD(v49) = v98; /*0x4234d2*/
    LOWORD(v48) = v84; /*0x4234d8*/
    LOWORD(v50) = (unsigned __int8)v50 >> 1; /*0x4234e0*/
    LODWORD(v41) |= v48 | (32 * ((32 * v49) | v50)); /*0x4234ee*/
    *(float *)v100 = v41; /*0x4234f0*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v93 + 352))(v93) || v93[113] != 1 ) /*0x423513*/
    goto LABEL_99; /*0x423513*/
  v52 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6320); /*0x42351f*/
  v53 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v52; /*0x423525*/
  *(_DWORD *)v101 = v52 + v53; /*0x423531*/
  v99 = *(_BYTE *)(v52 + v53 + 6260); /*0x42353b*/
  v85 = *(_BYTE *)(v52 + v53 + 4174 + 2087); /*0x42354a*/
  v97 = *(_BYTE *)(v52 + v53 + 6262); /*0x423554*/
  v54 = DDraw::GetStatus() - 1; /*0x42355d*/
  if ( v54 ) /*0x42355e*/
  {
    v57 = v54 - 1; /*0x423560*/
    if ( v57 ) /*0x423561*/
    {
      LOBYTE(v57) = v85; /*0x4235ad*/
      goto LABEL_98; /*0x4235ad*/
    }
    LOWORD(v55) = v99; /*0x423563*/
    v57 = v85; /*0x423569*/
    LOWORD(v56) = v85; /*0x423573*/
    v58 = v56 | (v55 << 6); /*0x423575*/
    LOWORD(v56) = v97; /*0x423577*/
    v55 = v56 | (32 * v58); /*0x423580*/
    LODWORD(v41) |= v55; /*0x423582*/
  }
  else
  {
    v57 = v85; /*0x423586*/
  }
  LOWORD(v56) = (unsigned __int8)v57 >> 1; /*0x423591*/
  LOWORD(v55) = v99; /*0x423593*/
  v55 *= 32; /*0x423599*/
  v59 = v55 | v56; /*0x42359c*/
  LOWORD(v55) = v97; /*0x42359e*/
  v56 = v55 | (v59 << 6); /*0x4235a7*/
  LODWORD(v41) |= v56; /*0x4235a9*/
LABEL_98:
  LOWORD(v56) = v99; /*0x4235b1*/
  LOWORD(v55) = v97; /*0x4235b7*/
  LOWORD(v57) = (unsigned __int8)v57 >> 1; /*0x4235bf*/
  LODWORD(v41) |= v55 | (32 * ((32 * v56) | v57)); /*0x4235cd*/
  *(float *)v100 = v41; /*0x4235cf*/
LABEL_99:
  v60 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v108); /*0x4235d3*/
  LOWORD(v94) = *v60 / 256; /*0x4235ef*/
  HIWORD(v94) = v60[1] / 256; /*0x423608*/
  *(_DWORD *)v101 = v94; /*0x423615*/
  v61 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v101); /*0x42361a*/
  if ( (unsigned __int8)CellClass::QuickPassable(v61) ) /*0x423621*/
  {
    v41 = 0.0; /*0x42362a*/
    *(float *)v100 = 0.0; /*0x42362c*/
  }
  v62 = this->AnimClass_field_0xC8; /*0x423630*/
  if ( v62[2].__pad_C[207] ) /*0x423636*/
  {
    FoundationSize = Building::GetFoundationSize(&v108, 0); /*0x42364f*/
    v64 = *a2; /*0x423657*/
    v65 = a2[1]; /*0x423659*/
    *(_DWORD *)v101 = FoundationSize[3]; /*0x42365c*/
    v66 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x423663*/
    v108 = v64; /*0x423667*/
    v105[0] = v64; /*0x42366d*/
    v95 = *(_DWORD *)v101 / 2; /*0x423673*/
    v67 = v65 - *(_DWORD *)v101 / 2; /*0x423677*/
    v86 = 0; /*0x423679*/
    v68 = v66[116](this); /*0x42367e*/
    v69 = this->AnimClass_field_0x100 /*0x4236a1*/
        + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v68)
        - 50;
    BYTE1(AnimClass_field_0x190) |= 0x20u; /*0x4236a4*/
    do /*0x423719*/
    {
      v70 = v67 + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184]; /*0x4236bb*/
      v105[0] = v108; /*0x4236bd*/
      v105[1] = v70; /*0x4236c1*/
      DrawToSurfaceSHP( /*0x4236f7*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[120],
        v103,
        v104,
        v105,
        &DSurface_ViewBounds.field_0,
        AnimClass_field_0x190,
        0,
        v69,
        2,
        v106,
        *(int *)v100,
        0,
        0,
        0,
        0);
      if ( v67 < 0 ) /*0x4236fe*/
        v86 = 1; /*0x423700*/
      v67 -= *(_DWORD *)v101; /*0x42370d*/
      v69 -= *(_DWORD *)v101 + v95; /*0x423715*/
    }
    while ( !v86 ); /*0x423719*/
  }
  else if ( v62[2].__pad_C[221] ) /*0x423728*/
  {
    v109 = *(_DWORD *)&v62[2].__pad_C[184]; /*0x42373c*/
    v71 = a2[1]; /*0x423742*/
    *(_DWORD *)v101 = *a2; /*0x42374c*/
    v82 = v106; /*0x423756*/
    v72 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x42375e*/
    v102 = v109 + v71; /*0x423766*/
    v73 = v72[116](this); /*0x42376a*/
    BYTE1(AnimClass_field_0x190) |= 0x20u; /*0x42379b*/
    v80 = this->AnimClass_field_0x100 /*0x42379e*/
        + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v73)
        - 3;
    DrawToSurfaceSHP( /*0x4237a9*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      a3,
      AnimClass_field_0x190,
      0,
      v80,
      0,
      v82,
      SLODWORD(v41),
      0,
      0,
      0,
      0);
  }
  else
  {
    v74 = *a2; /*0x4237b9*/
    v102 = *(_DWORD *)&v62[2].__pad_C[184] + a2[1]; /*0x4237bb*/
    *(_DWORD *)v101 = v74; /*0x4237cb*/
    v83 = v106; /*0x4237d2*/
    v75 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x4237d7*/
    v76 = this->AnimClass_field_0x100 + *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[184] - ZCoordToScreenY(v75); /*0x4237ff*/
    v77 = AnimClass_field_0x190; /*0x423801*/
    BYTE1(v77) = BYTE1(AnimClass_field_0x190) | 0x20; /*0x423806*/
    DrawToSurfaceSHP( /*0x423827*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      a3,
      v77,
      0,
      v76 - 2,
      2,
      v83,
      SLODWORD(v41),
      0,
      0,
      0,
      0);
    if ( this->AnimClass_field_0xC8[2].__pad_C[230] ) /*0x423832*/
    {
      v78 = *(__int16 *)(v103 + 6); /*0x423845*/
      v79 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x423857*/
      v81 = -2 - ZCoordToScreenY(v79); /*0x423875*/
      DrawToSurfaceSHP( /*0x42389e*/
        (int)g_DSurface_Hidden_2,
        v105[0],
        v103,
        v104 + v78 / 2,
        a2,
        a3,
        AnimClass_field_0x190 & 0xFFFFF9F8 | 0x601,
        0,
        v81,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
  }
}



// ==== 0x004238B0  AnimClass::UpdateMirrorState  this=AnimClass  sig=csp ====
bool __thiscall AnimClass::UpdateMirrorState(AnimClass *this, int a2)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x4238bf*/
}



// ==== 0x004238D0  AnimClass::CheckMirrorFlags  this=AnimClass  sig=csp ====
int *__stdcall AnimClass::CheckMirrorFlags(AnimClass *this)
{
  if ( (byte_89A190 & 1) == 0 ) /*0x4238db*/
  {
    byte_89A190 |= 1u; /*0x4238f9*/
    dword_89A160 = 2147450879; /*0x4238ff*/
    atexit(nullsub_89); /*0x423904*/
  }
  return &dword_89A160; /*0x423912*/
}



// ==== 0x00423920  nullsub_89  this=-  sig=ida-proto ====
void __cdecl nullsub_89()
{
  ; /*0x423920*/
}



// ==== 0x00423930  AnimClass::UpdateProjectileTrajectory  this=AnimClass  sig=csp ====
int __thiscall AnimClass::UpdateProjectileTrajectory(AnimClass *this)
{
  float *v1; // edi
  char *v3; // esi
  int v4; // ebx
  Coord *AnimClass_field_0xC8; // eax
  AnimClass *v6; // edi
  int *v7; // eax
  _DWORD *Coords; // eax
  ObjectClass *firstObject; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  Coord *v12; // ebx
  int v13; // esi
  int v14; // eax
  void *ptr_0; // edx
  int v16; // eax
  void (__thiscall **AnimClass_field_0x0)(AnimClass *, int); // esi
  int v18; // eax
  int v20; // [esp-8h] [ebp-60h]
  _DWORD *v21; // [esp+Ch] [ebp-4Ch]
  int v22; // [esp+1Ch] [ebp-3Ch] BYREF
  void (__thiscall **v23)(ObjectClass *, _DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [esp+20h] [ebp-38h]
  int v24; // [esp+24h] [ebp-34h]
  char v25[12]; // [esp+28h] [ebp-30h] BYREF
  int v26[3]; // [esp+34h] [ebp-24h] BYREF
  char v27[12]; // [esp+40h] [ebp-18h] BYREF
  int v28[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v3 = &this->__pad_120[8]; /*0x423939*/
  v4 = JumpjetLocomotionClass::Update2((double *)&this->__pad_120[8], v1); /*0x423946*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x423948*/
  v24 = v4; /*0x42394e*/
  if ( AnimClass_field_0xC8[2].__pad_C[202] ) /*0x423952*/
    *((float *)v3 + 11) = *((float *)v3 + 11) + *((double *)v3 + 1); /*0x423962*/
  if ( v4 == 1 ) /*0x423968*/
  {
    if ( *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[116] ) /*0x423987*/
    {
      v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x42399b*/
      if ( v6 ) /*0x4239a2*/
      {
        v7 = (int *)(*((int (__thiscall **)(AnimClass *, char *))this->AnimClass_field_0x0 + 18))(this, v25); /*0x4239bb*/
        AnimClass::ctor(v6, *(void **)&this->AnimClass_field_0xC8[2].__pad_C[116], v7, 0, 1, (void *)0x600, 0, 0); /*0x4239ce*/
      }
    }
    Coords = (_DWORD *)Coord::GetCoords(v26, v21); /*0x4239da*/
    firstObject = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], Coords)->firstObject; /*0x4239ea*/
    if ( firstObject ) /*0x4239f2*/
    {
      do /*0x423a88*/
      {
        v10 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))firstObject->AbstractClass + 18))( /*0x423a08*/
                          firstObject,
                          v27);
        v11 = (_DWORD *)Coord::GetCoords(v28, v21); /*0x423a11*/
        v12 = this->AnimClass_field_0xC8; /*0x423a29*/
        v13 = abs32(v11[1] - v10[1]) + abs32(*v11 - *v10); /*0x423a3a*/
        if ( v13 <= *(_DWORD *)&v12[2].__pad_C[168] ) /*0x423a44*/
        {
          LOWORD(v14) = Math::RoundToInt(*(double *)&v12[2].__pad_C[28]); /*0x423a4c*/
          ptr_0 = firstObject->AbstractClass; /*0x423a51*/
          v22 = v14; /*0x423a55*/
          v20 = *(_DWORD *)&v12[2].__pad_C[164]; /*0x423a65*/
          v23 = (void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))ptr_0; /*0x423a68*/
          v16 = ZCoordToScreenY(v13); /*0x423a6c*/
          v23[91](firstObject, &v22, v16, v20, 0, 0, 0, 0); /*0x423a7d*/
        }
        firstObject = firstObject->nextObject; /*0x423a83*/
      }
      while ( firstObject ); /*0x423a88*/
      v4 = v24; /*0x423a8e*/
    }
  }
  else if ( v4 == 2 ) /*0x42396b*/
  {
    (*((void (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 62))(this); /*0x423976*/
  }
  AnimClass_field_0x0 = (void (__thiscall **)(AnimClass *, int))this->AnimClass_field_0x0; /*0x423a92*/
  v18 = Coord::GetCoords(v28, v21); /*0x423aa0*/
  AnimClass_field_0x0[109](this, v18); /*0x423aa8*/
  return v4; /*0x423aae*/
}



// ==== 0x00423AC0  AnimClass::CreateUnit  this=AnimClass  sig=csp ====
// TechnoClass::CreateUnit — per-frame production pipeline (4234B).
// Sections: Audio → Placement → Deploy → Progress → Cost → Milestone → TypeSwitch → UnitCreate
int __thiscall TechnoClass::CreateUnit(AnimClass *this)
{
  double v1; // st7
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  CellClass *v5; // eax
  Building *v6; // eax
  int AnimClass_field_0x0; // eax
  int v8; // eax
  int *p_AnimClass_field_0x9C; // edi
  int landType; // ebx
  int v11; // ebp
  bool v12; // bl
  bool v13; // al
  AnimClass *v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // edi
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  int v20; // edx
  int v21; // ebp
  int v22; // edi
  AnimClass *v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int AnimClass_field_0xC8; // edx
  int v29; // eax
  int v30; // ebp
  _DWORD *Coords; // eax
  int v33; // ebp
  int v34; // eax
  int v35; // ebp
  int *v36; // eax
  int *v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // edi... [35225 chars total]



// ==== 0x00424B50  BuildingClass::AimTurret  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AimTurret(BuildingClass *this, _BYTE *a2)
{
  _BYTE *v3; // ebp
  char isOnMap; // bl
  int v5; // ecx
  char *v6; // edx
  int *v7; // eax
  int v8; // edx
  int (__thiscall **ptr_0)(BuildingClass *, _DWORD *); // eax
  int result; // eax
  int *v11; // eax
  int v12; // ebx
  int v13; // ebp
  _DWORD *v14; // eax
  int v15; // ebx
  void (__thiscall **v16)(BuildingClass *, _DWORD *); // edx
  int v17; // ebp
  int v18; // [esp+10h] [ebp-24h] BYREF
  int v19; // [esp+14h] [ebp-20h]
  int v20; // [esp+18h] [ebp-1Ch]
  _BYTE v21[8]; // [esp+1Ch] [ebp-18h] BYREF
  int v22; // [esp+24h] [ebp-10h]
  _BYTE v23[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (_BYTE *)this->?[1]; /*0x424b59*/
  if ( v3 ) /*0x424b61*/
  {
    isOnMap = this->?; /*0x424b67*/
    if ( isOnMap ) /*0x424b6c*/
      RemoveTarget((int)this); /*0x424b74*/
    v5 = 0; /*0x424b7f*/
    if ( dword_A8E9B8 > 0 ) /*0x424b83*/
    {
      v6 = (char *)dword_A8E9AC; /*0x424b85*/
      do /*0x424ba5*/
      {
        if ( *(BuildingClass **)v6 != this && *(_DWORD *)(*(_DWORD *)v6 + 204) == this->?[1] ) /*0x424b9d*/
          break; /*0x424b9d*/
        ++v5; /*0x424b9f*/
        v6 += 4; /*0x424ba0*/
      }
      while ( v5 < dword_A8E9B8 ); /*0x424ba5*/
    }
    if ( v5 == dword_A8E9B8 ) /*0x424ba9*/
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 380))(v3); /*0x424bb0*/
      v3[132] = 0; /*0x424bb6*/
    }
    v7 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v21); /*0x424bc6*/
    v18 = *v7; /*0x424bcb*/
    v19 = v7[1]; /*0x424bd2*/
    v8 = v7[2]; /*0x424bda*/
    ptr_0 = (int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass; /*0x424bdd*/
    v20 = v8; /*0x424be2*/
    this->?[1] = 0; /*0x424be6*/
    result = ptr_0[109](this, &v18); /*0x424bf0*/
    if ( isOnMap ) /*0x424bf8*/
      result = Targeting::Readd(this); /*0x424c00*/
  }
  if ( a2 ) /*0x424c0b*/
  {
    v11 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v21); /*0x424c16*/
    v12 = *v11; /*0x424c19*/
    v13 = v11[1]; /*0x424c1c*/
    v22 = v11[2]; /*0x424c22*/
    RemoveTarget((int)this); /*0x424c2b*/
    a2[132] = 1; /*0x424c30*/
    this->?[1] = (int)a2; /*0x424c37*/
    v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v23); /*0x424c46*/
    v15 = v12 - *v14; /*0x424c51*/
    v16 = (void (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass; /*0x424c5d*/
    v17 = v13 - v14[1]; /*0x424c5f*/
    v20 = v22 - v14[2]; /*0x424c61*/
    v18 = v15; /*0x424c68*/
    v19 = v17; /*0x424c6c*/
    v16[109](this, &v18); /*0x424c70*/
    return Targeting::Readd(this); /*0x424c7c*/
  }
  return result; /*0x424c81*/
}



// ==== 0x00424C90  BuildingClass::SetField95  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetField95(BuildingClass *this, int a2)
{
  this->?[2] = a2; /*0x424c94*/
  return a2; /*0x424c9a*/
}



// ==== 0x00424CA0  Function::424CA0  this=Function  sig=csp ====
int __thiscall Function::Method_424CA0(Function *this, int a2)
{
  this->q018 = a2; /*0x424ca4*/
  return a2; /*0x424caa*/
}



// ==== 0x00424CB0  AnimClass::InWhichLayer_AttachedObjectLayer  this=AnimClass  sig=csp ====
int __thiscall AnimClass::InWhichLayer_AttachedObjectLayer(AnimClass *this)
{
  Coord *AnimClass_field_0xC8; // eax

  if ( this->AnimClass_field_0xCC ) /*0x424cb0*/
    return 2; /*0x424cba*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x424cc0*/
  if ( AnimClass_field_0xC8 ) /*0x424cc8*/
    return *(_DWORD *)&AnimClass_field_0xC8[2].__pad_C[216]; /*0x424cca*/
  else
    return 3; /*0x424cd1*/
}



// ==== 0x00424CE0  ObjectClass::ProductionCompletionCallback  this=ObjectClass  sig=csp ====
// Production completion callback (543B). Handles audio, special building anims, unit creation.
bool __thiscall ProductionCompletionCallback(TechnoClass *this)
{
  _DWORD *v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  CellClass *v5; // ebx
  _DWORD *v6; // edi
  AnimClass *v7; // ebp
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  void **v13; // eax
  int *location; // esi
  __int16 *p_smudgeTypeIndex; // ebx
  int v17; // [esp-8h] [ebp-38h]
  int v18; // [esp+Ch] [ebp-24h] BYREF
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  char v21[12]; // [esp+18h] [ebp-18h] BYREF
  char v22[12]; // [esp+24h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(TechnoClass *, int))(this->ptr_0 + 292))(this, 2); /*0x424ceb*/
  if ( LOBYTE(this->ironCurtainTimer[2]) || *(_DWORD *)(this->missionTimer[0] + 760) == -1 ) /*0x424d08*/
  {
    AudioController::Stop((AudioController *)&this->ironTintTimer[1]); /*0x424d38*/
  }
  else
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, &v18); /*0x424d1a*/
    StartAudioControllerAt(*(_DWORD *)(this->missionTimer[0] + 760), v2, (int **)&this->ironTintTimer[1]); /*0x424d2b*/
  }
  AudioController::Stop((AudioController *)&this->airstrikeTimer[2]); /*0x424d43*/
  if ( !*(_DWORD *)(this->missionTimer[0] + 664) ) /*0x424d4e*/
    CreateUnitOnCompletion(this); /*0x424d5a*/
  LOBYTE(v3) = this->ironCurtainTimer[2]; /*0x424d5f*/
  if ( !(_BYTE)v3 ) /*0x424d67*/
  {
    LOBYTE(v3) = *(_BYTE *)(this->missionTimer[0] + 855); /*0x424d73*/
    if ( (_BYTE)v3 ) /*0x424d7b*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, char *))(this->ptr_0 + 72))(this, v21); /*0x424d8a*/
      v5 = Coord::To_Cell((Coord *)&dword_87F7E8, v4); /*0x424d98*/
      v3 = BuildingClass::FindByCellHash((BuildingClass *)v5); /*0x424d9c*/
      if ( v3 != -1 ) /*0x424da4*/
      {
        v6 = (_DWORD *)*(&dword_B0F4EC->ptr_0 + v3); /*0x424db3*/
        CellClass::ReduceTiberium(&v5->mapCoords, (unsigned __int8)v5->powerup[0] + 1); /*0x424dc0*/
        if ( (int)v6[53] > 0 && !((int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3) ) /*0x424def*/
        {
          v7 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x424e04*/
          if ( v7 ) /*0x424e0b*/
          {
            v8 = (int *)(*(int (__thiscall **)(TechnoClass *, char *))(this->ptr_0 + 72))(this, v22); /*0x424e16*/
            v9 = *v8; /*0x424e19*/
            v10 = v8[1]; /*0x424e1b*/
            v11 = v8[2]; /*0x424e1e*/
            v18 = v9; /*0x424e21*/
            v20 = v11 + 10; /*0x424e2e*/
            v17 = v6[53] - 1; /*0x424e3f*/
            v19 = v10; /*0x424e42*/
            v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v17); /*0x424e46*/
            v13 = AnimClass::ctor(v7, *(void **)(v6[50] + 4 * v12), &v18, 0, 1, (void *)0x600, 0, 0); /*0x424e69*/
          }
          else
          {
            v13 = 0; /*0x424e70*/
          }
          v13[53] = *(void **)(*((_DWORD *)dword_B054D4 + v6[48]) + 780); /*0x424e88*/
          v13[63] = (void *)*(__int16 *)v5->CellClass_field_10A; /*0x424e95*/
        }
        location = this->location; /*0x424e9b*/
        v18 = *location; /*0x424ea7*/
        v19 = location[1]; /*0x424eae*/
        v20 = location[2]; /*0x424eba*/
        PlaySoundEffectAt( /*0x424ed1*/
          &v18,
          *(_DWORD *)&dword_8871E0->__pad_240[808],
          0,
          *(_DWORD *)&dword_8871E0->__pad_C3C[876],
          0,
          0);
        House::AnnounceUpgrade((int)v5, -1); /*0x424eda*/
        p_smudgeTypeIndex = (__int16 *)&v5->smudgeTypeIndex; /*0x424edf*/
        Cell::SetRadar((Cell *)&dword_87F7E8, p_smudgeTypeIndex); /*0x424ee8*/
        Radar::Update((Radar *)&dword_87F7E8, p_smudgeTypeIndex); /*0x424ef3*/
      }
    }
  }
  return v3; /*0x424ef9*/
}



// ==== 0x00424F00  ObjectClass::CreateUnitOnCompletion  this=ObjectClass  sig=csp ====
// Create unit at completion (583B). Calculates exit cell, foundation offsets, spawns unit.
bool __thiscall CreateUnitOnCompletion(TechnoClass *this)
{
  _DWORD *v2; // eax
  int *v3; // eax
  int ptr_0; // edx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int i; // edi
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+10h] [ebp-20h]
  __int16 v19[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h]
  int *v21; // [esp+1Ch] [ebp-14h]
  int v22[4]; // [esp+20h] [ebp-10h] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, v22); /*0x424f12*/
  LOWORD(v17) = *v2 / 256; /*0x424f25*/
  HIWORD(v17) = v2[1] / 256; /*0x424f3e*/
  *(_DWORD *)v19 = v17; /*0x424f4b*/
  v3 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v19); /*0x424f50*/
  ptr_0 = this->ptr_0; /*0x424f55*/
  v5 = 30; /*0x424f57*/
  v21 = v3; /*0x424f5e*/
  v18 = 30; /*0x424f62*/
  if ( (*(int (__thiscall **)(TechnoClass *))(ptr_0 + 108))(this) ) /*0x424f66*/
  {
    v6 = this->missionTimer[0]; /*0x424f72*/
    if ( *(_DWORD *)(v6 + 668) == -1 ) /*0x424f7e*/
      *(_DWORD *)(this->missionTimer[0] + 668) = Building::GetFoundationSize(v22, *(_DWORD *)(v6 + 664))[2]; /*0x424f9c*/
    v7 = this->missionTimer[0]; /*0x424fa2*/
    if ( *(_DWORD *)(v7 + 672) == -1 ) /*0x424fae*/
      *(_DWORD *)(this->missionTimer[0] + 672) = Building::GetFoundationSize(v22, *(_DWORD *)(v7 + 664))[3]; /*0x424fcc*/
    v8 = this->missionTimer[0]; /*0x424fd2*/
    v5 = *(_DWORD *)(v8 + 668); /*0x424fd8*/
    v18 = *(_DWORD *)(v8 + 672); /*0x424fe4*/
  }
  v9 = this->missionTimer[0]; /*0x424fe8*/
  if ( *(_DWORD *)(v9 + 716) != -1 ) /*0x424ff4*/
  {
    for ( i = 0; i < *(_DWORD *)(v9 + 720); ++i ) /*0x425000*/
    {
      v22[0] = this->location[0]; /*0x42500c*/
      v22[1] = this->location[1]; /*0x425013*/
      v22[2] = this->location[2]; /*0x42501f*/
      CreateFireAtSW(dword_A8ED78, *((_DWORD *)dword_A83D9C + *(_DWORD *)(v9 + 716)), (int)v22); /*0x425039*/
      v9 = this->missionTimer[0]; /*0x42503e*/
    }
  }
  v11 = (*(int (__thiscall **)(TechnoClass *))(this->ptr_0 + 456))(this); /*0x425051*/
  if ( v11 < 30 ) /*0x42505a*/
  {
    v12 = this->missionTimer[0]; /*0x425060*/
    if ( !*(_BYTE *)(v12 + 875) /*0x4250ab*/
      || *(_BYTE *)(v12 + 877)
      && (v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646),
          (double)v20 * 4.656612877414201e-10 >= 0.5) )
    {
      LOBYTE(v11) = *(_BYTE *)(this->missionTimer[0] + 877); /*0x4250d7*/
      if ( (_BYTE)v11 ) /*0x4250df*/
      {
        CellClass::ReduceTiberium(v21, 6); /*0x4250e7*/
        if ( *(_BYTE *)(this->missionTimer[0] + 878) ) /*0x4250f2*/
        {
          v14 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, v22); /*0x42510c*/
          LOBYTE(v11) = TimedCreateUnitAtCoords(v14, 300, 300, 1); /*0x425116*/
        }
        else
        {
          v15 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, v22); /*0x425133*/
          LOBYTE(v11) = TimedCreateUnitAtCoords(v15, v5, v18, 0); /*0x42513a*/
        }
      }
    }
    else
    {
      v13 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, v22); /*0x4250bd*/
      LOBYTE(v11) = StandardCreateUnitAtCoords(v13, v5, v18, 0); /*0x4250c4*/
    }
  }
  return v11; /*0x4250c9*/
}



// ==== 0x00425150  AnimClass::ClearTargetReferences  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ClearTargetReferences(AnimClass *this, int a2, int a3)
{
  int result; // eax
  int (__thiscall **AnimClass_field_0x0)(AnimClass *, _DWORD); // eax
  int (__thiscall **v6)(AnimClass *); // edx
  int (__thiscall **v7)(AnimClass *); // eax

  Object::Unlink((ObjectClass *)this); /*0x42515f*/
  result = (int)this->AnimClass_field_0xCC; /*0x425164*/
  if ( result == a2 && a2 ) /*0x425172*/
  {
    RemoveTarget((int)this); /*0x42517a*/
    (*(void (__thiscall **)(void *, AnimClass *))(*(_DWORD *)this->AnimClass_field_0xCC + 96))( /*0x425188*/
      this->AnimClass_field_0xCC,
      this);
    AnimClass_field_0x0 = (int (__thiscall **)(AnimClass *, _DWORD))this->AnimClass_field_0x0; /*0x42518b*/
    this->AnimClass_field_0xCC = 0; /*0x425190*/
    this->__pad_194[7] = 1; /*0x425196*/
    result = AnimClass_field_0x0[73](this, 0); /*0x42519d*/
  }
  if ( this->AnimClass_field_0xC8 == (Coord *)a2 ) /*0x4251a9*/
    this->AnimClass_field_0xC8 = 0; /*0x4251ab*/
  if ( this->AnimClass_field_0x17C == (AbstractClass *)a2 ) /*0x4251b7*/
  {
    v6 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x4251b9*/
    this->AnimClass_field_0x17C = 0; /*0x4251bd*/
    result = v6[62](this); /*0x4251c3*/
  }
  if ( this->AnimClass_field_0x180 == a2 ) /*0x4251cf*/
  {
    v7 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x4251d1*/
    this->AnimClass_field_0x17C = 0; /*0x4251d5*/
    return v7[62](this); /*0x4251db*/
  }
  return result; /*0x4251e1*/
}



// ==== 0x004251F0  sub_4251F0  this=-  sig=csp ====
int __fastcall sub_4251F0(int a1, __int16 *a2)
{
  int v2; // ecx
  int v3; // eax
  int result; // eax
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v2 = a2[1]; /*0x4251f6*/
  v3 = (*a2 << 8) + 128; /*0x4251fd*/
  v5[2] = 0; /*0x425202*/
  v5[0] = v3; /*0x42520d*/
  v5[1] = (v2 << 8) + 128; /*0x42521e*/
  PlaySoundEffectAt(v5, dword_8871E0[1].GUIMoveInSound[1], 0, dword_8871E0->?, 0, 0); /*0x425237*/
  result = dword_A8B238[0]; /*0x42523c*/
  if ( !dword_A8B238[0] ) /*0x425243*/
    return FadePalette(&FileSystem_TEMPERAT_PAL, 30, (void (*)(void))Event::Dispatch); /*0x425254*/
  return result; /*0x425259*/
}



// ==== 0x00425260  BuildingClass::SetField8  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetField8(BuildingClass *this)
{
  int result; // eax

  BYTE2(this->?[0]) = 1; /*0x425260*/
  return result; /*0x425267*/
}



// ==== 0x00425270  VtableStub::425270  this=VtableStub  sig=csp ====
void __thiscall VtableStub::Method_425270(VtableStub *this)
{
  *((_BYTE *)this + 414) = 0; /*0x425270*/
}



// ==== 0x00425280  AnimClass::SaveLoad_Prefix  this=AnimClass  sig=csp ====
int __thiscall AnimClass::SaveLoad_Prefix(AnimClass *this, int a2, int a3)
{
  int Register; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x425291*/
  if ( Register >= 0 ) /*0x425295*/
  {
    if ( a2 ) /*0x42529d*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x4252a6*/
      __4type_info_AAEAAV0_ABV0__Z((void *)(a2 + 180), (int)&a3); /*0x4252b6*/
      *(_DWORD *)a2 = &AnimClass::`vftable'; /*0x4252bb*/
      *(_DWORD *)(a2 + 4) = &AnimClass::`vftable'; /*0x4252c1*/
      *(_DWORD *)(a2 + 8) = &AnimClass::`vftable'; /*0x4252c8*/
      *(_DWORD *)(a2 + 12) = &off_7E3328; /*0x4252cf*/
    }
    AudioController::Init((AudioController *)(a2 + 416)); /*0x4252dc*/
    AudioController::Init((AudioController *)(a2 + 436)); /*0x4252e7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 200)); /*0x4252f8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 204)); /*0x425309*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 380)); /*0x42531a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 384)); /*0x42532b*/
    v4 = *(_DWORD *)(a2 + 216); /*0x425330*/
    if ( v4 <= -1 ) /*0x425339*/
    {
      if ( *(_BYTE *)(a2 + 220) ) /*0x42535f*/
      {
        v6 = FileExtension::MapHandler((const char *)(a2 + 220)); /*0x42536f*/
        if ( v6 ) /*0x425376*/
        {
          v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0); /*0x42537e*/
          if ( v7 ) /*0x425383*/
          {
            *(_DWORD *)(a2 + 212) = *(_DWORD *)(v7 + 780); /*0x42538b*/
            return Register; /*0x425395*/
          }
        }
      }
      *(_DWORD *)(a2 + 212) = 0; /*0x425398*/
    }
    else if ( v4 < *(int *)stru_B054D0.__tail_10 ) /*0x425341*/
    {
      *(_DWORD *)(a2 + 212) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v4) + 780); /*0x425352*/
      return Register; /*0x42535c*/
    }
  }
  return Register; /*0x42535a*/
}



// ==== 0x004253B0  AnimClass::SaveLoad_Prefix_0  this=AnimClass  sig=csp ====
int __stdcall AnimClass::SaveLoad_Prefix_0(AnimClass *this, int *a2, int a3)
{
  IUnknown *AnimClass_field_0xD4; // edx
  int v4; // eax
  int v5; // ecx

  AnimClass_field_0xD4 = this->AnimClass_field_0xD4; /*0x4253b6*/
  if ( AnimClass_field_0xD4 && (v4 = *(_DWORD *)stru_B054D0.__tail_10 - 1, *(_DWORD *)stru_B054D0.__tail_10 - 1 >= 0) ) /*0x4253c8*/
  {
    v5 = *(_DWORD *)&stru_B054D0.m_1[3] + 4 * v4; /*0x4253d0*/
    while ( AnimClass_field_0xD4 != *(IUnknown **)(*(_DWORD *)v5 + 780) ) /*0x4253db*/
    {
      --v4; /*0x4253dd*/
      v5 -= 4; /*0x4253de*/
      if ( v4 < 0 ) /*0x4253e3*/
        goto LABEL_6; /*0x4253e3*/
    }
    *(_DWORD *)this->__pad_D8 = v4; /*0x425404*/
  }
  else
  {
LABEL_6:
    *(_DWORD *)this->__pad_D8 = -1; /*0x4253e5*/
  }
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x4253ff*/
}



// ==== 0x00425410  AnimClass::ProcessPower  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessPower(AnimClass *this, int *a2)
{
  _DWORD *AnimClass_field_0xCC; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx

  HouseClass::ProcessPower((ObjectClass *)this); /*0x425419*/
  AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x42541e*/
  if ( AnimClass_field_0xCC ) /*0x425426*/
  {
    v4 = (*(int (__stdcall **)(_DWORD *))(AnimClass_field_0xCC[1] + 16))(AnimClass_field_0xCC + 1); /*0x42542f*/
    Power::TimerProcess(v4); /*0x425435*/
  }
  Power::TimerProcess(this->AnimClass_field_0xD0[0]); /*0x425443*/
  Power::TimerProcess(this->AnimClass_field_0xFC[0]); /*0x425451*/
  Power::TimerProcess(this->AnimClass_field_0x100); /*0x42545f*/
  Power::TimerProcess(this->AnimClass_field_0x104); /*0x42546d*/
  Power::TimerProcess((int)this->AnimClass_field_0x184->__pad_0); /*0x42547b*/
  Checksummer::Add_double((Checksummer *)a2, this->AnimClass_field_0x188, *(_DWORD *)this->__pad_18C); /*0x425490*/
  Power::TimerProcess(this->AnimClass_field_0x190); /*0x42549e*/
  LOBYTE(v5) = this->__pad_194[0]; /*0x4254a3*/
  Power::FlagProcess((Power *)a2, v5); /*0x4254ac*/
  v6 = Power::TimerProcess((unsigned __int8)this->__pad_194[1]); /*0x4254bc*/
  LOBYTE(v6) = this->__pad_194[2]; /*0x4254c1*/
  Power::FlagProcess((Power *)a2, v6); /*0x4254ca*/
  LOBYTE(v7) = this->__pad_194[3]; /*0x4254cf*/
  Power::FlagProcess((Power *)a2, v7); /*0x4254d8*/
  LOBYTE(v8) = this->__pad_194[7]; /*0x4254dd*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x4254e6*/
  LOBYTE(v9) = this->__pad_194[8]; /*0x4254eb*/
  Power::FlagProcess((Power *)a2, v9); /*0x4254f4*/
  LOBYTE(v10) = this->__pad_194[10]; /*0x4254f9*/
  return Power::FlagProcess((Power *)a2, v10); /*0x425507*/
}



// ==== 0x00425510  AnimClass::CheckEndOfSequence  this=AnimClass  sig=csp ====
int __thiscall AnimClass::CheckEndOfSequence(AnimClass *this)
{
  return *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[52]; /*0x42551c*/
}



// ==== 0x00425520  AbstractClass::updateLayer  this=AnimClass  sig=csp ====
unsigned int __thiscall AbstractClass::updateLayer(AbstractClass *this)
{
  return this->q0C8; /*0x425526*/
}



// ==== 0x00425530  AnimClass::Undeploy  this=AnimClass  sig=csp ====
char __thiscall AnimClass::Undeploy(AnimClass *this)
{
  Coord *AnimClass_field_0xC8; // eax
  CellClass *v3; // eax
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x425536*/
  if ( AnimClass_field_0xC8 && AnimClass_field_0xC8[2].__pad_C[201] ) /*0x425540*/
  {
    v5[0] = this->AnimClass_field_0x9C; /*0x425556*/
    v5[1] = *(_DWORD *)this->__pad_A0; /*0x425567*/
    v5[2] = this->AnimClass_field_0xA4; /*0x42556e*/
    v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x425572*/
    v3->flags[0] &= ~0x20000u; /*0x425588*/
  }
  if ( !(unsigned __int8)ObjectClass::Undeploy((ObjectClass *)this) ) /*0x42558c*/
    return 0; /*0x4255a7*/
  RemoveTarget((int)this); /*0x42559b*/
  return 1; /*0x4255a2*/
}



// ==== 0x004255B0  AnimClass::ProcessCraterFormation  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessCraterFormation(AnimClass *this)
{
  void *AnimClass_field_0xCC; // ecx
  Coord *AnimClass_field_0xC8; // eax
  _DWORD *v4; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x4255b6*/
  if ( AnimClass_field_0xCC ) /*0x4255be*/
    (*(void (__thiscall **)(void *, AnimClass *))(*(_DWORD *)AnimClass_field_0xCC + 96))(AnimClass_field_0xCC, this); /*0x4255c3*/
  BuildingClass::AimTurret((BuildingClass *)this, 0); /*0x4255ca*/
  Mixer::ReleaseChannel((Mixer *)this->AnimClass_field_0x1A0); /*0x4255d5*/
  if ( !this->__pad_194[4] ) /*0x4255da*/
  {
    AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x4255e4*/
    if ( AnimClass_field_0xC8 ) /*0x4255ec*/
    {
      if ( *(_DWORD *)&AnimClass_field_0xC8[2].__pad_C[112] != -1 ) /*0x4255f5*/
      {
        v4 = (_DWORD *)(*((int (__thiscall **)(AnimClass *, _BYTE *))this->AnimClass_field_0x0 + 18))(this, v6); /*0x425607*/
        StartAudioControllerAt( /*0x425618*/
          *(_DWORD *)&this->AnimClass_field_0xC8[2].__pad_C[112],
          v4,
          (int **)&this->AnimClass_field_0x1B4);
      }
    }
  }
  return ObjectClass::Destroy((ObjectClass *)this); /*0x425624*/
}



// ==== 0x00425630  AnimClass::CheckDamageFlags  this=AnimClass  sig=csp ====
int __thiscall AnimClass::CheckDamageFlags(AnimClass *this)
{
  AnimClass **p_AnimClass_field_0x9C; // eax
  _DWORD *AnimClass_field_0xCC; // ecx
  int result; // eax

  p_AnimClass_field_0x9C = &this->AnimClass_field_0x9C; /*0x425633*/
  AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x425639*/
  result = (int)p_AnimClass_field_0x9C[2]; /*0x42564e*/
  if ( AnimClass_field_0xCC ) /*0x425651*/
    result += AnimClass_field_0xCC[41]; /*0x425669*/
  return result; /*0x42566b*/
}



// ==== 0x00425670  ObjectClass::ConstructionPositionTracker  this=ObjectClass  sig=csp ====
bool __thiscall ConstructionPositionTracker(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int *v4; // edi
  int *location; // ebp
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int *v9; // eax
  int v10; // ebx
  bool v11; // dl
  int v12; // eax
  signed int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int ptr_0; // edx
  signed int v21; // ebx
  int *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int GroundHeight; // eax
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  __int16 v36; // bp
  int *v37; // ecx
  int v38; // edx
  int v39; // ebx
  int v40; // ecx
  wchar_t *v41; // eax
  unsigned int v42; // ecx
  int *v43; // eax
  int v44; // edx
  int v45; // edi
  int v47; // [esp+Ch] [ebp-44h]
  double v48; // [esp+24h] [ebp-2Ch] BYREF
  double v49; // [esp+2Ch] [ebp-24h] BYREF
  int v50; // [esp+34h] [ebp-1Ch]
  int v51; // [esp+38h] [ebp-18h] BYREF
  int v52; // [esp+3Ch] [ebp-14h]
  int v53; // [esp+40h] [ebp-10h]
  int v54; // [esp+44h] [ebp-Ch] BYREF
  int v55; // [esp+48h] [ebp-8h]
  int v56; // [esp+4Ch] [ebp-4h]

  if ( !BYTE2(this->ironCurtainTimer[2]) ) /*0x425679*/
  {
    this->queuedMission = (int)dword_A8ED84; /*0x425690*/
    v3 = v55; /*0x425692*/
    this->missionStartTime = 0; /*0x425696*/
    *(_DWORD *)this->missionQueued = v3; /*0x42569c*/
    this->missionStatus = 0; /*0x42569f*/
  }
  v4 = &this->animation[4]; /*0x4256ad*/
  if ( this->animation[4] == Map_InvalidCoord_X /*0x4256d4*/
    && this->animation[5] == Map_InvalidCoord_Y
    && this->animation[6] == Map_InvalidCoord_Z
    || BYTE2(this->ironCurtainTimer[2]) )
  {
    if ( !this->isFallingDown[0] ) /*0x425b53*/
    {
      if ( BYTE2(this->ironCurtainTimer[2]) ) /*0x425b61*/
        goto LABEL_47; /*0x425b69*/
      v37 = Building::ComputePosition((Building *)this, &v54); /*0x425b7b*/
      v38 = v37[1]; /*0x425b7f*/
      v39 = v37[2]; /*0x425b82*/
      if ( *v37 == Map_InvalidCoord_X && v38 == Map_InvalidCoord_Y && v39 == Map_InvalidCoord_Z ) /*0x425b9d*/
      {
        *v4 = Map_InvalidCoord_X; /*0x425bad*/
        this->animation[5] = Map_InvalidCoord_Y; /*0x425bb4*/
        v40 = Map_InvalidCoord_Z; /*0x425bb7*/
        BYTE2(this->ironCurtainTimer[2]) = 1; /*0x425bbd*/
        this->animation[6] = v40; /*0x425bc4*/
        v41 = dword_A8ED84; /*0x425bc7*/
        this->missionStartTime = 1; /*0x425bd7*/
        this->queuedMission = (int)v41; /*0x425bdd*/
        *(_DWORD *)this->missionQueued = v55; /*0x425be3*/
        this->missionStatus = 1; /*0x425be6*/
        this->currentMission = 8 * *(_DWORD *)(this->missionTimer[0] + 848) + 1; /*0x425bfc*/
      }
      else
      {
        *v4 = *v37; /*0x425ba1*/
        this->animation[5] = v38; /*0x425ba3*/
        this->animation[6] = v39; /*0x425ba6*/
      }
    }
  }
  else
  {
    location = this->location; /*0x4256e2*/
    v6 = this->location[0]; /*0x4256ee*/
    v7 = this->location[1]; /*0x4256f0*/
    v56 = this->location[2]; /*0x4256f6*/
    v54 = *v4; /*0x4256fc*/
    v47 = v7 - this->animation[5]; /*0x425708*/
    v56 = this->animation[6]; /*0x425709*/
    v8 = Coord::Subtract((Coord *)&v51, v6 - v54, v47, 0); /*0x425718*/
    v54 = *v8; /*0x42571f*/
    v55 = v8[1]; /*0x42572a*/
    v56 = v8[2]; /*0x425731*/
    if ( (int)Coord::Length((Coord *)&v54) > 18 ) /*0x42573d*/
    {
      v54 = *location; /*0x4258f3*/
      ptr_0 = this->ptr_0; /*0x4258f7*/
      v55 = this->location[1]; /*0x4258fc*/
      v21 = this->location[2]; /*0x425904*/
      v22 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(ptr_0 + 72))(this, &v54); /*0x42590a*/
      v23 = *(_DWORD *)Cell::GetHeight((Cell *)&v49, v22, &this->animation[4]); /*0x425917*/
      v54 = *location; /*0x42591d*/
      v55 = this->location[1]; /*0x425924*/
      v56 = this->location[2]; /*0x425938*/
      v49 = (double)((__int16)v23 - 0x3FFF) * -0.00009587672516830327; /*0x425946*/
      v48 = (double)v55; /*0x425958*/
      Math::SinCos(v49); /*0x42595c*/
      LOWORD(v24) = Math::RoundToInt(v1); /*0x42596b*/
      LODWORD(v48) = v24; /*0x425974*/
      Math::ArcTan2(v49); /*0x42597e*/
      v1 = v1 * 18.0 + (double)v54; /*0x42598c*/
      LOWORD(v25) = Math::RoundToInt(v1); /*0x425990*/
      v51 = v25; /*0x42599d*/
      v52 = LODWORD(v48); /*0x4259a5*/
      v53 = v56; /*0x4259af*/
      if ( v21 > (int)(Cell::GetGroundHeight(&v51) + 2 * Map_CellHeight) ) /*0x4259c3*/
        GroundHeight = Map_MaxHeight + Cell::GetGroundHeight(&v51); /*0x4259e5*/
      else
        GroundHeight = Cell::GetGroundHeight(&v51); /*0x4259cf*/
      v27 = this->ptr_0; /*0x4259eb*/
      v53 = GroundHeight; /*0x4259ed*/
      (*(void (__thiscall **)(TechnoClass *, int *))(v27 + 436))(this, &v51); /*0x4259f8*/
    }
    else
    {
      if ( this->isFallingDown[0] ) /*0x425743*/
        goto LABEL_41; /*0x42574b*/
      v9 = Building::ComputePosition((Building *)this, &v54); /*0x425758*/
      v10 = *v9; /*0x42575d*/
      v51 = *v9; /*0x425765*/
      v52 = v9[1]; /*0x42576c*/
      v53 = v9[2]; /*0x425773*/
      v11 = (Coord::To_Cell((Coord *)&dword_87F7E8, &this->animation[4])->landType == 2 /*0x4257ab*/
          || Coord::To_Cell((Coord *)&dword_87F7E8, &this->animation[4])->landType == 6)
         && (*(int (__thiscall **)(TechnoClass *))(this->ptr_0 + 456))(this) <= Map_CellHeight;
      if ( v10 == Map_InvalidCoord_X && v52 == Map_InvalidCoord_Y && v53 == Map_InvalidCoord_Z /*0x4257ec*/
        || (v12 = this->passengers[0], v12 >= 7)
        || v11 )
      {
        *v4 = Map_InvalidCoord_X; /*0x425891*/
        this->animation[5] = Map_InvalidCoord_Y; /*0x425898*/
        this->animation[6] = Map_InvalidCoord_Z; /*0x4258a1*/
        BYTE2(this->ironCurtainTimer[2]) = 1; /*0x4258a4*/
        this->queuedMission = (int)dword_A8ED84; /*0x4258bc*/
        v18 = v55; /*0x4258be*/
        this->missionStartTime = 1; /*0x4258c2*/
        *(_DWORD *)this->missionQueued = v18; /*0x4258c8*/
        this->missionStatus = 1; /*0x4258cb*/
        v19 = 8 * *(_DWORD *)(this->missionTimer[0] + 848) + 1; /*0x4258da*/
        this->currentMission = v19; /*0x4258e1*/
        return v19; /*0x4258ed*/
      }
      this->passengers[0] = v12 + 1; /*0x4257f5*/
      v54 = *location; /*0x4257fd*/
      v55 = this->location[1]; /*0x425804*/
      v13 = this->location[2]; /*0x425808*/
      LODWORD(v49) = *v4; /*0x42580f*/
      HIDWORD(v49) = this->animation[5]; /*0x42581b*/
      v50 = this->animation[6]; /*0x425822*/
      if ( v13 > (int)(Cell::GetGroundHeight(&v49) + 2 * Map_CellHeight) ) /*0x42583b*/
        v14 = Map_MaxHeight + Cell::GetGroundHeight(&v49); /*0x42585d*/
      else
        v14 = Cell::GetGroundHeight(&v49); /*0x425847*/
      v15 = this->ptr_0; /*0x425863*/
      v50 = v14; /*0x425865*/
      (*(void (__thiscall **)(TechnoClass *, double *))(v15 + 436))(this, &v49); /*0x425870*/
      v16 = v52; /*0x42587a*/
      *v4 = v51; /*0x425880*/
      v17 = v53; /*0x425882*/
      this->animation[5] = v16; /*0x425886*/
      this->animation[6] = v17; /*0x425889*/
    }
    if ( !this->isFallingDown[0] ) /*0x4259fe*/
    {
      v28 = *location; /*0x425a0e*/
      v29 = this->location[1]; /*0x425a10*/
      v56 = this->location[2]; /*0x425a16*/
      LOWORD(v48) = v28 / 256; /*0x425a26*/
      v30 = v29 / 256; /*0x425a3a*/
      v31 = *location; /*0x425a3d*/
      WORD1(v48) = v30; /*0x425a3f*/
      v51 = v31; /*0x425a44*/
      v52 = this->location[1]; /*0x425a4d*/
      v32 = this->location[2]; /*0x425a53*/
      v54 = *location; /*0x425a56*/
      v53 = v32; /*0x425a5a*/
      v55 = this->location[1]; /*0x425a65*/
      v56 = this->location[2]; /*0x425a6d*/
      v33 = Cell::GetGroundHeight(&v54); /*0x425a76*/
      if ( v53 >= Map_MaxHeight + v33 ) /*0x425a89*/
      {
        v34 = this->location[1]; /*0x425a92*/
        v35 = this->location[2]; /*0x425a95*/
        v54 = *location; /*0x425a98*/
        v55 = v34; /*0x425aa0*/
        v56 = v35; /*0x425aaa*/
        if ( (Coord::To_Cell((Coord *)&dword_87F7E8, &v54)->flags & 0x100) == 0 ) /*0x425abc*/
        {
          v36 = LOWORD(v48); /*0x425ac2*/
          LOWORD(v48) += dword_89F6A0; /*0x425ad9*/
          WORD1(v48) = HIWORD(dword_89F6A0) + v30; /*0x425ae2*/
          if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v48) + 80) & 0x100) == 0 ) /*0x425b03*/
          {
            LOWORD(v48) = LOWORD(dword_89F688[0]) + v36; /*0x425b1b*/
            WORD1(v48) = HIWORD(dword_89F688[0]) + v30; /*0x425b20*/
            if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v48) + 80) & 0x100) == 0 ) /*0x425b41*/
              this->isFallingDown[0] = 1; /*0x425b47*/
          }
        }
      }
    }
  }
LABEL_41:
  if ( !BYTE2(this->ironCurtainTimer[2]) ) /*0x425c02*/
  {
    v42 = 0; /*0x425c18*/
    if ( *v4 != Map_InvalidCoord_X /*0x425c35*/
      || this->animation[5] != Map_InvalidCoord_Y
      || this->animation[6] != Map_InvalidCoord_Z )
    {
      v43 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 72))(this, &v54); /*0x425c40*/
      v44 = *v43; /*0x425c45*/
      LODWORD(v48) = *v4; /*0x425c47*/
      LODWORD(v49) = v44; /*0x425c4b*/
      Math::CalcAngle((double)v43[1] - (double)this->animation[5], (double)SLODWORD(v48) - (double)v44); /*0x425c6a*/
      LOWORD(v49) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x425c83*/
      v42 = *(_DWORD *)(this->missionTimer[0] + 848) /*0x425ca3*/
          * ((-1 - (((unsigned int)((LODWORD(v49) >> 12) + 1) >> 1) & 7)) & 7);
    }
    v45 = this->missionTimer[0]; /*0x425cb7*/
    v19 = (int)dword_A8ED84 / 3 / *(_DWORD *)(v45 + 848); /*0x425cc5*/
    this->currentMission = v42 + (int)dword_A8ED84 / 3 % *(_DWORD *)(v45 + 848); /*0x425cce*/
    return v19; /*0x425cda*/
  }
LABEL_47:
  v19 = *(__int16 *)((*(int (__thiscall **)(TechnoClass *))(this->ptr_0 + 108))(this) + 6) / 2 - 1; /*0x425cdb*/
  if ( this->currentMission >= v19 ) /*0x425cf4*/
    LOBYTE(v19) = (*(bool (__thiscall **)(TechnoClass *))(this->ptr_0 + 248))(this); /*0x425cfa*/
  return v19; /*0x4258bb*/
}



// ==== 0x00425D10  Building::ComputePosition  this=Building  sig=csp ====
int *__thiscall Building::ComputePosition(Building *this, int *a2)
{
  double v2; // st7
  int *v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  Cell *v14; // eax
  Cell *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int16 v19; // dx
  __int16 v20; // di
  __int16 v21; // di
  __int16 v22; // bx
  int v23; // ecx
  int v24; // edx
  int v26; // edi
  int v27; // esi
  int v28; // edx
  __int16 v29; // cx
  double v30; // [esp+0h] [ebp-48h]
  int v31; // [esp+14h] [ebp-34h]
  int v32; // [esp+18h] [ebp-30h]
  __int16 v34[2]; // [esp+20h] [ebp-28h] BYREF
  __int16 v35[2]; // [esp+24h] [ebp-24h] BYREF
  __int16 v36[2]; // [esp+28h] [ebp-20h] BYREF
  int v37; // [esp+2Ch] [ebp-1Ch]
  __int16 v38[2]; // [esp+30h] [ebp-18h] BYREF
  int v39; // [esp+34h] [ebp-14h]
  int v40; // [esp+3Ch] [ebp-Ch]
  int v41; // [esp+40h] [ebp-8h]
  int v42; // [esp+44h] [ebp-4h]

  v3 = (int *)&this->__pad_C[144]; /*0x425d1d*/
  v4 = v3[1]; /*0x425d29*/
  v5 = (unsigned __int8)(*v3 >> 31) + *v3; /*0x425d32*/
  v37 = 10000; /*0x425d34*/
  v42 = v3[2]; /*0x425d3f*/
  v6 = v5; /*0x425d43*/
  v7 = v4; /*0x425d45*/
  v6 >>= 8; /*0x425d47*/
  v8 = (__int16)v6; /*0x425d4b*/
  LOWORD(v39) = v6; /*0x425d54*/
  v9 = (__int16)v6 - 5; /*0x425d61*/
  v10 = v7 / 256; /*0x425d67*/
  HIWORD(v39) = v10; /*0x425d6c*/
  *(_DWORD *)v34 = dword_89A150; /*0x425d71*/
  v32 = (__int16)v6; /*0x425d75*/
  if ( v9 < (__int16)v6 + 5 ) /*0x425d79*/
  {
    v11 = (__int16)v10; /*0x425d7f*/
    v31 = (__int16)v10; /*0x425d82*/
    v12 = (__int16)v10 + 5; /*0x425d86*/
    do /*0x425ec0*/
    {
      v13 = v11 - 5; /*0x425d89*/
      if ( v11 - 5 < v12 ) /*0x425d8e*/
      {
        do /*0x425eb2*/
        {
          v35[0] = v9; /*0x425da0*/
          v35[1] = v13; /*0x425da5*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v35, 1) ) /*0x425daa*/
          {
            v36[0] = v9; /*0x425dbb*/
            v36[1] = v13; /*0x425dc6*/
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x425dcb*/
            v15 = v14; /*0x425dd0*/
            if ( *(_DWORD *)&v14->__pad_E8[4] == 2 /*0x425e18*/
              && ((int)v14->Cell_field_0x140 & 0x100) == 0
              && (*((_DWORD *)Cell::GetNeighbourContent(v14, 6u) + 80) & 0x100) == 0
              && (*((_DWORD *)Cell::GetNeighbourContent(v15, 0) + 80) & 0x100) == 0 )
            {
              if ( *(_DWORD *)&v15->__pad_1C[8] == v39 ) /*0x425e27*/
              {
                v16 = 0; /*0x425e77*/
              }
              else
              {
                v41 = v13 - v31; /*0x425e44*/
                v40 = v9 - v32; /*0x425e48*/
                __asm /*0x425e4c*/
                {
                  fild [esp+40h+var_8]
                  fild [esp+40h+var_C]
                }
                __asm
                {
                  fld st
                  fmul st, st(1)
                  fld st(2)
                  fmul st, st(3)
                  faddp st(1), st
                  fstp [esp+48h+var_48]; double
                  fstp st
                  fstp st
                }
                Math::Sqrt(v30); /*0x425e68*/
                LOWORD(v16) = Math::RoundToInt(v2); /*0x425e70*/
              }
              if ( v9 > v32 || v13 > v31 ) /*0x425e83*/
                v16 -= 3; /*0x425e85*/
              if ( v16 < v37 ) /*0x425e8c*/
              {
                v37 = v16; /*0x425e8e*/
                v38[0] = v9; /*0x425e92*/
                v38[1] = v13; /*0x425e97*/
                *(_DWORD *)v34 = *(_DWORD *)v38; /*0x425ea0*/
              }
            }
            v8 = v32; /*0x425ea4*/
          }
          ++v13; /*0x425eac*/
          v12 = v31 + 5; /*0x425ead*/
        }
        while ( v13 < v31 + 5 ); /*0x425eb2*/
        v11 = v31; /*0x425eb8*/
      }
      ++v9; /*0x425eba*/
    }
    while ( v9 < v8 + 5 ); /*0x425ec0*/
    if ( *(_DWORD *)v34 != dword_89A150 ) /*0x425ed6*/
    {
      v17 = v34[0] - v8; /*0x425eeb*/
      v18 = v34[1] - v11; /*0x425eed*/
      v19 = 0; /*0x425ef1*/
      if ( v17 >= 0 ) /*0x425ef5*/
        v20 = v17 > 0; /*0x425efe*/
      else
        v20 = -1; /*0x425ef7*/
      if ( v18 >= 0 ) /*0x425f05*/
      {
        if ( v18 > 0 ) /*0x425f0c*/
          v19 = 1; /*0x425f0e*/
      }
      else
      {
        v19 = -1; /*0x425f07*/
      }
      v21 = v39 + v20; /*0x425f1b*/
      v22 = v19 + HIWORD(v39); /*0x425f21*/
      v38[0] = v21; /*0x425f28*/
      v38[1] = v19 + HIWORD(v39); /*0x425f2d*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425f3b*/
      {
        v23 = (v21 << 8) + 128; /*0x425f4a*/
        v24 = v22; /*0x425f50*/
        goto LABEL_41; /*0x425f53*/
      }
      v38[0] = v21; /*0x425f5d*/
      v38[1] = HIWORD(v39); /*0x425f62*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425f78*/
      {
        *a2 = (v21 << 8) + 128; /*0x425f99*/
        a2[1] = (v31 << 8) + 128; /*0x425fa2*/
        a2[2] = 0; /*0x425fa7*/
        return a2; /*0x425fb0*/
      }
      v38[1] = v22; /*0x425fb8*/
      v38[0] = v39; /*0x425fbd*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425fd3*/
      {
        *a2 = (v8 << 8) + 128; /*0x425ff0*/
        a2[1] = (v22 << 8) + 128; /*0x425ffa*/
        a2[2] = 0; /*0x425ffd*/
        return a2; /*0x426006*/
      }
    }
  }
  if ( dword_89A150 ) /*0x426011*/
  {
LABEL_39:
    *a2 = Map_InvalidCoord_X; /*0x426090*/
    a2[1] = Map_InvalidCoord_Y; /*0x4260a3*/
    a2[2] = Map_InvalidCoord_Z; /*0x4260ac*/
    return a2; /*0x4260b5*/
  }
  v26 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x426032*/
  v27 = 0; /*0x426034*/
  while ( 1 ) /*0x426046*/
  {
    v28 = ((v27 + v26) % 8) & 7; /*0x426046*/
    v29 = v39 + LOWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x426058*/
    LOWORD(v28) = HIWORD(v39) + HIWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x426061*/
    v38[0] = v29; /*0x426066*/
    v38[1] = v28; /*0x42606f*/
    *(_DWORD *)v34 = *(_DWORD *)v38; /*0x42607d*/
    if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v34) ) /*0x426081*/
      break; /*0x426081*/
    if ( ++v27 >= 8 ) /*0x42608e*/
      goto LABEL_39; /*0x42608e*/
  }
  v24 = v34[1]; /*0x4260bd*/
  v23 = (v34[0] << 8) + 128; /*0x4260c5*/
LABEL_41:
  *a2 = v23; /*0x4260cb*/
  a2[1] = (v24 << 8) + 128; /*0x4260dd*/
  a2[2] = 0; /*0x4260e0*/
  return a2; /*0x425faa*/
}



// ==== 0x004260F0  BuildingClass::IsCellPlaceable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsCellPlaceable(BuildingClass *this, __int16 *a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x426101*/
  if ( (*(_DWORD *)(result + 320) & 0x100) != 0 /*0x426142*/
    && this->?[2] - Map_CellHeight * *(char *)(result + 283) > 2 * Map_CellHeight )
  {
    if ( (*(_BYTE *)(result + 296) & 0xE0) != 0 ) /*0x42614b*/
    {
LABEL_4:
      LOBYTE(result) = 0; /*0x42614d*/
      return result; /*0x426154*/
    }
  }
  else
  {
    v4 = *(_DWORD *)(result + 236); /*0x426157*/
    switch ( v4 ) /*0x426160*/
    {
      case 3: /*0x426160*/
        goto LABEL_4; /*0x426160*/
      case 10: /*0x426160*/
        goto LABEL_4; /*0x426165*/
      case 4: /*0x426160*/
        goto LABEL_4; /*0x42616a*/
    }
    v5 = *(_DWORD *)(result + 68); /*0x42616c*/
    if ( v5 != -1 ) /*0x426172*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v5) + 680) ) /*0x42617e*/
        goto LABEL_4; /*0x42617e*/
    }
    if ( (*(_BYTE *)(result + 292) & 0xE0) != 0 ) /*0x426190*/
      goto LABEL_4; /*0x426190*/
    result = Map_CellHeight * *(char *)(result + 283) - this->?[2]; /*0x4261b2*/
    if ( result > 2 * Map_CellHeight ) /*0x4261b9*/
      goto LABEL_4; /*0x4261b9*/
  }
  LOBYTE(result) = 1; /*0x4261bc*/
  return result; /*0x42614d*/
}



// ==== 0x004261D0  ObjectClass::FindBuildingClass  this=ObjectClass  sig=csp ====
int FindBuildingClass(TechnoClass *this)
{
  int result; // eax
  int i; // edi
  _DWORD *v3; // esi
  CellClass *v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD v7[3]; // [esp+4h] [ebp-Ch] BYREF

  result = dword_A8E9B8; /*0x4261d0*/
  for ( i = 0; i < dword_A8E9B8; ++i ) /*0x4261dd*/
  {
    v3 = (_DWORD *)*((_DWORD *)dword_A8E9AC + i); /*0x4261e9*/
    if ( *(_BYTE *)(v3[50] + 864) ) /*0x4261f2*/
    {
      v7[0] = v3[39]; /*0x426208*/
      v7[1] = v3[40]; /*0x426214*/
      v7[2] = v3[41]; /*0x426220*/
      v4 = Coord::To_Cell((Coord *)&dword_87F7E8, v7); /*0x426224*/
      v5 = BuildingClass::FindByCellHash((BuildingClass *)v4); /*0x42622b*/
      if ( v5 != -1 ) /*0x426233*/
      {
        v6 = *(&dword_B0F4EC->ptr_0 + v5); /*0x42623b*/
        if ( v6 ) /*0x426240*/
          v3[53] = *(_DWORD *)(*((_DWORD *)dword_B054D4 + *(_DWORD *)(v6 + 192)) + 780); /*0x426256*/
      }
    }
    result = dword_A8E9B8; /*0x42625c*/
  }
  return result; /*0x42626b*/
}



// ==== 0x00426270  AnimClass::UpdateDamageRadius  this=AnimClass  sig=csp ====
int __thiscall AnimClass::UpdateDamageRadius(AnimClass *this, _DWORD *a2)
{
  char v3; // bp
  CellClass *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection((Input *)a2); /*0x426287*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x426294*/
  if ( Map_MaxHeight + Cell::GetGroundHeight(a2) <= a2[2] && (v4->flags[0] & 0x100) != 0 ) /*0x4262b3*/
  {
    LOBYTE(v4->altOccupationFlags) |= 1 << v3; /*0x4262c3*/
    result = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 14))(this); /*0x4262cd*/
    v4->altInfantryOwnerIndex = result; /*0x4262d0*/
  }
  else
  {
    LOBYTE(v4->occupationFlags) |= 1 << v3; /*0x4262e8*/
    result = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 14))(this); /*0x4262f2*/
    v4->infantryOwnerIndex = result; /*0x4262f5*/
  }
  return result; /*0x4262d3*/
}



// ==== 0x00426300  AnimClass::ProcessAreaEffect  this=AnimClass  sig=csp ====
char __stdcall AnimClass::ProcessAreaEffect(AnimClass *this)
{
  char v1; // bl
  CellClass *v2; // esi
  char result; // al

  v1 = Input::OffsetToDirection((Input *)this); /*0x426314*/
  v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this); /*0x426321*/
  if ( Cell::GetGroundHeight(this) + Map_MaxHeight > (int)this->AnimClass_field_0x8 ) /*0x426335*/
  {
    result = ~(1 << v1) & LOBYTE(v2->occupationFlags); /*0x426370*/
    LOBYTE(v2->occupationFlags) = result; /*0x426372*/
    if ( (result & 0x1C) == 0 ) /*0x42637a*/
      v2->infantryOwnerIndex = -1; /*0x42637c*/
  }
  else
  {
    result = ~(1 << v1) & LOBYTE(v2->altOccupationFlags); /*0x426347*/
    LOBYTE(v2->altOccupationFlags) = result; /*0x426349*/
    if ( (result & 0x1C) == 0 ) /*0x426351*/
      v2->altInfantryOwnerIndex = -1; /*0x426353*/
  }
  return result; /*0x42635a*/
}



// ==== 0x00426390  ObjectClass::COMStub_Return0_25  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_25(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426390*/
  return result; /*0x426392*/
}



// ==== 0x004263A0  ObjectClass::COMStub_26  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_26(ObjectClass *this)
{
  return 0; /*0x4263a2*/
}



// ==== 0x004263B0  ObjectClass::COMStub_Return0_32  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_32(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4263b0*/
  return result; /*0x4263b2*/
}



// ==== 0x004263C0  ObjectClass::COMStub_Ret8487648_36  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret8487648_36(ObjectClass *this)
{
  return (int)&g_INI_Key_Civilian.__pad_16D[15]; /*0x4263c5*/
}



// ==== 0x004263D0  ObjectClass::GetDrawPosition  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetDrawPosition(ObjectClass *this)
{
  int *v1; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v7; // [esp+18h] [ebp+4h]

  v1 = (int *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v6); /*0x4263dc*/
  v2 = *v1; /*0x4263e3*/
  v3 = v1[1]; /*0x4263e5*/
  v4 = v1[2]; /*0x4263e8*/
  *v7 = v2; /*0x4263f0*/
  v7[1] = v3; /*0x4263f2*/
  v7[2] = v4 + 50; /*0x4263f5*/
  return (int)v7; /*0x4263fa*/
}



// ==== 0x00426410  IUnknown::getCoordCenter  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::getCoordCenter(IUnknown *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x426410*/
  return result; /*0x426412*/
}



// ==== 0x00426420  ObjectClass::COMStub_Return0_49  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_49(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426420*/
  return result; /*0x426422*/
}



// ==== 0x00426430  ObjectClass::COMStub_50  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_50(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426430*/
  return result; /*0x426432*/
}



// ==== 0x00426440  ObjectClass::COMStub_Return0_67  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_67(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426440*/
}



// ==== 0x00426450  ObjectClass::COMStub_Return0_68  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_68(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426450*/
}



// ==== 0x00426460  ObjectClass::COMStub_Return0_85  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_85(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426460*/
}



// ==== 0x00426470  ObjectClass::COMStub_Return0_86  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_86(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426470*/
}



// ==== 0x00426480  ObjectClass::COMStub_Return0_87  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_87(ObjectClass *this)
{
  int result; // eax

  return result; /*0x426480*/
}



// ==== 0x00426490  ObjectClass::COMStub_Return0_88  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_88(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426490*/
  return result; /*0x426492*/
}



// ==== 0x004264A0  ObjectClass::COMStub_Return0_92  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_92(ObjectClass *this)
{
  int result; // eax

  return result; /*0x4264a0*/
}



// ==== 0x004264B0  ObjectClass::COMStub_Return0_99  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_99(ObjectClass *this)
{
  int result; // eax

  return result; /*0x4264b0*/
}



// ==== 0x004264C0  ObjectClass::COMStub_107  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_107(ObjectClass *this)
{
  return 0; /*0x4264c2*/
}



// ==== 0x004264D0  IUnknown::COMStub_108  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::COMStub_108(IUnknown *this)
{
  return 0; /*0x4264d2*/
}



// ==== 0x004264E0  ObjectClass::COMStub_Return0_117  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_117(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4264e0*/
  return result; /*0x4264e2*/
}



// ==== 0x004264F0  ObjectClass::COMStub_Return0_118  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_118(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4264f0*/
  return result; /*0x4264f2*/
}



// ==== 0x00426500  ObjectClass::COMStub_Return0_119  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_119(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426500*/
  return result; /*0x426502*/
}



// ==== 0x00426510  ObjectClass::getCoordCenter2  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::getCoordCenter2(ObjectClass *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x426510*/
  return result; /*0x426512*/
}



// ==== 0x00426520  ObjectClass::COMStub_Return0_121  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_121(ObjectClass *this)
{
  return 0; /*0x426522*/
}



// ==== 0x00426530  AnimClass::MissionStubReturnZero  this=AnimClass  sig=csp ====
int AnimClass::MissionStubReturnZero(AnimClass *this)
{
  return 456; /*0x426535*/
}



// ==== 0x00426540  AnimClass::MissionStubReturnZero2  this=AnimClass  sig=csp ====
int __stdcall AnimClass::MissionStubReturnZero2(AnimClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x426546*/
    return -2147467261; /*0x426548*/
  *a2 = 237448643; /*0x426556*/
  a2[1] = 298949647; /*0x42655e*/
  a2[2] = -1610610249; /*0x426567*/
  a2[3] = unk_7E967C; /*0x426570*/
  return 0; /*0x42654d*/
}



// ==== 0x00426580  AbstractClass::getAltitude  this=AnimClass  sig=csp ====
int __cdecl AbstractClass::getAltitude(AbstractClass *this)
{
  return 4; /*0x426585*/
}



// ==== 0x00426590  AnimClass::MissionStubReturnZero3  this=AnimClass  sig=csp ====
void *__thiscall AnimClass::MissionStubReturnZero3(AnimClass *this, char a2)
{
  AnimClass::Destruct(this); /*0x426593*/
  if ( (a2 & 1) != 0 ) /*0x42659d*/
    __3_YAXPAX_Z(this); /*0x4265a0*/
  return this; /*0x4265aa*/
}



// ==== 0x004265B0  Cell::GetHeight  this=Cell  sig=csp ====
_WORD *__thiscall Cell::GetHeight(Cell *this, int *a2, int *a3)
{
  double v3; // st7
  double v8; // [esp+0h] [ebp-18h]
  double v9; // [esp+8h] [ebp-10h]

  _EAX = a2; /*0x4265b0*/
  _ECX = a3; /*0x4265b8*/
  if ( *a2 == *a3 && a2[1] == a3[1] ) /*0x4265ca*/
    LOWORD(this->Cell_field_0x0) = 0; /*0x4265cc*/
  __asm { fild dword ptr [ecx] } /*0x4265d1*/
  __asm
  {
    fisub dword ptr [eax]
    fstp [esp+18h+var_10]; double
    fild dword ptr [eax+4]
    fisub dword ptr [ecx+4]
    fstp [esp+18h+var_18]; double
  }
  Math::CalcAngle(v8, v9); /*0x4265e8*/
  __asm { fsub ds:dbl_7E2820 } /*0x4265ed*/
  __asm { fmul ds:dbl_7E2818 }
  LOWORD(a2) = Math::RoundToInt(v3); /*0x426601*/
  this->Cell_field_0x0 = (int)a2; /*0x42660a*/
  return this; /*0x42660e*/
}



// ==== 0x00426620  ??4type_info_AAEAAV0_ABV0__Z  this=-  sig=csp ====
void *__thiscall __4type_info_AAEAAV0_ABV0__Z(void *this, int a2)
{
  return this; /*0x426622*/
}



// ==== 0x00426630  Locomotor::GetSpeed  this=Locomotor  sig=csp ====
int __thiscall Locomotor::GetSpeed(Locomotor *this)
{
  int Locomotor_field_00; // edx
  int result; // eax

  Locomotor_field_00 = this->Locomotor_field_00; /*0x426630*/
  result = *((_DWORD *)this + 2); /*0x426632*/
  if ( this->Locomotor_field_00 != -1 ) /*0x426638*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - Locomotor_field_00 >= result ) /*0x426644*/
      return 0; /*0x426649*/
    else
      result -= *(_DWORD *)&stru_A8EB00.?[416] - Locomotor_field_00; /*0x426646*/
  }
  return result; /*0x426648*/
}



// ==== 0x00426650  sub_426650  this=-  sig=ida-proto ====
int sub_426650()
{
  dword_89A1C8 = 0; /*0x426652*/
  dword_89A1CC = 0; /*0x426657*/
  dword_89A1D0 = 0; /*0x42665c*/
  dword_89A1D4 = 0; /*0x426661*/
  return 0; /*0x426666*/
}



// ==== 0x004266D0  AnimFile::method_4266D0  this=AnimFile  sig=csp ====
void __thiscall sub_4266D0(AnimFile *this)
{
  char v2; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = *((_BYTE *)this + 137); /*0x4266d6*/
  *(_DWORD *)this->__pad_0 = &AnimFile::`vftable'; /*0x4266dc*/
  if ( v2 ) /*0x4266e4*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 33) + 52))(*((_DWORD *)this + 33)); /*0x4266ee*/
    *((_BYTE *)this + 137) = 0; /*0x4266f1*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 899); /*0x4266f7*/
  *((_DWORD *)this + 33) = 0; /*0x4266fd*/
  if ( v3 ) /*0x426705*/
  {
    (**v3)(v3, 1); /*0x42670b*/
    *((_DWORD *)this + 899) = 0; /*0x42670d*/
  }
  if ( *((_DWORD *)this + 900) ) /*0x426713*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x42671e*/
    *((_DWORD *)this + 900) = 0; /*0x426726*/
  }
  *((_BYTE *)this + 136) = 0; /*0x42672c*/
  *(_DWORD *)this->__pad_0 = &Animate::`vftable'; /*0x426732*/
}



// ==== 0x00426740  sub_426740  this=-  sig=ida-proto ====
int sub_426740()
{
  return 2816; /*0x426745*/
}



// ==== 0x00426750  AnimFile::AddRef  this=AnimFile  sig=csp ====
char __userpurge AnimFile::AddRef@<al>(AnimFile *this, int a2@<ebx>, int a3)
{
  int v3; // ecx
  int v4; // esi
  ObjectClass *v6; // [esp+0h] [ebp-4h]

  v4 = v3; /*0x426751*/
  *(_DWORD *)(v3 + 132) = this; /*0x426759*/
  if ( !this ) /*0x42675f*/
    return 0; /*0x426789*/
  if ( !(*(unsigned __int8 (__thiscall **)(AnimFile *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x426763*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v4 + 132) + 28))(*(_DWORD *)(v4 + 132), 1); /*0x426774*/
    *(_BYTE *)(v4 + 137) = 1; /*0x426777*/
  }
  return sub_4267F0(v6, a2); /*0x426785*/
}



// ==== 0x00426790  AnimFile::Release  this=AnimFile  sig=csp ====
void __thiscall AnimFile::Release(AnimFile *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  if ( *((_BYTE *)this + 137) ) /*0x426796*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 33) + 52))(*((_DWORD *)this + 33)); /*0x4267a6*/
    *((_BYTE *)this + 137) = 0; /*0x4267a9*/
  }
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 899); /*0x4267af*/
  *((_DWORD *)this + 33) = 0; /*0x4267b5*/
  if ( v2 ) /*0x4267bd*/
  {
    (**v2)(v2, 1); /*0x4267c3*/
    *((_DWORD *)this + 899) = 0; /*0x4267c5*/
  }
  if ( *((_DWORD *)this + 900) ) /*0x4267cb*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x4267d6*/
    *((_DWORD *)this + 900) = 0; /*0x4267de*/
  }
  *((_BYTE *)this + 136) = 0; /*0x4267e4*/
}



// ==== 0x004267F0  ObjectClass::method_4267F0  this=ObjectClass  sig=csp ====
char __usercall sub_4267F0@<al>(ObjectClass *this, int a2@<ebx>)
{
  int v2; // ecx
  _DWORD **v3; // esi
  int v4; // edx
  _BYTE *v5; // ecx
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int v10; // edi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // cx
  _DWORD *v13; // edi
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]

  v3 = (_DWORD **)v2; /*0x4267f2*/
  if ( !*(_BYTE *)(v2 + 136) && *(_DWORD *)(v2 + 132) ) /*0x426803*/
  {
    *(_BYTE *)(v2 + 136) = 1; /*0x426820*/
    memset((void *)(v2 + 140), 0, 0x80u); /*0x426828*/
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(v2 + 132) + 36))( /*0x426838*/
      *(_DWORD *)(v2 + 132),
      v2 + 140,
      128,
      a2);
    memset(v3 + 1, 0, 0x80u); /*0x426847*/
    (*(void (__thiscall **)(_DWORD *, _DWORD **, int))(*v3[33] + 36))(v3[33], v3 + 1, 128); /*0x426857*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v3[33] + 40))(v3[33], 0, 1); /*0x426866*/
    (*(void (__thiscall **)(_DWORD *, _DWORD **, int))(*v3[33] + 36))(v3[33], v3 + 67, 1024); /*0x42687d*/
    v4 = 0; /*0x426880*/
    v5 = (char *)v3 + 269; /*0x426882*/
    do /*0x4268c7*/
    {
      v6 = *(v5 - 1); /*0x42688b*/
      LOBYTE(retaddr) = v5[1]; /*0x42688e*/
      BYTE1(retaddr) = *v5; /*0x426894*/
      v7 = v4 % 256; /*0x4268a7*/
      ++v4; /*0x4268ab*/
      v5 += 4; /*0x4268ac*/
      v8 = (int)v3 + 2 * v7 + v7 + 1292; /*0x4268b5*/
      *(_WORD *)v8 = (_WORD)retaddr; /*0x4268c1*/
      *(_BYTE *)(v8 + 2) = v6; /*0x4268c4*/
    }
    while ( v4 < 256 ); /*0x4268c7*/
    memset(v3 + 515, 0, 0x600u); /*0x4268d8*/
    (*(void (__thiscall **)(_DWORD *, _DWORD **))(*v3[33] + 36))(v3[33], v3 + 515); /*0x4268e8*/
    if ( !sub_426990((ObjectClass *)v3) ) /*0x4268ed*/
    {
      ((void (__thiscall *)(_DWORD **))(*v3)[2])(v3); /*0x4268fb*/
      return 0; /*0x426903*/
    }
    v10 = __2_YAPAXI_Z(0x20u); /*0x42690b*/
    if ( v10 ) /*0x426912*/
    {
      v11 = *((_WORD *)v3 + 80); /*0x426918*/
      v12 = *((_WORD *)v3 + 81); /*0x42691f*/
      *(_DWORD *)(v10 + 4) = v11; /*0x426926*/
      *(_DWORD *)(v10 + 8) = v12; /*0x42692c*/
      *(_DWORD *)(v10 + 12) = 0; /*0x426935*/
      *(_DWORD *)v10 = &XSurface_Vtable; /*0x42693c*/
      *(_DWORD *)(v10 + 16) = 1; /*0x426942*/
      Buffer::Init((Buffer *)(v10 + 20), 0, v12 * v11); /*0x426949*/
      *(_DWORD *)v10 = &BSurface_Vtable; /*0x42694e*/
    }
    else
    {
      v10 = 0; /*0x426956*/
    }
    v3[899] = (_DWORD *)v10; /*0x42695d*/
    v13 = (_DWORD *)__2_YAPAXI_Z(0x10000u); /*0x42696b*/
    v3[900] = v13; /*0x426974*/
    memset(v13, 0, 0x10000u); /*0x42697a*/
  }
  return *((_BYTE *)v3 + 136); /*0x4268fe*/
}



// ==== 0x00426990  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_426990(ObjectClass *this)
{
  char result; // al
  int v2; // esi
  int v3; // edx
  _WORD *i; // ecx

  if ( *(_DWORD *)&this->onBridge == 541478988 /*0x4269f7*/
    && this->location[0] == 1296649793
    && *(_WORD *)&this->isAliveFlag == 256
    && this->lastLayer <= 0xFFFFu
    && *(_WORD *)&this->isInLogic <= 0x100u
    && *(_WORD *)this->alignmentPadding99 == 1280
    && LOWORD(this->location[1]) == 320
    && HIWORD(this->location[1]) == 200 )
  {
    result = 1; /*0x4269ff*/
    if ( BYTE1(this->lineTrailer) <= 1u /*0x426a17*/
      && HIBYTE(this->lineTrailer) == 1
      && !BYTE2(this->lineTrailer)
      && !LOBYTE(this->lineTrailer) )
    {
      v2 = 0; /*0x426a23*/
      v3 = *(unsigned __int16 *)&this->alignmentPadding91[1]; /*0x426a25*/
      if ( !(_WORD)v3 ) /*0x426a2e*/
        return result; /*0x426a2e*/
      for ( i = (_WORD *)((char *)this + 2062); *i <= 0x100u; i += 3 ) /*0x426a30*/
      {
        if ( ++v2 >= v3 ) /*0x426a43*/
          return result; /*0x426a43*/
      }
    }
  }
  return 0; /*0x426a45*/
}



// ==== 0x00426A50  AnimFile::Load  this=AnimFile  sig=csp ====
int __thiscall AnimFile::Load(AnimFile *this)
{
  int result; // eax

  result = *((_DWORD *)this + 51); /*0x426a56*/
  if ( *((_BYTE *)this + 166) ) /*0x426a50*/
    --result; /*0x426a60*/
  return result; /*0x426a61*/
}



// ==== 0x00426A73  ObjectClass::?UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ  this=ObjectClass  sig=csp ====
struct Concurrency::details::VirtualProcessor *__thiscall _UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ(
        Concurrency::details::InternalContextBase *this)
{
  return (struct Concurrency::details::VirtualProcessor *)this->owningHouseIndex; /*0x426a79*/
}



// ==== 0x00426A80  AbstractClass::getMapCoords  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::getMapCoords(AbstractClass *this)
{
  return *((unsigned __int16 *)this + 81); /*0x426a89*/
}



// ==== 0x00426A90  AnimFile::ddtor  this=AnimFile  sig=csp ====
int __thiscall AnimFile::ddtor(AnimFile *this, int a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // edi
  int v14; // edx
  unsigned __int16 *v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edi
  int v20; // ebp
  int v21; // edx
  unsigned __int16 *v22; // ecx
  unsigned __int16 v23; // ax
  int v24; // ebx
  int v25; // ebp
  int v26; // edi
  int v27; // edx
  unsigned __int16 *v28; // ecx
  int v29; // eax
  int v30; // ecx
  unsigned __int16 *v31; // eax
  int v32; // ebx
  int v33; // ecx
  int v34; // [esp+2Ch] [ebp-18h]
  int i; // [esp+38h] [ebp-Ch]
  char *v36; // [esp+3Ch] [ebp-8h]
  __int16 *v37; // [esp+40h] [ebp-4h]

  if ( !*((_BYTE *)this + 136) ) /*0x426a96*/
    return 0; /*0x426aa0*/
  v4 = *((_DWORD *)this + 901); /*0x426aa9*/
  if ( v4 > a2 && (!*((_BYTE *)this + 166) || !*((_BYTE *)this + 167) || v4 != *((_DWORD *)this + 37) || a2) ) /*0x426ada*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 899) + 24))(*((_DWORD *)this + 899), 0); /*0x426af5*/
    *((_DWORD *)this + 901) = -1; /*0x426af8*/
  }
  if ( *((_DWORD *)this + 901) != a2 ) /*0x426b04*/
  {
    v5 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 899) + 92))(*((_DWORD *)this + 899), 0, 0); /*0x426b19*/
    v6 = *((_DWORD *)this + 899); /*0x426b1c*/
    v36 = (char *)v5; /*0x426b22*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 128))(v6); /*0x426b34*/
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 124))(v6) * v7; /*0x426b39*/
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 112))(v6) * v8; /*0x426b43*/
    v10 = *((_DWORD *)this + 901); /*0x426b46*/
    for ( i = v9; v10 != a2; v10 = *((_DWORD *)this + 901) ) /*0x426b52*/
    {
      v11 = v10 + 1; /*0x426b58*/
      *((_DWORD *)this + 901) = v11; /*0x426b59*/
      v12 = v11; /*0x426b5f*/
      if ( v11 < *((_DWORD *)this + 51) ) /*0x426b67*/
      {
        v13 = 0; /*0x426b6f*/
        v14 = *((unsigned __int16 *)this + 73); /*0x426b71*/
        if ( (_WORD)v14 ) /*0x426b7a*/
        {
          v15 = (unsigned __int16 *)((char *)this + 2060); /*0x426b80*/
          while ( 1 ) /*0x426b86*/
          {
            HIWORD(v16) = 0; /*0x426b86*/
            if ( *v15 <= v12 ) /*0x426b8d*/
            {
              LOWORD(v16) = *v15; /*0x426b88*/
              if ( v16 + v15[1] > v12 ) /*0x426b99*/
                break; /*0x426b99*/
            }
            ++v13; /*0x426b9b*/
            v15 += 3; /*0x426b9c*/
            if ( v13 >= v14 ) /*0x426ba1*/
              goto LABEL_42; /*0x426ba1*/
          }
          if ( v13 != -1 ) /*0x426bab*/
          {
            if ( *((_BYTE *)this + 136) && *((_DWORD *)this + 902) != v13 ) /*0x426bc1*/
            {
              v17 = *((_DWORD *)this + 33); /*0x426bc3*/
              *((_DWORD *)this + 902) = v13; /*0x426bce*/
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 40))(v17, (v13 << 16) + 2816, 0); /*0x426bde*/
              (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 33) + 36))( /*0x426c15*/
                *((_DWORD *)this + 33),
                *((_DWORD *)this + 900),
                *((unsigned __int16 *)this + 3 * v13 + 1032) + 2 * *((unsigned __int16 *)this + 3 * v13 + 1031) + 8);
            }
            v18 = 3 * v13; /*0x426c18*/
            v19 = *((_DWORD *)this + 900); /*0x426c1b*/
            v20 = v12 - *((unsigned __int16 *)this + v18 + 1030); /*0x426c38*/
            v21 = 2 * *((unsigned __int16 *)this + v18 + 1031) + 8; /*0x426c3c*/
            v22 = (unsigned __int16 *)(v19 + 8); /*0x426c40*/
            if ( v20 > 0 ) /*0x426c43*/
            {
              do /*0x426c50*/
              {
                v23 = *v22++; /*0x426c47*/
                v21 += v23; /*0x426c4d*/
                --v20; /*0x426c4f*/
              }
              while ( v20 ); /*0x426c50*/
            }
            v37 = (__int16 *)(v19 + v21 + 2); /*0x426c58*/
            if ( v19 + v21 != -2 ) /*0x426c5c*/
            {
              v24 = *((_DWORD *)this + 901); /*0x426c62*/
              v25 = 0; /*0x426c6e*/
              v34 = v24; /*0x426c72*/
              if ( v24 < *((_DWORD *)this + 51) ) /*0x426c7a*/
              {
                v26 = 0; /*0x426c82*/
                v27 = *((unsigned __int16 *)this + 73); /*0x426c84*/
                if ( (_WORD)v27 ) /*0x426c8d*/
                {
                  v28 = (unsigned __int16 *)((char *)this + 2060); /*0x426c93*/
                  while ( 1 ) /*0x426c99*/
                  {
                    HIWORD(v29) = 0; /*0x426c99*/
                    if ( *v28 <= v24 ) /*0x426ca0*/
                    {
                      LOWORD(v29) = *v28; /*0x426c9b*/
                      v24 = *((_DWORD *)this + 901); /*0x426cac*/
                      if ( v29 + v28[1] > v34 ) /*0x426cb2*/
                        break; /*0x426cb2*/
                    }
                    ++v26; /*0x426cb4*/
                    v28 += 3; /*0x426cb5*/
                    if ( v26 >= v27 ) /*0x426cba*/
                      goto LABEL_41; /*0x426cba*/
                  }
                  if ( v26 != -1 ) /*0x426cc4*/
                  {
                    if ( *((_BYTE *)this + 136) && *((_DWORD *)this + 902) != v26 ) /*0x426cda*/
                    {
                      v30 = *((_DWORD *)this + 33); /*0x426cdc*/
                      *((_DWORD *)this + 902) = v26; /*0x426ce7*/
                      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 40))(v30, (v26 << 16) + 2816, 0); /*0x426cf7*/
                      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 33) + 36))( /*0x426d28*/
                        *((_DWORD *)this + 33),
                        *((_DWORD *)this + 900),
                        *((unsigned __int16 *)this + 3 * v26 + 1032)
                      + 2 * *((unsigned __int16 *)this + 3 * v26 + 1031)
                      + 8);
                      AnimFile::Check(this, v26); /*0x426d2e*/
                      v25 = 0; /*0x426d33*/
                      v24 = v34; /*0x426d37*/
                    }
                    v31 = (unsigned __int16 *)(*((_DWORD *)this + 900) + 8); /*0x426d46*/
                    v32 = v24 - *((unsigned __int16 *)this + 3 * v26 + 1030); /*0x426d51*/
                    if ( v32 >= 0 ) /*0x426d53*/
                    {
                      v33 = v32 + 1; /*0x426d55*/
                      do /*0x426d69*/
                      {
                        v25 = *v31++; /*0x426d5a*/
                        if ( (unsigned __int16)v25 >= 2u ) /*0x426d63*/
                          v25 -= 2; /*0x426d65*/
                        --v33; /*0x426d68*/
                      }
                      while ( v33 ); /*0x426d69*/
                    }
                  }
                }
              }
LABEL_41:
              sub_4270D0((int)this, (unsigned int)v37, v37, v25, v36, i); /*0x426d6b*/
            }
          }
        }
      }
LABEL_42:
      if ( *((_DWORD *)this + 901) > *((_DWORD *)this + 51) ) /*0x426d90*/
        *((_DWORD *)this + 901) = 0; /*0x426d92*/
    }
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 899) + 96))(*((_DWORD *)this + 899)); /*0x426db6*/
  }
  return *((_DWORD *)this + 899); /*0x426aa2*/
}



// ==== 0x00426DD0  AnimFile::Check  this=AnimFile  sig=csp ====
int __thiscall AnimFile::Check(AnimFile *this, int a2)
{
  return *((unsigned __int16 *)this + 3 * a2 + 1032) + 2 * *((unsigned __int16 *)this + 3 * a2 + 1031) + 8; /*0x426df3*/
}



// ==== 0x00426E80  ObjectClass::method_426E80  this=ObjectClass  sig=csp ====
int __thiscall sub_426E80(UnitClass *this, int a2)
{
  int result; // eax
  int v3; // esi
  char *i; // edx
  int v5; // ecx

  if ( a2 >= this->missionTimer[1] ) /*0x426e8f*/
    return -1; /*0x426e8f*/
  result = 0; /*0x426e93*/
  v3 = *(unsigned __int16 *)&this->alignmentPadding91[1]; /*0x426e95*/
  if ( !(_WORD)v3 ) /*0x426e9e*/
    return -1; /*0x426ec3*/
  for ( i = &this->ToolTipText[292]; ; i += 6 ) /*0x426ea0*/
  {
    HIWORD(v5) = 0; /*0x426ea6*/
    if ( *(unsigned __int16 *)i <= a2 ) /*0x426ead*/
    {
      LOWORD(v5) = *(_WORD *)i; /*0x426ea8*/
      if ( v5 + *((unsigned __int16 *)i + 1) > a2 ) /*0x426eb9*/
        break; /*0x426eb9*/
    }
    if ( ++result >= v3 ) /*0x426ec1*/
      return -1; /*0x426ec1*/
  }
  return result; /*0x426ec6*/
}



// ==== 0x00426ED0  ObjectClass::method_426ED0  this=ObjectClass  sig=csp ====
int __thiscall sub_426ED0(UnitClass *this, int a2)
{
  int v3; // esi
  int v4; // edx
  char *i; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // edx
  unsigned __int16 v10; // si
  unsigned __int16 v11; // cx
  int v12; // edi
  int v13; // ebx
  int v14; // edx
  unsigned __int16 *v15; // ecx
  unsigned __int16 v16; // ax

  if ( a2 >= this->missionTimer[1] ) /*0x426ee0*/
    return 0; /*0x426ee0*/
  v3 = 0; /*0x426ee4*/
  v4 = *(unsigned __int16 *)&this->alignmentPadding91[1]; /*0x426ee6*/
  if ( !(_WORD)v4 ) /*0x426eef*/
    return 0; /*0x426eef*/
  for ( i = &this->ToolTipText[292]; ; i += 6 ) /*0x426ef1*/
  {
    HIWORD(v6) = 0; /*0x426ef7*/
    if ( *(unsigned __int16 *)i <= a2 ) /*0x426efe*/
    {
      LOWORD(v6) = *(_WORD *)i; /*0x426ef9*/
      if ( v6 + *((unsigned __int16 *)i + 1) > a2 ) /*0x426f0a*/
        break; /*0x426f0a*/
    }
    if ( ++v3 >= v4 ) /*0x426f12*/
      return 0; /*0x426f12*/
  }
  if ( v3 == -1 ) /*0x426f20*/
    return 0; /*0x426f14*/
  if ( LOBYTE(this->parachute) && *((_DWORD *)this + 902) != v3 ) /*0x426f32*/
  {
    v8 = *(_DWORD *)this->hasParachute; /*0x426f34*/
    *((_DWORD *)this + 902) = v3; /*0x426f3f*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 40))(v8, (v3 << 16) + 2816, 0); /*0x426f50*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)this->hasParachute + 36))( /*0x426f87*/
      *(_DWORD *)this->hasParachute,
      *((_DWORD *)this + 900),
      *(unsigned __int16 *)&this->ToolTipText[6 * v3 + 296]
    + 2 * *(unsigned __int16 *)&this->ToolTipText[6 * v3 + 294]
    + 8);
  }
  v9 = 3 * v3; /*0x426f8a*/
  v10 = *(_WORD *)&this->ToolTipText[6 * v3 + 292]; /*0x426f8f*/
  v11 = *(_WORD *)&this->ToolTipText[2 * v9 + 294]; /*0x426f99*/
  v12 = *((_DWORD *)this + 900); /*0x426fa4*/
  v13 = a2 - v10; /*0x426faa*/
  v14 = 2 * v11 + 8; /*0x426fac*/
  v15 = (unsigned __int16 *)(v12 + 8); /*0x426fb2*/
  if ( v13 > 0 ) /*0x426fb5*/
  {
    do /*0x426fc2*/
    {
      v16 = *v15++; /*0x426fb9*/
      v14 += v16; /*0x426fbf*/
      --v13; /*0x426fc1*/
    }
    while ( v13 ); /*0x426fc2*/
  }
  return v12 + v14 + 2; /*0x426f14*/
}



// ==== 0x00426FD0  ObjectClass::method_426FD0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_426FD0(UnitClass *this, int a2)
{
  int v2; // ebx
  unsigned int result; // eax
  int v5; // esi
  int v6; // edx
  char *i; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned __int16 *v10; // ecx
  int v11; // ebx
  int v12; // edx

  v2 = a2; /*0x426fd1*/
  result = 0; /*0x426fda*/
  if ( a2 < this->missionTimer[1] ) /*0x426fe2*/
  {
    v5 = 0; /*0x426fe6*/
    v6 = *(unsigned __int16 *)&this->alignmentPadding91[1]; /*0x426fe8*/
    if ( (_WORD)v6 ) /*0x426ff1*/
    {
      for ( i = &this->ToolTipText[292]; ; i += 6 ) /*0x426ff3*/
      {
        HIWORD(v8) = 0; /*0x426ff9*/
        if ( *(unsigned __int16 *)i <= a2 ) /*0x427000*/
        {
          LOWORD(v8) = *(_WORD *)i; /*0x426ffb*/
          if ( v8 + *((unsigned __int16 *)i + 1) > a2 ) /*0x42700c*/
            break; /*0x42700c*/
        }
        if ( ++v5 >= v6 ) /*0x427014*/
          return 0; /*0x427014*/
      }
      if ( v5 == -1 ) /*0x427022*/
        return 0; /*0x427022*/
      if ( LOBYTE(this->parachute) && *((_DWORD *)this + 902) != v5 ) /*0x427034*/
      {
        v9 = *(_DWORD *)this->hasParachute; /*0x427036*/
        *((_DWORD *)this + 902) = v5; /*0x427041*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 40))(v9, (v5 << 16) + 2816, 0); /*0x427052*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)this->hasParachute + 36))( /*0x427083*/
          *(_DWORD *)this->hasParachute,
          *((_DWORD *)this + 900),
          *(unsigned __int16 *)&this->ToolTipText[6 * v5 + 296]
        + 2 * *(unsigned __int16 *)&this->ToolTipText[6 * v5 + 294]
        + 8);
        v2 = a2; /*0x427086*/
      }
      v10 = (unsigned __int16 *)(*((_DWORD *)this + 900) + 8); /*0x427095*/
      v11 = v2 - *(unsigned __int16 *)&this->ToolTipText[6 * v5 + 292]; /*0x4270a0*/
      if ( v11 < 0 ) /*0x4270a2*/
        return 0; /*0x427016*/
      v12 = v11 + 1; /*0x4270a8*/
      do /*0x4270bc*/
      {
        result = *v10++; /*0x4270ad*/
        if ( (unsigned __int16)result >= 2u ) /*0x4270b6*/
          result -= 2; /*0x4270b8*/
        --v12; /*0x4270bb*/
      }
      while ( v12 ); /*0x4270bc*/
    }
  }
  return result; /*0x427018*/
}



// ==== 0x004270D0  sub_4270D0  this=AnimFile  sig=csp ====
char __fastcall sub_4270D0(int a1, unsigned int a2, __int16 *a3, int a4, char *a5, int a6)
{
  signed int v7; // ecx
  void *v8; // ebx
  int v9; // ebp
  char *v10; // esi
  char *i; // ebp
  char v12; // al
  unsigned int v13; // ecx
  char *v14; // edi
  unsigned int v15; // esi
  int v16; // eax
  char v17; // al
  char *v18; // edi
  int v19; // eax
  char *v20; // edi
  void *v21; // [esp+14h] [ebp+4h]

  if ( !a4 ) /*0x4270da*/
    return 1; /*0x4270e2*/
  v7 = a4 - 2; /*0x4270ed*/
  v8 = a5; /*0x4270f0*/
  v9 = *a3; /*0x4270f2*/
  v10 = (char *)(a3 + 1); /*0x4270f5*/
  v21 = a5; /*0x4270f8*/
  if ( a4 == 2 ) /*0x4270fe*/
    return 1; /*0x427106*/
  if ( v9 ) /*0x427111*/
  {
    if ( v9 == 1 && v7 >= 3 && v10[v7 - 3] == (char)0x80 && !v10[v7 - 2] && !v10[v7 - 1] ) /*0x42713e*/
    {
      for ( i = v10; ; i += a2 ) /*0x427146*/
      {
        while ( 1 ) /*0x4271ab*/
        {
          while ( 1 ) /*0x427171*/
          {
            while ( 1 ) /*0x42714e*/
            {
              while ( 1 ) /*0x427148*/
              {
                v12 = *i++; /*0x427148*/
                if ( v12 <= 0 ) /*0x42714e*/
                  break; /*0x42714e*/
                a2 = v12; /*0x427157*/
                v13 = (unsigned int)v12 >> 2; /*0x42715b*/
                qmemcpy(v8, i, 4 * v13); /*0x42715e*/
                v14 = (char *)v8 + 4 * v13; /*0x42715e*/
                v8 = (char *)v8 + v12; /*0x427162*/
                v21 = v8; /*0x427167*/
                qmemcpy(v14, &i[4 * v13], v12 & 3); /*0x42716b*/
                i += v12; /*0x42716d*/
              }
              if ( v12 ) /*0x427171*/
                break; /*0x427171*/
              LOBYTE(a2) = i[1]; /*0x42717e*/
              BYTE1(a2) = a2; /*0x427180*/
              v15 = (unsigned __int8)*i; /*0x427188*/
              v16 = a2 << 16; /*0x42718a*/
              LOWORD(v16) = a2; /*0x42718f*/
              memset32(v8, v16, v15 >> 2); /*0x427195*/
              i += 2; /*0x427199*/
              memset((char *)v8 + 4 * (v15 >> 2), a2, v15 & 3); /*0x42719d*/
              v8 = (char *)v8 + v15; /*0x4271a1*/
              v21 = v8; /*0x4271a3*/
            }
            v17 = v12 + 0x80; /*0x4271a9*/
            if ( !v17 ) /*0x4271ab*/
              break; /*0x4271ab*/
            v8 = (char *)v8 + v17; /*0x42722e*/
            v21 = v8; /*0x427230*/
          }
          a2 = *(unsigned __int16 *)i; /*0x4271af*/
          i += 2; /*0x4271b3*/
          if ( (__int16)a2 <= 0 ) /*0x4271b9*/
            break; /*0x4271b9*/
LABEL_22:
          v8 = (char *)v8 + a2; /*0x4271ff*/
          v21 = v8; /*0x427201*/
        }
        if ( !a2 ) /*0x4271bd*/
          return 1; /*0x4271bd*/
        a2 -= 0x8000; /*0x4271c3*/
        if ( (int)a2 >= 0x4000 ) /*0x4271cf*/
        {
          v18 = (char *)v8; /*0x4271d3*/
          a2 -= 0x4000; /*0x4271d8*/
          LOBYTE(v8) = *i; /*0x4271de*/
          BYTE1(v8) = *i++; /*0x4271e2*/
          v19 = (_DWORD)v8 << 16; /*0x4271e9*/
          LOWORD(v19) = (_WORD)v8; /*0x4271ec*/
          v8 = v21; /*0x4271ef*/
          memset32(v18, v19, a2 >> 2); /*0x4271f6*/
          memset(&v18[4 * (a2 >> 2)], v19, a2 & 3); /*0x4271fd*/
          goto LABEL_22; /*0x4271fd*/
        }
        qmemcpy(v8, i, 4 * (a2 >> 2)); /*0x427215*/
        v20 = (char *)v8 + 4 * (a2 >> 2); /*0x427215*/
        v8 = (char *)v8 + a2; /*0x427219*/
        v21 = v8; /*0x42721e*/
        qmemcpy(v20, &i[4 * (a2 >> 2)], a2 & 3); /*0x427222*/
      }
    }
    return 0; /*0x427120*/
  }
  else if ( v7 == a6 ) /*0x42723d*/
  {
    qmemcpy(a5, v10, v7); /*0x427254*/
    return 1; /*0x42725d*/
  }
  else
  {
    return 0; /*0x427245*/
  }
}



// ==== 0x00427270  Animate::setMapCoords  this=Animate  sig=csp ====
std::locale::facet *__thiscall AbstractClass::setMapCoords(Animate *this, char a2)
{
  this->m_0 = (int)&Animate::`vftable'; /*0x427279*/
  if ( (a2 & 1) != 0 ) /*0x42727f*/
    __3_YAXPAX_Z(this); /*0x427282*/
  return (std::locale::facet *)this; /*0x42728c*/
}



// ==== 0x00427290  AnimFile::Stub  this=AnimFile  sig=csp ====
char *__thiscall AnimFile::Stub(AnimFile *this)
{
  return (char *)this + 1292; /*0x427296*/
}



// ==== 0x004272A0  AnimFile::QueryInterface  this=AnimFile  sig=csp ====
void *__thiscall AnimFile::QueryInterface(AnimFile *this, char a2)
{
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v3 = *((_BYTE *)this + 137); /*0x4272a6*/
  *(_DWORD *)this->__pad_0 = &AnimFile::`vftable'; /*0x4272ac*/
  if ( v3 ) /*0x4272b4*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 33) + 52))(*((_DWORD *)this + 33)); /*0x4272be*/
    *((_BYTE *)this + 137) = 0; /*0x4272c1*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 899); /*0x4272c7*/
  *((_DWORD *)this + 33) = 0; /*0x4272cd*/
  if ( v4 ) /*0x4272d5*/
  {
    (**v4)(v4, 1); /*0x4272db*/
    *((_DWORD *)this + 899) = 0; /*0x4272dd*/
  }
  if ( *((_DWORD *)this + 900) ) /*0x4272e3*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x4272ee*/
    *((_DWORD *)this + 900) = 0; /*0x4272f6*/
  }
  *((_BYTE *)this + 136) = 0; /*0x427300*/
  *(_DWORD *)this->__pad_0 = &Animate::`vftable'; /*0x427308*/
  if ( (a2 & 1) != 0 ) /*0x42730e*/
    __3_YAXPAX_Z(this); /*0x427311*/
  return this; /*0x42731b*/
}



// ==== 0x00427320  sub_427320  this=-  sig=ida-proto ====
void sub_427320()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42732c*/
  dbl_89A1F8 = Math::Sqrt(v0 + v0); /*0x42733e*/
}



// ==== 0x00427350  sub_427350  this=-  sig=ida-proto ====
void sub_427350()
{
  dbl_89A248 = dbl_89A1F8 / 60.0; /*0x42735c*/
}



// ==== 0x00427370  sub_427370  this=-  sig=ida-proto ====
void sub_427370()
{
  dbl_89A230 = 1.0 / dbl_89A248; /*0x42737c*/
}



// ==== 0x00427390  sub_427390  this=-  sig=ida-proto ====
void sub_427390()
{
  dbl_89A228 = 0.0174532925199433 * 45.0; /*0x42739c*/
}



// ==== 0x004273B0  sub_4273B0  this=-  sig=ida-proto ====
void sub_4273B0()
{
  dbl_89A200 = 0.0174532925199433 * 60.0; /*0x4273bc*/
}



// ==== 0x004273D0  sub_4273D0  this=-  sig=ida-proto ====
void sub_4273D0()
{
  dbl_89A1D8 = 0.0174532925199433 * 90.0; /*0x4273dc*/
}



// ==== 0x004273F0  sub_4273F0  this=-  sig=ida-proto ====
__int64 sub_4273F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89A1D8 - dbl_89A200); /*0x427402*/
  result = Math::RoundToInt(v0 * dbl_89A1F8 * 0.5); /*0x427416*/
  dword_89A250 = result; /*0x42741b*/
  return result; /*0x427420*/
}



// ==== 0x00427430  sub_427430  this=-  sig=ida-proto ====
void sub_427430()
{
  dbl_89A208 = Math::ArcTan((double)dword_89A250 * 0.00390625); /*0x427447*/
}



// ==== 0x00427460  sub_427460  this=-  sig=ida-proto ====
void sub_427460()
{
  dbl_89A220 = Math::ArcTan((double)(2 * dword_89A250) / dbl_89A1F8); /*0x427482*/
}



// ==== 0x00427490  sub_427490  this=-  sig=ida-proto ====
__int64 sub_427490()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A250) + 0.5); /*0x4274ab*/
  dword_89A244 = result; /*0x4274b0*/
  return result; /*0x4274b6*/
}



// ==== 0x004274C0  sub_4274C0  this=-  sig=ida-proto ====
int sub_4274C0()
{
  word_89A1F0 = 0; /*0x4274c2*/
  word_89A1F2 = 0; /*0x4274c8*/
  return 0; /*0x4274ce*/
}



// ==== 0x004274D0  sub_4274D0  this=-  sig=ida-proto ====
int sub_4274D0()
{
  dword_89A210 = 0; /*0x4274d2*/
  dword_89A214 = 0; /*0x4274d7*/
  dword_89A218 = 0; /*0x4274dc*/
  return 0; /*0x4274e1*/
}



// ==== 0x004274F0  sub_4274F0  this=-  sig=ida-proto ====
int sub_4274F0()
{
  dword_89A240 = 0; /*0x4274f5*/
  dword_89A238 = 128; /*0x4274ff*/
  dword_89A23C = 128; /*0x427504*/
  return 128; /*0x427509*/
}



// ==== 0x00427510  sub_427510  this=-  sig=ida-proto ====
int sub_427510()
{
  dword_89A1E0 = 0; /*0x427512*/
  dword_89A1E4 = 0; /*0x427517*/
  dword_89A1E8 = 0; /*0x42751c*/
  dword_89A1EC = 0; /*0x427521*/
  return 0; /*0x427526*/
}



// ==== 0x00427530  AnimTypeClass::Construct  this=AnimTypeClass  sig=csp ====
_DWORD *__thiscall AnimTypeClass::Construct(AnimTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  AnimTypeClass **v6; // ecx

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x42753a*/
  this->MiddleFrameIndex = -1; /*0x427544*/
  this->MiddleFrameWidth = 0; /*0x42754a*/
  this->MiddleFrameHeight = 0; /*0x427550*/
  *(_DWORD *)this->__pad_2A0 = 0; /*0x427556*/
  this->AnimTypeClass_field_2A4 = 0; /*0x42755c*/
  this->Damage[0] = 0; /*0x427562*/
  this->Damage[1] = 0; /*0x427568*/
  this->Rate = 1; /*0x42756e*/
  this->Start = 0; /*0x427578*/
  this->LoopStart = 0; /*0x42757e*/
  this->LoopEnd = 0; /*0x427584*/
  this->End = 0; /*0x42758a*/
  this->LoopCount = 0; /*0x427590*/
  this->Next = 0; /*0x427596*/
  this->SpawnsParticle = -1; /*0x42759c*/
  this->NumParticles = 0; /*0x4275a2*/
  this->DetailLevel = 0; /*0x4275a8*/
  this->TranslucencyDetailLevel = 0; /*0x4275ae*/
  this->RandomLoopDelay[0] = 0; /*0x4275b4*/
  this->RandomLoopDelay[1] = 0; /*0x4275ba*/
  this->RandomRate[0] = 0; /*0x4275c0*/
  this->RandomRate[1] = 0; /*0x4275c6*/
  this->Translucency = 0; /*0x4275cc*/
  this->Spawns = 0; /*0x4275d2*/
  this->SpawnCount = 0; /*0x4275d8*/
  this->Report = -1; /*0x4275de*/
  this->StopSound = -1; /*0x4275e4*/
  this->BounceAnim = 0; /*0x4275ea*/
  this->ExpireAnim = 0; /*0x4275f0*/
  this->TrailerAnim = 0; /*0x4275f6*/
  this->TrailerSeperation = 0; /*0x4275fc*/
  this->Elasticity[0] = -1610612736; /*0x427602*/
  this->Elasticity[1] = 1072273817; /*0x42760c*/
  this->MinZVel[0] = 0; /*0x42761b*/
  this->MinZVel[1] = 1074528256; /*0x427621*/
  this->AnimTypeClass_field_double_320[0] = 0; /*0x427627*/
  this->AnimTypeClass_field_double_320[1] = 1074528256; /*0x42762d*/
  this->MaxXYVel[0] = 0; /*0x427633*/
  this->MaxXYVel[1] = 1076756480; /*0x427639*/
  this->Warhead = 0; /*0x427643*/
  this->DamageRadius = 0; /*0x427649*/
  this->TiberiumSpawnType = 0; /*0x42764f*/
  this->TiberiumSpreadRadius = 0; /*0x427655*/
  this->YSortAdjust = 0; /*0x42765b*/
  this->YDrawOffset = 0; /*0x427661*/
  this->ZAdjust = 0; /*0x427667*/
  this->MakeInfantry = -1; /*0x42766d*/
  this->RunningFrames = 0; /*0x427673*/
  this->IsFlamingGuy = 0; /*0x427679*/
  this->IsVeins = 0; /*0x42767f*/
  this->IsMeteor = 0; /*0x427685*/
  this->TiberiumChainReaction = 0; /*0x42768b*/
  this->IsTiberium = 0; /*0x427691*/
  this->HideIfNoOre = 0; /*0x427697*/
  this->Bouncer = 0; /*0x42769d*/
  this->Tiled = 0; /*0x4276a3*/
  this->ShouldUseCellDrawer = 1; /*0x4276a9*/
  this->UseNormalLight = 0; /*0x4276b0*/
  this->DemandLoad = 0; /*0x4276b6*/
  this->FreeLoad = 0; /*0x4276bc*/
  this->IsAnimatedTiberium = 0; /*0x4276c2*/
  this->AltPalette = 0; /*0x4276c8*/
  this->Normalized = 0; /*0x4276ce*/
  this->Layer[0] = 3; /*0x4276d4*/
  this->DoubleThick = 0; /*0x4276de*/
  this->Flat_flag = 0; /*0x4276e4*/
  this->Translucent = 0; /*0x4276ea*/
  this->Scorch = 0; /*0x4276f0*/
  this->Flamer = 0; /*0x4276f6*/
  this->Crater = 0; /*0x4276fc*/
  this->ForceBigCraters = 0; /*0x427702*/
  this->Sticky = 0; /*0x42770b*/
  this->PingPong = 0; /*0x427712*/
  this->Reverse = 0; /*0x427718*/
  this->Shadow = 0; /*0x42771e*/
  this->PsiWarning = 0; /*0x427724*/
  this->ShouldFogRemove = 1; /*0x42772a*/
  this->ObjectTypeClass = &AnimTypeClass::`vftable'; /*0x427731*/
  this->? = &AnimTypeClass::`vftable'; /*0x427737*/
  this->? = &AnimTypeClass::`vftable'; /*0x42773d*/
  this->? = &AnimTypeClass::`vftable'; /*0x427744*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x42774b*/
  this->? = 1; /*0x427750*/
  this->? = 1; /*0x427757*/
  this->? = 0; /*0x42775e*/
  this->? = 0; /*0x427764*/
  this->? = 1; /*0x42776a*/
  this->? = 1; /*0x427771*/
  this->? = 0; /*0x427778*/
  if ( FootClass_Array.?[0] < FootClass_Array.?[4] /*0x4277b0*/
    || (BYTE1(FootClass_Array.?[5]) || !FootClass_Array.?[4])
    && FootClass_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[2] + 8))(
         &FootClass_Array.?[2],
         FootClass_Array.?[4] + FootClass_Array.?[1],
         0) )
  {
    v3 = FootClass_Array.?[0]++; /*0x4277bd*/
    *(_DWORD *)(FootClass_Array.?[3] + 4 * v3) = this; /*0x4277cc*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x427803*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x427810*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x42781f*/
  }
  v5 = 0; /*0x427828*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x42782c*/
  {
LABEL_17:
    v5 = -1; /*0x427840*/
  }
  else
  {
    v6 = (AnimTypeClass **)FootClass_Array.?[3]; /*0x42782e*/
    while ( *v6 != this ) /*0x427836*/
    {
      ++v5; /*0x427838*/
      ++v6; /*0x427839*/
      if ( v5 >= FootClass_Array.?[0] ) /*0x42783e*/
        goto LABEL_17; /*0x42783e*/
    }
  }
  this->MiddleFrameIndex = v5; /*0x427842*/
  return &this->ObjectTypeClass; /*0x42784a*/
}



// ==== 0x00427940  LoadBuildingTypeClassTheatreSHP  this=BuildingTypeClass  sig=ida-proto ====
int __fastcall BuildingTypeClass_LoadTheatreSHP(int a1)
{
  int result; // eax
  int v3; // esi
  char v4; // al
  int v5; // eax
  int i; // [esp+8h] [ebp-204h]
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x427952*/
  for ( i = 0; i < dword_8B4160; ++i ) /*0x42795a*/
  {
    v3 = *((_DWORD *)dword_8B4154 + result); /*0x427968*/
    v4 = *(_BYTE *)(v3 + 556); /*0x427973*/
    if ( *(_BYTE *)(v3 + 862) ) /*0x42796b*/
    {
      if ( v4 || *(_BYTE *)(v3 + 567) ) /*0x427a2a*/
      {
        if ( *(_DWORD *)(v3 + 164) && *(_BYTE *)(v3 + 168) ) /*0x427a3c*/
        {
          __3_YAXPAX_Z(*(void **)(v3 + 164)); /*0x427a45*/
          *(_BYTE *)(v3 + 168) = 0; /*0x427a4d*/
        }
        *(_DWORD *)(v3 + 164) = 0; /*0x427a53*/
      }
    }
    else if ( v4 ) /*0x427981*/
    {
      if ( *(_DWORD *)(v3 + 164) && *(_BYTE *)(v3 + 168) ) /*0x427991*/
      {
        __3_YAXPAX_Z(*(void **)(v3 + 164)); /*0x42799a*/
        *(_BYTE *)(v3 + 168) = 0; /*0x4279a2*/
      }
      *(_DWORD *)(v3 + 164) = 0; /*0x4279c1*/
      _makepath(Buffer, 0, 0, (const char *)(v3 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x4279cc*/
      v5 = SearchMIXFile(Buffer, 1); /*0x4279da*/
      *(_DWORD *)(v3 + 164) = v5; /*0x4279e1*/
      if ( !v5 ) /*0x4279e7*/
      {
        _makepath(Buffer, 0, 0, (const char *)(v3 + 36), Ext); /*0x4279f6*/
        *(_DWORD *)(v3 + 164) = SearchMIXFile(Buffer, 1); /*0x427a09*/
      }
    }
    else if ( *(_BYTE *)(v3 + 567) ) /*0x427a11*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 160))(v3, a1); /*0x427a1e*/
    }
    result = i + 1; /*0x427a63*/
  }
  return result; /*0x427a72*/
}



// ==== 0x00427A80  AnimTypeClass::GetLoopCount  this=AnimTypeClass  sig=csp ====
char __thiscall AnimTypeClass::GetLoopCount(AnimTypeClass *this, int a2)
{
  SHPStruct *v2; // eax
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  LOBYTE(v2) = stru_A8EB00.?[391]; /*0x427a80*/
  if ( stru_A8EB00.?[391] || a2 != dword_822CF8 ) /*0x427aa0*/
  {
    if ( !this->? || this->DemandLoad ) /*0x427ab0*/
    {
      LOBYTE(v2) = this->?; /*0x427b2b*/
      if ( (_BYTE)v2 ) /*0x427b33*/
        LOBYTE(v2) = (*((char (__thiscall **)(AnimTypeClass *, int))this->ObjectTypeClass + 40))(this, a2); /*0x427b3a*/
    }
    else
    {
      if ( this->? && this->? ) /*0x427ac4*/
      {
        __3_YAXPAX_Z(this->?); /*0x427acf*/
        this->? = 0; /*0x427ad7*/
      }
      this->? = 0; /*0x427af6*/
      _makepath(Buffer, 0, 0, (const char *)this->?, (const char *)&off_7E1BC6 + 112 * a2); /*0x427b07*/
      v2 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427b15*/
      this->? = v2; /*0x427b1a*/
    }
  }
  return (char)v2; /*0x427b20*/
}



// ==== 0x00427B50  AnimTypeClass::GetWarhead  this=AnimTypeClass  sig=csp ====
char __thiscall AnimTypeClass::GetWarhead(AnimTypeClass *this, int a2)
{
  SHPStruct *v3; // eax
  char v4; // cl
  const char *ImageFile; // eax
  SHPStruct *Image; // ecx
  int End; // eax
  int unused_high; // eax
  char Shadow; // dl
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  LOBYTE(v3) = this->DemandLoad; /*0x427b59*/
  if ( !(_BYTE)v3 ) /*0x427b61*/
  {
    if ( this->? ) /*0x427b67*/
    {
      LOBYTE(v3) = ObjectTypeClass::Load2DArt((char *)this); /*0x427b71*/
    }
    else
    {
      if ( this->? && this->? ) /*0x427b85*/
      {
        __3_YAXPAX_Z(this->?); /*0x427b90*/
        this->? = 0; /*0x427b98*/
      }
      v4 = this->?[0]; /*0x427b9f*/
      ImageFile = this->?; /*0x427ba5*/
      this->? = 0; /*0x427bad*/
      if ( !v4 ) /*0x427bb7*/
        ImageFile = (const char *)this->?; /*0x427bb9*/
      _makepath(Buffer, 0, 0, ImageFile, Ext); /*0x427bcb*/
      TheaterObjectTypeClassSpecificID(Buffer, a2); /*0x427bde*/
      v3 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427be9*/
      this->? = v3; /*0x427bf0*/
      if ( !v3 ) /*0x427bf6*/
      {
        ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Buffer); /*0x427bfc*/
        v3 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427c07*/
        this->? = v3; /*0x427c0c*/
      }
    }
  }
  Image = this->?; /*0x427c12*/
  if ( Image ) /*0x427c1a*/
  {
    End = this->End; /*0x427c1c*/
    this->AnimTypeClass_field_2A4 = 1; /*0x427c22*/
    if ( !End ) /*0x427c2b*/
    {
      unused_high = SHIWORD(Image[1].unused); /*0x427c2d*/
      Shadow = this->Shadow; /*0x427c31*/
      this->End = unused_high; /*0x427c37*/
      if ( Shadow ) /*0x427c3f*/
        this->End = unused_high / 2; /*0x427c46*/
    }
    if ( !this->LoopEnd ) /*0x427c4c*/
      this->LoopEnd = this->End; /*0x427c5c*/
    this->MiddleFrameWidth = SHIWORD(Image[1].unused) / 2; /*0x427c6b*/
    this->MiddleFrameHeight = -1; /*0x427c74*/
    *(_DWORD *)this->__pad_2A0 = -1; /*0x427c7a*/
    LOBYTE(v3) = -1; /*0x427c71*/
  }
  return (char)v3; /*0x427c80*/
}



// ==== 0x00427CB0  AnimTypeClass::FindIndex  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::FindIndex(AnimTypeClass *this)
{
  int v2; // esi

  if ( !this ) /*0x427cb6*/
    return -1; /*0x427cb6*/
  v2 = 0; /*0x427cbd*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x427cc1*/
    return -1; /*0x427ce6*/
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v2) + 36), (char *)this) ) /*0x427cda*/
  {
    if ( ++v2 >= FootClass_Array.?[0] ) /*0x427ce4*/
      return -1; /*0x427ce4*/
  }
  return v2; /*0x427ce6*/
}



// ==== 0x00427D00  AnimTypeClass::LoadFromINI  this=AnimTypeClass  sig=csp ====
char __userpurge AnimTypeClass::LoadFromINI@<al>(AnimTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  int v6; // eax
  int Int_Overwrite; // eax
  int v8; // eax
  _DWORD *v10; // ebp
  _DWORD *v11; // eax
  int v12; // edx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  double v16; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v21; // eax
  int v23; // eax
  _DWORD *v24; // ebp
  _DWORD *v25; // eax
  char v26; // al
  char v27; // cl
  char v28; // al
  int v29; // eax
  int v30; // ebp
  int v31; // eax
  char v32; // cl
  char v33; // al
  char v34; // al
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // ebp
  int Index; // eax
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  _DWORD *v43; // ebp
  int v44; // ebp
  AnimTypeClass *v45; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // ebp
  int v48; // ebp
  AnimTypeClass *v49; // eax
  _DWORD *v50; // eax
 ... [22585 chars total]



// ==== 0x00428800  AnimTypeClass::SaveLoad_Prefix  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::SaveLoad_Prefix(AnimTypeClass *this, int a2)
{
  int result; // eax
  char v3[513]; // [esp+7h] [ebp-201h] BYREF

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x428814*/
  if ( result >= 0 ) /*0x42881b*/
  {
    if ( this ) /*0x428823*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)v3); /*0x42882c*/
      this->ObjectTypeClass = &AnimTypeClass::`vftable'; /*0x428831*/
      this->? = &AnimTypeClass::`vftable'; /*0x428837*/
      this->? = &AnimTypeClass::`vftable'; /*0x42883e*/
      this->? = &AnimTypeClass::`vftable'; /*0x428845*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x42884e*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x428855*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->Next); /*0x428866*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->ExpireAnim); /*0x428877*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TrailerAnim); /*0x428888*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->BounceAnim); /*0x428899*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->Spawns); /*0x4288aa*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->Warhead); /*0x4288bb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TiberiumSpawnType); /*0x4288cc*/
    if ( !this->DemandLoad ) /*0x4288d1*/
    {
      if ( this->? ) /*0x4288db*/
      {
        _makepath(&v3[1], 0, 0, (const char *)this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x428910*/
        this->? = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x428923*/
        return 0; /*0x428932*/
      }
      if ( this->? ) /*0x428935*/
        (*((void (__thiscall **)(AnimTypeClass *, int))this->ObjectTypeClass + 40))(this, dword_A8B230[130].uniqueId); /*0x42894f*/
    }
    return 0; /*0x428955*/
  }
  return result; /*0x42892b*/
}



// ==== 0x00428970  AnimTypeClass::SaveLoad_Prefix_0  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::SaveLoad_Prefix_0(AnimTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x42897f*/
  if ( result >= 0 ) /*0x428986*/
    return 0; /*0x428988*/
  return result; /*0x42898a*/
}



// ==== 0x00428990  AnimTypeClass::GetClassIdentifier  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::GetClassIdentifier(AnimTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x428996*/
    return -2147467261; /*0x428998*/
  *a2 = -1366608934; /*0x4289a6*/
  a2[1] = 298976796; /*0x4289ae*/
  a2[2] = 1610654892; /*0x4289b7*/
  a2[3] = unk_7E962C; /*0x4289c0*/
  return 0; /*0x42899d*/
}



// ==== 0x004289D0  AnimTypeClass::PowerDrainUpdate  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::PowerDrainUpdate(AnimTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x4289d9*/
  Power::TimerProcess(this->Layer[0]); /*0x4289e7*/
  LOBYTE(v3) = this->Normalized; /*0x4289ec*/
  Power::FlagProcess((Power *)a2, v3); /*0x4289f5*/
  LOBYTE(v4) = this->Flat_flag; /*0x4289fa*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x428a03*/
  LOBYTE(v5) = this->Translucent; /*0x428a08*/
  Power::FlagProcess((Power *)a2, v5); /*0x428a11*/
  LOBYTE(v6) = this->Scorch; /*0x428a16*/
  Power::FlagProcess((Power *)a2, v6); /*0x428a1f*/
  LOBYTE(v7) = this->Flamer; /*0x428a24*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x428a2d*/
  LOBYTE(v8) = this->Crater; /*0x428a32*/
  Power::FlagProcess((Power *)a2, v8); /*0x428a3b*/
  LOBYTE(v9) = this->Sticky; /*0x428a40*/
  Power::FlagProcess((Power *)a2, v9); /*0x428a49*/
  LOBYTE(v10) = this->PingPong; /*0x428a4e*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x428a57*/
  LOBYTE(v11) = this->Reverse; /*0x428a5c*/
  Power::FlagProcess((Power *)a2, v11); /*0x428a65*/
  LOBYTE(v12) = this->Shadow; /*0x428a6a*/
  Power::FlagProcess((Power *)a2, v12); /*0x428a73*/
  Power::TimerProcess(this->MiddleFrameWidth); /*0x428a81*/
  Checksummer::Add_double((Checksummer *)a2, this->Damage[0], this->Damage[1]); /*0x428a96*/
  LOBYTE(v13) = this->TiberiumChainReaction; /*0x428a9b*/
  Power::FlagProcess((Power *)a2, v13); /*0x428aa4*/
  Power::TimerProcess(this->Rate); /*0x428ab2*/
  Power::TimerProcess(this->Start); /*0x428ac0*/
  Power::TimerProcess(this->LoopStart); /*0x428ace*/
  Power::TimerProcess(this->LoopEnd); /*0x428adc*/
  Power::TimerProcess(this->End); /*0x428aea*/
  Power::TimerProcess(this->Report); /*0x428af8*/
  Power::TimerProcess(this->StopSound); /*0x428b06*/
  Power::TimerProcess(this->NumParticles); /*0x428b14*/
  Power::TimerProcess(this->DetailLevel); /*0x428b22*/
  Power::TimerProcess(this->TranslucencyDetailLevel); /*0x428b30*/
  Power::TimerProcess(this->RandomLoopDelay[0]); /*0x428b3e*/
  Power::TimerProcess(this->RandomLoopDelay[1]); /*0x428b4c*/
  Power::TimerProcess(this->Translucency); /*0x428b5a*/
  LOBYTE(v14) = this->Tiled; /*0x428b5f*/
  return Power::FlagProcess((Power *)a2, v14); /*0x428b6d*/
}



// ==== 0x00428B80  AnimTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
_DWORD *__thiscall AnimTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  AnimTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428b9c*/
    return 0; /*0x428bff*/
  v2 = 0; /*0x428bad*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x428bb1*/
  {
LABEL_6:
    v3 = (AnimTypeClass *)__2_YAPAXI_Z(0x378u); /*0x428bd6*/
    if ( v3 ) /*0x428be5*/
      return AnimTypeClass::Construct(v3, Source); /*0x428bf1*/
    return 0; /*0x428be5*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v2) + 36), Source) ) /*0x428bca*/
  {
    if ( ++v2 >= FootClass_Array.?[0] ) /*0x428bd4*/
      goto LABEL_6; /*0x428bd4*/
  }
  return *(_DWORD **)(FootClass_Array.?[3] + 4 * v2); /*0x428bef*/
}



// ==== 0x00428C10  AnimTypeClass::GetAnimData  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::GetAnimData(AnimTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = (int)this->Next; /*0x428c10*/
  if ( result == a2 ) /*0x428c1c*/
    this->Next = 0; /*0x428c1e*/
  return result; /*0x428c28*/
}



// ==== 0x00428C30  AnimTypeClass::GetDamage  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::GetDamage(AnimTypeClass *this)
{
  int result; // eax
  const char *ImageFile; // eax
  SHPStruct *v4; // eax
  SHPStruct *v5; // eax
  SHPStruct *Image; // esi
  CCFileClass v7; // [esp+4h] [ebp-2D8h] BYREF
  char v8[12]; // [esp+5Ch] [ebp-280h] BYREF
  int v9; // [esp+68h] [ebp-274h]
  CCFileClass v10; // [esp+70h] [ebp-26Ch] BYREF
  char v11[12]; // [esp+C8h] [ebp-214h] BYREF
  int v12; // [esp+D4h] [ebp-208h]
  char Buffer[512]; // [esp+DCh] [ebp-200h] BYREF

  result = (int)this->?; /*0x428c39*/
  if ( !result && this->DemandLoad ) /*0x428c47*/
  {
    Debug::Log(); /*0x428c5e*/
    ImageFile = this->?; /*0x428c69*/
    if ( !this->?[0] ) /*0x428c63*/
      ImageFile = (const char *)this->?; /*0x428c76*/
    _makepath(Buffer, 0, 0, ImageFile, Ext); /*0x428c8b*/
    if ( this->? ) /*0x428c90*/
    {
      _makepath(Buffer, 0, 0, (const char *)this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x428ccc*/
    }
    else if ( this->? ) /*0x428cd6*/
    {
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x428cf3*/
    }
    CCFileClass::Construct(&v7, Buffer); /*0x428d04*/
    v4 = (SHPStruct *)CCFileClass::ReadEntireFile(&v7); /*0x428d0d*/
    this->? = v4; /*0x428d14*/
    if ( v4 ) /*0x428d1a*/
    {
      this->? = 1; /*0x428d1c*/
    }
    else
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Buffer); /*0x428d2c*/
      CCFileClass::Construct(&v10, Buffer); /*0x428d3d*/
      v5 = (SHPStruct *)CCFileClass::ReadEntireFile(&v10); /*0x428d46*/
      this->? = v5; /*0x428d4d*/
      if ( v5 ) /*0x428d53*/
        this->? = 1; /*0x428d55*/
      *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x428d63*/
      v12 = 0; /*0x428d6b*/
      Vector::Clear((int)v11); /*0x428d76*/
      *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x428d7f*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x428d87*/
    }
    (*((void (__thiscall **)(AnimTypeClass *, int))this->ObjectTypeClass + 40))(this, dword_A8B230[130].uniqueId); /*0x428d9c*/
    Image = this->?; /*0x428da2*/
    *(_DWORD *)v7.CDFileClass = &CCFileClass::`vftable'; /*0x428dac*/
    v9 = 0; /*0x428db4*/
    Vector::Clear((int)v8); /*0x428dbc*/
    *(_DWORD *)v7.CDFileClass = &off_7E1668; /*0x428dc5*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x428dcd*/
    return (int)Image; /*0x428dd2*/
  }
  return result; /*0x428dd4*/
}



// ==== 0x00428DE0  AnimClass::FreeRenderBuffer  this=AnimClass  sig=csp ====
void __thiscall AnimClass::FreeRenderBuffer(AnimClass *this)
{
  if ( this->AnimClass_field_0x35D[1] && this->AnimClass_field_0xA4 ) /*0x428ded*/
  {
    if ( this->AnimClass_field_0x35D[2] ) /*0x428df7*/
    {
      Debug::Log(); /*0x428e0a*/
      __3_YAXPAX_Z(this->AnimClass_field_0xA4); /*0x428e16*/
      this->AnimClass_field_0xA4 = 0; /*0x428e1e*/
      this->__pad_A8[0] = 0; /*0x428e28*/
    }
  }
}



// ==== 0x00428E40  ObjectTypeClass::Thunk_AnimTypeClass_sub_428E40  this=ObjectTypeClass  sig=csp ====
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E40(ObjectTypeClass *this)
{
  return -1; /*0x428e43*/
}



// ==== 0x00428E50  AnimTypeClass::Thunk_AnimTypeClass_sub_428E50  this=AnimTypeClass  sig=csp ====
int __cdecl AnimTypeClass::Thunk_AnimTypeClass_sub_428E50(AnimTypeClass *this)
{
  return 5; /*0x428e55*/
}



// ==== 0x00428E60  AnimTypeClass::GetAuxField  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::GetAuxField(AnimTypeClass *this)
{
  return this->MiddleFrameIndex; /*0x428e66*/
}



// ==== 0x00428E70  AnimTypeClass::GetObjectSize  this=AnimTypeClass  sig=csp ====
int AnimTypeClass::GetObjectSize(AnimTypeClass *this)
{
  return 888; /*0x428e75*/
}



// ==== 0x00428E80  AnimTypeClass::Stub  this=AnimTypeClass  sig=csp ====
char __stdcall AnimTypeClass::Stub(AnimTypeClass *this, int a2)
{
  return 0; /*0x428e82*/
}



// ==== 0x00428E90  AnimTypeClass::StubReturnFalse  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::StubReturnFalse(AnimTypeClass *this)
{
  return 0; /*0x428e92*/
}



// ==== 0x00428EA0  AnimTypeClass::ddtor  this=AnimTypeClass  sig=csp ====
_DWORD *__thiscall AnimTypeClass::ddtor(AnimTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  AnimTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->ObjectTypeClass = &AnimTypeClass::`vftable'; /*0x428ead*/
  this->? = &AnimTypeClass::`vftable'; /*0x428eb3*/
  this->? = &AnimTypeClass::`vftable'; /*0x428eba*/
  this->? = &AnimTypeClass::`vftable'; /*0x428ec1*/
  v6 = this; /*0x428ecf*/
  v3 = (*(int (__thiscall **)(int *, AnimTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x428ed3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x428ee3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x428ee8*/
    for ( ; /*0x428eee*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x428ef6*/
    }
  }
  v6 = this; /*0x428f18*/
  v4 = (*(int (__thiscall **)(int *, AnimTypeClass **))(FootClass_Array.?[2] + 16))(&FootClass_Array.?[2], &v6); /*0x428f1c*/
  if ( v4 != -1 && v4 < FootClass_Array.?[0] ) /*0x428f2c*/
  {
    --FootClass_Array.?[0]; /*0x428f31*/
    for ( ; /*0x428f37*/
          v4 < FootClass_Array.?[0];
          *(_DWORD *)(FootClass_Array.?[3] + 4 * v4 - 4) = *(_DWORD *)(FootClass_Array.?[3] + 4 * v4) )
    {
      ++v4; /*0x428f3f*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x428f53*/
  if ( (a2 & 1) != 0 ) /*0x428f5d*/
    __3_YAXPAX_Z(this); /*0x428f60*/
  return &this->ObjectTypeClass; /*0x428f6a*/
}



// ==== 0x00428F70  globalHelper_028F70  this=-  sig=csp ====
_DWORD *__fastcall globalHelper_028F70(char *Source, int a2)
{
  int v4; // esi
  AnimTypeClass *v5; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428f8f*/
    return 0; /*0x428fec*/
  v4 = 0; /*0x428f9e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x428fa2*/
  {
LABEL_6:
    v5 = (AnimTypeClass *)__2_YAPAXI_Z(0x378u); /*0x428fc3*/
    if ( v5 ) /*0x428fd2*/
      return AnimTypeClass::Construct(v5, Source); /*0x428fdf*/
    return 0; /*0x428fd2*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x428fb9*/
  {
    if ( ++v4 >= *(_DWORD *)(a2 + 16) ) /*0x428fc1*/
      goto LABEL_6; /*0x428fc1*/
  }
  return *(_DWORD **)(*(_DWORD *)(a2 + 4) + 4 * v4); /*0x428fdc*/
}



// ==== 0x00428FF0  sub_428FF0  this=-  sig=ida-proto ====
int sub_428FF0()
{
  dword_89A260 = 0; /*0x428ff2*/
  dword_89A264 = 0; /*0x428ff7*/
  dword_89A268 = 0; /*0x428ffc*/
  dword_89A26C = 0; /*0x429001*/
  return 0; /*0x429006*/
}



// ==== 0x00429010  sub_429010  this=-  sig=ida-proto ====
void sub_429010()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42901c*/
  dbl_89A278 = Math::Sqrt(v0 + v0); /*0x42902e*/
}



// ==== 0x00429040  sub_429040  this=-  sig=ida-proto ====
void sub_429040()
{
  dbl_89A2C8 = dbl_89A278 / 60.0; /*0x42904c*/
}



// ==== 0x00429060  sub_429060  this=-  sig=ida-proto ====
void sub_429060()
{
  dbl_89A2B0 = 1.0 / dbl_89A2C8; /*0x42906c*/
}



// ==== 0x00429080  sub_429080  this=-  sig=ida-proto ====
void sub_429080()
{
  dbl_89A2A8 = 0.0174532925199433 * 45.0; /*0x42908c*/
}



// ==== 0x004290A0  sub_4290A0  this=-  sig=ida-proto ====
void sub_4290A0()
{
  dbl_89A280 = 0.0174532925199433 * 60.0; /*0x4290ac*/
}



// ==== 0x004290C0  sub_4290C0  this=-  sig=ida-proto ====
void sub_4290C0()
{
  dbl_89A258 = 0.0174532925199433 * 90.0; /*0x4290cc*/
}



// ==== 0x004290E0  sub_4290E0  this=-  sig=ida-proto ====
__int64 sub_4290E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89A258 - dbl_89A280); /*0x4290f2*/
  result = Math::RoundToInt(v0 * dbl_89A278 * 0.5); /*0x429106*/
  dword_89A2D0 = result; /*0x42910b*/
  return result; /*0x429110*/
}



// ==== 0x00429120  sub_429120  this=-  sig=ida-proto ====
void sub_429120()
{
  dbl_89A288 = Math::ArcTan((double)dword_89A2D0 * 0.00390625); /*0x429137*/
}



// ==== 0x00429150  sub_429150  this=-  sig=ida-proto ====
void sub_429150()
{
  dbl_89A2A0 = Math::ArcTan((double)(2 * dword_89A2D0) / dbl_89A278); /*0x429172*/
}



// ==== 0x00429180  sub_429180  this=-  sig=ida-proto ====
__int64 sub_429180()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A2D0) + 0.5); /*0x42919b*/
  dword_89A2C4 = result; /*0x4291a0*/
  return result; /*0x4291a6*/
}



// ==== 0x004291B0  sub_4291B0  this=-  sig=ida-proto ====
int sub_4291B0()
{
  word_89A270 = 0; /*0x4291b2*/
  word_89A272 = 0; /*0x4291b8*/
  return 0; /*0x4291be*/
}



// ==== 0x004291C0  sub_4291C0  this=-  sig=ida-proto ====
int sub_4291C0()
{
  dword_89A290 = 0; /*0x4291c2*/
  dword_89A294 = 0; /*0x4291c7*/
  dword_89A298 = 0; /*0x4291cc*/
  return 0; /*0x4291d1*/
}



// ==== 0x004291E0  sub_4291E0  this=-  sig=ida-proto ====
int sub_4291E0()
{
  dword_89A2C0 = 0; /*0x4291e5*/
  dword_89A2B8 = 128; /*0x4291ef*/
  dword_89A2BC = 128; /*0x4291f4*/
  return 128; /*0x4291f9*/
}



// ==== 0x00429200  sub_429200  this=-  sig=ida-proto ====
void sub_429200()
{
  punk.field_0 = (struct IUnknownVtbl *)&off_7E36D4; /*0x429200*/
}



// ==== 0x00429210  TiberianSunClassFactory::QueryInterface_Helper  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::QueryInterface_Helper(TiberianSunClassFactory *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+14h] [ebp+Ch]

  if ( !v4 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(a3, &unk_7F7CA0, 0x10u) && memcmp(a3, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *v4 = a2; /*0x42925c*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x429261*/
  return 0; /*0x42921a*/
}



// ==== 0x00429270  TiberianSunClassFactory::QueryInterface_Dispatch  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::QueryInterface_Dispatch(TiberianSunClassFactory *this, int a2, const IID *a3, void **a4)
{
  _DWORD *v4; // eax
  int v6; // ebx
  _DWORD *v7; // [esp+20h] [ebp+10h]

  v4 = v7; /*0x429270*/
  if ( !v7 ) /*0x42927a*/
    return -2147024809; /*0x429285*/
  *v7 = 0; /*0x42928c*/
  if ( a3 ) /*0x429294*/
    return -2147221232; /*0x42929f*/
  v6 = -2147467262; /*0x4292b4*/
  if ( !memcmp(a4, &unk_7E36C0, 0x10u) || !memcmp(a4, &IID_IUnknown, 0x10u) ) /*0x4292cb*/
  {
    if ( !&punk ) /*0x4292d6*/
      return -2147024882; /*0x4292e1*/
    v6 = (*(int (__stdcall **)(IUnknown *, void **, _DWORD *))punk.field_0)(&punk, a4, v7); /*0x4292f3*/
    if ( v6 < 0 ) /*0x4292f7*/
      __3_YAXPAX_Z(&punk); /*0x4292fe*/
    v4 = v7; /*0x429306*/
  }
  if ( !memcmp(a4, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&dword_87F7E8 ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v6 = (*(int (__stdcall **)(IUnknown *, void **, _DWORD *))dword_87F7E8.field_0)(&dword_87F7E8, a4, v4); /*0x429340*/
    if ( v6 < 0 ) /*0x429344*/
      __3_YAXPAX_Z(&dword_87F7E8); /*0x42934b*/
  }
  return v6; /*0x42927c*/
}



// ==== 0x00429360  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __stdcall sub_429360(int a1, const void *a2, _DWORD *a3)
{
  int result; // eax

  if ( !a3 ) /*0x429369*/
    return -2147467261; /*0x42936d*/
  if ( !memcmp(a2, &unk_7E36C0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x42939a*/
  {
    *a3 = a1; /*0x4293cb*/
    (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x4293d0*/
    return 0; /*0x4293d5*/
  }
  else
  {
    result = 0; /*0x4293aa*/
    if ( !memcmp(a2, &unk_7EA6E8, 0x10u) ) /*0x4293ac*/
      *a3 = &dword_87F7E8; /*0x4293b2*/
    else
      return -2147467262; /*0x4293be*/
  }
  return result; /*0x42936b*/
}



// ==== 0x004293E0  ApplicationClass::method_4293E0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4293E0(ApplicationClass *this)
{
  return 1; /*0x4293e5*/
}



// ==== 0x004293F0  ApplicationClass::method_4293F0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4293F0(ApplicationClass *this)
{
  return 1; /*0x4293f5*/
}



// ==== 0x00429400  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429400(ApplicationClass *this, int a2)
{
  int v3; // [esp+8h] [ebp+8h]

  return (**(int (__stdcall ***)(int, void *, int))a2)(a2, &unk_7E36C0, v3); /*0x429413*/
}



// ==== 0x00429420  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429420(ApplicationClass *this, BSTR *a2)
{
  BSTR *v3; // [esp+Ch] [ebp+8h]

  if ( !v3 ) /*0x429427*/
    return -2147467261; /*0x429429*/
  *v3 = SysAllocString(&psz); /*0x42943d*/
  return 0; /*0x42942e*/
}



// ==== 0x00429450  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429450(ApplicationClass *this, BSTR *a2)
{
  BSTR *v3; // [esp+Ch] [ebp+8h]

  if ( !v3 ) /*0x429457*/
    return -2147467261; /*0x429459*/
  *v3 = SysAllocString(aSun); /*0x42946d*/
  return 0; /*0x42945e*/
}



// ==== 0x00429480  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429480(ApplicationClass *this, int a2)
{
  int v3; // [esp+8h] [ebp+8h]

  return (**(int (__stdcall ***)(int, void *, int))a2)(a2, &unk_7E36C0, v3); /*0x429493*/
}



// ==== 0x004294A0  ApplicationClass::method_4294A0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4294A0(ApplicationClass *this)
{
  return 0; /*0x4294a2*/
}



// ==== 0x004294B0  ApplicationClass::method_4294B0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4294B0(ApplicationClass *this, BSTR *a2)
{
  WCHAR WideCharStr[32]; // [esp+4h] [ebp-40h] BYREF
  BSTR *v4; // [esp+4Ch] [ebp+8h]

  if ( !v4 ) /*0x4294ba*/
    return -2147467261; /*0x4294bc*/
  MultiByteToWideChar(0, 1u, (LPCCH)&dword_A8B230[130].abstractFlags, -1, WideCharStr, 32); /*0x4294e2*/
  *v4 = SysAllocString(WideCharStr); /*0x4294f3*/
  return 0; /*0x4294c1*/
}



// ==== 0x00429500  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429500(ApplicationClass *this, _DWORD *a2)
{
  int uniqueId; // edi
  int *p_vtable2; // esi
  int *v5; // [esp+Ch] [ebp+8h]

  if ( !v5 ) /*0x429507*/
    return -2147467261; /*0x429509*/
  uniqueId = dword_A8B230[43].uniqueId; /*0x429519*/
  if ( dword_A8B230[43].ptr_8 != -1 ) /*0x42952e*/
  {
    p_vtable2 = &dword_A8B230[43].ptr_8; /*0x42951f*/
    uniqueId += Timer::GetTicks() - *p_vtable2; /*0x42953a*/
  }
  *v5 = uniqueId; /*0x42953c*/
  return 0; /*0x42950e*/
}



// ==== 0x00429550  ApplicationClass::COMStub  this=ApplicationClass  sig=csp ====
int __thiscall COMStub_429550(ApplicationClass *this, _DWORD *a2)
{
  _DWORD *v3; // [esp+8h] [ebp+8h]

  return SwizzleManagerClass::Process((int)&SwizzleManagerClass_Instance, &IID_ISwizzle, v3); /*0x429564*/
}



// ==== 0x00429570  sub_429570  this=-  sig=ida-proto ====
int sub_429570()
{
  dword_89C268 = 0; /*0x429572*/
  dword_89C26C = 0; /*0x429577*/
  dword_89C270 = 0; /*0x42957c*/
  dword_89C274 = 0; /*0x429581*/
  return 0; /*0x429586*/
}



// ==== 0x00429590  sub_429590  this=-  sig=ida-proto ====
void sub_429590()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42959c*/
  dbl_89C280 = Math::Sqrt(v0 + v0); /*0x4295ae*/
}



// ==== 0x004295C0  sub_4295C0  this=-  sig=ida-proto ====
void sub_4295C0()
{
  dbl_89C2D0 = dbl_89C280 / 60.0; /*0x4295cc*/
}



// ==== 0x004295E0  sub_4295E0  this=-  sig=ida-proto ====
void sub_4295E0()
{
  dbl_89C2B8 = 1.0 / dbl_89C2D0; /*0x4295ec*/
}



// ==== 0x00429600  sub_429600  this=-  sig=ida-proto ====
void sub_429600()
{
  dbl_89C2B0 = 0.0174532925199433 * 45.0; /*0x42960c*/
}



// ==== 0x00429620  sub_429620  this=-  sig=ida-proto ====
void sub_429620()
{
  dbl_89C288 = 0.0174532925199433 * 60.0; /*0x42962c*/
}



// ==== 0x00429640  sub_429640  this=-  sig=ida-proto ====
void sub_429640()
{
  dbl_89A2F8 = 0.0174532925199433 * 90.0; /*0x42964c*/
}



// ==== 0x00429660  sub_429660  this=-  sig=ida-proto ====
__int64 sub_429660()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89A2F8 - dbl_89C288); /*0x429672*/
  result = Math::RoundToInt(v0 * dbl_89C280 * 0.5); /*0x429686*/
  dword_89C2D8 = result; /*0x42968b*/
  return result; /*0x429690*/
}



// ==== 0x004296A0  sub_4296A0  this=-  sig=ida-proto ====
void sub_4296A0()
{
  dbl_89C290 = Math::ArcTan((double)dword_89C2D8 * 0.00390625); /*0x4296b7*/
}



// ==== 0x004296D0  sub_4296D0  this=-  sig=ida-proto ====
void sub_4296D0()
{
  dbl_89C2A8 = Math::ArcTan((double)(2 * dword_89C2D8) / dbl_89C280); /*0x4296f2*/
}



// ==== 0x00429700  sub_429700  this=-  sig=ida-proto ====
__int64 sub_429700()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C2D8) + 0.5); /*0x42971b*/
  dword_89C2CC = result; /*0x429720*/
  return result; /*0x429726*/
}



// ==== 0x00429730  sub_429730  this=-  sig=ida-proto ====
int sub_429730()
{
  dword_89C278 = 0; /*0x429732*/
  return 0; /*0x42973e*/
}



// ==== 0x00429740  sub_429740  this=-  sig=ida-proto ====
int sub_429740()
{
  dword_89C298 = 0; /*0x429742*/
  dword_89C29C = 0; /*0x429747*/
  dword_89C2A0 = 0; /*0x42974c*/
  return 0; /*0x429751*/
}



// ==== 0x00429760  sub_429760  this=-  sig=ida-proto ====
int sub_429760()
{
  dword_89C2C8 = 0; /*0x429765*/
  dword_89C2C0 = 128; /*0x42976f*/
  dword_89C2C4 = 128; /*0x429774*/
  return 128; /*0x429779*/
}



// ==== 0x00429780  WalkPathClassPath  this=-  sig=csp ====
_DWORD *__fastcall PathClass_WalkPath(_DWORD *a1, int *a2, int a3, int *a4)
{
  int v4; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF
  int v12; // [esp+14h] [ebp+8h]

  v4 = *a2; /*0x429781*/
  v11 = *a2; /*0x42978f*/
  if ( a3 <= 0 ) /*0x429793*/
  {
    *a1 = v4; /*0x42981d*/
    return a1; /*0x42981f*/
  }
  else
  {
    v7 = a3; /*0x42979f*/
    do /*0x42980f*/
    {
      v8 = *a4; /*0x4297a1*/
      if ( *a4 == 8 ) /*0x4297a6*/
      {
        v9 = *((__int16 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v11) + 139); /*0x4297b7*/
        if ( v9 == -1 ) /*0x4297c1*/
          v4 = 0; /*0x4297db*/
        else
          v4 = *(_DWORD *)(*((_DWORD *)dword_8B413C + v9) + 40); /*0x4297cc*/
      }
      else
      {
        LOWORD(v12) = v4 + LOWORD(dword_89F688[v8]); /*0x4297f9*/
        HIWORD(v12) = HIWORD(v11) + HIWORD(dword_89F688[v8]); /*0x4297fe*/
        v4 = v12; /*0x429803*/
      }
      ++a4; /*0x429807*/
      --v7; /*0x42980a*/
      v11 = v4; /*0x42980b*/
    }
    while ( v7 ); /*0x42980f*/
    *a1 = v4; /*0x429812*/
    return a1; /*0x429815*/
  }
}



// ==== 0x00429830  ObjectClass::ComputeMovementWeight  this=DynamicVectorClass_uint  sig=csp ====
double __thiscall ComputeMovementWeight(int this, int *a2, _DWORD *a3, char a4, int a5, int a6)
{
  _DWORD *v6; // esi
  int v7; // ebx
  bool v8; // zf
  int v9; // edi
  int v10; // ebp
  unsigned int v11; // esi
  _WORD *v12; // eax
  int v13; // esi
  _DWORD *v14; // esi
  int v15; // esi
  int v16; // edx
  double v17; // st7
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v22; // [esp+Ch] [ebp-18h]
  int v23; // [esp+10h] [ebp-14h]
  int v24; // [esp+14h] [ebp-10h] BYREF
  int v25; // [esp+18h] [ebp-Ch]
  int v26; // [esp+1Ch] [ebp-8h] BYREF
  char v27[4]; // [esp+20h] [ebp-4h] BYREF
  float v28; // [esp+34h] [ebp+10h]

  v6 = a3; /*0x429839*/
  v7 = *a3; /*0x429843*/
  v8 = a5 == 2; /*0x429845*/
  v23 = this; /*0x429850*/
  v28 = flt_81870C[a5]; /*0x429854*/
  v25 = *a2; /*0x429858*/
  if ( v8 ) /*0x42985c*/
  {
    if ( a4 ) /*0x429868*/
      v9 = *(_DWORD *)(v7 + 232); /*0x42986a*/
    else
      v9 = *(_DWORD *)(v7 + 228); /*0x429872*/
    v10 = 0; /*0x42987c*/
    if ( *(_DWORD *)(this + 60) ) /*0x429878*/
      goto LABEL_20; /*0x429878*/
    while ( v9 ) /*0x429888*/
    {
      if ( (*(_BYTE *)(v9 + 20) & 4) == 0 ) /*0x42989a*/
        goto LABEL_20; /*0x42989a*/
      if ( *(double *)(v9 + 1400) == 0.0 ) /*0x4298b1*/
      {
        v11 = *(_DWORD *)(v9 + 1504); /*0x4298b3*/
        if ( v11 == -1 ) /*0x4298bc*/
          break; /*0x4298bc*/
      }
      else
      {
        v11 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v9 + 904), &v26) >> 12) + 1) >> 1) & 7; /*0x4298dc*/
      }
      v12 = (_WORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v9 + 440))(v9, v27); /*0x4298e8*/
      v13 = v11 & 7; /*0x4298f1*/
      LOWORD(v22) = LOWORD(dword_89F688[v13]) + *v12; /*0x42990b*/
      HIWORD(v22) = v12[1] + HIWORD(dword_89F688[v13]); /*0x429919*/
      v24 = v22; /*0x429927*/
      v14 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v24); /*0x429930*/
      if ( (v14[80] & 0x100) != 0 /*0x429964*/
        && (*(_BYTE *)(v9 + 140)
         || *(char *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 444))(v9) + 283) - *((char *)v14 + 283) > 2) )
      {
        v15 = v14[58]; /*0x429966*/
      }
      else
      {
        v15 = v14[57]; /*0x42996e*/
      }
      this = v23; /*0x429974*/
      ++v10; /*0x429978*/
      v9 = v15; /*0x42997c*/
      if ( v10 >= 10 ) /*0x42997e*/
        goto LABEL_20; /*0x42997e*/
    }
    if ( *(_DWORD *)(this + 60) ) /*0x429986*/
LABEL_20:
      v28 = 4.0; /*0x42998d*/
    if ( *(_DWORD *)(this + 60) == 2 ) /*0x42999c*/
      v28 = 1000.0; /*0x42999e*/
    v6 = a3; /*0x4299a6*/
  }
  v16 = *(_DWORD *)(v7 + 320); /*0x4299aa*/
  if ( (v16 & 0x40000) != 0 ) /*0x4299b6*/
    v28 = v28 * 4.0; /*0x4299c2*/
  if ( !a4 || !*(_BYTE *)(this + 1) ) /*0x4299d2*/
    return v28; /*0x429a82*/
  v17 = 1.0; /*0x4299f1*/
  v18 = dword_7E3760[3 * (__int16)(*(_WORD *)(v7 + 38) - *(_WORD *)(v25 + 38)) /*0x429a05*/
                   + (__int16)(*(_WORD *)(v7 + 36) - *(_WORD *)(v25 + 36))];
  if ( (v16 & 0x800) != 0 ) /*0x429a0c*/
  {
    v19 = v6[dword_7E3730[v18]]; /*0x429a1b*/
    v20 = dword_7E3730[((_BYTE)v18 - 4) & 7]; /*0x429a1e*/
  }
  else
  {
    v19 = v6[dword_7E3710[v18]]; /*0x429a34*/
    v20 = dword_7E3710[((_BYTE)v18 - 4) & 7]; /*0x429a37*/
  }
  if ( (*(_DWORD *)(v19 + 320) & 0x100) == 0 ) /*0x429a4e*/
    return 10.0 * v28; /*0x429a58*/
  if ( (*(_DWORD *)(v6[v20] + 320) & 0x100) != 0 ) /*0x429a6b*/
    v17 = 2.0; /*0x429a6f*/
  return v17 * v28; /*0x429a5c*/
}



// ==== 0x00429A90  BuildingClass::UpdatePowerAnimation  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::UpdatePowerAnimation(int this, int a2, __int16 *a3, _DWORD *a4, int a5, int a6, char a7)
{
  __int16 *v7; // edi
  int v8; // ebp
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  float *v20; // edi
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int *v25; // eax
  int v26; // eax
  int *v27; // eax
  int v28; // ebx
  int v29; // edi
  int v30; // eax
  int v31; // edi
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ebp
  double v37; // st7
  char v38; // fps^1
  double v39; // st6
  bool v40; // c0
  char v41; // c2
  bool v42; // c3
  double v43; // st7
  char v44; // fps^1
  double v45; // st6
  bool v46; // c0
  char v47; // c2
  bool v48; // c3
  _DWORD *v49; // edi
  int v50; // ebx
  int *v51; // edi
  signed int v52; // ecx
  __int64 v53; // rax
  int v54; // ebx
  _DWORD *v55; // edi
  unsigned int v56; // ecx
  unsigned int v57; // edx
  int v58; // ebp
  int v59; // ebx
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // edx
  int v63; // ebp
  int v64; // ebx
  unsigned int v65; // ecx
  int v66; // ecx
  int v67; // eax
  __int64 v68; // rax
  int ***v69; // ecx
  int *v70; // edx
  int v71; // edi
  int v72; // ebp
  int v73; // ebx
  int v74; // ecx
  int v75; // eax
  int v76; // edi
  int v77; // ebp
  bool v78; // cc
  int *v79; // ecx
  int v80; // eax
  int v81; // ebx
  int ***v82; // edi
  int v83; // edi
  int v84; // edx
  int v85; // eax
  int v86; // edi
  int v87; // ebp
  int *v88; // eax
  int v89; // ebx
  int *v90; // edi
  int v92; // [esp-2h] [ebp-60h]
  char v93; // [esp+14h] [ebp-4Ah]
  char v94; // [esp+15h] [ebp-49h]
  int ***v95; // [esp+16h] [ebp-48h]
  int v96; // [esp+1Ah] [ebp-44h]
  int v97; // [esp+1Eh] [ebp-40h]
  int *v98; // [esp+22h] [ebp-3Ch]
  int *v99; // [esp+26h] [ebp-38h]
  int *v100; // [esp+26h] [ebp-38h]
  int v101; // [esp+2Ah] [ebp-34h]
  int *v102; // [esp+2Eh] [ebp-30h]
  int *v103; // [esp+2Eh] [ebp-30h]
  int v104; // [esp+32h] [ebp-2Ch]
  __int16 *v105; // [esp+32h] [ebp-2Ch]
  float v106; // [esp+36h] [ebp-28h]
  int v107; // [esp+36h] [ebp-28h]
  int *v108; // [esp+3Ah] [ebp-24h]
  int v109; // [esp+3Eh] [ebp-20h]
  int v110; // [esp+42h] [ebp-1Ch]
  float v111; // [esp+46h] [ebp-18h]
  float v112; // [esp+4Ah] [ebp-14h]
  int v113; // [esp+4Eh] [ebp-10h]
  int v114; // [esp+4Eh] [ebp-10h]
  int ***v115; // [esp+4Eh] [ebp-10h]

  v7 = a3; /*0x429a97*/
  v8 = a2; /*0x429a9b*/
  v101 = 0; /*0x429ab6*/
  v108 = (int *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * (*a3 + (a3[1] << 9))); /*0x429aca*/
  v10 = *v108; /*0x429ace*/
  v102 = (int *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * (*(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9))); /*0x429ad3*/
  v104 = *v108; /*0x429ad7*/
  a2 = *v102; /*0x429adf*/
  if ( !a2 || !v10 ) /*0x429aeb*/
    return 0; /*0x429aeb*/
  v11 = (int)a4; /*0x429af1*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a4 + 44))(a4) == 2 || (*(_DWORD *)(v104 + 320) & 0x100) == 0 ) /*0x429b0e*/
    v12 = *(char *)(v104 + 283); /*0x429b1c*/
  else
    v12 = *(char *)(v104 + 283) + 4; /*0x429b17*/
  *(_DWORD *)(this + 52) = v12; /*0x429b23*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 || !*(_BYTE *)(v11 + 140) ) /*0x429b32*/
    v13 = *(char *)(a2 + 283); /*0x429b50*/
  else
    v13 = *(char *)(a2 + 283) + 4; /*0x429b47*/
  *(_DWORD *)(this + 48) = v13; /*0x429b57*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11) + 3220) ) /*0x429b64*/
  {
    if ( (*(_DWORD *)(a2 + 320) & 0x100) != 0 ) /*0x429b7b*/
    {
      v14 = *(_DWORD *)(this + 48); /*0x429b97*/
      v15 = *(_DWORD *)(v11 + 164) / dword_89C2D8 - v14; /*0x429ba3*/
      if ( (int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) > 2 ) /*0x429bab*/
        *(_DWORD *)(this + 48) = v14 + 4; /*0x429bb0*/
    }
  }
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x429bb7*/
  v17 = *(_DWORD *)(this + 64); /*0x429bc3*/
  *(_DWORD *)(this + 44) = *(_DWORD *)(v16 + 1660); /*0x429bc6*/
  *(_DWORD *)(this + 108) = 0; /*0x429bcd*/
  *(_DWORD *)(this + 112) = *(_DWORD *)v8; /*0x429bda*/
  v110 = v17; /*0x429be2*/
  v95 = (int ***)BuildingClass::AddRectToDrawList((BuildingClass *)this, 0, v102, v7, 0.0); /*0x429bef*/
  if ( *(_WORD *)v8 == *v7 && *(_WORD *)(v8 + 2) == v7[1] && *(_DWORD *)(this + 48) == *(_DWORD *)(this + 52) ) /*0x429c0a*/
    return 0; /*0x429c0a*/
  if ( *(_DWORD *)(this + 60) ) /*0x429c10*/
    BuildingClass::UpdatePowerAnim((BuildingClass *)this, v11); /*0x429c1a*/
  v18 = *(__int16 *)(a2 + 36) + g_MapCellWidth * *(__int16 *)(a2 + 38); /*0x429c39*/
  if ( *(_DWORD *)(this + 48) <= *(char *)(a2 + 283) ) /*0x429c40*/
  {
    *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v18) = *(_DWORD *)(this + 40); /*0x429c5d*/
    *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * v18) = 0; /*0x429c63*/
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v18) = *(_DWORD *)(this + 40); /*0x429c48*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * v18) = 0; /*0x429c4e*/
  }
  v93 = 0; /*0x429c6e*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11) + 3220) ) /*0x429c79*/
  {
    v93 = 1; /*0x429c87*/
    v19 = 0; /*0x429c8c*/
    v20 = (float *)dword_7E3774; /*0x429c8e*/
    do /*0x429d25*/
    {
      v21 = (int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v11 + 904), &a2) >> 12) + 1) >> 1) & 7) /*0x429cb0*/
                - v19);
      v22 = (HIDWORD(v21) ^ v21) - HIDWORD(v21); /*0x429cb3*/
      if ( v22 > 2 && v22 < 6 && v20 != flt_7E3794 ) /*0x429cc5*/
      {
        v23 = v102[*(_DWORD *)v20]; /*0x429cd0*/
        v24 = *(__int16 *)(v23 + 36) + g_MapCellWidth * *(__int16 *)(v23 + 38); /*0x429ce9*/
        if ( *(_DWORD *)(this + 48) <= *(char *)(v23 + 283) + 1 ) /*0x429cf1*/
        {
          *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v24) = *(_DWORD *)(this + 40); /*0x429d0e*/
          *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * v24) = 0; /*0x429d14*/
        }
        else
        {
          *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v24) = *(_DWORD *)(this + 40); /*0x429cf9*/
          *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * v24) = 0; /*0x429cff*/
        }
      }
      ++v20; /*0x429d1b*/
      ++v19; /*0x429d1e*/
    }
    while ( (int)v20 <= (int)flt_7E3794 ); /*0x429d25*/
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) != 1 /*0x429d42*/
    || (v94 = 1, !*(_BYTE *)(*(_DWORD *)(v11 + 1732) + 3596)) )
  {
    v94 = 0; /*0x429d4c*/
  }
  if ( a6 < 0 ) /*0x429d57*/
    a6 = 65527; /*0x429d59*/
  if ( !v95 ) /*0x429d67*/
  {
LABEL_156:
    if ( *(_DWORD *)(this + 60) ) /*0x42a442*/
      BuildingClass::UpdatePowerAnim((BuildingClass *)this, v11); /*0x42a44c*/
    return 0; /*0x42a454*/
  }
  do /*0x42a3d8*/
  {
    if ( v101 >= a6 ) /*0x429d79*/
      break; /*0x429d79*/
    v25 = **v95; /*0x429d89*/
    v98 = v25; /*0x429d8d*/
    if ( v25 == v108 && (*v95)[1] == *(int **)(this + 52) ) /*0x429d9b*/
      break; /*0x429d9b*/
    v97 = 0; /*0x429da3*/
    v96 = 0; /*0x429daa*/
    v109 = *(__int16 *)(*v25 + 36) + g_MapCellWidth * *(__int16 *)(*v25 + 38); /*0x429dbe*/
    do /*0x42a1ad*/
    {
      if ( v96 == 8 ) /*0x429dc9*/
      {
        v26 = *(__int16 *)(*v98 + 278); /*0x429dd1*/
        if ( v26 == -1 ) /*0x429ddb*/
        {
          v27 = (int *)&unk_89C2E0; /*0x429e04*/
        }
        else
        {
          a2 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v26) + 40); /*0x429de9*/
          v27 = (int *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * ((__int16)a2 + (SHIWORD(a2) << 9))); /*0x429dff*/
        }
      }
      else
      {
        v27 = &v98[dword_7E3774[v96]]; /*0x429e16*/
      }
      v28 = *v27; /*0x429e19*/
      v99 = v27; /*0x429e1b*/
      if ( !*v27 ) /*0x429e21*/
        goto LABEL_107; /*0x429e21*/
      v105 = (__int16 *)(v28 + 36); /*0x429e31*/
      if ( v96 == 8 ) /*0x429e35*/
      {
        v29 = g_MapCellWidth * *(__int16 *)(v28 + 38); /*0x429e48*/
        v30 = *(__int16 *)(v28 + 36); /*0x429e4f*/
      }
      else
      {
        v29 = dword_89A304[v96]; /*0x429e37*/
        v30 = v109; /*0x429e3e*/
      }
      v31 = v30 + v29; /*0x429e52*/
      if ( (*(_DWORD *)(v28 + 320) & 0x100) == 0 /*0x429e78*/
        || (v32 = *(char *)(v28 + 283), v33 = *(_DWORD *)(this + 48), LOBYTE(a2) = 0, (int)abs32(v33 - v32) <= 1) )
      {
        LOBYTE(a2) = 1; /*0x429e7a*/
      }
      v34 = *(__int16 *)(*(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x429e9a*/
                       + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(v28 + 36)));
      v35 = *(_DWORD *)(this + 40); /*0x429e9d*/
      v113 = v34; /*0x429ea0*/
      if ( *(_DWORD *)(v110 + 4 * v34) != v35 ) /*0x429ea7*/
      {
        if ( !(_BYTE)a2 ) /*0x429eaf*/
          goto LABEL_62; /*0x429eaf*/
        if ( !*(_BYTE *)(v28 + 290) && a7 ) /*0x429ec1*/
          goto LABEL_107; /*0x429ec1*/
      }
      if ( !(_BYTE)a2 ) /*0x429ecd*/
      {
LABEL_62:
        v36 = 4 * v31; /*0x429f04*/
        v103 = (int *)(4 * v31); /*0x429f0e*/
        if ( *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v31) == v35 ) /*0x429f15*/
        {
          v35 = *(_DWORD *)(this + 32); /*0x429f1b*/
          v43 = *((float *)v95 + 1) + 1.009; /*0x429f21*/
          v45 = *(float *)(v35 + 4 * v31); /*0x429f27*/
          v46 = v45 < v43; /*0x429f2a*/
          v47 = 0; /*0x429f2a*/
          v48 = v45 == v43; /*0x429f2a*/
          BYTE1(v35) = v44; /*0x429f2c*/
          if ( v45 < v43 ) /*0x429f31*/
            goto LABEL_107; /*0x429f31*/
        }
        goto LABEL_64; /*0x429f31*/
      }
      v36 = 4 * v31; /*0x429ed2*/
      v103 = (int *)(4 * v31); /*0x429ed9*/
      if ( *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v31) == v35 ) /*0x429ee0*/
      {
        v35 = *(_DWORD *)(this + 36); /*0x429ee6*/
        v37 = *((float *)v95 + 1) + 1.009; /*0x429eec*/
        v39 = *(float *)(v35 + 4 * v31); /*0x429ef2*/
        v40 = v39 < v37; /*0x429ef5*/
        v41 = 0; /*0x429ef5*/
        v42 = v39 == v37; /*0x429ef5*/
        BYTE1(v35) = v38; /*0x429ef7*/
        if ( v39 < v37 ) /*0x429efc*/
          goto LABEL_107; /*0x429efc*/
      }
LABEL_64:
      LOBYTE(v35) = *(_BYTE *)(this + 8); /*0x429f37*/
      v49 = a4; /*0x429f3e*/
      v50 = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD, int, int))(*a4 + 428))( /*0x429f5a*/
              a4,
              v28,
              v96,
              *(_DWORD *)(this + 48),
              *v98,
              v35);
      if ( v93 && v50 < 7 ) /*0x429f67*/
        v50 = 0; /*0x429f69*/
      if ( v96 == 8 ) /*0x429f70*/
      {
        v52 = abs32(*(__int16 *)(*v98 + 38) - v105[1]); /*0x429fc2*/
        v53 = *(__int16 *)(*v98 + 36) - *v105; /*0x429fcd*/
        v107 = (HIDWORD(v53) ^ v53) - HIDWORD(v53); /*0x429fd4*/
        if ( v107 <= v52 ) /*0x429fd8*/
          v107 = v52; /*0x429fda*/
        v51 = v99; /*0x429fe2*/
        v106 = (float)v107; /*0x429fe6*/
      }
      else
      {
        v92 = (int)v49; /*0x429f7c*/
        v51 = v99; /*0x429f7d*/
        v106 = ComputeMovementWeight(this, v98, v99, (_BYTE)a2 == 0, v50, v92) * *(float *)(this + 4) + flt_81872C[v96]; /*0x429f9d*/
      }
      if ( v50 >= 7 ) /*0x429fed*/
      {
        if ( v51 == v108 && !v94 ) /*0x42a189*/
        {
          v68 = *(_DWORD *)(this + 48) - *(_DWORD *)(this + 52); /*0x42a193*/
          if ( (int)((HIDWORD(v68) ^ v68) - HIDWORD(v68)) <= 1 ) /*0x42a19b*/
            goto LABEL_148; /*0x42a19b*/
        }
      }
      else
      {
        if ( (_BYTE)a2 ) /*0x429ff9*/
        {
          if ( *(_DWORD *)(*(_DWORD *)(this + 24) + v36) == *(_DWORD *)(this + 40) ) /*0x42a006*/
            goto LABEL_107; /*0x42a006*/
        }
        else if ( *(_DWORD *)(*(_DWORD *)(this + 28) + v36) == *(_DWORD *)(this + 40) ) /*0x42a018*/
        {
          goto LABEL_107; /*0x42a018*/
        }
        v54 = BuildingClass::AddRectToDrawList((BuildingClass *)this, v95, v51, a3, v106); /*0x42a035*/
        v100 = (int *)v54; /*0x42a03d*/
        if ( v97 ) /*0x42a041*/
        {
          v55 = *(_DWORD **)(this + 20); /*0x42a052*/
          v56 = *v55 + 1; /*0x42a05c*/
          if ( *v55 == -1 ) /*0x42a05f*/
          {
            v112 = *(float *)(v54 + 8); /*0x42a0d0*/
            v62 = v56 >> 1; /*0x42a0d7*/
            if ( v56 < v55[1] ) /*0x42a0db*/
            {
              for ( ; v56 > 1; v62 >>= 1 ) /*0x42a0e0*/
              {
                v63 = v55[2]; /*0x42a0e2*/
                v64 = *(_DWORD *)(v63 + 4 * v62); /*0x42a0e5*/
                if ( *(float *)(v64 + 8) <= (double)v112 ) /*0x42a0f5*/
                  break; /*0x42a0f5*/
                *(_DWORD *)(v63 + 4 * v56) = v64; /*0x42a0f7*/
                v56 = v62; /*0x42a0fb*/
              }
              *(_DWORD *)(v55[2] + 4 * v56) = v100; /*0x42a10b*/
              v65 = v55[3]; /*0x42a110*/
              ++*v55; /*0x42a116*/
              if ( (unsigned int)v100 > v65 ) /*0x42a118*/
                v55[3] = v100; /*0x42a11a*/
              if ( (unsigned int)v100 < v55[4] ) /*0x42a120*/
                v55[4] = v100; /*0x42a122*/
            }
          }
          else
          {
            v57 = v56 >> 1; /*0x42a065*/
            v111 = *(float *)(v97 + 8); /*0x42a06a*/
            if ( v56 < v55[1] ) /*0x42a073*/
            {
              if ( v56 <= 1 ) /*0x42a078*/
              {
                v60 = v97; /*0x42a0a6*/
              }
              else
              {
                do /*0x42a09a*/
                {
                  v58 = v55[2]; /*0x42a07a*/
                  v59 = *(_DWORD *)(v58 + 4 * v57); /*0x42a07d*/
                  if ( *(float *)(v59 + 8) <= (double)v111 ) /*0x42a08d*/
                    break; /*0x42a08d*/
                  *(_DWORD *)(v58 + 4 * v56) = v59; /*0x42a08f*/
                  v56 = v57; /*0x42a093*/
                  v57 >>= 1; /*0x42a095*/
                }
                while ( v56 > 1 ); /*0x42a09a*/
                v60 = v97; /*0x42a09c*/
                v54 = (int)v100; /*0x42a0a0*/
              }
              *(_DWORD *)(v55[2] + 4 * v56) = v60; /*0x42a0ad*/
              v61 = v55[3]; /*0x42a0b2*/
              ++*v55; /*0x42a0b8*/
              if ( v60 > v61 ) /*0x42a0ba*/
                v55[3] = v60; /*0x42a0bc*/
              if ( v60 < v55[4] ) /*0x42a0c2*/
                v55[4] = v60; /*0x42a0c4*/
            }
            v97 = v54; /*0x42a0c7*/
          }
        }
        else
        {
          v97 = v54; /*0x42a043*/
        }
        if ( (_BYTE)a2 ) /*0x42a12b*/
        {
          *(int *)((char *)v103 + *(_DWORD *)(this + 24)) = *(_DWORD *)(this + 40); /*0x42a137*/
          v66 = *(_DWORD *)(this + 36); /*0x42a13a*/
        }
        else
        {
          *(int *)((char *)v103 + *(_DWORD *)(this + 28)) = *(_DWORD *)(this + 40); /*0x42a149*/
          v66 = *(_DWORD *)(this + 32); /*0x42a14c*/
        }
        *(int *)((char *)v103 + v66) = v100[1]; /*0x42a156*/
        v67 = *(_DWORD *)(this + 108); /*0x42a159*/
        if ( v113 == *(unsigned __int16 *)(this + 2 * v67 + 190) ) /*0x42a16c*/
        {
          *(_DWORD *)(this + 108) = v67 + 1; /*0x42a173*/
          *(_DWORD *)(this + 112) = *(_DWORD *)v105; /*0x42a178*/
        }
      }
LABEL_107:
      ++v96; /*0x42a1a1*/
    }
    while ( v96 <= 8 ); /*0x42a1ad*/
    v69 = (int ***)v97; /*0x42a1b3*/
    if ( !v97 ) /*0x42a1b9*/
    {
      v79 = *(int **)(this + 20); /*0x42a2bb*/
      if ( !*v79 ) /*0x42a2be*/
      {
        v95 = 0; /*0x42a2c4*/
        goto LABEL_147; /*0x42a2c8*/
      }
      v80 = v79[2]; /*0x42a2cd*/
      v81 = 1; /*0x42a2d0*/
      v82 = *(int ****)(v80 + 4); /*0x42a2d8*/
      *(_DWORD *)(v80 + 4) = *(_DWORD *)(v80 + 4 * *v79); /*0x42a2db*/
      v115 = v82; /*0x42a2e3*/
      *(_DWORD *)(v79[2] + 4 * *v79) = 0; /*0x42a2e7*/
      v83 = *v79 - 1; /*0x42a2f1*/
      *v79 = v83; /*0x42a2f3*/
      if ( v83 < 2 /*0x42a315*/
        || (v84 = 2, *(float *)(*(_DWORD *)(v79[2] + 4) + 8) <= (double)*(float *)(*(_DWORD *)(v79[2] + 8) + 8)) )
      {
        v84 = 1; /*0x42a317*/
      }
      if ( v83 < 3 || *(float *)(*(_DWORD *)(v79[2] + 4 * v84) + 8) <= (double)*(float *)(*(_DWORD *)(v79[2] + 12) + 8) ) /*0x42a337*/
      {
        if ( v84 == 1 ) /*0x42a343*/
        {
LABEL_143:
          v69 = v115; /*0x42a3b1*/
LABEL_144:
          v95 = v69; /*0x42a3b5*/
          goto LABEL_145; /*0x42a3b5*/
        }
      }
      else
      {
        v84 = 3; /*0x42a339*/
      }
      do /*0x42a3af*/
      {
        v85 = v79[2]; /*0x42a345*/
        v86 = *(_DWORD *)(v85 + 4 * v81); /*0x42a34b*/
        *(_DWORD *)(v85 + 4 * v81) = *(_DWORD *)(v85 + 4 * v84); /*0x42a34e*/
        v81 = v84; /*0x42a354*/
        *(_DWORD *)(v79[2] + 4 * v84) = v86; /*0x42a356*/
        v87 = *v79; /*0x42a359*/
        v78 = 2 * v84 <= *v79; /*0x42a362*/
        a2 = 2 * v84 + 1; /*0x42a364*/
        if ( v78 /*0x42a383*/
          && *(float *)(*(_DWORD *)(v79[2] + 4 * v84) + 8) > (double)*(float *)(*(_DWORD *)(v79[2] + 8 * v84) + 8) )
        {
          v84 *= 2; /*0x42a385*/
        }
        if ( a2 <= v87 /*0x42a3a7*/
          && *(float *)(*(_DWORD *)(v79[2] + 4 * v84) + 8) > (double)*(float *)(*(_DWORD *)(v79[2] + 4 * a2) + 8) )
        {
          v84 = a2; /*0x42a3a9*/
        }
      }
      while ( v84 != v81 ); /*0x42a3af*/
      goto LABEL_143; /*0x42a3af*/
    }
    v70 = *(int **)(this + 20); /*0x42a1bf*/
    if ( !*v70 ) /*0x42a1c2*/
      goto LABEL_144; /*0x42a1c2*/
    v71 = v70[2]; /*0x42a1cb*/
    v72 = *(_DWORD *)(v71 + 4); /*0x42a1d1*/
    v114 = v72; /*0x42a1d9*/
    if ( *(float *)(v72 + 8) > (double)*(float *)(v97 + 8) ) /*0x42a1e2*/
      goto LABEL_144; /*0x42a1e2*/
    *(_DWORD *)(v71 + 4) = v97; /*0x42a1e8*/
    v73 = 1; /*0x42a1f0*/
    if ( *v70 < 2 /*0x42a212*/
      || (v74 = 2, *(float *)(*(_DWORD *)(v70[2] + 4) + 8) <= (double)*(float *)(*(_DWORD *)(v70[2] + 8) + 8)) )
    {
      v74 = 1; /*0x42a214*/
    }
    if ( *v70 < 3 || *(float *)(*(_DWORD *)(v70[2] + 4 * v74) + 8) <= (double)*(float *)(*(_DWORD *)(v70[2] + 12) + 8) ) /*0x42a234*/
    {
      if ( v74 != 1 ) /*0x42a240*/
        goto LABEL_118; /*0x42a240*/
    }
    else
    {
      v74 = 3; /*0x42a236*/
      do /*0x42a2ac*/
      {
LABEL_118:
        v75 = v70[2]; /*0x42a242*/
        v76 = *(_DWORD *)(v75 + 4 * v73); /*0x42a248*/
        *(_DWORD *)(v75 + 4 * v73) = *(_DWORD *)(v75 + 4 * v74); /*0x42a24b*/
        v73 = v74; /*0x42a251*/
        *(_DWORD *)(v70[2] + 4 * v74) = v76; /*0x42a253*/
        v77 = *v70; /*0x42a256*/
        v78 = 2 * v74 <= *v70; /*0x42a25f*/
        a2 = 2 * v74 + 1; /*0x42a261*/
        if ( v78 /*0x42a280*/
          && *(float *)(*(_DWORD *)(v70[2] + 4 * v74) + 8) > (double)*(float *)(*(_DWORD *)(v70[2] + 8 * v74) + 8) )
        {
          v74 *= 2; /*0x42a282*/
        }
        if ( a2 <= v77 /*0x42a2a4*/
          && *(float *)(*(_DWORD *)(v70[2] + 4 * v74) + 8) > (double)*(float *)(*(_DWORD *)(v70[2] + 4 * a2) + 8) )
        {
          v74 = a2; /*0x42a2a6*/
        }
      }
      while ( v74 != v73 ); /*0x42a2ac*/
      v72 = v114; /*0x42a2ae*/
    }
    v95 = (int ***)v72; /*0x42a2b2*/
LABEL_145:
    if ( v95 ) /*0x42a3bf*/
      *(_DWORD *)(this + 48) = (*v95)[1]; /*0x42a3c6*/
LABEL_147:
    ++v101; /*0x42a3c9*/
  }
  while ( v95 ); /*0x42a3d8*/
LABEL_148:
  if ( v101 == 10000 || !v95 || v101 == a6 || (int)v95[3] < 2 ) /*0x42a3fc*/
  {
    v11 = (int)a4; /*0x42a43e*/
    goto LABEL_156; /*0x42a43e*/
  }
  v88 = globalHelper_02AA90((int)v95, a5); /*0x42a406*/
  v89 = (int)a4; /*0x42a40b*/
  v90 = v88; /*0x42a40f*/
  ParsePathDirections((ObjectClass *)this, (int)v88, a4); /*0x42a415*/
  SimplifyPathFilter((ObjectClass *)this, v90, v89); /*0x42a41e*/
  if ( *(_DWORD *)(this + 60) ) /*0x42a423*/
    BuildingClass::UpdatePowerAnim((BuildingClass *)this, v89); /*0x42a42d*/
  return v90; /*0x42a434*/
}



// ==== 0x0042A460  BuildingClass::AddRectToDrawList  this=TOP  sig=csp ====
int __thiscall BuildingClass::AddRectToDrawList(BuildingClass *this, int ***a2, int *a3, __int16 *a4, float a5)
{
  int uniqueId; // eax
  _DWORD *ptr_C; // eax
  int v9; // edx
  int **v10; // edi
  int v11; // eax
  int *v12; // edx
  int v13; // ecx
  int v14; // ebp
  __int64 v15; // rax
  ObjectClass *nextObject; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  double v22; // [esp+0h] [ebp-18h]
  int *v23; // [esp+20h] [ebp+8h]

  uniqueId = this->?; /*0x42a460*/
  _EBX = a2; /*0x42a46c*/
  _ESI = uniqueId + 16 * (*(_DWORD *)(uniqueId + 0x100000))++; /*0x42a476*/
  ptr_C = this->?; /*0x42a47f*/
  v9 = ptr_C[393216]; /*0x42a482*/
  ptr_C[393216] = v9 + 1; /*0x42a48c*/
  v10 = (int **)&ptr_C[3 * v9]; /*0x42a492*/
  *v10 = a3; /*0x42a49b*/
  if ( a2 ) /*0x42a49d*/
  {
    v10[2] = (int *)*a2; /*0x42a4a1*/
    v11 = *a3; /*0x42a4a6*/
    v12 = (int *)*(char *)(*a3 + 283); /*0x42a4aa*/
    v13 = ***a2; /*0x42a4b1*/
    v10[1] = v12; /*0x42a4b3*/
    if ( (*(_DWORD *)(v11 + 320) & 0x100) == 0 ) /*0x42a4c0*/
      goto LABEL_12; /*0x42a4c0*/
    v14 = *(_DWORD *)(v13 + 320) & 0x100; /*0x42a4c8*/
    if ( v14 ) /*0x42a4d2*/
    {
      if ( (*a2)[1] == (int *)(*(char *)(v13 + 283) + 4) ) /*0x42a4e3*/
      {
        v10[1] = v12 + 1; /*0x42a4e8*/
        goto LABEL_12; /*0x42a4eb*/
      }
      v14 = *(_DWORD *)(v13 + 320) & 0x100; /*0x42a4ed*/
    }
    if ( v14 ) /*0x42a4f3*/
      goto LABEL_12; /*0x42a4f3*/
    v15 = *(char *)(v11 + 283) - (int)(*a2)[1] + 3; /*0x42a504*/
    if ( (int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) > 1 ) /*0x42a50c*/
      goto LABEL_12; /*0x42a50c*/
    nextObject = (ObjectClass *)(v10[1] + 1); /*0x42a511*/
  }
  else
  {
    v10[2] = 0; /*0x42a516*/
    nextObject = this->?; /*0x42a51d*/
  }
  v10[1] = (int *)nextObject; /*0x42a520*/
LABEL_12:
  *(_DWORD *)_ESI = v10; /*0x42a523*/
  if ( a2 ) /*0x42a527*/
  {
    __asm /*0x42a529*/
    {
      fld [esp+10h+arg_C]
      fadd dword ptr [ebx+4]
      fstp dword ptr [esi+4]
    }
    *(float *)(_ESI + 4) = _ET1; /*0x42a530*/
    *(_DWORD *)(_ESI + 12) = (char *)a2[3] + 1; /*0x42a537*/
  }
  else
  {
    *(_DWORD *)(_ESI + 4) = 0; /*0x42a53c*/
    *(_DWORD *)(_ESI + 12) = 1; /*0x42a543*/
  }
  v18 = abs32(*(__int16 *)(*a3 + 36) - *a4); /*0x42a56c*/
  v19 = *(__int16 *)(*a3 + 38) - a4[1]; /*0x42a574*/
  v23 = (int *)(v18 * v18 + ((HIDWORD(v19) ^ v19) - HIDWORD(v19)) * ((HIDWORD(v19) ^ v19) - HIDWORD(v19))); /*0x42a585*/
  __asm /*0x42a589*/
  {
    fild [esp+18h+arg_4]
    fstp [esp+18h+var_18]; double
  }
  Math::Sqrt(v22); /*0x42a590*/
  __asm { fadd dword ptr [esi+4] } /*0x42a595*/
  __asm { fstp dword ptr [esi+8] }
  *(float *)(_ESI + 8) = _ET1; /*0x42a59e*/
  return _ESI; /*0x42a5a1*/
}



// ==== 0x0042A5B0  CellClass::ClearOccupancyGrid  this=CellClass  sig=csp ====
int __thiscall CellClass::ClearOccupancyGrid(CellClass *this)
{
  _DWORD *isoTileTypeIndex; // eax
  int i; // edx
  _DWORD *unknown68; // eax
  int j; // edx
  int result; // eax
  int k; // eax
  int v7; // eax
  int *p_CellClass_field_4C; // ebp
  int v9; // esi
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // edx
  int v15; // [esp+8h] [ebp-8h]

  *(_DWORD *)(this->unknown30 + 1572864) = 0; /*0x42a5b9*/
  *(_DWORD *)&this->lightConvert[2449].__pad_190[4] = 0; /*0x42a5c3*/
  isoTileTypeIndex = (_DWORD *)this->isoTileTypeIndex; /*0x42a5c9*/
  for ( i = 0; i <= *isoTileTypeIndex; *(_DWORD *)(isoTileTypeIndex[2] + 4 * i - 4) = 0 ) /*0x42a5d0*/
    ++i; /*0x42a5d5*/
  *isoTileTypeIndex = 0; /*0x42a5e0*/
  unknown68 = (_DWORD *)this->unknown68; /*0x42a5e2*/
  for ( j = 0; j <= *unknown68; *(_DWORD *)(unknown68[2] + 4 * j - 4) = 0 ) /*0x42a5e9*/
    ++j; /*0x42a5ee*/
  *unknown68 = 0; /*0x42a5f9*/
  result = *(_DWORD *)this->__pad_28 + 1; /*0x42a5fe*/
  *(_DWORD *)this->__pad_28 = result; /*0x42a5ff*/
  if ( !result ) /*0x42a602*/
  {
    for ( k = g_MapCellWidth * g_MapCellWidth - 1; k >= 0; *((_DWORD *)&this->rubble->? + k) = 0 ) /*0x42a611*/
    {
      --k; /*0x42a616*/
      *((_DWORD *)&this->attachedTag->? + k) = 0; /*0x42a617*/
    }
    v7 = &stru_87F5F0.__pad_58[456] - (char *)this; /*0x42a62a*/
    p_CellClass_field_4C = &this->CellClass_field_4C; /*0x42a62d*/
    v15 = 3; /*0x42a634*/
    do /*0x42a67d*/
    {
      v9 = *p_CellClass_field_4C; /*0x42a642*/
      v10 = *(int *)((char *)p_CellClass_field_4C + v7) - 1; /*0x42a648*/
      if ( v10 >= 0 ) /*0x42a649*/
      {
        v11 = (_DWORD *)(v9 + 4 * v10); /*0x42a64b*/
        v12 = *(p_CellClass_field_4C - 3) - v9; /*0x42a64e*/
        v13 = p_CellClass_field_4C[3] - v9; /*0x42a650*/
        v14 = v10 + 1; /*0x42a652*/
        do /*0x42a66b*/
        {
          *(_DWORD *)((char *)v11 + v12) = 0; /*0x42a653*/
          *v11 = 0; /*0x42a65a*/
          *(_DWORD *)((char *)v11-- + v13) = 0; /*0x42a660*/
          --v14; /*0x42a66a*/
        }
        while ( v14 ); /*0x42a66b*/
        v7 = &stru_87F5F0.__pad_58[456] - (char *)this; /*0x42a66d*/
      }
      ++p_CellClass_field_4C; /*0x42a675*/
      --v15; /*0x42a679*/
    }
    while ( v15 ); /*0x42a67d*/
    result = *(_DWORD *)this->__pad_28 + 1; /*0x42a683*/
    *(_DWORD *)this->__pad_28 = result; /*0x42a685*/
  }
  return result; /*0x42a688*/
}



// ==== 0x0042A6D0  Tactical::ConstructTacticalSurface  this=CellClass  sig=csp ====
char *__thiscall ConstructTacticalSurface(char *this)
{
  _DWORD *v2; // edi
  int v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  void *v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  void *v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int *v19; // eax
  _DWORD *v20; // eax
  int i; // ecx
  char *v22; // ecx
  _DWORD *v23; // ebp
  char *v25; // [esp+10h] [ebp-Ch]
  char *v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+18h] [ebp-4h]

  *this = 0; /*0x42a6e0*/
  this->ptr_8 = 0; /*0x42a6e2*/
  this->ptr_C = 0; /*0x42a6e5*/
  this->ptr_10 = 1; /*0x42a6e8*/
  this->ptr_8 = 1065353216; /*0x42a6eb*/
  this->ptr_C = 1; /*0x42a6f2*/
  this->attachedTag = 0; /*0x42a6f5*/
  this->rubble = 0; /*0x42a6f8*/
  this->ptr_C = 0; /*0x42a6fb*/
  this->smudgeTypeIndex = 0; /*0x42a6fe*/
  this->attached1 = -1; /*0x42a701*/
  this->q02C = -1; /*0x42a704*/
  this->q038 = 1; /*0x42a707*/
  this->q03C = 0; /*0x42a70a*/
  this->CellClass_field_6C = -1; /*0x42a70d*/
  this->q038 = 0; /*0x42a710*/
  this->firstObject = 0; /*0x42a714*/
  v2 = this + 116; /*0x42a718*/
  v3 = 3; /*0x42a71b*/
  do /*0x42a73d*/
  {
    VectorClassUInt::Constructor(0, 0); /*0x42a724*/
    *v2 = &DynamicVectorClass<unsigned int>::`vftable'; /*0x42a729*/
    v2[5] = 10; /*0x42a72f*/
    v2[4] = 0; /*0x42a736*/
    v2 += 6; /*0x42a739*/
    --v3; /*0x42a73c*/
  }
  while ( v3 ); /*0x42a73d*/
  v4 = __2_YAPAXI_Z(0x14u); /*0x42a741*/
  v5 = v4; /*0x42a746*/
  if ( v4 ) /*0x42a74d*/
  {
    v4[3] = 0; /*0x42a754*/
    v4[4] = -1; /*0x42a757*/
    *v4 = 0; /*0x42a75e*/
    v4[1] = 0x10000; /*0x42a760*/
    v6 = __2_YAPAXI_Z(0x40004u); /*0x42a767*/
    v7 = v5[1]; /*0x42a76c*/
    v5[2] = v6; /*0x42a76f*/
    v8 = 0; /*0x42a775*/
    if ( v7 >= 0 ) /*0x42a779*/
    {
      do /*0x42a788*/
      {
        ++v8; /*0x42a77e*/
        *(_DWORD *)(v5[2] + 4 * v8 - 4) = 0; /*0x42a77f*/
      }
      while ( v8 <= v5[1] ); /*0x42a788*/
    }
  }
  else
  {
    v5 = 0; /*0x42a78c*/
  }
  this->isoTileTypeIndex = v5; /*0x42a790*/
  v9 = __2_YAPAXI_Z(0x14u); /*0x42a793*/
  v10 = v9; /*0x42a798*/
  if ( v9 ) /*0x42a79f*/
  {
    v9[3] = 0; /*0x42a7a6*/
    v9[4] = -1; /*0x42a7a9*/
    *v9 = 0; /*0x42a7b0*/
    v9[1] = 10000; /*0x42a7b2*/
    v11 = __2_YAPAXI_Z(0x9C44u); /*0x42a7b9*/
    v12 = v10[1]; /*0x42a7be*/
    v10[2] = v11; /*0x42a7c1*/
    v13 = 0; /*0x42a7c7*/
    if ( v12 >= 0 ) /*0x42a7cb*/
    {
      do /*0x42a7da*/
      {
        ++v13; /*0x42a7d0*/
        *(_DWORD *)(v10[2] + 4 * v13 - 4) = 0; /*0x42a7d1*/
      }
      while ( v13 <= v10[1] ); /*0x42a7da*/
    }
  }
  else
  {
    v10 = 0; /*0x42a7de*/
  }
  this->q01A = v10; /*0x42a7e5*/
  v14 = __2_YAPAXI_Z(0x100004u); /*0x42a7e8*/
  if ( v14 ) /*0x42a7f2*/
  {
    v15 = v14 + 2; /*0x42a7f4*/
    v16 = 0x10000; /*0x42a7f7*/
    do /*0x42a808*/
    {
      v15[1] = 0; /*0x42a7fc*/
      *v15 = 0; /*0x42a7ff*/
      *(v15 - 1) = 0; /*0x42a801*/
      v15 += 4; /*0x42a804*/
      --v16; /*0x42a807*/
    }
    while ( v16 ); /*0x42a808*/
    v14[0x40000] = 0; /*0x42a80a*/
  }
  else
  {
    v14 = 0; /*0x42a812*/
  }
  this->ptr_8 = v14; /*0x42a819*/
  v17 = __2_YAPAXI_Z(0x180004u); /*0x42a81c*/
  if ( v17 ) /*0x42a826*/
    v17[393216] = 0; /*0x42a828*/
  else
    v17 = 0; /*0x42a830*/
  this->ptr_10 = v17; /*0x42a832*/
  v17[393216] = 0; /*0x42a835*/
  v18 = 0; /*0x42a83e*/
  *(_DWORD *)(this->ptr_8 + 0x100000) = 0; /*0x42a840*/
  v19 = (int *)this->isoTileTypeIndex; /*0x42a846*/
  if ( *v19 >= 0 ) /*0x42a84b*/
  {
    do /*0x42a859*/
    {
      ++v18; /*0x42a850*/
      *(_DWORD *)(v19[2] + 4 * v18 - 4) = 0; /*0x42a851*/
    }
    while ( v18 <= *v19 ); /*0x42a859*/
  }
  *v19 = 0; /*0x42a85b*/
  v20 = (_DWORD *)this->q01A; /*0x42a85d*/
  for ( i = 0; i <= *v20; *(_DWORD *)(v20[2] + 4 * i - 4) = 0 ) /*0x42a864*/
    ++i; /*0x42a869*/
  *v20 = 0; /*0x42a874*/
  v22 = this + 116; /*0x42a87c*/
  v26 = this + 188; /*0x42a87f*/
  v25 = this + 116; /*0x42a883*/
  v23 = this + 76; /*0x42a887*/
  v27 = 3; /*0x42a88a*/
  while ( 1 ) /*0x42a898*/
  {
    *(v23 - 3) = 0; /*0x42a898*/
    *v23 = 0; /*0x42a89b*/
    v23[3] = 0; /*0x42a89e*/
    (*(void (__thiscall **)(char *))(*(_DWORD *)v22 + 12))(v22); /*0x42a8a3*/
    memset(v26, 0, 0x3E8u); /*0x42a8b5*/
    v23[778] = 0; /*0x42a8bf*/
    ++v23; /*0x42a8c5*/
    v25 += 24; /*0x42a8d2*/
    v26 += 1000; /*0x42a8d6*/
    if ( !--v27 ) /*0x42a8de*/
      break; /*0x42a8de*/
    v22 = v25; /*0x42a894*/
  }
  this->unknown64 = __2_YAPAXI_Z(0x27100u); /*0x42a8ed*/
  return this; /*0x42a8f2*/
}



// ==== 0x0042A900  ObjectClass::method_42A900  this=ObjectClass  sig=csp ====
void __thiscall sub_42A900(ObjectClass *this)
{
  void **abstractFlags; // esi
  void **v3; // esi
  void *uniqueId; // eax
  void *ptr_C; // eax
  void *nextArrayIndex; // eax
  void **v7; // esi
  int v8; // ebp
  char *v9; // esi
  int v10; // edi
  void *v11; // eax

  abstractFlags = (void **)this->?; /*0x42a907*/
  if ( abstractFlags ) /*0x42a90c*/
  {
    __3_YAXPAX_Z(abstractFlags[2]); /*0x42a912*/
    __3_YAXPAX_Z(abstractFlags); /*0x42a918*/
  }
  v3 = *(void ***)&this->bombVisible; /*0x42a920*/
  this->? = 0; /*0x42a923*/
  if ( v3 ) /*0x42a928*/
  {
    __3_YAXPAX_Z(v3[2]); /*0x42a92e*/
    __3_YAXPAX_Z(v3); /*0x42a934*/
  }
  uniqueId = (void *)this->?; /*0x42a93c*/
  *(_DWORD *)&this->bombVisible = 0; /*0x42a93f*/
  if ( uniqueId ) /*0x42a944*/
    __3_YAXPAX_Z(uniqueId); /*0x42a947*/
  ptr_C = this->?; /*0x42a94f*/
  this->? = 0; /*0x42a952*/
  if ( ptr_C ) /*0x42a957*/
    __3_YAXPAX_Z(ptr_C); /*0x42a95a*/
  nextArrayIndex = (void *)this->?; /*0x42a962*/
  this->? = 0; /*0x42a965*/
  if ( nextArrayIndex ) /*0x42a96a*/
  {
    __3_YAXPAX_Z(nextArrayIndex); /*0x42a96d*/
    this->? = 0; /*0x42a975*/
  }
  if ( this->? ) /*0x42a978*/
  {
    __3_YAXPAX_Z((void *)this->?); /*0x42a980*/
    this->? = 0; /*0x42a988*/
  }
  if ( this->occupant ) /*0x42a98b*/
  {
    __3_YAXPAX_Z((void *)this->occupant); /*0x42a993*/
    this->occupant = 0; /*0x42a99b*/
  }
  if ( this->? ) /*0x42a99e*/
  {
    __3_YAXPAX_Z(this->?); /*0x42a9a6*/
    this->? = 0; /*0x42a9ae*/
  }
  v7 = (void **)&this->ambientSoundController[4]; /*0x42a9b2*/
  v8 = 3; /*0x42a9b5*/
  do /*0x42a9f5*/
  {
    if ( *(v7 - 3) ) /*0x42a9ba*/
    {
      __3_YAXPAX_Z(*(v7 - 3)); /*0x42a9c2*/
      *(v7 - 3) = 0; /*0x42a9ca*/
    }
    if ( *v7 ) /*0x42a9cd*/
    {
      __3_YAXPAX_Z(*v7); /*0x42a9d4*/
      *v7 = 0; /*0x42a9dc*/
    }
    if ( v7[3] ) /*0x42a9de*/
    {
      __3_YAXPAX_Z(v7[3]); /*0x42a9e6*/
      v7[3] = 0; /*0x42a9ee*/
    }
    ++v7; /*0x42a9f1*/
    --v8; /*0x42a9f4*/
  }
  while ( v8 ); /*0x42a9f5*/
  __3_YAXPAX_Z((void *)this->customSound); /*0x42a9fb*/
  v9 = (char *)this + 188; /*0x42aa03*/
  v10 = 3; /*0x42aa09*/
  do /*0x42aa37*/
  {
    v11 = (void *)*((_DWORD *)v9 - 5); /*0x42aa0f*/
    v9 -= 24; /*0x42aa12*/
    *(_DWORD *)v9 = &VectorClass<unsigned int>::`vftable'; /*0x42aa17*/
    if ( v11 ) /*0x42aa1d*/
    {
      if ( v9[13] ) /*0x42aa1f*/
      {
        __3_YAXPAX_Z(v11); /*0x42aa25*/
        *((_DWORD *)v9 + 1) = 0; /*0x42aa2d*/
      }
    }
    --v10; /*0x42aa30*/
    v9[13] = 0; /*0x42aa31*/
    *((_DWORD *)v9 + 2) = 0; /*0x42aa34*/
  }
  while ( v10 ); /*0x42aa37*/
}



// ==== 0x0042AA90  globalHelper_02AA90  this=-  sig=csp ====
int *__stdcall sub_42AA90(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // ebp
  _DWORD *v6; // ebx
  int v7; // eax
  char *v8; // ecx
  __int64 v9; // rax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  bool v13; // zf
  int *v15; // [esp+0h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-8h]

  if ( (byte_89A300 & 1) == 0 ) /*0x42aa9a*/
  {
    byte_89A300 |= 1u; /*0x42aaa6*/
    atexit(nullsub_4); /*0x42aaac*/
  }
  v2 = a1; /*0x42aab7*/
  v3 = Math::RoundToInt(*(float *)(a1 + 8)); /*0x42aabf*/
  v4 = a2; /*0x42aac4*/
  dword_89A2DC = v3; /*0x42aac8*/
  dword_89A2E0 = *(_DWORD *)(a1 + 12); /*0x42aad7*/
  dword_89A2E8 = 0; /*0x42aadc*/
  word_89A2F0 = 0; /*0x42aae2*/
  word_89A2F2 = 0; /*0x42aae9*/
  dword_89A2E4 = a2; /*0x42aaf0*/
  dword_89A2EC = (int)&unk_89A324; /*0x42aaf6*/
  v5 = *(_DWORD **)a1; /*0x42aafc*/
  v6 = *(_DWORD **)(*(_DWORD *)a1 + 8); /*0x42ab01*/
  v7 = *(_DWORD *)(a1 + 12) - 2; /*0x42ab04*/
  if ( v7 >= 0 ) /*0x42ab07*/
  {
    v8 = (char *)&unk_89A324 - a2; /*0x42ab10*/
    v15 = (int *)(a2 + 4 * v7); /*0x42ab13*/
    v16 = v7 + 1; /*0x42ab1b*/
    do /*0x42aba7*/
    {
      if ( v6 ) /*0x42ab21*/
      {
        *(int *)((char *)v15 + (_DWORD)v8) = v6[1]; /*0x42ab2a*/
        v9 = *(__int16 *)(*(_DWORD *)*v6 + 38) - *(__int16 *)(*(_DWORD *)*v5 + 38); /*0x42ab48*/
        if ( (int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) > 1 /*0x42ab64*/
          || (v10 = *(__int16 *)(*(_DWORD *)*v6 + 36), v11 = *(__int16 *)(*(_DWORD *)*v5 + 36),
                                                       (int)abs32(v10 - v11) > 1) )
        {
          v12 = 8; /*0x42ab76*/
        }
        else
        {
          v12 = dword_818760[v10 + 3 * (*(__int16 *)(*(_DWORD *)*v6 + 38) - *(__int16 *)(*(_DWORD *)*v5 + 38)) - v11]; /*0x42ab6d*/
        }
        v2 = a1; /*0x42ab7f*/
        v4 = a2; /*0x42ab83*/
        *v15 = v12; /*0x42ab87*/
        v8 = (char *)&unk_89A324 - a2; /*0x42ab89*/
      }
      v5 = (_DWORD *)v5[2]; /*0x42ab95*/
      v6 = (_DWORD *)v6[2]; /*0x42ab98*/
      v13 = v16 == 1; /*0x42ab9e*/
      --v15; /*0x42ab9f*/
      --v16; /*0x42aba3*/
    }
    while ( !v13 ); /*0x42aba7*/
  }
  *(_DWORD *)(v4 + 4 * *(_DWORD *)(v2 + 12) - 4) = -1; /*0x42abb2*/
  dword_89A2D8 = *(_DWORD *)(*(_DWORD *)*v5 + 36); /*0x42abc2*/
  if ( !dword_89A2DC ) /*0x42abd2*/
    dword_89A2DC = 1; /*0x42abd4*/
  return &dword_89A2D8; /*0x42abe3*/
}



// ==== 0x0042ABF0  nullsub_4  this=-  sig=ida-proto ====
void __cdecl nullsub_4()
{
  ; /*0x42abf0*/
}



// ==== 0x0042AC00  CellClass::setOverlayType  this=CellClass  sig=csp ====
int __thiscall CellClass::setOverlayType(CellClass *this, int a2)
{
  size_t v3; // edi

  if ( this->attachedTag ) /*0x42ac06*/
  {
    __3_YAXPAX_Z(this->attachedTag); /*0x42ac0e*/
    this->attachedTag = 0; /*0x42ac16*/
  }
  if ( this->rubble ) /*0x42ac19*/
  {
    __3_YAXPAX_Z(this->rubble); /*0x42ac21*/
    this->rubble = 0; /*0x42ac29*/
  }
  if ( this->smudgeTypeIndex ) /*0x42ac2c*/
  {
    __3_YAXPAX_Z((void *)this->smudgeTypeIndex); /*0x42ac34*/
    this->smudgeTypeIndex = 0; /*0x42ac3c*/
  }
  if ( this->overlayTypeIndex ) /*0x42ac3f*/
  {
    __3_YAXPAX_Z((void *)this->overlayTypeIndex); /*0x42ac47*/
    this->overlayTypeIndex = 0; /*0x42ac4f*/
  }
  g_MapCellWidth = *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 8) + 1; /*0x42ac60*/
  v3 = 4 * g_MapCellWidth * g_MapCellWidth; /*0x42ac68*/
  this->rubble = (BuildingTypeClass *)__2_YAPAXI_Z(v3); /*0x42ac76*/
  this->attachedTag = (TagClass *)__2_YAPAXI_Z(v3); /*0x42ac7f*/
  this->smudgeTypeIndex = __2_YAPAXI_Z(v3); /*0x42ac88*/
  this->overlayTypeIndex = __2_YAPAXI_Z(v3); /*0x42ac90*/
  dword_89A304[0] = -g_MapCellWidth; /*0x42aca1*/
  dword_89A310 = g_MapCellWidth + 1; /*0x42acac*/
  dword_89A308 = 1 - g_MapCellWidth; /*0x42acb8*/
  dword_89A30C = 1; /*0x42acc4*/
  dword_89A314 = g_MapCellWidth; /*0x42acce*/
  dword_89A318 = g_MapCellWidth - 1; /*0x42acd3*/
  dword_89A31C = -1; /*0x42acd9*/
  dword_89A320 = -1 - g_MapCellWidth; /*0x42ace3*/
  return g_MapCellWidth; /*0x42acc3*/
}



// ==== 0x0042ACF0  BuildingClass::UpdatePowerAnim  this=TOP  sig=csp ====
char __thiscall BuildingClass::UpdatePowerAnim(BuildingClass *this, int a2)
{
  int v2; // eax
  int v3; // esi
  char *v4; // edi
  unsigned int v5; // edx
  __int16 v6; // cx
  __int16 *v7; // ebx
  __int64 v8; // rax
  int *v9; // ebp
  char v10; // al
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  int *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int16 v19; // dx
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  int v22; // edi
  int v23; // esi
  _DWORD *v24; // eax
  __int16 v26[2]; // [esp+10h] [ebp-28h] BYREF
  __int16 *v27; // [esp+14h] [ebp-24h]
  __int16 v28[2]; // [esp+18h] [ebp-20h] BYREF
  BuildingClass *v29; // [esp+1Ch] [ebp-1Ch]
  int v30; // [esp+20h] [ebp-18h]
  int v31; // [esp+28h] [ebp-10h]
  __int16 v32[2]; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v33[2]; // [esp+30h] [ebp-8h] BYREF
  int v34; // [esp+34h] [ebp-4h] BYREF

  LOBYTE(v2) = HIBYTE(this->TechnoClass); /*0x42acf3*/
  v29 = this; /*0x42acfc*/
  if ( !(_BYTE)v2 ) /*0x42ad00*/
    return v2; /*0x42ad00*/
  v3 = a2; /*0x42ad06*/
  *(_DWORD *)v28 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 440))(a2, &a2); /*0x42ad25*/
  v4 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x42ad32*/
  v5 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v3 + 904), &v34) >> 12) + 1) >> 1) & 7; /*0x42ad4d*/
  v6 = LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]) + v28[0]; /*0x42ad50*/
  LOWORD(v5) = HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x42ad5f*/
  LOWORD(a2) = v6; /*0x42ad67*/
  HIWORD(a2) = v28[1] + v5; /*0x42ad7b*/
  *(_DWORD *)v32 = a2; /*0x42ad84*/
  v7 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x42ad8d*/
  v27 = v7; /*0x42ad8f*/
  if ( (*((_DWORD *)v7 + 80) & 0x100) != 0 /*0x42adb8*/
    && ((v8 = v4[283] - *((char *)v7 + 283), (int)((HIDWORD(v8) ^ v8) - HIDWORD(v8)) > 3) || *(_BYTE *)(v3 + 140)) )
  {
    v9 = (int *)*((_DWORD *)v7 + 58); /*0x42adc2*/
    v10 = 1; /*0x42adc8*/
  }
  else
  {
    v9 = (int *)*((_DWORD *)v7 + 57); /*0x42adcc*/
    v10 = 0; /*0x42add2*/
  }
  if ( !v9 )
    v9 = (int *)globalHelper_02B080(v7 + 18, (v10 != 0 ? 4 : 0) + *((char *)v7 + 283));
  v11 = *(_DWORD *)v3; /*0x42adf8*/
  LOBYTE(a2) = 0; /*0x42adfc*/
  v12 = (*(int (__thiscall **)(int))(v11 + 132))(v3); /*0x42ae07*/
  *(_DWORD *)v33 = v12; /*0x42ae0b*/
  if ( v9 ) /*0x42ae0f*/
  {
    while ( 1 ) /*0x42ae15*/
    {
      if ( (*(int (__thiscall **)(int *))(*v9 + 44))(v9) != 1 && (*(int (__thiscall **)(int *))(*v9 + 44))(v9) != 15 ) /*0x42ae2d*/
        goto LABEL_36; /*0x42ae2d*/
      v13 = 0; /*0x42ae39*/
      *(_DWORD *)v26 = v9[342]; /*0x42ae3b*/
      v14 = (*(int (__thiscall **)(int *))(*v9 + 132))(v9); /*0x42ae44*/
      if ( v29->?[0] == 2 /*0x42ae74*/
        || v12 != v14
        && *(_DWORD *)(v12 + 1656) > *(_DWORD *)(v14 + 1656)
        && (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v26, 1) )
      {
        v15 = v9 + 376; /*0x42ae88*/
        if ( (*(int (__thiscall **)(int *))(*v9 + 44))(v9) == 1 ) /*0x42ae8e*/
        {
          if ( *v15 != -1 && v9[377] != -1 ) /*0x42ae9c*/
            goto LABEL_27; /*0x42ae9c*/
        }
        else if ( *v15 != -1 && v9[377] != -1 && v9[378] != -1 ) /*0x42aeef*/
        {
LABEL_27:
          LOBYTE(a2) = 1; /*0x42aef1*/
          do /*0x42afb5*/
          {
            if ( v13 >= 24 ) /*0x42aef9*/
              break; /*0x42aef9*/
            v16 = *v15; /*0x42aeff*/
            if ( *v15 == 8 ) /*0x42af04*/
            {
              v17 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26) + 139); /*0x42af15*/
              if ( v17 == -1 ) /*0x42af1f*/
              {
                v30 = 0; /*0x42af31*/
                v18 = 0; /*0x42af3b*/
              }
              else
              {
                v18 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v17) + 40); /*0x42af2a*/
              }
            }
            else
            {
              v19 = HIWORD(g_DDrawSurfaceManager.scenario[v16 + 82]); /*0x42af49*/
              LOWORD(v31) = v26[0] + LOWORD(g_DDrawSurfaceManager.scenario[v16 + 82]); /*0x42af5b*/
              HIWORD(v31) = v26[1] + v19; /*0x42af60*/
              v18 = v31; /*0x42af65*/
            }
            *(_DWORD *)v26 = v18; /*0x42af69*/
            v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x42af80*/
            v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x42af88*/
            ++v15; /*0x42af9e*/
            ++v13; /*0x42afad*/
            v21[80] ^= (v21[80] ^ ~v20[80]) & 0x40000; /*0x42afae*/
          }
          while ( *v15 != -1 ); /*0x42afb5*/
          v7 = v27; /*0x42afbb*/
LABEL_36:
          v9 = (int *)v9[12]; /*0x42afbf*/
          v12 = *(_DWORD *)v33; /*0x42afc2*/
          goto LABEL_20; /*0x42afc6*/
        }
      }
      v9 = (int *)v9[12]; /*0x42ae9e*/
      v7 = v27; /*0x42aea1*/
LABEL_20:
      if ( !v9 ) /*0x42aea7*/
      {
        if ( !(_BYTE)a2 ) /*0x42aeb3*/
          break; /*0x42aeb3*/
LABEL_37:
        v22 = -2; /*0x42afcb*/
        do /*0x42b04d*/
        {
          v23 = -2; /*0x42afd0*/
          do /*0x42b047*/
          {
            v30 = *((_DWORD *)v7 + 9); /*0x42afd8*/
            LOWORD(a2) = v22 + v30; /*0x42afe4*/
            HIWORD(a2) = v23 + HIWORD(v30); /*0x42afe9*/
            *(_DWORD *)v33 = a2; /*0x42affc*/
            v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v33); /*0x42b000*/
            if ( *((_BYTE *)v24 + 292) ) /*0x42b005*/
            {
              v31 = v24[9]; /*0x42b017*/
              if ( v31 != *(_DWORD *)v28 ) /*0x42b01b*/
                v24[80] ^= (v24[80] ^ ~v24[80]) & 0x40000; /*0x42b03d*/
            }
            ++v23; /*0x42b043*/
          }
          while ( v23 < 3 ); /*0x42b047*/
          ++v22; /*0x42b049*/
        }
        while ( v22 < 3 ); /*0x42b04d*/
        v2 = *((_DWORD *)v7 + 80); /*0x42b04f*/
        *((_DWORD *)v7 + 80) = v2 ^ (v2 ^ ~v2) & 0x40000; /*0x42b063*/
        return v2; /*0x42b063*/
      }
    }
  }
  LOBYTE(v2) = (_BYTE)v29; /*0x42aeb9*/
  if ( v29->?[0] != 1 ) /*0x42aec1*/
    goto LABEL_37; /*0x42aec1*/
  v29->?[0] = 0; /*0x42aeca*/
  return v2; /*0x42aec7*/
}



// ==== 0x0042B080  globalHelper_02B080  this=-  sig=csp ====
int __stdcall sub_42B080(__int16 *a1, int a2)
{
  _WORD *v2; // ebx
  int v3; // edi
  int v4; // ebp
  _DWORD *v5; // ecx
  __int64 v6; // rax
  int v7; // esi
  bool v8; // zf
  int v10; // [esp+10h] [ebp-18h]
  __int16 *v11; // [esp+14h] [ebp-14h]
  int v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-Ch]
  int v14; // [esp+20h] [ebp-8h]

  v2 = a1; /*0x42b084*/
  v3 = a2 * dword_89C2D8; /*0x42b0ab*/
  v13 = (*a1 << 8) + 128; /*0x42b0b0*/
  v14 = (a1[1] << 8) + 128; /*0x42b0b4*/
  v10 = -2; /*0x42b0bc*/
  while ( 2 ) /*0x42b0c4*/
  {
    v4 = -2; /*0x42b0c4*/
    v12 = -2; /*0x42b0c9*/
    do /*0x42b18f*/
    {
      LOWORD(v11) = v4 + *v2; /*0x42b0dc*/
      HIWORD(v11) = v10 + v2[1]; /*0x42b0e5*/
      a1 = v11; /*0x42b0f4*/
      v5 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x42b0fd*/
      if ( (v5[80] & 0x100) != 0 && (v6 = *((char *)v5 + 283) - a2, (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) > 2) ) /*0x42b11d*/
        v7 = v5[58]; /*0x42b11f*/
      else
        v7 = v5[57]; /*0x42b127*/
      if ( v7 ) /*0x42b12f*/
      {
        while ( 1 ) /*0x42b137*/
        {
          v8 = (*(_BYTE *)(v7 + 20) & 4) == 0; /*0x42b137*/
          LOBYTE(a1) = (*(_BYTE *)(v7 + 20) & 4) != 0; /*0x42b13a*/
          if ( !v8 ) /*0x42b13e*/
          {
            if ( !*(_DWORD *)(v7 + 1652) ) /*0x42b140*/
              WinAPI::Wrapper(-2147467261); /*0x42b14f*/
            if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v7 + 1652) + 160))( /*0x42b172*/
                   *(_DWORD *)(v7 + 1652),
                   v13,
                   v14,
                   v3) )
            {
              return v7; /*0x42b1b3*/
            }
          }
          v7 = *(_DWORD *)(v7 + 48); /*0x42b17c*/
          if ( !v7 ) /*0x42b181*/
          {
            v4 = v12; /*0x42b183*/
            break; /*0x42b183*/
          }
        }
      }
      v12 = ++v4; /*0x42b18b*/
    }
    while ( v4 < 3 ); /*0x42b18f*/
    if ( ++v10 < 3 ) /*0x42b1a1*/
      continue; /*0x42b1a1*/
    break;
  }
  return 0; /*0x42b1a9*/
}



// ==== 0x0042B1C0  Cell::PosToIndex  this=Cell  sig=csp ====
int __thiscall Cell::PosToIndex(Cell *this)
{
  return ((SLOWORD(this->Cell_field_0x0) - SHIWORD(this->Cell_field_0x0) + *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1) >> 1) /*0x42b1e3*/
       + *(_DWORD *)&stru_87F5F0.__pad_58[660]
       * (SLOWORD(this->Cell_field_0x0) - *(_DWORD *)&stru_87F5F0.__pad_58[660] + SHIWORD(this->Cell_field_0x0) - 1);
}



// ==== 0x0042B1F0  Object::ComputeAllocationSize  this=Object  sig=csp ====
int Object_ComputeAllocationSize()
{
  return 2 * dword_87F8DC * (dword_87F8E0 + 4); /*0x42b201*/
}



// ==== 0x0042B210  ObjectClass::ParsePathDirections  this=ObjectClass  sig=csp ====
char __thiscall ParsePathDirections(ObjectClass *this, int a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // edi
  int *v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  bool v10; // zf
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  __int16 v14; // dx
  int v15; // eax
  __int16 v16; // dx
  __int16 v18[2]; // [esp+10h] [ebp-2Ch] BYREF
  int v19; // [esp+14h] [ebp-28h]
  int *v20; // [esp+18h] [ebp-24h] BYREF
  int v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+28h] [ebp-14h]
  int v25; // [esp+2Ch] [ebp-10h]
  int v26; // [esp+30h] [ebp-Ch]
  int v27; // [esp+34h] [ebp-8h]
  ObjectClass *v28; // [esp+38h] [ebp-4h]
  char v29; // [esp+40h] [ebp+4h]

  v28 = this; /*0x42b218*/
  v3 = *(_DWORD *)(a2 + 20); /*0x42b220*/
  v4 = *(_DWORD *)(a2 + 12); /*0x42b225*/
  v5 = *(int **)a2; /*0x42b228*/
  v7 = -1; /*0x42b22b*/
  v8 = 0; /*0x42b22e*/
  v9 = 0; /*0x42b230*/
  v10 = *(_DWORD *)(a2 + 8) == 1; /*0x42b232*/
  v26 = *(_DWORD *)(a2 + 8) - 1; /*0x42b234*/
  v6 = v26; /*0x42b22a*/
  v24 = -1; /*0x42b238*/
  v27 = v3; /*0x42b23c*/
  v21 = 0; /*0x42b240*/
  v29 = 0; /*0x42b244*/
  v19 = 0; /*0x42b249*/
  v20 = v5; /*0x42b24d*/
  *(_DWORD *)v18 = v5; /*0x42b251*/
  if ( v26 < 0 || v10 ) /*0x42b255*/
    return (char)v5; /*0x42b255*/
  while ( v19 + v21 < v6 ) /*0x42b267*/
  {
    if ( !v29 ) /*0x42b273*/
    {
      v11 = *(_DWORD *)(v4 + 4 * (v9 + v8)); /*0x42b27c*/
      v12 = ((_BYTE)v11 - (_BYTE)v7) & 7; /*0x42b283*/
      if ( v11 == v7 ) /*0x42b288*/
      {
        ++v8; /*0x42b28a*/
      }
      else if ( v12 != 2 && v12 != 6 || v7 == -1 || v7 == 8 || v11 == 8 ) /*0x42b2a4*/
      {
        v9 += v8; /*0x42b2bf*/
        v8 = 1; /*0x42b2c1*/
        if ( (v11 & 1) != 0 ) /*0x42b2c6*/
          v7 = v11; /*0x42b2c8*/
        else
          v7 = -1; /*0x42b2cc*/
        v20 = *(int **)v18; /*0x42b2d3*/
      }
      else
      {
        v29 = 1; /*0x42b2a6*/
        v24 = *(_DWORD *)(v4 + 4 * (v9 + v8)); /*0x42b2ab*/
        v19 = 1; /*0x42b2af*/
        v21 = v9 + v8; /*0x42b2b7*/
      }
      if ( v11 == 8 ) /*0x42b2da*/
      {
        v13 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18) + 139); /*0x42b2eb*/
        if ( v13 == -1 ) /*0x42b2f5*/
        {
          v22 = 0; /*0x42b30e*/
          *(_DWORD *)v18 = 0; /*0x42b31c*/
        }
        else
        {
          *(_DWORD *)v18 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v13) + 40); /*0x42b303*/
        }
      }
      else
      {
        v14 = HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x42b32d*/
        LOWORD(v23) = v18[0] + LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x42b33f*/
        HIWORD(v23) = v18[1] + v14; /*0x42b344*/
        *(_DWORD *)v18 = v23; /*0x42b34d*/
      }
      goto LABEL_24; /*0x42b307*/
    }
    if ( *(_DWORD *)(v4 + 4 * (v19 + v21)) != v24 ) /*0x42b35a*/
    {
      v9 += GeneratePathWaypoints(a3, (int *)(v4 + 4 * v9), v27 + 4 * v9, v8, v19, &v20); /*0x42b387*/
      v8 = 1; /*0x42b38e*/
      v29 = 0; /*0x42b393*/
      v15 = *(_DWORD *)(v4 + 4 * v9) & 7; /*0x42b39b*/
      v16 = HIWORD(g_DDrawSurfaceManager.scenario[v15 + 82]); /*0x42b39e*/
      LOWORD(v25) = LOWORD(g_DDrawSurfaceManager.scenario[v15 + 82]) + (_WORD)v20; /*0x42b3ba*/
      HIWORD(v25) = HIWORD(v20) + v16; /*0x42b3bf*/
      *(_DWORD *)v18 = v25; /*0x42b3c8*/
      v7 = *(_DWORD *)(v4 + 4 * v9); /*0x42b3cc*/
LABEL_24:
      v6 = v26; /*0x42b3cf*/
      goto LABEL_25; /*0x42b3cf*/
    }
    ++v19; /*0x42b35c*/
LABEL_25:
    if ( v9 + v8 >= v6 ) /*0x42b3d8*/
      break; /*0x42b3d8*/
  }
  LOBYTE(v5) = v29; /*0x42b3de*/
  if ( v29 ) /*0x42b3e4*/
    LOBYTE(v5) = GeneratePathWaypoints(a3, (int *)(v4 + 4 * v9), v27 + 4 * v9, v8, v19, &v20); /*0x42b406*/
  return (char)v5; /*0x42b40b*/
}



// ==== 0x0042B420  GeneratePathWaypoints  this=-  sig=csp ====
int __stdcall GeneratePathWaypoints(_DWORD *a1, int *a2, int a3, int a4, int a5, int **a6)
{
  int *v6; // ebp
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int *v11; // eax
  int *v12; // ebx
  int v13; // ebp
  int v14; // eax
  int *v15; // eax
  double v16; // st7
  int v17; // eax
  __int16 v18; // ax
  int v19; // ecx
  __int16 *v20; // ebp
  __int16 v21; // dx
  __int16 v22; // dx
  __int16 v23; // ax
  int v24; // esi
  _DWORD *v25; // edi
  bool v26; // bl
  __int16 v27; // dx
  __int16 v28; // ax
  int v29; // eax
  int v30; // eax
  __int16 v31; // dx
  int *v32; // eax
  int *v33; // edi
  int v34; // ebx
  int *v36; // edx
  int v37; // esi
  int **v38; // ebp
  int *v39; // eax
  int *v40; // edi
  int v41; // ebx
  int v42; // eax
  int **v43; // eax
  int **v44; // ebp
  int *v45; // eax
  int v46; // ebx
  int *v47; // esi
  int v48; // edi
  int *v49; // [esp+14h] [ebp-34h] BYREF
  int *v50; // [esp+18h] [ebp-30h] BYREF
  int v51; // [esp+1Ch] [ebp-2Ch]
  int v52; // [esp+20h] [ebp-28h]
  int v53; // [esp+24h] [ebp-24h]
  int *v54; // [esp+28h] [ebp-20h]
  int *v55; // [esp+2Ch] [ebp-1Ch]
  int *v56; // [esp+30h] [ebp-18h]
  int v57; // [esp+34h] [ebp-14h] BYREF
  int TileDataCellClass; // [esp+38h] [ebp-10h] BYREF
  int v59; // [esp+3Ch] [ebp-Ch]
  double v60; // [esp+40h] [ebp-8h]

  v6 = a2; /*0x42b425*/
  v7 = a4; /*0x42b42a*/
  v8 = *a2; /*0x42b42f*/
  v9 = a2[a4]; /*0x42b432*/
  v59 = v8; /*0x42b436*/
  v10 = (v8 + v9) >> 1; /*0x42b43d*/
  v51 = v10; /*0x42b43f*/
  if ( v10 + 1 != v9 && v10 + 1 != v8 ) /*0x42b44c*/
  {
    v51 = 0; /*0x42b44e*/
    LOBYTE(v10) = 0; /*0x42b456*/
  }
  if ( v8 == 8 || v9 == 8 ) /*0x42b466*/
  {
    v44 = a6; /*0x42b7a8*/
    v45 = *a6; /*0x42b7ac*/
    v46 = a4 + a5; /*0x42b7af*/
    a6 = (int **)*a6; /*0x42b7b4*/
    if ( a4 + a5 > 0 ) /*0x42b7b8*/
    {
      v47 = a2; /*0x42b7ba*/
      v48 = a4 + a5; /*0x42b7be*/
      do /*0x42b7da*/
      {
        v45 = (int *)*GetCellNeighborCoord(&a2, (__int16 *)&a6, *v47++); /*0x42b7d0*/
        --v48; /*0x42b7d5*/
        a6 = (int **)v45; /*0x42b7d6*/
      }
      while ( v48 ); /*0x42b7da*/
    }
    *v44 = v45; /*0x42b7dd*/
    return v46; /*0x42b7e1*/
  }
  v11 = *a6; /*0x42b476*/
  v49 = *a6; /*0x42b478*/
  if ( a4 < a5 ) /*0x42b47c*/
  {
    a5 = a4; /*0x42b47e*/
    goto LABEL_20; /*0x42b482*/
  }
  if ( a5 < a4 ) /*0x42b48d*/
  {
    v50 = v11; /*0x42b491*/
    if ( a4 - a5 <= 0 ) /*0x42b499*/
      goto LABEL_19; /*0x42b499*/
    v12 = a2; /*0x42b49b*/
    v13 = a4 - a5; /*0x42b49d*/
    while ( *v12 == 8 ) /*0x42b4a4*/
    {
      v14 = *((__int16 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v50) + 139); /*0x42b4b5*/
      if ( v14 == -1 ) /*0x42b4bf*/
      {
        v15 = (int *)CellStruct::Set(&TileDataCellClass, 0, 0); /*0x42b4d7*/
LABEL_16:
        v11 = (int *)*v15; /*0x42b4f4*/
        goto LABEL_17; /*0x42b4f4*/
      }
      v11 = *(int **)(*((_DWORD *)dword_8B413C + v14) + 40); /*0x42b4ca*/
LABEL_17:
      ++v12; /*0x42b4f6*/
      --v13; /*0x42b4f9*/
      v50 = v11; /*0x42b4fa*/
      if ( !v13 ) /*0x42b4fe*/
      {
        v6 = a2; /*0x42b500*/
LABEL_19:
        v49 = v11; /*0x42b504*/
        goto LABEL_20; /*0x42b504*/
      }
    }
    v15 = CellStruct::Add(&v50, &v57, (_WORD *)(4 * *v12 + 9041544)); /*0x42b4ef*/
    goto LABEL_16; /*0x42b4ef*/
  }
LABEL_20:
  v16 = LocomotionClass::GetSpeedMultiplier(a1); /*0x42b508*/
  v17 = a1[135]; /*0x42b513*/
  v60 = v16; /*0x42b519*/
  v57 = v17; /*0x42b51d*/
  if ( a5 <= 0 ) /*0x42b527*/
    goto LABEL_38; /*0x42b527*/
  v18 = (__int16)v49; /*0x42b52f*/
  v19 = 2 * a5; /*0x42b536*/
  v53 = 2 * a5; /*0x42b538*/
  v20 = (__int16 *)(4 * (v10 & 7) + 9041544); /*0x42b53c*/
  while ( 1 ) /*0x42b549*/
  {
    v21 = *v20; /*0x42b549*/
    v52 = v19; /*0x42b54d*/
    v22 = v18 + v21; /*0x42b551*/
    v23 = HIWORD(v49) + v20[1]; /*0x42b558*/
    LOWORD(v54) = v22; /*0x42b55d*/
    HIWORD(v54) = v23; /*0x42b564*/
    v50 = v54; /*0x42b579*/
    v24 = *(_DWORD *)(a3 + 4 * (v7 + a5 - v19)); /*0x42b581*/
    v25 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v50); /*0x42b58f*/
    do /*0x42b655*/
    {
      if ( v52 <= 0 ) /*0x42b597*/
      {
        v36 = a2; /*0x42b70b*/
        v37 = a4 - a5; /*0x42b70f*/
        if ( 2 * a5 > 0 ) /*0x42b719*/
          memset32(&a2[a4 - a5], v51, 2 * a5); /*0x42b71f*/
        v38 = a6; /*0x42b721*/
        v39 = *a6; /*0x42b727*/
        a6 = (int **)*a6; /*0x42b72a*/
        if ( v37 <= 0 ) /*0x42b72e*/
        {
LABEL_53:
          *v38 = v39; /*0x42b795*/
          return v37; /*0x42b7a1*/
        }
        v40 = v36; /*0x42b730*/
        v41 = v37; /*0x42b732*/
        while ( *v40 == 8 ) /*0x42b739*/
        {
          v42 = *((__int16 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a6) + 139); /*0x42b74a*/
          if ( v42 == -1 ) /*0x42b754*/
          {
            v43 = (int **)CellStruct::Set(&a2, 0, 0); /*0x42b76c*/
LABEL_51:
            v39 = *v43; /*0x42b789*/
            goto LABEL_52; /*0x42b789*/
          }
          v39 = *(int **)(*((_DWORD *)dword_8B413C + v42) + 40); /*0x42b75f*/
LABEL_52:
          ++v40; /*0x42b78b*/
          --v41; /*0x42b78e*/
          a6 = (int **)v39; /*0x42b78f*/
          if ( !v41 ) /*0x42b793*/
            goto LABEL_53; /*0x42b793*/
        }
        v43 = (int **)CellStruct::Add(&a6, &a4, (_WORD *)(4 * *v40 + 9041544)); /*0x42b784*/
        goto LABEL_51; /*0x42b784*/
      }
      v26 = 1; /*0x42b5f5*/
      if ( !(*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*a1 + 428))(a1, v25, v51, v24, 0, 1) /*0x42b5c2*/
        && (v25[80] & 0x40000) == 0 )
      {
        TileDataCellClass = CellClass::GetTileData((__int16 *)&v49, v57); /*0x42b5d8*/
        if ( (double)TileDataCellClass * v60 < 1.0 ) /*0x42b5ef*/
          v26 = 0; /*0x42b5b6*/
      }
      v27 = (_WORD)v50 + *v20; /*0x42b5ff*/
      --v52; /*0x42b605*/
      v28 = HIWORD(v50) + v20[1]; /*0x42b60d*/
      LOWORD(v55) = v27; /*0x42b612*/
      HIWORD(v55) = v28; /*0x42b61b*/
      v50 = v55; /*0x42b624*/
      v25 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v50); /*0x42b633*/
      v29 = *((char *)v25 + 283); /*0x42b635*/
      if ( v24 - v29 == 4 ) /*0x42b641*/
      {
        v24 = v29 + 4; /*0x42b649*/
        if ( (v25[80] & 0x100) != 0 ) /*0x42b64f*/
          continue; /*0x42b64f*/
      }
      v24 = *((char *)v25 + 283); /*0x42b651*/
    }
    while ( !v26 ); /*0x42b655*/
    v30 = v59 & 7; /*0x42b66e*/
    v31 = HIWORD(v49) + HIWORD(dword_89F688[v30]); /*0x42b688*/
    LOWORD(v56) = LOWORD(dword_89F688[v30]) + (_WORD)v49; /*0x42b694*/
    HIWORD(v56) = v31; /*0x42b69d*/
    v18 = (__int16)v56; /*0x42b6a2*/
    v53 -= 2; /*0x42b6a7*/
    v7 = a4; /*0x42b6ab*/
    v49 = v56; /*0x42b6af*/
    if ( --a5 <= 0 ) /*0x42b6b9*/
      break; /*0x42b6b9*/
    v19 = v53; /*0x42b545*/
  }
  v6 = a2; /*0x42b6bf*/
LABEL_38:
  v32 = *a6; /*0x42b6c3*/
  a2 = *a6; /*0x42b6cb*/
  if ( v7 > 0 ) /*0x42b6cf*/
  {
    v33 = v6; /*0x42b6d1*/
    v34 = v7; /*0x42b6d3*/
    do /*0x42b6ef*/
    {
      v32 = (int *)*GetCellNeighborCoord(&a4, (__int16 *)&a2, *v33++); /*0x42b6e5*/
      --v34; /*0x42b6ea*/
      a2 = v32; /*0x42b6eb*/
    }
    while ( v34 ); /*0x42b6ef*/
  }
  *a6 = v32; /*0x42b6f6*/
  return v7; /*0x42b6f5*/
}



// ==== 0x0042B7F0  ObjectClass::SimplifyPathFilter  this=ObjectClass  sig=csp ====
_DWORD *__thiscall SimplifyPathFilter(ObjectClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  bool v9; // cc
  ObjectClass *v10; // eax
  int v11; // eax
  __int16 v12; // cx
  __int16 v13; // bx
  __int16 v14; // bp
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  __int16 v20; // cx
  __int16 v21; // bx
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // esi
  _DWORD *v26; // edx
  int v27; // esi
  int v28; // eax
  int v29; // ebp
  _DWORD *v30; // edi
  int v31; // edx
  _DWORD *result; // eax
  ObjectClass **v33; // [esp+10h] [ebp-80h]
  int v34; // [esp+14h] [ebp-7Ch]
  int v35; // [esp+18h] [ebp-78h]
  _DWORD *v36; // [esp+1Ch] [ebp-74h]
  int v37; // [esp+20h] [ebp-70h]
  int v38; // [esp+24h] [ebp-6Ch]
  int v39; // [esp+28h] [ebp-68h]
  int v40; // [esp+2Ch] [ebp-64h]
  int v41; // [esp+30h] [ebp-60h]
  int v42; // [esp+34h] [ebp-5Ch]
  int v43; // [esp+38h] [ebp-58h] BYREF
  _BYTE v44[6]; // [esp+3Ch] [ebp-54h]
  __int16 v45; // [esp+42h] [ebp-4Eh]
  int v46; // [esp+44h] [ebp-4Ch]
  int v47; // [esp+48h] [ebp-48h]
  ObjectClass *v48; // [esp+4Ch] [ebp-44h]
  int v49; // [esp+50h] [ebp-40h]
  int v50; // [esp+54h] [ebp-3Ch]
  int v51; // [esp+58h] [ebp-38h]
  int v52; // [esp+5Ch] [ebp-34h]
  ObjectClass *v53; // [esp+60h] [ebp-30h]
  int v54; // [esp+64h] [ebp-2Ch]
  int v55; // [esp+68h] [ebp-28h]
  ObjectClass *v56; // [esp+6Ch] [ebp-24h] BYREF
  int v57; // [esp+70h] [ebp-20h]
  int v58[2]; // [esp+78h] [ebp-18h] BYREF
  int v59; // [esp+80h] [ebp-10h]
  int v60; // [esp+88h] [ebp-8h]

  v53 = this; /*0x42b7f6*/
  v3 = a2; /*0x42b7fb*/
  v4 = (_DWORD *)a2[3]; /*0x42b808*/
  v5 = *a2; /*0x42b80b*/
  v6 = a2[5]; /*0x42b80d*/
  v7 = 0; /*0x42b811*/
  v8 = 0; /*0x42b813*/
  v9 = a2[2] - 1 <= 0; /*0x42b815*/
  v36 = v4; /*0x42b817*/
  v55 = a2[2] - 1; /*0x42b81b*/
  v42 = 0; /*0x42b81f*/
  v59 = v5; /*0x42b823*/
  v54 = v6; /*0x42b82a*/
  v40 = 0; /*0x42b82e*/
  v39 = 0; /*0x42b832*/
  v35 = 0; /*0x42b836*/
  v57 = 0; /*0x42b840*/
  v37 = 0; /*0x42b84a*/
  v38 = 0; /*0x42b84e*/
  v34 = 0; /*0x42b852*/
  if ( !v9 ) /*0x42b85c*/
  {
    v33 = (ObjectClass **)v4; /*0x42b862*/
    do /*0x42bb62*/
    {
      if ( v8 >= 20 ) /*0x42b869*/
        break; /*0x42b869*/
      v10 = *v33; /*0x42b873*/
      v56 = *v33; /*0x42b878*/
      if ( v56 == (ObjectClass *)8 ) /*0x42b87c*/
      {
        v45 = 0; /*0x42b899*/
        *(_DWORD *)&v44[2] = (unsigned __int16)(HIWORD(g_DDrawSurfaceManager.scenario[82]) + HIWORD(v59)); /*0x42b8a7*/
        ++v8; /*0x42b8b0*/
        *(_WORD *)v44 = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v5; /*0x42b8b4*/
        v5 = *(_DWORD *)v44; /*0x42b8b9*/
        v35 = 0; /*0x42b8bd*/
        ++v33; /*0x42b8c1*/
        v46 = 0; /*0x42b8c5*/
        v47 = 0; /*0x42b8d3*/
        v59 = *(_DWORD *)v44; /*0x42b8e1*/
        v42 = v8; /*0x42b8e8*/
        v39 = 0; /*0x42b8ec*/
        v37 = 0; /*0x42b8f0*/
        v38 = 0; /*0x42b8f4*/
        v34 = 0; /*0x42b8f8*/
        v40 = v8; /*0x42b8fc*/
        v57 = 0; /*0x42b900*/
      }
      else if ( v10 == (ObjectClass *)-2 ) /*0x42b90c*/
      {
        ++v8; /*0x42b912*/
        ++v33; /*0x42b916*/
      }
      else
      {
        v11 = (unsigned __int8)v10 & 7; /*0x42b91f*/
        v12 = g_DDrawSurfaceManager.scenario[v11 + 82]; /*0x42b932*/
        v13 = v35 + v12; /*0x42b946*/
        LOWORD(v11) = HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x42b94b*/
        v14 = HIWORD(v35) + v11; /*0x42b94f*/
        LOWORD(v41) = v34 + v12; /*0x42b959*/
        LOWORD(v49) = v35 + v12; /*0x42b95e*/
        HIWORD(v49) = HIWORD(v35) + v11; /*0x42b963*/
        HIWORD(v41) = HIWORD(v34) + v11; /*0x42b968*/
        v15 = abs16(v34 + v12); /*0x42b979*/
        if ( v15 < v37 || (v16 = abs16(SHIWORD(v41)), v16 < v38) ) /*0x42b993*/
        {
          if ( v57 ) /*0x42babb*/
          {
            v42 = v40; /*0x42baf4*/
            LOWORD(v51) = v57 - v5; /*0x42bb03*/
            HIWORD(v51) = HIWORD(v57) - HIWORD(v59); /*0x42bb08*/
            v35 = v51; /*0x42bb14*/
            v37 = 0; /*0x42bb18*/
            v38 = 0; /*0x42bb1c*/
            v52 = 0; /*0x42bb20*/
            v34 = 0; /*0x42bb2f*/
            v22 = abs16(HIWORD(v57) - HIWORD(v59)); /*0x42bb3a*/
            v39 = abs16(v57 - v5); /*0x42bb43*/
            if ( v39 <= v22 ) /*0x42bb47*/
              v39 = v22; /*0x42bb49*/
            v57 = v5; /*0x42bb4d*/
            v40 = v8; /*0x42bb51*/
          }
          else
          {
            v37 = 0; /*0x42bac4*/
            v38 = 0; /*0x42bac8*/
            v50 = 0; /*0x42bacc*/
            v57 = v5; /*0x42bada*/
            v40 = v8; /*0x42bade*/
            v34 = 0; /*0x42bae2*/
          }
        }
        else
        {
          v38 = v16; /*0x42b99d*/
          v34 = v41; /*0x42b9a4*/
          v37 = v15; /*0x42b9a8*/
          v17 = abs16(v14); /*0x42b9b4*/
          v18 = abs16(v13); /*0x42b9b9*/
          if ( v18 <= v17 ) /*0x42b9bd*/
            v18 = v17; /*0x42b9bf*/
          v19 = (unsigned __int8)v56 & 7; /*0x42b9c5*/
          v20 = g_DDrawSurfaceManager.scenario[v19 + 82]; /*0x42b9c8*/
          LOWORD(v19) = HIWORD(g_DDrawSurfaceManager.scenario[v19 + 82]); /*0x42b9da*/
          LOWORD(v60) = v5 + v20; /*0x42b9de*/
          HIWORD(v60) = HIWORD(v59) + v19; /*0x42b9f4*/
          v21 = v5 + v20; /*0x42b9fc*/
          v5 = v60; /*0x42ba03*/
          v59 = v60; /*0x42ba05*/
          if ( v39 >= v18 ) /*0x42ba0c*/
          {
            v58[0] = v60; /*0x42ba32*/
            sub_42BCA0((int)v36, v8, v42, &v43, v58); /*0x42ba39*/
            LOWORD(v48) = v21 - LOWORD(v58[0]); /*0x42ba55*/
            HIWORD(v48) = HIWORD(v60) - HIWORD(v58[0]); /*0x42ba5a*/
            v56 = v48; /*0x42ba67*/
            WalkLineOfSight( /*0x42ba96*/
              (char *)&v36[v43],
              v8 - v43 + 1,
              v58,
              (__int16 *)&v56,
              (_DWORD *)a3,
              *(_DWORD *)(v54 + 4 * v43),
              0);
          }
          else
          {
            v39 = v18; /*0x42ba0e*/
          }
          ++v8; /*0x42ba9f*/
          v35 = v49; /*0x42baa0*/
          ++v33; /*0x42baab*/
        }
        v3 = a2; /*0x42bb55*/
        v7 = 0; /*0x42bb5c*/
      }
    }
    while ( v8 < v55 ); /*0x42bb62*/
    if ( v57 ) /*0x42bb6d*/
    {
      v23 = abs16(HIWORD(v59) - HIWORD(v57)); /*0x42bb9a*/
      v24 = abs16(v5 - v57); /*0x42bb9f*/
      if ( v24 <= v23 ) /*0x42bba3*/
        v24 = v23; /*0x42bba5*/
      if ( v8 - v40 - 1 > v24 ) /*0x42bbb2*/
      {
        v25 = v8 - 1; /*0x42bbc2*/
        v58[0] = v5; /*0x42bbcc*/
        sub_42BCA0((int)v36, v25, v40, &v43, v58); /*0x42bbd3*/
        LOWORD(v53) = v5 - LOWORD(v58[0]); /*0x42bbef*/
        HIWORD(v53) = HIWORD(v59) - HIWORD(v58[0]); /*0x42bbf4*/
        v56 = v53; /*0x42bbff*/
        WalkLineOfSight( /*0x42bc2e*/
          (char *)&v36[v43],
          v25 - v43 + 1,
          v58,
          (__int16 *)&v56,
          (_DWORD *)a3,
          *(_DWORD *)(v54 + 4 * v43),
          1);
      }
      v3 = a2; /*0x42bc33*/
    }
  }
  v26 = v36; /*0x42bc3a*/
  v27 = 0; /*0x42bc3e*/
  v28 = *v36; /*0x42bc40*/
  if ( *v36 != -1 ) /*0x42bc45*/
  {
    v29 = v55; /*0x42bc47*/
    v30 = v36; /*0x42bc4b*/
    do /*0x42bc68*/
    {
      if ( v27 >= v29 ) /*0x42bc4f*/
        break; /*0x42bc4f*/
      if ( v28 != -2 ) /*0x42bc54*/
      {
        ++v7; /*0x42bc58*/
        *v30++ = *v26; /*0x42bc59*/
      }
      v28 = v26[1]; /*0x42bc5e*/
      ++v26; /*0x42bc61*/
      ++v27; /*0x42bc64*/
    }
    while ( v28 != -1 ); /*0x42bc68*/
  }
  v31 = v7; /*0x42bc6d*/
  result = (_DWORD *)(v3[2] + 1); /*0x42bc6f*/
  if ( v7 < (int)result ) /*0x42bc72*/
  {
    result = &v36[v7]; /*0x42bc78*/
    do /*0x42bc8b*/
    {
      *result = -1; /*0x42bc7b*/
      ++v31; /*0x42bc84*/
      ++result; /*0x42bc85*/
    }
    while ( v31 < v3[2] + 1 ); /*0x42bc8b*/
  }
  v3[2] = v7 + 1; /*0x42bc90*/
  return result; /*0x42bc8e*/
}



// ==== 0x0042BCA0  sub_42BCA0  this=-  sig=csp ====
__int16 __stdcall sub_42BCA0(int a1, int a2, int a3, _DWORD *a4, int *a5)
{
  int v6; // edx
  int v7; // esi
  __int16 v8; // cx
  __int16 v9; // bx
  bool v10; // cc
  int v11; // eax
  __int16 v12; // si
  _WORD *v13; // eax
  __int16 v14; // bx
  __int16 v15; // bp
  int v16; // ecx
  int v17; // eax
  __int16 result; // ax
  int v19; // edi
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]
  __int16 v22; // [esp+18h] [ebp-10h]
  __int16 v23; // [esp+1Ah] [ebp-Eh]
  int v24; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  _DWORD *v26; // [esp+2Ch] [ebp+4h]
  char v27; // [esp+30h] [ebp+8h]
  int v28; // [esp+34h] [ebp+Ch]

  v6 = *a5; /*0x42bcad*/
  v7 = a3; /*0x42bcb0*/
  v8 = 0; /*0x42bcb4*/
  v9 = 0; /*0x42bcb6*/
  v10 = a2 < a3; /*0x42bcb9*/
  v25 = 0; /*0x42bcbc*/
  v20 = a2; /*0x42bcc0*/
  v21 = *a5; /*0x42bcc4*/
  v27 = 0; /*0x42bcc8*/
  if ( v10 ) /*0x42bccc*/
  {
LABEL_13:
    *a4 = v7; /*0x42bdb5*/
    *a5 = v6; /*0x42bdc2*/
    return (__int16)a4; /*0x42bdc8*/
  }
  v26 = (_DWORD *)(a1 + 4 * a2); /*0x42bcd9*/
  while ( *v26 == -2 ) /*0x42bce6*/
  {
    --v20; /*0x42bcf0*/
    --v26; /*0x42bcf4*/
LABEL_12:
    if ( v20 < v7 ) /*0x42bdaf*/
      goto LABEL_13; /*0x42bdaf*/
  }
  v11 = ((unsigned __int8)*v26 - 4) & 7; /*0x42bd05*/
  v12 = dword_89F688[v11]; /*0x42bd08*/
  v13 = (_WORD *)(4 * v11 + 9041544); /*0x42bd10*/
  v22 = v8 + v12; /*0x42bd24*/
  v23 = v9 + v13[1]; /*0x42bd29*/
  v14 = HIWORD(v21) + v13[1]; /*0x42bd3a*/
  v15 = v6 + *v13; /*0x42bd3f*/
  LOWORD(v24) = v15; /*0x42bd42*/
  HIWORD(v24) = v14; /*0x42bd47*/
  HIWORD(v21) = v14; /*0x42bd53*/
  v16 = abs16(v23); /*0x42bd5f*/
  v17 = abs16(v22); /*0x42bd64*/
  if ( v17 <= v16 ) /*0x42bd68*/
    v17 = v16; /*0x42bd6a*/
  if ( v17 <= v25 ) /*0x42bd70*/
  {
    v27 = 1; /*0x42bd80*/
    goto LABEL_11; /*0x42bd80*/
  }
  if ( !v27 ) /*0x42bd78*/
  {
    v25 = v17; /*0x42bd7a*/
LABEL_11:
    v9 = v23; /*0x42bd85*/
    v7 = a3; /*0x42bd92*/
    v6 = v24; /*0x42bd96*/
    --v20; /*0x42bd9e*/
    v8 = v22; /*0x42bda2*/
    --v26; /*0x42bda7*/
    goto LABEL_12; /*0x42bda7*/
  }
  v19 = ((((unsigned __int8)*v26 - 4) & 7) - 4) & 7; /*0x42bdd7*/
  *a4 = v20 + 1; /*0x42bdda*/
  LOWORD(v28) = v15 + LOWORD(dword_89F688[v19]); /*0x42bdf3*/
  result = v14 + HIWORD(dword_89F688[v19]); /*0x42bdfc*/
  HIWORD(v28) = result; /*0x42bdff*/
  *a5 = v28; /*0x42be0a*/
  return result; /*0x42bdbd*/
}



// ==== 0x0042BE20  WalkLineOfSight  this=-  sig=csp ====
char __stdcall WalkLineOfSight(char *a1, int a2, _DWORD *a3, __int16 *a4, _DWORD *a5, int a6, char a7)
{
  __int16 v7; // dx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  signed int v13; // ecx
  signed int v14; // eax
  _DWORD *v15; // ebx
  int v16; // ebp
  int v17; // esi
  bool v18; // cl
  _DWORD *v19; // eax
  int v20; // ecx
  _DWORD *v21; // edi
  int v22; // eax
  int v23; // ecx
  _DWORD *v24; // edi
  int v25; // eax
  int v26; // ecx
  bool v27; // cc
  signed int v29; // [esp+28h] [ebp-34h]
  signed int v30; // [esp+2Ch] [ebp-30h]
  int v31; // [esp+30h] [ebp-2Ch]
  int v32; // [esp+34h] [ebp-28h]
  int v33; // [esp+38h] [ebp-24h]
  int v34; // [esp+3Ch] [ebp-20h]
  _DWORD *v35; // [esp+40h] [ebp-1Ch]
  _DWORD *v36; // [esp+44h] [ebp-18h]
  int v37; // [esp+48h] [ebp-14h]
  int v38; // [esp+4Ch] [ebp-10h]
  double v39; // [esp+54h] [ebp-8h]

  v7 = a4[1]; /*0x42be2d*/
  v38 = 0; /*0x42be35*/
  v8 = *a4; /*0x42be3d*/
  v9 = v7; /*0x42be40*/
  if ( *a4 >= 0 )
    v10 = v7 >= 0 ? 3 : 1;
  else
    v10 = v7 >= 0 ? 5 : 7;
  v32 = v10; /*0x42be67*/
  v11 = v7 + v8; /*0x42be6d*/
  if ( v8 - v7 <= 0 )
    v12 = v11 <= 0 ? 6 : 4;
  else
    v12 = v11 <= 0 ? 0 : 2;
  v33 = v12; /*0x42be8f*/
  v13 = abs32(v9); /*0x42be9a*/
  v14 = abs16(*a4); /*0x42be9f*/
  v29 = v14; /*0x42bea3*/
  if ( v14 >= v13 ) /*0x42bea7*/
    v29 = v13; /*0x42bea9*/
  if ( v14 <= v13 ) /*0x42beaf*/
    v14 = v13; /*0x42beb1*/
  v15 = a5; /*0x42beb7*/
  v30 = v14 - v29; /*0x42bebf*/
  v39 = LocomotionClass::GetSpeedMultiplier(a5); /*0x42bec8*/
  v37 = v15[135]; /*0x42bedd*/
  while ( 1 ) /*0x42beed*/
  {
    v16 = v29; /*0x42beed*/
    v31 = 0; /*0x42bef1*/
    if ( v29 ) /*0x42befb*/
      break; /*0x42befb*/
LABEL_49:
    v26 = v32; /*0x42c121*/
    v32 = v33; /*0x42c129*/
    v29 = v30; /*0x42c131*/
    v33 = v26; /*0x42c13a*/
    v27 = v38 + 1 < 2; /*0x42c13e*/
    v30 = v16; /*0x42c141*/
    ++v38; /*0x42c145*/
    if ( !v27 ) /*0x42c149*/
      return 0; /*0x42c158*/
  }
  v17 = a6; /*0x42bf05*/
  v18 = 0; /*0x42bf09*/
  v19 = (_DWORD *)*a3; /*0x42bf0b*/
  a5 = (_DWORD *)*a3; /*0x42bf13*/
  v34 = v30; /*0x42bf17*/
  if ( v29 > 0 ) /*0x42bf1b*/
  {
    do /*0x42c00c*/
    {
      if ( v18 ) /*0x42bf23*/
        break; /*0x42bf23*/
      v20 = v32 & 7; /*0x42bf2d*/
      LOWORD(v35) = (_WORD)v19 + LOWORD(dword_89F688[v20]); /*0x42bf46*/
      HIWORD(v35) = HIWORD(a5) + HIWORD(dword_89F688[v20]); /*0x42bf55*/
      a5 = v35; /*0x42bf5e*/
      v21 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a5); /*0x42bf6c*/
      if ( v39 > 0.00001 && (double)CellClass::GetTileData((__int16 *)&a5, v37) * v39 >= 0.01 ) /*0x42bfa1*/
        ++v31; /*0x42bfa3*/
      v18 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v15 + 428))(v15, v21, v32, v17, 0, 1) /*0x42bfe5*/
         || (v21[80] & 0x40000) != 0
         || v31 > 3
         || !a7 && v31 > 0;
      v22 = *((char *)v21 + 283); /*0x42bfe7*/
      --v16; /*0x42bff0*/
      if ( v17 - v22 == 4 ) /*0x42bff4*/
      {
        v17 = v22 + 4; /*0x42bffc*/
        if ( (v21[80] & 0x100) != 0 ) /*0x42c002*/
          continue; /*0x42c002*/
      }
      v17 = *((char *)v21 + 283); /*0x42c004*/
      LOWORD(v19) = (_WORD)a5; /*0x42c006*/
    }
    while ( v16 > 0 ); /*0x42c00c*/
  }
  if ( v30 > 0 ) /*0x42c018*/
  {
    while ( !v18 ) /*0x42c026*/
    {
      v23 = v33 & 7; /*0x42c030*/
      LOWORD(v36) = LOWORD(dword_89F688[v23]) + (_WORD)v19; /*0x42c053*/
      HIWORD(v36) = HIWORD(a5) + HIWORD(dword_89F688[v23]); /*0x42c058*/
      a5 = v36; /*0x42c067*/
      v24 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a5); /*0x42c070*/
      if ( v39 > 0.00001 && (double)CellClass::GetTileData((__int16 *)&a5, v37) * v39 >= 0.01 ) /*0x42c0a5*/
        ++v31; /*0x42c0a7*/
      v18 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v15 + 428))(v15, v24, v33, v17, 0, 1) /*0x42c0e9*/
         || (v24[80] & 0x40000) != 0
         || v31 > 3
         || !a7 && v31 > 0;
      --v34; /*0x42c0eb*/
      v25 = *((char *)v24 + 283); /*0x42c0ef*/
      if ( v17 - v25 != 4 || (v17 = v25 + 4, (v24[80] & 0x100) == 0) ) /*0x42c109*/
        v17 = *((char *)v24 + 283); /*0x42c10b*/
      if ( v34 <= 0 ) /*0x42c113*/
        goto LABEL_47; /*0x42c113*/
      LOWORD(v19) = (_WORD)a5; /*0x42c020*/
    }
    goto LABEL_48; /*0x42c026*/
  }
LABEL_47:
  if ( v18 ) /*0x42c11b*/
  {
LABEL_48:
    v16 = v29; /*0x42c11d*/
    goto LABEL_49; /*0x42c11d*/
  }
  if ( v29 > 0 ) /*0x42c165*/
    memset32(a1, v32, v29); /*0x42c16d*/
  if ( v30 > 0 ) /*0x42c175*/
    memset32(&a1[4 * v29], v33, v30); /*0x42c186*/
  if ( a2 - v30 - v29 > 0 ) /*0x42c19a*/
    memset32(&a1[4 * v29 + 4 * v30], -2, a2 - v30 - v29); /*0x42c1a6*/
  return 1; /*0x42c14f*/
}



// ==== 0x0042C1C0  MapClass::AllocArrays  this=CellClass  sig=csp ====
_DWORD *__thiscall sub_42C1C0(char *this)
{
  void **v1; // esi
  char *v2; // edi
  int v3; // ebx
  char *v4; // eax
  int v5; // ecx
  char *v6; // eax
  int v7; // ecx
  char *v8; // eax
  int v9; // ecx
  char *v10; // eax
  int v11; // ecx
  _DWORD *result; // eax
  int v13; // ecx
  int v14; // ecx

  v1 = (void **)(this + 76); /*0x42c1c8*/
  v2 = (char *)(&unk_87F810 - (_UNKNOWN *)this); /*0x42c1cb*/
  v3 = 3; /*0x42c1cd*/
  do /*0x42c27c*/
  {
    if ( *(v1 - 3) ) /*0x42c1d2*/
      __3_YAXPAX_Z(*(v1 - 3)); /*0x42c1da*/
    v4 = (char *)__2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c1e9*/
    *(v1 - 3) = v4; /*0x42c1ee*/
    v5 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c1f7*/
    if ( v5 >= 0 ) /*0x42c1f8*/
    {
      v6 = &v4[4 * v5]; /*0x42c1fa*/
      v7 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c1fd*/
      do /*0x42c208*/
      {
        *(_DWORD *)v6 = 0; /*0x42c1fe*/
        v6 -= 4; /*0x42c204*/
        --v7; /*0x42c207*/
      }
      while ( v7 ); /*0x42c208*/
    }
    if ( *v1 ) /*0x42c20a*/
      __3_YAXPAX_Z(*v1); /*0x42c211*/
    v8 = (char *)__2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c220*/
    *v1 = v8; /*0x42c225*/
    v9 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c22d*/
    if ( v9 >= 0 ) /*0x42c22e*/
    {
      v10 = &v8[4 * v9]; /*0x42c230*/
      v11 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c233*/
      do /*0x42c23e*/
      {
        *(_DWORD *)v10 = 0; /*0x42c234*/
        v10 -= 4; /*0x42c23a*/
        --v11; /*0x42c23d*/
      }
      while ( v11 ); /*0x42c23e*/
    }
    if ( v1[3] ) /*0x42c240*/
      __3_YAXPAX_Z(v1[3]); /*0x42c248*/
    result = __2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c257*/
    v1[3] = result; /*0x42c25c*/
    v13 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c265*/
    if ( v13 >= 0 ) /*0x42c266*/
    {
      result += v13; /*0x42c268*/
      v14 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c26b*/
      do /*0x42c276*/
      {
        *result-- = 0; /*0x42c26c*/
        --v14; /*0x42c275*/
      }
      while ( v14 ); /*0x42c276*/
    }
    ++v1; /*0x42c278*/
    --v3; /*0x42c27b*/
  }
  while ( v3 ); /*0x42c27c*/
  return result; /*0x42c282*/
}



// ==== 0x0042C290  Pathfinding::AStar  this=DynamicVectorClass_uint  sig=csp ====
char __thiscall Pathfinding::AStar(Pathfinding *this, __int16 *a2, __int16 *a3, int a4, int a5)
{
  double v5; // st7
  Pathfinding *v6; // edi
  int v8; // esi
  _DWORD *Pathfinding_field_0x14; // eax
  int i; // ecx
  int v11; // ebx
  int v12; // eax
  int Pathfinding_field_0x10; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  Pathfinding *v17; // ecx
  _DWORD *v18; // eax
  int Pathfinding_field_0x08; // eax
  _DWORD *v20; // ebx
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v28; // edx
  int v29; // esi
  int v31; // eax
  int Pathfinding_field_0x0C; // ecx
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // ax
  int v37; // eax
  int v38; // ecx
  _DWORD *v39; // edx
  int v40; // eax
  unsigned int v41; // esi
  _DWORD *v42; // edi
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v46; // eax
  int v47; // eax
  bool v49; // zf
  int *v50; // ecx
  int v51; // eax
  int v52; // ebx
  _DWORD *v53; // esi
  int v54; // esi
  int v55; // eax
  int v58; // edx
  int v59; // eax
  int v62; // eax
  int v63; // esi
  int v66; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  _WORD *v72; // edx
  char v74; // [esp+10h] [ebp-58h]
  char v75; // [esp+11h] [ebp-57h]
  bool v76; // [esp+12h] [ebp-56h]
  bool v77; // [esp+13h] [ebp-55h]
  _DWORD *v78; // [esp+14h] [ebp-54h]
  int v79; // [esp+18h] [ebp-50h]
  int v80; // [esp+18h] [ebp-50h]
  float v81; // [esp+18h] [ebp-50h]
  _DWORD *v83; // [esp+20h] [ebp-48h]
  int v84; // [esp+20h] [ebp-48h]
  int v85; // [esp+24h] [ebp-44h]
  int v86; // [esp+28h] [ebp-40h]
  int v87; // [esp+2Ch] [ebp-3Ch]
  int v88; // [esp+30h] [ebp-38h]
  int v89; // [esp+34h] [ebp-34h]
  int v90; // [esp+34h] [ebp-34h]
  int v91; // [esp+34h] [ebp-34h]
  int v92; // [esp+38h] [ebp-30h]
  int v93; // [esp+3Ch] [ebp-2Ch]
  int v94; // [esp+40h] [ebp-28h]
  int v95; // [esp+44h] [ebp-24h]
  int v96; // [esp+48h] [ebp-20h]
  _DWORD *v97; // [esp+4Ch] [ebp-1Ch]
  int v98; // [esp+4Ch] [ebp-1Ch]
  int v99; // [esp+50h] [ebp-18h]
  int v100; // [esp+50h] [ebp-18h]
  int v101; // [esp+54h] [ebp-14h]
  int v102; // [esp+54h] [ebp-14h]
  _DWORD *v103; // [esp+54h] [ebp-14h]
  _DWORD *v104; // [esp+54h] [ebp-14h]
  int v105; // [esp+5Ch] [ebp-Ch]
  double v106; // [esp+60h] [ebp-8h]

  v6 = this; /*0x42c2a5*/
  if ( !a5 ) /*0x42c2b6*/
  {
    v106 = 0.0; /*0x42c2cf*/
    v94 = 0; /*0x42c2df*/
LABEL_5:
    v74 = 0; /*0x42c2fb*/
    goto LABEL_6; /*0x42c2fb*/
  }
  LocomotionClass::GetSpeedMultiplier((LocomotionClass *)a5); /*0x42c2ba*/
  __asm { fst [esp+68h+var_8] } /*0x42c2c5*/
  v94 = *(_DWORD *)(a5 + 540); /*0x42c2c9*/
  __asm { fcomp ds:dbl_7E3810 } /*0x42c2e9*/
  v74 = 1; /*0x42c2ef*/
  __asm { fnstsw ax } /*0x42c2f4*/
  if ( (_AX & 0x4100) != 0 ) /*0x42c2f9*/
    goto LABEL_5; /*0x42c2f9*/
LABEL_6:
  v8 = 2; /*0x42c300*/
  v92 = 2; /*0x42c305*/
  while ( 2 ) /*0x42c309*/
  {
    Pathfinding_field_0x14 = (_DWORD *)v6[3].Pathfinding_field_0x14; /*0x42c309*/
    for ( i = 0; i <= *Pathfinding_field_0x14; *(_DWORD *)(Pathfinding_field_0x14[2] + 4 * i - 4) = 0 ) /*0x42c311*/
      ++i; /*0x42c316*/
    *Pathfinding_field_0x14 = 0; /*0x42c325*/
    v11 = *(__int16 *)(*(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x42c34a*/
                     + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], a2)
                     + 2 * v8);
    v89 = v11; /*0x42c351*/
    v93 = *(__int16 *)(*(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x42c36e*/
                     + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], a3)
                     + 2 * v8);
    v76 = v8 == 2; /*0x42c377*/
    if ( v8 == 2 ) /*0x42c37b*/
      v95 = 0; /*0x42c387*/
    else
      v95 = *(&v6[2].Pathfinding_field_0x0C + v8); /*0x42c381*/
    v12 = *(&v6[2].Pathfinding_field_0x08 + v8); /*0x42c393*/
    v85 = *(&v6[2].Pathfinding_field_0x14 + v8); /*0x42c39b*/
    v86 = *(_DWORD *)&v6[3].__pad_0[4 * v8 + 4]; /*0x42c3a2*/
    *(_DWORD *)(v12 + 4 * v11) = v6[1].Pathfinding_field_0x0C; /*0x42c3aa*/
    v105 = v12; /*0x42c3b2*/
    *(_DWORD *)(v12 + 4 * v93) = v6[1].Pathfinding_field_0x0C; /*0x42c3b6*/
    if ( v11 == v93 ) /*0x42c3b9*/
    {
      if ( !v8 ) /*0x42c3bd*/
      {
        Pathfinding_field_0x10 = v6[3].Pathfinding_field_0x10; /*0x42c3bf*/
        *(_DWORD *)(Pathfinding_field_0x10 + 12) = 0; /*0x42c3c2*/
        *(_DWORD *)(Pathfinding_field_0x10 + 4) = v11; /*0x42c3c5*/
      }
      *((_WORD *)&v6[6].Pathfinding_field_0x14 + 500 * v8) = v11; /*0x42c3d1*/
      *(&v6[113].Pathfinding_field_0x18 + v8) = 1; /*0x42c3d9*/
      goto LABEL_85; /*0x42c3e4*/
    }
    v97 = (_DWORD *)v6[3].Pathfinding_field_0x10; /*0x42c3ee*/
    *v97 = -1; /*0x42c3f2*/
    v97[1] = v11; /*0x42c3f8*/
    v97[2] = 0; /*0x42c3fb*/
    v97[3] = 0; /*0x42c3fe*/
    v83 = (_DWORD *)v6[3].Pathfinding_field_0x14; /*0x42c404*/
    v14 = *v83 + 1; /*0x42c40a*/
    v15 = v14 >> 1; /*0x42c40d*/
    if ( v14 < v83[1] ) /*0x42c412*/
    {
      for ( ; v14 > 1; v15 >>= 1 ) /*0x42c417*/
      {
        v99 = v83[2]; /*0x42c420*/
        _EAX = *(_DWORD *)(v99 + 4 * v15); /*0x42c424*/
        __asm /*0x42c427*/
        {
          fld dword ptr [eax+8]
          fcomp ds:flt_7E1748
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x42c435*/
          break; /*0x42c435*/
        *(_DWORD *)(v99 + 4 * v14) = *(_DWORD *)(v99 + 4 * v15); /*0x42c43e*/
        v11 = v89; /*0x42c441*/
        v14 = v15; /*0x42c445*/
      }
      *(_DWORD *)(v83[2] + 4 * v14) = v97; /*0x42c459*/
      ++*v83; /*0x42c463*/
      if ( (unsigned int)v97 > v83[3] ) /*0x42c46a*/
        v83[3] = v97; /*0x42c46c*/
      if ( (unsigned int)v97 < v83[4] ) /*0x42c472*/
        v83[4] = v97; /*0x42c474*/
    }
    v87 = 1; /*0x42c482*/
    *(_DWORD *)(v85 + 4 * v11) = v6[1].Pathfinding_field_0x0C; /*0x42c48a*/
    *(_DWORD *)(v86 + 4 * v11) = 0; /*0x42c48d*/
    v17 = (Pathfinding *)v6[3].Pathfinding_field_0x14; /*0x42c494*/
    if ( *(_DWORD *)v17->__pad_0 ) /*0x42c497*/
    {
      Pathfinding_field_0x08 = v17->Pathfinding_field_0x08; /*0x42c4a1*/
      v20 = *(_DWORD **)(Pathfinding_field_0x08 + 4); /*0x42c4a9*/
      *(_DWORD *)(Pathfinding_field_0x08 + 4) = *(_DWORD *)(Pathfinding_field_0x08 + 4 * *(_DWORD *)v17->__pad_0); /*0x42c4ac*/
      *(_DWORD *)(v17->Pathfinding_field_0x08 + 4 * (*(_DWORD *)v17->__pad_0)--) = 0; /*0x42c4b4*/
      Pathfinding::SiftDown(v17, 1); /*0x42c4c0*/
      v18 = v20; /*0x42c4c5*/
    }
    else
    {
      v18 = 0; /*0x42c49d*/
    }
    v78 = v18; /*0x42c4ca*/
    v21 = 24 * v8; /*0x42c4ce*/
    v84 = 24 * v8; /*0x42c4d1*/
    v77 = *(&v6[4].Pathfinding_field_0x14 + 6 * v8) == 0; /*0x42c4de*/
    if ( !v18 ) /*0x42c4e5*/
      return 0; /*0x42c8ea*/
    while ( 1 ) /*0x42c4eb*/
    {
      v22 = v18[1]; /*0x42c4eb*/
      v96 = v22; /*0x42c4f4*/
      if ( v22 == v93 ) /*0x42c4f8*/
        break; /*0x42c4f8*/
      v23 = 9 * v22; /*0x42c4fe*/
      v24 = *(_DWORD *)&stru_87F5F0.__pad_58[v21 + 560]; /*0x42c501*/
      v25 = *(_DWORD *)(v24 + 4 * v23 + 4); /*0x42c507*/
      v26 = *(_DWORD *)(v24 + 4 * v23 + 16); /*0x42c50e*/
      if ( v26 > 0 ) /*0x42c513*/
      {
        v90 = v25; /*0x42c51d*/
        v88 = 16 * v87; /*0x42c524*/
        v100 = v26; /*0x42c528*/
        do /*0x42c73a*/
        {
          HIWORD(v29) = 0; /*0x42c534*/
          v79 = 0; /*0x42c536*/
          _EBX = *(_DWORD *)v90; /*0x42c53e*/
          v75 = *(_BYTE *)(v90 + 4); /*0x42c543*/
          v28 = *(_DWORD *)&stru_87F5F0.__pad_58[v84 + 560]; /*0x42c547*/
          v98 = *(_DWORD *)v90; /*0x42c550*/
          LOWORD(v29) = *(_WORD *)(v28 + 36 * *(_DWORD *)v90 + 24); /*0x42c554*/
          _EDX = *(_DWORD *)(v28 + 36 * *(_DWORD *)v90 + 28); /*0x42c55c*/
          v101 = _EDX; /*0x42c565*/
          if ( v74 ) /*0x42c569*/
          {
            v80 = InterpolateTerrainLighting(v94, v92, v96, _EBX); /*0x42c585*/
            __asm /*0x42c589*/
            {
              fild [esp+68h+var_50]
              fmul [esp+68h+var_8]
            }
            LOWORD(v31) = Math::RoundToInt(v5); /*0x42c591*/
            _EDX = v101; /*0x42c596*/
            v79 = v31; /*0x42c59a*/
          }
          if ( v75 ) /*0x42c5a4*/
            __asm { fld ds:dbl_7E3818 } /*0x42c5a6*/
          else
            __asm { fld ds:dbl_7E2800 } /*0x42c5ae*/
          _EAX = v78; /*0x42c5b4*/
          Pathfinding_field_0x0C = v6[1].Pathfinding_field_0x0C; /*0x42c5b8*/
          __asm /*0x42c5bb*/
          {
            fld ds:flt_7E3794[edx*4]
            fadd dword ptr [eax+8]
          }
          __asm { fiadd [esp+68h+var_50] }
          __asm
          {
            fadd st, st(1)
            fstp [esp+68h+var_50]
            fstp st
          }
          if ( *(_DWORD *)(v85 + 4 * _EBX) != Pathfinding_field_0x0C ) /*0x42c5d8*/
            goto LABEL_41; /*0x42c5d8*/
          _EAX = v86; /*0x42c5da*/
          __asm /*0x42c5de*/
          {
            fld dword ptr [eax+ebx*4]
            fcomp [esp+68h+var_50]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x42c5ea*/
          {
LABEL_41:
            if ( (v76 || *(_DWORD *)(v95 + 4 * v29) == Pathfinding_field_0x0C || _EDX == 1) /*0x42c612*/
              && dword_82A594[8 * a4 + _EDX] == 1 )
            {
              if ( v77 ) /*0x42c61e*/
                goto LABEL_49; /*0x42c61e*/
              v35 = _EBX; /*0x42c624*/
              v36 = v96; /*0x42c629*/
              if ( (unsigned __int16)_EBX < (unsigned __int16)v96 ) /*0x42c62b*/
              {
                v36 = _EBX; /*0x42c62d*/
                v35 = v96; /*0x42c62f*/
              }
              v37 = v35 | (v36 << 16); /*0x42c643*/
              v38 = *(int *)((char *)&v6[4].Pathfinding_field_0x14 + v84) - 1; /*0x42c64c*/
              if ( v38 < 0 ) /*0x42c64d*/
              {
LABEL_49:
                v40 = this->q064; /*0x42c666*/
                *(_DWORD *)(v40 + v88 + 4) = _EBX; /*0x42c671*/
                v41 = v40 + v88; /*0x42c675*/
                *(_DWORD *)v41 = ((int)v78 - v40) >> 4; /*0x42c687*/
                *(float *)(v41 + 8) = v81; /*0x42c689*/
                *(_DWORD *)(v41 + 12) = v78[3] + 1; /*0x42c690*/
                v42 = (_DWORD *)this->q01A; /*0x42c693*/
                v43 = *v42 + 1; /*0x42c69b*/
                v44 = v43 >> 1; /*0x42c69e*/
                if ( v43 < v42[1] ) /*0x42c6a2*/
                {
                  for ( ; v43 > 1; v44 >>= 1 ) /*0x42c6a7*/
                  {
                    v102 = *(_DWORD *)(v42[2] + 4 * v44); /*0x42c6af*/
                    __asm /*0x42c6b3*/
                    {
                      fld dword ptr [eax+8]
                      fcomp [esp+68h+var_50]
                      fnstsw ax
                    }
                    if ( (_AX & 0x4100) != 0 ) /*0x42c6bf*/
                      break; /*0x42c6bf*/
                    *(_DWORD *)(v42[2] + 4 * v43) = v102; /*0x42c6c8*/
                    _EBX = v98; /*0x42c6cb*/
                    v43 = v44; /*0x42c6cf*/
                  }
                  *(_DWORD *)(v42[2] + 4 * v43) = v41; /*0x42c6db*/
                  v46 = v42[3]; /*0x42c6e0*/
                  ++*v42; /*0x42c6e6*/
                  if ( v41 > v46 ) /*0x42c6e8*/
                    v42[3] = v41; /*0x42c6ea*/
                  if ( v41 < v42[4] ) /*0x42c6f0*/
                    v42[4] = v41; /*0x42c6f2*/
                }
                __asm { fld [esp+68h+var_50] } /*0x42c6fd*/
                v47 = v86; /*0x42c704*/
                v6 = this; /*0x42c708*/
                *(_DWORD *)(v85 + 4 * _EBX) = this->q00A; /*0x42c70c*/
                __asm { fstp dword ptr [eax+ebx*4] } /*0x42c70f*/
                *(float *)(v47 + 4 * _EBX) = _ET1; /*0x42c70f*/
                ++v87; /*0x42c71e*/
                v88 += 16; /*0x42c722*/
              }
              else
              {
                v39 = (_DWORD *)(*(int *)((char *)&v6[4].Pathfinding_field_0x08 + v84) + 4 * v38); /*0x42c653*/
                while ( *v39 != v37 ) /*0x42c658*/
                {
                  --v38; /*0x42c65e*/
                  --v39; /*0x42c65f*/
                  if ( v38 < 0 ) /*0x42c664*/
                    goto LABEL_49; /*0x42c664*/
                }
              }
            }
          }
          v49 = v100 == 1; /*0x42c731*/
          v90 += 8; /*0x42c732*/
          --v100; /*0x42c736*/
        }
        while ( !v49 ); /*0x42c73a*/
      }
      v50 = (int *)v6[3].Pathfinding_field_0x14; /*0x42c740*/
      if ( !*v50 ) /*0x42c747*/
        return 0; /*0x42c747*/
      v51 = v50[2]; /*0x42c74d*/
      v52 = 1; /*0x42c750*/
      v53 = *(_DWORD **)(v51 + 4); /*0x42c758*/
      *(_DWORD *)(v51 + 4) = *(_DWORD *)(v51 + 4 * *v50); /*0x42c75b*/
      v103 = v53; /*0x42c763*/
      *(_DWORD *)(v50[2] + 4 * *v50) = 0; /*0x42c767*/
      v54 = *v50 - 1; /*0x42c771*/
      *v50 = v54; /*0x42c773*/
      if ( v54 < 2 ) /*0x42c778*/
        goto LABEL_62; /*0x42c778*/
      v55 = v50[2]; /*0x42c77a*/
      _EDX = *(_DWORD *)(v55 + 8); /*0x42c77d*/
      _EAX = *(_DWORD *)(v55 + 4); /*0x42c780*/
      __asm /*0x42c783*/
      {
        fld dword ptr [edx+8]
        fld dword ptr [eax+8]
        fcompp
      }
      v58 = 2; /*0x42c78b*/
      __asm { fnstsw ax } /*0x42c790*/
      if ( (_EAX & 0x4100) != 0 ) /*0x42c795*/
LABEL_62:
        v58 = 1; /*0x42c797*/
      if ( v54 < 3 ) /*0x42c79f*/
        goto LABEL_66; /*0x42c79f*/
      v59 = v50[2]; /*0x42c7a1*/
      _ESI = *(_DWORD *)(v59 + 12); /*0x42c7a4*/
      _EAX = *(_DWORD *)(v59 + 4 * v58); /*0x42c7a7*/
      __asm /*0x42c7aa*/
      {
        fld dword ptr [esi+8]
        fld dword ptr [eax+8]
        fcompp
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x42c7b7*/
      {
LABEL_66:
        if ( v58 == 1 ) /*0x42c7c3*/
          goto LABEL_75; /*0x42c7c3*/
      }
      else
      {
        v58 = 3; /*0x42c7b9*/
      }
      do /*0x42c82f*/
      {
        v62 = v50[2]; /*0x42c7c5*/
        v63 = *(_DWORD *)(v62 + 4 * v52); /*0x42c7cb*/
        *(_DWORD *)(v62 + 4 * v52) = *(_DWORD *)(v62 + 4 * v58); /*0x42c7ce*/
        v52 = v58; /*0x42c7d4*/
        *(_DWORD *)(v50[2] + 4 * v58) = v63; /*0x42c7d6*/
        v91 = 2 * v58 + 1; /*0x42c7e4*/
        if ( 2 * v58 <= *v50 ) /*0x42c7e8*/
        {
          _EAX = *(_DWORD *)(v50[2] + 8 * v58); /*0x42c7ed*/
          __asm { fld dword ptr [eax+8] } /*0x42c7f0*/
          _EAX = *(_DWORD *)(v50[2] + 4 * v58); /*0x42c7f6*/
          __asm /*0x42c7f9*/
          {
            fld dword ptr [eax+8]
            fcompp
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x42c803*/
            v58 *= 2; /*0x42c805*/
        }
        if ( v91 <= *v50 ) /*0x42c80b*/
        {
          v66 = v50[2]; /*0x42c80d*/
          _ESI = *(_DWORD *)(v66 + 4 * v91); /*0x42c814*/
          _EAX = *(_DWORD *)(v66 + 4 * v58); /*0x42c817*/
          __asm /*0x42c81a*/
          {
            fld dword ptr [esi+8]
            fld dword ptr [eax+8]
            fcompp
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x42c827*/
            v58 = v91; /*0x42c829*/
        }
      }
      while ( v58 != v52 ); /*0x42c82f*/
      v6 = this; /*0x42c831*/
LABEL_75:
      v18 = v103; /*0x42c835*/
      v78 = v103; /*0x42c83b*/
      if ( !v103 ) /*0x42c83f*/
        return 0; /*0x42c83f*/
      v8 = v92; /*0x42c845*/
      v21 = v84; /*0x42c849*/
    }
    if ( !v18 ) /*0x42c854*/
      return 0; /*0x42c854*/
    v69 = (int)v18; /*0x42c85c*/
    v104 = v18; /*0x42c861*/
    if ( *v18 != -1 ) /*0x42c865*/
    {
      do /*0x42c881*/
      {
        *(_DWORD *)(v105 + 4 * v18[1]) = v6[1].Pathfinding_field_0x0C; /*0x42c871*/
        v18 = (_DWORD *)(v6[3].Pathfinding_field_0x10 + 16 * *v18); /*0x42c87c*/
      }
      while ( *v18 != -1 ); /*0x42c881*/
      v69 = (int)v104; /*0x42c883*/
    }
    v70 = *(_DWORD *)(v69 + 12) + 1; /*0x42c88a*/
    *(&v6[113].Pathfinding_field_0x18 + v8) = v70; /*0x42c88b*/
    v71 = v70 - 1; /*0x42c892*/
    if ( v71 > 0 ) /*0x42c895*/
    {
      v72 = (_WORD *)&v6[6].Pathfinding_field_0x14 + 500 * v8 + v71; /*0x42c8a3*/
      do /*0x42c8bf*/
      {
        *v72-- = *(_WORD *)(v69 + 4); /*0x42c8ae*/
        v69 = v6[3].Pathfinding_field_0x10 + 16 * *(_DWORD *)v69; /*0x42c8bc*/
        --v71; /*0x42c8be*/
      }
      while ( v71 ); /*0x42c8bf*/
    }
    *((_WORD *)&v6[6].Pathfinding_field_0x14 + 500 * v8) = *(_WORD *)(v69 + 4); /*0x42c8ce*/
LABEL_85:
    v92 = --v8; /*0x42c8d7*/
    if ( v8 >= 0 ) /*0x42c8db*/
      continue; /*0x42c8db*/
    return 1; /*0x42c8e4*/
  }
}



// ==== 0x0042C900  ObjectClass::FindPathWithRetry  this=CellClass  sig=csp ====
int *__thiscall FindPathWithRetry(int this, __int16 *a2, __int16 *a3, char *a4, int a5, int a6, int a7, int a8)
{
  int v9; // esi
  int v10; // edi
  _DWORD *v12; // ebx
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // ecx
  int (__stdcall ***v17)(_DWORD, void *, int *); // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  char IsWithinUsableArea; // al
  int *result; // eax
  int v23; // eax
  signed int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  char v27; // dl
  __int16 v28[2]; // [esp+18h] [ebp-20h] BYREF
  __int16 v29[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v30; // [esp+20h] [ebp-18h]
  int TileIndex; // [esp+24h] [ebp-14h]
  _DWORD v32[4]; // [esp+28h] [ebp-10h] BYREF
  int v33; // [esp+44h] [ebp+Ch]
  int v34; // [esp+44h] [ebp+Ch]

  *(_BYTE *)(this + 56) = 1; /*0x42c909*/
  CellClass::ClearOccupancyGrid((CellClass *)this); /*0x42c90d*/
  v9 = this + 116; /*0x42c912*/
  v10 = 3; /*0x42c915*/
  do /*0x42c925*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9); /*0x42c91e*/
    v9 += 24; /*0x42c921*/
    --v10; /*0x42c924*/
  }
  while ( v10 ); /*0x42c925*/
  *(_DWORD *)(this + 60) = a8; /*0x42c92f*/
  v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x42c93d*/
  v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x42c95b*/
  if ( a7 == -1 ) /*0x42c95d*/
    v13 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 132))(a4) + 1460); /*0x42c96d*/
  else
    v13 = a7; /*0x42c95f*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], a2, v13, a4[140]); /*0x42c98d*/
  if ( a7 == -1 ) /*0x42c991*/
    a8 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 132))(a4) + 1460); /*0x42c9a9*/
  else
    a8 = a7; /*0x42c993*/
  v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x42c9b7*/
  v15 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], a3, a8, BYTE1(v14[80]) & 1); /*0x42c9d7*/
  v33 = v15; /*0x42c9e0*/
  LOBYTE(v15) = a4[140]; /*0x42c9e4*/
  *(_DWORD *)v29 = *Pathfinding::CrossBridge(&a8, (int)v30, v15); /*0x42ca01*/
  v16 = v12[80] >> 8; /*0x42ca0b*/
  LOBYTE(v16) = v16 & 1; /*0x42ca0e*/
  *(_DWORD *)v28 = *Pathfinding::CrossBridge(&a8, (int)v12, v16); /*0x42ca23*/
  if ( a7 == -1 ) /*0x42ca27*/
    a7 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 132))(a4) + 1460); /*0x42ca3f*/
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 44))(a4) == 15 && *(_BYTE *)(*((_DWORD *)a4 + 432) + 3476) ) /*0x42ca55*/
  {
    v17 = (int (__stdcall ***)(_DWORD, void *, int *))*((_DWORD *)a4 + 413); /*0x42ca5f*/
    v18 = 0; /*0x42ca65*/
    a7 = 7; /*0x42ca69*/
    if ( !v17 ) /*0x42ca71*/
      goto LABEL_18; /*0x42ca71*/
    v19 = (**v17)(v17, &unk_818858, &a8); /*0x42ca80*/
    LOBYTE(v18) = v19 < 0; /*0x42ca88*/
    v20 = a8 & (v18 - 1); /*0x42ca8c*/
    if ( v19 < 0 && v19 != -2147467262 ) /*0x42ca97*/
      WinAPI::Wrapper(v19); /*0x42ca9a*/
    if ( !v20 ) /*0x42caa1*/
LABEL_18:
      WinAPI::Wrapper(-2147467261); /*0x42caa8*/
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v20 + 12))(v20, v32); /*0x42cab5*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v20 + 8))(v20); /*0x42cabf*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 132))(a4) + 3220) /*0x42cb1b*/
    || !a4[981]
    || (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a4 + 800))(a4)
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v29, 1)
    || (IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v28, 1),
        LOBYTE(a8) = 1,
        !IsWithinUsableArea) )
  {
    LOBYTE(a8) = 0; /*0x42cb1d*/
  }
  if ( TileIndex == v33 ) /*0x42cb30*/
  {
    if ( (_BYTE)a8 && !Pathfinding::AStar((Pathfinding *)this, v29, v28, a7, (int)a4) ) /*0x42cb58*/
    {
      Debug::Log(); /*0x42cb7e*/
      LOBYTE(a8) = 0; /*0x42cb86*/
    }
  }
  else if ( (_BYTE)a8 ) /*0x42cb34*/
  {
    return 0; /*0x42cb3f*/
  }
  v34 = 0; /*0x42cb8f*/
  v23 = -(a6 != -1); /*0x42cb9a*/
  LOBYTE(v23) = v23 & 0xFC; /*0x42cb9c*/
  TileIndex = v23 + 5; /*0x42cba1*/
  while ( 1 ) /*0x42cba5*/
  {
    if ( !(_BYTE)a8 && (v29[0] != v28[0] || v29[1] != v28[1]) ) /*0x42cbc7*/
      Debug::Log(); /*0x42cbde*/
    result = BuildingClass::UpdatePowerAnimation(this, (int)a2, a3, a4, a5, a6, a8); /*0x42cc02*/
    v30 = result; /*0x42cc09*/
    if ( result || !(_BYTE)a8 ) /*0x42cc19*/
      break; /*0x42cc19*/
    v24 = abs32(a2[1] - a3[1]); /*0x42cc31*/
    v25 = *a2 - *a3; /*0x42cc38*/
    v26 = (HIDWORD(v25) ^ v25) - HIDWORD(v25); /*0x42cc3b*/
    if ( v26 <= v24 ) /*0x42cc3f*/
      v26 = v24; /*0x42cc41*/
    if ( v26 > 1 ) /*0x42cc46*/
      Debug::Log(); /*0x42cc65*/
    ++v34; /*0x42cc75*/
    sub_42CCD0(this, (int)a4); /*0x42cc79*/
    CellClass::ClearOccupancyGrid((CellClass *)this); /*0x42cc80*/
    v27 = *(_BYTE *)(this + 56); /*0x42cc85*/
    LOBYTE(a8) = v27 != 0; /*0x42cc93*/
    if ( v34 >= TileIndex || v27 && !Pathfinding::AStar((Pathfinding *)this, v29, v28, a7, (int)a4) ) /*0x42ccb3*/
      return (int *)v30; /*0x42ccc0*/
  }
  return result; /*0x42cb36*/
}



// ==== 0x0042CCD0  ObjectClass::method_42CCD0  this=ObjectClass  sig=csp ====
void __thiscall sub_42CCD0(int this, int a2)
{
  int v2; // ebx
  int v3; // ebp
  int *v4; // esi
  unsigned __int16 v5; // di
  __int16 *v6; // ebx
  void *v7; // eax
  int v8; // eax
  void *v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v19; // [esp+14h] [ebp-24h]
  int v20; // [esp+18h] [ebp-20h]
  unsigned int i; // [esp+1Ch] [ebp-1Ch]
  void **v22; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v24; // [esp+28h] [ebp-10h]
  char v25; // [esp+2Dh] [ebp-Bh]
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]

  v2 = this; /*0x42ccd4*/
  v3 = 0; /*0x42ccf4*/
  v4 = (int *)(this + 124); /*0x42ccf6*/
  v20 = dword_87F858 + 10 * CellToTileIndexMap((int *)&dword_87F7E8, (__int16 *)(this + 112)); /*0x42ccfc*/
  while ( 1 ) /*0x42cd12*/
  {
    v5 = *(_WORD *)(v20 + 2 * v3); /*0x42cd12*/
    WordVector::Constructor(&v22, 0, 0); /*0x42cd16*/
    v22 = &DynamicVectorClass<unsigned short>::`vftable'; /*0x42cd1f*/
    v27 = 10; /*0x42cd29*/
    v26 = 0; /*0x42cd31*/
    if ( Block && v25 ) /*0x42cd41*/
    {
      __3_YAXPAX_Z(Block); /*0x42cd44*/
      Block = 0; /*0x42cd4c*/
    }
    v6 = (__int16 *)(v2 + 112); /*0x42cd5e*/
    v25 = 0; /*0x42cd68*/
    v24 = 0; /*0x42cd6d*/
    v7 = CellCoord::To_CellObj(&dword_87F7E8, v6); /*0x42cd75*/
    if ( CheckMapReachability(&dword_87F7E8, (int)v7, v3, (int)&v22, a2) ) /*0x42cd80*/
    {
      v8 = CellToTileIndexMap((int *)&dword_87F7E8, v6); /*0x42cd8f*/
      sub_42CF80((_BYTE *)this, *(unsigned __int16 *)(dword_87F858 + 10 * v8 + 2 * v3), v3); /*0x42cdac*/
      v9 = Block; /*0x42cdb1*/
      v22 = &VectorClass<unsigned short>::`vftable'; /*0x42cdb9*/
      if ( Block && v25 ) /*0x42cdcd*/
        goto LABEL_25; /*0x42cdcd*/
    }
    else
    {
      v10 = v26 - 1; /*0x42cddc*/
      v19 = v26 - 1; /*0x42cde1*/
      if ( v26 - 1 >= 0 ) /*0x42cde5*/
      {
        v11 = v5; /*0x42cde9*/
        for ( i = v5; ; v11 = i ) /*0x42cdee*/
        {
          v12 = *((unsigned __int16 *)Block + v10); /*0x42cdfe*/
          if ( (unsigned __int16)v12 != v11 ) /*0x42ce04*/
          {
            if ( (unsigned __int16)v12 < v11 ) /*0x42ce06*/
            {
              v12 = v11; /*0x42ce0a*/
              v11 = *((unsigned __int16 *)Block + v10); /*0x42ce0c*/
            }
            v13 = v12 | (v11 << 16); /*0x42ce16*/
            v14 = *v4; /*0x42ce18*/
            if ( v4[2] < *v4 /*0x42ce3b*/
              || (*((_BYTE *)v4 + 5) || !v14)
              && (v15 = v4[3], v15 > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v4 - 2) + 8))(v4 - 2, v14 + v15, 0) )
            {
              v16 = v4[2]; /*0x42ce42*/
              v17 = *(v4 - 1); /*0x42ce45*/
              v4[2] = v16 + 1; /*0x42ce4b*/
              *(_DWORD *)(v17 + 4 * v16) = v13; /*0x42ce4e*/
            }
          }
          v10 = --v19; /*0x42ce55*/
          if ( v19 < 0 ) /*0x42ce5a*/
            break; /*0x42ce5a*/
        }
      }
      v9 = Block; /*0x42ce5c*/
      v22 = &VectorClass<unsigned short>::`vftable'; /*0x42ce64*/
      if ( Block && v25 ) /*0x42ce74*/
      {
LABEL_25:
        __3_YAXPAX_Z(v9); /*0x42ce76*/
        Block = 0; /*0x42ce7f*/
      }
    }
    ++v3; /*0x42ce83*/
    v4 += 6; /*0x42ce84*/
    v25 = 0; /*0x42ce8a*/
    v24 = 0; /*0x42ce8f*/
    if ( v3 >= 3 ) /*0x42ce93*/
      break; /*0x42ce93*/
    v2 = this; /*0x42cd02*/
  }
}



// ==== 0x0042CF80  ObjectClass::method_42CF80  this=ObjectClass  sig=csp ====
void __thiscall sub_42CF80(ObjectClass *this, int a2, int a3)
{
  int v3; // esi
  int v5; // edx
  int v6; // eax
  unsigned __int16 *i; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  unsigned int v27; // [esp+10h] [ebp-14h]
  int v28; // [esp+14h] [ebp-10h]
  int j; // [esp+18h] [ebp-Ch]
  unsigned int k; // [esp+1Ch] [ebp-8h]
  int v31; // [esp+20h] [ebp-4h]

  v3 = a3; /*0x42cf86*/
  v5 = *((_DWORD *)this + a3 + 797); /*0x42cf8d*/
  if ( v5 > 1 ) /*0x42cf97*/
  {
    v6 = 0; /*0x42cfa7*/
    for ( i = (unsigned __int16 *)((char *)this + 1000 * a3 + 188); *i != a2; ++i ) /*0x42cfba*/
    {
      if ( ++v6 >= v5 ) /*0x42cfd0*/
      {
        LOBYTE(this->attachedBomb) = 0; /*0x42cfd3*/
        return; /*0x42cfdd*/
      }
    }
    if ( v6 == -1 ) /*0x42cfe3*/
    {
      LOBYTE(this->attachedBomb) = 0; /*0x42cfe6*/
    }
    else
    {
      if ( v6 == v5 - 1 ) /*0x42cffc*/
      {
        v8 = v6 + 500 * a3; /*0x42d001*/
        LOWORD(v9) = *((_WORD *)this + v8 + 94); /*0x42d004*/
        LOWORD(a3) = *((_WORD *)this + v8 + 93); /*0x42d014*/
      }
      else
      {
        v10 = v6 + 500 * a3; /*0x42d01e*/
        LOWORD(v9) = *((_WORD *)this + v10 + 95); /*0x42d029*/
        LOWORD(a3) = *((_WORD *)this + v10 + 94); /*0x42d031*/
      }
      v9 = (unsigned __int16)v9; /*0x42d03a*/
      v11 = (unsigned __int16)a3; /*0x42d040*/
      v12 = v9; /*0x42d046*/
      v27 = (unsigned __int16)a3; /*0x42d04a*/
      if ( (unsigned __int16)a3 != (unsigned __int16)v9 ) /*0x42d04e*/
      {
        if ( (unsigned __int16)a3 < (unsigned int)(unsigned __int16)v9 ) /*0x42d050*/
        {
          v11 = (unsigned __int16)v9; /*0x42d054*/
          v12 = (unsigned __int16)a3; /*0x42d056*/
        }
        a2 = v11 | (v12 << 16); /*0x42d060*/
        sub_42D830((ObjectClass *)(&this->isOnMap + 24 * v3), &a2); /*0x42d06d*/
      }
      v13 = 24 * v3; /*0x42d079*/
      v14 = *(_DWORD *)&stru_87F5F0.__pad_58[24 * v3 + 560]; /*0x42d082*/
      v15 = v14 + 36 * (unsigned __int16)v9; /*0x42d088*/
      v31 = v15; /*0x42d08e*/
      a2 = v14 + 36 * v27; /*0x42d092*/
      v16 = *(_DWORD *)(v15 + 16) - 1; /*0x42d099*/
      for ( j = v16; v16 >= 0; j = v16 ) /*0x42d09e*/
      {
        if ( *(_WORD *)(*(_DWORD *)(v15 + 4) + 8 * v16) != (_WORD)a3 ) /*0x42d0b0*/
        {
          v17 = *(_DWORD *)(a2 + 16) - 1; /*0x42d0bd*/
          v28 = v17; /*0x42d0be*/
          if ( v17 >= 0 ) /*0x42d0c2*/
          {
            v18 = *(unsigned __int16 *)(*(_DWORD *)(v15 + 4) + 8 * v16); /*0x42d0c8*/
            for ( k = v18; ; v18 = k ) /*0x42d0cd*/
            {
              if ( *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8 * v17) == v18 ) /*0x42d0e1*/
              {
                v19 = v18; /*0x42d0e3*/
                v20 = v27; /*0x42d0e5*/
                if ( v19 != v27 ) /*0x42d0eb*/
                {
                  if ( v19 < v27 ) /*0x42d0ed*/
                  {
                    v21 = v19; /*0x42d0ef*/
                    v19 = v27; /*0x42d0f1*/
                    v20 = v21; /*0x42d0f3*/
                  }
                  v22 = v19 | (v20 << 16); /*0x42d105*/
                  v23 = *(int *)((char *)&this->visibilityFlags + v13); /*0x42d107*/
                  if ( *(_DWORD *)(&this->hasParachute + v13) < v23 /*0x42d129*/
                    || (*(&this->inLimbo + v13) || !v23)
                    && (v24 = *(_DWORD *)&this->alignmentPadding85[v13 + 3], v24 > 0)
                    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)(&this->isOnMap + v13) + 8))(
                         &this->isOnMap + v13,
                         v23 + v24,
                         0) )
                  {
                    v25 = *(_DWORD *)(&this->hasParachute + v13); /*0x42d130*/
                    v26 = *(_DWORD *)&this->alignmentPadding75[v13 + 3]; /*0x42d133*/
                    *(_DWORD *)(&this->hasParachute + v13) = v25 + 1; /*0x42d139*/
                    *(_DWORD *)(v26 + 4 * v25) = v22; /*0x42d13c*/
                  }
                }
              }
              v17 = --v28; /*0x42d143*/
              if ( v28 < 0 ) /*0x42d148*/
                break; /*0x42d148*/
            }
            v16 = j; /*0x42d14a*/
            v15 = v31; /*0x42d14e*/
          }
        }
        --v16; /*0x42d152*/
      }
    }
  }
  else
  {
    LOBYTE(this->attachedBomb) = 0; /*0x42cf9a*/
  }
}



// ==== 0x0042D170  Pathfinding::CalcDistance  this=CellClass  sig=csp ====
int __thiscall Pathfinding::CalcDistance(int this, __int16 *a2, __int16 *a3, int a4, int a5, int a6, signed int a7)
{
  int v8; // esi
  int v9; // edi
  void *v10; // eax
  __int16 *v11; // esi
  int v12; // edi
  void *v13; // ebp
  int v14; // ecx
  int v15; // eax
  int v16; // edi
  __int16 *v17; // edi
  signed int v18; // ecx
  __int64 v19; // rax
  int v20; // ebp
  int RegionMap; // edi
  int v22; // ecx
  __int16 v23; // ax
  __int16 v24; // dx
  signed int v25; // edi
  __int64 v26; // rax
  signed int v27; // eax
  __int16 *v28; // ecx
  __int16 v29; // ax
  __int16 v30; // dx
  signed int v31; // esi
  __int64 v32; // rax
  signed int v33; // eax
  int result; // eax
  __int16 v35[2]; // [esp+10h] [ebp-8h] BYREF
  __int16 v36[2]; // [esp+14h] [ebp-4h] BYREF

  *(_BYTE *)(this + 56) = 1; /*0x42d179*/
  CellClass::ClearOccupancyGrid((CellClass *)this); /*0x42d17d*/
  v8 = this + 116; /*0x42d182*/
  v9 = 3; /*0x42d185*/
  do /*0x42d195*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8); /*0x42d18e*/
    v8 += 24; /*0x42d191*/
    --v9; /*0x42d194*/
  }
  while ( v9 ); /*0x42d195*/
  v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x42d1a1*/
  v11 = a3; /*0x42d1a6*/
  v12 = (int)v10; /*0x42d1b0*/
  v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x42d1bb*/
  *(_DWORD *)v36 = *Pathfinding::CrossBridge((int *)&a3, v12, a5); /*0x42d1d9*/
  v14 = *Pathfinding::CrossBridge((int *)&a3, (int)v13, a6); /*0x42d1e9*/
  v15 = a7; /*0x42d1eb*/
  v16 = a4; /*0x42d1ef*/
  *(_DWORD *)v35 = v14; /*0x42d1f6*/
  if ( a7 == -1 ) /*0x42d1fa*/
  {
    if ( a4 ) /*0x42d1fe*/
      v15 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a4 + 132))(a4) + 1460); /*0x42d20a*/
    else
      v15 = 0; /*0x42d212*/
  }
  if ( Pathfinding::AStar((Pathfinding *)this, v36, v35, v15, v16) ) /*0x42d222*/
  {
    v17 = a2; /*0x42d22f*/
    v18 = abs32(a2[1] - v11[1]); /*0x42d245*/
    v19 = *a2 - *v11; /*0x42d24c*/
    a7 = (HIDWORD(v19) ^ v19) - HIDWORD(v19); /*0x42d253*/
    if ( a7 <= v18 ) /*0x42d257*/
      a7 = v18; /*0x42d259*/
    v20 = *(_DWORD *)(this + 3188); /*0x42d25d*/
    a3 = (__int16 *)(2 * v20 - 2); /*0x42d267*/
    if ( !(_BYTE)a6 ) /*0x42d271*/
      goto LABEL_27; /*0x42d271*/
    if ( (_BYTE)a5 ) /*0x42d27d*/
    {
      RegionMap = GetRegionMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v11, 3, 0); /*0x42d29c*/
      if ( RegionMap == GetRegionMap((ObjectClass *)&stru_87F5F0.__pad_58[416], a2, 3, 0) && RegionMap != -1 ) /*0x42d2aa*/
        return a7; /*0x42d44f*/
      v17 = a2; /*0x42d2b0*/
    }
    if ( v20 < 4 ) /*0x42d2b7*/
      goto LABEL_18; /*0x42d2b7*/
    v22 = *Pathfinding::CheckCliff( /*0x42d2d6*/
             (Pathfinding *)&stru_87F5F0.__pad_58[416],
             &a6,
             v11,
             0,
             *(unsigned __int16 *)(this + 2 * v20 + 184));
    v23 = dword_89C278; /*0x42d2d8*/
    a6 = v22; /*0x42d2e0*/
    if ( (_WORD)v22 != (_WORD)dword_89C278 ) /*0x42d2e4*/
    {
LABEL_24:
      v25 = abs32(v11[1] - SHIWORD(a6)); /*0x42d343*/
      v26 = *v11 - (__int16)v22; /*0x42d35d*/
      v27 = (HIDWORD(v26) ^ v26) - HIDWORD(v26); /*0x42d360*/
      if ( v27 <= v25 ) /*0x42d364*/
        v27 = v25; /*0x42d366*/
      v17 = a2; /*0x42d36c*/
      a3 = (__int16 *)((char *)a3 + v27); /*0x42d372*/
LABEL_27:
      if ( !(_BYTE)a5 ) /*0x42d37c*/
        goto LABEL_40; /*0x42d37c*/
      if ( v20 < 4 ) /*0x42d385*/
        goto LABEL_31; /*0x42d385*/
      v28 = (__int16 *)*Pathfinding::CheckCliff( /*0x42d3a3*/
                          (Pathfinding *)&stru_87F5F0.__pad_58[416],
                          &a2,
                          v17,
                          0,
                          *(unsigned __int16 *)(this + 190));
      v29 = dword_89C278; /*0x42d3a5*/
      a2 = v28; /*0x42d3ad*/
      if ( (_WORD)v28 != (_WORD)dword_89C278 ) /*0x42d3b1*/
        goto LABEL_37; /*0x42d3b1*/
      v30 = HIWORD(dword_89C278); /*0x42d3b3*/
      if ( HIWORD(a2) == HIWORD(dword_89C278) ) /*0x42d3bf*/
      {
LABEL_31:
        v28 = (__int16 *)*Pathfinding::CheckCliff( /*0x42d3dd*/
                            (Pathfinding *)&stru_87F5F0.__pad_58[416],
                            &a2,
                            v17,
                            0,
                            *(unsigned __int16 *)(this + 188));
        v30 = HIWORD(dword_89C278); /*0x42d3e4*/
        v29 = dword_89C278; /*0x42d3e4*/
        a2 = v28; /*0x42d3eb*/
      }
      if ( (_WORD)v28 == v29 ) /*0x42d3f2*/
      {
        if ( HIWORD(a2) == v30 ) /*0x42d3f9*/
        {
          LOWORD(v28) = v36[0]; /*0x42d3fb*/
          a2 = *(__int16 **)v36; /*0x42d3ff*/
        }
        if ( (_WORD)v28 == v29 && HIWORD(a2) == v30 ) /*0x42d40d*/
        {
LABEL_40:
          result = (int)a3; /*0x42d438*/
          if ( (int)a3 > a7 ) /*0x42d442*/
            return result; /*0x42d442*/
          return a7; /*0x42d442*/
        }
      }
LABEL_37:
      v31 = abs32(v17[1] - SHIWORD(a2)); /*0x42d40f*/
      v32 = *v17 - (__int16)v28; /*0x42d429*/
      v33 = (HIDWORD(v32) ^ v32) - HIDWORD(v32); /*0x42d42c*/
      if ( v33 <= v31 ) /*0x42d430*/
        v33 = v31; /*0x42d432*/
      a3 = (__int16 *)((char *)a3 + v33); /*0x42d434*/
      goto LABEL_40; /*0x42d434*/
    }
    v24 = HIWORD(dword_89C278); /*0x42d2e6*/
    if ( HIWORD(a6) == HIWORD(dword_89C278) ) /*0x42d2f2*/
    {
LABEL_18:
      v22 = *Pathfinding::CheckCliff( /*0x42d311*/
               (Pathfinding *)&stru_87F5F0.__pad_58[416],
               &a6,
               v11,
               0,
               *(unsigned __int16 *)(this + 2 * v20 + 186));
      v24 = HIWORD(dword_89C278); /*0x42d318*/
      v23 = dword_89C278; /*0x42d318*/
      a6 = v22; /*0x42d31f*/
    }
    if ( (_WORD)v22 == v23 ) /*0x42d326*/
    {
      if ( HIWORD(a6) == v24 ) /*0x42d32d*/
      {
        LOWORD(v22) = v35[0]; /*0x42d32f*/
        a6 = *(_DWORD *)v35; /*0x42d333*/
      }
      if ( (_WORD)v22 == v23 && HIWORD(a6) == v24 ) /*0x42d341*/
        goto LABEL_27; /*0x42d341*/
    }
    goto LABEL_24; /*0x42d341*/
  }
  return 0x7FFFFFFF; /*0x42d448*/
}



// ==== 0x0042D470  CellStruct::Set  this=CellStruct  sig=csp ====
_WORD *__thiscall CellStruct::Set(CellStruct *this, __int16 a2, __int16 a3)
{
  LOWORD(this->field_0) = a2; /*0x42d47c*/
  HIWORD(this->field_0) = a3; /*0x42d47f*/
  return this; /*0x42d483*/
}



// ==== 0x0042D490  GetCellNeighborCoord  this=-  sig=csp ====
_DWORD *__fastcall GetCellNeighborCoord(_DWORD *a1, __int16 *a2, int a3)
{
  int v4; // eax
  __int16 v6; // ax
  int v7; // [esp+8h] [ebp+4h]

  if ( a3 == 8 ) /*0x42d49a*/
  {
    v4 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2) + 139); /*0x42d4a7*/
    if ( v4 == -1 ) /*0x42d4b1*/
      *a1 = 0; /*0x42d4d7*/
    else
      *a1 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * v4) + 40); /*0x42d4bf*/
    return a1; /*0x42d4c1*/
  }
  else
  {
    v6 = HIWORD(g_DDrawSurfaceManager.scenario[a3 + 82]); /*0x42d4ea*/
    LOWORD(v7) = LOWORD(g_DDrawSurfaceManager.scenario[a3 + 82]) + *a2; /*0x42d4f6*/
    HIWORD(v7) = a2[1] + v6; /*0x42d4fb*/
    *a1 = v7; /*0x42d504*/
    return a1; /*0x42d506*/
  }
}



// ==== 0x0042D510  CellStruct::Add  this=AbstractClass  sig=csp ====
_DWORD *__thiscall CellStruct::Add(CellStruct *this, _DWORD *a2, _WORD *a3)
{
  __int16 v3; // dx
  _WORD *v5; // [esp+8h] [ebp+8h]

  v3 = LOWORD(this->field_0) + *a3; /*0x42d51f*/
  HIWORD(v5) = HIWORD(this->field_0) + a3[1]; /*0x42d522*/
  LOWORD(v5) = v3; /*0x42d52b*/
  *a2 = v5; /*0x42d534*/
  return a2; /*0x42d536*/
}



// ==== 0x0042D540  _DynamicVectorClass_I::ddtor  this=DynamicVectorClass_uint  sig=csp ====
void __thiscall DynamicVectorClass_uint::ddtor(_DynamicVectorClass_I *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42d546*/
  this->m_10 = 0; /*0x42d549*/
  if ( v2 && BYTE1(this->m_C) ) /*0x42d550*/
  {
    __3_YAXPAX_Z(v2); /*0x42d556*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d55e*/
  }
  BYTE1(this->m_C) = 0; /*0x42d561*/
  this->m_8 = 0; /*0x42d564*/
}



// ==== 0x0042D570  _DynamicVectorClass_I::GetIndex  this=DynamicVectorClass_uint  sig=csp ====
unsigned int __thiscall SortedArray::GetIndex(_DynamicVectorClass_I *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42d570*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42d585*/
  else
    return 0; /*0x42d577*/
}



// ==== 0x0042D590  _VectorClass_I::Clear  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_uint::Clear(_VectorClass_I *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x42d59a*/
}



// ==== 0x0042D5A0  _DynamicVectorClass_G::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ushort::Destroy(_DynamicVectorClass_G *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42d5a6*/
  this->m_10 = 0; /*0x42d5a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x42d5b0*/
  {
    __3_YAXPAX_Z(v2); /*0x42d5b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d5be*/
  }
  BYTE1(this->m_C) = 0; /*0x42d5c1*/
  this->m_8 = 0; /*0x42d5c4*/
}



// ==== 0x0042D5D0  _DynamicVectorClass_G::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ushort::GetItemIndex(_DynamicVectorClass_G *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42d5d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 1; /*0x42d5e5*/
  else
    return 0; /*0x42d5d7*/
}



// ==== 0x0042D5F0  _VectorClass_G::Clear  this=VectorClass_ushort  sig=csp ====
__int16 __thiscall VectorClass_ushort::Clear(_VectorClass_G *this, int a2)
{
  return *(_WORD *)(*(_DWORD *)&this->m_1[3] + 2 * a2); /*0x42d5fb*/
}



// ==== 0x0042D600  _VectorClass_I::AddRef  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_uint::AddRef(_VectorClass_I *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x42d602*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42d60d*/
  {
    v3 = 0; /*0x42d60f*/
    if ( m_8 <= 0 ) /*0x42d613*/
      return 1; /*0x42d633*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x42d615*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42d61b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x42d624*/
    {
      ++v3; /*0x42d626*/
      ++v4; /*0x42d627*/
      if ( v3 >= m_8 ) /*0x42d62c*/
        return 1; /*0x42d62c*/
    }
  }
  return 0; /*0x42d62e*/
}



// ==== 0x0042D640  _VectorClass_I::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_uint::SetCapacity(_VectorClass_I *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42d64c*/
  {
    LOBYTE(this->m_C) = 0; /*0x42d656*/
    if ( a3 ) /*0x42d65c*/
      v4 = a3; /*0x42d672*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x42d66e*/
    LOBYTE(this->m_C) = 1; /*0x42d676*/
    if ( v4 ) /*0x42d67a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42d685*/
      {
        m_8 = this->m_8; /*0x42d68c*/
        if ( a2 < m_8 ) /*0x42d691*/
          m_8 = a2; /*0x42d693*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42d699*/
          ++i; /*0x42d69e*/
        if ( BYTE1(this->m_C) ) /*0x42d6ab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d6b6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42d6be*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x42d6c7*/
      this->m_8 = a2; /*0x42d6cf*/
      BYTE1(this->m_C) = a3 == 0; /*0x42d6d2*/
      return 1; /*0x42d6d8*/
    }
    else
    {
      return 0; /*0x42d67f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_I *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42d6e2*/
    return 1; /*0x42d6e8*/
  }
}



// ==== 0x0042D6F0  _VectorClass_I::Clear_0  this=VectorClass  sig=csp ====
void __thiscall DynamicVectorClass_uint::Clear_0(_VectorClass_I *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x42d6fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d703*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d70b*/
  }
  BYTE1(this->m_C) = 0; /*0x42d70e*/
  this->m_8 = 0; /*0x42d711*/
}



// ==== 0x0042D720  _VectorClass_I::FindItemIndex  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_uint::FindItemIndex(_VectorClass_I *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x42d720*/
    return 0; /*0x42d728*/
  m_8 = this->m_8; /*0x42d72e*/
  result = 0; /*0x42d731*/
  if ( m_8 <= 0 ) /*0x42d735*/
    return -1; /*0x42d74c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42d73b*/
  {
    if ( ++result >= m_8 ) /*0x42d74a*/
      return -1; /*0x42d74a*/
  }
  return result; /*0x42d72a*/
}



// ==== 0x0042D760  _VectorClass_I::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall DynamicVectorClass_uint::GetCapacity(_VectorClass_I *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42d760*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42d775*/
  else
    return 0; /*0x42d767*/
}



// ==== 0x0042D780  _DynamicVectorClass_I::Remove  this=DynamicVectorClass_uint  sig=csp ====
char __thiscall DynamicVectorClass_uint::Remove(_DynamicVectorClass_I *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42d78c*/
  {
    LOBYTE(this->m_C) = 0; /*0x42d792*/
    if ( a3 ) /*0x42d798*/
      v4 = a3; /*0x42d7ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x42d7aa*/
    LOBYTE(this->m_C) = 1; /*0x42d7b2*/
    if ( !v4 ) /*0x42d7b6*/
      return 0; /*0x42d82a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x42d7b8*/
    {
      m_8 = this->m_8; /*0x42d7bf*/
      if ( a2 < m_8 ) /*0x42d7c4*/
        m_8 = a2; /*0x42d7c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42d7cc*/
        ++i; /*0x42d7d1*/
      if ( BYTE1(this->m_C) ) /*0x42d7de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d7e9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x42d7f1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x42d7fa*/
    this->m_8 = a2; /*0x42d802*/
    BYTE1(this->m_C) = a3 == 0; /*0x42d805*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_I *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42d80e*/
  }
  v7 = this->m_8; /*0x42d811*/
  if ( v7 < this->m_10 ) /*0x42d819*/
    this->m_10 = v7; /*0x42d81b*/
  return 1; /*0x42d81e*/
}



// ==== 0x0042D830  ObjectClass::method_42D830  this=ObjectClass  sig=csp ====
char __thiscall sub_42D830(ObjectClass *this, _DWORD *a2)
{
  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *ptr_4; // edx

  ptr_8 = this->?; /*0x42d833*/
  if ( this->? >= (int)ptr_8 ) /*0x42d83b*/
  {
    if ( !BYTE1(this->?) && ptr_8 ) /*0x42d846*/
      return 0; /*0x42d846*/
    abstractFlags = this->?; /*0x42d848*/
    if ( abstractFlags <= 0 /*0x42d858*/
      || !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x42d85f*/
    }
  }
  uniqueId = this->?; /*0x42d865*/
  ptr_4 = this->?; /*0x42d868*/
  this->? = uniqueId + 1; /*0x42d86e*/
  ptr_4[uniqueId] = *a2; /*0x42d878*/
  return 1; /*0x42d861*/
}



// ==== 0x0042D880  _DynamicVectorClass_I::GetSize  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall DynamicVectorClass_uint::GetSize(_DynamicVectorClass_I *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x42d880*/
  result = 0; /*0x42d883*/
  if ( m_10 <= 0 ) /*0x42d888*/
    return -1; /*0x42d89f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42d88e*/
  {
    if ( ++result >= m_10 ) /*0x42d89d*/
      return -1; /*0x42d89d*/
  }
  return result; /*0x42d8a2*/
}



// ==== 0x0042D8B0  _VectorClass_G::AddRef  this=VectorClass_ushort  sig=csp ====
char __thiscall VectorClass_ushort::AddRef(_VectorClass_G *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _WORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x42d8b1*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42d8bc*/
  {
    v3 = 0; /*0x42d8be*/
    if ( m_8 <= 0 ) /*0x42d8c2*/
      return 1; /*0x42d8e1*/
    v4 = *(_WORD **)&this->m_1[3]; /*0x42d8c4*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42d8ca*/
    while ( *v4 == *(_WORD *)((char *)v4 + v5) ) /*0x42d8d3*/
    {
      ++v3; /*0x42d8d5*/
      ++v4; /*0x42d8d6*/
      if ( v3 >= m_8 ) /*0x42d8db*/
        return 1; /*0x42d8db*/
    }
  }
  return 0; /*0x42d8dd*/
}



// ==== 0x0042D8F0  _VectorClass_G::Remove  this=VectorClass_ushort  sig=csp ====
char __thiscall VectorClass_ushort::Remove(_VectorClass_G *this, int a2, _WORD *a3)
{
  _WORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42d8fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x42d906*/
    if ( a3 ) /*0x42d90c*/
      v4 = a3; /*0x42d91f*/
    else
      v4 = (_WORD *)__2_YAPAXI_Z(2 * a2); /*0x42d91b*/
    LOBYTE(this->m_C) = 1; /*0x42d923*/
    if ( v4 ) /*0x42d927*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42d932*/
      {
        m_8 = this->m_8; /*0x42d939*/
        if ( a2 < m_8 ) /*0x42d93e*/
          m_8 = a2; /*0x42d940*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_WORD *)(*(_DWORD *)&this->m_1[3] + 2 * i - 2) ) /*0x42d946*/
          ++i; /*0x42d94b*/
        if ( BYTE1(this->m_C) ) /*0x42d95a*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d965*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42d96d*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x42d976*/
      this->m_8 = a2; /*0x42d97e*/
      BYTE1(this->m_C) = a3 == 0; /*0x42d981*/
      return 1; /*0x42d987*/
    }
    else
    {
      return 0; /*0x42d92c*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_G *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42d991*/
    return 1; /*0x42d997*/
  }
}



// ==== 0x0042D9A0  _VectorClass_G::ddtor  this=VectorClass_ushort  sig=csp ====
void __thiscall VectorClass_ushort::ddtor(_VectorClass_G *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x42d9ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42d9b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42d9bb*/
  }
  BYTE1(this->m_C) = 0; /*0x42d9be*/
  this->m_8 = 0; /*0x42d9c1*/
}



// ==== 0x0042D9D0  _VectorClass_G::GetSize  this=VectorClass_ushort  sig=csp ====
int __thiscall VectorClass_ushort::GetSize(_VectorClass_G *this, _WORD *a2)
{
  int result; // eax
  int m_8; // edx
  _WORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x42d9d0*/
    return 0; /*0x42d9d8*/
  m_8 = this->m_8; /*0x42d9de*/
  result = 0; /*0x42d9e1*/
  if ( m_8 <= 0 ) /*0x42d9e5*/
    return -1; /*0x42d9fe*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42d9eb*/
  {
    if ( ++result >= m_8 ) /*0x42d9fc*/
      return -1; /*0x42d9fc*/
  }
  return result; /*0x42d9da*/
}



// ==== 0x0042DA10  _VectorClass_G::Get  this=VectorClass_ushort  sig=csp ====
unsigned int __thiscall VectorClass_ushort::Get(_VectorClass_G *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42da10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 1; /*0x42da25*/
  else
    return 0; /*0x42da17*/
}



// ==== 0x0042DA30  _DynamicVectorClass_G::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ushort::SetCapacity(_DynamicVectorClass_G *this, int a2, _WORD *a3)
{
  _WORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42da3c*/
  {
    LOBYTE(this->m_C) = 0; /*0x42da42*/
    if ( a3 ) /*0x42da48*/
      v4 = a3; /*0x42da5b*/
    else
      v4 = (_WORD *)__2_YAPAXI_Z(2 * a2); /*0x42da57*/
    LOBYTE(this->m_C) = 1; /*0x42da5f*/
    if ( !v4 ) /*0x42da63*/
      return 0; /*0x42dad9*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x42da65*/
    {
      m_8 = this->m_8; /*0x42da6c*/
      if ( a2 < m_8 ) /*0x42da71*/
        m_8 = a2; /*0x42da73*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_WORD *)(*(_DWORD *)&this->m_1[3] + 2 * i - 2) ) /*0x42da79*/
        ++i; /*0x42da7e*/
      if ( BYTE1(this->m_C) ) /*0x42da8d*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42da98*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x42daa0*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x42daa9*/
    this->m_8 = a2; /*0x42dab1*/
    BYTE1(this->m_C) = a3 == 0; /*0x42dab4*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_G *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42dabd*/
  }
  v7 = this->m_8; /*0x42dac0*/
  if ( v7 < this->m_10 ) /*0x42dac8*/
    this->m_10 = v7; /*0x42daca*/
  return 1; /*0x42dacd*/
}



// ==== 0x0042DAE0  _DynamicVectorClass_G::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ushort::FindItemIndex(_DynamicVectorClass_G *this, _WORD *a2)
{
  int m_10; // edx
  int result; // eax
  _WORD *i; // ecx

  m_10 = this->m_10; /*0x42dae0*/
  result = 0; /*0x42dae3*/
  if ( m_10 <= 0 ) /*0x42dae8*/
    return -1; /*0x42db01*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42daee*/
  {
    if ( ++result >= m_10 ) /*0x42daff*/
      return -1; /*0x42daff*/
  }
  return result; /*0x42db04*/
}



// ==== 0x0042DB10  _VectorClass_I::Destructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_uint::Destructor(_VectorClass_I *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42db13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned int>::`vftable'; /*0x42db16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42db20*/
  {
    __3_YAXPAX_Z(v3); /*0x42db28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42db30*/
  }
  BYTE1(this->m_C) = 0; /*0x42db3b*/
  this->m_8 = 0; /*0x42db41*/
  if ( (a2 & 1) != 0 ) /*0x42db48*/
    __3_YAXPAX_Z(this); /*0x42db4b*/
  return this->__pad_0; /*0x42db55*/
}



// ==== 0x0042DB60  _DynamicVectorClass_I::Add  this=DynamicVectorClass_uint  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_uint::Add(_DynamicVectorClass_I *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42db63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned int>::`vftable'; /*0x42db66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42db70*/
  {
    __3_YAXPAX_Z(v3); /*0x42db78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42db80*/
  }
  BYTE1(this->m_C) = 0; /*0x42db8b*/
  this->m_8 = 0; /*0x42db91*/
  if ( (a2 & 1) != 0 ) /*0x42db98*/
    __3_YAXPAX_Z(this); /*0x42db9b*/
  return this->__pad_0; /*0x42dba5*/
}



// ==== 0x0042DBB0  _VectorClass_G::Add  this=VectorClass_ushort  sig=csp ====
_DWORD *__thiscall VectorClass_ushort::Add(_VectorClass_G *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42dbb3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short>::`vftable'; /*0x42dbb6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42dbc0*/
  {
    __3_YAXPAX_Z(v3); /*0x42dbc8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42dbd0*/
  }
  BYTE1(this->m_C) = 0; /*0x42dbdb*/
  this->m_8 = 0; /*0x42dbe1*/
  if ( (a2 & 1) != 0 ) /*0x42dbe8*/
    __3_YAXPAX_Z(this); /*0x42dbeb*/
  return this->__pad_0; /*0x42dbf5*/
}



// ==== 0x0042DC00  _DynamicVectorClass_G::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ushort::Constructor(_DynamicVectorClass_G *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42dc03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short>::`vftable'; /*0x42dc06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42dc10*/
  {
    __3_YAXPAX_Z(v3); /*0x42dc18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42dc20*/
  }
  BYTE1(this->m_C) = 0; /*0x42dc2b*/
  this->m_8 = 0; /*0x42dc31*/
  if ( (a2 & 1) != 0 ) /*0x42dc38*/
    __3_YAXPAX_Z(this); /*0x42dc3b*/
  return this->__pad_0; /*0x42dc45*/
}



// ==== 0x0042DC50  VectorClassUInt::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClassUInt::Constructor(VectorClassUInt *this, int a2, int a3)
{
  this->Items = 0; /*0x42dc5b*/
  this->Capacity = a2; /*0x42dc5e*/
  this->IsInitialized = 1; /*0x42dc61*/
  this->IsAllocated = 0; /*0x42dc65*/
  *this = (VectorClassUInt)&VectorClass<unsigned int>::`vftable'; /*0x42dc68*/
  if ( a2 ) /*0x42dc6e*/
  {
    if ( a3 ) /*0x42dc76*/
    {
      this->Items = a3; /*0x42dc78*/
      return this; /*0x42dc7e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x42dc8d*/
    this->IsAllocated = 1; /*0x42dc90*/
  }
  return this; /*0x42dc7d*/
}



// ==== 0x0042DCA0  Pathfinding::SiftDown  this=Pathfinding  sig=csp ====
void __thiscall Pathfinding::SiftDown(Pathfinding *this, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // edi
  int Pathfinding_field_0x08; // eax
  int v6; // ebp
  int v7; // edi

  v2 = a2; /*0x42dca5*/
  v3 = 2 * a2; /*0x42dcaa*/
  v4 = 2 * a2 + 1; /*0x42dcad*/
  if ( 2 * a2 > *(_DWORD *)this->__pad_0 /*0x42dccb*/
    || *(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * a2) + 8) <= (double)*(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 8 * a2)
                                                                                              + 8) )
  {
    v3 = a2; /*0x42dccd*/
  }
  if ( v4 <= *(_DWORD *)this->__pad_0 /*0x42dce9*/
    && *(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v4)
                                                                                             + 8) )
  {
    v3 = 2 * a2 + 1; /*0x42dceb*/
  }
  if ( v3 != a2 ) /*0x42dcef*/
  {
    do /*0x42dd4f*/
    {
      Pathfinding_field_0x08 = this->Pathfinding_field_0x08; /*0x42dcf1*/
      v6 = 2 * v3 + 1; /*0x42dcf4*/
      v7 = *(_DWORD *)(Pathfinding_field_0x08 + 4 * v2); /*0x42dcfb*/
      *(_DWORD *)(Pathfinding_field_0x08 + 4 * v2) = *(_DWORD *)(Pathfinding_field_0x08 + 4 * v3); /*0x42dcfe*/
      v2 = v3; /*0x42dd04*/
      *(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v3) = v7; /*0x42dd06*/
      if ( 2 * v3 <= *(_DWORD *)this->__pad_0 /*0x42dd2b*/
        && *(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 8 * v3)
                                                                                                 + 8) )
      {
        v3 *= 2; /*0x42dd2d*/
      }
      if ( v6 <= *(_DWORD *)this->__pad_0 /*0x42dd49*/
        && *(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->Pathfinding_field_0x08 + 4 * v6)
                                                                                                 + 8) )
      {
        v3 = v6; /*0x42dd4b*/
      }
    }
    while ( v3 != v2 ); /*0x42dd4f*/
  }
}



// ==== 0x0042DD60  WordVector::Constructor  this=VectorClass_ushort  sig=csp ====
_DWORD *__thiscall WordVector::Constructor(WordVector *this, int a2, int a3)
{
  this->Items = 0; /*0x42dd6b*/
  this->Capacity = a2; /*0x42dd6e*/
  this->IsInitialized = 1; /*0x42dd71*/
  this->IsAllocated = 0; /*0x42dd75*/
  *this = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x42dd78*/
  if ( a2 ) /*0x42dd7e*/
  {
    if ( a3 ) /*0x42dd86*/
    {
      this->Items = a3; /*0x42dd88*/
      return this; /*0x42dd8e*/
    }
    this->Items = __2_YAPAXI_Z(2 * a2); /*0x42dd9c*/
    this->IsAllocated = 1; /*0x42dd9f*/
  }
  return this; /*0x42dd8d*/
}



// ==== 0x0042DDB0  Base64Pipe::ProcessBitmapStream  this=Base64Pipe  sig=csp ====
int __thiscall Delegate::ProcessBitmapStream(Base64Pipe *this, char *Src, int a3)
{
  char *v3; // ebp
  int v5; // esi
  _BYTE *v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned __int8 *pad_14; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  int Size; // [esp+10h] [ebp-4h]
  int Srca; // [esp+18h] [ebp+4h]

  v3 = Src; /*0x42ddb4*/
  if ( !Src || a3 < 1 ) /*0x42ddc8*/
    return Delegate::Dispatch((Pipe *)this, (int)Src, a3); /*0x42df25*/
  v13 = 0; /*0x42ddd5*/
  if ( this->field_C ) /*0x42ddce*/
  {
    v5 = 4; /*0x42ddfb*/
    pad_14 = (unsigned __int8 *)this->__pad_14; /*0x42de00*/
    v6 = &this->field_18; /*0x42de04*/
    Srca = 3; /*0x42de07*/
  }
  else
  {
    v5 = 3; /*0x42dde2*/
    pad_14 = (unsigned __int8 *)&this->field_18; /*0x42dde7*/
    v6 = this->__pad_14; /*0x42ddeb*/
    Srca = 4; /*0x42ddee*/
  }
  v7 = this->field_10; /*0x42de0f*/
  if ( v7 > 0 ) /*0x42de14*/
  {
    Size = a3; /*0x42de24*/
    if ( a3 >= v5 - v7 ) /*0x42de28*/
      Size = v5 - v7; /*0x42de2a*/
    memcpy(&pad_14[this->field_10], v3, Size); /*0x42de3e*/
    v8 = Size + this->field_10; /*0x42de4e*/
    v3 += Size; /*0x42de55*/
    this->field_10 = v8; /*0x42de59*/
    a3 -= Size; /*0x42de5c*/
    if ( v8 == v5 ) /*0x42de60*/
    {
      if ( this->field_C ) /*0x42de62*/
        v9 = DecodeBitmapRGB(pad_14, v5, v6, Srca); /*0x42de88*/
      else
        v9 = EncodeBitmapRGB((char *)pad_14, v5, v6, Srca); /*0x42de75*/
      v13 = Delegate::Dispatch((Pipe *)this, (int)v6, v9); /*0x42de96*/
      this->field_10 = 0; /*0x42de9a*/
    }
  }
  for ( ; a3 >= v5; a3 -= v5 ) /*0x42dea5*/
  {
    if ( this->field_C ) /*0x42dea7*/
      v10 = DecodeBitmapRGB((unsigned __int8 *)v3, v5, v6, Srca); /*0x42dec9*/
    else
      v10 = EncodeBitmapRGB(v3, v5, v6, Srca); /*0x42deb8*/
    v3 += v5; /*0x42ded2*/
    v13 += Delegate::Dispatch((Pipe *)this, (int)v6, v10); /*0x42dee5*/
  }
  if ( a3 > 0 ) /*0x42def9*/
  {
    memcpy(pad_14, v3, a3); /*0x42df02*/
    this->field_10 = a3; /*0x42df0e*/
  }
  return v13; /*0x42df15*/
}



// ==== 0x0042DF40  Base64Pipe::ProcessBitmapAndDispatch  this=Base64Pipe  sig=csp ====
int __thiscall Delegate::ProcessBitmapAndDispatch(Base64Pipe *this)
{
  int v2; // edi
  int v3; // edx
  void *pad_14; // edi
  int v5; // eax

  v2 = 0; /*0x42df44*/
  v3 = this->field_10; /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( this->field_C ) /*0x42df4d*/
    {
      pad_14 = &this->field_18; /*0x42df64*/
      v5 = DecodeBitmapRGB((unsigned __int8 *)this->__pad_14, v3, &this->field_18, 3); /*0x42df6d*/
    }
    else
    {
      pad_14 = this->__pad_14; /*0x42df54*/
      v5 = EncodeBitmapRGB((char *)&this->field_18, v3, this->__pad_14, 4); /*0x42df5d*/
    }
    v2 = Delegate::Dispatch((Pipe *)this, (int)pad_14, v5); /*0x42df7b*/
    this->field_10 = 0; /*0x42df7d*/
  }
  return v2 + GameClass::GetRelatedObject((Pipe *)this); /*0x42df8d*/
}



// ==== 0x0042DF90  Base64Straw::ProcessFrame  this=Base64Straw  sig=csp ====
size_t __thiscall BitmapClass::ProcessFrame(Base64Straw *this, char *a2, signed int Size)
{
  size_t result; // eax
  Base64Straw *v5; // edi
  Base64Straw *v6; // ebx
  int v7; // ebp
  signed int v8; // ecx
  int v9; // eax
  size_t v10; // edi
  signed int v11; // edx
  char *v12; // ecx
  size_t v13; // eax
  int v14; // edx
  int v15; // eax
  size_t v16; // [esp+10h] [ebp-Ch]
  Base64Straw *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  result = 0; /*0x42df98*/
  v16 = 0; /*0x42df9e*/
  if ( this->q00C ) /*0x42df9b*/
  {
    v18 = 4; /*0x42dfc2*/
    v17 = (Base64Straw *)((char *)this + 20); /*0x42dfca*/
    v6 = this + 2; /*0x42dfce*/
    v7 = 3; /*0x42dfd1*/
    v5 = (Base64Straw *)((char *)this + 20); /*0x42dfd6*/
  }
  else
  {
    v5 = this + 2; /*0x42dfa6*/
    v18 = 3; /*0x42dfa9*/
    v17 = this + 2; /*0x42dfb1*/
    v6 = (Base64Straw *)((char *)this + 20); /*0x42dfb5*/
    v7 = 4; /*0x42dfb8*/
  }
  v8 = Size; /*0x42dfd8*/
  if ( Size > 0 )
  {
    while ( 1 )
    {
      v9 = this->q004; /*0x42dfea*/
      if ( v9 > 0 ) /*0x42dfef*/
      {
        v10 = v8; /*0x42dff3*/
        if ( v8 >= v9 ) /*0x42dff5*/
          v10 = this->q004; /*0x42dff7*/
        memcpy(a2, &v6->__pad_0[v7 - v9], v10); /*0x42e006*/
        this->q004 -= v10; /*0x42e018*/
        v11 = Size - v10; /*0x42e022*/
        v12 = &a2[v10]; /*0x42e024*/
        v13 = v10 + v16; /*0x42e026*/
        v5 = v17; /*0x42e028*/
        a2 = v12; /*0x42e02c*/
        Size = v11; /*0x42e030*/
        v16 = v13; /*0x42e034*/
        v8 = v11; /*0x42e038*/
      }
      if ( !v8 ) /*0x42e03c*/
        break; /*0x42e03c*/
      v14 = Delegate::Invoke((Straw *)this, (int)v5, v18); /*0x42e04b*/
      v15 = this->q00C
          ? DecodeBitmapRGB((unsigned __int8 *)v5, v14, v6, v7)
          : EncodeBitmapRGB(v5->__pad_0, v14, v6, v7);
      this->q004 = v15; /*0x42e066*/
      if ( !v15 || Size <= 0 ) /*0x42e071*/
        break; /*0x42e071*/
      v8 = Size; /*0x42dfe6*/
    }
    return v16; /*0x42e077*/
  }
  return result; /*0x42e07b*/
}



// ==== 0x0042E090  sub_42E090  this=-  sig=ida-proto ====
int sub_42E090()
{
  dword_89C2E8 = 0; /*0x42e092*/
  dword_89C2EC = 0; /*0x42e097*/
  dword_89C2F0 = 0; /*0x42e09c*/
  dword_89C2F4 = 0; /*0x42e0a1*/
  return 0; /*0x42e0a6*/
}



// ==== 0x0042E150  ObjectClass::method_42E150  this=ObjectClass  sig=csp ====
int __usercall sub_42E150@<eax>(ObjectClass *this, _DWORD *a2@<ecx>)
{
  int result; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  _DWORD v7[4]; // [esp+0h] [ebp-10h] BYREF

  v3 = a2[6]; /*0x42e150*/
  if ( v3 ) /*0x42e158*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x42e164*/
      v4 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v3); /*0x42e172*/
    else
      v4 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v3); /*0x42e17f*/
    v7[0] = *a2; /*0x42e186*/
    v7[1] = a2[1]; /*0x42e18d*/
    v5 = a2[2]; /*0x42e191*/
    v6 = a2[3]; /*0x42e194*/
    v7[2] = v5; /*0x42e197*/
    v7[3] = v6; /*0x42e19b*/
    return (*(int (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x42e1ac*/
             g_DSurface_Hidden_2,
             v7,
             v4);
  }
  return result; /*0x42e1b0*/
}



// ==== 0x0042E1C0  ObjectClass::RenderTooltipBorder  this=ObjectClass  sig=csp ====
int __thiscall RenderTooltipBorder(ObjectClass *this)
{
  int nextArrayIndex; // eax
  int v3; // ecx
  int v4; // edi
  _DWORD *v5; // eax
  char *ptr_8; // edi
  char *ptr_C; // ebp
  char *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  bool v12; // cc
  int uniqueId; // edi
  int v14; // edx
  bool v15; // zf
  int v16; // edx
  int v17; // eax
  int v18; // edi
  int v19; // edx
  int v20; // eax
  int v21; // ebp
  int v22; // edx
  int v23; // eax
  int abstractFlags; // edx
  int v25; // eax
  int result; // eax
  int occupant; // ecx
  int v28; // [esp-4h] [ebp-34h]
  char *ptr_0; // [esp+10h] [ebp-20h]
  char *ptr_4; // [esp+14h] [ebp-1Ch]
  int v31; // [esp+18h] [ebp-18h]
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+1Ch] [ebp-14h]
  Rect v34; // [esp+20h] [ebp-10h] BYREF

  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x42e1d1*/
  nextArrayIndex = this->?; /*0x42e1d4*/
  if ( nextArrayIndex ) /*0x42e1d9*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x42e1e5*/
      v3 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + nextArrayIndex); /*0x42e1f2*/
    else
      v3 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * nextArrayIndex); /*0x42e1fe*/
    v28 = v3; /*0x42e20a*/
    v4 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x42e20e*/
    v5 = Rect::Set(&v34, (int)this->AbstractClass, (int)this->?, (int)this->?, (int)this->?); /*0x42e21d*/
    (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(v4 + 88))(g_DSurface_Hidden_2, v5, v28); /*0x42e229*/
  }
  ptr_8 = (char *)this->?; /*0x42e22f*/
  ptr_C = (char *)this->?; /*0x42e237*/
  ptr_4 = (char *)this->?; /*0x42e23a*/
  v8 = ptr_8; /*0x42e23e*/
  ptr_0 = (char *)this->AbstractClass; /*0x42e240*/
  v31 = (int)ptr_8; /*0x42e246*/
  v9 = (int)ptr_C; /*0x42e24a*/
  if ( this->? ) /*0x42e232*/
  {
    v8 = ptr_8 - 2; /*0x42e254*/
    ptr_0 = (char *)this->AbstractClass + 1; /*0x42e257*/
    ++ptr_4; /*0x42e25b*/
    v31 = (int)(ptr_8 - 2); /*0x42e25f*/
    v9 = (int)(ptr_C - 2); /*0x42e263*/
  }
  v32 = (int)v8; /*0x42e268*/
  if ( (int)ptr_8 <= (int)ptr_C ) /*0x42e26c*/
    v32 = v9; /*0x42e26e*/
  LOWORD(v10) = Math::RoundToInt((double)v32 * *(double *)&this->?); /*0x42e279*/
  v11 = v10; /*0x42e27e*/
  v33 = v10; /*0x42e282*/
  if ( v10 <= 0 ) /*0x42e286*/
  {
    v18 = v31; /*0x42e333*/
  }
  else
  {
    v12 = (int)ptr_8 <= (int)ptr_C; /*0x42e291*/
    uniqueId = this->?; /*0x42e293*/
    v14 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4); /*0x42e296*/
    if ( v12 ) /*0x42e299*/
    {
      v15 = v14 == 1; /*0x42e2e6*/
      v19 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x42e2e9*/
      if ( v15 ) /*0x42e2ef*/
        v20 = *(unsigned __int8 *)(v19 + uniqueId); /*0x42e2f3*/
      else
        v20 = *(unsigned __int16 *)(v19 + 2 * uniqueId); /*0x42e2fa*/
      v18 = v31; /*0x42e302*/
      v34.X = (int)ptr_0; /*0x42e306*/
      v34.Y = (int)&ptr_4[v11]; /*0x42e311*/
      v34.Width = v31; /*0x42e31b*/
      v34.Height = v9; /*0x42e31f*/
      (*(void (__thiscall **)(AudioStream *, Rect *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x42e32a*/
        g_DSurface_Hidden_2,
        &v34,
        v20);
      v11 = v33; /*0x42e32d*/
    }
    else
    {
      v15 = v14 == 1; /*0x42e29b*/
      v16 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x42e29e*/
      if ( v15 ) /*0x42e2a4*/
        v17 = *(unsigned __int8 *)(v16 + uniqueId); /*0x42e2a8*/
      else
        v17 = *(unsigned __int16 *)(v16 + 2 * uniqueId); /*0x42e2af*/
      v34.Width = v11; /*0x42e2b7*/
      v34.X = (int)ptr_0; /*0x42e2c1*/
      v34.Y = (int)ptr_4; /*0x42e2ca*/
      v34.Height = v9; /*0x42e2ce*/
      (*(void (__thiscall **)(AudioStream *, Rect *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x42e2d9*/
        g_DSurface_Hidden_2,
        &v34,
        v17);
      v18 = v31; /*0x42e2dc*/
      v11 = v33; /*0x42e2e0*/
    }
  }
  if ( v18 - v11 > 0 ) /*0x42e33d*/
  {
    if ( (int)this->? <= (int)this->? ) /*0x42e34b*/
    {
      abstractFlags = this->?; /*0x42e39e*/
      if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x42e3a5*/
        v25 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + abstractFlags); /*0x42e3b2*/
      else
        v25 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * abstractFlags); /*0x42e3be*/
      v34.X = (int)ptr_0; /*0x42e3c7*/
      v34.Height = v11 - 1; /*0x42e3cf*/
      v34.Y = (int)ptr_4; /*0x42e3d9*/
      v34.Width = v18; /*0x42e3dd*/
      (*(void (__stdcall **)(Rect *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))(&v34, v25); /*0x42e3e9*/
    }
    else
    {
      v21 = this->?; /*0x42e352*/
      v22 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x42e35b*/
      if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x42e361*/
        v23 = *(unsigned __int8 *)(v22 + v21); /*0x42e365*/
      else
        v23 = *(unsigned __int16 *)(v22 + 2 * v21); /*0x42e36c*/
      v34.Width = v18; /*0x42e374*/
      v34.Height = v9; /*0x42e37a*/
      v34.X = (int)&ptr_0[v11]; /*0x42e37e*/
      v34.Y = (int)ptr_4; /*0x42e386*/
      (*(void (__stdcall **)(Rect *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))(&v34, v23); /*0x42e397*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x42e3f4*/
  result = (int)this->?; /*0x42e3f7*/
  occupant = this->occupant; /*0x42e3fa*/
  this->owningHouseIndex = result; /*0x42e3fd*/
  this->fallRate = occupant; /*0x42e400*/
  LOBYTE(this->nextObject) = 1; /*0x42e403*/
  return result; /*0x42e407*/
}



// ==== 0x0042E410  Rect::Set  this=Rect  sig=csp ====
_DWORD *__thiscall Rect::Set(Rect *this, int a2, int a3, int a4, int a5)
{
  this->X = a2; /*0x42e41a*/
  this->Y = a3; /*0x42e420*/
  this->Width = a4; /*0x42e427*/
  this->Height = a5; /*0x42e42a*/
  return &this->X; /*0x42e42d*/
}



// ==== 0x0042E430  sub_42E430  this=-  sig=ida-proto ====
void sub_42E430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42e43c*/
  dbl_89C318 = Math::Sqrt(v0 + v0); /*0x42e44e*/
}



// ==== 0x0042E460  sub_42E460  this=-  sig=ida-proto ====
void sub_42E460()
{
  dbl_89C368 = dbl_89C318 / 60.0; /*0x42e46c*/
}



// ==== 0x0042E480  sub_42E480  this=-  sig=ida-proto ====
void sub_42E480()
{
  dbl_89C350 = 1.0 / dbl_89C368; /*0x42e48c*/
}



// ==== 0x0042E4A0  sub_42E4A0  this=-  sig=ida-proto ====
void sub_42E4A0()
{
  dbl_89C348 = 0.0174532925199433 * 45.0; /*0x42e4ac*/
}



// ==== 0x0042E4C0  sub_42E4C0  this=-  sig=ida-proto ====
void sub_42E4C0()
{
  dbl_89C320 = 0.0174532925199433 * 60.0; /*0x42e4cc*/
}



// ==== 0x0042E4E0  sub_42E4E0  this=-  sig=ida-proto ====
void sub_42E4E0()
{
  dbl_89C2F8 = 0.0174532925199433 * 90.0; /*0x42e4ec*/
}



// ==== 0x0042E500  sub_42E500  this=-  sig=ida-proto ====
__int64 sub_42E500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C2F8 - dbl_89C320); /*0x42e512*/
  result = Math::RoundToInt(v0 * dbl_89C318 * 0.5); /*0x42e526*/
  dword_89C370 = result; /*0x42e52b*/
  return result; /*0x42e530*/
}



// ==== 0x0042E540  sub_42E540  this=-  sig=ida-proto ====
void sub_42E540()
{
  dbl_89C328 = Math::ArcTan((double)dword_89C370 * 0.00390625); /*0x42e557*/
}



// ==== 0x0042E570  sub_42E570  this=-  sig=ida-proto ====
void sub_42E570()
{
  dbl_89C340 = Math::ArcTan((double)(2 * dword_89C370) / dbl_89C318); /*0x42e592*/
}



// ==== 0x0042E5A0  sub_42E5A0  this=-  sig=ida-proto ====
__int64 sub_42E5A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C370) + 0.5); /*0x42e5bb*/
  dword_89C364 = result; /*0x42e5c0*/
  return result; /*0x42e5c6*/
}



// ==== 0x0042E5D0  sub_42E5D0  this=-  sig=ida-proto ====
int sub_42E5D0()
{
  dword_89C310 = 0; /*0x42e5d2*/
  return 0; /*0x42e5de*/
}



// ==== 0x0042E5E0  sub_42E5E0  this=-  sig=ida-proto ====
int sub_42E5E0()
{
  dword_89C330 = 0; /*0x42e5e2*/
  dword_89C334 = 0; /*0x42e5e7*/
  dword_89C338 = 0; /*0x42e5ec*/
  return 0; /*0x42e5f1*/
}



// ==== 0x0042E600  sub_42E600  this=-  sig=ida-proto ====
int sub_42E600()
{
  dword_89C360 = 0; /*0x42e605*/
  dword_89C358 = 128; /*0x42e60f*/
  dword_89C35C = 128; /*0x42e614*/
  return 128; /*0x42e619*/
}



// ==== 0x0042E620  sub_42E620  this=-  sig=ida-proto ====
int sub_42E620()
{
  dword_89C300 = 0; /*0x42e622*/
  dword_89C304 = 0; /*0x42e627*/
  dword_89C308 = 0; /*0x42e62c*/
  dword_89C30C = 0; /*0x42e631*/
  return 0; /*0x42e636*/
}



// ==== 0x0042E6C0  sub_42E6C0  this=-  sig=csp ====
char __stdcall sub_42E6C0(int a1)
{
  return 1; /*0x42e6c2*/
}



// ==== 0x0042E6D0  CellClass::setTileIndex  this=CellClass  sig=csp ====
__int16 __thiscall CellClass::setTileIndex(CellClass *this, int a2)
{
  LOWORD(this->foggedObjects) += a2; /*0x42e6da*/
  HIWORD(this->foggedObjects) += HIWORD(a2); /*0x42e6de*/
  return a2; /*0x42e6e2*/
}



// ==== 0x0042E6F0  BaseClass::Constructor  this=BaseClass  sig=csp ====
_DWORD *__thiscall BaseClass::Constructor(BaseClass *this)
{
  int *p_baseNodeCount; // ebx

  p_baseNodeCount = &this->baseNodeCount; /*0x42e6f7*/
  BaseNodeClass::Vector_Constructor((BaseNodeClass *)&this->baseNodeCount, 0, 0); /*0x42e6fe*/
  *p_baseNodeCount = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x42e703*/
  p_baseNodeCount[5] = 10; /*0x42e709*/
  p_baseNodeCount[4] = 0; /*0x42e710*/
  this->cells38 = 0; /*0x42e71a*/
  VectorClass::CellConstructor((VectorClass *)&this->cells38Count, 0, 0); /*0x42e71d*/
  this->cells38Count = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x42e722*/
  this->unknown54[2] = 10; /*0x42e728*/
  this->unknown54[1] = 0; /*0x42e72f*/
  VectorClass::CellConstructor((VectorClass *)&this->unknown54[3], 0, 0); /*0x42e739*/
  this->unknown54[3] = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x42e73e*/
  this->owner = (HouseClass *)10; /*0x42e744*/
  this->unknown54[7] = 0; /*0x42e74b*/
  this->center = 0; /*0x42e74e*/
  *((_WORD *)this + 41) = 0; /*0x42e752*/
  *((_DWORD *)this + 21) = 0; /*0x42e756*/
  this->Count = 0; /*0x42e759*/
  *((_DWORD *)this + 23) = 0; /*0x42e75c*/
  this->cells24Capacity = 0; /*0x42e75f*/
  *((_DWORD *)this + 25) = 0; /*0x42e762*/
  *((_DWORD *)this + 26) = 0; /*0x42e765*/
  *((_DWORD *)this + 27) = 0; /*0x42e768*/
  this->cells38 = 0; /*0x42e76b*/
  *((_DWORD *)this + 29) = 0; /*0x42e76e*/
  this->baseNodes = (BaseNodeClass *)&BaseClass::`vftable'; /*0x42e771*/
  return &this->baseNodes; /*0x42e779*/
}



// ==== 0x0042E780  BuildingQueue::IsCellSuitable  this=BuildingQueue  sig=csp ====
int __thiscall BuildingQueue::IsCellSuitable(BuildingQueue *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // esi

  result = (int)BridgeClass::GetCellData((BridgeClass *)this, a2); /*0x42e789*/
  if ( result ) /*0x42e790*/
  {
    LOBYTE(result) = 1; /*0x42e793*/
    return result; /*0x42e796*/
  }
  v4 = 16 * a2 + this->BuildingQueue_field_0x08; /*0x42e79f*/
  result = *(_DWORD *)v4; /*0x42e7a2*/
  if ( *(int *)v4 < 0 ) /*0x42e7a7*/
    goto LABEL_9; /*0x42e7a7*/
  v5 = *((_DWORD *)dword_A83C6C + result); /*0x42e7af*/
  if ( !*(_BYTE *)(v5 + 5489) ) /*0x42e7b2*/
    goto LABEL_9; /*0x42e7b2*/
  result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(v4 + 4)); /*0x42e7c5*/
  if ( *(_DWORD *)(result + 68) == *(_DWORD *)(*(_DWORD *)(v5 + 3668) + 660) ) /*0x42e7d9*/
  {
    LOBYTE(result) = 1; /*0x42e7dc*/
    return result; /*0x42e7df*/
  }
  result = (int)Cell::IsBridge((Cell *)result); /*0x42e7e4*/
  if ( result ) /*0x42e7eb*/
    LOBYTE(result) = 1; /*0x42e7ee*/
  else
LABEL_9:
    LOBYTE(result) = 0; /*0x42e7f5*/
  return result; /*0x42e792*/
}



// ==== 0x0042E800  ObjectClass::method_42E800  this=ObjectClass  sig=csp ====
char __thiscall sub_42E800(ObjectClass *this, int a2)
{
  return *((_BYTE *)this->? + 16 * a2 + 8); /*0x42e80e*/
}



// ==== 0x0042E820  BridgeClass::GetCellData  this=BridgeClass  sig=csp ====
_DWORD *__thiscall BridgeClass::GetCellData(BridgeClass *this, int a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // ebp
  Cell *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _WORD *v9; // esi
  _WORD *v10; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // esi
  int v17; // eax
  int v18; // edi
  int v19; // [esp+10h] [ebp-18h] BYREF
  __int16 v20[2]; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+24h] [ebp-4h]

  v3 = (int *)(16 * a2 + *((_DWORD *)this + 2)); /*0x42e833*/
  *(_DWORD *)v20 = v3[1]; /*0x42e83b*/
  if ( !*(_DWORD *)v20 ) /*0x42e83f*/
    return 0; /*0x42e83f*/
  v4 = *v3; /*0x42e84c*/
  if ( v4 < 0 ) /*0x42e850*/
    return 0; /*0x42e850*/
  v5 = *((_DWORD *)dword_A83C6C + v4); /*0x42e861*/
  v21 = v5; /*0x42e869*/
  v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x42e86d*/
  v7 = Cell::IsBridge(v6); /*0x42e874*/
  v8 = v7; /*0x42e879*/
  if ( !v7 ) /*0x42e87d*/
    return 0; /*0x42e87d*/
  v9 = (_WORD *)(16 * a2 + *((_DWORD *)this + 2) + 4); /*0x42e88a*/
  v10 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v7 + 440))(v7, &v19); /*0x42e893*/
  if ( *v10 != *v9 || v10[1] != v9[1] || v8[135] != *((_DWORD *)this + 29) ) /*0x42e8be*/
    return 0; /*0x42e8be*/
  if ( v8[328] == v5 ) /*0x42e8ca*/
    return v8; /*0x42e8d5*/
  if ( !*(_BYTE *)(v5 + 3720) ) /*0x42e8d8*/
    return 0; /*0x42e987*/
  v12 = 0; /*0x42e8e6*/
  v13 = v8 + 379; /*0x42e8e8*/
  v19 = 0; /*0x42e8ee*/
  v14 = 3; /*0x42e8f2*/
  do /*0x42e900*/
  {
    if ( *v13 == v5 ) /*0x42e8f9*/
      ++v12; /*0x42e8fb*/
    ++v13; /*0x42e8fc*/
    --v14; /*0x42e8ff*/
  }
  while ( v14 ); /*0x42e900*/
  v15 = a2; /*0x42e902*/
  v19 = v12; /*0x42e906*/
  if ( a2 > 0 ) /*0x42e90c*/
  {
    v16 = *((_DWORD *)this + 2); /*0x42e90e*/
    do /*0x42e96a*/
    {
      if ( *(int *)v16 >= 0 && *((_DWORD *)dword_A83C6C + *(_DWORD *)v16) == v21 ) /*0x42e924*/
      {
        v17 = v8[39]; /*0x42e92e*/
        v18 = v8[40]; /*0x42e930*/
        v22 = v8[41]; /*0x42e936*/
        if ( *(_WORD *)(v16 + 4) == (unsigned __int16)(v17 / 256) /*0x42e960*/
          && *(_WORD *)(v16 + 6) == (unsigned __int16)(v18 / 256) )
        {
          --v19; /*0x42e962*/
        }
      }
      v16 += 16; /*0x42e966*/
      --v15; /*0x42e969*/
    }
    while ( v15 ); /*0x42e96a*/
    v12 = v19; /*0x42e96c*/
  }
  return v12 <= 0 ? 0 : v8;
}



// ==== 0x0042E990  ObjectClass::method_42E990  this=ObjectClass  sig=csp ====
bool __thiscall sub_42E990(ObjectClass *this, _DWORD *a2)
{
  int v4; // esi
  _DWORD *v5; // edi
  char *v6; // edi
  _WORD *v7; // eax
  _BYTE v9[4]; // [esp+10h] [ebp-4h] BYREF
  _DWORD *i; // [esp+18h] [ebp+4h]

  if ( a2[135] != *(_DWORD *)&this->isOnMap ) /*0x42e9a6*/
    return 0; /*0x42e9a6*/
  v4 = 0; /*0x42e9ab*/
  if ( this->? <= 0 ) /*0x42e9af*/
    return 0; /*0x42e9af*/
  v5 = 0; /*0x42e9b1*/
  for ( i = 0; ; i += 4 ) /*0x42e9b3*/
  {
    v6 = (char *)this->? + (unsigned int)v5; /*0x42e9c0*/
    if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v6 ) /*0x42e9ca*/
    {
      v7 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 440))(a2, v9); /*0x42e9d6*/
      if ( *v7 == *((_WORD *)v6 + 2) && v7[1] == *((_WORD *)v6 + 3) ) /*0x42e9ed*/
        break; /*0x42e9ed*/
    }
    ++v4; /*0x42e9f6*/
    v5 = i + 4; /*0x42e9f7*/
    if ( v4 >= this->? ) /*0x42ea00*/
      return 0; /*0x42ea00*/
  }
  return (char *)this->? + 16 * v4 != 0; /*0x42ea13*/
}



// ==== 0x0042EA30  ObjectClass::method_42EA30  this=ObjectClass  sig=csp ====
int __thiscall sub_42EA30(ObjectClass *this, _DWORD *a2)
{
  int v4; // ebp
  char *v5; // esi
  _WORD *v6; // eax
  _BYTE v8[4]; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+18h] [ebp+4h]

  if ( a2[135] != *(_DWORD *)&this->isOnMap ) /*0x42ea44*/
    return 0; /*0x42ea44*/
  v4 = 0; /*0x42ea49*/
  v9 = 0; /*0x42ea4d*/
  if ( this->? <= 0 ) /*0x42ea51*/
    return 0; /*0x42eab7*/
  while ( 1 ) /*0x42ea62*/
  {
    v5 = (char *)this->? + v4; /*0x42ea62*/
    if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v5 ) /*0x42ea6a*/
    {
      v6 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 440))(a2, v8); /*0x42ea75*/
      if ( *v6 == *((_WORD *)v5 + 2) && v6[1] == *((_WORD *)v5 + 3) ) /*0x42ea8c*/
        break; /*0x42ea8c*/
    }
    v4 += 16; /*0x42ea96*/
    if ( ++v9 >= this->? ) /*0x42ea9f*/
      return 0; /*0x42ea9f*/
  }
  return (int)this->? + 16 * v9; /*0x42eaaa*/
}



// ==== 0x0042EAD0  ObjectClass::method_42EAD0  this=ObjectClass  sig=csp ====
int __thiscall sub_42EAD0(ObjectClass *this, _WORD *a2)
{
  int abstractFlags; // edx
  int v3; // eax
  char *ptr_8; // esi
  _WORD *i; // ecx

  abstractFlags = this->?; /*0x42ead0*/
  v3 = 0; /*0x42ead5*/
  if ( abstractFlags <= 0 ) /*0x42eadb*/
    return 0; /*0x42eb0f*/
  ptr_8 = (char *)this->?; /*0x42eae1*/
  for ( i = ptr_8 + 4; *a2 != *i || a2[1] != i[1]; i += 8 ) /*0x42eae7*/
  {
    if ( ++v3 >= abstractFlags ) /*0x42eaff*/
      return 0; /*0x42eaff*/
  }
  return (int)&ptr_8[16 * v3]; /*0x42eb08*/
}



// ==== 0x0042EB20  BuildingQueue::AllocSlot  this=BuildingQueue  sig=csp ====
int __thiscall BuildingQueue::AllocSlot(BuildingQueue *this, int a2)
{
  int FreeSlot; // eax

  FreeSlot = BuildingQueue::FindFreeSlot(this, a2); /*0x42eb28*/
  if ( FreeSlot == -1 ) /*0x42eb30*/
    return 0; /*0x42eb3e*/
  else
    return this->BuildingQueue_field_0x08 + 16 * FreeSlot; /*0x42eb39*/
}



// ==== 0x0042EB50  BuildingQueue::FindFreeSlot  this=BuildingQueue  sig=csp ====
int __thiscall BuildingQueue::FindFreeSlot(BuildingQueue *this, int a2)
{
  int v3; // edi
  int v4; // ebx

  v3 = 0; /*0x42eb56*/
  if ( *((int *)this + 5) <= 0 ) /*0x42eb5d*/
    return -1; /*0x42ebc0*/
  v4 = 0; /*0x42eb63*/
  while ( a2 != -1 ) /*0x42eb68*/
  {
    if ( *(_DWORD *)(this->BuildingQueue_field_0x08 + v4) == a2 /*0x42ebac*/
      && !(unsigned __int8)BuildingQueue::IsCellSuitable(this, v3) )
    {
      return v3; /*0x42ebac*/
    }
LABEL_11:
    ++v3; /*0x42ebae*/
    v4 += 16; /*0x42ebb2*/
    if ( v3 >= *((_DWORD *)this + 5) ) /*0x42ebb7*/
      return -1; /*0x42ebb7*/
  }
  if ( (unsigned __int8)BuildingQueue::IsCellSuitable(this, v3) ) /*0x42eb6d*/
    goto LABEL_11; /*0x42eb6d*/
  if ( !*(_DWORD *)&dword_A8B238 || !*(_BYTE *)(v4 + this->BuildingQueue_field_0x08 + 8) ) /*0x42eb84*/
    return v3; /*0x42eb89*/
  if ( !TechnoClass::ProcessTarget(*((TechnoClass **)this + 29), v4 + this->BuildingQueue_field_0x08) ) /*0x42eb8f*/
    goto LABEL_11; /*0x42eb96*/
  *(_DWORD *)(16 * v3 + this->BuildingQueue_field_0x08 + 4) = dword_89C310; /*0x42ebd1*/
  return v3; /*0x42ebb9*/
}



// ==== 0x0042EBE0  BuildingPrerequisiteClass::ReadNodeGraph  this=BuildingPrerequisiteClass  sig=csp ====
int __thiscall BuildingPrerequisiteClass::ReadNodeGraph(
        BuildingPrerequisiteClass *this,
        unsigned __int8 ***a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v4; // edi
  int result; // eax
  BuildingPrerequisiteClass *v6; // esi
  char *v7; // eax
  int IndexByName; // eax
  char *v9; // eax
  int v10; // ebp
  char *v11; // eax
  char *v12; // eax
  BuildingPrerequisiteClass v13; // eax
  int v14; // ecx
  BuildingPrerequisiteClass v15; // eax
  int *v16; // eax
  int v17; // [esp+Ch] [ebp-9Ch]
  int v18; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char Buffer[8]; // [esp+18h] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-88h]
  int v22; // [esp+24h] [ebp-84h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x42ebf4*/
  v4 = a3; /*0x42ebfc*/
  *((_DWORD *)this + 7) = INIClass::ReadInt_Overwrite( /*0x42ec1b*/
                            (bool *)a2,
                            a3,
                            (unsigned __int8 *)aPercentbuilt,
                            *((_DWORD *)this + 7));
  result = INIClass::ReadInt_Overwrite((bool *)a2, a3, (unsigned __int8 *)aNodecount, 0); /*0x42ec1e*/
  v19 = result; /*0x42ec25*/
  v17 = 0; /*0x42ec29*/
  if ( result > 0 ) /*0x42ec31*/
  {
    v6 = this + 1; /*0x42ec38*/
    while ( 1 ) /*0x42ec53*/
    {
      sprintf(Buffer, "%03d", v17); /*0x42ec53*/
      INIClass::GetString((INIClass *)a2, v4, (unsigned __int8 *)Buffer, 0, String, 128); /*0x42ec6f*/
      if ( String[0] == 45 ) /*0x42ec7f*/
      {
        v7 = strtok(String, Str); /*0x42ec86*/
        IndexByName = atoi(v7); /*0x42ec8c*/
      }
      else
      {
        v9 = strtok(String, Str); /*0x42ec9b*/
        IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v9); /*0x42eca5*/
      }
      v10 = IndexByName; /*0x42ecb1*/
      v11 = strtok(0, Str); /*0x42ecb3*/
      LOWORD(v18) = atoi(v11); /*0x42ecc5*/
      v12 = strtok(0, Str); /*0x42ecca*/
      HIWORD(v18) = atoi(v12); /*0x42ecd8*/
      v13 = v6[2]; /*0x42ecdd*/
      if ( *(_DWORD *)&v6[4] < *(_DWORD *)&v13 /*0x42ed06*/
        || (v6[3].__tail_0[1] || !*(_DWORD *)&v13)
        && (v14 = (int)v6[5], v14 > 0)
        && (*(unsigned __int8 (__thiscall **)(BuildingPrerequisiteClass *, int, _DWORD))(*(_DWORD *)v6 + 8))(
             v6,
             *(_DWORD *)&v13 + v14,
             0) )
      {
        v15 = v6[4]; /*0x42ed0d*/
        v6[4] = (BuildingPrerequisiteClass)(*(_DWORD *)&v15 + 1); /*0x42ed13*/
        v16 = (int *)(*(_DWORD *)&v6[1] + 16 * *(_DWORD *)&v15); /*0x42ed1c*/
        *v16 = v10; /*0x42ed1e*/
        v16[1] = v18; /*0x42ed20*/
        v16[2] = v21; /*0x42ed27*/
        v16[3] = v22; /*0x42ed2e*/
      }
      result = ++v17; /*0x42ed39*/
      if ( v17 >= v19 ) /*0x42ed40*/
        break; /*0x42ed40*/
      v4 = a3; /*0x42ec3d*/
    }
  }
  return result; /*0x42ed47*/
}



// ==== 0x0042ED60  HouseClass::SaveTriggerNodeData  this=HouseClass  sig=csp ====
int __thiscall HouseClass::SaveTriggerNodeData(HouseClass *this, char *a2, unsigned __int8 *Block)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  char *v7; // eax
  int v8; // ecx
  int v9; // [esp-Ch] [ebp-A4h]
  int v10; // [esp-8h] [ebp-A0h]
  char Buffer[12]; // [esp+Ch] [ebp-8Ch] BYREF
  char Source[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::SetInt(a2, Block, aPercentbuilt, this->?, 0); /*0x42ed87*/
  INIClass::SetInt(a2, Block, aNodecount, this->?, 0); /*0x42ed9a*/
  result = this->?; /*0x42ed9f*/
  v5 = 0; /*0x42eda2*/
  if ( result > 0 ) /*0x42eda6*/
  {
    v6 = 0; /*0x42eda9*/
    do /*0x42ee1a*/
    {
      sprintf(Buffer, "%03d", v5); /*0x42edb6*/
      v7 = (char *)this->? + v6; /*0x42edc1*/
      v8 = *(_DWORD *)v7; /*0x42edc3*/
      v10 = *((__int16 *)v7 + 3); /*0x42edcf*/
      v9 = *((__int16 *)v7 + 2); /*0x42edd0*/
      if ( *(int *)v7 < 0 ) /*0x42edd1*/
        sprintf(Source, "%d,%d,%d", v8, v9, v10); /*0x42edf2*/
      else
        sprintf(Source, "%s,%d,%d", *((_DWORD *)dword_A83C6C + v8) + 36, v9, v10); /*0x42ede5*/
      INIClass::SetString(a2, Block, Buffer, Source); /*0x42ee0c*/
      result = this->?; /*0x42ee11*/
      ++v5; /*0x42ee14*/
      v6 += 16; /*0x42ee15*/
    }
    while ( v5 < result ); /*0x42ee1a*/
  }
  return result; /*0x42ee1d*/
}



// ==== 0x0042EE30  BaseClass::LoadBaseNodeClass  this=BaseClass  sig=csp ====
int __stdcall BaseClass::LoadBaseNodeClass(BaseClass *this, int a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // ebp
  int percentBuilt; // ecx
  int cells24Capacity; // eax
  int cells24Count; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int cells38Capacity; // edx
  int v15; // ebp
  int v16; // ecx
  HouseClass *owner; // eax
  int v18; // eax
  int v19; // edx
  int v21; // [esp+88h] [ebp-14h] BYREF
  _DWORD v22[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = a2; /*0x42ee3a*/
  if ( (*(int (__stdcall **)(int, BaseClass *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 120, 0) >= 0 ) /*0x42ee4b*/
  {
    if ( this ) /*0x42ee53*/
    {
      BaseNodeClass::Vector_Constructor((BaseNodeClass *)&this->baseNodeCount, 0, 0); /*0x42ee5e*/
      this->baseNodeCount = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x42ee6a*/
      this->cells24Capacity = 10; /*0x42ee70*/
      this->cells24Count = 0; /*0x42ee77*/
      DynamicVector::Constructor_Cell((DynamicVector *)&this->cells38Count, 0, 0); /*0x42ee7e*/
      DynamicVector::Constructor_Cell((DynamicVector *)&this->unknown54[3], 0, 0); /*0x42ee8a*/
      this->baseNodes = (BaseNodeClass *)&BaseClass::`vftable'; /*0x42ee8f*/
    }
    v3 = *(_DWORD *)v2; /*0x42ee96*/
    a2 = 0; /*0x42eea2*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42eeaf*/
    {
      v4 = 0; /*0x42eeb9*/
      if ( a2 <= 0 ) /*0x42eebd*/
      {
LABEL_14:
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42ef4f*/
        {
          v10 = 0; /*0x42ef59*/
          if ( a2 <= 0 ) /*0x42ef5d*/
          {
LABEL_24:
            if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42efd6*/
            {
              v15 = 0; /*0x42efdc*/
              if ( a2 <= 0 ) /*0x42efe0*/
              {
LABEL_34:
                ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 29); /*0x42f044*/
              }
              else
              {
                while ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42eff3*/
                {
                  v16 = this->unknown54[5]; /*0x42eff9*/
                  if ( this->unknown54[7] < v16 /*0x42f021*/
                    || (BYTE1(this->unknown54[6]) || !v16)
                    && (owner = this->owner, (int)owner > 0)
                    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->unknown54[3] + 8))(
                         &this->unknown54[3],
                         (int)owner + v16,
                         0) )
                  {
                    v18 = this->unknown54[7]; /*0x42f028*/
                    v19 = this->unknown54[4]; /*0x42f02b*/
                    this->unknown54[7] = v18 + 1; /*0x42f031*/
                    *(_DWORD *)(v19 + 4 * v18) = v21; /*0x42f038*/
                  }
                  if ( ++v15 >= a2 ) /*0x42f042*/
                    goto LABEL_34; /*0x42f042*/
                }
              }
            }
          }
          else
          {
            while ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42ef70*/
            {
              v11 = this->center[0]; /*0x42ef7a*/
              if ( this->unknown54[1] < v11 /*0x42efa2*/
                || (BYTE1(this->unknown54[0]) || !v11)
                && (v12 = this->unknown54[2], v12 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->cells38Count + 8))(
                     &this->cells38Count,
                     v11 + v12,
                     0) )
              {
                v13 = this->unknown54[1]; /*0x42efa9*/
                cells38Capacity = this->cells38Capacity; /*0x42efac*/
                this->unknown54[1] = v13 + 1; /*0x42efb2*/
                *(_DWORD *)(cells38Capacity + 4 * v13) = v21; /*0x42efb9*/
              }
              if ( ++v10 >= a2 ) /*0x42efc3*/
                goto LABEL_24; /*0x42efc3*/
            }
          }
        }
      }
      else
      {
        while ( (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v22, 16, 0) >= 0 ) /*0x42eed0*/
        {
          percentBuilt = this->percentBuilt; /*0x42eeda*/
          if ( this->cells24Count < percentBuilt /*0x42ef02*/
            || (BYTE1(this->cells24) || !percentBuilt)
            && (cells24Capacity = this->cells24Capacity, cells24Capacity > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->baseNodeCount + 8))(
                 &this->baseNodeCount,
                 percentBuilt + cells24Capacity,
                 0) )
          {
            cells24Count = this->cells24Count; /*0x42ef09*/
            v8 = v22[0]; /*0x42ef0c*/
            this->cells24Count = cells24Count + 1; /*0x42ef13*/
            v9 = (_DWORD *)(this->baseNodeCapacity + 16 * cells24Count); /*0x42ef1c*/
            *v9 = v8; /*0x42ef1e*/
            v9[1] = v22[1]; /*0x42ef24*/
            v9[2] = v22[2]; /*0x42ef2b*/
            v9[3] = v22[3]; /*0x42ef32*/
          }
          if ( ++v4 >= a2 ) /*0x42ef3c*/
            goto LABEL_14; /*0x42ef3c*/
        }
      }
    }
  }
  return 0; /*0x42f056*/
}



// ==== 0x0042F070  BaseClass::LoadArrayFields  this=BaseClass  sig=csp ====
int __stdcall BaseClass::LoadArrayFields(BaseClass *this, int cells24Count)
{
  int v2; // esi
  int v3; // edx
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // ebx
  int v8; // ecx
  int result; // eax
  int v10; // ebx

  v2 = cells24Count; /*0x42f073*/
  if ( (*(int (__stdcall **)(int, BaseClass *, int, _DWORD))(*(_DWORD *)cells24Count + 16))(cells24Count, this, 120, 0) >= 0 ) /*0x42f089*/
  {
    v3 = *(_DWORD *)v2; /*0x42f092*/
    cells24Count = this->cells24Count; /*0x42f09e*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 16))(v2, &cells24Count, 4, 0) >= 0 ) /*0x42f0a7*/
    {
      v4 = 0; /*0x42f0b1*/
      if ( cells24Count <= 0 ) /*0x42f0b5*/
      {
LABEL_7:
        v6 = *(_DWORD *)v2; /*0x42f0dd*/
        cells24Count = this->unknown54[1]; /*0x42f0ec*/
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 16))(v2, &cells24Count, 4, 0) >= 0 ) /*0x42f0f5*/
        {
          v7 = 0; /*0x42f0fb*/
          if ( cells24Count <= 0 ) /*0x42f0ff*/
          {
LABEL_11:
            v8 = *(_DWORD *)v2; /*0x42f11f*/
            cells24Count = this->unknown54[7]; /*0x42f12e*/
            result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v8 + 16))(v2, &cells24Count, 4, 0); /*0x42f132*/
            if ( result >= 0 ) /*0x42f137*/
            {
              v10 = 0; /*0x42f13d*/
              if ( cells24Count <= 0 ) /*0x42f141*/
                return result; /*0x42f141*/
              while ( 1 ) /*0x42f151*/
              {
                result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x42f151*/
                           v2,
                           this->unknown54[4] + 4 * v10,
                           4,
                           0);
                if ( result < 0 ) /*0x42f156*/
                  break; /*0x42f156*/
                if ( ++v10 >= cells24Count ) /*0x42f15f*/
                  return result; /*0x42f15f*/
              }
            }
          }
          else
          {
            while ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x42f114*/
                      v2,
                      this->cells38Capacity + 4 * v7,
                      4,
                      0) >= 0 )
            {
              if ( ++v7 >= cells24Count ) /*0x42f11d*/
                goto LABEL_11; /*0x42f11d*/
            }
          }
        }
      }
      else
      {
        v5 = 0; /*0x42f0b7*/
        while ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x42f0cb*/
                  v2,
                  v5 + this->baseNodeCapacity,
                  16,
                  0) >= 0 )
        {
          ++v4; /*0x42f0d5*/
          v5 += 16; /*0x42f0d6*/
          if ( v4 >= cells24Count ) /*0x42f0db*/
            goto LABEL_7; /*0x42f0db*/
        }
      }
    }
  }
  return 0; /*0x42f161*/
}



// ==== 0x0042F180  BaseClass::ProcessPowerTimer  this=BaseClass  sig=csp ====
int __thiscall BaseClass::ProcessPowerTimer(BaseClass *this, unsigned int *a2)
{
  int result; // eax
  int v4; // ebp
  int v5; // edi

  Power::TimerProcess(this->cells24Count); /*0x42f18f*/
  result = this->cells24Count; /*0x42f194*/
  v4 = 0; /*0x42f197*/
  if ( result > 0 ) /*0x42f19b*/
  {
    v5 = 0; /*0x42f19e*/
    do /*0x42f1d7*/
    {
      Power::TimerProcess(*(_DWORD *)(this->baseNodeCapacity + v5)); /*0x42f1a9*/
      Checksummer::Add_WORD((Checksummer *)a2, *(_WORD *)(this->baseNodeCapacity + v5 + 4)); /*0x42f1b9*/
      Checksummer::Add_WORD((Checksummer *)a2, *(_WORD *)(this->baseNodeCapacity + v5 + 6)); /*0x42f1c9*/
      result = this->cells24Count; /*0x42f1ce*/
      ++v4; /*0x42f1d1*/
      v5 += 16; /*0x42f1d2*/
    }
    while ( v4 < result ); /*0x42f1d7*/
  }
  return result; /*0x42f1da*/
}



// ==== 0x0042F1E0  BaseClass::Construct  this=BaseClass  sig=csp ====
_DWORD *__thiscall BaseClass::Construct(BaseClass *this, int a2)
{
  int *p_baseNodeCount; // edi

  p_baseNodeCount = &this->baseNodeCount; /*0x42f1e6*/
  BaseNodeClass::Vector_Constructor((BaseNodeClass *)&this->baseNodeCount, 0, 0); /*0x42f1ed*/
  *p_baseNodeCount = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x42f1f2*/
  p_baseNodeCount[5] = 10; /*0x42f1f8*/
  p_baseNodeCount[4] = 0; /*0x42f1ff*/
  VectorClass::CellConstructor((VectorClass *)&this->cells38Count, 0, 0); /*0x42f20f*/
  this->cells38Count = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x42f214*/
  this->unknown54[2] = 10; /*0x42f21a*/
  this->unknown54[1] = 0; /*0x42f221*/
  VectorClass::CellConstructor((VectorClass *)&this->unknown54[3], 0, 0); /*0x42f231*/
  this->unknown54[3] = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x42f236*/
  this->owner = (HouseClass *)10; /*0x42f23c*/
  this->unknown54[7] = 0; /*0x42f243*/
  this->baseNodes = (BaseNodeClass *)&BaseClass::`vftable'; /*0x42f24a*/
  return &this->baseNodes; /*0x42f252*/
}



// ==== 0x0042F260  BuildingClass::MarkUpgradeComponentUsed  this=BuildingClass  sig=csp ====
_WORD *__thiscall BuildingClass::MarkUpgradeComponentUsed(BuildingClass *this, _DWORD *a2)
{
  int v4; // edi
  _DWORD *v5; // ebx
  char *v6; // ebx
  _WORD *result; // eax
  char *v8; // edi
  int v9; // ebp
  int abstractFlags; // ecx
  int v11; // ebp
  char *i; // esi
  char v13[4]; // [esp+10h] [ebp-4h] BYREF
  _DWORD *v14; // [esp+18h] [ebp+4h]

  if ( a2[135] == *(_DWORD *)&this->? ) /*0x42f274*/
  {
    v4 = 0; /*0x42f279*/
    if ( this->? > 0 ) /*0x42f27d*/
    {
      v5 = 0; /*0x42f27f*/
      v14 = 0; /*0x42f281*/
      while ( 1 ) /*0x42f28e*/
      {
        v6 = (char *)this->? + (unsigned int)v5; /*0x42f28e*/
        if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v6 ) /*0x42f298*/
        {
          result = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a2 + 440))(a2, v13); /*0x42f2a4*/
          if ( *result == *((_WORD *)v6 + 2) && result[1] == *((_WORD *)v6 + 3) ) /*0x42f2bb*/
            break; /*0x42f2bb*/
        }
        ++v4; /*0x42f2c4*/
        v5 = v14 + 4; /*0x42f2c5*/
        v14 += 4; /*0x42f2ca*/
        if ( v4 >= this->? ) /*0x42f2ce*/
          goto LABEL_10; /*0x42f2ce*/
      }
      v8 = (char *)this->? + 16 * v4; /*0x42f2d8*/
      if ( v8 ) /*0x42f2dc*/
        goto LABEL_18; /*0x42f2dc*/
    }
  }
LABEL_10:
  v9 = a2[328]; /*0x42f2de*/
  result = *(_WORD **)(v9 + 1032); /*0x42f2e4*/
  if ( result ) /*0x42f2ec*/
  {
    abstractFlags = this->?; /*0x42f2ee*/
    v11 = *(_DWORD *)(v9 + 3576); /*0x42f2f1*/
    result = 0; /*0x42f2f7*/
    if ( abstractFlags > 0 ) /*0x42f2fb*/
    {
      for ( i = (char *)this->?; *(_DWORD *)i != v11 || i[8]; i += 16 ) /*0x42f2fd*/
      {
        result = (_WORD *)((char *)result + 1); /*0x42f30b*/
        if ( (int)result >= abstractFlags ) /*0x42f311*/
          return result; /*0x42f311*/
      }
      v8 = i; /*0x42f31d*/
      if ( i ) /*0x42f31f*/
      {
LABEL_18:
        v8[8] = 1; /*0x42f321*/
        *((_DWORD *)v8 + 3) = 0; /*0x42f325*/
      }
    }
  }
  return result; /*0x42f313*/
}



// ==== 0x0042F380  HouseClass::FailedToPlaceNode  this=HouseClass  sig=csp ====
int __stdcall HouseClass::FailedToPlaceNode(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1; /*0x42f380*/
  if ( a1 ) /*0x42f386*/
  {
    v2 = *(_DWORD *)(a1 + 12) + 1; /*0x42f38e*/
    *(_DWORD *)(a1 + 12) = v2; /*0x42f38f*/
    return v2; /*0x42f392*/
  }
  return result; /*0x42f388*/
}



// ==== 0x0042F3A0  _DynamicVectorClass_VBaseNodeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall BaseClass::ddtor(_DynamicVectorClass_VBaseNodeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42f3a6*/
  this->m_10 = 0; /*0x42f3a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x42f3b0*/
  {
    __3_YAXPAX_Z(v2); /*0x42f3b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f3be*/
  }
  BYTE1(this->m_C) = 0; /*0x42f3c1*/
  this->m_8 = 0; /*0x42f3c4*/
}



// ==== 0x0042F3D0  _DynamicVectorClass_VBaseNodeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall BaseClass::Write(_DynamicVectorClass_VBaseNodeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42f3d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x42f3e5*/
  else
    return 0; /*0x42f3d7*/
}



// ==== 0x0042F3F0  _VectorClass_VBaseNodeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall BaseClass::Seek(_VectorClass_VBaseNodeClass *this, int a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 16 * a3; /*0x42f3fa*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x42f402*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x42f407*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x42f40d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x42f413*/
  return a2; /*0x42f416*/
}



// ==== 0x0042F420  _DynamicVectorClass_VCell::ddtor  this=DynamicVector  sig=csp ====
void __thiscall RandomMap::ddtor(_DynamicVectorClass_VCell *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42f426*/
  this->m_10 = 0; /*0x42f429*/
  if ( v2 && BYTE1(this->m_C) ) /*0x42f430*/
  {
    __3_YAXPAX_Z(v2); /*0x42f436*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f43e*/
  }
  BYTE1(this->m_C) = 0; /*0x42f441*/
  this->m_8 = 0; /*0x42f444*/
}



// ==== 0x0042F450  _DynamicVectorClass_VCell::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall RandomMap::Write(_DynamicVectorClass_VCell *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42f450*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42f465*/
  else
    return 0; /*0x42f457*/
}



// ==== 0x0042F470  _VectorClass_VCell::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::Seek(_VectorClass_VCell *this, _DWORD *a2, int a3)
{
  *a2 = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a3); /*0x42f47e*/
  return a2; /*0x42f480*/
}



// ==== 0x0042F490  _VectorClass_VBaseNodeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall BaseClass::AddRef(_VectorClass_VBaseNodeClass *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  _WORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x42f49b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42f4a0*/
  {
    v3 = 0; /*0x42f4a2*/
    if ( m_8 <= 0 ) /*0x42f4a6*/
      return 1; /*0x42f4e0*/
    v4 = *(_DWORD *)(a2 + 4); /*0x42f4a8*/
    v5 = *(_DWORD *)&this->m_1[3]; /*0x42f4ab*/
    v6 = (_WORD *)(v4 + 4); /*0x42f4ae*/
    v7 = v4 - v5; /*0x42f4b1*/
    while ( *(_DWORD *)v5 == *(_DWORD *)(v7 + v5) && *(_WORD *)(v5 + 4) == *v6 && *(_WORD *)(v5 + 6) == v6[1] ) /*0x42f4cd*/
    {
      ++v3; /*0x42f4cf*/
      v6 += 8; /*0x42f4d0*/
      v5 += 16; /*0x42f4d3*/
      if ( v3 >= m_8 ) /*0x42f4d8*/
        return 1; /*0x42f4d8*/
    }
  }
  return 0; /*0x42f4da*/
}



// ==== 0x0042F4F0  _DynamicVectorClass_VBaseNodeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall BaseClass::Release(_DynamicVectorClass_VBaseNodeClass *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v9; // eax
  char *v10; // ebx
  _DWORD *v11; // edx
  int v12; // eax

  v3 = a2; /*0x42f4f2*/
  if ( a2 ) /*0x42f4fd*/
  {
    v5 = a3; /*0x42f503*/
    LOBYTE(this->m_C) = 0; /*0x42f507*/
    if ( a3 ) /*0x42f50d*/
    {
      v7 = a3; /*0x42f533*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x42f515*/
      if ( v6 ) /*0x42f51f*/
        v7 = (char *)v6; /*0x42f524*/
      else
        v7 = 0; /*0x42f52c*/
    }
    LOBYTE(this->m_C) = 1; /*0x42f53b*/
    if ( !v7 ) /*0x42f53f*/
      return 0; /*0x42f5d4*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x42f545*/
    {
      m_8 = this->m_8; /*0x42f54c*/
      if ( a2 < m_8 ) /*0x42f551*/
        m_8 = a2; /*0x42f553*/
      if ( m_8 > 0 ) /*0x42f557*/
      {
        v9 = 0; /*0x42f559*/
        do /*0x42f57d*/
        {
          v10 = &v7[v9]; /*0x42f55e*/
          v11 = (_DWORD *)(v9 + *(_DWORD *)&this->m_1[3]); /*0x42f561*/
          v9 += 16; /*0x42f563*/
          --m_8; /*0x42f566*/
          *(_DWORD *)v10 = *v11; /*0x42f569*/
          *((_DWORD *)v10 + 1) = v11[1]; /*0x42f56e*/
          *((_DWORD *)v10 + 2) = v11[2]; /*0x42f574*/
          *((_DWORD *)v10 + 3) = v11[3]; /*0x42f57a*/
        }
        while ( m_8 ); /*0x42f57d*/
        v3 = a2; /*0x42f57f*/
        v5 = a3; /*0x42f583*/
      }
      if ( BYTE1(this->m_C) ) /*0x42f587*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42f592*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x42f59a*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v7; /*0x42f5a3*/
    this->m_8 = v3; /*0x42f5ab*/
    BYTE1(this->m_C) = v5 == 0; /*0x42f5ae*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VBaseNodeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42f5b7*/
  }
  v12 = this->m_8; /*0x42f5ba*/
  if ( v12 < this->m_10 ) /*0x42f5c2*/
    this->m_10 = v12; /*0x42f5c4*/
  return 1; /*0x42f5c7*/
}



// ==== 0x0042F5E0  _DynamicVectorClass_VBaseNodeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall BaseClass::Read(_DynamicVectorClass_VBaseNodeClass *this, int a2)
{
  int m_10; // edx
  int result; // eax
  int i; // ecx

  m_10 = this->m_10; /*0x42f5e0*/
  result = 0; /*0x42f5e4*/
  if ( m_10 <= 0 ) /*0x42f5ea*/
    return -1; /*0x42f615*/
  for ( i = *(_DWORD *)&this->m_1[3]; /*0x42f5f0*/
        *(_DWORD *)i != *(_DWORD *)a2
     || *(_WORD *)(i + 4) != *(_WORD *)(a2 + 4)
     || *(_WORD *)(i + 6) != *(_WORD *)(a2 + 6);
        i += 16 )
  {
    if ( ++result >= m_10 ) /*0x42f613*/
      return -1; /*0x42f613*/
  }
  return result; /*0x42f618*/
}



// ==== 0x0042F620  _VectorClass_VCell::AddRef  this=VectorClass  sig=csp ====
char __thiscall RandomMap::AddRef(_VectorClass_VCell *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _WORD *v5; // eax
  _WORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x42f627*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42f62f*/
  {
    v3 = 0; /*0x42f631*/
    if ( m_8 <= 0 ) /*0x42f635*/
      return 1; /*0x42f664*/
    v4 = *(_DWORD *)(a2 + 4); /*0x42f637*/
    v5 = *(_WORD **)&this->m_1[3]; /*0x42f63a*/
    v6 = (_WORD *)(v4 + 2); /*0x42f63d*/
    v7 = v4 - (_DWORD)v5; /*0x42f640*/
    while ( *v5 == *(_WORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x42f652*/
    {
      ++v3; /*0x42f654*/
      v6 += 2; /*0x42f655*/
      v5 += 2; /*0x42f658*/
      if ( v3 >= m_8 ) /*0x42f65d*/
        return 1; /*0x42f65d*/
    }
  }
  return 0; /*0x42f65f*/
}



// ==== 0x0042F670  DynamicVector::Constructor_Cell  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVector::Constructor_Cell(DynamicVector *this, int a2, int a3)
{
  int v4; // eax

  *(_DWORD *)&this->DynamicVector_field_0x1[3] = 0; /*0x42f67a*/
  this->DynamicVector_field_0x8 = a2; /*0x42f681*/
  this->__pad_C[0] = 1; /*0x42f684*/
  this->__pad_C[1] = 0; /*0x42f688*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Cell>::`vftable'; /*0x42f68c*/
  if ( a2 ) /*0x42f692*/
  {
    if ( a3 ) /*0x42f69a*/
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = a3; /*0x42f69d*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = v4; /*0x42f6c3*/
      this->__pad_C[1] = 1; /*0x42f6c6*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x42f6ca*/
  *(_DWORD *)this->__pad_14 = 10; /*0x42f6d0*/
  this->DynamicVector_field_0x10 = 0; /*0x42f6d7*/
  return this->__pad_0; /*0x42f6e0*/
}



// ==== 0x0042F6F0  _VectorClass_VCell::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Cell::Release(_VectorClass_VCell *this, int a2, _DWORD *a3)
{
  int v4; // eax
  _DWORD *v5; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42f6fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x42f706*/
    if ( a3 ) /*0x42f70c*/
    {
      v5 = a3; /*0x42f734*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42f716*/
      if ( v4 ) /*0x42f720*/
        v5 = (_DWORD *)v4; /*0x42f725*/
      else
        v5 = 0; /*0x42f72d*/
    }
    LOBYTE(this->m_C) = 1; /*0x42f73c*/
    if ( v5 ) /*0x42f740*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42f74b*/
      {
        m_8 = this->m_8; /*0x42f752*/
        if ( a2 < m_8 ) /*0x42f757*/
          m_8 = a2; /*0x42f759*/
        for ( i = 0; i < m_8; v5[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42f75f*/
          ++i; /*0x42f764*/
        if ( BYTE1(this->m_C) ) /*0x42f771*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42f77c*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42f784*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x42f78d*/
      this->m_8 = a2; /*0x42f795*/
      BYTE1(this->m_C) = a3 == 0; /*0x42f798*/
      return 1; /*0x42f79e*/
    }
    else
    {
      return 0; /*0x42f745*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VCell *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42f7a8*/
    return 1; /*0x42f7ae*/
  }
}



// ==== 0x0042F7C0  _VectorClass_VCell::Cleanup  this=VectorClass  sig=csp ====
int __thiscall Buffer::Cleanup(_VectorClass_VCell *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x42f7c6*/
  if ( result && BYTE1(this->m_C) ) /*0x42f7cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42f7d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f7db*/
  }
  BYTE1(this->m_C) = 0; /*0x42f7de*/
  this->m_8 = 0; /*0x42f7e1*/
  return result; /*0x42f7e4*/
}



// ==== 0x0042F7F0  _VectorClass_VCell::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Cell::GetSize(_VectorClass_VCell *this, _WORD *a2)
{
  int result; // eax
  int m_8; // edx
  _WORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x42f7f0*/
    return 0; /*0x42f7fc*/
  m_8 = this->m_8; /*0x42f802*/
  result = 0; /*0x42f805*/
  if ( m_8 <= 0 ) /*0x42f809*/
    return -1; /*0x42f82c*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f80f*/
  {
    if ( ++result >= m_8 ) /*0x42f82a*/
      return -1; /*0x42f82a*/
  }
  return result; /*0x42f7fa*/
}



// ==== 0x0042F840  _VectorClass_VCell::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Cell::GetCapacity(_VectorClass_VCell *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42f840*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42f855*/
  else
    return 0; /*0x42f847*/
}



// ==== 0x0042F860  ?$DynamicVectorClass@VCell@@::ResizeEx  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ResizeEx(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // ecx
  int i; // eax
  int v8; // eax

  if ( a2 ) /*0x42f86c*/
  {
    this->IsInitialized = 0; /*0x42f876*/
    if ( a3 ) /*0x42f87c*/
    {
      v5 = a3; /*0x42f8a4*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42f886*/
      if ( v4 ) /*0x42f890*/
        v5 = v4; /*0x42f895*/
      else
        v5 = 0; /*0x42f89d*/
    }
    this->IsInitialized = 1; /*0x42f8ac*/
    if ( !v5 ) /*0x42f8b0*/
      return 0; /*0x42f924*/
    if ( this->Items ) /*0x42f8b2*/
    {
      v6 = this->q008; /*0x42f8b9*/
      if ( a2 < v6 ) /*0x42f8be*/
        v6 = a2; /*0x42f8c0*/
      for ( i = 0; i < v6; v5[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x42f8c6*/
        ++i; /*0x42f8cb*/
      if ( this->IsAllocated ) /*0x42f8d8*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x42f8e3*/
        this->Items = 0; /*0x42f8eb*/
      }
    }
    this->Items = v5; /*0x42f8f4*/
    this->q008 = a2; /*0x42f8fc*/
    this->IsAllocated = a3 == 0; /*0x42f8ff*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42f908*/
  }
  v8 = this->q008; /*0x42f90b*/
  if ( v8 < this->Items ) /*0x42f913*/
    this->Items = v8; /*0x42f915*/
  return 1; /*0x42f918*/
}



// ==== 0x0042F930  _DynamicVectorClass_VCell::Read  this=DynamicVector  sig=csp ====
int __thiscall RandomMap::Read(_DynamicVectorClass_VCell *this, _WORD *a2)
{
  int m_10; // edx
  int result; // eax
  _WORD *i; // ecx

  m_10 = this->m_10; /*0x42f930*/
  result = 0; /*0x42f934*/
  if ( m_10 <= 0 ) /*0x42f93a*/
    return -1; /*0x42f95d*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f940*/
  {
    if ( ++result >= m_10 ) /*0x42f95b*/
      return -1; /*0x42f95b*/
  }
  return result; /*0x42f960*/
}



// ==== 0x0042F970  _DynamicVectorClass_VBaseNodeClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BaseClass::QueryInterface(_DynamicVectorClass_VBaseNodeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42f973*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BaseNodeClass>::`vftable'; /*0x42f976*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42f980*/
  {
    __3_YAXPAX_Z(v3); /*0x42f988*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f990*/
  }
  BYTE1(this->m_C) = 0; /*0x42f99b*/
  this->m_8 = 0; /*0x42f9a1*/
  if ( (a2 & 1) != 0 ) /*0x42f9a8*/
    __3_YAXPAX_Z(this); /*0x42f9ab*/
  return this->__pad_0; /*0x42f9b5*/
}



// ==== 0x0042F9C0  _VectorClass_VBaseNodeClass::Release  this=VectorClass  sig=csp ====
char __thiscall BaseNodeClass_Vector::Release(_VectorClass_VBaseNodeClass *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x42f9c2*/
  if ( a2 ) /*0x42f9cd*/
  {
    v5 = a3; /*0x42f9d3*/
    LOBYTE(this->m_C) = 0; /*0x42f9d7*/
    if ( a3 ) /*0x42f9dd*/
    {
      v7 = a3; /*0x42fa03*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x42f9e5*/
      if ( v6 ) /*0x42f9ef*/
        v7 = (char *)v6; /*0x42f9f4*/
      else
        v7 = 0; /*0x42f9fc*/
    }
    LOBYTE(this->m_C) = 1; /*0x42fa0b*/
    if ( v7 ) /*0x42fa0f*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x42fa1b*/
      {
        m_8 = this->m_8; /*0x42fa22*/
        if ( a2 < m_8 ) /*0x42fa27*/
          m_8 = a2; /*0x42fa29*/
        if ( m_8 > 0 ) /*0x42fa2d*/
        {
          v10 = 0; /*0x42fa2f*/
          do /*0x42fa53*/
          {
            v11 = &v7[v10]; /*0x42fa34*/
            v12 = (_DWORD *)(v10 + *(_DWORD *)&this->m_1[3]); /*0x42fa37*/
            v10 += 16; /*0x42fa39*/
            --m_8; /*0x42fa3c*/
            *(_DWORD *)v11 = *v12; /*0x42fa3f*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x42fa44*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x42fa4a*/
            *((_DWORD *)v11 + 3) = v12[3]; /*0x42fa50*/
          }
          while ( m_8 ); /*0x42fa53*/
          v5 = a3; /*0x42fa55*/
          v3 = a2; /*0x42fa59*/
        }
        if ( BYTE1(this->m_C) ) /*0x42fa5d*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42fa68*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42fa70*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v7; /*0x42fa79*/
      this->m_8 = v3; /*0x42fa81*/
      BYTE1(this->m_C) = v5 == 0; /*0x42fa84*/
      return 1; /*0x42fa8a*/
    }
    else
    {
      return 0; /*0x42fa14*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VBaseNodeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x42fa95*/
    return 1; /*0x42fa9b*/
  }
}



// ==== 0x0042FAB0  _VectorClass_VBaseNodeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall BaseNodeClass_Vector::ddtor(_VectorClass_VBaseNodeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x42fabd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x42fac3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42facb*/
  }
  BYTE1(this->m_C) = 0; /*0x42face*/
  this->m_8 = 0; /*0x42fad1*/
}



// ==== 0x0042FAE0  _VectorClass_VBaseNodeClass::Read  this=VectorClass  sig=csp ====
int __thiscall BaseNodeClass_Vector::Read(_VectorClass_VBaseNodeClass *this, int a2)
{
  int result; // eax
  int m_8; // edx
  int i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x42fae0*/
    return 0; /*0x42faec*/
  m_8 = this->m_8; /*0x42faf2*/
  result = 0; /*0x42faf5*/
  if ( m_8 <= 0 ) /*0x42faf9*/
    return -1; /*0x42fb24*/
  for ( i = *(_DWORD *)&this->m_1[3]; /*0x42faff*/
        *(_DWORD *)i != *(_DWORD *)a2
     || *(_WORD *)(i + 4) != *(_WORD *)(a2 + 4)
     || *(_WORD *)(i + 6) != *(_WORD *)(a2 + 6);
        i += 16 )
  {
    if ( ++result >= m_8 ) /*0x42fb22*/
      return -1; /*0x42fb22*/
  }
  return result; /*0x42faea*/
}



// ==== 0x0042FB30  _VectorClass_VBaseNodeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall BaseNodeClass_Vector::Write(_VectorClass_VBaseNodeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x42fb30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x42fb45*/
  else
    return 0; /*0x42fb37*/
}



// ==== 0x0042FB50  _VectorClass_VBaseNodeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall BaseNodeClass_Vector::QueryInterface(_VectorClass_VBaseNodeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42fb53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BaseNodeClass>::`vftable'; /*0x42fb56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42fb60*/
  {
    __3_YAXPAX_Z(v3); /*0x42fb68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42fb70*/
  }
  BYTE1(this->m_C) = 0; /*0x42fb7b*/
  this->m_8 = 0; /*0x42fb81*/
  if ( (a2 & 1) != 0 ) /*0x42fb88*/
    __3_YAXPAX_Z(this); /*0x42fb8b*/
  return this->__pad_0; /*0x42fb95*/
}



// ==== 0x0042FBA0  _VectorClass_VCell::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Cell::QueryInterface(_VectorClass_VCell *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42fba3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Cell>::`vftable'; /*0x42fba6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42fbb0*/
  {
    __3_YAXPAX_Z(v3); /*0x42fbb8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42fbc0*/
  }
  BYTE1(this->m_C) = 0; /*0x42fbcb*/
  this->m_8 = 0; /*0x42fbd1*/
  if ( (a2 & 1) != 0 ) /*0x42fbd8*/
    __3_YAXPAX_Z(this); /*0x42fbdb*/
  return this->__pad_0; /*0x42fbe5*/
}



// ==== 0x0042FBF0  _DynamicVectorClass_VCell::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall RandomMap::QueryInterface(_DynamicVectorClass_VCell *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42fbf3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Cell>::`vftable'; /*0x42fbf6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x42fc00*/
  {
    __3_YAXPAX_Z(v3); /*0x42fc08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42fc10*/
  }
  BYTE1(this->m_C) = 0; /*0x42fc1b*/
  this->m_8 = 0; /*0x42fc21*/
  if ( (a2 & 1) != 0 ) /*0x42fc28*/
    __3_YAXPAX_Z(this); /*0x42fc2b*/
  return this->__pad_0; /*0x42fc35*/
}



// ==== 0x0042FC40  BaseNodeClass::Vector_Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall BaseNodeClass::Vector_Constructor(BaseNodeClass *this, int a2, int a3)
{
  int v5; // eax

  this->mapCoords[0] = 0; /*0x42fc4a*/
  *(_DWORD *)&this->placed = a2; /*0x42fc51*/
  LOBYTE(this->attempts) = 1; /*0x42fc54*/
  BYTE1(this->attempts) = 0; /*0x42fc58*/
  this->buildingTypeIndex = (int)&VectorClass<BaseNodeClass>::`vftable'; /*0x42fc5c*/
  if ( a2 ) /*0x42fc62*/
  {
    if ( a3 ) /*0x42fc6a*/
    {
      this->mapCoords[0] = a3; /*0x42fc6d*/
      return &this->buildingTypeIndex; /*0x42fc78*/
    }
    v5 = __2_YAPAXI_Z(16 * a2); /*0x42fc81*/
    if ( v5 ) /*0x42fc8b*/
    {
      this->mapCoords[0] = v5; /*0x42fc8e*/
      BYTE1(this->attempts) = 1; /*0x42fc95*/
      return &this->buildingTypeIndex; /*0x42fc9d*/
    }
    BYTE1(this->attempts) = 1; /*0x42fca2*/
    this->mapCoords[0] = 0; /*0x42fca6*/
  }
  return &this->buildingTypeIndex; /*0x42fc76*/
}



// ==== 0x0042FCB0  VectorClass::CellConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CellConstructor(VectorClass *this, int a2, int a3)
{
  void *v5; // eax

  this->Items = 0; /*0x42fcba*/
  this->Capacity = a2; /*0x42fcc1*/
  this->IsInitialized = 1; /*0x42fcc4*/
  this->IsAllocated = 0; /*0x42fcc8*/
  this->ptr_0 = &VectorClass<Cell>::`vftable'; /*0x42fccc*/
  if ( a2 ) /*0x42fcd2*/
  {
    if ( a3 ) /*0x42fcda*/
    {
      this->Items = (void *)a3; /*0x42fcdd*/
      return &this->ptr_0; /*0x42fce8*/
    }
    v5 = (void *)__2_YAPAXI_Z(4 * a2); /*0x42fcf3*/
    if ( v5 ) /*0x42fcfd*/
    {
      this->Items = v5; /*0x42fd00*/
      this->IsAllocated = 1; /*0x42fd07*/
      return &this->ptr_0; /*0x42fd0f*/
    }
    this->IsAllocated = 1; /*0x42fd14*/
    this->Items = 0; /*0x42fd18*/
  }
  return &this->ptr_0; /*0x42fce6*/
}



// ==== 0x0042FD30  EncodeBitmapRGB  this=Pipe  sig=csp ====
int __fastcall Bitmap_EncodeRGB(char *a1, int a2, _BYTE *a3, int a4)
{
  int v4; // eax
  char *v5; // ebp
  _BYTE *v6; // ecx
  char v7; // al
  int v8; // edi
  char v9; // al
  char v10; // al
  _BYTE *v11; // ecx
  char *v12; // ecx
  char v13; // al
  char *v14; // ecx
  char v15; // al
  int v17; // [esp+4h] [ebp-4h]
  unsigned int v18; // [esp+Ch] [ebp+4h]

  if ( !a1 ) /*0x42fd34*/
    return 0; /*0x42fd34*/
  if ( !a2 ) /*0x42fd3c*/
    return 0; /*0x42fd3c*/
  if ( !a3 ) /*0x42fd48*/
    return 0; /*0x42fd48*/
  v4 = a4; /*0x42fd4e*/
  if ( !a4 ) /*0x42fd54*/
    return 0; /*0x42fe46*/
  v5 = a1; /*0x42fd5c*/
  v17 = 0; /*0x42fd61*/
  v6 = a3; /*0x42fd69*/
  if ( a2 > 0 ) /*0x42fd6b*/
  {
    while ( 1 ) /*0x42fd71*/
    {
      if ( v4 < 4 ) /*0x42fd74*/
        goto LABEL_19; /*0x42fd74*/
      v7 = *v5; /*0x42fd7a*/
      v8 = 0; /*0x42fd7d*/
      ++v5; /*0x42fd7f*/
      v18 = 0; /*0x42fd80*/
      --a2; /*0x42fd84*/
      BYTE2(v18) = v7; /*0x42fd85*/
      if ( !a2 ) /*0x42fd89*/
        break; /*0x42fd89*/
      v9 = *v5++; /*0x42fd8b*/
      --a2; /*0x42fd8f*/
      BYTE1(v18) = v9; /*0x42fd90*/
      if ( !a2 ) /*0x42fd96*/
        goto LABEL_11; /*0x42fd96*/
      v10 = *v5++; /*0x42fd98*/
      LOBYTE(v18) = v10; /*0x42fd9c*/
      --a2; /*0x42fda0*/
LABEL_12:
      v11 = v6 + 1; /*0x42fda9*/
      *(v11 - 1) = aAbcdefghijklmn[(v18 >> 18) & 0x3F]; /*0x42fdbf*/
      v12 = v11 + 1; /*0x42fdd0*/
      *(v12 - 1) = aAbcdefghijklmn[(v18 >> 12) & 0x3F]; /*0x42fdd7*/
      if ( v8 >= 2 ) /*0x42fdda*/
        v13 = asc_818A0C[0]; /*0x42fdf4*/
      else
        v13 = aAbcdefghijklmn[(v18 >> 6) & 0x3F]; /*0x42fdea*/
      *v12 = v13; /*0x42fdf6*/
      v14 = v12 + 1; /*0x42fdf8*/
      if ( v8 >= 1 ) /*0x42fdfc*/
        v15 = asc_818A0C[0]; /*0x42fe10*/
      else
        v15 = aAbcdefghijklmn[v18 & 0x3F]; /*0x42fe06*/
      *v14 = v15; /*0x42fe16*/
      v6 = v14 + 1; /*0x42fe1c*/
      v4 = a4 - 4; /*0x42fe1d*/
      a4 -= 4; /*0x42fe25*/
      v17 += 4; /*0x42fe29*/
      if ( a2 <= 0 ) /*0x42fe2d*/
        goto LABEL_19; /*0x42fe2d*/
    }
    v8 = 1; /*0x42fda3*/
LABEL_11:
    ++v8; /*0x42fda8*/
    goto LABEL_12; /*0x42fda8*/
  }
LABEL_19:
  if ( v4 > 0 ) /*0x42fe38*/
    *v6 = 0; /*0x42fe3a*/
  return v17; /*0x42fe41*/
}



// ==== 0x0042FE50  DecodeBitmapRGB  this=Pipe  sig=csp ====
int __fastcall Bitmap_DecodeRGB(unsigned __int8 *a1, int a2, _BYTE *a3, int a4)
{
  _BYTE *v4; // esi
  int v5; // eax
  unsigned __int8 *v6; // ebp
  int v7; // ebx
  int v8; // edi
  unsigned __int8 v9; // cl
  char v10; // cl
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // ecx
  int v15; // [esp+Ch] [ebp+4h]
  char v16; // [esp+12h] [ebp+Ah]

  if ( a1 ) /*0x42fe54*/
  {
    if ( a2 ) /*0x42fe5c*/
    {
      v4 = a3; /*0x42fe62*/
      if ( a3 ) /*0x42fe68*/
      {
        v5 = a4; /*0x42fe6e*/
        if ( a4 ) /*0x42fe74*/
        {
          v15 = 0; /*0x42fe7f*/
          v6 = a1; /*0x42fe87*/
          if ( a2 <= 0 ) /*0x42fe89*/
            return v15; /*0x42fe89*/
          while ( 1 ) /*0x42fe8f*/
          {
            if ( v5 <= 0 ) /*0x42fe91*/
              return v15; /*0x42fe91*/
            v7 = 0; /*0x42fe97*/
            v8 = 0; /*0x42fe99*/
            while ( 1 ) /*0x42fe9f*/
            {
              if ( a2 <= 0 ) /*0x42fea1*/
              {
LABEL_19:
                v16 = BYTE2(v7); /*0x42ff10*/
                goto LABEL_20; /*0x42ff10*/
              }
              v9 = *v6++; /*0x42fea3*/
              --a2; /*0x42feab*/
              v10 = byte_7E3914[v9]; /*0x42feb6*/
              if ( v10 != -2 ) /*0x42febf*/
                break; /*0x42febf*/
LABEL_18:
              if ( v8 >= 4 ) /*0x42ff0e*/
                goto LABEL_19; /*0x42ff0e*/
            }
            if ( v10 != -1 ) /*0x42fec4*/
              break; /*0x42fec4*/
            v16 = BYTE2(v7); /*0x42ff61*/
            a2 = 0; /*0x42ff65*/
LABEL_20:
            *v4++ = v16; /*0x42ff14*/
            --v5; /*0x42ff1f*/
            v13 = ++v15; /*0x42ff20*/
            if ( v5 > 0 ) /*0x42ff27*/
            {
              if ( v8 > 2 ) /*0x42ff2c*/
              {
                *v4++ = BYTE1(v7); /*0x42ff2e*/
                --v5; /*0x42ff31*/
                v15 = v13 + 1; /*0x42ff33*/
              }
              if ( v5 > 0 && v8 > 3 ) /*0x42ff3e*/
              {
                *v4++ = v7; /*0x42ff44*/
                --v5; /*0x42ff47*/
                ++v15; /*0x42ff49*/
              }
            }
            if ( a2 <= 0 ) /*0x42ff4f*/
              return v15; /*0x42ff5e*/
          }
          switch ( v8 ) /*0x42fecf*/
          {
            case 0: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 18; /*0x42fed9*/
              v12 = v7 & 0xFF03FFFF; /*0x42fedc*/
              goto LABEL_16; /*0x42fee2*/
            case 1: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 12; /*0x42fee7*/
              v12 = v7 & 0xFFFC0FFF; /*0x42feea*/
              goto LABEL_16; /*0x42fef0*/
            case 2: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 6; /*0x42fef5*/
              v12 = v7 & 0xFFFFF03F; /*0x42fef8*/
              goto LABEL_16; /*0x42fefe*/
            case 3: /*0x42fecf*/
              v11 = v10 & 0x3F; /*0x42ff00*/
              v12 = v7 & 0xFFFFFFC0; /*0x42ff03*/
LABEL_16:
              v7 = v12 | v11; /*0x42ff06*/
              break; /*0x42ff08*/
            default:
              break;
          }
          ++v8; /*0x42ff0a*/
          goto LABEL_18; /*0x42ff0a*/
        }
      }
    }
  }
  return 0; /*0x42ff5c*/
}



// ==== 0x0042FF80  sub_42FF80  this=-  sig=ida-proto ====
int sub_42FF80()
{
  dword_89C380 = 0; /*0x42ff82*/
  dword_89C384 = 0; /*0x42ff87*/
  dword_89C388 = 0; /*0x42ff8c*/
  dword_89C38C = 0; /*0x42ff91*/
  return 0; /*0x42ff96*/
}



// ==== 0x0042FFA0  sub_42FFA0  this=-  sig=ida-proto ====
void sub_42FFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42ffac*/
  dbl_89C398 = Math::Sqrt(v0 + v0); /*0x42ffbe*/
}



// ==== 0x0042FFD0  sub_42FFD0  this=-  sig=ida-proto ====
void sub_42FFD0()
{
  dbl_89C468 = dbl_89C398 / 60.0; /*0x42ffdc*/
}



// ==== 0x0042FFF0  sub_42FFF0  this=-  sig=ida-proto ====
void sub_42FFF0()
{
  dbl_89C450 = 1.0 / dbl_89C468; /*0x42fffc*/
}


