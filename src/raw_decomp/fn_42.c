// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00420080  sub_420080  this=-  sig=ida-proto ====
int sub_420080()
{
  MEMORY[0x88A084] = 0; /*0x420087*/
  MEMORY[0x88A088] = 0; /*0x42008c*/
  MEMORY[0x88A08C] = 1; /*0x420091*/
  MEMORY[0x88A08D] = 0; /*0x420098*/
  MEMORY[0x88A080] = (int)&vt_DynamicVectorClass_AlphaLightingRemapClass; /*0x42009d*/
  MEMORY[0x88A094] = 10; /*0x4200a7*/
  MEMORY[0x88A090] = 0; /*0x4200b1*/
  return atexit(sub_4200C0); /*0x4200bc*/
}


// ==== 0x004200C0  sub_4200C0  this=-  sig=ida-proto ====
void __cdecl sub_4200C0()
{
  if ( (MEMORY[0x88A098] & 1) == 0 ) /*0x4200ca*/
  {
    MEMORY[0x88A080] = (int)&vt_VectorClass_AlphaLightingRemapClass; /*0x4200ce*/
    MEMORY[0x88A098] |= 1u; /*0x4200e1*/
    if ( MEMORY[0x88A084] ) /*0x4200e7*/
    {
      if ( MEMORY[0x88A08D] ) /*0x4200f1*/
      {
        __3_YAXPAX_Z(MEMORY[0x88A084]); /*0x4200f4*/
        MEMORY[0x88A084] = 0; /*0x4200fc*/
      }
    }
    MEMORY[0x88A08D] = 0; /*0x420106*/
    MEMORY[0x88A088] = 0; /*0x42010d*/
  }
}


// ==== 0x00420120  ObjectClass::??0Iostream_init_QAE_XZ_0  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall Iostream_init::Iostream_init(Iostream_init *this)
{
  return this; /*0x420122*/
}


// ==== 0x00420130  ObjectClass::nullsub_53  this=ObjectClass  sig=csp ====
void nullsub_53()
{
  ; /*0x420130*/
}


// ==== 0x00420140  CreateFractalNoise  this=-  sig=csp ====
_DWORD *__stdcall CreateFractalNoise(CCINIClass *aP0)
{
  int v1; // eax
  CCINIClass *v2; // ecx
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // esi
  int v6; // edi
  _WORD *v7; // ebx
  int v8; // edx
  __int16 v9; // cx
  int v11; // eax

  v1 = 0; /*0x420149*/
  if ( *(int *)&stru_87C374.__pad_579C[34176] <= 0 ) /*0x420152*/
  {
LABEL_5:
    v3 = __2_YAPAXI_Z(0x20008u); /*0x42016e*/
    v4 = (_DWORD *)v3; /*0x420178*/
    if ( v3 ) /*0x42017f*/
    {
      *(_DWORD *)(v3 + 0x20000) = aP0; /*0x420181*/
      v5 = 0; /*0x420187*/
      *(_DWORD *)(v3 + 131076) = 0; /*0x420189*/
      v6 = (int)&aP0[-1].unknown54 + 3; /*0x420193*/
      v7 = (_WORD *)v3; /*0x420194*/
      do /*0x4201d3*/
      {
        v8 = v6 * (v5 >> 8) * (unsigned __int8)v5 / 32258; /*0x4201ba*/
        if ( v8 > v6 ) /*0x4201be*/
          LOBYTE(v8) = (_BYTE)aP0 - 1; /*0x4201c0*/
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
    if ( *(int *)&stru_87C374.__pad_579C[34176] < *(int *)&stru_87C374.__pad_579C[34168] /*0x420230*/
      || (stru_87C374.__pad_579C[34173] || !*(_DWORD *)&stru_87C374.__pad_579C[34168])
      && *(int *)&stru_87C374.__pad_579C[34180] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87C374.__pad_579C[34160] + 8))(
           &stru_87C374.__pad_579C[34160],
           *(_DWORD *)&stru_87C374.__pad_579C[34168] + *(_DWORD *)&stru_87C374.__pad_579C[34180],
           0) )
    {
      v11 = (*(_DWORD *)&stru_87C374.__pad_579C[34176])++; /*0x42023d*/
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[34164] + 4 * v11) = v4; /*0x42024c*/
    }
    ++v4[32769]; /*0x420258*/
    return v4; /*0x42025e*/
  }
  else
  {
    v2 = *(CCINIClass **)&stru_87C374.__pad_579C[34164]; /*0x42015a*/
    while ( *(CCINIClass **)(*(_DWORD *)v2->__pad_0 + 0x20000) != aP0 ) /*0x420164*/
    {
      ++v1; /*0x420166*/
      v2 = (CCINIClass *)((char *)v2 + 4); /*0x420167*/
      if ( v1 >= *(int *)&stru_87C374.__pad_579C[34176] ) /*0x42016c*/
        goto LABEL_5; /*0x42016c*/
    }
    ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[34164] + 4 * v1) + 131076); /*0x4201e5*/
    return *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[34164] + 4 * v1); /*0x4201f1*/
  }
}


// ==== 0x00420270  FractalNoise::Dtor  this=FractalNoise  sig=csp ====
void __stdcall FractalNoise::Release(CCINIClass *aP0)
{
  int v1; // eax

  if ( aP0 ) /*0x420276*/
  {
    if ( !--aP0[1489].INIClass_field_2C ) /*0x42028d*/
    {
      v1 = (*(int (__thiscall **)(char *, CCINIClass **))(*(_DWORD *)&stru_87C374.__pad_579C[34160] + 16))( /*0x4202a7*/
             &stru_87C374.__pad_579C[34160],
             &aP0);
      if ( v1 != -1 && v1 < *(int *)&stru_87C374.__pad_579C[34176] ) /*0x4202b7*/
      {
        --*(_DWORD *)&stru_87C374.__pad_579C[34176]; /*0x4202bc*/
        for ( ; /*0x4202c2*/
              v1 < *(int *)&stru_87C374.__pad_579C[34176];
              *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[34164] + 4 * v1 - 4) = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[34164]
                                                                                              + 4 * v1) )
        {
          ++v1; /*0x4202ca*/
        }
      }
      if ( aP0 ) /*0x4202e2*/
        __3_YAXPAX_Z(aP0); /*0x4202e5*/
    }
  }
}


// ==== 0x004202F0  ObjectClass::method_4202F0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4202F0(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // ebx
  _WORD *v4; // ebp
  int v5; // edx
  __int16 v6; // ax

  v2 = 0; /*0x4202f8*/
  *(this + 0x8000) = a2; /*0x4202fa*/
  this->q8001 = 0; /*0x420300*/
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
    *v4++ = v6; /*0x42033c*/
  }
  while ( v2 <= 0xFFFF ); /*0x420349*/
  return this; /*0x42034b*/
}


// ==== 0x00420360  nullsub_88  this=-  sig=ida-proto ====
void nullsub_88()
{
  ; /*0x420360*/
}


// ==== 0x00420370  _DynamicVectorClass_PAVAlphaLightingRemapClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall AITriggerTypeClass_40_::sub_420370(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x420376*/
  *(_DWORD *)(this + 16) = 0; /*0x420379*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x420380*/
  {
    __3_YAXPAX_Z(v2); /*0x420386*/
    *(_DWORD *)(this + 4) = 0; /*0x42038e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x420391*/
  *(_DWORD *)(this + 8) = 0; /*0x420394*/
}


// ==== 0x004203A0  _DynamicVectorClass_PAVAlphaLightingRemapClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall AITriggerTypeClass_40_::sub_4203A0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4203a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4203b5*/
  else
    return 0; /*0x4203a7*/
}


// ==== 0x004203C0  _VectorClass_PAVAlphaLightingRemapClass::Seek  this=VectorClass  sig=csp ====
int __thiscall AITriggerTypeClass_40_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4203ca*/
}


// ==== 0x004203D0  _VectorClass_PAVAlphaLightingRemapClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall AITriggerTypeClass_40_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4203d2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4203dd*/
  {
    v3 = 0; /*0x4203df*/
    if ( v2 <= 0 ) /*0x4203e3*/
      return 1; /*0x420403*/
    v4 = (_DWORD *)this->Items; /*0x4203e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4203eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4203f4*/
    {
      ++v3; /*0x4203f6*/
      ++v4; /*0x4203f7*/
      if ( v3 >= v2 ) /*0x4203fc*/
        return 1; /*0x4203fc*/
    }
  }
  return 0; /*0x4203fe*/
}


// ==== 0x00420410  _VectorClass_PAVAlphaLightingRemapClass::Release  this=VectorClass  sig=csp ====
char __thiscall AITriggerTypeClass_40_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x42041c*/
  {
    this->IsInitialized = 0; /*0x420426*/
    if ( a3 ) /*0x42042c*/
      v4 = a3; /*0x420442*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42043e*/
    this->IsInitialized = 1; /*0x420446*/
    if ( v4 ) /*0x42044a*/
    {
      if ( this->Items ) /*0x420455*/
      {
        v6 = this->Capacity; /*0x42045c*/
        if ( a2 < v6 ) /*0x420461*/
          v6 = a2; /*0x420463*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x420469*/
          ++i; /*0x42046e*/
        if ( this->IsAllocated ) /*0x42047b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x420486*/
          this->Items = 0; /*0x42048e*/
        }
      }
      this->Items = v4; /*0x420497*/
      this->Capacity = a2; /*0x42049f*/
      this->IsAllocated = a3 == 0; /*0x4204a2*/
      return 1; /*0x4204a8*/
    }
    else
    {
      return 0; /*0x42044f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4204b2*/
    return 1; /*0x4204b8*/
  }
}


// ==== 0x004204C0  _VectorClass_PAVAlphaLightingRemapClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall AITriggerTypeClass_40_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4204cd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4204d3*/
    *(_DWORD *)(this + 4) = 0; /*0x4204db*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4204de*/
  *(_DWORD *)(this + 8) = 0; /*0x4204e1*/
}


// ==== 0x004204F0  _VectorClass_PAVAlphaLightingRemapClass::Read  this=VectorClass  sig=csp ====
int __thiscall AITriggerTypeClass_40_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4204f0*/
    return 0; /*0x4204f8*/
  v3 = *(_DWORD *)(this + 8); /*0x4204fe*/
  result = 0; /*0x420501*/
  if ( v3 <= 0 ) /*0x420505*/
    return -1; /*0x42051c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x42050b*/
  {
    if ( ++result >= v3 ) /*0x42051a*/
      return -1; /*0x42051a*/
  }
  return result; /*0x4204fa*/
}


// ==== 0x00420530  _VectorClass_PAVAlphaLightingRemapClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall AITriggerTypeClass_40_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x420530*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x420545*/
  else
    return 0; /*0x420537*/
}


// ==== 0x00420550  _DynamicVectorClass_PAVAlphaLightingRemapClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall AITriggerTypeClass_40_::sub_420550(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42055c*/
  {
    this->IsInitialized = 0; /*0x420562*/
    if ( a3 ) /*0x420568*/
      v4 = a3; /*0x42057e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42057a*/
    this->IsInitialized = 1; /*0x420582*/
    if ( !v4 ) /*0x420586*/
      return 0; /*0x4205fa*/
    if ( this->Items ) /*0x420588*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x42058f*/
      if ( a2 < v5 ) /*0x420594*/
        v5 = a2; /*0x420596*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x42059c*/
        ++i; /*0x4205a1*/
      if ( this->IsAllocated ) /*0x4205ae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4205b9*/
        this->Items = 0; /*0x4205c1*/
      }
    }
    this->Items = v4; /*0x4205ca*/
    this->DynamicVector_field_0x8 = a2; /*0x4205d2*/
    this->IsAllocated = a3 == 0; /*0x4205d5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4205de*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x4205e1*/
  if ( v7 < this->Items ) /*0x4205e9*/
    this->Items = v7; /*0x4205eb*/
  return 1; /*0x4205ee*/
}


// ==== 0x00420600  _DynamicVectorClass_PAVAlphaLightingRemapClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall AITriggerTypeClass_40_::sub_420600(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x420600*/
  result = 0; /*0x420603*/
  if ( v2 <= 0 ) /*0x420608*/
    return -1; /*0x42061f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x42060e*/
  {
    if ( ++result >= v2 ) /*0x42061d*/
      return -1; /*0x42061d*/
  }
  return result; /*0x420622*/
}


// ==== 0x00420630  _VectorClass_PAVAlphaLightingRemapClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall AITriggerTypeClass_40_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x420633*/
  *Block = &vt_VectorClass_AlphaLightingRemapClass; /*0x420636*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x420640*/
  {
    __3_YAXPAX_Z(v3); /*0x420648*/
    *(Block + 1) = 0; /*0x420650*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42065b*/
  *(Block + 2) = 0; /*0x420661*/
  if ( (a2 & 1) != 0 ) /*0x420668*/
    __3_YAXPAX_Z(Block); /*0x42066b*/
  return (VectorClass *)Block; /*0x420675*/
}


// ==== 0x00420680  _DynamicVectorClass_PAVAlphaLightingRemapClass::Constructor_VectorClass_AlphaLightingRemapClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall AITriggerTypeClass_40_::Constructor_VectorClass_AlphaLightingRemapClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x420683*/
  *Block = &vt_VectorClass_AlphaLightingRemapClass; /*0x420686*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x420690*/
  {
    __3_YAXPAX_Z(v3); /*0x420698*/
    *(Block + 1) = 0; /*0x4206a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4206ab*/
  *(Block + 2) = 0; /*0x4206b1*/
  if ( (a2 & 1) != 0 ) /*0x4206b8*/
    __3_YAXPAX_Z(Block); /*0x4206bb*/
  return (DynamicVector *)Block; /*0x4206c5*/
}


// ==== 0x004206D0  sub_4206D0  this=-  sig=ida-proto ====
int sub_4206D0()
{
  MEMORY[0x88A0A8] = 0; /*0x4206d2*/
  MEMORY[0x88A0AC] = 0; /*0x4206d7*/
  MEMORY[0x88A0B0] = 0; /*0x4206dc*/
  MEMORY[0x88A0B4] = 0; /*0x4206e1*/
  return 0; /*0x4206e6*/
}


// ==== 0x004206F0  sub_4206F0  this=-  sig=ida-proto ====
void sub_4206F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4206fc*/
  MEMORY[0x88A0C0] = Math::Sqrt(v0 + v0); /*0x42070e*/
}


// ==== 0x00420720  sub_420720  this=-  sig=ida-proto ====
void sub_420720()
{
  unk_89A128 = MEMORY[0x88A0C0] / 60.0; /*0x42072c*/
}


// ==== 0x00420740  sub_420740  this=-  sig=ida-proto ====
void sub_420740()
{
  MEMORY[0x88A110] = 1.0 / unk_89A128; /*0x42074c*/
}


// ==== 0x00420760  sub_420760  this=-  sig=ida-proto ====
void sub_420760()
{
  MEMORY[0x88A108] = 0.0174532925199433 * 45.0; /*0x42076c*/
}


// ==== 0x00420780  sub_420780  this=-  sig=ida-proto ====
void sub_420780()
{
  MEMORY[0x88A0C8] = 0.0174532925199433 * 60.0; /*0x42078c*/
}


// ==== 0x004207A0  sub_4207A0  this=-  sig=ida-proto ====
void sub_4207A0()
{
  MEMORY[0x88A0A0] = 0.0174532925199433 * 90.0; /*0x4207ac*/
}


// ==== 0x004207C0  sub_4207C0  this=-  sig=ida-proto ====
__int64 sub_4207C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x88A0A0] - MEMORY[0x88A0C8]); /*0x4207d2*/
  result = Math::RoundToInt(v0 * MEMORY[0x88A0C0] * 0.5); /*0x4207e6*/
  unk_89A130 = result; /*0x4207eb*/
  return result; /*0x4207f0*/
}


// ==== 0x00420800  sub_420800  this=-  sig=ida-proto ====
void sub_420800()
{
  MEMORY[0x88A0D0] = Math::ArcTan((double)unk_89A130 * 0.00390625); /*0x420817*/
}


// ==== 0x00420830  sub_420830  this=-  sig=ida-proto ====
void sub_420830()
{
  MEMORY[0x88A0E8] = Math::ArcTan((double)(2 * unk_89A130) / MEMORY[0x88A0C0]); /*0x420852*/
}


// ==== 0x00420860  sub_420860  this=-  sig=ida-proto ====
__int64 sub_420860()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89A130) + 0.5); /*0x42087b*/
  unk_89A124 = result; /*0x420880*/
  return result; /*0x420886*/
}


// ==== 0x00420890  sub_420890  this=-  sig=ida-proto ====
int sub_420890()
{
  MEMORY[0x88A0B8] = 0; /*0x420892*/
  MEMORY[0x88A0BA] = 0; /*0x420898*/
  return 0; /*0x42089e*/
}


// ==== 0x004208A0  sub_4208A0  this=-  sig=ida-proto ====
int sub_4208A0()
{
  MEMORY[0x88A0D8] = 0; /*0x4208a2*/
  MEMORY[0x88A0DC] = 0; /*0x4208a7*/
  MEMORY[0x88A0E0] = 0; /*0x4208ac*/
  return 0; /*0x4208b1*/
}


// ==== 0x004208C0  sub_4208C0  this=-  sig=ida-proto ====
int sub_4208C0()
{
  unk_89A120 = 0; /*0x4208c5*/
  unk_89A118 = 128; /*0x4208cf*/
  unk_89A11C = 128; /*0x4208d4*/
  return 128; /*0x4208d9*/
}


// ==== 0x004208E0  sub_4208E0  this=-  sig=ida-proto ====
int sub_4208E0()
{
  MEMORY[0x88A0F4] = 0; /*0x4208e7*/
  MEMORY[0x88A0F8] = 0; /*0x4208ec*/
  MEMORY[0x88A0FC] = 1; /*0x4208f1*/
  MEMORY[0x88A0FD] = 0; /*0x4208f8*/
  MEMORY[0x88A0F0] = (int)&off_7E3238; /*0x4208fd*/
  MEMORY[0x88A104] = 10; /*0x420907*/
  MEMORY[0x88A100] = 0; /*0x420911*/
  return atexit(sub_420920); /*0x42091c*/
}


// ==== 0x00420920  sub_420920  this=-  sig=ida-proto ====
void __cdecl sub_420920()
{
  MEMORY[0x88A0F0] = (int)&vt_VectorClass_AlphaShapeClass; /*0x420928*/
  if ( MEMORY[0x88A0F4] && MEMORY[0x88A0FD] ) /*0x42093c*/
  {
    __3_YAXPAX_Z(MEMORY[0x88A0F4]); /*0x42093f*/
    MEMORY[0x88A0F4] = 0; /*0x420947*/
  }
  MEMORY[0x88A0FD] = 0; /*0x42094d*/
  MEMORY[0x88A0F8] = 0; /*0x420953*/
}


// ==== 0x00420960  AlphaShapeClass::CTOR  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::CTOR(int this, ObjectClass *aP1, int a3, AbstractClass *aP3)
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
  *(_DWORD *)(this + 36) = aP1; /*0x420975*/
  *(_BYTE *)(this + 60) = 0; /*0x420978*/
  *(_DWORD *)this = &AlphaShapeClass::`vftable'; /*0x42097c*/
  *(_DWORD *)(this + 4) = &AlphaShapeClass::`vftable'; /*0x420982*/
  *(_DWORD *)(this + 8) = &AlphaShapeClass::`vftable'; /*0x420989*/
  *(_DWORD *)(this + 12) = &vt_AlphaShapeClass; /*0x420990*/
  v5 = *(_DWORD *)((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 136))(aP1) + 172); /*0x42099f*/
  *(_DWORD *)(this + 56) = v5; /*0x4209ad*/
  v6 = *(__int16 *)(v5 + 2); /*0x4209b0*/
  v7 = *(__int16 *)(v5 + 4); /*0x4209b4*/
  *(_DWORD *)(this + 40) = a3; /*0x4209bb*/
  *(_DWORD *)(this + 44) = aP3; /*0x4209be*/
  *(_DWORD *)(this + 48) = v6; /*0x4209c1*/
  *(_DWORD *)(this + 52) = v7; /*0x4209c4*/
  if ( *(int *)&MEMORY[0x87F8E4].__pad_5568[21172] < *(int *)&MEMORY[0x87F8E4].__pad_5568[21164] /*0x4209fc*/
    || (MEMORY[0x87F8E4].__pad_5568[21169] || !*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[21164])
    && *(int *)&MEMORY[0x87F8E4].__pad_5568[21176] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[21156] + 8))(
         &MEMORY[0x87F8E4].__pad_5568[21156],
         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[21164] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[21176],
         0) )
  {
    v8 = (*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[21172])++; /*0x420a09*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[21160] + 4 * v8) = this; /*0x420a18*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10140] < *(int *)&MEMORY[0xB077F8].__pad_579C[10132] /*0x420a52*/
    || (MEMORY[0xB077F8].__pad_579C[10137] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10132])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[10144] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10124] + 8))(
         &MEMORY[0xB077F8].__pad_579C[10124],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10132] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10144],
         0) )
  {
    v9 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10140])++; /*0x420a5f*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10128] + 4 * v9) = this; /*0x420a6e*/
  }
  if ( !unk_89A134 ) /*0x420a78*/
  {
    unk_89A134 = 1; /*0x420a7a*/
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
      MEMORY[0x87F8E4].__pad_5568[i + 21196] = v11; /*0x420ad8*/
    }
  }
  return this; /*0x420ae9*/
}


// ==== 0x00420AF0  AlphaShapeClass::Constructor  this=AlphaShapeClass  sig=csp ====
int __thiscall sub_420AF0(int this)
{
  int v2; // eax
  int v3; // eax
  int i; // esi
  int v5; // edx

  AbstractClass::Constructor((AbstractClass *)this); /*0x420af4*/
  *(_DWORD *)(this + 36) = 0; /*0x420afb*/
  *(_DWORD *)(this + 40) = 0; /*0x420afe*/
  *(_DWORD *)(this + 44) = 0; /*0x420b01*/
  *(_DWORD *)(this + 48) = 0; /*0x420b04*/
  *(_DWORD *)(this + 52) = 0; /*0x420b07*/
  *(_DWORD *)(this + 56) = 0; /*0x420b0a*/
  *(_BYTE *)(this + 60) = 0; /*0x420b0d*/
  *(_DWORD *)this = &AlphaShapeClass::`vftable'; /*0x420b10*/
  *(_DWORD *)(this + 4) = &AlphaShapeClass::`vftable'; /*0x420b16*/
  *(_DWORD *)(this + 8) = &AlphaShapeClass::`vftable'; /*0x420b1d*/
  *(_DWORD *)(this + 12) = &vt_AlphaShapeClass; /*0x420b24*/
  if ( MEMORY[0x88A100] < MEMORY[0x88A0F8] /*0x420b5c*/
    || (MEMORY[0x88A0FD] || !MEMORY[0x88A0F8])
    && MEMORY[0x88A104] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x88A0F0] + 8))(
         &MEMORY[0x88A0F0],
         MEMORY[0x88A0F8] + MEMORY[0x88A104],
         0) )
  {
    v2 = MEMORY[0x88A100]++; /*0x420b69*/
    *((_DWORD *)MEMORY[0x88A0F4] + v2) = this; /*0x420b78*/
  }
  if ( MEMORY[0xB0F730] < MEMORY[0xB0F728] /*0x420baf*/
    || (MEMORY[0xB0F72D] || !MEMORY[0xB0F728])
    && MEMORY[0xB0F734] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F720] + 8))(
         &MEMORY[0xB0F720],
         MEMORY[0xB0F728] + MEMORY[0xB0F734],
         0) )
  {
    v3 = MEMORY[0xB0F730]++; /*0x420bbc*/
    *((_DWORD *)MEMORY[0xB0F724] + v3) = this; /*0x420bcb*/
  }
  if ( unk_89A134 ) /*0x420bd4*/
    return this; /*0x420c4a*/
  unk_89A134 = 1; /*0x420bd7*/
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
    MEMORY[0x88A118][i] = v5; /*0x420c35*/
  }
  return this; /*0x420c47*/
}


// ==== 0x00420D40  AlphaShapeClass::SD_vt03  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x420d46*/
    return -2147467261; /*0x420d48*/
  *a2 = 1648129412; /*0x420d56*/
  a2[1] = 299005159; /*0x420d5e*/
  a2[2] = 1610675640; /*0x420d67*/
  a2[3] = -318126072; /*0x420d70*/
  return 0; /*0x420d4d*/
}


// ==== 0x00420D80  AlphaShapeClass::SD_vt11  this=AlphaShapeClass  sig=csp ====
int AlphaShapeClass::SD_vt11()
{
  return 62; /*0x420d85*/
}


// ==== 0x00420D90  AlphaShapeClass::SD_vt12  this=AlphaShapeClass  sig=csp ====
int AlphaShapeClass::SD_vt12()
{
  return 64; /*0x420d95*/
}


// ==== 0x00420DA0  AlphaShapeClass::SD_vt13  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::SD_vt13(int this, int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x420da9*/
  Power::TimerProcess(*(_DWORD *)(this + 40)); /*0x420db4*/
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x420dbf*/
  Power::TimerProcess(*(_DWORD *)(this + 48)); /*0x420dca*/
  return Power::TimerProcess(*(_DWORD *)(this + 52)); /*0x420dda*/
}


// ==== 0x00420DE0  AlphaShapeClass::SD_vt05  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt05(AbstractClass *aP0, int aP1)
{
  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x420df1*/
  if ( (int)Prefix_0 >= 0 ) /*0x420df5*/
  {
    if ( aP0 ) /*0x420df9*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x420e02*/
      *(_DWORD *)aP0->__pad_0 = &AlphaShapeClass::`vftable'; /*0x420e07*/
      *(_DWORD *)&aP0->__pad_0[4] = &AlphaShapeClass::`vftable'; /*0x420e0d*/
      *(_DWORD *)&aP0->__pad_0[8] = &AlphaShapeClass::`vftable'; /*0x420e14*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_AlphaShapeClass; /*0x420e1b*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x420e2b*/
    aP0[1].abstractFlags = 0; /*0x420e30*/
  }
  return (int)Prefix_0->__pad_0; /*0x420e39*/
}


// ==== 0x00420E40  AlphaShapeClass::SD_vt06  this=AlphaShapeClass  sig=csp ====
int __stdcall AlphaShapeClass::SD_vt06(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x420e4f*/
  return Prefix >= 0 ? 0 : Prefix;
}


// ==== 0x00420E70  AlphaShapeClass::SD_vt10  this=AlphaShapeClass  sig=csp ====
int __thiscall AlphaShapeClass::SD_vt10(int this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x420e70*/
  if ( a2 == *(_DWORD *)(this + 36) ) /*0x420e79*/
    *(_BYTE *)(this + 60) = 1; /*0x420e7b*/
  return result; /*0x420e7f*/
}


// ==== 0x00420E90  AirstrikeClass::UpdateAll  this=AirstrikeClass  sig=csp ====
char sub_420E90()
{
  _DWORD *v0; // eax
  int v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  _BYTE *v5; // edx

  LOBYTE(v0) = unk_89A134; /*0x420e90*/
  if ( !unk_89A134 ) /*0x420e98*/
  {
    unk_89A134 = 1; /*0x420e9a*/
    v1 = 0; /*0x420ea1*/
    while ( 1 ) /*0x420ec6*/
    {
      v2 = v1 % 256 * (v1 / 256); /*0x420ec6*/
      v0 = (_DWORD *)((unsigned int)((unsigned __int64)(2164392969LL * v2) >> 32) >> 31); /*0x420ed6*/
      v3 = v2 / 127; /*0x420ed9*/
      if ( v2 / 127 > 255 ) /*0x420ee1*/
        break; /*0x420ee1*/
      if ( v3 >= 0 ) /*0x420ee5*/
      {
        if ( v3 > 255 ) /*0x420ef1*/
          break; /*0x420ef1*/
      }
      else
      {
        LOBYTE(v3) = 0; /*0x420ee7*/
      }
LABEL_8:
      MEMORY[0x88A118][v1++] = v3; /*0x420ef8*/
      if ( v1 >= 0x10000 ) /*0x420f05*/
        goto LABEL_9; /*0x420f05*/
    }
    LOBYTE(v3) = -1; /*0x420ef3*/
    goto LABEL_8; /*0x420ef3*/
  }
LABEL_9:
  v4 = MEMORY[0x88A100] - 1; /*0x420f07*/
  if ( MEMORY[0x88A100] - 1 >= 0 ) /*0x420f12*/
  {
    v0 = MEMORY[0x88A0F4]; /*0x420f14*/
    do /*0x420f36*/
    {
      v5 = (_BYTE *)v0[v4]; /*0x420f19*/
      if ( v5[60] && v5 ) /*0x420f27*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 32))(1); /*0x420f2d*/
        v0 = MEMORY[0x88A0F4]; /*0x420f30*/
      }
      --v4; /*0x420f35*/
    }
    while ( v4 >= 0 ); /*0x420f36*/
  }
  return (char)v0; /*0x420f38*/
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

  result = MEMORY[0x88A100]; /*0x420f46*/
  v3 = a1; /*0x420f4d*/
  v4 = 0; /*0x420f4f*/
  v54 = a2; /*0x420f51*/
  v59 = a1; /*0x420f57*/
  v44 = 0; /*0x420f5b*/
  if ( MEMORY[0x88A100] > 0 ) /*0x420f5f*/
  {
    while ( 1 ) /*0x420f72*/
    {
      v5 = *((_DWORD *)MEMORY[0x88A0F4] + v4); /*0x420f72*/
      if ( !*(_BYTE *)(v5 + 60) ) /*0x420f75*/
      {
        v50 = *(_DWORD *)(v5 + 40); /*0x420f8b*/
        v51 = *(_DWORD *)(v5 + 44); /*0x420f92*/
        v52 = *(_DWORD *)(v5 + 48); /*0x420f99*/
        v53 = *(_DWORD *)(v5 + 52); /*0x420fa0*/
        v6 = v51 - (unsigned int)MEMORY[0x887324][45].__tail_0; /*0x420fb6*/
        v50 = MEMORY[0x886FA0] + v50 - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x420fca*/
        v51 = MEMORY[0x886FA4] + v6; /*0x420fd2*/
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
          v18 = *((_DWORD *)MEMORY[0x88A0F4] + v4); /*0x421099*/
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
          v47 = v40 + *((_DWORD *)MEMORY[0x87E8A4] + 10) - v23; /*0x421187*/
          v43 = 60 - v56; /*0x421199*/
          v48 = v40 + v21 - v23; /*0x4211a1*/
          v49 = (char *)&unk_7E2B20 + 60 * v16 + v69; /*0x4211b0*/
          SubFile = MixFileClass::GetSubFile(v61, 0); /*0x4211c9*/
          v25 = (_WORD *)StreamClass::ReadAndSeek((int)MEMORY[0x87E8A4], v40, v41 - MEMORY[0x886FA4]); /*0x4211d3*/
          v26 = MEMORY[0x87E8A4]; /*0x4211d8*/
          v27 = (unsigned __int8 *)(v22 + v60 * v21 + SubFile); /*0x4211ed*/
          if ( (unsigned int)&v25[(v37 - v41) * *((_DWORD *)MEMORY[0x87E8A4] + 10) + 2 + v42 + 0x7FFFFFFF * v40] < *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x421211*/
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
                      *v25 = (unsigned __int8)MEMORY[0x88A118][256 * v46 + (unsigned __int16)*v25]; /*0x4212ff*/
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
                    *v25 = (unsigned __int8)MEMORY[0x88A118][256 * v45 + (unsigned __int16)*v25]; /*0x42126a*/
                    v26 = MEMORY[0x87E8A4]; /*0x42126d*/
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
      result = MEMORY[0x88A100]; /*0x42132a*/
      v44 = ++v4; /*0x421332*/
      if ( v4 >= MEMORY[0x88A100] ) /*0x421336*/
        break; /*0x421336*/
      v3 = v59; /*0x420f69*/
    }
  }
  return result; /*0x42133e*/
}


// ==== 0x00421350  ObjectClass::RenderAlphaShapes  this=AbstractClass  sig=csp ====
int __thiscall RenderAlphaShapes(int *this)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edx
  unsigned int v4; // ecx
  signed int *v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  char *v8; // ebp
  char **v9; // edi
  int *FoundationSizeBuilding; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // ecx
  int v15; // ebp
  int v16; // ecx
  int SubFileMixFileClass; // edi
  unsigned __int16 *v18; // eax
  _DWORD *v19; // ecx
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
  signed int v31; // [esp+8h] [ebp-8Ch]
  int v32; // [esp+Ch] [ebp-88h]
  int v33; // [esp+10h] [ebp-84h]
  int v34; // [esp+14h] [ebp-80h]
  unsigned __int8 v35; // [esp+18h] [ebp-7Ch]
  unsigned __int8 v36; // [esp+18h] [ebp-7Ch]
  int i; // [esp+1Ch] [ebp-78h]
  int v38; // [esp+20h] [ebp-74h]
  int v39; // [esp+24h] [ebp-70h] BYREF
  int v40; // [esp+28h] [ebp-6Ch]
  int v41; // [esp+2Ch] [ebp-68h]
  int v42; // [esp+30h] [ebp-64h]
  unsigned int v43; // [esp+34h] [ebp-60h] BYREF
  int v44; // [esp+38h] [ebp-5Ch]
  int v45; // [esp+3Ch] [ebp-58h]
  int v46; // [esp+40h] [ebp-54h]
  int *v47; // [esp+44h] [ebp-50h]
  int v48; // [esp+48h] [ebp-4Ch]
  int v49; // [esp+50h] [ebp-44h]
  signed int v50; // [esp+54h] [ebp-40h]
  int v51; // [esp+58h] [ebp-3Ch]
  int v52; // [esp+70h] [ebp-24h]
  int v53[4]; // [esp+74h] [ebp-20h] BYREF
  int v54[4]; // [esp+84h] [ebp-10h] BYREF

  result = MEMORY[0x88A100]; /*0x421356*/
  v2 = 0; /*0x42135c*/
  v47 = this; /*0x42135e*/
  for ( i = 0; v2 < MEMORY[0x88A100]; i = v2 ) /*0x421368*/
  {
    v3 = (int *)(*((_DWORD *)MEMORY[0x88A0F4] + v2) + 40); /*0x421380*/
    v43 = *v3; /*0x421384*/
    v44 = v3[1]; /*0x42138b*/
    v45 = v3[2]; /*0x421392*/
    v46 = v3[3]; /*0x421399*/
    v4 = v44 - (unsigned int)MEMORY[0x887324][45].__tail_0; /*0x4213af*/
    v43 = MEMORY[0x886FA0] + v43 - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x4213c3*/
    v44 = MEMORY[0x886FA4] + v4; /*0x4213cb*/
    v39 = *v47; /*0x4213d1*/
    v40 = v47[1]; /*0x4213d8*/
    v41 = v47[2]; /*0x4213df*/
    v42 = v47[3]; /*0x4213f1*/
    v5 = ClipRectIntersection(v53, (int *)&v43, &v39, 0, 0); /*0x4213fa*/
    v50 = *v5; /*0x421403*/
    v51 = v5[1]; /*0x42140a*/
    if ( v5[2] > 0 && v5[3] > 0 ) /*0x42141e*/
    {
      v6 = v43; /*0x42142e*/
      v49 = v44; /*0x421432*/
      v7 = *((_DWORD *)MEMORY[0x88A0F4] + v2); /*0x421436*/
      v9 = *(char ***)(v7 + 56); /*0x42143c*/
      if ( !v9 ) /*0x421441*/
      {
        v8 = (char *)MEMORY[0x88A0F4] + 4 * v2; /*0x421439*/
        *(_DWORD *)(*(_DWORD *)v8 + 56) = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 36) + 136))(*(_DWORD *)(v7 + 36)) /*0x421459*/
                                                    + 172);
        v9 = *(char ***)(*((_DWORD *)MEMORY[0x88A0F4] + v2) + 56); /*0x421464*/
      }
      FoundationSizeBuilding = Building::GetFoundationSize(v54, 0); /*0x421478*/
      v11 = *FoundationSizeBuilding; /*0x42147e*/
      v33 = v51; /*0x421480*/
      v12 = FoundationSizeBuilding[1]; /*0x421484*/
      v13 = FoundationSizeBuilding[2]; /*0x421487*/
      v52 = FoundationSizeBuilding[3]; /*0x42148d*/
      if ( v51 <= v12 + v49 ) /*0x421499*/
        v33 = v12 + v49; /*0x42149b*/
      v48 = v33 - v49 - v12; /*0x4214ab*/
      v14 = v52 + v49 + v12; /*0x4214b9*/
      v28 = v42 + v40; /*0x4214c3*/
      if ( v42 + v40 >= v14 ) /*0x4214c7*/
        v28 = v14; /*0x4214c9*/
      v31 = v50; /*0x4214d6*/
      if ( v50 <= (int)(v6 + v11) ) /*0x4214da*/
        v31 = v6 + v11; /*0x4214dc*/
      v15 = v31 - v6 - v11; /*0x4214ef*/
      v16 = v39 + v41; /*0x4214f9*/
      if ( v39 + v41 >= (int)(v11 + v6 + v13) ) /*0x421501*/
      {
        v32 = v11 + v6 + v13; /*0x421509*/
        v16 = v32; /*0x42150d*/
      }
      else
      {
        v32 = v39 + v41; /*0x421503*/
      }
      v34 = v31 + v13 - v16; /*0x42152c*/
      v38 = v31 + *((_DWORD *)MEMORY[0x87E8A4] + 10) - v16; /*0x421530*/
      SubFileMixFileClass = MixFileClass::GetSubFile(v9, 0); /*0x421549*/
      v18 = (unsigned __int16 *)StreamClass::ReadAndSeek( /*0x42155d*/
                                  (int)MEMORY[0x87E8A4],
                                  v31 - MEMORY[0x886FA0],
                                  v33 - MEMORY[0x886FA4]);
      v19 = MEMORY[0x87E8A4]; /*0x421562*/
      v20 = (unsigned __int8 *)(v15 + v48 * v13 + SubFileMixFileClass); /*0x421577*/
      if ( (unsigned int)&v18[(v28 - v33) * *((_DWORD *)MEMORY[0x87E8A4] + 10) + 2 + v32 + 0x7FFFFFFF * v31] < *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x42159b*/
      {
        if ( v33 < v28 ) /*0x421630*/
        {
          v23 = v32; /*0x421632*/
          v30 = v28 - v33; /*0x42163e*/
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
                *(v18 - 1) = (unsigned __int8)MEMORY[0x88A118][256 * v36 + v26]; /*0x421672*/
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
      else if ( v33 < v28 ) /*0x4215ab*/
      {
        v21 = v32; /*0x4215b1*/
        v29 = v28 - v33; /*0x4215bd*/
        do /*0x421622*/
        {
          if ( v31 < v21 ) /*0x4215c7*/
          {
            v22 = v21 - v31; /*0x4215c9*/
            do /*0x421604*/
            {
              ++v18; /*0x4215cd*/
              v35 = *v20++; /*0x4215d0*/
              *(v18 - 1) = (unsigned __int8)MEMORY[0x88A118][256 * v35 + *(v18 - 1)]; /*0x4215f1*/
              v19 = MEMORY[0x87E8A4]; /*0x4215f5*/
              if ( (unsigned int)v18 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4215fe*/
                v18 = (unsigned __int16 *)((char *)v18 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x421600*/
              --v22; /*0x421603*/
            }
            while ( v22 ); /*0x421604*/
            v21 = v32; /*0x421606*/
          }
          v18 += v38; /*0x42160d*/
          v20 += v34; /*0x421610*/
          if ( (unsigned int)v18 >= v19[7] ) /*0x421614*/
            v18 = (unsigned __int16 *)((char *)v18 - v19[8]); /*0x421616*/
          --v29; /*0x42161e*/
        }
        while ( v29 ); /*0x421622*/
      }
      v2 = i; /*0x421690*/
    }
    result = MEMORY[0x88A100]; /*0x421694*/
    ++v2; /*0x421699*/
  }
  return result; /*0x4216a9*/
}


// ==== 0x00421730  AlphaShapeClass::SDDTOR  this=AlphaShapeClass  sig=csp ====
AlphaShapeClass *__thiscall AlphaShapeClass::SDDTOR(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &AlphaShapeClass::`vftable'; /*0x42173d*/
  *(Block + 1) = &AlphaShapeClass::`vftable'; /*0x421743*/
  *(Block + 2) = &AlphaShapeClass::`vftable'; /*0x42174a*/
  *(Block + 3) = &vt_AlphaShapeClass; /*0x421751*/
  v6 = Block; /*0x42175f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0x88A0F0] + 16))(&MEMORY[0x88A0F0], &v6); /*0x421763*/
  if ( v3 != -1 && v3 < MEMORY[0x88A100] && v3 < --MEMORY[0x88A100] ) /*0x42177e*/
  {
    do /*0x421796*/
    {
      ++v3; /*0x421786*/
      *((_DWORD *)MEMORY[0x88A0F4] + v3 - 1) = *((_DWORD *)MEMORY[0x88A0F4] + v3); /*0x42178a*/
    }
    while ( v3 < MEMORY[0x88A100] ); /*0x421796*/
  }
  v6 = Block; /*0x4217a8*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0F720] + 16))(&MEMORY[0xB0F720], &v6); /*0x4217ac*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F730] && v4 < --MEMORY[0xB0F730] ) /*0x4217c7*/
  {
    do /*0x4217df*/
    {
      ++v4; /*0x4217cf*/
      *((_DWORD *)MEMORY[0xB0F724] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F724] + v4); /*0x4217d3*/
    }
    while ( v4 < MEMORY[0xB0F730] ); /*0x4217df*/
  }
  AbstractClass::DTOR(Block); /*0x4217e3*/
  if ( (a2 & 1) != 0 ) /*0x4217ed*/
    OperatorDelete(Block); /*0x4217f0*/
  return (AlphaShapeClass *)Block; /*0x4217fa*/
}


// ==== 0x00421800  VectorClass_ptr_AlphaShapeClass::Destroy  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
void __thiscall VectorClass_ptr_AlphaShapeClass::sub_421800(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x421806*/
  *(_DWORD *)(this + 16) = 0; /*0x421809*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x421810*/
  {
    __3_YAXPAX_Z(v2); /*0x421816*/
    *(_DWORD *)(this + 4) = 0; /*0x42181e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x421821*/
  *(_DWORD *)(this + 8) = 0; /*0x421824*/
}


// ==== 0x00421830  VectorClass_ptr_AlphaShapeClass::GetItemIndex  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AlphaShapeClass::sub_421830(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x421830*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x421845*/
  else
    return 0; /*0x421837*/
}


// ==== 0x00421850  _VectorClass_PAVAlphaShapeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x42185a*/
}


// ==== 0x00421860  _VectorClass_PAVAlphaShapeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x421862*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x42186d*/
  {
    v3 = 0; /*0x42186f*/
    if ( v2 <= 0 ) /*0x421873*/
      return 1; /*0x421893*/
    v4 = (_DWORD *)this->Items; /*0x421875*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42187b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x421884*/
    {
      ++v3; /*0x421886*/
      ++v4; /*0x421887*/
      if ( v3 >= v2 ) /*0x42188c*/
        return 1; /*0x42188c*/
    }
  }
  return 0; /*0x42188e*/
}


// ==== 0x004218A0  _VectorClass_PAVAlphaShapeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4218ac*/
  {
    this->IsInitialized = 0; /*0x4218b6*/
    if ( a3 ) /*0x4218bc*/
      v4 = a3; /*0x4218d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4218ce*/
    this->IsInitialized = 1; /*0x4218d6*/
    if ( v4 ) /*0x4218da*/
    {
      if ( this->Items ) /*0x4218e5*/
      {
        v6 = this->Capacity; /*0x4218ec*/
        if ( a2 < v6 ) /*0x4218f1*/
          v6 = a2; /*0x4218f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4218f9*/
          ++i; /*0x4218fe*/
        if ( this->IsAllocated ) /*0x42190b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x421916*/
          this->Items = 0; /*0x42191e*/
        }
      }
      this->Items = v4; /*0x421927*/
      this->Capacity = a2; /*0x42192f*/
      this->IsAllocated = a3 == 0; /*0x421932*/
      return 1; /*0x421938*/
    }
    else
    {
      return 0; /*0x4218df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x421942*/
    return 1; /*0x421948*/
  }
}


// ==== 0x00421950  _VectorClass_PAVAlphaShapeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AlphaShapeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x42195d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x421963*/
    *(_DWORD *)(this + 4) = 0; /*0x42196b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42196e*/
  *(_DWORD *)(this + 8) = 0; /*0x421971*/
}


// ==== 0x00421980  _VectorClass_PAVAlphaShapeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x421980*/
    return 0; /*0x421988*/
  v3 = *(_DWORD *)(this + 8); /*0x42198e*/
  result = 0; /*0x421991*/
  if ( v3 <= 0 ) /*0x421995*/
    return -1; /*0x4219ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x42199b*/
  {
    if ( ++result >= v3 ) /*0x4219aa*/
      return -1; /*0x4219aa*/
  }
  return result; /*0x42198a*/
}


// ==== 0x004219C0  _VectorClass_PAVAlphaShapeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AlphaShapeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4219c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4219d5*/
  else
    return 0; /*0x4219c7*/
}


// ==== 0x004219E0  VectorClass_ptr_AlphaShapeClass::SetCapacity  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
char __thiscall VectorClass_ptr_AlphaShapeClass::sub_4219E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4219ec*/
  {
    this->IsInitialized = 0; /*0x4219f2*/
    if ( a3 ) /*0x4219f8*/
      v4 = a3; /*0x421a0e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x421a0a*/
    this->IsInitialized = 1; /*0x421a12*/
    if ( !v4 ) /*0x421a16*/
      return 0; /*0x421a8a*/
    if ( this->Items ) /*0x421a18*/
    {
      v5 = this->Capacity; /*0x421a1f*/
      if ( a2 < v5 ) /*0x421a24*/
        v5 = a2; /*0x421a26*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x421a2c*/
        ++i; /*0x421a31*/
      if ( this->IsAllocated ) /*0x421a3e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x421a49*/
        this->Items = 0; /*0x421a51*/
      }
    }
    this->Items = v4; /*0x421a5a*/
    this->Capacity = a2; /*0x421a62*/
    this->IsAllocated = a3 == 0; /*0x421a65*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x421a6e*/
  }
  v7 = this->Capacity; /*0x421a71*/
  if ( v7 < this->Items ) /*0x421a79*/
    this->Items = v7; /*0x421a7b*/
  return 1; /*0x421a7e*/
}


// ==== 0x00421A90  VectorClass_ptr_AlphaShapeClass::FindItemIndex  this=VectorClass_ptr_AlphaShapeClass  sig=csp ====
int __thiscall VectorClass_ptr_AlphaShapeClass::sub_421A90(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x421a90*/
  result = 0; /*0x421a93*/
  if ( v2 <= 0 ) /*0x421a98*/
    return -1; /*0x421aaf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x421a9e*/
  {
    if ( ++result >= v2 ) /*0x421aad*/
      return -1; /*0x421aad*/
  }
  return result; /*0x421ab2*/
}


// ==== 0x00421AC0  _VectorClass_PAVAlphaShapeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_AlphaShapeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x421ac3*/
  *Block = &vt_VectorClass_AlphaShapeClass; /*0x421ac6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x421ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x421ad8*/
    *(Block + 1) = 0; /*0x421ae0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x421aeb*/
  *(Block + 2) = 0; /*0x421af1*/
  if ( (a2 & 1) != 0 ) /*0x421af8*/
    __3_YAXPAX_Z(Block); /*0x421afb*/
  return (VectorClass *)Block; /*0x421b05*/
}


// ==== 0x00421B10  VectorClass_ptr_AlphaShapeClass::loc_421B10  this=VectorClass_ptr_AlphaShapeClass  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_AlphaShapeClass::loc_421B10(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x421b13*/
  *Block = &vt_VectorClass_AlphaShapeClass; /*0x421b16*/
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
  unk_89A140 = 0; /*0x421c92*/
  unk_89A144 = 0; /*0x421c97*/
  unk_89A148 = 0; /*0x421c9c*/
  unk_89A14C = 0; /*0x421ca1*/
  return 0; /*0x421ca6*/
}


// ==== 0x00421CB0  sub_421CB0  this=-  sig=ida-proto ====
void sub_421CB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x421cbc*/
  unk_89A158 = Math::Sqrt(v0 + v0); /*0x421cce*/
}


// ==== 0x00421CE0  sub_421CE0  this=-  sig=ida-proto ====
void sub_421CE0()
{
  unk_89A1B8 = unk_89A158 / 60.0; /*0x421cec*/
}


// ==== 0x00421D00  sub_421D00  this=-  sig=ida-proto ====
void sub_421D00()
{
  unk_89A1A0 = 1.0 / unk_89A1B8; /*0x421d0c*/
}


// ==== 0x00421D20  sub_421D20  this=-  sig=ida-proto ====
void sub_421D20()
{
  unk_89A198 = 0.0174532925199433 * 45.0; /*0x421d2c*/
}


// ==== 0x00421D40  sub_421D40  this=-  sig=ida-proto ====
void sub_421D40()
{
  unk_89A168 = 0.0174532925199433 * 60.0; /*0x421d4c*/
}


// ==== 0x00421D60  sub_421D60  this=-  sig=ida-proto ====
void sub_421D60()
{
  unk_89A138 = 0.0174532925199433 * 90.0; /*0x421d6c*/
}


// ==== 0x00421D80  sub_421D80  this=-  sig=ida-proto ====
__int64 sub_421D80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89A138 - unk_89A168); /*0x421d92*/
  result = Math::RoundToInt(v0 * unk_89A158 * 0.5); /*0x421da6*/
  unk_89A1C0 = result; /*0x421dab*/
  return result; /*0x421db0*/
}


// ==== 0x00421DC0  sub_421DC0  this=-  sig=ida-proto ====
void sub_421DC0()
{
  unk_89A170 = Math::ArcTan((double)unk_89A1C0 * 0.00390625); /*0x421dd7*/
}


// ==== 0x00421DF0  sub_421DF0  this=-  sig=ida-proto ====
void sub_421DF0()
{
  unk_89A188 = Math::ArcTan((double)(2 * unk_89A1C0) / unk_89A158); /*0x421e12*/
}


// ==== 0x00421E20  sub_421E20  this=-  sig=ida-proto ====
__int64 sub_421E20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89A1C0) + 0.5); /*0x421e3b*/
  unk_89A1B4 = result; /*0x421e40*/
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
  unk_89A178 = 0; /*0x421e62*/
  qword_89A17C = 0; /*0x421e67*/
  MEMORY[0x89A180] = 0; /*0x421e6c*/
  return 0; /*0x421e71*/
}


// ==== 0x00421E80  sub_421E80  this=-  sig=ida-proto ====
int sub_421E80()
{
  unk_89A1B0 = 0; /*0x421e85*/
  unk_89A1A8 = 128; /*0x421e8f*/
  unk_89A1AC = 128; /*0x421e94*/
  return 128; /*0x421e99*/
}


// ==== 0x00421EA0  AnimClass::ctor  this=AnimClass  sig=csp ====
void **__thiscall AnimClass::ctor(void **this, void *a2, int *a3, void *a4, int a5, void *a6, void *a7, char a8)
{
  void *v9; // eax
  void *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
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
  _DWORD *v32; // eax
  int v33; // ecx
  int v34; // eax
  int *v35; // eax
  int v36; // edx
  _DWORD *v37; // edi
  _DWORD *v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int *v42; // eax
  int v43; // ebx
  int v44; // eax
  int v45; // edi
  double v46; // st7
  double v47; // st6
  char v48; // cl
  char v49; // al
  int v50; // [esp+Ch] [ebp-54h]
  float v51; // [esp+Ch] [ebp-54h]
  int v52; // [esp+Ch] [ebp-54h]
  int v53; // [esp+10h] [ebp-50h]
  _DWORD *Coords; // [esp+10h] [ebp-50h]
  int v55; // [esp+10h] [ebp-50h]
  float v56; // [esp+10h] [ebp-50h]
  int v57; // [esp+14h] [ebp-4Ch]
  float v58; // [esp+18h] [ebp-48h] BYREF
  float v59; // [esp+1Ch] [ebp-44h]
  float v60; // [esp+20h] [ebp-40h]
  int v61; // [esp+24h] [ebp-3Ch] BYREF
  int v62; // [esp+28h] [ebp-38h]
  int v63; // [esp+2Ch] [ebp-34h]
  int v64; // [esp+30h] [ebp-30h] BYREF
  float v65; // [esp+34h] [ebp-2Ch]
  float v66; // [esp+38h] [ebp-28h]
  _DWORD v67[3]; // [esp+3Ch] [ebp-24h] BYREF
  _BYTE out[12]; // [esp+48h] [ebp-18h] BYREF
  _BYTE v69[12]; // [esp+54h] [ebp-Ch] BYREF

  ObjectClass::ctor(this); /*0x421eae*/
  this->q02B = 0; /*0x421eb8*/
  this->q0B0 = 0; /*0x421ebe*/
  v9 = (void *)dword_A8ED54[12]; /*0x421ec4*/
  this->AnimClass_field_0xBC = 0; /*0x421ec9*/
  this->AnimClass_field_0xB4 = v9; /*0x421ecf*/
  this->AnimClass_field_0x30 = 0; /*0x421ed5*/
  this->q031 = (void *)1; /*0x421edb*/
  this->AnimClass_field_0xC8 = a2; /*0x421ee5*/
  this->q033 = 0; /*0x421eee*/
  this->attachedTag = (void *)-1; /*0x421ef4*/
  this->AnimClass_field_0xD4 = 0; /*0x421efa*/
  this->q0D8 = (void *)-1; /*0x421f00*/
  this->AnimClass_field_0xFC = (void *)1000; /*0x421f06*/
  this->AnimClass_field_0x40 = 0; /*0x421f10*/
  this->AnimClass_field_0x104 = 0; /*0x421f16*/
  this->q042 = (void *)MEMORY[0x87F7E8][27236]; /*0x421f32*/
  this->q043 = (void *)MEMORY[0x87F7E8][27237]; /*0x421f3c*/
  v10 = (void *)MEMORY[0x87F7E8][27238]; /*0x421f3f*/
  this->q118 = 0; /*0x421f44*/
  this->q119 = 0; /*0x421f4a*/
  this->q044 = v10; /*0x421f50*/
  this->AnimClass_field_0x114 = 0; /*0x421f53*/
  this->q11A = 0; /*0x421f59*/
  this->q11B = 0; /*0x421f5f*/
  this->AnimClass_field_0x11C = 0; /*0x421f65*/
  this->q120 = 0; /*0x421f6b*/
  this->q04A = 0; /*0x421f71*/
  this->q04C = 0; /*0x421f73*/
  this->q138 = 0; /*0x421f76*/
  this->q12C = 0; /*0x421f7d*/
  this->q134 = 0; /*0x421f80*/
  this->q04F = 0; /*0x421f83*/
  Int4::Set(this + 86, 0, 0, 0, 1065353216); /*0x421f86*/
  Int4::Set(this + 90, 0, 0, 0, 1065353216); /*0x421f96*/
  this->AnimClass_field_0x188 = 0; /*0x421fa4*/
  this->q178 = 0; /*0x421faa*/
  this->q179 = 0; /*0x421fb0*/
  this->AnimClass_field_0x17C = 0; /*0x421fb6*/
  this->q060 = 0; /*0x421fbc*/
  this->AnimClass_field_0x184 = a4; /*0x421fc2*/
  this->q18C = (void *)1072693248; /*0x421fc8*/
  this->AnimClass_field_0x64 = a6; /*0x421fd2*/
  this->q194 = 0; /*0x421fd8*/
  this->q195 = 1; /*0x421fde*/
  this->q196 = 0; /*0x421fe5*/
  this->q197 = 0; /*0x421feb*/
  this->q198 = 0; /*0x421ff1*/
  this->q199 = 0; /*0x421ff7*/
  this->q19A = 0; /*0x421ffd*/
  this->q19B = 0; /*0x422003*/
  this->q19C = 1; /*0x422009*/
  this->q19D = 0; /*0x422010*/
  this->q19E = 0; /*0x422016*/
  *this = &AnimClass::`vftable'; /*0x42201c*/
  this->vtable2 = &AnimClass::`vftable'; /*0x422022*/
  this->vtable3 = &AnimClass::`vftable'; /*0x422028*/
  this->vtable4 = &off_7E3328; /*0x422030*/
  this->PaletteName = 0; /*0x422037*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x42203d*/
  AudioController::Init(this + 104); /*0x422048*/
  AudioController::Init(this + 109); /*0x422053*/
  if ( MEMORY[0x87F7E8][539764] < MEMORY[0x87F7E8][539762] /*0x42208b*/
    || (BYTE1(MEMORY[0x87F7E8][539763]) || !MEMORY[0x87F7E8][539762])
    && MEMORY[0x87F7E8][539765] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][539760] + 8))(
         &MEMORY[0x87F7E8][539760],
         MEMORY[0x87F7E8][539765] + MEMORY[0x87F7E8][539762],
         0) )
  {
    v11 = MEMORY[0x87F7E8][539764]++; /*0x422098*/
    *(_DWORD *)(MEMORY[0x87F7E8][539761] + 4 * v11) = this; /*0x4220a7*/
  }
  v12 = (int)this->AnimClass_field_0xC8; /*0x4220aa*/
  this->q090 = 1; /*0x4220b0*/
  if ( v12 ) /*0x4220b9*/
  {
    this->AnimClass_field_0x104 = *(void **)(v12 + 832); /*0x422137*/
    v17 = this->AnimClass_field_0xC8; /*0x42213d*/
    if ( v17[176] == -1 ) /*0x42214a*/
    {
      *((_DWORD *)this->AnimClass_field_0xC8 + 176) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v17 + 156))(v17) + 6); /*0x42215e*/
      v18 = (int)this->AnimClass_field_0xC8; /*0x422164*/
      if ( *(_BYTE *)(v18 + 882) ) /*0x42216a*/
        *(int *)(v18 + 704) /= 2; /*0x42217d*/
    }
    v19 = (int)this->AnimClass_field_0xC8; /*0x422183*/
    if ( *(_DWORD *)(v19 + 700) == -1 ) /*0x422190*/
      *(_DWORD *)(v19 + 700) = *(_DWORD *)(v19 + 704); /*0x422198*/
    if ( a7 ) /*0x4221a3*/
      this->AnimClass_field_0x40 = a7; /*0x4221a5*/
    else
      this->AnimClass_field_0x40 = (void *)*((_DWORD *)this->AnimClass_field_0xC8 + 210); /*0x4221b9*/
    v20 = this->AnimClass_field_0xC8; /*0x4221bf*/
    v21 = v20[185]; /*0x4221c5*/
    ProductionTimeMult = (char *)v20[172]; /*0x4221cb*/
    if ( v21 || v20[186] ) /*0x4221d5*/
    {
      v23 = v20[186]; /*0x4221dd*/
      if ( v21 <= v23 ) /*0x4221e5*/
        ProductionTimeMult = (char *)Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), v21, v23); /*0x4221f5*/
    }
    if ( *((_BYTE *)this->AnimClass_field_0xC8 + 866) ) /*0x422200*/
      ProductionTimeMult = Rules::GetProductionTimeMult(&MEMORY[0x87F7E8][539870], (int)ProductionTimeMult); /*0x42220e*/
    this->AnimClass_field_0xB4 = (void *)dword_A8ED54[12]; /*0x42221f*/
    this->AnimClass_field_0xB8 = (void *)v67[1]; /*0x422241*/
    this->AnimClass_field_0xBC = ProductionTimeMult; /*0x422244*/
    this->AnimClass_field_0x30 = ProductionTimeMult; /*0x422247*/
    v24 = (int)this->AnimClass_field_0xC8; /*0x42224d*/
    this->q02B = 0; /*0x422253*/
    v25 = *(_DWORD *)(v24 + 868); /*0x422259*/
    if ( v25 == 3 || v25 == 4 ) /*0x422267*/
      ObjectClass::SetAnim(this, *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1972)); /*0x422281*/
    else
      ObjectClass::SetZ((#374 *)this); /*0x42226c*/
    if ( a8 ) /*0x422289*/
      this->q120 = 1; /*0x42228b*/
    v26 = (int)this->AnimClass_field_0xC8; /*0x422292*/
    if ( *(_BYTE *)(v26 + 881) || this->q120 ) /*0x4222a0*/
    {
      this->q02B = (void *)(*(_DWORD *)(v26 + 700) - 1); /*0x4222af*/
      this->q031 = (void *)-(int)this->q031; /*0x4222bd*/
    }
    v27 = (int)this->AnimClass_field_0xC8; /*0x4222c3*/
    if ( *(_BYTE *)(v27 + 858) || *(_BYTE *)(v27 + 854) ) /*0x4222d1*/
    {
      this->q194 = 1; /*0x4222ea*/
      if ( *(_BYTE *)(v27 + 854) ) /*0x4222f1*/
      {
        v50 = Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536)); /*0x422310*/
        v53 = Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536)); /*0x422324*/
        v28 = *((double *)this->AnimClass_field_0xC8 + 99); /*0x42232e*/
        v29 = Math::RoundToInt(v28); /*0x42233c*/
        v51 = (double)((int)abs32(v50) % v29) - *((double *)this->AnimClass_field_0xC8 + 101); /*0x422375*/
        v58 = (double)((int)abs32(v53) % v29) - *((double *)this->AnimClass_field_0xC8 + 101); /*0x422387*/
        v59 = v51; /*0x42238b*/
        v60 = v28; /*0x42238f*/
        v30 = -v51; /*0x422397*/
        if ( v58 < v30 ) /*0x4223a4*/
        {
          v58 = -v58; /*0x4223ac*/
          v59 = v30; /*0x4223b0*/
        }
        v31 = (double)(int)(70 - abs32(Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536)) % 20)); /*0x4223e6*/
        v64 = Math::RoundToInt(v31); /*0x4223fc*/
        LODWORD(v65) = Math::RoundToInt(v31); /*0x422413*/
        LODWORD(v66) = Math::RoundToInt((double)a3[2] - v31 * v60); /*0x422427*/
        ObjectClass::Deploy((#374 *)this); /*0x422433*/
        if ( this->q033 ) /*0x422438*/
        {
          Coords = (_DWORD *)ObjectClass::GetCoords((#374 *)this); /*0x422452*/
          v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->q033 + 72))(this->q033, v69); /*0x42245d*/
          v67[0] = *v32 + *Coords; /*0x422468*/
          v33 = Coords[1] + v32[1]; /*0x422472*/
          v34 = Coords[2] + v32[2]; /*0x422475*/
          v61 = v67[0]; /*0x42247c*/
          v62 = v33; /*0x422480*/
        }
        else
        {
          v35 = (int *)ObjectClass::GetCoords((#374 *)this); /*0x42248d*/
          v61 = *v35; /*0x422494*/
          v62 = v35[1]; /*0x42249b*/
          v34 = v35[2]; /*0x42249f*/
        }
        v36 = (int)this->AnimClass_field_0xC8; /*0x4224a2*/
        v63 = v34; /*0x4224ae*/
        AnimClass::InitRotation( /*0x4224d4*/
          this + 74,
          &v61,
          *(_DWORD *)(v36 + 784),
          *(_DWORD *)(v36 + 788),
          1610612736,
          1073112678,
          0,
          0,
          &v58,
          0.0);
      }
      else
      {
        ObjectClass::Deploy((#374 *)this); /*0x4224e0*/
        if ( this->q033 ) /*0x4224e5*/
        {
          v37 = (_DWORD *)ObjectClass::GetCoords((#374 *)this); /*0x4224ff*/
          v38 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->q033 + 72))(this->q033, out); /*0x422508*/
          v39 = *v37 + *v38; /*0x422512*/
          v40 = v37[1] + v38[1]; /*0x42251a*/
          v41 = v37[2] + v38[2]; /*0x42251f*/
        }
        else
        {
          v42 = (int *)ObjectClass::GetCoords((#374 *)this); /*0x42252a*/
          v39 = *v42; /*0x42252f*/
          v40 = v42[1]; /*0x422531*/
          v41 = v42[2]; /*0x422534*/
        }
        v62 = v40; /*0x422537*/
        v61 = v39; /*0x422544*/
        v63 = v41 + 10; /*0x42254e*/
        v43 = Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536)); /*0x422557*/
        v55 = Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536)); /*0x42256f*/
        v44 = Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536)); /*0x422579*/
        v45 = (int)this->AnimClass_field_0xC8; /*0x42257e*/
        v52 = v44; /*0x422584*/
        v57 = Math::RoundToInt(*(double *)(v45 + 808) + *(double *)(v45 + 808)); /*0x42259e*/
        v46 = (double)((int)abs32(v55) % v57) - *(double *)(v45 + 808); /*0x4225b2*/
        v56 = (double)((int)abs32(v43) % (int)Math::RoundToInt(v46)) + *(double *)(v45 + 792); /*0x4225f8*/
        v47 = (double)((int)abs32(v52) % v57) - *(double *)(v45 + 808); /*0x422621*/
        v66 = v56; /*0x422627*/
        *(float *)&v64 = v47; /*0x42262b*/
        v65 = v46; /*0x42262f*/
        AnimClass::InitRotation( /*0x422648*/
          this + 74,
          &v61,
          *(_DWORD *)(v45 + 784),
          *(_DWORD *)(v45 + 788),
          1610612736,
          1073112678,
          0,
          0,
          &v64,
          0.0);
      }
    }
    else
    {
      ObjectClass::Deploy((#374 *)this); /*0x4222e0*/
    }
    if ( this->AnimClass_field_0xC8 == *(void **)(MEMORY[0x87F7E8][7806] + 5244) ) /*0x42265e*/
    {
      MapClass::RevealArea1( /*0x422689*/
        MEMORY[0x87F7E8],
        a3,
        *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5308) / 256,
        (#375 *)MEMORY[0x87F7E8][528729],
        0,
        0,
        0,
        1,
        0);
      MapClass::RevealArea1( /*0x4226ba*/
        MEMORY[0x87F7E8],
        a3,
        *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5308) / 256,
        (#375 *)MEMORY[0x87F7E8][528729],
        0,
        0,
        0,
        1,
        1);
    }
    v48 = a5; /*0x4226bf*/
    if ( a5 <= 1 ) /*0x4226c5*/
      v48 = 1; /*0x4226c7*/
    v49 = v48 * *((_BYTE *)this->AnimClass_field_0xC8 + 708); /*0x4226d8*/
    this->q195 = v49; /*0x4226dc*/
    if ( (unsigned __int8)v49 <= 1u ) /*0x4226e2*/
      v49 = 1; /*0x4226eb*/
    this->q195 = v49; /*0x4226f0*/
    if ( !this->AnimClass_field_0x184 ) /*0x4226f6*/
      ProductionCompletionCallback((#361 *)this); /*0x422702*/
    return this; /*0x422707*/
  }
  else
  {
    v13 = (int)this->q033; /*0x4220bb*/
    if ( v13 ) /*0x4220c3*/
      (*(void (__thiscall **)(int, void **))(*(_DWORD *)v13 + 96))(v13, this); /*0x4220c8*/
    BuildingClass::AimTurret(this, 0); /*0x4220ce*/
    Mixer::ReleaseChannel((int **)this + 104); /*0x4220d9*/
    if ( !this->q198 ) /*0x4220de*/
    {
      v14 = (int)this->AnimClass_field_0xC8; /*0x4220e6*/
      if ( v14 ) /*0x4220ee*/
      {
        if ( *(_DWORD *)(v14 + 764) != -1 ) /*0x4220f7*/
        {
          v15 = (*((int (__thiscall **)(void **, _DWORD *))*this + 18))(this, v67); /*0x422109*/
          StartAudioControllerAt(*((_DWORD *)this->AnimClass_field_0xC8 + 191), v15, (int)(this + 109)); /*0x42211a*/
        }
      }
    }
    ObjectClass::Destroy((#374 *)this); /*0x422121*/
    return this; /*0x422126*/
  }
}


// ==== 0x00422720  AnimClass::SimpleCtor  this=AnimClass  sig=csp ====
int __thiscall AnimClass_SimpleCtor(int this)
{
  wchar_t *v2; // eax
  int v3; // eax

  ObjectClass::ctor((_DWORD *)this); /*0x422724*/
  *(_DWORD *)(this + 172) = 0; /*0x422730*/
  *(_BYTE *)(this + 176) = 0; /*0x422736*/
  v2 = MEMORY[0xA8ED84]; /*0x42273c*/
  *(_DWORD *)(this + 188) = 0; /*0x422741*/
  *(_DWORD *)(this + 180) = v2; /*0x422747*/
  *(_DWORD *)(this + 192) = 0; /*0x422750*/
  *(_DWORD *)(this + 196) = 1; /*0x422756*/
  *(_DWORD *)(this + 200) = 0; /*0x422761*/
  *(_DWORD *)(this + 204) = 0; /*0x422767*/
  *(_DWORD *)(this + 208) = -1; /*0x42276d*/
  *(_DWORD *)(this + 212) = 0; /*0x422773*/
  *(_DWORD *)(this + 216) = -1; /*0x422779*/
  *(_DWORD *)(this + 252) = 1000; /*0x42277f*/
  *(_DWORD *)(this + 256) = 0; /*0x422789*/
  *(_DWORD *)(this + 260) = 0; /*0x42278f*/
  *(_BYTE *)(this + 280) = 0; /*0x422795*/
  *(_BYTE *)(this + 281) = 0; /*0x42279b*/
  *(_BYTE *)(this + 282) = 0; /*0x4227a1*/
  *(_BYTE *)(this + 283) = 0; /*0x4227a7*/
  *(_DWORD *)(this + 284) = 0; /*0x4227ad*/
  *(_BYTE *)(this + 288) = 0; /*0x4227b3*/
  *(_DWORD *)(this + 296) = 0; /*0x4227ba*/
  *(_DWORD *)(this + 304) = 0; /*0x4227c0*/
  *(_DWORD *)(this + 312) = 0; /*0x4227c6*/
  *(_DWORD *)(this + 300) = 0; /*0x4227d3*/
  *(_DWORD *)(this + 308) = 0; /*0x4227d9*/
  *(_DWORD *)(this + 316) = 0; /*0x4227df*/
  Int4::Set(0, 0, 0, 1065353216); /*0x4227e5*/
  Int4::Set(0, 0, 0, 1065353216); /*0x4227f8*/
  *(_DWORD *)(this + 392) = 0; /*0x4227fd*/
  *(_BYTE *)(this + 377) = 0; /*0x422803*/
  *(_DWORD *)(this + 388) = 0; /*0x422809*/
  *(_DWORD *)(this + 396) = 0; /*0x42280f*/
  *(_BYTE *)(this + 404) = 0; /*0x422815*/
  *(_BYTE *)(this + 405) = 1; /*0x42281b*/
  *(_BYTE *)(this + 406) = 0; /*0x422822*/
  *(_BYTE *)(this + 407) = 0; /*0x422828*/
  *(_BYTE *)(this + 411) = 0; /*0x42282e*/
  *(_BYTE *)(this + 412) = 1; /*0x422834*/
  *(_BYTE *)(this + 413) = 0; /*0x42283b*/
  *(_BYTE *)(this + 414) = 0; /*0x422841*/
  *(_DWORD *)this = &AnimClass::`vftable'; /*0x422847*/
  *(_DWORD *)(this + 4) = &AnimClass::`vftable'; /*0x42284d*/
  *(_DWORD *)(this + 8) = &vt_AnimClass; /*0x422854*/
  *(_DWORD *)(this + 12) = &off_7E3328; /*0x42285b*/
  if ( MEMORY[0xA8E9B8] < MEMORY[0xA8E9B0] /*0x422896*/
    || (MEMORY[0xA8E9B5] || !MEMORY[0xA8E9B0])
    && MEMORY[0xA8E9BC] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8E9A8] + 8))(
         &MEMORY[0xA8E9A8],
         MEMORY[0xA8E9B0] + MEMORY[0xA8E9BC],
         0) )
  {
    v3 = MEMORY[0xA8E9B8]++; /*0x4228a3*/
    *((_DWORD *)MEMORY[0xA8E9AC] + v3) = this; /*0x4228b2*/
  }
  AudioController::Init((_DWORD *)(this + 416)); /*0x4228bb*/
  AudioController::Init((_DWORD *)(this + 436)); /*0x4228c6*/
  *(_BYTE *)(this + 144) = 1; /*0x4228cb*/
  return this; /*0x4228d4*/
}


// ==== 0x004228E0  AnimClass::Destruct  this=AnimClass  sig=csp ====
void __fastcall AnimClass::Destruct(#374 *this, AbstractClass *a2)
{
  _BYTE *v3; // ebp
  int ecx3; // ecx
  AudioController *v4; // edx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int eax28; // eax
  ObjectClass *v11; // [esp+10h] [ebp-10h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  LOBYTE(a2) = 1; /*0x4228e3*/
  *(_DWORD *)this = &AnimClass::`vftable'; /*0x4228eb*/
  this->vtable2 = &AnimClass::`vftable'; /*0x4228f1*/
  this->vtable3 = &vt_AnimClass; /*0x4228f8*/
  this->vtable4 = &off_7E3328; /*0x4228ff*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, a2); /*0x422906*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x422914*/
  {
    v3 = (_BYTE *)this->q033; /*0x42291a*/
    if ( v3 ) /*0x422922*/
    {
      ecx3 = 0; /*0x42292a*/
      if ( *(int *)&HouseClass_Player.__pad_5568[22276] > 0 ) /*0x42292e*/
      {
        v4 = *(AudioController **)&HouseClass_Player.__pad_5568[22264]; /*0x422930*/
        do /*0x42294a*/
        {
          if ( *(#374 **)v4->__pad_0 != this && *(_BYTE **)(*(_DWORD *)v4->__pad_0 + 204) == v3 ) /*0x422942*/
            break; /*0x422942*/
          ++ecx3; /*0x422944*/
          v4 = (AudioController *)((char *)v4 + 4); /*0x422945*/
        }
        while ( ecx3 < *(int *)&HouseClass_Player.__pad_5568[22276] ); /*0x42294a*/
      }
      if ( ecx3 == *(_DWORD *)&HouseClass_Player.__pad_5568[22276] ) /*0x42294e*/
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 380))(this->q033); /*0x422955*/
        v3[132] = 0; /*0x42295b*/
      }
      this->q033 = 0; /*0x422961*/
    }
    v6 = this->AnimClass_field_0xC8; /*0x422967*/
    if ( v6 && *(_BYTE *)(v6 + 853) ) /*0x422971*/
    {
      v13[0] = this->q027; /*0x422985*/
      v13[1] = this->q028; /*0x422991*/
      v13[2] = this->q029; /*0x422998*/
      v7 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v13); /*0x4229a1*/
      v7[80] &= ~0x20000u; /*0x4229b7*/
    }
    if ( (unsigned __int8)ObjectClass::Undeploy(this) ) /*0x4229bb*/
      RemoveTarget((IUnknown *)this); /*0x4229ca*/
  }
  v11 = (ObjectClass *)this; /*0x4229df*/
  v8 = (*(int (__thiscall **)(char *, ObjectClass **))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 16))( /*0x4229e3*/
         &stru_B05488.__pad_579C[19020],
         &v11);
  if ( v8 != -1 && v8 < *(int *)&stru_B05488.__pad_579C[19036] ) /*0x4229f3*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19036]; /*0x4229f8*/
    for ( ; /*0x4229fe*/
          v8 < *(int *)&stru_B05488.__pad_579C[19036];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024]
                                                                                          + 4 * v8) )
    {
      ++v8; /*0x422a06*/
    }
  }
  v9 = this->AnimClass_field_0xC8; /*0x422a18*/
  if ( v9 ) /*0x422a20*/
    AnimClass::FreeRenderBuffer(v9); /*0x422a22*/
  Mixer::ReleaseChannel((int **)this + 104); /*0x422a2f*/
  Mixer::ReleaseChannel((int **)this + 109); /*0x422a3c*/
  AudioFileClass::Release((_DWORD *)this + 104); /*0x422a43*/
  AudioFileClass::Release((_DWORD *)this + 109); /*0x422a4a*/
  this->q033 = 0; /*0x422a52*/
  this->AnimClass_field_0xC8 = 0; /*0x422a59*/
  if ( AbstractClass::GetVtable3((AbstractClass *)((char *)this + 4)) == -2 ) /*0x422a67*/
  {
    v11 = (ObjectClass *)this; /*0x422a79*/
    v10 = (*(int (__thiscall **)(char *, ObjectClass **))(*(_DWORD *)&HouseClass_Player.__pad_74[64] + 16))( /*0x422a7d*/
            &HouseClass_Player.__pad_74[64],
            &v11);
    if ( v10 != -1 && v10 < *(int *)&HouseClass_Player.__pad_74[80] ) /*0x422a91*/
    {
      --*(_DWORD *)&HouseClass_Player.__pad_74[80]; /*0x422a96*/
      for ( ; /*0x422a9c*/
            v10 < *(int *)&HouseClass_Player.__pad_74[80];
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[68] + 4 * v10 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[68]
                                                                                              + 4 * v10) )
      {
        ++v10; /*0x422aa4*/
      }
    }
  }
  else
  {
    v11 = (ObjectClass *)this; /*0x422ad5*/
    eax28 = (*(int (__thiscall **)(char *, ObjectClass **))(*(_DWORD *)&HouseClass_Player.__pad_5568[22260] + 16))( /*0x422ad9*/
              &HouseClass_Player.__pad_5568[22260],
              &v11);
    if ( eax28 != -1 && eax28 < *(int *)&HouseClass_Player.__pad_5568[22276] ) /*0x422ae9*/
    {
      --*(_DWORD *)&HouseClass_Player.__pad_5568[22276]; /*0x422aee*/
      for ( ; /*0x422af4*/
            eax28 < *(int *)&HouseClass_Player.__pad_5568[22276];
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22264] + 4 * eax28 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22264] + 4 * eax28) )
      {
        ++eax28; /*0x422afc*/
      }
    }
  }
  ObjectClass::Dtor(this); /*0x422b10*/
}


// ==== 0x00422B20  GlobalArray::FindString  this=char*  sig=csp ====
int __thiscall GlobalArray::FindString(void *this)
{
  int v2; // esi

  if ( !this ) /*0x422b26*/
    return -1; /*0x422b26*/
  if ( !_strcmpi(this, &stru_817460.sectionHead[1]) ) /*0x422b2e*/
    return -1; /*0x422b2e*/
  v2 = 0; /*0x422b3f*/
  if ( *(int *)&stru_89E138.__pad_1600D[27] <= 0 ) /*0x422b43*/
    return -1; /*0x422b68*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * v2) + 36), this) ) /*0x422b5c*/
  {
    if ( ++v2 >= *(int *)&stru_89E138.__pad_1600D[27] ) /*0x422b66*/
      return -1; /*0x422b66*/
  }
  return v2; /*0x422b68*/
}


// ==== 0x00422B80  TerrainClass::ClearAnimationLinkFlags  this=TerrainClass  sig=csp ====
void __thiscall sub_422B80(void *this)
{
  int i; // edx
  int v2; // eax

  if ( this ) /*0x422b82*/
  {
    for ( i = 0; i < MEMORY[0xA8E9B8]; ++i ) /*0x422b8d*/
    {
      v2 = *((_DWORD *)MEMORY[0xA8E9AC] + i); /*0x422b94*/
      if ( *(void **)(v2 + 204) == this ) /*0x422b9d*/
        *(_BYTE *)(v2 + 405) = 0; /*0x422b9f*/
    }
  }
}


// ==== 0x00422BC0  AnimClass::SetAnimSpeed  this=AnimClass  sig=csp ====
int __thiscall AnimClass::_vt46(int this)
{
  return *(_DWORD *)(this + 260) + ObjectClass::GetBoundingSize((#374 *)this); /*0x422bce*/
}


// ==== 0x00422BE0  AnimClass::UpdateZAdjust  this=AnimClass  sig=csp ====
int *__thiscall AnimClass::UpdateZAdjust(#374 *this, int *a2)
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

  if ( this->q033 ) /*0x422be7*/
  {
    Coords = (_DWORD *)ObjectClass::GetCoords(this); /*0x422c01*/
    v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD, CoordStruct *))(**((_DWORD **)this + 51) + 72))( /*0x422c0a*/
                     this->q033,
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
    v11 = (int *)ObjectClass::GetCoords(this); /*0x422c45*/
    *a2 = *v11; /*0x422c50*/
    a2[1] = v11[1]; /*0x422c55*/
    a2[2] = v11[2]; /*0x422c5c*/
    return a2; /*0x422c47*/
  }
}


// ==== 0x00422C70  AnimClass::CheckLayerFlags  this=AnimClass  sig=csp ====
char __thiscall AnimClass::CheckLayerFlags(int this, ObjectClass *aP1, ObjectClass *aP2, int a4)
{
  if ( *(_DWORD *)(this + 388) ) /*0x422c70*/
    return 0; /*0x422c7a*/
  else
    return ObjectClass::CalcDrawRect((#374 *)this); /*0x422c8e*/
}


// ==== 0x00422CA0  AnimClass::Render  this=AnimClass  sig=csp ====
void __thiscall AnimClass::Render(_DWORD *this, ConvertClass *a2, ConvertClass *aP5)
{
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  __int16 v9; // bx
  ConvertClass *v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  unsigned __int8 v15; // di
  IUnknown *v16; // eax
  __int16 v17; // ax
  int v18; // edi
  CoordStruct *v19; // ebx
  CoordStruct *v20; // eax
  CoordStruct *v21; // eax
  unsigned int v22; // ebx
  double v23; // st7
  double Z; // st6
  CoordStruct *v25; // eax
  IUnknown *v26; // eax
  ConvertClass *v27; // ecx
  int Y; // eax
  char v29; // al
  _DWORD *v30; // eax
  __int16 *v31; // edi
  CoordStruct *v32; // ecx
  _DWORD *v33; // eax
  int v34; // eax
  IUnknown *v35; // edx
  ConvertClass *v36; // ecx
  int v37; // eax
  IUnknown *v38; // eax
  int v39; // eax
  char v40; // al
  int v41; // ebp
  IUnknown *v42; // eax
  _DWORD *v43; // eax
  CoordStruct *v44; // eax
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
  _DWORD *v61; // eax
  CoordStruct *v62; // eax
  _DWORD *FoundationSize; // eax
  int v64; // ecx
  int v65; // edi
  int v66; // edx
  int v67; // ebp
  IUnknown *v68; // eax
  ConvertClass *v69; // edi
  int v70; // eax
  int v71; // edi
  int v72; // edx
  IUnknown *v73; // eax
  IUnknown *v74; // edx
  IUnknown *v75; // eax
  int v76; // edx
  ConvertClass *v77; // eax
  int v78; // ebp
  IUnknown *v79; // eax
  int v80; // [esp-20h] [ebp-130h]
  int v81; // [esp-20h] [ebp-130h]
  BuildingTypeClass *v82; // [esp-18h] [ebp-128h]
  BuildingTypeClass *v83; // [esp-18h] [ebp-128h]
  unsigned __int8 v84; // [esp+13h] [ebp-FDh]
  unsigned __int8 v85; // [esp+13h] [ebp-FDh]
  char v86; // [esp+13h] [ebp-FDh]
  int v87; // [esp+14h] [ebp-FCh]
  int v88; // [esp+14h] [ebp-FCh]
  float v89; // [esp+14h] [ebp-FCh]
  CoordStruct *v90; // [esp+14h] [ebp-FCh]
  CoordStruct *v91; // [esp+14h] [ebp-FCh]
  CoordStruct *v92; // [esp+14h] [ebp-FCh]
  CoordStruct *v93; // [esp+14h] [ebp-FCh]
  IUnknown *v94; // [esp+14h] [ebp-FCh]
  int v95; // [esp+14h] [ebp-FCh]
  unsigned __int8 v96; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v97; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v98; // [esp+1Bh] [ebp-F5h]
  unsigned __int8 v99; // [esp+1Bh] [ebp-F5h]
  CoordStruct *aP2; // [esp+1Ch] [ebp-F4h] BYREF
  IUnknown *aP0; // [esp+20h] [ebp-F0h] BYREF
  ConvertClass *v102; // [esp+24h] [ebp-ECh]
  ConvertClass *v103; // [esp+28h] [ebp-E8h]
  CoordStruct *aP4; // [esp+2Ch] [ebp-E4h]
  int v105[2]; // [esp+30h] [ebp-E0h] BYREF
  ConvertClass *aP10; // [esp+38h] [ebp-D8h]
  int v107; // [esp+3Ch] [ebp-D4h]
  int v108; // [esp+40h] [ebp-D0h] BYREF
  int v109; // [esp+44h] [ebp-CCh]
  CCINIClass aP1; // [esp+50h] [ebp-C0h] BYREF
  CCINIClass v111; // [esp+B0h] [ebp-60h] BYREF

  if ( stru_89E138.__pad_14B0[6152] /*0x422ccb*/
    && *(_DWORD *)&stru_87C374.__pad_579C[23348]
    && (unsigned __int8)ObjectClass::StepCleanup(this, aRing1) )
  {
    v4 = this->AnimClass_field_0xB4; /*0x422cd8*/
    v5 = this->AnimClass_field_0xC0; /*0x422ce4*/
    v6 = this->AnimClass_field_0xBC; /*0x422cea*/
    if ( v4 != -1 ) /*0x422cf3*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v4 >= v6 ) /*0x422cff*/
        v6 = 0; /*0x422d05*/
      else
        v6 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v4; /*0x422d01*/
    }
    v7 = v5 + this->AnimClass_field_0xAC * v5 - v6; /*0x422d12*/
    v8 = v5 * (*(int (__thiscall **)(_DWORD *))(*this + 492))(this); /*0x422d23*/
    v9 = v7 + 8; /*0x422d28*/
    v10 = (ConvertClass *)(*(_DWORD *)a2->__pad_0 + 2 * (v7 + 8)); /*0x422d30*/
    aP0 = (IUnknown *)(*(_DWORD *)a2->__pad_0 - 2 * (v7 + 8)); /*0x422d3c*/
    aP10 = v10; /*0x422d40*/
    v11 = *(_DWORD *)&a2->field_2[2]; /*0x422d47*/
    v107 = v7 + 8 + v11; /*0x422d4d*/
    v102 = (ConvertClass *)(v11 - (v7 + 8)); /*0x422d51*/
    aP4 = (CoordStruct *)((v8 - v7) << 8); /*0x422d5e*/
    aP2 = (CoordStruct *)((int)aP4 / v8); /*0x422d67*/
    if ( (int)aP4 / v8 >= 0 ) /*0x422d6b*/
    {
      if ( (int)aP4 / v8 > 255 ) /*0x422d7c*/
        aP2 = (CoordStruct *)255; /*0x422d7e*/
    }
    else
    {
      *(float *)&aP2 = 0.0; /*0x422d6d*/
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
      v14 = (int)aP4 / (v8 - v87); /*0x422e10*/
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
    v16 = (IUnknown *)(*(int (__thiscall **)(_DWORD *))(*this + 464))(this); /*0x422e2d*/
    v17 = *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4) /*0x422e87*/
        + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36)
        - *(_WORD *)&a2->field_2[2]
        - *(_WORD *)&stru_87C374.__pad_579C[21652]
        + this->AnimClass_field_0x100
        + *(_DWORD *)(this->AnimClass_field_0xC8 + 836)
        - ZCoordToScreenY(v16)
        - 2;
    *(float *)&aP4 = (double)(unsigned __int16)(v17 + v9) * 0.000015259022; /*0x422eab*/
    *(float *)&v103 = (double)(unsigned __int16)(v17 - v9) * 0.000015259022; /*0x422eb9*/
    ColorStruct::SetRGB(&aP1, (unsigned __int8)aP2, v13, v15); /*0x422ebd*/
    ColorStruct::SetRGB(&v111, (unsigned __int8)aP2, v13, v15); /*0x422ecc*/
    *(float *)&v88 = (float)(int)v102; /*0x422ede*/
    v18 = v88; /*0x422ee6*/
    *(float *)&aP2 = (float)(int)aP0; /*0x422eef*/
    v19 = aP2; /*0x422ef3*/
    Tactical::SetCellTransform(aP1.__pad_0, 0, aP2, v88, aP4, 0, 0); /*0x422efa*/
    *(float *)&aP2 = (float)v107; /*0x422f0f*/
    Tactical::SetCellTransform(aP1.__pad_0, 1, v19, (int)aP2, (CoordStruct *)v103, 0, 1065353216); /*0x422f1f*/
    v89 = (float)(int)aP10; /*0x422f37*/
    Tactical::SetCellTransform( /*0x422f47*/
      aP1.__pad_0,
      2,
      (CoordStruct *)LODWORD(v89),
      (int)aP2,
      (CoordStruct *)v103,
      1065353216,
      1065353216);
    Tactical::SetCellTransform(v111.__pad_0, 0, v19, v18, aP4, 0, 0); /*0x422f5c*/
    Tactical::SetCellTransform( /*0x422f7f*/
      v111.__pad_0,
      1,
      (CoordStruct *)LODWORD(v89),
      (int)aP2,
      (CoordStruct *)v103,
      1065353216,
      1065353216);
    Tactical::SetCellTransform(v111.__pad_0, 2, (CoordStruct *)LODWORD(v89), v18, aP4, 1065353216, 0); /*0x422f97*/
    StructTable::Append(*(_DWORD **)&stru_89E138.__pad_14B0[6184], &aP1); /*0x422fa7*/
    StructTable::Append(*(_DWORD **)&stru_89E138.__pad_14B0[6184], &v111); /*0x422fba*/
    return; /*0x422fc9*/
  }
  if ( dword_ABCD44 < (CampaignScore *)PingPongBuffer::GetWriteOffset() && *(int *)(this->AnimClass_field_0xC8 + 724) > 1 ) /*0x422fe6*/
    return; /*0x422fe6*/
  if ( this->q19D ) /*0x422fec*/
    return; /*0x422fec*/
  v20 = (CoordStruct *)this->AnimClass_field_0xC8; /*0x422ffa*/
  if ( v20[60].Y > *(int *)&HouseClass_Player.__pad_5568[22724] || this->q199 && LOBYTE(v20[73].Z) ) /*0x42301e*/
    return; /*0x42301e*/
  v103 = (ConvertClass *)(*(int (__thiscall **)(_DWORD *))(*this + 108))(this); /*0x423035*/
  if ( !v103 ) /*0x423039*/
    return; /*0x423039*/
  v21 = (CoordStruct *)this->AnimClass_field_0xC8; /*0x42303f*/
  v22 = this->AnimClass_field_0x190; /*0x42304b*/
  v90 = (CoordStruct *)this->AnimClass_field_0xAC; /*0x423051*/
  aP4 = (CoordStruct *)((char *)v90 + v21[57].Z); /*0x42305d*/
  if ( this->q119 ) /*0x423061*/
  {
    if ( LOBYTE(v21[72].Z) ) /*0x42306b*/
      v22 |= 6u; /*0x423075*/
    else
      v22 |= 4u; /*0x42307a*/
  }
  if ( v21[60].Z <= *(int *)&HouseClass_Player.__pad_5568[22724] ) /*0x42308b*/
  {
    if ( !BYTE2(v21[72].Z) ) /*0x423095*/
    {
      Y = v21[62].Y; /*0x423183*/
      if ( Y <= 0 ) /*0x42318b*/
      {
        v29 = this->q5E0; /*0x4231c1*/
        if ( !v29 ) /*0x4231c9*/
          goto LABEL_47; /*0x4231c9*/
        if ( v29 > 15 ) /*0x4231d1*/
          return; /*0x4231d1*/
        if ( v29 > 10 ) /*0x4231d9*/
        {
          v22 |= 4u; /*0x4231db*/
          goto LABEL_47; /*0x4231de*/
        }
        if ( v29 > 5 ) /*0x4231e5*/
        {
          v22 |= 4u; /*0x4231eb*/
          goto LABEL_47; /*0x4231ee*/
        }
      }
      else
      {
        if ( *((char *)this + 376) >= 15 ) /*0x423194*/
          return; /*0x423194*/
        if ( Y != 25 ) /*0x42319d*/
        {
          if ( Y == 50 ) /*0x4231a6*/
          {
            v22 |= 4u; /*0x4231a8*/
          }
          else if ( Y == 75 ) /*0x4231b3*/
          {
            v22 |= 6u; /*0x4231b9*/
          }
          goto LABEL_47; /*0x4231ab*/
        }
      }
LABEL_46:
      v22 |= 2u; /*0x4230fb*/
      goto LABEL_47; /*0x4230fb*/
    }
    if ( *((char *)this + 376) >= 15 ) /*0x4230a2*/
      return; /*0x4230a2*/
    v23 = (double)(int)v90; /*0x4230a8*/
    Z = (double)v21[58].Z; /*0x4230ac*/
    if ( v23 > Z * 0.6 ) /*0x4230c3*/
    {
      v22 |= 6u; /*0x4230c9*/
      goto LABEL_47; /*0x4230cc*/
    }
    if ( v23 > Z * 0.4 ) /*0x4230df*/
    {
      v22 |= 4u; /*0x4230e5*/
      goto LABEL_47; /*0x4230e8*/
    }
    if ( v23 > Z * 0.2 ) /*0x4230f9*/
      goto LABEL_46; /*0x4230f9*/
  }
LABEL_47:
  if ( (v22 & 1) == 0 ) /*0x423101*/
    BYTE1(v22) |= 8u; /*0x423103*/
  aP0 = (IUnknown *)(*(int (__thiscall **)(_DWORD *))(*this + 456))(this); /*0x423110*/
  v25 = (CoordStruct *)this->AnimClass_field_0xC8; /*0x423114*/
  aP10 = (ConvertClass *)1000; /*0x42311a*/
  if ( BYTE1(v25[71].X) ) /*0x423122*/
  {
    v105[0] = *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * *(_DWORD *)(HouseClass_Player.field_0 + 90196)) + 780); /*0x42314b*/
    if ( BYTE1(v25[71].Z) ) /*0x42314f*/
      goto LABEL_78; /*0x423157*/
    v26 = (IUnknown *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 172))(this, &v108); /*0x423166*/
    v27 = (ConvertClass *)*((__int16 *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v26) + 134); /*0x423177*/
    goto LABEL_77; /*0x42317e*/
  }
  if ( this->q658 ) /*0x4231f3*/
  {
    v30 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 172))(this, &v108); /*0x42320a*/
    LOWORD(v91) = *v30 / 256; /*0x423220*/
    HIWORD(v91) = v30[1] / 256; /*0x423238*/
    aP2 = v91; /*0x423241*/
    v31 = (__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP2); /*0x423250*/
    if ( !*((_DWORD *)v31 + 13) ) /*0x423252*/
      TacticalClass::SetView((int)v31, 0, 0x10000, 0, 1000, 1000, 1000); /*0x423273*/
    v32 = (CoordStruct *)this->AnimClass_field_0xC8; /*0x42327b*/
    v105[0] = *((_DWORD *)v31 + 13); /*0x423281*/
    if ( !BYTE1(v32[71].Z) ) /*0x423285*/
      aP10 = (ConvertClass *)v31[134]; /*0x42329a*/
  }
  else if ( this->AnimClass_field_0xD4 ) /*0x4232a3*/
  {
    v105[0] = this->AnimClass_field_0xD4; /*0x4232ad*/
    if ( !BYTE1(v25[71].Z) ) /*0x4232b1*/
      aP10 = (ConvertClass *)this->AnimClass_field_0xFC; /*0x4232c5*/
  }
  else
  {
    v105[0] = *(_DWORD *)&stru_87C374.__pad_14B0[7836]; /*0x4232d4*/
    if ( BYTE1(v25[72].X) ) /*0x4232d8*/
      v105[0] = *(_DWORD *)(*(_DWORD *)stru_B05488.field_4C + 780); /*0x4232f0*/
    if ( !BYTE1(v25[71].Z) ) /*0x4232f4*/
    {
      v33 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 172))(this, &v108); /*0x423307*/
      LOWORD(v92) = *v33 / 256; /*0x42331d*/
      HIWORD(v92) = v33[1] / 256; /*0x423336*/
      aP2 = v92; /*0x423343*/
      v27 = (ConvertClass *)*((__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP2) + 133); /*0x42334d*/
LABEL_77:
      aP10 = v27; /*0x423354*/
    }
  }
LABEL_78:
  if ( this->q650 ) /*0x423358*/
  {
    v34 = ZCoordToScreenY(aP0); /*0x423373*/
    v35 = *(IUnknown **)a2->__pad_0; /*0x423384*/
    v36 = (ConvertClass *)(*(_DWORD *)(this->AnimClass_field_0xC8 + 836) + v34 + *(_DWORD *)&a2->field_2[2]); /*0x42338b*/
    v37 = *this; /*0x42339a*/
    v102 = v36; /*0x42339c*/
    aP0 = v35; /*0x4233a2*/
    v38 = (IUnknown *)(*(int (__thiscall **)(_DWORD *))(v37 + 464))(this); /*0x4233a6*/
    v39 = ZCoordToScreenY(v38); /*0x4233ae*/
    DrawToSurfaceSHP( /*0x4233e9*/
      *(int *)&stru_87C374.__pad_579C[22532],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      (ConvertClass *)0x2601,
      0,
      *(_DWORD *)(this->AnimClass_field_0xC8 + 836) - v39,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v40 = this->q118; /*0x4233ee*/
  *(float *)&v41 = 0.0; /*0x4233f4*/
  *(float *)&aP2 = 0.0; /*0x4233f8*/
  if ( !v40 ) /*0x4233fc*/
    goto LABEL_99; /*0x4233fc*/
  v42 = (IUnknown *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 72))(this, &v108); /*0x42340b*/
  v43 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v42); /*0x423414*/
  v44 = (CoordStruct *)Cell::IsBridge(v43); /*0x42341b*/
  v93 = v44; /*0x423422*/
  if ( !v44 ) /*0x423426*/
    goto LABEL_99; /*0x423426*/
  if ( v44[55].X ) /*0x42342e*/
  {
    v45 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6308); /*0x423442*/
    v46 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2 * v45; /*0x423448*/
    aP0 = (IUnknown *)(v45 + v46); /*0x423454*/
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
      v41 = v49 | (32 * (v48 | (v41 << 6))); /*0x4234a3*/
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
    v41 |= v49; /*0x4234ca*/
LABEL_89:
    LOWORD(v49) = v98; /*0x4234d2*/
    LOWORD(v48) = v84; /*0x4234d8*/
    LOWORD(v50) = (unsigned __int8)v50 >> 1; /*0x4234e0*/
    v41 |= v48 | (32 * ((32 * v49) | v50)); /*0x4234ee*/
    aP2 = (CoordStruct *)v41; /*0x4234f0*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(CoordStruct *))(v93->X + 352))(v93) || v93[37].Z != 1 ) /*0x423513*/
    goto LABEL_99; /*0x423513*/
  v52 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6320); /*0x42351f*/
  v53 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2 * v52; /*0x423525*/
  aP0 = (IUnknown *)(v52 + v53); /*0x423531*/
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
    v41 |= v55; /*0x423582*/
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
  v41 |= v56; /*0x4235a9*/
LABEL_98:
  LOWORD(v56) = v99; /*0x4235b1*/
  LOWORD(v55) = v97; /*0x4235b7*/
  LOWORD(v57) = (unsigned __int8)v57 >> 1; /*0x4235bf*/
  v41 |= v55 | (32 * ((32 * v56) | v57)); /*0x4235cd*/
  aP2 = (CoordStruct *)v41; /*0x4235cf*/
LABEL_99:
  v60 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 72))(this, &v108); /*0x4235d3*/
  LOWORD(v94) = *v60 / 256; /*0x4235ef*/
  HIWORD(v94) = v60[1] / 256; /*0x423608*/
  aP0 = v94; /*0x423615*/
  v61 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP0); /*0x42361a*/
  if ( CellClass::QuickPassable(v61) ) /*0x423621*/
  {
    *(float *)&v41 = 0.0; /*0x42362a*/
    *(float *)&aP2 = 0.0; /*0x42362c*/
  }
  v62 = (CoordStruct *)this->AnimClass_field_0xC8; /*0x423630*/
  if ( HIBYTE(v62[71].Y) ) /*0x423636*/
  {
    FoundationSize = Building::GetFoundationSize(&v108, 0); /*0x42364f*/
    v64 = *(_DWORD *)a2->__pad_0; /*0x423657*/
    v65 = *(_DWORD *)&a2->field_2[2]; /*0x423659*/
    aP0 = (IUnknown *)FoundationSize[3]; /*0x42365c*/
    v66 = *this; /*0x423663*/
    v108 = v64; /*0x423667*/
    v105[0] = v64; /*0x42366d*/
    v95 = (int)aP0 / 2; /*0x423673*/
    v67 = v65 - (int)aP0 / 2; /*0x423677*/
    v86 = 0; /*0x423679*/
    v68 = (IUnknown *)(*(int (__thiscall **)(_DWORD *))(v66 + 464))(this); /*0x42367e*/
    v69 = (ConvertClass *)(this->AnimClass_field_0x100 + *(_DWORD *)(this->AnimClass_field_0xC8 + 836) - ZCoordToScreenY(v68) - 50); /*0x4236a1*/
    BYTE1(v22) |= 0x20u; /*0x4236a4*/
    do /*0x423719*/
    {
      v70 = v67 + *(_DWORD *)(this->AnimClass_field_0xC8 + 836); /*0x4236bb*/
      v105[0] = v108; /*0x4236bd*/
      v105[1] = v70; /*0x4236c1*/
      DrawToSurfaceSHP( /*0x4236f7*/
        *(int *)&stru_87C374.__pad_579C[22532],
        *(int *)&stru_87C374.__pad_14B0[7836],
        v103,
        (unsigned int)aP4,
        (ConvertClass *)v105,
        (ConvertClass *)&stru_87C374.__pad_579C[21648],
        (ConvertClass *)v22,
        0,
        (int)v69,
        (ConvertClass *)2,
        aP10,
        (ConvertClass *)aP2,
        0,
        0,
        0,
        0);
      if ( v67 < 0 ) /*0x4236fe*/
        v86 = 1; /*0x423700*/
      v67 -= (int)aP0; /*0x42370d*/
      v69 = (ConvertClass *)((char *)v69 - (int)aP0 - v95); /*0x423715*/
    }
    while ( !v86 ); /*0x423719*/
  }
  else if ( BYTE1(v62[72].Z) ) /*0x423728*/
  {
    v109 = v62[69].Z; /*0x42373c*/
    v71 = *(_DWORD *)&a2->field_2[2]; /*0x423742*/
    aP0 = *(IUnknown **)a2->__pad_0; /*0x42374c*/
    v82 = (BuildingTypeClass *)aP10; /*0x423756*/
    v72 = *this; /*0x42375e*/
    v102 = (ConvertClass *)(v109 + v71); /*0x423766*/
    v73 = (IUnknown *)(*(int (__thiscall **)(_DWORD *))(v72 + 464))(this); /*0x42376a*/
    BYTE1(v22) |= 0x20u; /*0x42379b*/
    v80 = this->AnimClass_field_0x100 + *(_DWORD *)(this->AnimClass_field_0xC8 + 836) - ZCoordToScreenY(v73) - 3; /*0x42379e*/
    DrawToSurfaceSHP( /*0x4237a9*/
      *(int *)&stru_87C374.__pad_579C[22532],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      (ConvertClass *)v22,
      0,
      v80,
      0,
      (ConvertClass *)v82,
      (ConvertClass *)v41,
      0,
      0,
      0,
      0);
  }
  else
  {
    v74 = *(IUnknown **)a2->__pad_0; /*0x4237b9*/
    v102 = (ConvertClass *)(v62[69].Z + *(_DWORD *)&a2->field_2[2]); /*0x4237bb*/
    aP0 = v74; /*0x4237cb*/
    v83 = (BuildingTypeClass *)aP10; /*0x4237d2*/
    v75 = (IUnknown *)(*(int (__thiscall **)(_DWORD *))(*this + 464))(this); /*0x4237d7*/
    v76 = this->AnimClass_field_0x100 + *(_DWORD *)(this->AnimClass_field_0xC8 + 836) - ZCoordToScreenY(v75); /*0x4237ff*/
    v77 = (ConvertClass *)v22; /*0x423801*/
    BYTE1(v77) = BYTE1(v22) | 0x20; /*0x423806*/
    DrawToSurfaceSHP( /*0x423827*/
      *(int *)&stru_87C374.__pad_579C[22532],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      v77,
      0,
      v76 - 2,
      (ConvertClass *)2,
      (ConvertClass *)v83,
      (ConvertClass *)v41,
      0,
      0,
      0,
      0);
    if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 882) ) /*0x423832*/
    {
      v78 = *(__int16 *)v103->__pad_6; /*0x423845*/
      v79 = (IUnknown *)(*(int (__thiscall **)(_DWORD *))(*this + 464))(this); /*0x423857*/
      v81 = -2 - ZCoordToScreenY(v79); /*0x423875*/
      DrawToSurfaceSHP( /*0x42389e*/
        *(int *)&stru_87C374.__pad_579C[22532],
        v105[0],
        v103,
        (unsigned int)aP4 + v78 / 2,
        a2,
        aP5,
        (ConvertClass *)(v22 & 0xFFFFF9F8 | 0x601),
        0,
        v81,
        0,
        (ConvertClass *)0x3E8,
        0,
        0,
        0,
        0,
        0);
    }
  }
}


// ==== 0x004238B0  AnimClass::UpdateMirrorState  this=AnimClass  sig=csp ====
bool __thiscall AnimClass::UpdateMirrorState(void *this, ObjectClass *aP1)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((#374 *)this) != 0; /*0x4238bf*/
}


// ==== 0x004238D0  AnimClass::CheckMirrorFlags  this=AnimClass  sig=csp ====
int *__stdcall AnimClass::_vt66(int a1)
{
  if ( (unk_89A190 & 1) == 0 ) /*0x4238db*/
  {
    unk_89A190 |= 1u; /*0x4238f9*/
    unk_89A160 = 2147450879; /*0x4238ff*/
    atexit(nullsub_89); /*0x423904*/
  }
  return &unk_89A160; /*0x423912*/
}


// ==== 0x00423920  nullsub_89  this=-  sig=ida-proto ====
void __cdecl nullsub_89()
{
  ; /*0x423920*/
}


// ==== 0x00423930  AnimClass::UpdateProjectileTrajectory  this=AnimClass  sig=csp ====
int __thiscall AnimClass::_vt122(char *this)
{
  float *v2; // esi
  int v3; // ebx
  int v4; // eax
  void **v5; // edi
  int *v6; // eax
  _DWORD *Coords; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  int v11; // ebx
  int v12; // esi
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // esi
  _DWORD *v17; // eax
  int v19; // [esp-8h] [ebp-60h]
  int v20; // [esp+1Ch] [ebp-3Ch] BYREF
  int v21; // [esp+20h] [ebp-38h]
  int v22; // [esp+24h] [ebp-34h]
  char v23[12]; // [esp+28h] [ebp-30h] BYREF
  int v24[3]; // [esp+34h] [ebp-24h] BYREF
  char v25[12]; // [esp+40h] [ebp-18h] BYREF
  _DWORD v26[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = (float *)(this + 296); /*0x423939*/
  v3 = JumpjetLocomotionClass::Update2(this + 296); /*0x423946*/
  v4 = this->AnimClass_field_0xC8; /*0x423948*/
  v22 = v3; /*0x42394e*/
  if ( *(_BYTE *)(v4 + 854) ) /*0x423952*/
    v2[11] = v2[11] + *((double *)v2 + 1); /*0x423962*/
  if ( v3 == 1 ) /*0x423968*/
  {
    if ( *(_DWORD *)(this->AnimClass_field_0xC8 + 768) ) /*0x423987*/
    {
      v5 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x42399b*/
      if ( v5 ) /*0x4239a2*/
      {
        v6 = (int *)(*(int (__thiscall **)(char *, char *))(this->q048)(this, v23); /*0x4239bb*/
        AnimClass::ctor(v5, *(void **)(this->AnimClass_field_0xC8 + 768), v6, 0, 1, (void *)0x600, 0, 0); /*0x4239ce*/
      }
    }
    Coords = Coord::GetCoords(v2, v24); /*0x4239da*/
    v8 = (_DWORD *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], Coords) + 57); /*0x4239ea*/
    if ( v8 ) /*0x4239f2*/
    {
      do /*0x423a88*/
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v8 + 72))(v8, v25); /*0x423a08*/
        v10 = Coord::GetCoords((float *)this + 74, v26); /*0x423a11*/
        v11 = this->AnimClass_field_0xC8; /*0x423a29*/
        v12 = abs32(v10[1] - v9[1]) + abs32(*v10 - *v9); /*0x423a3a*/
        if ( v12 <= *(_DWORD *)(v11 + 820) ) /*0x423a44*/
        {
          v13 = Math::RoundToInt(*(double *)(v11 + 680)); /*0x423a4c*/
          v14 = *v8; /*0x423a51*/
          v20 = v13; /*0x423a55*/
          v19 = *(_DWORD *)(v11 + 816); /*0x423a65*/
          v21 = v14; /*0x423a68*/
          v15 = ZCoordToScreenY(v12); /*0x423a6c*/
          (*(void (__thiscall **)(_DWORD *, int *, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(v21 + 364))( /*0x423a7d*/
            v8,
            &v20,
            v15,
            v19,
            0,
            0,
            0,
            0);
        }
        v8 = (_DWORD *)v8[12]; /*0x423a83*/
      }
      while ( v8 ); /*0x423a88*/
      v3 = v22; /*0x423a8e*/
    }
  }
  else if ( v3 == 2 ) /*0x42396b*/
  {
    (*(void (__thiscall **)(char *))(this->TintColor)(this); /*0x423976*/
  }
  v16 = *(_DWORD *)this; /*0x423a92*/
  v17 = Coord::GetCoords((float *)this + 74, v26); /*0x423aa0*/
  (*(void (__thiscall **)(char *, _DWORD *))(v16 + 436))(this, v17); /*0x423aa8*/
  return v3; /*0x423aae*/
}


// ==== 0x00423AC0  AnimClass::CreateUnit  this=AnimClass  sig=csp ====
// TechnoClass::CreateUnit — per-frame production pipeline (4234B).
// Sections: Audio → Placement → Deploy → Progress → Cost → Milestone → TypeSwitch → UnitCreate
bool __thiscall TechnoClass::CreateUnit(#361 *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int *v8; // edi
  int v9; // ebx
  int v10; // ebp
  bool v11; // bl
  bool v12; // al
  void **v13; // eax
  int v14; // edx
  int v15; // ebp
  int v16; // edi
  void **v17; // eax
  void **v18; // eax
  int v19; // edx
  int v20; // ebp
  int v21; // edi
  void **v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // ebp
  _DWORD *Coords; // eax
  int v28; // eax
  int v29; // ebp
  int *v30; // eax
  int *v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // edi
  int v35; // eax
  int v36; // edi
  void **v37; // eax
  int v38; // eax
  int v39; // ebx
  int v40; // ebp
  char v41; // cl
  int v42; // eax
  double v43; // st7
  int v44; // edx
  _DWORD *v45; // edi
  #374 *v46; // ebx
  int v47; // eax
  int *StartCoords; // edx
  int v49; // eax
  int v50; // ecx
  int v51; // edi
  int v52; // edx
  int v53; // edx
  int v54; // edi
  int v55; // ebx
  int Speed; // eax
  int v57; // eax
  int v58; // ecx
  void **v59; // edi
  int *v60; // eax
  _DWORD *v61; // eax
  _DWORD *v62; // eax
  int v63; // eax
  int *v64; // eax
  int v65; // ecx
  int v66; // edx
  int v67; // eax
  int v68; // eax
  _DWORD *v69; // ecx
  int v70; // ecx
  int v71; // eax
  int v72; // edx
  int v73; // edx
  int v74; // ebx
  int v75; // ecx
  double v76; // st7
  int v77; // ebp
  int v78; // eax
  _DWORD *v79; // eax
  int v80; // eax
  int v81; // ecx
  int v82; // ecx
  unsigned __int8 v83; // cl
  int v84; // eax
  int v85; // ecx
  _DWORD *v86; // ecx
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  char v90; // cl
  int v91; // ecx
  int v92; // edx
  char *ProductionTimeMult; // eax
  int *v94; // ebp
  int v95; // edx
  int v96; // eax
  int v97; // edi
  int v98; // eax
  int v99; // ecx
  int v100; // edx
  int v101; // ecx
  _BYTE *v102; // edi
  int v103; // edx
  _DWORD *v104; // eax
  _DWORD *v105; // eax
  int v106; // ecx
  int v107; // edx
  int v108; // ebp
  int v109; // eax
  int v110; // eax
  int v112; // [esp+Ch] [ebp-94h]
  int v113; // [esp+Ch] [ebp-94h]
  bool v114; // [esp+2Bh] [ebp-75h]
  int i; // [esp+2Ch] [ebp-74h]
  int v116; // [esp+30h] [ebp-70h]
  int v117; // [esp+34h] [ebp-6Ch]
  int v118; // [esp+38h] [ebp-68h] BYREF
  int v119; // [esp+3Ch] [ebp-64h] BYREF
  double v120; // [esp+40h] [ebp-60h] BYREF
  float v121; // [esp+48h] [ebp-58h]
  int v122; // [esp+54h] [ebp-4Ch] BYREF
  int v123; // [esp+58h] [ebp-48h]
  int v124; // [esp+5Ch] [ebp-44h]
  int v125; // [esp+60h] [ebp-40h]
  int v126; // [esp+64h] [ebp-3Ch]
  int v127; // [esp+6Ch] [ebp-34h]
  int v128; // [esp+78h] [ebp-28h]
  int v129; // [esp+7Ch] [ebp-24h]
  int v130; // [esp+88h] [ebp-18h]
  int v131; // [esp+8Ch] [ebp-14h]
  char v132[16]; // [esp+90h] [ebp-10h] BYREF

  if ( !this->q198 && *(_DWORD *)(this->AnimClass_field_0xC8 + 760) != -1 ) /*0x423ae8*/
  {
    v2 = (*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122); /*0x423af9*/
    StartAudioController(v2, (int)this + 416); /*0x423b00*/
  }
  if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 852) ) /*0x423b0b*/
  {
    ConstructionPositionTracker(this); /*0x423b17*/
    ObjectClass::DetectCloaked(this); /*0x423b1e*/
  }
  if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 883) ) /*0x423b29*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122); /*0x423b3c*/
    v4 = Coord::To_Cell(MEMORY[0x87F7E8], v3); /*0x423b45*/
    this->q19D = Cell::CanPlaceBuilding(*((#375 **)this + 96), v4) == 0; /*0x423b5c*/
  }
  if ( this->AnimClass_field_0xC8 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 184) ) /*0x423b74*/
  {
    if ( HIBYTE(MEMORY[0x87F7E8][539877]) ) /*0x423b7d*/
      this->q19D = 0; /*0x423b88*/
    else
      this->q19D = 1; /*0x423b7f*/
  }
  if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 857) ) /*0x423b95*/
  {
    v5 = (*(int (__thiscall **)(#361 *))(*(_DWORD *)this + 444))(this); /*0x423ba3*/
    this->q19D = !v5 || !Building::GetNthOfType(v5); /*0x423bb8*/
  }
  if ( *(_DWORD *)(this->AnimClass_field_0xC8 + 844) != -1 ) /*0x423bd4*/
  {
    v122 = this->q027; /*0x423be2*/
    v6 = *(_DWORD *)this; /*0x423be6*/
    v123 = this->q028; /*0x423beb*/
    v124 = this->q029; /*0x423bf9*/
    (*(void (__thiscall **)(#361 *, int *))(v6 + 240))(this, &v122); /*0x423bfd*/
  }
  if ( this->q11B && this->AnimClass_field_0x11C == this->q02B ) /*0x423c1b*/
    this->q11B = 0; /*0x423c1d*/
  if ( this->q194 ) /*0x423c24*/
  {
    v7 = (*(int (__thiscall **)(#361 *))(this->q7A0)(this); /*0x423c36*/
    if ( v7 == 2 || v7 == 1 ) /*0x423c44*/
    {
      v8 = (int *)((char *)this + 156); /*0x423c4a*/
      v122 = this->q027; /*0x423c54*/
      v123 = this->q028; /*0x423c60*/
      v124 = this->q029; /*0x423c67*/
      v9 = *((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v122) + 59); /*0x423c75*/
      v122 = this->q027; /*0x423c82*/
      v123 = this->q028; /*0x423c89*/
      v10 = this->q029; /*0x423c8d*/
      v122 = this->q027; /*0x423c92*/
      v123 = this->q028; /*0x423ca3*/
      v11 = v9 == 2; /*0x423caa*/
      v124 = this->q029; /*0x423cad*/
      v12 = v10 >= MEMORY[0x87F7E8][27251] + Cell::GetGroundHeight(&v122); /*0x423cbe*/
      v114 = v12; /*0x423cc3*/
      if ( !v11 || v12 ) /*0x423ccf*/
      {
        if ( *(_DWORD *)(this->AnimClass_field_0xC8 + 772) ) /*0x423ded*/
        {
          v120 = *((double *)this + 40); /*0x423e08*/
          v121 = *((float *)this + 82); /*0x423e16*/
          v22 = (void **)__2_YAPAXI_Z(456); /*0x423e1f*/
          if ( v22 ) /*0x423e26*/
          {
            v122 = Math::RoundToInt(*(float *)&v120); /*0x423e35*/
            v123 = Math::RoundToInt(*((float *)&v120 + 1)); /*0x423e42*/
            v23 = Math::RoundToInt(v121); /*0x423e46*/
            v24 = this->AnimClass_field_0xC8; /*0x423e4b*/
            v124 = v23; /*0x423e5a*/
            AnimClass::ctor(v22, *(void **)(v24 + 772), &v122, 0, 1, (void *)0x2600, (void *)0xFFFFFFE2, 0); /*0x423e70*/
          }
          v25 = this->AnimClass_field_0xC8; /*0x423e75*/
          v112 = *(_DWORD *)(v25 + 816); /*0x423e91*/
          v26 = Math::RoundToInt(*(double *)(v25 + 680)); /*0x423ea0*/
          Coords = Coord::GetCoords((float *)this + 74, &v122); /*0x423ea2*/
          PlaySoundEffectAt(Coords, v26, 0, v112, 1, 0); /*0x423eab*/
          v28 = this->AnimClass_field_0xC8; /*0x423eb0*/
          v117 = *(_DWORD *)(v28 + 816); /*0x423ecb*/
          v29 = Math::RoundToInt(*(double *)(v28 + 680)); /*0x423ecf*/
          v30 = Coord::GetCoords((float *)this + 74, &v122); /*0x423ed8*/
          CreateSmokeEffectAt(v29, v117, *v30, v30[1], v30[2], 0, 0); /*0x423ef8*/
        }
      }
      else if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 854) ) /*0x423ce0*/
      {
        v13 = (void **)__2_YAPAXI_Z(456); /*0x423cea*/
        if ( v13 ) /*0x423cf4*/
        {
          v14 = *v8; /*0x423cfa*/
          v15 = this->q028; /*0x423cfc*/
          v16 = this->q029; /*0x423cff*/
          v122 = v14; /*0x423d06*/
          v123 = v15; /*0x423d20*/
          v124 = v16 + 3; /*0x423d24*/
          AnimClass::ctor( /*0x423d3c*/
            v13,
            *(void **)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 3012) + 4 * *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3024) - 4),
            &v122,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
      }
      else
      {
        v17 = (void **)__2_YAPAXI_Z(456); /*0x423d46*/
        if ( v17 ) /*0x423d50*/
        {
          v122 = *v8; /*0x423d61*/
          v123 = this->q028; /*0x423d6a*/
          v124 = this->q029; /*0x423d76*/
          AnimClass::ctor(v17, *(void **)(MEMORY[0x87F7E8][7806] + 148), &v122, 0, 1, (void *)0x600, 0, 0); /*0x423d89*/
        }
        v18 = (void **)__2_YAPAXI_Z(456); /*0x423d93*/
        if ( v18 ) /*0x423d9d*/
        {
          v19 = *v8; /*0x423da3*/
          v20 = this->q028; /*0x423da5*/
          v21 = this->q029; /*0x423da8*/
          v122 = v19; /*0x423db5*/
          v123 = v20; /*0x423dc9*/
          v124 = v21 + 3; /*0x423dcd*/
          AnimClass::ctor(v18, **(void ***)(MEMORY[0x87F7E8][7806] + 3012), &v122, 0, 1, (void *)0x600, 0, 0); /*0x423ddd*/
        }
      }
      if ( !v11 || v114 ) /*0x423f07*/
      {
        v31 = Coord::GetCoords((float *)this + 74, &v120); /*0x423f18*/
        v122 = *v31; /*0x423f1f*/
        v123 = v31[1]; /*0x423f26*/
        v124 = v31[2]; /*0x423f2d*/
        v32 = this->AnimClass_field_0xC8; /*0x423f31*/
        if ( *(_DWORD *)(v32 + 752) ) /*0x423f37*/
        {
          v33 = *(_DWORD *)(v32 + 756); /*0x423f45*/
          if ( v33 > 0 ) /*0x423f4d*/
          {
            v34 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, v33); /*0x423f69*/
            v35 = v34 /*0x423f84*/
                + Random::Range(
                    (_DWORD *)(MEMORY[0x87F7E8][536210] + 536),
                    0,
                    *(_DWORD *)(this->AnimClass_field_0xC8 + 756));
            if ( v35 > 0 ) /*0x423f88*/
            {
              v36 = v35; /*0x423f8a*/
              do /*0x423fc4*/
              {
                v37 = (void **)__2_YAPAXI_Z(456); /*0x423f91*/
                if ( v37 ) /*0x423f9b*/
                  AnimClass::ctor(v37, *(void **)(this->AnimClass_field_0xC8 + 752), &v122, 0, 1, (void *)0x600, 0, 0); /*0x423fbe*/
                --v36; /*0x423fc3*/
              }
              while ( v36 ); /*0x423fc4*/
            }
          }
        }
        v38 = this->AnimClass_field_0xC8; /*0x423fc6*/
        v39 = 0; /*0x423fcc*/
        v40 = 0; /*0x423fce*/
        v125 = 0; /*0x423fd0*/
        v41 = *(_BYTE *)(v38 + 856); /*0x423fd4*/
        v126 = 0; /*0x423fda*/
        v127 = 0; /*0x423fe0*/
        if ( v41 && !v114 ) /*0x423ff0*/
        {
          v42 = *(_DWORD *)(v38 + 828); /*0x423ff6*/
          for ( i = -v42; i <= v42; ++i ) /*0x424006*/
          {
            v116 = -v42; /*0x424012*/
            if ( -v42 <= v42 ) /*0x424016*/
            {
              v120 = (double)i * (double)i; /*0x424024*/
              do /*0x42424c*/
              {
                v43 = Math::Sqrt((double)v116 * (double)v116 + v120); /*0x42403e*/
                if ( (int)Math::RoundToInt(v43) <= *(_DWORD *)(this->AnimClass_field_0xC8 + 828) ) /*0x424057*/
                {
                  v44 = i & 7; /*0x42407d*/
                  LOWORD(v117) = v122 / 256 + LOWORD(MEMORY[0x87F7E8][v44 + 32680]); /*0x424099*/
                  HIWORD(v117) = v123 / 256 + HIWORD(MEMORY[0x87F7E8][v44 + 32680]); /*0x4240a8*/
                  v118 = v117; /*0x4240b7*/
                  v45 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v118); /*0x4240c0*/
                  if ( IsCoordValidMap((int)v45, 0) ) /*0x4240c6*/
                  {
                    if ( *(_DWORD *)(this->AnimClass_field_0xC8 + 824) ) /*0x4240d9*/
                    {
                      v46 = (#374 *)__2_YAPAXI_Z(176); /*0x4240f1*/
                      if ( v46 ) /*0x4240f8*/
                      {
                        v119 = v45[9]; /*0x42410c*/
                        v47 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 3); /*0x424110*/
                        Object::SpawnAtCell( /*0x42413b*/
                          v46,
                          *(_DWORD *)(MEMORY[0x87F7E8][528743]
                                    + 4 * (v47 + *(_DWORD *)(*(_DWORD *)(this->AnimClass_field_0xC8 + 824) + 660))),
                          (__int16 *)&v119,
                          -1);
                      }
                      *((_BYTE *)v45 + 286) = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2); /*0x424155*/
                      StartCoords = House::GetStartCoords((int)v45, v132); /*0x424167*/
                      v49 = *StartCoords; /*0x42416f*/
                      v50 = StartCoords[1] - MEMORY[0x87F7E8][7663]; /*0x424174*/
                      v51 = StartCoords[2]; /*0x424176*/
                      v52 = StartCoords[3]; /*0x42417b*/
                      v130 = v51; /*0x42417e*/
                      v131 = v52; /*0x424182*/
                      if ( v40 <= 0 || v127 <= 0 ) /*0x424192*/
                      {
                        v40 = v51; /*0x424225*/
                      }
                      else if ( v51 <= 0 || v52 <= 0 ) /*0x42419e*/
                      {
                        v49 = v125; /*0x424217*/
                        v50 = v126; /*0x42421b*/
                        v52 = v127; /*0x42421f*/
                      }
                      else
                      {
                        v53 = v125; /*0x4241a0*/
                        v54 = v126; /*0x4241a4*/
                        v129 = v127; /*0x4241a8*/
                        v128 = v40; /*0x4241b0*/
                        if ( v125 > v49 ) /*0x4241b4*/
                        {
                          v53 = v49; /*0x4241b8*/
                          v128 = v125 + v40 - v49; /*0x4241bc*/
                        }
                        if ( v126 > v50 ) /*0x4241c2*/
                        {
                          v54 = v50; /*0x4241cc*/
                          v129 += v126 - v50; /*0x4241ce*/
                        }
                        if ( v53 + v128 < v49 + v130 ) /*0x4241e0*/
                          v128 = v130 - v53 + v49 + 1; /*0x4241ec*/
                        v55 = v129; /*0x4241f0*/
                        if ( v129 + v54 < v50 + v131 ) /*0x4241ff*/
                          v55 = v131 - v54 + v50 + 1; /*0x424207*/
                        v40 = v128; /*0x42420b*/
                        v49 = v53; /*0x42420f*/
                        v50 = v54; /*0x424211*/
                        v52 = v55; /*0x424213*/
                      }
                      v39 = v52; /*0x424227*/
                      v125 = v49; /*0x424229*/
                      v126 = v50; /*0x42422d*/
                      v127 = v52; /*0x424231*/
                    }
                  }
                }
                ++v116; /*0x424246*/
              }
              while ( v116 <= *(_DWORD *)(this->AnimClass_field_0xC8 + 828) ); /*0x42424c*/
            }
            v42 = *(_DWORD *)(this->AnimClass_field_0xC8 + 828); /*0x42425d*/
          }
          Cell::CreateCrater(v125, v126, v40, v39, 0); /*0x42428f*/
        }
      }
      LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(this->TintColor)(this); /*0x424298*/
      return Speed; /*0x4242a5*/
    }
  }
  if ( this->q090 ) /*0x4242a6*/
  {
    if ( !this->q19B ) /*0x4242b0*/
    {
      v57 = this->AnimClass_field_0xC8; /*0x4242ba*/
      if ( *(_DWORD *)(v57 + 776) ) /*0x4242c0*/
      {
        v58 = *(_DWORD *)(v57 + 780); /*0x4242ca*/
        if ( v58 == 1 || !(dword_A8ED54[12] % v58) ) /*0x4242db*/
        {
          v59 = (void **)__2_YAPAXI_Z(456); /*0x4242eb*/
          if ( v59 ) /*0x4242f2*/
          {
            v60 = (int *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122); /*0x42430a*/
            AnimClass::ctor(v59, *(void **)(this->AnimClass_field_0xC8 + 776), v60, (void *)1, 1, (void *)0x600, 0, 0); /*0x42431d*/
          }
        }
      }
    }
  }
  if ( this->AnimClass_field_0xC8 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5244) ) /*0x424334*/
  {
    v61 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122); /*0x42433f*/
    v62 = Coord::To_Cell(MEMORY[0x87F7E8], v61); /*0x424348*/
    if ( Cell::IsBridge(v62) ) /*0x42434f*/
      this->q19B = 1; /*0x424358*/
  }
  if ( this->q19B ) /*0x42435f*/
    goto LABEL_187; /*0x424367*/
  LOBYTE(Speed) = this->q19C; /*0x42436d*/
  if ( (_BYTE)Speed ) /*0x424375*/
  {
    this->q19C = 0; /*0x424377*/
    return Speed; /*0x424385*/
  }
  v63 = this->AnimClass_field_0x184; /*0x424386*/
  if ( v63 ) /*0x42438e*/
  {
    Speed = v63 - 1; /*0x424390*/
    this->AnimClass_field_0x184 = Speed; /*0x424393*/
    if ( !Speed ) /*0x424399*/
      LOBYTE(Speed) = ProductionCompletionCallback(this); /*0x4243a1*/
    return Speed; /*0x4243ad*/
  }
  Speed = *((unsigned __int8 *)this + 144); /*0x4243ae*/
  if ( (_BYTE)Speed )
  {
    if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 864) ) /*0x4243c2*/
    {
      v64 = (int *)(*(int (__thiscall **)(#361 *, double *))(this->q048)(this, &v120); /*0x4243d5*/
      v65 = *v64; /*0x4243d8*/
      v66 = v64[1]; /*0x4243da*/
      v67 = v64[2]; /*0x4243dd*/
      v122 = v65 - 384; /*0x4243e6*/
      v123 = v66 - 384; /*0x4243fa*/
      v124 = v67; /*0x4243fe*/
      v68 = *((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v122) + 17); /*0x424407*/
      if ( v68 == -1 || *(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][528743] + 4 * v68) + 668) != this->AnimClass_field_0xC8 ) /*0x424425*/
        this->q19B = 1; /*0x424427*/
    }
    v69 = (_DWORD *)this->AnimClass_field_0xC8; /*0x42442e*/
    if ( v69[176] == -1 ) /*0x42443a*/
    {
      *(_DWORD *)(this->AnimClass_field_0xC8 + 704) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v69 + 156))(v69) + 6); /*0x42444e*/
      v70 = this->AnimClass_field_0xC8; /*0x424454*/
      if ( *(_BYTE *)(v70 + 882) ) /*0x42445a*/
        *(int *)(v70 + 704) /= 2; /*0x42446f*/
    }
    v71 = this->AnimClass_field_0xC8; /*0x424475*/
    if ( *(_DWORD *)(v71 + 700) == -1 ) /*0x424481*/
      *(_DWORD *)(v71 + 700) = *(_DWORD *)(v71 + 704); /*0x424489*/
    (*(void (__thiscall **)(#361 *, int))(this->q124)(this, 2); /*0x424495*/
    LOBYTE(Speed) = this->q19E; /*0x42449b*/
    if ( !(_BYTE)Speed )
    {
      LOBYTE(Speed) = this->q11A; /*0x4244a9*/
      if ( !(_BYTE)Speed )
      {
        Speed = Locomotor::GetSpeed((int *)this + 45); /*0x4244bf*/
        if ( Speed || (Speed = this->AnimClass_field_0x30) == 0 ) /*0x4244d4*/
        {
          this->q0B0 = 0; /*0x424560*/
          return Speed; /*0x42456e*/
        }
        v72 = this->q031 + this->q02B; /*0x4244e6*/
        this->q0B0 = 1; /*0x4244e8*/
        this->q02B = v72; /*0x4244ef*/
        v73 = v123; /*0x4244fb*/
        this->AnimClass_field_0xB4 = dword_A8ED54[12]; /*0x4244ff*/
        this->AnimClass_field_0xB8 = v73; /*0x424501*/
        this->AnimClass_field_0xBC = Speed; /*0x424504*/
        v74 = this->q02B; /*0x42450d*/
        if ( *(double *)(this->AnimClass_field_0xC8 + 680) <= 0.0 || this->q194 ) /*0x42452a*/
          goto LABEL_120; /*0x42452a*/
        v75 = this->q033; /*0x424538*/
        if ( v75 && (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 44))(v75) == 36 ) /*0x42454a*/
          v76 = *(double *)(this->AnimClass_field_0xC8 + 680) * 5.0; /*0x424558*/
        else
          v76 = *(double *)(this->AnimClass_field_0xC8 + 680); /*0x424575*/
        *((double *)this + 49) = v76 + *((double *)this + 49); /*0x424581*/
        if ( *((double *)this + 49) < 1.0 || this->q198 ) /*0x42459e*/
          goto LABEL_120; /*0x42459e*/
        v77 = Math::RoundToInt(*((double *)this + 49)); /*0x4245b7*/
        v78 = this->AnimClass_field_0xC8; /*0x4245b9*/
        v119 = v77; /*0x4245bf*/
        *((double *)this + 49) = *((double *)this + 49) - (double)v77; /*0x4245d5*/
        v113 = !strcmp((const char *)(v78 + 36), aInviso)
             ? *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4008)
             : *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3976);
        v79 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122); /*0x424623*/
        PlaySoundEffectAt(v79, v77, 0, v113, 1, 0); /*0x424647*/
        LOBYTE(Speed) = this->q090; /*0x42464c*/
        if ( (_BYTE)Speed ) /*0x424654*/
        {
LABEL_120:
          v80 = this->AnimClass_field_0xC8; /*0x42465d*/
          v81 = *(_DWORD *)(v80 + 664); /*0x424665*/
          if ( v81 && v74 + *(_DWORD *)(v80 + 692) == v81 && !this->q194 ) /*0x42467b*/
            CreateUnitOnCompletion(this); /*0x424687*/
          Speed = this->AnimClass_field_0xC8; /*0x42468c*/
          if ( *(_BYTE *)(Speed + 880) ) /*0x424692*/
          {
            if ( this->q195 <= 1u ) /*0x4246a5*/
            {
              if ( v74 < *(_DWORD *)(Speed + 704) && v74 ) /*0x4246b1*/
                goto LABEL_132; /*0x4246b1*/
LABEL_131:
              Speed = -this->q031; /*0x4246ce*/
              this->q031 = Speed; /*0x4246d6*/
              return Speed; /*0x4246e3*/
            }
            v82 = *(_DWORD *)(Speed + 692); /*0x4246b8*/
            if ( v74 >= *(_DWORD *)(Speed + 700) - v82 || v74 == v82 ) /*0x4246cc*/
              goto LABEL_131; /*0x4246cc*/
          }
LABEL_132:
          v83 = this->q195; /*0x4246e4*/
          if ( v83 > 1u ) /*0x4246ed*/
          {
            if ( v74 >= *(_DWORD *)(Speed + 700) - *(_DWORD *)(Speed + 692) ) /*0x42470a*/
              goto LABEL_143; /*0x42470a*/
          }
          else if ( v74 >= *(_DWORD *)(Speed + 704) ) /*0x4246f5*/
          {
            goto LABEL_143; /*0x4246f5*/
          }
          if ( !*(_BYTE *)(Speed + 882) ) /*0x42470c*/
            goto LABEL_191; /*0x42470c*/
          if ( *(_BYTE *)(Speed + 881) ) /*0x424716*/
          {
LABEL_142:
            if ( v74 > 0 ) /*0x424754*/
              return Speed; /*0x424754*/
            goto LABEL_143; /*0x424754*/
          }
          if ( this->q120 || v74 < *(_DWORD *)(Speed + 700) - *(_DWORD *)(Speed + 692) ) /*0x424738*/
          {
LABEL_191:
            if ( !*(_BYTE *)(Speed + 881) ) /*0x42473a*/
            {
              LOBYTE(Speed) = this->q120; /*0x424744*/
              if ( !(_BYTE)Speed ) /*0x42474c*/
                return Speed; /*0x42474c*/
            }
            goto LABEL_142; /*0x42474c*/
          }
LABEL_143:
          if ( v83 && v83 != 0xFF ) /*0x424761*/
            this->q195 = v83 - 1; /*0x424765*/
          v84 = this->AnimClass_field_0xC8; /*0x424773*/
          if ( this->q195 ) /*0x42476b*/
          {
            if ( *(_BYTE *)(v84 + 881) || this->q120 ) /*0x424785*/
              this->q02B = *(_DWORD *)(v84 + 700); /*0x4247ab*/
            else
              this->q02B = *(_DWORD *)(v84 + 696) - *(_DWORD *)(v84 + 692); /*0x42479d*/
            Speed = this->AnimClass_field_0xC8; /*0x4247b1*/
            v85 = *(_DWORD *)(Speed + 732); /*0x4247b7*/
            if ( v85 || *(_DWORD *)(Speed + 736) ) /*0x4247c1*/
            {
              Speed = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), v85, *(_DWORD *)(Speed + 736)); /*0x4247e0*/
              this->AnimClass_field_0x184 = Speed; /*0x4247e5*/
            }
            return Speed; /*0x4247f2*/
          }
          v86 = *(_DWORD **)(v84 + 712); /*0x4247f3*/
          if ( v86 ) /*0x4247fb*/
          {
            this->AnimClass_field_0xC8 = v86; /*0x424801*/
            if ( v86[176] == -1 ) /*0x42480f*/
            {
              *(_DWORD *)(this->AnimClass_field_0xC8 + 704) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v86 + 156))(v86) /*0x424823*/
                                                                     + 6);
              v87 = this->AnimClass_field_0xC8; /*0x424829*/
              if ( *(_BYTE *)(v87 + 882) ) /*0x42482f*/
                *(int *)(v87 + 704) /= 2; /*0x424844*/
            }
            v88 = this->AnimClass_field_0xC8; /*0x42484a*/
            if ( *(_DWORD *)(v88 + 700) == -1 ) /*0x424856*/
              *(_DWORD *)(v88 + 700) = *(_DWORD *)(v88 + 704); /*0x42485e*/
            v89 = this->AnimClass_field_0xC8; /*0x424864*/
            this->q19B = 0; /*0x42486a*/
            v90 = *(_BYTE *)(v89 + 708); /*0x424871*/
            this->AnimClass_field_0x188 = 0; /*0x424877*/
            this->q195 = v90; /*0x42487d*/
            v91 = v89; /*0x424883*/
            this->q18C = 0; /*0x424885*/
            v92 = *(_DWORD *)(v89 + 740); /*0x42488b*/
            ProductionTimeMult = *(char **)(v89 + 688); /*0x424891*/
            if ( v92 || *(_DWORD *)(v91 + 744) ) /*0x42489b*/
              ProductionTimeMult = (char *)Random::Range( /*0x4248b7*/
                                             (_DWORD *)(MEMORY[0x87F7E8][536210] + 536),
                                             v92,
                                             *(_DWORD *)(v91 + 744));
            if ( *(_BYTE *)(this->AnimClass_field_0xC8 + 866) ) /*0x4248c2*/
              ProductionTimeMult = Rules::GetProductionTimeMult(&MEMORY[0x87F7E8][539870], (int)ProductionTimeMult); /*0x4248d2*/
            this->AnimClass_field_0xB4 = dword_A8ED54[12]; /*0x4248e3*/
            this->AnimClass_field_0xB8 = v123; /*0x424905*/
            this->AnimClass_field_0xBC = ProductionTimeMult; /*0x42490a*/
            this->AnimClass_field_0x30 = ProductionTimeMult; /*0x42490d*/
            this->q02B = *(_DWORD *)(this->AnimClass_field_0xC8 + 692); /*0x42491f*/
            LOBYTE(Speed) = ProductionCompletionCallback(this); /*0x424925*/
            return Speed; /*0x424931*/
          }
          if ( *(_DWORD *)(v84 + 844) != -1 ) /*0x424938*/
          {
            v94 = (int *)((char *)this + 156); /*0x42493e*/
            v122 = this->q027; /*0x424948*/
            v95 = *(_DWORD *)this; /*0x42494c*/
            v123 = this->q028; /*0x424951*/
            v124 = this->q029; /*0x42495d*/
            (*(void (__thiscall **)(#361 *, int *))(v95 + 244))(this, &v122); /*0x424963*/
            if ( *(_DWORD *)(this->AnimClass_field_0xC8 + 844) <= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3316) ) /*0x424982*/
            {
              v96 = this->q060; /*0x424988*/
              if ( !v96 || *(_BYTE *)(v96 + 501) ) /*0x424992*/
              {
                v97 = MEMORY[0x87F7E8][524948]; /*0x42499c*/
                v98 = HouseTypeClass::Find(g_INI_Key_Civilian); /*0x4249a7*/
                v99 = 0; /*0x4249ac*/
                if ( v97 > 0 ) /*0x4249b0*/
                {
                  v100 = MEMORY[0x87F7E8][524945]; /*0x4249b2*/
                  while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v100 + 52) + 188) != v98 ) /*0x4249c3*/
                  {
                    ++v99; /*0x4249c5*/
                    v100 += 4; /*0x4249c6*/
                    if ( v99 >= v97 ) /*0x4249cb*/
                      goto LABEL_176; /*0x4249cb*/
                  }
                  this->q060 = *(_DWORD *)(MEMORY[0x87F7E8][524945] + 4 * v99); /*0x4249d8*/
                }
              }
LABEL_176:
              if ( this->q060 ) /*0x4249de*/
              {
                v101 = *(_DWORD *)(MEMORY[0x87F7E8][539353] /*0x424a14*/
                                 + 4
                                 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 3304)
                                                         + 4 * *(_DWORD *)(this->AnimClass_field_0xC8 + 844))
                                             + 3576));
                v102 = (_BYTE *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v101 + 140))( /*0x424a1f*/
                                  v101,
                                  this->q060);
                v122 = *v94; /*0x424a27*/
                v123 = this->q028; /*0x424a30*/
                v103 = *(_DWORD *)v102; /*0x424a34*/
                v124 = this->q029; /*0x424a39*/
                LOBYTE(Speed) = (*(int (__thiscall **)(_BYTE *, int *, int))(v103 + 216))(v102, &v122, 96); /*0x424a42*/
                if ( !(_BYTE)Speed ) /*0x424a4a*/
                {
                  --this->q02B; /*0x424b23*/
                  return Speed; /*0x424b30*/
                }
                v104 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122); /*0x424a59*/
                LOWORD(v117) = *v104 / 256; /*0x424a6c*/
                HIWORD(v117) = v104[1] / 256; /*0x424a84*/
                v119 = v117; /*0x424a8d*/
                v105 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v119); /*0x424a97*/
                if ( v105 ) /*0x424a9e*/
                {
                  if ( (v105[80] & 0x100) != 0 ) /*0x424aa9*/
                  {
                    v106 = *v94; /*0x424aab*/
                    v107 = this->q028; /*0x424aae*/
                    v108 = this->q029; /*0x424ab1*/
                    v122 = v106; /*0x424ab4*/
                    v123 = v107; /*0x424abc*/
                    if ( v108 > *(_DWORD *)((*(int (__thiscall **)(_DWORD *, int *))(*v105 + 72))(v105, &v122) + 8) ) /*0x424acb*/
                    {
                      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v102 + 292))(v102, 0); /*0x424ad3*/
                      v109 = *(_DWORD *)v102; /*0x424ad9*/
                      v102[140] = 1; /*0x424adf*/
                      (*(void (__thiscall **)(_BYTE *, int))(v109 + 292))(v102, 1); /*0x424ae6*/
                    }
                  }
                }
                if ( !*(_BYTE *)(this->q060 + 492) ) /*0x424af2*/
                  (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v102 + 488))(v102, 15, 0); /*0x424b04*/
              }
            }
            v110 = *(_DWORD *)this; /*0x424b0a*/
            this->q179 = 1; /*0x424b0e*/
            LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(v110 + 248))(this); /*0x424b15*/
            return Speed; /*0x424b22*/
          }
          this->q179 = 1; /*0x424b31*/
LABEL_187:
          LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(this->TintColor)(this); /*0x424b38*/
        }
      }
    }
  }
  return Speed; /*0x42429e*/
}


// ==== 0x00424B50  BuildingClass::AimTurret  this=AnimClass  sig=csp ====
void __thiscall BuildingClass::AimTurret(_DWORD *this, IUnknown *aP1)
{
  _BYTE *v3; // ebp
  char v4; // bl
  int v5; // ecx
  AudioController *v6; // edx
  int *v7; // eax
  int v8; // edx
  int v9; // eax
  int *v10; // eax
  int v11; // ebx
  int v12; // ebp
  _DWORD *v13; // eax
  int v14; // ebx
  int v15; // edx
  int v16; // ebp
  int v17; // [esp+10h] [ebp-24h] BYREF
  int v18; // [esp+14h] [ebp-20h]
  int v19; // [esp+18h] [ebp-1Ch]
  _BYTE v20[8]; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-10h]
  _BYTE v22[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (_BYTE *)this->AnimClass_field_0xCC; /*0x424b59*/
  if ( v3 ) /*0x424b61*/
  {
    v4 = this->isOnMap; /*0x424b67*/
    if ( v4 ) /*0x424b6c*/
      RemoveTarget((IUnknown *)this); /*0x424b74*/
    v5 = 0; /*0x424b7f*/
    if ( *(int *)&HouseClass_Player.__pad_5568[22276] > 0 ) /*0x424b83*/
    {
      v6 = *(AudioController **)&HouseClass_Player.__pad_5568[22264]; /*0x424b85*/
      do /*0x424ba5*/
      {
        if ( *(_DWORD **)v6->__pad_0 != this && *(_DWORD *)(*(_DWORD *)v6->__pad_0 + 204) == this->AnimClass_field_0xCC ) /*0x424b9d*/
          break; /*0x424b9d*/
        ++v5; /*0x424b9f*/
        v6 = (AudioController *)((char *)v6 + 4); /*0x424ba0*/
      }
      while ( v5 < *(int *)&HouseClass_Player.__pad_5568[22276] ); /*0x424ba5*/
    }
    if ( v5 == *(_DWORD *)&HouseClass_Player.__pad_5568[22276] ) /*0x424ba9*/
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 380))(v3); /*0x424bb0*/
      v3[132] = 0; /*0x424bb6*/
    }
    v7 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v20); /*0x424bc6*/
    v17 = *v7; /*0x424bcb*/
    v18 = v7[1]; /*0x424bd2*/
    v8 = v7[2]; /*0x424bda*/
    v9 = *this; /*0x424bdd*/
    v19 = v8; /*0x424be2*/
    this->AnimClass_field_0xCC = 0; /*0x424be6*/
    (*(void (__thiscall **)(_DWORD *, int *))(v9 + 436))(this, &v17); /*0x424bf0*/
    if ( v4 ) /*0x424bf8*/
      Targeting::Readd((IUnknown *)this); /*0x424c00*/
  }
  if ( aP1 ) /*0x424c0b*/
  {
    v10 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v20); /*0x424c16*/
    v11 = *v10; /*0x424c19*/
    v12 = v10[1]; /*0x424c1c*/
    v21 = v10[2]; /*0x424c22*/
    RemoveTarget((IUnknown *)this); /*0x424c2b*/
    aP1->__pad_68[28] = 1; /*0x424c30*/
    this->AnimClass_field_0xCC = aP1; /*0x424c37*/
    v13 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(aP1->field_0 + 72))(aP1, v22); /*0x424c46*/
    v14 = v11 - *v13; /*0x424c51*/
    v15 = *this; /*0x424c5d*/
    v16 = v12 - v13[1]; /*0x424c5f*/
    v19 = v21 - v13[2]; /*0x424c61*/
    v17 = v14; /*0x424c68*/
    v18 = v16; /*0x424c6c*/
    (*(void (__thiscall **)(_DWORD *, int *))(v15 + 436))(this, &v17); /*0x424c70*/
    Targeting::Readd((IUnknown *)this); /*0x424c7c*/
  }
}


// ==== 0x00424C90  BuildingClass::SetField95  this=AnimClass  sig=csp ====
int __thiscall Accessor_424c90(_DWORD *this, int a2)
{
  this->AnimClass_field_0x17C = a2; /*0x424c94*/
  return a2; /*0x424c9a*/
}


// ==== 0x00424CA0  Function::424CA0  this=AnimClass  sig=csp ====
int __thiscall sub_424CA0(_DWORD *this, int a2)
{
  this->AnimClass_field_0x180 = a2; /*0x424ca4*/
  return a2; /*0x424caa*/
}


// ==== 0x00424CB0  AnimClass::InWhichLayer_AttachedObjectLayer  this=AnimClass  sig=csp ====
int __thiscall AnimClass::InWhichLayer_AttachedObjectLayer(_DWORD *this)
{
  int v2; // eax

  if ( this->AnimClass_field_0xCC ) /*0x424cb0*/
    return 2; /*0x424cba*/
  v2 = this->AnimClass_field_0xC8; /*0x424cc0*/
  if ( v2 ) /*0x424cc8*/
    return *(_DWORD *)(v2 + 868); /*0x424cca*/
  else
    return 3; /*0x424cd1*/
}


// ==== 0x00424CE0  ObjectClass::ProductionCompletionCallback  this=IUnknown  sig=csp ====
// Production completion callback (543B). Handles audio, special building anims, unit creation.
bool __thiscall ProductionCompletionCallback(BuildingClass_Full *this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  IUnknown *v5; // ebx
  _DWORD *v6; // edi
  void **v7; // ebp
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  AnimClass *v13; // eax
  int *p_Location_X; // esi
  __int16 *v15; // ebx
  int v17; // [esp-8h] [ebp-38h]
  int v18; // [esp+Ch] [ebp-24h] BYREF
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  char v21[12]; // [esp+18h] [ebp-18h] BYREF
  char v22[12]; // [esp+24h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(BuildingClass_Full *, int))(*(_DWORD *)this->_pad_base + 292))(this, 2); /*0x424ceb*/
  if ( BYTE2(this->IronTintTimer_Padding) || *(_DWORD *)(this->MissionTimer_StartTime + 760) == -1 ) /*0x424d08*/
  {
    AudioController::Stop((int *)((char *)&this->IronTintTimer_TimeLeft + 2)); /*0x424d38*/
  }
  else
  {
    v2 = (*(int (__thiscall **)(BuildingClass_Full *, int *))(*(_DWORD *)this->_pad_base + 72))(this, &v18); /*0x424d1a*/
    StartAudioControllerAt(*(_DWORD *)(this->MissionTimer_StartTime + 760), v2, (int)&this->IronTintTimer_TimeLeft + 2); /*0x424d2b*/
  }
  AudioController::Stop(&this->_pad_1A4[18]); /*0x424d43*/
  if ( !*(_DWORD *)(this->MissionTimer_StartTime + 664) ) /*0x424d4e*/
    CreateUnitOnCompletion(this); /*0x424d5a*/
  LOBYTE(v3) = BYTE2(this->IronTintTimer_Padding); /*0x424d5f*/
  if ( !(_BYTE)v3 ) /*0x424d67*/
  {
    LOBYTE(v3) = *(_BYTE *)(this->MissionTimer_StartTime + 855); /*0x424d73*/
    if ( (_BYTE)v3 ) /*0x424d7b*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, char *))(*(_DWORD *)this->_pad_base + 72))(this, v21); /*0x424d8a*/
      v5 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], v4); /*0x424d98*/
      v3 = BuildingClass::FindByCellHash(v5); /*0x424d9c*/
      if ( v3 != -1 ) /*0x424da4*/
      {
        v6 = *(_DWORD **)&MEMORY[0xB0F4EC]->__pad_0[4 * v3]; /*0x424db3*/
        CellClass::ReduceTiberium((int)v5, (unsigned __int8)v5->__pad_8C[146] + 1); /*0x424dc0*/
        if ( (int)v6[53] > 0 && !((int)abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) % 3) ) /*0x424def*/
        {
          v7 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x424e04*/
          if ( v7 ) /*0x424e0b*/
          {
            v8 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, char *))(*(_DWORD *)this->_pad_base + 72))( /*0x424e16*/
                          this,
                          v22);
            v9 = *v8; /*0x424e19*/
            v10 = v8[1]; /*0x424e1b*/
            v11 = v8[2]; /*0x424e1e*/
            v18 = v9; /*0x424e21*/
            v20 = v11 + 10; /*0x424e2e*/
            v17 = v6[53] - 1; /*0x424e3f*/
            v19 = v10; /*0x424e42*/
            v12 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v17); /*0x424e46*/
            v13 = AnimClass::ctor(v7, *(void **)(v6[50] + 4 * v12), &v18, 0, 1, (void *)0x600, 0, 0); /*0x424e69*/
          }
          else
          {
            v13 = 0; /*0x424e70*/
          }
          *(_DWORD *)&v13->field_D0[4] = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + v6[48]) + 780); /*0x424e88*/
          *(_DWORD *)&v13->field_D0[44] = *(__int16 *)&v5->__pad_8C[126]; /*0x424e95*/
        }
        p_Location_X = &this->Location_X; /*0x424e9b*/
        v18 = *p_Location_X; /*0x424ea7*/
        v19 = p_Location_X[1]; /*0x424eae*/
        v20 = p_Location_X[2]; /*0x424eba*/
        PlaySoundEffectAt( /*0x424ed1*/
          &v18,
          *(_DWORD *)&MEMORY[0x8871E0]->__pad_240[808],
          0,
          *(_DWORD *)&MEMORY[0x8871E0]->__pad_C3C[876],
          0,
          0);
        House::AnnounceUpgrade((int)v5, -1); /*0x424eda*/
        v15 = (__int16 *)&v5->field_24; /*0x424edf*/
        Cell::SetRadar(&MEMORY[0x87F7E8].field_0, v15); /*0x424ee8*/
        Radar::Update(&MEMORY[0x87F7E8], v15); /*0x424ef3*/
      }
    }
  }
  return v3; /*0x424ef9*/
}


// ==== 0x00424F00  ObjectClass::CreateUnitOnCompletion  this=IUnknown  sig=csp ====
// Create unit at completion (583B). Calculates exit cell, foundation offsets, spawns unit.
bool __thiscall CreateUnitOnCompletion(BuildingClass_Full *this)
{
  _DWORD *v2; // eax
  void *v3; // eax
  int v4; // edx
  int v5; // ebp
  int MissionTimer_StartTime; // eax
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
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h]
  int v21; // [esp+1Ch] [ebp-14h]
  _DWORD v22[4]; // [esp+20h] [ebp-10h] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, _DWORD *))(*(_DWORD *)this->_pad_base + 72))(this, v22); /*0x424f12*/
  LOWORD(v17) = *v2 / 256; /*0x424f25*/
  HIWORD(v17) = v2[1] / 256; /*0x424f3e*/
  v19 = v17; /*0x424f4b*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x424f50*/
  v4 = *(_DWORD *)this->_pad_base; /*0x424f55*/
  v5 = 30; /*0x424f57*/
  v21 = (int)v3; /*0x424f5e*/
  v18 = 30; /*0x424f62*/
  if ( (*(int (__thiscall **)(BuildingClass_Full *))(v4 + 108))(this) ) /*0x424f66*/
  {
    MissionTimer_StartTime = this->MissionTimer_StartTime; /*0x424f72*/
    if ( *(_DWORD *)(MissionTimer_StartTime + 668) == -1 ) /*0x424f7e*/
      *(_DWORD *)(this->MissionTimer_StartTime + 668) = Building::GetFoundationSize( /*0x424f9c*/
                                                          v22,
                                                          *(_DWORD *)(MissionTimer_StartTime + 664))[2];
    v7 = this->MissionTimer_StartTime; /*0x424fa2*/
    if ( *(_DWORD *)(v7 + 672) == -1 ) /*0x424fae*/
      *(_DWORD *)(this->MissionTimer_StartTime + 672) = Building::GetFoundationSize(v22, *(_DWORD *)(v7 + 664))[3]; /*0x424fcc*/
    v8 = this->MissionTimer_StartTime; /*0x424fd2*/
    v5 = *(_DWORD *)(v8 + 668); /*0x424fd8*/
    v18 = *(_DWORD *)(v8 + 672); /*0x424fe4*/
  }
  v9 = this->MissionTimer_StartTime; /*0x424fe8*/
  if ( *(_DWORD *)(v9 + 716) != -1 ) /*0x424ff4*/
  {
    for ( i = 0; i < *(_DWORD *)(v9 + 720); ++i ) /*0x425000*/
    {
      v22[0] = this->Location_X; /*0x42500c*/
      v22[1] = this->Location_Y; /*0x425013*/
      v22[2] = this->Location_Z; /*0x42501f*/
      CreateFireAtSW((_DWORD *)MEMORY[0xA8ED78], *((_DWORD *)MEMORY[0xA83D9C] + *(_DWORD *)(v9 + 716)), (int)v22); /*0x425039*/
      v9 = this->MissionTimer_StartTime; /*0x42503e*/
    }
  }
  v11 = (*(int (__thiscall **)(BuildingClass_Full *))(*(_DWORD *)this->_pad_base + 456))(this); /*0x425051*/
  if ( v11 < 30 ) /*0x42505a*/
  {
    v12 = this->MissionTimer_StartTime; /*0x425060*/
    if ( !*(_BYTE *)(v12 + 875) /*0x4250ab*/
      || *(_BYTE *)(v12 + 877)
      && (v20 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646),
          (double)v20 * 4.656612877414201e-10 >= 0.5) )
    {
      LOBYTE(v11) = *(_BYTE *)(this->MissionTimer_StartTime + 877); /*0x4250d7*/
      if ( (_BYTE)v11 ) /*0x4250df*/
      {
        CellClass::ReduceTiberium(v21, 6); /*0x4250e7*/
        if ( *(_BYTE *)(this->MissionTimer_StartTime + 878) ) /*0x4250f2*/
        {
          v14 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, _DWORD *))(*(_DWORD *)this->_pad_base + 72))( /*0x42510c*/
                            this,
                            v22);
          LOBYTE(v11) = TimedCreateUnitAtCoords(v14, 300, 300, 1); /*0x425116*/
        }
        else
        {
          v15 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, _DWORD *))(*(_DWORD *)this->_pad_base + 72))( /*0x425133*/
                            this,
                            v22);
          LOBYTE(v11) = TimedCreateUnitAtCoords(v15, v5, v18, 0); /*0x42513a*/
        }
      }
    }
    else
    {
      v13 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, _DWORD *))(*(_DWORD *)this->_pad_base + 72))( /*0x4250bd*/
                        this,
                        v22);
      LOBYTE(v11) = StandardCreateUnitAtCoords(v13, v5, v18, 0); /*0x4250c4*/
    }
  }
  return v11; /*0x4250c9*/
}


// ==== 0x00425150  AnimClass::ClearTargetReferences  this=AnimClass  sig=csp ====
ParticleSystemClass *__thiscall AnimClass::ClearTargetReferences(int *this, ParticleSystemClass *a2, int a3)
{
  ParticleSystemClass *result; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax

  Object::Unlink((#374 *)this); /*0x42515f*/
  result = (ParticleSystemClass *)this->q033; /*0x425164*/
  if ( result == a2 && a2 ) /*0x425172*/
  {
    RemoveTarget((IUnknown *)this); /*0x42517a*/
    (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->q033 + 96))(this->q033, this); /*0x425188*/
    v5 = *this; /*0x42518b*/
    this->q033 = 0; /*0x425190*/
    this->q19B = 1; /*0x425196*/
    result = (ParticleSystemClass *)(*(int (__thiscall **)(int *, _DWORD))(v5 + 292))(this, 0); /*0x42519d*/
  }
  if ( (ParticleSystemClass *)this->AnimClass_field_0xC8 == a2 ) /*0x4251a9*/
    this->AnimClass_field_0xC8 = 0; /*0x4251ab*/
  if ( (ParticleSystemClass *)this->AnimClass_field_0x17C == a2 ) /*0x4251b7*/
  {
    v6 = *this; /*0x4251b9*/
    this->AnimClass_field_0x17C = 0; /*0x4251bd*/
    result = (ParticleSystemClass *)(*(int (__thiscall **)(int *))(v6 + 248))(this); /*0x4251c3*/
  }
  if ( (ParticleSystemClass *)this->q060 == a2 ) /*0x4251cf*/
  {
    v7 = *this; /*0x4251d1*/
    this->AnimClass_field_0x17C = 0; /*0x4251d5*/
    return (ParticleSystemClass *)(*(int (__thiscall **)(int *))(v7 + 248))(this); /*0x4251db*/
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
  PlaySoundEffectAt(v5, MEMORY[0x8871E0][1].GUIMoveInSound[1], 0, MEMORY[0x8871E0]->?, 0, 0); /*0x425237*/
  result = MEMORY[0xA8B238][0]; /*0x42523c*/
  if ( !MEMORY[0xA8B238][0] ) /*0x425243*/
    return FadePalette(&MEMORY[0x885780], 30, (void (*)(void))Event::Dispatch); /*0x425254*/
  return result; /*0x425259*/
}


// ==== 0x00425260  BuildingClass::SetField8  this=BuildingClass  sig=csp ====
void __thiscall Accessor_425260(_BYTE *this)
{
  this->q19E = 1; /*0x425260*/
}


// ==== 0x00425270  VtableStub::425270  this=VtableStub  sig=csp ====
void __thiscall Accessor_425270(_BYTE *this)
{
  this->q19E = 0; /*0x425270*/
}


// ==== 0x00425280  AnimClass::SaveLoad_Prefix  this=AnimClass  sig=csp ====
int __thiscall AnimClass::SaveLoad_Prefix(void *this, ObjectClass *aP1, int aP1a)
{
  ObjectClass *Register; // edi
  int fallRate; // eax
  int v6; // eax
  int v7; // eax

  Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this); /*0x425291*/
  if ( (int)Register >= 0 ) /*0x425295*/
  {
    if ( aP1 ) /*0x42529d*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x4252a6*/
      __4type_info_AAEAAV0_ABV0__Z(&aP1[1].__pad_0[8], (int)&aP1a); /*0x4252b6*/
      *(_DWORD *)aP1->__pad_0 = &AnimClass::`vftable'; /*0x4252bb*/
      *(_DWORD *)&aP1->__pad_0[4] = &AnimClass::`vftable'; /*0x4252c1*/
      *(_DWORD *)&aP1->__pad_0[8] = &vt_AnimClass; /*0x4252c8*/
      *(_DWORD *)&aP1->__pad_0[12] = &off_7E3328; /*0x4252cf*/
    }
    AudioController::Init(&aP1[2].ambientSoundController[3]); /*0x4252dc*/
    AudioController::Init(&aP1[2].customSound_controller[3]); /*0x4252e7*/
    ObjectPtr::RegisterForTracking( /*0x4252f8*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].referenceCount);
    ObjectPtr::RegisterForTracking( /*0x425309*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].NeedsSaveOrLink);
    ObjectPtr::RegisterForTracking( /*0x42531a*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[2].objectTypeFlags);
    ObjectPtr::RegisterForTracking( /*0x42532b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[2].owningHouseIndex);
    fallRate = aP1[1].fallRate; /*0x425330*/
    if ( fallRate <= -1 ) /*0x425339*/
    {
      if ( LOBYTE(aP1[1].nextObject) ) /*0x42535f*/
      {
        v6 = FileExtension::MapHandler((ObjectClass *)((char *)aP1 + 220)); /*0x42536f*/
        if ( v6 ) /*0x425376*/
        {
          v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0); /*0x42537e*/
          if ( v7 ) /*0x425383*/
          {
            aP1[1].owningHouseIndex = *(_DWORD *)(v7 + 780); /*0x42538b*/
            return (int)Register->__pad_0; /*0x425395*/
          }
        }
      }
      aP1[1].owningHouseIndex = 0; /*0x425398*/
    }
    else if ( fallRate < *(int *)stru_B05488.__pad_58 ) /*0x425341*/
    {
      aP1[1].owningHouseIndex = *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * fallRate) + 780); /*0x425352*/
      return (int)Register->__pad_0; /*0x42535c*/
    }
  }
  return (int)Register->__pad_0; /*0x42535a*/
}


// ==== 0x004253B0  AnimClass::SaveLoad_Prefix_0  this=AnimClass  sig=csp ====
int __stdcall AnimClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx

  v3 = aP0->ChargerTurrets[6]; /*0x4253b6*/
  if ( v3 && (v4 = *(_DWORD *)stru_B05488.__pad_58 - 1, *(_DWORD *)stru_B05488.__pad_58 - 1 >= 0) ) /*0x4253c8*/
  {
    v5 = stru_B05488.field_4C + 4 * v4; /*0x4253d0*/
    while ( v3 != *(_DWORD *)(*(_DWORD *)v5 + 780) ) /*0x4253db*/
    {
      --v4; /*0x4253dd*/
      v5 -= 4; /*0x4253de*/
      if ( v4 < 0 ) /*0x4253e3*/
        goto LABEL_6; /*0x4253e3*/
    }
    aP0->ChargerTurrets[7] = v4; /*0x425404*/
  }
  else
  {
LABEL_6:
    aP0->ChargerTurrets[7] = -1; /*0x4253e5*/
  }
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4253ff*/
}


// ==== 0x00425410  AnimClass::ProcessPower  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessPower(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx

  HouseClass::ProcessPower((#374 *)this); /*0x425419*/
  v3 = *(_DWORD *)(this + 204); /*0x42541e*/
  if ( v3 ) /*0x425426*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x42542f*/
    Power::TimerProcess(v4); /*0x425435*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 208)); /*0x425443*/
  Power::TimerProcess(*(_DWORD *)(this + 252)); /*0x425451*/
  Power::TimerProcess(*(_DWORD *)(this + 256)); /*0x42545f*/
  Power::TimerProcess(*(_DWORD *)(this + 260)); /*0x42546d*/
  Power::TimerProcess(*(_DWORD *)(this + 388)); /*0x42547b*/
  Checksummer::Add_double(*(_DWORD *)(this + 392), *(_DWORD *)(this + 396)); /*0x425490*/
  Power::TimerProcess(*(_DWORD *)(this + 400)); /*0x42549e*/
  LOBYTE(v5) = *(_BYTE *)(this + 404); /*0x4254a3*/
  Power::FlagProcess(a2, v5); /*0x4254ac*/
  v6 = Power::TimerProcess(*(unsigned __int8 *)(this + 405)); /*0x4254bc*/
  LOBYTE(v6) = *(_BYTE *)(this + 406); /*0x4254c1*/
  Power::FlagProcess(a2, v6); /*0x4254ca*/
  LOBYTE(v7) = *(_BYTE *)(this + 407); /*0x4254cf*/
  Power::FlagProcess(a2, v7); /*0x4254d8*/
  LOBYTE(v8) = *(_BYTE *)(this + 411); /*0x4254dd*/
  v9 = Power::FlagProcess(a2, v8); /*0x4254e6*/
  LOBYTE(v9) = *(_BYTE *)(this + 412); /*0x4254eb*/
  Power::FlagProcess(a2, v9); /*0x4254f4*/
  LOBYTE(v10) = *(_BYTE *)(this + 414); /*0x4254f9*/
  return Power::FlagProcess(a2, v10); /*0x425507*/
}


// ==== 0x00425510  AnimClass::CheckEndOfSequence  this=AnimClass  sig=csp ====
int __thiscall AnimClass::_vt123(_DWORD *this)
{
  return *(_DWORD *)(this->AnimClass_field_0xC8 + 704); /*0x42551c*/
}


// ==== 0x00425520  AbstractClass::updateLayer  this=AnimClass  sig=csp ====
unsigned int __thiscall AbstractClass::updateLayer(Concurrency::details::SchedulerBase *this)
{
  return this->AnimClass_field_0xC8; /*0x425526*/
}


// ==== 0x00425530  AnimClass::Undeploy  this=AnimClass  sig=csp ====
char __thiscall AnimClass::Undeploy(#374 *this)
{
  CoordStruct *v2; // eax
  _DWORD *v3; // eax
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (CoordStruct *)this->AnimClass_field_0xC8; /*0x425536*/
  if ( v2 && BYTE1(v2[71].X) ) /*0x425540*/
  {
    v5[0] = this->q027; /*0x425556*/
    v5[1] = this->q028; /*0x425567*/
    v5[2] = this->q029; /*0x42556e*/
    v3 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v5); /*0x425572*/
    v3[80] &= ~0x20000u; /*0x425588*/
  }
  if ( !(unsigned __int8)ObjectClass::Undeploy(this) ) /*0x42558c*/
    return 0; /*0x4255a7*/
  RemoveTarget((IUnknown *)this); /*0x42559b*/
  return 1; /*0x4255a2*/
}


// ==== 0x004255B0  AnimClass::ProcessCraterFormation  this=AnimClass  sig=csp ====
int __thiscall AnimClass::ProcessCraterFormation(void **this)
{
  int v2; // ecx
  CoordStruct *v3; // eax
  int v4; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (int)this->q033; /*0x4255b6*/
  if ( v2 ) /*0x4255be*/
    (*(void (__thiscall **)(int, void **))(*(_DWORD *)v2 + 96))(v2, this); /*0x4255c3*/
  BuildingClass::AimTurret(this, 0); /*0x4255ca*/
  Mixer::ReleaseChannel((int **)this + 104); /*0x4255d5*/
  if ( !this->q198 ) /*0x4255da*/
  {
    v3 = (CoordStruct *)this->AnimClass_field_0xC8; /*0x4255e4*/
    if ( v3 ) /*0x4255ec*/
    {
      if ( v3[63].Z != -1 ) /*0x4255f5*/
      {
        v4 = (*((int (__thiscall **)(void **, _BYTE *))*this + 18))(this, v6); /*0x425607*/
        StartAudioControllerAt(*((_DWORD *)this->AnimClass_field_0xC8 + 191), v4, (int)(this + 109)); /*0x425618*/
      }
    }
  }
  return ObjectClass::Destroy((#374 *)this); /*0x425624*/
}


// ==== 0x00425630  AnimClass::CheckDamageFlags  this=AnimClass  sig=csp ====
int __thiscall AnimClass::_vt116(_DWORD *this)
{
  _DWORD *v1; // eax
  int v2; // ecx
  int result; // eax

  v1 = this + 39; /*0x425633*/
  v2 = this->AnimClass_field_0xCC; /*0x425639*/
  result = v1[2]; /*0x42564e*/
  if ( v2 ) /*0x425651*/
    result += *(_DWORD *)(v2 + 164); /*0x425669*/
  return result; /*0x42566b*/
}


// ==== 0x00425670  ObjectClass::ConstructionPositionTracker  this=AnimClass  sig=csp ====
bool __thiscall ConstructionPositionTracker(BuildingClass_Full *this)
{
  int v2; // eax
  IUnknown *v3; // edi
  int *p_Location_X; // ebp
  int Location_X; // eax
  int Location_Y; // ecx
  IUnknown *v7; // eax
  int *v8; // eax
  int v9; // ebx
  bool v10; // dl
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // ebx
  BuildingTypeClass *v21; // eax
  int v22; // eax
  double v23; // st7
  double v24; // st7
  int GroundHeight; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // ebx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  __int16 v35; // bp
  AnimClass *v36; // ecx
  void *v37; // edx
  void *v38; // ebx
  int v39; // ecx
  IUnknown *v40; // eax
  unsigned int v41; // ecx
  int *v42; // eax
  int v43; // edx
  double v44; // st7
  CoordStruct *MissionTimer_StartTime; // edi
  IUnknown *v47; // [esp+Ch] [ebp-44h]
  double v48; // [esp+24h] [ebp-2Ch] BYREF
  _BYTE v49[12]; // [esp+2Ch] [ebp-24h] BYREF
  int v50; // [esp+38h] [ebp-18h] BYREF
  int v51; // [esp+3Ch] [ebp-14h]
  int v52; // [esp+40h] [ebp-10h]
  int v53; // [esp+44h] [ebp-Ch] BYREF
  int v54; // [esp+48h] [ebp-8h]
  int Location_Z; // [esp+4Ch] [ebp-4h]

  if ( !this->ProductionBlocked ) /*0x425679*/
  {
    this->QueuedMission = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x425690*/
    v2 = v54; /*0x425692*/
    this->MissionStartTime = 0; /*0x425696*/
    *(_DWORD *)&this->MissionQueued = v2; /*0x42569c*/
    this->MissionStatus = 0; /*0x42569f*/
  }
  v3 = (IUnknown *)&this->_pad_D8[52]; /*0x4256ad*/
  if ( *(_DWORD *)&this->_pad_D8[52] == unk_89A178 /*0x4256d4*/
    && *(_DWORD *)&this->_pad_D8[56] == (_DWORD)qword_89A17C
    && *(_DWORD *)&this->_pad_D8[60] == HIDWORD(qword_89A17C)
    || this->ProductionBlocked )
  {
    if ( !this->_pad_base[141] ) /*0x425b53*/
    {
      if ( this->ProductionBlocked ) /*0x425b61*/
        goto LABEL_47; /*0x425b69*/
      v36 = (AnimClass *)Building::ComputePosition((int *)this->_pad_base, (AnimClass *)&v53); /*0x425b7b*/
      v37 = v36->field_4; /*0x425b7f*/
      v38 = v36->field_8; /*0x425b82*/
      if ( v36->field_0 == unk_89A178 && v37 == (void *)qword_89A17C && v38 == (void *)HIDWORD(qword_89A17C) ) /*0x425b9d*/
      {
        v3->field_0 = unk_89A178; /*0x425bad*/
        *(_DWORD *)&this->_pad_D8[56] = qword_89A17C; /*0x425bb4*/
        v39 = HIDWORD(qword_89A17C); /*0x425bb7*/
        this->ProductionBlocked = 1; /*0x425bbd*/
        *(_DWORD *)&this->_pad_D8[60] = v39; /*0x425bc4*/
        v40 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x425bc7*/
        this->MissionStartTime = 1; /*0x425bd7*/
        this->QueuedMission = (int)v40; /*0x425bdd*/
        *(_DWORD *)&this->MissionQueued = v54; /*0x425be3*/
        this->MissionStatus = 1; /*0x425be6*/
        this->CurrentMission = 8 * *(_DWORD *)(this->MissionTimer_StartTime + 848) + 1; /*0x425bfc*/
      }
      else
      {
        v3->field_0 = v36->field_0; /*0x425ba1*/
        *(_DWORD *)&this->_pad_D8[56] = v37; /*0x425ba3*/
        *(_DWORD *)&this->_pad_D8[60] = v38; /*0x425ba6*/
      }
    }
  }
  else
  {
    p_Location_X = &this->Location_X; /*0x4256e2*/
    Location_X = this->Location_X; /*0x4256ee*/
    Location_Y = this->Location_Y; /*0x4256f0*/
    Location_Z = this->Location_Z; /*0x4256f6*/
    v53 = v3->field_0; /*0x4256fc*/
    v47 = (IUnknown *)(Location_Y - *(_DWORD *)&this->_pad_D8[56]); /*0x425708*/
    Location_Z = *(_DWORD *)&this->_pad_D8[60]; /*0x425709*/
    v7 = Coord::Subtract(&v50, (IUnknown *)(Location_X - v53), v47, 0); /*0x425718*/
    v53 = v7->field_0; /*0x42571f*/
    v54 = v7->field_4; /*0x42572a*/
    Location_Z = v7->field_8; /*0x425731*/
    if ( (int)Coord::Length(&v53) > 18 ) /*0x42573d*/
    {
      v53 = *p_Location_X; /*0x4258f3*/
      v19 = *(_DWORD *)this->_pad_base; /*0x4258f7*/
      v54 = this->Location_Y; /*0x4258fc*/
      v20 = this->Location_Z; /*0x425904*/
      v21 = (BuildingTypeClass *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(v19 + 72))(this, &v53); /*0x42590a*/
      v22 = *(_DWORD *)Cell::GetHeight(v49, v21, (int *)&this->_pad_D8[52]); /*0x425917*/
      v53 = *p_Location_X; /*0x42591d*/
      v54 = this->Location_Y; /*0x425924*/
      Location_Z = this->Location_Z; /*0x425938*/
      *(double *)v49 = (double)((__int16)v22 - 0x3FFF) * -0.00009587672516830327; /*0x425946*/
      v48 = (double)v54; /*0x425958*/
      v23 = Math::SinCos(*(double *)v49); /*0x42595c*/
      LODWORD(v48) = Math::RoundToInt(v48 - v23 * 18.0); /*0x425974*/
      v24 = Math::ArcTan2(*(double *)v49); /*0x42597e*/
      v50 = Math::RoundToInt(v24 * 18.0 + (double)v53); /*0x42599d*/
      v51 = LODWORD(v48); /*0x4259a5*/
      v52 = Location_Z; /*0x4259af*/
      if ( v20 > Cell::GetGroundHeight(&v50) + 2 * unk_89A1C0 ) /*0x4259c3*/
        GroundHeight = unk_89A1B4 + Cell::GetGroundHeight(&v50); /*0x4259e5*/
      else
        GroundHeight = Cell::GetGroundHeight(&v50); /*0x4259cf*/
      v26 = *(_DWORD *)this->_pad_base; /*0x4259eb*/
      v52 = GroundHeight; /*0x4259ed*/
      (*(void (__thiscall **)(BuildingClass_Full *, int *))(v26 + 436))(this, &v50); /*0x4259f8*/
    }
    else
    {
      if ( this->_pad_base[141] ) /*0x425743*/
        goto LABEL_41; /*0x42574b*/
      v8 = Building::ComputePosition((int *)this->_pad_base, (AnimClass *)&v53); /*0x425758*/
      v9 = *v8; /*0x42575d*/
      v50 = *v8; /*0x425765*/
      v51 = v8[1]; /*0x42576c*/
      v52 = v8[2]; /*0x425773*/
      v10 = (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&this->_pad_D8[52]) + 59) == 2 /*0x4257ab*/
          || *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&this->_pad_D8[52]) + 59) == 6)
         && (*(int (__thiscall **)(BuildingClass_Full *))(*(_DWORD *)this->_pad_base + 456))(this) <= unk_89A1C0;
      if ( v9 == unk_89A178 && v51 == (_DWORD)qword_89A17C && v52 == HIDWORD(qword_89A17C) /*0x4257ec*/
        || (v11 = *(_DWORD *)&this->_pad_D8[64], v11 >= 7)
        || v10 )
      {
        v3->field_0 = unk_89A178; /*0x425891*/
        *(_QWORD *)&this->_pad_D8[56] = qword_89A17C; /*0x425898*/
        this->ProductionBlocked = 1; /*0x4258a4*/
        this->QueuedMission = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4258bc*/
        v17 = v54; /*0x4258be*/
        this->MissionStartTime = 1; /*0x4258c2*/
        *(_DWORD *)&this->MissionQueued = v17; /*0x4258c8*/
        this->MissionStatus = 1; /*0x4258cb*/
        v18 = 8 * *(_DWORD *)(this->MissionTimer_StartTime + 848) + 1; /*0x4258da*/
        this->CurrentMission = v18; /*0x4258e1*/
        return v18; /*0x4258ed*/
      }
      *(_DWORD *)&this->_pad_D8[64] = v11 + 1; /*0x4257f5*/
      v53 = *p_Location_X; /*0x4257fd*/
      v54 = this->Location_Y; /*0x425804*/
      v12 = this->Location_Z; /*0x425808*/
      *(_DWORD *)v49 = v3->field_0; /*0x42580f*/
      *(_QWORD *)&v49[4] = *(_QWORD *)&this->_pad_D8[56]; /*0x42581b*/
      if ( v12 > Cell::GetGroundHeight(v49) + 2 * unk_89A1C0 ) /*0x42583b*/
        v13 = unk_89A1B4 + Cell::GetGroundHeight(v49); /*0x42585d*/
      else
        v13 = Cell::GetGroundHeight(v49); /*0x425847*/
      v14 = *(_DWORD *)this->_pad_base; /*0x425863*/
      *(_DWORD *)&v49[8] = v13; /*0x425865*/
      (*(void (__thiscall **)(BuildingClass_Full *, _BYTE *))(v14 + 436))(this, v49); /*0x425870*/
      v15 = v51; /*0x42587a*/
      v3->field_0 = v50; /*0x425880*/
      v16 = v52; /*0x425882*/
      *(_DWORD *)&this->_pad_D8[56] = v15; /*0x425886*/
      *(_DWORD *)&this->_pad_D8[60] = v16; /*0x425889*/
    }
    if ( !this->_pad_base[141] ) /*0x4259fe*/
    {
      v27 = *p_Location_X; /*0x425a0e*/
      v28 = this->Location_Y; /*0x425a10*/
      Location_Z = this->Location_Z; /*0x425a16*/
      LOWORD(v48) = v27 / 256; /*0x425a26*/
      v29 = v28 / 256; /*0x425a3a*/
      v30 = *p_Location_X; /*0x425a3d*/
      WORD1(v48) = v29; /*0x425a3f*/
      v50 = v30; /*0x425a44*/
      v51 = this->Location_Y; /*0x425a4d*/
      v31 = this->Location_Z; /*0x425a53*/
      v53 = *p_Location_X; /*0x425a56*/
      v52 = v31; /*0x425a5a*/
      v54 = this->Location_Y; /*0x425a65*/
      Location_Z = this->Location_Z; /*0x425a6d*/
      v32 = Cell::GetGroundHeight(&v53); /*0x425a76*/
      if ( v52 >= unk_89A1B4 + v32 ) /*0x425a89*/
      {
        v33 = this->Location_Y; /*0x425a92*/
        v34 = this->Location_Z; /*0x425a95*/
        v53 = *p_Location_X; /*0x425a98*/
        v54 = v33; /*0x425aa0*/
        Location_Z = v34; /*0x425aaa*/
        if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v53) + 80) & 0x100) == 0 ) /*0x425abc*/
        {
          v35 = LOWORD(v48); /*0x425ac2*/
          LOWORD(v48) += *(_WORD *)MEMORY[0x89F690].__pad_10; /*0x425ad9*/
          WORD1(v48) = *(_WORD *)&MEMORY[0x89F690].__pad_10[2] + v29; /*0x425ae2*/
          if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48) + 80) & 0x100) == 0 ) /*0x425b03*/
          {
            LOWORD(v48) = LOWORD(MEMORY[0x89F688].field_0) + v35; /*0x425b1b*/
            WORD1(v48) = MEMORY[0x89F68A] + v29; /*0x425b20*/
            if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48) + 80) & 0x100) == 0 ) /*0x425b41*/
              this->_pad_base[141] = 1; /*0x425b47*/
          }
        }
      }
    }
  }
LABEL_41:
  if ( !this->ProductionBlocked ) /*0x425c02*/
  {
    v41 = 0; /*0x425c18*/
    if ( v3->field_0 != unk_89A178 /*0x425c35*/
      || *(_DWORD *)&this->_pad_D8[56] != (_DWORD)qword_89A17C
      || *(_DWORD *)&this->_pad_D8[60] != HIDWORD(qword_89A17C) )
    {
      v42 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(*(_DWORD *)this->_pad_base + 72))(this, &v53); /*0x425c40*/
      v43 = *v42; /*0x425c45*/
      LODWORD(v48) = v3->field_0; /*0x425c47*/
      *(_DWORD *)v49 = v43; /*0x425c4b*/
      v44 = Math::CalcAngle((double)v42[1] - (double)*(int *)&this->_pad_D8[56], (double)SLODWORD(v48) - (double)v43); /*0x425c6a*/
      *(_WORD *)v49 = Math::RoundToInt((v44 - 1.570796326794897) * -10430.06004058427); /*0x425c83*/
      v41 = *(_DWORD *)(this->MissionTimer_StartTime + 848) /*0x425ca3*/
          * ((-1 - (((unsigned int)((*(_DWORD *)v49 >> 12) + 1) >> 1) & 7)) & 7);
    }
    MissionTimer_StartTime = (CoordStruct *)this->MissionTimer_StartTime; /*0x425cb7*/
    v18 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] / 3 / MissionTimer_StartTime[70].Z; /*0x425cc5*/
    this->CurrentMission = v41 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] / 3 % MissionTimer_StartTime[70].Z; /*0x425cce*/
    return v18; /*0x425cda*/
  }
LABEL_47:
  v18 = *(__int16 *)((*(int (__thiscall **)(BuildingClass_Full *))(*(_DWORD *)this->_pad_base + 108))(this) + 6) / 2 - 1; /*0x425cdb*/
  if ( this->CurrentMission >= v18 ) /*0x425cf4*/
    LOBYTE(v18) = (*(bool (__thiscall **)(BuildingClass_Full *))(*(_DWORD *)this->_pad_base + 248))(this); /*0x425cfa*/
  return v18; /*0x4258bb*/
}


// ==== 0x00425D10  Building::ComputePosition  this=AnimClass  sig=csp ====
int *__thiscall Building::ComputePosition(int *this, AnimClass *aP1)
{
  int *v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  BuildingTypeClass *v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ebx
  VectorClass *v13; // eax
  VectorClass *v14; // esi
  double v15; // st7
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int16 v19; // dx
  __int16 v20; // di
  __int16 v21; // di
  __int16 v22; // bx
  int v23; // ecx
  int v24; // edx
  AnimClass *v26; // edi
  int v27; // esi
  int v28; // edx
  __int16 v29; // cx
  int v30; // [esp+14h] [ebp-34h]
  int v31; // [esp+18h] [ebp-30h]
  IUnknown *v32; // [esp+20h] [ebp-28h] BYREF
  _WORD v34[2]; // [esp+24h] [ebp-24h] BYREF
  __int16 v35[2]; // [esp+28h] [ebp-20h] BYREF
  int v36; // [esp+2Ch] [ebp-1Ch]
  IUnknown *v37; // [esp+30h] [ebp-18h] BYREF
  void *v38; // [esp+34h] [ebp-14h]
  char *v39; // [esp+3Ch] [ebp-Ch]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v2 = this + 39; /*0x425d1d*/
  v3 = v2[1]; /*0x425d29*/
  v4 = (unsigned __int8)(*v2 >> 31) + *v2; /*0x425d32*/
  v36 = 10000; /*0x425d34*/
  v41 = v2[2]; /*0x425d3f*/
  v5 = v4; /*0x425d43*/
  v6 = v3; /*0x425d45*/
  v5 >>= 8; /*0x425d47*/
  v7 = (__int16)v5; /*0x425d4b*/
  LOWORD(v38) = v5; /*0x425d54*/
  v8 = (BuildingTypeClass *)((__int16)v5 - 5); /*0x425d61*/
  v9 = v6 / 256; /*0x425d67*/
  HIWORD(v38) = v9; /*0x425d6c*/
  v32 = (IUnknown *)dword_89A150; /*0x425d71*/
  v31 = (__int16)v5; /*0x425d75*/
  if ( (int)v8 < (__int16)v5 + 5 ) /*0x425d79*/
  {
    v10 = (__int16)v9; /*0x425d7f*/
    v30 = (__int16)v9; /*0x425d82*/
    v11 = (__int16)v9 + 5; /*0x425d86*/
    do /*0x425ec0*/
    {
      v12 = v10 - 5; /*0x425d89*/
      if ( v10 - 5 < v11 ) /*0x425d8e*/
      {
        do /*0x425eb2*/
        {
          v34[0] = (_WORD)v8; /*0x425da0*/
          v34[1] = v12; /*0x425da5*/
          if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)v34, (TechnoClass *)1) ) /*0x425daa*/
          {
            v35[0] = (__int16)v8; /*0x425dbb*/
            v35[1] = v12; /*0x425dc6*/
            v13 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v35); /*0x425dcb*/
            v14 = v13; /*0x425dd0*/
            if ( *(_DWORD *)&v13[14].IsInitialized == 2 /*0x425e18*/
              && ((int)v13[20].vtable0 & 0x100) == 0
              && (*((_DWORD *)Cell::GetNeighbourContent(v13, 6u) + 80) & 0x100) == 0
              && (*((_DWORD *)Cell::GetNeighbourContent(v14, 0) + 80) & 0x100) == 0 )
            {
              if ( v14[2].Items == v38 ) /*0x425e27*/
              {
                v16 = 0; /*0x425e77*/
              }
              else
              {
                v40 = v12 - v30; /*0x425e44*/
                v39 = (char *)v8 - v31; /*0x425e48*/
                v15 = ((double (__cdecl *)(double))Math::Sqrt)((double)((int)v8 - v31) * (double)((int)v8 - v31) + (double)(v12 - v30) * (double)(v12 - v30)); /*0x425e68*/
                v16 = Math::RoundToInt(v15); /*0x425e70*/
              }
              if ( (int)v8 > v31 || v12 > v30 ) /*0x425e83*/
                v16 -= 3; /*0x425e85*/
              if ( v16 < v36 ) /*0x425e8c*/
              {
                v36 = v16; /*0x425e8e*/
                LOWORD(v37) = (_WORD)v8; /*0x425e92*/
                HIWORD(v37) = v12; /*0x425e97*/
                v32 = v37; /*0x425ea0*/
              }
            }
            v7 = v31; /*0x425ea4*/
          }
          ++v12; /*0x425eac*/
          v11 = v30 + 5; /*0x425ead*/
        }
        while ( v12 < v30 + 5 ); /*0x425eb2*/
        v10 = v30; /*0x425eb8*/
      }
      v8 = (BuildingTypeClass *)((char *)v8 + 1); /*0x425eba*/
    }
    while ( (int)v8 < v7 + 5 ); /*0x425ec0*/
    if ( v32 != (IUnknown *)dword_89A150 ) /*0x425ed6*/
    {
      v17 = (__int16)v32 - v7; /*0x425eeb*/
      v18 = SHIWORD(v32) - v10; /*0x425eed*/
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
      v21 = (_WORD)v38 + v20; /*0x425f1b*/
      v22 = v19 + HIWORD(v38); /*0x425f21*/
      LOWORD(v37) = v21; /*0x425f28*/
      HIWORD(v37) = v19 + HIWORD(v38); /*0x425f2d*/
      if ( BuildingClass::IsCellPlaceable(this, (__int16 *)&v37) ) /*0x425f3b*/
      {
        v23 = (v21 << 8) + 128; /*0x425f4a*/
        v24 = v22; /*0x425f50*/
        goto LABEL_41; /*0x425f53*/
      }
      LOWORD(v37) = v21; /*0x425f5d*/
      HIWORD(v37) = HIWORD(v38); /*0x425f62*/
      if ( BuildingClass::IsCellPlaceable(this, (__int16 *)&v37) ) /*0x425f78*/
      {
        aP1->field_0 = (v21 << 8) + 128; /*0x425f99*/
        aP1->field_4 = (void *)((v30 << 8) + 128); /*0x425fa2*/
        aP1->field_8 = 0; /*0x425fa7*/
        return &aP1->field_0; /*0x425fb0*/
      }
      HIWORD(v37) = v22; /*0x425fb8*/
      LOWORD(v37) = (_WORD)v38; /*0x425fbd*/
      if ( BuildingClass::IsCellPlaceable(this, (__int16 *)&v37) ) /*0x425fd3*/
      {
        aP1->field_0 = (v7 << 8) + 128; /*0x425ff0*/
        aP1->field_4 = (void *)((v22 << 8) + 128); /*0x425ffa*/
        aP1->field_8 = 0; /*0x425ffd*/
        return &aP1->field_0; /*0x426006*/
      }
    }
  }
  if ( dword_89A150 ) /*0x426011*/
  {
LABEL_39:
    aP1->field_0 = unk_89A178; /*0x426090*/
    *(_QWORD *)&aP1->field_4 = qword_89A17C; /*0x4260a3*/
    return &aP1->field_0; /*0x4260b5*/
  }
  v26 = (AnimClass *)Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)7); /*0x426032*/
  v27 = 0; /*0x426034*/
  while ( 1 ) /*0x426046*/
  {
    v28 = (((int)v26 + v27) % 8) & 7; /*0x426046*/
    v29 = (_WORD)v38 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v28 + 160]; /*0x426058*/
    LOWORD(v28) = HIWORD(v38) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v28 + 162]; /*0x426061*/
    LOWORD(v37) = v29; /*0x426066*/
    HIWORD(v37) = v28; /*0x42606f*/
    v32 = v37; /*0x42607d*/
    if ( BuildingClass::IsCellPlaceable(this, (__int16 *)&v32) ) /*0x426081*/
      break; /*0x426081*/
    if ( ++v27 >= 8 ) /*0x42608e*/
      goto LABEL_39; /*0x42608e*/
  }
  v24 = SHIWORD(v32); /*0x4260bd*/
  v23 = ((__int16)v32 << 8) + 128; /*0x4260c5*/
LABEL_41:
  aP1->field_0 = v23; /*0x4260cb*/
  aP1->field_4 = (void *)((v24 << 8) + 128); /*0x4260dd*/
  aP1->field_8 = 0; /*0x4260e0*/
  return &aP1->field_0; /*0x425faa*/
}


// ==== 0x004260F0  BuildingClass::IsCellPlaceable  this=IUnknown  sig=csp ====
char __thiscall BuildingClass_IsCellPlaceable(_DWORD *this, __int16 *a2)
{
  _BYTE *v3; // eax
  int v5; // ecx
  int v6; // ecx

  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x426101*/
  if ( (*((_DWORD *)v3 + 80) & 0x100) != 0 && this->q0A4 - MEMORY[0x89A1C0] * (char)v3[283] > 2 * MEMORY[0x89A1C0] ) /*0x426142*/
  {
    if ( (v3[296] & 0xE0) != 0 ) /*0x42614b*/
      return 0; /*0x426154*/
  }
  else
  {
    v5 = *((_DWORD *)v3 + 59); /*0x426157*/
    switch ( v5 ) /*0x426160*/
    {
      case 3: /*0x426160*/
        return 0; /*0x426160*/
      case 10: /*0x426160*/
        return 0; /*0x426165*/
      case 4: /*0x426160*/
        return 0; /*0x42616a*/
    }
    v6 = *((_DWORD *)v3 + 17); /*0x42616c*/
    if ( v6 != -1 ) /*0x426172*/
    {
      if ( *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v6) + 680) ) /*0x42617e*/
        return 0; /*0x42617e*/
    }
    if ( (v3[292] & 0xE0) != 0 || MEMORY[0x89A1C0] * (char)v3[283] - this->q0A4 > 2 * MEMORY[0x89A1C0] ) /*0x4261b9*/
      return 0; /*0x4261b9*/
  }
  return 1; /*0x42614d*/
}


// ==== 0x004261D0  ObjectClass::FindBuildingClass  this=ObjectClass  sig=csp ====
int sub_4261D0()
{
  int result; // eax
  int i; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  result = MEMORY[0xA8E9B8]; /*0x4261d0*/
  for ( i = 0; i < MEMORY[0xA8E9B8]; ++i ) /*0x4261dd*/
  {
    v2 = (_DWORD *)*((_DWORD *)MEMORY[0xA8E9AC] + i); /*0x4261e9*/
    if ( *(_BYTE *)(v2[50] + 864) ) /*0x4261f2*/
    {
      v6[0] = v2[39]; /*0x426208*/
      v6[1] = v2[40]; /*0x426214*/
      v6[2] = v2[41]; /*0x426220*/
      v3 = Coord::To_Cell(&MEMORY[0x87F7E8], v6); /*0x426224*/
      v4 = BuildingClass::FindByCellHash(v3); /*0x42622b*/
      if ( v4 != -1 ) /*0x426233*/
      {
        v5 = *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * v4]; /*0x42623b*/
        if ( v5 ) /*0x426240*/
          v2[53] = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v5 + 192)) + 780); /*0x426256*/
      }
    }
    result = MEMORY[0xA8E9B8]; /*0x42625c*/
  }
  return result; /*0x42626b*/
}


// ==== 0x00426270  AnimClass::UpdateDamageRadius  this=AnimClass  sig=csp ====
int __thiscall AnimClass::_vt60(void *this, _DWORD *a2)
{
  char v3; // bp
  _BYTE *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection(a2); /*0x426287*/
  v4 = Coord::To_Cell(&MEMORY[0x87F7E8], a2); /*0x426294*/
  if ( unk_89A1B4 + Cell::GetGroundHeight(a2) <= a2[2] && (*((_DWORD *)v4 + 80) & 0x100) != 0 ) /*0x4262b3*/
  {
    v4[296] |= 1 << v3; /*0x4262c3*/
    result = (*(int (__thiscall **)(void *))(this->AnimClass_field_0x38)(this); /*0x4262cd*/
    *((_DWORD *)v4 + 22) = result; /*0x4262d0*/
  }
  else
  {
    v4[292] |= 1 << v3; /*0x4262e8*/
    result = (*(int (__thiscall **)(void *))(this->AnimClass_field_0x38)(this); /*0x4262f2*/
    *((_DWORD *)v4 + 21) = result; /*0x4262f5*/
  }
  return result; /*0x4262d3*/
}


// ==== 0x00426300  AnimClass::ProcessAreaEffect  this=AnimClass  sig=csp ====
char __stdcall AnimClass::_vt61(_DWORD *a1)
{
  char v1; // bl
  _BYTE *v2; // esi
  char result; // al

  v1 = Input::OffsetToDirection(a1); /*0x426314*/
  v2 = Coord::To_Cell(&MEMORY[0x87F7E8], a1); /*0x426321*/
  if ( Cell::GetGroundHeight(a1) + unk_89A1B4 > a1[2] ) /*0x426335*/
  {
    result = ~(1 << v1) & v2[292]; /*0x426370*/
    v2[292] = result; /*0x426372*/
    if ( (result & 0x1C) == 0 ) /*0x42637a*/
      *((_DWORD *)v2 + 21) = -1; /*0x42637c*/
  }
  else
  {
    result = ~(1 << v1) & v2[296]; /*0x426347*/
    v2[296] = result; /*0x426349*/
    if ( (result & 0x1C) == 0 ) /*0x426351*/
      *((_DWORD *)v2 + 22) = -1; /*0x426353*/
  }
  return result; /*0x42635a*/
}


// ==== 0x00426390  ObjectClass::COMStub_Return0_25  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt25(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426390*/
  return result; /*0x426392*/
}


// ==== 0x004263A0  ObjectClass::COMStub_26  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt26(#374 *this)
{
  return 0; /*0x4263a2*/
}


// ==== 0x004263B0  ObjectClass::COMStub_Return0_32  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt32(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4263b0*/
  return result; /*0x4263b2*/
}


// ==== 0x004263C0  ObjectClass::COMStub_Ret8487648_36  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt36(#374 *this)
{
  return (int)aNoName_0; /*0x4263c5*/
}


// ==== 0x004263D0  ObjectClass::GetDrawPosition  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetDrawPosition(#374 *this)
{
  int *v1; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v7; // [esp+18h] [ebp+4h]

  v1 = (int *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q048)(this, v6); /*0x4263dc*/
  v2 = *v1; /*0x4263e3*/
  v3 = v1[1]; /*0x4263e5*/
  v4 = v1[2]; /*0x4263e8*/
  *v7 = v2; /*0x4263f0*/
  v7[1] = v3; /*0x4263f2*/
  v7[2] = v4 + 50; /*0x4263f5*/
  return (int)v7; /*0x4263fa*/
}


// ==== 0x00426410  IUnknown::getCoordCenter  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::getCoordCenter(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x426410*/
  return result; /*0x426412*/
}


// ==== 0x00426420  ObjectClass::COMStub_Return0_49  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt49(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426420*/
  return result; /*0x426422*/
}


// ==== 0x00426430  ObjectClass::COMStub_50  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt50(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426430*/
  return result; /*0x426432*/
}


// ==== 0x00426440  ObjectClass::COMStub_Return0_67  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_67(#374 *this)
{
  int result; // eax

  return result; /*0x426440*/
}


// ==== 0x00426450  ObjectClass::COMStub_Return0_68  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_68(#374 *this)
{
  int result; // eax

  return result; /*0x426450*/
}


// ==== 0x00426460  ObjectClass::COMStub_Return0_85  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_85(#374 *this)
{
  int result; // eax

  return result; /*0x426460*/
}


// ==== 0x00426470  ObjectClass::COMStub_Return0_86  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_86(#374 *this)
{
  int result; // eax

  return result; /*0x426470*/
}


// ==== 0x00426480  ObjectClass::COMStub_Return0_87  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_87(#374 *this)
{
  int result; // eax

  return result; /*0x426480*/
}


// ==== 0x00426490  ObjectClass::COMStub_Return0_88  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt88(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426490*/
  return result; /*0x426492*/
}


// ==== 0x004264A0  ObjectClass::COMStub_Return0_92  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_92(#374 *this)
{
  int result; // eax

  return result; /*0x4264a0*/
}


// ==== 0x004264B0  ObjectClass::COMStub_Return0_99  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_99(#374 *this)
{
  int result; // eax

  return result; /*0x4264b0*/
}


// ==== 0x004264C0  ObjectClass::COMStub_107  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt107(#374 *this)
{
  return 0; /*0x4264c2*/
}


// ==== 0x004264D0  IUnknown::COMStub_108  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt108(#374 *this)
{
  return 0; /*0x4264d2*/
}


// ==== 0x004264E0  ObjectClass::COMStub_Return0_117  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt117(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4264e0*/
  return result; /*0x4264e2*/
}


// ==== 0x004264F0  ObjectClass::COMStub_Return0_118  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt118(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4264f0*/
  return result; /*0x4264f2*/
}


// ==== 0x00426500  ObjectClass::COMStub_Return0_119  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt119(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426500*/
  return result; /*0x426502*/
}


// ==== 0x00426510  ObjectClass::getCoordCenter2  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::getCoordCenter2(#374 *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x426510*/
  return result; /*0x426512*/
}


// ==== 0x00426520  ObjectClass::COMStub_Return0_121  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt121(#374 *this)
{
  return 0; /*0x426522*/
}


// ==== 0x00426530  AnimClass::MissionStubReturnZero  this=AnimClass  sig=csp ====
int AnimClass::_vt12()
{
  return 456; /*0x426535*/
}


// ==== 0x00426540  AnimClass::MissionStubReturnZero2  this=AnimClass  sig=csp ====
int __stdcall AnimClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x426546*/
    return -2147467261; /*0x426548*/
  *a2 = 237448643; /*0x426556*/
  a2[1] = 298949647; /*0x42655e*/
  a2[2] = -1610610249; /*0x426567*/
  a2[3] = -777003740; /*0x426570*/
  return 0; /*0x42654d*/
}


// ==== 0x00426580  AbstractClass::getAltitude  this=AnimClass  sig=csp ====
int __cdecl AbstractClass::getAltitude()
{
  return 4; /*0x426585*/
}


// ==== 0x00426590  AnimClass::MissionStubReturnZero3  this=AnimClass  sig=csp ====
AnimClass *__thiscall AnimClass::MissionStubReturnZero3(#374 *Block, char a2)
{
  AnimClass::Destruct(Block); /*0x426593*/
  if ( (a2 & 1) != 0 ) /*0x42659d*/
    __3_YAXPAX_Z(Block); /*0x4265a0*/
  return (AnimClass *)Block; /*0x4265aa*/
}


// ==== 0x004265B0  Cell::GetHeight  this=Cell  sig=csp ====
_WORD *__thiscall Cell::GetHeight(_WORD *this, BuildingTypeClass *aP1, int *a2)
{
  double v4; // st7

  if ( *(_DWORD *)aP1->vtable0 == *a2 && *(_DWORD *)&aP1->vtable0[4] == a2[1] ) /*0x4265ca*/
    *this = 0; /*0x4265cc*/
  v4 = Math::CalcAngle((double)*(int *)&aP1->vtable0[4] - (double)a2[1], (double)*a2 - (double)*(int *)aP1->vtable0); /*0x4265e8*/
  LOWORD(aP1) = Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427); /*0x426601*/
  *(_DWORD *)this = aP1; /*0x42660a*/
  return this; /*0x42660e*/
}


// ==== 0x00426620  ??4type_info_AAEAAV0_ABV0__Z  this=IUnknown  sig=csp ====
void *__thiscall __4type_info_AAEAAV0_ABV0__Z(void *this, int a2)
{
  return this; /*0x426622*/
}


// ==== 0x00426630  Locomotor::GetSpeed  this=Locomotor  sig=csp ====
int __thiscall Locomotor_GetSpeed(int *this)
{
  int v1; // edx
  int result; // eax

  v1 = *this; /*0x426630*/
  result = this->q008; /*0x426632*/
  if ( *this != -1 ) /*0x426638*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= result ) /*0x426644*/
      return 0; /*0x426649*/
    else
      result -= (int)MEMORY[0xA8ED84] - v1; /*0x426646*/
  }
  return result; /*0x426648*/
}


// ==== 0x00426650  sub_426650  this=-  sig=ida-proto ====
int sub_426650()
{
  unk_89A1C8 = 0; /*0x426652*/
  unk_89A1CC = 0; /*0x426657*/
  unk_89A1D0 = 0; /*0x42665c*/
  unk_89A1D4 = 0; /*0x426661*/
  return 0; /*0x426666*/
}


// ==== 0x004266D0  AnimFile::method_4266D0  this=AnimFile  sig=csp ====
void __thiscall sub_4266D0(void *this)
{
  char v2; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = *((_BYTE *)this + 137); /*0x4266d6*/
  *(_DWORD *)this = &vt_AnimFile; /*0x4266dc*/
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
  if ( this->qE10 ) /*0x426713*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x42671e*/
    this->qE10 = 0; /*0x426726*/
  }
  *((_BYTE *)this + 136) = 0; /*0x42672c*/
  *(_DWORD *)this = &vt_Animate; /*0x426732*/
}


// ==== 0x00426740  sub_426740  this=-  sig=ida-proto ====
int sub_426740()
{
  return 2816; /*0x426745*/
}


// ==== 0x00426750  AnimFile::AddRef  this=AnimFile  sig=csp ====
char __userpurge AnimFile::_vt01@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  *(_DWORD *)(a1 + 132) = a3; /*0x426759*/
  if ( !a3 ) /*0x42675f*/
    return 0; /*0x426789*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 24))(a3) ) /*0x426763*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 132) + 28))(*(_DWORD *)(a1 + 132), 1); /*0x426774*/
    *(_BYTE *)(a1 + 137) = 1; /*0x426777*/
  }
  return sub_4267F0(a1, a2); /*0x426785*/
}


// ==== 0x00426790  AnimFile::Release  this=AnimFile  sig=csp ====
void __thiscall AnimFile::_vt02(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  if ( *(_BYTE *)(this + 137) ) /*0x426796*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 132) + 52))(*(_DWORD *)(this + 132)); /*0x4267a6*/
    *(_BYTE *)(this + 137) = 0; /*0x4267a9*/
  }
  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 3596); /*0x4267af*/
  *(_DWORD *)(this + 132) = 0; /*0x4267b5*/
  if ( v2 ) /*0x4267bd*/
  {
    (**v2)(v2, 1); /*0x4267c3*/
    *(_DWORD *)(this + 3596) = 0; /*0x4267c5*/
  }
  if ( *(_DWORD *)(this + 3600) ) /*0x4267cb*/
  {
    __3_YAXPAX_Z(*(void **)(this + 3600)); /*0x4267d6*/
    *(_DWORD *)(this + 3600) = 0; /*0x4267de*/
  }
  *(_BYTE *)(this + 136) = 0; /*0x4267e4*/
}


// ==== 0x004267F0  ObjectClass::method_4267F0  this=ObjectClass  sig=csp ====
char __usercall sub_4267F0@<al>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // edx
  _BYTE *v4; // ecx
  char v5; // bl
  int v6; // eax
  int v7; // eax
  _DWORD *v9; // edi
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  void *v12; // edi
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]

  if ( !*(_BYTE *)(a1 + 136) && *(_DWORD *)(a1 + 132) ) /*0x426803*/
  {
    *(_BYTE *)(a1 + 136) = 1; /*0x426820*/
    memset((void *)(a1 + 140), 0, 0x80u); /*0x426828*/
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 132) + 36))( /*0x426838*/
      *(_DWORD *)(a1 + 132),
      a1 + 140,
      128,
      a2);
    memset((void *)(a1 + 4), 0, 0x80u); /*0x426847*/
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 132) + 36))(*(_DWORD *)(a1 + 132), a1 + 4, 128); /*0x426857*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 132) + 40))(*(_DWORD *)(a1 + 132), 0, 1); /*0x426866*/
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 132) + 36))(*(_DWORD *)(a1 + 132), a1 + 268, 1024); /*0x42687d*/
    v3 = 0; /*0x426880*/
    v4 = (_BYTE *)(a1 + 269); /*0x426882*/
    do /*0x4268c7*/
    {
      v5 = *(v4 - 1); /*0x42688b*/
      LOBYTE(retaddr) = v4[1]; /*0x42688e*/
      BYTE1(retaddr) = *v4; /*0x426894*/
      v6 = v3 % 256; /*0x4268a7*/
      ++v3; /*0x4268ab*/
      v4 += 4; /*0x4268ac*/
      v7 = v6 + a1 + 2 * v6 + 1292; /*0x4268b5*/
      *(_WORD *)v7 = (_WORD)retaddr; /*0x4268c1*/
      *(_BYTE *)(v7 + 2) = v5; /*0x4268c4*/
    }
    while ( v3 < 256 ); /*0x4268c7*/
    memset((void *)(a1 + 2060), 0, 0x600u); /*0x4268d8*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 132) + 36))(*(_DWORD *)(a1 + 132), a1 + 2060); /*0x4268e8*/
    if ( !sub_426990(a1) ) /*0x4268ed*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x4268fb*/
      return 0; /*0x426903*/
    }
    v9 = __2_YAPAXI_Z(0x20u); /*0x42690b*/
    if ( v9 ) /*0x426912*/
    {
      v10 = *(_WORD *)(a1 + 160); /*0x426918*/
      v11 = *(_WORD *)(a1 + 162); /*0x42691f*/
      v9[1] = v10; /*0x426926*/
      v9[2] = v11; /*0x42692c*/
      v9[3] = 0; /*0x426935*/
      *v9 = &XSurface_Vtable; /*0x42693c*/
      v9[4] = 1; /*0x426942*/
      Buffer::Init(v9 + 5, 0, v11 * v10); /*0x426949*/
      *v9 = &BSurface_Vtable; /*0x42694e*/
    }
    else
    {
      v9 = 0; /*0x426956*/
    }
    *(_DWORD *)(a1 + 3596) = v9; /*0x42695d*/
    v12 = __2_YAPAXI_Z(0x10000u); /*0x42696b*/
    *(_DWORD *)(a1 + 3600) = v12; /*0x426974*/
    memset(v12, 0, 0x10000u); /*0x42697a*/
  }
  return *(_BYTE *)(a1 + 136); /*0x4268fe*/
}


// ==== 0x00426990  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_426990(int this)
{
  char result; // al
  int v2; // esi
  int v3; // edx
  _WORD *i; // ecx

  if ( *(_DWORD *)(this + 140) == 541478988 /*0x4269f7*/
    && *(_DWORD *)(this + 156) == 1296649793
    && *(_WORD *)(this + 144) == 256
    && *(_DWORD *)(this + 148) <= 0xFFFFu
    && *(_WORD *)(this + 152) <= 0x100u
    && *(_WORD *)(this + 154) == 1280
    && *(_WORD *)(this + 160) == 320
    && *(_WORD *)(this + 162) == 200 )
  {
    result = 1; /*0x4269ff*/
    if ( *(_BYTE *)(this + 169) <= 1u /*0x426a17*/
      && *(_BYTE *)(this + 171) == 1
      && !*(_BYTE *)(this + 170)
      && !*(_BYTE *)(this + 168) )
    {
      v2 = 0; /*0x426a23*/
      v3 = *(unsigned __int16 *)(this + 146); /*0x426a25*/
      if ( !(_WORD)v3 ) /*0x426a2e*/
        return result; /*0x426a2e*/
      for ( i = (_WORD *)(this + 2062); *i <= 0x100u; i += 3 ) /*0x426a30*/
      {
        if ( ++v2 >= v3 ) /*0x426a43*/
          return result; /*0x426a43*/
      }
    }
  }
  return 0; /*0x426a45*/
}


// ==== 0x00426A50  AnimFile::Load  this=AnimFile  sig=csp ====
int __thiscall AnimFile::_vt05(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 204); /*0x426a56*/
  if ( *(_BYTE *)(this + 166) ) /*0x426a50*/
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
int __thiscall AbstractClass::sub_426A80(unsigned __int16 *this)
{
  return this->q144; /*0x426a89*/
}


// ==== 0x00426A90  AnimFile::ddtor  this=AnimFile  sig=csp ====
int __thiscall AnimFile::ddtor(int this, int a2)
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
  char *a4; // [esp+3Ch] [ebp-8h]
  AnimFile *aP2; // [esp+40h] [ebp-4h]

  if ( !*(_BYTE *)(this + 136) ) /*0x426a96*/
    return 0; /*0x426aa0*/
  v4 = *(_DWORD *)(this + 3604); /*0x426aa9*/
  if ( v4 > a2 && (!*(_BYTE *)(this + 166) || !*(_BYTE *)(this + 167) || v4 != *(_DWORD *)(this + 148) || a2) ) /*0x426ada*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3596) + 24))(*(_DWORD *)(this + 3596), 0); /*0x426af5*/
    *(_DWORD *)(this + 3604) = -1; /*0x426af8*/
  }
  if ( *(_DWORD *)(this + 3604) != a2 ) /*0x426b04*/
  {
    v5 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 3596) + 92))( /*0x426b19*/
           *(_DWORD *)(this + 3596),
           0,
           0);
    v6 = *(_DWORD *)(this + 3596); /*0x426b1c*/
    a4 = (char *)v5; /*0x426b22*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 128))(v6); /*0x426b34*/
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 124))(v6) * v7; /*0x426b39*/
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 112))(v6) * v8; /*0x426b43*/
    v10 = *(_DWORD *)(this + 3604); /*0x426b46*/
    for ( i = v9; v10 != a2; v10 = *(_DWORD *)(this + 3604) ) /*0x426b52*/
    {
      v11 = v10 + 1; /*0x426b58*/
      *(_DWORD *)(this + 3604) = v11; /*0x426b59*/
      v12 = v11; /*0x426b5f*/
      if ( v11 < *(_DWORD *)(this + 204) ) /*0x426b67*/
      {
        v13 = 0; /*0x426b6f*/
        v14 = *(unsigned __int16 *)(this + 146); /*0x426b71*/
        if ( (_WORD)v14 ) /*0x426b7a*/
        {
          v15 = (unsigned __int16 *)(this + 2060); /*0x426b80*/
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
            if ( *(_BYTE *)(this + 136) && *(_DWORD *)(this + 3608) != v13 ) /*0x426bc1*/
            {
              v17 = *(_DWORD *)(this + 132); /*0x426bc3*/
              *(_DWORD *)(this + 3608) = v13; /*0x426bce*/
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 40))(v17, (v13 << 16) + 2816, 0); /*0x426bde*/
              (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 132) + 36))( /*0x426c15*/
                *(_DWORD *)(this + 132),
                *(_DWORD *)(this + 3600),
                *(unsigned __int16 *)(this + 2 * (3 * v13 + 1032))
              + 2 * *(unsigned __int16 *)(this + 6 * v13 + 2062)
              + 8);
            }
            v18 = 3 * v13; /*0x426c18*/
            v19 = *(_DWORD *)(this + 3600); /*0x426c1b*/
            v20 = v12 - *(unsigned __int16 *)(this + 2 * v18 + 2060); /*0x426c38*/
            v21 = 2 * *(unsigned __int16 *)(this + 2 * v18 + 2062) + 8; /*0x426c3c*/
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
            aP2 = (AnimFile *)(v19 + v21 + 2); /*0x426c58*/
            if ( v19 + v21 != -2 ) /*0x426c5c*/
            {
              v24 = *(_DWORD *)(this + 3604); /*0x426c62*/
              v25 = 0; /*0x426c6e*/
              v34 = v24; /*0x426c72*/
              if ( v24 < *(_DWORD *)(this + 204) ) /*0x426c7a*/
              {
                v26 = 0; /*0x426c82*/
                v27 = *(unsigned __int16 *)(this + 146); /*0x426c84*/
                if ( (_WORD)v27 ) /*0x426c8d*/
                {
                  v28 = (unsigned __int16 *)(this + 2060); /*0x426c93*/
                  while ( 1 ) /*0x426c99*/
                  {
                    HIWORD(v29) = 0; /*0x426c99*/
                    if ( *v28 <= v24 ) /*0x426ca0*/
                    {
                      LOWORD(v29) = *v28; /*0x426c9b*/
                      v24 = *(_DWORD *)(this + 3604); /*0x426cac*/
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
                    if ( *(_BYTE *)(this + 136) && *(_DWORD *)(this + 3608) != v26 ) /*0x426cda*/
                    {
                      v30 = *(_DWORD *)(this + 132); /*0x426cdc*/
                      *(_DWORD *)(this + 3608) = v26; /*0x426ce7*/
                      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 40))(v30, (v26 << 16) + 2816, 0); /*0x426cf7*/
                      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 132) + 36))( /*0x426d28*/
                        *(_DWORD *)(this + 132),
                        *(_DWORD *)(this + 3600),
                        *(unsigned __int16 *)(this + 2 * (3 * v26 + 1032))
                      + 2 * *(unsigned __int16 *)(this + 6 * v26 + 2062)
                      + 8);
                      AnimFile::Check((unsigned __int16 *)this, v26); /*0x426d2e*/
                      v25 = 0; /*0x426d33*/
                      v24 = v34; /*0x426d37*/
                    }
                    v31 = (unsigned __int16 *)(*(_DWORD *)(this + 3600) + 8); /*0x426d46*/
                    v32 = v24 - *(unsigned __int16 *)(this + 6 * v26 + 2060); /*0x426d51*/
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
              sub_4270D0(this, (unsigned int)aP2, aP2, v25, a4, i); /*0x426d6b*/
            }
          }
        }
      }
LABEL_42:
      if ( *(_DWORD *)(this + 3604) > *(_DWORD *)(this + 204) ) /*0x426d90*/
        *(_DWORD *)(this + 3604) = 0; /*0x426d92*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3596) + 96))(*(_DWORD *)(this + 3596)); /*0x426db6*/
  }
  return *(_DWORD *)(this + 3596); /*0x426aa2*/
}


// ==== 0x00426DD0  AnimFile::Check  this=AnimFile  sig=csp ====
int __thiscall sub_426DD0(unsigned __int16 *this, int a2)
{
  return *(this + 3 * a2 + 1032) + 2 * *(this + 3 * a2 + 1031) + 8; /*0x426df3*/
}


// ==== 0x00426E80  ObjectClass::method_426E80  this=ObjectClass  sig=csp ====
int __thiscall sub_426E80(int this, int a2)
{
  int result; // eax
  int v3; // esi
  unsigned __int16 *i; // edx
  int v5; // ecx

  if ( a2 >= *(_DWORD *)(this + 204) ) /*0x426e8f*/
    return -1; /*0x426e8f*/
  result = 0; /*0x426e93*/
  v3 = *(unsigned __int16 *)(this + 146); /*0x426e95*/
  if ( !(_WORD)v3 ) /*0x426e9e*/
    return -1; /*0x426ec3*/
  for ( i = (unsigned __int16 *)(this + 2060); ; i += 3 ) /*0x426ea0*/
  {
    HIWORD(v5) = 0; /*0x426ea6*/
    if ( *i <= a2 ) /*0x426ead*/
    {
      LOWORD(v5) = *i; /*0x426ea8*/
      if ( v5 + i[1] > a2 ) /*0x426eb9*/
        break; /*0x426eb9*/
    }
    if ( ++result >= v3 ) /*0x426ec1*/
      return -1; /*0x426ec1*/
  }
  return result; /*0x426ec6*/
}


// ==== 0x00426ED0  ObjectClass::method_426ED0  this=ObjectClass  sig=csp ====
int __thiscall sub_426ED0(int this, int a2)
{
  int v3; // esi
  int v4; // edx
  unsigned __int16 *i; // ecx
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

  if ( a2 >= *(_DWORD *)(this + 204) ) /*0x426ee0*/
    return 0; /*0x426ee0*/
  v3 = 0; /*0x426ee4*/
  v4 = *(unsigned __int16 *)(this + 146); /*0x426ee6*/
  if ( !(_WORD)v4 ) /*0x426eef*/
    return 0; /*0x426eef*/
  for ( i = (unsigned __int16 *)(this + 2060); ; i += 3 ) /*0x426ef1*/
  {
    HIWORD(v6) = 0; /*0x426ef7*/
    if ( *i <= a2 ) /*0x426efe*/
    {
      LOWORD(v6) = *i; /*0x426ef9*/
      if ( v6 + i[1] > a2 ) /*0x426f0a*/
        break; /*0x426f0a*/
    }
    if ( ++v3 >= v4 ) /*0x426f12*/
      return 0; /*0x426f12*/
  }
  if ( v3 == -1 ) /*0x426f20*/
    return 0; /*0x426f14*/
  if ( *(_BYTE *)(this + 136) && *(_DWORD *)(this + 3608) != v3 ) /*0x426f32*/
  {
    v8 = *(_DWORD *)(this + 132); /*0x426f34*/
    *(_DWORD *)(this + 3608) = v3; /*0x426f3f*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 40))(v8, (v3 << 16) + 2816, 0); /*0x426f50*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 132) + 36))( /*0x426f87*/
      *(_DWORD *)(this + 132),
      *(_DWORD *)(this + 3600),
      *(unsigned __int16 *)(this + 2 * (3 * v3 + 1032)) + 2 * *(unsigned __int16 *)(this + 6 * v3 + 2062) + 8);
  }
  v9 = 3 * v3; /*0x426f8a*/
  v10 = *(_WORD *)(this + 6 * v3 + 2060); /*0x426f8f*/
  v11 = *(_WORD *)(this + 2 * v9 + 2062); /*0x426f99*/
  v12 = *(_DWORD *)(this + 3600); /*0x426fa4*/
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
unsigned __int16 __thiscall sub_426FD0(int this, int a2)
{
  int v2; // ebx
  unsigned __int16 result; // ax
  int v5; // esi
  int v6; // edx
  unsigned __int16 *i; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned __int16 *v10; // ecx
  int v11; // ebx
  int v12; // edx

  v2 = a2; /*0x426fd1*/
  result = 0; /*0x426fda*/
  if ( a2 < *(_DWORD *)(this + 204) ) /*0x426fe2*/
  {
    v5 = 0; /*0x426fe6*/
    v6 = *(unsigned __int16 *)(this + 146); /*0x426fe8*/
    if ( (_WORD)v6 ) /*0x426ff1*/
    {
      for ( i = (unsigned __int16 *)(this + 2060); ; i += 3 ) /*0x426ff3*/
      {
        HIWORD(v8) = 0; /*0x426ff9*/
        if ( *i <= a2 ) /*0x427000*/
        {
          LOWORD(v8) = *i; /*0x426ffb*/
          if ( v8 + i[1] > a2 ) /*0x42700c*/
            break; /*0x42700c*/
        }
        if ( ++v5 >= v6 ) /*0x427014*/
          return 0; /*0x427014*/
      }
      if ( v5 == -1 ) /*0x427022*/
        return 0; /*0x427022*/
      if ( *(_BYTE *)(this + 136) && *(_DWORD *)(this + 3608) != v5 ) /*0x427034*/
      {
        v9 = *(_DWORD *)(this + 132); /*0x427036*/
        *(_DWORD *)(this + 3608) = v5; /*0x427041*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 40))(v9, (v5 << 16) + 2816, 0); /*0x427052*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 132) + 36))( /*0x427083*/
          *(_DWORD *)(this + 132),
          *(_DWORD *)(this + 3600),
          *(unsigned __int16 *)(this + 2 * (3 * v5 + 1032)) + 2 * *(unsigned __int16 *)(this + 6 * v5 + 2062) + 8);
        v2 = a2; /*0x427086*/
      }
      v10 = (unsigned __int16 *)(*(_DWORD *)(this + 3600) + 8); /*0x427095*/
      v11 = v2 - *(unsigned __int16 *)(this + 6 * v5 + 2060); /*0x4270a0*/
      if ( v11 < 0 ) /*0x4270a2*/
        return 0; /*0x427016*/
      v12 = v11 + 1; /*0x4270a8*/
      do /*0x4270bc*/
      {
        result = *v10++; /*0x4270ad*/
        if ( result >= 2u ) /*0x4270b6*/
          result -= 2; /*0x4270b8*/
        --v12; /*0x4270bb*/
      }
      while ( v12 ); /*0x4270bc*/
    }
  }
  return result; /*0x427018*/
}


// ==== 0x004270D0  sub_4270D0  this=AnimFile  sig=csp ====
char __fastcall sub_4270D0(int a1, unsigned int a2, AnimFile *aP2, int arg4, char *a4, int a6)
{
  signed int v7; // ecx
  AnimFile *v8; // ebx
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
  AnimFile *aP2a; // [esp+14h] [ebp+4h]

  if ( !arg4 ) /*0x4270da*/
    return 1; /*0x4270e2*/
  v7 = arg4 - 2; /*0x4270ed*/
  v8 = (AnimFile *)a4; /*0x4270f0*/
  v9 = *(__int16 *)aP2->__pad_0; /*0x4270f2*/
  v10 = &aP2->__pad_0[2]; /*0x4270f5*/
  aP2a = (AnimFile *)a4; /*0x4270f8*/
  if ( arg4 == 2 ) /*0x4270fe*/
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
                v14 = &v8->__pad_0[4 * v13]; /*0x42715e*/
                v8 = (AnimFile *)((char *)v8 + v12); /*0x427162*/
                aP2a = v8; /*0x427167*/
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
              v8 = (AnimFile *)((char *)v8 + v15); /*0x4271a1*/
              aP2a = v8; /*0x4271a3*/
            }
            v17 = v12 + 0x80; /*0x4271a9*/
            if ( !v17 ) /*0x4271ab*/
              break; /*0x4271ab*/
            v8 = (AnimFile *)((char *)v8 + v17); /*0x42722e*/
            aP2a = v8; /*0x427230*/
          }
          a2 = *(unsigned __int16 *)i; /*0x4271af*/
          i += 2; /*0x4271b3*/
          if ( (__int16)a2 <= 0 ) /*0x4271b9*/
            break; /*0x4271b9*/
LABEL_22:
          v8 = (AnimFile *)((char *)v8 + a2); /*0x4271ff*/
          aP2a = v8; /*0x427201*/
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
          v8 = aP2a; /*0x4271ef*/
          memset32(v18, v19, a2 >> 2); /*0x4271f6*/
          memset(&v18[4 * (a2 >> 2)], v19, a2 & 3); /*0x4271fd*/
          goto LABEL_22; /*0x4271fd*/
        }
        qmemcpy(v8, i, 4 * (a2 >> 2)); /*0x427215*/
        v20 = &v8->__pad_0[4 * (a2 >> 2)]; /*0x427215*/
        v8 = (AnimFile *)((char *)v8 + a2); /*0x427219*/
        aP2a = v8; /*0x42721e*/
        qmemcpy(v20, &i[4 * (a2 >> 2)], a2 & 3); /*0x427222*/
      }
    }
    return 0; /*0x427120*/
  }
  else if ( v7 == a6 ) /*0x42723d*/
  {
    qmemcpy(a4, v10, v7); /*0x427254*/
    return 1; /*0x42725d*/
  }
  else
  {
    return 0; /*0x427245*/
  }
}


// ==== 0x00427270  Animate::setMapCoords  this=Animate  sig=csp ====
std::locale::facet *__thiscall AbstractClass::setMapCoords(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Animate; /*0x427279*/
  if ( (a2 & 1) != 0 ) /*0x42727f*/
    __3_YAXPAX_Z(this); /*0x427282*/
  return this; /*0x42728c*/
}


// ==== 0x00427290  AnimFile::Stub  this=AnimFile  sig=csp ====
char *__thiscall AnimFile::_vt04(char *this)
{
  return this + 1292; /*0x427296*/
}


// ==== 0x004272A0  AnimFile::QueryInterface  this=AnimFile  sig=csp ====
AnimFile *__thiscall AnimFile::QueryInterface(void *Block, char a2)
{
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v3 = *((_BYTE *)Block + 137); /*0x4272a6*/
  *(_DWORD *)Block = &vt_AnimFile; /*0x4272ac*/
  if ( v3 ) /*0x4272b4*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)Block + 33) + 52))(*((_DWORD *)Block + 33)); /*0x4272be*/
    *((_BYTE *)Block + 137) = 0; /*0x4272c1*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)Block + 899); /*0x4272c7*/
  *((_DWORD *)Block + 33) = 0; /*0x4272cd*/
  if ( v4 ) /*0x4272d5*/
  {
    (**v4)(v4, 1); /*0x4272db*/
    *((_DWORD *)Block + 899) = 0; /*0x4272dd*/
  }
  if ( *((_DWORD *)Block + 900) ) /*0x4272e3*/
  {
    __3_YAXPAX_Z(*((void **)Block + 900)); /*0x4272ee*/
    *((_DWORD *)Block + 900) = 0; /*0x4272f6*/
  }
  *((_BYTE *)Block + 136) = 0; /*0x427300*/
  *(_DWORD *)Block = &vt_Animate; /*0x427308*/
  if ( (a2 & 1) != 0 ) /*0x42730e*/
    __3_YAXPAX_Z(Block); /*0x427311*/
  return (AnimFile *)Block; /*0x42731b*/
}


// ==== 0x00427320  sub_427320  this=-  sig=ida-proto ====
void sub_427320()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42732c*/
  unk_89A1F8 = Math::Sqrt(v0 + v0); /*0x42733e*/
}


// ==== 0x00427350  sub_427350  this=-  sig=ida-proto ====
void sub_427350()
{
  unk_89A248 = unk_89A1F8 / 60.0; /*0x42735c*/
}


// ==== 0x00427370  sub_427370  this=-  sig=ida-proto ====
void sub_427370()
{
  unk_89A230 = 1.0 / unk_89A248; /*0x42737c*/
}


// ==== 0x00427390  sub_427390  this=-  sig=ida-proto ====
void sub_427390()
{
  unk_89A228 = 0.0174532925199433 * 45.0; /*0x42739c*/
}


// ==== 0x004273B0  sub_4273B0  this=-  sig=ida-proto ====
void sub_4273B0()
{
  unk_89A200 = 0.0174532925199433 * 60.0; /*0x4273bc*/
}


// ==== 0x004273D0  sub_4273D0  this=-  sig=ida-proto ====
void sub_4273D0()
{
  unk_89A1D8 = 0.0174532925199433 * 90.0; /*0x4273dc*/
}


// ==== 0x004273F0  sub_4273F0  this=-  sig=ida-proto ====
__int64 sub_4273F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89A1D8 - unk_89A200); /*0x427402*/
  result = Math::RoundToInt(v0 * unk_89A1F8 * 0.5); /*0x427416*/
  unk_89A250 = result; /*0x42741b*/
  return result; /*0x427420*/
}


// ==== 0x00427430  sub_427430  this=-  sig=ida-proto ====
void sub_427430()
{
  unk_89A208 = Math::ArcTan((double)unk_89A250 * 0.00390625); /*0x427447*/
}


// ==== 0x00427460  sub_427460  this=-  sig=ida-proto ====
void sub_427460()
{
  unk_89A220 = Math::ArcTan((double)(2 * unk_89A250) / unk_89A1F8); /*0x427482*/
}


// ==== 0x00427490  sub_427490  this=-  sig=ida-proto ====
__int64 sub_427490()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89A250) + 0.5); /*0x4274ab*/
  unk_89A244 = result; /*0x4274b0*/
  return result; /*0x4274b6*/
}


// ==== 0x004274C0  sub_4274C0  this=-  sig=ida-proto ====
int sub_4274C0()
{
  unk_89A1F0 = 0; /*0x4274c2*/
  unk_89A1F2 = 0; /*0x4274c8*/
  return 0; /*0x4274ce*/
}


// ==== 0x004274D0  sub_4274D0  this=-  sig=ida-proto ====
int sub_4274D0()
{
  unk_89A210 = 0; /*0x4274d2*/
  unk_89A214 = 0; /*0x4274d7*/
  unk_89A218 = 0; /*0x4274dc*/
  return 0; /*0x4274e1*/
}


// ==== 0x004274F0  sub_4274F0  this=-  sig=ida-proto ====
int sub_4274F0()
{
  unk_89A240 = 0; /*0x4274f5*/
  unk_89A238 = 128; /*0x4274ff*/
  unk_89A23C = 128; /*0x427504*/
  return 128; /*0x427509*/
}


// ==== 0x00427510  sub_427510  this=-  sig=ida-proto ====
int sub_427510()
{
  unk_89A1E0 = 0; /*0x427512*/
  unk_89A1E4 = 0; /*0x427517*/
  unk_89A1E8 = 0; /*0x42751c*/
  unk_89A1EC = 0; /*0x427521*/
  return 0; /*0x427526*/
}


// ==== 0x00427530  AnimTypeClass::Construct  this=AnimTypeClass  sig=csp ====
_DWORD *__thiscall AnimTypeClass::Construct(_DWORD *this, AbstractClass *aP1)
{
  AnimTypeClass *v3; // eax
  int v4; // eax
  int v5; // eax
  ObjectClass *v6; // ecx

  ObjectTypeClass::ConstructFull((int)this, aP1); /*0x42753a*/
  this->MiddleFrameIndex = -1; /*0x427544*/
  this->MiddleFrameWidth = 0; /*0x42754a*/
  this->MiddleFrameHeight = 0; /*0x427550*/
  this->q2A0 = 0; /*0x427556*/
  this->AnimTypeClass_field_2A4 = 0; /*0x42755c*/
  this->Damage = 0; /*0x427562*/
  this->q2AC = 0; /*0x427568*/
  this->Rate = 1; /*0x42756e*/
  this->Start = 0; /*0x427578*/
  this->LoopStart_e = 0; /*0x42757e*/
  this->LoopEnd_e = 0; /*0x427584*/
  this->End_e = 0; /*0x42758a*/
  this->LoopCount_e = 0; /*0x427590*/
  this->Next_e = 0; /*0x427596*/
  this->SpawnsParticle_e = -1; /*0x42759c*/
  this->NumParticles = 0; /*0x4275a2*/
  this->DetailLevel_e = 0; /*0x4275a8*/
  this->TranslucencyDetailLevel_e = 0; /*0x4275ae*/
  this->RandomLoopDelay_e = 0; /*0x4275b4*/
  this->q2E0 = 0; /*0x4275ba*/
  this->RandomRate_e = 0; /*0x4275c0*/
  this->q2E8 = 0; /*0x4275c6*/
  this->Translucency_e = 0; /*0x4275cc*/
  this->Spawns_e = 0; /*0x4275d2*/
  this->SpawnCount_e = 0; /*0x4275d8*/
  this->Report_e = -1; /*0x4275de*/
  this->StopSound = -1; /*0x4275e4*/
  this->BounceAnim = 0; /*0x4275ea*/
  this->ExpireAnim_e = 0; /*0x4275f0*/
  this->TrailerAnim_e = 0; /*0x4275f6*/
  this->TrailerSeperation_e = 0; /*0x4275fc*/
  this->Elasticity_e = -1610612736; /*0x427602*/
  this->q314 = 1072273817; /*0x42760c*/
  this->MinZVel_e = 0; /*0x42761b*/
  this->q0C7 = 1074528256; /*0x427621*/
  this->AnimTypeClass_field_double_320 = 0; /*0x427627*/
  this->q0C9 = 1074528256; /*0x42762d*/
  this->MaxXYVel = 0; /*0x427633*/
  this->q32C = 1076756480; /*0x427639*/
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
  this->Layer = 3; /*0x4276d4*/
  this->DoubleThick = 0; /*0x4276de*/
  this->Flat = 0; /*0x4276e4*/
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
  *this = &AnimTypeClass::`vftable'; /*0x427731*/
  this->vtable2 = &AnimTypeClass::`vftable'; /*0x427737*/
  this->vtable3 = &AnimTypeClass::`vftable'; /*0x42773d*/
  this->vtable4 = &vt_AnimTypeClass; /*0x427744*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x42774b*/
  this->q234 = 1; /*0x427750*/
  this->q22F = 1; /*0x427757*/
  this->q230 = 0; /*0x42775e*/
  this->q231 = 0; /*0x427764*/
  this->q232 = 1; /*0x42776a*/
  this->q233 = 1; /*0x427771*/
  this->q235 = 0; /*0x427778*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[62260] < *(int *)&MEMORY[0x89F690].__pad_579C[62252] /*0x4277b0*/
    || (MEMORY[0x89F690].__pad_579C[62257] || !*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62252])
    && *(int *)&MEMORY[0x89F690].__pad_579C[62264] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62244] + 8))(
         &MEMORY[0x89F690].__pad_579C[62244],
         *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62252] + *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62264],
         0) )
  {
    v3 = (AnimTypeClass *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62260])++; /*0x4277bd*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * (_DWORD)v3) = this; /*0x4277cc*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x427803*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x427810*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x42781f*/
  }
  v5 = 0; /*0x427828*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[62260] <= 0 ) /*0x42782c*/
  {
LABEL_17:
    v5 = -1; /*0x427840*/
  }
  else
  {
    v6 = *(ObjectClass **)&MEMORY[0x89F690].__pad_579C[62248]; /*0x42782e*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x427836*/
    {
      ++v5; /*0x427838*/
      v6 = (ObjectClass *)((char *)v6 + 4); /*0x427839*/
      if ( v5 >= *(int *)&MEMORY[0x89F690].__pad_579C[62260] ) /*0x42783e*/
        goto LABEL_17; /*0x42783e*/
    }
  }
  this->MiddleFrameIndex = v5; /*0x427842*/
  return this; /*0x42784a*/
}


// ==== 0x00427940  LoadBuildingTypeClassTheatreSHP  this=-  sig=ida-proto ====
int __fastcall BuildingTypeClass_LoadTheatreSHP(int a1)
{
  int result; // eax
  int v3; // esi
  char v4; // al
  int v5; // eax
  int i; // [esp+8h] [ebp-204h]
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x427952*/
  for ( i = 0; i < MEMORY[0x8B4160]; ++i ) /*0x42795a*/
  {
    v3 = *((_DWORD *)MEMORY[0x8B4154] + result); /*0x427968*/
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
char __thiscall AnimTypeClass::_vt24(void *this, int a2)
{
  int v2; // eax
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  LOBYTE(v2) = MEMORY[0xA8ED6B]; /*0x427a80*/
  if ( MEMORY[0xA8ED6B] || a2 != dword_822CF8 ) /*0x427aa0*/
  {
    if ( !this->q22C || this->DemandLoad ) /*0x427ab0*/
    {
      LOBYTE(v2) = this->q237; /*0x427b2b*/
      if ( (_BYTE)v2 ) /*0x427b33*/
        LOBYTE(v2) = (*(int (__thiscall **)(void *, int))(this->Strength)(this, a2); /*0x427b3a*/
    }
    else
    {
      if ( this->Image && this->ImageAllocated ) /*0x427ac4*/
      {
        __3_YAXPAX_Z(*((void **)this + 41)); /*0x427acf*/
        this->ImageAllocated = 0; /*0x427ad7*/
      }
      this->Image = 0; /*0x427af6*/
      _makepath(Buffer, 0, 0, (const char *)this + 36, (const char *)&off_7E1BC6 + 112 * a2); /*0x427b07*/
      v2 = SearchMIXFile(Buffer, 1); /*0x427b15*/
      this->Image = v2; /*0x427b1a*/
    }
  }
  return v2; /*0x427b20*/
}


// ==== 0x00427B50  AnimTypeClass::GetWarhead  this=AnimTypeClass  sig=csp ====
char __thiscall AnimTypeClass::_vt40(int this, int a2)
{
  int v3; // eax
  char v4; // cl
  const char *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  char v9; // dl
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  LOBYTE(v3) = *(_BYTE *)(this + 862); /*0x427b59*/
  if ( !(_BYTE)v3 ) /*0x427b61*/
  {
    if ( *(_BYTE *)(this + 556) ) /*0x427b67*/
    {
      LOBYTE(v3) = ObjectTypeClass::Load2DArt((char *)this); /*0x427b71*/
    }
    else
    {
      if ( *(_DWORD *)(this + 164) && *(_BYTE *)(this + 168) ) /*0x427b85*/
      {
        __3_YAXPAX_Z(*(void **)(this + 164)); /*0x427b90*/
        *(_BYTE *)(this + 168) = 0; /*0x427b98*/
      }
      v4 = *(_BYTE *)(this + 504); /*0x427b9f*/
      v5 = (const char *)(this + 504); /*0x427ba5*/
      *(_DWORD *)(this + 164) = 0; /*0x427bad*/
      if ( !v4 ) /*0x427bb7*/
        v5 = (const char *)(this + 36); /*0x427bb9*/
      _makepath(Buffer, 0, 0, v5, Ext); /*0x427bcb*/
      TheaterObjectTypeClassSpecificID(Buffer, a2); /*0x427bde*/
      v3 = SearchMIXFile(Buffer, 1); /*0x427be9*/
      *(_DWORD *)(this + 164) = v3; /*0x427bf0*/
      if ( !v3 ) /*0x427bf6*/
      {
        ObjectTypeClass::SetRTTI71(Buffer); /*0x427bfc*/
        v3 = SearchMIXFile(Buffer, 1); /*0x427c07*/
        *(_DWORD *)(this + 164) = v3; /*0x427c0c*/
      }
    }
  }
  v6 = *(_DWORD *)(this + 164); /*0x427c12*/
  if ( v6 ) /*0x427c1a*/
  {
    v7 = *(_DWORD *)(this + 704); /*0x427c1c*/
    *(_BYTE *)(this + 676) = 1; /*0x427c22*/
    if ( !v7 ) /*0x427c2b*/
    {
      v8 = *(__int16 *)(v6 + 6); /*0x427c2d*/
      v9 = *(_BYTE *)(this + 882); /*0x427c31*/
      *(_DWORD *)(this + 704) = v8; /*0x427c37*/
      if ( v9 ) /*0x427c3f*/
        *(_DWORD *)(this + 704) = v8 / 2; /*0x427c46*/
    }
    if ( !*(_DWORD *)(this + 700) ) /*0x427c4c*/
      *(_DWORD *)(this + 700) = *(_DWORD *)(this + 704); /*0x427c5c*/
    *(_DWORD *)(this + 664) = *(__int16 *)(v6 + 6) / 2; /*0x427c6b*/
    *(_DWORD *)(this + 668) = -1; /*0x427c74*/
    *(_DWORD *)(this + 672) = -1; /*0x427c7a*/
    LOBYTE(v3) = -1; /*0x427c71*/
  }
  return v3; /*0x427c80*/
}


// ==== 0x00427CB0  AnimTypeClass::FindIndex  this=char*  sig=csp ====
int __thiscall AnimTypeClass::FindIndex(void *this)
{
  int v2; // esi

  if ( !this ) /*0x427cb6*/
    return -1; /*0x427cb6*/
  v2 = 0; /*0x427cbd*/
  if ( *(int *)&stru_89E138.__pad_1600D[27] <= 0 ) /*0x427cc1*/
    return -1; /*0x427ce6*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * v2) + 36), this) ) /*0x427cda*/
  {
    if ( ++v2 >= *(int *)&stru_89E138.__pad_1600D[27] ) /*0x427ce4*/
      return -1; /*0x427ce4*/
  }
  return v2; /*0x427ce6*/
}


// ==== 0x00427D00  AnimTypeClass::LoadFromINI  this=AnimTypeClass  sig=csp ====
char __thiscall AnimTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
{
  char Bool_Overwrite; // al
  int v5; // eax
  int Int_Overwrite; // eax
  int v7; // eax
  AnimTypeClass *v8; // ebp
  AnimTypeClass *v9; // eax
  int v10; // edx
  int *v11; // eax
  RandomStruct *v12; // ecx
  int v13; // eax
  double Double_Overwrite; // st7
  INIClass *v15; // eax
  double v16; // st7
  INIClass *edx20a; // edx
  double v18; // st7
  CCINIClass *v17; // eax
  int v20; // eax
  AnimTypeClass *v21; // ebp
  AnimTypeClass *v22; // eax
  char v23; // al
  char v24; // cl
  char v25; // al
  int v26; // eax
  OverlayTypeClass *v27; // ebp
  OverlayTypeClass *v28; // eax
  char v29; // cl
  char v30; // al
  char v31; // al
  INIClass *v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ebp
  int Index; // eax
  int v37; // eax
  int v38; // ebp
  int v39; // eax
  AnimTypeClass *v40; // ebp
  int ebp40; // ebp
  _DWORD *v42; // eax
  AnimTypeClass *v41; // eax
  AnimTypeClass *v44; // ebp
  int ebp51; // ebp
  _DWORD *v46; // eax
  AnimTypeClass *v45; // eax
  AnimTypeClass *v48; // ebp
  int ebp62; // ebp
  _DWORD *v50; // eax
  AnimTypeClass *v49; // eax
  int v52; // eax
  int v53; // ebp
  int v54; // eax
  char v55; // al
  char v56; // cl
  char v57; // al
  int *v58; // eax
  int v59; // ecx
  int v60; // edi
  int eax77; // eax
  int v62; // eax
  RandomStruct *v61; // eax
  RandomStruct *v65; // [esp-Ch] [ebp-C4h]
  RandomStruct *v64; // [esp-Ch] [ebp-C4h]
  char _FFFFFFF4a; // [esp-Ch] [ebp-C4h]
  RandomStruct *v66; // [esp-Ch] [ebp-C4h]
  RandomStruct *v67; // [esp-Ch] [ebp-C4h]
  char _FFFFFFF4b; // [esp-Ch] [ebp-C4h]
  char v71; // [esp-Ch] [ebp-C4h]
  ObjectClass *v70; // [esp+8h] [ebp-B0h] BYREF
  int aP4_4; // [esp+Ch] [ebp-ACh]
  RandomStruct aP1; // [esp+10h] [ebp-A8h] BYREF
  INIClass Source[2]; // [esp+18h] [ebp-A0h] BYREF
  char Destination[32]; // [esp+98h] [ebp-20h] BYREF

  INIClass::ResetSection(a2);
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)a2) )
    return 0;
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)a2,
                     (unsigned __int8 *)(this + 36),
                     &unk_818660,
                     *(_BYTE *)(this + 882));
  if ( Bool_Overwrite != *(_BYTE *)(this + 882) )
  {
    *(_BYTE *)(this + 882) = Bool_Overwrite;
    if ( Bool_Overwrite )
      *(int *)(this + 704) /= 2;
    else
      *(_DWORD *)(this + 704) *= 2;
    v5 = *(_DWORD *)(this + 704);
    if ( *(_DWORD *)(this + 700) > v5 )
      *(_DWORD *)(this + 700) = v5;
  }
  if ( *(_BYTE *)(this + 504) )
  {
    if ( !*(_DWORD *)(this + 164) )
    {
      *(_BYTE *)(this + 556) = INIClass::ReadBool_Overwrite(
                                 (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                                 (unsigned __int8 *)(this + 36),
                                 &unk_818658,
                                 *(_BYTE *)(this + 556));
      *(_BYTE *)(this + 567) = INIClass::ReadBool_Overwrite(
                                 (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                                 (unsigned __int8 *)(this + 36),
                                 &unk_81864C,
                                 *(_BYTE *)(this + 567));
    }
    (*(void (__thiscall **)(int, int))(this->Strength)(this, -1);
  }
  *(_DWORD *)(this + 868) = AnimTypeClass::ReadINIString(
                              a2,
                              (unsigned __int8 *)(this + 36),
                              byte_818644,
                              *(_DWORD *)(this + 868));
  *(_BYTE *)(this + 865) = INIClass::ReadBool_Overwrite(
                             (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                             (unsigned __int8 *)(this + 36),
                             &unk_818638,
                             *(_BYTE *)(this + 865));
  *(_BYTE *)(this + 872) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81862C,
                             *(_BYTE *)(this + 872));
  *(_BYTE *)(this + 873) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_818624,
                             *(_BYTE *)(this + 873));
  *(_BYTE *)(this + 876) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81861C,
                             *(_BYTE *)(this + 876));
  *(_BYTE *)(this + 866) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_818610,
                             *(_BYTE *)(this + 866));
  *(_BYTE *)(this + 874) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_818604,
                             *(_BYTE *)(this + 874));
  *(_BYTE *)(this + 875) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_8185FC,
                             *(_BYTE *)(this + 875));
  *(_BYTE *)(this + 877) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_8185F4,
                             *(_BYTE *)(this + 877));
  *(_BYTE *)(this + 878) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)stru_81859C.__pad_48,
                             *(_BYTE *)(this + 878));
  *(_BYTE *)(this + 879) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &stru_816E3C,
                             *(_BYTE *)(this + 879));
  *(_BYTE *)(this + 880) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81859C.INIClass_field_3C,
                             *(_BYTE *)(this + 880));
  *(_BYTE *)(this + 881) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81859C.needsSave_flag,
                             *(_BYTE *)(this + 881));
  *(_BYTE *)(this + 883) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81859C.__pad_20[8],
                             *(_BYTE *)(this + 883));
  *(_BYTE *)(this + 855) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)stru_81859C.sectionHead,
                             *(_BYTE *)(this + 855));
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)a2,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_81859C.headNode[1],
                    (INIClass *)0xFFFFFFFF);
  if ( Int_Overwrite != -1 )
  {
    if ( Int_Overwrite <= 0 )
      v7 = 0;
    else
      v7 = 900 / Int_Overwrite;
    *(_DWORD *)(this + 688) = v7;
  }
  *(double *)(this + 680) = INIClass::ReadDouble_Overwrite(
                              (int)a2,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_81859C,
                              (INIClass *)*(_DWORD *)(this + 680));
  *(_DWORD *)(this + 692) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818594,
                              *(INIClass **)(this + 692));
  *(_DWORD *)(this + 704) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818590,
                              *(INIClass **)(this + 704));
  *(_DWORD *)(this + 696) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818584,
                              *(INIClass **)(this + 696));
  *(_DWORD *)(this + 700) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_81857C,
                              *(INIClass **)(this + 700));
  *(_DWORD *)(this + 708) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818570,
                              *(INIClass **)(this + 708));
  v8 = *(AnimTypeClass **)(this + 712);
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_818568,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Source,
         128) )
  {
    v9 = globalHelper_028F70(Source[0].__pad_0, (int)&MEMORY[0x89F690].__pad_579C[62244]);
  }
  else
  {
    v9 = v8;
  }
  *(_DWORD *)(this + 712) = v9;
  *(_DWORD *)(this + 724) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_81855C,
                              *(INIClass **)(this + 724));
  *(_DWORD *)(this + 728) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818544,
                              *(INIClass **)(this + 728));
  v10 = *(_DWORD *)(this + 736);
  v70 = *(ObjectClass **)(this + 732);
  aP4_4 = v10;
  v11 = INIClass::ReadPoint2D_Overwrite(a2, &aP1, (INIClass *)(this + 36), &unk_818534, (RandomStruct *)&v70);
  v12 = (RandomStruct *)*v11;
  v13 = v11[1];
  *(_DWORD *)(this + 732) = v12;
  *(_DWORD *)(this + 736) = v13;
  *(_DWORD *)(this + 748) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818524,
                              *(INIClass **)(this + 748));
  *(_BYTE *)(this + 856) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_8184C8.unknown50,
                             *(_BYTE *)(this + 856));
  *(_BYTE *)(this + 857) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_8184C8.__pad_41[3],
                             *(_BYTE *)(this + 857));
  *(_DWORD *)(this + 832) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_8184C8.unknown38,
                              *(INIClass **)(this + 832));
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)a2,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_8184C8.INIClass_field_2C,
                       (INIClass *)*(_DWORD *)(this + 784));
  v15 = *(INIClass **)(this + 808);
  *(double *)(this + 784) = Double_Overwrite;
  v16 = INIClass::ReadDouble_Overwrite((int)a2, (INIClass *)(this + 36), (unsigned __int8 *)stru_8184C8.__pad_20, v15);
  edx20a = *(INIClass **)(this + 792);
  *(double *)(this + 808) = v16;
  v18 = INIClass::ReadDouble_Overwrite(
          (int)a2,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_8184C8.sectionHead[2],
          edx20a);
  v17 = *(CCINIClass **)(this + 844);
  *(double *)(this + 792) = v18;
  v20 = INIClass::ReadInt_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8184C8.headNode[1],
          (INIClass *)v17);
  v21 = *(AnimTypeClass **)(this + 752);
  *(_DWORD *)(this + 844) = v20;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_8184C8,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Source,
         128) )
  {
    v22 = globalHelper_028F70(Source[0].__pad_0, (int)&MEMORY[0x89F690].__pad_579C[62244]);
  }
  else
  {
    v22 = v21;
  }
  v65 = *(RandomStruct **)(this + 756);
  *(_DWORD *)(this + 752) = v22;
  *(_DWORD *)(this + 756) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_8184BC,
                              (INIClass *)v65);
  v23 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8184B0, *(_BYTE *)(this + 854));
  v24 = *(_BYTE *)(this + 853);
  *(_BYTE *)(this + 854) = v23;
  v25 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8184A8, v24);
  v64 = *(RandomStruct **)(this + 828);
  *(_BYTE *)(this + 853) = v25;
  v26 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_818490, (INIClass *)v64);
  v27 = *(OverlayTypeClass **)(this + 824);
  *(_DWORD *)(this + 828) = v26;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_81847C,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Source,
         128) )
  {
    v28 = BuildingTypeClass::FindOrCreate2(Source[0].__pad_0);
  }
  else
  {
    v28 = v27;
  }
  v29 = *(_BYTE *)(this + 864);
  *(_DWORD *)(this + 824) = v28;
  v30 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_818424.__pad_41[3],
          v29);
  _FFFFFFF4a = *(_BYTE *)(this + 884);
  *(_BYTE *)(this + 864) = v30;
  *(_BYTE *)(this + 884) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_818424.needsSave_flag,
                             _FFFFFFF4a);
  v31 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_818424.__pad_20[4],
          *(_BYTE *)(this + 852));
  v32 = *(INIClass **)(this + 848);
  *(_BYTE *)(this + 852) = v31;
  v33 = INIClass::ReadInt_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_818424.sectionHead[1],
          v32);
  v66 = *(RandomStruct **)(this + 836);
  *(_DWORD *)(this + 848) = v33;
  *(_DWORD *)(this + 836) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_818424.headNode[1],
                              (INIClass *)v66);
  v34 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &stru_818424, *(INIClass **)(this + 840));
  v35 = *(_DWORD *)(this + 760);
  *(_DWORD *)(this + 840) = v34;
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(this + 36),
          &unk_818418,
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          Source,
          128)
    || (Index = VocClass::FindIndex(Source), Index == -1) )
  {
    Index = v35;
  }
  *(_DWORD *)(this + 760) = Index;
  if ( Index == -1 )
  {
    if ( !INIClass::GetString(
            a2,
            (INIClass *)(this + 36),
            &unk_818410,
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            Source,
            128)
      || (v37 = VocClass::FindIndex(Source), v37 == -1) )
    {
      v37 = -1;
    }
    *(_DWORD *)(this + 760) = v37;
  }
  v38 = *(_DWORD *)(this + 764);
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(this + 36),
          &unk_818404,
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          Source,
          128)
    || (v39 = VocClass::FindIndex(Source), v39 == -1) )
  {
    v39 = v38;
  }
  v40 = *(AnimTypeClass **)(this + 768);
  *(_DWORD *)(this + 764) = v39;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_8183F8,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Source,
         128) )
  {
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
      goto LABEL_46;
    ebp40 = 0;
    if ( *(int *)&MEMORY[0x89F690].__pad_579C[62260] > 0 )
    {
      while ( _strcmpi(
                (char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * ebp40) + 36),
                Source[0].__pad_0) )
      {
        if ( ++ebp40 >= *(int *)&MEMORY[0x89F690].__pad_579C[62260] )
          goto LABEL_43;
      }
      v41 = *(AnimTypeClass **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * ebp40);
      goto LABEL_47;
    }
LABEL_43:
    v42 = (_DWORD *)__2_YAPAXI_Z(0x378u);
    if ( v42 )
      v41 = (AnimTypeClass *)AnimTypeClass::Construct(v42, (AbstractClass *)Source);
    else
LABEL_46:
      v41 = 0;
LABEL_47:
    v40 = v41;
  }
  *(_DWORD *)(this + 768) = v40;
  v44 = *(AnimTypeClass **)(this + 772);
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(this + 36),
          &unk_8183EC,
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          Source,
          128) )
  {
    v45 = v44;
    goto LABEL_59;
  }
  if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
  {
LABEL_57:
    v45 = 0;
    goto LABEL_59;
  }
  ebp51 = 0;
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[62260] <= 0 )
  {
LABEL_54:
    v46 = (_DWORD *)__2_YAPAXI_Z(0x378u);
    if ( v46 )
    {
      v45 = (AnimTypeClass *)AnimTypeClass::Construct(v46, (AbstractClass *)Source);
      goto LABEL_59;
    }
    goto LABEL_57;
  }
  while ( _strcmpi(
            (char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * ebp51) + 36),
            Source[0].__pad_0) )
  {
    if ( ++ebp51 >= *(int *)&MEMORY[0x89F690].__pad_579C[62260] )
      goto LABEL_54;
  }
  v45 = *(AnimTypeClass **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * ebp51);
LABEL_59:
  v48 = *(AnimTypeClass **)(this + 776);
  *(_DWORD *)(this + 772) = v45;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_8183E0,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Source,
         128) )
  {
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
      goto LABEL_68;
    ebp62 = 0;
    if ( *(int *)&MEMORY[0x89F690].__pad_579C[62260] > 0 )
    {
      while ( _strcmpi(
                (char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * ebp62) + 36),
                Source[0].__pad_0) )
      {
        if ( ++ebp62 >= *(int *)&MEMORY[0x89F690].__pad_579C[62260] )
          goto LABEL_65;
      }
      v49 = *(AnimTypeClass **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * ebp62);
      goto LABEL_70;
    }
LABEL_65:
    v50 = (_DWORD *)__2_YAPAXI_Z(0x378u);
    if ( v50 )
      v49 = (AnimTypeClass *)AnimTypeClass::Construct(v50, (AbstractClass *)Source);
    else
LABEL_68:
      v49 = 0;
  }
  else
  {
    v49 = v48;
  }
LABEL_70:
  v67 = *(RandomStruct **)(this + 780);
  *(_DWORD *)(this + 776) = v49;
  *(_DWORD *)(this + 780) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_8183CC,
                              (INIClass *)v67);
  v52 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8183BC, *(INIClass **)(this + 820));
  v53 = *(_DWORD *)(this + 816);
  *(_DWORD *)(this + 820) = v52;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_8183B4,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Source,
         128) )
  {
    v54 = WarheadTypeClass::FindOrCreate(Source[0].__pad_0);
  }
  else
  {
    v54 = v53;
  }
  _FFFFFFF4b = *(_BYTE *)(this + 858);
  *(_DWORD *)(this + 816) = v54;
  *(_BYTE *)(this + 858) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_8183AC,
                             _FFFFFFF4b);
  v55 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&aP3.unknown50,
          *(_BYTE *)(this + 859));
  v56 = *(_BYTE *)(this + 860);
  *(_BYTE *)(this + 859) = v55;
  v57 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (CCINIClass *)&aP3.INIClass_field_3C, v56);
  v71 = *(_BYTE *)(this + 861);
  *(_BYTE *)(this + 860) = v57;
  *(_BYTE *)(this + 861) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&aP3.INIClass_field_2C,
                             v71);
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&aP3.sectionCount,
         0,
         (INIClass *)Destination,
         32) )
  {
    *(_DWORD *)(this + 716) = BuildingTypeClass::FindOrCreateEx(Destination);
  }
  *(_DWORD *)(this + 720) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&aP3.headNode[2],
                              *(INIClass **)(this + 720));
  v70 = (ObjectClass *)-1;
  aP4_4 = -1;
  v58 = INIClass::ReadPoint2D_Overwrite(a2, &aP1, (INIClass *)(this + 36), &aP3, (RandomStruct *)&v70);
  v59 = *v58;
  v60 = v58[1];
  if ( *v58 != -1 )
  {
    if ( v59 <= 0 )
      eax77 = 0;
    else
      eax77 = 900 / v59;
    *(_DWORD *)(this + 740) = eax77;
  }
  if ( v60 != -1 )
  {
    if ( v60 <= 0 )
      v62 = 0;
    else
      v62 = 900 / v60;
    *(_DWORD *)(this + 744) = v62;
  }
  if ( *(int *)(this + 744) < 0 )
    *(_DWORD *)(this + 744) = 0;
  v61 = *(RandomStruct **)(this + 744);
  if ( *(_DWORD *)(this + 740) > (int)v61 )
    *(_DWORD *)(this + 740) = v61;
  return 1;
}


// ==== 0x00428800  AnimTypeClass::SaveLoad_Prefix  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int result; // eax
  char v3; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x428814*/
  if ( result >= 0 ) /*0x42881b*/
  {
    if ( a1 ) /*0x428823*/
    {
      ObjectTypeClass::Construct((_DWORD *)a1, (int)&v3); /*0x42882c*/
      *(_DWORD *)a1 = &AnimTypeClass::`vftable'; /*0x428831*/
      *(_DWORD *)(a1 + 4) = &AnimTypeClass::`vftable'; /*0x428837*/
      *(_DWORD *)(a1 + 8) = &AnimTypeClass::`vftable'; /*0x42883e*/
      *(_DWORD *)(a1 + 12) = &vt_AnimTypeClass; /*0x428845*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x42884e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x428855*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 712)); /*0x428866*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 772)); /*0x428877*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 776)); /*0x428888*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 768)); /*0x428899*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 752)); /*0x4288aa*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 816)); /*0x4288bb*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 824)); /*0x4288cc*/
    if ( !*(_BYTE *)(a1 + 862) ) /*0x4288d1*/
    {
      if ( *(_BYTE *)(a1 + 556) ) /*0x4288db*/
      {
        _makepath( /*0x428910*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 36),
          (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174));
        *(_DWORD *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x428923*/
        return 0; /*0x428932*/
      }
      if ( *(_BYTE *)(a1 + 567) ) /*0x428935*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 160))(a1, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x42894f*/
    }
    return 0; /*0x428955*/
  }
  return result; /*0x42892b*/
}


// ==== 0x00428970  AnimTypeClass::SaveLoad_Prefix_0  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x42897f*/
  if ( result >= 0 ) /*0x428986*/
    return 0; /*0x428988*/
  return result; /*0x42898a*/
}


// ==== 0x00428990  AnimTypeClass::GetClassIdentifier  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x428996*/
    return -2147467261; /*0x428998*/
  *a2 = -1366608934; /*0x4289a6*/
  a2[1] = 298976796; /*0x4289ae*/
  a2[2] = 1610654892; /*0x4289b7*/
  a2[3] = -1252326136; /*0x4289c0*/
  return 0; /*0x42899d*/
}


// ==== 0x004289D0  AnimTypeClass::PowerDrainUpdate  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::_vt13(int this, int *a2)
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x4289d9*/
  Power::TimerProcess(*(_DWORD *)(this + 868)); /*0x4289e7*/
  LOBYTE(v3) = *(_BYTE *)(this + 866); /*0x4289ec*/
  Power::FlagProcess(a2, v3); /*0x4289f5*/
  LOBYTE(v4) = *(_BYTE *)(this + 873); /*0x4289fa*/
  v5 = Power::FlagProcess(a2, v4); /*0x428a03*/
  LOBYTE(v5) = *(_BYTE *)(this + 874); /*0x428a08*/
  Power::FlagProcess(a2, v5); /*0x428a11*/
  LOBYTE(v6) = *(_BYTE *)(this + 875); /*0x428a16*/
  Power::FlagProcess(a2, v6); /*0x428a1f*/
  LOBYTE(v7) = *(_BYTE *)(this + 876); /*0x428a24*/
  v8 = Power::FlagProcess(a2, v7); /*0x428a2d*/
  LOBYTE(v8) = *(_BYTE *)(this + 877); /*0x428a32*/
  Power::FlagProcess(a2, v8); /*0x428a3b*/
  LOBYTE(v9) = *(_BYTE *)(this + 879); /*0x428a40*/
  Power::FlagProcess(a2, v9); /*0x428a49*/
  LOBYTE(v10) = *(_BYTE *)(this + 880); /*0x428a4e*/
  v11 = Power::FlagProcess(a2, v10); /*0x428a57*/
  LOBYTE(v11) = *(_BYTE *)(this + 881); /*0x428a5c*/
  Power::FlagProcess(a2, v11); /*0x428a65*/
  LOBYTE(v12) = *(_BYTE *)(this + 882); /*0x428a6a*/
  Power::FlagProcess(a2, v12); /*0x428a73*/
  Power::TimerProcess(*(_DWORD *)(this + 664)); /*0x428a81*/
  Checksummer::Add_double((unsigned int *)a2, *(_DWORD *)(this + 680), *(_DWORD *)(this + 684)); /*0x428a96*/
  LOBYTE(v13) = *(_BYTE *)(this + 855); /*0x428a9b*/
  Power::FlagProcess(a2, v13); /*0x428aa4*/
  Power::TimerProcess(*(_DWORD *)(this + 688)); /*0x428ab2*/
  Power::TimerProcess(*(_DWORD *)(this + 692)); /*0x428ac0*/
  Power::TimerProcess(*(_DWORD *)(this + 696)); /*0x428ace*/
  Power::TimerProcess(*(_DWORD *)(this + 700)); /*0x428adc*/
  Power::TimerProcess(*(_DWORD *)(this + 704)); /*0x428aea*/
  Power::TimerProcess(*(_DWORD *)(this + 760)); /*0x428af8*/
  Power::TimerProcess(*(_DWORD *)(this + 764)); /*0x428b06*/
  Power::TimerProcess(*(_DWORD *)(this + 720)); /*0x428b14*/
  Power::TimerProcess(*(_DWORD *)(this + 724)); /*0x428b22*/
  Power::TimerProcess(*(_DWORD *)(this + 728)); /*0x428b30*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x428b3e*/
  Power::TimerProcess(*(_DWORD *)(this + 736)); /*0x428b4c*/
  Power::TimerProcess(*(_DWORD *)(this + 748)); /*0x428b5a*/
  LOBYTE(v14) = *(_BYTE *)(this + 859); /*0x428b5f*/
  return Power::FlagProcess(a2, v14); /*0x428b6d*/
}


// ==== 0x00428B80  AnimTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
AnimTypeClass *__thiscall AnimTypeClass::FindOrCreate(AbstractClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x428b9c*/
    return 0; /*0x428bff*/
  v2 = 0; /*0x428bad*/
  if ( *(int *)&stru_89E138.__pad_1600D[27] <= 0 ) /*0x428bb1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x378u); /*0x428bd6*/
    if ( v3 ) /*0x428be5*/
      return (AnimTypeClass *)AnimTypeClass::Construct(v3, Source); /*0x428bf1*/
    return 0; /*0x428be5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * v2) + 36), Source) ) /*0x428bca*/
  {
    if ( ++v2 >= *(int *)&stru_89E138.__pad_1600D[27] ) /*0x428bd4*/
      goto LABEL_6; /*0x428bd4*/
  }
  return *(AnimTypeClass **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * v2); /*0x428bef*/
}


// ==== 0x00428C10  AnimTypeClass::GetAnimData  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this->Next_e; /*0x428c10*/
  if ( result == a2 ) /*0x428c1c*/
    this->Next_e = 0; /*0x428c1e*/
  return result; /*0x428c28*/
}


// ==== 0x00428C30  AnimTypeClass::GetDamage  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::_vt39(char *this)
{
  int result; // eax
  const char *v3; // eax
  void *EntireFile; // eax
  void *v5; // eax
  int v6; // esi
  _DWORD v7[22]; // [esp+4h] [ebp-2D8h] BYREF
  char v8[12]; // [esp+5Ch] [ebp-280h] BYREF
  int v9; // [esp+68h] [ebp-274h]
  _DWORD v10[22]; // [esp+70h] [ebp-26Ch] BYREF
  char v11[12]; // [esp+C8h] [ebp-214h] BYREF
  int v12; // [esp+D4h] [ebp-208h]
  char Buffer[512]; // [esp+DCh] [ebp-200h] BYREF

  result = this->Image; /*0x428c39*/
  if ( !result && this->DemandLoad ) /*0x428c47*/
  {
    Debug::Log(); /*0x428c5e*/
    v3 = this + 504; /*0x428c69*/
    if ( !this->ImageFile ) /*0x428c63*/
      v3 = this + 36; /*0x428c76*/
    _makepath(Buffer, 0, 0, v3, Ext); /*0x428c8b*/
    if ( this->q22C ) /*0x428c90*/
    {
      _makepath(Buffer, 0, 0, this + 36, (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x428ccc*/
    }
    else if ( this->q237 ) /*0x428cd6*/
    {
      TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x428cf3*/
    }
    CCFileClass::Construct(v7, Buffer); /*0x428d04*/
    EntireFile = CCFileClass::ReadEntireFile(v7); /*0x428d0d*/
    this->Image = EntireFile; /*0x428d14*/
    if ( EntireFile ) /*0x428d1a*/
    {
      this->ImageAllocated = 1; /*0x428d1c*/
    }
    else
    {
      ObjectTypeClass::SetRTTI71(Buffer); /*0x428d2c*/
      CCFileClass::Construct(v10, Buffer); /*0x428d3d*/
      v5 = CCFileClass::ReadEntireFile(v10); /*0x428d46*/
      this->Image = v5; /*0x428d4d*/
      if ( v5 ) /*0x428d53*/
        this->ImageAllocated = 1; /*0x428d55*/
      v10[0] = &vt_CCFileClass; /*0x428d63*/
      v12 = 0; /*0x428d6b*/
      Vector::Clear((int)v11); /*0x428d76*/
      v10[0] = &off_7E1668; /*0x428d7f*/
      BufferIOFileClass::Dtor(v10); /*0x428d87*/
    }
    (*(void (__thiscall **)(char *, _DWORD))(this->Strength)(this, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x428d9c*/
    v6 = this->Image; /*0x428da2*/
    v7[0] = &vt_CCFileClass; /*0x428dac*/
    v9 = 0; /*0x428db4*/
    Vector::Clear((int)v8); /*0x428dbc*/
    v7[0] = &off_7E1668; /*0x428dc5*/
    BufferIOFileClass::Dtor(v7); /*0x428dcd*/
    return v6; /*0x428dd2*/
  }
  return result; /*0x428dd4*/
}


// ==== 0x00428DE0  AnimClass::FreeRenderBuffer  this=AnimClass  sig=csp ====
void __thiscall sub_428DE0(int this)
{
  if ( *(_BYTE *)(this + 862) && *(_DWORD *)(this + 164) ) /*0x428ded*/
  {
    if ( *(_BYTE *)(this + 863) ) /*0x428df7*/
    {
      Debug::Log(); /*0x428e0a*/
      __3_YAXPAX_Z(*(void **)(this + 164)); /*0x428e16*/
      *(_DWORD *)(this + 164) = 0; /*0x428e1e*/
      *(_BYTE *)(this + 168) = 0; /*0x428e28*/
    }
  }
}


// ==== 0x00428E40  ObjectTypeClass::Thunk_AnimTypeClass_sub_428E40  this=ObjectTypeClass  sig=csp ====
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E40()
{
  return -1; /*0x428e43*/
}


// ==== 0x00428E50  AnimTypeClass::Thunk_AnimTypeClass_sub_428E50  this=AnimTypeClass  sig=csp ====
int __cdecl AnimTypeClass::Thunk_AnimTypeClass_sub_428E50()
{
  return 5; /*0x428e55*/
}


// ==== 0x00428E60  AnimTypeClass::GetAuxField  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::_vt16(_DWORD *this)
{
  return this->MiddleFrameIndex; /*0x428e66*/
}


// ==== 0x00428E70  AnimTypeClass::GetObjectSize  this=AnimTypeClass  sig=csp ====
int AnimTypeClass::_vt12()
{
  return 888; /*0x428e75*/
}


// ==== 0x00428E80  AnimTypeClass::Stub  this=AnimTypeClass  sig=csp ====
char __stdcall AnimTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x428e82*/
}


// ==== 0x00428E90  AnimTypeClass::StubReturnFalse  this=AnimTypeClass  sig=csp ====
int __stdcall AnimTypeClass::_vt35(int a1)
{
  return 0; /*0x428e92*/
}


// ==== 0x00428EA0  AnimTypeClass::ddtor  this=AnimTypeClass  sig=csp ====
AnimTypeClass *__thiscall AnimTypeClass::ddtor(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &AnimTypeClass::`vftable'; /*0x428ead*/
  *(Block + 1) = &AnimTypeClass::`vftable'; /*0x428eb3*/
  *(Block + 2) = &AnimTypeClass::`vftable'; /*0x428eba*/
  *(Block + 3) = &vt_AnimTypeClass; /*0x428ec1*/
  v6 = Block; /*0x428ecf*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x428ed3*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x428eee*/
  {
    do /*0x428f06*/
    {
      ++v3; /*0x428ef6*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x428efa*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x428f06*/
  }
  v6 = Block; /*0x428f18*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0x8B4150] + 16))(&MEMORY[0x8B4150], &v6); /*0x428f1c*/
  if ( v4 != -1 && v4 < MEMORY[0x8B4160] && v4 < --MEMORY[0x8B4160] ) /*0x428f37*/
  {
    do /*0x428f4f*/
    {
      ++v4; /*0x428f3f*/
      *((_DWORD *)MEMORY[0x8B4154] + v4 - 1) = *((_DWORD *)MEMORY[0x8B4154] + v4); /*0x428f43*/
    }
    while ( v4 < MEMORY[0x8B4160] ); /*0x428f4f*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x428f53*/
  if ( (a2 & 1) != 0 ) /*0x428f5d*/
    OperatorDelete(Block); /*0x428f60*/
  return (AnimTypeClass *)Block; /*0x428f6a*/
}


// ==== 0x00428F70  globalHelper_028F70  this=-  sig=csp ====
AnimTypeClass *__fastcall globalHelper_028F70(AbstractClass *Source, int a2)
{
  int v4; // esi
  _DWORD *v5; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x428f8f*/
    return 0; /*0x428fec*/
  v4 = 0; /*0x428f9e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x428fa2*/
  {
LABEL_6:
    v5 = (_DWORD *)__2_YAPAXI_Z(0x378u); /*0x428fc3*/
    if ( v5 ) /*0x428fd2*/
      return (AnimTypeClass *)AnimTypeClass::Construct(v5, Source); /*0x428fdf*/
    return 0; /*0x428fd2*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x428fb9*/
  {
    if ( ++v4 >= *(_DWORD *)(a2 + 16) ) /*0x428fc1*/
      goto LABEL_6; /*0x428fc1*/
  }
  return *(AnimTypeClass **)(*(_DWORD *)(a2 + 4) + 4 * v4); /*0x428fdc*/
}


// ==== 0x00428FF0  sub_428FF0  this=-  sig=ida-proto ====
int sub_428FF0()
{
  unk_89A260 = 0; /*0x428ff2*/
  unk_89A264 = 0; /*0x428ff7*/
  unk_89A268 = 0; /*0x428ffc*/
  unk_89A26C = 0; /*0x429001*/
  return 0; /*0x429006*/
}


// ==== 0x00429010  sub_429010  this=-  sig=ida-proto ====
void sub_429010()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42901c*/
  unk_89A278 = Math::Sqrt(v0 + v0); /*0x42902e*/
}


// ==== 0x00429040  sub_429040  this=-  sig=ida-proto ====
void sub_429040()
{
  unk_89A2C8 = unk_89A278 / 60.0; /*0x42904c*/
}


// ==== 0x00429060  sub_429060  this=-  sig=ida-proto ====
void sub_429060()
{
  unk_89A2B0 = 1.0 / unk_89A2C8; /*0x42906c*/
}


// ==== 0x00429080  sub_429080  this=-  sig=ida-proto ====
void sub_429080()
{
  unk_89A2A8 = 0.0174532925199433 * 45.0; /*0x42908c*/
}


// ==== 0x004290A0  sub_4290A0  this=-  sig=ida-proto ====
void sub_4290A0()
{
  unk_89A280 = 0.0174532925199433 * 60.0; /*0x4290ac*/
}


// ==== 0x004290C0  sub_4290C0  this=-  sig=ida-proto ====
void sub_4290C0()
{
  unk_89A258 = 0.0174532925199433 * 90.0; /*0x4290cc*/
}


// ==== 0x004290E0  sub_4290E0  this=-  sig=ida-proto ====
__int64 sub_4290E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89A258 - unk_89A280); /*0x4290f2*/
  result = Math::RoundToInt(v0 * unk_89A278 * 0.5); /*0x429106*/
  unk_89A2D0 = result; /*0x42910b*/
  return result; /*0x429110*/
}


// ==== 0x00429120  sub_429120  this=-  sig=ida-proto ====
void sub_429120()
{
  unk_89A288 = Math::ArcTan((double)unk_89A2D0 * 0.00390625); /*0x429137*/
}


// ==== 0x00429150  sub_429150  this=-  sig=ida-proto ====
void sub_429150()
{
  unk_89A2A0 = Math::ArcTan((double)(2 * unk_89A2D0) / unk_89A278); /*0x429172*/
}


// ==== 0x00429180  sub_429180  this=-  sig=ida-proto ====
__int64 sub_429180()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89A2D0) + 0.5); /*0x42919b*/
  unk_89A2C4 = result; /*0x4291a0*/
  return result; /*0x4291a6*/
}


// ==== 0x004291B0  sub_4291B0  this=-  sig=ida-proto ====
int sub_4291B0()
{
  unk_89A270 = 0; /*0x4291b2*/
  unk_89A272 = 0; /*0x4291b8*/
  return 0; /*0x4291be*/
}


// ==== 0x004291C0  sub_4291C0  this=-  sig=ida-proto ====
int sub_4291C0()
{
  unk_89A290 = 0; /*0x4291c2*/
  unk_89A294 = 0; /*0x4291c7*/
  unk_89A298 = 0; /*0x4291cc*/
  return 0; /*0x4291d1*/
}


// ==== 0x004291E0  sub_4291E0  this=-  sig=ida-proto ====
int sub_4291E0()
{
  unk_89A2C0 = 0; /*0x4291e5*/
  unk_89A2B8 = 128; /*0x4291ef*/
  unk_89A2BC = 128; /*0x4291f4*/
  return 128; /*0x4291f9*/
}


// ==== 0x00429200  sub_429200  this=-  sig=ida-proto ====
void sub_429200()
{
  unk_89A29C.field_0 = (struct IUnknownVtbl *)&off_7E36D4; /*0x429200*/
}


// ==== 0x00429210  TiberianSunClassFactory::QueryInterface_Helper  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::QueryInterface_Helper(TiberianSunClassFactory *this)
{
  int v2; // [esp+Ch] [ebp+4h]
  const void *v3; // [esp+10h] [ebp+8h]
  _DWORD *v4; // [esp+14h] [ebp+Ch]

  if ( !v4 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(v3, &unk_7F7CA0, 0x10u) && memcmp(v3, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *v4 = v2; /*0x42925c*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x429261*/
  return 0; /*0x42921a*/
}


// ==== 0x00429270  TiberianSunClassFactory::QueryInterface_Dispatch  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::QueryInterface_Dispatch(TiberianSunClassFactory *this)
{
  _DWORD *v1; // eax
  int v3; // ebx
  int v4; // [esp+18h] [ebp+8h]
  const void *v5; // [esp+1Ch] [ebp+Ch]
  _DWORD *v6; // [esp+20h] [ebp+10h]

  v1 = v6; /*0x429270*/
  if ( !v6 ) /*0x42927a*/
    return -2147024809; /*0x429285*/
  *v6 = 0; /*0x42928c*/
  if ( v4 ) /*0x429294*/
    return -2147221232; /*0x42929f*/
  v3 = -2147467262; /*0x4292b4*/
  if ( !memcmp(v5, &unk_7E36C0, 0x10u) || !memcmp(v5, &IID_IUnknown, 0x10u) ) /*0x4292cb*/
  {
    if ( !&unk_89A29C ) /*0x4292d6*/
      return -2147024882; /*0x4292e1*/
    v3 = (*(int (__stdcall **)(IUnknown *, const void *, _DWORD *))unk_89A29C.field_0)(&unk_89A29C, v5, v6); /*0x4292f3*/
    if ( v3 < 0 ) /*0x4292f7*/
      __3_YAXPAX_Z(&unk_89A29C); /*0x4292fe*/
    v1 = v6; /*0x429306*/
  }
  if ( !memcmp(v5, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&MEMORY[0x87F7E8] ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v3 = ((int (__stdcall *)(MouseClass **, const void *, _DWORD *))MEMORY[0x87F7E8]->field_0)( /*0x429340*/
           &MEMORY[0x87F7E8],
           v5,
           v1);
    if ( v3 < 0 ) /*0x429344*/
      __3_YAXPAX_Z(&MEMORY[0x87F7E8]); /*0x42934b*/
  }
  return v3; /*0x42927c*/
}


// ==== 0x00429360  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429360(ApplicationClass *this)
{
  int result; // eax
  int v2; // [esp+10h] [ebp+4h]
  const void *v3; // [esp+14h] [ebp+8h]
  _DWORD *v4; // [esp+18h] [ebp+Ch]

  if ( !v4 ) /*0x429369*/
    return -2147467261; /*0x42936d*/
  if ( !memcmp(v3, &unk_7E36C0, 0x10u) || !memcmp(v3, &IID_IUnknown, 0x10u) ) /*0x42939a*/
  {
    *v4 = v2; /*0x4293cb*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x4293d0*/
    return 0; /*0x4293d5*/
  }
  else
  {
    result = 0; /*0x4293aa*/
    if ( !memcmp(v3, &unk_7EA6E8, 0x10u) ) /*0x4293ac*/
      *v4 = &MEMORY[0x87F7E8]; /*0x4293b2*/
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
int __thiscall sub_429400(ApplicationClass *this)
{
  int (__stdcall ***v2)(_DWORD, void *, int); // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (**v2)(v2, &unk_7E36C0, v3); /*0x429413*/
}


// ==== 0x00429420  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429420(ApplicationClass *this)
{
  BSTR *v2; // [esp+Ch] [ebp+8h]

  if ( !v2 ) /*0x429427*/
    return -2147467261; /*0x429429*/
  *v2 = SysAllocString(&psz); /*0x42943d*/
  return 0; /*0x42942e*/
}


// ==== 0x00429450  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429450(ApplicationClass *this)
{
  BSTR *v2; // [esp+Ch] [ebp+8h]

  if ( !v2 ) /*0x429457*/
    return -2147467261; /*0x429459*/
  *v2 = SysAllocString(aSun); /*0x42946d*/
  return 0; /*0x42945e*/
}


// ==== 0x00429480  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429480(ApplicationClass *this)
{
  int (__stdcall ***v2)(_DWORD, void *, int); // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (**v2)(v2, &unk_7E36C0, v3); /*0x429493*/
}


// ==== 0x004294A0  ApplicationClass::method_4294A0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4294A0(ApplicationClass *this)
{
  return 0; /*0x4294a2*/
}


// ==== 0x004294B0  ApplicationClass::method_4294B0  this=ApplicationClass  sig=csp ====
int __thiscall sub_4294B0(ApplicationClass *this)
{
  WCHAR WideCharStr[32]; // [esp+4h] [ebp-40h] BYREF
  BSTR *v3; // [esp+4Ch] [ebp+8h]

  if ( !v3 ) /*0x4294ba*/
    return -2147467261; /*0x4294bc*/
  MultiByteToWideChar(0, 1u, (LPCCH)MEMORY[0xA8B230]->fileName, -1, WideCharStr, 32); /*0x4294e2*/
  *v3 = SysAllocString(WideCharStr); /*0x4294f3*/
  return 0; /*0x4294c1*/
}


// ==== 0x00429500  ApplicationClass::method  this=ApplicationClass  sig=csp ====
int __thiscall sub_429500(ApplicationClass *this)
{
  int v2; // edi
  int *v3; // esi
  int *v4; // [esp+Ch] [ebp+8h]

  if ( !v4 ) /*0x429507*/
    return -2147467261; /*0x429509*/
  v2 = MEMORY[0xA8B230]->pauseTimer[0]; /*0x429519*/
  if ( MEMORY[0xA8B230]->elapsedTimer[1] != -1 ) /*0x42952e*/
  {
    v3 = &MEMORY[0xA8B230]->elapsedTimer[1]; /*0x42951f*/
    v2 += Timer::GetTicks() - *v3; /*0x42953a*/
  }
  *v4 = v2; /*0x42953c*/
  return 0; /*0x42950e*/
}


// ==== 0x00429550  ApplicationClass::COMStub  this=ApplicationClass  sig=csp ====
int __thiscall COMStub_429550(ApplicationClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  return SwizzleManagerClass::Process((int)&MEMORY[0xB077F8].__pad_14B0[13416], &IID_ISwizzle, v2); /*0x429564*/
}


// ==== 0x00429570  sub_429570  this=-  sig=ida-proto ====
int sub_429570()
{
  unk_89C268 = 0; /*0x429572*/
  unk_89C26C = 0; /*0x429577*/
  unk_89C270 = 0; /*0x42957c*/
  unk_89C274 = 0; /*0x429581*/
  return 0; /*0x429586*/
}


// ==== 0x00429590  sub_429590  this=-  sig=ida-proto ====
void sub_429590()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42959c*/
  unk_89C280 = Math::Sqrt(v0 + v0); /*0x4295ae*/
}


// ==== 0x004295C0  sub_4295C0  this=-  sig=ida-proto ====
void sub_4295C0()
{
  unk_89C2D0 = unk_89C280 / 60.0; /*0x4295cc*/
}


// ==== 0x004295E0  sub_4295E0  this=-  sig=ida-proto ====
void sub_4295E0()
{
  unk_89C2B8 = 1.0 / unk_89C2D0; /*0x4295ec*/
}


// ==== 0x00429600  sub_429600  this=-  sig=ida-proto ====
void sub_429600()
{
  unk_89C2B0 = 0.0174532925199433 * 45.0; /*0x42960c*/
}


// ==== 0x00429620  sub_429620  this=-  sig=ida-proto ====
void sub_429620()
{
  unk_89C288 = 0.0174532925199433 * 60.0; /*0x42962c*/
}


// ==== 0x00429640  sub_429640  this=-  sig=ida-proto ====
void sub_429640()
{
  unk_89A2F8 = 0.0174532925199433 * 90.0; /*0x42964c*/
}


// ==== 0x00429660  sub_429660  this=-  sig=ida-proto ====
__int64 sub_429660()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89A2F8 - unk_89C288); /*0x429672*/
  result = Math::RoundToInt(v0 * unk_89C280 * 0.5); /*0x429686*/
  unk_89C2D8 = result; /*0x42968b*/
  return result; /*0x429690*/
}


// ==== 0x004296A0  sub_4296A0  this=-  sig=ida-proto ====
void sub_4296A0()
{
  unk_89C290 = Math::ArcTan((double)unk_89C2D8 * 0.00390625); /*0x4296b7*/
}


// ==== 0x004296D0  sub_4296D0  this=-  sig=ida-proto ====
void sub_4296D0()
{
  unk_89C2A8 = Math::ArcTan((double)(2 * unk_89C2D8) / unk_89C280); /*0x4296f2*/
}


// ==== 0x00429700  sub_429700  this=-  sig=ida-proto ====
__int64 sub_429700()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C2D8) + 0.5); /*0x42971b*/
  unk_89C2CC = result; /*0x429720*/
  return result; /*0x429726*/
}


// ==== 0x00429730  sub_429730  this=-  sig=ida-proto ====
int sub_429730()
{
  word_89C278 = 0; /*0x429732*/
  return 0; /*0x42973e*/
}


// ==== 0x00429740  sub_429740  this=-  sig=ida-proto ====
int sub_429740()
{
  unk_89C298 = 0; /*0x429742*/
  unk_89C29C = 0; /*0x429747*/
  unk_89C2A0 = 0; /*0x42974c*/
  return 0; /*0x429751*/
}


// ==== 0x00429760  sub_429760  this=-  sig=ida-proto ====
int sub_429760()
{
  unk_89C2C8 = 0; /*0x429765*/
  unk_89C2C0 = 128; /*0x42976f*/
  unk_89C2C4 = 128; /*0x429774*/
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
        v9 = *((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v11) + 139); /*0x4297b7*/
        if ( v9 == -1 ) /*0x4297c1*/
          v4 = 0; /*0x4297db*/
        else
          v4 = *(_DWORD *)(*((_DWORD *)MEMORY[0x8B413C] + v9) + 40); /*0x4297cc*/
      }
      else
      {
        LOWORD(v12) = v4 + LOWORD(MEMORY[0x89F688][v8]); /*0x4297f9*/
        HIWORD(v12) = HIWORD(v11) + HIWORD(MEMORY[0x89F688][v8]); /*0x4297fe*/
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
double __thiscall ComputeMovementWeight(int this, int *a1, _DWORD *a2, DynamicVectorClass_uint *aP3, int a5, int a6)
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

  v6 = a2; /*0x429839*/
  v7 = *a2; /*0x429843*/
  v8 = a5 == 2; /*0x429845*/
  v23 = this; /*0x429850*/
  v28 = flt_81870C[a5]; /*0x429854*/
  v25 = *a1; /*0x429858*/
  if ( v8 ) /*0x42985c*/
  {
    if ( (_BYTE)aP3 ) /*0x429868*/
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
        v11 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v9 + 904), (IUnknown *)&v26) >> 12) + 1) >> 1) & 7; /*0x4298dc*/
      }
      v12 = (_WORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v9 + 440))(v9, v27); /*0x4298e8*/
      v13 = v11 & 7; /*0x4298f1*/
      LOWORD(v22) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v13 + 160] + *v12; /*0x42990b*/
      HIWORD(v22) = v12[1] + *(_WORD *)&stru_89E138.__pad_14B0[4 * v13 + 162]; /*0x429919*/
      v24 = v22; /*0x429927*/
      v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v24); /*0x429930*/
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
    v6 = a2; /*0x4299a6*/
  }
  v16 = *(_DWORD *)(v7 + 320); /*0x4299aa*/
  if ( (v16 & 0x40000) != 0 ) /*0x4299b6*/
    v28 = v28 * 4.0; /*0x4299c2*/
  if ( !(_BYTE)aP3 || !*(_BYTE *)(this + 1) ) /*0x4299d2*/
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


// ==== 0x00429A90  BuildingClass::UpdatePowerAnimation  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall BuildingClass::UpdatePowerAnimation(
        int this,
        IUnknown *aP1,
        IUnknown *aP2,
        int a4,
        int a5,
        int a6,
        DynamicVectorClass_uint *aP6)
{
  __int16 *v7; // edi
  IUnknown *v8; // ebp
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
  int v49; // edi
  DynamicVectorClass_uint *v50; // ecx
  int v51; // ebx
  int *v52; // edi
  signed int v53; // ecx
  __int64 v54; // rax
  int v55; // ebx
  _DWORD *v56; // edi
  unsigned int v57; // ecx
  unsigned int v58; // edx
  int v59; // ebp
  int v60; // ebx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  unsigned int v63; // edx
  int v64; // ebp
  int v65; // ebx
  unsigned int v66; // ecx
  int v67; // ecx
  int v68; // eax
  __int64 v69; // rax
  int ***v70; // ecx
  int *v71; // edx
  int v72; // edi
  int v73; // ebp
  int v74; // ebx
  int v75; // ecx
  int v76; // eax
  int v77; // edi
  int v78; // ebp
  bool v79; // cc
  int *v80; // ecx
  int v81; // eax
  int v82; // ebx
  int ***v83; // edi
  int v84; // edi
  int v85; // edx
  int v86; // eax
  int v87; // edi
  int v88; // ebp
  int *v89; // eax
  int v90; // ebx
  int *v91; // edi
  int v93; // [esp-2h] [ebp-60h]
  char v94; // [esp+14h] [ebp-4Ah]
  char v95; // [esp+15h] [ebp-49h]
  int ***a1; // [esp+16h] [ebp-48h]
  int v97; // [esp+1Ah] [ebp-44h]
  int v98; // [esp+1Eh] [ebp-40h]
  int *v99; // [esp+22h] [ebp-3Ch]
  int *v100; // [esp+26h] [ebp-38h]
  _DWORD *v101; // [esp+26h] [ebp-38h]
  int v102; // [esp+2Ah] [ebp-34h]
  int *a2; // [esp+2Eh] [ebp-30h]
  int *a2a; // [esp+2Eh] [ebp-30h]
  int v105; // [esp+32h] [ebp-2Ch]
  __int16 *v106; // [esp+32h] [ebp-2Ch]
  float aP4; // [esp+36h] [ebp-28h]
  DynamicVectorClass_uint *aP4a; // [esp+36h] [ebp-28h]
  int *v109; // [esp+3Ah] [ebp-24h]
  int v110; // [esp+3Eh] [ebp-20h]
  int v111; // [esp+42h] [ebp-1Ch]
  float v112; // [esp+46h] [ebp-18h]
  float v113; // [esp+4Ah] [ebp-14h]
  int v114; // [esp+4Eh] [ebp-10h]
  int v115; // [esp+4Eh] [ebp-10h]
  int ***v116; // [esp+4Eh] [ebp-10h]

  v7 = (__int16 *)aP2; /*0x429a97*/
  v8 = aP1; /*0x429a9b*/
  v102 = 0; /*0x429ab6*/
  v109 = (int *)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * (SLOWORD(aP2->field_0) + (SHIWORD(aP2->field_0) << 9))); /*0x429aca*/
  v10 = *v109; /*0x429ace*/
  a2 = (int *)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * (SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9))); /*0x429ad3*/
  v105 = *v109; /*0x429ad7*/
  aP1 = (IUnknown *)*a2; /*0x429adf*/
  if ( !aP1 || !v10 ) /*0x429aeb*/
    return 0; /*0x429aeb*/
  v11 = a4; /*0x429af1*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 44))(a4) == 2 || (*(_DWORD *)(v105 + 320) & 0x100) == 0 ) /*0x429b0e*/
    v12 = *(char *)(v105 + 283); /*0x429b1c*/
  else
    v12 = *(char *)(v105 + 283) + 4; /*0x429b17*/
  *(_DWORD *)(this + 52) = v12; /*0x429b23*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 || !*(_BYTE *)(v11 + 140) ) /*0x429b32*/
    v13 = SHIBYTE(aP1->field_118); /*0x429b50*/
  else
    v13 = SHIBYTE(aP1->field_118) + 4; /*0x429b47*/
  *(_DWORD *)(this + 48) = v13; /*0x429b57*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11) + 3220) ) /*0x429b64*/
  {
    if ( (aP1->field_140 & 0x100) != 0 ) /*0x429b7b*/
    {
      v14 = *(_DWORD *)(this + 48); /*0x429b97*/
      v15 = *(_DWORD *)(v11 + 164) / unk_89C2D8 - v14; /*0x429ba3*/
      if ( (int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) > 2 ) /*0x429bab*/
        *(_DWORD *)(this + 48) = v14 + 4; /*0x429bb0*/
    }
  }
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x429bb7*/
  v17 = *(_DWORD *)(this + 64); /*0x429bc3*/
  *(_DWORD *)(this + 44) = *(_DWORD *)(v16 + 1660); /*0x429bc6*/
  *(_DWORD *)(this + 108) = 0; /*0x429bcd*/
  *(_DWORD *)(this + 112) = v8->field_0; /*0x429bda*/
  v111 = v17; /*0x429be2*/
  a1 = (int ***)BuildingClass::AddRectToDrawList((int *)this, 0, a2, v7, 0); /*0x429bef*/
  if ( LOWORD(v8->field_0) == *v7 && HIWORD(v8->field_0) == v7[1] && *(_DWORD *)(this + 48) == *(_DWORD *)(this + 52) ) /*0x429c0a*/
    return 0; /*0x429c0a*/
  if ( *(_DWORD *)(this + 60) ) /*0x429c10*/
    BuildingClass::UpdatePowerAnim((_BYTE *)this, v11); /*0x429c1a*/
  v18 = SLOWORD(aP1->field_24) + unk_89C2DC * SHIWORD(aP1->field_24); /*0x429c39*/
  if ( *(_DWORD *)(this + 48) <= SHIBYTE(aP1->field_118) ) /*0x429c40*/
  {
    *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v18) = *(_DWORD *)(this + 40); /*0x429c5d*/
    *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * v18) = 0; /*0x429c63*/
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v18) = *(_DWORD *)(this + 40); /*0x429c48*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * v18) = 0; /*0x429c4e*/
  }
  v94 = 0; /*0x429c6e*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11) + 3220) ) /*0x429c79*/
  {
    v94 = 1; /*0x429c87*/
    v19 = 0; /*0x429c8c*/
    v20 = (float *)dword_7E3774; /*0x429c8e*/
    do /*0x429d25*/
    {
      v21 = (int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v11 + 904), (IUnknown *)&aP1) >> 12) + 1) >> 1) /*0x429cb0*/
                 & 7)
                - v19);
      v22 = (HIDWORD(v21) ^ v21) - HIDWORD(v21); /*0x429cb3*/
      if ( v22 > 2 && v22 < 6 && v20 != flt_7E3794 ) /*0x429cc5*/
      {
        v23 = a2[*(_DWORD *)v20]; /*0x429cd0*/
        v24 = *(__int16 *)(v23 + 36) + unk_89C2DC * *(__int16 *)(v23 + 38); /*0x429ce9*/
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
    || (v95 = 1, !*(_BYTE *)(*(_DWORD *)(v11 + 1732) + 3596)) )
  {
    v95 = 0; /*0x429d4c*/
  }
  if ( a6 < 0 ) /*0x429d57*/
    a6 = 65527; /*0x429d59*/
  if ( !a1 ) /*0x429d67*/
  {
LABEL_156:
    if ( *(_DWORD *)(this + 60) ) /*0x42a442*/
      BuildingClass::UpdatePowerAnim((_BYTE *)this, v11); /*0x42a44c*/
    return 0; /*0x42a454*/
  }
  do /*0x42a3d8*/
  {
    if ( v102 >= a6 ) /*0x429d79*/
      break; /*0x429d79*/
    v25 = **a1; /*0x429d89*/
    v99 = v25; /*0x429d8d*/
    if ( v25 == v109 && (*a1)[1] == *(int **)(this + 52) ) /*0x429d9b*/
      break; /*0x429d9b*/
    v98 = 0; /*0x429da3*/
    v97 = 0; /*0x429daa*/
    v110 = *(__int16 *)(*v25 + 36) + unk_89C2DC * *(__int16 *)(*v25 + 38); /*0x429dbe*/
    do /*0x42a1ad*/
    {
      if ( v97 == 8 ) /*0x429dc9*/
      {
        v26 = *(__int16 *)(*v99 + 278); /*0x429dd1*/
        if ( v26 == -1 ) /*0x429ddb*/
        {
          v27 = (int *)&unk_89C2E0; /*0x429e04*/
        }
        else
        {
          aP1 = *(IUnknown **)(*(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_15FF8[12] + 4 * v26) + 40); /*0x429de9*/
          v27 = (int *)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * ((__int16)aP1 + (SHIWORD(aP1) << 9))); /*0x429dff*/
        }
      }
      else
      {
        v27 = &v99[dword_7E3774[v97]]; /*0x429e16*/
      }
      v28 = *v27; /*0x429e19*/
      v100 = v27; /*0x429e1b*/
      if ( !*v27 ) /*0x429e21*/
        goto LABEL_107; /*0x429e21*/
      v106 = (__int16 *)(v28 + 36); /*0x429e31*/
      if ( v97 == 8 ) /*0x429e35*/
      {
        v29 = unk_89C2DC * *(__int16 *)(v28 + 38); /*0x429e48*/
        v30 = *(__int16 *)(v28 + 36); /*0x429e4f*/
      }
      else
      {
        v29 = dword_89A304[v97]; /*0x429e37*/
        v30 = v110; /*0x429e3e*/
      }
      v31 = v30 + v29; /*0x429e52*/
      if ( (*(_DWORD *)(v28 + 320) & 0x100) == 0 /*0x429e78*/
        || (v32 = *(char *)(v28 + 283), v33 = *(_DWORD *)(this + 48), LOBYTE(aP1) = 0, (int)abs32(v33 - v32) <= 1) )
      {
        LOBYTE(aP1) = 1; /*0x429e7a*/
      }
      v34 = *(__int16 *)(*(_DWORD *)&stru_87C374.__pad_14B0[8244] /*0x429e9a*/
                       + 10 * CellToTileIndexMap((int *)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v28 + 36)));
      v35 = *(_DWORD *)(this + 40); /*0x429e9d*/
      v114 = v34; /*0x429ea0*/
      if ( *(_DWORD *)(v111 + 4 * v34) != v35 ) /*0x429ea7*/
      {
        if ( !(_BYTE)aP1 ) /*0x429eaf*/
          goto LABEL_62; /*0x429eaf*/
        if ( !*(_BYTE *)(v28 + 290) && (_BYTE)aP6 ) /*0x429ec1*/
          goto LABEL_107; /*0x429ec1*/
      }
      if ( !(_BYTE)aP1 ) /*0x429ecd*/
      {
LABEL_62:
        v36 = 4 * v31; /*0x429f04*/
        a2a = (int *)(4 * v31); /*0x429f0e*/
        if ( *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v31) == v35 ) /*0x429f15*/
        {
          v35 = *(_DWORD *)(this + 32); /*0x429f1b*/
          v43 = *((float *)a1 + 1) + 1.009; /*0x429f21*/
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
      a2a = (int *)(4 * v31); /*0x429ed9*/
      if ( *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v31) == v35 ) /*0x429ee0*/
      {
        v35 = *(_DWORD *)(this + 36); /*0x429ee6*/
        v37 = *((float *)a1 + 1) + 1.009; /*0x429eec*/
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
      v51 = (*(int (__thiscall **)(int, int, int, _DWORD, int, int))(*(_DWORD *)a4 + 428))( /*0x429f5a*/
              a4,
              v28,
              v97,
              *(_DWORD *)(this + 48),
              *v99,
              v35);
      if ( v94 && v51 < 7 ) /*0x429f67*/
        v51 = 0; /*0x429f69*/
      if ( v97 == 8 ) /*0x429f70*/
      {
        v53 = abs32(*(__int16 *)(*v99 + 38) - v106[1]); /*0x429fc2*/
        v54 = *(__int16 *)(*v99 + 36) - *v106; /*0x429fcd*/
        aP4a = (DynamicVectorClass_uint *)((HIDWORD(v54) ^ v54) - HIDWORD(v54)); /*0x429fd4*/
        if ( (int)aP4a <= v53 ) /*0x429fd8*/
          aP4a = (DynamicVectorClass_uint *)v53; /*0x429fda*/
        v52 = v100; /*0x429fe2*/
        aP4 = (float)(int)aP4a; /*0x429fe6*/
      }
      else
      {
        v93 = v49; /*0x429f7c*/
        v52 = v100; /*0x429f7d*/
        LOBYTE(v50) = (_BYTE)aP1 == 0; /*0x429f81*/
        aP4 = ComputeMovementWeight(this, v99, v100, v50, v51, v93) * *(float *)(this + 4) + flt_81872C[v97]; /*0x429f9d*/
      }
      if ( v51 >= 7 ) /*0x429fed*/
      {
        if ( v52 == v109 && !v95 ) /*0x42a189*/
        {
          v69 = *(_DWORD *)(this + 48) - *(_DWORD *)(this + 52); /*0x42a193*/
          if ( (int)((HIDWORD(v69) ^ v69) - HIDWORD(v69)) <= 1 ) /*0x42a19b*/
            goto LABEL_148; /*0x42a19b*/
        }
      }
      else
      {
        if ( (_BYTE)aP1 ) /*0x429ff9*/
        {
          if ( *(_DWORD *)(*(_DWORD *)(this + 24) + v36) == *(_DWORD *)(this + 40) ) /*0x42a006*/
            goto LABEL_107; /*0x42a006*/
        }
        else if ( *(_DWORD *)(*(_DWORD *)(this + 28) + v36) == *(_DWORD *)(this + 40) ) /*0x42a018*/
        {
          goto LABEL_107; /*0x42a018*/
        }
        v55 = BuildingClass::AddRectToDrawList( /*0x42a035*/
                (int *)this,
                a1,
                v52,
                (__int16 *)aP2,
                (DynamicVectorClass_uint *)LODWORD(aP4));
        v101 = (_DWORD *)v55; /*0x42a03d*/
        if ( v98 ) /*0x42a041*/
        {
          v56 = *(_DWORD **)(this + 20); /*0x42a052*/
          v57 = *v56 + 1; /*0x42a05c*/
          if ( *v56 == -1 ) /*0x42a05f*/
          {
            v113 = *(float *)(v55 + 8); /*0x42a0d0*/
            v63 = v57 >> 1; /*0x42a0d7*/
            if ( v57 < v56[1] ) /*0x42a0db*/
            {
              for ( ; v57 > 1; v63 >>= 1 ) /*0x42a0e0*/
              {
                v64 = v56[2]; /*0x42a0e2*/
                v65 = *(_DWORD *)(v64 + 4 * v63); /*0x42a0e5*/
                if ( *(float *)(v65 + 8) <= (double)v113 ) /*0x42a0f5*/
                  break; /*0x42a0f5*/
                *(_DWORD *)(v64 + 4 * v57) = v65; /*0x42a0f7*/
                v57 = v63; /*0x42a0fb*/
              }
              *(_DWORD *)(v56[2] + 4 * v57) = v101; /*0x42a10b*/
              v66 = v56[3]; /*0x42a110*/
              ++*v56; /*0x42a116*/
              if ( (unsigned int)v101 > v66 ) /*0x42a118*/
                v56[3] = v101; /*0x42a11a*/
              if ( (unsigned int)v101 < v56[4] ) /*0x42a120*/
                v56[4] = v101; /*0x42a122*/
            }
          }
          else
          {
            v58 = v57 >> 1; /*0x42a065*/
            v112 = *(float *)(v98 + 8); /*0x42a06a*/
            if ( v57 < v56[1] ) /*0x42a073*/
            {
              if ( v57 <= 1 ) /*0x42a078*/
              {
                v61 = v98; /*0x42a0a6*/
              }
              else
              {
                do /*0x42a09a*/
                {
                  v59 = v56[2]; /*0x42a07a*/
                  v60 = *(_DWORD *)(v59 + 4 * v58); /*0x42a07d*/
                  if ( *(float *)(v60 + 8) <= (double)v112 ) /*0x42a08d*/
                    break; /*0x42a08d*/
                  *(_DWORD *)(v59 + 4 * v57) = v60; /*0x42a08f*/
                  v57 = v58; /*0x42a093*/
                  v58 >>= 1; /*0x42a095*/
                }
                while ( v57 > 1 ); /*0x42a09a*/
                v61 = v98; /*0x42a09c*/
                v55 = (int)v101; /*0x42a0a0*/
              }
              *(_DWORD *)(v56[2] + 4 * v57) = v61; /*0x42a0ad*/
              v62 = v56[3]; /*0x42a0b2*/
              ++*v56; /*0x42a0b8*/
              if ( v61 > v62 ) /*0x42a0ba*/
                v56[3] = v61; /*0x42a0bc*/
              if ( v61 < v56[4] ) /*0x42a0c2*/
                v56[4] = v61; /*0x42a0c4*/
            }
            v98 = v55; /*0x42a0c7*/
          }
        }
        else
        {
          v98 = v55; /*0x42a043*/
        }
        if ( (_BYTE)aP1 ) /*0x42a12b*/
        {
          *(int *)((char *)a2a + *(_DWORD *)(this + 24)) = *(_DWORD *)(this + 40); /*0x42a137*/
          v67 = *(_DWORD *)(this + 36); /*0x42a13a*/
        }
        else
        {
          *(int *)((char *)a2a + *(_DWORD *)(this + 28)) = *(_DWORD *)(this + 40); /*0x42a149*/
          v67 = *(_DWORD *)(this + 32); /*0x42a14c*/
        }
        *(int *)((char *)a2a + v67) = v101[1]; /*0x42a156*/
        v68 = *(_DWORD *)(this + 108); /*0x42a159*/
        if ( v114 == *(unsigned __int16 *)(this + 2 * v68 + 190) ) /*0x42a16c*/
        {
          *(_DWORD *)(this + 108) = v68 + 1; /*0x42a173*/
          *(_DWORD *)(this + 112) = *(_DWORD *)v106; /*0x42a178*/
        }
      }
LABEL_107:
      ++v97; /*0x42a1a1*/
    }
    while ( v97 <= 8 ); /*0x42a1ad*/
    v70 = (int ***)v98; /*0x42a1b3*/
    if ( !v98 ) /*0x42a1b9*/
    {
      v80 = *(int **)(this + 20); /*0x42a2bb*/
      if ( !*v80 ) /*0x42a2be*/
      {
        a1 = 0; /*0x42a2c4*/
        goto LABEL_147; /*0x42a2c8*/
      }
      v81 = v80[2]; /*0x42a2cd*/
      v82 = 1; /*0x42a2d0*/
      v83 = *(int ****)(v81 + 4); /*0x42a2d8*/
      *(_DWORD *)(v81 + 4) = *(_DWORD *)(v81 + 4 * *v80); /*0x42a2db*/
      v116 = v83; /*0x42a2e3*/
      *(_DWORD *)(v80[2] + 4 * *v80) = 0; /*0x42a2e7*/
      v84 = *v80 - 1; /*0x42a2f1*/
      *v80 = v84; /*0x42a2f3*/
      if ( v84 < 2 /*0x42a315*/
        || (v85 = 2, *(float *)(*(_DWORD *)(v80[2] + 4) + 8) <= (double)*(float *)(*(_DWORD *)(v80[2] + 8) + 8)) )
      {
        v85 = 1; /*0x42a317*/
      }
      if ( v84 < 3 || *(float *)(*(_DWORD *)(v80[2] + 4 * v85) + 8) <= (double)*(float *)(*(_DWORD *)(v80[2] + 12) + 8) ) /*0x42a337*/
      {
        if ( v85 == 1 ) /*0x42a343*/
        {
LABEL_143:
          v70 = v116; /*0x42a3b1*/
LABEL_144:
          a1 = v70; /*0x42a3b5*/
          goto LABEL_145; /*0x42a3b5*/
        }
      }
      else
      {
        v85 = 3; /*0x42a339*/
      }
      do /*0x42a3af*/
      {
        v86 = v80[2]; /*0x42a345*/
        v87 = *(_DWORD *)(v86 + 4 * v82); /*0x42a34b*/
        *(_DWORD *)(v86 + 4 * v82) = *(_DWORD *)(v86 + 4 * v85); /*0x42a34e*/
        v82 = v85; /*0x42a354*/
        *(_DWORD *)(v80[2] + 4 * v85) = v87; /*0x42a356*/
        v88 = *v80; /*0x42a359*/
        v79 = 2 * v85 <= *v80; /*0x42a362*/
        aP1 = (IUnknown *)(2 * v85 + 1); /*0x42a364*/
        if ( v79 /*0x42a383*/
          && *(float *)(*(_DWORD *)(v80[2] + 4 * v85) + 8) > (double)*(float *)(*(_DWORD *)(v80[2] + 8 * v85) + 8) )
        {
          v85 *= 2; /*0x42a385*/
        }
        if ( (int)aP1 <= v88 /*0x42a3a7*/
          && *(float *)(*(_DWORD *)(v80[2] + 4 * v85) + 8) > (double)*(float *)(*(_DWORD *)(v80[2] + 4 * (_DWORD)aP1) + 8) )
        {
          v85 = (int)aP1; /*0x42a3a9*/
        }
      }
      while ( v85 != v82 ); /*0x42a3af*/
      goto LABEL_143; /*0x42a3af*/
    }
    v71 = *(int **)(this + 20); /*0x42a1bf*/
    if ( !*v71 ) /*0x42a1c2*/
      goto LABEL_144; /*0x42a1c2*/
    v72 = v71[2]; /*0x42a1cb*/
    v73 = *(_DWORD *)(v72 + 4); /*0x42a1d1*/
    v115 = v73; /*0x42a1d9*/
    if ( *(float *)(v73 + 8) > (double)*(float *)(v98 + 8) ) /*0x42a1e2*/
      goto LABEL_144; /*0x42a1e2*/
    *(_DWORD *)(v72 + 4) = v98; /*0x42a1e8*/
    v74 = 1; /*0x42a1f0*/
    if ( *v71 < 2 /*0x42a212*/
      || (v75 = 2, *(float *)(*(_DWORD *)(v71[2] + 4) + 8) <= (double)*(float *)(*(_DWORD *)(v71[2] + 8) + 8)) )
    {
      v75 = 1; /*0x42a214*/
    }
    if ( *v71 < 3 || *(float *)(*(_DWORD *)(v71[2] + 4 * v75) + 8) <= (double)*(float *)(*(_DWORD *)(v71[2] + 12) + 8) ) /*0x42a234*/
    {
      if ( v75 != 1 ) /*0x42a240*/
        goto LABEL_118; /*0x42a240*/
    }
    else
    {
      v75 = 3; /*0x42a236*/
      do /*0x42a2ac*/
      {
LABEL_118:
        v76 = v71[2]; /*0x42a242*/
        v77 = *(_DWORD *)(v76 + 4 * v74); /*0x42a248*/
        *(_DWORD *)(v76 + 4 * v74) = *(_DWORD *)(v76 + 4 * v75); /*0x42a24b*/
        v74 = v75; /*0x42a251*/
        *(_DWORD *)(v71[2] + 4 * v75) = v77; /*0x42a253*/
        v78 = *v71; /*0x42a256*/
        v79 = 2 * v75 <= *v71; /*0x42a25f*/
        aP1 = (IUnknown *)(2 * v75 + 1); /*0x42a261*/
        if ( v79 /*0x42a280*/
          && *(float *)(*(_DWORD *)(v71[2] + 4 * v75) + 8) > (double)*(float *)(*(_DWORD *)(v71[2] + 8 * v75) + 8) )
        {
          v75 *= 2; /*0x42a282*/
        }
        if ( (int)aP1 <= v78 /*0x42a2a4*/
          && *(float *)(*(_DWORD *)(v71[2] + 4 * v75) + 8) > (double)*(float *)(*(_DWORD *)(v71[2] + 4 * (_DWORD)aP1) + 8) )
        {
          v75 = (int)aP1; /*0x42a2a6*/
        }
      }
      while ( v75 != v74 ); /*0x42a2ac*/
      v73 = v115; /*0x42a2ae*/
    }
    a1 = (int ***)v73; /*0x42a2b2*/
LABEL_145:
    if ( a1 ) /*0x42a3bf*/
      *(_DWORD *)(this + 48) = (*a1)[1]; /*0x42a3c6*/
LABEL_147:
    ++v102; /*0x42a3c9*/
  }
  while ( a1 ); /*0x42a3d8*/
LABEL_148:
  if ( v102 == 10000 || !a1 || v102 == a6 || (int)a1[3] < 2 ) /*0x42a3fc*/
  {
    v11 = a4; /*0x42a43e*/
    goto LABEL_156; /*0x42a43e*/
  }
  v89 = globalHelper_02AA90((int)a1, (DynamicVectorClass_uint *)a5); /*0x42a406*/
  v90 = a4; /*0x42a40b*/
  v91 = v89; /*0x42a40f*/
  ParsePathDirections((void *)this, (int)v89, (_DWORD *)a4); /*0x42a415*/
  SimplifyPathFilter((void *)this, v91, v90); /*0x42a41e*/
  if ( *(_DWORD *)(this + 60) ) /*0x42a423*/
    BuildingClass::UpdatePowerAnim((_BYTE *)this, v90); /*0x42a42d*/
  return (int)v91; /*0x42a434*/
}


// ==== 0x0042A460  BuildingClass::AddRectToDrawList  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall BuildingClass::AddRectToDrawList(
        int *this,
        int ***a1,
        int *a2,
        __int16 *a3,
        DynamicVectorClass_uint *aP4)
{
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int **v9; // edi
  int v10; // eax
  int *v11; // edx
  int v12; // ecx
  int v13; // ebp
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rax

  v5 = this->Items; /*0x42a460*/
  v6 = v5 + 16 * (*(_DWORD *)(v5 + 0x100000))++; /*0x42a476*/
  v7 = this->IsInitialized; /*0x42a47f*/
  v8 = *(_DWORD *)(v7 + 1572864); /*0x42a482*/
  *(_DWORD *)(v7 + 1572864) = v8 + 1; /*0x42a48c*/
  v9 = (int **)(v7 + 12 * v8); /*0x42a492*/
  *v9 = a2; /*0x42a49b*/
  if ( a1 ) /*0x42a49d*/
  {
    v9[2] = (int *)*a1; /*0x42a4a1*/
    v10 = *a2; /*0x42a4a6*/
    v11 = (int *)*(char *)(*a2 + 283); /*0x42a4aa*/
    v12 = ***a1; /*0x42a4b1*/
    v9[1] = v11; /*0x42a4b3*/
    if ( (*(_DWORD *)(v10 + 320) & 0x100) == 0 ) /*0x42a4c0*/
      goto LABEL_12; /*0x42a4c0*/
    v13 = *(_DWORD *)(v12 + 320) & 0x100; /*0x42a4c8*/
    if ( v13 ) /*0x42a4d2*/
    {
      if ( (*a1)[1] == (int *)(*(char *)(v12 + 283) + 4) ) /*0x42a4e3*/
      {
        v9[1] = v11 + 1; /*0x42a4e8*/
        goto LABEL_12; /*0x42a4eb*/
      }
      v13 = *(_DWORD *)(v12 + 320) & 0x100; /*0x42a4ed*/
    }
    if ( v13 ) /*0x42a4f3*/
      goto LABEL_12; /*0x42a4f3*/
    v14 = *(char *)(v10 + 283) - (int)(*a1)[1] + 3; /*0x42a504*/
    if ( (int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) > 1 ) /*0x42a50c*/
      goto LABEL_12; /*0x42a50c*/
    v15 = (int)(v9[1] + 1); /*0x42a511*/
  }
  else
  {
    v9[2] = 0; /*0x42a516*/
    v15 = this->IsInitialized; /*0x42a51d*/
  }
  v9[1] = (int *)v15; /*0x42a520*/
LABEL_12:
  *(_DWORD *)v6 = v9; /*0x42a523*/
  if ( a1 ) /*0x42a527*/
  {
    *(float *)(v6 + 4) = *(float *)&aP4 + *((float *)a1 + 1); /*0x42a530*/
    *(_DWORD *)(v6 + 12) = (char *)a1[3] + 1; /*0x42a537*/
  }
  else
  {
    *(_DWORD *)(v6 + 4) = 0; /*0x42a53c*/
    *(_DWORD *)(v6 + 12) = 1; /*0x42a543*/
  }
  v16 = abs32(*(__int16 *)(*a2 + 36) - *a3); /*0x42a56c*/
  v17 = *(__int16 *)(*a2 + 38) - a3[1]; /*0x42a574*/
  *(float *)(v6 + 8) = Math::Sqrt((double)(int)(v16 * v16 /*0x42a59e*/
                                              + ((HIDWORD(v17) ^ v17) - HIDWORD(v17))
                                              * ((HIDWORD(v17) ^ v17) - HIDWORD(v17))))
                     + *(float *)(v6 + 4);
  return v6; /*0x42a5a1*/
}


// ==== 0x0042A5B0  CellClass::ClearOccupancyGrid  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall CellClass_ClearOccupancyGrid(_DWORD *this)
{
  _DWORD *v1; // eax
  int i; // edx
  _DWORD *v3; // eax
  int j; // edx
  int result; // eax
  int k; // eax
  char *v7; // eax
  int *v8; // ebp
  int v9; // esi
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // edx
  int v15; // [esp+8h] [ebp-8h]

  *(_DWORD *)(this->IsInitialized + 1572864) = 0; /*0x42a5b9*/
  *(_DWORD *)(this->Count + 0x100000) = 0; /*0x42a5c3*/
  v1 = (_DWORD *)this->CapacityIncrement; /*0x42a5c9*/
  for ( i = 0; i <= *v1; *(_DWORD *)(v1[2] + 4 * i - 4) = 0 ) /*0x42a5d0*/
    ++i; /*0x42a5d5*/
  *v1 = 0; /*0x42a5e0*/
  v3 = (_DWORD *)this->q01A; /*0x42a5e2*/
  for ( j = 0; j <= *v3; *(_DWORD *)(v3[2] + 4 * j - 4) = 0 ) /*0x42a5e9*/
    ++j; /*0x42a5ee*/
  *v3 = 0; /*0x42a5f9*/
  result = this->q00A + 1; /*0x42a5fe*/
  this->q00A = result; /*0x42a5ff*/
  if ( !result ) /*0x42a602*/
  {
    for ( k = MEMORY[0x89C2DC] * MEMORY[0x89C2DC] - 1; k >= 0; *(_DWORD *)(this->q01C + 4 * k + 4) = 0 ) /*0x42a611*/
    {
      --k; /*0x42a616*/
      *(_DWORD *)(this->__pad_018 + 4 * k + 4) = 0; /*0x42a617*/
    }
    v7 = (char *)(&MEMORY[0x87F810] - (_UNKNOWN *)this); /*0x42a62a*/
    v8 = this + 19; /*0x42a62d*/
    v15 = 3; /*0x42a634*/
    do /*0x42a67d*/
    {
      v9 = *v8; /*0x42a642*/
      v10 = *(int *)((char *)v8 + (_DWORD)v7) - 1; /*0x42a648*/
      if ( v10 >= 0 ) /*0x42a649*/
      {
        v11 = (_DWORD *)(v9 + 4 * v10); /*0x42a64b*/
        v12 = *(v8 - 3) - v9; /*0x42a64e*/
        v13 = v8[3] - v9; /*0x42a650*/
        v14 = v10 + 1; /*0x42a652*/
        do /*0x42a66b*/
        {
          *(_DWORD *)((char *)v11 + v12) = 0; /*0x42a653*/
          *v11 = 0; /*0x42a65a*/
          *(_DWORD *)((char *)v11-- + v13) = 0; /*0x42a660*/
          --v14; /*0x42a66a*/
        }
        while ( v14 ); /*0x42a66b*/
        v7 = (char *)(&MEMORY[0x87F810] - (_UNKNOWN *)this); /*0x42a66d*/
      }
      ++v8; /*0x42a675*/
      --v15; /*0x42a679*/
    }
    while ( v15 ); /*0x42a67d*/
    result = this->q00A + 1; /*0x42a683*/
    this->q00A = result; /*0x42a685*/
  }
  return result; /*0x42a688*/
}


// ==== 0x0042A6D0  Tactical::ConstructTacticalSurface  this=Tactical  sig=csp ====
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
  this->vtable2 = 0; /*0x42a6e2*/
  this->vtable3 = 0; /*0x42a6e5*/
  this->vtable4 = 1; /*0x42a6e8*/
  this->vtable2 = 1065353216; /*0x42a6eb*/
  this->vtable3 = 1; /*0x42a6f2*/
  this->nextArrayIndex = 0; /*0x42a6f5*/
  this->referenceCount = 0; /*0x42a6f8*/
  this->vtable3 = 0; /*0x42a6fb*/
  this->q024 = 0; /*0x42a6fe*/
  this->q028 = -1; /*0x42a701*/
  this->q02C = -1; /*0x42a704*/
  this->q038 = 1; /*0x42a707*/
  this->q03C = 0; /*0x42a70a*/
  this->q1B0 = -1; /*0x42a70d*/
  this->q038 = 0; /*0x42a710*/
  *((_WORD *)this + 57) = 0; /*0x42a714*/
  v2 = this + 116; /*0x42a718*/
  v3 = 3; /*0x42a71b*/
  do /*0x42a73d*/
  {
    VectorClassUInt::Constructor(0, 0); /*0x42a724*/
    *v2 = &vt_DynamicVectorClass_unsigned_int; /*0x42a729*/
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
  this->abstractFlags = v5; /*0x42a790*/
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
  this->vtable2 = v14; /*0x42a819*/
  v17 = __2_YAPAXI_Z(0x180004u); /*0x42a81c*/
  if ( v17 ) /*0x42a826*/
    v17[393216] = 0; /*0x42a828*/
  else
    v17 = 0; /*0x42a830*/
  this->vtable4 = v17; /*0x42a832*/
  v17[393216] = 0; /*0x42a835*/
  v18 = 0; /*0x42a83e*/
  *(_DWORD *)(this->vtable2 + 0x100000) = 0; /*0x42a840*/
  v19 = (int *)this->abstractFlags; /*0x42a846*/
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
  this->q190 = __2_YAPAXI_Z(0x27100u); /*0x42a8ed*/
  return this; /*0x42a8f2*/
}


// ==== 0x0042A900  ObjectClass::method_42A900  this=ObjectClass  sig=csp ====
void __thiscall sub_42A900(int this)
{
  void **v2; // esi
  void **v3; // esi
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void **v7; // esi
  int v8; // ebp
  int v9; // esi
  int v10; // edi
  void *v11; // eax

  v2 = *(void ***)(this + 20); /*0x42a907*/
  if ( v2 ) /*0x42a90c*/
  {
    __3_YAXPAX_Z(v2[2]); /*0x42a912*/
    __3_YAXPAX_Z(v2); /*0x42a918*/
  }
  v3 = *(void ***)(this + 104); /*0x42a920*/
  *(_DWORD *)(this + 20) = 0; /*0x42a923*/
  if ( v3 ) /*0x42a928*/
  {
    __3_YAXPAX_Z(v3[2]); /*0x42a92e*/
    __3_YAXPAX_Z(v3); /*0x42a934*/
  }
  v4 = *(void **)(this + 16); /*0x42a93c*/
  *(_DWORD *)(this + 104) = 0; /*0x42a93f*/
  if ( v4 ) /*0x42a944*/
    __3_YAXPAX_Z(v4); /*0x42a947*/
  v5 = *(void **)(this + 12); /*0x42a94f*/
  *(_DWORD *)(this + 16) = 0; /*0x42a952*/
  if ( v5 ) /*0x42a957*/
    __3_YAXPAX_Z(v5); /*0x42a95a*/
  v6 = *(void **)(this + 24); /*0x42a962*/
  *(_DWORD *)(this + 12) = 0; /*0x42a965*/
  if ( v6 ) /*0x42a96a*/
  {
    __3_YAXPAX_Z(v6); /*0x42a96d*/
    *(_DWORD *)(this + 24) = 0; /*0x42a975*/
  }
  if ( *(_DWORD *)(this + 28) ) /*0x42a978*/
  {
    __3_YAXPAX_Z(*(void **)(this + 28)); /*0x42a980*/
    *(_DWORD *)(this + 28) = 0; /*0x42a988*/
  }
  if ( *(_DWORD *)(this + 36) ) /*0x42a98b*/
  {
    __3_YAXPAX_Z(*(void **)(this + 36)); /*0x42a993*/
    *(_DWORD *)(this + 36) = 0; /*0x42a99b*/
  }
  if ( *(_DWORD *)(this + 32) ) /*0x42a99e*/
  {
    __3_YAXPAX_Z(*(void **)(this + 32)); /*0x42a9a6*/
    *(_DWORD *)(this + 32) = 0; /*0x42a9ae*/
  }
  v7 = (void **)(this + 76); /*0x42a9b2*/
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
  __3_YAXPAX_Z(*(void **)(this + 100)); /*0x42a9fb*/
  v9 = this + 188; /*0x42aa03*/
  v10 = 3; /*0x42aa09*/
  do /*0x42aa37*/
  {
    v11 = *(void **)(v9 - 20); /*0x42aa0f*/
    v9 -= 24; /*0x42aa12*/
    *(_DWORD *)v9 = &vt_VectorClass_unsigned_int; /*0x42aa17*/
    if ( v11 ) /*0x42aa1d*/
    {
      if ( *(_BYTE *)(v9 + 13) ) /*0x42aa1f*/
      {
        __3_YAXPAX_Z(v11); /*0x42aa25*/
        *(_DWORD *)(v9 + 4) = 0; /*0x42aa2d*/
      }
    }
    --v10; /*0x42aa30*/
    *(_BYTE *)(v9 + 13) = 0; /*0x42aa31*/
    *(_DWORD *)(v9 + 8) = 0; /*0x42aa34*/
  }
  while ( v10 ); /*0x42aa37*/
}


// ==== 0x0042AA90  globalHelper_02AA90  this=DynamicVectorClass_uint  sig=csp ====
int *__stdcall globalHelper_02AA90(int a1, DynamicVectorClass_uint *aP1)
{
  int v2; // esi
  int v3; // eax
  DynamicVectorClass_uint *v4; // edx
  _DWORD *v5; // ebp
  DynamicVectorClass_uint *v6; // ebx
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  bool v13; // zf
  int *v15; // [esp+0h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-8h]

  if ( (unk_89A300 & 1) == 0 ) /*0x42aa9a*/
  {
    unk_89A300 |= 1u; /*0x42aaa6*/
    atexit(nullsub_4); /*0x42aaac*/
  }
  v2 = a1; /*0x42aab7*/
  v3 = Math::RoundToInt(*(float *)(a1 + 8)); /*0x42aabf*/
  v4 = aP1; /*0x42aac4*/
  unk_89A2DC = v3; /*0x42aac8*/
  unk_89A2E0 = *(_DWORD *)(a1 + 12); /*0x42aad7*/
  unk_89A2E8 = 0; /*0x42aadc*/
  unk_89A2F0 = 0; /*0x42aae2*/
  unk_89A2F2 = 0; /*0x42aae9*/
  unk_89A2E4 = aP1; /*0x42aaf0*/
  unk_89A2EC = &unk_89A324; /*0x42aaf6*/
  v5 = *(_DWORD **)a1; /*0x42aafc*/
  v6 = *(DynamicVectorClass_uint **)(*(_DWORD *)a1 + 8); /*0x42ab01*/
  v7 = *(_DWORD *)(a1 + 12) - 2; /*0x42ab04*/
  if ( v7 >= 0 ) /*0x42ab07*/
  {
    v8 = &unk_89A324 - (_UNKNOWN *)aP1; /*0x42ab10*/
    v15 = (int *)&aP1->__pad_0[4 * v7]; /*0x42ab13*/
    v16 = v7 + 1; /*0x42ab1b*/
    do /*0x42aba7*/
    {
      if ( v6 ) /*0x42ab21*/
      {
        *(int *)((char *)v15 + v8) = (int)v6->field_4; /*0x42ab2a*/
        v9 = *(__int16 *)(**(_DWORD **)v6->__pad_0 + 38) - *(__int16 *)(*(_DWORD *)*v5 + 38); /*0x42ab48*/
        if ( (int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) > 1 /*0x42ab64*/
          || (v10 = *(__int16 *)(**(_DWORD **)v6->__pad_0 + 36),
              v11 = *(__int16 *)(*(_DWORD *)*v5 + 36),
              (int)abs32(v10 - v11) > 1) )
        {
          v12 = 8; /*0x42ab76*/
        }
        else
        {
          v12 = dword_818760[v10 /*0x42ab6d*/
                           + 3 * (*(__int16 *)(**(_DWORD **)v6->__pad_0 + 38) - *(__int16 *)(*(_DWORD *)*v5 + 38))
                           - v11];
        }
        v2 = a1; /*0x42ab7f*/
        v4 = aP1; /*0x42ab83*/
        *v15 = v12; /*0x42ab87*/
        v8 = &unk_89A324 - (_UNKNOWN *)aP1; /*0x42ab89*/
      }
      v5 = (_DWORD *)v5[2]; /*0x42ab95*/
      v6 = (DynamicVectorClass_uint *)v6->field_8; /*0x42ab98*/
      v13 = v16 == 1; /*0x42ab9e*/
      --v15; /*0x42ab9f*/
      --v16; /*0x42aba3*/
    }
    while ( !v13 ); /*0x42aba7*/
  }
  *(_DWORD *)&v4->__pad_0[4 * *(_DWORD *)(v2 + 12) - 4] = -1; /*0x42abb2*/
  dword_89A2D8 = *(_DWORD *)(*(_DWORD *)*v5 + 36); /*0x42abc2*/
  if ( !unk_89A2DC ) /*0x42abd2*/
    unk_89A2DC = 1; /*0x42abd4*/
  return &dword_89A2D8; /*0x42abe3*/
}


// ==== 0x0042ABF0  nullsub_4  this=-  sig=ida-proto ====
void __cdecl nullsub_4()
{
  ; /*0x42abf0*/
}


// ==== 0x0042AC00  CellClass::setOverlayType  this=CellClass  sig=csp ====
int __thiscall sub_42AC00(void **this, int a2)
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
    __3_YAXPAX_Z(this->smudgeTypeIndex); /*0x42ac34*/
    this->smudgeTypeIndex = 0; /*0x42ac3c*/
  }
  if ( this->bridgeOwnerCell ) /*0x42ac3f*/
  {
    __3_YAXPAX_Z(this->bridgeOwnerCell); /*0x42ac47*/
    this->bridgeOwnerCell = 0; /*0x42ac4f*/
  }
  unk_89C2DC = *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 8) + 1; /*0x42ac60*/
  v3 = 4 * unk_89C2DC * unk_89C2DC; /*0x42ac68*/
  this->rubble = __2_YAPAXI_Z(v3); /*0x42ac76*/
  this->attachedTag = __2_YAPAXI_Z(v3); /*0x42ac7f*/
  this->smudgeTypeIndex = __2_YAPAXI_Z(v3); /*0x42ac88*/
  this->bridgeOwnerCell = __2_YAPAXI_Z(v3); /*0x42ac90*/
  dword_89A304[0] = -unk_89C2DC; /*0x42aca1*/
  unk_89A310 = unk_89C2DC + 1; /*0x42acac*/
  unk_89A308 = 1 - unk_89C2DC; /*0x42acb8*/
  unk_89A30C = 1; /*0x42acc4*/
  unk_89A314 = unk_89C2DC; /*0x42acce*/
  unk_89A318 = unk_89C2DC - 1; /*0x42acd3*/
  unk_89A31C = -1; /*0x42acd9*/
  unk_89A320 = -1 - unk_89C2DC; /*0x42ace3*/
  return unk_89C2DC; /*0x42acc3*/
}


// ==== 0x0042ACF0  BuildingClass::UpdatePowerAnim  this=DynamicVectorClass_uint  sig=csp ====
char __thiscall BuildingClass_UpdatePowerAnim(_BYTE *this, int a2)
{
  int v2; // eax
  int *v3; // esi
  char *v4; // edi
  unsigned int v5; // edx
  __int16 v6; // cx
  _DWORD *v7; // ebx
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
  int v26; // [esp+10h] [ebp-28h] BYREF
  _DWORD *v27; // [esp+14h] [ebp-24h]
  int v28; // [esp+18h] [ebp-20h] BYREF
  _BYTE *v29; // [esp+1Ch] [ebp-1Ch]
  int v30; // [esp+20h] [ebp-18h]
  int v31; // [esp+28h] [ebp-10h]
  int v32; // [esp+2Ch] [ebp-Ch] BYREF
  int v33; // [esp+30h] [ebp-8h] BYREF
  int v34; // [esp+34h] [ebp-4h] BYREF

  LOBYTE(v2) = this->IsInitialized; /*0x42acf3*/
  v29 = this; /*0x42acfc*/
  if ( !(_BYTE)v2 ) /*0x42ad00*/
    return v2; /*0x42ad00*/
  v3 = (int *)a2; /*0x42ad06*/
  v28 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 440))(a2, &a2); /*0x42ad25*/
  v4 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v28); /*0x42ad32*/
  v5 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)v3 + 452, &v34) >> 12) + 1) >> 1) & 7; /*0x42ad4d*/
  v6 = LOWORD(MEMORY[0x89F688][v5]) + v28; /*0x42ad50*/
  LOWORD(v5) = HIWORD(MEMORY[0x89F688][v5]); /*0x42ad5f*/
  LOWORD(a2) = v6; /*0x42ad67*/
  HIWORD(a2) = HIWORD(v28) + v5; /*0x42ad7b*/
  v32 = a2; /*0x42ad84*/
  v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32); /*0x42ad8d*/
  v27 = v7; /*0x42ad8f*/
  if ( (v7[80] & 0x100) != 0 /*0x42adb8*/
    && ((v8 = v4[283] - *((char *)v7 + 283), (int)((HIDWORD(v8) ^ v8) - HIDWORD(v8)) > 3) || *((_BYTE *)v3 + 140)) )
  {
    v9 = (int *)v7[58]; /*0x42adc2*/
    v10 = 1; /*0x42adc8*/
  }
  else
  {
    v9 = (int *)v7[57]; /*0x42adcc*/
    v10 = 0; /*0x42add2*/
  }
  if ( !v9 )
    v9 = (int *)globalHelper_02B080(v7 + 9, (v10 != 0 ? 4 : 0) + *((char *)v7 + 283));
  v11 = *v3; /*0x42adf8*/
  LOBYTE(a2) = 0; /*0x42adfc*/
  v12 = (*(int (__thiscall **)(int *))(v11 + 132))(v3); /*0x42ae07*/
  v33 = v12; /*0x42ae0b*/
  if ( v9 ) /*0x42ae0f*/
  {
    while ( 1 ) /*0x42ae15*/
    {
      if ( (*(int (__thiscall **)(int *))(*v9 + 44))(v9) != 1 && (*(int (__thiscall **)(int *))(*v9 + 44))(v9) != 15 ) /*0x42ae2d*/
        goto LABEL_36; /*0x42ae2d*/
      v13 = 0; /*0x42ae39*/
      v26 = v9[342]; /*0x42ae3b*/
      v14 = (*(int (__thiscall **)(int *))(*v9 + 132))(v9); /*0x42ae44*/
      if ( *((_DWORD *)v29 + 15) == 2 /*0x42ae74*/
        || v12 != v14
        && *(_DWORD *)(v12 + 1656) > *(_DWORD *)(v14 + 1656)
        && LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v26, 1) )
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
              v17 = *((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26) + 139); /*0x42af15*/
              if ( v17 == -1 ) /*0x42af1f*/
              {
                v30 = 0; /*0x42af31*/
                v18 = 0; /*0x42af3b*/
              }
              else
              {
                v18 = *(_DWORD *)(*((_DWORD *)MEMORY[0x8B413C] + v17) + 40); /*0x42af2a*/
              }
            }
            else
            {
              v19 = HIWORD(MEMORY[0x89F688][v16]); /*0x42af49*/
              LOWORD(v31) = v26 + LOWORD(MEMORY[0x89F688][v16]); /*0x42af5b*/
              HIWORD(v31) = HIWORD(v26) + v19; /*0x42af60*/
              v18 = v31; /*0x42af65*/
            }
            v26 = v18; /*0x42af69*/
            v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x42af80*/
            v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x42af88*/
            ++v15; /*0x42af9e*/
            ++v13; /*0x42afad*/
            v21[80] ^= (v21[80] ^ ~v20[80]) & 0x40000; /*0x42afae*/
          }
          while ( *v15 != -1 ); /*0x42afb5*/
          v7 = v27; /*0x42afbb*/
LABEL_36:
          v9 = (int *)v9[12]; /*0x42afbf*/
          v12 = v33; /*0x42afc2*/
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
            v30 = v7[9]; /*0x42afd8*/
            LOWORD(a2) = v22 + v30; /*0x42afe4*/
            HIWORD(a2) = v23 + HIWORD(v30); /*0x42afe9*/
            v33 = a2; /*0x42affc*/
            v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v33); /*0x42b000*/
            if ( *((_BYTE *)v24 + 292) ) /*0x42b005*/
            {
              v31 = v24[9]; /*0x42b017*/
              if ( v31 != v28 ) /*0x42b01b*/
                v24[80] ^= (v24[80] ^ ~v24[80]) & 0x40000; /*0x42b03d*/
            }
            ++v23; /*0x42b043*/
          }
          while ( v23 < 3 ); /*0x42b047*/
          ++v22; /*0x42b049*/
        }
        while ( v22 < 3 ); /*0x42b04d*/
        v2 = v7[80]; /*0x42b04f*/
        v7[80] = v2 ^ (v2 ^ ~v2) & 0x40000; /*0x42b063*/
        return v2; /*0x42b063*/
      }
    }
  }
  LOBYTE(v2) = (_BYTE)v29; /*0x42aeb9*/
  if ( *((_DWORD *)v29 + 15) != 1 ) /*0x42aec1*/
    goto LABEL_37; /*0x42aec1*/
  *((_DWORD *)v29 + 15) = 0; /*0x42aeca*/
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
  v3 = a2 * unk_89C2D8; /*0x42b0ab*/
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
      v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x42b0fd*/
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


// ==== 0x0042B1C0  Cell::PosToIndex  this=CellStruct  sig=csp ====
int __thiscall Cell_PosToIndex(__int16 *this)
{
  return ((*this - this->q004 + MEMORY[0x87F8DC] - 1) >> 1) /*0x42b1e3*/
       + MEMORY[0x87F8DC] * (*this - MEMORY[0x87F8DC] + this->q004 - 1);
}


// ==== 0x0042B1F0  Object::ComputeAllocationSize  this=Object  sig=csp ====
int Object_ComputeAllocationSize()
{
  return 2 * MEMORY[0x87F8DC] * (MEMORY[0x87F8E0] + 4); /*0x42b201*/
}


// ==== 0x0042B210  ObjectClass::ParsePathDirections  this=DynamicVectorClass_uint  sig=csp ====
char __thiscall ParsePathDirections(void *this, int a2, _DWORD *a3)
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
  int *v18; // [esp+10h] [ebp-2Ch] BYREF
  int v19; // [esp+14h] [ebp-28h]
  int *v20; // [esp+18h] [ebp-24h] BYREF
  int v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  int *v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+28h] [ebp-14h]
  int *v25; // [esp+2Ch] [ebp-10h]
  int v26; // [esp+30h] [ebp-Ch]
  int v27; // [esp+34h] [ebp-8h]
  void *v28; // [esp+38h] [ebp-4h]
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
  v18 = v5; /*0x42b251*/
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
        v20 = v18; /*0x42b2d3*/
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
        v13 = *((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18) + 139); /*0x42b2eb*/
        if ( v13 == -1 ) /*0x42b2f5*/
        {
          v22 = 0; /*0x42b30e*/
          v18 = 0; /*0x42b31c*/
        }
        else
        {
          v18 = *(int **)(*((_DWORD *)MEMORY[0x8B413C] + v13) + 40); /*0x42b303*/
        }
      }
      else
      {
        v14 = HIWORD(MEMORY[0x89F688][v11]); /*0x42b32d*/
        LOWORD(v23) = (_WORD)v18 + LOWORD(MEMORY[0x89F688][v11]); /*0x42b33f*/
        HIWORD(v23) = HIWORD(v18) + v14; /*0x42b344*/
        v18 = v23; /*0x42b34d*/
      }
      goto LABEL_24; /*0x42b307*/
    }
    if ( *(_DWORD *)(v4 + 4 * (v19 + v21)) != v24 ) /*0x42b35a*/
    {
      v9 += GeneratePathWaypoints(a3, (int *)(v4 + 4 * v9), v27 + 4 * v9, v8, v19, &v20); /*0x42b387*/
      v8 = 1; /*0x42b38e*/
      v29 = 0; /*0x42b393*/
      v15 = *(_DWORD *)(v4 + 4 * v9) & 7; /*0x42b39b*/
      v16 = HIWORD(MEMORY[0x89F688][v15]); /*0x42b39e*/
      LOWORD(v25) = LOWORD(MEMORY[0x89F688][v15]) + (_WORD)v20; /*0x42b3ba*/
      HIWORD(v25) = HIWORD(v20) + v16; /*0x42b3bf*/
      v18 = v25; /*0x42b3c8*/
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
      v14 = *((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v50) + 139); /*0x42b4b5*/
      if ( v14 == -1 ) /*0x42b4bf*/
      {
        v15 = (int *)CellStruct::Set(&TileDataCellClass, 0, 0); /*0x42b4d7*/
LABEL_16:
        v11 = (int *)*v15; /*0x42b4f4*/
        goto LABEL_17; /*0x42b4f4*/
      }
      v11 = *(int **)(*((_DWORD *)MEMORY[0x8B413C] + v14) + 40); /*0x42b4ca*/
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
    v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v50); /*0x42b58f*/
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
          v42 = *((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a6) + 139); /*0x42b74a*/
          if ( v42 == -1 ) /*0x42b754*/
          {
            v43 = (int **)CellStruct::Set(&a2, 0, 0); /*0x42b76c*/
LABEL_51:
            v39 = *v43; /*0x42b789*/
            goto LABEL_52; /*0x42b789*/
          }
          v39 = *(int **)(*((_DWORD *)MEMORY[0x8B413C] + v42) + 40); /*0x42b75f*/
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
      v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v50); /*0x42b633*/
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
    v31 = HIWORD(v49) + HIWORD(MEMORY[0x89F688][v30]); /*0x42b688*/
    LOWORD(v56) = LOWORD(MEMORY[0x89F688][v30]) + (_WORD)v49; /*0x42b694*/
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


// ==== 0x0042B7F0  ObjectClass::SimplifyPathFilter  this=DynamicVectorClass_uint  sig=csp ====
_DWORD *__thiscall Path_FilterSimplify(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  bool v9; // cc
  void *v10; // eax
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
  void **v33; // [esp+10h] [ebp-80h]
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
  void *v48; // [esp+4Ch] [ebp-44h]
  int v49; // [esp+50h] [ebp-40h]
  int v50; // [esp+54h] [ebp-3Ch]
  int v51; // [esp+58h] [ebp-38h]
  int v52; // [esp+5Ch] [ebp-34h]
  void *v53; // [esp+60h] [ebp-30h]
  int v54; // [esp+64h] [ebp-2Ch]
  int v55; // [esp+68h] [ebp-28h]
  void *v56; // [esp+6Ch] [ebp-24h] BYREF
  int v57; // [esp+70h] [ebp-20h]
  _DWORD v58[2]; // [esp+78h] [ebp-18h] BYREF
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
    v33 = (void **)v4; /*0x42b862*/
    do /*0x42bb62*/
    {
      if ( v8 >= 20 ) /*0x42b869*/
        break; /*0x42b869*/
      v10 = *v33; /*0x42b873*/
      v56 = *v33; /*0x42b878*/
      if ( v56 == (void *)8 ) /*0x42b87c*/
      {
        v45 = 0; /*0x42b899*/
        *(_DWORD *)&v44[2] = (unsigned __int16)(HIWORD(MEMORY[0x89F688][0]) + HIWORD(v59)); /*0x42b8a7*/
        ++v8; /*0x42b8b0*/
        *(_WORD *)v44 = LOWORD(MEMORY[0x89F688][0]) + v5; /*0x42b8b4*/
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
      else if ( v10 == (void *)-2 ) /*0x42b90c*/
      {
        ++v8; /*0x42b912*/
        ++v33; /*0x42b916*/
      }
      else
      {
        v11 = (unsigned __int8)v10 & 7; /*0x42b91f*/
        v12 = MEMORY[0x89F688][v11]; /*0x42b932*/
        v13 = v35 + v12; /*0x42b946*/
        LOWORD(v11) = HIWORD(MEMORY[0x89F688][v11]); /*0x42b94b*/
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
          v20 = MEMORY[0x89F688][v19]; /*0x42b9c8*/
          LOWORD(v19) = HIWORD(MEMORY[0x89F688][v19]); /*0x42b9da*/
          LOWORD(v60) = v5 + v20; /*0x42b9de*/
          HIWORD(v60) = HIWORD(v59) + v19; /*0x42b9f4*/
          v21 = v5 + v20; /*0x42b9fc*/
          v5 = v60; /*0x42ba03*/
          v59 = v60; /*0x42ba05*/
          if ( v39 >= v18 ) /*0x42ba0c*/
          {
            v58[0] = v60; /*0x42ba32*/
            sub_42BCA0(v36, v8, v42, &v43, v58); /*0x42ba39*/
            LOWORD(v48) = v21 - LOWORD(v58[0]); /*0x42ba55*/
            HIWORD(v48) = HIWORD(v60) - HIWORD(v58[0]); /*0x42ba5a*/
            v56 = v48; /*0x42ba67*/
            WalkLineOfSight(&v36[v43], v8 - v43 + 1, v58, &v56, a3, *(_DWORD *)(v54 + 4 * v43), 0); /*0x42ba96*/
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
        sub_42BCA0(v36, v25, v40, &v43, v58); /*0x42bbd3*/
        LOWORD(v53) = v5 - LOWORD(v58[0]); /*0x42bbef*/
        HIWORD(v53) = HIWORD(v59) - HIWORD(v58[0]); /*0x42bbf4*/
        v56 = v53; /*0x42bbff*/
        WalkLineOfSight(&v36[v43], v25 - v43 + 1, v58, &v56, a3, *(_DWORD *)(v54 + 4 * v43), 1); /*0x42bc2e*/
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
  v12 = MEMORY[0x89F688][v11]; /*0x42bd08*/
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
  LOWORD(v28) = v15 + LOWORD(MEMORY[0x89F688][v19]); /*0x42bdf3*/
  result = v14 + HIWORD(MEMORY[0x89F688][v19]); /*0x42bdfc*/
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
      LOWORD(v35) = (_WORD)v19 + LOWORD(MEMORY[0x89F688][v20]); /*0x42bf46*/
      HIWORD(v35) = HIWORD(a5) + HIWORD(MEMORY[0x89F688][v20]); /*0x42bf55*/
      a5 = v35; /*0x42bf5e*/
      v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a5); /*0x42bf6c*/
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
      LOWORD(v36) = LOWORD(MEMORY[0x89F688][v23]) + (_WORD)v19; /*0x42c053*/
      HIWORD(v36) = HIWORD(a5) + HIWORD(MEMORY[0x89F688][v23]); /*0x42c058*/
      a5 = v36; /*0x42c067*/
      v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a5); /*0x42c070*/
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


// ==== 0x0042C1C0  MapClass::AllocArrays  this=MapClass  sig=csp ====
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
  v2 = (char *)(&MEMORY[0x87F810] - (_UNKNOWN *)this); /*0x42c1cb*/
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
char __thiscall Pathfinding::AStar(
        _DWORD *this,
        IUnknown *aP1,
        DynamicVectorClass_uint *aP2,
        DynamicVectorClass_uint *aP3,
        IUnknown *aP4)
{
  DynamicVectorClass_uint *v5; // edi
  double SpeedMultiplier; // st7
  int v7; // esi
  _DWORD *v8; // eax
  int i; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int *v15; // ecx
  float *v16; // eax
  int v17; // eax
  float *v18; // ebx
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // ebx
  int v26; // edx
  int v27; // esi
  int v28; // edx
  int v29; // eax
  int v30; // eax
  double v31; // st7
  int v32; // ecx
  unsigned __int16 v33; // cx
  unsigned __int16 v34; // ax
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // edx
  int v38; // eax
  unsigned int v39; // esi
  _DWORD *v40; // edi
  unsigned int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // eax
  bool v44; // zf
  int *v45; // ecx
  int v46; // eax
  int v47; // ebx
  float *v48; // esi
  int v49; // esi
  int v50; // edx
  int v51; // eax
  int v52; // esi
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  char *v56; // edx
  char v58; // [esp+10h] [ebp-58h]
  char v59; // [esp+11h] [ebp-57h]
  bool v60; // [esp+12h] [ebp-56h]
  bool v61; // [esp+13h] [ebp-55h]
  float *v62; // [esp+14h] [ebp-54h]
  int v63; // [esp+18h] [ebp-50h]
  float v64; // [esp+18h] [ebp-50h]
  _DWORD *v66; // [esp+20h] [ebp-48h]
  unsigned int v67; // [esp+20h] [ebp-48h]
  int v68; // [esp+24h] [ebp-44h]
  int v69; // [esp+28h] [ebp-40h]
  int v70; // [esp+2Ch] [ebp-3Ch]
  int v71; // [esp+30h] [ebp-38h]
  int v72; // [esp+34h] [ebp-34h]
  int v73; // [esp+34h] [ebp-34h]
  int v74; // [esp+34h] [ebp-34h]
  int v75; // [esp+38h] [ebp-30h]
  int v76; // [esp+3Ch] [ebp-2Ch]
  int v77; // [esp+40h] [ebp-28h]
  int v78; // [esp+44h] [ebp-24h]
  int v79; // [esp+48h] [ebp-20h]
  _DWORD *v80; // [esp+4Ch] [ebp-1Ch]
  int v81; // [esp+4Ch] [ebp-1Ch]
  int v82; // [esp+50h] [ebp-18h]
  int v83; // [esp+50h] [ebp-18h]
  int v84; // [esp+54h] [ebp-14h]
  int v85; // [esp+54h] [ebp-14h]
  float *v86; // [esp+54h] [ebp-14h]
  float *v87; // [esp+54h] [ebp-14h]
  int v88; // [esp+5Ch] [ebp-Ch]
  double v89; // [esp+60h] [ebp-8h]

  v5 = (DynamicVectorClass_uint *)this; /*0x42c2a5*/
  if ( !aP4 ) /*0x42c2b6*/
  {
    v89 = 0.0; /*0x42c2cf*/
    v77 = 0; /*0x42c2df*/
LABEL_5:
    v58 = 0; /*0x42c2fb*/
    goto LABEL_6; /*0x42c2fb*/
  }
  SpeedMultiplier = LocomotionClass::GetSpeedMultiplier((int)aP4); /*0x42c2ba*/
  v89 = SpeedMultiplier; /*0x42c2c5*/
  v77 = aP4->field_21C; /*0x42c2c9*/
  v58 = 1; /*0x42c2ef*/
  if ( SpeedMultiplier <= 0.00001 ) /*0x42c2f9*/
    goto LABEL_5; /*0x42c2f9*/
LABEL_6:
  v7 = 2; /*0x42c300*/
  v75 = 2; /*0x42c305*/
  while ( 2 ) /*0x42c309*/
  {
    v8 = *(_DWORD **)&v5->__pad_14[84]; /*0x42c309*/
    for ( i = 0; i <= *v8; *(_DWORD *)(v8[2] + 4 * i - 4) = 0 ) /*0x42c311*/
      ++i; /*0x42c316*/
    *v8 = 0; /*0x42c325*/
    v10 = *(__int16 *)(MEMORY[0x87F858] + 10 * CellToTileIndexMap((int *)&MEMORY[0x87F7E8], aP1) + 2 * v7); /*0x42c34a*/
    v72 = v10; /*0x42c351*/
    v76 = *(__int16 *)(MEMORY[0x87F858] + 10 * CellToTileIndexMap((int *)&MEMORY[0x87F7E8], (IUnknown *)aP2) + 2 * v7); /*0x42c36e*/
    v60 = v7 == 2; /*0x42c377*/
    if ( v7 == 2 ) /*0x42c37b*/
      v78 = 0; /*0x42c387*/
    else
      v78 = *(_DWORD *)&v5->__pad_14[4 * v7 + 48]; /*0x42c381*/
    v11 = *(_DWORD *)&v5->__pad_14[4 * v7 + 44]; /*0x42c393*/
    v68 = *(_DWORD *)&v5->__pad_14[4 * v7 + 56]; /*0x42c39b*/
    v69 = *(_DWORD *)&v5->__pad_14[4 * v7 + 68]; /*0x42c3a2*/
    *(_DWORD *)(v11 + 4 * v10) = *(_DWORD *)&v5->__pad_14[20]; /*0x42c3aa*/
    v88 = v11; /*0x42c3b2*/
    *(_DWORD *)(v11 + 4 * v76) = *(_DWORD *)&v5->__pad_14[20]; /*0x42c3b6*/
    if ( v10 == v76 ) /*0x42c3b9*/
    {
      if ( !v7 ) /*0x42c3bd*/
      {
        v12 = *(_DWORD *)&v5->__pad_14[80]; /*0x42c3bf*/
        *(_DWORD *)(v12 + 12) = 0; /*0x42c3c2*/
        *(_DWORD *)(v12 + 4) = v10; /*0x42c3c5*/
      }
      *(_WORD *)&v5[1].__pad_14[1000 * v7 + 52] = v10; /*0x42c3d1*/
      *(_DWORD *)&v5[27].__pad_14[4 * v7 + 36] = 1; /*0x42c3d9*/
      goto LABEL_85; /*0x42c3e4*/
    }
    v80 = *(_DWORD **)&v5->__pad_14[80]; /*0x42c3ee*/
    *v80 = -1; /*0x42c3f2*/
    v80[1] = v10; /*0x42c3f8*/
    v80[2] = 0; /*0x42c3fb*/
    v80[3] = 0; /*0x42c3fe*/
    v66 = *(_DWORD **)&v5->__pad_14[84]; /*0x42c404*/
    v13 = *v66 + 1; /*0x42c40a*/
    v14 = v13 >> 1; /*0x42c40d*/
    if ( v13 < v66[1] ) /*0x42c412*/
    {
      for ( ; v13 > 1; v14 >>= 1 ) /*0x42c417*/
      {
        v82 = v66[2]; /*0x42c420*/
        if ( *(float *)(*(_DWORD *)(v82 + 4 * v14) + 8) <= 0.0 ) /*0x42c435*/
          break; /*0x42c435*/
        *(_DWORD *)(v82 + 4 * v13) = *(_DWORD *)(v82 + 4 * v14); /*0x42c43e*/
        v10 = v72; /*0x42c441*/
        v13 = v14; /*0x42c445*/
      }
      *(_DWORD *)(v66[2] + 4 * v13) = v80; /*0x42c459*/
      ++*v66; /*0x42c463*/
      if ( (unsigned int)v80 > v66[3] ) /*0x42c46a*/
        v66[3] = v80; /*0x42c46c*/
      if ( (unsigned int)v80 < v66[4] ) /*0x42c472*/
        v66[4] = v80; /*0x42c474*/
    }
    v70 = 1; /*0x42c482*/
    *(_DWORD *)(v68 + 4 * v10) = *(_DWORD *)&v5->__pad_14[20]; /*0x42c48a*/
    *(_DWORD *)(v69 + 4 * v10) = 0; /*0x42c48d*/
    v15 = *(int **)&v5->__pad_14[84]; /*0x42c494*/
    if ( *v15 ) /*0x42c497*/
    {
      v17 = v15[2]; /*0x42c4a1*/
      v18 = *(float **)(v17 + 4); /*0x42c4a9*/
      *(_DWORD *)(v17 + 4) = *(_DWORD *)(v17 + 4 * *v15); /*0x42c4ac*/
      *(_DWORD *)(v15[2] + 4 * (*v15)--) = 0; /*0x42c4b4*/
      Pathfinding::SiftDown(v15, 1); /*0x42c4c0*/
      v16 = v18; /*0x42c4c5*/
    }
    else
    {
      v16 = 0; /*0x42c49d*/
    }
    v62 = v16; /*0x42c4ca*/
    v19 = 24 * v7; /*0x42c4ce*/
    v67 = 24 * v7; /*0x42c4d1*/
    v61 = *((_DWORD *)&v5[1].field_10 + 6 * v7) == 0; /*0x42c4de*/
    if ( !v16 ) /*0x42c4e5*/
      return 0; /*0x42c8ea*/
    while ( 1 ) /*0x42c4eb*/
    {
      v20 = *((_DWORD *)v16 + 1); /*0x42c4eb*/
      v79 = v20; /*0x42c4f4*/
      if ( v20 == v76 ) /*0x42c4f8*/
        break; /*0x42c4f8*/
      v21 = 9 * v20; /*0x42c4fe*/
      v22 = *(int *)((char *)MEMORY[0x87F878] + v19); /*0x42c501*/
      v23 = *(_DWORD *)(v22 + 4 * v21 + 4); /*0x42c507*/
      v24 = *(_DWORD *)(v22 + 4 * v21 + 16); /*0x42c50e*/
      if ( v24 > 0 ) /*0x42c513*/
      {
        v73 = v23; /*0x42c51d*/
        v71 = 16 * v70; /*0x42c524*/
        v83 = v24; /*0x42c528*/
        do /*0x42c73a*/
        {
          HIWORD(v27) = 0; /*0x42c534*/
          v63 = 0; /*0x42c536*/
          v25 = *(_DWORD *)v73; /*0x42c53e*/
          v59 = *(_BYTE *)(v73 + 4); /*0x42c543*/
          v26 = MEMORY[0x87F878][v67 / 4]; /*0x42c547*/
          v81 = *(_DWORD *)v73; /*0x42c550*/
          LOWORD(v27) = *(_WORD *)(v26 + 36 * *(_DWORD *)v73 + 24); /*0x42c554*/
          v28 = *(_DWORD *)(v26 + 36 * *(_DWORD *)v73 + 28); /*0x42c55c*/
          v84 = v28; /*0x42c565*/
          if ( v58 ) /*0x42c569*/
          {
            v29 = InterpolateTerrainLighting(v77, v75, v79, v25); /*0x42c580*/
            v30 = Math::RoundToInt((double)v29 * v89); /*0x42c591*/
            v28 = v84; /*0x42c596*/
            v63 = v30; /*0x42c59a*/
          }
          if ( v59 ) /*0x42c5a4*/
            v31 = 0.001; /*0x42c5a6*/
          else
            v31 = 0.0; /*0x42c5ae*/
          v32 = *(_DWORD *)&v5->__pad_14[20]; /*0x42c5b8*/
          v64 = flt_7E3794[v28] + v62[2] + (double)v63 + v31; /*0x42c5d2*/
          if ( (*(_DWORD *)(v68 + 4 * v25) != v32 || *(float *)(v69 + 4 * v25) > (double)v64) /*0x42c612*/
            && (v60 || *(_DWORD *)(v78 + 4 * v27) == v32 || v28 == 1)
            && dword_82A594[8 * (_DWORD)aP3 + v28] == 1 )
          {
            if ( v61 ) /*0x42c61e*/
              goto LABEL_49; /*0x42c61e*/
            v33 = v25; /*0x42c624*/
            v34 = v79; /*0x42c629*/
            if ( (unsigned __int16)v25 < (unsigned __int16)v79 ) /*0x42c62b*/
            {
              v34 = v25; /*0x42c62d*/
              v33 = v79; /*0x42c62f*/
            }
            v35 = v33 | (v34 << 16); /*0x42c643*/
            v36 = *(int *)((char *)&v5[1].field_10 + v67) - 1; /*0x42c64c*/
            if ( v36 < 0 ) /*0x42c64d*/
            {
LABEL_49:
              v38 = *(this + 25); /*0x42c666*/
              *(_DWORD *)(v38 + v71 + 4) = v25; /*0x42c671*/
              v39 = v38 + v71; /*0x42c675*/
              *(_DWORD *)v39 = ((int)v62 - v38) >> 4; /*0x42c687*/
              *(float *)(v39 + 8) = v64; /*0x42c689*/
              *(_DWORD *)(v39 + 12) = *((_DWORD *)v62 + 3) + 1; /*0x42c690*/
              v40 = (_DWORD *)this->q01A; /*0x42c693*/
              v41 = *v40 + 1; /*0x42c69b*/
              v42 = v41 >> 1; /*0x42c69e*/
              if ( v41 < v40[1] ) /*0x42c6a2*/
              {
                for ( ; v41 > 1; v42 >>= 1 ) /*0x42c6a7*/
                {
                  v85 = *(_DWORD *)(v40[2] + 4 * v42); /*0x42c6af*/
                  if ( *(float *)(v85 + 8) <= (double)v64 ) /*0x42c6bf*/
                    break; /*0x42c6bf*/
                  *(_DWORD *)(v40[2] + 4 * v41) = v85; /*0x42c6c8*/
                  v25 = v81; /*0x42c6cb*/
                  v41 = v42; /*0x42c6cf*/
                }
                *(_DWORD *)(v40[2] + 4 * v41) = v39; /*0x42c6db*/
                v43 = v40[3]; /*0x42c6e0*/
                ++*v40; /*0x42c6e6*/
                if ( v39 > v43 ) /*0x42c6e8*/
                  v40[3] = v39; /*0x42c6ea*/
                if ( v39 < v40[4] ) /*0x42c6f0*/
                  v40[4] = v39; /*0x42c6f2*/
              }
              v5 = (DynamicVectorClass_uint *)this; /*0x42c708*/
              *(_DWORD *)(v68 + 4 * v25) = this->q00A; /*0x42c70c*/
              *(float *)(v69 + 4 * v25) = v64; /*0x42c70f*/
              ++v70; /*0x42c71e*/
              v71 += 16; /*0x42c722*/
            }
            else
            {
              v37 = (_DWORD *)(*(_DWORD *)&v5[1].__pad_0[v67 + 4] + 4 * v36); /*0x42c653*/
              while ( *v37 != v35 ) /*0x42c658*/
              {
                --v36; /*0x42c65e*/
                --v37; /*0x42c65f*/
                if ( v36 < 0 ) /*0x42c664*/
                  goto LABEL_49; /*0x42c664*/
              }
            }
          }
          v44 = v83 == 1; /*0x42c731*/
          v73 += 8; /*0x42c732*/
          --v83; /*0x42c736*/
        }
        while ( !v44 ); /*0x42c73a*/
      }
      v45 = *(int **)&v5->__pad_14[84]; /*0x42c740*/
      if ( !*v45 ) /*0x42c747*/
        return 0; /*0x42c747*/
      v46 = v45[2]; /*0x42c74d*/
      v47 = 1; /*0x42c750*/
      v48 = *(float **)(v46 + 4); /*0x42c758*/
      *(_DWORD *)(v46 + 4) = *(_DWORD *)(v46 + 4 * *v45); /*0x42c75b*/
      v86 = v48; /*0x42c763*/
      *(_DWORD *)(v45[2] + 4 * *v45) = 0; /*0x42c767*/
      v49 = *v45 - 1; /*0x42c771*/
      *v45 = v49; /*0x42c773*/
      if ( v49 < 2 /*0x42c795*/
        || (v50 = 2, *(float *)(*(_DWORD *)(v45[2] + 4) + 8) <= (double)*(float *)(*(_DWORD *)(v45[2] + 8) + 8)) )
      {
        v50 = 1; /*0x42c797*/
      }
      if ( v49 < 3 || *(float *)(*(_DWORD *)(v45[2] + 4 * v50) + 8) <= (double)*(float *)(*(_DWORD *)(v45[2] + 12) + 8) ) /*0x42c7b7*/
      {
        if ( v50 == 1 ) /*0x42c7c3*/
          goto LABEL_75; /*0x42c7c3*/
      }
      else
      {
        v50 = 3; /*0x42c7b9*/
      }
      do /*0x42c82f*/
      {
        v51 = v45[2]; /*0x42c7c5*/
        v52 = *(_DWORD *)(v51 + 4 * v47); /*0x42c7cb*/
        *(_DWORD *)(v51 + 4 * v47) = *(_DWORD *)(v51 + 4 * v50); /*0x42c7ce*/
        v47 = v50; /*0x42c7d4*/
        *(_DWORD *)(v45[2] + 4 * v50) = v52; /*0x42c7d6*/
        v74 = 2 * v50 + 1; /*0x42c7e4*/
        if ( 2 * v50 <= *v45 /*0x42c803*/
          && *(float *)(*(_DWORD *)(v45[2] + 4 * v50) + 8) > (double)*(float *)(*(_DWORD *)(v45[2] + 8 * v50) + 8) )
        {
          v50 *= 2; /*0x42c805*/
        }
        if ( v74 <= *v45 /*0x42c827*/
          && *(float *)(*(_DWORD *)(v45[2] + 4 * v50) + 8) > (double)*(float *)(*(_DWORD *)(v45[2] + 4 * v74) + 8) )
        {
          v50 = v74; /*0x42c829*/
        }
      }
      while ( v50 != v47 ); /*0x42c82f*/
      v5 = (DynamicVectorClass_uint *)this; /*0x42c831*/
LABEL_75:
      v16 = v86; /*0x42c835*/
      v62 = v86; /*0x42c83b*/
      if ( !v86 ) /*0x42c83f*/
        return 0; /*0x42c83f*/
      v7 = v75; /*0x42c845*/
      v19 = v67; /*0x42c849*/
    }
    if ( !v16 ) /*0x42c854*/
      return 0; /*0x42c854*/
    v53 = (int)v16; /*0x42c85c*/
    v87 = v16; /*0x42c861*/
    if ( *(_DWORD *)v16 != -1 ) /*0x42c865*/
    {
      do /*0x42c881*/
      {
        *(_DWORD *)(v88 + 4 * *((_DWORD *)v16 + 1)) = *(_DWORD *)&v5->__pad_14[20]; /*0x42c871*/
        v16 = (float *)(*(_DWORD *)&v5->__pad_14[80] + 16 * *(_DWORD *)v16); /*0x42c87c*/
      }
      while ( *(_DWORD *)v16 != -1 ); /*0x42c881*/
      v53 = (int)v87; /*0x42c883*/
    }
    v54 = *(_DWORD *)(v53 + 12) + 1; /*0x42c88a*/
    *(_DWORD *)&v5[27].__pad_14[4 * v7 + 36] = v54; /*0x42c88b*/
    v55 = v54 - 1; /*0x42c892*/
    if ( v55 > 0 ) /*0x42c895*/
    {
      v56 = &v5[1].__pad_14[1000 * v7 + 52 + 2 * v55]; /*0x42c8a3*/
      do /*0x42c8bf*/
      {
        *(_WORD *)v56 = *(_WORD *)(v53 + 4); /*0x42c8ae*/
        v56 -= 2; /*0x42c8b6*/
        v53 = *(_DWORD *)&v5->__pad_14[80] + 16 * *(_DWORD *)v53; /*0x42c8bc*/
        --v55; /*0x42c8be*/
      }
      while ( v55 ); /*0x42c8bf*/
    }
    *(_WORD *)&v5[1].__pad_14[1000 * v7 + 52] = *(_WORD *)(v53 + 4); /*0x42c8ce*/
LABEL_85:
    v75 = --v7; /*0x42c8d7*/
    if ( v7 >= 0 ) /*0x42c8db*/
      continue; /*0x42c8db*/
    return 1; /*0x42c8e4*/
  }
}


// ==== 0x0042C900  ObjectClass::FindPathWithRetry  this=ObjectClass  sig=csp ====
void *__thiscall FindPathWithRetry(int this, FootClass *aP1, __int16 *a2, int aP4, int a5, int a6, int aP3, int aP6)
{
  int v9; // esi
  int v10; // edi
  IUnknown *ecx3; // ecx
  IUnknown *v12; // ebx
  IUnknown *v14; // eax
  IUnknown *v15; // eax
  int TileIndex; // eax
  unsigned int v17; // ecx
  int (__stdcall ***v18)(_DWORD, void *, int *); // eax
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  bool IsWithinUsableArea; // al
  void *result; // eax
  int v24; // eax
  signed int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  char v28; // dl
  int v29; // [esp+18h] [ebp-20h] BYREF
  int v30; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v31; // [esp+20h] [ebp-18h]
  IUnknown *TileIndexMapClass; // [esp+24h] [ebp-14h]
  _DWORD v33[4]; // [esp+28h] [ebp-10h] BYREF
  IUnknown *aP4a; // [esp+44h] [ebp+Ch]
  IUnknown *aP4b; // [esp+44h] [ebp+Ch]

  *(_BYTE *)(this + 56) = 1; /*0x42c909*/
  CellClass::ClearOccupancyGrid((_DWORD *)this); /*0x42c90d*/
  v9 = this + 116; /*0x42c912*/
  v10 = 3; /*0x42c915*/
  do /*0x42c925*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9); /*0x42c91e*/
    v9 += 24; /*0x42c921*/
    --v10; /*0x42c924*/
  }
  while ( v10 ); /*0x42c925*/
  *(_DWORD *)(this + 60) = aP6; /*0x42c92f*/
  v31 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1->__pad_0); /*0x42c93d*/
  v12 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x42c95b*/
  if ( aP3 == -1 ) /*0x42c95d*/
    v14 = *(IUnknown **)((*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 132))(aP4) + 1460); /*0x42c96d*/
  else
    v14 = (IUnknown *)aP3; /*0x42c95f*/
  LOBYTE(ecx3) = *(_BYTE *)(aP4 + 140); /*0x42c973*/
  TileIndexMapClass = (IUnknown *)MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)aP1, v14, ecx3); /*0x42c98d*/
  if ( aP3 == -1 ) /*0x42c991*/
    aP6 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 132))(aP4) + 1460); /*0x42c9a9*/
  else
    aP6 = aP3; /*0x42c993*/
  v15 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2) + 80) >> 8); /*0x42c9ca*/
  LOBYTE(v15) = (unsigned __int8)v15 & 1; /*0x42c9cd*/
  TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)a2, (IUnknown *)aP6, v15); /*0x42c9d7*/
  aP4a = (IUnknown *)TileIndex; /*0x42c9e0*/
  LOBYTE(TileIndex) = *(_BYTE *)(aP4 + 140); /*0x42c9e4*/
  v30 = *Pathfinding::CrossBridge(&aP6, (int)v31, TileIndex); /*0x42ca01*/
  v17 = (unsigned int)v12->field_140 >> 8; /*0x42ca0b*/
  LOBYTE(v17) = v17 & 1; /*0x42ca0e*/
  v29 = *Pathfinding::CrossBridge(&aP6, (int)v12, v17); /*0x42ca23*/
  if ( aP3 == -1 ) /*0x42ca27*/
    aP3 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 132))(aP4) + 1460); /*0x42ca3f*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 44))(aP4) == 15 && *(_BYTE *)(*(_DWORD *)(aP4 + 1728) + 3476) ) /*0x42ca55*/
  {
    v18 = *(int (__stdcall ****)(_DWORD, void *, int *))(aP4 + 1652); /*0x42ca5f*/
    v19 = 0; /*0x42ca65*/
    aP3 = 7; /*0x42ca69*/
    if ( !v18 ) /*0x42ca71*/
      goto LABEL_18; /*0x42ca71*/
    v20 = (**v18)(v18, &unk_818858, &aP6); /*0x42ca80*/
    LOBYTE(v19) = v20 < 0; /*0x42ca88*/
    v21 = aP6 & (v19 - 1); /*0x42ca8c*/
    if ( v20 < 0 && v20 != -2147467262 ) /*0x42ca97*/
      WinAPI::Wrapper(v20); /*0x42ca9a*/
    if ( !v21 ) /*0x42caa1*/
LABEL_18:
      WinAPI::Wrapper(-2147467261); /*0x42caa8*/
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v21 + 12))(v21, v33); /*0x42cab5*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21); /*0x42cabf*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 132))(aP4) + 3220) /*0x42cb1b*/
    || !*(_BYTE *)(aP4 + 981)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)aP4 + 800))(aP4)
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v30, (TechnoClass *)1)
    || (IsWithinUsableArea = LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v29, (TechnoClass *)1),
        LOBYTE(aP6) = 1,
        !IsWithinUsableArea) )
  {
    LOBYTE(aP6) = 0; /*0x42cb1d*/
  }
  if ( TileIndexMapClass == aP4a ) /*0x42cb30*/
  {
    if ( (_BYTE)aP6 /*0x42cb58*/
      && !Pathfinding::AStar(
            (_DWORD *)this,
            (IUnknown *)&v30,
            (DynamicVectorClass_uint *)&v29,
            (DynamicVectorClass_uint *)aP3,
            (IUnknown *)aP4) )
    {
      Debug::Log(); /*0x42cb7e*/
      LOBYTE(aP6) = 0; /*0x42cb86*/
    }
  }
  else if ( (_BYTE)aP6 ) /*0x42cb34*/
  {
    return 0; /*0x42cb3f*/
  }
  aP4b = 0; /*0x42cb8f*/
  v24 = -(a6 != -1); /*0x42cb9a*/
  LOBYTE(v24) = v24 & 0xFC; /*0x42cb9c*/
  TileIndexMapClass = (IUnknown *)(v24 + 5); /*0x42cba1*/
  while ( 1 ) /*0x42cba5*/
  {
    if ( !(_BYTE)aP6 && v30 != v29 ) /*0x42cbc2*/
      Debug::Log(); /*0x42cbde*/
    result = (void *)BuildingClass::UpdatePowerAnimation( /*0x42cc02*/
                       this,
                       (IUnknown *)aP1,
                       (IUnknown *)a2,
                       aP4,
                       a5,
                       a6,
                       (DynamicVectorClass_uint *)aP6);
    v31 = result; /*0x42cc09*/
    if ( result || !(_BYTE)aP6 ) /*0x42cc19*/
      break; /*0x42cc19*/
    v25 = abs32(*(__int16 *)&aP1->__pad_0[2] - a2[1]); /*0x42cc31*/
    v26 = *(__int16 *)aP1->__pad_0 - *a2; /*0x42cc38*/
    v27 = (HIDWORD(v26) ^ v26) - HIDWORD(v26); /*0x42cc3b*/
    if ( v27 <= v25 ) /*0x42cc3f*/
      v27 = v25; /*0x42cc41*/
    if ( v27 > 1 ) /*0x42cc46*/
      Debug::Log(); /*0x42cc65*/
    aP4b = (IUnknown *)((char *)aP4b + 1); /*0x42cc75*/
    sub_42CCD0(this, aP4); /*0x42cc79*/
    CellClass::ClearOccupancyGrid((_DWORD *)this); /*0x42cc80*/
    v28 = *(_BYTE *)(this + 56); /*0x42cc85*/
    LOBYTE(aP6) = v28 != 0; /*0x42cc93*/
    if ( (int)aP4b >= (int)TileIndexMapClass /*0x42ccb3*/
      || v28
      && !Pathfinding::AStar(
            (_DWORD *)this,
            (IUnknown *)&v30,
            (DynamicVectorClass_uint *)&v29,
            (DynamicVectorClass_uint *)aP3,
            (IUnknown *)aP4) )
    {
      return v31; /*0x42ccc0*/
    }
  }
  return result; /*0x42cb36*/
}


// ==== 0x0042CCD0  ObjectClass::method_42CCD0  this=DynamicVectorClass_uint  sig=csp ====
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
  v20 = MEMORY[0x87F858] + 10 * CellToTileIndexMap((int *)&MEMORY[0x87F7E8], (__int16 *)(this + 112)); /*0x42ccfc*/
  while ( 1 ) /*0x42cd12*/
  {
    v5 = *(_WORD *)(v20 + 2 * v3); /*0x42cd12*/
    WordVector::Constructor(&v22, 0, 0); /*0x42cd16*/
    v22 = &vt_DynamicVectorClass_unsigned_short_7E3844; /*0x42cd1f*/
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
    v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v6); /*0x42cd75*/
    if ( CheckMapReachability(&MEMORY[0x87F7E8], (int)v7, v3, (int)&v22, a2) ) /*0x42cd80*/
    {
      v8 = CellToTileIndexMap((int *)&MEMORY[0x87F7E8], v6); /*0x42cd8f*/
      sub_42CF80((_BYTE *)this, *(unsigned __int16 *)(MEMORY[0x87F858] + 10 * v8 + 2 * v3), v3); /*0x42cdac*/
      v9 = Block; /*0x42cdb1*/
      v22 = &vt_VectorClass_unsigned_short_7E3824; /*0x42cdb9*/
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
      v22 = &vt_VectorClass_unsigned_short_7E3824; /*0x42ce64*/
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
void __thiscall sub_42CF80(_BYTE *this, int a2, IUnknown *aP2)
{
  IUnknown *v3; // esi
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

  v3 = aP2; /*0x42cf86*/
  v5 = *((_DWORD *)this + (_DWORD)aP2 + 797); /*0x42cf8d*/
  if ( v5 > 1 ) /*0x42cf97*/
  {
    v6 = 0; /*0x42cfa7*/
    for ( i = (unsigned __int16 *)(this + 1000 * (_DWORD)aP2 + 188); *i != a2; ++i ) /*0x42cfba*/
    {
      if ( ++v6 >= v5 ) /*0x42cfd0*/
      {
        this->attachedBomb = 0; /*0x42cfd3*/
        return; /*0x42cfdd*/
      }
    }
    if ( v6 == -1 ) /*0x42cfe3*/
    {
      this->attachedBomb = 0; /*0x42cfe6*/
    }
    else
    {
      if ( v6 == v5 - 1 ) /*0x42cffc*/
      {
        v8 = v6 + 500 * (_DWORD)aP2; /*0x42d001*/
        LOWORD(v9) = *((_WORD *)this + v8 + 94); /*0x42d004*/
        LOWORD(aP2) = *((_WORD *)this + v8 + 93); /*0x42d014*/
      }
      else
      {
        v10 = v6 + 500 * (_DWORD)aP2; /*0x42d01e*/
        LOWORD(v9) = *((_WORD *)this + v10 + 95); /*0x42d029*/
        LOWORD(aP2) = *((_WORD *)this + v10 + 94); /*0x42d031*/
      }
      v9 = (unsigned __int16)v9; /*0x42d03a*/
      v11 = (unsigned __int16)aP2; /*0x42d040*/
      v12 = v9; /*0x42d046*/
      v27 = (unsigned __int16)aP2; /*0x42d04a*/
      if ( (unsigned __int16)aP2 != (unsigned __int16)v9 ) /*0x42d04e*/
      {
        if ( (unsigned __int16)aP2 < (unsigned int)(unsigned __int16)v9 ) /*0x42d050*/
        {
          v11 = (unsigned __int16)v9; /*0x42d054*/
          v12 = (unsigned __int16)aP2; /*0x42d056*/
        }
        a2 = v11 | (v12 << 16); /*0x42d060*/
        sub_42D830((_DWORD *)this + 6 * (_DWORD)v3 + 29, &a2); /*0x42d06d*/
      }
      v13 = 24 * (_DWORD)v3; /*0x42d079*/
      v14 = MEMORY[0x87F878][6 * (_DWORD)v3]; /*0x42d082*/
      v15 = v14 + 36 * (unsigned __int16)v9; /*0x42d088*/
      v31 = v15; /*0x42d08e*/
      a2 = v14 + 36 * v27; /*0x42d092*/
      v16 = *(_DWORD *)(v15 + 16) - 1; /*0x42d099*/
      for ( j = v16; v16 >= 0; j = v16 ) /*0x42d09e*/
      {
        if ( *(_WORD *)(*(_DWORD *)(v15 + 4) + 8 * v16) != (_WORD)aP2 ) /*0x42d0b0*/
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
                  v23 = *(_DWORD *)(this + v13 + 124); /*0x42d107*/
                  if ( *(_DWORD *)(this + v13 + 132) < v23 /*0x42d129*/
                    || (*(this + v13 + 129) || !v23)
                    && (v24 = *(_DWORD *)(this + v13 + 136), v24 > 0)
                    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)(this + v13 + 116) + 8))(
                         this + v13 + 116,
                         v23 + v24,
                         0) )
                  {
                    v25 = *(_DWORD *)(this + v13 + 132); /*0x42d130*/
                    v26 = *(_DWORD *)(this + v13 + 120); /*0x42d133*/
                    *(_DWORD *)(this + v13 + 132) = v25 + 1; /*0x42d139*/
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
    this->attachedBomb = 0; /*0x42cf9a*/
  }
}


// ==== 0x0042D170  Pathfinding::CalcDistance  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall Pathfinding::CalcDistance(
        int this,
        IUnknown *aP1,
        IUnknown *aP2,
        TechnoClass *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        signed int a7)
{
  int v8; // esi
  int v9; // edi
  MouseClass *v10; // eax
  IUnknown *v11; // esi
  MouseClass *v12; // edi
  void *v13; // ebp
  int v14; // ecx
  DynamicVectorClass_uint *v15; // eax
  IUnknown *v16; // edi
  DynamicVectorClass_uint *v17; // edi
  signed int v18; // ecx
  __int64 v19; // rax
  int v20; // ebp
  int RegionMap; // edi
  IUnknown *v22; // ecx
  __int16 v23; // ax
  __int16 v24; // dx
  signed int v25; // edi
  __int64 v26; // rax
  signed int v27; // eax
  IUnknown *v28; // ecx
  __int16 v29; // ax
  __int16 v30; // dx
  signed int v31; // esi
  __int64 v32; // rax
  signed int v33; // eax
  int result; // eax
  IUnknown *v35; // [esp+10h] [ebp-8h] BYREF
  IUnknown *v36; // [esp+14h] [ebp-4h] BYREF

  *(_BYTE *)(this + 56) = 1; /*0x42d179*/
  CellClass::ClearOccupancyGrid((_DWORD *)this); /*0x42d17d*/
  v8 = this + 116; /*0x42d182*/
  v9 = 3; /*0x42d185*/
  do /*0x42d195*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8); /*0x42d18e*/
    v8 += 24; /*0x42d191*/
    --v9; /*0x42d194*/
  }
  while ( v9 ); /*0x42d195*/
  v10 = (MouseClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1); /*0x42d1a1*/
  v11 = aP2; /*0x42d1a6*/
  v12 = v10; /*0x42d1b0*/
  v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP2); /*0x42d1bb*/
  v36 = (IUnknown *)*Pathfinding::CrossBridge((int *)&aP2, (int)v12, (int)aP4); /*0x42d1d9*/
  v14 = *Pathfinding::CrossBridge((int *)&aP2, (int)v13, (int)aP5); /*0x42d1e9*/
  v15 = (DynamicVectorClass_uint *)a7; /*0x42d1eb*/
  v16 = (IUnknown *)aP3; /*0x42d1ef*/
  v35 = (IUnknown *)v14; /*0x42d1f6*/
  if ( a7 == -1 ) /*0x42d1fa*/
  {
    if ( aP3 ) /*0x42d1fe*/
      v15 = *(DynamicVectorClass_uint **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP3->__pad_0 + 132))(aP3) /*0x42d20a*/
                                        + 1460);
    else
      v15 = 0; /*0x42d212*/
  }
  if ( Pathfinding::AStar((_DWORD *)this, (IUnknown *)&v36, (DynamicVectorClass_uint *)&v35, v15, v16) ) /*0x42d222*/
  {
    v17 = (DynamicVectorClass_uint *)aP1; /*0x42d22f*/
    v18 = abs32(SHIWORD(aP1->field_0) - SHIWORD(v11->field_0)); /*0x42d245*/
    v19 = SLOWORD(aP1->field_0) - SLOWORD(v11->field_0); /*0x42d24c*/
    a7 = (HIDWORD(v19) ^ v19) - HIDWORD(v19); /*0x42d253*/
    if ( a7 <= v18 ) /*0x42d257*/
      a7 = v18; /*0x42d259*/
    v20 = *(_DWORD *)(this + 3188); /*0x42d25d*/
    aP2 = (IUnknown *)(2 * v20 - 2); /*0x42d267*/
    if ( !(_BYTE)aP5 ) /*0x42d271*/
      goto LABEL_27; /*0x42d271*/
    if ( (_BYTE)aP4 ) /*0x42d27d*/
    {
      RegionMap = GetRegionMap((int *)&MEMORY[0x87F7E8], v11, 3, 0); /*0x42d29c*/
      if ( RegionMap == GetRegionMap((int *)&MEMORY[0x87F7E8], aP1, 3, 0) && RegionMap != -1 ) /*0x42d2aa*/
        return a7; /*0x42d44f*/
      v17 = (DynamicVectorClass_uint *)aP1; /*0x42d2b0*/
    }
    if ( v20 < 4 ) /*0x42d2b7*/
      goto LABEL_18; /*0x42d2b7*/
    v22 = (IUnknown *)*Pathfinding::CheckCliff( /*0x42d2d6*/
                         (int *)&MEMORY[0x87F7E8],
                         &aP5,
                         (__int16 *)v11,
                         0,
                         (MouseClass *)*(unsigned __int16 *)(this + 2 * v20 + 184));
    v23 = word_89C278; /*0x42d2d8*/
    aP5 = v22; /*0x42d2e0*/
    if ( (_WORD)v22 != word_89C278 ) /*0x42d2e4*/
    {
LABEL_24:
      v25 = abs32(SHIWORD(v11->field_0) - SHIWORD(aP5)); /*0x42d343*/
      v26 = SLOWORD(v11->field_0) - (__int16)v22; /*0x42d35d*/
      v27 = (HIDWORD(v26) ^ v26) - HIDWORD(v26); /*0x42d360*/
      if ( v27 <= v25 ) /*0x42d364*/
        v27 = v25; /*0x42d366*/
      v17 = (DynamicVectorClass_uint *)aP1; /*0x42d36c*/
      aP2 = (IUnknown *)((char *)aP2 + v27); /*0x42d372*/
LABEL_27:
      if ( !(_BYTE)aP4 ) /*0x42d37c*/
        goto LABEL_40; /*0x42d37c*/
      if ( v20 < 4 ) /*0x42d385*/
        goto LABEL_31; /*0x42d385*/
      v28 = (IUnknown *)*Pathfinding::CheckCliff( /*0x42d3a3*/
                           (int *)&MEMORY[0x87F7E8],
                           &aP1,
                           (__int16 *)v17->__pad_0,
                           0,
                           (MouseClass *)*(unsigned __int16 *)(this + 190));
      v29 = word_89C278; /*0x42d3a5*/
      aP1 = v28; /*0x42d3ad*/
      if ( (_WORD)v28 != word_89C278 ) /*0x42d3b1*/
        goto LABEL_37; /*0x42d3b1*/
      v30 = unk_89C27A; /*0x42d3b3*/
      if ( HIWORD(aP1) == unk_89C27A ) /*0x42d3bf*/
      {
LABEL_31:
        v28 = (IUnknown *)*Pathfinding::CheckCliff( /*0x42d3dd*/
                             (int *)&MEMORY[0x87F7E8],
                             &aP1,
                             (__int16 *)v17->__pad_0,
                             0,
                             (MouseClass *)*(unsigned __int16 *)(this + 188));
        v29 = word_89C278; /*0x42d3df*/
        v30 = unk_89C27A; /*0x42d3e4*/
        aP1 = v28; /*0x42d3eb*/
      }
      if ( (_WORD)v28 == v29 ) /*0x42d3f2*/
      {
        if ( HIWORD(aP1) == v30 ) /*0x42d3f9*/
        {
          LOWORD(v28) = (_WORD)v36; /*0x42d3fb*/
          aP1 = v36; /*0x42d3ff*/
        }
        if ( (_WORD)v28 == v29 && HIWORD(aP1) == v30 ) /*0x42d40d*/
        {
LABEL_40:
          result = (int)aP2; /*0x42d438*/
          if ( (int)aP2 > a7 ) /*0x42d442*/
            return result; /*0x42d442*/
          return a7; /*0x42d442*/
        }
      }
LABEL_37:
      v31 = abs32(*(__int16 *)&v17->__pad_0[2] - SHIWORD(aP1)); /*0x42d40f*/
      v32 = *(__int16 *)v17->__pad_0 - (__int16)v28; /*0x42d429*/
      v33 = (HIDWORD(v32) ^ v32) - HIDWORD(v32); /*0x42d42c*/
      if ( v33 <= v31 ) /*0x42d430*/
        v33 = v31; /*0x42d432*/
      aP2 = (IUnknown *)((char *)aP2 + v33); /*0x42d434*/
      goto LABEL_40; /*0x42d434*/
    }
    v24 = unk_89C27A; /*0x42d2e6*/
    if ( HIWORD(aP5) == unk_89C27A ) /*0x42d2f2*/
    {
LABEL_18:
      v22 = (IUnknown *)*Pathfinding::CheckCliff( /*0x42d311*/
                           (int *)&MEMORY[0x87F7E8],
                           &aP5,
                           (__int16 *)v11,
                           0,
                           (MouseClass *)*(unsigned __int16 *)(this + 2 * v20 + 186));
      v23 = word_89C278; /*0x42d313*/
      v24 = unk_89C27A; /*0x42d318*/
      aP5 = v22; /*0x42d31f*/
    }
    if ( (_WORD)v22 == v23 ) /*0x42d326*/
    {
      if ( HIWORD(aP5) == v24 ) /*0x42d32d*/
      {
        LOWORD(v22) = (_WORD)v35; /*0x42d32f*/
        aP5 = v35; /*0x42d333*/
      }
      if ( (_WORD)v22 == v23 && HIWORD(aP5) == v24 ) /*0x42d341*/
        goto LABEL_27; /*0x42d341*/
    }
    goto LABEL_24; /*0x42d341*/
  }
  return 0x7FFFFFFF; /*0x42d448*/
}


// ==== 0x0042D470  CellStruct::Set  this=CellStruct  sig=csp ====
_WORD *__thiscall CellStruct::Set(rc_ptr_base *this, __int16 a2, __int16 a3)
{
  LOWORD(this->vfptr) = a2; /*0x42d47c*/
  HIWORD(this->vfptr) = a3; /*0x42d47f*/
  return this; /*0x42d483*/
}


// ==== 0x0042D490  GetCellNeighborCoord  this=-  sig=csp ====
_DWORD *__fastcall Cell_GetNeighborCoord(_DWORD *a1, __int16 *a2, int a3)
{
  int v4; // eax
  __int16 v6; // ax
  int v7; // [esp+8h] [ebp+4h]

  if ( a3 == 8 ) /*0x42d49a*/
  {
    v4 = *((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2) + 139); /*0x42d4a7*/
    if ( v4 == -1 ) /*0x42d4b1*/
      *a1 = 0; /*0x42d4d7*/
    else
      *a1 = *(_DWORD *)(*((_DWORD *)MEMORY[0x8B413C] + v4) + 40); /*0x42d4bf*/
    return a1; /*0x42d4c1*/
  }
  else
  {
    v6 = HIWORD(MEMORY[0x89F688][a3]); /*0x42d4ea*/
    LOWORD(v7) = LOWORD(MEMORY[0x89F688][a3]) + *a2; /*0x42d4f6*/
    HIWORD(v7) = a2[1] + v6; /*0x42d4fb*/
    *a1 = v7; /*0x42d504*/
    return a1; /*0x42d506*/
  }
}


// ==== 0x0042D510  CellStruct::Add  this=AbstractClass  sig=csp ====
IUnknown *__thiscall CellStruct::Add(_WORD *this, IUnknown *aP1, IUnknown *aP2)
{
  __int16 v3; // dx
  IUnknown *aP2a; // [esp+8h] [ebp+8h]

  v3 = *this + LOWORD(aP2->field_0); /*0x42d51f*/
  HIWORD(aP2a) = this->vtable2 + HIWORD(aP2->field_0); /*0x42d522*/
  LOWORD(aP2a) = v3; /*0x42d52b*/
  aP1->field_0 = (int)aP2a; /*0x42d534*/
  return aP1; /*0x42d536*/
}


// ==== 0x0042D540  _DynamicVectorClass_I::ddtor  this=DynamicVectorClass_uint  sig=csp ====
void __thiscall DynamicVectorClass_uint::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x42d546*/
  *(_DWORD *)(this + 16) = 0; /*0x42d549*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x42d550*/
  {
    __3_YAXPAX_Z(v2); /*0x42d556*/
    *(_DWORD *)(this + 4) = 0; /*0x42d55e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42d561*/
  *(_DWORD *)(this + 8) = 0; /*0x42d564*/
}


// ==== 0x0042D570  _DynamicVectorClass_I::GetIndex  this=DynamicVectorClass_uint  sig=csp ====
unsigned int __thiscall SortedArray_GetIndex(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x42d570*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x42d585*/
  else
    return 0; /*0x42d577*/
}


// ==== 0x0042D590  _VectorClass_I::Clear  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_uint::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x42d59a*/
}


// ==== 0x0042D5A0  _DynamicVectorClass_G::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ushort::sub_42D5A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x42d5a6*/
  *(_DWORD *)(this + 16) = 0; /*0x42d5a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x42d5b0*/
  {
    __3_YAXPAX_Z(v2); /*0x42d5b6*/
    *(_DWORD *)(this + 4) = 0; /*0x42d5be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42d5c1*/
  *(_DWORD *)(this + 8) = 0; /*0x42d5c4*/
}


// ==== 0x0042D5D0  _DynamicVectorClass_G::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ushort::sub_42D5D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x42d5d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 1; /*0x42d5e5*/
  else
    return 0; /*0x42d5d7*/
}


// ==== 0x0042D5F0  _VectorClass_G::Clear  this=VectorClass_ushort  sig=csp ====
__int16 __thiscall VectorClass_ushort::_vt06(_DWORD *this, int a2)
{
  return *(_WORD *)(this->Items + 2 * a2); /*0x42d5fb*/
}


// ==== 0x0042D600  _VectorClass_I::AddRef  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_uint::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x42d602*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x42d60d*/
  {
    v3 = 0; /*0x42d60f*/
    if ( v2 <= 0 ) /*0x42d613*/
      return 1; /*0x42d633*/
    v4 = (_DWORD *)this->Items; /*0x42d615*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42d61b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x42d624*/
    {
      ++v3; /*0x42d626*/
      ++v4; /*0x42d627*/
      if ( v3 >= v2 ) /*0x42d62c*/
        return 1; /*0x42d62c*/
    }
  }
  return 0; /*0x42d62e*/
}


// ==== 0x0042D640  _VectorClass_I::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_uint::sub_42D640(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x42d64c*/
  {
    this->IsInitialized = 0; /*0x42d656*/
    if ( a3 ) /*0x42d65c*/
      v4 = a3; /*0x42d672*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42d66e*/
    this->IsInitialized = 1; /*0x42d676*/
    if ( v4 ) /*0x42d67a*/
    {
      if ( this->Items ) /*0x42d685*/
      {
        v6 = this->Capacity; /*0x42d68c*/
        if ( a2 < v6 ) /*0x42d691*/
          v6 = a2; /*0x42d693*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x42d699*/
          ++i; /*0x42d69e*/
        if ( this->IsAllocated ) /*0x42d6ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x42d6b6*/
          this->Items = 0; /*0x42d6be*/
        }
      }
      this->Items = v4; /*0x42d6c7*/
      this->Capacity = a2; /*0x42d6cf*/
      this->IsAllocated = a3 == 0; /*0x42d6d2*/
      return 1; /*0x42d6d8*/
    }
    else
    {
      return 0; /*0x42d67f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42d6e2*/
    return 1; /*0x42d6e8*/
  }
}


// ==== 0x0042D6F0  _VectorClass_I::Clear_0  this=VectorClass  sig=csp ====
void __thiscall DynamicVectorClass_uint::sub_42D6F0(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x42d6fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x42d703*/
    *(_DWORD *)(this + 4) = 0; /*0x42d70b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42d70e*/
  *(_DWORD *)(this + 8) = 0; /*0x42d711*/
}


// ==== 0x0042D720  _VectorClass_I::FindItemIndex  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_uint::sub_42D720(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x42d720*/
    return 0; /*0x42d728*/
  v3 = *(_DWORD *)(this + 8); /*0x42d72e*/
  result = 0; /*0x42d731*/
  if ( v3 <= 0 ) /*0x42d735*/
    return -1; /*0x42d74c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x42d73b*/
  {
    if ( ++result >= v3 ) /*0x42d74a*/
      return -1; /*0x42d74a*/
  }
  return result; /*0x42d72a*/
}


// ==== 0x0042D760  _VectorClass_I::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall DynamicVectorClass_uint::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x42d760*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x42d775*/
  else
    return 0; /*0x42d767*/
}


// ==== 0x0042D780  _DynamicVectorClass_I::Remove  this=DynamicVectorClass_uint  sig=csp ====
char __thiscall DynamicVectorClass_uint::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42d78c*/
  {
    this->IsInitialized = 0; /*0x42d792*/
    if ( a3 ) /*0x42d798*/
      v4 = a3; /*0x42d7ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42d7aa*/
    this->IsInitialized = 1; /*0x42d7b2*/
    if ( !v4 ) /*0x42d7b6*/
      return 0; /*0x42d82a*/
    if ( this->Items ) /*0x42d7b8*/
    {
      v5 = this->Capacity; /*0x42d7bf*/
      if ( a2 < v5 ) /*0x42d7c4*/
        v5 = a2; /*0x42d7c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x42d7cc*/
        ++i; /*0x42d7d1*/
      if ( this->IsAllocated ) /*0x42d7de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x42d7e9*/
        this->Items = 0; /*0x42d7f1*/
      }
    }
    this->Items = v4; /*0x42d7fa*/
    this->Capacity = a2; /*0x42d802*/
    this->IsAllocated = a3 == 0; /*0x42d805*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42d80e*/
  }
  v7 = this->Capacity; /*0x42d811*/
  if ( v7 < this->Items ) /*0x42d819*/
    this->Items = v7; /*0x42d81b*/
  return 1; /*0x42d81e*/
}


// ==== 0x0042D830  ObjectClass::method_42D830  this=ObjectClass  sig=csp ====
char __thiscall sub_42D830(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->vtable3; /*0x42d833*/
  if ( this->uniqueId >= v3 ) /*0x42d83b*/
  {
    if ( !this->attachedTag && v3 ) /*0x42d846*/
      return 0; /*0x42d846*/
    v4 = this->abstractFlags; /*0x42d848*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x42d858*/
      return 0; /*0x42d85f*/
  }
  v6 = this->uniqueId; /*0x42d865*/
  v7 = this->vtable2; /*0x42d868*/
  this->uniqueId = v6 + 1; /*0x42d86e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x42d878*/
  return 1; /*0x42d861*/
}


// ==== 0x0042D880  _DynamicVectorClass_I::GetSize  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall DynamicVectorClass_uint::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x42d880*/
  result = 0; /*0x42d883*/
  if ( v2 <= 0 ) /*0x42d888*/
    return -1; /*0x42d89f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x42d88e*/
  {
    if ( ++result >= v2 ) /*0x42d89d*/
      return -1; /*0x42d89d*/
  }
  return result; /*0x42d8a2*/
}


// ==== 0x0042D8B0  _VectorClass_G::AddRef  this=VectorClass_ushort  sig=csp ====
char __thiscall VectorClass_ushort::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _WORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x42d8b1*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x42d8bc*/
  {
    v3 = 0; /*0x42d8be*/
    if ( v2 <= 0 ) /*0x42d8c2*/
      return 1; /*0x42d8e1*/
    v4 = (_WORD *)this->Items; /*0x42d8c4*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x42d8ca*/
    while ( *v4 == *(_WORD *)((char *)v4 + v5) ) /*0x42d8d3*/
    {
      ++v3; /*0x42d8d5*/
      ++v4; /*0x42d8d6*/
      if ( v3 >= v2 ) /*0x42d8db*/
        return 1; /*0x42d8db*/
    }
  }
  return 0; /*0x42d8dd*/
}


// ==== 0x0042D8F0  _VectorClass_G::Remove  this=VectorClass_ushort  sig=csp ====
char __thiscall VectorClass_ushort::Remove(void *this, int a2, _WORD *a3)
{
  _WORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x42d8fc*/
  {
    this->IsInitialized = 0; /*0x42d906*/
    if ( a3 ) /*0x42d90c*/
      v4 = a3; /*0x42d91f*/
    else
      v4 = __2_YAPAXI_Z(2 * a2); /*0x42d91b*/
    this->IsInitialized = 1; /*0x42d923*/
    if ( v4 ) /*0x42d927*/
    {
      if ( this->Items ) /*0x42d932*/
      {
        v6 = this->Capacity; /*0x42d939*/
        if ( a2 < v6 ) /*0x42d93e*/
          v6 = a2; /*0x42d940*/
        for ( i = 0; i < v6; v4[i - 1] = *(_WORD *)(this->Items + 2 * i - 2) ) /*0x42d946*/
          ++i; /*0x42d94b*/
        if ( this->IsAllocated ) /*0x42d95a*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x42d965*/
          this->Items = 0; /*0x42d96d*/
        }
      }
      this->Items = v4; /*0x42d976*/
      this->Capacity = a2; /*0x42d97e*/
      this->IsAllocated = a3 == 0; /*0x42d981*/
      return 1; /*0x42d987*/
    }
    else
    {
      return 0; /*0x42d92c*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42d991*/
    return 1; /*0x42d997*/
  }
}


// ==== 0x0042D9A0  _VectorClass_G::ddtor  this=VectorClass_ushort  sig=csp ====
void __thiscall VectorClass_ushort::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x42d9ad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x42d9b3*/
    *(_DWORD *)(this + 4) = 0; /*0x42d9bb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42d9be*/
  *(_DWORD *)(this + 8) = 0; /*0x42d9c1*/
}


// ==== 0x0042D9D0  _VectorClass_G::GetSize  this=VectorClass_ushort  sig=csp ====
int __thiscall VectorClass_ushort::_vt04(int this, _WORD *a2)
{
  int result; // eax
  int v3; // edx
  _WORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x42d9d0*/
    return 0; /*0x42d9d8*/
  v3 = *(_DWORD *)(this + 8); /*0x42d9de*/
  result = 0; /*0x42d9e1*/
  if ( v3 <= 0 ) /*0x42d9e5*/
    return -1; /*0x42d9fe*/
  for ( i = *(_WORD **)(this + 4); *i != *a2; ++i ) /*0x42d9eb*/
  {
    if ( ++result >= v3 ) /*0x42d9fc*/
      return -1; /*0x42d9fc*/
  }
  return result; /*0x42d9da*/
}


// ==== 0x0042DA10  _VectorClass_G::Get  this=VectorClass_ushort  sig=csp ====
unsigned int __thiscall VectorClass_ushort::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x42da10*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 1; /*0x42da25*/
  else
    return 0; /*0x42da17*/
}


// ==== 0x0042DA30  _DynamicVectorClass_G::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ushort::sub_42DA30(void *this, int a2, _WORD *a3)
{
  _WORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42da3c*/
  {
    this->IsInitialized = 0; /*0x42da42*/
    if ( a3 ) /*0x42da48*/
      v4 = a3; /*0x42da5b*/
    else
      v4 = __2_YAPAXI_Z(2 * a2); /*0x42da57*/
    this->IsInitialized = 1; /*0x42da5f*/
    if ( !v4 ) /*0x42da63*/
      return 0; /*0x42dad9*/
    if ( this->Items ) /*0x42da65*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x42da6c*/
      if ( a2 < v5 ) /*0x42da71*/
        v5 = a2; /*0x42da73*/
      for ( i = 0; i < v5; v4[i - 1] = *(_WORD *)(this->Items + 2 * i - 2) ) /*0x42da79*/
        ++i; /*0x42da7e*/
      if ( this->IsAllocated ) /*0x42da8d*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x42da98*/
        this->Items = 0; /*0x42daa0*/
      }
    }
    this->Items = v4; /*0x42daa9*/
    this->DynamicVector_field_0x8 = a2; /*0x42dab1*/
    this->IsAllocated = a3 == 0; /*0x42dab4*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42dabd*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x42dac0*/
  if ( v7 < this->Items ) /*0x42dac8*/
    this->Items = v7; /*0x42daca*/
  return 1; /*0x42dacd*/
}


// ==== 0x0042DAE0  _DynamicVectorClass_G::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ushort::sub_42DAE0(int *this, _WORD *a2)
{
  int v2; // edx
  int result; // eax
  _WORD *i; // ecx

  v2 = this->Items; /*0x42dae0*/
  result = 0; /*0x42dae3*/
  if ( v2 <= 0 ) /*0x42dae8*/
    return -1; /*0x42db01*/
  for ( i = (_WORD *)this->Items; *i != *a2; ++i ) /*0x42daee*/
  {
    if ( ++result >= v2 ) /*0x42daff*/
      return -1; /*0x42daff*/
  }
  return result; /*0x42db04*/
}


// ==== 0x0042DB10  _VectorClass_I::Destructor  this=VectorClass  sig=csp ====
VectorClass *__thiscall DynamicVectorClass_uint::Destructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42db13*/
  *Block = &vt_VectorClass_unsigned_int; /*0x42db16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x42db20*/
  {
    __3_YAXPAX_Z(v3); /*0x42db28*/
    *(Block + 1) = 0; /*0x42db30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42db3b*/
  *(Block + 2) = 0; /*0x42db41*/
  if ( (a2 & 1) != 0 ) /*0x42db48*/
    __3_YAXPAX_Z(Block); /*0x42db4b*/
  return (VectorClass *)Block; /*0x42db55*/
}


// ==== 0x0042DB60  _DynamicVectorClass_I::Add  this=DynamicVectorClass_uint  sig=csp ====
DynamicVectorClass_uint *__thiscall DynamicVectorClass_uint::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42db63*/
  *Block = &vt_VectorClass_unsigned_int; /*0x42db66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x42db70*/
  {
    __3_YAXPAX_Z(v3); /*0x42db78*/
    *(Block + 1) = 0; /*0x42db80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42db8b*/
  *(Block + 2) = 0; /*0x42db91*/
  if ( (a2 & 1) != 0 ) /*0x42db98*/
    __3_YAXPAX_Z(Block); /*0x42db9b*/
  return (DynamicVectorClass_uint *)Block; /*0x42dba5*/
}


// ==== 0x0042DBB0  _VectorClass_G::Add  this=VectorClass_ushort  sig=csp ====
VectorClass_ushort *__thiscall VectorClass_ushort::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42dbb3*/
  *Block = &vt_VectorClass_unsigned_short_7E3824; /*0x42dbb6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x42dbc0*/
  {
    __3_YAXPAX_Z(v3); /*0x42dbc8*/
    *(Block + 1) = 0; /*0x42dbd0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42dbdb*/
  *(Block + 2) = 0; /*0x42dbe1*/
  if ( (a2 & 1) != 0 ) /*0x42dbe8*/
    __3_YAXPAX_Z(Block); /*0x42dbeb*/
  return (VectorClass_ushort *)Block; /*0x42dbf5*/
}


// ==== 0x0042DC00  _DynamicVectorClass_G::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ushort::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42dc03*/
  *Block = &vt_VectorClass_unsigned_short_7E3824; /*0x42dc06*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x42dc10*/
  {
    __3_YAXPAX_Z(v3); /*0x42dc18*/
    *(Block + 1) = 0; /*0x42dc20*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42dc2b*/
  *(Block + 2) = 0; /*0x42dc31*/
  if ( (a2 & 1) != 0 ) /*0x42dc38*/
    __3_YAXPAX_Z(Block); /*0x42dc3b*/
  return (DynamicVector *)Block; /*0x42dc45*/
}


// ==== 0x0042DC50  VectorClassUInt::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClassUInt::Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x42dc5b*/
  this->Capacity = a2; /*0x42dc5e*/
  this->q030 = 1; /*0x42dc61*/
  this->__pad_034 = 0; /*0x42dc65*/
  *this = &vt_VectorClass_unsigned_int; /*0x42dc68*/
  if ( a2 ) /*0x42dc6e*/
  {
    if ( a3 ) /*0x42dc76*/
    {
      this->Items = a3; /*0x42dc78*/
      return this; /*0x42dc7e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x42dc8d*/
    this->__pad_034 = 1; /*0x42dc90*/
  }
  return this; /*0x42dc7d*/
}


// ==== 0x0042DCA0  Pathfinding::SiftDown  this=Pathfinding  sig=csp ====
void __thiscall sub_42DCA0(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // edi

  v2 = a2; /*0x42dca5*/
  v3 = 2 * a2; /*0x42dcaa*/
  v4 = 2 * a2 + 1; /*0x42dcad*/
  if ( 2 * a2 > *this /*0x42dccb*/
    || *(float *)(*(_DWORD *)(this->q002 + 4 * a2) + 8) <= (double)*(float *)(*(_DWORD *)(this->q002 + 8 * a2) + 8) )
  {
    v3 = a2; /*0x42dccd*/
  }
  if ( v4 <= *this /*0x42dce9*/
    && *(float *)(*(_DWORD *)(this->q002 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->q002 + 4 * v4) + 8) )
  {
    v3 = 2 * a2 + 1; /*0x42dceb*/
  }
  if ( v3 != a2 ) /*0x42dcef*/
  {
    do /*0x42dd4f*/
    {
      v5 = this->q002; /*0x42dcf1*/
      v6 = 2 * v3 + 1; /*0x42dcf4*/
      v7 = *(_DWORD *)(v5 + 4 * v2); /*0x42dcfb*/
      *(_DWORD *)(v5 + 4 * v2) = *(_DWORD *)(v5 + 4 * v3); /*0x42dcfe*/
      v2 = v3; /*0x42dd04*/
      *(_DWORD *)(this->q002 + 4 * v3) = v7; /*0x42dd06*/
      if ( 2 * v3 <= *this /*0x42dd2b*/
        && *(float *)(*(_DWORD *)(this->q002 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->q002 + 8 * v3) + 8) )
      {
        v3 *= 2; /*0x42dd2d*/
      }
      if ( v6 <= *this /*0x42dd49*/
        && *(float *)(*(_DWORD *)(this->q002 + 4 * v3) + 8) > (double)*(float *)(*(_DWORD *)(this->q002 + 4 * v6) + 8) )
      {
        v3 = v6; /*0x42dd4b*/
      }
    }
    while ( v3 != v2 ); /*0x42dd4f*/
  }
}


// ==== 0x0042DD60  WordVector::Constructor  this=VectorClass_ushort  sig=csp ====
_DWORD *__thiscall WordVector::Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x42dd6b*/
  this->Capacity = a2; /*0x42dd6e*/
  this->IsInitialized = 1; /*0x42dd71*/
  this->IsAllocated = 0; /*0x42dd75*/
  *this = &vt_VectorClass_unsigned_short_7E3824; /*0x42dd78*/
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
  AbstractClass *v3; // ebp
  int v5; // esi
  Pipe *pad_14; // ebx
  BombClass *v7; // ecx
  int v8; // ecx
  Pipe *v9; // eax
  Pipe *v10; // eax
  Pipe *aP0; // [esp+8h] [ebp-Ch]
  Pipe *v13; // [esp+Ch] [ebp-8h]
  int Size; // [esp+10h] [ebp-4h]
  int Srca; // [esp+18h] [ebp+4h]

  v3 = (AbstractClass *)Src; /*0x42ddb4*/
  if ( !Src || a3 < 1 ) /*0x42ddc8*/
    return (int)Delegate::Dispatch(this, (Pipe *)Src, (Pipe *)a3); /*0x42df25*/
  v13 = 0; /*0x42ddd5*/
  if ( this->field_C ) /*0x42ddce*/
  {
    v5 = 4; /*0x42ddfb*/
    aP0 = (Pipe *)this->__pad_14; /*0x42de00*/
    pad_14 = (Pipe *)&this->field_18; /*0x42de04*/
    Srca = 3; /*0x42de07*/
  }
  else
  {
    v5 = 3; /*0x42dde2*/
    aP0 = (Pipe *)&this->field_18; /*0x42dde7*/
    pad_14 = (Pipe *)this->__pad_14; /*0x42ddeb*/
    Srca = 4; /*0x42ddee*/
  }
  v7 = (BombClass *)this->field_10; /*0x42de0f*/
  if ( (int)v7 > 0 ) /*0x42de14*/
  {
    Size = a3; /*0x42de24*/
    if ( a3 >= v5 - (int)v7 ) /*0x42de28*/
      Size = v5 - (_DWORD)v7; /*0x42de2a*/
    memcpy(&aP0->__pad_0[this->field_10], v3, Size); /*0x42de3e*/
    v8 = Size + this->field_10; /*0x42de4e*/
    v3 = (AbstractClass *)((char *)v3 + Size); /*0x42de55*/
    this->field_10 = v8; /*0x42de59*/
    a3 -= Size; /*0x42de5c*/
    if ( v8 == v5 ) /*0x42de60*/
    {
      if ( this->field_C ) /*0x42de62*/
        v9 = (Pipe *)DecodeBitmapRGB(aP0, (BombClass *)v5, pad_14, Srca); /*0x42de88*/
      else
        v9 = (Pipe *)EncodeBitmapRGB(aP0, v5, pad_14, Srca); /*0x42de75*/
      v13 = Delegate::Dispatch(this, pad_14, v9); /*0x42de96*/
      this->field_10 = 0; /*0x42de9a*/
    }
  }
  for ( ; a3 >= v5; a3 -= v5 ) /*0x42dea5*/
  {
    if ( this->field_C ) /*0x42dea7*/
      v10 = (Pipe *)DecodeBitmapRGB((Pipe *)v3, (BombClass *)v5, pad_14, Srca); /*0x42dec9*/
    else
      v10 = (Pipe *)EncodeBitmapRGB((Pipe *)v3, v5, pad_14, Srca); /*0x42deb8*/
    v3 = (AbstractClass *)((char *)v3 + v5); /*0x42ded2*/
    v13 = (Pipe *)((char *)v13 + (_DWORD)Delegate::Dispatch(this, pad_14, v10)); /*0x42dee5*/
  }
  if ( a3 > 0 ) /*0x42def9*/
  {
    memcpy(aP0, v3, a3); /*0x42df02*/
    this->field_10 = a3; /*0x42df0e*/
  }
  return (int)v13->__pad_0; /*0x42df15*/
}


// ==== 0x0042DF40  Base64Pipe::ProcessBitmapAndDispatch  this=Base64Pipe  sig=csp ====
int __thiscall Delegate::ProcessBitmapAndDispatch(Base64Pipe *this)
{
  Pipe *v2; // edi
  BombClass *v3; // edx
  Pipe *pad_14; // edi
  Pipe *v5; // eax

  v2 = 0; /*0x42df44*/
  v3 = (BombClass *)this->field_10; /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( this->field_C ) /*0x42df4d*/
    {
      pad_14 = (Pipe *)&this->field_18; /*0x42df64*/
      v5 = (Pipe *)DecodeBitmapRGB((Pipe *)this->__pad_14, v3, &this->field_18, 3); /*0x42df6d*/
    }
    else
    {
      pad_14 = (Pipe *)this->__pad_14; /*0x42df54*/
      v5 = (Pipe *)EncodeBitmapRGB((Pipe *)&this->field_18, (int)v3, this->__pad_14, 4); /*0x42df5d*/
    }
    v2 = Delegate::Dispatch(this, pad_14, v5); /*0x42df7b*/
    this->field_10 = 0; /*0x42df7d*/
  }
  return (int)&v2->__pad_0[GameClass::GetRelatedObject(this)]; /*0x42df8d*/
}


// ==== 0x0042DF90  Base64Straw::ProcessFrame  this=Base64Straw  sig=csp ====
size_t __thiscall BitmapClass::ProcessFrame(Base64Straw *this, char *a1, signed int Size)
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
  BlowStraw *v18; // [esp+18h] [ebp-4h]

  result = 0; /*0x42df98*/
  v16 = 0; /*0x42df9e*/
  if ( *((_DWORD *)this + 3) ) /*0x42df9b*/
  {
    v18 = (BlowStraw *)4; /*0x42dfc2*/
    v17 = this + 5; /*0x42dfca*/
    v6 = this + 6; /*0x42dfce*/
    v7 = 3; /*0x42dfd1*/
    v5 = this + 5; /*0x42dfd6*/
  }
  else
  {
    v5 = this + 6; /*0x42dfa6*/
    v18 = (BlowStraw *)3; /*0x42dfa9*/
    v17 = this + 6; /*0x42dfb1*/
    v6 = this + 5; /*0x42dfb5*/
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
        memcpy(a1, (char *)v6 + v7 - v9, v10); /*0x42e006*/
        this->q004 -= v10; /*0x42e018*/
        v11 = Size - v10; /*0x42e022*/
        v12 = &a1[v10]; /*0x42e024*/
        v13 = v10 + v16; /*0x42e026*/
        v5 = v17; /*0x42e028*/
        a1 = v12; /*0x42e02c*/
        Size = v11; /*0x42e030*/
        v16 = v13; /*0x42e034*/
        v8 = v11; /*0x42e038*/
      }
      if ( !v8 ) /*0x42e03c*/
        break; /*0x42e03c*/
      v14 = Delegate::Invoke(this, (int)v5, (Straw *)v18); /*0x42e04b*/
      v15 = *((_DWORD *)this + 3)
          ? DecodeBitmapRGB((unsigned __int8 *)v5, v14, v6, v7)
          : EncodeBitmapRGB((char *)v5, v14, v6, v7);
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
  unk_89C2E8 = 0; /*0x42e092*/
  unk_89C2EC = 0; /*0x42e097*/
  unk_89C2F0 = 0; /*0x42e09c*/
  unk_89C2F4 = 0; /*0x42e0a1*/
  return 0; /*0x42e0a6*/
}


// ==== 0x0042E150  ObjectClass::method_42E150  this=ObjectClass  sig=csp ====
int __usercall sub_42E150@<eax>(int result@<eax>, _DWORD *a2@<ecx>)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  _DWORD v6[4]; // [esp+0h] [ebp-10h] BYREF

  v2 = a2[6]; /*0x42e150*/
  if ( v2 ) /*0x42e158*/
  {
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x42e164*/
      v3 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v2); /*0x42e172*/
    else
      v3 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v2); /*0x42e17f*/
    v6[0] = *a2; /*0x42e186*/
    v6[1] = a2[1]; /*0x42e18d*/
    v4 = a2[2]; /*0x42e191*/
    v5 = a2[3]; /*0x42e194*/
    v6[2] = v4; /*0x42e197*/
    v6[3] = v5; /*0x42e19b*/
    return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 88))(MEMORY[0x887314], v6, v3); /*0x42e1ac*/
  }
  return result; /*0x42e1b0*/
}


// ==== 0x0042E1C0  ObjectClass::RenderTooltipBorder  this=ObjectClass  sig=csp ====
int __thiscall RenderTooltipBorder(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  bool v11; // cc
  int v12; // edi
  int v13; // edx
  bool v14; // zf
  int v15; // edx
  int v16; // eax
  int v17; // edi
  int v18; // edx
  int v19; // eax
  int v20; // ebp
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int result; // eax
  int v26; // ecx
  int v27; // [esp-4h] [ebp-34h]
  int v28; // [esp+10h] [ebp-20h]
  int v29; // [esp+14h] [ebp-1Ch]
  int v30; // [esp+18h] [ebp-18h]
  int v31; // [esp+1Ch] [ebp-14h]
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+20h] [ebp-10h] BYREF
  int v34; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  int v36; // [esp+2Ch] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x42e1d1*/
  v2 = *(_DWORD *)(this + 24); /*0x42e1d4*/
  if ( v2 ) /*0x42e1d9*/
  {
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x42e1e5*/
      v3 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v2); /*0x42e1f2*/
    else
      v3 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v2); /*0x42e1fe*/
    v27 = v3; /*0x42e20a*/
    v4 = *(_DWORD *)MEMORY[0x887314]; /*0x42e20e*/
    v5 = Rect::Set(&v33, *(_DWORD *)this, *(_DWORD *)(this + 4), *(_DWORD *)(this + 8), *(_DWORD *)(this + 12)); /*0x42e21d*/
    (*(void (__thiscall **)(int, _DWORD *, int))(v4 + 88))(MEMORY[0x887314], v5, v27); /*0x42e229*/
  }
  v6 = *(_DWORD *)(this + 8); /*0x42e22f*/
  v7 = *(_DWORD *)(this + 12); /*0x42e237*/
  v29 = *(_DWORD *)(this + 4); /*0x42e23a*/
  v8 = v6; /*0x42e23e*/
  v28 = *(_DWORD *)this; /*0x42e240*/
  v30 = v6; /*0x42e246*/
  v9 = v7; /*0x42e24a*/
  if ( *(_DWORD *)(this + 24) ) /*0x42e232*/
  {
    v8 = v6 - 2; /*0x42e254*/
    v28 = *(_DWORD *)this + 1; /*0x42e257*/
    ++v29; /*0x42e25b*/
    v30 = v6 - 2; /*0x42e25f*/
    v9 = v7 - 2; /*0x42e263*/
  }
  v31 = v8; /*0x42e268*/
  if ( v6 <= v7 ) /*0x42e26c*/
    v31 = v9; /*0x42e26e*/
  v10 = Math::RoundToInt((double)v31 * *(double *)(this + 32)); /*0x42e27e*/
  v32 = v10; /*0x42e282*/
  if ( v10 <= 0 ) /*0x42e286*/
  {
    v17 = v30; /*0x42e333*/
  }
  else
  {
    v11 = v6 <= v7; /*0x42e291*/
    v12 = *(_DWORD *)(this + 16); /*0x42e293*/
    v13 = *(_DWORD *)(MEMORY[0x87F6C4] + 4); /*0x42e296*/
    if ( v11 ) /*0x42e299*/
    {
      v14 = v13 == 1; /*0x42e2e6*/
      v18 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x42e2e9*/
      if ( v14 ) /*0x42e2ef*/
        v19 = *(unsigned __int8 *)(v18 + v12); /*0x42e2f3*/
      else
        v19 = *(unsigned __int16 *)(v18 + 2 * v12); /*0x42e2fa*/
      v17 = v30; /*0x42e302*/
      v33 = v28; /*0x42e306*/
      v34 = v29 + v10; /*0x42e311*/
      v35 = v30; /*0x42e31b*/
      v36 = v9; /*0x42e31f*/
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v33, v19); /*0x42e32a*/
      v10 = v32; /*0x42e32d*/
    }
    else
    {
      v14 = v13 == 1; /*0x42e29b*/
      v15 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x42e29e*/
      if ( v14 ) /*0x42e2a4*/
        v16 = *(unsigned __int8 *)(v15 + v12); /*0x42e2a8*/
      else
        v16 = *(unsigned __int16 *)(v15 + 2 * v12); /*0x42e2af*/
      v35 = v10; /*0x42e2b7*/
      v33 = v28; /*0x42e2c1*/
      v34 = v29; /*0x42e2ca*/
      v36 = v9; /*0x42e2ce*/
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v33, v16); /*0x42e2d9*/
      v17 = v30; /*0x42e2dc*/
      v10 = v32; /*0x42e2e0*/
    }
  }
  if ( v17 - v10 > 0 ) /*0x42e33d*/
  {
    if ( *(_DWORD *)(this + 8) <= *(_DWORD *)(this + 12) ) /*0x42e34b*/
    {
      v23 = *(_DWORD *)(this + 20); /*0x42e39e*/
      if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x42e3a5*/
        v24 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v23); /*0x42e3b2*/
      else
        v24 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v23); /*0x42e3be*/
      v33 = v28; /*0x42e3c7*/
      v36 = v10 - 1; /*0x42e3cf*/
      v34 = v29; /*0x42e3d9*/
      v35 = v17; /*0x42e3dd*/
      (*(void (__stdcall **)(int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(&v33, v24); /*0x42e3e9*/
    }
    else
    {
      v20 = *(_DWORD *)(this + 20); /*0x42e352*/
      v21 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x42e35b*/
      if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x42e361*/
        v22 = *(unsigned __int8 *)(v21 + v20); /*0x42e365*/
      else
        v22 = *(unsigned __int16 *)(v21 + 2 * v20); /*0x42e36c*/
      v35 = v17; /*0x42e374*/
      v36 = v9; /*0x42e37a*/
      v33 = v28 + v10; /*0x42e37e*/
      v34 = v29; /*0x42e386*/
      (*(void (__stdcall **)(int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(&v33, v22); /*0x42e397*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x42e3f4*/
  result = *(_DWORD *)(this + 32); /*0x42e3f7*/
  v26 = *(_DWORD *)(this + 36); /*0x42e3fa*/
  *(_DWORD *)(this + 40) = result; /*0x42e3fd*/
  *(_DWORD *)(this + 44) = v26; /*0x42e400*/
  *(_BYTE *)(this + 48) = 1; /*0x42e403*/
  return result; /*0x42e407*/
}


// ==== 0x0042E410  Rect::Set  this=AbstractClass  sig=csp ====
IUnknown *__thiscall Rect::Set(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3, IUnknown *aP4)
{
  *this = aP1; /*0x42e41a*/
  this->vtable2 = aP2; /*0x42e420*/
  this->vtable3 = aP3; /*0x42e427*/
  this->vtable4 = aP4; /*0x42e42a*/
  return (IUnknown *)this; /*0x42e42d*/
}


// ==== 0x0042E430  sub_42E430  this=-  sig=ida-proto ====
void sub_42E430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42e43c*/
  unk_89C318 = Math::Sqrt(v0 + v0); /*0x42e44e*/
}


// ==== 0x0042E460  sub_42E460  this=-  sig=ida-proto ====
void sub_42E460()
{
  unk_89C368 = unk_89C318 / 60.0; /*0x42e46c*/
}


// ==== 0x0042E480  sub_42E480  this=-  sig=ida-proto ====
void sub_42E480()
{
  unk_89C350 = 1.0 / unk_89C368; /*0x42e48c*/
}


// ==== 0x0042E4A0  sub_42E4A0  this=-  sig=ida-proto ====
void sub_42E4A0()
{
  unk_89C348 = 0.0174532925199433 * 45.0; /*0x42e4ac*/
}


// ==== 0x0042E4C0  sub_42E4C0  this=-  sig=ida-proto ====
void sub_42E4C0()
{
  unk_89C320 = 0.0174532925199433 * 60.0; /*0x42e4cc*/
}


// ==== 0x0042E4E0  sub_42E4E0  this=-  sig=ida-proto ====
void sub_42E4E0()
{
  unk_89C2F8 = 0.0174532925199433 * 90.0; /*0x42e4ec*/
}


// ==== 0x0042E500  sub_42E500  this=-  sig=ida-proto ====
__int64 sub_42E500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C2F8 - unk_89C320); /*0x42e512*/
  result = Math::RoundToInt(v0 * unk_89C318 * 0.5); /*0x42e526*/
  unk_89C370 = result; /*0x42e52b*/
  return result; /*0x42e530*/
}


// ==== 0x0042E540  sub_42E540  this=-  sig=ida-proto ====
void sub_42E540()
{
  unk_89C328 = Math::ArcTan((double)unk_89C370 * 0.00390625); /*0x42e557*/
}


// ==== 0x0042E570  sub_42E570  this=-  sig=ida-proto ====
void sub_42E570()
{
  unk_89C340 = Math::ArcTan((double)(2 * unk_89C370) / unk_89C318); /*0x42e592*/
}


// ==== 0x0042E5A0  sub_42E5A0  this=-  sig=ida-proto ====
__int64 sub_42E5A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C370) + 0.5); /*0x42e5bb*/
  unk_89C364 = result; /*0x42e5c0*/
  return result; /*0x42e5c6*/
}


// ==== 0x0042E5D0  sub_42E5D0  this=-  sig=ida-proto ====
int sub_42E5D0()
{
  unk_89C310 = 0; /*0x42e5d2*/
  return 0; /*0x42e5de*/
}


// ==== 0x0042E5E0  sub_42E5E0  this=-  sig=ida-proto ====
int sub_42E5E0()
{
  unk_89C330 = 0; /*0x42e5e2*/
  unk_89C334 = 0; /*0x42e5e7*/
  unk_89C338 = 0; /*0x42e5ec*/
  return 0; /*0x42e5f1*/
}


// ==== 0x0042E600  sub_42E600  this=-  sig=ida-proto ====
int sub_42E600()
{
  unk_89C360 = 0; /*0x42e605*/
  unk_89C358 = 128; /*0x42e60f*/
  unk_89C35C = 128; /*0x42e614*/
  return 128; /*0x42e619*/
}


// ==== 0x0042E620  sub_42E620  this=-  sig=ida-proto ====
int sub_42E620()
{
  unk_89C300 = 0; /*0x42e622*/
  unk_89C304 = 0; /*0x42e627*/
  unk_89C308 = 0; /*0x42e62c*/
  unk_89C30C = 0; /*0x42e631*/
  return 0; /*0x42e636*/
}


// ==== 0x0042E6C0  sub_42E6C0  this=-  sig=csp ====
char __stdcall sub_42E6C0(int a1)
{
  return 1; /*0x42e6c2*/
}


// ==== 0x0042E6D0  CellClass::setTileIndex  this=CellClass  sig=csp ====
__int16 __thiscall sub_42E6D0(_WORD *this, int a2)
{
  this->bridgeOwnerCell += a2; /*0x42e6da*/
  this->unknown30 += HIWORD(a2); /*0x42e6de*/
  return a2; /*0x42e6e2*/
}


// ==== 0x0042E6F0  BaseClass::Constructor  this=BaseClass  sig=csp ====
_DWORD *__thiscall BaseClass_Constructor(_DWORD *this)
{
  _DWORD *v2; // ebx

  v2 = this + 1; /*0x42e6f7*/
  BaseNodeClass::Vector_Constructor(0, 0); /*0x42e6fe*/
  *v2 = &vt_DynamicVectorClass_BaseNodeClass; /*0x42e703*/
  v2[5] = 10; /*0x42e709*/
  v2[4] = 0; /*0x42e710*/
  this->cells38 = 0; /*0x42e71a*/
  VectorClass::CellConstructor(this + 8, 0, 0); /*0x42e71d*/
  this->cells38Count = &vt_DynamicVectorClass_Cell; /*0x42e722*/
  this->q034 = 10; /*0x42e728*/
  this->q030 = 0; /*0x42e72f*/
  VectorClass::CellConstructor(this + 14, 0, 0); /*0x42e739*/
  this->q038 = &vt_DynamicVectorClass_Cell; /*0x42e73e*/
  this->owner = 10; /*0x42e744*/
  this->q048 = 0; /*0x42e74b*/
  this->center = 0; /*0x42e74e*/
  *((_WORD *)this + 41) = 0; /*0x42e752*/
  this->q054 = 0; /*0x42e756*/
  this->q058 = 0; /*0x42e759*/
  this->q05C = 0; /*0x42e75c*/
  this->q060 = 0; /*0x42e75f*/
  this->q064 = 0; /*0x42e762*/
  this->q068 = 0; /*0x42e765*/
  this->q06C = 0; /*0x42e768*/
  this->q070 = 0; /*0x42e76b*/
  this->q074 = 0; /*0x42e76e*/
  *this = &vt_BaseClass; /*0x42e771*/
  return this; /*0x42e779*/
}


// ==== 0x0042E780  BuildingQueue::IsCellSuitable  this=BuildingQueue  sig=csp ====
bool __thiscall BuildingQueue::IsCellSuitable(_DWORD *this, int a2)
{
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // eax

  if ( BridgeClass::GetCellData(this, a2) ) /*0x42e789*/
    return 1; /*0x42e796*/
  v4 = 16 * a2 + this->BuildingQueue_field_0x08; /*0x42e79f*/
  if ( *(int *)v4 < 0 ) /*0x42e7a7*/
    return 0; /*0x42e7a7*/
  v5 = *((_DWORD *)g_TriggerTypeCount + *(_DWORD *)v4); /*0x42e7af*/
  if ( !*(_BYTE *)(v5 + 5489) ) /*0x42e7b2*/
    return 0; /*0x42e7b2*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(v4 + 4)); /*0x42e7c5*/
  if ( v6[17] == *(_DWORD *)(*(_DWORD *)(v5 + 3668) + 660) ) /*0x42e7d9*/
    return 1; /*0x42e7df*/
  return Cell::IsBridge(v6) != 0; /*0x42e7ee*/
}


// ==== 0x0042E800  ObjectClass::method_42E800  this=ObjectClass  sig=csp ====
char __thiscall sub_42E800(_DWORD *this, int a2)
{
  return *(_BYTE *)(16 * a2 + this->vtable3 + 8); /*0x42e80e*/
}


// ==== 0x0042E820  BridgeClass::GetCellData  this=BridgeClass  sig=csp ====
_DWORD *__thiscall BridgeClass_GetCellData(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // ebp
  _DWORD *v6; // eax
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
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+24h] [ebp-4h]

  v3 = (int *)(16 * a2 + this->q008); /*0x42e833*/
  v20 = v3[1]; /*0x42e83b*/
  if ( !v20 ) /*0x42e83f*/
    return 0; /*0x42e83f*/
  v4 = *v3; /*0x42e84c*/
  if ( v4 < 0 ) /*0x42e850*/
    return 0; /*0x42e850*/
  v5 = *((_DWORD *)g_TriggerTypeCount + v4); /*0x42e861*/
  v21 = v5; /*0x42e869*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x42e86d*/
  v7 = Cell::IsBridge(v6); /*0x42e874*/
  v8 = v7; /*0x42e879*/
  if ( !v7 ) /*0x42e87d*/
    return 0; /*0x42e87d*/
  v9 = (_WORD *)(16 * a2 + this->q008 + 4); /*0x42e88a*/
  v10 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v7 + 440))(v7, &v19); /*0x42e893*/
  if ( *v10 != *v9 || v10[1] != v9[1] || v8[135] != this->q01D ) /*0x42e8be*/
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
    v16 = this->q008; /*0x42e90e*/
    do /*0x42e96a*/
    {
      if ( *(int *)v16 >= 0 && *((_DWORD *)g_TriggerTypeCount + *(_DWORD *)v16) == v21 ) /*0x42e924*/
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
bool __thiscall sub_42E990(_DWORD *this, _DWORD *a2)
{
  int v4; // esi
  int v5; // edi
  int v6; // edi
  _WORD *v7; // eax
  _BYTE v9[4]; // [esp+10h] [ebp-4h] BYREF
  int i; // [esp+18h] [ebp+4h]

  if ( a2[135] != this->isOnMap ) /*0x42e9a6*/
    return 0; /*0x42e9a6*/
  v4 = 0; /*0x42e9ab*/
  if ( (int)this->abstractFlags <= 0 ) /*0x42e9af*/
    return 0; /*0x42e9af*/
  v5 = 0; /*0x42e9b1*/
  for ( i = 0; ; i += 16 ) /*0x42e9b3*/
  {
    v6 = this->vtable3 + v5; /*0x42e9c0*/
    if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v6 ) /*0x42e9ca*/
    {
      v7 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 440))(a2, v9); /*0x42e9d6*/
      if ( *v7 == *(_WORD *)(v6 + 4) && v7[1] == *(_WORD *)(v6 + 6) ) /*0x42e9ed*/
        break; /*0x42e9ed*/
    }
    ++v4; /*0x42e9f6*/
    v5 = i + 16; /*0x42e9f7*/
    if ( v4 >= this->abstractFlags ) /*0x42ea00*/
      return 0; /*0x42ea00*/
  }
  return this->vtable3 + 16 * v4 != 0; /*0x42ea13*/
}


// ==== 0x0042EA30  ObjectClass::method_42EA30  this=ObjectClass  sig=csp ====
int __thiscall sub_42EA30(_DWORD *this, _DWORD *a2)
{
  int v4; // ebp
  int v5; // esi
  _WORD *v6; // eax
  _BYTE v8[4]; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+18h] [ebp+4h]

  if ( a2[135] != this->isOnMap ) /*0x42ea44*/
    return 0; /*0x42ea44*/
  v4 = 0; /*0x42ea49*/
  v9 = 0; /*0x42ea4d*/
  if ( (int)this->abstractFlags <= 0 ) /*0x42ea51*/
    return 0; /*0x42eab7*/
  while ( 1 ) /*0x42ea62*/
  {
    v5 = this->vtable3 + v4; /*0x42ea62*/
    if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v5 ) /*0x42ea6a*/
    {
      v6 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 440))(a2, v8); /*0x42ea75*/
      if ( *v6 == *(_WORD *)(v5 + 4) && v6[1] == *(_WORD *)(v5 + 6) ) /*0x42ea8c*/
        break; /*0x42ea8c*/
    }
    v4 += 16; /*0x42ea96*/
    if ( ++v9 >= this->abstractFlags ) /*0x42ea9f*/
      return 0; /*0x42ea9f*/
  }
  return this->vtable3 + 16 * v9; /*0x42eaaa*/
}


// ==== 0x0042EAD0  ObjectClass::method_42EAD0  this=ObjectClass  sig=csp ====
int __thiscall sub_42EAD0(int *this, _WORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  _WORD *i; // ecx

  v2 = this->abstractFlags; /*0x42ead0*/
  v3 = 0; /*0x42ead5*/
  if ( v2 <= 0 ) /*0x42eadb*/
    return 0; /*0x42eb0f*/
  v4 = this->vtable3; /*0x42eae1*/
  for ( i = (_WORD *)(v4 + 4); *a2 != *i || a2[1] != i[1]; i += 8 ) /*0x42eae7*/
  {
    if ( ++v3 >= v2 ) /*0x42eaff*/
      return 0; /*0x42eaff*/
  }
  return v4 + 16 * v3; /*0x42eb08*/
}


// ==== 0x0042EB20  BuildingQueue::AllocSlot  this=BuildingQueue  sig=csp ====
int __thiscall BuildingQueue_AllocSlot(_DWORD *this, int a2)
{
  int FreeSlot; // eax

  FreeSlot = BuildingQueue::FindFreeSlot(this, a2); /*0x42eb28*/
  if ( FreeSlot == -1 ) /*0x42eb30*/
    return 0; /*0x42eb3e*/
  else
    return this->BuildingQueue_field_0x08 + 16 * FreeSlot; /*0x42eb39*/
}


// ==== 0x0042EB50  BuildingQueue::FindFreeSlot  this=BuildingQueue  sig=csp ====
int __thiscall BuildingQueue_FindFreeSlot(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // ebx

  v3 = 0; /*0x42eb56*/
  if ( (int)this->q005 <= 0 ) /*0x42eb5d*/
    return -1; /*0x42ebc0*/
  v4 = 0; /*0x42eb63*/
  while ( a2 != -1 ) /*0x42eb68*/
  {
    if ( *(_DWORD *)(this->BuildingQueue_field_0x08 + v4) == a2 && !(unsigned __int8)BuildingQueue::IsCellSuitable(v3) ) /*0x42ebac*/
      return v3; /*0x42ebac*/
LABEL_11:
    ++v3; /*0x42ebae*/
    v4 += 16; /*0x42ebb2*/
    if ( v3 >= this->q005 ) /*0x42ebb7*/
      return -1; /*0x42ebb7*/
  }
  if ( (unsigned __int8)BuildingQueue::IsCellSuitable(v3) ) /*0x42eb6d*/
    goto LABEL_11; /*0x42eb6d*/
  if ( !MEMORY[0xA8B238][0] || !*(_BYTE *)(v4 + this->BuildingQueue_field_0x08 + 8) ) /*0x42eb84*/
    return v3; /*0x42eb89*/
  if ( !(unsigned __int8)TechnoClass::ProcessTarget(v4 + this->BuildingQueue_field_0x08) ) /*0x42eb8f*/
    goto LABEL_11; /*0x42eb96*/
  *(_DWORD *)(16 * v3 + this->BuildingQueue_field_0x08 + 4) = unk_89C310; /*0x42ebd1*/
  return v3; /*0x42ebb9*/
}


// ==== 0x0042EBE0  BuildingPrerequisiteClass::ReadNodeGraph  this=IUnknown  sig=csp ====
int __thiscall BuildingPrerequisiteClass::ReadNodeGraph(int *this, CCINIClass *aP1, unsigned __int8 *a2)
{
  INIClass *v4; // edi
  int result; // eax
  int *v6; // esi
  char *v7; // eax
  int IndexByName; // eax
  char *v9; // eax
  int v10; // ebp
  char *v11; // eax
  char *v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int v17; // [esp+Ch] [ebp-9Ch]
  CCINIClass *v18; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char Buffer[8]; // [esp+18h] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-88h]
  int v22; // [esp+24h] [ebp-84h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x42ebf4*/
  v4 = (INIClass *)a2; /*0x42ebfc*/
  this->q070 = INIClass::ReadInt_Overwrite( /*0x42ec1b*/
                  (int)aP1,
                  a2,
                  (CCINIClass *)&MEMORY[0x818994].headNode[2],
                  (INIClass *)this->q070);
  result = INIClass::ReadInt_Overwrite((int)aP1, a2, &MEMORY[0x818994], 0); /*0x42ec1e*/
  v19 = result; /*0x42ec25*/
  v17 = 0; /*0x42ec29*/
  if ( result > 0 ) /*0x42ec31*/
  {
    v6 = this + 1; /*0x42ec38*/
    while ( 1 ) /*0x42ec53*/
    {
      sprintf(Buffer, stru_81898C, v17); /*0x42ec53*/
      INIClass::GetString((unsigned __int8 ***)aP1, v4, (unsigned __int8 *)Buffer, 0, String, 128); /*0x42ec6f*/
      if ( String[0].__pad_0[0] == 45 ) /*0x42ec7f*/
      {
        v7 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x42ec86*/
        IndexByName = atoi(v7); /*0x42ec8c*/
      }
      else
      {
        v9 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x42ec9b*/
        IndexByName = BuildingTypeClass::FindIndexByName(v9); /*0x42eca5*/
      }
      v10 = IndexByName; /*0x42ecb1*/
      v11 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x42ecb3*/
      LOWORD(v18) = atoi(v11); /*0x42ecc5*/
      v12 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x42ecca*/
      HIWORD(v18) = atoi(v12); /*0x42ecd8*/
      v13 = v6[2]; /*0x42ecdd*/
      if ( v6[4] < v13 /*0x42ed06*/
        || (*((_BYTE *)v6 + 13) || !v13)
        && (v14 = v6[5], v14 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v6 + 8))(v6, v13 + v14, 0) )
      {
        v15 = v6[4]; /*0x42ed0d*/
        v6[4] = v15 + 1; /*0x42ed13*/
        v16 = (int *)(v6[1] + 16 * v15); /*0x42ed1c*/
        *v16 = v10; /*0x42ed1e*/
        v16[1] = (int)v18; /*0x42ed20*/
        v16[2] = v21; /*0x42ed27*/
        v16[3] = v22; /*0x42ed2e*/
      }
      result = ++v17; /*0x42ed39*/
      if ( v17 >= v19 ) /*0x42ed40*/
        break; /*0x42ed40*/
      v4 = (INIClass *)a2; /*0x42ec3d*/
    }
  }
  return result; /*0x42ed47*/
}


// ==== 0x0042ED60  HouseClass::SaveTriggerNodeData  this=char*  sig=csp ====
int __thiscall HouseClass::SaveTriggerNodeData(int *this, CCINIClass *aP1, unsigned __int8 *Block)
{
  int result; // eax
  INIClass *v5; // edi
  INIClass *v6; // ebx
  char *v7; // eax
  int v8; // ecx
  int v9; // [esp-Ch] [ebp-A4h]
  ObjectClass *v10; // [esp-8h] [ebp-A0h]
  INIClass Buffer[2]; // [esp+Ch] [ebp-8Ch] BYREF

  INIClass::SetInt(aP1->__pad_0, Block, (char *)&MEMORY[0x818994].headNode[2], *(this + 7), 0); /*0x42ed87*/
  INIClass::SetInt(aP1->__pad_0, Block, MEMORY[0x818994].__pad_0, *(this + 5), 0); /*0x42ed9a*/
  result = *(this + 5); /*0x42ed9f*/
  v5 = 0; /*0x42eda2*/
  if ( result > 0 ) /*0x42eda6*/
  {
    v6 = 0; /*0x42eda9*/
    do /*0x42ee1a*/
    {
      sprintf(Buffer[0].__pad_0, stru_81898C, v5); /*0x42edb6*/
      v7 = &v6->__pad_0[*(this + 2)]; /*0x42edc1*/
      v8 = *(_DWORD *)v7; /*0x42edc3*/
      v10 = (ObjectClass *)*((__int16 *)v7 + 3); /*0x42edcf*/
      v9 = *((__int16 *)v7 + 2); /*0x42edd0*/
      if ( *(int *)v7 < 0 ) /*0x42edd1*/
        sprintf((char *const)&Buffer[0].headNode[2], (const char *const)&MEMORY[0x818994].sectionCount, v8, v9, v10); /*0x42edf2*/
      else
        sprintf( /*0x42ede5*/
          (char *const)&Buffer[0].headNode[2],
          &MEMORY[0x818994].__pad_20[8],
          *((_DWORD *)g_TriggerTypeCount + v8) + 36,
          v9,
          v10);
      INIClass::SetString(aP1->__pad_0, (INIClass *)Block, Buffer, (INIClass *)&Buffer[0].headNode[2]); /*0x42ee0c*/
      result = *(this + 5); /*0x42ee11*/
      v5 = (INIClass *)((char *)v5 + 1); /*0x42ee14*/
      v6 = (INIClass *)((char *)v6 + 16); /*0x42ee15*/
    }
    while ( (int)v5 < result ); /*0x42ee1a*/
  }
  return result; /*0x42ee1d*/
}


// ==== 0x0042EE30  BaseClass::LoadBaseNodeClass  this=BaseClass  sig=csp ====
int __stdcall BaseClass::LoadBaseNodeClass(VectorClass *aP0, int a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // ebp
  char *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // edx
  int v15; // ebp
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v21; // [esp+88h] [ebp-14h] BYREF
  _DWORD v22[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = a2; /*0x42ee3a*/
  if ( (*(int (__stdcall **)(int, VectorClass *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, aP0, 120, 0) >= 0 ) /*0x42ee4b*/
  {
    if ( aP0 ) /*0x42ee53*/
    {
      BaseNodeClass::Vector_Constructor(&aP0->Items, 0, 0); /*0x42ee5e*/
      aP0->Items = &vt_DynamicVectorClass_BaseNodeClass; /*0x42ee6a*/
      aP0[1].Capacity = 10; /*0x42ee70*/
      aP0[1].Items = 0; /*0x42ee77*/
      DynamicVector::Constructor_Cell(&aP0[2].vtable0, 0, 0); /*0x42ee7e*/
      DynamicVector::Constructor_Cell(&aP0[3].Capacity, 0, 0); /*0x42ee8a*/
      aP0->vtable0 = &vt_BaseClass; /*0x42ee8f*/
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
                ObjectPtr::RegisterForTracking( /*0x42f044*/
                  (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
                  (MouseClass *)&aP0[7].Items);
              }
              else
              {
                while ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42eff3*/
                {
                  v16 = (int)aP0[4].vtable0; /*0x42eff9*/
                  if ( aP0[4].Capacity < v16 /*0x42f021*/
                    || (BYTE1(aP0[4].Items) || !v16)
                    && (v17 = *(_DWORD *)&aP0[4].IsInitialized, v17 > 0)
                    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(aP0[3].Capacity + 8))(
                         &aP0[3].Capacity,
                         v16 + v17,
                         0) )
                  {
                    v18 = aP0[4].Capacity; /*0x42f028*/
                    v19 = *(_DWORD *)&aP0[3].IsInitialized; /*0x42f02b*/
                    aP0[4].Capacity = v18 + 1; /*0x42f031*/
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
              v11 = aP0[2].Capacity; /*0x42ef7a*/
              if ( (int)aP0[3].vtable0 < v11 /*0x42efa2*/
                || (aP0[2].IsAllocated || !v11)
                && (v12 = (int)aP0[3].Items, v12 > 0)
                && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))aP0[2].vtable0 + 2))(
                     aP0 + 2,
                     v11 + v12,
                     0) )
              {
                v13 = (int)aP0[3].vtable0; /*0x42efa9*/
                v14 = aP0[2].Items; /*0x42efac*/
                aP0[3].vtable0 = (void *)(v13 + 1); /*0x42efb2*/
                v14[v13] = v21; /*0x42efb9*/
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
          v5 = *(char **)&aP0->IsInitialized; /*0x42eeda*/
          if ( (int)aP0[1].Items < (int)v5 /*0x42ef02*/
            || (BYTE1(aP0[1].vtable0) || !v5)
            && (v6 = aP0[1].Capacity, v6 > 0)
            && (*((unsigned __int8 (__thiscall **)(void **, char *, _DWORD))aP0->Items + 2))(&aP0->Items, &v5[v6], 0) )
          {
            v7 = (int)aP0[1].Items; /*0x42ef09*/
            v8 = v22[0]; /*0x42ef0c*/
            aP0[1].Items = (void *)(v7 + 1); /*0x42ef13*/
            v9 = (_DWORD *)(aP0->Capacity + 16 * v7); /*0x42ef1c*/
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
int __stdcall BaseClass::sub_42F070(_DWORD *a1, int a2)
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

  v2 = a2; /*0x42f073*/
  if ( (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, a1, 120, 0) >= 0 ) /*0x42f089*/
  {
    v3 = *(_DWORD *)v2; /*0x42f092*/
    a2 = a1[5]; /*0x42f09e*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 16))(v2, &a2, 4, 0) >= 0 ) /*0x42f0a7*/
    {
      v4 = 0; /*0x42f0b1*/
      if ( a2 <= 0 ) /*0x42f0b5*/
      {
LABEL_7:
        v6 = *(_DWORD *)v2; /*0x42f0dd*/
        a2 = a1[12]; /*0x42f0ec*/
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 16))(v2, &a2, 4, 0) >= 0 ) /*0x42f0f5*/
        {
          v7 = 0; /*0x42f0fb*/
          if ( a2 <= 0 ) /*0x42f0ff*/
          {
LABEL_11:
            v8 = *(_DWORD *)v2; /*0x42f11f*/
            a2 = a1[18]; /*0x42f12e*/
            result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v8 + 16))(v2, &a2, 4, 0); /*0x42f132*/
            if ( result >= 0 ) /*0x42f137*/
            {
              v10 = 0; /*0x42f13d*/
              if ( a2 <= 0 ) /*0x42f141*/
                return result; /*0x42f141*/
              while ( 1 ) /*0x42f151*/
              {
                result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, a1[15] + 4 * v10, 4, 0); /*0x42f151*/
                if ( result < 0 ) /*0x42f156*/
                  break; /*0x42f156*/
                if ( ++v10 >= a2 ) /*0x42f15f*/
                  return result; /*0x42f15f*/
              }
            }
          }
          else
          {
            while ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, a1[9] + 4 * v7, 4, 0) >= 0 ) /*0x42f114*/
            {
              if ( ++v7 >= a2 ) /*0x42f11d*/
                goto LABEL_11; /*0x42f11d*/
            }
          }
        }
      }
      else
      {
        v5 = 0; /*0x42f0b7*/
        while ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, v5 + a1[2], 16, 0) >= 0 ) /*0x42f0cb*/
        {
          ++v4; /*0x42f0d5*/
          v5 += 16; /*0x42f0d6*/
          if ( v4 >= a2 ) /*0x42f0db*/
            goto LABEL_7; /*0x42f0db*/
        }
      }
    }
  }
  return 0; /*0x42f161*/
}


// ==== 0x0042F180  BaseClass::ProcessPowerTimer  this=BaseClass  sig=csp ====
int __thiscall BaseClass::ProcessPowerTimer(int *this, AbstractClass *aP1)
{
  int result; // eax
  int v4; // ebp
  BaseClass *v5; // edi
  AbstractClass *v6; // ecx
  AbstractClass *v7; // eax

  Power::TimerProcess(aP1); /*0x42f18f*/
  result = this->cells24Count; /*0x42f194*/
  v4 = 0; /*0x42f197*/
  if ( result > 0 ) /*0x42f19b*/
  {
    v5 = 0; /*0x42f19e*/
    do /*0x42f1d7*/
    {
      Power::TimerProcess(aP1); /*0x42f1a9*/
      LOWORD(v6) = *(_WORD *)((char *)&v5->baseNodeCount + this->baseNodeCapacity); /*0x42f1b1*/
      v7 = (AbstractClass *)Checksummer::Add_WORD((unsigned int *)aP1, v6); /*0x42f1b9*/
      LOWORD(v7) = *(_WORD *)((char *)&v5->baseNodeCount + this->baseNodeCapacity + 2); /*0x42f1c3*/
      Checksummer::Add_WORD((unsigned int *)aP1, v7); /*0x42f1c9*/
      result = this->cells24Count; /*0x42f1ce*/
      ++v4; /*0x42f1d1*/
      v5 = (BaseClass *)((char *)v5 + 16); /*0x42f1d2*/
    }
    while ( v4 < result ); /*0x42f1d7*/
  }
  return result; /*0x42f1da*/
}


// ==== 0x0042F1E0  BaseClass::Construct  this=BaseClass  sig=csp ====
_DWORD *__thiscall sub_42F1E0(_DWORD *this, int a2)
{
  _DWORD *v3; // edi

  v3 = this + 1; /*0x42f1e6*/
  BaseNodeClass::Vector_Constructor(this + 1, 0, 0); /*0x42f1ed*/
  *v3 = &vt_DynamicVectorClass_BaseNodeClass; /*0x42f1f2*/
  v3[5] = 10; /*0x42f1f8*/
  v3[4] = 0; /*0x42f1ff*/
  VectorClass::CellConstructor(this + 8, 0, 0); /*0x42f20f*/
  this->cells38Count = &vt_DynamicVectorClass_Cell; /*0x42f214*/
  this->q034 = 10; /*0x42f21a*/
  this->q030 = 0; /*0x42f221*/
  VectorClass::CellConstructor(this + 14, 0, 0); /*0x42f231*/
  this->q038 = &vt_DynamicVectorClass_Cell; /*0x42f236*/
  this->owner = 10; /*0x42f23c*/
  this->q048 = 0; /*0x42f243*/
  *this = &vt_BaseClass; /*0x42f24a*/
  return this; /*0x42f252*/
}


// ==== 0x0042F260  BuildingClass::MarkUpgradeComponentUsed  this=BuildingClass  sig=csp ====
_WORD *__thiscall BuildingClass::MarkUpgradeComponentUsed(int *this, BuildingClass *aP1)
{
  int v4; // edi
  int *p_uniqueId; // ebx
  char *v6; // ebx
  _WORD *result; // eax
  int v8; // edi
  _DWORD *Type; // ebp
  int v10; // ecx
  int v11; // ebp
  int i; // esi
  char v13[4]; // [esp+10h] [ebp-4h] BYREF
  BuildingClass *aP1a; // [esp+18h] [ebp+4h]

  if ( aP1->focus == (void *)this->q01D ) /*0x42f274*/
  {
    v4 = 0; /*0x42f279*/
    if ( this->abstractFlags > 0 ) /*0x42f27d*/
    {
      p_uniqueId = 0; /*0x42f27f*/
      aP1a = 0; /*0x42f281*/
      while ( 1 ) /*0x42f28e*/
      {
        v6 = (char *)p_uniqueId + this->vtable3; /*0x42f28e*/
        if ( *((_DWORD *)aP1->Type + 894) == *(_DWORD *)v6 ) /*0x42f298*/
        {
          result = (_WORD *)(*(int (__thiscall **)(BuildingClass *, char *))(*(_DWORD *)aP1->__pad_0 + 440))(aP1, v13); /*0x42f2a4*/
          if ( *result == *((_WORD *)v6 + 2) && result[1] == *((_WORD *)v6 + 3) ) /*0x42f2bb*/
            break; /*0x42f2bb*/
        }
        ++v4; /*0x42f2c4*/
        p_uniqueId = &aP1a->uniqueId; /*0x42f2c5*/
        aP1a = (BuildingClass *)((char *)aP1a + 16); /*0x42f2ca*/
        if ( v4 >= this->abstractFlags ) /*0x42f2ce*/
          goto LABEL_10; /*0x42f2ce*/
      }
      v8 = this->vtable3 + 16 * v4; /*0x42f2d8*/
      if ( v8 ) /*0x42f2dc*/
        goto LABEL_18; /*0x42f2dc*/
    }
  }
LABEL_10:
  Type = aP1->Type; /*0x42f2de*/
  result = (_WORD *)Type[258]; /*0x42f2e4*/
  if ( result ) /*0x42f2ec*/
  {
    v10 = this->abstractFlags; /*0x42f2ee*/
    v11 = Type[894]; /*0x42f2f1*/
    result = 0; /*0x42f2f7*/
    if ( v10 > 0 ) /*0x42f2fb*/
    {
      for ( i = this->vtable3; *(_DWORD *)i != v11 || *(_BYTE *)(i + 8); i += 16 ) /*0x42f2fd*/
      {
        result = (_WORD *)((char *)result + 1); /*0x42f30b*/
        if ( (int)result >= v10 ) /*0x42f311*/
          return result; /*0x42f311*/
      }
      v8 = i; /*0x42f31d*/
      if ( i ) /*0x42f31f*/
      {
LABEL_18:
        *(_BYTE *)(v8 + 8) = 1; /*0x42f321*/
        *(_DWORD *)(v8 + 12) = 0; /*0x42f325*/
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
void __thiscall BaseClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x42f3a6*/
  *(_DWORD *)(this + 16) = 0; /*0x42f3a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x42f3b0*/
  {
    __3_YAXPAX_Z(v2); /*0x42f3b6*/
    *(_DWORD *)(this + 4) = 0; /*0x42f3be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42f3c1*/
  *(_DWORD *)(this + 8) = 0; /*0x42f3c4*/
}


// ==== 0x0042F3D0  _DynamicVectorClass_VBaseNodeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall BaseClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x42f3d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x42f3e5*/
  else
    return 0; /*0x42f3d7*/
}


// ==== 0x0042F3F0  _VectorClass_VBaseNodeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall BaseClass::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // edx

  v3 = this->Items + 16 * a3; /*0x42f3fa*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x42f402*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x42f407*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x42f40d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x42f413*/
  return a2; /*0x42f416*/
}


// ==== 0x0042F420  _DynamicVectorClass_VCell::ddtor  this=DynamicVector  sig=csp ====
void __thiscall RandomMap::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x42f426*/
  *(_DWORD *)(this + 16) = 0; /*0x42f429*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x42f430*/
  {
    __3_YAXPAX_Z(v2); /*0x42f436*/
    *(_DWORD *)(this + 4) = 0; /*0x42f43e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42f441*/
  *(_DWORD *)(this + 8) = 0; /*0x42f444*/
}


// ==== 0x0042F450  _DynamicVectorClass_VCell::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall RandomMap::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x42f450*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x42f465*/
  else
    return 0; /*0x42f457*/
}


// ==== 0x0042F470  _VectorClass_VCell::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall RandomMap::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  *a2 = *(_DWORD *)(this->Items + 4 * a3); /*0x42f47e*/
  return a2; /*0x42f480*/
}


// ==== 0x0042F490  _VectorClass_VBaseNodeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall BaseClass::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  _WORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x42f49b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x42f4a0*/
  {
    v3 = 0; /*0x42f4a2*/
    if ( v2 <= 0 ) /*0x42f4a6*/
      return 1; /*0x42f4e0*/
    v4 = *(_DWORD *)(a2 + 4); /*0x42f4a8*/
    v5 = this->Items; /*0x42f4ab*/
    v6 = (_WORD *)(v4 + 4); /*0x42f4ae*/
    v7 = v4 - v5; /*0x42f4b1*/
    while ( *(_DWORD *)v5 == *(_DWORD *)(v7 + v5) && *(_WORD *)(v5 + 4) == *v6 && *(_WORD *)(v5 + 6) == v6[1] ) /*0x42f4cd*/
    {
      ++v3; /*0x42f4cf*/
      v6 += 8; /*0x42f4d0*/
      v5 += 16; /*0x42f4d3*/
      if ( v3 >= v2 ) /*0x42f4d8*/
        return 1; /*0x42f4d8*/
    }
  }
  return 0; /*0x42f4da*/
}


// ==== 0x0042F4F0  _DynamicVectorClass_VBaseNodeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall BaseClass::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v8; // ecx
  int v9; // eax
  char *v10; // ebx
  _DWORD *v11; // edx
  int v12; // eax

  v3 = a2; /*0x42f4f2*/
  if ( a2 ) /*0x42f4fd*/
  {
    v5 = a3; /*0x42f503*/
    this->IsInitialized = 0; /*0x42f507*/
    if ( a3 ) /*0x42f50d*/
    {
      v7 = a3; /*0x42f533*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x42f515*/
      if ( v6 ) /*0x42f51f*/
        v7 = v6; /*0x42f524*/
      else
        v7 = 0; /*0x42f52c*/
    }
    this->IsInitialized = 1; /*0x42f53b*/
    if ( !v7 ) /*0x42f53f*/
      return 0; /*0x42f5d4*/
    if ( this->Items ) /*0x42f545*/
    {
      v8 = this->DynamicVector_field_0x8; /*0x42f54c*/
      if ( a2 < v8 ) /*0x42f551*/
        v8 = a2; /*0x42f553*/
      if ( v8 > 0 ) /*0x42f557*/
      {
        v9 = 0; /*0x42f559*/
        do /*0x42f57d*/
        {
          v10 = &v7[v9]; /*0x42f55e*/
          v11 = (_DWORD *)(v9 + this->Items); /*0x42f561*/
          v9 += 16; /*0x42f563*/
          --v8; /*0x42f566*/
          *(_DWORD *)v10 = *v11; /*0x42f569*/
          *((_DWORD *)v10 + 1) = v11[1]; /*0x42f56e*/
          *((_DWORD *)v10 + 2) = v11[2]; /*0x42f574*/
          *((_DWORD *)v10 + 3) = v11[3]; /*0x42f57a*/
        }
        while ( v8 ); /*0x42f57d*/
        v3 = a2; /*0x42f57f*/
        v5 = a3; /*0x42f583*/
      }
      if ( this->IsAllocated ) /*0x42f587*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x42f592*/
        this->Items = 0; /*0x42f59a*/
      }
    }
    this->Items = v7; /*0x42f5a3*/
    this->DynamicVector_field_0x8 = v3; /*0x42f5ab*/
    this->IsAllocated = v5 == 0; /*0x42f5ae*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42f5b7*/
  }
  v12 = this->DynamicVector_field_0x8; /*0x42f5ba*/
  if ( v12 < this->Items ) /*0x42f5c2*/
    this->Items = v12; /*0x42f5c4*/
  return 1; /*0x42f5c7*/
}


// ==== 0x0042F5E0  _DynamicVectorClass_VBaseNodeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall BaseClass::_vt04(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  int i; // ecx

  v2 = this->Items; /*0x42f5e0*/
  result = 0; /*0x42f5e4*/
  if ( v2 <= 0 ) /*0x42f5ea*/
    return -1; /*0x42f615*/
  for ( i = this->Items; /*0x42f5f0*/
        *(_DWORD *)i != *(_DWORD *)a2
     || *(_WORD *)(i + 4) != *(_WORD *)(a2 + 4)
     || *(_WORD *)(i + 6) != *(_WORD *)(a2 + 6);
        i += 16 )
  {
    if ( ++result >= v2 ) /*0x42f613*/
      return -1; /*0x42f613*/
  }
  return result; /*0x42f618*/
}


// ==== 0x0042F620  _VectorClass_VCell::AddRef  this=VectorClass  sig=csp ====
char __thiscall RandomMap::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _WORD *v5; // eax
  _WORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x42f627*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x42f62f*/
  {
    v3 = 0; /*0x42f631*/
    if ( v2 <= 0 ) /*0x42f635*/
      return 1; /*0x42f664*/
    v4 = *(_DWORD *)(a2 + 4); /*0x42f637*/
    v5 = (_WORD *)this->Items; /*0x42f63a*/
    v6 = (_WORD *)(v4 + 2); /*0x42f63d*/
    v7 = v4 - (_DWORD)v5; /*0x42f640*/
    while ( *v5 == *(_WORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x42f652*/
    {
      ++v3; /*0x42f654*/
      v6 += 2; /*0x42f655*/
      v5 += 2; /*0x42f658*/
      if ( v3 >= v2 ) /*0x42f65d*/
        return 1; /*0x42f65d*/
    }
  }
  return 0; /*0x42f65f*/
}


// ==== 0x0042F670  DynamicVector::Constructor_Cell  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVector::Constructor_Cell(_DWORD *this, ObjectClass *aP1, ObjectClass *aP2)
{
  int v4; // eax

  this->Items = 0; /*0x42f67a*/
  this->Capacity = aP1; /*0x42f681*/
  this->q030 = 1; /*0x42f684*/
  this->__pad_034 = 0; /*0x42f688*/
  *this = &vt_VectorClass_Cell; /*0x42f68c*/
  if ( aP1 ) /*0x42f692*/
  {
    if ( aP2 ) /*0x42f69a*/
    {
      this->Items = aP2; /*0x42f69d*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      this->Items = v4; /*0x42f6c3*/
      this->__pad_034 = 1; /*0x42f6c6*/
    }
  }
  *this = &vt_DynamicVectorClass_Cell; /*0x42f6ca*/
  *(this + 5) = 10; /*0x42f6d0*/
  this->q010 = 0; /*0x42f6d7*/
  return this; /*0x42f6e0*/
}


// ==== 0x0042F6F0  _VectorClass_VCell::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Cell::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v7; // ecx
  int i; // eax

  if ( a2 ) /*0x42f6fc*/
  {
    this->IsInitialized = 0; /*0x42f706*/
    if ( a3 ) /*0x42f70c*/
    {
      v5 = a3; /*0x42f734*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * a2); /*0x42f716*/
      if ( v4 ) /*0x42f720*/
        v5 = v4; /*0x42f725*/
      else
        v5 = 0; /*0x42f72d*/
    }
    this->IsInitialized = 1; /*0x42f73c*/
    if ( v5 ) /*0x42f740*/
    {
      if ( this->Items ) /*0x42f74b*/
      {
        v7 = this->Capacity; /*0x42f752*/
        if ( a2 < v7 ) /*0x42f757*/
          v7 = a2; /*0x42f759*/
        for ( i = 0; i < v7; v5[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x42f75f*/
          ++i; /*0x42f764*/
        if ( this->IsAllocated ) /*0x42f771*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x42f77c*/
          this->Items = 0; /*0x42f784*/
        }
      }
      this->Items = v5; /*0x42f78d*/
      this->Capacity = a2; /*0x42f795*/
      this->IsAllocated = a3 == 0; /*0x42f798*/
      return 1; /*0x42f79e*/
    }
    else
    {
      return 0; /*0x42f745*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42f7a8*/
    return 1; /*0x42f7ae*/
  }
}


// ==== 0x0042F7C0  _VectorClass_VCell::Cleanup  this=VectorClass  sig=csp ====
void __thiscall Buffer_Cleanup(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x42f7cd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x42f7d3*/
    *(_DWORD *)(this + 4) = 0; /*0x42f7db*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42f7de*/
  *(_DWORD *)(this + 8) = 0; /*0x42f7e1*/
}


// ==== 0x0042F7F0  _VectorClass_VCell::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Cell::_vt04(int this, _WORD *a2)
{
  int result; // eax
  int v3; // edx
  _WORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x42f7f0*/
    return 0; /*0x42f7fc*/
  v3 = *(_DWORD *)(this + 8); /*0x42f802*/
  result = 0; /*0x42f805*/
  if ( v3 <= 0 ) /*0x42f809*/
    return -1; /*0x42f82c*/
  for ( i = *(_WORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f80f*/
  {
    if ( ++result >= v3 ) /*0x42f82a*/
      return -1; /*0x42f82a*/
  }
  return result; /*0x42f7fa*/
}


// ==== 0x0042F840  _VectorClass_VCell::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Cell::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x42f840*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x42f855*/
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
      v6 = this->DynamicVector_field_0x8; /*0x42f8b9*/
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
    this->DynamicVector_field_0x8 = a2; /*0x42f8fc*/
    this->IsAllocated = a3 == 0; /*0x42f8ff*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42f908*/
  }
  v8 = this->DynamicVector_field_0x8; /*0x42f90b*/
  if ( v8 < this->Items ) /*0x42f913*/
    this->Items = v8; /*0x42f915*/
  return 1; /*0x42f918*/
}


// ==== 0x0042F930  _DynamicVectorClass_VCell::Read  this=DynamicVector  sig=csp ====
int __thiscall RandomMap::_vt04(int *this, _WORD *a2)
{
  int v2; // edx
  int result; // eax
  _WORD *i; // ecx

  v2 = this->Items; /*0x42f930*/
  result = 0; /*0x42f934*/
  if ( v2 <= 0 ) /*0x42f93a*/
    return -1; /*0x42f95d*/
  for ( i = (_WORD *)this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f940*/
  {
    if ( ++result >= v2 ) /*0x42f95b*/
      return -1; /*0x42f95b*/
  }
  return result; /*0x42f960*/
}


// ==== 0x0042F970  _DynamicVectorClass_VBaseNodeClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall BaseClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42f973*/
  *Block = &VectorClass<BaseNodeClass>::`vftable'; /*0x42f976*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x42f980*/
  {
    __3_YAXPAX_Z(v3); /*0x42f988*/
    *(Block + 1) = 0; /*0x42f990*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42f99b*/
  *(Block + 2) = 0; /*0x42f9a1*/
  if ( (a2 & 1) != 0 ) /*0x42f9a8*/
    __3_YAXPAX_Z(Block); /*0x42f9ab*/
  return (DynamicVector *)Block; /*0x42f9b5*/
}


// ==== 0x0042F9C0  _VectorClass_VBaseNodeClass::Release  this=VectorClass  sig=csp ====
char __thiscall BaseNodeClass_Vector::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v9; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x42f9c2*/
  if ( a2 ) /*0x42f9cd*/
  {
    v5 = a3; /*0x42f9d3*/
    this->IsInitialized = 0; /*0x42f9d7*/
    if ( a3 ) /*0x42f9dd*/
    {
      v7 = a3; /*0x42fa03*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x42f9e5*/
      if ( v6 ) /*0x42f9ef*/
        v7 = v6; /*0x42f9f4*/
      else
        v7 = 0; /*0x42f9fc*/
    }
    this->IsInitialized = 1; /*0x42fa0b*/
    if ( v7 ) /*0x42fa0f*/
    {
      if ( this->Items ) /*0x42fa1b*/
      {
        v9 = this->Capacity; /*0x42fa22*/
        if ( a2 < v9 ) /*0x42fa27*/
          v9 = a2; /*0x42fa29*/
        if ( v9 > 0 ) /*0x42fa2d*/
        {
          v10 = 0; /*0x42fa2f*/
          do /*0x42fa53*/
          {
            v11 = &v7[v10]; /*0x42fa34*/
            v12 = (_DWORD *)(v10 + this->Items); /*0x42fa37*/
            v10 += 16; /*0x42fa39*/
            --v9; /*0x42fa3c*/
            *(_DWORD *)v11 = *v12; /*0x42fa3f*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x42fa44*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x42fa4a*/
            *((_DWORD *)v11 + 3) = v12[3]; /*0x42fa50*/
          }
          while ( v9 ); /*0x42fa53*/
          v5 = a3; /*0x42fa55*/
          v3 = a2; /*0x42fa59*/
        }
        if ( this->IsAllocated ) /*0x42fa5d*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x42fa68*/
          this->Items = 0; /*0x42fa70*/
        }
      }
      this->Items = v7; /*0x42fa79*/
      this->Capacity = v3; /*0x42fa81*/
      this->IsAllocated = v5 == 0; /*0x42fa84*/
      return 1; /*0x42fa8a*/
    }
    else
    {
      return 0; /*0x42fa14*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x42fa95*/
    return 1; /*0x42fa9b*/
  }
}


// ==== 0x0042FAB0  _VectorClass_VBaseNodeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall BaseNodeClass_Vector::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x42fabd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x42fac3*/
    *(_DWORD *)(this + 4) = 0; /*0x42facb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x42face*/
  *(_DWORD *)(this + 8) = 0; /*0x42fad1*/
}


// ==== 0x0042FAE0  _VectorClass_VBaseNodeClass::Read  this=VectorClass  sig=csp ====
int __thiscall BaseNodeClass_Vector::_vt04(int this, int a2)
{
  int result; // eax
  int v3; // edx
  int i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x42fae0*/
    return 0; /*0x42faec*/
  v3 = *(_DWORD *)(this + 8); /*0x42faf2*/
  result = 0; /*0x42faf5*/
  if ( v3 <= 0 ) /*0x42faf9*/
    return -1; /*0x42fb24*/
  for ( i = *(_DWORD *)(this + 4); /*0x42faff*/
        *(_DWORD *)i != *(_DWORD *)a2
     || *(_WORD *)(i + 4) != *(_WORD *)(a2 + 4)
     || *(_WORD *)(i + 6) != *(_WORD *)(a2 + 6);
        i += 16 )
  {
    if ( ++result >= v3 ) /*0x42fb22*/
      return -1; /*0x42fb22*/
  }
  return result; /*0x42faea*/
}


// ==== 0x0042FB30  _VectorClass_VBaseNodeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall BaseNodeClass_Vector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x42fb30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x42fb45*/
  else
    return 0; /*0x42fb37*/
}


// ==== 0x0042FB50  _VectorClass_VBaseNodeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall BaseNodeClass_Vector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42fb53*/
  *Block = &VectorClass<BaseNodeClass>::`vftable'; /*0x42fb56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x42fb60*/
  {
    __3_YAXPAX_Z(v3); /*0x42fb68*/
    *(Block + 1) = 0; /*0x42fb70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42fb7b*/
  *(Block + 2) = 0; /*0x42fb81*/
  if ( (a2 & 1) != 0 ) /*0x42fb88*/
    __3_YAXPAX_Z(Block); /*0x42fb8b*/
  return (VectorClass *)Block; /*0x42fb95*/
}


// ==== 0x0042FBA0  _VectorClass_VCell::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_Cell::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42fba3*/
  *Block = &vt_VectorClass_Cell; /*0x42fba6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x42fbb0*/
  {
    __3_YAXPAX_Z(v3); /*0x42fbb8*/
    *(Block + 1) = 0; /*0x42fbc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42fbcb*/
  *(Block + 2) = 0; /*0x42fbd1*/
  if ( (a2 & 1) != 0 ) /*0x42fbd8*/
    __3_YAXPAX_Z(Block); /*0x42fbdb*/
  return (VectorClass *)Block; /*0x42fbe5*/
}


// ==== 0x0042FBF0  _DynamicVectorClass_VCell::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall RandomMap::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42fbf3*/
  *Block = &vt_VectorClass_Cell; /*0x42fbf6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x42fc00*/
  {
    __3_YAXPAX_Z(v3); /*0x42fc08*/
    *(Block + 1) = 0; /*0x42fc10*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x42fc1b*/
  *(Block + 2) = 0; /*0x42fc21*/
  if ( (a2 & 1) != 0 ) /*0x42fc28*/
    __3_YAXPAX_Z(Block); /*0x42fc2b*/
  return (DynamicVector *)Block; /*0x42fc35*/
}


// ==== 0x0042FC40  BaseNodeClass::Vector_Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall BaseNodeClass_Vector_Constructor(_DWORD *this, int a2, int a3)
{
  void *v5; // eax

  this->Items = 0; /*0x42fc4a*/
  this->Capacity = a2; /*0x42fc51*/
  this->q030 = 1; /*0x42fc54*/
  this->__pad_034 = 0; /*0x42fc58*/
  *this = &VectorClass<BaseNodeClass>::`vftable'; /*0x42fc5c*/
  if ( a2 ) /*0x42fc62*/
  {
    if ( a3 ) /*0x42fc6a*/
    {
      this->Items = a3; /*0x42fc6d*/
      return this; /*0x42fc78*/
    }
    v5 = __2_YAPAXI_Z(16 * a2); /*0x42fc81*/
    if ( v5 ) /*0x42fc8b*/
    {
      this->Items = v5; /*0x42fc8e*/
      this->__pad_034 = 1; /*0x42fc95*/
      return this; /*0x42fc9d*/
    }
    this->__pad_034 = 1; /*0x42fca2*/
    this->Items = 0; /*0x42fca6*/
  }
  return this; /*0x42fc76*/
}


// ==== 0x0042FCB0  VectorClass::CellConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CellConstructor(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  int v5; // eax

  this->Items = 0; /*0x42fcba*/
  this->Capacity = aP1; /*0x42fcc1*/
  this->q030 = 1; /*0x42fcc4*/
  this->__pad_034 = 0; /*0x42fcc8*/
  *this = &vt_VectorClass_Cell; /*0x42fccc*/
  if ( aP1 ) /*0x42fcd2*/
  {
    if ( aP2 ) /*0x42fcda*/
    {
      this->Items = aP2; /*0x42fcdd*/
      return this; /*0x42fce8*/
    }
    v5 = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x42fcf3*/
    if ( v5 ) /*0x42fcfd*/
    {
      this->Items = v5; /*0x42fd00*/
      this->__pad_034 = 1; /*0x42fd07*/
      return this; /*0x42fd0f*/
    }
    this->__pad_034 = 1; /*0x42fd14*/
    this->Items = 0; /*0x42fd18*/
  }
  return this; /*0x42fce6*/
}


// ==== 0x0042FD30  EncodeBitmapRGB  this=BombClass  sig=csp ====
int __fastcall EncodeBitmapRGB(Pipe *aP0, int edx0, _BYTE *a2, int a4)
{
  int v4; // eax
  Pipe *v5; // ebp
  _BYTE *v6; // ecx
  char v7; // al
  int v8; // edi
  char v9; // al
  char v10; // al
  _BYTE *v11; // ecx
  char *v12; // ecx
  char needsRedraw; // al
  char *v14; // ecx
  char v15; // al
  int v17; // [esp+4h] [ebp-4h]
  unsigned int a2a; // [esp+Ch] [ebp+4h]

  if ( !aP0 ) /*0x42fd34*/
    return 0; /*0x42fd34*/
  if ( !edx0 ) /*0x42fd3c*/
    return 0; /*0x42fd3c*/
  if ( !a2 ) /*0x42fd48*/
    return 0; /*0x42fd48*/
  v4 = a4; /*0x42fd4e*/
  if ( !a4 ) /*0x42fd54*/
    return 0; /*0x42fe46*/
  v5 = aP0; /*0x42fd5c*/
  v17 = 0; /*0x42fd61*/
  v6 = a2; /*0x42fd69*/
  if ( edx0 > 0 ) /*0x42fd6b*/
  {
    while ( 1 ) /*0x42fd71*/
    {
      if ( v4 < 4 ) /*0x42fd74*/
        goto LABEL_19; /*0x42fd74*/
      v7 = v5->__pad_0[0]; /*0x42fd7a*/
      v8 = 0; /*0x42fd7d*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x42fd7f*/
      a2a = 0; /*0x42fd80*/
      --edx0; /*0x42fd84*/
      BYTE2(a2a) = v7; /*0x42fd85*/
      if ( !edx0 ) /*0x42fd89*/
        break; /*0x42fd89*/
      v9 = v5->__pad_0[0]; /*0x42fd8b*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x42fd8e*/
      --edx0; /*0x42fd8f*/
      BYTE1(a2a) = v9; /*0x42fd90*/
      if ( !edx0 ) /*0x42fd96*/
        goto LABEL_11; /*0x42fd96*/
      v10 = v5->__pad_0[0]; /*0x42fd98*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x42fd9b*/
      LOBYTE(a2a) = v10; /*0x42fd9c*/
      --edx0; /*0x42fda0*/
LABEL_12:
      v11 = v6 + 1; /*0x42fda9*/
      *(v11 - 1) = *((_BYTE *)stru_81898C.ambientSoundController + ((a2a >> 18) & 0x3F)); /*0x42fdbf*/
      v12 = v11 + 1; /*0x42fdd0*/
      *(v12 - 1) = *((_BYTE *)stru_81898C.ambientSoundController + ((a2a >> 12) & 0x3F)); /*0x42fdd7*/
      if ( v8 >= 2 ) /*0x42fdda*/
        needsRedraw = stru_81898C.needsRedraw; /*0x42fdf4*/
      else
        needsRedraw = *((_BYTE *)stru_81898C.ambientSoundController + ((a2a >> 6) & 0x3F)); /*0x42fdea*/
      *v12 = needsRedraw; /*0x42fdf6*/
      v14 = v12 + 1; /*0x42fdf8*/
      if ( v8 >= 1 ) /*0x42fdfc*/
        v15 = stru_81898C.needsRedraw; /*0x42fe10*/
      else
        v15 = *((_BYTE *)stru_81898C.ambientSoundController + (a2a & 0x3F)); /*0x42fe06*/
      *v14 = v15; /*0x42fe16*/
      v6 = v14 + 1; /*0x42fe1c*/
      v4 = a4 - 4; /*0x42fe1d*/
      a4 -= 4; /*0x42fe25*/
      v17 += 4; /*0x42fe29*/
      if ( edx0 <= 0 ) /*0x42fe2d*/
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


// ==== 0x0042FE50  DecodeBitmapRGB  this=BombClass  sig=csp ====
int __fastcall DecodeBitmapRGB(Pipe *aP0, BombClass *aP1, _BYTE *a2, int a4)
{
  _BYTE *v4; // esi
  int v5; // eax
  Pipe *v6; // ebp
  int v7; // ebx
  int v8; // edi
  unsigned __int8 v9; // cl
  char v10; // cl
  int v11; // ecx
  unsigned int v12; // ebx
  _BYTE *v13; // ecx
  _BYTE *a2a; // [esp+Ch] [ebp+4h]
  char v16; // [esp+12h] [ebp+Ah]

  if ( aP0 ) /*0x42fe54*/
  {
    if ( aP1 ) /*0x42fe5c*/
    {
      v4 = a2; /*0x42fe62*/
      if ( a2 ) /*0x42fe68*/
      {
        v5 = a4; /*0x42fe6e*/
        if ( a4 ) /*0x42fe74*/
        {
          a2a = 0; /*0x42fe7f*/
          v6 = aP0; /*0x42fe87*/
          if ( (int)aP1 <= 0 ) /*0x42fe89*/
            return (int)a2a; /*0x42fe89*/
          while ( 1 ) /*0x42fe8f*/
          {
            if ( v5 <= 0 ) /*0x42fe91*/
              return (int)a2a; /*0x42fe91*/
            v7 = 0; /*0x42fe97*/
            v8 = 0; /*0x42fe99*/
            while ( 1 ) /*0x42fe9f*/
            {
              if ( (int)aP1 <= 0 ) /*0x42fea1*/
              {
LABEL_19:
                v16 = BYTE2(v7); /*0x42ff10*/
                goto LABEL_20; /*0x42ff10*/
              }
              v9 = v6->__pad_0[0]; /*0x42fea3*/
              v6 = (Pipe *)((char *)v6 + 1); /*0x42fea6*/
              aP1 = (BombClass *)((char *)aP1 - 1); /*0x42feab*/
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
            aP1 = 0; /*0x42ff65*/
LABEL_20:
            *v4++ = v16; /*0x42ff14*/
            --v5; /*0x42ff1f*/
            v13 = ++a2a; /*0x42ff20*/
            if ( v5 > 0 ) /*0x42ff27*/
            {
              if ( v8 > 2 ) /*0x42ff2c*/
              {
                *v4++ = BYTE1(v7); /*0x42ff2e*/
                --v5; /*0x42ff31*/
                a2a = v13 + 1; /*0x42ff33*/
              }
              if ( v5 > 0 && v8 > 3 ) /*0x42ff3e*/
              {
                *v4++ = v7; /*0x42ff44*/
                --v5; /*0x42ff47*/
                ++a2a; /*0x42ff49*/
              }
            }
            if ( (int)aP1 <= 0 ) /*0x42ff4f*/
              return (int)a2a; /*0x42ff5e*/
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
  unk_89C380 = 0; /*0x42ff82*/
  unk_89C384 = 0; /*0x42ff87*/
  unk_89C388 = 0; /*0x42ff8c*/
  unk_89C38C = 0; /*0x42ff91*/
  return 0; /*0x42ff96*/
}


// ==== 0x0042FFA0  sub_42FFA0  this=-  sig=ida-proto ====
void sub_42FFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42ffac*/
  unk_89C398 = Math::Sqrt(v0 + v0); /*0x42ffbe*/
}


// ==== 0x0042FFD0  sub_42FFD0  this=-  sig=ida-proto ====
void sub_42FFD0()
{
  unk_89C468 = unk_89C398 / 60.0; /*0x42ffdc*/
}


// ==== 0x0042FFF0  sub_42FFF0  this=-  sig=ida-proto ====
void sub_42FFF0()
{
  unk_89C450 = 1.0 / unk_89C468; /*0x42fffc*/
}

