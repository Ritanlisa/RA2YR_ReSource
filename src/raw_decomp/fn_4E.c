// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004E0080  TeamClass::HasAnyMemberFlagged  this=TechnoClass  sig=csp ====
BOOL __thiscall sub_4E0080(_BYTE *this)
{
  return this->q68F || this->q690 || this->q691; /*0x4e00a0*/
}


// ==== 0x004E00B0  FootClass::Jumpjet_OccupyCell  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::Jumpjet_OccupyCell(__int16 *this, TagClass *aP1)
{
  TagClass *result; // eax
  __int16 *v4; // esi

  result = *(TagClass **)&MEMORY[0x89F690].__pad_579C[61276]; /*0x4e00b0*/
  v4 = this + 690; /*0x4e00c8*/
  if ( this->q2B2 == *(_WORD *)&MEMORY[0x89F690].__pad_579C[61276] /*0x4e00d4*/
    && this->q2B3 == *(_WORD *)&MEMORY[0x89F690].__pad_579C[61278] )
  {
    *(_DWORD *)v4 = aP1; /*0x4e011b*/
    return aP1->__pad_0; /*0x4e0116*/
  }
  else
  {
    if ( aP1 != *(TagClass **)&MEMORY[0x89F690].__pad_579C[61276] ) /*0x4e00dd*/
    {
      result = (TagClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], this + 690); /*0x4e00ec*/
      if ( *(__int16 **)result[4].__pad_0 == this ) /*0x4e00f7*/
      {
        result = (TagClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], this + 690); /*0x4e00ff*/
        *(_DWORD *)result[4].__pad_0 = 0; /*0x4e0104*/
      }
    }
    *(_DWORD *)v4 = aP1; /*0x4e010e*/
  }
  return result->__pad_0; /*0x4e0110*/
}


// ==== 0x004E0130  ObjectClass::COMStub_Return0_34  this=ObjectClass  sig=csp ====
int __thiscall AbstractClass::_vt34(#374 *this)
{
  return 0; /*0x4e0132*/
}


// ==== 0x004E0140  MissionClass::getCurrentMission  this=MissionClass  sig=csp ====
char __thiscall AbstractClass::getCurrentMission(std::codecvt_base *this)
{
  return 1; /*0x4e0142*/
}


// ==== 0x004E0150  TechnoClass::GetAnimationValue  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetAnimationValue(_WORD *this, _DWORD *a2)
{
  int v2; // ecx
  _WORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x4e0150*/
  v2 = *ProgressTimer::GetValue(this + 452, &v4); /*0x4e0161*/
  *a2 = v2; /*0x4e0167*/
  return a2; /*0x4e016a*/
}


// ==== 0x004E0170  FootClass::Destru_vt08  this=FootClass  sig=csp ====
FootClass *__thiscall FootClass::Destru_vt08(void *Block, char a2)
{
  FootClass::Destruct(Block); /*0x4e0173*/
  if ( (a2 & 1) != 0 ) /*0x4e017d*/
    __3_YAXPAX_Z(Block); /*0x4e0180*/
  return (FootClass *)Block; /*0x4e018a*/
}


// ==== 0x004E0190  ?$DynamicVectorClass@PAVAbstractClass@@::updateMission  this=DynamicVector  sig=csp ====
void __thiscall AbstractClass::sub_4E0190(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e0196*/
  *(_DWORD *)(this + 16) = 0; /*0x4e0199*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e01a0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e01a6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e01ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e01b1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e01b4*/
}


// ==== 0x004E01C0  ?$DynamicVectorClass@PAVAbstractClass@@::queueMission  this=DynamicVector  sig=csp ====
unsigned int __thiscall AbstractClass::sub_4E01C0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e01c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e01d5*/
  else
    return 0; /*0x4e01c7*/
}


// ==== 0x004E01E0  _VectorClass_PAVAbstractClass::Seek  this=VectorClass  sig=csp ====
int __thiscall AbstractClassVector::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e01ea*/
}


// ==== 0x004E01F0  FoggedObjectClass::ClearBuffer  this=FoggedObjectClass  sig=csp ====
void __thiscall FoggedObjectClass_42_::sub_4E01F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e01f6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e01f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e0200*/
  {
    __3_YAXPAX_Z(v2); /*0x4e0206*/
    *(_DWORD *)(this + 4) = 0; /*0x4e020e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e0211*/
  *(_DWORD *)(this + 8) = 0; /*0x4e0214*/
}


// ==== 0x004E0220  FoggedObjectClass::PointerToIndex  this=FoggedObjectClass  sig=csp ====
unsigned int __thiscall FoggedObjectClass_42_::sub_4E0220(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e0220*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e0235*/
  else
    return 0; /*0x4e0227*/
}


// ==== 0x004E0240  _VectorClass_PAVFootClass::Seek  this=VectorClass  sig=csp ====
int __thiscall FoggedObjectClass_42_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e024a*/
}


// ==== 0x004E0250  _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::_vt06(
        _DWORD *this,
        _DWORD *a2,
        int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = this->Items; /*0x4e0250*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x4e0257*/
  v5 = v3 + 8 * a3; /*0x4e025a*/
  *a2 = v4; /*0x4e0261*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x4e0266*/
  return a2; /*0x4e0269*/
}


// ==== 0x004E0270  ?$DynamicVectorClass@PAVAbstractClass@@::processMissionQueue  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall AbstractClass::processMissionQueue(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4e0273*/
  *Block = &vt_VectorClass_AbstractClass; /*0x4e0276*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4e0280*/
  {
    __3_YAXPAX_Z(v3); /*0x4e0288*/
    *(Block + 1) = 0; /*0x4e0290*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4e029b*/
  *(Block + 2) = 0; /*0x4e02a1*/
  if ( (a2 & 1) != 0 ) /*0x4e02a8*/
    __3_YAXPAX_Z(Block); /*0x4e02ab*/
  return (DynamicVector *)Block; /*0x4e02b5*/
}


// ==== 0x004E02C0  ObjectClass::updateStateFlags  this=ObjectClass  sig=csp ====
int __thiscall sub_4E02C0(int *this)
{
  int result; // eax

  result = *this; /*0x4e02c0*/
  if ( *this ) /*0x4e02c0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4e02c9*/
  return result; /*0x4e02cc*/
}


// ==== 0x004E02D0  _VectorClass_PAVAbstractClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall AbstractClassVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4e02d3*/
  *Block = &vt_VectorClass_AbstractClass; /*0x4e02d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4e02e0*/
  {
    __3_YAXPAX_Z(v3); /*0x4e02e8*/
    *(Block + 1) = 0; /*0x4e02f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4e02fb*/
  *(Block + 2) = 0; /*0x4e0301*/
  if ( (a2 & 1) != 0 ) /*0x4e0308*/
    __3_YAXPAX_Z(Block); /*0x4e030b*/
  return (VectorClass *)Block; /*0x4e0315*/
}


// ==== 0x004E0320  _VectorClass_PAVAbstractClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall AbstractClassVector::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4e0322*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e032d*/
  {
    v3 = 0; /*0x4e032f*/
    if ( v2 <= 0 ) /*0x4e0333*/
      return 1; /*0x4e0353*/
    v4 = (_DWORD *)this->Items; /*0x4e0335*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e033b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e0344*/
    {
      ++v3; /*0x4e0346*/
      ++v4; /*0x4e0347*/
      if ( v3 >= v2 ) /*0x4e034c*/
        return 1; /*0x4e034c*/
    }
  }
  return 0; /*0x4e034e*/
}


// ==== 0x004E0360  _VectorClass_PAVAbstractClass::Release  this=VectorClass  sig=csp ====
char __thiscall AbstractClassVector::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e036c*/
  {
    this->IsInitialized = 0; /*0x4e0376*/
    if ( a3 ) /*0x4e037c*/
      v4 = a3; /*0x4e0392*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e038e*/
    this->IsInitialized = 1; /*0x4e0396*/
    if ( v4 ) /*0x4e039a*/
    {
      if ( this->Items ) /*0x4e03a5*/
      {
        v6 = this->Capacity; /*0x4e03ac*/
        if ( a2 < v6 ) /*0x4e03b1*/
          v6 = a2; /*0x4e03b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e03b9*/
          ++i; /*0x4e03be*/
        if ( this->IsAllocated ) /*0x4e03cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e03d6*/
          this->Items = 0; /*0x4e03de*/
        }
      }
      this->Items = v4; /*0x4e03e7*/
      this->Capacity = a2; /*0x4e03ef*/
      this->IsAllocated = a3 == 0; /*0x4e03f2*/
      return 1; /*0x4e03f8*/
    }
    else
    {
      return 0; /*0x4e039f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e0402*/
    return 1; /*0x4e0408*/
  }
}


// ==== 0x004E0410  ?$VectorClass@PAVAbstractClass@@::ddtor  this=VectorClass  sig=csp ====
void __thiscall AbstractClassVector::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4e041d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e0423*/
    *(_DWORD *)(this + 4) = 0; /*0x4e042b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e042e*/
  *(_DWORD *)(this + 8) = 0; /*0x4e0431*/
}


// ==== 0x004E0440  _VectorClass_PAVAbstractClass::Read  this=VectorClass  sig=csp ====
int __thiscall AbstractClassVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e0440*/
    return 0; /*0x4e0448*/
  v3 = *(_DWORD *)(this + 8); /*0x4e044e*/
  result = 0; /*0x4e0451*/
  if ( v3 <= 0 ) /*0x4e0455*/
    return -1; /*0x4e046c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e045b*/
  {
    if ( ++result >= v3 ) /*0x4e046a*/
      return -1; /*0x4e046a*/
  }
  return result; /*0x4e044a*/
}


// ==== 0x004E0480  _VectorClass_PAVAbstractClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall AbstractClassVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e0480*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e0495*/
  else
    return 0; /*0x4e0487*/
}


// ==== 0x004E04A0  ?$DynamicVectorClass@PAVAbstractClass@@::completeMission  this=DynamicVector  sig=csp ====
char __thiscall AbstractClass::sub_4E04A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e04ac*/
  {
    this->IsInitialized = 0; /*0x4e04b2*/
    if ( a3 ) /*0x4e04b8*/
      v4 = a3; /*0x4e04ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e04ca*/
    this->IsInitialized = 1; /*0x4e04d2*/
    if ( !v4 ) /*0x4e04d6*/
      return 0; /*0x4e054a*/
    if ( this->Items ) /*0x4e04d8*/
    {
      v5 = this->q008; /*0x4e04df*/
      if ( a2 < v5 ) /*0x4e04e4*/
        v5 = a2; /*0x4e04e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e04ec*/
        ++i; /*0x4e04f1*/
      if ( this->IsAllocated ) /*0x4e04fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e0509*/
        this->Items = 0; /*0x4e0511*/
      }
    }
    this->Items = v4; /*0x4e051a*/
    this->q008 = a2; /*0x4e0522*/
    this->IsAllocated = a3 == 0; /*0x4e0525*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e052e*/
  }
  v7 = this->q008; /*0x4e0531*/
  if ( v7 < this->Items ) /*0x4e0539*/
    this->Items = v7; /*0x4e053b*/
  return 1; /*0x4e053e*/
}


// ==== 0x004E0550  _DynamicVectorClass_PAVAbstractClass::Find  this=DynamicVector  sig=csp ====
int __thiscall Vector_Find(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4e0550*/
  result = 0; /*0x4e0553*/
  if ( v2 <= 0 ) /*0x4e0558*/
    return -1; /*0x4e056f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4e055e*/
  {
    if ( ++result >= v2 ) /*0x4e056d*/
      return -1; /*0x4e056d*/
  }
  return result; /*0x4e0572*/
}


// ==== 0x004E0580  _VectorClass_PAVFootClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FoggedObjectClass_42_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4e0582*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e058d*/
  {
    v3 = 0; /*0x4e058f*/
    if ( v2 <= 0 ) /*0x4e0593*/
      return 1; /*0x4e05b3*/
    v4 = (_DWORD *)this->Items; /*0x4e0595*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e059b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e05a4*/
    {
      ++v3; /*0x4e05a6*/
      ++v4; /*0x4e05a7*/
      if ( v3 >= v2 ) /*0x4e05ac*/
        return 1; /*0x4e05ac*/
    }
  }
  return 0; /*0x4e05ae*/
}


// ==== 0x004E05C0  _VectorClass_PAVFootClass::Release  this=VectorClass  sig=csp ====
char __thiscall FoggedObjectClass_42_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e05cc*/
  {
    this->IsInitialized = 0; /*0x4e05d6*/
    if ( a3 ) /*0x4e05dc*/
      v4 = a3; /*0x4e05f2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e05ee*/
    this->IsInitialized = 1; /*0x4e05f6*/
    if ( v4 ) /*0x4e05fa*/
    {
      if ( this->Items ) /*0x4e0605*/
      {
        v6 = this->Capacity; /*0x4e060c*/
        if ( a2 < v6 ) /*0x4e0611*/
          v6 = a2; /*0x4e0613*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e0619*/
          ++i; /*0x4e061e*/
        if ( this->IsAllocated ) /*0x4e062b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e0636*/
          this->Items = 0; /*0x4e063e*/
        }
      }
      this->Items = v4; /*0x4e0647*/
      this->Capacity = a2; /*0x4e064f*/
      this->IsAllocated = a3 == 0; /*0x4e0652*/
      return 1; /*0x4e0658*/
    }
    else
    {
      return 0; /*0x4e05ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e0662*/
    return 1; /*0x4e0668*/
  }
}


// ==== 0x004E0670  _VectorClass_PAVFootClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FoggedObjectClass_42_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4e067d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e0683*/
    *(_DWORD *)(this + 4) = 0; /*0x4e068b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e068e*/
  *(_DWORD *)(this + 8) = 0; /*0x4e0691*/
}


// ==== 0x004E06A0  _VectorClass_PAVFootClass::Read  this=VectorClass  sig=csp ====
int __thiscall FoggedObjectClass_42_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e06a0*/
    return 0; /*0x4e06a8*/
  v3 = *(_DWORD *)(this + 8); /*0x4e06ae*/
  result = 0; /*0x4e06b1*/
  if ( v3 <= 0 ) /*0x4e06b5*/
    return -1; /*0x4e06cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e06bb*/
  {
    if ( ++result >= v3 ) /*0x4e06ca*/
      return -1; /*0x4e06ca*/
  }
  return result; /*0x4e06aa*/
}


// ==== 0x004E06E0  _VectorClass_PAVFootClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FoggedObjectClass_42_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e06e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e06f5*/
  else
    return 0; /*0x4e06e7*/
}


// ==== 0x004E0700  FoggedObjectClass::SetCapacity  this=FoggedObjectClass  sig=csp ====
char __thiscall FoggedObjectClass_42_::sub_4E0700(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e070c*/
  {
    this->vtable4 = 0; /*0x4e0712*/
    if ( a3 ) /*0x4e0718*/
      v4 = a3; /*0x4e072e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e072a*/
    this->vtable4 = 1; /*0x4e0732*/
    if ( !v4 ) /*0x4e0736*/
      return 0; /*0x4e07aa*/
    if ( this->vtable2 ) /*0x4e0738*/
    {
      v5 = this->vtable3; /*0x4e073f*/
      if ( a2 < v5 ) /*0x4e0744*/
        v5 = a2; /*0x4e0746*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->vtable2 + 4 * i - 4) ) /*0x4e074c*/
        ++i; /*0x4e0751*/
      if ( this->u8_34 ) /*0x4e075e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e0769*/
        this->vtable2 = 0; /*0x4e0771*/
      }
    }
    this->vtable2 = v4; /*0x4e077a*/
    this->vtable3 = a2; /*0x4e0782*/
    this->u8_34 = a3 == 0; /*0x4e0785*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->vtable4)(this); /*0x4e078e*/
  }
  v7 = this->vtable3; /*0x4e0791*/
  if ( v7 < this->vtable2 ) /*0x4e0799*/
    this->vtable2 = v7; /*0x4e079b*/
  return 1; /*0x4e079e*/
}


// ==== 0x004E07B0  FoggedObjectClass::FindItem  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass_42_::sub_4E07B0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->vtable2; /*0x4e07b0*/
  result = 0; /*0x4e07b3*/
  if ( v2 <= 0 ) /*0x4e07b8*/
    return -1; /*0x4e07cf*/
  for ( i = (_DWORD *)this->vtable2; *i != *a2; ++i ) /*0x4e07be*/
  {
    if ( ++result >= v2 ) /*0x4e07cd*/
      return -1; /*0x4e07cd*/
  }
  return result; /*0x4e07d2*/
}


// ==== 0x004E07E0  _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::_vt01(
        int *this,
        int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x4e07eb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e07f0*/
  {
    v3 = 0; /*0x4e07f2*/
    if ( v2 <= 0 ) /*0x4e07f6*/
      return 1; /*0x4e0826*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4e07f8*/
    v5 = (_DWORD *)this->Items; /*0x4e07fb*/
    v6 = (_DWORD *)(v4 + 4); /*0x4e07fe*/
    v7 = v4 - (_DWORD)v5; /*0x4e0801*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4e0813*/
    {
      ++v3; /*0x4e0815*/
      v6 += 2; /*0x4e0816*/
      v5 += 2; /*0x4e0819*/
      if ( v3 >= v2 ) /*0x4e081e*/
        return 1; /*0x4e081e*/
    }
  }
  return 0; /*0x4e0820*/
}


// ==== 0x004E0840  _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::_vt02(
        void *this,
        int a2,
        int *a3)
{
  int *v4; // ebx
  int *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x4e084c*/
  {
    v4 = a3; /*0x4e0852*/
    this->IsInitialized = 0; /*0x4e0856*/
    if ( a3 ) /*0x4e085c*/
    {
      *a3 = a2; /*0x4e0897*/
      v6 = a3 + 1; /*0x4e089b*/
      if ( a2 - 1 >= 0 ) /*0x4e089e*/
      {
        v9 = a3 + 2; /*0x4e08a0*/
        v10 = a2; /*0x4e08a3*/
        do /*0x4e08ae*/
        {
          *v9 = 0; /*0x4e08a4*/
          v9 += 2; /*0x4e08aa*/
          --v10; /*0x4e08ad*/
        }
        while ( v10 ); /*0x4e08ae*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x4e0866*/
      if ( v5 ) /*0x4e0870*/
      {
        *v5 = a2; /*0x4e0875*/
        v6 = v5 + 1; /*0x4e0879*/
        if ( a2 - 1 >= 0 ) /*0x4e087c*/
        {
          v7 = v5 + 2; /*0x4e087e*/
          v8 = a2; /*0x4e0881*/
          do /*0x4e088c*/
          {
            *v7 = 0; /*0x4e0882*/
            v7 += 2; /*0x4e0888*/
            --v8; /*0x4e088b*/
          }
          while ( v8 ); /*0x4e088c*/
        }
      }
      else
      {
        v6 = 0; /*0x4e0890*/
      }
    }
    this->IsInitialized = 1; /*0x4e08b2*/
    if ( v6 ) /*0x4e08b6*/
    {
      if ( this->Items ) /*0x4e08c1*/
      {
        v12 = this->Capacity; /*0x4e08c8*/
        if ( a2 < v12 ) /*0x4e08cd*/
          v12 = a2; /*0x4e08cf*/
        v13 = 0; /*0x4e08d1*/
        if ( v12 > 0 ) /*0x4e08d5*/
        {
          do /*0x4e08ed*/
          {
            v14 = this->Items; /*0x4e08d7*/
            ++v13; /*0x4e08da*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x4e08e1*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x4e08e9*/
          }
          while ( v13 < v12 ); /*0x4e08ed*/
          v4 = a3; /*0x4e08ef*/
        }
        if ( this->IsAllocated ) /*0x4e08f3*/
        {
          v15 = this->Items; /*0x4e08fa*/
          if ( v15 ) /*0x4e08ff*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x4e0909*/
          this->Items = 0; /*0x4e0911*/
        }
      }
      this->Items = v6; /*0x4e091a*/
      this->Capacity = a2; /*0x4e0922*/
      this->IsAllocated = v4 == 0; /*0x4e0925*/
      return 1; /*0x4e092b*/
    }
    else
    {
      return 0; /*0x4e08bb*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e0935*/
    return 1; /*0x4e093b*/
  }
}


// ==== 0x004E0950  _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::_vt03(int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4); /*0x4e0956*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e095d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x4e096e*/
    *(_DWORD *)(this + 4) = 0; /*0x4e0976*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e0979*/
  *(_DWORD *)(this + 8) = 0; /*0x4e097c*/
}


// ==== 0x004E0990  _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::_vt04(
        int this,
        _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e0990*/
    return 0; /*0x4e099e*/
  v3 = *(_DWORD *)(this + 8); /*0x4e09a4*/
  result = 0; /*0x4e09a7*/
  if ( v3 <= 0 ) /*0x4e09ab*/
    return -1; /*0x4e09cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x4e09b1*/
  {
    if ( ++result >= v3 ) /*0x4e09ca*/
      return -1; /*0x4e09ca*/
  }
  return result; /*0x4e099b*/
}


// ==== 0x004E09E0  _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::_vt05(
        int this,
        int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e09e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x4e09f5*/
  else
    return 0; /*0x4e09e7*/
}


// ==== 0x004E0A00  VectorClass::sub_4E0A00  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_4E0A00(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax

  this->Items = 0; /*0x4e0a0a*/
  this->Capacity = a2; /*0x4e0a11*/
  this->q030 = 1; /*0x4e0a14*/
  this->q034 = 0; /*0x4e0a18*/
  *this = &vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass; /*0x4e0a1c*/
  if ( a2 ) /*0x4e0a22*/
  {
    if ( a3 ) /*0x4e0a2a*/
    {
      *a3 = a2; /*0x4e0a2f*/
      if ( a2 - 1 >= 0 ) /*0x4e0a36*/
      {
        v4 = a3 + 2; /*0x4e0a38*/
        v5 = a2; /*0x4e0a3b*/
        do /*0x4e0a46*/
        {
          *v4 = 0; /*0x4e0a3c*/
          v4 += 2; /*0x4e0a42*/
          --v5; /*0x4e0a45*/
        }
        while ( v5 ); /*0x4e0a46*/
      }
      this->Items = a3 + 1; /*0x4e0a48*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2 + 4); /*0x4e0a55*/
      if ( v6 ) /*0x4e0a5f*/
      {
        *v6 = a2; /*0x4e0a64*/
        v7 = v6 + 1; /*0x4e0a68*/
        if ( a2 - 1 >= 0 ) /*0x4e0a6b*/
        {
          v8 = v6 + 2; /*0x4e0a6d*/
          v9 = a2; /*0x4e0a70*/
          do /*0x4e0a7b*/
          {
            *v8 = 0; /*0x4e0a71*/
            v8 += 2; /*0x4e0a77*/
            --v9; /*0x4e0a7a*/
          }
          while ( v9 ); /*0x4e0a7b*/
        }
        v10 = v7; /*0x4e0a7d*/
      }
      else
      {
        v10 = 0; /*0x4e0a81*/
      }
      this->Items = v10; /*0x4e0a83*/
      this->q034 = 1; /*0x4e0a86*/
    }
  }
  *this = &vt_DynamicVectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass; /*0x4e0a8a*/
  this->u32_14 = 10; /*0x4e0a90*/
  this->q010 = 0; /*0x4e0a97*/
  return this; /*0x4e0aa0*/
}


// ==== 0x004E0AB0  _DynamicVectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::sub_4E0AB0(
        int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4); /*0x4e0ab6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e0ab9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e0ac0*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x4e0ad1*/
    *(_DWORD *)(this + 4) = 0; /*0x4e0ad9*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e0adc*/
  *(_DWORD *)(this + 8) = 0; /*0x4e0adf*/
}


// ==== 0x004E0AF0  _DynamicVectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::sub_4E0AF0(
        int this,
        int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e0af0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x4e0b05*/
  else
    return 0; /*0x4e0af7*/
}


// ==== 0x004E0B10  _DynamicVectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::sub_4E0B10(
        void *this,
        int a2,
        int *a3)
{
  int *v4; // ebp
  int *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  void *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x4e0b1c*/
  {
    v4 = a3; /*0x4e0b22*/
    this->IsInitialized = 0; /*0x4e0b26*/
    if ( a3 ) /*0x4e0b2c*/
    {
      *a3 = a2; /*0x4e0b67*/
      v6 = a3 + 1; /*0x4e0b6c*/
      if ( a2 - 1 >= 0 ) /*0x4e0b6f*/
      {
        v9 = a3 + 2; /*0x4e0b71*/
        v10 = a2; /*0x4e0b74*/
        do /*0x4e0b7f*/
        {
          *v9 = 0; /*0x4e0b75*/
          v9 += 2; /*0x4e0b7b*/
          --v10; /*0x4e0b7e*/
        }
        while ( v10 ); /*0x4e0b7f*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x4e0b36*/
      if ( v5 ) /*0x4e0b40*/
      {
        *v5 = a2; /*0x4e0b45*/
        v6 = v5 + 1; /*0x4e0b49*/
        if ( a2 - 1 >= 0 ) /*0x4e0b4c*/
        {
          v7 = v5 + 2; /*0x4e0b4e*/
          v8 = a2; /*0x4e0b51*/
          do /*0x4e0b5c*/
          {
            *v7 = 0; /*0x4e0b52*/
            v7 += 2; /*0x4e0b58*/
            --v8; /*0x4e0b5b*/
          }
          while ( v8 ); /*0x4e0b5c*/
        }
      }
      else
      {
        v6 = 0; /*0x4e0b60*/
      }
    }
    this->IsInitialized = 1; /*0x4e0b83*/
    if ( !v6 ) /*0x4e0b87*/
      return 0; /*0x4e0c27*/
    if ( this->Items ) /*0x4e0b8d*/
    {
      v11 = this->q008; /*0x4e0b94*/
      if ( a2 < v11 ) /*0x4e0b99*/
        v11 = a2; /*0x4e0b9b*/
      v12 = 0; /*0x4e0b9d*/
      if ( v11 > 0 ) /*0x4e0ba1*/
      {
        do /*0x4e0bb9*/
        {
          v13 = this->Items; /*0x4e0ba3*/
          ++v12; /*0x4e0ba6*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x4e0bad*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x4e0bb5*/
        }
        while ( v12 < v11 ); /*0x4e0bb9*/
        v4 = a3; /*0x4e0bbb*/
      }
      if ( this->IsAllocated ) /*0x4e0bbf*/
      {
        v14 = this->Items; /*0x4e0bc6*/
        if ( v14 ) /*0x4e0bcb*/
        {
          v15 = (void *)(v14 - 4); /*0x4e0bd0*/
          Array::ForEachReverse(v14, 8, *(_DWORD *)(v14 - 4), (int (__thiscall *)(int))nullsub_138); /*0x4e0bdc*/
          __3_YAXPAX_Z(v15); /*0x4e0be2*/
          v4 = a3; /*0x4e0be7*/
        }
        this->Items = 0; /*0x4e0bee*/
      }
    }
    this->Items = v6; /*0x4e0bf7*/
    this->q008 = a2; /*0x4e0bff*/
    this->IsAllocated = v4 == 0; /*0x4e0c02*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e0c0b*/
  }
  v16 = this->q008; /*0x4e0c0e*/
  if ( v16 < this->Items ) /*0x4e0c16*/
    this->Items = v16; /*0x4e0c18*/
  return 1; /*0x4e0c1b*/
}


// ==== 0x004E0C30  nullsub_138  this=-  sig=ida-proto ====
void __thiscall nullsub_138(void *this)
{
  ; /*0x4e0c30*/
}


// ==== 0x004E0C40  PairVector::PushBack  this=PairVector  sig=csp ====
char __thiscall PairVector::PushBack(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->q002; /*0x4e0c43*/
  if ( this->q004 >= v3 ) /*0x4e0c4b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x4e0c56*/
      return 0; /*0x4e0c56*/
    v4 = this->q005; /*0x4e0c58*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x4e0c68*/
      return 0; /*0x4e0c6f*/
  }
  v6 = this->q004; /*0x4e0c75*/
  v7 = this->q004; /*0x4e0c78*/
  this->q004 = v6 + 1; /*0x4e0c7e*/
  *(_DWORD *)(v7 + 8 * v6) = *a2; /*0x4e0c87*/
  *(_DWORD *)(v7 + 8 * v6 + 4) = a2[1]; /*0x4e0c8e*/
  return 1; /*0x4e0c71*/
}


// ==== 0x004E0CA0  _DynamicVectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::sub_4E0CA0(
        int *this,
        _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4e0ca0*/
  result = 0; /*0x4e0ca5*/
  if ( v2 <= 0 ) /*0x4e0cab*/
    return -1; /*0x4e0ccc*/
  for ( i = (_DWORD *)this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x4e0cb1*/
  {
    if ( ++result >= v2 ) /*0x4e0cca*/
      return -1; /*0x4e0cca*/
  }
  return result; /*0x4e0ccf*/
}


// ==== 0x004E0CE0  _VectorClass_PAVFootClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall FoggedObjectClass_42_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4e0ce3*/
  *Block = &vt_VectorClass_FootClass; /*0x4e0ce6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4e0cf0*/
  {
    __3_YAXPAX_Z(v3); /*0x4e0cf8*/
    *(Block + 1) = 0; /*0x4e0d00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4e0d0b*/
  *(Block + 2) = 0; /*0x4e0d11*/
  if ( (a2 & 1) != 0 ) /*0x4e0d18*/
    __3_YAXPAX_Z(Block); /*0x4e0d1b*/
  return (VectorClass *)Block; /*0x4e0d25*/
}


// ==== 0x004E0D30    this=FoggedObjectClass_42_  sig=? ====
_DWORD *__thiscall FoggedObjectClass_42_::loc_4E0D30(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4e0d33*/
  *Block = &vt_VectorClass_FootClass; /*0x4e0d36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4e0d40*/
  {
    __3_YAXPAX_Z(v3); /*0x4e0d48*/
    *(Block + 1) = 0; /*0x4e0d50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4e0d5b*/
  *(Block + 2) = 0; /*0x4e0d61*/
  if ( (a2 & 1) != 0 ) /*0x4e0d68*/
    __3_YAXPAX_Z(Block); /*0x4e0d6b*/
  return Block; /*0x4e0d75*/
}


// ==== 0x004E0D80  _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::QueryInterface(
        _DWORD *Block,
        char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x4e0d83*/
  *Block = &vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass; /*0x4e0d86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4e0d90*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x4e0da3*/
    *(Block + 1) = 0; /*0x4e0dab*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4e0db6*/
  *(Block + 2) = 0; /*0x4e0dbc*/
  if ( (a2 & 1) != 0 ) /*0x4e0dc3*/
    __3_YAXPAX_Z(Block); /*0x4e0dc6*/
  return (VectorClass *)Block; /*0x4e0dd0*/
}


// ==== 0x004E0E20  _DynamicVectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass::Constructor(
        _DWORD *Block,
        char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x4e0e23*/
  *Block = &vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass; /*0x4e0e26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4e0e30*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x4e0e43*/
    *(Block + 1) = 0; /*0x4e0e4b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4e0e56*/
  *(Block + 2) = 0; /*0x4e0e5c*/
  if ( (a2 & 1) != 0 ) /*0x4e0e63*/
    __3_YAXPAX_Z(Block); /*0x4e0e66*/
  return (DynamicVector *)Block; /*0x4e0e70*/
}


// ==== 0x004E0E80  AbstractClassVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClassVector::Construct(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  this->Items = 0; /*0x4e0e8b*/
  this->Capacity = aP1; /*0x4e0e8e*/
  this->q030 = 1; /*0x4e0e91*/
  this->q034 = 0; /*0x4e0e95*/
  *this = &vt_VectorClass_AbstractClass; /*0x4e0e98*/
  if ( aP1 ) /*0x4e0e9e*/
  {
    if ( aP2 ) /*0x4e0ea6*/
    {
      this->Items = aP2; /*0x4e0ea8*/
      return this; /*0x4e0eae*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x4e0ebd*/
    this->q034 = 1; /*0x4e0ec0*/
  }
  return this; /*0x4e0ead*/
}


// ==== 0x004E0ED0  FootClass::RemoveFromPointerArray  this=FootClass  sig=csp ====
char __thiscall sub_4E0ED0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->uniqueId; /*0x4e0ed0*/
  v3 = a2; /*0x4e0ed3*/
  if ( a2 >= v2 ) /*0x4e0ed9*/
    return 0; /*0x4e0efc*/
  v4 = v2 - 1; /*0x4e0edb*/
  this->uniqueId = v4; /*0x4e0ede*/
  if ( a2 < v4 ) /*0x4e0ee1*/
  {
    do /*0x4e0ef4*/
    {
      ++v3; /*0x4e0ee7*/
      *(_DWORD *)(this->vtable2 + 4 * v3 - 4) = *(_DWORD *)(this->vtable2 + 4 * v3); /*0x4e0eeb*/
    }
    while ( v3 < this->uniqueId ); /*0x4e0ef4*/
  }
  return 1; /*0x4e0ef9*/
}


// ==== 0x004E0F10  sub_4E0F10  this=-  sig=ida-proto ====
void sub_4E0F10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4e0f1c*/
  MEMORY[0x8B3E18] = Math::Sqrt(v0 + v0); /*0x4e0f2e*/
}


// ==== 0x004E0F40  sub_4E0F40  this=-  sig=ida-proto ====
void sub_4E0F40()
{
  MEMORY[0x8B3E68] = MEMORY[0x8B3E18] / 60.0; /*0x4e0f4c*/
}


// ==== 0x004E0F60  sub_4E0F60  this=-  sig=ida-proto ====
void sub_4E0F60()
{
  MEMORY[0x8B3E50] = 1.0 / MEMORY[0x8B3E68]; /*0x4e0f6c*/
}


// ==== 0x004E0F80  sub_4E0F80  this=-  sig=ida-proto ====
void sub_4E0F80()
{
  MEMORY[0x8B3E48] = 0.0174532925199433 * 45.0; /*0x4e0f8c*/
}


// ==== 0x004E0FA0  sub_4E0FA0  this=-  sig=ida-proto ====
void sub_4E0FA0()
{
  MEMORY[0x8B3E20] = 0.0174532925199433 * 60.0; /*0x4e0fac*/
}


// ==== 0x004E0FC0  sub_4E0FC0  this=-  sig=ida-proto ====
void sub_4E0FC0()
{
  MEMORY[0x8B3E08] = 0.0174532925199433 * 90.0; /*0x4e0fcc*/
}


// ==== 0x004E0FE0  sub_4E0FE0  this=-  sig=ida-proto ====
__int64 sub_4E0FE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3E08] - MEMORY[0x8B3E20]); /*0x4e0ff2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3E18] * 0.5); /*0x4e1006*/
  MEMORY[0x8B3E70] = result; /*0x4e100b*/
  return result; /*0x4e1010*/
}


// ==== 0x004E1020  sub_4E1020  this=-  sig=ida-proto ====
void sub_4E1020()
{
  MEMORY[0x8B3E28] = Math::ArcTan((double)MEMORY[0x8B3E70] * 0.00390625); /*0x4e1037*/
}


// ==== 0x004E1050  sub_4E1050  this=-  sig=ida-proto ====
void sub_4E1050()
{
  MEMORY[0x8B3E40] = Math::ArcTan((double)(2 * MEMORY[0x8B3E70]) / MEMORY[0x8B3E18]); /*0x4e1072*/
}


// ==== 0x004E1080  sub_4E1080  this=-  sig=ida-proto ====
__int64 sub_4E1080()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3E70]) + 0.5); /*0x4e109b*/
  MEMORY[0x8B3E64] = result; /*0x4e10a0*/
  return result; /*0x4e10a6*/
}


// ==== 0x004E10B0  sub_4E10B0  this=-  sig=ida-proto ====
int sub_4E10B0()
{
  MEMORY[0x8B3E10] = 0; /*0x4e10b2*/
  MEMORY[0x8B3E12] = 0; /*0x4e10b8*/
  return 0; /*0x4e10be*/
}


// ==== 0x004E10C0  sub_4E10C0  this=-  sig=ida-proto ====
int sub_4E10C0()
{
  MEMORY[0x8B3E30] = 0; /*0x4e10c2*/
  MEMORY[0x8B3E34] = 0; /*0x4e10c7*/
  MEMORY[0x8B3E38] = 0; /*0x4e10cc*/
  return 0; /*0x4e10d1*/
}


// ==== 0x004E10E0  sub_4E10E0  this=-  sig=ida-proto ====
int sub_4E10E0()
{
  MEMORY[0x8B3E60] = 0; /*0x4e10e5*/
  MEMORY[0x8B3E58] = 128; /*0x4e10ef*/
  MEMORY[0x8B3E5C] = 128; /*0x4e10f4*/
  return 128; /*0x4e10f9*/
}


// ==== 0x004E1100  BulletClass::ResetDetonationTimer  this=BulletClass  sig=csp ====
_DWORD *__thiscall sub_4E1100(_DWORD *this)
{
  *this = MEMORY[0xA8ED84]; /*0x4e1108*/
  this->vtable3 = 0; /*0x4e110c*/
  this->vtable4 = MEMORY[0xA8ED84]; /*0x4e1115*/
  this->q014 = 0; /*0x4e1118*/
  this->q018 = 0; /*0x4e111b*/
  this->q01C = 0; /*0x4e111e*/
  this->q020 = 0; /*0x4e1121*/
  this->q024 = 0; /*0x4e1124*/
  return this; /*0x4e1127*/
}


// ==== 0x004E1130  BulletClass::InitDetonationTimer  this=BulletClass  sig=csp ====
__int64 __thiscall sub_4E1130(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int v6; // ecx
  double v7; // st7
  __int64 result; // rax
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v6 = a5; /*0x4e113a*/
  if ( a5 <= a4 ) /*0x4e1141*/
    v6 = a4; /*0x4e1143*/
  *this = MEMORY[0xA8ED84]; /*0x4e114f*/
  this->vtable2 = v9; /*0x4e1155*/
  this->vtable3 = v6; /*0x4e1158*/
  this->vtable4 = MEMORY[0xA8ED84]; /*0x4e1163*/
  this->q010 = v9; /*0x4e116a*/
  this->q014 = a4; /*0x4e1171*/
  this->q018 = *a3; /*0x4e117b*/
  this->q01C = a3[1]; /*0x4e1180*/
  this->q020 = a3[2]; /*0x4e1186*/
  v10 = a2[1] - a3[1]; /*0x4e11a2*/
  v11 = a2[2] - a3[2]; /*0x4e11af*/
  v7 = Math::Sqrt((double)(*a2 - *a3) * (double)(*a2 - *a3) + (double)v11 * (double)v11 + (double)v10 * (double)v10); /*0x4e11d4*/
  result = Math::RoundToInt(v7); /*0x4e11dc*/
  this->q024 = result; /*0x4e11e1*/
  return result; /*0x4e11e4*/
}


// ==== 0x004E11F0  BulletClass::CheckProximityDetonation  this=BulletClass  sig=csp ====
int __thiscall sub_4E11F0(_DWORD *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v3 = this->vtable4; /*0x4e11f6*/
  v4 = this->q014; /*0x4e11f9*/
  if ( v3 == -1 ) /*0x4e11ff*/
  {
LABEL_4:
    if ( v4 ) /*0x4e1211*/
      return 0; /*0x4e1211*/
    goto LABEL_5; /*0x4e1211*/
  }
  if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x4e120b*/
  {
    v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x4e120d*/
    goto LABEL_4; /*0x4e120d*/
  }
LABEL_5:
  v8 = a2[1] - this->q01C; /*0x4e1217*/
  v9 = a2[2] - this->q020; /*0x4e123d*/
  v5 = Math::Sqrt((double)(*a2 - this->q018) * (double)(*a2 - this->q018) + (double)v8 * (double)v8 + (double)v9 * (double)v9); /*0x4e1266*/
  v6 = (int)Math::RoundToInt(v5) / 2; /*0x4e1276*/
  if ( v6 < 32 ) /*0x4e127b*/
    return 1; /*0x4e1286*/
  if ( v6 < 256 && v6 > this->q024 ) /*0x4e1293*/
    return 2; /*0x4e129e*/
  this->q024 = v6; /*0x4e12a1*/
  return 0; /*0x4e1282*/
}


// ==== 0x004E12B0  sub_4E12B0  this=-  sig=ida-proto ====
int sub_4E12B0()
{
  MEMORY[0x8B3E78] = 0; /*0x4e12b2*/
  MEMORY[0x8B3E7C] = 0; /*0x4e12b7*/
  MEMORY[0x8B3E80] = 0; /*0x4e12bc*/
  MEMORY[0x8B3E84] = 0; /*0x4e12c1*/
  return 0; /*0x4e12c6*/
}


// ==== 0x004E12D0  BuildingAnim::GetType  this=BuildingAnim  sig=csp ====
int BuildingAnim_GetType()
{
  int v0; // eax

  v0 = FindBuildingAnimByName(off_822724, 1); /*0x4e12db*/
  if ( v0 ) /*0x4e12e2*/
    return *(_DWORD *)v0; /*0x4e12e4*/
  else
    return 0; /*0x4e12e7*/
}


// ==== 0x004E12F0  GadgetClass::Construct  this=GadgetClass  sig=csp ====
_DWORD *__thiscall GadgetClass_Constructor(_DWORD *this, int a2, int a3, int a4, int a5, int a6, char a7)
{
  _DWORD *result; // eax

  result = this; /*0x4e12f4*/
  this->Height = a3; /*0x4e12fb*/
  this->Width = a2; /*0x4e1302*/
  this->ID = a5; /*0x4e1309*/
  this->Visible = a4; /*0x4e1312*/
  this->X = 0; /*0x4e1319*/
  this->Y = 0; /*0x4e131c*/
  this->u32_70 = 0; /*0x4e131f*/
  this->q01E = 0; /*0x4e1322*/
  this->q01D = a7; /*0x4e1327*/
  this->u32_20 = a6; /*0x4e132a*/
  *this = &GadgetClass::`vftable'; /*0x4e132d*/
  if ( a7 ) /*0x4e1334*/
    this->u32_20 = a6 | 5; /*0x4e1339*/
  return result; /*0x4e1333*/
}


// ==== 0x004E1340  ControlClass::Constructor  this=LinkClass  sig=csp ====
_DWORD *__thiscall ControlClass::Constructor(_DWORD *this, EditClass *aP1)
{
  this->m_Next = 0; /*0x4e1344*/
  this->m_Prev = 0; /*0x4e1347*/
  *this = &vt_LinkClass; /*0x4e134e*/
  this->LinkClass_field_0C = aP1[3]; /*0x4e1357*/
  this->q010 = aP1[4]; /*0x4e135d*/
  this->q005 = aP1[5]; /*0x4e1363*/
  this->q006 = aP1[6]; /*0x4e1369*/
  *((_BYTE *)this + 28) = aP1[7].__tail_0[0]; /*0x4e136f*/
  *((_BYTE *)this + 29) = aP1[7].__tail_0[1]; /*0x4e1375*/
  this->q01E = aP1[7].__tail_0[2]; /*0x4e137b*/
  this->m_Prev = aP1[8]; /*0x4e1381*/
  *this = &vt_GadgetClass; /*0x4e1384*/
  return this; /*0x4e138a*/
}


// ==== 0x004E1390  GadgetClass::Dtor  this=GadgetClass  sig=csp ====
int __thiscall GadgetClass_Dtor(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  *this = &GadgetClass::`vftable'; /*0x4e1390*/
  v1 = MEMORY[0x8B3E90]; /*0x4e1396*/
  if ( this == (_DWORD *)MEMORY[0x8B3E90] ) /*0x4e139f*/
  {
    v2 = this->u32_20; /*0x4e13a1*/
    BYTE1(v2) &= ~1u; /*0x4e13a4*/
    this->u32_20 = v2; /*0x4e13a7*/
    v1 = 0; /*0x4e13aa*/
    MEMORY[0x8B3E90] = 0; /*0x4e13ac*/
  }
  if ( this == (_DWORD *)MEMORY[0x8B3E88] ) /*0x4e13ba*/
    MEMORY[0x8B3E88] = 0; /*0x4e13bc*/
  if ( this == (_DWORD *)MEMORY[0x8B3E8C] ) /*0x4e13cb*/
    MEMORY[0x8B3E8C] = 0; /*0x4e13cd*/
  if ( this == (_DWORD *)v1 ) /*0x4e13d5*/
    MEMORY[0x8B3E90] = 0; /*0x4e13d7*/
  return LinkClass::Destruct();
}


// ==== 0x004E13F0  GadgetClass::DispatchEvent  this=GadgetClass  sig=csp ====
int __thiscall ObjectClass_DispatchEvent(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax

  v6 = this->u32_20 & a3; /*0x4e13fe*/
  if ( this == (_DWORD *)MEMORY[0x8B3E88] /*0x4e142b*/
    || (v6 & 0x100) != 0
    || v6 && (unsigned int)(a4 - this->Width) < this->Visible && (unsigned int)(a5 - this->Height) < this->ID )
  {
    return (*(int (__thiscall **)(_DWORD *, int, int, int))(*this + 124))(this, v6, a2, a6); /*0x4e1440*/
  }
  else
  {
    return 0; /*0x4e142d*/
  }
}


// ==== 0x004E1450  GadgetClass::Hide  this=GadgetClass  sig=csp ====
int __thiscall DialogControl_Hide(_BYTE *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this; /*0x4e1450*/
  this->q01E = 0; /*0x4e1452*/
  this->q01C = 1; /*0x4e1456*/
  return (*(int (**)(void))(v1 + 84))();
}


// ==== 0x004E1460  GadgetClass::Show  this=GadgetClass  sig=csp ====
int __thiscall DialogControl_Show(_BYTE *this)
{
  this->q01E = 1; /*0x4e1462*/
  this->q01C = 1; /*0x4e1465*/
  return (*(int (__thiscall **)(_BYTE *))(this->q054)(this);
}


// ==== 0x004E1470  DialogControl::IsHidden  this=GadgetClass  sig=csp ====
BOOL __thiscall DialogControl::IsHidden(_BYTE *this)
{
  return this->q01E == 0; /*0x4e147a*/
}


// ==== 0x004E1480  GadgetClass::Destroy  this=GadgetClass  sig=csp ====
int __thiscall LinkClass_Destroy(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 84))(this); /*0x4e1485*/
  return LinkedList::RemoveNode(this); /*0x4e148f*/
}


// ==== 0x004E14A0  GadgetClass::InputThunkA  this=GadgetClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::InputThunkA(_DWORD *this)
{
  return ObjectClass::GetWidth(this);
}


// ==== 0x004E14B0  GadgetClass::InputThunkB  this=GadgetClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::InputThunkB(_DWORD *this)
{
  return ObjectClass::GetHeight(this);
}


// ==== 0x004E14C0  GadgetClass::DestroyChain  this=GadgetClass  sig=csp ====
int __thiscall ObjectClass_DestroyChain(void *this)
{
  int v1; // esi
  int result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v1 = (int)this; /*0x4e14c1*/
  for ( result = (*(int (__thiscall **)(void *))(this->Y)(this); /*0x4e14ca*/
        result;
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1) )
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1); /*0x4e14d3*/
  }
  for ( ; v1; result = (**v3)(v3, 1) ) /*0x4e14e2*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 84))(v1); /*0x4e14e9*/
    v3 = (int (__thiscall ***)(_DWORD, int))v1; /*0x4e14f0*/
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1); /*0x4e14f7*/
  }
  return result; /*0x4e1508*/
}


// ==== 0x004E1510  GadgetClass::StubReturnVoid  this=GadgetClass  sig=csp ====
void CheckListClass::StubReturnVoid()
{
  ; /*0x4e1510*/
}


// ==== 0x004E1520  GadgetClass::StubReturn  this=GadgetClass  sig=csp ====
void CheckListClass::StubReturn()
{
  ; /*0x4e1520*/
}


// ==== 0x004E1530  GadgetClass::ActivateThunk  this=GadgetClass  sig=csp ====
int __thiscall COMObject_ActivateThunk(_BYTE *this, int a2, int a3, int a4)
{
  int v4; // edx

  if ( !a2 ) /*0x4e1536*/
    return 0; /*0x4e154a*/
  v4 = *(_DWORD *)this; /*0x4e1538*/
  this->q01C = 1; /*0x4e153b*/
  (*(void (__stdcall **)(int))(v4 + 120))(a2); /*0x4e153f*/
  return 1; /*0x4e1547*/
}


// ==== 0x004E1550  GadgetClass::ClearState  this=GadgetClass  sig=csp ====
int __thiscall GadgetClass_ClearState(_BYTE *this, int a2)
{
  if ( !a2 && !this->q01C ) /*0x4e1558*/
    return 0; /*0x4e155f*/
  this->q01C = 0; /*0x4e1564*/
  return 1; /*0x4e1561*/
}


// ==== 0x004E1570  GadgetClass::BroadcastFlag  this=GadgetClass  sig=csp ====
void __thiscall ObjectClass_BroadcastFlag(void *this, unsigned __int8 a2)
{
  int v2; // esi

  v2 = (int)this; /*0x4e1571*/
  if ( this ) /*0x4e1575*/
  {
    do /*0x4e1595*/
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 108))(v2, a2); /*0x4e1587*/
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x4e1591*/
    }
    while ( v2 ); /*0x4e1595*/
  }
}


// ==== 0x004E15A0  InputManager::FindBestHitElement  this=GadgetClass  sig=csp ====
_DWORD *__thiscall sub_4E15A0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // esi
  _DWORD *v8; // [esp+0h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v9 = 1024; /*0x4e15ae*/
  result = 0; /*0x4e15b2*/
  v10 = 768; /*0x4e15b6*/
  v8 = 0; /*0x4e15ba*/
  if ( this ) /*0x4e15be*/
  {
    do /*0x4e1624*/
    {
      if ( !this->q01E ) /*0x4e15c4*/
      {
        v4 = this->Width; /*0x4e15cf*/
        v5 = this->Height; /*0x4e15d2*/
        v6 = this->Visible; /*0x4e15d5*/
        v7 = this->ID; /*0x4e15d8*/
        if ( a2 >= v4 && a2 < v6 + v4 && a3 >= v5 && a3 < v5 + v7 && v6 * v7 <= v9 * v10 ) /*0x4e1605*/
        {
          v9 = this->Visible; /*0x4e160f*/
          v10 = this->ID; /*0x4e1613*/
          v8 = this; /*0x4e1617*/
        }
      }
      this = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x4e1620*/
    }
    while ( this ); /*0x4e1624*/
    return v8; /*0x4e1626*/
  }
  return result; /*0x4e162e*/
}


// ==== 0x004E1640  GadgetClass::ProcessEvents  this=GadgetClass  sig=csp ====
int __thiscall InputManager_ProcessEvents(_BYTE *this)
{
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // ebp
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v11; // [esp+1Ch] [ebp-Ch] BYREF
  int v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+24h] [ebp-4h]

  v1 = this; /*0x4e1646*/
  v13 = 0; /*0x4e1653*/
  if ( (_BYTE *)MEMORY[0x8B3E8C] != this ) /*0x4e1657*/
  {
    MEMORY[0x8B3E8C] = (int)this; /*0x4e1659*/
    v13 = 1; /*0x4e165f*/
    MEMORY[0x8B3E88] = 0; /*0x4e1667*/
    MEMORY[0x8B3E90] = 0; /*0x4e166c*/
  }
  v2 = (unsigned __int16)EventQueue::Process(MEMORY[0x87F770]); /*0x4e167c*/
  v11 = v2; /*0x4e1681*/
  if ( v2 ) /*0x4e1685*/
  {
    v2 = (unsigned __int16)EventQueue::Read(MEMORY[0x87F770]); /*0x4e1692*/
    v11 = v2; /*0x4e1697*/
  }
  if ( (unsigned __int8)v2 == 1 || (unsigned __int8)v2 == 2 ) /*0x4e16a8*/
  {
    v3 = *(_DWORD *)MEMORY[0x87F770]; /*0x4e16cb*/
    v4 = *((_DWORD *)MEMORY[0x87F770] + 1); /*0x4e16cd*/
  }
  else
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640]); /*0x4e16bb*/
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]); /*0x4e16c2*/
  }
  v5 = InputManager::FindBestHitElement(v3, v4); /*0x4e16df*/
  if ( v5 != MEMORY[0x8B3E94] ) /*0x4e16e3*/
  {
    if ( MEMORY[0x8B3E94] ) /*0x4e16e7*/
      (*(void (**)(void))(*(_DWORD *)MEMORY[0x8B3E94] + 116))(); /*0x4e16eb*/
    MEMORY[0x8B3E94] = v5; /*0x4e16f0*/
    if ( v5 ) /*0x4e16f6*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 112))(v5); /*0x4e16fc*/
  }
  v6 = 0; /*0x4e1703*/
  if ( v11 ) /*0x4e1707*/
  {
    switch ( v11 ) /*0x4e170c*/
    {
      case 1: /*0x4e170c*/
        v6 = 1; /*0x4e170e*/
        break;
      case 2: /*0x4e170c*/
        v6 = 16; /*0x4e1717*/
        break;
      case 2049: /*0x4e170c*/
        v6 = 4; /*0x4e1725*/
        break;
      case 2050: /*0x4e170c*/
        v6 = 64; /*0x4e1733*/
        break;
    }
  }
  v12 = 0; /*0x4e1744*/
  if ( Mouse::IsButtonDown(MEMORY[0xA8EC08]) || Mouse::IsButtonDown(MEMORY[0xA8EC0C]) ) /*0x4e1761*/
    v12 = 1; /*0x4e176a*/
  if ( Mouse::IsButtonDown(MEMORY[0xA8EC00]) || Mouse::IsButtonDown(MEMORY[0xA8EC04]) ) /*0x4e1793*/
  {
    v7 = v12; /*0x4e179c*/
    LOBYTE(v7) = v12 | 2; /*0x4e17a0*/
    v12 = v7; /*0x4e17a2*/
  }
  if ( Mouse::IsButtonDown(MEMORY[0xA8EBF8]) || Mouse::IsButtonDown(MEMORY[0xA8EBFC]) ) /*0x4e17c7*/
  {
    v8 = v12; /*0x4e17d0*/
    LOBYTE(v8) = v12 | 4; /*0x4e17d4*/
    v12 = v8; /*0x4e17d6*/
  }
  if ( v11 ) /*0x4e17e0*/
  {
    if ( !v6 ) /*0x4e17e4*/
      v6 = 256; /*0x4e17e6*/
  }
  else
  {
    if ( Mouse::IsButtonDown(1u) ) /*0x4e17f5*/
      v9 = v6 | 2; /*0x4e17fe*/
    else
      v9 = v6 | 8; /*0x4e1803*/
    if ( Mouse::IsButtonDown(2u) ) /*0x4e180e*/
      v6 = v9 | 0x20; /*0x4e1817*/
    else
      v6 = v9 | 0x80; /*0x4e181c*/
  }
  if ( MEMORY[0x8B3E88] ) /*0x4e182a*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x8B3E88] + 108))(MEMORY[0x8B3E88], 0); /*0x4e1830*/
    v1 = (_BYTE *)MEMORY[0x8B3E88]; /*0x4e1845*/
    (*(void (__stdcall **)(int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x8B3E88] + 128))(&v11, v6, v3, v4, 0); /*0x4e1847*/
    if ( MEMORY[0x8B3E88] ) /*0x4e1855*/
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x8B3E88] + 108))(MEMORY[0x8B3E88], 0); /*0x4e185f*/
      return v11; /*0x4e186d*/
    }
    goto LABEL_53; /*0x4e1855*/
  }
  if ( MEMORY[0x8B3E90] && (v6 & 0x100) != 0 ) /*0x4e187e*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)MEMORY[0x8B3E90] + 108))(0); /*0x4e1884*/
    (*(void (__thiscall **)(int, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x8B3E90] + 128))( /*0x4e1899*/
      MEMORY[0x8B3E90],
      &v11,
      v6,
      v3,
      v4,
      0);
    if ( MEMORY[0x8B3E90] ) /*0x4e18a7*/
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x8B3E90] + 108))(MEMORY[0x8B3E90], 0); /*0x4e18ad*/
      return v11; /*0x4e18bb*/
    }
  }
  else if ( v1 ) /*0x4e18be*/
  {
    while ( 1 ) /*0x4e18c4*/
    {
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v1 + 108))(v1, v13); /*0x4e18c9*/
      if ( !v1[30] ) /*0x4e18cc*/
      {
        if ( (*(int (__thiscall **)(_BYTE *, int *, int, int, int, int))(*(_DWORD *)v1 + 128))( /*0x4e18e4*/
               v1,
               &v11,
               v6,
               v3,
               v4,
               v12) )
        {
          break; /*0x4e18e4*/
        }
      }
      v1 = (_BYTE *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v1 + 4))(v1); /*0x4e18f5*/
      if ( !v1 ) /*0x4e18f9*/
        return v11; /*0x4e1906*/
    }
LABEL_53:
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v1 + 108))(v1, 0); /*0x4e1907*/
  }
  return v11; /*0x4e1866*/
}


// ==== 0x004E1920  GadgetClass::FindInList  this=GadgetClass  sig=csp ====
int __thiscall COMObject_FindInList(void *this, int a2)
{
  int v2; // esi

  v2 = (int)this; /*0x4e1926*/
  if ( !a2 || !this ) /*0x4e192e*/
    return 0; /*0x4e1948*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 68))(v2) != a2 ) /*0x4e1939*/
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x4e1942*/
    if ( !v2 ) /*0x4e1946*/
      return 0; /*0x4e1946*/
  }
  return v2; /*0x4e1948*/
}


// ==== 0x004E1960  GadgetClass::MarkDirty  this=GadgetClass  sig=csp ====
void __thiscall MarkDirty(_BYTE *this)
{
  this->q01C = 1; /*0x4e1960*/
}


// ==== 0x004E1970  GadgetClass::TrackCurrent  this=GadgetClass  sig=csp ====
char __thiscall COMObject_TrackCurrent(_BYTE *this, char a2)
{
  char result; // al

  result = a2; /*0x4e1975*/
  if ( this->q01D && (a2 & 0x11) != 0 ) /*0x4e197d*/
  {
    MEMORY[0x8B3E88] = (int)this; /*0x4e197f*/
  }
  else if ( (_BYTE *)MEMORY[0x8B3E88] != this ) /*0x4e198d*/
  {
    return result; /*0x4e198d*/
  }
  if ( (a2 & 0x44) != 0 ) /*0x4e1991*/
    MEMORY[0x8B3E88] = 0; /*0x4e1993*/
  return result; /*0x4e199d*/
}


// ==== 0x004E19A0  GadgetClass::ActivateGlobal  this=GadgetClass  sig=csp ====
__int16 __thiscall COMObject_ActivateGlobal(_DWORD *this)
{
  int v2; // eax

  if ( MEMORY[0x8B3E90] ) /*0x4e19ab*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x8B3E90] + 72))(MEMORY[0x8B3E90]); /*0x4e19af*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x8B3E90] + 84))(MEMORY[0x8B3E90]); /*0x4e19ba*/
  }
  v2 = this->u32_20; /*0x4e19bd*/
  BYTE1(v2) |= 1u; /*0x4e19c0*/
  this->u32_20 = v2; /*0x4e19c3*/
  MEMORY[0x8B3E90] = (int)this; /*0x4e19c6*/
  return v2; /*0x4e19cc*/
}


// ==== 0x004E19D0  GadgetClass::DeactivateGlobal  this=GadgetClass  sig=csp ====
__int16 __thiscall COMObject_DeactivateGlobal(_DWORD *this)
{
  int v1; // eax

  if ( (_DWORD *)MEMORY[0x8B3E90] == this ) /*0x4e19d6*/
  {
    v1 = this->u32_20; /*0x4e19d8*/
    BYTE1(v1) &= ~1u; /*0x4e19db*/
    this->u32_20 = v1; /*0x4e19de*/
    MEMORY[0x8B3E90] = 0; /*0x4e19e1*/
  }
  return v1; /*0x4e19eb*/
}


// ==== 0x004E19F0  GadgetClass::IsPrimaryInstance  this=GadgetClass  sig=csp ====
BOOL __thiscall COMObject_IsPrimaryInstance(void *this)
{
  return this == (void *)MEMORY[0x8B3E90]; /*0x4e19fd*/
}


// ==== 0x004E1A00  GadgetClass::FindNextActive  this=GadgetClass  sig=csp ====
int __fastcall COMObject_FindNextActive(_BYTE *a1)
{
  if ( !a1 ) /*0x4e1a02*/
    return 0; /*0x4e1a16*/
  while ( !a1[28] ) /*0x4e1a09*/
  {
    a1 = (_BYTE *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 4))(a1); /*0x4e1a10*/
    if ( !a1 ) /*0x4e1a14*/
      return 0; /*0x4e1a14*/
  }
  return 1; /*0x4e1a18*/
}


// ==== 0x004E1A20  GadgetClass::Set  this=GadgetClass  sig=csp ====
int __thiscall Rect_Point::Set(_DWORD *this, GadgetClass *aP1, GadgetClass *aP2)
{
  this->Width = aP1; /*0x4e1a28*/
  this->Height = aP2; /*0x4e1a2b*/
  return (int)aP1->__pad_0; /*0x4e1a2e*/
}


// ==== 0x004E1A40  GadgetClass::SetPositionXY  this=GadgetClass  sig=csp ====
int __thiscall ObjectClass_SetPositionXY(_DWORD *this, int a2, int a3)
{
  this->Visible = a2; /*0x4e1a48*/
  this->ID = a3; /*0x4e1a4b*/
  return a2; /*0x4e1a4e*/
}


// ==== 0x004E1A60  GadgetClass::QueryInterface  this=GadgetClass  sig=csp ====
GadgetClass *__thiscall GadgetClass::QueryInterface(GadgetClass *Block, char a2)
{
  GadgetClass *v3; // eax
  int v4; // eax

  *(_DWORD *)Block->__pad_0 = &vt_GadgetClass; /*0x4e1a65*/
  v3 = (GadgetClass *)MEMORY[0x8B3E90]; /*0x4e1a6b*/
  if ( Block == (GadgetClass *)MEMORY[0x8B3E90] ) /*0x4e1a72*/
  {
    v4 = *((_DWORD *)Block + 8); /*0x4e1a74*/
    BYTE1(v4) &= ~1u; /*0x4e1a77*/
    *((_DWORD *)Block + 8) = v4; /*0x4e1a7a*/
    v3 = 0; /*0x4e1a7d*/
    MEMORY[0x8B3E90] = 0; /*0x4e1a7f*/
  }
  if ( Block == (GadgetClass *)MEMORY[0x8B3E88] ) /*0x4e1a8a*/
    MEMORY[0x8B3E88] = 0; /*0x4e1a8c*/
  if ( Block == (GadgetClass *)MEMORY[0x8B3E8C] ) /*0x4e1a98*/
    MEMORY[0x8B3E8C] = 0; /*0x4e1a9a*/
  if ( Block == v3 ) /*0x4e1aa2*/
    MEMORY[0x8B3E90] = 0; /*0x4e1aa4*/
  LinkClass::Destruct(Block); /*0x4e1aac*/
  if ( (a2 & 1) != 0 ) /*0x4e1ab6*/
    __3_YAXPAX_Z(Block); /*0x4e1ab9*/
  return Block; /*0x4e1ac3*/
}


// ==== 0x004E1AD0  LinkClass::Destru_vt00  this=LinkClass  sig=csp ====
LinkClass *__thiscall LinkClass::Destru_vt00(_DWORD *Block, char a2)
{
  LinkClass::Destruct(Block); /*0x4e1ad3*/
  if ( (a2 & 1) != 0 ) /*0x4e1add*/
    __3_YAXPAX_Z(Block); /*0x4e1ae0*/
  return (LinkClass *)Block; /*0x4e1aea*/
}


// ==== 0x004E1AF0  sub_4E1AF0  this=-  sig=ida-proto ====
int sub_4E1AF0()
{
  MEMORY[0x8B3EA0] = 0; /*0x4e1af2*/
  MEMORY[0x8B3EA4] = 0; /*0x4e1af7*/
  MEMORY[0x8B3EA8] = 0; /*0x4e1afc*/
  MEMORY[0x8B3EAC] = 0; /*0x4e1b01*/
  return 0; /*0x4e1b06*/
}


// ==== 0x004E1B10  sub_4E1B10  this=-  sig=ida-proto ====
void sub_4E1B10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4e1b1c*/
  MEMORY[0x8B3EB8] = Math::Sqrt(v0 + v0); /*0x4e1b2e*/
}


// ==== 0x004E1B40  sub_4E1B40  this=-  sig=ida-proto ====
void sub_4E1B40()
{
  MEMORY[0x8B3F08] = MEMORY[0x8B3EB8] / 60.0; /*0x4e1b4c*/
}


// ==== 0x004E1B60  sub_4E1B60  this=-  sig=ida-proto ====
void sub_4E1B60()
{
  MEMORY[0x8B3EF0] = 1.0 / MEMORY[0x8B3F08]; /*0x4e1b6c*/
}


// ==== 0x004E1B80  sub_4E1B80  this=-  sig=ida-proto ====
void sub_4E1B80()
{
  MEMORY[0x8B3EE8] = 0.0174532925199433 * 45.0; /*0x4e1b8c*/
}


// ==== 0x004E1BA0  sub_4E1BA0  this=-  sig=ida-proto ====
void sub_4E1BA0()
{
  MEMORY[0x8B3EC0] = 0.0174532925199433 * 60.0; /*0x4e1bac*/
}


// ==== 0x004E1BC0  sub_4E1BC0  this=-  sig=ida-proto ====
void sub_4E1BC0()
{
  MEMORY[0x8B3E98] = 0.0174532925199433 * 90.0; /*0x4e1bcc*/
}


// ==== 0x004E1BE0  sub_4E1BE0  this=-  sig=ida-proto ====
__int64 sub_4E1BE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3E98] - MEMORY[0x8B3EC0]); /*0x4e1bf2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3EB8] * 0.5); /*0x4e1c06*/
  MEMORY[0x8B3F10] = result; /*0x4e1c0b*/
  return result; /*0x4e1c10*/
}


// ==== 0x004E1C20  sub_4E1C20  this=-  sig=ida-proto ====
void sub_4E1C20()
{
  MEMORY[0x8B3EC8] = Math::ArcTan((double)MEMORY[0x8B3F10] * 0.00390625); /*0x4e1c37*/
}


// ==== 0x004E1C50  sub_4E1C50  this=-  sig=ida-proto ====
void sub_4E1C50()
{
  MEMORY[0x8B3EE0] = Math::ArcTan((double)(2 * MEMORY[0x8B3F10]) / MEMORY[0x8B3EB8]); /*0x4e1c72*/
}


// ==== 0x004E1C80  sub_4E1C80  this=-  sig=ida-proto ====
__int64 sub_4E1C80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3F10]) + 0.5); /*0x4e1c9b*/
  MEMORY[0x8B3F04] = result; /*0x4e1ca0*/
  return result; /*0x4e1ca6*/
}


// ==== 0x004E1CB0  sub_4E1CB0  this=-  sig=ida-proto ====
int sub_4E1CB0()
{
  MEMORY[0x8B3EB0] = 0; /*0x4e1cb2*/
  MEMORY[0x8B3EB2] = 0; /*0x4e1cb8*/
  return 0; /*0x4e1cbe*/
}


// ==== 0x004E1CC0  sub_4E1CC0  this=-  sig=ida-proto ====
int sub_4E1CC0()
{
  MEMORY[0x8B3ED0] = 0; /*0x4e1cc2*/
  MEMORY[0x8B3ED4] = 0; /*0x4e1cc7*/
  MEMORY[0x8B3ED8] = 0; /*0x4e1ccc*/
  return 0; /*0x4e1cd1*/
}


// ==== 0x004E1CE0  sub_4E1CE0  this=-  sig=ida-proto ====
int sub_4E1CE0()
{
  MEMORY[0x8B3F00] = 0; /*0x4e1ce5*/
  MEMORY[0x8B3EF8] = 128; /*0x4e1cef*/
  MEMORY[0x8B3EFC] = 128; /*0x4e1cf4*/
  return 128; /*0x4e1cf9*/
}


// ==== 0x004E1D00  Main::CreateDialog  this=Main  sig=csp ====
void __thiscall sub_4E1D00(HWND *this)
{
  unsigned __int16 v2; // cx
  HWND Dialog; // eax
  LONG i; // eax
  int v5; // ecx
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x4e1d1d*/
  Debug::Log(); /*0x4e1d25*/
  v2 = 3003; /*0x4e1d3b*/
  if ( MEMORY[0xA8E9A0] != 1 ) /*0x4e1d40*/
    v2 = 245; /*0x4e1d42*/
  Dialog = (HWND)CreateDialog(v2, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameOptionsDlgProc, 0); /*0x4e1d47*/
  *this = Dialog; /*0x4e1d4e*/
  if ( Dialog ) /*0x4e1d50*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x4e1d5a*/
    Dialog::Show(*this); /*0x4e1d62*/
    for ( i = dwNewLong; dwNewLong == -1; i = dwNewLong ) /*0x4e1d6e*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x4e1d77*/
        dwNewLong = 2; /*0x4e1d79*/
      if ( !MEMORY[0xA8E9A0] ) /*0x4e1d88*/
      {
        LOBYTE(v5) = 0; /*0x4e1d8a*/
        ScreenSaver::Process(v5); /*0x4e1d8c*/
      }
    }
    if ( i == 1 ) /*0x4e1d9d*/
    {
      GameOptions::GameSpeedChanged(this); /*0x4e1da1*/
      ScenarioClass::SaveGameOptions((int)MEMORY[0xA8EB60]); /*0x4e1dab*/
    }
    Dialog::Destroy(*this); /*0x4e1db2*/
  }
  Debug::Log(); /*0x4e1dd0*/
}


// ==== 0x004E1DE0  GameOptions::GameSpeedChanged  this=IUnknown  sig=csp ====
char __thiscall GameOptions::GameSpeedChanged(HWND *this)
{
  HWND (__stdcall *v2)(HWND, int); // edi
  HWND DlgItem; // eax
  int v4; // ecx
  char *v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  LRESULT v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  char v12; // al
  HWND v13; // eax
  char v15[112]; // [esp+10h] [ebp-70h] BYREF

  v2 = GetDlgItem; /*0x4e1de9*/
  DlgItem = GetDlgItem(*this, 1321); /*0x4e1df8*/
  if ( DlgItem ) /*0x4e1e02*/
  {
    v4 = 6 - SendMessageA(DlgItem, 0x400u, 0, 0); /*0x4e1e19*/
    if ( *(_DWORD *)MEMORY[0xA8EB60] != v4 ) /*0x4e1e22*/
    {
      if ( MEMORY[0xA8E9A0] == 1 && MEMORY[0xA8B238][0] && MEMORY[0xA8B238][0] != 5 ) /*0x4e1e41*/
      {
        v5 = EventClass::Add2(v15, *((_DWORD *)HouseClass_Player + 12), 0xDu, v4); /*0x4e1e54*/
        if ( Networking_LastEventIndex < 128 ) /*0x4e1e63*/
        {
          qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v5, 0x6Fu); /*0x4e1e7f*/
          v2 = GetDlgItem; /*0x4e1e90*/
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x4e1e96*/
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x4e1ead*/
          ++Networking_LastEventIndex; /*0x4e1eb3*/
          v6 = GetDlgItem(*this, 1322); /*0x4e1eb8*/
          goto LABEL_10; /*0x4e1eb8*/
        }
      }
      else
      {
        *(_DWORD *)MEMORY[0xA8EB60] = v4; /*0x4e1eba*/
      }
    }
  }
  v6 = GetDlgItem(*this, 1322); /*0x4e1ec9*/
LABEL_10:
  if ( v6 ) /*0x4e1ecd*/
    MEMORY[0xA8EB70] = 6 - SendMessageA(v6, 0x400u, 0, 0); /*0x4e1ee2*/
  v7 = v2(*this, 1323); /*0x4e1ef1*/
  if ( v7 ) /*0x4e1ef5*/
  {
    v8 = SendMessageA(v7, 0x400u, 0, 0); /*0x4e1f01*/
    if ( MEMORY[0xA8EB78] != v8 ) /*0x4e1f09*/
    {
      MEMORY[0xA8EB78] = v8; /*0x4e1f10*/
      TacticalClass::Initialize(&MEMORY[0x87F7E8]); /*0x4e1f15*/
    }
  }
  v9 = v2(*this, 1537); /*0x4e1f23*/
  if ( v9 ) /*0x4e1f27*/
  {
    MEMORY[0xA8EB7E] = SendMessageA(v9, 0xF0u, 0, 0) == 1; /*0x4e1f3b*/
    SetGlobalFlag(MEMORY[0xA8EB7E]); /*0x4e1f41*/
  }
  v10 = v2(*this, 1540); /*0x4e1f4f*/
  if ( v10 ) /*0x4e1f53*/
    MEMORY[0xA8EB7F] = SendMessageA(v10, 0xF0u, 0, 0) == 1; /*0x4e1f67*/
  v11 = v2(*this, 1538); /*0x4e1f76*/
  if ( v11 ) /*0x4e1f7a*/
  {
    v12 = SendMessageA(v11, 0xF0u, 0, 0) == 1; /*0x4e1f91*/
    MEMORY[0xA8EB80] = v12; /*0x4e1f96*/
    if ( MEMORY[0x887368] ) /*0x4e1f9b*/
    {
      if ( MEMORY[0xA8E9A0] == 1 ) /*0x4e1fa4*/
        Tooltip::Enable((void *)MEMORY[0x887368], v12); /*0x4e1fa9*/
    }
  }
  LOBYTE(v13) = MEMORY[0xA8E9A0]; /*0x4e1fae*/
  if ( !MEMORY[0xA8E9A0] ) /*0x4e1fb5*/
  {
    v13 = v2(*this, 1295); /*0x4e1fc0*/
    if ( v13 ) /*0x4e1fc4*/
    {
      v13 = (HWND)SendMessageA(v13, 0x400u, 0, 0); /*0x4e1fd0*/
      MEMORY[0xA8EB64] = (LPARAM)v13; /*0x4e1fd2*/
    }
  }
  return (char)v13; /*0x4e1fd7*/
}


// ==== 0x004E1FE0  GameOptionsDlgProc  this=-  sig=csp ====
int __stdcall GameOptionsDlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
  int result; // eax
  HWND DlgItem; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // ebp
  HWND v16; // eax
  HWND v17; // ebp
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // esi
  BOOL IsSoundEnabled; // eax
  HWND v23; // eax
  HWND v24; // esi
  unsigned int v25; // edi
  wchar_t *v26; // edi
  HWND v27; // eax
  HWND v28; // esi
  wchar_t *String; // eax
  unsigned int v30; // ebx
  _DWORD *WindowLongA; // eax
  HWND hWnda; // [esp+20h] [ebp+10h]

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x4e1ffa*/
  if ( !result ) /*0x4e2001*/
  {
    if ( a2 == 273 ) /*0x4e200d*/
    {
      v30 = HIWORD(a3); /*0x4e233f*/
      WindowLongA = (_DWORD *)GetWindowLongA(hDlg, 8); /*0x4e2342*/
      switch ( (unsigned __int16)a3 ) /*0x4e2354*/
      {
        case 0x52Cu: /*0x4e2354*/
          if ( !v30 && MEMORY[0xA8E9A0] == 1 ) /*0x4e23a1*/
          {
            MEMORY[0xA8EDA0] = 4; /*0x4e23a3*/
            *WindowLongA = 1; /*0x4e23ad*/
          }
          break;
        case 0x52Du: /*0x4e2354*/
          if ( !v30 && MEMORY[0xA8E9A0] == 1 ) /*0x4e237b*/
          {
            MEMORY[0xA8EDA0] = 6; /*0x4e237e*/
            *WindowLongA = 1; /*0x4e2389*/
            return 0; /*0x4e2393*/
          }
          break;
        case 0x686u: /*0x4e2354*/
          *WindowLongA = 1; /*0x4e2363*/
          return 0; /*0x4e236d*/
      }
      return 0; /*0x4e235f*/
    }
    if ( a2 != 276 ) /*0x4e2016*/
    {
      if ( a2 == 1175 ) /*0x4e2022*/
      {
        DlgItem = GetDlgItem(hDlg, 1321); /*0x4e2034*/
        hWnda = DlgItem; /*0x4e2048*/
        if ( MEMORY[0xA8B238][0] || MEMORY[0xA8EDDC] ) /*0x4e2058*/
        {
          if ( DlgItem ) /*0x4e207d*/
          {
            SendMessageA(DlgItem, 0x4ACu, 0, 0); /*0x4e2089*/
            SendMessageA(hWnda, 0x406u, 1u, 393216); /*0x4e209c*/
            SendMessageA(hWnda, 0x405u, 1u, 6 - *(_DWORD *)MEMORY[0xA8EB60]); /*0x4e20b8*/
          }
        }
        else
        {
          ShowWindow(DlgItem, 0); /*0x4e205d*/
          v6 = GetDlgItem(hDlg, 1812); /*0x4e2065*/
          ShowWindow(v6, 0); /*0x4e206a*/
          v7 = GetDlgItem(hDlg, 1649); /*0x4e2072*/
          ShowWindow(v7, 0); /*0x4e2077*/
        }
        if ( MEMORY[0xA8B538] ) /*0x4e20c1*/
        {
          v8 = GetDlgItem(hDlg, 1321); /*0x4e20c9*/
          ShowWindow(v8, 0); /*0x4e20ce*/
          v9 = GetDlgItem(hDlg, 1812); /*0x4e20d6*/
          ShowWindow(v9, 0); /*0x4e20db*/
          v10 = GetDlgItem(hDlg, 1649); /*0x4e20e3*/
          ShowWindow(v10, 0); /*0x4e20e8*/
          if ( MEMORY[0xA8B538] ) /*0x4e20f1*/
          {
            v11 = GetDlgItem(hDlg, 1321); /*0x4e20f9*/
            ShowWindow(v11, 0); /*0x4e20fe*/
            v12 = GetDlgItem(hDlg, 1812); /*0x4e2106*/
            ShowWindow(v12, 0); /*0x4e210b*/
            v13 = GetDlgItem(hDlg, 1649); /*0x4e2113*/
            ShowWindow(v13, 0); /*0x4e2118*/
          }
        }
        v14 = GetDlgItem(hDlg, 1322); /*0x4e2120*/
        v15 = v14; /*0x4e2122*/
        if ( v14 ) /*0x4e2126*/
        {
          SendMessageA(v14, 0x4ACu, 0, 0); /*0x4e2132*/
          SendMessageA(v15, 0x406u, 1u, 393216); /*0x4e2141*/
          SendMessageA(v15, 0x405u, 1u, 6 - MEMORY[0xA8EB70]); /*0x4e2159*/
        }
        v16 = GetDlgItem(hDlg, 1323); /*0x4e2161*/
        v17 = v16; /*0x4e2163*/
        if ( v16 ) /*0x4e2167*/
        {
          SendMessageA(v16, 0x4ACu, 0, 0); /*0x4e2173*/
          SendMessageA(v17, 0x406u, 1u, 0x20000); /*0x4e2182*/
          SendMessageA(v17, 0x405u, 1u, MEMORY[0xA8EB78]); /*0x4e2193*/
        }
        v18 = GetDlgItem(hDlg, 1537); /*0x4e219b*/
        if ( v18 ) /*0x4e219f*/
          SendMessageA(v18, 0xF1u, MEMORY[0xA8EB7E] != 0, 0); /*0x4e21b7*/
        v19 = GetDlgItem(hDlg, 1540); /*0x4e21bf*/
        if ( v19 ) /*0x4e21c3*/
          SendMessageA(v19, 0xF1u, MEMORY[0xA8EB7F] != 0, 0); /*0x4e21db*/
        v20 = GetDlgItem(hDlg, 1538); /*0x4e21e3*/
        if ( v20 ) /*0x4e21e7*/
          SendMessageA(v20, 0xF1u, MEMORY[0xA8EB80] != 0, 0); /*0x4e21ff*/
        if ( MEMORY[0xA8E9A0] == 1 ) /*0x4e2208*/
        {
          v21 = GetDlgItem(hDlg, 1325); /*0x4e2212*/
          if ( v21 ) /*0x4e2216*/
          {
            IsSoundEnabled = Audio::IsSoundEnabled(); /*0x4e221c*/
            EnableWindow(v21, IsSoundEnabled); /*0x4e2223*/
            return 0; /*0x4e222f*/
          }
        }
        else
        {
          v23 = GetDlgItem(hDlg, 1295); /*0x4e2238*/
          v24 = v23; /*0x4e223a*/
          if ( v23 ) /*0x4e223e*/
          {
            SendMessageA(v23, 0x4ACu, 0, 0); /*0x4e224e*/
            SendMessageA(v24, 0x406u, 1u, 0x20000); /*0x4e225d*/
            SendMessageA(v24, 0x405u, 1u, MEMORY[0xA8EB64]); /*0x4e226d*/
            return 0; /*0x4e2275*/
          }
        }
      }
      return 0; /*0x4e2216*/
    }
    if ( (_WORD)a3 == 5 ) /*0x4e227c*/
    {
      v25 = HIWORD(a3); /*0x4e228e*/
      if ( hWnd == GetDlgItem(hDlg, 1321) ) /*0x4e2295*/
      {
        v26 = (&MEMORY[0x822730])[v25]; /*0x4e2297*/
        v27 = GetDlgItem(hDlg, 1649); /*0x4e22a3*/
        goto LABEL_38; /*0x4e22a3*/
      }
      if ( hWnd == GetDlgItem(hDlg, 1322) ) /*0x4e22af*/
      {
        v26 = (wchar_t *)off_82274C[v25]; /*0x4e22b1*/
        v27 = GetDlgItem(hDlg, 1650); /*0x4e22bd*/
        goto LABEL_38; /*0x4e22bd*/
      }
      if ( hWnd == GetDlgItem(hDlg, 1323) ) /*0x4e22c9*/
      {
        v26 = (wchar_t *)off_822768[v25]; /*0x4e22cb*/
        v27 = GetDlgItem(hDlg, 1651); /*0x4e22d7*/
        goto LABEL_38; /*0x4e22d7*/
      }
      if ( !MEMORY[0xA8E9A0] && hWnd == GetDlgItem(hDlg, 1295) ) /*0x4e22f0*/
      {
        v26 = (&off_822774)[v25]; /*0x4e22f6*/
        v27 = GetDlgItem(hDlg, 1648); /*0x4e2303*/
LABEL_38:
        v28 = v27; /*0x4e2305*/
        if ( v27 ) /*0x4e2309*/
        {
          String = GetStringCSF(v26, 0, aDRa2mdpostGame, 434); /*0x4e231d*/
          SendMessageA(v28, 0x4B2u, 0, (LPARAM)String); /*0x4e232b*/
          return 0; /*0x4e2337*/
        }
      }
    }
    return 0; /*0x4e23b3*/
  }
  return result; /*0x4e2229*/
}


// ==== 0x004E2440  sub_4E2440  this=-  sig=ida-proto ====
DWORD sub_4E2440()
{
  DWORD result; // eax

  result = timeGetTime(); /*0x4e2440*/
  MEMORY[0x8B3F14] = result; /*0x4e2446*/
  return result; /*0x4e244b*/
}


// ==== 0x004E24A0  Time::GetElapsedMS  this=Time  sig=csp ====
unsigned int Time_GetElapsedMS()
{
  DWORD Time; // eax
  unsigned int v1; // ecx

  Time = timeGetTime(); /*0x4e24a0*/
  if ( Time > MEMORY[0x8B3F14] ) /*0x4e24ae*/
    v1 = 3 * (Time - MEMORY[0x8B3F14]); /*0x4e24c5*/
  else
    v1 = 3 * (Time - MEMORY[0x8B3F14] - 1); /*0x4e24b3*/
  return v1 / 0x32; /*0x4e24c2*/
}


// ==== 0x004E24E0  sub_4E24E0  this=-  sig=ida-proto ====
int sub_4E24E0()
{
  MEMORY[0x8B3F18] = 0; /*0x4e24e2*/
  MEMORY[0x8B3F1C] = 0; /*0x4e24e7*/
  MEMORY[0x8B3F20] = 0; /*0x4e24ec*/
  MEMORY[0x8B3F24] = 0; /*0x4e24f1*/
  return 0; /*0x4e24f6*/
}


// ==== 0x004E2500  ListClass::Constructor  this=GaugeClass  sig=csp ====
int __thiscall ListClass::Constructor(int this, int aP1, int aP2, ControlClass *aP3, SliderClass *aP4, int aP5)
{
  int v7; // ecx
  int v8; // eax

  ControlClass::Construct( /*0x4e2524*/
    (_DWORD *)this,
    (ControlClass *)aP1,
    (ControlClass *)aP2,
    aP3,
    (ControlClass *)aP4,
    (ControlClass *)aP5,
    7,
    (ControlClass *)1);
  v7 = *(_DWORD *)(this + 48); /*0x4e2529*/
  *(_DWORD *)this = &vt_GaugeClass; /*0x4e2533*/
  if ( v7 != 255 ) /*0x4e2539*/
  {
    *(_DWORD *)(this + 48) = 255; /*0x4e253d*/
    VectorClass_ptr_ConvertClass::MarkDirty((_BYTE *)this); /*0x4e2540*/
  }
  v8 = 0; /*0x4e2549*/
  if ( *(int *)(this + 48) < 0 ) /*0x4e254d*/
    v8 = *(_DWORD *)(this + 48); /*0x4e254f*/
  if ( v8 != *(_DWORD *)(this + 52) ) /*0x4e2554*/
  {
    *(_DWORD *)(this + 52) = v8; /*0x4e2556*/
    (*(void (__thiscall **)(int))(this->q048)(this); /*0x4e255d*/
  }
  *(_BYTE *)(this + 45) = 1; /*0x4e2562*/
  *(_BYTE *)(this + 46) = (int)aP4 > aP5; /*0x4e2569*/
  *(_BYTE *)(this + 44) = 1; /*0x4e256c*/
  *(_DWORD *)(this + 56) = 0; /*0x4e2570*/
  return this; /*0x4e2579*/
}


// ==== 0x004E2580  GaugeClass::SetValue  this=GaugeClass  sig=csp ====
int __thiscall GaugeClass::_vt34(_DWORD *this, int a2)
{
  if ( a2 == this->q030 ) /*0x4e2589*/
    return 0; /*0x4e259b*/
  this->q030 = a2; /*0x4e258b*/
  (*(void (__thiscall **)(_DWORD *))(*this + 72))(this); /*0x4e2590*/
  return 1; /*0x4e2598*/
}


// ==== 0x004E25A0  GaugeClass::GetValue  this=GaugeClass  sig=csp ====
int __thiscall GaugeClass::GetValue(int *this, SliderClass *aP1)
{
  SliderClass *v2; // eax

  v2 = aP1; /*0x4e25a0*/
  if ( (int)aP1 >= 0 ) /*0x4e25a9*/
  {
    if ( (int)aP1 > this->q00C ) /*0x4e25b1*/
      v2 = (SliderClass *)this->q00C; /*0x4e25b3*/
  }
  else
  {
    v2 = 0; /*0x4e25ab*/
  }
  if ( v2 == (SliderClass *)this->q034 ) /*0x4e25b8*/
    return 0; /*0x4e25ca*/
  this->q034 = (int)v2; /*0x4e25ba*/
  (*(void (__thiscall **)(int *))(*this + 72))(this); /*0x4e25bf*/
  return 1; /*0x4e25c7*/
}


// ==== 0x004E25D0  GaugeClass::GetRange  this=GaugeClass  sig=csp ====
__int64 __thiscall GaugeClass::_vt40(int this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+8h] [ebp+4h]

  if ( *(_BYTE *)(this + 46) ) /*0x4e25d1*/
  {
    v2 = *(_DWORD *)(this + 20); /*0x4e25e6*/
    v5 = -1 - *(_DWORD *)(this + 12) + a2; /*0x4e25e9*/
  }
  else
  {
    v5 = -1 - *(_DWORD *)(this + 16) + a2; /*0x4e25fd*/
    v2 = *(_DWORD *)(this + 24); /*0x4e2601*/
  }
  v3 = v2 - 2; /*0x4e2608*/
  if ( v5 < 0 ) /*0x4e2611*/
    return Math::RoundToInt((double)0 / (double)v3 * (double)*(int *)(this + 48)); /*0x4e2626*/
  if ( v5 > v3 ) /*0x4e2633*/
    v5 = v3; /*0x4e2635*/
  return Math::RoundToInt((double)v5 / (double)v3 * (double)*(int *)(this + 48)); /*0x4e262c*/
}


// ==== 0x004E2650  GaugeClass::SetColor  this=GaugeClass  sig=csp ====
__int64 __thiscall GaugeClass::_vt41(int this, int a2)
{
  int v2; // eax
  int v3; // edx

  if ( *(_BYTE *)(this + 46) ) /*0x4e2651*/
  {
    v2 = *(_DWORD *)(this + 20); /*0x4e2658*/
    v3 = *(_DWORD *)(this + 12); /*0x4e265b*/
  }
  else
  {
    v2 = *(_DWORD *)(this + 24); /*0x4e2660*/
    v3 = *(_DWORD *)(this + 16); /*0x4e2663*/
  }
  return Math::RoundToInt((double)a2 / (double)*(int *)(this + 48) * (double)(v2 - 2) + (double)v3); /*0x4e2688*/
}


// ==== 0x004E2690  GaugeClass::HandleClick  this=GaugeClass  sig=csp ====
int __thiscall sub_4E2690(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // ebp
  int v10; // eax
  int v11; // edi
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v17; // [esp+14h] [ebp-10h] BYREF
  int v18; // [esp+18h] [ebp-Ch]
  int v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  if ( !Control::DispatchClick((_DWORD *)this, a2) ) /*0x4e269e*/
    return 0; /*0x4e2827*/
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 32))( /*0x4e26d5*/
    MEMORY[0x887640],
    *(_DWORD *)(this + 12),
    *(_DWORD *)(this + 16),
    *(_DWORD *)(this + 20),
    *(_DWORD *)(this + 24));
  v3 = *(_DWORD *)(this + 20); /*0x4e26db*/
  v4 = *(_DWORD *)(this + 16); /*0x4e26de*/
  v17 = *(_DWORD *)(this + 12); /*0x4e26e1*/
  v5 = *(_DWORD *)(this + 24); /*0x4e26e5*/
  v19 = v3; /*0x4e26ed*/
  v20 = v5; /*0x4e26f1*/
  v18 = v4; /*0x4e26fc*/
  DrawBuildingTilesSHP(&v17, 0, 1); /*0x4e2700*/
  if ( *(_BYTE *)(this + 44) ) /*0x4e2705*/
  {
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 164))(this, *(_DWORD *)(this + 52)); /*0x4e271e*/
    v7 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + BuildingAnim::GetType()) + 816); /*0x4e2730*/
    if ( *(_BYTE *)(this + 46) ) /*0x4e2736*/
    {
      v8 = *(_DWORD *)(this + 12); /*0x4e273d*/
      v9 = v8 + 1; /*0x4e2740*/
      if ( v6 >= v8 + 1 ) /*0x4e2745*/
      {
        if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4e2753*/
          v10 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v7); /*0x4e2760*/
        else
          v10 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v7); /*0x4e276c*/
        v11 = v6 - v8; /*0x4e2773*/
        v12 = *(_DWORD *)(this + 24); /*0x4e2775*/
        v18 = *(_DWORD *)(this + 16) + 1; /*0x4e2779*/
        v17 = v9; /*0x4e2787*/
        v19 = v11 - 1; /*0x4e278b*/
        v20 = v12 - 2; /*0x4e278f*/
        (*(void (__stdcall **)(int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(&v17, v10); /*0x4e279a*/
      }
    }
    else
    {
      v13 = *(_DWORD *)(this + 16); /*0x4e279c*/
      if ( v6 >= v13 + 1 ) /*0x4e27a4*/
      {
        if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4e27ae*/
          v14 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v7); /*0x4e27bb*/
        else
          v14 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v7); /*0x4e27c7*/
        v15 = *(_DWORD *)(this + 12) + 1; /*0x4e27d0*/
        v18 = v13 + 1; /*0x4e27d1*/
        v17 = v15; /*0x4e27d5*/
        v19 = *(_DWORD *)(this + 20) - 2; /*0x4e27e0*/
        v20 = v6 - v13 - 1; /*0x4e27ea*/
        (*(void (__stdcall **)(int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(&v17, v14); /*0x4e27f6*/
      }
    }
  }
  if ( *(_BYTE *)(this + 45) ) /*0x4e27f9*/
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 156))(this); /*0x4e2804*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 36))(MEMORY[0x887640]); /*0x4e2812*/
  return 1; /*0x4e281a*/
}


// ==== 0x004E2830  GaugeClass::DrawDispatch  this=GaugeClass  sig=csp ====
int __thiscall CellClass_DrawDispatch(int *this, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax

  if ( !this->u32_B4 ) /*0x4e2835*/
    return 0; /*0x4e2841*/
  v6 = a2; /*0x4e2844*/
  (*(void (__thiscall **)(int *, unsigned int))(*this + 120))(this, a2); /*0x4e284d*/
  if ( (a2 & 1) == 0 && ((a2 & 2) == 0 || (int *)MEMORY[0x8B3E88] != this) ) /*0x4e2862*/
  {
    v6 = a2 & 0xFFFFFFFD; /*0x4e2864*/
    return CellClass::Draw((int)this, v6, a3, 0); /*0x4e2879*/
  }
  if ( (a2 & 1) != 0 )
  {
    v7 = (*(int (__thiscall **)(int *, _DWORD))(*this + 164))(this, this->q034); /*0x4e2899*/
    v8 = this->q0B8
       ? (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640])
       : (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]);
    if ( v8 <= v7 || (v9 = v8 - v7, v8 - v7 >= (*(int (__thiscall **)(int *))(*this + 152))(this)) ) /*0x4e28c2*/
      this->q038 = 0; /*0x4e28c9*/
    else
      this->q038 = v9; /*0x4e28c4*/
    v10 = this->q0B8
        ? (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640])
        : (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]);
    if ( (*(int (__thiscall **)(int *, int))(*this + 160))(this, v10 - this->q038) < this->q034 )
    {
      do
      {
        v11 = this->q038; /*0x4e28ff*/
        if ( v11 <= 0 ) /*0x4e2904*/
          break; /*0x4e2904*/
        this->q038 = v11 - 1; /*0x4e2907*/
        v12 = this->q0B8
            ? (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640])
            : (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]);
      }
      while ( (*(int (__thiscall **)(int *, int))(*this + 160))(this, v12 - this->q038) < this->q034 );
    }
  }
  if ( this->q0B8 ) /*0x4e2938*/
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640]); /*0x4e2947*/
  else
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]); /*0x4e294e*/
  v14 = *this; /*0x4e2954*/
  v15 = (*(int (__thiscall **)(int *, int))(*this + 160))(this, v13 - this->q038); /*0x4e295b*/
  if ( (*(int (__thiscall **)(int *, int))(v14 + 140))(this, v15) ) /*0x4e2964*/
    return CellClass::Draw((int)this, v6, a3, 0); /*0x4e296c*/
  CellClass::Draw((int)this, 0, a3, 0); /*0x4e297b*/
  *a3 = 0; /*0x4e2980*/
  return 1; /*0x4e283c*/
}


// ==== 0x004E29A0  GaugeClass::SetRange  this=GaugeClass  sig=csp ====
int __thiscall GaugeClass::_vt39(int *this)
{
  int v2; // edi
  int v3; // edx
  int v5; // eax
  int v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  int v9; // [esp+18h] [ebp-4h]

  v2 = (*(int (__thiscall **)(int *, _DWORD))(*this + 164))(this, this->q034); /*0x4e29b7*/
  if ( v2 + 4 > (*(int (__thiscall **)(int *, _DWORD))(*this + 164))(this, this->q00C) ) /*0x4e29ca*/
    v2 = (*(int (__thiscall **)(int *, _DWORD))(*this + 164))(this, this->q00C) - 2; /*0x4e29dc*/
  if ( v2 < this->q00C ) /*0x4e29e4*/
    v2 = this->q00C; /*0x4e29e6*/
  if ( this->q0B8 ) /*0x4e29e8*/
  {
    v3 = this->q006; /*0x4e29f2*/
    v7 = this->q004; /*0x4e29f5*/
    v9 = v3; /*0x4e29f9*/
    v6 = v2; /*0x4e2a08*/
    v8 = 4; /*0x4e2a0c*/
  }
  else
  {
    v6 = this->q00C; /*0x4e2a1f*/
    v5 = this->q005; /*0x4e2a23*/
    v7 = v2; /*0x4e2a31*/
    v8 = v5; /*0x4e2a35*/
    v9 = 4; /*0x4e2a39*/
  }
  return DrawBuildingTilesSHP(&v6, 1, 1); /*0x4e2a19*/
}


// ==== 0x004E2A50  GaugeClass::method_4E2A50  this=GaugeClass  sig=csp ====
int __thiscall sub_4E2A50(int this, ControlClass *aP1, int aP2, int aP3, ControlClass *aP4, int aP5)
{
  int v7; // ecx
  int v8; // eax

  ControlClass::Construct( /*0x4e2a74*/
    (_DWORD *)this,
    aP1,
    (ControlClass *)aP2,
    (ControlClass *)aP3,
    aP4,
    (ControlClass *)aP5,
    7,
    (ControlClass *)1);
  v7 = *(_DWORD *)(this + 48); /*0x4e2a79*/
  *(_DWORD *)this = &vt_GaugeClass; /*0x4e2a83*/
  if ( v7 != 255 ) /*0x4e2a89*/
  {
    *(_DWORD *)(this + 48) = 255; /*0x4e2a8d*/
    VectorClass_ptr_ConvertClass::MarkDirty((_BYTE *)this); /*0x4e2a90*/
  }
  v8 = 0; /*0x4e2a99*/
  if ( *(int *)(this + 48) < 0 ) /*0x4e2a9d*/
    v8 = *(_DWORD *)(this + 48); /*0x4e2a9f*/
  if ( v8 != *(_DWORD *)(this + 52) ) /*0x4e2aa4*/
  {
    *(_DWORD *)(this + 52) = v8; /*0x4e2aa6*/
    (*(void (__thiscall **)(int))(this->q048)(this); /*0x4e2aad*/
  }
  *(_BYTE *)(this + 45) = 1; /*0x4e2ab2*/
  *(_BYTE *)(this + 46) = (int)aP4 > aP5; /*0x4e2ab9*/
  *(_BYTE *)(this + 44) = 1; /*0x4e2abc*/
  *(_DWORD *)(this + 56) = 0; /*0x4e2ac0*/
  *(_DWORD *)(this + 60) = 0; /*0x4e2ac7*/
  *(_DWORD *)(this + 64) = 0; /*0x4e2ace*/
  *(_DWORD *)this = &vt_TriColorGaugeClass; /*0x4e2ad5*/
  return this; /*0x4e2add*/
}


// ==== 0x004E2AF0  TriColorGaugeClass::Check  this=TriColorGaugeClass  sig=csp ====
int __thiscall COMObject::Check(TriColorGaugeClass *this, int a2)
{
  if ( a2 < 0 || a2 >= this->Width ) /*0x4e2afb*/
    return 0; /*0x4e2b0d*/
  *((_DWORD *)this + 15) = a2; /*0x4e2afd*/
  (*((void (__thiscall **)(TriColorGaugeClass *))this->vfptr + 18))(this); /*0x4e2b02*/
  return 1; /*0x4e2b0a*/
}


// ==== 0x004E2B20  TriColorGaugeClass::SetField  this=TriColorGaugeClass  sig=csp ====
int __thiscall COMObject::SetField(TriColorGaugeClass *this, int a2)
{
  if ( a2 < 0 || a2 >= this->Width ) /*0x4e2b2b*/
    return 0; /*0x4e2b3d*/
  this->Height = a2; /*0x4e2b2d*/
  (*((void (__thiscall **)(TriColorGaugeClass *))this->vfptr + 18))(this); /*0x4e2b32*/
  return 1; /*0x4e2b3a*/
}


// ==== 0x004E2B50  TriColorGaugeClass::Draw  this=TriColorGaugeClass  sig=csp ====
int __thiscall BuildingPlacementClass::Draw(TriColorGaugeClass *this, int a2)
{
  char v3; // bl
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // ebx
  int v26; // edi
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // edi
  int v43; // edx
  int v44; // edx
  int v45; // eax
  int v46; // eax
  int v47; // edx
  int v48; // ecx
  int v49; // ebx
  int v50; // eax
  int v51; // edx
  int v52; // edi
  int v54; // [esp+2Ch] [ebp-10h] BYREF
  int v55; // [esp+30h] [ebp-Ch]
  int v56; // [esp+34h] [ebp-8h]
  int v57; // [esp+38h] [ebp-4h]

  if ( !BuildingPlacement::HandleClick((int)this, a2) ) /*0x4e2b5e*/
    return 0; /*0x4e3097*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 32))( /*0x4e2b95*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
    this->Width,
    this->X,
    this->q005,
    this->q006);
  v3 = this->q01E; /*0x4e2b9b*/
  v4 = this->q005; /*0x4e2b9e*/
  v5 = this->X; /*0x4e2ba1*/
  v54 = this->Width; /*0x4e2ba4*/
  v57 = this->q006; /*0x4e2bab*/
  v56 = v4; /*0x4e2bb3*/
  v55 = v5; /*0x4e2bc0*/
  DrawBuildingTilesSHP(&v54, v3 != 0, 1); /*0x4e2bc4*/
  v6 = (*((int (__thiscall **)(TriColorGaugeClass *, _DWORD))this->vfptr + 41))(this, *((_DWORD *)this + 15)); /*0x4e2bd9*/
  v7 = (*((int (__thiscall **)(TriColorGaugeClass *, _DWORD))this->vfptr + 41))(this, this->Height); /*0x4e2be9*/
  v8 = (*((int (__thiscall **)(TriColorGaugeClass *, _DWORD))this->vfptr + 41))(this, *((_DWORD *)this + 13)); /*0x4e2bfa*/
  v9 = *((_DWORD *)this + 13); /*0x4e2bfc*/
  if ( v9 > *((_DWORD *)this + 15) ) /*0x4e2c01*/
  {
    if ( v9 > this->Height ) /*0x4e2cc9*/
    {
      if ( v9 <= this->Width ) /*0x4e2e4b*/
      {
        v34 = *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2]; /*0x4e2e5b*/
        if ( this->q0B8 ) /*0x4e2e51*/
        {
          if ( v34 == 1 ) /*0x4e2e67*/
            v35 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 6); /*0x4e2e71*/
          else
            v35 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 12); /*0x4e2e7e*/
          v36 = this->Width; /*0x4e2e82*/
          v54 = v36 + 1; /*0x4e2e8e*/
          v55 = this->X + 1; /*0x4e2e96*/
          v37 = v6 - v36; /*0x4e2e9c*/
          v38 = this->q006 - 2; /*0x4e2ea2*/
          v56 = v37 + 1; /*0x4e2ea5*/
          v57 = v38; /*0x4e2eaf*/
          (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2eb5*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            &v54,
            v35);
          if ( *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2] == 1 ) /*0x4e2ec1*/
            v39 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 5); /*0x4e2ece*/
          else
            v39 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 10); /*0x4e2eda*/
          v55 = this->X + 1; /*0x4e2ee5*/
          v40 = v7 - this->Width + 1; /*0x4e2ef4*/
          v57 = this->q006 - 2; /*0x4e2ef5*/
          v54 = v6; /*0x4e2eff*/
          v56 = v40; /*0x4e2f03*/
          (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2f0e*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            &v54,
            v39);
          if ( *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2] == 1 ) /*0x4e2f1a*/
            v41 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 3); /*0x4e2f24*/
          else
            v41 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 6); /*0x4e2f31*/
          v42 = v8 - this->Width; /*0x4e2f3c*/
          v43 = this->q006; /*0x4e2f3e*/
          v55 = this->X + 1; /*0x4e2f41*/
          v54 = v7; /*0x4e2f4f*/
          v56 = v42 + 1; /*0x4e2f53*/
          v57 = v43 - 2; /*0x4e2f57*/
          (*(void (__stdcall **)(int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))(&v54, v41); /*0x4e2f62*/
        }
        else
        {
          if ( v34 == 1 ) /*0x4e2f6a*/
            v44 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 6); /*0x4e2f74*/
          else
            v44 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 12); /*0x4e2f81*/
          v45 = this->X; /*0x4e2f88*/
          v54 = this->Width + 1; /*0x4e2f8d*/
          v55 = v45 + 1; /*0x4e2f94*/
          v56 = this->q005 - 2; /*0x4e2fa2*/
          v57 = v6 - v45 + 1; /*0x4e2fac*/
          (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2fb8*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            &v54,
            v44);
          if ( *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2] == 1 ) /*0x4e2fc4*/
            v46 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 5); /*0x4e2fd1*/
          else
            v46 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 10); /*0x4e2fdd*/
          v47 = this->q005; /*0x4e2fe4*/
          v48 = this->Width + 1; /*0x4e2fe7*/
          v55 = v6; /*0x4e2fe8*/
          v49 = this->X; /*0x4e2fec*/
          v54 = v48; /*0x4e2fef*/
          v56 = v47 - 2; /*0x4e2ffc*/
          v57 = v7 - v49 + 1; /*0x4e3000*/
          (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e3011*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            &v54,
            v46);
          if ( *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2] == 1 ) /*0x4e301d*/
            v50 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 3); /*0x4e3027*/
          else
            v50 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 6); /*0x4e3034*/
          v51 = this->q005 - 2; /*0x4e303f*/
          v54 = this->Width + 1; /*0x4e3042*/
          v52 = v8 - this->X + 1; /*0x4e3051*/
          v55 = v7; /*0x4e3052*/
          v56 = v51; /*0x4e3056*/
          v57 = v52; /*0x4e305a*/
          (*(void (__stdcall **)(int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))(&v54, v50); /*0x4e3066*/
        }
      }
    }
    else
    {
      v18 = *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2]; /*0x4e2cde*/
      if ( this->q0B8 ) /*0x4e2ccf*/
      {
        if ( v18 == 1 ) /*0x4e2ce9*/
          v19 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 6); /*0x4e2cf3*/
        else
          v19 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 12); /*0x4e2d00*/
        v20 = this->Width; /*0x4e2d04*/
        v54 = v20 + 1; /*0x4e2d10*/
        v55 = this->X + 1; /*0x4e2d18*/
        v21 = v6 - v20; /*0x4e2d1e*/
        v22 = this->q006 - 2; /*0x4e2d24*/
        v56 = v21 + 1; /*0x4e2d27*/
        v57 = v22; /*0x4e2d31*/
        (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2d37*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &v54,
          v19);
        if ( *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2] == 1 ) /*0x4e2d42*/
          v23 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 5); /*0x4e2d4c*/
        else
          v23 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 10); /*0x4e2d59*/
        v24 = this->Width; /*0x4e2d5d*/
        v25 = v6 - v24; /*0x4e2d63*/
        v26 = v8 - v24; /*0x4e2d65*/
        v27 = this->q006; /*0x4e2d67*/
        v55 = this->X + 1; /*0x4e2d6d*/
        v54 = v25 + 1; /*0x4e2d7b*/
        v56 = v26 - 1; /*0x4e2d7f*/
        v57 = v27 - 2; /*0x4e2d83*/
        (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2d8e*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &v54,
          v23);
      }
      else
      {
        if ( v18 == 1 ) /*0x4e2d98*/
          v28 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 6); /*0x4e2da2*/
        else
          v28 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 12); /*0x4e2daf*/
        v54 = this->Width + 1; /*0x4e2dbc*/
        v29 = this->X; /*0x4e2dc0*/
        v55 = v29 + 1; /*0x4e2dc7*/
        v56 = this->q005 - 2; /*0x4e2dd1*/
        v57 = v6 - v29 + 1; /*0x4e2dda*/
        (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2de6*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &v54,
          v28);
        if ( *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2] == 1 ) /*0x4e2df1*/
          v30 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 5); /*0x4e2dfb*/
        else
          v30 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 10); /*0x4e2e08*/
        v31 = this->Width; /*0x4e2e0c*/
        v54 = v31 + 1; /*0x4e2e18*/
        v32 = this->X; /*0x4e2e1c*/
        v55 = v6 - v32 + 1; /*0x4e2e2a*/
        v33 = this->q005; /*0x4e2e2e*/
        v57 = v8 - v32 + 1; /*0x4e2e36*/
        v56 = v31 + v33 - 2; /*0x4e2e3a*/
        (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2e40*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &v54,
          v30);
      }
    }
  }
  else
  {
    v10 = *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2]; /*0x4e2c11*/
    if ( this->q0B8 ) /*0x4e2c07*/
    {
      if ( v10 == 1 ) /*0x4e2c19*/
        v11 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 6); /*0x4e2c23*/
      else
        v11 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 12); /*0x4e2c30*/
      v12 = this->Width; /*0x4e2c34*/
      v13 = v8 - v12; /*0x4e2c38*/
      v14 = v12 + 1; /*0x4e2c3e*/
      v15 = this->q006; /*0x4e2c41*/
      v54 = v14; /*0x4e2c44*/
      v55 = this->X + 1; /*0x4e2c4d*/
      v56 = v13 + 1; /*0x4e2c5a*/
      v57 = v15 - 2; /*0x4e2c5e*/
      (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2c65*/
        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
        &v54,
        v11);
    }
    else
    {
      if ( v10 == 1 ) /*0x4e2c70*/
        v16 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 6); /*0x4e2c7a*/
      else
        v16 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 12); /*0x4e2c87*/
      v54 = this->Width + 1; /*0x4e2c94*/
      v17 = this->X; /*0x4e2c98*/
      v55 = v17 + 1; /*0x4e2ca1*/
      v56 = this->q005 - 2; /*0x4e2cac*/
      v57 = v8 - v17 + 1; /*0x4e2cb6*/
      (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 20))( /*0x4e2cbc*/
        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
        &v54,
        v16);
    }
  }
  if ( this->q02D ) /*0x4e3069*/
    (*((void (__thiscall **)(TriColorGaugeClass *))this->vfptr + 39))(this); /*0x4e3074*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 36))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x4e3082*/
  return 1; /*0x4e308a*/
}


// ==== 0x004E30A0  GaugeClass::Stub  this=GaugeClass  sig=csp ====
int __thiscall GaugeClass::_vt36(_DWORD *this)
{
  return this->q034; /*0x4e30a3*/
}


// ==== 0x004E30B0  GaugeClass::Draw  this=GaugeClass  sig=csp ====
bool __thiscall GaugeClass::_vt37(_BYTE *this, int a2)
{
  this->u32_B4 = a2 != 0; /*0x4e30b9*/
  return a2 != 0; /*0x4e30bc*/
}


// ==== 0x004E30C0  GaugeClass::Thunk_COMObject_sub_4E30C0  this=GaugeClass  sig=csp ====
int __cdecl COMObject::Thunk_COMObject_sub_4E30C0()
{
  return 4; /*0x4e30c5*/
}


// ==== 0x004E30D0  GaugeClass::QueryInterface  this=GaugeClass  sig=csp ====
GaugeClass *__thiscall GaugeClass::QueryInterface(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x4e30d3*/
  if ( (a2 & 1) != 0 ) /*0x4e30dd*/
    __3_YAXPAX_Z(Block); /*0x4e30e0*/
  return (GaugeClass *)Block; /*0x4e30ea*/
}


// ==== 0x004E30F0  TriColorGaugeClass::ScalarDtor  this=TriColorGaugeClass  sig=csp ====
_DWORD *__thiscall COMObject::ScalarDtor(TriColorGaugeClass *this, char a2)
{
  GadgetClass::Dtor(this); /*0x4e30f3*/
  if ( (a2 & 1) != 0 ) /*0x4e30fd*/
    __3_YAXPAX_Z(this); /*0x4e3100*/
  return &this->vfptr; /*0x4e310a*/
}


// ==== 0x004E3110  sub_4E3110  this=-  sig=ida-proto ====
int sub_4E3110()
{
  MEMORY[0x8B3F90] = 0; /*0x4e3112*/
  MEMORY[0x8B3F94] = 0; /*0x4e3117*/
  MEMORY[0x8B3F98] = 0; /*0x4e311c*/
  MEMORY[0x8B3F9C] = 0; /*0x4e3121*/
  return 0; /*0x4e3126*/
}


// ==== 0x004E3130  sub_4E3130  this=-  sig=ida-proto ====
void sub_4E3130()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4e313c*/
  MEMORY[0x8B3FA8] = Math::Sqrt(v0 + v0); /*0x4e314e*/
}


// ==== 0x004E3160  sub_4E3160  this=-  sig=ida-proto ====
void sub_4E3160()
{
  MEMORY[0x8B40B8] = MEMORY[0x8B3FA8] / 60.0; /*0x4e316c*/
}


// ==== 0x004E3180  sub_4E3180  this=-  sig=ida-proto ====
void sub_4E3180()
{
  MEMORY[0x8B40A0] = 1.0 / MEMORY[0x8B40B8]; /*0x4e318c*/
}


// ==== 0x004E31A0  sub_4E31A0  this=-  sig=ida-proto ====
void sub_4E31A0()
{
  MEMORY[0x8B4098] = 0.0174532925199433 * 45.0; /*0x4e31ac*/
}


// ==== 0x004E31C0  sub_4E31C0  this=-  sig=ida-proto ====
void sub_4E31C0()
{
  MEMORY[0x8B3FB0] = 0.0174532925199433 * 60.0; /*0x4e31cc*/
}


// ==== 0x004E31E0  sub_4E31E0  this=-  sig=ida-proto ====
void sub_4E31E0()
{
  MEMORY[0x8B3F28] = 0.0174532925199433 * 90.0; /*0x4e31ec*/
}


// ==== 0x004E3200  sub_4E3200  this=-  sig=ida-proto ====
__int64 sub_4E3200()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3F28] - MEMORY[0x8B3FB0]); /*0x4e3212*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3FA8] * 0.5); /*0x4e3226*/
  MEMORY[0x8B40C0] = result; /*0x4e322b*/
  return result; /*0x4e3230*/
}


// ==== 0x004E3240  sub_4E3240  this=-  sig=ida-proto ====
void sub_4E3240()
{
  MEMORY[0x8B3FB8] = Math::ArcTan((double)MEMORY[0x8B40C0] * 0.00390625); /*0x4e3257*/
}


// ==== 0x004E3270  sub_4E3270  this=-  sig=ida-proto ====
void sub_4E3270()
{
  MEMORY[0x8B4030] = Math::ArcTan((double)(2 * MEMORY[0x8B40C0]) / MEMORY[0x8B3FA8]); /*0x4e3292*/
}


// ==== 0x004E32A0  sub_4E32A0  this=-  sig=ida-proto ====
__int64 sub_4E32A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B40C0]) + 0.5); /*0x4e32bb*/
  MEMORY[0x8B40B4] = result; /*0x4e32c0*/
  return result; /*0x4e32c6*/
}


// ==== 0x004E32D0  sub_4E32D0  this=-  sig=ida-proto ====
int sub_4E32D0()
{
  MEMORY[0x8B3FA0] = 0; /*0x4e32d2*/
  MEMORY[0x8B3FA2] = 0; /*0x4e32d8*/
  return 0; /*0x4e32de*/
}


// ==== 0x004E32E0  sub_4E32E0  this=-  sig=ida-proto ====
int sub_4E32E0()
{
  MEMORY[0x8B4020] = 0; /*0x4e32e2*/
  MEMORY[0x8B4024] = 0; /*0x4e32e7*/
  MEMORY[0x8B4028] = 0; /*0x4e32ec*/
  return 0; /*0x4e32f1*/
}


// ==== 0x004E3300  sub_4E3300  this=-  sig=ida-proto ====
int sub_4E3300()
{
  MEMORY[0x8B40B0] = 0; /*0x4e3305*/
  MEMORY[0x8B40A8] = 128; /*0x4e330f*/
  MEMORY[0x8B40AC] = 128; /*0x4e3314*/
  return 128; /*0x4e3319*/
}


// ==== 0x004E3320  ObjectClass::GetResourceIDHardcodedCSF  this=AbstractClass  sig=csp ====
int __thiscall sub_4E3320(void *this)
{
  if ( !this ) /*0x4e3324*/
    return 1754; /*0x4e3326*/
  if ( this == (void *)1 ) /*0x4e332f*/
    return 1755; /*0x4e3331*/
  if ( this == (void *)2 ) /*0x4e333a*/
    return 1756; /*0x4e333c*/
  if ( this == (void *)3 ) /*0x4e3345*/
    return 1757; /*0x4e3347*/
  if ( this == (void *)4 ) /*0x4e3350*/
    return 1758; /*0x4e3352*/
  if ( this == (void *)5 ) /*0x4e335b*/
    return 1759; /*0x4e335d*/
  if ( this == (void *)6 ) /*0x4e3366*/
    return 1760; /*0x4e3368*/
  return this != (void *)7 ? -1 : 1761;
}


// ==== 0x004E34A0  UpdateLobbyGraphicsWOL  this=-  sig=csp ====
HWND *__fastcall UpdateLobbyGraphicsWOL(HWND hDlg, int a2, int a3)
{
  int v3; // edx
  HWND DlgItem; // esi
  HWND *result; // eax

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1877; /*0x4e34b0*/
        break;
      case 2:
        v3 = 1878; /*0x4e34bc*/
        break;
      case 3:
        v3 = 1879; /*0x4e34c8*/
        break;
      case 4:
        v3 = 1880; /*0x4e34d4*/
        break;
      case 5:
        v3 = 1881; /*0x4e34e0*/
        break;
      case 6:
        v3 = 1882; /*0x4e34ec*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1883;
        break;
    }
  }
  else
  {
    v3 = 1876; /*0x4e34a4*/
  }
  DlgItem = GetDlgItem(hDlg, v3); /*0x4e350f*/
  result = 0; /*0x4e3511*/
  if ( a3 ) /*0x4e3519*/
  {
    if ( a3 == 1 ) /*0x4e3527*/
    {
      result = (HWND *)HashTable::Find( /*0x4e3532*/
                         &g_MatrixTransformState + 5774,
                         *(const char **)&stru_830620.__pad_579C[60768],
                         0);
    }
    else if ( a3 == 2 ) /*0x4e3537*/
    {
      result = (HWND *)HashTable::Find( /*0x4e3547*/
                         &g_MatrixTransformState + 5774,
                         *(const char **)&stru_830620.__pad_579C[60772],
                         0);
    }
  }
  else
  {
    result = (HWND *)HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60764], 0); /*0x4e3522*/
  }
  if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x4e354f*/
    return CacheDialogInvalidate(DlgItem, (HWND)result); /*0x4e3555*/
  return result; /*0x4e355b*/
}


// ==== 0x004E3560  BuildingType::FindDefault  this=CampaignClass  sig=csp ====
int __thiscall BuildingType::FindDefault(void *this)
{
  int result; // eax

  result = 0; /*0x4e3560*/
  if ( this == (void *)-2 ) /*0x4e3565*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60716], 0); /*0x4e3573*/
  if ( !this ) /*0x4e357b*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60724], 0); /*0x4e358a*/
  if ( this == (void *)1 ) /*0x4e3593*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60728], 0); /*0x4e35a3*/
  if ( this == (void *)2 ) /*0x4e35ac*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60732], 0); /*0x4e35bb*/
  if ( this == (void *)3 ) /*0x4e35c4*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60736], 0); /*0x4e35d4*/
  if ( this == (void *)4 ) /*0x4e35dd*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60740], 0); /*0x4e35ed*/
  if ( this == (void *)5 ) /*0x4e35f6*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60744], 0); /*0x4e3605*/
  if ( this == (void *)6 ) /*0x4e360e*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60748], 0); /*0x4e361e*/
  if ( this == (void *)7 ) /*0x4e3627*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60752], 0); /*0x4e3637*/
  if ( this == (void *)8 ) /*0x4e3640*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60756], 0); /*0x4e364f*/
  if ( this == (void *)-3 ) /*0x4e3658*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60720], 0); /*0x4e3668*/
  if ( this == (void *)9 ) /*0x4e3671*/
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60760], 0); /*0x4e3681*/
  return result; /*0x4e3578*/
}


// ==== 0x004E3690  sub_4E3690  this=-  sig=csp ====
HWND *__fastcall sub_4E3690(HWND hDlg, int a2)
{
  int v4; // eax
  HWND DlgItem; // ebp
  int v6; // esi
  LRESULT v7; // eax
  LRESULT v8; // eax
  HWND Default; // eax

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v4 = 1755; /*0x4e36a8*/
        break;
      case 2:
        v4 = 1756; /*0x4e36b4*/
        break;
      case 3:
        v4 = 1757; /*0x4e36c0*/
        break;
      case 4:
        v4 = 1758; /*0x4e36cc*/
        break;
      case 5:
        v4 = 1759; /*0x4e36d8*/
        break;
      case 6:
        v4 = 1760; /*0x4e36e4*/
        break;
      default:
        v4 = a2 != 7 ? -1 : 1761;
        break;
    }
  }
  else
  {
    v4 = 1754; /*0x4e369c*/
  }
  DlgItem = GetDlgItem(hDlg, v4); /*0x4e3708*/
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v6 = 1296; /*0x4e3718*/
        break;
      case 2:
        v6 = 1299; /*0x4e3724*/
        break;
      case 3:
        v6 = 1310; /*0x4e3730*/
        break;
      case 4:
        v6 = 1300; /*0x4e373c*/
        break;
      case 5:
        v6 = 1311; /*0x4e3748*/
        break;
      case 6:
        v6 = 1312; /*0x4e3754*/
        break;
      default:
        v6 = a2 != 7 ? -1 : 1313;
        break;
    }
  }
  else
  {
    v6 = 1697; /*0x4e370c*/
  }
  v7 = SendDlgItemMessageA(hDlg, v6, 0x147u, 0, 0); /*0x4e377f*/
  v8 = SendDlgItemMessageA(hDlg, v6, 0x150u, v7, 0); /*0x4e378b*/
  if ( v8 < -3 || v8 > 9 ) /*0x4e3795*/
  {
    if ( MEMORY[0xA8B23C] ) /*0x4e379f*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]); /*0x4e37a3*/
    else
      v8 = -2; /*0x4e37a8*/
  }
  Default = (HWND)BuildingType::FindDefault((void *)v8); /*0x4e37af*/
  return CacheDialogInvalidate(DlgItem, Default); /*0x4e37b8*/
}


// ==== 0x004E37D0  ObjectClass::GetResourceID2CSF  this=ObjectClass  sig=csp ====
int __thiscall sub_4E37D0(void *this)
{
  if ( !this ) /*0x4e37d4*/
    return 1697; /*0x4e37d6*/
  if ( this == (void *)1 ) /*0x4e37df*/
    return 1296; /*0x4e37e1*/
  if ( this == (void *)2 ) /*0x4e37ea*/
    return 1299; /*0x4e37ec*/
  if ( this == (void *)3 ) /*0x4e37f5*/
    return 1310; /*0x4e37f7*/
  if ( this == (void *)4 ) /*0x4e3800*/
    return 1300; /*0x4e3802*/
  if ( this == (void *)5 ) /*0x4e380b*/
    return 1311; /*0x4e380d*/
  if ( this == (void *)6 ) /*0x4e3816*/
    return 1312; /*0x4e3818*/
  return this != (void *)7 ? -1 : 1313;
}


// ==== 0x004E3830  CountryCombo::IDToIndex  this=ReferenceCounted  sig=csp ====
int __thiscall CountryCombo_IDToIndex(void *this)
{
  int v2; // eax

  if ( this == (void *)1697 ) /*0x4e3837*/
    return 0; /*0x4e3839*/
  if ( this == (void *)1296 ) /*0x4e3841*/
    return 1; /*0x4e3843*/
  if ( this == (void *)1299 ) /*0x4e384e*/
    return 2; /*0x4e3850*/
  if ( this == (void *)1310 ) /*0x4e385b*/
    return 3; /*0x4e385d*/
  if ( this == (void *)1300 ) /*0x4e3868*/
    return 4; /*0x4e386a*/
  if ( this == (void *)1311 ) /*0x4e3875*/
    return 5; /*0x4e3877*/
  if ( this == (void *)1312 ) /*0x4e3882*/
    return 6; /*0x4e3884*/
  v2 = -(this != (void *)1313); /*0x4e3891*/
  LOBYTE(v2) = v2 & 0xF8; /*0x4e3893*/
  return v2 + 7; /*0x4e383b*/
}


// ==== 0x004E38A0  SideClass::GetName  this=ReferenceCounted  sig=csp ====
wchar_t *__thiscall SideClass_GetName(void *this)
{
  if ( this == (void *)-2 ) /*0x4e38a3*/
    return GetStringCSF(aSttPlayersider, 0, g_Str_File_GDlgSupp_cpp, 237); /*0x4e38b6*/
  if ( this == (void *)-3 ) /*0x4e38bf*/
    return GetStringCSF(aSttPlayersideo, 0, g_Str_File_GDlgSupp_cpp, 239); /*0x4e38d2*/
  if ( !this ) /*0x4e38da*/
    return GetStringCSF(aSttPlayersidea, 0, g_Str_File_GDlgSupp_cpp, 241); /*0x4e38ed*/
  if ( this == (void *)1 ) /*0x4e38f6*/
    return GetStringCSF(aSttPlayersidek, 0, g_Str_File_GDlgSupp_cpp, 243); /*0x4e3909*/
  if ( this == (void *)2 ) /*0x4e3912*/
    return GetStringCSF(aSttPlayersidef, 0, g_Str_File_GDlgSupp_cpp, 245); /*0x4e3925*/
  if ( this == (void *)3 ) /*0x4e392e*/
    return GetStringCSF(aSttPlayersideg, 0, g_Str_File_GDlgSupp_cpp, 247); /*0x4e3941*/
  if ( this == (void *)4 ) /*0x4e394a*/
    return GetStringCSF(aSttPlayersideb, 0, g_Str_File_GDlgSupp_cpp, 249); /*0x4e395d*/
  if ( this == (void *)5 ) /*0x4e3966*/
    return GetStringCSF(aSttPlayersidel, 0, g_Str_File_GDlgSupp_cpp, 251); /*0x4e3979*/
  if ( this == (void *)6 ) /*0x4e3982*/
    return GetStringCSF(aSttPlayersidei, 0, g_Str_File_GDlgSupp_cpp, 253); /*0x4e3995*/
  if ( this == (void *)7 ) /*0x4e399e*/
    return GetStringCSF(aSttPlayersidec, 0, g_Str_File_GDlgSupp_cpp, 255); /*0x4e39b1*/
  if ( this == (void *)8 ) /*0x4e39ba*/
    return GetStringCSF(aSttPlayersider_0, 0, g_Str_File_GDlgSupp_cpp, 257); /*0x4e39cd*/
  if ( this == (void *)9 ) /*0x4e39d6*/
    return GetStringCSF(aSttPlayersidey, 0, g_Str_File_GDlgSupp_cpp, 259); /*0x4e39e9*/
  return 0; /*0x4e38bb*/
}


// ==== 0x004E3A00  FillComboBoxRandomOnly  this=SkirmishDialog  sig=csp ====
bool __fastcall FillComboBoxRandomOnly(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  LRESULT v4; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  LRESULT v9; // eax
  bool result; // al
  bool v11; // [esp+Fh] [ebp-5h]
  int i; // [esp+10h] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e3a0e*/
  v11 = !ShowWindow(DlgItem, 0); /*0x4e3a2b*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e3a30*/
  SendMessageA(DlgItem, 0x4DEu, 0, 7); /*0x4e3a3c*/
  StringCSF = GetStringCSF(aGuiRandomex, 0, g_Str_File_GDlgSupp_cpp, 276); /*0x4e3a4f*/
  v4 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e3a5d*/
  SendMessageA(DlgItem, 0x151u, v4, -2); /*0x4e3a68*/
  v5 = g_SuperWeaponTypeArray; /*0x4e3a6a*/
  v6 = 0; /*0x4e3a70*/
  for ( i = g_SuperWeaponTypeArray; v6 < v5; ++v6 ) /*0x4e3a78*/
  {
    v7 = *((_DWORD *)g_SuperWeaponTypeCount + v6); /*0x4e3a80*/
    if ( v7 ) /*0x4e3a85*/
    {
      if ( *(_BYTE *)(v7 + 421) ) /*0x4e3a87*/
      {
        v8 = *(_DWORD *)(v7 + 184); /*0x4e3a91*/
        if ( v8 > -3 && v8 <= 9 && **(_WORD **)(v7 + 96) ) /*0x4e3aa4*/
        {
          v9 = SendMessageA(DlgItem, 0x4C2u, 0, *(_DWORD *)(v7 + 96)); /*0x4e3ab3*/
          SendMessageA(DlgItem, 0x151u, v9, *(_DWORD *)(v7 + 184)); /*0x4e3ac3*/
          v5 = i; /*0x4e3ac5*/
        }
      }
    }
  }
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e3ad9*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e3ae5*/
  result = v11; /*0x4e3ae7*/
  if ( !v11 ) /*0x4e3aed*/
    return ShowWindow(DlgItem, 5); /*0x4e3af2*/
  return result; /*0x4e3af8*/
}


// ==== 0x004E3B00  SetupComboBoxObserver  this=AbstractClass  sig=csp ====
LRESULT __fastcall SetupComboBoxObserver(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  bool v3; // bl
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  LRESULT result; // eax

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e3b12*/
  v3 = !ShowWindow(DlgItem, 0); /*0x4e3b2b*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e3b2e*/
  SendMessageA(DlgItem, 0x4DEu, 0, 7); /*0x4e3b3a*/
  StringCSF = GetStringCSF(aGuiObserver, 0, g_Str_File_GDlgSupp_cpp, 309); /*0x4e3b4d*/
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e3b5b*/
  SendMessageA(DlgItem, 0x151u, v5, -3); /*0x4e3b66*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e3b72*/
  result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e3b7e*/
  if ( !v3 ) /*0x4e3b82*/
    return ShowWindow(DlgItem, 5); /*0x4e3b87*/
  return result; /*0x4e3b89*/
}


// ==== 0x004E3B90  SkirmishDialog::FillComboBoxes  this=SkirmishDialog  sig=csp ====
char __thiscall SkirmishDialog::FillComboBoxes(SkirmishDialog *hDlg)
{
  int v1; // esi
  CoordStruct *ComboBoxSelectedDefault; // eax
  bool v4; // bl
  int v5; // edx
  HWND DlgItem; // esi
  bool v7; // bl
  wchar_t *StringCSF; // eax
  LRESULT v9; // eax
  char result; // al
  int v11; // [esp+10h] [ebp-4h]

  v1 = 0; /*0x4e3b94*/
  v11 = 0; /*0x4e3b9f*/
  do
  {
    ComboBoxSelectedDefault = (CoordStruct *)GetComboBoxSelectedDefault(hDlg, v1, 0xFFFFFFFF); /*0x4e3ba9*/
    v4 = 0; /*0x4e3bb4*/
    if ( *(&g_MatrixTransformState + 2281) ) /*0x4e3bb8*/
      v4 = ComboBoxSelectedDefault == *(&g_MatrixTransformState + 2281); /*0x4e3bbe*/
    if ( v1 )
    {
      switch ( v1 )
      {
        case 1:
          v5 = 1296; /*0x4e3bd0*/
          break;
        case 2:
          v5 = 1299; /*0x4e3bdc*/
          break;
        case 3:
          v5 = 1310; /*0x4e3be8*/
          break;
        case 4:
          v5 = 1300; /*0x4e3bf4*/
          break;
        case 5:
          v5 = 1311; /*0x4e3c00*/
          break;
        case 6:
          v5 = 1312; /*0x4e3c0c*/
          break;
        default:
          v5 = v1 != 7 ? -1 : 1313;
          break;
      }
    }
    else
    {
      v5 = 1697; /*0x4e3bc4*/
    }
    if ( v4 ) /*0x4e3c2a*/
    {
      DlgItem = GetDlgItem((HWND)hDlg, v5); /*0x4e3c38*/
      v7 = !ShowWindow(DlgItem, 0); /*0x4e3c4f*/
      SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e3c52*/
      SendMessageA(DlgItem, 0x4DEu, 0, 7); /*0x4e3c5e*/
      StringCSF = GetStringCSF(aGuiObserver, 0, g_Str_File_GDlgSupp_cpp, 309); /*0x4e3c71*/
      v9 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e3c7f*/
      SendMessageA(DlgItem, 0x151u, v9, -3); /*0x4e3c8a*/
      SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e3c96*/
      result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e3ca2*/
      if ( !v7 ) /*0x4e3ca6*/
        result = ShowWindow(DlgItem, 5); /*0x4e3cab*/
      v1 = v11; /*0x4e3cb1*/
    }
    else
    {
      result = FillComboBoxRandomOnly((HWND)hDlg, v5); /*0x4e3ccb*/
    }
    v11 = ++v1; /*0x4e3cb9*/
  }
  while ( v1 < 8 );
  return result; /*0x4e3cc3*/
}


// ==== 0x004E3CE0  SetupSkirmishDialogPlayerSlot  this=SkirmishDialog  sig=csp ====
HWND *__fastcall SetupSkirmishDialogPlayerSlot(HWND hDlg, int a2)
{
  int v3; // esi
  HWND DlgItem; // ebx
  LRESULT v5; // ebp
  WPARAM v6; // edi
  HWND v7; // ebp
  int v8; // esi
  int v9; // eax
  HWND v10; // edi
  int v11; // esi
  LRESULT v12; // eax
  LRESULT v13; // eax
  HWND Default; // eax
  bool v16; // [esp+7h] [ebp-9h]
  int v18; // [esp+Ch] [ebp-4h]

  v18 = MEMORY[0xA8B3BC]; /*0x4e3ce9*/
  if ( MEMORY[0xA8B3C0] == -2 ) /*0x4e3cfb*/
  {
    v18 = -2; /*0x4e3cfd*/
  }
  else if ( MEMORY[0xA8B3C0] == -3 ) /*0x4e3d06*/
  {
    v18 = -3; /*0x4e3d08*/
  }
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1296; /*0x4e3d1f*/
        break;
      case 2:
        v3 = 1299; /*0x4e3d2b*/
        break;
      case 3:
        v3 = 1310; /*0x4e3d37*/
        break;
      case 4:
        v3 = 1300; /*0x4e3d43*/
        break;
      case 5:
        v3 = 1311; /*0x4e3d4f*/
        break;
      case 6:
        v3 = 1312; /*0x4e3d5b*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1313;
        break;
    }
  }
  else
  {
    v3 = 1697; /*0x4e3d13*/
  }
  DlgItem = GetDlgItem(hDlg, v3); /*0x4e3d7f*/
  v16 = !ShowWindow(DlgItem, 0); /*0x4e3d97*/
  v5 = SendDlgItemMessageA(hDlg, v3, 0x146u, 0, 0); /*0x4e3da2*/
  v6 = 0; /*0x4e3da4*/
  if ( v5 <= 0 ) /*0x4e3da8*/
  {
LABEL_23:
    v7 = hDlg; /*0x4e3dc9*/
  }
  else
  {
    while ( SendDlgItemMessageA(hDlg, v3, 0x150u, v6, 0) != v18 ) /*0x4e3dc2*/
    {
      if ( (int)++v6 >= v5 ) /*0x4e3dc7*/
        goto LABEL_23; /*0x4e3dc7*/
    }
    v7 = hDlg; /*0x4e3df2*/
    SendDlgItemMessageA(hDlg, v3, 0x14Eu, v6, 0); /*0x4e3e00*/
  }
  if ( !v16 ) /*0x4e3dd3*/
    ShowWindow(DlgItem, 5); /*0x4e3dd8*/
  switch ( v3 ) /*0x4e3de4*/
  {
    case 1697: /*0x4e3de4*/
      v8 = 0; /*0x4e3de6*/
      v9 = 1754; /*0x4e3de8*/
      break;
    case 1296: /*0x4e3de4*/
      v8 = 1; /*0x4e3e10*/
      v9 = 1755; /*0x4e3e15*/
      break;
    case 1299: /*0x4e3de4*/
      v8 = 2; /*0x4e3e24*/
      v9 = 1756; /*0x4e3e29*/
      break;
    case 1310: /*0x4e3de4*/
      v8 = 3; /*0x4e3e38*/
      v9 = 1757; /*0x4e3e3d*/
      break;
    case 1300: /*0x4e3de4*/
      v8 = 4; /*0x4e3e4c*/
      v9 = 1758; /*0x4e3e51*/
      break;
    case 1311: /*0x4e3de4*/
      v8 = 5; /*0x4e3e60*/
      v9 = 1759; /*0x4e3e65*/
      break;
    case 1312: /*0x4e3de4*/
      v8 = 6; /*0x4e3e74*/
      v9 = 1760; /*0x4e3e79*/
      break;
    case 1313: /*0x4e3de4*/
      v8 = 7; /*0x4e3e88*/
      v9 = 1761; /*0x4e3e8d*/
      break;
    default:
      v8 = -1; /*0x4e3e94*/
      v9 = -1; /*0x4e3e97*/
      break;
  }
  v10 = GetDlgItem(v7, v9); /*0x4e3ea4*/
  if ( v8 )
  {
    switch ( v8 )
    {
      case 1:
        v11 = 1296; /*0x4e3eb4*/
        break;
      case 2:
        v11 = 1299; /*0x4e3ec0*/
        break;
      case 3:
        v11 = 1310; /*0x4e3ecc*/
        break;
      case 4:
        v11 = 1300; /*0x4e3ed8*/
        break;
      case 5:
        v11 = 1311; /*0x4e3ee4*/
        break;
      case 6:
        v11 = 1312; /*0x4e3ef0*/
        break;
      default:
        v11 = v8 != 7 ? -1 : 1313;
        break;
    }
  }
  else
  {
    v11 = 1697; /*0x4e3ea8*/
  }
  v12 = SendDlgItemMessageA(v7, v11, 0x147u, 0, 0); /*0x4e3f1b*/
  v13 = SendDlgItemMessageA(v7, v11, 0x150u, v12, 0); /*0x4e3f27*/
  if ( v13 < -3 || v13 > 9 ) /*0x4e3f34*/
  {
    if ( MEMORY[0xA8B23C] ) /*0x4e3f3e*/
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]); /*0x4e3f42*/
    else
      v13 = -2; /*0x4e3f47*/
  }
  Default = (HWND)BuildingType::FindDefault((void *)v13); /*0x4e3f4e*/
  return CacheDialogInvalidate(v10, Default); /*0x4e3f5c*/
}


// ==== 0x004E3F70  SetupLobbyCountryCombo  this=AbstractClass  sig=csp ====
HWND *__fastcall SetupLobbyCountryCombo(SkirmishDialog *aP0, int nIDDlgItem, int a3)
{
  LRESULT v5; // ebx
  WPARAM v6; // edi
  int v7; // esi
  int v8; // eax
  HWND DlgItem; // edi
  int v10; // esi
  LRESULT v11; // eax
  LRESULT v12; // eax
  HWND Default; // eax
  bool v15; // [esp+13h] [ebp-5h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  hWnd = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x4e3f86*/
  v15 = !ShowWindow(hWnd, 0); /*0x4e3f9d*/
  v5 = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x146u, 0, 0); /*0x4e3fa8*/
  v6 = 0; /*0x4e3faa*/
  if ( v5 > 0 ) /*0x4e3fae*/
  {
    while ( SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, v6, 0) != a3 ) /*0x4e3fc4*/
    {
      if ( (int)++v6 >= v5 ) /*0x4e3fc9*/
        goto LABEL_6; /*0x4e3fc9*/
    }
    SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x14Eu, v6, 0); /*0x4e3fd7*/
  }
LABEL_6:
  if ( !v15 ) /*0x4e3fe3*/
    ShowWindow(hWnd, 5); /*0x4e3fec*/
  switch ( nIDDlgItem ) /*0x4e3ff8*/
  {
    case 1697: /*0x4e3ff8*/
      v7 = 0; /*0x4e3ffa*/
      v8 = 1754; /*0x4e3ffc*/
      break;
    case 1296: /*0x4e3ff8*/
      v7 = 1; /*0x4e400e*/
      v8 = 1755; /*0x4e4013*/
      break;
    case 1299: /*0x4e3ff8*/
      v7 = 2; /*0x4e4022*/
      v8 = 1756; /*0x4e4027*/
      break;
    case 1310: /*0x4e3ff8*/
      v7 = 3; /*0x4e4036*/
      v8 = 1757; /*0x4e403b*/
      break;
    case 1300: /*0x4e3ff8*/
      v7 = 4; /*0x4e404a*/
      v8 = 1758; /*0x4e404f*/
      break;
    case 1311: /*0x4e3ff8*/
      v7 = 5; /*0x4e405e*/
      v8 = 1759; /*0x4e4063*/
      break;
    case 1312: /*0x4e3ff8*/
      v7 = 6; /*0x4e4072*/
      v8 = 1760; /*0x4e4077*/
      break;
    case 1313: /*0x4e3ff8*/
      v7 = 7; /*0x4e4086*/
      v8 = 1761; /*0x4e408b*/
      break;
    default:
      v7 = -1; /*0x4e4092*/
      v8 = -1; /*0x4e4095*/
      break;
  }
  DlgItem = GetDlgItem((HWND)aP0, v8); /*0x4e40a2*/
  if ( v7 )
  {
    switch ( v7 )
    {
      case 1:
        v10 = 1296; /*0x4e40b2*/
        break;
      case 2:
        v10 = 1299; /*0x4e40be*/
        break;
      case 3:
        v10 = 1310; /*0x4e40ca*/
        break;
      case 4:
        v10 = 1300; /*0x4e40d6*/
        break;
      case 5:
        v10 = 1311; /*0x4e40e2*/
        break;
      case 6:
        v10 = 1312; /*0x4e40ee*/
        break;
      default:
        v10 = v7 != 7 ? -1 : 1313;
        break;
    }
  }
  else
  {
    v10 = 1697; /*0x4e40a6*/
  }
  v11 = SendDlgItemMessageA((HWND)aP0, v10, 0x147u, 0, 0); /*0x4e4119*/
  v12 = SendDlgItemMessageA((HWND)aP0, v10, 0x150u, v11, 0); /*0x4e4125*/
  if ( v12 < -3 || v12 > 9 ) /*0x4e412f*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x4e4139*/
      v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x4e413d*/
    else
      v12 = -2; /*0x4e4142*/
  }
  Default = (HWND)BuildingType::FindDefault((void *)v12); /*0x4e4149*/
  return CacheDialogInvalidate(DlgItem, Default); /*0x4e4157*/
}


// ==== 0x004E4170  GetComboBoxSelected  this=-  sig=csp ====
LRESULT __fastcall GetComboBoxSelected(ReferenceCounted *aP0, int nIDDlgItem, WPARAM wParam)
{
  ReferenceCounted *v3; // eax
  LRESULT result; // eax

  v3 = (ReferenceCounted *)wParam; /*0x4e4170*/
  if ( wParam == -1 ) /*0x4e4184*/
    v3 = (ReferenceCounted *)SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x147u, 0, 0); /*0x4e4191*/
  result = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, (WPARAM)v3, 0); /*0x4e419d*/
  if ( result < -3 || result > 9 ) /*0x4e41aa*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x4e41b4*/
      return (*(LRESULT (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x4e41b8*/
    else
      return -2; /*0x4e41be*/
  }
  return result; /*0x4e41a2*/
}


// ==== 0x004E41D0  ObjectClass::GetResourceIDCSF  this=ObjectClass  sig=csp ====
int __thiscall CSF_GetResourceID(void *this)
{
  if ( !this ) /*0x4e41d4*/
    return 1698; /*0x4e41d6*/
  if ( this == (void *)1 ) /*0x4e41df*/
    return 1314; /*0x4e41e1*/
  if ( this == (void *)2 ) /*0x4e41ea*/
    return 1315; /*0x4e41ec*/
  if ( this == (void *)3 ) /*0x4e41f5*/
    return 1316; /*0x4e41f7*/
  if ( this == (void *)4 ) /*0x4e4200*/
    return 1317; /*0x4e4202*/
  if ( this == (void *)5 ) /*0x4e420b*/
    return 1318; /*0x4e420d*/
  if ( this == (void *)6 ) /*0x4e4216*/
    return 1319; /*0x4e4218*/
  return this != (void *)7 ? -1 : 1320;
}


// ==== 0x004E4230  StartCombo::IDToIndex  this=ReferenceCounted  sig=csp ====
int __thiscall StartCombo_IDToIndex(void *this)
{
  int v2; // eax

  if ( this == (void *)1698 ) /*0x4e4237*/
    return 0; /*0x4e4239*/
  if ( this == (void *)1314 ) /*0x4e4241*/
    return 1; /*0x4e4243*/
  if ( this == (void *)1315 ) /*0x4e424e*/
    return 2; /*0x4e4250*/
  if ( this == (void *)1316 ) /*0x4e425b*/
    return 3; /*0x4e425d*/
  if ( this == (void *)1317 ) /*0x4e4268*/
    return 4; /*0x4e426a*/
  if ( this == (void *)1318 ) /*0x4e4275*/
    return 5; /*0x4e4277*/
  if ( this == (void *)1319 ) /*0x4e4282*/
    return 6; /*0x4e4284*/
  v2 = -(this != (void *)1320); /*0x4e4291*/
  LOBYTE(v2) = v2 & 0xF8; /*0x4e4293*/
  return v2 + 7; /*0x4e423b*/
}


// ==== 0x004E42A0  GameSetup::GetColorTooltip  this=ReferenceCounted  sig=csp ====
wchar_t *__thiscall GameSetup::GetColorTooltip(void *this)
{
  if ( this == (void *)-2 ) /*0x4e42a3*/
    return GetStringCSF(aSttPlayercolor, 0, g_Str_File_GDlgSupp_cpp, 449); /*0x4e42b6*/
  if ( !this ) /*0x4e42be*/
    return GetStringCSF(aSttPlayercolor_0, 0, g_Str_File_GDlgSupp_cpp, 451); /*0x4e42d1*/
  if ( this == (void *)1 ) /*0x4e42da*/
    return GetStringCSF(aSttPlayercolor_1, 0, g_Str_File_GDlgSupp_cpp, 453); /*0x4e42ed*/
  if ( this == (void *)2 ) /*0x4e42f6*/
    return GetStringCSF(aSttPlayercolor_2, 0, g_Str_File_GDlgSupp_cpp, 455); /*0x4e4309*/
  if ( this == (void *)3 ) /*0x4e4312*/
    return GetStringCSF(aSttPlayercolor_3, 0, g_Str_File_GDlgSupp_cpp, 457); /*0x4e4325*/
  if ( this == (void *)4 ) /*0x4e432e*/
    return GetStringCSF(aSttPlayercolor_4, 0, g_Str_File_GDlgSupp_cpp, 459); /*0x4e4341*/
  if ( this == (void *)5 ) /*0x4e434a*/
    return GetStringCSF(aSttPlayercolor_5, 0, g_Str_File_GDlgSupp_cpp, 461); /*0x4e435d*/
  if ( this == (void *)6 ) /*0x4e4366*/
    return GetStringCSF(aSttPlayercolor_6, 0, g_Str_File_GDlgSupp_cpp, 463); /*0x4e4379*/
  if ( this == (void *)7 ) /*0x4e4382*/
    return GetStringCSF(aSttPlayercolor_7, 0, g_Str_File_GDlgSupp_cpp, 465); /*0x4e4395*/
  if ( this == (void *)8 ) /*0x4e439e*/
    return GetStringCSF(aSttPlayercolor_8, 0, g_Str_File_GDlgSupp_cpp, 467); /*0x4e43b1*/
  return 0; /*0x4e42bb*/
}


// ==== 0x004E43C0  ObjectClass::InitGameDropdownColors  this=ObjectClass  sig=csp ====
LPARAM *InitGameDropdownColors()
{
  int *v0; // ecx
  LPARAM *result; // eax
  int v2; // edx

  MEMORY[0x8B4038] = (int)GetStringCSF(aGuiGoldabbrev, 0, g_Str_File_GDlgSupp_cpp, 475); /*0x4e43e7*/
  MEMORY[0x8B4044] = (int)GetStringCSF(aGuiRedabbrev, 0, g_Str_File_GDlgSupp_cpp, 476); /*0x4e4402*/
  MEMORY[0x8B4050] = (int)GetStringCSF(aGuiBlueabbrev, 0, g_Str_File_GDlgSupp_cpp, 477); /*0x4e441d*/
  MEMORY[0x8B405C] = (int)GetStringCSF(aGuiGreenabbrev, 0, g_Str_File_GDlgSupp_cpp, 478); /*0x4e4438*/
  MEMORY[0x8B4068] = (int)GetStringCSF(aGuiOrangeabbre, 0, g_Str_File_GDlgSupp_cpp, 479); /*0x4e4453*/
  MEMORY[0x8B4074] = (int)GetStringCSF(aGuiSkyblueabbr, 0, g_Str_File_GDlgSupp_cpp, 480); /*0x4e446e*/
  MEMORY[0x8B4080] = (int)GetStringCSF(aGuiPurpleabbre, 0, g_Str_File_GDlgSupp_cpp, 481); /*0x4e4489*/
  MEMORY[0x8B408C] = (int)GetStringCSF(aGuiPinkabbrev, 0, g_Str_File_GDlgSupp_cpp, 482); /*0x4e44a4*/
  LODWORD(MEMORY[0x8B4098]) = GetStringCSF(aGuiGrayabbrev, 0, g_Str_File_GDlgSupp_cpp, 483); /*0x4e44ae*/
  v0 = MEMORY[0x8B4040]; /*0x4e44b3*/
  result = MEMORY[0x8316A8]; /*0x4e44b8*/
  do /*0x4e44d3*/
  {
    v2 = *result++; /*0x4e44bd*/
    *(v0 - 1) = v2; /*0x4e44c2*/
    *v0 = -1; /*0x4e44c5*/
    v0 += 3; /*0x4e44cb*/
  }
  while ( (int)result < (int)MEMORY[0x8316CC] ); /*0x4e44d3*/
  return result; /*0x4e44d5*/
}


// ==== 0x004E4580  IsAvailableColorhWnd  this=-  sig=ida-proto ====
bool __fastcall IsAvailableColorhWnd(int a1)
{
  return MEMORY[0x8B4040][3 * a1] != -1; /*0x4e4592*/
}


// ==== 0x004E45A0  FillComboBoxFactions  this=SkirmishDialog  sig=csp ====
bool __fastcall FillComboBoxFactions(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  LRESULT v5; // ebx
  int *v6; // ebx
  LRESULT v7; // ebp
  bool result; // al
  bool v9; // [esp+12h] [ebp-Eh]
  bool v10; // [esp+13h] [ebp-Dh]
  int v11; // [esp+14h] [ebp-Ch]
  LPARAM lParam; // [esp+18h] [ebp-8h]
  WPARAM wParam; // [esp+1Ch] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e45b1*/
  v10 = !ShowWindow(DlgItem, 0); /*0x4e45ce*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e45d3*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e45df*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e45eb*/
  StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 522); /*0x4e45fe*/
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e460e*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e4619*/
  SendMessageA(DlgItem, 0x498u, v5, -1); /*0x4e4624*/
  switch ( nIDDlgItem )
  {
    case 1698:
      v11 = 0; /*0x4e462e*/
      break;
    case 1314:
      v11 = 1; /*0x4e4643*/
      break;
    case 1315:
      v11 = 2; /*0x4e4655*/
      break;
    case 1316:
      v11 = 3; /*0x4e4667*/
      break;
    case 1317:
      v11 = 4; /*0x4e4679*/
      break;
    case 1318:
      v11 = 5; /*0x4e468b*/
      break;
    case 1319:
      v11 = 6; /*0x4e469d*/
      break;
    default:
      v11 = nIDDlgItem != 1320 ? -1 : 7;
      break;
  }
  v6 = MEMORY[0x8B4040]; /*0x4e46bd*/
  wParam = 0; /*0x4e46c2*/
  lParam = 0; /*0x4e46c6*/
  do /*0x4e472c*/
  {
    v9 = *v6 == v11; /*0x4e46d7*/
    if ( *v6 == v11 || *v6 == -1 ) /*0x4e46e0*/
    {
      v7 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)aAb); /*0x4e46f1*/
      SendMessageA(DlgItem, 0x498u, v7, *(v6 - 1)); /*0x4e46fe*/
      SendMessageA(DlgItem, 0x151u, v7, lParam); /*0x4e470c*/
      if ( v9 ) /*0x4e4714*/
        wParam = v7; /*0x4e4716*/
    }
    v6 += 3; /*0x4e471e*/
    ++lParam; /*0x4e4728*/
  }
  while ( (int)v6 < (int)&MEMORY[0x8B40A0] ); /*0x4e472c*/
  SendMessageA(DlgItem, 0x14Eu, wParam, 0); /*0x4e473b*/
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e4747*/
  result = v10; /*0x4e4749*/
  if ( !v10 ) /*0x4e474f*/
    return ShowWindow(DlgItem, 5); /*0x4e4754*/
  return result; /*0x4e475a*/
}


// ==== 0x004E4770  FillListBox  this=-  sig=csp ====
LRESULT __fastcall FillListBox(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  bool v3; // bl
  wchar_t *StringCSF; // eax
  LRESULT v5; // ebp
  LRESULT result; // eax

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e477c*/
  v3 = !ShowWindow(DlgItem, 0); /*0x4e4799*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e479c*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e47a8*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e47b4*/
  StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 567); /*0x4e47c7*/
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e47d7*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e47e2*/
  SendMessageA(DlgItem, 0x498u, v5, -1); /*0x4e47ed*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e47f9*/
  result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e4805*/
  if ( !v3 ) /*0x4e4809*/
    return ShowWindow(DlgItem, 5); /*0x4e480e*/
  return result; /*0x4e4814*/
}


// ==== 0x004E4820  Lobby::FillPlayerFactions  this=SkirmishDialog  sig=csp ====
char __thiscall Lobby_FillPlayerFactions(HWND hDlg)
{
  int i; // esi
  int v3; // edx
  int v4; // eax
  char result; // al

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v3 = 1314; /*0x4e4836*/
          break;
        case 2:
          v3 = 1315; /*0x4e4842*/
          break;
        case 3:
          v3 = 1316; /*0x4e484e*/
          break;
        case 4:
          v3 = 1317; /*0x4e485a*/
          break;
        case 5:
          v3 = 1318; /*0x4e4866*/
          break;
        case 6:
          v3 = 1319; /*0x4e4872*/
          break;
        default:
          v3 = i != 7 ? -1 : 1320;
          break;
      }
    }
    else
    {
      v3 = 1698; /*0x4e482a*/
    }
    if ( (MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4) /*0x4e48b2*/
      && ((v4 = *(&MEMORY[0xA8DA90] + i), v4 == MEMORY[0xAC11B4]) || *(_DWORD *)(v4 + 107) == -1) )
    {
      result = FillListBox(hDlg, v3); /*0x4e48bf*/
    }
    else
    {
      result = FillComboBoxFactions(hDlg, v3); /*0x4e48b6*/
    }
  }
  return result; /*0x4e48ce*/
}


// ==== 0x004E48E0  MapSkirmishDialogPlayerToControl  this=SkirmishDialog  sig=csp ====
int __fastcall SkirmishDialog_MapPlayerToControl(HWND a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx

  v2 = MEMORY[0xA8B3B4]; /*0x4e48e7*/
  if ( MEMORY[0xA8B3B8] == -2 ) /*0x4e48f0*/
    v2 = -2; /*0x4e48f2*/
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1314; /*0x4e4907*/
        break;
      case 2:
        v3 = 1315; /*0x4e4913*/
        break;
      case 3:
        v3 = 1316; /*0x4e491f*/
        break;
      case 4:
        v3 = 1317; /*0x4e492b*/
        break;
      case 5:
        v3 = 1318; /*0x4e4937*/
        break;
      case 6:
        v3 = 1319; /*0x4e4943*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1320;
        break;
    }
  }
  else
  {
    v3 = 1698; /*0x4e48fb*/
  }
  if ( MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4 ) /*0x4e496b*/
  {
    v4 = *(&MEMORY[0xA8DA90] + a2); /*0x4e496d*/
    if ( v4 == MEMORY[0xAC11B4] && *(_DWORD *)(v4 + 107) == -1 ) /*0x4e4982*/
      v2 = 8; /*0x4e4984*/
  }
  return SetupSkirmishSpawnLocations(a1, v3, v2); /*0x4e4991*/
}


// ==== 0x004E49A0  SetupSkirmishSpawnLocations  this=AbstractClass  sig=csp ====
char __fastcall SetupSkirmishSpawnLocations(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int *v8; // ecx
  WPARAM v9; // edi
  LRESULT v10; // ebp
  int v11; // esi
  int i; // esi
  int v13; // edx
  int v14; // eax
  char result; // al
  bool v16; // [esp+Bh] [ebp-Dh]
  LRESULT v18; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  v4 = hDlg; /*0x4e49a7*/
  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x4e49b8*/
  v16 = !ShowWindow(hWnd, 0); /*0x4e49c4*/
  switch ( nIDDlgItem ) /*0x4e49cf*/
  {
    case 1698: /*0x4e49cf*/
      v5 = 0; /*0x4e49d1*/
      break;
    case 1314: /*0x4e49cf*/
      v5 = 1; /*0x4e49dd*/
      break;
    case 1315: /*0x4e49cf*/
      v5 = 2; /*0x4e49ec*/
      break;
    case 1316: /*0x4e49cf*/
      v5 = 3; /*0x4e49fb*/
      break;
    case 1317: /*0x4e49cf*/
      v5 = 4; /*0x4e4a0a*/
      break;
    case 1318: /*0x4e49cf*/
      v5 = 5; /*0x4e4a19*/
      break;
    case 1319: /*0x4e49cf*/
      v5 = 6; /*0x4e4a28*/
      break;
    default:
      v6 = -(nIDDlgItem != 1320); /*0x4e4a38*/
      LOBYTE(v6) = v6 & 0xF8; /*0x4e4a3a*/
      v5 = v6 + 7; /*0x4e4a3c*/
      break;
  }
  v7 = 0; /*0x4e4a41*/
  v8 = MEMORY[0x8B4040]; /*0x4e4a43*/
  while ( *v8 != v5 ) /*0x4e4a4a*/
  {
    v8 += 3; /*0x4e4a4c*/
    ++v7; /*0x4e4a4f*/
    if ( (int)v8 >= (int)&MEMORY[0x8B40AC] ) /*0x4e4a56*/
      goto LABEL_22; /*0x4e4a56*/
  }
  if ( v7 != -1 ) /*0x4e4a5d*/
    MEMORY[0x8B4040][3 * v7] = -1; /*0x4e4a62*/
LABEL_22:
  v9 = 0; /*0x4e4a6d*/
  v18 = SendDlgItemMessageA(v4, nIDDlgItem, 0x146u, 0, 0); /*0x4e4a84*/
  if ( v18 > 0 )
  {
    while ( 1 ) /*0x4e4a9a*/
    {
      v10 = SendDlgItemMessageA(v4, nIDDlgItem, 0x150u, v9, 0); /*0x4e4a9a*/
      if ( v10 == a3 ) /*0x4e4aa0*/
        break; /*0x4e4aa0*/
      v4 = hDlg; /*0x4e4aa6*/
      if ( (int)++v9 >= v18 ) /*0x4e4aad*/
        goto LABEL_44; /*0x4e4aad*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v9, 0); /*0x4e4ac2*/
    if ( v10 != -2 )
    {
      switch ( nIDDlgItem )
      {
        case 1698:
          v11 = 0; /*0x4e4ad5*/
          break;
        case 1314:
          v11 = 1; /*0x4e4ae1*/
          break;
        case 1315:
          v11 = 2; /*0x4e4af0*/
          break;
        case 1316:
          v11 = 3; /*0x4e4aff*/
          break;
        case 1317:
          v11 = 4; /*0x4e4b0e*/
          break;
        case 1318:
          v11 = 5; /*0x4e4b1d*/
          break;
        case 1319:
          v11 = 6; /*0x4e4b2c*/
          break;
        default:
          v11 = nIDDlgItem != 1320 ? -1 : 7;
          break;
      }
      MEMORY[0x8B4040][3 * v10] = v11; /*0x4e4b47*/
    }
    v4 = hDlg; /*0x4e4b4e*/
  }
LABEL_44:
  if ( !v16 ) /*0x4e4b5a*/
    ShowWindow(hWnd, 5); /*0x4e4b63*/
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v13 = 1314; /*0x4e4b7b*/
          break;
        case 2:
          v13 = 1315; /*0x4e4b87*/
          break;
        case 3:
          v13 = 1316; /*0x4e4b93*/
          break;
        case 4:
          v13 = 1317; /*0x4e4b9f*/
          break;
        case 5:
          v13 = 1318; /*0x4e4bab*/
          break;
        case 6:
          v13 = 1319; /*0x4e4bb7*/
          break;
        default:
          v13 = i != 7 ? -1 : 1320;
          break;
      }
    }
    else
    {
      v13 = 1698; /*0x4e4b6f*/
    }
    if ( (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) /*0x4e4bf7*/
      && ((v14 = *(&MEMORY[0xA8DA90] + i), v14 == MEMORY[0xAC11B4]) || *(_DWORD *)(v14 + 107) == -1) )
    {
      result = FillListBox(v4, v13); /*0x4e4c04*/
    }
    else
    {
      result = FillComboBoxFactions(v4, v13); /*0x4e4bfb*/
    }
  }
  return result; /*0x4e4c13*/
}


// ==== 0x004E4C20  FillColorComboBoxUI  this=AbstractClass  sig=csp ====
char __fastcall FillColorComboBoxUI(HWND hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int *v7; // ecx
  LRESULT v8; // eax
  LRESULT v9; // eax
  int v10; // esi
  int i; // esi
  int v12; // edx
  int v13; // eax
  char result; // al

  switch ( nIDDlgItem ) /*0x4e4c2c*/
  {
    case 1698: /*0x4e4c2c*/
      v4 = 0; /*0x4e4c2e*/
      break;
    case 1314: /*0x4e4c2c*/
      v4 = 1; /*0x4e4c3a*/
      break;
    case 1315: /*0x4e4c2c*/
      v4 = 2; /*0x4e4c49*/
      break;
    case 1316: /*0x4e4c2c*/
      v4 = 3; /*0x4e4c58*/
      break;
    case 1317: /*0x4e4c2c*/
      v4 = 4; /*0x4e4c67*/
      break;
    case 1318: /*0x4e4c2c*/
      v4 = 5; /*0x4e4c76*/
      break;
    case 1319: /*0x4e4c2c*/
      v4 = 6; /*0x4e4c85*/
      break;
    default:
      v5 = -(nIDDlgItem != 1320); /*0x4e4c95*/
      LOBYTE(v5) = v5 & 0xF8; /*0x4e4c97*/
      v4 = v5 + 7; /*0x4e4c99*/
      break;
  }
  v6 = 0; /*0x4e4c9d*/
  v7 = MEMORY[0x8B4040]; /*0x4e4c9f*/
  while ( *v7 != v4 ) /*0x4e4ca6*/
  {
    v7 += 3; /*0x4e4ca8*/
    ++v6; /*0x4e4cab*/
    if ( (int)v7 >= (int)&MEMORY[0x8B40AC] ) /*0x4e4cb2*/
      goto LABEL_22; /*0x4e4cb2*/
  }
  if ( v6 != -1 ) /*0x4e4cb9*/
    MEMORY[0x8B4040][3 * v6] = -1; /*0x4e4cbe*/
LABEL_22:
  v8 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x4e4cc9*/
  v9 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v8, 0); /*0x4e4ce6*/
  switch ( nIDDlgItem )
  {
    case 1698:
      v10 = 0; /*0x4e4cf1*/
      break;
    case 1314:
      v10 = 1; /*0x4e4cfd*/
      break;
    case 1315:
      v10 = 2; /*0x4e4d0c*/
      break;
    case 1316:
      v10 = 3; /*0x4e4d1b*/
      break;
    case 1317:
      v10 = 4; /*0x4e4d2a*/
      break;
    case 1318:
      v10 = 5; /*0x4e4d39*/
      break;
    case 1319:
      v10 = 6; /*0x4e4d48*/
      break;
    default:
      v10 = nIDDlgItem != 1320 ? -1 : 7;
      break;
  }
  if ( v9 != -2 ) /*0x4e4d62*/
    MEMORY[0x8B4040][3 * v9] = v10; /*0x4e4d67*/
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v12 = 1314; /*0x4e4d80*/
          break;
        case 2:
          v12 = 1315; /*0x4e4d8c*/
          break;
        case 3:
          v12 = 1316; /*0x4e4d98*/
          break;
        case 4:
          v12 = 1317; /*0x4e4da4*/
          break;
        case 5:
          v12 = 1318; /*0x4e4db0*/
          break;
        case 6:
          v12 = 1319; /*0x4e4dbc*/
          break;
        default:
          v12 = i != 7 ? -1 : 1320;
          break;
      }
    }
    else
    {
      v12 = 1698; /*0x4e4d74*/
    }
    if ( (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) /*0x4e4dfc*/
      && ((v13 = *(&MEMORY[0xA8DA90] + i), v13 == MEMORY[0xAC11B4]) || *(_DWORD *)(v13 + 107) == -1) )
    {
      result = FillListBox(hDlg, v12); /*0x4e4e09*/
    }
    else
    {
      result = FillComboBoxFactions(hDlg, v12); /*0x4e4e00*/
    }
  }
  return result; /*0x4e4e18*/
}


// ==== 0x004E4E20  GetComboBoxSelectedRaw  this=-  sig=csp ====
LRESULT __fastcall GetComboBoxSelectedRaw(ReferenceCounted *aP0, int nIDDlgItem, WPARAM wParam)
{
  ReferenceCounted *v3; // eax

  v3 = (ReferenceCounted *)wParam; /*0x4e4e20*/
  if ( wParam == -1 ) /*0x4e4e34*/
    v3 = (ReferenceCounted *)SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x147u, 0, 0); /*0x4e4e41*/
  return SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, (WPARAM)v3, 0); /*0x4e4e4f*/
}


// ==== 0x004E4E60  ObjectClass::GetResourceID3CSF  this=ObjectClass  sig=csp ====
int __thiscall CSF_GetResourceID3(void *this)
{
  if ( !this ) /*0x4e4e64*/
    return 1699; /*0x4e4e66*/
  if ( this == (void *)1 ) /*0x4e4e6f*/
    return 1700; /*0x4e4e71*/
  if ( this == (void *)2 ) /*0x4e4e7a*/
    return 1701; /*0x4e4e7c*/
  if ( this == (void *)3 ) /*0x4e4e85*/
    return 1702; /*0x4e4e87*/
  if ( this == (void *)4 ) /*0x4e4e90*/
    return 1703; /*0x4e4e92*/
  if ( this == (void *)5 ) /*0x4e4e9b*/
    return 1704; /*0x4e4e9d*/
  if ( this == (void *)6 ) /*0x4e4ea6*/
    return 1706; /*0x4e4ea8*/
  return this != (void *)7 ? -1 : 1707;
}


// ==== 0x004E4EC0  Dialog::SideIDToIndex  this=ReferenceCounted  sig=csp ====
int __thiscall Dialog_SideIDToIndex(void *this)
{
  int v2; // eax

  if ( this == (void *)1699 ) /*0x4e4ec7*/
    return 0; /*0x4e4ec9*/
  if ( this == (void *)1700 ) /*0x4e4ed1*/
    return 1; /*0x4e4ed3*/
  if ( this == (void *)1701 ) /*0x4e4ede*/
    return 2; /*0x4e4ee0*/
  if ( this == (void *)1702 ) /*0x4e4eeb*/
    return 3; /*0x4e4eed*/
  if ( this == (void *)1703 ) /*0x4e4ef8*/
    return 4; /*0x4e4efa*/
  if ( this == (void *)1704 ) /*0x4e4f05*/
    return 5; /*0x4e4f07*/
  if ( this == (void *)1706 ) /*0x4e4f12*/
    return 6; /*0x4e4f14*/
  v2 = -(this != (void *)1707); /*0x4e4f21*/
  LOBYTE(v2) = v2 & 0xF8; /*0x4e4f23*/
  return v2 + 7; /*0x4e4ecb*/
}


// ==== 0x004E4F30  sub_4E4F30  this=ReferenceCounted  sig=ida-proto ====
wchar_t *sub_4E4F30()
{
  return GetStringCSF(aSttHostcombost, 0, g_Str_File_GDlgSupp_cpp, 747); /*0x4e4f46*/
}


// ==== 0x004E4F50  __cfltcvt_init  this=-  sig=ida-proto ====
char *_cfltcvt_init()
{
  char *result; // eax

  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61700] = a1_2; /*0x4e4f50*/
  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61712] = a2; /*0x4e4f5a*/
  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61724] = a3; /*0x4e4f64*/
  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61736] = a4; /*0x4e4f6e*/
  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61748] = a5; /*0x4e4f78*/
  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61760] = a6; /*0x4e4f82*/
  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61772] = a7; /*0x4e4f8c*/
  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61784] = a8; /*0x4e4f96*/
  *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61796] = a0_0; /*0x4e4fa0*/
  result = &MEMORY[0x89F690].__pad_579C[61708]; /*0x4e4faa*/
  do /*0x4e4fbd*/
  {
    *(_DWORD *)result = -1; /*0x4e4faf*/
    result += 12; /*0x4e4fb5*/
  }
  while ( (int)result < (int)&MEMORY[0x89F690].__pad_579C[61816] ); /*0x4e4fbd*/
  return result; /*0x4e4fbf*/
}


// ==== 0x004E4FC0  ResetLobbyFactionTable  this=AbstractClass  sig=ida-proto ====
void __fastcall Lobby_ResetFactionTable(int a1)
{
  int *v1; // eax
  int v2; // edx
  int *v3; // eax

  if ( a1 > 0 ) /*0x4e4fc2*/
  {
    v1 = MEMORY[0x8B3F38]; /*0x4e4fc4*/
    v2 = a1; /*0x4e4fc9*/
    do /*0x4e4fd5*/
    {
      *v1 = -1; /*0x4e4fcb*/
      v1 += 3; /*0x4e4fd1*/
      --v2; /*0x4e4fd4*/
    }
    while ( v2 ); /*0x4e4fd5*/
  }
  if ( a1 < 9 ) /*0x4e4fda*/
  {
    v3 = (int *)(12 * a1 + 9125688); /*0x4e4fdf*/
    do /*0x4e4ff4*/
    {
      *v3 = -2; /*0x4e4fe6*/
      v3 += 3; /*0x4e4fec*/
    }
    while ( (int)v3 < (int)&MEMORY[0x8B3FA4] ); /*0x4e4ff4*/
  }
}


// ==== 0x004E50A0  sub_4E50A0  this=-  sig=ida-proto ====
bool __fastcall sub_4E50A0(int a1)
{
  return MEMORY[0x8B3F38][3 * a1] != -1; /*0x4e50b2*/
}


// ==== 0x004E50C0  FillComboBoxAllianceSlots  this=SkirmishDialog  sig=csp ====
bool __fastcall FillComboBoxAllianceSlots(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  int *v6; // ebp
  LRESULT v7; // ebx
  bool result; // al
  bool v9; // [esp+12h] [ebp-Eh]
  bool v10; // [esp+13h] [ebp-Dh]
  int v11; // [esp+14h] [ebp-Ch]
  LPARAM lParam; // [esp+18h] [ebp-8h]
  WPARAM wParam; // [esp+1Ch] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e50d3*/
  v10 = !ShowWindow(DlgItem, 0); /*0x4e50ed*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e50f2*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e50fd*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e5108*/
  StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 833); /*0x4e511b*/
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e5128*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e5133*/
  switch ( nIDDlgItem )
  {
    case 1699:
      v11 = 0; /*0x4e513d*/
      break;
    case 1700:
      v11 = 1; /*0x4e514e*/
      break;
    case 1701:
      v11 = 2; /*0x4e5160*/
      break;
    case 1702:
      v11 = 3; /*0x4e5172*/
      break;
    case 1703:
      v11 = 4; /*0x4e5184*/
      break;
    case 1704:
      v11 = 5; /*0x4e5196*/
      break;
    case 1706:
      v11 = 6; /*0x4e51a8*/
      break;
    default:
      v11 = nIDDlgItem != 1707 ? -1 : 7;
      break;
  }
  wParam = 0; /*0x4e51c6*/
  lParam = 0; /*0x4e51ca*/
  v6 = MEMORY[0x8B3F38]; /*0x4e51ce*/
  do /*0x4e5228*/
  {
    v9 = *v6 == v11; /*0x4e51e1*/
    if ( *v6 == v11 || *v6 == -1 ) /*0x4e51ea*/
    {
      v7 = SendMessageA(DlgItem, 0x4C2u, 0, *(v6 - 2)); /*0x4e51fa*/
      SendMessageA(DlgItem, 0x151u, v7, lParam); /*0x4e5208*/
      if ( v9 ) /*0x4e5210*/
        wParam = v7; /*0x4e5212*/
    }
    v6 += 3; /*0x4e521a*/
    ++lParam; /*0x4e5224*/
  }
  while ( (int)v6 < (int)&MEMORY[0x8B3F98] ); /*0x4e5228*/
  SendMessageA(DlgItem, 0x14Eu, wParam, 0); /*0x4e5237*/
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e5243*/
  result = v10; /*0x4e5245*/
  if ( !v10 ) /*0x4e524b*/
    return ShowWindow(DlgItem, 5); /*0x4e5250*/
  return result; /*0x4e5256*/
}


// ==== 0x004E5260  SetupComboBoxRandomAlliance  this=SkirmishDialog  sig=csp ====
LRESULT __fastcall SetupComboBoxRandomAlliance(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  bool v3; // bl
  wchar_t *StringCSF; // eax
  LRESULT v5; // ebp
  LRESULT result; // eax

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e526c*/
  v3 = !ShowWindow(DlgItem, 0); /*0x4e5289*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e528c*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e5298*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e52a4*/
  StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 876); /*0x4e52b7*/
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e52c7*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e52d2*/
  SendMessageA(DlgItem, 0x498u, v5, -1); /*0x4e52dd*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e52e9*/
  result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e52f5*/
  if ( !v3 ) /*0x4e52f9*/
    return ShowWindow(DlgItem, 5); /*0x4e52fe*/
  return result; /*0x4e5304*/
}


// ==== 0x004E5310  Lobby::InvalidateFactionCombos  this=SkirmishDialog  sig=csp ====
int __thiscall Lobby_InvalidateFactionCombos(HWND hDlg)
{
  int i; // esi
  int v3; // edx
  int v4; // eax
  int result; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v3 = 1700; /*0x4e5326*/
          break;
        case 2:
          v3 = 1701; /*0x4e5332*/
          break;
        case 3:
          v3 = 1702; /*0x4e533e*/
          break;
        case 4:
          v3 = 1703; /*0x4e534a*/
          break;
        case 5:
          v3 = 1704; /*0x4e5356*/
          break;
        case 6:
          v3 = 1706; /*0x4e5362*/
          break;
        default:
          v3 = i != 7 ? -1 : 1707;
          break;
      }
    }
    else
    {
      v3 = 1699; /*0x4e531a*/
    }
    if ( (MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4) /*0x4e53a2*/
      && ((v4 = *(&MEMORY[0xA8DA90] + i), v4 == MEMORY[0xAC11B4]) || *(_DWORD *)(v4 + 107) == -1) )
    {
      result = SetupComboBoxRandomAlliance(hDlg, v3); /*0x4e53af*/
    }
    else
    {
      result = FillComboBoxAllianceSlots(hDlg, v3); /*0x4e53a6*/
    }
  }
  return result; /*0x4e53be*/
}


// ==== 0x004E53D0  FillLobbyFactionComboBox  this=SkirmishDialog  sig=csp ====
int __fastcall Lobby_FillFactionComboBox(HWND a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx

  v2 = -2; /*0x4e53d4*/
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1700; /*0x4e53e7*/
        break;
      case 2:
        v3 = 1701; /*0x4e53f3*/
        break;
      case 3:
        v3 = 1702; /*0x4e53ff*/
        break;
      case 4:
        v3 = 1703; /*0x4e540b*/
        break;
      case 5:
        v3 = 1704; /*0x4e5417*/
        break;
      case 6:
        v3 = 1706; /*0x4e5423*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1707;
        break;
    }
  }
  else
  {
    v3 = 1699; /*0x4e53db*/
  }
  if ( MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4 ) /*0x4e544b*/
  {
    v4 = *(&MEMORY[0xA8DA90] + a2); /*0x4e544d*/
    if ( v4 == MEMORY[0xAC11B4] && *(_DWORD *)(v4 + 107) == -1 ) /*0x4e5462*/
      v2 = 8; /*0x4e5464*/
  }
  return SetupLobbyFactionSlots(a1, v3, v2); /*0x4e5471*/
}


// ==== 0x004E5480  SetupLobbyFactionSlots  this=AbstractClass  sig=csp ====
char __fastcall SetupLobbyFactionSlots(SessionClass *aP0, int nIDDlgItem, int a3)
{
  SessionClass *v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // edx
  char *v8; // ecx
  WPARAM v9; // edi
  LRESULT v10; // ebp
  int v11; // esi
  int i; // esi
  int v13; // edx
  int v14; // eax
  char result; // al
  bool v16; // [esp+Bh] [ebp-Dh]
  LRESULT v18; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  v4 = aP0; /*0x4e5487*/
  hWnd = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x4e5498*/
  v16 = !ShowWindow(hWnd, 0); /*0x4e54a4*/
  switch ( nIDDlgItem ) /*0x4e54af*/
  {
    case 1699: /*0x4e54af*/
      v5 = 0; /*0x4e54b1*/
      break;
    case 1700: /*0x4e54af*/
      v5 = 1; /*0x4e54bd*/
      break;
    case 1701: /*0x4e54af*/
      v5 = 2; /*0x4e54cc*/
      break;
    case 1702: /*0x4e54af*/
      v5 = 3; /*0x4e54db*/
      break;
    case 1703: /*0x4e54af*/
      v5 = 4; /*0x4e54ea*/
      break;
    case 1704: /*0x4e54af*/
      v5 = 5; /*0x4e54f9*/
      break;
    case 1706: /*0x4e54af*/
      v5 = 6; /*0x4e5508*/
      break;
    default:
      v6 = -(nIDDlgItem != 1707); /*0x4e5518*/
      LOBYTE(v6) = v6 & 0xF8; /*0x4e551a*/
      v5 = v6 + 7; /*0x4e551c*/
      break;
  }
  v7 = 0; /*0x4e5521*/
  v8 = &stru_89E138.__pad_579C[67172]; /*0x4e5523*/
  while ( *(_DWORD *)v8 != v5 ) /*0x4e552a*/
  {
    v8 += 12; /*0x4e552c*/
    ++v7; /*0x4e552f*/
    if ( (int)v8 >= (int)&stru_89E138.__pad_579C[67280] ) /*0x4e5536*/
      goto LABEL_22; /*0x4e5536*/
  }
  if ( v7 != -1 ) /*0x4e553d*/
    *(_DWORD *)&stru_89E138.__pad_579C[12 * v7 + 67172] = -1; /*0x4e5542*/
LABEL_22:
  v9 = 0; /*0x4e554d*/
  v18 = SendDlgItemMessageA((HWND)v4, nIDDlgItem, 0x146u, 0, 0); /*0x4e5564*/
  if ( v18 > 0 )
  {
    while ( 1 ) /*0x4e557a*/
    {
      v10 = SendDlgItemMessageA((HWND)v4, nIDDlgItem, 0x150u, v9, 0); /*0x4e557a*/
      if ( v10 == a3 ) /*0x4e5580*/
        break; /*0x4e5580*/
      v4 = aP0; /*0x4e5586*/
      if ( (int)++v9 >= v18 ) /*0x4e558d*/
        goto LABEL_44; /*0x4e558d*/
    }
    SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x14Eu, v9, 0); /*0x4e55a2*/
    if ( v10 != -2 )
    {
      switch ( nIDDlgItem )
      {
        case 1699:
          v11 = 0; /*0x4e55b5*/
          break;
        case 1700:
          v11 = 1; /*0x4e55c1*/
          break;
        case 1701:
          v11 = 2; /*0x4e55d0*/
          break;
        case 1702:
          v11 = 3; /*0x4e55df*/
          break;
        case 1703:
          v11 = 4; /*0x4e55ee*/
          break;
        case 1704:
          v11 = 5; /*0x4e55fd*/
          break;
        case 1706:
          v11 = 6; /*0x4e560c*/
          break;
        default:
          v11 = nIDDlgItem != 1707 ? -1 : 7;
          break;
      }
      *(_DWORD *)&stru_89E138.__pad_579C[12 * v10 + 67172] = v11; /*0x4e5627*/
    }
    v4 = aP0; /*0x4e562e*/
  }
LABEL_44:
  if ( !v16 ) /*0x4e563a*/
    ShowWindow(hWnd, 5); /*0x4e5643*/
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v13 = 1700; /*0x4e565b*/
          break;
        case 2:
          v13 = 1701; /*0x4e5667*/
          break;
        case 3:
          v13 = 1702; /*0x4e5673*/
          break;
        case 4:
          v13 = 1703; /*0x4e567f*/
          break;
        case 5:
          v13 = 1704; /*0x4e568b*/
          break;
        case 6:
          v13 = 1706; /*0x4e5697*/
          break;
        default:
          v13 = i != 7 ? -1 : 1707;
          break;
      }
    }
    else
    {
      v13 = 1699; /*0x4e564f*/
    }
    if ( (*(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4) /*0x4e56d7*/
      && ((v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * i + 18396],
           (CoordStruct *)v14 == *(&g_MatrixTransformState + 2281))
       || *(_DWORD *)(v14 + 107) == -1) )
    {
      result = SetupComboBoxRandomAlliance((HWND)v4, v13); /*0x4e56e4*/
    }
    else
    {
      result = FillComboBoxAllianceSlots((HWND)v4, v13); /*0x4e56db*/
    }
  }
  return result; /*0x4e56f3*/
}


// ==== 0x004E5700  FillComboBoxSides  this=-  sig=csp ====
char __fastcall FillComboBoxSides(HWND hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int *v7; // ecx
  LRESULT v8; // eax
  LRESULT v9; // eax
  int v10; // esi
  int i; // esi
  int v12; // edx
  int v13; // eax
  char result; // al

  switch ( nIDDlgItem ) /*0x4e570c*/
  {
    case 1699: /*0x4e570c*/
      v4 = 0; /*0x4e570e*/
      break;
    case 1700: /*0x4e570c*/
      v4 = 1; /*0x4e571a*/
      break;
    case 1701: /*0x4e570c*/
      v4 = 2; /*0x4e5729*/
      break;
    case 1702: /*0x4e570c*/
      v4 = 3; /*0x4e5738*/
      break;
    case 1703: /*0x4e570c*/
      v4 = 4; /*0x4e5747*/
      break;
    case 1704: /*0x4e570c*/
      v4 = 5; /*0x4e5756*/
      break;
    case 1706: /*0x4e570c*/
      v4 = 6; /*0x4e5765*/
      break;
    default:
      v5 = -(nIDDlgItem != 1707); /*0x4e5775*/
      LOBYTE(v5) = v5 & 0xF8; /*0x4e5777*/
      v4 = v5 + 7; /*0x4e5779*/
      break;
  }
  v6 = 0; /*0x4e577d*/
  v7 = MEMORY[0x8B3F38]; /*0x4e577f*/
  while ( *v7 != v4 ) /*0x4e5786*/
  {
    v7 += 3; /*0x4e5788*/
    ++v6; /*0x4e578b*/
    if ( (int)v7 >= (int)&MEMORY[0x8B3FA4] ) /*0x4e5792*/
      goto LABEL_22; /*0x4e5792*/
  }
  if ( v6 != -1 ) /*0x4e5799*/
    MEMORY[0x8B3F38][3 * v6] = -1; /*0x4e579e*/
LABEL_22:
  v8 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x4e57a9*/
  v9 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v8, 0); /*0x4e57c6*/
  switch ( nIDDlgItem )
  {
    case 1699:
      v10 = 0; /*0x4e57d1*/
      break;
    case 1700:
      v10 = 1; /*0x4e57dd*/
      break;
    case 1701:
      v10 = 2; /*0x4e57ec*/
      break;
    case 1702:
      v10 = 3; /*0x4e57fb*/
      break;
    case 1703:
      v10 = 4; /*0x4e580a*/
      break;
    case 1704:
      v10 = 5; /*0x4e5819*/
      break;
    case 1706:
      v10 = 6; /*0x4e5828*/
      break;
    default:
      v10 = nIDDlgItem != 1707 ? -1 : 7;
      break;
  }
  if ( v9 != -2 ) /*0x4e5842*/
    MEMORY[0x8B3F38][3 * v9] = v10; /*0x4e5847*/
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v12 = 1700; /*0x4e5860*/
          break;
        case 2:
          v12 = 1701; /*0x4e586c*/
          break;
        case 3:
          v12 = 1702; /*0x4e5878*/
          break;
        case 4:
          v12 = 1703; /*0x4e5884*/
          break;
        case 5:
          v12 = 1704; /*0x4e5890*/
          break;
        case 6:
          v12 = 1706; /*0x4e589c*/
          break;
        default:
          v12 = i != 7 ? -1 : 1707;
          break;
      }
    }
    else
    {
      v12 = 1699; /*0x4e5854*/
    }
    if ( (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) /*0x4e58dc*/
      && ((v13 = *(&MEMORY[0xA8DA90] + i), v13 == MEMORY[0xAC11B4]) || *(_DWORD *)(v13 + 107) == -1) )
    {
      result = SetupComboBoxRandomAlliance(hDlg, v12); /*0x4e58e9*/
    }
    else
    {
      result = FillComboBoxAllianceSlots(hDlg, v12); /*0x4e58e0*/
    }
  }
  return result; /*0x4e58f8*/
}


// ==== 0x004E5900  SetComboBoxSelection  this=-  sig=csp ====
LRESULT __fastcall SetComboBoxSelection(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
  LRESULT v3; // eax

  v3 = wParam; /*0x4e5900*/
  if ( wParam == -1 ) /*0x4e5914*/
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x4e5921*/
  return SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0); /*0x4e592f*/
}


// ==== 0x004E5940  ObjectClass::GetResourceID4CSF  this=ObjectClass  sig=csp ====
int __thiscall CSF_GetResourceID4(void *this)
{
  if ( !this ) /*0x4e5944*/
    return 1901; /*0x4e5946*/
  if ( this == (void *)1 ) /*0x4e594f*/
    return 1902; /*0x4e5951*/
  if ( this == (void *)2 ) /*0x4e595a*/
    return 1903; /*0x4e595c*/
  if ( this == (void *)3 ) /*0x4e5965*/
    return 1904; /*0x4e5967*/
  if ( this == (void *)4 ) /*0x4e5970*/
    return 1905; /*0x4e5972*/
  if ( this == (void *)5 ) /*0x4e597b*/
    return 1906; /*0x4e597d*/
  if ( this == (void *)6 ) /*0x4e5986*/
    return 1907; /*0x4e5988*/
  return this != (void *)7 ? -1 : 1908;
}


// ==== 0x004E59A0  Dialog::OptionIDToIndex  this=Dialog  sig=csp ====
int __thiscall Dialog_OptionIDToIndex(void *this)
{
  int v2; // eax

  if ( this == (void *)1901 ) /*0x4e59a7*/
    return 0; /*0x4e59a9*/
  if ( this == (void *)1902 ) /*0x4e59b1*/
    return 1; /*0x4e59b3*/
  if ( this == (void *)1903 ) /*0x4e59be*/
    return 2; /*0x4e59c0*/
  if ( this == (void *)1904 ) /*0x4e59cb*/
    return 3; /*0x4e59cd*/
  if ( this == (void *)1905 ) /*0x4e59d8*/
    return 4; /*0x4e59da*/
  if ( this == (void *)1906 ) /*0x4e59e5*/
    return 5; /*0x4e59e7*/
  if ( this == (void *)1907 ) /*0x4e59f2*/
    return 6; /*0x4e59f4*/
  v2 = -(this != (void *)1908); /*0x4e5a01*/
  LOBYTE(v2) = v2 & 0xF8; /*0x4e5a03*/
  return v2 + 7; /*0x4e59ab*/
}


// ==== 0x004E5AC0  GDlg::LoadLetterStrings  this=GDlg  sig=ida-proto ====
wchar_t *GDlg_LoadLetterStrings()
{
  wchar_t *result; // eax

  MEMORY[0x8B3FC0] = (int)GetStringCSF(aLetterA, 0, g_Str_File_GDlgSupp_cpp, 1079); /*0x4e5ae7*/
  MEMORY[0x8B3FCC] = (int)GetStringCSF(aLetterB, 0, g_Str_File_GDlgSupp_cpp, 1080); /*0x4e5b02*/
  MEMORY[0x8B3FD8] = (int)GetStringCSF(aLetterC, 0, g_Str_File_GDlgSupp_cpp, 1081); /*0x4e5b1d*/
  result = GetStringCSF(aLetterD, 0, g_Str_File_GDlgSupp_cpp, 1082); /*0x4e5b22*/
  MEMORY[0x8B3FE4] = (int)result; /*0x4e5b27*/
  MEMORY[0x8B3FF0] = (int)a0_0; /*0x4e5b2c*/
  return result; /*0x4e5b36*/
}


// ==== 0x004E5B60  FillLobbyPlayerSlot  this=SkirmishDialog  sig=csp ====
bool __fastcall FillLobbyPlayerSlot(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  int v3; // eax
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  LPARAM v6; // ebx
  LPARAM *v7; // ebp
  LRESULT v8; // eax
  HWND v9; // eax
  bool result; // al
  bool v11; // [esp+Bh] [ebp-5h]

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e5b71*/
  v11 = !ShowWindow(DlgItem, 0); /*0x4e5b8e*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e5b93*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e5b9f*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e5bab*/
  if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x4e5bba*/
  {
    if ( MEMORY[0xA8B23C] && (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]) < 0 ) /*0x4e5be8*/
    {
      StringCSF = GetStringCSF(aGuiNoneassymbo, 0, g_Str_File_GDlgSupp_cpp, 1110); /*0x4e5bfb*/
      goto LABEL_9; /*0x4e5bfb*/
    }
  }
  else
  {
    v3 = Skirmish_Setup(); /*0x4e5bbc*/
    if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) < 0 ) /*0x4e5bce*/
    {
      StringCSF = GetStringCSF(aGuiNoneassymbo, 0, g_Str_File_GDlgSupp_cpp, 1119); /*0x4e5bd5*/
LABEL_9:
      v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e5c00*/
      SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e5c14*/
    }
  }
  v6 = 0; /*0x4e5c16*/
  v7 = &MEMORY[0x8B3FC0]; /*0x4e5c1a*/
  do /*0x4e5c41*/
  {
    v8 = SendMessageA(DlgItem, 0x4C2u, 0, *v7); /*0x4e5c2b*/
    SendMessageA(DlgItem, 0x151u, v8, v6); /*0x4e5c35*/
    v7 += 3; /*0x4e5c37*/
    ++v6; /*0x4e5c3a*/
  }
  while ( (int)v7 < (int)&MEMORY[0x8B3FF0] ); /*0x4e5c41*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e5c4d*/
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e5c59*/
  if ( MEMORY[0xA8B238][0] == 4 && Network::IsLobbyFeature() ) /*0x4e5c67*/
  {
    ShowWindow(DlgItem, 0); /*0x4e5c79*/
    v9 = GetDlgItem(hDlg, 1940); /*0x4e5c85*/
    return ShowWindow(v9, 0); /*0x4e5c8e*/
  }
  else
  {
    result = v11; /*0x4e5c96*/
    if ( !v11 ) /*0x4e5c9c*/
      return ShowWindow(DlgItem, 5); /*0x4e5ca1*/
  }
  return result; /*0x4e5c90*/
}


// ==== 0x004E5CB0  InitComboBoxNone  this=SkirmishDialog  sig=csp ====
LRESULT __fastcall InitComboBoxNone(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  bool v3; // bl
  wchar_t *StringCSF; // eax
  LRESULT v5; // ebp
  LRESULT result; // eax

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e5cbc*/
  v3 = !ShowWindow(DlgItem, 0); /*0x4e5cd9*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e5cdc*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e5ce8*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e5cf4*/
  StringCSF = GetStringCSF(aGuiNoneassymbo, 0, g_Str_File_GDlgSupp_cpp, 1165); /*0x4e5d07*/
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e5d17*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e5d22*/
  SendMessageA(DlgItem, 0x498u, v5, -1); /*0x4e5d2d*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e5d39*/
  result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e5d45*/
  if ( !v3 ) /*0x4e5d49*/
    return ShowWindow(DlgItem, 5); /*0x4e5d4e*/
  return result; /*0x4e5d54*/
}


// ==== 0x004E5D60  Lobby::InvalidatePlayerSlots  this=SkirmishDialog  sig=csp ====
int __thiscall Lobby_InvalidatePlayerSlots(HWND hDlg)
{
  int i; // esi
  int v3; // edx
  int v4; // eax
  int result; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v3 = 1902; /*0x4e5d76*/
          break;
        case 2:
          v3 = 1903; /*0x4e5d82*/
          break;
        case 3:
          v3 = 1904; /*0x4e5d8e*/
          break;
        case 4:
          v3 = 1905; /*0x4e5d9a*/
          break;
        case 5:
          v3 = 1906; /*0x4e5da6*/
          break;
        case 6:
          v3 = 1907; /*0x4e5db2*/
          break;
        default:
          v3 = i != 7 ? -1 : 1908;
          break;
      }
    }
    else
    {
      v3 = 1901; /*0x4e5d6a*/
    }
    if ( (MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4) /*0x4e5df2*/
      && ((v4 = *(&MEMORY[0xA8DA90] + i), v4 == MEMORY[0xAC11B4]) || *(_DWORD *)(v4 + 107) == -1) )
    {
      result = InitComboBoxNone(hDlg, v3); /*0x4e5dff*/
    }
    else
    {
      result = FillLobbyPlayerSlot(hDlg, v3); /*0x4e5df6*/
    }
  }
  return result; /*0x4e5e0e*/
}


// ==== 0x004E5E20  SetupLobbyPlayerSlotDialog  this=-  sig=csp ====
bool __fastcall Lobby_SetupPlayerSlotDialog(HWND a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx

  v2 = -1; /*0x4e5e22*/
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1902; /*0x4e5e35*/
        break;
      case 2:
        v3 = 1903; /*0x4e5e41*/
        break;
      case 3:
        v3 = 1904; /*0x4e5e4d*/
        break;
      case 4:
        v3 = 1905; /*0x4e5e59*/
        break;
      case 5:
        v3 = 1906; /*0x4e5e65*/
        break;
      case 6:
        v3 = 1907; /*0x4e5e71*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1908;
        break;
    }
  }
  else
  {
    v3 = 1901; /*0x4e5e29*/
  }
  if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x4e5e99*/
  {
    v4 = *(&MEMORY[0xA8DA90] + a2); /*0x4e5e9b*/
    if ( v4 == MEMORY[0xAC11B4] && *(_DWORD *)(v4 + 107) == -1 ) /*0x4e5eaf*/
      v2 = 4; /*0x4e5eb1*/
  }
  return SetupLobbyPlayerSlots(a1, v3, v2); /*0x4e5ebe*/
}


// ==== 0x004E5ED0  SetupLobbyPlayerSlots  this=AbstractClass  sig=csp ====
bool __fastcall SetupLobbyPlayerSlots(SessionClass *aP0, int nIDDlgItem, int a3)
{
  WPARAM v5; // ebp
  LRESULT v6; // ebx
  int v7; // esi
  HWND DlgItem; // eax
  bool result; // al
  bool v10; // [esp+13h] [ebp-9h]
  HWND hWnd; // [esp+14h] [ebp-8h]
  LRESULT v12; // [esp+18h] [ebp-4h]

  hWnd = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x4e5ee6*/
  v10 = !ShowWindow(hWnd, 0); /*0x4e5efd*/
  v5 = 0; /*0x4e5f08*/
  v12 = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x146u, 0, 0); /*0x4e5f0c*/
  if ( v12 > 0 )
  {
    while ( 1 ) /*0x4e5f26*/
    {
      v6 = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, v5, 0); /*0x4e5f26*/
      if ( v6 == a3 ) /*0x4e5f2c*/
        break; /*0x4e5f2c*/
      if ( (int)++v5 >= v12 ) /*0x4e5f35*/
        goto LABEL_22; /*0x4e5f35*/
    }
    SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x14Eu, v5, 0); /*0x4e5f46*/
    if ( v6 != -2 )
    {
      switch ( nIDDlgItem )
      {
        case 1901:
          v7 = 0; /*0x4e5f5d*/
          break;
        case 1902:
          v7 = 1; /*0x4e5f69*/
          break;
        case 1903:
          v7 = 2; /*0x4e5f78*/
          break;
        case 1904:
          v7 = 3; /*0x4e5f87*/
          break;
        case 1905:
          v7 = 4; /*0x4e5f96*/
          break;
        case 1906:
          v7 = 5; /*0x4e5fa5*/
          break;
        case 1907:
          v7 = 6; /*0x4e5fb4*/
          break;
        default:
          v7 = nIDDlgItem != 1908 ? -1 : 7;
          break;
      }
      *(_DWORD *)&stru_89E138.__pad_579C[12 * v6 + 67316] = v7; /*0x4e5fce*/
    }
  }
LABEL_22:
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && Network::IsLobbyFeature() ) /*0x4e5fde*/
  {
    ShowWindow(hWnd, 0); /*0x4e5ff4*/
    DlgItem = GetDlgItem((HWND)aP0, 1940); /*0x4e5ffc*/
    return ShowWindow(DlgItem, 0); /*0x4e6005*/
  }
  else
  {
    result = v10; /*0x4e6011*/
    if ( !v10 ) /*0x4e6017*/
      return ShowWindow(hWnd, 5); /*0x4e6020*/
  }
  return result; /*0x4e6007*/
}


// ==== 0x004E6030  GetComboBoxSelectedRaw2  this=AbstractClass  sig=csp ====
LRESULT __fastcall GetComboBoxSelectedRaw2(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
  LRESULT v3; // eax

  v3 = wParam; /*0x4e6030*/
  if ( wParam == -1 ) /*0x4e6044*/
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x4e6051*/
  return SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0); /*0x4e605f*/
}


// ==== 0x004E6070  ObjectClass::method_4E6070  this=ObjectClass  sig=csp ====
int __thiscall sub_4E6070(int this)
{
  *(_DWORD *)(this + 104) = 0; /*0x4e6087*/
  *(_DWORD *)(this + 108) = 0; /*0x4e608a*/
  Debug::Log(); /*0x4e608d*/
  memset((void *)this, 0xFFu, 0x18u); /*0x4e609f*/
  *(_WORD *)(this + 24) = -1; /*0x4e60a9*/
  *(_DWORD *)(this + 4 * (*(_DWORD *)(this + 104))++) = 2; /*0x4e60cc*/
  Debug::Log(); /*0x4e60d6*/
  return this; /*0x4e612c*/
}


// ==== 0x004E6140  nullsub_54  this=-  sig=ida-proto ====
void nullsub_54()
{
  ; /*0x4e6140*/
}


// ==== 0x004E6150  GetVersionString  this=-  sig=csp ====
char *__fastcall Version_GetString(_DWORD *a1, _BYTE *a2, char *Destination, size_t Count)
{
  char *result; // eax

  *a2 = Event_Process_7C5F3D(); /*0x4e615b*/
  Event_Process_7C5FFF(); /*0x4e615d*/
  *a1 = MEMORY[0x84E863]; /*0x4e6169*/
  result = Destination; /*0x4e616b*/
  if ( Destination ) /*0x4e6173*/
    return strncpy(Destination, MEMORY[0x84E865], Count); /*0x4e6180*/
  return result; /*0x4e616f*/
}


// ==== 0x004E6190  DetectProcessorType  this=-  sig=csp ====
int sub_4E6190()
{
  int v0; // esi
  int result; // eax
  int v2; // [esp+0h] [ebp-44h] BYREF
  char Destination[64]; // [esp+4h] [ebp-40h] BYREF

  Event_Process_7C5F3D(); /*0x4e6194*/
  Event_Process_7C5FFF(); /*0x4e6199*/
  v0 = MEMORY[0x84E863]; /*0x4e619e*/
  if ( &v2 != (int *)-4 ) /*0x4e61ab*/
    strncpy(Destination, MEMORY[0x84E865], 0x40u); /*0x4e61b9*/
  if ( !v0 || !MEMORY[0x84E864] ) /*0x4e61d0*/
    return -1; /*0x4e627c*/
  if ( !_strcmpi(Destination, aAuthenticamd) ) /*0x4e61e0*/
    return 7; /*0x4e61ec*/
  if ( !_strcmpi(Destination, aCyrixinstead) ) /*0x4e6200*/
    return 8; /*0x4e620c*/
  if ( v0 == 4 ) /*0x4e621b*/
    return 0; /*0x4e6275*/
  if ( v0 == 5 ) /*0x4e621e*/
    return 1; /*0x4e626b*/
  if ( v0 != 6 ) /*0x4e6221*/
    return 6; /*0x4e6223*/
  switch ( MEMORY[0x84E864] ) /*0x4e623c*/
  {
    case 3: /*0x4e623c*/
    case 5: /*0x4e623c*/
      result = 3; /*0x4e6243*/
      break; /*0x4e624c*/
    case 6: /*0x4e623c*/
      result = 5; /*0x4e624d*/
      break; /*0x4e6256*/
    case 7: /*0x4e623c*/
    case 8: /*0x4e623c*/
    case 10: /*0x4e623c*/
      result = 4; /*0x4e6257*/
      break; /*0x4e6260*/
    default:
      result = 2; /*0x4e6261*/
      break; /*0x4e626a*/
  }
  return result; /*0x4e61f1*/
}


// ==== 0x004E62B0  PlayerType::GetName  this=PlayerType  sig=csp ====
char *PlayerType_GetName()
{
  unsigned int v0; // eax

  v0 = DetectProcessorType(); /*0x4e62b0*/
  if ( v0 > 8 ) /*0x4e62b8*/
    return aUnknown; /*0x4e62c7*/
  else
    return off_822C54[v0]; /*0x4e62bf*/
}


// ==== 0x004E62D0  sub_4E62D0  this=-  sig=ida-proto ====
void sub_4E62D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4e62dc*/
  dbl_A83D40 = Math::Sqrt(v0 + v0); /*0x4e62ee*/
}


// ==== 0x004E6300  sub_4E6300  this=-  sig=ida-proto ====
void sub_4E6300()
{
  MEMORY[0xA8EC98] = dbl_A83D40 / 60.0; /*0x4e630c*/
}


// ==== 0x004E6320  sub_4E6320  this=-  sig=ida-proto ====
void sub_4E6320()
{
  MEMORY[0xA8EB58] = 1.0 / MEMORY[0xA8EC98]; /*0x4e632c*/
}


// ==== 0x004E6340  sub_4E6340  this=-  sig=ida-proto ====
void sub_4E6340()
{
  MEMORY[0xA8EB20] = 0.0174532925199433 * 45.0; /*0x4e634c*/
}


// ==== 0x004E6360  sub_4E6360  this=-  sig=ida-proto ====
void sub_4E6360()
{
  MEMORY[0xA83DB0] = 0.0174532925199433 * 60.0; /*0x4e636c*/
}


// ==== 0x004E6380  sub_4E6380  this=-  sig=ida-proto ====
void sub_4E6380()
{
  unk_8B4168 = 0.0174532925199433 * 90.0; /*0x4e638c*/
}


// ==== 0x004E63A0  sub_4E63A0  this=-  sig=ida-proto ====
__int64 sub_4E63A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_8B4168 - MEMORY[0xA83DB0]); /*0x4e63b2*/
  result = Math::RoundToInt(v0 * dbl_A83D40 * 0.5); /*0x4e63c6*/
  MEMORY[0xA8ED58] = result; /*0x4e63cb*/
  return result; /*0x4e63d0*/
}


// ==== 0x004E63E0  sub_4E63E0  this=-  sig=ida-proto ====
void sub_4E63E0()
{
  MEMORY[0xA83DE0] = Math::ArcTan((double)MEMORY[0xA8ED58] * 0.00390625); /*0x4e63f7*/
}


// ==== 0x004E6410  sub_4E6410  this=-  sig=ida-proto ====
void sub_4E6410()
{
  MEMORY[0xA8E958] = Math::ArcTan((double)(2 * MEMORY[0xA8ED58]) / dbl_A83D40); /*0x4e6432*/
}


// ==== 0x004E6440  sub_4E6440  this=-  sig=ida-proto ====
__int64 sub_4E6440()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8ED58]) + 0.5); /*0x4e645b*/
  MEMORY[0xA8EC94] = result; /*0x4e6460*/
  return result; /*0x4e6466*/
}


// ==== 0x004E6470  sub_4E6470  this=-  sig=ida-proto ====
int sub_4E6470()
{
  word_A83CD0 = 0; /*0x4e6472*/
  word_A83CD2 = 0; /*0x4e6478*/
  return 0; /*0x4e647e*/
}


// ==== 0x004E6480  sub_4E6480  this=-  sig=ida-proto ====
int sub_4E6480()
{
  MEMORY[0xA8E380] = 0; /*0x4e6482*/
  MEMORY[0xA8E384] = 0; /*0x4e6487*/
  MEMORY[0xA8E388] = 0; /*0x4e648c*/
  return 0; /*0x4e6491*/
}


// ==== 0x004E64A0  sub_4E64A0  this=-  sig=ida-proto ====
int sub_4E64A0()
{
  MEMORY[0xA8EC70] = 0; /*0x4e64a5*/
  MEMORY[0xA8EC68] = 128; /*0x4e64af*/
  MEMORY[0xA8EC6C] = 128; /*0x4e64b4*/
  return 128; /*0x4e64b9*/
}


// ==== 0x004E64C0  sub_4E64C0  this=-  sig=ida-proto ====
int sub_4E64C0()
{
  dword_A83C58 = 0; /*0x4e64c2*/
  dword_A83C5C = 0; /*0x4e64c7*/
  dword_A83C60 = 0; /*0x4e64cc*/
  dword_A83C64 = 0; /*0x4e64d1*/
  return 0; /*0x4e64d6*/
}


// ==== 0x004E64E0  sub_4E64E0  this=-  sig=ida-proto ====
int sub_4E64E0()
{
  MEMORY[0xA8B204] = 0; /*0x4e64e7*/
  MEMORY[0xA8B208] = 0; /*0x4e64ec*/
  MEMORY[0xA8B20C] = 1; /*0x4e64f1*/
  MEMORY[0xA8B20D] = 0; /*0x4e64f8*/
  MEMORY[0xA8B200] = (int)&vt_DynamicVectorClass_AITriggerTypeClass; /*0x4e64fd*/
  MEMORY[0xA8B214] = 10; /*0x4e6507*/
  MEMORY[0xA8B210] = 0; /*0x4e6511*/
  return atexit(sub_4E6520); /*0x4e651c*/
}


// ==== 0x004E6520  sub_4E6520  this=-  sig=ida-proto ====
void __cdecl sub_4E6520()
{
  MEMORY[0xA8B200] = (int)&vt_VectorClass_AITriggerTypeClass; /*0x4e6528*/
  if ( MEMORY[0xA8B204] && MEMORY[0xA8B20D] ) /*0x4e653c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8B204]); /*0x4e653f*/
    MEMORY[0xA8B204] = 0; /*0x4e6547*/
  }
  MEMORY[0xA8B20D] = 0; /*0x4e654d*/
  MEMORY[0xA8B208] = 0; /*0x4e6553*/
}


// ==== 0x004E6560  sub_4E6560  this=-  sig=ida-proto ====
int sub_4E6560()
{
  unk_8B417C = 0; /*0x4e6567*/
  dword_8B4180 = 0; /*0x4e656c*/
  unk_8B4184 = 1; /*0x4e6571*/
  unk_8B4185 = 0; /*0x4e6578*/
  dword_8B4178 = (int)&vt_DynamicVectorClass_TriggerTypeClass; /*0x4e657d*/
  dword_8B418C = 10; /*0x4e6587*/
  dword_8B4188 = 0; /*0x4e6591*/
  return atexit(sub_4E65A0); /*0x4e659c*/
}


// ==== 0x004E65A0  sub_4E65A0  this=-  sig=ida-proto ====
void __cdecl sub_4E65A0()
{
  dword_8B4178 = (int)&vt_VectorClass_TriggerTypeClass; /*0x4e65a8*/
  if ( unk_8B417C && unk_8B4185 ) /*0x4e65bc*/
  {
    __3_YAXPAX_Z(unk_8B417C); /*0x4e65bf*/
    unk_8B417C = 0; /*0x4e65c7*/
  }
  unk_8B4185 = 0; /*0x4e65cd*/
  dword_8B4180 = 0; /*0x4e65d3*/
}


// ==== 0x004E65E0  sub_4E65E0  this=-  sig=ida-proto ====
int sub_4E65E0()
{
  MEMORY[0xA8EAEC] = 0; /*0x4e65e7*/
  MEMORY[0xA8EAF0] = 0; /*0x4e65ec*/
  MEMORY[0xA8EAF4] = 1; /*0x4e65f1*/
  MEMORY[0xA8EAF5] = 0; /*0x4e65f8*/
  MEMORY[0xA8EAE8] = (int)&vt_DynamicVectorClass_TriggerClass; /*0x4e65fd*/
  MEMORY[0xA8EAFC] = 10; /*0x4e6607*/
  MEMORY[0xA8EAF8] = 0; /*0x4e6611*/
  return atexit(sub_4E6620); /*0x4e661c*/
}


// ==== 0x004E6620  sub_4E6620  this=-  sig=ida-proto ====
void __cdecl sub_4E6620()
{
  MEMORY[0xA8EAE8] = (int)&vt_VectorClass_TriggerClass; /*0x4e6628*/
  if ( MEMORY[0xA8EAEC] && MEMORY[0xA8EAF5] ) /*0x4e663c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EAEC]); /*0x4e663f*/
    MEMORY[0xA8EAEC] = 0; /*0x4e6647*/
  }
  MEMORY[0xA8EAF5] = 0; /*0x4e664d*/
  MEMORY[0xA8EAF0] = 0; /*0x4e6653*/
}


// ==== 0x004E6660  sub_4E6660  this=-  sig=ida-proto ====
int sub_4E6660()
{
  unk_8B4194 = 0; /*0x4e6667*/
  dword_8B4198 = 0; /*0x4e666c*/
  unk_8B419C = 1; /*0x4e6671*/
  unk_8B419D = 0; /*0x4e6678*/
  dword_8B4190 = (int)&vt_DynamicVectorClass_BuildingLightClass; /*0x4e667d*/
  dword_8B41A4 = 10; /*0x4e6687*/
  dword_8B41A0 = 0; /*0x4e6691*/
  return atexit(sub_4E66A0); /*0x4e669c*/
}


// ==== 0x004E66A0  sub_4E66A0  this=-  sig=ida-proto ====
void __cdecl sub_4E66A0()
{
  dword_8B4190 = (int)&vt_VectorClass_BuildingLightClass; /*0x4e66a8*/
  if ( unk_8B4194 && unk_8B419D ) /*0x4e66bc*/
  {
    __3_YAXPAX_Z(unk_8B4194); /*0x4e66bf*/
    unk_8B4194 = 0; /*0x4e66c7*/
  }
  unk_8B419D = 0; /*0x4e66cd*/
  dword_8B4198 = 0; /*0x4e66d3*/
}


// ==== 0x004E66E0  sub_4E66E0  this=-  sig=ida-proto ====
int sub_4E66E0()
{
  dword_A8020C = 0; /*0x4e66e7*/
  dword_A80210 = 0; /*0x4e66ec*/
  byte_A80214 = 1; /*0x4e66f1*/
  byte_A80215 = 0; /*0x4e66f8*/
  dword_A80208 = (int)&vt_DynamicVectorClass_ParticleSystemClass; /*0x4e66fd*/
  dword_A8021C = 10; /*0x4e6707*/
  g_GameCleanupState = 0; /*0x4e6711*/
  return atexit(sub_4E6720); /*0x4e671c*/
}


// ==== 0x004E6720  sub_4E6720  this=-  sig=ida-proto ====
void __cdecl sub_4E6720()
{
  dword_A80208 = (int)&vt_VectorClass_ParticleSystemClass; /*0x4e6728*/
  if ( dword_A8020C && byte_A80215 ) /*0x4e673c*/
  {
    __3_YAXPAX_Z(dword_A8020C); /*0x4e673f*/
    dword_A8020C = 0; /*0x4e6747*/
  }
  byte_A80215 = 0; /*0x4e674d*/
  dword_A80210 = 0; /*0x4e6753*/
}


// ==== 0x004E6760  sub_4E6760  this=-  sig=ida-proto ====
int sub_4E6760()
{
  MEMORY[0x8B413C] = 0; /*0x4e6767*/
  MEMORY[0x8B4140] = 0; /*0x4e676c*/
  MEMORY[0x8B4144] = 1; /*0x4e6771*/
  MEMORY[0x8B4145] = 0; /*0x4e6778*/
  MEMORY[0x8B4138] = (int)&vt_DynamicVectorClass_TubeClass; /*0x4e677d*/
  MEMORY[0x8B414C] = 10; /*0x4e6787*/
  MEMORY[0x8B4148] = 0; /*0x4e6791*/
  return atexit(sub_4E67A0); /*0x4e679c*/
}


// ==== 0x004E67A0  sub_4E67A0  this=-  sig=ida-proto ====
void __cdecl sub_4E67A0()
{
  MEMORY[0x8B4138] = (int)&vt_VectorClass_TubeClass; /*0x4e67a8*/
  if ( MEMORY[0x8B413C] && MEMORY[0x8B4145] ) /*0x4e67bc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B413C]); /*0x4e67bf*/
    MEMORY[0x8B413C] = 0; /*0x4e67c7*/
  }
  MEMORY[0x8B4145] = 0; /*0x4e67cd*/
  MEMORY[0x8B4140] = 0; /*0x4e67d3*/
}


// ==== 0x004E67E0  sub_4E67E0  this=-  sig=ida-proto ====
int sub_4E67E0()
{
  MEMORY[0xA8EC3C] = 0; /*0x4e67e7*/
  MEMORY[0xA8EC40] = 0; /*0x4e67ec*/
  MEMORY[0xA8EC44] = 1; /*0x4e67f1*/
  MEMORY[0xA8EC45] = 0; /*0x4e67f8*/
  MEMORY[0xA8EC38] = (int)&vt_DynamicVectorClass_WaveClass; /*0x4e67fd*/
  MEMORY[0xA8EC4C] = 10; /*0x4e6807*/
  MEMORY[0xA8EC48] = 0; /*0x4e6811*/
  return atexit(sub_4E6820); /*0x4e681c*/
}


// ==== 0x004E6820  sub_4E6820  this=-  sig=ida-proto ====
void __cdecl sub_4E6820()
{
  MEMORY[0xA8EC38] = (int)&vt_VectorClass_WaveClass; /*0x4e6828*/
  if ( MEMORY[0xA8EC3C] && MEMORY[0xA8EC45] ) /*0x4e683c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EC3C]); /*0x4e683f*/
    MEMORY[0xA8EC3C] = 0; /*0x4e6847*/
  }
  MEMORY[0xA8EC45] = 0; /*0x4e684d*/
  MEMORY[0xA8EC40] = 0; /*0x4e6853*/
}


// ==== 0x004E6860  sub_4E6860  this=-  sig=ida-proto ====
int sub_4E6860()
{
  MEMORY[0xA8ED44] = 0; /*0x4e6867*/
  MEMORY[0xA8ED48] = 0; /*0x4e686c*/
  MEMORY[0xA8ED4C] = 1; /*0x4e6871*/
  MEMORY[0xA8ED4D] = 0; /*0x4e6878*/
  MEMORY[0xA8ED40] = (int)&off_7E4678; /*0x4e687d*/
  MEMORY[0xA8ED54] = 10; /*0x4e6887*/
  MEMORY[0xA8ED50] = 0; /*0x4e6891*/
  return atexit(sub_4E68A0); /*0x4e689c*/
}


// ==== 0x004E68A0  sub_4E68A0  this=-  sig=ida-proto ====
void __cdecl sub_4E68A0()
{
  MEMORY[0xA8ED40] = (int)&vt_VectorClass_BulletClass; /*0x4e68a8*/
  if ( MEMORY[0xA8ED44] && MEMORY[0xA8ED4D] ) /*0x4e68bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ED44]); /*0x4e68bf*/
    MEMORY[0xA8ED44] = 0; /*0x4e68c7*/
  }
  MEMORY[0xA8ED4D] = 0; /*0x4e68cd*/
  MEMORY[0xA8ED48] = 0; /*0x4e68d3*/
}


// ==== 0x004E68E0  sub_4E68E0  this=-  sig=ida-proto ====
int sub_4E68E0()
{
  MEMORY[0xA8EC54] = 0; /*0x4e68e7*/
  MEMORY[0xA8EC58] = 0; /*0x4e68ec*/
  MEMORY[0xA8EC5C] = 1; /*0x4e68f1*/
  MEMORY[0xA8EC5D] = 0; /*0x4e68f8*/
  MEMORY[0xA8EC50] = (int)&vt_DynamicVectorClass_OverlayClass; /*0x4e68fd*/
  MEMORY[0xA8EC64] = 10; /*0x4e6907*/
  MEMORY[0xA8EC60] = 0; /*0x4e6911*/
  return atexit(sub_4E6920); /*0x4e691c*/
}


// ==== 0x004E6920  sub_4E6920  this=-  sig=ida-proto ====
void __cdecl sub_4E6920()
{
  MEMORY[0xA8EC50] = (int)&vt_VectorClass_OverlayClass; /*0x4e6928*/
  if ( MEMORY[0xA8EC54] && MEMORY[0xA8EC5D] ) /*0x4e693c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EC54]); /*0x4e693f*/
    MEMORY[0xA8EC54] = 0; /*0x4e6947*/
  }
  MEMORY[0xA8EC5D] = 0; /*0x4e694d*/
  MEMORY[0xA8EC58] = 0; /*0x4e6953*/
}


// ==== 0x004E6960  sub_4E6960  this=-  sig=ida-proto ====
int sub_4E6960()
{
  MEMORY[0xA83DCC] = 0; /*0x4e6967*/
  MEMORY[0xA83DD0] = 0; /*0x4e696c*/
  MEMORY[0xA83DD4] = 1; /*0x4e6971*/
  MEMORY[0xA83DD5] = 0; /*0x4e6978*/
  MEMORY[0xA83DC8] = (int)&vt_DynamicVectorClass_ParticleClass; /*0x4e697d*/
  MEMORY[0xA83DDC] = 10; /*0x4e6987*/
  MEMORY[0xA83DD8] = 0; /*0x4e6991*/
  return atexit(sub_4E69A0); /*0x4e699c*/
}


// ==== 0x004E69A0  sub_4E69A0  this=-  sig=ida-proto ====
void __cdecl sub_4E69A0()
{
  MEMORY[0xA83DC8] = (int)&vt_VectorClass_ParticleClass; /*0x4e69a8*/
  if ( MEMORY[0xA83DCC] && MEMORY[0xA83DD5] ) /*0x4e69bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83DCC]); /*0x4e69bf*/
    MEMORY[0xA83DCC] = 0; /*0x4e69c7*/
  }
  MEMORY[0xA83DD5] = 0; /*0x4e69cd*/
  MEMORY[0xA83DD0] = 0; /*0x4e69d3*/
}


// ==== 0x004E69E0  sub_4E69E0  this=-  sig=ida-proto ====
int sub_4E69E0()
{
  MEMORY[0xA8B1E4] = 0; /*0x4e69e7*/
  MEMORY[0xA8B1E8] = 0; /*0x4e69ec*/
  MEMORY[0xA8B1EC] = 1; /*0x4e69f1*/
  MEMORY[0xA8B1ED] = 0; /*0x4e69f8*/
  MEMORY[0xA8B1E0] = (int)&vt_DynamicVectorClass_SmudgeClass; /*0x4e69fd*/
  MEMORY[0xA8B1F4] = 10; /*0x4e6a07*/
  MEMORY[0xA8B1F0] = 0; /*0x4e6a11*/
  return atexit(sub_4E6A20); /*0x4e6a1c*/
}


// ==== 0x004E6A20  sub_4E6A20  this=-  sig=ida-proto ====
void __cdecl sub_4E6A20()
{
  MEMORY[0xA8B1E0] = (int)&vt_VectorClass_SmudgeClass; /*0x4e6a28*/
  if ( MEMORY[0xA8B1E4] && MEMORY[0xA8B1ED] ) /*0x4e6a3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8B1E4]); /*0x4e6a3f*/
    MEMORY[0xA8B1E4] = 0; /*0x4e6a47*/
  }
  MEMORY[0xA8B1ED] = 0; /*0x4e6a4d*/
  MEMORY[0xA8B1E8] = 0; /*0x4e6a53*/
}


// ==== 0x004E6A60  sub_4E6A60  this=-  sig=ida-proto ====
int sub_4E6A60()
{
  MEMORY[0xA8E98C] = 0; /*0x4e6a67*/
  MEMORY[0xA8E990] = 0; /*0x4e6a6c*/
  MEMORY[0xA8E994] = 1; /*0x4e6a71*/
  MEMORY[0xA8E995] = 0; /*0x4e6a78*/
  MEMORY[0xA8E988] = (int)&vt_DynamicVectorClass_TerrainClass; /*0x4e6a7d*/
  MEMORY[0xA8E99C] = 10; /*0x4e6a87*/
  MEMORY[0xA8E998] = 0; /*0x4e6a91*/
  return atexit(sub_4E6AA0); /*0x4e6a9c*/
}


// ==== 0x004E6AA0  sub_4E6AA0  this=-  sig=ida-proto ====
void __cdecl sub_4E6AA0()
{
  MEMORY[0xA8E988] = (int)&vt_VectorClass_TerrainClass; /*0x4e6aa8*/
  if ( MEMORY[0xA8E98C] && MEMORY[0xA8E995] ) /*0x4e6abc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E98C]); /*0x4e6abf*/
    MEMORY[0xA8E98C] = 0; /*0x4e6ac7*/
  }
  MEMORY[0xA8E995] = 0; /*0x4e6acd*/
  MEMORY[0xA8E990] = 0; /*0x4e6ad3*/
}


// ==== 0x004E6AE0  sub_4E6AE0  this=-  sig=ida-proto ====
int sub_4E6AE0()
{
  MEMORY[0xA83DEC] = 0; /*0x4e6ae7*/
  MEMORY[0xA83DF0] = 0; /*0x4e6aec*/
  MEMORY[0xA83DF4] = 1; /*0x4e6af1*/
  MEMORY[0xA83DF5] = 0; /*0x4e6af8*/
  MEMORY[0xA83DE8] = (int)&vt_DynamicVectorClass_InfantryClass; /*0x4e6afd*/
  MEMORY[0xA83DFC] = 10; /*0x4e6b07*/
  MEMORY[0xA83DF8] = 0; /*0x4e6b11*/
  return atexit(sub_4E6B20); /*0x4e6b1c*/
}


// ==== 0x004E6B20  sub_4E6B20  this=-  sig=ida-proto ====
void __cdecl sub_4E6B20()
{
  MEMORY[0xA83DE8] = (int)&vt_VectorClass_InfantryClass; /*0x4e6b28*/
  if ( MEMORY[0xA83DEC] && MEMORY[0xA83DF5] ) /*0x4e6b3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83DEC]); /*0x4e6b3f*/
    MEMORY[0xA83DEC] = 0; /*0x4e6b47*/
  }
  MEMORY[0xA83DF5] = 0; /*0x4e6b4d*/
  MEMORY[0xA83DF0] = 0; /*0x4e6b53*/
}


// ==== 0x004E6B60  sub_4E6B60  this=-  sig=ida-proto ====
int sub_4E6B60()
{
  MEMORY[0xA8EB44] = 0; /*0x4e6b67*/
  MEMORY[0xA8EB48] = 0; /*0x4e6b6c*/
  MEMORY[0xA8EB4C] = 1; /*0x4e6b71*/
  MEMORY[0xA8EB4D] = 0; /*0x4e6b78*/
  MEMORY[0xA8EB40] = (int)&vt_DynamicVectorClass_BuildingClass; /*0x4e6b7d*/
  MEMORY[0xA8EB54] = 10; /*0x4e6b87*/
  MEMORY[0xA8EB50] = 0; /*0x4e6b91*/
  return atexit(sub_4E6BA0); /*0x4e6b9c*/
}


// ==== 0x004E6BA0  sub_4E6BA0  this=-  sig=ida-proto ====
void __cdecl sub_4E6BA0()
{
  MEMORY[0xA8EB40] = (int)&vt_VectorClass_BuildingClass; /*0x4e6ba8*/
  if ( MEMORY[0xA8EB44] && MEMORY[0xA8EB4D] ) /*0x4e6bbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EB44]); /*0x4e6bbf*/
    MEMORY[0xA8EB44] = 0; /*0x4e6bc7*/
  }
  MEMORY[0xA8EB4D] = 0; /*0x4e6bcd*/
  MEMORY[0xA8EB48] = 0; /*0x4e6bd3*/
}


// ==== 0x004E6BE0  sub_4E6BE0  this=-  sig=ida-proto ====
int sub_4E6BE0()
{
  MEMORY[0xA8E394] = 0; /*0x4e6be7*/
  MEMORY[0xA8E398] = 0; /*0x4e6bec*/
  MEMORY[0xA8E39C] = 1; /*0x4e6bf1*/
  MEMORY[0xA8E39D] = 0; /*0x4e6bf8*/
  MEMORY[0xA8E390] = (int)&vt_DynamicVectorClass_AircraftClass; /*0x4e6bfd*/
  MEMORY[0xA8E3A4] = 10; /*0x4e6c07*/
  MEMORY[0xA8E3A0] = 0; /*0x4e6c11*/
  return atexit(sub_4E6C20); /*0x4e6c1c*/
}


// ==== 0x004E6C20  sub_4E6C20  this=-  sig=ida-proto ====
void __cdecl sub_4E6C20()
{
  MEMORY[0xA8E390] = (int)&vt_VectorClass_AircraftClass; /*0x4e6c28*/
  if ( MEMORY[0xA8E394] && MEMORY[0xA8E39D] ) /*0x4e6c3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E394]); /*0x4e6c3f*/
    MEMORY[0xA8E394] = 0; /*0x4e6c47*/
  }
  MEMORY[0xA8E39D] = 0; /*0x4e6c4d*/
  MEMORY[0xA8E398] = 0; /*0x4e6c53*/
}


// ==== 0x004E6C60  sub_4E6C60  this=-  sig=ida-proto ====
int sub_4E6C60()
{
  MEMORY[0x8B410C] = 0; /*0x4e6c67*/
  MEMORY[0x8B4110] = 0; /*0x4e6c6c*/
  MEMORY[0x8B4114] = 1; /*0x4e6c71*/
  MEMORY[0x8B4115] = 0; /*0x4e6c78*/
  MEMORY[0x8B4108] = (int)&vt_DynamicVectorClass_UnitClass; /*0x4e6c7d*/
  MEMORY[0x8B411C] = 10; /*0x4e6c87*/
  MEMORY[0x8B4118] = 0; /*0x4e6c91*/
  return atexit(sub_4E6CA0); /*0x4e6c9c*/
}


// ==== 0x004E6CA0  sub_4E6CA0  this=-  sig=ida-proto ====
void __cdecl sub_4E6CA0()
{
  MEMORY[0x8B4108] = (int)&vt_VectorClass_UnitClass; /*0x4e6ca8*/
  if ( MEMORY[0x8B410C] && MEMORY[0x8B4115] ) /*0x4e6cbc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B410C]); /*0x4e6cbf*/
    MEMORY[0x8B410C] = 0; /*0x4e6cc7*/
  }
  MEMORY[0x8B4115] = 0; /*0x4e6ccd*/
  MEMORY[0x8B4110] = 0; /*0x4e6cd3*/
}


// ==== 0x004E6CE0  sub_4E6CE0  this=-  sig=ida-proto ====
int sub_4E6CE0()
{
  HouseClass_Array = 0; /*0x4e6ce7*/
  dword_A80230 = 0; /*0x4e6cec*/
  byte_A80234 = 1; /*0x4e6cf1*/
  byte_A80235 = 0; /*0x4e6cf8*/
  HouseClass_Array_0 = (int)&vt_DynamicVectorClass_HouseClass; /*0x4e6cfd*/
  dword_A8023C = 10; /*0x4e6d07*/
  HouseClass_Count = 0; /*0x4e6d11*/
  return atexit(sub_4E6D20); /*0x4e6d1c*/
}


// ==== 0x004E6D20  sub_4E6D20  this=-  sig=ida-proto ====
void __cdecl sub_4E6D20()
{
  HouseClass_Array_0 = (int)&vt_VectorClass_HouseClass; /*0x4e6d28*/
  if ( HouseClass_Array && byte_A80235 ) /*0x4e6d3c*/
  {
    __3_YAXPAX_Z(HouseClass_Array); /*0x4e6d3f*/
    HouseClass_Array = 0; /*0x4e6d47*/
  }
  byte_A80235 = 0; /*0x4e6d4d*/
  dword_A80230 = 0; /*0x4e6d53*/
}


// ==== 0x004E6D60  sub_4E6D60  this=-  sig=ida-proto ====
int sub_4E6D60()
{
  MEMORY[0xA8E9AC] = 0; /*0x4e6d67*/
  MEMORY[0xA8E9B0] = 0; /*0x4e6d6c*/
  MEMORY[0xA8E9B4] = 1; /*0x4e6d71*/
  MEMORY[0xA8E9B5] = 0; /*0x4e6d78*/
  MEMORY[0xA8E9A8] = (int)&vt_DynamicVectorClass_AnimClass; /*0x4e6d7d*/
  MEMORY[0xA8E9BC] = 10; /*0x4e6d87*/
  MEMORY[0xA8E9B8] = 0; /*0x4e6d91*/
  return atexit(sub_4E6DA0); /*0x4e6d9c*/
}


// ==== 0x004E6DA0  sub_4E6DA0  this=-  sig=ida-proto ====
void __cdecl sub_4E6DA0()
{
  MEMORY[0xA8E9A8] = (int)&vt_VectorClass_AnimClass; /*0x4e6da8*/
  if ( MEMORY[0xA8E9AC] && MEMORY[0xA8E9B5] ) /*0x4e6dbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E9AC]); /*0x4e6dbf*/
    MEMORY[0xA8E9AC] = 0; /*0x4e6dc7*/
  }
  MEMORY[0xA8E9B5] = 0; /*0x4e6dcd*/
  MEMORY[0xA8E9B0] = 0; /*0x4e6dd3*/
}


// ==== 0x004E6DE0  sub_4E6DE0  this=-  sig=ida-proto ====
int sub_4E6DE0()
{
  MEMORY[0x8B40EC] = 0; /*0x4e6de7*/
  MEMORY[0x8B40F0] = 0; /*0x4e6dec*/
  MEMORY[0x8B40F4] = 1; /*0x4e6df1*/
  MEMORY[0x8B40F5] = 0; /*0x4e6df8*/
  MEMORY[0x8B40E8] = (int)&vt_DynamicVectorClass_TeamClass; /*0x4e6dfd*/
  MEMORY[0x8B40FC] = 10; /*0x4e6e07*/
  MEMORY[0x8B40F8] = 0; /*0x4e6e11*/
  return atexit(sub_4E6E20); /*0x4e6e1c*/
}


// ==== 0x004E6E20  sub_4E6E20  this=-  sig=ida-proto ====
void __cdecl sub_4E6E20()
{
  MEMORY[0x8B40E8] = (int)&vt_VectorClass_TeamClass; /*0x4e6e28*/
  if ( MEMORY[0x8B40EC] && MEMORY[0x8B40F5] ) /*0x4e6e3c*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B40EC]); /*0x4e6e3f*/
    MEMORY[0x8B40EC] = 0; /*0x4e6e47*/
  }
  MEMORY[0x8B40F5] = 0; /*0x4e6e4d*/
  MEMORY[0x8B40F0] = 0; /*0x4e6e53*/
}


// ==== 0x004E6E60  sub_4E6E60  this=-  sig=ida-proto ====
int sub_4E6E60()
{
  MEMORY[0xA83E34] = 0; /*0x4e6e67*/
  MEMORY[0xA83E38] = 0; /*0x4e6e6c*/
  MEMORY[0xA83E3C] = 1; /*0x4e6e71*/
  MEMORY[0xA83E3D] = 0; /*0x4e6e78*/
  MEMORY[0xA83E30] = (int)&vt_DynamicVectorClass_FactoryClass; /*0x4e6e7d*/
  MEMORY[0xA83E44] = 10; /*0x4e6e87*/
  MEMORY[0xA83E40] = 0; /*0x4e6e91*/
  return atexit(sub_4E6EA0); /*0x4e6e9c*/
}


// ==== 0x004E6EA0  sub_4E6EA0  this=-  sig=ida-proto ====
void __cdecl sub_4E6EA0()
{
  MEMORY[0xA83E30] = (int)&vt_VectorClass_FactoryClass; /*0x4e6ea8*/
  if ( MEMORY[0xA83E34] && MEMORY[0xA83E3D] ) /*0x4e6ebc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83E34]); /*0x4e6ebf*/
    MEMORY[0xA83E34] = 0; /*0x4e6ec7*/
  }
  MEMORY[0xA83E3D] = 0; /*0x4e6ecd*/
  MEMORY[0xA83E38] = 0; /*0x4e6ed3*/
}


// ==== 0x004E6EE0  sub_4E6EE0  this=-  sig=ida-proto ====
int sub_4E6EE0()
{
  g_CampaignTypeArray = 0; /*0x4e6ee7*/
  dword_A83D00 = 0; /*0x4e6eec*/
  byte_A83D04 = 1; /*0x4e6ef1*/
  byte_A83D05 = 0; /*0x4e6ef8*/
  dword_A83CF8 = (int)&vt_DynamicVectorClass_CampaignClass; /*0x4e6efd*/
  dword_A83D0C = 10; /*0x4e6f07*/
  g_UnitTypeInitState = 0; /*0x4e6f11*/
  return atexit(sub_4E6F20); /*0x4e6f1c*/
}


// ==== 0x004E6F20  sub_4E6F20  this=-  sig=ida-proto ====
void __cdecl sub_4E6F20()
{
  dword_A83CF8 = (int)&vt_VectorClass_CampaignClass; /*0x4e6f28*/
  if ( g_CampaignTypeArray && byte_A83D05 ) /*0x4e6f3c*/
  {
    __3_YAXPAX_Z(g_CampaignTypeArray); /*0x4e6f3f*/
    g_CampaignTypeArray = 0; /*0x4e6f47*/
  }
  byte_A83D05 = 0; /*0x4e6f4d*/
  dword_A83D00 = 0; /*0x4e6f53*/
}


// ==== 0x004E6F60  sub_4E6F60  this=-  sig=ida-proto ====
int sub_4E6F60()
{
  MEMORY[0x8B4124] = 0; /*0x4e6f67*/
  MEMORY[0x8B4128] = 0; /*0x4e6f6c*/
  MEMORY[0x8B412C] = 1; /*0x4e6f71*/
  MEMORY[0x8B412D] = 0; /*0x4e6f78*/
  MEMORY[0x8B4120] = (int)&vt_DynamicVectorClass_SideClass; /*0x4e6f7d*/
  MEMORY[0x8B4134] = 10; /*0x4e6f87*/
  MEMORY[0x8B4130] = 0; /*0x4e6f91*/
  return atexit(sub_4E6FA0); /*0x4e6f9c*/
}


// ==== 0x004E6FA0  sub_4E6FA0  this=-  sig=ida-proto ====
void __cdecl sub_4E6FA0()
{
  MEMORY[0x8B4120] = (int)&vt_VectorClass_SideClass; /*0x4e6fa8*/
  if ( MEMORY[0x8B4124] && MEMORY[0x8B412D] ) /*0x4e6fbc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B4124]); /*0x4e6fbf*/
    MEMORY[0x8B4124] = 0; /*0x4e6fc7*/
  }
  MEMORY[0x8B412D] = 0; /*0x4e6fcd*/
  MEMORY[0x8B4128] = 0; /*0x4e6fd3*/
}


// ==== 0x004E6FE0  sub_4E6FE0  this=-  sig=ida-proto ====
int sub_4E6FE0()
{
  g_SuperWeaponTypeCount = 0; /*0x4e6fe7*/
  dword_A83CA0 = 0; /*0x4e6fec*/
  byte_A83CA4 = 1; /*0x4e6ff1*/
  byte_A83CA5 = 0; /*0x4e6ff8*/
  dword_A83C98 = (int)&vt_DynamicVectorClass_HouseTypeClass; /*0x4e6ffd*/
  dword_A83CAC = 10; /*0x4e7007*/
  g_SuperWeaponTypeArray = 0; /*0x4e7011*/
  return atexit(sub_4E7020); /*0x4e701c*/
}


// ==== 0x004E7020  sub_4E7020  this=-  sig=ida-proto ====
void __cdecl sub_4E7020()
{
  dword_A83C98 = (int)&vt_VectorClass_HouseTypeClass; /*0x4e7028*/
  if ( g_SuperWeaponTypeCount && byte_A83CA5 ) /*0x4e703c*/
  {
    __3_YAXPAX_Z(g_SuperWeaponTypeCount); /*0x4e703f*/
    g_SuperWeaponTypeCount = 0; /*0x4e7047*/
  }
  byte_A83CA5 = 0; /*0x4e704d*/
  dword_A83CA0 = 0; /*0x4e7053*/
}


// ==== 0x004E7060  sub_4E7060  this=-  sig=ida-proto ====
int sub_4E7060()
{
  MEMORY[0xA8E8D4] = 0; /*0x4e7067*/
  MEMORY[0xA8E8D8] = 0; /*0x4e706c*/
  MEMORY[0xA8E8DC] = 1; /*0x4e7071*/
  MEMORY[0xA8E8DD] = 0; /*0x4e7078*/
  MEMORY[0xA8E8D0] = (int)&vt_DynamicVectorClass_TaskForceClass; /*0x4e707d*/
  MEMORY[0xA8E8E4] = 10; /*0x4e7087*/
  MEMORY[0xA8E8E0] = 0; /*0x4e7091*/
  return atexit(sub_4E70A0); /*0x4e709c*/
}


// ==== 0x004E70A0  sub_4E70A0  this=-  sig=ida-proto ====
void __cdecl sub_4E70A0()
{
  MEMORY[0xA8E8D0] = (int)&vt_VectorClass_TaskForceClass; /*0x4e70a8*/
  if ( MEMORY[0xA8E8D4] && MEMORY[0xA8E8DD] ) /*0x4e70bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E8D4]); /*0x4e70bf*/
    MEMORY[0xA8E8D4] = 0; /*0x4e70c7*/
  }
  MEMORY[0xA8E8DD] = 0; /*0x4e70cd*/
  MEMORY[0xA8E8D8] = 0; /*0x4e70d3*/
}


// ==== 0x004E70E0  sub_4E70E0  this=-  sig=ida-proto ====
int sub_4E70E0()
{
  MEMORY[0xA8ECA4] = 0; /*0x4e70e7*/
  MEMORY[0xA8ECA8] = 0; /*0x4e70ec*/
  MEMORY[0xA8ECAC] = 1; /*0x4e70f1*/
  MEMORY[0xA8ECAD] = 0; /*0x4e70f8*/
  MEMORY[0xA8ECA0] = (int)&vt_DynamicVectorClass_TeamTypeClass; /*0x4e70fd*/
  MEMORY[0xA8ECB4] = 10; /*0x4e7107*/
  MEMORY[0xA8ECB0] = 0; /*0x4e7111*/
  return atexit(sub_4E7120); /*0x4e711c*/
}


// ==== 0x004E7120  sub_4E7120  this=-  sig=ida-proto ====
void __cdecl sub_4E7120()
{
  MEMORY[0xA8ECA0] = (int)&vt_VectorClass_TeamTypeClass; /*0x4e7128*/
  if ( MEMORY[0xA8ECA4] && MEMORY[0xA8ECAD] ) /*0x4e713c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ECA4]); /*0x4e713f*/
    MEMORY[0xA8ECA4] = 0; /*0x4e7147*/
  }
  MEMORY[0xA8ECAD] = 0; /*0x4e714d*/
  MEMORY[0xA8ECA8] = 0; /*0x4e7153*/
}


// ==== 0x004E7160  sub_4E7160  this=-  sig=ida-proto ====
int sub_4E7160()
{
  unk_8B41CC = 0; /*0x4e7167*/
  dword_8B41D0 = 0; /*0x4e716c*/
  unk_8B41D4 = 1; /*0x4e7171*/
  unk_8B41D5 = 0; /*0x4e7178*/
  dword_8B41C8 = (int)&vt_DynamicVectorClass_ScriptTypeClass; /*0x4e717d*/
  dword_8B41DC = 10; /*0x4e7187*/
  dword_8B41D8 = 0; /*0x4e7191*/
  return atexit(sub_4E71A0); /*0x4e719c*/
}


// ==== 0x004E71A0  sub_4E71A0  this=-  sig=ida-proto ====
void __cdecl sub_4E71A0()
{
  dword_8B41C8 = (int)&vt_VectorClass_ScriptTypeClass; /*0x4e71a8*/
  if ( unk_8B41CC && unk_8B41D5 ) /*0x4e71bc*/
  {
    __3_YAXPAX_Z(unk_8B41CC); /*0x4e71bf*/
    unk_8B41CC = 0; /*0x4e71c7*/
  }
  unk_8B41D5 = 0; /*0x4e71cd*/
  dword_8B41D0 = 0; /*0x4e71d3*/
}


// ==== 0x004E71E0  sub_4E71E0  this=-  sig=ida-proto ====
int sub_4E71E0()
{
  MEMORY[0xA83D84] = 0; /*0x4e71e7*/
  MEMORY[0xA83D88] = 0; /*0x4e71ec*/
  MEMORY[0xA83D8C] = 1; /*0x4e71f1*/
  MEMORY[0xA83D8D] = 0; /*0x4e71f8*/
  MEMORY[0xA83D80] = (int)&vt_DynamicVectorClass_OverlayTypeClass; /*0x4e71fd*/
  MEMORY[0xA83D94] = 10; /*0x4e7207*/
  MEMORY[0xA83D90] = 0; /*0x4e7211*/
  return atexit(sub_4E7220); /*0x4e721c*/
}


// ==== 0x004E7220  sub_4E7220  this=-  sig=ida-proto ====
void __cdecl sub_4E7220()
{
  MEMORY[0xA83D80] = (int)&vt_VectorClass_OverlayTypeClass; /*0x4e7228*/
  if ( MEMORY[0xA83D84] && MEMORY[0xA83D8D] ) /*0x4e723c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83D84]); /*0x4e723f*/
    MEMORY[0xA83D84] = 0; /*0x4e7247*/
  }
  MEMORY[0xA83D8D] = 0; /*0x4e724d*/
  MEMORY[0xA83D88] = 0; /*0x4e7253*/
}


// ==== 0x004E7260  sub_4E7260  this=-  sig=ida-proto ====
int sub_4E7260()
{
  MEMORY[0xA8EC1C] = 0; /*0x4e7267*/
  MEMORY[0xA8EC20] = 0; /*0x4e726c*/
  MEMORY[0xA8EC24] = 1; /*0x4e7271*/
  MEMORY[0xA8EC25] = 0; /*0x4e7278*/
  MEMORY[0xA8EC18] = (int)&vt_DynamicVectorClass_SmudgeTypeClass; /*0x4e727d*/
  MEMORY[0xA8EC2C] = 10; /*0x4e7287*/
  MEMORY[0xA8EC28] = 0; /*0x4e7291*/
  return atexit(sub_4E72A0); /*0x4e729c*/
}


// ==== 0x004E72A0  sub_4E72A0  this=-  sig=ida-proto ====
void __cdecl sub_4E72A0()
{
  MEMORY[0xA8EC18] = (int)&vt_VectorClass_SmudgeTypeClass; /*0x4e72a8*/
  if ( MEMORY[0xA8EC1C] && MEMORY[0xA8EC25] ) /*0x4e72bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EC1C]); /*0x4e72bf*/
    MEMORY[0xA8EC1C] = 0; /*0x4e72c7*/
  }
  MEMORY[0xA8EC25] = 0; /*0x4e72cd*/
  MEMORY[0xA8EC20] = 0; /*0x4e72d3*/
}


// ==== 0x004E72E0  sub_4E72E0  this=-  sig=ida-proto ====
int sub_4E72E0()
{
  MEMORY[0xA8E31C] = 0; /*0x4e72e7*/
  MEMORY[0xA8E320] = 0; /*0x4e72ec*/
  MEMORY[0xA8E324] = 1; /*0x4e72f1*/
  MEMORY[0xA8E325] = 0; /*0x4e72f8*/
  MEMORY[0xA8E318] = (int)&vt_DynamicVectorClass_TerrainTypeClass; /*0x4e72fd*/
  MEMORY[0xA8E32C] = 10; /*0x4e7307*/
  MEMORY[0xA8E328] = 0; /*0x4e7311*/
  return atexit(sub_4E7320); /*0x4e731c*/
}


// ==== 0x004E7320  sub_4E7320  this=-  sig=ida-proto ====
void __cdecl sub_4E7320()
{
  MEMORY[0xA8E318] = (int)&vt_VectorClass_TerrainTypeClass; /*0x4e7328*/
  if ( MEMORY[0xA8E31C] && MEMORY[0xA8E325] ) /*0x4e733c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E31C]); /*0x4e733f*/
    MEMORY[0xA8E31C] = 0; /*0x4e7347*/
  }
  MEMORY[0xA8E325] = 0; /*0x4e734d*/
  MEMORY[0xA8E320] = 0; /*0x4e7353*/
}


// ==== 0x004E7360  sub_4E7360  this=-  sig=ida-proto ====
int sub_4E7360()
{
  g_TriggerTypeCount = 0; /*0x4e7367*/
  dword_A83C70 = 0; /*0x4e736c*/
  byte_A83C74 = 1; /*0x4e7371*/
  byte_A83C75 = 0; /*0x4e7378*/
  dword_A83C68 = (int)&vt_DynamicVectorClass_BuildingTypeClass; /*0x4e737d*/
  dword_A83C7C = 10; /*0x4e7387*/
  g_TriggerClassCount = 0; /*0x4e7391*/
  return atexit(sub_4E73A0); /*0x4e739c*/
}


// ==== 0x004E73A0  sub_4E73A0  this=-  sig=ida-proto ====
void __cdecl sub_4E73A0()
{
  dword_A83C68 = (int)&vt_VectorClass_BuildingTypeClass; /*0x4e73a8*/
  if ( g_TriggerTypeCount && byte_A83C75 ) /*0x4e73bc*/
  {
    __3_YAXPAX_Z(g_TriggerTypeCount); /*0x4e73bf*/
    g_TriggerTypeCount = 0; /*0x4e73c7*/
  }
  byte_A83C75 = 0; /*0x4e73cd*/
  dword_A83C70 = 0; /*0x4e73d3*/
}


// ==== 0x004E73E0  sub_4E73E0  this=-  sig=ida-proto ====
int sub_4E73E0()
{
  MEMORY[0xA8B21C] = 0; /*0x4e73e7*/
  MEMORY[0xA8B220] = 0; /*0x4e73ec*/
  MEMORY[0xA8B224] = 1; /*0x4e73f1*/
  MEMORY[0xA8B225] = 0; /*0x4e73f8*/
  MEMORY[0xA8B218] = (int)&vt_DynamicVectorClass_AircraftTypeClass; /*0x4e73fd*/
  MEMORY[0xA8B22C] = 10; /*0x4e7407*/
  MEMORY[0xA8B228] = 0; /*0x4e7411*/
  return atexit(sub_4E7420); /*0x4e741c*/
}


// ==== 0x004E7420  sub_4E7420  this=-  sig=ida-proto ====
void __cdecl sub_4E7420()
{
  MEMORY[0xA8B218] = (int)&vt_VectorClass_AircraftTypeClass; /*0x4e7428*/
  if ( MEMORY[0xA8B21C] && MEMORY[0xA8B225] ) /*0x4e743c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8B21C]); /*0x4e743f*/
    MEMORY[0xA8B21C] = 0; /*0x4e7447*/
  }
  MEMORY[0xA8B225] = 0; /*0x4e744d*/
  MEMORY[0xA8B220] = 0; /*0x4e7453*/
}


// ==== 0x004E7460  sub_4E7460  this=-  sig=ida-proto ====
int sub_4E7460()
{
  g_UnitTypeCount2 = 0; /*0x4e7467*/
  dword_A83CE8 = 0; /*0x4e746c*/
  byte_A83CEC = 1; /*0x4e7471*/
  byte_A83CED = 0; /*0x4e7478*/
  UnitTypeClass_Array = (int)&vt_DynamicVectorClass_UnitTypeClass; /*0x4e747d*/
  dword_A83CF4 = 10; /*0x4e7487*/
  g_CrateCount = 0; /*0x4e7491*/
  return atexit(sub_4E74A0); /*0x4e749c*/
}


// ==== 0x004E74A0  sub_4E74A0  this=-  sig=ida-proto ====
void __cdecl sub_4E74A0()
{
  UnitTypeClass_Array = (int)&vt_VectorClass_UnitTypeClass; /*0x4e74a8*/
  if ( g_UnitTypeCount2 && byte_A83CED ) /*0x4e74bc*/
  {
    __3_YAXPAX_Z(g_UnitTypeCount2); /*0x4e74bf*/
    g_UnitTypeCount2 = 0; /*0x4e74c7*/
  }
  byte_A83CED = 0; /*0x4e74cd*/
  dword_A83CE8 = 0; /*0x4e74d3*/
}


// ==== 0x004E74E0  sub_4E74E0  this=-  sig=ida-proto ====
int sub_4E74E0()
{
  MEMORY[0x8B4154] = 0; /*0x4e74e7*/
  MEMORY[0x8B4158] = 0; /*0x4e74ec*/
  MEMORY[0x8B415C] = 1; /*0x4e74f1*/
  MEMORY[0x8B415D] = 0; /*0x4e74f8*/
  MEMORY[0x8B4150] = (int)&vt_DynamicVectorClass_AnimTypeClass; /*0x4e74fd*/
  MEMORY[0x8B4164] = 10; /*0x4e7507*/
  MEMORY[0x8B4160] = 0; /*0x4e7511*/
  return atexit(sub_4E7520); /*0x4e751c*/
}


// ==== 0x004E7520  sub_4E7520  this=-  sig=ida-proto ====
void __cdecl sub_4E7520()
{
  MEMORY[0x8B4150] = (int)&vt_VectorClass_AnimTypeClass; /*0x4e7528*/
  if ( MEMORY[0x8B4154] && MEMORY[0x8B415D] ) /*0x4e753c*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B4154]); /*0x4e753f*/
    MEMORY[0x8B4154] = 0; /*0x4e7547*/
  }
  MEMORY[0x8B415D] = 0; /*0x4e754d*/
  MEMORY[0x8B4158] = 0; /*0x4e7553*/
}


// ==== 0x004E7560  sub_4E7560  this=-  sig=ida-proto ====
int sub_4E7560()
{
  MEMORY[0xA8E34C] = 0; /*0x4e7567*/
  MEMORY[0xA8E350] = 0; /*0x4e756c*/
  MEMORY[0xA8E354] = 1; /*0x4e7571*/
  MEMORY[0xA8E355] = 0; /*0x4e7578*/
  MEMORY[0xA8E348] = (int)&vt_DynamicVectorClass_InfantryTypeClass; /*0x4e757d*/
  MEMORY[0xA8E35C] = 10; /*0x4e7587*/
  MEMORY[0xA8E358] = 0; /*0x4e7591*/
  return atexit(sub_4E75A0); /*0x4e759c*/
}


// ==== 0x004E75A0  sub_4E75A0  this=-  sig=ida-proto ====
void __cdecl sub_4E75A0()
{
  MEMORY[0xA8E348] = (int)&vt_VectorClass_InfantryTypeClass; /*0x4e75a8*/
  if ( MEMORY[0xA8E34C] && MEMORY[0xA8E355] ) /*0x4e75bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E34C]); /*0x4e75bf*/
    MEMORY[0xA8E34C] = 0; /*0x4e75c7*/
  }
  MEMORY[0xA8E355] = 0; /*0x4e75cd*/
  MEMORY[0xA8E350] = 0; /*0x4e75d3*/
}


// ==== 0x004E75E0  sub_4E75E0  this=-  sig=ida-proto ====
int sub_4E75E0()
{
  dword_A83C84 = 0; /*0x4e75e7*/
  dword_A83C88 = 0; /*0x4e75ec*/
  byte_A83C8C = 1; /*0x4e75f1*/
  byte_A83C8D = 0; /*0x4e75f8*/
  BulletTypeClass_Array = (int)&vt_DynamicVectorClass_BulletTypeClass; /*0x4e75fd*/
  dword_A83C94 = 10; /*0x4e7607*/
  g_BulletTypeInitState = 0; /*0x4e7611*/
  return atexit(sub_4E7620); /*0x4e761c*/
}


// ==== 0x004E7620  sub_4E7620  this=-  sig=ida-proto ====
void __cdecl sub_4E7620()
{
  BulletTypeClass_Array = (int)&vt_VectorClass_BulletTypeClass; /*0x4e7628*/
  if ( dword_A83C84 && byte_A83C8D ) /*0x4e763c*/
  {
    __3_YAXPAX_Z(dword_A83C84); /*0x4e763f*/
    dword_A83C84 = 0; /*0x4e7647*/
  }
  byte_A83C8D = 0; /*0x4e764d*/
  dword_A83C88 = 0; /*0x4e7653*/
}


// ==== 0x004E7660  sub_4E7660  this=-  sig=ida-proto ====
int sub_4E7660()
{
  MEMORY[0xA8EB2C] = 0; /*0x4e7667*/
  MEMORY[0xA8EB30] = 0; /*0x4e766c*/
  MEMORY[0xA8EB34] = 1; /*0x4e7671*/
  MEMORY[0xA8EB35] = 0; /*0x4e7678*/
  MEMORY[0xA8EB28] = (int)&vt_DynamicVectorClass_VoxelAnimTypeClass; /*0x4e767d*/
  MEMORY[0xA8EB3C] = 10; /*0x4e7687*/
  MEMORY[0xA8EB38] = 0; /*0x4e7691*/
  return atexit(sub_4E76A0); /*0x4e769c*/
}


// ==== 0x004E76A0  sub_4E76A0  this=-  sig=ida-proto ====
void __cdecl sub_4E76A0()
{
  MEMORY[0xA8EB28] = (int)&vt_VectorClass_VoxelAnimTypeClass; /*0x4e76a8*/
  if ( MEMORY[0xA8EB2C] && MEMORY[0xA8EB35] ) /*0x4e76bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EB2C]); /*0x4e76bf*/
    MEMORY[0xA8EB2C] = 0; /*0x4e76c7*/
  }
  MEMORY[0xA8EB35] = 0; /*0x4e76cd*/
  MEMORY[0xA8EB30] = 0; /*0x4e76d3*/
}


// ==== 0x004E76E0  sub_4E76E0  this=-  sig=ida-proto ====
int sub_4E76E0()
{
  MEMORY[0xA8ED2C] = 0; /*0x4e76e7*/
  MEMORY[0xA8ED30] = 0; /*0x4e76ec*/
  MEMORY[0xA8ED34] = 1; /*0x4e76f1*/
  MEMORY[0xA8ED35] = 0; /*0x4e76f8*/
  MEMORY[0xA8ED28] = (int)&vt_DynamicVectorClass_IsometricTileTypeClass; /*0x4e76fd*/
  MEMORY[0xA8ED3C] = 10; /*0x4e7707*/
  MEMORY[0xA8ED38] = 0; /*0x4e7711*/
  return atexit(sub_4E7720); /*0x4e771c*/
}


// ==== 0x004E7720  sub_4E7720  this=-  sig=ida-proto ====
void __cdecl sub_4E7720()
{
  MEMORY[0xA8ED28] = (int)&vt_VectorClass_IsometricTileTypeClass; /*0x4e7728*/
  if ( MEMORY[0xA8ED2C] && MEMORY[0xA8ED35] ) /*0x4e773c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ED2C]); /*0x4e773f*/
    MEMORY[0xA8ED2C] = 0; /*0x4e7747*/
  }
  MEMORY[0xA8ED35] = 0; /*0x4e774d*/
  MEMORY[0xA8ED30] = 0; /*0x4e7753*/
}


// ==== 0x004E7760  sub_4E7760  this=-  sig=ida-proto ====
int sub_4E7760()
{
  MEMORY[0xA83D9C] = 0; /*0x4e7767*/
  MEMORY[0xA83DA0] = 0; /*0x4e776c*/
  MEMORY[0xA83DA4] = 1; /*0x4e7771*/
  MEMORY[0xA83DA5] = 0; /*0x4e7778*/
  MEMORY[0xA83D98] = (int)&vt_DynamicVectorClass_ParticleTypeClass; /*0x4e777d*/
  MEMORY[0xA83DAC] = 10; /*0x4e7787*/
  MEMORY[0xA83DA8] = 0; /*0x4e7791*/
  return atexit(sub_4E77A0); /*0x4e779c*/
}


// ==== 0x004E77A0  sub_4E77A0  this=-  sig=ida-proto ====
void __cdecl sub_4E77A0()
{
  MEMORY[0xA83D98] = (int)&vt_VectorClass_ParticleTypeClass; /*0x4e77a8*/
  if ( MEMORY[0xA83D9C] && MEMORY[0xA83DA5] ) /*0x4e77bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83D9C]); /*0x4e77bf*/
    MEMORY[0xA83D9C] = 0; /*0x4e77c7*/
  }
  MEMORY[0xA83DA5] = 0; /*0x4e77cd*/
  MEMORY[0xA83DA0] = 0; /*0x4e77d3*/
}


// ==== 0x004E77E0  sub_4E77E0  this=-  sig=ida-proto ====
int sub_4E77E0()
{
  MEMORY[0xA83D6C] = 0; /*0x4e77e7*/
  MEMORY[0xA83D70] = 0; /*0x4e77ec*/
  MEMORY[0xA83D74] = 1; /*0x4e77f1*/
  MEMORY[0xA83D75] = 0; /*0x4e77f8*/
  MEMORY[0xA83D68] = (int)&vt_DynamicVectorClass_ParticleSystemTypeClass; /*0x4e77fd*/
  MEMORY[0xA83D7C] = 10; /*0x4e7807*/
  MEMORY[0xA83D78] = 0; /*0x4e7811*/
  return atexit(sub_4E7820); /*0x4e781c*/
}


// ==== 0x004E7820  sub_4E7820  this=-  sig=ida-proto ====
void __cdecl sub_4E7820()
{
  MEMORY[0xA83D68] = (int)&vt_VectorClass_ParticleSystemTypeClass; /*0x4e7828*/
  if ( MEMORY[0xA83D6C] && MEMORY[0xA83D75] ) /*0x4e783c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83D6C]); /*0x4e783f*/
    MEMORY[0xA83D6C] = 0; /*0x4e7847*/
  }
  MEMORY[0xA83D75] = 0; /*0x4e784d*/
  MEMORY[0xA83D70] = 0; /*0x4e7853*/
}


// ==== 0x004E7860  sub_4E7860  this=-  sig=ida-proto ====
int sub_4E7860()
{
  MEMORY[0xA8E334] = 0; /*0x4e7867*/
  MEMORY[0xA8E338] = 0; /*0x4e786c*/
  MEMORY[0xA8E33C] = 1; /*0x4e7871*/
  MEMORY[0xA8E33D] = 0; /*0x4e7878*/
  MEMORY[0xA8E330] = (int)&vt_DynamicVectorClass_SuperWeaponTypeClass; /*0x4e787d*/
  MEMORY[0xA8E344] = 10; /*0x4e7887*/
  MEMORY[0xA8E340] = 0; /*0x4e7891*/
  return atexit(sub_4E78A0); /*0x4e789c*/
}


// ==== 0x004E78A0  sub_4E78A0  this=-  sig=ida-proto ====
void __cdecl sub_4E78A0()
{
  MEMORY[0xA8E330] = (int)&vt_VectorClass_SuperWeaponTypeClass; /*0x4e78a8*/
  if ( MEMORY[0xA8E334] && MEMORY[0xA8E33D] ) /*0x4e78bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E334]); /*0x4e78bf*/
    MEMORY[0xA8E334] = 0; /*0x4e78c7*/
  }
  MEMORY[0xA8E33D] = 0; /*0x4e78cd*/
  MEMORY[0xA8E338] = 0; /*0x4e78d3*/
}


// ==== 0x004E78E0  sub_4E78E0  this=-  sig=ida-proto ====
int sub_4E78E0()
{
  dword_A83CBC = 0; /*0x4e78e7*/
  dword_A83CC0 = 0; /*0x4e78ec*/
  byte_A83CC4 = 1; /*0x4e78f1*/
  byte_A83CC5 = 0; /*0x4e78f8*/
  dword_A83CB8 = (int)&vt_DynamicVectorClass_SuperClass; /*0x4e78fd*/
  dword_A83CCC = 10; /*0x4e7907*/
  dword_A83CC8 = 0; /*0x4e7911*/
  return atexit(sub_4E7920); /*0x4e791c*/
}


// ==== 0x004E7920  sub_4E7920  this=-  sig=ida-proto ====
void __cdecl sub_4E7920()
{
  dword_A83CB8 = (int)&vt_VectorClass_SuperClass; /*0x4e7928*/
  if ( dword_A83CBC && byte_A83CC5 ) /*0x4e793c*/
  {
    __3_YAXPAX_Z(dword_A83CBC); /*0x4e793f*/
    dword_A83CBC = 0; /*0x4e7947*/
  }
  byte_A83CC5 = 0; /*0x4e794d*/
  dword_A83CC0 = 0; /*0x4e7953*/
}


// ==== 0x004E7960  sub_4E7960  this=-  sig=ida-proto ====
int sub_4E7960()
{
  MEMORY[0xA83D54] = 0; /*0x4e7967*/
  MEMORY[0xA83D58] = 0; /*0x4e796c*/
  MEMORY[0xA83D5C] = 1; /*0x4e7971*/
  MEMORY[0xA83D5D] = 0; /*0x4e7978*/
  MEMORY[0xA83D50] = (int)&vt_DynamicVectorClass_SuperClass; /*0x4e797d*/
  MEMORY[0xA83D64] = 10; /*0x4e7987*/
  MEMORY[0xA83D60] = 0; /*0x4e7991*/
  return atexit(sub_4E79A0); /*0x4e799c*/
}


// ==== 0x004E79A0  sub_4E79A0  this=-  sig=ida-proto ====
void __cdecl sub_4E79A0()
{
  MEMORY[0xA83D50] = (int)&vt_VectorClass_SuperClass; /*0x4e79a8*/
  if ( MEMORY[0xA83D54] && MEMORY[0xA83D5D] ) /*0x4e79bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83D54]); /*0x4e79bf*/
    MEMORY[0xA83D54] = 0; /*0x4e79c7*/
  }
  MEMORY[0xA83D5D] = 0; /*0x4e79cd*/
  MEMORY[0xA83D58] = 0; /*0x4e79d3*/
}


// ==== 0x004E79E0  sub_4E79E0  this=-  sig=ida-proto ====
int sub_4E79E0()
{
  MEMORY[0xA8EC7C] = 0; /*0x4e79e7*/
  MEMORY[0xA8EC80] = 0; /*0x4e79ec*/
  MEMORY[0xA8EC84] = 1; /*0x4e79f1*/
  MEMORY[0xA8EC85] = 0; /*0x4e79f8*/
  MEMORY[0xA8EC78] = (TechnoClass *)&vt_DynamicVectorClass_TechnoClass; /*0x4e79fd*/
  MEMORY[0xA8EC8C] = 10; /*0x4e7a07*/
  MEMORY[0xA8EC88] = 0; /*0x4e7a11*/
  return atexit(sub_4E7A20); /*0x4e7a1c*/
}


// ==== 0x004E7A20  sub_4E7A20  this=-  sig=ida-proto ====
void __cdecl sub_4E7A20()
{
  MEMORY[0xA8EC78] = (TechnoClass *)&vt_VectorClass_TechnoClass; /*0x4e7a28*/
  if ( MEMORY[0xA8EC7C] && MEMORY[0xA8EC85] ) /*0x4e7a3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EC7C]); /*0x4e7a3f*/
    MEMORY[0xA8EC7C] = 0; /*0x4e7a47*/
  }
  MEMORY[0xA8EC85] = 0; /*0x4e7a4d*/
  MEMORY[0xA8EC80] = 0; /*0x4e7a53*/
}


// ==== 0x004E7A60  sub_4E7A60  this=-  sig=ida-proto ====
int sub_4E7A60()
{
  MEMORY[0xA8EB04] = 0; /*0x4e7a67*/
  MEMORY[0xA8EB08] = 0; /*0x4e7a6c*/
  MEMORY[0xA8EB0C] = 1; /*0x4e7a71*/
  MEMORY[0xA8EB0D] = 0; /*0x4e7a78*/
  MEMORY[0xA8EB00] = (int)&vt_DynamicVectorClass_TechnoTypeClass; /*0x4e7a7d*/
  MEMORY[0xA8EB14] = 10; /*0x4e7a87*/
  MEMORY[0xA8EB10] = 0; /*0x4e7a91*/
  return atexit(sub_4E7AA0); /*0x4e7a9c*/
}


// ==== 0x004E7AA0  sub_4E7AA0  this=-  sig=ida-proto ====
void __cdecl sub_4E7AA0()
{
  MEMORY[0xA8EB00] = (int)&vt_VectorClass_TechnoTypeClass; /*0x4e7aa8*/
  if ( MEMORY[0xA8EB04] && MEMORY[0xA8EB0D] ) /*0x4e7abc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EB04]); /*0x4e7abf*/
    MEMORY[0xA8EB04] = 0; /*0x4e7ac7*/
  }
  MEMORY[0xA8EB0D] = 0; /*0x4e7acd*/
  MEMORY[0xA8EB08] = 0; /*0x4e7ad3*/
}


// ==== 0x004E7AE0  sub_4E7AE0  this=-  sig=ida-proto ====
int sub_4E7AE0()
{
  MEMORY[0xA8E364] = 0; /*0x4e7ae7*/
  MEMORY[0xA8E368] = 0; /*0x4e7aec*/
  MEMORY[0xA8E36C] = 1; /*0x4e7af1*/
  MEMORY[0xA8E36D] = 0; /*0x4e7af8*/
  MEMORY[0xA8E360] = (int)&vt_DynamicVectorClass_ObjectClass; /*0x4e7afd*/
  MEMORY[0xA8E374] = 10; /*0x4e7b07*/
  MEMORY[0xA8E370] = 0; /*0x4e7b11*/
  return atexit(sub_4E7B20); /*0x4e7b1c*/
}


// ==== 0x004E7B20  sub_4E7B20  this=-  sig=ida-proto ====
void __cdecl sub_4E7B20()
{
  MEMORY[0xA8E360] = (int)&vt_VectorClass_ObjectClass; /*0x4e7b28*/
  if ( MEMORY[0xA8E364] && MEMORY[0xA8E36D] ) /*0x4e7b3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E364]); /*0x4e7b3f*/
    MEMORY[0xA8E364] = 0; /*0x4e7b47*/
  }
  MEMORY[0xA8E36D] = 0; /*0x4e7b4d*/
  MEMORY[0xA8E368] = 0; /*0x4e7b53*/
}


// ==== 0x004E7B60  sub_4E7B60  this=-  sig=ida-proto ====
int sub_4E7B60()
{
  MEMORY[0xA8E96C] = 0; /*0x4e7b67*/
  MEMORY[0xA8E970] = 0; /*0x4e7b6c*/
  MEMORY[0xA8E974] = 1; /*0x4e7b71*/
  MEMORY[0xA8E975] = 0; /*0x4e7b78*/
  MEMORY[0xA8E968] = (int)&vt_DynamicVectorClass_AbstractTypeClass; /*0x4e7b7d*/
  MEMORY[0xA8E97C] = 10; /*0x4e7b87*/
  MEMORY[0xA8E978] = 0; /*0x4e7b91*/
  return atexit(sub_4E7BA0); /*0x4e7b9c*/
}


// ==== 0x004E7BA0  sub_4E7BA0  this=-  sig=ida-proto ====
void __cdecl sub_4E7BA0()
{
  MEMORY[0xA8E968] = (int)&vt_VectorClass_AbstractTypeClass; /*0x4e7ba8*/
  if ( MEMORY[0xA8E96C] && MEMORY[0xA8E975] ) /*0x4e7bbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E96C]); /*0x4e7bbf*/
    MEMORY[0xA8E96C] = 0; /*0x4e7bc7*/
  }
  MEMORY[0xA8E975] = 0; /*0x4e7bcd*/
  MEMORY[0xA8E970] = 0; /*0x4e7bd3*/
}


// ==== 0x004E7BE0  sub_4E7BE0  this=-  sig=ida-proto ====
int sub_4E7BE0()
{
  unk_8B41E4 = 0; /*0x4e7be7*/
  unk_8B41E8 = 0; /*0x4e7bec*/
  unk_8B41EC = 1; /*0x4e7bf1*/
  unk_8B41ED = 0; /*0x4e7bf8*/
  dword_8B41E0 = (int)&vt_DynamicVectorClass_BuildingClass; /*0x4e7bfd*/
  unk_8B41F4 = 10; /*0x4e7c07*/
  unk_8B41F0 = 0; /*0x4e7c11*/
  return atexit(sub_4E7C20); /*0x4e7c1c*/
}


// ==== 0x004E7C20  sub_4E7C20  this=-  sig=ida-proto ====
void __cdecl sub_4E7C20()
{
  dword_8B41E0 = (int)&vt_VectorClass_BuildingClass; /*0x4e7c28*/
  if ( unk_8B41E4 && unk_8B41ED ) /*0x4e7c3c*/
  {
    __3_YAXPAX_Z(unk_8B41E4); /*0x4e7c3f*/
    unk_8B41E4 = 0; /*0x4e7c47*/
  }
  unk_8B41ED = 0; /*0x4e7c4d*/
  unk_8B41E8 = 0; /*0x4e7c53*/
}


// ==== 0x004E7C60  sub_4E7C60  this=-  sig=ida-proto ====
int sub_4E7C60()
{
  MEMORY[0xA83E04] = 0; /*0x4e7c67*/
  MEMORY[0xA83E08] = 0; /*0x4e7c6c*/
  MEMORY[0xA83E0C] = 1; /*0x4e7c71*/
  MEMORY[0xA83E0D] = 0; /*0x4e7c78*/
  MEMORY[0xA83E00] = (int)&vt_DynamicVectorClass_AnimClass; /*0x4e7c7d*/
  MEMORY[0xA83E14] = 10; /*0x4e7c87*/
  MEMORY[0xA83E10] = 0; /*0x4e7c91*/
  return atexit(sub_4E7CA0); /*0x4e7c9c*/
}


// ==== 0x004E7CA0  sub_4E7CA0  this=-  sig=ida-proto ====
void __cdecl sub_4E7CA0()
{
  MEMORY[0xA83E00] = (int)&vt_VectorClass_AnimClass; /*0x4e7ca8*/
  if ( MEMORY[0xA83E04] && MEMORY[0xA83E0D] ) /*0x4e7cbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83E04]); /*0x4e7cbf*/
    MEMORY[0xA83E04] = 0; /*0x4e7cc7*/
  }
  MEMORY[0xA83E0D] = 0; /*0x4e7ccd*/
  MEMORY[0xA83E08] = 0; /*0x4e7cd3*/
}


// ==== 0x004E7CE0  sub_4E7CE0  this=-  sig=ida-proto ====
void sub_4E7CE0()
{
  MEMORY[0xA8E8C8].field_0 = (struct IUnknownVtbl *)&vt_TiberianSunClassFactory; /*0x4e7ce0*/
}


// ==== 0x004E7CF0  COMStub_4E7CF0  this=-  sig=ida-proto ====
_BYTE *sub_4E7CF0()
{
  _BYTE *v0; // esi
  int v1; // edi
  _BYTE *result; // eax

  v0 = &MEMORY[0xA8E3A8]; /*0x4e7cf2*/
  v1 = 32; /*0x4e7cf7*/
  do /*0x4e7d07*/
  {
    result = MissionClass::FindName(v0); /*0x4e7cfe*/
    v0 += 32; /*0x4e7d03*/
    --v1; /*0x4e7d06*/
  }
  while ( v1 ); /*0x4e7d07*/
  return result; /*0x4e7d09*/
}


// ==== 0x004E7D10  sub_4E7D10  this=-  sig=ida-proto ====
int sub_4E7D10()
{
  sub_6616B0(MEMORY[0xA8E7B0]); /*0x4e7d15*/
  return atexit(unknown_libname_13); /*0x4e7d25*/
}


// ==== 0x004E7D30  unknown_libname_13  this=RandomStraw  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_13()
{
  MEMORY[0xA8E7B0][0] = &vt_RandomStraw; /*0x66170d*/
  MEMORY[0xA8E7B0][3] = 0; /*0x661713*/
  MEMORY[0xA8E7B0][4] = 0; /*0x661716*/
  memset(&MEMORY[0xA8E7B0][5], 0, 0x100u); /*0x661719*/
  Straw::Dtor(MEMORY[0xA8E7B0]); /*0x66171d*/
}


// ==== 0x004E7D40  sub_4E7D40  this=-  sig=ida-proto ====
int sub_4E7D40()
{
  MEMORY[0xA8ECBC] = 0; /*0x4e7d47*/
  MEMORY[0xA8ECC0] = 0; /*0x4e7d4c*/
  MEMORY[0xA8ECC4] = 1; /*0x4e7d51*/
  MEMORY[0xA8ECC5] = 0; /*0x4e7d58*/
  MEMORY[0xA8ECB8] = (ObjectClass *)&vt_DynamicVectorClass_ObjectClass; /*0x4e7d5d*/
  MEMORY[0xA8ECCC] = 10; /*0x4e7d67*/
  MEMORY[0xA8ECC8] = 0; /*0x4e7d71*/
  return atexit(sub_4E7D80); /*0x4e7d7c*/
}


// ==== 0x004E7D80  sub_4E7D80  this=-  sig=ida-proto ====
void __cdecl sub_4E7D80()
{
  MEMORY[0xA8ECB8] = (ObjectClass *)&vt_VectorClass_ObjectClass; /*0x4e7d88*/
  if ( MEMORY[0xA8ECBC] && MEMORY[0xA8ECC5] ) /*0x4e7d9c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ECBC]); /*0x4e7d9f*/
    MEMORY[0xA8ECBC] = 0; /*0x4e7da7*/
  }
  MEMORY[0xA8ECC5] = 0; /*0x4e7dad*/
  MEMORY[0xA8ECC0] = 0; /*0x4e7db3*/
}


// ==== 0x004E7DC0  sub_4E7DC0  this=-  sig=ida-proto ====
int sub_4E7DC0()
{
  sub_74F730(&MEMORY[0xA8ECE0]); /*0x4e7dc5*/
  return atexit(sub_4E7DE0); /*0x4e7dd5*/
}


// ==== 0x004E7DE0  sub_4E7DE0  this=-  sig=ida-proto ====
void __cdecl sub_4E7DE0()
{
  MEMORY[0xA8ECE0] = (int)&vt_VersionClass; /*0x4e7de0*/
}


// ==== 0x004E7DF0  sub_4E7DF0  this=-  sig=ida-proto ====
int sub_4E7DF0()
{
  MEMORY[0xA8ECD8] = 0; /*0x4e7df7*/
  MEMORY[0xA8ECDC] = 0; /*0x4e7dfc*/
  return atexit(unknown_libname_14); /*0x4e7e07*/
}


// ==== 0x004E7E10  unknown_libname_14  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_14()
{
  ObjectTypeClass::ReleaseWaveAndString((int *)&MEMORY[0xA8D63C].__pad_14B0[492]); /*0x4e7e15*/
}


// ==== 0x004E7E20  unknown_libname_15  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
char *unknown_libname_15()
{
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[116] = 3; /*0x5fa35a*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[120] = 1; /*0x5fa360*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[128] = 0; /*0x5fa363*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[132] = 3; /*0x5fa366*/
  MEMORY[0xA8D63C].__pad_14B0[136] = 1; /*0x5fa36d*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[140] = 2; /*0x5fa370*/
  MEMORY[0xA8D63C].__pad_14B0[144] = 1; /*0x5fa377*/
  MEMORY[0xA8D63C].__pad_14B0[145] = 1; /*0x5fa37a*/
  MEMORY[0xA8D63C].__pad_14B0[146] = 1; /*0x5fa37d*/
  MEMORY[0xA8D63C].__pad_14B0[148] = 1; /*0x5fa380*/
  MEMORY[0xA8D63C].__pad_14B0[185] = 1; /*0x5fa383*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[268] = 18; /*0x5fa38b*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[272] = 18; /*0x5fa391*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[276] = 17; /*0x5fa39f*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[280] = 17; /*0x5fa3a5*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[152] = -1; /*0x5fa3b0*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[284] = 16; /*0x5fa3b3*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[288] = 16; /*0x5fa3b9*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[156] = -1; /*0x5fa3c4*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[192] = -1; /*0x5fa3c7*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[196] = -1; /*0x5fa3ca*/
  MEMORY[0xA8D63C].__pad_14B0[147] = 0; /*0x5fa3cd*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[160] = 800; /*0x5fa3d0*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[164] = 600; /*0x5fa3d7*/
  MEMORY[0xA8D63C].__pad_14B0[168] = 0; /*0x5fa3de*/
  MEMORY[0xA8D63C].__pad_14B0[169] = 0; /*0x5fa3e1*/
  MEMORY[0xA8D63C].__pad_14B0[170] = 0; /*0x5fa3e4*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[172] = 1060320051; /*0x5fa3e7*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[176] = 1060320051; /*0x5fa3ee*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[180] = 1053609165; /*0x5fa3f5*/
  MEMORY[0xA8D63C].__pad_14B0[184] = 0; /*0x5fa3fc*/
  MEMORY[0xA8D63C].__pad_14B0[186] = 0; /*0x5fa3ff*/
  *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[188] = 9; /*0x5fa402*/
  *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[190] = -1; /*0x5fa408*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[200] = 0; /*0x5fa40e*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[292] = 81; /*0x5fa411*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[296] = 81; /*0x5fa417*/
  MEMORY[0xA8D63C].__pad_14B0[204] = 0; /*0x5fa41d*/
  return &MEMORY[0xA8D63C].__pad_14B0[116]; /*0x5fa421*/
}


// ==== 0x004E7E30  sub_4E7E30  this=-  sig=ida-proto ====
int sub_4E7E30()
{
  sub_720960(&g_BuildingTypeClass_Count); /*0x4e7e35*/
  return atexit(sub_4E7E50); /*0x4e7e45*/
}


// ==== 0x004E7E50  sub_4E7E50  this=-  sig=ida-proto ====
void __cdecl sub_4E7E50()
{
  dword_A83D24 = (int)&vt_VectorClass_ThemeControl; /*0x4e7e58*/
  if ( dword_A83D28 && byte_A83D31 ) /*0x4e7e6c*/
  {
    __3_YAXPAX_Z(dword_A83D28); /*0x4e7e6f*/
    dword_A83D28 = 0; /*0x4e7e77*/
  }
  byte_A83D31 = 0; /*0x4e7e7d*/
  dword_A83D2C = 0; /*0x4e7e83*/
}


// ==== 0x004E7E90  unknown_libname_16  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_16()
{
  return TabClass::initStripClass(MEMORY[0xA83E18]);
}


// ==== 0x004E7EA0  sub_4E7EA0  this=-  sig=ida-proto ====
char *sub_4E7EA0()
{
  char *result; // eax
  int v1; // ecx

  result = g_NetworkPacketIndex; /*0x4e7ea0*/
  v1 = 128; /*0x4e7ea5*/
  do /*0x4e7eb2*/
  {
    *result = 0; /*0x4e7eac*/
    result += 111; /*0x4e7eae*/
    --v1; /*0x4e7eb1*/
  }
  while ( v1 ); /*0x4e7eb2*/
  Networking_LastEventIndex = 0; /*0x4e7eb4*/
  g_NetworkEventIndex = 0; /*0x4e7eba*/
  Networking_NextPacketIndex = 0; /*0x4e7ec0*/
  return result; /*0x4e7ec6*/
}


// ==== 0x004E7ED0  sub_4E7ED0  this=-  sig=ida-proto ====
char *sub_4E7ED0()
{
  char *result; // eax
  int v1; // ecx

  result = unk_8B4204; /*0x4e7ed0*/
  v1 = 0x4000; /*0x4e7ed5*/
  do /*0x4e7ee2*/
  {
    *result = 0; /*0x4e7edc*/
    result += 111; /*0x4e7ede*/
    --v1; /*0x4e7ee1*/
  }
  while ( v1 ); /*0x4e7ee2*/
  dword_8B41F8 = 0; /*0x4e7ee4*/
  word_8B41FC = 0; /*0x4e7eea*/
  unk_8B4200 = 0; /*0x4e7ef0*/
  return result; /*0x4e7ef6*/
}


// ==== 0x004E7F00  sub_4E7F00  this=-  sig=ida-proto ====
_BYTE *sub_4E7F00()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0xA83EDC]; /*0x4e7f00*/
  v1 = 256; /*0x4e7f05*/
  do /*0x4e7f12*/
  {
    *result = 0; /*0x4e7f0c*/
    result += 111; /*0x4e7f0e*/
    --v1; /*0x4e7f11*/
  }
  while ( v1 ); /*0x4e7f12*/
  MEMORY[0xA83ED0] = 0; /*0x4e7f14*/
  MEMORY[0xA83ED4] = 0; /*0x4e7f1a*/
  MEMORY[0xA83ED8] = 0; /*0x4e7f20*/
  return result; /*0x4e7f26*/
}


// ==== 0x004E7F30  sub_4E7F30  this=-  sig=ida-proto ====
int sub_4E7F30()
{
  unk_8B41AC = 0; /*0x4e7f37*/
  unk_8B41B0 = 0; /*0x4e7f3c*/
  unk_8B41B4 = 1; /*0x4e7f41*/
  unk_8B41B5 = 0; /*0x4e7f48*/
  unk_8B41A8 = (int)&vt_DynamicVectorClass_TagClass; /*0x4e7f4d*/
  unk_8B41BC = 10; /*0x4e7f57*/
  dword_8B41B8 = 0; /*0x4e7f61*/
  return atexit(sub_4E7F70); /*0x4e7f6c*/
}


// ==== 0x004E7F70  sub_4E7F70  this=-  sig=ida-proto ====
void __cdecl sub_4E7F70()
{
  unk_8B41A8 = (int)&vt_VectorClass_TagClass; /*0x4e7f78*/
  if ( unk_8B41AC && unk_8B41B5 ) /*0x4e7f8c*/
  {
    __3_YAXPAX_Z(unk_8B41AC); /*0x4e7f8f*/
    unk_8B41AC = 0; /*0x4e7f97*/
  }
  unk_8B41B5 = 0; /*0x4e7f9d*/
  unk_8B41B0 = 0; /*0x4e7fa3*/
}


// ==== 0x004E7FB0  sub_4E7FB0  this=-  sig=ida-proto ====
int sub_4E7FB0()
{
  MEMORY[0x8B40CC] = 0; /*0x4e7fb7*/
  MEMORY[0x8B40D0] = 0; /*0x4e7fbc*/
  MEMORY[0x8B40D4] = 1; /*0x4e7fc1*/
  MEMORY[0x8B40D5] = 0; /*0x4e7fc8*/
  MEMORY[0x8B40C8] = (int)&vt_DynamicVectorClass_TagClass; /*0x4e7fcd*/
  MEMORY[0x8B40DC] = 10; /*0x4e7fd7*/
  MEMORY[0x8B40D8] = 0; /*0x4e7fe1*/
  return atexit(sub_4E7FF0); /*0x4e7fec*/
}


// ==== 0x004E7FF0  sub_4E7FF0  this=-  sig=ida-proto ====
void __cdecl sub_4E7FF0()
{
  MEMORY[0x8B40C8] = (int)&vt_VectorClass_TagClass; /*0x4e7ff8*/
  if ( MEMORY[0x8B40CC] && MEMORY[0x8B40D5] ) /*0x4e800c*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B40CC]); /*0x4e800f*/
    MEMORY[0x8B40CC] = 0; /*0x4e8017*/
  }
  MEMORY[0x8B40D5] = 0; /*0x4e801d*/
  MEMORY[0x8B40D0] = 0; /*0x4e8023*/
}


// ==== 0x004E8030  sub_4E8030  this=-  sig=ida-proto ====
int sub_4E8030()
{
  SessionClass::SessionClass((char *)MEMORY[0xA8B238]); /*0x4e8035*/
  return atexit(unknown_libname_17); /*0x4e8045*/
}


// ==== 0x004E8050  unknown_libname_17  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_17()
{
  ObjectManager::CleanupArrays((int)&MEMORY[0xA8B238]); /*0x4e8055*/
}


// ==== 0x004E8060  sub_4E8060  this=-  sig=ida-proto ====
int sub_4E8060()
{
  sub_5F15C0(&MEMORY[0xA8EA70], 16, 16, 236, 4660); /*0x4e8073*/
  return atexit(unknown_libname_18); /*0x4e8083*/
}


// ==== 0x004E8090  unknown_libname_18  this=ConnManClass  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __thiscall unknown_libname_18(ConnManClass *this)
{
  void **v1; // edi

  v1 = *(void ***)&MEMORY[0xA8D63C].__pad_1258[528]; /*0x5f1654*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[476] = &vt_NullModemClass; /*0x5f1657*/
  if ( v1 ) /*0x5f165f*/
  {
    FileFind::Close(v1); /*0x5f1663*/
    __3_YAXPAX_Z(v1); /*0x5f1669*/
  }
  ObjectClass::FreeResources((int)&MEMORY[0xA8D63C].__pad_1258[476]); /*0x5f1673*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[540] != -1 ) /*0x5f1680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f168a*/
      goto LABEL_10; /*0x5f168a*/
    SerialPort::Close((HANDLE *)g_ClipboardBuffer); /*0x5f168c*/
    if ( g_ClipboardBuffer ) /*0x5f1699*/
      (**(void (__thiscall ***)(WinModemClass *, int))g_ClipboardBuffer->__pad_0)(g_ClipboardBuffer, 1); /*0x5f169f*/
    g_ClipboardBuffer = 0; /*0x5f16a1*/
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[540] = -1; /*0x5f16ad*/
    ObjectClass::FreeResources((int)&MEMORY[0xA8D63C].__pad_1258[476]); /*0x5f16b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f16bd*/
  {
    (**(void (__thiscall ***)(WinModemClass *, int))g_ClipboardBuffer->__pad_0)(g_ClipboardBuffer, 1); /*0x5f16c3*/
    g_ClipboardBuffer = 0; /*0x5f16c5*/
  }
LABEL_10:
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[476] = &vt_ConnManClass; /*0x5f16cf*/
}


// ==== 0x004E80A0  sub_4E80A0  this=-  sig=ida-proto ====
int sub_4E80A0()
{
  sub_5408F0((char *)MEMORY[0xA8E9C0], 455, 558, 160, 32, 34835, 43524); /*0x4e80c0*/
  return atexit(unknown_libname_19); /*0x4e80d0*/
}


// ==== 0x004E80E0  unknown_libname_19  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_19()
{
  IPXManagerClass::processPacket(&MEMORY[0xA8D63C].__pad_1258[300]); /*0x4e80e5*/
}


// ==== 0x004E80F0  sub_4E80F0  this=-  sig=ida-proto ====
int sub_4E80F0()
{
  sub_4E6070((int)MEMORY[0xA8E8E8]); /*0x4e80f5*/
  return atexit(unknown_libname_20); /*0x4e8105*/
}


// ==== 0x004E8110  unknown_libname_20  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_20()
{
  nullsub_54(MEMORY[0xA8E8E8]); /*0x4e8115*/
}


// ==== 0x004E8120  sub_4E8120  this=-  sig=ida-proto ====
char sub_4E8120()
{
  byte_A83CD9 = 0; /*0x4e8122*/
  word_A83CDA = 0; /*0x4e8127*/
  return 0; /*0x4e8131*/
}


// ==== 0x004E8140  sub_4E8140  this=-  sig=ida-proto ====
char sub_4E8140()
{
  byte_A83CD4 = 127; /*0x4e8142*/
  byte_A83CD5 = 127; /*0x4e8147*/
  byte_A83CD6 = 127; /*0x4e814c*/
  return 127; /*0x4e8151*/
}


// ==== 0x004E8160  sub_4E8160  this=-  sig=ida-proto ====
char sub_4E8160()
{
  byte_A80220 = -1; /*0x4e8162*/
  word_A80221 = -1; /*0x4e8167*/
  return -1; /*0x4e8171*/
}


// ==== 0x004E8180  sub_4E8180  this=-  sig=ida-proto ====
char sub_4E8180()
{
  MEMORY[0xA8EAE4] = -1; /*0x4e8182*/
  MEMORY[0xA8EAE5] = 0; /*0x4e8189*/
  return 0; /*0x4e8193*/
}


// ==== 0x004E81A0  sub_4E81A0  this=-  sig=ida-proto ====
char sub_4E81A0()
{
  MEMORY[0xA83EC9] = -1; /*0x4e81a2*/
  MEMORY[0xA83EC8] = 0; /*0x4e81a9*/
  MEMORY[0xA83ECA] = 0; /*0x4e81ae*/
  return 0; /*0x4e81b3*/
}


// ==== 0x004E81C0  sub_4E81C0  this=-  sig=ida-proto ====
char sub_4E81C0()
{
  MEMORY[0xA8E8C6] = -1; /*0x4e81c2*/
  MEMORY[0xA8E8C4] = 0; /*0x4e81c9*/
  MEMORY[0xA8E8C5] = 0; /*0x4e81ce*/
  return 0; /*0x4e81d3*/
}


// ==== 0x004E81E0  sub_4E81E0  this=-  sig=ida-proto ====
char sub_4E81E0()
{
  MEMORY[0xA83DC0] = 0; /*0x4e81e2*/
  MEMORY[0xA83DC1] = -1; /*0x4e81e9*/
  MEMORY[0xA83DC2] = -1; /*0x4e81ee*/
  return -1; /*0x4e81f3*/
}


// ==== 0x004E8200  sub_4E8200  this=-  sig=ida-proto ====
char sub_4E8200()
{
  MEMORY[0x8B40E1] = 0; /*0x4e8202*/
  MEMORY[0x8B40E0] = -1; /*0x4e8209*/
  MEMORY[0x8B40E2] = -1; /*0x4e820e*/
  return -1; /*0x4e8213*/
}


// ==== 0x004E8220  sub_4E8220  this=-  sig=ida-proto ====
char sub_4E8220()
{
  MEMORY[0xA8E982] = 0; /*0x4e8222*/
  MEMORY[0xA8E980] = -1; /*0x4e8229*/
  MEMORY[0xA8E981] = -1; /*0x4e822e*/
  return -1; /*0x4e8233*/
}


// ==== 0x004E8240  TiberianSunClassFactory::vt_placeholder_00  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::vt_placeholder_00(TiberianSunClassFactory *this)
{
  return 1; /*0x4e8245*/
}


// ==== 0x004E8250  TiberianSunClassFactory::vt_placeholder_01  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::vt_placeholder_01(TiberianSunClassFactory *this)
{
  return 1; /*0x4e8255*/
}


// ==== 0x004E8260  TiberianSunClassFactory::vt_placeholder_02  this=TiberianSunClassFactory  sig=csp ====
int __thiscall HouseClass::vt_placeholder_02(TiberianSunClassFactory *this)
{
  return 0; /*0x4e8262*/
}


// ==== 0x004E8270  HouseClass::initAngerStruct  this=VersionClass  sig=csp ====
std::locale::facet *__thiscall HouseClass::initAngerStruct(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_VersionClass; /*0x4e8279*/
  if ( (a2 & 1) != 0 ) /*0x4e827f*/
    __3_YAXPAX_Z(this); /*0x4e8282*/
  return this; /*0x4e828c*/
}


// ==== 0x004E8290  ?$DynamicVectorClass@PAVTagClass@@::COMStub_3  this=DynamicVector  sig=csp ====
void __thiscall HouseClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8296*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8299*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e82a0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e82a6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e82ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e82b1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e82b4*/
}


// ==== 0x004E82C0  ?$DynamicVectorClass@PAVTagClass@@::COMStub_5  this=DynamicVector  sig=csp ====
unsigned int __thiscall HouseClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e82c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e82d5*/
  else
    return 0; /*0x4e82c7*/
}


// ==== 0x004E82E0  _VectorClass_PAVTagClass::COMStub_6  this=VectorClass  sig=csp ====
int __thiscall HouseClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e82ea*/
}


// ==== 0x004E82F0  _DynamicVectorClass_PAVBuildingClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall ParticleSystemClass_32_::sub_4E82F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e82f6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e82f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8300*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8306*/
    *(_DWORD *)(this + 4) = 0; /*0x4e830e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8311*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8314*/
}


// ==== 0x004E8320  _DynamicVectorClass_PAVBuildingClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall ParticleSystemClass_32_::sub_4E8320(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8320*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8335*/
  else
    return 0; /*0x4e8327*/
}


// ==== 0x004E8340  _VectorClass_PAVBuildingClass::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Building::Count(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e834a*/
}


// ==== 0x004E8350  _DynamicVectorClass_PAVSuperClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SuperClass::sub_4E8350(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8356*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8359*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8360*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8366*/
    *(_DWORD *)(this + 4) = 0; /*0x4e836e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8371*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8374*/
}


// ==== 0x004E8380  _DynamicVectorClass_PAVSuperClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SuperClass::sub_4E8380(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8380*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8395*/
  else
    return 0; /*0x4e8387*/
}


// ==== 0x004E83A0  _VectorClass_PAVSuperClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SuperClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e83aa*/
}


// ==== 0x004E83B0  _DynamicVectorClass_PAVAITriggerTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4E83B0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e83b6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e83b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e83c0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e83c6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e83ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e83d1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e83d4*/
}


// ==== 0x004E83E0  _DynamicVectorClass_PAVAITriggerTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4E83E0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e83e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e83f5*/
  else
    return 0; /*0x4e83e7*/
}


// ==== 0x004E8400  _VectorClass_PAVAITriggerTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AITriggerTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e840a*/
}


// ==== 0x004E8410  _DynamicVectorClass_PAVBuildingLightClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_BuildingLightClass::sub_4E8410(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8416*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8419*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8420*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8426*/
    *(_DWORD *)(this + 4) = 0; /*0x4e842e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8431*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8434*/
}


// ==== 0x004E8440  _DynamicVectorClass_PAVBuildingLightClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildingLightClass::sub_4E8440(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8440*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8455*/
  else
    return 0; /*0x4e8447*/
}


// ==== 0x004E8460  _VectorClass_PAVBuildingLightClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildingLightClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e846a*/
}


// ==== 0x004E8470  _DynamicVectorClass_PAVParticleClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall ParticleSystemClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8476*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8479*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8480*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8486*/
    *(_DWORD *)(this + 4) = 0; /*0x4e848e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8491*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8494*/
}


// ==== 0x004E84A0  _DynamicVectorClass_PAVParticleClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall ParticleSystemClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e84a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e84b5*/
  else
    return 0; /*0x4e84a7*/
}


// ==== 0x004E84C0  _VectorClass_PAVParticleClass::SaveToINI  this=VectorClass  sig=csp ====
int __thiscall ParticleSystemClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e84ca*/
}


// ==== 0x004E84D0  _DynamicVectorClass_PAVTeamClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TeamClass::sub_4E84D0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e84d6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e84d9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e84e0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e84e6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e84ee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e84f1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e84f4*/
}


// ==== 0x004E8500  _DynamicVectorClass_PAVTeamClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TeamClass::sub_4E8500(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8500*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8515*/
  else
    return 0; /*0x4e8507*/
}


// ==== 0x004E8520  _VectorClass_PAVTeamClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TeamClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e852a*/
}


// ==== 0x004E8530  _VectorClass_PAUThemeControl::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ThemeControl::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e853a*/
}


// ==== 0x004E8540  _DynamicVectorClass_PAVTriggerClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4E8540(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8546*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8549*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8550*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8556*/
    *(_DWORD *)(this + 4) = 0; /*0x4e855e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8561*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8564*/
}


// ==== 0x004E8570  _DynamicVectorClass_PAVTriggerClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4E8570(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8570*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8585*/
  else
    return 0; /*0x4e8577*/
}


// ==== 0x004E8590  _VectorClass_PAVTriggerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TriggerClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e859a*/
}


// ==== 0x004E85A0  _DynamicVectorClass_PAVTriggerTypeClass::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4E85A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e85a6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e85a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e85b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e85b6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e85be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e85c1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e85c4*/
}


// ==== 0x004E85D0  _DynamicVectorClass_PAVTriggerTypeClass::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4E85D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e85d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e85e5*/
  else
    return 0; /*0x4e85d7*/
}


// ==== 0x004E85F0  _VectorClass_PAVTriggerTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TriggerTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e85fa*/
}


// ==== 0x004E8600  _DynamicVectorClass_PAVTubeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TubeClass::sub_4E8600(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8606*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8609*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8610*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8616*/
    *(_DWORD *)(this + 4) = 0; /*0x4e861e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8621*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8624*/
}


// ==== 0x004E8630  _DynamicVectorClass_PAVTubeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TubeClass::sub_4E8630(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8630*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8645*/
  else
    return 0; /*0x4e8637*/
}


// ==== 0x004E8650  _VectorClass_PAVTubeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TubeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e865a*/
}


// ==== 0x004E8660  _DynamicVectorClass_PAVParticleSystemClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_BuildingLightClass::sub_4E8660(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8666*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8669*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8670*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8676*/
    *(_DWORD *)(this + 4) = 0; /*0x4e867e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8681*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8684*/
}


// ==== 0x004E8690  _DynamicVectorClass_PAVParticleSystemClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildingLightClass::sub_4E8690(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8690*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e86a5*/
  else
    return 0; /*0x4e8697*/
}


// ==== 0x004E86B0  _VectorClass_PAVParticleSystemClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParticleSystemClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e86ba*/
}


// ==== 0x004E86C0  _DynamicVectorClass_PAVWaveClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TubeClass::sub_4E86C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e86c6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e86c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e86d0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e86d6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e86de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e86e1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e86e4*/
}


// ==== 0x004E86F0  _DynamicVectorClass_PAVWaveClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TubeClass::sub_4E86F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e86f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8705*/
  else
    return 0; /*0x4e86f7*/
}


// ==== 0x004E8710  _VectorClass_PAVWaveClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WaveClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e871a*/
}


// ==== 0x004E8720  _DynamicVectorClass_PAVOverlayClass::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TubeClass::sub_4E8720(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8726*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8729*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8730*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8736*/
    *(_DWORD *)(this + 4) = 0; /*0x4e873e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8741*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8744*/
}


// ==== 0x004E8750  _DynamicVectorClass_PAVOverlayClass::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TubeClass::sub_4E8750(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8750*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8765*/
  else
    return 0; /*0x4e8757*/
}


// ==== 0x004E8770  _VectorClass_PAVOverlayClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_OverlayClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e877a*/
}


// ==== 0x004E8780  _DynamicVectorClass_PAVSmudgeClass::initParticleArray  this=DynamicVector  sig=csp ====
void __thiscall ParticleSystemClass::sub_4E8780(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8786*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8789*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8790*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8796*/
    *(_DWORD *)(this + 4) = 0; /*0x4e879e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e87a1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e87a4*/
}


// ==== 0x004E87B0  _DynamicVectorClass_PAVSmudgeClass::updateParticles  this=DynamicVector  sig=csp ====
unsigned int __thiscall ParticleSystemClass::sub_4E87B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e87b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e87c5*/
  else
    return 0; /*0x4e87b7*/
}


// ==== 0x004E87D0  _VectorClass_PAVSmudgeClass::Write  this=VectorClass  sig=csp ====
int __thiscall ParticleSystemClass_16_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e87da*/
}


// ==== 0x004E87E0  _DynamicVectorClass_PAVTerrainClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall ParticleSystemClass_32_::sub_4E87E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e87e6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e87e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e87f0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e87f6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e87fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8801*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8804*/
}


// ==== 0x004E8810  _DynamicVectorClass_PAVTerrainClass::GetIndex2  this=DynamicVector  sig=csp ====
unsigned int __thiscall ParticleSystemClass_32_::sub_4E8810(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8810*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8825*/
  else
    return 0; /*0x4e8817*/
}


// ==== 0x004E8830  _VectorClass_PAVTerrainClass::Write  this=VectorClass  sig=csp ====
int __thiscall ParticleSystemClass_32_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e883a*/
}


// ==== 0x004E8840  _DynamicVectorClass_PAVAircraftClass::ReleaseBuffer  this=DynamicVector  sig=csp ====
void __thiscall ParticleSystemClass_32_::sub_4E8840(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8846*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8849*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8850*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8856*/
    *(_DWORD *)(this + 4) = 0; /*0x4e885e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8861*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8864*/
}


// ==== 0x004E8870  _DynamicVectorClass_PAVAircraftClass::GetElementIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall ParticleSystemClass_32_::sub_4E8870(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8870*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8885*/
  else
    return 0; /*0x4e8877*/
}


// ==== 0x004E8890  _VectorClass_PAVAircraftClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AircraftClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e889a*/
}


// ==== 0x004E88A0  _DynamicVectorClass_PAVUnitClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_UnitClass::sub_4E88A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e88a6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e88a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e88b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e88b6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e88be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e88c1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e88c4*/
}


// ==== 0x004E88D0  _DynamicVectorClass_PAVUnitClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_UnitClass::sub_4E88D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e88d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e88e5*/
  else
    return 0; /*0x4e88d7*/
}


// ==== 0x004E88F0  _VectorClass_PAVUnitClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_UnitClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e88fa*/
}


// ==== 0x004E8900  _DynamicVectorClass_PAVHouseClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_UnitClass::sub_4E8900(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8906*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8909*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8910*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8916*/
    *(_DWORD *)(this + 4) = 0; /*0x4e891e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8921*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8924*/
}


// ==== 0x004E8930  _DynamicVectorClass_PAVHouseClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_UnitClass::sub_4E8930(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8930*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8945*/
  else
    return 0; /*0x4e8937*/
}


// ==== 0x004E8950  _VectorClass_PAVHouseClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_HouseClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e895a*/
}


// ==== 0x004E8960  _DynamicVectorClass_PAVAnimClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TeamClass::sub_4E8960(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8966*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8969*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8970*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8976*/
    *(_DWORD *)(this + 4) = 0; /*0x4e897e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8981*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8984*/
}


// ==== 0x004E8990  _DynamicVectorClass_PAVAnimClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TeamClass::sub_4E8990(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8990*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e89a5*/
  else
    return 0; /*0x4e8997*/
}


// ==== 0x004E89B0  _VectorClass_PAVAnimClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AnimClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e89ba*/
}


// ==== 0x004E89C0  _DynamicVectorClass_PAVFactoryClass::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TeamClass::sub_4E89C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e89c6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e89c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e89d0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e89d6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e89de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e89e1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e89e4*/
}


// ==== 0x004E89F0  _DynamicVectorClass_PAVFactoryClass::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TeamClass::sub_4E89F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e89f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8a05*/
  else
    return 0; /*0x4e89f7*/
}


// ==== 0x004E8A10  _VectorClass_PAVFactoryClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_FactoryClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8a1a*/
}


// ==== 0x004E8A20  _DynamicVectorClass_PAVCampaignClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_CampaignClass::sub_4E8A20(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8a26*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8a29*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8a30*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8a36*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8a3e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8a41*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8a44*/
}


// ==== 0x004E8A50  _DynamicVectorClass_PAVCampaignClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CampaignClass::sub_4E8A50(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8a50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8a65*/
  else
    return 0; /*0x4e8a57*/
}


// ==== 0x004E8A70  _VectorClass_PAVCampaignClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CampaignClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8a7a*/
}


// ==== 0x004E8A80  _DynamicVectorClass_PAVSideClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_CampaignClass::sub_4E8A80(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8a86*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8a89*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8a90*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8a96*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8a9e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8aa1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8aa4*/
}


// ==== 0x004E8AB0  _DynamicVectorClass_PAVSideClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CampaignClass::sub_4E8AB0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8ab0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8ac5*/
  else
    return 0; /*0x4e8ab7*/
}


// ==== 0x004E8AD0  _VectorClass_PAVSideClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SideClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8ada*/
}


// ==== 0x004E8AE0  _DynamicVectorClass_PAVHouseTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_HouseTypeClass::sub_4E8AE0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8ae6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8ae9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8af0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8af6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8afe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8b01*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8b04*/
}


// ==== 0x004E8B10  _DynamicVectorClass_PAVHouseTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_HouseTypeClass::sub_4E8B10(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8b10*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8b25*/
  else
    return 0; /*0x4e8b17*/
}


// ==== 0x004E8B30  _VectorClass_PAVHouseTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_HouseTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8b3a*/
}


// ==== 0x004E8B40  _DynamicVectorClass_PAVTaskForceClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_HouseTypeClass::sub_4E8B40(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8b46*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8b49*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8b50*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8b56*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8b5e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8b61*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8b64*/
}


// ==== 0x004E8B70  _DynamicVectorClass_PAVTaskForceClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_HouseTypeClass::sub_4E8B70(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8b70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8b85*/
  else
    return 0; /*0x4e8b77*/
}


// ==== 0x004E8B90  _VectorClass_PAVTaskForceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TaskForceClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8b9a*/
}


// ==== 0x004E8BA0  _DynamicVectorClass_PAVTeamTypeClass::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_HouseTypeClass::sub_4E8BA0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8ba6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8ba9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8bb0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8bb6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8bbe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8bc1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8bc4*/
}


// ==== 0x004E8BD0  _DynamicVectorClass_PAVTeamTypeClass::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_HouseTypeClass::sub_4E8BD0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8bd0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8be5*/
  else
    return 0; /*0x4e8bd7*/
}


// ==== 0x004E8BF0  _VectorClass_PAVTeamTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TeamTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8bfa*/
}


// ==== 0x004E8C00  _DynamicVectorClass_PAVScriptTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ScriptTypeClass::sub_4E8C00(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8c06*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8c09*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8c10*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8c16*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8c1e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8c21*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8c24*/
}


// ==== 0x004E8C30  _DynamicVectorClass_PAVScriptTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ScriptTypeClass::sub_4E8C30(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8c30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8c45*/
  else
    return 0; /*0x4e8c37*/
}


// ==== 0x004E8C50  _VectorClass_PAVScriptTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ScriptTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8c5a*/
}


// ==== 0x004E8C60  _DynamicVectorClass_PAVOverlayTypeClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ScriptTypeClass::sub_4E8C60(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8c66*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8c69*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8c70*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8c76*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8c7e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8c81*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8c84*/
}


// ==== 0x004E8C90  _DynamicVectorClass_PAVOverlayTypeClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ScriptTypeClass::sub_4E8C90(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8c90*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8ca5*/
  else
    return 0; /*0x4e8c97*/
}


// ==== 0x004E8CB0  _VectorClass_PAVOverlayTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_OverlayTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8cba*/
}


// ==== 0x004E8CC0  _DynamicVectorClass_PAVSmudgeTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4E8CC0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8cc6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8cc9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8cd0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8cd6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8cde*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8ce1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8ce4*/
}


// ==== 0x004E8CF0  _DynamicVectorClass_PAVSmudgeTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4E8CF0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8cf0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8d05*/
  else
    return 0; /*0x4e8cf7*/
}


// ==== 0x004E8D10  _VectorClass_PAVSmudgeTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SmudgeTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8d1a*/
}


// ==== 0x004E8D20  _DynamicVectorClass_PAVTerrainTypeClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4E8D20(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8d26*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8d29*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8d30*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8d36*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8d3e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8d41*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8d44*/
}


// ==== 0x004E8D50  _DynamicVectorClass_PAVTerrainTypeClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4E8D50(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8d50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8d65*/
  else
    return 0; /*0x4e8d57*/
}


// ==== 0x004E8D70  _VectorClass_PAVTerrainTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TerrainTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8d7a*/
}


// ==== 0x004E8D80  _DynamicVectorClass_PAVBuildingTypeClass::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4E8D80(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8d86*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8d89*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8d90*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8d96*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8d9e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8da1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8da4*/
}


// ==== 0x004E8DB0  _DynamicVectorClass_PAVBuildingTypeClass::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4E8DB0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8db0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8dc5*/
  else
    return 0; /*0x4e8db7*/
}


// ==== 0x004E8DD0  _VectorClass_PAVBuildingTypeClass::SaveToINI  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildingTypeClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8dda*/
}


// ==== 0x004E8DE0  _DynamicVectorClass_PAVAircraftTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AircraftTypeClass::sub_4E8DE0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8de6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8de9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8df0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8df6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8dfe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8e01*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8e04*/
}


// ==== 0x004E8E10  _DynamicVectorClass_PAVAircraftTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AircraftTypeClass::sub_4E8E10(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8e10*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8e25*/
  else
    return 0; /*0x4e8e17*/
}


// ==== 0x004E8E30  _VectorClass_PAVAircraftTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AircraftTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8e3a*/
}


// ==== 0x004E8E40  _DynamicVectorClass_PAVUnitTypeClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AircraftTypeClass::sub_4E8E40(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8e46*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8e49*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8e50*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8e56*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8e5e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8e61*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8e64*/
}


// ==== 0x004E8E70  _DynamicVectorClass_PAVUnitTypeClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AircraftTypeClass::sub_4E8E70(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8e70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8e85*/
  else
    return 0; /*0x4e8e77*/
}


// ==== 0x004E8E90  _VectorClass_PAVUnitTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_UnitTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8e9a*/
}


// ==== 0x004E8EA0  _DynamicVectorClass_PAVAnimTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AnimTypeClass::sub_4E8EA0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8ea6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8ea9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8eb0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8eb6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8ebe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8ec1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8ec4*/
}


// ==== 0x004E8ED0  _DynamicVectorClass_PAVAnimTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AnimTypeClass::sub_4E8ED0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8ed0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8ee5*/
  else
    return 0; /*0x4e8ed7*/
}


// ==== 0x004E8EF0  _VectorClass_PAVAnimTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AnimTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8efa*/
}


// ==== 0x004E8F00  _DynamicVectorClass_PAVInfantryTypeClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AnimTypeClass::sub_4E8F00(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8f06*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8f09*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8f10*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8f16*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8f1e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8f21*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8f24*/
}


// ==== 0x004E8F30  _DynamicVectorClass_PAVInfantryTypeClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AnimTypeClass::sub_4E8F30(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8f30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8f45*/
  else
    return 0; /*0x4e8f37*/
}


// ==== 0x004E8F50  _VectorClass_PAVInfantryTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_InfantryTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8f5a*/
}


// ==== 0x004E8F60  _DynamicVectorClass_PAVBulletTypeClass::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AnimTypeClass::sub_4E8F60(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8f66*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8f69*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8f70*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8f76*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8f7e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8f81*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8f84*/
}


// ==== 0x004E8F90  _DynamicVectorClass_PAVBulletTypeClass::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AnimTypeClass::sub_4E8F90(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8f90*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e8fa5*/
  else
    return 0; /*0x4e8f97*/
}


// ==== 0x004E8FB0  _VectorClass_PAVBulletTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e8fba*/
}


// ==== 0x004E8FC0  _DynamicVectorClass_PAVVoxelAnimTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_VoxelAnimTypeClass::sub_4E8FC0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8fc6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e8fc9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8fd0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8fd6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e8fde*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8fe1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e8fe4*/
}


// ==== 0x004E8FF0  _DynamicVectorClass_PAVVoxelAnimTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VoxelAnimTypeClass::sub_4E8FF0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e8ff0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9005*/
  else
    return 0; /*0x4e8ff7*/
}


// ==== 0x004E9010  _VectorClass_PAVVoxelAnimTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VoxelAnimTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e901a*/
}


// ==== 0x004E9020  _DynamicVectorClass_PAVIsometricTileTypeClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_VoxelAnimTypeClass::sub_4E9020(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e9026*/
  *(_DWORD *)(this + 16) = 0; /*0x4e9029*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e9030*/
  {
    __3_YAXPAX_Z(v2); /*0x4e9036*/
    *(_DWORD *)(this + 4) = 0; /*0x4e903e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e9041*/
  *(_DWORD *)(this + 8) = 0; /*0x4e9044*/
}


// ==== 0x004E9050  _DynamicVectorClass_PAVIsometricTileTypeClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VoxelAnimTypeClass::sub_4E9050(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e9050*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9065*/
  else
    return 0; /*0x4e9057*/
}


// ==== 0x004E9070  _VectorClass_PAVIsometricTileTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IsometricTileTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e907a*/
}


// ==== 0x004E9080  _DynamicVectorClass_PAVParticleTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ParticleTypeClass::sub_4E9080(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e9086*/
  *(_DWORD *)(this + 16) = 0; /*0x4e9089*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e9090*/
  {
    __3_YAXPAX_Z(v2); /*0x4e9096*/
    *(_DWORD *)(this + 4) = 0; /*0x4e909e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e90a1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e90a4*/
}


// ==== 0x004E90B0  _DynamicVectorClass_PAVParticleTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParticleTypeClass::sub_4E90B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e90b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e90c5*/
  else
    return 0; /*0x4e90b7*/
}


// ==== 0x004E90D0  _VectorClass_PAVParticleTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParticleTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e90da*/
}


// ==== 0x004E90E0  _DynamicVectorClass_PAVParticleSystemTypeClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ParticleTypeClass::sub_4E90E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e90e6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e90e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e90f0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e90f6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e90fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e9101*/
  *(_DWORD *)(this + 8) = 0; /*0x4e9104*/
}


// ==== 0x004E9110  _DynamicVectorClass_PAVParticleSystemTypeClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParticleTypeClass::sub_4E9110(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e9110*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9125*/
  else
    return 0; /*0x4e9117*/
}


// ==== 0x004E9130  _VectorClass_PAVParticleSystemTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParticleSystemTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e913a*/
}


// ==== 0x004E9140  _DynamicVectorClass_PAVSuperWeaponTypeClass::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ParticleTypeClass::sub_4E9140(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e9146*/
  *(_DWORD *)(this + 16) = 0; /*0x4e9149*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e9150*/
  {
    __3_YAXPAX_Z(v2); /*0x4e9156*/
    *(_DWORD *)(this + 4) = 0; /*0x4e915e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e9161*/
  *(_DWORD *)(this + 8) = 0; /*0x4e9164*/
}


// ==== 0x004E9170  _DynamicVectorClass_PAVSuperWeaponTypeClass::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParticleTypeClass::sub_4E9170(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e9170*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9185*/
  else
    return 0; /*0x4e9177*/
}


// ==== 0x004E9190  _VectorClass_PAVSuperWeaponTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SuperWeaponTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e919a*/
}


// ==== 0x004E91A0  _DynamicVectorClass_PAVAbstractTypeClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SuperClass::sub_4E91A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e91a6*/
  *(_DWORD *)(this + 16) = 0; /*0x4e91a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e91b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e91b6*/
    *(_DWORD *)(this + 4) = 0; /*0x4e91be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e91c1*/
  *(_DWORD *)(this + 8) = 0; /*0x4e91c4*/
}


// ==== 0x004E91D0  _DynamicVectorClass_PAVAbstractTypeClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SuperClass::sub_4E91D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e91d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e91e5*/
  else
    return 0; /*0x4e91d7*/
}


// ==== 0x004E91F0  _VectorClass_PAVAbstractTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AbstractTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4e91fa*/
}


// ==== 0x004E9200  _VectorClass_PAVTagClass::COMStub_1  this=VectorClass  sig=csp ====
char __thiscall HouseClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4e9202*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e920d*/
  {
    v3 = 0; /*0x4e920f*/
    if ( v2 <= 0 ) /*0x4e9213*/
      return 1; /*0x4e9233*/
    v4 = (_DWORD *)this->Items; /*0x4e9215*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e921b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e9224*/
    {
      ++v3; /*0x4e9226*/
      ++v4; /*0x4e9227*/
      if ( v3 >= v2 ) /*0x4e922c*/
        return 1; /*0x4e922c*/
    }
  }
  return 0; /*0x4e922e*/
}


// ==== 0x004E9240  ?$VectorClass@PAVTagClass@@::vt[02]  this=VectorClass  sig=csp ====
char __thiscall HouseClass::vt_02_(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e924c*/
  {
    this->IsInitialized = 0; /*0x4e9256*/
    if ( a3 ) /*0x4e925c*/
      v4 = a3; /*0x4e9272*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e926e*/
    this->IsInitialized = 1; /*0x4e9276*/
    if ( v4 ) /*0x4e927a*/
    {
      if ( this->Items ) /*0x4e9285*/
      {
        v6 = this->Capacity; /*0x4e928c*/
        if ( a2 < v6 ) /*0x4e9291*/
          v6 = a2; /*0x4e9293*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e9299*/
          ++i; /*0x4e929e*/
        if ( this->IsAllocated ) /*0x4e92ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e92b6*/
          this->Items = 0; /*0x4e92be*/
        }
      }
      this->Items = v4; /*0x4e92c7*/
      this->Capacity = a2; /*0x4e92cf*/
      this->IsAllocated = a3 == 0; /*0x4e92d2*/
      return 1; /*0x4e92d8*/
    }
    else
    {
      return 0; /*0x4e927f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e92e2*/
    return 1; /*0x4e92e8*/
  }
}


// ==== 0x004E92F0  ?$VectorClass@PAVTagClass@@::vt[03]  this=VectorClass  sig=csp ====
void __thiscall HouseClass::vt_03_(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4e92fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e9303*/
    *(_DWORD *)(this + 4) = 0; /*0x4e930b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e930e*/
  *(_DWORD *)(this + 8) = 0; /*0x4e9311*/
}


// ==== 0x004E9320  ?$VectorClass@PAVTagClass@@::vt[04]  this=VectorClass  sig=csp ====
int __thiscall HouseClass::vt_04_(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e9320*/
    return 0; /*0x4e9328*/
  v3 = *(_DWORD *)(this + 8); /*0x4e932e*/
  result = 0; /*0x4e9331*/
  if ( v3 <= 0 ) /*0x4e9335*/
    return -1; /*0x4e934c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e933b*/
  {
    if ( ++result >= v3 ) /*0x4e934a*/
      return -1; /*0x4e934a*/
  }
  return result; /*0x4e932a*/
}


// ==== 0x004E9360  ?$VectorClass@PAVTagClass@@::vt[05]  this=VectorClass  sig=csp ====
unsigned int __thiscall HouseClass::vt_05_(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e9360*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9375*/
  else
    return 0; /*0x4e9367*/
}


// ==== 0x004E9380  ?$DynamicVectorClass@PAVTagClass@@::COMStub_2  this=DynamicVector  sig=csp ====
char __thiscall HouseClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e938c*/
  {
    this->IsInitialized = 0; /*0x4e9392*/
    if ( a3 ) /*0x4e9398*/
      v4 = a3; /*0x4e93ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e93aa*/
    this->IsInitialized = 1; /*0x4e93b2*/
    if ( !v4 ) /*0x4e93b6*/
      return 0; /*0x4e942a*/
    if ( this->Items ) /*0x4e93b8*/
    {
      v5 = this->q008; /*0x4e93bf*/
      if ( a2 < v5 ) /*0x4e93c4*/
        v5 = a2; /*0x4e93c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e93cc*/
        ++i; /*0x4e93d1*/
      if ( this->IsAllocated ) /*0x4e93de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e93e9*/
        this->Items = 0; /*0x4e93f1*/
      }
    }
    this->Items = v4; /*0x4e93fa*/
    this->q008 = a2; /*0x4e9402*/
    this->IsAllocated = a3 == 0; /*0x4e9405*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e940e*/
  }
  v7 = this->q008; /*0x4e9411*/
  if ( v7 < this->Items ) /*0x4e9419*/
    this->Items = v7; /*0x4e941b*/
  return 1; /*0x4e941e*/
}


// ==== 0x004E9430  ?$DynamicVectorClass@PAVTagClass@@::COMStub_4  this=DynamicVector  sig=csp ====
int __thiscall HouseClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4e9430*/
  result = 0; /*0x4e9433*/
  if ( v2 <= 0 ) /*0x4e9438*/
    return -1; /*0x4e944f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4e943e*/
  {
    if ( ++result >= v2 ) /*0x4e944d*/
      return -1; /*0x4e944d*/
  }
  return result; /*0x4e9452*/
}


// ==== 0x004E9460  _VectorClass_PAVBuildingClass::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Building::Get(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4e9462*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e946d*/
  {
    v3 = 0; /*0x4e946f*/
    if ( v2 <= 0 ) /*0x4e9473*/
      return 1; /*0x4e9493*/
    v4 = (_DWORD *)this->Items; /*0x4e9475*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e947b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e9484*/
    {
      ++v3; /*0x4e9486*/
      ++v4; /*0x4e9487*/
      if ( v3 >= v2 ) /*0x4e948c*/
        return 1; /*0x4e948c*/
    }
  }
  return 0; /*0x4e948e*/
}


// ==== 0x004E94A0  _VectorClass_PAVBuildingClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Building::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e94ac*/
  {
    this->IsInitialized = 0; /*0x4e94b6*/
    if ( a3 ) /*0x4e94bc*/
      v4 = a3; /*0x4e94d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e94ce*/
    this->IsInitialized = 1; /*0x4e94d6*/
    if ( v4 ) /*0x4e94da*/
    {
      if ( this->Items ) /*0x4e94e5*/
      {
        v6 = this->Capacity; /*0x4e94ec*/
        if ( a2 < v6 ) /*0x4e94f1*/
          v6 = a2; /*0x4e94f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e94f9*/
          ++i; /*0x4e94fe*/
        if ( this->IsAllocated ) /*0x4e950b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9516*/
          this->Items = 0; /*0x4e951e*/
        }
      }
      this->Items = v4; /*0x4e9527*/
      this->Capacity = a2; /*0x4e952f*/
      this->IsAllocated = a3 == 0; /*0x4e9532*/
      return 1; /*0x4e9538*/
    }
    else
    {
      return 0; /*0x4e94df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e9542*/
    return 1; /*0x4e9548*/
  }
}


// ==== 0x004E9550  _VectorClass_PAVBuildingClass::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Building::Set(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4e955d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e9563*/
    *(_DWORD *)(this + 4) = 0; /*0x4e956b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e956e*/
  *(_DWORD *)(this + 8) = 0; /*0x4e9571*/
}


// ==== 0x004E9580  _VectorClass_PAVBuildingClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Building::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e9580*/
    return 0; /*0x4e9588*/
  v3 = *(_DWORD *)(this + 8); /*0x4e958e*/
  result = 0; /*0x4e9591*/
  if ( v3 <= 0 ) /*0x4e9595*/
    return -1; /*0x4e95ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e959b*/
  {
    if ( ++result >= v3 ) /*0x4e95aa*/
      return -1; /*0x4e95aa*/
  }
  return result; /*0x4e958a*/
}


// ==== 0x004E95C0  _VectorClass_PAVBuildingClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Building::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e95c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e95d5*/
  else
    return 0; /*0x4e95c7*/
}


// ==== 0x004E95E0  _DynamicVectorClass_PAVBuildingClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall ParticleSystemClass_32_::sub_4E95E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e95ec*/
  {
    this->IsInitialized = 0; /*0x4e95f2*/
    if ( a3 ) /*0x4e95f8*/
      v4 = a3; /*0x4e960e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e960a*/
    this->IsInitialized = 1; /*0x4e9612*/
    if ( !v4 ) /*0x4e9616*/
      return 0; /*0x4e968a*/
    if ( this->Items ) /*0x4e9618*/
    {
      v5 = this->q008; /*0x4e961f*/
      if ( a2 < v5 ) /*0x4e9624*/
        v5 = a2; /*0x4e9626*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e962c*/
        ++i; /*0x4e9631*/
      if ( this->IsAllocated ) /*0x4e963e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9649*/
        this->Items = 0; /*0x4e9651*/
      }
    }
    this->Items = v4; /*0x4e965a*/
    this->q008 = a2; /*0x4e9662*/
    this->IsAllocated = a3 == 0; /*0x4e9665*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e966e*/
  }
  v7 = this->q008; /*0x4e9671*/
  if ( v7 < this->Items ) /*0x4e9679*/
    this->Items = v7; /*0x4e967b*/
  return 1; /*0x4e967e*/
}


// ==== 0x004E9690  _DynamicVectorClass_PAVBuildingClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall ParticleSystemClass_32_::sub_4E9690(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4e9690*/
  result = 0; /*0x4e9693*/
  if ( v2 <= 0 ) /*0x4e9698*/
    return -1; /*0x4e96af*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4e969e*/
  {
    if ( ++result >= v2 ) /*0x4e96ad*/
      return -1; /*0x4e96ad*/
  }
  return result; /*0x4e96b2*/
}


// ==== 0x004E96C0  _VectorClass_PAVSuperClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SuperClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4e96c2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e96cd*/
  {
    v3 = 0; /*0x4e96cf*/
    if ( v2 <= 0 ) /*0x4e96d3*/
      return 1; /*0x4e96f3*/
    v4 = (_DWORD *)this->Items; /*0x4e96d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e96db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e96e4*/
    {
      ++v3; /*0x4e96e6*/
      ++v4; /*0x4e96e7*/
      if ( v3 >= v2 ) /*0x4e96ec*/
        return 1; /*0x4e96ec*/
    }
  }
  return 0; /*0x4e96ee*/
}


// ==== 0x004E9700  _VectorClass_PAVSuperClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SuperClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e970c*/
  {
    this->IsInitialized = 0; /*0x4e9716*/
    if ( a3 ) /*0x4e971c*/
      v4 = a3; /*0x4e9732*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e972e*/
    this->IsInitialized = 1; /*0x4e9736*/
    if ( v4 ) /*0x4e973a*/
    {
      if ( this->Items ) /*0x4e9745*/
      {
        v6 = this->Capacity; /*0x4e974c*/
        if ( a2 < v6 ) /*0x4e9751*/
          v6 = a2; /*0x4e9753*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e9759*/
          ++i; /*0x4e975e*/
        if ( this->IsAllocated ) /*0x4e976b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9776*/
          this->Items = 0; /*0x4e977e*/
        }
      }
      this->Items = v4; /*0x4e9787*/
      this->Capacity = a2; /*0x4e978f*/
      this->IsAllocated = a3 == 0; /*0x4e9792*/
      return 1; /*0x4e9798*/
    }
    else
    {
      return 0; /*0x4e973f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e97a2*/
    return 1; /*0x4e97a8*/
  }
}


// ==== 0x004E97B0  _VectorClass_PAVSuperClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SuperClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4e97bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e97c3*/
    *(_DWORD *)(this + 4) = 0; /*0x4e97cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e97ce*/
  *(_DWORD *)(this + 8) = 0; /*0x4e97d1*/
}


// ==== 0x004E97E0  _VectorClass_PAVSuperClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SuperClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e97e0*/
    return 0; /*0x4e97e8*/
  v3 = *(_DWORD *)(this + 8); /*0x4e97ee*/
  result = 0; /*0x4e97f1*/
  if ( v3 <= 0 ) /*0x4e97f5*/
    return -1; /*0x4e980c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e97fb*/
  {
    if ( ++result >= v3 ) /*0x4e980a*/
      return -1; /*0x4e980a*/
  }
  return result; /*0x4e97ea*/
}


// ==== 0x004E9820  _VectorClass_PAVSuperClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SuperClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e9820*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9835*/
  else
    return 0; /*0x4e9827*/
}


// ==== 0x004E9840  _DynamicVectorClass_PAVSuperClass::ResizeAndCopy  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SuperClass::sub_4E9840(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e984c*/
  {
    this->IsInitialized = 0; /*0x4e9852*/
    if ( a3 ) /*0x4e9858*/
      v4 = a3; /*0x4e986e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e986a*/
    this->IsInitialized = 1; /*0x4e9872*/
    if ( !v4 ) /*0x4e9876*/
      return 0; /*0x4e98ea*/
    if ( this->Items ) /*0x4e9878*/
    {
      v5 = this->q008; /*0x4e987f*/
      if ( a2 < v5 ) /*0x4e9884*/
        v5 = a2; /*0x4e9886*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e988c*/
        ++i; /*0x4e9891*/
      if ( this->IsAllocated ) /*0x4e989e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e98a9*/
        this->Items = 0; /*0x4e98b1*/
      }
    }
    this->Items = v4; /*0x4e98ba*/
    this->q008 = a2; /*0x4e98c2*/
    this->IsAllocated = a3 == 0; /*0x4e98c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e98ce*/
  }
  v7 = this->q008; /*0x4e98d1*/
  if ( v7 < this->Items ) /*0x4e98d9*/
    this->Items = v7; /*0x4e98db*/
  return 1; /*0x4e98de*/
}


// ==== 0x004E98F0  _DynamicVectorClass_PAVSuperClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SuperClass::sub_4E98F0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4e98f0*/
  result = 0; /*0x4e98f3*/
  if ( v2 <= 0 ) /*0x4e98f8*/
    return -1; /*0x4e990f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4e98fe*/
  {
    if ( ++result >= v2 ) /*0x4e990d*/
      return -1; /*0x4e990d*/
  }
  return result; /*0x4e9912*/
}


// ==== 0x004E9920  _VectorClass_PAVAITriggerTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AITriggerTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4e9922*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e992d*/
  {
    v3 = 0; /*0x4e992f*/
    if ( v2 <= 0 ) /*0x4e9933*/
      return 1; /*0x4e9953*/
    v4 = (_DWORD *)this->Items; /*0x4e9935*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e993b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e9944*/
    {
      ++v3; /*0x4e9946*/
      ++v4; /*0x4e9947*/
      if ( v3 >= v2 ) /*0x4e994c*/
        return 1; /*0x4e994c*/
    }
  }
  return 0; /*0x4e994e*/
}


// ==== 0x004E9960  _VectorClass_PAVAITriggerTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AITriggerTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e996c*/
  {
    this->IsInitialized = 0; /*0x4e9976*/
    if ( a3 ) /*0x4e997c*/
      v4 = a3; /*0x4e9992*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e998e*/
    this->IsInitialized = 1; /*0x4e9996*/
    if ( v4 ) /*0x4e999a*/
    {
      if ( this->Items ) /*0x4e99a5*/
      {
        v6 = this->Capacity; /*0x4e99ac*/
        if ( a2 < v6 ) /*0x4e99b1*/
          v6 = a2; /*0x4e99b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e99b9*/
          ++i; /*0x4e99be*/
        if ( this->IsAllocated ) /*0x4e99cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e99d6*/
          this->Items = 0; /*0x4e99de*/
        }
      }
      this->Items = v4; /*0x4e99e7*/
      this->Capacity = a2; /*0x4e99ef*/
      this->IsAllocated = a3 == 0; /*0x4e99f2*/
      return 1; /*0x4e99f8*/
    }
    else
    {
      return 0; /*0x4e999f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e9a02*/
    return 1; /*0x4e9a08*/
  }
}


// ==== 0x004E9A10  _VectorClass_PAVAITriggerTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AITriggerTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4e9a1d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e9a23*/
    *(_DWORD *)(this + 4) = 0; /*0x4e9a2b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e9a2e*/
  *(_DWORD *)(this + 8) = 0; /*0x4e9a31*/
}


// ==== 0x004E9A40  _VectorClass_PAVAITriggerTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AITriggerTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e9a40*/
    return 0; /*0x4e9a48*/
  v3 = *(_DWORD *)(this + 8); /*0x4e9a4e*/
  result = 0; /*0x4e9a51*/
  if ( v3 <= 0 ) /*0x4e9a55*/
    return -1; /*0x4e9a6c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e9a5b*/
  {
    if ( ++result >= v3 ) /*0x4e9a6a*/
      return -1; /*0x4e9a6a*/
  }
  return result; /*0x4e9a4a*/
}


// ==== 0x004E9A80  _VectorClass_PAVAITriggerTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AITriggerTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e9a80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9a95*/
  else
    return 0; /*0x4e9a87*/
}


// ==== 0x004E9AA0  _DynamicVectorClass_PAVAITriggerTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4E9AA0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e9aac*/
  {
    this->IsInitialized = 0; /*0x4e9ab2*/
    if ( a3 ) /*0x4e9ab8*/
      v4 = a3; /*0x4e9ace*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e9aca*/
    this->IsInitialized = 1; /*0x4e9ad2*/
    if ( !v4 ) /*0x4e9ad6*/
      return 0; /*0x4e9b4a*/
    if ( this->Items ) /*0x4e9ad8*/
    {
      v5 = this->q008; /*0x4e9adf*/
      if ( a2 < v5 ) /*0x4e9ae4*/
        v5 = a2; /*0x4e9ae6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e9aec*/
        ++i; /*0x4e9af1*/
      if ( this->IsAllocated ) /*0x4e9afe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9b09*/
        this->Items = 0; /*0x4e9b11*/
      }
    }
    this->Items = v4; /*0x4e9b1a*/
    this->q008 = a2; /*0x4e9b22*/
    this->IsAllocated = a3 == 0; /*0x4e9b25*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e9b2e*/
  }
  v7 = this->q008; /*0x4e9b31*/
  if ( v7 < this->Items ) /*0x4e9b39*/
    this->Items = v7; /*0x4e9b3b*/
  return 1; /*0x4e9b3e*/
}


// ==== 0x004E9B50  _DynamicVectorClass_PAVAITriggerTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4E9B50(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4e9b50*/
  result = 0; /*0x4e9b53*/
  if ( v2 <= 0 ) /*0x4e9b58*/
    return -1; /*0x4e9b6f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4e9b5e*/
  {
    if ( ++result >= v2 ) /*0x4e9b6d*/
      return -1; /*0x4e9b6d*/
  }
  return result; /*0x4e9b72*/
}


// ==== 0x004E9B80  _VectorClass_PAVBuildingLightClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildingLightClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4e9b82*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e9b8d*/
  {
    v3 = 0; /*0x4e9b8f*/
    if ( v2 <= 0 ) /*0x4e9b93*/
      return 1; /*0x4e9bb3*/
    v4 = (_DWORD *)this->Items; /*0x4e9b95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e9b9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e9ba4*/
    {
      ++v3; /*0x4e9ba6*/
      ++v4; /*0x4e9ba7*/
      if ( v3 >= v2 ) /*0x4e9bac*/
        return 1; /*0x4e9bac*/
    }
  }
  return 0; /*0x4e9bae*/
}


// ==== 0x004E9BC0  _VectorClass_PAVBuildingLightClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildingLightClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e9bcc*/
  {
    this->IsInitialized = 0; /*0x4e9bd6*/
    if ( a3 ) /*0x4e9bdc*/
      v4 = a3; /*0x4e9bf2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e9bee*/
    this->IsInitialized = 1; /*0x4e9bf6*/
    if ( v4 ) /*0x4e9bfa*/
    {
      if ( this->Items ) /*0x4e9c05*/
      {
        v6 = this->Capacity; /*0x4e9c0c*/
        if ( a2 < v6 ) /*0x4e9c11*/
          v6 = a2; /*0x4e9c13*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e9c19*/
          ++i; /*0x4e9c1e*/
        if ( this->IsAllocated ) /*0x4e9c2b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9c36*/
          this->Items = 0; /*0x4e9c3e*/
        }
      }
      this->Items = v4; /*0x4e9c47*/
      this->Capacity = a2; /*0x4e9c4f*/
      this->IsAllocated = a3 == 0; /*0x4e9c52*/
      return 1; /*0x4e9c58*/
    }
    else
    {
      return 0; /*0x4e9bff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e9c62*/
    return 1; /*0x4e9c68*/
  }
}


// ==== 0x004E9C70  _VectorClass_PAVBuildingLightClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BuildingLightClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4e9c7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e9c83*/
    *(_DWORD *)(this + 4) = 0; /*0x4e9c8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e9c8e*/
  *(_DWORD *)(this + 8) = 0; /*0x4e9c91*/
}


// ==== 0x004E9CA0  _VectorClass_PAVBuildingLightClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildingLightClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e9ca0*/
    return 0; /*0x4e9ca8*/
  v3 = *(_DWORD *)(this + 8); /*0x4e9cae*/
  result = 0; /*0x4e9cb1*/
  if ( v3 <= 0 ) /*0x4e9cb5*/
    return -1; /*0x4e9ccc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e9cbb*/
  {
    if ( ++result >= v3 ) /*0x4e9cca*/
      return -1; /*0x4e9cca*/
  }
  return result; /*0x4e9caa*/
}


// ==== 0x004E9CE0  _VectorClass_PAVBuildingLightClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildingLightClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e9ce0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9cf5*/
  else
    return 0; /*0x4e9ce7*/
}


// ==== 0x004E9D00  _DynamicVectorClass_PAVBuildingLightClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_BuildingLightClass::sub_4E9D00(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e9d0c*/
  {
    this->IsInitialized = 0; /*0x4e9d12*/
    if ( a3 ) /*0x4e9d18*/
      v4 = a3; /*0x4e9d2e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e9d2a*/
    this->IsInitialized = 1; /*0x4e9d32*/
    if ( !v4 ) /*0x4e9d36*/
      return 0; /*0x4e9daa*/
    if ( this->Items ) /*0x4e9d38*/
    {
      v5 = this->q008; /*0x4e9d3f*/
      if ( a2 < v5 ) /*0x4e9d44*/
        v5 = a2; /*0x4e9d46*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e9d4c*/
        ++i; /*0x4e9d51*/
      if ( this->IsAllocated ) /*0x4e9d5e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9d69*/
        this->Items = 0; /*0x4e9d71*/
      }
    }
    this->Items = v4; /*0x4e9d7a*/
    this->q008 = a2; /*0x4e9d82*/
    this->IsAllocated = a3 == 0; /*0x4e9d85*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e9d8e*/
  }
  v7 = this->q008; /*0x4e9d91*/
  if ( v7 < this->Items ) /*0x4e9d99*/
    this->Items = v7; /*0x4e9d9b*/
  return 1; /*0x4e9d9e*/
}


// ==== 0x004E9DB0  _DynamicVectorClass_PAVBuildingLightClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_BuildingLightClass::sub_4E9DB0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4e9db0*/
  result = 0; /*0x4e9db3*/
  if ( v2 <= 0 ) /*0x4e9db8*/
    return -1; /*0x4e9dcf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4e9dbe*/
  {
    if ( ++result >= v2 ) /*0x4e9dcd*/
      return -1; /*0x4e9dcd*/
  }
  return result; /*0x4e9dd2*/
}


// ==== 0x004E9DE0  _VectorClass_PAVParticleClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall ParticleSystemClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4e9de2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e9ded*/
  {
    v3 = 0; /*0x4e9def*/
    if ( v2 <= 0 ) /*0x4e9df3*/
      return 1; /*0x4e9e13*/
    v4 = (_DWORD *)this->Items; /*0x4e9df5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e9dfb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e9e04*/
    {
      ++v3; /*0x4e9e06*/
      ++v4; /*0x4e9e07*/
      if ( v3 >= v2 ) /*0x4e9e0c*/
        return 1; /*0x4e9e0c*/
    }
  }
  return 0; /*0x4e9e0e*/
}


// ==== 0x004E9E20  _VectorClass_PAVParticleClass::vt[02]  this=VectorClass  sig=csp ====
char __thiscall ParticleSystemClass::vt_02_(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e9e2c*/
  {
    this->IsInitialized = 0; /*0x4e9e36*/
    if ( a3 ) /*0x4e9e3c*/
      v4 = a3; /*0x4e9e52*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e9e4e*/
    this->IsInitialized = 1; /*0x4e9e56*/
    if ( v4 ) /*0x4e9e5a*/
    {
      if ( this->Items ) /*0x4e9e65*/
      {
        v6 = this->Capacity; /*0x4e9e6c*/
        if ( a2 < v6 ) /*0x4e9e71*/
          v6 = a2; /*0x4e9e73*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e9e79*/
          ++i; /*0x4e9e7e*/
        if ( this->IsAllocated ) /*0x4e9e8b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9e96*/
          this->Items = 0; /*0x4e9e9e*/
        }
      }
      this->Items = v4; /*0x4e9ea7*/
      this->Capacity = a2; /*0x4e9eaf*/
      this->IsAllocated = a3 == 0; /*0x4e9eb2*/
      return 1; /*0x4e9eb8*/
    }
    else
    {
      return 0; /*0x4e9e5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e9ec2*/
    return 1; /*0x4e9ec8*/
  }
}


// ==== 0x004E9ED0  _VectorClass_PAVParticleClass::vt[03]  this=VectorClass  sig=csp ====
void __thiscall ParticleSystemClass::vt_03_(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4e9edd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e9ee3*/
    *(_DWORD *)(this + 4) = 0; /*0x4e9eeb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e9eee*/
  *(_DWORD *)(this + 8) = 0; /*0x4e9ef1*/
}


// ==== 0x004E9F00  _VectorClass_PAVParticleClass::vt[04]  this=VectorClass  sig=csp ====
int __thiscall ParticleSystemClass::vt_04_(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4e9f00*/
    return 0; /*0x4e9f08*/
  v3 = *(_DWORD *)(this + 8); /*0x4e9f0e*/
  result = 0; /*0x4e9f11*/
  if ( v3 <= 0 ) /*0x4e9f15*/
    return -1; /*0x4e9f2c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e9f1b*/
  {
    if ( ++result >= v3 ) /*0x4e9f2a*/
      return -1; /*0x4e9f2a*/
  }
  return result; /*0x4e9f0a*/
}


// ==== 0x004E9F40  _VectorClass_PAVParticleClass::vt[05]  this=VectorClass  sig=csp ====
unsigned int __thiscall ParticleSystemClass::vt_05_(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4e9f40*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4e9f55*/
  else
    return 0; /*0x4e9f47*/
}


// ==== 0x004E9F60  _DynamicVectorClass_PAVParticleClass::Release  this=DynamicVector  sig=csp ====
char __thiscall ParticleSystemClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e9f6c*/
  {
    this->IsInitialized = 0; /*0x4e9f72*/
    if ( a3 ) /*0x4e9f78*/
      v4 = a3; /*0x4e9f8e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e9f8a*/
    this->IsInitialized = 1; /*0x4e9f92*/
    if ( !v4 ) /*0x4e9f96*/
      return 0; /*0x4ea00a*/
    if ( this->Items ) /*0x4e9f98*/
    {
      v5 = this->q008; /*0x4e9f9f*/
      if ( a2 < v5 ) /*0x4e9fa4*/
        v5 = a2; /*0x4e9fa6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4e9fac*/
        ++i; /*0x4e9fb1*/
      if ( this->IsAllocated ) /*0x4e9fbe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9fc9*/
        this->Items = 0; /*0x4e9fd1*/
      }
    }
    this->Items = v4; /*0x4e9fda*/
    this->q008 = a2; /*0x4e9fe2*/
    this->IsAllocated = a3 == 0; /*0x4e9fe5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4e9fee*/
  }
  v7 = this->q008; /*0x4e9ff1*/
  if ( v7 < this->Items ) /*0x4e9ff9*/
    this->Items = v7; /*0x4e9ffb*/
  return 1; /*0x4e9ffe*/
}


// ==== 0x004EA010  _DynamicVectorClass_PAVParticleClass::Init  this=DynamicVector  sig=csp ====
int __thiscall ParticleSystemClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ea010*/
  result = 0; /*0x4ea013*/
  if ( v2 <= 0 ) /*0x4ea018*/
    return -1; /*0x4ea02f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ea01e*/
  {
    if ( ++result >= v2 ) /*0x4ea02d*/
      return -1; /*0x4ea02d*/
  }
  return result; /*0x4ea032*/
}


// ==== 0x004EA040  _VectorClass_PAVTeamClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TeamClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ea042*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ea04d*/
  {
    v3 = 0; /*0x4ea04f*/
    if ( v2 <= 0 ) /*0x4ea053*/
      return 1; /*0x4ea073*/
    v4 = (_DWORD *)this->Items; /*0x4ea055*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ea05b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ea064*/
    {
      ++v3; /*0x4ea066*/
      ++v4; /*0x4ea067*/
      if ( v3 >= v2 ) /*0x4ea06c*/
        return 1; /*0x4ea06c*/
    }
  }
  return 0; /*0x4ea06e*/
}


// ==== 0x004EA080  _VectorClass_PAVTeamClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TeamClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea08c*/
  {
    this->IsInitialized = 0; /*0x4ea096*/
    if ( a3 ) /*0x4ea09c*/
      v4 = a3; /*0x4ea0b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ea0ae*/
    this->IsInitialized = 1; /*0x4ea0b6*/
    if ( v4 ) /*0x4ea0ba*/
    {
      if ( this->Items ) /*0x4ea0c5*/
      {
        v6 = this->Capacity; /*0x4ea0cc*/
        if ( a2 < v6 ) /*0x4ea0d1*/
          v6 = a2; /*0x4ea0d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ea0d9*/
          ++i; /*0x4ea0de*/
        if ( this->IsAllocated ) /*0x4ea0eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ea0f6*/
          this->Items = 0; /*0x4ea0fe*/
        }
      }
      this->Items = v4; /*0x4ea107*/
      this->Capacity = a2; /*0x4ea10f*/
      this->IsAllocated = a3 == 0; /*0x4ea112*/
      return 1; /*0x4ea118*/
    }
    else
    {
      return 0; /*0x4ea0bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ea122*/
    return 1; /*0x4ea128*/
  }
}


// ==== 0x004EA130  _VectorClass_PAVTeamClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TeamClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ea13d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ea143*/
    *(_DWORD *)(this + 4) = 0; /*0x4ea14b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ea14e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ea151*/
}


// ==== 0x004EA160  _VectorClass_PAVTeamClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TeamClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ea160*/
    return 0; /*0x4ea168*/
  v3 = *(_DWORD *)(this + 8); /*0x4ea16e*/
  result = 0; /*0x4ea171*/
  if ( v3 <= 0 ) /*0x4ea175*/
    return -1; /*0x4ea18c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ea17b*/
  {
    if ( ++result >= v3 ) /*0x4ea18a*/
      return -1; /*0x4ea18a*/
  }
  return result; /*0x4ea16a*/
}


// ==== 0x004EA1A0  _VectorClass_PAVTeamClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TeamClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ea1a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ea1b5*/
  else
    return 0; /*0x4ea1a7*/
}


// ==== 0x004EA1C0  _DynamicVectorClass_PAVTeamClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TeamClass::sub_4EA1C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ea1cc*/
  {
    this->IsInitialized = 0; /*0x4ea1d2*/
    if ( a3 ) /*0x4ea1d8*/
      v4 = a3; /*0x4ea1ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ea1ea*/
    this->IsInitialized = 1; /*0x4ea1f2*/
    if ( !v4 ) /*0x4ea1f6*/
      return 0; /*0x4ea26a*/
    if ( this->Items ) /*0x4ea1f8*/
    {
      v5 = this->q008; /*0x4ea1ff*/
      if ( a2 < v5 ) /*0x4ea204*/
        v5 = a2; /*0x4ea206*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ea20c*/
        ++i; /*0x4ea211*/
      if ( this->IsAllocated ) /*0x4ea21e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ea229*/
        this->Items = 0; /*0x4ea231*/
      }
    }
    this->Items = v4; /*0x4ea23a*/
    this->q008 = a2; /*0x4ea242*/
    this->IsAllocated = a3 == 0; /*0x4ea245*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ea24e*/
  }
  v7 = this->q008; /*0x4ea251*/
  if ( v7 < this->Items ) /*0x4ea259*/
    this->Items = v7; /*0x4ea25b*/
  return 1; /*0x4ea25e*/
}


// ==== 0x004EA270  _DynamicVectorClass_PAVTeamClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TeamClass::sub_4EA270(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ea270*/
  result = 0; /*0x4ea273*/
  if ( v2 <= 0 ) /*0x4ea278*/
    return -1; /*0x4ea28f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ea27e*/
  {
    if ( ++result >= v2 ) /*0x4ea28d*/
      return -1; /*0x4ea28d*/
  }
  return result; /*0x4ea292*/
}


// ==== 0x004EA2A0  _VectorClass_PAUThemeControl::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ThemeControl::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ea2a2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ea2ad*/
  {
    v3 = 0; /*0x4ea2af*/
    if ( v2 <= 0 ) /*0x4ea2b3*/
      return 1; /*0x4ea2d3*/
    v4 = (_DWORD *)this->Items; /*0x4ea2b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ea2bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ea2c4*/
    {
      ++v3; /*0x4ea2c6*/
      ++v4; /*0x4ea2c7*/
      if ( v3 >= v2 ) /*0x4ea2cc*/
        return 1; /*0x4ea2cc*/
    }
  }
  return 0; /*0x4ea2ce*/
}


// ==== 0x004EA2E0  _VectorClass_PAUThemeControl::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ThemeControl::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea2ec*/
  {
    this->IsInitialized = 0; /*0x4ea2f6*/
    if ( a3 ) /*0x4ea2fc*/
      v4 = a3; /*0x4ea312*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ea30e*/
    this->IsInitialized = 1; /*0x4ea316*/
    if ( v4 ) /*0x4ea31a*/
    {
      if ( this->Items ) /*0x4ea325*/
      {
        v6 = this->Capacity; /*0x4ea32c*/
        if ( a2 < v6 ) /*0x4ea331*/
          v6 = a2; /*0x4ea333*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ea339*/
          ++i; /*0x4ea33e*/
        if ( this->IsAllocated ) /*0x4ea34b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ea356*/
          this->Items = 0; /*0x4ea35e*/
        }
      }
      this->Items = v4; /*0x4ea367*/
      this->Capacity = a2; /*0x4ea36f*/
      this->IsAllocated = a3 == 0; /*0x4ea372*/
      return 1; /*0x4ea378*/
    }
    else
    {
      return 0; /*0x4ea31f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ea382*/
    return 1; /*0x4ea388*/
  }
}


// ==== 0x004EA390  _VectorClass_PAUThemeControl::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ThemeControl::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ea39d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ea3a3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ea3ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ea3ae*/
  *(_DWORD *)(this + 8) = 0; /*0x4ea3b1*/
}


// ==== 0x004EA3C0  _VectorClass_PAUThemeControl::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ThemeControl::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ea3c0*/
    return 0; /*0x4ea3c8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ea3ce*/
  result = 0; /*0x4ea3d1*/
  if ( v3 <= 0 ) /*0x4ea3d5*/
    return -1; /*0x4ea3ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ea3db*/
  {
    if ( ++result >= v3 ) /*0x4ea3ea*/
      return -1; /*0x4ea3ea*/
  }
  return result; /*0x4ea3ca*/
}


// ==== 0x004EA400  _VectorClass_PAUThemeControl::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ThemeControl::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ea400*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ea415*/
  else
    return 0; /*0x4ea407*/
}


// ==== 0x004EA420  _VectorClass_PAVTriggerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TriggerClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ea422*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ea42d*/
  {
    v3 = 0; /*0x4ea42f*/
    if ( v2 <= 0 ) /*0x4ea433*/
      return 1; /*0x4ea453*/
    v4 = (_DWORD *)this->Items; /*0x4ea435*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ea43b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ea444*/
    {
      ++v3; /*0x4ea446*/
      ++v4; /*0x4ea447*/
      if ( v3 >= v2 ) /*0x4ea44c*/
        return 1; /*0x4ea44c*/
    }
  }
  return 0; /*0x4ea44e*/
}


// ==== 0x004EA460  _VectorClass_PAVTriggerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TriggerClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea46c*/
  {
    this->IsInitialized = 0; /*0x4ea476*/
    if ( a3 ) /*0x4ea47c*/
      v4 = a3; /*0x4ea492*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ea48e*/
    this->IsInitialized = 1; /*0x4ea496*/
    if ( v4 ) /*0x4ea49a*/
    {
      if ( this->Items ) /*0x4ea4a5*/
      {
        v6 = this->Capacity; /*0x4ea4ac*/
        if ( a2 < v6 ) /*0x4ea4b1*/
          v6 = a2; /*0x4ea4b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ea4b9*/
          ++i; /*0x4ea4be*/
        if ( this->IsAllocated ) /*0x4ea4cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ea4d6*/
          this->Items = 0; /*0x4ea4de*/
        }
      }
      this->Items = v4; /*0x4ea4e7*/
      this->Capacity = a2; /*0x4ea4ef*/
      this->IsAllocated = a3 == 0; /*0x4ea4f2*/
      return 1; /*0x4ea4f8*/
    }
    else
    {
      return 0; /*0x4ea49f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ea502*/
    return 1; /*0x4ea508*/
  }
}


// ==== 0x004EA510  _VectorClass_PAVTriggerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TriggerClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ea51d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ea523*/
    *(_DWORD *)(this + 4) = 0; /*0x4ea52b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ea52e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ea531*/
}


// ==== 0x004EA540  _VectorClass_PAVTriggerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TriggerClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ea540*/
    return 0; /*0x4ea548*/
  v3 = *(_DWORD *)(this + 8); /*0x4ea54e*/
  result = 0; /*0x4ea551*/
  if ( v3 <= 0 ) /*0x4ea555*/
    return -1; /*0x4ea56c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ea55b*/
  {
    if ( ++result >= v3 ) /*0x4ea56a*/
      return -1; /*0x4ea56a*/
  }
  return result; /*0x4ea54a*/
}


// ==== 0x004EA580  _VectorClass_PAVTriggerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TriggerClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ea580*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ea595*/
  else
    return 0; /*0x4ea587*/
}


// ==== 0x004EA5A0  _DynamicVectorClass_PAVTriggerClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4EA5A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ea5ac*/
  {
    this->IsInitialized = 0; /*0x4ea5b2*/
    if ( a3 ) /*0x4ea5b8*/
      v4 = a3; /*0x4ea5ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ea5ca*/
    this->IsInitialized = 1; /*0x4ea5d2*/
    if ( !v4 ) /*0x4ea5d6*/
      return 0; /*0x4ea64a*/
    if ( this->Items ) /*0x4ea5d8*/
    {
      v5 = this->q008; /*0x4ea5df*/
      if ( a2 < v5 ) /*0x4ea5e4*/
        v5 = a2; /*0x4ea5e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ea5ec*/
        ++i; /*0x4ea5f1*/
      if ( this->IsAllocated ) /*0x4ea5fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ea609*/
        this->Items = 0; /*0x4ea611*/
      }
    }
    this->Items = v4; /*0x4ea61a*/
    this->q008 = a2; /*0x4ea622*/
    this->IsAllocated = a3 == 0; /*0x4ea625*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ea62e*/
  }
  v7 = this->q008; /*0x4ea631*/
  if ( v7 < this->Items ) /*0x4ea639*/
    this->Items = v7; /*0x4ea63b*/
  return 1; /*0x4ea63e*/
}


// ==== 0x004EA650  _DynamicVectorClass_PAVTriggerClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4EA650(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ea650*/
  result = 0; /*0x4ea653*/
  if ( v2 <= 0 ) /*0x4ea658*/
    return -1; /*0x4ea66f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ea65e*/
  {
    if ( ++result >= v2 ) /*0x4ea66d*/
      return -1; /*0x4ea66d*/
  }
  return result; /*0x4ea672*/
}


// ==== 0x004EA680  _VectorClass_PAVTriggerTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TriggerTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ea682*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ea68d*/
  {
    v3 = 0; /*0x4ea68f*/
    if ( v2 <= 0 ) /*0x4ea693*/
      return 1; /*0x4ea6b3*/
    v4 = (_DWORD *)this->Items; /*0x4ea695*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ea69b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ea6a4*/
    {
      ++v3; /*0x4ea6a6*/
      ++v4; /*0x4ea6a7*/
      if ( v3 >= v2 ) /*0x4ea6ac*/
        return 1; /*0x4ea6ac*/
    }
  }
  return 0; /*0x4ea6ae*/
}


// ==== 0x004EA6C0  _VectorClass_PAVTriggerTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TriggerTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea6cc*/
  {
    this->IsInitialized = 0; /*0x4ea6d6*/
    if ( a3 ) /*0x4ea6dc*/
      v4 = a3; /*0x4ea6f2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ea6ee*/
    this->IsInitialized = 1; /*0x4ea6f6*/
    if ( v4 ) /*0x4ea6fa*/
    {
      if ( this->Items ) /*0x4ea705*/
      {
        v6 = this->Capacity; /*0x4ea70c*/
        if ( a2 < v6 ) /*0x4ea711*/
          v6 = a2; /*0x4ea713*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ea719*/
          ++i; /*0x4ea71e*/
        if ( this->IsAllocated ) /*0x4ea72b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ea736*/
          this->Items = 0; /*0x4ea73e*/
        }
      }
      this->Items = v4; /*0x4ea747*/
      this->Capacity = a2; /*0x4ea74f*/
      this->IsAllocated = a3 == 0; /*0x4ea752*/
      return 1; /*0x4ea758*/
    }
    else
    {
      return 0; /*0x4ea6ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ea762*/
    return 1; /*0x4ea768*/
  }
}


// ==== 0x004EA770  _VectorClass_PAVTriggerTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TriggerTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ea77d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ea783*/
    *(_DWORD *)(this + 4) = 0; /*0x4ea78b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ea78e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ea791*/
}


// ==== 0x004EA7A0  _VectorClass_PAVTriggerTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TriggerTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ea7a0*/
    return 0; /*0x4ea7a8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ea7ae*/
  result = 0; /*0x4ea7b1*/
  if ( v3 <= 0 ) /*0x4ea7b5*/
    return -1; /*0x4ea7cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ea7bb*/
  {
    if ( ++result >= v3 ) /*0x4ea7ca*/
      return -1; /*0x4ea7ca*/
  }
  return result; /*0x4ea7aa*/
}


// ==== 0x004EA7E0  _VectorClass_PAVTriggerTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TriggerTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ea7e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ea7f5*/
  else
    return 0; /*0x4ea7e7*/
}


// ==== 0x004EA800  _DynamicVectorClass_PAVTriggerTypeClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4EA800(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ea80c*/
  {
    this->IsInitialized = 0; /*0x4ea812*/
    if ( a3 ) /*0x4ea818*/
      v4 = a3; /*0x4ea82e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ea82a*/
    this->IsInitialized = 1; /*0x4ea832*/
    if ( !v4 ) /*0x4ea836*/
      return 0; /*0x4ea8aa*/
    if ( this->Items ) /*0x4ea838*/
    {
      v5 = this->q008; /*0x4ea83f*/
      if ( a2 < v5 ) /*0x4ea844*/
        v5 = a2; /*0x4ea846*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ea84c*/
        ++i; /*0x4ea851*/
      if ( this->IsAllocated ) /*0x4ea85e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ea869*/
        this->Items = 0; /*0x4ea871*/
      }
    }
    this->Items = v4; /*0x4ea87a*/
    this->q008 = a2; /*0x4ea882*/
    this->IsAllocated = a3 == 0; /*0x4ea885*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ea88e*/
  }
  v7 = this->q008; /*0x4ea891*/
  if ( v7 < this->Items ) /*0x4ea899*/
    this->Items = v7; /*0x4ea89b*/
  return 1; /*0x4ea89e*/
}


// ==== 0x004EA8B0  _DynamicVectorClass_PAVTriggerTypeClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AITriggerTypeClass::sub_4EA8B0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ea8b0*/
  result = 0; /*0x4ea8b3*/
  if ( v2 <= 0 ) /*0x4ea8b8*/
    return -1; /*0x4ea8cf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ea8be*/
  {
    if ( ++result >= v2 ) /*0x4ea8cd*/
      return -1; /*0x4ea8cd*/
  }
  return result; /*0x4ea8d2*/
}


// ==== 0x004EA8E0  _VectorClass_PAVTubeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TubeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ea8e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ea8ed*/
  {
    v3 = 0; /*0x4ea8ef*/
    if ( v2 <= 0 ) /*0x4ea8f3*/
      return 1; /*0x4ea913*/
    v4 = (_DWORD *)this->Items; /*0x4ea8f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ea8fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ea904*/
    {
      ++v3; /*0x4ea906*/
      ++v4; /*0x4ea907*/
      if ( v3 >= v2 ) /*0x4ea90c*/
        return 1; /*0x4ea90c*/
    }
  }
  return 0; /*0x4ea90e*/
}


// ==== 0x004EA920  _VectorClass_PAVTubeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TubeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ea92c*/
  {
    this->IsInitialized = 0; /*0x4ea936*/
    if ( a3 ) /*0x4ea93c*/
      v4 = a3; /*0x4ea952*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ea94e*/
    this->IsInitialized = 1; /*0x4ea956*/
    if ( v4 ) /*0x4ea95a*/
    {
      if ( this->Items ) /*0x4ea965*/
      {
        v6 = this->Capacity; /*0x4ea96c*/
        if ( a2 < v6 ) /*0x4ea971*/
          v6 = a2; /*0x4ea973*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ea979*/
          ++i; /*0x4ea97e*/
        if ( this->IsAllocated ) /*0x4ea98b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ea996*/
          this->Items = 0; /*0x4ea99e*/
        }
      }
      this->Items = v4; /*0x4ea9a7*/
      this->Capacity = a2; /*0x4ea9af*/
      this->IsAllocated = a3 == 0; /*0x4ea9b2*/
      return 1; /*0x4ea9b8*/
    }
    else
    {
      return 0; /*0x4ea95f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ea9c2*/
    return 1; /*0x4ea9c8*/
  }
}


// ==== 0x004EA9D0  _VectorClass_PAVTubeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TubeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ea9dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ea9e3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ea9eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ea9ee*/
  *(_DWORD *)(this + 8) = 0; /*0x4ea9f1*/
}


// ==== 0x004EAA00  _VectorClass_PAVTubeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TubeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eaa00*/
    return 0; /*0x4eaa08*/
  v3 = *(_DWORD *)(this + 8); /*0x4eaa0e*/
  result = 0; /*0x4eaa11*/
  if ( v3 <= 0 ) /*0x4eaa15*/
    return -1; /*0x4eaa2c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eaa1b*/
  {
    if ( ++result >= v3 ) /*0x4eaa2a*/
      return -1; /*0x4eaa2a*/
  }
  return result; /*0x4eaa0a*/
}


// ==== 0x004EAA40  _VectorClass_PAVTubeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TubeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eaa40*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eaa55*/
  else
    return 0; /*0x4eaa47*/
}


// ==== 0x004EAA60  _DynamicVectorClass_PAVTubeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TubeClass::sub_4EAA60(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eaa6c*/
  {
    this->IsInitialized = 0; /*0x4eaa72*/
    if ( a3 ) /*0x4eaa78*/
      v4 = a3; /*0x4eaa8e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eaa8a*/
    this->IsInitialized = 1; /*0x4eaa92*/
    if ( !v4 ) /*0x4eaa96*/
      return 0; /*0x4eab0a*/
    if ( this->Items ) /*0x4eaa98*/
    {
      v5 = this->q008; /*0x4eaa9f*/
      if ( a2 < v5 ) /*0x4eaaa4*/
        v5 = a2; /*0x4eaaa6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eaaac*/
        ++i; /*0x4eaab1*/
      if ( this->IsAllocated ) /*0x4eaabe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eaac9*/
        this->Items = 0; /*0x4eaad1*/
      }
    }
    this->Items = v4; /*0x4eaada*/
    this->q008 = a2; /*0x4eaae2*/
    this->IsAllocated = a3 == 0; /*0x4eaae5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eaaee*/
  }
  v7 = this->q008; /*0x4eaaf1*/
  if ( v7 < this->Items ) /*0x4eaaf9*/
    this->Items = v7; /*0x4eaafb*/
  return 1; /*0x4eaafe*/
}


// ==== 0x004EAB10  _DynamicVectorClass_PAVTubeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TubeClass::sub_4EAB10(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eab10*/
  result = 0; /*0x4eab13*/
  if ( v2 <= 0 ) /*0x4eab18*/
    return -1; /*0x4eab2f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eab1e*/
  {
    if ( ++result >= v2 ) /*0x4eab2d*/
      return -1; /*0x4eab2d*/
  }
  return result; /*0x4eab32*/
}


// ==== 0x004EAB40  _VectorClass_PAVParticleSystemClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParticleSystemClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eab42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eab4d*/
  {
    v3 = 0; /*0x4eab4f*/
    if ( v2 <= 0 ) /*0x4eab53*/
      return 1; /*0x4eab73*/
    v4 = (_DWORD *)this->Items; /*0x4eab55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eab5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eab64*/
    {
      ++v3; /*0x4eab66*/
      ++v4; /*0x4eab67*/
      if ( v3 >= v2 ) /*0x4eab6c*/
        return 1; /*0x4eab6c*/
    }
  }
  return 0; /*0x4eab6e*/
}


// ==== 0x004EAB80  _VectorClass_PAVParticleSystemClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParticleSystemClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eab8c*/
  {
    this->IsInitialized = 0; /*0x4eab96*/
    if ( a3 ) /*0x4eab9c*/
      v4 = a3; /*0x4eabb2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eabae*/
    this->IsInitialized = 1; /*0x4eabb6*/
    if ( v4 ) /*0x4eabba*/
    {
      if ( this->Items ) /*0x4eabc5*/
      {
        v6 = this->Capacity; /*0x4eabcc*/
        if ( a2 < v6 ) /*0x4eabd1*/
          v6 = a2; /*0x4eabd3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eabd9*/
          ++i; /*0x4eabde*/
        if ( this->IsAllocated ) /*0x4eabeb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eabf6*/
          this->Items = 0; /*0x4eabfe*/
        }
      }
      this->Items = v4; /*0x4eac07*/
      this->Capacity = a2; /*0x4eac0f*/
      this->IsAllocated = a3 == 0; /*0x4eac12*/
      return 1; /*0x4eac18*/
    }
    else
    {
      return 0; /*0x4eabbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eac22*/
    return 1; /*0x4eac28*/
  }
}


// ==== 0x004EAC30  _VectorClass_PAVParticleSystemClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ParticleSystemClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eac3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eac43*/
    *(_DWORD *)(this + 4) = 0; /*0x4eac4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eac4e*/
  *(_DWORD *)(this + 8) = 0; /*0x4eac51*/
}


// ==== 0x004EAC60  _VectorClass_PAVParticleSystemClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParticleSystemClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eac60*/
    return 0; /*0x4eac68*/
  v3 = *(_DWORD *)(this + 8); /*0x4eac6e*/
  result = 0; /*0x4eac71*/
  if ( v3 <= 0 ) /*0x4eac75*/
    return -1; /*0x4eac8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eac7b*/
  {
    if ( ++result >= v3 ) /*0x4eac8a*/
      return -1; /*0x4eac8a*/
  }
  return result; /*0x4eac6a*/
}


// ==== 0x004EACA0  _VectorClass_PAVParticleSystemClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParticleSystemClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eaca0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eacb5*/
  else
    return 0; /*0x4eaca7*/
}


// ==== 0x004EACC0  _DynamicVectorClass_PAVParticleSystemClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_BuildingLightClass::sub_4EACC0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eaccc*/
  {
    this->IsInitialized = 0; /*0x4eacd2*/
    if ( a3 ) /*0x4eacd8*/
      v4 = a3; /*0x4eacee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eacea*/
    this->IsInitialized = 1; /*0x4eacf2*/
    if ( !v4 ) /*0x4eacf6*/
      return 0; /*0x4ead6a*/
    if ( this->Items ) /*0x4eacf8*/
    {
      v5 = this->q008; /*0x4eacff*/
      if ( a2 < v5 ) /*0x4ead04*/
        v5 = a2; /*0x4ead06*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ead0c*/
        ++i; /*0x4ead11*/
      if ( this->IsAllocated ) /*0x4ead1e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ead29*/
        this->Items = 0; /*0x4ead31*/
      }
    }
    this->Items = v4; /*0x4ead3a*/
    this->q008 = a2; /*0x4ead42*/
    this->IsAllocated = a3 == 0; /*0x4ead45*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ead4e*/
  }
  v7 = this->q008; /*0x4ead51*/
  if ( v7 < this->Items ) /*0x4ead59*/
    this->Items = v7; /*0x4ead5b*/
  return 1; /*0x4ead5e*/
}


// ==== 0x004EAD70  _DynamicVectorClass_PAVParticleSystemClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_BuildingLightClass::sub_4EAD70(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ead70*/
  result = 0; /*0x4ead73*/
  if ( v2 <= 0 ) /*0x4ead78*/
    return -1; /*0x4ead8f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ead7e*/
  {
    if ( ++result >= v2 ) /*0x4ead8d*/
      return -1; /*0x4ead8d*/
  }
  return result; /*0x4ead92*/
}


// ==== 0x004EADA0  _VectorClass_PAVWaveClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WaveClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eada2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eadad*/
  {
    v3 = 0; /*0x4eadaf*/
    if ( v2 <= 0 ) /*0x4eadb3*/
      return 1; /*0x4eadd3*/
    v4 = (_DWORD *)this->Items; /*0x4eadb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eadbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eadc4*/
    {
      ++v3; /*0x4eadc6*/
      ++v4; /*0x4eadc7*/
      if ( v3 >= v2 ) /*0x4eadcc*/
        return 1; /*0x4eadcc*/
    }
  }
  return 0; /*0x4eadce*/
}


// ==== 0x004EADE0  _VectorClass_PAVWaveClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WaveClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eadec*/
  {
    this->IsInitialized = 0; /*0x4eadf6*/
    if ( a3 ) /*0x4eadfc*/
      v4 = a3; /*0x4eae12*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eae0e*/
    this->IsInitialized = 1; /*0x4eae16*/
    if ( v4 ) /*0x4eae1a*/
    {
      if ( this->Items ) /*0x4eae25*/
      {
        v6 = this->Capacity; /*0x4eae2c*/
        if ( a2 < v6 ) /*0x4eae31*/
          v6 = a2; /*0x4eae33*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eae39*/
          ++i; /*0x4eae3e*/
        if ( this->IsAllocated ) /*0x4eae4b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eae56*/
          this->Items = 0; /*0x4eae5e*/
        }
      }
      this->Items = v4; /*0x4eae67*/
      this->Capacity = a2; /*0x4eae6f*/
      this->IsAllocated = a3 == 0; /*0x4eae72*/
      return 1; /*0x4eae78*/
    }
    else
    {
      return 0; /*0x4eae1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eae82*/
    return 1; /*0x4eae88*/
  }
}


// ==== 0x004EAE90  _VectorClass_PAVWaveClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_WaveClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eae9d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eaea3*/
    *(_DWORD *)(this + 4) = 0; /*0x4eaeab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eaeae*/
  *(_DWORD *)(this + 8) = 0; /*0x4eaeb1*/
}


// ==== 0x004EAEC0  _VectorClass_PAVWaveClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WaveClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eaec0*/
    return 0; /*0x4eaec8*/
  v3 = *(_DWORD *)(this + 8); /*0x4eaece*/
  result = 0; /*0x4eaed1*/
  if ( v3 <= 0 ) /*0x4eaed5*/
    return -1; /*0x4eaeec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eaedb*/
  {
    if ( ++result >= v3 ) /*0x4eaeea*/
      return -1; /*0x4eaeea*/
  }
  return result; /*0x4eaeca*/
}


// ==== 0x004EAF00  _VectorClass_PAVWaveClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WaveClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eaf00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eaf15*/
  else
    return 0; /*0x4eaf07*/
}


// ==== 0x004EAF20  _DynamicVectorClass_PAVWaveClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TubeClass::sub_4EAF20(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eaf2c*/
  {
    this->IsInitialized = 0; /*0x4eaf32*/
    if ( a3 ) /*0x4eaf38*/
      v4 = a3; /*0x4eaf4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eaf4a*/
    this->IsInitialized = 1; /*0x4eaf52*/
    if ( !v4 ) /*0x4eaf56*/
      return 0; /*0x4eafca*/
    if ( this->Items ) /*0x4eaf58*/
    {
      v5 = this->q008; /*0x4eaf5f*/
      if ( a2 < v5 ) /*0x4eaf64*/
        v5 = a2; /*0x4eaf66*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eaf6c*/
        ++i; /*0x4eaf71*/
      if ( this->IsAllocated ) /*0x4eaf7e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eaf89*/
        this->Items = 0; /*0x4eaf91*/
      }
    }
    this->Items = v4; /*0x4eaf9a*/
    this->q008 = a2; /*0x4eafa2*/
    this->IsAllocated = a3 == 0; /*0x4eafa5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eafae*/
  }
  v7 = this->q008; /*0x4eafb1*/
  if ( v7 < this->Items ) /*0x4eafb9*/
    this->Items = v7; /*0x4eafbb*/
  return 1; /*0x4eafbe*/
}


// ==== 0x004EAFD0  _DynamicVectorClass_PAVWaveClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TubeClass::sub_4EAFD0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eafd0*/
  result = 0; /*0x4eafd3*/
  if ( v2 <= 0 ) /*0x4eafd8*/
    return -1; /*0x4eafef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eafde*/
  {
    if ( ++result >= v2 ) /*0x4eafed*/
      return -1; /*0x4eafed*/
  }
  return result; /*0x4eaff2*/
}


// ==== 0x004EB000  _VectorClass_PAVOverlayClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_OverlayClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eb002*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eb00d*/
  {
    v3 = 0; /*0x4eb00f*/
    if ( v2 <= 0 ) /*0x4eb013*/
      return 1; /*0x4eb033*/
    v4 = (_DWORD *)this->Items; /*0x4eb015*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eb01b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb024*/
    {
      ++v3; /*0x4eb026*/
      ++v4; /*0x4eb027*/
      if ( v3 >= v2 ) /*0x4eb02c*/
        return 1; /*0x4eb02c*/
    }
  }
  return 0; /*0x4eb02e*/
}


// ==== 0x004EB040  _VectorClass_PAVOverlayClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_OverlayClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb04c*/
  {
    this->IsInitialized = 0; /*0x4eb056*/
    if ( a3 ) /*0x4eb05c*/
      v4 = a3; /*0x4eb072*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb06e*/
    this->IsInitialized = 1; /*0x4eb076*/
    if ( v4 ) /*0x4eb07a*/
    {
      if ( this->Items ) /*0x4eb085*/
      {
        v6 = this->Capacity; /*0x4eb08c*/
        if ( a2 < v6 ) /*0x4eb091*/
          v6 = a2; /*0x4eb093*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eb099*/
          ++i; /*0x4eb09e*/
        if ( this->IsAllocated ) /*0x4eb0ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb0b6*/
          this->Items = 0; /*0x4eb0be*/
        }
      }
      this->Items = v4; /*0x4eb0c7*/
      this->Capacity = a2; /*0x4eb0cf*/
      this->IsAllocated = a3 == 0; /*0x4eb0d2*/
      return 1; /*0x4eb0d8*/
    }
    else
    {
      return 0; /*0x4eb07f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eb0e2*/
    return 1; /*0x4eb0e8*/
  }
}


// ==== 0x004EB0F0  _VectorClass_PAVOverlayClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_OverlayClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eb0fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eb103*/
    *(_DWORD *)(this + 4) = 0; /*0x4eb10b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eb10e*/
  *(_DWORD *)(this + 8) = 0; /*0x4eb111*/
}


// ==== 0x004EB120  _VectorClass_PAVOverlayClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_OverlayClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eb120*/
    return 0; /*0x4eb128*/
  v3 = *(_DWORD *)(this + 8); /*0x4eb12e*/
  result = 0; /*0x4eb131*/
  if ( v3 <= 0 ) /*0x4eb135*/
    return -1; /*0x4eb14c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eb13b*/
  {
    if ( ++result >= v3 ) /*0x4eb14a*/
      return -1; /*0x4eb14a*/
  }
  return result; /*0x4eb12a*/
}


// ==== 0x004EB160  _VectorClass_PAVOverlayClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_OverlayClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eb160*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eb175*/
  else
    return 0; /*0x4eb167*/
}


// ==== 0x004EB180  _DynamicVectorClass_PAVOverlayClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TubeClass::sub_4EB180(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb18c*/
  {
    this->IsInitialized = 0; /*0x4eb192*/
    if ( a3 ) /*0x4eb198*/
      v4 = a3; /*0x4eb1ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb1aa*/
    this->IsInitialized = 1; /*0x4eb1b2*/
    if ( !v4 ) /*0x4eb1b6*/
      return 0; /*0x4eb22a*/
    if ( this->Items ) /*0x4eb1b8*/
    {
      v5 = this->q008; /*0x4eb1bf*/
      if ( a2 < v5 ) /*0x4eb1c4*/
        v5 = a2; /*0x4eb1c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eb1cc*/
        ++i; /*0x4eb1d1*/
      if ( this->IsAllocated ) /*0x4eb1de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb1e9*/
        this->Items = 0; /*0x4eb1f1*/
      }
    }
    this->Items = v4; /*0x4eb1fa*/
    this->q008 = a2; /*0x4eb202*/
    this->IsAllocated = a3 == 0; /*0x4eb205*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eb20e*/
  }
  v7 = this->q008; /*0x4eb211*/
  if ( v7 < this->Items ) /*0x4eb219*/
    this->Items = v7; /*0x4eb21b*/
  return 1; /*0x4eb21e*/
}


// ==== 0x004EB230  _DynamicVectorClass_PAVOverlayClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TubeClass::sub_4EB230(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eb230*/
  result = 0; /*0x4eb233*/
  if ( v2 <= 0 ) /*0x4eb238*/
    return -1; /*0x4eb24f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eb23e*/
  {
    if ( ++result >= v2 ) /*0x4eb24d*/
      return -1; /*0x4eb24d*/
  }
  return result; /*0x4eb252*/
}


// ==== 0x004EB260  _VectorClass_PAVSmudgeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall ParticleSystemClass_16_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eb262*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eb26d*/
  {
    v3 = 0; /*0x4eb26f*/
    if ( v2 <= 0 ) /*0x4eb273*/
      return 1; /*0x4eb293*/
    v4 = (_DWORD *)this->Items; /*0x4eb275*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eb27b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb284*/
    {
      ++v3; /*0x4eb286*/
      ++v4; /*0x4eb287*/
      if ( v3 >= v2 ) /*0x4eb28c*/
        return 1; /*0x4eb28c*/
    }
  }
  return 0; /*0x4eb28e*/
}


// ==== 0x004EB2A0  _VectorClass_PAVSmudgeClass::Release  this=VectorClass  sig=csp ====
char __thiscall ParticleSystemClass_16_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb2ac*/
  {
    this->IsInitialized = 0; /*0x4eb2b6*/
    if ( a3 ) /*0x4eb2bc*/
      v4 = a3; /*0x4eb2d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb2ce*/
    this->IsInitialized = 1; /*0x4eb2d6*/
    if ( v4 ) /*0x4eb2da*/
    {
      if ( this->Items ) /*0x4eb2e5*/
      {
        v6 = this->Capacity; /*0x4eb2ec*/
        if ( a2 < v6 ) /*0x4eb2f1*/
          v6 = a2; /*0x4eb2f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eb2f9*/
          ++i; /*0x4eb2fe*/
        if ( this->IsAllocated ) /*0x4eb30b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb316*/
          this->Items = 0; /*0x4eb31e*/
        }
      }
      this->Items = v4; /*0x4eb327*/
      this->Capacity = a2; /*0x4eb32f*/
      this->IsAllocated = a3 == 0; /*0x4eb332*/
      return 1; /*0x4eb338*/
    }
    else
    {
      return 0; /*0x4eb2df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eb342*/
    return 1; /*0x4eb348*/
  }
}


// ==== 0x004EB350  _VectorClass_PAVSmudgeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall ParticleSystemClass_16_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eb35d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eb363*/
    *(_DWORD *)(this + 4) = 0; /*0x4eb36b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eb36e*/
  *(_DWORD *)(this + 8) = 0; /*0x4eb371*/
}


// ==== 0x004EB380  _VectorClass_PAVSmudgeClass::Init  this=VectorClass  sig=csp ====
int __thiscall ParticleSystemClass_16_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eb380*/
    return 0; /*0x4eb388*/
  v3 = *(_DWORD *)(this + 8); /*0x4eb38e*/
  result = 0; /*0x4eb391*/
  if ( v3 <= 0 ) /*0x4eb395*/
    return -1; /*0x4eb3ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eb39b*/
  {
    if ( ++result >= v3 ) /*0x4eb3aa*/
      return -1; /*0x4eb3aa*/
  }
  return result; /*0x4eb38a*/
}


// ==== 0x004EB3C0  _VectorClass_PAVSmudgeClass::Read  this=VectorClass  sig=csp ====
unsigned int __thiscall ParticleSystemClass_16_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eb3c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eb3d5*/
  else
    return 0; /*0x4eb3c7*/
}


// ==== 0x004EB3E0  _DynamicVectorClass_PAVSmudgeClass::ReallocateBuffer  this=DynamicVector  sig=csp ====
char __thiscall ParticleSystemClass::sub_4EB3E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb3ec*/
  {
    this->IsInitialized = 0; /*0x4eb3f2*/
    if ( a3 ) /*0x4eb3f8*/
      v4 = a3; /*0x4eb40e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb40a*/
    this->IsInitialized = 1; /*0x4eb412*/
    if ( !v4 ) /*0x4eb416*/
      return 0; /*0x4eb48a*/
    if ( this->Items ) /*0x4eb418*/
    {
      v5 = this->q008; /*0x4eb41f*/
      if ( a2 < v5 ) /*0x4eb424*/
        v5 = a2; /*0x4eb426*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eb42c*/
        ++i; /*0x4eb431*/
      if ( this->IsAllocated ) /*0x4eb43e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb449*/
        this->Items = 0; /*0x4eb451*/
      }
    }
    this->Items = v4; /*0x4eb45a*/
    this->q008 = a2; /*0x4eb462*/
    this->IsAllocated = a3 == 0; /*0x4eb465*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eb46e*/
  }
  v7 = this->q008; /*0x4eb471*/
  if ( v7 < this->Items ) /*0x4eb479*/
    this->Items = v7; /*0x4eb47b*/
  return 1; /*0x4eb47e*/
}


// ==== 0x004EB490  _DynamicVectorClass_PAVSmudgeClass::processParticleFrame  this=DynamicVector  sig=csp ====
int __thiscall ParticleSystemClass::sub_4EB490(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eb490*/
  result = 0; /*0x4eb493*/
  if ( v2 <= 0 ) /*0x4eb498*/
    return -1; /*0x4eb4af*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eb49e*/
  {
    if ( ++result >= v2 ) /*0x4eb4ad*/
      return -1; /*0x4eb4ad*/
  }
  return result; /*0x4eb4b2*/
}


// ==== 0x004EB4C0  _VectorClass_PAVTerrainClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall ParticleSystemClass_32_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eb4c2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eb4cd*/
  {
    v3 = 0; /*0x4eb4cf*/
    if ( v2 <= 0 ) /*0x4eb4d3*/
      return 1; /*0x4eb4f3*/
    v4 = (_DWORD *)this->Items; /*0x4eb4d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eb4db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb4e4*/
    {
      ++v3; /*0x4eb4e6*/
      ++v4; /*0x4eb4e7*/
      if ( v3 >= v2 ) /*0x4eb4ec*/
        return 1; /*0x4eb4ec*/
    }
  }
  return 0; /*0x4eb4ee*/
}


// ==== 0x004EB500  _VectorClass_PAVTerrainClass::Release  this=VectorClass  sig=csp ====
char __thiscall ParticleSystemClass_32_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb50c*/
  {
    this->IsInitialized = 0; /*0x4eb516*/
    if ( a3 ) /*0x4eb51c*/
      v4 = a3; /*0x4eb532*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb52e*/
    this->IsInitialized = 1; /*0x4eb536*/
    if ( v4 ) /*0x4eb53a*/
    {
      if ( this->Items ) /*0x4eb545*/
      {
        v6 = this->Capacity; /*0x4eb54c*/
        if ( a2 < v6 ) /*0x4eb551*/
          v6 = a2; /*0x4eb553*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eb559*/
          ++i; /*0x4eb55e*/
        if ( this->IsAllocated ) /*0x4eb56b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb576*/
          this->Items = 0; /*0x4eb57e*/
        }
      }
      this->Items = v4; /*0x4eb587*/
      this->Capacity = a2; /*0x4eb58f*/
      this->IsAllocated = a3 == 0; /*0x4eb592*/
      return 1; /*0x4eb598*/
    }
    else
    {
      return 0; /*0x4eb53f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eb5a2*/
    return 1; /*0x4eb5a8*/
  }
}


// ==== 0x004EB5B0  _VectorClass_PAVTerrainClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall ParticleSystemClass_32_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eb5bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eb5c3*/
    *(_DWORD *)(this + 4) = 0; /*0x4eb5cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eb5ce*/
  *(_DWORD *)(this + 8) = 0; /*0x4eb5d1*/
}


// ==== 0x004EB5E0  _VectorClass_PAVTerrainClass::Init  this=VectorClass  sig=csp ====
int __thiscall ParticleSystemClass_32_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eb5e0*/
    return 0; /*0x4eb5e8*/
  v3 = *(_DWORD *)(this + 8); /*0x4eb5ee*/
  result = 0; /*0x4eb5f1*/
  if ( v3 <= 0 ) /*0x4eb5f5*/
    return -1; /*0x4eb60c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eb5fb*/
  {
    if ( ++result >= v3 ) /*0x4eb60a*/
      return -1; /*0x4eb60a*/
  }
  return result; /*0x4eb5ea*/
}


// ==== 0x004EB620  _VectorClass_PAVTerrainClass::Read  this=VectorClass  sig=csp ====
unsigned int __thiscall ParticleSystemClass_32_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eb620*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eb635*/
  else
    return 0; /*0x4eb627*/
}


// ==== 0x004EB640  _DynamicVectorClass_PAVTerrainClass::CopyParticles2  this=DynamicVector  sig=csp ====
char __thiscall ParticleSystemClass_32_::sub_4EB640(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb64c*/
  {
    this->IsInitialized = 0; /*0x4eb652*/
    if ( a3 ) /*0x4eb658*/
      v4 = a3; /*0x4eb66e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb66a*/
    this->IsInitialized = 1; /*0x4eb672*/
    if ( !v4 ) /*0x4eb676*/
      return 0; /*0x4eb6ea*/
    if ( this->Items ) /*0x4eb678*/
    {
      v5 = this->q008; /*0x4eb67f*/
      if ( a2 < v5 ) /*0x4eb684*/
        v5 = a2; /*0x4eb686*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eb68c*/
        ++i; /*0x4eb691*/
      if ( this->IsAllocated ) /*0x4eb69e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb6a9*/
        this->Items = 0; /*0x4eb6b1*/
      }
    }
    this->Items = v4; /*0x4eb6ba*/
    this->q008 = a2; /*0x4eb6c2*/
    this->IsAllocated = a3 == 0; /*0x4eb6c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eb6ce*/
  }
  v7 = this->q008; /*0x4eb6d1*/
  if ( v7 < this->Items ) /*0x4eb6d9*/
    this->Items = v7; /*0x4eb6db*/
  return 1; /*0x4eb6de*/
}


// ==== 0x004EB6F0  _DynamicVectorClass_PAVTerrainClass::FindParticle2  this=DynamicVector  sig=csp ====
int __thiscall ParticleSystemClass_32_::sub_4EB6F0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eb6f0*/
  result = 0; /*0x4eb6f3*/
  if ( v2 <= 0 ) /*0x4eb6f8*/
    return -1; /*0x4eb70f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eb6fe*/
  {
    if ( ++result >= v2 ) /*0x4eb70d*/
      return -1; /*0x4eb70d*/
  }
  return result; /*0x4eb712*/
}


// ==== 0x004EB720  _VectorClass_PAVAircraftClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AircraftClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eb722*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eb72d*/
  {
    v3 = 0; /*0x4eb72f*/
    if ( v2 <= 0 ) /*0x4eb733*/
      return 1; /*0x4eb753*/
    v4 = (_DWORD *)this->Items; /*0x4eb735*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eb73b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb744*/
    {
      ++v3; /*0x4eb746*/
      ++v4; /*0x4eb747*/
      if ( v3 >= v2 ) /*0x4eb74c*/
        return 1; /*0x4eb74c*/
    }
  }
  return 0; /*0x4eb74e*/
}


// ==== 0x004EB760  _VectorClass_PAVAircraftClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AircraftClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb76c*/
  {
    this->IsInitialized = 0; /*0x4eb776*/
    if ( a3 ) /*0x4eb77c*/
      v4 = a3; /*0x4eb792*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb78e*/
    this->IsInitialized = 1; /*0x4eb796*/
    if ( v4 ) /*0x4eb79a*/
    {
      if ( this->Items ) /*0x4eb7a5*/
      {
        v6 = this->Capacity; /*0x4eb7ac*/
        if ( a2 < v6 ) /*0x4eb7b1*/
          v6 = a2; /*0x4eb7b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eb7b9*/
          ++i; /*0x4eb7be*/
        if ( this->IsAllocated ) /*0x4eb7cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb7d6*/
          this->Items = 0; /*0x4eb7de*/
        }
      }
      this->Items = v4; /*0x4eb7e7*/
      this->Capacity = a2; /*0x4eb7ef*/
      this->IsAllocated = a3 == 0; /*0x4eb7f2*/
      return 1; /*0x4eb7f8*/
    }
    else
    {
      return 0; /*0x4eb79f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eb802*/
    return 1; /*0x4eb808*/
  }
}


// ==== 0x004EB810  _VectorClass_PAVAircraftClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AircraftClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eb81d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eb823*/
    *(_DWORD *)(this + 4) = 0; /*0x4eb82b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eb82e*/
  *(_DWORD *)(this + 8) = 0; /*0x4eb831*/
}


// ==== 0x004EB840  _VectorClass_PAVAircraftClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AircraftClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eb840*/
    return 0; /*0x4eb848*/
  v3 = *(_DWORD *)(this + 8); /*0x4eb84e*/
  result = 0; /*0x4eb851*/
  if ( v3 <= 0 ) /*0x4eb855*/
    return -1; /*0x4eb86c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eb85b*/
  {
    if ( ++result >= v3 ) /*0x4eb86a*/
      return -1; /*0x4eb86a*/
  }
  return result; /*0x4eb84a*/
}


// ==== 0x004EB880  _VectorClass_PAVAircraftClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AircraftClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eb880*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eb895*/
  else
    return 0; /*0x4eb887*/
}


// ==== 0x004EB8A0  _DynamicVectorClass_PAVAircraftClass::ResizeDataArray  this=DynamicVector  sig=csp ====
char __thiscall ParticleSystemClass_32_::sub_4EB8A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb8ac*/
  {
    this->IsInitialized = 0; /*0x4eb8b2*/
    if ( a3 ) /*0x4eb8b8*/
      v4 = a3; /*0x4eb8ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb8ca*/
    this->IsInitialized = 1; /*0x4eb8d2*/
    if ( !v4 ) /*0x4eb8d6*/
      return 0; /*0x4eb94a*/
    if ( this->Items ) /*0x4eb8d8*/
    {
      v5 = this->q008; /*0x4eb8df*/
      if ( a2 < v5 ) /*0x4eb8e4*/
        v5 = a2; /*0x4eb8e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eb8ec*/
        ++i; /*0x4eb8f1*/
      if ( this->IsAllocated ) /*0x4eb8fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb909*/
        this->Items = 0; /*0x4eb911*/
      }
    }
    this->Items = v4; /*0x4eb91a*/
    this->q008 = a2; /*0x4eb922*/
    this->IsAllocated = a3 == 0; /*0x4eb925*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eb92e*/
  }
  v7 = this->q008; /*0x4eb931*/
  if ( v7 < this->Items ) /*0x4eb939*/
    this->Items = v7; /*0x4eb93b*/
  return 1; /*0x4eb93e*/
}


// ==== 0x004EB950  _DynamicVectorClass_PAVAircraftClass::FindElementByValue  this=DynamicVector  sig=csp ====
int __thiscall ParticleSystemClass_32_::sub_4EB950(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eb950*/
  result = 0; /*0x4eb953*/
  if ( v2 <= 0 ) /*0x4eb958*/
    return -1; /*0x4eb96f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eb95e*/
  {
    if ( ++result >= v2 ) /*0x4eb96d*/
      return -1; /*0x4eb96d*/
  }
  return result; /*0x4eb972*/
}


// ==== 0x004EB980  _VectorClass_PAVUnitClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_UnitClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eb982*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eb98d*/
  {
    v3 = 0; /*0x4eb98f*/
    if ( v2 <= 0 ) /*0x4eb993*/
      return 1; /*0x4eb9b3*/
    v4 = (_DWORD *)this->Items; /*0x4eb995*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eb99b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb9a4*/
    {
      ++v3; /*0x4eb9a6*/
      ++v4; /*0x4eb9a7*/
      if ( v3 >= v2 ) /*0x4eb9ac*/
        return 1; /*0x4eb9ac*/
    }
  }
  return 0; /*0x4eb9ae*/
}


// ==== 0x004EB9C0  _VectorClass_PAVUnitClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_UnitClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb9cc*/
  {
    this->IsInitialized = 0; /*0x4eb9d6*/
    if ( a3 ) /*0x4eb9dc*/
      v4 = a3; /*0x4eb9f2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb9ee*/
    this->IsInitialized = 1; /*0x4eb9f6*/
    if ( v4 ) /*0x4eb9fa*/
    {
      if ( this->Items ) /*0x4eba05*/
      {
        v6 = this->Capacity; /*0x4eba0c*/
        if ( a2 < v6 ) /*0x4eba11*/
          v6 = a2; /*0x4eba13*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eba19*/
          ++i; /*0x4eba1e*/
        if ( this->IsAllocated ) /*0x4eba2b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eba36*/
          this->Items = 0; /*0x4eba3e*/
        }
      }
      this->Items = v4; /*0x4eba47*/
      this->Capacity = a2; /*0x4eba4f*/
      this->IsAllocated = a3 == 0; /*0x4eba52*/
      return 1; /*0x4eba58*/
    }
    else
    {
      return 0; /*0x4eb9ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eba62*/
    return 1; /*0x4eba68*/
  }
}


// ==== 0x004EBA70  _VectorClass_PAVUnitClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_UnitClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eba7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eba83*/
    *(_DWORD *)(this + 4) = 0; /*0x4eba8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eba8e*/
  *(_DWORD *)(this + 8) = 0; /*0x4eba91*/
}


// ==== 0x004EBAA0  _VectorClass_PAVUnitClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_UnitClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ebaa0*/
    return 0; /*0x4ebaa8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ebaae*/
  result = 0; /*0x4ebab1*/
  if ( v3 <= 0 ) /*0x4ebab5*/
    return -1; /*0x4ebacc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ebabb*/
  {
    if ( ++result >= v3 ) /*0x4ebaca*/
      return -1; /*0x4ebaca*/
  }
  return result; /*0x4ebaaa*/
}


// ==== 0x004EBAE0  _VectorClass_PAVUnitClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_UnitClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ebae0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ebaf5*/
  else
    return 0; /*0x4ebae7*/
}


// ==== 0x004EBB00  _DynamicVectorClass_PAVUnitClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_UnitClass::sub_4EBB00(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ebb0c*/
  {
    this->IsInitialized = 0; /*0x4ebb12*/
    if ( a3 ) /*0x4ebb18*/
      v4 = a3; /*0x4ebb2e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ebb2a*/
    this->IsInitialized = 1; /*0x4ebb32*/
    if ( !v4 ) /*0x4ebb36*/
      return 0; /*0x4ebbaa*/
    if ( this->Items ) /*0x4ebb38*/
    {
      v5 = this->q008; /*0x4ebb3f*/
      if ( a2 < v5 ) /*0x4ebb44*/
        v5 = a2; /*0x4ebb46*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ebb4c*/
        ++i; /*0x4ebb51*/
      if ( this->IsAllocated ) /*0x4ebb5e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ebb69*/
        this->Items = 0; /*0x4ebb71*/
      }
    }
    this->Items = v4; /*0x4ebb7a*/
    this->q008 = a2; /*0x4ebb82*/
    this->IsAllocated = a3 == 0; /*0x4ebb85*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ebb8e*/
  }
  v7 = this->q008; /*0x4ebb91*/
  if ( v7 < this->Items ) /*0x4ebb99*/
    this->Items = v7; /*0x4ebb9b*/
  return 1; /*0x4ebb9e*/
}


// ==== 0x004EBBB0  _DynamicVectorClass_PAVUnitClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_UnitClass::sub_4EBBB0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ebbb0*/
  result = 0; /*0x4ebbb3*/
  if ( v2 <= 0 ) /*0x4ebbb8*/
    return -1; /*0x4ebbcf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ebbbe*/
  {
    if ( ++result >= v2 ) /*0x4ebbcd*/
      return -1; /*0x4ebbcd*/
  }
  return result; /*0x4ebbd2*/
}


// ==== 0x004EBBE0  _VectorClass_PAVHouseClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_HouseClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ebbe2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ebbed*/
  {
    v3 = 0; /*0x4ebbef*/
    if ( v2 <= 0 ) /*0x4ebbf3*/
      return 1; /*0x4ebc13*/
    v4 = (_DWORD *)this->Items; /*0x4ebbf5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ebbfb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ebc04*/
    {
      ++v3; /*0x4ebc06*/
      ++v4; /*0x4ebc07*/
      if ( v3 >= v2 ) /*0x4ebc0c*/
        return 1; /*0x4ebc0c*/
    }
  }
  return 0; /*0x4ebc0e*/
}


// ==== 0x004EBC20  _VectorClass_PAVHouseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_HouseClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ebc2c*/
  {
    this->IsInitialized = 0; /*0x4ebc36*/
    if ( a3 ) /*0x4ebc3c*/
      v4 = a3; /*0x4ebc52*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ebc4e*/
    this->IsInitialized = 1; /*0x4ebc56*/
    if ( v4 ) /*0x4ebc5a*/
    {
      if ( this->Items ) /*0x4ebc65*/
      {
        v6 = this->Capacity; /*0x4ebc6c*/
        if ( a2 < v6 ) /*0x4ebc71*/
          v6 = a2; /*0x4ebc73*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ebc79*/
          ++i; /*0x4ebc7e*/
        if ( this->IsAllocated ) /*0x4ebc8b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ebc96*/
          this->Items = 0; /*0x4ebc9e*/
        }
      }
      this->Items = v4; /*0x4ebca7*/
      this->Capacity = a2; /*0x4ebcaf*/
      this->IsAllocated = a3 == 0; /*0x4ebcb2*/
      return 1; /*0x4ebcb8*/
    }
    else
    {
      return 0; /*0x4ebc5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ebcc2*/
    return 1; /*0x4ebcc8*/
  }
}


// ==== 0x004EBCD0  _VectorClass_PAVHouseClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_HouseClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ebcdd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ebce3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ebceb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ebcee*/
  *(_DWORD *)(this + 8) = 0; /*0x4ebcf1*/
}


// ==== 0x004EBD00  _VectorClass_PAVHouseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_HouseClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ebd00*/
    return 0; /*0x4ebd08*/
  v3 = *(_DWORD *)(this + 8); /*0x4ebd0e*/
  result = 0; /*0x4ebd11*/
  if ( v3 <= 0 ) /*0x4ebd15*/
    return -1; /*0x4ebd2c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ebd1b*/
  {
    if ( ++result >= v3 ) /*0x4ebd2a*/
      return -1; /*0x4ebd2a*/
  }
  return result; /*0x4ebd0a*/
}


// ==== 0x004EBD40  _VectorClass_PAVHouseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_HouseClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ebd40*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ebd55*/
  else
    return 0; /*0x4ebd47*/
}


// ==== 0x004EBD60  _DynamicVectorClass_PAVHouseClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_UnitClass::sub_4EBD60(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ebd6c*/
  {
    this->IsInitialized = 0; /*0x4ebd72*/
    if ( a3 ) /*0x4ebd78*/
      v4 = a3; /*0x4ebd8e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ebd8a*/
    this->IsInitialized = 1; /*0x4ebd92*/
    if ( !v4 ) /*0x4ebd96*/
      return 0; /*0x4ebe0a*/
    if ( this->Items ) /*0x4ebd98*/
    {
      v5 = this->q008; /*0x4ebd9f*/
      if ( a2 < v5 ) /*0x4ebda4*/
        v5 = a2; /*0x4ebda6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ebdac*/
        ++i; /*0x4ebdb1*/
      if ( this->IsAllocated ) /*0x4ebdbe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ebdc9*/
        this->Items = 0; /*0x4ebdd1*/
      }
    }
    this->Items = v4; /*0x4ebdda*/
    this->q008 = a2; /*0x4ebde2*/
    this->IsAllocated = a3 == 0; /*0x4ebde5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ebdee*/
  }
  v7 = this->q008; /*0x4ebdf1*/
  if ( v7 < this->Items ) /*0x4ebdf9*/
    this->Items = v7; /*0x4ebdfb*/
  return 1; /*0x4ebdfe*/
}


// ==== 0x004EBE10  _DynamicVectorClass_PAVHouseClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_UnitClass::sub_4EBE10(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ebe10*/
  result = 0; /*0x4ebe13*/
  if ( v2 <= 0 ) /*0x4ebe18*/
    return -1; /*0x4ebe2f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ebe1e*/
  {
    if ( ++result >= v2 ) /*0x4ebe2d*/
      return -1; /*0x4ebe2d*/
  }
  return result; /*0x4ebe32*/
}


// ==== 0x004EBE40  _VectorClass_PAVAnimClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AnimClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ebe42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ebe4d*/
  {
    v3 = 0; /*0x4ebe4f*/
    if ( v2 <= 0 ) /*0x4ebe53*/
      return 1; /*0x4ebe73*/
    v4 = (_DWORD *)this->Items; /*0x4ebe55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ebe5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ebe64*/
    {
      ++v3; /*0x4ebe66*/
      ++v4; /*0x4ebe67*/
      if ( v3 >= v2 ) /*0x4ebe6c*/
        return 1; /*0x4ebe6c*/
    }
  }
  return 0; /*0x4ebe6e*/
}


// ==== 0x004EBE80  _VectorClass_PAVAnimClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AnimClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ebe8c*/
  {
    this->IsInitialized = 0; /*0x4ebe96*/
    if ( a3 ) /*0x4ebe9c*/
      v4 = a3; /*0x4ebeb2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ebeae*/
    this->IsInitialized = 1; /*0x4ebeb6*/
    if ( v4 ) /*0x4ebeba*/
    {
      if ( this->Items ) /*0x4ebec5*/
      {
        v6 = this->Capacity; /*0x4ebecc*/
        if ( a2 < v6 ) /*0x4ebed1*/
          v6 = a2; /*0x4ebed3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ebed9*/
          ++i; /*0x4ebede*/
        if ( this->IsAllocated ) /*0x4ebeeb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ebef6*/
          this->Items = 0; /*0x4ebefe*/
        }
      }
      this->Items = v4; /*0x4ebf07*/
      this->Capacity = a2; /*0x4ebf0f*/
      this->IsAllocated = a3 == 0; /*0x4ebf12*/
      return 1; /*0x4ebf18*/
    }
    else
    {
      return 0; /*0x4ebebf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ebf22*/
    return 1; /*0x4ebf28*/
  }
}


// ==== 0x004EBF30  _VectorClass_PAVAnimClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AnimClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ebf3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ebf43*/
    *(_DWORD *)(this + 4) = 0; /*0x4ebf4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ebf4e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ebf51*/
}


// ==== 0x004EBF60  _VectorClass_PAVAnimClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AnimClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ebf60*/
    return 0; /*0x4ebf68*/
  v3 = *(_DWORD *)(this + 8); /*0x4ebf6e*/
  result = 0; /*0x4ebf71*/
  if ( v3 <= 0 ) /*0x4ebf75*/
    return -1; /*0x4ebf8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ebf7b*/
  {
    if ( ++result >= v3 ) /*0x4ebf8a*/
      return -1; /*0x4ebf8a*/
  }
  return result; /*0x4ebf6a*/
}


// ==== 0x004EBFA0  ?$VectorClass@PAVAnimClass@@::GetIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_GetIndex(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ebfa0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ebfb5*/
  else
    return 0; /*0x4ebfa7*/
}


// ==== 0x004EBFC0  _DynamicVectorClass_PAVAnimClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TeamClass::sub_4EBFC0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ebfcc*/
  {
    this->IsInitialized = 0; /*0x4ebfd2*/
    if ( a3 ) /*0x4ebfd8*/
      v4 = a3; /*0x4ebfee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ebfea*/
    this->IsInitialized = 1; /*0x4ebff2*/
    if ( !v4 ) /*0x4ebff6*/
      return 0; /*0x4ec06a*/
    if ( this->Items ) /*0x4ebff8*/
    {
      v5 = this->q008; /*0x4ebfff*/
      if ( a2 < v5 ) /*0x4ec004*/
        v5 = a2; /*0x4ec006*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec00c*/
        ++i; /*0x4ec011*/
      if ( this->IsAllocated ) /*0x4ec01e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec029*/
        this->Items = 0; /*0x4ec031*/
      }
    }
    this->Items = v4; /*0x4ec03a*/
    this->q008 = a2; /*0x4ec042*/
    this->IsAllocated = a3 == 0; /*0x4ec045*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec04e*/
  }
  v7 = this->q008; /*0x4ec051*/
  if ( v7 < this->Items ) /*0x4ec059*/
    this->Items = v7; /*0x4ec05b*/
  return 1; /*0x4ec05e*/
}


// ==== 0x004EC070  _DynamicVectorClass_PAVAnimClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TeamClass::sub_4EC070(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ec070*/
  result = 0; /*0x4ec073*/
  if ( v2 <= 0 ) /*0x4ec078*/
    return -1; /*0x4ec08f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ec07e*/
  {
    if ( ++result >= v2 ) /*0x4ec08d*/
      return -1; /*0x4ec08d*/
  }
  return result; /*0x4ec092*/
}


// ==== 0x004EC0A0  _VectorClass_PAVFactoryClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_FactoryClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ec0a2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ec0ad*/
  {
    v3 = 0; /*0x4ec0af*/
    if ( v2 <= 0 ) /*0x4ec0b3*/
      return 1; /*0x4ec0d3*/
    v4 = (_DWORD *)this->Items; /*0x4ec0b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ec0bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ec0c4*/
    {
      ++v3; /*0x4ec0c6*/
      ++v4; /*0x4ec0c7*/
      if ( v3 >= v2 ) /*0x4ec0cc*/
        return 1; /*0x4ec0cc*/
    }
  }
  return 0; /*0x4ec0ce*/
}


// ==== 0x004EC0E0  _VectorClass_PAVFactoryClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_FactoryClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ec0ec*/
  {
    this->IsInitialized = 0; /*0x4ec0f6*/
    if ( a3 ) /*0x4ec0fc*/
      v4 = a3; /*0x4ec112*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ec10e*/
    this->IsInitialized = 1; /*0x4ec116*/
    if ( v4 ) /*0x4ec11a*/
    {
      if ( this->Items ) /*0x4ec125*/
      {
        v6 = this->Capacity; /*0x4ec12c*/
        if ( a2 < v6 ) /*0x4ec131*/
          v6 = a2; /*0x4ec133*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec139*/
          ++i; /*0x4ec13e*/
        if ( this->IsAllocated ) /*0x4ec14b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec156*/
          this->Items = 0; /*0x4ec15e*/
        }
      }
      this->Items = v4; /*0x4ec167*/
      this->Capacity = a2; /*0x4ec16f*/
      this->IsAllocated = a3 == 0; /*0x4ec172*/
      return 1; /*0x4ec178*/
    }
    else
    {
      return 0; /*0x4ec11f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec182*/
    return 1; /*0x4ec188*/
  }
}


// ==== 0x004EC190  _VectorClass_PAVFactoryClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_FactoryClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ec19d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ec1a3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ec1ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ec1ae*/
  *(_DWORD *)(this + 8) = 0; /*0x4ec1b1*/
}


// ==== 0x004EC1C0  _VectorClass_PAVFactoryClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_FactoryClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ec1c0*/
    return 0; /*0x4ec1c8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ec1ce*/
  result = 0; /*0x4ec1d1*/
  if ( v3 <= 0 ) /*0x4ec1d5*/
    return -1; /*0x4ec1ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ec1db*/
  {
    if ( ++result >= v3 ) /*0x4ec1ea*/
      return -1; /*0x4ec1ea*/
  }
  return result; /*0x4ec1ca*/
}


// ==== 0x004EC200  _VectorClass_PAVFactoryClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_FactoryClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ec200*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ec215*/
  else
    return 0; /*0x4ec207*/
}


// ==== 0x004EC220  _DynamicVectorClass_PAVFactoryClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TeamClass::sub_4EC220(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ec22c*/
  {
    this->IsInitialized = 0; /*0x4ec232*/
    if ( a3 ) /*0x4ec238*/
      v4 = a3; /*0x4ec24e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ec24a*/
    this->IsInitialized = 1; /*0x4ec252*/
    if ( !v4 ) /*0x4ec256*/
      return 0; /*0x4ec2ca*/
    if ( this->Items ) /*0x4ec258*/
    {
      v5 = this->q008; /*0x4ec25f*/
      if ( a2 < v5 ) /*0x4ec264*/
        v5 = a2; /*0x4ec266*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec26c*/
        ++i; /*0x4ec271*/
      if ( this->IsAllocated ) /*0x4ec27e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec289*/
        this->Items = 0; /*0x4ec291*/
      }
    }
    this->Items = v4; /*0x4ec29a*/
    this->q008 = a2; /*0x4ec2a2*/
    this->IsAllocated = a3 == 0; /*0x4ec2a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec2ae*/
  }
  v7 = this->q008; /*0x4ec2b1*/
  if ( v7 < this->Items ) /*0x4ec2b9*/
    this->Items = v7; /*0x4ec2bb*/
  return 1; /*0x4ec2be*/
}


// ==== 0x004EC2D0  _DynamicVectorClass_PAVFactoryClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TeamClass::sub_4EC2D0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ec2d0*/
  result = 0; /*0x4ec2d3*/
  if ( v2 <= 0 ) /*0x4ec2d8*/
    return -1; /*0x4ec2ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ec2de*/
  {
    if ( ++result >= v2 ) /*0x4ec2ed*/
      return -1; /*0x4ec2ed*/
  }
  return result; /*0x4ec2f2*/
}


// ==== 0x004EC300  _VectorClass_PAVCampaignClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CampaignClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ec302*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ec30d*/
  {
    v3 = 0; /*0x4ec30f*/
    if ( v2 <= 0 ) /*0x4ec313*/
      return 1; /*0x4ec333*/
    v4 = (_DWORD *)this->Items; /*0x4ec315*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ec31b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ec324*/
    {
      ++v3; /*0x4ec326*/
      ++v4; /*0x4ec327*/
      if ( v3 >= v2 ) /*0x4ec32c*/
        return 1; /*0x4ec32c*/
    }
  }
  return 0; /*0x4ec32e*/
}


// ==== 0x004EC340  _VectorClass_PAVCampaignClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CampaignClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ec34c*/
  {
    this->IsInitialized = 0; /*0x4ec356*/
    if ( a3 ) /*0x4ec35c*/
      v4 = a3; /*0x4ec372*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ec36e*/
    this->IsInitialized = 1; /*0x4ec376*/
    if ( v4 ) /*0x4ec37a*/
    {
      if ( this->Items ) /*0x4ec385*/
      {
        v6 = this->Capacity; /*0x4ec38c*/
        if ( a2 < v6 ) /*0x4ec391*/
          v6 = a2; /*0x4ec393*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec399*/
          ++i; /*0x4ec39e*/
        if ( this->IsAllocated ) /*0x4ec3ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec3b6*/
          this->Items = 0; /*0x4ec3be*/
        }
      }
      this->Items = v4; /*0x4ec3c7*/
      this->Capacity = a2; /*0x4ec3cf*/
      this->IsAllocated = a3 == 0; /*0x4ec3d2*/
      return 1; /*0x4ec3d8*/
    }
    else
    {
      return 0; /*0x4ec37f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec3e2*/
    return 1; /*0x4ec3e8*/
  }
}


// ==== 0x004EC3F0  _VectorClass_PAVCampaignClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CampaignClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ec3fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ec403*/
    *(_DWORD *)(this + 4) = 0; /*0x4ec40b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ec40e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ec411*/
}


// ==== 0x004EC420  _VectorClass_PAVCampaignClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CampaignClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ec420*/
    return 0; /*0x4ec428*/
  v3 = *(_DWORD *)(this + 8); /*0x4ec42e*/
  result = 0; /*0x4ec431*/
  if ( v3 <= 0 ) /*0x4ec435*/
    return -1; /*0x4ec44c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ec43b*/
  {
    if ( ++result >= v3 ) /*0x4ec44a*/
      return -1; /*0x4ec44a*/
  }
  return result; /*0x4ec42a*/
}


// ==== 0x004EC460  _VectorClass_PAVCampaignClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CampaignClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ec460*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ec475*/
  else
    return 0; /*0x4ec467*/
}


// ==== 0x004EC480  _DynamicVectorClass_PAVCampaignClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_CampaignClass::sub_4EC480(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ec48c*/
  {
    this->IsInitialized = 0; /*0x4ec492*/
    if ( a3 ) /*0x4ec498*/
      v4 = a3; /*0x4ec4ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ec4aa*/
    this->IsInitialized = 1; /*0x4ec4b2*/
    if ( !v4 ) /*0x4ec4b6*/
      return 0; /*0x4ec52a*/
    if ( this->Items ) /*0x4ec4b8*/
    {
      v5 = this->q008; /*0x4ec4bf*/
      if ( a2 < v5 ) /*0x4ec4c4*/
        v5 = a2; /*0x4ec4c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec4cc*/
        ++i; /*0x4ec4d1*/
      if ( this->IsAllocated ) /*0x4ec4de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec4e9*/
        this->Items = 0; /*0x4ec4f1*/
      }
    }
    this->Items = v4; /*0x4ec4fa*/
    this->q008 = a2; /*0x4ec502*/
    this->IsAllocated = a3 == 0; /*0x4ec505*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec50e*/
  }
  v7 = this->q008; /*0x4ec511*/
  if ( v7 < this->Items ) /*0x4ec519*/
    this->Items = v7; /*0x4ec51b*/
  return 1; /*0x4ec51e*/
}


// ==== 0x004EC530  _DynamicVectorClass_PAVCampaignClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_CampaignClass::sub_4EC530(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ec530*/
  result = 0; /*0x4ec533*/
  if ( v2 <= 0 ) /*0x4ec538*/
    return -1; /*0x4ec54f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ec53e*/
  {
    if ( ++result >= v2 ) /*0x4ec54d*/
      return -1; /*0x4ec54d*/
  }
  return result; /*0x4ec552*/
}


// ==== 0x004EC560  _VectorClass_PAVSideClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SideClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ec562*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ec56d*/
  {
    v3 = 0; /*0x4ec56f*/
    if ( v2 <= 0 ) /*0x4ec573*/
      return 1; /*0x4ec593*/
    v4 = (_DWORD *)this->Items; /*0x4ec575*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ec57b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ec584*/
    {
      ++v3; /*0x4ec586*/
      ++v4; /*0x4ec587*/
      if ( v3 >= v2 ) /*0x4ec58c*/
        return 1; /*0x4ec58c*/
    }
  }
  return 0; /*0x4ec58e*/
}


// ==== 0x004EC5A0  _VectorClass_PAVSideClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SideClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ec5ac*/
  {
    this->IsInitialized = 0; /*0x4ec5b6*/
    if ( a3 ) /*0x4ec5bc*/
      v4 = a3; /*0x4ec5d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ec5ce*/
    this->IsInitialized = 1; /*0x4ec5d6*/
    if ( v4 ) /*0x4ec5da*/
    {
      if ( this->Items ) /*0x4ec5e5*/
      {
        v6 = this->Capacity; /*0x4ec5ec*/
        if ( a2 < v6 ) /*0x4ec5f1*/
          v6 = a2; /*0x4ec5f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec5f9*/
          ++i; /*0x4ec5fe*/
        if ( this->IsAllocated ) /*0x4ec60b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec616*/
          this->Items = 0; /*0x4ec61e*/
        }
      }
      this->Items = v4; /*0x4ec627*/
      this->Capacity = a2; /*0x4ec62f*/
      this->IsAllocated = a3 == 0; /*0x4ec632*/
      return 1; /*0x4ec638*/
    }
    else
    {
      return 0; /*0x4ec5df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec642*/
    return 1; /*0x4ec648*/
  }
}


// ==== 0x004EC650  _VectorClass_PAVSideClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SideClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ec65d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ec663*/
    *(_DWORD *)(this + 4) = 0; /*0x4ec66b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ec66e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ec671*/
}


// ==== 0x004EC680  _VectorClass_PAVSideClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SideClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ec680*/
    return 0; /*0x4ec688*/
  v3 = *(_DWORD *)(this + 8); /*0x4ec68e*/
  result = 0; /*0x4ec691*/
  if ( v3 <= 0 ) /*0x4ec695*/
    return -1; /*0x4ec6ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ec69b*/
  {
    if ( ++result >= v3 ) /*0x4ec6aa*/
      return -1; /*0x4ec6aa*/
  }
  return result; /*0x4ec68a*/
}


// ==== 0x004EC6C0  _VectorClass_PAVSideClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SideClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ec6c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ec6d5*/
  else
    return 0; /*0x4ec6c7*/
}


// ==== 0x004EC6E0  _DynamicVectorClass_PAVSideClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_CampaignClass::sub_4EC6E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ec6ec*/
  {
    this->IsInitialized = 0; /*0x4ec6f2*/
    if ( a3 ) /*0x4ec6f8*/
      v4 = a3; /*0x4ec70e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ec70a*/
    this->IsInitialized = 1; /*0x4ec712*/
    if ( !v4 ) /*0x4ec716*/
      return 0; /*0x4ec78a*/
    if ( this->Items ) /*0x4ec718*/
    {
      v5 = this->q008; /*0x4ec71f*/
      if ( a2 < v5 ) /*0x4ec724*/
        v5 = a2; /*0x4ec726*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec72c*/
        ++i; /*0x4ec731*/
      if ( this->IsAllocated ) /*0x4ec73e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec749*/
        this->Items = 0; /*0x4ec751*/
      }
    }
    this->Items = v4; /*0x4ec75a*/
    this->q008 = a2; /*0x4ec762*/
    this->IsAllocated = a3 == 0; /*0x4ec765*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec76e*/
  }
  v7 = this->q008; /*0x4ec771*/
  if ( v7 < this->Items ) /*0x4ec779*/
    this->Items = v7; /*0x4ec77b*/
  return 1; /*0x4ec77e*/
}


// ==== 0x004EC790  _DynamicVectorClass_PAVSideClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_CampaignClass::sub_4EC790(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ec790*/
  result = 0; /*0x4ec793*/
  if ( v2 <= 0 ) /*0x4ec798*/
    return -1; /*0x4ec7af*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ec79e*/
  {
    if ( ++result >= v2 ) /*0x4ec7ad*/
      return -1; /*0x4ec7ad*/
  }
  return result; /*0x4ec7b2*/
}


// ==== 0x004EC7C0  _VectorClass_PAVHouseTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_HouseTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ec7c2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ec7cd*/
  {
    v3 = 0; /*0x4ec7cf*/
    if ( v2 <= 0 ) /*0x4ec7d3*/
      return 1; /*0x4ec7f3*/
    v4 = (_DWORD *)this->Items; /*0x4ec7d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ec7db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ec7e4*/
    {
      ++v3; /*0x4ec7e6*/
      ++v4; /*0x4ec7e7*/
      if ( v3 >= v2 ) /*0x4ec7ec*/
        return 1; /*0x4ec7ec*/
    }
  }
  return 0; /*0x4ec7ee*/
}


// ==== 0x004EC800  _VectorClass_PAVHouseTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_HouseTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ec80c*/
  {
    this->IsInitialized = 0; /*0x4ec816*/
    if ( a3 ) /*0x4ec81c*/
      v4 = a3; /*0x4ec832*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ec82e*/
    this->IsInitialized = 1; /*0x4ec836*/
    if ( v4 ) /*0x4ec83a*/
    {
      if ( this->Items ) /*0x4ec845*/
      {
        v6 = this->Capacity; /*0x4ec84c*/
        if ( a2 < v6 ) /*0x4ec851*/
          v6 = a2; /*0x4ec853*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec859*/
          ++i; /*0x4ec85e*/
        if ( this->IsAllocated ) /*0x4ec86b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec876*/
          this->Items = 0; /*0x4ec87e*/
        }
      }
      this->Items = v4; /*0x4ec887*/
      this->Capacity = a2; /*0x4ec88f*/
      this->IsAllocated = a3 == 0; /*0x4ec892*/
      return 1; /*0x4ec898*/
    }
    else
    {
      return 0; /*0x4ec83f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec8a2*/
    return 1; /*0x4ec8a8*/
  }
}


// ==== 0x004EC8B0  _VectorClass_PAVHouseTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_HouseTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ec8bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ec8c3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ec8cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ec8ce*/
  *(_DWORD *)(this + 8) = 0; /*0x4ec8d1*/
}


// ==== 0x004EC8E0  _VectorClass_PAVHouseTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_HouseTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ec8e0*/
    return 0; /*0x4ec8e8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ec8ee*/
  result = 0; /*0x4ec8f1*/
  if ( v3 <= 0 ) /*0x4ec8f5*/
    return -1; /*0x4ec90c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ec8fb*/
  {
    if ( ++result >= v3 ) /*0x4ec90a*/
      return -1; /*0x4ec90a*/
  }
  return result; /*0x4ec8ea*/
}


// ==== 0x004EC920  _VectorClass_PAVHouseTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_HouseTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ec920*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ec935*/
  else
    return 0; /*0x4ec927*/
}


// ==== 0x004EC940  _DynamicVectorClass_PAVHouseTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_HouseTypeClass::sub_4EC940(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ec94c*/
  {
    this->IsInitialized = 0; /*0x4ec952*/
    if ( a3 ) /*0x4ec958*/
      v4 = a3; /*0x4ec96e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ec96a*/
    this->IsInitialized = 1; /*0x4ec972*/
    if ( !v4 ) /*0x4ec976*/
      return 0; /*0x4ec9ea*/
    if ( this->Items ) /*0x4ec978*/
    {
      v5 = this->q008; /*0x4ec97f*/
      if ( a2 < v5 ) /*0x4ec984*/
        v5 = a2; /*0x4ec986*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ec98c*/
        ++i; /*0x4ec991*/
      if ( this->IsAllocated ) /*0x4ec99e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ec9a9*/
        this->Items = 0; /*0x4ec9b1*/
      }
    }
    this->Items = v4; /*0x4ec9ba*/
    this->q008 = a2; /*0x4ec9c2*/
    this->IsAllocated = a3 == 0; /*0x4ec9c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ec9ce*/
  }
  v7 = this->q008; /*0x4ec9d1*/
  if ( v7 < this->Items ) /*0x4ec9d9*/
    this->Items = v7; /*0x4ec9db*/
  return 1; /*0x4ec9de*/
}


// ==== 0x004EC9F0  _DynamicVectorClass_PAVHouseTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_HouseTypeClass::sub_4EC9F0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ec9f0*/
  result = 0; /*0x4ec9f3*/
  if ( v2 <= 0 ) /*0x4ec9f8*/
    return -1; /*0x4eca0f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ec9fe*/
  {
    if ( ++result >= v2 ) /*0x4eca0d*/
      return -1; /*0x4eca0d*/
  }
  return result; /*0x4eca12*/
}


// ==== 0x004ECA20  _VectorClass_PAVTaskForceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TaskForceClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eca22*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eca2d*/
  {
    v3 = 0; /*0x4eca2f*/
    if ( v2 <= 0 ) /*0x4eca33*/
      return 1; /*0x4eca53*/
    v4 = (_DWORD *)this->Items; /*0x4eca35*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eca3b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eca44*/
    {
      ++v3; /*0x4eca46*/
      ++v4; /*0x4eca47*/
      if ( v3 >= v2 ) /*0x4eca4c*/
        return 1; /*0x4eca4c*/
    }
  }
  return 0; /*0x4eca4e*/
}


// ==== 0x004ECA60  _VectorClass_PAVTaskForceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TaskForceClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eca6c*/
  {
    this->IsInitialized = 0; /*0x4eca76*/
    if ( a3 ) /*0x4eca7c*/
      v4 = a3; /*0x4eca92*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eca8e*/
    this->IsInitialized = 1; /*0x4eca96*/
    if ( v4 ) /*0x4eca9a*/
    {
      if ( this->Items ) /*0x4ecaa5*/
      {
        v6 = this->Capacity; /*0x4ecaac*/
        if ( a2 < v6 ) /*0x4ecab1*/
          v6 = a2; /*0x4ecab3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ecab9*/
          ++i; /*0x4ecabe*/
        if ( this->IsAllocated ) /*0x4ecacb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ecad6*/
          this->Items = 0; /*0x4ecade*/
        }
      }
      this->Items = v4; /*0x4ecae7*/
      this->Capacity = a2; /*0x4ecaef*/
      this->IsAllocated = a3 == 0; /*0x4ecaf2*/
      return 1; /*0x4ecaf8*/
    }
    else
    {
      return 0; /*0x4eca9f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ecb02*/
    return 1; /*0x4ecb08*/
  }
}


// ==== 0x004ECB10  _VectorClass_PAVTaskForceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TaskForceClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ecb1d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ecb23*/
    *(_DWORD *)(this + 4) = 0; /*0x4ecb2b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ecb2e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ecb31*/
}


// ==== 0x004ECB40  _VectorClass_PAVTaskForceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TaskForceClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ecb40*/
    return 0; /*0x4ecb48*/
  v3 = *(_DWORD *)(this + 8); /*0x4ecb4e*/
  result = 0; /*0x4ecb51*/
  if ( v3 <= 0 ) /*0x4ecb55*/
    return -1; /*0x4ecb6c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ecb5b*/
  {
    if ( ++result >= v3 ) /*0x4ecb6a*/
      return -1; /*0x4ecb6a*/
  }
  return result; /*0x4ecb4a*/
}


// ==== 0x004ECB80  _VectorClass_PAVTaskForceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TaskForceClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ecb80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ecb95*/
  else
    return 0; /*0x4ecb87*/
}


// ==== 0x004ECBA0  _DynamicVectorClass_PAVTaskForceClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_HouseTypeClass::sub_4ECBA0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ecbac*/
  {
    this->IsInitialized = 0; /*0x4ecbb2*/
    if ( a3 ) /*0x4ecbb8*/
      v4 = a3; /*0x4ecbce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ecbca*/
    this->IsInitialized = 1; /*0x4ecbd2*/
    if ( !v4 ) /*0x4ecbd6*/
      return 0; /*0x4ecc4a*/
    if ( this->Items ) /*0x4ecbd8*/
    {
      v5 = this->q008; /*0x4ecbdf*/
      if ( a2 < v5 ) /*0x4ecbe4*/
        v5 = a2; /*0x4ecbe6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ecbec*/
        ++i; /*0x4ecbf1*/
      if ( this->IsAllocated ) /*0x4ecbfe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ecc09*/
        this->Items = 0; /*0x4ecc11*/
      }
    }
    this->Items = v4; /*0x4ecc1a*/
    this->q008 = a2; /*0x4ecc22*/
    this->IsAllocated = a3 == 0; /*0x4ecc25*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ecc2e*/
  }
  v7 = this->q008; /*0x4ecc31*/
  if ( v7 < this->Items ) /*0x4ecc39*/
    this->Items = v7; /*0x4ecc3b*/
  return 1; /*0x4ecc3e*/
}


// ==== 0x004ECC50  _DynamicVectorClass_PAVTaskForceClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_HouseTypeClass::sub_4ECC50(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ecc50*/
  result = 0; /*0x4ecc53*/
  if ( v2 <= 0 ) /*0x4ecc58*/
    return -1; /*0x4ecc6f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ecc5e*/
  {
    if ( ++result >= v2 ) /*0x4ecc6d*/
      return -1; /*0x4ecc6d*/
  }
  return result; /*0x4ecc72*/
}


// ==== 0x004ECC80  _VectorClass_PAVTeamTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TeamTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ecc82*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ecc8d*/
  {
    v3 = 0; /*0x4ecc8f*/
    if ( v2 <= 0 ) /*0x4ecc93*/
      return 1; /*0x4eccb3*/
    v4 = (_DWORD *)this->Items; /*0x4ecc95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ecc9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ecca4*/
    {
      ++v3; /*0x4ecca6*/
      ++v4; /*0x4ecca7*/
      if ( v3 >= v2 ) /*0x4eccac*/
        return 1; /*0x4eccac*/
    }
  }
  return 0; /*0x4eccae*/
}


// ==== 0x004ECCC0  _VectorClass_PAVTeamTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TeamTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ecccc*/
  {
    this->IsInitialized = 0; /*0x4eccd6*/
    if ( a3 ) /*0x4eccdc*/
      v4 = a3; /*0x4eccf2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eccee*/
    this->IsInitialized = 1; /*0x4eccf6*/
    if ( v4 ) /*0x4eccfa*/
    {
      if ( this->Items ) /*0x4ecd05*/
      {
        v6 = this->Capacity; /*0x4ecd0c*/
        if ( a2 < v6 ) /*0x4ecd11*/
          v6 = a2; /*0x4ecd13*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ecd19*/
          ++i; /*0x4ecd1e*/
        if ( this->IsAllocated ) /*0x4ecd2b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ecd36*/
          this->Items = 0; /*0x4ecd3e*/
        }
      }
      this->Items = v4; /*0x4ecd47*/
      this->Capacity = a2; /*0x4ecd4f*/
      this->IsAllocated = a3 == 0; /*0x4ecd52*/
      return 1; /*0x4ecd58*/
    }
    else
    {
      return 0; /*0x4eccff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ecd62*/
    return 1; /*0x4ecd68*/
  }
}


// ==== 0x004ECD70  _VectorClass_PAVTeamTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TeamTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ecd7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ecd83*/
    *(_DWORD *)(this + 4) = 0; /*0x4ecd8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ecd8e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ecd91*/
}


// ==== 0x004ECDA0  _VectorClass_PAVTeamTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TeamTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ecda0*/
    return 0; /*0x4ecda8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ecdae*/
  result = 0; /*0x4ecdb1*/
  if ( v3 <= 0 ) /*0x4ecdb5*/
    return -1; /*0x4ecdcc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ecdbb*/
  {
    if ( ++result >= v3 ) /*0x4ecdca*/
      return -1; /*0x4ecdca*/
  }
  return result; /*0x4ecdaa*/
}


// ==== 0x004ECDE0  _VectorClass_PAVTeamTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TeamTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ecde0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ecdf5*/
  else
    return 0; /*0x4ecde7*/
}


// ==== 0x004ECE00  _DynamicVectorClass_PAVTeamTypeClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_HouseTypeClass::sub_4ECE00(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ece0c*/
  {
    this->IsInitialized = 0; /*0x4ece12*/
    if ( a3 ) /*0x4ece18*/
      v4 = a3; /*0x4ece2e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ece2a*/
    this->IsInitialized = 1; /*0x4ece32*/
    if ( !v4 ) /*0x4ece36*/
      return 0; /*0x4eceaa*/
    if ( this->Items ) /*0x4ece38*/
    {
      v5 = this->q008; /*0x4ece3f*/
      if ( a2 < v5 ) /*0x4ece44*/
        v5 = a2; /*0x4ece46*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ece4c*/
        ++i; /*0x4ece51*/
      if ( this->IsAllocated ) /*0x4ece5e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ece69*/
        this->Items = 0; /*0x4ece71*/
      }
    }
    this->Items = v4; /*0x4ece7a*/
    this->q008 = a2; /*0x4ece82*/
    this->IsAllocated = a3 == 0; /*0x4ece85*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ece8e*/
  }
  v7 = this->q008; /*0x4ece91*/
  if ( v7 < this->Items ) /*0x4ece99*/
    this->Items = v7; /*0x4ece9b*/
  return 1; /*0x4ece9e*/
}


// ==== 0x004ECEB0  _DynamicVectorClass_PAVTeamTypeClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_HouseTypeClass::sub_4ECEB0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eceb0*/
  result = 0; /*0x4eceb3*/
  if ( v2 <= 0 ) /*0x4eceb8*/
    return -1; /*0x4ececf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ecebe*/
  {
    if ( ++result >= v2 ) /*0x4ececd*/
      return -1; /*0x4ececd*/
  }
  return result; /*0x4eced2*/
}


// ==== 0x004ECEE0  _VectorClass_PAVScriptTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ScriptTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ecee2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eceed*/
  {
    v3 = 0; /*0x4eceef*/
    if ( v2 <= 0 ) /*0x4ecef3*/
      return 1; /*0x4ecf13*/
    v4 = (_DWORD *)this->Items; /*0x4ecef5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ecefb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ecf04*/
    {
      ++v3; /*0x4ecf06*/
      ++v4; /*0x4ecf07*/
      if ( v3 >= v2 ) /*0x4ecf0c*/
        return 1; /*0x4ecf0c*/
    }
  }
  return 0; /*0x4ecf0e*/
}


// ==== 0x004ECF20  _VectorClass_PAVScriptTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ScriptTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ecf2c*/
  {
    this->IsInitialized = 0; /*0x4ecf36*/
    if ( a3 ) /*0x4ecf3c*/
      v4 = a3; /*0x4ecf52*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ecf4e*/
    this->IsInitialized = 1; /*0x4ecf56*/
    if ( v4 ) /*0x4ecf5a*/
    {
      if ( this->Items ) /*0x4ecf65*/
      {
        v6 = this->Capacity; /*0x4ecf6c*/
        if ( a2 < v6 ) /*0x4ecf71*/
          v6 = a2; /*0x4ecf73*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ecf79*/
          ++i; /*0x4ecf7e*/
        if ( this->IsAllocated ) /*0x4ecf8b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ecf96*/
          this->Items = 0; /*0x4ecf9e*/
        }
      }
      this->Items = v4; /*0x4ecfa7*/
      this->Capacity = a2; /*0x4ecfaf*/
      this->IsAllocated = a3 == 0; /*0x4ecfb2*/
      return 1; /*0x4ecfb8*/
    }
    else
    {
      return 0; /*0x4ecf5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ecfc2*/
    return 1; /*0x4ecfc8*/
  }
}


// ==== 0x004ECFD0  _VectorClass_PAVScriptTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ScriptTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ecfdd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ecfe3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ecfeb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ecfee*/
  *(_DWORD *)(this + 8) = 0; /*0x4ecff1*/
}


// ==== 0x004ED000  _VectorClass_PAVScriptTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ScriptTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ed000*/
    return 0; /*0x4ed008*/
  v3 = *(_DWORD *)(this + 8); /*0x4ed00e*/
  result = 0; /*0x4ed011*/
  if ( v3 <= 0 ) /*0x4ed015*/
    return -1; /*0x4ed02c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ed01b*/
  {
    if ( ++result >= v3 ) /*0x4ed02a*/
      return -1; /*0x4ed02a*/
  }
  return result; /*0x4ed00a*/
}


// ==== 0x004ED040  _VectorClass_PAVScriptTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ScriptTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ed040*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ed055*/
  else
    return 0; /*0x4ed047*/
}


// ==== 0x004ED060  _DynamicVectorClass_PAVScriptTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ScriptTypeClass::sub_4ED060(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed06c*/
  {
    this->IsInitialized = 0; /*0x4ed072*/
    if ( a3 ) /*0x4ed078*/
      v4 = a3; /*0x4ed08e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ed08a*/
    this->IsInitialized = 1; /*0x4ed092*/
    if ( !v4 ) /*0x4ed096*/
      return 0; /*0x4ed10a*/
    if ( this->Items ) /*0x4ed098*/
    {
      v5 = this->q008; /*0x4ed09f*/
      if ( a2 < v5 ) /*0x4ed0a4*/
        v5 = a2; /*0x4ed0a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ed0ac*/
        ++i; /*0x4ed0b1*/
      if ( this->IsAllocated ) /*0x4ed0be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ed0c9*/
        this->Items = 0; /*0x4ed0d1*/
      }
    }
    this->Items = v4; /*0x4ed0da*/
    this->q008 = a2; /*0x4ed0e2*/
    this->IsAllocated = a3 == 0; /*0x4ed0e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ed0ee*/
  }
  v7 = this->q008; /*0x4ed0f1*/
  if ( v7 < this->Items ) /*0x4ed0f9*/
    this->Items = v7; /*0x4ed0fb*/
  return 1; /*0x4ed0fe*/
}


// ==== 0x004ED110  _DynamicVectorClass_PAVScriptTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ScriptTypeClass::sub_4ED110(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ed110*/
  result = 0; /*0x4ed113*/
  if ( v2 <= 0 ) /*0x4ed118*/
    return -1; /*0x4ed12f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ed11e*/
  {
    if ( ++result >= v2 ) /*0x4ed12d*/
      return -1; /*0x4ed12d*/
  }
  return result; /*0x4ed132*/
}


// ==== 0x004ED140  _VectorClass_PAVOverlayTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_OverlayTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ed142*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ed14d*/
  {
    v3 = 0; /*0x4ed14f*/
    if ( v2 <= 0 ) /*0x4ed153*/
      return 1; /*0x4ed173*/
    v4 = (_DWORD *)this->Items; /*0x4ed155*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ed15b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ed164*/
    {
      ++v3; /*0x4ed166*/
      ++v4; /*0x4ed167*/
      if ( v3 >= v2 ) /*0x4ed16c*/
        return 1; /*0x4ed16c*/
    }
  }
  return 0; /*0x4ed16e*/
}


// ==== 0x004ED180  _VectorClass_PAVOverlayTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_OverlayTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ed18c*/
  {
    this->IsInitialized = 0; /*0x4ed196*/
    if ( a3 ) /*0x4ed19c*/
      v4 = a3; /*0x4ed1b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ed1ae*/
    this->IsInitialized = 1; /*0x4ed1b6*/
    if ( v4 ) /*0x4ed1ba*/
    {
      if ( this->Items ) /*0x4ed1c5*/
      {
        v6 = this->Capacity; /*0x4ed1cc*/
        if ( a2 < v6 ) /*0x4ed1d1*/
          v6 = a2; /*0x4ed1d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ed1d9*/
          ++i; /*0x4ed1de*/
        if ( this->IsAllocated ) /*0x4ed1eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ed1f6*/
          this->Items = 0; /*0x4ed1fe*/
        }
      }
      this->Items = v4; /*0x4ed207*/
      this->Capacity = a2; /*0x4ed20f*/
      this->IsAllocated = a3 == 0; /*0x4ed212*/
      return 1; /*0x4ed218*/
    }
    else
    {
      return 0; /*0x4ed1bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ed222*/
    return 1; /*0x4ed228*/
  }
}


// ==== 0x004ED230  _VectorClass_PAVOverlayTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_OverlayTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ed23d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ed243*/
    *(_DWORD *)(this + 4) = 0; /*0x4ed24b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ed24e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ed251*/
}


// ==== 0x004ED260  _VectorClass_PAVOverlayTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_OverlayTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ed260*/
    return 0; /*0x4ed268*/
  v3 = *(_DWORD *)(this + 8); /*0x4ed26e*/
  result = 0; /*0x4ed271*/
  if ( v3 <= 0 ) /*0x4ed275*/
    return -1; /*0x4ed28c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ed27b*/
  {
    if ( ++result >= v3 ) /*0x4ed28a*/
      return -1; /*0x4ed28a*/
  }
  return result; /*0x4ed26a*/
}


// ==== 0x004ED2A0  _VectorClass_PAVOverlayTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_OverlayTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ed2a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ed2b5*/
  else
    return 0; /*0x4ed2a7*/
}


// ==== 0x004ED2C0  _DynamicVectorClass_PAVOverlayTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ScriptTypeClass::sub_4ED2C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed2cc*/
  {
    this->IsInitialized = 0; /*0x4ed2d2*/
    if ( a3 ) /*0x4ed2d8*/
      v4 = a3; /*0x4ed2ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ed2ea*/
    this->IsInitialized = 1; /*0x4ed2f2*/
    if ( !v4 ) /*0x4ed2f6*/
      return 0; /*0x4ed36a*/
    if ( this->Items ) /*0x4ed2f8*/
    {
      v5 = this->q008; /*0x4ed2ff*/
      if ( a2 < v5 ) /*0x4ed304*/
        v5 = a2; /*0x4ed306*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ed30c*/
        ++i; /*0x4ed311*/
      if ( this->IsAllocated ) /*0x4ed31e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ed329*/
        this->Items = 0; /*0x4ed331*/
      }
    }
    this->Items = v4; /*0x4ed33a*/
    this->q008 = a2; /*0x4ed342*/
    this->IsAllocated = a3 == 0; /*0x4ed345*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ed34e*/
  }
  v7 = this->q008; /*0x4ed351*/
  if ( v7 < this->Items ) /*0x4ed359*/
    this->Items = v7; /*0x4ed35b*/
  return 1; /*0x4ed35e*/
}


// ==== 0x004ED370  _DynamicVectorClass_PAVOverlayTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ScriptTypeClass::sub_4ED370(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ed370*/
  result = 0; /*0x4ed373*/
  if ( v2 <= 0 ) /*0x4ed378*/
    return -1; /*0x4ed38f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ed37e*/
  {
    if ( ++result >= v2 ) /*0x4ed38d*/
      return -1; /*0x4ed38d*/
  }
  return result; /*0x4ed392*/
}


// ==== 0x004ED3A0  _VectorClass_PAVSmudgeTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SmudgeTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ed3a2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ed3ad*/
  {
    v3 = 0; /*0x4ed3af*/
    if ( v2 <= 0 ) /*0x4ed3b3*/
      return 1; /*0x4ed3d3*/
    v4 = (_DWORD *)this->Items; /*0x4ed3b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ed3bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ed3c4*/
    {
      ++v3; /*0x4ed3c6*/
      ++v4; /*0x4ed3c7*/
      if ( v3 >= v2 ) /*0x4ed3cc*/
        return 1; /*0x4ed3cc*/
    }
  }
  return 0; /*0x4ed3ce*/
}


// ==== 0x004ED3E0  _VectorClass_PAVSmudgeTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SmudgeTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ed3ec*/
  {
    this->IsInitialized = 0; /*0x4ed3f6*/
    if ( a3 ) /*0x4ed3fc*/
      v4 = a3; /*0x4ed412*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ed40e*/
    this->IsInitialized = 1; /*0x4ed416*/
    if ( v4 ) /*0x4ed41a*/
    {
      if ( this->Items ) /*0x4ed425*/
      {
        v6 = this->Capacity; /*0x4ed42c*/
        if ( a2 < v6 ) /*0x4ed431*/
          v6 = a2; /*0x4ed433*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ed439*/
          ++i; /*0x4ed43e*/
        if ( this->IsAllocated ) /*0x4ed44b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ed456*/
          this->Items = 0; /*0x4ed45e*/
        }
      }
      this->Items = v4; /*0x4ed467*/
      this->Capacity = a2; /*0x4ed46f*/
      this->IsAllocated = a3 == 0; /*0x4ed472*/
      return 1; /*0x4ed478*/
    }
    else
    {
      return 0; /*0x4ed41f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ed482*/
    return 1; /*0x4ed488*/
  }
}


// ==== 0x004ED490  _VectorClass_PAVSmudgeTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SmudgeTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ed49d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ed4a3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ed4ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ed4ae*/
  *(_DWORD *)(this + 8) = 0; /*0x4ed4b1*/
}


// ==== 0x004ED4C0  _VectorClass_PAVSmudgeTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SmudgeTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ed4c0*/
    return 0; /*0x4ed4c8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ed4ce*/
  result = 0; /*0x4ed4d1*/
  if ( v3 <= 0 ) /*0x4ed4d5*/
    return -1; /*0x4ed4ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ed4db*/
  {
    if ( ++result >= v3 ) /*0x4ed4ea*/
      return -1; /*0x4ed4ea*/
  }
  return result; /*0x4ed4ca*/
}


// ==== 0x004ED500  _VectorClass_PAVSmudgeTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SmudgeTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ed500*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ed515*/
  else
    return 0; /*0x4ed507*/
}


// ==== 0x004ED520  _DynamicVectorClass_PAVSmudgeTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4ED520(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed52c*/
  {
    this->IsInitialized = 0; /*0x4ed532*/
    if ( a3 ) /*0x4ed538*/
      v4 = a3; /*0x4ed54e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ed54a*/
    this->IsInitialized = 1; /*0x4ed552*/
    if ( !v4 ) /*0x4ed556*/
      return 0; /*0x4ed5ca*/
    if ( this->Items ) /*0x4ed558*/
    {
      v5 = this->q008; /*0x4ed55f*/
      if ( a2 < v5 ) /*0x4ed564*/
        v5 = a2; /*0x4ed566*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ed56c*/
        ++i; /*0x4ed571*/
      if ( this->IsAllocated ) /*0x4ed57e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ed589*/
        this->Items = 0; /*0x4ed591*/
      }
    }
    this->Items = v4; /*0x4ed59a*/
    this->q008 = a2; /*0x4ed5a2*/
    this->IsAllocated = a3 == 0; /*0x4ed5a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ed5ae*/
  }
  v7 = this->q008; /*0x4ed5b1*/
  if ( v7 < this->Items ) /*0x4ed5b9*/
    this->Items = v7; /*0x4ed5bb*/
  return 1; /*0x4ed5be*/
}


// ==== 0x004ED5D0  _DynamicVectorClass_PAVSmudgeTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4ED5D0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ed5d0*/
  result = 0; /*0x4ed5d3*/
  if ( v2 <= 0 ) /*0x4ed5d8*/
    return -1; /*0x4ed5ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ed5de*/
  {
    if ( ++result >= v2 ) /*0x4ed5ed*/
      return -1; /*0x4ed5ed*/
  }
  return result; /*0x4ed5f2*/
}


// ==== 0x004ED600  _VectorClass_PAVTerrainTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TerrainTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ed602*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ed60d*/
  {
    v3 = 0; /*0x4ed60f*/
    if ( v2 <= 0 ) /*0x4ed613*/
      return 1; /*0x4ed633*/
    v4 = (_DWORD *)this->Items; /*0x4ed615*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ed61b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ed624*/
    {
      ++v3; /*0x4ed626*/
      ++v4; /*0x4ed627*/
      if ( v3 >= v2 ) /*0x4ed62c*/
        return 1; /*0x4ed62c*/
    }
  }
  return 0; /*0x4ed62e*/
}


// ==== 0x004ED640  _VectorClass_PAVTerrainTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TerrainTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ed64c*/
  {
    this->IsInitialized = 0; /*0x4ed656*/
    if ( a3 ) /*0x4ed65c*/
      v4 = a3; /*0x4ed672*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ed66e*/
    this->IsInitialized = 1; /*0x4ed676*/
    if ( v4 ) /*0x4ed67a*/
    {
      if ( this->Items ) /*0x4ed685*/
      {
        v6 = this->Capacity; /*0x4ed68c*/
        if ( a2 < v6 ) /*0x4ed691*/
          v6 = a2; /*0x4ed693*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ed699*/
          ++i; /*0x4ed69e*/
        if ( this->IsAllocated ) /*0x4ed6ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ed6b6*/
          this->Items = 0; /*0x4ed6be*/
        }
      }
      this->Items = v4; /*0x4ed6c7*/
      this->Capacity = a2; /*0x4ed6cf*/
      this->IsAllocated = a3 == 0; /*0x4ed6d2*/
      return 1; /*0x4ed6d8*/
    }
    else
    {
      return 0; /*0x4ed67f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ed6e2*/
    return 1; /*0x4ed6e8*/
  }
}


// ==== 0x004ED6F0  _VectorClass_PAVTerrainTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TerrainTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ed6fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ed703*/
    *(_DWORD *)(this + 4) = 0; /*0x4ed70b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ed70e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ed711*/
}


// ==== 0x004ED720  _VectorClass_PAVTerrainTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TerrainTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ed720*/
    return 0; /*0x4ed728*/
  v3 = *(_DWORD *)(this + 8); /*0x4ed72e*/
  result = 0; /*0x4ed731*/
  if ( v3 <= 0 ) /*0x4ed735*/
    return -1; /*0x4ed74c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ed73b*/
  {
    if ( ++result >= v3 ) /*0x4ed74a*/
      return -1; /*0x4ed74a*/
  }
  return result; /*0x4ed72a*/
}


// ==== 0x004ED760  _VectorClass_PAVTerrainTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TerrainTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ed760*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ed775*/
  else
    return 0; /*0x4ed767*/
}


// ==== 0x004ED780  _DynamicVectorClass_PAVTerrainTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4ED780(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed78c*/
  {
    this->IsInitialized = 0; /*0x4ed792*/
    if ( a3 ) /*0x4ed798*/
      v4 = a3; /*0x4ed7ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ed7aa*/
    this->IsInitialized = 1; /*0x4ed7b2*/
    if ( !v4 ) /*0x4ed7b6*/
      return 0; /*0x4ed82a*/
    if ( this->Items ) /*0x4ed7b8*/
    {
      v5 = this->q008; /*0x4ed7bf*/
      if ( a2 < v5 ) /*0x4ed7c4*/
        v5 = a2; /*0x4ed7c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ed7cc*/
        ++i; /*0x4ed7d1*/
      if ( this->IsAllocated ) /*0x4ed7de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ed7e9*/
        this->Items = 0; /*0x4ed7f1*/
      }
    }
    this->Items = v4; /*0x4ed7fa*/
    this->q008 = a2; /*0x4ed802*/
    this->IsAllocated = a3 == 0; /*0x4ed805*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ed80e*/
  }
  v7 = this->q008; /*0x4ed811*/
  if ( v7 < this->Items ) /*0x4ed819*/
    this->Items = v7; /*0x4ed81b*/
  return 1; /*0x4ed81e*/
}


// ==== 0x004ED830  _DynamicVectorClass_PAVTerrainTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4ED830(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ed830*/
  result = 0; /*0x4ed833*/
  if ( v2 <= 0 ) /*0x4ed838*/
    return -1; /*0x4ed84f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ed83e*/
  {
    if ( ++result >= v2 ) /*0x4ed84d*/
      return -1; /*0x4ed84d*/
  }
  return result; /*0x4ed852*/
}


// ==== 0x004ED860  _VectorClass_PAVBuildingTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildingTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ed862*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ed86d*/
  {
    v3 = 0; /*0x4ed86f*/
    if ( v2 <= 0 ) /*0x4ed873*/
      return 1; /*0x4ed893*/
    v4 = (_DWORD *)this->Items; /*0x4ed875*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ed87b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ed884*/
    {
      ++v3; /*0x4ed886*/
      ++v4; /*0x4ed887*/
      if ( v3 >= v2 ) /*0x4ed88c*/
        return 1; /*0x4ed88c*/
    }
  }
  return 0; /*0x4ed88e*/
}


// ==== 0x004ED8A0  _VectorClass_PAVBuildingTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildingTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ed8ac*/
  {
    this->IsInitialized = 0; /*0x4ed8b6*/
    if ( a3 ) /*0x4ed8bc*/
      v4 = a3; /*0x4ed8d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ed8ce*/
    this->IsInitialized = 1; /*0x4ed8d6*/
    if ( v4 ) /*0x4ed8da*/
    {
      if ( this->Items ) /*0x4ed8e5*/
      {
        v6 = this->Capacity; /*0x4ed8ec*/
        if ( a2 < v6 ) /*0x4ed8f1*/
          v6 = a2; /*0x4ed8f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ed8f9*/
          ++i; /*0x4ed8fe*/
        if ( this->IsAllocated ) /*0x4ed90b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ed916*/
          this->Items = 0; /*0x4ed91e*/
        }
      }
      this->Items = v4; /*0x4ed927*/
      this->Capacity = a2; /*0x4ed92f*/
      this->IsAllocated = a3 == 0; /*0x4ed932*/
      return 1; /*0x4ed938*/
    }
    else
    {
      return 0; /*0x4ed8df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ed942*/
    return 1; /*0x4ed948*/
  }
}


// ==== 0x004ED950  ?$VectorClass@PAVBuildingTypeClass@@::Cleanup4  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Cleanup4(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ed95d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ed963*/
    *(_DWORD *)(this + 4) = 0; /*0x4ed96b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ed96e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ed971*/
}


// ==== 0x004ED980  _VectorClass_PAVBuildingTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildingTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ed980*/
    return 0; /*0x4ed988*/
  v3 = *(_DWORD *)(this + 8); /*0x4ed98e*/
  result = 0; /*0x4ed991*/
  if ( v3 <= 0 ) /*0x4ed995*/
    return -1; /*0x4ed9ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ed99b*/
  {
    if ( ++result >= v3 ) /*0x4ed9aa*/
      return -1; /*0x4ed9aa*/
  }
  return result; /*0x4ed98a*/
}


// ==== 0x004ED9C0  _VectorClass_PAVBuildingTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildingTypeClass::Remove(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ed9c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ed9d5*/
  else
    return 0; /*0x4ed9c7*/
}


// ==== 0x004ED9E0  _DynamicVectorClass_PAVBuildingTypeClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4ED9E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ed9ec*/
  {
    this->IsInitialized = 0; /*0x4ed9f2*/
    if ( a3 ) /*0x4ed9f8*/
      v4 = a3; /*0x4eda0e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eda0a*/
    this->IsInitialized = 1; /*0x4eda12*/
    if ( !v4 ) /*0x4eda16*/
      return 0; /*0x4eda8a*/
    if ( this->Items ) /*0x4eda18*/
    {
      v5 = this->q008; /*0x4eda1f*/
      if ( a2 < v5 ) /*0x4eda24*/
        v5 = a2; /*0x4eda26*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eda2c*/
        ++i; /*0x4eda31*/
      if ( this->IsAllocated ) /*0x4eda3e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eda49*/
        this->Items = 0; /*0x4eda51*/
      }
    }
    this->Items = v4; /*0x4eda5a*/
    this->q008 = a2; /*0x4eda62*/
    this->IsAllocated = a3 == 0; /*0x4eda65*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eda6e*/
  }
  v7 = this->q008; /*0x4eda71*/
  if ( v7 < this->Items ) /*0x4eda79*/
    this->Items = v7; /*0x4eda7b*/
  return 1; /*0x4eda7e*/
}


// ==== 0x004EDA90  _DynamicVectorClass_PAVBuildingTypeClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SmudgeTypeClass::sub_4EDA90(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eda90*/
  result = 0; /*0x4eda93*/
  if ( v2 <= 0 ) /*0x4eda98*/
    return -1; /*0x4edaaf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eda9e*/
  {
    if ( ++result >= v2 ) /*0x4edaad*/
      return -1; /*0x4edaad*/
  }
  return result; /*0x4edab2*/
}


// ==== 0x004EDAC0  _VectorClass_PAVAircraftTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AircraftTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4edac2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4edacd*/
  {
    v3 = 0; /*0x4edacf*/
    if ( v2 <= 0 ) /*0x4edad3*/
      return 1; /*0x4edaf3*/
    v4 = (_DWORD *)this->Items; /*0x4edad5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4edadb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4edae4*/
    {
      ++v3; /*0x4edae6*/
      ++v4; /*0x4edae7*/
      if ( v3 >= v2 ) /*0x4edaec*/
        return 1; /*0x4edaec*/
    }
  }
  return 0; /*0x4edaee*/
}


// ==== 0x004EDB00  _VectorClass_PAVAircraftTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AircraftTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4edb0c*/
  {
    this->IsInitialized = 0; /*0x4edb16*/
    if ( a3 ) /*0x4edb1c*/
      v4 = a3; /*0x4edb32*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4edb2e*/
    this->IsInitialized = 1; /*0x4edb36*/
    if ( v4 ) /*0x4edb3a*/
    {
      if ( this->Items ) /*0x4edb45*/
      {
        v6 = this->Capacity; /*0x4edb4c*/
        if ( a2 < v6 ) /*0x4edb51*/
          v6 = a2; /*0x4edb53*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4edb59*/
          ++i; /*0x4edb5e*/
        if ( this->IsAllocated ) /*0x4edb6b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4edb76*/
          this->Items = 0; /*0x4edb7e*/
        }
      }
      this->Items = v4; /*0x4edb87*/
      this->Capacity = a2; /*0x4edb8f*/
      this->IsAllocated = a3 == 0; /*0x4edb92*/
      return 1; /*0x4edb98*/
    }
    else
    {
      return 0; /*0x4edb3f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4edba2*/
    return 1; /*0x4edba8*/
  }
}


// ==== 0x004EDBB0  _VectorClass_PAVAircraftTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AircraftTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4edbbd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4edbc3*/
    *(_DWORD *)(this + 4) = 0; /*0x4edbcb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4edbce*/
  *(_DWORD *)(this + 8) = 0; /*0x4edbd1*/
}


// ==== 0x004EDBE0  _VectorClass_PAVAircraftTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AircraftTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4edbe0*/
    return 0; /*0x4edbe8*/
  v3 = *(_DWORD *)(this + 8); /*0x4edbee*/
  result = 0; /*0x4edbf1*/
  if ( v3 <= 0 ) /*0x4edbf5*/
    return -1; /*0x4edc0c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4edbfb*/
  {
    if ( ++result >= v3 ) /*0x4edc0a*/
      return -1; /*0x4edc0a*/
  }
  return result; /*0x4edbea*/
}


// ==== 0x004EDC20  _VectorClass_PAVAircraftTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AircraftTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4edc20*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4edc35*/
  else
    return 0; /*0x4edc27*/
}


// ==== 0x004EDC40  _DynamicVectorClass_PAVAircraftTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AircraftTypeClass::sub_4EDC40(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4edc4c*/
  {
    this->IsInitialized = 0; /*0x4edc52*/
    if ( a3 ) /*0x4edc58*/
      v4 = a3; /*0x4edc6e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4edc6a*/
    this->IsInitialized = 1; /*0x4edc72*/
    if ( !v4 ) /*0x4edc76*/
      return 0; /*0x4edcea*/
    if ( this->Items ) /*0x4edc78*/
    {
      v5 = this->q008; /*0x4edc7f*/
      if ( a2 < v5 ) /*0x4edc84*/
        v5 = a2; /*0x4edc86*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4edc8c*/
        ++i; /*0x4edc91*/
      if ( this->IsAllocated ) /*0x4edc9e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4edca9*/
        this->Items = 0; /*0x4edcb1*/
      }
    }
    this->Items = v4; /*0x4edcba*/
    this->q008 = a2; /*0x4edcc2*/
    this->IsAllocated = a3 == 0; /*0x4edcc5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4edcce*/
  }
  v7 = this->q008; /*0x4edcd1*/
  if ( v7 < this->Items ) /*0x4edcd9*/
    this->Items = v7; /*0x4edcdb*/
  return 1; /*0x4edcde*/
}


// ==== 0x004EDCF0  _DynamicVectorClass_PAVAircraftTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AircraftTypeClass::sub_4EDCF0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4edcf0*/
  result = 0; /*0x4edcf3*/
  if ( v2 <= 0 ) /*0x4edcf8*/
    return -1; /*0x4edd0f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4edcfe*/
  {
    if ( ++result >= v2 ) /*0x4edd0d*/
      return -1; /*0x4edd0d*/
  }
  return result; /*0x4edd12*/
}


// ==== 0x004EDD20  _VectorClass_PAVUnitTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_UnitTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4edd22*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4edd2d*/
  {
    v3 = 0; /*0x4edd2f*/
    if ( v2 <= 0 ) /*0x4edd33*/
      return 1; /*0x4edd53*/
    v4 = (_DWORD *)this->Items; /*0x4edd35*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4edd3b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4edd44*/
    {
      ++v3; /*0x4edd46*/
      ++v4; /*0x4edd47*/
      if ( v3 >= v2 ) /*0x4edd4c*/
        return 1; /*0x4edd4c*/
    }
  }
  return 0; /*0x4edd4e*/
}


// ==== 0x004EDD60  _VectorClass_PAVUnitTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_UnitTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4edd6c*/
  {
    this->IsInitialized = 0; /*0x4edd76*/
    if ( a3 ) /*0x4edd7c*/
      v4 = a3; /*0x4edd92*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4edd8e*/
    this->IsInitialized = 1; /*0x4edd96*/
    if ( v4 ) /*0x4edd9a*/
    {
      if ( this->Items ) /*0x4edda5*/
      {
        v6 = this->Capacity; /*0x4eddac*/
        if ( a2 < v6 ) /*0x4eddb1*/
          v6 = a2; /*0x4eddb3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eddb9*/
          ++i; /*0x4eddbe*/
        if ( this->IsAllocated ) /*0x4eddcb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eddd6*/
          this->Items = 0; /*0x4eddde*/
        }
      }
      this->Items = v4; /*0x4edde7*/
      this->Capacity = a2; /*0x4eddef*/
      this->IsAllocated = a3 == 0; /*0x4eddf2*/
      return 1; /*0x4eddf8*/
    }
    else
    {
      return 0; /*0x4edd9f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ede02*/
    return 1; /*0x4ede08*/
  }
}


// ==== 0x004EDE10  _VectorClass_PAVUnitTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_UnitTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ede1d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ede23*/
    *(_DWORD *)(this + 4) = 0; /*0x4ede2b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ede2e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ede31*/
}


// ==== 0x004EDE40  _VectorClass_PAVUnitTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_UnitTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ede40*/
    return 0; /*0x4ede48*/
  v3 = *(_DWORD *)(this + 8); /*0x4ede4e*/
  result = 0; /*0x4ede51*/
  if ( v3 <= 0 ) /*0x4ede55*/
    return -1; /*0x4ede6c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ede5b*/
  {
    if ( ++result >= v3 ) /*0x4ede6a*/
      return -1; /*0x4ede6a*/
  }
  return result; /*0x4ede4a*/
}


// ==== 0x004EDE80  _VectorClass_PAVUnitTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_UnitTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ede80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ede95*/
  else
    return 0; /*0x4ede87*/
}


// ==== 0x004EDEA0  _DynamicVectorClass_PAVUnitTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AircraftTypeClass::sub_4EDEA0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4edeac*/
  {
    this->IsInitialized = 0; /*0x4edeb2*/
    if ( a3 ) /*0x4edeb8*/
      v4 = a3; /*0x4edece*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4edeca*/
    this->IsInitialized = 1; /*0x4eded2*/
    if ( !v4 ) /*0x4eded6*/
      return 0; /*0x4edf4a*/
    if ( this->Items ) /*0x4eded8*/
    {
      v5 = this->q008; /*0x4ededf*/
      if ( a2 < v5 ) /*0x4edee4*/
        v5 = a2; /*0x4edee6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4edeec*/
        ++i; /*0x4edef1*/
      if ( this->IsAllocated ) /*0x4edefe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4edf09*/
        this->Items = 0; /*0x4edf11*/
      }
    }
    this->Items = v4; /*0x4edf1a*/
    this->q008 = a2; /*0x4edf22*/
    this->IsAllocated = a3 == 0; /*0x4edf25*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4edf2e*/
  }
  v7 = this->q008; /*0x4edf31*/
  if ( v7 < this->Items ) /*0x4edf39*/
    this->Items = v7; /*0x4edf3b*/
  return 1; /*0x4edf3e*/
}


// ==== 0x004EDF50  _DynamicVectorClass_PAVUnitTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AircraftTypeClass::sub_4EDF50(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4edf50*/
  result = 0; /*0x4edf53*/
  if ( v2 <= 0 ) /*0x4edf58*/
    return -1; /*0x4edf6f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4edf5e*/
  {
    if ( ++result >= v2 ) /*0x4edf6d*/
      return -1; /*0x4edf6d*/
  }
  return result; /*0x4edf72*/
}


// ==== 0x004EDF80  _VectorClass_PAVAnimTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AnimTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4edf82*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4edf8d*/
  {
    v3 = 0; /*0x4edf8f*/
    if ( v2 <= 0 ) /*0x4edf93*/
      return 1; /*0x4edfb3*/
    v4 = (_DWORD *)this->Items; /*0x4edf95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4edf9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4edfa4*/
    {
      ++v3; /*0x4edfa6*/
      ++v4; /*0x4edfa7*/
      if ( v3 >= v2 ) /*0x4edfac*/
        return 1; /*0x4edfac*/
    }
  }
  return 0; /*0x4edfae*/
}


// ==== 0x004EDFC0  _VectorClass_PAVAnimTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AnimTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4edfcc*/
  {
    this->IsInitialized = 0; /*0x4edfd6*/
    if ( a3 ) /*0x4edfdc*/
      v4 = a3; /*0x4edff2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4edfee*/
    this->IsInitialized = 1; /*0x4edff6*/
    if ( v4 ) /*0x4edffa*/
    {
      if ( this->Items ) /*0x4ee005*/
      {
        v6 = this->Capacity; /*0x4ee00c*/
        if ( a2 < v6 ) /*0x4ee011*/
          v6 = a2; /*0x4ee013*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee019*/
          ++i; /*0x4ee01e*/
        if ( this->IsAllocated ) /*0x4ee02b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee036*/
          this->Items = 0; /*0x4ee03e*/
        }
      }
      this->Items = v4; /*0x4ee047*/
      this->Capacity = a2; /*0x4ee04f*/
      this->IsAllocated = a3 == 0; /*0x4ee052*/
      return 1; /*0x4ee058*/
    }
    else
    {
      return 0; /*0x4edfff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee062*/
    return 1; /*0x4ee068*/
  }
}


// ==== 0x004EE070  _VectorClass_PAVAnimTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AnimTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ee07d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ee083*/
    *(_DWORD *)(this + 4) = 0; /*0x4ee08b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ee08e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ee091*/
}


// ==== 0x004EE0A0  _VectorClass_PAVAnimTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AnimTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ee0a0*/
    return 0; /*0x4ee0a8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ee0ae*/
  result = 0; /*0x4ee0b1*/
  if ( v3 <= 0 ) /*0x4ee0b5*/
    return -1; /*0x4ee0cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ee0bb*/
  {
    if ( ++result >= v3 ) /*0x4ee0ca*/
      return -1; /*0x4ee0ca*/
  }
  return result; /*0x4ee0aa*/
}


// ==== 0x004EE0E0  _VectorClass_PAVAnimTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AnimTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ee0e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ee0f5*/
  else
    return 0; /*0x4ee0e7*/
}


// ==== 0x004EE100  _DynamicVectorClass_PAVAnimTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AnimTypeClass::sub_4EE100(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ee10c*/
  {
    this->IsInitialized = 0; /*0x4ee112*/
    if ( a3 ) /*0x4ee118*/
      v4 = a3; /*0x4ee12e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ee12a*/
    this->IsInitialized = 1; /*0x4ee132*/
    if ( !v4 ) /*0x4ee136*/
      return 0; /*0x4ee1aa*/
    if ( this->Items ) /*0x4ee138*/
    {
      v5 = this->q008; /*0x4ee13f*/
      if ( a2 < v5 ) /*0x4ee144*/
        v5 = a2; /*0x4ee146*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee14c*/
        ++i; /*0x4ee151*/
      if ( this->IsAllocated ) /*0x4ee15e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee169*/
        this->Items = 0; /*0x4ee171*/
      }
    }
    this->Items = v4; /*0x4ee17a*/
    this->q008 = a2; /*0x4ee182*/
    this->IsAllocated = a3 == 0; /*0x4ee185*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee18e*/
  }
  v7 = this->q008; /*0x4ee191*/
  if ( v7 < this->Items ) /*0x4ee199*/
    this->Items = v7; /*0x4ee19b*/
  return 1; /*0x4ee19e*/
}


// ==== 0x004EE1B0  _DynamicVectorClass_PAVAnimTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AnimTypeClass::sub_4EE1B0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ee1b0*/
  result = 0; /*0x4ee1b3*/
  if ( v2 <= 0 ) /*0x4ee1b8*/
    return -1; /*0x4ee1cf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ee1be*/
  {
    if ( ++result >= v2 ) /*0x4ee1cd*/
      return -1; /*0x4ee1cd*/
  }
  return result; /*0x4ee1d2*/
}


// ==== 0x004EE1E0  _VectorClass_PAVInfantryTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_InfantryTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ee1e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ee1ed*/
  {
    v3 = 0; /*0x4ee1ef*/
    if ( v2 <= 0 ) /*0x4ee1f3*/
      return 1; /*0x4ee213*/
    v4 = (_DWORD *)this->Items; /*0x4ee1f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ee1fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ee204*/
    {
      ++v3; /*0x4ee206*/
      ++v4; /*0x4ee207*/
      if ( v3 >= v2 ) /*0x4ee20c*/
        return 1; /*0x4ee20c*/
    }
  }
  return 0; /*0x4ee20e*/
}


// ==== 0x004EE220  _VectorClass_PAVInfantryTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_InfantryTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ee22c*/
  {
    this->IsInitialized = 0; /*0x4ee236*/
    if ( a3 ) /*0x4ee23c*/
      v4 = a3; /*0x4ee252*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ee24e*/
    this->IsInitialized = 1; /*0x4ee256*/
    if ( v4 ) /*0x4ee25a*/
    {
      if ( this->Items ) /*0x4ee265*/
      {
        v6 = this->Capacity; /*0x4ee26c*/
        if ( a2 < v6 ) /*0x4ee271*/
          v6 = a2; /*0x4ee273*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee279*/
          ++i; /*0x4ee27e*/
        if ( this->IsAllocated ) /*0x4ee28b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee296*/
          this->Items = 0; /*0x4ee29e*/
        }
      }
      this->Items = v4; /*0x4ee2a7*/
      this->Capacity = a2; /*0x4ee2af*/
      this->IsAllocated = a3 == 0; /*0x4ee2b2*/
      return 1; /*0x4ee2b8*/
    }
    else
    {
      return 0; /*0x4ee25f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee2c2*/
    return 1; /*0x4ee2c8*/
  }
}


// ==== 0x004EE2D0  _VectorClass_PAVInfantryTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_InfantryTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ee2dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ee2e3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ee2eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ee2ee*/
  *(_DWORD *)(this + 8) = 0; /*0x4ee2f1*/
}


// ==== 0x004EE300  _VectorClass_PAVInfantryTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_InfantryTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ee300*/
    return 0; /*0x4ee308*/
  v3 = *(_DWORD *)(this + 8); /*0x4ee30e*/
  result = 0; /*0x4ee311*/
  if ( v3 <= 0 ) /*0x4ee315*/
    return -1; /*0x4ee32c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ee31b*/
  {
    if ( ++result >= v3 ) /*0x4ee32a*/
      return -1; /*0x4ee32a*/
  }
  return result; /*0x4ee30a*/
}


// ==== 0x004EE340  _VectorClass_PAVInfantryTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_InfantryTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ee340*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ee355*/
  else
    return 0; /*0x4ee347*/
}


// ==== 0x004EE360  _DynamicVectorClass_PAVInfantryTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AnimTypeClass::sub_4EE360(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ee36c*/
  {
    this->IsInitialized = 0; /*0x4ee372*/
    if ( a3 ) /*0x4ee378*/
      v4 = a3; /*0x4ee38e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ee38a*/
    this->IsInitialized = 1; /*0x4ee392*/
    if ( !v4 ) /*0x4ee396*/
      return 0; /*0x4ee40a*/
    if ( this->Items ) /*0x4ee398*/
    {
      v5 = this->q008; /*0x4ee39f*/
      if ( a2 < v5 ) /*0x4ee3a4*/
        v5 = a2; /*0x4ee3a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee3ac*/
        ++i; /*0x4ee3b1*/
      if ( this->IsAllocated ) /*0x4ee3be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee3c9*/
        this->Items = 0; /*0x4ee3d1*/
      }
    }
    this->Items = v4; /*0x4ee3da*/
    this->q008 = a2; /*0x4ee3e2*/
    this->IsAllocated = a3 == 0; /*0x4ee3e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee3ee*/
  }
  v7 = this->q008; /*0x4ee3f1*/
  if ( v7 < this->Items ) /*0x4ee3f9*/
    this->Items = v7; /*0x4ee3fb*/
  return 1; /*0x4ee3fe*/
}


// ==== 0x004EE410  _DynamicVectorClass_PAVInfantryTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AnimTypeClass::sub_4EE410(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ee410*/
  result = 0; /*0x4ee413*/
  if ( v2 <= 0 ) /*0x4ee418*/
    return -1; /*0x4ee42f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ee41e*/
  {
    if ( ++result >= v2 ) /*0x4ee42d*/
      return -1; /*0x4ee42d*/
  }
  return result; /*0x4ee432*/
}


// ==== 0x004EE440  _VectorClass_PAVBulletTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ee442*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ee44d*/
  {
    v3 = 0; /*0x4ee44f*/
    if ( v2 <= 0 ) /*0x4ee453*/
      return 1; /*0x4ee473*/
    v4 = (_DWORD *)this->Items; /*0x4ee455*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ee45b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ee464*/
    {
      ++v3; /*0x4ee466*/
      ++v4; /*0x4ee467*/
      if ( v3 >= v2 ) /*0x4ee46c*/
        return 1; /*0x4ee46c*/
    }
  }
  return 0; /*0x4ee46e*/
}


// ==== 0x004EE480  _VectorClass_PAVBulletTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BulletTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ee48c*/
  {
    this->IsInitialized = 0; /*0x4ee496*/
    if ( a3 ) /*0x4ee49c*/
      v4 = a3; /*0x4ee4b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ee4ae*/
    this->IsInitialized = 1; /*0x4ee4b6*/
    if ( v4 ) /*0x4ee4ba*/
    {
      if ( this->Items ) /*0x4ee4c5*/
      {
        v6 = this->Capacity; /*0x4ee4cc*/
        if ( a2 < v6 ) /*0x4ee4d1*/
          v6 = a2; /*0x4ee4d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee4d9*/
          ++i; /*0x4ee4de*/
        if ( this->IsAllocated ) /*0x4ee4eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee4f6*/
          this->Items = 0; /*0x4ee4fe*/
        }
      }
      this->Items = v4; /*0x4ee507*/
      this->Capacity = a2; /*0x4ee50f*/
      this->IsAllocated = a3 == 0; /*0x4ee512*/
      return 1; /*0x4ee518*/
    }
    else
    {
      return 0; /*0x4ee4bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee522*/
    return 1; /*0x4ee528*/
  }
}


// ==== 0x004EE530  _VectorClass_PAVBulletTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BulletTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ee53d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ee543*/
    *(_DWORD *)(this + 4) = 0; /*0x4ee54b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ee54e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ee551*/
}


// ==== 0x004EE560  _VectorClass_PAVBulletTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BulletTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ee560*/
    return 0; /*0x4ee568*/
  v3 = *(_DWORD *)(this + 8); /*0x4ee56e*/
  result = 0; /*0x4ee571*/
  if ( v3 <= 0 ) /*0x4ee575*/
    return -1; /*0x4ee58c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ee57b*/
  {
    if ( ++result >= v3 ) /*0x4ee58a*/
      return -1; /*0x4ee58a*/
  }
  return result; /*0x4ee56a*/
}


// ==== 0x004EE5A0  _VectorClass_PAVBulletTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BulletTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ee5a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ee5b5*/
  else
    return 0; /*0x4ee5a7*/
}


// ==== 0x004EE5C0  _DynamicVectorClass_PAVBulletTypeClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AnimTypeClass::sub_4EE5C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ee5cc*/
  {
    this->IsInitialized = 0; /*0x4ee5d2*/
    if ( a3 ) /*0x4ee5d8*/
      v4 = a3; /*0x4ee5ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ee5ea*/
    this->IsInitialized = 1; /*0x4ee5f2*/
    if ( !v4 ) /*0x4ee5f6*/
      return 0; /*0x4ee66a*/
    if ( this->Items ) /*0x4ee5f8*/
    {
      v5 = this->q008; /*0x4ee5ff*/
      if ( a2 < v5 ) /*0x4ee604*/
        v5 = a2; /*0x4ee606*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee60c*/
        ++i; /*0x4ee611*/
      if ( this->IsAllocated ) /*0x4ee61e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee629*/
        this->Items = 0; /*0x4ee631*/
      }
    }
    this->Items = v4; /*0x4ee63a*/
    this->q008 = a2; /*0x4ee642*/
    this->IsAllocated = a3 == 0; /*0x4ee645*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee64e*/
  }
  v7 = this->q008; /*0x4ee651*/
  if ( v7 < this->Items ) /*0x4ee659*/
    this->Items = v7; /*0x4ee65b*/
  return 1; /*0x4ee65e*/
}


// ==== 0x004EE670  _DynamicVectorClass_PAVBulletTypeClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AnimTypeClass::sub_4EE670(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ee670*/
  result = 0; /*0x4ee673*/
  if ( v2 <= 0 ) /*0x4ee678*/
    return -1; /*0x4ee68f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ee67e*/
  {
    if ( ++result >= v2 ) /*0x4ee68d*/
      return -1; /*0x4ee68d*/
  }
  return result; /*0x4ee692*/
}


// ==== 0x004EE6A0  _VectorClass_PAVVoxelAnimTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VoxelAnimTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ee6a2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ee6ad*/
  {
    v3 = 0; /*0x4ee6af*/
    if ( v2 <= 0 ) /*0x4ee6b3*/
      return 1; /*0x4ee6d3*/
    v4 = (_DWORD *)this->Items; /*0x4ee6b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ee6bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ee6c4*/
    {
      ++v3; /*0x4ee6c6*/
      ++v4; /*0x4ee6c7*/
      if ( v3 >= v2 ) /*0x4ee6cc*/
        return 1; /*0x4ee6cc*/
    }
  }
  return 0; /*0x4ee6ce*/
}


// ==== 0x004EE6E0  _VectorClass_PAVVoxelAnimTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VoxelAnimTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ee6ec*/
  {
    this->IsInitialized = 0; /*0x4ee6f6*/
    if ( a3 ) /*0x4ee6fc*/
      v4 = a3; /*0x4ee712*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ee70e*/
    this->IsInitialized = 1; /*0x4ee716*/
    if ( v4 ) /*0x4ee71a*/
    {
      if ( this->Items ) /*0x4ee725*/
      {
        v6 = this->Capacity; /*0x4ee72c*/
        if ( a2 < v6 ) /*0x4ee731*/
          v6 = a2; /*0x4ee733*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee739*/
          ++i; /*0x4ee73e*/
        if ( this->IsAllocated ) /*0x4ee74b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee756*/
          this->Items = 0; /*0x4ee75e*/
        }
      }
      this->Items = v4; /*0x4ee767*/
      this->Capacity = a2; /*0x4ee76f*/
      this->IsAllocated = a3 == 0; /*0x4ee772*/
      return 1; /*0x4ee778*/
    }
    else
    {
      return 0; /*0x4ee71f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee782*/
    return 1; /*0x4ee788*/
  }
}


// ==== 0x004EE790  _VectorClass_PAVVoxelAnimTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_VoxelAnimTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ee79d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ee7a3*/
    *(_DWORD *)(this + 4) = 0; /*0x4ee7ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ee7ae*/
  *(_DWORD *)(this + 8) = 0; /*0x4ee7b1*/
}


// ==== 0x004EE7C0  _VectorClass_PAVVoxelAnimTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VoxelAnimTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ee7c0*/
    return 0; /*0x4ee7c8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ee7ce*/
  result = 0; /*0x4ee7d1*/
  if ( v3 <= 0 ) /*0x4ee7d5*/
    return -1; /*0x4ee7ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ee7db*/
  {
    if ( ++result >= v3 ) /*0x4ee7ea*/
      return -1; /*0x4ee7ea*/
  }
  return result; /*0x4ee7ca*/
}


// ==== 0x004EE800  _VectorClass_PAVVoxelAnimTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VoxelAnimTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ee800*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ee815*/
  else
    return 0; /*0x4ee807*/
}


// ==== 0x004EE820  _DynamicVectorClass_PAVVoxelAnimTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_VoxelAnimTypeClass::sub_4EE820(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ee82c*/
  {
    this->IsInitialized = 0; /*0x4ee832*/
    if ( a3 ) /*0x4ee838*/
      v4 = a3; /*0x4ee84e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ee84a*/
    this->IsInitialized = 1; /*0x4ee852*/
    if ( !v4 ) /*0x4ee856*/
      return 0; /*0x4ee8ca*/
    if ( this->Items ) /*0x4ee858*/
    {
      v5 = this->q008; /*0x4ee85f*/
      if ( a2 < v5 ) /*0x4ee864*/
        v5 = a2; /*0x4ee866*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee86c*/
        ++i; /*0x4ee871*/
      if ( this->IsAllocated ) /*0x4ee87e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee889*/
        this->Items = 0; /*0x4ee891*/
      }
    }
    this->Items = v4; /*0x4ee89a*/
    this->q008 = a2; /*0x4ee8a2*/
    this->IsAllocated = a3 == 0; /*0x4ee8a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee8ae*/
  }
  v7 = this->q008; /*0x4ee8b1*/
  if ( v7 < this->Items ) /*0x4ee8b9*/
    this->Items = v7; /*0x4ee8bb*/
  return 1; /*0x4ee8be*/
}


// ==== 0x004EE8D0  _DynamicVectorClass_PAVVoxelAnimTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_VoxelAnimTypeClass::sub_4EE8D0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ee8d0*/
  result = 0; /*0x4ee8d3*/
  if ( v2 <= 0 ) /*0x4ee8d8*/
    return -1; /*0x4ee8ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ee8de*/
  {
    if ( ++result >= v2 ) /*0x4ee8ed*/
      return -1; /*0x4ee8ed*/
  }
  return result; /*0x4ee8f2*/
}


// ==== 0x004EE900  _VectorClass_PAVIsometricTileTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IsometricTileTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ee902*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ee90d*/
  {
    v3 = 0; /*0x4ee90f*/
    if ( v2 <= 0 ) /*0x4ee913*/
      return 1; /*0x4ee933*/
    v4 = (_DWORD *)this->Items; /*0x4ee915*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ee91b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ee924*/
    {
      ++v3; /*0x4ee926*/
      ++v4; /*0x4ee927*/
      if ( v3 >= v2 ) /*0x4ee92c*/
        return 1; /*0x4ee92c*/
    }
  }
  return 0; /*0x4ee92e*/
}


// ==== 0x004EE940  _VectorClass_PAVIsometricTileTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IsometricTileTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ee94c*/
  {
    this->IsInitialized = 0; /*0x4ee956*/
    if ( a3 ) /*0x4ee95c*/
      v4 = a3; /*0x4ee972*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ee96e*/
    this->IsInitialized = 1; /*0x4ee976*/
    if ( v4 ) /*0x4ee97a*/
    {
      if ( this->Items ) /*0x4ee985*/
      {
        v6 = this->Capacity; /*0x4ee98c*/
        if ( a2 < v6 ) /*0x4ee991*/
          v6 = a2; /*0x4ee993*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ee999*/
          ++i; /*0x4ee99e*/
        if ( this->IsAllocated ) /*0x4ee9ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ee9b6*/
          this->Items = 0; /*0x4ee9be*/
        }
      }
      this->Items = v4; /*0x4ee9c7*/
      this->Capacity = a2; /*0x4ee9cf*/
      this->IsAllocated = a3 == 0; /*0x4ee9d2*/
      return 1; /*0x4ee9d8*/
    }
    else
    {
      return 0; /*0x4ee97f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ee9e2*/
    return 1; /*0x4ee9e8*/
  }
}


// ==== 0x004EE9F0  _VectorClass_PAVIsometricTileTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_IsometricTileTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ee9fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eea03*/
    *(_DWORD *)(this + 4) = 0; /*0x4eea0b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eea0e*/
  *(_DWORD *)(this + 8) = 0; /*0x4eea11*/
}


// ==== 0x004EEA20  _VectorClass_PAVIsometricTileTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IsometricTileTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eea20*/
    return 0; /*0x4eea28*/
  v3 = *(_DWORD *)(this + 8); /*0x4eea2e*/
  result = 0; /*0x4eea31*/
  if ( v3 <= 0 ) /*0x4eea35*/
    return -1; /*0x4eea4c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eea3b*/
  {
    if ( ++result >= v3 ) /*0x4eea4a*/
      return -1; /*0x4eea4a*/
  }
  return result; /*0x4eea2a*/
}


// ==== 0x004EEA60  _VectorClass_PAVIsometricTileTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IsometricTileTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eea60*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eea75*/
  else
    return 0; /*0x4eea67*/
}


// ==== 0x004EEA80  _DynamicVectorClass_PAVIsometricTileTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_VoxelAnimTypeClass::sub_4EEA80(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eea8c*/
  {
    this->IsInitialized = 0; /*0x4eea92*/
    if ( a3 ) /*0x4eea98*/
      v4 = a3; /*0x4eeaae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eeaaa*/
    this->IsInitialized = 1; /*0x4eeab2*/
    if ( !v4 ) /*0x4eeab6*/
      return 0; /*0x4eeb2a*/
    if ( this->Items ) /*0x4eeab8*/
    {
      v5 = this->q008; /*0x4eeabf*/
      if ( a2 < v5 ) /*0x4eeac4*/
        v5 = a2; /*0x4eeac6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eeacc*/
        ++i; /*0x4eead1*/
      if ( this->IsAllocated ) /*0x4eeade*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eeae9*/
        this->Items = 0; /*0x4eeaf1*/
      }
    }
    this->Items = v4; /*0x4eeafa*/
    this->q008 = a2; /*0x4eeb02*/
    this->IsAllocated = a3 == 0; /*0x4eeb05*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eeb0e*/
  }
  v7 = this->q008; /*0x4eeb11*/
  if ( v7 < this->Items ) /*0x4eeb19*/
    this->Items = v7; /*0x4eeb1b*/
  return 1; /*0x4eeb1e*/
}


// ==== 0x004EEB30  _DynamicVectorClass_PAVIsometricTileTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_VoxelAnimTypeClass::sub_4EEB30(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eeb30*/
  result = 0; /*0x4eeb33*/
  if ( v2 <= 0 ) /*0x4eeb38*/
    return -1; /*0x4eeb4f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eeb3e*/
  {
    if ( ++result >= v2 ) /*0x4eeb4d*/
      return -1; /*0x4eeb4d*/
  }
  return result; /*0x4eeb52*/
}


// ==== 0x004EEB60  _VectorClass_PAVParticleTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParticleTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eeb62*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eeb6d*/
  {
    v3 = 0; /*0x4eeb6f*/
    if ( v2 <= 0 ) /*0x4eeb73*/
      return 1; /*0x4eeb93*/
    v4 = (_DWORD *)this->Items; /*0x4eeb75*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eeb7b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eeb84*/
    {
      ++v3; /*0x4eeb86*/
      ++v4; /*0x4eeb87*/
      if ( v3 >= v2 ) /*0x4eeb8c*/
        return 1; /*0x4eeb8c*/
    }
  }
  return 0; /*0x4eeb8e*/
}


// ==== 0x004EEBA0  _VectorClass_PAVParticleTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParticleTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eebac*/
  {
    this->IsInitialized = 0; /*0x4eebb6*/
    if ( a3 ) /*0x4eebbc*/
      v4 = a3; /*0x4eebd2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eebce*/
    this->IsInitialized = 1; /*0x4eebd6*/
    if ( v4 ) /*0x4eebda*/
    {
      if ( this->Items ) /*0x4eebe5*/
      {
        v6 = this->Capacity; /*0x4eebec*/
        if ( a2 < v6 ) /*0x4eebf1*/
          v6 = a2; /*0x4eebf3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eebf9*/
          ++i; /*0x4eebfe*/
        if ( this->IsAllocated ) /*0x4eec0b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eec16*/
          this->Items = 0; /*0x4eec1e*/
        }
      }
      this->Items = v4; /*0x4eec27*/
      this->Capacity = a2; /*0x4eec2f*/
      this->IsAllocated = a3 == 0; /*0x4eec32*/
      return 1; /*0x4eec38*/
    }
    else
    {
      return 0; /*0x4eebdf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eec42*/
    return 1; /*0x4eec48*/
  }
}


// ==== 0x004EEC50  _VectorClass_PAVParticleTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ParticleTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eec5d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eec63*/
    *(_DWORD *)(this + 4) = 0; /*0x4eec6b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eec6e*/
  *(_DWORD *)(this + 8) = 0; /*0x4eec71*/
}


// ==== 0x004EEC80  _VectorClass_PAVParticleTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParticleTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eec80*/
    return 0; /*0x4eec88*/
  v3 = *(_DWORD *)(this + 8); /*0x4eec8e*/
  result = 0; /*0x4eec91*/
  if ( v3 <= 0 ) /*0x4eec95*/
    return -1; /*0x4eecac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eec9b*/
  {
    if ( ++result >= v3 ) /*0x4eecaa*/
      return -1; /*0x4eecaa*/
  }
  return result; /*0x4eec8a*/
}


// ==== 0x004EECC0  _VectorClass_PAVParticleTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParticleTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eecc0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eecd5*/
  else
    return 0; /*0x4eecc7*/
}


// ==== 0x004EECE0  _DynamicVectorClass_PAVParticleTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ParticleTypeClass::sub_4EECE0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eecec*/
  {
    this->IsInitialized = 0; /*0x4eecf2*/
    if ( a3 ) /*0x4eecf8*/
      v4 = a3; /*0x4eed0e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eed0a*/
    this->IsInitialized = 1; /*0x4eed12*/
    if ( !v4 ) /*0x4eed16*/
      return 0; /*0x4eed8a*/
    if ( this->Items ) /*0x4eed18*/
    {
      v5 = this->q008; /*0x4eed1f*/
      if ( a2 < v5 ) /*0x4eed24*/
        v5 = a2; /*0x4eed26*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eed2c*/
        ++i; /*0x4eed31*/
      if ( this->IsAllocated ) /*0x4eed3e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eed49*/
        this->Items = 0; /*0x4eed51*/
      }
    }
    this->Items = v4; /*0x4eed5a*/
    this->q008 = a2; /*0x4eed62*/
    this->IsAllocated = a3 == 0; /*0x4eed65*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eed6e*/
  }
  v7 = this->q008; /*0x4eed71*/
  if ( v7 < this->Items ) /*0x4eed79*/
    this->Items = v7; /*0x4eed7b*/
  return 1; /*0x4eed7e*/
}


// ==== 0x004EED90  _DynamicVectorClass_PAVParticleTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ParticleTypeClass::sub_4EED90(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eed90*/
  result = 0; /*0x4eed93*/
  if ( v2 <= 0 ) /*0x4eed98*/
    return -1; /*0x4eedaf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eed9e*/
  {
    if ( ++result >= v2 ) /*0x4eedad*/
      return -1; /*0x4eedad*/
  }
  return result; /*0x4eedb2*/
}


// ==== 0x004EEDC0  _VectorClass_PAVParticleSystemTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParticleSystemTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4eedc2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eedcd*/
  {
    v3 = 0; /*0x4eedcf*/
    if ( v2 <= 0 ) /*0x4eedd3*/
      return 1; /*0x4eedf3*/
    v4 = (_DWORD *)this->Items; /*0x4eedd5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eeddb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eede4*/
    {
      ++v3; /*0x4eede6*/
      ++v4; /*0x4eede7*/
      if ( v3 >= v2 ) /*0x4eedec*/
        return 1; /*0x4eedec*/
    }
  }
  return 0; /*0x4eedee*/
}


// ==== 0x004EEE00  _VectorClass_PAVParticleSystemTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParticleSystemTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eee0c*/
  {
    this->IsInitialized = 0; /*0x4eee16*/
    if ( a3 ) /*0x4eee1c*/
      v4 = a3; /*0x4eee32*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eee2e*/
    this->IsInitialized = 1; /*0x4eee36*/
    if ( v4 ) /*0x4eee3a*/
    {
      if ( this->Items ) /*0x4eee45*/
      {
        v6 = this->Capacity; /*0x4eee4c*/
        if ( a2 < v6 ) /*0x4eee51*/
          v6 = a2; /*0x4eee53*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eee59*/
          ++i; /*0x4eee5e*/
        if ( this->IsAllocated ) /*0x4eee6b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eee76*/
          this->Items = 0; /*0x4eee7e*/
        }
      }
      this->Items = v4; /*0x4eee87*/
      this->Capacity = a2; /*0x4eee8f*/
      this->IsAllocated = a3 == 0; /*0x4eee92*/
      return 1; /*0x4eee98*/
    }
    else
    {
      return 0; /*0x4eee3f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eeea2*/
    return 1; /*0x4eeea8*/
  }
}


// ==== 0x004EEEB0  _VectorClass_PAVParticleSystemTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ParticleSystemTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4eeebd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eeec3*/
    *(_DWORD *)(this + 4) = 0; /*0x4eeecb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eeece*/
  *(_DWORD *)(this + 8) = 0; /*0x4eeed1*/
}


// ==== 0x004EEEE0  _VectorClass_PAVParticleSystemTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParticleSystemTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4eeee0*/
    return 0; /*0x4eeee8*/
  v3 = *(_DWORD *)(this + 8); /*0x4eeeee*/
  result = 0; /*0x4eeef1*/
  if ( v3 <= 0 ) /*0x4eeef5*/
    return -1; /*0x4eef0c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eeefb*/
  {
    if ( ++result >= v3 ) /*0x4eef0a*/
      return -1; /*0x4eef0a*/
  }
  return result; /*0x4eeeea*/
}


// ==== 0x004EEF20  _VectorClass_PAVParticleSystemTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParticleSystemTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4eef20*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4eef35*/
  else
    return 0; /*0x4eef27*/
}


// ==== 0x004EEF40  _DynamicVectorClass_PAVParticleSystemTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ParticleTypeClass::sub_4EEF40(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eef4c*/
  {
    this->IsInitialized = 0; /*0x4eef52*/
    if ( a3 ) /*0x4eef58*/
      v4 = a3; /*0x4eef6e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eef6a*/
    this->IsInitialized = 1; /*0x4eef72*/
    if ( !v4 ) /*0x4eef76*/
      return 0; /*0x4eefea*/
    if ( this->Items ) /*0x4eef78*/
    {
      v5 = this->q008; /*0x4eef7f*/
      if ( a2 < v5 ) /*0x4eef84*/
        v5 = a2; /*0x4eef86*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4eef8c*/
        ++i; /*0x4eef91*/
      if ( this->IsAllocated ) /*0x4eef9e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eefa9*/
        this->Items = 0; /*0x4eefb1*/
      }
    }
    this->Items = v4; /*0x4eefba*/
    this->q008 = a2; /*0x4eefc2*/
    this->IsAllocated = a3 == 0; /*0x4eefc5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4eefce*/
  }
  v7 = this->q008; /*0x4eefd1*/
  if ( v7 < this->Items ) /*0x4eefd9*/
    this->Items = v7; /*0x4eefdb*/
  return 1; /*0x4eefde*/
}


// ==== 0x004EEFF0  _DynamicVectorClass_PAVParticleSystemTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ParticleTypeClass::sub_4EEFF0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4eeff0*/
  result = 0; /*0x4eeff3*/
  if ( v2 <= 0 ) /*0x4eeff8*/
    return -1; /*0x4ef00f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4eeffe*/
  {
    if ( ++result >= v2 ) /*0x4ef00d*/
      return -1; /*0x4ef00d*/
  }
  return result; /*0x4ef012*/
}


// ==== 0x004EF020  _VectorClass_PAVSuperWeaponTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SuperWeaponTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ef022*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ef02d*/
  {
    v3 = 0; /*0x4ef02f*/
    if ( v2 <= 0 ) /*0x4ef033*/
      return 1; /*0x4ef053*/
    v4 = (_DWORD *)this->Items; /*0x4ef035*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ef03b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ef044*/
    {
      ++v3; /*0x4ef046*/
      ++v4; /*0x4ef047*/
      if ( v3 >= v2 ) /*0x4ef04c*/
        return 1; /*0x4ef04c*/
    }
  }
  return 0; /*0x4ef04e*/
}


// ==== 0x004EF060  _VectorClass_PAVSuperWeaponTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SuperWeaponTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ef06c*/
  {
    this->IsInitialized = 0; /*0x4ef076*/
    if ( a3 ) /*0x4ef07c*/
      v4 = a3; /*0x4ef092*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ef08e*/
    this->IsInitialized = 1; /*0x4ef096*/
    if ( v4 ) /*0x4ef09a*/
    {
      if ( this->Items ) /*0x4ef0a5*/
      {
        v6 = this->Capacity; /*0x4ef0ac*/
        if ( a2 < v6 ) /*0x4ef0b1*/
          v6 = a2; /*0x4ef0b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ef0b9*/
          ++i; /*0x4ef0be*/
        if ( this->IsAllocated ) /*0x4ef0cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ef0d6*/
          this->Items = 0; /*0x4ef0de*/
        }
      }
      this->Items = v4; /*0x4ef0e7*/
      this->Capacity = a2; /*0x4ef0ef*/
      this->IsAllocated = a3 == 0; /*0x4ef0f2*/
      return 1; /*0x4ef0f8*/
    }
    else
    {
      return 0; /*0x4ef09f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ef102*/
    return 1; /*0x4ef108*/
  }
}


// ==== 0x004EF110  _VectorClass_PAVSuperWeaponTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SuperWeaponTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ef11d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ef123*/
    *(_DWORD *)(this + 4) = 0; /*0x4ef12b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ef12e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ef131*/
}


// ==== 0x004EF140  _VectorClass_PAVSuperWeaponTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SuperWeaponTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ef140*/
    return 0; /*0x4ef148*/
  v3 = *(_DWORD *)(this + 8); /*0x4ef14e*/
  result = 0; /*0x4ef151*/
  if ( v3 <= 0 ) /*0x4ef155*/
    return -1; /*0x4ef16c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ef15b*/
  {
    if ( ++result >= v3 ) /*0x4ef16a*/
      return -1; /*0x4ef16a*/
  }
  return result; /*0x4ef14a*/
}


// ==== 0x004EF180  _VectorClass_PAVSuperWeaponTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SuperWeaponTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ef180*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ef195*/
  else
    return 0; /*0x4ef187*/
}


// ==== 0x004EF1A0  _DynamicVectorClass_PAVSuperWeaponTypeClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ParticleTypeClass::sub_4EF1A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ef1ac*/
  {
    this->IsInitialized = 0; /*0x4ef1b2*/
    if ( a3 ) /*0x4ef1b8*/
      v4 = a3; /*0x4ef1ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ef1ca*/
    this->IsInitialized = 1; /*0x4ef1d2*/
    if ( !v4 ) /*0x4ef1d6*/
      return 0; /*0x4ef24a*/
    if ( this->Items ) /*0x4ef1d8*/
    {
      v5 = this->q008; /*0x4ef1df*/
      if ( a2 < v5 ) /*0x4ef1e4*/
        v5 = a2; /*0x4ef1e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ef1ec*/
        ++i; /*0x4ef1f1*/
      if ( this->IsAllocated ) /*0x4ef1fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ef209*/
        this->Items = 0; /*0x4ef211*/
      }
    }
    this->Items = v4; /*0x4ef21a*/
    this->q008 = a2; /*0x4ef222*/
    this->IsAllocated = a3 == 0; /*0x4ef225*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ef22e*/
  }
  v7 = this->q008; /*0x4ef231*/
  if ( v7 < this->Items ) /*0x4ef239*/
    this->Items = v7; /*0x4ef23b*/
  return 1; /*0x4ef23e*/
}


// ==== 0x004EF250  _DynamicVectorClass_PAVSuperWeaponTypeClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ParticleTypeClass::sub_4EF250(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ef250*/
  result = 0; /*0x4ef253*/
  if ( v2 <= 0 ) /*0x4ef258*/
    return -1; /*0x4ef26f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ef25e*/
  {
    if ( ++result >= v2 ) /*0x4ef26d*/
      return -1; /*0x4ef26d*/
  }
  return result; /*0x4ef272*/
}


// ==== 0x004EF280  _VectorClass_PAVAbstractTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AbstractTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4ef282*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4ef28d*/
  {
    v3 = 0; /*0x4ef28f*/
    if ( v2 <= 0 ) /*0x4ef293*/
      return 1; /*0x4ef2b3*/
    v4 = (_DWORD *)this->Items; /*0x4ef295*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ef29b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ef2a4*/
    {
      ++v3; /*0x4ef2a6*/
      ++v4; /*0x4ef2a7*/
      if ( v3 >= v2 ) /*0x4ef2ac*/
        return 1; /*0x4ef2ac*/
    }
  }
  return 0; /*0x4ef2ae*/
}


// ==== 0x004EF2C0  _VectorClass_PAVAbstractTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AbstractTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ef2cc*/
  {
    this->IsInitialized = 0; /*0x4ef2d6*/
    if ( a3 ) /*0x4ef2dc*/
      v4 = a3; /*0x4ef2f2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ef2ee*/
    this->IsInitialized = 1; /*0x4ef2f6*/
    if ( v4 ) /*0x4ef2fa*/
    {
      if ( this->Items ) /*0x4ef305*/
      {
        v6 = this->Capacity; /*0x4ef30c*/
        if ( a2 < v6 ) /*0x4ef311*/
          v6 = a2; /*0x4ef313*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ef319*/
          ++i; /*0x4ef31e*/
        if ( this->IsAllocated ) /*0x4ef32b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ef336*/
          this->Items = 0; /*0x4ef33e*/
        }
      }
      this->Items = v4; /*0x4ef347*/
      this->Capacity = a2; /*0x4ef34f*/
      this->IsAllocated = a3 == 0; /*0x4ef352*/
      return 1; /*0x4ef358*/
    }
    else
    {
      return 0; /*0x4ef2ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ef362*/
    return 1; /*0x4ef368*/
  }
}


// ==== 0x004EF370  _VectorClass_PAVAbstractTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AbstractTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4ef37d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ef383*/
    *(_DWORD *)(this + 4) = 0; /*0x4ef38b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ef38e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ef391*/
}


// ==== 0x004EF3A0  _VectorClass_PAVAbstractTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AbstractTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ef3a0*/
    return 0; /*0x4ef3a8*/
  v3 = *(_DWORD *)(this + 8); /*0x4ef3ae*/
  result = 0; /*0x4ef3b1*/
  if ( v3 <= 0 ) /*0x4ef3b5*/
    return -1; /*0x4ef3cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ef3bb*/
  {
    if ( ++result >= v3 ) /*0x4ef3ca*/
      return -1; /*0x4ef3ca*/
  }
  return result; /*0x4ef3aa*/
}


// ==== 0x004EF3E0  _VectorClass_PAVAbstractTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AbstractTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ef3e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ef3f5*/
  else
    return 0; /*0x4ef3e7*/
}


// ==== 0x004EF400  _DynamicVectorClass_PAVAbstractTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SuperClass::sub_4EF400(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ef40c*/
  {
    this->IsInitialized = 0; /*0x4ef412*/
    if ( a3 ) /*0x4ef418*/
      v4 = a3; /*0x4ef42e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ef42a*/
    this->IsInitialized = 1; /*0x4ef432*/
    if ( !v4 ) /*0x4ef436*/
      return 0; /*0x4ef4aa*/
    if ( this->Items ) /*0x4ef438*/
    {
      v5 = this->q008; /*0x4ef43f*/
      if ( a2 < v5 ) /*0x4ef444*/
        v5 = a2; /*0x4ef446*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ef44c*/
        ++i; /*0x4ef451*/
      if ( this->IsAllocated ) /*0x4ef45e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ef469*/
        this->Items = 0; /*0x4ef471*/
      }
    }
    this->Items = v4; /*0x4ef47a*/
    this->q008 = a2; /*0x4ef482*/
    this->IsAllocated = a3 == 0; /*0x4ef485*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ef48e*/
  }
  v7 = this->q008; /*0x4ef491*/
  if ( v7 < this->Items ) /*0x4ef499*/
    this->Items = v7; /*0x4ef49b*/
  return 1; /*0x4ef49e*/
}


// ==== 0x004EF4B0  _DynamicVectorClass_PAVAbstractTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SuperClass::sub_4EF4B0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ef4b0*/
  result = 0; /*0x4ef4b3*/
  if ( v2 <= 0 ) /*0x4ef4b8*/
    return -1; /*0x4ef4cf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ef4be*/
  {
    if ( ++result >= v2 ) /*0x4ef4cd*/
      return -1; /*0x4ef4cd*/
  }
  return result; /*0x4ef4d2*/
}


// ==== 0x004EF4E0  ?$VectorClass@PAVTagClass@@::vt[00]  this=VectorClass  sig=csp ====
VectorClass *__thiscall HouseClass::vt_00_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef4e3*/
  *Block = &vt_VectorClass_TagClass; /*0x4ef4e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef4f0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef4f8*/
    *(Block + 1) = 0; /*0x4ef500*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef50b*/
  *(Block + 2) = 0; /*0x4ef511*/
  if ( (a2 & 1) != 0 ) /*0x4ef518*/
    __3_YAXPAX_Z(Block); /*0x4ef51b*/
  return (VectorClass *)Block; /*0x4ef525*/
}


// ==== 0x004EF530  ?$DynamicVectorClass@PAVTagClass@@::COMStub_0  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall HouseClass::COMStub_0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef533*/
  *Block = &vt_VectorClass_TagClass; /*0x4ef536*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef540*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef548*/
    *(Block + 1) = 0; /*0x4ef550*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef55b*/
  *(Block + 2) = 0; /*0x4ef561*/
  if ( (a2 & 1) != 0 ) /*0x4ef568*/
    __3_YAXPAX_Z(Block); /*0x4ef56b*/
  return (DynamicVector *)Block; /*0x4ef575*/
}


// ==== 0x004EF580  _VectorClass_PAVBuildingClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_Building::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef583*/
  *Block = &vt_VectorClass_BuildingClass; /*0x4ef586*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef590*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef598*/
    *(Block + 1) = 0; /*0x4ef5a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef5ab*/
  *(Block + 2) = 0; /*0x4ef5b1*/
  if ( (a2 & 1) != 0 ) /*0x4ef5b8*/
    __3_YAXPAX_Z(Block); /*0x4ef5bb*/
  return (VectorClass *)Block; /*0x4ef5c5*/
}


// ==== 0x004EF5D0  _DynamicVectorClass_PAVBuildingClass::Constructor_VectorClass_BuildingClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall ParticleSystemClass_32_::Constructor_VectorClass_BuildingClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef5d3*/
  *Block = &vt_VectorClass_BuildingClass; /*0x4ef5d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef5e0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef5e8*/
    *(Block + 1) = 0; /*0x4ef5f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef5fb*/
  *(Block + 2) = 0; /*0x4ef601*/
  if ( (a2 & 1) != 0 ) /*0x4ef608*/
    __3_YAXPAX_Z(Block); /*0x4ef60b*/
  return (DynamicVector *)Block; /*0x4ef615*/
}


// ==== 0x004EF620  _VectorClass_PAVSuperClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_SuperClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef623*/
  *Block = &vt_VectorClass_SuperClass; /*0x4ef626*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef630*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef638*/
    *(Block + 1) = 0; /*0x4ef640*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef64b*/
  *(Block + 2) = 0; /*0x4ef651*/
  if ( (a2 & 1) != 0 ) /*0x4ef658*/
    __3_YAXPAX_Z(Block); /*0x4ef65b*/
  return (VectorClass *)Block; /*0x4ef665*/
}


// ==== 0x004EF670  _DynamicVectorClass_PAVSuperClass::Constructor_VectorClass_SuperClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_SuperClass::Constructor_VectorClass_SuperClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef673*/
  *Block = &vt_VectorClass_SuperClass; /*0x4ef676*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef680*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef688*/
    *(Block + 1) = 0; /*0x4ef690*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef69b*/
  *(Block + 2) = 0; /*0x4ef6a1*/
  if ( (a2 & 1) != 0 ) /*0x4ef6a8*/
    __3_YAXPAX_Z(Block); /*0x4ef6ab*/
  return (DynamicVector *)Block; /*0x4ef6b5*/
}


// ==== 0x004EF6C0  _VectorClass_PAVAITriggerTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_AITriggerTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef6c3*/
  *Block = &vt_VectorClass_AITriggerTypeClass; /*0x4ef6c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef6d0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef6d8*/
    *(Block + 1) = 0; /*0x4ef6e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef6eb*/
  *(Block + 2) = 0; /*0x4ef6f1*/
  if ( (a2 & 1) != 0 ) /*0x4ef6f8*/
    __3_YAXPAX_Z(Block); /*0x4ef6fb*/
  return (VectorClass *)Block; /*0x4ef705*/
}


// ==== 0x004EF710  _DynamicVectorClass_PAVAITriggerTypeClass::Constructor_VectorClass_AITriggerTypeClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_AITriggerTypeClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef713*/
  *Block = &vt_VectorClass_AITriggerTypeClass; /*0x4ef716*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef720*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef728*/
    *(Block + 1) = 0; /*0x4ef730*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef73b*/
  *(Block + 2) = 0; /*0x4ef741*/
  if ( (a2 & 1) != 0 ) /*0x4ef748*/
    __3_YAXPAX_Z(Block); /*0x4ef74b*/
  return (DynamicVector *)Block; /*0x4ef755*/
}


// ==== 0x004EF760  _VectorClass_PAVBuildingLightClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_BuildingLightClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef763*/
  *Block = &vt_VectorClass_BuildingLightClass; /*0x4ef766*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef770*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef778*/
    *(Block + 1) = 0; /*0x4ef780*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef78b*/
  *(Block + 2) = 0; /*0x4ef791*/
  if ( (a2 & 1) != 0 ) /*0x4ef798*/
    __3_YAXPAX_Z(Block); /*0x4ef79b*/
  return (VectorClass *)Block; /*0x4ef7a5*/
}


// ==== 0x004EF7B0  _DynamicVectorClass_PAVBuildingLightClass::Constructor_VectorClass_BuildingLightClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_BuildingLightClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef7b3*/
  *Block = &vt_VectorClass_BuildingLightClass; /*0x4ef7b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef7c0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef7c8*/
    *(Block + 1) = 0; /*0x4ef7d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef7db*/
  *(Block + 2) = 0; /*0x4ef7e1*/
  if ( (a2 & 1) != 0 ) /*0x4ef7e8*/
    __3_YAXPAX_Z(Block); /*0x4ef7eb*/
  return (DynamicVector *)Block; /*0x4ef7f5*/
}


// ==== 0x004EF800  _VectorClass_PAVParticleClass::vt[00]  this=VectorClass  sig=csp ====
VectorClass *__thiscall ParticleSystemClass::vt_00_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef803*/
  *Block = &vt_VectorClass_ParticleClass; /*0x4ef806*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef810*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef818*/
    *(Block + 1) = 0; /*0x4ef820*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef82b*/
  *(Block + 2) = 0; /*0x4ef831*/
  if ( (a2 & 1) != 0 ) /*0x4ef838*/
    __3_YAXPAX_Z(Block); /*0x4ef83b*/
  return (VectorClass *)Block; /*0x4ef845*/
}


// ==== 0x004EF850  _DynamicVectorClass_PAVParticleClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall ParticleSystemClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef853*/
  *Block = &vt_VectorClass_ParticleClass; /*0x4ef856*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef860*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef868*/
    *(Block + 1) = 0; /*0x4ef870*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef87b*/
  *(Block + 2) = 0; /*0x4ef881*/
  if ( (a2 & 1) != 0 ) /*0x4ef888*/
    __3_YAXPAX_Z(Block); /*0x4ef88b*/
  return (DynamicVector *)Block; /*0x4ef895*/
}


// ==== 0x004EF8A0  _VectorClass_PAVTeamClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TeamClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef8a3*/
  *Block = &vt_VectorClass_TeamClass; /*0x4ef8a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef8b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef8b8*/
    *(Block + 1) = 0; /*0x4ef8c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef8cb*/
  *(Block + 2) = 0; /*0x4ef8d1*/
  if ( (a2 & 1) != 0 ) /*0x4ef8d8*/
    __3_YAXPAX_Z(Block); /*0x4ef8db*/
  return (VectorClass *)Block; /*0x4ef8e5*/
}


// ==== 0x004EF8F0  _DynamicVectorClass_PAVTeamClass::Constructor_VectorClass_TeamClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TeamClass::Constructor_VectorClass_TeamClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef8f3*/
  *Block = &vt_VectorClass_TeamClass; /*0x4ef8f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef900*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef908*/
    *(Block + 1) = 0; /*0x4ef910*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef91b*/
  *(Block + 2) = 0; /*0x4ef921*/
  if ( (a2 & 1) != 0 ) /*0x4ef928*/
    __3_YAXPAX_Z(Block); /*0x4ef92b*/
  return (DynamicVector *)Block; /*0x4ef935*/
}


// ==== 0x004EF940  _VectorClass_PAUThemeControl::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ThemeControl::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef943*/
  *Block = &vt_VectorClass_ThemeControl; /*0x4ef946*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef950*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef958*/
    *(Block + 1) = 0; /*0x4ef960*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef96b*/
  *(Block + 2) = 0; /*0x4ef971*/
  if ( (a2 & 1) != 0 ) /*0x4ef978*/
    __3_YAXPAX_Z(Block); /*0x4ef97b*/
  return (VectorClass *)Block; /*0x4ef985*/
}


// ==== 0x004EF990  _VectorClass_PAVTriggerClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TriggerClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef993*/
  *Block = &vt_VectorClass_TriggerClass; /*0x4ef996*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef9a0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef9a8*/
    *(Block + 1) = 0; /*0x4ef9b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef9bb*/
  *(Block + 2) = 0; /*0x4ef9c1*/
  if ( (a2 & 1) != 0 ) /*0x4ef9c8*/
    __3_YAXPAX_Z(Block); /*0x4ef9cb*/
  return (VectorClass *)Block; /*0x4ef9d5*/
}


// ==== 0x004EF9E0  _DynamicVectorClass_PAVTriggerClass::Constructor_VectorClass_TriggerClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef9e3*/
  *Block = &vt_VectorClass_TriggerClass; /*0x4ef9e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef9f0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef9f8*/
    *(Block + 1) = 0; /*0x4efa00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efa0b*/
  *(Block + 2) = 0; /*0x4efa11*/
  if ( (a2 & 1) != 0 ) /*0x4efa18*/
    __3_YAXPAX_Z(Block); /*0x4efa1b*/
  return (DynamicVector *)Block; /*0x4efa25*/
}


// ==== 0x004EFA30  _VectorClass_PAVTriggerTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TriggerTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efa33*/
  *Block = &vt_VectorClass_TriggerTypeClass; /*0x4efa36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efa40*/
  {
    __3_YAXPAX_Z(v3); /*0x4efa48*/
    *(Block + 1) = 0; /*0x4efa50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efa5b*/
  *(Block + 2) = 0; /*0x4efa61*/
  if ( (a2 & 1) != 0 ) /*0x4efa68*/
    __3_YAXPAX_Z(Block); /*0x4efa6b*/
  return (VectorClass *)Block; /*0x4efa75*/
}


// ==== 0x004EFA80  _DynamicVectorClass_PAVTriggerTypeClass::Constructor_VectorClass_TriggerTypeClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_AITriggerTypeClass::Constructor_VectorClass_TriggerTypeClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efa83*/
  *Block = &vt_VectorClass_TriggerTypeClass; /*0x4efa86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efa90*/
  {
    __3_YAXPAX_Z(v3); /*0x4efa98*/
    *(Block + 1) = 0; /*0x4efaa0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efaab*/
  *(Block + 2) = 0; /*0x4efab1*/
  if ( (a2 & 1) != 0 ) /*0x4efab8*/
    __3_YAXPAX_Z(Block); /*0x4efabb*/
  return (DynamicVector *)Block; /*0x4efac5*/
}


// ==== 0x004EFAD0  _VectorClass_PAVTubeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TubeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efad3*/
  *Block = &vt_VectorClass_TubeClass; /*0x4efad6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efae0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efae8*/
    *(Block + 1) = 0; /*0x4efaf0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efafb*/
  *(Block + 2) = 0; /*0x4efb01*/
  if ( (a2 & 1) != 0 ) /*0x4efb08*/
    __3_YAXPAX_Z(Block); /*0x4efb0b*/
  return (VectorClass *)Block; /*0x4efb15*/
}


// ==== 0x004EFB20  _DynamicVectorClass_PAVTubeClass::Constructor_VectorClass_TubeClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TubeClass::Constructor_VectorClass_TubeClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efb23*/
  *Block = &vt_VectorClass_TubeClass; /*0x4efb26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efb30*/
  {
    __3_YAXPAX_Z(v3); /*0x4efb38*/
    *(Block + 1) = 0; /*0x4efb40*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efb4b*/
  *(Block + 2) = 0; /*0x4efb51*/
  if ( (a2 & 1) != 0 ) /*0x4efb58*/
    __3_YAXPAX_Z(Block); /*0x4efb5b*/
  return (DynamicVector *)Block; /*0x4efb65*/
}


// ==== 0x004EFB70  _VectorClass_PAVParticleSystemClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ParticleSystemClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efb73*/
  *Block = &vt_VectorClass_ParticleSystemClass; /*0x4efb76*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efb80*/
  {
    __3_YAXPAX_Z(v3); /*0x4efb88*/
    *(Block + 1) = 0; /*0x4efb90*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efb9b*/
  *(Block + 2) = 0; /*0x4efba1*/
  if ( (a2 & 1) != 0 ) /*0x4efba8*/
    __3_YAXPAX_Z(Block); /*0x4efbab*/
  return (VectorClass *)Block; /*0x4efbb5*/
}


// ==== 0x004EFBC0  _DynamicVectorClass_PAVParticleSystemClass::Constructor_VectorClass_ParticleSystemClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_BuildingLightClass::Constructor_VectorClass_ParticleSystemClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efbc3*/
  *Block = &vt_VectorClass_ParticleSystemClass; /*0x4efbc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efbd0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efbd8*/
    *(Block + 1) = 0; /*0x4efbe0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efbeb*/
  *(Block + 2) = 0; /*0x4efbf1*/
  if ( (a2 & 1) != 0 ) /*0x4efbf8*/
    __3_YAXPAX_Z(Block); /*0x4efbfb*/
  return (DynamicVector *)Block; /*0x4efc05*/
}


// ==== 0x004EFC10  _VectorClass_PAVWaveClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_WaveClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efc13*/
  *Block = &vt_VectorClass_WaveClass; /*0x4efc16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efc20*/
  {
    __3_YAXPAX_Z(v3); /*0x4efc28*/
    *(Block + 1) = 0; /*0x4efc30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efc3b*/
  *(Block + 2) = 0; /*0x4efc41*/
  if ( (a2 & 1) != 0 ) /*0x4efc48*/
    __3_YAXPAX_Z(Block); /*0x4efc4b*/
  return (VectorClass *)Block; /*0x4efc55*/
}


// ==== 0x004EFC60  _DynamicVectorClass_PAVWaveClass::Constructor_VectorClass_WaveClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TubeClass::Constructor_VectorClass_WaveClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efc63*/
  *Block = &vt_VectorClass_WaveClass; /*0x4efc66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efc70*/
  {
    __3_YAXPAX_Z(v3); /*0x4efc78*/
    *(Block + 1) = 0; /*0x4efc80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efc8b*/
  *(Block + 2) = 0; /*0x4efc91*/
  if ( (a2 & 1) != 0 ) /*0x4efc98*/
    __3_YAXPAX_Z(Block); /*0x4efc9b*/
  return (DynamicVector *)Block; /*0x4efca5*/
}


// ==== 0x004EFCB0  _VectorClass_PAVOverlayClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_OverlayClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efcb3*/
  *Block = &vt_VectorClass_OverlayClass; /*0x4efcb6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efcc0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efcc8*/
    *(Block + 1) = 0; /*0x4efcd0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efcdb*/
  *(Block + 2) = 0; /*0x4efce1*/
  if ( (a2 & 1) != 0 ) /*0x4efce8*/
    __3_YAXPAX_Z(Block); /*0x4efceb*/
  return (VectorClass *)Block; /*0x4efcf5*/
}


// ==== 0x004EFD00  _DynamicVectorClass_PAVOverlayClass::Constructor_VectorClass_OverlayClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TubeClass::Constructor_VectorClass_OverlayClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efd03*/
  *Block = &vt_VectorClass_OverlayClass; /*0x4efd06*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efd10*/
  {
    __3_YAXPAX_Z(v3); /*0x4efd18*/
    *(Block + 1) = 0; /*0x4efd20*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efd2b*/
  *(Block + 2) = 0; /*0x4efd31*/
  if ( (a2 & 1) != 0 ) /*0x4efd38*/
    __3_YAXPAX_Z(Block); /*0x4efd3b*/
  return (DynamicVector *)Block; /*0x4efd45*/
}


// ==== 0x004EFD50  _VectorClass_PAVSmudgeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall ParticleSystemClass_16_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efd53*/
  *Block = &vt_VectorClass_SmudgeClass; /*0x4efd56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efd60*/
  {
    __3_YAXPAX_Z(v3); /*0x4efd68*/
    *(Block + 1) = 0; /*0x4efd70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efd7b*/
  *(Block + 2) = 0; /*0x4efd81*/
  if ( (a2 & 1) != 0 ) /*0x4efd88*/
    __3_YAXPAX_Z(Block); /*0x4efd8b*/
  return (VectorClass *)Block; /*0x4efd95*/
}


// ==== 0x004EFDA0  _DynamicVectorClass_PAVSmudgeClass::finalizeParticles  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall ParticleSystemClass::finalizeParticles(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efda3*/
  *Block = &vt_VectorClass_SmudgeClass; /*0x4efda6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efdb0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efdb8*/
    *(Block + 1) = 0; /*0x4efdc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efdcb*/
  *(Block + 2) = 0; /*0x4efdd1*/
  if ( (a2 & 1) != 0 ) /*0x4efdd8*/
    __3_YAXPAX_Z(Block); /*0x4efddb*/
  return (DynamicVector *)Block; /*0x4efde5*/
}


// ==== 0x004EFDF0  _VectorClass_PAVTerrainClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall ParticleSystemClass_32_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efdf3*/
  *Block = &vt_VectorClass_TerrainClass; /*0x4efdf6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efe00*/
  {
    __3_YAXPAX_Z(v3); /*0x4efe08*/
    *(Block + 1) = 0; /*0x4efe10*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efe1b*/
  *(Block + 2) = 0; /*0x4efe21*/
  if ( (a2 & 1) != 0 ) /*0x4efe28*/
    __3_YAXPAX_Z(Block); /*0x4efe2b*/
  return (VectorClass *)Block; /*0x4efe35*/
}


// ==== 0x004EFE40  _DynamicVectorClass_PAVTerrainClass::Constructor_VectorClass_TerrainClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall ParticleSystemClass_32_::Constructor_VectorClass_TerrainClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efe43*/
  *Block = &vt_VectorClass_TerrainClass; /*0x4efe46*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efe50*/
  {
    __3_YAXPAX_Z(v3); /*0x4efe58*/
    *(Block + 1) = 0; /*0x4efe60*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efe6b*/
  *(Block + 2) = 0; /*0x4efe71*/
  if ( (a2 & 1) != 0 ) /*0x4efe78*/
    __3_YAXPAX_Z(Block); /*0x4efe7b*/
  return (DynamicVector *)Block; /*0x4efe85*/
}


// ==== 0x004EFE90  _VectorClass_PAVAircraftClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_AircraftClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efe93*/
  *Block = &vt_VectorClass_AircraftClass; /*0x4efe96*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efea0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efea8*/
    *(Block + 1) = 0; /*0x4efeb0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efebb*/
  *(Block + 2) = 0; /*0x4efec1*/
  if ( (a2 & 1) != 0 ) /*0x4efec8*/
    __3_YAXPAX_Z(Block); /*0x4efecb*/
  return (VectorClass *)Block; /*0x4efed5*/
}


// ==== 0x004EFEE0  _DynamicVectorClass_PAVAircraftClass::Constructor_VectorClass_AircraftClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall ParticleSystemClass_32_::Constructor_VectorClass_AircraftClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efee3*/
  *Block = &vt_VectorClass_AircraftClass; /*0x4efee6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efef0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efef8*/
    *(Block + 1) = 0; /*0x4eff00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4eff0b*/
  *(Block + 2) = 0; /*0x4eff11*/
  if ( (a2 & 1) != 0 ) /*0x4eff18*/
    __3_YAXPAX_Z(Block); /*0x4eff1b*/
  return (DynamicVector *)Block; /*0x4eff25*/
}


// ==== 0x004EFF30  _VectorClass_PAVUnitClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_UnitClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4eff33*/
  *Block = &vt_VectorClass_UnitClass; /*0x4eff36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4eff40*/
  {
    __3_YAXPAX_Z(v3); /*0x4eff48*/
    *(Block + 1) = 0; /*0x4eff50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4eff5b*/
  *(Block + 2) = 0; /*0x4eff61*/
  if ( (a2 & 1) != 0 ) /*0x4eff68*/
    __3_YAXPAX_Z(Block); /*0x4eff6b*/
  return (VectorClass *)Block; /*0x4eff75*/
}


// ==== 0x004EFF80  _DynamicVectorClass_PAVUnitClass::Constructor_VectorClass_UnitClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_UnitClass::Constructor_VectorClass_UnitClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4eff83*/
  *Block = &vt_VectorClass_UnitClass; /*0x4eff86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4eff90*/
  {
    __3_YAXPAX_Z(v3); /*0x4eff98*/
    *(Block + 1) = 0; /*0x4effa0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4effab*/
  *(Block + 2) = 0; /*0x4effb1*/
  if ( (a2 & 1) != 0 ) /*0x4effb8*/
    __3_YAXPAX_Z(Block); /*0x4effbb*/
  return (DynamicVector *)Block; /*0x4effc5*/
}


// ==== 0x004EFFD0  _VectorClass_PAVHouseClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_HouseClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4effd3*/
  *Block = &vt_VectorClass_HouseClass; /*0x4effd6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4effe0*/
  {
    __3_YAXPAX_Z(v3); /*0x4effe8*/
    *(Block + 1) = 0; /*0x4efff0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efffb*/
  *(Block + 2) = 0; /*0x4f0001*/
  if ( (a2 & 1) != 0 ) /*0x4f0008*/
    __3_YAXPAX_Z(Block); /*0x4f000b*/
  return (VectorClass *)Block; /*0x4f0015*/
}

