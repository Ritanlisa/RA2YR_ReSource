// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00600010  _VectorClass_PAVSpotLightClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x60001a*/
}


// ==== 0x00600020  _VectorClass_PAVSpotLightClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x600022*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x60002d*/
  {
    v3 = 0; /*0x60002f*/
    if ( v2 <= 0 ) /*0x600033*/
      return 1; /*0x600053*/
    v4 = (_DWORD *)this->Items; /*0x600035*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x60003b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x600044*/
    {
      ++v3; /*0x600046*/
      ++v4; /*0x600047*/
      if ( v3 >= v2 ) /*0x60004c*/
        return 1; /*0x60004c*/
    }
  }
  return 0; /*0x60004e*/
}


// ==== 0x00600060  _VectorClass_PAVSpotLightClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x60006c*/
  {
    this->IsInitialized = 0; /*0x600076*/
    if ( a3 ) /*0x60007c*/
      v4 = a3; /*0x600092*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x60008e*/
    this->IsInitialized = 1; /*0x600096*/
    if ( v4 ) /*0x60009a*/
    {
      if ( this->Items ) /*0x6000a5*/
      {
        v6 = this->Capacity; /*0x6000ac*/
        if ( a2 < v6 ) /*0x6000b1*/
          v6 = a2; /*0x6000b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6000b9*/
          ++i; /*0x6000be*/
        if ( this->IsAllocated ) /*0x6000cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6000d6*/
          this->Items = 0; /*0x6000de*/
        }
      }
      this->Items = v4; /*0x6000e7*/
      this->Capacity = a2; /*0x6000ef*/
      this->IsAllocated = a3 == 0; /*0x6000f2*/
      return 1; /*0x6000f8*/
    }
    else
    {
      return 0; /*0x60009f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x600102*/
    return 1; /*0x600108*/
  }
}


// ==== 0x00600110  _VectorClass_PAVSpotLightClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SpotLightClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x60011d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x600123*/
    *(_DWORD *)(this + 4) = 0; /*0x60012b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x60012e*/
  *(_DWORD *)(this + 8) = 0; /*0x600131*/
}


// ==== 0x00600140  _VectorClass_PAVSpotLightClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x600140*/
    return 0; /*0x600148*/
  v3 = *(_DWORD *)(this + 8); /*0x60014e*/
  result = 0; /*0x600151*/
  if ( v3 <= 0 ) /*0x600155*/
    return -1; /*0x60016c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x60015b*/
  {
    if ( ++result >= v3 ) /*0x60016a*/
      return -1; /*0x60016a*/
  }
  return result; /*0x60014a*/
}


// ==== 0x00600180  _VectorClass_PAVSpotLightClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpotLightClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x600180*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x600195*/
  else
    return 0; /*0x600187*/
}


// ==== 0x006001A0  _DynamicVectorClass_PAVSpotLightClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SpotLightClass::sub_6001A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6001ac*/
  {
    this->IsInitialized = 0; /*0x6001b2*/
    if ( a3 ) /*0x6001b8*/
      v4 = a3; /*0x6001ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6001ca*/
    this->IsInitialized = 1; /*0x6001d2*/
    if ( !v4 ) /*0x6001d6*/
      return 0; /*0x60024a*/
    if ( this->Items ) /*0x6001d8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6001df*/
      if ( a2 < v5 ) /*0x6001e4*/
        v5 = a2; /*0x6001e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6001ec*/
        ++i; /*0x6001f1*/
      if ( this->IsAllocated ) /*0x6001fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x600209*/
        this->Items = 0; /*0x600211*/
      }
    }
    this->Items = v4; /*0x60021a*/
    this->DynamicVector_field_0x8 = a2; /*0x600222*/
    this->IsAllocated = a3 == 0; /*0x600225*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x60022e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x600231*/
  if ( v7 < this->Items ) /*0x600239*/
    this->Items = v7; /*0x60023b*/
  return 1; /*0x60023e*/
}


// ==== 0x00600250  _DynamicVectorClass_PAVSpotLightClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SpotLightClass::sub_600250(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x600250*/
  result = 0; /*0x600253*/
  if ( v2 <= 0 ) /*0x600258*/
    return -1; /*0x60026f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x60025e*/
  {
    if ( ++result >= v2 ) /*0x60026d*/
      return -1; /*0x60026d*/
  }
  return result; /*0x600272*/
}


// ==== 0x00600280  _VectorClass_PAVSpotLightClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_SpotLightClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x600283*/
  *Block = &vt_VectorClass_SpotLightClass; /*0x600286*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x600290*/
  {
    __3_YAXPAX_Z(v3); /*0x600298*/
    *(Block + 1) = 0; /*0x6002a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6002ab*/
  *(Block + 2) = 0; /*0x6002b1*/
  if ( (a2 & 1) != 0 ) /*0x6002b8*/
    __3_YAXPAX_Z(Block); /*0x6002bb*/
  return (VectorClass *)Block; /*0x6002c5*/
}


// ==== 0x006002D0  _DynamicVectorClass_PAVSpotLightClass::Constructor_VectorClass_SpotLightClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_SpotLightClass::Constructor_VectorClass_SpotLightClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6002d3*/
  *Block = &vt_VectorClass_SpotLightClass; /*0x6002d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6002e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6002e8*/
    *(Block + 1) = 0; /*0x6002f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6002fb*/
  *(Block + 2) = 0; /*0x600301*/
  if ( (a2 & 1) != 0 ) /*0x600308*/
    __3_YAXPAX_Z(Block); /*0x60030b*/
  return (DynamicVector *)Block; /*0x600315*/
}


// ==== 0x00600320  sub_600320  this=-  sig=ida-proto ====
int sub_600320()
{
  MEMORY[0xAC18B0] = 0; /*0x600322*/
  MEMORY[0xAC18B4] = 0; /*0x600327*/
  MEMORY[0xAC18B8] = 0; /*0x60032c*/
  MEMORY[0xAC18BC] = 0; /*0x600331*/
  return 0; /*0x600336*/
}


// ==== 0x00600340  sub_600340  this=-  sig=ida-proto ====
void sub_600340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x60034c*/
  MEMORY[0xAC1B40] = Math::Sqrt(v0 + v0); /*0x60035e*/
}


// ==== 0x00600370  sub_600370  this=-  sig=ida-proto ====
void sub_600370()
{
  MEMORY[0xAC48A0] = MEMORY[0xAC1B40] / 60.0; /*0x60037c*/
}


// ==== 0x00600390  sub_600390  this=-  sig=ida-proto ====
void sub_600390()
{
  MEMORY[0xAC4838] = 1.0 / MEMORY[0xAC48A0]; /*0x60039c*/
}


// ==== 0x006003B0  sub_6003B0  this=-  sig=ida-proto ====
void sub_6003B0()
{
  MEMORY[0xAC4830] = 0.0174532925199433 * 45.0; /*0x6003bc*/
}


// ==== 0x006003D0  sub_6003D0  this=-  sig=ida-proto ====
void sub_6003D0()
{
  MEMORY[0xAC1B88] = 0.0174532925199433 * 60.0; /*0x6003dc*/
}


// ==== 0x006003F0  sub_6003F0  this=-  sig=ida-proto ====
void sub_6003F0()
{
  MEMORY[0xAC1898] = 0.0174532925199433 * 90.0; /*0x6003fc*/
}


// ==== 0x00600410  sub_600410  this=-  sig=ida-proto ====
__int64 sub_600410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC1898] - MEMORY[0xAC1B88]); /*0x600422*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC1B40] * 0.5); /*0x600436*/
  MEMORY[0xAC48AC] = result; /*0x60043b*/
  return result; /*0x600440*/
}


// ==== 0x00600450  sub_600450  this=-  sig=ida-proto ====
void sub_600450()
{
  MEMORY[0xAC1CA0] = Math::ArcTan((double)MEMORY[0xAC48AC] * 0.00390625); /*0x600467*/
}


// ==== 0x00600480  sub_600480  this=-  sig=ida-proto ====
void sub_600480()
{
  MEMORY[0xAC4610] = Math::ArcTan((double)(2 * MEMORY[0xAC48AC]) / MEMORY[0xAC1B40]); /*0x6004a2*/
}


// ==== 0x006004B0  sub_6004B0  this=-  sig=ida-proto ====
__int64 sub_6004B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC48AC]) + 0.5); /*0x6004cb*/
  MEMORY[0xAC489C] = result; /*0x6004d0*/
  return result; /*0x6004d6*/
}


// ==== 0x006004E0  sub_6004E0  this=-  sig=ida-proto ====
int sub_6004E0()
{
  MEMORY[0xAC1B38] = 0; /*0x6004e2*/
  MEMORY[0xAC1B3A] = 0; /*0x6004e8*/
  return 0; /*0x6004ee*/
}


// ==== 0x006004F0  sub_6004F0  this=-  sig=ida-proto ====
int sub_6004F0()
{
  MEMORY[0xAC1DF8] = 0; /*0x6004f2*/
  MEMORY[0xAC1DFC] = 0; /*0x6004f7*/
  MEMORY[0xAC1E00] = 0; /*0x6004fc*/
  return 0; /*0x600501*/
}


// ==== 0x00600510  sub_600510  this=-  sig=ida-proto ====
int sub_600510()
{
  MEMORY[0xAC4890] = 0; /*0x600515*/
  MEMORY[0xAC4888] = 128; /*0x60051f*/
  MEMORY[0xAC488C] = 128; /*0x600524*/
  return 128; /*0x600529*/
}


// ==== 0x00600530  sub_600530  this=-  sig=ida-proto ====
int sub_600530()
{
  sub_6B9450(MEMORY[0xAC4848]); /*0x600535*/
  return atexit(unknown_libname_26); /*0x600545*/
}


// ==== 0x00600550  unknown_libname_26  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_26()
{
  HashTable::Clear((int)MEMORY[0xAC4848]); /*0x600555*/
}


// ==== 0x00600630  Gadget::InitProperties  this=Gadget  sig=csp ====
_DWORD *__thiscall Gadget_InitProperties(_DWORD *this)
{
  unknown_libname_74(this + 1); /*0x600636*/
  unknown_libname_74(this + 2); /*0x60063e*/
  *this = 0; /*0x600646*/
  *(this + 3) = -1; /*0x60064c*/
  *(this + 5) = -1; /*0x60064f*/
  *(this + 4) = 0; /*0x600652*/
  return this; /*0x60065b*/
}


// ==== 0x00600660  ObjectClass::ReadPointerFromECX  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall ReadPointerFromECX(void *this)
{
  return *(ObjectClass **)this; /*0x600662*/
}


// ==== 0x00600670  ComboBoxOwnerDraw::GetWidthHeight  this=ComboBoxOwnerDraw  sig=csp ====
int __thiscall sub_600670(_DWORD *this)
{
  return *this * this->ComboBoxOwnerDraw_field_0x04; /*0x600676*/
}


// ==== 0x00600680  ComboBoxOwnerDraw::MatchDimensions  this=CampaignClass  sig=csp ====
bool __thiscall ComboBoxOwnerDraw::MatchDimensions(_DWORD *this, CCINIClass *aP1)
{
  return aP1->headNode[0] == this->vtable2 && *(_DWORD *)aP1->__pad_0 == *this; /*0x60068d*/
}


// ==== 0x006006B0  sub_6006B0  this=-  sig=ida-proto ====
int sub_6006B0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x6006b0*/
  MEMORY[0xAC1B68] = 0.2; /*0x6006b7*/
  MEMORY[0xAC1B70] = 0.8; /*0x6006cb*/
  MEMORY[0xAC1B78] = 128; /*0x6006df*/
  v1 = 0; /*0x6006e4*/
  do /*0x6006e9*/
  {
    ++v1; /*0x6006e6*/
    v0 >>= 1; /*0x6006e7*/
  }
  while ( v0 ); /*0x6006e9*/
  MEMORY[0xAC1B58] = 0; /*0x6006eb*/
  MEMORY[0xAC1B54] = v1 - 1; /*0x6006f9*/
  MEMORY[0xAC1B4C] = 0; /*0x6006ff*/
  MEMORY[0xAC1B5C] = 0; /*0x600705*/
  MEMORY[0xAC1B50] = 1 << (v1 - 1); /*0x60070b*/
  MEMORY[0xAC1B48] = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x600723*/
  memset(MEMORY[0xAC1B48], 0, 4 * MEMORY[0xAC1B50]); /*0x600729*/
  MEMORY[0xAC1B60] = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600730*/
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

  v0 = MEMORY[0xAC1B50]; /*0x600750*/
  for ( i = 0; i < MEMORY[0xAC1B50]; v0 = MEMORY[0xAC1B50] ) /*0x60075d*/
  {
    v2 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B48] + i); /*0x600764*/
    while ( v2 ) /*0x600769*/
    {
      v3 = v2; /*0x60076b*/
      v2 = (_DWORD *)v2[2]; /*0x60076d*/
      __3_YAXPAX_Z(v3); /*0x600771*/
    }
    *((_DWORD *)MEMORY[0xAC1B48] + i++) = 0; /*0x600784*/
  }
  v4 = MEMORY[0xAC1B78]; /*0x600795*/
  MEMORY[0xAC1B4C] = 0; /*0x60079b*/
  if ( v0 > MEMORY[0xAC1B78] ) /*0x6007a7*/
  {
    do /*0x60085a*/
    {
      if ( MEMORY[0xAC1B5C] || v0 <= v4 ) /*0x6007bd*/
        break; /*0x6007bd*/
      v5 = (int *)MEMORY[0xAC1B48]; /*0x6007c9*/
      v6 = v0; /*0x6007cf*/
      MEMORY[0xAC1B50] = v0 >> 1; /*0x6007d4*/
      --MEMORY[0xAC1B54]; /*0x6007e0*/
      MEMORY[0xAC1B48] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6007f9*/
      memset(MEMORY[0xAC1B48], 0, 4 * MEMORY[0xAC1B50]); /*0x600801*/
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
              v10 = MEMORY[0xAC1B60](v9) & ((1 << MEMORY[0xAC1B54]) - 1); /*0x600825*/
              v11 = *((_DWORD *)MEMORY[0xAC1B48] + v10); /*0x60082c*/
              *((_DWORD *)MEMORY[0xAC1B48] + v10) = v9; /*0x60082f*/
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
      v4 = MEMORY[0xAC1B78]; /*0x60084a*/
      v0 = MEMORY[0xAC1B50]; /*0x600850*/
    }
    while ( MEMORY[0xAC1B50] > (unsigned int)MEMORY[0xAC1B78] ); /*0x60085a*/
  }
  __3_YAXPAX_Z(MEMORY[0xAC1B48]); /*0x600866*/
}


// ==== 0x00600880  sub_600880  this=-  sig=ida-proto ====
int sub_600880()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600880*/
  MEMORY[0xAC18E0] = 0.2; /*0x600887*/
  MEMORY[0xAC18E8] = 0.8; /*0x60089b*/
  MEMORY[0xAC18F0] = 128; /*0x6008af*/
  v1 = 0; /*0x6008b4*/
  do /*0x6008b9*/
  {
    ++v1; /*0x6008b6*/
    v0 >>= 1; /*0x6008b7*/
  }
  while ( v0 ); /*0x6008b9*/
  MEMORY[0xAC18D0] = 0; /*0x6008bb*/
  MEMORY[0xAC18CC] = v1 - 1; /*0x6008c9*/
  MEMORY[0xAC18C4] = 0; /*0x6008cf*/
  MEMORY[0xAC18D4] = 0; /*0x6008d5*/
  MEMORY[0xAC18C8] = 1 << (v1 - 1); /*0x6008db*/
  MEMORY[0xAC18C0] = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x6008f3*/
  memset(MEMORY[0xAC18C0], 0, 4 * MEMORY[0xAC18C8]); /*0x6008f9*/
  MEMORY[0xAC18D8] = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600900*/
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

  v0 = MEMORY[0xAC18C8]; /*0x600920*/
  for ( i = 0; i < MEMORY[0xAC18C8]; v0 = MEMORY[0xAC18C8] ) /*0x60092d*/
  {
    v2 = (_DWORD *)*((_DWORD *)MEMORY[0xAC18C0] + i); /*0x600934*/
    while ( v2 ) /*0x600939*/
    {
      v3 = v2; /*0x60093b*/
      v2 = (_DWORD *)v2[2]; /*0x60093d*/
      __3_YAXPAX_Z(v3); /*0x600941*/
    }
    *((_DWORD *)MEMORY[0xAC18C0] + i++) = 0; /*0x600954*/
  }
  v4 = MEMORY[0xAC18F0]; /*0x600965*/
  MEMORY[0xAC18C4] = 0; /*0x60096b*/
  if ( v0 > MEMORY[0xAC18F0] ) /*0x600977*/
  {
    do /*0x600a2a*/
    {
      if ( MEMORY[0xAC18D4] || v0 <= v4 ) /*0x60098d*/
        break; /*0x60098d*/
      v5 = (int *)MEMORY[0xAC18C0]; /*0x600999*/
      v6 = v0; /*0x60099f*/
      MEMORY[0xAC18C8] = v0 >> 1; /*0x6009a4*/
      --MEMORY[0xAC18CC]; /*0x6009b0*/
      MEMORY[0xAC18C0] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6009c9*/
      memset(MEMORY[0xAC18C0], 0, 4 * MEMORY[0xAC18C8]); /*0x6009d1*/
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
              v10 = MEMORY[0xAC18D8](v9) & ((1 << MEMORY[0xAC18CC]) - 1); /*0x6009f5*/
              v11 = *((_DWORD *)MEMORY[0xAC18C0] + v10); /*0x6009fc*/
              *((_DWORD *)MEMORY[0xAC18C0] + v10) = v9; /*0x6009ff*/
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
      v4 = MEMORY[0xAC18F0]; /*0x600a1a*/
      v0 = MEMORY[0xAC18C8]; /*0x600a20*/
    }
    while ( MEMORY[0xAC18C8] > (unsigned int)MEMORY[0xAC18F0] ); /*0x600a2a*/
  }
  __3_YAXPAX_Z(MEMORY[0xAC18C0]); /*0x600a36*/
}


// ==== 0x00600A50  sub_600A50  this=-  sig=ida-proto ====
int sub_600A50()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600a50*/
  MEMORY[0xAC1B20] = 0.2; /*0x600a57*/
  MEMORY[0xAC1B28] = 0.8; /*0x600a6b*/
  MEMORY[0xAC1B30] = 128; /*0x600a7f*/
  v1 = 0; /*0x600a84*/
  do /*0x600a89*/
  {
    ++v1; /*0x600a86*/
    v0 >>= 1; /*0x600a87*/
  }
  while ( v0 ); /*0x600a89*/
  MEMORY[0xAC1B10] = 0; /*0x600a8b*/
  MEMORY[0xAC1B0C] = v1 - 1; /*0x600a99*/
  MEMORY[0xAC1B04] = 0; /*0x600a9f*/
  MEMORY[0xAC1B14] = 0; /*0x600aa5*/
  MEMORY[0xAC1B08] = 1 << (v1 - 1); /*0x600aab*/
  MEMORY[0xAC1B00] = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x600ac3*/
  memset(MEMORY[0xAC1B00], 0, 4 * MEMORY[0xAC1B08]); /*0x600ac9*/
  MEMORY[0xAC1B18] = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600ad0*/
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

  v0 = MEMORY[0xAC1B08]; /*0x600af1*/
  v1 = 0; /*0x600afa*/
  for ( i = 0; v1 < MEMORY[0xAC1B08]; v0 = MEMORY[0xAC1B08] ) /*0x600b04*/
  {
    for ( j = *((_DWORD *)MEMORY[0xAC1B00] + v1); j; v1 = i ) /*0x600b10*/
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
    *((_DWORD *)MEMORY[0xAC1B00] + v1 - 1) = 0; /*0x600b74*/
  }
  v6 = MEMORY[0xAC1B30]; /*0x600b81*/
  MEMORY[0xAC1B04] = 0; /*0x600b87*/
  if ( v0 > MEMORY[0xAC1B30] ) /*0x600b8f*/
  {
    do /*0x600c46*/
    {
      if ( MEMORY[0xAC1B14] || v0 <= v6 ) /*0x600ba5*/
        break; /*0x600ba5*/
      v7 = (int *)MEMORY[0xAC1B00]; /*0x600bb1*/
      v8 = v0; /*0x600bb7*/
      MEMORY[0xAC1B08] = v0 >> 1; /*0x600bbb*/
      --MEMORY[0xAC1B0C]; /*0x600bc5*/
      MEMORY[0xAC1B00] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x600bdd*/
      memset(MEMORY[0xAC1B00], 0, 4 * MEMORY[0xAC1B08]); /*0x600be5*/
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
              v12 = MEMORY[0xAC1B18](v11) & ((1 << MEMORY[0xAC1B0C]) - 1); /*0x600c09*/
              v13 = *((_DWORD *)MEMORY[0xAC1B00] + v12); /*0x600c10*/
              *((_DWORD *)MEMORY[0xAC1B00] + v12) = v11; /*0x600c13*/
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
      v6 = MEMORY[0xAC1B30]; /*0x600c36*/
      v0 = MEMORY[0xAC1B08]; /*0x600c3c*/
    }
    while ( MEMORY[0xAC1B08] > (unsigned int)MEMORY[0xAC1B30] ); /*0x600c46*/
  }
  __3_YAXPAX_Z(MEMORY[0xAC1B00]); /*0x600c53*/
}


// ==== 0x00600C70  NavigateDialogTab  this=-  sig=csp ====
char __fastcall NavigateDialogTab(HWND hCtl, bool a2)
{
  HWND Parent; // eax
  HWND NextDlgTabItem; // eax

  Parent = GetParent(hCtl); /*0x600c77*/
  NextDlgTabItem = GetNextDlgTabItem(Parent, hCtl, a2); /*0x600c86*/
  if ( NextDlgTabItem == hCtl ) /*0x600c90*/
    return 0; /*0x600c9c*/
  SetFocus(NextDlgTabItem); /*0x600c93*/
  return 1; /*0x600c8e*/
}


// ==== 0x00600CA0  ValidateDialogEvent  this=-  sig=csp ====
int __fastcall ValidateDialogEvent(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x600cac*/
  if ( !MEMORY[0xAC1B04] ) /*0x600cb0*/
    goto LABEL_5; /*0x600cb0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x600cd1*/
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


// ==== 0x00601360  Event::IsValidActionType  this=Event  sig=csp ====
bool __thiscall Event_IsValidActionType(void *this)
{
  return this == (void *)268 /*0x6015d4*/
      || this == (void *)148
      || this == (void *)182
      || this == (void *)163
      || this == (void *)115
      || this == (void *)216
      || this == (void *)3003
      || this == (void *)245
      || this == (void *)261
      || this == (void *)226
      || this == (void *)213
      || this == (void *)693
      || this == (void *)183
      || this == (void *)692
      || this == (void *)257
      || this == (void *)297
      || this == (void *)3015
      || this == (void *)3014
      || this == (void *)215
      || this == (void *)264
      || this == (void *)188
      || this == (void *)189
      || this == (void *)187
      || this == (void *)181
      || this == (void *)3002
      || this == (void *)255
      || this == (void *)234
      || this == (void *)107
      || this == (void *)256
      || this == (void *)258
      || this == (void *)184
      || this == (void *)214
      || this == (void *)259
      || this == (void *)287
      || this == (void *)293
      || this == (void *)277
      || this == (void *)290
      || this == (void *)274
      || this == (void *)231
      || this == (void *)278
      || this == (void *)194
      || this == (void *)201
      || this == (void *)285
      || this == (void *)284
      || this == (void *)275
      || this == (void *)254
      || this == (void *)265
      || this == (void *)271
      || this == (void *)279
      || this == (void *)276
      || this == (void *)195
      || this == (void *)292
      || this == (void *)230
      || this == (void *)243
      || this == (void *)244
      || this == (void *)700
      || this == (void *)283
      || this == (void *)270;
}


// ==== 0x006015E0  CtlDialogColorHandler  this=-  sig=csp ====
int __fastcall CtlDialogColorHandler(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  int result; // eax
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6015ec*/
  if ( !MEMORY[0xAC1B04] ) /*0x6015f0*/
    goto LABEL_5; /*0x6015f0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x601611*/
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
int __fastcall ValidateDialogControl(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x601d2c*/
  if ( !MEMORY[0xAC1B04] ) /*0x601d30*/
    goto LABEL_5; /*0x601d30*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x601d51*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x602400*/
    goto LABEL_5; /*0x602400*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x602421*/
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
    return MEMORY[0x8871E0]->GenericBeep; /*0x602462*/
  else
    return -1; /*0x60247b*/
}


// ==== 0x00602490  IsValidActionDialog  this=-  sig=csp ====
bool __fastcall IsValidActionDialog(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // esi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60249c*/
  if ( !MEMORY[0xAC1B04] ) /*0x6024a0*/
    goto LABEL_5; /*0x6024a0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6024c1*/
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
  return Event::IsValidActionType(v4) && DlgCtrlID == 1685 && !SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60262e*/
}


// ==== 0x00602AE0  Dialog::IsSpecialTemplate  this=Dialog  sig=csp ====
BOOL __thiscall Dialog::IsSpecialTemplate(void *this)
{
  return this == (void *)293 /*0x602b7a*/
      || this == (void *)231
      || this == (void *)278
      || this == (void *)194
      || this == (void *)201
      || this == (void *)285
      || this == (void *)284
      || this == (void *)276
      || this == (void *)700
      || this == (void *)275
      || this == (void *)265
      || this == (void *)271
      || this == (void *)279
      || this == (void *)230
      || this == (void *)243
      || this == (void *)244
      || this == (void *)270
      || this == (void *)274;
}


// ==== 0x00602B90  UI_Helper_602B90  this=-  sig=csp ====
bool __fastcall UI_Helper_602B90(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602b9c*/
  if ( !MEMORY[0xAC1B04] ) /*0x602ba0*/
    goto LABEL_5; /*0x602ba0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x602bc1*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x602de0*/
    goto LABEL_5; /*0x602de0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x602e01*/
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
int __fastcall LoadCampaignMissionData(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60304c*/
  if ( !MEMORY[0xAC1B04] ) /*0x603050*/
    goto LABEL_5; /*0x603050*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603071*/
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
BOOL __fastcall UI_Helper_603240(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60324c*/
  if ( !MEMORY[0xAC1B04] ) /*0x603250*/
    goto LABEL_5; /*0x603250*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603271*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x603400*/
    goto LABEL_5; /*0x603400*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603421*/
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
  int result; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x6035fc*/
  if ( !MEMORY[0xAC1B04] ) /*0x603600*/
    goto LABEL_5; /*0x603600*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603621*/
  if ( !v3 ) /*0x603626*/
    goto LABEL_5; /*0x603626*/
  while ( *v3 != v8 ) /*0x60362e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603634*/
    if ( !v3 ) /*0x60363c*/
      goto LABEL_5; /*0x60363c*/
  }
  v7 = v3 + 1; /*0x6037a4*/
  if ( v7 ) /*0x6037a9*/
    v4 = v7[27]; /*0x6037af*/
  else
LABEL_5:
    v4 = 0; /*0x60363e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603647*/
  result = VtableStub_72E280(); /*0x603649*/
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
      return VtableStub_72D450(); /*0x6037e0*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x603880*/
    goto LABEL_5; /*0x603880*/
  v4 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6038a1*/
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
    return LoadFileSHP(MEMORY[0x833674], a3); /*0x603a08*/
  }
  if ( v5 == 148 ) /*0x603a2c*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603a33*/
      return MEMORY[0xB0FB48]; /*0x603a3d*/
    if ( DlgCtrlID == 1772 ) /*0x603a45*/
      return MEMORY[0xB0FB10]; /*0x603a4f*/
  }
  else if ( v5 == 259 || v5 == 3015 ) /*0x603a60*/
  {
    if ( DlgCtrlID == 1835 ) /*0x603a67*/
      return MEMORY[0xB0FB30]; /*0x603a71*/
  }
  else if ( v5 == 196 && DlgCtrlID == 1961 ) /*0x603a81*/
  {
    return (void *)MEMORY[0xB0FAD0]; /*0x603a8b*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x603ab6*/
    return 0; /*0x603ab6*/
  v3 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603ad7*/
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
  if ( !strcmp(ClassName, MEMORY[0x833728]) || !strcmp(ClassName, MEMORY[0x833720]) ) /*0x603c05*/
    return 192; /*0x603c2c*/
  if ( !strcmp(ClassName, MEMORY[0x833718]) /*0x603c99*/
    && MEMORY[0xAC1B04]
    && (v7 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
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
    if ( strcmp(ClassName, MEMORY[0x83370C]) ) /*0x603cd1*/
      return 0; /*0x603cf8*/
    v9 = (GetWindowLongA(v8, -16) & 3) != 3; /*0x603d0c*/
  }
  if ( !v9 ) /*0x603d11*/
    return 0; /*0x603afb*/
  return 192; /*0x603af0*/
}


// ==== 0x00603D30  CacheDialogInvalidate  this=-  sig=csp ====
HWND *__fastcall CacheDialogInvalidate(HWND hWnd, HWND a2)
{
  HWND *result; // eax
  HWND v5; // [esp+8h] [ebp-4h] BYREF

  result = (HWND *)MEMORY[0xAC1B04]; /*0x603d31*/
  v5 = hWnd; /*0x603d3e*/
  if ( MEMORY[0xAC1B04] ) /*0x603d42*/
  {
    result = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603d63*/
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
LRESULT __fastcall Diplomacy_Helper(HWND hWnd, unsigned __int8 a2)
{
  return SendMessageA(hWnd, 0x4E5u, 0, a2); /*0x603dc5*/
}


// ==== 0x00603DD0  globalHelper_003DD0  this=-  sig=csp ====
LRESULT __fastcall globalHelper_003DD0(HWND hWnd, unsigned __int8 a2)
{
  return SendMessageA(hWnd, 0x4E6u, 0, a2); /*0x603de5*/
}


// ==== 0x00603E40  sub_603E40  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_603E40(int a1, int a2)
{
  _DWORD *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)MEMORY[0xAC1B04]; /*0x603e41*/
  v4 = a1; /*0x603e4b*/
  if ( MEMORY[0xAC1B04] ) /*0x603e4f*/
  {
    result = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603e70*/
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
  void *v8; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v8); /*0x603f0d*/
  lParam[0] = a3; /*0x603f1e*/
  lParam[1] = a4; /*0x603f2b*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f2f*/
  WideString::AssignFromPtr(a1, (const wchar_t **)&v8); /*0x603f3c*/
  DeleteAndZero::Alt(&v8); /*0x603f45*/
  return a1; /*0x603f4c*/
}


// ==== 0x00603F60  WOLobby_Setup  this=-  sig=csp ====
wchar_t **__fastcall WOLobby_Setup(wchar_t **a1, HWND a2, LPARAM a3)
{
  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  void *v7; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v7); /*0x603f6d*/
  lParam[0] = a3; /*0x603f83*/
  lParam[1] = -1; /*0x603f87*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f8f*/
  WideString::AssignFromPtr(a1, (const wchar_t **)&v7); /*0x603f9c*/
  DeleteAndZero::Alt(&v7); /*0x603fa5*/
  return a1; /*0x603fac*/
}


// ==== 0x00603FC0  sub_603FC0  this=-  sig=ida-proto ====
wchar_t **__fastcall sub_603FC0(wchar_t **a1, HWND a2, HWND hWnd, unsigned __int16 a4, void *a5)
{
  LPARAM lParam[2]; // [esp+10h] [ebp-Ch] BYREF
  void *v9; // [esp+18h] [ebp-4h] BYREF
  LRESULT v10; // [esp+24h] [ebp+8h]

  v10 = SendMessageA(hWnd, 0x4E8u, 0, a4 | ((unsigned __int16)a5 << 16)); /*0x603ffc*/
  unknown_libname_74(&v9); /*0x604000*/
  lParam[0] = (LPARAM)hWnd; /*0x604016*/
  lParam[1] = v10; /*0x60401a*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x60401e*/
  WideString::AssignFromPtr((wchar_t **)&a5, (const wchar_t **)&v9); /*0x604029*/
  DeleteAndZero::Alt(&v9); /*0x604032*/
  WideString::AssignFromPtr(a1, (const wchar_t **)&a5); /*0x60403e*/
  DeleteAndZero::Alt(&a5); /*0x604047*/
  return a1; /*0x60404e*/
}


// ==== 0x00604060  GetSkirmishMenuOwnerName  this=-  sig=csp ====
wchar_t **__fastcall GetSkirmishMenuOwnerName(SkirmishDialog *aP0, HWND a2, HWND a3)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax

  v4 = DlgSkirmishMenuProc(a2, a3); /*0x60406b*/
  if ( v4 ) /*0x604072*/
  {
    StringCSF = GetStringCSF((wchar_t *)v4, 0, &stru_830620.__pad_14B0[7264], 1957); /*0x604082*/
    WideString::Assign((wchar_t **)aP0, (CampaignScore *)StringCSF); /*0x60408a*/
  }
  else
  {
    WideString::Assign((wchar_t **)aP0, (CampaignScore *)&stru_87C374.__pad_579C[23588]); /*0x60409c*/
  }
  return (wchar_t **)aP0; /*0x604091*/
}


// ==== 0x006040B0  DlgSkirmishMenuProc  this=char*  sig=csp ====
char *__fastcall DlgSkirmishMenuProc(HWND a1, HWND a2)
{
  HWND *v3; // eax
  int v4; // esi
  char *result; // eax
  _DWORD *v6; // eax
  HWND *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  HWND *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  HWND v13; // [esp+8h] [ebp-4h] BYREF

  v13 = a1;
  if ( !MEMORY[0xAC1B04] )
    goto LABEL_5;
  v3 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v13) & ((1 << MEMORY[0xAC1B0C]) - 1)));
  if ( !v3 )
    goto LABEL_5;
  while ( *v3 != v13 )
  {
    v3 = (HWND *)v3[129];
    if ( !v3 )
      goto LABEL_5;
  }
  v6 = v3 + 1;
  if ( v6 )
    v4 = v6[27];
  else
LABEL_5:
    v4 = 0;
  result = (char *)GetDlgCtrlID(a2);
  if ( result )
  {
    if ( result == (char *)-1 )
      return 0;
    switch ( v4 )
    {
      case 226:
        if ( result == (char *)1667 )
          return MEMORY[0x835784];
        if ( result == (char *)1668 )
          return MEMORY[0x83576C];
        if ( result == (char *)1400 )
          return MEMORY[0x835754];
        if ( result == (char *)1670 )
          return MEMORY[0x83573C];
        if ( result == (char *)1372 )
          return MEMORY[0x835724];
        if ( result != (char *)1375 )
        {
          if ( result == (char *)1006 )
            return MEMORY[0x835708];
          return 0;
        }
        return MEMORY[0x833DE4];
      case 256:
        if ( result == (char *)1672 )
          return MEMORY[0x8356EC];
        if ( result == (char *)1673 )
          return MEMORY[0x8356CC];
        if ( result == (char *)1401 )
          return MEMORY[0x8356B0];
        if ( result == (char *)1670 )
          return MEMORY[0x835698];
        return 0;
      case 148:
        if ( result == (char *)1770 )
          return (char *)aSttAlliedcampa;
        if ( result == (char *)1771 )
          return MEMORY[0x83567C];
        if ( result == (char *)1772 )
          return (char *)aSttSovietcampa;
        if ( result == (char *)1295 )
          return MEMORY[0x83565C];
        if ( result == (char *)1038 )
          return MEMORY[0x835644];
        if ( result == (char *)1109 )
          return MEMORY[0x835630];
        if ( result == (char *)1670 )
          return MEMORY[0x835618];
        return 0;
      case 183:
        if ( result == (char *)1317 )
          return MEMORY[0x835608];
        if ( result == (char *)1039 )
          return MEMORY[0x8355F4];
        if ( result == (char *)1670 )
          return MEMORY[0x8355E0];
        return 0;
      case 258:
        if ( result == (char *)1696 )
          return MEMORY[0x8355C8];
        if ( result == (char *)1291
          || result == (char *)1294
          || result == (char *)1302
          || result == (char *)1306
          || result == (char *)1307
          || result == (char *)1308
          || result == (char *)1309 )
        {
          return MEMORY[0x8353E4];
        }
        if ( result == (char *)1754
          || result == (char *)1755
          || result == (char *)1756
          || result == (char *)1757
          || result == (char *)1758
          || result == (char *)1759
          || result == (char *)1760
          || result == (char *)1761 )
        {
          return MEMORY[0x835400];
        }
        if ( result == (char *)1697
          || result == (char *)1296
          || result == (char *)1299
          || result == (char *)1310
          || result == (char *)1300
          || result == (char *)1311
          || result == (char *)1312
          || result == (char *)1313 )
        {
          return MEMORY[0x835418];
        }
        if ( result == (char *)1698
          || result == (char *)1314
          || result == (char *)1315
          || result == (char *)1316
          || result == (char *)1317
          || result == (char *)1318
          || result == (char *)1319
          || result == (char *)1320 )
        {
          return MEMORY[0x835434];
        }
        if ( result != (char *)1699
          && result != (char *)1700
          && result != (char *)1701
          && result != (char *)1702
          && result != (char *)1703
          && result != (char *)1704
          && result != (char *)1706
          && result != (char *)1707 )
        {
          if ( result != (char *)1901
            && result != (char *)1902
            && result != (char *)1903
            && result != (char *)1904
            && result != (char *)1905
            && result != (char *)1906
            && result != (char *)1907
            && result != (char *)1908 )
          {
            if ( result == (char *)1321 )
              return MEMORY[0x8355B0];
            if ( result == (char *)1297 )
              return MEMORY[0x835594];
            if ( result == (char *)1292 )
              return MEMORY[0x83557C];
            if ( result == (char *)1450 )
              return MEMORY[0x835560];
            if ( result == (char *)1683 )
              return MEMORY[0x835544];
            if ( result == (char *)1358 )
              return MEMORY[0x835528];
            if ( result == (char *)1690 )
              return MEMORY[0x83550C];
            if ( result == (char *)1693 )
              return MEMORY[0x8354EC];
            if ( result == (char *)1686 )
              return MEMORY[0x8354D4];
            if ( result == (char *)1128 )
              return MEMORY[0x8354B8];
            if ( result == (char *)1772 )
              return MEMORY[0x83549C];
            if ( result == (char *)1448 )
              return MEMORY[0x835480];
            if ( result == (char *)1559 )
              return MEMORY[0x835464];
            if ( result == (char *)1472 )
              return MEMORY[0x83544C];
            return 0;
          }
          return MEMORY[0x83377C];
        }
        return (char *)aSttHostcombost;
      case 187:
        if ( result == (char *)1345 )
          return MEMORY[0x8353CC];
        if ( result == (char *)1342 )
          return (char *)MEMORY[0x8353B8];
        if ( result == (char *)1353 )
          return (char *)MEMORY[0x8353A4];
        if ( result == (char *)1343 )
          return MEMORY[0x835390];
        if ( result == (char *)1344 )
          return MEMORY[0x83537C];
        if ( result == (char *)1740 )
          return MEMORY[0x835368];
        if ( result != (char *)1741 )
        {
          if ( result == (char *)1888 )
            return MEMORY[0x835354];
          if ( result == (char *)1742 )
            return MEMORY[0x83533C];
          if ( result == (char *)1472 )
            return MEMORY[0x835328];
          return 0;
        }
LABEL_590:
        if ( !MEMORY[0xAC10C8] )
          return MEMORY[0x83444C];
        return MEMORY[0x83533C];
      case 188:
      case 194:
        if ( result == (char *)1746
          || result == (char *)1747
          || result == (char *)1748
          || result == (char *)1749
          || result == (char *)1750
          || result == (char *)1751
          || result == (char *)1752
          || result == (char *)1753 )
        {
          return MEMORY[0x83374C];
        }
        if ( result == (char *)1041
          || result == (char *)1042
          || result == (char *)1043
          || result == (char *)1044
          || result == (char *)1045
          || result == (char *)1046
          || result == (char *)1047
          || result == (char *)1048 )
        {
          return (char *)MEMORY[0x833768];
        }
        if ( result == (char *)1754
          || result == (char *)1755
          || result == (char *)1756
          || result == (char *)1757
          || result == (char *)1758
          || result == (char *)1759
          || result == (char *)1760
          || result == (char *)1761 )
        {
          return MEMORY[0x833C04];
        }
        if ( result == (char *)1697
          || result == (char *)1296
          || result == (char *)1299
          || result == (char *)1310
          || result == (char *)1300
          || result == (char *)1311
          || result == (char *)1312
          || result == (char *)1313 )
        {
          return MEMORY[0x833C18];
        }
        if ( result == (char *)1698
          || result == (char *)1314
          || result == (char *)1315
          || result == (char *)1316
          || result == (char *)1317
          || result == (char *)1318
          || result == (char *)1319
          || result == (char *)1320 )
        {
          return MEMORY[0x833C30];
        }
        if ( result == (char *)1699
          || result == (char *)1700
          || result == (char *)1701
          || result == (char *)1702
          || result == (char *)1703
          || result == (char *)1704
          || result == (char *)1706
          || result == (char *)1707 )
        {
          return (char *)aSttHostcombost;
        }
        if ( result == (char *)1901
          || result == (char *)1902
          || result == (char *)1903
          || result == (char *)1904
          || result == (char *)1905
          || result == (char *)1906
          || result == (char *)1907
          || result == (char *)1908 )
        {
          return MEMORY[0x83377C];
        }
        if ( result == (char *)1321 )
          return MEMORY[0x8338A4];
        if ( result == (char *)1026 )
          return MEMORY[0x83388C];
        if ( result == (char *)1359 )
          return MEMORY[0x833878];
        if ( result == (char *)1000 )
          return MEMORY[0x833860];
        if ( result == (char *)1358 )
          return MEMORY[0x833848];
        if ( result == (char *)1690 )
          return MEMORY[0x833830];
        if ( result == (char *)1693 )
          return MEMORY[0x833814];
        if ( result == (char *)1357 )
          return MEMORY[0x833800];
        if ( result == (char *)1343 )
          return MEMORY[0x833C44];
        if ( result == (char *)1344 )
          return MEMORY[0x833C58];
        if ( result == (char *)1128 )
          return MEMORY[0x8337E8];
        if ( result == (char *)1448 )
          return MEMORY[0x8337D0];
        if ( result == (char *)1416 )
          return MEMORY[0x8337BC];
        if ( result == (char *)1450 )
          return MEMORY[0x8337A4];
        if ( result == (char *)2 )
        {
          if ( v4 == 194 )
            return MEMORY[0x833FF0];
          else
            return MEMORY[0x833790];
        }
        if ( result == (char *)1474 )
          return MEMORY[0x834318];
        break;
      case 189:
      case 201:
        if ( result == (char *)1746
          || result == (char *)1747
          || result == (char *)1748
          || result == (char *)1749
          || result == (char *)1750
          || result == (char *)1751
          || result == (char *)1752
          || result == (char *)1753 )
        {
          return MEMORY[0x8338B8];
        }
        if ( result == (char *)1041
          || result == (char *)1042
          || result == (char *)1043
          || result == (char *)1044
          || result == (char *)1045
          || result == (char *)1046
          || result == (char *)1047
          || result == (char *)1048 )
        {
          return (char *)MEMORY[0x8338D4];
        }
        if ( result == (char *)1754
          || result == (char *)1755
          || result == (char *)1756
          || result == (char *)1757
          || result == (char *)1758
          || result == (char *)1759
          || result == (char *)1760
          || result == (char *)1761 )
        {
          return MEMORY[0x8338EC];
        }
        if ( result == (char *)1697
          || result == (char *)1296
          || result == (char *)1299
          || result == (char *)1310
          || result == (char *)1300
          || result == (char *)1311
          || result == (char *)1312
          || result == (char *)1313 )
        {
          return MEMORY[0x833904];
        }
        if ( result == (char *)1698
          || result == (char *)1314
          || result == (char *)1315
          || result == (char *)1316
          || result == (char *)1317
          || result == (char *)1318
          || result == (char *)1319
          || result == (char *)1320 )
        {
          return MEMORY[0x83391C];
        }
        if ( result == (char *)1699
          || result == (char *)1700
          || result == (char *)1701
          || result == (char *)1702
          || result == (char *)1703
          || result == (char *)1704
          || result == (char *)1706
          || result == (char *)1707 )
        {
          return MEMORY[0x833930];
        }
        if ( result == (char *)1901
          || result == (char *)1902
          || result == (char *)1903
          || result == (char *)1904
          || result == (char *)1905
          || result == (char *)1906
          || result == (char *)1907
          || result == (char *)1908 )
        {
          return MEMORY[0x833944];
        }
        if ( result == (char *)1321 )
          return MEMORY[0x833A80];
        if ( result == (char *)1026 )
          return MEMORY[0x833A68];
        if ( result == (char *)1359 )
          return MEMORY[0x833A54];
        if ( result == (char *)1000 )
          return MEMORY[0x833A3C];
        if ( result == (char *)1358 )
          return MEMORY[0x833A24];
        if ( result == (char *)1690 )
          return MEMORY[0x833A0C];
        if ( result == (char *)1693 )
          return MEMORY[0x8339F0];
        if ( result == (char *)1357 )
          return MEMORY[0x8339DC];
        if ( result == (char *)1343 )
          return MEMORY[0x8339C8];
        if ( result == (char *)1344 )
          return MEMORY[0x8339B4];
        if ( result == (char *)1128 )
          return MEMORY[0x83399C];
        if ( result == (char *)1448 )
          return MEMORY[0x833984];
        if ( result == (char *)1439 )
          return MEMORY[0x83396C];
        if ( result == (char *)2 )
        {
          if ( v4 == 201 )
            return MEMORY[0x833FF0];
          else
            return MEMORY[0x833958];
        }
        if ( result == (char *)1474 )
          return MEMORY[0x834318];
        break;
      case 257:
        if ( result == (char *)1677 )
          return MEMORY[0x835310];
        if ( result == (char *)1678 )
          return MEMORY[0x8352F8];
        if ( result == (char *)1679 )
          return MEMORY[0x8352DC];
        if ( result == (char *)1670 )
          return MEMORY[0x8352C4];
        return 0;
      case 297:
        if ( result == (char *)1861 )
          return MEMORY[0x8352B4];
        if ( result == (char *)1670 )
          return MEMORY[0x83529C];
        if ( result == (char *)1860 )
          return MEMORY[0x83528C];
        return 0;
      case 213:
        if ( result == (char *)1486 )
          return MEMORY[0x835270];
        if ( result == (char *)1485 )
          return MEMORY[0x835254];
        if ( result == (char *)1670 )
          return MEMORY[0x83523C];
        if ( result == (char *)1652 )
          return MEMORY[0x835224];
        if ( result == (char *)1323 )
          return MEMORY[0x83520C];
        if ( result == (char *)1773 )
          return MEMORY[0x8351F4];
        if ( result == (char *)1321 )
          return MEMORY[0x8351DC];
        if ( result == (char *)1295 )
          return MEMORY[0x8351C0];
        if ( result == (char *)1537 )
          return MEMORY[0x8351A4];
        if ( result == (char *)1540 )
          return MEMORY[0x83518C];
        if ( result == (char *)1538 )
          return MEMORY[0x835174];
        if ( result == (char *)1322 )
          return MEMORY[0x83515C];
        if ( result == (char *)1306 )
          return MEMORY[0x83513C];
        if ( result == (char *)1327 )
          return MEMORY[0x835124];
        if ( result == (char *)1330 )
          return MEMORY[0x83510C];
        if ( result == (char *)1334 )
          return MEMORY[0x8350F4];
        return 0;
      case 215:
        if ( result == (char *)1492 )
          return MEMORY[0x8350DC];
        if ( result == (char *)1489 )
          return MEMORY[0x8350C0];
        if ( result == (char *)1491 )
          return MEMORY[0x8350A4];
        if ( result == (char *)1890 )
          return MEMORY[0x83508C];
        if ( result == (char *)1495 )
          return MEMORY[0x835074];
        if ( result == (char *)1 )
          return MEMORY[0x83505C];
        if ( result == (char *)2 )
          return MEMORY[0x835040];
        return 0;
      case 163:
        if ( result == (char *)1223 )
          return MEMORY[0x835024];
        if ( result == (char *)1769 )
          return MEMORY[0x835004];
        if ( result == (char *)1224 )
          return MEMORY[0x834FE8];
        if ( result == (char *)1596 )
          return MEMORY[0x834FCC];
        if ( result == (char *)1597 )
          return MEMORY[0x834FB4];
        if ( result == (char *)1229 )
          return MEMORY[0x834F9C];
        if ( result == (char *)1231 )
          return MEMORY[0x834F80];
        if ( result == (char *)1595 )
          return MEMORY[0x834F64];
        if ( result == (char *)1232 )
          return MEMORY[0x834F48];
        if ( result == (char *)1670 )
          return MEMORY[0x834F30];
        return 0;
      case 268:
        if ( result == (char *)1767 )
          return MEMORY[0x834F14];
        if ( result == (char *)1059 )
          return MEMORY[0x834EF8];
        return 0;
      case 182:
        if ( result == (char *)1737 )
        {
          v13 = a2;
          if ( MEMORY[0xAC1B04] )
          {
            v7 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v13) & ((1 << MEMORY[0xAC1B0C]) - 1)));
            if ( v7 )
            {
              while ( *v7 != v13 )
              {
                v7 = (HWND *)v7[129];
                if ( !v7 )
                  return MEMORY[0x834EEC];
              }
              v8 = v7 + 1;
              if ( v8 )
              {
                v9 = v8[48];
                if ( v9 == 3 )
                  return MEMORY[0x834ECC];
                if ( v9 == 2 )
                  return MEMORY[0x834EB0];
              }
            }
          }
        }
        else
        {
          if ( result != (char *)1810 )
          {
            if ( result == (char *)1670 )
              return MEMORY[0x834E54];
            return 0;
          }
          v13 = a2;
          if ( MEMORY[0xAC1B04] )
          {
            v10 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v13) & ((1 << MEMORY[0xAC1B0C]) - 1)));
            if ( v10 )
            {
              while ( *v10 != v13 )
              {
                v10 = (HWND *)v10[129];
                if ( !v10 )
                  return MEMORY[0x834EEC];
              }
              v11 = v10 + 1;
              if ( v11 )
              {
                v12 = v11[48];
                if ( v12 == 4 )
                  return MEMORY[0x834E90];
                if ( v12 == 5 )
                  return MEMORY[0x834E70];
              }
            }
          }
        }
        return MEMORY[0x834EEC];
      case 217:
        if ( result == (char *)1473 )
          return MEMORY[0x834E3C];
        if ( result == (char *)1738 )
          return MEMORY[0x834E20];
        return 0;
      case 115:
        if ( result == (char *)1041
          || result == (char *)1042
          || result == (char *)1043
          || result == (char *)1044
          || result == (char *)1045
          || result == (char *)1046
          || result == (char *)1047
          || result == (char *)1048 )
        {
          return MEMORY[0x834D8C];
        }
        if ( result == (char *)1743
          || result == (char *)1744
          || result == (char *)1745
          || result == (char *)1746
          || result == (char *)1747
          || result == (char *)1748
          || result == (char *)1749 )
        {
          return MEMORY[0x834DA8];
        }
        if ( result == (char *)1750
          || result == (char *)1751
          || result == (char *)1752
          || result == (char *)1753
          || result == (char *)1762
          || result == (char *)1763
          || result == (char *)1764 )
        {
          return MEMORY[0x834DC0];
        }
        if ( result == (char *)1049
          || result == (char *)1050
          || result == (char *)1051
          || result == (char *)1052
          || result == (char *)1053
          || result == (char *)1054
          || result == (char *)1055
          || result == (char *)1056 )
        {
          return MEMORY[0x834DDC];
        }
        if ( result == (char *)1059 )
          return MEMORY[0x834E04];
        if ( result == (char *)1840 )
          return MEMORY[0x834DF4];
        return 0;
      case 3003:
        if ( result == (char *)1321 )
          return MEMORY[0x834D70];
        if ( result == (char *)1322 )
          return MEMORY[0x834D54];
        if ( result == (char *)1323 )
          return MEMORY[0x834D38];
        if ( result == (char *)1538 )
          return MEMORY[0x834D1C];
        if ( result == (char *)1537 )
          return MEMORY[0x834CFC];
        if ( result == (char *)1540 )
          return MEMORY[0x834CE4];
        if ( result == (char *)1306 )
          return MEMORY[0x834CC4];
        if ( result == (char *)1325 )
          return MEMORY[0x834CA8];
        if ( result == (char *)1324 )
          return MEMORY[0x834C8C];
        if ( result == (char *)1670 )
          return MEMORY[0x834C74];
        return 0;
      case 261:
        if ( result == (char *)1029 )
          return MEMORY[0x834C58];
        if ( result == (char *)1002 )
          return MEMORY[0x834C40];
        if ( result == (char *)1031 )
          return MEMORY[0x834C28];
        if ( result == (char *)1030 )
          return MEMORY[0x834C10];
        if ( result == (char *)1032 )
          return MEMORY[0x834BF4];
        if ( result == (char *)1003 )
          return MEMORY[0x834BD4];
        if ( result == (char *)1569 )
          return MEMORY[0x834BB8];
        if ( result == (char *)1568 )
          return MEMORY[0x834B9C];
        if ( result == (char *)1730 )
          return MEMORY[0x834B80];
        if ( result == (char *)1731 )
          return MEMORY[0x834B64];
        if ( result == (char *)1732 )
          return MEMORY[0x834B48];
        if ( result == (char *)1733 )
          return MEMORY[0x834B2C];
        if ( result == (char *)1472 )
          return MEMORY[0x834B10];
        return 0;
      case 693:
        if ( result == (char *)1320 )
          return MEMORY[0x834AF8];
        if ( result == (char *)1736 )
          return MEMORY[0x834AE0];
        if ( result == (char *)1670 )
          return MEMORY[0x83529C];
        return 0;
      case 692:
        if ( result == (char *)1319 )
          return MEMORY[0x834AC8];
        if ( result == (char *)1318 )
          return MEMORY[0x834AB4];
        if ( result == (char *)1735 )
          return MEMORY[0x834A9C];
        if ( result == (char *)1670 )
          return MEMORY[0x834A84];
        return 0;
      case 264:
        if ( result == (char *)1746 )
          return MEMORY[0x834A6C];
        if ( result == (char *)1002 )
          return MEMORY[0x834A54];
        if ( result != (char *)1041
          && result != (char *)1042
          && result != (char *)1043
          && result != (char *)1044
          && result != (char *)1045
          && result != (char *)1046
          && result != (char *)1047
          && result != (char *)1048 )
        {
          if ( result != (char *)1049
            && result != (char *)1050
            && result != (char *)1051
            && result != (char *)1052
            && result != (char *)1053
            && result != (char *)1054
            && result != (char *)1055
            && result != (char *)1056 )
          {
            if ( result != (char *)1699
              && result != (char *)1700
              && result != (char *)1705
              && result != (char *)1708
              && result != (char *)1711
              && result != (char *)1714
              && result != (char *)1717
              && result != (char *)1720 )
            {
              if ( result != (char *)1701
                && result != (char *)1703
                && result != (char *)1706
                && result != (char *)1709
                && result != (char *)1712
                && result != (char *)1715
                && result != (char *)1718
                && result != (char *)1721 )
              {
                if ( result != (char *)1702
                  && result != (char *)1704
                  && result != (char *)1707
                  && result != (char *)1710
                  && result != (char *)1713
                  && result != (char *)1716
                  && result != (char *)1719
                  && result != (char *)1722 )
                {
                  goto LABEL_885;
                }
                return MEMORY[0x833BA0];
              }
              return MEMORY[0x833B88];
            }
            return MEMORY[0x833B70];
          }
          return MEMORY[0x833B58];
        }
        return MEMORY[0x833B40];
      case 181:
        if ( result == (char *)1313 )
          return MEMORY[0x834A34];
        if ( result == (char *)1310 )
          return MEMORY[0x834A18];
        if ( result == (char *)1311 )
          return MEMORY[0x8349FC];
        if ( result == (char *)1312 )
          return MEMORY[0x8349E0];
        if ( result == (char *)1314 )
          return MEMORY[0x8349C4];
        if ( result == (char *)1670 )
          return MEMORY[0x8349A8];
        return 0;
      case 3002:
        if ( result == (char *)1313 )
          return MEMORY[0x834988];
        if ( result == (char *)1314 )
          return MEMORY[0x83496C];
        if ( result == (char *)1670 )
          return MEMORY[0x834950];
        return 0;
      case 234:
        if ( result == (char *)1600
          || result == (char *)1602
          || result == (char *)1601
          || result == (char *)1603
          || result == (char *)1604
          || result == (char *)1605
          || result == (char *)1606
          || result == (char *)1607 )
        {
          return MEMORY[0x8348C8];
        }
        if ( result == (char *)1608
          || result == (char *)1609
          || result == (char *)1610
          || result == (char *)1611
          || result == (char *)1612
          || result == (char *)1613
          || result == (char *)1614
          || result == (char *)1615 )
        {
          return MEMORY[0x8348E4];
        }
        if ( result == (char *)1616 )
          return MEMORY[0x834938];
        if ( result == (char *)1617 )
          return MEMORY[0x834920];
        if ( result == (char *)2 )
          return MEMORY[0x834900];
        return 0;
      case 107:
        if ( result == (char *)1771 )
          return MEMORY[0x8348AC];
        if ( result == (char *)1363 )
          return MEMORY[0x834894];
        if ( result == (char *)1128 )
          return MEMORY[0x834878];
        if ( result == (char *)1733 )
          return MEMORY[0x83485C];
        if ( result == (char *)1411 )
          return MEMORY[0x834840];
        if ( result == (char *)1472 )
          return MEMORY[0x834824];
        return 0;
      case 184:
        if ( result == (char *)1327 )
          return MEMORY[0x83480C];
        if ( result == (char *)1330 )
          return MEMORY[0x8347F4];
        if ( result == (char *)1334 )
          return MEMORY[0x8347DC];
        if ( result == (char *)1328 )
          return MEMORY[0x8347C4];
        if ( result == (char *)1331 )
          return MEMORY[0x8347AC];
        if ( result == (char *)1332 )
          return MEMORY[0x834794];
        if ( result == (char *)1329 )
          return MEMORY[0x83477C];
        if ( result == (char *)1333 )
          return MEMORY[0x834764];
        if ( result == (char *)1670 )
          return MEMORY[0x83474C];
        return 0;
      case 259:
        if ( result == (char *)1777 )
          return MEMORY[0x834734];
        if ( result == (char *)1778 )
          return MEMORY[0x83471C];
        if ( result == (char *)1779 )
          return MEMORY[0x834708];
        if ( result == (char *)1780 )
          return MEMORY[0x8346F0];
        if ( result == (char *)1782 )
          return MEMORY[0x8346DC];
        if ( result == (char *)1059 )
          return MEMORY[0x8346C0];
        return 0;
      case 255:
        if ( result == (char *)1007 )
          return MEMORY[0x8346A4];
        if ( result == (char *)1321 )
          return MEMORY[0x834684];
        if ( result == (char *)1313 )
          return MEMORY[0x834664];
        if ( result == (char *)1314 )
          return MEMORY[0x834644];
        if ( result == (char *)1653 )
          return MEMORY[0x834950];
        return 0;
      case 290:
        if ( result == (char *)1785 )
          return MEMORY[0x834624];
        if ( result == (char *)1 )
          return MEMORY[0x83460C];
        if ( result == (char *)2 )
          return MEMORY[0x8345F4];
        return 0;
      case 274:
        if ( result == (char *)1785 )
          return MEMORY[0x8345D8];
        if ( result == (char *)1 )
          return MEMORY[0x8345C4];
        if ( result == (char *)2 )
          return MEMORY[0x8345B0];
        return 0;
      case 278:
        if ( result == (char *)1673 )
          return MEMORY[0x834598];
        if ( result == (char *)1776 )
          return MEMORY[0x834584];
        if ( result == (char *)1777 )
          return MEMORY[0x834570];
        if ( result == (char *)1793 )
          return MEMORY[0x834558];
        if ( result == (char *)1780 )
          return MEMORY[0x834544];
        if ( result == (char *)1781 )
          return MEMORY[0x834530];
        if ( result == (char *)1579 )
          return MEMORY[0x834518];
        if ( result == (char *)1581 )
          return MEMORY[0x834504];
        if ( result == (char *)1888 )
          return MEMORY[0x835354];
        if ( result == (char *)1474 )
          return MEMORY[0x8344F0];
        if ( result == (char *)1794 )
          return MEMORY[0x8344E0];
        if ( result == (char *)1795 )
          return MEMORY[0x8344CC];
        if ( result == (char *)1796 )
          return MEMORY[0x8344B8];
        if ( result == (char *)1670 )
          return MEMORY[0x8344A4];
        return 0;
      case 275:
        if ( result == (char *)1373 )
          return MEMORY[0x834488];
        if ( result == (char *)1343 )
          return MEMORY[0x835390];
        if ( result == (char *)1344 )
          return MEMORY[0x83537C];
        if ( result == (char *)1005 )
          return MEMORY[0x834478];
        if ( result == (char *)1341 )
          return MEMORY[0x834460];
        if ( result == (char *)1579 )
          return MEMORY[0x835368];
        if ( result != (char *)1581 )
        {
          if ( result == (char *)1888 )
            return MEMORY[0x835354];
          if ( result == (char *)1673 )
            return MEMORY[0x83443C];
          if ( result == (char *)1672 )
            return MEMORY[0x834430];
          if ( result == (char *)1955 )
            return MEMORY[0x83441C];
          if ( result == (char *)1958 )
            return MEMORY[0x834410];
          if ( result == (char *)1567 )
            return MEMORY[0x8343FC];
          if ( result == (char *)1670 )
            return MEMORY[0x8343E8];
          if ( result == (char *)1897 )
            return MEMORY[0x8343D0];
          if ( result == (char *)1896 )
            return MEMORY[0x8343B8];
          if ( result == (char *)1895 )
            return MEMORY[0x8343A0];
          if ( result == (char *)1893 )
            return MEMORY[0x834388];
          if ( result == (char *)1894 )
            return MEMORY[0x834374];
          if ( result == (char *)1898 )
            return MEMORY[0x83435C];
          if ( result == (char *)1899 )
            return MEMORY[0x834344];
          if ( result == (char *)1900 )
            return MEMORY[0x83432C];
          if ( result == (char *)1474 )
            return MEMORY[0x834318];
          return 0;
        }
        goto LABEL_590;
      case 254:
        if ( result == (char *)1008 )
          return MEMORY[0x8342FC];
        if ( result == (char *)1 )
          return MEMORY[0x8342EC];
        if ( result == (char *)2 )
          return MEMORY[0x8342D8];
        return 0;
      case 271:
        if ( result == (char *)1576 )
          return MEMORY[0x8342C0];
        if ( result == (char *)1836 )
          return MEMORY[0x8342A8];
        if ( result == (char *)1837 )
          return MEMORY[0x834290];
        if ( result == (char *)1337 )
          return MEMORY[0x83427C];
        if ( result == (char *)1770 )
          return MEMORY[0x834268];
        if ( result == (char *)1771 )
          return MEMORY[0x834254];
        if ( result == (char *)1670 )
          return MEMORY[0x834240];
        if ( result == (char *)1772 )
          return MEMORY[0x834228];
        return 0;
      case 285:
        if ( result == (char *)1576 )
          return MEMORY[0x834218];
        if ( result == (char *)1836 )
          return MEMORY[0x8342A8];
        if ( result == (char *)1337 )
          return MEMORY[0x83427C];
        if ( result == (char *)1770 )
          return MEMORY[0x834268];
        if ( result == (char *)1670 )
          return MEMORY[0x834240];
        if ( result == (char *)1772 )
          return MEMORY[0x834228];
        if ( result == (char *)1577 )
          return MEMORY[0x8341FC];
        if ( result == (char *)1578 )
          return MEMORY[0x8342FC];
        if ( result == (char *)1697 )
          return MEMORY[0x8341E0];
        if ( result == (char *)1698 )
          return MEMORY[0x8341C4];
        return 0;
      case 279:
        if ( result == (char *)1343 )
          return MEMORY[0x8341B0];
        if ( result == (char *)1472 )
        {
          if ( MEMORY[0xA8B238][0] != 4 )
            return MEMORY[0x834188];
          result = MEMORY[0x83419C];
          if ( MEMORY[0xA8B244] != 3 )
            return MEMORY[0x834188];
          return result;
        }
        return 0;
      case 276:
        if ( result == (char *)1576 )
          return MEMORY[0x83416C];
        if ( result == (char *)1577 )
          return MEMORY[0x8341FC];
        if ( result == (char *)1578 )
          return MEMORY[0x8342FC];
        if ( result == (char *)1697 )
          return MEMORY[0x8341E0];
        if ( result == (char *)1698 )
          return MEMORY[0x8341C4];
        if ( result == (char *)1791 )
          return MEMORY[0x83414C];
        if ( result == (char *)1776 )
          return MEMORY[0x834130];
        if ( result == (char *)1777 )
          return MEMORY[0x834114];
        if ( result == (char *)1793 )
          return MEMORY[0x8340F4];
        if ( result == (char *)1780 )
          return MEMORY[0x8340D8];
        if ( result == (char *)1781 )
          return MEMORY[0x8340BC];
        if ( result == (char *)1671 )
          return MEMORY[0x83443C];
        if ( result == (char *)1672 )
          return MEMORY[0x834430];
        if ( result == (char *)1955 )
          return MEMORY[0x83441C];
        if ( result == (char *)1670 )
          return MEMORY[0x8340A0];
        if ( result == (char *)1770 )
          return MEMORY[0x834268];
        if ( result == (char *)1771 )
          return MEMORY[0x834254];
        if ( result == (char *)1772 )
          return MEMORY[0x834228];
        if ( result == (char *)1907 )
          return MEMORY[0x83408C];
        return 0;
      case 195:
        if ( result == (char *)1352 )
          return MEMORY[0x834070];
        if ( result == (char *)1836 )
          return MEMORY[0x834058];
        if ( result == (char *)1577 )
          return MEMORY[0x83403C];
        if ( result == (char *)1644 )
          return MEMORY[0x83401C];
        if ( result == (char *)1 )
          return MEMORY[0x834008];
        if ( result == (char *)2 )
          return MEMORY[0x833FF0];
        if ( result == (char *)1822 )
          return MEMORY[0x833FD0];
        return 0;
      case 700:
        if ( result == (char *)1525 )
          return MEMORY[0x833FBC];
        if ( result == (char *)1526 )
          return MEMORY[0x833F9C];
        if ( result == (char *)1527 )
          return MEMORY[0x833F88];
        if ( result == (char *)1528 )
          return MEMORY[0x833F74];
        if ( result == (char *)1529 )
          return MEMORY[0x833F54];
        if ( result == (char *)1 )
          return MEMORY[0x833F40];
        if ( result == (char *)1594 )
          return MEMORY[0x833F24];
        if ( result == (char *)2 )
          return MEMORY[0x833F0C];
        if ( result == (char *)1773 )
          return MEMORY[0x8351F4];
        if ( result == (char *)1530 )
          return MEMORY[0x833EF0];
        if ( result == (char *)1531 )
          return MEMORY[0x833ED4];
        if ( result == (char *)1909 )
          return MEMORY[0x833EBC];
        if ( result == (char *)1908 )
          return MEMORY[0x833EA0];
        return 0;
      case 270:
        if ( result == (char *)1776 )
          return MEMORY[0x834130];
        if ( result == (char *)1777 )
          return MEMORY[0x834114];
        if ( result == (char *)1793 )
          return MEMORY[0x8340F4];
        if ( result == (char *)1780 )
          return MEMORY[0x8340D8];
        if ( result == (char *)1781 )
          return MEMORY[0x8340BC];
        if ( result == (char *)1760 )
          return MEMORY[0x833E84];
        if ( result == (char *)1761 )
          return MEMORY[0x833E68];
        if ( result == (char *)1762 )
          return MEMORY[0x83443C];
        if ( result == (char *)1763 )
          return MEMORY[0x833E54];
        if ( result == (char *)1764 )
          return MEMORY[0x833E38];
        if ( result == (char *)1670 )
          return MEMORY[0x833E24];
        if ( result == (char *)1905 )
          return MEMORY[0x833E14];
        if ( result == (char *)1943 )
          return MEMORY[0x833E00];
        goto LABEL_797;
      case 284:
        if ( result == (char *)1760 )
          return MEMORY[0x833E84];
        if ( result == (char *)1761 )
          return MEMORY[0x833E68];
        if ( result == (char *)1762 )
          return MEMORY[0x83443C];
        if ( result == (char *)1763 )
          return MEMORY[0x833E54];
        if ( result == (char *)1670 )
          return MEMORY[0x833E24];
        if ( result == (char *)1905 )
          return MEMORY[0x833E14];
LABEL_797:
        if ( result != (char *)1375 )
          return 0;
        return MEMORY[0x833DE4];
      case 231:
        if ( result == (char *)1582 )
          return MEMORY[0x833DCC];
        if ( result == (char *)1583 )
          return MEMORY[0x833DB8];
        if ( result == (char *)1584 )
          return MEMORY[0x833DA0];
        if ( result == (char *)1574 )
          return MEMORY[0x833D88];
        if ( result == (char *)1585 || result == (char *)1802 )
          return MEMORY[0x833D1C];
        if ( result == (char *)1 )
          return MEMORY[0x833D6C];
        if ( result == (char *)1398 )
          return MEMORY[0x833D50];
        if ( result == (char *)2 )
          return MEMORY[0x833D38];
        return 0;
      case 230:
      case 243:
      case 244:
        if ( result == (char *)1 )
          return MEMORY[0x833B2C];
        if ( result == (char *)2 )
          return MEMORY[0x833B14];
        if ( result == (char *)1576 )
          return MEMORY[0x833AFC];
        if ( result == (char *)1836 )
          return MEMORY[0x833AE4];
        if ( result == (char *)1575 )
          return MEMORY[0x833ACC];
        if ( result == (char *)1509 )
          return MEMORY[0x833AB0];
        if ( result == (char *)1643 || result == (char *)1803 )
          return MEMORY[0x833A98];
        return 0;
      case 293:
        if ( result == (char *)1670 )
          return MEMORY[0x833D08];
        else
          return MEMORY[0x833CEC];
      case 3014:
        if ( result == (char *)1921 || result == (char *)1922 )
          return MEMORY[0x833B40];
        if ( result == (char *)1923 || result == (char *)1924 )
          return MEMORY[0x833B58];
        if ( result == (char *)1925 || result == (char *)1926 )
          return MEMORY[0x833B70];
        if ( result == (char *)1927 || result == (char *)1928 )
          return MEMORY[0x833B88];
        if ( result == (char *)1929 || result == (char *)1930 )
          return MEMORY[0x833BA0];
        if ( result == (char *)1843 )
          return MEMORY[0x833CCC];
        if ( result == (char *)1819 )
          return MEMORY[0x833CB4];
        if ( result == (char *)1842 )
          return MEMORY[0x833C98];
        if ( result == (char *)1745 )
          return MEMORY[0x833C80];
        if ( result == (char *)1472 )
          return MEMORY[0x833C6C];
        if ( result == (char *)1002 )
          return MEMORY[0x834A54];
        if ( result == (char *)1041 || result == (char *)1042 )
          return MEMORY[0x833B40];
        if ( result != (char *)1754 && result != (char *)1755 )
        {
          if ( result != (char *)1697 && result != (char *)1296 )
          {
            if ( result != (char *)1698 && result != (char *)1314 )
            {
              if ( result == (char *)1344 )
                return MEMORY[0x833C58];
              if ( result == (char *)1343 )
                return MEMORY[0x833C44];
              return 0;
            }
            return MEMORY[0x833C30];
          }
          return MEMORY[0x833C18];
        }
        return MEMORY[0x833C04];
      case 3015:
        if ( result == (char *)1843 )
          return MEMORY[0x833CCC];
        if ( result == (char *)1845 )
          return MEMORY[0x833BE8];
        if ( result == (char *)1842 )
          return MEMORY[0x833C98];
        if ( result == (char *)1002 )
          return MEMORY[0x833BD4];
        if ( result != (char *)1041 && result != (char *)1042 && result != (char *)1850 && result != (char *)1849 )
        {
          if ( result != (char *)1049 && result != (char *)1050 )
          {
            if ( result != (char *)1699 && result != (char *)1700 )
            {
              if ( result != (char *)1701 && result != (char *)1703 )
              {
                if ( result != (char *)1702
                  && result != (char *)1704
                  && result != (char *)1851
                  && result != (char *)1848 )
                {
LABEL_885:
                  if ( result == (char *)1745 )
                    return MEMORY[0x833BB8];
                  return 0;
                }
                return MEMORY[0x833BA0];
              }
              return MEMORY[0x833B88];
            }
            return MEMORY[0x833B70];
          }
          return MEMORY[0x833B58];
        }
        return MEMORY[0x833B40];
      default:
        return 0;
    }
    if ( result == (char *)1005 )
      return MEMORY[0x834478];
    return 0;
  }
  return result;
}


// ==== 0x00606740  SetDialogActiveFlag  this=-  sig=ida-proto ====
int __fastcall Dialog_SetActiveFlag(int a1, char a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = MEMORY[0xAC1B04]; /*0x606741*/
  v4 = a1; /*0x60674b*/
  if ( MEMORY[0xAC1B04] ) /*0x60674f*/
  {
    result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x606770*/
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


// ==== 0x006067A0  SkirmishMapGen::LookupDialogHash  this=IUnknown  sig=csp ====
char __thiscall sub_6067A0(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6067a6*/
  if ( !MEMORY[0xAC1B04] ) /*0x6067ac*/
    return 0; /*0x6067ac*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6067cd*/
  if ( !v1 ) /*0x6067d2*/
    return 0; /*0x6067d2*/
  while ( (void *)*v1 != v4 ) /*0x6067da*/
  {
    v1 = (_DWORD *)v1[129]; /*0x6067dc*/
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
int __stdcall Dialog::MapControlToAction(int hWnd, int a2)
{
  int v2; // ebp
  _DWORD *v3; // eax
  void *v4; // esi
  int v5; // edi
  bool v6; // bl
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // [esp+10h] [ebp-4h]

  v2 = hWnd; /*0x606803*/
  v15 = ((int (__stdcall *)(int))GetParent)(hWnd); /*0x606810*/
  hWnd = v15; /*0x606814*/
  if ( !dword_A8ED54[52076] ) /*0x60681f*/
    goto LABEL_5; /*0x60681f*/
  v3 = *(_DWORD **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&hWnd)); /*0x606836*/
  if ( !v3 ) /*0x60683b*/
    goto LABEL_5; /*0x60683b*/
  while ( *v3 != hWnd ) /*0x606843*/
  {
    v3 = (_DWORD *)v3[129]; /*0x606849*/
    if ( !v3 ) /*0x606851*/
      goto LABEL_5; /*0x606851*/
  }
  v8 = v3 + 1; /*0x607089*/
  if ( v8 ) /*0x60708e*/
    v4 = (void *)v8[27]; /*0x607094*/
  else
LABEL_5:
    v4 = 0; /*0x606853*/
  v5 = ((int (__stdcall *)(int))GetDlgCtrlID)(v2); /*0x60685c*/
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
     || Dialog::IsSpecialTemplate(v4))
    && v5 == 1684
    || Event::IsValidActionType(v4) && v5 == 1685
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
    && v5 == 1820
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014
     || v4 == (void *)261
     || v4 == (void *)107
     || v4 == (void *)275)
    && v5 == 1128
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (v5 == 1772 || v5 == 1448)
    || (v4 == (void *)259 || v4 == (void *)3015)
    && (v5 == 1779
     || v5 == 1780
     || v5 == 1835
     || v5 == 1775
     || v5 == 1777
     || v5 == 1776
     || v5 == 1778
     || v5 == 1695
     || v5 == 1782
     || v5 == 1843
     || v5 == 1845
     || v5 == 1842
     || v5 == 1002
     || v5 == 1846
     || v5 == 1847
     || v5 == 1852
     || v5 == 1853
     || v5 == 1854
     || v5 == 1855
     || v5 == 1856
     || v5 == 1041
     || v5 == 1042
     || v5 == 1049
     || v5 == 1050
     || v5 == 1699
     || v5 == 1700
     || v5 == 1701
     || v5 == 1703
     || v5 == 1702
     || v5 == 1704
     || v5 == 1850
     || v5 == 1849
     || v5 == 1851
     || v5 == 1848)
    || (v4 == (void *)264 || v4 == (void *)3014)
    && (v5 == 1746
     || v5 == 1002
     || v5 == 1693
     || v5 == 1695
     || v5 == 1694
     || v5 == 1696
     || v5 == 1931
     || v5 == 1480
     || v5 == 1041
     || v5 == 1042
     || v5 == 1043
     || v5 == 1044
     || v5 == 1045
     || v5 == 1046
     || v5 == 1047
     || v5 == 1048
     || v5 == 1049
     || v5 == 1050
     || v5 == 1051
     || v5 == 1052
     || v5 == 1053
     || v5 == 1054
     || v5 == 1055
     || v5 == 1056
     || v5 == 1699
     || v5 == 1700
     || v5 == 1705
     || v5 == 1708
     || v5 == 1711
     || v5 == 1714
     || v5 == 1717
     || v5 == 1720
     || v5 == 1701
     || v5 == 1703
     || v5 == 1706
     || v5 == 1709
     || v5 == 1712
     || v5 == 1715
     || v5 == 1718
     || v5 == 1721
     || v5 == 1702
     || v5 == 1704
     || v5 == 1707
     || v5 == 1710
     || v5 == 1713
     || v5 == 1716
     || v5 == 1719
     || v5 == 1722
     || v5 == 1802
     || v5 == 1803
     || v5 == 1804
     || v5 == 1805
     || v5 == 1806
     || v5 == 1807
     || v5 == 1808
     || v5 == 1809
     || v5 == 1843
     || v5 == 1842
     || v5 == 1819
     || v5 == 1845) )
  {
    goto LABEL_208; /*0x60701e*/
  }
  if ( (((int (__stdcall *)(int, int))GetWindowLongA)(v2, -16) & 0xB) == 0xB ) /*0x607034*/
  {
    hWnd = v2; /*0x60703f*/
    if ( dword_A8ED54[52076] ) /*0x607045*/
    {
      v7 = *(_DWORD **)(dword_A8ED54[52075] /*0x607066*/
                      + 4
                      * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&hWnd)
                       & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
      if ( v7 ) /*0x60706b*/
      {
        while ( *v7 != hWnd ) /*0x607073*/
        {
          v7 = (_DWORD *)v7[129]; /*0x607075*/
          if ( !v7 ) /*0x60707d*/
            goto LABEL_199; /*0x60707d*/
        }
        v9 = v7 + 1; /*0x6070a0*/
        if ( v9 ) /*0x6070a5*/
        {
          if ( !v9[26] && (unsigned __int8)IsDialogControlVisible(v15, v2) ) /*0x6070b4*/
            goto LABEL_208; /*0x6070bb*/
        }
      }
    }
  }
LABEL_199:
  if ( (((int (__stdcall *)(int, int))GetWindowLongA)(v2, -16) & 0xB) == 0xB ) /*0x6070cb*/
  {
    hWnd = v2; /*0x6070d6*/
    if ( dword_A8ED54[52076] ) /*0x6070dc*/
    {
      v10 = *(_DWORD **)(dword_A8ED54[52075] /*0x607101*/
                       + 4
                       * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&hWnd)
                        & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
      if ( v10 ) /*0x607106*/
      {
        while ( *v10 != hWnd ) /*0x607112*/
        {
          v10 = (_DWORD *)v10[129]; /*0x607114*/
          if ( !v10 ) /*0x60711c*/
            return 1; /*0x607128*/
        }
        v12 = v10 + 1; /*0x607133*/
        if ( v12 ) /*0x607138*/
        {
          if ( !v12[26] && (unsigned __int8)GetDialogDefaultButton(v15, v2) ) /*0x607147*/
          {
LABEL_208:
            hWnd = v2; /*0x607150*/
            if ( dword_A8ED54[52076] ) /*0x60715b*/
            {
              v13 = *(_DWORD **)(dword_A8ED54[52075] /*0x60717c*/
                               + 4
                               * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&hWnd)
                                & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
              if ( v13 ) /*0x607181*/
              {
                while ( *v13 != hWnd ) /*0x607189*/
                {
                  v13 = (_DWORD *)v13[129]; /*0x60718b*/
                  if ( !v13 ) /*0x607193*/
                    return 1; /*0x60719f*/
                }
                v14 = v13 + 1; /*0x6071a6*/
                if ( v14 ) /*0x6071ab*/
                  *((_BYTE *)v14 + 188) = v6; /*0x6071ad*/
              }
            }
          }
        }
      }
    }
  }
  return 1; /*0x60711e*/
}


// ==== 0x006071E0  RenderGadgetClassAnimation  this=SkirmishDialog  sig=csp ====
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
  int v52; // esi
  int v53; // eax
  char v54; // bl
  int *v55; // eax
  int v56; // eax
  void *v57; // edx
  char v60; // [esp+3Ah] [ebp-18Ah]
  char v61; // [esp+3Bh] [ebp-189h]
  HWND v62; // [esp+3Ch] [ebp-188h] BYREF
  char v63; // [esp+43h] [ebp-181h]
  int v64; // [esp+44h] [ebp-180h]
  int *v65; // [esp+48h] [ebp-17Ch]
  void *Block; // [esp+4Ch] [ebp-178h]
  int v67; // [esp+50h] [ebp-174h]
  int v68; // [esp+54h] [ebp-170h]
  int v69[2]; // [esp+58h] [ebp-16Ch] BYREF
  int v70; // [esp+60h] [ebp-164h]
  HWND hWnd; // [esp+64h] [ebp-160h]
  int v72[4]; // [esp+68h] [ebp-15Ch] BYREF
  void *v73; // [esp+78h] [ebp-14Ch]
  int v74; // [esp+7Ch] [ebp-148h]
  int v75; // [esp+80h] [ebp-144h]
  int v76; // [esp+84h] [ebp-140h] BYREF
  int v77; // [esp+88h] [ebp-13Ch]
  int v78; // [esp+8Ch] [ebp-138h]
  void *v79; // [esp+90h] [ebp-134h]
  void *v80; // [esp+94h] [ebp-130h]
  int v81; // [esp+98h] [ebp-12Ch]
  int v82; // [esp+9Ch] [ebp-128h] BYREF
  int v83; // [esp+A0h] [ebp-124h]
  int v84; // [esp+A8h] [ebp-11Ch]
  int v85; // [esp+ACh] [ebp-118h]
  int v86; // [esp+B0h] [ebp-114h]
  int v87; // [esp+B4h] [ebp-110h]
  int v88; // [esp+B8h] [ebp-10Ch]
  int v89; // [esp+BCh] [ebp-108h]
  int v90[2]; // [esp+C0h] [ebp-104h] BYREF
  int v91[2]; // [esp+C8h] [ebp-FCh] BYREF
  int v92[2]; // [esp+D0h] [ebp-F4h] BYREF
  int v93; // [esp+D8h] [ebp-ECh] BYREF
  int v94; // [esp+DCh] [ebp-E8h]
  int v95; // [esp+E0h] [ebp-E4h]
  int v96; // [esp+E4h] [ebp-E0h]
  int v97; // [esp+E8h] [ebp-DCh] BYREF
  int v98; // [esp+ECh] [ebp-D8h]
  int v99; // [esp+F0h] [ebp-D4h]
  int v100; // [esp+F4h] [ebp-D0h]
  int v101; // [esp+F8h] [ebp-CCh]
  int v102[2]; // [esp+FCh] [ebp-C8h] BYREF
  int v103[2]; // [esp+104h] [ebp-C0h] BYREF
  int v104; // [esp+10Ch] [ebp-B8h]
  void *v105; // [esp+110h] [ebp-B4h]
  _DWORD v106[4]; // [esp+114h] [ebp-B0h] BYREF
  int v107[4]; // [esp+124h] [ebp-A0h] BYREF
  _DWORD v108[4]; // [esp+134h] [ebp-90h] BYREF
  int v109[4]; // [esp+144h] [ebp-80h] BYREF
  _DWORD v110[4]; // [esp+154h] [ebp-70h] BYREF
  _DWORD v111[4]; // [esp+164h] [ebp-60h] BYREF
  struct tagRECT v112; // [esp+174h] [ebp-50h] BYREF
  struct tagRECT Rect; // [esp+184h] [ebp-40h] BYREF
  int v114; // [esp+194h] [ebp-30h] BYREF
  int v115; // [esp+19Ch] [ebp-28h] BYREF
  int v116; // [esp+1A4h] [ebp-20h] BYREF
  int v117; // [esp+1ACh] [ebp-18h] BYREF
  int v118; // [esp+1B4h] [ebp-10h] BYREF
  int v119; // [esp+1BCh] [ebp-8h] BYREF

  v2 = (int)a1;
  hWnd = a1;
  v62 = a1;
  if ( !MEMORY[0xAC1B04] )
    goto LABEL_6;
  v3 = HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v62);
  a1 = (HWND)MEMORY[0xAC1B00];
  v4 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + v3);
  if ( !v4 )
    goto LABEL_6;
  a1 = v62;
  while ( (HWND)*v4 != v62 )
  {
    v4 = (_DWORD *)v4[129];
    if ( !v4 )
      goto LABEL_6;
  }
  v7 = v4 + 1;
  if ( v7 )
    v63 = *((_BYTE *)v7 + 215);
  else
LABEL_6:
    v63 = 0;
  v62 = (HWND)v2;
  if ( !MEMORY[0xAC1B04] )
    goto LABEL_17;
  v5 = HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v62);
  a1 = (HWND)MEMORY[0xAC1B00];
  v6 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + v5);
  if ( !v6 )
    goto LABEL_17;
  a1 = v62;
  while ( (HWND)*v6 != v62 )
  {
    v6 = (_DWORD *)v6[129];
    if ( !v6 )
      goto LABEL_17;
  }
  v8 = v6 + 1;
  if ( v8 )
    v60 = *((_BYTE *)v8 + 214);
  else
LABEL_17:
    v60 = 0;
  v62 = (HWND)v2;
  if ( !MEMORY[0xAC1B04] )
    goto LABEL_23;
  v9 = HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v62);
  a1 = (HWND)MEMORY[0xAC1B00];
  v10 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + v9);
  if ( !v10 )
    goto LABEL_23;
  a1 = v62;
  while ( (HWND)*v10 != v62 )
  {
    v10 = (_DWORD *)v10[129];
    if ( !v10 )
      goto LABEL_23;
  }
  v34 = v10 + 1;
  if ( v34 )
    v61 = *((_BYTE *)v34 + 213);
  else
LABEL_23:
    v61 = 0;
  v85 = VtableStub_72E280(a1);
  v65 = (int *)UI_Helper_72E2C0();
  v79 = MEMORY[0xB0FAF8];
  v69[0] = (int)MEMORY[0xB0FAC4];
  v73 = MEMORY[0xB0F9DC];
  v105 = MEMORY[0xB0FAC0];
  v11 = VtableStub_72D450();
  v12 = MEMORY[0xB0FA20];
  v80 = MEMORY[0xB0FB00];
  v62 = (HWND)v11;
  v13 = *(_DWORD *)MEMORY[0x887310];
  v70 = MEMORY[0xB0FA20];
  v14 = (int *)(*(int (__thiscall **)(int, int *))(v13 + 120))(MEMORY[0x887310], &v82);
  v72[0] = *v14;
  v72[1] = v14[1];
  v72[2] = v14[2];
  v72[3] = v14[3];
  v109[0] = *(_DWORD *)MEMORY[0xB0FC20];
  v109[1] = *((_DWORD *)MEMORY[0xB0FC20] + 1);
  v109[2] = *((_DWORD *)MEMORY[0xB0FC20] + 2);
  v109[3] = *((_DWORD *)MEMORY[0xB0FC20] + 3);
  v107[0] = *(_DWORD *)MEMORY[0xB0FC14];
  v107[1] = *((_DWORD *)MEMORY[0xB0FC14] + 1);
  v107[2] = *((_DWORD *)MEMORY[0xB0FC14] + 2);
  v107[3] = *((_DWORD *)MEMORY[0xB0FC14] + 3);
  v97 = *(_DWORD *)MEMORY[0xB0FC18];
  v98 = *((_DWORD *)MEMORY[0xB0FC18] + 1);
  v99 = *((_DWORD *)MEMORY[0xB0FC18] + 2);
  v100 = *((_DWORD *)MEMORY[0xB0FC18] + 3);
  v15 = *(_DWORD *)MEMORY[0xB0FC10];
  v82 = *(_DWORD *)MEMORY[0xB0FC10];
  v83 = *((_DWORD *)MEMORY[0xB0FC10] + 1);
  v16 = v83;
  v17 = *((_DWORD *)MEMORY[0xB0FC10] + 2);
  v18 = *(_DWORD *)MEMORY[0xB0FC1C];
  v84 = *((_DWORD *)MEMORY[0xB0FC10] + 3);
  v93 = v18;
  v94 = *((_DWORD *)MEMORY[0xB0FC1C] + 1);
  v95 = *((_DWORD *)MEMORY[0xB0FC1C] + 2);
  v96 = *((_DWORD *)MEMORY[0xB0FC1C] + 3);
  ScreenDialogToClient(hWnd, &v112);
  GetWindowRect(hWnd, &Rect);
  v19 = Rect.left - v112.left;
  v20 = Rect.top - v112.top;
  v21 = v16;
  v22 = v12 * v84;
  if ( v61 )
  {
    v15 = v97;
    v17 = v99;
    v21 = v98;
    v22 += v83;
  }
  v110[1] = v21;
  v106[1] = v20 + v21;
  v110[3] = v22;
  v106[3] = v22;
  v110[0] = v15;
  v111[0] = v93;
  v111[1] = v94;
  v106[0] = v19 + v15;
  v110[2] = v17;
  v68 = a2 != 0 ? -1 : 1;
  v106[2] = v17;
  v111[2] = v95;
  v111[3] = v96;
  v108[2] = v95;
  v108[3] = v96;
  v108[0] = v19 + v93;
  v108[1] = v20 + v94;
  v78 = 5;
  if ( a2 )
    v78 = 10;
  v87 = 11;
  if ( a2 )
    v87 = 16;
  v89 = 1;
  if ( a2 )
    v89 = 6;
  v86 = 0;
  if ( a2 )
    v86 = 5;
  v88 = 0;
  if ( a2 )
    v88 = 5;
  v23 = hWnd;
  MEMORY[0xAC1CAC] = 0;
  EnumChildWindows(hWnd, EnumFunc, 0);
  v24 = v70;
  v74 = MEMORY[0xAC1CAC];
  v75 = v70 - 1;
  v81 = v83;
  if ( v60 )
    v81 = v83 + v84;
  MEMORY[0xAC4894] = 0;
  EnumChildWindows(v23, sub_60A250, 0);
  HIBYTE(v67) = MEMORY[0xAC4894] >= 1;
  if ( MEMORY[0xAC4894] < 1 )
    ++v75;
  v25 = v24 + 1;
  v101 = v24 + 1;
  v26 = (int *)__2_YAPAXI_Z(4 * (v24 + 3));
  Block = v26;
  v27 = 1;
  if ( v24 + 1 > 0 )
  {
    v28 = v26;
    do
      *v28++ = v27++;
    while ( v27 - 1 < v25 );
  }
  v29 = v24 + 3;
  v30 = 0;
  v26[v29 - 1] = 0;
  v26[v25] = v27 + 1;
  v26[v29 - 3] = 0;
  if ( v24 + 3 > 0 )
  {
    do
    {
      if ( v30 <= *v26 )
        v30 = *v26;
      ++v26;
      --v29;
    }
    while ( v29 );
  }
  v64 = 0;
  v104 = v30 + 6;
  if ( v30 + 6 > 0 )
  {
    v31 = (int)v65;
    v32 = v85;
    v33 = v69[0];
    while ( 1 )
    {
      v35 = (int)v73;
      if ( v60 )
      {
        v36 = Copy8Bytes(&v116, v107);
        v102[0] = *v36;
        v102[1] = v36[1];
        v37 = v64 - *((_DWORD *)Block + v70);
        if ( v37 < 0 )
        {
          DrawToSurfaceSHP(MEMORY[0x887310], v32, v35, a2 != 0 ? 6 : 0, v102, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
        else if ( v37 >= 6 && !a2 )
        {
          DrawToSurfaceSHP(MEMORY[0x887310], v32, v35, 6u, v102, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
      }
      if ( v61 )
      {
        v38 = Copy8Bytes(&v114, &v97);
        v76 = *v38;
        v77 = v38[1];
        v39 = v64 - *((_DWORD *)Block + v101);
        if ( v39 < 0 )
        {
          DrawToSurfaceSHP(MEMORY[0x887310], v32, (int)v79, a2 == 0, &v76, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
        else if ( v39 >= 6 )
        {
          DrawToSurfaceSHP(MEMORY[0x887310], v32, (int)v79, a2 != 0, &v76, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
        else
        {
          v40 = Copy8Bytes(&v118, v109);
          v76 = *v40;
          v77 = v40[1];
          DrawToSurfaceSHP(MEMORY[0x887310], v32, (int)v79, 1u, &v76, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          v41 = Copy8Bytes(&v117, &v97);
          v76 = *v41;
          v77 = v41[1];
          DrawToSurfaceSHP(
            MEMORY[0x887310],
            v32,
            (int)v105,
            v86 + v68 * v39,
            &v76,
            v72,
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
      if ( v60 )
      {
        v42 = Copy8Bytes(&v119, v107);
        v103[0] = *v42;
        v103[1] = v42[1];
        v43 = v64 - *((_DWORD *)Block + v70);
        if ( v43 < 0 )
        {
          v43 = -1;
LABEL_68:
          DrawToSurfaceSHP(
            MEMORY[0x887310],
            v32,
            (int)v73,
            v89 + v68 * v43,
            v103,
            v72,
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
          goto LABEL_69;
        }
        if ( v43 < 6 )
          goto LABEL_68;
        if ( a2 )
          DrawToSurfaceSHP(MEMORY[0x887310], v32, (int)v73, 0, v103, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
      }
LABEL_69:
      if ( v74 > 0 )
      {
        v44 = Block;
        v45 = v81;
        v65 = (int *)v74;
        do
        {
          v46 = v64 - *v44;
          v90[0] = v82;
          v90[1] = v45;
          if ( v46 < 0 )
          {
            DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, a2 != 0 ? 10 : 1, v90, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          }
          else if ( v46 >= 6 )
          {
            DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, a2 != 0 ? 1 : 10, v90, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          }
          else
          {
            DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, v78 + v68 * v46, v90, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          }
          ++v44;
          v45 += v84;
          v65 = (int *)((char *)v65 - 1);
        }
        while ( v65 );
      }
      if ( v74 < v75 )
      {
        v65 = (int *)((char *)Block + 4 * v74);
        v47 = v81 + v84 * v74;
        v48 = v75 - v74;
        while ( 1 )
        {
          v92[0] = v82;
          v49 = *v65;
          v92[1] = v47;
          v50 = v64 - v49;
          if ( v64 - v49 >= 0 )
          {
            if ( v50 >= 6 )
              goto LABEL_87;
            if ( v50 != -1 )
              break;
          }
          DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, a2 != 0 ? 0xA : 0, v92, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
LABEL_89:
          v47 += v84;
          --v48;
          ++v65;
          if ( !v48 )
            goto LABEL_90;
        }
        if ( v50 != -2 )
        {
          DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, v87 + v68 * v50, v92, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          goto LABEL_89;
        }
LABEL_87:
        DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, a2 != 0 ? 0 : 10, v92, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        goto LABEL_89;
      }
LABEL_90:
      if ( HIBYTE(v67) )
      {
        v51 = *((_DWORD *)MEMORY[0xB0FC28] + 1);
        v91[0] = v82;
        v52 = *((_DWORD *)Block + v70 - 1);
        v91[1] = v51 - v84;
        v53 = v64 - v52;
        if ( v64 - v52 < 0 )
          goto LABEL_94;
        if ( v53 >= 6 )
          goto LABEL_96;
        if ( v53 == -1 )
        {
LABEL_94:
          DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, a2 != 0 ? 10 : 1, v91, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          goto LABEL_98;
        }
        if ( v53 == -2 )
LABEL_96:
          DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, a2 != 0 ? 1 : 10, v91, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        else
          DrawToSurfaceSHP(MEMORY[0x887310], v31, v33, v78 + v68 * v53, v91, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
      }
LABEL_98:
      v54 = v63;
      if ( !v63 )
        goto LABEL_116;
      v55 = Copy8Bytes(&v115, &v93);
      v69[0] = *v55;
      v69[1] = v55[1];
      v56 = v64 - *((_DWORD *)Block + v70 + 2);
      if ( v56 < 0 )
      {
        if ( a2 )
        {
          v57 = MEMORY[0xB0FB34];
        }
        else
        {
          if ( MEMORY[0x8A00A4] >= 800 )
            v69[0] += 80;
          v57 = v80;
        }
        goto LABEL_106;
      }
      if ( v56 >= 6 )
      {
        if ( a2 )
        {
          if ( MEMORY[0x8A00A4] >= 800 )
            v69[0] += 80;
          v57 = v80;
        }
        else
        {
          v57 = MEMORY[0xB0FB34];
        }
LABEL_106:
        DrawToSurfaceSHP(MEMORY[0x887310], (int)v62, (int)v57, 0, v69, v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        goto LABEL_116;
      }
      if ( MEMORY[0x8A00A4] >= 800 )
        v69[0] += 80;
      DrawToSurfaceSHP(
        MEMORY[0x887310],
        (int)v62,
        (int)v80,
        v88 + v68 * v56,
        v69,
        v72,
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
LABEL_116:
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887308] + 92))(MEMORY[0x887308], 0, 0);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0);
      (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))(
        MEMORY[0x887308],
        v106,
        MEMORY[0x887310],
        v110,
        0,
        1);
      if ( v54 )
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))(
          MEMORY[0x887308],
          v108,
          MEMORY[0x887310],
          v111,
          0,
          1);
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]);
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887308] + 96))(MEMORY[0x887308]);
      UpdateAudioVideo();
      Sleep(0x1Eu);
      if ( ++v64 >= v104 )
        break;
      v32 = v85;
    }
  }
  __3_YAXPAX_Z(Block);
  if ( !a2 )
    return SendMessageA(hWnd, 0x4EDu, 0, 0);
  PlayVocClass(*((_DWORD *)MEMORY[0x8871E0] + 468), 0x2000, 1.0, 0);
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) )
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]);
  return SendMessageA(hWnd, 0x4ECu, 0, 0);
}


// ==== 0x00607FD0  Dialog::StopBink  this=SkirmishDialog  sig=csp ====
char __thiscall Dialog::StopBink(void *this)
{
  int v1; // eax
  int v3; // esi
  int v4; // eax
  void *v6; // [esp+8h] [ebp-4h] BYREF

  LOBYTE(v1) = dword_A8ED54[52076]; /*0x607fd1*/
  v6 = this; /*0x607fdc*/
  if ( dword_A8ED54[52076] ) /*0x607fe0*/
  {
    v1 = *(_DWORD *)(dword_A8ED54[52075] /*0x608005*/
                   + 4
                   * (((int (__thiscall *)(void **))dword_A8ED54[52081])(&v6) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
    if ( v1 ) /*0x60800a*/
    {
      while ( *(void **)v1 != v6 ) /*0x608012*/
      {
        v1 = *(_DWORD *)(v1 + 516); /*0x608014*/
        if ( !v1 ) /*0x60801c*/
          return v1; /*0x60801c*/
      }
      v3 = v1 + 4; /*0x608026*/
      if ( v1 != -4 ) /*0x60802b*/
      {
        LOBYTE(v1) = *(_BYTE *)(v1 + 194); /*0x60802d*/
        if ( (_BYTE)v1 ) /*0x608035*/
        {
          v4 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1818); /*0x60803d*/
          if ( v4 ) /*0x608045*/
            ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v4, 1250, 0, 0); /*0x608051*/
          LOBYTE(v1) = RenderGadgetClassAnimation((int)this, 0); /*0x60805b*/
          *(_BYTE *)(v3 + 190) = 0; /*0x608060*/
        }
      }
    }
  }
  return v1; /*0x60801e*/
}


// ==== 0x00608070  Dialog::IdleProcess  this=Dialog  sig=csp ====
char __thiscall Dialog::IdleProcess(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v4; // eax
  bool v5; // bl
  bool v6; // al
  int v7; // eax
  int v8; // edi
  BOOL v9; // esi
  void *v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( SessionClass::GetGameSpeed(&MEMORY[0x87F7E8][536212]) ) /*0x60807d*/
    return 0; /*0x60807d*/
  v10 = this; /*0x60808b*/
  if ( !dword_A8ED54[52076] ) /*0x608091*/
    return 0; /*0x608091*/
  v2 = *(_DWORD **)(dword_A8ED54[52075] /*0x6080b2*/
                  + 4
                  * (((int (__thiscall *)(void **))dword_A8ED54[52081])(&v10) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
  if ( !v2 ) /*0x6080b7*/
    return 0; /*0x6080b7*/
  while ( (void *)*v2 != v10 ) /*0x6080bf*/
  {
    v2 = (_DWORD *)v2[129]; /*0x6080c1*/
    if ( !v2 ) /*0x6080c9*/
      return 0; /*0x6080c9*/
  }
  v4 = v2 + 1; /*0x6080d8*/
  if ( !v4 ) /*0x6080dd*/
    return 0; /*0x6080dd*/
  v5 = *((_BYTE *)v4 + 189) && v4[44] == 1; /*0x6080e7*/
  v6 = ((int (__stdcall *)(void *))IsWindowVisible)(this) != 0; /*0x608101*/
  if ( !v5 ) /*0x608106*/
    return 0; /*0x608106*/
  if ( !v6 ) /*0x60810a*/
    return 0; /*0x60810a*/
  PlayVocClass(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 412), 0x2000, 1.0, 0); /*0x608124*/
  LOBYTE(v12) = ((int (__stdcall *)(void *))IsWindowEnabled)(this) != 0; /*0x608138*/
  ((void (__stdcall *)(void *, _DWORD))EnableWindow)(this, 0); /*0x60813c*/
  ((void (__stdcall *)(void *, int (__stdcall *)(int, int), int))EnumChildWindows)(this, Dialog::MapControlToAction, 1); /*0x60814a*/
  v10 = this; /*0x608157*/
  if ( !dword_A8ED54[52076] ) /*0x60815b*/
    return 0; /*0x60815b*/
  v7 = *(_DWORD *)(dword_A8ED54[52075] /*0x608180*/
                 + 4
                 * (((int (__thiscall *)(void **))dword_A8ED54[52081])(&v10) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
  if ( !v7 ) /*0x608185*/
    return 0; /*0x608185*/
  while ( *(void **)v7 != v10 ) /*0x608191*/
  {
    v7 = *(_DWORD *)(v7 + 516); /*0x608193*/
    if ( !v7 ) /*0x60819b*/
      return 0; /*0x6081a5*/
  }
  v8 = v7 + 4; /*0x6081ae*/
  if ( v7 == -4 ) /*0x6081b3*/
    return 0; /*0x6080d3*/
  *(_BYTE *)(v7 + 194) = 1; /*0x6081bf*/
  ((void (__stdcall *)(void *, _DWORD, _DWORD))InvalidateRect)(this, 0, 0); /*0x6081c6*/
  v11 = ((int (*)(void))GetTickCount)(); /*0x6081d4*/
  while ( 1 ) /*0x6081d8*/
  {
    MessageLoop(); /*0x6081d8*/
    if ( MEMORY[0x87F7E8][536212] ) /*0x6081e4*/
    {
      if ( MEMORY[0x87F7E8][536212] != 5 && !BYTE2(MEMORY[0x87F7E8][538505]) && !MEMORY[0x87F7E8][538803] ) /*0x6081fb*/
        break; /*0x6081fb*/
    }
    Event::Dispatch(); /*0x608211*/
LABEL_29:
    v9 = *(_BYTE *)(v8 + 190) == 0; /*0x608216*/
    if ( ((int (*)(void))GetTickCount)() - v11 > 5000 || v9 ) /*0x608234*/
      goto LABEL_31; /*0x608234*/
  }
  if ( VtableStub::55CBF0() || !GameFrameLoop((int)this) ) /*0x608206*/
    goto LABEL_29; /*0x60820d*/
LABEL_31:
  ((void (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))EnumChildWindows)( /*0x608236*/
    this,
    Dialog::MapControlToAction,
    0);
  ((void (__stdcall *)(void *, _DWORD))EnableWindow)(this, (unsigned __int8)v12); /*0x608250*/
  return 1; /*0x6080cb*/
}


// ==== 0x00608260  SkirmishSetup::PlayButtonClickAnim  this=SkirmishDialog  sig=csp ====
char __thiscall SkirmishSetup::PlayButtonClickAnim(HWND hWnd)
{
  HWND *v2; // eax
  _DWORD *v4; // eax
  bool v5; // bl
  bool v6; // al
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x60826a*/
    return 0; /*0x60826a*/
  v7 = hWnd; /*0x608278*/
  if ( !MEMORY[0xAC1B04] ) /*0x60827e*/
    return 0; /*0x60827e*/
  v2 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v7) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60829f*/
  if ( !v2 ) /*0x6082a4*/
    return 0; /*0x6082a4*/
  while ( *v2 != v7 ) /*0x6082ac*/
  {
    v2 = (HWND *)v2[129]; /*0x6082ae*/
    if ( !v2 ) /*0x6082b6*/
      return 0; /*0x6082b6*/
  }
  v4 = v2 + 1; /*0x6082c2*/
  if ( !v4 ) /*0x6082c7*/
    return 0; /*0x6082c7*/
  v5 = *((_BYTE *)v4 + 189) && v4[44] == 1; /*0x6082d1*/
  v6 = IsWindowVisible(hWnd); /*0x6082eb*/
  if ( !v5 || !v6 ) /*0x6082f4*/
    return 0; /*0x6082b8*/
  PlayVocClass(MEMORY[0x8871E0]->VoiceIFVRepair, 0x2000, 1.0, 0); /*0x60830f*/
  LOBYTE(v7) = IsWindowEnabled(hWnd); /*0x608329*/
  EnableWindow(hWnd, 0); /*0x60832d*/
  EnumChildWindows(hWnd, Dialog::MapControlToAction, 1); /*0x60833d*/
  RenderGadgetClassAnimation(hWnd, 1); /*0x608343*/
  EnumChildWindows(hWnd, Dialog::MapControlToAction, 0); /*0x608350*/
  EnableWindow(hWnd, (unsigned __int8)v7); /*0x60835d*/
  InvalidateRect(hWnd, 0, 0); /*0x608364*/
  return 1; /*0x6082b8*/
}


// ==== 0x00608380  SaveLoadDialog::LookupDialogHash  this=AbstractClass  sig=csp ====
int __thiscall sub_608380(void *this)
{
  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  result = MEMORY[0xAC1B04]; /*0x608381*/
  v2 = this; /*0x608386*/
  if ( MEMORY[0xAC1B04] ) /*0x60838c*/
  {
    result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v2) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6083ad*/
    if ( result ) /*0x6083b2*/
    {
      while ( *(void **)result != v2 ) /*0x6083ba*/
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


// ==== 0x006083E0  SaveLoadDialog::FindDialogTemplate  this=AbstractClass  sig=csp ====
int __thiscall sub_6083E0(void *this)
{
  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  result = MEMORY[0xAC1B04]; /*0x6083e1*/
  v2 = this; /*0x6083e6*/
  if ( MEMORY[0xAC1B04] ) /*0x6083ec*/
  {
    result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v2) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60840d*/
    if ( result ) /*0x608412*/
    {
      while ( *(void **)result != v2 ) /*0x60841a*/
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
int __thiscall HashTable_LookupAndMark(void *this)
{
  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  result = MEMORY[0xAC1B04]; /*0x608441*/
  v2 = this; /*0x608446*/
  if ( MEMORY[0xAC1B04] ) /*0x60844c*/
  {
    result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v2) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60846d*/
    if ( result ) /*0x608472*/
    {
      while ( *(void **)result != v2 ) /*0x60847a*/
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
char __fastcall ControlDialogHandler(int a1, HWND a2, _DWORD *a3)
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
  HashTable::Get(&MEMORY[0xAC1B00], &v16, &v15); /*0x608522*/
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
      v7 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x6086f8*/
      if ( MEMORY[0x8A00A4] >= 800 ) /*0x608700*/
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
      v8 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x608753*/
      if ( MEMORY[0x8A00A4] >= 800 ) /*0x608761*/
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
          v9 = MEMORY[0x8A00A4]; /*0x6087ff*/
          if ( MEMORY[0x8A00A4] == 640 ) /*0x60880c*/
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
                if ( MEMORY[0x8A00A4] == 640 ) /*0x608984*/
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
                if ( MEMORY[0x8A00A4] != 800 && MEMORY[0x8A00A4] != 1024 ) /*0x6089b1*/
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
            v13 = MEMORY[0x8A00A4]; /*0x6089f5*/
            if ( MEMORY[0x8A00A4] != 640 ) /*0x608a02*/
            {
              if ( MEMORY[0x8A00A4] != 800 ) /*0x608a0e*/
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
          v9 = MEMORY[0x8A00A4]; /*0x60894c*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x608959*/
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
                v10 = MEMORY[0x8A00A4]; /*0x608adc*/
                if ( MEMORY[0x8A00A4] != 640 ) /*0x608ae9*/
                {
                  if ( MEMORY[0x8A00A4] != 800 ) /*0x608b23*/
                    goto LABEL_113; /*0x608b23*/
                  goto LABEL_114; /*0x608b23*/
                }
                goto LABEL_109; /*0x608ae9*/
              case 1934: /*0x608ad6*/
                v11 = MEMORY[0x8A00A4]; /*0x608b6a*/
                if ( MEMORY[0x8A00A4] != 640 ) /*0x608b77*/
                {
                  if ( MEMORY[0x8A00A4] != 800 ) /*0x608b9c*/
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
                v12 = MEMORY[0x8A00A4]; /*0x608bce*/
                if ( MEMORY[0x8A00A4] != 640 ) /*0x608bdb*/
                {
                  if ( MEMORY[0x8A00A4] != 800 ) /*0x608c00*/
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
            if ( MEMORY[0x8A00A4] != 640 ) /*0x608c40*/
            {
              if ( MEMORY[0x8A00A4] != 800 && MEMORY[0x8A00A4] != 1024 ) /*0x608c66*/
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
          v9 = MEMORY[0x8A00A4]; /*0x608a4a*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x608a57*/
          {
            if ( MEMORY[0x8A00A4] != 800 ) /*0x608a91*/
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
          v9 = MEMORY[0x8A00A4]; /*0x608903*/
          if ( MEMORY[0x8A00A4] == 640 ) /*0x608910*/
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
          v10 = MEMORY[0x8A00A4]; /*0x60884b*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x608858*/
          {
            if ( MEMORY[0x8A00A4] != 800 ) /*0x608864*/
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
          v11 = MEMORY[0x8A00A4]; /*0x608876*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x608883*/
          {
            if ( MEMORY[0x8A00A4] != 800 ) /*0x60888f*/
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
          v12 = MEMORY[0x8A00A4]; /*0x6088a1*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x6088ae*/
          {
            if ( MEMORY[0x8A00A4] != 800 ) /*0x6088ba*/
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
    v13 = MEMORY[0x8A00A4]; /*0x6088d0*/
    if ( MEMORY[0x8A00A4] != 640 ) /*0x6088dd*/
    {
      if ( MEMORY[0x8A00A4] != 800 ) /*0x6088e9*/
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
  if ( MEMORY[0x8A00A4] < 800 ) /*0x608557*/
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
bool __fastcall IsDialogControlVisible(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  bool v9; // zf
  int v10; // [esp+8h] [ebp-4h] BYREF

  v10 = a1; /*0x608cdc*/
  if ( !MEMORY[0xAC1B04] ) /*0x608ce0*/
    goto LABEL_5; /*0x608ce0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v10) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x608d01*/
  if ( !v3 ) /*0x608d06*/
    goto LABEL_5; /*0x608d06*/
  while ( *v3 != v10 ) /*0x608d0e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x608d14*/
    if ( !v3 ) /*0x608d1c*/
      goto LABEL_5; /*0x608d1c*/
  }
  v7 = v3 + 1; /*0x608f42*/
  if ( v7 ) /*0x608f47*/
    v4 = v7[27]; /*0x608f4d*/
  else
LABEL_5:
    v4 = 0; /*0x608d1e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x608d21*/
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
    && DlgCtrlID == 1684 )
  {
    return 1; /*0x608f39*/
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
    && DlgCtrlID == 1820 )
  {
    return 1; /*0x609089*/
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
    && DlgCtrlID == 1128 )
  {
    return 1; /*0x6090db*/
  }
  switch ( v4 ) /*0x6090e2*/
  {
    case 226: /*0x6090e2*/
      if ( DlgCtrlID != 1670 && DlgCtrlID != 1400 && DlgCtrlID != 1372 && DlgCtrlID != 1667 && DlgCtrlID != 1375 ) /*0x609115*/
        return DlgCtrlID == 1668; /*0x609120*/
      return 1; /*0x609115*/
    case 257: /*0x6090e2*/
      if ( DlgCtrlID == 1678 || DlgCtrlID == 1677 ) /*0x60913d*/
        return 1; /*0x60913d*/
      return DlgCtrlID == 1679; /*0x609148*/
    case 297: /*0x6090e2*/
      return DlgCtrlID == 1861; /*0x609164*/
    case 256: /*0x6090e2*/
      if ( DlgCtrlID == 1673 || DlgCtrlID == 1672 ) /*0x60917d*/
        return 1; /*0x60917d*/
      return DlgCtrlID == 1401; /*0x609188*/
    case 148: /*0x6090e2*/
      return DlgCtrlID == 1038; /*0x6091a4*/
    case 183: /*0x6090e2*/
      return DlgCtrlID == 1039; /*0x6091bc*/
    case 692: /*0x6090e2*/
      return DlgCtrlID == 1735; /*0x6091d4*/
    case 693: /*0x6090e2*/
      return DlgCtrlID == 1736; /*0x6091ec*/
    case 261: /*0x6090e2*/
      if ( DlgCtrlID == 1732 || DlgCtrlID == 1730 || DlgCtrlID == 1731 ) /*0x609210*/
        return 1; /*0x609210*/
      return DlgCtrlID == 1733; /*0x60921b*/
    case 258: /*0x6090e2*/
      if ( DlgCtrlID == 1772 || DlgCtrlID == 1450 || DlgCtrlID == 1448 ) /*0x609243*/
        return 1; /*0x609243*/
      return DlgCtrlID == 1559; /*0x60924e*/
    case 181: /*0x6090e2*/
      if ( DlgCtrlID == 1314 || DlgCtrlID == 1313 || DlgCtrlID == 1310 || DlgCtrlID == 1311 ) /*0x609281*/
        return 1; /*0x609281*/
      return DlgCtrlID == 1312; /*0x60928c*/
    case 3002: /*0x6090e2*/
      if ( DlgCtrlID == 1314 ) /*0x60929e*/
        return 1; /*0x60929e*/
      return DlgCtrlID == 1313; /*0x609662*/
    case 3003: /*0x6090e2*/
      if ( DlgCtrlID == 1324 ) /*0x6092bb*/
        return 1; /*0x6092bb*/
      return DlgCtrlID == 1325; /*0x6092c6*/
    case 213: /*0x6090e2*/
      if ( DlgCtrlID == 1486 ) /*0x6092d8*/
        return 1; /*0x6092d8*/
      return DlgCtrlID == 1485; /*0x6092e3*/
    case 251: /*0x6090e2*/
      if ( DlgCtrlID == 6 ) /*0x6092f3*/
        return 1; /*0x6092f3*/
      return DlgCtrlID == 1; /*0x6092fc*/
    case 216: /*0x6090e2*/
      return DlgCtrlID == 1739; /*0x609318*/
    case 215: /*0x6090e2*/
      return DlgCtrlID == 1; /*0x60932e*/
    case 188: /*0x6090e2*/
    case 194: /*0x6090e2*/
      return DlgCtrlID == 1772 || DlgCtrlID == 1416 || DlgCtrlID == 1450 || DlgCtrlID == 1448 || DlgCtrlID == 1474; /*0x60968b*/
    case 189: /*0x6090e2*/
    case 201: /*0x6090e2*/
      if ( DlgCtrlID == 1439 || DlgCtrlID == 1772 ) /*0x609654*/
        return 1; /*0x609654*/
      v9 = DlgCtrlID == 1448; /*0x609656*/
LABEL_244:
      if ( v9 ) /*0x60965b*/
        return 1; /*0x60965b*/
      return DlgCtrlID == 1474; /*0x60965d*/
    case 187: /*0x6090e2*/
      if ( DlgCtrlID == 1741 || DlgCtrlID == 1740 ) /*0x609377*/
        return 1; /*0x609377*/
      return DlgCtrlID == 1742; /*0x609382*/
    case 182: /*0x6090e2*/
      if ( DlgCtrlID == 1737 || DlgCtrlID == 1810 ) /*0x60939f*/
        return 1; /*0x60939f*/
      return DlgCtrlID == 1316; /*0x6093aa*/
    case 107: /*0x6090e2*/
      if ( DlgCtrlID == 1411 ) /*0x6093b9*/
        return 1; /*0x6093b9*/
      return DlgCtrlID == 1733; /*0x6093c4*/
    case 3014: /*0x6090e2*/
      if ( DlgCtrlID == 1745 || DlgCtrlID == 1772 ) /*0x6093e1*/
        return 1; /*0x6093e1*/
      return DlgCtrlID == 1448; /*0x6093ec*/
    case 271: /*0x6090e2*/
    case 285: /*0x6090e2*/
      return DlgCtrlID == 1337 || DlgCtrlID == 1772 || DlgCtrlID == 1771; /*0x609640*/
    case 265: /*0x6090e2*/
      if ( DlgCtrlID == 1 || DlgCtrlID == 1573 ) /*0x60941f*/
        return 1; /*0x60941f*/
      return DlgCtrlID == 1339; /*0x60942a*/
    case 270: /*0x6090e2*/
    case 284: /*0x6090e2*/
      return DlgCtrlID == 1760 /*0x609625*/
          || DlgCtrlID == 1761
          || DlgCtrlID == 1762
          || DlgCtrlID == 1764
          || DlgCtrlID == 1905
          || DlgCtrlID == 1375;
    case 276: /*0x6090e2*/
      if ( DlgCtrlID == 1671 || DlgCtrlID == 1772 || DlgCtrlID == 1771 || DlgCtrlID == 1672 ) /*0x609475*/
        return 1; /*0x609475*/
      return DlgCtrlID == 1955; /*0x609480*/
    case 275: /*0x6090e2*/
      if ( DlgCtrlID == 1567 /*0x6094d4*/
        || DlgCtrlID == 1672
        || DlgCtrlID == 1955
        || DlgCtrlID == 1958
        || DlgCtrlID == 1673
        || DlgCtrlID == 1581
        || DlgCtrlID == 1579 )
      {
        return 1; /*0x6094d4*/
      }
      v9 = DlgCtrlID == 1341; /*0x6094da*/
      goto LABEL_244; /*0x6094df*/
    case 700: /*0x6090e2*/
      if ( DlgCtrlID != 1 && DlgCtrlID != 1594 ) /*0x6094fa*/
        return 0; /*0x609505*/
      break;
    case 278: /*0x6090e2*/
      if ( DlgCtrlID != 1579 && DlgCtrlID != 1581 && DlgCtrlID != 1474 && DlgCtrlID != 1794 && DlgCtrlID != 1795 ) /*0x60953f*/
        return 0; /*0x60954a*/
      break;
    case 255: /*0x6090e2*/
      if ( DlgCtrlID != 1313 && DlgCtrlID != 1314 ) /*0x609563*/
        return 0; /*0x60956e*/
      break;
    case 290: /*0x6090e2*/
      return DlgCtrlID == 1; /*0x609584*/
    default:
      if ( v4 != 274 ) /*0x60958b*/
      {
        if ( v4 == 231 ) /*0x6095a1*/
          return DlgCtrlID == 1 || DlgCtrlID == 1398; /*0x6095b1*/
        if ( v4 == 254 ) /*0x6095c3*/
          return DlgCtrlID == 1; /*0x6095d2*/
        if ( v4 != 230 && v4 != 243 && v4 != 244 ) /*0x6095e9*/
          return 0; /*0x6095f0*/
      }
      return DlgCtrlID == 1; /*0x60959a*/
  }
  return 1; /*0x608f34*/
}


// ==== 0x006096A0  sub_6096A0  this=-  sig=ida-proto ====
bool __fastcall sub_6096A0(int a1, HWND a2)
{
  HWND *v4; // eax
  _DWORD *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x6096b5*/
    return 0; /*0x6096b5*/
  v7 = a2; /*0x6096bc*/
  if ( !MEMORY[0xAC1B04] ) /*0x6096c2*/
    return 0; /*0x6096c2*/
  v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v7) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6096e3*/
  if ( !v4 ) /*0x6096e8*/
    return 0; /*0x6096e8*/
  while ( *v4 != v7 ) /*0x6096f0*/
  {
    v4 = (HWND *)v4[129]; /*0x6096f2*/
    if ( !v4 ) /*0x6096fa*/
      return 0; /*0x6096fa*/
  }
  v6 = v4 + 1; /*0x609706*/
  return v6 && !v6[26] && IsDialogControlVisible(a1, a2); /*0x609718*/
}


// ==== 0x00609730  GetDialogDefaultButton  this=-  sig=csp ====
bool __fastcall GetDialogDefaultButton(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60973c*/
  if ( !MEMORY[0xAC1B04] ) /*0x609740*/
    goto LABEL_5; /*0x609740*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609761*/
  if ( !v3 ) /*0x609766*/
    goto LABEL_5; /*0x609766*/
  while ( *v3 != v8 ) /*0x60976e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609770*/
    if ( !v3 ) /*0x609778*/
      goto LABEL_5; /*0x609778*/
  }
  v7 = v3 + 1; /*0x60979f*/
  if ( v7 ) /*0x6097a4*/
    v4 = v7[27]; /*0x6097a6*/
  else
LABEL_5:
    v4 = 0; /*0x60977a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60977d*/
  switch ( v4 ) /*0x609789*/
  {
    case 226: /*0x609789*/
      return DlgCtrlID == 1006; /*0x609796*/
    case 115: /*0x609789*/
    case 268: /*0x609789*/
    case 259: /*0x609789*/
      return DlgCtrlID == 1059; /*0x609a8c*/
    case 264: /*0x609789*/
    case 3015: /*0x609789*/
      return DlgCtrlID == 1745; /*0x609a7c*/
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
      return DlgCtrlID == 1670; /*0x609a6c*/
    case 258: /*0x609789*/
    case 261: /*0x609789*/
    case 107: /*0x609789*/
    case 187: /*0x609789*/
    case 279: /*0x609789*/
    case 3014: /*0x609789*/
      return DlgCtrlID == 1472; /*0x609a5c*/
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
      return DlgCtrlID == 2; /*0x609a4c*/
    case 212: /*0x609789*/
      return DlgCtrlID == 1; /*0x609a0a*/
    case 251: /*0x609789*/
      return DlgCtrlID == 7; /*0x609a20*/
    case 255: /*0x609789*/
      return DlgCtrlID == 1653; /*0x609a38*/
  }
  return 0; /*0x609795*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x609ac2*/
    return 0; /*0x609ac2*/
  v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v7) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609ae3*/
  if ( !v4 ) /*0x609ae8*/
    return 0; /*0x609ae8*/
  while ( *v4 != v7 ) /*0x609af0*/
  {
    v4 = (HWND *)v4[129]; /*0x609af2*/
    if ( !v4 ) /*0x609afa*/
      return 0; /*0x609afa*/
  }
  v6 = v4 + 1; /*0x609b06*/
  return v6 && !v6[26] && GetDialogDefaultButton(a1, a2); /*0x609b18*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x609b40*/
    goto LABEL_5; /*0x609b40*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609b61*/
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

  if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x609bcd*/
    return 0; /*0x609bcd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609bea*/
  {
    v9 = a2; /*0x609bf1*/
    if ( MEMORY[0xAC1B04] ) /*0x609bf7*/
    {
      v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609c18*/
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
          if ( !v7[26] && IsDialogControlVisible(a1, a2) ) /*0x609ca7*/
            return 1; /*0x609cb6*/
        }
      }
    }
  }
LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609c3b*/
    return 0; /*0x609c3b*/
  v9 = a2; /*0x609c46*/
  if ( !MEMORY[0xAC1B04] ) /*0x609c4c*/
    return 0; /*0x609c4c*/
  v5 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609c71*/
  if ( !v5 ) /*0x609c76*/
    return 0; /*0x609c76*/
  while ( *v5 != v9 ) /*0x609c7e*/
  {
    v5 = (HWND *)v5[129]; /*0x609c80*/
    if ( !v5 ) /*0x609c88*/
      return 0; /*0x609c90*/
  }
  v8 = v5 + 1; /*0x609cbb*/
  return v8 && !v8[26] && GetDialogDefaultButton(a1, a2); /*0x609cd8*/
}


// ==== 0x00609CF0  sub_609CF0  this=-  sig=ida-proto ====
bool __fastcall sub_609CF0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( !SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x609cfd*/
    return 0; /*0x609cfd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609d1a*/
  {
    v9 = a2; /*0x609d21*/
    if ( MEMORY[0xAC1B04] ) /*0x609d27*/
    {
      v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609d48*/
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
          if ( !v7[26] && IsDialogControlVisible(a1, a2) ) /*0x609dd7*/
            return 1; /*0x609de6*/
        }
      }
    }
  }
LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609d6b*/
    return 0; /*0x609d6b*/
  v9 = a2; /*0x609d76*/
  if ( !MEMORY[0xAC1B04] ) /*0x609d7c*/
    return 0; /*0x609d7c*/
  v5 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609da1*/
  if ( !v5 ) /*0x609da6*/
    return 0; /*0x609da6*/
  while ( *v5 != v9 ) /*0x609dae*/
  {
    v5 = (HWND *)v5[129]; /*0x609db0*/
    if ( !v5 ) /*0x609db8*/
      return 0; /*0x609dc0*/
  }
  v8 = v5 + 1; /*0x609deb*/
  return v8 && !v8[26] && GetDialogDefaultButton(a1, a2); /*0x609e08*/
}


// ==== 0x00609E20  FilterDialogButtonAction  this=-  sig=csp ====
bool __fastcall FilterDialogButtonAction(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x609e2c*/
  if ( !MEMORY[0xAC1B04] ) /*0x609e30*/
    goto LABEL_5; /*0x609e30*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609e51*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x60a110*/
    goto LABEL_5; /*0x60a110*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60a131*/
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
    if ( MEMORY[0xAC1B04] ) /*0x60a1aa*/
    {
      v4 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60a1cb*/
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
            ++MEMORY[0xAC1CAC]; /*0x60a218*/
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
    if ( MEMORY[0xAC1B04] ) /*0x60a27a*/
    {
      v4 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60a29b*/
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
            ++MEMORY[0xAC4894]; /*0x60a2e8*/
        }
      }
    }
  }
  return 1; /*0x60a2b4*/
}


// ==== 0x0060A330  Dialog::HandleTabKey  this=Dialog  sig=csp ====
int __stdcall Dialog::HandleTabKey(int hWnd, int a2)
{
  _DWORD *v3; // eax
  int v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  int v12; // [esp+14h] [ebp-4h] BYREF
  _DWORD *hWnda; // [esp+1Ch] [ebp+4h]

  v10 = hWnd; /*0x60a341*/
  hWnda = 0; /*0x60a345*/
  if ( dword_A8ED54[52076] ) /*0x60a34d*/
  {
    v3 = *(_DWORD **)(dword_A8ED54[52075] /*0x60a36e*/
                    + 4
                    * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&v10) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
    if ( v3 ) /*0x60a373*/
    {
      while ( *v3 != v10 ) /*0x60a37b*/
      {
        v3 = (_DWORD *)v3[129]; /*0x60a37d*/
        if ( !v3 ) /*0x60a385*/
          goto LABEL_7; /*0x60a385*/
      }
      hWnda = v3 + 1; /*0x60a390*/
    }
  }
LABEL_7:
  if ( !hWnda ) /*0x60a39a*/
    return 1; /*0x60a39a*/
  v4 = ((int (__stdcall *)(int))GetParent)(hWnd); /*0x60a3ac*/
  if ( !SessionClass::GetGameSpeed(&MEMORY[0x87F7E8][536212]) ) /*0x60a3ae*/
  {
    if ( (((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, -16) & 0xB) == 0xB ) /*0x60a3cb*/
    {
      v10 = hWnd; /*0x60a3d2*/
      if ( dword_A8ED54[52076] ) /*0x60a3d8*/
      {
        v5 = *(_DWORD **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&v10)); /*0x60a3ef*/
        if ( v5 ) /*0x60a3f4*/
        {
          while ( *v5 != v10 ) /*0x60a3fc*/
          {
            v5 = (_DWORD *)v5[129]; /*0x60a3fe*/
            if ( !v5 ) /*0x60a406*/
              goto LABEL_18; /*0x60a406*/
          }
          v6 = v5 + 1; /*0x60a40e*/
          if ( v6 ) /*0x60a413*/
          {
            if ( !v6[26] && IsDialogControlVisible(v4, hWnd) ) /*0x60a420*/
              goto LABEL_22; /*0x60a427*/
          }
        }
      }
    }
LABEL_18:
    if ( (((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, -16) & 0xB) == 0xB ) /*0x60a433*/
    {
      v12 = hWnd; /*0x60a444*/
      v11 = 0; /*0x60a448*/
      HashTable::Get(&dword_A8ED54[52075], &v12, &v11); /*0x60a450*/
      if ( v11 ) /*0x60a45b*/
      {
        if ( !*(_DWORD *)(v11 + 104) && GetDialogDefaultButton(v4, hWnd) ) /*0x60a468*/
        {
LABEL_22:
          hWnda[44] = 1; /*0x60a471*/
          return 1; /*0x60a486*/
        }
      }
    }
  }
  if ( !SessionClass::GetGameSpeed(&MEMORY[0x87F7E8][536212]) ) /*0x60a48e*/
    goto LABEL_33; /*0x60a48e*/
  if ( (((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, -16) & 0xB) != 0xB /*0x60a4da*/
    || (v12 = hWnd, v11 = 0, HashTable::Get(&dword_A8ED54[52075], &v12, &v11), !v11)
    || *(_DWORD *)(v11 + 104)
    || !IsDialogControlVisible(v4, hWnd) )
  {
    if ( (((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, -16) & 0xB) != 0xB ) /*0x60a4f1*/
      goto LABEL_33; /*0x60a4f1*/
    v10 = hWnd; /*0x60a4f8*/
    if ( !dword_A8ED54[52076] ) /*0x60a4fe*/
      goto LABEL_33; /*0x60a4fe*/
    v8 = *(_DWORD **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&v10)); /*0x60a515*/
    if ( !v8 ) /*0x60a51a*/
      goto LABEL_33; /*0x60a51a*/
    while ( *v8 != v10 ) /*0x60a522*/
    {
      v8 = (_DWORD *)v8[129]; /*0x60a524*/
      if ( !v8 ) /*0x60a52c*/
        goto LABEL_33; /*0x60a52c*/
    }
    v9 = v8 + 1; /*0x60a55b*/
    if ( !v9 || v9[26] || !GetDialogDefaultButton(v4, hWnd) ) /*0x60a56d*/
    {
LABEL_33:
      if ( FilterDialogButtonAction(v4, hWnd) ) /*0x60a532*/
        hWnda[44] = 3; /*0x60a53f*/
      return 1; /*0x60a554*/
    }
  }
  hWnda[44] = 2; /*0x60a581*/
  return 1; /*0x60a47a*/
}


// ==== 0x0060A5B0  Dialog::DispatchEvent  this=Dialog  sig=csp ====
int __stdcall Dialog::DispatchEvent(int hWnd, int a2)
{
  int v2; // ebp
  int v3; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // eax
  _DWORD *i; // eax
  _DWORD *j; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  bool v17; // [esp+13h] [ebp-11h] BYREF
  int v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h] BYREF
  int v21; // [esp+20h] [ebp-4h] BYREF

  v2 = hWnd; /*0x60a5b5*/
  v3 = ((int (__stdcall *)(int))GetParent)(hWnd); /*0x60a5c2*/
  v4 = 0; /*0x60a5c9*/
  v18 = v3; /*0x60a5cb*/
  v19 = v2; /*0x60a5d1*/
  if ( dword_A8ED54[52076] ) /*0x60a5d5*/
  {
    v5 = *(_DWORD **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&v19)); /*0x60a5ec*/
    if ( v5 ) /*0x60a5f1*/
    {
      while ( *v5 != v19 ) /*0x60a5f9*/
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
  if ( !IsValidActionDialog(v3, v2) ) /*0x60a621*/
  {
    LOBYTE(hWnd) = 0; /*0x60a6e7*/
    if ( UI_Helper_602B90(v3, v2) ) /*0x60a6ec*/
    {
      v9 = v4[5]; /*0x60a6f5*/
      v4[28] = 2; /*0x60a6f8*/
      if ( !v9 ) /*0x60a701*/
      {
        v20 = v3; /*0x60a70c*/
        if ( dword_A8ED54[52076] ) /*0x60a712*/
        {
          for ( i = *(_DWORD **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&v20)); /*0x60a72e*/
                i;
                i = (_DWORD *)i[129] )
          {
            if ( *i == v20 ) /*0x60a736*/
              break; /*0x60a736*/
          }
        }
        ((void (__stdcall *)(int))GetDlgCtrlID)(v2); /*0x60a743*/
        v4[5] = 0; /*0x60a749*/
      }
LABEL_77:
      v4[38] = 0; /*0x60a9c8*/
      v4[39] = ((int (*)(void))GetTickCount)(); /*0x60a9dc*/
      v4[40] = UI_Helper_603240(v3, v2); /*0x60a9e7*/
      goto LABEL_78; /*0x60a9e7*/
    }
    v20 = v3; /*0x60a75a*/
    if ( dword_A8ED54[52076] ) /*0x60a760*/
    {
      for ( j = *(_DWORD **)(dword_A8ED54[52075] /*0x60a786*/
                           + 4
                           * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&v20)
                            & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1))); j; j = (_DWORD *)j[129] )
      {
        if ( *j == v20 ) /*0x60a78e*/
          break; /*0x60a78e*/
      }
    }
    ((void (__stdcall *)(int))GetDlgCtrlID)(v2); /*0x60a7a1*/
    v21 = v3; /*0x60a7ab*/
    v12 = 0; /*0x60a7af*/
    v20 = 0; /*0x60a7b8*/
    HashTable::Get(&dword_A8ED54[52075], &v21, &v20); /*0x60a7bc*/
    if ( v20 ) /*0x60a7c7*/
      v12 = *(_DWORD *)(v20 + 108); /*0x60a7c9*/
    v13 = ((int (__stdcall *)(int))GetDlgCtrlID)(v2); /*0x60a7cd*/
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
      || v13 != 1820 )
    {
      switch ( v12 ) /*0x60a908*/
      {
        case 148: /*0x60a908*/
          if ( v13 != 1770 && v13 != 1772 ) /*0x60a916*/
          {
            if ( v13 != 1771 ) /*0x60a91d*/
              goto LABEL_78; /*0x60a91d*/
            LOBYTE(hWnd) = 1; /*0x60a923*/
            v4[28] = 4; /*0x60a928*/
            goto LABEL_74; /*0x60a92f*/
          }
          break;
        case 259: /*0x60a908*/
          if ( v13 != 1835 ) /*0x60a93e*/
            goto LABEL_78; /*0x60a93e*/
          LOBYTE(hWnd) = 1; /*0x60a944*/
          v4[28] = 4; /*0x60a949*/
          goto LABEL_74; /*0x60a950*/
        case 3015: /*0x60a908*/
          if ( v13 != 1835 ) /*0x60a95f*/
            goto LABEL_78; /*0x60a95f*/
          LOBYTE(hWnd) = 1; /*0x60a965*/
          v4[28] = 4; /*0x60a96a*/
          goto LABEL_74; /*0x60a971*/
        default:
          if ( v12 != 196 || v13 != 1961 ) /*0x60a980*/
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
              ((void (__stdcall *)(int, _DWORD, int, _DWORD))SetTimer)(v2, 0, v15, 0); /*0x60a9fd*/
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
    v3 = v18; /*0x60a9c4*/
    goto LABEL_77; /*0x60a9c4*/
  }
  v4[28] = 1; /*0x60a630*/
  *((_BYTE *)v4 + 168) = 0; /*0x60a633*/
  v4[32] = 1; /*0x60a63a*/
  v4[33] = ValidateDialogEvent(v3, v2); /*0x60a649*/
  v4[34] = CtlDialogColorHandler(v3, v2); /*0x60a658*/
  v4[35] = ValidateDialogControl(v3, v2); /*0x60a663*/
  v20 = v3; /*0x60a66d*/
  v6 = 0; /*0x60a675*/
  hWnd = 0; /*0x60a67e*/
  HashTable::Get(&dword_A8ED54[52075], &v20, &hWnd); /*0x60a682*/
  if ( hWnd ) /*0x60a68d*/
    v6 = *(_DWORD *)(hWnd + 108); /*0x60a68f*/
  v7 = ((int (__stdcall *)(int))GetDlgCtrlID)(v2); /*0x60a693*/
  if ( (v6 == 259 || v6 == 3015) && v7 == 1780 ) /*0x60a6ae*/
  {
    v4[36] = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1732); /*0x60a6bd*/
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
int __thiscall Dialog::EnumAndCleanup(void *this)
{
  return ((int (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))EnumChildWindows)(this, sub_60AA60, 0); /*0x60aaae*/
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
  if ( MEMORY[0xAC1B04] ) /*0x60aada*/
  {
    v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v14) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60aafb*/
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
    if ( !MEMORY[0xAC1B04] ) /*0x60ab34*/
      goto LABEL_12; /*0x60ab34*/
    v5 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v14)); /*0x60ab4b*/
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
    HashTable::Get(&MEMORY[0xAC1B00], &v18, &v14); /*0x60ad2e*/
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
    if ( !strcmp(ClassName, MEMORY[0x833728]) || !strcmp(ClassName, MEMORY[0x833720]) ) /*0x60ae37*/
      goto LABEL_85; /*0x60ae5c*/
    if ( !strcmp(ClassName, MEMORY[0x833718]) && (v16 = 0, HashTable::Get(&MEMORY[0xAC1B00], &v17, &v16)) ) /*0x60aeab*/
    {
      v11 = *(_DWORD *)(v16 + 104) == 1; /*0x60aebc*/
    }
    else
    {
      if ( strcmp(ClassName, MEMORY[0x83370C]) ) /*0x60aed0*/
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


// ==== 0x0060AF50  UI_Get  this=-  sig=csp ====
BOOL __fastcall UI_Get(HWND hWnd, _DWORD *a2)
{
  HWND Parent; // ebp
  char GameSpeed; // bl
  int v6; // ebp
  int v7; // ecx
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60af67*/
  GameSpeed = SessionClass::GetGameSpeed(&MEMORY[0xA8B238]); /*0x60af6e*/
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


// ==== 0x0060B000  RepositionGameSpeedIndicator  this=-  sig=csp ====
BOOL __fastcall RepositionGameSpeedIndicator(HWND hWnd, int a2)
{
  HWND Parent; // esi
  char GameSpeed; // bl
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
  GameSpeed = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60b020*/
  GetWindowRect(Parent, &Rect); /*0x60b02e*/
  GetWindowRect(hWnd, &v19); /*0x60b036*/
  if ( GameSpeed )
  {
    v8 = *((__int16 *)MEMORY[0xB0F9EC] + 2); /*0x60b134*/
    nWidtha = *((__int16 *)MEMORY[0xB0F9EC] + 1); /*0x60b145*/
    v12 = MEMORY[0xB0FC48]; /*0x60b149*/
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
    v5 = *((_DWORD *)MEMORY[0xB0FC24] + 3); /*0x60b0d8*/
    v15 = *((_DWORD *)MEMORY[0xB0FC24] + 1); /*0x60b0db*/
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
             *((__int16 *)MEMORY[0xB0FAC4] + 1),
             *((__int16 *)MEMORY[0xB0FAC4] + 2),
             0);
  }
}


// ==== 0x0060B1D0  UI_Get_60B1D0  this=-  sig=csp ====
BOOL __fastcall UI_Get_60B1D0(HWND hWnd, HWND a2)
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
  GameSpeed = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60b1f0*/
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
  if ( MEMORY[0xAC1B04] ) /*0x60b2a4*/
  {
    v9 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v13) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60b2c5*/
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
BOOL __thiscall UI_Get_60B350(HWND hWnd)
{
  HWND v1; // edi
  HWND Parent; // esi
  char GameSpeed; // bl
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  struct tagRECT Rect; // [esp+14h] [ebp-20h] BYREF
  struct tagRECT v11; // [esp+24h] [ebp-10h] BYREF

  v1 = hWnd; /*0x60b357*/
  Parent = GetParent(hWnd); /*0x60b369*/
  GameSpeed = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60b370*/
  GetWindowRect(Parent, &Rect); /*0x60b37e*/
  GetWindowRect(v1, &v11); /*0x60b386*/
  if ( GameSpeed )
  {
    v5 = *((__int16 *)MEMORY[0xB0F9EC] + 2); /*0x60b409*/
    v4 = *((__int16 *)MEMORY[0xB0F9EC] + 1); /*0x60b40d*/
    v6 = Rect.right - Rect.left - 147; /*0x60b414*/
    v7 = *((_DWORD *)MEMORY[0xB0FC4C] + 1) - v5; /*0x60b41a*/
  }
  else
  {
    v4 = *((__int16 *)MEMORY[0xB0FAC4] + 1); /*0x60b3b5*/
    v5 = *((__int16 *)MEMORY[0xB0FAC4] + 2); /*0x60b3b9*/
    v6 = Rect.right
       - ((Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2)
       - Rect.left
       - 156;
    v1 = hWnd; /*0x60b3e1*/
    v7 = *((_DWORD *)MEMORY[0xB0FC24] + 1) /*0x60b3e5*/
       + *((_DWORD *)MEMORY[0xB0FC24] + 3)
       * ((*((_DWORD *)MEMORY[0xB0FC28] + 1) - *((_DWORD *)MEMORY[0xB0FC24] + 1)) / *((_DWORD *)MEMORY[0xB0FC24] + 3) - 1);
  }
  return MoveWindow(v1, v6, v7, v4, v5, 0); /*0x60b3f4*/
}


// ==== 0x0060B420  ObjectClass::UI_Get_60B420  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B420(HWND hWnd)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v5; // esi
  int v6; // ebp
  HWND *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // eax
  HWND v13; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-24h]
  struct tagRECT Rect; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT v16; // [esp+28h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b435*/
  GameSpeed = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60b43c*/
  GetClientRect(Parent, &Rect); /*0x60b444*/
  GetWindowRect(hWnd, &v16); /*0x60b450*/
  right = Rect.right; /*0x60b45a*/
  v14 = 0; /*0x60b45e*/
  if ( !GameSpeed )
    v14 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = v16.right - v16.left; /*0x60b499*/
  v6 = v16.bottom - v16.top; /*0x60b49f*/
  v13 = hWnd; /*0x60b4a1*/
  if ( !MEMORY[0xAC1B04] ) /*0x60b4a7*/
    goto LABEL_8; /*0x60b4a7*/
  v7 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v13) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60b4c8*/
  if ( !v7 ) /*0x60b4cd*/
    goto LABEL_7; /*0x60b4cd*/
  while ( *v7 != v13 ) /*0x60b4d5*/
  {
    v7 = (HWND *)v7[129]; /*0x60b4d7*/
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
    v10 = *((_DWORD *)MEMORY[0xB0FC50] + 1); /*0x60b50b*/
  else
    v10 = *((_DWORD *)MEMORY[0xB0FC28] + 1); /*0x60b530*/
  return MoveWindow(hWnd, v9, v10 - v6, v5, v6, 0); /*0x60b542*/
}


// ==== 0x0060B550  ObjectClass::UI_Get_60B550  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B550(HWND hWnd)
{
  HWND Parent; // edi
  char GameSpeed; // bl
  int v4; // edi
  int v5; // edx
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v8; // [esp+20h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b565*/
  GameSpeed = SessionClass::GetGameSpeed(&MEMORY[0xA8B238]); /*0x60b56c*/
  GetClientRect(Parent, &Rect); /*0x60b574*/
  GetWindowRect(hWnd, &v8); /*0x60b580*/
  v4 = 0; /*0x60b58a*/
  if ( !GameSpeed )
    v4 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = 0; /*0x60b5ba*/
  if ( !GameSpeed )
    v5 = (Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2;
  return MoveWindow( /*0x60b5fe*/
           hWnd,
           v4 + Rect.left + 10,
           Rect.bottom - (v8.bottom - v8.top) - v5 - 1,
           v8.right - v8.left,
           v8.bottom - v8.top,
           0);
}


// ==== 0x0060B610  ObjectClass::UI_Get_60B610  this=ObjectClass  sig=csp ====
BOOL __thiscall UI_Get_60B610(HWND hWnd)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v5; // esi
  int v6; // ebp
  HWND *v7; // eax
  int v8; // eax
  int v9; // ecx
  ScenarioClass *v10; // edx
  _DWORD *v12; // eax
  HWND v13; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-24h]
  struct tagRECT Rect; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT v16; // [esp+28h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b625*/
  GameSpeed = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60b62c*/
  GetClientRect(Parent, &Rect); /*0x60b634*/
  GetWindowRect(hWnd, &v16); /*0x60b640*/
  right = Rect.right; /*0x60b64a*/
  v14 = 0; /*0x60b64e*/
  if ( !GameSpeed )
    v14 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v5 = v16.right - v16.left; /*0x60b689*/
  v6 = v16.bottom - v16.top; /*0x60b68f*/
  v13 = hWnd; /*0x60b691*/
  if ( !MEMORY[0xAC1B04] ) /*0x60b697*/
    goto LABEL_8; /*0x60b697*/
  v7 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v13) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60b6b8*/
  if ( !v7 ) /*0x60b6bd*/
    goto LABEL_7; /*0x60b6bd*/
  while ( *v7 != v13 ) /*0x60b6c5*/
  {
    v7 = (HWND *)v7[129]; /*0x60b6c7*/
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
  v10 = (ScenarioClass *)MEMORY[0xB0FC50]; /*0x60b6f1*/
  if ( !GameSpeed ) /*0x60b6f9*/
    v10 = (ScenarioClass *)MEMORY[0xB0FC28]; /*0x60b6fb*/
  return MoveWindow(hWnd, v9, v10->nextScenario[1] + v10->nextScenario[3] - v6, v5, v6, 0); /*0x60b718*/
}


// ==== 0x0060B740  ObjectClass::method_60B740  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_60B740(HWND hWnd)
{
  HWND Parent; // eax
  struct tagRECT v4; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b748*/
  GetWindowRect(Parent, &Rect); /*0x60b75a*/
  GetWindowRect(hWnd, &v4); /*0x60b762*/
  return MoveWindow(hWnd, v4.left - Rect.left, v4.top - Rect.top, v4.right - v4.left, v4.bottom - v4.top, 0); /*0x60b791*/
}


// ==== 0x0060B7A0  ObjectClass::UI_Get_60B7A0  this=ObjectClass  sig=csp ====
char __thiscall UI_Get_60B7A0(HWND hWnd)
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

  Parent = GetParent(hWnd); /*0x60b7b3*/
  result = SessionClass::GetGameSpeed(&MEMORY[0xA8B238]); /*0x60b7b5*/
  if ( result )
  {
    GetWindowRect(hWnd, &Rect); /*0x60b7cf*/
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
    return MoveWindow(hWnd, v9, v10, Rect.right - Rect.left, Rect.bottom - Rect.top, 0); /*0x60b86c*/
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
  if ( !MEMORY[0xAC1B04] ) /*0x60b890*/
    goto LABEL_5; /*0x60b890*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v7) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60b8b1*/
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
char __thiscall Control::RepositionControlsDialog(HWND hWnd)
{
  HWND Parent; // esi
  int v3; // ebp
  _DWORD *v4; // eax
  void *v5; // esi
  int DlgCtrlID; // edi
  char result; // al
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // eax
  int X; // [esp+10h] [ebp-3Ch]
  int nWidth; // [esp+14h] [ebp-38h]
  int nHeight; // [esp+18h] [ebp-34h]
  HWND v14; // [esp+1Ch] [ebp-30h] BYREF
  HWND hWnda; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  struct tagRECT v18; // [esp+2Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+3Ch] [ebp-10h] BYREF

  hWnda = hWnd; /*0x60b95a*/
  Parent = GetParent(hWnd); /*0x60b96a*/
  GetWindowRect(Parent, &Rect); /*0x60b972*/
  GetWindowRect(hWnd, &v18); /*0x60b97a*/
  X = v18.left - Rect.left; /*0x60b996*/
  nHeight = v18.bottom - v18.top; /*0x60b9a2*/
  v3 = v18.top - Rect.top; /*0x60b9ab*/
  nWidth = v18.right - v18.left; /*0x60b9ad*/
  v14 = Parent; /*0x60b9b3*/
  if ( !MEMORY[0xAC1B04] ) /*0x60b9b7*/
    goto LABEL_5; /*0x60b9b7*/
  v4 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v14) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60b9d8*/
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
    v5 = (void *)v9[27]; /*0x60bd0f*/
  else
LABEL_5:
    v5 = 0; /*0x60b9f5*/
  DlgCtrlID = GetDlgCtrlID(hWnda); /*0x60ba02*/
  result = nHeight; /*0x60ba0e*/
  v8 = X; /*0x60ba12*/
  v14 = (HWND)v3; /*0x60ba16*/
  v16 = nWidth; /*0x60ba1a*/
  v17 = nHeight; /*0x60ba1e*/
  if ( (v5 == (void *)268 /*0x60bb63*/
     || v5 == (void *)148
     || v5 == (void *)163
     || v5 == (void *)115
     || v5 == (void *)216
     || v5 == (void *)3003
     || v5 == (void *)245
     || v5 == (void *)261
     || v5 == (void *)226
     || v5 == (void *)213
     || v5 == (void *)693
     || v5 == (void *)183
     || v5 == (void *)692
     || v5 == (void *)3015
     || v5 == (void *)257
     || v5 == (void *)297
     || v5 == (void *)3014
     || v5 == (void *)215
     || v5 == (void *)264
     || v5 == (void *)188
     || v5 == (void *)189
     || v5 == (void *)187
     || v5 == (void *)181
     || v5 == (void *)3002
     || v5 == (void *)255
     || v5 == (void *)107
     || v5 == (void *)256
     || v5 == (void *)258
     || v5 == (void *)184
     || v5 == (void *)214
     || v5 == (void *)259
     || (result = Dialog::IsSpecialTemplate(v5)) != 0)
    && DlgCtrlID == 1684 )
  {
    if ( v5 == (void *)268 /*0x60bc38*/
      || v5 == (void *)148
      || v5 == (void *)163
      || v5 == (void *)115
      || v5 == (void *)216
      || v5 == (void *)3003
      || v5 == (void *)245
      || v5 == (void *)261
      || v5 == (void *)226
      || v5 == (void *)213
      || v5 == (void *)693
      || v5 == (void *)183
      || v5 == (void *)692
      || v5 == (void *)3015
      || v5 == (void *)257
      || v5 == (void *)297
      || v5 == (void *)3014
      || v5 == (void *)215
      || v5 == (void *)264 )
    {
      goto LABEL_74; /*0x60bc38*/
    }
    if ( v5 == (void *)188 ) /*0x60bc40*/
    {
LABEL_75:
      result = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60bce4*/
      if ( result ) /*0x60bcf0*/
        return result; /*0x60bcf0*/
      ++v3; /*0x60bcf6*/
      goto LABEL_170; /*0x60bcf7*/
    }
    if ( v5 == (void *)189 /*0x60bc99*/
      || v5 == (void *)187
      || v5 == (void *)181
      || v5 == (void *)3002
      || v5 == (void *)255
      || v5 == (void *)107
      || v5 == (void *)256
      || v5 == (void *)258
      || v5 == (void *)184
      || v5 == (void *)214
      || v5 == (void *)259 )
    {
LABEL_74:
      if ( v5 == (void *)189 || v5 == (void *)258 || v5 == (void *)3014 || v5 == (void *)261 || v5 == (void *)107 ) /*0x60bcda*/
        goto LABEL_75; /*0x60bcda*/
      result = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60bd1c*/
      if ( result ) /*0x60bd23*/
        return result; /*0x60bd23*/
      v3 += 7; /*0x60bd2d*/
      ++nHeight; /*0x60bd31*/
    }
    else
    {
      if ( v5 != (void *)293 /*0x60bdfc*/
        && v5 != (void *)231
        && v5 != (void *)278
        && (v5 == (void *)194
         || v5 != (void *)201
         && v5 != (void *)285
         && v5 != (void *)284
         && v5 != (void *)276
         && v5 != (void *)700
         && v5 != (void *)275
         && v5 != (void *)265
         && v5 != (void *)271
         && v5 != (void *)279
         && v5 != (void *)230
         && v5 != (void *)243
         && v5 != (void *)244
         && v5 != (void *)270
         && v5 != (void *)274)
        || v5 == (void *)201
        || v5 == (void *)275 )
      {
        return result; /*0x60bdfc*/
      }
      v3 += 2; /*0x60be02*/
    }
LABEL_170:
    if ( (HWND)v3 == v14 ) /*0x60c078*/
      goto LABEL_171; /*0x60c078*/
    return MoveWindow(hWnda, X, v3, nWidth, nHeight, 0); /*0x60c0a9*/
  }
  if ( v5 == (void *)258 ) /*0x60be10*/
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
        return MoveWindow(hWnda, X, v3, nWidth, nHeight, 0); /*0x60c072*/
      goto LABEL_170; /*0x60c072*/
    }
    goto LABEL_167; /*0x60be4a*/
  }
  if ( v5 == (void *)187 ) /*0x60be79*/
  {
    if ( DlgCtrlID != 1344 ) /*0x60be81*/
      return result; /*0x60be81*/
    --nWidth; /*0x60be87*/
  }
  else if ( v5 == (void *)188 || v5 == (void *)189 ) /*0x60bea2*/
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
    if ( v5 == (void *)259 ) /*0x60beae*/
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
      result = 32; /*0x60befa*/
      if ( MEMORY[0x8A00A4] < 800 ) /*0x60bf01*/
        return result; /*0x60bf01*/
      v3 -= 50; /*0x60bf20*/
      goto LABEL_170; /*0x60bf22*/
    }
    if ( v5 == (void *)3015 ) /*0x60bf2d*/
      return result; /*0x60bf2d*/
    if ( v5 == (void *)264 ) /*0x60bf39*/
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
    if ( v5 != (void *)275 ) /*0x60bfdf*/
    {
      if ( v5 != (void *)270 || DlgCtrlID != 1951 ) /*0x60c014*/
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
    return MoveWindow(hWnda, X, v3, nWidth, nHeight, 0); /*0x60c084*/
  result = nHeight; /*0x60c08a*/
  if ( nHeight != v17 ) /*0x60c090*/
    return MoveWindow(hWnda, X, v3, nWidth, nHeight, 0); /*0x60c090*/
  return result; /*0x60c0af*/
}


// ==== 0x0060C0C0  RepositionDialogControls  this=-  sig=csp ====
BOOL __stdcall RepositionDialogControls(HWND hWnd, HWND a2)
{
  HWND v2; // esi
  HWND Parent; // ebx
  int v5; // eax
  int v6; // eax
  HWND *v7; // eax
  void *v8; // edi
  int DlgCtrlID; // ebp
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // eax
  HWND *v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  HWND v16; // eax
  _DWORD v17[4]; // [esp+Ch] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+2Ch] [ebp-10h] BYREF

  v2 = hWnd; /*0x60c0c5*/
  Parent = GetParent(hWnd); /*0x60c0d0*/
  if ( (HWND)MEMORY[0xAC48A8] != Parent ) /*0x60c0dd*/
    return 1; /*0x60c48f*/
  memset(v17, 0, sizeof(v17)); /*0x60c0f0*/
  if ( ControlDialogHandler((int)Parent, v2, v17) ) /*0x60c100*/
  {
    UI_Get(v2, v17); /*0x60c10f*/
    Control::RepositionControlsDialog(v2); /*0x60c116*/
    return 1; /*0x60c11e*/
  }
  else
  {
    if ( (GetWindowLongA(v2, -16) & 0xB) != 0xB ) /*0x60c13a*/
      goto LABEL_9; /*0x60c13a*/
    hWnd = v2; /*0x60c141*/
    if ( !MEMORY[0xAC1B04] ) /*0x60c147*/
      goto LABEL_9; /*0x60c147*/
    v5 = *((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&hWnd)); /*0x60c15e*/
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
      RepositionGameSpeedIndicator(v2, (int)a2); /*0x60c1c8*/
      Control::RepositionControlsDialog(v2); /*0x60c1cf*/
      return 1; /*0x60c1d7*/
    }
    else
    {
LABEL_9:
      if ( IsDialogControlVisible((int)Parent, v2) ) /*0x60c17b*/
      {
        UI_Get_60B1D0(v2, a2); /*0x60c18a*/
        Control::RepositionControlsDialog(v2); /*0x60c191*/
        return 1; /*0x60c199*/
      }
      else if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB /*0x60c21c*/
             && (hWnd = v2, a2 = 0, HashTable::Get(&MEMORY[0xAC1B00], &hWnd, &a2), a2)
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
        if ( !MEMORY[0xAC1B04] ) /*0x60c277*/
          goto LABEL_26; /*0x60c277*/
        v7 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&a2)); /*0x60c28e*/
        if ( !v7 ) /*0x60c293*/
          goto LABEL_26; /*0x60c293*/
        while ( *v7 != a2 ) /*0x60c29b*/
        {
          v7 = (HWND *)v7[129]; /*0x60c29d*/
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
          HashTable::Get(&MEMORY[0xAC1B00], &hWnd, &a2); /*0x60c311*/
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
            if ( !MEMORY[0xAC1B04] ) /*0x60c360*/
              goto LABEL_41; /*0x60c360*/
            v13 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&a2)); /*0x60c377*/
            if ( !v13 ) /*0x60c37c*/
              goto LABEL_41; /*0x60c37c*/
            while ( *v13 != a2 ) /*0x60c384*/
            {
              v13 = (HWND *)v13[129]; /*0x60c38a*/
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


// ==== 0x0060C4A0  ResizeDialogAndEnum  this=Game  sig=csp ====
BOOL __thiscall ResizeDialogAndEnum(SkirmishDialog *this)
{
  LPARAM v1; // edx
  LPARAM v3; // edi

  v3 = v1; /*0x60c4b7*/
  MoveWindow((HWND)this, 0, 0, MEMORY[0x8A00A4], *(&MEMORY[0x8A00A4] + 1), 0); /*0x60c4ba*/
  MEMORY[0xAC48A8] = (int)this; /*0x60c4c0*/
  return EnumChildWindows((HWND)this, (WNDENUMPROC)RepositionDialogControls, v3); /*0x60c4d3*/
}


// ==== 0x0060C540  Control::CheckControlTypeDialog  this=SkirmishDialog  sig=csp ====
char __thiscall Dialog_CheckControlType(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  void *v5; // [esp+4h] [ebp-4h] BYREF

  v5 = this; /*0x60c549*/
  if ( !MEMORY[0xAC1B04] ) /*0x60c54d*/
    return 0; /*0x60c54d*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60c570*/
  if ( !v1 ) /*0x60c575*/
    return 0; /*0x60c575*/
  while ( (void *)*v1 != v5 ) /*0x60c57d*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60c57f*/
    if ( !v1 ) /*0x60c587*/
      return 0; /*0x60c58d*/
  }
  v3 = v1 + 1; /*0x60c592*/
  if ( v1 == (_DWORD *)-4 ) /*0x60c597*/
    return 0; /*0x60c599*/
  v4 = v1[28]; /*0x60c59e*/
  if ( v4 != 268 /*0x60c7b0*/
    && v4 != 148
    && v4 != 182
    && v4 != 163
    && v4 != 115
    && v4 != 216
    && v4 != 3003
    && v4 != 245
    && v4 != 261
    && v4 != 213
    && v4 != 226
    && v4 != 693
    && v4 != 183
    && v4 != 692
    && v4 != 257
    && v4 != 297
    && v4 != 3014
    && v4 != 3015
    && v4 != 267
    && v4 != 215
    && v4 != 264
    && v4 != 188
    && v4 != 189
    && v4 != 187
    && v4 != 181
    && v4 != 3002
    && v4 != 255
    && v4 != 234
    && v4 != 107
    && v4 != 256
    && v4 != 258
    && v4 != 184
    && v4 != 214
    && v4 != 259
    && v4 != 212
    && v4 != 293
    && v4 != 290
    && v4 != 274
    && v4 != 231
    && v4 != 278
    && v4 != 194
    && v4 != 201
    && v4 != 275
    && v4 != 254
    && v4 != 271
    && v4 != 285
    && v4 != 284
    && v4 != 279
    && v4 != 276
    && v4 != 230
    && v4 != 243
    && v4 != 244
    && v4 != 700
    && v4 != 270
    && v4 != 251 )
  {
    return 0; /*0x60c7b2*/
  }
  v3[44] = 1; /*0x60c7b9*/
  *((_BYTE *)v3 + 189) = 1; /*0x60c7bf*/
  return 1; /*0x60c58b*/
}


// ==== 0x0060C7D0  ObjectClass::UI_Helper_60C7D0  this=ObjectClass  sig=csp ====
char __thiscall sub_60C7D0(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60c7d6*/
  if ( !MEMORY[0xAC1B04] ) /*0x60c7dc*/
    return 0; /*0x60c7dc*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60c7fd*/
  if ( !v1 ) /*0x60c802*/
    return 0; /*0x60c802*/
  while ( (void *)*v1 != v5 ) /*0x60c80a*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60c80c*/
    if ( !v1 ) /*0x60c814*/
      return 0; /*0x60c819*/
  }
  v3 = v1 + 1; /*0x60c81e*/
  if ( v1 == (_DWORD *)-4 ) /*0x60c823*/
    return 0; /*0x60c825*/
  v4 = v1[28]; /*0x60c829*/
  if ( v4 != 269 /*0x60c8b3*/
    && v4 != 217
    && v4 != 240
    && v4 != 206
    && v4 != 288
    && v4 != 289
    && v4 != 277
    && v4 != 211
    && v4 != 207
    && v4 != 287
    && v4 != 195
    && v4 != 283
    && v4 != 225
    && v4 != 286
    && v4 != 196
    && v4 != 304
    && v4 != 208
    && v4 != 252
    && v4 != 294 )
  {
    return 0; /*0x60c8b5*/
  }
  v3[44] = 2; /*0x60c8bb*/
  return 1; /*0x60c819*/
}


// ==== 0x0060C930  ObjectClass::UI_Helper_60C930  this=ObjectClass  sig=csp ====
char __thiscall sub_60C930(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60c936*/
  if ( !MEMORY[0xAC1B04] ) /*0x60c93c*/
    return 0; /*0x60c93c*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60c95d*/
  if ( !v1 ) /*0x60c962*/
    return 0; /*0x60c962*/
  while ( (void *)*v1 != v5 ) /*0x60c96a*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60c96c*/
    if ( !v1 ) /*0x60c974*/
      return 0; /*0x60c979*/
  }
  v3 = v1 + 1; /*0x60c97e*/
  if ( v1 == (_DWORD *)-4 ) /*0x60c983*/
    return 0; /*0x60c985*/
  v4 = v1[28]; /*0x60c989*/
  if ( v4 == 188 || v4 == 189 || v4 == 258 || v4 == 194 || v4 == 201 || v4 == 3014 ) /*0x60c9b4*/
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
char __thiscall sub_60CAF0(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60caf6*/
  if ( !MEMORY[0xAC1B04] ) /*0x60cafc*/
    return 0; /*0x60cafc*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60cb1d*/
  if ( !v1 ) /*0x60cb22*/
    return 0; /*0x60cb22*/
  while ( (void *)*v1 != v5 ) /*0x60cb2a*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60cb2c*/
    if ( !v1 ) /*0x60cb34*/
      return 0; /*0x60cb39*/
  }
  v3 = v1 + 1; /*0x60cb3e*/
  if ( v1 == (_DWORD *)-4 ) /*0x60cb43*/
    return 0; /*0x60cb45*/
  v4 = v1[28]; /*0x60cb49*/
  if ( v4 == 188 /*0x60cb87*/
    || v4 == 189
    || v4 == 258
    || v4 == 194
    || v4 == 201
    || v4 == 3014
    || v4 == 261
    || v4 == 107
    || v4 == 275 )
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
int __thiscall sub_60CBA0(void *this)
{
  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  result = MEMORY[0xAC1B04]; /*0x60cba1*/
  v2 = this; /*0x60cba6*/
  if ( MEMORY[0xAC1B04] ) /*0x60cbac*/
  {
    result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v2) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60cbcd*/
    if ( result ) /*0x60cbd2*/
    {
      while ( *(void **)result != v2 ) /*0x60cbda*/
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
int __thiscall sub_60CC00(void *this)
{
  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  result = MEMORY[0xAC1B04]; /*0x60cc01*/
  v2 = this; /*0x60cc06*/
  if ( MEMORY[0xAC1B04] ) /*0x60cc0c*/
  {
    result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v2) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60cc2d*/
    if ( result ) /*0x60cc32*/
    {
      while ( *(void **)result != v2 ) /*0x60cc3a*/
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
char __thiscall sub_60CCC0(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60ccc6*/
  if ( !MEMORY[0xAC1B04] ) /*0x60cccc*/
    return 0; /*0x60cccc*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60cced*/
  if ( !v1 ) /*0x60ccf2*/
    return 0; /*0x60ccf2*/
  while ( (void *)*v1 != v5 ) /*0x60ccfa*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60ccfc*/
    if ( !v1 ) /*0x60cd04*/
      return 0; /*0x60cd09*/
  }
  v3 = v1 + 1; /*0x60cd0e*/
  if ( v1 == (_DWORD *)-4 ) /*0x60cd13*/
    return 0; /*0x60cd15*/
  v4 = v1[28]; /*0x60cd19*/
  if ( v4 == 259 || v4 == 3015 ) /*0x60cd28*/
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
char __thiscall sub_60CDB0(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x60cdb6*/
  if ( !MEMORY[0xAC1B04] ) /*0x60cdbc*/
    return 0; /*0x60cdbc*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60cddd*/
  if ( !v1 ) /*0x60cde2*/
    return 0; /*0x60cde2*/
  while ( (void *)*v1 != v5 ) /*0x60cdea*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60cdec*/
    if ( !v1 ) /*0x60cdf4*/
      return 0; /*0x60cdf9*/
  }
  v3 = v1 + 1; /*0x60cdfe*/
  if ( v1 == (_DWORD *)-4 ) /*0x60ce03*/
    return 0; /*0x60ce05*/
  v4 = v1[28]; /*0x60ce09*/
  if ( v4 == 264 || v4 == 3014 ) /*0x60ce18*/
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


// ==== 0x0060CF00  Control::CreateControlDialog  this=SkirmishDialog  sig=csp ====
_DWORD *__thiscall Dialog_CreateControl(void *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  int v3; // eax
  void *v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)MEMORY[0xAC1B04]; /*0x60cf01*/
  v4 = this; /*0x60cf09*/
  if ( MEMORY[0xAC1B04] ) /*0x60cf0d*/
  {
    result = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60cf32*/
    if ( result ) /*0x60cf37*/
    {
      while ( (void *)*result != v4 ) /*0x60cf43*/
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
            result = (_DWORD *)CreatureClass::GetManager(v4); /*0x60cf6f*/
            v2[29] = result; /*0x60cf74*/
            v2[56] = MEMORY[0xB0FA6C]; /*0x60cf7d*/
            v2[57] = MEMORY[0xB0FA6C]; /*0x60cf89*/
            return result; /*0x60cf91*/
          case 259: /*0x60cf6d*/
            goto LABEL_10; /*0x60cf97*/
          case 264: /*0x60cf6d*/
            v2[29] = UI_Create_72D820(v4); /*0x60cfc7*/
            v2[56] = MEMORY[0xB0FB1C]; /*0x60cfd0*/
            result = MEMORY[0xB0FB1C]; /*0x60cfd6*/
            v2[57] = MEMORY[0xB0FB1C]; /*0x60cfdb*/
            break;
          case 3014: /*0x60cf6d*/
            result = (_DWORD *)VtableStub_72D450(v4); /*0x60cfeb*/
            v2[29] = result; /*0x60cff0*/
            v2[56] = MEMORY[0xB0FB34]; /*0x60cff9*/
            v2[57] = MEMORY[0xB0FB34]; /*0x60d005*/
            break;
          case 3015: /*0x60cf6d*/
LABEL_10:
            v2[29] = VtableStub_72D450(v4); /*0x60cf99*/
            result = MEMORY[0xB0FB34]; /*0x60cfa1*/
            v2[56] = MEMORY[0xB0FB34]; /*0x60cfa6*/
            v2[57] = MEMORY[0xB0FB34]; /*0x60cfb2*/
            return result; /*0x60cfba*/
          case 107: /*0x60cf6d*/
            v2[29] = UI_Create_72D210(v4); /*0x60d01f*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d028*/
            result = MEMORY[0xB0FAB8]; /*0x60d02e*/
            v2[57] = MEMORY[0xB0FAB8]; /*0x60d033*/
            break;
          case 258: /*0x60cf6d*/
          case 188: /*0x60cf6d*/
          case 189: /*0x60cf6d*/
          case 194: /*0x60cf6d*/
          case 201: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72D030(v4); /*0x60d294*/
            v2[29] = result; /*0x60d299*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d2a2*/
            v2[57] = MEMORY[0xB0FA18]; /*0x60d2ae*/
            break;
          case 275: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72CE50(v4); /*0x60d07a*/
            v2[29] = result; /*0x60d07f*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d088*/
            v2[57] = MEMORY[0xB0FAAC]; /*0x60d094*/
            break;
          case 276: /*0x60cf6d*/
            v2[29] = UI_Create_72CAB0(v4); /*0x60d0a9*/
            result = MEMORY[0xB0FB50]; /*0x60d0ac*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d0b1*/
            v2[57] = MEMORY[0xB0FA60]; /*0x60d0bd*/
            break;
          case 270: /*0x60cf6d*/
          case 284: /*0x60cf6d*/
            v2[29] = UI_Create_72C8D0(v4); /*0x60d277*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d280*/
            result = MEMORY[0xB0F9E8]; /*0x60d286*/
            v2[57] = MEMORY[0xB0F9E8]; /*0x60d28b*/
            break;
          case 271: /*0x60cf6d*/
          case 285: /*0x60cf6d*/
            v2[29] = UI_Create_72C6F0(v4); /*0x60d255*/
            result = MEMORY[0xB0FB50]; /*0x60d258*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d25d*/
            v2[57] = MEMORY[0xB0FB0C]; /*0x60d269*/
            break;
          case 230: /*0x60cf6d*/
          case 243: /*0x60cf6d*/
          case 244: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72C510(v4); /*0x60d22d*/
            v2[29] = result; /*0x60d232*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d23b*/
            v2[57] = MEMORY[0xB0FA64]; /*0x60d247*/
            break;
          case 231: /*0x60cf6d*/
            v2[29] = UI_Create_72C330(v4); /*0x60d11f*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d128*/
            result = MEMORY[0xB0FA30]; /*0x60d12e*/
            v2[57] = MEMORY[0xB0FA30]; /*0x60d133*/
            break;
          case 278: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72C150(v4); /*0x60d143*/
            v2[29] = result; /*0x60d148*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d151*/
            v2[57] = MEMORY[0xB0FA4C]; /*0x60d15d*/
            break;
          case 279: /*0x60cf6d*/
            v2[29] = UI_Create_72BF70(v4); /*0x60d172*/
            result = MEMORY[0xB0FB50]; /*0x60d175*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d17a*/
            v2[57] = MEMORY[0xB0FA9C]; /*0x60d186*/
            break;
          case 274: /*0x60cf6d*/
            v2[29] = UI_Create_72BD90(v4); /*0x60d19b*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d1a4*/
            result = MEMORY[0xB0FA98]; /*0x60d1aa*/
            v2[57] = MEMORY[0xB0FA98]; /*0x60d1af*/
            break;
          case 700: /*0x60cf6d*/
            result = (_DWORD *)UI_Create_72BBB0(v4); /*0x60d1bf*/
            v2[29] = result; /*0x60d1c4*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d1cd*/
            v2[57] = MEMORY[0xB0FB2C]; /*0x60d1d9*/
            break;
          case 214: /*0x60cf6d*/
            v2[29] = UI_Create_72B9D0(v4); /*0x60d1ee*/
            result = MEMORY[0xB0FB50]; /*0x60d1f1*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d1f6*/
            v2[57] = MEMORY[0xB0FB54]; /*0x60d202*/
            break;
          default:
            v2[29] = VtableStub_72E280(v4); /*0x60d210*/
            v2[56] = MEMORY[0xB0FB50]; /*0x60d219*/
            result = MEMORY[0xB0FA04]; /*0x60d21f*/
            v2[57] = MEMORY[0xB0FA04]; /*0x60d224*/
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

  result = (_DWORD *)MEMORY[0xAC1B04]; /*0x60d2c1*/
  v4 = a1; /*0x60d2cb*/
  if ( MEMORY[0xAC1B04] ) /*0x60d2cf*/
  {
    result = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60d2f0*/
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


// ==== 0x0060D320  GameSetup::LookupDialogHash  this=Game  sig=csp ====
int __thiscall sub_60D320(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x60d326*/
  if ( !MEMORY[0xAC1B04] ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60d34d*/
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( (void *)*v1 != v4 ) /*0x60d35a*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60d35c*/
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
LONG __stdcall sub_60D380(char a1)
{
  HWND v1; // esi
  LONG result; // eax
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  v1 = (HWND)CreateDialog(0); /*0x60d389*/
  result = 0; /*0x60d38b*/
  dwNewLong = 0; /*0x60d38f*/
  if ( v1 ) /*0x60d393*/
  {
    SetWindowLongA(v1, 8, (LONG)&dwNewLong); /*0x60d3a1*/
    ShowWindow(v1, 1); /*0x60d3aa*/
    SetForegroundWindow(v1); /*0x60d3b1*/
    Timer::PumpMessages(MEMORY[0x87F770]); /*0x60d3bd*/
    if ( a1 ) /*0x60d3c8*/
      BINK::Background_Setup(v1); /*0x60d3cc*/
    while ( !dwNewLong ) /*0x60d3d7*/
    {
      MessageLoop(); /*0x60d3d9*/
      if ( !MEMORY[0xA8B238] || MEMORY[0xA8B238] == 5 || MEMORY[0xA8D60E] || MEMORY[0xA8DAB4] ) /*0x60d3fc*/
      {
        Event::Dispatch(); /*0x60d412*/
      }
      else if ( !(unsigned __int8)VtableStub::Method_55CBF0() && GameFrameLoop() ) /*0x60d407*/
      {
        break; /*0x60d40e*/
      }
    }
    Dialog::Destroy(v1); /*0x60d41f*/
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
ATOM sub_60D450()
{
  ATOM result; // ax
  WNDCLASSA WndClass; // [esp+0h] [ebp-28h] BYREF

  result = 1; /*0x60d456*/
  if ( MEMORY[0xAC48CC] != 1 ) /*0x60d460*/
  {
    MEMORY[0xAC48CC] = 1; /*0x60d469*/
    WndClass.hInstance = g_hInstance; /*0x60d48a*/
    WndClass.style = 3; /*0x60d496*/
    WndClass.lpfnWndProc = GameScreen::DlgProc; /*0x60d49e*/
    WndClass.cbClsExtra = 0; /*0x60d4a6*/
    WndClass.cbWndExtra = 0; /*0x60d4aa*/
    memset(&WndClass.hIcon, 0, 12); /*0x60d4ae*/
    WndClass.lpszMenuName = MEMORY[0x8357A0]; /*0x60d4ba*/
    WndClass.lpszClassName = MEMORY[0x8357A0]; /*0x60d4be*/
    RegisterClassA(&WndClass); /*0x60d4c2*/
    WndClass.style = 131; /*0x60d4db*/
    WndClass.lpfnWndProc = sub_60D520; /*0x60d4e4*/
    WndClass.cbClsExtra = 0; /*0x60d4ec*/
    WndClass.cbWndExtra = 0; /*0x60d4f0*/
    WndClass.hInstance = g_hInstance; /*0x60d4f4*/
    memset(&WndClass.hIcon, 0, 16); /*0x60d4f8*/
    WndClass.lpszClassName = MEMORY[0x833720]; /*0x60d508*/
    return RegisterClassA(&WndClass); /*0x60d510*/
  }
  return result; /*0x60d515*/
}


// ==== 0x0060D520  sub_60D520  this=-  sig=csp ====
LRESULT __stdcall sub_60D520(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x60d53a*/
}


// ==== 0x0060D540  GameScreen::DlgProc  this=GameScreen  sig=csp ====
HWND __userpurge GameScreen_DlgProc@<eax>(
        int a1@<ebx>,
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
  UINT v14; // ecx
  LRESULT v15; // esi
  LRESULT v16; // ecx
  HWND v17; // esi
  HWND v18; // eax
  int v19; // ecx
  UINT v20; // ecx
  UINT v21; // ecx
  LONG v22; // edx
  int v23; // ecx
  _DWORD *v24; // esi
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
  int v42; // eax
  LRESULT (__stdcall **v43)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v44; // eax
  int v45; // eax
  unsigned int v46; // edx
  LONG v47; // edi
  int v48; // ebx
  char v49; // cl
  int v50; // eax
  _DWORD *v51; // ebp
  size_t v52; // esi
  int v53; // eax
  _WORD *v54; // edi
  bool v55; // cc
  HWND v56; // eax
  UINT v57; // ecx
  UINT v58; // ecx
  LRESULT v59; // esi
  HWND Capture; // esi
  UINT v61; // ecx
  UINT v62; // ecx
  LRESULT v63; // eax
  LPARAM v64; // esi
  HWND v65; // ebp
  HWND v66; // ebx
  wchar_t *v67; // eax
  HWND v68; // esi
  HWND v69; // ebp
  wchar_t *v70; // eax
  int v71; // ebx
  LRESULT v72; // esi
  LRESULT v73; // eax
  int v74; // eax
  int v75; // esi
  LONG v76; // ebx
  LONG v77; // esi
  LRESULT v78; // ebx
  LRESULT v79; // ecx
  int v80; // eax
  signed int v81; // eax
  int v82; // ecx
  unsigned __int16 v83; // si
  UINT v84; // ecx
  UINT v85; // ecx
  HWND *v86; // esi
  LONG v87; // ebp
  LONG v88; // ebx
  HWND Window; // eax
  int v90; // edx
  int v91; // ecx
  HWND *v92; // eax
  _BYTE *v93; // eax
  int v94; // ecx
  LONG v95; // ecx
  double v96; // st7
  int v97; // esi
  HWND *v98; // ecx
  HWND v99; // edi
  double v100; // st7
  unsigned int v101; // eax
  int *v102; // ebp
  int v103; // esi
  int *v104; // edi
  int v105; // ebp
  int v106; // esi
  int v107; // edx
  int v108; // ecx
  int v109; // eax
  HWND *v110; // eax
  int v111; // esi
  int *v112; // edi
  int v113; // ebp
  int v114; // esi
  int v115; // edx
  int v116; // ecx
  int v117; // eax
  void *v118; // eax
  void *v119; // eax
  int v120; // ebx
  char *v121; // ebp
  void *v122; // eax
  void *v123; // edx
  char *v124; // ebp
  int v125; // edi
  int v126; // ebp
  _DWORD *i; // eax
  void **v128; // ecx
  double v129; // st7
  int *v130; // ebp
  int v131; // esi
  int *v132; // edi
  int v133; // ebx
  int v134; // esi
  int v135; // eax
  int v136; // edx
  int v137; // eax
  char *v138; // ebx
  void *v139; // edx
  _DWORD *v140; // ecx
  _DWORD *v141; // edx
  _DWORD *v142; // eax
  void *v143; // esi
  double v144; // st7
  int v145; // esi
  HWND *v146; // ecx
  HWND v147; // edi
  double v148; // st7
  unsigned int v149; // eax
  int *v150; // ebp
  int v151; // esi
  int *v152; // edi
  int v153; // ebp
  int v154; // esi
  int v155; // edx
  int v156; // ecx
  int v157; // eax
  HWND *v158; // eax
  unsigned int v159; // eax
  int v160; // esi
  int *v161; // edi
  int v162; // ebp
  int v163; // esi
  int v164; // edx
  int v165; // ecx
  int v166; // eax
  void *WindowLongA; // eax
  int v168; // eax
  int v169; // esi
  LONG v170; // ebx
  int v171; // ecx
  LRESULT v172; // esi
  LRESULT v173; // ecx
  int v174; // eax
  int v175; // ecx
  HWND v176; // [esp+18h] [ebp-39Ch]
  wchar_t *v177; // [esp+24h] [ebp-390h]
  HWND v181; // [esp+38h] [ebp-37Ch] BYREF
  void *Block; // [esp+3Ch] [ebp-378h] BYREF
  int v183; // [esp+40h] [ebp-374h]
  HWND hDlg; // [esp+44h] [ebp-370h] BYREF
  LPARAM Y[2]; // [esp+48h] [ebp-36Ch] BYREF
  HWND v186; // [esp+50h] [ebp-364h] BYREF
  int nWidth; // [esp+54h] [ebp-360h]
  int v188; // [esp+58h] [ebp-35Ch]
  int v189; // [esp+5Ch] [ebp-358h]
  HWND DlgItem; // [esp+60h] [ebp-354h]
  struct tagRECT Rect; // [esp+64h] [ebp-350h] BYREF
  int v192; // [esp+74h] [ebp-340h]
  void *v193; // [esp+78h] [ebp-33Ch] BYREF
  struct tagRECT v194; // [esp+7Ch] [ebp-338h] BYREF
  LONG v195; // [esp+8Ch] [ebp-328h]
  struct tagRECT v196; // [esp+90h] [ebp-324h] BYREF
  void *v197; // [esp+A0h] [ebp-314h]
  int v198; // [esp+A4h] [ebp-310h] BYREF
  int v199; // [esp+A8h] [ebp-30Ch]
  LONG v200; // [esp+ACh] [ebp-308h]
  LONG v201; // [esp+B0h] [ebp-304h]
  RECT v202; // [esp+B4h] [ebp-300h] BYREF
  int v203[4]; // [esp+C4h] [ebp-2F0h] BYREF
  struct tagRECT v204; // [esp+D4h] [ebp-2E0h] BYREF
  struct tagRECT lParam; // [esp+E4h] [ebp-2D0h] BYREF
  int v206; // [esp+F8h] [ebp-2BCh]
  int v207; // [esp+100h] [ebp-2B4h]
  struct tagRECT v208; // [esp+104h] [ebp-2B0h] BYREF
  LPARAM v209[4]; // [esp+114h] [ebp-2A0h] BYREF
  LONG v210; // [esp+124h] [ebp-290h] BYREF
  LONG left; // [esp+128h] [ebp-28Ch]
  LONG top; // [esp+12Ch] [ebp-288h]
  LONG v213; // [esp+130h] [ebp-284h]
  LONG v214; // [esp+140h] [ebp-274h] BYREF
  LONG v215; // [esp+144h] [ebp-270h]
  LONG right; // [esp+148h] [ebp-26Ch]
  LONG bottom; // [esp+14Ch] [ebp-268h]
  void *v218[128]; // [esp+150h] [ebp-264h] BYREF
  char Buffer[100]; // [esp+350h] [ebp-64h] BYREF

  if ( (MEMORY[0xAC1B9C] & 1) == 0 )
  {
    MEMORY[0xAC1B9C] |= 1u;
    MEMORY[0xAC18A0] = (int)CreateSolidBrush(0x306030u);
  }
  ScreenDialogToClient(hWnd, &v204);
  GetClientRect(hWnd, &Rect);
  memset(&v208, 0, sizeof(v208));
  nWidth = 2 * MEMORY[0xAC1DF0] + 18;
  Parent = 0;
  v183 = -1;
  DlgItem = 0;
  hDlg = 0;
  if ( MEMORY[0xAC48D0] )
  {
    Parent = GetParent(MEMORY[0xAC48D0]);
    hDlg = Parent;
  }
  v189 = 0;
  if ( Parent )
  {
    if ( MEMORY[0xAC1B04] )
    {
      v9 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hDlg) & ((1 << MEMORY[0xAC1B0C]) - 1)));
      Parent = hDlg;
      if ( v9 )
      {
        while ( *(HWND *)v9 != hDlg )
        {
          v9 = *(_DWORD *)(v9 + 516);
          if ( !v9 )
            goto LABEL_12;
        }
        v189 = v9 + 4;
      }
    }
LABEL_12:
    ScreenDialogToClient(Parent, &v208);
    Parent = hDlg;
  }
  MEMORY[0xAC48C4] = (int)Parent;
  v10 = 0;
  MEMORY[0xAC48C0] = hWnd;
  v188 = 0;
  if ( !MEMORY[0xAC1B04] )
    goto LABEL_19;
  v11 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1)));
  if ( !v11 )
    goto LABEL_19;
  while ( *(HWND *)v11 != hWnd )
  {
    v11 = *(_DWORD *)(v11 + 516);
    if ( !v11 )
      goto LABEL_19;
  }
  v10 = v11 + 4;
  v188 = v11 + 4;
  if ( v11 == -4 )
LABEL_19:
    Debug::Log(MEMORY[0x8357E0]);
  result = MEMORY[0xAC48D0];
  v181 = 0;
  if ( MEMORY[0xAC48D0] )
  {
    if ( MEMORY[0xAC1B04] )
    {
      v13 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&MEMORY[0xAC48D0]) & ((1 << MEMORY[0xAC1B0C]) - 1)));
      result = MEMORY[0xAC48D0];
      if ( v13 )
      {
        while ( *(HWND *)v13 != MEMORY[0xAC48D0] )
        {
          v13 = *(_DWORD *)(v13 + 516);
          if ( !v13 )
            goto LABEL_27;
        }
        v181 = (HWND)(v13 + 4);
      }
    }
  }
LABEL_27:
  v14 = Msg;
  if ( Msg != 326 && Msg != 340 && Msg != 277 )
  {
    v15 = SendMessageA(result, 0x146u, 0, 0);
    v16 = SendMessageA(MEMORY[0xAC48D0], 0x154u, 0, 0);
    if ( v16 <= 1 )
      v16 = 1;
    v183 = v15 * v16 > Rect.bottom - Rect.top;
    v17 = (HWND)(v15 - (Rect.bottom - Rect.top) / v16);
    DlgItem = v17;
    if ( v10 )
    {
      v18 = *(HWND *)(v10 + 12);
      if ( (unsigned int)v18 > 1 )
      {
        v19 = *(_DWORD *)(v10 + 240);
        lParam.top = 5;
        lParam.right = 0;
        lParam.bottom = (LONG)v17;
        v206 = v19;
        lParam.left = 28;
        SendMessageA(v18, 0xE9u, 0, (LPARAM)&lParam);
      }
      if ( *(_DWORD *)(v10 + 12) )
        BringWindowToTop(*(HWND *)(v10 + 12));
    }
    result = MEMORY[0xAC48D0];
    v14 = Msg;
  }
  if ( v14 <= 0x15B )
  {
    if ( v14 == 347 )
    {
      if ( v10 )
        return *(HWND *)(v10 + 240);
    }
    else if ( v14 > 0x14 )
    {
      v57 = v14 - 130;
      if ( v57 )
      {
        v58 = v57 - 145;
        if ( v58 )
        {
          if ( v58 == 2 )
          {
            v59 = SendMessageA(*(HWND *)(v10 + 12), 0xE1u, 0, 0);
            if ( v59 != SendMessageA(hWnd, 0x15Bu, 0, 0) )
              SendMessageA(hWnd, 0x15Cu, v59, 0);
          }
        }
        else
        {
          Capture = GetCapture();
          if ( Capture == hWnd )
          {
            ReleaseCapture();
            Sleep(0);
            SetCapture(Capture);
          }
        }
      }
      else
      {
        MEMORY[0xAC48C0] = 0;
        MEMORY[0xAC48C4] = 0;
        ReleaseCapture();
        KillTimer(hWnd, 0);
      }
    }
    else
    {
      if ( v14 == 20 )
        return 0;
      v20 = v14 - 1;
      if ( !v20 )
      {
        SetCapture(hWnd);
        MEMORY[0xAC48D0] = *(HWND *)a8;
        v56 = GetParent(MEMORY[0xAC48D0]);
        sprintf(Buffer, MEMORY[0x8357BC], hWnd, MEMORY[0xAC48D0], v56);
        Debug::Log(Buffer);
        SetTimer(hWnd, 0, 0x14u, 0);
        return 0;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 13 )
        {
          Y[0] = *(_DWORD *)(v189 + 100);
          DlgItem = (HWND)SendMessageA(result, 0x146u, 0, 0);
          v188 = SendMessageA(MEMORY[0xAC48D0], 0x154u, 0, 0);
          v207 = Rect.bottom - Rect.top;
          v194.bottom = Rect.bottom - Rect.top;
          v197 = *(void **)(v10 + 232);
          v194.left = v204.left;
          v22 = v204.right - v204.left;
          v194.top = v204.top;
          v215 = v204.top - v208.top;
          v23 = *(_DWORD *)(v10 + 16);
          v214 = v204.left - v208.left;
          v194.right = v204.right - v204.left;
          right = Rect.right;
          bottom = Rect.bottom;
          if ( !v23 )
          {
            v198 = 0;
            v199 = 0;
            v200 = Rect.right;
            v201 = Rect.bottom;
            v24 = __2_YAPAXI_Z(0x20u);
            if ( v24 )
            {
              v25 = Rect.right;
              v26 = Rect.bottom;
              v24[1] = Rect.right;
              v24[2] = v26;
              v24[3] = 0;
              *v24 = &XSurface_Vtable;
              v24[4] = 2;
              Buffer::Init(v24 + 5, 0, 2 * v26 * v25);
              *v24 = &BSurface_Vtable;
            }
            else
            {
              v24 = 0;
            }
            v27 = v189;
            *(_DWORD *)(v10 + 16) = v24;
            v195 = (LONG)v24;
            ++MEMORY[0xAC48B4];
            if ( v27 )
            {
              v28 = *(_DWORD *)(v27 + 16);
              if ( v28 )
                (*(void (__thiscall **)(_DWORD *, int *, int, LONG *, _DWORD, int))(*v24 + 8))(
                  v24,
                  &v198,
                  v28,
                  &v214,
                  0,
                  1);
            }
            v29 = Rect.bottom * Rect.right;
            v30 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v24 + 92))(v24, 0, 0);
            if ( v29 > 0 )
            {
              v31 = (__int16 *)v30;
              v192 = v29;
              do
              {
                v32 = *v31;
                LOBYTE(v189) = *(_BYTE *)(v10 + 200);
                g_GameScreenFlags = (unsigned __int8)v189;
                g_GameScreenConfig = 255 - (unsigned __int8)v189;
                ++v31;
                v34 = v192 - 1;
                v33 = v192 == 1;
                *(v31 - 1) = ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & MEMORY[0xAC48BC])) >> 8)
                           | MEMORY[0xAC48B8]
                           & ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & MEMORY[0xAC48B8])) >> 8)
                           | HIWORD(MEMORY[0xAC48B8])
                           & ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & HIWORD(MEMORY[0xAC48B8]))) >> 8);
                v192 = v34;
              }
              while ( !v33 );
              v24 = (_DWORD *)v195;
            }
            (*(void (__thiscall **)(_DWORD *))(*v24 + 96))(v24);
            v22 = v194.right;
          }
          v35 = *(_DWORD *)(v10 + 16);
          v201 = v194.bottom;
          v198 = 0;
          v199 = 0;
          v200 = v22;
          (*(void (__thiscall **)(int, struct tagRECT *, int, int *, _DWORD, int, int, int, int, int))(*(_DWORD *)MEMORY[0x887310] + 8))(
            MEMORY[0x887310],
            &v194,
            v35,
            &v198,
            0,
            1,
            a3,
            a4,
            a2,
            a1);
          top = v196.top;
          v210 = v195;
          left = v196.left;
          v213 = v196.right;
          if ( MEMORY[0xAC4624] == -1 )
            v36 = -1;
          else
            v36 = ((int)(unsigned __int8)MEMORY[0xAC4624] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                | (BYTE1(MEMORY[0xAC4624]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                | (BYTE2(MEMORY[0xAC4624]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
          if ( Y[0] && *(_BYTE *)(Y[0] + 205) )
          {
            if ( MEMORY[0xAC1DD8] == -1 )
              v36 = -1;
            else
              v36 = ((int)(unsigned __int8)MEMORY[0xAC1DD8] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                  | (BYTE1(MEMORY[0xAC1DD8]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                  | (BYTE2(MEMORY[0xAC1DD8]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
          }
          DrawDialogGradient((int *)MEMORY[0x887310], &v210, 2, v36);
          if ( v186 && v10 && *(_DWORD *)(v10 + 12) )
          {
            v204.left = v195;
            v204.top = v196.left;
            v204.bottom = v196.right;
            v204.right = Rect.left + v196.top;
            DrawDialogGradient((int *)MEMORY[0x887310], &v204.left, 2, v36);
          }
          v37 = *(_DWORD *)(v10 + 240);
          Rect.left = v37;
          if ( v37 < Rect.bottom )
          {
            v196.bottom = Rect.top * v37;
            Rect.right = Rect.top * v37;
            v194.right = Y[0] + 4 * v37 + 272;
            while ( 1 )
            {
              v204.left = lParam.left;
              v38 = lParam.right - lParam.left;
              v204.top = lParam.top + Rect.right - v196.bottom;
              if ( Rect.top + Rect.right - v196.bottom > v208.bottom )
                goto LABEL_111;
              v39 = MEMORY[0xAC48D0];
              v40 = 0;
              v186 = MEMORY[0xAC48D0];
              if ( MEMORY[0xAC1B4C] )
              {
                v41 = MEMORY[0xAC1B60](&v186);
                v39 = v186;
                v42 = *((_DWORD *)MEMORY[0xAC1B48] + (v41 & ((1 << MEMORY[0xAC1B54]) - 1)));
                if ( v42 )
                {
                  while ( *(HWND *)v42 != v186 )
                  {
                    v42 = *(_DWORD *)(v42 + 8);
                    if ( !v42 )
                      goto LABEL_79;
                  }
                  v43 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v42 + 4);
                  if ( v43 )
                    v40 = *v43;
                }
              }
LABEL_79:
              LOWORD(v218[4]) = 0;
              v44 = CallWindowProcA(v40, v39, 0x199u, Rect.left, 0);
              if ( v44 == -1 || !v44 )
                v44 = CallWindowProcA(v40, v186, 0x150u, Rect.left, 0);
              if ( v44 != -1 && v44 )
              {
                wcsncpy((wchar_t *)&v218[4], *(const wchar_t **)(v44 + 8), 0x80u);
                HIWORD(v218[67]) = 0;
                wcslen((const wchar_t *)&v218[4]);
              }
              if ( Rect.left == v201 )
                break;
LABEL_94:
              v47 = Rect.top;
              v48 = MEMORY[0xAC18A4];
              v203[2] = v38 + v204.left;
              v203[1] = v204.top;
              v203[0] = v204.left + 3;
              v203[3] = Rect.top + v204.top;
              if ( Y[0] && *(_BYTE *)(Y[0] + 205) )
                v48 = MEMORY[0xAC1CB0];
              if ( Rect.left < 50 )
              {
                if ( Y[0] )
                {
                  if ( *(int *)v194.right >= 0 )
                  {
                    v48 = *(_DWORD *)v194.right;
                    v49 = *(_BYTE *)(Y[0] + 204);
                    v186 = *(HWND *)v194.right;
                    if ( v49 )
                    {
                      v202.left = v204.left;
                      v202.top = v204.top;
                      v202.right = v38;
                      v202.bottom = Rect.top;
                      Rect::Inflate(&v202, 2);
                      if ( v48 == -1 )
                        v50 = -1;
                      else
                        v50 = ((int)(unsigned __int8)v48 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                            | (BYTE1(v48) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                            | (BYTE2(v186) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
                      (*(void (__thiscall **)(int, RECT *, int))(*(_DWORD *)MEMORY[0x887310] + 20))(
                        MEMORY[0x887310],
                        &v202,
                        v50);
                    }
                  }
                }
              }
              v186 = (HWND)(v194.left - 20);
              v51 = (_DWORD *)v188;
              v52 = wcslen((const wchar_t *)&v218[4]);
              v53 = Text::MeasureWidth((int)&v218[4], 0);
              if ( v52 )
              {
                v54 = (_WORD *)&v218[4] + v52;
                do
                {
                  if ( v53 <= (int)v186 )
                    break;
                  --v54;
                  --v52;
                  *v54 = 0;
                  wcscat((wchar_t *)&v218[4], MEMORY[0x8357D8]);
                  v53 = Text::MeasureWidth((int)&v218[4], 0);
                }
                while ( v52 );
                v47 = Rect.top;
              }
              PrintFontLayout(MEMORY[0x887310], (unsigned __int16 *)&v218[4], v203, v51, v48, 4, 12, 0, 0, 0);
              v55 = ++Rect.left < Rect.bottom;
              Rect.right += v47;
              v194.right += 4;
              if ( !v55 )
                goto LABEL_111;
            }
            v214 = v204.left;
            v215 = v204.top;
            right = v38;
            bottom = Rect.top;
            if ( Y[0] && *(_BYTE *)(Y[0] + 205) )
            {
              v45 = MEMORY[0xAC4880];
              if ( MEMORY[0xAC4880] != -1 )
              {
                v46 = BYTE2(MEMORY[0xAC4880]);
LABEL_92:
                v45 = (BYTE1(v45) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                    | (v46 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
                    | ((int)(unsigned __int8)v45 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              }
            }
            else
            {
              v45 = MEMORY[0xAC4604];
              if ( MEMORY[0xAC4604] != -1 )
              {
                v46 = BYTE2(MEMORY[0xAC4604]);
                goto LABEL_92;
              }
            }
            (*(void (__thiscall **)(int, LONG *, int))(*(_DWORD *)MEMORY[0x887310] + 20))(MEMORY[0x887310], &v214, v45);
            goto LABEL_94;
          }
LABEL_111:
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0);
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887308] + 92))(MEMORY[0x887308], 0, 0);
          v196 = v194;
          GetWindowRect(hWnd, &lParam);
          v196.left += lParam.left - v204.left;
          v196.top += lParam.top - v204.top;
          (*(void (__thiscall **)(int, struct tagRECT *, int, struct tagRECT *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308]
                                                                                            + 8))(
            MEMORY[0x887308],
            &v196,
            MEMORY[0x887310],
            &v194,
            0,
            1);
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887308] + 96))(MEMORY[0x887308]);
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]);
          ValidateRect(hWnd, 0);
          return 0;
        }
      }
      else
      {
        Object::RemoveObjectArray(hWnd);
      }
    }
    goto LABEL_172;
  }
  if ( v14 > 0x203 )
  {
    v84 = v14 - 1256;
    if ( v84 )
    {
      v85 = v84 - 2;
      if ( !v85 )
        return result;
      if ( v85 != 766 )
      {
LABEL_172:
        if ( v183 == 1 )
        {
          if ( v10 )
          {
            v86 = (HWND *)(v10 + 12);
            if ( !*(_DWORD *)(v10 + 12) )
            {
              *v86 = (HWND)1;
              GetWindowLongA(hWnd, -12);
              hDlg = GetParent(hWnd);
              ScreenDialogToClient(hDlg, &lParam);
              ScreenDialogToClient(hWnd, &v196);
              v87 = v196.left - lParam.left;
              v88 = v196.top - lParam.top;
              LOBYTE(v193) = 0;
              Y[0] = v196.top - lParam.top + Rect.top;
              if ( v181 )
                LOBYTE(v193) = *((_BYTE *)v181 + 205);
              Window = CreateWindowExA(
                         0,
                         MEMORY[0x8357B0],
                         0,
                         0x50010001u,
                         Rect.right + v196.left - lParam.left - nWidth,
                         Y[0],
                         nWidth,
                         v196.bottom - v196.top,
                         hDlg,
                         0,
                         g_hInstance,
                         0);
              v90 = v188;
              v91 = nWidth;
              *v86 = Window;
              *(_DWORD *)(v90 + 4) = v91;
              Dialog::InitializeControls(Window, 0);
              *(float *)&Block = 0.0;
              if ( MEMORY[0xAC1B04] )
              {
                v92 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](v86) & ((1 << MEMORY[0xAC1B0C]) - 1)));
                if ( v92 )
                {
                  while ( *v92 != *v86 )
                  {
                    v92 = (HWND *)v92[129];
                    if ( !v92 )
                      goto LABEL_183;
                  }
                  Block = v92 + 1;
                }
              }
LABEL_183:
              v93 = Block;
              *((_DWORD *)Block + 2) = hWnd;
              v94 = v188;
              v93[205] = *(_BYTE *)(v188 + 205);
              v95 = *(_DWORD *)(v94 + 240);
              v209[3] = (LPARAM)DlgItem;
              v176 = *v86;
              v209[1] = 5;
              v209[2] = 0;
              left = v95;
              v209[0] = 28;
              SendMessageA(v176, 0xE9u, 0, (LPARAM)v209);
              SendMessageA(*v86, 0x4F1u, 0, (unsigned __int8)v193);
              SetWindowPos(hWnd, 0, 0, 0, v196.right - v196.left - nWidth, v196.bottom - v196.top, 2u);
              ShowWindow(*v86, 5);
              BringWindowToTop(*v86);
              InvalidateRect(*v86, 0, 0);
              UpdateWindow(*v86);
              SendMessageA(*v86, 0x4A9u, (WPARAM)*v86, 1);
              SendMessageA(*v86, 0x4D2u, 0, 1);
              v202.left = v87;
              v202.top = v88;
              v202.right = Rect.right + v87 + 1;
              v202.bottom = v88 + Rect.bottom + 1;
              ValidateRect(hDlg, &v202);
            }
          }
          return (HWND)DefWindowProcA(hWnd, Msg, wParam, a8);
        }
        if ( v183 || !v10 || !*(_DWORD *)(v10 + 12) || *(_DWORD *)(v10 + 32) )
          return (HWND)DefWindowProcA(hWnd, Msg, wParam, a8);
        DestroyWindow(*(HWND *)(v10 + 12));
        v181 = *(HWND *)(v10 + 12);
        if ( MEMORY[0xAC1B4C] )
        {
          *(_QWORD *)Y = (unsigned int)(MEMORY[0xAC1B4C] - 1);
          v96 = (double)*(__int64 *)Y;
          Y[0] = MEMORY[0xAC1B50];
          *(float *)&Block = v96 / (double)MEMORY[0xAC1B50];
          v97 = MEMORY[0xAC1B60](&v181) & ((1 << MEMORY[0xAC1B54]) - 1);
          v98 = (HWND *)*((_DWORD *)MEMORY[0xAC1B48] + v97);
          if ( v98 )
          {
            if ( *v98 == v181 )
            {
              v99 = v98[2];
              __3_YAXPAX_Z(*((void **)MEMORY[0xAC1B48] + v97));
              v100 = *(float *)&Block;
              *((_DWORD *)MEMORY[0xAC1B48] + v97) = v99;
              --MEMORY[0xAC1B4C];
              if ( v100 <= MEMORY[0xAC1B68] )
              {
                v101 = MEMORY[0xAC1B50];
                if ( MEMORY[0xAC1B50] > (unsigned int)MEMORY[0xAC1B78] && MEMORY[0xAC1B5C] != 1 )
                {
                  v102 = (int *)MEMORY[0xAC1B48];
                  v103 = MEMORY[0xAC1B50];
                  Y[0] = (LPARAM)MEMORY[0xAC1B48];
                  MEMORY[0xAC1B50] = (unsigned int)MEMORY[0xAC1B50] >> 1;
                  --MEMORY[0xAC1B54];
                  MEMORY[0xAC1B48] = __2_YAPAXI_Z(4 * (v101 >> 1));
                  memset(MEMORY[0xAC1B48], 0, 4 * MEMORY[0xAC1B50]);
                  if ( v103 > 0 )
                  {
                    v104 = v102;
                    v105 = v103;
                    do
                    {
                      v106 = *v104;
                      if ( *v104 )
                      {
                        do
                        {
                          v107 = MEMORY[0xAC1B60](v106) & ((1 << MEMORY[0xAC1B54]) - 1);
                          v108 = *((_DWORD *)MEMORY[0xAC1B48] + v107);
                          *((_DWORD *)MEMORY[0xAC1B48] + v107) = v106;
                          v109 = *(_DWORD *)(v106 + 8);
                          *(_DWORD *)(v106 + 8) = v108;
                          v106 = v109;
                        }
                        while ( v109 );
                      }
                      ++v104;
                      --v105;
                    }
                    while ( v105 );
                    v102 = (int *)Y[0];
                  }
                  __3_YAXPAX_Z(v102);
                }
              }
            }
            else
            {
              v110 = (HWND *)v98[2];
              if ( v110 )
              {
                while ( *v110 != v181 )
                {
                  v98 = v110;
                  v110 = (HWND *)v110[2];
                  if ( !v110 )
                    goto LABEL_206;
                }
                v98[2] = v110[2];
                --MEMORY[0xAC1B4C];
                __3_YAXPAX_Z(v110);
              }
LABEL_206:
              if ( *(float *)&Block <= MEMORY[0xAC1B68]
                && MEMORY[0xAC1B50] > (unsigned int)MEMORY[0xAC1B78]
                && MEMORY[0xAC1B5C] != 1 )
              {
                v111 = MEMORY[0xAC1B50];
                Block = MEMORY[0xAC1B48];
                MEMORY[0xAC1B50] = (unsigned int)MEMORY[0xAC1B50] >> 1;
                --MEMORY[0xAC1B54];
                MEMORY[0xAC1B48] = __2_YAPAXI_Z(4 * MEMORY[0xAC1B50]);
                memset(MEMORY[0xAC1B48], 0, 4 * MEMORY[0xAC1B50]);
                if ( v111 > 0 )
                {
                  v112 = (int *)Block;
                  v113 = v111;
                  do
                  {
                    v114 = *v112;
                    if ( *v112 )
                    {
                      do
                      {
                        v115 = MEMORY[0xAC1B60](v114) & ((1 << MEMORY[0xAC1B54]) - 1);
                        v116 = *((_DWORD *)MEMORY[0xAC1B48] + v115);
                        *((_DWORD *)MEMORY[0xAC1B48] + v115) = v114;
                        v117 = *(_DWORD *)(v114 + 8);
                        *(_DWORD *)(v114 + 8) = v116;
                        v114 = v117;
                      }
                      while ( v117 );
                    }
                    ++v112;
                    --v113;
                  }
                  while ( v113 );
                }
                __3_YAXPAX_Z(Block);
              }
            }
          }
        }
        memset(v218, 0, sizeof(v218));
        v218[26] = (void *)11;
        v218[25] = (void *)aP0;
        v118 = __2_YAPAXI_Z(4u);
        if ( v118 )
          v119 = (void *)unknown_libname_74(v118);
        else
          v119 = 0;
        v218[15] = v119;
        v218[16] = 0;
        v218[23] = 0;
        v218[36] = (void *)-1;
        if ( MEMORY[0xAC1B04] )
        {
          *(_QWORD *)Y = (unsigned int)(MEMORY[0xAC1B04] - 1);
          Y[0] = MEMORY[0xAC1B08];
          *(float *)&Block = (double)(unsigned int)(MEMORY[0xAC1B04] - 1) / (double)MEMORY[0xAC1B08];
          v120 = MEMORY[0xAC1B18](&v181) & ((1 << MEMORY[0xAC1B0C]) - 1);
          v121 = (char *)*((_DWORD *)MEMORY[0xAC1B00] + v120);
          if ( v121 )
          {
            if ( *(HWND *)v121 == v181 )
            {
              v122 = v218[13];
              v123 = v218[10];
              Y[0] = (LPARAM)v218[15];
              v124 = v121 + 4;
              if ( v218 != (void **)v124 )
              {
                qmemcpy(v218, v124, sizeof(v218));
                v218[10] = v123;
                v218[15] = (void *)Y[0];
                v218[13] = v122;
                GadgetClass::SetTooltip(v218, *((wchar_t **)v124 + 10));
                SymbolTable::Rebuild(*((_DWORD *)v124 + 13));
              }
              v125 = *((_DWORD *)MEMORY[0xAC1B00] + v120);
              v126 = *(_DWORD *)(v125 + 516);
              if ( v125 )
              {
                GadgetClass::SetTooltip((void **)(v125 + 4), 0);
                for ( i = *(_DWORD **)(v125 + 56); i; i = *(_DWORD **)(v125 + 56) )
                  LinkedList::Remove((_DWORD *)(v125 + 4), i);
                v128 = *(void ***)(v125 + 64);
                if ( v128 )
                  DeleteAndZero::OrFree(v128, 1);
                __3_YAXPAX_Z((void *)v125);
              }
              v129 = *(float *)&Block;
              *((_DWORD *)MEMORY[0xAC1B00] + v120) = v126;
              --MEMORY[0xAC1B04];
              if ( v129 <= MEMORY[0xAC1B20]
                && MEMORY[0xAC1B08] > (unsigned int)MEMORY[0xAC1B30]
                && MEMORY[0xAC1B14] != 1 )
              {
                v130 = (int *)MEMORY[0xAC1B00];
                v131 = MEMORY[0xAC1B08];
                MEMORY[0xAC1B08] = (unsigned int)MEMORY[0xAC1B08] >> 1;
                --MEMORY[0xAC1B0C];
                MEMORY[0xAC1B00] = __2_YAPAXI_Z(4 * MEMORY[0xAC1B08]);
                memset(MEMORY[0xAC1B00], 0, 4 * MEMORY[0xAC1B08]);
                if ( v131 > 0 )
                {
                  v132 = v130;
                  v133 = v131;
                  do
                  {
                    v134 = *v132;
                    if ( *v132 )
                    {
                      do
                      {
                        v135 = HashTable::ComputeHash((int)&MEMORY[0xAC1B00], v134);
                        v136 = *((_DWORD *)MEMORY[0xAC1B00] + v135);
                        *((_DWORD *)MEMORY[0xAC1B00] + v135) = v134;
                        v137 = *(_DWORD *)(v134 + 516);
                        *(_DWORD *)(v134 + 516) = v136;
                        v134 = v137;
                      }
                      while ( v137 );
                    }
                    ++v132;
                    --v133;
                  }
                  while ( v133 );
                }
                __3_YAXPAX_Z(v130);
              }
            }
            else
            {
              v138 = (char *)*((_DWORD *)v121 + 129);
              if ( v138 )
              {
                while ( *(HWND *)v138 != v181 )
                {
                  v121 = v138;
                  v138 = (char *)*((_DWORD *)v138 + 129);
                  if ( !v138 )
                    goto LABEL_245;
                }
                v139 = v218[13];
                Y[0] = (LPARAM)v218[10];
                v197 = v218[15];
                if ( v218 != (void **)(v138 + 4) )
                {
                  qmemcpy(v218, v138 + 4, sizeof(v218));
                  v218[13] = v139;
                  v218[10] = (void *)Y[0];
                  v218[15] = v197;
                  GadgetClass::SetTooltip(v218, *((wchar_t **)v138 + 11));
                  SymbolTable::Rebuild(*((_DWORD *)v138 + 14));
                }
                *((_DWORD *)v121 + 129) = *((_DWORD *)v138 + 129);
                --MEMORY[0xAC1B04];
                Dialog::CleanupTree(v138 + 4);
                __3_YAXPAX_Z(v138);
              }
LABEL_245:
              if ( *(float *)&Block <= MEMORY[0xAC1B20] )
                HashTable::Rebuild2(&MEMORY[0xAC1B00]);
            }
          }
        }
        if ( v218[10] )
        {
          __3_YAXPAX_Z(v218[10]);
          v218[10] = 0;
        }
        v140 = v218[13];
        if ( v218[13] )
        {
          do
          {
            v141 = 0;
            v142 = v140;
            if ( !v140 )
              break;
            while ( v140 != v142 )
            {
              v141 = v142;
              v142 = (_DWORD *)*v142;
              if ( !v142 )
                goto LABEL_259;
            }
            if ( v142 )
            {
              if ( v141 )
                *v141 = *v142;
              else
                v218[13] = *(void **)v142;
              __3_YAXPAX_Z(v142);
              v140 = v218[13];
            }
LABEL_259:
            ;
          }
          while ( v140 );
        }
        v143 = v218[15];
        if ( v218[15] )
        {
          DeleteAndZero::Alt((void **)v218[15]);
          __3_YAXPAX_Z(v143);
        }
        if ( MEMORY[0xAC18C4] )
        {
          *(_QWORD *)Y = (unsigned int)(MEMORY[0xAC18C4] - 1);
          v144 = (double)*(__int64 *)Y;
          Y[0] = MEMORY[0xAC18C8];
          *(float *)&Block = v144 / (double)MEMORY[0xAC18C8];
          v145 = MEMORY[0xAC18D8](&v181) & ((1 << MEMORY[0xAC18CC]) - 1);
          v146 = (HWND *)*((_DWORD *)MEMORY[0xAC18C0] + v145);
          if ( v146 )
          {
            if ( *v146 == v181 )
            {
              v147 = v146[2];
              __3_YAXPAX_Z(*((void **)MEMORY[0xAC18C0] + v145));
              v148 = *(float *)&Block;
              *((_DWORD *)MEMORY[0xAC18C0] + v145) = v147;
              --MEMORY[0xAC18C4];
              if ( v148 > MEMORY[0xAC18E0] )
                goto LABEL_290;
              v149 = MEMORY[0xAC18C8];
              if ( MEMORY[0xAC18C8] <= (unsigned int)MEMORY[0xAC18F0] || MEMORY[0xAC18D4] == 1 )
                goto LABEL_290;
              v150 = (int *)MEMORY[0xAC18C0];
              v151 = MEMORY[0xAC18C8];
              Y[0] = (LPARAM)MEMORY[0xAC18C0];
              MEMORY[0xAC18C8] = (unsigned int)MEMORY[0xAC18C8] >> 1;
              --MEMORY[0xAC18CC];
              MEMORY[0xAC18C0] = __2_YAPAXI_Z(4 * (v149 >> 1));
              memset(MEMORY[0xAC18C0], 0, 4 * MEMORY[0xAC18C8]);
              if ( v151 > 0 )
              {
                v152 = v150;
                v153 = v151;
                do
                {
                  v154 = *v152;
                  if ( *v152 )
                  {
                    do
                    {
                      v155 = MEMORY[0xAC18D8](v154) & ((1 << MEMORY[0xAC18CC]) - 1);
                      v156 = *((_DWORD *)MEMORY[0xAC18C0] + v155);
                      *((_DWORD *)MEMORY[0xAC18C0] + v155) = v154;
                      v157 = *(_DWORD *)(v154 + 8);
                      *(_DWORD *)(v154 + 8) = v156;
                      v154 = v157;
                    }
                    while ( v157 );
                  }
                  ++v152;
                  --v153;
                }
                while ( v153 );
                v150 = (int *)Y[0];
              }
            }
            else
            {
              v158 = (HWND *)v146[2];
              if ( v158 )
              {
                while ( *v158 != v181 )
                {
                  v146 = v158;
                  v158 = (HWND *)v158[2];
                  if ( !v158 )
                    goto LABEL_280;
                }
                v146[2] = v158[2];
                --MEMORY[0xAC18C4];
                __3_YAXPAX_Z(v158);
              }
LABEL_280:
              if ( *(float *)&Block > MEMORY[0xAC18E0] )
                goto LABEL_290;
              v159 = MEMORY[0xAC18C8];
              if ( MEMORY[0xAC18C8] <= (unsigned int)MEMORY[0xAC18F0] || MEMORY[0xAC18D4] == 1 )
                goto LABEL_290;
              v150 = (int *)MEMORY[0xAC18C0];
              v160 = MEMORY[0xAC18C8];
              Y[0] = (LPARAM)MEMORY[0xAC18C0];
              MEMORY[0xAC18C8] = (unsigned int)MEMORY[0xAC18C8] >> 1;
              --MEMORY[0xAC18CC];
              MEMORY[0xAC18C0] = __2_YAPAXI_Z(4 * (v159 >> 1));
              memset(MEMORY[0xAC18C0], 0, 4 * MEMORY[0xAC18C8]);
              if ( v160 > 0 )
              {
                v161 = v150;
                v162 = v160;
                do
                {
                  v163 = *v161;
                  if ( *v161 )
                  {
                    do
                    {
                      v164 = MEMORY[0xAC18D8](v163) & ((1 << MEMORY[0xAC18CC]) - 1);
                      v165 = *((_DWORD *)MEMORY[0xAC18C0] + v164);
                      *((_DWORD *)MEMORY[0xAC18C0] + v164) = v163;
                      v166 = *(_DWORD *)(v163 + 8);
                      *(_DWORD *)(v163 + 8) = v165;
                      v163 = v166;
                    }
                    while ( v166 );
                  }
                  ++v161;
                  --v162;
                }
                while ( v162 );
                v150 = (int *)Y[0];
              }
            }
            __3_YAXPAX_Z(v150);
          }
        }
LABEL_290:
        WindowLongA = (void *)GetWindowLongA(v181, -21);
        if ( WindowLongA )
          __3_YAXPAX_Z(WindowLongA);
        SetWindowLongA(v181, -21, 0);
        Object::RemoveObjectArray(v181);
        v168 = v188;
        v169 = nWidth;
        *(_DWORD *)(v188 + 12) = 0;
        *(_DWORD *)(v168 + 4) = 0;
        SetWindowPos(hWnd, 0, 0, 0, v169 + Rect.right - Rect.left, Rect.bottom - Rect.top, 2u);
        hDlg = GetParent(hWnd);
        ScreenDialogToClient(hDlg, &lParam);
        v202.left = v204.left - lParam.left;
        v202.right = v169 + Rect.right + v204.left - lParam.left;
        v202.top = v204.top - lParam.top;
        v202.bottom = v204.top - lParam.top + Rect.bottom + 1;
        ValidateRect(hDlg, &v202);
        return (HWND)DefWindowProcA(hWnd, Msg, wParam, a8);
      }
      *(_DWORD *)(v10 + 232) = SendMessageA(result, 0x147u, 0, 0);
      return 0;
    }
    else
    {
      v170 = HIWORD(a8);
      v171 = -1;
      if ( (unsigned __int16)a8 < Rect.right && v170 < Rect.bottom )
      {
        v172 = SendMessageA(result, 0x154u, 0, 0);
        v173 = SendMessageA(MEMORY[0xAC48D0], 0x146u, 0, 0);
        v174 = *(_DWORD *)(v10 + 240) + v170 / v172 < 0 ? 0 : *(_DWORD *)(v10 + 240) + v170 / v172;
        v175 = v173 - 1;
        if ( v175 < v174 )
          return (HWND)v175;
        return (HWND)v174;
      }
      return (HWND)v171;
    }
  }
  else
  {
    if ( v14 == 515 )
    {
LABEL_151:
      v76 = (unsigned __int16)a8;
      v77 = HIWORD(a8);
      if ( (unsigned __int16)a8 > Rect.right
        && (unsigned __int16)a8 < Rect.right + *(_DWORD *)(v10 + 4)
        && HIWORD(a8)
        && v77 < Rect.bottom )
      {
        SendMessageA(*(HWND *)(v10 + 12), Msg, wParam, a8);
        goto LABEL_172;
      }
      PlayVocClass(*((_DWORD *)MEMORY[0x8871E0] + 106), 0x2000, 1.0, 0);
      if ( v77 < 0 || v76 > Rect.right || v77 > Rect.bottom )
      {
        if ( v183 )
          DestroyWindow(*(HWND *)(v10 + 12));
        ReleaseCapture();
        SendMessageA(MEMORY[0xAC48D0], 0x14Fu, 0, 0);
        return 0;
      }
      else
      {
        v78 = SendMessageA(MEMORY[0xAC48D0], 0x154u, 0, 0);
        v79 = SendMessageA(MEMORY[0xAC48D0], 0x146u, 0, 0);
        v80 = v77 / v78;
        if ( v10 )
          v80 += *(_DWORD *)(v10 + 240);
        v81 = v80 < 0 ? 0 : v80;
        v82 = v79 - 1;
        if ( v82 < v81 )
          v81 = v82;
        SendMessageA(MEMORY[0xAC48D0], 0x14Eu, v81, 0);
        v83 = GetWindowLongA(MEMORY[0xAC48D0], -12);
        if ( v183 )
          DestroyWindow(*(HWND *)(v10 + 12));
        ReleaseCapture();
        SendMessageA(MEMORY[0xAC48D0], 0x14Fu, 0, 0);
        PostMessageA(hDlg, 0x111u, v83 | 0x10000, (LPARAM)MEMORY[0xAC48D0]);
        return 0;
      }
    }
    v61 = v14 - 348;
    if ( v61 )
    {
      v62 = v61 - 164;
      if ( !v62 )
      {
        v63 = SendMessageA(hWnd, 0x4E8u, 0, (unsigned __int16)a8 | (HIWORD(a8) << 16));
        v64 = v63;
        if ( v63 != -1 )
        {
          if ( *(_DWORD *)(v10 + 232) != v63 )
            InvalidateRect(hWnd, 0, 0);
          *(_DWORD *)(v10 + 232) = v64;
          DlgItem = GetDlgItem(hDlg, 1685);
          if ( DlgItem )
          {
            unknown_libname_74(&v181);
            v65 = MEMORY[0xAC48D0];
            v66 = hDlg;
            unknown_libname_74(&v186);
            Y[0] = (LPARAM)v65;
            Y[1] = v64;
            SendMessageA(v66, 0x4E9u, 0, (LPARAM)Y);
            WideString::AssignFromPtr((wchar_t **)&v193, (const wchar_t **)&v186);
            DeleteAndZero::Alt((void **)&v186);
            WideString::Reassign_Alt((void **)&v181, (const wchar_t **)&v193);
            DeleteAndZero::Alt(&v193);
            v67 = WideString::GetOrEmpty((wchar_t **)&v181);
            if ( wcscmp(v67, &MEMORY[0x887734]) )
              goto LABEL_137;
            v68 = MEMORY[0xAC48D0];
            v69 = hDlg;
            unknown_libname_74(&v186);
            Y[0] = (LPARAM)v68;
            Y[1] = -1;
            SendMessageA(v69, 0x4E9u, 0, (LPARAM)Y);
            WideString::AssignFromPtr((wchar_t **)&Block, (const wchar_t **)&v186);
            DeleteAndZero::Alt((void **)&v186);
            WideString::Reassign_Alt((void **)&v181, (const wchar_t **)&Block);
            DeleteAndZero::Alt(&Block);
            v70 = WideString::GetOrEmpty((wchar_t **)&v181);
            if ( wcscmp(v70, &MEMORY[0x887734]) )
            {
LABEL_137:
              v177 = WideString::GetOrEmpty_Alt((wchar_t **)&v181);
              SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v177);
            }
            DeleteAndZero::Alt((void **)&v181);
          }
        }
        return 0;
      }
      if ( v62 != 1 )
        goto LABEL_172;
      goto LABEL_151;
    }
    v71 = wParam;
    v72 = SendMessageA(result, 0x146u, 0, 0);
    v73 = SendMessageA(MEMORY[0xAC48D0], 0x154u, 0, 0);
    if ( !v72 || !v73 )
      goto LABEL_172;
    v74 = (Rect.bottom - Rect.top) / v73;
    if ( v71 < 0 )
      v71 = 0;
    v75 = v72 - v74;
    if ( v75 <= 0 )
    {
      v71 = 0;
    }
    else if ( v71 > v75 )
    {
      v71 = v75;
    }
    if ( v71 != *(_DWORD *)(v10 + 240) )
    {
      *(_DWORD *)(v10 + 240) = v71;
      InvalidateRect(hWnd, 0, 0);
    }
    return 0;
  }
}



// ==== 0x0060F320  Dialog::SubclassEditControl  this=Dialog  sig=csp ====
int __stdcall Dialog::SubclassEditControl(int hWnd, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edx
  int v5; // esi
  _DWORD *v6; // ebx
  int v7; // eax
  int dwNewLong; // [esp+10h] [ebp-A4h]
  int Rect; // [esp+14h] [ebp-A0h] BYREF
  int Rect_4; // [esp+18h] [ebp-9Ch]
  int Rect_8; // [esp+1Ch] [ebp-98h]
  int Rect_12; // [esp+20h] [ebp-94h]
  _DWORD v14[4]; // [esp+24h] [ebp-90h] BYREF
  char ClassName[128]; // [esp+34h] [ebp-80h] BYREF

  v2 = ((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, -16); /*0x60f341*/
  ((void (__stdcall *)(int, int, _DWORD))SetWindowLongA)(hWnd, -21, 0); /*0x60f343*/
  if ( (v2 & 0x10000000) != 0 && (v2 & 0x8000000) == 0 ) /*0x60f35b*/
  {
    ((void (__stdcall *)(int, char *, int))GetClassNameA)(hWnd, ClassName, 128); /*0x60f36c*/
    if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60f381*/
    {
      v3 = ((int (__stdcall *)(int))GetParent)(hWnd); /*0x60f3b9*/
      ScreenDialogToClient(hWnd, &Rect); /*0x60f3bb*/
      ScreenDialogToClient(v3, v14); /*0x60f3c6*/
      v4 = 1073742096; /*0x60f3df*/
      if ( (v2 & 0x10000) != 0 ) /*0x60f3ea*/
        v4 = 1073807632; /*0x60f3ec*/
      v5 = ((int (__stdcall *)(_DWORD, char *, _DWORD, int, int, int, int, int, int, _DWORD, int, _DWORD))CreateWindowExA)( /*0x60f427*/
             0,
             g_INI_Key_ListBox,
             0,
             v4,
             Rect - v14[0],
             Rect_4 - v14[1],
             Rect_8 - Rect,
             Rect_12 - Rect_4,
             v3,
             0,
             dword_A8ED54[233831],
             0);
      v6 = (_DWORD *)__2_YAPAXI_Z(8); /*0x60f431*/
      *v6 = g_INI_Key_NewEdit; /*0x60f436*/
      v6[1] = ((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, -16); /*0x60f43f*/
      ((void (__stdcall *)(int, int, _DWORD *))SetWindowLongA)(v5, -21, v6); /*0x60f44b*/
      ((void (__stdcall *)(int, _DWORD))EnableWindow)(hWnd, 0); /*0x60f450*/
      ((void (__stdcall *)(int, _DWORD))ShowWindow)(hWnd, 0); /*0x60f459*/
      ((void (__stdcall *)(int, int))EnableWindow)(v5, 1); /*0x60f462*/
      ((void (__stdcall *)(int, int))ShowWindow)(v5, 1); /*0x60f46b*/
      dwNewLong = ((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, -12); /*0x60f479*/
      v7 = ((int (__stdcall *)(int, int))GetWindowLongA)(v5, -12); /*0x60f47d*/
      ((void (__stdcall *)(int, int, int))SetWindowLongA)(hWnd, -12, v7); /*0x60f483*/
      ((void (__stdcall *)(int, int, int))SetWindowLongA)(v5, -12, dwNewLong); /*0x60f48d*/
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
  int **v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  void *v10; // eax
  int **v11; // eax
  int **i; // eax
  int v14; // [esp+10h] [ebp-20Ch] BYREF
  _DWORD *v15; // [esp+14h] [ebp-208h] BYREF
  LPARAM v16; // [esp+18h] [ebp-204h]
  int **v17[128]; // [esp+1Ch] [ebp-200h] BYREF

  v2 = a2; /*0x60f4ba*/
  v16 = a2; /*0x60f4be*/
  DialogClass::RegisterWinClasses(); /*0x60f4c2*/
  MEMORY[0xAC48A8] = (int)a1; /*0x60f4cd*/
  EnumChildWindows(a1, Dialog::InitWindow, 1); /*0x60f4db*/
  v14 = (int)a1; /*0x60f4e6*/
  v15 = 0; /*0x60f4ea*/
  if ( MEMORY[0xAC1B04] /*0x60f514*/
    && (v4 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v14) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
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
    v17[26] = (int **)11; /*0x60f53d*/
    v17[25] = (int **)aP0; /*0x60f548*/
    v5 = __2_YAPAXI_Z(4u); /*0x60f54f*/
    if ( v5 ) /*0x60f559*/
      v6 = (int **)unknown_libname_74(v5); /*0x60f55d*/
    else
      v6 = 0; /*0x60f570*/
    v17[15] = v6; /*0x60f572*/
    v17[16] = 0; /*0x60f585*/
    v17[23] = 0; /*0x60f589*/
    v17[36] = (int **)-1; /*0x60f590*/
    SymbolTable::Insert(&MEMORY[0xAC1B00], &v14, v17); /*0x60f59b*/
    if ( MEMORY[0xAC1B04] ) /*0x60f5a6*/
    {
      v8 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v14)); /*0x60f5bd*/
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
  if ( MEMORY[0xAC1B04] /*0x60f653*/
    && (v9 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v14) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
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
    v17[26] = (int **)11; /*0x60f67c*/
    v17[25] = (int **)aP0; /*0x60f687*/
    v10 = __2_YAPAXI_Z(4u); /*0x60f68e*/
    if ( v10 ) /*0x60f698*/
      v11 = (int **)unknown_libname_74(v10); /*0x60f69c*/
    else
      v11 = 0; /*0x60f6b7*/
    v17[15] = v11; /*0x60f6b9*/
    v17[16] = 0; /*0x60f6cc*/
    v17[23] = 0; /*0x60f6d0*/
    v17[36] = (int **)-1; /*0x60f6d7*/
    SymbolTable::Insert(&MEMORY[0xAC1B00], &v14, v17); /*0x60f6e2*/
    HashTable::Get(&MEMORY[0xAC1B00], &v14, &v15); /*0x60f6f6*/
    GadgetClass::SetTooltip((void **)v17, 0); /*0x60f700*/
    for ( i = v17[13]; v17[13]; i = v17[13] ) /*0x60f70b*/
      LinkedList::Remove(v17, i); /*0x60f712*/
    if ( v17[15] ) /*0x60f725*/
      DeleteAndZero::OrFree((void **)v17[15], 1); /*0x60f729*/
    v15[8] = 0; /*0x60f734*/
    return 1; /*0x60f738*/
  }
}


// ==== 0x0060F760  Dialog::InitWindow  this=Dialog  sig=csp ====
int __stdcall Dialog::InitWindow(int a1, int a2)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *i; // eax
  void *v13[128]; // [esp+10h] [ebp-200h] BYREF

  v2 = 0; /*0x60f76f*/
  if ( dword_A8ED54[52076] /*0x60f79c*/
    && (v3 = *(_DWORD **)(dword_A8ED54[52075]
                        + 4
                        * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&a1)
                         & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)))) != 0 )
  {
    while ( *v3 != a1 ) /*0x60f7a7*/
    {
      v3 = (_DWORD *)v3[129]; /*0x60f7a9*/
      if ( !v3 ) /*0x60f7b1*/
        goto LABEL_5; /*0x60f7b1*/
    }
    v3[9] = a2; /*0x60f7fa*/
    return 1; /*0x60f7fd*/
  }
  else
  {
LABEL_5:
    memset(v13, 0, sizeof(v13)); /*0x60f7b3*/
    v13[26] = (void *)11; /*0x60f7c9*/
    v13[25] = (void *)MEMORY[0x87F7E8][29498]; /*0x60f7d4*/
    v4 = (_DWORD *)__2_YAPAXI_Z(4); /*0x60f7d8*/
    if ( v4 ) /*0x60f7e3*/
      v5 = unknown_libname_74(v4); /*0x60f7e7*/
    else
      v5 = 0; /*0x60f80c*/
    v13[15] = v5; /*0x60f814*/
    v13[16] = 0; /*0x60f818*/
    v13[23] = 0; /*0x60f81c*/
    v13[36] = (void *)-1; /*0x60f820*/
    v7 = (_DWORD *)__2_YAPAXI_Z(520); /*0x60f82b*/
    v8 = v7; /*0x60f830*/
    if ( v7 ) /*0x60f837*/
      DialogControl::Constructor(v7 + 1); /*0x60f83c*/
    else
      v8 = 0; /*0x60f843*/
    *v8 = a1; /*0x60f854*/
    DialogClass::CopyTemplateStruct(v8 + 1, v13); /*0x60f856*/
    v8[129] = 0; /*0x60f862*/
    v9 = ((int (__thiscall *)(int *))dword_A8ED54[52081])(&a1) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1); /*0x60f882*/
    v10 = *(_DWORD *)(dword_A8ED54[52075] + 4 * v9); /*0x60f884*/
    *(_DWORD *)(dword_A8ED54[52075] + 4 * v9) = v8; /*0x60f887*/
    if ( v10 ) /*0x60f88c*/
      v8[129] = v10; /*0x60f88e*/
    if ( (double)(unsigned int)++dword_A8ED54[52076] / (double)dword_A8ED54[52077] >= *(double *)&dword_A8ED54[52085] ) /*0x60f8c9*/
      HashTable::Grow2(&dword_A8ED54[52075]); /*0x60f8d0*/
    if ( dword_A8ED54[52076] ) /*0x60f8db*/
    {
      v11 = *(_DWORD **)(dword_A8ED54[52075] /*0x60f8ff*/
                       + 4
                       * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&a1)
                        & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
      if ( v11 ) /*0x60f904*/
      {
        while ( *v11 != a1 ) /*0x60f90f*/
        {
          v11 = (_DWORD *)v11[129]; /*0x60f911*/
          if ( !v11 ) /*0x60f919*/
            goto LABEL_22; /*0x60f919*/
        }
        v2 = v11 + 1; /*0x60f921*/
      }
    }
LABEL_22:
    if ( v13[10] ) /*0x60f92a*/
    {
      __3_YAXPAX_Z(v13[10]); /*0x60f92d*/
      v13[10] = 0; /*0x60f935*/
    }
    for ( i = v13[13]; v13[13]; i = v13[13] ) /*0x60f93f*/
      LinkedList::Remove(v13, i); /*0x60f946*/
    if ( v13[15] ) /*0x60f959*/
      DeleteAndZero::OrFree((void **)v13[15], 1); /*0x60f95d*/
    v2[8] = a2; /*0x60f96e*/
    return 1; /*0x60f962*/
  }
}


// ==== 0x0060F9A0  Dialog::InitializeControls  this=Dialog  sig=csp ====
int __stdcall Dialog::InitializeControls(void *hWnd, void *a2)
{
  char BitShift_Red; // al
  char BitMask_Green; // al
  int v4; // ecx
  int v5; // edx
  int (__stdcall *v6)(int, int, int, int); // ebp
  const char **v7; // eax
  int v8; // edi
  void **v9; // eax
  _DWORD *v10; // esi
  int v11; // edx
  int v12; // eax
  void **v13; // eax
  _DWORD *v14; // esi
  int v15; // edx
  int v16; // eax
  void **v17; // ebp
  void **v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // esi
  int v23; // eax
  int v24; // ecx
  void **v25; // eax
  _DWORD *i; // eax
  void *v27; // edx
  const char **v28; // eax
  bool v29; // zf
  int v30; // esi
  #72 *StringCSF; // [esp-4h] [ebp-AC4h]
  int v33; // [esp+10h] [ebp-AB0h] BYREF
  __int64 v34; // [esp+14h] [ebp-AACh]
  const char **v35; // [esp+1Ch] [ebp-AA4h]
  char ClassName[128]; // [esp+20h] [ebp-AA0h] BYREF
  __int128 v37; // [esp+A0h] [ebp-A20h] BYREF
  __int128 Rect; // [esp+B0h] [ebp-A10h] BYREF
  void *v39[128]; // [esp+C0h] [ebp-A00h] BYREF
  _BYTE lParam[2048]; // [esp+2C0h] [ebp-800h] BYREF

  ((void (__stdcall *)(void *, char *, int))GetClassNameA)(hWnd, ClassName, 128); /*0x60f9bc*/
  LODWORD(v34) = ((int (__stdcall *)(void *, int))GetWindowLongA)(hWnd, -16); /*0x60f9e2*/
  ScreenDialogToClient(hWnd, &v37); /*0x60f9e6*/
  ((void (__stdcall *)(void *, __int128 *))GetClientRect)(hWnd, &Rect); /*0x60f9fb*/
  TimerPool::AllocSlot(hWnd); /*0x60fa08*/
  dword_A8ED54[52184] = 159; /*0x60fa14*/
  dword_A8ED54[52181] = 159; /*0x60fa19*/
  dword_A8ED54[52263] = 1; /*0x60fa2f*/
  dword_A8ED54[51919] = 127; /*0x60fa35*/
  dword_A8ED54[51924] = 0xFFFF; /*0x60fa3f*/
  dword_A8ED54[52183] = 15658734; /*0x60fa49*/
  dword_A8ED54[54833] = 40863; /*0x60fa53*/
  dword_A8ED54[51902] = 0xFFFFFF; /*0x60fa5d*/
  dword_A8ED54[54837] = (int)&off_808080; /*0x60fa67*/
  dword_A8ED54[54828] = 255; /*0x60fa71*/
  dword_A8ED54[54987] = (int)&loc_626261 + 1; /*0x60fa77*/
  dword_A8ED54[54836] = 255; /*0x60fa81*/
  dword_A8ED54[52257] = (int)&MEMORY[0x87F7E8][173738] + 2; /*0x60fa87*/
  dword_A8ED54[52113] = 12959399; /*0x60fa91*/
  dword_A8ED54[52112] = (int)&unk_807A68; /*0x60fa9b*/
  dword_A8ED54[52073] = (int)&MEMORY[0x87F7E8][124393] + 3; /*0x60faa5*/
  dword_A8ED54[54835] = (int)sub_646464; /*0x60faaf*/
  dword_A8ED54[54993] = 96; /*0x60fab9*/
  dword_A8ED54[54829] = 43690; /*0x60fac3*/
  dword_A8ED54[54999] = 2235147; /*0x60facd*/
  dword_A8ED54[52111] = (int)&loc_443714 + 2; /*0x60fad7*/
  if ( !dword_A8ED54[55008] ) /*0x60fae1*/
  {
    LOWORD(dword_A8ED54[55001]) = 255; /*0x60fae3*/
    LOWORD(dword_A8ED54[55001]) = 0xFFu >> GetBitShift_Green(); /*0x60faf2*/
    BitShift_Red = GetBitShift_Red(); /*0x60faf9*/
    HIWORD(dword_A8ED54[55001]) = 255; /*0x60fb01*/
    LOWORD(dword_A8ED54[55001]) <<= BitShift_Red; /*0x60fb08*/
    HIWORD(dword_A8ED54[55001]) = 0xFFu >> GetBitMask_Blue(); /*0x60fb17*/
    BitMask_Green = GetBitMask_Green(); /*0x60fb1e*/
    LOWORD(dword_A8ED54[55002]) = 255; /*0x60fb26*/
    HIWORD(dword_A8ED54[55001]) <<= BitMask_Green; /*0x60fb2d*/
    LOWORD(dword_A8ED54[55002]) = 0xFFu >> GetBitMask_Red(); /*0x60fb3c*/
    LOWORD(v4) = GetBitShift_Blue(); /*0x60fb48*/
    LOWORD(dword_A8ED54[55002]) <<= v4; /*0x60fb4b*/
    InitDialogCountryIcons(v4, v5); /*0x60fb52*/
    dword_A8ED54[55008] = 1; /*0x60fb57*/
  }
  v6 = 0; /*0x60fb67*/
  v33 = 11; /*0x60fb69*/
  v7 = (const char **)((int (__stdcall *)(void *, int))GetWindowLongA)(hWnd, -21); /*0x60fb71*/
  v35 = v7; /*0x60fb75*/
  if ( v7 ) /*0x60fb79*/
    strcpy(ClassName, *v7); /*0x60fb95*/
  if ( !strcmp(ClassName, aScrollbar) ) /*0x60fbad*/
  {
    v6 = Scrollbar::DlgProc; /*0x60fbd4*/
    v33 = 8; /*0x60fbd9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ListBox) ) /*0x60fbf5*/
  {
    v6 = (int (__stdcall *)(int, int, int, int))Options::DialogProc; /*0x60fc1c*/
    v33 = 4; /*0x60fc21*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x60fc3d*/
  {
    v6 = (int (__stdcall *)(int, int, int, int))&ComboBoxDropDown::WndProc; /*0x60fc64*/
    v33 = 3; /*0x60fc69*/
  }
  else if ( !strcmp(ClassName, aMsctlsTrackbar) ) /*0x60fc85*/
  {
    v6 = TabControl::DlgProc; /*0x60fcac*/
    v33 = 7; /*0x60fcb1*/
  }
  else if ( !strcmp(ClassName, aMsctlsProgress) ) /*0x60fccd*/
  {
    v6 = NetworkLobbyPaintProc; /*0x60fcf4*/
    v33 = 6; /*0x60fcf9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x60fd15*/
  {
    v6 = EditControl::WndProc; /*0x60fd3c*/
    v33 = 1; /*0x60fd41*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60fd5d*/
  {
    v6 = ListBox::EditSubclassProc; /*0x60fd84*/
    v33 = 1; /*0x60fd89*/
  }
  else if ( !strcmp(ClassName, aStatic) ) /*0x60fda5*/
  {
    v6 = BinkMovie::WndProc; /*0x60fdcc*/
    v33 = 2; /*0x60fdd1*/
  }
  else if ( !strcmp(ClassName, aSystabcontrol3) ) /*0x60fded*/
  {
    v6 = Dialog::TabControlPaint; /*0x60fe14*/
    v33 = 10; /*0x60fe19*/
  }
  else if ( !strcmp(ClassName, aButton) ) /*0x60fe35*/
  {
    if ( (v34 & 7) == 7 ) /*0x60fe68*/
    {
      v6 = GroupLabel::WndProc; /*0x60fe6a*/
      v33 = 0; /*0x60fe6f*/
    }
    else if ( (v34 & 0xB) == 0xB ) /*0x60fe80*/
    {
      v6 = TabControl::WndProc; /*0x60fe82*/
      v33 = 0; /*0x60fe87*/
    }
    else if ( (v34 & 3) == 3 ) /*0x60fe95*/
    {
      v6 = Checkbox::WndProc; /*0x60fe97*/
      v33 = 0; /*0x60fe9c*/
    }
    else
    {
      if ( (v34 & 9) == 9 ) /*0x60fea7*/
        v6 = ButtonOwnerDraw::DlgProc; /*0x60fea9*/
      v33 = 0; /*0x60feae*/
    }
  }
  else if ( !strcmp(ClassName, aMsctlsHotkey32) ) /*0x60fec3*/
  {
    v6 = RenderDialogSurface; /*0x60feea*/
    v33 = 9; /*0x60feef*/
  }
  else
  {
    v6 = sub_612A60; /*0x60fef9*/
  }
  v8 = ((int (__stdcall *)(void *, int, int (__stdcall *)(int, int, int, int)))SetWindowLongA)( /*0x60ff1a*/
         hWnd,
         -4,
         ComboBoxOwnerDraw::DlgProc);
  v9 = *(void ***)(dword_A8ED54[51931] /*0x60ff37*/
                 + 4
                 * (((int (__thiscall *)(void **))dword_A8ED54[51937])(&hWnd) & ((1 << SLOBYTE(dword_A8ED54[51934])) - 1)));
  if ( v9 ) /*0x60ff3c*/
  {
    while ( *v9 != hWnd ) /*0x60ff47*/
    {
      v9 = (void **)v9[2]; /*0x60ff4d*/
      if ( !v9 ) /*0x60ff52*/
        goto LABEL_39; /*0x60ff52*/
    }
  }
  else
  {
LABEL_39:
    v10 = (_DWORD *)__2_YAPAXI_Z(12); /*0x60ff54*/
    *v10 = hWnd; /*0x60ff67*/
    v10[1] = v6; /*0x60ff70*/
    v10[2] = 0; /*0x60ff73*/
    v11 = ((int (__thiscall *)(void **))dword_A8ED54[51937])(&hWnd) & ((1 << SLOBYTE(dword_A8ED54[51934])) - 1); /*0x60ff90*/
    v12 = *(_DWORD *)(dword_A8ED54[51931] + 4 * v11); /*0x60ff92*/
    *(_DWORD *)(dword_A8ED54[51931] + 4 * v11) = v10; /*0x60ff95*/
    if ( v12 ) /*0x60ff9a*/
      v10[2] = v12; /*0x60ff9c*/
    v34 = (unsigned int)++dword_A8ED54[51932]; /*0x60ffaf*/
    LODWORD(v34) = dword_A8ED54[51933]; /*0x60ffbc*/
    if ( (double)(unsigned int)dword_A8ED54[51932] / (double)dword_A8ED54[51933] >= *(double *)&dword_A8ED54[51941] ) /*0x60ffd3*/
      Dialog::GrowBuffer(&dword_A8ED54[51931]); /*0x60ffda*/
  }
  v13 = *(void ***)(dword_A8ED54[52093] /*0x610001*/
                  + 4
                  * (((int (__thiscall *)(void **))dword_A8ED54[52099])(&hWnd)
                   & ((1 << SLOBYTE(dword_A8ED54[52096])) - 1)));
  if ( v13 ) /*0x610006*/
  {
    while ( *v13 != hWnd ) /*0x610011*/
    {
      v13 = (void **)v13[2]; /*0x610017*/
      if ( !v13 ) /*0x61001c*/
        goto LABEL_46; /*0x61001c*/
    }
  }
  else
  {
LABEL_46:
    v14 = (_DWORD *)__2_YAPAXI_Z(12); /*0x61001e*/
    *v14 = hWnd; /*0x610031*/
    v14[1] = v8; /*0x61003a*/
    v14[2] = 0; /*0x61003d*/
    v15 = ((int (__thiscall *)(void **))dword_A8ED54[52099])(&hWnd) & ((1 << SLOBYTE(dword_A8ED54[52096])) - 1); /*0x61005a*/
    v16 = *(_DWORD *)(dword_A8ED54[52093] + 4 * v15); /*0x61005c*/
    *(_DWORD *)(dword_A8ED54[52093] + 4 * v15) = v14; /*0x61005f*/
    if ( v16 ) /*0x610064*/
      v14[2] = v16; /*0x610066*/
    v34 = (unsigned int)++dword_A8ED54[52094]; /*0x610079*/
    LODWORD(v34) = dword_A8ED54[52095]; /*0x610086*/
    if ( (double)(unsigned int)dword_A8ED54[52094] / (double)dword_A8ED54[52095] >= *(double *)&dword_A8ED54[52103] ) /*0x61009d*/
      Dialog::GrowBuffer(&dword_A8ED54[52093]); /*0x6100a4*/
  }
  v17 = 0; /*0x6100ae*/
  if ( dword_A8ED54[52076] /*0x6100db*/
    && (v18 = *(void ***)(dword_A8ED54[52075]
                        + 4
                        * (((int (__thiscall *)(void **))dword_A8ED54[52081])(&hWnd)
                         & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)))) != 0 )
  {
    while ( *v18 != hWnd ) /*0x6100e6*/
    {
      v18 = (void **)v18[129]; /*0x6100e8*/
      if ( !v18 ) /*0x6100f0*/
        goto LABEL_54; /*0x6100f0*/
    }
    v17 = v18 + 1; /*0x610135*/
  }
  else
  {
LABEL_54:
    memset(v39, 0, sizeof(v39)); /*0x6100f2*/
    v39[26] = (void *)11; /*0x61010a*/
    v39[25] = (void *)MEMORY[0x87F7E8][29498]; /*0x610115*/
    v19 = (_DWORD *)__2_YAPAXI_Z(4); /*0x61011c*/
    if ( v19 ) /*0x610126*/
      v20 = unknown_libname_74(v19); /*0x61012a*/
    else
      v20 = 0; /*0x61013d*/
    v39[15] = v20; /*0x610144*/
    v39[16] = 0; /*0x61014b*/
    v39[23] = 0; /*0x610152*/
    v39[36] = (void *)-1; /*0x610159*/
    v21 = (_DWORD *)__2_YAPAXI_Z(520); /*0x610164*/
    v22 = v21; /*0x610169*/
    if ( v21 ) /*0x610170*/
      DialogControl::Constructor(v21 + 1); /*0x610175*/
    else
      v22 = 0; /*0x61017c*/
    *v22 = hWnd; /*0x610190*/
    DialogClass::CopyTemplateStruct(v22 + 1, v39); /*0x610192*/
    v22[129] = 0; /*0x61019e*/
    v23 = HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&hWnd); /*0x6101aa*/
    v24 = *(_DWORD *)(dword_A8ED54[52075] + 4 * v23); /*0x6101b5*/
    *(_DWORD *)(dword_A8ED54[52075] + 4 * v23) = v22; /*0x6101b8*/
    if ( v24 ) /*0x6101bd*/
      v22[129] = v24; /*0x6101bf*/
    v34 = (unsigned int)++dword_A8ED54[52076]; /*0x6101d5*/
    LODWORD(v34) = dword_A8ED54[52077]; /*0x6101e2*/
    if ( (double)(unsigned int)dword_A8ED54[52076] / (double)dword_A8ED54[52077] >= *(double *)&dword_A8ED54[52085] ) /*0x6101f9*/
      HashTable::Grow2(&dword_A8ED54[52075]); /*0x610200*/
    if ( dword_A8ED54[52076] ) /*0x61020b*/
    {
      v25 = *(void ***)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&hWnd)); /*0x610225*/
      if ( v25 ) /*0x61022a*/
      {
        while ( *v25 != hWnd ) /*0x610235*/
        {
          v25 = (void **)v25[129]; /*0x610237*/
          if ( !v25 ) /*0x61023f*/
            goto LABEL_71; /*0x61023f*/
        }
        v17 = v25 + 1; /*0x610247*/
      }
    }
LABEL_71:
    GadgetClass::SetTooltip(v39, 0); /*0x61024a*/
    for ( i = v39[13]; v39[13]; i = v39[13] ) /*0x610260*/
      LinkedList::Remove(v39, i); /*0x61026a*/
    if ( v39[15] ) /*0x610283*/
      DeleteAndZero::OrFree((void **)v39[15], 1); /*0x610287*/
  }
  v27 = a2; /*0x610290*/
  v17[26] = (void *)v33; /*0x610297*/
  v28 = v35; /*0x61029a*/
  v29 = v35 == 0; /*0x61029e*/
  *v17 = v27; /*0x6102a0*/
  if ( !v29 ) /*0x6102a3*/
    v17[21] = (void *)v28[1]; /*0x6102a8*/
  v30 = 0; /*0x6102bd*/
  v33 = 0; /*0x6102bf*/
  if ( Dialog::UpdateControlState(&dword_A8ED54[52093], &hWnd, &v33) && v33 ) /*0x6102d2*/
    v30 = *(_DWORD *)v33; /*0x6102d4*/
  lParam[0] = 0; /*0x6102ee*/
  ((void (__stdcall *)(int, void *, int, int, _BYTE *))CallWindowProcA)(v30, hWnd, 13, 2048, lParam); /*0x6102f5*/
  if ( lParam[0] ) /*0x610302*/
  {
    StringCSF = GetStringCSF((#72 *)lParam, 0, g_Str_File_ownrdraw_cpp, 7392); /*0x61031c*/
    GadgetClass::SetTooltip(v17, StringCSF); /*0x61031d*/
  }
  else
  {
    GadgetClass::SetTooltip(v17, 0); /*0x610322*/
  }
  v17[11] = 0; /*0x610327*/
  ((void (__stdcall *)(void *, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1175, 0, 0); /*0x610339*/
  return 1; /*0x61033f*/
}

