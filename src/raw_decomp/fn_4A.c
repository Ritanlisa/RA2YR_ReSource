// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004A0010  EnumConnectionsClass::Release  this=EnumConnectionsClass  sig=csp ====
LONG __stdcall EnumConnectionsClass::Release(EnumConnectionsClass *this)
{
  LONG result; // eax
  int i; // esi
  void *EnumConnectionsClass_field_0x08; // eax
  int v4; // [esp-8h] [ebp-10h]

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a0020*/
  result = InterlockedDecrement((volatile LONG *)this + 8); /*0x4a0027*/
  if ( !result && this ) /*0x4a0035*/
  {
    *(_DWORD *)this->__pad_0 = &EnumConnectionsClass::`vftable'; /*0x4a0037*/
    for ( i = 0; i < this->EnumConnectionsClass_field_0x14; ++i ) /*0x4a0045*/
    {
      v4 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * i); /*0x4a004d*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4a0050*/
    }
    (*(void (__thiscall **)(int *))(this->EnumConnectionsClass_field_0x04 + 12))(&this->EnumConnectionsClass_field_0x04); /*0x4a0063*/
    EnumConnectionsClass_field_0x08 = (void *)this->EnumConnectionsClass_field_0x08; /*0x4a0066*/
    this->EnumConnectionsClass_field_0x04 = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0069*/
    if ( EnumConnectionsClass_field_0x08 ) /*0x4a0071*/
    {
      if ( BYTE1(this->EnumConnectionsClass_field_0x10) ) /*0x4a0073*/
      {
        __3_YAXPAX_Z(EnumConnectionsClass_field_0x08); /*0x4a007b*/
        this->EnumConnectionsClass_field_0x08 = 0; /*0x4a0083*/
      }
    }
    BYTE1(this->EnumConnectionsClass_field_0x10) = 0; /*0x4a008b*/
    this->EnumConnectionsClass_field_0x0C = 0; /*0x4a008f*/
    __3_YAXPAX_Z(this); /*0x4a0096*/
    return 0; /*0x4a009e*/
  }
  return result; /*0x4a00a1*/
}



// ==== 0x004A00B0  EnumConnectionsClass::ddtor  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::ddtor(EnumConnectionsClass *this, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v6; // ebp
  unsigned int i; // ebx
  int v8; // eax
  int v9; // eax
  int EnumConnectionsClass_field_0x08; // ecx
  int v11; // [esp-10h] [ebp-14h]

  v4 = a3; /*0x4a00b1*/
  if ( !a3 ) /*0x4a00b7*/
    return -2147467261; /*0x4a00bf*/
  if ( a2 > 1 ) /*0x4a00cd*/
  {
    if ( !a4 ) /*0x4a00d1*/
      return -2147024809; /*0x4a00d9*/
    goto LABEL_7; /*0x4a00d1*/
  }
  if ( a4 ) /*0x4a00de*/
LABEL_7:
    *a4 = 0; /*0x4a00e0*/
  v6 = 0; /*0x4a00ea*/
  for ( i = 0; i < a2; *(_DWORD *)(v4 - 4) = *(_DWORD *)(EnumConnectionsClass_field_0x08 + 8 * v9 + 4) ) /*0x4a00f3*/
  {
    v8 = *((_DWORD *)this + 7); /*0x4a00f9*/
    if ( v8 >= this->EnumConnectionsClass_field_0x14 ) /*0x4a0101*/
      break; /*0x4a0101*/
    v11 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * v8); /*0x4a0109*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 4))(v11); /*0x4a010c*/
    v9 = *((_DWORD *)this + 7); /*0x4a010f*/
    v4 += 8; /*0x4a0112*/
    ++v6; /*0x4a0115*/
    ++i; /*0x4a0116*/
    *((_DWORD *)this + 7) = v9 + 1; /*0x4a011a*/
    EnumConnectionsClass_field_0x08 = this->EnumConnectionsClass_field_0x08; /*0x4a011d*/
    *(_DWORD *)(v4 - 8) = *(_DWORD *)(EnumConnectionsClass_field_0x08 + 8 * v9); /*0x4a0123*/
  }
  if ( a4 ) /*0x4a013b*/
    *a4 = v6; /*0x4a013d*/
  return v6 != 0 ? 0 : -2147467259;
}



// ==== 0x004A0160  EnumConnectionsClass::Next  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::Next(EnumConnectionsClass *this, int a2)
{
  *((_DWORD *)this + 7) += a2; /*0x4a016d*/
  return 0; /*0x4a0172*/
}



// ==== 0x004A0180  EnumConnectionsClass::Skip  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::Skip(EnumConnectionsClass *this)
{
  *((_DWORD *)this + 7) = 0; /*0x4a0184*/
  return 0; /*0x4a018d*/
}



// ==== 0x004A0190  EnumConnectionsClass::ResetConnections  this=EnumConnectionsClass  sig=csp ====
int __stdcall ResetConnections(EnumConnectionsClass *this, _DWORD *a2)
{
  int v3; // edi
  int EnumConnectionsClass_field_0x0C; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int i; // esi
  int v12; // eax
  int v13; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a019a*/
    return -2147467261; /*0x4a019d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a01ad*/
  if ( !v3 ) /*0x4a01b4*/
    return -2147024882; /*0x4a029d*/
  *(_DWORD *)(v3 + 8) = 0; /*0x4a01c8*/
  *(_DWORD *)(v3 + 12) = 0; /*0x4a01cb*/
  *(_BYTE *)(v3 + 16) = 1; /*0x4a01ce*/
  *(_BYTE *)(v3 + 17) = 0; /*0x4a01d2*/
  *(_DWORD *)(v3 + 4) = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a01d5*/
  if ( (int *)(v3 + 4) != &this->EnumConnectionsClass_field_0x04 ) /*0x4a01db*/
  {
    VectorClass::ClearAndFree2(v3 + 4); /*0x4a01df*/
    EnumConnectionsClass_field_0x0C = this->EnumConnectionsClass_field_0x0C; /*0x4a01e5*/
    *(_DWORD *)(v3 + 12) = EnumConnectionsClass_field_0x0C; /*0x4a01ea*/
    if ( EnumConnectionsClass_field_0x0C ) /*0x4a01ed*/
    {
      v5 = __2_YAPAXI_Z(8 * EnumConnectionsClass_field_0x0C); /*0x4a01f7*/
      *(_DWORD *)(v3 + 8) = v5; /*0x4a0201*/
      if ( v5 ) /*0x4a0204*/
      {
        v6 = *(_DWORD *)(v3 + 12); /*0x4a0206*/
        v7 = 0; /*0x4a0209*/
        *(_BYTE *)(v3 + 17) = 1; /*0x4a020d*/
        if ( v6 > 0 ) /*0x4a0211*/
        {
          do /*0x4a0236*/
          {
            v8 = (_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * v7); /*0x4a021f*/
            v9 = (_DWORD *)(*(_DWORD *)(v3 + 8) + 8 * v7++); /*0x4a0224*/
            *v9 = *v8; /*0x4a0229*/
            v9[1] = v8[1]; /*0x4a022e*/
          }
          while ( v7 < *(_DWORD *)(v3 + 12) ); /*0x4a0236*/
        }
      }
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 0; /*0x4a023c*/
      *(_BYTE *)(v3 + 17) = 0; /*0x4a023f*/
    }
  }
  *(_DWORD *)(v3 + 20) = this->EnumConnectionsClass_field_0x14; /*0x4a0249*/
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6); /*0x4a024f*/
  *(_DWORD *)(v3 + 4) = &DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0252*/
  v10 = *((_DWORD *)this + 7); /*0x4a0258*/
  *(_DWORD *)(v3 + 32) = 0; /*0x4a025b*/
  *(_DWORD *)(v3 + 28) = v10; /*0x4a025e*/
  *(_DWORD *)v3 = &EnumConnectionsClass::`vftable'; /*0x4a0261*/
  for ( i = 0; i < *(_DWORD *)(v3 + 20); ++i ) /*0x4a026e*/
  {
    v13 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 8 * i); /*0x4a0276*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a0279*/
  }
  v12 = *(_DWORD *)v3; /*0x4a0284*/
  *(_DWORD *)(v3 + 32) = 0; /*0x4a0287*/
  (*(void (__stdcall **)(int))(v12 + 4))(v3); /*0x4a028a*/
  *a2 = v3; /*0x4a0295*/
  return 0; /*0x4a019c*/
}



// ==== 0x004A02B0  EnumConnectionsClass::method_4A02B0  this=EnumConnectionsClass  sig=csp ====
_DWORD *__thiscall sub_4A02B0(EnumConnectionsClass *this, _DWORD *a2)
{
  int *p_EnumConnectionsClass_field_0x04; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int i; // esi
  int v12; // [esp-4h] [ebp-14h]

  p_EnumConnectionsClass_field_0x04 = &this->EnumConnectionsClass_field_0x04; /*0x4a02bc*/
  this->EnumConnectionsClass_field_0x08 = 0; /*0x4a02c1*/
  this->EnumConnectionsClass_field_0x0C = 0; /*0x4a02c4*/
  LOBYTE(this->EnumConnectionsClass_field_0x10) = 1; /*0x4a02c7*/
  BYTE1(this->EnumConnectionsClass_field_0x10) = 0; /*0x4a02cb*/
  this->EnumConnectionsClass_field_0x04 = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a02ce*/
  if ( &this->EnumConnectionsClass_field_0x04 != a2 ) /*0x4a02d4*/
  {
    VectorClass::ClearAndFree2((int)&this->EnumConnectionsClass_field_0x04); /*0x4a02d8*/
    v4 = a2[2]; /*0x4a02de*/
    p_EnumConnectionsClass_field_0x04[2] = v4; /*0x4a02e3*/
    if ( v4 ) /*0x4a02e6*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a02ec*/
      p_EnumConnectionsClass_field_0x04[1] = v5; /*0x4a02f6*/
      if ( v5 ) /*0x4a02f9*/
      {
        v6 = p_EnumConnectionsClass_field_0x04[2]; /*0x4a02fb*/
        v7 = 0; /*0x4a02fe*/
        *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 1; /*0x4a0302*/
        if ( v6 > 0 ) /*0x4a0306*/
        {
          do /*0x4a0322*/
          {
            v8 = a2[1]; /*0x4a0308*/
            v9 = p_EnumConnectionsClass_field_0x04[1]; /*0x4a030b*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a0311*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a0318*/
            ++v7; /*0x4a031f*/
          }
          while ( v7 < p_EnumConnectionsClass_field_0x04[2] ); /*0x4a0322*/
        }
      }
    }
    else
    {
      p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a0328*/
      *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a032b*/
    }
  }
  p_EnumConnectionsClass_field_0x04[4] = a2[4]; /*0x4a0331*/
  p_EnumConnectionsClass_field_0x04[5] = a2[5]; /*0x4a0337*/
  *p_EnumConnectionsClass_field_0x04 = (int)&DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a033a*/
  *((_DWORD *)this + 7) = 0; /*0x4a0340*/
  this->q008 = 0; /*0x4a0343*/
  *(_DWORD *)this->__pad_0 = &EnumConnectionsClass::`vftable'; /*0x4a0346*/
  for ( i = 0; i < this->EnumConnectionsClass_field_0x14; ++i ) /*0x4a0353*/
  {
    v12 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * i); /*0x4a035b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x4a035e*/
  }
  return this->__pad_0; /*0x4a036b*/
}



// ==== 0x004A0380  EnumConnectionsClass::method_4A0380  this=EnumConnectionsClass  sig=csp ====
_DWORD *__thiscall sub_4A0380(EnumConnectionsClass *this, _DWORD *a2)
{
  int *p_EnumConnectionsClass_field_0x04; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int i; // esi
  int v13; // [esp-4h] [ebp-14h]

  p_EnumConnectionsClass_field_0x04 = &this->EnumConnectionsClass_field_0x04; /*0x4a038f*/
  this->EnumConnectionsClass_field_0x08 = 0; /*0x4a0394*/
  this->EnumConnectionsClass_field_0x0C = 0; /*0x4a0397*/
  LOBYTE(this->EnumConnectionsClass_field_0x10) = 1; /*0x4a039a*/
  BYTE1(this->EnumConnectionsClass_field_0x10) = 0; /*0x4a039e*/
  this->EnumConnectionsClass_field_0x04 = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a03a1*/
  if ( &this->EnumConnectionsClass_field_0x04 != a2 + 1 ) /*0x4a03a7*/
  {
    VectorClass::ClearAndFree2((int)&this->EnumConnectionsClass_field_0x04); /*0x4a03ab*/
    v4 = a2[3]; /*0x4a03b1*/
    p_EnumConnectionsClass_field_0x04[2] = v4; /*0x4a03b6*/
    if ( v4 ) /*0x4a03b9*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a03c3*/
      p_EnumConnectionsClass_field_0x04[1] = v5; /*0x4a03cd*/
      if ( v5 ) /*0x4a03d0*/
      {
        v6 = p_EnumConnectionsClass_field_0x04[2]; /*0x4a03d2*/
        v7 = 0; /*0x4a03d5*/
        *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 1; /*0x4a03d9*/
        if ( v6 > 0 ) /*0x4a03dd*/
        {
          do /*0x4a03f9*/
          {
            v8 = a2[2]; /*0x4a03df*/
            v9 = p_EnumConnectionsClass_field_0x04[1]; /*0x4a03e2*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a03e8*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a03ef*/
            ++v7; /*0x4a03f6*/
          }
          while ( v7 < p_EnumConnectionsClass_field_0x04[2] ); /*0x4a03f9*/
        }
      }
    }
    else
    {
      p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a03ff*/
      *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a0402*/
    }
  }
  p_EnumConnectionsClass_field_0x04[4] = a2[5]; /*0x4a040c*/
  p_EnumConnectionsClass_field_0x04[5] = a2[6]; /*0x4a0412*/
  *p_EnumConnectionsClass_field_0x04 = (int)&DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0415*/
  v10 = a2[7]; /*0x4a041b*/
  this->q008 = 0; /*0x4a041e*/
  *((_DWORD *)this + 7) = v10; /*0x4a0421*/
  *(_DWORD *)this->__pad_0 = &EnumConnectionsClass::`vftable'; /*0x4a0424*/
  for ( i = 0; i < this->EnumConnectionsClass_field_0x14; ++i ) /*0x4a0431*/
  {
    v13 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * i); /*0x4a0439*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a043c*/
  }
  return this->__pad_0; /*0x4a0449*/
}



// ==== 0x004A0450  EnumConnectionsClass::method_4A0450  this=EnumConnectionsClass  sig=csp ====
void __thiscall sub_4A0450(EnumConnectionsClass *this)
{
  int v2; // edi
  int EnumConnectionsClass_field_0x04; // edx
  int *p_EnumConnectionsClass_field_0x04; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0457*/
  for ( *(_DWORD *)this->__pad_0 = &EnumConnectionsClass::`vftable'; v2 < this->EnumConnectionsClass_field_0x14; ++v2 ) /*0x4a0464*/
  {
    v6 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * v2); /*0x4a046c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4a046f*/
  }
  EnumConnectionsClass_field_0x04 = this->EnumConnectionsClass_field_0x04; /*0x4a047a*/
  p_EnumConnectionsClass_field_0x04 = &this->EnumConnectionsClass_field_0x04; /*0x4a047d*/
  (*(void (__thiscall **)(int *))(EnumConnectionsClass_field_0x04 + 12))(p_EnumConnectionsClass_field_0x04); /*0x4a0482*/
  v5 = (void *)p_EnumConnectionsClass_field_0x04[1]; /*0x4a0485*/
  *p_EnumConnectionsClass_field_0x04 = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0488*/
  if ( v5 && *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) ) /*0x4a0492*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0498*/
    p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a04a0*/
  }
  *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a04a3*/
  p_EnumConnectionsClass_field_0x04[2] = 0; /*0x4a04a6*/
}



// ==== 0x004A04B0  ConnectionPointClass::QueryInterface  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::QueryInterface(ConnectionPointClass *this, const void *a2, _DWORD *a3)
{
  ConnectionPointClass *v4; // eax

  if ( !a3 ) /*0x4a04b7*/
    return -2147467261; /*0x4a04b9*/
  v4 = 0; /*0x4a04c9*/
  if ( !memcmp(a2, &unk_7F7CC0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a04eb*/
    v4 = this; /*0x4a04ef*/
  *a3 = v4; /*0x4a04f7*/
  if ( !v4 ) /*0x4a04fa*/
    return -2147467262; /*0x4a0508*/
  (*(void (__stdcall **)(ConnectionPointClass *))(*(_DWORD *)v4->__pad_0 + 4))(v4); /*0x4a04ff*/
  return 0; /*0x4a04be*/
}



// ==== 0x004A0520  ConnectionPointClass::AddRef  this=ConnectionPointClass  sig=csp ====
LONG __stdcall ConnectionPointClass::AddRef(ConnectionPointClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a052f*/
  return InterlockedIncrement(&this->ConnectionPointClass_field_0x14); /*0x4a053b*/
}



// ==== 0x004A0540  ConnectionPointClass::Release  this=ConnectionPointClass  sig=csp ====
LONG __stdcall ConnectionPointClass::Release(ConnectionPointClass *this)
{
  LONG result; // eax
  int ConnectionPointClass_field_0x18; // eax
  void *ConnectionPointClass_field_0x20; // eax

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a0550*/
  result = InterlockedDecrement(&this->ConnectionPointClass_field_0x14); /*0x4a0557*/
  if ( !result && this ) /*0x4a0565*/
  {
    ConnectionPointClass_field_0x18 = this->ConnectionPointClass_field_0x18; /*0x4a0567*/
    *(_DWORD *)this->__pad_0 = &ConnectionPointClass::`vftable'; /*0x4a056a*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ConnectionPointClass_field_0x18 + 8))(ConnectionPointClass_field_0x18); /*0x4a0574*/
    (*(void (__thiscall **)(int *))(this->ConnectionPointClass_field_0x1C + 12))(&this->ConnectionPointClass_field_0x1C); /*0x4a057f*/
    ConnectionPointClass_field_0x20 = (void *)this->ConnectionPointClass_field_0x20; /*0x4a0582*/
    this->ConnectionPointClass_field_0x1C = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0585*/
    if ( ConnectionPointClass_field_0x20 ) /*0x4a058d*/
    {
      if ( *((_BYTE *)this + 41) ) /*0x4a058f*/
      {
        __3_YAXPAX_Z(ConnectionPointClass_field_0x20); /*0x4a0597*/
        this->ConnectionPointClass_field_0x20 = 0; /*0x4a059f*/
      }
    }
    *((_BYTE *)this + 41) = 0; /*0x4a05a3*/
    *((_DWORD *)this + 9) = 0; /*0x4a05a7*/
    __3_YAXPAX_Z(this); /*0x4a05ae*/
    return 0; /*0x4a05b6*/
  }
  return result; /*0x4a05b9*/
}



// ==== 0x004A05D0  ConnectionPointClass::ddtor  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::ddtor(ConnectionPointClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4a05d6*/
    return -2147467261; /*0x4a05d8*/
  *a2 = this->ConnectionPointClass_field_0x04; /*0x4a05e9*/
  a2[1] = this->ConnectionPointClass_field_0x08; /*0x4a05ee*/
  a2[2] = this->ConnectionPointClass_field_0x0C; /*0x4a05f4*/
  a2[3] = this->ConnectionPointClass_field_0x10; /*0x4a05fa*/
  return 0; /*0x4a05dd*/
}



// ==== 0x004A0610  ConnectionPointClass::Advise  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::Advise(ConnectionPointClass *this, int a2)
{
  return (**(int (__stdcall ***)(int, void *, int))this->ConnectionPointClass_field_0x18)( /*0x4a0626*/
           this->ConnectionPointClass_field_0x18,
           &unk_7F7CD0,
           a2);
}



// ==== 0x004A0630  ConnectionPointClass::Unadvise  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::Unadvise(
        ConnectionPointClass *this,
        int (__stdcall ***a2)(_DWORD, int, int *),
        int *a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int ConnectionPointClass_field_0x20; // edx
  int v8; // [esp+14h] [ebp-8h] BYREF
  int updated; // [esp+18h] [ebp-4h]

  if ( !a2 || !a3 ) /*0x4a0648*/
    return -2147467261; /*0x4a06ec*/
  updated = AbstractClass::updateAITimer(dword_A8B230); /*0x4a0661*/
  if ( (**a2)(a2, (int)&this->ConnectionPointClass_field_0x04, &v8) < 0 ) /*0x4a0671*/
    return -2147220990; /*0x4a0675*/
  v4 = *((_DWORD *)this + 9); /*0x4a0681*/
  if ( this->q00B >= v4 ) /*0x4a068c*/
  {
    if ( !*((_BYTE *)this + 41) && v4 ) /*0x4a0697*/
      return -2147220991; /*0x4a0697*/
    v5 = this->q00C; /*0x4a0699*/
    if ( v5 <= 0 /*0x4a06a9*/
      || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->ConnectionPointClass_field_0x1C + 8))(
            &this->ConnectionPointClass_field_0x1C,
            v4 + v5,
            0) )
    {
      return -2147220991; /*0x4a06de*/
    }
  }
  v6 = this->q00B; /*0x4a06b0*/
  ConnectionPointClass_field_0x20 = this->ConnectionPointClass_field_0x20; /*0x4a06b3*/
  this->q00B = v6 + 1; /*0x4a06ba*/
  *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v6) = v8; /*0x4a06c1*/
  *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v6 + 4) = updated; /*0x4a06c9*/
  *a3 = updated; /*0x4a06d1*/
  return 0; /*0x4a0673*/
}



// ==== 0x004A0700  ConnectionPointClass::EnumConnections  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::EnumConnections(ConnectionPointClass *this, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *i; // ecx
  int v6; // ecx
  int v7; // ecx
  int ConnectionPointClass_field_0x20; // ecx

  v2 = 0; /*0x4a0705*/
  v3 = this->q00B; /*0x4a0707*/
  if ( v3 <= 0 ) /*0x4a070d*/
    return -2147220992; /*0x4a0725*/
  for ( i = (_DWORD *)(this->ConnectionPointClass_field_0x20 + 4); *i != a2; i += 2 ) /*0x4a0716*/
  {
    if ( ++v2 >= v3 ) /*0x4a0723*/
      return -2147220992; /*0x4a0723*/
  }
  v6 = this->q00B; /*0x4a072f*/
  if ( v2 < v6 ) /*0x4a0734*/
  {
    v7 = v6 - 1; /*0x4a0736*/
    for ( this->q00B = v7; /*0x4a073c*/
          v2 < this->q00B;
          *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v2 - 4) = *(_DWORD *)(ConnectionPointClass_field_0x20
                                                                                + 8 * v2
                                                                                + 4) )
    {
      ConnectionPointClass_field_0x20 = this->ConnectionPointClass_field_0x20; /*0x4a073e*/
      ++v2; /*0x4a0741*/
      *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v2 - 8) = *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v2); /*0x4a0745*/
    }
  }
  return 0; /*0x4a0725*/
}



// ==== 0x004A0760  ConnectionPointClass::GetConnectionInterface  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::GetConnectionInterface(ConnectionPointClass *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int i; // esi
  int v11; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a076a*/
    return -2147467261; /*0x4a076d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a077d*/
  if ( !v3 ) /*0x4a0784*/
    return -2147024882; /*0x4a0864*/
  *(_DWORD *)(v3 + 8) = 0; /*0x4a0798*/
  *(_DWORD *)(v3 + 12) = 0; /*0x4a079b*/
  *(_BYTE *)(v3 + 16) = 1; /*0x4a079e*/
  *(_BYTE *)(v3 + 17) = 0; /*0x4a07a2*/
  *(_DWORD *)(v3 + 4) = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a07a5*/
  if ( (int *)(v3 + 4) != &this->ConnectionPointClass_field_0x1C ) /*0x4a07ab*/
  {
    VectorClass::ClearAndFree2(v3 + 4); /*0x4a07af*/
    v4 = *((_DWORD *)this + 9); /*0x4a07b5*/
    *(_DWORD *)(v3 + 12) = v4; /*0x4a07ba*/
    if ( v4 ) /*0x4a07bd*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a07c7*/
      *(_DWORD *)(v3 + 8) = v5; /*0x4a07d1*/
      if ( v5 ) /*0x4a07d4*/
      {
        v6 = *(_DWORD *)(v3 + 12); /*0x4a07d6*/
        v7 = 0; /*0x4a07d9*/
        *(_BYTE *)(v3 + 17) = 1; /*0x4a07dd*/
        if ( v6 > 0 ) /*0x4a07e1*/
        {
          do /*0x4a0806*/
          {
            v8 = (_DWORD *)(this->ConnectionPointClass_field_0x20 + 8 * v7); /*0x4a07ef*/
            v9 = (_DWORD *)(*(_DWORD *)(v3 + 8) + 8 * v7++); /*0x4a07f4*/
            *v9 = *v8; /*0x4a07f9*/
            v9[1] = v8[1]; /*0x4a07fe*/
          }
          while ( v7 < *(_DWORD *)(v3 + 12) ); /*0x4a0806*/
        }
      }
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 0; /*0x4a080c*/
      *(_BYTE *)(v3 + 17) = 0; /*0x4a080f*/
    }
  }
  *(_DWORD *)(v3 + 20) = this->q00B; /*0x4a0815*/
  *(_DWORD *)(v3 + 24) = this->q00C; /*0x4a081b*/
  *(_DWORD *)(v3 + 4) = &DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a081e*/
  *(_DWORD *)(v3 + 28) = 0; /*0x4a0824*/
  *(_DWORD *)(v3 + 32) = 0; /*0x4a0827*/
  *(_DWORD *)v3 = &EnumConnectionsClass::`vftable'; /*0x4a082a*/
  for ( i = 0; i < *(_DWORD *)(v3 + 20); ++i ) /*0x4a0837*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 8 * i); /*0x4a083f*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 4))(v11); /*0x4a0842*/
  }
  return (**(int (__stdcall ***)(int, void *, int))v3)(v3, &unk_7F7CB0, a2); /*0x4a076c*/
}



// ==== 0x004A0870  ConnectionPointClass::Construct  this=ConnectionPointClass  sig=csp ====
_DWORD *__thiscall ConnectionPointClass::Construct(ConnectionPointClass *this, _DWORD *a2, int a3)
{
  this->ConnectionPointClass_field_0x04 = *a2; /*0x4a087c*/
  this->ConnectionPointClass_field_0x08 = a2[1]; /*0x4a0881*/
  this->ConnectionPointClass_field_0x0C = a2[2]; /*0x4a0887*/
  this->ConnectionPointClass_field_0x10 = a2[3]; /*0x4a088d*/
  this->ConnectionPointClass_field_0x18 = a3; /*0x4a0896*/
  this->ConnectionPointClass_field_0x14 = 0; /*0x4a0899*/
  this->ConnectionPointClass_field_0x20 = 0; /*0x4a089c*/
  *((_DWORD *)this + 9) = 0; /*0x4a089f*/
  *((_BYTE *)this + 40) = 1; /*0x4a08a2*/
  *((_BYTE *)this + 41) = 0; /*0x4a08a6*/
  this->ConnectionPointClass_field_0x1C = (int)&DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a08a9*/
  this->q00C = 10; /*0x4a08b0*/
  this->q00B = 0; /*0x4a08b7*/
  *(_DWORD *)this->__pad_0 = &ConnectionPointClass::`vftable'; /*0x4a08ba*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x4a08c3*/
  return this->__pad_0; /*0x4a08c8*/
}



// ==== 0x004A08D0  ConnectionPointClass::method_4A08D0  this=ConnectionPointClass  sig=csp ====
void __thiscall sub_4A08D0(ConnectionPointClass *this)
{
  int ConnectionPointClass_field_0x18; // eax
  int ConnectionPointClass_field_0x1C; // edx
  int *p_ConnectionPointClass_field_0x1C; // esi
  void *v5; // eax

  ConnectionPointClass_field_0x18 = this->ConnectionPointClass_field_0x18; /*0x4a08d4*/
  *(_DWORD *)this->__pad_0 = &ConnectionPointClass::`vftable'; /*0x4a08d7*/
  (*(void (__stdcall **)(int))(*(_DWORD *)ConnectionPointClass_field_0x18 + 8))(ConnectionPointClass_field_0x18); /*0x4a08e0*/
  ConnectionPointClass_field_0x1C = this->ConnectionPointClass_field_0x1C; /*0x4a08e3*/
  p_ConnectionPointClass_field_0x1C = &this->ConnectionPointClass_field_0x1C; /*0x4a08e6*/
  (*(void (__thiscall **)(int *))(ConnectionPointClass_field_0x1C + 12))(p_ConnectionPointClass_field_0x1C); /*0x4a08eb*/
  v5 = (void *)p_ConnectionPointClass_field_0x1C[1]; /*0x4a08ee*/
  *p_ConnectionPointClass_field_0x1C = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a08f5*/
  if ( v5 && *((_BYTE *)p_ConnectionPointClass_field_0x1C + 13) ) /*0x4a08fd*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0903*/
    p_ConnectionPointClass_field_0x1C[1] = 0; /*0x4a090b*/
  }
  *((_BYTE *)p_ConnectionPointClass_field_0x1C + 13) = 0; /*0x4a090e*/
  p_ConnectionPointClass_field_0x1C[2] = 0; /*0x4a0911*/
}



// ==== 0x004A0920  EnumConnectionPointsClass::QueryInterface  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::QueryInterface(EnumConnectionPointsClass *this, const void *a2, _DWORD *a3)
{
  EnumConnectionPointsClass *v4; // eax

  if ( !a3 ) /*0x4a0928*/
    return -2147467261; /*0x4a092b*/
  v4 = 0; /*0x4a093a*/
  if ( !memcmp(a2, &unk_7F7CE0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a0960*/
    v4 = this; /*0x4a0964*/
  *a3 = v4; /*0x4a0967*/
  if ( !v4 ) /*0x4a096d*/
    return -2147467262; /*0x4a097d*/
  (*(void (__stdcall **)(EnumConnectionPointsClass *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x4a0972*/
  return 0; /*0x4a092a*/
}



// ==== 0x004A0990  EnumConnectionPointsClass::AddRef  this=EnumConnectionPointsClass  sig=csp ====
LONG __stdcall EnumConnectionPointsClass::AddRef(EnumConnectionPointsClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a099f*/
  return InterlockedIncrement(&this->EnumConnectionPointsClass_field_0x08); /*0x4a09ab*/
}



// ==== 0x004A09B0  EnumConnectionPointsClass::Release  this=EnumConnectionPointsClass  sig=csp ====
LONG __stdcall EnumConnectionPointsClass::Release(EnumConnectionPointsClass *this)
{
  LONG result; // eax
  int i; // esi
  void *EnumConnectionPointsClass_field_0x10; // eax
  int v4; // [esp-8h] [ebp-10h]

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a09c0*/
  result = InterlockedDecrement(&this->EnumConnectionPointsClass_field_0x08); /*0x4a09c7*/
  if ( !result && this ) /*0x4a09d5*/
  {
    *(_DWORD *)this->__pad_0 = &EnumConnectionPointsClass::`vftable'; /*0x4a09d7*/
    for ( i = 0; i < this->EnumConnectionPointsClass_field_0x1C; ++i ) /*0x4a09e5*/
    {
      v4 = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * i); /*0x4a09ed*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4a09f0*/
    }
    (*(void (__thiscall **)(int *))(this->EnumConnectionPointsClass_field_0x0C + 12))(&this->EnumConnectionPointsClass_field_0x0C); /*0x4a0a03*/
    EnumConnectionPointsClass_field_0x10 = (void *)this->EnumConnectionPointsClass_field_0x10; /*0x4a0a06*/
    this->EnumConnectionPointsClass_field_0x0C = (int)&VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0a09*/
    if ( EnumConnectionPointsClass_field_0x10 ) /*0x4a0a11*/
    {
      if ( BYTE1(this->EnumConnectionPointsClass_field_0x18) ) /*0x4a0a13*/
      {
        __3_YAXPAX_Z(EnumConnectionPointsClass_field_0x10); /*0x4a0a1b*/
        this->EnumConnectionPointsClass_field_0x10 = 0; /*0x4a0a23*/
      }
    }
    BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0a2b*/
    this->EnumConnectionPointsClass_field_0x14 = 0; /*0x4a0a2f*/
    __3_YAXPAX_Z(this); /*0x4a0a36*/
    return 0; /*0x4a0a3e*/
  }
  return result; /*0x4a0a41*/
}



// ==== 0x004A0A50  EnumConnectionPointsClass::ddtor  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::ddtor(EnumConnectionPointsClass *this, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  int v6; // ebp
  unsigned int i; // edi
  int EnumConnectionPointsClass_field_0x04; // eax
  int v9; // eax
  int v10; // [esp-10h] [ebp-14h]

  v4 = a3; /*0x4a0a51*/
  if ( !a3 ) /*0x4a0a57*/
    return -2147467261; /*0x4a0a5f*/
  if ( a2 > 1 ) /*0x4a0a6d*/
  {
    if ( !a4 ) /*0x4a0a71*/
      return -2147467261; /*0x4a0a79*/
    goto LABEL_7; /*0x4a0a71*/
  }
  if ( a4 ) /*0x4a0a7e*/
LABEL_7:
    *a4 = 0; /*0x4a0a80*/
  v6 = 0; /*0x4a0a8a*/
  for ( i = 0; i < a2; *(_DWORD *)(v4 - 4) = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v9) ) /*0x4a0a93*/
  {
    EnumConnectionPointsClass_field_0x04 = this->EnumConnectionPointsClass_field_0x04; /*0x4a0a99*/
    if ( EnumConnectionPointsClass_field_0x04 >= this->EnumConnectionPointsClass_field_0x1C ) /*0x4a0aa1*/
      break; /*0x4a0aa1*/
    v10 = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * EnumConnectionPointsClass_field_0x04); /*0x4a0aa9*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0aac*/
    v9 = this->EnumConnectionPointsClass_field_0x04; /*0x4a0aaf*/
    v4 += 4; /*0x4a0ab2*/
    ++v6; /*0x4a0ab5*/
    ++i; /*0x4a0ab6*/
    this->EnumConnectionPointsClass_field_0x04 = v9 + 1; /*0x4a0aba*/
  }
  if ( a4 ) /*0x4a0ad4*/
    *a4 = v6; /*0x4a0ad6*/
  return v6 != 0 ? 0 : -2147467259;
}



// ==== 0x004A0AF0  EnumConnectionPointsClass::Next  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::Next(EnumConnectionPointsClass *this, int a2)
{
  this->EnumConnectionPointsClass_field_0x04 += a2; /*0x4a0afd*/
  return 0; /*0x4a0b02*/
}



// ==== 0x004A0B10  EnumConnectionPointsClass::Skip  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::Skip(EnumConnectionPointsClass *this)
{
  this->EnumConnectionPointsClass_field_0x04 = 0; /*0x4a0b14*/
  return 0; /*0x4a0b1d*/
}



// ==== 0x004A0B20  EnumConnectionPointsClass::ResetConnectionPoints  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall ResetConnectionPoints(EnumConnectionPointsClass *this, _DWORD *a2)
{
  int v3; // edi
  int EnumConnectionPointsClass_field_0x14; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v9; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a0b2a*/
    return -2147467261; /*0x4a0b2d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a0b3d*/
  if ( !v3 ) /*0x4a0b44*/
    return -2147024882; /*0x4a0c13*/
  *(_DWORD *)(v3 + 4) = this->EnumConnectionPointsClass_field_0x04; /*0x4a0b59*/
  *(_DWORD *)(v3 + 8) = 0; /*0x4a0b5c*/
  *(_DWORD *)(v3 + 16) = 0; /*0x4a0b61*/
  *(_DWORD *)(v3 + 20) = 0; /*0x4a0b64*/
  *(_BYTE *)(v3 + 24) = 1; /*0x4a0b67*/
  *(_BYTE *)(v3 + 25) = 0; /*0x4a0b6b*/
  *(_DWORD *)(v3 + 12) = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0b6e*/
  if ( (int *)(v3 + 12) != &this->EnumConnectionPointsClass_field_0x0C ) /*0x4a0b74*/
  {
    VectorClass::CleanupTyped(v3 + 12); /*0x4a0b78*/
    EnumConnectionPointsClass_field_0x14 = this->EnumConnectionPointsClass_field_0x14; /*0x4a0b7e*/
    *(_DWORD *)(v3 + 20) = EnumConnectionPointsClass_field_0x14; /*0x4a0b83*/
    if ( EnumConnectionPointsClass_field_0x14 ) /*0x4a0b86*/
    {
      v5 = __2_YAPAXI_Z(4 * EnumConnectionPointsClass_field_0x14); /*0x4a0b90*/
      *(_DWORD *)(v3 + 16) = v5; /*0x4a0b9a*/
      if ( v5 ) /*0x4a0b9d*/
      {
        v6 = *(_DWORD *)(v3 + 20); /*0x4a0b9f*/
        v7 = 0; /*0x4a0ba2*/
        *(_BYTE *)(v3 + 25) = 1; /*0x4a0ba6*/
        if ( v6 > 0 ) /*0x4a0baa*/
        {
          do /*0x4a0bbe*/
          {
            *(_DWORD *)(*(_DWORD *)(v3 + 16) + 4 * v7) = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v7); /*0x4a0bb5*/
            ++v7; /*0x4a0bbb*/
          }
          while ( v7 < *(_DWORD *)(v3 + 20) ); /*0x4a0bbe*/
        }
      }
    }
    else
    {
      *(_DWORD *)(v3 + 16) = 0; /*0x4a0bc2*/
      *(_BYTE *)(v3 + 25) = 0; /*0x4a0bc5*/
    }
  }
  *(_DWORD *)(v3 + 28) = this->EnumConnectionPointsClass_field_0x1C; /*0x4a0bcb*/
  *(_DWORD *)(v3 + 32) = this->EnumConnectionPointsClass_field_0x20; /*0x4a0bd1*/
  *(_DWORD *)(v3 + 12) = &DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4a0bd4*/
  *(_DWORD *)v3 = &EnumConnectionPointsClass::`vftable'; /*0x4a0bda*/
  for ( i = 0; i < *(_DWORD *)(v3 + 28); ++i ) /*0x4a0be7*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v3 + 16) + 4 * i); /*0x4a0bef*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x4a0bf2*/
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x4a0c00*/
  *a2 = v3; /*0x4a0c0b*/
  return 0; /*0x4a0b2c*/
}



// ==== 0x004A0C20  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor  this=EnumConnectionPointsClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this,
        _DWORD *a2)
{
  char *p_IsInitialized; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  p_IsInitialized = &this->IsInitialized; /*0x4a0c2c*/
  this->Items = 0; /*0x4a0c2f*/
  this->Capacity = 0; /*0x4a0c32*/
  this->Count = 0; /*0x4a0c37*/
  this->CapacityIncrement[0] = 0; /*0x4a0c3a*/
  this->__tail_18[0] = 1; /*0x4a0c3d*/
  this->__tail_18[1] = 0; /*0x4a0c41*/
  *(_DWORD *)&this->IsInitialized = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0c44*/
  if ( &this->IsInitialized != (char *)a2 ) /*0x4a0c4a*/
  {
    VectorClass::CleanupTyped((int)&this->IsInitialized); /*0x4a0c4e*/
    v4 = a2[2]; /*0x4a0c54*/
    *((_DWORD *)p_IsInitialized + 2) = v4; /*0x4a0c59*/
    if ( v4 ) /*0x4a0c5c*/
    {
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0c62*/
      *((_DWORD *)p_IsInitialized + 1) = v5; /*0x4a0c6c*/
      if ( v5 ) /*0x4a0c6f*/
      {
        v6 = *((_DWORD *)p_IsInitialized + 2); /*0x4a0c71*/
        v7 = 0; /*0x4a0c74*/
        p_IsInitialized[13] = 1; /*0x4a0c78*/
        if ( v6 > 0 ) /*0x4a0c7c*/
        {
          do /*0x4a0c90*/
          {
            *(_DWORD *)(*((_DWORD *)p_IsInitialized + 1) + 4 * v7) = *(_DWORD *)(a2[1] + 4 * v7); /*0x4a0c87*/
            ++v7; /*0x4a0c8d*/
          }
          while ( v7 < *((_DWORD *)p_IsInitialized + 2) ); /*0x4a0c90*/
        }
      }
    }
    else
    {
      *((_DWORD *)p_IsInitialized + 1) = 0; /*0x4a0c94*/
      p_IsInitialized[13] = 0; /*0x4a0c97*/
    }
  }
  *((_DWORD *)p_IsInitialized + 4) = a2[4]; /*0x4a0c9d*/
  *((_DWORD *)p_IsInitialized + 5) = a2[5]; /*0x4a0ca3*/
  *(_DWORD *)p_IsInitialized = &DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4a0ca6*/
  *(_DWORD *)this->__pad_0 = &EnumConnectionPointsClass::`vftable'; /*0x4a0cac*/
  for ( i = 0; i < *(_DWORD *)&this->__tail_18[4]; ++i ) /*0x4a0cb9*/
  {
    v10 = *((_DWORD *)this->Count + i); /*0x4a0cc1*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0cc4*/
  }
  return this->__pad_0; /*0x4a0cd1*/
}



// ==== 0x004A0CE0  EnumConnectionPointsClass::method_4A0CE0  this=EnumConnectionPointsClass  sig=csp ====
_DWORD *__thiscall sub_4A0CE0(EnumConnectionPointsClass *this, _DWORD *a2)
{
  int *p_EnumConnectionPointsClass_field_0x0C; // esi
  int v4; // eax
  int v5; // eax
  int EnumConnectionPointsClass_field_0x14; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  p_EnumConnectionPointsClass_field_0x0C = &this->EnumConnectionPointsClass_field_0x0C; /*0x4a0cf2*/
  this->EnumConnectionPointsClass_field_0x04 = a2[1]; /*0x4a0cf5*/
  this->EnumConnectionPointsClass_field_0x08 = 0; /*0x4a0cf8*/
  this->EnumConnectionPointsClass_field_0x10 = 0; /*0x4a0cfd*/
  this->EnumConnectionPointsClass_field_0x14 = 0; /*0x4a0d00*/
  LOBYTE(this->EnumConnectionPointsClass_field_0x18) = 1; /*0x4a0d03*/
  BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0d07*/
  this->EnumConnectionPointsClass_field_0x0C = (int)&VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0d0a*/
  if ( &this->EnumConnectionPointsClass_field_0x0C != a2 + 3 ) /*0x4a0d10*/
  {
    VectorClass::CleanupTyped((int)&this->EnumConnectionPointsClass_field_0x0C); /*0x4a0d14*/
    v4 = a2[5]; /*0x4a0d1a*/
    this->EnumConnectionPointsClass_field_0x14 = v4; /*0x4a0d1f*/
    if ( v4 ) /*0x4a0d22*/
    {
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0d2c*/
      this->EnumConnectionPointsClass_field_0x10 = v5; /*0x4a0d36*/
      if ( v5 ) /*0x4a0d39*/
      {
        EnumConnectionPointsClass_field_0x14 = this->EnumConnectionPointsClass_field_0x14; /*0x4a0d3b*/
        v7 = 0; /*0x4a0d3e*/
        BYTE1(this->EnumConnectionPointsClass_field_0x18) = 1; /*0x4a0d42*/
        if ( EnumConnectionPointsClass_field_0x14 > 0 ) /*0x4a0d46*/
        {
          do /*0x4a0d5a*/
          {
            *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v7) = *(_DWORD *)(a2[4] + 4 * v7); /*0x4a0d51*/
            ++v7; /*0x4a0d57*/
          }
          while ( v7 < this->EnumConnectionPointsClass_field_0x14 ); /*0x4a0d5a*/
        }
      }
    }
    else
    {
      this->EnumConnectionPointsClass_field_0x10 = 0; /*0x4a0d5e*/
      BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0d61*/
    }
  }
  this->EnumConnectionPointsClass_field_0x1C = a2[7]; /*0x4a0d67*/
  this->EnumConnectionPointsClass_field_0x20 = a2[8]; /*0x4a0d6d*/
  *p_EnumConnectionPointsClass_field_0x0C = (int)&DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4a0d70*/
  *(_DWORD *)this->__pad_0 = &EnumConnectionPointsClass::`vftable'; /*0x4a0d76*/
  for ( i = 0; i < this->EnumConnectionPointsClass_field_0x1C; ++i ) /*0x4a0d83*/
  {
    v10 = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * i); /*0x4a0d8b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0d8e*/
  }
  return this->__pad_0; /*0x4a0d9b*/
}



// ==== 0x004A0DB0  EnumConnectionPointsClass::method_4A0DB0  this=EnumConnectionPointsClass  sig=csp ====
void __thiscall sub_4A0DB0(EnumConnectionPointsClass *this)
{
  int v2; // edi
  int EnumConnectionPointsClass_field_0x0C; // edx
  int *p_EnumConnectionPointsClass_field_0x0C; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0db7*/
  for ( *(_DWORD *)this->__pad_0 = &EnumConnectionPointsClass::`vftable'; /*0x4a0dc4*/
        v2 < this->EnumConnectionPointsClass_field_0x1C;
        ++v2 )
  {
    v6 = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v2); /*0x4a0dcc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4a0dcf*/
  }
  EnumConnectionPointsClass_field_0x0C = this->EnumConnectionPointsClass_field_0x0C; /*0x4a0dda*/
  p_EnumConnectionPointsClass_field_0x0C = &this->EnumConnectionPointsClass_field_0x0C; /*0x4a0ddd*/
  (*(void (__thiscall **)(int *))(EnumConnectionPointsClass_field_0x0C + 12))(p_EnumConnectionPointsClass_field_0x0C); /*0x4a0de2*/
  v5 = (void *)p_EnumConnectionPointsClass_field_0x0C[1]; /*0x4a0de5*/
  *p_EnumConnectionPointsClass_field_0x0C = (int)&VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0de8*/
  if ( v5 && *((_BYTE *)p_EnumConnectionPointsClass_field_0x0C + 13) ) /*0x4a0df2*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0df8*/
    p_EnumConnectionPointsClass_field_0x0C[1] = 0; /*0x4a0e00*/
  }
  *((_BYTE *)p_EnumConnectionPointsClass_field_0x0C + 13) = 0; /*0x4a0e03*/
  p_EnumConnectionPointsClass_field_0x0C[2] = 0; /*0x4a0e06*/
}



// ==== 0x004A0E10  _DynamicVectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_(
        _DynamicVectorClass_UtagCONNECTDATA *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a0e13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0e16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a0e20*/
  {
    __3_YAXPAX_Z(v3); /*0x4a0e28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0e30*/
  }
  BYTE1(this->m_C) = 0; /*0x4a0e3b*/
  this->m_8 = 0; /*0x4a0e41*/
  if ( (a2 & 1) != 0 ) /*0x4a0e48*/
    __3_YAXPAX_Z(this); /*0x4a0e4b*/
  return this->__pad_0; /*0x4a0e55*/
}



// ==== 0x004A0E60  _DynamicVectorClass_PAUIConnectionPoint::Constructor_VectorClass_IConnectionPoint___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall EnumConnectionPointsClass::Constructor_VectorClass_IConnectionPoint___(
        _DynamicVectorClass_PAUIConnectionPoint *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a0e63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0e66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a0e70*/
  {
    __3_YAXPAX_Z(v3); /*0x4a0e78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0e80*/
  }
  BYTE1(this->m_C) = 0; /*0x4a0e8b*/
  this->m_8 = 0; /*0x4a0e91*/
  if ( (a2 & 1) != 0 ) /*0x4a0e98*/
    __3_YAXPAX_Z(this); /*0x4a0e9b*/
  return this->__pad_0; /*0x4a0ea5*/
}



// ==== 0x004A0EB0  _DynamicVectorClass_UtagCONNECTDATA::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UtagCONNECTDATA::Destroy(_DynamicVectorClass_UtagCONNECTDATA *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a0eb6*/
  this->m_10 = 0; /*0x4a0eb9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4a0ec0*/
  {
    __3_YAXPAX_Z(v2); /*0x4a0ec6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0ece*/
  }
  BYTE1(this->m_C) = 0; /*0x4a0ed1*/
  this->m_8 = 0; /*0x4a0ed4*/
}



// ==== 0x004A0EE0  _DynamicVectorClass_UtagCONNECTDATA::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UtagCONNECTDATA::GetItemIndex(_DynamicVectorClass_UtagCONNECTDATA *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a0ee0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x4a0ef5*/
  else
    return 0; /*0x4a0ee7*/
}



// ==== 0x004A0F00  _VectorClass_UtagCONNECTDATA::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UtagCONNECTDATA::Clear(_VectorClass_UtagCONNECTDATA *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x4a0f00*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x4a0f0f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x4a0f16*/
  return a2; /*0x4a0f11*/
}



// ==== 0x004A0F20  _DynamicVectorClass_PAUIConnectionPoint::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall EnumConnectionPointsClass::ClearBuffer(_DynamicVectorClass_PAUIConnectionPoint *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a0f26*/
  this->m_10 = 0; /*0x4a0f29*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4a0f30*/
  {
    __3_YAXPAX_Z(v2); /*0x4a0f36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0f3e*/
  }
  BYTE1(this->m_C) = 0; /*0x4a0f41*/
  this->m_8 = 0; /*0x4a0f44*/
}



// ==== 0x004A0F50  _DynamicVectorClass_PAUIConnectionPoint::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall EnumConnectionPointsClass::PointerToIndex(
        _DynamicVectorClass_PAUIConnectionPoint *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a0f50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a0f65*/
  else
    return 0; /*0x4a0f57*/
}



// ==== 0x004A0F70  _VectorClass_PAUIConnectionPoint::EnumConnections  this=VectorClass  sig=csp ====
int __thiscall ConnectionPointClass_9::EnumConnections(_VectorClass_PAUIConnectionPoint *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4a0f7a*/
}



// ==== 0x004A0F80  _VectorClass_UtagCONNECTDATA::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::AddRef(_VectorClass_UtagCONNECTDATA *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x4a0f8b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4a0f90*/
  {
    v3 = 0; /*0x4a0f92*/
    if ( m_8 <= 0 ) /*0x4a0f96*/
      return 1; /*0x4a0fc6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4a0f98*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x4a0f9b*/
    v6 = (_DWORD *)(v4 + 4); /*0x4a0f9e*/
    v7 = v4 - (_DWORD)v5; /*0x4a0fa1*/
    while ( v5[1] == *v6 && *v5 == *(_DWORD *)((char *)v5 + v7) ) /*0x4a0fb3*/
    {
      ++v3; /*0x4a0fb5*/
      v6 += 2; /*0x4a0fb6*/
      v5 += 2; /*0x4a0fb9*/
      if ( v3 >= m_8 ) /*0x4a0fbe*/
        return 1; /*0x4a0fbe*/
    }
  }
  return 0; /*0x4a0fc0*/
}



// ==== 0x004A0FE0  _VectorClass_UtagCONNECTDATA::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::Release(_VectorClass_UtagCONNECTDATA *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx

  if ( a2 ) /*0x4a0fec*/
  {
    v4 = a3; /*0x4a0ff2*/
    LOBYTE(this->m_C) = 0; /*0x4a0ff6*/
    if ( a3 ) /*0x4a0ffc*/
      v5 = a3; /*0x4a1012*/
    else
      v5 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x4a100e*/
    LOBYTE(this->m_C) = 1; /*0x4a1016*/
    if ( v5 ) /*0x4a101a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4a1025*/
      {
        m_8 = this->m_8; /*0x4a102c*/
        if ( a2 < m_8 ) /*0x4a1031*/
          m_8 = a2; /*0x4a1033*/
        v8 = 0; /*0x4a1035*/
        if ( m_8 > 0 ) /*0x4a1039*/
        {
          do /*0x4a1051*/
          {
            v9 = *(_DWORD *)&this->m_1[3]; /*0x4a103b*/
            ++v8; /*0x4a103e*/
            v5[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x4a1045*/
            v5[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x4a104d*/
          }
          while ( v8 < m_8 ); /*0x4a1051*/
          v4 = a3; /*0x4a1053*/
        }
        if ( BYTE1(this->m_C) ) /*0x4a1057*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a1062*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4a106a*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x4a1073*/
      this->m_8 = a2; /*0x4a107b*/
      BYTE1(this->m_C) = v4 == 0; /*0x4a107e*/
      return 1; /*0x4a1084*/
    }
    else
    {
      return 0; /*0x4a101f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UtagCONNECTDATA *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a108e*/
    return 1; /*0x4a1094*/
  }
}



// ==== 0x004A10A0  ?$VectorClass@UtagCONNECTDATA@@::ClearAndFree2  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ClearAndFree2(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4a10ad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4a10b3*/
    *(_DWORD *)(this + 4) = 0; /*0x4a10bb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a10be*/
  *(_DWORD *)(this + 8) = 0; /*0x4a10c1*/
}



// ==== 0x004A10D0  _VectorClass_UtagCONNECTDATA::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UtagCONNECTDATA::GetSize(_VectorClass_UtagCONNECTDATA *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a10d0*/
    return 0; /*0x4a10de*/
  m_8 = this->m_8; /*0x4a10e4*/
  result = 0; /*0x4a10e7*/
  if ( m_8 <= 0 ) /*0x4a10eb*/
    return -1; /*0x4a110c*/
  for ( i = *(_DWORD **)&this->m_1[3]; i[1] != a2[1] || *i != *a2; i += 2 ) /*0x4a10f1*/
  {
    if ( ++result >= m_8 ) /*0x4a110a*/
      return -1; /*0x4a110a*/
  }
  return result; /*0x4a10db*/
}



// ==== 0x004A1120  _VectorClass_UtagCONNECTDATA::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UtagCONNECTDATA::GetCapacity(_VectorClass_UtagCONNECTDATA *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a1120*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x4a1135*/
  else
    return 0; /*0x4a1127*/
}



// ==== 0x004A1140  _DynamicVectorClass_UtagCONNECTDATA::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::SetCapacity(_DynamicVectorClass_UtagCONNECTDATA *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  int m_8; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax

  if ( a2 ) /*0x4a114c*/
  {
    v4 = a3; /*0x4a1152*/
    LOBYTE(this->m_C) = 0; /*0x4a1156*/
    if ( a3 ) /*0x4a115c*/
      v5 = a3; /*0x4a1172*/
    else
      v5 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x4a116e*/
    LOBYTE(this->m_C) = 1; /*0x4a1176*/
    if ( !v5 ) /*0x4a117a*/
      return 0; /*0x4a11fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4a117c*/
    {
      m_8 = this->m_8; /*0x4a1183*/
      if ( a2 < m_8 ) /*0x4a1188*/
        m_8 = a2; /*0x4a118a*/
      v7 = 0; /*0x4a118c*/
      if ( m_8 > 0 ) /*0x4a1190*/
      {
        do /*0x4a11a8*/
        {
          v8 = *(_DWORD *)&this->m_1[3]; /*0x4a1192*/
          ++v7; /*0x4a1195*/
          v5[2 * v7 - 2] = *(_DWORD *)(v8 + 8 * v7 - 8); /*0x4a119c*/
          v5[2 * v7 - 1] = *(_DWORD *)(v8 + 8 * v7 - 4); /*0x4a11a4*/
        }
        while ( v7 < m_8 ); /*0x4a11a8*/
        v4 = a3; /*0x4a11aa*/
      }
      if ( BYTE1(this->m_C) ) /*0x4a11ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a11b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4a11c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x4a11ca*/
    this->m_8 = a2; /*0x4a11d2*/
    BYTE1(this->m_C) = v4 == 0; /*0x4a11d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UtagCONNECTDATA *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a11de*/
  }
  v9 = this->m_8; /*0x4a11e1*/
  if ( v9 < this->m_10 ) /*0x4a11e9*/
    this->m_10 = v9; /*0x4a11eb*/
  return 1; /*0x4a11ee*/
}



// ==== 0x004A1200  _DynamicVectorClass_UtagCONNECTDATA::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UtagCONNECTDATA::FindItemIndex(_DynamicVectorClass_UtagCONNECTDATA *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4a1200*/
  result = 0; /*0x4a1205*/
  if ( m_10 <= 0 ) /*0x4a120b*/
    return -1; /*0x4a122c*/
  for ( i = *(_DWORD **)&this->m_1[3]; i[1] != a2[1] || *i != *a2; i += 2 ) /*0x4a1211*/
  {
    if ( ++result >= m_10 ) /*0x4a122a*/
      return -1; /*0x4a122a*/
  }
  return result; /*0x4a122f*/
}



// ==== 0x004A1240  _VectorClass_PAUIConnectionPoint::AddRef  this=VectorClass  sig=csp ====
char __thiscall ConnectionPointClass_9::AddRef(_VectorClass_PAUIConnectionPoint *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4a1242*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4a124d*/
  {
    v3 = 0; /*0x4a124f*/
    if ( m_8 <= 0 ) /*0x4a1253*/
      return 1; /*0x4a1273*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4a1255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a125b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a1264*/
    {
      ++v3; /*0x4a1266*/
      ++v4; /*0x4a1267*/
      if ( v3 >= m_8 ) /*0x4a126c*/
        return 1; /*0x4a126c*/
    }
  }
  return 0; /*0x4a126e*/
}



// ==== 0x004A1280  _VectorClass_PAUIConnectionPoint::Release  this=VectorClass  sig=csp ====
char __thiscall ConnectionPointClass_9::Release(_VectorClass_PAUIConnectionPoint *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a128c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a1296*/
    if ( a3 ) /*0x4a129c*/
      v4 = a3; /*0x4a12b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a12ae*/
    LOBYTE(this->m_C) = 1; /*0x4a12b6*/
    if ( v4 ) /*0x4a12ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4a12c5*/
      {
        m_8 = this->m_8; /*0x4a12cc*/
        if ( a2 < m_8 ) /*0x4a12d1*/
          m_8 = a2; /*0x4a12d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a12d9*/
          ++i; /*0x4a12de*/
        if ( BYTE1(this->m_C) ) /*0x4a12eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a12f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4a12fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4a1307*/
      this->m_8 = a2; /*0x4a130f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a1312*/
      return 1; /*0x4a1318*/
    }
    else
    {
      return 0; /*0x4a12bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUIConnectionPoint *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a1322*/
    return 1; /*0x4a1328*/
  }
}



// ==== 0x004A1330  ?$VectorClass@PAUIConnectionPoint@@::CleanupTyped  this=VectorClass  sig=csp ====
void __thiscall VectorClass_CleanupTyped(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4a133d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4a1343*/
    *(_DWORD *)(this + 4) = 0; /*0x4a134b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a134e*/
  *(_DWORD *)(this + 8) = 0; /*0x4a1351*/
}



// ==== 0x004A1360  _VectorClass_PAUIConnectionPoint::Advise  this=VectorClass  sig=csp ====
int __thiscall ConnectionPointClass_9::Advise(_VectorClass_PAUIConnectionPoint *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a1360*/
    return 0; /*0x4a1368*/
  m_8 = this->m_8; /*0x4a136e*/
  result = 0; /*0x4a1371*/
  if ( m_8 <= 0 ) /*0x4a1375*/
    return -1; /*0x4a138c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a137b*/
  {
    if ( ++result >= m_8 ) /*0x4a138a*/
      return -1; /*0x4a138a*/
  }
  return result; /*0x4a136a*/
}



// ==== 0x004A13A0  _VectorClass_PAUIConnectionPoint::Unadvise  this=VectorClass  sig=csp ====
unsigned int __thiscall ConnectionPointClass_9::Unadvise(_VectorClass_PAUIConnectionPoint *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a13a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a13b5*/
  else
    return 0; /*0x4a13a7*/
}



// ==== 0x004A13C0  _DynamicVectorClass_PAUIConnectionPoint::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall EnumConnectionPointsClass::SetCapacity(
        _DynamicVectorClass_PAUIConnectionPoint *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a13cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a13d2*/
    if ( a3 ) /*0x4a13d8*/
      v4 = a3; /*0x4a13ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a13ea*/
    LOBYTE(this->m_C) = 1; /*0x4a13f2*/
    if ( !v4 ) /*0x4a13f6*/
      return 0; /*0x4a146a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4a13f8*/
    {
      m_8 = this->m_8; /*0x4a13ff*/
      if ( a2 < m_8 ) /*0x4a1404*/
        m_8 = a2; /*0x4a1406*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a140c*/
        ++i; /*0x4a1411*/
      if ( BYTE1(this->m_C) ) /*0x4a141e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a1429*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4a1431*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4a143a*/
    this->m_8 = a2; /*0x4a1442*/
    BYTE1(this->m_C) = a3 == 0; /*0x4a1445*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUIConnectionPoint *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a144e*/
  }
  v7 = this->m_8; /*0x4a1451*/
  if ( v7 < this->m_10 ) /*0x4a1459*/
    this->m_10 = v7; /*0x4a145b*/
  return 1; /*0x4a145e*/
}



// ==== 0x004A1470  _DynamicVectorClass_PAUIConnectionPoint::FindItem  this=DynamicVector  sig=csp ====
int __thiscall EnumConnectionPointsClass::FindItem(_DynamicVectorClass_PAUIConnectionPoint *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4a1470*/
  result = 0; /*0x4a1473*/
  if ( m_10 <= 0 ) /*0x4a1478*/
    return -1; /*0x4a148f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a147e*/
  {
    if ( ++result >= m_10 ) /*0x4a148d*/
      return -1; /*0x4a148d*/
  }
  return result; /*0x4a1492*/
}



// ==== 0x004A14A0  _VectorClass_UtagCONNECTDATA::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UtagCONNECTDATA::QueryInterface(_VectorClass_UtagCONNECTDATA *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a14a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a14a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a14b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a14b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a14c0*/
  }
  BYTE1(this->m_C) = 0; /*0x4a14cb*/
  this->m_8 = 0; /*0x4a14d1*/
  if ( (a2 & 1) != 0 ) /*0x4a14d8*/
    __3_YAXPAX_Z(this); /*0x4a14db*/
  return this->__pad_0; /*0x4a14e5*/
}



// ==== 0x004A14F0  _VectorClass_PAUIConnectionPoint::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall ConnectionPointClass_9::QueryInterface(_VectorClass_PAUIConnectionPoint *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a14f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a14f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a1500*/
  {
    __3_YAXPAX_Z(v3); /*0x4a1508*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a1510*/
  }
  BYTE1(this->m_C) = 0; /*0x4a151b*/
  this->m_8 = 0; /*0x4a1521*/
  if ( (a2 & 1) != 0 ) /*0x4a1528*/
    __3_YAXPAX_Z(this); /*0x4a152b*/
  return this->__pad_0; /*0x4a1535*/
}



// ==== 0x004A1540  sub_4A1540  this=-  sig=ida-proto ====
int sub_4A1540()
{
  dword_89F7E8 = 0; /*0x4a1542*/
  dword_89F7EC = 0; /*0x4a1547*/
  dword_89F7F0 = 0; /*0x4a154c*/
  dword_89F7F4 = 0; /*0x4a1551*/
  return 0; /*0x4a1556*/
}



// ==== 0x004A1560  sub_4A1560  this=-  sig=ida-proto ====
void sub_4A1560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a156c*/
  dbl_89F800 = Math::Sqrt(v0 + v0); /*0x4a157e*/
}



// ==== 0x004A1590  sub_4A1590  this=-  sig=ida-proto ====
void sub_4A1590()
{
  dbl_89F850 = dbl_89F800 / 60.0; /*0x4a159c*/
}



// ==== 0x004A15B0  sub_4A15B0  this=-  sig=ida-proto ====
void sub_4A15B0()
{
  dbl_89F838 = 1.0 / dbl_89F850; /*0x4a15bc*/
}



// ==== 0x004A15D0  sub_4A15D0  this=-  sig=ida-proto ====
void sub_4A15D0()
{
  dbl_89F830 = 0.0174532925199433 * 45.0; /*0x4a15dc*/
}



// ==== 0x004A15F0  sub_4A15F0  this=-  sig=ida-proto ====
void sub_4A15F0()
{
  dbl_89F808 = 0.0174532925199433 * 60.0; /*0x4a15fc*/
}



// ==== 0x004A1610  sub_4A1610  this=-  sig=ida-proto ====
void sub_4A1610()
{
  dbl_89F7E0 = 0.0174532925199433 * 90.0; /*0x4a161c*/
}



// ==== 0x004A1630  sub_4A1630  this=-  sig=ida-proto ====
__int64 sub_4A1630()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89F7E0 - dbl_89F808); /*0x4a1642*/
  result = Math::RoundToInt(v0 * dbl_89F800 * 0.5); /*0x4a1656*/
  dword_89F858 = result; /*0x4a165b*/
  return result; /*0x4a1660*/
}



// ==== 0x004A1670  sub_4A1670  this=-  sig=ida-proto ====
void sub_4A1670()
{
  dbl_89F810 = Math::ArcTan((double)dword_89F858 * 0.00390625); /*0x4a1687*/
}



// ==== 0x004A16A0  sub_4A16A0  this=-  sig=ida-proto ====
void sub_4A16A0()
{
  dbl_89F828 = Math::ArcTan((double)(2 * dword_89F858) / dbl_89F800); /*0x4a16c2*/
}



// ==== 0x004A16D0  sub_4A16D0  this=-  sig=ida-proto ====
__int64 sub_4A16D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F858) + 0.5); /*0x4a16eb*/
  dword_89F84C = result; /*0x4a16f0*/
  return result; /*0x4a16f6*/
}



// ==== 0x004A1700  sub_4A1700  this=-  sig=ida-proto ====
int sub_4A1700()
{
  dword_89F7F8 = 0; /*0x4a1702*/
  return 0; /*0x4a170e*/
}



// ==== 0x004A1710  sub_4A1710  this=-  sig=ida-proto ====
int sub_4A1710()
{
  dword_89F818 = 0; /*0x4a1712*/
  dword_89F81C = 0; /*0x4a1717*/
  dword_89F820 = 0; /*0x4a171c*/
  return 0; /*0x4a1721*/
}



// ==== 0x004A1730  sub_4A1730  this=-  sig=ida-proto ====
int sub_4A1730()
{
  dword_89F848 = 0; /*0x4a1735*/
  dword_89F840 = 128; /*0x4a173f*/
  dword_89F844 = 128; /*0x4a1744*/
  return 128; /*0x4a1749*/
}



// ==== 0x004A1750  CellClass::Cleanup  this=CellClass  sig=csp ====
char __thiscall CellClass::Cleanup(CellClass *this)
{
  CellClass *p_unknown30; // edi
  int v3; // edx
  CellClass *bridgeOwnerCell; // eax
  int v5; // ecx

  p_unknown30 = (CellClass *)&this->unknown30; /*0x4a1758*/
  if ( this->unknown30 == g_DDrawSurfaceManager.description[45] ) /*0x4a1762*/
    return 0; /*0x4a1764*/
  CellClass::DestroyOverlay(p_unknown30); /*0x4a1773*/
  p_unknown30->mapCoords[0] = g_DDrawSurfaceManager.description[45]; /*0x4a177e*/
  v3 = this->mapCoords[0]; /*0x4a1780*/
  if ( this->mapCoords[0] != -1 ) /*0x4a1785*/
  {
    bridgeOwnerCell = this->bridgeOwnerCell; /*0x4a1787*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x4a1795*/
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 < (int)bridgeOwnerCell ) /*0x4a1799*/
    {
      this->mapCoords[0] = -1; /*0x4a179d*/
      this->bridgeOwnerCell = (CellClass *)((char *)bridgeOwnerCell - v5); /*0x4a17a3*/
      return 1; /*0x4a17aa*/
    }
    this->bridgeOwnerCell = 0; /*0x4a17ad*/
    this->mapCoords[0] = -1; /*0x4a17b0*/
  }
  return 1; /*0x4a17a6*/
}



// ==== 0x004A17C0  BuildingClass::BeginCrumblingTimer  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::BeginCrumblingTimer(BuildingClass *this, __int16 *a2)
{
  CellClass *p_vtable3; // edi
  void *ptr_0; // edx
  char *ptr_8; // eax
  char *v6; // eax
  void *v7; // eax
  void *v8; // edi
  void *v9; // eax
  void *v10; // edx
  int v12; // [esp+Ch] [ebp-18h] BYREF
  double v13; // [esp+10h] [ebp-14h]
  double v14; // [esp+18h] [ebp-Ch]
  __int16 *v15; // [esp+28h] [ebp+4h]

  p_vtable3 = (CellClass *)&this->?; /*0x4a17cc*/
  if ( this->? != (void *)g_DDrawSurfaceManager.description[45] ) /*0x4a17d6*/
  {
    CellClass::DestroyOverlay(p_vtable3); /*0x4a17e7*/
    p_vtable3->mapCoords[0] = g_DDrawSurfaceManager.description[45]; /*0x4a17f2*/
    ptr_0 = this->TechnoClass; /*0x4a17f4*/
    if ( this->TechnoClass != (void *)-1 ) /*0x4a17f9*/
    {
      ptr_8 = (char *)this->?; /*0x4a17fb*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_0 >= (int)ptr_8 ) /*0x4a180d*/
        v6 = 0; /*0x4a1813*/
      else
        v6 = &ptr_8[-(*(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_0)]; /*0x4a180f*/
      this->? = v6; /*0x4a1815*/
      this->TechnoClass = (void *)-1; /*0x4a1818*/
    }
  }
  v12 = *(_DWORD *)a2; /*0x4a1828*/
  if ( !BuildingClass::CreateCraterAtCell((BuildingClass *)&v12) ) /*0x4a182c*/
    return 0; /*0x4a18e3*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x4a183f*/
  Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v7); /*0x4a184b*/
  p_vtable3->mapCoords[0] = v12; /*0x4a1859*/
  v14 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5752) * 1800.0; /*0x4a187a*/
  v13 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5752) * 450.0; /*0x4a188a*/
  v15 = (__int16 *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x4a189b*/
  v8 = *(void **)&stru_A8EB00.?[416]; /*0x4a189f*/
  LOWORD(v9) = Math::RoundToInt((v14 - v13) * ((double)(int)v15 * 4.656612877414201e-10) + v13); /*0x4a18b5*/
  v10 = (void *)HIDWORD(v14); /*0x4a18ba*/
  this->TechnoClass = v8; /*0x4a18c0*/
  this->? = v10; /*0x4a18c2*/
  this->? = v9; /*0x4a18c5*/
  if ( this->TechnoClass == (void *)-1 ) /*0x4a18cd*/
    this->TechnoClass = *(void **)&stru_A8EB00.?[416]; /*0x4a18d4*/
  return 1; /*0x4a18d6*/
}



// ==== 0x004A18F0  BuildingClass::CreateCraterAtCell  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::CreateCraterAtCell(BuildingClass *this)
{
  int v1; // ebp
  BuildingClass *v3; // edi
  Object *v4; // eax
  Object *v5; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // edi
  int v17; // [esp+10h] [ebp-30h]
  int v18; // [esp+1Ch] [ebp-24h]
  int v19[4]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v20[4]; // [esp+30h] [ebp-10h] BYREF

  v1 = dword_A8E7AC; /*0x4a18f5*/
  v17 = dword_A8E7AC; /*0x4a1907*/
  dword_A8E7AC = 0; /*0x4a190b*/
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (__int16 *)this, 1) /*0x4a1933*/
    && (v3 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)this),
        v3->ambientSoundController[2] == -1) )
  {
    if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)this) + 59) == 2 ) /*0x4a1952*/
    {
      v4 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x4a1954*/
      if ( v4 ) /*0x4a195e*/
        Object::SpawnAtCell(v4, dword_8871E0->GUIOpenSound, (__int16 *)this, -1); /*0x4a196f*/
    }
    else
    {
      v5 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x4a1971*/
      if ( v5 ) /*0x4a197b*/
        Object::SpawnAtCell(v5, dword_8871E0->GUIBuildSound, (__int16 *)this, -1); /*0x4a198f*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v3, v19); /*0x4a19a4*/
    StartCoords = House::GetStartCoords((House *)v3, v20); /*0x4a19a9*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4a19be*/
    {
      v9 = *PlacementRect; /*0x4a1a45*/
      v11 = PlacementRect[1]; /*0x4a1a47*/
      v15 = PlacementRect[2]; /*0x4a1a4a*/
      v13 = PlacementRect[3]; /*0x4a1a4d*/
    }
    else
    {
      v8 = PlacementRect[2]; /*0x4a19c4*/
      if ( v8 <= 0 || (v18 = PlacementRect[3], v18 <= 0) ) /*0x4a19d8*/
      {
        v9 = *StartCoords; /*0x4a1a34*/
        v11 = StartCoords[1]; /*0x4a1a36*/
        v15 = StartCoords[2]; /*0x4a1a39*/
        v13 = StartCoords[3]; /*0x4a1a3c*/
        v1 = v17; /*0x4a1a3f*/
      }
      else
      {
        v9 = *StartCoords; /*0x4a19da*/
        v10 = *PlacementRect; /*0x4a19dc*/
        v11 = StartCoords[1]; /*0x4a19de*/
        v12 = StartCoords[2]; /*0x4a19e1*/
        v13 = StartCoords[3]; /*0x4a19e4*/
        if ( v9 > *PlacementRect ) /*0x4a19e9*/
        {
          v12 += v9 - v10; /*0x4a19ed*/
          v9 = *PlacementRect; /*0x4a19ef*/
        }
        v14 = PlacementRect[1]; /*0x4a19f1*/
        if ( v11 > v14 ) /*0x4a19fa*/
        {
          v13 += v11 - v14; /*0x4a19fe*/
          v11 = v14; /*0x4a1a00*/
        }
        if ( v12 + v9 < v10 + v8 ) /*0x4a1a0a*/
          v12 = v10 - v9 + v8 + 1; /*0x4a1a12*/
        if ( v13 + v11 < v18 + v14 ) /*0x4a1a25*/
          v13 = v18 + v14 - v11 + 1; /*0x4a1a2a*/
        v1 = v17; /*0x4a1a2c*/
        v15 = v12; /*0x4a1a30*/
      }
    }
    Cell::CreateCrater(v9 - DSurface_ViewBounds.field_0, v11 - dword_886FA4, v15, v13, 0); /*0x4a1a78*/
    dword_A8E7AC = v1; /*0x4a1a7d*/
    return 1; /*0x4a1a83*/
  }
  else
  {
    dword_A8E7AC = v1; /*0x4a1a8e*/
    return 0; /*0x4a1a96*/
  }
}



// ==== 0x004A1AA0  CellClass::DestroyOverlay  this=CellClass  sig=csp ====
char __thiscall CellClass::DestroyOverlay(CellClass *this)
{
  BuildingClass *v2; // ebx
  int v3; // eax
  int v4; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v16; // [esp+18h] [ebp-28h]
  BuildingClass *v17; // [esp+1Ch] [ebp-24h]
  int v18[4]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v19[4]; // [esp+30h] [ebp-10h] BYREF

  if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)this) ) /*0x4a1aaf*/
    return 0; /*0x4a1aaf*/
  v2 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this); /*0x4a1ac7*/
  v17 = v2; /*0x4a1ac9*/
  v3 = v2->?[2]; /*0x4a1acd*/
  if ( v3 == -1 ) /*0x4a1ad3*/
    return 0; /*0x4a1ad3*/
  v4 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3); /*0x4a1adf*/
  if ( v4 != *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 248) /*0x4a1afe*/
    && v4 != *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 252)
    && v4 != *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 256) )
  {
    return 0; /*0x4a1bfc*/
  }
  PlacementRect = BuildingClass::GetPlacementRect(v2, v18); /*0x4a1b10*/
  StartCoords = House::GetStartCoords((House *)v2, v19); /*0x4a1b19*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4a1b2e*/
  {
    v14 = *PlacementRect; /*0x4a1bad*/
    v10 = PlacementRect[1]; /*0x4a1baf*/
    v11 = PlacementRect[2]; /*0x4a1bb2*/
    v12 = PlacementRect[3]; /*0x4a1bb5*/
  }
  else
  {
    v7 = PlacementRect[2]; /*0x4a1b30*/
    if ( v7 <= 0 || (v16 = PlacementRect[3], v16 <= 0) ) /*0x4a1b44*/
    {
      v14 = *StartCoords; /*0x4a1ba0*/
      v10 = StartCoords[1]; /*0x4a1ba2*/
      v11 = StartCoords[2]; /*0x4a1ba5*/
      v12 = StartCoords[3]; /*0x4a1ba8*/
    }
    else
    {
      v8 = *StartCoords; /*0x4a1b46*/
      v9 = *PlacementRect; /*0x4a1b48*/
      v10 = StartCoords[1]; /*0x4a1b4a*/
      v11 = StartCoords[2]; /*0x4a1b4d*/
      v12 = StartCoords[3]; /*0x4a1b50*/
      if ( v8 > *PlacementRect ) /*0x4a1b55*/
      {
        v11 += v8 - v9; /*0x4a1b59*/
        v8 = *PlacementRect; /*0x4a1b5b*/
      }
      v13 = PlacementRect[1]; /*0x4a1b5d*/
      if ( v10 > v13 ) /*0x4a1b66*/
      {
        v12 += v10 - v13; /*0x4a1b6a*/
        v10 = v13; /*0x4a1b6c*/
      }
      if ( v11 + v8 < v9 + v7 ) /*0x4a1b76*/
        v11 = v9 - v8 + v7 + 1; /*0x4a1b7e*/
      if ( v12 + v10 < v16 + v13 ) /*0x4a1b91*/
        v12 = v16 + v13 - v10 + 1; /*0x4a1b96*/
      v14 = v8; /*0x4a1b98*/
      v2 = v17; /*0x4a1b9a*/
    }
  }
  v19[1] = v10; /*0x4a1bc0*/
  Cell::CreateCrater(v14, v10 - (unsigned int)DSurface_ViewBounds.field_4, v11, v12, 0); /*0x4a1bdc*/
  v2->?[2] = -1; /*0x4a1be1*/
  BYTE2(v2->?) = 0; /*0x4a1be8*/
  return 1; /*0x4a1bf1*/
}



// ==== 0x004A1C10  Power::FinalizeDrain  this=Power  sig=csp ====
int __thiscall Power::FinalizeDrain(Power *this, int Power_field_0x8)
{
  void *Power_field_0x4; // eax
  int result; // eax
  char *i; // eax
  int *p_Power_field_0x8; // esi
  unsigned int v6; // eax
  int v7; // edi

  Power_field_0x4 = this->Power_field_0x4; /*0x4a1c10*/
  if ( !Power_field_0x4 ) /*0x4a1c15*/
    this->Power_field_0x8 = 0; /*0x4a1c17*/
  *((_BYTE *)&this->Power_field_0x8 + (_DWORD)Power_field_0x4) = Power_field_0x8; /*0x4a1c1f*/
  result = (int)this->Power_field_0x4 + 1; /*0x4a1c27*/
  this->Power_field_0x4 = (void *)result; /*0x4a1c29*/
  if ( result == 4 ) /*0x4a1c2f*/
  {
    LOBYTE(this->Power_field_0xC) = this->Power_field_0x4; /*0x4a1c34*/
    for ( i = (char *)this->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1c3d*/
      i[(_DWORD)this + 8] = (char)this->Power_field_0x8; /*0x4a1c42*/
    Power_field_0x8 = (int)this->Power_field_0x8; /*0x4a1c50*/
    p_Power_field_0x8 = &Power_field_0x8; /*0x4a1c57*/
    v6 = ~this->Power_field_0x0; /*0x4a1c5b*/
    v7 = 4; /*0x4a1c5d*/
    do /*0x4a1c7e*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)p_Power_field_0x8 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1c7a*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1c7c*/
      --v7; /*0x4a1c7d*/
    }
    while ( v7 ); /*0x4a1c7e*/
    result = ~v6; /*0x4a1c80*/
    this->Power_field_0x0 = result; /*0x4a1c83*/
    this->Power_field_0x4 = 0; /*0x4a1c85*/
  }
  return result; /*0x4a1c8e*/
}



// ==== 0x004A1CA0  Power::FlagProcess  this=Power  sig=csp ====
int __thiscall Power::FlagProcess(Power *this, int Power_field_0x8)
{
  void *Power_field_0x4; // eax
  int result; // eax
  char *i; // eax
  int *p_Power_field_0x8; // esi
  unsigned int v6; // eax
  int v7; // edi

  Power_field_0x4 = this->Power_field_0x4; /*0x4a1ca0*/
  if ( !Power_field_0x4 ) /*0x4a1ca7*/
    this->Power_field_0x8 = 0; /*0x4a1ca9*/
  *((_BYTE *)&this->Power_field_0x8 + (_DWORD)Power_field_0x4) = (_BYTE)Power_field_0x8 != 0; /*0x4a1cb7*/
  result = (int)this->Power_field_0x4 + 1; /*0x4a1cbf*/
  this->Power_field_0x4 = (void *)result; /*0x4a1cc1*/
  if ( result == 4 ) /*0x4a1cc7*/
  {
    LOBYTE(this->Power_field_0xC) = this->Power_field_0x4; /*0x4a1ccc*/
    for ( i = (char *)this->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1cd5*/
      i[(_DWORD)this + 8] = (char)this->Power_field_0x8; /*0x4a1cda*/
    Power_field_0x8 = (int)this->Power_field_0x8; /*0x4a1ce8*/
    p_Power_field_0x8 = &Power_field_0x8; /*0x4a1cef*/
    v6 = ~this->Power_field_0x0; /*0x4a1cf3*/
    v7 = 4; /*0x4a1cf5*/
    do /*0x4a1d16*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)p_Power_field_0x8 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1d12*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1d14*/
      --v7; /*0x4a1d15*/
    }
    while ( v7 ); /*0x4a1d16*/
    result = ~v6; /*0x4a1d18*/
    this->Power_field_0x0 = result; /*0x4a1d1b*/
    this->Power_field_0x4 = 0; /*0x4a1d1d*/
  }
  return result; /*0x4a1d23*/
}



// ==== 0x004A1D30  Checksummer::Add_WORD  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_WORD(Checksummer *this, __int16 a2)
{
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 2); /*0x4a1d46*/
}



// ==== 0x004A1D50  Power::TimerProcess  this=AbstractClass  sig=csp ====
int __stdcall Power_TimerProcess(int a1)
{
  return Checksummer::Add_Buffer(&a1, 4); /*0x4a1d64*/
}



// ==== 0x004A1D70  Checksummer::Add_float  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_float(Checksummer *this, int a2)
{
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 4); /*0x4a1d84*/
}



// ==== 0x004A1D90  Checksummer::Add_double  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_double(Checksummer *this, int a2, int a3)
{
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 8); /*0x4a1dac*/
}



// ==== 0x004A1DB0  Checksum::AddString  this=Checksum  sig=csp ====
int __thiscall Checksum::AddString(Checksum *this, unsigned __int8 *a2)
{
  int result; // eax

  if ( a2 ) /*0x4a1db9*/
    return Checksummer::Add_Buffer((Checksummer *)this, a2, strlen((const char *)a2)); /*0x4a1dcc*/
  return result; /*0x4a1dd2*/
}



// ==== 0x004A1DE0  Checksummer::Add_Buffer  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_Buffer(Checksummer *this, unsigned __int8 *state, int a3)
{
  unsigned __int8 *v3; // ebp
  int v5; // edi
  unsigned int bytePos; // eax
  int v7; // ecx
  unsigned int i; // eax
  unsigned __int8 *v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax
  unsigned __int8 v13; // cl
  int v14; // edi
  int v15; // eax
  unsigned int j; // eax
  int v17; // eax
  int *v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int k; // eax
  unsigned __int8 *v22; // eax
  int v23; // esi
  unsigned __int8 **p_state; // eax
  unsigned int v25; // esi
  int v26; // ecx
  int crcValue; // [esp-4h] [ebp-14h]

  v3 = state; /*0x4a1de2*/
  if ( state ) /*0x4a1dee*/
  {
    v5 = a3; /*0x4a1df4*/
    if ( a3 > 0 ) /*0x4a1dfa*/
    {
      do /*0x4a1e59*/
      {
        bytePos = this->bytePos; /*0x4a1e00*/
        if ( !bytePos || bytePos >= 4 ) /*0x4a1e0e*/
          break; /*0x4a1e0e*/
        *((_BYTE *)&this->state + bytePos) = *v3; /*0x4a1e13*/
        v7 = this->bytePos + 1; /*0x4a1e1a*/
        this->bytePos = v7; /*0x4a1e1d*/
        if ( v7 == 4 ) /*0x4a1e22*/
        {
          LOBYTE(this->buffer) = 4; /*0x4a1e26*/
          for ( i = this->bytePos + 1; i < 4; ++i ) /*0x4a1e2f*/
            *((_BYTE *)&this->state + i) = this->state; /*0x4a1e34*/
          crcValue = this->crcValue; /*0x4a1e42*/
          state = (unsigned __int8 *)this->state; /*0x4a1e47*/
          this->crcValue = CRC32::Compute((unsigned __int8 *)&state, 4, crcValue); /*0x4a1e50*/
          this->bytePos = 0; /*0x4a1e52*/
        }
        ++v3; /*0x4a1e55*/
        --v5; /*0x4a1e56*/
      }
      while ( v5 > 0 ); /*0x4a1e59*/
      if ( (unsigned int)v5 >> 2 ) /*0x4a1e60*/
      {
        state = (unsigned __int8 *)((unsigned int)v5 >> 2); /*0x4a1e68*/
        a3 = v5 - 4 * ((unsigned int)v5 >> 2); /*0x4a1e71*/
        do /*0x4a1eae*/
        {
          v9 = v3; /*0x4a1e77*/
          v10 = ~this->crcValue; /*0x4a1e79*/
          v11 = 4; /*0x4a1e7b*/
          do /*0x4a1e9c*/
          {
            v10 = CRC32_Table[*v9++ ^ (unsigned __int8)v10] ^ (v10 >> 8); /*0x4a1e98*/
            --v11; /*0x4a1e9b*/
          }
          while ( v11 ); /*0x4a1e9c*/
          this->crcValue = ~v10; /*0x4a1ea0*/
          v3 += 4; /*0x4a1ea6*/
          --state; /*0x4a1eaa*/
        }
        while ( state ); /*0x4a1eae*/
        v5 = a3; /*0x4a1eb0*/
      }
      if ( v5 > 0 ) /*0x4a1eb8*/
      {
        state = (unsigned __int8 *)v5; /*0x4a1ebe*/
        do /*0x4a1f3e*/
        {
          v12 = this->bytePos; /*0x4a1ec2*/
          v13 = *v3; /*0x4a1ec5*/
          if ( !v12 ) /*0x4a1eca*/
            this->state = 0; /*0x4a1ecc*/
          *((_BYTE *)&this->state + v12) = v13; /*0x4a1ecf*/
          v14 = 4; /*0x4a1ed7*/
          v15 = this->bytePos + 1; /*0x4a1edc*/
          this->bytePos = v15; /*0x4a1ede*/
          if ( v15 == 4 ) /*0x4a1ee3*/
          {
            LOBYTE(this->buffer) = 4; /*0x4a1ee7*/
            for ( j = this->bytePos + 1; j < 4; ++j ) /*0x4a1ef0*/
              *((_BYTE *)&this->state + j) = this->state; /*0x4a1ef5*/
            v17 = this->crcValue; /*0x4a1f01*/
            a3 = this->state; /*0x4a1f03*/
            v18 = &a3; /*0x4a1f07*/
            v19 = ~v17; /*0x4a1f0b*/
            do /*0x4a1f29*/
            {
              v19 = CRC32_Table[*(unsigned __int8 *)v18 ^ (unsigned __int8)v19] ^ (v19 >> 8); /*0x4a1f25*/
              v18 = (int *)((char *)v18 + 1); /*0x4a1f27*/
              --v14; /*0x4a1f28*/
            }
            while ( v14 ); /*0x4a1f29*/
            this->crcValue = ~v19; /*0x4a1f2f*/
            this->bytePos = 0; /*0x4a1f31*/
          }
          ++v3; /*0x4a1f38*/
          --state; /*0x4a1f3a*/
        }
        while ( state ); /*0x4a1f3e*/
      }
    }
  }
  v20 = this->bytePos; /*0x4a1f40*/
  if ( !v20 ) /*0x4a1f45*/
    return this->crcValue; /*0x4a1fa0*/
  *((_BYTE *)&this->state + v20) = v20; /*0x4a1f49*/
  for ( k = this->bytePos + 1; k < 4; ++k ) /*0x4a1f54*/
    *((_BYTE *)&this->state + k) = this->state; /*0x4a1f59*/
  v22 = (unsigned __int8 *)this->state; /*0x4a1f63*/
  v23 = this->crcValue; /*0x4a1f66*/
  state = v22; /*0x4a1f68*/
  p_state = &state; /*0x4a1f6c*/
  v25 = ~v23; /*0x4a1f70*/
  v26 = 4; /*0x4a1f72*/
  do /*0x4a1f93*/
  {
    v25 = CRC32_Table[*(unsigned __int8 *)p_state ^ (unsigned __int8)v25] ^ (v25 >> 8); /*0x4a1f8f*/
    p_state = (unsigned __int8 **)((char *)p_state + 1); /*0x4a1f91*/
    --v26; /*0x4a1f92*/
  }
  while ( v26 ); /*0x4a1f93*/
  return ~v25; /*0x4a1f99*/
}



// ==== 0x004A1FB0  CRC32::Compute  this=Checksummer  sig=csp ====
int __fastcall CRC32::Compute(unsigned __int8 *a1, int a2, int a3)
{
  int v4; // edx
  unsigned int v5; // eax
  int v6; // esi

  v4 = a2 - 1; /*0x4a1fb7*/
  v5 = ~a3; /*0x4a1fba*/
  if ( a2 ) /*0x4a1fbc*/
  {
    v6 = v4 + 1; /*0x4a1fbf*/
    do /*0x4a1fde*/
    {
      v5 = CRC32_Table[*a1++ ^ (unsigned __int8)v5] ^ (v5 >> 8); /*0x4a1fda*/
      --v6; /*0x4a1fdd*/
    }
    while ( v6 ); /*0x4a1fde*/
  }
  return ~v5; /*0x4a1fe3*/
}



// ==== 0x004A2030  ObjectClass::method_4A2030  this=ObjectClass  sig=csp ====
int __thiscall sub_4A2030(ObjectClass *this, unsigned __int8 *a2, int a3)
{
  Checksummer::Add_Buffer((Checksummer *)&this->?, a2, a3); /*0x4a2042*/
  return Delegate::Dispatch((Pipe *)this, (int)a2, a3); /*0x4a2050*/
}



// ==== 0x004A20B0  ObjectClass::method_4A20B0  this=ObjectClass  sig=csp ====
int __thiscall sub_4A20B0(ObjectClass *this, unsigned __int8 *a2, int a3)
{
  int v4; // esi

  if ( !a2 || a3 < 1 ) /*0x4a20c3*/
    return 0; /*0x4a20e2*/
  v4 = Delegate::Invoke((Straw *)this, (int)a2, a3); /*0x4a20cd*/
  Checksummer::Add_Buffer((Checksummer *)&this->?, a2, v4); /*0x4a20d4*/
  return v4; /*0x4a20dc*/
}



// ==== 0x004A2140  sub_4A2140  this=-  sig=ida-proto ====
int sub_4A2140()
{
  dword_89F8E8 = 0; /*0x4a2142*/
  dword_89F8EC = 0; /*0x4a2147*/
  dword_89F8F0 = 0; /*0x4a214c*/
  dword_89F8F4 = 0; /*0x4a2151*/
  return 0; /*0x4a2156*/
}



// ==== 0x004A2160  sub_4A2160  this=-  sig=ida-proto ====
void sub_4A2160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a216c*/
  dbl_89F900 = Math::Sqrt(v0 + v0); /*0x4a217e*/
}



// ==== 0x004A2190  sub_4A2190  this=-  sig=ida-proto ====
void sub_4A2190()
{
  dbl_89F950 = dbl_89F900 / 60.0; /*0x4a219c*/
}



// ==== 0x004A21B0  sub_4A21B0  this=-  sig=ida-proto ====
void sub_4A21B0()
{
  dbl_89F938 = 1.0 / dbl_89F950; /*0x4a21bc*/
}



// ==== 0x004A21D0  sub_4A21D0  this=-  sig=ida-proto ====
void sub_4A21D0()
{
  dbl_89F930 = 0.0174532925199433 * 45.0; /*0x4a21dc*/
}



// ==== 0x004A21F0  sub_4A21F0  this=-  sig=ida-proto ====
void sub_4A21F0()
{
  dbl_89F908 = 0.0174532925199433 * 60.0; /*0x4a21fc*/
}



// ==== 0x004A2210  sub_4A2210  this=-  sig=ida-proto ====
void sub_4A2210()
{
  dbl_89F8E0 = 0.0174532925199433 * 90.0; /*0x4a221c*/
}



// ==== 0x004A2230  sub_4A2230  this=-  sig=ida-proto ====
__int64 sub_4A2230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89F8E0 - dbl_89F908); /*0x4a2242*/
  result = Math::RoundToInt(v0 * dbl_89F900 * 0.5); /*0x4a2256*/
  dword_89F958 = result; /*0x4a225b*/
  return result; /*0x4a2260*/
}



// ==== 0x004A2270  sub_4A2270  this=-  sig=ida-proto ====
void sub_4A2270()
{
  dbl_89F910 = Math::ArcTan((double)dword_89F958 * 0.00390625); /*0x4a2287*/
}



// ==== 0x004A22A0  sub_4A22A0  this=-  sig=ida-proto ====
void sub_4A22A0()
{
  dbl_89F928 = Math::ArcTan((double)(2 * dword_89F958) / dbl_89F900); /*0x4a22c2*/
}



// ==== 0x004A22D0  sub_4A22D0  this=-  sig=ida-proto ====
__int64 sub_4A22D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F958) + 0.5); /*0x4a22eb*/
  dword_89F94C = result; /*0x4a22f0*/
  return result; /*0x4a22f6*/
}



// ==== 0x004A2300  sub_4A2300  this=-  sig=ida-proto ====
int sub_4A2300()
{
  word_89F8F8 = 0; /*0x4a2302*/
  word_89F8FA = 0; /*0x4a2308*/
  return 0; /*0x4a230e*/
}



// ==== 0x004A2310  sub_4A2310  this=-  sig=ida-proto ====
int sub_4A2310()
{
  dword_89F918 = 0; /*0x4a2312*/
  dword_89F91C = 0; /*0x4a2317*/
  dword_89F920 = 0; /*0x4a231c*/
  return 0; /*0x4a2321*/
}



// ==== 0x004A2330  sub_4A2330  this=-  sig=ida-proto ====
int sub_4A2330()
{
  dword_89F948 = 0; /*0x4a2335*/
  dword_89F940 = 128; /*0x4a233f*/
  dword_89F944 = 128; /*0x4a2344*/
  return 128; /*0x4a2349*/
}



// ==== 0x004A2350  TabClass::initStripClass  this=TabClass  sig=csp ====
_DWORD *__thiscall TabClass::initStripClass(TabClass *this)
{
  this->TabClass_field_0x0 = 0; /*0x4a2354*/
  this->TabClass_field_0x4 = 0; /*0x4a2356*/
  LOBYTE(this->TabClass_field_0x8[0]) = 0; /*0x4a2359*/
  BYTE1(this->TabClass_field_0x8[0]) = 0; /*0x4a235c*/
  BYTE2(this->TabClass_field_0x8[0]) = 0; /*0x4a235f*/
  this->TabClass_field_0xC = 0; /*0x4a2362*/
  return &this->TabClass_field_0x0; /*0x4a2365*/
}



// ==== 0x004A2370  ObjectClass::DrawSidebarCreditsTimer  this=ObjectClass  sig=csp ====
unsigned __int8 __userpurge DrawSidebarCreditsTimer@<al>(ObjectClass *this, int a2@<edi>, char a3)
{
  int v3; // ecx
  ObjectClass *v4; // esi
  int v5; // ebp
  unsigned __int8 result; // al
  int v7; // kr00_4
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v11; // ecx
  wchar_t *StringCSF; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // [esp-14h] [ebp-38h]
  int v17; // [esp-Ch] [ebp-30h]
  int v18; // [esp-8h] [ebp-2Ch]
  int v19; // [esp+8h] [ebp-1Ch] BYREF
  int v20[3]; // [esp+Ch] [ebp-18h] BYREF
  int v21[3]; // [esp+18h] [ebp-Ch] BYREF

  v5 = v3; /*0x4a237a*/
  if ( (_BYTE)this || (result = *(_BYTE *)(v3 + 8)) != 0 ) /*0x4a2383*/
  {
    v7 = (*((int (__thiscall **)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar, a2); /*0x4a239f*/
    if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x4a23aa*/
    {
      UI_Draw_6D0E60(v4); /*0x4a23b5*/
      v19 = v7 / 2; /*0x4a23c2*/
      v20[0] = 2; /*0x4a23c6*/
      v8 = *(_DWORD *)(v5 + 4); /*0x4a241f*/
      v9 = ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[620] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4a2422*/
         | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
         | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
      if ( v8 / 3600 > 99 ) /*0x4a243a*/
        v8 = 359999; /*0x4a243c*/
      v10 = v8 / 3600; /*0x4a2454*/
      v11 = 720 * (4 * (v8 / -3600) - v8 / 3600) + v8; /*0x4a246d*/
      v18 = v11 % 60; /*0x4a2488*/
      v17 = v11 / 60; /*0x4a2489*/
      StringCSF = GetStringCSF((wchar_t *)&stru_81AF8C.IsAnimatedTiberium, 0, aDRa2mdpostCred, 107); /*0x4a2499*/
      swprintf(&word_89F860, (const size_t)StringCSF, (const wchar_t *const)v10, v17, v18); /*0x4a24a4*/
      v13 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 30))(DSurface_Sidebar); /*0x4a24c6*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a24db*/
                                  v20,
                                  (size_t)&word_89F860,
                                  (int)DSurface_Sidebar,
                                  v13,
                                  (int)v21,
                                  (int)&v19,
                                  v9,
                                  0,
                                  0x4108u);
      *(_BYTE *)(v5 + 8) = 0; /*0x4a24e3*/
      *(_BYTE *)(v5 + 10) = 0; /*0x4a24e7*/
    }
    else
    {
      if ( *(_BYTE *)(v5 + 10) && *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1756) >= 2 ) /*0x4a250b*/
      {
        if ( *(_BYTE *)(v5 + 9) ) /*0x4a250d*/
          v14 = **(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1744); /*0x4a2526*/
        else
          v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1744) + 4); /*0x4a2530*/
        PlayVocClass(v14, 0x2000, 0.5, 0); /*0x4a2533*/
      }
      UI_Draw_6D0E60(v4); /*0x4a253d*/
      v19 = v7 / 2; /*0x4a254e*/
      v20[0] = 2; /*0x4a2552*/
      v16 = ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[620] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4a25be*/
          | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
          | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
      v15 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 30))(DSurface_Sidebar); /*0x4a25c7*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a25db*/
                                  v20,
                                  (size_t)&off_81FBB4,
                                  (int)DSurface_Sidebar,
                                  v15,
                                  (int)v21,
                                  (int)&v19,
                                  v16,
                                  0,
                                  0x4108u);
      *(_BYTE *)(v5 + 8) = 0; /*0x4a25e3*/
      *(_BYTE *)(v5 + 10) = 0; /*0x4a25e7*/
    }
  }
  return result; /*0x4a24ed*/
}



// ==== 0x004A2600  CountdownTimer::UpdateDisplay  this=CountdownTimer  sig=csp ====
char __thiscall CountdownTimer::UpdateDisplay(CountdownTimer *this, char a2)
{
  int uniqueId; // edi
  void **p_vtable2; // ebx
  int v5; // eax
  int abstractFlags; // eax
  CountdownTimer v7; // eax
  void *ptr_C; // ecx
  int v9; // edx
  CountdownTimer v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx

  dword_89F95C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4a260f*/
  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x4a261b*/
  {
    uniqueId = dword_A8B230[43].uniqueId; /*0x4a262a*/
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x4a2639*/
    {
      p_vtable2 = &dword_A8B230[43].ptr_8; /*0x4a2630*/
      uniqueId += Timer::GetTicks() - (_DWORD)*p_vtable2; /*0x4a2645*/
    }
    v5 = *((_DWORD *)this + 1); /*0x4a265b*/
    *this = (CountdownTimer)(uniqueId / 60); /*0x4a2660*/
    if ( uniqueId / 60 != v5 || (LOBYTE(abstractFlags) = a2) != 0 ) /*0x4a266a*/
    {
      *((_DWORD *)this + 1) = uniqueId / 60; /*0x4a2670*/
LABEL_26:
      *((_BYTE *)this + 8) = 1; /*0x4a2757*/
      LOBYTE(abstractFlags) = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x4a2761*/
      byte_884B90 = 1; /*0x4a2766*/
      return abstractFlags; /*0x4a2766*/
    }
    return abstractFlags; /*0x4a266a*/
  }
  v7 = (CountdownTimer)(*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 24))(&dword_A83D4C->__pad_C[24]); /*0x4a2684*/
  *this = v7; /*0x4a2689*/
  *this = *(int *)&v7 <= 0 ? 0 : v7;
  if ( dword_A8B230[127].ptr_C != (void *)-1 ) /*0x4a26a7*/
    goto LABEL_12; /*0x4a26a7*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x4a26a9*/
  ptr_C = dword_A8B230[127].ptr_C; /*0x4a26af*/
  if ( ptr_C != (void *)-1 ) /*0x4a26b8*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_C >= abstractFlags ) /*0x4a26c4*/
      goto LABEL_13; /*0x4a26c4*/
    abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_C; /*0x4a26c6*/
  }
  if ( abstractFlags ) /*0x4a26ca*/
  {
LABEL_12:
    *((_BYTE *)this + 8) = 1; /*0x4a26d3*/
    LOBYTE(abstractFlags) = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x4a26d6*/
  }
LABEL_13:
  v9 = *((_DWORD *)this + 1); /*0x4a26db*/
  v10 = *this; /*0x4a26de*/
  if ( v9 != *this )
  {
    if ( a2 )
    {
      *((_BYTE *)this + 10) = 0; /*0x4a26f0*/
      *(this + 1) = v10; /*0x4a26f4*/
    }
    else
    {
      v11 = *((_DWORD *)this + 3); /*0x4a26f9*/
      if ( v11 ) /*0x4a26fe*/
        *((_DWORD *)this + 3) = v11 - 1; /*0x4a2701*/
      *((_DWORD *)this + 3) = *(_DWORD *)&v10 - v9 <= 0 ? 3 : 1;
      v12 = (int)abs32(*(_DWORD *)&v10 - v9) >> 3; /*0x4a271e*/
      if ( v12 >= 1 ) /*0x4a2723*/
      {
        if ( v12 > 143 ) /*0x4a272e*/
          v12 = 143; /*0x4a2730*/
      }
      else
      {
        v12 = 1; /*0x4a2725*/
      }
      if ( *((_DWORD *)this + 1) > *(_DWORD *)&v10 ) /*0x4a2738*/
        v12 = -v12; /*0x4a273a*/
      v13 = v12 + *((_DWORD *)this + 1); /*0x4a273f*/
      *((_DWORD *)this + 1) = v13; /*0x4a2743*/
      if ( v13 - v12 != v13 ) /*0x4a274a*/
      {
        *((_BYTE *)this + 10) = 1; /*0x4a2751*/
        *((_BYTE *)this + 9) = v12 > 0; /*0x4a2754*/
      }
    }
    goto LABEL_26; /*0x4a26f7*/
  }
  return abstractFlags; /*0x4a276c*/
}



// ==== 0x004A2780  CacheStraw::StreamToBuffer  this=CacheStraw  sig=csp ====
int __thiscall Delegate::StreamToBuffer(CacheStraw *this, char *a2, int a3)
{
  int result; // eax
  char *v5; // ebp
  int v6; // ebx
  signed int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // [esp+10h] [ebp-4h]

  result = 0; /*0x4a2786*/
  v10 = 0; /*0x4a278c*/
  if ( *(_DWORD *)&this->__pad_0[12] ) /*0x4a2789*/
  {
    v5 = a2; /*0x4a2794*/
    if ( a2 ) /*0x4a279a*/
    {
      v6 = a3; /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          v7 = this->field_1C; /*0x4a27a4*/
          if ( v7 > 0 ) /*0x4a27a9*/
          {
            if ( v7 >= v6 ) /*0x4a27ad*/
              v7 = v6; /*0x4a27af*/
            memcpy(v5, (const void *)(*(_DWORD *)&this->__pad_0[12] + *(_DWORD *)&this->__pad_14[4]), v7); /*0x4a27bc*/
            v8 = this->field_1C - v7; /*0x4a27cf*/
            v6 -= v7; /*0x4a27d4*/
            *(_DWORD *)&this->__pad_14[4] += v7; /*0x4a27d6*/
            v10 += v7; /*0x4a27d9*/
            this->field_1C = v8; /*0x4a27dd*/
            v5 += v7; /*0x4a27e0*/
          }
          if ( !v6 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          v9 = Delegate::Invoke((Straw *)this, *(_DWORD *)&this->__pad_0[12], this->field_10); /*0x4a27f0*/
          this->field_1C = v9; /*0x4a27f7*/
          *(_DWORD *)&this->__pad_14[4] = 0; /*0x4a27fa*/
          if ( !v9 ) /*0x4a2801*/
            break; /*0x4a2801*/
        }
        while ( v6 > 0 ); /*0x4a2805*/
        return v10; /*0x4a2807*/
      }
    }
  }
  return result; /*0x4a280b*/
}



// ==== 0x004A2820  CStreamClass::Constructor  this=CStreamClass  sig=csp ====
_DWORD *__thiscall VectorClass_K_8::Constructor(CStreamClass *this)
{
  this->CStreamClass_field_0x08 = 0; /*0x4a282a*/
  this->CStreamClass_field_0x0C = 0; /*0x4a282d*/
  LOBYTE(this->CStreamClass_field_0x10) = 0; /*0x4a2830*/
  BYTE1(this->CStreamClass_field_0x10) = 0; /*0x4a2833*/
  this->CStreamClass_field_0x14 = 0; /*0x4a2836*/
  this->CStreamClass_field_0x18 = __2_YAPAXI_Z(0x10000u); /*0x4a2843*/
  this->CStreamClass_field_0x1C = __2_YAPAXI_Z(0x10000u); /*0x4a2850*/
  this->CStreamClass_field_0x20 = __2_YAPAXI_Z(0x10000u); /*0x4a285b*/
  *(_DWORD *)this->__pad_0 = &CStreamClass::`vftable'; /*0x4a285e*/
  this->CStreamClass_field_0x04 = (int)&CStreamClass::`vftable'; /*0x4a2864*/
  this->CStreamClass_field_0x24 = 0xFFFF; /*0x4a286b*/
  return this->__pad_0; /*0x4a2874*/
}



// ==== 0x004A2880  CStreamClass::method_4A2880  this=CStreamClass  sig=csp ====
void __thiscall sub_4A2880(CStreamClass *this)
{
  int CStreamClass_field_0x08; // eax
  void *CStreamClass_field_0x18; // ecx
  void *CStreamClass_field_0x1C; // edx
  int v5; // esi
  ULONG v6; // [esp+0h] [ebp-8h]

  CStreamClass_field_0x08 = this->CStreamClass_field_0x08; /*0x4a2886*/
  *(_DWORD *)this->__pad_0 = &CStreamClass::`vftable'; /*0x4a2889*/
  this->CStreamClass_field_0x04 = (int)&CStreamClass::`vftable'; /*0x4a2891*/
  if ( CStreamClass_field_0x08 ) /*0x4a2898*/
  {
    if ( BYTE1(this->CStreamClass_field_0x10) && this->CStreamClass_field_0x14 > 0 && this->CStreamClass_field_0x08 ) /*0x4a28aa*/
      IStream::Read((IStream *)this->CStreamClass_field_0x18, (void *)this->CStreamClass_field_0x14, v6); /*0x4a28b4*/
    if ( this->CStreamClass_field_0x08 /*0x4a28da*/
      && (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->CStreamClass_field_0x08 + 32))(
           this->CStreamClass_field_0x08,
           0) >= 0 )
    {
      if ( !this->CStreamClass_field_0x08 ) /*0x4a28dc*/
        WinAPI::Wrapper(-2147467261); /*0x4a28e6*/
      (*(void (__stdcall **)(int))(*(_DWORD *)this->CStreamClass_field_0x08 + 8))(this->CStreamClass_field_0x08); /*0x4a28f1*/
      this->CStreamClass_field_0x08 = 0; /*0x4a28f4*/
    }
  }
  __3_YAXPAX_Z((void *)this->CStreamClass_field_0x20); /*0x4a28fb*/
  CStreamClass_field_0x18 = (void *)this->CStreamClass_field_0x18; /*0x4a2900*/
  this->CStreamClass_field_0x20 = 0; /*0x4a2903*/
  __3_YAXPAX_Z(CStreamClass_field_0x18); /*0x4a2907*/
  CStreamClass_field_0x1C = (void *)this->CStreamClass_field_0x1C; /*0x4a290c*/
  this->CStreamClass_field_0x18 = 0; /*0x4a290f*/
  __3_YAXPAX_Z(CStreamClass_field_0x1C); /*0x4a2913*/
  this->CStreamClass_field_0x1C = 0; /*0x4a2918*/
  v5 = this->CStreamClass_field_0x08; /*0x4a291b*/
  if ( v5 ) /*0x4a2923*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4a2928*/
}



// ==== 0x004A2930  CStreamClass::AddRef  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::AddRef(CStreamClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a293f*/
  return InterlockedIncrement(&this->CStreamClass_field_0x0C); /*0x4a294b*/
}



// ==== 0x004A2950  CStreamClass::Release  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::Release(CStreamClass *this)
{
  LONG v1; // esi

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a2960*/
  v1 = InterlockedDecrement(&this->CStreamClass_field_0x0C); /*0x4a296d*/
  if ( !v1 && this ) /*0x4a2975*/
    (*(void (__thiscall **)(CStreamClass *, int))(*(_DWORD *)this->__pad_0 + 56))(this, 1); /*0x4a297d*/
  return v1; /*0x4a2982*/
}



// ==== 0x004A2990  CStreamClass::QueryInterface  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::QueryInterface(CStreamClass *this, const void *a2, _DWORD *a3)
{
  int *p_CStreamClass_field_0x04; // ecx

  if ( !a3 ) /*0x4a2997*/
    return -2147467261; /*0x4a2999*/
  *a3 = 0; /*0x4a29b6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a29c0*/
    *a3 = this; /*0x4a29c4*/
  if ( !memcmp(a2, &unk_7F7CF0, 0x10u) ) /*0x4a29d5*/
    *a3 = this; /*0x4a29da*/
  if ( !memcmp(a2, &unk_7E9530, 0x10u) ) /*0x4a29ea*/
  {
    if ( this ) /*0x4a29f2*/
      p_CStreamClass_field_0x04 = &this->CStreamClass_field_0x04; /*0x4a29f4*/
    else
      p_CStreamClass_field_0x04 = 0; /*0x4a29f9*/
    *a3 = p_CStreamClass_field_0x04; /*0x4a29fb*/
  }
  if ( !*a3 ) /*0x4a29fd*/
    return -2147467262; /*0x4a2a02*/
  (*(void (__stdcall **)(CStreamClass *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x4a2a0e*/
  return 0; /*0x4a299e*/
}



// ==== 0x004A2A20  CStreamClass::StubReturnNullPointer  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::StubReturnNullPointer(CStreamClass *this, int (__stdcall ***a2)(_DWORD, void *, _DWORD))
{
  int v3; // ebx
  int v4; // eax
  int CStreamClass_field_0x04; // eax
  int (__stdcall ***v6)(_DWORD, void *, _DWORD); // edi

  if ( !a2 ) /*0x4a2a27*/
    return -2147467261; /*0x4a2a29*/
  if ( this->CStreamClass_field_0x04 ) /*0x4a2a36*/
    return -2147467259; /*0x4a2a3d*/
  v3 = (**a2)(a2, &unk_81FC50, &a2); /*0x4a2a56*/
  if ( v3 >= 0 ) /*0x4a2a5a*/
  {
    CStreamClass_field_0x04 = this->CStreamClass_field_0x04; /*0x4a2a72*/
    v6 = a2; /*0x4a2a76*/
    if ( CStreamClass_field_0x04 ) /*0x4a2a7c*/
      (*(void (__stdcall **)(int))(*(_DWORD *)CStreamClass_field_0x04 + 8))(CStreamClass_field_0x04); /*0x4a2a81*/
    this->CStreamClass_field_0x04 = (int)v6; /*0x4a2a84*/
  }
  else
  {
    v4 = this->CStreamClass_field_0x04; /*0x4a2a5c*/
    if ( v4 ) /*0x4a2a61*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(this->CStreamClass_field_0x04); /*0x4a2a66*/
    this->CStreamClass_field_0x04 = 0; /*0x4a2a69*/
  }
  if ( v3 < 0 && v3 != -2147467262 ) /*0x4a2a92*/
    WinAPI::Wrapper(v3); /*0x4a2a95*/
  return 0; /*0x4a2a2e*/
}



// ==== 0x004A2AB0  CStreamClass::StreamRead  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::StreamRead(CStreamClass *this, _DWORD *a2)
{
  char *v2; // ecx
  int result; // eax
  ULONG v4; // [esp+0h] [ebp-4h]

  v2 = (char *)this - 4; /*0x4a2ab8*/
  if ( BYTE1(this->CStreamClass_field_0x0C) && *((int *)v2 + 5) > 0 && *((_DWORD *)v2 + 2) ) /*0x4a2ac6*/
    IStream::Read(*((IStream **)v2 + 6), *((void **)v2 + 5), v4); /*0x4a2ad2*/
  if ( !this->CStreamClass_field_0x04 ) /*0x4a2ad7*/
    return -2147467259; /*0x4a2ade*/
  if ( a2 ) /*0x4a2aee*/
  {
    if ( !this->CStreamClass_field_0x04 ) /*0x4a2af0*/
      WinAPI::Wrapper(-2147467261); /*0x4a2afc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)this->CStreamClass_field_0x04 + 4))(this->CStreamClass_field_0x04); /*0x4a2b07*/
    *a2 = this->CStreamClass_field_0x04; /*0x4a2b0d*/
  }
  if ( !this->CStreamClass_field_0x04 ) /*0x4a2b0f*/
    WinAPI::Wrapper(-2147467261); /*0x4a2b1c*/
  result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->CStreamClass_field_0x04 + 32))( /*0x4a2b29*/
             this->CStreamClass_field_0x04,
             0);
  if ( result >= 0 ) /*0x4a2b2e*/
  {
    if ( !this->CStreamClass_field_0x04 ) /*0x4a2b30*/
      WinAPI::Wrapper(-2147467261); /*0x4a2b3c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)this->CStreamClass_field_0x04 + 8))(this->CStreamClass_field_0x04); /*0x4a2b47*/
    this->CStreamClass_field_0x04 = 0; /*0x4a2b4a*/
    return 0; /*0x4a2b51*/
  }
  return result; /*0x4a2ae3*/
}



// ==== 0x004A2B60  CStreamClass::?  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt03(int a1, char *a2, signed int Size, signed int *a4)
{
  int v4; // ebp
  int result; // eax
  _DWORD *v6; // esi
  signed int *v7; // eax
  int v8; // eax
  size_t v9; // edi
  size_t v10; // eax
  int v11; // eax
  int *v12; // edi
  int v13; // edx
  unsigned __int8 *v14; // ecx
  _BYTE *v15; // [esp+8h] [ebp-1Ch]
  int v16; // [esp+20h] [ebp-4h] BYREF

  v4 = Size; /*0x4a2b66*/
  if ( !a2 ) /*0x4a2b6e*/
    return -2147467261; /*0x4a2b72*/
  if ( Size < 0 ) /*0x4a2b7e*/
    return -2147024809; /*0x4a2b82*/
  v6 = (_DWORD *)a1; /*0x4a2b8c*/
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2b90*/
    return -2147467259; /*0x4a2b99*/
  if ( *(_BYTE *)(a1 + 17) ) /*0x4a2ba3*/
    return -2147467259; /*0x4a2baa*/
  v7 = a4; /*0x4a2bb6*/
  *(_BYTE *)(a1 + 16) = 1; /*0x4a2bba*/
  if ( v7 ) /*0x4a2bc0*/
    *v7 = 0; /*0x4a2bc2*/
  for ( ; v4 > 0; v6[5] = v6[10] ) /*0x4a2bca*/
  {
    v8 = v6[5]; /*0x4a2bd0*/
    if ( v8 > 0 ) /*0x4a2bd5*/
    {
      v9 = v4; /*0x4a2bd9*/
      if ( v4 >= v8 ) /*0x4a2bdb*/
        v9 = v6[5]; /*0x4a2bdd*/
      memcpy(a2, (const void *)(v6[6] + v6[10] - v8), v9); /*0x4a2bf0*/
      v4 -= v9; /*0x4a2c01*/
      v10 = v6[5] - v9; /*0x4a2c03*/
      a2 += v9; /*0x4a2c05*/
      v6[5] = v10; /*0x4a2c09*/
    }
    if ( !v4 ) /*0x4a2c0e*/
      break; /*0x4a2c0e*/
    v11 = v6[2]; /*0x4a2c14*/
    a1 = 0; /*0x4a2c17*/
    if ( !v11 ) /*0x4a2c21*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c28*/
    v12 = v6 + 9; /*0x4a2c34*/
    result = (*(int (__stdcall **)(_DWORD, _DWORD *, int, int *))(*(_DWORD *)v6[2] + 12))(v6[2], v6 + 9, 8, &a1); /*0x4a2c3e*/
    if ( result < 0 ) /*0x4a2c43*/
      return result; /*0x4a2c43*/
    if ( a1 != 8 ) /*0x4a2c4a*/
      return -2147467259; /*0x4a2c4a*/
    if ( !v6[2] ) /*0x4a2c50*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c5c*/
    result = (*(int (__stdcall **)(_DWORD, _DWORD, int, int *))(*(_DWORD *)v6[2] + 12))(v6[2], v6[7], *v12, &a1); /*0x4a2c73*/
    if ( result < 0 ) /*0x4a2c78*/
      return result; /*0x4a2c78*/
    v13 = *v12; /*0x4a2c7a*/
    if ( a1 != *v12 ) /*0x4a2c82*/
      return -2147467259; /*0x4a2c82*/
    v15 = (_BYTE *)v6[6]; /*0x4a2c92*/
    v14 = (unsigned __int8 *)v6[7]; /*0x4a2c93*/
    v16 = 0x10000; /*0x4a2c96*/
    DecodeBlockLCW(v14, v13, v15, &v16, 0); /*0x4a2c9e*/
  }
  if ( a4 ) /*0x4a2cb7*/
    *a4 = Size; /*0x4a2cbd*/
  return 0; /*0x4a2b70*/
}



// ==== 0x004A2CD0  CStreamClass::CopyStreamToBuffer  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::CopyStreamToBuffer(CStreamClass *this, IStream *Src, signed int Size, size_t *a4)
{
  IStream *v4; // ebp
  size_t v5; // edi
  signed int v6; // ebx
  int result; // eax
  int CStreamClass_field_0x14; // ecx
  int v9; // eax
  ULONG v10; // [esp+0h] [ebp-10h]

  v4 = Src; /*0x4a2cd2*/
  v5 = Size; /*0x4a2cd8*/
  v6 = Size; /*0x4a2cde*/
  if ( !Src ) /*0x4a2ce0*/
    return -2147467261; /*0x4a2ceb*/
  if ( Size < 0 ) /*0x4a2cf0*/
    return -2147024809; /*0x4a2cfb*/
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2d02*/
    return -2147467259; /*0x4a2d12*/
  if ( LOBYTE(this->CStreamClass_field_0x10) ) /*0x4a2d15*/
    return -2147467259; /*0x4a2d25*/
  BYTE1(this->CStreamClass_field_0x10) = 1; /*0x4a2d2a*/
  if ( !Size ) /*0x4a2d2e*/
    return 0; /*0x4a2d2e*/
  if ( a4 ) /*0x4a2d3a*/
    *a4 = 0; /*0x4a2d3c*/
  CStreamClass_field_0x14 = this->CStreamClass_field_0x14; /*0x4a2d42*/
  if ( CStreamClass_field_0x14 > 0 ) /*0x4a2d47*/
  {
    if ( Size >= 0x10000 - CStreamClass_field_0x14 ) /*0x4a2d52*/
      v5 = 0x10000 - CStreamClass_field_0x14; /*0x4a2d54*/
    memcpy((void *)(this->CStreamClass_field_0x18 + this->CStreamClass_field_0x14), Src, v5); /*0x4a2d61*/
    v9 = v5 + this->CStreamClass_field_0x14; /*0x4a2d72*/
    v4 = (IStream *)((char *)Src + v5); /*0x4a2d74*/
    v6 = Size - v5; /*0x4a2d76*/
    this->CStreamClass_field_0x14 = v9; /*0x4a2d7d*/
    if ( v9 == 0x10000 ) /*0x4a2d80*/
    {
      result = IStream::Read((IStream *)this->CStreamClass_field_0x18, (void *)0x10000, v10); /*0x4a2d8d*/
      if ( result < 0 ) /*0x4a2d94*/
        return result; /*0x4a2d94*/
      this->CStreamClass_field_0x14 = 0; /*0x4a2d96*/
    }
    v5 = Size; /*0x4a2d9d*/
  }
  if ( v6 < 0x10000 ) /*0x4a2da7*/
  {
LABEL_23:
    if ( v6 > 0 ) /*0x4a2dd4*/
    {
      memcpy((void *)this->CStreamClass_field_0x18, v4, v6); /*0x4a2ddc*/
      v5 = Size; /*0x4a2de1*/
      this->CStreamClass_field_0x14 = v6; /*0x4a2de8*/
    }
    if ( a4 ) /*0x4a2df1*/
      *a4 = v5; /*0x4a2df3*/
    return 0; /*0x4a2df5*/
  }
  while ( 1 ) /*0x4a2db1*/
  {
    result = IStream::Read(v4, (void *)0x10000, v10); /*0x4a2db1*/
    if ( result < 0 ) /*0x4a2db8*/
      return result; /*0x4a2ce2*/
    v6 -= 0x10000; /*0x4a2dba*/
    v4 += 0x2000; /*0x4a2dc0*/
    if ( v6 < 0x10000 ) /*0x4a2dcc*/
    {
      v5 = Size; /*0x4a2dce*/
      goto LABEL_23; /*0x4a2dce*/
    }
  }
}



// ==== 0x004A2E00  CStreamClass::Read  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Read(CStreamClass *this, int a2, int a3, int a4, int a5)
{
  if ( LOBYTE(this->CStreamClass_field_0x10) || BYTE1(this->CStreamClass_field_0x10) ) /*0x4a2e0c*/
    return -2147467259; /*0x4a2e45*/
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2e13*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e1f*/
  return (*(int (__stdcall **)(int, int, int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 20))( /*0x4a2e41*/
           this->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5);
}



// ==== 0x004A2E50  CStreamClass::Write  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Write(CStreamClass *this, int a2, int a3)
{
  if ( LOBYTE(this->CStreamClass_field_0x10) || BYTE1(this->CStreamClass_field_0x10) ) /*0x4a2e5c*/
    return -2147467259; /*0x4a2e8b*/
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2e63*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e6f*/
  return (*(int (__stdcall **)(int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 24))( /*0x4a2e87*/
           this->CStreamClass_field_0x08,
           a2,
           a3);
}



// ==== 0x004A2EA0  CStreamClass::Seek  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Seek(CStreamClass *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2ea5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2eb1*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 28))( /*0x4a2ed8*/
           this->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}



// ==== 0x004A2EE0  CStreamClass::SetSize  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::SetSize(CStreamClass *this, int a2)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2ee5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2ef1*/
  return (*(int (__stdcall **)(int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 32))( /*0x4a2f04*/
           this->CStreamClass_field_0x08,
           a2);
}



// ==== 0x004A2F10  CStreamClass::Commit  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Commit(CStreamClass *this)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2f15*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f21*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)this->CStreamClass_field_0x08 + 36))(this->CStreamClass_field_0x08); /*0x4a2f2f*/
}



// ==== 0x004A2F40  CStreamClass::Revert  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Revert(CStreamClass *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2f45*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f51*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 40))( /*0x4a2f78*/
           this->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}



// ==== 0x004A2F80  CStreamClass::LockRegion  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::LockRegion(CStreamClass *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2f85*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f91*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 44))( /*0x4a2fb8*/
           this->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}



// ==== 0x004A2FC0  CStreamClass::UnlockRegion  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::UnlockRegion(CStreamClass *this, int a2, int a3)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2fc5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2fd1*/
  return (*(int (__stdcall **)(int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 48))( /*0x4a2fe9*/
           this->CStreamClass_field_0x08,
           a2,
           a3);
}



// ==== 0x004A2FF0  CStreamClass::Stat  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Stat(CStreamClass *this, int a2)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2ff5*/
    WinAPI::Wrapper(-2147467261); /*0x4a3001*/
  return (*(int (__stdcall **)(int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 52))( /*0x4a3014*/
           this->CStreamClass_field_0x08,
           a2);
}



// ==== 0x004A3020  IStream::Read  this=IStream  sig=csp ====
int __stdcall IStream::Read(IStream *pstm, void *pv, ULONG cb)
{
  int v3; // ecx
  _DWORD *v4; // esi
  void *v5; // ecx
  int result; // eax
  void *v7; // [esp+20h] [ebp-4h] BYREF

  v4 = (_DWORD *)v3; /*0x4a3026*/
  v7 = pv; /*0x4a302d*/
  WriteCompressionBlock(pstm, (unsigned int)pv, *(_BYTE **)(v3 + 28), (int *)&v7, *(_DWORD *)(v3 + 32)); /*0x4a303e*/
  v5 = v7; /*0x4a3043*/
  v4[10] = 0x10000; /*0x4a304a*/
  pv = 0; /*0x4a3051*/
  v4[9] = v5; /*0x4a3059*/
  if ( !v4[2] ) /*0x4a305b*/
    WinAPI::Wrapper(-2147467261); /*0x4a3067*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD *, int, void **))(*(_DWORD *)v4[2] + 16))(v4[2], v4 + 9, 8, &pv); /*0x4a307a*/
  if ( result >= 0 )
  {
    if ( pv == (void *)8 )
    {
      if ( !v4[2] ) /*0x4a3093*/
        WinAPI::Wrapper(-2147467261); /*0x4a309f*/
      result = (*(int (__stdcall **)(_DWORD, _DWORD, void *, void **))(*(_DWORD *)v4[2] + 16))(v4[2], v4[7], v7, &pv); /*0x4a30b8*/
      if ( result >= 0 )
        return v7 != pv ? 0x80004005 : 0;
    }
    else
    {
      return -2147467259; /*0x4a3089*/
    }
  }
  return result; /*0x4a3088*/
}



// ==== 0x004A3110  CStreamClass::ddtor  this=CStreamClass  sig=csp ====
void *__userpurge CStreamClass::ddtor@<eax>(CStreamClass *this, ULONG a2@<edi>, char a3)
{
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  void *v6; // ecx
  void *v7; // edx
  int v8; // eax

  v4 = v3; /*0x4a3112*/
  v5 = *(_DWORD *)(v3 + 8); /*0x4a3116*/
  *(_DWORD *)v3 = &CStreamClass::`vftable'; /*0x4a3119*/
  *(_DWORD *)(v3 + 4) = &CStreamClass::`vftable'; /*0x4a3121*/
  if ( v5 ) /*0x4a3128*/
  {
    if ( *(_BYTE *)(v3 + 17) /*0x4a314b*/
      && *(int *)(v3 + 20) > 0
      && !CStreamClass::IsEmpty((CStreamClass *)(v3 + 8), 0)
      && *(int *)(v4 + 20) > 0 )
    {
      IStream::Read(*(IStream **)(v4 + 24), *(void **)(v4 + 20), a2); /*0x4a3154*/
    }
    if ( *(_DWORD *)(v4 + 8) /*0x4a317b*/
      && (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 8) + 32))(*(_DWORD *)(v4 + 8), 0) >= 0 )
    {
      if ( !*(_DWORD *)(v4 + 8) ) /*0x4a317d*/
        WinAPI::Wrapper(-2147467261); /*0x4a3187*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 8))(*(_DWORD *)(v4 + 8)); /*0x4a3192*/
      *(_DWORD *)(v4 + 8) = 0; /*0x4a3195*/
    }
  }
  __3_YAXPAX_Z(*(void **)(v4 + 32)); /*0x4a319c*/
  v6 = *(void **)(v4 + 24); /*0x4a31a1*/
  *(_DWORD *)(v4 + 32) = 0; /*0x4a31a4*/
  __3_YAXPAX_Z(v6); /*0x4a31a8*/
  v7 = *(void **)(v4 + 28); /*0x4a31ad*/
  *(_DWORD *)(v4 + 24) = 0; /*0x4a31b0*/
  __3_YAXPAX_Z(v7); /*0x4a31b4*/
  *(_DWORD *)(v4 + 28) = 0; /*0x4a31b9*/
  v8 = *(_DWORD *)(v4 + 8); /*0x4a31bc*/
  if ( v8 ) /*0x4a31c4*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(*(_DWORD *)(v4 + 8)); /*0x4a31c9*/
  if ( ((unsigned __int8)this & 1) != 0 ) /*0x4a31d1*/
    __3_YAXPAX_Z((void *)v4); /*0x4a31d4*/
  return (void *)v4; /*0x4a31de*/
}



// ==== 0x004A31F0  CStreamClass::IsEmpty  this=CStreamClass  sig=csp ====
BOOL __thiscall CStreamClass::IsEmpty(CStreamClass *this, int a2)
{
  if ( a2 ) /*0x4a31f9*/
    WinAPI::Wrapper(-2147467261); /*0x4a3200*/
  return *(_DWORD *)this->__pad_0 == 0; /*0x4a320e*/
}



// ==== 0x004A3220  CStreamClass::IStreamQueryInterface  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::IStreamQueryInterface(CStreamClass *this, const void *a2, _DWORD *a3)
{
  return CStreamClass::QueryInterface((CStreamClass *)((char *)this - 4), a2, a3);
}



// ==== 0x004A3230  CStreamClass::IStreamAddRef  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::IStreamAddRef(CStreamClass *this)
{
  return CStreamClass::AddRef((CStreamClass *)((char *)this - 4));
}



// ==== 0x004A3240  CStreamClass::IStreamRelease  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::IStreamRelease(CStreamClass *this)
{
  return CStreamClass::Release((CStreamClass *)((char *)this - 4));
}



// ==== 0x004A3250  sub_4A3250  this=-  sig=ida-proto ====
int sub_4A3250()
{
  dword_89F960 = 0; /*0x4a3252*/
  dword_89F964 = 0; /*0x4a3257*/
  dword_89F968 = 0; /*0x4a325c*/
  dword_89F96C = 0; /*0x4a3261*/
  return 0; /*0x4a3266*/
}



// ==== 0x004A3270  ObjectClass::method_4A3270  this=ObjectClass  sig=csp ====
int *__thiscall sub_4A3270(ObjectClass *this, int a2, int a3, int a4)
{
  int *p_estimatedHealth; // ebx
  int v6; // ebx
  _DWORD v8[25]; // [esp+10h] [ebp-64h] BYREF

  p_estimatedHealth = &this->estimatedHealth; /*0x4a3287*/
  this->AbstractClass = (void *)a4; /*0x4a328f*/
  this->estimatedHealth = 0; /*0x4a3291*/
  *(_DWORD *)&this->isOnMap = 0; /*0x4a3297*/
  memset(&this->?, 0, 0x6Cu); /*0x4a329e*/
  this->? = (void *)108; /*0x4a32a4*/
  this->? = (void *)7; /*0x4a32aa*/
  this->health = dword_81FC60[a4]; /*0x4a32b8*/
  this->? = a2; /*0x4a32bf*/
  this->? = (void *)a3; /*0x4a32c2*/
  if ( a4 == 1 ) /*0x4a32c5*/
  {
    this->? = (void *)71; /*0x4a32c7*/
    this->? = 16; /*0x4a32ce*/
  }
  if ( !dword_8A0E00 /*0x4a32e5*/
    || !(*(int (__stdcall **)(int, void **, int *, _DWORD))(*(_DWORD *)dword_8A0E00 + 24))(
          dword_8A0E00,
          &this->?,
          &this->estimatedHealth,
          0) )
  {
    v6 = *p_estimatedHealth; /*0x4a32ec*/
    if ( v6 ) /*0x4a32f0*/
    {
      if ( a4 ) /*0x4a32f5*/
      {
        if ( a4 == 1 ) /*0x4a32f8*/
        {
          memset(v8, 0, sizeof(v8)); /*0x4a3314*/
          v8[0] = 100; /*0x4a331a*/
          v8[20] = -1; /*0x4a332a*/
          (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v6 + 20))( /*0x4a3339*/
            v6,
            0,
            0,
            0,
            0x2000000,
            v8);
          return (int *)this; /*0x4a3347*/
        }
        if ( a4 != 2 ) /*0x4a32fb*/
          return (int *)this; /*0x4a3306*/
      }
      (**(void (__stdcall ***)(int, void *, char *))v6)(v6, &unk_7F8130, &this->isOnMap); /*0x4a3356*/
    }
  }
  return (int *)this; /*0x4a32ff*/
}



// ==== 0x004A3370  DDraw::ReleaseSurfaces  this=DDraw  sig=csp ====
int __thiscall DDraw::ReleaseSurfaces(DDraw *this)
{
  int v2; // eax
  int result; // eax

  v2 = this->u32_74; /*0x4a3373*/
  if ( v2 ) /*0x4a3378*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4a337d*/
    this->u32_74 = 0; /*0x4a3380*/
  }
  result = this->u32_1C; /*0x4a3387*/
  if ( result ) /*0x4a338c*/
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this->u32_1C); /*0x4a3391*/
    this->u32_1C = 0; /*0x4a3394*/
  }
  return result; /*0x4a339b*/
}



// ==== 0x004A33A0  AudioStream::ReadSamples  this=AudioStream  sig=csp ====
int __thiscall AudioStream::ReadSamples(AudioStream *this, const void *a2)
{
  AudioStream *v2; // ebx
  int v3; // edx
  int *v5; // ecx
  _WORD *v6; // ebx
  unsigned int v7; // edi
  int v8; // ebp
  _WORD *SamplePosition; // esi
  _WORD *v10; // eax
  _WORD *v11; // edx
  unsigned int Stream_field_04; // [esp+18h] [ebp-E8h]
  int v14; // [esp+1Ch] [ebp-E4h]
  _DWORD v15[4]; // [esp+20h] [ebp-E0h] BYREF
  _DWORD v16[27]; // [esp+30h] [ebp-D0h] BYREF
  _DWORD v17[25]; // [esp+9Ch] [ebp-64h] BYREF

  v2 = this; /*0x4a33a7*/
  v3 = *(_DWORD *)&this->__pad_5C[20]; /*0x4a33ac*/
  if ( !v3 ) /*0x4a33b7*/
    return -1; /*0x4a33b7*/
  if ( *(_DWORD *)this->__pad_0 == 2 )
  {
    if ( !dword_8A0E08 || !*(_DWORD *)&dword_8A0E08[112] ) /*0x4a33d8*/
      return -1; /*0x4a33c6*/
    v15[2] = 256; /*0x4a33e7*/
    v15[3] = 256; /*0x4a33eb*/
    memset(v17, 0, sizeof(v17)); /*0x4a33f8*/
    v15[0] = 0; /*0x4a3401*/
    v15[1] = 0; /*0x4a340f*/
    v17[0] = 100; /*0x4a3413*/
    return (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD *, int, _DWORD *))(*(_DWORD *)v3 + 20))( /*0x4a3427*/
             v3,
             0,
             *(_DWORD *)&dword_8A0E08[112],
             v15,
             512,
             v17);
  }
  else
  {
    memset(v16, 0, sizeof(v16)); /*0x4a3443*/
    v16[0] = 108; /*0x4a344e*/
    if ( (*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v3 + 100))(v3, 0, v16, 2081, 0) )
    {
      return 1; /*0x4a3465*/
    }
    else
    {
      if ( *(_DWORD *)v2->__pad_0 ) /*0x4a3474*/
      {
        if ( *(_DWORD *)v2->__pad_0 == 1 ) /*0x4a347f*/
        {
          v5 = (int *)g_ZBufferDescriptor; /*0x4a3485*/
          if ( g_ZBufferDescriptor ) /*0x4a348d*/
          {
            if ( *(_DWORD *)&stru_87E790.__pad_D8[60] ) /*0x4a3499*/
            {
              v6 = (_WORD *)v16[9]; /*0x4a34a6*/
              v7 = 0; /*0x4a34aa*/
              v8 = v16[4] >> 1; /*0x4a34ac*/
              v14 = v16[4] >> 1; /*0x4a34b0*/
              Stream_field_04 = g_ZBufferDescriptor[2].Stream_field_04; /*0x4a34b4*/
              if ( Stream_field_04 ) /*0x4a34b8*/
              {
                do /*0x4a353c*/
                {
                  SamplePosition = (_WORD *)Audio::GetSamplePosition(v5, 0, v7 - v5[1]); /*0x4a34d4*/
                  v10 = (_WORD *)StreamClass::ReadAndSeek( /*0x4a34df*/
                                   *(int **)&stru_87E790.__pad_D8[60],
                                   0,
                                   v7 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4));
                  if ( !SamplePosition || !v10 ) /*0x4a34ee*/
                    break; /*0x4a34ee*/
                  if ( v8 ) /*0x4a34f2*/
                  {
                    do /*0x4a352f*/
                    {
                      if ( *v10 < 8u ) /*0x4a34f8*/
                        *v6 = 0; /*0x4a3502*/
                      else
                        *v6 = *SamplePosition; /*0x4a34fd*/
                      v5 = (int *)g_ZBufferDescriptor; /*0x4a3507*/
                      v11 = SamplePosition + 1; /*0x4a350d*/
                      ++v6; /*0x4a3510*/
                      if ( (unsigned int)(SamplePosition + 1) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4a3516*/
                        v11 = (_WORD *)((char *)v11 - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4a3518*/
                      SamplePosition = v11; /*0x4a351b*/
                      if ( (unsigned int)++v10 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4a3529*/
                        v10 = (_WORD *)((char *)v10 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4a352b*/
                      --v8; /*0x4a352e*/
                    }
                    while ( v8 ); /*0x4a352f*/
                    v8 = v14; /*0x4a3531*/
                  }
                  else
                  {
                    v5 = (int *)g_ZBufferDescriptor; /*0x4a3540*/
                  }
                  ++v7; /*0x4a3539*/
                }
                while ( v7 < Stream_field_04 ); /*0x4a353c*/
              }
              v2 = this; /*0x4a356f*/
            }
          }
        }
      }
      else if ( a2 ) /*0x4a3551*/
      {
        qmemcpy((void *)v16[9], a2, v16[4] * (int)v2->AudioStream_field_0xC); /*0x4a3564*/
      }
      return (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)&v2->__pad_5C[20] + 128))(
               *(_DWORD *)&v2->__pad_5C[20],
               0) != 0
           ? 2
           : 0;
    }
  }
}



// ==== 0x004A35A0  ColorStruct::SetRGB  this=ColorStruct  sig=csp ====
int __thiscall ColorStruct::SetRGB(ColorStruct *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  void *v4; // eax

  v4 = (void *)(a4 | ((a3 | ((a2 | 0xFFFFFF00) << 8)) << 8)); /*0x4a35c5*/
  this->field_50 = v4; /*0x4a35c7*/
  this->field_30 = v4; /*0x4a35ca*/
  this->field_10 = v4; /*0x4a35cd*/
  this->field_54 = (void *)-16777216; /*0x4a35d5*/
  this->field_34 = (void *)-16777216; /*0x4a35d8*/
  this->field_14 = (void *)-16777216; /*0x4a35db*/
  return -16777216; /*0x4a35de*/
}



// ==== 0x004A35F0  Tactical::SetCellTransform  this=IUnknown  sig=csp ====
char *__thiscall Tactical_SetCellTransform(char *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char *result; // eax

  result = this + 32 * a2; /*0x4a35fb*/
  *(_DWORD *)result = a3; /*0x4a3601*/
  *((_DWORD *)result + 1) = a4; /*0x4a3607*/
  *((_DWORD *)result + 2) = a5; /*0x4a360e*/
  *((_DWORD *)result + 6) = a6; /*0x4a3615*/
  *((_DWORD *)result + 7) = a7; /*0x4a3618*/
  *((_DWORD *)result + 3) = 1065353216; /*0x4a361b*/
  return result; /*0x4a3622*/
}



// ==== 0x004A3630  ObjectClass::method_4A3630  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4A3630(ObjectClass *this)
{
  *((_DWORD *)this + 24576) = 0; /*0x4a3632*/
  return &this->AbstractClass; /*0x4a363c*/
}



// ==== 0x004A3640  DDraw::Init  this=DDraw  sig=csp ====
void __thiscall DDraw::Init(DDraw *this)
{
  this->q18000 = 0; /*0x4a3640*/
}



// ==== 0x004A3650  nullsub_115  this=-  sig=ida-proto ====
void nullsub_115()
{
  ; /*0x4a3650*/
}



// ==== 0x004A3660  ObjectClass::RenderTactical3DScene  this=ObjectClass  sig=csp ====
int __thiscall RenderTactical3DScene(ObjectClass *this, int a2)
{
  int v2; // esi
  ObjectClass *v3; // edi
  bool v4; // zf
  int v5; // eax
  AudioStream *v6; // ebx
  DDraw *v7; // edx
  int v8; // ecx
  int result; // eax
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int i; // ebx
  int v18; // [esp+B0h] [ebp-4h]

  v2 = a2; /*0x4a3663*/
  v3 = this; /*0x4a3668*/
  v4 = a2 == 0; /*0x4a366a*/
  v5 = *((_DWORD *)this + 24576); /*0x4a366c*/
  *((_DWORD *)this + 24576) = 0; /*0x4a3672*/
  v18 = v5; /*0x4a367c*/
  if ( v4 ) /*0x4a3680*/
    return -1; /*0x4a3680*/
  v6 = dword_8A0E04; /*0x4a3686*/
  if ( !dword_8A0E04 ) /*0x4a368e*/
    return -1; /*0x4a368e*/
  if ( !*(_DWORD *)&dword_8A0E04->__pad_5C[24] ) /*0x4a3694*/
    return -1; /*0x4a3694*/
  v7 = dword_8A0E08; /*0x4a369f*/
  if ( !dword_8A0E08 ) /*0x4a36a7*/
    return -1; /*0x4a36a7*/
  v8 = *(_DWORD *)&dword_8A0E08[112]; /*0x4a36ad*/
  if ( !v8 ) /*0x4a36b2*/
    return -1; /*0x4a3832*/
  if ( dword_89F970 == v2 ) /*0x4a36bf*/
    goto LABEL_13; /*0x4a36bf*/
  if ( dword_89F970 ) /*0x4a36c3*/
  {
    result = (*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)dword_89F970 + 32))(dword_89F970, 0, v8); /*0x4a36cb*/
    if ( result ) /*0x4a36d0*/
      return result; /*0x4a36d0*/
    v7 = dword_8A0E08; /*0x4a36d6*/
    dword_89F970 = 0; /*0x4a36dc*/
  }
  result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 12))(v2, *(_DWORD *)&v7[112]); /*0x4a36e8*/
  if ( !result ) /*0x4a36ed*/
  {
    result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)g_DrawColorState + 60))(g_DrawColorState, v2, 0); /*0x4a36fe*/
    if ( !result ) /*0x4a3703*/
    {
      v6 = dword_8A0E04; /*0x4a3709*/
      dword_89F970 = v2; /*0x4a370f*/
LABEL_13:
      if ( dword_8A0E0C ) /*0x4a371c*/
        v10 = *(_DWORD *)&dword_8A0E0C[116]; /*0x4a371e*/
      else
        v10 = *(_DWORD *)&v6->__pad_5C[24]; /*0x4a3723*/
      result = (*(int (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v10 + 12))(v10, g_DrawColorState, &a2); /*0x4a3735*/
      if ( !result ) /*0x4a373a*/
      {
        result = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 1, a2); /*0x4a374f*/
        if ( !result ) /*0x4a3754*/
        {
          result = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 7, 1); /*0x4a3766*/
          if ( !result ) /*0x4a376b*/
          {
            result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)g_DrawColorState + 92))( /*0x4a377d*/
                       g_DrawColorState,
                       14,
                       0);
            if ( !result ) /*0x4a3782*/
            {
              v11 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 17, 2); /*0x4a3797*/
              v12 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 19, 2) /*0x4a37a8*/
                  | v11;
              v13 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 20, 2) /*0x4a37b9*/
                  | v12;
              v14 = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)g_DrawColorState + 92))( /*0x4a37ca*/
                      g_DrawColorState,
                      29,
                      0)
                  | v13;
              v15 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 27, 1) /*0x4a37db*/
                  | v14;
              v16 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 22, 1) /*0x4a37ec*/
                  | v15;
              if ( v16 ) /*0x4a37ee*/
              {
                return v16; /*0x4a37f0*/
              }
              else
              {
                for ( i = 0; i < v18; v3 = (ObjectClass *)((char *)v3 + 96) ) /*0x4a3801*/
                {
                  v16 = (*(int (__stdcall **)(_DWORD, int, int, ObjectClass *, int, _DWORD))(*(_DWORD *)g_DrawColorState /*0x4a3817*/
                                                                                           + 116))(
                          g_DrawColorState,
                          4,
                          3,
                          v3,
                          3,
                          0);
                  if ( v16 ) /*0x4a381b*/
                    break; /*0x4a381b*/
                  ++i; /*0x4a3821*/
                }
                return v16; /*0x4a3829*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x4a37f2*/
}



// ==== 0x004A3840  StructTable::Append  this=StructTable  sig=csp ====
int __thiscall StructTable::Append(StructTable *this, const void *a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 24576); /*0x4a3842*/
  if ( v3 == 1024 ) /*0x4a384e*/
    return 1; /*0x4a3850*/
  qmemcpy(this + 24 * v3, a2, 0x60u); /*0x4a386b*/
  ++*((_DWORD *)this + 24576); /*0x4a3876*/
  return 0; /*0x4a3855*/
}



// ==== 0x004A3890  CCFileClass::ReadEntireFile  this=CCFileClass  sig=csp ====
void *__thiscall CCFileClass::ReadEntireFile(CCFileClass *this)
{
  void *v2; // edi
  size_t v3; // ebx

  v2 = 0; /*0x4a3895*/
  if ( (*(unsigned __int8 (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)this->CDFileClass + 20))(this, 0) ) /*0x4a389a*/
  {
    v3 = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 44))(this); /*0x4a38a8*/
    v2 = (void *)__2_YAPAXI_Z(v3); /*0x4a38b0*/
    if ( v2 ) /*0x4a38b7*/
      (*(void (__thiscall **)(CCFileClass *, void *, size_t))(*(_DWORD *)this->CDFileClass + 36))(this, v2, v3); /*0x4a38bf*/
  }
  return v2; /*0x4a38c4*/
}



// ==== 0x004A38D0  LoadFileSHP  this=ScenarioClass  sig=csp ====
void *__fastcall LoadFileSHP(char *Source, bool *a2)
{
  void *result; // eax
  int v5; // esi
  size_t v6; // edi
  bool v7; // zf
  CCFileClass v8; // [esp+Ch] [ebp-6Ch] BYREF
  int v9[5]; // [esp+64h] [ebp-14h] BYREF

  *a2 = 0; /*0x4a38db*/
  result = (void *)SearchMIXFile(Source, 0); /*0x4a38de*/
  if ( !result ) /*0x4a38e5*/
  {
    CCFileClass::Construct(&v8, Source); /*0x4a38ed*/
    v5 = 0; /*0x4a38f2*/
    if ( (*(unsigned __int8 (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v8.CDFileClass + 20))(&v8, 0) ) /*0x4a38fd*/
    {
      v6 = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)v8.CDFileClass + 44))(&v8); /*0x4a390f*/
      v5 = __2_YAPAXI_Z(v6); /*0x4a3917*/
      v7 = v5 == 0; /*0x4a391c*/
      if ( !v5 ) /*0x4a391e*/
      {
LABEL_6:
        *a2 = !v7; /*0x4a392f*/
        *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x4a3938*/
        v9[3] = 0; /*0x4a3940*/
        Vector::Clear((int)v9); /*0x4a3948*/
        *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x4a3951*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x4a3959*/
        return (void *)v5; /*0x4a395e*/
      }
      (*(void (__thiscall **)(CCFileClass *, int, size_t))(*(_DWORD *)v8.CDFileClass + 36))(&v8, v5, v6); /*0x4a392a*/
    }
    v7 = v5 == 0; /*0x4a392d*/
    goto LABEL_6; /*0x4a392d*/
  }
  return result; /*0x4a3961*/
}



// ==== 0x004A3970  LoadFileClassToBuffer  this=MSShapeAnim  sig=csp ====
int __fastcall FileClass_LoadToBuffer(char **a1, bool *a2)
{
  char *v3; // esi
  int result; // eax
  void *v5; // esi
  size_t v6; // ebx
  bool v7; // zf
  _DWORD v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v9[5]; // [esp+64h] [ebp-14h] BYREF

  v3 = String::GetOrEmpty_Alt(a1); /*0x4a397c*/
  *a2 = 0; /*0x4a3982*/
  result = SearchMIXFile(v3, 0); /*0x4a3985*/
  if ( !result ) /*0x4a398c*/
  {
    CCFileClass::Construct(v8, v3); /*0x4a3994*/
    v5 = 0; /*0x4a3999*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v8[0] + 20))(v8, 0) ) /*0x4a39a4*/
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(v8[0] + 44))(v8); /*0x4a39b6*/
      v5 = __2_YAPAXI_Z(v6); /*0x4a39be*/
      v7 = v5 == 0; /*0x4a39c3*/
      if ( !v5 ) /*0x4a39c5*/
      {
LABEL_6:
        *a2 = !v7; /*0x4a39d6*/
        v8[0] = &CCFileClass::`vftable'; /*0x4a39df*/
        v9[3] = 0; /*0x4a39e7*/
        Vector::Clear((int)v9); /*0x4a39ef*/
        v8[0] = &off_7E1668; /*0x4a39f8*/
        BufferIOFileClass::Dtor(v8); /*0x4a3a00*/
        return (int)v5; /*0x4a3a05*/
      }
      (*(void (__thiscall **)(_DWORD *, void *, size_t))(v8[0] + 36))(v8, v5, v6); /*0x4a39d1*/
    }
    v7 = v5 == 0; /*0x4a39d4*/
    goto LABEL_6; /*0x4a39d4*/
  }
  return result; /*0x4a3a08*/
}



// ==== 0x004A3A10  sub_4A3A10  this=-  sig=ida-proto ====
int __fastcall sub_4A3A10(int *a1, void **a2, void **a3, int a4)
{
  int v6; // edx
  char *v7; // edi
  int v8; // ebp
  int result; // eax
  size_t v10; // eax
  int v11; // edx
  size_t v12; // [esp+24h] [ebp-14h] BYREF
  void *v13; // [esp+28h] [ebp-10h]
  _TBYTE Src; // [esp+2Ch] [ebp-Ch] BYREF

  v6 = *a1; /*0x4a3a21*/
  v7 = (char *)*a2; /*0x4a3a23*/
  v13 = *a3; /*0x4a3a25*/
  v8 = 0; /*0x4a3a2b*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(v6 + 24))(a1) ) /*0x4a3a2d*/
  {
    result = (*(int (__thiscall **)(int *, int))(*a1 + 28))(a1, 1); /*0x4a3a3a*/
    if ( !result ) /*0x4a3a3f*/
      return result; /*0x4a3a3f*/
    v8 = 1; /*0x4a3a4b*/
  }
  (*(void (__thiscall **)(int *, size_t *, int))(*a1 + 36))(a1, &v12, 2); /*0x4a3a5b*/
  (*(void (__thiscall **)(int *, _TBYTE *, int))(*a1 + 36))(a1, &Src, 8); /*0x4a3a69*/
  v10 = v12 + 65528; /*0x4a3a75*/
  v12 += 65528; /*0x4a3a7d*/
  if ( WORD3(Src) ) /*0x4a3a81*/
  {
    v11 = *a1; /*0x4a3a89*/
    v12 = v10 - *(_DWORD *)((char *)&Src + 6); /*0x4a3a8b*/
    if ( a4 ) /*0x4a3a95*/
      (*(void (__thiscall **)(int *, int, _DWORD))(v11 + 36))(a1, a4, SWORD3(Src)); /*0x4a3a9e*/
    else
      (*(void (__thiscall **)(int *, _DWORD, int))(v11 + 40))(a1, SWORD3(Src), 1); /*0x4a3aab*/
    LOWORD(v10) = v12; /*0x4a3aae*/
    WORD3(Src) = 0; /*0x4a3ab2*/
  }
  if ( *a2 == *a3 ) /*0x4a3ac1*/
    v7 = (char *)a2[1] + (_DWORD)v7 - (unsigned __int16)v10 - 8; /*0x4a3acd*/
  memcpy(v7, &Src, 8u); /*0x4a3ad9*/
  (*(void (__thiscall **)(int *, char *, _DWORD))(*a1 + 36))(a1, v7 + 8, (unsigned __int16)v12); /*0x4a3af4*/
  v12 = sub_5584F0(v7, v13); /*0x4a3b04*/
  if ( v8 ) /*0x4a3b08*/
    (*(void (__thiscall **)(int *))(*a1 + 52))(a1); /*0x4a3b0e*/
  return (unsigned __int16)v12; /*0x4a3a41*/
}



// ==== 0x004A3B30  ReturnNull  this=-  sig=ida-proto ====
int ReturnNull()
{
  return 0; /*0x4a3b32*/
}



// ==== 0x004A3B40  FindResource  this=-  sig=csp ====
int __fastcall FindResource(unsigned __int16 a1, const CHAR *a2)
{
  int result; // eax

  result = (int)FindResourceA(hLibModule, (LPCSTR)a1, a2); /*0x4a3b4e*/
  if ( result ) /*0x4a3b56*/
  {
    result = (int)LoadResource(hLibModule, (HRSRC)result); /*0x4a3b61*/
    if ( result ) /*0x4a3b69*/
      return (int)LockResource((HGLOBAL)result); /*0x4a3b6d*/
  }
  return result; /*0x4a3b58*/
}



// ==== 0x004A3BF0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_3  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_3(std::codecvt_base *this)
{
  return 1; /*0x4a3bf2*/
}



// ==== 0x004A3C00  CreditsScreen::Init  this=CreditsScreen  sig=csp ====
void __thiscall CreditsScreen::Init(CreditsScreen *this)
{
  *this = 0; /*0x4a3c00*/
}



// ==== 0x004A3C10  sub_4A3C10  this=-  sig=ida-proto ====
int sub_4A3C10()
{
  dword_89F980 = 0; /*0x4a3c12*/
  dword_89F984 = 0; /*0x4a3c17*/
  dword_89F988 = 0; /*0x4a3c1c*/
  dword_89F98C = 0; /*0x4a3c21*/
  return 0; /*0x4a3c26*/
}



// ==== 0x004A3C30  FadePalette  this=Block  sig=csp ====
int __fastcall Palette_Fade(const void *a1, signed int a2, void (*a3)(void))
{
  int result; // eax
  _BYTE *v6; // eax
  int v7; // ecx
  DWORD v8; // edx
  signed int v9; // esi
  DWORD v10; // eax
  signed int v11; // eax
  signed int v12; // esi
  signed int v13; // eax
  int v14; // eax
  signed int v15; // esi
  signed int v16; // eax
  int v17; // edi
  signed int v18; // esi
  DWORD v19; // eax
  signed int v20; // eax
  DWORD Ticks; // [esp+8h] [ebp-910h]
  signed int v22; // [esp+10h] [ebp-908h]
  _BYTE v24[768]; // [esp+18h] [ebp-900h] BYREF
  _BYTE Src[768]; // [esp+318h] [ebp-600h] BYREF
  _BYTE v26[768]; // [esp+618h] [ebp-300h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Primary + 112))(g_DSurface_Primary); /*0x4a3c48*/
  if ( result == 1 ) /*0x4a3c4e*/
  {
    Ticks = Timer::GetTicks(); /*0x4a3c5f*/
    v22 = a2; /*0x4a3c63*/
    v6 = &v24[2]; /*0x4a3c67*/
    v7 = 256; /*0x4a3c6b*/
    do /*0x4a3c7e*/
    {
      *(v6 - 2) = 0; /*0x4a3c72*/
      *(v6 - 1) = 0; /*0x4a3c75*/
      *v6 = 0; /*0x4a3c78*/
      v6 += 3; /*0x4a3c7a*/
      --v7; /*0x4a3c7d*/
    }
    while ( v7 ); /*0x4a3c7e*/
    v8 = Ticks; /*0x4a3c80*/
    qmemcpy(v24, &unk_89F990, sizeof(v24)); /*0x4a3c92*/
    qmemcpy(v26, a1, sizeof(v26)); /*0x4a3ca9*/
    while ( 1 ) /*0x4a3cab*/
    {
      v9 = v22; /*0x4a3cab*/
      if ( v8 != -1 ) /*0x4a3cb2*/
      {
        v10 = Timer::GetTicks(); /*0x4a3cb8*/
        v8 = Ticks; /*0x4a3cbd*/
        v11 = v10 - Ticks; /*0x4a3cc1*/
        if ( v11 >= v22 ) /*0x4a3cc5*/
          return Surface::CreateSurfacePalette(v26); /*0x4a3cc5*/
        v9 = v22 - v11; /*0x4a3ccb*/
      }
      if ( !v9 ) /*0x4a3ccf*/
        return Surface::CreateSurfacePalette(v26); /*0x4a3daf*/
      qmemcpy(Src, v24, sizeof(Src)); /*0x4a3ce8*/
      v12 = v22; /*0x4a3cea*/
      if ( v8 != -1 ) /*0x4a3cee*/
      {
        v13 = Timer::GetTicks() - Ticks; /*0x4a3cf9*/
        if ( v13 >= v22 ) /*0x4a3cff*/
          v12 = 0; /*0x4a3d05*/
        else
          v12 = v22 - v13; /*0x4a3d01*/
      }
      v14 = ((a2 - v12) << 8) / a2; /*0x4a3d13*/
      if ( v14 >= 255 ) /*0x4a3d1a*/
        v14 = 255; /*0x4a3d1c*/
      Render_Helper(v14, v26); /*0x4a3d31*/
      v15 = v22; /*0x4a3d36*/
      if ( Ticks == -1 ) /*0x4a3d3f*/
        goto LABEL_18; /*0x4a3d3f*/
      v16 = Timer::GetTicks() - Ticks; /*0x4a3d4a*/
      if ( v16 < v22 ) /*0x4a3d50*/
        break; /*0x4a3d50*/
      v17 = 0; /*0x4a3d8c*/
LABEL_19:
      Surface::CreateSurfacePalette(Src); /*0x4a3d56*/
      if ( a3 ) /*0x4a3d64*/
LABEL_20:
        a3(); /*0x4a3d66*/
      v8 = Ticks; /*0x4a3d68*/
      while ( 1 ) /*0x4a3d6c*/
      {
        v18 = v22; /*0x4a3d6c*/
        if ( v8 != -1 ) /*0x4a3d73*/
        {
          v19 = Timer::GetTicks(); /*0x4a3d79*/
          v8 = Ticks; /*0x4a3d7e*/
          v20 = v19 - Ticks; /*0x4a3d82*/
          if ( v20 >= v22 ) /*0x4a3d86*/
            v18 = 0; /*0x4a3d90*/
          else
            v18 = v22 - v20; /*0x4a3d88*/
        }
        if ( v18 != v17 || !v17 ) /*0x4a3d9c*/
          break; /*0x4a3d9c*/
        if ( a3 ) /*0x4a3da4*/
          goto LABEL_20; /*0x4a3da4*/
      }
    }
    v15 = v22 - v16; /*0x4a3d52*/
LABEL_18:
    v17 = v15; /*0x4a3d54*/
    goto LABEL_19; /*0x4a3d54*/
  }
  return result; /*0x4a3db6*/
}



// ==== 0x004A3DD0  DDraw::LogError  this=DDraw  sig=ida-proto ====
int __fastcall sub_4A3DD0(UINT uType, int a2)
{
  int result; // eax
  CHAR Text[80]; // [esp+0h] [ebp-50h] BYREF

  if ( uType ) /*0x4a3dd5*/
  {
    if ( g_DDraw_ErrorCallback ) /*0x4a3dfd*/
    {
      return g_DDraw_ErrorCallback(uType); /*0x4a3dff*/
    }
    else
    {
      sprintf(Text, "DDRAW.DLL Error code = %08X", uType); /*0x4a3e10*/
      return MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a3e2a*/
    }
  }
  else if ( a2 ) /*0x4a3dd9*/
  {
    return MessageBoxA(g_hWnd, ::Text, Caption, 0); /*0x4a3dec*/
  }
  return result; /*0x4a3df2*/
}



// ==== 0x004A3E40  DDraw::CapabilityCheck  this=DDraw  sig=ida-proto ====
int DDraw_CapabilityCheck()
{
  const char *v0; // eax
  int v2; // [esp+8h] [ebp-44h] BYREF
  int v3; // [esp+Ch] [ebp-40h]
  int v4; // [esp+10h] [ebp-3Ch]
  int v5; // [esp+14h] [ebp-38h]
  _DWORD v6[4]; // [esp+18h] [ebp-34h] BYREF
  int v7[9]; // [esp+28h] [ebp-24h] BYREF

  DSurface::Construct((char *)v7, 64, 64, 0, 0); /*0x4a3e51*/
  Debug::Log(aCheckingHardwa); /*0x4a3e5b*/
  byte_8205D4 = 1; /*0x4a3e67*/
  XSurface::Fill(v7, 0); /*0x4a3e6f*/
  v2 = 5; /*0x4a3e82*/
  v3 = 5; /*0x4a3e86*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3e8a*/
  {
    byte_8205D4 = 0; /*0x4a3e93*/
  }
  else
  {
    XSurface::Fill(v7, 1); /*0x4a3ea1*/
    v2 = 5; /*0x4a3eaf*/
    v3 = 5; /*0x4a3eb3*/
    if ( XSurface::GetPixel(v7, &v2) == 1 ) /*0x4a3ebf*/
    {
      v0 = g_INI_Key_OK; /*0x4a3ed0*/
      if ( byte_8205D4 ) /*0x4a3ed5*/
        goto LABEL_7; /*0x4a3ed5*/
    }
    else
    {
      byte_8205D4 = 0; /*0x4a3ec1*/
    }
  }
  v0 = aFailed_1; /*0x4a3ed7*/
LABEL_7:
  Debug::Log_0("%s\n", v0); /*0x4a3edc*/
  Debug::Log(aCheckingOverla); /*0x4a3eec*/
  byte_8205D5 = 1; /*0x4a3ef8*/
  XSurface::Fill(v7, 0); /*0x4a3f00*/
  v2 = 0; /*0x4a3f13*/
  v3 = 0; /*0x4a3f17*/
  XSurface::SetPixel(v7, &v2, 255); /*0x4a3f1b*/
  v5 = 63; /*0x4a3f29*/
  v6[3] = 63; /*0x4a3f2d*/
  v2 = 0; /*0x4a3f42*/
  v3 = 0; /*0x4a3f46*/
  v4 = 64; /*0x4a3f4a*/
  v6[0] = 0; /*0x4a3f52*/
  v6[1] = 1; /*0x4a3f56*/
  v6[2] = 64; /*0x4a3f5e*/
  DSurface::BlitPart(v7, (int)v6, (int)v7, (int)&v2, 0, 0); /*0x4a3f66*/
  v2 = 0; /*0x4a3f74*/
  v3 = 5; /*0x4a3f78*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3f7c*/
  {
    Debug::Log_0(aFailed_2); /*0x4a3f8a*/
    byte_8205D5 = 0; /*0x4a3f96*/
  }
  else
  {
    Debug::Log_0(aOk_1); /*0x4a3fac*/
  }
  return DSurface::Destroy(v7); /*0x4a3fa1*/
}



// ==== 0x004A3FD0  ObjectClass::method_4A3FD0  this=ObjectClass  sig=csp ====
void sub_4A3FD0(ObjectClass *this)
{
  int v1; // eax
  struct IDirectDrawVtbl *lpVtbl; // ecx
  int v3; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-50h] BYREF

  Debug::Log(); /*0x4a3fd8*/
  if ( !g_lpDirectDraw7 ) /*0x4a3fe7*/
  {
    v1 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a3ff2*/
    if ( v1 ) /*0x4a3ff9*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4003*/
      {
        g_DDraw_ErrorCallback(v1); /*0x4a4007*/
        Debug::Log(); /*0x4a400e*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v1); /*0x4a4025*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4040*/
        Debug::Log(); /*0x4a404b*/
      }
    }
    else
    {
      lpVtbl = g_lpDirectDraw7->lpVtbl; /*0x4a4063*/
      if ( g_DDraw_Initialized ) /*0x4a4065*/
        v3 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 8); /*0x4a4069*/
      else
        v3 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 17); /*0x4a4075*/
      if ( v3 ) /*0x4a407a*/
      {
        if ( g_DDraw_ErrorCallback ) /*0x4a4084*/
        {
          g_DDraw_ErrorCallback(v3); /*0x4a4088*/
        }
        else
        {
          sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a4099*/
          MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a40b4*/
        }
      }
    }
  }
}



// ==== 0x004A40C0  ObjectClass::method_4A40C0  this=ObjectClass  sig=csp ====
int sub_4A40C0(ObjectClass *this)
{
  int result; // eax
  CHAR Text[80]; // [esp+4h] [ebp-50h] BYREF

  result = (int)g_lpDirectDraw7; /*0x4a40c0*/
  if ( g_lpDirectDraw7 ) /*0x4a40ca*/
  {
    result = g_lpDirectDraw7->lpVtbl->Release(g_lpDirectDraw7); /*0x4a40cf*/
    if ( result ) /*0x4a40d4*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a40de*/
      {
        result = g_DDraw_ErrorCallback(result); /*0x4a40e2*/
        g_lpDirectDraw7 = 0; /*0x4a40e4*/
        return result; /*0x4a40f1*/
      }
      sprintf(Text, "DDRAW.DLL Error code = %08X", result); /*0x4a40fd*/
      result = MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4118*/
    }
    g_lpDirectDraw7 = 0; /*0x4a411e*/
  }
  return result; /*0x4a40ee*/
}



// ==== 0x004A4130  ObjectClass::method_4A4130  this=ObjectClass  sig=csp ====
unsigned int sub_4A4130(ObjectClass *this)
{
  LPDIRECTDRAW v1; // eax
  char v2; // bl
  int v3; // eax
  unsigned int v4; // esi
  int v5; // esi
  int v6; // eax
  _DWORD v8[27]; // [esp+Ch] [ebp-1F8h] BYREF
  CHAR Text[80]; // [esp+78h] [ebp-18Ch] BYREF
  _DWORD v10[79]; // [esp+C8h] [ebp-13Ch] BYREF

  v1 = g_lpDirectDraw7; /*0x4a4130*/
  v2 = 0; /*0x4a413c*/
  if ( !g_lpDirectDraw7 ) /*0x4a4148*/
  {
    v3 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a4153*/
    if ( v3 ) /*0x4a415a*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4168*/
      {
        g_DDraw_ErrorCallback(v3); /*0x4a4170*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a427b*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4296*/
      }
      v1 = 0; /*0x4a4172*/
      g_lpDirectDraw7 = 0; /*0x4a4174*/
    }
    else
    {
      v1 = g_lpDirectDraw7; /*0x4a429d*/
      v2 = 1; /*0x4a42a2*/
    }
  }
  v4 = 0; /*0x4a4179*/
  if ( v1 ) /*0x4a417d*/
  {
    v10[0] = 316; /*0x4a418a*/
    if ( !v1->lpVtbl->GetCaps(v1, (LPDDCAPS)v10, 0) ) /*0x4a419a*/
    {
      v5 = v10[15]; /*0x4a41af*/
      Debug::Log(); /*0x4a41bb*/
      memset(v8, 0, sizeof(v8)); /*0x4a41ce*/
      v8[0] = 108; /*0x4a41d9*/
      if ( !g_lpDirectDraw7->lpVtbl->GetDisplayMode(g_lpDirectDraw7, (LPDDSURFACEDESC)v8) ) /*0x4a41e5*/
      {
        Debug::Log(); /*0x4a4206*/
        v5 += v8[2] * v8[3] * (v8[21] >> 3); /*0x4a421f*/
      }
      v4 = (v5 + 0x20000) & 0xFFF00000; /*0x4a4227*/
      Debug::Log(); /*0x4a4239*/
    }
    v1 = g_lpDirectDraw7; /*0x4a4241*/
  }
  if ( v2 && v1 ) /*0x4a4250*/
  {
    v6 = v1->lpVtbl->Release(v1); /*0x4a4259*/
    if ( v6 ) /*0x4a425e*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4268*/
      {
        g_DDraw_ErrorCallback(v6); /*0x4a426c*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v6); /*0x4a42b4*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a42cf*/
      }
    }
    g_lpDirectDraw7 = 0; /*0x4a42d1*/
  }
  return v4; /*0x4a42dd*/
}



// ==== 0x004A42F0  InitializeDDraw  this=ObjectClass  sig=csp ====
char __fastcall DDraw_Initialize(int a1, DWORD a2, DWORD a3, DWORD a4)
{
  HRESULT v5; // eax
  struct IDirectDrawVtbl *lpVtbl; // ecx
  int v8; // eax
  HRESULT v9; // eax
  CHAR Text[80]; // [esp+24h] [ebp-50h] BYREF

  Debug::Log(aPrepDirectDraw); /*0x4a42fe*/
  if ( !g_lpDirectDraw7 ) /*0x4a4313*/
  {
    v5 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a431e*/
    if ( v5 ) /*0x4a4325*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4333*/
      {
        g_DDraw_ErrorCallback(v5); /*0x4a4337*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v5); /*0x4a4398*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a43b3*/
      }
      Debug::Log(g_Str_DirectDrawCreate_failed_); /*0x4a433e*/
    }
    else
    {
      lpVtbl = g_lpDirectDraw7->lpVtbl; /*0x4a43c3*/
      if ( g_DDraw_Initialized ) /*0x4a43c5*/
        v8 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 8); /*0x4a43c9*/
      else
        v8 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 17); /*0x4a43d5*/
      if ( v8 ) /*0x4a43da*/
      {
        if ( g_DDraw_ErrorCallback ) /*0x4a43e8*/
        {
          g_DDraw_ErrorCallback(v8); /*0x4a43ec*/
        }
        else
        {
          sprintf(Text, "DDRAW.DLL Error code = %08X", v8); /*0x4a43fe*/
          MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4419*/
        }
      }
    }
  }
  Debug::Log("SetDisplayMode: %dx%dx%d\n", a2, a3, a4);
  if ( g_lpDirectDraw7->lpVtbl->SetDisplayMode(g_lpDirectDraw7, a2, a3, a4) ) /*0x4a4369*/
  {
    Debug::Log(aSetdisplaymode_0); /*0x4a4379*/
    return 0; /*0x4a4381*/
  }
  else
  {
    g_DisplayWidth = a2; /*0x4a4423*/
    MEMORY[0x8A00A8] = a3; /*0x4a4429*/
    g_DisplayBPP = a4; /*0x4a442f*/
    if ( a4 == 8 /*0x4a4463*/
      && (Debug::Log(aCreatepalette),
          (v9 = g_lpDirectDraw7->lpVtbl->CreatePalette(
                  g_lpDirectDraw7,
                  68,
                  (LPPALETTEENTRY)&g_DDraw_PaletteEntries,
                  (LPDIRECTDRAWPALETTE *)&g_DDraw_Palette,
                  0)) != 0) )
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a446d*/
      {
        g_DDraw_ErrorCallback(v9); /*0x4a4471*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v9); /*0x4a4497*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a44b2*/
      }
      Debug::Log(aCreatepaletteF); /*0x4a4478*/
      return 0; /*0x4a4480*/
    }
    else
    {
      DDraw::CapabilityCheck(); /*0x4a44cd*/
      Debug::Log(aDisplayModeSet); /*0x4a44d7*/
      return 1; /*0x4a44df*/
    }
  }
}



// ==== 0x004A44F0  ObjectClass::method_4A44F0  this=ObjectClass  sig=csp ====
LPDIRECTDRAW __usercall sub_4A44F0@<eax>(ObjectClass *this)
{
  int v1; // esi
  LPDIRECTDRAW result; // eax
  int v3; // eax
  CHAR Buffer[4]; // [esp+8h] [ebp-50h] BYREF
  CHAR Text[76]; // [esp+Ch] [ebp-4Ch] BYREF

  result = g_lpDirectDraw7; /*0x4a44f0*/
  if ( g_lpDirectDraw7 ) /*0x4a44fd*/
  {
    v3 = ((int (__stdcall *)(LPDIRECTDRAW, int))g_lpDirectDraw7->lpVtbl->RestoreDisplayMode)(g_lpDirectDraw7, v1); /*0x4a4507*/
    if ( v3 ) /*0x4a4512*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a451c*/
      {
        g_DDraw_ErrorCallback(v3); /*0x4a4520*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a452f*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a454a*/
      }
    }
    *(_QWORD *)&g_DisplayWidth = 0; /*0x4a4551*/
    g_DisplayBPP = 0; /*0x4a455d*/
    result = (LPDIRECTDRAW)((int (__cdecl *)(LPDIRECTDRAW))g_lpDirectDraw7->lpVtbl->Release)(g_lpDirectDraw7); /*0x4a4566*/
    if ( result ) /*0x4a456b*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4575*/
      {
        result = (LPDIRECTDRAW)g_DDraw_ErrorCallback(result); /*0x4a4579*/
        g_lpDirectDraw7 = 0; /*0x4a457b*/
        return result; /*0x4a4586*/
      }
      sprintf(Buffer, "DDRAW.DLL Error code = %08X", result); /*0x4a4592*/
      result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a45ad*/
    }
    g_lpDirectDraw7 = 0; /*0x4a45af*/
  }
  return result; /*0x4a4582*/
}



// ==== 0x004A45C0  ObjectClass::method_4A45C0  this=ObjectClass  sig=csp ====
int sub_4A45C0(ObjectClass *this)
{
  int v2[16]; // [esp+0h] [ebp-23Ch] BYREF
  int v3; // [esp+40h] [ebp-1FCh]
  char Buffer[256]; // [esp+13Ch] [ebp-100h] BYREF

  if ( !g_lpDirectDraw7 ) /*0x4a45cd*/
    return 0; /*0x4a45cd*/
  v2[0] = 316; /*0x4a45d3*/
  if ( g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v2, 0) ) /*0x4a45e1*/
    return 0; /*0x4a460d*/
  sprintf(Buffer, "In Get_Free_Video_Memory. About to return %d bytes", v3); /*0x4a45fa*/
  return v3; /*0x4a4606*/
}



// ==== 0x004A4620  DDraw::CheckCapabilities  this=DDraw  sig=ida-proto ====
char sub_4A4620()
{
  int v0; // eax
  HRESULT v1; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-18Ch] BYREF
  _DWORD v4[79]; // [esp+5Ch] [ebp-13Ch] BYREF

  if ( g_lpDirectDraw7 ) /*0x4a462e*/
  {
    memset(v4, 0, sizeof(v4)); /*0x4a4645*/
    v4[0] = 316; /*0x4a464b*/
    v1 = g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v4, 0); /*0x4a4659*/
    if ( v1 ) /*0x4a465f*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4669*/
      {
        g_DDraw_ErrorCallback(v1); /*0x4a466d*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v1); /*0x4a4683*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a469e*/
      }
      LOBYTE(v0) = 0; /*0x4a466f*/
    }
    else
    {
      v0 = (v4[1] & 0x40) != 0; /*0x4a46b8*/
      if ( SLOBYTE(v4[1]) < 0 ) /*0x4a46c0*/
        LOBYTE(v0) = v0 | 2; /*0x4a46c2*/
      if ( (v4[1] & 0x10000) != 0 ) /*0x4a46ca*/
        LOBYTE(v0) = v0 | 4; /*0x4a46cc*/
      if ( (v4[1] & 0x8000000) != 0 ) /*0x4a46d4*/
        LOBYTE(v0) = v0 | 8; /*0x4a46d6*/
      if ( (v4[1] & 0x4000000) != 0 ) /*0x4a46de*/
        LOBYTE(v0) = v0 | 0x10; /*0x4a46e0*/
      if ( (v4[1] & 0x2000000) != 0 ) /*0x4a46e8*/
        LOBYTE(v0) = v0 | 0x20; /*0x4a46ea*/
      if ( (v4[1] & 0x200) != 0 ) /*0x4a46ef*/
        LOBYTE(v0) = v0 | 0x40; /*0x4a46f1*/
    }
  }
  else
  {
    LOBYTE(v0) = 0; /*0x4a4630*/
  }
  return v0; /*0x4a4632*/
}



// ==== 0x004A4700  ObjectClass::method_4A4700  this=ObjectClass  sig=csp ====
char sub_4A4700(ObjectClass *this)
{
  HRESULT v1; // eax
  char Buffer[80]; // [esp+Ch] [ebp-50h] BYREF

  LOBYTE(v1) = byte_81FC6C; /*0x4a4700*/
  if ( byte_81FC6C ) /*0x4a470a*/
  {
    v1 = g_lpDirectDraw7->lpVtbl->WaitForVerticalBlank(g_lpDirectDraw7, 1, 0); /*0x4a4718*/
    if ( v1 == -2147467263 ) /*0x4a4720*/
    {
      byte_81FC6C = 0; /*0x4a4722*/
    }
    else if ( v1 ) /*0x4a472f*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4739*/
      {
        LOBYTE(v1) = g_DDraw_ErrorCallback(v1); /*0x4a473d*/
      }
      else
      {
        sprintf(Buffer, "DDRAW.DLL Error code = %08X", v1); /*0x4a474e*/
        LOBYTE(v1) = MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a4769*/
      }
    }
  }
  return v1; /*0x4a4729*/
}



// ==== 0x004A4780  Surface::CreateSurfacePalette  this=Surface  sig=csp ====
int __thiscall Surface::CreateSurfacePalette(Surface *this)
{
  int result; // eax
  int v3; // edi
  Surface *v4; // eax
  char *v5; // ecx
  int v6; // edx
  char *v7; // eax
  int v8; // ebx
  char v9; // [esp+8h] [ebp-4h]

  if ( this != (Surface *)&unk_89F990 ) /*0x4a478b*/
    memcpy(&unk_89F990, this, 0x300u); /*0x4a4798*/
  result = (int)g_lpDirectDraw7; /*0x4a47a0*/
  if ( g_lpDirectDraw7 ) /*0x4a47a7*/
  {
    v3 = g_DDraw_PrimarySurface; /*0x4a47a9*/
    if ( g_DDraw_PrimarySurface ) /*0x4a47b1*/
    {
      v4 = this; /*0x4a47b4*/
      v5 = (char *)&unk_89FC95; /*0x4a47b6*/
      do /*0x4a47e5*/
      {
        v6 = (unsigned __int8)v4->__pad_0[0]; /*0x4a47bf*/
        v9 = v4->__pad_0[1]; /*0x4a47c5*/
        v7 = &v4->__pad_0[2]; /*0x4a47c9*/
        v5 += 4; /*0x4a47cc*/
        v8 = (unsigned __int8)*v7; /*0x4a47cf*/
        *(v5 - 5) = v6; /*0x4a47d1*/
        v4 = (Surface *)(v7 + 1); /*0x4a47d8*/
        *(v5 - 4) = v9; /*0x4a47d9*/
        *(v5 - 3) = v8; /*0x4a47dc*/
      }
      while ( (int)v5 < 9044117 ); /*0x4a47e5*/
      result = g_DDraw_Palette; /*0x4a47e7*/
      if ( g_DDraw_Palette ) /*0x4a47ef*/
      {
        if ( !byte_8A0098 ) /*0x4a47f9*/
        {
          (*(void (__stdcall **)(int, int))(*(_DWORD *)v3 + 124))(v3, g_DDraw_Palette); /*0x4a47ff*/
          result = g_DDraw_Palette; /*0x4a4802*/
          byte_8A0098 = 1; /*0x4a4807*/
        }
        return (*(int (__stdcall **)(int, _DWORD, _DWORD, int, void *))(*(_DWORD *)result + 24))( /*0x4a481f*/
                 result,
                 0,
                 0,
                 256,
                 &g_DDraw_PaletteEntries);
      }
    }
  }
  return result; /*0x4a4822*/
}



// ==== 0x004A4830  DDraw::WaitForIdle  this=DDraw  sig=csp ====
int DDraw::WaitForIdle(DDraw *this)
{
  int result; // eax

  do /*0x4a4846*/
    result = (*(int (__stdcall **)(int, int))(*(_DWORD *)g_DDraw_PrimarySurface + 52))(g_DDraw_PrimarySurface, 2); /*0x4a483a*/
  while ( result && result != -2005532222 ); /*0x4a4846*/
  return result; /*0x4a4848*/
}



// ==== 0x004A4850  sub_4A4850  this=-  sig=csp ====
int __stdcall sub_4A4850(const void *a1, int a2)
{
  void *v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx

  v2 = __2_YAPAXI_Z(0x6Cu); /*0x4a485e*/
  qmemcpy(v2, a1, 0x6Cu); /*0x4a4867*/
  v3 = *(_DWORD *)(a2 + 8); /*0x4a4870*/
  if ( *(_DWORD *)(a2 + 16) < v3 /*0x4a4895*/
    || (*(_BYTE *)(a2 + 13) || !v3)
    && (v4 = *(_DWORD *)(a2 + 20), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v3 + v4, 0) )
  {
    v5 = *(_DWORD *)(a2 + 16); /*0x4a489c*/
    v6 = *(_DWORD *)(a2 + 4); /*0x4a489f*/
    *(_DWORD *)(a2 + 16) = v5 + 1; /*0x4a48a5*/
    *(_DWORD *)(v6 + 4 * v5) = v2; /*0x4a48a8*/
  }
  return 1; /*0x4a48ab*/
}



// ==== 0x004A48C0  sub_4A48C0  this=-  sig=ida-proto ====
int __cdecl sub_4A48C0(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edx

  v2 = a1[1]; /*0x4a48cb*/
  v3 = a2[1]; /*0x4a48d0*/
  if ( *a2 > *a1 ) /*0x4a48d5*/
    return -1; /*0x4a48d7*/
  if ( *a2 < *a1 ) /*0x4a48dc*/
    return 1; /*0x4a48de*/
  if ( v2 >= v3 ) /*0x4a48e7*/
    return v3 < v2; /*0x4a48f2*/
  return -1; /*0x4a48da*/
}



// ==== 0x004A4900  sub_4A4900  this=-  sig=ida-proto ====
unsigned int *__fastcall sub_4A4900(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int *v5; // ebx
  unsigned int *v6; // esi
  int v7; // edi
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _DWORD *v11; // esi
  size_t NumOfElements; // [esp+14h] [ebp-24h]
  void **v16; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-Ch]
  int v19; // [esp+30h] [ebp-8h]
  int v20; // [esp+34h] [ebp-4h]

  if ( !g_lpDirectDraw7 ) /*0x4a4915*/
    return 0; /*0x4a4ab2*/
  sub_4A4E30(&v16, 0, 0); /*0x4a4923*/
  v16 = &DynamicVectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4937*/
  v20 = 10; /*0x4a493f*/
  v19 = 0; /*0x4a4947*/
  if ( g_lpDirectDraw7->lpVtbl->EnumDisplayModes(g_lpDirectDraw7, 0, 0, &v16, (LPDDENUMMODESCALLBACK)sub_4A4850) || !v19 ) /*0x4a4967*/
  {
    v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a93*/
    if ( Block && BYTE1(v18) ) /*0x4a4aa5*/
      __3_YAXPAX_Z(Block); /*0x4a4aa8*/
    return 0; /*0x4a4aa8*/
  }
  v5 = (unsigned int *)__2_YAPAXI_Z(8 * v19 + 4); /*0x4a497e*/
  v6 = v5; /*0x4a4990*/
  memset(v5, 0, 8 * v19 + 4); /*0x4a4995*/
  NumOfElements = 0; /*0x4a4999*/
  v7 = 0; /*0x4a49aa*/
  if ( v19 <= 0 ) /*0x4a49ae*/
    goto LABEL_13; /*0x4a49ae*/
  do /*0x4a4a12*/
  {
    v8 = (_DWORD *)*((_DWORD *)Block + v7); /*0x4a49b9*/
    v9 = v8[3]; /*0x4a49bc*/
    if ( v9 <= a3 ) /*0x4a49c1*/
    {
      v10 = v8[2]; /*0x4a49c3*/
      if ( v10 <= a4 && v9 >= a1 && v10 >= a2 && v8[21] == a5 ) /*0x4a49e3*/
      {
        *v6 = v9; /*0x4a49e5*/
        v11 = v6 + 1; /*0x4a49ea*/
        *v11 = v8[2]; /*0x4a49ed*/
        v6 = v11 + 1; /*0x4a49f3*/
        ++NumOfElements; /*0x4a49f7*/
      }
    }
    __3_YAXPAX_Z(*((void **)Block + v7++)); /*0x4a4a03*/
  }
  while ( v7 < v19 ); /*0x4a4a12*/
  if ( v6 == v5 ) /*0x4a4a17*/
  {
LABEL_13:
    __3_YAXPAX_Z(v5); /*0x4a4a1a*/
    v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a28*/
    if ( Block && BYTE1(v18) ) /*0x4a4a38*/
    {
      __3_YAXPAX_Z(Block); /*0x4a4a3b*/
      return 0; /*0x4a4a4b*/
    }
    return 0; /*0x4a4a38*/
  }
  qsort(v5, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4A48C0); /*0x4a4a5b*/
  v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a69*/
  if ( Block && BYTE1(v18) ) /*0x4a4a79*/
    __3_YAXPAX_Z(Block); /*0x4a4a7c*/
  return v5; /*0x4a4a45*/
}



// ==== 0x004A4AC0  Debug::Log_0  this=AbstractClass  sig=csp ====
void Debug::Log_0()
{
  ; /*0x4a4ac0*/
}



// ==== 0x004A4AD0  _DynamicVectorClass_PAU_DDSURFACEDESC::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall CStreamClass::ClearBuffer(_DynamicVectorClass_PAU_DDSURFACEDESC *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a4ad6*/
  this->m_10 = 0; /*0x4a4ad9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4a4ae0*/
  {
    __3_YAXPAX_Z(v2); /*0x4a4ae6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a4aee*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4af1*/
  this->m_8 = 0; /*0x4a4af4*/
}



// ==== 0x004A4B00  _DynamicVectorClass_PAU_DDSURFACEDESC::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall CStreamClass::PointerToIndex(_DynamicVectorClass_PAU_DDSURFACEDESC *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a4b00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a4b15*/
  else
    return 0; /*0x4a4b07*/
}



// ==== 0x004A4B20  _VectorClass_PAU_DDSURFACEDESC::Seek  this=VectorClass  sig=csp ====
int __thiscall CStreamClass_16::Seek(_VectorClass_PAU_DDSURFACEDESC *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4a4b2a*/
}



// ==== 0x004A4B30  _VectorClass_PAU_DDSURFACEDESC::AddRef  this=VectorClass  sig=csp ====
char __thiscall CStreamClass_16::AddRef(_VectorClass_PAU_DDSURFACEDESC *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4a4b32*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4a4b3d*/
  {
    v3 = 0; /*0x4a4b3f*/
    if ( m_8 <= 0 ) /*0x4a4b43*/
      return 1; /*0x4a4b63*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4a4b45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a4b4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a4b54*/
    {
      ++v3; /*0x4a4b56*/
      ++v4; /*0x4a4b57*/
      if ( v3 >= m_8 ) /*0x4a4b5c*/
        return 1; /*0x4a4b5c*/
    }
  }
  return 0; /*0x4a4b5e*/
}



// ==== 0x004A4B70  _VectorClass_PAU_DDSURFACEDESC::Release  this=VectorClass  sig=csp ====
char __thiscall CStreamClass_16::Release(_VectorClass_PAU_DDSURFACEDESC *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a4b7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a4b86*/
    if ( a3 ) /*0x4a4b8c*/
      v4 = a3; /*0x4a4ba2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a4b9e*/
    LOBYTE(this->m_C) = 1; /*0x4a4ba6*/
    if ( v4 ) /*0x4a4baa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4a4bb5*/
      {
        m_8 = this->m_8; /*0x4a4bbc*/
        if ( a2 < m_8 ) /*0x4a4bc1*/
          m_8 = a2; /*0x4a4bc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a4bc9*/
          ++i; /*0x4a4bce*/
        if ( BYTE1(this->m_C) ) /*0x4a4bdb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a4be6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4a4bee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4a4bf7*/
      this->m_8 = a2; /*0x4a4bff*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a4c02*/
      return 1; /*0x4a4c08*/
    }
    else
    {
      return 0; /*0x4a4baf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAU_DDSURFACEDESC *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a4c12*/
    return 1; /*0x4a4c18*/
  }
}



// ==== 0x004A4C20  _VectorClass_PAU_DDSURFACEDESC::ddtor  this=VectorClass  sig=csp ====
void __thiscall CStreamClass_16::ddtor(_VectorClass_PAU_DDSURFACEDESC *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4a4c2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a4c33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a4c3b*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4c3e*/
  this->m_8 = 0; /*0x4a4c41*/
}



// ==== 0x004A4C50  _VectorClass_PAU_DDSURFACEDESC::Read  this=VectorClass  sig=csp ====
int __thiscall CStreamClass_16::Read(_VectorClass_PAU_DDSURFACEDESC *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a4c50*/
    return 0; /*0x4a4c58*/
  m_8 = this->m_8; /*0x4a4c5e*/
  result = 0; /*0x4a4c61*/
  if ( m_8 <= 0 ) /*0x4a4c65*/
    return -1; /*0x4a4c7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a4c6b*/
  {
    if ( ++result >= m_8 ) /*0x4a4c7a*/
      return -1; /*0x4a4c7a*/
  }
  return result; /*0x4a4c5a*/
}



// ==== 0x004A4C90  _VectorClass_PAU_DDSURFACEDESC::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall CStreamClass_16::Write(_VectorClass_PAU_DDSURFACEDESC *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a4c90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a4ca5*/
  else
    return 0; /*0x4a4c97*/
}



// ==== 0x004A4CB0  _DynamicVectorClass_PAU_DDSURFACEDESC::CopyItems  this=DynamicVector  sig=csp ====
char __thiscall CStreamClass::CopyItems(_DynamicVectorClass_PAU_DDSURFACEDESC *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a4cbc*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a4cc2*/
    if ( a3 ) /*0x4a4cc8*/
      v4 = a3; /*0x4a4cde*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a4cda*/
    LOBYTE(this->m_C) = 1; /*0x4a4ce2*/
    if ( !v4 ) /*0x4a4ce6*/
      return 0; /*0x4a4d5a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4a4ce8*/
    {
      m_8 = this->m_8; /*0x4a4cef*/
      if ( a2 < m_8 ) /*0x4a4cf4*/
        m_8 = a2; /*0x4a4cf6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a4cfc*/
        ++i; /*0x4a4d01*/
      if ( BYTE1(this->m_C) ) /*0x4a4d0e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a4d19*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4a4d21*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4a4d2a*/
    this->m_8 = a2; /*0x4a4d32*/
    BYTE1(this->m_C) = a3 == 0; /*0x4a4d35*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAU_DDSURFACEDESC *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a4d3e*/
  }
  v7 = this->m_8; /*0x4a4d41*/
  if ( v7 < this->m_10 ) /*0x4a4d49*/
    this->m_10 = v7; /*0x4a4d4b*/
  return 1; /*0x4a4d4e*/
}



// ==== 0x004A4D60  _DynamicVectorClass_PAU_DDSURFACEDESC::FindItem  this=DynamicVector  sig=csp ====
int __thiscall CStreamClass::FindItem(_DynamicVectorClass_PAU_DDSURFACEDESC *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4a4d60*/
  result = 0; /*0x4a4d63*/
  if ( m_10 <= 0 ) /*0x4a4d68*/
    return -1; /*0x4a4d7f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a4d6e*/
  {
    if ( ++result >= m_10 ) /*0x4a4d7d*/
      return -1; /*0x4a4d7d*/
  }
  return result; /*0x4a4d82*/
}



// ==== 0x004A4D90  _VectorClass_PAU_DDSURFACEDESC::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall CStreamClass_16::QueryInterface(_VectorClass_PAU_DDSURFACEDESC *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a4d93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4d96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a4da0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a4da8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a4db0*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4dbb*/
  this->m_8 = 0; /*0x4a4dc1*/
  if ( (a2 & 1) != 0 ) /*0x4a4dc8*/
    __3_YAXPAX_Z(this); /*0x4a4dcb*/
  return this->__pad_0; /*0x4a4dd5*/
}



// ==== 0x004A4DE0  _DynamicVectorClass_PAU_DDSURFACEDESC::Constructor_VectorClass__DDSURFACEDESC___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CStreamClass::Constructor_VectorClass__DDSURFACEDESC___(
        _DynamicVectorClass_PAU_DDSURFACEDESC *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a4de3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4de6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a4df0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a4df8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a4e00*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4e0b*/
  this->m_8 = 0; /*0x4a4e11*/
  if ( (a2 & 1) != 0 ) /*0x4a4e18*/
    __3_YAXPAX_Z(this); /*0x4a4e1b*/
  return this->__pad_0; /*0x4a4e25*/
}



// ==== 0x004A4E30  VectorClass::sub_4A4E30  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_4A4E30(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x4a4e3b*/
  this->Capacity = a2; /*0x4a4e3e*/
  this->IsInitialized = 1; /*0x4a4e41*/
  this->IsAllocated = 0; /*0x4a4e45*/
  this->ptr_0 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4e48*/
  if ( a2 ) /*0x4a4e4e*/
  {
    if ( a3 ) /*0x4a4e56*/
    {
      this->Items = (void *)a3; /*0x4a4e58*/
      return &this->ptr_0; /*0x4a4e5e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x4a4e6d*/
    this->IsAllocated = 1; /*0x4a4e70*/
  }
  return &this->ptr_0; /*0x4a4e5d*/
}



// ==== 0x004A4E80  sub_4A4E80  this=-  sig=ida-proto ====
int sub_4A4E80()
{
  dword_8A00C0 = 0; /*0x4a4e82*/
  dword_8A00C4 = 0; /*0x4a4e87*/
  dword_8A00C8 = 0; /*0x4a4e8c*/
  dword_8A00CC = 0; /*0x4a4e91*/
  return 0; /*0x4a4e96*/
}



// ==== 0x004A4EA0  sub_4A4EA0  this=-  sig=ida-proto ====
void sub_4A4EA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a4eac*/
  dbl_8A00D8 = Math::Sqrt(v0 + v0); /*0x4a4ebe*/
}



// ==== 0x004A4ED0  sub_4A4ED0  this=-  sig=ida-proto ====
void sub_4A4ED0()
{
  dbl_8A0128 = dbl_8A00D8 / 60.0; /*0x4a4edc*/
}



// ==== 0x004A4EF0  sub_4A4EF0  this=-  sig=ida-proto ====
void sub_4A4EF0()
{
  dbl_8A0110 = 1.0 / dbl_8A0128; /*0x4a4efc*/
}



// ==== 0x004A4F10  sub_4A4F10  this=-  sig=ida-proto ====
void sub_4A4F10()
{
  dbl_8A0108 = 0.0174532925199433 * 45.0; /*0x4a4f1c*/
}



// ==== 0x004A4F30  sub_4A4F30  this=-  sig=ida-proto ====
void sub_4A4F30()
{
  dbl_8A00E0 = 0.0174532925199433 * 60.0; /*0x4a4f3c*/
}



// ==== 0x004A4F50  sub_4A4F50  this=-  sig=ida-proto ====
void sub_4A4F50()
{
  dbl_8A00B8 = 0.0174532925199433 * 90.0; /*0x4a4f5c*/
}



// ==== 0x004A4F70  sub_4A4F70  this=-  sig=ida-proto ====
__int64 sub_4A4F70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A00B8 - dbl_8A00E0); /*0x4a4f82*/
  result = Math::RoundToInt(v0 * dbl_8A00D8 * 0.5); /*0x4a4f96*/
  dword_8A0130 = result; /*0x4a4f9b*/
  return result; /*0x4a4fa0*/
}



// ==== 0x004A4FB0  sub_4A4FB0  this=-  sig=ida-proto ====
void sub_4A4FB0()
{
  dbl_8A00E8 = Math::ArcTan((double)dword_8A0130 * 0.00390625); /*0x4a4fc7*/
}



// ==== 0x004A4FE0  sub_4A4FE0  this=-  sig=ida-proto ====
void sub_4A4FE0()
{
  dbl_8A0100 = Math::ArcTan((double)(2 * dword_8A0130) / dbl_8A00D8); /*0x4a5002*/
}



// ==== 0x004A5010  sub_4A5010  this=-  sig=ida-proto ====
__int64 sub_4A5010()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0130) + 0.5); /*0x4a502b*/
  dword_8A0124 = result; /*0x4a5030*/
  return result; /*0x4a5036*/
}



// ==== 0x004A5040  sub_4A5040  this=-  sig=ida-proto ====
int sub_4A5040()
{
  word_8A00D0 = 0; /*0x4a5042*/
  word_8A00D2 = 0; /*0x4a5048*/
  return 0; /*0x4a504e*/
}



// ==== 0x004A5050  sub_4A5050  this=-  sig=ida-proto ====
int sub_4A5050()
{
  dword_8A00F0 = 0; /*0x4a5052*/
  dword_8A00F4 = 0; /*0x4a5057*/
  dword_8A00F8 = 0; /*0x4a505c*/
  return 0; /*0x4a5061*/
}



// ==== 0x004A5070  sub_4A5070  this=-  sig=ida-proto ====
int sub_4A5070()
{
  dword_8A0120 = 0; /*0x4a5075*/
  dword_8A0118 = 128; /*0x4a507f*/
  dword_8A011C = 128; /*0x4a5084*/
  return 128; /*0x4a5089*/
}



// ==== 0x004A5090  nullsub_116  this=-  sig=ida-proto ====
void nullsub_116()
{
  ; /*0x4a5090*/
}



// ==== 0x004A50A0  sub_4A50A0  this=-  sig=ida-proto ====
signed int __fastcall sub_4A50A0(signed int a1)
{
  DWORD Ticks; // ecx
  DWORD v3; // eax
  signed int result; // eax
  DWORD v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-4h]

  Ticks = Timer::GetTicks(); /*0x4a50af*/
  v6 = a1; /*0x4a50b1*/
  v5 = Ticks; /*0x4a50b5*/
  do /*0x4a50df*/
  {
    if ( Ticks == -1 ) /*0x4a50bc*/
    {
      result = a1; /*0x4a50db*/
    }
    else
    {
      v3 = Timer::GetTicks(); /*0x4a50c2*/
      Ticks = v5; /*0x4a50c7*/
      result = v3 - v5; /*0x4a50cb*/
      if ( result >= a1 ) /*0x4a50cf*/
        return result; /*0x4a50cf*/
      result = a1 - result; /*0x4a50d3*/
      a1 = v6; /*0x4a50d5*/
    }
  }
  while ( result ); /*0x4a50df*/
  return result; /*0x4a50e1*/
}



// ==== 0x004A50F0  TechnoClass::checkCloakState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::checkCloakState(TechnoClass *this)
{
  this->? = *(void **)&stru_A8EB00.?[416]; /*0x4a50f8*/
  this->? = 0; /*0x4a50fd*/
  this->? = 0; /*0x4a5100*/
  LOBYTE(this->?) = 0; /*0x4a5103*/
  BYTE1(this->?) = 0; /*0x4a5106*/
  return (int)this; /*0x4a5109*/
}



// ==== 0x004A5110  Window::IsVisible  this=Window  sig=csp ====
int __thiscall Window::IsVisible(Window *this)
{
  int result; // eax

  LOBYTE(result) = *((_BYTE *)this + 24) && *((_BYTE *)this + 25); /*0x4a511e*/
  return result; /*0x4a5120*/
}



// ==== 0x004A5130  BuildingClass::CheckFlag24  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckFlag24(BuildingClass *this)
{
  int result; // eax

  LOBYTE(result) = LOBYTE(this->?) && !BYTE1(this->?); /*0x4a5141*/
  return result; /*0x4a5140*/
}



// ==== 0x004A5150  MovementAI::IsProgressAtEnd  this=MovementAI  sig=csp ====
bool __thiscall MovementAI::IsProgressAtEnd(MovementAI *this)
{
  int MovementAI_field_14; // esi
  int v2; // edx
  int MovementAI_field_10; // eax

  if ( !LOBYTE(this->MovementAI_field_18) ) /*0x4a5150*/
    return 1; /*0x4a5150*/
  MovementAI_field_14 = this->MovementAI_field_14; /*0x4a515b*/
  if ( !MovementAI_field_14 ) /*0x4a5164*/
    return 1; /*0x4a5164*/
  v2 = this->m_Target[2]; /*0x4a5166*/
  MovementAI_field_10 = this->MovementAI_field_10; /*0x4a5169*/
  if ( v2 != -1 ) /*0x4a516f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= MovementAI_field_10 ) /*0x4a517b*/
      MovementAI_field_10 = 0; /*0x4a5181*/
    else
      MovementAI_field_10 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x4a517d*/
  }
  return (double)(MovementAI_field_14 - MovementAI_field_10) / (double)this->MovementAI_field_14 == 1.0; /*0x4a519e*/
}



// ==== 0x004A51B0  BuildingClass::CheckPowerFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckPowerFlags(BuildingClass *this)
{
  int result; // eax

  if ( LOBYTE(this->?) || (LOBYTE(result) = 1, BYTE1(this->?) != 1) ) /*0x4a51be*/
    LOBYTE(result) = 0; /*0x4a51c0*/
  return result; /*0x4a51c2*/
}



// ==== 0x004A51D0  Flag::CheckNone  this=Flag  sig=csp ====
int __thiscall Flag::CheckNone(Flag *this)
{
  int result; // eax

  LOBYTE(result) = !*((_BYTE *)this + 24) && !*((_BYTE *)this + 25); /*0x4a51e1*/
  return result; /*0x4a51e0*/
}



// ==== 0x004A51F0  RateScaler::Init  this=RateScaler  sig=csp ====
int __thiscall RateScaler::Init(RateScaler *this, double a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp-Ch]

  LOBYTE(result) = *((_BYTE *)this + 24); /*0x4a51f6*/
  if ( (_BYTE)result || *((_BYTE *)this + 25) != 1 ) /*0x4a5201*/
  {
    *((_BYTE *)this + 24) = 1; /*0x4a520d*/
    *(double *)this->__tail_0 = a2 * 900.0; /*0x4a5211*/
    LOWORD(result) = Math::RoundToInt(a2 * 900.0); /*0x4a5213*/
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4a5218*/
    *((_BYTE *)this + 25) = 1; /*0x4a5221*/
    *((_DWORD *)this + 2) = v4; /*0x4a5225*/
    *((_DWORD *)this + 3) = v5; /*0x4a522b*/
    *((_DWORD *)this + 4) = result; /*0x4a522e*/
    *((_DWORD *)this + 5) = result; /*0x4a5231*/
  }
  return result; /*0x4a5234*/
}



// ==== 0x004A5240  Timer::StartDouble  this=OwnedTiberiumStruct  sig=csp ====
int __thiscall Timer::StartDouble(Timer *this, double a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp-Ch]

  if ( LOBYTE(this->m_18) || (LOBYTE(result) = BYTE1(this->m_18), (_BYTE)result) ) /*0x4a5252*/
  {
    LOBYTE(this->m_18) = 1; /*0x4a525e*/
    *(double *)this->__pad_0 = a2 * 900.0; /*0x4a5262*/
    LOWORD(result) = Math::RoundToInt(a2 * 900.0); /*0x4a5264*/
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4a5269*/
    BYTE1(this->m_18) = 0; /*0x4a5272*/
    *(_DWORD *)&this->__pad_6[2] = v4; /*0x4a5276*/
    *(_DWORD *)&this->__pad_6[6] = v5; /*0x4a527c*/
    *(_DWORD *)&this->__pad_6[10] = result; /*0x4a527f*/
    *(_DWORD *)&this->__pad_6[14] = result; /*0x4a5282*/
  }
  return result; /*0x4a5285*/
}



// ==== 0x004A5290  BuildingClass::UpdateTimerWithElapsed  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateTimerWithElapsed(BuildingClass *this)
{
  int result; // eax
  void *ptr_8; // esi

  LOBYTE(result) = this->?; /*0x4a5290*/
  if ( (_BYTE)result ) /*0x4a5295*/
  {
    result = this->?; /*0x4a5297*/
    ptr_8 = this->?; /*0x4a529b*/
    if ( ptr_8 != (void *)-1 ) /*0x4a52a1*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_8 >= result ) /*0x4a52ad*/
        result = 0; /*0x4a52b3*/
      else
        result -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_8; /*0x4a52af*/
    }
    this->? = this->? - result; /*0x4a52bb*/
    LOBYTE(result) = BYTE1(this->?) == 0; /*0x4a52c3*/
    BYTE1(this->?) = result; /*0x4a52c6*/
  }
  return result; /*0x4a52c9*/
}



// ==== 0x004A52D0  ObjectClass::method_4A52D0  this=ObjectClass  sig=csp ====
void __thiscall sub_4A52D0(ObjectClass *this)
{
  LOBYTE(this->?) = 0; /*0x4a52d0*/
  BYTE1(this->?) = 1; /*0x4a52d4*/
}



// ==== 0x004A52E0  ObjectClass::method_4A52E0  this=ObjectClass  sig=csp ====
char __thiscall sub_4A52E0(ObjectClass *this)
{
  LOBYTE(this->?) = 0; /*0x4a52e2*/
  BYTE1(this->?) = 0; /*0x4a52e5*/
  return 0; /*0x4a52e8*/
}



// ==== 0x004A52F0  Animation::GetProgress  this=Animation  sig=csp ====
int __thiscall Animation::GetProgress(Animation *this)
{
  int result; // eax
  int v2; // edx

  LOBYTE(result) = this->q018; /*0x4a52f0*/
  if ( (_BYTE)result ) /*0x4a52f8*/
  {
    if ( this->q014 ) /*0x4a52fb*/
    {
      v2 = this->q008; /*0x4a5311*/
      result = this->q010; /*0x4a5314*/
      if ( v2 != -1 ) /*0x4a531a*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= result ) /*0x4a5326*/
          return 0; /*0x4a533d*/
        else
          result -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x4a5328*/
      }
    }
  }
  return result; /*0x4a530d*/
}



// ==== 0x004A5360  MovementAI::Check  this=MovementAI  sig=csp ====
char __thiscall MovementAI::Check(MovementAI *this)
{
  char result; // al

  result = 0; /*0x4a5363*/
  if ( LOBYTE(this->MovementAI_field_18) ) /*0x4a5360*/
  {
    if ( BYTE1(this->MovementAI_field_18) ) /*0x4a5369*/
    {
      LOBYTE(this->MovementAI_field_18) = 0; /*0x4a536e*/
      BYTE1(this->MovementAI_field_18) = 1; /*0x4a5371*/
    }
    if ( LOBYTE(this->MovementAI_field_18) ) /*0x4a5375*/
    {
      if ( !BYTE1(this->MovementAI_field_18) ) /*0x4a537a*/
      {
        LOBYTE(this->MovementAI_field_18) = 0; /*0x4a537f*/
        BYTE1(this->MovementAI_field_18) = 0; /*0x4a5382*/
      }
    }
  }
  return result; /*0x4a5385*/
}



// ==== 0x004A5390  sub_4A5390  this=-  sig=ida-proto ====
int sub_4A5390()
{
  dword_8A0138 = 0; /*0x4a5392*/
  dword_8A013C = 0; /*0x4a5397*/
  dword_8A0140 = 0; /*0x4a539c*/
  dword_8A0144 = 0; /*0x4a53a1*/
  return 0; /*0x4a53a6*/
}



// ==== 0x004A53B0  Dial8Class::Constructor  this=Dial8Class  sig=csp ====
_DWORD *__thiscall Dial8Class::Constructor(Dial8Class *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7)
{
  unsigned int v7; // ebx
  __int16 v10; // cx
  unsigned int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v16; // [esp+14h] [ebp+4h]
  int v17; // [esp+18h] [ebp+8h]
  int v18; // [esp+20h] [ebp+10h]
  unsigned int v19; // [esp+24h] [ebp+14h]
  unsigned int v20; // [esp+24h] [ebp+14h]

  v7 = a6; /*0x4a53b5*/
  ControlClass::Construct((ControlClass *)this, a2, a3, a4, a5, a6, 7, 1); /*0x4a53d5*/
  *(_DWORD *)this->__pad_0 = &Dial8Class::`vftable'; /*0x4a53da*/
  LOBYTE(v10) = 0; /*0x4a53ed*/
  *((_DWORD *)this + 11) = this->Dial8Class_field_0x0C + *((_DWORD *)this + 5) / 2; /*0x4a53ef*/
  this->q00C = this->q004 + *((_DWORD *)this + 6) / 2; /*0x4a53ff*/
  HIBYTE(v10) = a7; /*0x4a5406*/
  *((_DWORD *)this + 45) = a7; /*0x4a5408*/
  LOWORD(a6) = v10; /*0x4a540e*/
  v11 = (((a6 >> 12) + 1) >> 1) & 7; /*0x4a541d*/
  *((_DWORD *)this + 46) = v11; /*0x4a5420*/
  *((_DWORD *)this + 47) = v11; /*0x4a5426*/
  *((_DWORD *)this + 13) = *((_DWORD *)this + 11); /*0x4a5436*/
  v12 = this->q00C; /*0x4a5439*/
  this->q00E = v12 - (int)(8 * v7) / 2 / 10; /*0x4a546b*/
  v13 = *((_DWORD *)this + 11); /*0x4a5479*/
  v19 = 56 * a5 / 2 / 100; /*0x4a5486*/
  this->q00F = v19 + v13; /*0x4a548d*/
  *((_DWORD *)this + 18) = v12; /*0x4a5497*/
  *((_DWORD *)this + 21) = v13; /*0x4a549c*/
  *((_DWORD *)this + 26) = v12; /*0x4a54a5*/
  *((_DWORD *)this + 29) = v13; /*0x4a54b8*/
  v16 = v12 - (int)(56 * v7) / 2 / 100; /*0x4a54c8*/
  this->q004 = v16; /*0x4a54cc*/
  v17 = 8 * a5 / 2 / 10; /*0x4a54ee*/
  *((_DWORD *)this + 17) = v13 + v17; /*0x4a54f4*/
  *((_DWORD *)this + 19) = v19 + v13; /*0x4a5502*/
  *((_DWORD *)this + 20) = v12 + (int)(56 * v7) / 2 / 100; /*0x4a550f*/
  *((_DWORD *)this + 22) = v12 + (int)(8 * v7) / 2 / 10; /*0x4a5519*/
  *((_DWORD *)this + 23) = v13 - v19; /*0x4a5528*/
  *((_DWORD *)this + 24) = v12 + (int)(56 * v7) / 2 / 100; /*0x4a552b*/
  *((_DWORD *)this + 25) = v13 - v17; /*0x4a553a*/
  *((_DWORD *)this + 28) = v16; /*0x4a5541*/
  *((_DWORD *)this + 27) = v13 - v19; /*0x4a5549*/
  *((_DWORD *)this + 30) = v12 - (int)(6 * v7) / 2 / 10; /*0x4a556c*/
  *((_DWORD *)this + 37) = v13; /*0x4a5580*/
  *((_DWORD *)this + 34) = v12; /*0x4a5596*/
  *((_DWORD *)this + 42) = v12; /*0x4a55a1*/
  v20 = 42 * a5 / 2 / 100; /*0x4a55a7*/
  *((_DWORD *)this + 31) = v20 + v13; /*0x4a55ae*/
  v18 = (int)(42 * v7) / 2 / 100; /*0x4a55df*/
  this->q008 = v12 - v18; /*0x4a55e8*/
  *((_DWORD *)this + 44) = v12 - v18; /*0x4a55fe*/
  v14 = 6 * a5 / 2 / 10; /*0x4a5607*/
  *((_DWORD *)this + 33) = v14 + v13; /*0x4a560c*/
  *((_DWORD *)this + 35) = v13 + v20; /*0x4a5618*/
  *((_DWORD *)this + 36) = v18 + v12; /*0x4a562b*/
  *((_DWORD *)this + 38) = v12 + (int)(6 * v7) / 2 / 10; /*0x4a5631*/
  *((_DWORD *)this + 40) = v18 + v12; /*0x4a563f*/
  *((_DWORD *)this + 41) = v13 - v14; /*0x4a5645*/
  *((_DWORD *)this + 39) = v13 - v20; /*0x4a564b*/
  *((_DWORD *)this + 43) = v13 - v20; /*0x4a5651*/
  return this->__pad_0; /*0x4a5659*/
}



// ==== 0x004A5660  Dial8Class::SetValue  this=Dial8Class  sig=csp ====
int __thiscall Dial8Class::SetValue(Dial8Class *this, unsigned int a2, _DWORD *a3, int a4)
{
  double v4; // st7
  unsigned int v5; // ebx
  int *v8; // eax
  __int16 v9; // dx
  int v10; // ecx
  unsigned int v11; // eax
  _BYTE v12[8]; // [esp+30h] [ebp-8h] BYREF

  v5 = a2; /*0x4a5664*/
  (*(void (__thiscall **)(Dial8Class *, unsigned int))(*(_DWORD *)this->__pad_0 + 120))(this, a2); /*0x4a566e*/
  if ( (a2 & 1) != 0 ) /*0x4a5676*/
  {
    dword_8A0148 = 1; /*0x4a5678*/
    goto LABEL_8; /*0x4a5684*/
  }
  if ( (a2 & 2) != 0 && dword_8A0148 ) /*0x4a5692*/
  {
LABEL_8:
    v8 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4a56c1*/
                  stru_887598.lineTrailer,
                  v12);
    Math::CalcAngle((double)*((int *)this + 12) - (double)v8[1], (double)*v8 - (double)*((int *)this + 11)); /*0x4a5709*/
    LOWORD(a2) = Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427); /*0x4a5722*/
    LOBYTE(v9) = 0; /*0x4a572f*/
    v10 = *((_DWORD *)this + 47); /*0x4a5738*/
    HIBYTE(v9) = ((a2 >> 7) + 1) >> 1; /*0x4a573e*/
    *((_DWORD *)this + 45) = HIBYTE(v9); /*0x4a5740*/
    LOWORD(a2) = v9; /*0x4a5746*/
    v11 = (((a2 >> 12) + 1) >> 1) & 7; /*0x4a5755*/
    *((_DWORD *)this + 46) = v11; /*0x4a575a*/
    if ( v11 == v10 ) /*0x4a5760*/
    {
      *a3 = 0; /*0x4a578f*/
      CellClass::Draw((ControlClass *)this, 0, a3, 0); /*0x4a5795*/
    }
    else
    {
      *((_DWORD *)this + 47) = v11; /*0x4a5762*/
      CellClass::Draw((ControlClass *)this, v5, a3, 0); /*0x4a5772*/
    }
    return 1; /*0x4a5781*/
  }
  if ( (a2 & 4) != 0 ) /*0x4a569b*/
  {
    *a3 = 0; /*0x4a569d*/
    dword_8A0148 = 0; /*0x4a56a3*/
  }
  return CellClass::Draw((ControlClass *)this, 0, a3, 0); /*0x4a56b9*/
}



// ==== 0x004A57B0  Dial8Class::GetValue  this=Dial8Class  sig=csp ====
int __userpurge Dial8Class::GetValue@<eax>(Dial8Class *this, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
  ControlClass *v5; // ecx
  ControlClass *v6; // esi
  void *v7; // ecx
  int *p_ControlClass_field_0x08; // edi
  int v9; // ebx
  void *v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int ControlClass_field_0x08; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v24; // [esp+18h] [ebp-Ch] BYREF
  int v25; // [esp+1Ch] [ebp-8h]
  int ControlClass_field_0x0C; // [esp+20h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]

  v6 = v5; /*0x4a57b4*/
  BuildingAnim::GetType(); /*0x4a57b6*/
  if ( !Control::DispatchClick(v6, (int)this) ) /*0x4a57c6*/
    return 0; /*0x4a5944*/
  (*(void (__thiscall **)(void *, int, int, int))(*(_DWORD *)stru_887598.lineTrailer + 12))( /*0x4a57de*/
    stru_887598.lineTrailer,
    a4,
    a3,
    a2);
  v7 = *(void **)v6[1].__pad_0; /*0x4a57e4*/
  ControlClass_field_0x0C = v6->ControlClass_field_0x0C; /*0x4a57ea*/
  retaddr = v7; /*0x4a57f1*/
  DrawBuildingTilesSHP(&ControlClass_field_0x0C, 0, 1); /*0x4a5805*/
  p_ControlClass_field_0x08 = &v6[3].ControlClass_field_0x08; /*0x4a580a*/
  v9 = 8; /*0x4a580d*/
  do /*0x4a5842*/
  {
    v10 = (void *)(*p_ControlClass_field_0x08 - 1); /*0x4a581d*/
    ControlClass_field_0x0C = *(p_ControlClass_field_0x08 - 1) - 1; /*0x4a581e*/
    retaddr = v10; /*0x4a5822*/
    DrawBuildingTilesSHP(&ControlClass_field_0x0C, 1, 0); /*0x4a5839*/
    p_ControlClass_field_0x08 += 2; /*0x4a583e*/
    --v9; /*0x4a5841*/
  }
  while ( v9 ); /*0x4a5842*/
  v11 = v24; /*0x4a5849*/
  v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v24) + 796); /*0x4a5855*/
  if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4a5864*/
    v13 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v12); /*0x4a5871*/
  else
    v13 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v12); /*0x4a587d*/
  ControlClass_field_0x08 = v6[11].ControlClass_field_0x08; /*0x4a5881*/
  v15 = *(&v6[7].ControlClass_field_0x08 + 2 * ControlClass_field_0x08); /*0x4a588c*/
  v16 = *(_DWORD *)&v6[7].__pad_0[8 * ControlClass_field_0x08 + 4] + 1; /*0x4a5895*/
  v25 = v15 + 1; /*0x4a5896*/
  v17 = v6[2].ControlClass_field_0x0C; /*0x4a589a*/
  v24 = v16; /*0x4a589d*/
  retaddr = (_UNKNOWN *)(*(_DWORD *)v6[3].__pad_0 + 1); /*0x4a58a6*/
  ControlClass_field_0x0C = v17 + 1; /*0x4a58b1*/
  (*(void (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x4a58bc*/
    g_DSurface_Hidden_2,
    &ControlClass_field_0x0C,
    &v24,
    v13);
  v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v11) + 808); /*0x4a58c7*/
  if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4a58d6*/
    v19 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v18); /*0x4a58e3*/
  else
    v19 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v18); /*0x4a58ef*/
  v20 = v6[11].ControlClass_field_0x08; /*0x4a58f3*/
  retaddr = (_UNKNOWN *)*(&v6[7].ControlClass_field_0x08 + 2 * v20); /*0x4a5906*/
  v21 = v6[2].ControlClass_field_0x0C; /*0x4a590a*/
  ControlClass_field_0x0C = *(_DWORD *)&v6[7].__pad_0[8 * v20 + 4]; /*0x4a590d*/
  v22 = *(_DWORD *)v6[3].__pad_0; /*0x4a5911*/
  v24 = v21; /*0x4a5914*/
  v25 = v22; /*0x4a591f*/
  (*(void (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x4a592a*/
    g_DSurface_Hidden_2,
    &v24,
    &ControlClass_field_0x0C,
    v19);
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4a5935*/
  return 1; /*0x4a593d*/
}



// ==== 0x004A5950  ObjectClass::?GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ(
        Concurrency::details::SchedulerProxy *this)
{
  return this->u32_2D; /*0x4a5956*/
}



// ==== 0x004A59A0  Dial8Class::QueryInterface  this=Dial8Class  sig=csp ====
_DWORD *__thiscall Dial8Class::QueryInterface(Dial8Class *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x4a59a3*/
  if ( (a2 & 1) != 0 ) /*0x4a59ad*/
    __3_YAXPAX_Z(this); /*0x4a59b0*/
  return this->__pad_0; /*0x4a59ba*/
}



// ==== 0x004A59C0  sub_4A59C0  this=-  sig=ida-proto ====
int sub_4A59C0()
{
  dword_8A0160 = 0; /*0x4a59c2*/
  dword_8A0164 = 0; /*0x4a59c7*/
  dword_8A0168 = 0; /*0x4a59cc*/
  dword_8A016C = 0; /*0x4a59d1*/
  return 0; /*0x4a59d6*/
}



// ==== 0x004A59E0  GetTextBoundingRect  this=-  sig=csp ====
_DWORD *__fastcall Text_GetBoundingRect(_DWORD *a1, int a2, int a3, int a4, __int16 a5, int a6, int a7)
{
  int v7; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // ecx

  v7 = g_FogOfWarState; /*0x4a59e4*/
  v9 = Text::MeasureWidth(a2, 0); /*0x4a59f1*/
  v10 = *(_DWORD *)(v7 + 28); /*0x4a59f6*/
  v11 = v9; /*0x4a59f9*/
  v12 = a3; /*0x4a5a06*/
  if ( (a5 & 0x100) != 0 ) /*0x4a5a08*/
  {
    v13 = a3 - v11 / 2; /*0x4a5a11*/
LABEL_5:
    v12 = v13; /*0x4a5a1c*/
    goto LABEL_6; /*0x4a5a1c*/
  }
  if ( (a5 & 0x200) != 0 ) /*0x4a5a18*/
  {
    v13 = a3 - v11; /*0x4a5a1a*/
    goto LABEL_5; /*0x4a5a1a*/
  }
LABEL_6:
  *a1 = v12 - a6; /*0x4a5a1e*/
  a1[1] = a4 - a7; /*0x4a5a3a*/
  a1[2] = v11 + 2 * a6; /*0x4a5a3d*/
  a1[3] = v10 + 2 * a7; /*0x4a5a40*/
  return a1; /*0x4a5a43*/
}



// ==== 0x004A5A50  DrawBuildingTilesSHP  this=-  sig=csp ====
int __fastcall SHP_DrawBuildingTiles(int *a1, int a2, char a3)
{
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // edi
  int v47; // ebx
  int v48; // eax
  int v49; // edx
  int v51; // edi
  int v52; // ebx
  int v53; // eax
  int v54; // edx
  int v55; // ecx
  int v56; // edx
  int v57; // edi
  int v58; // ebx
  int v59; // eax
  _DWORD v60[2]; // [esp+24h] [ebp-C0h] BYREF
  _DWORD v61[2]; // [esp+2Ch] [ebp-B8h] BYREF
  _DWORD v62[2]; // [esp+34h] [ebp-B0h] BYREF
  _DWORD v63[2]; // [esp+3Ch] [ebp-A8h] BYREF
  _DWORD v64[2]; // [esp+44h] [ebp-A0h] BYREF
  _DWORD v65[2]; // [esp+4Ch] [ebp-98h] BYREF
  int v66; // [esp+54h] [ebp-90h] BYREF
  int v67; // [esp+58h] [ebp-8Ch]
  _DWORD v68[2]; // [esp+5Ch] [ebp-88h] BYREF
  int v69; // [esp+64h] [ebp-80h] BYREF
  int v70; // [esp+68h] [ebp-7Ch]
  _DWORD v71[2]; // [esp+6Ch] [ebp-78h] BYREF
  _DWORD v72[4]; // [esp+74h] [ebp-70h] BYREF
  _DWORD v73[2]; // [esp+84h] [ebp-60h] BYREF
  int v74; // [esp+8Ch] [ebp-58h]
  int v75; // [esp+90h] [ebp-54h]
  int v76; // [esp+94h] [ebp-50h]
  int v77; // [esp+98h] [ebp-4Ch]
  int v78; // [esp+9Ch] [ebp-48h]
  int v79; // [esp+A0h] [ebp-44h]
  int v80; // [esp+A4h] [ebp-40h]
  int v81; // [esp+A8h] [ebp-3Ch]
  int v82; // [esp+ACh] [ebp-38h]
  int v83; // [esp+B0h] [ebp-34h]
  int v84; // [esp+B4h] [ebp-30h]
  int v85; // [esp+B8h] [ebp-2Ch]
  int v86; // [esp+BCh] [ebp-28h]
  int v87; // [esp+C0h] [ebp-24h]
  int v88; // [esp+C4h] [ebp-20h]
  int v89; // [esp+C8h] [ebp-1Ch]
  int v90; // [esp+CCh] [ebp-18h]
  int v91; // [esp+D0h] [ebp-14h]
  int v92; // [esp+D4h] [ebp-10h]
  int v93; // [esp+D8h] [ebp-Ch]
  int v94; // [esp+DCh] [ebp-8h]
  int v95; // [esp+E0h] [ebp-4h]

  v81 = 15; /*0x4a5a69*/
  v86 = 14; /*0x4a5a74*/
  v5 = (_DWORD *)*((_DWORD *)dword_B054D4 + BuildingAnim::GetType()); /*0x4a5a7f*/
  v6 = v5[202]; /*0x4a5a8b*/
  v7 = v5[200]; /*0x4a5a91*/
  v8 = v5[201]; /*0x4a5a97*/
  v74 = v5[199]; /*0x4a5a9d*/
  v77 = v74; /*0x4a5aa1*/
  v73[1] = v6; /*0x4a5aad*/
  v78 = v6; /*0x4a5ab1*/
  v82 = 12; /*0x4a5ab8*/
  v85 = 12; /*0x4a5abf*/
  v73[0] = v7; /*0x4a5acd*/
  v76 = v7; /*0x4a5ad1*/
  v88 = v7; /*0x4a5ad8*/
  v91 = v7; /*0x4a5adf*/
  v92 = v7; /*0x4a5ae6*/
  v95 = v7; /*0x4a5aed*/
  v80 = 13; /*0x4a5afb*/
  v83 = 13; /*0x4a5b02*/
  v84 = 13; /*0x4a5b09*/
  v87 = 13; /*0x4a5b10*/
  v9 = v5[203]; /*0x4a5b17*/
  v75 = v8; /*0x4a5b1d*/
  v79 = v8; /*0x4a5b24*/
  v89 = v9; /*0x4a5b2b*/
  v90 = v9; /*0x4a5b34*/
  v93 = v9; /*0x4a5b3b*/
  v94 = v9; /*0x4a5b42*/
  v10 = &v73[4 * a2]; /*0x4a5b49*/
  if ( a3 ) /*0x4a5b4d*/
  {
    v11 = v5[195]; /*0x4a5b4f*/
    v12 = *v10; /*0x4a5b55*/
    if ( *(_DWORD *)(v11 + 4) == 1 ) /*0x4a5b5b*/
      v13 = *(unsigned __int8 *)(*(_DWORD *)(v11 + 372) + v12); /*0x4a5b68*/
    else
      v13 = *(unsigned __int16 *)(*(_DWORD *)(v11 + 372) + 2 * v12); /*0x4a5b74*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, a1, v13); /*0x4a5b82*/
  }
  v14 = a2 - 4; /*0x4a5b85*/
  if ( v14 ) /*0x4a5b88*/
  {
    if ( v14 == 1 ) /*0x4a5b8f*/
    {
      v51 = v5[195]; /*0x4a5d9c*/
      v52 = v10[2]; /*0x4a5da2*/
      if ( *(_DWORD *)(v51 + 4) == 1 ) /*0x4a5da9*/
        v53 = *(unsigned __int8 *)(*(_DWORD *)(v51 + 372) + v52); /*0x4a5db3*/
      else
        v53 = *(unsigned __int16 *)(*(_DWORD *)(v51 + 372) + 2 * v52); /*0x4a5dc0*/
      v54 = a1[1] + 1; /*0x4a5dca*/
      v72[0] = *a1 + 1; /*0x4a5dcb*/
      v55 = a1[2]; /*0x4a5dcf*/
      v72[1] = v54; /*0x4a5dd2*/
      v56 = a1[3] - 1; /*0x4a5dda*/
      v72[2] = v55 - 1; /*0x4a5ddb*/
      v72[3] = v56; /*0x4a5de6*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 88))( /*0x4a5df1*/
               g_DSurface_Hidden_2,
               v72,
               v53);
    }
    else
    {
      v15 = v5[195]; /*0x4a5b95*/
      v16 = v10[1]; /*0x4a5b9b*/
      v17 = *(_DWORD *)(v15 + 4); /*0x4a5b9e*/
      v18 = *(_DWORD *)(v15 + 372); /*0x4a5ba1*/
      if ( v17 == 1 ) /*0x4a5baa*/
        v19 = *(unsigned __int8 *)(v18 + v16); /*0x4a5bae*/
      else
        v19 = *(unsigned __int16 *)(v18 + 2 * v16); /*0x4a5bb5*/
      v20 = *a1; /*0x4a5bb9*/
      v21 = a1[3]; /*0x4a5bc3*/
      v66 = a1[2] + *a1; /*0x4a5bc6*/
      v67 = v21 + a1[1]; /*0x4a5bd3*/
      v62[1] = v67; /*0x4a5bd7*/
      v62[0] = v20; /*0x4a5be2*/
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5bed*/
        g_DSurface_Hidden_2,
        v62,
        &v66,
        v19);
      v22 = v5[195]; /*0x4a5bf0*/
      v23 = v10[1]; /*0x4a5bf6*/
      v24 = *(_DWORD *)(v22 + 4); /*0x4a5bf9*/
      v25 = *(_DWORD *)(v22 + 372); /*0x4a5bfc*/
      if ( v24 == 1 ) /*0x4a5c05*/
        v26 = *(unsigned __int8 *)(v25 + v23); /*0x4a5c09*/
      else
        v26 = *(unsigned __int16 *)(v25 + 2 * v23); /*0x4a5c10*/
      v27 = a1[2] + *a1; /*0x4a5c19*/
      v28 = a1[3] + a1[1]; /*0x4a5c21*/
      v64[1] = a1[1]; /*0x4a5c24*/
      v71[0] = v27; /*0x4a5c33*/
      v71[1] = v28; /*0x4a5c37*/
      v64[0] = v27; /*0x4a5c3b*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5c46*/
        g_DSurface_Hidden_2,
        v64,
        v71,
        v26);
      v29 = v5[195]; /*0x4a5c49*/
      v30 = v10[2]; /*0x4a5c4f*/
      v31 = *(_DWORD *)(v29 + 4); /*0x4a5c57*/
      v32 = *(_DWORD *)(v29 + 372); /*0x4a5c5a*/
      if ( v31 == 1 ) /*0x4a5c62*/
        v33 = *(unsigned __int8 *)(v32 + v30); /*0x4a5c66*/
      else
        v33 = *(unsigned __int16 *)(v32 + 2 * v30); /*0x4a5c6d*/
      v34 = a1[2] + *a1; /*0x4a5c7a*/
      v60[0] = *a1; /*0x4a5c7e*/
      v69 = v34; /*0x4a5c86*/
      v70 = a1[1]; /*0x4a5c8d*/
      v60[1] = v70; /*0x4a5c91*/
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5c9e*/
        g_DSurface_Hidden_2,
        v60,
        &v69,
        v33);
      v35 = v5[195]; /*0x4a5ca1*/
      v36 = v10[2]; /*0x4a5ca7*/
      v37 = *(_DWORD *)(v35 + 4); /*0x4a5caa*/
      v38 = *(_DWORD *)(v35 + 372); /*0x4a5cad*/
      if ( v37 == 1 ) /*0x4a5cb5*/
        v39 = *(unsigned __int8 *)(v38 + v36); /*0x4a5cb9*/
      else
        v39 = *(unsigned __int16 *)(v38 + 2 * v36); /*0x4a5cc0*/
      v40 = *a1; /*0x4a5cc7*/
      v41 = a1[3] + a1[1]; /*0x4a5ccc*/
      v63[1] = a1[1]; /*0x4a5ccf*/
      v61[0] = v40; /*0x4a5cde*/
      v61[1] = v41; /*0x4a5ce2*/
      v63[0] = v40; /*0x4a5ce6*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5cf1*/
        g_DSurface_Hidden_2,
        v63,
        v61,
        v39);
      v42 = v5[195]; /*0x4a5cf4*/
      v43 = v10[3]; /*0x4a5cfa*/
      if ( *(_DWORD *)(v42 + 4) == 1 ) /*0x4a5d05*/
        v44 = *(unsigned __int8 *)(*(_DWORD *)(v42 + 372) + v43); /*0x4a5d12*/
      else
        v44 = *(unsigned __int16 *)(*(_DWORD *)(v42 + 372) + 2 * v43); /*0x4a5d1e*/
      v45 = a1[1]; /*0x4a5d24*/
      v65[0] = *a1; /*0x4a5d27*/
      v65[1] = a1[3] + v45; /*0x4a5d37*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 36))(g_DSurface_Hidden_2, v65, v44); /*0x4a5d42*/
      v46 = v5[195]; /*0x4a5d45*/
      v47 = v10[3]; /*0x4a5d4b*/
      if ( *(_DWORD *)(v46 + 4) == 1 ) /*0x4a5d51*/
        v48 = *(unsigned __int8 *)(*(_DWORD *)(v46 + 372) + v47); /*0x4a5d5b*/
      else
        v48 = *(unsigned __int16 *)(*(_DWORD *)(v46 + 372) + 2 * v47); /*0x4a5d68*/
      v49 = a1[1]; /*0x4a5d71*/
      v68[0] = *a1 + a1[2]; /*0x4a5d76*/
      v68[1] = v49; /*0x4a5d81*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 36))( /*0x4a5d8c*/
               g_DSurface_Hidden_2,
               v68,
               v48);
    }
  }
  else
  {
    v57 = v5[195]; /*0x4a5e01*/
    v58 = v10[2]; /*0x4a5e07*/
    if ( *(_DWORD *)(v57 + 4) == 1 ) /*0x4a5e0e*/
      v59 = *(unsigned __int8 *)(*(_DWORD *)(v57 + 372) + v58); /*0x4a5e18*/
    else
      v59 = *(unsigned __int16 *)(*(_DWORD *)(v57 + 372) + 2 * v58); /*0x4a5e25*/
    return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 88))(g_DSurface_Hidden_2, a1, v59); /*0x4a5e33*/
  }
}



// ==== 0x004A5E50  ObjectClass::method_4A5E50  this=ObjectClass  sig=csp ====
int __thiscall sub_4A5E50(ObjectClass *this, int a2, int *a3, _DWORD *a4)
{
  Text *v5; // esi
  int PixelData; // eax

  *a3 = 0; /*0x4a5e5e*/
  *a4 = 0; /*0x4a5e65*/
  v5 = g_FogOfWarState; /*0x4a5e6b*/
  if ( !this || !g_FogOfWarState ) /*0x4a5e77*/
    return 0; /*0x4a5ea2*/
  PixelData = FontClass::GetPixelData((FontClass *)g_FogOfWarState, 0x57u); /*0x4a5e7d*/
  Text::Layout(v5, (unsigned __int16 *)this, a3, a4, a2 * PixelData); /*0x4a5e8d*/
  return *a4 / v5[7].Text_field_00; /*0x4a5e98*/
}



// ==== 0x004A5EB0  RenderTextLabel  this=IUnknown  sig=csp ====
int *__fastcall RenderTextLabel(
        int *a1,
        unsigned __int16 *a2,
        int *a3,
        _DWORD *a4,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD *v9; // edi
  Char *v10; // ebx
  int v11; // ebp
  int v12; // esi
  char v13; // ah
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v22; // [esp+18h] [ebp-20h] BYREF
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+20h] [ebp-18h]
  char *v25; // [esp+24h] [ebp-14h]
  _DWORD v26[4]; // [esp+28h] [ebp-10h] BYREF

  v9 = a4; /*0x4a5ebe*/
  v10 = (Char *)g_FogOfWarState; /*0x4a5ec8*/
  v11 = a4[1] + *(_DWORD *)(a5 + 4); /*0x4a5ed3*/
  v12 = *(_DWORD *)a5 + *a4; /*0x4a5ed8*/
  Text::Layout(g_FogOfWarState, a2, &a5, &a4, a4[2]); /*0x4a5eec*/
  v13 = BYTE1(a8); /*0x4a5ef1*/
  if ( (a8 & 0x100) != 0 ) /*0x4a5efc*/
  {
    v12 += a5 / -2; /*0x4a5f07*/
    v13 = BYTE1(a8); /*0x4a5f09*/
  }
  else if ( (a8 & 0x200) != 0 ) /*0x4a5f12*/
  {
    v12 -= a5; /*0x4a5f14*/
  }
  if ( v13 >= 0 ) /*0x4a5f19*/
  {
    if ( (v13 & 4) != 0 ) /*0x4a5f64*/
    {
      v24 = a5 + 2; /*0x4a5f6c*/
      v25 = (char *)a4 + 2; /*0x4a5f7a*/
      v23 = v11 - 1; /*0x4a5f82*/
      v22 = v12 - 1; /*0x4a5f86*/
      (*(void (__thiscall **)(int *, int *, _DWORD))(*a3 + 20))(a3, &v22, 0); /*0x4a5f93*/
    }
  }
  else
  {
    v24 = a5 + 2; /*0x4a5f21*/
    v23 = v11 - 1; /*0x4a5f2c*/
    v25 = (char *)a4 + 2; /*0x4a5f30*/
    v22 = v12 - 1; /*0x4a5f42*/
    v14 = *a3; /*0x4a5f46*/
    LOWORD(a8) = 0; /*0x4a5f4c*/
    BYTE2(a8) = 0; /*0x4a5f57*/
    (*(void (__thiscall **)(int *, int *, int *, int))(v14 + 28))(a3, &v22, &a8, 60); /*0x4a5f5c*/
  }
  v15 = v9[2]; /*0x4a5f98*/
  v16 = v9[1]; /*0x4a5f9b*/
  v26[0] = *v9; /*0x4a5f9e*/
  v17 = v15 + v26[0]; /*0x4a5fa2*/
  v18 = v9[3]; /*0x4a5fa4*/
  v26[1] = v16; /*0x4a5fa7*/
  v26[2] = v17; /*0x4a5fb1*/
  v26[3] = v16 + v18; /*0x4a5fb5*/
  Char::Swap(v10, 1); /*0x4a5fb9*/
  TextGroup::SetRect((TextGroup *)v10, v26); /*0x4a5fc5*/
  Property::Set((Property *)v10, a6); /*0x4a5fd1*/
  FontRenderer::DrawText(v10, a3, a2, v12, v11, 0, 0); /*0x4a5fed*/
  *a1 = v12; /*0x4a5ff7*/
  a1[1] = v11; /*0x4a5ff9*/
  return a1; /*0x4a5ff6*/
}



// ==== 0x004A6010  globalHelper_0A6010  this=-  sig=csp ====
int *__fastcall sub_4A6010(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // eax
  int *v12; // eax
  int v14; // [esp+8h] [ebp-8h] BYREF

  v11 = Color::ConvertToRGB((unsigned __int8 *)(a6 + 776), (int)&a6); /*0x4a6028*/
  LOWORD(v14) = *(_WORD *)v11; /*0x4a6036*/
  BYTE2(v14) = *(_BYTE *)(v11 + 2); /*0x4a603e*/
  v12 = RenderTextLabel( /*0x4a60b2*/
          &v14,
          a2,
          a3,
          a4,
          a5,
          ((unsigned __int8)v14 >> g_BitShift_Green_0 << g_BitShift_Red)
        | (BYTE1(v14) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(v14) >> g_BitMask_Red << g_BitShift_Blue),
          a7,
          a8,
          a9);
  *a1 = *v12; /*0x4a60b9*/
  a1[1] = v12[1]; /*0x4a60bf*/
  return a1; /*0x4a60bb*/
}



// ==== 0x004A60D0  TextRenderer::GetInstance  this=TextRenderer  sig=csp ====
int TextRenderer_GetInstance()
{
  return g_FogOfWarState; /*0x4a60d5*/
}



// ==== 0x004A60E0  TextRenderer::Printf  this=ObjectClass  sig=csp ====
_DWORD *__cdecl sub_4A60E0(
        _DWORD *a1,
        size_t BufferCount,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        wchar_t Format)
{
  _DWORD *v9; // ecx
  _DWORD *v11; // edx
  va_list v12; // [esp+0h] [ebp-408h]
  wchar_t Buffer[512]; // [esp+8h] [ebp-400h] BYREF

  if ( BufferCount ) /*0x4a60ec*/
  {
    vswprintf(Buffer, BufferCount, &Format, v12); /*0x4a60fc*/
    v9 = (_DWORD *)RenderTextLabel(a3, a4, a5, a6, a7, a8, 1); /*0x4a6143*/
    *a1 = *v9; /*0x4a614e*/
    a1[1] = v9[1]; /*0x4a6153*/
    return a1; /*0x4a6145*/
  }
  else
  {
    v11 = (_DWORD *)RenderTextLabel(a3, a4, a5, a6, a7, a8, 1); /*0x4a619a*/
    *a1 = *v11; /*0x4a61a5*/
    a1[1] = v11[1]; /*0x4a61aa*/
    return a1; /*0x4a619c*/
  }
}



// ==== 0x004A61C0  TextRenderer::DrawText  this=TextRenderer  sig=csp ====
int *TextRenderer_DrawText(int *a1, size_t BufferCount, int a3, _DWORD *a4, int a5, int a6, int a7, int a8, ...)
{
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  va_list v12; // [esp+0h] [ebp-410h]
  int v13[2]; // [esp+4h] [ebp-40Ch] BYREF
  _BYTE v14[4]; // [esp+Ch] [ebp-404h] BYREF
  wchar_t Buffer[512]; // [esp+10h] [ebp-400h] BYREF
  va_list Format; // [esp+434h] [ebp+24h] BYREF

  va_start(Format, a8);
  if ( BufferCount ) /*0x4a61cd*/
  {
    vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v12); /*0x4a61e1*/
    v8 = Color::ConvertToRGB(v14); /*0x4a6202*/
    LOWORD(v13[0]) = *(_WORD *)v8; /*0x4a6210*/
    BYTE2(v13[0]) = *(_BYTE *)(v8 + 2); /*0x4a621b*/
    v9 = RenderTextLabel( /*0x4a6293*/
           v13,
           (int)Buffer,
           a3,
           a4,
           a5,
           (BYTE1(v13[0]) >> g_BitMask_Blue << g_BitMask_Green)
         | (BYTE2(v13[0]) >> g_BitMask_Red << g_BitShift_Blue)
         | (LOBYTE(v13[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
           a7,
           a8,
           1);
  }
  else
  {
    v10 = Color::ConvertToRGB(v14); /*0x4a62b1*/
    LOWORD(v13[0]) = *(_WORD *)v10; /*0x4a62bf*/
    BYTE2(v13[0]) = *(_BYTE *)(v10 + 2); /*0x4a62ca*/
    v9 = RenderTextLabel( /*0x4a6340*/
           v13,
           0,
           a3,
           a4,
           a5,
           (BYTE1(v13[0]) >> g_BitMask_Blue << g_BitMask_Green)
         | (BYTE2(v13[0]) >> g_BitMask_Red << g_BitShift_Blue)
         | (LOBYTE(v13[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
           a7,
           a8,
           1);
  }
  *a1 = *v9; /*0x4a6351*/
  a1[1] = v9[1]; /*0x4a6356*/
  return a1; /*0x4a634e*/
}



// ==== 0x004A6360  RenderTextLabelWordWrap  this=-  sig=csp ====
int *__fastcall TextLabel_RenderWordWrap(
        int *a1,
        const wchar_t *a2,
        int a3,
        _DWORD *a4,
        int *a5,
        __int16 a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int *a10)
{
  int *v10; // esi
  int v11; // edi
  wchar_t *v12; // ebp
  unsigned int v13; // ebx
  wchar_t *v14; // eax
  wchar_t *v15; // edx
  int v16; // esi
  wchar_t *v17; // edi
  int v18; // eax
  int v19; // edx
  int *v20; // eax
  unsigned int *v21; // ecx
  unsigned int v22; // eax
  int v24; // [esp+Ch] [ebp-424h]
  wchar_t *v25; // [esp+10h] [ebp-420h]
  int v27; // [esp+1Ch] [ebp-414h]
  _DWORD v28[2]; // [esp+20h] [ebp-410h] BYREF
  int v29; // [esp+28h] [ebp-408h] BYREF
  wchar_t Destination[512]; // [esp+30h] [ebp-400h] BYREF

  v10 = a1; /*0x4a636f*/
  v11 = *a5; /*0x4a6371*/
  v27 = a5[1]; /*0x4a637c*/
  if ( a2 ) /*0x4a6380*/
  {
    wcscpy(Destination, a2); /*0x4a638e*/
    v12 = Destination; /*0x4a63a0*/
    v13 = 0; /*0x4a63a4*/
    v24 = 1; /*0x4a63a6*/
    do /*0x4a64d6*/
    {
      if ( v13 >= a9 ) /*0x4a63b5*/
        break; /*0x4a63b5*/
      v14 = wcschr(v12, 9u); /*0x4a63be*/
      v15 = v14; /*0x4a63c3*/
      v25 = v14; /*0x4a63ca*/
      if ( v14 ) /*0x4a63ce*/
        *v14 = 0; /*0x4a63d0*/
      LOWORD(v14) = *v12; /*0x4a63d5*/
      if ( *v12 ) /*0x4a63d5*/
      {
        v16 = 0; /*0x4a63e2*/
        v17 = v12; /*0x4a63e4*/
        do /*0x4a6409*/
        {
          ++v17; /*0x4a63eb*/
          v14 = (wchar_t *)FontClass::GetPixelData(v14); /*0x4a63ee*/
          v16 += (int)v14; /*0x4a63f3*/
          LOWORD(v14) = *v17; /*0x4a63f5*/
        }
        while ( *v17 && v16 + v13 < a9 ); /*0x4a6409*/
        HIWORD(v18) = HIWORD(a9); /*0x4a640b*/
        if ( v16 + v13 >= a9 ) /*0x4a6417*/
        {
          LOWORD(v18) = *(v17 - 1); /*0x4a6419*/
          v16 -= FontClass::GetPixelData(v18); /*0x4a642a*/
          *(v17 - 1) = 0; /*0x4a642c*/
          v24 = 0; /*0x4a6431*/
        }
        v19 = a5[1]; /*0x4a6444*/
        v28[0] = v13 + *a5; /*0x4a6450*/
        v28[1] = v19; /*0x4a645b*/
        v20 = RenderTextLabel(&v29, (int)v12, a3, a4, (int)v28, a6, a7, a8, 1); /*0x4a6484*/
        v11 = *v20; /*0x4a6489*/
        v13 += v16; /*0x4a648b*/
        v10 = a1; /*0x4a648d*/
        v15 = v25; /*0x4a6491*/
        v27 = v20[1]; /*0x4a6498*/
      }
      if ( !v15 ) /*0x4a649e*/
        break; /*0x4a649e*/
      v21 = a10; /*0x4a64a0*/
      if ( a10 ) /*0x4a64a9*/
      {
        if ( v13 > *a10 ) /*0x4a64ad*/
        {
          do /*0x4a64b7*/
          {
            v22 = v21[1]; /*0x4a64af*/
            ++v21; /*0x4a64b2*/
          }
          while ( v13 > v22 ); /*0x4a64b7*/
          a10 = v21; /*0x4a64b9*/
        }
        v13 = *v21; /*0x4a64c0*/
      }
      else
      {
        v13 = 10 * (5 * v13 + 5); /*0x4a64cb*/
      }
      v12 = v15 + 1; /*0x4a64d1*/
    }
    while ( v24 ); /*0x4a64d6*/
  }
  *v10 = v11; /*0x4a64e2*/
  v10[1] = v27; /*0x4a64e4*/
  return v10; /*0x4a64e9*/
}



// ==== 0x004A6500  FillRectangle  this=-  sig=csp ====
_DWORD *__fastcall Rectangle_Fill(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // edx
  __int16 v16; // [esp+8h] [ebp-8h] BYREF
  unsigned __int8 v17; // [esp+Ah] [ebp-6h]

  v12 = Color::ConvertToRGB((unsigned __int8 *)(a6 + 776), (int)&a6); /*0x4a6518*/
  v16 = *(_WORD *)v12; /*0x4a6526*/
  v17 = *(_BYTE *)(v12 + 2); /*0x4a652e*/
  v13 = (_DWORD *)RenderTextLabelWordWrap( /*0x4a65a7*/
                    &v16,
                    a2,
                    a3,
                    a4,
                    a5,
                    ((unsigned __int8)v16 >> g_BitShift_Green_0 << g_BitShift_Red)
                  | (HIBYTE(v16) >> g_BitMask_Blue << g_BitMask_Green)
                  | (v17 >> g_BitMask_Red << g_BitShift_Blue),
                    a7,
                    a8,
                    a9,
                    a10);
  *a1 = *v13; /*0x4a65ae*/
  v14 = v13[1]; /*0x4a65b1*/
  a1[1] = v14; /*0x4a65b6*/
  return a1; /*0x4a65b0*/
}



// ==== 0x004A65C0  sub_4A65C0  this=-  sig=ida-proto ====
int *__fastcall sub_4A65C0(int *a1, int a2, int a3, _DWORD *a4, int a5, __int16 a6, int a7, int a8, int a9, int a10)
{
  int *v12; // eax
  int v14; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a65d0*/
  {
    v12 = RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a65fb*/
  }
  else
  {
    v14 = Color::ConvertToRGB((unsigned __int8 *)(*((_DWORD *)dword_B054D4 + a9) + 776), (int)&a9); /*0x4a6628*/
    LOWORD(v15[0]) = *(_WORD *)v14; /*0x4a6630*/
    BYTE2(v15[0]) = *(_BYTE *)(v14 + 2); /*0x4a663e*/
    v12 = RenderTextLabel( /*0x4a66b2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (BYTE1(v15[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (BYTE2(v15[0]) >> g_BitMask_Red << g_BitShift_Blue)
          | (LOBYTE(v15[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6602*/
  a1[1] = v12[1]; /*0x4a660a*/
  return a1; /*0x4a6604*/
}



// ==== 0x004A66D0  globalHelper_0A66D0  this=-  sig=csp ====
int *__fastcall sub_4A66D0(int *a1, int a2, int a3, _DWORD *a4, int a5, __int16 a6, int a7, int a8, int a9, int a10)
{
  int *v12; // eax
  int v14; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a66e0*/
  {
    v12 = RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a670b*/
  }
  else
  {
    v14 = Color::ConvertToRGB((unsigned __int8 *)(*((_DWORD *)dword_B054D4 + a9) + 776), (int)&a9); /*0x4a6738*/
    LOWORD(v15[0]) = *(_WORD *)v14; /*0x4a6740*/
    BYTE2(v15[0]) = *(_BYTE *)(v14 + 2); /*0x4a674e*/
    v12 = RenderTextLabel( /*0x4a67c2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (BYTE1(v15[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (BYTE2(v15[0]) >> g_BitMask_Red << g_BitShift_Blue)
          | (LOBYTE(v15[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6712*/
  a1[1] = v12[1]; /*0x4a671a*/
  return a1; /*0x4a6714*/
}



// ==== 0x004A67E0  sub_4A67E0  this=-  sig=ida-proto ====
int *__fastcall sub_4A67E0(char a1, int a2)
{
  int v2; // ecx

  LOBYTE(a2) = a1; /*0x4a67e0*/
  BYTE1(a2) = a1; /*0x4a67e4*/
  dword_8A0150 = 0; /*0x4a67e6*/
  dword_8A0154 = 0; /*0x4a67ed*/
  v2 = a2 << 16; /*0x4a67f2*/
  dword_8A0158 = 0; /*0x4a67f5*/
  LOWORD(v2) = a2; /*0x4a67fa*/
  *(int *)((char *)&dword_8A0158 + 3) = v2; /*0x4a6802*/
  HIBYTE(dword_8A015C) = a2; /*0x4a6808*/
  return &dword_8A0150; /*0x4a6813*/
}



// ==== 0x004A6820  sub_4A6820  this=-  sig=ida-proto ====
int sub_4A6820()
{
  dword_8A0170 = 0; /*0x4a6822*/
  dword_8A0174 = 0; /*0x4a6827*/
  dword_8A0178 = 0; /*0x4a682c*/
  dword_8A017C = 0; /*0x4a6831*/
  return 0; /*0x4a6836*/
}



// ==== 0x004A6840  ObjectClass::method_4A6840  this=ObjectClass  sig=csp ====
char *__thiscall sub_4A6840(ObjectClass *this, HWND hWnd, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int i; // eax
  _BYTE *v8; // ecx
  int *p_vtable3; // ebp
  HDC DC; // edi
  _DWORD *ptr_4; // ecx
  int uniqueId; // edx
  int v13; // eax
  unsigned int v14; // ebp
  char *v15; // edi
  int abstractFlags; // eax
  void *ptr_C; // ecx

  LOBYTE(this->AbstractClass) = 0; /*0x4a6855*/
  this->? = 0; /*0x4a6857*/
  this->? = 0; /*0x4a685a*/
  this->? = 0; /*0x4a685d*/
  this->? = a3; /*0x4a6860*/
  this->? = a4; /*0x4a6863*/
  this->? = 0; /*0x4a6866*/
  this->? = 0; /*0x4a6869*/
  this->? = 0; /*0x4a686c*/
  v6 = (_DWORD *)__2_YAPAXI_Z(0x42Cu); /*0x4a686f*/
  this->? = v6; /*0x4a6879*/
  if ( !v6 ) /*0x4a687c*/
    goto LABEL_12; /*0x4a687c*/
  *v6 = 40; /*0x4a6882*/
  *((_DWORD *)this->? + 1) = a3; /*0x4a688d*/
  *((_DWORD *)this->? + 2) = -a4; /*0x4a6893*/
  *((_WORD *)this->? + 6) = 1; /*0x4a689d*/
  *((_WORD *)this->? + 7) = 8; /*0x4a68a6*/
  *((_DWORD *)this->? + 4) = 0; /*0x4a68af*/
  *((_DWORD *)this->? + 5) = 0; /*0x4a68b5*/
  *((_DWORD *)this->? + 6) = 0; /*0x4a68bb*/
  *((_DWORD *)this->? + 7) = 0; /*0x4a68c6*/
  *((_DWORD *)this->? + 8) = 256; /*0x4a68cc*/
  *((_DWORD *)this->? + 9) = 256; /*0x4a68d2*/
  for ( i = 0; i < 256; *((_BYTE *)this->? + 4 * i + 39) = 0 ) /*0x4a68d5*/
  {
    v8 = (_BYTE *)(a5 + 2 * (i % 256) + i % 256); /*0x4a68ef*/
    ++i; /*0x4a68f1*/
    *((_BYTE *)this->? + 4 * i + 36) = v8[2]; /*0x4a68fa*/
    *((_BYTE *)this->? + 4 * i + 37) = v8[1]; /*0x4a6904*/
    *((_BYTE *)this->? + 4 * i + 38) = *v8; /*0x4a690d*/
  }
  p_vtable3 = (int *)&this->?; /*0x4a6929*/
  DC = GetDC(hWnd); /*0x4a692e*/
  this->? = CreateDIBSection(DC, (const BITMAPINFO *)this->?, 0, &this->?, 0, 0); /*0x4a693f*/
  ReleaseDC(hWnd, DC); /*0x4a6942*/
  if ( !this->? ) /*0x4a6948*/
    goto LABEL_12; /*0x4a6948*/
  ptr_4 = this->?; /*0x4a6951*/
  this->? = ptr_4[1]; /*0x4a6957*/
  uniqueId = this->?; /*0x4a6962*/
  this->? = abs32(ptr_4[2]); /*0x4a6965*/
  v13 = uniqueId + 3; /*0x4a6968*/
  LOBYTE(v13) = (uniqueId + 3) & 0xFC; /*0x4a696b*/
  this->? = v13; /*0x4a696d*/
  if ( (int)ptr_4[2] <= 0 ) /*0x4a6975*/
  {
    this->? = *p_vtable3; /*0x4a698b*/
  }
  else
  {
    this->? = *p_vtable3 + uniqueId * (this->? - 1); /*0x4a6981*/
    v13 = -v13; /*0x4a6984*/
  }
  this->? = v13; /*0x4a698e*/
  v14 = abs32(v13); /*0x4a6998*/
  v15 = (char *)__2_YAPAXI_Z(0x20u); /*0x4a699f*/
  if ( v15 ) /*0x4a69a6*/
  {
    abstractFlags = this->?; /*0x4a69a8*/
    ptr_C = this->?; /*0x4a69ab*/
    *((_DWORD *)v15 + 2) = abstractFlags; /*0x4a69ae*/
    *((_DWORD *)v15 + 1) = v14; /*0x4a69b9*/
    *((_DWORD *)v15 + 3) = 0; /*0x4a69bc*/
    *(_DWORD *)v15 = &XSurface_Vtable; /*0x4a69bf*/
    *((_DWORD *)v15 + 4) = 1; /*0x4a69c5*/
    Buffer::Init((Buffer *)(v15 + 20), (int)ptr_C, v14 * abstractFlags); /*0x4a69cc*/
    *(_DWORD *)v15 = &BSurface_Vtable; /*0x4a69d1*/
  }
  else
  {
    v15 = 0; /*0x4a69d9*/
  }
  this->? = v15; /*0x4a69dd*/
  if ( !v15 ) /*0x4a69e0*/
LABEL_12:
    LOBYTE(this->AbstractClass) = 1; /*0x4a69e2*/
  return (char *)this; /*0x4a69e7*/
}



// ==== 0x004A6A60  sub_4A6A60  this=-  sig=ida-proto ====
void sub_4A6A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a6a6c*/
  dbl_8A0238 = Math::Sqrt(v0 + v0); /*0x4a6a7e*/
}



// ==== 0x004A6A90  sub_4A6A90  this=-  sig=ida-proto ====
void sub_4A6A90()
{
  dbl_8A0288 = dbl_8A0238 / 60.0; /*0x4a6a9c*/
}



// ==== 0x004A6AB0  sub_4A6AB0  this=-  sig=ida-proto ====
void sub_4A6AB0()
{
  dbl_8A0270 = 1.0 / dbl_8A0288; /*0x4a6abc*/
}



// ==== 0x004A6AD0  sub_4A6AD0  this=-  sig=ida-proto ====
void sub_4A6AD0()
{
  dbl_8A0268 = 0.0174532925199433 * 45.0; /*0x4a6adc*/
}



// ==== 0x004A6AF0  sub_4A6AF0  this=-  sig=ida-proto ====
void sub_4A6AF0()
{
  dbl_8A0240 = 0.0174532925199433 * 60.0; /*0x4a6afc*/
}



// ==== 0x004A6B10  sub_4A6B10  this=-  sig=ida-proto ====
void sub_4A6B10()
{
  dbl_8A0200 = 0.0174532925199433 * 90.0; /*0x4a6b1c*/
}



// ==== 0x004A6B30  sub_4A6B30  this=-  sig=ida-proto ====
__int64 sub_4A6B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0200 - dbl_8A0240); /*0x4a6b42*/
  result = Math::RoundToInt(v0 * dbl_8A0238 * 0.5); /*0x4a6b56*/
  dword_8A0290 = result; /*0x4a6b5b*/
  return result; /*0x4a6b60*/
}



// ==== 0x004A6B70  sub_4A6B70  this=-  sig=ida-proto ====
void sub_4A6B70()
{
  dbl_8A0248 = Math::ArcTan((double)dword_8A0290 * 0.00390625); /*0x4a6b87*/
}



// ==== 0x004A6BA0  sub_4A6BA0  this=-  sig=ida-proto ====
void sub_4A6BA0()
{
  dbl_8A0260 = Math::ArcTan((double)(2 * dword_8A0290) / dbl_8A0238); /*0x4a6bc2*/
}



// ==== 0x004A6BD0  sub_4A6BD0  this=-  sig=ida-proto ====
__int64 sub_4A6BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0290) + 0.5); /*0x4a6beb*/
  dword_8A0284 = result; /*0x4a6bf0*/
  return result; /*0x4a6bf6*/
}



// ==== 0x004A6C00  sub_4A6C00  this=-  sig=ida-proto ====
int sub_4A6C00()
{
  word_8A0230 = 0; /*0x4a6c02*/
  word_8A0232 = 0; /*0x4a6c08*/
  return 0; /*0x4a6c0e*/
}



// ==== 0x004A6C10  sub_4A6C10  this=-  sig=ida-proto ====
int sub_4A6C10()
{
  dword_8A0250 = 0; /*0x4a6c12*/
  dword_8A0254 = 0; /*0x4a6c17*/
  dword_8A0258 = 0; /*0x4a6c1c*/
  return 0; /*0x4a6c21*/
}



// ==== 0x004A6C30  sub_4A6C30  this=-  sig=ida-proto ====
int sub_4A6C30()
{
  dword_8A0280 = 0; /*0x4a6c35*/
  dword_8A0278 = 128; /*0x4a6c3f*/
  dword_8A027C = 128; /*0x4a6c44*/
  return 128; /*0x4a6c49*/
}



// ==== 0x004A6C50  sub_4A6C50  this=-  sig=ida-proto ====
int sub_4A6C50()
{
  dword_8A0220 = 0; /*0x4a6c52*/
  dword_8A0224 = 0; /*0x4a6c57*/
  dword_8A0228 = 0; /*0x4a6c5c*/
  dword_8A022C = 0; /*0x4a6c61*/
  return 0; /*0x4a6c66*/
}



// ==== 0x004A6C70  sub_4A6C70  this=-  sig=ida-proto ====
int sub_4A6C70()
{
  dword_8A020C = 0; /*0x4a6c77*/
  dword_8A0210 = 0; /*0x4a6c7c*/
  byte_8A0214 = 1; /*0x4a6c81*/
  byte_8A0215 = 0; /*0x4a6c88*/
  dword_8A0208 = (int)&DynamicVectorClass<DiskLaserClass *>::`vftable'; /*0x4a6c8d*/
  dword_8A021C = 10; /*0x4a6c97*/
  dword_8A0218 = 0; /*0x4a6ca1*/
  return atexit(sub_4A6CB0); /*0x4a6cac*/
}



// ==== 0x004A6CB0  sub_4A6CB0  this=-  sig=ida-proto ====
void __cdecl sub_4A6CB0()
{
  dword_8A0208 = (int)&VectorClass<DiskLaserClass *>::`vftable'; /*0x4a6cb8*/
  if ( dword_8A020C && byte_8A0215 ) /*0x4a6ccc*/
  {
    __3_YAXPAX_Z(dword_8A020C); /*0x4a6ccf*/
    dword_8A020C = 0; /*0x4a6cd7*/
  }
  byte_8A0215 = 0; /*0x4a6cdd*/
  dword_8A0210 = 0; /*0x4a6ce3*/
}



// ==== 0x004A6CF0  InitDirectionOffsets  this=-  sig=ida-proto ====
__int64 Direction_InitOffsets()
{
  double v0; // st7
  int v1; // esi
  double v2; // st7
  double v3; // st7
  int v4; // esi
  double v5; // st7
  double v6; // st7
  int v7; // esi
  double v8; // st7
  double v9; // st7
  int v10; // esi
  double v11; // st7
  double v12; // st7
  int v13; // esi
  double v14; // st7
  double v15; // st7
  int v16; // esi
  double v17; // st7
  double v18; // st7
  int v19; // esi
  double v20; // st7
  double v21; // st7
  int v22; // esi
  double v23; // st7
  double v24; // st7
  int v25; // esi
  double v26; // st7
  double v27; // st7
  int v28; // esi
  double v29; // st7
  double v30; // st7
  int v31; // esi
  double v32; // st7
  double v33; // st7
  int v34; // esi
  double v35; // st7
  double v36; // st7
  int v37; // esi
  double v38; // st7
  double v39; // st7
  int v40; // esi
  double v41; // st7
  double v42; // st7
  int v43; // esi
  double v44; // st7
  double v45; // st7
  int v46; // esi
  double v47; // st7
  __int64 result; // rax

  v0 = Math::SinCos(0.0174532925199433 * 270.0); /*0x4a6d03*/
  v1 = Math::RoundToInt(v0 * 240.0); /*0x4a6d1f*/
  v2 = Math::ArcTan2(0.0174532925199433 * 270.0); /*0x4a6d24*/
  dword_8A0180[0] = Math::RoundToInt(v2 * 240.0); /*0x4a6d40*/
  dword_8A0184[0] = v1; /*0x4a6d45*/
  v3 = Math::SinCos(0.0174532925199433 * 292.0); /*0x4a6d4e*/
  v4 = Math::RoundToInt(v3 * 240.0); /*0x4a6d6a*/
  v5 = Math::ArcTan2(0.0174532925199433 * 292.0); /*0x4a6d6f*/
  dword_8A0188 = Math::RoundToInt(v5 * 240.0); /*0x4a6d8b*/
  dword_8A018C = v4; /*0x4a6d90*/
  v6 = Math::SinCos(0.0174532925199433 * 315.0); /*0x4a6d99*/
  v7 = Math::RoundToInt(v6 * 240.0); /*0x4a6db5*/
  v8 = Math::ArcTan2(0.0174532925199433 * 315.0); /*0x4a6dba*/
  dword_8A0190 = Math::RoundToInt(v8 * 240.0); /*0x4a6dd6*/
  dword_8A0194 = v7; /*0x4a6ddb*/
  v9 = Math::SinCos(0.0174532925199433 * 337.0); /*0x4a6de4*/
  v10 = Math::RoundToInt(v9 * 240.0); /*0x4a6e00*/
  v11 = Math::ArcTan2(0.0174532925199433 * 337.0); /*0x4a6e05*/
  dword_8A0198 = Math::RoundToInt(v11 * 240.0); /*0x4a6e19*/
  dword_8A019C = v10; /*0x4a6e1e*/
  v12 = Math::SinCos(0.0); /*0x4a6e24*/
  v13 = Math::RoundToInt(v12 * 240.0); /*0x4a6e38*/
  v14 = Math::ArcTan2(0.0); /*0x4a6e3a*/
  dword_8A01A0 = Math::RoundToInt(v14 * 240.0); /*0x4a6e59*/
  dword_8A01A4 = v13; /*0x4a6e5e*/
  v15 = Math::SinCos(0.0174532925199433 * 22.0); /*0x4a6e67*/
  v16 = Math::RoundToInt(v15 * 240.0); /*0x4a6e83*/
  v17 = Math::ArcTan2(0.0174532925199433 * 22.0); /*0x4a6e88*/
  dword_8A01A8 = Math::RoundToInt(v17 * 240.0); /*0x4a6ea4*/
  dword_8A01AC = v16; /*0x4a6ea9*/
  v18 = Math::SinCos(0.0174532925199433 * 45.0); /*0x4a6eb2*/
  v19 = Math::RoundToInt(v18 * 240.0); /*0x4a6ece*/
  v20 = Math::ArcTan2(0.0174532925199433 * 45.0); /*0x4a6ed3*/
  dword_8A01B0 = Math::RoundToInt(v20 * 240.0); /*0x4a6eef*/
  dword_8A01B4 = v19; /*0x4a6ef4*/
  v21 = Math::SinCos(0.0174532925199433 * 67.0); /*0x4a6efd*/
  v22 = Math::RoundToInt(v21 * 240.0); /*0x4a6f19*/
  v23 = Math::ArcTan2(0.0174532925199433 * 67.0); /*0x4a6f1e*/
  dword_8A01B8 = Math::RoundToInt(v23 * 240.0); /*0x4a6f3a*/
  dword_8A01BC = v22; /*0x4a6f3f*/
  v24 = Math::SinCos(0.0174532925199433 * 90.0); /*0x4a6f48*/
  v25 = Math::RoundToInt(v24 * 240.0); /*0x4a6f64*/
  v26 = Math::ArcTan2(0.0174532925199433 * 90.0); /*0x4a6f69*/
  dword_8A01C0 = Math::RoundToInt(v26 * 240.0); /*0x4a6f85*/
  dword_8A01C4 = v25; /*0x4a6f8a*/
  v27 = Math::SinCos(0.0174532925199433 * 112.0); /*0x4a6f93*/
  v28 = Math::RoundToInt(v27 * 240.0); /*0x4a6faf*/
  v29 = Math::ArcTan2(0.0174532925199433 * 112.0); /*0x4a6fb4*/
  dword_8A01C8 = Math::RoundToInt(v29 * 240.0); /*0x4a6fd0*/
  dword_8A01CC = v28; /*0x4a6fd5*/
  v30 = Math::SinCos(0.0174532925199433 * 135.0); /*0x4a6fde*/
  v31 = Math::RoundToInt(v30 * 240.0); /*0x4a6ffa*/
  v32 = Math::ArcTan2(0.0174532925199433 * 135.0); /*0x4a6fff*/
  dword_8A01D0 = Math::RoundToInt(v32 * 240.0); /*0x4a701b*/
  dword_8A01D4 = v31; /*0x4a7020*/
  v33 = Math::SinCos(0.0174532925199433 * 157.0); /*0x4a7029*/
  v34 = Math::RoundToInt(v33 * 240.0); /*0x4a7045*/
  v35 = Math::ArcTan2(0.0174532925199433 * 157.0); /*0x4a704a*/
  dword_8A01D8 = Math::RoundToInt(v35 * 240.0); /*0x4a7066*/
  dword_8A01DC = v34; /*0x4a706b*/
  v36 = Math::SinCos(0.0174532925199433 * 180.0); /*0x4a7074*/
  v37 = Math::RoundToInt(v36 * 240.0); /*0x4a7090*/
  v38 = Math::ArcTan2(0.0174532925199433 * 180.0); /*0x4a7095*/
  dword_8A01E0 = Math::RoundToInt(v38 * 240.0); /*0x4a70b1*/
  dword_8A01E4 = v37; /*0x4a70b6*/
  v39 = Math::SinCos(0.0174532925199433 * 202.0); /*0x4a70bf*/
  v40 = Math::RoundToInt(v39 * 240.0); /*0x4a70db*/
  v41 = Math::ArcTan2(0.0174532925199433 * 202.0); /*0x4a70e0*/
  dword_8A01E8 = Math::RoundToInt(v41 * 240.0); /*0x4a70fc*/
  dword_8A01EC = v40; /*0x4a7101*/
  v42 = Math::SinCos(0.0174532925199433 * 235.0); /*0x4a710a*/
  v43 = Math::RoundToInt(v42 * 240.0); /*0x4a7126*/
  v44 = Math::ArcTan2(0.0174532925199433 * 235.0); /*0x4a712b*/
  dword_8A01F0 = Math::RoundToInt(v44 * 240.0); /*0x4a7147*/
  dword_8A01F4 = v43; /*0x4a714c*/
  v45 = Math::SinCos(0.0174532925199433 * 257.0); /*0x4a7155*/
  v46 = Math::RoundToInt(v45 * 240.0); /*0x4a7171*/
  v47 = Math::ArcTan2(0.0174532925199433 * 257.0); /*0x4a7176*/
  result = Math::RoundToInt(v47 * 240.0); /*0x4a7184*/
  dword_8A01FC = v46; /*0x4a7189*/
  dword_8A01F8 = result; /*0x4a718f*/
  return result; /*0x4a7194*/
}



// ==== 0x004A71A0  DiskLaserClass::Fire  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::Fire(DiskLaserClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st7
  int result; // eax
  unsigned int *v8; // ebp
  int *v9; // eax
  _BYTE v10[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+30h] [ebp-Ch] BYREF
  unsigned int v12; // [esp+40h] [ebp+4h]

  if ( a2 ) /*0x4a71ad*/
  {
    if ( a3 ) /*0x4a7201*/
    {
      if ( a4 ) /*0x4a7229*/
      {
        this->DiskLaserClass_field_0x24 = a2; /*0x4a729e*/
        *((_DWORD *)this + 15) = a5; /*0x4a72a1*/
        this->DiskLaserClass_field_0x28 = a3; /*0x4a72a4*/
        *((_DWORD *)this + 11) = a4; /*0x4a72a7*/
        v8 = (unsigned int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 72))(a3, v10); /*0x4a72b9*/
        v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v11); /*0x4a72c0*/
        v12 = *v8; /*0x4a72c8*/
        Math::CalcAngle((double)v9[1] - (double)(int)v8[1], (double)(int)*v8 - (double)*v9); /*0x4a72eb*/
        LOWORD(result) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x4a72ff*/
        LOWORD(v12) = result; /*0x4a7304*/
        *((_DWORD *)this + 13) = (int)(((((v12 >> 11) + 1) >> 1) & 0xF) + 8) % 16; /*0x4a7326*/
        this->ptr_10 = 0; /*0x4a7329*/
        *((_DWORD *)this + 14) = 0; /*0x4a7330*/
        return result; /*0x4a7330*/
      }
      this->ptr_10 = -1; /*0x4a722b*/
      result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x4a7232*/
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] ) /*0x4a723d*/
      {
LABEL_18:
        result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x4a727a*/
        *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x4a7290*/
        return result; /*0x4a7297*/
      }
      if ( !g_BuildingLoadQueue_Array.__pad_E5C[9] ) /*0x4a7247*/
        goto LABEL_14; /*0x4a7247*/
    }
    else
    {
      this->ptr_10 = -1; /*0x4a7203*/
      result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x4a720a*/
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] ) /*0x4a7215*/
        goto LABEL_18; /*0x4a7215*/
      if ( !g_BuildingLoadQueue_Array.__pad_E5C[9] ) /*0x4a721f*/
      {
LABEL_14:
        if ( result ) /*0x4a724b*/
          return result; /*0x4a724b*/
      }
    }
    if ( g_BuildingLoadQueue_Array.UnitExitSound <= 0 ) /*0x4a7259*/
      return result; /*0x4a7259*/
    result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))( /*0x4a726f*/
               &g_BuildingLoadQueue_Array.ToTile,
               result + g_BuildingLoadQueue_Array.UnitExitSound,
               0);
LABEL_17:
    if ( !(_BYTE)result ) /*0x4a7274*/
      return result; /*0x4a7274*/
    goto LABEL_18; /*0x4a7274*/
  }
  this->ptr_10 = -1; /*0x4a71af*/
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x4a71b6*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] ) /*0x4a71c1*/
    goto LABEL_18; /*0x4a71c1*/
  if ( (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]) /*0x4a71e1*/
    && g_BuildingLoadQueue_Array.UnitExitSound > 0 )
  {
    result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))( /*0x4a71f6*/
               &g_BuildingLoadQueue_Array.ToTile,
               *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
               0);
    goto LABEL_17; /*0x4a71f9*/
  }
  return result; /*0x4a7280*/
}



// ==== 0x004A7340  DiskLaserClass::Update  this=DiskLaserClass  sig=csp ====
char __thiscall DiskLaserClass::Update(DiskLaserClass *this)
{
  int v2; // eax
  int v3; // eax
  int *v4; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // edi
  _DWORD *v8; // eax
  int *v9; // eax
  int v10; // edi
  int DiskLaserClass_field_0x28; // ebx
  int FoundationHeight; // ebp
  _BYTE *DiskLaserClass_field_0x24; // ecx
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ebp
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // edi
  int v23; // edx
  bool v24; // zf
  __int16 *v25; // edx
  int v26; // ecx
  int v27; // eax
  _BYTE *v28; // ecx
  int *v29; // eax
  int v30; // ecx
  char *v31; // eax
  DiskLaserClass *v32; // ecx
  DiskLaserClass *v33; // edx
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // edi
  int v39; // edi
  int v40; // ecx
  DiskLaserClass **v41; // ecx
  char v42; // dl
  int v43; // eax
  int v44; // ebx
  int v45; // edi
  int v46; // ebx
  int v47; // edi
  char *v48; // eax
  DiskLaserClass **v49; // ecx
  int v50; // eax
  DiskLaserClass ***v52; // [esp-Ch] [ebp-70h]
  DiskLaserClass ***v53; // [esp-Ch] [ebp-70h]
  int v54; // [esp-Ch] [ebp-70h]
  DiskLaserClass **v55; // [esp-8h] [ebp-6Ch] BYREF
  DiskLaserClass *v56; // [esp-4h] [ebp-68h] BYREF
  DiskLaserClass *v57; // [esp+0h] [ebp-64h]
  int v58; // [esp+4h] [ebp-60h]
  int v59; // [esp+8h] [ebp-5Ch]
  int v60; // [esp+Ch] [ebp-58h]
  int v61; // [esp+10h] [ebp-54h]
  _BYTE *v62; // [esp+24h] [ebp-40h]
  __int16 v63; // [esp+28h] [ebp-3Ch] BYREF
  char v64; // [esp+2Ah] [ebp-3Ah]
  __int16 *v65; // [esp+2Ch] [ebp-38h]
  int v66; // [esp+30h] [ebp-34h]
  DiskLaserClass *v67; // [esp+34h] [ebp-30h] BYREF
  char *v68; // [esp+38h] [ebp-2Ch]
  int v69; // [esp+3Ch] [ebp-28h]
  int v70; // [esp+40h] [ebp-24h] BYREF
  int v71; // [esp+44h] [ebp-20h]
  int v72; // [esp+48h] [ebp-1Ch]
  int v73; // [esp+4Ch] [ebp-18h] BYREF
  int v74; // [esp+50h] [ebp-14h]
  int v75; // [esp+54h] [ebp-10h]
  int v76[3]; // [esp+58h] [ebp-Ch] BYREF

  v2 = this->ptr_10; /*0x4a7349*/
  if ( v2 < 0 ) /*0x4a734e*/
    goto LABEL_2; /*0x4a734e*/
  if ( v2 > 0 ) /*0x4a7372*/
  {
    v3 = v2 - 1; /*0x4a7374*/
    this->ptr_10 = v3; /*0x4a7375*/
    return v3; /*0x4a737f*/
  }
  v4 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->DiskLaserClass_field_0x24 + 72))( /*0x4a738a*/
                this->DiskLaserClass_field_0x24,
                v76);
  v5 = *v4; /*0x4a738d*/
  v6 = v4[1]; /*0x4a7392*/
  v7 = v4[2]; /*0x4a7397*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this->DiskLaserClass_field_0x24 + 84))(this->DiskLaserClass_field_0x24) ) /*0x4a739a*/
    v7 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)this->DiskLaserClass_field_0x28 + 72))( /*0x4a73ae*/
                       this->DiskLaserClass_field_0x28,
                       v76)
                   + 8);
  v8 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->DiskLaserClass_field_0x28 + 72))( /*0x4a73bb*/
                   this->DiskLaserClass_field_0x28,
                   v76);
  v9 = Coord::Subtract((Coord *)&v70, v5 - *v8, v6 - v8[1], v7 - v8[2]); /*0x4a73d3*/
  v73 = *v9; /*0x4a73da*/
  v74 = v9[1]; /*0x4a73e5*/
  v75 = v9[2]; /*0x4a73ec*/
  v10 = Coord::Length((Coord *)&v73); /*0x4a73f8*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->DiskLaserClass_field_0x28 + 44))(this->DiskLaserClass_field_0x28) == 6 ) /*0x4a7402*/
  {
    DiskLaserClass_field_0x28 = this->DiskLaserClass_field_0x28; /*0x4a7404*/
    if ( DiskLaserClass_field_0x28 ) /*0x4a7409*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(DiskLaserClass_field_0x28 + 1312), 0); /*0x4a741e*/
      v10 += -64 /*0x4a742c*/
           * (BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(DiskLaserClass_field_0x28 + 1312))
            + FoundationHeight);
      if ( v10 < 0 ) /*0x4a742e*/
        v10 = 0; /*0x4a7430*/
    }
  }
  if ( v10 > *(_DWORD *)(*((_DWORD *)this + 11) + 180) ) /*0x4a743b*/
  {
    this->ptr_10 = -1; /*0x4a7441*/
    v67 = this; /*0x4a744e*/
    LOBYTE(v3) = VectorClass::AppendCopy((VectorClass *)&g_BuildingLoadQueue_Array.ToTile, &v67); /*0x4a7452*/
    return v3; /*0x4a745e*/
  }
  DiskLaserClass_field_0x24 = (_BYTE *)this->DiskLaserClass_field_0x24; /*0x4a745f*/
  if ( DiskLaserClass_field_0x24[1061] ) /*0x4a7462*/
  {
LABEL_2:
    v61 = (int)&v67; /*0x4a7359*/
    this->ptr_10 = -1; /*0x4a735a*/
    v67 = this; /*0x4a7361*/
    LOBYTE(v3) = VectorClass::AppendCopy((VectorClass *)&g_BuildingLoadQueue_Array.ToTile, (_DWORD *)v61); /*0x4a7365*/
  }
  else
  {
    v14 = (int *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)DiskLaserClass_field_0x24 /*0x4a74aa*/
                                                                                       + 176))(
                   DiskLaserClass_field_0x24,
                   v76,
                   0,
                   0,
                   0,
                   0);
    v73 = *v14; /*0x4a74b2*/
    v15 = *((_DWORD *)this + 14); /*0x4a74b6*/
    v74 = v14[1]; /*0x4a74bc*/
    v16 = *((_DWORD *)this + 13); /*0x4a74c0*/
    v17 = v14[2]; /*0x4a74c3*/
    v18 = v16 + v15; /*0x4a74c6*/
    v19 = (v16 + v15) % 16; /*0x4a74d6*/
    v20 = v16 - v15; /*0x4a74d7*/
    v21 = (v20 + 16) % 16; /*0x4a74e8*/
    v22 = (v18 + 1) % 16; /*0x4a74f6*/
    v69 = (v20 + 15) % 16; /*0x4a7507*/
    v23 = *((_DWORD *)this + 11); /*0x4a750b*/
    v63 = 0; /*0x4a750e*/
    v24 = *(_BYTE *)(v23 + 333) == 0; /*0x4a7518*/
    v64 = 0; /*0x4a751f*/
    if ( v24 ) /*0x4a7524*/
    {
      v62 = (_BYTE *)(v23 + 288); /*0x4a7567*/
      v25 = (__int16 *)(*((_DWORD *)this + 11) + 291); /*0x4a756e*/
    }
    else
    {
      v62 = (_BYTE *)(*(_DWORD *)(this->DiskLaserClass_field_0x24 + 540) + 22268); /*0x4a7535*/
      LOBYTE(v63) = *v62 >> 1; /*0x4a753d*/
      HIBYTE(v63) = v62[1] >> 1; /*0x4a754a*/
      v64 = v62[2] >> 1; /*0x4a7557*/
      v25 = &v63; /*0x4a755b*/
    }
    v65 = v25; /*0x4a7574*/
    v66 = *((_DWORD *)this + 11) + 294; /*0x4a7583*/
    if ( v19 == v21 && v15 ) /*0x4a758f*/
    {
      v26 = dword_8A0180[2 * v19]; /*0x4a7595*/
      v27 = v74 + dword_8A0184[2 * v19]; /*0x4a75ad*/
      v70 = v73 + v26; /*0x4a75af*/
      v28 = (_BYTE *)this->DiskLaserClass_field_0x28; /*0x4a75b3*/
      v71 = v27; /*0x4a75b8*/
      v72 = v17; /*0x4a75bc*/
      if ( v28 && (v28[20] & 2) != 0 ) /*0x4a75c6*/
        v29 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v28 + 164))(v28, v76); /*0x4a75cf*/
      else
        v29 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v28 + 88))(v28, v76); /*0x4a75de*/
      v30 = *v29; /*0x4a75e1*/
      v61 = 92; /*0x4a75e3*/
      v73 = v30; /*0x4a75e5*/
      v74 = v29[1]; /*0x4a75ec*/
      v75 = v29[2]; /*0x4a75f3*/
      v31 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x4a75f7*/
      if ( v31 ) /*0x4a7601*/
      {
        v32 = (DiskLaserClass *)*((_DWORD *)this + 11); /*0x4a7607*/
        v61 = 0; /*0x4a760a*/
        v60 = 1065353216; /*0x4a760c*/
        v59 = 1; /*0x4a7611*/
        v33 = (DiskLaserClass *)SBYTE2(v32[7].DiskLaserClass_field_0x18); /*0x4a7613*/
        v58 = 0; /*0x4a761a*/
        v57 = v33; /*0x4a761c*/
        v56 = v32; /*0x4a7621*/
        LOBYTE(v33) = *(_BYTE *)(v66 + 2); /*0x4a7627*/
        LOWORD(v56) = *(_WORD *)v66; /*0x4a762a*/
        v55 = &v56; /*0x4a762d*/
        BYTE2(v56) = (_BYTE)v33; /*0x4a762e*/
        LOBYTE(v33) = *((_BYTE *)v65 + 2); /*0x4a763a*/
        LOWORD(v55) = *v65; /*0x4a763d*/
        v52 = &v55; /*0x4a7640*/
        BYTE2(v55) = (_BYTE)v33; /*0x4a7641*/
        LOWORD(v52) = *(_WORD *)v62; /*0x4a7652*/
        BYTE2(v52) = v62[2]; /*0x4a765a*/
        TimerClass::Construct( /*0x4a7691*/
          v31,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75,
          0,
          1,
          (int)v52,
          (int)v55,
          (int)v56,
          (int)v57,
          0,
          1,
          1065353216,
          0);
      }
      PlaySoundEffectAt( /*0x4a76af*/
        &v73,
        *((_DWORD *)this + 15),
        (_DWORD *)this->DiskLaserClass_field_0x24,
        *(_DWORD *)(*((_DWORD *)this + 11) + 172),
        1,
        0);
      v34 = *((_DWORD *)this + 11); /*0x4a76b4*/
      v3 = *(_DWORD *)(v34 + 204); /*0x4a76b7*/
      if ( v3 > 0 ) /*0x4a76bf*/
        LOBYTE(v3) = (unsigned __int8)StartAudioControllerAt( /*0x4a76e8*/
                                        *(_DWORD *)(*(_DWORD *)(v34 + 192)
                                                  + 4
                                                  * ((unsigned int)*(unsigned __int16 *)(this->DiskLaserClass_field_0x24
                                                                                       + 968)
                                                   % *(_DWORD *)(v34 + 204))),
                                        &v70,
                                        0);
      this->ptr_10 = -1; /*0x4a76ed*/
    }
    else
    {
      v72 = v17; /*0x4a7701*/
      v67 = (DiskLaserClass *)(8 - v15); /*0x4a7707*/
      v35 = dword_8A0180[2 * v19] + v73; /*0x4a770f*/
      v36 = dword_8A0184[2 * v19]; /*0x4a7716*/
      v70 = v35; /*0x4a772b*/
      v71 = v74 + v36; /*0x4a7733*/
      v37 = dword_8A0180[2 * v22]; /*0x4a7737*/
      v38 = dword_8A0184[2 * v22]; /*0x4a773e*/
      v76[0] = v73 + v37; /*0x4a774b*/
      v39 = v74 + v38; /*0x4a774f*/
      if ( !v15 ) /*0x4a7753*/
      {
        v40 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 652); /*0x4a775a*/
        if ( v40 != -1 ) /*0x4a7763*/
          StartAudioControllerAt(v40, &v70, 0); /*0x4a776b*/
      }
      v68 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x4a777a*/
      if ( v68 ) /*0x4a7780*/
      {
        HIWORD(v41) = HIWORD(v67); /*0x4a7786*/
        v61 = 1056964608; /*0x4a778e*/
        v60 = 1065353216; /*0x4a7793*/
        v59 = 1; /*0x4a7798*/
        v58 = 0; /*0x4a779a*/
        v57 = v67; /*0x4a779c*/
        v56 = v67; /*0x4a779d*/
        LOWORD(v41) = *(_WORD *)v66; /*0x4a779e*/
        v55 = v41; /*0x4a77a3*/
        v42 = *(_BYTE *)(v66 + 2); /*0x4a77a4*/
        LOWORD(v56) = (_WORD)v41; /*0x4a77a7*/
        BYTE2(v56) = v42; /*0x4a77ac*/
        LOWORD(v55) = *v65; /*0x4a77b6*/
        v53 = &v55; /*0x4a77bc*/
        BYTE2(v55) = *((_BYTE *)v65 + 2); /*0x4a77bd*/
        LOWORD(v53) = *(_WORD *)v62; /*0x4a77cd*/
        BYTE2(v53) = v62[2]; /*0x4a77da*/
        TimerClass::Construct( /*0x4a7804*/
          v68,
          v70,
          v71,
          v72,
          v76[0],
          v39,
          v17,
          0,
          1,
          (int)v53,
          (int)v55,
          (int)v56,
          (int)v67,
          0,
          1,
          1065353216,
          1056964608);
      }
      v43 = dword_8A0180[2 * v21]; /*0x4a7809*/
      v44 = v74 + dword_8A0184[2 * v21]; /*0x4a7821*/
      v70 = v73 + v43; /*0x4a7823*/
      v71 = v44; /*0x4a782b*/
      v61 = 92; /*0x4a782f*/
      v45 = dword_8A0184[2 * v69]; /*0x4a7838*/
      v46 = v73 + dword_8A0180[2 * v69]; /*0x4a783f*/
      v72 = v17; /*0x4a7845*/
      v47 = v74 + v45; /*0x4a7849*/
      v48 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x4a784b*/
      if ( v48 ) /*0x4a7855*/
      {
        v61 = 1056964608; /*0x4a785f*/
        v60 = 1065353216; /*0x4a7864*/
        v59 = 1; /*0x4a7869*/
        v58 = 0; /*0x4a786b*/
        v57 = v67; /*0x4a786d*/
        v56 = v67; /*0x4a786e*/
        LOWORD(v56) = *(_WORD *)v66; /*0x4a7878*/
        v49 = (DiskLaserClass **)v66; /*0x4a787b*/
        BYTE2(v56) = *(_BYTE *)(v66 + 2); /*0x4a7882*/
        LOBYTE(v49) = BYTE2(v56); /*0x4a787f*/
        v55 = v49; /*0x4a7885*/
        LOWORD(v55) = *v65; /*0x4a788f*/
        BYTE2(v55) = *((_BYTE *)v65 + 2); /*0x4a7899*/
        HIBYTE(v54) = HIBYTE(v65); /*0x4a789c*/
        LOWORD(v54) = *(_WORD *)v62; /*0x4a78ad*/
        BYTE2(v54) = v62[2]; /*0x4a78b7*/
        TimerClass::Construct( /*0x4a78df*/
          v48,
          v70,
          v71,
          v72,
          v46,
          v47,
          v17,
          0,
          1,
          v54,
          (int)v55,
          (int)v56,
          (int)v67,
          0,
          1,
          1065353216,
          1056964608);
      }
      v50 = *((_DWORD *)this + 14); /*0x4a78e4*/
      this->ptr_10 = 1; /*0x4a78e7*/
      v3 = v50 + 1; /*0x4a78ee*/
      *((_DWORD *)this + 14) = v3; /*0x4a78f0*/
    }
  }
  return v3; /*0x4a736a*/
}



// ==== 0x004A7900  DiskLaserClass::PointerGotInvalid  this=DiskLaserClass  sig=csp ====
void __thiscall DiskLaserClass::PointerGotInvalid(DiskLaserClass *this, int a2)
{
  int v3; // eax
  int v4; // eax

  if ( a2 == this->DiskLaserClass_field_0x24 ) /*0x4a790b*/
  {
    this->ptr_10 = -1; /*0x4a790d*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x4a7948*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
           &g_BuildingLoadQueue_Array.ToTile,
           *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
           0) )
    {
      v3 = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x4a7955*/
      *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v3) = this; /*0x4a7964*/
    }
  }
  if ( a2 == this->DiskLaserClass_field_0x28 ) /*0x4a796a*/
  {
    this->ptr_10 = -1; /*0x4a796c*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x4a79a8*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
           &g_BuildingLoadQueue_Array.ToTile,
           *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
           0) )
    {
      v4 = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x4a79b5*/
      *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v4) = this; /*0x4a79c4*/
    }
  }
}



// ==== 0x004A7A30  DiskLaserClass::DiskLaserClass  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::DiskLaserClass(DiskLaserClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4a7a33*/
  *(_DWORD *)this->__pad_0 = &DiskLaserClass::`vftable'; /*0x4a7a3a*/
  this->DiskLaserClass_field_0x04 = (int)&DiskLaserClass::`vftable'; /*0x4a7a40*/
  this->DiskLaserClass_field_0x08 = (int)&DiskLaserClass::`vftable'; /*0x4a7a47*/
  this->DiskLaserClass_field_0x0C = (int)&DiskLaserClass::`vftable'; /*0x4a7a4e*/
  this->DiskLaserClass_field_0x24 = 0; /*0x4a7a55*/
  this->DiskLaserClass_field_0x28 = 0; /*0x4a7a58*/
  *((_DWORD *)this + 11) = 0; /*0x4a7a5b*/
  this->ptr_10 = 0; /*0x4a7a5e*/
  *((_DWORD *)this + 13) = 0; /*0x4a7a61*/
  *((_DWORD *)this + 14) = 0; /*0x4a7a64*/
  *((_DWORD *)this + 15) = 0; /*0x4a7a67*/
  if ( dword_8A0218 < dword_8A0210 /*0x4a7a9e*/
    || (byte_8A0215 || !dword_8A0210)
    && dword_8A021C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8A0208 + 8))(
         &dword_8A0208,
         dword_8A0210 + dword_8A021C,
         0) )
  {
    v2 = dword_8A0218++; /*0x4a7aab*/
    *((_DWORD *)dword_8A020C + v2) = this; /*0x4a7aba*/
  }
  return (int)this->__pad_0; /*0x4a7abf*/
}



// ==== 0x004A7B80  DiskLaserClass::Stat  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::Stat(DiskLaserClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x4a7b8a*/
}



// ==== 0x004A7B90  DiskLaserClass::Write  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::Write(DiskLaserClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x4a7ba1*/
  if ( Prefix_0 >= 0 ) /*0x4a7ba5*/
  {
    if ( this ) /*0x4a7ba9*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x4a7bb2*/
      *(_DWORD *)this->__pad_0 = &DiskLaserClass::`vftable'; /*0x4a7bb7*/
      this->DiskLaserClass_field_0x04 = (int)&DiskLaserClass::`vftable'; /*0x4a7bbd*/
      this->DiskLaserClass_field_0x08 = (int)&DiskLaserClass::`vftable'; /*0x4a7bc4*/
      this->DiskLaserClass_field_0x0C = (int)&DiskLaserClass::`vftable'; /*0x4a7bcb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DiskLaserClass_field_0x24); /*0x4a7bdb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DiskLaserClass_field_0x28); /*0x4a7be9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 11); /*0x4a7bf7*/
  }
  return Prefix_0; /*0x4a7bfe*/
}



// ==== 0x004A7C10  DiskLaserClass::Seek  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::Seek(DiskLaserClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x4a7c24*/
}



// ==== 0x004A7C30  DiskLaserClass::ddtor  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::ddtor(DiskLaserClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4a7c36*/
    return -2147467261; /*0x4a7c38*/
  *a2 = 1378929064; /*0x4a7c46*/
  a2[1] = 1206682730; /*0x4a7c4e*/
  a2[2] = -1786862915; /*0x4a7c57*/
  a2[3] = unk_7E989C; /*0x4a7c60*/
  return 0; /*0x4a7c3d*/
}



// ==== 0x004A7C70  DiskLaserClass::StubReturn64  this=DiskLaserClass  sig=csp ====
int DiskLaserClass::StubReturn64(DiskLaserClass *this)
{
  return 64; /*0x4a7c75*/
}



// ==== 0x004A7C80  DiskLaserClass::StubReturn73  this=DiskLaserClass  sig=csp ====
int DiskLaserClass::StubReturn73(DiskLaserClass *this)
{
  return 73; /*0x4a7c85*/
}



// ==== 0x004A7C90  DiskLaserClass::CopyTo  this=DiskLaserClass  sig=csp ====
_DWORD *__thiscall DiskLaserClass::CopyTo(DiskLaserClass *this, char a2)
{
  int v3; // eax
  DiskLaserClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &DiskLaserClass::`vftable'; /*0x4a7c9d*/
  this->DiskLaserClass_field_0x04 = (int)&DiskLaserClass::`vftable'; /*0x4a7ca3*/
  this->DiskLaserClass_field_0x08 = (int)&DiskLaserClass::`vftable'; /*0x4a7caa*/
  this->DiskLaserClass_field_0x0C = (int)&DiskLaserClass::`vftable'; /*0x4a7cb1*/
  v5 = this; /*0x4a7cbf*/
  v3 = (*(int (__thiscall **)(int *, DiskLaserClass **))(dword_8A0208 + 16))(&dword_8A0208, &v5); /*0x4a7cc3*/
  if ( v3 != -1 && v3 < dword_8A0218 && v3 < --dword_8A0218 ) /*0x4a7cde*/
  {
    do /*0x4a7cf6*/
    {
      ++v3; /*0x4a7ce6*/
      *((_DWORD *)dword_8A020C + v3 - 1) = *((_DWORD *)dword_8A020C + v3); /*0x4a7cea*/
    }
    while ( v3 < dword_8A0218 ); /*0x4a7cf6*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x4a7cfa*/
  if ( (a2 & 1) != 0 ) /*0x4a7d04*/
    __3_YAXPAX_Z(this); /*0x4a7d07*/
  return this->__pad_0; /*0x4a7d11*/
}



// ==== 0x004A7D20  _DynamicVectorClass_PAVDiskLaserClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall Dial8Class_48::ClearBuffer(_DynamicVectorClass_PAVDiskLaserClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a7d26*/
  this->m_10 = 0; /*0x4a7d29*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4a7d30*/
  {
    __3_YAXPAX_Z(v2); /*0x4a7d36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a7d3e*/
  }
  BYTE1(this->m_C) = 0; /*0x4a7d41*/
  this->m_8 = 0; /*0x4a7d44*/
}



// ==== 0x004A7D50  _DynamicVectorClass_PAVDiskLaserClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall Dial8Class_48::PointerToIndex(_DynamicVectorClass_PAVDiskLaserClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a7d50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a7d65*/
  else
    return 0; /*0x4a7d57*/
}



// ==== 0x004A7D70  _VectorClass_PAVDiskLaserClass::Seek  this=VectorClass  sig=csp ====
int __thiscall Dial8Class_48::Seek(_VectorClass_PAVDiskLaserClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4a7d7a*/
}



// ==== 0x004A7D80  _VectorClass_PAVDiskLaserClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall Dial8Class_48::AddRef(_VectorClass_PAVDiskLaserClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4a7d82*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4a7d8d*/
  {
    v3 = 0; /*0x4a7d8f*/
    if ( m_8 <= 0 ) /*0x4a7d93*/
      return 1; /*0x4a7db3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4a7d95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a7d9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a7da4*/
    {
      ++v3; /*0x4a7da6*/
      ++v4; /*0x4a7da7*/
      if ( v3 >= m_8 ) /*0x4a7dac*/
        return 1; /*0x4a7dac*/
    }
  }
  return 0; /*0x4a7dae*/
}



// ==== 0x004A7DC0  _VectorClass_PAVDiskLaserClass::Release  this=VectorClass  sig=csp ====
char __thiscall Dial8Class_48::Release(_VectorClass_PAVDiskLaserClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a7dcc*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a7dd6*/
    if ( a3 ) /*0x4a7ddc*/
      v4 = a3; /*0x4a7df2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a7dee*/
    LOBYTE(this->m_C) = 1; /*0x4a7df6*/
    if ( v4 ) /*0x4a7dfa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4a7e05*/
      {
        m_8 = this->m_8; /*0x4a7e0c*/
        if ( a2 < m_8 ) /*0x4a7e11*/
          m_8 = a2; /*0x4a7e13*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a7e19*/
          ++i; /*0x4a7e1e*/
        if ( BYTE1(this->m_C) ) /*0x4a7e2b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a7e36*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4a7e3e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4a7e47*/
      this->m_8 = a2; /*0x4a7e4f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a7e52*/
      return 1; /*0x4a7e58*/
    }
    else
    {
      return 0; /*0x4a7dff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVDiskLaserClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a7e62*/
    return 1; /*0x4a7e68*/
  }
}



// ==== 0x004A7E70  _VectorClass_PAVDiskLaserClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall Dial8Class_48::ddtor(_VectorClass_PAVDiskLaserClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4a7e7d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a7e83*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a7e8b*/
  }
  BYTE1(this->m_C) = 0; /*0x4a7e8e*/
  this->m_8 = 0; /*0x4a7e91*/
}



// ==== 0x004A7EA0  _VectorClass_PAVDiskLaserClass::Read  this=VectorClass  sig=csp ====
int __thiscall Dial8Class_48::Read(_VectorClass_PAVDiskLaserClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a7ea0*/
    return 0; /*0x4a7ea8*/
  m_8 = this->m_8; /*0x4a7eae*/
  result = 0; /*0x4a7eb1*/
  if ( m_8 <= 0 ) /*0x4a7eb5*/
    return -1; /*0x4a7ecc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a7ebb*/
  {
    if ( ++result >= m_8 ) /*0x4a7eca*/
      return -1; /*0x4a7eca*/
  }
  return result; /*0x4a7eaa*/
}



// ==== 0x004A7EE0  _VectorClass_PAVDiskLaserClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Dial8Class_48::Write(_VectorClass_PAVDiskLaserClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a7ee0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a7ef5*/
  else
    return 0; /*0x4a7ee7*/
}



// ==== 0x004A7F00  _DynamicVectorClass_PAVDiskLaserClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall Dial8Class_48::SetCapacity(_DynamicVectorClass_PAVDiskLaserClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a7f0c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a7f12*/
    if ( a3 ) /*0x4a7f18*/
      v4 = a3; /*0x4a7f2e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a7f2a*/
    LOBYTE(this->m_C) = 1; /*0x4a7f32*/
    if ( !v4 ) /*0x4a7f36*/
      return 0; /*0x4a7faa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4a7f38*/
    {
      m_8 = this->m_8; /*0x4a7f3f*/
      if ( a2 < m_8 ) /*0x4a7f44*/
        m_8 = a2; /*0x4a7f46*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a7f4c*/
        ++i; /*0x4a7f51*/
      if ( BYTE1(this->m_C) ) /*0x4a7f5e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a7f69*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4a7f71*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4a7f7a*/
    this->m_8 = a2; /*0x4a7f82*/
    BYTE1(this->m_C) = a3 == 0; /*0x4a7f85*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVDiskLaserClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a7f8e*/
  }
  v7 = this->m_8; /*0x4a7f91*/
  if ( v7 < this->m_10 ) /*0x4a7f99*/
    this->m_10 = v7; /*0x4a7f9b*/
  return 1; /*0x4a7f9e*/
}



// ==== 0x004A7FB0  _DynamicVectorClass_PAVDiskLaserClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall Dial8Class_48::FindItem(_DynamicVectorClass_PAVDiskLaserClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4a7fb0*/
  result = 0; /*0x4a7fb3*/
  if ( m_10 <= 0 ) /*0x4a7fb8*/
    return -1; /*0x4a7fcf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a7fbe*/
  {
    if ( ++result >= m_10 ) /*0x4a7fcd*/
      return -1; /*0x4a7fcd*/
  }
  return result; /*0x4a7fd2*/
}



// ==== 0x004A7FE0  VectorClass::AppendCopy  this=VectorClass  sig=csp ====
int __thiscall VectorClass::AppendCopy(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x4a7fe3*/
  result = this->Count; /*0x4a7fe6*/
  if ( result < Capacity /*0x4a800d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->ptr_0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (_BYTE)result) )
  {
    result = this->Count; /*0x4a8015*/
    Items = this->Items; /*0x4a8018*/
    this->Count = result + 1; /*0x4a801e*/
    *(_DWORD *)(Items + 4 * result) = *a2; /*0x4a8028*/
    LOBYTE(result) = 1; /*0x4a802b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x4a800f*/
  }
  return result; /*0x4a8011*/
}



// ==== 0x004A8030  _VectorClass_PAVDiskLaserClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Dial8Class_48::QueryInterface(_VectorClass_PAVDiskLaserClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a8033*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiskLaserClass *>::`vftable'; /*0x4a8036*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a8040*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8048*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a8050*/
  }
  BYTE1(this->m_C) = 0; /*0x4a805b*/
  this->m_8 = 0; /*0x4a8061*/
  if ( (a2 & 1) != 0 ) /*0x4a8068*/
    __3_YAXPAX_Z(this); /*0x4a806b*/
  return this->__pad_0; /*0x4a8075*/
}



// ==== 0x004A8080  _DynamicVectorClass_PAVDiskLaserClass::Constructor_VectorClass_DiskLaserClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall Dial8Class_48::Constructor_VectorClass_DiskLaserClass___(
        _DynamicVectorClass_PAVDiskLaserClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a8083*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiskLaserClass *>::`vftable'; /*0x4a8086*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a8090*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8098*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a80a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4a80ab*/
  this->m_8 = 0; /*0x4a80b1*/
  if ( (a2 & 1) != 0 ) /*0x4a80b8*/
    __3_YAXPAX_Z(this); /*0x4a80bb*/
  return this->__pad_0; /*0x4a80c5*/
}



// ==== 0x004A80D0  AlwaysFindYRCD  this=CD  sig=ida-proto ====
int AlwaysFindYRCD()
{
  return 2; /*0x4a80d5*/
}



// ==== 0x004A80D6  sub_4A80D6  this=-  sig=ida-proto ====
// positive sp value has been detected, the output may be wrong!
int __fastcall sub_4A80D6(int a1, signed int a2)
{
  int v4; // esi
  signed int v5; // ebx
  signed int v6; // eax
  int v7; // ebp
  HANDLE FileA; // eax
  DWORD Ticks; // [esp-110h] [ebp-120h]
  signed int v11; // [esp-108h] [ebp-118h]
  DWORD v12; // [esp-104h] [ebp-114h] BYREF
  DWORD v13[4]; // [esp-100h] [ebp-110h] BYREF
  CHAR v14[128]; // [esp-F0h] [ebp-100h] BYREF
  CHAR v15[128]; // [esp-70h] [ebp-80h] BYREF

  Timer::GetTicks(); /*0x4a80e2*/
  v11 = a2; /*0x4a80fc*/
  v4 = a1 + 65; /*0x4a8100*/
  Ticks = Timer::GetTicks(); /*0x4a8109*/
  wsprintfA(v14, "%c:\\", a1 + 65); /*0x4a8120*/
  if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a814a*/
  {
LABEL_8:
    if ( !_strcmpi(aYr1, v15) ) /*0x4a81cd*/
    {
      v7 = 0; /*0x4a81e4*/
      wsprintfA(v14, "%c:\\YR1.dsk", v4); /*0x4a81e6*/
      FileA = CreateFileA(v14, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x4a8206*/
      if ( FileA != (HANDLE)-1 ) /*0x4a820b*/
      {
LABEL_12:
        CloseHandle(FileA); /*0x4a8241*/
        return 2; /*0x4a8257*/
      }
      while ( ++v7 < 2 ) /*0x4a820d*/
      {
        wsprintfA(v14, "%c:\\YR1.dsk", v4); /*0x4a821e*/
        FileA = CreateFileA(v14, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x4a823a*/
        if ( FileA != (HANDLE)-1 ) /*0x4a823f*/
          goto LABEL_12; /*0x4a823f*/
      }
    }
  }
  else
  {
    while ( 1 ) /*0x4a8154*/
    {
      v5 = v11; /*0x4a8154*/
      if ( Ticks != -1 ) /*0x4a815b*/
      {
        v6 = Timer::GetTicks() - Ticks; /*0x4a8166*/
        if ( v6 >= v11 ) /*0x4a816c*/
          return -1; /*0x4a816c*/
        v5 = v11 - v6; /*0x4a8172*/
      }
      if ( !v5 || GetLastError() != 21 ) /*0x4a8185*/
        break; /*0x4a8185*/
      wsprintfA(v14, "%c:\\", v4); /*0x4a8196*/
      if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a81ba*/
        goto LABEL_8; /*0x4a81be*/
    }
  }
  return -1; /*0x4a8257*/
}



// ==== 0x004A8270  CD::CheckDiscPresence  this=CD  sig=csp ====
char __thiscall CD::CheckDiscPresence(CD *this, int a2)
{
  int v2; // edi
  CD *v3; // ebx
  int v4; // esi
  int YRCD; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  CD *v13; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x4a8277*/
  v3 = this; /*0x4a827b*/
  v13 = 0; /*0x4a8284*/
  if ( a2 == -2 ) /*0x4a828c*/
    return 1; /*0x4a83bc*/
  if ( a2 >= 0 ) /*0x4a8294*/
    v2 = 2; /*0x4a8296*/
  v4 = dword_89E414; /*0x4a829b*/
  YRCD = AlwaysFindYRCD(); /*0x4a82a8*/
  if ( YRCD > -1 && (v2 == YRCD || v2 == -1) ) /*0x4a82b9*/
  {
    v13 = (CD *)v4; /*0x4a82bd*/
    if ( v4 ) /*0x4a82c1*/
    {
LABEL_30:
      if ( v2 > -1 && dword_81FFB0 != v2 ) /*0x4a8393*/
      {
        dword_81FFB0 = v2; /*0x4a8395*/
        return (*(char (__thiscall **)(CD *, int))(*(_DWORD *)v3 + 8))(v3, v2); /*0x4a83aa*/
      }
      return 1; /*0x4a8393*/
    }
  }
  if ( dword_89E418 ) /*0x4a82cf*/
  {
    if ( dword_89E418 != dword_89E414 ) /*0x4a82d7*/
    {
      v6 = AlwaysFindYRCD(); /*0x4a82de*/
      if ( v6 > -1 ) /*0x4a82e6*/
      {
        if ( v2 != v6 ) /*0x4a82ea*/
        {
          if ( v2 != -1 ) /*0x4a82f3*/
            goto LABEL_13; /*0x4a82f3*/
          return 1; /*0x4a82f3*/
        }
        goto LABEL_30; /*0x4a82ea*/
      }
    }
  }
  do /*0x4a8371*/
  {
LABEL_13:
    v7 = dword_A8E950; /*0x4a82fe*/
    v8 = 0; /*0x4a8304*/
    if ( dword_A8E950 > 0 ) /*0x4a8308*/
    {
      while ( 1 ) /*0x4a830c*/
      {
        if ( v7 ) /*0x4a830c*/
        {
          v9 = dword_A8E954; /*0x4a830e*/
          if ( dword_A8E954 == v7 ) /*0x4a8315*/
          {
            v9 = 0; /*0x4a8317*/
            dword_A8E954 = 0; /*0x4a8319*/
          }
          v10 = *((_DWORD *)&dword_A8E8E8.AbstractClass + v9); /*0x4a831e*/
          dword_A8E954 = v9 + 1; /*0x4a8326*/
        }
        else
        {
          v10 = -1; /*0x4a832d*/
        }
        v11 = AlwaysFindYRCD(); /*0x4a8334*/
        if ( v11 > -1 && (v2 == v11 || v2 == -1 || v2 == -2) ) /*0x4a834a*/
          break; /*0x4a834a*/
        v7 = dword_A8E950; /*0x4a834c*/
        if ( ++v8 >= dword_A8E950 ) /*0x4a8355*/
          goto LABEL_26; /*0x4a8355*/
      }
      v13 = (CD *)v10; /*0x4a8359*/
    }
LABEL_26:
    if ( (int)v13 > 0 ) /*0x4a8363*/
    {
      CD::SetCurrentInstance(v13); /*0x4a837a*/
      sub_47AAC0(); /*0x4a837f*/
      v3 = this; /*0x4a8384*/
      goto LABEL_30; /*0x4a8384*/
    }
  }
  while ( (*(unsigned __int8 (__thiscall **)(CD *, int))(*(_DWORD *)this + 4))(this, v2) ); /*0x4a8371*/
  return 0; /*0x4a83a3*/
}



// ==== 0x004A83D0  sub_4A83D0  this=-  sig=csp ====
bool __stdcall sub_4A83D0(int a1)
{
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF

  sprintf(Buffer, "Please insert disk %d", a1); /*0x4a83e5*/
  return MessageBoxA(0, Buffer, aHey, 1u) == 1; /*0x4a8407*/
}



// ==== 0x004A8410  sub_4A8410  this=-  sig=csp ====
char __stdcall sub_4A8410(int a1)
{
  return 1; /*0x4a8412*/
}



// ==== 0x004A8420  sub_4A8420  this=-  sig=ida-proto ====
int sub_4A8420()
{
  dword_8A03E8 = 0; /*0x4a8422*/
  dword_8A03EC = 0; /*0x4a8427*/
  dword_8A03F0 = 0; /*0x4a842c*/
  dword_8A03F4 = 0; /*0x4a8431*/
  return 0; /*0x4a8436*/
}



// ==== 0x004A8440  sub_4A8440  this=-  sig=ida-proto ====
void sub_4A8440()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a844c*/
  dbl_8A0400 = Math::Sqrt(v0 + v0); /*0x4a845e*/
}



// ==== 0x004A8470  sub_4A8470  this=-  sig=ida-proto ====
void sub_4A8470()
{
  dbl_8A0738 = dbl_8A0400 / 60.0; /*0x4a847c*/
}



// ==== 0x004A8490  sub_4A8490  this=-  sig=ida-proto ====
void sub_4A8490()
{
  dbl_8A0628 = 1.0 / dbl_8A0738; /*0x4a849c*/
}



// ==== 0x004A84B0  sub_4A84B0  this=-  sig=ida-proto ====
void sub_4A84B0()
{
  dbl_8A0620 = 0.0174532925199433 * 45.0; /*0x4a84bc*/
}



// ==== 0x004A84D0  sub_4A84D0  this=-  sig=ida-proto ====
void sub_4A84D0()
{
  dbl_8A0408 = 0.0174532925199433 * 60.0; /*0x4a84dc*/
}



// ==== 0x004A84F0  sub_4A84F0  this=-  sig=ida-proto ====
void sub_4A84F0()
{
  dbl_8A03D8 = 0.0174532925199433 * 90.0; /*0x4a84fc*/
}



// ==== 0x004A8510  sub_4A8510  this=-  sig=ida-proto ====
__int64 sub_4A8510()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A03D8 - dbl_8A0408); /*0x4a8522*/
  result = Math::RoundToInt(v0 * dbl_8A0400 * 0.5); /*0x4a8536*/
  dword_8A0740 = result; /*0x4a853b*/
  return result; /*0x4a8540*/
}



// ==== 0x004A8550  sub_4A8550  this=-  sig=ida-proto ====
void sub_4A8550()
{
  dbl_8A0410 = Math::ArcTan((double)dword_8A0740 * 0.00390625); /*0x4a8567*/
}



// ==== 0x004A8580  sub_4A8580  this=-  sig=ida-proto ====
void sub_4A8580()
{
  dbl_8A0610 = Math::ArcTan((double)(2 * dword_8A0740) / dbl_8A0400); /*0x4a85a2*/
}



// ==== 0x004A85B0  sub_4A85B0  this=-  sig=ida-proto ====
__int64 sub_4A85B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0740) + 0.5); /*0x4a85cb*/
  dword_8A0730 = result; /*0x4a85d0*/
  return result; /*0x4a85d6*/
}



// ==== 0x004A85E0  sub_4A85E0  this=-  sig=ida-proto ====
int sub_4A85E0()
{
  dword_8A03F8 = 0; /*0x4a85e2*/
  return 0; /*0x4a85ee*/
}



// ==== 0x004A85F0  sub_4A85F0  this=-  sig=ida-proto ====
int sub_4A85F0()
{
  dword_8A0600 = 0; /*0x4a85f2*/
  dword_8A0604 = 0; /*0x4a85f7*/
  dword_8A0608 = 0; /*0x4a85fc*/
  return 0; /*0x4a8601*/
}



// ==== 0x004A8610  sub_4A8610  this=-  sig=ida-proto ====
int sub_4A8610()
{
  dword_8A0728 = 0; /*0x4a8615*/
  dword_8A0720 = 128; /*0x4a861f*/
  dword_8A0724 = 128; /*0x4a8624*/
  return 128; /*0x4a8629*/
}



// ==== 0x004A8630  sub_4A8630  this=-  sig=ida-proto ====
int sub_4A8630()
{
  _DWORD *v0; // eax
  int v1; // edx

  v0 = &unk_8A0368; /*0x4a8630*/
  v1 = 5; /*0x4a8635*/
  do /*0x4a866b*/
  {
    *(v0 - 1) = 0; /*0x4a863c*/
    *v0 = 0; /*0x4a863f*/
    *((_BYTE *)v0 + 4) = 1; /*0x4a8641*/
    *((_BYTE *)v0 + 5) = 0; /*0x4a8645*/
    *(v0 - 2) = &VectorClass<ObjectClass *>::`vftable'; /*0x4a8648*/
    *(v0 - 2) = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4a864f*/
    v0[3] = 10; /*0x4a8656*/
    v0[2] = 0; /*0x4a865d*/
    *(v0 - 2) = &off_7E6060; /*0x4a8660*/
    v0 += 6; /*0x4a8667*/
    --v1; /*0x4a866a*/
  }
  while ( v1 ); /*0x4a866b*/
  return atexit(sub_4A8680); /*0x4a8678*/
}



// ==== 0x004A8680  sub_4A8680  this=-  sig=ida-proto ====
void __cdecl sub_4A8680()
{
  int v0; // esi
  int v1; // edi
  void *v2; // eax

  if ( (byte_8A03E1 & 1) == 0 ) /*0x4a868a*/
  {
    byte_8A03E1 |= 1u; /*0x4a8691*/
    v0 = 9044956; /*0x4a8697*/
    v1 = 5; /*0x4a869c*/
    do /*0x4a86cb*/
    {
      v2 = *(void **)(v0 - 24); /*0x4a86a3*/
      v0 -= 24; /*0x4a86a6*/
      *(_DWORD *)(v0 - 4) = &VectorClass<ObjectClass *>::`vftable'; /*0x4a86ab*/
      if ( v2 ) /*0x4a86b2*/
      {
        if ( *(_BYTE *)(v0 + 9) ) /*0x4a86b4*/
        {
          __3_YAXPAX_Z(v2); /*0x4a86ba*/
          *(_DWORD *)v0 = 0; /*0x4a86c2*/
        }
      }
      --v1; /*0x4a86c4*/
      *(_BYTE *)(v0 + 9) = 0; /*0x4a86c5*/
      *(_DWORD *)(v0 + 4) = 0; /*0x4a86c8*/
    }
    while ( v1 ); /*0x4a86cb*/
  }
}



// ==== 0x004A86E0  sub_4A86E0  this=-  sig=ida-proto ====
int sub_4A86E0()
{
  GadgetClass::Construct(stru_8A06F8, 0, 0, 0, 0, 127, 1); /*0x4a86f1*/
  stru_8A06F8[0] = (int)&DisplayClass::TacticalClass::`vftable'; /*0x4a86fb*/
  return atexit(sub_4A8710); /*0x4a870b*/
}



// ==== 0x004A8710  sub_4A8710  this=-  sig=ida-proto ====
void __cdecl sub_4A8710()
{
  if ( (byte_8A03E0 & 1) == 0 ) /*0x4a871a*/
  {
    byte_8A03E0 |= 1u; /*0x4a871e*/
    GadgetClass::Dtor(stru_8A06F8); /*0x4a8729*/
  }
}



// ==== 0x004A8730  RadarClass::RenderSpySatellite  this=DisplayClass  sig=csp ====
_DWORD *__thiscall RadarClass::RenderSpySatellite(RadarClass *this)
{
  RadarClass::RenderMapPreview((int)this); /*0x4a8733*/
  *(_DWORD *)&this->__pad_6F8[2684] = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4a873d*/
  *(_WORD *)&this->__pad_6F8[2688] = 0; /*0x4a8745*/
  *(_WORD *)&this->__pad_6F8[2690] = 0; /*0x4a874c*/
  *(_DWORD *)&this->__pad_6F8[2692] = 0; /*0x4a8753*/
  this->__pad_6F8[2696] = 0; /*0x4a8759*/
  this->__pad_6F8[2697] = 0; /*0x4a875f*/
  *(_DWORD *)&this->__pad_6F8[2698] = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4a876b*/
  *(_WORD *)&this->__pad_6F8[2702] = 0; /*0x4a8774*/
  *(_WORD *)&this->__pad_6F8[2704] = 0; /*0x4a877b*/
  *(_DWORD *)&this->__pad_6F8[2708] = 0; /*0x4a8782*/
  *(_DWORD *)&this->__pad_6F8[2712] = 0; /*0x4a8788*/
  *(_DWORD *)&this->__pad_6F8[2716] = 0; /*0x4a878e*/
  *(_DWORD *)&this->__pad_6F8[2720] = -1; /*0x4a8794*/
  this->__pad_6F8[2724] = 0; /*0x4a879a*/
  *(_DWORD *)&this->__pad_6F8[2728] = 0; /*0x4a87a0*/
  *(_DWORD *)&this->__pad_6F8[2732] = 0; /*0x4a87a6*/
  *(_DWORD *)&this->__pad_6F8[2736] = 0; /*0x4a87ac*/
  *(_DWORD *)&this->__pad_6F8[2740] = -1; /*0x4a87b2*/
  this->__pad_6F8[2744] = 0; /*0x4a87b8*/
  this->__pad_6F8[2745] = 0; /*0x4a87be*/
  this->__pad_6F8[2746] = 0; /*0x4a87c4*/
  this->__pad_6F8[2747] = 0; /*0x4a87ca*/
  this->__pad_6F8[2748] = 0; /*0x4a87d0*/
  *(_DWORD *)&this->__pad_6F8[2752] = -1; /*0x4a87d6*/
  *(_DWORD *)&this->__pad_6F8[2756] = 0; /*0x4a87dc*/
  *(_DWORD *)&this->__pad_6F8[2760] = 0; /*0x4a87e2*/
  *(_DWORD *)&this->__pad_6F8[2764] = 0; /*0x4a87e8*/
  *(_DWORD *)&this->__pad_6F8[2768] = 0; /*0x4a87ee*/
  this->__pad_6F8[2772] = 0; /*0x4a87f4*/
  this->__pad_6F8[2773] = 0; /*0x4a87fa*/
  this->__pad_6F8[2774] = 0; /*0x4a8800*/
  this->__pad_6F8[2775] = 0; /*0x4a8806*/
  this->__pad_6F8[2776] = 0; /*0x4a880c*/
  this->__pad_6F8[2777] = 0; /*0x4a8812*/
  *(_DWORD *)&this->__pad_6F8[2780] = 0; /*0x4a8818*/
  *(_DWORD *)&this->__pad_6F8[2784] = 0; /*0x4a881e*/
  *(_DWORD *)&this->__pad_6F8[2788] = 0; /*0x4a8824*/
  *(_DWORD *)&this->__pad_6F8[2792] = 0; /*0x4a882a*/
  this->RadarClass_field_0x0 = &DisplayClass::`vftable'; /*0x4a8830*/
  dword_8A072C = 0; /*0x4a8836*/
  stru_8A0390.health = 0; /*0x4a883b*/
  stru_8A0390.parachute = 0; /*0x4a8840*/
  return &this->RadarClass_field_0x0; /*0x4a8847*/
}



// ==== 0x004A8850  DisplayClass::LoadTypeData  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::LoadTypeData(DisplayClass *this)
{
  int *Viewport; // eax
  int v3; // edx
  int (__thiscall **DisplayClass_field_0x0)(DisplayClass *, _DWORD *); // eax
  _DWORD v6[4]; // [esp+4h] [ebp-20h] BYREF
  int v7[4]; // [esp+14h] [ebp-10h] BYREF

  MapClass::Destru_vt05((MapClass *)this); /*0x4a8856*/
  stru_8A0390.health = SearchMIXFile(aPlaceShp, 0); /*0x4a886e*/
  dword_8A072C = SearchMIXFile(aShadowShp, 0); /*0x4a887c*/
  Viewport = Display::GetViewport(v7); /*0x4a8881*/
  v6[0] = *Viewport; /*0x4a8888*/
  v6[1] = Viewport[1]; /*0x4a888f*/
  v6[2] = Viewport[2]; /*0x4a8896*/
  v3 = Viewport[3]; /*0x4a889e*/
  DisplayClass_field_0x0 = (int (__thiscall **)(DisplayClass *, _DWORD *))this->DisplayClass_field_0x0; /*0x4a88a1*/
  v6[3] = v3; /*0x4a88a6*/
  return DisplayClass_field_0x0[42](this, v6); /*0x4a88b0*/
}



// ==== 0x004A88C0  DisplayClass::SetSize  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::SetSize(DisplayClass *this)
{
  LayerClass *v2; // esi
  int result; // eax

  MapClass::Destru_vt07((MapClass *)this); /*0x4a88c3*/
  *(_DWORD *)&this->__pad_1198[12] = 0; /*0x4a88cd*/
  this->DisplayClass_field_0x11A8 = 0; /*0x4a88d3*/
  *(_DWORD *)this->__pad_11AC = -1; /*0x4a88d9*/
  *(_DWORD *)&this->__pad_41E[3422] = 0; /*0x4a88df*/
  *(_DWORD *)&this->__pad_11B4[4] = -1; /*0x4a88e5*/
  LOBYTE(this->DisplayClass_field_0x11B0) = 0; /*0x4a88eb*/
  this->__pad_11B4[27] = 0; /*0x4a88f1*/
  LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4a88f7*/
  BYTE1(this->DisplayClass_field_0x11B0) = 0; /*0x4a88fd*/
  BYTE2(this->DisplayClass_field_0x11B0) = 0; /*0x4a8903*/
  v2 = &stru_8A0360; /*0x4a8909*/
  do /*0x4a891e*/
  {
    result = (*(int (__thiscall **)(LayerClass *))(v2->items[0] + 12))(v2); /*0x4a8912*/
    v2 += 2; /*0x4a8915*/
  }
  while ( (int)v2 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4a891e*/
  return result; /*0x4a8920*/
}



// ==== 0x004A8930  DisplayClass::ddtor  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::ddtor(DisplayClass *this)
{
  char result; // al
  GScreenClass *v3; // [esp+0h] [ebp-4h]

  VectorCursor_uint_DynamicVectorClass_uint____13::Get(v3); /*0x4a8933*/
  result = byte_A8ED6B; /*0x4a8938*/
  if ( !byte_A8ED6B ) /*0x4a893f*/
  {
    Hash::Reset((LinkClass *)&stru_8A06F8); /*0x4a8946*/
    return (*(char (__thiscall **)(DisplayClass *, GadgetClass *))(this->DisplayClass_field_0x0 + 48))( /*0x4a8954*/
             this,
             &stru_8A06F8);
  }
  return result; /*0x4a8957*/
}



// ==== 0x004A8960  DisplayClass::SetViewDimensions  this=DisplayClass  sig=csp ====
void __stdcall TacticalClass::SetViewDimensions(DisplayClass *this)
{
  Stream *v1; // esi
  BSurface *v2; // eax
  Stream *v3; // eax
  void *v4; // esi
  BSurface *v5; // eax
  int v6; // edx
  void *v7; // eax
  int v8; // esi
  SidebarClass *v9; // [esp+0h] [ebp-28h]
  int v10[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v11; // [esp+24h] [ebp-4h]

  Debug::Log(); /*0x4a897e*/
  DSurface_ViewBounds.field_0 = (int)this->DisplayClass_field_0x0; /*0x4a8987*/
  DSurface_ViewBounds.field_4 = this->DisplayClass_field_0x4; /*0x4a8990*/
  *(_DWORD *)DSurface_ViewBounds.__pad_8 = *(_DWORD *)this->__pad_8; /*0x4a8999*/
  *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] = this->DisplayClass_field_0xC[0]; /*0x4a89a1*/
  if ( g_TacticalClass_Instance ) /*0x4a89b2*/
  {
    TacticalClass::SetViewportPosition((int)g_TacticalClass_Instance, &DSurface_ViewBounds.field_0); /*0x4a89bd*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4a89ca*/
    if ( g_ZBufferDescriptor ) /*0x4a89d3*/
    {
      Debug::Log(); /*0x4a89da*/
      v1 = g_ZBufferDescriptor; /*0x4a89df*/
      if ( g_ZBufferDescriptor ) /*0x4a89ea*/
      {
        Stream::GetField(g_ZBufferDescriptor); /*0x4a89ee*/
        __3_YAXPAX_Z(v1); /*0x4a89f4*/
      }
      g_ZBufferDescriptor = 0; /*0x4a89fc*/
    }
    v2 = (BSurface *)__2_YAPAXI_Z(0x30u); /*0x4a8a04*/
    if ( v2 ) /*0x4a8a0e*/
      v3 = (Stream *)BSurface::ConstructEx( /*0x4a8a3a*/
                       v2,
                       DSurface_ViewBounds.field_0,
                       (int)DSurface_ViewBounds.field_4,
                       *(int *)DSurface_ViewBounds.__pad_8,
                       *(int *)&DSurface_ViewBounds.__pad_8[4]);
    else
      v3 = 0; /*0x4a8a41*/
    g_ZBufferDescriptor = v3; /*0x4a8a43*/
    v3[1].Stream_field_10 = 0x8000; /*0x4a8a48*/
    Debug::Log(); /*0x4a8a61*/
    if ( *(_DWORD *)&stru_87E790.__pad_D8[60] ) /*0x4a8a70*/
    {
      Debug::Log(); /*0x4a8a77*/
      v4 = *(void **)&stru_87E790.__pad_D8[60]; /*0x4a8a7c*/
      if ( *(_DWORD *)&stru_87E790.__pad_D8[60] ) /*0x4a8a87*/
      {
        StreamObj::Release(*(StreamObj **)&stru_87E790.__pad_D8[60]); /*0x4a8a8b*/
        __3_YAXPAX_Z(v4); /*0x4a8a91*/
      }
      *(_DWORD *)&stru_87E790.__pad_D8[60] = 0; /*0x4a8a99*/
    }
    v5 = (BSurface *)__2_YAPAXI_Z(0x30u); /*0x4a8aa1*/
    if ( v5 ) /*0x4a8aab*/
      *(_DWORD *)&stru_87E790.__pad_D8[60] = BSurface::Construct( /*0x4a8adc*/
                                               v5,
                                               DSurface_ViewBounds.field_0,
                                               (int)DSurface_ViewBounds.field_4,
                                               *(int *)DSurface_ViewBounds.__pad_8,
                                               *(int *)&DSurface_ViewBounds.__pad_8[4]);
    else
      *(_DWORD *)&stru_87E790.__pad_D8[60] = 0; /*0x4a8ae3*/
    Debug::Log(); /*0x4a8afb*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4a8b0b*/
  }
  SidebarClass::LoadResources(v9); /*0x4a8b13*/
  v6 = DSurface_ViewBounds.field_0; /*0x4a8b1e*/
  v7 = DSurface_ViewBounds.field_4; /*0x4a8b24*/
  v8 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x4a8b29*/
  stru_8A06F8.Width = DSurface_ViewBounds.field_0; /*0x4a8b37*/
  stru_8A06F8.Height = (int)DSurface_ViewBounds.field_4; /*0x4a8b3d*/
  *(_DWORD *)&stru_8A06F8.Visible = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x4a8b42*/
  stru_8A06F8.ID = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x4a8b48*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x4a8b4e*/
  {
    v11 = 0; /*0x4a8b55*/
    v10[0] = 500; /*0x4a8b59*/
    v10[5] = 0; /*0x4a8b61*/
    v10[1] = DSurface_ViewBounds.field_0; /*0x4a8b65*/
    v10[2] = (int)DSurface_ViewBounds.field_4; /*0x4a8b69*/
    v10[3] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x4a8b6d*/
    v10[4] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x4a8b71*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 500); /*0x4a8b75*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v10); /*0x4a8b85*/
    v7 = DSurface_ViewBounds.field_4; /*0x4a8b8a*/
    v6 = DSurface_ViewBounds.field_0; /*0x4a8b8f*/
    v8 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x4a8b95*/
  }
  MessageListClass::Init( /*0x4a8bb8*/
    (MessageListClass *)&stru_A8BB1C.__pad_87[189],
    v6 + 3,
    (int)v7,
    6,
    98,
    14,
    -1,
    -1,
    0,
    20,
    98,
    v8 - 6);
  TacticalClass::processInput((TacticalClass *)&stru_A8BB1C.__pad_87[189], *(int *)DSurface_ViewBounds.__pad_8); /*0x4a8bc9*/
  Debug::Log(); /*0x4a8bd3*/
}



// ==== 0x004A8BF0  Mouse::SetBounds  this=MapClass  sig=csp ====
int __thiscall Mouse::SetBounds(int this, const void *a2)
{
  int result; // eax
  __int16 v4; // cx
  const void *v5; // esi
  bool v6; // zf
  int v7; // eax
  __int16 v8; // cx
  _WORD v9[4]; // [esp+8h] [ebp-8h] BYREF

  result = *(_DWORD *)(this + 4476); /*0x4a8bf7*/
  if ( result ) /*0x4a8bff*/
  {
    v4 = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a8c16*/
    v9[0] = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a8c1f*/
    v9[1] = v4; /*0x4a8c24*/
    result = MapClass::SetCellFlagsAlongPath((MapClass *)this, v9, 0); /*0x4a8c38*/
  }
  v5 = a2; /*0x4a8c3d*/
  v6 = a2 == 0; /*0x4a8c47*/
  *(_DWORD *)(this + 4472) = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4a8c49*/
  if ( v6 ) /*0x4a8c4f*/
  {
    *(_DWORD *)(this + 4476) = 0; /*0x4a8d1f*/
  }
  else
  {
    if ( (byte_8A0618 & 1) == 0 ) /*0x4a8c5c*/
    {
      byte_8A0618 |= 1u; /*0x4a8c68*/
      atexit(nullsub_10); /*0x4a8c6e*/
    }
    qmemcpy(&stru_8A0390.onBridge, v5, 0x1E0u); /*0x4a8c85*/
    *(_DWORD *)(this + 4476) = &stru_8A0390.onBridge; /*0x4a8c8f*/
    v7 = *CoordList::GetBounds(&a2, (__int16 *)&stru_8A0390.onBridge); /*0x4a8c9e*/
    v9[0] = v7 - 1; /*0x4a8ca6*/
    v9[1] = HIWORD(v7) - 1; /*0x4a8cab*/
    LOWORD(a2) = (__int16)(1 - v7) / 2; /*0x4a8cc4*/
    HIWORD(a2) = (__int16)(1 - HIWORD(v7)) / 2; /*0x4a8cd1*/
    v8 = (__int16)a2; /*0x4a8cd6*/
    *(_DWORD *)(this + 4472) = a2; /*0x4a8cda*/
    LOWORD(v7) = *(_WORD *)(this + 4474) + *(_WORD *)(this + 4470); /*0x4a8cee*/
    LOWORD(a2) = v8 + *(_WORD *)(this + 4468); /*0x4a8cf8*/
    HIWORD(a2) = v7; /*0x4a8cfd*/
    return MapClass::SetCellFlagsAlongPath((MapClass *)this, &a2, (_WORD *)1); /*0x4a8d11*/
  }
  return result; /*0x4a8d17*/
}



// ==== 0x004A8D40  nullsub_10  this=-  sig=ida-proto ====
void __cdecl nullsub_10()
{
  ; /*0x4a8d40*/
}



// ==== 0x004A8D50  MIXClass::CopyHeader  this=IUnknown  sig=csp ====
int __thiscall MIXClass::CopyHeader(int *this, const void *a2)
{
  int result; // eax
  __int16 v4; // cx
  const void *v5; // esi
  bool v6; // zf
  int v7; // eax
  __int16 v8; // cx
  _WORD v9[4]; // [esp+8h] [ebp-8h] BYREF

  result = *(this + 1123); /*0x4a8d57*/
  if ( result ) /*0x4a8d5f*/
  {
    v4 = this->q2308 + *((_WORD *)this + 2244); /*0x4a8d76*/
    v9[0] = this->q2304 + *((_WORD *)this + 2243); /*0x4a8d7f*/
    v9[1] = v4; /*0x4a8d84*/
    result = BuildingClass::MarkExitPath((BuildingClass *)this, v9, 0); /*0x4a8d98*/
  }
  v5 = a2; /*0x4a8d9d*/
  v6 = a2 == 0; /*0x4a8da7*/
  *(int *)((char *)this + 4486) = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4a8da9*/
  if ( v6 ) /*0x4a8daf*/
  {
    *(this + 1123) = 0; /*0x4a8e7f*/
  }
  else
  {
    if ( (byte_8A0619 & 1) == 0 ) /*0x4a8dbc*/
    {
      byte_8A0619 |= 1u; /*0x4a8dc8*/
      atexit(nullsub_11); /*0x4a8dce*/
    }
    qmemcpy(word_8A0298, v5, sizeof(word_8A0298)); /*0x4a8de5*/
    *(this + 1123) = (int)word_8A0298; /*0x4a8def*/
    v7 = *CoordList::GetBounds(&a2, word_8A0298); /*0x4a8dfe*/
    v9[0] = v7 - 1; /*0x4a8e06*/
    v9[1] = HIWORD(v7) - 1; /*0x4a8e0b*/
    LOWORD(a2) = (__int16)(1 - v7) / 2; /*0x4a8e24*/
    HIWORD(a2) = (__int16)(1 - HIWORD(v7)) / 2; /*0x4a8e31*/
    v8 = (__int16)a2; /*0x4a8e36*/
    *(int *)((char *)this + 4486) = (int)a2; /*0x4a8e3a*/
    LOWORD(v7) = *((_WORD *)this + 2244) + this->q2308; /*0x4a8e4e*/
    LOWORD(a2) = v8 + this->q2304; /*0x4a8e58*/
    HIWORD(a2) = v7; /*0x4a8e5d*/
    return BuildingClass::MarkExitPath((BuildingClass *)this, &a2, (_WORD *)1); /*0x4a8e71*/
  }
  return result; /*0x4a8e77*/
}



// ==== 0x004A8EA0  nullsub_11  this=-  sig=ida-proto ====
void __cdecl nullsub_11()
{
  ; /*0x4a8ea0*/
}



// ==== 0x004A8EB0  GetBuildingPlacement  this=MapClass  sig=csp ====
char __stdcall sub_4A8EB0(_DWORD *a1, int a2, int a3, __int16 *a4)
{
  int FoundationWidth; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // esi
  int v13; // edi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // esi
  int v17; // ecx
  __int16 v19[2]; // [esp+8h] [ebp-20h] BYREF
  int v20; // [esp+Ch] [ebp-1Ch]
  int v21; // [esp+10h] [ebp-18h]
  int v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-Ch]
  int FoundationHeight; // [esp+2Ch] [ebp+4h]
  char v25; // [esp+34h] [ebp+Ch]
  int v26; // [esp+38h] [ebp+10h]

  if ( a2 != *((_DWORD *)dword_A83D4C + 12) /*0x4a8f19*/
    || byte_A8ED6B
    || !a3
    || *(_DWORD *)a4 == dword_8A03F8
    || !a1
    || (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) != 7 )
  {
    return 1; /*0x4a905d*/
  }
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)a1, 0); /*0x4a8f2c*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(a1); /*0x4a8f30*/
  v6 = *a4; /*0x4a8f35*/
  v7 = a4[1]; /*0x4a8f38*/
  v8 = FoundationWidth; /*0x4a8f3c*/
  v9 = a1[941] + 1; /*0x4a8f48*/
  v20 = v8; /*0x4a8f4b*/
  v23 = v7; /*0x4a8f54*/
  v10 = v6 - v9 + v8 + 2 * v9; /*0x4a8f58*/
  v11 = v7 - v9; /*0x4a8f5a*/
  v25 = 0; /*0x4a8f61*/
  v26 = v6 - v9; /*0x4a8f66*/
  v22 = v10; /*0x4a8f6a*/
  if ( v6 - v9 < v10 ) /*0x4a8f6e*/
  {
    v12 = v11 + FoundationHeight + 2 * v9; /*0x4a8f74*/
    v21 = v12; /*0x4a8f76*/
    do /*0x4a9048*/
    {
      v13 = v11; /*0x4a8f7c*/
      if ( v11 < v12 ) /*0x4a8f7e*/
      {
        do /*0x4a9033*/
        {
          v19[0] = v26; /*0x4a8f90*/
          v19[1] = v13; /*0x4a8f95*/
          if ( (__int16)v26 < v6 /*0x4a8fb9*/
            || (__int16)v26 >= v6 + v20
            || (__int16)v13 < v23
            || (__int16)v13 >= v23 + FoundationHeight )
          {
            v14 = CellCoord::To_CellObj(&dword_87F7E8, v19); /*0x4a8fc5*/
            v15 = Cell::IsBridge(v14); /*0x4a8fcc*/
            v16 = v15; /*0x4a8fd1*/
            if ( v15 ) /*0x4a8fd5*/
            {
              v17 = v15[135]; /*0x4a8fd7*/
              if ( *(_DWORD *)(v17 + 48) == a2 && *(_BYTE *)(v15[328] + 5455) ) /*0x4a8fec*/
                v25 = 1; /*0x4a8ff5*/
              if ( (_BYTE)MEMORY[0xA8B264] /*0x4a900e*/
                && (unsigned __int8)HouseClass::IsAlliedWith(
                                      (#375 *)v17,
                                      *(#375 **)&dword_A8022C->AbstractClass[4 * a2]) )
              {
                if ( *(_BYTE *)(v16[328] + 5456) ) /*0x4a901d*/
                  v25 = 1; /*0x4a9027*/
              }
            }
          }
          v12 = v21; /*0x4a902c*/
          ++v13; /*0x4a9030*/
        }
        while ( v13 < v21 ); /*0x4a9033*/
        v10 = v22; /*0x4a9039*/
      }
      ++v26; /*0x4a9044*/
    }
    while ( v26 < v10 ); /*0x4a9048*/
  }
  return v25; /*0x4a9054*/
}



// ==== 0x004A9070  ProcessDataBuildingTypeClass  this=MapClass  sig=csp ====
bool __stdcall sub_4A9070(_DWORD *a1, int a2, int a3, __int16 *a4)
{
  int FoundationHeight; // edi
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // edi
  _DWORD v12[2]; // [esp+10h] [ebp-1Ch] BYREF
  int GroundHeight; // [esp+18h] [ebp-14h]
  int v14; // [esp+20h] [ebp-Ch]
  int v15; // [esp+34h] [ebp+8h]
  int v16; // [esp+38h] [ebp+Ch]

  if ( a2 != *((_DWORD *)dword_A83D4C + 12) ) /*0x4a9086*/
    return 1; /*0x4a9086*/
  if ( byte_A8ED6B ) /*0x4a9093*/
    return 1; /*0x4a9093*/
  if ( !a3 ) /*0x4a909f*/
    return 1; /*0x4a909f*/
  if ( *(_DWORD *)a4 == dword_8A03F8 ) /*0x4a90b3*/
    return 1; /*0x4a90b3*/
  if ( !a1 ) /*0x4a90cc*/
    return 1; /*0x4a90cc*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) != 7 ) /*0x4a90dc*/
    return 1; /*0x4a90dc*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)a1, 0); /*0x4a90ed*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(a1); /*0x4a90ef*/
  v6 = *a4; /*0x4a90f4*/
  v7 = a4[1]; /*0x4a90f7*/
  v8 = v6 + FoundationWidth; /*0x4a90fb*/
  v14 = v7; /*0x4a90fd*/
  v9 = v6; /*0x4a9103*/
  v16 = v8; /*0x4a9105*/
  if ( v6 >= v8 ) /*0x4a9109*/
    return 1; /*0x4a9109*/
  v15 = v7 + FoundationHeight; /*0x4a9111*/
  while ( 1 ) /*0x4a9119*/
  {
    v10 = v7; /*0x4a9119*/
    if ( v7 < v15 ) /*0x4a911d*/
      break; /*0x4a911d*/
LABEL_13:
    if ( ++v9 >= v8 ) /*0x4a917e*/
      return 1; /*0x4a917e*/
  }
  while ( 1 ) /*0x4a913d*/
  {
    v12[1] = ((__int16)v10 << 8) + 128; /*0x4a913d*/
    v12[0] = ((__int16)v9 << 8) + 128; /*0x4a9146*/
    GroundHeight = 0; /*0x4a914a*/
    GroundHeight = Cell::GetGroundHeight(v12); /*0x4a9157*/
    if ( Cell::IsPassable(v12) ) /*0x4a9161*/
      return a1[918] != 0; /*0x4a9193*/
    if ( ++v10 >= v15 ) /*0x4a9171*/
    {
      v7 = v14; /*0x4a9173*/
      v8 = v16; /*0x4a9177*/
      goto LABEL_13; /*0x4a9177*/
    }
  }
}



// ==== 0x004A91B0  Tactical::MouseMove  this=Tactical  sig=csp ====
_DWORD *__thiscall Tactical::MouseMove(Tactical *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebp
  bool v4; // zf
  int *v6; // eax
  int v7; // edi
  void *v8; // ebx
  int *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  __int16 v19; // dx
  _WORD *v20; // eax
  __int16 v21; // dx
  int v22; // ebx
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // cx
  int v26; // edx
  __int16 v27; // ax
  _DWORD *v28; // [esp+10h] [ebp-14h] BYREF
  int v29; // [esp+14h] [ebp-10h] BYREF
  int v30; // [esp+18h] [ebp-Ch]
  _BYTE v31[8]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = (_DWORD *)*a3; /*0x4a91ba*/
  v4 = (unsigned __int16)*a3 == *(_WORD *)&stru_8A0390.bombVisible; /*0x4a91bd*/
  a3 = (_DWORD *)*a3; /*0x4a91c6*/
  if ( v4 && HIWORD(a3) == *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a91dc*/
  {
    v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4a91ef*/
                  stru_887598.lineTrailer,
                  &v29);
    v7 = DSurface_ViewBounds.field_0; /*0x4a91f2*/
    v8 = DSurface_ViewBounds.field_4; /*0x4a91f8*/
    v9 = v6; /*0x4a91fe*/
    v10 = *v6; /*0x4a9200*/
    v11 = v9[1]; /*0x4a9204*/
    if ( v10 < DSurface_ViewBounds.field_0 /*0x4a9223*/
      || v10 >= DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8
      || v11 < (int)DSurface_ViewBounds.field_4
      || v11 >= (int)DSurface_ViewBounds.field_4 + *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] )
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4a9284*/
                        stru_887598.lineTrailer,
                        v31);
      v15 = v14[1]; /*0x4a9292*/
      v29 = *v14 - v7; /*0x4a9295*/
      v30 = v15 - (_DWORD)v8; /*0x4a929f*/
      v3 = (_DWORD *)*Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a3, &v29); /*0x4a92af*/
    }
    else
    {
      v12 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4a9232*/
                     stru_887598.lineTrailer,
                     v31);
      v29 = *v12; /*0x4a9237*/
      v30 = v12[1]; /*0x4a924d*/
      v13 = (_DWORD *)*TacticalClass::PixelToCellCheck((RadarClass *)&v28, &v29); /*0x4a9256*/
      v28 = v13; /*0x4a925f*/
      if ( v13 == *(_DWORD **)&stru_8A0390.bombVisible ) /*0x4a9263*/
        goto LABEL_11; /*0x4a9263*/
      v3 = v13; /*0x4a9273*/
    }
    a3 = v3; /*0x4a92b1*/
  }
LABEL_11:
  v16 = *((_DWORD *)this + 1119); /*0x4a92b5*/
  if ( v16 ) /*0x4a92bd*/
  {
    if ( !stru_A8EB00.?[391] ) /*0x4a92e3*/
    {
      v19 = HIWORD(a3) + *((_WORD *)this + 2237); /*0x4a92f3*/
      LOWORD(v28) = (_WORD)v3 + *((_WORD *)this + 2236); /*0x4a92fb*/
      HIWORD(v28) = v19; /*0x4a9301*/
      v20 = UI_Move(&v29, &v28, v16); /*0x4a931e*/
      v21 = v20[1] - *((_WORD *)this + 2237); /*0x4a9331*/
      LOWORD(a3) = *v20 - *((_WORD *)this + 2236); /*0x4a9338*/
      HIWORD(a3) = v21; /*0x4a933d*/
      v3 = a3; /*0x4a9342*/
    }
    v4 = (_WORD)v3 == *((_WORD *)this + 2234); /*0x4a9346*/
    a3 = v3; /*0x4a934d*/
    if ( v4 && HIWORD(v3) == *((_WORD *)this + 2235) ) /*0x4a935f*/
    {
      *a2 = v3; /*0x4a9367*/
      return a2; /*0x4a9361*/
    }
    else
    {
      v22 = *((_DWORD *)this + 1117); /*0x4a9377*/
      if ( *((_DWORD *)this + 1119) ) /*0x4a9371*/
      {
        if ( v3 != *((_DWORD **)this + 1117) /*0x4a93b0*/
          && (*((_WORD *)this + 2234) != *(_WORD *)&stru_8A0390.bombVisible
           || *((_WORD *)this + 2235) != *(_WORD *)&stru_8A0390.alignmentPadding69[1]) )
        {
          v23 = *((_WORD *)this + 2235) + *((_WORD *)this + 2237); /*0x4a93c7*/
          LOWORD(a3) = *((_WORD *)this + 2234) + *((_WORD *)this + 2236); /*0x4a93d0*/
          HIWORD(a3) = v23; /*0x4a93d5*/
          MapClass::SetCellFlagsAlongPath((MapClass *)this, &a3, 0); /*0x4a93e9*/
        }
        if ( v3 != *(_DWORD **)&stru_8A0390.bombVisible ) /*0x4a93f5*/
        {
          v24 = *((_WORD *)this + 2236) + (_WORD)v3; /*0x4a940a*/
          HIWORD(a3) = HIWORD(v3) + *((_WORD *)this + 2237); /*0x4a9414*/
          LOWORD(a3) = v24; /*0x4a941b*/
          MapClass::SetCellFlagsAlongPath((MapClass *)this, &a3, (_WORD *)1); /*0x4a942f*/
        }
      }
      *((_DWORD *)this + 1117) = v3; /*0x4a9434*/
      v25 = *((_WORD *)this + 2236) + (_WORD)v3; /*0x4a944b*/
      HIWORD(a3) = *((_WORD *)this + 2235) + *((_WORD *)this + 2237); /*0x4a9452*/
      v26 = *((_DWORD *)this + 1119); /*0x4a9457*/
      LOWORD(a3) = v25; /*0x4a945d*/
      *((_BYTE *)this + 4480) = GetBuildingPlacement( /*0x4a9485*/
                                  *((_DWORD **)this + 1130),
                                  *((_DWORD *)this + 1131),
                                  v26,
                                  (__int16 *)&a3);
      v27 = *((_WORD *)this + 2237) + *((_WORD *)this + 2235); /*0x4a94a0*/
      LOWORD(a3) = *((_WORD *)this + 2234) + *((_WORD *)this + 2236); /*0x4a94a7*/
      HIWORD(a3) = v27; /*0x4a94b0*/
      *((_BYTE *)this + 4481) = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                  *((_DWORD **)this + 1130),
                                  *((_DWORD *)this + 1131),
                                  *((_DWORD *)this + 1119),
                                  (__int16 *)&a3);
      *a2 = v22; /*0x4a94e6*/
      return a2; /*0x4a94e0*/
    }
  }
  else
  {
    v17 = *((_DWORD *)this + 1117); /*0x4a92bf*/
    *((_DWORD *)this + 1117) = v3; /*0x4a92c9*/
    *a2 = v17; /*0x4a92d2*/
    return a2; /*0x4a92c5*/
  }
}



// ==== 0x004A94F0  CoordList::GetBounds  this=MouseClass  sig=csp ====
_DWORD *__stdcall CoordList_GetBounds(_DWORD *a1, __int16 *a2)
{
  __int16 *v2; // edx
  int v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  __int16 v7; // ax
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v12; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x4a94f1*/
  v3 = 512; /*0x4a94fa*/
  v4 = -512; /*0x4a94ff*/
  v5 = 512; /*0x4a9507*/
  v6 = -512; /*0x4a9509*/
  v12 = 0; /*0x4a950b*/
  if ( !a2 ) /*0x4a9515*/
    goto LABEL_17; /*0x4a9515*/
  while ( 1 ) /*0x4a9517*/
  {
    v7 = *v2; /*0x4a9517*/
    if ( *v2 == 0x7FFF && v2[1] == 0x7FFF ) /*0x4a9524*/
      break; /*0x4a9524*/
    v8 = v2[1]; /*0x4a9526*/
    if ( v4 <= v7 ) /*0x4a952f*/
      v4 = v7; /*0x4a9531*/
    if ( v3 >= v7 ) /*0x4a9535*/
      v3 = v7; /*0x4a9537*/
    if ( v6 <= v8 ) /*0x4a953b*/
      v6 = v2[1]; /*0x4a953d*/
    if ( v5 >= v8 ) /*0x4a9541*/
      v5 = v2[1]; /*0x4a9543*/
    v2 += 2; /*0x4a9545*/
  }
  v9 = v4 - v3; /*0x4a954a*/
  LOWORD(v12) = 1; /*0x4a9551*/
  if ( v9 + 1 >= 1 ) /*0x4a955b*/
    LOWORD(v12) = v9 + 1; /*0x4a955d*/
  v10 = v6 - v5; /*0x4a9562*/
  if ( v10 + 1 < 1 ) /*0x4a9569*/
  {
    HIWORD(v12) = 1; /*0x4a956b*/
LABEL_17:
    *a1 = v12; /*0x4a9570*/
    return a1; /*0x4a957f*/
  }
  HIWORD(v12) = v10 + 1; /*0x4a9582*/
  *a1 = v12; /*0x4a9592*/
  return a1; /*0x4a9578*/
}



// ==== 0x004A95A0  MapClass::SetCellFlagsAlongPath  this=MapClass  sig=csp ====
int __thiscall MapClass::SetCellFlagsAlongPath(MapClass *this, _WORD *a2, _WORD *a3)
{
  int result; // eax
  _WORD *v4; // ebp
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v4 = a2; /*0x4a95a2*/
  LOWORD(result) = *a2; /*0x4a95aa*/
  if ( *a2 != *(_WORD *)&stru_8A0390.bombVisible || a2[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a95c2*/
  {
    v6 = *(__int16 **)&this->__pad_1170[12]; /*0x4a95c4*/
    v7 = (char)a3; /*0x4a95ca*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a95db*/
    {
      v8 = v6; /*0x4a95dd*/
      v6 += 2; /*0x4a95df*/
      v9 = *v8; /*0x4a95e2*/
      LOWORD(v8) = v4[1] + v8[1]; /*0x4a95ed*/
      LOWORD(a3) = *v4 + v9; /*0x4a95f1*/
      HIWORD(a3) = (_WORD)v8; /*0x4a95f6*/
      a2 = a3; /*0x4a9603*/
      result = LayerClass::CoordinatesLegal((LayerClass *)this, (__int16 *)&a2); /*0x4a960a*/
      if ( (_BYTE)result ) /*0x4a9611*/
      {
        result = (int)CellCoord::To_CellObj((CellCoord *)this, (__int16 *)&a2); /*0x4a961a*/
        v10 = *(_DWORD *)(result + 300); /*0x4a961f*/
        if ( v7 ) /*0x4a9627*/
          *(_DWORD *)(result + 300) = v10 | 2; /*0x4a962c*/
        else
          *(_DWORD *)(result + 300) = v10 & 0xFFFFFFFD; /*0x4a9637*/
      }
    }
  }
  return result; /*0x4a963f*/
}



// ==== 0x004A9650  BuildingClass::MarkExitPath  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MarkExitPath(BuildingClass *this, _WORD *a2, _WORD *a3)
{
  int result; // eax
  _WORD *v4; // ebp
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v4 = a2; /*0x4a9652*/
  LOWORD(result) = *a2; /*0x4a965a*/
  if ( *a2 != *(_WORD *)&stru_8A0390.bombVisible || a2[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a9672*/
  {
    v6 = (__int16 *)*((_DWORD *)this + 1123); /*0x4a9674*/
    v7 = (char)a3; /*0x4a967a*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a968b*/
    {
      v8 = v6; /*0x4a968d*/
      v6 += 2; /*0x4a968f*/
      v9 = *v8; /*0x4a9692*/
      LOWORD(v8) = v4[1] + v8[1]; /*0x4a969d*/
      LOWORD(a3) = *v4 + v9; /*0x4a96a1*/
      HIWORD(a3) = (_WORD)v8; /*0x4a96a6*/
      a2 = a3; /*0x4a96b3*/
      result = LayerClass::CoordinatesLegal((LayerClass *)this, (__int16 *)&a2); /*0x4a96ba*/
      if ( (_BYTE)result ) /*0x4a96c1*/
      {
        result = (int)CellCoord::To_CellObj((CellCoord *)this, (__int16 *)&a2); /*0x4a96ca*/
        v10 = *(_DWORD *)(result + 300); /*0x4a96cf*/
        if ( v7 ) /*0x4a96d7*/
          *(_DWORD *)(result + 300) = v10 | 4; /*0x4a96dc*/
        else
          *(_DWORD *)(result + 300) = v10 & 0xFFFFFFFB; /*0x4a96e7*/
      }
    }
  }
  return result; /*0x4a96ef*/
}



// ==== 0x004A9700  DisplayClass::Update  this=DisplayClass  sig=csp ====
void __thiscall DisplayClass::Update(DisplayClass *this, int a2, int a3)
{
  VectorCursor_uint_DynamicVectorClass_uint____13::Count((int *)this, a2, a3); /*0x4a970a*/
}



// ==== 0x004A9720  Targeting::Readd  this=Targeting  sig=csp ====
int __stdcall Targeting::Readd(_DWORD *a1)
{
  int result; // eax
  int v2; // edi

  if ( a1 ) /*0x4a9728*/
  {
    if ( a1[37] != -1 ) /*0x4a9731*/
      RemoveTarget((int)a1); /*0x4a9734*/
    result = (*(int (__thiscall **)(_DWORD *))(*a1 + 120))(a1); /*0x4a973d*/
    v2 = result; /*0x4a9740*/
    if ( result != -1 ) /*0x4a9745*/
    {
      LOBYTE(result) = DisplayClass::RenderStatusText(24 * result + 9044832, (int)a1, result == 2); /*0x4a9759*/
      if ( (_BYTE)result ) /*0x4a9760*/
        a1[37] = v2; /*0x4a9762*/
    }
  }
  return result; /*0x4a9768*/
}



// ==== 0x004A9770  RemoveTarget  this=-  sig=csp ====
int __stdcall RemoveTarget(int a1)
{
  int result; // eax
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int *v7; // esi
  int v8; // eax
  int v9; // ecx

  v2 = a1; /*0x4a9772*/
  if ( a1 ) /*0x4a9778*/
  {
    result = *(_DWORD *)(a1 + 148); /*0x4a977e*/
    if ( result != -1 ) /*0x4a9787*/
    {
      v3 = 3 * result; /*0x4a978d*/
      v4 = 8 * v3 + 9044832; /*0x4a979b*/
      result = (*(int (__thiscall **)(int, int *))(stru_8A0360[2 * v3] + 16))(v4, &a1); /*0x4a97a9*/
      if ( result != -1 ) /*0x4a97af*/
      {
        v5 = *(_DWORD *)(v4 + 16); /*0x4a97b1*/
        if ( result < v5 ) /*0x4a97b6*/
        {
          v6 = v5 - 1; /*0x4a97b8*/
          for ( *(_DWORD *)(v4 + 16) = v6; /*0x4a97be*/
                result < *(_DWORD *)(v4 + 16);
                *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * result) )
          {
            ++result; /*0x4a97c3*/
          }
          *(_DWORD *)(v2 + 148) = -1; /*0x4a97d2*/
        }
      }
      if ( *(_DWORD *)(v2 + 148) != -1 ) /*0x4a97e3*/
      {
        v7 = dword_8A0370; /*0x4a97e5*/
        do /*0x4a982a*/
        {
          while ( 1 ) /*0x4a97ea*/
          {
            v8 = *(v7 - 4); /*0x4a97ea*/
            a1 = v2; /*0x4a97f4*/
            result = (*(int (__thiscall **)(int *, int *))(v8 + 16))(v7 - 4, &a1); /*0x4a97f9*/
            if ( result == -1 || result >= *v7 ) /*0x4a9805*/
              break; /*0x4a9805*/
            v9 = *v7 - 1; /*0x4a9807*/
            for ( *v7 = v9; result < *v7; *(_DWORD *)(*(v7 - 3) + 4 * result - 4) = *(_DWORD *)(*(v7 - 3) + 4 * result) ) /*0x4a980c*/
              ++result; /*0x4a9811*/
          }
          v7 += 6; /*0x4a9821*/
        }
        while ( (int)v7 < (int)&dword_8A03E8 ); /*0x4a982a*/
        *(_DWORD *)(v2 + 148) = -1; /*0x4a982c*/
      }
    }
  }
  return result; /*0x4a9836*/
}



// ==== 0x004A9840  DisplayClass::SetCoordVisible  this=DisplayClass  sig=csp ====
int __stdcall DisplayClass::SetCoordVisible(DisplayClass *this, _DWORD *a2, char a3)
{
  int result; // eax

  result = *a2; /*0x4a9848*/
  if ( *a2 ) /*0x4a9848*/
  {
    if ( !a3 ) /*0x4a9859*/
    {
      result = DisplayClass::GetCoordDelta((DisplayClass *)g_TacticalClass_Instance, (int)this); /*0x4a9866*/
      LOBYTE(result) = result != -1; /*0x4a9873*/
      return result; /*0x4a9875*/
    }
  }
  else if ( !a3 ) /*0x4a9850*/
  {
    LOBYTE(result) = 0; /*0x4a9852*/
    return result; /*0x4a9854*/
  }
  result = DisplayClass::ScrollTacticalView((DisplayClass *)g_TacticalClass_Instance, (int)this, *a2); /*0x4a9884*/
  LOBYTE(result) = 1; /*0x4a9889*/
  return result; /*0x4a9854*/
}



// ==== 0x004A9890  DisplayClass::UpdateCellPassability  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::UpdateCellPassability(DisplayClass *this, __int16 *a2, int a3)
{
  __int16 *v3; // esi
  CellClass *v5; // ebp
  int v6; // eax
  int copyFlags; // eax
  char AdjacentPassableMask; // al
  int v9; // eax
  char v10; // al
  int v11; // eax
  int v12; // edx
  __int16 v13; // cx
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // eax
  int j; // ebp
  int v18; // edx
  __int16 v19; // cx
  _BYTE *v20; // esi
  char v21; // al
  int v22; // eax
  int v23; // eax
  int k; // edi
  int v25; // edx
  __int16 v26; // cx
  _BYTE *v27; // esi
  char v28; // al
  char v30; // [esp+Eh] [ebp-22h]
  bool v31; // [esp+Fh] [ebp-21h]
  __int16 v32[2]; // [esp+10h] [ebp-20h] BYREF
  int i; // [esp+14h] [ebp-1Ch]
  int v34; // [esp+18h] [ebp-18h]
  int v35; // [esp+1Ch] [ebp-14h]
  __int16 v36[2]; // [esp+20h] [ebp-10h] BYREF
  int v37; // [esp+24h] [ebp-Ch]
  CellClass *v38; // [esp+28h] [ebp-8h]
  int v39; // [esp+2Ch] [ebp-4h]

  v3 = a2; /*0x4a9896*/
  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4a98a2*/
  v38 = v5; /*0x4a98a4*/
  v6 = v5->flags[0]; /*0x4a98a8*/
  v31 = (v6 & 2) == 0; /*0x4a98b9*/
  if ( (v6 & 2) == 0 || (v30 = 0, (v5->copyFlags & 8) == 0) ) /*0x4a98cd*/
    v30 = 1; /*0x4a98cf*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a98da*/
  LOBYTE(v39) = v30; /*0x4a98dc*/
  v5->flags[0] = v6; /*0x4a98e0*/
  copyFlags = v5->copyFlags; /*0x4a98e6*/
  LOBYTE(copyFlags) = copyFlags | 8; /*0x4a98ec*/
  v5->copyFlags = copyFlags; /*0x4a98f0*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 0); /*0x4a98fd*/
  if ( AdjacentPassableMask != v5->shroudedness ) /*0x4a9908*/
  {
    v30 = 1; /*0x4a990a*/
    v5->shroudedness = AdjacentPassableMask; /*0x4a990f*/
  }
  if ( v5->shroudedness == -1 ) /*0x4a991c*/
  {
    v9 = v5->copyFlags; /*0x4a991e*/
    LOBYTE(v9) = v9 | 0x10; /*0x4a9924*/
    v5->copyFlags = v9; /*0x4a9926*/
  }
  v10 = Cell::GetAdjacentPassableMask(a2, 1); /*0x4a9935*/
  if ( v10 != v5->foggedness ) /*0x4a9940*/
  {
    v30 = 1; /*0x4a9942*/
    v5->foggedness = v10; /*0x4a9947*/
  }
  if ( v5->foggedness == -1 ) /*0x4a9954*/
  {
    v11 = v5->flags[0]; /*0x4a9956*/
    LOBYTE(v11) = v11 | 1; /*0x4a995c*/
    v5->flags[0] = v11; /*0x4a995e*/
  }
  if ( v30 ) /*0x4a996a*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9973*/
  for ( i = 0; i < 8; ++i ) /*0x4a9979*/
  {
    v12 = i & 7; /*0x4a9985*/
    v13 = *v3 + LOWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x4a9997*/
    LOWORD(v12) = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x4a999e*/
    LOWORD(v34) = v13; /*0x4a99a2*/
    HIWORD(v34) = v12; /*0x4a99ab*/
    *(_DWORD *)v32 = v34; /*0x4a99b7*/
    v14 = CellCoord::To_CellObj((CellCoord *)this, v32); /*0x4a99c5*/
    if ( (v32[0] != *v3 || v32[1] != v3[1]) && (v14[75] & 0x10) == 0 ) /*0x4a99e2*/
    {
      v15 = Cell::GetAdjacentPassableMask(v32, 0); /*0x4a99f5*/
      if ( v15 == -1 ) /*0x4a99fd*/
      {
        v16 = v14[75]; /*0x4a9a03*/
        if ( (v16 & 8) == 0 ) /*0x4a9a0b*/
          goto LABEL_20; /*0x4a9a0b*/
        LOBYTE(v16) = v16 | 0x10; /*0x4a9a26*/
        v14[75] = v16; /*0x4a9a29*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9a35*/
        for ( j = 0; j < 8; ++j ) /*0x4a9a3a*/
        {
          v18 = j & 7; /*0x4a9a3e*/
          v19 = v32[0] + LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x4a9a50*/
          LOWORD(v18) = v32[1] + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x4a9a59*/
          LOWORD(v35) = v19; /*0x4a9a5e*/
          HIWORD(v35) = v18; /*0x4a9a67*/
          *(_DWORD *)v36 = v35; /*0x4a9a73*/
          v20 = CellCoord::To_CellObj((CellCoord *)this, v36); /*0x4a9a89*/
          v21 = Cell::GetAdjacentPassableMask(v36, 0); /*0x4a9a8b*/
          if ( v21 != v20[288] ) /*0x4a9a96*/
          {
            v20[288] = v21; /*0x4a9a98*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v20); /*0x4a9aa5*/
          }
        }
        v5 = v38; /*0x4a9ab0*/
        v3 = a2; /*0x4a9ab4*/
      }
      else
      {
        if ( v15 != -2 && (v14[75] & 8) == 0 ) /*0x4a9ac6*/
        {
LABEL_20:
          (*((void (__thiscall **)(DisplayClass *, __int16 *, int))this->DisplayClass_field_0x0 + 36))(this, v32, a3); /*0x4a9a0d*/
          goto LABEL_31; /*0x4a9a21*/
        }
        if ( v15 >= 0 && v15 != *((char *)v14 + 288) ) /*0x4a9aeb*/
        {
          *((_BYTE *)v14 + 288) = v15; /*0x4a9aed*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9afa*/
        }
      }
    }
LABEL_31:
    if ( (v32[0] != *v3 || v32[1] != v3[1]) && (v14[80] & 1) == 0 ) /*0x4a9b1f*/
    {
      v22 = Cell::GetAdjacentPassableMask(v32, 1); /*0x4a9b32*/
      if ( v22 == -1 ) /*0x4a9b3a*/
      {
        v23 = v14[80]; /*0x4a9b40*/
        if ( (v23 & 2) == 0 ) /*0x4a9b48*/
          goto LABEL_36; /*0x4a9b48*/
        LOBYTE(v23) = v23 | 1; /*0x4a9b63*/
        v14[80] = v23; /*0x4a9b66*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9b72*/
        for ( k = 0; k < 8; ++k ) /*0x4a9b77*/
        {
          v25 = k & 7; /*0x4a9b7b*/
          v26 = v32[0] + LOWORD(g_DDrawSurfaceManager.scenario[v25 + 82]); /*0x4a9b8d*/
          LOWORD(v25) = v32[1] + HIWORD(g_DDrawSurfaceManager.scenario[v25 + 82]); /*0x4a9b96*/
          LOWORD(v37) = v26; /*0x4a9b9b*/
          HIWORD(v37) = v25; /*0x4a9ba4*/
          *(_DWORD *)v36 = v37; /*0x4a9bb0*/
          v27 = CellCoord::To_CellObj((CellCoord *)this, v36); /*0x4a9bc6*/
          v28 = Cell::GetAdjacentPassableMask(v36, 1); /*0x4a9bc8*/
          if ( v28 != v27[289] ) /*0x4a9bd3*/
          {
            v27[289] = v28; /*0x4a9bd5*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v27); /*0x4a9be2*/
          }
        }
        v5 = v38; /*0x4a9bed*/
        v3 = a2; /*0x4a9bf1*/
      }
      else
      {
        if ( v22 != -2 && (v14[80] & 2) == 0 ) /*0x4a9c03*/
        {
LABEL_36:
          (*((void (__thiscall **)(DisplayClass *, __int16 *, int))this->DisplayClass_field_0x0 + 36))(this, v32, a3); /*0x4a9b4a*/
          continue; /*0x4a9b5e*/
        }
        if ( v22 >= 0 && v22 != *((char *)v14 + 289) ) /*0x4a9c28*/
        {
          *((_BYTE *)v14 + 289) = v22; /*0x4a9c2a*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9c37*/
        }
      }
    }
  }
  if ( v30 ) /*0x4a9c55*/
    CellClass::SpiralFindClosest((int)v5, a3, v39); /*0x4a9c67*/
  if ( (v5->flags[0] & 2) != 0 && v31 && ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x4a9c88*/
    CellClass::UpdateZone(v5); /*0x4a9c8c*/
  return v30; /*0x4a9c91*/
}



// ==== 0x004A9CA0  DisplayClass::g_var_72f2d5  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::g_var_72f2d5(DisplayClass *this, __int16 *a2, int a3, char a4)
{
  DisplayClass *v5; // esi
  void *DisplayClass_field_0x140; // eax
  bool v7; // bl
  char AdjacentPassableMask; // al
  void *DisplayClass_field_0x12C; // eax
  char v10; // cl
  char result; // al
  char v12; // [esp+Ch] [ebp-4h]
  char v13; // [esp+14h] [ebp+4h]

  v5 = (DisplayClass *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4a9cae*/
  DisplayClass_field_0x140 = v5->DisplayClass_field_0x140; /*0x4a9cb0*/
  v7 = ((unsigned __int8)DisplayClass_field_0x140 & 2) == 0; /*0x4a9cbc*/
  if ( ((unsigned __int8)DisplayClass_field_0x140 & 2) == 0 || (v13 = 0, ((int)v5->DisplayClass_field_0x12C & 8) == 0) ) /*0x4a9cd1*/
    v13 = 1; /*0x4a9cd3*/
  LOBYTE(DisplayClass_field_0x140) = (unsigned __int8)DisplayClass_field_0x140 & 0xBD | 2; /*0x4a9cde*/
  v12 = v13; /*0x4a9ce0*/
  v5->DisplayClass_field_0x140 = DisplayClass_field_0x140; /*0x4a9ce4*/
  if ( a4 ) /*0x4a9cf2*/
    DisplayClass::AdvanceFrameCounter(v5); /*0x4a9cf4*/
  else
    DisplayClass::UpdateDisplayTimer(v5); /*0x4a9cfb*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 0); /*0x4a9d09*/
  if ( AdjacentPassableMask != v5->__pad_34[236] ) /*0x4a9d14*/
  {
    v13 = 1; /*0x4a9d16*/
    v5->__pad_34[236] = AdjacentPassableMask; /*0x4a9d1b*/
  }
  if ( v5->__pad_34[236] == -1 ) /*0x4a9d28*/
  {
    DisplayClass_field_0x12C = v5->DisplayClass_field_0x12C; /*0x4a9d2a*/
    LOBYTE(DisplayClass_field_0x12C) = (unsigned __int8)DisplayClass_field_0x12C | 0x10; /*0x4a9d30*/
    v5->DisplayClass_field_0x12C = DisplayClass_field_0x12C; /*0x4a9d32*/
  }
  v10 = Cell::GetAdjacentPassableMask(a2, 1); /*0x4a9d46*/
  if ( v10 == v5->__pad_34[237] ) /*0x4a9d50*/
  {
    result = v13; /*0x4a9d60*/
  }
  else
  {
    result = 1; /*0x4a9d52*/
    v5->__pad_34[237] = v10; /*0x4a9d54*/
    v13 = 1; /*0x4a9d5a*/
  }
  if ( v5->__pad_34[237] == -1 ) /*0x4a9d6b*/
    v5->DisplayClass_field_0x140 = (void *)((int)v5->DisplayClass_field_0x140 | 1); /*0x4a9d6d*/
  if ( result ) /*0x4a9d76*/
  {
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9d7f*/
    CellClass::SpiralFindClosest((int)v5, a3, v12); /*0x4a9d94*/
    result = v13; /*0x4a9d99*/
  }
  if ( ((int)v5->DisplayClass_field_0x140 & 2) != 0 && v7 && ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x4a9db5*/
  {
    CellClass::UpdateZone((CellClass *)v5); /*0x4a9db9*/
    return v13; /*0x4a9dbe*/
  }
  return result; /*0x4a9dc2*/
}



// ==== 0x004A9DD0  DisplayClass::ProcessCellReveal  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::ProcessCellReveal(DisplayClass *this, __int16 *a2, int a3)
{
  CellClass *v5; // edi
  int v6; // eax
  char v7; // cl
  char AdjacentPassableMask; // al
  int v9; // eax
  int v10; // eax
  __int16 v11; // dx
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // eax
  int j; // edi
  int v16; // edx
  __int16 v17; // cx
  _BYTE *v18; // esi
  char v19; // al
  bool v21; // [esp+Fh] [ebp-1Dh]
  __int16 v22[2]; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  __int16 v26[2]; // [esp+20h] [ebp-Ch] BYREF
  CellClass *v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]
  char v29; // [esp+30h] [ebp+4h]

  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4a9de2*/
  v27 = v5; /*0x4a9de7*/
  v6 = v5->flags[0]; /*0x4a9deb*/
  v7 = v6; /*0x4a9df1*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a9dfc*/
  v21 = (v7 & 2) == 0; /*0x4a9dfe*/
  v29 = v21; /*0x4a9e02*/
  LOBYTE(v28) = v21; /*0x4a9e06*/
  v5->flags[0] = v6; /*0x4a9e0a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 1); /*0x4a9e16*/
  if ( AdjacentPassableMask != v5->foggedness ) /*0x4a9e21*/
  {
    v29 = 1; /*0x4a9e23*/
    v5->foggedness = AdjacentPassableMask; /*0x4a9e28*/
  }
  if ( v5->foggedness == -1 ) /*0x4a9e35*/
  {
    v9 = v5->flags[0]; /*0x4a9e37*/
    LOBYTE(v9) = v9 | 1; /*0x4a9e3d*/
    v5->flags[0] = v9; /*0x4a9e3f*/
  }
  if ( v29 ) /*0x4a9e4b*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9e54*/
  for ( i = 0; i < 8; ++i ) /*0x4a9e5a*/
  {
    v10 = i & 7; /*0x4a9e69*/
    v11 = a2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v10 + 82]); /*0x4a9e7c*/
    LOWORD(v24) = LOWORD(g_DDrawSurfaceManager.scenario[v10 + 82]) + *a2; /*0x4a9e87*/
    HIWORD(v24) = v11; /*0x4a9e90*/
    *(_DWORD *)v22 = v24; /*0x4a9e9c*/
    v12 = CellCoord::To_CellObj((CellCoord *)this, v22); /*0x4a9eaa*/
    if ( (v22[0] != *a2 || v22[1] != a2[1]) && (v12[80] & 1) == 0 ) /*0x4a9ec7*/
    {
      v13 = Cell::GetAdjacentPassableMask(v22, 1); /*0x4a9eda*/
      if ( v13 == -1 ) /*0x4a9ee2*/
      {
        v14 = v12[80]; /*0x4a9ee8*/
        if ( (v14 & 2) == 0 ) /*0x4a9ef0*/
          goto LABEL_13; /*0x4a9ef0*/
        LOBYTE(v14) = v14 | 1; /*0x4a9f0c*/
        v12[80] = v14; /*0x4a9f0f*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v12); /*0x4a9f1b*/
        for ( j = 0; j < 8; ++j ) /*0x4a9f20*/
        {
          v16 = j & 7; /*0x4a9f29*/
          v17 = LOWORD(g_DDrawSurfaceManager.scenario[v16 + 82]) + v22[0]; /*0x4a9f2c*/
          LOWORD(v16) = HIWORD(g_DDrawSurfaceManager.scenario[v16 + 82]); /*0x4a9f3b*/
          LOWORD(v25) = v17; /*0x4a9f43*/
          HIWORD(v25) = v22[1] + v16; /*0x4a9f54*/
          *(_DWORD *)v26 = v25; /*0x4a9f5d*/
          v18 = CellCoord::To_CellObj((CellCoord *)this, v26); /*0x4a9f73*/
          v19 = Cell::GetAdjacentPassableMask(v26, 1); /*0x4a9f75*/
          if ( v19 != v18[289] ) /*0x4a9f80*/
          {
            v18[289] = v19; /*0x4a9f82*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v18); /*0x4a9f8f*/
          }
        }
        v5 = v27; /*0x4a9f9a*/
      }
      else
      {
        if ( v13 != -2 && (v12[80] & 2) == 0 ) /*0x4a9fac*/
        {
LABEL_13:
          (*((void (__thiscall **)(DisplayClass *, __int16 *, int))this->DisplayClass_field_0x0 + 38))(this, v22, a3); /*0x4a9ef2*/
          continue; /*0x4a9f07*/
        }
        if ( v13 >= 0 && v13 != *((char *)v12 + 289) ) /*0x4a9fd2*/
        {
          *((_BYTE *)v12 + 289) = v13; /*0x4a9fd4*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v12); /*0x4a9fe1*/
        }
      }
    }
  }
  if ( v29 ) /*0x4a9fff*/
    CellClass::SpiralFindClosest((int)v5, a3, v28); /*0x4aa011*/
  if ( (v5->flags[0] & 2) != 0 && v21 && ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x4aa032*/
    CellClass::UpdateZone(v5); /*0x4aa036*/
  return v29; /*0x4aa03b*/
}



// ==== 0x004AA050  DisplayClass::RevealFogCell  this=DisplayClass  sig=csp ====
bool __thiscall DisplayClass::RevealFogCell(DisplayClass *this, __int16 *a2, int a3)
{
  __int16 *v3; // edi
  _DWORD *v5; // esi
  int v6; // eax
  char v7; // bl
  bool v8; // bl
  char AdjacentPassableMask; // al
  int v10; // eax
  int v11; // eax
  __int16 v12; // dx
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // eax
  int j; // edi
  int v17; // edx
  __int16 v18; // cx
  _BYTE *v19; // esi
  char v20; // al
  __int16 v22[2]; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  __int16 v26[2]; // [esp+20h] [ebp-Ch] BYREF
  int v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]

  v3 = a2; /*0x4aa057*/
  v5 = CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4aa063*/
  v28 = (int)v5; /*0x4aa068*/
  v6 = v5[75]; /*0x4aa06c*/
  v7 = v6; /*0x4aa072*/
  LOBYTE(v6) = v6 | 8; /*0x4aa074*/
  v8 = (v7 & 8) == 0; /*0x4aa07b*/
  v5[75] = v6; /*0x4aa07e*/
  LOBYTE(v27) = v8; /*0x4aa08a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 0); /*0x4aa08e*/
  if ( AdjacentPassableMask != *((_BYTE *)v5 + 288) ) /*0x4aa099*/
  {
    v8 = 1; /*0x4aa09b*/
    *((_BYTE *)v5 + 288) = AdjacentPassableMask; /*0x4aa09d*/
  }
  if ( *((_BYTE *)v5 + 288) == 0xFF ) /*0x4aa0aa*/
  {
    v10 = v5[75]; /*0x4aa0ac*/
    LOBYTE(v10) = v10 | 0x10; /*0x4aa0b2*/
    v5[75] = v10; /*0x4aa0b4*/
  }
  if ( v8 ) /*0x4aa0bc*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4aa0c5*/
  for ( i = 0; i < 8; ++i ) /*0x4aa0ca*/
  {
    v11 = i & 7; /*0x4aa0d6*/
    v12 = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x4aa0ec*/
    LOWORD(v24) = *v3 + LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x4aa0f7*/
    HIWORD(v24) = v12; /*0x4aa100*/
    *(_DWORD *)v22 = v24; /*0x4aa10c*/
    v13 = CellCoord::To_CellObj((CellCoord *)this, v22); /*0x4aa11a*/
    if ( (v22[0] != *v3 || v22[1] != v3[1]) && (v13[75] & 0x10) == 0 ) /*0x4aa137*/
    {
      v14 = Cell::GetAdjacentPassableMask(v22, 0); /*0x4aa14a*/
      if ( v14 == -1 ) /*0x4aa152*/
      {
        v15 = v13[75]; /*0x4aa158*/
        if ( (v15 & 8) == 0 ) /*0x4aa160*/
          goto LABEL_13; /*0x4aa160*/
        LOBYTE(v15) = v15 | 0x10; /*0x4aa17c*/
        v13[75] = v15; /*0x4aa17f*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v13); /*0x4aa18b*/
        for ( j = 0; j < 8; ++j ) /*0x4aa190*/
        {
          v17 = j & 7; /*0x4aa194*/
          v18 = v22[0] + LOWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4aa1a6*/
          LOWORD(v17) = v22[1] + HIWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4aa1af*/
          LOWORD(v25) = v18; /*0x4aa1b4*/
          HIWORD(v25) = v17; /*0x4aa1bd*/
          *(_DWORD *)v26 = v25; /*0x4aa1c9*/
          v19 = CellCoord::To_CellObj((CellCoord *)this, v26); /*0x4aa1df*/
          v20 = Cell::GetAdjacentPassableMask(v26, 0); /*0x4aa1e1*/
          if ( v20 != v19[288] ) /*0x4aa1ec*/
          {
            v19[288] = v20; /*0x4aa1ee*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v19); /*0x4aa1fb*/
          }
        }
        v3 = a2; /*0x4aa206*/
      }
      else
      {
        if ( v14 != -2 && (v13[75] & 8) == 0 ) /*0x4aa218*/
        {
LABEL_13:
          (*((void (__thiscall **)(DisplayClass *, __int16 *, int))this->DisplayClass_field_0x0 + 39))(this, v22, a3); /*0x4aa162*/
          continue; /*0x4aa177*/
        }
        if ( v14 >= 0 && v14 != *((char *)v13 + 288) ) /*0x4aa23e*/
        {
          *((_BYTE *)v13 + 288) = v14; /*0x4aa240*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v13); /*0x4aa24d*/
        }
      }
    }
  }
  if ( v8 ) /*0x4aa266*/
    CellClass::SpiralFindClosest(v28, a3, v27); /*0x4aa27c*/
  return v8; /*0x4aa281*/
}



// ==== 0x004AA290  BuildingClass::updateSellBack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::updateSellBack(BuildingClass *this, __int16 *a2, _DWORD *a3)
{
  Object *v3; // eax

  v3 = (Object *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4aa29c*/
  return Object::FindObjectCell(v3, a3, 0); /*0x4aa2a8*/
}



// ==== 0x004AA2B0  sub_4AA2B0  this=-  sig=csp ====
_BYTE *__stdcall sub_4AA2B0(_BYTE *a1)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  _BYTE *v5; // esi
  _BYTE *v6; // edi
  _BYTE v8[5]; // [esp+3h] [ebp-5h]

  v8[4] = 0; /*0x4aa2b7*/
  *(_DWORD *)v8 = a1 == 0; /*0x4aa2c8*/
  v1 = &unk_820030; /*0x4aa2d1*/
  while ( 1 ) /*0x4aa2d8*/
  {
    v2 = 0; /*0x4aa2d8*/
    v3 = 6 * *v1; /*0x4aa2dd*/
    if ( dword_8A0370[v3] > 0 ) /*0x4aa2e8*/
      break; /*0x4aa2e8*/
LABEL_12:
    if ( (int)++v1 >= (int)dword_82003C ) /*0x4aa35b*/
      return *(_BYTE **)&v8[1]; /*0x4aa36c*/
  }
  while ( 1 )
  {
    v4 = dword_8A0364[v3]; /*0x4aa2ea*/
    v5 = *(_BYTE **)(v4 + 4 * v2); /*0x4aa2f0*/
    if ( !v5 ) /*0x4aa2f5*/
      goto LABEL_11; /*0x4aa2f5*/
    v6 = (v5[20] & 1) != 0 ? v5 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 100))(*(_DWORD *)(v4 + 4 * v2)) /*0x4aa318*/
      || !v6
      || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 316))(v6) )
    {
      goto LABEL_11; /*0x4aa320*/
    }
    if ( !*(_DWORD *)&v8[1] ) /*0x4aa328*/
      *(_DWORD *)&v8[1] = v5; /*0x4aa32a*/
    if ( v8[0] ) /*0x4aa334*/
      return v5; /*0x4aa369*/
    v8[0] = a1 == v5; /*0x4aa33c*/
LABEL_11:
    ++v2; /*0x4aa341*/
    v3 = 6 * *v1; /*0x4aa347*/
    if ( v2 >= dword_8A0370[v3] ) /*0x4aa350*/
      goto LABEL_12; /*0x4aa350*/
  }
}



// ==== 0x004AA380  sub_4AA380  this=-  sig=csp ====
_BYTE *__stdcall sub_4AA380(_BYTE *a1)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  _BYTE *v3; // esi
  _BYTE *v4; // edi
  _BYTE v6[5]; // [esp+3h] [ebp-5h]

  v6[4] = 0; /*0x4aa387*/
  *(_DWORD *)v6 = a1 == 0; /*0x4aa398*/
  v1 = &dword_82003C; /*0x4aa3a1*/
  while ( 1 ) /*0x4aa3b2*/
  {
    v2 = dword_8A0370[6 * *v1] - 1; /*0x4aa3b2*/
    if ( v2 >= 0 ) /*0x4aa3b3*/
      break; /*0x4aa3b3*/
LABEL_12:
    if ( (int)++v1 >= (int)&DisplayClass::TacticalClass `RTTI Type Descriptor' ) /*0x4aa41d*/
      return *(_BYTE **)&v6[1]; /*0x4aa42a*/
  }
  while ( 1 )
  {
    v3 = *(_BYTE **)(dword_8A0364[6 * *v1] + 4 * v2); /*0x4aa3c1*/
    if ( !v3 ) /*0x4aa3c6*/
      goto LABEL_11; /*0x4aa3c6*/
    v4 = (v3[20] & 1) != 0 ? v3 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 100))(v3) /*0x4aa3e8*/
      || !v4
      || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 316))(v4) )
    {
      goto LABEL_11; /*0x4aa3f0*/
    }
    if ( !*(_DWORD *)&v6[1] ) /*0x4aa3f8*/
      *(_DWORD *)&v6[1] = v3; /*0x4aa3fa*/
    if ( v6[0] ) /*0x4aa404*/
      return v3; /*0x4aa427*/
    v6[0] = a1 == v3; /*0x4aa40c*/
LABEL_11:
    if ( --v2 < 0 ) /*0x4aa412*/
      goto LABEL_12; /*0x4aa412*/
  }
}



// ==== 0x004AA440  CellClass::FindOpenNeighbor  this=CellClass  sig=csp ====
int *__userpurge CellClass::FindOpenNeighbor@<eax>(
        CellClass *this,
        double a2@<st0>,
        int *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // ecx
  int v10; // esi
  int v11; // ebp
  bool v12; // zf
  int v13; // ebx
  int *ScreenCenterOffset; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // ebp
  int v21; // edx
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // kr08_4
  _DWORD *v28; // eax
  int v29; // ecx
  int v30; // ebx
  int v31; // ebx
  _DWORD *v32; // eax
  int v33; // ecx
  int *v34; // eax
  int v35; // ebx
  int v36; // ebp
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // ebx
  int v42; // ebp
  int v43; // edi
  int v44; // eax
  _DWORD *v45; // eax
  int v46; // ecx
  int v47; // eax
  __int16 v48; // ax
  __int16 v49; // cx
  int v50; // eax
  _WORD *Items; // edx
  int v52; // ebx
  int v53; // esi
  int v54; // edi
  __int16 v55; // ax
  __int16 v56; // ax
  int v57; // ecx
  int v58; // ebx
  _DWORD *v59; // eax
  int v60; // ecx
  int *v61; // eax
  int v62; // ebx
  int v63; // ebp
  double v64; // [esp+8h] [ebp-68h]
  char v65; // [esp+22h] [ebp-4Eh]
  char v66; // [esp+23h] [ebp-4Dh]
  __int16 v67[2]; // [esp+24h] [ebp-4Ch] BYREF
  int TileIndex; // [esp+28h] [ebp-48h]
  __int16 v69; // [esp+2Ch] [ebp-44h] BYREF
  __int16 v70; // [esp+2Eh] [ebp-42h]
  int v71; // [esp+30h] [ebp-40h] BYREF
  int v72; // [esp+34h] [ebp-3Ch]
  int v73; // [esp+38h] [ebp-38h] BYREF
  int v74; // [esp+3Ch] [ebp-34h]
  int v75; // [esp+40h] [ebp-30h] BYREF
  int v76; // [esp+44h] [ebp-2Ch]
  _DWORD v77[2]; // [esp+48h] [ebp-28h] BYREF
  _DWORD v78[2]; // [esp+50h] [ebp-20h] BYREF
  VectorClass v79; // [esp+58h] [ebp-18h] BYREF
  int v80; // [esp+68h] [ebp-8h]
  int v81; // [esp+6Ch] [ebp-4h]
  int *v82; // [esp+78h] [ebp+8h]
  int *v83; // [esp+78h] [ebp+8h]

  v10 = v9; /*0x4aa451*/
  v11 = 0; /*0x4aa459*/
  v12 = *(_WORD *)a4 == *(_WORD *)&stru_8A0390.bombVisible; /*0x4aa45b*/
  v65 = 0; /*0x4aa45f*/
  v66 = 0; /*0x4aa464*/
  TileIndex = -1; /*0x4aa469*/
  v67[0] = 0; /*0x4aa471*/
  v67[1] = 0; /*0x4aa476*/
  if ( !v12 || *(_WORD *)(a4 + 2) != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aa481*/
    *(_DWORD *)v67 = *(_DWORD *)a4; /*0x4aa485*/
  if ( v67[0] == *(_WORD *)&stru_8A0390.bombVisible && v67[1] == *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aa495*/
    *(_DWORD *)v67 = *(_DWORD *)a5; /*0x4aa49d*/
  v13 = (int)a3; /*0x4aa4a1*/
  if ( a3 == (int *)-1 ) /*0x4aa4a8*/
    v13 = 0; /*0x4aa4aa*/
  if ( (_BYTE)a7 /*0x4aa4c0*/
    && (v67[0] != *(_WORD *)&stru_8A0390.bombVisible || v67[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1]) )
  {
    TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v67, a8, 1); /*0x4aa4d8*/
  }
  v71 = v67[0]; /*0x4aa4e6*/
  v72 = v67[1]; /*0x4aa4f2*/
  ScreenCenterOffset = CellClass::GetScreenCenterOffset((CellClass *)v10, &v75, &v71); /*0x4aa4fa*/
  v15 = *ScreenCenterOffset; /*0x4aa4ff*/
  v16 = ScreenCenterOffset[1]; /*0x4aa50d*/
  if ( v67[0] == *(_WORD *)&stru_8A0390.bombVisible && v67[1] == *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aa51e*/
  {
    a7 = 0; /*0x4aa618*/
    a4 = 0; /*0x4aa61d*/
    if ( v13 != 1 ) /*0x4aa621*/
    {
      if ( v13 == 2 ) /*0x4aa624*/
      {
        v66 = 1; /*0x4aa65f*/
        a4 = 2 * *(_DWORD *)(v10 + 264) + 2; /*0x4aa66e*/
        v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, *(_DWORD *)(v10 + 260)); /*0x4aa67b*/
      }
      else
      {
        if ( v13 != 3 ) /*0x4aa627*/
        {
          v24 = *(_DWORD *)(v10 + 260); /*0x4aa629*/
          v66 = 1; /*0x4aa62f*/
LABEL_35:
          v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, v24); /*0x4aa694*/
          goto LABEL_36; /*0x4aa6a2*/
        }
        v65 = 1; /*0x4aa645*/
        v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2 * *(_DWORD *)(v10 + 264)); /*0x4aa651*/
      }
LABEL_36:
      v23 = v25 - 1; /*0x4aa6a7*/
      goto LABEL_37; /*0x4aa6a9*/
    }
    v26 = *(_DWORD *)(v10 + 264); /*0x4aa683*/
    v65 = 1; /*0x4aa689*/
    a7 = *(_DWORD *)(v10 + 260); /*0x4aa68e*/
    v24 = 2 * v26; /*0x4aa692*/
    goto LABEL_35; /*0x4aa692*/
  }
  v17 = *(_DWORD *)(v10 + 252); /*0x4aa52a*/
  v18 = v15 - v17; /*0x4aa534*/
  v19 = *(_DWORD *)(v10 + 260) - v15 + v17; /*0x4aa536*/
  a5 = v18; /*0x4aa53a*/
  if ( v18 >= v19 ) /*0x4aa53e*/
    v18 = v19; /*0x4aa540*/
  v20 = *(_DWORD *)(v10 + 256); /*0x4aa542*/
  a7 = 2 * v18; /*0x4aa54b*/
  v21 = *(_DWORD *)(v10 + 264); /*0x4aa557*/
  v22 = v16 - 2 * v20; /*0x4aa55d*/
  if ( v22 >= 2 * (v21 + v20) - v16 ) /*0x4aa568*/
    v22 = 2 * (v21 + v20) - v16; /*0x4aa56a*/
  if ( a7 >= v22 ) /*0x4aa570*/
  {
    v65 = 0; /*0x4aa5cc*/
    v66 = 1; /*0x4aa5d3*/
    if ( v16 - 2 * v20 >= 2 * v21 / 2 ) /*0x4aa5df*/
    {
      a4 = 2 * v21; /*0x4aa5fa*/
      v23 = a5; /*0x4aa5fe*/
      v13 = 2; /*0x4aa602*/
    }
    else
    {
      v23 = a5; /*0x4aa5e1*/
      v13 = 0; /*0x4aa5e5*/
      a4 = -1; /*0x4aa5e7*/
    }
    a7 = 0; /*0x4aa5ef*/
    v11 = 0; /*0x4aa5f3*/
  }
  else
  {
    v65 = 1; /*0x4aa578*/
    v66 = 0; /*0x4aa57f*/
    v23 = v16 - v20; /*0x4aa591*/
    if ( a5 >= *(_DWORD *)(v10 + 260) / 2 ) /*0x4aa58f*/
    {
      a7 = *(_DWORD *)(v10 + 260); /*0x4aa5b1*/
      v13 = 1; /*0x4aa5b5*/
    }
    else
    {
      a7 = -1; /*0x4aa593*/
      v13 = 3; /*0x4aa59b*/
    }
    a4 = 0; /*0x4aa5a0*/
    v11 = 0; /*0x4aa5a8*/
  }
LABEL_37:
  v27 = *(_DWORD *)(v10 + 260); /*0x4aa6aa*/
  v71 = 1; /*0x4aa6c1*/
  v72 = v27 / 2; /*0x4aa6c9*/
  v28 = HexCoord::Convert((HexCoord *)v10, &v75, &v71); /*0x4aa6cd*/
  LOWORD(a5) = *v28; /*0x4aa6d6*/
  HIWORD(a5) = v28[1]; /*0x4aa6e2*/
  if ( v65 )
  {
    v82 = 0; /*0x4aa702*/
    v29 = 2 * *(_DWORD *)(v10 + 264); /*0x4aa709*/
    v30 = v13 != 1 ? 1 : -1;
    if ( v29 > 0 ) /*0x4aa70e*/
    {
      v71 = a7 + v30; /*0x4aa71a*/
      while ( 1 ) /*0x4aa733*/
      {
        v73 = a7; /*0x4aa733*/
        v31 = ((int)v82 + v23) % v29; /*0x4aa737*/
        v74 = v31; /*0x4aa73e*/
        v32 = HexCoord::Convert((HexCoord *)v10, v77, &v73); /*0x4aa742*/
        v75 = v71; /*0x4aa74d*/
        v76 = v31; /*0x4aa751*/
        v33 = v32[1]; /*0x4aa757*/
        LOWORD(a4) = *v32; /*0x4aa75a*/
        HIWORD(a4) = v33; /*0x4aa75f*/
        v34 = HexCoord::Convert((HexCoord *)v10, v78, &v75); /*0x4aa770*/
        v35 = *v34; /*0x4aa775*/
        v36 = v34[1]; /*0x4aa77e*/
        if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v10, (__int16 *)&a4, 1) ) /*0x4aa783*/
        {
          v69 = v35; /*0x4aa7a7*/
          v70 = v36; /*0x4aa7ac*/
          if ( CellClass::CheckBuildablePair((CellClass *)v10, (__int16 *)&a4, &v69, a6, TileIndex, a8) ) /*0x4aa7b1*/
            break; /*0x4aa7b1*/
        }
        v29 = 2 * *(_DWORD *)(v10 + 264); /*0x4aa7c5*/
        v82 = (int *)((char *)v82 + 1); /*0x4aa7c9*/
        if ( (int)v82 >= v29 ) /*0x4aa7cd*/
          goto LABEL_43; /*0x4aa7cd*/
      }
      this->mapCoords[0] = a4; /*0x4aa7f2*/
      return this->mapCoords; /*0x4aa7f8*/
    }
LABEL_43:
    this->mapCoords[0] = a5; /*0x4aa7d3*/
    return this->mapCoords; /*0x4aa7e4*/
  }
  if ( !v66 ) /*0x4aa801*/
    goto LABEL_43; /*0x4aa801*/
  v38 = -(v13 != 0); /*0x4aa807*/
  LOBYTE(v38) = v38 & 0xFE; /*0x4aa809*/
  v39 = v38 + 1; /*0x4aa80b*/
  if ( v13 == 2 ) /*0x4aa80f*/
  {
    VectorClass::CellConstructor(&v79, 0, 0); /*0x4aa81b*/
    v40 = *(_DWORD *)(v10 + 260); /*0x4aa820*/
    v41 = 0; /*0x4aa826*/
    v79.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x4aa82a*/
    v81 = 10; /*0x4aa832*/
    v80 = 0; /*0x4aa83a*/
    if ( v40 > 0 ) /*0x4aa83e*/
    {
      v42 = a6; /*0x4aa844*/
      do /*0x4aa913*/
      {
        v43 = 0; /*0x4aa848*/
        while ( 1 ) /*0x4aa84a*/
        {
          v44 = *(_DWORD *)(v10 + 264); /*0x4aa84a*/
          v75 = v41; /*0x4aa855*/
          v76 = v43 + 2 * v44; /*0x4aa860*/
          v45 = HexCoord::Convert((HexCoord *)v10, v78, &v75); /*0x4aa867*/
          v46 = v45[1]; /*0x4aa877*/
          LOWORD(a7) = *v45; /*0x4aa87a*/
          HIWORD(a7) = v46; /*0x4aa882*/
          if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v10, (__int16 *)&a7, 1) ) /*0x4aa88c*/
          {
            if ( CellClass::CheckBuildablePair((CellClass *)v10, (__int16 *)&a7, v67, v42, TileIndex, a8) ) /*0x4aa8af*/
              break; /*0x4aa8af*/
          }
          if ( ++v43 >= 15 ) /*0x4aa8bc*/
            goto LABEL_60; /*0x4aa8bc*/
        }
        if ( v80 < v79.Capacity /*0x4aa8ed*/
          || (v79.IsAllocated || !v79.Capacity)
          && v81 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v79.ptr_0 + 2))(
               &v79,
               v81 + v79.Capacity,
               0) )
        {
          v47 = v80++; /*0x4aa8fc*/
          *((_DWORD *)v79.Items + v47) = a7; /*0x4aa907*/
        }
LABEL_60:
        ++v41; /*0x4aa90a*/
      }
      while ( v41 < *(_DWORD *)(v10 + 260) ); /*0x4aa913*/
      v11 = v80; /*0x4aa919*/
    }
    v48 = v67[0]; /*0x4aa91d*/
    v49 = v67[1]; /*0x4aa928*/
    if ( v67[0] == *(_WORD *)&stru_8A0390.bombVisible && v67[1] == *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aa939*/
    {
      if ( v11 <= 0 ) /*0x4aa93d*/
      {
        a5 = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4aa963*/
        Items = v79.Items; /*0x4aa967*/
      }
      else
      {
        v50 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v11 - 1); /*0x4aa94e*/
        Items = v79.Items; /*0x4aa953*/
        a5 = *((_DWORD *)v79.Items + v50); /*0x4aa95a*/
      }
    }
    else
    {
      v52 = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4aa970*/
      v53 = -1; /*0x4aa976*/
      v54 = 0; /*0x4aa979*/
      Items = v79.Items; /*0x4aa97d*/
      if ( v80 > 0 ) /*0x4aa981*/
      {
        while ( 1 ) /*0x4aa994*/
        {
          v55 = v48 - Items[2 * v54]; /*0x4aa994*/
          a7 = (__int16)(v49 - Items[2 * v54 + 1]); /*0x4aa9a1*/
          __asm { fild dword ptr [esp+68h+arg_14] } /*0x4aa9a8*/
          a7 = v55; /*0x4aa9af*/
          __asm /*0x4aa9b6*/
          {
            fild dword ptr [esp+68h+arg_14]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+68h+var_68]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v64); /*0x4aa9ce*/
          v56 = Math::RoundToInt(a2); /*0x4aa9d6*/
          Items = v79.Items; /*0x4aa9db*/
          if ( v53 == -1 || v56 < v53 ) /*0x4aa9e9*/
          {
            v52 = *((_DWORD *)v79.Items + v54); /*0x4aa9eb*/
            v53 = v56; /*0x4aa9ee*/
          }
          if ( ++v54 >= v11 ) /*0x4aa9f3*/
            break; /*0x4aa9f3*/
          v48 = v67[0]; /*0x4aa985*/
          v49 = v67[1]; /*0x4aa98a*/
        }
      }
      a5 = v52; /*0x4aa9f5*/
    }
    v79.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x4aa9fb*/
    if ( Items && v79.IsAllocated ) /*0x4aaa0f*/
    {
      __3_YAXPAX_Z(Items); /*0x4aaa16*/
      this->mapCoords[0] = a5; /*0x4aaa26*/
      return this->mapCoords; /*0x4aaa2f*/
    }
    goto LABEL_43; /*0x4aaa0f*/
  }
  v57 = *(_DWORD *)(v10 + 260); /*0x4aaa32*/
  v83 = 0; /*0x4aaa38*/
  if ( v57 <= 0 ) /*0x4aaa3e*/
    goto LABEL_43; /*0x4aaa3e*/
  v71 = a4 + v39; /*0x4aaa4a*/
  while ( 1 ) /*0x4aaa5f*/
  {
    v76 = a4; /*0x4aaa5f*/
    v58 = ((int)v83 + v23) % v57; /*0x4aaa65*/
    v75 = v58; /*0x4aaa6d*/
    v59 = HexCoord::Convert((HexCoord *)v10, v78, &v75); /*0x4aaa71*/
    v73 = v58; /*0x4aaa7c*/
    v74 = v71; /*0x4aaa80*/
    v60 = v59[1]; /*0x4aaa86*/
    LOWORD(a7) = *v59; /*0x4aaa89*/
    HIWORD(a7) = v60; /*0x4aaa8e*/
    v61 = HexCoord::Convert((HexCoord *)v10, v77, &v73); /*0x4aaa9f*/
    v62 = *v61; /*0x4aaaa4*/
    v63 = v61[1]; /*0x4aaaad*/
    if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v10, (__int16 *)&a7, 1) ) /*0x4aaab2*/
    {
      v69 = v62; /*0x4aaad9*/
      v70 = v63; /*0x4aaade*/
      if ( CellClass::CheckBuildablePair((CellClass *)v10, (__int16 *)&a7, &v69, a6, TileIndex, a8) ) /*0x4aaae3*/
        break; /*0x4aaae3*/
    }
    v57 = *(_DWORD *)(v10 + 260); /*0x4aaaf0*/
    v83 = (int *)((char *)v83 + 1); /*0x4aaaf9*/
    if ( (int)v83 >= v57 ) /*0x4aaafd*/
    {
      this->mapCoords[0] = a5; /*0x4aab0e*/
      return this->mapCoords; /*0x4aab14*/
    }
  }
  this->mapCoords[0] = a7; /*0x4aab22*/
  return this->mapCoords; /*0x4aa7db*/
}



// ==== 0x004AAB30  CellClass::CheckBuildablePair  this=CellClass  sig=csp ====
char __thiscall CellClass::CheckBuildablePair(CellClass *this, __int16 *a2, __int16 *a3, int a4, int a5, int a6)
{
  char result; // al
  bool *v8; // eax
  bool *v9; // eax
  Object *v10; // eax
  Object *v11; // eax
  int v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h]

  if ( a4 == 4 ) /*0x4aab40*/
    return 1; /*0x4aab45*/
  v8 = (bool *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4aab63*/
  result = Cell::IsBuildable(v8, a4, 1, 1, -1, 0, -1, 1); /*0x4aab6a*/
  if ( result ) /*0x4aab71*/
  {
    v9 = (bool *)CellCoord::To_CellObj((CellCoord *)this, a3); /*0x4aab97*/
    result = Cell::IsBuildable(v9, a4, 1, 1, a5, a6, -1, 1); /*0x4aab9e*/
    if ( result ) /*0x4aaba5*/
    {
      v12 = 0; /*0x4aabbb*/
      v13 = 0; /*0x4aabbf*/
      v10 = (Object *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4aabc3*/
      if ( Object::FindClosestObjectCell(v10, &v12, 0, 0) ) /*0x4aabca*/
      {
        return 0; /*0x4aabd6*/
      }
      else
      {
        v12 = 0; /*0x4aabe9*/
        v13 = 0; /*0x4aabed*/
        v11 = (Object *)CellCoord::To_CellObj((CellCoord *)this, a3); /*0x4aabf1*/
        return Object::FindClosestObjectCell(v11, &v12, 0, 0) == 0; /*0x4aac03*/
      }
    }
  }
  return result; /*0x4aab42*/
}



// ==== 0x004AAC10  TacticalClass_DisplayClass::ProcessTacticalMouseInput  this=TacticalClass@DisplayClass  sig=csp ====
int __thiscall DisplayClass::ProcessTacticalMouseInput(TacticalClass_DisplayClass *this, bool a2, int a3, int a4)
{
  HWND v5; // eax
  int *v6; // eax
  bool v8[2]; // [esp+6h] [ebp-2Ah] BYREF
  __int16 v9[2]; // [esp+8h] [ebp-28h] BYREF
  int v10; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-14h] BYREF
  HWND v13; // [esp+20h] [ebp-10h]
  int v14[3]; // [esp+24h] [ebp-Ch] BYREF

  v10 = 0; /*0x4aac1c*/
  v12 = 0; /*0x4aac24*/
  v13 = 0; /*0x4aac2c*/
  if ( (a2 & 0x55) != 0 ) /*0x4aac34*/
  {
    v5 = dword_87F770[1]; /*0x4aac3d*/
    v12 = (int)*dword_87F770; /*0x4aac40*/
    v13 = v5; /*0x4aac44*/
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640); /*0x4aac52*/
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640); /*0x4aac5d*/
    v6 = (int *)(*(int (__thiscall **)(MouseClass *, _DWORD *))(dword_887640->MouseClass_field_0x0 + 52))( /*0x4aac6d*/
                  dword_887640,
                  v11);
    v12 = *v6; /*0x4aac72*/
    v13 = (HWND)v6[1]; /*0x4aac79*/
  }
  TacticalClass::TransformPixel((TacticalClass *)g_TacticalClass_Instance, v11, &v12); /*0x4aac8d*/
  v12 -= DSurface_ViewBounds.field_0; /*0x4aaca3*/
  v13 = (HWND)((char *)v13 - dword_886FA4); /*0x4aacb1*/
  Tactical::MouseOver(&v12, v9, v14, &v10, &v8[1], &a2); /*0x4aacd4*/
  if ( *(_DWORD *)v9 != dword_88095C ) /*0x4aace5*/
    Tactical::MouseMove((Tactical *)&dword_87F7E8, v11, v9); /*0x4aad04*/
  return COMObject::ActivateThunk((GadgetClass *)this, 0, a3, 0); /*0x4aad19*/
}



// ==== 0x004AAD20  DisplayClass::g_var_2eb6a7  this=DisplayClass  sig=csp ====
void __stdcall DisplayClass::g_var_2eb6a7(DisplayClass *this)
{
  ; /*0x4aad20*/
}



// ==== 0x004AAD30  DisplayClass::DispatchMode  this=DisplayClass  sig=csp ====
int __thiscall TacticalClass::DispatchMode(DisplayClass *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int (__thiscall **DisplayClass_field_0x0)(DisplayClass *, _DWORD, int); // edx
  _DWORD *v11; // eax
  int v12; // eax
  MapClass *v13; // [esp+0h] [ebp-8h]

  v3 = *(_DWORD *)&this->__pad_1198[12]; /*0x4aad34*/
  if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x4aad47*/
  {
    *(_DWORD *)&this->__pad_1198[12] = 0; /*0x4aad4b*/
    this->DisplayClass_field_0x11A8 = 0; /*0x4aad55*/
    *(_DWORD *)this->__pad_11AC = -1; /*0x4aad5f*/
    v4 = Mouse::SetBounds((int)this, 0); /*0x4aad69*/
    LOBYTE(v4) = byte_884D44; /*0x4aad6e*/
    return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v4); /*0x4aad7a*/
  }
  else if ( LOBYTE(this->DisplayClass_field_0x11B0) ) /*0x4aad82*/
  {
    v6 = BuildingClass::TogglePower2((BuildingClass *)this, 0); /*0x4aad90*/
    LOBYTE(v6) = byte_884D44; /*0x4aad95*/
    return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v6); /*0x4aada1*/
  }
  else if ( BYTE1(this->DisplayClass_field_0x11B0) ) /*0x4aada9*/
  {
    v7 = BuildingClass::TogglePower((BuildingClass *)this, 0); /*0x4aadb7*/
    LOBYTE(v7) = byte_884D44; /*0x4aadbc*/
    return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v7); /*0x4aadc8*/
  }
  else if ( BYTE2(this->DisplayClass_field_0x11B0) ) /*0x4aadd0*/
  {
    v8 = TacticalClass::SetObserverMode((TacticalClass *)this, 0); /*0x4aadde*/
    LOBYTE(v8) = byte_884D44; /*0x4aade3*/
    return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v8); /*0x4aadef*/
  }
  else
  {
    v9 = -1; /*0x4aadfd*/
    if ( *(_DWORD *)&this->__pad_11B4[4] == -1 ) /*0x4aae02*/
    {
      if ( HIBYTE(this->DisplayClass_field_0x11B0) ) /*0x4aae1e*/
      {
        v11 = TacticalClass::SetDisplayMode((TacticalClass *)this, 0, 0); /*0x4aae2e*/
        LOBYTE(v11) = byte_884D44; /*0x4aae33*/
        return (*((int (__thiscall **)(DisplayClass *, _DWORD, _DWORD *))this->DisplayClass_field_0x0 + 18))( /*0x4aae3f*/
                 this,
                 0,
                 v11);
      }
      else
      {
        if ( this->__pad_11B4[0] ) /*0x4aae47*/
          v12 = MapClass::ToggleZoom((MapClass *)this, 0); /*0x4aae55*/
        else
          v12 = MapClass::UnselectAll_ClearLimboLaunchers(v13); /*0x4aae6e*/
        LOBYTE(v12) = byte_884D44; /*0x4aae5a*/
        return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v12); /*0x4aae66*/
      }
    }
    else
    {
      DisplayClass_field_0x0 = (int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0; /*0x4aae04*/
      *(_DWORD *)&this->__pad_11B4[4] = -1; /*0x4aae06*/
      LOBYTE(v9) = byte_884D44; /*0x4aae0c*/
      return DisplayClass_field_0x0[18](this, 0, v9); /*0x4aae16*/
    }
  }
}



// ==== 0x004AAE90  DisplayClass::HandlePlayerAction  this=DisplayClass  sig=csp ====
int __thiscall TacticalClass::HandlePlayerAction(DisplayClass *this, __int16 *a2, char a3, void *a4, int a5, int a6)
{
  int v6; // ebx
  _BYTE *v8; // eax
  _BYTE *v9; // edi
  _DWORD *v10; // edi
  int v11; // ecx
  int v12; // edi
  int v13; // edx
  char *v14; // edi
  unsigned __int16 v15; // bp
  char v16; // al
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // edi
  int v21; // ebp
  int v22; // eax
  char *v23; // ecx
  int v24; // eax
  int v25; // ebx
  _DWORD *v26; // eax
  int v27; // edx
  int v28; // edi
  int v29; // ebp
  int v30; // eax
  char *v31; // ecx
  int v32; // eax
  int v33; // ebx
  int v34; // edx
  __int16 v35; // ax
  __int16 v36; // ax
  int v37; // eax
  char *v38; // ecx
  int v39; // ebp
  int v40; // eax
  int v41; // edx
  int v42; // edx
  int v43; // edi
  int v44; // eax
  int v45; // edi
  int result; // eax
  int (__thiscall **DisplayClass_field_0x0)(DisplayClass *, int, int); // edi
  int v48; // eax
  _BYTE *v49; // eax
  int (__thiscall **v50)(DisplayClass *, int, int); // edi
  int v51; // eax
  int v52; // [esp-4h] [ebp-24h]
  int v53; // [esp-4h] [ebp-24h]
  TacticalClass *v54; // [esp+10h] [ebp-10h]
  unsigned int v55; // [esp+14h] [ebp-Ch] BYREF
  void *v56; // [esp+18h] [ebp-8h]
  __int16 v57; // [esp+1Ch] [ebp-4h]

  HIWORD(v6) = HIWORD(a2); /*0x4aae94*/
  v56 = 0; /*0x4aaea1*/
  LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4aaeab*/
  if ( a4 ) /*0x4aaeb2*/
  {
    v56 = a4; /*0x4aaeb8*/
    v8 = AbstractClass::IsTechnoType((AbstractClass *)a4); /*0x4aaebc*/
    v9 = v8; /*0x4aaec1*/
    if ( v8 /*0x4aaeea*/
      && ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6 || !*(_BYTE *)(*((_DWORD *)v9 + 328) + 5889))
      && !stru_A8EB00.?[391] )
    {
      v9[1073] = 1; /*0x4aaeec*/
    }
  }
  else if ( *a2 != *(_WORD *)&stru_8A0390.bombVisible || a2[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aafe0*/
  {
    v56 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x4aaff1*/
  }
  if ( HIBYTE(this->DisplayClass_field_0x11B0)
    && *(_DWORD *)&this->__pad_11B4[8]
    && !Waypoint::FindByCell(dword_A83D4C->__pad_0, a2)
    && (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) )
  {
    v10 = *(_DWORD **)&this->__pad_11B4[8]; /*0x4aaf37*/
    v11 = a2[1] << 8; /*0x4aaf48*/
    *v10 = (*a2 << 8) + 128; /*0x4aaf4b*/
    v10[1] = v11 + 128; /*0x4aaf53*/
    v10[2] = 0; /*0x4aaf5b*/
    v12 = (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2) + 80) & 0x100) != 0
        ? dword_8A0730
        : 0;
    *(_DWORD *)(*(_DWORD *)&this->__pad_11B4[8] + 8) = Cell::GetGroundHeight(*(_DWORD **)&this->__pad_11B4[8]) + v12; /*0x4aaf94*/
  }
  if ( Waypoint::FindByCell(dword_A83D4C->__pad_0, a2) ) /*0x4aaf9e*/
  {
    switch ( a5 ) /*0x4aafbb*/
    {
      case 1: /*0x4aafbb*/
      case 2: /*0x4aafbb*/
        v13 = 45; /*0x4aafc2*/
        break; /*0x4aafc7*/
      case 3: /*0x4aafbb*/
      case 9: /*0x4aafbb*/
      case 11: /*0x4aafbb*/
        v13 = 50; /*0x4ab001*/
        break; /*0x4ab006*/
      case 5: /*0x4aafbb*/
      case 6: /*0x4aafbb*/
        v13 = 49; /*0x4aaffa*/
        break; /*0x4aafff*/
      default:
        v13 = a5; /*0x4ab008*/
        break; /*0x4ab00a*/
    }
  }
  else
  {
    v13 = a5; /*0x4ab00c*/
  }
  v14 = &this->__pad_11B4[24]; /*0x4ab016*/
  v54 = (TacticalClass *)v13; /*0x4ab01e*/
  if ( !this->__pad_11B4[24] && !this->__pad_11B4[25] && !this->__pad_11B4[26] ) /*0x4ab02b*/
  {
    v15 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2); /*0x4ab03d*/
    LOBYTE(a5) = (unsigned __int8)(v15 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4ab05c*/
    BYTE1(a5) = (unsigned __int8)(v15 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4ab074*/
    v16 = (unsigned __int8)(v15 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4ab088*/
    *(_WORD *)v14 = a5; /*0x4ab08c*/
    this->__pad_11B4[26] = v16; /*0x4ab08f*/
  }
  v17 = v13 - 42; /*0x4ab092*/
  switch ( v13 ) /*0x4ab0a6*/
  {
    case '*': /*0x4ab0a6*/
    case '+': /*0x4ab0a6*/
    case '/': /*0x4ab0a6*/
      v18 = *(_DWORD *)&dword_A83D4C->__pad_140[204]; /*0x4ab0b2*/
      if ( v18 == -1 ) /*0x4ab0bb*/
        v19 = 0; /*0x4ab0bd*/
      else
        v19 = 8 * (v18 % 12); /*0x4ab0c9*/
      v20 = 0; /*0x4ab0d1*/
      v21 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2; /*0x4ab0d9*/
      do /*0x4ab152*/
      {
        v22 = (v20 + v19) % 256; /*0x4ab0ec*/
        v23 = &byte_885180[3 * v22]; /*0x4ab0ed*/
        v21 += 2; /*0x4ab0f4*/
        LOWORD(a5) = *(_WORD *)v23; /*0x4ab0fa*/
        LOWORD(v6) = (unsigned __int8)(BYTE1(a5) >> g_BitMask_Blue); /*0x4ab114*/
        LOWORD(v22) = (unsigned __int8)((unsigned __int8)v23[2] >> g_BitMask_Red); /*0x4ab128*/
        v24 = v22 << g_BitShift_Blue; /*0x4ab12c*/
        v25 = v24 | (v6 << g_BitMask_Green); /*0x4ab134*/
        LOWORD(v24) = (unsigned __int8)((unsigned __int8)a5 >> g_BitShift_Green_0); /*0x4ab142*/
        v6 = (v24 << g_BitShift_Red) | v25; /*0x4ab148*/
        ++v20; /*0x4ab14a*/
        *(_WORD *)(v21 - 2) = v6; /*0x4ab14b*/
      }
      while ( v20 < 8 ); /*0x4ab152*/
      break; /*0x4ab152*/
    case ',': /*0x4ab0a6*/
    case '-': /*0x4ab0a6*/
    case '.': /*0x4ab0a6*/
    case '1': /*0x4ab0a6*/
    case '2': /*0x4ab0a6*/
    case '3': /*0x4ab0a6*/
      v55 = -1; /*0x4ab164*/
      v26 = Waypoint::FindByCell(dword_A83D4C->__pad_0, a2); /*0x4ab16c*/
      WaypointClass::FindOrCreate(dword_A83D4C->__pad_0, (int)v26, &v55, &a5); /*0x4ab182*/
      if ( !HIBYTE(this->DisplayClass_field_0x11B0) ) /*0x4ab187*/
        *(_DWORD *)&dword_A83D4C->__pad_140[204] = v55; /*0x4ab19b*/
      if ( v55 == -1 ) /*0x4ab1a8*/
        v27 = 0; /*0x4ab1aa*/
      else
        v27 = 8 * ((int)v55 % 12); /*0x4ab1b6*/
      v28 = 0; /*0x4ab1be*/
      v29 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2; /*0x4ab1c6*/
      do /*0x4ab23f*/
      {
        v30 = (v28 + v27) % 256; /*0x4ab1d9*/
        v31 = &byte_885180[3 * v30]; /*0x4ab1da*/
        v29 += 2; /*0x4ab1e1*/
        v57 = *(_WORD *)v31; /*0x4ab1e7*/
        LOWORD(v6) = (unsigned __int8)(HIBYTE(v57) >> g_BitMask_Blue); /*0x4ab201*/
        LOWORD(v30) = (unsigned __int8)((unsigned __int8)v31[2] >> g_BitMask_Red); /*0x4ab215*/
        v32 = v30 << g_BitShift_Blue; /*0x4ab219*/
        v33 = v32 | (v6 << g_BitMask_Green); /*0x4ab221*/
        LOWORD(v32) = (unsigned __int8)((unsigned __int8)v57 >> g_BitShift_Green_0); /*0x4ab22f*/
        v6 = (v32 << g_BitShift_Red) | v33; /*0x4ab235*/
        ++v28; /*0x4ab237*/
        *(_WORD *)(v29 - 2) = v6; /*0x4ab238*/
      }
      while ( v28 < 8 ); /*0x4ab23f*/
      break; /*0x4ab23f*/
    default:
      LOWORD(v17) = (unsigned __int8)((unsigned __int8)this->__pad_11B4[25] >> g_BitMask_Blue); /*0x4ab261*/
      LOWORD(v13) = (unsigned __int8)((unsigned __int8)this->__pad_11B4[26] >> g_BitMask_Red); /*0x4ab279*/
      v34 = v13 << g_BitShift_Blue; /*0x4ab27d*/
      v35 = v34 | (v17 << g_BitMask_Green); /*0x4ab285*/
      LOBYTE(v34) = (unsigned __int8)*v14 >> g_BitShift_Green_0; /*0x4ab289*/
      v43 = 0; /*0x4ab291*/
      LOWORD(v34) = (unsigned __int8)v34; /*0x4ab293*/
      v36 = (v34 << g_BitShift_Red) | v35; /*0x4ab29f*/
      v42 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372); /*0x4ab2a1*/
      *(_WORD *)(v42 + 2) = v36; /*0x4ab2a7*/
      v39 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2; /*0x4ab2b6*/
      do /*0x4ab32e*/
      {
        v37 = v43 % 256; /*0x4ab2c8*/
        v38 = &byte_885180[3 * (v43 % 256)]; /*0x4ab2c9*/
        v39 += 2; /*0x4ab2d0*/
        LOWORD(v42) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v38) >> g_BitMask_Blue); /*0x4ab2f0*/
        LOWORD(v37) = (unsigned __int8)((unsigned __int8)v38[2] >> g_BitMask_Red); /*0x4ab304*/
        v40 = v37 << g_BitShift_Blue; /*0x4ab308*/
        v41 = v40 | (v42 << g_BitMask_Green); /*0x4ab310*/
        LOWORD(v40) = (unsigned __int8)((unsigned __int8)*(_WORD *)v38 >> g_BitShift_Green_0); /*0x4ab31e*/
        v42 = (v40 << g_BitShift_Red) | v41; /*0x4ab324*/
        ++v43; /*0x4ab326*/
        *(_WORD *)(v39 - 2) = v42; /*0x4ab327*/
      }
      while ( v43 < 8 ); /*0x4ab32e*/
      if ( !HIBYTE(this->DisplayClass_field_0x11B0) ) /*0x4ab330*/
        *(_DWORD *)&dword_A83D4C->__pad_140[204] = -1; /*0x4ab340*/
      break; /*0x4ab340*/
  }
  v44 = TacticalClass::MapSpecialDrawMode(v54, (int)a4); /*0x4ab355*/
  if ( a3 ) /*0x4ab360*/
  {
    v45 = a6; /*0x4ab36f*/
    switch ( v44 ) /*0x4ab37b*/
    {
      case 1: /*0x4ab37b*/
      case 5: /*0x4ab37b*/
        goto LABEL_55;
      case 2: /*0x4ab37b*/
        if ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x4ab3f3*/
        {
          v49 = **(_BYTE ***)&stru_A8EB00.?[216]; /*0x4ab3ff*/
          if ( **(_DWORD **)&stru_A8EB00.?[216] ) /*0x4ab3ff*/
          {
            if ( (v49[20] & 1) != 0 && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v49 + 132))(v49) + 3213) ) /*0x4ab423*/
              goto LABEL_55; /*0x4ab42b*/
          }
        }
        goto LABEL_73; /*0x4ab42b*/
      case 10: /*0x4ab37b*/
      case 15: /*0x4ab37b*/
      case 32: /*0x4ab37b*/
        goto LABEL_48;
      case 12: /*0x4ab37b*/
      case 13: /*0x4ab37b*/
      case 14: /*0x4ab37b*/
        goto LABEL_70;
      case 17: /*0x4ab37b*/
      case 27: /*0x4ab37b*/
      case 33: /*0x4ab37b*/
      case 34: /*0x4ab37b*/
      case 42: /*0x4ab37b*/
      case 43: /*0x4ab37b*/
      case 44: /*0x4ab37b*/
      case 45: /*0x4ab37b*/
      case 46: /*0x4ab37b*/
      case 47: /*0x4ab37b*/
      case 49: /*0x4ab37b*/
      case 51: /*0x4ab37b*/
        goto LABEL_57;
      case 20: /*0x4ab37b*/
        goto LABEL_79;
      case 26: /*0x4ab37b*/
        goto LABEL_47;
      case 30: /*0x4ab37b*/
        goto LABEL_58;
      case 31: /*0x4ab37b*/
      case 36: /*0x4ab37b*/
        goto LABEL_46;
      case 37: /*0x4ab37b*/
        goto LABEL_80;
      case 38: /*0x4ab37b*/
        goto LABEL_83;
      case 39: /*0x4ab37b*/
      case 40: /*0x4ab37b*/
        goto LABEL_84;
      case 41: /*0x4ab37b*/
      case 65: /*0x4ab37b*/
        goto LABEL_85;
      case 50: /*0x4ab37b*/
        (*((void (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 60, a6); /*0x4ab3d5*/
        break; /*0x4ab3d5*/
      case 57: /*0x4ab37b*/
        goto LABEL_59;
      case 60: /*0x4ab37b*/
        return (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 78, v45);
      case 61: /*0x4ab37b*/
        goto LABEL_61;
      case 62: /*0x4ab37b*/
      case 63: /*0x4ab37b*/
        goto LABEL_91;
      case 66: /*0x4ab37b*/
        goto LABEL_86;
      case 67: /*0x4ab37b*/
        goto LABEL_87;
      case 68: /*0x4ab37b*/
        goto LABEL_88;
      case 69: /*0x4ab37b*/
        goto LABEL_81;
      case 70: /*0x4ab37b*/
        goto LABEL_82;
      case 72: /*0x4ab37b*/
        goto LABEL_89;
      default:
        goto LABEL_92;
    }
    return (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 78, v45); /*0x4ab3d8*/
  }
  else
  {
    result = v44 - 1; /*0x4ab449*/
    switch ( result ) /*0x4ab453*/
    {
      case 0: /*0x4ab453*/
LABEL_55:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 18, a6); /*0x4ab431*/
        break; /*0x4ab446*/
      case 1: /*0x4ab453*/
      case 53: /*0x4ab453*/
LABEL_73:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 19, a6); /*0x4ab5b5*/
        break; /*0x4ab5ca*/
      case 2: /*0x4ab453*/
      case 8: /*0x4ab453*/
      case 10: /*0x4ab453*/
      case 34: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 25, a6); /*0x4ab560*/
        break; /*0x4ab56a*/
      case 3: /*0x4ab453*/
      case 51: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 27, a6); /*0x4ab590*/
        break; /*0x4ab59a*/
      case 4: /*0x4ab453*/
        if ( !v56 /*0x4ab51b*/
          || *(_DWORD *)&stru_A8EB00.?[228] != 1
          || !**(_DWORD **)&stru_A8EB00.?[216]
          || (*(_BYTE *)(**(_DWORD **)&stru_A8EB00.?[216] + 20) & 1) == 0
          || !(*(unsigned __int8 (__thiscall **)(_DWORD, void *))(***(_DWORD ***)&stru_A8EB00.?[216] + 940))(
                **(_DWORD **)&stru_A8EB00.?[216],
                v56) )
        {
          goto LABEL_68; /*0x4ab523*/
        }
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 20, a6); /*0x4ab530*/
        break; /*0x4ab53a*/
      case 5: /*0x4ab453*/
LABEL_68:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 21, a6); /*0x4ab53d*/
        break; /*0x4ab552*/
      case 6: /*0x4ab453*/
      case 7: /*0x4ab453*/
      case 60: /*0x4ab453*/
LABEL_61:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 17, a6); /*0x4ab4ba*/
        break; /*0x4ab4cf*/
      case 9: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 34, a6); /*0x4ab608*/
        break; /*0x4ab612*/
      case 11: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 30, a6); /*0x4ab638*/
        break; /*0x4ab642*/
      case 12: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 31, a6); /*0x4ab620*/
        break; /*0x4ab62a*/
      case 13: /*0x4ab453*/
LABEL_70:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 32, a6); /*0x4ab56d*/
        break; /*0x4ab582*/
      case 14: /*0x4ab453*/
      case 31: /*0x4ab453*/
LABEL_48:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 35, a6); /*0x4ab3b6*/
        break; /*0x4ab3cb*/
      case 15: /*0x4ab453*/
      case 54: /*0x4ab453*/
      case 55: /*0x4ab453*/
      case 63: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 52, a6); /*0x4ab5d8*/
        break; /*0x4ab5e2*/
      case 16: /*0x4ab453*/
      case 26: /*0x4ab453*/
      case 32: /*0x4ab453*/
      case 33: /*0x4ab453*/
      case 41: /*0x4ab453*/
      case 42: /*0x4ab453*/
      case 43: /*0x4ab453*/
      case 44: /*0x4ab453*/
      case 45: /*0x4ab453*/
      case 46: /*0x4ab453*/
      case 48: /*0x4ab453*/
      case 49: /*0x4ab453*/
      case 50: /*0x4ab453*/
LABEL_57:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 60, a6); /*0x4ab45a*/
        break; /*0x4ab46f*/
      case 19: /*0x4ab453*/
LABEL_79:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 53, a6); /*0x4ab645*/
        break; /*0x4ab65a*/
      case 25: /*0x4ab453*/
LABEL_47:
        DisplayClass_field_0x0 = (int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0; /*0x4ab39a*/
        v52 = a6; /*0x4ab3a0*/
        v48 = Map_Handle_731CC0(); /*0x4ab3a1*/
        result = DisplayClass_field_0x0[18](this, v48, v52); /*0x4ab3a9*/
        break; /*0x4ab3b3*/
      case 27: /*0x4ab453*/
        return result;
      case 28: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 33, a6); /*0x4ab4ad*/
        break; /*0x4ab4b7*/
      case 29: /*0x4ab453*/
LABEL_58:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 28, a6); /*0x4ab472*/
        break; /*0x4ab487*/
      case 30: /*0x4ab453*/
LABEL_46:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 26, a6); /*0x4ab382*/
        break; /*0x4ab397*/
      case 36: /*0x4ab453*/
LABEL_80:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 57, a6); /*0x4ab65d*/
        break; /*0x4ab672*/
      case 37: /*0x4ab453*/
LABEL_83:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 50, a6); /*0x4ab6a5*/
        break; /*0x4ab6ba*/
      case 38: /*0x4ab453*/
      case 39: /*0x4ab453*/
LABEL_84:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 58, a6); /*0x4ab6bd*/
        break; /*0x4ab6d2*/
      case 40: /*0x4ab453*/
      case 64: /*0x4ab453*/
LABEL_85:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 47, a6); /*0x4ab6d5*/
        break; /*0x4ab6ea*/
      case 52: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 38, a6); /*0x4ab5a8*/
        break; /*0x4ab5b2*/
      case 56: /*0x4ab453*/
LABEL_59:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 59, a6); /*0x4ab48a*/
        break; /*0x4ab49f*/
      case 59: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 78, a6); /*0x4ab758*/
        break; /*0x4ab762*/
      case 61: /*0x4ab453*/
      case 62: /*0x4ab453*/
LABEL_91:
        v50 = (int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0; /*0x4ab765*/
        v53 = a6; /*0x4ab76b*/
        v51 = Map_Handle_731CB0(); /*0x4ab76c*/
        result = v50[18](this, v51, v53); /*0x4ab774*/
        break; /*0x4ab77e*/
      case 65: /*0x4ab453*/
LABEL_86:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 83, a6); /*0x4ab6ed*/
        break; /*0x4ab702*/
      case 66: /*0x4ab453*/
LABEL_87:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 85, a6); /*0x4ab705*/
        break; /*0x4ab71a*/
      case 67: /*0x4ab453*/
LABEL_88:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 81, a6); /*0x4ab71d*/
        break; /*0x4ab732*/
      case 68: /*0x4ab453*/
LABEL_81:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 79, a6); /*0x4ab675*/
        break; /*0x4ab68a*/
      case 69: /*0x4ab453*/
LABEL_82:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 80, a6); /*0x4ab68d*/
        break; /*0x4ab6a2*/
      case 70: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 82, a6); /*0x4ab5f0*/
        break; /*0x4ab5fa*/
      case 71: /*0x4ab453*/
LABEL_89:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 84, a6); /*0x4ab735*/
        break; /*0x4ab74a*/
      default:
LABEL_92:
        result = (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, a6); /*0x4ab781*/
        break; /*0x4ab796*/
    }
  }
  return result; /*0x4ab390*/
}



// ==== 0x004AB9B0  DisplayClass::ExecuteCommand  this=DisplayClass  sig=csp ====
int __thiscall PlayerClass::ExecuteCommand(DisplayClass *this, int a2, __int16 *a3, void *a4, int a5, int a6)
{
  House **v6; // esi
  __int16 v8; // cx
  int v9; // ecx
  _BYTE *v10; // eax
  char v11; // cl
  __int16 v12; // dx
  int v13; // esi
  void *DisplayClass_field_0x11A8; // ecx
  int v15; // eax
  char *v16; // eax
  int v17; // esi
  Selection *v18; // eax
  IUnknown *v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  const void *v24; // eax
  int result; // eax
  int v26; // ebx
  void (__thiscall **DisplayClass_field_0x0)(DisplayClass *, _DWORD, int); // edx
  int v28; // ebx
  House *v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char *v33; // eax
  char BuildingINIEntry; // bl
  char BuildingINI; // al
  _BYTE *WaypointCoords; // eax
  int v37; // edx
  char v38; // al
  _BYTE *v39; // eax
  int v40; // edx
  _BYTE *v41; // eax
  int v42; // eax
  _BYTE *v43; // eax
  char *v44; // eax
  int FirstOfAction; // eax
  char *v46; // eax
  void *Object_field_0x30; // [esp-Ch] [ebp-9Ch]
  int v48; // [esp-8h] [ebp-98h]
  unsigned __int8 v49; // [esp-8h] [ebp-98h]
  int v50; // [esp-4h] [ebp-94h]
  int v51; // [esp-4h] [ebp-94h]
  char v52; // [esp+0h] [ebp-90h]
  MapClass *v53; // [esp+4h] [ebp-8Ch]
  ObjectClass *v54; // [esp+4h] [ebp-8Ch]
  int v55; // [esp+14h] [ebp-7Ch] BYREF
  __int16 v56[4]; // [esp+18h] [ebp-78h] BYREF
  char v57[112]; // [esp+20h] [ebp-70h] BYREF

  v6 = (House **)a4; /*0x4ab9b6*/
  if ( a4 /*0x4ab9ed*/
    && stru_A8EB00.?[376]
    && byte_A8E9A0
    && !stru_A8EB00.?[391]
    && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)a4 + 104))(a4, 0, 0) == 5 )
  {
    v6 = 0; /*0x4ab9ef*/
  }
  if ( !*(_DWORD *)&this->__pad_1198[12] ) /*0x4ab9f9*/
  {
    v26 = 0; /*0x4abca1*/
    if ( this->__pad_11B4[27] ) /*0x4abc94*/
    {
      g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4abcaf*/
      if ( !(unsigned __int8)Mouse::IsButtonDown(0x10u) ) /*0x4abcbc*/
      {
        if ( PlayerClass::HasOccupiedCell((PlayerClass *)g_TacticalClass_Instance) ) /*0x4abccb*/
          MapClass::UnselectAll_ClearLimboLaunchers(v53); /*0x4abcd4*/
        else
          v26 = 1; /*0x4abcdb*/
      }
      PlayerClass::ProcessOccupancyUpdate( /*0x4abceb*/
        (PlayerClass *)g_TacticalClass_Instance,
        (void (__thiscall *)(_BYTE *))PlayerClass::CheckHumanPlayer);
      FrameTimer::Init25(); /*0x4abcf0*/
      DisplayClass_field_0x0 = (void (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0; /*0x4abcf5*/
      this->__pad_11B4[27] = 0; /*0x4abcfd*/
      DisplayClass_field_0x0[18](this, 0, a6); /*0x4abd04*/
      LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4abd07*/
      stru_A8EB00.?[441] = 1; /*0x4abd0e*/
      if ( !v26 ) /*0x4abd17*/
        goto LABEL_121; /*0x4abd17*/
    }
    v28 = a5; /*0x4abd1d*/
    if ( a5 == 8 ) /*0x4abd27*/
    {
      if ( v6 ) /*0x4abd2f*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x4abd3c*/
        {
          v29 = (House *)(*(int (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 60))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x4abd4b*/
          if ( (unsigned __int8)House::IsHumanPlayer(v29) ) /*0x4abd50*/
          {
            if ( *((_BYTE *)v6 + 131) ) /*0x4abd59*/
            {
              if ( Selection::GetFlag() ) /*0x4abd63*/
              {
                v30 = (*(int (__thiscall **)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abd70*/
                PlayerClass::UpdateAIUnits((PlayerClass *)(v30 + 36)); /*0x4abd7b*/
              }
              else
              {
                (*(void (__thiscall **)(House **))&(*v6)->__pad_7C[212])(v6); /*0x4abd89*/
              }
            }
            else if ( Selection::GetFlag() ) /*0x4abd94*/
            {
              v31 = (*(int (__thiscall **)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abda1*/
              MoveFeedback::ProcessCommand((MoveFeedback *)(v31 + 36)); /*0x4abdac*/
            }
            else
            {
              (*(void (__thiscall **)(House **))&(*v6)->__pad_7C[208])(v6); /*0x4abdba*/
            }
            goto LABEL_92; /*0x4abd80*/
          }
        }
      }
      v28 = 7; /*0x4abdc5*/
      a5 = 7; /*0x4abdca*/
    }
    else if ( a5 != 7 ) /*0x4abdd6*/
    {
      if ( a5 ) /*0x4abde3*/
        goto LABEL_64; /*0x4abde3*/
      if ( !v6 || !(*(unsigned __int8 (__thiscall **)(House **))&(*v6)->__pad_7C[188])(v6) || *((_BYTE *)v6 + 131) ) /*0x4abe03*/
        goto LABEL_120; /*0x4abe0b*/
      v28 = 0; /*0x4abe11*/
LABEL_56:
      if ( (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 /*0x4abe40*/
        || (unsigned __int8)House::IsHumanPlayer(v6[135])
        || *((_BYTE *)v6 + 1773) != 15
        || (*(unsigned __int8 (__thiscall **)(House **))&(*v6)->__pad_2B0[120])(v6) )
      {
        MapClass::UnselectAll_ClearLimboLaunchers(v53); /*0x4abe4a*/
        if ( Selection::GetFlag() ) /*0x4abe4f*/
        {
          v32 = (*(int (__thiscall **)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abe5c*/
          MoveFeedback::ProcessCommand((MoveFeedback *)(v32 + 36)); /*0x4abe67*/
        }
        else
        {
          (*(void (__thiscall **)(House **))&(*v6)->__pad_7C[208])(v6); /*0x4abe72*/
        }
        (*((void (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, a6); /*0x4abe80*/
        FrameTimer::Init25(); /*0x4abe83*/
      }
LABEL_64:
      if ( v28 == 61 ) /*0x4abe8b*/
      {
        v33 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x4abe9a*/
        PlayerClass::FindNearestWaypoint( /*0x4abed7*/
          (PlayerClass *)&g_VisibilitySystem,
          (*a3 << 8) + 128,
          (a3[1] << 8) + 128,
          dword_8A0740 * v33[283]);
      }
      else if ( v28 ) /*0x4abee3*/
      {
        if ( a5 != 7 ) /*0x4abef3*/
        {
          if ( a5 == 10 /*0x4abf8e*/
            || a5 == 12
            || a5 == 13
            || a5 == 14
            || a5 == 15
            || a5 == 33
            || a5 == 34
            || a5 == 20
            || a5 == 37
            || a5 == 69
            || a5 == 70
            || a5 == 38
            || a5 == 39
            || a5 == 40
            || a5 == 41
            || a5 == 65
            || a5 == 66
            || a5 == 67
            || a5 == 68
            || a5 == 72
            || a5 == 58
            || a5 == 60
            || (BuildingINIEntry = ReadBuildingINIEntry((ObjectClass *)v53),
                BuildingINI = ReadBuildingINI(v54),
                BuildingINIEntry)
            && BuildingINI )
          {
LABEL_92:
            DispatchSelectionWaypointMove((int)v6, *(_DWORD *)a3, a5, (int)v53); /*0x4abf94*/
            FrameTimer::Init25(); /*0x4abfae*/
            if ( a5 == 33 ) /*0x4abfbc*/
            {
              if ( (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 ) /*0x4abfc8*/
                goto LABEL_117; /*0x4abfc8*/
              if ( *((_BYTE *)v6 + 1632) ) /*0x4abfce*/
              {
                WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4abfdd*/
                v37 = *(_DWORD *)WaypointCoords; /*0x4abfe2*/
                v38 = WaypointCoords[4]; /*0x4abfe9*/
                v49 = 2; /*0x4abfec*/
              }
              else
              {
                v39 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac00a*/
                v37 = *(_DWORD *)v39; /*0x4ac00f*/
                v38 = v39[4]; /*0x4ac016*/
                v49 = 1; /*0x4ac019*/
              }
              v51 = v37; /*0x4abfee*/
              v52 = v38; /*0x4abff0*/
              Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ac000*/
            }
            else
            {
              if ( a5 == 60 ) /*0x4ac03d*/
              {
                if ( !dword_A8B538 ) /*0x4ac046*/
                {
                  v40 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3) + 283); /*0x4ac05a*/
                  PlacePlayerBeacon( /*0x4ac09d*/
                    &g_VisibilitySystem,
                    (int)dword_A83D4C->Object_field_0x30,
                    (*a3 << 8) + 128,
                    (a3[1] << 8) + 128,
                    dword_8A0740 * v40,
                    -1);
                }
                MapClass::ToggleZoom((MapClass *)&stru_87F5F0.__pad_58[416], 0); /*0x4ac0a9*/
                (*((void (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, a6); /*0x4ac0b6*/
                goto LABEL_117; /*0x4ac0b9*/
              }
              if ( a5 == 10 ) /*0x4ac0c1*/
              {
                if ( (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 ) /*0x4ac0cd*/
                  goto LABEL_117; /*0x4ac0cd*/
                v41 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac0d8*/
                v49 = 21; /*0x4ac0e7*/
                v51 = *(_DWORD *)v41; /*0x4ac0e9*/
                v52 = v41[4]; /*0x4ac0eb*/
                Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ac0fb*/
              }
              else
              {
                if ( a5 == 13 ) /*0x4ac104*/
                {
                  if ( !v6 ) /*0x4ac108*/
                    goto LABEL_117; /*0x4ac108*/
                  v42 = (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6); /*0x4ac112*/
                  if ( v42 <= 0 || v42 > 2 ) /*0x4ac120*/
                    goto LABEL_117; /*0x4ac120*/
                }
                else
                {
                  if ( a5 != 12 ) /*0x4ac154*/
                    goto LABEL_117; /*0x4ac154*/
                  if ( !v6 ) /*0x4ac15c*/
                  {
                    v44 = PlayerClass::SetTargetOrClear(v57, (int)dword_A83D4C->Object_field_0x30, 23, a3); /*0x4ac1b2*/
                    if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4ac1c1*/
                    {
LABEL_116:
                      qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v44, 0x6Fu); /*0x4ac1c3*/
                      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4ac1ea*/
                      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4ac201*/
                      ++stru_A80220.lineTrailer; /*0x4ac207*/
                    }
LABEL_117:
                    FirstOfAction = SuperWeaponTypeClass::FindFirstOfAction((SuperWeaponTypeClass *)a5); /*0x4ac20c*/
                    if ( FirstOfAction ) /*0x4ac21a*/
                    {
                      v46 = SidebarClass::SetFlashEntry( /*0x4ac23a*/
                              v57,
                              (int)dword_A83D4C->Object_field_0x30,
                              18,
                              *(_DWORD *)(FirstOfAction + 152),
                              a3);
                      if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4ac249*/
                      {
                        qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v46, 0x6Fu); /*0x4ac265*/
                        dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4ac272*/
                        dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4ac289*/
                        ++stru_A80220.lineTrailer; /*0x4ac28f*/
                      }
                    }
                    goto LABEL_120; /*0x4ac28f*/
                  }
                }
                v43 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac163*/
                v49 = 22; /*0x4ac172*/
                v51 = *(_DWORD *)v43; /*0x4ac174*/
                v52 = v43[4]; /*0x4ac176*/
                Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ac186*/
              }
            }
            v44 = EventClass::Add(v57, (int)Object_field_0x30, v49, v51, v52); /*0x4ac187*/
            if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4ac196*/
              goto LABEL_116; /*0x4ac196*/
            goto LABEL_117; /*0x4ac196*/
          }
        }
      }
LABEL_120:
      LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4ac294*/
LABEL_121:
      TechnoClass::GetField(); /*0x4ac29b*/
      return result; /*0x4ac29b*/
    }
    if ( !v6 ) /*0x4abdda*/
      goto LABEL_120; /*0x4abdda*/
    goto LABEL_56; /*0x4abdda*/
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->DisplayClass_field_0x11A8 + 44))(this->DisplayClass_field_0x11A8) == 7 ) /*0x4aba14*/
  {
    v8 = a3[1] + *(_WORD *)&this->__pad_41E[3420]; /*0x4aba27*/
    LOWORD(v55) = *(_WORD *)&this->__pad_41E[3418] + *a3; /*0x4aba2b*/
    HIWORD(v55) = v8; /*0x4aba30*/
    v9 = *(_DWORD *)&this->__pad_41E[3422]; /*0x4aba39*/
    *(_DWORD *)v56 = v55; /*0x4aba43*/
    this->__pad_41E[3426] = GetBuildingPlacement( /*0x4aba5e*/
                              (_DWORD *)this->DisplayClass_field_0x11A8,
                              *(_DWORD *)this->__pad_11AC,
                              v9,
                              v56);
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->DisplayClass_field_0x11A8 + 44))(this->DisplayClass_field_0x11A8) == 7 /*0x4aba94*/
    && v6
    && (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6) == 6
    && (unsigned __int8)BuildingClass::CanAcceptType(
                          (bool *)v6,
                          (int)this->DisplayClass_field_0x11A8,
                          (int)dword_A83D4C) )
  {
    this->__pad_41E[3426] = 1; /*0x4aba9d*/
  }
  if ( !this->__pad_41E[3426] || !this->__pad_41E[3427] ) /*0x4abab2*/
  {
    VoxClass::FindAndPlay(&g_Str_EVA_CannotDeployHere, -1); /*0x4abc80*/
    TechnoClass::GetField(); /*0x4abc85*/
    return result; /*0x4abc91*/
  }
  v10 = __RTDynamicCast( /*0x4abad5*/
          (void **)this->DisplayClass_field_0x11A8,
          0,
          &ObjectTypeClass `RTTI Type Descriptor',
          &TechnoTypeClass `RTTI Type Descriptor',
          0);
  if ( !v10 || (v11 = v10[3278], LOBYTE(v56[0]) = 1, !v11) ) /*0x4abaee*/
    LOBYTE(v56[0]) = 0; /*0x4abaf0*/
  v12 = a3[1] + *(_WORD *)&this->__pad_41E[3420]; /*0x4abb06*/
  v13 = *(_DWORD *)&this->__pad_1198[12]; /*0x4abb0a*/
  LOWORD(v55) = *(_WORD *)&this->__pad_41E[3418] + *a3; /*0x4abb10*/
  DisplayClass_field_0x11A8 = this->DisplayClass_field_0x11A8; /*0x4abb15*/
  HIWORD(v55) = v12; /*0x4abb1b*/
  v50 = LOBYTE(v56[0]); /*0x4abb38*/
  v48 = (*(int (__thiscall **)(void *))(*(_DWORD *)DisplayClass_field_0x11A8 + 64))(DisplayClass_field_0x11A8); /*0x4abb3c*/
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x4abb41*/
  v16 = EventClass::Init(v57, (int)dword_A83D4C->Object_field_0x30, 11, v15, v48, v50, &v55); /*0x4abb55*/
  if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4abb64*/
  {
    qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v16, 0x6Fu); /*0x4abb80*/
    dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4abb91*/
    dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4abba8*/
    ++stru_A80220.lineTrailer; /*0x4abbae*/
  }
  v17 = *(_DWORD *)&this->__pad_1198[12]; /*0x4abbb3*/
  if ( v17 )
    v18 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v17 + 44))(*(_DWORD *)&this->__pad_1198[12]) == 6
        ? (Selection *)v17
        : 0;
  else
    v18 = 0; /*0x4abbbf*/
  Selection::ClearGlobals(v18); /*0x4abbd7*/
  if ( stru_A8EB00.?[391] ) /*0x4abbe3*/
    goto LABEL_121; /*0x4abbe3*/
  v19 = (IUnknown *)this->DisplayClass_field_0x11A8; /*0x4abbe9*/
  v20 = *(_DWORD *)&this->__pad_1198[12]; /*0x4abbef*/
  this->DisplayClass_field_0x1194 = v19; /*0x4abbf5*/
  *(_DWORD *)&this->__pad_41E[3442] = v20; /*0x4abbfb*/
  v21 = *(_DWORD *)&this->__pad_41E[3418]; /*0x4abc03*/
  *(_DWORD *)&this->__pad_41E[3428] = *(_DWORD *)a3; /*0x4abc09*/
  v22 = *(_DWORD *)&this->__pad_41E[3422]; /*0x4abc0f*/
  *(_DWORD *)&this->__pad_41E[3432] = v21; /*0x4abc15*/
  v23 = *(_DWORD *)this->__pad_11AC; /*0x4abc1b*/
  *(_DWORD *)&this->__pad_41E[3438] = v22; /*0x4abc23*/
  *(_DWORD *)this->__pad_1198 = v23; /*0x4abc29*/
  if ( v19 ) /*0x4abc2f*/
  {
    v24 = (const void *)(*(int (__thiscall **)(IUnknown *, int))(v19->field_0 + 144))(v19, 1); /*0x4abc35*/
    MIXClass::CopyHeader((int *)&stru_87F5F0.__pad_58[416], v24); /*0x4abc41*/
  }
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x4abc4c*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x4abc51*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x4abc57*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1426] = -1; /*0x4abc5d*/
  TechnoClass::GetField(); /*0x4abc67*/
  return result; /*0x4abc6c*/
}



// ==== 0x004AC2B0  PlayerClass::CheckHumanPlayer  this=PlayerClass  sig=csp ====
char __thiscall PlayerClass::CheckHumanPlayer(PlayerClass *this)
{
  House *v2; // eax

  v2 = (House *)(*(int (__thiscall **)(PlayerClass *))(*(_DWORD *)this->__pad_0 + 60))(this); /*0x4ac2b5*/
  if ( v2 ) /*0x4ac2ba*/
  {
    LOBYTE(v2) = House::IsHumanPlayer(v2); /*0x4ac2be*/
    if ( (_BYTE)v2 ) /*0x4ac2c5*/
    {
      LOBYTE(v2) = (*(int (__thiscall **)(PlayerClass *))(*(_DWORD *)this->__pad_0 + 312))(this); /*0x4ac2cb*/
      if ( (_BYTE)v2 ) /*0x4ac2d3*/
      {
        LOBYTE(v2) = (*(int (__thiscall **)(PlayerClass *))(*(_DWORD *)this->__pad_0 + 316))(this); /*0x4ac2d9*/
        if ( (_BYTE)v2 ) /*0x4ac2e1*/
        {
          LOBYTE(v2) = *((_BYTE *)this + 129); /*0x4ac2e3*/
          if ( !(_BYTE)v2 ) /*0x4ac2eb*/
          {
            LOBYTE(v2) = (*(int (__thiscall **)(PlayerClass *))(*(_DWORD *)this->__pad_0 + 332))(this); /*0x4ac2f1*/
            if ( (_BYTE)v2 ) /*0x4ac2f9*/
              g_MoveFeedback = 0; /*0x4ac2fb*/
          }
        }
      }
    }
  }
  return (char)v2; /*0x4ac302*/
}



// ==== 0x004AC310  DisplayClass::InitViewBounds  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::InitViewBounds(DisplayClass *this, _DWORD *a2)
{
  void *DisplayClass_field_0x11A8; // eax

  LOBYTE(DisplayClass_field_0x11A8) = this->DisplayClass_field_0x11B0; /*0x4ac310*/
  if ( !(_BYTE)DisplayClass_field_0x11A8 ) /*0x4ac318*/
  {
    LOBYTE(DisplayClass_field_0x11A8) = BYTE2(this->DisplayClass_field_0x11B0); /*0x4ac31a*/
    if ( !(_BYTE)DisplayClass_field_0x11A8 ) /*0x4ac322*/
    {
      LOBYTE(DisplayClass_field_0x11A8) = BYTE1(this->DisplayClass_field_0x11B0); /*0x4ac324*/
      if ( !(_BYTE)DisplayClass_field_0x11A8 && *(_DWORD *)&this->__pad_11B4[4] == -1 ) /*0x4ac335*/
      {
        DisplayClass_field_0x11A8 = this->DisplayClass_field_0x11A8; /*0x4ac337*/
        if ( !DisplayClass_field_0x11A8 ) /*0x4ac33f*/
        {
          LOBYTE(this->DisplayClass_field_0x11D0) = 1; /*0x4ac345*/
          this->DisplayClass_field_0x11D4 = (void *)*a2; /*0x4ac34e*/
          this->DisplayClass_field_0x11D8 = (void *)a2[1]; /*0x4ac357*/
          this->DisplayClass_field_0x11DC = (void *)*a2; /*0x4ac35f*/
          DisplayClass_field_0x11A8 = (void *)a2[1]; /*0x4ac365*/
          this->DisplayClass_field_0x11E0 = DisplayClass_field_0x11A8; /*0x4ac368*/
        }
      }
    }
  }
  return (char)DisplayClass_field_0x11A8; /*0x4ac36e*/
}



// ==== 0x004AC380  DisplayClass::ProcessScroll  this=DisplayClass  sig=csp ====
char __thiscall TacticalClass::ProcessScroll(DisplayClass *this, int *a2)
{
  double v2; // st7
  int v4; // eax
  void *v5; // ecx
  void *DisplayClass_field_0x11DC; // edx
  int v7; // edx
  char DisplayClass_field_0x11B0_high; // cl
  double v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+10h] [ebp-10h] BYREF
  void *v12; // [esp+14h] [ebp-Ch]

  if ( !this->__pad_11B4[27] || HIBYTE(this->DisplayClass_field_0x11B0) || this->__pad_11B4[0] ) /*0x4ac3a3*/
  {
    LOBYTE(v4) = this->DisplayClass_field_0x11D0; /*0x4ac436*/
    if ( (_BYTE)v4 ) /*0x4ac43e*/
    {
      v7 = a2[1]; /*0x4ac45b*/
      v11 = *a2 - (unsigned int)this->DisplayClass_field_0x11D4; /*0x4ac45e*/
      v12 = (void *)(v7 - (unsigned int)this->DisplayClass_field_0x11D8); /*0x4ac467*/
      __asm /*0x4ac46b*/
      {
        fild [esp+20h+var_C]
        fild [esp+20h+var_10]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+20h+var_20]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v10); /*0x4ac484*/
      LOWORD(v4) = Math::RoundToInt(v2); /*0x4ac48c*/
      if ( v4 > 4 ) /*0x4ac494*/
      {
        DisplayClass_field_0x11B0_high = HIBYTE(this->DisplayClass_field_0x11B0); /*0x4ac496*/
        LOBYTE(v4) = 1; /*0x4ac49c*/
        this->__pad_11B4[27] = 1; /*0x4ac4a0*/
        LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4ac4a6*/
        if ( !DisplayClass_field_0x11B0_high && !this->__pad_11B4[0] ) /*0x4ac4af*/
        {
          g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4ac4c0*/
          TacticalClass::InitScrollBounds((TacticalClass *)g_TacticalClass_Instance, &this->DisplayClass_field_0x11D4); /*0x4ac4cc*/
          LOBYTE(v4) = Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x4ac4da*/
        }
      }
    }
  }
  else
  {
    v12 = DSurface_ViewBounds.field_4; /*0x4ac3c8*/
    v11 = DSurface_ViewBounds.field_0; /*0x4ac3d0*/
    v4 = *a2; /*0x4ac3d4*/
    v5 = (void *)a2[1]; /*0x4ac3d6*/
    if ( *a2 < 0 ) /*0x4ac3db*/
      v4 = 0; /*0x4ac3dd*/
    if ( v4 >= *(int *)DSurface_ViewBounds.__pad_8 ) /*0x4ac3e1*/
      v4 = *(_DWORD *)DSurface_ViewBounds.__pad_8 - 1; /*0x4ac3e3*/
    if ( (int)v5 < 0 ) /*0x4ac3e8*/
      v5 = 0; /*0x4ac3ea*/
    if ( (int)v5 >= *(int *)&DSurface_ViewBounds.__pad_8[4] ) /*0x4ac3ee*/
      v5 = (void *)(*(_DWORD *)&DSurface_ViewBounds.__pad_8[4] - 1); /*0x4ac3f0*/
    DisplayClass_field_0x11DC = this->DisplayClass_field_0x11DC; /*0x4ac3f3*/
    v11 = v4; /*0x4ac3f9*/
    v12 = v5; /*0x4ac3ff*/
    if ( (void *)v4 != DisplayClass_field_0x11DC || v5 != this->DisplayClass_field_0x11E0 ) /*0x4ac40b*/
    {
      g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4ac41c*/
      LOBYTE(v4) = TacticalClass::UpdateScrollMaxBounds((TacticalClass *)g_TacticalClass_Instance, &v11); /*0x4ac429*/
    }
  }
  return v4; /*0x4ac42e*/
}



// ==== 0x004AC4F0  ObjectClass::GetHouseData  this=ObjectClass  sig=csp ====
void *GetHouseData(TechnoClass *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // ebx
  char *v4; // ebp
  int v5; // ecx
  int v6; // esi
  int v7; // ecx
  void *result; // eax
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF

  v1 = 0; /*0x4ac4fb*/
  v2 = 0; /*0x4ac4fd*/
  v3 = 0; /*0x4ac4ff*/
  v11 = 0; /*0x4ac503*/
  v12 = 0; /*0x4ac507*/
  v13 = 0; /*0x4ac50b*/
  if ( dword_A8EC88 > 0 ) /*0x4ac50f*/
  {
    v4 = (char *)dword_A8EC7C; /*0x4ac512*/
    v9 = dword_A8EC88; /*0x4ac519*/
    do /*0x4ac567*/
    {
      v5 = *(_DWORD *)v4; /*0x4ac51d*/
      if ( !*(_BYTE *)(*(_DWORD *)v4 + 129) && *(_BYTE *)(v5 + 1050) ) /*0x4ac52a*/
      {
        v2 += *(_DWORD *)(v5 + 156); /*0x4ac53e*/
        v3 += *(_DWORD *)(v5 + 160); /*0x4ac543*/
        v6 = *(_DWORD *)(v5 + 164); /*0x4ac549*/
        v11 = v2; /*0x4ac54c*/
        v12 = v3; /*0x4ac552*/
        v13 += v6; /*0x4ac556*/
        ++v1; /*0x4ac55a*/
      }
      v4 += 4; /*0x4ac55f*/
      --v9; /*0x4ac563*/
    }
    while ( v9 ); /*0x4ac567*/
  }
  v13 = 0; /*0x4ac56d*/
  if ( v1 ) /*0x4ac575*/
  {
    v11 = v2 / v1; /*0x4ac57a*/
    v7 = v3 / v1; /*0x4ac583*/
    v12 = v3 / v1; /*0x4ac58a*/
    v13 = 0 / v1; /*0x4ac58e*/
  }
  else
  {
    v11 = *HouseClass::GetStartCoords((HouseClass *)dword_A83D4C, v14); /*0x4ac5aa*/
    v7 = HouseClass::GetStartCoords((HouseClass *)dword_A83D4C, v14)[1]; /*0x4ac5ba*/
    v12 = v7; /*0x4ac5bd*/
  }
  LOWORD(v10) = v11 / 256; /*0x4ac5d3*/
  HIWORD(v10) = v7 / 256; /*0x4ac5e6*/
  *(int *)((char *)&dword_A8B230[374].ptr_0 + 2) = v10; /*0x4ac5f4*/
  *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = *(int *)((char *)&dword_A8B230[374].ptr_0 + 2); /*0x4ac605*/
  *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2); /*0x4ac616*/
  *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = *(int *)((char *)&dword_A8B230[373].referenceCount + 2); /*0x4ac627*/
  result = dword_A8B230; /*0x4ac62d*/
  dword_A8B230[14].nextArrayIndex = dword_A8B230[14].abstractFlags; /*0x4ac638*/
  if ( g_TacticalClass_Instance ) /*0x4ac646*/
    return (void *)Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, &v11); /*0x4ac64d*/
  return result; /*0x4ac5c5*/
}



// ==== 0x004AC660  BuildingClass::TogglePower  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::TogglePower(BuildingClass *this, int a2)
{
  int result; // eax
  char v4; // bl
  int (__thiscall **ptr_0)(BuildingClass *); // edx
  MapClass *v6; // [esp+0h] [ebp-8h]

  LOBYTE(result) = *((_BYTE *)this + 4529); /*0x4ac668*/
  v4 = result; /*0x4ac671*/
  if ( a2 == -1 ) /*0x4ac673*/
  {
    v4 = (_BYTE)result == 0; /*0x4ac688*/
  }
  else if ( a2 ) /*0x4ac677*/
  {
    if ( a2 == 1 ) /*0x4ac67c*/
      v4 = 1; /*0x4ac67e*/
  }
  else
  {
    v4 = 0; /*0x4ac682*/
  }
  if ( v4 != (_BYTE)result ) /*0x4ac68d*/
  {
    result = *((_DWORD *)this + 1130); /*0x4ac68f*/
    if ( !result ) /*0x4ac697*/
    {
      (*((void (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 18))(this, 0, 0); /*0x4ac6a1*/
      *((_BYTE *)this + 4528) = 0; /*0x4ac6a6*/
      *((_BYTE *)this + 4530) = 0; /*0x4ac6ad*/
      *((_BYTE *)this + 4531) = 0; /*0x4ac6b4*/
      *((_BYTE *)this + 4532) = 0; /*0x4ac6bb*/
      if ( v4 && *(int *)&dword_A83D4C[1].__pad_38[24] > 0 ) /*0x4ac6d2*/
      {
        *((_BYTE *)this + 4529) = 1; /*0x4ac6d4*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v6); /*0x4ac6db*/
      }
      else
      {
        ptr_0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x4ac6e5*/
        *((_BYTE *)this + 4529) = 0; /*0x4ac6e9*/
        return ptr_0[20](this); /*0x4ac6f0*/
      }
    }
  }
  return result; /*0x4ac6e0*/
}



// ==== 0x004AC700  TacticalClass::SetDisplayMode  this=TacticalClass  sig=csp ====
_DWORD *__thiscall TacticalClass::SetDisplayMode(TacticalClass *this, _DWORD *a2, char a3)
{
  _DWORD *result; // eax
  char v5; // cl
  char v6; // bl
  int updated; // eax
  int (__thiscall **ptr_0)(TacticalClass *); // eax
  void (__thiscall **v9)(TacticalClass *); // edx
  MapClass *v10; // [esp+0h] [ebp-8h]

  result = a2; /*0x4ac700*/
  v5 = *((_BYTE *)this + 4531); /*0x4ac70b*/
  v6 = v5; /*0x4ac711*/
  if ( a2 == (_DWORD *)-1 ) /*0x4ac713*/
  {
    v6 = v5 == 0; /*0x4ac728*/
  }
  else if ( a2 ) /*0x4ac717*/
  {
    if ( a2 == (_DWORD *)1 ) /*0x4ac71c*/
      v6 = 1; /*0x4ac71e*/
  }
  else
  {
    v6 = 0; /*0x4ac722*/
  }
  if ( v6 != v5 ) /*0x4ac72d*/
  {
    result = (_DWORD *)*((_DWORD *)this + 1130); /*0x4ac733*/
    if ( !result ) /*0x4ac73b*/
    {
      *((_BYTE *)this + 4528) = 0; /*0x4ac741*/
      *((_BYTE *)this + 4529) = 0; /*0x4ac748*/
      *((_BYTE *)this + 4530) = 0; /*0x4ac74f*/
      *((_BYTE *)this + 4532) = 0; /*0x4ac756*/
      updated = TacticalClass::updateVisibility((TacticalClass *)dword_A83D4C); /*0x4ac763*/
      if ( v6 ) /*0x4ac76a*/
      {
        if ( updated == -1 && (!a3 || *(_DWORD *)&dword_A83D4C->__pad_140[204] == -1) ) /*0x4ac786*/
        {
          ptr_0 = (int (__thiscall **)(TacticalClass *))this->AbstractClass; /*0x4ac788*/
          *((_BYTE *)this + 4531) = 0; /*0x4ac78c*/
          result = (_DWORD *)ptr_0[20](this); /*0x4ac793*/
          *((_DWORD *)this + 1135) = 0; /*0x4ac796*/
        }
        else
        {
          *((_BYTE *)this + 4531) = 1; /*0x4ac7a7*/
          if ( !a3 ) /*0x4ac7ae*/
            *(_DWORD *)&dword_A83D4C->__pad_140[204] = updated; /*0x4ac7b6*/
          return (_DWORD *)MapClass::UnselectAll_ClearLimboLaunchers(v10); /*0x4ac7bc*/
        }
      }
      else
      {
        v9 = (void (__thiscall **)(TacticalClass *))this->AbstractClass; /*0x4ac7c6*/
        *((_BYTE *)this + 4531) = 0; /*0x4ac7ca*/
        v9[20](this); /*0x4ac7d1*/
        result = (_DWORD *)*((_DWORD *)this + 1135); /*0x4ac7d4*/
        if ( result ) /*0x4ac7dc*/
        {
          *result = *((_DWORD *)this + 1136); /*0x4ac7ea*/
          result[1] = *((_DWORD *)this + 1137); /*0x4ac7ef*/
          result[2] = *((_DWORD *)this + 1138); /*0x4ac7f5*/
          *((_DWORD *)this + 1135) = 0; /*0x4ac7f8*/
          return (*(_DWORD *(__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4ac80a*/
        }
      }
    }
  }
  return result; /*0x4ac7a0*/
}



// ==== 0x004AC820  TacticalClass::SetObserverMode  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::SetObserverMode(TacticalClass *this, int a2)
{
  int result; // eax
  char v4; // bl
  int (__thiscall **ptr_0)(TacticalClass *); // edx
  MapClass *v6; // [esp+0h] [ebp-8h]

  LOBYTE(result) = *((_BYTE *)this + 4530); /*0x4ac828*/
  v4 = result; /*0x4ac831*/
  if ( a2 == -1 ) /*0x4ac833*/
  {
    v4 = (_BYTE)result == 0; /*0x4ac848*/
  }
  else if ( a2 ) /*0x4ac837*/
  {
    if ( a2 == 1 ) /*0x4ac83c*/
      v4 = 1; /*0x4ac83e*/
  }
  else
  {
    v4 = 0; /*0x4ac842*/
  }
  if ( v4 != (_BYTE)result ) /*0x4ac84d*/
  {
    result = *((_DWORD *)this + 1130); /*0x4ac84f*/
    if ( !result ) /*0x4ac857*/
    {
      (*((void (__thiscall **)(TacticalClass *, _DWORD, _DWORD))this->AbstractClass + 18))(this, 0, 0); /*0x4ac861*/
      *((_BYTE *)this + 4528) = 0; /*0x4ac866*/
      *((_BYTE *)this + 4529) = 0; /*0x4ac86d*/
      *((_BYTE *)this + 4531) = 0; /*0x4ac874*/
      *((_BYTE *)this + 4532) = 0; /*0x4ac87b*/
      if ( v4 && *(int *)&dword_A83D4C[1].__pad_38[24] > 0 ) /*0x4ac892*/
      {
        *((_BYTE *)this + 4530) = 1; /*0x4ac894*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v6); /*0x4ac89b*/
      }
      else
      {
        ptr_0 = (int (__thiscall **)(TacticalClass *))this->AbstractClass; /*0x4ac8a5*/
        *((_BYTE *)this + 4530) = 0; /*0x4ac8a9*/
        return ptr_0[20](this); /*0x4ac8b0*/
      }
    }
  }
  return result; /*0x4ac8a0*/
}



// ==== 0x004AC8C0  BuildingClass::TogglePower2  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::TogglePower2(BuildingClass *this, int a2)
{
  int result; // eax
  char v4; // bl
  void *ptr_0; // eax
  int (__thiscall **v6)(BuildingClass *); // edx
  MapClass *v7; // [esp+0h] [ebp-8h]

  LOBYTE(result) = *((_BYTE *)this + 4528); /*0x4ac8c8*/
  v4 = result; /*0x4ac8d1*/
  if ( a2 == -1 ) /*0x4ac8d3*/
  {
    v4 = (_BYTE)result == 0; /*0x4ac8e8*/
  }
  else if ( a2 ) /*0x4ac8d7*/
  {
    if ( a2 == 1 ) /*0x4ac8dc*/
      v4 = 1; /*0x4ac8de*/
  }
  else
  {
    v4 = 0; /*0x4ac8e2*/
  }
  if ( v4 != (_BYTE)result ) /*0x4ac8ed*/
  {
    result = *((_DWORD *)this + 1130); /*0x4ac8ef*/
    if ( !result ) /*0x4ac8f7*/
    {
      ptr_0 = this->TechnoClass; /*0x4ac8f9*/
      *((_BYTE *)this + 4529) = 0; /*0x4ac901*/
      *((_BYTE *)this + 4530) = 0; /*0x4ac908*/
      *((_BYTE *)this + 4531) = 0; /*0x4ac90f*/
      *((_BYTE *)this + 4532) = 0; /*0x4ac916*/
      (*((void (__thiscall **)(BuildingClass *, _DWORD, _DWORD))ptr_0 + 18))(this, 0, 0); /*0x4ac91d*/
      if ( v4 && *(int *)&dword_A83D4C[1].__pad_38[24] > 0 ) /*0x4ac932*/
      {
        *((_BYTE *)this + 4528) = 1; /*0x4ac934*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x4ac93b*/
      }
      else
      {
        v6 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x4ac945*/
        *((_BYTE *)this + 4528) = 0; /*0x4ac949*/
        return v6[20](this); /*0x4ac950*/
      }
    }
  }
  return result; /*0x4ac940*/
}



// ==== 0x004AC960  MapClass::ToggleZoom  this=MapClass  sig=csp ====
int __thiscall MapClass::ToggleZoom(MapClass *this, int a2)
{
  int result; // eax
  char v4; // bl
  void *MapClass_field_0x0; // edx
  int (__thiscall **v6)(MapClass *); // eax
  MapClass *v7; // [esp+0h] [ebp-8h]

  result = a2; /*0x4ac960*/
  v4 = this->__pad_11A4[12]; /*0x4ac96b*/
  if ( a2 == -1 ) /*0x4ac971*/
  {
    v4 = v4 == 0; /*0x4ac986*/
  }
  else if ( a2 ) /*0x4ac975*/
  {
    if ( a2 == 1 ) /*0x4ac97a*/
      v4 = 1; /*0x4ac97c*/
  }
  else
  {
    v4 = 0; /*0x4ac980*/
  }
  if ( v4 != this->__pad_11A4[16] ) /*0x4ac98f*/
  {
    result = *(_DWORD *)&this->__pad_11A4[4]; /*0x4ac991*/
    if ( !result ) /*0x4ac999*/
    {
      if ( v4 && !MapClass::isCellAccessible((char *)&g_VisibilitySystem, (int)dword_A83D4C->Object_field_0x30) ) /*0x4ac9ad*/
        v4 = 0; /*0x4ac9b6*/
      MapClass_field_0x0 = this->MapClass_field_0x0; /*0x4ac9b8*/
      this->__pad_11A4[13] = 0; /*0x4ac9c0*/
      this->__pad_11A4[14] = 0; /*0x4ac9c7*/
      this->__pad_11A4[15] = 0; /*0x4ac9ce*/
      this->__pad_11A4[12] = 0; /*0x4ac9d5*/
      (*((void (__thiscall **)(MapClass *, _DWORD, _DWORD))MapClass_field_0x0 + 18))(this, 0, 0); /*0x4ac9dc*/
      if ( v4 ) /*0x4ac9e1*/
      {
        this->__pad_11A4[16] = 1; /*0x4ac9e3*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x4ac9ea*/
      }
      else
      {
        v6 = (int (__thiscall **)(MapClass *))this->MapClass_field_0x0; /*0x4ac9f4*/
        this->__pad_11A4[16] = 0; /*0x4ac9f8*/
        return v6[20](this); /*0x4ac9ff*/
      }
    }
  }
  return result; /*0x4ac9ef*/
}



// ==== 0x004ACA10  ObjectPlacement::CalcPosition_Wrapper  this=ObjectPlacement  sig=csp ====
int *__stdcall ObjectPlacement_CalcPosition_Wrapper(int *a1, _DWORD *a2, char a3)
{
  _DWORD *v3; // eax
  char v4; // cl
  int *v5; // edx
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v3 = Coord::To_Cell(&dword_87F7E8, a2); /*0x4aca1e*/
  v4 = (v3[80] & 0x100) != 0 && a2[2] >= dword_8A0740 * (*((char *)v3 + 283) + 4); /*0x4aca46*/
  v5 = ObjectPlacement::CalcPosition(v3, v7, a2, a3, v4, 0); /*0x4aca64*/
  *a1 = *v5; /*0x4aca6e*/
  a1[1] = v5[1]; /*0x4aca73*/
  a1[2] = v5[2]; /*0x4aca7a*/
  return a1; /*0x4aca76*/
}



// ==== 0x004ACAC0  MapClass::ProcessVisibilityFlags  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessVisibilityFlags(MapClass *this)
{
  int i; // ebp
  int j; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int k; // ebp
  int m; // edi
  _DWORD *v8; // eax
  __int16 v10; // [esp+10h] [ebp-8h] BYREF
  __int16 v11; // [esp+12h] [ebp-6h]
  __int16 v12[2]; // [esp+14h] [ebp-4h] BYREF

  for ( i = 0; i < 512; ++i ) /*0x4acac9*/
  {
    for ( j = 0; j < 512; ++j ) /*0x4acad0*/
    {
      v10 = j; /*0x4acad9*/
      v11 = i; /*0x4acade*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)this, &v10) ) /*0x4acae3*/
      {
        v12[0] = j; /*0x4acaf0*/
        v12[1] = i; /*0x4acaf8*/
        v4 = CellCoord::To_CellObj((CellCoord *)this, v12); /*0x4acafd*/
        v5 = v4[75]; /*0x4acb02*/
        if ( (v5 & 0x10) == 0 && (v5 & 8) != 0 ) /*0x4acb10*/
          v4[80] |= 0x20u; /*0x4acb12*/
      }
    }
  }
  for ( k = 0; k < 512; ++k ) /*0x4acb2a*/
  {
    for ( m = 0; m < 512; ++m ) /*0x4acb2c*/
    {
      v10 = m; /*0x4acb35*/
      v11 = k; /*0x4acb3a*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)this, &v10) /*0x4acb5a*/
        && (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)this, &v10) + 320) & 0x20) != 0 )
      {
        v8 = CellCoord::To_CellObj((CellCoord *)this, &v10); /*0x4acb63*/
        v8[80] &= ~0x20u; /*0x4acb7a*/
        MapClass::RevealCell(this, &v10); /*0x4acb7f*/
      }
    }
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x4acb9c*/
  return (*((int (__thiscall **)(MapClass *, int))this->MapClass_field_0x0 + 14))(this, 1); /*0x4acbaa*/
}



// ==== 0x004ACBC0  MapClass::ProcessFogTransition  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessFogTransition(MapClass *this)
{
  int i; // eax
  int v3; // ecx
  int result; // eax
  __int16 v5[2]; // [esp+4h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4acbc4*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x4acbd2*/
  {
    v3 = *(_DWORD *)(i + 320); /*0x4acbd4*/
    if ( (v3 & 1) == 0 && (v3 & 2) != 0 ) /*0x4acbe2*/
      *(_DWORD *)(i + 320) = v3 | 0x40; /*0x4acbe7*/
  }
  HouseClass::RevealShroudForAllies(0, 1); /*0x4acbfe*/
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4acc05*/
  for ( result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x4acc13*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    if ( (*(_BYTE *)(result + 320) & 0x40) != 0 ) /*0x4acc1c*/
    {
      *(_DWORD *)(result + 320) &= ~0x40u; /*0x4acc27*/
      *(_DWORD *)v5 = *(_DWORD *)(result + 36); /*0x4acc34*/
      CellClass::ProcessVisibility((CellClass *)this, v5); /*0x4acc3b*/
    }
  }
  return result; /*0x4acc4b*/
}



// ==== 0x004ACC50  CellClass::ProcessVisibility  this=CellClass  sig=csp ====
char __thiscall CellClass::ProcessVisibility(CellClass *this, __int16 *a2)
{
  char result; // al
  CellClass *v5; // ecx
  int v6; // eax
  int i; // ebp
  int v8; // eax
  _DWORD *v9; // esi
  int AdjacentPassableMask; // eax
  int v11; // ecx
  int v12; // [esp+8h] [ebp-10h]
  __int16 v13[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h] BYREF
  CellClass *v15; // [esp+14h] [ebp-4h]
  bool v16; // [esp+1Ch] [ebp+4h]

  result = LayerClass::CoordinatesLegal((LayerClass *)this, a2); /*0x4acc5c*/
  if ( result ) /*0x4acc63*/
  {
    v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4acc71*/
    v15 = v5; /*0x4acc78*/
    v6 = v5->flags[0]; /*0x4acc7c*/
    v16 = (v6 & 3) != 0; /*0x4acc86*/
    LOBYTE(v6) = v6 & 0xFC; /*0x4acc8b*/
    v5->foggedness = -2; /*0x4acc8d*/
    v5->flags[0] = v6; /*0x4acc94*/
    if ( (v5->copyFlags & 8) != 0 ) /*0x4acca2*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4accab*/
    for ( i = 0; i < 8; ++i ) /*0x4accb2*/
    {
      v8 = i & 7; /*0x4accb9*/
      LOWORD(v12) = LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]) + *a2; /*0x4accd7*/
      HIWORD(v12) = a2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x4acce0*/
      *(_DWORD *)v13 = v12; /*0x4accec*/
      v9 = CellCoord::To_CellObj((CellCoord *)this, v13); /*0x4accfb*/
      v14 = v9[9]; /*0x4acd07*/
      AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&v14, 1); /*0x4acd0b*/
      if ( AdjacentPassableMask != -2 || *((_BYTE *)v9 + 289) == 0xFE ) /*0x4acd1b*/
      {
        v11 = v9[80]; /*0x4acd2b*/
        if ( ((v11 & 1) != 0 || AdjacentPassableMask != *((char *)v9 + 289)) /*0x4acd4c*/
          && AdjacentPassableMask >= 0
          && *((char *)v9 + 289) >= -1 )
        {
          *((_BYTE *)v9 + 289) = AdjacentPassableMask; /*0x4acd51*/
          v9[80] = v11 & 0xFFFFFFFC | 2; /*0x4acd5b*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v9); /*0x4acd67*/
        }
      }
      else
      {
        CellClass::ProcessVisibility(this, v13); /*0x4acd24*/
      }
    }
    result = v16; /*0x4acd76*/
    if ( v16 ) /*0x4acd7e*/
      return CellClass::CreateFoggedObjects(v15); /*0x4acd84*/
  }
  return result; /*0x4acd89*/
}



// ==== 0x004ACDA0  MapClass::RevealCell  this=MapClass  sig=csp ====
char __thiscall MapClass::RevealCell(MapClass *this, __int16 *a2)
{
  __int16 *v2; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  int i; // edi
  int v7; // eax
  __int16 *v9; // [esp+8h] [ebp-4h]

  v2 = a2; /*0x4acda3*/
  LOBYTE(v4) = LayerClass::CoordinatesLegal((LayerClass *)this, a2); /*0x4acdaa*/
  if ( (_BYTE)v4 ) /*0x4acdb1*/
  {
    v4 = CellCoord::To_CellObj((CellCoord *)this, v2); /*0x4acdba*/
    v5 = v4[75]; /*0x4acdbf*/
    if ( (v5 & 8) != 0 ) /*0x4acdc8*/
    {
      v4[75] = v5 & 0xFFFFFFE7; /*0x4acdd2*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v4); /*0x4acddf*/
      for ( i = 0; i < 8; ++i ) /*0x4acde4*/
      {
        v7 = i & 7; /*0x4acde8*/
        LOWORD(v9) = *v2 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4ace09*/
        HIWORD(v9) = v2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4ace12*/
        a2 = v9; /*0x4ace1e*/
        v4 = CellCoord::To_CellObj((CellCoord *)this, (__int16 *)&a2); /*0x4ace22*/
        if ( a2 != *(__int16 **)v2 ) /*0x4ace2f*/
        {
          v4[75] &= ~0x10u; /*0x4ace46*/
          LOBYTE(v4) = Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v4); /*0x4ace52*/
        }
      }
    }
  }
  return (char)v4; /*0x4ace5e*/
}



// ==== 0x004ACE70  DisplayClass::LoadMapData  this=DisplayClass  sig=csp ====
void __thiscall ScenarioClass::LoadMapData(DisplayClass *this, unsigned __int8 ***a2)
{
  unsigned int *v3; // eax
  void (__thiscall **DisplayClass_field_0x0)(DisplayClass *); // edx
  char v5; // bl
  int i; // esi
  int v7; // eax
  char v8; // cl
  int referenceCount; // esi
  int uniqueId; // ecx
  int abstractFlags; // edx
  int nextArrayIndex; // eax
  TeamClass *v13; // eax
  unsigned __int8 *StringByIndex; // esi
  int v15; // ecx
  TeamClass *v16; // esi
  ScenarioClass *v17; // eax
  int v18; // esi
  ObjectClass *v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  size_t v24; // esi
  void *Buffer; // ebp
  int Base64Data; // ebp
  void *v27; // ebp
  int v28; // ebp
  void *v29; // ebp
  int v30; // ebp
  void *v31; // ebp
  int v32; // ebp
  void *v33; // ebp
  int v34; // esi
  void *v35; // ebp
  int *v36; // esi
  unsigned int *v37; // eax
  BuildingTypeClass *v38; // [esp+Ch] [ebp-134h]
  BSurface v39; // [esp+1Ch] [ebp-124h] BYREF
  int KeyCount; // [esp+3Ch] [ebp-104h] BYREF
  int j; // [esp+40h] [ebp-100h]
  __int16 v42[2]; // [esp+44h] [ebp-FCh] BYREF
  TeamClass *Int_Overwrite; // [esp+48h] [ebp-F8h]
  Straw v44; // [esp+4Ch] [ebp-F4h] BYREF
  int v45; // [esp+54h] [ebp-ECh]
  Buffer v46; // [esp+58h] [ebp-E8h] BYREF
  unsigned int v47[4]; // [esp+80h] [ebp-C0h] BYREF
  _DWORD v48[4]; // [esp+90h] [ebp-B0h] BYREF
  char Destination[32]; // [esp+A0h] [ebp-A0h] BYREF
  char Source[128]; // [esp+C0h] [ebp-80h] BYREF

  v46.Buffer_field_18 = (int)this; /*0x4ace85*/
  INIClass::ResetSection((INIClass *)a2); /*0x4ace89*/
  v47[2] = 50; /*0x4ace97*/
  v47[3] = 50; /*0x4ace9b*/
  v47[0] = 1; /*0x4aceb9*/
  v47[1] = 1; /*0x4acec0*/
  v3 = INIClass::ParseValue( /*0x4acec7*/
         (INIClass *)a2,
         (unsigned int *)&v44,
         &off_81FFF0,
         (unsigned __int8 *)g_Str_EVA_CannotDeployHere.Type,
         v47);
  v48[0] = *v3; /*0x4acece*/
  v48[1] = v3[1]; /*0x4aced8*/
  v48[2] = v3[2]; /*0x4acee4*/
  DisplayClass_field_0x0 = (void (__thiscall **)(DisplayClass *))this->DisplayClass_field_0x0; /*0x4aceeb*/
  v48[3] = v3[3]; /*0x4acef1*/
  DisplayClass_field_0x0[24](this); /*0x4acef8*/
  v5 = 0; /*0x4acefe*/
  (*((void (__thiscall **)(DisplayClass *, _DWORD *, int, _DWORD, int))this->DisplayClass_field_0x0 + 28))( /*0x4acf0d*/
    this,
    v48,
    1,
    0,
    1);
  Int_Overwrite = (TeamClass *)INIClass::ReadInt_Overwrite( /*0x4acf28*/
                                 (bool *)a2,
                                 &off_81FFF0,
                                 (unsigned __int8 *)&stru_81AF8C.?[17],
                                 0);
  *(_DWORD *)v42 = dword_AA10B0; /*0x4acf47*/
  j = 0; /*0x4acf4b*/
  INIClass::GetString( /*0x4acf4f*/
    (INIClass *)a2,
    &off_81FFF0,
    (unsigned __int8 *)&g_Str_EVA_CannotDeployHere.AlliedVoice[6],
    g_INI_Key_Clear,
    Destination,
    32);
  if ( !_strcmpi(Destination, g_INI_Key_Water) ) /*0x4acf61*/
  {
    j = 3; /*0x4acf73*/
    *(_DWORD *)v42 = g_CellPassabilityLUT; /*0x4acf7b*/
  }
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4acf81*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x4acf91*/
  {
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, j); /*0x4acfa5*/
    v8 = (_BYTE)Int_Overwrite + *(_BYTE *)(i + 283); /*0x4acfba*/
    *(_DWORD *)(i + 56) = *(_DWORD *)v42 + v7; /*0x4acfbc*/
    *(_BYTE *)(i + 283) = v8; /*0x4acfbf*/
    *(_BYTE *)(i + 282) = 0; /*0x4acfc7*/
  }
  dword_A8B230[130].uniqueId = ScenarioClass::ReadAndParseString( /*0x4acff0*/
                                 (ScenarioClass *)a2,
                                 &off_81FFF0,
                                 (unsigned __int8 *)g_INI_Key_Theater,
                                 0);
  (*((void (__thiscall **)(DisplayClass *, int))this->DisplayClass_field_0x0 + 6))(this, dword_A8B230[130].uniqueId); /*0x4ad007*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 63); /*0x4ad011*/
  Event::Dispatch(); /*0x4ad016*/
  referenceCount = dword_A8B230[14].referenceCount; /*0x4ad026*/
  LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x4ad02c*/
  uniqueId = dword_A8B230[130].uniqueId; /*0x4ad03c*/
  if ( uniqueId == dword_822CF8 ) /*0x4ad044*/
    ResetAllTechnoField776(); /*0x4ad04f*/
  else
    LoadTerrainTypeClassTheatre(uniqueId, 1); /*0x4ad048*/
  dword_A8B230[14].referenceCount = referenceCount + 10000; /*0x4ad05f*/
  LoadBuildingTypeClassSHPs(dword_A8B230[130].uniqueId); /*0x4ad071*/
  BuildingTypeClass::LoadRepairAnimations(v38); /*0x4ad082*/
  LoadBuildingTypeClassTheatreSHP(dword_A8B230[130].uniqueId); /*0x4ad092*/
  LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x4ad0a3*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 65); /*0x4ad0af*/
  Event::Dispatch(); /*0x4ad0b4*/
  ScenarioClass::ReadWaypoints((ScenarioClass *)dword_A8B230, (int)a2); /*0x4ad0c0*/
  if ( !(unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, dword_A8B230[14].abstractFlags) ) /*0x4ad0d2*/
  {
    abstractFlags = dword_A8B230[14].abstractFlags; /*0x4ad0f2*/
    LOWORD(j) = (*(_DWORD *)&this->__pad_34[192] + *(_DWORD *)&this->__pad_34[196]) / 2; /*0x4ad0fa*/
    HIWORD(j) = j; /*0x4ad0ff*/
    ScenarioClass::Set_Waypoint((char *)dword_A8B230, abstractFlags, j); /*0x4ad10a*/
  }
  if ( LOBYTE(dword_A8B230[204].ptr_0) ) /*0x4ad115*/
    nextArrayIndex = dword_A8B230[14].nextArrayIndex; /*0x4ad11d*/
  else
    nextArrayIndex = dword_A8B230[14].abstractFlags; /*0x4ad125*/
  v13 = (TeamClass *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &KeyCount, nextArrayIndex); /*0x4ad13c*/
  Int_Overwrite = v13; /*0x4ad13e*/
  *(void **)((char *)&dword_A8B230[374].ptr_0 + 2) = v13; /*0x4ad142*/
  *(void **)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = *(void **)((char *)&dword_A8B230[374].ptr_0 + 2); /*0x4ad157*/
  *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2); /*0x4ad171*/
  *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = *(int *)((char *)&dword_A8B230[373].referenceCount + 2); /*0x4ad183*/
  v46.Buffer_field_20 = (SHIWORD(Int_Overwrite) << 8) + 128; /*0x4ad19c*/
  v46.Buffer_field_1C = ((__int16)v13 << 8) + 128; /*0x4ad1a6*/
  v46.Buffer_field_24 = 0; /*0x4ad1aa*/
  Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, &v46.Buffer_field_1C); /*0x4ad1ae*/
  KeyCount = INIClass::GetKeyCount((char *)a2, g_INI_Key_CellTags); /*0x4ad1c1*/
  for ( j = 0; j < KeyCount; ++j ) /*0x4ad1c9*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex((char *)a2, g_INI_Key_CellTags, j); /*0x4ad1ec*/
    if ( INIClass::GetString((INIClass *)a2, g_INI_Key_CellTags, StringByIndex, &g_INI_DefaultBuffer, Source, 128) ) /*0x4ad1fc*/
      Int_Overwrite = (TeamClass *)TagTypeClass::FindOrCreate(Source); /*0x4ad211*/
    else
      Int_Overwrite = 0; /*0x4ad217*/
    v15 = atoi((const char *)StringByIndex); /*0x4ad221*/
    if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x4ad22e*/
    {
      LOWORD(v46.Buffer_field_10) = v15 % 128; /*0x4ad270*/
      HIWORD(v46.Buffer_field_10) = v15 / 128; /*0x4ad27e*/
      *(_DWORD *)v42 = v46.Buffer_field_10; /*0x4ad287*/
    }
    else
    {
      LOWORD(v46.Buffer_field_14) = v15 % 1000; /*0x4ad23f*/
      HIWORD(v46.Buffer_field_14) = v15 / 1000; /*0x4ad250*/
      *(_DWORD *)v42 = v46.Buffer_field_14; /*0x4ad259*/
    }
    v16 = Int_Overwrite; /*0x4ad28b*/
    if ( Int_Overwrite ) /*0x4ad291*/
    {
      if ( !*((_DWORD *)CellCoord::To_CellObj((CellCoord *)this, v42) + 15) ) /*0x4ad2a3*/
      {
        v17 = (ScenarioClass *)TeamClass::FindOrCreate(v16); /*0x4ad2aa*/
        v18 = (int)v17; /*0x4ad2af*/
        if ( v17 ) /*0x4ad2b3*/
        {
          ScenarioClass::checkMissionObjectives(v17, *(int *)v42); /*0x4ad2bc*/
          v19 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)this, v42); /*0x4ad2c9*/
          ObjectClass::SetTriggerTarget(v19, v18); /*0x4ad2d0*/
          v20 = *(_DWORD *)&this->__pad_41E[3398]; /*0x4ad2d5*/
          if ( *(_DWORD *)&this->__pad_41E[3406] < v20 /*0x4ad303*/
            || (this->__pad_41E[3403] || !v20)
            && (v21 = *(_DWORD *)&this->__pad_41E[3410], v21 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_41E[3390] + 8))(
                 &this->__pad_41E[3390],
                 v21 + v20,
                 0) )
          {
            v22 = *(_DWORD *)&this->__pad_41E[3406]; /*0x4ad30a*/
            v23 = *(_DWORD *)&this->__pad_41E[3394]; /*0x4ad30d*/
            *(_DWORD *)&this->__pad_41E[3406] = v22 + 1; /*0x4ad313*/
            *(_DWORD *)(v23 + 4 * v22) = *(_DWORD *)v42; /*0x4ad31a*/
          }
        }
      }
    }
  }
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 67); /*0x4ad339*/
  Event::Dispatch(); /*0x4ad33e*/
  Surface::Construct((Surface *)&v39, 640, 400); /*0x4ad351*/
  v39.? = 0; /*0x4ad360*/
  *(_DWORD *)v39.XSurface = &XSurface_Vtable; /*0x4ad364*/
  v39.BytesPerPixel = 2; /*0x4ad36c*/
  Buffer::Init((Buffer *)&v39.Buffer, 0, 512000); /*0x4ad374*/
  v24 = v39.? * v39.BytesPerPixel * v39.?; /*0x4ad386*/
  Buffer = v39.Buffer; /*0x4ad38b*/
  ++v39.?; /*0x4ad390*/
  *(_DWORD *)v39.XSurface = &BSurface_Vtable; /*0x4ad398*/
  BSurface::GetBytesPerPixel(&v39); /*0x4ad3a0*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad3ae*/
  Base64Data = INIClass::GetBase64Data((INIClass *)a2, aIsomappack, (int)Buffer, v24); /*0x4ad3c0*/
  if ( Base64Data > 0 ) /*0x4ad3c4*/
  {
    ++v39.?; /*0x4ad3cf*/
    KeyCount = (int)v39.Buffer; /*0x4ad3d7*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad3df*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad3ea*/
    v44.Straw_field_0x04 = 0; /*0x4ad3f7*/
    v45 = 0; /*0x4ad3fb*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad3ff*/
    Buffer::Init(&v46, KeyCount, Base64Data); /*0x4ad407*/
    v46.Buffer_field_0C = 0; /*0x4ad416*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad41a*/
    CellClass::LoadTerrainTiles((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad422*/
    --v39.?; /*0x4ad430*/
    Vector::Clear((int)&v46); /*0x4ad434*/
    Straw::Dtor(&v44); /*0x4ad43d*/
  }
  v27 = v39.Buffer; /*0x4ad446*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad456*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad461*/
  v28 = INIClass::GetBase64Data((INIClass *)a2, aIsomappack2, (int)v27, v24); /*0x4ad473*/
  if ( v28 > 0 ) /*0x4ad477*/
  {
    ++v39.?; /*0x4ad482*/
    KeyCount = (int)v39.Buffer; /*0x4ad48a*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad492*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad49d*/
    v44.Straw_field_0x04 = 0; /*0x4ad4aa*/
    v45 = 0; /*0x4ad4ae*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad4b2*/
    Buffer::Init(&v46, KeyCount, v28); /*0x4ad4ba*/
    v46.Buffer_field_0C = 0; /*0x4ad4c9*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad4cd*/
    CellClass::CreateOverlay((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad4d5*/
    --v39.?; /*0x4ad4e3*/
    Vector::Clear((int)&v46); /*0x4ad4e7*/
    Straw::Dtor(&v44); /*0x4ad4f0*/
  }
  v29 = v39.Buffer; /*0x4ad4f9*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad509*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad514*/
  v30 = INIClass::GetBase64Data((INIClass *)a2, aIsomappack3, (int)v29, v24); /*0x4ad526*/
  if ( v30 > 0 ) /*0x4ad52a*/
  {
    ++v39.?; /*0x4ad535*/
    KeyCount = (int)v39.Buffer; /*0x4ad53d*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad545*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad550*/
    v44.Straw_field_0x04 = 0; /*0x4ad55d*/
    v45 = 0; /*0x4ad561*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad565*/
    Buffer::Init(&v46, KeyCount, v30); /*0x4ad56d*/
    v46.Buffer_field_0C = 0; /*0x4ad57c*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad580*/
    CellClass::DecompressRawCellData((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad588*/
    --v39.?; /*0x4ad596*/
    Vector::Clear((int)&v46); /*0x4ad59a*/
    Straw::Dtor(&v44); /*0x4ad5a3*/
  }
  v31 = v39.Buffer; /*0x4ad5ac*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad5bc*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad5c7*/
  v32 = INIClass::GetBase64Data((INIClass *)a2, aIsomappack4, (int)v31, v24); /*0x4ad5d9*/
  if ( v32 > 0 ) /*0x4ad5dd*/
  {
    ++v39.?; /*0x4ad5e8*/
    KeyCount = (int)v39.Buffer; /*0x4ad5f0*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad5f8*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad603*/
    v44.Straw_field_0x04 = 0; /*0x4ad610*/
    v45 = 0; /*0x4ad614*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad618*/
    Buffer::Init(&v46, KeyCount, v32); /*0x4ad620*/
    v46.Buffer_field_0C = 0; /*0x4ad62f*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad633*/
    CellClass::DecompressTerrainDataSimple((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad63b*/
    --v39.?; /*0x4ad649*/
    Vector::Clear((int)&v46); /*0x4ad64d*/
    Straw::Dtor(&v44); /*0x4ad656*/
  }
  v33 = v39.Buffer; /*0x4ad65f*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad66f*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad67a*/
  v34 = INIClass::GetBase64Data((INIClass *)a2, aIsomappack5, (int)v33, v24); /*0x4ad68c*/
  if ( v34 > 0 ) /*0x4ad690*/
  {
    v35 = v39.Buffer; /*0x4ad69a*/
    ++v39.?; /*0x4ad69f*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad6a7*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad6b2*/
    v44.Straw_field_0x04 = 0; /*0x4ad6bb*/
    v45 = 0; /*0x4ad6bf*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad6c3*/
    Buffer::Init(&v46, (int)v35, v34); /*0x4ad6cb*/
    v46.Buffer_field_0C = 0; /*0x4ad6d4*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad6de*/
    CellClass::DecompressTerrainData((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad6e6*/
    --v39.?; /*0x4ad6f4*/
    Vector::Clear((int)&v46); /*0x4ad6f8*/
    Straw::Dtor(&v44); /*0x4ad701*/
  }
  --v39.?; /*0x4ad712*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 68); /*0x4ad716*/
  Event::Dispatch(); /*0x4ad71b*/
  if ( stru_A8EB00.?[391] || stru_A8EB00.?[377] ) /*0x4ad72e*/
    v5 = 1; /*0x4ad730*/
  LoadMapClassIsometricTiles(v5, BYTE1(dword_A8B230[375].ptr_0)); /*0x4ad743*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 69); /*0x4ad74f*/
  Event::Dispatch(); /*0x4ad754*/
  v36 = (int *)(v46.Buffer_field_18 + 252); /*0x4ad75f*/
  v37 = INIClass::ParseValue( /*0x4ad77a*/
          (INIClass *)a2,
          (unsigned int *)&v44,
          &off_81FFF0,
          (unsigned __int8 *)&g_Str_EVA_CannotDeployHere.RussianVoice[3],
          (unsigned int *)(v46.Buffer_field_18 + 236));
  *v36 = *v37; /*0x4ad784*/
  v36[1] = v37[1]; /*0x4ad789*/
  v36[2] = v37[2]; /*0x4ad78f*/
  v36[3] = v37[3]; /*0x4ad795*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], v36); /*0x4ad79d*/
  ScenarioClass::CalcMinShroudLevel((ScenarioClass *)&stru_87F5F0.__pad_58[416]); /*0x4ad7a7*/
  dword_822CF8 = dword_A8B230[130].uniqueId; /*0x4ad7bc*/
  Vector::Clear((int)&v39.Buffer); /*0x4ad7c2*/
}



// ==== 0x004AD7E0  MapClass::SaveCellTagsToINI  this=MapClass  sig=csp ====
int __thiscall MapClass::SaveCellTagsToINI(MapClass *this, char *a2)
{
  __int16 v3; // bp
  CellCoord *v4; // ebx
  int j; // edi
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // eax
  signed int v11; // edi
  int v12; // eax
  __int16 v14[2]; // [esp+10h] [ebp-3Ch] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-38h] BYREF
  MapClass *v16; // [esp+18h] [ebp-34h]
  CHAR v17[20]; // [esp+1Ch] [ebp-30h] BYREF
  Pipe v18; // [esp+30h] [ebp-1Ch] BYREF
  int v19; // [esp+48h] [ebp-4h]
  char *i; // [esp+50h] [ebp+4h]

  v3 = 0; /*0x4ad7ef*/
  v4 = (CellCoord *)this; /*0x4ad7f2*/
  v16 = this; /*0x4ad7f8*/
  INIClass::ClearSection((int *)a2, (int)&off_81FFF0, 0); /*0x4ad7fc*/
  MapClass::loadTheaterINI(a2, &off_81FFF0, g_INI_Key_Theater, dword_A8B230[130].uniqueId); /*0x4ad81b*/
  INIClass::SetRect(a2, &off_81FFF0, (char *)g_Str_EVA_CannotDeployHere.Type, &v4[59]); /*0x4ad835*/
  INIClass::SetRect(a2, &off_81FFF0, &g_Str_EVA_CannotDeployHere.RussianVoice[3], &v4[63]); /*0x4ad84f*/
  ScenarioClass::Write_Waypoints((ScenarioClass *)dword_A8B230, a2); /*0x4ad85b*/
  INIClass::ClearSection((int *)a2, (int)g_INI_Key_CellTags, 0); /*0x4ad86a*/
  for ( i = 0; (int)i < 512000; i += 1000 ) /*0x4ad86f*/
  {
    for ( j = 0; j < 512; ++j ) /*0x4ad873*/
    {
      v14[0] = j; /*0x4ad87c*/
      v14[1] = v3; /*0x4ad881*/
      if ( *((_DWORD *)CellCoord::To_CellObj(v4, v14) + 15) ) /*0x4ad88b*/
      {
        v15[0] = j; /*0x4ad896*/
        v15[1] = v3; /*0x4ad89e*/
        v6 = *((_DWORD *)CellCoord::To_CellObj(v4, v15) + 15); /*0x4ad8a8*/
        if ( v6 && *(_DWORD *)(v6 + 36) ) /*0x4ad8af*/
        {
          wsprintfA(v17, "%d", &i[j]); /*0x4ad8c7*/
          INIClass::SetString(a2, g_INI_Key_CellTags, v17, (char *)(*(_DWORD *)(v6 + 36) + 36)); /*0x4ad8e4*/
        }
        v4 = (CellCoord *)v16; /*0x4ad8e9*/
      }
    }
    ++v3; /*0x4ad8fe*/
  }
  v7 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 32))(DSurface_Alternate); /*0x4ad92b*/
  v8 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 31))(DSurface_Alternate) * v7; /*0x4ad932*/
  v9 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 28))(DSurface_Alternate) * v8; /*0x4ad940*/
  v10 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x4ad94d*/
          DSurface_Alternate,
          0,
          0);
  v18.Pipe_field_0x04 = 0; /*0x4ad956*/
  v18.Pipe_field_0x08 = 0; /*0x4ad95a*/
  *(_DWORD *)v18.__pad_0 = &Pipe::`vftable'; /*0x4ad95e*/
  Buffer::Init((Buffer *)&v18.Pipe_field_0x0C, v10, v9); /*0x4ad966*/
  v19 = 0; /*0x4ad96f*/
  *(_DWORD *)v18.__pad_0 = &BufferPipe::`vftable'; /*0x4ad979*/
  v11 = MapClass::DecompressCellData((MapClass *)&stru_87F5F0.__pad_58[416], (int)&v18); /*0x4ad990*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack, 0); /*0x4ad992*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack2, 0); /*0x4ad9a0*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack3, 0); /*0x4ad9af*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack4, 0); /*0x4ad9be*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack5, 0); /*0x4ad9cc*/
  if ( v11 > 0 ) /*0x4ad9d3*/
  {
    v12 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x4ad9e2*/
            DSurface_Alternate,
            0,
            0);
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)aIsomappack5, v12, v11); /*0x4ad9ee*/
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x4ad9fb*/
  }
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x4ada06*/
  Vector::Clear((int)&v18.Pipe_field_0x0C); /*0x4ada0d*/
  return Pipe::Dtor(&v18); /*0x4ada1b*/
}



// ==== 0x004ADA30  ScenarioClass::GetScenarioData  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::GetScenarioData(ScenarioClass *this, _DWORD *a2, int a3)
{
  int *v4; // esi
  int v5; // edi
  int v6; // ebp
  int *v7; // ebp
  char *v8; // esi
  int v9; // edi
  int i; // eax
  _BYTE *v11; // esi
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+18h] [ebp-8h] BYREF
  int v19; // [esp+1Ch] [ebp-4h] BYREF

  *a2 = dword_A8B230[130].uniqueId; /*0x4ada48*/
  a2[1] = this->nextScenario[59]; /*0x4ada5a*/
  a2[2] = this->nextScenario[60]; /*0x4ada5f*/
  a2[3] = this->nextScenario[61]; /*0x4ada65*/
  a2[4] = this->nextScenario[62]; /*0x4ada70*/
  v4 = a2 + 10; /*0x4ada7d*/
  v5 = 0; /*0x4ada82*/
  a2[5] = this->nextScenario[63]; /*0x4ada84*/
  v17 = 0; /*0x4ada86*/
  a2[6] = this->nextScenario[64]; /*0x4ada8d*/
  a2[7] = this->altNextScenario[0]; /*0x4ada93*/
  a2[8] = this->altNextScenario[1]; /*0x4ada99*/
  do /*0x4adafc*/
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v5) ) /*0x4adaa3*/
    {
      *v4 = v5; /*0x4adab1*/
      v6 = 125 * *((__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v18, v5) + 1); /*0x4adad8*/
      v4 += 2; /*0x4adae3*/
      *(v4 - 1) = *(__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, v5) + 8 * v6; /*0x4adaed*/
      ++v17; /*0x4adaf1*/
    }
    ++v5; /*0x4adaf5*/
  }
  while ( v5 < 702 ); /*0x4adafc*/
  v7 = v4; /*0x4adb06*/
  a2[9] = v17; /*0x4adb0a*/
  v8 = (char *)(v4 + 1); /*0x4adb0c*/
  v9 = 0; /*0x4adb0f*/
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4adb11*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x4adb1f*/
  {
    *(_DWORD *)v8 = *(_DWORD *)(i + 36); /*0x4adb24*/
    v11 = v8 + 4; /*0x4adb29*/
    *(_DWORD *)v11 = *(_DWORD *)(i + 56); /*0x4adb2c*/
    v11 += 4; /*0x4adb34*/
    *v11++ = *(_BYTE *)(i + 282); /*0x4adb37*/
    *v11++ = *(_BYTE *)(i + 283); /*0x4adb40*/
    *v11++ = *(_BYTE *)(i + 284); /*0x4adb49*/
    *(_DWORD *)v11 = *(_DWORD *)(i + 68); /*0x4adb4f*/
    v11 += 4; /*0x4adb57*/
    *v11++ = *(_BYTE *)(i + 286); /*0x4adb5a*/
    v12 = 0; /*0x4adb63*/
    *v11 = *(_BYTE *)(i + 281); /*0x4adb65*/
    v13 = *(_DWORD *)(i + 60); /*0x4adb67*/
    v14 = v11 + 1; /*0x4adb6a*/
    if ( v13 ) /*0x4adb6d*/
    {
      v15 = *(_DWORD *)(v13 + 36); /*0x4adb6f*/
      if ( v15 ) /*0x4adb74*/
        v12 = v15; /*0x4adb76*/
    }
    *v14 = v12; /*0x4adb78*/
    v8 = (char *)(v14 + 1); /*0x4adb7a*/
    ++v9; /*0x4adb7f*/
  }
  *v7 = v9; /*0x4adb8d*/
  return v8 - (char *)a2; /*0x4adb92*/
}



// ==== 0x004ADBA0  ScenarioClass::ProcessGame  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::ProcessGame(ScenarioClass *this, _DWORD *a2)
{
  int *v3; // ecx
  int *v4; // esi
  int v5; // ebx
  int v6; // ecx
  int *v7; // esi
  int result; // eax
  int v9; // edx
  char *v10; // esi
  char v11; // cl
  char v12; // cl
  int v13; // edx
  char v14; // cl
  int v15; // [esp+8h] [ebp-4h]
  _DWORD *v16; // [esp+10h] [ebp+4h]

  dword_A8B230[130].uniqueId = *a2; /*0x4adbba*/
  this->nextScenario[59] = a2[1]; /*0x4adbc7*/
  this->nextScenario[60] = a2[2]; /*0x4adbcc*/
  this->nextScenario[61] = a2[3]; /*0x4adbd2*/
  v3 = &this->nextScenario[63]; /*0x4adbd5*/
  this->nextScenario[62] = a2[4]; /*0x4adbde*/
  v4 = a2 + 10; /*0x4adbe8*/
  *v3 = a2[5]; /*0x4adbeb*/
  v3[1] = a2[6]; /*0x4adbf0*/
  v3[2] = a2[7]; /*0x4adbf6*/
  v3[3] = a2[8]; /*0x4adbfc*/
  if ( (int)a2[9] > 0 ) /*0x4adc04*/
  {
    v15 = a2[9]; /*0x4adc08*/
    do /*0x4adc56*/
    {
      v5 = *v4; /*0x4adc0c*/
      v6 = v4[1]; /*0x4adc0e*/
      v4 += 2; /*0x4adc1c*/
      LOWORD(v16) = v6 % 1000; /*0x4adc26*/
      HIWORD(v16) = v6 / 1000; /*0x4adc37*/
      ScenarioClass::Set_Waypoint((char *)dword_A8B230, v5, (int)v16); /*0x4adc48*/
      --v15; /*0x4adc52*/
    }
    while ( v15 ); /*0x4adc56*/
  }
  v7 = v4 + 1; /*0x4adc5c*/
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4adc5f*/
  for ( result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x4adc6d*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    v9 = v7[1]; /*0x4adc6f*/
    v10 = (char *)(v7 + 2); /*0x4adc75*/
    *(_DWORD *)(result + 56) = v9; /*0x4adc78*/
    v11 = *v10++; /*0x4adc7b*/
    *(_BYTE *)(result + 282) = v11; /*0x4adc7e*/
    LOBYTE(v9) = *v10++; /*0x4adc84*/
    *(_BYTE *)(result + 283) = v9; /*0x4adc87*/
    v12 = *v10++; /*0x4adc8d*/
    *(_BYTE *)(result + 284) = v12; /*0x4adc90*/
    v13 = *(_DWORD *)v10; /*0x4adc96*/
    v10 += 4; /*0x4adc98*/
    *(_DWORD *)(result + 68) = v13; /*0x4adc9b*/
    v14 = *v10++; /*0x4adc9e*/
    *(_BYTE *)(result + 286) = v14; /*0x4adca1*/
    LOBYTE(v13) = *v10; /*0x4adca9*/
    v7 = (int *)(v10 + 5); /*0x4adcab*/
    *(_BYTE *)(result + 281) = v13; /*0x4adcae*/
  }
  return result; /*0x4adcbd*/
}



// ==== 0x004ADCD0  Radar::UpdateReveal  this=Radar  sig=csp ====
int __stdcall Radar::UpdateReveal(char a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9[3]; // [esp+14h] [ebp-24h] BYREF
  int v10[3]; // [esp+20h] [ebp-18h] BYREF
  int v11[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = dword_A8EC88; /*0x4adcd4*/
  v3 = 0; /*0x4adcdb*/
  if ( dword_A8EC88 > 0 ) /*0x4adcdf*/
  {
    while ( 1 ) /*0x4adceb*/
    {
      result = (int)dword_A8EC7C; /*0x4adceb*/
      v5 = *((_DWORD *)dword_A8EC7C + v3); /*0x4adcf0*/
      if ( !v5 ) /*0x4adcf5*/
        goto LABEL_20; /*0x4adcf5*/
      LOBYTE(result) = *(_BYTE *)(v5 + 129); /*0x4adcfb*/
      if ( (_BYTE)result ) /*0x4add03*/
        goto LABEL_20; /*0x4add03*/
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 44))(*((_DWORD *)dword_A8EC7C + v3)); /*0x4add0d*/
      if ( result == 6 ) /*0x4add13*/
      {
        LOBYTE(result) = a1; /*0x4add15*/
        if ( a1 ) /*0x4add1b*/
          goto LABEL_20; /*0x4add1b*/
      }
      result = House::IsHumanPlayer(*(#375 **)(v5 + 540)); /*0x4add27*/
      if ( (_BYTE)result ) /*0x4add2e*/
        break; /*0x4add2e*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 /*0x4addce*/
        && HIBYTE(dword_8871E0[1].?[2])
        && (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v5 + 540), dword_A83D4C) )
      {
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 1160))(v5, 0, a2, 0, 0, 0); /*0x4adde4*/
        v10[0] = *(_DWORD *)(v5 + 156); /*0x4addf4*/
        v7 = *(_DWORD *)(v5 + 608); /*0x4addf8*/
        v10[1] = *(_DWORD *)(v5 + 160); /*0x4ade04*/
        v10[2] = *(_DWORD *)(v5 + 164); /*0x4ade18*/
        result = MapClass::RevealArea2(&dword_87F7E8, v10, 0, v7 + 3, 0); /*0x4ade1c*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 /*0x4ade4c*/
             && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5) + 1518)
             && !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(v5 + 540)) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, int, #375 *, _DWORD))(*(_DWORD *)v5 + 1160))( /*0x4ade68*/
          v5,
          0,
          0,
          1,
          dword_A83D4C,
          0);
        v11[0] = *(_DWORD *)(v5 + 156); /*0x4ade78*/
        v8 = *(_DWORD *)(v5 + 608) + 3; /*0x4ade85*/
        v11[1] = *(_DWORD *)(v5 + 160); /*0x4ade88*/
        v11[2] = *(_DWORD *)(v5 + 164); /*0x4ade9c*/
        result = MapClass::RevealArea2(&dword_87F7E8, v11, 0, v8, 0); /*0x4adea0*/
      }
      else
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x4adeab*/
        if ( *(_BYTE *)(result + 3281) ) /*0x4adeb1*/
          goto LABEL_19; /*0x4adeb9*/
      }
LABEL_20:
      if ( ++v3 >= v2 ) /*0x4adec8*/
        return result; /*0x4adec8*/
    }
    LOBYTE(result) = *(_BYTE *)(v5 + 1051); /*0x4add30*/
    if ( !(_BYTE)result ) /*0x4add38*/
      goto LABEL_20; /*0x4add38*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 1160))(v5, 0, 0, 0, 0, 0); /*0x4add4c*/
    v9[0] = *(_DWORD *)(v5 + 156); /*0x4add5c*/
    v6 = *(_DWORD *)(v5 + 608) + 3; /*0x4add69*/
    v9[1] = *(_DWORD *)(v5 + 160); /*0x4add6c*/
    v9[2] = *(_DWORD *)(v5 + 164); /*0x4add78*/
    MapClass::RevealArea2(&dword_87F7E8, v9, 0, v6, 0); /*0x4add84*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x4add8d*/
    if ( !*(_BYTE *)(result + 3281) ) /*0x4add93*/
      goto LABEL_20; /*0x4add9b*/
LABEL_19:
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1044))(v5); /*0x4adebb*/
    goto LABEL_20; /*0x4adebf*/
  }
  return result; /*0x4aded0*/
}



// ==== 0x004ADEE0  HouseClass::ResetObjectOrders  this=HouseClass  sig=csp ====
int __stdcall HouseClass::ResetObjectOrders(char a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // esi

  v2 = dword_A8EC88; /*0x4adee1*/
  v3 = 0; /*0x4adee8*/
  if ( dword_A8EC88 > 0 ) /*0x4adeec*/
  {
    while ( 1 ) /*0x4adef8*/
    {
      result = (int)dword_A8EC7C; /*0x4adef8*/
      v5 = *((_DWORD *)dword_A8EC7C + v3); /*0x4adefd*/
      if ( !v5 ) /*0x4adf02*/
        goto LABEL_16; /*0x4adf02*/
      LOBYTE(result) = *(_BYTE *)(v5 + 129); /*0x4adf08*/
      if ( (_BYTE)result ) /*0x4adf10*/
        goto LABEL_16; /*0x4adf10*/
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 44))(*((_DWORD *)dword_A8EC7C + v3)); /*0x4adf1a*/
      if ( result == 6 ) /*0x4adf20*/
      {
        LOBYTE(result) = a1; /*0x4adf22*/
        if ( a1 ) /*0x4adf28*/
          goto LABEL_16; /*0x4adf28*/
      }
      result = House::IsHumanPlayer(*(#375 **)(v5 + 540)); /*0x4adf34*/
      if ( (_BYTE)result ) /*0x4adf3b*/
        break; /*0x4adf3b*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 /*0x4adfa5*/
        && HIBYTE(dword_8871E0[1].?[2])
        && (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v5 + 540), dword_A83D4C) )
      {
        result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 1164))(v5, 0, a2, 0, 0); /*0x4adfb9*/
      }
      else
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x4adfc5*/
        if ( *(_BYTE *)(result + 3281) ) /*0x4adfcb*/
          goto LABEL_15; /*0x4adfd3*/
      }
LABEL_16:
      if ( ++v3 >= v2 ) /*0x4adfe2*/
        return result; /*0x4adfe2*/
    }
    LOBYTE(result) = *(_BYTE *)(v5 + 1051); /*0x4adf3d*/
    if ( !(_BYTE)result ) /*0x4adf45*/
      goto LABEL_16; /*0x4adf45*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 1164))(v5, 0, 0, 0, 0); /*0x4adf57*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x4adf61*/
    if ( !*(_BYTE *)(result + 3281) ) /*0x4adf67*/
      goto LABEL_16; /*0x4adf6f*/
LABEL_15:
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1048))(v5); /*0x4adfd5*/
    goto LABEL_16; /*0x4adfd9*/
  }
  return result; /*0x4adfea*/
}



// ==== 0x004ADFF0  HouseClass::RevealShroudForAllies  this=MouseClass  sig=csp ====
int __stdcall HouseClass_RevealShroudForAllies(char a1, int a2)
{
  int result; // eax
  int i; // ebp
  #375 **v4; // esi

  result = dword_8A03A0; /*0x4adff0*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x4adffa*/
  {
    v4 = *(#375 ***)(dword_8A0394 + 4 * i); /*0x4ae010*/
    if ( v4 /*0x4ae02b*/
      && ((_BYTE)v4[5] & 1) != 0
      && ((*((int (__thiscall **)(_DWORD))*v4 + 11))(*(_DWORD *)(dword_8A0394 + 4 * i)) != 6 || !a1) )
    {
      if ( (unsigned __int8)House::IsHumanPlayer(v4[135]) ) /*0x4ae033*/
      {
        if ( *((_BYTE *)v4 + 1051) ) /*0x4ae03c*/
          (*((void (__thiscall **)(#375 **, _DWORD, int))*v4 + 72))(v4, 0, a2); /*0x4ae04d*/
      }
      else if ( (*((int (__thiscall **)(#375 **))*v4 + 11))(v4) == 6 /*0x4ae07d*/
             && HIBYTE(dword_8871E0[1].?[2])
             && (unsigned __int8)HouseClass::IsAlliedWith(v4[135], dword_A83D4C) )
      {
        (*((void (__thiscall **)(#375 **, int, _DWORD))*v4 + 72))(v4, a2, 0); /*0x4ae08d*/
      }
    }
    result = dword_8A03A0; /*0x4ae093*/
  }
  return result; /*0x4ae0a4*/
}



// ==== 0x004AE290  TacticalClass::InterpolateView  this=TacticalClass  sig=csp ====
int TacticalClass::InterpolateView(TacticalClass *this)
{
  int result; // eax
  int v2; // ebp
  int v3; // edi
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int v8; // ebx
  bool v9; // zf
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // eax
  int *v13; // edx
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // eax
  int v18; // [esp+8h] [ebp-40h]
  int v19; // [esp+8h] [ebp-40h]
  int v20; // [esp+Ch] [ebp-3Ch] BYREF
  int v21; // [esp+10h] [ebp-38h]
  int v22; // [esp+14h] [ebp-34h]
  int v23; // [esp+18h] [ebp-30h]
  int v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h]
  int v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  int v28; // [esp+2Ch] [ebp-1Ch]
  _DWORD v29[3]; // [esp+30h] [ebp-18h] BYREF
  int v30[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x4ae295*/
  if ( *(int *)&stru_A8EB00.?[228] > 0 ) /*0x4ae29f*/
  {
    v3 = 0; /*0x4ae2a7*/
    v4 = 0; /*0x4ae2a9*/
    v5 = 0; /*0x4ae2ab*/
    v20 = 0; /*0x4ae2af*/
    v21 = 0; /*0x4ae2b3*/
    v22 = 0; /*0x4ae2b7*/
    v6 = *(_DWORD **)&stru_A8EB00.?[216]; /*0x4ae2bd*/
    v18 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x4ae2c2*/
    do /*0x4ae2fc*/
    {
      v7 = (_DWORD *)*v6++; /*0x4ae2c6*/
      v29[0] = v7[39]; /*0x4ae2d5*/
      v3 += v29[0]; /*0x4ae2d9*/
      v4 += v7[40]; /*0x4ae2e0*/
      v8 = v7[41]; /*0x4ae2e6*/
      v20 = v3; /*0x4ae2e9*/
      v5 += v8; /*0x4ae2ed*/
      v9 = v18 == 1; /*0x4ae2ef*/
      v21 = v4; /*0x4ae2f0*/
      v22 = v5; /*0x4ae2f4*/
      --v18; /*0x4ae2f8*/
    }
    while ( !v9 ); /*0x4ae2fc*/
    v10 = 0; /*0x4ae2fe*/
    v26 = v3; /*0x4ae302*/
    v27 = v4; /*0x4ae306*/
    v28 = v5; /*0x4ae30a*/
    if ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x4ae30e*/
    {
      v3 /= *(int *)&stru_A8EB00.?[228]; /*0x4ae315*/
      v20 = v3; /*0x4ae31c*/
      v4 /= *(int *)&stru_A8EB00.?[228]; /*0x4ae320*/
      v21 = v4; /*0x4ae327*/
      v5 /= *(int *)&stru_A8EB00.?[228]; /*0x4ae32b*/
      v22 = v5; /*0x4ae32d*/
    }
    if ( *(int *)&stru_A8EB00.?[228] > 2 ) /*0x4ae334*/
    {
      v23 = 0; /*0x4ae33c*/
      v24 = 0; /*0x4ae340*/
      v25 = 0; /*0x4ae344*/
      v19 = 0; /*0x4ae348*/
      if ( *(int *)&stru_A8EB00.?[228] > 0 ) /*0x4ae34c*/
      {
        while ( 1 ) /*0x4ae384*/
        {
          v11 = Coord::Subtract( /*0x4ae384*/
                  (Coord *)v30,
                  v3 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v10) + 156),
                  v4 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v10) + 160),
                  v5 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v10) + 164));
          v29[0] = *v11; /*0x4ae38b*/
          v29[1] = v11[1]; /*0x4ae396*/
          v29[2] = v11[2]; /*0x4ae39d*/
          v12 = Coord::Length((Coord *)v29); /*0x4ae3a1*/
          if ( v12 > v19 ) /*0x4ae3aa*/
          {
            v19 = v12; /*0x4ae3b2*/
            v13 = (int *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v10) + 156); /*0x4ae3b9*/
            v23 = *v13; /*0x4ae3c1*/
            v24 = v13[1]; /*0x4ae3c8*/
            v25 = v13[2]; /*0x4ae3cf*/
          }
          v2 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x4ae3d3*/
          if ( ++v10 >= *(int *)&stru_A8EB00.?[228] ) /*0x4ae3dc*/
            break; /*0x4ae3dc*/
          v4 = v21; /*0x4ae354*/
          v5 = v22; /*0x4ae358*/
          v3 = v20; /*0x4ae35c*/
        }
      }
      v14 = v2 - 1; /*0x4ae3fe*/
      if ( v2 == 1 ) /*0x4ae405*/
      {
        v15 = 0; /*0x4ae407*/
        v16 = 0; /*0x4ae409*/
        v17 = 0; /*0x4ae40b*/
      }
      else
      {
        v15 = (v26 - v23) / v14; /*0x4ae412*/
        v16 = (v27 - v24) / v14; /*0x4ae419*/
        v17 = (v28 - v25) / v14; /*0x4ae41e*/
      }
      v20 = v15; /*0x4ae420*/
      v21 = v16; /*0x4ae424*/
      v22 = v17; /*0x4ae428*/
    }
    return Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, &v20); /*0x4ae437*/
  }
  return result; /*0x4ae43e*/
}



// ==== 0x004AE450  TacticalClass::Initialize  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::Initialize(TacticalClass *this)
{
  int *v2; // eax

  TheatreClass::InitView(); /*0x4ae453*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x4ae45d*/
  v2 = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x4ae467*/
  for ( g_MissionQueueFrame.briefing[143] = 0; /*0x4ae478*/
        v2;
        v2 = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    TacticalClass::SetView(v2, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4ae494*/
  }
  return (*((int (__thiscall **)(TacticalClass *, int))this->AbstractClass + 14))(this, 1); /*0x4ae4b0*/
}



// ==== 0x004AE4C0  MapClass::UpdateLightingPostProcess  this=MapClass  sig=ida-proto ====
int sub_4AE4C0()
{
  int result; // eax

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x4ae4c5*/
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x4ae4d6*/
    TacticalMap::ComputeScreenTint(result); /*0x4ae4da*/
  return result; /*0x4ae4ed*/
}



// ==== 0x004AE4F0  DisplayClass::Draw  this=DisplayClass  sig=csp ====
wchar_t *__thiscall DisplayClass::Draw(DisplayClass *this, int a2)
{
  int v3; // esi
  void *v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  wchar_t *result; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  CellClass *v11; // eax
  CellClass *v12; // eax
  void *Object_field_0x30; // [esp-4h] [ebp-38h]
  bool v14[4]; // [esp+8h] [ebp-2Ch] BYREF
  int v15; // [esp+Ch] [ebp-28h] BYREF
  __int16 v16[2]; // [esp+10h] [ebp-24h] BYREF
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v18[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v19[3]; // [esp+28h] [ebp-Ch] BYREF

  if ( a2 < 500 /*0x4ae513*/
    || a2 > 900
    || (*((unsigned __int8 (__thiscall **)(DisplayClass *))this->DisplayClass_field_0x0 + 26))(this) )
  {
    return 0; /*0x4ae513*/
  }
  v3 = DSurface_ViewBounds.field_0; /*0x4ae524*/
  v4 = DSurface_ViewBounds.field_4; /*0x4ae531*/
  v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4ae538*/
                   stru_887598.lineTrailer,
                   v18);
  v6 = v5[1]; /*0x4ae54a*/
  v17[0] = *v5 - v3; /*0x4ae54d*/
  v17[1] = v6 - (_DWORD)v4; /*0x4ae557*/
  Tactical::MouseOver(v17, v16, v19, &v15, &v14[3], (bool *)&a2); /*0x4ae571*/
  if ( LOBYTE(stru_A8EB00.__pad_CD4[1]) ) /*0x4ae57e*/
  {
    swprintf(&word_8A0630, (const size_t)aDD_2, (const wchar_t *const)(v19[0] / 256), v19[1] / 256); /*0x4ae5ac*/
    return &word_8A0630; /*0x4ae5be*/
  }
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19)->copyFlags & 8) == 0 && g_hWnd ) /*0x4ae5e0*/
    return GetStringCSF(aTxtShadow, 0, aDRa2mdpostDisp, 5048); /*0x4ae5fd*/
  v8 = v15; /*0x4ae600*/
  if ( !v15 ) /*0x4ae606*/
    return 0; /*0x4ae606*/
  if ( (*(_BYTE *)(v15 + 20) & 1) != 0 ) /*0x4ae610*/
  {
    v9 = v15; /*0x4ae61c*/
    if ( !*(_BYTE *)(v15 + 1050) ) /*0x4ae616*/
    {
      if ( *(_DWORD *)(v15 + 544) == 2 ) /*0x4ae629*/
      {
        Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ae635*/
        v10 = (_DWORD *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)v15 + 72))(v18); /*0x4ae63b*/
        v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v10); /*0x4ae644*/
        if ( !(unsigned __int8)Cell::IsPassableOffset((Cell *)v11, (int)Object_field_0x30) ) /*0x4ae64b*/
          return 0; /*0x4ae64b*/
      }
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9) + 3226) ) /*0x4ae65e*/
        return 0; /*0x4ae666*/
      v8 = v15; /*0x4ae668*/
    }
  }
  else
  {
    v9 = 0; /*0x4ae697*/
  }
  if ( !v8 ) /*0x4ae66e*/
    return 0; /*0x4ae69b*/
  result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 144))(v8); /*0x4ae672*/
  if ( !v9 ) /*0x4ae67a*/
  {
    v12 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, v16); /*0x4ae683*/
    return (wchar_t *)CellClass::GetUIName(v12); /*0x4ae68a*/
  }
  return result; /*0x4ae5b9*/
}



// ==== 0x004AE6B0  DisplayClass::Render  this=DisplayClass  sig=csp ====
int DisplayClass::Render(DisplayClass *this)
{
  int result; // eax

  result = (int)dword_B73554; /*0x4ae6b0*/
  if ( dword_B73554 ) /*0x4ae6b7*/
  {
    result = CloseWindow(dword_B73554); /*0x4ae6ba*/
    dword_B73554 = 0; /*0x4ae6c0*/
  }
  return result; /*0x4ae6ca*/
}



// ==== 0x004AE6F0  DisplayClass::SetSurface  this=DisplayClass  sig=csp ====
int __stdcall DisplayClass::SetSurface(DisplayClass *this)
{
  LayerClass *v1; // esi
  int result; // eax

  v1 = &stru_8A0360; /*0x4ae6f6*/
  do /*0x4ae70c*/
  {
    result = LayerClass::Load(v1, this); /*0x4ae6fe*/
    v1 += 2; /*0x4ae703*/
  }
  while ( (int)v1 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4ae70c*/
  return result; /*0x4ae70e*/
}



// ==== 0x004AE720  DisplayClass::GetSurface  this=DisplayClass  sig=csp ====
int __stdcall DisplayClass::GetSurface(DisplayClass *this)
{
  LayerClass *v1; // esi
  int result; // eax

  v1 = &stru_8A0360; /*0x4ae726*/
  do /*0x4ae740*/
  {
    result = LayerClass::Save(v1, this); /*0x4ae72e*/
    if ( result < 0 ) /*0x4ae735*/
      break; /*0x4ae735*/
    v1 += 2; /*0x4ae737*/
  }
  while ( (int)v1 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4ae740*/
  return result; /*0x4ae742*/
}



// ==== 0x004AE750  ObjectClass::DispatchSelectionWaypointMove  this=ObjectClass  sig=csp ====
char __userpurge DispatchSelectionWaypointMove@<al>(int a1, int a2, int a3, int a4)
{
  _DWORD **v4; // eax
  _DWORD *v5; // eax
  wchar_t *v6; // ecx
  int i; // esi
  int v8; // ecx
  int v9; // ebp
  int v10; // esi
  int *v11; // edi
  int v12; // eax
  wchar_t *v13; // ebp
  int v14; // esi
  int *v15; // edi
  int v16; // eax
  int v17; // esi
  _DWORD *v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // esi
  _DWORD *v22; // edi
  int v23; // ebp
  int v24; // eax
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v27; // [esp+10h] [ebp-8h] BYREF
  int v28; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(v4) = byte_A8ED6B; /*0x4ae753*/
  v27 = -1; /*0x4ae761*/
  LOBYTE(v26) = 0; /*0x4ae765*/
  if ( byte_A8ED6B ) /*0x4ae769*/
    return (char)v4; /*0x4ae769*/
  a2 = *(_DWORD *)HouseClass::ClampToUsableCell(&v28, &a2); /*0x4ae78f*/
  v5 = Waypoint::FindByCell((char *)dword_A83D4C, &a2); /*0x4ae794*/
  if ( v5 ) /*0x4ae79b*/
    WaypointClass::FindOrCreate((char *)dword_A83D4C, (int)v5, &v27, &v26); /*0x4ae7ae*/
  v6 = dword_A8ECC8; /*0x4ae7b3*/
  v4 = (_DWORD **)dword_A8ECBC; /*0x4ae7b9*/
  for ( i = 0; i < (int)dword_A8ECC8; ++i ) /*0x4ae7c4*/
  {
    (*(void (__thiscall **)(_DWORD *, unsigned int, int))(*v4[i] + 420))(v4[i], v27, v26); /*0x4ae7d7*/
    v4 = (_DWORD **)dword_A8ECBC; /*0x4ae7dd*/
    v8 = *((_DWORD *)dword_A8ECBC + i); /*0x4ae7e2*/
    if ( v8 && (*(_BYTE *)(v8 + 20) & 4) != 0 ) /*0x4ae7f6*/
    {
      *(_BYTE *)(v8 + 1072) = 0; /*0x4ae7fa*/
      v4 = (_DWORD **)dword_A8ECBC; /*0x4ae800*/
    }
    v6 = dword_A8ECC8; /*0x4ae805*/
  }
  v9 = a1; /*0x4ae810*/
  if ( a1 ) /*0x4ae816*/
  {
    v10 = 0; /*0x4ae818*/
    if ( (int)v6 > 0 ) /*0x4ae81c*/
    {
      while ( 1 ) /*0x4ae82d*/
      {
        v11 = v4[v10]; /*0x4ae82d*/
        a1 = *v11; /*0x4ae836*/
        v12 = (*(int (__thiscall **)(int *, int, _DWORD, int, _DWORD))(a1 + 116))(v11, v9, 0, v9, 0); /*0x4ae83a*/
        (*(void (__thiscall **)(int *, int))(a3 + 324))(v11, v12); /*0x4ae844*/
        LOBYTE(v4) = (_BYTE)dword_A8ECC8; /*0x4ae84a*/
        ++v10; /*0x4ae851*/
        g_MoveFeedback = 0; /*0x4ae852*/
        if ( v10 >= (int)dword_A8ECC8 ) /*0x4ae85a*/
          break; /*0x4ae85a*/
        v4 = (_DWORD **)dword_A8ECBC; /*0x4ae824*/
      }
      g_MoveFeedback = 1; /*0x4ae85f*/
      return (char)v4; /*0x4ae86a*/
    }
LABEL_32:
    g_MoveFeedback = 1; /*0x4ae992*/
    return (char)v4; /*0x4ae993*/
  }
  if ( a3 == 1 || a3 == 51 ) /*0x4ae87d*/
  {
    v21 = 0; /*0x4ae94e*/
    if ( (int)v6 > 0 ) /*0x4ae952*/
    {
      while ( 1 ) /*0x4ae96b*/
      {
        v22 = v4[v21]; /*0x4ae96b*/
        v23 = *v22; /*0x4ae972*/
        v24 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(*v22 + 112))( /*0x4ae976*/
                v22,
                &a2,
                0,
                0,
                &a2,
                &a2,
                0);
        (*(void (__thiscall **)(_DWORD *, int))(v23 + 320))(v22, v24); /*0x4ae97c*/
        LOBYTE(v4) = (_BYTE)dword_A8ECC8; /*0x4ae982*/
        ++v21; /*0x4ae987*/
        g_MoveFeedback = 0; /*0x4ae98a*/
        if ( v21 >= (int)dword_A8ECC8 ) /*0x4ae990*/
          break; /*0x4ae990*/
        v4 = (_DWORD **)dword_A8ECBC; /*0x4ae956*/
      }
    }
    goto LABEL_32; /*0x4ae990*/
  }
  if ( a3 == 2 ) /*0x4ae886*/
  {
    v13 = v6; /*0x4ae888*/
    v14 = 0; /*0x4ae88a*/
    if ( (int)v6 <= 0 ) /*0x4ae88e*/
      goto LABEL_32; /*0x4ae88e*/
    while ( 1 ) /*0x4ae8a8*/
    {
      v15 = v4[v14]; /*0x4ae8a8*/
      a1 = *v15; /*0x4ae8b6*/
      v16 = (*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(a1 + 112))( /*0x4ae8ba*/
              v15,
              &a2,
              0,
              0,
              &a2,
              &a2,
              0);
      LOBYTE(v4) = (*(int (__thiscall **)(int *, int))(a4 + 320))(v15, v16); /*0x4ae8c4*/
      ++v14; /*0x4ae8cc*/
      g_MoveFeedback = 0; /*0x4ae8cf*/
      if ( v14 >= (int)v13 ) /*0x4ae8d5*/
        break; /*0x4ae8d5*/
      v4 = (_DWORD **)dword_A8ECBC; /*0x4ae896*/
    }
    g_MoveFeedback = 1; /*0x4ae8da*/
  }
  else
  {
    v17 = 0; /*0x4ae8e8*/
    if ( (int)v6 <= 0 ) /*0x4ae8ec*/
      goto LABEL_32; /*0x4ae8ec*/
    while ( 1 ) /*0x4ae8fc*/
    {
      a1 = -1; /*0x4ae8fc*/
      v18 = v4[v17]; /*0x4ae916*/
      v19 = *v18; /*0x4ae91d*/
      v20 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(*v18 + 112))( /*0x4ae921*/
              v18,
              &a2,
              0,
              0,
              &a2,
              &a1,
              0);
      (*(void (__thiscall **)(_DWORD *, int))(v19 + 320))(v18, v20); /*0x4ae927*/
      LOBYTE(v4) = (_BYTE)dword_A8ECC8; /*0x4ae92d*/
      ++v17; /*0x4ae932*/
      g_MoveFeedback = 0; /*0x4ae935*/
      if ( v17 >= (int)dword_A8ECC8 ) /*0x4ae93b*/
        break; /*0x4ae93b*/
      v4 = (_DWORD **)dword_A8ECBC; /*0x4ae8f4*/
    }
    g_MoveFeedback = 1; /*0x4ae940*/
  }
  return (char)v4; /*0x4ae85e*/
}



// ==== 0x004AEA20  ObjectClass::method_4AEA20  this=ObjectClass  sig=csp ====
int __userpurge sub_4AEA20@<eax>(int a1@<ebx>, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // ebx
  int v8; // eax
  int result; // eax

  if ( a2 == -1 ) /*0x4aea27*/
    v2 = 0; /*0x4aea29*/
  else
    v2 = 8 * (a2 % 12); /*0x4aea35*/
  v3 = 0; /*0x4aea46*/
  v4 = *(_DWORD *)(dword_87F6C8 + 372) + 2; /*0x4aea48*/
  do /*0x4aeac1*/
  {
    v5 = (v3 + v2) % 256; /*0x4aea5b*/
    v6 = &byte_885180[3 * v5]; /*0x4aea5c*/
    v4 += 2; /*0x4aea63*/
    LOWORD(v5) = (unsigned __int8)((unsigned __int8)v6[2] >> g_BitMask_Red); /*0x4aea83*/
    LOWORD(a1) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v6) >> g_BitMask_Blue); /*0x4aea97*/
    v7 = a1 << g_BitMask_Green; /*0x4aea9b*/
    v8 = v7 | (v5 << g_BitShift_Blue); /*0x4aeaa3*/
    LOWORD(v7) = (unsigned __int8)((unsigned __int8)*(_WORD *)v6 >> g_BitShift_Green_0); /*0x4aeab1*/
    a1 = v7 << g_BitShift_Red; /*0x4aeab5*/
    result = a1 | v8; /*0x4aeab7*/
    ++v3; /*0x4aeab9*/
    *(_WORD *)(v4 - 2) = result; /*0x4aeaba*/
  }
  while ( v3 < 8 ); /*0x4aeac1*/
  return result; /*0x4aeac6*/
}



// ==== 0x004AEAD0  DisplayClass::ExitMode  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::ExitMode(DisplayClass *this)
{
  if ( g_TacticalClass_Instance ) /*0x4aeadb*/
    TacticalClass::ResetScrollBounds((TacticalClass *)g_TacticalClass_Instance); /*0x4aeadd*/
  this->__pad_11B4[27] = 0; /*0x4aeae2*/
  LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4aeae9*/
  stru_A8EB00.?[441] = 1; /*0x4aeaf0*/
  return (*((int (__thiscall **)(DisplayClass *, _DWORD, _DWORD))this->DisplayClass_field_0x0 + 18))(this, 0, 0); /*0x4aeb02*/
}



// ==== 0x004AEB10  MapClass::GetScrollMode  this=MapClass  sig=csp ====
int __thiscall MapClass::GetScrollMode(MapClass *this)
{
  int result; // eax

  if ( !LOBYTE(this->MapClass_field_0x119C) ) /*0x4aeb10*/
    return 0; /*0x4aeb10*/
  result = (int)this->MapClass_field_0x11A0; /*0x4aeb1a*/
  if ( !result ) /*0x4aeb22*/
    return 0; /*0x4aeb24*/
  return result; /*0x4aeb26*/
}



// ==== 0x004AEB30  MapClass::SetScrollMode  this=MapClass  sig=csp ====
int __thiscall MapClass::SetScrollMode(int this, int a2)
{
  int result; // eax

  result = a2; /*0x4aeb30*/
  *(_DWORD *)(this + 4512) = a2; /*0x4aeb36*/
  LOBYTE(result) = a2 != 0; /*0x4aeb3c*/
  *(_BYTE *)(this + 4508) = a2 != 0; /*0x4aeb3f*/
  return result; /*0x4aeb45*/
}



// ==== 0x004AEBA0  GadgetClass::COMStub_Return0  this=GadgetClass  sig=csp ====
int CheckListClass::COMStub_Return0(GadgetClass *this)
{
  return 0; /*0x4aeba2*/
}



// ==== 0x004AEBB0  TacticalClass_DisplayClass::updateRenderState  this=TacticalClass@DisplayClass  sig=csp ====
_DWORD *__thiscall DisplayClass::updateRenderState(TacticalClass_DisplayClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x4aebb3*/
  if ( (a2 & 1) != 0 ) /*0x4aebbd*/
    __3_YAXPAX_Z(this); /*0x4aebc0*/
  return this; /*0x4aebca*/
}



// ==== 0x004AEBD0  GScreenClass::StubReturnFalse  this=GScreenClass  sig=csp ====
void __stdcall InputManager_ProcessEvents::StubReturnFalse(GScreenClass *this)
{
  ; /*0x4aebd0*/
}



// ==== 0x004AEBE0  MapClass::Stub  this=MapClass  sig=csp ====
char InputManager_ProcessEvents::Stub(MapClass *this)
{
  return 0; /*0x4aebe2*/
}



// ==== 0x004AEBF0  DisplayClass::Read  this=DisplayClass  sig=csp ====
char *__thiscall DisplayClass::Read(DisplayClass *this, char a2)
{
  MapClass::Destruct((char *)this); /*0x4aebf3*/
  if ( (a2 & 1) != 0 ) /*0x4aebfd*/
    __3_YAXPAX_Z(this); /*0x4aec00*/
  return (char *)this; /*0x4aec0a*/
}



// ==== 0x004AEC10  Straw::QueryInterface  this=Straw  sig=csp ====
int *__thiscall Straw::QueryInterface(Straw *this, char a2)
{
  Straw::Dtor(this); /*0x4aec13*/
  if ( (a2 & 1) != 0 ) /*0x4aec1d*/
    __3_YAXPAX_Z(this); /*0x4aec20*/
  return (int *)this->__pad_0; /*0x4aec2a*/
}



// ==== 0x004AEC30  BufferStraw::processDisplayMode  this=BufferStraw  sig=csp ====
int *__thiscall DisplayClass::processDisplayMode(BufferStraw *this, char a2)
{
  Vector::Clear((int)(this + 1)); /*0x4aec36*/
  Straw::Dtor((Straw *)this); /*0x4aec3d*/
  if ( (a2 & 1) != 0 ) /*0x4aec47*/
    __3_YAXPAX_Z(this); /*0x4aec4a*/
  return (int *)this->__pad_0; /*0x4aec54*/
}



// ==== 0x004AEC60  Surface::Construct  this=Surface  sig=csp ====
_DWORD *__thiscall Surface::Construct(Surface *this, int a2, int a3)
{
  this->Width = a2; /*0x4aec6a*/
  this->Height = a3; /*0x4aec6d*/
  *(_DWORD *)this->__pad_0 = &Surface_Vtable; /*0x4aec70*/
  return this->__pad_0; /*0x4aec76*/
}



// ==== 0x004AEC80  Pipe::QueryInterface  this=Pipe  sig=csp ====
int *__thiscall Pipe::QueryInterface(Pipe *this, char a2)
{
  Pipe::Dtor(this); /*0x4aec83*/
  if ( (a2 & 1) != 0 ) /*0x4aec8d*/
    __3_YAXPAX_Z(this); /*0x4aec90*/
  return (int *)this->__pad_0; /*0x4aec9a*/
}



// ==== 0x004AECA0  BufferPipe::initDisplay  this=BufferPipe  sig=csp ====
int *__thiscall GameClass::initDisplay(BufferPipe *this, char a2)
{
  Vector::Clear((int)(this + 1)); /*0x4aeca6*/
  Pipe::Dtor((Pipe *)this); /*0x4aecad*/
  if ( (a2 & 1) != 0 ) /*0x4aecb7*/
    __3_YAXPAX_Z(this); /*0x4aecba*/
  return (int *)this->__pad_0; /*0x4aecc4*/
}



// ==== 0x004AECD0  ObjectClass::method_4AECD0  this=char*  sig=csp ====
int __thiscall sub_4AECD0(LPCSTR lpLibFileName)
{
  int v1; // esi
  HMODULE LibraryA; // eax
  HMODULE v3; // edi
  FARPROC ProcAddress; // eax
  int v6; // [esp+8h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x4aecd6*/
  LibraryA = LoadLibraryA(lpLibFileName); /*0x4aecd8*/
  v3 = LibraryA; /*0x4aecde*/
  if ( LibraryA ) /*0x4aece2*/
  {
    ProcAddress = GetProcAddress(LibraryA, aDllgetversion); /*0x4aecea*/
    if ( ProcAddress ) /*0x4aecf2*/
    {
      v7 = 0; /*0x4aecff*/
      v6 = 20; /*0x4aed03*/
      v8 = 0; /*0x4aed0b*/
      v9 = 0; /*0x4aed0f*/
      v10 = 0; /*0x4aed13*/
      if ( ((int (__stdcall *)(int *))ProcAddress)(&v6) >= 0 ) /*0x4aed1b*/
        v1 = (unsigned __int16)v8 | ((unsigned __int16)v7 << 16); /*0x4aed33*/
    }
    FreeLibrary(v3); /*0x4aed36*/
  }
  return v1; /*0x4aed3e*/
}



// ==== 0x004AED50  sub_4AED50  this=-  sig=ida-proto ====
int sub_4AED50()
{
  dword_8A0748 = 0; /*0x4aed52*/
  dword_8A074C = 0; /*0x4aed57*/
  dword_8A0750 = 0; /*0x4aed5c*/
  dword_8A0754 = 0; /*0x4aed61*/
  return 0; /*0x4aed66*/
}



// ==== 0x004AED70  DrawToSurfaceSHP  this=-  sig=csp ====
int __fastcall DrawToSurfaceSHP(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        int *a5,
        int *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        unsigned int a14,
        int a15,
        int a16)
{
  int result; // eax
  int v17; // edi
  int *v20; // eax
  int *v21; // ecx
  int v22; // ecx
  int *FoundationSize; // eax
  int SubFile; // eax
  int v25; // edx
  int v26; // ebp
  int v27; // esi
  int *v28; // eax
  _DWORD *v29; // esi
  int *v30; // edx
  int v31; // ecx
  int v32; // eax
  int *v33; // eax
  int *SHPFrame; // eax
  int v35; // [esp-8h] [ebp-A8h]
  int v36; // [esp+Ch] [ebp-94h]
  int v37; // [esp+Ch] [ebp-94h]
  int v38; // [esp+10h] [ebp-90h]
  void (__thiscall ***v39)(_DWORD, int); // [esp+10h] [ebp-90h]
  int v40; // [esp+14h] [ebp-8Ch]
  int v41; // [esp+14h] [ebp-8Ch]
  int v42; // [esp+18h] [ebp-88h] BYREF
  int v43; // [esp+1Ch] [ebp-84h]
  int v44; // [esp+20h] [ebp-80h]
  int v45; // [esp+24h] [ebp-7Ch]
  int v46; // [esp+28h] [ebp-78h] BYREF
  int v47; // [esp+2Ch] [ebp-74h]
  int v48; // [esp+30h] [ebp-70h]
  int v49; // [esp+34h] [ebp-6Ch]
  int v50; // [esp+38h] [ebp-68h] BYREF
  int v51; // [esp+3Ch] [ebp-64h]
  int v52; // [esp+40h] [ebp-60h]
  int v53; // [esp+44h] [ebp-5Ch]
  int v54; // [esp+48h] [ebp-58h]
  int v55; // [esp+4Ch] [ebp-54h]
  int *v56; // [esp+50h] [ebp-50h]
  int v57; // [esp+54h] [ebp-4Ch]
  int v58; // [esp+58h] [ebp-48h]
  _DWORD *v59; // [esp+5Ch] [ebp-44h]
  int v60; // [esp+60h] [ebp-40h] BYREF
  int v61; // [esp+64h] [ebp-3Ch]
  int v62; // [esp+68h] [ebp-38h]
  int v63; // [esp+6Ch] [ebp-34h]
  int v64[5]; // [esp+70h] [ebp-30h] BYREF
  int v65[3]; // [esp+84h] [ebp-1Ch] BYREF
  int v66[4]; // [esp+90h] [ebp-10h] BYREF

  v17 = a3; /*0x4aed79*/
  v59 = (_DWORD *)a2; /*0x4aed86*/
  v56 = (int *)a1; /*0x4aed8a*/
  if ( a3 ) /*0x4aed8e*/
  {
    if ( *(_WORD *)a3 == 0xFFFF ) /*0x4aed98*/
    {
      LOBYTE(result) = *(_BYTE *)(a3 + 16); /*0x4aed9a*/
      if ( !(_BYTE)result ) /*0x4aed9f*/
        House::Constructor((char **)a3); /*0x4aeda3*/
      v17 = *(_DWORD *)(a3 + 12); /*0x4aeda8*/
    }
    if ( v17 ) /*0x4aedad*/
    {
      v20 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 120))(a1, &v50); /*0x4aedbc*/
      v66[0] = *v20; /*0x4aedc1*/
      v66[1] = v20[1]; /*0x4aedcf*/
      v66[2] = v20[2]; /*0x4aedd9*/
      v66[3] = v20[3]; /*0x4aedec*/
      v60 = *a6; /*0x4aedf5*/
      v61 = a6[1]; /*0x4aedfc*/
      v62 = a6[2]; /*0x4aee03*/
      v63 = a6[3]; /*0x4aee12*/
      v21 = ClipRectIntersection(&v50, a6, v66, 0, 0); /*0x4aee1f*/
      v60 = *v21; /*0x4aee23*/
      v61 = v21[1]; /*0x4aee2a*/
      result = v21[2]; /*0x4aee2e*/
      v62 = result; /*0x4aee31*/
      v22 = v21[3]; /*0x4aee35*/
      v63 = v22; /*0x4aee3a*/
      if ( result > 0 && v22 > 0 ) /*0x4aee46*/
      {
        *(_DWORD *)(a2 + 380) = a8; /*0x4aee5a*/
        v36 = *a5; /*0x4aee75*/
        v40 = a5[1]; /*0x4aee79*/
        FoundationSize = Building::GetFoundationSize(&v50, a4); /*0x4aee7d*/
        v42 = *FoundationSize; /*0x4aee84*/
        v43 = FoundationSize[1]; /*0x4aee8c*/
        v44 = FoundationSize[2]; /*0x4aee95*/
        v45 = FoundationSize[3]; /*0x4aee9c*/
        SubFile = MixFileClass::GetSubFile((char **)v17, a4); /*0x4aeea0*/
        v25 = *(__int16 *)(v17 + 4); /*0x4aeea9*/
        v26 = SubFile; /*0x4aeeb1*/
        v57 = *(__int16 *)(v17 + 2); /*0x4aeeb7*/
        v58 = v25; /*0x4aeec1*/
        Surface::Construct(v64, v44, v45); /*0x4aeec7*/
        v64[3] = 0; /*0x4aeed8*/
        v64[0] = (int)&XSurface_Vtable; /*0x4aeee3*/
        v64[4] = 1; /*0x4aeeeb*/
        Buffer::Init(v65, v26, v45 * v44); /*0x4aeef6*/
        v64[0] = (int)&BSurface_Vtable; /*0x4aeefb*/
        v27 = a16; /*0x4aef11*/
        v54 = a15; /*0x4aef18*/
        v55 = a16; /*0x4aef1e*/
        if ( a13 ) /*0x4aef22*/
        {
          v28 = Building::GetFoundationSize(&v50, a14); /*0x4aef37*/
          v46 = *v28; /*0x4aef3e*/
          v47 = v28[1]; /*0x4aef47*/
          v48 = v28[2]; /*0x4aef4e*/
          v49 = v28[3]; /*0x4aef55*/
          v29 = __2_YAPAXI_Z(0x20u); /*0x4aef5e*/
          if ( v29 ) /*0x4aef65*/
          {
            v38 = MixFileClass::GetSubFile((char **)a13, a14); /*0x4aef7c*/
            Surface::Construct(v29, v48, v49); /*0x4aef86*/
            v29[3] = 0; /*0x4aef8b*/
            *v29 = &XSurface_Vtable; /*0x4aef92*/
            v35 = v49 * v48; /*0x4aefa5*/
            v29[4] = 1; /*0x4aefaa*/
            Buffer::Init(v29 + 5, v38, v35); /*0x4aefb1*/
            *v29 = &BSurface_Vtable; /*0x4aefb6*/
            v39 = (void (__thiscall ***)(_DWORD, int))v29; /*0x4aefbc*/
            v27 = v55; /*0x4aefc0*/
          }
          else
          {
            v27 = v55; /*0x4aefc6*/
            v39 = 0; /*0x4aefca*/
          }
        }
        else
        {
          v46 = dword_8A0748; /*0x4aefe5*/
          v39 = 0; /*0x4aefee*/
          v47 = dword_8A074C; /*0x4aeff6*/
          v48 = dword_8A0750; /*0x4aeffa*/
          v49 = dword_8A0754; /*0x4aeffe*/
        }
        if ( (a7 & 0x200) != 0 ) /*0x4af00c*/
        {
          v36 += v57 / -2; /*0x4af027*/
          v40 += v58 / -2; /*0x4af034*/
        }
        if ( a13 ) /*0x4af03a*/
        {
          v54 = a15 - (v57 / 2 - v42); /*0x4af05e*/
          v27 -= v58 / 2 - v43; /*0x4af062*/
        }
        v37 = v42 + v36; /*0x4af072*/
        v41 = v43 + v40; /*0x4af07c*/
        v42 = 0; /*0x4af084*/
        v43 = 0; /*0x4af088*/
        if ( !a13 ) /*0x4af08c*/
          goto LABEL_21; /*0x4af08c*/
        v54 += v46; /*0x4af0a0*/
        v27 += v47; /*0x4af0a6*/
        v50 = -v54; /*0x4af0a8*/
        v51 = -v27; /*0x4af0b6*/
        v52 = v48; /*0x4af0be*/
        v53 = v49; /*0x4af0cb*/
        v30 = ClipRectIntersection(&v46, &v42, &v50, 0, 0); /*0x4af0d4*/
        v42 = *v30; /*0x4af0d8*/
        v43 = v30[1]; /*0x4af0df*/
        v44 = v30[2]; /*0x4af0e6*/
        v31 = v30[3]; /*0x4af0ea*/
        v45 = v31; /*0x4af0ef*/
        if ( v44 > 0 && v31 > 0 ) /*0x4af0fb*/
        {
LABEL_21:
          if ( a8 ) /*0x4af10a*/
          {
            v32 = a7; /*0x4af10c*/
            LOBYTE(v32) = a7 | 0x10; /*0x4af113*/
            a7 = v32; /*0x4af115*/
          }
          if ( Helper_69E900((char **)v17, a4) ) /*0x4af126*/
          {
            v33 = (int *)LightConvertClass::SelectRLEBlitter(v59, a7); /*0x4af13f*/
            if ( v33 ) /*0x4af146*/
            {
              v50 = v37; /*0x4af154*/
              v51 = v41; /*0x4af15c*/
              v52 = v44; /*0x4af164*/
              v53 = v45; /*0x4af16f*/
              BlitterRLEBlitSHP( /*0x4af1bf*/
                (int)v56,
                &v60,
                &v50,
                (int)v64,
                &v42,
                &v42,
                v33,
                a9,
                a10,
                a11,
                0,
                (int)v39,
                v54,
                v27,
                a12);
            }
          }
          else
          {
            SHPFrame = (int *)BuildingClass::GetSHPFrame(v59, a7); /*0x4af1d5*/
            if ( SHPFrame ) /*0x4af1dc*/
            {
              v51 = 0; /*0x4af1e6*/
              v50 = 0; /*0x4af1ee*/
              v46 = v37; /*0x4af1f6*/
              v47 = v41; /*0x4af1fe*/
              v48 = v44; /*0x4af206*/
              v49 = v45; /*0x4af211*/
              v52 = v64[1]; /*0x4af261*/
              v53 = v64[2]; /*0x4af265*/
              BlitterCopySHP(v56, &v60, &v46, v64, (int)&v50, &v42, SHPFrame, a9, a10, a11, a12, 0); /*0x4af269*/
            }
          }
        }
        if ( v39 ) /*0x4af275*/
          (**v39)(v39, 1); /*0x4af27b*/
        return Vector::Clear((int)v65); /*0x4af284*/
      }
    }
  }
  return result; /*0x4af289*/
}



// ==== 0x004AF2A0  BlitterDrawSHP  this=ObjectClass  sig=csp ====
int __fastcall BlitterDrawSHP(
        int *a1,
        int a2,
        int *a3,
        _DWORD *a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int *SHPFrame; // eax
  int v15; // edx
  int v16; // eax
  int result; // eax
  int *v18; // [esp-18h] [ebp-40h]
  int v19[4]; // [esp+8h] [ebp-20h] BYREF
  char v20[16]; // [esp+18h] [ebp-10h] BYREF

  SHPFrame = a8; /*0x4af2a0*/
  *(_DWORD *)(a2 + 380) = a7; /*0x4af2b1*/
  if ( !a8 )
    SHPFrame = (int *)BuildingClass::GetSHPFrame((BuildingClass *)a2, a7 != 0 ? 0x10 : 0);
  v15 = *a5; /*0x4af2d0*/
  v19[1] = a5[1]; /*0x4af2d5*/
  v19[0] = v15; /*0x4af2dd*/
  v19[2] = a4[2]; /*0x4af2e4*/
  v19[3] = a4[3]; /*0x4af2eb*/
  v18 = SHPFrame; /*0x4af308*/
  v16 = (*(int (__thiscall **)(int *, char *))(*a3 + 120))(a3, v20); /*0x4af313*/
  LOBYTE(result) = BlitterCopySHP(a1, a6, v19, a3, v16, a4, v18, a9, a10, a11, a12, a13); /*0x4af323*/
  return result; /*0x4af328*/
}



// ==== 0x004AF330  sub_4AF330  this=-  sig=ida-proto ====
void sub_4AF330()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4af33c*/
  dbl_8A0778 = Math::Sqrt(v0 + v0); /*0x4af34e*/
}



// ==== 0x004AF360  sub_4AF360  this=-  sig=ida-proto ====
void sub_4AF360()
{
  dbl_8A07C8 = dbl_8A0778 / 60.0; /*0x4af36c*/
}



// ==== 0x004AF380  sub_4AF380  this=-  sig=ida-proto ====
void sub_4AF380()
{
  dbl_8A07B0 = 1.0 / dbl_8A07C8; /*0x4af38c*/
}



// ==== 0x004AF3A0  sub_4AF3A0  this=-  sig=ida-proto ====
void sub_4AF3A0()
{
  dbl_8A07A8 = 0.0174532925199433 * 45.0; /*0x4af3ac*/
}



// ==== 0x004AF3C0  sub_4AF3C0  this=-  sig=ida-proto ====
void sub_4AF3C0()
{
  dbl_8A0780 = 0.0174532925199433 * 60.0; /*0x4af3cc*/
}



// ==== 0x004AF3E0  sub_4AF3E0  this=-  sig=ida-proto ====
void sub_4AF3E0()
{
  dbl_8A0758 = 0.0174532925199433 * 90.0; /*0x4af3ec*/
}



// ==== 0x004AF400  sub_4AF400  this=-  sig=ida-proto ====
__int64 sub_4AF400()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0758 - dbl_8A0780); /*0x4af412*/
  result = Math::RoundToInt(v0 * dbl_8A0778 * 0.5); /*0x4af426*/
  dword_8A07D0 = result; /*0x4af42b*/
  return result; /*0x4af430*/
}



// ==== 0x004AF440  sub_4AF440  this=-  sig=ida-proto ====
void sub_4AF440()
{
  dbl_8A0788 = Math::ArcTan((double)dword_8A07D0 * 0.00390625); /*0x4af457*/
}



// ==== 0x004AF470  sub_4AF470  this=-  sig=ida-proto ====
void sub_4AF470()
{
  dbl_8A07A0 = Math::ArcTan((double)(2 * dword_8A07D0) / dbl_8A0778); /*0x4af492*/
}



// ==== 0x004AF4A0  sub_4AF4A0  this=-  sig=ida-proto ====
__int64 sub_4AF4A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A07D0) + 0.5); /*0x4af4bb*/
  dword_8A07C4 = result; /*0x4af4c0*/
  return result; /*0x4af4c6*/
}



// ==== 0x004AF4D0  sub_4AF4D0  this=-  sig=ida-proto ====
int sub_4AF4D0()
{
  word_8A0770 = 0; /*0x4af4d2*/
  word_8A0772 = 0; /*0x4af4d8*/
  return 0; /*0x4af4de*/
}



// ==== 0x004AF4E0  sub_4AF4E0  this=-  sig=ida-proto ====
int sub_4AF4E0()
{
  g_DDraw_ClipRect = 0; /*0x4af4e2*/
  qword_8A0794 = 0; /*0x4af4e7*/
  return 0; /*0x4af4f1*/
}



// ==== 0x004AF500  sub_4AF500  this=-  sig=ida-proto ====
int sub_4AF500()
{
  dword_8A07C0 = 0; /*0x4af505*/
  dword_8A07B8 = 128; /*0x4af50f*/
  dword_8A07BC = 128; /*0x4af514*/
  return 128; /*0x4af519*/
}



// ==== 0x004AF520  sub_4AF520  this=-  sig=ida-proto ====
int sub_4AF520()
{
  dword_8A0760 = 0; /*0x4af522*/
  dword_8A0764 = 0; /*0x4af527*/
  dword_8A0768 = 0; /*0x4af52c*/
  dword_8A076C = 0; /*0x4af531*/
  return 0; /*0x4af536*/
}



// ==== 0x004AF540  LocomotionClass::Initialize  this=DriveLocomotionClass  sig=csp ====
int __thiscall LocomotionClass::Initialize(LocomotionClass *this)
{
  int v2; // ecx
  int v3; // ecx

  LocomotionClass::Init(this); /*0x4af543*/
  this->CurrentRamp = 0; /*0x4af54d*/
  this->u32_8 = 0; /*0x4af550*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4af553*/
  this->q02C = 0; /*0x4af559*/
  this->SlopeTimer = v2; /*0x4af55c*/
  this->q00C = 0; /*0x4af55f*/
  this->Dest = g_DDraw_ClipRect; /*0x4af568*/
  this->CurrentRamp = qword_8A0794; /*0x4af570*/
  this->HeadToCoord = g_DDraw_ClipRect; /*0x4af585*/
  this->Dirty = qword_8A0794; /*0x4af58e*/
  v3 = HIDWORD(qword_8A0794); /*0x4af591*/
  this->MovementSpeed = 0; /*0x4af597*/
  this->SpeedAccum = 0; /*0x4af59a*/
  this->q048 = v3; /*0x4af59d*/
  this->__pad_015 = 0; /*0x4af5a3*/
  this->TrackNumber = -1; /*0x4af5a6*/
  this->TrackIndex = -1; /*0x4af5a9*/
  this->u32_60 = 0; /*0x4af5ac*/
  this->IsTurretLockedDown = 0; /*0x4af5af*/
  this->IsRotating = 0; /*0x4af5b2*/
  this->IsDriving = 0; /*0x4af5b5*/
  this->IsRocking = 0; /*0x4af5b8*/
  this->UnLocked = 1; /*0x4af5bb*/
  this->ptr_68 = 0; /*0x4af5bf*/
  *(_DWORD *)this->ILocomotion = &DriveLocomotionClass::`vftable'; /*0x4af5c2*/
  *(_DWORD *)&this->ILocomotion[4] = &DriveLocomotionClass::`vftable'; /*0x4af5c8*/
  this->ptr_C = &off_7E7E8C; /*0x4af5cf*/
  return (int)this->ILocomotion; /*0x4af5d8*/
}



// ==== 0x004AF610  JumpjetLocomotionClass::LoadLocomotionFromStream  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  char *pad_50; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x4af611*/
  if ( !pad_0 ) /*0x4af618*/
    return -2147467261; /*0x4af621*/
  pad_50 = this->__pad_50; /*0x4af62b*/
  if ( *(_DWORD *)this->__pad_50 ) /*0x4af628*/
  {
    this = 0; /*0x4af634*/
    v5 = StreamClass::Set2((StreamClass *)&this, pad_50); /*0x4af645*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4af653*/
      WinAPI::Wrapper(v5); /*0x4af656*/
    if ( !this ) /*0x4af661*/
      return -2147467259; /*0x4af66a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x4af674*/
    if ( this ) /*0x4af67c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x4af685*/
      return v6; /*0x4af68c*/
    }
  }
  else
  {
    pad_0 = 0; /*0x4af692*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x4af69c*/
      return -2147467259; /*0x4af69c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x4af6ad*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x4af6b1*/
    {
      v9 = this; /*0x4af6c5*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x4af6cd*/
      v8 = v9; /*0x4af6d2*/
      pad_0 = v9->LocomotionClass; /*0x4af6d5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x4af6b7*/
      v8 = 0; /*0x4af6bc*/
      pad_0 = 0; /*0x4af6be*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4af6e3*/
      WinAPI::Wrapper(v7); /*0x4af6e6*/
    if ( !v8 ) /*0x4af6f1*/
      return -2147467259; /*0x4af6fa*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x4af704*/
    if ( pad_0 ) /*0x4af70c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x4af711*/
  }
  return v6; /*0x4af61a*/
}



// ==== 0x004AF720  DriveLocomotionClass::QueryInterface  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::QueryInterface(DriveLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x4af732*/
  if ( result == -2147467262 ) /*0x4af73c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4af74b*/
    {
      if ( this ) /*0x4af752*/
        pad_18 = this->__pad_18; /*0x4af754*/
      else
        pad_18 = 0; /*0x4af759*/
      *a3 = (int)pad_18; /*0x4af75b*/
    }
    if ( *a3 ) /*0x4af75e*/
    {
      (*(void (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x4af772*/
      return 0; /*0x4af775*/
    }
    else
    {
      return -2147467262; /*0x4af766*/
    }
  }
  return result; /*0x4af764*/
}



// ==== 0x004AF780  DriveLocomotionClass::BeginMove  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::BeginMove(DriveLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x4af787*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x4af792*/
  if ( v3 < 0 ) /*0x4af796*/
    return v3; /*0x4af796*/
  if ( this ) /*0x4af79a*/
  {
    this->Piggybackee = 0; /*0x4af79c*/
    *(_DWORD *)this->LocomotionClass = &DriveLocomotionClass::`vftable'; /*0x4af7a3*/
    *(_DWORD *)&this->LocomotionClass[4] = &DriveLocomotionClass::`vftable'; /*0x4af7a9*/
    *(_DWORD *)this->__pad_18 = &off_7E7E8C; /*0x4af7b0*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x4af7c3*/
  if ( !(_BYTE)pStm ) /*0x4af7cc*/
    return v3; /*0x4af7f8*/
  Piggybackee = this->Piggybackee; /*0x4af7ce*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x4af7d1*/
  if ( Piggybackee ) /*0x4af7d6*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x4af7db*/
  *p_Piggybackee = 0; /*0x4af7e5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x4af7f1*/
}



// ==== 0x004AF800  DriveLocomotionClass::LoadFromStream  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::LoadFromStream(DriveLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  DriveLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x4af806*/
  v4 = this; /*0x4af80b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x4af817*/
  if ( IPersistStream < 0 ) /*0x4af81b*/
    return IPersistStream; /*0x4af81b*/
  if ( !v4->Piggybackee ) /*0x4af826*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x4af8c3*/
    LOBYTE(a3) = 0; /*0x4af8cf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x4af8d4*/
    return IPersistStream; /*0x4af8d8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x4af82c*/
  LOBYTE(a3) = 1; /*0x4af838*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x4af83d*/
  Piggybackee = v4->Piggybackee; /*0x4af840*/
  pPStm = 0; /*0x4af843*/
  if ( Piggybackee ) /*0x4af84d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, DriveLocomotionClass **))Piggybackee)( /*0x4af85e*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x4af862*/
    {
      v9 = (int *)this; /*0x4af87b*/
      if ( pPStm ) /*0x4af881*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4af886*/
      pPStm = v9; /*0x4af889*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x4af868*/
      pPStm = 0; /*0x4af86d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4af897*/
      WinAPI::Wrapper(v8); /*0x4af89a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x4af8ab*/
  if ( pPStm ) /*0x4af8b3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4af8b8*/
  return v10; /*0x4af8bd*/
}



// ==== 0x004AF8E0  JumpjetLocomotionClass::StubReturnZero  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x4af8e6*/
    return -2147467261; /*0x4af8e8*/
  if ( *(_DWORD *)this->__pad_50 ) /*0x4af8f4*/
    return -2147467259; /*0x4af91b*/
  *(_DWORD *)this->__pad_50 = a2; /*0x4af902*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x4af908*/
  return 0; /*0x4af8ed*/
}



// ==== 0x004AF930  JumpjetLocomotionClass::StubReturnZero_0  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x4af936*/
    return -2147467261; /*0x4af938*/
  v3 = *(_DWORD *)this->__pad_50; /*0x4af944*/
  if ( !v3 ) /*0x4af949*/
    return 1; /*0x4af959*/
  *a2 = v3; /*0x4af94b*/
  *(_DWORD *)this->__pad_50 = 0; /*0x4af94d*/
  return 0; /*0x4af93d*/
}



// ==== 0x004AF970  JumpjetLocomotionClass::CheckPiggybackState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckPiggybackState(JumpjetLocomotionClass *this)
{
  return !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) /*0x4af9a0*/
      && *(_DWORD *)this->__pad_50
      && this->unknown_4D
      && !*(_BYTE *)(*((_DWORD *)this - 3) + 1709);
}



// ==== 0x004AF9B0  ObjectClass::method_4AF9B0  this=ObjectClass  sig=csp ====
void *__thiscall sub_4AF9B0(ObjectClass *this, void *a2)
{
  ObjectClass *nextObject; // ebx
  int occupant; // edx
  int fallRate; // eax
  ObjectClass *v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int referenceCount; // edx
  Matrix3x4 v13; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(&v13); /*0x4af9bc*/
  nextObject = this->nextObject; /*0x4af9c1*/
  if ( nextObject ) /*0x4af9ca*/
  {
    occupant = this->occupant; /*0x4af9d0*/
    fallRate = this->fallRate; /*0x4af9d3*/
    if ( occupant != -1 ) /*0x4af9df*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant >= fallRate ) /*0x4af9e7*/
        fallRate = 0; /*0x4af9ed*/
      else
        fallRate -= *(_DWORD *)&stru_A8EB00.?[416] - occupant; /*0x4af9e9*/
    }
    if ( (double)((int)nextObject - fallRate) / (double)(int)this->nextObject < 1.0 ) /*0x4afa08*/
    {
      v6 = this->nextObject; /*0x4afa0a*/
      if ( v6 ) /*0x4afa13*/
      {
        v8 = this->occupant; /*0x4afa1d*/
        v9 = this->fallRate; /*0x4afa20*/
        if ( v8 != -1 ) /*0x4afa26*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x4afa2e*/
            v9 = 0; /*0x4afa34*/
          else
            v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x4afa30*/
        }
        v7 = (double)((int)v6 - v9) / (double)(int)this->nextObject; /*0x4afa40*/
      }
      else
      {
        v7 = 1.0; /*0x4afa15*/
      }
      v10 = InterpolateVoxelAnimPose(v14, (int)this->?, this->?, v7); /*0x4afa55*/
      goto LABEL_17; /*0x4afa5a*/
    }
  }
  referenceCount = this->?; /*0x4afa5c*/
  if ( referenceCount ) /*0x4afa61*/
  {
    v10 = CopyAudioData(v14, referenceCount); /*0x4afa67*/
LABEL_17:
    qmemcpy(&v13, v10, sizeof(v13)); /*0x4afa77*/
  }
  qmemcpy(a2, &v13, 0x30u); /*0x4afa79*/
  return a2; /*0x4afa8a*/
}



// ==== 0x004AFAA0  ObjectClass::method_4AFAA0  this=ObjectClass  sig=csp ====
double __thiscall sub_4AFAA0(ObjectClass *this)
{
  ObjectClass *nextObject; // esi
  int occupant; // edx
  int fallRate; // eax

  nextObject = this->nextObject; /*0x4afaa4*/
  if ( !nextObject ) /*0x4afaad*/
    return 1.0; /*0x4afab9*/
  occupant = this->occupant; /*0x4afaba*/
  fallRate = this->fallRate; /*0x4afabd*/
  if ( occupant != -1 ) /*0x4afac3*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant < fallRate ) /*0x4afacf*/
      return (double)((int)nextObject - (fallRate - (*(_DWORD *)&stru_A8EB00.?[416] - occupant))) /*0x4afae5*/
           / (double)(int)nextObject;
    fallRate = 0; /*0x4afae6*/
  }
  return (double)((int)nextObject - fallRate) / (double)(int)nextObject; /*0x4afab5*/
}



// ==== 0x004AFB00  ObjectClass::method_4AFB00  this=ObjectClass  sig=csp ====
int __thiscall sub_4AFB00(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // [esp+4h] [ebp-Ch]

  result = this->referenceCount; /*0x4afb00*/
  if ( a2 != result ) /*0x4afb0c*/
  {
    this->NeedsSaveOrLink = result; /*0x4afb0e*/
    this->referenceCount = a2; /*0x4afb11*/
    v3 = this + 9; /*0x4afb19*/
    *v3 = dword_A8ED84; /*0x4afb22*/
    v3[1] = v4; /*0x4afb2a*/
    v3[2] = 3; /*0x4afb2d*/
    v3[3] = 3; /*0x4afb30*/
    return v4; /*0x4afb24*/
  }
  return result; /*0x4afb34*/
}



// ==== 0x004AFB40  DriveLocomotionClass::InitMovementState  this=DriveLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::InitMovementState(DriveLocomotionClass *this, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  this->CurrentRamp = a2; /*0x4afb4d*/
  *(_DWORD *)this->__pad_18 = a2; /*0x4afb50*/
  this->PreviousRamp = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4afb5f*/
  this->SlopeTimer[0] = v3; /*0x4afb65*/
  this->SlopeTimer[1] = 0; /*0x4afb68*/
  this->SlopeTimer[2] = 0; /*0x4afb6b*/
  return &this->PreviousRamp; /*0x4afb6e*/
}



// ==== 0x004AFB80  JumpjetLocomotionClass::StubReturnTrue  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue(JumpjetLocomotionClass *this)
{
  if ( LODWORD(this->Wobbles) != g_DDraw_ClipRect || *(_QWORD *)&this->Deviation != qword_8A0794 ) /*0x4afba1*/
    return 1; /*0x4afbb1*/
  return (*(_DWORD *)&this->__pad_39[3] != g_DDraw_ClipRect || *(_QWORD *)this->DestinationCoords != qword_8A0794) /*0x4afc00*/
      && (*(_DWORD *)&this->__pad_39[3] != this->?->?[0] || this->DestinationCoords[0] != this->?->?[1]);
}



// ==== 0x004AFC20  DriveLocomotionClass::StubReturnTrue_0  this=DriveLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_0(DriveLocomotionClass *this)
{
  if ( (unsigned __int8)TimerClass::Active((int)this->?->?) ) /*0x4afc2e*/
    return 1; /*0x4afc37*/
  return (*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x4afc79*/
      && (this->Dest[2] != g_DDraw_ClipRect || *(_QWORD *)this->HeadToCoord != qword_8A0794)
      && (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 334))(this->?) > 0;
}



// ==== 0x004AFC90  JumpjetLocomotionClass::GetCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int Deviation; // edx
  int v3; // eax

  Deviation = this->Deviation; /*0x4afc9d*/
  v3 = *(_DWORD *)&this->NoWobbles; /*0x4afca0*/
  *a2 = LODWORD(this->Wobbles); /*0x4afca5*/
  a2[1] = Deviation; /*0x4afca7*/
  a2[2] = v3; /*0x4afcaa*/
  return a2; /*0x4afcaf*/
}



// ==== 0x004AFCC0  JumpjetLocomotionClass::GetRenderCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetRenderCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( *(_DWORD *)&this->__pad_39[3] == g_DDraw_ClipRect && *(_QWORD *)this->DestinationCoords == qword_8A0794 ) /*0x4afcde*/
  {
    Owner = this->?; /*0x4afd0b*/
    location = Owner->?; /*0x4afd14*/
    v6 = Owner->?[0]; /*0x4afd16*/
    v7 = Owner->?[1]; /*0x4afd18*/
    v8 = location[2]; /*0x4afd1b*/
    *a2 = v6; /*0x4afd24*/
    a2[1] = v7; /*0x4afd26*/
    a2[2] = v8; /*0x4afd29*/
    return a2; /*0x4afd1e*/
  }
  else
  {
    v2 = this->DestinationCoords[0]; /*0x4afcf4*/
    v3 = this->DestinationCoords[1]; /*0x4afcf7*/
    *a2 = *(_DWORD *)&this->__pad_39[3]; /*0x4afcfc*/
    a2[1] = v2; /*0x4afcfe*/
    a2[2] = v3; /*0x4afd01*/
    return a2; /*0x4afd04*/
  }
}



// ==== 0x004AFD40  DriveLocomotionClass::ConvertCoordToCell  this=DriveLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::ConvertCoordToCell(
        DriveLocomotionClass *this,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  _DWORD *result; // eax
  int v5; // ecx
  int v6; // edx

  result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x4afd4b*/
  if ( !(_BYTE)result ) /*0x4afd53*/
  {
    result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?); /*0x4afd5e*/
    if ( !(_BYTE)result ) /*0x4afd66*/
    {
      result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x4afd71*/
      if ( !(_BYTE)result ) /*0x4afd79*/
      {
        result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x4afd80*/
        if ( !(_BYTE)result ) /*0x4afd88*/
        {
          result = a2; /*0x4afd8a*/
          v5 = a3; /*0x4afd8e*/
          v6 = a4; /*0x4afd92*/
          this->SlopeTimer[3] = (int)a2; /*0x4afd99*/
          this->Dest[0] = v5; /*0x4afd9c*/
          this->Dest[1] = v6; /*0x4afd9f*/
          if ( result != (_DWORD *)g_DDraw_ClipRect || __PAIR64__(v6, v5) != qword_8A0794 ) /*0x4afdb2*/
          {
            a2 = result; /*0x4afdbc*/
            a3 = v5; /*0x4afdc4*/
            a4 = v6; /*0x4afdce*/
            result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x4afdd2*/
            if ( (result[80] & 0x100) != 0 ) /*0x4afde0*/
            {
              result = (_DWORD *)(dword_8A07C4 + this->Dest[1]); /*0x4afdeb*/
              this->Dest[1] = (int)result; /*0x4afded*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4afdf0*/
}



// ==== 0x004AFE00  DriveLocomotionClass::CheckWindowsErrorWrapper  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckWindowsErrorWrapper(DriveLocomotionClass *this)
{
  FootClass *Owner; // eax
  _DWORD *ptr_8; // esi
  double v3; // st7
  int result; // eax

  if ( this->Dest[2] != g_DDraw_ClipRect || *(_QWORD *)this->HeadToCoord != qword_8A0794 ) /*0x4afe1d*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3220) ) /*0x4afe36*/
    {
      Owner = this->?; /*0x4afe40*/
      if ( !LOBYTE(Owner[1].?) ) /*0x4afe43*/
      {
        ptr_8 = Owner[1].?; /*0x4afe4d*/
        if ( ptr_8 ) /*0x4afe55*/
        {
          do /*0x4afe87*/
          {
            if ( !ptr_8[413] ) /*0x4afe57*/
              WinAPI::Wrapper(-2147467261); /*0x4afe66*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)ptr_8[413] + 72))(ptr_8[413]); /*0x4afe74*/
            ptr_8 = (_DWORD *)ptr_8[434]; /*0x4afe77*/
          }
          while ( ptr_8 && ptr_8 != (_DWORD *)ptr_8[434] ); /*0x4afe87*/
        }
      }
    }
  }
  if ( *(double *)&this->SpeedAccum >= 0.300000011920929 ) /*0x4afe97*/
    v3 = 0.300000011920929; /*0x4afe9e*/
  else
    v3 = *(double *)&this->SpeedAccum; /*0x4afe99*/
  *(double *)&this->SpeedAccum = v3; /*0x4afea4*/
  this->SlopeTimer[3] = g_DDraw_ClipRect; /*0x4afeb0*/
  result = qword_8A0794; /*0x4afeb2*/
  *(_QWORD *)this->Dest = qword_8A0794; /*0x4afeb7*/
  return result; /*0x4afec3*/
}



// ==== 0x004AFED0  ObjectClass::method_4AFED0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4AFED0(ObjectClass *this)
{
  ObjectClass *nextObject; // edi
  double v2; // st7
  int fallRate; // eax
  int occupant; // esi
  float *ptr_C; // ecx
  BOOL result; // eax

  nextObject = this->nextObject; /*0x4afed4*/
  if ( nextObject ) /*0x4afedd*/
  {
    fallRate = this->fallRate; /*0x4afee7*/
    occupant = this->occupant; /*0x4afeeb*/
    if ( occupant != -1 ) /*0x4afef1*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant >= fallRate ) /*0x4afefd*/
        fallRate = 0; /*0x4aff03*/
      else
        fallRate -= *(_DWORD *)&stru_A8EB00.?[416] - occupant; /*0x4afeff*/
    }
    v2 = (double)((int)nextObject - fallRate) / (double)(int)this->nextObject; /*0x4aff10*/
  }
  else
  {
    v2 = 1.0; /*0x4afedf*/
  }
  result = 0; /*0x4aff4f*/
  if ( v2 == 1.0 ) /*0x4aff20*/
  {
    ptr_C = (float *)this->?; /*0x4aff22*/
    if ( fabs(ptr_C[202]) < 0.005 && fabs(ptr_C[203]) < 0.005 ) /*0x4aff4d*/
      return 1; /*0x4aff20*/
  }
  return result; /*0x4aff54*/
}



// ==== 0x004AFF60  JumpjetLocomotionClass::ComputeVoxelTransform  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeVoxelTransform(JumpjetLocomotionClass *this, float *a2, _DWORD *a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  float Accel; // edi
  double v7; // st7
  float Climb; // edx
  int Height; // eax
  FootClass *Owner; // ecx
  long double v11; // st7
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  FootClass *v18; // ecx
  float *v19; // eax
  float v20; // ebx
  Timeout *p_Climb; // ecx
  Timeout v22; // edi
  int v23; // eax
  double v24; // st7
  float v25; // edi
  const void *v26; // eax
  int v27; // esi
  float *v28; // eax
  float *v29; // edx
  float *v30; // ecx
  int v31; // ecx
  float *Transform; // eax
  float v33; // ebx
  float v34; // edx
  int v35; // eax
  float v36; // edx
  double v37; // st7
  float v38; // ecx
  int v39; // eax
  const void *v40; // eax
  int TurnRate; // esi
  float v43; // [esp+4h] [ebp-234h]
  float v44; // [esp+4h] [ebp-234h]
  float v45; // [esp+4h] [ebp-234h]
  float *v46; // [esp+4h] [ebp-234h]
  float v47; // [esp+14h] [ebp-224h]
  float v48; // [esp+18h] [ebp-220h]
  float v49; // [esp+1Ch] [ebp-21Ch]
  int v50; // [esp+1Ch] [ebp-21Ch]
  float v51; // [esp+20h] [ebp-218h]
  int v52; // [esp+20h] [ebp-218h]
  float v53; // [esp+24h] [ebp-214h]
  int v54; // [esp+24h] [ebp-214h]
  Matrix3x4 v55; // [esp+28h] [ebp-210h] BYREF
  Matrix3x4 v56; // [esp+58h] [ebp-1E0h] BYREF
  Matrix3x4 v57; // [esp+88h] [ebp-1B0h] BYREF
  Transform v58[12]; // [esp+B8h] [ebp-180h] BYREF
  Transform v59[12]; // [esp+E8h] [ebp-150h] BYREF
  float v60[12]; // [esp+118h] [ebp-120h] BYREF
  float v61[12]; // [esp+148h] [ebp-F0h] BYREF
  char v62[48]; // [esp+178h] [ebp-C0h] BYREF
  float v63[12]; // [esp+1A8h] [ebp-90h] BYREF
  _BYTE v64[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v65[12]; // [esp+208h] [ebp-30h] BYREF

  Accel = this->Accel; /*0x4aff72*/
  if ( Accel == 0.0 ) /*0x4aff7b*/
  {
    v7 = 1.0; /*0x4aff7d*/
  }
  else
  {
    Climb = this->Climb; /*0x4aff85*/
    Height = this->Height; /*0x4aff88*/
    if ( Climb != NAN ) /*0x4aff8e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Climb) >= Height ) /*0x4aff9a*/
        Height = 0; /*0x4affa0*/
      else
        Height -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Climb); /*0x4aff9c*/
    }
    v7 = (double)(LODWORD(Accel) - Height) / (double)SLODWORD(this->Accel); /*0x4affac*/
  }
  if ( v7 == 1.0 ) /*0x4affbb*/
  {
    Owner = this->?; /*0x4affbd*/
    if ( fabs(*(float *)&Owner->?) < 0.005 && fabs(*(float *)&Owner->?) < 0.005 ) /*0x4affe8*/
    {
      if ( a3 && *a3 != -1 ) /*0x4b02bf*/
      {
        v31 = *a3 << 6; /*0x4b02c1*/
        *a3 = v31; /*0x4b02c4*/
        *a3 = v31 + this->TurnRate; /*0x4b02cb*/
      }
      Transform = Turret::GetTransform((LocomotionClass *)this, v60, a3); /*0x4b02d7*/
      Transform::Copy(v59, Transform); /*0x4b02e4*/
      Matrix3x4::Identity(&v55); /*0x4b02ed*/
      v33 = this->Accel; /*0x4b02f2*/
      if ( v33 == 0.0 ) /*0x4b02fb*/
        goto LABEL_48; /*0x4b02fb*/
      v34 = this->Climb; /*0x4b0301*/
      v35 = this->Height; /*0x4b0304*/
      if ( v34 != NAN ) /*0x4b0310*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v34) >= v35 ) /*0x4b0318*/
          v35 = 0; /*0x4b031e*/
        else
          v35 -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v34); /*0x4b031a*/
      }
      if ( (double)(LODWORD(v33) - v35) / (double)SLODWORD(this->Accel) >= 1.0 ) /*0x4b0339*/
      {
LABEL_48:
        TurnRate = this->TurnRate; /*0x4b0390*/
        if ( !TurnRate ) /*0x4b0395*/
        {
LABEL_51:
          qmemcpy(v58, &v55, sizeof(v58)); /*0x4b03c9*/
          v46 = (float *)v59; /*0x4b03cb*/
          v29 = (float *)v58; /*0x4b03cc*/
          v30 = (float *)v62; /*0x4b03d3*/
          goto LABEL_52; /*0x4b03d3*/
        }
        v40 = CopyAudioData((char *)v61, TurnRate); /*0x4b03a0*/
      }
      else
      {
        v36 = this->Accel; /*0x4b033b*/
        if ( v36 == 0.0 ) /*0x4b0344*/
        {
          v37 = 1.0; /*0x4b0346*/
        }
        else
        {
          v38 = this->Climb; /*0x4b034e*/
          v39 = this->Height; /*0x4b0351*/
          if ( v38 != NAN ) /*0x4b0357*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v38) >= v39 ) /*0x4b035f*/
              v39 = 0; /*0x4b0365*/
            else
              v39 -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v38); /*0x4b0361*/
          }
          v37 = (double)(LODWORD(v36) - v39) / (double)SLODWORD(this->Accel); /*0x4b0371*/
        }
        v40 = InterpolateVoxelAnimPose(v63, this->Speed, this->TurnRate, v37); /*0x4b0389*/
      }
      qmemcpy(&v55, v40, sizeof(v55)); /*0x4b03b0*/
      goto LABEL_51; /*0x4b03b0*/
    }
  }
  Matrix3x4::Identity(&v56); /*0x4afff2*/
  Matrix3x4::Identity(&v57); /*0x4afffe*/
  v11 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 864); /*0x4b0011*/
  v49 = v11; /*0x4b0019*/
  v51 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 872); /*0x4b002f*/
  Math::ArcTan2(*(float *)&this->?->?); /*0x4b003c*/
  v47 = v3; /*0x4b0044*/
  Math::SinCos(*(float *)&this->?->?); /*0x4b0051*/
  v53 = v4; /*0x4b0059*/
  Math::ArcTan2(*(float *)&this->?->?); /*0x4b0066*/
  v48 = v5; /*0x4b006e*/
  Math::SinCos(*(float *)&this->?->?); /*0x4b007b*/
  LOWORD(v12) = Math::RoundToInt(fabs(v11) * v49 + fabs(v53) * v51); /*0x4b0095*/
  v54 = v12; /*0x4b00a2*/
  LOWORD(v13) = Math::RoundToInt(v47 * v51); /*0x4b00a6*/
  LOWORD(v14) = Math::RoundToInt(v51 - (double)v13); /*0x4b00b7*/
  v15 = v14; /*0x4b00c4*/
  v52 = v14; /*0x4b00c6*/
  LOWORD(v16) = Math::RoundToInt(v48 * v49); /*0x4b00ca*/
  LOWORD(v17) = Math::RoundToInt(v49 - (double)v16); /*0x4b00db*/
  v18 = this->?; /*0x4b00e0*/
  v50 = v17; /*0x4b00e5*/
  if ( *(float *)&v18->? < 0.0 ) /*0x4b00fa*/
    v52 = -v15; /*0x4b00fe*/
  if ( *(float *)&v18->? > 0.0 ) /*0x4b0113*/
    v50 = -v17; /*0x4b0117*/
  v43 = (float)v54; /*0x4b0124*/
  Matrix3x3::ApplyCol1(v56.m_Data, v43); /*0x4b0127*/
  v44 = (float)v52; /*0x4b0138*/
  Matrix3x4::Translate(v57.m_Data, v44); /*0x4b013b*/
  v45 = (float)v50; /*0x4b014c*/
  Matrix3x3::ApplyCol0(v57.m_Data, v45); /*0x4b014f*/
  Matrix3x3::RotateX(v57.m_Data, *(float *)&this->?->?); /*0x4b0165*/
  Matrix3D::RotateZ(v57.m_Data, *(float *)&this->?->?); /*0x4b017b*/
  if ( a3 ) /*0x4b0185*/
    *a3 = -1; /*0x4b0187*/
  v19 = Turret::GetTransform((LocomotionClass *)this, v65, a3); /*0x4b0197*/
  Transform::Copy(v58, v19); /*0x4b01a4*/
  Matrix3x4::Identity(&v55); /*0x4b01ad*/
  v20 = this->Accel; /*0x4b01b2*/
  p_Climb = (Timeout *)&this->Climb; /*0x4b01b5*/
  if ( v20 != 0.0 ) /*0x4b01be*/
  {
    v22 = *p_Climb; /*0x4b01c0*/
    v23 = this->Height; /*0x4b01c2*/
    if ( *p_Climb != -1 ) /*0x4b01c8*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v22 >= v23 ) /*0x4b01d4*/
        v23 = 0; /*0x4b01da*/
      else
        v23 -= *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v22; /*0x4b01d6*/
    }
    if ( (double)(LODWORD(v20) - v23) / (double)SLODWORD(this->Accel) < 1.0 ) /*0x4b01f5*/
    {
      if ( LODWORD(this->Accel) ) /*0x4b01f7*/
      {
        v25 = this->Accel; /*0x4b0206*/
        v24 = (double)(LODWORD(v25) - Timeout::GetRemaining(p_Climb)) / (double)SLODWORD(v25); /*0x4b021c*/
      }
      else
      {
        v24 = 1.0; /*0x4b01fe*/
      }
      v26 = InterpolateVoxelAnimPose(v64, this->Speed, this->TurnRate, v24); /*0x4b0234*/
      goto LABEL_29; /*0x4b0239*/
    }
  }
  v27 = this->TurnRate; /*0x4b023b*/
  if ( v27 ) /*0x4b0240*/
  {
    v26 = CopyAudioData(v62, v27); /*0x4b024b*/
LABEL_29:
    qmemcpy(&v55, v26, sizeof(v55)); /*0x4b025b*/
  }
  qmemcpy(v59, &v55, sizeof(v59)); /*0x4b0274*/
  v46 = (float *)&v57; /*0x4b0284*/
  v28 = MultiplyMatrix3x4(v61, (float *)v56.m_Data, (float *)&v59[0].Transform_field_00); /*0x4b0292*/
  v29 = MultiplyMatrix3x4(v63, v28, (float *)&v58[0].Transform_field_00); /*0x4b02a5*/
  v30 = v60; /*0x4b02a7*/
LABEL_52:
  qmemcpy(&v56, MultiplyMatrix3x4(v30, v29, v46), sizeof(v56)); /*0x4b03da*/
  qmemcpy(a2, &v56, 0x30u); /*0x4b03fa*/
  return a2; /*0x4b03fc*/
}



// ==== 0x004A0010  EnumConnectionsClass::Release  this=EnumConnectionsClass  sig=csp ====
LONG __stdcall EnumConnectionsClass::Release(EnumConnectionsClass *this)
{
  LONG result; // eax
  int i; // esi
  void *EnumConnectionsClass_field_0x08; // eax
  int v4; // [esp-8h] [ebp-10h]

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a0020*/
  result = InterlockedDecrement((volatile LONG *)this + 8); /*0x4a0027*/
  if ( !result && this ) /*0x4a0035*/
  {
    *(_DWORD *)this->__pad_0 = &EnumConnectionsClass::`vftable'; /*0x4a0037*/
    for ( i = 0; i < this->EnumConnectionsClass_field_0x14; ++i ) /*0x4a0045*/
    {
      v4 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * i); /*0x4a004d*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4a0050*/
    }
    (*(void (__thiscall **)(int *))(this->EnumConnectionsClass_field_0x04 + 12))(&this->EnumConnectionsClass_field_0x04); /*0x4a0063*/
    EnumConnectionsClass_field_0x08 = (void *)this->EnumConnectionsClass_field_0x08; /*0x4a0066*/
    this->EnumConnectionsClass_field_0x04 = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0069*/
    if ( EnumConnectionsClass_field_0x08 ) /*0x4a0071*/
    {
      if ( BYTE1(this->EnumConnectionsClass_field_0x10) ) /*0x4a0073*/
      {
        __3_YAXPAX_Z(EnumConnectionsClass_field_0x08); /*0x4a007b*/
        this->EnumConnectionsClass_field_0x08 = 0; /*0x4a0083*/
      }
    }
    BYTE1(this->EnumConnectionsClass_field_0x10) = 0; /*0x4a008b*/
    this->EnumConnectionsClass_field_0x0C = 0; /*0x4a008f*/
    __3_YAXPAX_Z(this); /*0x4a0096*/
    return 0; /*0x4a009e*/
  }
  return result; /*0x4a00a1*/
}



// ==== 0x004A00B0  EnumConnectionsClass::ddtor  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::ddtor(EnumConnectionsClass *this, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v6; // ebp
  unsigned int i; // ebx
  int v8; // eax
  int v9; // eax
  int EnumConnectionsClass_field_0x08; // ecx
  int v11; // [esp-10h] [ebp-14h]

  v4 = a3; /*0x4a00b1*/
  if ( !a3 ) /*0x4a00b7*/
    return -2147467261; /*0x4a00bf*/
  if ( a2 > 1 ) /*0x4a00cd*/
  {
    if ( !a4 ) /*0x4a00d1*/
      return -2147024809; /*0x4a00d9*/
    goto LABEL_7; /*0x4a00d1*/
  }
  if ( a4 ) /*0x4a00de*/
LABEL_7:
    *a4 = 0; /*0x4a00e0*/
  v6 = 0; /*0x4a00ea*/
  for ( i = 0; i < a2; *(_DWORD *)(v4 - 4) = *(_DWORD *)(EnumConnectionsClass_field_0x08 + 8 * v9 + 4) ) /*0x4a00f3*/
  {
    v8 = *((_DWORD *)this + 7); /*0x4a00f9*/
    if ( v8 >= this->EnumConnectionsClass_field_0x14 ) /*0x4a0101*/
      break; /*0x4a0101*/
    v11 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * v8); /*0x4a0109*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 4))(v11); /*0x4a010c*/
    v9 = *((_DWORD *)this + 7); /*0x4a010f*/
    v4 += 8; /*0x4a0112*/
    ++v6; /*0x4a0115*/
    ++i; /*0x4a0116*/
    *((_DWORD *)this + 7) = v9 + 1; /*0x4a011a*/
    EnumConnectionsClass_field_0x08 = this->EnumConnectionsClass_field_0x08; /*0x4a011d*/
    *(_DWORD *)(v4 - 8) = *(_DWORD *)(EnumConnectionsClass_field_0x08 + 8 * v9); /*0x4a0123*/
  }
  if ( a4 ) /*0x4a013b*/
    *a4 = v6; /*0x4a013d*/
  return v6 != 0 ? 0 : -2147467259;
}



// ==== 0x004A0160  EnumConnectionsClass::Next  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::Next(EnumConnectionsClass *this, int a2)
{
  *((_DWORD *)this + 7) += a2; /*0x4a016d*/
  return 0; /*0x4a0172*/
}



// ==== 0x004A0180  EnumConnectionsClass::Skip  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::Skip(EnumConnectionsClass *this)
{
  *((_DWORD *)this + 7) = 0; /*0x4a0184*/
  return 0; /*0x4a018d*/
}



// ==== 0x004A0190  EnumConnectionsClass::ResetConnections  this=EnumConnectionsClass  sig=csp ====
int __stdcall ResetConnections(EnumConnectionsClass *this, _DWORD *a2)
{
  int v3; // edi
  int EnumConnectionsClass_field_0x0C; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int i; // esi
  int v12; // eax
  int v13; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a019a*/
    return -2147467261; /*0x4a019d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a01ad*/
  if ( !v3 ) /*0x4a01b4*/
    return -2147024882; /*0x4a029d*/
  *(_DWORD *)(v3 + 8) = 0; /*0x4a01c8*/
  *(_DWORD *)(v3 + 12) = 0; /*0x4a01cb*/
  *(_BYTE *)(v3 + 16) = 1; /*0x4a01ce*/
  *(_BYTE *)(v3 + 17) = 0; /*0x4a01d2*/
  *(_DWORD *)(v3 + 4) = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a01d5*/
  if ( (int *)(v3 + 4) != &this->EnumConnectionsClass_field_0x04 ) /*0x4a01db*/
  {
    VectorClass::ClearAndFree2(v3 + 4); /*0x4a01df*/
    EnumConnectionsClass_field_0x0C = this->EnumConnectionsClass_field_0x0C; /*0x4a01e5*/
    *(_DWORD *)(v3 + 12) = EnumConnectionsClass_field_0x0C; /*0x4a01ea*/
    if ( EnumConnectionsClass_field_0x0C ) /*0x4a01ed*/
    {
      v5 = __2_YAPAXI_Z(8 * EnumConnectionsClass_field_0x0C); /*0x4a01f7*/
      *(_DWORD *)(v3 + 8) = v5; /*0x4a0201*/
      if ( v5 ) /*0x4a0204*/
      {
        v6 = *(_DWORD *)(v3 + 12); /*0x4a0206*/
        v7 = 0; /*0x4a0209*/
        *(_BYTE *)(v3 + 17) = 1; /*0x4a020d*/
        if ( v6 > 0 ) /*0x4a0211*/
        {
          do /*0x4a0236*/
          {
            v8 = (_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * v7); /*0x4a021f*/
            v9 = (_DWORD *)(*(_DWORD *)(v3 + 8) + 8 * v7++); /*0x4a0224*/
            *v9 = *v8; /*0x4a0229*/
            v9[1] = v8[1]; /*0x4a022e*/
          }
          while ( v7 < *(_DWORD *)(v3 + 12) ); /*0x4a0236*/
        }
      }
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 0; /*0x4a023c*/
      *(_BYTE *)(v3 + 17) = 0; /*0x4a023f*/
    }
  }
  *(_DWORD *)(v3 + 20) = this->EnumConnectionsClass_field_0x14; /*0x4a0249*/
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6); /*0x4a024f*/
  *(_DWORD *)(v3 + 4) = &DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0252*/
  v10 = *((_DWORD *)this + 7); /*0x4a0258*/
  *(_DWORD *)(v3 + 32) = 0; /*0x4a025b*/
  *(_DWORD *)(v3 + 28) = v10; /*0x4a025e*/
  *(_DWORD *)v3 = &EnumConnectionsClass::`vftable'; /*0x4a0261*/
  for ( i = 0; i < *(_DWORD *)(v3 + 20); ++i ) /*0x4a026e*/
  {
    v13 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 8 * i); /*0x4a0276*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a0279*/
  }
  v12 = *(_DWORD *)v3; /*0x4a0284*/
  *(_DWORD *)(v3 + 32) = 0; /*0x4a0287*/
  (*(void (__stdcall **)(int))(v12 + 4))(v3); /*0x4a028a*/
  *a2 = v3; /*0x4a0295*/
  return 0; /*0x4a019c*/
}



// ==== 0x004A02B0  EnumConnectionsClass::method_4A02B0  this=EnumConnectionsClass  sig=csp ====
_DWORD *__thiscall sub_4A02B0(EnumConnectionsClass *this, _DWORD *a2)
{
  int *p_EnumConnectionsClass_field_0x04; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int i; // esi
  int v12; // [esp-4h] [ebp-14h]

  p_EnumConnectionsClass_field_0x04 = &this->EnumConnectionsClass_field_0x04; /*0x4a02bc*/
  this->EnumConnectionsClass_field_0x08 = 0; /*0x4a02c1*/
  this->EnumConnectionsClass_field_0x0C = 0; /*0x4a02c4*/
  LOBYTE(this->EnumConnectionsClass_field_0x10) = 1; /*0x4a02c7*/
  BYTE1(this->EnumConnectionsClass_field_0x10) = 0; /*0x4a02cb*/
  this->EnumConnectionsClass_field_0x04 = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a02ce*/
  if ( &this->EnumConnectionsClass_field_0x04 != a2 ) /*0x4a02d4*/
  {
    VectorClass::ClearAndFree2((int)&this->EnumConnectionsClass_field_0x04); /*0x4a02d8*/
    v4 = a2[2]; /*0x4a02de*/
    p_EnumConnectionsClass_field_0x04[2] = v4; /*0x4a02e3*/
    if ( v4 ) /*0x4a02e6*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a02ec*/
      p_EnumConnectionsClass_field_0x04[1] = v5; /*0x4a02f6*/
      if ( v5 ) /*0x4a02f9*/
      {
        v6 = p_EnumConnectionsClass_field_0x04[2]; /*0x4a02fb*/
        v7 = 0; /*0x4a02fe*/
        *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 1; /*0x4a0302*/
        if ( v6 > 0 ) /*0x4a0306*/
        {
          do /*0x4a0322*/
          {
            v8 = a2[1]; /*0x4a0308*/
            v9 = p_EnumConnectionsClass_field_0x04[1]; /*0x4a030b*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a0311*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a0318*/
            ++v7; /*0x4a031f*/
          }
          while ( v7 < p_EnumConnectionsClass_field_0x04[2] ); /*0x4a0322*/
        }
      }
    }
    else
    {
      p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a0328*/
      *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a032b*/
    }
  }
  p_EnumConnectionsClass_field_0x04[4] = a2[4]; /*0x4a0331*/
  p_EnumConnectionsClass_field_0x04[5] = a2[5]; /*0x4a0337*/
  *p_EnumConnectionsClass_field_0x04 = (int)&DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a033a*/
  *((_DWORD *)this + 7) = 0; /*0x4a0340*/
  this->q008 = 0; /*0x4a0343*/
  *(_DWORD *)this->__pad_0 = &EnumConnectionsClass::`vftable'; /*0x4a0346*/
  for ( i = 0; i < this->EnumConnectionsClass_field_0x14; ++i ) /*0x4a0353*/
  {
    v12 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * i); /*0x4a035b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x4a035e*/
  }
  return this->__pad_0; /*0x4a036b*/
}



// ==== 0x004A0380  EnumConnectionsClass::method_4A0380  this=EnumConnectionsClass  sig=csp ====
_DWORD *__thiscall sub_4A0380(EnumConnectionsClass *this, _DWORD *a2)
{
  int *p_EnumConnectionsClass_field_0x04; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int i; // esi
  int v13; // [esp-4h] [ebp-14h]

  p_EnumConnectionsClass_field_0x04 = &this->EnumConnectionsClass_field_0x04; /*0x4a038f*/
  this->EnumConnectionsClass_field_0x08 = 0; /*0x4a0394*/
  this->EnumConnectionsClass_field_0x0C = 0; /*0x4a0397*/
  LOBYTE(this->EnumConnectionsClass_field_0x10) = 1; /*0x4a039a*/
  BYTE1(this->EnumConnectionsClass_field_0x10) = 0; /*0x4a039e*/
  this->EnumConnectionsClass_field_0x04 = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a03a1*/
  if ( &this->EnumConnectionsClass_field_0x04 != a2 + 1 ) /*0x4a03a7*/
  {
    VectorClass::ClearAndFree2((int)&this->EnumConnectionsClass_field_0x04); /*0x4a03ab*/
    v4 = a2[3]; /*0x4a03b1*/
    p_EnumConnectionsClass_field_0x04[2] = v4; /*0x4a03b6*/
    if ( v4 ) /*0x4a03b9*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a03c3*/
      p_EnumConnectionsClass_field_0x04[1] = v5; /*0x4a03cd*/
      if ( v5 ) /*0x4a03d0*/
      {
        v6 = p_EnumConnectionsClass_field_0x04[2]; /*0x4a03d2*/
        v7 = 0; /*0x4a03d5*/
        *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 1; /*0x4a03d9*/
        if ( v6 > 0 ) /*0x4a03dd*/
        {
          do /*0x4a03f9*/
          {
            v8 = a2[2]; /*0x4a03df*/
            v9 = p_EnumConnectionsClass_field_0x04[1]; /*0x4a03e2*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a03e8*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a03ef*/
            ++v7; /*0x4a03f6*/
          }
          while ( v7 < p_EnumConnectionsClass_field_0x04[2] ); /*0x4a03f9*/
        }
      }
    }
    else
    {
      p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a03ff*/
      *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a0402*/
    }
  }
  p_EnumConnectionsClass_field_0x04[4] = a2[5]; /*0x4a040c*/
  p_EnumConnectionsClass_field_0x04[5] = a2[6]; /*0x4a0412*/
  *p_EnumConnectionsClass_field_0x04 = (int)&DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0415*/
  v10 = a2[7]; /*0x4a041b*/
  this->q008 = 0; /*0x4a041e*/
  *((_DWORD *)this + 7) = v10; /*0x4a0421*/
  *(_DWORD *)this->__pad_0 = &EnumConnectionsClass::`vftable'; /*0x4a0424*/
  for ( i = 0; i < this->EnumConnectionsClass_field_0x14; ++i ) /*0x4a0431*/
  {
    v13 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * i); /*0x4a0439*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a043c*/
  }
  return this->__pad_0; /*0x4a0449*/
}



// ==== 0x004A0450  EnumConnectionsClass::method_4A0450  this=EnumConnectionsClass  sig=csp ====
void __thiscall sub_4A0450(EnumConnectionsClass *this)
{
  int v2; // edi
  int EnumConnectionsClass_field_0x04; // edx
  int *p_EnumConnectionsClass_field_0x04; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0457*/
  for ( *(_DWORD *)this->__pad_0 = &EnumConnectionsClass::`vftable'; v2 < this->EnumConnectionsClass_field_0x14; ++v2 ) /*0x4a0464*/
  {
    v6 = *(_DWORD *)(this->EnumConnectionsClass_field_0x08 + 8 * v2); /*0x4a046c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4a046f*/
  }
  EnumConnectionsClass_field_0x04 = this->EnumConnectionsClass_field_0x04; /*0x4a047a*/
  p_EnumConnectionsClass_field_0x04 = &this->EnumConnectionsClass_field_0x04; /*0x4a047d*/
  (*(void (__thiscall **)(int *))(EnumConnectionsClass_field_0x04 + 12))(p_EnumConnectionsClass_field_0x04); /*0x4a0482*/
  v5 = (void *)p_EnumConnectionsClass_field_0x04[1]; /*0x4a0485*/
  *p_EnumConnectionsClass_field_0x04 = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0488*/
  if ( v5 && *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) ) /*0x4a0492*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0498*/
    p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a04a0*/
  }
  *((_BYTE *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a04a3*/
  p_EnumConnectionsClass_field_0x04[2] = 0; /*0x4a04a6*/
}



// ==== 0x004A04B0  ConnectionPointClass::QueryInterface  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::QueryInterface(ConnectionPointClass *this, const void *a2, _DWORD *a3)
{
  ConnectionPointClass *v4; // eax

  if ( !a3 ) /*0x4a04b7*/
    return -2147467261; /*0x4a04b9*/
  v4 = 0; /*0x4a04c9*/
  if ( !memcmp(a2, &unk_7F7CC0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a04eb*/
    v4 = this; /*0x4a04ef*/
  *a3 = v4; /*0x4a04f7*/
  if ( !v4 ) /*0x4a04fa*/
    return -2147467262; /*0x4a0508*/
  (*(void (__stdcall **)(ConnectionPointClass *))(*(_DWORD *)v4->__pad_0 + 4))(v4); /*0x4a04ff*/
  return 0; /*0x4a04be*/
}



// ==== 0x004A0520  ConnectionPointClass::AddRef  this=ConnectionPointClass  sig=csp ====
LONG __stdcall ConnectionPointClass::AddRef(ConnectionPointClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a052f*/
  return InterlockedIncrement(&this->ConnectionPointClass_field_0x14); /*0x4a053b*/
}



// ==== 0x004A0540  ConnectionPointClass::Release  this=ConnectionPointClass  sig=csp ====
LONG __stdcall ConnectionPointClass::Release(ConnectionPointClass *this)
{
  LONG result; // eax
  int ConnectionPointClass_field_0x18; // eax
  void *ConnectionPointClass_field_0x20; // eax

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a0550*/
  result = InterlockedDecrement(&this->ConnectionPointClass_field_0x14); /*0x4a0557*/
  if ( !result && this ) /*0x4a0565*/
  {
    ConnectionPointClass_field_0x18 = this->ConnectionPointClass_field_0x18; /*0x4a0567*/
    *(_DWORD *)this->__pad_0 = &ConnectionPointClass::`vftable'; /*0x4a056a*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ConnectionPointClass_field_0x18 + 8))(ConnectionPointClass_field_0x18); /*0x4a0574*/
    (*(void (__thiscall **)(int *))(this->ConnectionPointClass_field_0x1C + 12))(&this->ConnectionPointClass_field_0x1C); /*0x4a057f*/
    ConnectionPointClass_field_0x20 = (void *)this->ConnectionPointClass_field_0x20; /*0x4a0582*/
    this->ConnectionPointClass_field_0x1C = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0585*/
    if ( ConnectionPointClass_field_0x20 ) /*0x4a058d*/
    {
      if ( *((_BYTE *)this + 41) ) /*0x4a058f*/
      {
        __3_YAXPAX_Z(ConnectionPointClass_field_0x20); /*0x4a0597*/
        this->ConnectionPointClass_field_0x20 = 0; /*0x4a059f*/
      }
    }
    *((_BYTE *)this + 41) = 0; /*0x4a05a3*/
    *((_DWORD *)this + 9) = 0; /*0x4a05a7*/
    __3_YAXPAX_Z(this); /*0x4a05ae*/
    return 0; /*0x4a05b6*/
  }
  return result; /*0x4a05b9*/
}



// ==== 0x004A05D0  ConnectionPointClass::ddtor  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::ddtor(ConnectionPointClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4a05d6*/
    return -2147467261; /*0x4a05d8*/
  *a2 = this->ConnectionPointClass_field_0x04; /*0x4a05e9*/
  a2[1] = this->ConnectionPointClass_field_0x08; /*0x4a05ee*/
  a2[2] = this->ConnectionPointClass_field_0x0C; /*0x4a05f4*/
  a2[3] = this->ConnectionPointClass_field_0x10; /*0x4a05fa*/
  return 0; /*0x4a05dd*/
}



// ==== 0x004A0610  ConnectionPointClass::Advise  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::Advise(ConnectionPointClass *this, int a2)
{
  return (**(int (__stdcall ***)(int, void *, int))this->ConnectionPointClass_field_0x18)( /*0x4a0626*/
           this->ConnectionPointClass_field_0x18,
           &unk_7F7CD0,
           a2);
}



// ==== 0x004A0630  ConnectionPointClass::Unadvise  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::Unadvise(
        ConnectionPointClass *this,
        int (__stdcall ***a2)(_DWORD, int, int *),
        int *a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int ConnectionPointClass_field_0x20; // edx
  int v8; // [esp+14h] [ebp-8h] BYREF
  int updated; // [esp+18h] [ebp-4h]

  if ( !a2 || !a3 ) /*0x4a0648*/
    return -2147467261; /*0x4a06ec*/
  updated = AbstractClass::updateAITimer(dword_A8B230); /*0x4a0661*/
  if ( (**a2)(a2, (int)&this->ConnectionPointClass_field_0x04, &v8) < 0 ) /*0x4a0671*/
    return -2147220990; /*0x4a0675*/
  v4 = *((_DWORD *)this + 9); /*0x4a0681*/
  if ( this->q00B >= v4 ) /*0x4a068c*/
  {
    if ( !*((_BYTE *)this + 41) && v4 ) /*0x4a0697*/
      return -2147220991; /*0x4a0697*/
    v5 = this->q00C; /*0x4a0699*/
    if ( v5 <= 0 /*0x4a06a9*/
      || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->ConnectionPointClass_field_0x1C + 8))(
            &this->ConnectionPointClass_field_0x1C,
            v4 + v5,
            0) )
    {
      return -2147220991; /*0x4a06de*/
    }
  }
  v6 = this->q00B; /*0x4a06b0*/
  ConnectionPointClass_field_0x20 = this->ConnectionPointClass_field_0x20; /*0x4a06b3*/
  this->q00B = v6 + 1; /*0x4a06ba*/
  *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v6) = v8; /*0x4a06c1*/
  *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v6 + 4) = updated; /*0x4a06c9*/
  *a3 = updated; /*0x4a06d1*/
  return 0; /*0x4a0673*/
}



// ==== 0x004A0700  ConnectionPointClass::EnumConnections  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::EnumConnections(ConnectionPointClass *this, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *i; // ecx
  int v6; // ecx
  int v7; // ecx
  int ConnectionPointClass_field_0x20; // ecx

  v2 = 0; /*0x4a0705*/
  v3 = this->q00B; /*0x4a0707*/
  if ( v3 <= 0 ) /*0x4a070d*/
    return -2147220992; /*0x4a0725*/
  for ( i = (_DWORD *)(this->ConnectionPointClass_field_0x20 + 4); *i != a2; i += 2 ) /*0x4a0716*/
  {
    if ( ++v2 >= v3 ) /*0x4a0723*/
      return -2147220992; /*0x4a0723*/
  }
  v6 = this->q00B; /*0x4a072f*/
  if ( v2 < v6 ) /*0x4a0734*/
  {
    v7 = v6 - 1; /*0x4a0736*/
    for ( this->q00B = v7; /*0x4a073c*/
          v2 < this->q00B;
          *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v2 - 4) = *(_DWORD *)(ConnectionPointClass_field_0x20
                                                                                + 8 * v2
                                                                                + 4) )
    {
      ConnectionPointClass_field_0x20 = this->ConnectionPointClass_field_0x20; /*0x4a073e*/
      ++v2; /*0x4a0741*/
      *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v2 - 8) = *(_DWORD *)(ConnectionPointClass_field_0x20 + 8 * v2); /*0x4a0745*/
    }
  }
  return 0; /*0x4a0725*/
}



// ==== 0x004A0760  ConnectionPointClass::GetConnectionInterface  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::GetConnectionInterface(ConnectionPointClass *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int i; // esi
  int v11; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a076a*/
    return -2147467261; /*0x4a076d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a077d*/
  if ( !v3 ) /*0x4a0784*/
    return -2147024882; /*0x4a0864*/
  *(_DWORD *)(v3 + 8) = 0; /*0x4a0798*/
  *(_DWORD *)(v3 + 12) = 0; /*0x4a079b*/
  *(_BYTE *)(v3 + 16) = 1; /*0x4a079e*/
  *(_BYTE *)(v3 + 17) = 0; /*0x4a07a2*/
  *(_DWORD *)(v3 + 4) = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a07a5*/
  if ( (int *)(v3 + 4) != &this->ConnectionPointClass_field_0x1C ) /*0x4a07ab*/
  {
    VectorClass::ClearAndFree2(v3 + 4); /*0x4a07af*/
    v4 = *((_DWORD *)this + 9); /*0x4a07b5*/
    *(_DWORD *)(v3 + 12) = v4; /*0x4a07ba*/
    if ( v4 ) /*0x4a07bd*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a07c7*/
      *(_DWORD *)(v3 + 8) = v5; /*0x4a07d1*/
      if ( v5 ) /*0x4a07d4*/
      {
        v6 = *(_DWORD *)(v3 + 12); /*0x4a07d6*/
        v7 = 0; /*0x4a07d9*/
        *(_BYTE *)(v3 + 17) = 1; /*0x4a07dd*/
        if ( v6 > 0 ) /*0x4a07e1*/
        {
          do /*0x4a0806*/
          {
            v8 = (_DWORD *)(this->ConnectionPointClass_field_0x20 + 8 * v7); /*0x4a07ef*/
            v9 = (_DWORD *)(*(_DWORD *)(v3 + 8) + 8 * v7++); /*0x4a07f4*/
            *v9 = *v8; /*0x4a07f9*/
            v9[1] = v8[1]; /*0x4a07fe*/
          }
          while ( v7 < *(_DWORD *)(v3 + 12) ); /*0x4a0806*/
        }
      }
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 0; /*0x4a080c*/
      *(_BYTE *)(v3 + 17) = 0; /*0x4a080f*/
    }
  }
  *(_DWORD *)(v3 + 20) = this->q00B; /*0x4a0815*/
  *(_DWORD *)(v3 + 24) = this->q00C; /*0x4a081b*/
  *(_DWORD *)(v3 + 4) = &DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a081e*/
  *(_DWORD *)(v3 + 28) = 0; /*0x4a0824*/
  *(_DWORD *)(v3 + 32) = 0; /*0x4a0827*/
  *(_DWORD *)v3 = &EnumConnectionsClass::`vftable'; /*0x4a082a*/
  for ( i = 0; i < *(_DWORD *)(v3 + 20); ++i ) /*0x4a0837*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 8 * i); /*0x4a083f*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 4))(v11); /*0x4a0842*/
  }
  return (**(int (__stdcall ***)(int, void *, int))v3)(v3, &unk_7F7CB0, a2); /*0x4a076c*/
}



// ==== 0x004A0870  ConnectionPointClass::Construct  this=ConnectionPointClass  sig=csp ====
_DWORD *__thiscall ConnectionPointClass::Construct(ConnectionPointClass *this, _DWORD *a2, int a3)
{
  this->ConnectionPointClass_field_0x04 = *a2; /*0x4a087c*/
  this->ConnectionPointClass_field_0x08 = a2[1]; /*0x4a0881*/
  this->ConnectionPointClass_field_0x0C = a2[2]; /*0x4a0887*/
  this->ConnectionPointClass_field_0x10 = a2[3]; /*0x4a088d*/
  this->ConnectionPointClass_field_0x18 = a3; /*0x4a0896*/
  this->ConnectionPointClass_field_0x14 = 0; /*0x4a0899*/
  this->ConnectionPointClass_field_0x20 = 0; /*0x4a089c*/
  *((_DWORD *)this + 9) = 0; /*0x4a089f*/
  *((_BYTE *)this + 40) = 1; /*0x4a08a2*/
  *((_BYTE *)this + 41) = 0; /*0x4a08a6*/
  this->ConnectionPointClass_field_0x1C = (int)&DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a08a9*/
  this->q00C = 10; /*0x4a08b0*/
  this->q00B = 0; /*0x4a08b7*/
  *(_DWORD *)this->__pad_0 = &ConnectionPointClass::`vftable'; /*0x4a08ba*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x4a08c3*/
  return this->__pad_0; /*0x4a08c8*/
}



// ==== 0x004A08D0  ConnectionPointClass::method_4A08D0  this=ConnectionPointClass  sig=csp ====
void __thiscall sub_4A08D0(ConnectionPointClass *this)
{
  int ConnectionPointClass_field_0x18; // eax
  int ConnectionPointClass_field_0x1C; // edx
  int *p_ConnectionPointClass_field_0x1C; // esi
  void *v5; // eax

  ConnectionPointClass_field_0x18 = this->ConnectionPointClass_field_0x18; /*0x4a08d4*/
  *(_DWORD *)this->__pad_0 = &ConnectionPointClass::`vftable'; /*0x4a08d7*/
  (*(void (__stdcall **)(int))(*(_DWORD *)ConnectionPointClass_field_0x18 + 8))(ConnectionPointClass_field_0x18); /*0x4a08e0*/
  ConnectionPointClass_field_0x1C = this->ConnectionPointClass_field_0x1C; /*0x4a08e3*/
  p_ConnectionPointClass_field_0x1C = &this->ConnectionPointClass_field_0x1C; /*0x4a08e6*/
  (*(void (__thiscall **)(int *))(ConnectionPointClass_field_0x1C + 12))(p_ConnectionPointClass_field_0x1C); /*0x4a08eb*/
  v5 = (void *)p_ConnectionPointClass_field_0x1C[1]; /*0x4a08ee*/
  *p_ConnectionPointClass_field_0x1C = (int)&VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a08f5*/
  if ( v5 && *((_BYTE *)p_ConnectionPointClass_field_0x1C + 13) ) /*0x4a08fd*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0903*/
    p_ConnectionPointClass_field_0x1C[1] = 0; /*0x4a090b*/
  }
  *((_BYTE *)p_ConnectionPointClass_field_0x1C + 13) = 0; /*0x4a090e*/
  p_ConnectionPointClass_field_0x1C[2] = 0; /*0x4a0911*/
}



// ==== 0x004A0920  EnumConnectionPointsClass::QueryInterface  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::QueryInterface(EnumConnectionPointsClass *this, const void *a2, _DWORD *a3)
{
  EnumConnectionPointsClass *v4; // eax

  if ( !a3 ) /*0x4a0928*/
    return -2147467261; /*0x4a092b*/
  v4 = 0; /*0x4a093a*/
  if ( !memcmp(a2, &unk_7F7CE0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a0960*/
    v4 = this; /*0x4a0964*/
  *a3 = v4; /*0x4a0967*/
  if ( !v4 ) /*0x4a096d*/
    return -2147467262; /*0x4a097d*/
  (*(void (__stdcall **)(EnumConnectionPointsClass *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x4a0972*/
  return 0; /*0x4a092a*/
}



// ==== 0x004A0990  EnumConnectionPointsClass::AddRef  this=EnumConnectionPointsClass  sig=csp ====
LONG __stdcall EnumConnectionPointsClass::AddRef(EnumConnectionPointsClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a099f*/
  return InterlockedIncrement(&this->EnumConnectionPointsClass_field_0x08); /*0x4a09ab*/
}



// ==== 0x004A09B0  EnumConnectionPointsClass::Release  this=EnumConnectionPointsClass  sig=csp ====
LONG __stdcall EnumConnectionPointsClass::Release(EnumConnectionPointsClass *this)
{
  LONG result; // eax
  int i; // esi
  void *EnumConnectionPointsClass_field_0x10; // eax
  int v4; // [esp-8h] [ebp-10h]

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a09c0*/
  result = InterlockedDecrement(&this->EnumConnectionPointsClass_field_0x08); /*0x4a09c7*/
  if ( !result && this ) /*0x4a09d5*/
  {
    *(_DWORD *)this->__pad_0 = &EnumConnectionPointsClass::`vftable'; /*0x4a09d7*/
    for ( i = 0; i < this->EnumConnectionPointsClass_field_0x1C; ++i ) /*0x4a09e5*/
    {
      v4 = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * i); /*0x4a09ed*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4a09f0*/
    }
    (*(void (__thiscall **)(int *))(this->EnumConnectionPointsClass_field_0x0C + 12))(&this->EnumConnectionPointsClass_field_0x0C); /*0x4a0a03*/
    EnumConnectionPointsClass_field_0x10 = (void *)this->EnumConnectionPointsClass_field_0x10; /*0x4a0a06*/
    this->EnumConnectionPointsClass_field_0x0C = (int)&VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0a09*/
    if ( EnumConnectionPointsClass_field_0x10 ) /*0x4a0a11*/
    {
      if ( BYTE1(this->EnumConnectionPointsClass_field_0x18) ) /*0x4a0a13*/
      {
        __3_YAXPAX_Z(EnumConnectionPointsClass_field_0x10); /*0x4a0a1b*/
        this->EnumConnectionPointsClass_field_0x10 = 0; /*0x4a0a23*/
      }
    }
    BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0a2b*/
    this->EnumConnectionPointsClass_field_0x14 = 0; /*0x4a0a2f*/
    __3_YAXPAX_Z(this); /*0x4a0a36*/
    return 0; /*0x4a0a3e*/
  }
  return result; /*0x4a0a41*/
}



// ==== 0x004A0A50  EnumConnectionPointsClass::ddtor  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::ddtor(EnumConnectionPointsClass *this, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  int v6; // ebp
  unsigned int i; // edi
  int EnumConnectionPointsClass_field_0x04; // eax
  int v9; // eax
  int v10; // [esp-10h] [ebp-14h]

  v4 = a3; /*0x4a0a51*/
  if ( !a3 ) /*0x4a0a57*/
    return -2147467261; /*0x4a0a5f*/
  if ( a2 > 1 ) /*0x4a0a6d*/
  {
    if ( !a4 ) /*0x4a0a71*/
      return -2147467261; /*0x4a0a79*/
    goto LABEL_7; /*0x4a0a71*/
  }
  if ( a4 ) /*0x4a0a7e*/
LABEL_7:
    *a4 = 0; /*0x4a0a80*/
  v6 = 0; /*0x4a0a8a*/
  for ( i = 0; i < a2; *(_DWORD *)(v4 - 4) = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v9) ) /*0x4a0a93*/
  {
    EnumConnectionPointsClass_field_0x04 = this->EnumConnectionPointsClass_field_0x04; /*0x4a0a99*/
    if ( EnumConnectionPointsClass_field_0x04 >= this->EnumConnectionPointsClass_field_0x1C ) /*0x4a0aa1*/
      break; /*0x4a0aa1*/
    v10 = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * EnumConnectionPointsClass_field_0x04); /*0x4a0aa9*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0aac*/
    v9 = this->EnumConnectionPointsClass_field_0x04; /*0x4a0aaf*/
    v4 += 4; /*0x4a0ab2*/
    ++v6; /*0x4a0ab5*/
    ++i; /*0x4a0ab6*/
    this->EnumConnectionPointsClass_field_0x04 = v9 + 1; /*0x4a0aba*/
  }
  if ( a4 ) /*0x4a0ad4*/
    *a4 = v6; /*0x4a0ad6*/
  return v6 != 0 ? 0 : -2147467259;
}



// ==== 0x004A0AF0  EnumConnectionPointsClass::Next  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::Next(EnumConnectionPointsClass *this, int a2)
{
  this->EnumConnectionPointsClass_field_0x04 += a2; /*0x4a0afd*/
  return 0; /*0x4a0b02*/
}



// ==== 0x004A0B10  EnumConnectionPointsClass::Skip  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::Skip(EnumConnectionPointsClass *this)
{
  this->EnumConnectionPointsClass_field_0x04 = 0; /*0x4a0b14*/
  return 0; /*0x4a0b1d*/
}



// ==== 0x004A0B20  EnumConnectionPointsClass::ResetConnectionPoints  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall ResetConnectionPoints(EnumConnectionPointsClass *this, _DWORD *a2)
{
  int v3; // edi
  int EnumConnectionPointsClass_field_0x14; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v9; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a0b2a*/
    return -2147467261; /*0x4a0b2d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a0b3d*/
  if ( !v3 ) /*0x4a0b44*/
    return -2147024882; /*0x4a0c13*/
  *(_DWORD *)(v3 + 4) = this->EnumConnectionPointsClass_field_0x04; /*0x4a0b59*/
  *(_DWORD *)(v3 + 8) = 0; /*0x4a0b5c*/
  *(_DWORD *)(v3 + 16) = 0; /*0x4a0b61*/
  *(_DWORD *)(v3 + 20) = 0; /*0x4a0b64*/
  *(_BYTE *)(v3 + 24) = 1; /*0x4a0b67*/
  *(_BYTE *)(v3 + 25) = 0; /*0x4a0b6b*/
  *(_DWORD *)(v3 + 12) = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0b6e*/
  if ( (int *)(v3 + 12) != &this->EnumConnectionPointsClass_field_0x0C ) /*0x4a0b74*/
  {
    VectorClass::CleanupTyped(v3 + 12); /*0x4a0b78*/
    EnumConnectionPointsClass_field_0x14 = this->EnumConnectionPointsClass_field_0x14; /*0x4a0b7e*/
    *(_DWORD *)(v3 + 20) = EnumConnectionPointsClass_field_0x14; /*0x4a0b83*/
    if ( EnumConnectionPointsClass_field_0x14 ) /*0x4a0b86*/
    {
      v5 = __2_YAPAXI_Z(4 * EnumConnectionPointsClass_field_0x14); /*0x4a0b90*/
      *(_DWORD *)(v3 + 16) = v5; /*0x4a0b9a*/
      if ( v5 ) /*0x4a0b9d*/
      {
        v6 = *(_DWORD *)(v3 + 20); /*0x4a0b9f*/
        v7 = 0; /*0x4a0ba2*/
        *(_BYTE *)(v3 + 25) = 1; /*0x4a0ba6*/
        if ( v6 > 0 ) /*0x4a0baa*/
        {
          do /*0x4a0bbe*/
          {
            *(_DWORD *)(*(_DWORD *)(v3 + 16) + 4 * v7) = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v7); /*0x4a0bb5*/
            ++v7; /*0x4a0bbb*/
          }
          while ( v7 < *(_DWORD *)(v3 + 20) ); /*0x4a0bbe*/
        }
      }
    }
    else
    {
      *(_DWORD *)(v3 + 16) = 0; /*0x4a0bc2*/
      *(_BYTE *)(v3 + 25) = 0; /*0x4a0bc5*/
    }
  }
  *(_DWORD *)(v3 + 28) = this->EnumConnectionPointsClass_field_0x1C; /*0x4a0bcb*/
  *(_DWORD *)(v3 + 32) = this->EnumConnectionPointsClass_field_0x20; /*0x4a0bd1*/
  *(_DWORD *)(v3 + 12) = &DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4a0bd4*/
  *(_DWORD *)v3 = &EnumConnectionPointsClass::`vftable'; /*0x4a0bda*/
  for ( i = 0; i < *(_DWORD *)(v3 + 28); ++i ) /*0x4a0be7*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v3 + 16) + 4 * i); /*0x4a0bef*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x4a0bf2*/
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x4a0c00*/
  *a2 = v3; /*0x4a0c0b*/
  return 0; /*0x4a0b2c*/
}



// ==== 0x004A0C20  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor  this=EnumConnectionPointsClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this,
        _DWORD *a2)
{
  char *p_IsInitialized; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  p_IsInitialized = &this->IsInitialized; /*0x4a0c2c*/
  this->Items = 0; /*0x4a0c2f*/
  this->Capacity = 0; /*0x4a0c32*/
  this->Count = 0; /*0x4a0c37*/
  this->CapacityIncrement[0] = 0; /*0x4a0c3a*/
  this->__tail_18[0] = 1; /*0x4a0c3d*/
  this->__tail_18[1] = 0; /*0x4a0c41*/
  *(_DWORD *)&this->IsInitialized = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0c44*/
  if ( &this->IsInitialized != (char *)a2 ) /*0x4a0c4a*/
  {
    VectorClass::CleanupTyped((int)&this->IsInitialized); /*0x4a0c4e*/
    v4 = a2[2]; /*0x4a0c54*/
    *((_DWORD *)p_IsInitialized + 2) = v4; /*0x4a0c59*/
    if ( v4 ) /*0x4a0c5c*/
    {
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0c62*/
      *((_DWORD *)p_IsInitialized + 1) = v5; /*0x4a0c6c*/
      if ( v5 ) /*0x4a0c6f*/
      {
        v6 = *((_DWORD *)p_IsInitialized + 2); /*0x4a0c71*/
        v7 = 0; /*0x4a0c74*/
        p_IsInitialized[13] = 1; /*0x4a0c78*/
        if ( v6 > 0 ) /*0x4a0c7c*/
        {
          do /*0x4a0c90*/
          {
            *(_DWORD *)(*((_DWORD *)p_IsInitialized + 1) + 4 * v7) = *(_DWORD *)(a2[1] + 4 * v7); /*0x4a0c87*/
            ++v7; /*0x4a0c8d*/
          }
          while ( v7 < *((_DWORD *)p_IsInitialized + 2) ); /*0x4a0c90*/
        }
      }
    }
    else
    {
      *((_DWORD *)p_IsInitialized + 1) = 0; /*0x4a0c94*/
      p_IsInitialized[13] = 0; /*0x4a0c97*/
    }
  }
  *((_DWORD *)p_IsInitialized + 4) = a2[4]; /*0x4a0c9d*/
  *((_DWORD *)p_IsInitialized + 5) = a2[5]; /*0x4a0ca3*/
  *(_DWORD *)p_IsInitialized = &DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4a0ca6*/
  *(_DWORD *)this->__pad_0 = &EnumConnectionPointsClass::`vftable'; /*0x4a0cac*/
  for ( i = 0; i < *(_DWORD *)&this->__tail_18[4]; ++i ) /*0x4a0cb9*/
  {
    v10 = *((_DWORD *)this->Count + i); /*0x4a0cc1*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0cc4*/
  }
  return this->__pad_0; /*0x4a0cd1*/
}



// ==== 0x004A0CE0  EnumConnectionPointsClass::method_4A0CE0  this=EnumConnectionPointsClass  sig=csp ====
_DWORD *__thiscall sub_4A0CE0(EnumConnectionPointsClass *this, _DWORD *a2)
{
  int *p_EnumConnectionPointsClass_field_0x0C; // esi
  int v4; // eax
  int v5; // eax
  int EnumConnectionPointsClass_field_0x14; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  p_EnumConnectionPointsClass_field_0x0C = &this->EnumConnectionPointsClass_field_0x0C; /*0x4a0cf2*/
  this->EnumConnectionPointsClass_field_0x04 = a2[1]; /*0x4a0cf5*/
  this->EnumConnectionPointsClass_field_0x08 = 0; /*0x4a0cf8*/
  this->EnumConnectionPointsClass_field_0x10 = 0; /*0x4a0cfd*/
  this->EnumConnectionPointsClass_field_0x14 = 0; /*0x4a0d00*/
  LOBYTE(this->EnumConnectionPointsClass_field_0x18) = 1; /*0x4a0d03*/
  BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0d07*/
  this->EnumConnectionPointsClass_field_0x0C = (int)&VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0d0a*/
  if ( &this->EnumConnectionPointsClass_field_0x0C != a2 + 3 ) /*0x4a0d10*/
  {
    VectorClass::CleanupTyped((int)&this->EnumConnectionPointsClass_field_0x0C); /*0x4a0d14*/
    v4 = a2[5]; /*0x4a0d1a*/
    this->EnumConnectionPointsClass_field_0x14 = v4; /*0x4a0d1f*/
    if ( v4 ) /*0x4a0d22*/
    {
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0d2c*/
      this->EnumConnectionPointsClass_field_0x10 = v5; /*0x4a0d36*/
      if ( v5 ) /*0x4a0d39*/
      {
        EnumConnectionPointsClass_field_0x14 = this->EnumConnectionPointsClass_field_0x14; /*0x4a0d3b*/
        v7 = 0; /*0x4a0d3e*/
        BYTE1(this->EnumConnectionPointsClass_field_0x18) = 1; /*0x4a0d42*/
        if ( EnumConnectionPointsClass_field_0x14 > 0 ) /*0x4a0d46*/
        {
          do /*0x4a0d5a*/
          {
            *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v7) = *(_DWORD *)(a2[4] + 4 * v7); /*0x4a0d51*/
            ++v7; /*0x4a0d57*/
          }
          while ( v7 < this->EnumConnectionPointsClass_field_0x14 ); /*0x4a0d5a*/
        }
      }
    }
    else
    {
      this->EnumConnectionPointsClass_field_0x10 = 0; /*0x4a0d5e*/
      BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0d61*/
    }
  }
  this->EnumConnectionPointsClass_field_0x1C = a2[7]; /*0x4a0d67*/
  this->EnumConnectionPointsClass_field_0x20 = a2[8]; /*0x4a0d6d*/
  *p_EnumConnectionPointsClass_field_0x0C = (int)&DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4a0d70*/
  *(_DWORD *)this->__pad_0 = &EnumConnectionPointsClass::`vftable'; /*0x4a0d76*/
  for ( i = 0; i < this->EnumConnectionPointsClass_field_0x1C; ++i ) /*0x4a0d83*/
  {
    v10 = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * i); /*0x4a0d8b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0d8e*/
  }
  return this->__pad_0; /*0x4a0d9b*/
}



// ==== 0x004A0DB0  EnumConnectionPointsClass::method_4A0DB0  this=EnumConnectionPointsClass  sig=csp ====
void __thiscall sub_4A0DB0(EnumConnectionPointsClass *this)
{
  int v2; // edi
  int EnumConnectionPointsClass_field_0x0C; // edx
  int *p_EnumConnectionPointsClass_field_0x0C; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0db7*/
  for ( *(_DWORD *)this->__pad_0 = &EnumConnectionPointsClass::`vftable'; /*0x4a0dc4*/
        v2 < this->EnumConnectionPointsClass_field_0x1C;
        ++v2 )
  {
    v6 = *(_DWORD *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v2); /*0x4a0dcc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4a0dcf*/
  }
  EnumConnectionPointsClass_field_0x0C = this->EnumConnectionPointsClass_field_0x0C; /*0x4a0dda*/
  p_EnumConnectionPointsClass_field_0x0C = &this->EnumConnectionPointsClass_field_0x0C; /*0x4a0ddd*/
  (*(void (__thiscall **)(int *))(EnumConnectionPointsClass_field_0x0C + 12))(p_EnumConnectionPointsClass_field_0x0C); /*0x4a0de2*/
  v5 = (void *)p_EnumConnectionPointsClass_field_0x0C[1]; /*0x4a0de5*/
  *p_EnumConnectionPointsClass_field_0x0C = (int)&VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0de8*/
  if ( v5 && *((_BYTE *)p_EnumConnectionPointsClass_field_0x0C + 13) ) /*0x4a0df2*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0df8*/
    p_EnumConnectionPointsClass_field_0x0C[1] = 0; /*0x4a0e00*/
  }
  *((_BYTE *)p_EnumConnectionPointsClass_field_0x0C + 13) = 0; /*0x4a0e03*/
  p_EnumConnectionPointsClass_field_0x0C[2] = 0; /*0x4a0e06*/
}



// ==== 0x004A0E10  _DynamicVectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_(
        _DynamicVectorClass_UtagCONNECTDATA *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a0e13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0e16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a0e20*/
  {
    __3_YAXPAX_Z(v3); /*0x4a0e28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0e30*/
  }
  BYTE1(this->m_C) = 0; /*0x4a0e3b*/
  this->m_8 = 0; /*0x4a0e41*/
  if ( (a2 & 1) != 0 ) /*0x4a0e48*/
    __3_YAXPAX_Z(this); /*0x4a0e4b*/
  return this->__pad_0; /*0x4a0e55*/
}



// ==== 0x004A0E60  _DynamicVectorClass_PAUIConnectionPoint::Constructor_VectorClass_IConnectionPoint___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall EnumConnectionPointsClass::Constructor_VectorClass_IConnectionPoint___(
        _DynamicVectorClass_PAUIConnectionPoint *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a0e63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0e66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a0e70*/
  {
    __3_YAXPAX_Z(v3); /*0x4a0e78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0e80*/
  }
  BYTE1(this->m_C) = 0; /*0x4a0e8b*/
  this->m_8 = 0; /*0x4a0e91*/
  if ( (a2 & 1) != 0 ) /*0x4a0e98*/
    __3_YAXPAX_Z(this); /*0x4a0e9b*/
  return this->__pad_0; /*0x4a0ea5*/
}



// ==== 0x004A0EB0  _DynamicVectorClass_UtagCONNECTDATA::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UtagCONNECTDATA::Destroy(_DynamicVectorClass_UtagCONNECTDATA *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a0eb6*/
  this->m_10 = 0; /*0x4a0eb9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4a0ec0*/
  {
    __3_YAXPAX_Z(v2); /*0x4a0ec6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0ece*/
  }
  BYTE1(this->m_C) = 0; /*0x4a0ed1*/
  this->m_8 = 0; /*0x4a0ed4*/
}



// ==== 0x004A0EE0  _DynamicVectorClass_UtagCONNECTDATA::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UtagCONNECTDATA::GetItemIndex(_DynamicVectorClass_UtagCONNECTDATA *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a0ee0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x4a0ef5*/
  else
    return 0; /*0x4a0ee7*/
}



// ==== 0x004A0F00  _VectorClass_UtagCONNECTDATA::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UtagCONNECTDATA::Clear(_VectorClass_UtagCONNECTDATA *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x4a0f00*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x4a0f0f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x4a0f16*/
  return a2; /*0x4a0f11*/
}



// ==== 0x004A0F20  _DynamicVectorClass_PAUIConnectionPoint::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall EnumConnectionPointsClass::ClearBuffer(_DynamicVectorClass_PAUIConnectionPoint *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a0f26*/
  this->m_10 = 0; /*0x4a0f29*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4a0f30*/
  {
    __3_YAXPAX_Z(v2); /*0x4a0f36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a0f3e*/
  }
  BYTE1(this->m_C) = 0; /*0x4a0f41*/
  this->m_8 = 0; /*0x4a0f44*/
}



// ==== 0x004A0F50  _DynamicVectorClass_PAUIConnectionPoint::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall EnumConnectionPointsClass::PointerToIndex(
        _DynamicVectorClass_PAUIConnectionPoint *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a0f50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a0f65*/
  else
    return 0; /*0x4a0f57*/
}



// ==== 0x004A0F70  _VectorClass_PAUIConnectionPoint::EnumConnections  this=VectorClass  sig=csp ====
int __thiscall ConnectionPointClass_9::EnumConnections(_VectorClass_PAUIConnectionPoint *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4a0f7a*/
}



// ==== 0x004A0F80  _VectorClass_UtagCONNECTDATA::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::AddRef(_VectorClass_UtagCONNECTDATA *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x4a0f8b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4a0f90*/
  {
    v3 = 0; /*0x4a0f92*/
    if ( m_8 <= 0 ) /*0x4a0f96*/
      return 1; /*0x4a0fc6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4a0f98*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x4a0f9b*/
    v6 = (_DWORD *)(v4 + 4); /*0x4a0f9e*/
    v7 = v4 - (_DWORD)v5; /*0x4a0fa1*/
    while ( v5[1] == *v6 && *v5 == *(_DWORD *)((char *)v5 + v7) ) /*0x4a0fb3*/
    {
      ++v3; /*0x4a0fb5*/
      v6 += 2; /*0x4a0fb6*/
      v5 += 2; /*0x4a0fb9*/
      if ( v3 >= m_8 ) /*0x4a0fbe*/
        return 1; /*0x4a0fbe*/
    }
  }
  return 0; /*0x4a0fc0*/
}



// ==== 0x004A0FE0  _VectorClass_UtagCONNECTDATA::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::Release(_VectorClass_UtagCONNECTDATA *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx

  if ( a2 ) /*0x4a0fec*/
  {
    v4 = a3; /*0x4a0ff2*/
    LOBYTE(this->m_C) = 0; /*0x4a0ff6*/
    if ( a3 ) /*0x4a0ffc*/
      v5 = a3; /*0x4a1012*/
    else
      v5 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x4a100e*/
    LOBYTE(this->m_C) = 1; /*0x4a1016*/
    if ( v5 ) /*0x4a101a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4a1025*/
      {
        m_8 = this->m_8; /*0x4a102c*/
        if ( a2 < m_8 ) /*0x4a1031*/
          m_8 = a2; /*0x4a1033*/
        v8 = 0; /*0x4a1035*/
        if ( m_8 > 0 ) /*0x4a1039*/
        {
          do /*0x4a1051*/
          {
            v9 = *(_DWORD *)&this->m_1[3]; /*0x4a103b*/
            ++v8; /*0x4a103e*/
            v5[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x4a1045*/
            v5[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x4a104d*/
          }
          while ( v8 < m_8 ); /*0x4a1051*/
          v4 = a3; /*0x4a1053*/
        }
        if ( BYTE1(this->m_C) ) /*0x4a1057*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a1062*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4a106a*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x4a1073*/
      this->m_8 = a2; /*0x4a107b*/
      BYTE1(this->m_C) = v4 == 0; /*0x4a107e*/
      return 1; /*0x4a1084*/
    }
    else
    {
      return 0; /*0x4a101f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UtagCONNECTDATA *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a108e*/
    return 1; /*0x4a1094*/
  }
}



// ==== 0x004A10A0  ?$VectorClass@UtagCONNECTDATA@@::ClearAndFree2  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ClearAndFree2(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4a10ad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4a10b3*/
    *(_DWORD *)(this + 4) = 0; /*0x4a10bb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a10be*/
  *(_DWORD *)(this + 8) = 0; /*0x4a10c1*/
}



// ==== 0x004A10D0  _VectorClass_UtagCONNECTDATA::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UtagCONNECTDATA::GetSize(_VectorClass_UtagCONNECTDATA *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a10d0*/
    return 0; /*0x4a10de*/
  m_8 = this->m_8; /*0x4a10e4*/
  result = 0; /*0x4a10e7*/
  if ( m_8 <= 0 ) /*0x4a10eb*/
    return -1; /*0x4a110c*/
  for ( i = *(_DWORD **)&this->m_1[3]; i[1] != a2[1] || *i != *a2; i += 2 ) /*0x4a10f1*/
  {
    if ( ++result >= m_8 ) /*0x4a110a*/
      return -1; /*0x4a110a*/
  }
  return result; /*0x4a10db*/
}



// ==== 0x004A1120  _VectorClass_UtagCONNECTDATA::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UtagCONNECTDATA::GetCapacity(_VectorClass_UtagCONNECTDATA *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a1120*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x4a1135*/
  else
    return 0; /*0x4a1127*/
}



// ==== 0x004A1140  _DynamicVectorClass_UtagCONNECTDATA::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::SetCapacity(_DynamicVectorClass_UtagCONNECTDATA *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  int m_8; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax

  if ( a2 ) /*0x4a114c*/
  {
    v4 = a3; /*0x4a1152*/
    LOBYTE(this->m_C) = 0; /*0x4a1156*/
    if ( a3 ) /*0x4a115c*/
      v5 = a3; /*0x4a1172*/
    else
      v5 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x4a116e*/
    LOBYTE(this->m_C) = 1; /*0x4a1176*/
    if ( !v5 ) /*0x4a117a*/
      return 0; /*0x4a11fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4a117c*/
    {
      m_8 = this->m_8; /*0x4a1183*/
      if ( a2 < m_8 ) /*0x4a1188*/
        m_8 = a2; /*0x4a118a*/
      v7 = 0; /*0x4a118c*/
      if ( m_8 > 0 ) /*0x4a1190*/
      {
        do /*0x4a11a8*/
        {
          v8 = *(_DWORD *)&this->m_1[3]; /*0x4a1192*/
          ++v7; /*0x4a1195*/
          v5[2 * v7 - 2] = *(_DWORD *)(v8 + 8 * v7 - 8); /*0x4a119c*/
          v5[2 * v7 - 1] = *(_DWORD *)(v8 + 8 * v7 - 4); /*0x4a11a4*/
        }
        while ( v7 < m_8 ); /*0x4a11a8*/
        v4 = a3; /*0x4a11aa*/
      }
      if ( BYTE1(this->m_C) ) /*0x4a11ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a11b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4a11c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x4a11ca*/
    this->m_8 = a2; /*0x4a11d2*/
    BYTE1(this->m_C) = v4 == 0; /*0x4a11d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UtagCONNECTDATA *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a11de*/
  }
  v9 = this->m_8; /*0x4a11e1*/
  if ( v9 < this->m_10 ) /*0x4a11e9*/
    this->m_10 = v9; /*0x4a11eb*/
  return 1; /*0x4a11ee*/
}



// ==== 0x004A1200  _DynamicVectorClass_UtagCONNECTDATA::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UtagCONNECTDATA::FindItemIndex(_DynamicVectorClass_UtagCONNECTDATA *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4a1200*/
  result = 0; /*0x4a1205*/
  if ( m_10 <= 0 ) /*0x4a120b*/
    return -1; /*0x4a122c*/
  for ( i = *(_DWORD **)&this->m_1[3]; i[1] != a2[1] || *i != *a2; i += 2 ) /*0x4a1211*/
  {
    if ( ++result >= m_10 ) /*0x4a122a*/
      return -1; /*0x4a122a*/
  }
  return result; /*0x4a122f*/
}



// ==== 0x004A1240  _VectorClass_PAUIConnectionPoint::AddRef  this=VectorClass  sig=csp ====
char __thiscall ConnectionPointClass_9::AddRef(_VectorClass_PAUIConnectionPoint *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4a1242*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4a124d*/
  {
    v3 = 0; /*0x4a124f*/
    if ( m_8 <= 0 ) /*0x4a1253*/
      return 1; /*0x4a1273*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4a1255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a125b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a1264*/
    {
      ++v3; /*0x4a1266*/
      ++v4; /*0x4a1267*/
      if ( v3 >= m_8 ) /*0x4a126c*/
        return 1; /*0x4a126c*/
    }
  }
  return 0; /*0x4a126e*/
}



// ==== 0x004A1280  _VectorClass_PAUIConnectionPoint::Release  this=VectorClass  sig=csp ====
char __thiscall ConnectionPointClass_9::Release(_VectorClass_PAUIConnectionPoint *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a128c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a1296*/
    if ( a3 ) /*0x4a129c*/
      v4 = a3; /*0x4a12b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a12ae*/
    LOBYTE(this->m_C) = 1; /*0x4a12b6*/
    if ( v4 ) /*0x4a12ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4a12c5*/
      {
        m_8 = this->m_8; /*0x4a12cc*/
        if ( a2 < m_8 ) /*0x4a12d1*/
          m_8 = a2; /*0x4a12d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a12d9*/
          ++i; /*0x4a12de*/
        if ( BYTE1(this->m_C) ) /*0x4a12eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a12f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4a12fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4a1307*/
      this->m_8 = a2; /*0x4a130f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a1312*/
      return 1; /*0x4a1318*/
    }
    else
    {
      return 0; /*0x4a12bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUIConnectionPoint *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a1322*/
    return 1; /*0x4a1328*/
  }
}



// ==== 0x004A1330  ?$VectorClass@PAUIConnectionPoint@@::CleanupTyped  this=VectorClass  sig=csp ====
void __thiscall VectorClass_CleanupTyped(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4a133d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4a1343*/
    *(_DWORD *)(this + 4) = 0; /*0x4a134b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a134e*/
  *(_DWORD *)(this + 8) = 0; /*0x4a1351*/
}



// ==== 0x004A1360  _VectorClass_PAUIConnectionPoint::Advise  this=VectorClass  sig=csp ====
int __thiscall ConnectionPointClass_9::Advise(_VectorClass_PAUIConnectionPoint *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a1360*/
    return 0; /*0x4a1368*/
  m_8 = this->m_8; /*0x4a136e*/
  result = 0; /*0x4a1371*/
  if ( m_8 <= 0 ) /*0x4a1375*/
    return -1; /*0x4a138c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a137b*/
  {
    if ( ++result >= m_8 ) /*0x4a138a*/
      return -1; /*0x4a138a*/
  }
  return result; /*0x4a136a*/
}



// ==== 0x004A13A0  _VectorClass_PAUIConnectionPoint::Unadvise  this=VectorClass  sig=csp ====
unsigned int __thiscall ConnectionPointClass_9::Unadvise(_VectorClass_PAUIConnectionPoint *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a13a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a13b5*/
  else
    return 0; /*0x4a13a7*/
}



// ==== 0x004A13C0  _DynamicVectorClass_PAUIConnectionPoint::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall EnumConnectionPointsClass::SetCapacity(
        _DynamicVectorClass_PAUIConnectionPoint *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a13cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a13d2*/
    if ( a3 ) /*0x4a13d8*/
      v4 = a3; /*0x4a13ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a13ea*/
    LOBYTE(this->m_C) = 1; /*0x4a13f2*/
    if ( !v4 ) /*0x4a13f6*/
      return 0; /*0x4a146a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4a13f8*/
    {
      m_8 = this->m_8; /*0x4a13ff*/
      if ( a2 < m_8 ) /*0x4a1404*/
        m_8 = a2; /*0x4a1406*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a140c*/
        ++i; /*0x4a1411*/
      if ( BYTE1(this->m_C) ) /*0x4a141e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a1429*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4a1431*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4a143a*/
    this->m_8 = a2; /*0x4a1442*/
    BYTE1(this->m_C) = a3 == 0; /*0x4a1445*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUIConnectionPoint *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a144e*/
  }
  v7 = this->m_8; /*0x4a1451*/
  if ( v7 < this->m_10 ) /*0x4a1459*/
    this->m_10 = v7; /*0x4a145b*/
  return 1; /*0x4a145e*/
}



// ==== 0x004A1470  _DynamicVectorClass_PAUIConnectionPoint::FindItem  this=DynamicVector  sig=csp ====
int __thiscall EnumConnectionPointsClass::FindItem(_DynamicVectorClass_PAUIConnectionPoint *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4a1470*/
  result = 0; /*0x4a1473*/
  if ( m_10 <= 0 ) /*0x4a1478*/
    return -1; /*0x4a148f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a147e*/
  {
    if ( ++result >= m_10 ) /*0x4a148d*/
      return -1; /*0x4a148d*/
  }
  return result; /*0x4a1492*/
}



// ==== 0x004A14A0  _VectorClass_UtagCONNECTDATA::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UtagCONNECTDATA::QueryInterface(_VectorClass_UtagCONNECTDATA *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a14a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a14a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a14b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a14b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a14c0*/
  }
  BYTE1(this->m_C) = 0; /*0x4a14cb*/
  this->m_8 = 0; /*0x4a14d1*/
  if ( (a2 & 1) != 0 ) /*0x4a14d8*/
    __3_YAXPAX_Z(this); /*0x4a14db*/
  return this->__pad_0; /*0x4a14e5*/
}



// ==== 0x004A14F0  _VectorClass_PAUIConnectionPoint::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall ConnectionPointClass_9::QueryInterface(_VectorClass_PAUIConnectionPoint *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a14f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a14f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a1500*/
  {
    __3_YAXPAX_Z(v3); /*0x4a1508*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a1510*/
  }
  BYTE1(this->m_C) = 0; /*0x4a151b*/
  this->m_8 = 0; /*0x4a1521*/
  if ( (a2 & 1) != 0 ) /*0x4a1528*/
    __3_YAXPAX_Z(this); /*0x4a152b*/
  return this->__pad_0; /*0x4a1535*/
}



// ==== 0x004A1540  sub_4A1540  this=-  sig=ida-proto ====
int sub_4A1540()
{
  dword_89F7E8 = 0; /*0x4a1542*/
  dword_89F7EC = 0; /*0x4a1547*/
  dword_89F7F0 = 0; /*0x4a154c*/
  dword_89F7F4 = 0; /*0x4a1551*/
  return 0; /*0x4a1556*/
}



// ==== 0x004A1560  sub_4A1560  this=-  sig=ida-proto ====
void sub_4A1560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a156c*/
  dbl_89F800 = Math::Sqrt(v0 + v0); /*0x4a157e*/
}



// ==== 0x004A1590  sub_4A1590  this=-  sig=ida-proto ====
void sub_4A1590()
{
  dbl_89F850 = dbl_89F800 / 60.0; /*0x4a159c*/
}



// ==== 0x004A15B0  sub_4A15B0  this=-  sig=ida-proto ====
void sub_4A15B0()
{
  dbl_89F838 = 1.0 / dbl_89F850; /*0x4a15bc*/
}



// ==== 0x004A15D0  sub_4A15D0  this=-  sig=ida-proto ====
void sub_4A15D0()
{
  dbl_89F830 = 0.0174532925199433 * 45.0; /*0x4a15dc*/
}



// ==== 0x004A15F0  sub_4A15F0  this=-  sig=ida-proto ====
void sub_4A15F0()
{
  dbl_89F808 = 0.0174532925199433 * 60.0; /*0x4a15fc*/
}



// ==== 0x004A1610  sub_4A1610  this=-  sig=ida-proto ====
void sub_4A1610()
{
  dbl_89F7E0 = 0.0174532925199433 * 90.0; /*0x4a161c*/
}



// ==== 0x004A1630  sub_4A1630  this=-  sig=ida-proto ====
__int64 sub_4A1630()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89F7E0 - dbl_89F808); /*0x4a1642*/
  result = Math::RoundToInt(v0 * dbl_89F800 * 0.5); /*0x4a1656*/
  dword_89F858 = result; /*0x4a165b*/
  return result; /*0x4a1660*/
}



// ==== 0x004A1670  sub_4A1670  this=-  sig=ida-proto ====
void sub_4A1670()
{
  dbl_89F810 = Math::ArcTan((double)dword_89F858 * 0.00390625); /*0x4a1687*/
}



// ==== 0x004A16A0  sub_4A16A0  this=-  sig=ida-proto ====
void sub_4A16A0()
{
  dbl_89F828 = Math::ArcTan((double)(2 * dword_89F858) / dbl_89F800); /*0x4a16c2*/
}



// ==== 0x004A16D0  sub_4A16D0  this=-  sig=ida-proto ====
__int64 sub_4A16D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F858) + 0.5); /*0x4a16eb*/
  dword_89F84C = result; /*0x4a16f0*/
  return result; /*0x4a16f6*/
}



// ==== 0x004A1700  sub_4A1700  this=-  sig=ida-proto ====
int sub_4A1700()
{
  dword_89F7F8 = 0; /*0x4a1702*/
  return 0; /*0x4a170e*/
}



// ==== 0x004A1710  sub_4A1710  this=-  sig=ida-proto ====
int sub_4A1710()
{
  dword_89F818 = 0; /*0x4a1712*/
  dword_89F81C = 0; /*0x4a1717*/
  dword_89F820 = 0; /*0x4a171c*/
  return 0; /*0x4a1721*/
}



// ==== 0x004A1730  sub_4A1730  this=-  sig=ida-proto ====
int sub_4A1730()
{
  dword_89F848 = 0; /*0x4a1735*/
  dword_89F840 = 128; /*0x4a173f*/
  dword_89F844 = 128; /*0x4a1744*/
  return 128; /*0x4a1749*/
}



// ==== 0x004A1750  CellClass::Cleanup  this=CellClass  sig=csp ====
char __thiscall CellClass::Cleanup(CellClass *this)
{
  CellClass *p_unknown30; // edi
  int v3; // edx
  CellClass *bridgeOwnerCell; // eax
  int v5; // ecx

  p_unknown30 = (CellClass *)&this->unknown30; /*0x4a1758*/
  if ( this->unknown30 == g_DDrawSurfaceManager.description[45] ) /*0x4a1762*/
    return 0; /*0x4a1764*/
  CellClass::DestroyOverlay(p_unknown30); /*0x4a1773*/
  p_unknown30->mapCoords[0] = g_DDrawSurfaceManager.description[45]; /*0x4a177e*/
  v3 = this->mapCoords[0]; /*0x4a1780*/
  if ( this->mapCoords[0] != -1 ) /*0x4a1785*/
  {
    bridgeOwnerCell = this->bridgeOwnerCell; /*0x4a1787*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x4a1795*/
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 < (int)bridgeOwnerCell ) /*0x4a1799*/
    {
      this->mapCoords[0] = -1; /*0x4a179d*/
      this->bridgeOwnerCell = (CellClass *)((char *)bridgeOwnerCell - v5); /*0x4a17a3*/
      return 1; /*0x4a17aa*/
    }
    this->bridgeOwnerCell = 0; /*0x4a17ad*/
    this->mapCoords[0] = -1; /*0x4a17b0*/
  }
  return 1; /*0x4a17a6*/
}



// ==== 0x004A17C0  BuildingClass::BeginCrumblingTimer  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::BeginCrumblingTimer(BuildingClass *this, __int16 *a2)
{
  CellClass *p_vtable3; // edi
  void *ptr_0; // edx
  char *ptr_8; // eax
  char *v6; // eax
  void *v7; // eax
  void *v8; // edi
  void *v9; // eax
  void *v10; // edx
  int v12; // [esp+Ch] [ebp-18h] BYREF
  double v13; // [esp+10h] [ebp-14h]
  double v14; // [esp+18h] [ebp-Ch]
  __int16 *v15; // [esp+28h] [ebp+4h]

  p_vtable3 = (CellClass *)&this->?; /*0x4a17cc*/
  if ( this->? != (void *)g_DDrawSurfaceManager.description[45] ) /*0x4a17d6*/
  {
    CellClass::DestroyOverlay(p_vtable3); /*0x4a17e7*/
    p_vtable3->mapCoords[0] = g_DDrawSurfaceManager.description[45]; /*0x4a17f2*/
    ptr_0 = this->TechnoClass; /*0x4a17f4*/
    if ( this->TechnoClass != (void *)-1 ) /*0x4a17f9*/
    {
      ptr_8 = (char *)this->?; /*0x4a17fb*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_0 >= (int)ptr_8 ) /*0x4a180d*/
        v6 = 0; /*0x4a1813*/
      else
        v6 = &ptr_8[-(*(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_0)]; /*0x4a180f*/
      this->? = v6; /*0x4a1815*/
      this->TechnoClass = (void *)-1; /*0x4a1818*/
    }
  }
  v12 = *(_DWORD *)a2; /*0x4a1828*/
  if ( !BuildingClass::CreateCraterAtCell((BuildingClass *)&v12) ) /*0x4a182c*/
    return 0; /*0x4a18e3*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x4a183f*/
  Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v7); /*0x4a184b*/
  p_vtable3->mapCoords[0] = v12; /*0x4a1859*/
  v14 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5752) * 1800.0; /*0x4a187a*/
  v13 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5752) * 450.0; /*0x4a188a*/
  v15 = (__int16 *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x4a189b*/
  v8 = *(void **)&stru_A8EB00.?[416]; /*0x4a189f*/
  LOWORD(v9) = Math::RoundToInt((v14 - v13) * ((double)(int)v15 * 4.656612877414201e-10) + v13); /*0x4a18b5*/
  v10 = (void *)HIDWORD(v14); /*0x4a18ba*/
  this->TechnoClass = v8; /*0x4a18c0*/
  this->? = v10; /*0x4a18c2*/
  this->? = v9; /*0x4a18c5*/
  if ( this->TechnoClass == (void *)-1 ) /*0x4a18cd*/
    this->TechnoClass = *(void **)&stru_A8EB00.?[416]; /*0x4a18d4*/
  return 1; /*0x4a18d6*/
}



// ==== 0x004A18F0  BuildingClass::CreateCraterAtCell  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::CreateCraterAtCell(BuildingClass *this)
{
  int v1; // ebp
  BuildingClass *v3; // edi
  Object *v4; // eax
  Object *v5; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // edi
  int v17; // [esp+10h] [ebp-30h]
  int v18; // [esp+1Ch] [ebp-24h]
  int v19[4]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v20[4]; // [esp+30h] [ebp-10h] BYREF

  v1 = dword_A8E7AC; /*0x4a18f5*/
  v17 = dword_A8E7AC; /*0x4a1907*/
  dword_A8E7AC = 0; /*0x4a190b*/
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (__int16 *)this, 1) /*0x4a1933*/
    && (v3 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)this),
        v3->ambientSoundController[2] == -1) )
  {
    if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)this) + 59) == 2 ) /*0x4a1952*/
    {
      v4 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x4a1954*/
      if ( v4 ) /*0x4a195e*/
        Object::SpawnAtCell(v4, dword_8871E0->GUIOpenSound, (__int16 *)this, -1); /*0x4a196f*/
    }
    else
    {
      v5 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x4a1971*/
      if ( v5 ) /*0x4a197b*/
        Object::SpawnAtCell(v5, dword_8871E0->GUIBuildSound, (__int16 *)this, -1); /*0x4a198f*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v3, v19); /*0x4a19a4*/
    StartCoords = House::GetStartCoords((House *)v3, v20); /*0x4a19a9*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4a19be*/
    {
      v9 = *PlacementRect; /*0x4a1a45*/
      v11 = PlacementRect[1]; /*0x4a1a47*/
      v15 = PlacementRect[2]; /*0x4a1a4a*/
      v13 = PlacementRect[3]; /*0x4a1a4d*/
    }
    else
    {
      v8 = PlacementRect[2]; /*0x4a19c4*/
      if ( v8 <= 0 || (v18 = PlacementRect[3], v18 <= 0) ) /*0x4a19d8*/
      {
        v9 = *StartCoords; /*0x4a1a34*/
        v11 = StartCoords[1]; /*0x4a1a36*/
        v15 = StartCoords[2]; /*0x4a1a39*/
        v13 = StartCoords[3]; /*0x4a1a3c*/
        v1 = v17; /*0x4a1a3f*/
      }
      else
      {
        v9 = *StartCoords; /*0x4a19da*/
        v10 = *PlacementRect; /*0x4a19dc*/
        v11 = StartCoords[1]; /*0x4a19de*/
        v12 = StartCoords[2]; /*0x4a19e1*/
        v13 = StartCoords[3]; /*0x4a19e4*/
        if ( v9 > *PlacementRect ) /*0x4a19e9*/
        {
          v12 += v9 - v10; /*0x4a19ed*/
          v9 = *PlacementRect; /*0x4a19ef*/
        }
        v14 = PlacementRect[1]; /*0x4a19f1*/
        if ( v11 > v14 ) /*0x4a19fa*/
        {
          v13 += v11 - v14; /*0x4a19fe*/
          v11 = v14; /*0x4a1a00*/
        }
        if ( v12 + v9 < v10 + v8 ) /*0x4a1a0a*/
          v12 = v10 - v9 + v8 + 1; /*0x4a1a12*/
        if ( v13 + v11 < v18 + v14 ) /*0x4a1a25*/
          v13 = v18 + v14 - v11 + 1; /*0x4a1a2a*/
        v1 = v17; /*0x4a1a2c*/
        v15 = v12; /*0x4a1a30*/
      }
    }
    Cell::CreateCrater(v9 - DSurface_ViewBounds.field_0, v11 - dword_886FA4, v15, v13, 0); /*0x4a1a78*/
    dword_A8E7AC = v1; /*0x4a1a7d*/
    return 1; /*0x4a1a83*/
  }
  else
  {
    dword_A8E7AC = v1; /*0x4a1a8e*/
    return 0; /*0x4a1a96*/
  }
}



// ==== 0x004A1AA0  CellClass::DestroyOverlay  this=CellClass  sig=csp ====
char __thiscall CellClass::DestroyOverlay(CellClass *this)
{
  BuildingClass *v2; // ebx
  int v3; // eax
  int v4; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v16; // [esp+18h] [ebp-28h]
  BuildingClass *v17; // [esp+1Ch] [ebp-24h]
  int v18[4]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v19[4]; // [esp+30h] [ebp-10h] BYREF

  if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)this) ) /*0x4a1aaf*/
    return 0; /*0x4a1aaf*/
  v2 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this); /*0x4a1ac7*/
  v17 = v2; /*0x4a1ac9*/
  v3 = v2->?[2]; /*0x4a1acd*/
  if ( v3 == -1 ) /*0x4a1ad3*/
    return 0; /*0x4a1ad3*/
  v4 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3); /*0x4a1adf*/
  if ( v4 != *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 248) /*0x4a1afe*/
    && v4 != *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 252)
    && v4 != *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 256) )
  {
    return 0; /*0x4a1bfc*/
  }
  PlacementRect = BuildingClass::GetPlacementRect(v2, v18); /*0x4a1b10*/
  StartCoords = House::GetStartCoords((House *)v2, v19); /*0x4a1b19*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4a1b2e*/
  {
    v14 = *PlacementRect; /*0x4a1bad*/
    v10 = PlacementRect[1]; /*0x4a1baf*/
    v11 = PlacementRect[2]; /*0x4a1bb2*/
    v12 = PlacementRect[3]; /*0x4a1bb5*/
  }
  else
  {
    v7 = PlacementRect[2]; /*0x4a1b30*/
    if ( v7 <= 0 || (v16 = PlacementRect[3], v16 <= 0) ) /*0x4a1b44*/
    {
      v14 = *StartCoords; /*0x4a1ba0*/
      v10 = StartCoords[1]; /*0x4a1ba2*/
      v11 = StartCoords[2]; /*0x4a1ba5*/
      v12 = StartCoords[3]; /*0x4a1ba8*/
    }
    else
    {
      v8 = *StartCoords; /*0x4a1b46*/
      v9 = *PlacementRect; /*0x4a1b48*/
      v10 = StartCoords[1]; /*0x4a1b4a*/
      v11 = StartCoords[2]; /*0x4a1b4d*/
      v12 = StartCoords[3]; /*0x4a1b50*/
      if ( v8 > *PlacementRect ) /*0x4a1b55*/
      {
        v11 += v8 - v9; /*0x4a1b59*/
        v8 = *PlacementRect; /*0x4a1b5b*/
      }
      v13 = PlacementRect[1]; /*0x4a1b5d*/
      if ( v10 > v13 ) /*0x4a1b66*/
      {
        v12 += v10 - v13; /*0x4a1b6a*/
        v10 = v13; /*0x4a1b6c*/
      }
      if ( v11 + v8 < v9 + v7 ) /*0x4a1b76*/
        v11 = v9 - v8 + v7 + 1; /*0x4a1b7e*/
      if ( v12 + v10 < v16 + v13 ) /*0x4a1b91*/
        v12 = v16 + v13 - v10 + 1; /*0x4a1b96*/
      v14 = v8; /*0x4a1b98*/
      v2 = v17; /*0x4a1b9a*/
    }
  }
  v19[1] = v10; /*0x4a1bc0*/
  Cell::CreateCrater(v14, v10 - (unsigned int)DSurface_ViewBounds.field_4, v11, v12, 0); /*0x4a1bdc*/
  v2->?[2] = -1; /*0x4a1be1*/
  BYTE2(v2->?) = 0; /*0x4a1be8*/
  return 1; /*0x4a1bf1*/
}



// ==== 0x004A1C10  Power::FinalizeDrain  this=Power  sig=csp ====
int __thiscall Power::FinalizeDrain(Power *this, int Power_field_0x8)
{
  void *Power_field_0x4; // eax
  int result; // eax
  char *i; // eax
  int *p_Power_field_0x8; // esi
  unsigned int v6; // eax
  int v7; // edi

  Power_field_0x4 = this->Power_field_0x4; /*0x4a1c10*/
  if ( !Power_field_0x4 ) /*0x4a1c15*/
    this->Power_field_0x8 = 0; /*0x4a1c17*/
  *((_BYTE *)&this->Power_field_0x8 + (_DWORD)Power_field_0x4) = Power_field_0x8; /*0x4a1c1f*/
  result = (int)this->Power_field_0x4 + 1; /*0x4a1c27*/
  this->Power_field_0x4 = (void *)result; /*0x4a1c29*/
  if ( result == 4 ) /*0x4a1c2f*/
  {
    LOBYTE(this->Power_field_0xC) = this->Power_field_0x4; /*0x4a1c34*/
    for ( i = (char *)this->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1c3d*/
      i[(_DWORD)this + 8] = (char)this->Power_field_0x8; /*0x4a1c42*/
    Power_field_0x8 = (int)this->Power_field_0x8; /*0x4a1c50*/
    p_Power_field_0x8 = &Power_field_0x8; /*0x4a1c57*/
    v6 = ~this->Power_field_0x0; /*0x4a1c5b*/
    v7 = 4; /*0x4a1c5d*/
    do /*0x4a1c7e*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)p_Power_field_0x8 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1c7a*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1c7c*/
      --v7; /*0x4a1c7d*/
    }
    while ( v7 ); /*0x4a1c7e*/
    result = ~v6; /*0x4a1c80*/
    this->Power_field_0x0 = result; /*0x4a1c83*/
    this->Power_field_0x4 = 0; /*0x4a1c85*/
  }
  return result; /*0x4a1c8e*/
}



// ==== 0x004A1CA0  Power::FlagProcess  this=Power  sig=csp ====
int __thiscall Power::FlagProcess(Power *this, int Power_field_0x8)
{
  void *Power_field_0x4; // eax
  int result; // eax
  char *i; // eax
  int *p_Power_field_0x8; // esi
  unsigned int v6; // eax
  int v7; // edi

  Power_field_0x4 = this->Power_field_0x4; /*0x4a1ca0*/
  if ( !Power_field_0x4 ) /*0x4a1ca7*/
    this->Power_field_0x8 = 0; /*0x4a1ca9*/
  *((_BYTE *)&this->Power_field_0x8 + (_DWORD)Power_field_0x4) = (_BYTE)Power_field_0x8 != 0; /*0x4a1cb7*/
  result = (int)this->Power_field_0x4 + 1; /*0x4a1cbf*/
  this->Power_field_0x4 = (void *)result; /*0x4a1cc1*/
  if ( result == 4 ) /*0x4a1cc7*/
  {
    LOBYTE(this->Power_field_0xC) = this->Power_field_0x4; /*0x4a1ccc*/
    for ( i = (char *)this->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1cd5*/
      i[(_DWORD)this + 8] = (char)this->Power_field_0x8; /*0x4a1cda*/
    Power_field_0x8 = (int)this->Power_field_0x8; /*0x4a1ce8*/
    p_Power_field_0x8 = &Power_field_0x8; /*0x4a1cef*/
    v6 = ~this->Power_field_0x0; /*0x4a1cf3*/
    v7 = 4; /*0x4a1cf5*/
    do /*0x4a1d16*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)p_Power_field_0x8 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1d12*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1d14*/
      --v7; /*0x4a1d15*/
    }
    while ( v7 ); /*0x4a1d16*/
    result = ~v6; /*0x4a1d18*/
    this->Power_field_0x0 = result; /*0x4a1d1b*/
    this->Power_field_0x4 = 0; /*0x4a1d1d*/
  }
  return result; /*0x4a1d23*/
}



// ==== 0x004A1D30  Checksummer::Add_WORD  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_WORD(Checksummer *this, __int16 a2)
{
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 2); /*0x4a1d46*/
}



// ==== 0x004A1D50  Power::TimerProcess  this=AbstractClass  sig=csp ====
int __stdcall Power_TimerProcess(int a1)
{
  return Checksummer::Add_Buffer(&a1, 4); /*0x4a1d64*/
}



// ==== 0x004A1D70  Checksummer::Add_float  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_float(Checksummer *this, int a2)
{
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 4); /*0x4a1d84*/
}



// ==== 0x004A1D90  Checksummer::Add_double  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_double(Checksummer *this, int a2, int a3)
{
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 8); /*0x4a1dac*/
}



// ==== 0x004A1DB0  Checksum::AddString  this=Checksum  sig=csp ====
int __thiscall Checksum::AddString(Checksum *this, unsigned __int8 *a2)
{
  int result; // eax

  if ( a2 ) /*0x4a1db9*/
    return Checksummer::Add_Buffer((Checksummer *)this, a2, strlen((const char *)a2)); /*0x4a1dcc*/
  return result; /*0x4a1dd2*/
}



// ==== 0x004A1DE0  Checksummer::Add_Buffer  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_Buffer(Checksummer *this, unsigned __int8 *state, int a3)
{
  unsigned __int8 *v3; // ebp
  int v5; // edi
  unsigned int bytePos; // eax
  int v7; // ecx
  unsigned int i; // eax
  unsigned __int8 *v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax
  unsigned __int8 v13; // cl
  int v14; // edi
  int v15; // eax
  unsigned int j; // eax
  int v17; // eax
  int *v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int k; // eax
  unsigned __int8 *v22; // eax
  int v23; // esi
  unsigned __int8 **p_state; // eax
  unsigned int v25; // esi
  int v26; // ecx
  int crcValue; // [esp-4h] [ebp-14h]

  v3 = state; /*0x4a1de2*/
  if ( state ) /*0x4a1dee*/
  {
    v5 = a3; /*0x4a1df4*/
    if ( a3 > 0 ) /*0x4a1dfa*/
    {
      do /*0x4a1e59*/
      {
        bytePos = this->bytePos; /*0x4a1e00*/
        if ( !bytePos || bytePos >= 4 ) /*0x4a1e0e*/
          break; /*0x4a1e0e*/
        *((_BYTE *)&this->state + bytePos) = *v3; /*0x4a1e13*/
        v7 = this->bytePos + 1; /*0x4a1e1a*/
        this->bytePos = v7; /*0x4a1e1d*/
        if ( v7 == 4 ) /*0x4a1e22*/
        {
          LOBYTE(this->buffer) = 4; /*0x4a1e26*/
          for ( i = this->bytePos + 1; i < 4; ++i ) /*0x4a1e2f*/
            *((_BYTE *)&this->state + i) = this->state; /*0x4a1e34*/
          crcValue = this->crcValue; /*0x4a1e42*/
          state = (unsigned __int8 *)this->state; /*0x4a1e47*/
          this->crcValue = CRC32::Compute((unsigned __int8 *)&state, 4, crcValue); /*0x4a1e50*/
          this->bytePos = 0; /*0x4a1e52*/
        }
        ++v3; /*0x4a1e55*/
        --v5; /*0x4a1e56*/
      }
      while ( v5 > 0 ); /*0x4a1e59*/
      if ( (unsigned int)v5 >> 2 ) /*0x4a1e60*/
      {
        state = (unsigned __int8 *)((unsigned int)v5 >> 2); /*0x4a1e68*/
        a3 = v5 - 4 * ((unsigned int)v5 >> 2); /*0x4a1e71*/
        do /*0x4a1eae*/
        {
          v9 = v3; /*0x4a1e77*/
          v10 = ~this->crcValue; /*0x4a1e79*/
          v11 = 4; /*0x4a1e7b*/
          do /*0x4a1e9c*/
          {
            v10 = CRC32_Table[*v9++ ^ (unsigned __int8)v10] ^ (v10 >> 8); /*0x4a1e98*/
            --v11; /*0x4a1e9b*/
          }
          while ( v11 ); /*0x4a1e9c*/
          this->crcValue = ~v10; /*0x4a1ea0*/
          v3 += 4; /*0x4a1ea6*/
          --state; /*0x4a1eaa*/
        }
        while ( state ); /*0x4a1eae*/
        v5 = a3; /*0x4a1eb0*/
      }
      if ( v5 > 0 ) /*0x4a1eb8*/
      {
        state = (unsigned __int8 *)v5; /*0x4a1ebe*/
        do /*0x4a1f3e*/
        {
          v12 = this->bytePos; /*0x4a1ec2*/
          v13 = *v3; /*0x4a1ec5*/
          if ( !v12 ) /*0x4a1eca*/
            this->state = 0; /*0x4a1ecc*/
          *((_BYTE *)&this->state + v12) = v13; /*0x4a1ecf*/
          v14 = 4; /*0x4a1ed7*/
          v15 = this->bytePos + 1; /*0x4a1edc*/
          this->bytePos = v15; /*0x4a1ede*/
          if ( v15 == 4 ) /*0x4a1ee3*/
          {
            LOBYTE(this->buffer) = 4; /*0x4a1ee7*/
            for ( j = this->bytePos + 1; j < 4; ++j ) /*0x4a1ef0*/
              *((_BYTE *)&this->state + j) = this->state; /*0x4a1ef5*/
            v17 = this->crcValue; /*0x4a1f01*/
            a3 = this->state; /*0x4a1f03*/
            v18 = &a3; /*0x4a1f07*/
            v19 = ~v17; /*0x4a1f0b*/
            do /*0x4a1f29*/
            {
              v19 = CRC32_Table[*(unsigned __int8 *)v18 ^ (unsigned __int8)v19] ^ (v19 >> 8); /*0x4a1f25*/
              v18 = (int *)((char *)v18 + 1); /*0x4a1f27*/
              --v14; /*0x4a1f28*/
            }
            while ( v14 ); /*0x4a1f29*/
            this->crcValue = ~v19; /*0x4a1f2f*/
            this->bytePos = 0; /*0x4a1f31*/
          }
          ++v3; /*0x4a1f38*/
          --state; /*0x4a1f3a*/
        }
        while ( state ); /*0x4a1f3e*/
      }
    }
  }
  v20 = this->bytePos; /*0x4a1f40*/
  if ( !v20 ) /*0x4a1f45*/
    return this->crcValue; /*0x4a1fa0*/
  *((_BYTE *)&this->state + v20) = v20; /*0x4a1f49*/
  for ( k = this->bytePos + 1; k < 4; ++k ) /*0x4a1f54*/
    *((_BYTE *)&this->state + k) = this->state; /*0x4a1f59*/
  v22 = (unsigned __int8 *)this->state; /*0x4a1f63*/
  v23 = this->crcValue; /*0x4a1f66*/
  state = v22; /*0x4a1f68*/
  p_state = &state; /*0x4a1f6c*/
  v25 = ~v23; /*0x4a1f70*/
  v26 = 4; /*0x4a1f72*/
  do /*0x4a1f93*/
  {
    v25 = CRC32_Table[*(unsigned __int8 *)p_state ^ (unsigned __int8)v25] ^ (v25 >> 8); /*0x4a1f8f*/
    p_state = (unsigned __int8 **)((char *)p_state + 1); /*0x4a1f91*/
    --v26; /*0x4a1f92*/
  }
  while ( v26 ); /*0x4a1f93*/
  return ~v25; /*0x4a1f99*/
}



// ==== 0x004A1FB0  CRC32::Compute  this=Checksummer  sig=csp ====
int __fastcall CRC32::Compute(unsigned __int8 *a1, int a2, int a3)
{
  int v4; // edx
  unsigned int v5; // eax
  int v6; // esi

  v4 = a2 - 1; /*0x4a1fb7*/
  v5 = ~a3; /*0x4a1fba*/
  if ( a2 ) /*0x4a1fbc*/
  {
    v6 = v4 + 1; /*0x4a1fbf*/
    do /*0x4a1fde*/
    {
      v5 = CRC32_Table[*a1++ ^ (unsigned __int8)v5] ^ (v5 >> 8); /*0x4a1fda*/
      --v6; /*0x4a1fdd*/
    }
    while ( v6 ); /*0x4a1fde*/
  }
  return ~v5; /*0x4a1fe3*/
}



// ==== 0x004A2030  ObjectClass::method_4A2030  this=ObjectClass  sig=csp ====
int __thiscall sub_4A2030(ObjectClass *this, unsigned __int8 *a2, int a3)
{
  Checksummer::Add_Buffer((Checksummer *)&this->?, a2, a3); /*0x4a2042*/
  return Delegate::Dispatch((Pipe *)this, (int)a2, a3); /*0x4a2050*/
}



// ==== 0x004A20B0  ObjectClass::method_4A20B0  this=ObjectClass  sig=csp ====
int __thiscall sub_4A20B0(ObjectClass *this, unsigned __int8 *a2, int a3)
{
  int v4; // esi

  if ( !a2 || a3 < 1 ) /*0x4a20c3*/
    return 0; /*0x4a20e2*/
  v4 = Delegate::Invoke((Straw *)this, (int)a2, a3); /*0x4a20cd*/
  Checksummer::Add_Buffer((Checksummer *)&this->?, a2, v4); /*0x4a20d4*/
  return v4; /*0x4a20dc*/
}



// ==== 0x004A2140  sub_4A2140  this=-  sig=ida-proto ====
int sub_4A2140()
{
  dword_89F8E8 = 0; /*0x4a2142*/
  dword_89F8EC = 0; /*0x4a2147*/
  dword_89F8F0 = 0; /*0x4a214c*/
  dword_89F8F4 = 0; /*0x4a2151*/
  return 0; /*0x4a2156*/
}



// ==== 0x004A2160  sub_4A2160  this=-  sig=ida-proto ====
void sub_4A2160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a216c*/
  dbl_89F900 = Math::Sqrt(v0 + v0); /*0x4a217e*/
}



// ==== 0x004A2190  sub_4A2190  this=-  sig=ida-proto ====
void sub_4A2190()
{
  dbl_89F950 = dbl_89F900 / 60.0; /*0x4a219c*/
}



// ==== 0x004A21B0  sub_4A21B0  this=-  sig=ida-proto ====
void sub_4A21B0()
{
  dbl_89F938 = 1.0 / dbl_89F950; /*0x4a21bc*/
}



// ==== 0x004A21D0  sub_4A21D0  this=-  sig=ida-proto ====
void sub_4A21D0()
{
  dbl_89F930 = 0.0174532925199433 * 45.0; /*0x4a21dc*/
}



// ==== 0x004A21F0  sub_4A21F0  this=-  sig=ida-proto ====
void sub_4A21F0()
{
  dbl_89F908 = 0.0174532925199433 * 60.0; /*0x4a21fc*/
}



// ==== 0x004A2210  sub_4A2210  this=-  sig=ida-proto ====
void sub_4A2210()
{
  dbl_89F8E0 = 0.0174532925199433 * 90.0; /*0x4a221c*/
}



// ==== 0x004A2230  sub_4A2230  this=-  sig=ida-proto ====
__int64 sub_4A2230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89F8E0 - dbl_89F908); /*0x4a2242*/
  result = Math::RoundToInt(v0 * dbl_89F900 * 0.5); /*0x4a2256*/
  dword_89F958 = result; /*0x4a225b*/
  return result; /*0x4a2260*/
}



// ==== 0x004A2270  sub_4A2270  this=-  sig=ida-proto ====
void sub_4A2270()
{
  dbl_89F910 = Math::ArcTan((double)dword_89F958 * 0.00390625); /*0x4a2287*/
}



// ==== 0x004A22A0  sub_4A22A0  this=-  sig=ida-proto ====
void sub_4A22A0()
{
  dbl_89F928 = Math::ArcTan((double)(2 * dword_89F958) / dbl_89F900); /*0x4a22c2*/
}



// ==== 0x004A22D0  sub_4A22D0  this=-  sig=ida-proto ====
__int64 sub_4A22D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F958) + 0.5); /*0x4a22eb*/
  dword_89F94C = result; /*0x4a22f0*/
  return result; /*0x4a22f6*/
}



// ==== 0x004A2300  sub_4A2300  this=-  sig=ida-proto ====
int sub_4A2300()
{
  word_89F8F8 = 0; /*0x4a2302*/
  word_89F8FA = 0; /*0x4a2308*/
  return 0; /*0x4a230e*/
}



// ==== 0x004A2310  sub_4A2310  this=-  sig=ida-proto ====
int sub_4A2310()
{
  dword_89F918 = 0; /*0x4a2312*/
  dword_89F91C = 0; /*0x4a2317*/
  dword_89F920 = 0; /*0x4a231c*/
  return 0; /*0x4a2321*/
}



// ==== 0x004A2330  sub_4A2330  this=-  sig=ida-proto ====
int sub_4A2330()
{
  dword_89F948 = 0; /*0x4a2335*/
  dword_89F940 = 128; /*0x4a233f*/
  dword_89F944 = 128; /*0x4a2344*/
  return 128; /*0x4a2349*/
}



// ==== 0x004A2350  TabClass::initStripClass  this=TabClass  sig=csp ====
_DWORD *__thiscall TabClass::initStripClass(TabClass *this)
{
  this->TabClass_field_0x0 = 0; /*0x4a2354*/
  this->TabClass_field_0x4 = 0; /*0x4a2356*/
  LOBYTE(this->TabClass_field_0x8[0]) = 0; /*0x4a2359*/
  BYTE1(this->TabClass_field_0x8[0]) = 0; /*0x4a235c*/
  BYTE2(this->TabClass_field_0x8[0]) = 0; /*0x4a235f*/
  this->TabClass_field_0xC = 0; /*0x4a2362*/
  return &this->TabClass_field_0x0; /*0x4a2365*/
}



// ==== 0x004A2370  ObjectClass::DrawSidebarCreditsTimer  this=ObjectClass  sig=csp ====
unsigned __int8 __userpurge DrawSidebarCreditsTimer@<al>(ObjectClass *this, int a2@<edi>, char a3)
{
  int v3; // ecx
  ObjectClass *v4; // esi
  int v5; // ebp
  unsigned __int8 result; // al
  int v7; // kr00_4
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v11; // ecx
  wchar_t *StringCSF; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // [esp-14h] [ebp-38h]
  int v17; // [esp-Ch] [ebp-30h]
  int v18; // [esp-8h] [ebp-2Ch]
  int v19; // [esp+8h] [ebp-1Ch] BYREF
  int v20[3]; // [esp+Ch] [ebp-18h] BYREF
  int v21[3]; // [esp+18h] [ebp-Ch] BYREF

  v5 = v3; /*0x4a237a*/
  if ( (_BYTE)this || (result = *(_BYTE *)(v3 + 8)) != 0 ) /*0x4a2383*/
  {
    v7 = (*((int (__thiscall **)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar, a2); /*0x4a239f*/
    if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x4a23aa*/
    {
      UI_Draw_6D0E60(v4); /*0x4a23b5*/
      v19 = v7 / 2; /*0x4a23c2*/
      v20[0] = 2; /*0x4a23c6*/
      v8 = *(_DWORD *)(v5 + 4); /*0x4a241f*/
      v9 = ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[620] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4a2422*/
         | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
         | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
      if ( v8 / 3600 > 99 ) /*0x4a243a*/
        v8 = 359999; /*0x4a243c*/
      v10 = v8 / 3600; /*0x4a2454*/
      v11 = 720 * (4 * (v8 / -3600) - v8 / 3600) + v8; /*0x4a246d*/
      v18 = v11 % 60; /*0x4a2488*/
      v17 = v11 / 60; /*0x4a2489*/
      StringCSF = GetStringCSF((wchar_t *)&stru_81AF8C.IsAnimatedTiberium, 0, aDRa2mdpostCred, 107); /*0x4a2499*/
      swprintf(&word_89F860, (const size_t)StringCSF, (const wchar_t *const)v10, v17, v18); /*0x4a24a4*/
      v13 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 30))(DSurface_Sidebar); /*0x4a24c6*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a24db*/
                                  v20,
                                  (size_t)&word_89F860,
                                  (int)DSurface_Sidebar,
                                  v13,
                                  (int)v21,
                                  (int)&v19,
                                  v9,
                                  0,
                                  0x4108u);
      *(_BYTE *)(v5 + 8) = 0; /*0x4a24e3*/
      *(_BYTE *)(v5 + 10) = 0; /*0x4a24e7*/
    }
    else
    {
      if ( *(_BYTE *)(v5 + 10) && *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1756) >= 2 ) /*0x4a250b*/
      {
        if ( *(_BYTE *)(v5 + 9) ) /*0x4a250d*/
          v14 = **(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1744); /*0x4a2526*/
        else
          v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1744) + 4); /*0x4a2530*/
        PlayVocClass(v14, 0x2000, 0.5, 0); /*0x4a2533*/
      }
      UI_Draw_6D0E60(v4); /*0x4a253d*/
      v19 = v7 / 2; /*0x4a254e*/
      v20[0] = 2; /*0x4a2552*/
      v16 = ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[620] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4a25be*/
          | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
          | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
      v15 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 30))(DSurface_Sidebar); /*0x4a25c7*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a25db*/
                                  v20,
                                  (size_t)&off_81FBB4,
                                  (int)DSurface_Sidebar,
                                  v15,
                                  (int)v21,
                                  (int)&v19,
                                  v16,
                                  0,
                                  0x4108u);
      *(_BYTE *)(v5 + 8) = 0; /*0x4a25e3*/
      *(_BYTE *)(v5 + 10) = 0; /*0x4a25e7*/
    }
  }
  return result; /*0x4a24ed*/
}



// ==== 0x004A2600  CountdownTimer::UpdateDisplay  this=CountdownTimer  sig=csp ====
char __thiscall CountdownTimer::UpdateDisplay(CountdownTimer *this, char a2)
{
  int uniqueId; // edi
  void **p_vtable2; // ebx
  int v5; // eax
  int abstractFlags; // eax
  CountdownTimer v7; // eax
  void *ptr_C; // ecx
  int v9; // edx
  CountdownTimer v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx

  dword_89F95C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4a260f*/
  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x4a261b*/
  {
    uniqueId = dword_A8B230[43].uniqueId; /*0x4a262a*/
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x4a2639*/
    {
      p_vtable2 = &dword_A8B230[43].ptr_8; /*0x4a2630*/
      uniqueId += Timer::GetTicks() - (_DWORD)*p_vtable2; /*0x4a2645*/
    }
    v5 = *((_DWORD *)this + 1); /*0x4a265b*/
    *this = (CountdownTimer)(uniqueId / 60); /*0x4a2660*/
    if ( uniqueId / 60 != v5 || (LOBYTE(abstractFlags) = a2) != 0 ) /*0x4a266a*/
    {
      *((_DWORD *)this + 1) = uniqueId / 60; /*0x4a2670*/
LABEL_26:
      *((_BYTE *)this + 8) = 1; /*0x4a2757*/
      LOBYTE(abstractFlags) = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x4a2761*/
      byte_884B90 = 1; /*0x4a2766*/
      return abstractFlags; /*0x4a2766*/
    }
    return abstractFlags; /*0x4a266a*/
  }
  v7 = (CountdownTimer)(*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 24))(&dword_A83D4C->__pad_C[24]); /*0x4a2684*/
  *this = v7; /*0x4a2689*/
  *this = *(int *)&v7 <= 0 ? 0 : v7;
  if ( dword_A8B230[127].ptr_C != (void *)-1 ) /*0x4a26a7*/
    goto LABEL_12; /*0x4a26a7*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x4a26a9*/
  ptr_C = dword_A8B230[127].ptr_C; /*0x4a26af*/
  if ( ptr_C != (void *)-1 ) /*0x4a26b8*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_C >= abstractFlags ) /*0x4a26c4*/
      goto LABEL_13; /*0x4a26c4*/
    abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_C; /*0x4a26c6*/
  }
  if ( abstractFlags ) /*0x4a26ca*/
  {
LABEL_12:
    *((_BYTE *)this + 8) = 1; /*0x4a26d3*/
    LOBYTE(abstractFlags) = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x4a26d6*/
  }
LABEL_13:
  v9 = *((_DWORD *)this + 1); /*0x4a26db*/
  v10 = *this; /*0x4a26de*/
  if ( v9 != *this )
  {
    if ( a2 )
    {
      *((_BYTE *)this + 10) = 0; /*0x4a26f0*/
      *(this + 1) = v10; /*0x4a26f4*/
    }
    else
    {
      v11 = *((_DWORD *)this + 3); /*0x4a26f9*/
      if ( v11 ) /*0x4a26fe*/
        *((_DWORD *)this + 3) = v11 - 1; /*0x4a2701*/
      *((_DWORD *)this + 3) = *(_DWORD *)&v10 - v9 <= 0 ? 3 : 1;
      v12 = (int)abs32(*(_DWORD *)&v10 - v9) >> 3; /*0x4a271e*/
      if ( v12 >= 1 ) /*0x4a2723*/
      {
        if ( v12 > 143 ) /*0x4a272e*/
          v12 = 143; /*0x4a2730*/
      }
      else
      {
        v12 = 1; /*0x4a2725*/
      }
      if ( *((_DWORD *)this + 1) > *(_DWORD *)&v10 ) /*0x4a2738*/
        v12 = -v12; /*0x4a273a*/
      v13 = v12 + *((_DWORD *)this + 1); /*0x4a273f*/
      *((_DWORD *)this + 1) = v13; /*0x4a2743*/
      if ( v13 - v12 != v13 ) /*0x4a274a*/
      {
        *((_BYTE *)this + 10) = 1; /*0x4a2751*/
        *((_BYTE *)this + 9) = v12 > 0; /*0x4a2754*/
      }
    }
    goto LABEL_26; /*0x4a26f7*/
  }
  return abstractFlags; /*0x4a276c*/
}



// ==== 0x004A2780  CacheStraw::StreamToBuffer  this=CacheStraw  sig=csp ====
int __thiscall Delegate::StreamToBuffer(CacheStraw *this, char *a2, int a3)
{
  int result; // eax
  char *v5; // ebp
  int v6; // ebx
  signed int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // [esp+10h] [ebp-4h]

  result = 0; /*0x4a2786*/
  v10 = 0; /*0x4a278c*/
  if ( *(_DWORD *)&this->__pad_0[12] ) /*0x4a2789*/
  {
    v5 = a2; /*0x4a2794*/
    if ( a2 ) /*0x4a279a*/
    {
      v6 = a3; /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          v7 = this->field_1C; /*0x4a27a4*/
          if ( v7 > 0 ) /*0x4a27a9*/
          {
            if ( v7 >= v6 ) /*0x4a27ad*/
              v7 = v6; /*0x4a27af*/
            memcpy(v5, (const void *)(*(_DWORD *)&this->__pad_0[12] + *(_DWORD *)&this->__pad_14[4]), v7); /*0x4a27bc*/
            v8 = this->field_1C - v7; /*0x4a27cf*/
            v6 -= v7; /*0x4a27d4*/
            *(_DWORD *)&this->__pad_14[4] += v7; /*0x4a27d6*/
            v10 += v7; /*0x4a27d9*/
            this->field_1C = v8; /*0x4a27dd*/
            v5 += v7; /*0x4a27e0*/
          }
          if ( !v6 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          v9 = Delegate::Invoke((Straw *)this, *(_DWORD *)&this->__pad_0[12], this->field_10); /*0x4a27f0*/
          this->field_1C = v9; /*0x4a27f7*/
          *(_DWORD *)&this->__pad_14[4] = 0; /*0x4a27fa*/
          if ( !v9 ) /*0x4a2801*/
            break; /*0x4a2801*/
        }
        while ( v6 > 0 ); /*0x4a2805*/
        return v10; /*0x4a2807*/
      }
    }
  }
  return result; /*0x4a280b*/
}



// ==== 0x004A2820  CStreamClass::Constructor  this=CStreamClass  sig=csp ====
_DWORD *__thiscall VectorClass_K_8::Constructor(CStreamClass *this)
{
  this->CStreamClass_field_0x08 = 0; /*0x4a282a*/
  this->CStreamClass_field_0x0C = 0; /*0x4a282d*/
  LOBYTE(this->CStreamClass_field_0x10) = 0; /*0x4a2830*/
  BYTE1(this->CStreamClass_field_0x10) = 0; /*0x4a2833*/
  this->CStreamClass_field_0x14 = 0; /*0x4a2836*/
  this->CStreamClass_field_0x18 = __2_YAPAXI_Z(0x10000u); /*0x4a2843*/
  this->CStreamClass_field_0x1C = __2_YAPAXI_Z(0x10000u); /*0x4a2850*/
  this->CStreamClass_field_0x20 = __2_YAPAXI_Z(0x10000u); /*0x4a285b*/
  *(_DWORD *)this->__pad_0 = &CStreamClass::`vftable'; /*0x4a285e*/
  this->CStreamClass_field_0x04 = (int)&CStreamClass::`vftable'; /*0x4a2864*/
  this->CStreamClass_field_0x24 = 0xFFFF; /*0x4a286b*/
  return this->__pad_0; /*0x4a2874*/
}



// ==== 0x004A2880  CStreamClass::method_4A2880  this=CStreamClass  sig=csp ====
void __thiscall sub_4A2880(CStreamClass *this)
{
  int CStreamClass_field_0x08; // eax
  void *CStreamClass_field_0x18; // ecx
  void *CStreamClass_field_0x1C; // edx
  int v5; // esi
  ULONG v6; // [esp+0h] [ebp-8h]

  CStreamClass_field_0x08 = this->CStreamClass_field_0x08; /*0x4a2886*/
  *(_DWORD *)this->__pad_0 = &CStreamClass::`vftable'; /*0x4a2889*/
  this->CStreamClass_field_0x04 = (int)&CStreamClass::`vftable'; /*0x4a2891*/
  if ( CStreamClass_field_0x08 ) /*0x4a2898*/
  {
    if ( BYTE1(this->CStreamClass_field_0x10) && this->CStreamClass_field_0x14 > 0 && this->CStreamClass_field_0x08 ) /*0x4a28aa*/
      IStream::Read((IStream *)this->CStreamClass_field_0x18, (void *)this->CStreamClass_field_0x14, v6); /*0x4a28b4*/
    if ( this->CStreamClass_field_0x08 /*0x4a28da*/
      && (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->CStreamClass_field_0x08 + 32))(
           this->CStreamClass_field_0x08,
           0) >= 0 )
    {
      if ( !this->CStreamClass_field_0x08 ) /*0x4a28dc*/
        WinAPI::Wrapper(-2147467261); /*0x4a28e6*/
      (*(void (__stdcall **)(int))(*(_DWORD *)this->CStreamClass_field_0x08 + 8))(this->CStreamClass_field_0x08); /*0x4a28f1*/
      this->CStreamClass_field_0x08 = 0; /*0x4a28f4*/
    }
  }
  __3_YAXPAX_Z((void *)this->CStreamClass_field_0x20); /*0x4a28fb*/
  CStreamClass_field_0x18 = (void *)this->CStreamClass_field_0x18; /*0x4a2900*/
  this->CStreamClass_field_0x20 = 0; /*0x4a2903*/
  __3_YAXPAX_Z(CStreamClass_field_0x18); /*0x4a2907*/
  CStreamClass_field_0x1C = (void *)this->CStreamClass_field_0x1C; /*0x4a290c*/
  this->CStreamClass_field_0x18 = 0; /*0x4a290f*/
  __3_YAXPAX_Z(CStreamClass_field_0x1C); /*0x4a2913*/
  this->CStreamClass_field_0x1C = 0; /*0x4a2918*/
  v5 = this->CStreamClass_field_0x08; /*0x4a291b*/
  if ( v5 ) /*0x4a2923*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4a2928*/
}



// ==== 0x004A2930  CStreamClass::AddRef  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::AddRef(CStreamClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a293f*/
  return InterlockedIncrement(&this->CStreamClass_field_0x0C); /*0x4a294b*/
}



// ==== 0x004A2950  CStreamClass::Release  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::Release(CStreamClass *this)
{
  LONG v1; // esi

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x4a2960*/
  v1 = InterlockedDecrement(&this->CStreamClass_field_0x0C); /*0x4a296d*/
  if ( !v1 && this ) /*0x4a2975*/
    (*(void (__thiscall **)(CStreamClass *, int))(*(_DWORD *)this->__pad_0 + 56))(this, 1); /*0x4a297d*/
  return v1; /*0x4a2982*/
}



// ==== 0x004A2990  CStreamClass::QueryInterface  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::QueryInterface(CStreamClass *this, const void *a2, _DWORD *a3)
{
  int *p_CStreamClass_field_0x04; // ecx

  if ( !a3 ) /*0x4a2997*/
    return -2147467261; /*0x4a2999*/
  *a3 = 0; /*0x4a29b6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a29c0*/
    *a3 = this; /*0x4a29c4*/
  if ( !memcmp(a2, &unk_7F7CF0, 0x10u) ) /*0x4a29d5*/
    *a3 = this; /*0x4a29da*/
  if ( !memcmp(a2, &unk_7E9530, 0x10u) ) /*0x4a29ea*/
  {
    if ( this ) /*0x4a29f2*/
      p_CStreamClass_field_0x04 = &this->CStreamClass_field_0x04; /*0x4a29f4*/
    else
      p_CStreamClass_field_0x04 = 0; /*0x4a29f9*/
    *a3 = p_CStreamClass_field_0x04; /*0x4a29fb*/
  }
  if ( !*a3 ) /*0x4a29fd*/
    return -2147467262; /*0x4a2a02*/
  (*(void (__stdcall **)(CStreamClass *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x4a2a0e*/
  return 0; /*0x4a299e*/
}



// ==== 0x004A2A20  CStreamClass::StubReturnNullPointer  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::StubReturnNullPointer(CStreamClass *this, int (__stdcall ***a2)(_DWORD, void *, _DWORD))
{
  int v3; // ebx
  int v4; // eax
  int CStreamClass_field_0x04; // eax
  int (__stdcall ***v6)(_DWORD, void *, _DWORD); // edi

  if ( !a2 ) /*0x4a2a27*/
    return -2147467261; /*0x4a2a29*/
  if ( this->CStreamClass_field_0x04 ) /*0x4a2a36*/
    return -2147467259; /*0x4a2a3d*/
  v3 = (**a2)(a2, &unk_81FC50, &a2); /*0x4a2a56*/
  if ( v3 >= 0 ) /*0x4a2a5a*/
  {
    CStreamClass_field_0x04 = this->CStreamClass_field_0x04; /*0x4a2a72*/
    v6 = a2; /*0x4a2a76*/
    if ( CStreamClass_field_0x04 ) /*0x4a2a7c*/
      (*(void (__stdcall **)(int))(*(_DWORD *)CStreamClass_field_0x04 + 8))(CStreamClass_field_0x04); /*0x4a2a81*/
    this->CStreamClass_field_0x04 = (int)v6; /*0x4a2a84*/
  }
  else
  {
    v4 = this->CStreamClass_field_0x04; /*0x4a2a5c*/
    if ( v4 ) /*0x4a2a61*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(this->CStreamClass_field_0x04); /*0x4a2a66*/
    this->CStreamClass_field_0x04 = 0; /*0x4a2a69*/
  }
  if ( v3 < 0 && v3 != -2147467262 ) /*0x4a2a92*/
    WinAPI::Wrapper(v3); /*0x4a2a95*/
  return 0; /*0x4a2a2e*/
}



// ==== 0x004A2AB0  CStreamClass::StreamRead  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::StreamRead(CStreamClass *this, _DWORD *a2)
{
  char *v2; // ecx
  int result; // eax
  ULONG v4; // [esp+0h] [ebp-4h]

  v2 = (char *)this - 4; /*0x4a2ab8*/
  if ( BYTE1(this->CStreamClass_field_0x0C) && *((int *)v2 + 5) > 0 && *((_DWORD *)v2 + 2) ) /*0x4a2ac6*/
    IStream::Read(*((IStream **)v2 + 6), *((void **)v2 + 5), v4); /*0x4a2ad2*/
  if ( !this->CStreamClass_field_0x04 ) /*0x4a2ad7*/
    return -2147467259; /*0x4a2ade*/
  if ( a2 ) /*0x4a2aee*/
  {
    if ( !this->CStreamClass_field_0x04 ) /*0x4a2af0*/
      WinAPI::Wrapper(-2147467261); /*0x4a2afc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)this->CStreamClass_field_0x04 + 4))(this->CStreamClass_field_0x04); /*0x4a2b07*/
    *a2 = this->CStreamClass_field_0x04; /*0x4a2b0d*/
  }
  if ( !this->CStreamClass_field_0x04 ) /*0x4a2b0f*/
    WinAPI::Wrapper(-2147467261); /*0x4a2b1c*/
  result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->CStreamClass_field_0x04 + 32))( /*0x4a2b29*/
             this->CStreamClass_field_0x04,
             0);
  if ( result >= 0 ) /*0x4a2b2e*/
  {
    if ( !this->CStreamClass_field_0x04 ) /*0x4a2b30*/
      WinAPI::Wrapper(-2147467261); /*0x4a2b3c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)this->CStreamClass_field_0x04 + 8))(this->CStreamClass_field_0x04); /*0x4a2b47*/
    this->CStreamClass_field_0x04 = 0; /*0x4a2b4a*/
    return 0; /*0x4a2b51*/
  }
  return result; /*0x4a2ae3*/
}



// ==== 0x004A2B60  CStreamClass::?  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt03(int a1, char *a2, signed int Size, signed int *a4)
{
  int v4; // ebp
  int result; // eax
  _DWORD *v6; // esi
  signed int *v7; // eax
  int v8; // eax
  size_t v9; // edi
  size_t v10; // eax
  int v11; // eax
  int *v12; // edi
  int v13; // edx
  unsigned __int8 *v14; // ecx
  _BYTE *v15; // [esp+8h] [ebp-1Ch]
  int v16; // [esp+20h] [ebp-4h] BYREF

  v4 = Size; /*0x4a2b66*/
  if ( !a2 ) /*0x4a2b6e*/
    return -2147467261; /*0x4a2b72*/
  if ( Size < 0 ) /*0x4a2b7e*/
    return -2147024809; /*0x4a2b82*/
  v6 = (_DWORD *)a1; /*0x4a2b8c*/
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2b90*/
    return -2147467259; /*0x4a2b99*/
  if ( *(_BYTE *)(a1 + 17) ) /*0x4a2ba3*/
    return -2147467259; /*0x4a2baa*/
  v7 = a4; /*0x4a2bb6*/
  *(_BYTE *)(a1 + 16) = 1; /*0x4a2bba*/
  if ( v7 ) /*0x4a2bc0*/
    *v7 = 0; /*0x4a2bc2*/
  for ( ; v4 > 0; v6[5] = v6[10] ) /*0x4a2bca*/
  {
    v8 = v6[5]; /*0x4a2bd0*/
    if ( v8 > 0 ) /*0x4a2bd5*/
    {
      v9 = v4; /*0x4a2bd9*/
      if ( v4 >= v8 ) /*0x4a2bdb*/
        v9 = v6[5]; /*0x4a2bdd*/
      memcpy(a2, (const void *)(v6[6] + v6[10] - v8), v9); /*0x4a2bf0*/
      v4 -= v9; /*0x4a2c01*/
      v10 = v6[5] - v9; /*0x4a2c03*/
      a2 += v9; /*0x4a2c05*/
      v6[5] = v10; /*0x4a2c09*/
    }
    if ( !v4 ) /*0x4a2c0e*/
      break; /*0x4a2c0e*/
    v11 = v6[2]; /*0x4a2c14*/
    a1 = 0; /*0x4a2c17*/
    if ( !v11 ) /*0x4a2c21*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c28*/
    v12 = v6 + 9; /*0x4a2c34*/
    result = (*(int (__stdcall **)(_DWORD, _DWORD *, int, int *))(*(_DWORD *)v6[2] + 12))(v6[2], v6 + 9, 8, &a1); /*0x4a2c3e*/
    if ( result < 0 ) /*0x4a2c43*/
      return result; /*0x4a2c43*/
    if ( a1 != 8 ) /*0x4a2c4a*/
      return -2147467259; /*0x4a2c4a*/
    if ( !v6[2] ) /*0x4a2c50*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c5c*/
    result = (*(int (__stdcall **)(_DWORD, _DWORD, int, int *))(*(_DWORD *)v6[2] + 12))(v6[2], v6[7], *v12, &a1); /*0x4a2c73*/
    if ( result < 0 ) /*0x4a2c78*/
      return result; /*0x4a2c78*/
    v13 = *v12; /*0x4a2c7a*/
    if ( a1 != *v12 ) /*0x4a2c82*/
      return -2147467259; /*0x4a2c82*/
    v15 = (_BYTE *)v6[6]; /*0x4a2c92*/
    v14 = (unsigned __int8 *)v6[7]; /*0x4a2c93*/
    v16 = 0x10000; /*0x4a2c96*/
    DecodeBlockLCW(v14, v13, v15, &v16, 0); /*0x4a2c9e*/
  }
  if ( a4 ) /*0x4a2cb7*/
    *a4 = Size; /*0x4a2cbd*/
  return 0; /*0x4a2b70*/
}



// ==== 0x004A2CD0  CStreamClass::CopyStreamToBuffer  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::CopyStreamToBuffer(CStreamClass *this, IStream *Src, signed int Size, size_t *a4)
{
  IStream *v4; // ebp
  size_t v5; // edi
  signed int v6; // ebx
  int result; // eax
  int CStreamClass_field_0x14; // ecx
  int v9; // eax
  ULONG v10; // [esp+0h] [ebp-10h]

  v4 = Src; /*0x4a2cd2*/
  v5 = Size; /*0x4a2cd8*/
  v6 = Size; /*0x4a2cde*/
  if ( !Src ) /*0x4a2ce0*/
    return -2147467261; /*0x4a2ceb*/
  if ( Size < 0 ) /*0x4a2cf0*/
    return -2147024809; /*0x4a2cfb*/
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2d02*/
    return -2147467259; /*0x4a2d12*/
  if ( LOBYTE(this->CStreamClass_field_0x10) ) /*0x4a2d15*/
    return -2147467259; /*0x4a2d25*/
  BYTE1(this->CStreamClass_field_0x10) = 1; /*0x4a2d2a*/
  if ( !Size ) /*0x4a2d2e*/
    return 0; /*0x4a2d2e*/
  if ( a4 ) /*0x4a2d3a*/
    *a4 = 0; /*0x4a2d3c*/
  CStreamClass_field_0x14 = this->CStreamClass_field_0x14; /*0x4a2d42*/
  if ( CStreamClass_field_0x14 > 0 ) /*0x4a2d47*/
  {
    if ( Size >= 0x10000 - CStreamClass_field_0x14 ) /*0x4a2d52*/
      v5 = 0x10000 - CStreamClass_field_0x14; /*0x4a2d54*/
    memcpy((void *)(this->CStreamClass_field_0x18 + this->CStreamClass_field_0x14), Src, v5); /*0x4a2d61*/
    v9 = v5 + this->CStreamClass_field_0x14; /*0x4a2d72*/
    v4 = (IStream *)((char *)Src + v5); /*0x4a2d74*/
    v6 = Size - v5; /*0x4a2d76*/
    this->CStreamClass_field_0x14 = v9; /*0x4a2d7d*/
    if ( v9 == 0x10000 ) /*0x4a2d80*/
    {
      result = IStream::Read((IStream *)this->CStreamClass_field_0x18, (void *)0x10000, v10); /*0x4a2d8d*/
      if ( result < 0 ) /*0x4a2d94*/
        return result; /*0x4a2d94*/
      this->CStreamClass_field_0x14 = 0; /*0x4a2d96*/
    }
    v5 = Size; /*0x4a2d9d*/
  }
  if ( v6 < 0x10000 ) /*0x4a2da7*/
  {
LABEL_23:
    if ( v6 > 0 ) /*0x4a2dd4*/
    {
      memcpy((void *)this->CStreamClass_field_0x18, v4, v6); /*0x4a2ddc*/
      v5 = Size; /*0x4a2de1*/
      this->CStreamClass_field_0x14 = v6; /*0x4a2de8*/
    }
    if ( a4 ) /*0x4a2df1*/
      *a4 = v5; /*0x4a2df3*/
    return 0; /*0x4a2df5*/
  }
  while ( 1 ) /*0x4a2db1*/
  {
    result = IStream::Read(v4, (void *)0x10000, v10); /*0x4a2db1*/
    if ( result < 0 ) /*0x4a2db8*/
      return result; /*0x4a2ce2*/
    v6 -= 0x10000; /*0x4a2dba*/
    v4 += 0x2000; /*0x4a2dc0*/
    if ( v6 < 0x10000 ) /*0x4a2dcc*/
    {
      v5 = Size; /*0x4a2dce*/
      goto LABEL_23; /*0x4a2dce*/
    }
  }
}



// ==== 0x004A2E00  CStreamClass::Read  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Read(CStreamClass *this, int a2, int a3, int a4, int a5)
{
  if ( LOBYTE(this->CStreamClass_field_0x10) || BYTE1(this->CStreamClass_field_0x10) ) /*0x4a2e0c*/
    return -2147467259; /*0x4a2e45*/
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2e13*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e1f*/
  return (*(int (__stdcall **)(int, int, int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 20))( /*0x4a2e41*/
           this->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5);
}



// ==== 0x004A2E50  CStreamClass::Write  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Write(CStreamClass *this, int a2, int a3)
{
  if ( LOBYTE(this->CStreamClass_field_0x10) || BYTE1(this->CStreamClass_field_0x10) ) /*0x4a2e5c*/
    return -2147467259; /*0x4a2e8b*/
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2e63*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e6f*/
  return (*(int (__stdcall **)(int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 24))( /*0x4a2e87*/
           this->CStreamClass_field_0x08,
           a2,
           a3);
}



// ==== 0x004A2EA0  CStreamClass::Seek  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Seek(CStreamClass *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2ea5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2eb1*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 28))( /*0x4a2ed8*/
           this->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}



// ==== 0x004A2EE0  CStreamClass::SetSize  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::SetSize(CStreamClass *this, int a2)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2ee5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2ef1*/
  return (*(int (__stdcall **)(int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 32))( /*0x4a2f04*/
           this->CStreamClass_field_0x08,
           a2);
}



// ==== 0x004A2F10  CStreamClass::Commit  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Commit(CStreamClass *this)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2f15*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f21*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)this->CStreamClass_field_0x08 + 36))(this->CStreamClass_field_0x08); /*0x4a2f2f*/
}



// ==== 0x004A2F40  CStreamClass::Revert  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Revert(CStreamClass *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2f45*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f51*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 40))( /*0x4a2f78*/
           this->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}



// ==== 0x004A2F80  CStreamClass::LockRegion  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::LockRegion(CStreamClass *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2f85*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f91*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 44))( /*0x4a2fb8*/
           this->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}



// ==== 0x004A2FC0  CStreamClass::UnlockRegion  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::UnlockRegion(CStreamClass *this, int a2, int a3)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2fc5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2fd1*/
  return (*(int (__stdcall **)(int, int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 48))( /*0x4a2fe9*/
           this->CStreamClass_field_0x08,
           a2,
           a3);
}



// ==== 0x004A2FF0  CStreamClass::Stat  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::Stat(CStreamClass *this, int a2)
{
  if ( !this->CStreamClass_field_0x08 ) /*0x4a2ff5*/
    WinAPI::Wrapper(-2147467261); /*0x4a3001*/
  return (*(int (__stdcall **)(int, int))(*(_DWORD *)this->CStreamClass_field_0x08 + 52))( /*0x4a3014*/
           this->CStreamClass_field_0x08,
           a2);
}



// ==== 0x004A3020  IStream::Read  this=IStream  sig=csp ====
int __stdcall IStream::Read(IStream *pstm, void *pv, ULONG cb)
{
  int v3; // ecx
  _DWORD *v4; // esi
  void *v5; // ecx
  int result; // eax
  void *v7; // [esp+20h] [ebp-4h] BYREF

  v4 = (_DWORD *)v3; /*0x4a3026*/
  v7 = pv; /*0x4a302d*/
  WriteCompressionBlock(pstm, (unsigned int)pv, *(_BYTE **)(v3 + 28), (int *)&v7, *(_DWORD *)(v3 + 32)); /*0x4a303e*/
  v5 = v7; /*0x4a3043*/
  v4[10] = 0x10000; /*0x4a304a*/
  pv = 0; /*0x4a3051*/
  v4[9] = v5; /*0x4a3059*/
  if ( !v4[2] ) /*0x4a305b*/
    WinAPI::Wrapper(-2147467261); /*0x4a3067*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD *, int, void **))(*(_DWORD *)v4[2] + 16))(v4[2], v4 + 9, 8, &pv); /*0x4a307a*/
  if ( result >= 0 )
  {
    if ( pv == (void *)8 )
    {
      if ( !v4[2] ) /*0x4a3093*/
        WinAPI::Wrapper(-2147467261); /*0x4a309f*/
      result = (*(int (__stdcall **)(_DWORD, _DWORD, void *, void **))(*(_DWORD *)v4[2] + 16))(v4[2], v4[7], v7, &pv); /*0x4a30b8*/
      if ( result >= 0 )
        return v7 != pv ? 0x80004005 : 0;
    }
    else
    {
      return -2147467259; /*0x4a3089*/
    }
  }
  return result; /*0x4a3088*/
}



// ==== 0x004A3110  CStreamClass::ddtor  this=CStreamClass  sig=csp ====
void *__userpurge CStreamClass::ddtor@<eax>(CStreamClass *this, ULONG a2@<edi>, char a3)
{
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  void *v6; // ecx
  void *v7; // edx
  int v8; // eax

  v4 = v3; /*0x4a3112*/
  v5 = *(_DWORD *)(v3 + 8); /*0x4a3116*/
  *(_DWORD *)v3 = &CStreamClass::`vftable'; /*0x4a3119*/
  *(_DWORD *)(v3 + 4) = &CStreamClass::`vftable'; /*0x4a3121*/
  if ( v5 ) /*0x4a3128*/
  {
    if ( *(_BYTE *)(v3 + 17) /*0x4a314b*/
      && *(int *)(v3 + 20) > 0
      && !CStreamClass::IsEmpty((CStreamClass *)(v3 + 8), 0)
      && *(int *)(v4 + 20) > 0 )
    {
      IStream::Read(*(IStream **)(v4 + 24), *(void **)(v4 + 20), a2); /*0x4a3154*/
    }
    if ( *(_DWORD *)(v4 + 8) /*0x4a317b*/
      && (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 8) + 32))(*(_DWORD *)(v4 + 8), 0) >= 0 )
    {
      if ( !*(_DWORD *)(v4 + 8) ) /*0x4a317d*/
        WinAPI::Wrapper(-2147467261); /*0x4a3187*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 8))(*(_DWORD *)(v4 + 8)); /*0x4a3192*/
      *(_DWORD *)(v4 + 8) = 0; /*0x4a3195*/
    }
  }
  __3_YAXPAX_Z(*(void **)(v4 + 32)); /*0x4a319c*/
  v6 = *(void **)(v4 + 24); /*0x4a31a1*/
  *(_DWORD *)(v4 + 32) = 0; /*0x4a31a4*/
  __3_YAXPAX_Z(v6); /*0x4a31a8*/
  v7 = *(void **)(v4 + 28); /*0x4a31ad*/
  *(_DWORD *)(v4 + 24) = 0; /*0x4a31b0*/
  __3_YAXPAX_Z(v7); /*0x4a31b4*/
  *(_DWORD *)(v4 + 28) = 0; /*0x4a31b9*/
  v8 = *(_DWORD *)(v4 + 8); /*0x4a31bc*/
  if ( v8 ) /*0x4a31c4*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(*(_DWORD *)(v4 + 8)); /*0x4a31c9*/
  if ( ((unsigned __int8)this & 1) != 0 ) /*0x4a31d1*/
    __3_YAXPAX_Z((void *)v4); /*0x4a31d4*/
  return (void *)v4; /*0x4a31de*/
}



// ==== 0x004A31F0  CStreamClass::IsEmpty  this=CStreamClass  sig=csp ====
BOOL __thiscall CStreamClass::IsEmpty(CStreamClass *this, int a2)
{
  if ( a2 ) /*0x4a31f9*/
    WinAPI::Wrapper(-2147467261); /*0x4a3200*/
  return *(_DWORD *)this->__pad_0 == 0; /*0x4a320e*/
}



// ==== 0x004A3220  CStreamClass::IStreamQueryInterface  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::IStreamQueryInterface(CStreamClass *this, const void *a2, _DWORD *a3)
{
  return CStreamClass::QueryInterface((CStreamClass *)((char *)this - 4), a2, a3);
}



// ==== 0x004A3230  CStreamClass::IStreamAddRef  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::IStreamAddRef(CStreamClass *this)
{
  return CStreamClass::AddRef((CStreamClass *)((char *)this - 4));
}



// ==== 0x004A3240  CStreamClass::IStreamRelease  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::IStreamRelease(CStreamClass *this)
{
  return CStreamClass::Release((CStreamClass *)((char *)this - 4));
}



// ==== 0x004A3250  sub_4A3250  this=-  sig=ida-proto ====
int sub_4A3250()
{
  dword_89F960 = 0; /*0x4a3252*/
  dword_89F964 = 0; /*0x4a3257*/
  dword_89F968 = 0; /*0x4a325c*/
  dword_89F96C = 0; /*0x4a3261*/
  return 0; /*0x4a3266*/
}



// ==== 0x004A3270  ObjectClass::method_4A3270  this=ObjectClass  sig=csp ====
int *__thiscall sub_4A3270(ObjectClass *this, int a2, int a3, int a4)
{
  int *p_estimatedHealth; // ebx
  int v6; // ebx
  _DWORD v8[25]; // [esp+10h] [ebp-64h] BYREF

  p_estimatedHealth = &this->estimatedHealth; /*0x4a3287*/
  this->AbstractClass = (void *)a4; /*0x4a328f*/
  this->estimatedHealth = 0; /*0x4a3291*/
  *(_DWORD *)&this->isOnMap = 0; /*0x4a3297*/
  memset(&this->?, 0, 0x6Cu); /*0x4a329e*/
  this->? = (void *)108; /*0x4a32a4*/
  this->? = (void *)7; /*0x4a32aa*/
  this->health = dword_81FC60[a4]; /*0x4a32b8*/
  this->? = a2; /*0x4a32bf*/
  this->? = (void *)a3; /*0x4a32c2*/
  if ( a4 == 1 ) /*0x4a32c5*/
  {
    this->? = (void *)71; /*0x4a32c7*/
    this->? = 16; /*0x4a32ce*/
  }
  if ( !dword_8A0E00 /*0x4a32e5*/
    || !(*(int (__stdcall **)(int, void **, int *, _DWORD))(*(_DWORD *)dword_8A0E00 + 24))(
          dword_8A0E00,
          &this->?,
          &this->estimatedHealth,
          0) )
  {
    v6 = *p_estimatedHealth; /*0x4a32ec*/
    if ( v6 ) /*0x4a32f0*/
    {
      if ( a4 ) /*0x4a32f5*/
      {
        if ( a4 == 1 ) /*0x4a32f8*/
        {
          memset(v8, 0, sizeof(v8)); /*0x4a3314*/
          v8[0] = 100; /*0x4a331a*/
          v8[20] = -1; /*0x4a332a*/
          (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v6 + 20))( /*0x4a3339*/
            v6,
            0,
            0,
            0,
            0x2000000,
            v8);
          return (int *)this; /*0x4a3347*/
        }
        if ( a4 != 2 ) /*0x4a32fb*/
          return (int *)this; /*0x4a3306*/
      }
      (**(void (__stdcall ***)(int, void *, char *))v6)(v6, &unk_7F8130, &this->isOnMap); /*0x4a3356*/
    }
  }
  return (int *)this; /*0x4a32ff*/
}



// ==== 0x004A3370  DDraw::ReleaseSurfaces  this=DDraw  sig=csp ====
int __thiscall DDraw::ReleaseSurfaces(DDraw *this)
{
  int v2; // eax
  int result; // eax

  v2 = this->u32_74; /*0x4a3373*/
  if ( v2 ) /*0x4a3378*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4a337d*/
    this->u32_74 = 0; /*0x4a3380*/
  }
  result = this->u32_1C; /*0x4a3387*/
  if ( result ) /*0x4a338c*/
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this->u32_1C); /*0x4a3391*/
    this->u32_1C = 0; /*0x4a3394*/
  }
  return result; /*0x4a339b*/
}



// ==== 0x004A33A0  AudioStream::ReadSamples  this=AudioStream  sig=csp ====
int __thiscall AudioStream::ReadSamples(AudioStream *this, const void *a2)
{
  AudioStream *v2; // ebx
  int v3; // edx
  int *v5; // ecx
  _WORD *v6; // ebx
  unsigned int v7; // edi
  int v8; // ebp
  _WORD *SamplePosition; // esi
  _WORD *v10; // eax
  _WORD *v11; // edx
  unsigned int Stream_field_04; // [esp+18h] [ebp-E8h]
  int v14; // [esp+1Ch] [ebp-E4h]
  _DWORD v15[4]; // [esp+20h] [ebp-E0h] BYREF
  _DWORD v16[27]; // [esp+30h] [ebp-D0h] BYREF
  _DWORD v17[25]; // [esp+9Ch] [ebp-64h] BYREF

  v2 = this; /*0x4a33a7*/
  v3 = *(_DWORD *)&this->__pad_5C[20]; /*0x4a33ac*/
  if ( !v3 ) /*0x4a33b7*/
    return -1; /*0x4a33b7*/
  if ( *(_DWORD *)this->__pad_0 == 2 )
  {
    if ( !dword_8A0E08 || !*(_DWORD *)&dword_8A0E08[112] ) /*0x4a33d8*/
      return -1; /*0x4a33c6*/
    v15[2] = 256; /*0x4a33e7*/
    v15[3] = 256; /*0x4a33eb*/
    memset(v17, 0, sizeof(v17)); /*0x4a33f8*/
    v15[0] = 0; /*0x4a3401*/
    v15[1] = 0; /*0x4a340f*/
    v17[0] = 100; /*0x4a3413*/
    return (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD *, int, _DWORD *))(*(_DWORD *)v3 + 20))( /*0x4a3427*/
             v3,
             0,
             *(_DWORD *)&dword_8A0E08[112],
             v15,
             512,
             v17);
  }
  else
  {
    memset(v16, 0, sizeof(v16)); /*0x4a3443*/
    v16[0] = 108; /*0x4a344e*/
    if ( (*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v3 + 100))(v3, 0, v16, 2081, 0) )
    {
      return 1; /*0x4a3465*/
    }
    else
    {
      if ( *(_DWORD *)v2->__pad_0 ) /*0x4a3474*/
      {
        if ( *(_DWORD *)v2->__pad_0 == 1 ) /*0x4a347f*/
        {
          v5 = (int *)g_ZBufferDescriptor; /*0x4a3485*/
          if ( g_ZBufferDescriptor ) /*0x4a348d*/
          {
            if ( *(_DWORD *)&stru_87E790.__pad_D8[60] ) /*0x4a3499*/
            {
              v6 = (_WORD *)v16[9]; /*0x4a34a6*/
              v7 = 0; /*0x4a34aa*/
              v8 = v16[4] >> 1; /*0x4a34ac*/
              v14 = v16[4] >> 1; /*0x4a34b0*/
              Stream_field_04 = g_ZBufferDescriptor[2].Stream_field_04; /*0x4a34b4*/
              if ( Stream_field_04 ) /*0x4a34b8*/
              {
                do /*0x4a353c*/
                {
                  SamplePosition = (_WORD *)Audio::GetSamplePosition(v5, 0, v7 - v5[1]); /*0x4a34d4*/
                  v10 = (_WORD *)StreamClass::ReadAndSeek( /*0x4a34df*/
                                   *(int **)&stru_87E790.__pad_D8[60],
                                   0,
                                   v7 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4));
                  if ( !SamplePosition || !v10 ) /*0x4a34ee*/
                    break; /*0x4a34ee*/
                  if ( v8 ) /*0x4a34f2*/
                  {
                    do /*0x4a352f*/
                    {
                      if ( *v10 < 8u ) /*0x4a34f8*/
                        *v6 = 0; /*0x4a3502*/
                      else
                        *v6 = *SamplePosition; /*0x4a34fd*/
                      v5 = (int *)g_ZBufferDescriptor; /*0x4a3507*/
                      v11 = SamplePosition + 1; /*0x4a350d*/
                      ++v6; /*0x4a3510*/
                      if ( (unsigned int)(SamplePosition + 1) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4a3516*/
                        v11 = (_WORD *)((char *)v11 - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4a3518*/
                      SamplePosition = v11; /*0x4a351b*/
                      if ( (unsigned int)++v10 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4a3529*/
                        v10 = (_WORD *)((char *)v10 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4a352b*/
                      --v8; /*0x4a352e*/
                    }
                    while ( v8 ); /*0x4a352f*/
                    v8 = v14; /*0x4a3531*/
                  }
                  else
                  {
                    v5 = (int *)g_ZBufferDescriptor; /*0x4a3540*/
                  }
                  ++v7; /*0x4a3539*/
                }
                while ( v7 < Stream_field_04 ); /*0x4a353c*/
              }
              v2 = this; /*0x4a356f*/
            }
          }
        }
      }
      else if ( a2 ) /*0x4a3551*/
      {
        qmemcpy((void *)v16[9], a2, v16[4] * (int)v2->AudioStream_field_0xC); /*0x4a3564*/
      }
      return (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)&v2->__pad_5C[20] + 128))(
               *(_DWORD *)&v2->__pad_5C[20],
               0) != 0
           ? 2
           : 0;
    }
  }
}



// ==== 0x004A35A0  ColorStruct::SetRGB  this=ColorStruct  sig=csp ====
int __thiscall ColorStruct::SetRGB(ColorStruct *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  void *v4; // eax

  v4 = (void *)(a4 | ((a3 | ((a2 | 0xFFFFFF00) << 8)) << 8)); /*0x4a35c5*/
  this->field_50 = v4; /*0x4a35c7*/
  this->field_30 = v4; /*0x4a35ca*/
  this->field_10 = v4; /*0x4a35cd*/
  this->field_54 = (void *)-16777216; /*0x4a35d5*/
  this->field_34 = (void *)-16777216; /*0x4a35d8*/
  this->field_14 = (void *)-16777216; /*0x4a35db*/
  return -16777216; /*0x4a35de*/
}



// ==== 0x004A35F0  Tactical::SetCellTransform  this=IUnknown  sig=csp ====
char *__thiscall Tactical_SetCellTransform(char *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char *result; // eax

  result = this + 32 * a2; /*0x4a35fb*/
  *(_DWORD *)result = a3; /*0x4a3601*/
  *((_DWORD *)result + 1) = a4; /*0x4a3607*/
  *((_DWORD *)result + 2) = a5; /*0x4a360e*/
  *((_DWORD *)result + 6) = a6; /*0x4a3615*/
  *((_DWORD *)result + 7) = a7; /*0x4a3618*/
  *((_DWORD *)result + 3) = 1065353216; /*0x4a361b*/
  return result; /*0x4a3622*/
}



// ==== 0x004A3630  ObjectClass::method_4A3630  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4A3630(ObjectClass *this)
{
  *((_DWORD *)this + 24576) = 0; /*0x4a3632*/
  return &this->AbstractClass; /*0x4a363c*/
}



// ==== 0x004A3640  DDraw::Init  this=DDraw  sig=csp ====
void __thiscall DDraw::Init(DDraw *this)
{
  this->q18000 = 0; /*0x4a3640*/
}



// ==== 0x004A3650  nullsub_115  this=-  sig=ida-proto ====
void nullsub_115()
{
  ; /*0x4a3650*/
}



// ==== 0x004A3660  ObjectClass::RenderTactical3DScene  this=ObjectClass  sig=csp ====
int __thiscall RenderTactical3DScene(ObjectClass *this, int a2)
{
  int v2; // esi
  ObjectClass *v3; // edi
  bool v4; // zf
  int v5; // eax
  AudioStream *v6; // ebx
  DDraw *v7; // edx
  int v8; // ecx
  int result; // eax
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int i; // ebx
  int v18; // [esp+B0h] [ebp-4h]

  v2 = a2; /*0x4a3663*/
  v3 = this; /*0x4a3668*/
  v4 = a2 == 0; /*0x4a366a*/
  v5 = *((_DWORD *)this + 24576); /*0x4a366c*/
  *((_DWORD *)this + 24576) = 0; /*0x4a3672*/
  v18 = v5; /*0x4a367c*/
  if ( v4 ) /*0x4a3680*/
    return -1; /*0x4a3680*/
  v6 = dword_8A0E04; /*0x4a3686*/
  if ( !dword_8A0E04 ) /*0x4a368e*/
    return -1; /*0x4a368e*/
  if ( !*(_DWORD *)&dword_8A0E04->__pad_5C[24] ) /*0x4a3694*/
    return -1; /*0x4a3694*/
  v7 = dword_8A0E08; /*0x4a369f*/
  if ( !dword_8A0E08 ) /*0x4a36a7*/
    return -1; /*0x4a36a7*/
  v8 = *(_DWORD *)&dword_8A0E08[112]; /*0x4a36ad*/
  if ( !v8 ) /*0x4a36b2*/
    return -1; /*0x4a3832*/
  if ( dword_89F970 == v2 ) /*0x4a36bf*/
    goto LABEL_13; /*0x4a36bf*/
  if ( dword_89F970 ) /*0x4a36c3*/
  {
    result = (*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)dword_89F970 + 32))(dword_89F970, 0, v8); /*0x4a36cb*/
    if ( result ) /*0x4a36d0*/
      return result; /*0x4a36d0*/
    v7 = dword_8A0E08; /*0x4a36d6*/
    dword_89F970 = 0; /*0x4a36dc*/
  }
  result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 12))(v2, *(_DWORD *)&v7[112]); /*0x4a36e8*/
  if ( !result ) /*0x4a36ed*/
  {
    result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)g_DrawColorState + 60))(g_DrawColorState, v2, 0); /*0x4a36fe*/
    if ( !result ) /*0x4a3703*/
    {
      v6 = dword_8A0E04; /*0x4a3709*/
      dword_89F970 = v2; /*0x4a370f*/
LABEL_13:
      if ( dword_8A0E0C ) /*0x4a371c*/
        v10 = *(_DWORD *)&dword_8A0E0C[116]; /*0x4a371e*/
      else
        v10 = *(_DWORD *)&v6->__pad_5C[24]; /*0x4a3723*/
      result = (*(int (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v10 + 12))(v10, g_DrawColorState, &a2); /*0x4a3735*/
      if ( !result ) /*0x4a373a*/
      {
        result = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 1, a2); /*0x4a374f*/
        if ( !result ) /*0x4a3754*/
        {
          result = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 7, 1); /*0x4a3766*/
          if ( !result ) /*0x4a376b*/
          {
            result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)g_DrawColorState + 92))( /*0x4a377d*/
                       g_DrawColorState,
                       14,
                       0);
            if ( !result ) /*0x4a3782*/
            {
              v11 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 17, 2); /*0x4a3797*/
              v12 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 19, 2) /*0x4a37a8*/
                  | v11;
              v13 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 20, 2) /*0x4a37b9*/
                  | v12;
              v14 = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)g_DrawColorState + 92))( /*0x4a37ca*/
                      g_DrawColorState,
                      29,
                      0)
                  | v13;
              v15 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 27, 1) /*0x4a37db*/
                  | v14;
              v16 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)g_DrawColorState + 92))(g_DrawColorState, 22, 1) /*0x4a37ec*/
                  | v15;
              if ( v16 ) /*0x4a37ee*/
              {
                return v16; /*0x4a37f0*/
              }
              else
              {
                for ( i = 0; i < v18; v3 = (ObjectClass *)((char *)v3 + 96) ) /*0x4a3801*/
                {
                  v16 = (*(int (__stdcall **)(_DWORD, int, int, ObjectClass *, int, _DWORD))(*(_DWORD *)g_DrawColorState /*0x4a3817*/
                                                                                           + 116))(
                          g_DrawColorState,
                          4,
                          3,
                          v3,
                          3,
                          0);
                  if ( v16 ) /*0x4a381b*/
                    break; /*0x4a381b*/
                  ++i; /*0x4a3821*/
                }
                return v16; /*0x4a3829*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x4a37f2*/
}



// ==== 0x004A3840  StructTable::Append  this=StructTable  sig=csp ====
int __thiscall StructTable::Append(StructTable *this, const void *a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 24576); /*0x4a3842*/
  if ( v3 == 1024 ) /*0x4a384e*/
    return 1; /*0x4a3850*/
  qmemcpy(this + 24 * v3, a2, 0x60u); /*0x4a386b*/
  ++*((_DWORD *)this + 24576); /*0x4a3876*/
  return 0; /*0x4a3855*/
}



// ==== 0x004A3890  CCFileClass::ReadEntireFile  this=CCFileClass  sig=csp ====
void *__thiscall CCFileClass::ReadEntireFile(CCFileClass *this)
{
  void *v2; // edi
  size_t v3; // ebx

  v2 = 0; /*0x4a3895*/
  if ( (*(unsigned __int8 (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)this->CDFileClass + 20))(this, 0) ) /*0x4a389a*/
  {
    v3 = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)this->CDFileClass + 44))(this); /*0x4a38a8*/
    v2 = (void *)__2_YAPAXI_Z(v3); /*0x4a38b0*/
    if ( v2 ) /*0x4a38b7*/
      (*(void (__thiscall **)(CCFileClass *, void *, size_t))(*(_DWORD *)this->CDFileClass + 36))(this, v2, v3); /*0x4a38bf*/
  }
  return v2; /*0x4a38c4*/
}



// ==== 0x004A38D0  LoadFileSHP  this=ScenarioClass  sig=csp ====
void *__fastcall LoadFileSHP(char *Source, bool *a2)
{
  void *result; // eax
  int v5; // esi
  size_t v6; // edi
  bool v7; // zf
  CCFileClass v8; // [esp+Ch] [ebp-6Ch] BYREF
  int v9[5]; // [esp+64h] [ebp-14h] BYREF

  *a2 = 0; /*0x4a38db*/
  result = (void *)SearchMIXFile(Source, 0); /*0x4a38de*/
  if ( !result ) /*0x4a38e5*/
  {
    CCFileClass::Construct(&v8, Source); /*0x4a38ed*/
    v5 = 0; /*0x4a38f2*/
    if ( (*(unsigned __int8 (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v8.CDFileClass + 20))(&v8, 0) ) /*0x4a38fd*/
    {
      v6 = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)v8.CDFileClass + 44))(&v8); /*0x4a390f*/
      v5 = __2_YAPAXI_Z(v6); /*0x4a3917*/
      v7 = v5 == 0; /*0x4a391c*/
      if ( !v5 ) /*0x4a391e*/
      {
LABEL_6:
        *a2 = !v7; /*0x4a392f*/
        *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x4a3938*/
        v9[3] = 0; /*0x4a3940*/
        Vector::Clear((int)v9); /*0x4a3948*/
        *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x4a3951*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x4a3959*/
        return (void *)v5; /*0x4a395e*/
      }
      (*(void (__thiscall **)(CCFileClass *, int, size_t))(*(_DWORD *)v8.CDFileClass + 36))(&v8, v5, v6); /*0x4a392a*/
    }
    v7 = v5 == 0; /*0x4a392d*/
    goto LABEL_6; /*0x4a392d*/
  }
  return result; /*0x4a3961*/
}



// ==== 0x004A3970  LoadFileClassToBuffer  this=MSShapeAnim  sig=csp ====
int __fastcall FileClass_LoadToBuffer(char **a1, bool *a2)
{
  char *v3; // esi
  int result; // eax
  void *v5; // esi
  size_t v6; // ebx
  bool v7; // zf
  _DWORD v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v9[5]; // [esp+64h] [ebp-14h] BYREF

  v3 = String::GetOrEmpty_Alt(a1); /*0x4a397c*/
  *a2 = 0; /*0x4a3982*/
  result = SearchMIXFile(v3, 0); /*0x4a3985*/
  if ( !result ) /*0x4a398c*/
  {
    CCFileClass::Construct(v8, v3); /*0x4a3994*/
    v5 = 0; /*0x4a3999*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v8[0] + 20))(v8, 0) ) /*0x4a39a4*/
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(v8[0] + 44))(v8); /*0x4a39b6*/
      v5 = __2_YAPAXI_Z(v6); /*0x4a39be*/
      v7 = v5 == 0; /*0x4a39c3*/
      if ( !v5 ) /*0x4a39c5*/
      {
LABEL_6:
        *a2 = !v7; /*0x4a39d6*/
        v8[0] = &CCFileClass::`vftable'; /*0x4a39df*/
        v9[3] = 0; /*0x4a39e7*/
        Vector::Clear((int)v9); /*0x4a39ef*/
        v8[0] = &off_7E1668; /*0x4a39f8*/
        BufferIOFileClass::Dtor(v8); /*0x4a3a00*/
        return (int)v5; /*0x4a3a05*/
      }
      (*(void (__thiscall **)(_DWORD *, void *, size_t))(v8[0] + 36))(v8, v5, v6); /*0x4a39d1*/
    }
    v7 = v5 == 0; /*0x4a39d4*/
    goto LABEL_6; /*0x4a39d4*/
  }
  return result; /*0x4a3a08*/
}



// ==== 0x004A3A10  sub_4A3A10  this=-  sig=ida-proto ====
int __fastcall sub_4A3A10(int *a1, void **a2, void **a3, int a4)
{
  int v6; // edx
  char *v7; // edi
  int v8; // ebp
  int result; // eax
  size_t v10; // eax
  int v11; // edx
  size_t v12; // [esp+24h] [ebp-14h] BYREF
  void *v13; // [esp+28h] [ebp-10h]
  _TBYTE Src; // [esp+2Ch] [ebp-Ch] BYREF

  v6 = *a1; /*0x4a3a21*/
  v7 = (char *)*a2; /*0x4a3a23*/
  v13 = *a3; /*0x4a3a25*/
  v8 = 0; /*0x4a3a2b*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(v6 + 24))(a1) ) /*0x4a3a2d*/
  {
    result = (*(int (__thiscall **)(int *, int))(*a1 + 28))(a1, 1); /*0x4a3a3a*/
    if ( !result ) /*0x4a3a3f*/
      return result; /*0x4a3a3f*/
    v8 = 1; /*0x4a3a4b*/
  }
  (*(void (__thiscall **)(int *, size_t *, int))(*a1 + 36))(a1, &v12, 2); /*0x4a3a5b*/
  (*(void (__thiscall **)(int *, _TBYTE *, int))(*a1 + 36))(a1, &Src, 8); /*0x4a3a69*/
  v10 = v12 + 65528; /*0x4a3a75*/
  v12 += 65528; /*0x4a3a7d*/
  if ( WORD3(Src) ) /*0x4a3a81*/
  {
    v11 = *a1; /*0x4a3a89*/
    v12 = v10 - *(_DWORD *)((char *)&Src + 6); /*0x4a3a8b*/
    if ( a4 ) /*0x4a3a95*/
      (*(void (__thiscall **)(int *, int, _DWORD))(v11 + 36))(a1, a4, SWORD3(Src)); /*0x4a3a9e*/
    else
      (*(void (__thiscall **)(int *, _DWORD, int))(v11 + 40))(a1, SWORD3(Src), 1); /*0x4a3aab*/
    LOWORD(v10) = v12; /*0x4a3aae*/
    WORD3(Src) = 0; /*0x4a3ab2*/
  }
  if ( *a2 == *a3 ) /*0x4a3ac1*/
    v7 = (char *)a2[1] + (_DWORD)v7 - (unsigned __int16)v10 - 8; /*0x4a3acd*/
  memcpy(v7, &Src, 8u); /*0x4a3ad9*/
  (*(void (__thiscall **)(int *, char *, _DWORD))(*a1 + 36))(a1, v7 + 8, (unsigned __int16)v12); /*0x4a3af4*/
  v12 = sub_5584F0(v7, v13); /*0x4a3b04*/
  if ( v8 ) /*0x4a3b08*/
    (*(void (__thiscall **)(int *))(*a1 + 52))(a1); /*0x4a3b0e*/
  return (unsigned __int16)v12; /*0x4a3a41*/
}



// ==== 0x004A3B30  ReturnNull  this=-  sig=ida-proto ====
int ReturnNull()
{
  return 0; /*0x4a3b32*/
}



// ==== 0x004A3B40  FindResource  this=-  sig=csp ====
int __fastcall FindResource(unsigned __int16 a1, const CHAR *a2)
{
  int result; // eax

  result = (int)FindResourceA(hLibModule, (LPCSTR)a1, a2); /*0x4a3b4e*/
  if ( result ) /*0x4a3b56*/
  {
    result = (int)LoadResource(hLibModule, (HRSRC)result); /*0x4a3b61*/
    if ( result ) /*0x4a3b69*/
      return (int)LockResource((HGLOBAL)result); /*0x4a3b6d*/
  }
  return result; /*0x4a3b58*/
}



// ==== 0x004A3BF0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_3  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_3(std::codecvt_base *this)
{
  return 1; /*0x4a3bf2*/
}



// ==== 0x004A3C00  CreditsScreen::Init  this=CreditsScreen  sig=csp ====
void __thiscall CreditsScreen::Init(CreditsScreen *this)
{
  *this = 0; /*0x4a3c00*/
}



// ==== 0x004A3C10  sub_4A3C10  this=-  sig=ida-proto ====
int sub_4A3C10()
{
  dword_89F980 = 0; /*0x4a3c12*/
  dword_89F984 = 0; /*0x4a3c17*/
  dword_89F988 = 0; /*0x4a3c1c*/
  dword_89F98C = 0; /*0x4a3c21*/
  return 0; /*0x4a3c26*/
}



// ==== 0x004A3C30  FadePalette  this=Block  sig=csp ====
int __fastcall Palette_Fade(const void *a1, signed int a2, void (*a3)(void))
{
  int result; // eax
  _BYTE *v6; // eax
  int v7; // ecx
  DWORD v8; // edx
  signed int v9; // esi
  DWORD v10; // eax
  signed int v11; // eax
  signed int v12; // esi
  signed int v13; // eax
  int v14; // eax
  signed int v15; // esi
  signed int v16; // eax
  int v17; // edi
  signed int v18; // esi
  DWORD v19; // eax
  signed int v20; // eax
  DWORD Ticks; // [esp+8h] [ebp-910h]
  signed int v22; // [esp+10h] [ebp-908h]
  _BYTE v24[768]; // [esp+18h] [ebp-900h] BYREF
  _BYTE Src[768]; // [esp+318h] [ebp-600h] BYREF
  _BYTE v26[768]; // [esp+618h] [ebp-300h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Primary + 112))(g_DSurface_Primary); /*0x4a3c48*/
  if ( result == 1 ) /*0x4a3c4e*/
  {
    Ticks = Timer::GetTicks(); /*0x4a3c5f*/
    v22 = a2; /*0x4a3c63*/
    v6 = &v24[2]; /*0x4a3c67*/
    v7 = 256; /*0x4a3c6b*/
    do /*0x4a3c7e*/
    {
      *(v6 - 2) = 0; /*0x4a3c72*/
      *(v6 - 1) = 0; /*0x4a3c75*/
      *v6 = 0; /*0x4a3c78*/
      v6 += 3; /*0x4a3c7a*/
      --v7; /*0x4a3c7d*/
    }
    while ( v7 ); /*0x4a3c7e*/
    v8 = Ticks; /*0x4a3c80*/
    qmemcpy(v24, &unk_89F990, sizeof(v24)); /*0x4a3c92*/
    qmemcpy(v26, a1, sizeof(v26)); /*0x4a3ca9*/
    while ( 1 ) /*0x4a3cab*/
    {
      v9 = v22; /*0x4a3cab*/
      if ( v8 != -1 ) /*0x4a3cb2*/
      {
        v10 = Timer::GetTicks(); /*0x4a3cb8*/
        v8 = Ticks; /*0x4a3cbd*/
        v11 = v10 - Ticks; /*0x4a3cc1*/
        if ( v11 >= v22 ) /*0x4a3cc5*/
          return Surface::CreateSurfacePalette(v26); /*0x4a3cc5*/
        v9 = v22 - v11; /*0x4a3ccb*/
      }
      if ( !v9 ) /*0x4a3ccf*/
        return Surface::CreateSurfacePalette(v26); /*0x4a3daf*/
      qmemcpy(Src, v24, sizeof(Src)); /*0x4a3ce8*/
      v12 = v22; /*0x4a3cea*/
      if ( v8 != -1 ) /*0x4a3cee*/
      {
        v13 = Timer::GetTicks() - Ticks; /*0x4a3cf9*/
        if ( v13 >= v22 ) /*0x4a3cff*/
          v12 = 0; /*0x4a3d05*/
        else
          v12 = v22 - v13; /*0x4a3d01*/
      }
      v14 = ((a2 - v12) << 8) / a2; /*0x4a3d13*/
      if ( v14 >= 255 ) /*0x4a3d1a*/
        v14 = 255; /*0x4a3d1c*/
      Render_Helper(v14, v26); /*0x4a3d31*/
      v15 = v22; /*0x4a3d36*/
      if ( Ticks == -1 ) /*0x4a3d3f*/
        goto LABEL_18; /*0x4a3d3f*/
      v16 = Timer::GetTicks() - Ticks; /*0x4a3d4a*/
      if ( v16 < v22 ) /*0x4a3d50*/
        break; /*0x4a3d50*/
      v17 = 0; /*0x4a3d8c*/
LABEL_19:
      Surface::CreateSurfacePalette(Src); /*0x4a3d56*/
      if ( a3 ) /*0x4a3d64*/
LABEL_20:
        a3(); /*0x4a3d66*/
      v8 = Ticks; /*0x4a3d68*/
      while ( 1 ) /*0x4a3d6c*/
      {
        v18 = v22; /*0x4a3d6c*/
        if ( v8 != -1 ) /*0x4a3d73*/
        {
          v19 = Timer::GetTicks(); /*0x4a3d79*/
          v8 = Ticks; /*0x4a3d7e*/
          v20 = v19 - Ticks; /*0x4a3d82*/
          if ( v20 >= v22 ) /*0x4a3d86*/
            v18 = 0; /*0x4a3d90*/
          else
            v18 = v22 - v20; /*0x4a3d88*/
        }
        if ( v18 != v17 || !v17 ) /*0x4a3d9c*/
          break; /*0x4a3d9c*/
        if ( a3 ) /*0x4a3da4*/
          goto LABEL_20; /*0x4a3da4*/
      }
    }
    v15 = v22 - v16; /*0x4a3d52*/
LABEL_18:
    v17 = v15; /*0x4a3d54*/
    goto LABEL_19; /*0x4a3d54*/
  }
  return result; /*0x4a3db6*/
}



// ==== 0x004A3DD0  DDraw::LogError  this=DDraw  sig=ida-proto ====
int __fastcall sub_4A3DD0(UINT uType, int a2)
{
  int result; // eax
  CHAR Text[80]; // [esp+0h] [ebp-50h] BYREF

  if ( uType ) /*0x4a3dd5*/
  {
    if ( g_DDraw_ErrorCallback ) /*0x4a3dfd*/
    {
      return g_DDraw_ErrorCallback(uType); /*0x4a3dff*/
    }
    else
    {
      sprintf(Text, "DDRAW.DLL Error code = %08X", uType); /*0x4a3e10*/
      return MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a3e2a*/
    }
  }
  else if ( a2 ) /*0x4a3dd9*/
  {
    return MessageBoxA(g_hWnd, ::Text, Caption, 0); /*0x4a3dec*/
  }
  return result; /*0x4a3df2*/
}



// ==== 0x004A3E40  DDraw::CapabilityCheck  this=DDraw  sig=ida-proto ====
int DDraw_CapabilityCheck()
{
  const char *v0; // eax
  int v2; // [esp+8h] [ebp-44h] BYREF
  int v3; // [esp+Ch] [ebp-40h]
  int v4; // [esp+10h] [ebp-3Ch]
  int v5; // [esp+14h] [ebp-38h]
  _DWORD v6[4]; // [esp+18h] [ebp-34h] BYREF
  int v7[9]; // [esp+28h] [ebp-24h] BYREF

  DSurface::Construct((char *)v7, 64, 64, 0, 0); /*0x4a3e51*/
  Debug::Log(aCheckingHardwa); /*0x4a3e5b*/
  byte_8205D4 = 1; /*0x4a3e67*/
  XSurface::Fill(v7, 0); /*0x4a3e6f*/
  v2 = 5; /*0x4a3e82*/
  v3 = 5; /*0x4a3e86*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3e8a*/
  {
    byte_8205D4 = 0; /*0x4a3e93*/
  }
  else
  {
    XSurface::Fill(v7, 1); /*0x4a3ea1*/
    v2 = 5; /*0x4a3eaf*/
    v3 = 5; /*0x4a3eb3*/
    if ( XSurface::GetPixel(v7, &v2) == 1 ) /*0x4a3ebf*/
    {
      v0 = g_INI_Key_OK; /*0x4a3ed0*/
      if ( byte_8205D4 ) /*0x4a3ed5*/
        goto LABEL_7; /*0x4a3ed5*/
    }
    else
    {
      byte_8205D4 = 0; /*0x4a3ec1*/
    }
  }
  v0 = aFailed_1; /*0x4a3ed7*/
LABEL_7:
  Debug::Log_0("%s\n", v0); /*0x4a3edc*/
  Debug::Log(aCheckingOverla); /*0x4a3eec*/
  byte_8205D5 = 1; /*0x4a3ef8*/
  XSurface::Fill(v7, 0); /*0x4a3f00*/
  v2 = 0; /*0x4a3f13*/
  v3 = 0; /*0x4a3f17*/
  XSurface::SetPixel(v7, &v2, 255); /*0x4a3f1b*/
  v5 = 63; /*0x4a3f29*/
  v6[3] = 63; /*0x4a3f2d*/
  v2 = 0; /*0x4a3f42*/
  v3 = 0; /*0x4a3f46*/
  v4 = 64; /*0x4a3f4a*/
  v6[0] = 0; /*0x4a3f52*/
  v6[1] = 1; /*0x4a3f56*/
  v6[2] = 64; /*0x4a3f5e*/
  DSurface::BlitPart(v7, (int)v6, (int)v7, (int)&v2, 0, 0); /*0x4a3f66*/
  v2 = 0; /*0x4a3f74*/
  v3 = 5; /*0x4a3f78*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3f7c*/
  {
    Debug::Log_0(aFailed_2); /*0x4a3f8a*/
    byte_8205D5 = 0; /*0x4a3f96*/
  }
  else
  {
    Debug::Log_0(aOk_1); /*0x4a3fac*/
  }
  return DSurface::Destroy(v7); /*0x4a3fa1*/
}



// ==== 0x004A3FD0  ObjectClass::method_4A3FD0  this=ObjectClass  sig=csp ====
void sub_4A3FD0(ObjectClass *this)
{
  int v1; // eax
  struct IDirectDrawVtbl *lpVtbl; // ecx
  int v3; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-50h] BYREF

  Debug::Log(); /*0x4a3fd8*/
  if ( !g_lpDirectDraw7 ) /*0x4a3fe7*/
  {
    v1 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a3ff2*/
    if ( v1 ) /*0x4a3ff9*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4003*/
      {
        g_DDraw_ErrorCallback(v1); /*0x4a4007*/
        Debug::Log(); /*0x4a400e*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v1); /*0x4a4025*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4040*/
        Debug::Log(); /*0x4a404b*/
      }
    }
    else
    {
      lpVtbl = g_lpDirectDraw7->lpVtbl; /*0x4a4063*/
      if ( g_DDraw_Initialized ) /*0x4a4065*/
        v3 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 8); /*0x4a4069*/
      else
        v3 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 17); /*0x4a4075*/
      if ( v3 ) /*0x4a407a*/
      {
        if ( g_DDraw_ErrorCallback ) /*0x4a4084*/
        {
          g_DDraw_ErrorCallback(v3); /*0x4a4088*/
        }
        else
        {
          sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a4099*/
          MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a40b4*/
        }
      }
    }
  }
}



// ==== 0x004A40C0  ObjectClass::method_4A40C0  this=ObjectClass  sig=csp ====
int sub_4A40C0(ObjectClass *this)
{
  int result; // eax
  CHAR Text[80]; // [esp+4h] [ebp-50h] BYREF

  result = (int)g_lpDirectDraw7; /*0x4a40c0*/
  if ( g_lpDirectDraw7 ) /*0x4a40ca*/
  {
    result = g_lpDirectDraw7->lpVtbl->Release(g_lpDirectDraw7); /*0x4a40cf*/
    if ( result ) /*0x4a40d4*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a40de*/
      {
        result = g_DDraw_ErrorCallback(result); /*0x4a40e2*/
        g_lpDirectDraw7 = 0; /*0x4a40e4*/
        return result; /*0x4a40f1*/
      }
      sprintf(Text, "DDRAW.DLL Error code = %08X", result); /*0x4a40fd*/
      result = MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4118*/
    }
    g_lpDirectDraw7 = 0; /*0x4a411e*/
  }
  return result; /*0x4a40ee*/
}



// ==== 0x004A4130  ObjectClass::method_4A4130  this=ObjectClass  sig=csp ====
unsigned int sub_4A4130(ObjectClass *this)
{
  LPDIRECTDRAW v1; // eax
  char v2; // bl
  int v3; // eax
  unsigned int v4; // esi
  int v5; // esi
  int v6; // eax
  _DWORD v8[27]; // [esp+Ch] [ebp-1F8h] BYREF
  CHAR Text[80]; // [esp+78h] [ebp-18Ch] BYREF
  _DWORD v10[79]; // [esp+C8h] [ebp-13Ch] BYREF

  v1 = g_lpDirectDraw7; /*0x4a4130*/
  v2 = 0; /*0x4a413c*/
  if ( !g_lpDirectDraw7 ) /*0x4a4148*/
  {
    v3 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a4153*/
    if ( v3 ) /*0x4a415a*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4168*/
      {
        g_DDraw_ErrorCallback(v3); /*0x4a4170*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a427b*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4296*/
      }
      v1 = 0; /*0x4a4172*/
      g_lpDirectDraw7 = 0; /*0x4a4174*/
    }
    else
    {
      v1 = g_lpDirectDraw7; /*0x4a429d*/
      v2 = 1; /*0x4a42a2*/
    }
  }
  v4 = 0; /*0x4a4179*/
  if ( v1 ) /*0x4a417d*/
  {
    v10[0] = 316; /*0x4a418a*/
    if ( !v1->lpVtbl->GetCaps(v1, (LPDDCAPS)v10, 0) ) /*0x4a419a*/
    {
      v5 = v10[15]; /*0x4a41af*/
      Debug::Log(); /*0x4a41bb*/
      memset(v8, 0, sizeof(v8)); /*0x4a41ce*/
      v8[0] = 108; /*0x4a41d9*/
      if ( !g_lpDirectDraw7->lpVtbl->GetDisplayMode(g_lpDirectDraw7, (LPDDSURFACEDESC)v8) ) /*0x4a41e5*/
      {
        Debug::Log(); /*0x4a4206*/
        v5 += v8[2] * v8[3] * (v8[21] >> 3); /*0x4a421f*/
      }
      v4 = (v5 + 0x20000) & 0xFFF00000; /*0x4a4227*/
      Debug::Log(); /*0x4a4239*/
    }
    v1 = g_lpDirectDraw7; /*0x4a4241*/
  }
  if ( v2 && v1 ) /*0x4a4250*/
  {
    v6 = v1->lpVtbl->Release(v1); /*0x4a4259*/
    if ( v6 ) /*0x4a425e*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4268*/
      {
        g_DDraw_ErrorCallback(v6); /*0x4a426c*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v6); /*0x4a42b4*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a42cf*/
      }
    }
    g_lpDirectDraw7 = 0; /*0x4a42d1*/
  }
  return v4; /*0x4a42dd*/
}



// ==== 0x004A42F0  InitializeDDraw  this=ObjectClass  sig=csp ====
char __fastcall DDraw_Initialize(int a1, DWORD a2, DWORD a3, DWORD a4)
{
  HRESULT v5; // eax
  struct IDirectDrawVtbl *lpVtbl; // ecx
  int v8; // eax
  HRESULT v9; // eax
  CHAR Text[80]; // [esp+24h] [ebp-50h] BYREF

  Debug::Log(aPrepDirectDraw); /*0x4a42fe*/
  if ( !g_lpDirectDraw7 ) /*0x4a4313*/
  {
    v5 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a431e*/
    if ( v5 ) /*0x4a4325*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4333*/
      {
        g_DDraw_ErrorCallback(v5); /*0x4a4337*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v5); /*0x4a4398*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a43b3*/
      }
      Debug::Log(g_Str_DirectDrawCreate_failed_); /*0x4a433e*/
    }
    else
    {
      lpVtbl = g_lpDirectDraw7->lpVtbl; /*0x4a43c3*/
      if ( g_DDraw_Initialized ) /*0x4a43c5*/
        v8 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 8); /*0x4a43c9*/
      else
        v8 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 17); /*0x4a43d5*/
      if ( v8 ) /*0x4a43da*/
      {
        if ( g_DDraw_ErrorCallback ) /*0x4a43e8*/
        {
          g_DDraw_ErrorCallback(v8); /*0x4a43ec*/
        }
        else
        {
          sprintf(Text, "DDRAW.DLL Error code = %08X", v8); /*0x4a43fe*/
          MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4419*/
        }
      }
    }
  }
  Debug::Log("SetDisplayMode: %dx%dx%d\n", a2, a3, a4);
  if ( g_lpDirectDraw7->lpVtbl->SetDisplayMode(g_lpDirectDraw7, a2, a3, a4) ) /*0x4a4369*/
  {
    Debug::Log(aSetdisplaymode_0); /*0x4a4379*/
    return 0; /*0x4a4381*/
  }
  else
  {
    g_DisplayWidth = a2; /*0x4a4423*/
    MEMORY[0x8A00A8] = a3; /*0x4a4429*/
    g_DisplayBPP = a4; /*0x4a442f*/
    if ( a4 == 8 /*0x4a4463*/
      && (Debug::Log(aCreatepalette),
          (v9 = g_lpDirectDraw7->lpVtbl->CreatePalette(
                  g_lpDirectDraw7,
                  68,
                  (LPPALETTEENTRY)&g_DDraw_PaletteEntries,
                  (LPDIRECTDRAWPALETTE *)&g_DDraw_Palette,
                  0)) != 0) )
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a446d*/
      {
        g_DDraw_ErrorCallback(v9); /*0x4a4471*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v9); /*0x4a4497*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a44b2*/
      }
      Debug::Log(aCreatepaletteF); /*0x4a4478*/
      return 0; /*0x4a4480*/
    }
    else
    {
      DDraw::CapabilityCheck(); /*0x4a44cd*/
      Debug::Log(aDisplayModeSet); /*0x4a44d7*/
      return 1; /*0x4a44df*/
    }
  }
}



// ==== 0x004A44F0  ObjectClass::method_4A44F0  this=ObjectClass  sig=csp ====
LPDIRECTDRAW __usercall sub_4A44F0@<eax>(ObjectClass *this)
{
  int v1; // esi
  LPDIRECTDRAW result; // eax
  int v3; // eax
  CHAR Buffer[4]; // [esp+8h] [ebp-50h] BYREF
  CHAR Text[76]; // [esp+Ch] [ebp-4Ch] BYREF

  result = g_lpDirectDraw7; /*0x4a44f0*/
  if ( g_lpDirectDraw7 ) /*0x4a44fd*/
  {
    v3 = ((int (__stdcall *)(LPDIRECTDRAW, int))g_lpDirectDraw7->lpVtbl->RestoreDisplayMode)(g_lpDirectDraw7, v1); /*0x4a4507*/
    if ( v3 ) /*0x4a4512*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a451c*/
      {
        g_DDraw_ErrorCallback(v3); /*0x4a4520*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a452f*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a454a*/
      }
    }
    *(_QWORD *)&g_DisplayWidth = 0; /*0x4a4551*/
    g_DisplayBPP = 0; /*0x4a455d*/
    result = (LPDIRECTDRAW)((int (__cdecl *)(LPDIRECTDRAW))g_lpDirectDraw7->lpVtbl->Release)(g_lpDirectDraw7); /*0x4a4566*/
    if ( result ) /*0x4a456b*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4575*/
      {
        result = (LPDIRECTDRAW)g_DDraw_ErrorCallback(result); /*0x4a4579*/
        g_lpDirectDraw7 = 0; /*0x4a457b*/
        return result; /*0x4a4586*/
      }
      sprintf(Buffer, "DDRAW.DLL Error code = %08X", result); /*0x4a4592*/
      result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a45ad*/
    }
    g_lpDirectDraw7 = 0; /*0x4a45af*/
  }
  return result; /*0x4a4582*/
}



// ==== 0x004A45C0  ObjectClass::method_4A45C0  this=ObjectClass  sig=csp ====
int sub_4A45C0(ObjectClass *this)
{
  int v2[16]; // [esp+0h] [ebp-23Ch] BYREF
  int v3; // [esp+40h] [ebp-1FCh]
  char Buffer[256]; // [esp+13Ch] [ebp-100h] BYREF

  if ( !g_lpDirectDraw7 ) /*0x4a45cd*/
    return 0; /*0x4a45cd*/
  v2[0] = 316; /*0x4a45d3*/
  if ( g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v2, 0) ) /*0x4a45e1*/
    return 0; /*0x4a460d*/
  sprintf(Buffer, "In Get_Free_Video_Memory. About to return %d bytes", v3); /*0x4a45fa*/
  return v3; /*0x4a4606*/
}



// ==== 0x004A4620  DDraw::CheckCapabilities  this=DDraw  sig=ida-proto ====
char sub_4A4620()
{
  int v0; // eax
  HRESULT v1; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-18Ch] BYREF
  _DWORD v4[79]; // [esp+5Ch] [ebp-13Ch] BYREF

  if ( g_lpDirectDraw7 ) /*0x4a462e*/
  {
    memset(v4, 0, sizeof(v4)); /*0x4a4645*/
    v4[0] = 316; /*0x4a464b*/
    v1 = g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v4, 0); /*0x4a4659*/
    if ( v1 ) /*0x4a465f*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4669*/
      {
        g_DDraw_ErrorCallback(v1); /*0x4a466d*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v1); /*0x4a4683*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a469e*/
      }
      LOBYTE(v0) = 0; /*0x4a466f*/
    }
    else
    {
      v0 = (v4[1] & 0x40) != 0; /*0x4a46b8*/
      if ( SLOBYTE(v4[1]) < 0 ) /*0x4a46c0*/
        LOBYTE(v0) = v0 | 2; /*0x4a46c2*/
      if ( (v4[1] & 0x10000) != 0 ) /*0x4a46ca*/
        LOBYTE(v0) = v0 | 4; /*0x4a46cc*/
      if ( (v4[1] & 0x8000000) != 0 ) /*0x4a46d4*/
        LOBYTE(v0) = v0 | 8; /*0x4a46d6*/
      if ( (v4[1] & 0x4000000) != 0 ) /*0x4a46de*/
        LOBYTE(v0) = v0 | 0x10; /*0x4a46e0*/
      if ( (v4[1] & 0x2000000) != 0 ) /*0x4a46e8*/
        LOBYTE(v0) = v0 | 0x20; /*0x4a46ea*/
      if ( (v4[1] & 0x200) != 0 ) /*0x4a46ef*/
        LOBYTE(v0) = v0 | 0x40; /*0x4a46f1*/
    }
  }
  else
  {
    LOBYTE(v0) = 0; /*0x4a4630*/
  }
  return v0; /*0x4a4632*/
}



// ==== 0x004A4700  ObjectClass::method_4A4700  this=ObjectClass  sig=csp ====
char sub_4A4700(ObjectClass *this)
{
  HRESULT v1; // eax
  char Buffer[80]; // [esp+Ch] [ebp-50h] BYREF

  LOBYTE(v1) = byte_81FC6C; /*0x4a4700*/
  if ( byte_81FC6C ) /*0x4a470a*/
  {
    v1 = g_lpDirectDraw7->lpVtbl->WaitForVerticalBlank(g_lpDirectDraw7, 1, 0); /*0x4a4718*/
    if ( v1 == -2147467263 ) /*0x4a4720*/
    {
      byte_81FC6C = 0; /*0x4a4722*/
    }
    else if ( v1 ) /*0x4a472f*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4739*/
      {
        LOBYTE(v1) = g_DDraw_ErrorCallback(v1); /*0x4a473d*/
      }
      else
      {
        sprintf(Buffer, "DDRAW.DLL Error code = %08X", v1); /*0x4a474e*/
        LOBYTE(v1) = MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a4769*/
      }
    }
  }
  return v1; /*0x4a4729*/
}



// ==== 0x004A4780  Surface::CreateSurfacePalette  this=Surface  sig=csp ====
int __thiscall Surface::CreateSurfacePalette(Surface *this)
{
  int result; // eax
  int v3; // edi
  Surface *v4; // eax
  char *v5; // ecx
  int v6; // edx
  char *v7; // eax
  int v8; // ebx
  char v9; // [esp+8h] [ebp-4h]

  if ( this != (Surface *)&unk_89F990 ) /*0x4a478b*/
    memcpy(&unk_89F990, this, 0x300u); /*0x4a4798*/
  result = (int)g_lpDirectDraw7; /*0x4a47a0*/
  if ( g_lpDirectDraw7 ) /*0x4a47a7*/
  {
    v3 = g_DDraw_PrimarySurface; /*0x4a47a9*/
    if ( g_DDraw_PrimarySurface ) /*0x4a47b1*/
    {
      v4 = this; /*0x4a47b4*/
      v5 = (char *)&unk_89FC95; /*0x4a47b6*/
      do /*0x4a47e5*/
      {
        v6 = (unsigned __int8)v4->__pad_0[0]; /*0x4a47bf*/
        v9 = v4->__pad_0[1]; /*0x4a47c5*/
        v7 = &v4->__pad_0[2]; /*0x4a47c9*/
        v5 += 4; /*0x4a47cc*/
        v8 = (unsigned __int8)*v7; /*0x4a47cf*/
        *(v5 - 5) = v6; /*0x4a47d1*/
        v4 = (Surface *)(v7 + 1); /*0x4a47d8*/
        *(v5 - 4) = v9; /*0x4a47d9*/
        *(v5 - 3) = v8; /*0x4a47dc*/
      }
      while ( (int)v5 < 9044117 ); /*0x4a47e5*/
      result = g_DDraw_Palette; /*0x4a47e7*/
      if ( g_DDraw_Palette ) /*0x4a47ef*/
      {
        if ( !byte_8A0098 ) /*0x4a47f9*/
        {
          (*(void (__stdcall **)(int, int))(*(_DWORD *)v3 + 124))(v3, g_DDraw_Palette); /*0x4a47ff*/
          result = g_DDraw_Palette; /*0x4a4802*/
          byte_8A0098 = 1; /*0x4a4807*/
        }
        return (*(int (__stdcall **)(int, _DWORD, _DWORD, int, void *))(*(_DWORD *)result + 24))( /*0x4a481f*/
                 result,
                 0,
                 0,
                 256,
                 &g_DDraw_PaletteEntries);
      }
    }
  }
  return result; /*0x4a4822*/
}



// ==== 0x004A4830  DDraw::WaitForIdle  this=DDraw  sig=csp ====
int DDraw::WaitForIdle(DDraw *this)
{
  int result; // eax

  do /*0x4a4846*/
    result = (*(int (__stdcall **)(int, int))(*(_DWORD *)g_DDraw_PrimarySurface + 52))(g_DDraw_PrimarySurface, 2); /*0x4a483a*/
  while ( result && result != -2005532222 ); /*0x4a4846*/
  return result; /*0x4a4848*/
}



// ==== 0x004A4850  sub_4A4850  this=-  sig=csp ====
int __stdcall sub_4A4850(const void *a1, int a2)
{
  void *v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx

  v2 = __2_YAPAXI_Z(0x6Cu); /*0x4a485e*/
  qmemcpy(v2, a1, 0x6Cu); /*0x4a4867*/
  v3 = *(_DWORD *)(a2 + 8); /*0x4a4870*/
  if ( *(_DWORD *)(a2 + 16) < v3 /*0x4a4895*/
    || (*(_BYTE *)(a2 + 13) || !v3)
    && (v4 = *(_DWORD *)(a2 + 20), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v3 + v4, 0) )
  {
    v5 = *(_DWORD *)(a2 + 16); /*0x4a489c*/
    v6 = *(_DWORD *)(a2 + 4); /*0x4a489f*/
    *(_DWORD *)(a2 + 16) = v5 + 1; /*0x4a48a5*/
    *(_DWORD *)(v6 + 4 * v5) = v2; /*0x4a48a8*/
  }
  return 1; /*0x4a48ab*/
}



// ==== 0x004A48C0  sub_4A48C0  this=-  sig=ida-proto ====
int __cdecl sub_4A48C0(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edx

  v2 = a1[1]; /*0x4a48cb*/
  v3 = a2[1]; /*0x4a48d0*/
  if ( *a2 > *a1 ) /*0x4a48d5*/
    return -1; /*0x4a48d7*/
  if ( *a2 < *a1 ) /*0x4a48dc*/
    return 1; /*0x4a48de*/
  if ( v2 >= v3 ) /*0x4a48e7*/
    return v3 < v2; /*0x4a48f2*/
  return -1; /*0x4a48da*/
}



// ==== 0x004A4900  sub_4A4900  this=-  sig=ida-proto ====
unsigned int *__fastcall sub_4A4900(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int *v5; // ebx
  unsigned int *v6; // esi
  int v7; // edi
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _DWORD *v11; // esi
  size_t NumOfElements; // [esp+14h] [ebp-24h]
  void **v16; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-Ch]
  int v19; // [esp+30h] [ebp-8h]
  int v20; // [esp+34h] [ebp-4h]

  if ( !g_lpDirectDraw7 ) /*0x4a4915*/
    return 0; /*0x4a4ab2*/
  sub_4A4E30(&v16, 0, 0); /*0x4a4923*/
  v16 = &DynamicVectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4937*/
  v20 = 10; /*0x4a493f*/
  v19 = 0; /*0x4a4947*/
  if ( g_lpDirectDraw7->lpVtbl->EnumDisplayModes(g_lpDirectDraw7, 0, 0, &v16, (LPDDENUMMODESCALLBACK)sub_4A4850) || !v19 ) /*0x4a4967*/
  {
    v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a93*/
    if ( Block && BYTE1(v18) ) /*0x4a4aa5*/
      __3_YAXPAX_Z(Block); /*0x4a4aa8*/
    return 0; /*0x4a4aa8*/
  }
  v5 = (unsigned int *)__2_YAPAXI_Z(8 * v19 + 4); /*0x4a497e*/
  v6 = v5; /*0x4a4990*/
  memset(v5, 0, 8 * v19 + 4); /*0x4a4995*/
  NumOfElements = 0; /*0x4a4999*/
  v7 = 0; /*0x4a49aa*/
  if ( v19 <= 0 ) /*0x4a49ae*/
    goto LABEL_13; /*0x4a49ae*/
  do /*0x4a4a12*/
  {
    v8 = (_DWORD *)*((_DWORD *)Block + v7); /*0x4a49b9*/
    v9 = v8[3]; /*0x4a49bc*/
    if ( v9 <= a3 ) /*0x4a49c1*/
    {
      v10 = v8[2]; /*0x4a49c3*/
      if ( v10 <= a4 && v9 >= a1 && v10 >= a2 && v8[21] == a5 ) /*0x4a49e3*/
      {
        *v6 = v9; /*0x4a49e5*/
        v11 = v6 + 1; /*0x4a49ea*/
        *v11 = v8[2]; /*0x4a49ed*/
        v6 = v11 + 1; /*0x4a49f3*/
        ++NumOfElements; /*0x4a49f7*/
      }
    }
    __3_YAXPAX_Z(*((void **)Block + v7++)); /*0x4a4a03*/
  }
  while ( v7 < v19 ); /*0x4a4a12*/
  if ( v6 == v5 ) /*0x4a4a17*/
  {
LABEL_13:
    __3_YAXPAX_Z(v5); /*0x4a4a1a*/
    v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a28*/
    if ( Block && BYTE1(v18) ) /*0x4a4a38*/
    {
      __3_YAXPAX_Z(Block); /*0x4a4a3b*/
      return 0; /*0x4a4a4b*/
    }
    return 0; /*0x4a4a38*/
  }
  qsort(v5, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4A48C0); /*0x4a4a5b*/
  v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a69*/
  if ( Block && BYTE1(v18) ) /*0x4a4a79*/
    __3_YAXPAX_Z(Block); /*0x4a4a7c*/
  return v5; /*0x4a4a45*/
}



// ==== 0x004A4AC0  Debug::Log_0  this=AbstractClass  sig=csp ====
void Debug::Log_0()
{
  ; /*0x4a4ac0*/
}



// ==== 0x004A4AD0  _DynamicVectorClass_PAU_DDSURFACEDESC::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall CStreamClass::ClearBuffer(_DynamicVectorClass_PAU_DDSURFACEDESC *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a4ad6*/
  this->m_10 = 0; /*0x4a4ad9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4a4ae0*/
  {
    __3_YAXPAX_Z(v2); /*0x4a4ae6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a4aee*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4af1*/
  this->m_8 = 0; /*0x4a4af4*/
}



// ==== 0x004A4B00  _DynamicVectorClass_PAU_DDSURFACEDESC::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall CStreamClass::PointerToIndex(_DynamicVectorClass_PAU_DDSURFACEDESC *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a4b00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a4b15*/
  else
    return 0; /*0x4a4b07*/
}



// ==== 0x004A4B20  _VectorClass_PAU_DDSURFACEDESC::Seek  this=VectorClass  sig=csp ====
int __thiscall CStreamClass_16::Seek(_VectorClass_PAU_DDSURFACEDESC *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4a4b2a*/
}



// ==== 0x004A4B30  _VectorClass_PAU_DDSURFACEDESC::AddRef  this=VectorClass  sig=csp ====
char __thiscall CStreamClass_16::AddRef(_VectorClass_PAU_DDSURFACEDESC *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4a4b32*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4a4b3d*/
  {
    v3 = 0; /*0x4a4b3f*/
    if ( m_8 <= 0 ) /*0x4a4b43*/
      return 1; /*0x4a4b63*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4a4b45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a4b4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a4b54*/
    {
      ++v3; /*0x4a4b56*/
      ++v4; /*0x4a4b57*/
      if ( v3 >= m_8 ) /*0x4a4b5c*/
        return 1; /*0x4a4b5c*/
    }
  }
  return 0; /*0x4a4b5e*/
}



// ==== 0x004A4B70  _VectorClass_PAU_DDSURFACEDESC::Release  this=VectorClass  sig=csp ====
char __thiscall CStreamClass_16::Release(_VectorClass_PAU_DDSURFACEDESC *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a4b7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a4b86*/
    if ( a3 ) /*0x4a4b8c*/
      v4 = a3; /*0x4a4ba2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a4b9e*/
    LOBYTE(this->m_C) = 1; /*0x4a4ba6*/
    if ( v4 ) /*0x4a4baa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4a4bb5*/
      {
        m_8 = this->m_8; /*0x4a4bbc*/
        if ( a2 < m_8 ) /*0x4a4bc1*/
          m_8 = a2; /*0x4a4bc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a4bc9*/
          ++i; /*0x4a4bce*/
        if ( BYTE1(this->m_C) ) /*0x4a4bdb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a4be6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4a4bee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4a4bf7*/
      this->m_8 = a2; /*0x4a4bff*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a4c02*/
      return 1; /*0x4a4c08*/
    }
    else
    {
      return 0; /*0x4a4baf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAU_DDSURFACEDESC *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a4c12*/
    return 1; /*0x4a4c18*/
  }
}



// ==== 0x004A4C20  _VectorClass_PAU_DDSURFACEDESC::ddtor  this=VectorClass  sig=csp ====
void __thiscall CStreamClass_16::ddtor(_VectorClass_PAU_DDSURFACEDESC *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4a4c2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a4c33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a4c3b*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4c3e*/
  this->m_8 = 0; /*0x4a4c41*/
}



// ==== 0x004A4C50  _VectorClass_PAU_DDSURFACEDESC::Read  this=VectorClass  sig=csp ====
int __thiscall CStreamClass_16::Read(_VectorClass_PAU_DDSURFACEDESC *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a4c50*/
    return 0; /*0x4a4c58*/
  m_8 = this->m_8; /*0x4a4c5e*/
  result = 0; /*0x4a4c61*/
  if ( m_8 <= 0 ) /*0x4a4c65*/
    return -1; /*0x4a4c7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a4c6b*/
  {
    if ( ++result >= m_8 ) /*0x4a4c7a*/
      return -1; /*0x4a4c7a*/
  }
  return result; /*0x4a4c5a*/
}



// ==== 0x004A4C90  _VectorClass_PAU_DDSURFACEDESC::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall CStreamClass_16::Write(_VectorClass_PAU_DDSURFACEDESC *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a4c90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a4ca5*/
  else
    return 0; /*0x4a4c97*/
}



// ==== 0x004A4CB0  _DynamicVectorClass_PAU_DDSURFACEDESC::CopyItems  this=DynamicVector  sig=csp ====
char __thiscall CStreamClass::CopyItems(_DynamicVectorClass_PAU_DDSURFACEDESC *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a4cbc*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a4cc2*/
    if ( a3 ) /*0x4a4cc8*/
      v4 = a3; /*0x4a4cde*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a4cda*/
    LOBYTE(this->m_C) = 1; /*0x4a4ce2*/
    if ( !v4 ) /*0x4a4ce6*/
      return 0; /*0x4a4d5a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4a4ce8*/
    {
      m_8 = this->m_8; /*0x4a4cef*/
      if ( a2 < m_8 ) /*0x4a4cf4*/
        m_8 = a2; /*0x4a4cf6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a4cfc*/
        ++i; /*0x4a4d01*/
      if ( BYTE1(this->m_C) ) /*0x4a4d0e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a4d19*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4a4d21*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4a4d2a*/
    this->m_8 = a2; /*0x4a4d32*/
    BYTE1(this->m_C) = a3 == 0; /*0x4a4d35*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAU_DDSURFACEDESC *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a4d3e*/
  }
  v7 = this->m_8; /*0x4a4d41*/
  if ( v7 < this->m_10 ) /*0x4a4d49*/
    this->m_10 = v7; /*0x4a4d4b*/
  return 1; /*0x4a4d4e*/
}



// ==== 0x004A4D60  _DynamicVectorClass_PAU_DDSURFACEDESC::FindItem  this=DynamicVector  sig=csp ====
int __thiscall CStreamClass::FindItem(_DynamicVectorClass_PAU_DDSURFACEDESC *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4a4d60*/
  result = 0; /*0x4a4d63*/
  if ( m_10 <= 0 ) /*0x4a4d68*/
    return -1; /*0x4a4d7f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a4d6e*/
  {
    if ( ++result >= m_10 ) /*0x4a4d7d*/
      return -1; /*0x4a4d7d*/
  }
  return result; /*0x4a4d82*/
}



// ==== 0x004A4D90  _VectorClass_PAU_DDSURFACEDESC::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall CStreamClass_16::QueryInterface(_VectorClass_PAU_DDSURFACEDESC *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a4d93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4d96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a4da0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a4da8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a4db0*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4dbb*/
  this->m_8 = 0; /*0x4a4dc1*/
  if ( (a2 & 1) != 0 ) /*0x4a4dc8*/
    __3_YAXPAX_Z(this); /*0x4a4dcb*/
  return this->__pad_0; /*0x4a4dd5*/
}



// ==== 0x004A4DE0  _DynamicVectorClass_PAU_DDSURFACEDESC::Constructor_VectorClass__DDSURFACEDESC___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CStreamClass::Constructor_VectorClass__DDSURFACEDESC___(
        _DynamicVectorClass_PAU_DDSURFACEDESC *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a4de3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4de6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a4df0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a4df8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a4e00*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4e0b*/
  this->m_8 = 0; /*0x4a4e11*/
  if ( (a2 & 1) != 0 ) /*0x4a4e18*/
    __3_YAXPAX_Z(this); /*0x4a4e1b*/
  return this->__pad_0; /*0x4a4e25*/
}



// ==== 0x004A4E30  VectorClass::sub_4A4E30  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_4A4E30(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x4a4e3b*/
  this->Capacity = a2; /*0x4a4e3e*/
  this->IsInitialized = 1; /*0x4a4e41*/
  this->IsAllocated = 0; /*0x4a4e45*/
  this->ptr_0 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4e48*/
  if ( a2 ) /*0x4a4e4e*/
  {
    if ( a3 ) /*0x4a4e56*/
    {
      this->Items = (void *)a3; /*0x4a4e58*/
      return &this->ptr_0; /*0x4a4e5e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x4a4e6d*/
    this->IsAllocated = 1; /*0x4a4e70*/
  }
  return &this->ptr_0; /*0x4a4e5d*/
}



// ==== 0x004A4E80  sub_4A4E80  this=-  sig=ida-proto ====
int sub_4A4E80()
{
  dword_8A00C0 = 0; /*0x4a4e82*/
  dword_8A00C4 = 0; /*0x4a4e87*/
  dword_8A00C8 = 0; /*0x4a4e8c*/
  dword_8A00CC = 0; /*0x4a4e91*/
  return 0; /*0x4a4e96*/
}



// ==== 0x004A4EA0  sub_4A4EA0  this=-  sig=ida-proto ====
void sub_4A4EA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a4eac*/
  dbl_8A00D8 = Math::Sqrt(v0 + v0); /*0x4a4ebe*/
}



// ==== 0x004A4ED0  sub_4A4ED0  this=-  sig=ida-proto ====
void sub_4A4ED0()
{
  dbl_8A0128 = dbl_8A00D8 / 60.0; /*0x4a4edc*/
}



// ==== 0x004A4EF0  sub_4A4EF0  this=-  sig=ida-proto ====
void sub_4A4EF0()
{
  dbl_8A0110 = 1.0 / dbl_8A0128; /*0x4a4efc*/
}



// ==== 0x004A4F10  sub_4A4F10  this=-  sig=ida-proto ====
void sub_4A4F10()
{
  dbl_8A0108 = 0.0174532925199433 * 45.0; /*0x4a4f1c*/
}



// ==== 0x004A4F30  sub_4A4F30  this=-  sig=ida-proto ====
void sub_4A4F30()
{
  dbl_8A00E0 = 0.0174532925199433 * 60.0; /*0x4a4f3c*/
}



// ==== 0x004A4F50  sub_4A4F50  this=-  sig=ida-proto ====
void sub_4A4F50()
{
  dbl_8A00B8 = 0.0174532925199433 * 90.0; /*0x4a4f5c*/
}



// ==== 0x004A4F70  sub_4A4F70  this=-  sig=ida-proto ====
__int64 sub_4A4F70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A00B8 - dbl_8A00E0); /*0x4a4f82*/
  result = Math::RoundToInt(v0 * dbl_8A00D8 * 0.5); /*0x4a4f96*/
  dword_8A0130 = result; /*0x4a4f9b*/
  return result; /*0x4a4fa0*/
}



// ==== 0x004A4FB0  sub_4A4FB0  this=-  sig=ida-proto ====
void sub_4A4FB0()
{
  dbl_8A00E8 = Math::ArcTan((double)dword_8A0130 * 0.00390625); /*0x4a4fc7*/
}



// ==== 0x004A4FE0  sub_4A4FE0  this=-  sig=ida-proto ====
void sub_4A4FE0()
{
  dbl_8A0100 = Math::ArcTan((double)(2 * dword_8A0130) / dbl_8A00D8); /*0x4a5002*/
}



// ==== 0x004A5010  sub_4A5010  this=-  sig=ida-proto ====
__int64 sub_4A5010()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0130) + 0.5); /*0x4a502b*/
  dword_8A0124 = result; /*0x4a5030*/
  return result; /*0x4a5036*/
}



// ==== 0x004A5040  sub_4A5040  this=-  sig=ida-proto ====
int sub_4A5040()
{
  word_8A00D0 = 0; /*0x4a5042*/
  word_8A00D2 = 0; /*0x4a5048*/
  return 0; /*0x4a504e*/
}



// ==== 0x004A5050  sub_4A5050  this=-  sig=ida-proto ====
int sub_4A5050()
{
  dword_8A00F0 = 0; /*0x4a5052*/
  dword_8A00F4 = 0; /*0x4a5057*/
  dword_8A00F8 = 0; /*0x4a505c*/
  return 0; /*0x4a5061*/
}



// ==== 0x004A5070  sub_4A5070  this=-  sig=ida-proto ====
int sub_4A5070()
{
  dword_8A0120 = 0; /*0x4a5075*/
  dword_8A0118 = 128; /*0x4a507f*/
  dword_8A011C = 128; /*0x4a5084*/
  return 128; /*0x4a5089*/
}



// ==== 0x004A5090  nullsub_116  this=-  sig=ida-proto ====
void nullsub_116()
{
  ; /*0x4a5090*/
}



// ==== 0x004A50A0  sub_4A50A0  this=-  sig=ida-proto ====
signed int __fastcall sub_4A50A0(signed int a1)
{
  DWORD Ticks; // ecx
  DWORD v3; // eax
  signed int result; // eax
  DWORD v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-4h]

  Ticks = Timer::GetTicks(); /*0x4a50af*/
  v6 = a1; /*0x4a50b1*/
  v5 = Ticks; /*0x4a50b5*/
  do /*0x4a50df*/
  {
    if ( Ticks == -1 ) /*0x4a50bc*/
    {
      result = a1; /*0x4a50db*/
    }
    else
    {
      v3 = Timer::GetTicks(); /*0x4a50c2*/
      Ticks = v5; /*0x4a50c7*/
      result = v3 - v5; /*0x4a50cb*/
      if ( result >= a1 ) /*0x4a50cf*/
        return result; /*0x4a50cf*/
      result = a1 - result; /*0x4a50d3*/
      a1 = v6; /*0x4a50d5*/
    }
  }
  while ( result ); /*0x4a50df*/
  return result; /*0x4a50e1*/
}



// ==== 0x004A50F0  TechnoClass::checkCloakState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::checkCloakState(TechnoClass *this)
{
  this->? = *(void **)&stru_A8EB00.?[416]; /*0x4a50f8*/
  this->? = 0; /*0x4a50fd*/
  this->? = 0; /*0x4a5100*/
  LOBYTE(this->?) = 0; /*0x4a5103*/
  BYTE1(this->?) = 0; /*0x4a5106*/
  return (int)this; /*0x4a5109*/
}



// ==== 0x004A5110  Window::IsVisible  this=Window  sig=csp ====
int __thiscall Window::IsVisible(Window *this)
{
  int result; // eax

  LOBYTE(result) = *((_BYTE *)this + 24) && *((_BYTE *)this + 25); /*0x4a511e*/
  return result; /*0x4a5120*/
}



// ==== 0x004A5130  BuildingClass::CheckFlag24  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckFlag24(BuildingClass *this)
{
  int result; // eax

  LOBYTE(result) = LOBYTE(this->?) && !BYTE1(this->?); /*0x4a5141*/
  return result; /*0x4a5140*/
}



// ==== 0x004A5150  MovementAI::IsProgressAtEnd  this=MovementAI  sig=csp ====
bool __thiscall MovementAI::IsProgressAtEnd(MovementAI *this)
{
  int MovementAI_field_14; // esi
  int v2; // edx
  int MovementAI_field_10; // eax

  if ( !LOBYTE(this->MovementAI_field_18) ) /*0x4a5150*/
    return 1; /*0x4a5150*/
  MovementAI_field_14 = this->MovementAI_field_14; /*0x4a515b*/
  if ( !MovementAI_field_14 ) /*0x4a5164*/
    return 1; /*0x4a5164*/
  v2 = this->m_Target[2]; /*0x4a5166*/
  MovementAI_field_10 = this->MovementAI_field_10; /*0x4a5169*/
  if ( v2 != -1 ) /*0x4a516f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= MovementAI_field_10 ) /*0x4a517b*/
      MovementAI_field_10 = 0; /*0x4a5181*/
    else
      MovementAI_field_10 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x4a517d*/
  }
  return (double)(MovementAI_field_14 - MovementAI_field_10) / (double)this->MovementAI_field_14 == 1.0; /*0x4a519e*/
}



// ==== 0x004A51B0  BuildingClass::CheckPowerFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckPowerFlags(BuildingClass *this)
{
  int result; // eax

  if ( LOBYTE(this->?) || (LOBYTE(result) = 1, BYTE1(this->?) != 1) ) /*0x4a51be*/
    LOBYTE(result) = 0; /*0x4a51c0*/
  return result; /*0x4a51c2*/
}



// ==== 0x004A51D0  Flag::CheckNone  this=Flag  sig=csp ====
int __thiscall Flag::CheckNone(Flag *this)
{
  int result; // eax

  LOBYTE(result) = !*((_BYTE *)this + 24) && !*((_BYTE *)this + 25); /*0x4a51e1*/
  return result; /*0x4a51e0*/
}



// ==== 0x004A51F0  RateScaler::Init  this=RateScaler  sig=csp ====
int __thiscall RateScaler::Init(RateScaler *this, double a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp-Ch]

  LOBYTE(result) = *((_BYTE *)this + 24); /*0x4a51f6*/
  if ( (_BYTE)result || *((_BYTE *)this + 25) != 1 ) /*0x4a5201*/
  {
    *((_BYTE *)this + 24) = 1; /*0x4a520d*/
    *(double *)this->__tail_0 = a2 * 900.0; /*0x4a5211*/
    LOWORD(result) = Math::RoundToInt(a2 * 900.0); /*0x4a5213*/
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4a5218*/
    *((_BYTE *)this + 25) = 1; /*0x4a5221*/
    *((_DWORD *)this + 2) = v4; /*0x4a5225*/
    *((_DWORD *)this + 3) = v5; /*0x4a522b*/
    *((_DWORD *)this + 4) = result; /*0x4a522e*/
    *((_DWORD *)this + 5) = result; /*0x4a5231*/
  }
  return result; /*0x4a5234*/
}



// ==== 0x004A5240  Timer::StartDouble  this=OwnedTiberiumStruct  sig=csp ====
int __thiscall Timer::StartDouble(Timer *this, double a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp-Ch]

  if ( LOBYTE(this->m_18) || (LOBYTE(result) = BYTE1(this->m_18), (_BYTE)result) ) /*0x4a5252*/
  {
    LOBYTE(this->m_18) = 1; /*0x4a525e*/
    *(double *)this->__pad_0 = a2 * 900.0; /*0x4a5262*/
    LOWORD(result) = Math::RoundToInt(a2 * 900.0); /*0x4a5264*/
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4a5269*/
    BYTE1(this->m_18) = 0; /*0x4a5272*/
    *(_DWORD *)&this->__pad_6[2] = v4; /*0x4a5276*/
    *(_DWORD *)&this->__pad_6[6] = v5; /*0x4a527c*/
    *(_DWORD *)&this->__pad_6[10] = result; /*0x4a527f*/
    *(_DWORD *)&this->__pad_6[14] = result; /*0x4a5282*/
  }
  return result; /*0x4a5285*/
}



// ==== 0x004A5290  BuildingClass::UpdateTimerWithElapsed  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateTimerWithElapsed(BuildingClass *this)
{
  int result; // eax
  void *ptr_8; // esi

  LOBYTE(result) = this->?; /*0x4a5290*/
  if ( (_BYTE)result ) /*0x4a5295*/
  {
    result = this->?; /*0x4a5297*/
    ptr_8 = this->?; /*0x4a529b*/
    if ( ptr_8 != (void *)-1 ) /*0x4a52a1*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_8 >= result ) /*0x4a52ad*/
        result = 0; /*0x4a52b3*/
      else
        result -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_8; /*0x4a52af*/
    }
    this->? = this->? - result; /*0x4a52bb*/
    LOBYTE(result) = BYTE1(this->?) == 0; /*0x4a52c3*/
    BYTE1(this->?) = result; /*0x4a52c6*/
  }
  return result; /*0x4a52c9*/
}



// ==== 0x004A52D0  ObjectClass::method_4A52D0  this=ObjectClass  sig=csp ====
void __thiscall sub_4A52D0(ObjectClass *this)
{
  LOBYTE(this->?) = 0; /*0x4a52d0*/
  BYTE1(this->?) = 1; /*0x4a52d4*/
}



// ==== 0x004A52E0  ObjectClass::method_4A52E0  this=ObjectClass  sig=csp ====
char __thiscall sub_4A52E0(ObjectClass *this)
{
  LOBYTE(this->?) = 0; /*0x4a52e2*/
  BYTE1(this->?) = 0; /*0x4a52e5*/
  return 0; /*0x4a52e8*/
}



// ==== 0x004A52F0  Animation::GetProgress  this=Animation  sig=csp ====
int __thiscall Animation::GetProgress(Animation *this)
{
  int result; // eax
  int v2; // edx

  LOBYTE(result) = this->q018; /*0x4a52f0*/
  if ( (_BYTE)result ) /*0x4a52f8*/
  {
    if ( this->q014 ) /*0x4a52fb*/
    {
      v2 = this->q008; /*0x4a5311*/
      result = this->q010; /*0x4a5314*/
      if ( v2 != -1 ) /*0x4a531a*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= result ) /*0x4a5326*/
          return 0; /*0x4a533d*/
        else
          result -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x4a5328*/
      }
    }
  }
  return result; /*0x4a530d*/
}



// ==== 0x004A5360  MovementAI::Check  this=MovementAI  sig=csp ====
char __thiscall MovementAI::Check(MovementAI *this)
{
  char result; // al

  result = 0; /*0x4a5363*/
  if ( LOBYTE(this->MovementAI_field_18) ) /*0x4a5360*/
  {
    if ( BYTE1(this->MovementAI_field_18) ) /*0x4a5369*/
    {
      LOBYTE(this->MovementAI_field_18) = 0; /*0x4a536e*/
      BYTE1(this->MovementAI_field_18) = 1; /*0x4a5371*/
    }
    if ( LOBYTE(this->MovementAI_field_18) ) /*0x4a5375*/
    {
      if ( !BYTE1(this->MovementAI_field_18) ) /*0x4a537a*/
      {
        LOBYTE(this->MovementAI_field_18) = 0; /*0x4a537f*/
        BYTE1(this->MovementAI_field_18) = 0; /*0x4a5382*/
      }
    }
  }
  return result; /*0x4a5385*/
}



// ==== 0x004A5390  sub_4A5390  this=-  sig=ida-proto ====
int sub_4A5390()
{
  dword_8A0138 = 0; /*0x4a5392*/
  dword_8A013C = 0; /*0x4a5397*/
  dword_8A0140 = 0; /*0x4a539c*/
  dword_8A0144 = 0; /*0x4a53a1*/
  return 0; /*0x4a53a6*/
}



// ==== 0x004A53B0  Dial8Class::Constructor  this=Dial8Class  sig=csp ====
_DWORD *__thiscall Dial8Class::Constructor(Dial8Class *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7)
{
  unsigned int v7; // ebx
  __int16 v10; // cx
  unsigned int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v16; // [esp+14h] [ebp+4h]
  int v17; // [esp+18h] [ebp+8h]
  int v18; // [esp+20h] [ebp+10h]
  unsigned int v19; // [esp+24h] [ebp+14h]
  unsigned int v20; // [esp+24h] [ebp+14h]

  v7 = a6; /*0x4a53b5*/
  ControlClass::Construct((ControlClass *)this, a2, a3, a4, a5, a6, 7, 1); /*0x4a53d5*/
  *(_DWORD *)this->__pad_0 = &Dial8Class::`vftable'; /*0x4a53da*/
  LOBYTE(v10) = 0; /*0x4a53ed*/
  *((_DWORD *)this + 11) = this->Dial8Class_field_0x0C + *((_DWORD *)this + 5) / 2; /*0x4a53ef*/
  this->q00C = this->q004 + *((_DWORD *)this + 6) / 2; /*0x4a53ff*/
  HIBYTE(v10) = a7; /*0x4a5406*/
  *((_DWORD *)this + 45) = a7; /*0x4a5408*/
  LOWORD(a6) = v10; /*0x4a540e*/
  v11 = (((a6 >> 12) + 1) >> 1) & 7; /*0x4a541d*/
  *((_DWORD *)this + 46) = v11; /*0x4a5420*/
  *((_DWORD *)this + 47) = v11; /*0x4a5426*/
  *((_DWORD *)this + 13) = *((_DWORD *)this + 11); /*0x4a5436*/
  v12 = this->q00C; /*0x4a5439*/
  this->q00E = v12 - (int)(8 * v7) / 2 / 10; /*0x4a546b*/
  v13 = *((_DWORD *)this + 11); /*0x4a5479*/
  v19 = 56 * a5 / 2 / 100; /*0x4a5486*/
  this->q00F = v19 + v13; /*0x4a548d*/
  *((_DWORD *)this + 18) = v12; /*0x4a5497*/
  *((_DWORD *)this + 21) = v13; /*0x4a549c*/
  *((_DWORD *)this + 26) = v12; /*0x4a54a5*/
  *((_DWORD *)this + 29) = v13; /*0x4a54b8*/
  v16 = v12 - (int)(56 * v7) / 2 / 100; /*0x4a54c8*/
  this->q004 = v16; /*0x4a54cc*/
  v17 = 8 * a5 / 2 / 10; /*0x4a54ee*/
  *((_DWORD *)this + 17) = v13 + v17; /*0x4a54f4*/
  *((_DWORD *)this + 19) = v19 + v13; /*0x4a5502*/
  *((_DWORD *)this + 20) = v12 + (int)(56 * v7) / 2 / 100; /*0x4a550f*/
  *((_DWORD *)this + 22) = v12 + (int)(8 * v7) / 2 / 10; /*0x4a5519*/
  *((_DWORD *)this + 23) = v13 - v19; /*0x4a5528*/
  *((_DWORD *)this + 24) = v12 + (int)(56 * v7) / 2 / 100; /*0x4a552b*/
  *((_DWORD *)this + 25) = v13 - v17; /*0x4a553a*/
  *((_DWORD *)this + 28) = v16; /*0x4a5541*/
  *((_DWORD *)this + 27) = v13 - v19; /*0x4a5549*/
  *((_DWORD *)this + 30) = v12 - (int)(6 * v7) / 2 / 10; /*0x4a556c*/
  *((_DWORD *)this + 37) = v13; /*0x4a5580*/
  *((_DWORD *)this + 34) = v12; /*0x4a5596*/
  *((_DWORD *)this + 42) = v12; /*0x4a55a1*/
  v20 = 42 * a5 / 2 / 100; /*0x4a55a7*/
  *((_DWORD *)this + 31) = v20 + v13; /*0x4a55ae*/
  v18 = (int)(42 * v7) / 2 / 100; /*0x4a55df*/
  this->q008 = v12 - v18; /*0x4a55e8*/
  *((_DWORD *)this + 44) = v12 - v18; /*0x4a55fe*/
  v14 = 6 * a5 / 2 / 10; /*0x4a5607*/
  *((_DWORD *)this + 33) = v14 + v13; /*0x4a560c*/
  *((_DWORD *)this + 35) = v13 + v20; /*0x4a5618*/
  *((_DWORD *)this + 36) = v18 + v12; /*0x4a562b*/
  *((_DWORD *)this + 38) = v12 + (int)(6 * v7) / 2 / 10; /*0x4a5631*/
  *((_DWORD *)this + 40) = v18 + v12; /*0x4a563f*/
  *((_DWORD *)this + 41) = v13 - v14; /*0x4a5645*/
  *((_DWORD *)this + 39) = v13 - v20; /*0x4a564b*/
  *((_DWORD *)this + 43) = v13 - v20; /*0x4a5651*/
  return this->__pad_0; /*0x4a5659*/
}



// ==== 0x004A5660  Dial8Class::SetValue  this=Dial8Class  sig=csp ====
int __thiscall Dial8Class::SetValue(Dial8Class *this, unsigned int a2, _DWORD *a3, int a4)
{
  double v4; // st7
  unsigned int v5; // ebx
  int *v8; // eax
  __int16 v9; // dx
  int v10; // ecx
  unsigned int v11; // eax
  _BYTE v12[8]; // [esp+30h] [ebp-8h] BYREF

  v5 = a2; /*0x4a5664*/
  (*(void (__thiscall **)(Dial8Class *, unsigned int))(*(_DWORD *)this->__pad_0 + 120))(this, a2); /*0x4a566e*/
  if ( (a2 & 1) != 0 ) /*0x4a5676*/
  {
    dword_8A0148 = 1; /*0x4a5678*/
    goto LABEL_8; /*0x4a5684*/
  }
  if ( (a2 & 2) != 0 && dword_8A0148 ) /*0x4a5692*/
  {
LABEL_8:
    v8 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4a56c1*/
                  stru_887598.lineTrailer,
                  v12);
    Math::CalcAngle((double)*((int *)this + 12) - (double)v8[1], (double)*v8 - (double)*((int *)this + 11)); /*0x4a5709*/
    LOWORD(a2) = Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427); /*0x4a5722*/
    LOBYTE(v9) = 0; /*0x4a572f*/
    v10 = *((_DWORD *)this + 47); /*0x4a5738*/
    HIBYTE(v9) = ((a2 >> 7) + 1) >> 1; /*0x4a573e*/
    *((_DWORD *)this + 45) = HIBYTE(v9); /*0x4a5740*/
    LOWORD(a2) = v9; /*0x4a5746*/
    v11 = (((a2 >> 12) + 1) >> 1) & 7; /*0x4a5755*/
    *((_DWORD *)this + 46) = v11; /*0x4a575a*/
    if ( v11 == v10 ) /*0x4a5760*/
    {
      *a3 = 0; /*0x4a578f*/
      CellClass::Draw((ControlClass *)this, 0, a3, 0); /*0x4a5795*/
    }
    else
    {
      *((_DWORD *)this + 47) = v11; /*0x4a5762*/
      CellClass::Draw((ControlClass *)this, v5, a3, 0); /*0x4a5772*/
    }
    return 1; /*0x4a5781*/
  }
  if ( (a2 & 4) != 0 ) /*0x4a569b*/
  {
    *a3 = 0; /*0x4a569d*/
    dword_8A0148 = 0; /*0x4a56a3*/
  }
  return CellClass::Draw((ControlClass *)this, 0, a3, 0); /*0x4a56b9*/
}



// ==== 0x004A57B0  Dial8Class::GetValue  this=Dial8Class  sig=csp ====
int __userpurge Dial8Class::GetValue@<eax>(Dial8Class *this, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
  ControlClass *v5; // ecx
  ControlClass *v6; // esi
  void *v7; // ecx
  int *p_ControlClass_field_0x08; // edi
  int v9; // ebx
  void *v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int ControlClass_field_0x08; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v24; // [esp+18h] [ebp-Ch] BYREF
  int v25; // [esp+1Ch] [ebp-8h]
  int ControlClass_field_0x0C; // [esp+20h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]

  v6 = v5; /*0x4a57b4*/
  BuildingAnim::GetType(); /*0x4a57b6*/
  if ( !Control::DispatchClick(v6, (int)this) ) /*0x4a57c6*/
    return 0; /*0x4a5944*/
  (*(void (__thiscall **)(void *, int, int, int))(*(_DWORD *)stru_887598.lineTrailer + 12))( /*0x4a57de*/
    stru_887598.lineTrailer,
    a4,
    a3,
    a2);
  v7 = *(void **)v6[1].__pad_0; /*0x4a57e4*/
  ControlClass_field_0x0C = v6->ControlClass_field_0x0C; /*0x4a57ea*/
  retaddr = v7; /*0x4a57f1*/
  DrawBuildingTilesSHP(&ControlClass_field_0x0C, 0, 1); /*0x4a5805*/
  p_ControlClass_field_0x08 = &v6[3].ControlClass_field_0x08; /*0x4a580a*/
  v9 = 8; /*0x4a580d*/
  do /*0x4a5842*/
  {
    v10 = (void *)(*p_ControlClass_field_0x08 - 1); /*0x4a581d*/
    ControlClass_field_0x0C = *(p_ControlClass_field_0x08 - 1) - 1; /*0x4a581e*/
    retaddr = v10; /*0x4a5822*/
    DrawBuildingTilesSHP(&ControlClass_field_0x0C, 1, 0); /*0x4a5839*/
    p_ControlClass_field_0x08 += 2; /*0x4a583e*/
    --v9; /*0x4a5841*/
  }
  while ( v9 ); /*0x4a5842*/
  v11 = v24; /*0x4a5849*/
  v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v24) + 796); /*0x4a5855*/
  if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4a5864*/
    v13 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v12); /*0x4a5871*/
  else
    v13 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v12); /*0x4a587d*/
  ControlClass_field_0x08 = v6[11].ControlClass_field_0x08; /*0x4a5881*/
  v15 = *(&v6[7].ControlClass_field_0x08 + 2 * ControlClass_field_0x08); /*0x4a588c*/
  v16 = *(_DWORD *)&v6[7].__pad_0[8 * ControlClass_field_0x08 + 4] + 1; /*0x4a5895*/
  v25 = v15 + 1; /*0x4a5896*/
  v17 = v6[2].ControlClass_field_0x0C; /*0x4a589a*/
  v24 = v16; /*0x4a589d*/
  retaddr = (_UNKNOWN *)(*(_DWORD *)v6[3].__pad_0 + 1); /*0x4a58a6*/
  ControlClass_field_0x0C = v17 + 1; /*0x4a58b1*/
  (*(void (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x4a58bc*/
    g_DSurface_Hidden_2,
    &ControlClass_field_0x0C,
    &v24,
    v13);
  v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v11) + 808); /*0x4a58c7*/
  if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4a58d6*/
    v19 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v18); /*0x4a58e3*/
  else
    v19 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v18); /*0x4a58ef*/
  v20 = v6[11].ControlClass_field_0x08; /*0x4a58f3*/
  retaddr = (_UNKNOWN *)*(&v6[7].ControlClass_field_0x08 + 2 * v20); /*0x4a5906*/
  v21 = v6[2].ControlClass_field_0x0C; /*0x4a590a*/
  ControlClass_field_0x0C = *(_DWORD *)&v6[7].__pad_0[8 * v20 + 4]; /*0x4a590d*/
  v22 = *(_DWORD *)v6[3].__pad_0; /*0x4a5911*/
  v24 = v21; /*0x4a5914*/
  v25 = v22; /*0x4a591f*/
  (*(void (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x4a592a*/
    g_DSurface_Hidden_2,
    &v24,
    &ControlClass_field_0x0C,
    v19);
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4a5935*/
  return 1; /*0x4a593d*/
}



// ==== 0x004A5950  ObjectClass::?GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ(
        Concurrency::details::SchedulerProxy *this)
{
  return this->u32_2D; /*0x4a5956*/
}



// ==== 0x004A59A0  Dial8Class::QueryInterface  this=Dial8Class  sig=csp ====
_DWORD *__thiscall Dial8Class::QueryInterface(Dial8Class *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x4a59a3*/
  if ( (a2 & 1) != 0 ) /*0x4a59ad*/
    __3_YAXPAX_Z(this); /*0x4a59b0*/
  return this->__pad_0; /*0x4a59ba*/
}



// ==== 0x004A59C0  sub_4A59C0  this=-  sig=ida-proto ====
int sub_4A59C0()
{
  dword_8A0160 = 0; /*0x4a59c2*/
  dword_8A0164 = 0; /*0x4a59c7*/
  dword_8A0168 = 0; /*0x4a59cc*/
  dword_8A016C = 0; /*0x4a59d1*/
  return 0; /*0x4a59d6*/
}



// ==== 0x004A59E0  GetTextBoundingRect  this=-  sig=csp ====
_DWORD *__fastcall Text_GetBoundingRect(_DWORD *a1, int a2, int a3, int a4, __int16 a5, int a6, int a7)
{
  int v7; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // ecx

  v7 = g_FogOfWarState; /*0x4a59e4*/
  v9 = Text::MeasureWidth(a2, 0); /*0x4a59f1*/
  v10 = *(_DWORD *)(v7 + 28); /*0x4a59f6*/
  v11 = v9; /*0x4a59f9*/
  v12 = a3; /*0x4a5a06*/
  if ( (a5 & 0x100) != 0 ) /*0x4a5a08*/
  {
    v13 = a3 - v11 / 2; /*0x4a5a11*/
LABEL_5:
    v12 = v13; /*0x4a5a1c*/
    goto LABEL_6; /*0x4a5a1c*/
  }
  if ( (a5 & 0x200) != 0 ) /*0x4a5a18*/
  {
    v13 = a3 - v11; /*0x4a5a1a*/
    goto LABEL_5; /*0x4a5a1a*/
  }
LABEL_6:
  *a1 = v12 - a6; /*0x4a5a1e*/
  a1[1] = a4 - a7; /*0x4a5a3a*/
  a1[2] = v11 + 2 * a6; /*0x4a5a3d*/
  a1[3] = v10 + 2 * a7; /*0x4a5a40*/
  return a1; /*0x4a5a43*/
}



// ==== 0x004A5A50  DrawBuildingTilesSHP  this=-  sig=csp ====
int __fastcall SHP_DrawBuildingTiles(int *a1, int a2, char a3)
{
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // edi
  int v47; // ebx
  int v48; // eax
  int v49; // edx
  int v51; // edi
  int v52; // ebx
  int v53; // eax
  int v54; // edx
  int v55; // ecx
  int v56; // edx
  int v57; // edi
  int v58; // ebx
  int v59; // eax
  _DWORD v60[2]; // [esp+24h] [ebp-C0h] BYREF
  _DWORD v61[2]; // [esp+2Ch] [ebp-B8h] BYREF
  _DWORD v62[2]; // [esp+34h] [ebp-B0h] BYREF
  _DWORD v63[2]; // [esp+3Ch] [ebp-A8h] BYREF
  _DWORD v64[2]; // [esp+44h] [ebp-A0h] BYREF
  _DWORD v65[2]; // [esp+4Ch] [ebp-98h] BYREF
  int v66; // [esp+54h] [ebp-90h] BYREF
  int v67; // [esp+58h] [ebp-8Ch]
  _DWORD v68[2]; // [esp+5Ch] [ebp-88h] BYREF
  int v69; // [esp+64h] [ebp-80h] BYREF
  int v70; // [esp+68h] [ebp-7Ch]
  _DWORD v71[2]; // [esp+6Ch] [ebp-78h] BYREF
  _DWORD v72[4]; // [esp+74h] [ebp-70h] BYREF
  _DWORD v73[2]; // [esp+84h] [ebp-60h] BYREF
  int v74; // [esp+8Ch] [ebp-58h]
  int v75; // [esp+90h] [ebp-54h]
  int v76; // [esp+94h] [ebp-50h]
  int v77; // [esp+98h] [ebp-4Ch]
  int v78; // [esp+9Ch] [ebp-48h]
  int v79; // [esp+A0h] [ebp-44h]
  int v80; // [esp+A4h] [ebp-40h]
  int v81; // [esp+A8h] [ebp-3Ch]
  int v82; // [esp+ACh] [ebp-38h]
  int v83; // [esp+B0h] [ebp-34h]
  int v84; // [esp+B4h] [ebp-30h]
  int v85; // [esp+B8h] [ebp-2Ch]
  int v86; // [esp+BCh] [ebp-28h]
  int v87; // [esp+C0h] [ebp-24h]
  int v88; // [esp+C4h] [ebp-20h]
  int v89; // [esp+C8h] [ebp-1Ch]
  int v90; // [esp+CCh] [ebp-18h]
  int v91; // [esp+D0h] [ebp-14h]
  int v92; // [esp+D4h] [ebp-10h]
  int v93; // [esp+D8h] [ebp-Ch]
  int v94; // [esp+DCh] [ebp-8h]
  int v95; // [esp+E0h] [ebp-4h]

  v81 = 15; /*0x4a5a69*/
  v86 = 14; /*0x4a5a74*/
  v5 = (_DWORD *)*((_DWORD *)dword_B054D4 + BuildingAnim::GetType()); /*0x4a5a7f*/
  v6 = v5[202]; /*0x4a5a8b*/
  v7 = v5[200]; /*0x4a5a91*/
  v8 = v5[201]; /*0x4a5a97*/
  v74 = v5[199]; /*0x4a5a9d*/
  v77 = v74; /*0x4a5aa1*/
  v73[1] = v6; /*0x4a5aad*/
  v78 = v6; /*0x4a5ab1*/
  v82 = 12; /*0x4a5ab8*/
  v85 = 12; /*0x4a5abf*/
  v73[0] = v7; /*0x4a5acd*/
  v76 = v7; /*0x4a5ad1*/
  v88 = v7; /*0x4a5ad8*/
  v91 = v7; /*0x4a5adf*/
  v92 = v7; /*0x4a5ae6*/
  v95 = v7; /*0x4a5aed*/
  v80 = 13; /*0x4a5afb*/
  v83 = 13; /*0x4a5b02*/
  v84 = 13; /*0x4a5b09*/
  v87 = 13; /*0x4a5b10*/
  v9 = v5[203]; /*0x4a5b17*/
  v75 = v8; /*0x4a5b1d*/
  v79 = v8; /*0x4a5b24*/
  v89 = v9; /*0x4a5b2b*/
  v90 = v9; /*0x4a5b34*/
  v93 = v9; /*0x4a5b3b*/
  v94 = v9; /*0x4a5b42*/
  v10 = &v73[4 * a2]; /*0x4a5b49*/
  if ( a3 ) /*0x4a5b4d*/
  {
    v11 = v5[195]; /*0x4a5b4f*/
    v12 = *v10; /*0x4a5b55*/
    if ( *(_DWORD *)(v11 + 4) == 1 ) /*0x4a5b5b*/
      v13 = *(unsigned __int8 *)(*(_DWORD *)(v11 + 372) + v12); /*0x4a5b68*/
    else
      v13 = *(unsigned __int16 *)(*(_DWORD *)(v11 + 372) + 2 * v12); /*0x4a5b74*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, a1, v13); /*0x4a5b82*/
  }
  v14 = a2 - 4; /*0x4a5b85*/
  if ( v14 ) /*0x4a5b88*/
  {
    if ( v14 == 1 ) /*0x4a5b8f*/
    {
      v51 = v5[195]; /*0x4a5d9c*/
      v52 = v10[2]; /*0x4a5da2*/
      if ( *(_DWORD *)(v51 + 4) == 1 ) /*0x4a5da9*/
        v53 = *(unsigned __int8 *)(*(_DWORD *)(v51 + 372) + v52); /*0x4a5db3*/
      else
        v53 = *(unsigned __int16 *)(*(_DWORD *)(v51 + 372) + 2 * v52); /*0x4a5dc0*/
      v54 = a1[1] + 1; /*0x4a5dca*/
      v72[0] = *a1 + 1; /*0x4a5dcb*/
      v55 = a1[2]; /*0x4a5dcf*/
      v72[1] = v54; /*0x4a5dd2*/
      v56 = a1[3] - 1; /*0x4a5dda*/
      v72[2] = v55 - 1; /*0x4a5ddb*/
      v72[3] = v56; /*0x4a5de6*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 88))( /*0x4a5df1*/
               g_DSurface_Hidden_2,
               v72,
               v53);
    }
    else
    {
      v15 = v5[195]; /*0x4a5b95*/
      v16 = v10[1]; /*0x4a5b9b*/
      v17 = *(_DWORD *)(v15 + 4); /*0x4a5b9e*/
      v18 = *(_DWORD *)(v15 + 372); /*0x4a5ba1*/
      if ( v17 == 1 ) /*0x4a5baa*/
        v19 = *(unsigned __int8 *)(v18 + v16); /*0x4a5bae*/
      else
        v19 = *(unsigned __int16 *)(v18 + 2 * v16); /*0x4a5bb5*/
      v20 = *a1; /*0x4a5bb9*/
      v21 = a1[3]; /*0x4a5bc3*/
      v66 = a1[2] + *a1; /*0x4a5bc6*/
      v67 = v21 + a1[1]; /*0x4a5bd3*/
      v62[1] = v67; /*0x4a5bd7*/
      v62[0] = v20; /*0x4a5be2*/
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5bed*/
        g_DSurface_Hidden_2,
        v62,
        &v66,
        v19);
      v22 = v5[195]; /*0x4a5bf0*/
      v23 = v10[1]; /*0x4a5bf6*/
      v24 = *(_DWORD *)(v22 + 4); /*0x4a5bf9*/
      v25 = *(_DWORD *)(v22 + 372); /*0x4a5bfc*/
      if ( v24 == 1 ) /*0x4a5c05*/
        v26 = *(unsigned __int8 *)(v25 + v23); /*0x4a5c09*/
      else
        v26 = *(unsigned __int16 *)(v25 + 2 * v23); /*0x4a5c10*/
      v27 = a1[2] + *a1; /*0x4a5c19*/
      v28 = a1[3] + a1[1]; /*0x4a5c21*/
      v64[1] = a1[1]; /*0x4a5c24*/
      v71[0] = v27; /*0x4a5c33*/
      v71[1] = v28; /*0x4a5c37*/
      v64[0] = v27; /*0x4a5c3b*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5c46*/
        g_DSurface_Hidden_2,
        v64,
        v71,
        v26);
      v29 = v5[195]; /*0x4a5c49*/
      v30 = v10[2]; /*0x4a5c4f*/
      v31 = *(_DWORD *)(v29 + 4); /*0x4a5c57*/
      v32 = *(_DWORD *)(v29 + 372); /*0x4a5c5a*/
      if ( v31 == 1 ) /*0x4a5c62*/
        v33 = *(unsigned __int8 *)(v32 + v30); /*0x4a5c66*/
      else
        v33 = *(unsigned __int16 *)(v32 + 2 * v30); /*0x4a5c6d*/
      v34 = a1[2] + *a1; /*0x4a5c7a*/
      v60[0] = *a1; /*0x4a5c7e*/
      v69 = v34; /*0x4a5c86*/
      v70 = a1[1]; /*0x4a5c8d*/
      v60[1] = v70; /*0x4a5c91*/
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5c9e*/
        g_DSurface_Hidden_2,
        v60,
        &v69,
        v33);
      v35 = v5[195]; /*0x4a5ca1*/
      v36 = v10[2]; /*0x4a5ca7*/
      v37 = *(_DWORD *)(v35 + 4); /*0x4a5caa*/
      v38 = *(_DWORD *)(v35 + 372); /*0x4a5cad*/
      if ( v37 == 1 ) /*0x4a5cb5*/
        v39 = *(unsigned __int8 *)(v38 + v36); /*0x4a5cb9*/
      else
        v39 = *(unsigned __int16 *)(v38 + 2 * v36); /*0x4a5cc0*/
      v40 = *a1; /*0x4a5cc7*/
      v41 = a1[3] + a1[1]; /*0x4a5ccc*/
      v63[1] = a1[1]; /*0x4a5ccf*/
      v61[0] = v40; /*0x4a5cde*/
      v61[1] = v41; /*0x4a5ce2*/
      v63[0] = v40; /*0x4a5ce6*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5cf1*/
        g_DSurface_Hidden_2,
        v63,
        v61,
        v39);
      v42 = v5[195]; /*0x4a5cf4*/
      v43 = v10[3]; /*0x4a5cfa*/
      if ( *(_DWORD *)(v42 + 4) == 1 ) /*0x4a5d05*/
        v44 = *(unsigned __int8 *)(*(_DWORD *)(v42 + 372) + v43); /*0x4a5d12*/
      else
        v44 = *(unsigned __int16 *)(*(_DWORD *)(v42 + 372) + 2 * v43); /*0x4a5d1e*/
      v45 = a1[1]; /*0x4a5d24*/
      v65[0] = *a1; /*0x4a5d27*/
      v65[1] = a1[3] + v45; /*0x4a5d37*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 36))(g_DSurface_Hidden_2, v65, v44); /*0x4a5d42*/
      v46 = v5[195]; /*0x4a5d45*/
      v47 = v10[3]; /*0x4a5d4b*/
      if ( *(_DWORD *)(v46 + 4) == 1 ) /*0x4a5d51*/
        v48 = *(unsigned __int8 *)(*(_DWORD *)(v46 + 372) + v47); /*0x4a5d5b*/
      else
        v48 = *(unsigned __int16 *)(*(_DWORD *)(v46 + 372) + 2 * v47); /*0x4a5d68*/
      v49 = a1[1]; /*0x4a5d71*/
      v68[0] = *a1 + a1[2]; /*0x4a5d76*/
      v68[1] = v49; /*0x4a5d81*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 36))( /*0x4a5d8c*/
               g_DSurface_Hidden_2,
               v68,
               v48);
    }
  }
  else
  {
    v57 = v5[195]; /*0x4a5e01*/
    v58 = v10[2]; /*0x4a5e07*/
    if ( *(_DWORD *)(v57 + 4) == 1 ) /*0x4a5e0e*/
      v59 = *(unsigned __int8 *)(*(_DWORD *)(v57 + 372) + v58); /*0x4a5e18*/
    else
      v59 = *(unsigned __int16 *)(*(_DWORD *)(v57 + 372) + 2 * v58); /*0x4a5e25*/
    return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 88))(g_DSurface_Hidden_2, a1, v59); /*0x4a5e33*/
  }
}



// ==== 0x004A5E50  ObjectClass::method_4A5E50  this=ObjectClass  sig=csp ====
int __thiscall sub_4A5E50(ObjectClass *this, int a2, int *a3, _DWORD *a4)
{
  Text *v5; // esi
  int PixelData; // eax

  *a3 = 0; /*0x4a5e5e*/
  *a4 = 0; /*0x4a5e65*/
  v5 = g_FogOfWarState; /*0x4a5e6b*/
  if ( !this || !g_FogOfWarState ) /*0x4a5e77*/
    return 0; /*0x4a5ea2*/
  PixelData = FontClass::GetPixelData((FontClass *)g_FogOfWarState, 0x57u); /*0x4a5e7d*/
  Text::Layout(v5, (unsigned __int16 *)this, a3, a4, a2 * PixelData); /*0x4a5e8d*/
  return *a4 / v5[7].Text_field_00; /*0x4a5e98*/
}



// ==== 0x004A5EB0  RenderTextLabel  this=IUnknown  sig=csp ====
int *__fastcall RenderTextLabel(
        int *a1,
        unsigned __int16 *a2,
        int *a3,
        _DWORD *a4,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD *v9; // edi
  Char *v10; // ebx
  int v11; // ebp
  int v12; // esi
  char v13; // ah
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v22; // [esp+18h] [ebp-20h] BYREF
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+20h] [ebp-18h]
  char *v25; // [esp+24h] [ebp-14h]
  _DWORD v26[4]; // [esp+28h] [ebp-10h] BYREF

  v9 = a4; /*0x4a5ebe*/
  v10 = (Char *)g_FogOfWarState; /*0x4a5ec8*/
  v11 = a4[1] + *(_DWORD *)(a5 + 4); /*0x4a5ed3*/
  v12 = *(_DWORD *)a5 + *a4; /*0x4a5ed8*/
  Text::Layout(g_FogOfWarState, a2, &a5, &a4, a4[2]); /*0x4a5eec*/
  v13 = BYTE1(a8); /*0x4a5ef1*/
  if ( (a8 & 0x100) != 0 ) /*0x4a5efc*/
  {
    v12 += a5 / -2; /*0x4a5f07*/
    v13 = BYTE1(a8); /*0x4a5f09*/
  }
  else if ( (a8 & 0x200) != 0 ) /*0x4a5f12*/
  {
    v12 -= a5; /*0x4a5f14*/
  }
  if ( v13 >= 0 ) /*0x4a5f19*/
  {
    if ( (v13 & 4) != 0 ) /*0x4a5f64*/
    {
      v24 = a5 + 2; /*0x4a5f6c*/
      v25 = (char *)a4 + 2; /*0x4a5f7a*/
      v23 = v11 - 1; /*0x4a5f82*/
      v22 = v12 - 1; /*0x4a5f86*/
      (*(void (__thiscall **)(int *, int *, _DWORD))(*a3 + 20))(a3, &v22, 0); /*0x4a5f93*/
    }
  }
  else
  {
    v24 = a5 + 2; /*0x4a5f21*/
    v23 = v11 - 1; /*0x4a5f2c*/
    v25 = (char *)a4 + 2; /*0x4a5f30*/
    v22 = v12 - 1; /*0x4a5f42*/
    v14 = *a3; /*0x4a5f46*/
    LOWORD(a8) = 0; /*0x4a5f4c*/
    BYTE2(a8) = 0; /*0x4a5f57*/
    (*(void (__thiscall **)(int *, int *, int *, int))(v14 + 28))(a3, &v22, &a8, 60); /*0x4a5f5c*/
  }
  v15 = v9[2]; /*0x4a5f98*/
  v16 = v9[1]; /*0x4a5f9b*/
  v26[0] = *v9; /*0x4a5f9e*/
  v17 = v15 + v26[0]; /*0x4a5fa2*/
  v18 = v9[3]; /*0x4a5fa4*/
  v26[1] = v16; /*0x4a5fa7*/
  v26[2] = v17; /*0x4a5fb1*/
  v26[3] = v16 + v18; /*0x4a5fb5*/
  Char::Swap(v10, 1); /*0x4a5fb9*/
  TextGroup::SetRect((TextGroup *)v10, v26); /*0x4a5fc5*/
  Property::Set((Property *)v10, a6); /*0x4a5fd1*/
  FontRenderer::DrawText(v10, a3, a2, v12, v11, 0, 0); /*0x4a5fed*/
  *a1 = v12; /*0x4a5ff7*/
  a1[1] = v11; /*0x4a5ff9*/
  return a1; /*0x4a5ff6*/
}



// ==== 0x004A6010  globalHelper_0A6010  this=-  sig=csp ====
int *__fastcall sub_4A6010(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // eax
  int *v12; // eax
  int v14; // [esp+8h] [ebp-8h] BYREF

  v11 = Color::ConvertToRGB((unsigned __int8 *)(a6 + 776), (int)&a6); /*0x4a6028*/
  LOWORD(v14) = *(_WORD *)v11; /*0x4a6036*/
  BYTE2(v14) = *(_BYTE *)(v11 + 2); /*0x4a603e*/
  v12 = RenderTextLabel( /*0x4a60b2*/
          &v14,
          a2,
          a3,
          a4,
          a5,
          ((unsigned __int8)v14 >> g_BitShift_Green_0 << g_BitShift_Red)
        | (BYTE1(v14) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(v14) >> g_BitMask_Red << g_BitShift_Blue),
          a7,
          a8,
          a9);
  *a1 = *v12; /*0x4a60b9*/
  a1[1] = v12[1]; /*0x4a60bf*/
  return a1; /*0x4a60bb*/
}



// ==== 0x004A60D0  TextRenderer::GetInstance  this=TextRenderer  sig=csp ====
int TextRenderer_GetInstance()
{
  return g_FogOfWarState; /*0x4a60d5*/
}



// ==== 0x004A60E0  TextRenderer::Printf  this=ObjectClass  sig=csp ====
_DWORD *__cdecl sub_4A60E0(
        _DWORD *a1,
        size_t BufferCount,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        wchar_t Format)
{
  _DWORD *v9; // ecx
  _DWORD *v11; // edx
  va_list v12; // [esp+0h] [ebp-408h]
  wchar_t Buffer[512]; // [esp+8h] [ebp-400h] BYREF

  if ( BufferCount ) /*0x4a60ec*/
  {
    vswprintf(Buffer, BufferCount, &Format, v12); /*0x4a60fc*/
    v9 = (_DWORD *)RenderTextLabel(a3, a4, a5, a6, a7, a8, 1); /*0x4a6143*/
    *a1 = *v9; /*0x4a614e*/
    a1[1] = v9[1]; /*0x4a6153*/
    return a1; /*0x4a6145*/
  }
  else
  {
    v11 = (_DWORD *)RenderTextLabel(a3, a4, a5, a6, a7, a8, 1); /*0x4a619a*/
    *a1 = *v11; /*0x4a61a5*/
    a1[1] = v11[1]; /*0x4a61aa*/
    return a1; /*0x4a619c*/
  }
}



// ==== 0x004A61C0  TextRenderer::DrawText  this=TextRenderer  sig=csp ====
int *TextRenderer_DrawText(int *a1, size_t BufferCount, int a3, _DWORD *a4, int a5, int a6, int a7, int a8, ...)
{
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  va_list v12; // [esp+0h] [ebp-410h]
  int v13[2]; // [esp+4h] [ebp-40Ch] BYREF
  _BYTE v14[4]; // [esp+Ch] [ebp-404h] BYREF
  wchar_t Buffer[512]; // [esp+10h] [ebp-400h] BYREF
  va_list Format; // [esp+434h] [ebp+24h] BYREF

  va_start(Format, a8);
  if ( BufferCount ) /*0x4a61cd*/
  {
    vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v12); /*0x4a61e1*/
    v8 = Color::ConvertToRGB(v14); /*0x4a6202*/
    LOWORD(v13[0]) = *(_WORD *)v8; /*0x4a6210*/
    BYTE2(v13[0]) = *(_BYTE *)(v8 + 2); /*0x4a621b*/
    v9 = RenderTextLabel( /*0x4a6293*/
           v13,
           (int)Buffer,
           a3,
           a4,
           a5,
           (BYTE1(v13[0]) >> g_BitMask_Blue << g_BitMask_Green)
         | (BYTE2(v13[0]) >> g_BitMask_Red << g_BitShift_Blue)
         | (LOBYTE(v13[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
           a7,
           a8,
           1);
  }
  else
  {
    v10 = Color::ConvertToRGB(v14); /*0x4a62b1*/
    LOWORD(v13[0]) = *(_WORD *)v10; /*0x4a62bf*/
    BYTE2(v13[0]) = *(_BYTE *)(v10 + 2); /*0x4a62ca*/
    v9 = RenderTextLabel( /*0x4a6340*/
           v13,
           0,
           a3,
           a4,
           a5,
           (BYTE1(v13[0]) >> g_BitMask_Blue << g_BitMask_Green)
         | (BYTE2(v13[0]) >> g_BitMask_Red << g_BitShift_Blue)
         | (LOBYTE(v13[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
           a7,
           a8,
           1);
  }
  *a1 = *v9; /*0x4a6351*/
  a1[1] = v9[1]; /*0x4a6356*/
  return a1; /*0x4a634e*/
}



// ==== 0x004A6360  RenderTextLabelWordWrap  this=-  sig=csp ====
int *__fastcall TextLabel_RenderWordWrap(
        int *a1,
        const wchar_t *a2,
        int a3,
        _DWORD *a4,
        int *a5,
        __int16 a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int *a10)
{
  int *v10; // esi
  int v11; // edi
  wchar_t *v12; // ebp
  unsigned int v13; // ebx
  wchar_t *v14; // eax
  wchar_t *v15; // edx
  int v16; // esi
  wchar_t *v17; // edi
  int v18; // eax
  int v19; // edx
  int *v20; // eax
  unsigned int *v21; // ecx
  unsigned int v22; // eax
  int v24; // [esp+Ch] [ebp-424h]
  wchar_t *v25; // [esp+10h] [ebp-420h]
  int v27; // [esp+1Ch] [ebp-414h]
  _DWORD v28[2]; // [esp+20h] [ebp-410h] BYREF
  int v29; // [esp+28h] [ebp-408h] BYREF
  wchar_t Destination[512]; // [esp+30h] [ebp-400h] BYREF

  v10 = a1; /*0x4a636f*/
  v11 = *a5; /*0x4a6371*/
  v27 = a5[1]; /*0x4a637c*/
  if ( a2 ) /*0x4a6380*/
  {
    wcscpy(Destination, a2); /*0x4a638e*/
    v12 = Destination; /*0x4a63a0*/
    v13 = 0; /*0x4a63a4*/
    v24 = 1; /*0x4a63a6*/
    do /*0x4a64d6*/
    {
      if ( v13 >= a9 ) /*0x4a63b5*/
        break; /*0x4a63b5*/
      v14 = wcschr(v12, 9u); /*0x4a63be*/
      v15 = v14; /*0x4a63c3*/
      v25 = v14; /*0x4a63ca*/
      if ( v14 ) /*0x4a63ce*/
        *v14 = 0; /*0x4a63d0*/
      LOWORD(v14) = *v12; /*0x4a63d5*/
      if ( *v12 ) /*0x4a63d5*/
      {
        v16 = 0; /*0x4a63e2*/
        v17 = v12; /*0x4a63e4*/
        do /*0x4a6409*/
        {
          ++v17; /*0x4a63eb*/
          v14 = (wchar_t *)FontClass::GetPixelData(v14); /*0x4a63ee*/
          v16 += (int)v14; /*0x4a63f3*/
          LOWORD(v14) = *v17; /*0x4a63f5*/
        }
        while ( *v17 && v16 + v13 < a9 ); /*0x4a6409*/
        HIWORD(v18) = HIWORD(a9); /*0x4a640b*/
        if ( v16 + v13 >= a9 ) /*0x4a6417*/
        {
          LOWORD(v18) = *(v17 - 1); /*0x4a6419*/
          v16 -= FontClass::GetPixelData(v18); /*0x4a642a*/
          *(v17 - 1) = 0; /*0x4a642c*/
          v24 = 0; /*0x4a6431*/
        }
        v19 = a5[1]; /*0x4a6444*/
        v28[0] = v13 + *a5; /*0x4a6450*/
        v28[1] = v19; /*0x4a645b*/
        v20 = RenderTextLabel(&v29, (int)v12, a3, a4, (int)v28, a6, a7, a8, 1); /*0x4a6484*/
        v11 = *v20; /*0x4a6489*/
        v13 += v16; /*0x4a648b*/
        v10 = a1; /*0x4a648d*/
        v15 = v25; /*0x4a6491*/
        v27 = v20[1]; /*0x4a6498*/
      }
      if ( !v15 ) /*0x4a649e*/
        break; /*0x4a649e*/
      v21 = a10; /*0x4a64a0*/
      if ( a10 ) /*0x4a64a9*/
      {
        if ( v13 > *a10 ) /*0x4a64ad*/
        {
          do /*0x4a64b7*/
          {
            v22 = v21[1]; /*0x4a64af*/
            ++v21; /*0x4a64b2*/
          }
          while ( v13 > v22 ); /*0x4a64b7*/
          a10 = v21; /*0x4a64b9*/
        }
        v13 = *v21; /*0x4a64c0*/
      }
      else
      {
        v13 = 10 * (5 * v13 + 5); /*0x4a64cb*/
      }
      v12 = v15 + 1; /*0x4a64d1*/
    }
    while ( v24 ); /*0x4a64d6*/
  }
  *v10 = v11; /*0x4a64e2*/
  v10[1] = v27; /*0x4a64e4*/
  return v10; /*0x4a64e9*/
}



// ==== 0x004A6500  FillRectangle  this=-  sig=csp ====
_DWORD *__fastcall Rectangle_Fill(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // edx
  __int16 v16; // [esp+8h] [ebp-8h] BYREF
  unsigned __int8 v17; // [esp+Ah] [ebp-6h]

  v12 = Color::ConvertToRGB((unsigned __int8 *)(a6 + 776), (int)&a6); /*0x4a6518*/
  v16 = *(_WORD *)v12; /*0x4a6526*/
  v17 = *(_BYTE *)(v12 + 2); /*0x4a652e*/
  v13 = (_DWORD *)RenderTextLabelWordWrap( /*0x4a65a7*/
                    &v16,
                    a2,
                    a3,
                    a4,
                    a5,
                    ((unsigned __int8)v16 >> g_BitShift_Green_0 << g_BitShift_Red)
                  | (HIBYTE(v16) >> g_BitMask_Blue << g_BitMask_Green)
                  | (v17 >> g_BitMask_Red << g_BitShift_Blue),
                    a7,
                    a8,
                    a9,
                    a10);
  *a1 = *v13; /*0x4a65ae*/
  v14 = v13[1]; /*0x4a65b1*/
  a1[1] = v14; /*0x4a65b6*/
  return a1; /*0x4a65b0*/
}



// ==== 0x004A65C0  sub_4A65C0  this=-  sig=ida-proto ====
int *__fastcall sub_4A65C0(int *a1, int a2, int a3, _DWORD *a4, int a5, __int16 a6, int a7, int a8, int a9, int a10)
{
  int *v12; // eax
  int v14; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a65d0*/
  {
    v12 = RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a65fb*/
  }
  else
  {
    v14 = Color::ConvertToRGB((unsigned __int8 *)(*((_DWORD *)dword_B054D4 + a9) + 776), (int)&a9); /*0x4a6628*/
    LOWORD(v15[0]) = *(_WORD *)v14; /*0x4a6630*/
    BYTE2(v15[0]) = *(_BYTE *)(v14 + 2); /*0x4a663e*/
    v12 = RenderTextLabel( /*0x4a66b2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (BYTE1(v15[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (BYTE2(v15[0]) >> g_BitMask_Red << g_BitShift_Blue)
          | (LOBYTE(v15[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6602*/
  a1[1] = v12[1]; /*0x4a660a*/
  return a1; /*0x4a6604*/
}



// ==== 0x004A66D0  globalHelper_0A66D0  this=-  sig=csp ====
int *__fastcall sub_4A66D0(int *a1, int a2, int a3, _DWORD *a4, int a5, __int16 a6, int a7, int a8, int a9, int a10)
{
  int *v12; // eax
  int v14; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a66e0*/
  {
    v12 = RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a670b*/
  }
  else
  {
    v14 = Color::ConvertToRGB((unsigned __int8 *)(*((_DWORD *)dword_B054D4 + a9) + 776), (int)&a9); /*0x4a6738*/
    LOWORD(v15[0]) = *(_WORD *)v14; /*0x4a6740*/
    BYTE2(v15[0]) = *(_BYTE *)(v14 + 2); /*0x4a674e*/
    v12 = RenderTextLabel( /*0x4a67c2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (BYTE1(v15[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (BYTE2(v15[0]) >> g_BitMask_Red << g_BitShift_Blue)
          | (LOBYTE(v15[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6712*/
  a1[1] = v12[1]; /*0x4a671a*/
  return a1; /*0x4a6714*/
}



// ==== 0x004A67E0  sub_4A67E0  this=-  sig=ida-proto ====
int *__fastcall sub_4A67E0(char a1, int a2)
{
  int v2; // ecx

  LOBYTE(a2) = a1; /*0x4a67e0*/
  BYTE1(a2) = a1; /*0x4a67e4*/
  dword_8A0150 = 0; /*0x4a67e6*/
  dword_8A0154 = 0; /*0x4a67ed*/
  v2 = a2 << 16; /*0x4a67f2*/
  dword_8A0158 = 0; /*0x4a67f5*/
  LOWORD(v2) = a2; /*0x4a67fa*/
  *(int *)((char *)&dword_8A0158 + 3) = v2; /*0x4a6802*/
  HIBYTE(dword_8A015C) = a2; /*0x4a6808*/
  return &dword_8A0150; /*0x4a6813*/
}



// ==== 0x004A6820  sub_4A6820  this=-  sig=ida-proto ====
int sub_4A6820()
{
  dword_8A0170 = 0; /*0x4a6822*/
  dword_8A0174 = 0; /*0x4a6827*/
  dword_8A0178 = 0; /*0x4a682c*/
  dword_8A017C = 0; /*0x4a6831*/
  return 0; /*0x4a6836*/
}



// ==== 0x004A6840  ObjectClass::method_4A6840  this=ObjectClass  sig=csp ====
char *__thiscall sub_4A6840(ObjectClass *this, HWND hWnd, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int i; // eax
  _BYTE *v8; // ecx
  int *p_vtable3; // ebp
  HDC DC; // edi
  _DWORD *ptr_4; // ecx
  int uniqueId; // edx
  int v13; // eax
  unsigned int v14; // ebp
  char *v15; // edi
  int abstractFlags; // eax
  void *ptr_C; // ecx

  LOBYTE(this->AbstractClass) = 0; /*0x4a6855*/
  this->? = 0; /*0x4a6857*/
  this->? = 0; /*0x4a685a*/
  this->? = 0; /*0x4a685d*/
  this->? = a3; /*0x4a6860*/
  this->? = a4; /*0x4a6863*/
  this->? = 0; /*0x4a6866*/
  this->? = 0; /*0x4a6869*/
  this->? = 0; /*0x4a686c*/
  v6 = (_DWORD *)__2_YAPAXI_Z(0x42Cu); /*0x4a686f*/
  this->? = v6; /*0x4a6879*/
  if ( !v6 ) /*0x4a687c*/
    goto LABEL_12; /*0x4a687c*/
  *v6 = 40; /*0x4a6882*/
  *((_DWORD *)this->? + 1) = a3; /*0x4a688d*/
  *((_DWORD *)this->? + 2) = -a4; /*0x4a6893*/
  *((_WORD *)this->? + 6) = 1; /*0x4a689d*/
  *((_WORD *)this->? + 7) = 8; /*0x4a68a6*/
  *((_DWORD *)this->? + 4) = 0; /*0x4a68af*/
  *((_DWORD *)this->? + 5) = 0; /*0x4a68b5*/
  *((_DWORD *)this->? + 6) = 0; /*0x4a68bb*/
  *((_DWORD *)this->? + 7) = 0; /*0x4a68c6*/
  *((_DWORD *)this->? + 8) = 256; /*0x4a68cc*/
  *((_DWORD *)this->? + 9) = 256; /*0x4a68d2*/
  for ( i = 0; i < 256; *((_BYTE *)this->? + 4 * i + 39) = 0 ) /*0x4a68d5*/
  {
    v8 = (_BYTE *)(a5 + 2 * (i % 256) + i % 256); /*0x4a68ef*/
    ++i; /*0x4a68f1*/
    *((_BYTE *)this->? + 4 * i + 36) = v8[2]; /*0x4a68fa*/
    *((_BYTE *)this->? + 4 * i + 37) = v8[1]; /*0x4a6904*/
    *((_BYTE *)this->? + 4 * i + 38) = *v8; /*0x4a690d*/
  }
  p_vtable3 = (int *)&this->?; /*0x4a6929*/
  DC = GetDC(hWnd); /*0x4a692e*/
  this->? = CreateDIBSection(DC, (const BITMAPINFO *)this->?, 0, &this->?, 0, 0); /*0x4a693f*/
  ReleaseDC(hWnd, DC); /*0x4a6942*/
  if ( !this->? ) /*0x4a6948*/
    goto LABEL_12; /*0x4a6948*/
  ptr_4 = this->?; /*0x4a6951*/
  this->? = ptr_4[1]; /*0x4a6957*/
  uniqueId = this->?; /*0x4a6962*/
  this->? = abs32(ptr_4[2]); /*0x4a6965*/
  v13 = uniqueId + 3; /*0x4a6968*/
  LOBYTE(v13) = (uniqueId + 3) & 0xFC; /*0x4a696b*/
  this->? = v13; /*0x4a696d*/
  if ( (int)ptr_4[2] <= 0 ) /*0x4a6975*/
  {
    this->? = *p_vtable3; /*0x4a698b*/
  }
  else
  {
    this->? = *p_vtable3 + uniqueId * (this->? - 1); /*0x4a6981*/
    v13 = -v13; /*0x4a6984*/
  }
  this->? = v13; /*0x4a698e*/
  v14 = abs32(v13); /*0x4a6998*/
  v15 = (char *)__2_YAPAXI_Z(0x20u); /*0x4a699f*/
  if ( v15 ) /*0x4a69a6*/
  {
    abstractFlags = this->?; /*0x4a69a8*/
    ptr_C = this->?; /*0x4a69ab*/
    *((_DWORD *)v15 + 2) = abstractFlags; /*0x4a69ae*/
    *((_DWORD *)v15 + 1) = v14; /*0x4a69b9*/
    *((_DWORD *)v15 + 3) = 0; /*0x4a69bc*/
    *(_DWORD *)v15 = &XSurface_Vtable; /*0x4a69bf*/
    *((_DWORD *)v15 + 4) = 1; /*0x4a69c5*/
    Buffer::Init((Buffer *)(v15 + 20), (int)ptr_C, v14 * abstractFlags); /*0x4a69cc*/
    *(_DWORD *)v15 = &BSurface_Vtable; /*0x4a69d1*/
  }
  else
  {
    v15 = 0; /*0x4a69d9*/
  }
  this->? = v15; /*0x4a69dd*/
  if ( !v15 ) /*0x4a69e0*/
LABEL_12:
    LOBYTE(this->AbstractClass) = 1; /*0x4a69e2*/
  return (char *)this; /*0x4a69e7*/
}



// ==== 0x004A6A60  sub_4A6A60  this=-  sig=ida-proto ====
void sub_4A6A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a6a6c*/
  dbl_8A0238 = Math::Sqrt(v0 + v0); /*0x4a6a7e*/
}



// ==== 0x004A6A90  sub_4A6A90  this=-  sig=ida-proto ====
void sub_4A6A90()
{
  dbl_8A0288 = dbl_8A0238 / 60.0; /*0x4a6a9c*/
}



// ==== 0x004A6AB0  sub_4A6AB0  this=-  sig=ida-proto ====
void sub_4A6AB0()
{
  dbl_8A0270 = 1.0 / dbl_8A0288; /*0x4a6abc*/
}



// ==== 0x004A6AD0  sub_4A6AD0  this=-  sig=ida-proto ====
void sub_4A6AD0()
{
  dbl_8A0268 = 0.0174532925199433 * 45.0; /*0x4a6adc*/
}



// ==== 0x004A6AF0  sub_4A6AF0  this=-  sig=ida-proto ====
void sub_4A6AF0()
{
  dbl_8A0240 = 0.0174532925199433 * 60.0; /*0x4a6afc*/
}



// ==== 0x004A6B10  sub_4A6B10  this=-  sig=ida-proto ====
void sub_4A6B10()
{
  dbl_8A0200 = 0.0174532925199433 * 90.0; /*0x4a6b1c*/
}



// ==== 0x004A6B30  sub_4A6B30  this=-  sig=ida-proto ====
__int64 sub_4A6B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0200 - dbl_8A0240); /*0x4a6b42*/
  result = Math::RoundToInt(v0 * dbl_8A0238 * 0.5); /*0x4a6b56*/
  dword_8A0290 = result; /*0x4a6b5b*/
  return result; /*0x4a6b60*/
}



// ==== 0x004A6B70  sub_4A6B70  this=-  sig=ida-proto ====
void sub_4A6B70()
{
  dbl_8A0248 = Math::ArcTan((double)dword_8A0290 * 0.00390625); /*0x4a6b87*/
}



// ==== 0x004A6BA0  sub_4A6BA0  this=-  sig=ida-proto ====
void sub_4A6BA0()
{
  dbl_8A0260 = Math::ArcTan((double)(2 * dword_8A0290) / dbl_8A0238); /*0x4a6bc2*/
}



// ==== 0x004A6BD0  sub_4A6BD0  this=-  sig=ida-proto ====
__int64 sub_4A6BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0290) + 0.5); /*0x4a6beb*/
  dword_8A0284 = result; /*0x4a6bf0*/
  return result; /*0x4a6bf6*/
}



// ==== 0x004A6C00  sub_4A6C00  this=-  sig=ida-proto ====
int sub_4A6C00()
{
  word_8A0230 = 0; /*0x4a6c02*/
  word_8A0232 = 0; /*0x4a6c08*/
  return 0; /*0x4a6c0e*/
}



// ==== 0x004A6C10  sub_4A6C10  this=-  sig=ida-proto ====
int sub_4A6C10()
{
  dword_8A0250 = 0; /*0x4a6c12*/
  dword_8A0254 = 0; /*0x4a6c17*/
  dword_8A0258 = 0; /*0x4a6c1c*/
  return 0; /*0x4a6c21*/
}



// ==== 0x004A6C30  sub_4A6C30  this=-  sig=ida-proto ====
int sub_4A6C30()
{
  dword_8A0280 = 0; /*0x4a6c35*/
  dword_8A0278 = 128; /*0x4a6c3f*/
  dword_8A027C = 128; /*0x4a6c44*/
  return 128; /*0x4a6c49*/
}



// ==== 0x004A6C50  sub_4A6C50  this=-  sig=ida-proto ====
int sub_4A6C50()
{
  dword_8A0220 = 0; /*0x4a6c52*/
  dword_8A0224 = 0; /*0x4a6c57*/
  dword_8A0228 = 0; /*0x4a6c5c*/
  dword_8A022C = 0; /*0x4a6c61*/
  return 0; /*0x4a6c66*/
}



// ==== 0x004A6C70  sub_4A6C70  this=-  sig=ida-proto ====
int sub_4A6C70()
{
  dword_8A020C = 0; /*0x4a6c77*/
  dword_8A0210 = 0; /*0x4a6c7c*/
  byte_8A0214 = 1; /*0x4a6c81*/
  byte_8A0215 = 0; /*0x4a6c88*/
  dword_8A0208 = (int)&DynamicVectorClass<DiskLaserClass *>::`vftable'; /*0x4a6c8d*/
  dword_8A021C = 10; /*0x4a6c97*/
  dword_8A0218 = 0; /*0x4a6ca1*/
  return atexit(sub_4A6CB0); /*0x4a6cac*/
}



// ==== 0x004A6CB0  sub_4A6CB0  this=-  sig=ida-proto ====
void __cdecl sub_4A6CB0()
{
  dword_8A0208 = (int)&VectorClass<DiskLaserClass *>::`vftable'; /*0x4a6cb8*/
  if ( dword_8A020C && byte_8A0215 ) /*0x4a6ccc*/
  {
    __3_YAXPAX_Z(dword_8A020C); /*0x4a6ccf*/
    dword_8A020C = 0; /*0x4a6cd7*/
  }
  byte_8A0215 = 0; /*0x4a6cdd*/
  dword_8A0210 = 0; /*0x4a6ce3*/
}



// ==== 0x004A6CF0  InitDirectionOffsets  this=-  sig=ida-proto ====
__int64 Direction_InitOffsets()
{
  double v0; // st7
  int v1; // esi
  double v2; // st7
  double v3; // st7
  int v4; // esi
  double v5; // st7
  double v6; // st7
  int v7; // esi
  double v8; // st7
  double v9; // st7
  int v10; // esi
  double v11; // st7
  double v12; // st7
  int v13; // esi
  double v14; // st7
  double v15; // st7
  int v16; // esi
  double v17; // st7
  double v18; // st7
  int v19; // esi
  double v20; // st7
  double v21; // st7
  int v22; // esi
  double v23; // st7
  double v24; // st7
  int v25; // esi
  double v26; // st7
  double v27; // st7
  int v28; // esi
  double v29; // st7
  double v30; // st7
  int v31; // esi
  double v32; // st7
  double v33; // st7
  int v34; // esi
  double v35; // st7
  double v36; // st7
  int v37; // esi
  double v38; // st7
  double v39; // st7
  int v40; // esi
  double v41; // st7
  double v42; // st7
  int v43; // esi
  double v44; // st7
  double v45; // st7
  int v46; // esi
  double v47; // st7
  __int64 result; // rax

  v0 = Math::SinCos(0.0174532925199433 * 270.0); /*0x4a6d03*/
  v1 = Math::RoundToInt(v0 * 240.0); /*0x4a6d1f*/
  v2 = Math::ArcTan2(0.0174532925199433 * 270.0); /*0x4a6d24*/
  dword_8A0180[0] = Math::RoundToInt(v2 * 240.0); /*0x4a6d40*/
  dword_8A0184[0] = v1; /*0x4a6d45*/
  v3 = Math::SinCos(0.0174532925199433 * 292.0); /*0x4a6d4e*/
  v4 = Math::RoundToInt(v3 * 240.0); /*0x4a6d6a*/
  v5 = Math::ArcTan2(0.0174532925199433 * 292.0); /*0x4a6d6f*/
  dword_8A0188 = Math::RoundToInt(v5 * 240.0); /*0x4a6d8b*/
  dword_8A018C = v4; /*0x4a6d90*/
  v6 = Math::SinCos(0.0174532925199433 * 315.0); /*0x4a6d99*/
  v7 = Math::RoundToInt(v6 * 240.0); /*0x4a6db5*/
  v8 = Math::ArcTan2(0.0174532925199433 * 315.0); /*0x4a6dba*/
  dword_8A0190 = Math::RoundToInt(v8 * 240.0); /*0x4a6dd6*/
  dword_8A0194 = v7; /*0x4a6ddb*/
  v9 = Math::SinCos(0.0174532925199433 * 337.0); /*0x4a6de4*/
  v10 = Math::RoundToInt(v9 * 240.0); /*0x4a6e00*/
  v11 = Math::ArcTan2(0.0174532925199433 * 337.0); /*0x4a6e05*/
  dword_8A0198 = Math::RoundToInt(v11 * 240.0); /*0x4a6e19*/
  dword_8A019C = v10; /*0x4a6e1e*/
  v12 = Math::SinCos(0.0); /*0x4a6e24*/
  v13 = Math::RoundToInt(v12 * 240.0); /*0x4a6e38*/
  v14 = Math::ArcTan2(0.0); /*0x4a6e3a*/
  dword_8A01A0 = Math::RoundToInt(v14 * 240.0); /*0x4a6e59*/
  dword_8A01A4 = v13; /*0x4a6e5e*/
  v15 = Math::SinCos(0.0174532925199433 * 22.0); /*0x4a6e67*/
  v16 = Math::RoundToInt(v15 * 240.0); /*0x4a6e83*/
  v17 = Math::ArcTan2(0.0174532925199433 * 22.0); /*0x4a6e88*/
  dword_8A01A8 = Math::RoundToInt(v17 * 240.0); /*0x4a6ea4*/
  dword_8A01AC = v16; /*0x4a6ea9*/
  v18 = Math::SinCos(0.0174532925199433 * 45.0); /*0x4a6eb2*/
  v19 = Math::RoundToInt(v18 * 240.0); /*0x4a6ece*/
  v20 = Math::ArcTan2(0.0174532925199433 * 45.0); /*0x4a6ed3*/
  dword_8A01B0 = Math::RoundToInt(v20 * 240.0); /*0x4a6eef*/
  dword_8A01B4 = v19; /*0x4a6ef4*/
  v21 = Math::SinCos(0.0174532925199433 * 67.0); /*0x4a6efd*/
  v22 = Math::RoundToInt(v21 * 240.0); /*0x4a6f19*/
  v23 = Math::ArcTan2(0.0174532925199433 * 67.0); /*0x4a6f1e*/
  dword_8A01B8 = Math::RoundToInt(v23 * 240.0); /*0x4a6f3a*/
  dword_8A01BC = v22; /*0x4a6f3f*/
  v24 = Math::SinCos(0.0174532925199433 * 90.0); /*0x4a6f48*/
  v25 = Math::RoundToInt(v24 * 240.0); /*0x4a6f64*/
  v26 = Math::ArcTan2(0.0174532925199433 * 90.0); /*0x4a6f69*/
  dword_8A01C0 = Math::RoundToInt(v26 * 240.0); /*0x4a6f85*/
  dword_8A01C4 = v25; /*0x4a6f8a*/
  v27 = Math::SinCos(0.0174532925199433 * 112.0); /*0x4a6f93*/
  v28 = Math::RoundToInt(v27 * 240.0); /*0x4a6faf*/
  v29 = Math::ArcTan2(0.0174532925199433 * 112.0); /*0x4a6fb4*/
  dword_8A01C8 = Math::RoundToInt(v29 * 240.0); /*0x4a6fd0*/
  dword_8A01CC = v28; /*0x4a6fd5*/
  v30 = Math::SinCos(0.0174532925199433 * 135.0); /*0x4a6fde*/
  v31 = Math::RoundToInt(v30 * 240.0); /*0x4a6ffa*/
  v32 = Math::ArcTan2(0.0174532925199433 * 135.0); /*0x4a6fff*/
  dword_8A01D0 = Math::RoundToInt(v32 * 240.0); /*0x4a701b*/
  dword_8A01D4 = v31; /*0x4a7020*/
  v33 = Math::SinCos(0.0174532925199433 * 157.0); /*0x4a7029*/
  v34 = Math::RoundToInt(v33 * 240.0); /*0x4a7045*/
  v35 = Math::ArcTan2(0.0174532925199433 * 157.0); /*0x4a704a*/
  dword_8A01D8 = Math::RoundToInt(v35 * 240.0); /*0x4a7066*/
  dword_8A01DC = v34; /*0x4a706b*/
  v36 = Math::SinCos(0.0174532925199433 * 180.0); /*0x4a7074*/
  v37 = Math::RoundToInt(v36 * 240.0); /*0x4a7090*/
  v38 = Math::ArcTan2(0.0174532925199433 * 180.0); /*0x4a7095*/
  dword_8A01E0 = Math::RoundToInt(v38 * 240.0); /*0x4a70b1*/
  dword_8A01E4 = v37; /*0x4a70b6*/
  v39 = Math::SinCos(0.0174532925199433 * 202.0); /*0x4a70bf*/
  v40 = Math::RoundToInt(v39 * 240.0); /*0x4a70db*/
  v41 = Math::ArcTan2(0.0174532925199433 * 202.0); /*0x4a70e0*/
  dword_8A01E8 = Math::RoundToInt(v41 * 240.0); /*0x4a70fc*/
  dword_8A01EC = v40; /*0x4a7101*/
  v42 = Math::SinCos(0.0174532925199433 * 235.0); /*0x4a710a*/
  v43 = Math::RoundToInt(v42 * 240.0); /*0x4a7126*/
  v44 = Math::ArcTan2(0.0174532925199433 * 235.0); /*0x4a712b*/
  dword_8A01F0 = Math::RoundToInt(v44 * 240.0); /*0x4a7147*/
  dword_8A01F4 = v43; /*0x4a714c*/
  v45 = Math::SinCos(0.0174532925199433 * 257.0); /*0x4a7155*/
  v46 = Math::RoundToInt(v45 * 240.0); /*0x4a7171*/
  v47 = Math::ArcTan2(0.0174532925199433 * 257.0); /*0x4a7176*/
  result = Math::RoundToInt(v47 * 240.0); /*0x4a7184*/
  dword_8A01FC = v46; /*0x4a7189*/
  dword_8A01F8 = result; /*0x4a718f*/
  return result; /*0x4a7194*/
}



// ==== 0x004A71A0  DiskLaserClass::Fire  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::Fire(DiskLaserClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st7
  int result; // eax
  unsigned int *v8; // ebp
  int *v9; // eax
  _BYTE v10[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+30h] [ebp-Ch] BYREF
  unsigned int v12; // [esp+40h] [ebp+4h]

  if ( a2 ) /*0x4a71ad*/
  {
    if ( a3 ) /*0x4a7201*/
    {
      if ( a4 ) /*0x4a7229*/
      {
        this->DiskLaserClass_field_0x24 = a2; /*0x4a729e*/
        *((_DWORD *)this + 15) = a5; /*0x4a72a1*/
        this->DiskLaserClass_field_0x28 = a3; /*0x4a72a4*/
        *((_DWORD *)this + 11) = a4; /*0x4a72a7*/
        v8 = (unsigned int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 72))(a3, v10); /*0x4a72b9*/
        v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v11); /*0x4a72c0*/
        v12 = *v8; /*0x4a72c8*/
        Math::CalcAngle((double)v9[1] - (double)(int)v8[1], (double)(int)*v8 - (double)*v9); /*0x4a72eb*/
        LOWORD(result) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x4a72ff*/
        LOWORD(v12) = result; /*0x4a7304*/
        *((_DWORD *)this + 13) = (int)(((((v12 >> 11) + 1) >> 1) & 0xF) + 8) % 16; /*0x4a7326*/
        this->ptr_10 = 0; /*0x4a7329*/
        *((_DWORD *)this + 14) = 0; /*0x4a7330*/
        return result; /*0x4a7330*/
      }
      this->ptr_10 = -1; /*0x4a722b*/
      result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x4a7232*/
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] ) /*0x4a723d*/
      {
LABEL_18:
        result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x4a727a*/
        *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x4a7290*/
        return result; /*0x4a7297*/
      }
      if ( !g_BuildingLoadQueue_Array.__pad_E5C[9] ) /*0x4a7247*/
        goto LABEL_14; /*0x4a7247*/
    }
    else
    {
      this->ptr_10 = -1; /*0x4a7203*/
      result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x4a720a*/
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] ) /*0x4a7215*/
        goto LABEL_18; /*0x4a7215*/
      if ( !g_BuildingLoadQueue_Array.__pad_E5C[9] ) /*0x4a721f*/
      {
LABEL_14:
        if ( result ) /*0x4a724b*/
          return result; /*0x4a724b*/
      }
    }
    if ( g_BuildingLoadQueue_Array.UnitExitSound <= 0 ) /*0x4a7259*/
      return result; /*0x4a7259*/
    result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))( /*0x4a726f*/
               &g_BuildingLoadQueue_Array.ToTile,
               result + g_BuildingLoadQueue_Array.UnitExitSound,
               0);
LABEL_17:
    if ( !(_BYTE)result ) /*0x4a7274*/
      return result; /*0x4a7274*/
    goto LABEL_18; /*0x4a7274*/
  }
  this->ptr_10 = -1; /*0x4a71af*/
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x4a71b6*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] ) /*0x4a71c1*/
    goto LABEL_18; /*0x4a71c1*/
  if ( (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]) /*0x4a71e1*/
    && g_BuildingLoadQueue_Array.UnitExitSound > 0 )
  {
    result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))( /*0x4a71f6*/
               &g_BuildingLoadQueue_Array.ToTile,
               *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
               0);
    goto LABEL_17; /*0x4a71f9*/
  }
  return result; /*0x4a7280*/
}



// ==== 0x004A7340  DiskLaserClass::Update  this=DiskLaserClass  sig=csp ====
char __thiscall DiskLaserClass::Update(DiskLaserClass *this)
{
  int v2; // eax
  int v3; // eax
  int *v4; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // edi
  _DWORD *v8; // eax
  int *v9; // eax
  int v10; // edi
  int DiskLaserClass_field_0x28; // ebx
  int FoundationHeight; // ebp
  _BYTE *DiskLaserClass_field_0x24; // ecx
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ebp
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // edi
  int v23; // edx
  bool v24; // zf
  __int16 *v25; // edx
  int v26; // ecx
  int v27; // eax
  _BYTE *v28; // ecx
  int *v29; // eax
  int v30; // ecx
  char *v31; // eax
  DiskLaserClass *v32; // ecx
  DiskLaserClass *v33; // edx
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // edi
  int v39; // edi
  int v40; // ecx
  DiskLaserClass **v41; // ecx
  char v42; // dl
  int v43; // eax
  int v44; // ebx
  int v45; // edi
  int v46; // ebx
  int v47; // edi
  char *v48; // eax
  DiskLaserClass **v49; // ecx
  int v50; // eax
  DiskLaserClass ***v52; // [esp-Ch] [ebp-70h]
  DiskLaserClass ***v53; // [esp-Ch] [ebp-70h]
  int v54; // [esp-Ch] [ebp-70h]
  DiskLaserClass **v55; // [esp-8h] [ebp-6Ch] BYREF
  DiskLaserClass *v56; // [esp-4h] [ebp-68h] BYREF
  DiskLaserClass *v57; // [esp+0h] [ebp-64h]
  int v58; // [esp+4h] [ebp-60h]
  int v59; // [esp+8h] [ebp-5Ch]
  int v60; // [esp+Ch] [ebp-58h]
  int v61; // [esp+10h] [ebp-54h]
  _BYTE *v62; // [esp+24h] [ebp-40h]
  __int16 v63; // [esp+28h] [ebp-3Ch] BYREF
  char v64; // [esp+2Ah] [ebp-3Ah]
  __int16 *v65; // [esp+2Ch] [ebp-38h]
  int v66; // [esp+30h] [ebp-34h]
  DiskLaserClass *v67; // [esp+34h] [ebp-30h] BYREF
  char *v68; // [esp+38h] [ebp-2Ch]
  int v69; // [esp+3Ch] [ebp-28h]
  int v70; // [esp+40h] [ebp-24h] BYREF
  int v71; // [esp+44h] [ebp-20h]
  int v72; // [esp+48h] [ebp-1Ch]
  int v73; // [esp+4Ch] [ebp-18h] BYREF
  int v74; // [esp+50h] [ebp-14h]
  int v75; // [esp+54h] [ebp-10h]
  int v76[3]; // [esp+58h] [ebp-Ch] BYREF

  v2 = this->ptr_10; /*0x4a7349*/
  if ( v2 < 0 ) /*0x4a734e*/
    goto LABEL_2; /*0x4a734e*/
  if ( v2 > 0 ) /*0x4a7372*/
  {
    v3 = v2 - 1; /*0x4a7374*/
    this->ptr_10 = v3; /*0x4a7375*/
    return v3; /*0x4a737f*/
  }
  v4 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->DiskLaserClass_field_0x24 + 72))( /*0x4a738a*/
                this->DiskLaserClass_field_0x24,
                v76);
  v5 = *v4; /*0x4a738d*/
  v6 = v4[1]; /*0x4a7392*/
  v7 = v4[2]; /*0x4a7397*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this->DiskLaserClass_field_0x24 + 84))(this->DiskLaserClass_field_0x24) ) /*0x4a739a*/
    v7 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)this->DiskLaserClass_field_0x28 + 72))( /*0x4a73ae*/
                       this->DiskLaserClass_field_0x28,
                       v76)
                   + 8);
  v8 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->DiskLaserClass_field_0x28 + 72))( /*0x4a73bb*/
                   this->DiskLaserClass_field_0x28,
                   v76);
  v9 = Coord::Subtract((Coord *)&v70, v5 - *v8, v6 - v8[1], v7 - v8[2]); /*0x4a73d3*/
  v73 = *v9; /*0x4a73da*/
  v74 = v9[1]; /*0x4a73e5*/
  v75 = v9[2]; /*0x4a73ec*/
  v10 = Coord::Length((Coord *)&v73); /*0x4a73f8*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->DiskLaserClass_field_0x28 + 44))(this->DiskLaserClass_field_0x28) == 6 ) /*0x4a7402*/
  {
    DiskLaserClass_field_0x28 = this->DiskLaserClass_field_0x28; /*0x4a7404*/
    if ( DiskLaserClass_field_0x28 ) /*0x4a7409*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(DiskLaserClass_field_0x28 + 1312), 0); /*0x4a741e*/
      v10 += -64 /*0x4a742c*/
           * (BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(DiskLaserClass_field_0x28 + 1312))
            + FoundationHeight);
      if ( v10 < 0 ) /*0x4a742e*/
        v10 = 0; /*0x4a7430*/
    }
  }
  if ( v10 > *(_DWORD *)(*((_DWORD *)this + 11) + 180) ) /*0x4a743b*/
  {
    this->ptr_10 = -1; /*0x4a7441*/
    v67 = this; /*0x4a744e*/
    LOBYTE(v3) = VectorClass::AppendCopy((VectorClass *)&g_BuildingLoadQueue_Array.ToTile, &v67); /*0x4a7452*/
    return v3; /*0x4a745e*/
  }
  DiskLaserClass_field_0x24 = (_BYTE *)this->DiskLaserClass_field_0x24; /*0x4a745f*/
  if ( DiskLaserClass_field_0x24[1061] ) /*0x4a7462*/
  {
LABEL_2:
    v61 = (int)&v67; /*0x4a7359*/
    this->ptr_10 = -1; /*0x4a735a*/
    v67 = this; /*0x4a7361*/
    LOBYTE(v3) = VectorClass::AppendCopy((VectorClass *)&g_BuildingLoadQueue_Array.ToTile, (_DWORD *)v61); /*0x4a7365*/
  }
  else
  {
    v14 = (int *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)DiskLaserClass_field_0x24 /*0x4a74aa*/
                                                                                       + 176))(
                   DiskLaserClass_field_0x24,
                   v76,
                   0,
                   0,
                   0,
                   0);
    v73 = *v14; /*0x4a74b2*/
    v15 = *((_DWORD *)this + 14); /*0x4a74b6*/
    v74 = v14[1]; /*0x4a74bc*/
    v16 = *((_DWORD *)this + 13); /*0x4a74c0*/
    v17 = v14[2]; /*0x4a74c3*/
    v18 = v16 + v15; /*0x4a74c6*/
    v19 = (v16 + v15) % 16; /*0x4a74d6*/
    v20 = v16 - v15; /*0x4a74d7*/
    v21 = (v20 + 16) % 16; /*0x4a74e8*/
    v22 = (v18 + 1) % 16; /*0x4a74f6*/
    v69 = (v20 + 15) % 16; /*0x4a7507*/
    v23 = *((_DWORD *)this + 11); /*0x4a750b*/
    v63 = 0; /*0x4a750e*/
    v24 = *(_BYTE *)(v23 + 333) == 0; /*0x4a7518*/
    v64 = 0; /*0x4a751f*/
    if ( v24 ) /*0x4a7524*/
    {
      v62 = (_BYTE *)(v23 + 288); /*0x4a7567*/
      v25 = (__int16 *)(*((_DWORD *)this + 11) + 291); /*0x4a756e*/
    }
    else
    {
      v62 = (_BYTE *)(*(_DWORD *)(this->DiskLaserClass_field_0x24 + 540) + 22268); /*0x4a7535*/
      LOBYTE(v63) = *v62 >> 1; /*0x4a753d*/
      HIBYTE(v63) = v62[1] >> 1; /*0x4a754a*/
      v64 = v62[2] >> 1; /*0x4a7557*/
      v25 = &v63; /*0x4a755b*/
    }
    v65 = v25; /*0x4a7574*/
    v66 = *((_DWORD *)this + 11) + 294; /*0x4a7583*/
    if ( v19 == v21 && v15 ) /*0x4a758f*/
    {
      v26 = dword_8A0180[2 * v19]; /*0x4a7595*/
      v27 = v74 + dword_8A0184[2 * v19]; /*0x4a75ad*/
      v70 = v73 + v26; /*0x4a75af*/
      v28 = (_BYTE *)this->DiskLaserClass_field_0x28; /*0x4a75b3*/
      v71 = v27; /*0x4a75b8*/
      v72 = v17; /*0x4a75bc*/
      if ( v28 && (v28[20] & 2) != 0 ) /*0x4a75c6*/
        v29 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v28 + 164))(v28, v76); /*0x4a75cf*/
      else
        v29 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v28 + 88))(v28, v76); /*0x4a75de*/
      v30 = *v29; /*0x4a75e1*/
      v61 = 92; /*0x4a75e3*/
      v73 = v30; /*0x4a75e5*/
      v74 = v29[1]; /*0x4a75ec*/
      v75 = v29[2]; /*0x4a75f3*/
      v31 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x4a75f7*/
      if ( v31 ) /*0x4a7601*/
      {
        v32 = (DiskLaserClass *)*((_DWORD *)this + 11); /*0x4a7607*/
        v61 = 0; /*0x4a760a*/
        v60 = 1065353216; /*0x4a760c*/
        v59 = 1; /*0x4a7611*/
        v33 = (DiskLaserClass *)SBYTE2(v32[7].DiskLaserClass_field_0x18); /*0x4a7613*/
        v58 = 0; /*0x4a761a*/
        v57 = v33; /*0x4a761c*/
        v56 = v32; /*0x4a7621*/
        LOBYTE(v33) = *(_BYTE *)(v66 + 2); /*0x4a7627*/
        LOWORD(v56) = *(_WORD *)v66; /*0x4a762a*/
        v55 = &v56; /*0x4a762d*/
        BYTE2(v56) = (_BYTE)v33; /*0x4a762e*/
        LOBYTE(v33) = *((_BYTE *)v65 + 2); /*0x4a763a*/
        LOWORD(v55) = *v65; /*0x4a763d*/
        v52 = &v55; /*0x4a7640*/
        BYTE2(v55) = (_BYTE)v33; /*0x4a7641*/
        LOWORD(v52) = *(_WORD *)v62; /*0x4a7652*/
        BYTE2(v52) = v62[2]; /*0x4a765a*/
        TimerClass::Construct( /*0x4a7691*/
          v31,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75,
          0,
          1,
          (int)v52,
          (int)v55,
          (int)v56,
          (int)v57,
          0,
          1,
          1065353216,
          0);
      }
      PlaySoundEffectAt( /*0x4a76af*/
        &v73,
        *((_DWORD *)this + 15),
        (_DWORD *)this->DiskLaserClass_field_0x24,
        *(_DWORD *)(*((_DWORD *)this + 11) + 172),
        1,
        0);
      v34 = *((_DWORD *)this + 11); /*0x4a76b4*/
      v3 = *(_DWORD *)(v34 + 204); /*0x4a76b7*/
      if ( v3 > 0 ) /*0x4a76bf*/
        LOBYTE(v3) = (unsigned __int8)StartAudioControllerAt( /*0x4a76e8*/
                                        *(_DWORD *)(*(_DWORD *)(v34 + 192)
                                                  + 4
                                                  * ((unsigned int)*(unsigned __int16 *)(this->DiskLaserClass_field_0x24
                                                                                       + 968)
                                                   % *(_DWORD *)(v34 + 204))),
                                        &v70,
                                        0);
      this->ptr_10 = -1; /*0x4a76ed*/
    }
    else
    {
      v72 = v17; /*0x4a7701*/
      v67 = (DiskLaserClass *)(8 - v15); /*0x4a7707*/
      v35 = dword_8A0180[2 * v19] + v73; /*0x4a770f*/
      v36 = dword_8A0184[2 * v19]; /*0x4a7716*/
      v70 = v35; /*0x4a772b*/
      v71 = v74 + v36; /*0x4a7733*/
      v37 = dword_8A0180[2 * v22]; /*0x4a7737*/
      v38 = dword_8A0184[2 * v22]; /*0x4a773e*/
      v76[0] = v73 + v37; /*0x4a774b*/
      v39 = v74 + v38; /*0x4a774f*/
      if ( !v15 ) /*0x4a7753*/
      {
        v40 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 652); /*0x4a775a*/
        if ( v40 != -1 ) /*0x4a7763*/
          StartAudioControllerAt(v40, &v70, 0); /*0x4a776b*/
      }
      v68 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x4a777a*/
      if ( v68 ) /*0x4a7780*/
      {
        HIWORD(v41) = HIWORD(v67); /*0x4a7786*/
        v61 = 1056964608; /*0x4a778e*/
        v60 = 1065353216; /*0x4a7793*/
        v59 = 1; /*0x4a7798*/
        v58 = 0; /*0x4a779a*/
        v57 = v67; /*0x4a779c*/
        v56 = v67; /*0x4a779d*/
        LOWORD(v41) = *(_WORD *)v66; /*0x4a779e*/
        v55 = v41; /*0x4a77a3*/
        v42 = *(_BYTE *)(v66 + 2); /*0x4a77a4*/
        LOWORD(v56) = (_WORD)v41; /*0x4a77a7*/
        BYTE2(v56) = v42; /*0x4a77ac*/
        LOWORD(v55) = *v65; /*0x4a77b6*/
        v53 = &v55; /*0x4a77bc*/
        BYTE2(v55) = *((_BYTE *)v65 + 2); /*0x4a77bd*/
        LOWORD(v53) = *(_WORD *)v62; /*0x4a77cd*/
        BYTE2(v53) = v62[2]; /*0x4a77da*/
        TimerClass::Construct( /*0x4a7804*/
          v68,
          v70,
          v71,
          v72,
          v76[0],
          v39,
          v17,
          0,
          1,
          (int)v53,
          (int)v55,
          (int)v56,
          (int)v67,
          0,
          1,
          1065353216,
          1056964608);
      }
      v43 = dword_8A0180[2 * v21]; /*0x4a7809*/
      v44 = v74 + dword_8A0184[2 * v21]; /*0x4a7821*/
      v70 = v73 + v43; /*0x4a7823*/
      v71 = v44; /*0x4a782b*/
      v61 = 92; /*0x4a782f*/
      v45 = dword_8A0184[2 * v69]; /*0x4a7838*/
      v46 = v73 + dword_8A0180[2 * v69]; /*0x4a783f*/
      v72 = v17; /*0x4a7845*/
      v47 = v74 + v45; /*0x4a7849*/
      v48 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x4a784b*/
      if ( v48 ) /*0x4a7855*/
      {
        v61 = 1056964608; /*0x4a785f*/
        v60 = 1065353216; /*0x4a7864*/
        v59 = 1; /*0x4a7869*/
        v58 = 0; /*0x4a786b*/
        v57 = v67; /*0x4a786d*/
        v56 = v67; /*0x4a786e*/
        LOWORD(v56) = *(_WORD *)v66; /*0x4a7878*/
        v49 = (DiskLaserClass **)v66; /*0x4a787b*/
        BYTE2(v56) = *(_BYTE *)(v66 + 2); /*0x4a7882*/
        LOBYTE(v49) = BYTE2(v56); /*0x4a787f*/
        v55 = v49; /*0x4a7885*/
        LOWORD(v55) = *v65; /*0x4a788f*/
        BYTE2(v55) = *((_BYTE *)v65 + 2); /*0x4a7899*/
        HIBYTE(v54) = HIBYTE(v65); /*0x4a789c*/
        LOWORD(v54) = *(_WORD *)v62; /*0x4a78ad*/
        BYTE2(v54) = v62[2]; /*0x4a78b7*/
        TimerClass::Construct( /*0x4a78df*/
          v48,
          v70,
          v71,
          v72,
          v46,
          v47,
          v17,
          0,
          1,
          v54,
          (int)v55,
          (int)v56,
          (int)v67,
          0,
          1,
          1065353216,
          1056964608);
      }
      v50 = *((_DWORD *)this + 14); /*0x4a78e4*/
      this->ptr_10 = 1; /*0x4a78e7*/
      v3 = v50 + 1; /*0x4a78ee*/
      *((_DWORD *)this + 14) = v3; /*0x4a78f0*/
    }
  }
  return v3; /*0x4a736a*/
}



// ==== 0x004A7900  DiskLaserClass::PointerGotInvalid  this=DiskLaserClass  sig=csp ====
void __thiscall DiskLaserClass::PointerGotInvalid(DiskLaserClass *this, int a2)
{
  int v3; // eax
  int v4; // eax

  if ( a2 == this->DiskLaserClass_field_0x24 ) /*0x4a790b*/
  {
    this->ptr_10 = -1; /*0x4a790d*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x4a7948*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
           &g_BuildingLoadQueue_Array.ToTile,
           *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
           0) )
    {
      v3 = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x4a7955*/
      *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v3) = this; /*0x4a7964*/
    }
  }
  if ( a2 == this->DiskLaserClass_field_0x28 ) /*0x4a796a*/
  {
    this->ptr_10 = -1; /*0x4a796c*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x4a79a8*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
           &g_BuildingLoadQueue_Array.ToTile,
           *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
           0) )
    {
      v4 = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x4a79b5*/
      *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v4) = this; /*0x4a79c4*/
    }
  }
}



// ==== 0x004A7A30  DiskLaserClass::DiskLaserClass  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::DiskLaserClass(DiskLaserClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4a7a33*/
  *(_DWORD *)this->__pad_0 = &DiskLaserClass::`vftable'; /*0x4a7a3a*/
  this->DiskLaserClass_field_0x04 = (int)&DiskLaserClass::`vftable'; /*0x4a7a40*/
  this->DiskLaserClass_field_0x08 = (int)&DiskLaserClass::`vftable'; /*0x4a7a47*/
  this->DiskLaserClass_field_0x0C = (int)&DiskLaserClass::`vftable'; /*0x4a7a4e*/
  this->DiskLaserClass_field_0x24 = 0; /*0x4a7a55*/
  this->DiskLaserClass_field_0x28 = 0; /*0x4a7a58*/
  *((_DWORD *)this + 11) = 0; /*0x4a7a5b*/
  this->ptr_10 = 0; /*0x4a7a5e*/
  *((_DWORD *)this + 13) = 0; /*0x4a7a61*/
  *((_DWORD *)this + 14) = 0; /*0x4a7a64*/
  *((_DWORD *)this + 15) = 0; /*0x4a7a67*/
  if ( dword_8A0218 < dword_8A0210 /*0x4a7a9e*/
    || (byte_8A0215 || !dword_8A0210)
    && dword_8A021C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8A0208 + 8))(
         &dword_8A0208,
         dword_8A0210 + dword_8A021C,
         0) )
  {
    v2 = dword_8A0218++; /*0x4a7aab*/
    *((_DWORD *)dword_8A020C + v2) = this; /*0x4a7aba*/
  }
  return (int)this->__pad_0; /*0x4a7abf*/
}



// ==== 0x004A7B80  DiskLaserClass::Stat  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::Stat(DiskLaserClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x4a7b8a*/
}



// ==== 0x004A7B90  DiskLaserClass::Write  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::Write(DiskLaserClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x4a7ba1*/
  if ( Prefix_0 >= 0 ) /*0x4a7ba5*/
  {
    if ( this ) /*0x4a7ba9*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x4a7bb2*/
      *(_DWORD *)this->__pad_0 = &DiskLaserClass::`vftable'; /*0x4a7bb7*/
      this->DiskLaserClass_field_0x04 = (int)&DiskLaserClass::`vftable'; /*0x4a7bbd*/
      this->DiskLaserClass_field_0x08 = (int)&DiskLaserClass::`vftable'; /*0x4a7bc4*/
      this->DiskLaserClass_field_0x0C = (int)&DiskLaserClass::`vftable'; /*0x4a7bcb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DiskLaserClass_field_0x24); /*0x4a7bdb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DiskLaserClass_field_0x28); /*0x4a7be9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 11); /*0x4a7bf7*/
  }
  return Prefix_0; /*0x4a7bfe*/
}



// ==== 0x004A7C10  DiskLaserClass::Seek  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::Seek(DiskLaserClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x4a7c24*/
}



// ==== 0x004A7C30  DiskLaserClass::ddtor  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::ddtor(DiskLaserClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4a7c36*/
    return -2147467261; /*0x4a7c38*/
  *a2 = 1378929064; /*0x4a7c46*/
  a2[1] = 1206682730; /*0x4a7c4e*/
  a2[2] = -1786862915; /*0x4a7c57*/
  a2[3] = unk_7E989C; /*0x4a7c60*/
  return 0; /*0x4a7c3d*/
}



// ==== 0x004A7C70  DiskLaserClass::StubReturn64  this=DiskLaserClass  sig=csp ====
int DiskLaserClass::StubReturn64(DiskLaserClass *this)
{
  return 64; /*0x4a7c75*/
}



// ==== 0x004A7C80  DiskLaserClass::StubReturn73  this=DiskLaserClass  sig=csp ====
int DiskLaserClass::StubReturn73(DiskLaserClass *this)
{
  return 73; /*0x4a7c85*/
}



// ==== 0x004A7C90  DiskLaserClass::CopyTo  this=DiskLaserClass  sig=csp ====
_DWORD *__thiscall DiskLaserClass::CopyTo(DiskLaserClass *this, char a2)
{
  int v3; // eax
  DiskLaserClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &DiskLaserClass::`vftable'; /*0x4a7c9d*/
  this->DiskLaserClass_field_0x04 = (int)&DiskLaserClass::`vftable'; /*0x4a7ca3*/
  this->DiskLaserClass_field_0x08 = (int)&DiskLaserClass::`vftable'; /*0x4a7caa*/
  this->DiskLaserClass_field_0x0C = (int)&DiskLaserClass::`vftable'; /*0x4a7cb1*/
  v5 = this; /*0x4a7cbf*/
  v3 = (*(int (__thiscall **)(int *, DiskLaserClass **))(dword_8A0208 + 16))(&dword_8A0208, &v5); /*0x4a7cc3*/
  if ( v3 != -1 && v3 < dword_8A0218 && v3 < --dword_8A0218 ) /*0x4a7cde*/
  {
    do /*0x4a7cf6*/
    {
      ++v3; /*0x4a7ce6*/
      *((_DWORD *)dword_8A020C + v3 - 1) = *((_DWORD *)dword_8A020C + v3); /*0x4a7cea*/
    }
    while ( v3 < dword_8A0218 ); /*0x4a7cf6*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x4a7cfa*/
  if ( (a2 & 1) != 0 ) /*0x4a7d04*/
    __3_YAXPAX_Z(this); /*0x4a7d07*/
  return this->__pad_0; /*0x4a7d11*/
}



// ==== 0x004A7D20  _DynamicVectorClass_PAVDiskLaserClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall Dial8Class_48::ClearBuffer(_DynamicVectorClass_PAVDiskLaserClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4a7d26*/
  this->m_10 = 0; /*0x4a7d29*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4a7d30*/
  {
    __3_YAXPAX_Z(v2); /*0x4a7d36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a7d3e*/
  }
  BYTE1(this->m_C) = 0; /*0x4a7d41*/
  this->m_8 = 0; /*0x4a7d44*/
}



// ==== 0x004A7D50  _DynamicVectorClass_PAVDiskLaserClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall Dial8Class_48::PointerToIndex(_DynamicVectorClass_PAVDiskLaserClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a7d50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a7d65*/
  else
    return 0; /*0x4a7d57*/
}



// ==== 0x004A7D70  _VectorClass_PAVDiskLaserClass::Seek  this=VectorClass  sig=csp ====
int __thiscall Dial8Class_48::Seek(_VectorClass_PAVDiskLaserClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4a7d7a*/
}



// ==== 0x004A7D80  _VectorClass_PAVDiskLaserClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall Dial8Class_48::AddRef(_VectorClass_PAVDiskLaserClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4a7d82*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4a7d8d*/
  {
    v3 = 0; /*0x4a7d8f*/
    if ( m_8 <= 0 ) /*0x4a7d93*/
      return 1; /*0x4a7db3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4a7d95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a7d9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a7da4*/
    {
      ++v3; /*0x4a7da6*/
      ++v4; /*0x4a7da7*/
      if ( v3 >= m_8 ) /*0x4a7dac*/
        return 1; /*0x4a7dac*/
    }
  }
  return 0; /*0x4a7dae*/
}



// ==== 0x004A7DC0  _VectorClass_PAVDiskLaserClass::Release  this=VectorClass  sig=csp ====
char __thiscall Dial8Class_48::Release(_VectorClass_PAVDiskLaserClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a7dcc*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a7dd6*/
    if ( a3 ) /*0x4a7ddc*/
      v4 = a3; /*0x4a7df2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a7dee*/
    LOBYTE(this->m_C) = 1; /*0x4a7df6*/
    if ( v4 ) /*0x4a7dfa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4a7e05*/
      {
        m_8 = this->m_8; /*0x4a7e0c*/
        if ( a2 < m_8 ) /*0x4a7e11*/
          m_8 = a2; /*0x4a7e13*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a7e19*/
          ++i; /*0x4a7e1e*/
        if ( BYTE1(this->m_C) ) /*0x4a7e2b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a7e36*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4a7e3e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4a7e47*/
      this->m_8 = a2; /*0x4a7e4f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a7e52*/
      return 1; /*0x4a7e58*/
    }
    else
    {
      return 0; /*0x4a7dff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVDiskLaserClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a7e62*/
    return 1; /*0x4a7e68*/
  }
}



// ==== 0x004A7E70  _VectorClass_PAVDiskLaserClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall Dial8Class_48::ddtor(_VectorClass_PAVDiskLaserClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4a7e7d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a7e83*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a7e8b*/
  }
  BYTE1(this->m_C) = 0; /*0x4a7e8e*/
  this->m_8 = 0; /*0x4a7e91*/
}



// ==== 0x004A7EA0  _VectorClass_PAVDiskLaserClass::Read  this=VectorClass  sig=csp ====
int __thiscall Dial8Class_48::Read(_VectorClass_PAVDiskLaserClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a7ea0*/
    return 0; /*0x4a7ea8*/
  m_8 = this->m_8; /*0x4a7eae*/
  result = 0; /*0x4a7eb1*/
  if ( m_8 <= 0 ) /*0x4a7eb5*/
    return -1; /*0x4a7ecc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a7ebb*/
  {
    if ( ++result >= m_8 ) /*0x4a7eca*/
      return -1; /*0x4a7eca*/
  }
  return result; /*0x4a7eaa*/
}



// ==== 0x004A7EE0  _VectorClass_PAVDiskLaserClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Dial8Class_48::Write(_VectorClass_PAVDiskLaserClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4a7ee0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4a7ef5*/
  else
    return 0; /*0x4a7ee7*/
}



// ==== 0x004A7F00  _DynamicVectorClass_PAVDiskLaserClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall Dial8Class_48::SetCapacity(_DynamicVectorClass_PAVDiskLaserClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a7f0c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a7f12*/
    if ( a3 ) /*0x4a7f18*/
      v4 = a3; /*0x4a7f2e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4a7f2a*/
    LOBYTE(this->m_C) = 1; /*0x4a7f32*/
    if ( !v4 ) /*0x4a7f36*/
      return 0; /*0x4a7faa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4a7f38*/
    {
      m_8 = this->m_8; /*0x4a7f3f*/
      if ( a2 < m_8 ) /*0x4a7f44*/
        m_8 = a2; /*0x4a7f46*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4a7f4c*/
        ++i; /*0x4a7f51*/
      if ( BYTE1(this->m_C) ) /*0x4a7f5e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a7f69*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4a7f71*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4a7f7a*/
    this->m_8 = a2; /*0x4a7f82*/
    BYTE1(this->m_C) = a3 == 0; /*0x4a7f85*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVDiskLaserClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4a7f8e*/
  }
  v7 = this->m_8; /*0x4a7f91*/
  if ( v7 < this->m_10 ) /*0x4a7f99*/
    this->m_10 = v7; /*0x4a7f9b*/
  return 1; /*0x4a7f9e*/
}



// ==== 0x004A7FB0  _DynamicVectorClass_PAVDiskLaserClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall Dial8Class_48::FindItem(_DynamicVectorClass_PAVDiskLaserClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4a7fb0*/
  result = 0; /*0x4a7fb3*/
  if ( m_10 <= 0 ) /*0x4a7fb8*/
    return -1; /*0x4a7fcf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a7fbe*/
  {
    if ( ++result >= m_10 ) /*0x4a7fcd*/
      return -1; /*0x4a7fcd*/
  }
  return result; /*0x4a7fd2*/
}



// ==== 0x004A7FE0  VectorClass::AppendCopy  this=VectorClass  sig=csp ====
int __thiscall VectorClass::AppendCopy(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x4a7fe3*/
  result = this->Count; /*0x4a7fe6*/
  if ( result < Capacity /*0x4a800d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->ptr_0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (_BYTE)result) )
  {
    result = this->Count; /*0x4a8015*/
    Items = this->Items; /*0x4a8018*/
    this->Count = result + 1; /*0x4a801e*/
    *(_DWORD *)(Items + 4 * result) = *a2; /*0x4a8028*/
    LOBYTE(result) = 1; /*0x4a802b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x4a800f*/
  }
  return result; /*0x4a8011*/
}



// ==== 0x004A8030  _VectorClass_PAVDiskLaserClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Dial8Class_48::QueryInterface(_VectorClass_PAVDiskLaserClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a8033*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiskLaserClass *>::`vftable'; /*0x4a8036*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a8040*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8048*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a8050*/
  }
  BYTE1(this->m_C) = 0; /*0x4a805b*/
  this->m_8 = 0; /*0x4a8061*/
  if ( (a2 & 1) != 0 ) /*0x4a8068*/
    __3_YAXPAX_Z(this); /*0x4a806b*/
  return this->__pad_0; /*0x4a8075*/
}



// ==== 0x004A8080  _DynamicVectorClass_PAVDiskLaserClass::Constructor_VectorClass_DiskLaserClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall Dial8Class_48::Constructor_VectorClass_DiskLaserClass___(
        _DynamicVectorClass_PAVDiskLaserClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4a8083*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiskLaserClass *>::`vftable'; /*0x4a8086*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4a8090*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8098*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4a80a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4a80ab*/
  this->m_8 = 0; /*0x4a80b1*/
  if ( (a2 & 1) != 0 ) /*0x4a80b8*/
    __3_YAXPAX_Z(this); /*0x4a80bb*/
  return this->__pad_0; /*0x4a80c5*/
}



// ==== 0x004A80D0  AlwaysFindYRCD  this=CD  sig=ida-proto ====
int AlwaysFindYRCD()
{
  return 2; /*0x4a80d5*/
}



// ==== 0x004A80D6  sub_4A80D6  this=-  sig=ida-proto ====
// positive sp value has been detected, the output may be wrong!
int __fastcall sub_4A80D6(int a1, signed int a2)
{
  int v4; // esi
  signed int v5; // ebx
  signed int v6; // eax
  int v7; // ebp
  HANDLE FileA; // eax
  DWORD Ticks; // [esp-110h] [ebp-120h]
  signed int v11; // [esp-108h] [ebp-118h]
  DWORD v12; // [esp-104h] [ebp-114h] BYREF
  DWORD v13[4]; // [esp-100h] [ebp-110h] BYREF
  CHAR v14[128]; // [esp-F0h] [ebp-100h] BYREF
  CHAR v15[128]; // [esp-70h] [ebp-80h] BYREF

  Timer::GetTicks(); /*0x4a80e2*/
  v11 = a2; /*0x4a80fc*/
  v4 = a1 + 65; /*0x4a8100*/
  Ticks = Timer::GetTicks(); /*0x4a8109*/
  wsprintfA(v14, "%c:\\", a1 + 65); /*0x4a8120*/
  if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a814a*/
  {
LABEL_8:
    if ( !_strcmpi(aYr1, v15) ) /*0x4a81cd*/
    {
      v7 = 0; /*0x4a81e4*/
      wsprintfA(v14, "%c:\\YR1.dsk", v4); /*0x4a81e6*/
      FileA = CreateFileA(v14, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x4a8206*/
      if ( FileA != (HANDLE)-1 ) /*0x4a820b*/
      {
LABEL_12:
        CloseHandle(FileA); /*0x4a8241*/
        return 2; /*0x4a8257*/
      }
      while ( ++v7 < 2 ) /*0x4a820d*/
      {
        wsprintfA(v14, "%c:\\YR1.dsk", v4); /*0x4a821e*/
        FileA = CreateFileA(v14, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x4a823a*/
        if ( FileA != (HANDLE)-1 ) /*0x4a823f*/
          goto LABEL_12; /*0x4a823f*/
      }
    }
  }
  else
  {
    while ( 1 ) /*0x4a8154*/
    {
      v5 = v11; /*0x4a8154*/
      if ( Ticks != -1 ) /*0x4a815b*/
      {
        v6 = Timer::GetTicks() - Ticks; /*0x4a8166*/
        if ( v6 >= v11 ) /*0x4a816c*/
          return -1; /*0x4a816c*/
        v5 = v11 - v6; /*0x4a8172*/
      }
      if ( !v5 || GetLastError() != 21 ) /*0x4a8185*/
        break; /*0x4a8185*/
      wsprintfA(v14, "%c:\\", v4); /*0x4a8196*/
      if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a81ba*/
        goto LABEL_8; /*0x4a81be*/
    }
  }
  return -1; /*0x4a8257*/
}



// ==== 0x004A8270  CD::CheckDiscPresence  this=CD  sig=csp ====
char __thiscall CD::CheckDiscPresence(CD *this, int a2)
{
  int v2; // edi
  CD *v3; // ebx
  int v4; // esi
  int YRCD; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  CD *v13; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x4a8277*/
  v3 = this; /*0x4a827b*/
  v13 = 0; /*0x4a8284*/
  if ( a2 == -2 ) /*0x4a828c*/
    return 1; /*0x4a83bc*/
  if ( a2 >= 0 ) /*0x4a8294*/
    v2 = 2; /*0x4a8296*/
  v4 = dword_89E414; /*0x4a829b*/
  YRCD = AlwaysFindYRCD(); /*0x4a82a8*/
  if ( YRCD > -1 && (v2 == YRCD || v2 == -1) ) /*0x4a82b9*/
  {
    v13 = (CD *)v4; /*0x4a82bd*/
    if ( v4 ) /*0x4a82c1*/
    {
LABEL_30:
      if ( v2 > -1 && dword_81FFB0 != v2 ) /*0x4a8393*/
      {
        dword_81FFB0 = v2; /*0x4a8395*/
        return (*(char (__thiscall **)(CD *, int))(*(_DWORD *)v3 + 8))(v3, v2); /*0x4a83aa*/
      }
      return 1; /*0x4a8393*/
    }
  }
  if ( dword_89E418 ) /*0x4a82cf*/
  {
    if ( dword_89E418 != dword_89E414 ) /*0x4a82d7*/
    {
      v6 = AlwaysFindYRCD(); /*0x4a82de*/
      if ( v6 > -1 ) /*0x4a82e6*/
      {
        if ( v2 != v6 ) /*0x4a82ea*/
        {
          if ( v2 != -1 ) /*0x4a82f3*/
            goto LABEL_13; /*0x4a82f3*/
          return 1; /*0x4a82f3*/
        }
        goto LABEL_30; /*0x4a82ea*/
      }
    }
  }
  do /*0x4a8371*/
  {
LABEL_13:
    v7 = dword_A8E950; /*0x4a82fe*/
    v8 = 0; /*0x4a8304*/
    if ( dword_A8E950 > 0 ) /*0x4a8308*/
    {
      while ( 1 ) /*0x4a830c*/
      {
        if ( v7 ) /*0x4a830c*/
        {
          v9 = dword_A8E954; /*0x4a830e*/
          if ( dword_A8E954 == v7 ) /*0x4a8315*/
          {
            v9 = 0; /*0x4a8317*/
            dword_A8E954 = 0; /*0x4a8319*/
          }
          v10 = *((_DWORD *)&dword_A8E8E8.AbstractClass + v9); /*0x4a831e*/
          dword_A8E954 = v9 + 1; /*0x4a8326*/
        }
        else
        {
          v10 = -1; /*0x4a832d*/
        }
        v11 = AlwaysFindYRCD(); /*0x4a8334*/
        if ( v11 > -1 && (v2 == v11 || v2 == -1 || v2 == -2) ) /*0x4a834a*/
          break; /*0x4a834a*/
        v7 = dword_A8E950; /*0x4a834c*/
        if ( ++v8 >= dword_A8E950 ) /*0x4a8355*/
          goto LABEL_26; /*0x4a8355*/
      }
      v13 = (CD *)v10; /*0x4a8359*/
    }
LABEL_26:
    if ( (int)v13 > 0 ) /*0x4a8363*/
    {
      CD::SetCurrentInstance(v13); /*0x4a837a*/
      sub_47AAC0(); /*0x4a837f*/
      v3 = this; /*0x4a8384*/
      goto LABEL_30; /*0x4a8384*/
    }
  }
  while ( (*(unsigned __int8 (__thiscall **)(CD *, int))(*(_DWORD *)this + 4))(this, v2) ); /*0x4a8371*/
  return 0; /*0x4a83a3*/
}



// ==== 0x004A83D0  sub_4A83D0  this=-  sig=csp ====
bool __stdcall sub_4A83D0(int a1)
{
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF

  sprintf(Buffer, "Please insert disk %d", a1); /*0x4a83e5*/
  return MessageBoxA(0, Buffer, aHey, 1u) == 1; /*0x4a8407*/
}



// ==== 0x004A8410  sub_4A8410  this=-  sig=csp ====
char __stdcall sub_4A8410(int a1)
{
  return 1; /*0x4a8412*/
}



// ==== 0x004A8420  sub_4A8420  this=-  sig=ida-proto ====
int sub_4A8420()
{
  dword_8A03E8 = 0; /*0x4a8422*/
  dword_8A03EC = 0; /*0x4a8427*/
  dword_8A03F0 = 0; /*0x4a842c*/
  dword_8A03F4 = 0; /*0x4a8431*/
  return 0; /*0x4a8436*/
}



// ==== 0x004A8440  sub_4A8440  this=-  sig=ida-proto ====
void sub_4A8440()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a844c*/
  dbl_8A0400 = Math::Sqrt(v0 + v0); /*0x4a845e*/
}



// ==== 0x004A8470  sub_4A8470  this=-  sig=ida-proto ====
void sub_4A8470()
{
  dbl_8A0738 = dbl_8A0400 / 60.0; /*0x4a847c*/
}



// ==== 0x004A8490  sub_4A8490  this=-  sig=ida-proto ====
void sub_4A8490()
{
  dbl_8A0628 = 1.0 / dbl_8A0738; /*0x4a849c*/
}



// ==== 0x004A84B0  sub_4A84B0  this=-  sig=ida-proto ====
void sub_4A84B0()
{
  dbl_8A0620 = 0.0174532925199433 * 45.0; /*0x4a84bc*/
}



// ==== 0x004A84D0  sub_4A84D0  this=-  sig=ida-proto ====
void sub_4A84D0()
{
  dbl_8A0408 = 0.0174532925199433 * 60.0; /*0x4a84dc*/
}



// ==== 0x004A84F0  sub_4A84F0  this=-  sig=ida-proto ====
void sub_4A84F0()
{
  dbl_8A03D8 = 0.0174532925199433 * 90.0; /*0x4a84fc*/
}



// ==== 0x004A8510  sub_4A8510  this=-  sig=ida-proto ====
__int64 sub_4A8510()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A03D8 - dbl_8A0408); /*0x4a8522*/
  result = Math::RoundToInt(v0 * dbl_8A0400 * 0.5); /*0x4a8536*/
  dword_8A0740 = result; /*0x4a853b*/
  return result; /*0x4a8540*/
}



// ==== 0x004A8550  sub_4A8550  this=-  sig=ida-proto ====
void sub_4A8550()
{
  dbl_8A0410 = Math::ArcTan((double)dword_8A0740 * 0.00390625); /*0x4a8567*/
}



// ==== 0x004A8580  sub_4A8580  this=-  sig=ida-proto ====
void sub_4A8580()
{
  dbl_8A0610 = Math::ArcTan((double)(2 * dword_8A0740) / dbl_8A0400); /*0x4a85a2*/
}



// ==== 0x004A85B0  sub_4A85B0  this=-  sig=ida-proto ====
__int64 sub_4A85B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0740) + 0.5); /*0x4a85cb*/
  dword_8A0730 = result; /*0x4a85d0*/
  return result; /*0x4a85d6*/
}



// ==== 0x004A85E0  sub_4A85E0  this=-  sig=ida-proto ====
int sub_4A85E0()
{
  dword_8A03F8 = 0; /*0x4a85e2*/
  return 0; /*0x4a85ee*/
}



// ==== 0x004A85F0  sub_4A85F0  this=-  sig=ida-proto ====
int sub_4A85F0()
{
  dword_8A0600 = 0; /*0x4a85f2*/
  dword_8A0604 = 0; /*0x4a85f7*/
  dword_8A0608 = 0; /*0x4a85fc*/
  return 0; /*0x4a8601*/
}



// ==== 0x004A8610  sub_4A8610  this=-  sig=ida-proto ====
int sub_4A8610()
{
  dword_8A0728 = 0; /*0x4a8615*/
  dword_8A0720 = 128; /*0x4a861f*/
  dword_8A0724 = 128; /*0x4a8624*/
  return 128; /*0x4a8629*/
}



// ==== 0x004A8630  sub_4A8630  this=-  sig=ida-proto ====
int sub_4A8630()
{
  _DWORD *v0; // eax
  int v1; // edx

  v0 = &unk_8A0368; /*0x4a8630*/
  v1 = 5; /*0x4a8635*/
  do /*0x4a866b*/
  {
    *(v0 - 1) = 0; /*0x4a863c*/
    *v0 = 0; /*0x4a863f*/
    *((_BYTE *)v0 + 4) = 1; /*0x4a8641*/
    *((_BYTE *)v0 + 5) = 0; /*0x4a8645*/
    *(v0 - 2) = &VectorClass<ObjectClass *>::`vftable'; /*0x4a8648*/
    *(v0 - 2) = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4a864f*/
    v0[3] = 10; /*0x4a8656*/
    v0[2] = 0; /*0x4a865d*/
    *(v0 - 2) = &off_7E6060; /*0x4a8660*/
    v0 += 6; /*0x4a8667*/
    --v1; /*0x4a866a*/
  }
  while ( v1 ); /*0x4a866b*/
  return atexit(sub_4A8680); /*0x4a8678*/
}



// ==== 0x004A8680  sub_4A8680  this=-  sig=ida-proto ====
void __cdecl sub_4A8680()
{
  int v0; // esi
  int v1; // edi
  void *v2; // eax

  if ( (byte_8A03E1 & 1) == 0 ) /*0x4a868a*/
  {
    byte_8A03E1 |= 1u; /*0x4a8691*/
    v0 = 9044956; /*0x4a8697*/
    v1 = 5; /*0x4a869c*/
    do /*0x4a86cb*/
    {
      v2 = *(void **)(v0 - 24); /*0x4a86a3*/
      v0 -= 24; /*0x4a86a6*/
      *(_DWORD *)(v0 - 4) = &VectorClass<ObjectClass *>::`vftable'; /*0x4a86ab*/
      if ( v2 ) /*0x4a86b2*/
      {
        if ( *(_BYTE *)(v0 + 9) ) /*0x4a86b4*/
        {
          __3_YAXPAX_Z(v2); /*0x4a86ba*/
          *(_DWORD *)v0 = 0; /*0x4a86c2*/
        }
      }
      --v1; /*0x4a86c4*/
      *(_BYTE *)(v0 + 9) = 0; /*0x4a86c5*/
      *(_DWORD *)(v0 + 4) = 0; /*0x4a86c8*/
    }
    while ( v1 ); /*0x4a86cb*/
  }
}



// ==== 0x004A86E0  sub_4A86E0  this=-  sig=ida-proto ====
int sub_4A86E0()
{
  GadgetClass::Construct(stru_8A06F8, 0, 0, 0, 0, 127, 1); /*0x4a86f1*/
  stru_8A06F8[0] = (int)&DisplayClass::TacticalClass::`vftable'; /*0x4a86fb*/
  return atexit(sub_4A8710); /*0x4a870b*/
}



// ==== 0x004A8710  sub_4A8710  this=-  sig=ida-proto ====
void __cdecl sub_4A8710()
{
  if ( (byte_8A03E0 & 1) == 0 ) /*0x4a871a*/
  {
    byte_8A03E0 |= 1u; /*0x4a871e*/
    GadgetClass::Dtor(stru_8A06F8); /*0x4a8729*/
  }
}



// ==== 0x004A8730  RadarClass::RenderSpySatellite  this=DisplayClass  sig=csp ====
_DWORD *__thiscall RadarClass::RenderSpySatellite(RadarClass *this)
{
  RadarClass::RenderMapPreview((int)this); /*0x4a8733*/
  *(_DWORD *)&this->__pad_6F8[2684] = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4a873d*/
  *(_WORD *)&this->__pad_6F8[2688] = 0; /*0x4a8745*/
  *(_WORD *)&this->__pad_6F8[2690] = 0; /*0x4a874c*/
  *(_DWORD *)&this->__pad_6F8[2692] = 0; /*0x4a8753*/
  this->__pad_6F8[2696] = 0; /*0x4a8759*/
  this->__pad_6F8[2697] = 0; /*0x4a875f*/
  *(_DWORD *)&this->__pad_6F8[2698] = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4a876b*/
  *(_WORD *)&this->__pad_6F8[2702] = 0; /*0x4a8774*/
  *(_WORD *)&this->__pad_6F8[2704] = 0; /*0x4a877b*/
  *(_DWORD *)&this->__pad_6F8[2708] = 0; /*0x4a8782*/
  *(_DWORD *)&this->__pad_6F8[2712] = 0; /*0x4a8788*/
  *(_DWORD *)&this->__pad_6F8[2716] = 0; /*0x4a878e*/
  *(_DWORD *)&this->__pad_6F8[2720] = -1; /*0x4a8794*/
  this->__pad_6F8[2724] = 0; /*0x4a879a*/
  *(_DWORD *)&this->__pad_6F8[2728] = 0; /*0x4a87a0*/
  *(_DWORD *)&this->__pad_6F8[2732] = 0; /*0x4a87a6*/
  *(_DWORD *)&this->__pad_6F8[2736] = 0; /*0x4a87ac*/
  *(_DWORD *)&this->__pad_6F8[2740] = -1; /*0x4a87b2*/
  this->__pad_6F8[2744] = 0; /*0x4a87b8*/
  this->__pad_6F8[2745] = 0; /*0x4a87be*/
  this->__pad_6F8[2746] = 0; /*0x4a87c4*/
  this->__pad_6F8[2747] = 0; /*0x4a87ca*/
  this->__pad_6F8[2748] = 0; /*0x4a87d0*/
  *(_DWORD *)&this->__pad_6F8[2752] = -1; /*0x4a87d6*/
  *(_DWORD *)&this->__pad_6F8[2756] = 0; /*0x4a87dc*/
  *(_DWORD *)&this->__pad_6F8[2760] = 0; /*0x4a87e2*/
  *(_DWORD *)&this->__pad_6F8[2764] = 0; /*0x4a87e8*/
  *(_DWORD *)&this->__pad_6F8[2768] = 0; /*0x4a87ee*/
  this->__pad_6F8[2772] = 0; /*0x4a87f4*/
  this->__pad_6F8[2773] = 0; /*0x4a87fa*/
  this->__pad_6F8[2774] = 0; /*0x4a8800*/
  this->__pad_6F8[2775] = 0; /*0x4a8806*/
  this->__pad_6F8[2776] = 0; /*0x4a880c*/
  this->__pad_6F8[2777] = 0; /*0x4a8812*/
  *(_DWORD *)&this->__pad_6F8[2780] = 0; /*0x4a8818*/
  *(_DWORD *)&this->__pad_6F8[2784] = 0; /*0x4a881e*/
  *(_DWORD *)&this->__pad_6F8[2788] = 0; /*0x4a8824*/
  *(_DWORD *)&this->__pad_6F8[2792] = 0; /*0x4a882a*/
  this->RadarClass_field_0x0 = &DisplayClass::`vftable'; /*0x4a8830*/
  dword_8A072C = 0; /*0x4a8836*/
  stru_8A0390.health = 0; /*0x4a883b*/
  stru_8A0390.parachute = 0; /*0x4a8840*/
  return &this->RadarClass_field_0x0; /*0x4a8847*/
}



// ==== 0x004A8850  DisplayClass::LoadTypeData  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::LoadTypeData(DisplayClass *this)
{
  int *Viewport; // eax
  int v3; // edx
  int (__thiscall **DisplayClass_field_0x0)(DisplayClass *, _DWORD *); // eax
  _DWORD v6[4]; // [esp+4h] [ebp-20h] BYREF
  int v7[4]; // [esp+14h] [ebp-10h] BYREF

  MapClass::Destru_vt05((MapClass *)this); /*0x4a8856*/
  stru_8A0390.health = SearchMIXFile(aPlaceShp, 0); /*0x4a886e*/
  dword_8A072C = SearchMIXFile(aShadowShp, 0); /*0x4a887c*/
  Viewport = Display::GetViewport(v7); /*0x4a8881*/
  v6[0] = *Viewport; /*0x4a8888*/
  v6[1] = Viewport[1]; /*0x4a888f*/
  v6[2] = Viewport[2]; /*0x4a8896*/
  v3 = Viewport[3]; /*0x4a889e*/
  DisplayClass_field_0x0 = (int (__thiscall **)(DisplayClass *, _DWORD *))this->DisplayClass_field_0x0; /*0x4a88a1*/
  v6[3] = v3; /*0x4a88a6*/
  return DisplayClass_field_0x0[42](this, v6); /*0x4a88b0*/
}



// ==== 0x004A88C0  DisplayClass::SetSize  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::SetSize(DisplayClass *this)
{
  LayerClass *v2; // esi
  int result; // eax

  MapClass::Destru_vt07((MapClass *)this); /*0x4a88c3*/
  *(_DWORD *)&this->__pad_1198[12] = 0; /*0x4a88cd*/
  this->DisplayClass_field_0x11A8 = 0; /*0x4a88d3*/
  *(_DWORD *)this->__pad_11AC = -1; /*0x4a88d9*/
  *(_DWORD *)&this->__pad_41E[3422] = 0; /*0x4a88df*/
  *(_DWORD *)&this->__pad_11B4[4] = -1; /*0x4a88e5*/
  LOBYTE(this->DisplayClass_field_0x11B0) = 0; /*0x4a88eb*/
  this->__pad_11B4[27] = 0; /*0x4a88f1*/
  LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4a88f7*/
  BYTE1(this->DisplayClass_field_0x11B0) = 0; /*0x4a88fd*/
  BYTE2(this->DisplayClass_field_0x11B0) = 0; /*0x4a8903*/
  v2 = &stru_8A0360; /*0x4a8909*/
  do /*0x4a891e*/
  {
    result = (*(int (__thiscall **)(LayerClass *))(v2->items[0] + 12))(v2); /*0x4a8912*/
    v2 += 2; /*0x4a8915*/
  }
  while ( (int)v2 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4a891e*/
  return result; /*0x4a8920*/
}



// ==== 0x004A8930  DisplayClass::ddtor  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::ddtor(DisplayClass *this)
{
  char result; // al
  GScreenClass *v3; // [esp+0h] [ebp-4h]

  VectorCursor_uint_DynamicVectorClass_uint____13::Get(v3); /*0x4a8933*/
  result = byte_A8ED6B; /*0x4a8938*/
  if ( !byte_A8ED6B ) /*0x4a893f*/
  {
    Hash::Reset((LinkClass *)&stru_8A06F8); /*0x4a8946*/
    return (*(char (__thiscall **)(DisplayClass *, GadgetClass *))(this->DisplayClass_field_0x0 + 48))( /*0x4a8954*/
             this,
             &stru_8A06F8);
  }
  return result; /*0x4a8957*/
}



// ==== 0x004A8960  DisplayClass::SetViewDimensions  this=DisplayClass  sig=csp ====
void __stdcall TacticalClass::SetViewDimensions(DisplayClass *this)
{
  Stream *v1; // esi
  BSurface *v2; // eax
  Stream *v3; // eax
  void *v4; // esi
  BSurface *v5; // eax
  int v6; // edx
  void *v7; // eax
  int v8; // esi
  SidebarClass *v9; // [esp+0h] [ebp-28h]
  int v10[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v11; // [esp+24h] [ebp-4h]

  Debug::Log(); /*0x4a897e*/
  DSurface_ViewBounds.field_0 = (int)this->DisplayClass_field_0x0; /*0x4a8987*/
  DSurface_ViewBounds.field_4 = this->DisplayClass_field_0x4; /*0x4a8990*/
  *(_DWORD *)DSurface_ViewBounds.__pad_8 = *(_DWORD *)this->__pad_8; /*0x4a8999*/
  *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] = this->DisplayClass_field_0xC[0]; /*0x4a89a1*/
  if ( g_TacticalClass_Instance ) /*0x4a89b2*/
  {
    TacticalClass::SetViewportPosition((int)g_TacticalClass_Instance, &DSurface_ViewBounds.field_0); /*0x4a89bd*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4a89ca*/
    if ( g_ZBufferDescriptor ) /*0x4a89d3*/
    {
      Debug::Log(); /*0x4a89da*/
      v1 = g_ZBufferDescriptor; /*0x4a89df*/
      if ( g_ZBufferDescriptor ) /*0x4a89ea*/
      {
        Stream::GetField(g_ZBufferDescriptor); /*0x4a89ee*/
        __3_YAXPAX_Z(v1); /*0x4a89f4*/
      }
      g_ZBufferDescriptor = 0; /*0x4a89fc*/
    }
    v2 = (BSurface *)__2_YAPAXI_Z(0x30u); /*0x4a8a04*/
    if ( v2 ) /*0x4a8a0e*/
      v3 = (Stream *)BSurface::ConstructEx( /*0x4a8a3a*/
                       v2,
                       DSurface_ViewBounds.field_0,
                       (int)DSurface_ViewBounds.field_4,
                       *(int *)DSurface_ViewBounds.__pad_8,
                       *(int *)&DSurface_ViewBounds.__pad_8[4]);
    else
      v3 = 0; /*0x4a8a41*/
    g_ZBufferDescriptor = v3; /*0x4a8a43*/
    v3[1].Stream_field_10 = 0x8000; /*0x4a8a48*/
    Debug::Log(); /*0x4a8a61*/
    if ( *(_DWORD *)&stru_87E790.__pad_D8[60] ) /*0x4a8a70*/
    {
      Debug::Log(); /*0x4a8a77*/
      v4 = *(void **)&stru_87E790.__pad_D8[60]; /*0x4a8a7c*/
      if ( *(_DWORD *)&stru_87E790.__pad_D8[60] ) /*0x4a8a87*/
      {
        StreamObj::Release(*(StreamObj **)&stru_87E790.__pad_D8[60]); /*0x4a8a8b*/
        __3_YAXPAX_Z(v4); /*0x4a8a91*/
      }
      *(_DWORD *)&stru_87E790.__pad_D8[60] = 0; /*0x4a8a99*/
    }
    v5 = (BSurface *)__2_YAPAXI_Z(0x30u); /*0x4a8aa1*/
    if ( v5 ) /*0x4a8aab*/
      *(_DWORD *)&stru_87E790.__pad_D8[60] = BSurface::Construct( /*0x4a8adc*/
                                               v5,
                                               DSurface_ViewBounds.field_0,
                                               (int)DSurface_ViewBounds.field_4,
                                               *(int *)DSurface_ViewBounds.__pad_8,
                                               *(int *)&DSurface_ViewBounds.__pad_8[4]);
    else
      *(_DWORD *)&stru_87E790.__pad_D8[60] = 0; /*0x4a8ae3*/
    Debug::Log(); /*0x4a8afb*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4a8b0b*/
  }
  SidebarClass::LoadResources(v9); /*0x4a8b13*/
  v6 = DSurface_ViewBounds.field_0; /*0x4a8b1e*/
  v7 = DSurface_ViewBounds.field_4; /*0x4a8b24*/
  v8 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x4a8b29*/
  stru_8A06F8.Width = DSurface_ViewBounds.field_0; /*0x4a8b37*/
  stru_8A06F8.Height = (int)DSurface_ViewBounds.field_4; /*0x4a8b3d*/
  *(_DWORD *)&stru_8A06F8.Visible = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x4a8b42*/
  stru_8A06F8.ID = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x4a8b48*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x4a8b4e*/
  {
    v11 = 0; /*0x4a8b55*/
    v10[0] = 500; /*0x4a8b59*/
    v10[5] = 0; /*0x4a8b61*/
    v10[1] = DSurface_ViewBounds.field_0; /*0x4a8b65*/
    v10[2] = (int)DSurface_ViewBounds.field_4; /*0x4a8b69*/
    v10[3] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x4a8b6d*/
    v10[4] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x4a8b71*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 500); /*0x4a8b75*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v10); /*0x4a8b85*/
    v7 = DSurface_ViewBounds.field_4; /*0x4a8b8a*/
    v6 = DSurface_ViewBounds.field_0; /*0x4a8b8f*/
    v8 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x4a8b95*/
  }
  MessageListClass::Init( /*0x4a8bb8*/
    (MessageListClass *)&stru_A8BB1C.__pad_87[189],
    v6 + 3,
    (int)v7,
    6,
    98,
    14,
    -1,
    -1,
    0,
    20,
    98,
    v8 - 6);
  TacticalClass::processInput((TacticalClass *)&stru_A8BB1C.__pad_87[189], *(int *)DSurface_ViewBounds.__pad_8); /*0x4a8bc9*/
  Debug::Log(); /*0x4a8bd3*/
}



// ==== 0x004A8BF0  Mouse::SetBounds  this=MapClass  sig=csp ====
int __thiscall Mouse::SetBounds(int this, const void *a2)
{
  int result; // eax
  __int16 v4; // cx
  const void *v5; // esi
  bool v6; // zf
  int v7; // eax
  __int16 v8; // cx
  _WORD v9[4]; // [esp+8h] [ebp-8h] BYREF

  result = *(_DWORD *)(this + 4476); /*0x4a8bf7*/
  if ( result ) /*0x4a8bff*/
  {
    v4 = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a8c16*/
    v9[0] = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a8c1f*/
    v9[1] = v4; /*0x4a8c24*/
    result = MapClass::SetCellFlagsAlongPath((MapClass *)this, v9, 0); /*0x4a8c38*/
  }
  v5 = a2; /*0x4a8c3d*/
  v6 = a2 == 0; /*0x4a8c47*/
  *(_DWORD *)(this + 4472) = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4a8c49*/
  if ( v6 ) /*0x4a8c4f*/
  {
    *(_DWORD *)(this + 4476) = 0; /*0x4a8d1f*/
  }
  else
  {
    if ( (byte_8A0618 & 1) == 0 ) /*0x4a8c5c*/
    {
      byte_8A0618 |= 1u; /*0x4a8c68*/
      atexit(nullsub_10); /*0x4a8c6e*/
    }
    qmemcpy(&stru_8A0390.onBridge, v5, 0x1E0u); /*0x4a8c85*/
    *(_DWORD *)(this + 4476) = &stru_8A0390.onBridge; /*0x4a8c8f*/
    v7 = *CoordList::GetBounds(&a2, (__int16 *)&stru_8A0390.onBridge); /*0x4a8c9e*/
    v9[0] = v7 - 1; /*0x4a8ca6*/
    v9[1] = HIWORD(v7) - 1; /*0x4a8cab*/
    LOWORD(a2) = (__int16)(1 - v7) / 2; /*0x4a8cc4*/
    HIWORD(a2) = (__int16)(1 - HIWORD(v7)) / 2; /*0x4a8cd1*/
    v8 = (__int16)a2; /*0x4a8cd6*/
    *(_DWORD *)(this + 4472) = a2; /*0x4a8cda*/
    LOWORD(v7) = *(_WORD *)(this + 4474) + *(_WORD *)(this + 4470); /*0x4a8cee*/
    LOWORD(a2) = v8 + *(_WORD *)(this + 4468); /*0x4a8cf8*/
    HIWORD(a2) = v7; /*0x4a8cfd*/
    return MapClass::SetCellFlagsAlongPath((MapClass *)this, &a2, (_WORD *)1); /*0x4a8d11*/
  }
  return result; /*0x4a8d17*/
}



// ==== 0x004A8D40  nullsub_10  this=-  sig=ida-proto ====
void __cdecl nullsub_10()
{
  ; /*0x4a8d40*/
}



// ==== 0x004A8D50  MIXClass::CopyHeader  this=IUnknown  sig=csp ====
int __thiscall MIXClass::CopyHeader(int *this, const void *a2)
{
  int result; // eax
  __int16 v4; // cx
  const void *v5; // esi
  bool v6; // zf
  int v7; // eax
  __int16 v8; // cx
  _WORD v9[4]; // [esp+8h] [ebp-8h] BYREF

  result = *(this + 1123); /*0x4a8d57*/
  if ( result ) /*0x4a8d5f*/
  {
    v4 = this->q2308 + *((_WORD *)this + 2244); /*0x4a8d76*/
    v9[0] = this->q2304 + *((_WORD *)this + 2243); /*0x4a8d7f*/
    v9[1] = v4; /*0x4a8d84*/
    result = BuildingClass::MarkExitPath((BuildingClass *)this, v9, 0); /*0x4a8d98*/
  }
  v5 = a2; /*0x4a8d9d*/
  v6 = a2 == 0; /*0x4a8da7*/
  *(int *)((char *)this + 4486) = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4a8da9*/
  if ( v6 ) /*0x4a8daf*/
  {
    *(this + 1123) = 0; /*0x4a8e7f*/
  }
  else
  {
    if ( (byte_8A0619 & 1) == 0 ) /*0x4a8dbc*/
    {
      byte_8A0619 |= 1u; /*0x4a8dc8*/
      atexit(nullsub_11); /*0x4a8dce*/
    }
    qmemcpy(word_8A0298, v5, sizeof(word_8A0298)); /*0x4a8de5*/
    *(this + 1123) = (int)word_8A0298; /*0x4a8def*/
    v7 = *CoordList::GetBounds(&a2, word_8A0298); /*0x4a8dfe*/
    v9[0] = v7 - 1; /*0x4a8e06*/
    v9[1] = HIWORD(v7) - 1; /*0x4a8e0b*/
    LOWORD(a2) = (__int16)(1 - v7) / 2; /*0x4a8e24*/
    HIWORD(a2) = (__int16)(1 - HIWORD(v7)) / 2; /*0x4a8e31*/
    v8 = (__int16)a2; /*0x4a8e36*/
    *(int *)((char *)this + 4486) = (int)a2; /*0x4a8e3a*/
    LOWORD(v7) = *((_WORD *)this + 2244) + this->q2308; /*0x4a8e4e*/
    LOWORD(a2) = v8 + this->q2304; /*0x4a8e58*/
    HIWORD(a2) = v7; /*0x4a8e5d*/
    return BuildingClass::MarkExitPath((BuildingClass *)this, &a2, (_WORD *)1); /*0x4a8e71*/
  }
  return result; /*0x4a8e77*/
}



// ==== 0x004A8EA0  nullsub_11  this=-  sig=ida-proto ====
void __cdecl nullsub_11()
{
  ; /*0x4a8ea0*/
}



// ==== 0x004A8EB0  GetBuildingPlacement  this=MapClass  sig=csp ====
char __stdcall sub_4A8EB0(_DWORD *a1, int a2, int a3, __int16 *a4)
{
  int FoundationWidth; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // esi
  int v13; // edi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // esi
  int v17; // ecx
  __int16 v19[2]; // [esp+8h] [ebp-20h] BYREF
  int v20; // [esp+Ch] [ebp-1Ch]
  int v21; // [esp+10h] [ebp-18h]
  int v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-Ch]
  int FoundationHeight; // [esp+2Ch] [ebp+4h]
  char v25; // [esp+34h] [ebp+Ch]
  int v26; // [esp+38h] [ebp+10h]

  if ( a2 != *((_DWORD *)dword_A83D4C + 12) /*0x4a8f19*/
    || byte_A8ED6B
    || !a3
    || *(_DWORD *)a4 == dword_8A03F8
    || !a1
    || (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) != 7 )
  {
    return 1; /*0x4a905d*/
  }
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)a1, 0); /*0x4a8f2c*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(a1); /*0x4a8f30*/
  v6 = *a4; /*0x4a8f35*/
  v7 = a4[1]; /*0x4a8f38*/
  v8 = FoundationWidth; /*0x4a8f3c*/
  v9 = a1[941] + 1; /*0x4a8f48*/
  v20 = v8; /*0x4a8f4b*/
  v23 = v7; /*0x4a8f54*/
  v10 = v6 - v9 + v8 + 2 * v9; /*0x4a8f58*/
  v11 = v7 - v9; /*0x4a8f5a*/
  v25 = 0; /*0x4a8f61*/
  v26 = v6 - v9; /*0x4a8f66*/
  v22 = v10; /*0x4a8f6a*/
  if ( v6 - v9 < v10 ) /*0x4a8f6e*/
  {
    v12 = v11 + FoundationHeight + 2 * v9; /*0x4a8f74*/
    v21 = v12; /*0x4a8f76*/
    do /*0x4a9048*/
    {
      v13 = v11; /*0x4a8f7c*/
      if ( v11 < v12 ) /*0x4a8f7e*/
      {
        do /*0x4a9033*/
        {
          v19[0] = v26; /*0x4a8f90*/
          v19[1] = v13; /*0x4a8f95*/
          if ( (__int16)v26 < v6 /*0x4a8fb9*/
            || (__int16)v26 >= v6 + v20
            || (__int16)v13 < v23
            || (__int16)v13 >= v23 + FoundationHeight )
          {
            v14 = CellCoord::To_CellObj(&dword_87F7E8, v19); /*0x4a8fc5*/
            v15 = Cell::IsBridge(v14); /*0x4a8fcc*/
            v16 = v15; /*0x4a8fd1*/
            if ( v15 ) /*0x4a8fd5*/
            {
              v17 = v15[135]; /*0x4a8fd7*/
              if ( *(_DWORD *)(v17 + 48) == a2 && *(_BYTE *)(v15[328] + 5455) ) /*0x4a8fec*/
                v25 = 1; /*0x4a8ff5*/
              if ( (_BYTE)MEMORY[0xA8B264] /*0x4a900e*/
                && (unsigned __int8)HouseClass::IsAlliedWith(
                                      (#375 *)v17,
                                      *(#375 **)&dword_A8022C->AbstractClass[4 * a2]) )
              {
                if ( *(_BYTE *)(v16[328] + 5456) ) /*0x4a901d*/
                  v25 = 1; /*0x4a9027*/
              }
            }
          }
          v12 = v21; /*0x4a902c*/
          ++v13; /*0x4a9030*/
        }
        while ( v13 < v21 ); /*0x4a9033*/
        v10 = v22; /*0x4a9039*/
      }
      ++v26; /*0x4a9044*/
    }
    while ( v26 < v10 ); /*0x4a9048*/
  }
  return v25; /*0x4a9054*/
}



// ==== 0x004A9070  ProcessDataBuildingTypeClass  this=MapClass  sig=csp ====
bool __stdcall sub_4A9070(_DWORD *a1, int a2, int a3, __int16 *a4)
{
  int FoundationHeight; // edi
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // edi
  _DWORD v12[2]; // [esp+10h] [ebp-1Ch] BYREF
  int GroundHeight; // [esp+18h] [ebp-14h]
  int v14; // [esp+20h] [ebp-Ch]
  int v15; // [esp+34h] [ebp+8h]
  int v16; // [esp+38h] [ebp+Ch]

  if ( a2 != *((_DWORD *)dword_A83D4C + 12) ) /*0x4a9086*/
    return 1; /*0x4a9086*/
  if ( byte_A8ED6B ) /*0x4a9093*/
    return 1; /*0x4a9093*/
  if ( !a3 ) /*0x4a909f*/
    return 1; /*0x4a909f*/
  if ( *(_DWORD *)a4 == dword_8A03F8 ) /*0x4a90b3*/
    return 1; /*0x4a90b3*/
  if ( !a1 ) /*0x4a90cc*/
    return 1; /*0x4a90cc*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) != 7 ) /*0x4a90dc*/
    return 1; /*0x4a90dc*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)a1, 0); /*0x4a90ed*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(a1); /*0x4a90ef*/
  v6 = *a4; /*0x4a90f4*/
  v7 = a4[1]; /*0x4a90f7*/
  v8 = v6 + FoundationWidth; /*0x4a90fb*/
  v14 = v7; /*0x4a90fd*/
  v9 = v6; /*0x4a9103*/
  v16 = v8; /*0x4a9105*/
  if ( v6 >= v8 ) /*0x4a9109*/
    return 1; /*0x4a9109*/
  v15 = v7 + FoundationHeight; /*0x4a9111*/
  while ( 1 ) /*0x4a9119*/
  {
    v10 = v7; /*0x4a9119*/
    if ( v7 < v15 ) /*0x4a911d*/
      break; /*0x4a911d*/
LABEL_13:
    if ( ++v9 >= v8 ) /*0x4a917e*/
      return 1; /*0x4a917e*/
  }
  while ( 1 ) /*0x4a913d*/
  {
    v12[1] = ((__int16)v10 << 8) + 128; /*0x4a913d*/
    v12[0] = ((__int16)v9 << 8) + 128; /*0x4a9146*/
    GroundHeight = 0; /*0x4a914a*/
    GroundHeight = Cell::GetGroundHeight(v12); /*0x4a9157*/
    if ( Cell::IsPassable(v12) ) /*0x4a9161*/
      return a1[918] != 0; /*0x4a9193*/
    if ( ++v10 >= v15 ) /*0x4a9171*/
    {
      v7 = v14; /*0x4a9173*/
      v8 = v16; /*0x4a9177*/
      goto LABEL_13; /*0x4a9177*/
    }
  }
}



// ==== 0x004A91B0  Tactical::MouseMove  this=Tactical  sig=csp ====
_DWORD *__thiscall Tactical::MouseMove(Tactical *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebp
  bool v4; // zf
  int *v6; // eax
  int v7; // edi
  void *v8; // ebx
  int *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  __int16 v19; // dx
  _WORD *v20; // eax
  __int16 v21; // dx
  int v22; // ebx
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // cx
  int v26; // edx
  __int16 v27; // ax
  _DWORD *v28; // [esp+10h] [ebp-14h] BYREF
  int v29; // [esp+14h] [ebp-10h] BYREF
  int v30; // [esp+18h] [ebp-Ch]
  _BYTE v31[8]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = (_DWORD *)*a3; /*0x4a91ba*/
  v4 = (unsigned __int16)*a3 == *(_WORD *)&stru_8A0390.bombVisible; /*0x4a91bd*/
  a3 = (_DWORD *)*a3; /*0x4a91c6*/
  if ( v4 && HIWORD(a3) == *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a91dc*/
  {
    v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4a91ef*/
                  stru_887598.lineTrailer,
                  &v29);
    v7 = DSurface_ViewBounds.field_0; /*0x4a91f2*/
    v8 = DSurface_ViewBounds.field_4; /*0x4a91f8*/
    v9 = v6; /*0x4a91fe*/
    v10 = *v6; /*0x4a9200*/
    v11 = v9[1]; /*0x4a9204*/
    if ( v10 < DSurface_ViewBounds.field_0 /*0x4a9223*/
      || v10 >= DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8
      || v11 < (int)DSurface_ViewBounds.field_4
      || v11 >= (int)DSurface_ViewBounds.field_4 + *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] )
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4a9284*/
                        stru_887598.lineTrailer,
                        v31);
      v15 = v14[1]; /*0x4a9292*/
      v29 = *v14 - v7; /*0x4a9295*/
      v30 = v15 - (_DWORD)v8; /*0x4a929f*/
      v3 = (_DWORD *)*Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a3, &v29); /*0x4a92af*/
    }
    else
    {
      v12 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4a9232*/
                     stru_887598.lineTrailer,
                     v31);
      v29 = *v12; /*0x4a9237*/
      v30 = v12[1]; /*0x4a924d*/
      v13 = (_DWORD *)*TacticalClass::PixelToCellCheck((RadarClass *)&v28, &v29); /*0x4a9256*/
      v28 = v13; /*0x4a925f*/
      if ( v13 == *(_DWORD **)&stru_8A0390.bombVisible ) /*0x4a9263*/
        goto LABEL_11; /*0x4a9263*/
      v3 = v13; /*0x4a9273*/
    }
    a3 = v3; /*0x4a92b1*/
  }
LABEL_11:
  v16 = *((_DWORD *)this + 1119); /*0x4a92b5*/
  if ( v16 ) /*0x4a92bd*/
  {
    if ( !stru_A8EB00.?[391] ) /*0x4a92e3*/
    {
      v19 = HIWORD(a3) + *((_WORD *)this + 2237); /*0x4a92f3*/
      LOWORD(v28) = (_WORD)v3 + *((_WORD *)this + 2236); /*0x4a92fb*/
      HIWORD(v28) = v19; /*0x4a9301*/
      v20 = UI_Move(&v29, &v28, v16); /*0x4a931e*/
      v21 = v20[1] - *((_WORD *)this + 2237); /*0x4a9331*/
      LOWORD(a3) = *v20 - *((_WORD *)this + 2236); /*0x4a9338*/
      HIWORD(a3) = v21; /*0x4a933d*/
      v3 = a3; /*0x4a9342*/
    }
    v4 = (_WORD)v3 == *((_WORD *)this + 2234); /*0x4a9346*/
    a3 = v3; /*0x4a934d*/
    if ( v4 && HIWORD(v3) == *((_WORD *)this + 2235) ) /*0x4a935f*/
    {
      *a2 = v3; /*0x4a9367*/
      return a2; /*0x4a9361*/
    }
    else
    {
      v22 = *((_DWORD *)this + 1117); /*0x4a9377*/
      if ( *((_DWORD *)this + 1119) ) /*0x4a9371*/
      {
        if ( v3 != *((_DWORD **)this + 1117) /*0x4a93b0*/
          && (*((_WORD *)this + 2234) != *(_WORD *)&stru_8A0390.bombVisible
           || *((_WORD *)this + 2235) != *(_WORD *)&stru_8A0390.alignmentPadding69[1]) )
        {
          v23 = *((_WORD *)this + 2235) + *((_WORD *)this + 2237); /*0x4a93c7*/
          LOWORD(a3) = *((_WORD *)this + 2234) + *((_WORD *)this + 2236); /*0x4a93d0*/
          HIWORD(a3) = v23; /*0x4a93d5*/
          MapClass::SetCellFlagsAlongPath((MapClass *)this, &a3, 0); /*0x4a93e9*/
        }
        if ( v3 != *(_DWORD **)&stru_8A0390.bombVisible ) /*0x4a93f5*/
        {
          v24 = *((_WORD *)this + 2236) + (_WORD)v3; /*0x4a940a*/
          HIWORD(a3) = HIWORD(v3) + *((_WORD *)this + 2237); /*0x4a9414*/
          LOWORD(a3) = v24; /*0x4a941b*/
          MapClass::SetCellFlagsAlongPath((MapClass *)this, &a3, (_WORD *)1); /*0x4a942f*/
        }
      }
      *((_DWORD *)this + 1117) = v3; /*0x4a9434*/
      v25 = *((_WORD *)this + 2236) + (_WORD)v3; /*0x4a944b*/
      HIWORD(a3) = *((_WORD *)this + 2235) + *((_WORD *)this + 2237); /*0x4a9452*/
      v26 = *((_DWORD *)this + 1119); /*0x4a9457*/
      LOWORD(a3) = v25; /*0x4a945d*/
      *((_BYTE *)this + 4480) = GetBuildingPlacement( /*0x4a9485*/
                                  *((_DWORD **)this + 1130),
                                  *((_DWORD *)this + 1131),
                                  v26,
                                  (__int16 *)&a3);
      v27 = *((_WORD *)this + 2237) + *((_WORD *)this + 2235); /*0x4a94a0*/
      LOWORD(a3) = *((_WORD *)this + 2234) + *((_WORD *)this + 2236); /*0x4a94a7*/
      HIWORD(a3) = v27; /*0x4a94b0*/
      *((_BYTE *)this + 4481) = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                  *((_DWORD **)this + 1130),
                                  *((_DWORD *)this + 1131),
                                  *((_DWORD *)this + 1119),
                                  (__int16 *)&a3);
      *a2 = v22; /*0x4a94e6*/
      return a2; /*0x4a94e0*/
    }
  }
  else
  {
    v17 = *((_DWORD *)this + 1117); /*0x4a92bf*/
    *((_DWORD *)this + 1117) = v3; /*0x4a92c9*/
    *a2 = v17; /*0x4a92d2*/
    return a2; /*0x4a92c5*/
  }
}



// ==== 0x004A94F0  CoordList::GetBounds  this=MouseClass  sig=csp ====
_DWORD *__stdcall CoordList_GetBounds(_DWORD *a1, __int16 *a2)
{
  __int16 *v2; // edx
  int v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  __int16 v7; // ax
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v12; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x4a94f1*/
  v3 = 512; /*0x4a94fa*/
  v4 = -512; /*0x4a94ff*/
  v5 = 512; /*0x4a9507*/
  v6 = -512; /*0x4a9509*/
  v12 = 0; /*0x4a950b*/
  if ( !a2 ) /*0x4a9515*/
    goto LABEL_17; /*0x4a9515*/
  while ( 1 ) /*0x4a9517*/
  {
    v7 = *v2; /*0x4a9517*/
    if ( *v2 == 0x7FFF && v2[1] == 0x7FFF ) /*0x4a9524*/
      break; /*0x4a9524*/
    v8 = v2[1]; /*0x4a9526*/
    if ( v4 <= v7 ) /*0x4a952f*/
      v4 = v7; /*0x4a9531*/
    if ( v3 >= v7 ) /*0x4a9535*/
      v3 = v7; /*0x4a9537*/
    if ( v6 <= v8 ) /*0x4a953b*/
      v6 = v2[1]; /*0x4a953d*/
    if ( v5 >= v8 ) /*0x4a9541*/
      v5 = v2[1]; /*0x4a9543*/
    v2 += 2; /*0x4a9545*/
  }
  v9 = v4 - v3; /*0x4a954a*/
  LOWORD(v12) = 1; /*0x4a9551*/
  if ( v9 + 1 >= 1 ) /*0x4a955b*/
    LOWORD(v12) = v9 + 1; /*0x4a955d*/
  v10 = v6 - v5; /*0x4a9562*/
  if ( v10 + 1 < 1 ) /*0x4a9569*/
  {
    HIWORD(v12) = 1; /*0x4a956b*/
LABEL_17:
    *a1 = v12; /*0x4a9570*/
    return a1; /*0x4a957f*/
  }
  HIWORD(v12) = v10 + 1; /*0x4a9582*/
  *a1 = v12; /*0x4a9592*/
  return a1; /*0x4a9578*/
}



// ==== 0x004A95A0  MapClass::SetCellFlagsAlongPath  this=MapClass  sig=csp ====
int __thiscall MapClass::SetCellFlagsAlongPath(MapClass *this, _WORD *a2, _WORD *a3)
{
  int result; // eax
  _WORD *v4; // ebp
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v4 = a2; /*0x4a95a2*/
  LOWORD(result) = *a2; /*0x4a95aa*/
  if ( *a2 != *(_WORD *)&stru_8A0390.bombVisible || a2[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a95c2*/
  {
    v6 = *(__int16 **)&this->__pad_1170[12]; /*0x4a95c4*/
    v7 = (char)a3; /*0x4a95ca*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a95db*/
    {
      v8 = v6; /*0x4a95dd*/
      v6 += 2; /*0x4a95df*/
      v9 = *v8; /*0x4a95e2*/
      LOWORD(v8) = v4[1] + v8[1]; /*0x4a95ed*/
      LOWORD(a3) = *v4 + v9; /*0x4a95f1*/
      HIWORD(a3) = (_WORD)v8; /*0x4a95f6*/
      a2 = a3; /*0x4a9603*/
      result = LayerClass::CoordinatesLegal((LayerClass *)this, (__int16 *)&a2); /*0x4a960a*/
      if ( (_BYTE)result ) /*0x4a9611*/
      {
        result = (int)CellCoord::To_CellObj((CellCoord *)this, (__int16 *)&a2); /*0x4a961a*/
        v10 = *(_DWORD *)(result + 300); /*0x4a961f*/
        if ( v7 ) /*0x4a9627*/
          *(_DWORD *)(result + 300) = v10 | 2; /*0x4a962c*/
        else
          *(_DWORD *)(result + 300) = v10 & 0xFFFFFFFD; /*0x4a9637*/
      }
    }
  }
  return result; /*0x4a963f*/
}



// ==== 0x004A9650  BuildingClass::MarkExitPath  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MarkExitPath(BuildingClass *this, _WORD *a2, _WORD *a3)
{
  int result; // eax
  _WORD *v4; // ebp
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v4 = a2; /*0x4a9652*/
  LOWORD(result) = *a2; /*0x4a965a*/
  if ( *a2 != *(_WORD *)&stru_8A0390.bombVisible || a2[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a9672*/
  {
    v6 = (__int16 *)*((_DWORD *)this + 1123); /*0x4a9674*/
    v7 = (char)a3; /*0x4a967a*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a968b*/
    {
      v8 = v6; /*0x4a968d*/
      v6 += 2; /*0x4a968f*/
      v9 = *v8; /*0x4a9692*/
      LOWORD(v8) = v4[1] + v8[1]; /*0x4a969d*/
      LOWORD(a3) = *v4 + v9; /*0x4a96a1*/
      HIWORD(a3) = (_WORD)v8; /*0x4a96a6*/
      a2 = a3; /*0x4a96b3*/
      result = LayerClass::CoordinatesLegal((LayerClass *)this, (__int16 *)&a2); /*0x4a96ba*/
      if ( (_BYTE)result ) /*0x4a96c1*/
      {
        result = (int)CellCoord::To_CellObj((CellCoord *)this, (__int16 *)&a2); /*0x4a96ca*/
        v10 = *(_DWORD *)(result + 300); /*0x4a96cf*/
        if ( v7 ) /*0x4a96d7*/
          *(_DWORD *)(result + 300) = v10 | 4; /*0x4a96dc*/
        else
          *(_DWORD *)(result + 300) = v10 & 0xFFFFFFFB; /*0x4a96e7*/
      }
    }
  }
  return result; /*0x4a96ef*/
}



// ==== 0x004A9700  DisplayClass::Update  this=DisplayClass  sig=csp ====
void __thiscall DisplayClass::Update(DisplayClass *this, int a2, int a3)
{
  VectorCursor_uint_DynamicVectorClass_uint____13::Count((int *)this, a2, a3); /*0x4a970a*/
}



// ==== 0x004A9720  Targeting::Readd  this=Targeting  sig=csp ====
int __stdcall Targeting::Readd(_DWORD *a1)
{
  int result; // eax
  int v2; // edi

  if ( a1 ) /*0x4a9728*/
  {
    if ( a1[37] != -1 ) /*0x4a9731*/
      RemoveTarget((int)a1); /*0x4a9734*/
    result = (*(int (__thiscall **)(_DWORD *))(*a1 + 120))(a1); /*0x4a973d*/
    v2 = result; /*0x4a9740*/
    if ( result != -1 ) /*0x4a9745*/
    {
      LOBYTE(result) = DisplayClass::RenderStatusText(24 * result + 9044832, (int)a1, result == 2); /*0x4a9759*/
      if ( (_BYTE)result ) /*0x4a9760*/
        a1[37] = v2; /*0x4a9762*/
    }
  }
  return result; /*0x4a9768*/
}



// ==== 0x004A9770  RemoveTarget  this=-  sig=csp ====
int __stdcall RemoveTarget(int a1)
{
  int result; // eax
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int *v7; // esi
  int v8; // eax
  int v9; // ecx

  v2 = a1; /*0x4a9772*/
  if ( a1 ) /*0x4a9778*/
  {
    result = *(_DWORD *)(a1 + 148); /*0x4a977e*/
    if ( result != -1 ) /*0x4a9787*/
    {
      v3 = 3 * result; /*0x4a978d*/
      v4 = 8 * v3 + 9044832; /*0x4a979b*/
      result = (*(int (__thiscall **)(int, int *))(stru_8A0360[2 * v3] + 16))(v4, &a1); /*0x4a97a9*/
      if ( result != -1 ) /*0x4a97af*/
      {
        v5 = *(_DWORD *)(v4 + 16); /*0x4a97b1*/
        if ( result < v5 ) /*0x4a97b6*/
        {
          v6 = v5 - 1; /*0x4a97b8*/
          for ( *(_DWORD *)(v4 + 16) = v6; /*0x4a97be*/
                result < *(_DWORD *)(v4 + 16);
                *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * result) )
          {
            ++result; /*0x4a97c3*/
          }
          *(_DWORD *)(v2 + 148) = -1; /*0x4a97d2*/
        }
      }
      if ( *(_DWORD *)(v2 + 148) != -1 ) /*0x4a97e3*/
      {
        v7 = dword_8A0370; /*0x4a97e5*/
        do /*0x4a982a*/
        {
          while ( 1 ) /*0x4a97ea*/
          {
            v8 = *(v7 - 4); /*0x4a97ea*/
            a1 = v2; /*0x4a97f4*/
            result = (*(int (__thiscall **)(int *, int *))(v8 + 16))(v7 - 4, &a1); /*0x4a97f9*/
            if ( result == -1 || result >= *v7 ) /*0x4a9805*/
              break; /*0x4a9805*/
            v9 = *v7 - 1; /*0x4a9807*/
            for ( *v7 = v9; result < *v7; *(_DWORD *)(*(v7 - 3) + 4 * result - 4) = *(_DWORD *)(*(v7 - 3) + 4 * result) ) /*0x4a980c*/
              ++result; /*0x4a9811*/
          }
          v7 += 6; /*0x4a9821*/
        }
        while ( (int)v7 < (int)&dword_8A03E8 ); /*0x4a982a*/
        *(_DWORD *)(v2 + 148) = -1; /*0x4a982c*/
      }
    }
  }
  return result; /*0x4a9836*/
}



// ==== 0x004A9840  DisplayClass::SetCoordVisible  this=DisplayClass  sig=csp ====
int __stdcall DisplayClass::SetCoordVisible(DisplayClass *this, _DWORD *a2, char a3)
{
  int result; // eax

  result = *a2; /*0x4a9848*/
  if ( *a2 ) /*0x4a9848*/
  {
    if ( !a3 ) /*0x4a9859*/
    {
      result = DisplayClass::GetCoordDelta((DisplayClass *)g_TacticalClass_Instance, (int)this); /*0x4a9866*/
      LOBYTE(result) = result != -1; /*0x4a9873*/
      return result; /*0x4a9875*/
    }
  }
  else if ( !a3 ) /*0x4a9850*/
  {
    LOBYTE(result) = 0; /*0x4a9852*/
    return result; /*0x4a9854*/
  }
  result = DisplayClass::ScrollTacticalView((DisplayClass *)g_TacticalClass_Instance, (int)this, *a2); /*0x4a9884*/
  LOBYTE(result) = 1; /*0x4a9889*/
  return result; /*0x4a9854*/
}



// ==== 0x004A9890  DisplayClass::UpdateCellPassability  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::UpdateCellPassability(DisplayClass *this, __int16 *a2, int a3)
{
  __int16 *v3; // esi
  CellClass *v5; // ebp
  int v6; // eax
  int copyFlags; // eax
  char AdjacentPassableMask; // al
  int v9; // eax
  char v10; // al
  int v11; // eax
  int v12; // edx
  __int16 v13; // cx
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // eax
  int j; // ebp
  int v18; // edx
  __int16 v19; // cx
  _BYTE *v20; // esi
  char v21; // al
  int v22; // eax
  int v23; // eax
  int k; // edi
  int v25; // edx
  __int16 v26; // cx
  _BYTE *v27; // esi
  char v28; // al
  char v30; // [esp+Eh] [ebp-22h]
  bool v31; // [esp+Fh] [ebp-21h]
  __int16 v32[2]; // [esp+10h] [ebp-20h] BYREF
  int i; // [esp+14h] [ebp-1Ch]
  int v34; // [esp+18h] [ebp-18h]
  int v35; // [esp+1Ch] [ebp-14h]
  __int16 v36[2]; // [esp+20h] [ebp-10h] BYREF
  int v37; // [esp+24h] [ebp-Ch]
  CellClass *v38; // [esp+28h] [ebp-8h]
  int v39; // [esp+2Ch] [ebp-4h]

  v3 = a2; /*0x4a9896*/
  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4a98a2*/
  v38 = v5; /*0x4a98a4*/
  v6 = v5->flags[0]; /*0x4a98a8*/
  v31 = (v6 & 2) == 0; /*0x4a98b9*/
  if ( (v6 & 2) == 0 || (v30 = 0, (v5->copyFlags & 8) == 0) ) /*0x4a98cd*/
    v30 = 1; /*0x4a98cf*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a98da*/
  LOBYTE(v39) = v30; /*0x4a98dc*/
  v5->flags[0] = v6; /*0x4a98e0*/
  copyFlags = v5->copyFlags; /*0x4a98e6*/
  LOBYTE(copyFlags) = copyFlags | 8; /*0x4a98ec*/
  v5->copyFlags = copyFlags; /*0x4a98f0*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 0); /*0x4a98fd*/
  if ( AdjacentPassableMask != v5->shroudedness ) /*0x4a9908*/
  {
    v30 = 1; /*0x4a990a*/
    v5->shroudedness = AdjacentPassableMask; /*0x4a990f*/
  }
  if ( v5->shroudedness == -1 ) /*0x4a991c*/
  {
    v9 = v5->copyFlags; /*0x4a991e*/
    LOBYTE(v9) = v9 | 0x10; /*0x4a9924*/
    v5->copyFlags = v9; /*0x4a9926*/
  }
  v10 = Cell::GetAdjacentPassableMask(a2, 1); /*0x4a9935*/
  if ( v10 != v5->foggedness ) /*0x4a9940*/
  {
    v30 = 1; /*0x4a9942*/
    v5->foggedness = v10; /*0x4a9947*/
  }
  if ( v5->foggedness == -1 ) /*0x4a9954*/
  {
    v11 = v5->flags[0]; /*0x4a9956*/
    LOBYTE(v11) = v11 | 1; /*0x4a995c*/
    v5->flags[0] = v11; /*0x4a995e*/
  }
  if ( v30 ) /*0x4a996a*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9973*/
  for ( i = 0; i < 8; ++i ) /*0x4a9979*/
  {
    v12 = i & 7; /*0x4a9985*/
    v13 = *v3 + LOWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x4a9997*/
    LOWORD(v12) = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x4a999e*/
    LOWORD(v34) = v13; /*0x4a99a2*/
    HIWORD(v34) = v12; /*0x4a99ab*/
    *(_DWORD *)v32 = v34; /*0x4a99b7*/
    v14 = CellCoord::To_CellObj((CellCoord *)this, v32); /*0x4a99c5*/
    if ( (v32[0] != *v3 || v32[1] != v3[1]) && (v14[75] & 0x10) == 0 ) /*0x4a99e2*/
    {
      v15 = Cell::GetAdjacentPassableMask(v32, 0); /*0x4a99f5*/
      if ( v15 == -1 ) /*0x4a99fd*/
      {
        v16 = v14[75]; /*0x4a9a03*/
        if ( (v16 & 8) == 0 ) /*0x4a9a0b*/
          goto LABEL_20; /*0x4a9a0b*/
        LOBYTE(v16) = v16 | 0x10; /*0x4a9a26*/
        v14[75] = v16; /*0x4a9a29*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9a35*/
        for ( j = 0; j < 8; ++j ) /*0x4a9a3a*/
        {
          v18 = j & 7; /*0x4a9a3e*/
          v19 = v32[0] + LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x4a9a50*/
          LOWORD(v18) = v32[1] + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x4a9a59*/
          LOWORD(v35) = v19; /*0x4a9a5e*/
          HIWORD(v35) = v18; /*0x4a9a67*/
          *(_DWORD *)v36 = v35; /*0x4a9a73*/
          v20 = CellCoord::To_CellObj((CellCoord *)this, v36); /*0x4a9a89*/
          v21 = Cell::GetAdjacentPassableMask(v36, 0); /*0x4a9a8b*/
          if ( v21 != v20[288] ) /*0x4a9a96*/
          {
            v20[288] = v21; /*0x4a9a98*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v20); /*0x4a9aa5*/
          }
        }
        v5 = v38; /*0x4a9ab0*/
        v3 = a2; /*0x4a9ab4*/
      }
      else
      {
        if ( v15 != -2 && (v14[75] & 8) == 0 ) /*0x4a9ac6*/
        {
LABEL_20:
          (*((void (__thiscall **)(DisplayClass *, __int16 *, int))this->DisplayClass_field_0x0 + 36))(this, v32, a3); /*0x4a9a0d*/
          goto LABEL_31; /*0x4a9a21*/
        }
        if ( v15 >= 0 && v15 != *((char *)v14 + 288) ) /*0x4a9aeb*/
        {
          *((_BYTE *)v14 + 288) = v15; /*0x4a9aed*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9afa*/
        }
      }
    }
LABEL_31:
    if ( (v32[0] != *v3 || v32[1] != v3[1]) && (v14[80] & 1) == 0 ) /*0x4a9b1f*/
    {
      v22 = Cell::GetAdjacentPassableMask(v32, 1); /*0x4a9b32*/
      if ( v22 == -1 ) /*0x4a9b3a*/
      {
        v23 = v14[80]; /*0x4a9b40*/
        if ( (v23 & 2) == 0 ) /*0x4a9b48*/
          goto LABEL_36; /*0x4a9b48*/
        LOBYTE(v23) = v23 | 1; /*0x4a9b63*/
        v14[80] = v23; /*0x4a9b66*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9b72*/
        for ( k = 0; k < 8; ++k ) /*0x4a9b77*/
        {
          v25 = k & 7; /*0x4a9b7b*/
          v26 = v32[0] + LOWORD(g_DDrawSurfaceManager.scenario[v25 + 82]); /*0x4a9b8d*/
          LOWORD(v25) = v32[1] + HIWORD(g_DDrawSurfaceManager.scenario[v25 + 82]); /*0x4a9b96*/
          LOWORD(v37) = v26; /*0x4a9b9b*/
          HIWORD(v37) = v25; /*0x4a9ba4*/
          *(_DWORD *)v36 = v37; /*0x4a9bb0*/
          v27 = CellCoord::To_CellObj((CellCoord *)this, v36); /*0x4a9bc6*/
          v28 = Cell::GetAdjacentPassableMask(v36, 1); /*0x4a9bc8*/
          if ( v28 != v27[289] ) /*0x4a9bd3*/
          {
            v27[289] = v28; /*0x4a9bd5*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v27); /*0x4a9be2*/
          }
        }
        v5 = v38; /*0x4a9bed*/
        v3 = a2; /*0x4a9bf1*/
      }
      else
      {
        if ( v22 != -2 && (v14[80] & 2) == 0 ) /*0x4a9c03*/
        {
LABEL_36:
          (*((void (__thiscall **)(DisplayClass *, __int16 *, int))this->DisplayClass_field_0x0 + 36))(this, v32, a3); /*0x4a9b4a*/
          continue; /*0x4a9b5e*/
        }
        if ( v22 >= 0 && v22 != *((char *)v14 + 289) ) /*0x4a9c28*/
        {
          *((_BYTE *)v14 + 289) = v22; /*0x4a9c2a*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9c37*/
        }
      }
    }
  }
  if ( v30 ) /*0x4a9c55*/
    CellClass::SpiralFindClosest((int)v5, a3, v39); /*0x4a9c67*/
  if ( (v5->flags[0] & 2) != 0 && v31 && ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x4a9c88*/
    CellClass::UpdateZone(v5); /*0x4a9c8c*/
  return v30; /*0x4a9c91*/
}



// ==== 0x004A9CA0  DisplayClass::g_var_72f2d5  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::g_var_72f2d5(DisplayClass *this, __int16 *a2, int a3, char a4)
{
  DisplayClass *v5; // esi
  void *DisplayClass_field_0x140; // eax
  bool v7; // bl
  char AdjacentPassableMask; // al
  void *DisplayClass_field_0x12C; // eax
  char v10; // cl
  char result; // al
  char v12; // [esp+Ch] [ebp-4h]
  char v13; // [esp+14h] [ebp+4h]

  v5 = (DisplayClass *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4a9cae*/
  DisplayClass_field_0x140 = v5->DisplayClass_field_0x140; /*0x4a9cb0*/
  v7 = ((unsigned __int8)DisplayClass_field_0x140 & 2) == 0; /*0x4a9cbc*/
  if ( ((unsigned __int8)DisplayClass_field_0x140 & 2) == 0 || (v13 = 0, ((int)v5->DisplayClass_field_0x12C & 8) == 0) ) /*0x4a9cd1*/
    v13 = 1; /*0x4a9cd3*/
  LOBYTE(DisplayClass_field_0x140) = (unsigned __int8)DisplayClass_field_0x140 & 0xBD | 2; /*0x4a9cde*/
  v12 = v13; /*0x4a9ce0*/
  v5->DisplayClass_field_0x140 = DisplayClass_field_0x140; /*0x4a9ce4*/
  if ( a4 ) /*0x4a9cf2*/
    DisplayClass::AdvanceFrameCounter(v5); /*0x4a9cf4*/
  else
    DisplayClass::UpdateDisplayTimer(v5); /*0x4a9cfb*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 0); /*0x4a9d09*/
  if ( AdjacentPassableMask != v5->__pad_34[236] ) /*0x4a9d14*/
  {
    v13 = 1; /*0x4a9d16*/
    v5->__pad_34[236] = AdjacentPassableMask; /*0x4a9d1b*/
  }
  if ( v5->__pad_34[236] == -1 ) /*0x4a9d28*/
  {
    DisplayClass_field_0x12C = v5->DisplayClass_field_0x12C; /*0x4a9d2a*/
    LOBYTE(DisplayClass_field_0x12C) = (unsigned __int8)DisplayClass_field_0x12C | 0x10; /*0x4a9d30*/
    v5->DisplayClass_field_0x12C = DisplayClass_field_0x12C; /*0x4a9d32*/
  }
  v10 = Cell::GetAdjacentPassableMask(a2, 1); /*0x4a9d46*/
  if ( v10 == v5->__pad_34[237] ) /*0x4a9d50*/
  {
    result = v13; /*0x4a9d60*/
  }
  else
  {
    result = 1; /*0x4a9d52*/
    v5->__pad_34[237] = v10; /*0x4a9d54*/
    v13 = 1; /*0x4a9d5a*/
  }
  if ( v5->__pad_34[237] == -1 ) /*0x4a9d6b*/
    v5->DisplayClass_field_0x140 = (void *)((int)v5->DisplayClass_field_0x140 | 1); /*0x4a9d6d*/
  if ( result ) /*0x4a9d76*/
  {
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9d7f*/
    CellClass::SpiralFindClosest((int)v5, a3, v12); /*0x4a9d94*/
    result = v13; /*0x4a9d99*/
  }
  if ( ((int)v5->DisplayClass_field_0x140 & 2) != 0 && v7 && ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x4a9db5*/
  {
    CellClass::UpdateZone((CellClass *)v5); /*0x4a9db9*/
    return v13; /*0x4a9dbe*/
  }
  return result; /*0x4a9dc2*/
}



// ==== 0x004A9DD0  DisplayClass::ProcessCellReveal  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::ProcessCellReveal(DisplayClass *this, __int16 *a2, int a3)
{
  CellClass *v5; // edi
  int v6; // eax
  char v7; // cl
  char AdjacentPassableMask; // al
  int v9; // eax
  int v10; // eax
  __int16 v11; // dx
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // eax
  int j; // edi
  int v16; // edx
  __int16 v17; // cx
  _BYTE *v18; // esi
  char v19; // al
  bool v21; // [esp+Fh] [ebp-1Dh]
  __int16 v22[2]; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  __int16 v26[2]; // [esp+20h] [ebp-Ch] BYREF
  CellClass *v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]
  char v29; // [esp+30h] [ebp+4h]

  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4a9de2*/
  v27 = v5; /*0x4a9de7*/
  v6 = v5->flags[0]; /*0x4a9deb*/
  v7 = v6; /*0x4a9df1*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a9dfc*/
  v21 = (v7 & 2) == 0; /*0x4a9dfe*/
  v29 = v21; /*0x4a9e02*/
  LOBYTE(v28) = v21; /*0x4a9e06*/
  v5->flags[0] = v6; /*0x4a9e0a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 1); /*0x4a9e16*/
  if ( AdjacentPassableMask != v5->foggedness ) /*0x4a9e21*/
  {
    v29 = 1; /*0x4a9e23*/
    v5->foggedness = AdjacentPassableMask; /*0x4a9e28*/
  }
  if ( v5->foggedness == -1 ) /*0x4a9e35*/
  {
    v9 = v5->flags[0]; /*0x4a9e37*/
    LOBYTE(v9) = v9 | 1; /*0x4a9e3d*/
    v5->flags[0] = v9; /*0x4a9e3f*/
  }
  if ( v29 ) /*0x4a9e4b*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9e54*/
  for ( i = 0; i < 8; ++i ) /*0x4a9e5a*/
  {
    v10 = i & 7; /*0x4a9e69*/
    v11 = a2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v10 + 82]); /*0x4a9e7c*/
    LOWORD(v24) = LOWORD(g_DDrawSurfaceManager.scenario[v10 + 82]) + *a2; /*0x4a9e87*/
    HIWORD(v24) = v11; /*0x4a9e90*/
    *(_DWORD *)v22 = v24; /*0x4a9e9c*/
    v12 = CellCoord::To_CellObj((CellCoord *)this, v22); /*0x4a9eaa*/
    if ( (v22[0] != *a2 || v22[1] != a2[1]) && (v12[80] & 1) == 0 ) /*0x4a9ec7*/
    {
      v13 = Cell::GetAdjacentPassableMask(v22, 1); /*0x4a9eda*/
      if ( v13 == -1 ) /*0x4a9ee2*/
      {
        v14 = v12[80]; /*0x4a9ee8*/
        if ( (v14 & 2) == 0 ) /*0x4a9ef0*/
          goto LABEL_13; /*0x4a9ef0*/
        LOBYTE(v14) = v14 | 1; /*0x4a9f0c*/
        v12[80] = v14; /*0x4a9f0f*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v12); /*0x4a9f1b*/
        for ( j = 0; j < 8; ++j ) /*0x4a9f20*/
        {
          v16 = j & 7; /*0x4a9f29*/
          v17 = LOWORD(g_DDrawSurfaceManager.scenario[v16 + 82]) + v22[0]; /*0x4a9f2c*/
          LOWORD(v16) = HIWORD(g_DDrawSurfaceManager.scenario[v16 + 82]); /*0x4a9f3b*/
          LOWORD(v25) = v17; /*0x4a9f43*/
          HIWORD(v25) = v22[1] + v16; /*0x4a9f54*/
          *(_DWORD *)v26 = v25; /*0x4a9f5d*/
          v18 = CellCoord::To_CellObj((CellCoord *)this, v26); /*0x4a9f73*/
          v19 = Cell::GetAdjacentPassableMask(v26, 1); /*0x4a9f75*/
          if ( v19 != v18[289] ) /*0x4a9f80*/
          {
            v18[289] = v19; /*0x4a9f82*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v18); /*0x4a9f8f*/
          }
        }
        v5 = v27; /*0x4a9f9a*/
      }
      else
      {
        if ( v13 != -2 && (v12[80] & 2) == 0 ) /*0x4a9fac*/
        {
LABEL_13:
          (*((void (__thiscall **)(DisplayClass *, __int16 *, int))this->DisplayClass_field_0x0 + 38))(this, v22, a3); /*0x4a9ef2*/
          continue; /*0x4a9f07*/
        }
        if ( v13 >= 0 && v13 != *((char *)v12 + 289) ) /*0x4a9fd2*/
        {
          *((_BYTE *)v12 + 289) = v13; /*0x4a9fd4*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v12); /*0x4a9fe1*/
        }
      }
    }
  }
  if ( v29 ) /*0x4a9fff*/
    CellClass::SpiralFindClosest((int)v5, a3, v28); /*0x4aa011*/
  if ( (v5->flags[0] & 2) != 0 && v21 && ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x4aa032*/
    CellClass::UpdateZone(v5); /*0x4aa036*/
  return v29; /*0x4aa03b*/
}



// ==== 0x004AA050  DisplayClass::RevealFogCell  this=DisplayClass  sig=csp ====
bool __thiscall DisplayClass::RevealFogCell(DisplayClass *this, __int16 *a2, int a3)
{
  __int16 *v3; // edi
  _DWORD *v5; // esi
  int v6; // eax
  char v7; // bl
  bool v8; // bl
  char AdjacentPassableMask; // al
  int v10; // eax
  int v11; // eax
  __int16 v12; // dx
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // eax
  int j; // edi
  int v17; // edx
  __int16 v18; // cx
  _BYTE *v19; // esi
  char v20; // al
  __int16 v22[2]; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  __int16 v26[2]; // [esp+20h] [ebp-Ch] BYREF
  int v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]

  v3 = a2; /*0x4aa057*/
  v5 = CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4aa063*/
  v28 = (int)v5; /*0x4aa068*/
  v6 = v5[75]; /*0x4aa06c*/
  v7 = v6; /*0x4aa072*/
  LOBYTE(v6) = v6 | 8; /*0x4aa074*/
  v8 = (v7 & 8) == 0; /*0x4aa07b*/
  v5[75] = v6; /*0x4aa07e*/
  LOBYTE(v27) = v8; /*0x4aa08a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 0); /*0x4aa08e*/
  if ( AdjacentPassableMask != *((_BYTE *)v5 + 288) ) /*0x4aa099*/
  {
    v8 = 1; /*0x4aa09b*/
    *((_BYTE *)v5 + 288) = AdjacentPassableMask; /*0x4aa09d*/
  }
  if ( *((_BYTE *)v5 + 288) == 0xFF ) /*0x4aa0aa*/
  {
    v10 = v5[75]; /*0x4aa0ac*/
    LOBYTE(v10) = v10 | 0x10; /*0x4aa0b2*/
    v5[75] = v10; /*0x4aa0b4*/
  }
  if ( v8 ) /*0x4aa0bc*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4aa0c5*/
  for ( i = 0; i < 8; ++i ) /*0x4aa0ca*/
  {
    v11 = i & 7; /*0x4aa0d6*/
    v12 = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x4aa0ec*/
    LOWORD(v24) = *v3 + LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x4aa0f7*/
    HIWORD(v24) = v12; /*0x4aa100*/
    *(_DWORD *)v22 = v24; /*0x4aa10c*/
    v13 = CellCoord::To_CellObj((CellCoord *)this, v22); /*0x4aa11a*/
    if ( (v22[0] != *v3 || v22[1] != v3[1]) && (v13[75] & 0x10) == 0 ) /*0x4aa137*/
    {
      v14 = Cell::GetAdjacentPassableMask(v22, 0); /*0x4aa14a*/
      if ( v14 == -1 ) /*0x4aa152*/
      {
        v15 = v13[75]; /*0x4aa158*/
        if ( (v15 & 8) == 0 ) /*0x4aa160*/
          goto LABEL_13; /*0x4aa160*/
        LOBYTE(v15) = v15 | 0x10; /*0x4aa17c*/
        v13[75] = v15; /*0x4aa17f*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v13); /*0x4aa18b*/
        for ( j = 0; j < 8; ++j ) /*0x4aa190*/
        {
          v17 = j & 7; /*0x4aa194*/
          v18 = v22[0] + LOWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4aa1a6*/
          LOWORD(v17) = v22[1] + HIWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4aa1af*/
          LOWORD(v25) = v18; /*0x4aa1b4*/
          HIWORD(v25) = v17; /*0x4aa1bd*/
          *(_DWORD *)v26 = v25; /*0x4aa1c9*/
          v19 = CellCoord::To_CellObj((CellCoord *)this, v26); /*0x4aa1df*/
          v20 = Cell::GetAdjacentPassableMask(v26, 0); /*0x4aa1e1*/
          if ( v20 != v19[288] ) /*0x4aa1ec*/
          {
            v19[288] = v20; /*0x4aa1ee*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v19); /*0x4aa1fb*/
          }
        }
        v3 = a2; /*0x4aa206*/
      }
      else
      {
        if ( v14 != -2 && (v13[75] & 8) == 0 ) /*0x4aa218*/
        {
LABEL_13:
          (*((void (__thiscall **)(DisplayClass *, __int16 *, int))this->DisplayClass_field_0x0 + 39))(this, v22, a3); /*0x4aa162*/
          continue; /*0x4aa177*/
        }
        if ( v14 >= 0 && v14 != *((char *)v13 + 288) ) /*0x4aa23e*/
        {
          *((_BYTE *)v13 + 288) = v14; /*0x4aa240*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v13); /*0x4aa24d*/
        }
      }
    }
  }
  if ( v8 ) /*0x4aa266*/
    CellClass::SpiralFindClosest(v28, a3, v27); /*0x4aa27c*/
  return v8; /*0x4aa281*/
}



// ==== 0x004AA290  BuildingClass::updateSellBack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::updateSellBack(BuildingClass *this, __int16 *a2, _DWORD *a3)
{
  Object *v3; // eax

  v3 = (Object *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4aa29c*/
  return Object::FindObjectCell(v3, a3, 0); /*0x4aa2a8*/
}



// ==== 0x004AA2B0  sub_4AA2B0  this=-  sig=csp ====
_BYTE *__stdcall sub_4AA2B0(_BYTE *a1)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  _BYTE *v5; // esi
  _BYTE *v6; // edi
  _BYTE v8[5]; // [esp+3h] [ebp-5h]

  v8[4] = 0; /*0x4aa2b7*/
  *(_DWORD *)v8 = a1 == 0; /*0x4aa2c8*/
  v1 = &unk_820030; /*0x4aa2d1*/
  while ( 1 ) /*0x4aa2d8*/
  {
    v2 = 0; /*0x4aa2d8*/
    v3 = 6 * *v1; /*0x4aa2dd*/
    if ( dword_8A0370[v3] > 0 ) /*0x4aa2e8*/
      break; /*0x4aa2e8*/
LABEL_12:
    if ( (int)++v1 >= (int)dword_82003C ) /*0x4aa35b*/
      return *(_BYTE **)&v8[1]; /*0x4aa36c*/
  }
  while ( 1 )
  {
    v4 = dword_8A0364[v3]; /*0x4aa2ea*/
    v5 = *(_BYTE **)(v4 + 4 * v2); /*0x4aa2f0*/
    if ( !v5 ) /*0x4aa2f5*/
      goto LABEL_11; /*0x4aa2f5*/
    v6 = (v5[20] & 1) != 0 ? v5 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 100))(*(_DWORD *)(v4 + 4 * v2)) /*0x4aa318*/
      || !v6
      || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 316))(v6) )
    {
      goto LABEL_11; /*0x4aa320*/
    }
    if ( !*(_DWORD *)&v8[1] ) /*0x4aa328*/
      *(_DWORD *)&v8[1] = v5; /*0x4aa32a*/
    if ( v8[0] ) /*0x4aa334*/
      return v5; /*0x4aa369*/
    v8[0] = a1 == v5; /*0x4aa33c*/
LABEL_11:
    ++v2; /*0x4aa341*/
    v3 = 6 * *v1; /*0x4aa347*/
    if ( v2 >= dword_8A0370[v3] ) /*0x4aa350*/
      goto LABEL_12; /*0x4aa350*/
  }
}



// ==== 0x004AA380  sub_4AA380  this=-  sig=csp ====
_BYTE *__stdcall sub_4AA380(_BYTE *a1)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  _BYTE *v3; // esi
  _BYTE *v4; // edi
  _BYTE v6[5]; // [esp+3h] [ebp-5h]

  v6[4] = 0; /*0x4aa387*/
  *(_DWORD *)v6 = a1 == 0; /*0x4aa398*/
  v1 = &dword_82003C; /*0x4aa3a1*/
  while ( 1 ) /*0x4aa3b2*/
  {
    v2 = dword_8A0370[6 * *v1] - 1; /*0x4aa3b2*/
    if ( v2 >= 0 ) /*0x4aa3b3*/
      break; /*0x4aa3b3*/
LABEL_12:
    if ( (int)++v1 >= (int)&DisplayClass::TacticalClass `RTTI Type Descriptor' ) /*0x4aa41d*/
      return *(_BYTE **)&v6[1]; /*0x4aa42a*/
  }
  while ( 1 )
  {
    v3 = *(_BYTE **)(dword_8A0364[6 * *v1] + 4 * v2); /*0x4aa3c1*/
    if ( !v3 ) /*0x4aa3c6*/
      goto LABEL_11; /*0x4aa3c6*/
    v4 = (v3[20] & 1) != 0 ? v3 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 100))(v3) /*0x4aa3e8*/
      || !v4
      || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 316))(v4) )
    {
      goto LABEL_11; /*0x4aa3f0*/
    }
    if ( !*(_DWORD *)&v6[1] ) /*0x4aa3f8*/
      *(_DWORD *)&v6[1] = v3; /*0x4aa3fa*/
    if ( v6[0] ) /*0x4aa404*/
      return v3; /*0x4aa427*/
    v6[0] = a1 == v3; /*0x4aa40c*/
LABEL_11:
    if ( --v2 < 0 ) /*0x4aa412*/
      goto LABEL_12; /*0x4aa412*/
  }
}



// ==== 0x004AA440  CellClass::FindOpenNeighbor  this=CellClass  sig=csp ====
int *__userpurge CellClass::FindOpenNeighbor@<eax>(
        CellClass *this,
        double a2@<st0>,
        int *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // ecx
  int v10; // esi
  int v11; // ebp
  bool v12; // zf
  int v13; // ebx
  int *ScreenCenterOffset; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // ebp
  int v21; // edx
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // kr08_4
  _DWORD *v28; // eax
  int v29; // ecx
  int v30; // ebx
  int v31; // ebx
  _DWORD *v32; // eax
  int v33; // ecx
  int *v34; // eax
  int v35; // ebx
  int v36; // ebp
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // ebx
  int v42; // ebp
  int v43; // edi
  int v44; // eax
  _DWORD *v45; // eax
  int v46; // ecx
  int v47; // eax
  __int16 v48; // ax
  __int16 v49; // cx
  int v50; // eax
  _WORD *Items; // edx
  int v52; // ebx
  int v53; // esi
  int v54; // edi
  __int16 v55; // ax
  __int16 v56; // ax
  int v57; // ecx
  int v58; // ebx
  _DWORD *v59; // eax
  int v60; // ecx
  int *v61; // eax
  int v62; // ebx
  int v63; // ebp
  double v64; // [esp+8h] [ebp-68h]
  char v65; // [esp+22h] [ebp-4Eh]
  char v66; // [esp+23h] [ebp-4Dh]
  __int16 v67[2]; // [esp+24h] [ebp-4Ch] BYREF
  int TileIndex; // [esp+28h] [ebp-48h]
  __int16 v69; // [esp+2Ch] [ebp-44h] BYREF
  __int16 v70; // [esp+2Eh] [ebp-42h]
  int v71; // [esp+30h] [ebp-40h] BYREF
  int v72; // [esp+34h] [ebp-3Ch]
  int v73; // [esp+38h] [ebp-38h] BYREF
  int v74; // [esp+3Ch] [ebp-34h]
  int v75; // [esp+40h] [ebp-30h] BYREF
  int v76; // [esp+44h] [ebp-2Ch]
  _DWORD v77[2]; // [esp+48h] [ebp-28h] BYREF
  _DWORD v78[2]; // [esp+50h] [ebp-20h] BYREF
  VectorClass v79; // [esp+58h] [ebp-18h] BYREF
  int v80; // [esp+68h] [ebp-8h]
  int v81; // [esp+6Ch] [ebp-4h]
  int *v82; // [esp+78h] [ebp+8h]
  int *v83; // [esp+78h] [ebp+8h]

  v10 = v9; /*0x4aa451*/
  v11 = 0; /*0x4aa459*/
  v12 = *(_WORD *)a4 == *(_WORD *)&stru_8A0390.bombVisible; /*0x4aa45b*/
  v65 = 0; /*0x4aa45f*/
  v66 = 0; /*0x4aa464*/
  TileIndex = -1; /*0x4aa469*/
  v67[0] = 0; /*0x4aa471*/
  v67[1] = 0; /*0x4aa476*/
  if ( !v12 || *(_WORD *)(a4 + 2) != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aa481*/
    *(_DWORD *)v67 = *(_DWORD *)a4; /*0x4aa485*/
  if ( v67[0] == *(_WORD *)&stru_8A0390.bombVisible && v67[1] == *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aa495*/
    *(_DWORD *)v67 = *(_DWORD *)a5; /*0x4aa49d*/
  v13 = (int)a3; /*0x4aa4a1*/
  if ( a3 == (int *)-1 ) /*0x4aa4a8*/
    v13 = 0; /*0x4aa4aa*/
  if ( (_BYTE)a7 /*0x4aa4c0*/
    && (v67[0] != *(_WORD *)&stru_8A0390.bombVisible || v67[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1]) )
  {
    TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v67, a8, 1); /*0x4aa4d8*/
  }
  v71 = v67[0]; /*0x4aa4e6*/
  v72 = v67[1]; /*0x4aa4f2*/
  ScreenCenterOffset = CellClass::GetScreenCenterOffset((CellClass *)v10, &v75, &v71); /*0x4aa4fa*/
  v15 = *ScreenCenterOffset; /*0x4aa4ff*/
  v16 = ScreenCenterOffset[1]; /*0x4aa50d*/
  if ( v67[0] == *(_WORD *)&stru_8A0390.bombVisible && v67[1] == *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aa51e*/
  {
    a7 = 0; /*0x4aa618*/
    a4 = 0; /*0x4aa61d*/
    if ( v13 != 1 ) /*0x4aa621*/
    {
      if ( v13 == 2 ) /*0x4aa624*/
      {
        v66 = 1; /*0x4aa65f*/
        a4 = 2 * *(_DWORD *)(v10 + 264) + 2; /*0x4aa66e*/
        v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, *(_DWORD *)(v10 + 260)); /*0x4aa67b*/
      }
      else
      {
        if ( v13 != 3 ) /*0x4aa627*/
        {
          v24 = *(_DWORD *)(v10 + 260); /*0x4aa629*/
          v66 = 1; /*0x4aa62f*/
LABEL_35:
          v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, v24); /*0x4aa694*/
          goto LABEL_36; /*0x4aa6a2*/
        }
        v65 = 1; /*0x4aa645*/
        v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2 * *(_DWORD *)(v10 + 264)); /*0x4aa651*/
      }
LABEL_36:
      v23 = v25 - 1; /*0x4aa6a7*/
      goto LABEL_37; /*0x4aa6a9*/
    }
    v26 = *(_DWORD *)(v10 + 264); /*0x4aa683*/
    v65 = 1; /*0x4aa689*/
    a7 = *(_DWORD *)(v10 + 260); /*0x4aa68e*/
    v24 = 2 * v26; /*0x4aa692*/
    goto LABEL_35; /*0x4aa692*/
  }
  v17 = *(_DWORD *)(v10 + 252); /*0x4aa52a*/
  v18 = v15 - v17; /*0x4aa534*/
  v19 = *(_DWORD *)(v10 + 260) - v15 + v17; /*0x4aa536*/
  a5 = v18; /*0x4aa53a*/
  if ( v18 >= v19 ) /*0x4aa53e*/
    v18 = v19; /*0x4aa540*/
  v20 = *(_DWORD *)(v10 + 256); /*0x4aa542*/
  a7 = 2 * v18; /*0x4aa54b*/
  v21 = *(_DWORD *)(v10 + 264); /*0x4aa557*/
  v22 = v16 - 2 * v20; /*0x4aa55d*/
  if ( v22 >= 2 * (v21 + v20) - v16 ) /*0x4aa568*/
    v22 = 2 * (v21 + v20) - v16; /*0x4aa56a*/
  if ( a7 >= v22 ) /*0x4aa570*/
  {
    v65 = 0; /*0x4aa5cc*/
    v66 = 1; /*0x4aa5d3*/
    if ( v16 - 2 * v20 >= 2 * v21 / 2 ) /*0x4aa5df*/
    {
      a4 = 2 * v21; /*0x4aa5fa*/
      v23 = a5; /*0x4aa5fe*/
      v13 = 2; /*0x4aa602*/
    }
    else
    {
      v23 = a5; /*0x4aa5e1*/
      v13 = 0; /*0x4aa5e5*/
      a4 = -1; /*0x4aa5e7*/
    }
    a7 = 0; /*0x4aa5ef*/
    v11 = 0; /*0x4aa5f3*/
  }
  else
  {
    v65 = 1; /*0x4aa578*/
    v66 = 0; /*0x4aa57f*/
    v23 = v16 - v20; /*0x4aa591*/
    if ( a5 >= *(_DWORD *)(v10 + 260) / 2 ) /*0x4aa58f*/
    {
      a7 = *(_DWORD *)(v10 + 260); /*0x4aa5b1*/
      v13 = 1; /*0x4aa5b5*/
    }
    else
    {
      a7 = -1; /*0x4aa593*/
      v13 = 3; /*0x4aa59b*/
    }
    a4 = 0; /*0x4aa5a0*/
    v11 = 0; /*0x4aa5a8*/
  }
LABEL_37:
  v27 = *(_DWORD *)(v10 + 260); /*0x4aa6aa*/
  v71 = 1; /*0x4aa6c1*/
  v72 = v27 / 2; /*0x4aa6c9*/
  v28 = HexCoord::Convert((HexCoord *)v10, &v75, &v71); /*0x4aa6cd*/
  LOWORD(a5) = *v28; /*0x4aa6d6*/
  HIWORD(a5) = v28[1]; /*0x4aa6e2*/
  if ( v65 )
  {
    v82 = 0; /*0x4aa702*/
    v29 = 2 * *(_DWORD *)(v10 + 264); /*0x4aa709*/
    v30 = v13 != 1 ? 1 : -1;
    if ( v29 > 0 ) /*0x4aa70e*/
    {
      v71 = a7 + v30; /*0x4aa71a*/
      while ( 1 ) /*0x4aa733*/
      {
        v73 = a7; /*0x4aa733*/
        v31 = ((int)v82 + v23) % v29; /*0x4aa737*/
        v74 = v31; /*0x4aa73e*/
        v32 = HexCoord::Convert((HexCoord *)v10, v77, &v73); /*0x4aa742*/
        v75 = v71; /*0x4aa74d*/
        v76 = v31; /*0x4aa751*/
        v33 = v32[1]; /*0x4aa757*/
        LOWORD(a4) = *v32; /*0x4aa75a*/
        HIWORD(a4) = v33; /*0x4aa75f*/
        v34 = HexCoord::Convert((HexCoord *)v10, v78, &v75); /*0x4aa770*/
        v35 = *v34; /*0x4aa775*/
        v36 = v34[1]; /*0x4aa77e*/
        if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v10, (__int16 *)&a4, 1) ) /*0x4aa783*/
        {
          v69 = v35; /*0x4aa7a7*/
          v70 = v36; /*0x4aa7ac*/
          if ( CellClass::CheckBuildablePair((CellClass *)v10, (__int16 *)&a4, &v69, a6, TileIndex, a8) ) /*0x4aa7b1*/
            break; /*0x4aa7b1*/
        }
        v29 = 2 * *(_DWORD *)(v10 + 264); /*0x4aa7c5*/
        v82 = (int *)((char *)v82 + 1); /*0x4aa7c9*/
        if ( (int)v82 >= v29 ) /*0x4aa7cd*/
          goto LABEL_43; /*0x4aa7cd*/
      }
      this->mapCoords[0] = a4; /*0x4aa7f2*/
      return this->mapCoords; /*0x4aa7f8*/
    }
LABEL_43:
    this->mapCoords[0] = a5; /*0x4aa7d3*/
    return this->mapCoords; /*0x4aa7e4*/
  }
  if ( !v66 ) /*0x4aa801*/
    goto LABEL_43; /*0x4aa801*/
  v38 = -(v13 != 0); /*0x4aa807*/
  LOBYTE(v38) = v38 & 0xFE; /*0x4aa809*/
  v39 = v38 + 1; /*0x4aa80b*/
  if ( v13 == 2 ) /*0x4aa80f*/
  {
    VectorClass::CellConstructor(&v79, 0, 0); /*0x4aa81b*/
    v40 = *(_DWORD *)(v10 + 260); /*0x4aa820*/
    v41 = 0; /*0x4aa826*/
    v79.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x4aa82a*/
    v81 = 10; /*0x4aa832*/
    v80 = 0; /*0x4aa83a*/
    if ( v40 > 0 ) /*0x4aa83e*/
    {
      v42 = a6; /*0x4aa844*/
      do /*0x4aa913*/
      {
        v43 = 0; /*0x4aa848*/
        while ( 1 ) /*0x4aa84a*/
        {
          v44 = *(_DWORD *)(v10 + 264); /*0x4aa84a*/
          v75 = v41; /*0x4aa855*/
          v76 = v43 + 2 * v44; /*0x4aa860*/
          v45 = HexCoord::Convert((HexCoord *)v10, v78, &v75); /*0x4aa867*/
          v46 = v45[1]; /*0x4aa877*/
          LOWORD(a7) = *v45; /*0x4aa87a*/
          HIWORD(a7) = v46; /*0x4aa882*/
          if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v10, (__int16 *)&a7, 1) ) /*0x4aa88c*/
          {
            if ( CellClass::CheckBuildablePair((CellClass *)v10, (__int16 *)&a7, v67, v42, TileIndex, a8) ) /*0x4aa8af*/
              break; /*0x4aa8af*/
          }
          if ( ++v43 >= 15 ) /*0x4aa8bc*/
            goto LABEL_60; /*0x4aa8bc*/
        }
        if ( v80 < v79.Capacity /*0x4aa8ed*/
          || (v79.IsAllocated || !v79.Capacity)
          && v81 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v79.ptr_0 + 2))(
               &v79,
               v81 + v79.Capacity,
               0) )
        {
          v47 = v80++; /*0x4aa8fc*/
          *((_DWORD *)v79.Items + v47) = a7; /*0x4aa907*/
        }
LABEL_60:
        ++v41; /*0x4aa90a*/
      }
      while ( v41 < *(_DWORD *)(v10 + 260) ); /*0x4aa913*/
      v11 = v80; /*0x4aa919*/
    }
    v48 = v67[0]; /*0x4aa91d*/
    v49 = v67[1]; /*0x4aa928*/
    if ( v67[0] == *(_WORD *)&stru_8A0390.bombVisible && v67[1] == *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aa939*/
    {
      if ( v11 <= 0 ) /*0x4aa93d*/
      {
        a5 = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4aa963*/
        Items = v79.Items; /*0x4aa967*/
      }
      else
      {
        v50 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v11 - 1); /*0x4aa94e*/
        Items = v79.Items; /*0x4aa953*/
        a5 = *((_DWORD *)v79.Items + v50); /*0x4aa95a*/
      }
    }
    else
    {
      v52 = *(_DWORD *)&stru_8A0390.bombVisible; /*0x4aa970*/
      v53 = -1; /*0x4aa976*/
      v54 = 0; /*0x4aa979*/
      Items = v79.Items; /*0x4aa97d*/
      if ( v80 > 0 ) /*0x4aa981*/
      {
        while ( 1 ) /*0x4aa994*/
        {
          v55 = v48 - Items[2 * v54]; /*0x4aa994*/
          a7 = (__int16)(v49 - Items[2 * v54 + 1]); /*0x4aa9a1*/
          __asm { fild dword ptr [esp+68h+arg_14] } /*0x4aa9a8*/
          a7 = v55; /*0x4aa9af*/
          __asm /*0x4aa9b6*/
          {
            fild dword ptr [esp+68h+arg_14]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+68h+var_68]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v64); /*0x4aa9ce*/
          v56 = Math::RoundToInt(a2); /*0x4aa9d6*/
          Items = v79.Items; /*0x4aa9db*/
          if ( v53 == -1 || v56 < v53 ) /*0x4aa9e9*/
          {
            v52 = *((_DWORD *)v79.Items + v54); /*0x4aa9eb*/
            v53 = v56; /*0x4aa9ee*/
          }
          if ( ++v54 >= v11 ) /*0x4aa9f3*/
            break; /*0x4aa9f3*/
          v48 = v67[0]; /*0x4aa985*/
          v49 = v67[1]; /*0x4aa98a*/
        }
      }
      a5 = v52; /*0x4aa9f5*/
    }
    v79.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x4aa9fb*/
    if ( Items && v79.IsAllocated ) /*0x4aaa0f*/
    {
      __3_YAXPAX_Z(Items); /*0x4aaa16*/
      this->mapCoords[0] = a5; /*0x4aaa26*/
      return this->mapCoords; /*0x4aaa2f*/
    }
    goto LABEL_43; /*0x4aaa0f*/
  }
  v57 = *(_DWORD *)(v10 + 260); /*0x4aaa32*/
  v83 = 0; /*0x4aaa38*/
  if ( v57 <= 0 ) /*0x4aaa3e*/
    goto LABEL_43; /*0x4aaa3e*/
  v71 = a4 + v39; /*0x4aaa4a*/
  while ( 1 ) /*0x4aaa5f*/
  {
    v76 = a4; /*0x4aaa5f*/
    v58 = ((int)v83 + v23) % v57; /*0x4aaa65*/
    v75 = v58; /*0x4aaa6d*/
    v59 = HexCoord::Convert((HexCoord *)v10, v78, &v75); /*0x4aaa71*/
    v73 = v58; /*0x4aaa7c*/
    v74 = v71; /*0x4aaa80*/
    v60 = v59[1]; /*0x4aaa86*/
    LOWORD(a7) = *v59; /*0x4aaa89*/
    HIWORD(a7) = v60; /*0x4aaa8e*/
    v61 = HexCoord::Convert((HexCoord *)v10, v77, &v73); /*0x4aaa9f*/
    v62 = *v61; /*0x4aaaa4*/
    v63 = v61[1]; /*0x4aaaad*/
    if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v10, (__int16 *)&a7, 1) ) /*0x4aaab2*/
    {
      v69 = v62; /*0x4aaad9*/
      v70 = v63; /*0x4aaade*/
      if ( CellClass::CheckBuildablePair((CellClass *)v10, (__int16 *)&a7, &v69, a6, TileIndex, a8) ) /*0x4aaae3*/
        break; /*0x4aaae3*/
    }
    v57 = *(_DWORD *)(v10 + 260); /*0x4aaaf0*/
    v83 = (int *)((char *)v83 + 1); /*0x4aaaf9*/
    if ( (int)v83 >= v57 ) /*0x4aaafd*/
    {
      this->mapCoords[0] = a5; /*0x4aab0e*/
      return this->mapCoords; /*0x4aab14*/
    }
  }
  this->mapCoords[0] = a7; /*0x4aab22*/
  return this->mapCoords; /*0x4aa7db*/
}



// ==== 0x004AAB30  CellClass::CheckBuildablePair  this=CellClass  sig=csp ====
char __thiscall CellClass::CheckBuildablePair(CellClass *this, __int16 *a2, __int16 *a3, int a4, int a5, int a6)
{
  char result; // al
  bool *v8; // eax
  bool *v9; // eax
  Object *v10; // eax
  Object *v11; // eax
  int v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h]

  if ( a4 == 4 ) /*0x4aab40*/
    return 1; /*0x4aab45*/
  v8 = (bool *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4aab63*/
  result = Cell::IsBuildable(v8, a4, 1, 1, -1, 0, -1, 1); /*0x4aab6a*/
  if ( result ) /*0x4aab71*/
  {
    v9 = (bool *)CellCoord::To_CellObj((CellCoord *)this, a3); /*0x4aab97*/
    result = Cell::IsBuildable(v9, a4, 1, 1, a5, a6, -1, 1); /*0x4aab9e*/
    if ( result ) /*0x4aaba5*/
    {
      v12 = 0; /*0x4aabbb*/
      v13 = 0; /*0x4aabbf*/
      v10 = (Object *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4aabc3*/
      if ( Object::FindClosestObjectCell(v10, &v12, 0, 0) ) /*0x4aabca*/
      {
        return 0; /*0x4aabd6*/
      }
      else
      {
        v12 = 0; /*0x4aabe9*/
        v13 = 0; /*0x4aabed*/
        v11 = (Object *)CellCoord::To_CellObj((CellCoord *)this, a3); /*0x4aabf1*/
        return Object::FindClosestObjectCell(v11, &v12, 0, 0) == 0; /*0x4aac03*/
      }
    }
  }
  return result; /*0x4aab42*/
}



// ==== 0x004AAC10  TacticalClass_DisplayClass::ProcessTacticalMouseInput  this=TacticalClass@DisplayClass  sig=csp ====
int __thiscall DisplayClass::ProcessTacticalMouseInput(TacticalClass_DisplayClass *this, bool a2, int a3, int a4)
{
  HWND v5; // eax
  int *v6; // eax
  bool v8[2]; // [esp+6h] [ebp-2Ah] BYREF
  __int16 v9[2]; // [esp+8h] [ebp-28h] BYREF
  int v10; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-14h] BYREF
  HWND v13; // [esp+20h] [ebp-10h]
  int v14[3]; // [esp+24h] [ebp-Ch] BYREF

  v10 = 0; /*0x4aac1c*/
  v12 = 0; /*0x4aac24*/
  v13 = 0; /*0x4aac2c*/
  if ( (a2 & 0x55) != 0 ) /*0x4aac34*/
  {
    v5 = dword_87F770[1]; /*0x4aac3d*/
    v12 = (int)*dword_87F770; /*0x4aac40*/
    v13 = v5; /*0x4aac44*/
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640); /*0x4aac52*/
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640); /*0x4aac5d*/
    v6 = (int *)(*(int (__thiscall **)(MouseClass *, _DWORD *))(dword_887640->MouseClass_field_0x0 + 52))( /*0x4aac6d*/
                  dword_887640,
                  v11);
    v12 = *v6; /*0x4aac72*/
    v13 = (HWND)v6[1]; /*0x4aac79*/
  }
  TacticalClass::TransformPixel((TacticalClass *)g_TacticalClass_Instance, v11, &v12); /*0x4aac8d*/
  v12 -= DSurface_ViewBounds.field_0; /*0x4aaca3*/
  v13 = (HWND)((char *)v13 - dword_886FA4); /*0x4aacb1*/
  Tactical::MouseOver(&v12, v9, v14, &v10, &v8[1], &a2); /*0x4aacd4*/
  if ( *(_DWORD *)v9 != dword_88095C ) /*0x4aace5*/
    Tactical::MouseMove((Tactical *)&dword_87F7E8, v11, v9); /*0x4aad04*/
  return COMObject::ActivateThunk((GadgetClass *)this, 0, a3, 0); /*0x4aad19*/
}



// ==== 0x004AAD20  DisplayClass::g_var_2eb6a7  this=DisplayClass  sig=csp ====
void __stdcall DisplayClass::g_var_2eb6a7(DisplayClass *this)
{
  ; /*0x4aad20*/
}



// ==== 0x004AAD30  DisplayClass::DispatchMode  this=DisplayClass  sig=csp ====
int __thiscall TacticalClass::DispatchMode(DisplayClass *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int (__thiscall **DisplayClass_field_0x0)(DisplayClass *, _DWORD, int); // edx
  _DWORD *v11; // eax
  int v12; // eax
  MapClass *v13; // [esp+0h] [ebp-8h]

  v3 = *(_DWORD *)&this->__pad_1198[12]; /*0x4aad34*/
  if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x4aad47*/
  {
    *(_DWORD *)&this->__pad_1198[12] = 0; /*0x4aad4b*/
    this->DisplayClass_field_0x11A8 = 0; /*0x4aad55*/
    *(_DWORD *)this->__pad_11AC = -1; /*0x4aad5f*/
    v4 = Mouse::SetBounds((int)this, 0); /*0x4aad69*/
    LOBYTE(v4) = byte_884D44; /*0x4aad6e*/
    return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v4); /*0x4aad7a*/
  }
  else if ( LOBYTE(this->DisplayClass_field_0x11B0) ) /*0x4aad82*/
  {
    v6 = BuildingClass::TogglePower2((BuildingClass *)this, 0); /*0x4aad90*/
    LOBYTE(v6) = byte_884D44; /*0x4aad95*/
    return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v6); /*0x4aada1*/
  }
  else if ( BYTE1(this->DisplayClass_field_0x11B0) ) /*0x4aada9*/
  {
    v7 = BuildingClass::TogglePower((BuildingClass *)this, 0); /*0x4aadb7*/
    LOBYTE(v7) = byte_884D44; /*0x4aadbc*/
    return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v7); /*0x4aadc8*/
  }
  else if ( BYTE2(this->DisplayClass_field_0x11B0) ) /*0x4aadd0*/
  {
    v8 = TacticalClass::SetObserverMode((TacticalClass *)this, 0); /*0x4aadde*/
    LOBYTE(v8) = byte_884D44; /*0x4aade3*/
    return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v8); /*0x4aadef*/
  }
  else
  {
    v9 = -1; /*0x4aadfd*/
    if ( *(_DWORD *)&this->__pad_11B4[4] == -1 ) /*0x4aae02*/
    {
      if ( HIBYTE(this->DisplayClass_field_0x11B0) ) /*0x4aae1e*/
      {
        v11 = TacticalClass::SetDisplayMode((TacticalClass *)this, 0, 0); /*0x4aae2e*/
        LOBYTE(v11) = byte_884D44; /*0x4aae33*/
        return (*((int (__thiscall **)(DisplayClass *, _DWORD, _DWORD *))this->DisplayClass_field_0x0 + 18))( /*0x4aae3f*/
                 this,
                 0,
                 v11);
      }
      else
      {
        if ( this->__pad_11B4[0] ) /*0x4aae47*/
          v12 = MapClass::ToggleZoom((MapClass *)this, 0); /*0x4aae55*/
        else
          v12 = MapClass::UnselectAll_ClearLimboLaunchers(v13); /*0x4aae6e*/
        LOBYTE(v12) = byte_884D44; /*0x4aae5a*/
        return (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, v12); /*0x4aae66*/
      }
    }
    else
    {
      DisplayClass_field_0x0 = (int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0; /*0x4aae04*/
      *(_DWORD *)&this->__pad_11B4[4] = -1; /*0x4aae06*/
      LOBYTE(v9) = byte_884D44; /*0x4aae0c*/
      return DisplayClass_field_0x0[18](this, 0, v9); /*0x4aae16*/
    }
  }
}



// ==== 0x004AAE90  DisplayClass::HandlePlayerAction  this=DisplayClass  sig=csp ====
int __thiscall TacticalClass::HandlePlayerAction(DisplayClass *this, __int16 *a2, char a3, void *a4, int a5, int a6)
{
  int v6; // ebx
  _BYTE *v8; // eax
  _BYTE *v9; // edi
  _DWORD *v10; // edi
  int v11; // ecx
  int v12; // edi
  int v13; // edx
  char *v14; // edi
  unsigned __int16 v15; // bp
  char v16; // al
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // edi
  int v21; // ebp
  int v22; // eax
  char *v23; // ecx
  int v24; // eax
  int v25; // ebx
  _DWORD *v26; // eax
  int v27; // edx
  int v28; // edi
  int v29; // ebp
  int v30; // eax
  char *v31; // ecx
  int v32; // eax
  int v33; // ebx
  int v34; // edx
  __int16 v35; // ax
  __int16 v36; // ax
  int v37; // eax
  char *v38; // ecx
  int v39; // ebp
  int v40; // eax
  int v41; // edx
  int v42; // edx
  int v43; // edi
  int v44; // eax
  int v45; // edi
  int result; // eax
  int (__thiscall **DisplayClass_field_0x0)(DisplayClass *, int, int); // edi
  int v48; // eax
  _BYTE *v49; // eax
  int (__thiscall **v50)(DisplayClass *, int, int); // edi
  int v51; // eax
  int v52; // [esp-4h] [ebp-24h]
  int v53; // [esp-4h] [ebp-24h]
  TacticalClass *v54; // [esp+10h] [ebp-10h]
  unsigned int v55; // [esp+14h] [ebp-Ch] BYREF
  void *v56; // [esp+18h] [ebp-8h]
  __int16 v57; // [esp+1Ch] [ebp-4h]

  HIWORD(v6) = HIWORD(a2); /*0x4aae94*/
  v56 = 0; /*0x4aaea1*/
  LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4aaeab*/
  if ( a4 ) /*0x4aaeb2*/
  {
    v56 = a4; /*0x4aaeb8*/
    v8 = AbstractClass::IsTechnoType((AbstractClass *)a4); /*0x4aaebc*/
    v9 = v8; /*0x4aaec1*/
    if ( v8 /*0x4aaeea*/
      && ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6 || !*(_BYTE *)(*((_DWORD *)v9 + 328) + 5889))
      && !stru_A8EB00.?[391] )
    {
      v9[1073] = 1; /*0x4aaeec*/
    }
  }
  else if ( *a2 != *(_WORD *)&stru_8A0390.bombVisible || a2[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4aafe0*/
  {
    v56 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x4aaff1*/
  }
  if ( HIBYTE(this->DisplayClass_field_0x11B0)
    && *(_DWORD *)&this->__pad_11B4[8]
    && !Waypoint::FindByCell(dword_A83D4C->__pad_0, a2)
    && (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) )
  {
    v10 = *(_DWORD **)&this->__pad_11B4[8]; /*0x4aaf37*/
    v11 = a2[1] << 8; /*0x4aaf48*/
    *v10 = (*a2 << 8) + 128; /*0x4aaf4b*/
    v10[1] = v11 + 128; /*0x4aaf53*/
    v10[2] = 0; /*0x4aaf5b*/
    v12 = (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2) + 80) & 0x100) != 0
        ? dword_8A0730
        : 0;
    *(_DWORD *)(*(_DWORD *)&this->__pad_11B4[8] + 8) = Cell::GetGroundHeight(*(_DWORD **)&this->__pad_11B4[8]) + v12; /*0x4aaf94*/
  }
  if ( Waypoint::FindByCell(dword_A83D4C->__pad_0, a2) ) /*0x4aaf9e*/
  {
    switch ( a5 ) /*0x4aafbb*/
    {
      case 1: /*0x4aafbb*/
      case 2: /*0x4aafbb*/
        v13 = 45; /*0x4aafc2*/
        break; /*0x4aafc7*/
      case 3: /*0x4aafbb*/
      case 9: /*0x4aafbb*/
      case 11: /*0x4aafbb*/
        v13 = 50; /*0x4ab001*/
        break; /*0x4ab006*/
      case 5: /*0x4aafbb*/
      case 6: /*0x4aafbb*/
        v13 = 49; /*0x4aaffa*/
        break; /*0x4aafff*/
      default:
        v13 = a5; /*0x4ab008*/
        break; /*0x4ab00a*/
    }
  }
  else
  {
    v13 = a5; /*0x4ab00c*/
  }
  v14 = &this->__pad_11B4[24]; /*0x4ab016*/
  v54 = (TacticalClass *)v13; /*0x4ab01e*/
  if ( !this->__pad_11B4[24] && !this->__pad_11B4[25] && !this->__pad_11B4[26] ) /*0x4ab02b*/
  {
    v15 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2); /*0x4ab03d*/
    LOBYTE(a5) = (unsigned __int8)(v15 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4ab05c*/
    BYTE1(a5) = (unsigned __int8)(v15 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4ab074*/
    v16 = (unsigned __int8)(v15 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4ab088*/
    *(_WORD *)v14 = a5; /*0x4ab08c*/
    this->__pad_11B4[26] = v16; /*0x4ab08f*/
  }
  v17 = v13 - 42; /*0x4ab092*/
  switch ( v13 ) /*0x4ab0a6*/
  {
    case '*': /*0x4ab0a6*/
    case '+': /*0x4ab0a6*/
    case '/': /*0x4ab0a6*/
      v18 = *(_DWORD *)&dword_A83D4C->__pad_140[204]; /*0x4ab0b2*/
      if ( v18 == -1 ) /*0x4ab0bb*/
        v19 = 0; /*0x4ab0bd*/
      else
        v19 = 8 * (v18 % 12); /*0x4ab0c9*/
      v20 = 0; /*0x4ab0d1*/
      v21 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2; /*0x4ab0d9*/
      do /*0x4ab152*/
      {
        v22 = (v20 + v19) % 256; /*0x4ab0ec*/
        v23 = &byte_885180[3 * v22]; /*0x4ab0ed*/
        v21 += 2; /*0x4ab0f4*/
        LOWORD(a5) = *(_WORD *)v23; /*0x4ab0fa*/
        LOWORD(v6) = (unsigned __int8)(BYTE1(a5) >> g_BitMask_Blue); /*0x4ab114*/
        LOWORD(v22) = (unsigned __int8)((unsigned __int8)v23[2] >> g_BitMask_Red); /*0x4ab128*/
        v24 = v22 << g_BitShift_Blue; /*0x4ab12c*/
        v25 = v24 | (v6 << g_BitMask_Green); /*0x4ab134*/
        LOWORD(v24) = (unsigned __int8)((unsigned __int8)a5 >> g_BitShift_Green_0); /*0x4ab142*/
        v6 = (v24 << g_BitShift_Red) | v25; /*0x4ab148*/
        ++v20; /*0x4ab14a*/
        *(_WORD *)(v21 - 2) = v6; /*0x4ab14b*/
      }
      while ( v20 < 8 ); /*0x4ab152*/
      break; /*0x4ab152*/
    case ',': /*0x4ab0a6*/
    case '-': /*0x4ab0a6*/
    case '.': /*0x4ab0a6*/
    case '1': /*0x4ab0a6*/
    case '2': /*0x4ab0a6*/
    case '3': /*0x4ab0a6*/
      v55 = -1; /*0x4ab164*/
      v26 = Waypoint::FindByCell(dword_A83D4C->__pad_0, a2); /*0x4ab16c*/
      WaypointClass::FindOrCreate(dword_A83D4C->__pad_0, (int)v26, &v55, &a5); /*0x4ab182*/
      if ( !HIBYTE(this->DisplayClass_field_0x11B0) ) /*0x4ab187*/
        *(_DWORD *)&dword_A83D4C->__pad_140[204] = v55; /*0x4ab19b*/
      if ( v55 == -1 ) /*0x4ab1a8*/
        v27 = 0; /*0x4ab1aa*/
      else
        v27 = 8 * ((int)v55 % 12); /*0x4ab1b6*/
      v28 = 0; /*0x4ab1be*/
      v29 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2; /*0x4ab1c6*/
      do /*0x4ab23f*/
      {
        v30 = (v28 + v27) % 256; /*0x4ab1d9*/
        v31 = &byte_885180[3 * v30]; /*0x4ab1da*/
        v29 += 2; /*0x4ab1e1*/
        v57 = *(_WORD *)v31; /*0x4ab1e7*/
        LOWORD(v6) = (unsigned __int8)(HIBYTE(v57) >> g_BitMask_Blue); /*0x4ab201*/
        LOWORD(v30) = (unsigned __int8)((unsigned __int8)v31[2] >> g_BitMask_Red); /*0x4ab215*/
        v32 = v30 << g_BitShift_Blue; /*0x4ab219*/
        v33 = v32 | (v6 << g_BitMask_Green); /*0x4ab221*/
        LOWORD(v32) = (unsigned __int8)((unsigned __int8)v57 >> g_BitShift_Green_0); /*0x4ab22f*/
        v6 = (v32 << g_BitShift_Red) | v33; /*0x4ab235*/
        ++v28; /*0x4ab237*/
        *(_WORD *)(v29 - 2) = v6; /*0x4ab238*/
      }
      while ( v28 < 8 ); /*0x4ab23f*/
      break; /*0x4ab23f*/
    default:
      LOWORD(v17) = (unsigned __int8)((unsigned __int8)this->__pad_11B4[25] >> g_BitMask_Blue); /*0x4ab261*/
      LOWORD(v13) = (unsigned __int8)((unsigned __int8)this->__pad_11B4[26] >> g_BitMask_Red); /*0x4ab279*/
      v34 = v13 << g_BitShift_Blue; /*0x4ab27d*/
      v35 = v34 | (v17 << g_BitMask_Green); /*0x4ab285*/
      LOBYTE(v34) = (unsigned __int8)*v14 >> g_BitShift_Green_0; /*0x4ab289*/
      v43 = 0; /*0x4ab291*/
      LOWORD(v34) = (unsigned __int8)v34; /*0x4ab293*/
      v36 = (v34 << g_BitShift_Red) | v35; /*0x4ab29f*/
      v42 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372); /*0x4ab2a1*/
      *(_WORD *)(v42 + 2) = v36; /*0x4ab2a7*/
      v39 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2; /*0x4ab2b6*/
      do /*0x4ab32e*/
      {
        v37 = v43 % 256; /*0x4ab2c8*/
        v38 = &byte_885180[3 * (v43 % 256)]; /*0x4ab2c9*/
        v39 += 2; /*0x4ab2d0*/
        LOWORD(v42) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v38) >> g_BitMask_Blue); /*0x4ab2f0*/
        LOWORD(v37) = (unsigned __int8)((unsigned __int8)v38[2] >> g_BitMask_Red); /*0x4ab304*/
        v40 = v37 << g_BitShift_Blue; /*0x4ab308*/
        v41 = v40 | (v42 << g_BitMask_Green); /*0x4ab310*/
        LOWORD(v40) = (unsigned __int8)((unsigned __int8)*(_WORD *)v38 >> g_BitShift_Green_0); /*0x4ab31e*/
        v42 = (v40 << g_BitShift_Red) | v41; /*0x4ab324*/
        ++v43; /*0x4ab326*/
        *(_WORD *)(v39 - 2) = v42; /*0x4ab327*/
      }
      while ( v43 < 8 ); /*0x4ab32e*/
      if ( !HIBYTE(this->DisplayClass_field_0x11B0) ) /*0x4ab330*/
        *(_DWORD *)&dword_A83D4C->__pad_140[204] = -1; /*0x4ab340*/
      break; /*0x4ab340*/
  }
  v44 = TacticalClass::MapSpecialDrawMode(v54, (int)a4); /*0x4ab355*/
  if ( a3 ) /*0x4ab360*/
  {
    v45 = a6; /*0x4ab36f*/
    switch ( v44 ) /*0x4ab37b*/
    {
      case 1: /*0x4ab37b*/
      case 5: /*0x4ab37b*/
        goto LABEL_55;
      case 2: /*0x4ab37b*/
        if ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x4ab3f3*/
        {
          v49 = **(_BYTE ***)&stru_A8EB00.?[216]; /*0x4ab3ff*/
          if ( **(_DWORD **)&stru_A8EB00.?[216] ) /*0x4ab3ff*/
          {
            if ( (v49[20] & 1) != 0 && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v49 + 132))(v49) + 3213) ) /*0x4ab423*/
              goto LABEL_55; /*0x4ab42b*/
          }
        }
        goto LABEL_73; /*0x4ab42b*/
      case 10: /*0x4ab37b*/
      case 15: /*0x4ab37b*/
      case 32: /*0x4ab37b*/
        goto LABEL_48;
      case 12: /*0x4ab37b*/
      case 13: /*0x4ab37b*/
      case 14: /*0x4ab37b*/
        goto LABEL_70;
      case 17: /*0x4ab37b*/
      case 27: /*0x4ab37b*/
      case 33: /*0x4ab37b*/
      case 34: /*0x4ab37b*/
      case 42: /*0x4ab37b*/
      case 43: /*0x4ab37b*/
      case 44: /*0x4ab37b*/
      case 45: /*0x4ab37b*/
      case 46: /*0x4ab37b*/
      case 47: /*0x4ab37b*/
      case 49: /*0x4ab37b*/
      case 51: /*0x4ab37b*/
        goto LABEL_57;
      case 20: /*0x4ab37b*/
        goto LABEL_79;
      case 26: /*0x4ab37b*/
        goto LABEL_47;
      case 30: /*0x4ab37b*/
        goto LABEL_58;
      case 31: /*0x4ab37b*/
      case 36: /*0x4ab37b*/
        goto LABEL_46;
      case 37: /*0x4ab37b*/
        goto LABEL_80;
      case 38: /*0x4ab37b*/
        goto LABEL_83;
      case 39: /*0x4ab37b*/
      case 40: /*0x4ab37b*/
        goto LABEL_84;
      case 41: /*0x4ab37b*/
      case 65: /*0x4ab37b*/
        goto LABEL_85;
      case 50: /*0x4ab37b*/
        (*((void (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 60, a6); /*0x4ab3d5*/
        break; /*0x4ab3d5*/
      case 57: /*0x4ab37b*/
        goto LABEL_59;
      case 60: /*0x4ab37b*/
        return (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 78, v45);
      case 61: /*0x4ab37b*/
        goto LABEL_61;
      case 62: /*0x4ab37b*/
      case 63: /*0x4ab37b*/
        goto LABEL_91;
      case 66: /*0x4ab37b*/
        goto LABEL_86;
      case 67: /*0x4ab37b*/
        goto LABEL_87;
      case 68: /*0x4ab37b*/
        goto LABEL_88;
      case 69: /*0x4ab37b*/
        goto LABEL_81;
      case 70: /*0x4ab37b*/
        goto LABEL_82;
      case 72: /*0x4ab37b*/
        goto LABEL_89;
      default:
        goto LABEL_92;
    }
    return (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 78, v45); /*0x4ab3d8*/
  }
  else
  {
    result = v44 - 1; /*0x4ab449*/
    switch ( result ) /*0x4ab453*/
    {
      case 0: /*0x4ab453*/
LABEL_55:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 18, a6); /*0x4ab431*/
        break; /*0x4ab446*/
      case 1: /*0x4ab453*/
      case 53: /*0x4ab453*/
LABEL_73:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 19, a6); /*0x4ab5b5*/
        break; /*0x4ab5ca*/
      case 2: /*0x4ab453*/
      case 8: /*0x4ab453*/
      case 10: /*0x4ab453*/
      case 34: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 25, a6); /*0x4ab560*/
        break; /*0x4ab56a*/
      case 3: /*0x4ab453*/
      case 51: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 27, a6); /*0x4ab590*/
        break; /*0x4ab59a*/
      case 4: /*0x4ab453*/
        if ( !v56 /*0x4ab51b*/
          || *(_DWORD *)&stru_A8EB00.?[228] != 1
          || !**(_DWORD **)&stru_A8EB00.?[216]
          || (*(_BYTE *)(**(_DWORD **)&stru_A8EB00.?[216] + 20) & 1) == 0
          || !(*(unsigned __int8 (__thiscall **)(_DWORD, void *))(***(_DWORD ***)&stru_A8EB00.?[216] + 940))(
                **(_DWORD **)&stru_A8EB00.?[216],
                v56) )
        {
          goto LABEL_68; /*0x4ab523*/
        }
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 20, a6); /*0x4ab530*/
        break; /*0x4ab53a*/
      case 5: /*0x4ab453*/
LABEL_68:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 21, a6); /*0x4ab53d*/
        break; /*0x4ab552*/
      case 6: /*0x4ab453*/
      case 7: /*0x4ab453*/
      case 60: /*0x4ab453*/
LABEL_61:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 17, a6); /*0x4ab4ba*/
        break; /*0x4ab4cf*/
      case 9: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 34, a6); /*0x4ab608*/
        break; /*0x4ab612*/
      case 11: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 30, a6); /*0x4ab638*/
        break; /*0x4ab642*/
      case 12: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 31, a6); /*0x4ab620*/
        break; /*0x4ab62a*/
      case 13: /*0x4ab453*/
LABEL_70:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 32, a6); /*0x4ab56d*/
        break; /*0x4ab582*/
      case 14: /*0x4ab453*/
      case 31: /*0x4ab453*/
LABEL_48:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 35, a6); /*0x4ab3b6*/
        break; /*0x4ab3cb*/
      case 15: /*0x4ab453*/
      case 54: /*0x4ab453*/
      case 55: /*0x4ab453*/
      case 63: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 52, a6); /*0x4ab5d8*/
        break; /*0x4ab5e2*/
      case 16: /*0x4ab453*/
      case 26: /*0x4ab453*/
      case 32: /*0x4ab453*/
      case 33: /*0x4ab453*/
      case 41: /*0x4ab453*/
      case 42: /*0x4ab453*/
      case 43: /*0x4ab453*/
      case 44: /*0x4ab453*/
      case 45: /*0x4ab453*/
      case 46: /*0x4ab453*/
      case 48: /*0x4ab453*/
      case 49: /*0x4ab453*/
      case 50: /*0x4ab453*/
LABEL_57:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 60, a6); /*0x4ab45a*/
        break; /*0x4ab46f*/
      case 19: /*0x4ab453*/
LABEL_79:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 53, a6); /*0x4ab645*/
        break; /*0x4ab65a*/
      case 25: /*0x4ab453*/
LABEL_47:
        DisplayClass_field_0x0 = (int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0; /*0x4ab39a*/
        v52 = a6; /*0x4ab3a0*/
        v48 = Map_Handle_731CC0(); /*0x4ab3a1*/
        result = DisplayClass_field_0x0[18](this, v48, v52); /*0x4ab3a9*/
        break; /*0x4ab3b3*/
      case 27: /*0x4ab453*/
        return result;
      case 28: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 33, a6); /*0x4ab4ad*/
        break; /*0x4ab4b7*/
      case 29: /*0x4ab453*/
LABEL_58:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 28, a6); /*0x4ab472*/
        break; /*0x4ab487*/
      case 30: /*0x4ab453*/
LABEL_46:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 26, a6); /*0x4ab382*/
        break; /*0x4ab397*/
      case 36: /*0x4ab453*/
LABEL_80:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 57, a6); /*0x4ab65d*/
        break; /*0x4ab672*/
      case 37: /*0x4ab453*/
LABEL_83:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 50, a6); /*0x4ab6a5*/
        break; /*0x4ab6ba*/
      case 38: /*0x4ab453*/
      case 39: /*0x4ab453*/
LABEL_84:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 58, a6); /*0x4ab6bd*/
        break; /*0x4ab6d2*/
      case 40: /*0x4ab453*/
      case 64: /*0x4ab453*/
LABEL_85:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 47, a6); /*0x4ab6d5*/
        break; /*0x4ab6ea*/
      case 52: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 38, a6); /*0x4ab5a8*/
        break; /*0x4ab5b2*/
      case 56: /*0x4ab453*/
LABEL_59:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 59, a6); /*0x4ab48a*/
        break; /*0x4ab49f*/
      case 59: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 78, a6); /*0x4ab758*/
        break; /*0x4ab762*/
      case 61: /*0x4ab453*/
      case 62: /*0x4ab453*/
LABEL_91:
        v50 = (int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0; /*0x4ab765*/
        v53 = a6; /*0x4ab76b*/
        v51 = Map_Handle_731CB0(); /*0x4ab76c*/
        result = v50[18](this, v51, v53); /*0x4ab774*/
        break; /*0x4ab77e*/
      case 65: /*0x4ab453*/
LABEL_86:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 83, a6); /*0x4ab6ed*/
        break; /*0x4ab702*/
      case 66: /*0x4ab453*/
LABEL_87:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 85, a6); /*0x4ab705*/
        break; /*0x4ab71a*/
      case 67: /*0x4ab453*/
LABEL_88:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 81, a6); /*0x4ab71d*/
        break; /*0x4ab732*/
      case 68: /*0x4ab453*/
LABEL_81:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 79, a6); /*0x4ab675*/
        break; /*0x4ab68a*/
      case 69: /*0x4ab453*/
LABEL_82:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 80, a6); /*0x4ab68d*/
        break; /*0x4ab6a2*/
      case 70: /*0x4ab453*/
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 82, a6); /*0x4ab5f0*/
        break; /*0x4ab5fa*/
      case 71: /*0x4ab453*/
LABEL_89:
        result = (*((int (__thiscall **)(DisplayClass *, int, int))this->DisplayClass_field_0x0 + 18))(this, 84, a6); /*0x4ab735*/
        break; /*0x4ab74a*/
      default:
LABEL_92:
        result = (*((int (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, a6); /*0x4ab781*/
        break; /*0x4ab796*/
    }
  }
  return result; /*0x4ab390*/
}



// ==== 0x004AB9B0  DisplayClass::ExecuteCommand  this=DisplayClass  sig=csp ====
int __thiscall PlayerClass::ExecuteCommand(DisplayClass *this, int a2, __int16 *a3, void *a4, int a5, int a6)
{
  House **v6; // esi
  __int16 v8; // cx
  int v9; // ecx
  _BYTE *v10; // eax
  char v11; // cl
  __int16 v12; // dx
  int v13; // esi
  void *DisplayClass_field_0x11A8; // ecx
  int v15; // eax
  char *v16; // eax
  int v17; // esi
  Selection *v18; // eax
  IUnknown *v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  const void *v24; // eax
  int result; // eax
  int v26; // ebx
  void (__thiscall **DisplayClass_field_0x0)(DisplayClass *, _DWORD, int); // edx
  int v28; // ebx
  House *v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char *v33; // eax
  char BuildingINIEntry; // bl
  char BuildingINI; // al
  _BYTE *WaypointCoords; // eax
  int v37; // edx
  char v38; // al
  _BYTE *v39; // eax
  int v40; // edx
  _BYTE *v41; // eax
  int v42; // eax
  _BYTE *v43; // eax
  char *v44; // eax
  int FirstOfAction; // eax
  char *v46; // eax
  void *Object_field_0x30; // [esp-Ch] [ebp-9Ch]
  int v48; // [esp-8h] [ebp-98h]
  unsigned __int8 v49; // [esp-8h] [ebp-98h]
  int v50; // [esp-4h] [ebp-94h]
  int v51; // [esp-4h] [ebp-94h]
  char v52; // [esp+0h] [ebp-90h]
  MapClass *v53; // [esp+4h] [ebp-8Ch]
  ObjectClass *v54; // [esp+4h] [ebp-8Ch]
  int v55; // [esp+14h] [ebp-7Ch] BYREF
  __int16 v56[4]; // [esp+18h] [ebp-78h] BYREF
  char v57[112]; // [esp+20h] [ebp-70h] BYREF

  v6 = (House **)a4; /*0x4ab9b6*/
  if ( a4 /*0x4ab9ed*/
    && stru_A8EB00.?[376]
    && byte_A8E9A0
    && !stru_A8EB00.?[391]
    && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)a4 + 104))(a4, 0, 0) == 5 )
  {
    v6 = 0; /*0x4ab9ef*/
  }
  if ( !*(_DWORD *)&this->__pad_1198[12] ) /*0x4ab9f9*/
  {
    v26 = 0; /*0x4abca1*/
    if ( this->__pad_11B4[27] ) /*0x4abc94*/
    {
      g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4abcaf*/
      if ( !(unsigned __int8)Mouse::IsButtonDown(0x10u) ) /*0x4abcbc*/
      {
        if ( PlayerClass::HasOccupiedCell((PlayerClass *)g_TacticalClass_Instance) ) /*0x4abccb*/
          MapClass::UnselectAll_ClearLimboLaunchers(v53); /*0x4abcd4*/
        else
          v26 = 1; /*0x4abcdb*/
      }
      PlayerClass::ProcessOccupancyUpdate( /*0x4abceb*/
        (PlayerClass *)g_TacticalClass_Instance,
        (void (__thiscall *)(_BYTE *))PlayerClass::CheckHumanPlayer);
      FrameTimer::Init25(); /*0x4abcf0*/
      DisplayClass_field_0x0 = (void (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0; /*0x4abcf5*/
      this->__pad_11B4[27] = 0; /*0x4abcfd*/
      DisplayClass_field_0x0[18](this, 0, a6); /*0x4abd04*/
      LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4abd07*/
      stru_A8EB00.?[441] = 1; /*0x4abd0e*/
      if ( !v26 ) /*0x4abd17*/
        goto LABEL_121; /*0x4abd17*/
    }
    v28 = a5; /*0x4abd1d*/
    if ( a5 == 8 ) /*0x4abd27*/
    {
      if ( v6 ) /*0x4abd2f*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x4abd3c*/
        {
          v29 = (House *)(*(int (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 60))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x4abd4b*/
          if ( (unsigned __int8)House::IsHumanPlayer(v29) ) /*0x4abd50*/
          {
            if ( *((_BYTE *)v6 + 131) ) /*0x4abd59*/
            {
              if ( Selection::GetFlag() ) /*0x4abd63*/
              {
                v30 = (*(int (__thiscall **)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abd70*/
                PlayerClass::UpdateAIUnits((PlayerClass *)(v30 + 36)); /*0x4abd7b*/
              }
              else
              {
                (*(void (__thiscall **)(House **))&(*v6)->__pad_7C[212])(v6); /*0x4abd89*/
              }
            }
            else if ( Selection::GetFlag() ) /*0x4abd94*/
            {
              v31 = (*(int (__thiscall **)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abda1*/
              MoveFeedback::ProcessCommand((MoveFeedback *)(v31 + 36)); /*0x4abdac*/
            }
            else
            {
              (*(void (__thiscall **)(House **))&(*v6)->__pad_7C[208])(v6); /*0x4abdba*/
            }
            goto LABEL_92; /*0x4abd80*/
          }
        }
      }
      v28 = 7; /*0x4abdc5*/
      a5 = 7; /*0x4abdca*/
    }
    else if ( a5 != 7 ) /*0x4abdd6*/
    {
      if ( a5 ) /*0x4abde3*/
        goto LABEL_64; /*0x4abde3*/
      if ( !v6 || !(*(unsigned __int8 (__thiscall **)(House **))&(*v6)->__pad_7C[188])(v6) || *((_BYTE *)v6 + 131) ) /*0x4abe03*/
        goto LABEL_120; /*0x4abe0b*/
      v28 = 0; /*0x4abe11*/
LABEL_56:
      if ( (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 /*0x4abe40*/
        || (unsigned __int8)House::IsHumanPlayer(v6[135])
        || *((_BYTE *)v6 + 1773) != 15
        || (*(unsigned __int8 (__thiscall **)(House **))&(*v6)->__pad_2B0[120])(v6) )
      {
        MapClass::UnselectAll_ClearLimboLaunchers(v53); /*0x4abe4a*/
        if ( Selection::GetFlag() ) /*0x4abe4f*/
        {
          v32 = (*(int (__thiscall **)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abe5c*/
          MoveFeedback::ProcessCommand((MoveFeedback *)(v32 + 36)); /*0x4abe67*/
        }
        else
        {
          (*(void (__thiscall **)(House **))&(*v6)->__pad_7C[208])(v6); /*0x4abe72*/
        }
        (*((void (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, a6); /*0x4abe80*/
        FrameTimer::Init25(); /*0x4abe83*/
      }
LABEL_64:
      if ( v28 == 61 ) /*0x4abe8b*/
      {
        v33 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x4abe9a*/
        PlayerClass::FindNearestWaypoint( /*0x4abed7*/
          (PlayerClass *)&g_VisibilitySystem,
          (*a3 << 8) + 128,
          (a3[1] << 8) + 128,
          dword_8A0740 * v33[283]);
      }
      else if ( v28 ) /*0x4abee3*/
      {
        if ( a5 != 7 ) /*0x4abef3*/
        {
          if ( a5 == 10 /*0x4abf8e*/
            || a5 == 12
            || a5 == 13
            || a5 == 14
            || a5 == 15
            || a5 == 33
            || a5 == 34
            || a5 == 20
            || a5 == 37
            || a5 == 69
            || a5 == 70
            || a5 == 38
            || a5 == 39
            || a5 == 40
            || a5 == 41
            || a5 == 65
            || a5 == 66
            || a5 == 67
            || a5 == 68
            || a5 == 72
            || a5 == 58
            || a5 == 60
            || (BuildingINIEntry = ReadBuildingINIEntry((ObjectClass *)v53),
                BuildingINI = ReadBuildingINI(v54),
                BuildingINIEntry)
            && BuildingINI )
          {
LABEL_92:
            DispatchSelectionWaypointMove((int)v6, *(_DWORD *)a3, a5, (int)v53); /*0x4abf94*/
            FrameTimer::Init25(); /*0x4abfae*/
            if ( a5 == 33 ) /*0x4abfbc*/
            {
              if ( (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 ) /*0x4abfc8*/
                goto LABEL_117; /*0x4abfc8*/
              if ( *((_BYTE *)v6 + 1632) ) /*0x4abfce*/
              {
                WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4abfdd*/
                v37 = *(_DWORD *)WaypointCoords; /*0x4abfe2*/
                v38 = WaypointCoords[4]; /*0x4abfe9*/
                v49 = 2; /*0x4abfec*/
              }
              else
              {
                v39 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac00a*/
                v37 = *(_DWORD *)v39; /*0x4ac00f*/
                v38 = v39[4]; /*0x4ac016*/
                v49 = 1; /*0x4ac019*/
              }
              v51 = v37; /*0x4abfee*/
              v52 = v38; /*0x4abff0*/
              Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ac000*/
            }
            else
            {
              if ( a5 == 60 ) /*0x4ac03d*/
              {
                if ( !dword_A8B538 ) /*0x4ac046*/
                {
                  v40 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3) + 283); /*0x4ac05a*/
                  PlacePlayerBeacon( /*0x4ac09d*/
                    &g_VisibilitySystem,
                    (int)dword_A83D4C->Object_field_0x30,
                    (*a3 << 8) + 128,
                    (a3[1] << 8) + 128,
                    dword_8A0740 * v40,
                    -1);
                }
                MapClass::ToggleZoom((MapClass *)&stru_87F5F0.__pad_58[416], 0); /*0x4ac0a9*/
                (*((void (__thiscall **)(DisplayClass *, _DWORD, int))this->DisplayClass_field_0x0 + 18))(this, 0, a6); /*0x4ac0b6*/
                goto LABEL_117; /*0x4ac0b9*/
              }
              if ( a5 == 10 ) /*0x4ac0c1*/
              {
                if ( (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 ) /*0x4ac0cd*/
                  goto LABEL_117; /*0x4ac0cd*/
                v41 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac0d8*/
                v49 = 21; /*0x4ac0e7*/
                v51 = *(_DWORD *)v41; /*0x4ac0e9*/
                v52 = v41[4]; /*0x4ac0eb*/
                Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ac0fb*/
              }
              else
              {
                if ( a5 == 13 ) /*0x4ac104*/
                {
                  if ( !v6 ) /*0x4ac108*/
                    goto LABEL_117; /*0x4ac108*/
                  v42 = (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6); /*0x4ac112*/
                  if ( v42 <= 0 || v42 > 2 ) /*0x4ac120*/
                    goto LABEL_117; /*0x4ac120*/
                }
                else
                {
                  if ( a5 != 12 ) /*0x4ac154*/
                    goto LABEL_117; /*0x4ac154*/
                  if ( !v6 ) /*0x4ac15c*/
                  {
                    v44 = PlayerClass::SetTargetOrClear(v57, (int)dword_A83D4C->Object_field_0x30, 23, a3); /*0x4ac1b2*/
                    if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4ac1c1*/
                    {
LABEL_116:
                      qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v44, 0x6Fu); /*0x4ac1c3*/
                      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4ac1ea*/
                      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4ac201*/
                      ++stru_A80220.lineTrailer; /*0x4ac207*/
                    }
LABEL_117:
                    FirstOfAction = SuperWeaponTypeClass::FindFirstOfAction((SuperWeaponTypeClass *)a5); /*0x4ac20c*/
                    if ( FirstOfAction ) /*0x4ac21a*/
                    {
                      v46 = SidebarClass::SetFlashEntry( /*0x4ac23a*/
                              v57,
                              (int)dword_A83D4C->Object_field_0x30,
                              18,
                              *(_DWORD *)(FirstOfAction + 152),
                              a3);
                      if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4ac249*/
                      {
                        qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v46, 0x6Fu); /*0x4ac265*/
                        dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4ac272*/
                        dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4ac289*/
                        ++stru_A80220.lineTrailer; /*0x4ac28f*/
                      }
                    }
                    goto LABEL_120; /*0x4ac28f*/
                  }
                }
                v43 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac163*/
                v49 = 22; /*0x4ac172*/
                v51 = *(_DWORD *)v43; /*0x4ac174*/
                v52 = v43[4]; /*0x4ac176*/
                Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ac186*/
              }
            }
            v44 = EventClass::Add(v57, (int)Object_field_0x30, v49, v51, v52); /*0x4ac187*/
            if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4ac196*/
              goto LABEL_116; /*0x4ac196*/
            goto LABEL_117; /*0x4ac196*/
          }
        }
      }
LABEL_120:
      LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4ac294*/
LABEL_121:
      TechnoClass::GetField(); /*0x4ac29b*/
      return result; /*0x4ac29b*/
    }
    if ( !v6 ) /*0x4abdda*/
      goto LABEL_120; /*0x4abdda*/
    goto LABEL_56; /*0x4abdda*/
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->DisplayClass_field_0x11A8 + 44))(this->DisplayClass_field_0x11A8) == 7 ) /*0x4aba14*/
  {
    v8 = a3[1] + *(_WORD *)&this->__pad_41E[3420]; /*0x4aba27*/
    LOWORD(v55) = *(_WORD *)&this->__pad_41E[3418] + *a3; /*0x4aba2b*/
    HIWORD(v55) = v8; /*0x4aba30*/
    v9 = *(_DWORD *)&this->__pad_41E[3422]; /*0x4aba39*/
    *(_DWORD *)v56 = v55; /*0x4aba43*/
    this->__pad_41E[3426] = GetBuildingPlacement( /*0x4aba5e*/
                              (_DWORD *)this->DisplayClass_field_0x11A8,
                              *(_DWORD *)this->__pad_11AC,
                              v9,
                              v56);
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->DisplayClass_field_0x11A8 + 44))(this->DisplayClass_field_0x11A8) == 7 /*0x4aba94*/
    && v6
    && (*(int (__thiscall **)(House **))&(*v6)->House_field_0x29[3])(v6) == 6
    && (unsigned __int8)BuildingClass::CanAcceptType(
                          (bool *)v6,
                          (int)this->DisplayClass_field_0x11A8,
                          (int)dword_A83D4C) )
  {
    this->__pad_41E[3426] = 1; /*0x4aba9d*/
  }
  if ( !this->__pad_41E[3426] || !this->__pad_41E[3427] ) /*0x4abab2*/
  {
    VoxClass::FindAndPlay(&g_Str_EVA_CannotDeployHere, -1); /*0x4abc80*/
    TechnoClass::GetField(); /*0x4abc85*/
    return result; /*0x4abc91*/
  }
  v10 = __RTDynamicCast( /*0x4abad5*/
          (void **)this->DisplayClass_field_0x11A8,
          0,
          &ObjectTypeClass `RTTI Type Descriptor',
          &TechnoTypeClass `RTTI Type Descriptor',
          0);
  if ( !v10 || (v11 = v10[3278], LOBYTE(v56[0]) = 1, !v11) ) /*0x4abaee*/
    LOBYTE(v56[0]) = 0; /*0x4abaf0*/
  v12 = a3[1] + *(_WORD *)&this->__pad_41E[3420]; /*0x4abb06*/
  v13 = *(_DWORD *)&this->__pad_1198[12]; /*0x4abb0a*/
  LOWORD(v55) = *(_WORD *)&this->__pad_41E[3418] + *a3; /*0x4abb10*/
  DisplayClass_field_0x11A8 = this->DisplayClass_field_0x11A8; /*0x4abb15*/
  HIWORD(v55) = v12; /*0x4abb1b*/
  v50 = LOBYTE(v56[0]); /*0x4abb38*/
  v48 = (*(int (__thiscall **)(void *))(*(_DWORD *)DisplayClass_field_0x11A8 + 64))(DisplayClass_field_0x11A8); /*0x4abb3c*/
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x4abb41*/
  v16 = EventClass::Init(v57, (int)dword_A83D4C->Object_field_0x30, 11, v15, v48, v50, &v55); /*0x4abb55*/
  if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4abb64*/
  {
    qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v16, 0x6Fu); /*0x4abb80*/
    dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4abb91*/
    dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4abba8*/
    ++stru_A80220.lineTrailer; /*0x4abbae*/
  }
  v17 = *(_DWORD *)&this->__pad_1198[12]; /*0x4abbb3*/
  if ( v17 )
    v18 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v17 + 44))(*(_DWORD *)&this->__pad_1198[12]) == 6
        ? (Selection *)v17
        : 0;
  else
    v18 = 0; /*0x4abbbf*/
  Selection::ClearGlobals(v18); /*0x4abbd7*/
  if ( stru_A8EB00.?[391] ) /*0x4abbe3*/
    goto LABEL_121; /*0x4abbe3*/
  v19 = (IUnknown *)this->DisplayClass_field_0x11A8; /*0x4abbe9*/
  v20 = *(_DWORD *)&this->__pad_1198[12]; /*0x4abbef*/
  this->DisplayClass_field_0x1194 = v19; /*0x4abbf5*/
  *(_DWORD *)&this->__pad_41E[3442] = v20; /*0x4abbfb*/
  v21 = *(_DWORD *)&this->__pad_41E[3418]; /*0x4abc03*/
  *(_DWORD *)&this->__pad_41E[3428] = *(_DWORD *)a3; /*0x4abc09*/
  v22 = *(_DWORD *)&this->__pad_41E[3422]; /*0x4abc0f*/
  *(_DWORD *)&this->__pad_41E[3432] = v21; /*0x4abc15*/
  v23 = *(_DWORD *)this->__pad_11AC; /*0x4abc1b*/
  *(_DWORD *)&this->__pad_41E[3438] = v22; /*0x4abc23*/
  *(_DWORD *)this->__pad_1198 = v23; /*0x4abc29*/
  if ( v19 ) /*0x4abc2f*/
  {
    v24 = (const void *)(*(int (__thiscall **)(IUnknown *, int))(v19->field_0 + 144))(v19, 1); /*0x4abc35*/
    MIXClass::CopyHeader((int *)&stru_87F5F0.__pad_58[416], v24); /*0x4abc41*/
  }
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x4abc4c*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x4abc51*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x4abc57*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1426] = -1; /*0x4abc5d*/
  TechnoClass::GetField(); /*0x4abc67*/
  return result; /*0x4abc6c*/
}



// ==== 0x004AC2B0  PlayerClass::CheckHumanPlayer  this=PlayerClass  sig=csp ====
char __thiscall PlayerClass::CheckHumanPlayer(PlayerClass *this)
{
  House *v2; // eax

  v2 = (House *)(*(int (__thiscall **)(PlayerClass *))(*(_DWORD *)this->__pad_0 + 60))(this); /*0x4ac2b5*/
  if ( v2 ) /*0x4ac2ba*/
  {
    LOBYTE(v2) = House::IsHumanPlayer(v2); /*0x4ac2be*/
    if ( (_BYTE)v2 ) /*0x4ac2c5*/
    {
      LOBYTE(v2) = (*(int (__thiscall **)(PlayerClass *))(*(_DWORD *)this->__pad_0 + 312))(this); /*0x4ac2cb*/
      if ( (_BYTE)v2 ) /*0x4ac2d3*/
      {
        LOBYTE(v2) = (*(int (__thiscall **)(PlayerClass *))(*(_DWORD *)this->__pad_0 + 316))(this); /*0x4ac2d9*/
        if ( (_BYTE)v2 ) /*0x4ac2e1*/
        {
          LOBYTE(v2) = *((_BYTE *)this + 129); /*0x4ac2e3*/
          if ( !(_BYTE)v2 ) /*0x4ac2eb*/
          {
            LOBYTE(v2) = (*(int (__thiscall **)(PlayerClass *))(*(_DWORD *)this->__pad_0 + 332))(this); /*0x4ac2f1*/
            if ( (_BYTE)v2 ) /*0x4ac2f9*/
              g_MoveFeedback = 0; /*0x4ac2fb*/
          }
        }
      }
    }
  }
  return (char)v2; /*0x4ac302*/
}



// ==== 0x004AC310  DisplayClass::InitViewBounds  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::InitViewBounds(DisplayClass *this, _DWORD *a2)
{
  void *DisplayClass_field_0x11A8; // eax

  LOBYTE(DisplayClass_field_0x11A8) = this->DisplayClass_field_0x11B0; /*0x4ac310*/
  if ( !(_BYTE)DisplayClass_field_0x11A8 ) /*0x4ac318*/
  {
    LOBYTE(DisplayClass_field_0x11A8) = BYTE2(this->DisplayClass_field_0x11B0); /*0x4ac31a*/
    if ( !(_BYTE)DisplayClass_field_0x11A8 ) /*0x4ac322*/
    {
      LOBYTE(DisplayClass_field_0x11A8) = BYTE1(this->DisplayClass_field_0x11B0); /*0x4ac324*/
      if ( !(_BYTE)DisplayClass_field_0x11A8 && *(_DWORD *)&this->__pad_11B4[4] == -1 ) /*0x4ac335*/
      {
        DisplayClass_field_0x11A8 = this->DisplayClass_field_0x11A8; /*0x4ac337*/
        if ( !DisplayClass_field_0x11A8 ) /*0x4ac33f*/
        {
          LOBYTE(this->DisplayClass_field_0x11D0) = 1; /*0x4ac345*/
          this->DisplayClass_field_0x11D4 = (void *)*a2; /*0x4ac34e*/
          this->DisplayClass_field_0x11D8 = (void *)a2[1]; /*0x4ac357*/
          this->DisplayClass_field_0x11DC = (void *)*a2; /*0x4ac35f*/
          DisplayClass_field_0x11A8 = (void *)a2[1]; /*0x4ac365*/
          this->DisplayClass_field_0x11E0 = DisplayClass_field_0x11A8; /*0x4ac368*/
        }
      }
    }
  }
  return (char)DisplayClass_field_0x11A8; /*0x4ac36e*/
}



// ==== 0x004AC380  DisplayClass::ProcessScroll  this=DisplayClass  sig=csp ====
char __thiscall TacticalClass::ProcessScroll(DisplayClass *this, int *a2)
{
  double v2; // st7
  int v4; // eax
  void *v5; // ecx
  void *DisplayClass_field_0x11DC; // edx
  int v7; // edx
  char DisplayClass_field_0x11B0_high; // cl
  double v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+10h] [ebp-10h] BYREF
  void *v12; // [esp+14h] [ebp-Ch]

  if ( !this->__pad_11B4[27] || HIBYTE(this->DisplayClass_field_0x11B0) || this->__pad_11B4[0] ) /*0x4ac3a3*/
  {
    LOBYTE(v4) = this->DisplayClass_field_0x11D0; /*0x4ac436*/
    if ( (_BYTE)v4 ) /*0x4ac43e*/
    {
      v7 = a2[1]; /*0x4ac45b*/
      v11 = *a2 - (unsigned int)this->DisplayClass_field_0x11D4; /*0x4ac45e*/
      v12 = (void *)(v7 - (unsigned int)this->DisplayClass_field_0x11D8); /*0x4ac467*/
      __asm /*0x4ac46b*/
      {
        fild [esp+20h+var_C]
        fild [esp+20h+var_10]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+20h+var_20]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v10); /*0x4ac484*/
      LOWORD(v4) = Math::RoundToInt(v2); /*0x4ac48c*/
      if ( v4 > 4 ) /*0x4ac494*/
      {
        DisplayClass_field_0x11B0_high = HIBYTE(this->DisplayClass_field_0x11B0); /*0x4ac496*/
        LOBYTE(v4) = 1; /*0x4ac49c*/
        this->__pad_11B4[27] = 1; /*0x4ac4a0*/
        LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4ac4a6*/
        if ( !DisplayClass_field_0x11B0_high && !this->__pad_11B4[0] ) /*0x4ac4af*/
        {
          g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4ac4c0*/
          TacticalClass::InitScrollBounds((TacticalClass *)g_TacticalClass_Instance, &this->DisplayClass_field_0x11D4); /*0x4ac4cc*/
          LOBYTE(v4) = Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x4ac4da*/
        }
      }
    }
  }
  else
  {
    v12 = DSurface_ViewBounds.field_4; /*0x4ac3c8*/
    v11 = DSurface_ViewBounds.field_0; /*0x4ac3d0*/
    v4 = *a2; /*0x4ac3d4*/
    v5 = (void *)a2[1]; /*0x4ac3d6*/
    if ( *a2 < 0 ) /*0x4ac3db*/
      v4 = 0; /*0x4ac3dd*/
    if ( v4 >= *(int *)DSurface_ViewBounds.__pad_8 ) /*0x4ac3e1*/
      v4 = *(_DWORD *)DSurface_ViewBounds.__pad_8 - 1; /*0x4ac3e3*/
    if ( (int)v5 < 0 ) /*0x4ac3e8*/
      v5 = 0; /*0x4ac3ea*/
    if ( (int)v5 >= *(int *)&DSurface_ViewBounds.__pad_8[4] ) /*0x4ac3ee*/
      v5 = (void *)(*(_DWORD *)&DSurface_ViewBounds.__pad_8[4] - 1); /*0x4ac3f0*/
    DisplayClass_field_0x11DC = this->DisplayClass_field_0x11DC; /*0x4ac3f3*/
    v11 = v4; /*0x4ac3f9*/
    v12 = v5; /*0x4ac3ff*/
    if ( (void *)v4 != DisplayClass_field_0x11DC || v5 != this->DisplayClass_field_0x11E0 ) /*0x4ac40b*/
    {
      g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4ac41c*/
      LOBYTE(v4) = TacticalClass::UpdateScrollMaxBounds((TacticalClass *)g_TacticalClass_Instance, &v11); /*0x4ac429*/
    }
  }
  return v4; /*0x4ac42e*/
}



// ==== 0x004AC4F0  ObjectClass::GetHouseData  this=ObjectClass  sig=csp ====
void *GetHouseData(TechnoClass *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // ebx
  char *v4; // ebp
  int v5; // ecx
  int v6; // esi
  int v7; // ecx
  void *result; // eax
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF

  v1 = 0; /*0x4ac4fb*/
  v2 = 0; /*0x4ac4fd*/
  v3 = 0; /*0x4ac4ff*/
  v11 = 0; /*0x4ac503*/
  v12 = 0; /*0x4ac507*/
  v13 = 0; /*0x4ac50b*/
  if ( dword_A8EC88 > 0 ) /*0x4ac50f*/
  {
    v4 = (char *)dword_A8EC7C; /*0x4ac512*/
    v9 = dword_A8EC88; /*0x4ac519*/
    do /*0x4ac567*/
    {
      v5 = *(_DWORD *)v4; /*0x4ac51d*/
      if ( !*(_BYTE *)(*(_DWORD *)v4 + 129) && *(_BYTE *)(v5 + 1050) ) /*0x4ac52a*/
      {
        v2 += *(_DWORD *)(v5 + 156); /*0x4ac53e*/
        v3 += *(_DWORD *)(v5 + 160); /*0x4ac543*/
        v6 = *(_DWORD *)(v5 + 164); /*0x4ac549*/
        v11 = v2; /*0x4ac54c*/
        v12 = v3; /*0x4ac552*/
        v13 += v6; /*0x4ac556*/
        ++v1; /*0x4ac55a*/
      }
      v4 += 4; /*0x4ac55f*/
      --v9; /*0x4ac563*/
    }
    while ( v9 ); /*0x4ac567*/
  }
  v13 = 0; /*0x4ac56d*/
  if ( v1 ) /*0x4ac575*/
  {
    v11 = v2 / v1; /*0x4ac57a*/
    v7 = v3 / v1; /*0x4ac583*/
    v12 = v3 / v1; /*0x4ac58a*/
    v13 = 0 / v1; /*0x4ac58e*/
  }
  else
  {
    v11 = *HouseClass::GetStartCoords((HouseClass *)dword_A83D4C, v14); /*0x4ac5aa*/
    v7 = HouseClass::GetStartCoords((HouseClass *)dword_A83D4C, v14)[1]; /*0x4ac5ba*/
    v12 = v7; /*0x4ac5bd*/
  }
  LOWORD(v10) = v11 / 256; /*0x4ac5d3*/
  HIWORD(v10) = v7 / 256; /*0x4ac5e6*/
  *(int *)((char *)&dword_A8B230[374].ptr_0 + 2) = v10; /*0x4ac5f4*/
  *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = *(int *)((char *)&dword_A8B230[374].ptr_0 + 2); /*0x4ac605*/
  *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2); /*0x4ac616*/
  *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = *(int *)((char *)&dword_A8B230[373].referenceCount + 2); /*0x4ac627*/
  result = dword_A8B230; /*0x4ac62d*/
  dword_A8B230[14].nextArrayIndex = dword_A8B230[14].abstractFlags; /*0x4ac638*/
  if ( g_TacticalClass_Instance ) /*0x4ac646*/
    return (void *)Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, &v11); /*0x4ac64d*/
  return result; /*0x4ac5c5*/
}



// ==== 0x004AC660  BuildingClass::TogglePower  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::TogglePower(BuildingClass *this, int a2)
{
  int result; // eax
  char v4; // bl
  int (__thiscall **ptr_0)(BuildingClass *); // edx
  MapClass *v6; // [esp+0h] [ebp-8h]

  LOBYTE(result) = *((_BYTE *)this + 4529); /*0x4ac668*/
  v4 = result; /*0x4ac671*/
  if ( a2 == -1 ) /*0x4ac673*/
  {
    v4 = (_BYTE)result == 0; /*0x4ac688*/
  }
  else if ( a2 ) /*0x4ac677*/
  {
    if ( a2 == 1 ) /*0x4ac67c*/
      v4 = 1; /*0x4ac67e*/
  }
  else
  {
    v4 = 0; /*0x4ac682*/
  }
  if ( v4 != (_BYTE)result ) /*0x4ac68d*/
  {
    result = *((_DWORD *)this + 1130); /*0x4ac68f*/
    if ( !result ) /*0x4ac697*/
    {
      (*((void (__thiscall **)(BuildingClass *, _DWORD, _DWORD))this->TechnoClass + 18))(this, 0, 0); /*0x4ac6a1*/
      *((_BYTE *)this + 4528) = 0; /*0x4ac6a6*/
      *((_BYTE *)this + 4530) = 0; /*0x4ac6ad*/
      *((_BYTE *)this + 4531) = 0; /*0x4ac6b4*/
      *((_BYTE *)this + 4532) = 0; /*0x4ac6bb*/
      if ( v4 && *(int *)&dword_A83D4C[1].__pad_38[24] > 0 ) /*0x4ac6d2*/
      {
        *((_BYTE *)this + 4529) = 1; /*0x4ac6d4*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v6); /*0x4ac6db*/
      }
      else
      {
        ptr_0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x4ac6e5*/
        *((_BYTE *)this + 4529) = 0; /*0x4ac6e9*/
        return ptr_0[20](this); /*0x4ac6f0*/
      }
    }
  }
  return result; /*0x4ac6e0*/
}



// ==== 0x004AC700  TacticalClass::SetDisplayMode  this=TacticalClass  sig=csp ====
_DWORD *__thiscall TacticalClass::SetDisplayMode(TacticalClass *this, _DWORD *a2, char a3)
{
  _DWORD *result; // eax
  char v5; // cl
  char v6; // bl
  int updated; // eax
  int (__thiscall **ptr_0)(TacticalClass *); // eax
  void (__thiscall **v9)(TacticalClass *); // edx
  MapClass *v10; // [esp+0h] [ebp-8h]

  result = a2; /*0x4ac700*/
  v5 = *((_BYTE *)this + 4531); /*0x4ac70b*/
  v6 = v5; /*0x4ac711*/
  if ( a2 == (_DWORD *)-1 ) /*0x4ac713*/
  {
    v6 = v5 == 0; /*0x4ac728*/
  }
  else if ( a2 ) /*0x4ac717*/
  {
    if ( a2 == (_DWORD *)1 ) /*0x4ac71c*/
      v6 = 1; /*0x4ac71e*/
  }
  else
  {
    v6 = 0; /*0x4ac722*/
  }
  if ( v6 != v5 ) /*0x4ac72d*/
  {
    result = (_DWORD *)*((_DWORD *)this + 1130); /*0x4ac733*/
    if ( !result ) /*0x4ac73b*/
    {
      *((_BYTE *)this + 4528) = 0; /*0x4ac741*/
      *((_BYTE *)this + 4529) = 0; /*0x4ac748*/
      *((_BYTE *)this + 4530) = 0; /*0x4ac74f*/
      *((_BYTE *)this + 4532) = 0; /*0x4ac756*/
      updated = TacticalClass::updateVisibility((TacticalClass *)dword_A83D4C); /*0x4ac763*/
      if ( v6 ) /*0x4ac76a*/
      {
        if ( updated == -1 && (!a3 || *(_DWORD *)&dword_A83D4C->__pad_140[204] == -1) ) /*0x4ac786*/
        {
          ptr_0 = (int (__thiscall **)(TacticalClass *))this->AbstractClass; /*0x4ac788*/
          *((_BYTE *)this + 4531) = 0; /*0x4ac78c*/
          result = (_DWORD *)ptr_0[20](this); /*0x4ac793*/
          *((_DWORD *)this + 1135) = 0; /*0x4ac796*/
        }
        else
        {
          *((_BYTE *)this + 4531) = 1; /*0x4ac7a7*/
          if ( !a3 ) /*0x4ac7ae*/
            *(_DWORD *)&dword_A83D4C->__pad_140[204] = updated; /*0x4ac7b6*/
          return (_DWORD *)MapClass::UnselectAll_ClearLimboLaunchers(v10); /*0x4ac7bc*/
        }
      }
      else
      {
        v9 = (void (__thiscall **)(TacticalClass *))this->AbstractClass; /*0x4ac7c6*/
        *((_BYTE *)this + 4531) = 0; /*0x4ac7ca*/
        v9[20](this); /*0x4ac7d1*/
        result = (_DWORD *)*((_DWORD *)this + 1135); /*0x4ac7d4*/
        if ( result ) /*0x4ac7dc*/
        {
          *result = *((_DWORD *)this + 1136); /*0x4ac7ea*/
          result[1] = *((_DWORD *)this + 1137); /*0x4ac7ef*/
          result[2] = *((_DWORD *)this + 1138); /*0x4ac7f5*/
          *((_DWORD *)this + 1135) = 0; /*0x4ac7f8*/
          return (*(_DWORD *(__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4ac80a*/
        }
      }
    }
  }
  return result; /*0x4ac7a0*/
}



// ==== 0x004AC820  TacticalClass::SetObserverMode  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::SetObserverMode(TacticalClass *this, int a2)
{
  int result; // eax
  char v4; // bl
  int (__thiscall **ptr_0)(TacticalClass *); // edx
  MapClass *v6; // [esp+0h] [ebp-8h]

  LOBYTE(result) = *((_BYTE *)this + 4530); /*0x4ac828*/
  v4 = result; /*0x4ac831*/
  if ( a2 == -1 ) /*0x4ac833*/
  {
    v4 = (_BYTE)result == 0; /*0x4ac848*/
  }
  else if ( a2 ) /*0x4ac837*/
  {
    if ( a2 == 1 ) /*0x4ac83c*/
      v4 = 1; /*0x4ac83e*/
  }
  else
  {
    v4 = 0; /*0x4ac842*/
  }
  if ( v4 != (_BYTE)result ) /*0x4ac84d*/
  {
    result = *((_DWORD *)this + 1130); /*0x4ac84f*/
    if ( !result ) /*0x4ac857*/
    {
      (*((void (__thiscall **)(TacticalClass *, _DWORD, _DWORD))this->AbstractClass + 18))(this, 0, 0); /*0x4ac861*/
      *((_BYTE *)this + 4528) = 0; /*0x4ac866*/
      *((_BYTE *)this + 4529) = 0; /*0x4ac86d*/
      *((_BYTE *)this + 4531) = 0; /*0x4ac874*/
      *((_BYTE *)this + 4532) = 0; /*0x4ac87b*/
      if ( v4 && *(int *)&dword_A83D4C[1].__pad_38[24] > 0 ) /*0x4ac892*/
      {
        *((_BYTE *)this + 4530) = 1; /*0x4ac894*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v6); /*0x4ac89b*/
      }
      else
      {
        ptr_0 = (int (__thiscall **)(TacticalClass *))this->AbstractClass; /*0x4ac8a5*/
        *((_BYTE *)this + 4530) = 0; /*0x4ac8a9*/
        return ptr_0[20](this); /*0x4ac8b0*/
      }
    }
  }
  return result; /*0x4ac8a0*/
}



// ==== 0x004AC8C0  BuildingClass::TogglePower2  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::TogglePower2(BuildingClass *this, int a2)
{
  int result; // eax
  char v4; // bl
  void *ptr_0; // eax
  int (__thiscall **v6)(BuildingClass *); // edx
  MapClass *v7; // [esp+0h] [ebp-8h]

  LOBYTE(result) = *((_BYTE *)this + 4528); /*0x4ac8c8*/
  v4 = result; /*0x4ac8d1*/
  if ( a2 == -1 ) /*0x4ac8d3*/
  {
    v4 = (_BYTE)result == 0; /*0x4ac8e8*/
  }
  else if ( a2 ) /*0x4ac8d7*/
  {
    if ( a2 == 1 ) /*0x4ac8dc*/
      v4 = 1; /*0x4ac8de*/
  }
  else
  {
    v4 = 0; /*0x4ac8e2*/
  }
  if ( v4 != (_BYTE)result ) /*0x4ac8ed*/
  {
    result = *((_DWORD *)this + 1130); /*0x4ac8ef*/
    if ( !result ) /*0x4ac8f7*/
    {
      ptr_0 = this->TechnoClass; /*0x4ac8f9*/
      *((_BYTE *)this + 4529) = 0; /*0x4ac901*/
      *((_BYTE *)this + 4530) = 0; /*0x4ac908*/
      *((_BYTE *)this + 4531) = 0; /*0x4ac90f*/
      *((_BYTE *)this + 4532) = 0; /*0x4ac916*/
      (*((void (__thiscall **)(BuildingClass *, _DWORD, _DWORD))ptr_0 + 18))(this, 0, 0); /*0x4ac91d*/
      if ( v4 && *(int *)&dword_A83D4C[1].__pad_38[24] > 0 ) /*0x4ac932*/
      {
        *((_BYTE *)this + 4528) = 1; /*0x4ac934*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x4ac93b*/
      }
      else
      {
        v6 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x4ac945*/
        *((_BYTE *)this + 4528) = 0; /*0x4ac949*/
        return v6[20](this); /*0x4ac950*/
      }
    }
  }
  return result; /*0x4ac940*/
}



// ==== 0x004AC960  MapClass::ToggleZoom  this=MapClass  sig=csp ====
int __thiscall MapClass::ToggleZoom(MapClass *this, int a2)
{
  int result; // eax
  char v4; // bl
  void *MapClass_field_0x0; // edx
  int (__thiscall **v6)(MapClass *); // eax
  MapClass *v7; // [esp+0h] [ebp-8h]

  result = a2; /*0x4ac960*/
  v4 = this->__pad_11A4[12]; /*0x4ac96b*/
  if ( a2 == -1 ) /*0x4ac971*/
  {
    v4 = v4 == 0; /*0x4ac986*/
  }
  else if ( a2 ) /*0x4ac975*/
  {
    if ( a2 == 1 ) /*0x4ac97a*/
      v4 = 1; /*0x4ac97c*/
  }
  else
  {
    v4 = 0; /*0x4ac980*/
  }
  if ( v4 != this->__pad_11A4[16] ) /*0x4ac98f*/
  {
    result = *(_DWORD *)&this->__pad_11A4[4]; /*0x4ac991*/
    if ( !result ) /*0x4ac999*/
    {
      if ( v4 && !MapClass::isCellAccessible((char *)&g_VisibilitySystem, (int)dword_A83D4C->Object_field_0x30) ) /*0x4ac9ad*/
        v4 = 0; /*0x4ac9b6*/
      MapClass_field_0x0 = this->MapClass_field_0x0; /*0x4ac9b8*/
      this->__pad_11A4[13] = 0; /*0x4ac9c0*/
      this->__pad_11A4[14] = 0; /*0x4ac9c7*/
      this->__pad_11A4[15] = 0; /*0x4ac9ce*/
      this->__pad_11A4[12] = 0; /*0x4ac9d5*/
      (*((void (__thiscall **)(MapClass *, _DWORD, _DWORD))MapClass_field_0x0 + 18))(this, 0, 0); /*0x4ac9dc*/
      if ( v4 ) /*0x4ac9e1*/
      {
        this->__pad_11A4[16] = 1; /*0x4ac9e3*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x4ac9ea*/
      }
      else
      {
        v6 = (int (__thiscall **)(MapClass *))this->MapClass_field_0x0; /*0x4ac9f4*/
        this->__pad_11A4[16] = 0; /*0x4ac9f8*/
        return v6[20](this); /*0x4ac9ff*/
      }
    }
  }
  return result; /*0x4ac9ef*/
}



// ==== 0x004ACA10  ObjectPlacement::CalcPosition_Wrapper  this=ObjectPlacement  sig=csp ====
int *__stdcall ObjectPlacement_CalcPosition_Wrapper(int *a1, _DWORD *a2, char a3)
{
  _DWORD *v3; // eax
  char v4; // cl
  int *v5; // edx
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v3 = Coord::To_Cell(&dword_87F7E8, a2); /*0x4aca1e*/
  v4 = (v3[80] & 0x100) != 0 && a2[2] >= dword_8A0740 * (*((char *)v3 + 283) + 4); /*0x4aca46*/
  v5 = ObjectPlacement::CalcPosition(v3, v7, a2, a3, v4, 0); /*0x4aca64*/
  *a1 = *v5; /*0x4aca6e*/
  a1[1] = v5[1]; /*0x4aca73*/
  a1[2] = v5[2]; /*0x4aca7a*/
  return a1; /*0x4aca76*/
}



// ==== 0x004ACAC0  MapClass::ProcessVisibilityFlags  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessVisibilityFlags(MapClass *this)
{
  int i; // ebp
  int j; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int k; // ebp
  int m; // edi
  _DWORD *v8; // eax
  __int16 v10; // [esp+10h] [ebp-8h] BYREF
  __int16 v11; // [esp+12h] [ebp-6h]
  __int16 v12[2]; // [esp+14h] [ebp-4h] BYREF

  for ( i = 0; i < 512; ++i ) /*0x4acac9*/
  {
    for ( j = 0; j < 512; ++j ) /*0x4acad0*/
    {
      v10 = j; /*0x4acad9*/
      v11 = i; /*0x4acade*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)this, &v10) ) /*0x4acae3*/
      {
        v12[0] = j; /*0x4acaf0*/
        v12[1] = i; /*0x4acaf8*/
        v4 = CellCoord::To_CellObj((CellCoord *)this, v12); /*0x4acafd*/
        v5 = v4[75]; /*0x4acb02*/
        if ( (v5 & 0x10) == 0 && (v5 & 8) != 0 ) /*0x4acb10*/
          v4[80] |= 0x20u; /*0x4acb12*/
      }
    }
  }
  for ( k = 0; k < 512; ++k ) /*0x4acb2a*/
  {
    for ( m = 0; m < 512; ++m ) /*0x4acb2c*/
    {
      v10 = m; /*0x4acb35*/
      v11 = k; /*0x4acb3a*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)this, &v10) /*0x4acb5a*/
        && (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)this, &v10) + 320) & 0x20) != 0 )
      {
        v8 = CellCoord::To_CellObj((CellCoord *)this, &v10); /*0x4acb63*/
        v8[80] &= ~0x20u; /*0x4acb7a*/
        MapClass::RevealCell(this, &v10); /*0x4acb7f*/
      }
    }
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x4acb9c*/
  return (*((int (__thiscall **)(MapClass *, int))this->MapClass_field_0x0 + 14))(this, 1); /*0x4acbaa*/
}



// ==== 0x004ACBC0  MapClass::ProcessFogTransition  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessFogTransition(MapClass *this)
{
  int i; // eax
  int v3; // ecx
  int result; // eax
  __int16 v5[2]; // [esp+4h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4acbc4*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x4acbd2*/
  {
    v3 = *(_DWORD *)(i + 320); /*0x4acbd4*/
    if ( (v3 & 1) == 0 && (v3 & 2) != 0 ) /*0x4acbe2*/
      *(_DWORD *)(i + 320) = v3 | 0x40; /*0x4acbe7*/
  }
  HouseClass::RevealShroudForAllies(0, 1); /*0x4acbfe*/
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4acc05*/
  for ( result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x4acc13*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    if ( (*(_BYTE *)(result + 320) & 0x40) != 0 ) /*0x4acc1c*/
    {
      *(_DWORD *)(result + 320) &= ~0x40u; /*0x4acc27*/
      *(_DWORD *)v5 = *(_DWORD *)(result + 36); /*0x4acc34*/
      CellClass::ProcessVisibility((CellClass *)this, v5); /*0x4acc3b*/
    }
  }
  return result; /*0x4acc4b*/
}



// ==== 0x004ACC50  CellClass::ProcessVisibility  this=CellClass  sig=csp ====
char __thiscall CellClass::ProcessVisibility(CellClass *this, __int16 *a2)
{
  char result; // al
  CellClass *v5; // ecx
  int v6; // eax
  int i; // ebp
  int v8; // eax
  _DWORD *v9; // esi
  int AdjacentPassableMask; // eax
  int v11; // ecx
  int v12; // [esp+8h] [ebp-10h]
  __int16 v13[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h] BYREF
  CellClass *v15; // [esp+14h] [ebp-4h]
  bool v16; // [esp+1Ch] [ebp+4h]

  result = LayerClass::CoordinatesLegal((LayerClass *)this, a2); /*0x4acc5c*/
  if ( result ) /*0x4acc63*/
  {
    v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, a2); /*0x4acc71*/
    v15 = v5; /*0x4acc78*/
    v6 = v5->flags[0]; /*0x4acc7c*/
    v16 = (v6 & 3) != 0; /*0x4acc86*/
    LOBYTE(v6) = v6 & 0xFC; /*0x4acc8b*/
    v5->foggedness = -2; /*0x4acc8d*/
    v5->flags[0] = v6; /*0x4acc94*/
    if ( (v5->copyFlags & 8) != 0 ) /*0x4acca2*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4accab*/
    for ( i = 0; i < 8; ++i ) /*0x4accb2*/
    {
      v8 = i & 7; /*0x4accb9*/
      LOWORD(v12) = LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]) + *a2; /*0x4accd7*/
      HIWORD(v12) = a2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x4acce0*/
      *(_DWORD *)v13 = v12; /*0x4accec*/
      v9 = CellCoord::To_CellObj((CellCoord *)this, v13); /*0x4accfb*/
      v14 = v9[9]; /*0x4acd07*/
      AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&v14, 1); /*0x4acd0b*/
      if ( AdjacentPassableMask != -2 || *((_BYTE *)v9 + 289) == 0xFE ) /*0x4acd1b*/
      {
        v11 = v9[80]; /*0x4acd2b*/
        if ( ((v11 & 1) != 0 || AdjacentPassableMask != *((char *)v9 + 289)) /*0x4acd4c*/
          && AdjacentPassableMask >= 0
          && *((char *)v9 + 289) >= -1 )
        {
          *((_BYTE *)v9 + 289) = AdjacentPassableMask; /*0x4acd51*/
          v9[80] = v11 & 0xFFFFFFFC | 2; /*0x4acd5b*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v9); /*0x4acd67*/
        }
      }
      else
      {
        CellClass::ProcessVisibility(this, v13); /*0x4acd24*/
      }
    }
    result = v16; /*0x4acd76*/
    if ( v16 ) /*0x4acd7e*/
      return CellClass::CreateFoggedObjects(v15); /*0x4acd84*/
  }
  return result; /*0x4acd89*/
}



// ==== 0x004ACDA0  MapClass::RevealCell  this=MapClass  sig=csp ====
char __thiscall MapClass::RevealCell(MapClass *this, __int16 *a2)
{
  __int16 *v2; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  int i; // edi
  int v7; // eax
  __int16 *v9; // [esp+8h] [ebp-4h]

  v2 = a2; /*0x4acda3*/
  LOBYTE(v4) = LayerClass::CoordinatesLegal((LayerClass *)this, a2); /*0x4acdaa*/
  if ( (_BYTE)v4 ) /*0x4acdb1*/
  {
    v4 = CellCoord::To_CellObj((CellCoord *)this, v2); /*0x4acdba*/
    v5 = v4[75]; /*0x4acdbf*/
    if ( (v5 & 8) != 0 ) /*0x4acdc8*/
    {
      v4[75] = v5 & 0xFFFFFFE7; /*0x4acdd2*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v4); /*0x4acddf*/
      for ( i = 0; i < 8; ++i ) /*0x4acde4*/
      {
        v7 = i & 7; /*0x4acde8*/
        LOWORD(v9) = *v2 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4ace09*/
        HIWORD(v9) = v2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4ace12*/
        a2 = v9; /*0x4ace1e*/
        v4 = CellCoord::To_CellObj((CellCoord *)this, (__int16 *)&a2); /*0x4ace22*/
        if ( a2 != *(__int16 **)v2 ) /*0x4ace2f*/
        {
          v4[75] &= ~0x10u; /*0x4ace46*/
          LOBYTE(v4) = Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v4); /*0x4ace52*/
        }
      }
    }
  }
  return (char)v4; /*0x4ace5e*/
}



// ==== 0x004ACE70  DisplayClass::LoadMapData  this=DisplayClass  sig=csp ====
void __thiscall ScenarioClass::LoadMapData(DisplayClass *this, unsigned __int8 ***a2)
{
  unsigned int *v3; // eax
  void (__thiscall **DisplayClass_field_0x0)(DisplayClass *); // edx
  char v5; // bl
  int i; // esi
  int v7; // eax
  char v8; // cl
  int referenceCount; // esi
  int uniqueId; // ecx
  int abstractFlags; // edx
  int nextArrayIndex; // eax
  TeamClass *v13; // eax
  unsigned __int8 *StringByIndex; // esi
  int v15; // ecx
  TeamClass *v16; // esi
  ScenarioClass *v17; // eax
  int v18; // esi
  ObjectClass *v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  size_t v24; // esi
  void *Buffer; // ebp
  int Base64Data; // ebp
  void *v27; // ebp
  int v28; // ebp
  void *v29; // ebp
  int v30; // ebp
  void *v31; // ebp
  int v32; // ebp
  void *v33; // ebp
  int v34; // esi
  void *v35; // ebp
  int *v36; // esi
  unsigned int *v37; // eax
  BuildingTypeClass *v38; // [esp+Ch] [ebp-134h]
  BSurface v39; // [esp+1Ch] [ebp-124h] BYREF
  int KeyCount; // [esp+3Ch] [ebp-104h] BYREF
  int j; // [esp+40h] [ebp-100h]
  __int16 v42[2]; // [esp+44h] [ebp-FCh] BYREF
  TeamClass *Int_Overwrite; // [esp+48h] [ebp-F8h]
  Straw v44; // [esp+4Ch] [ebp-F4h] BYREF
  int v45; // [esp+54h] [ebp-ECh]
  Buffer v46; // [esp+58h] [ebp-E8h] BYREF
  unsigned int v47[4]; // [esp+80h] [ebp-C0h] BYREF
  _DWORD v48[4]; // [esp+90h] [ebp-B0h] BYREF
  char Destination[32]; // [esp+A0h] [ebp-A0h] BYREF
  char Source[128]; // [esp+C0h] [ebp-80h] BYREF

  v46.Buffer_field_18 = (int)this; /*0x4ace85*/
  INIClass::ResetSection((INIClass *)a2); /*0x4ace89*/
  v47[2] = 50; /*0x4ace97*/
  v47[3] = 50; /*0x4ace9b*/
  v47[0] = 1; /*0x4aceb9*/
  v47[1] = 1; /*0x4acec0*/
  v3 = INIClass::ParseValue( /*0x4acec7*/
         (INIClass *)a2,
         (unsigned int *)&v44,
         &off_81FFF0,
         (unsigned __int8 *)g_Str_EVA_CannotDeployHere.Type,
         v47);
  v48[0] = *v3; /*0x4acece*/
  v48[1] = v3[1]; /*0x4aced8*/
  v48[2] = v3[2]; /*0x4acee4*/
  DisplayClass_field_0x0 = (void (__thiscall **)(DisplayClass *))this->DisplayClass_field_0x0; /*0x4aceeb*/
  v48[3] = v3[3]; /*0x4acef1*/
  DisplayClass_field_0x0[24](this); /*0x4acef8*/
  v5 = 0; /*0x4acefe*/
  (*((void (__thiscall **)(DisplayClass *, _DWORD *, int, _DWORD, int))this->DisplayClass_field_0x0 + 28))( /*0x4acf0d*/
    this,
    v48,
    1,
    0,
    1);
  Int_Overwrite = (TeamClass *)INIClass::ReadInt_Overwrite( /*0x4acf28*/
                                 (bool *)a2,
                                 &off_81FFF0,
                                 (unsigned __int8 *)&stru_81AF8C.?[17],
                                 0);
  *(_DWORD *)v42 = dword_AA10B0; /*0x4acf47*/
  j = 0; /*0x4acf4b*/
  INIClass::GetString( /*0x4acf4f*/
    (INIClass *)a2,
    &off_81FFF0,
    (unsigned __int8 *)&g_Str_EVA_CannotDeployHere.AlliedVoice[6],
    g_INI_Key_Clear,
    Destination,
    32);
  if ( !_strcmpi(Destination, g_INI_Key_Water) ) /*0x4acf61*/
  {
    j = 3; /*0x4acf73*/
    *(_DWORD *)v42 = g_CellPassabilityLUT; /*0x4acf7b*/
  }
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4acf81*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x4acf91*/
  {
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, j); /*0x4acfa5*/
    v8 = (_BYTE)Int_Overwrite + *(_BYTE *)(i + 283); /*0x4acfba*/
    *(_DWORD *)(i + 56) = *(_DWORD *)v42 + v7; /*0x4acfbc*/
    *(_BYTE *)(i + 283) = v8; /*0x4acfbf*/
    *(_BYTE *)(i + 282) = 0; /*0x4acfc7*/
  }
  dword_A8B230[130].uniqueId = ScenarioClass::ReadAndParseString( /*0x4acff0*/
                                 (ScenarioClass *)a2,
                                 &off_81FFF0,
                                 (unsigned __int8 *)g_INI_Key_Theater,
                                 0);
  (*((void (__thiscall **)(DisplayClass *, int))this->DisplayClass_field_0x0 + 6))(this, dword_A8B230[130].uniqueId); /*0x4ad007*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 63); /*0x4ad011*/
  Event::Dispatch(); /*0x4ad016*/
  referenceCount = dword_A8B230[14].referenceCount; /*0x4ad026*/
  LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x4ad02c*/
  uniqueId = dword_A8B230[130].uniqueId; /*0x4ad03c*/
  if ( uniqueId == dword_822CF8 ) /*0x4ad044*/
    ResetAllTechnoField776(); /*0x4ad04f*/
  else
    LoadTerrainTypeClassTheatre(uniqueId, 1); /*0x4ad048*/
  dword_A8B230[14].referenceCount = referenceCount + 10000; /*0x4ad05f*/
  LoadBuildingTypeClassSHPs(dword_A8B230[130].uniqueId); /*0x4ad071*/
  BuildingTypeClass::LoadRepairAnimations(v38); /*0x4ad082*/
  LoadBuildingTypeClassTheatreSHP(dword_A8B230[130].uniqueId); /*0x4ad092*/
  LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x4ad0a3*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 65); /*0x4ad0af*/
  Event::Dispatch(); /*0x4ad0b4*/
  ScenarioClass::ReadWaypoints((ScenarioClass *)dword_A8B230, (int)a2); /*0x4ad0c0*/
  if ( !(unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, dword_A8B230[14].abstractFlags) ) /*0x4ad0d2*/
  {
    abstractFlags = dword_A8B230[14].abstractFlags; /*0x4ad0f2*/
    LOWORD(j) = (*(_DWORD *)&this->__pad_34[192] + *(_DWORD *)&this->__pad_34[196]) / 2; /*0x4ad0fa*/
    HIWORD(j) = j; /*0x4ad0ff*/
    ScenarioClass::Set_Waypoint((char *)dword_A8B230, abstractFlags, j); /*0x4ad10a*/
  }
  if ( LOBYTE(dword_A8B230[204].ptr_0) ) /*0x4ad115*/
    nextArrayIndex = dword_A8B230[14].nextArrayIndex; /*0x4ad11d*/
  else
    nextArrayIndex = dword_A8B230[14].abstractFlags; /*0x4ad125*/
  v13 = (TeamClass *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &KeyCount, nextArrayIndex); /*0x4ad13c*/
  Int_Overwrite = v13; /*0x4ad13e*/
  *(void **)((char *)&dword_A8B230[374].ptr_0 + 2) = v13; /*0x4ad142*/
  *(void **)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = *(void **)((char *)&dword_A8B230[374].ptr_0 + 2); /*0x4ad157*/
  *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2); /*0x4ad171*/
  *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = *(int *)((char *)&dword_A8B230[373].referenceCount + 2); /*0x4ad183*/
  v46.Buffer_field_20 = (SHIWORD(Int_Overwrite) << 8) + 128; /*0x4ad19c*/
  v46.Buffer_field_1C = ((__int16)v13 << 8) + 128; /*0x4ad1a6*/
  v46.Buffer_field_24 = 0; /*0x4ad1aa*/
  Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, &v46.Buffer_field_1C); /*0x4ad1ae*/
  KeyCount = INIClass::GetKeyCount((char *)a2, g_INI_Key_CellTags); /*0x4ad1c1*/
  for ( j = 0; j < KeyCount; ++j ) /*0x4ad1c9*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex((char *)a2, g_INI_Key_CellTags, j); /*0x4ad1ec*/
    if ( INIClass::GetString((INIClass *)a2, g_INI_Key_CellTags, StringByIndex, &g_INI_DefaultBuffer, Source, 128) ) /*0x4ad1fc*/
      Int_Overwrite = (TeamClass *)TagTypeClass::FindOrCreate(Source); /*0x4ad211*/
    else
      Int_Overwrite = 0; /*0x4ad217*/
    v15 = atoi((const char *)StringByIndex); /*0x4ad221*/
    if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x4ad22e*/
    {
      LOWORD(v46.Buffer_field_10) = v15 % 128; /*0x4ad270*/
      HIWORD(v46.Buffer_field_10) = v15 / 128; /*0x4ad27e*/
      *(_DWORD *)v42 = v46.Buffer_field_10; /*0x4ad287*/
    }
    else
    {
      LOWORD(v46.Buffer_field_14) = v15 % 1000; /*0x4ad23f*/
      HIWORD(v46.Buffer_field_14) = v15 / 1000; /*0x4ad250*/
      *(_DWORD *)v42 = v46.Buffer_field_14; /*0x4ad259*/
    }
    v16 = Int_Overwrite; /*0x4ad28b*/
    if ( Int_Overwrite ) /*0x4ad291*/
    {
      if ( !*((_DWORD *)CellCoord::To_CellObj((CellCoord *)this, v42) + 15) ) /*0x4ad2a3*/
      {
        v17 = (ScenarioClass *)TeamClass::FindOrCreate(v16); /*0x4ad2aa*/
        v18 = (int)v17; /*0x4ad2af*/
        if ( v17 ) /*0x4ad2b3*/
        {
          ScenarioClass::checkMissionObjectives(v17, *(int *)v42); /*0x4ad2bc*/
          v19 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)this, v42); /*0x4ad2c9*/
          ObjectClass::SetTriggerTarget(v19, v18); /*0x4ad2d0*/
          v20 = *(_DWORD *)&this->__pad_41E[3398]; /*0x4ad2d5*/
          if ( *(_DWORD *)&this->__pad_41E[3406] < v20 /*0x4ad303*/
            || (this->__pad_41E[3403] || !v20)
            && (v21 = *(_DWORD *)&this->__pad_41E[3410], v21 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_41E[3390] + 8))(
                 &this->__pad_41E[3390],
                 v21 + v20,
                 0) )
          {
            v22 = *(_DWORD *)&this->__pad_41E[3406]; /*0x4ad30a*/
            v23 = *(_DWORD *)&this->__pad_41E[3394]; /*0x4ad30d*/
            *(_DWORD *)&this->__pad_41E[3406] = v22 + 1; /*0x4ad313*/
            *(_DWORD *)(v23 + 4 * v22) = *(_DWORD *)v42; /*0x4ad31a*/
          }
        }
      }
    }
  }
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 67); /*0x4ad339*/
  Event::Dispatch(); /*0x4ad33e*/
  Surface::Construct((Surface *)&v39, 640, 400); /*0x4ad351*/
  v39.? = 0; /*0x4ad360*/
  *(_DWORD *)v39.XSurface = &XSurface_Vtable; /*0x4ad364*/
  v39.BytesPerPixel = 2; /*0x4ad36c*/
  Buffer::Init((Buffer *)&v39.Buffer, 0, 512000); /*0x4ad374*/
  v24 = v39.? * v39.BytesPerPixel * v39.?; /*0x4ad386*/
  Buffer = v39.Buffer; /*0x4ad38b*/
  ++v39.?; /*0x4ad390*/
  *(_DWORD *)v39.XSurface = &BSurface_Vtable; /*0x4ad398*/
  BSurface::GetBytesPerPixel(&v39); /*0x4ad3a0*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad3ae*/
  Base64Data = INIClass::GetBase64Data((INIClass *)a2, aIsomappack, (int)Buffer, v24); /*0x4ad3c0*/
  if ( Base64Data > 0 ) /*0x4ad3c4*/
  {
    ++v39.?; /*0x4ad3cf*/
    KeyCount = (int)v39.Buffer; /*0x4ad3d7*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad3df*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad3ea*/
    v44.Straw_field_0x04 = 0; /*0x4ad3f7*/
    v45 = 0; /*0x4ad3fb*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad3ff*/
    Buffer::Init(&v46, KeyCount, Base64Data); /*0x4ad407*/
    v46.Buffer_field_0C = 0; /*0x4ad416*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad41a*/
    CellClass::LoadTerrainTiles((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad422*/
    --v39.?; /*0x4ad430*/
    Vector::Clear((int)&v46); /*0x4ad434*/
    Straw::Dtor(&v44); /*0x4ad43d*/
  }
  v27 = v39.Buffer; /*0x4ad446*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad456*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad461*/
  v28 = INIClass::GetBase64Data((INIClass *)a2, aIsomappack2, (int)v27, v24); /*0x4ad473*/
  if ( v28 > 0 ) /*0x4ad477*/
  {
    ++v39.?; /*0x4ad482*/
    KeyCount = (int)v39.Buffer; /*0x4ad48a*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad492*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad49d*/
    v44.Straw_field_0x04 = 0; /*0x4ad4aa*/
    v45 = 0; /*0x4ad4ae*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad4b2*/
    Buffer::Init(&v46, KeyCount, v28); /*0x4ad4ba*/
    v46.Buffer_field_0C = 0; /*0x4ad4c9*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad4cd*/
    CellClass::CreateOverlay((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad4d5*/
    --v39.?; /*0x4ad4e3*/
    Vector::Clear((int)&v46); /*0x4ad4e7*/
    Straw::Dtor(&v44); /*0x4ad4f0*/
  }
  v29 = v39.Buffer; /*0x4ad4f9*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad509*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad514*/
  v30 = INIClass::GetBase64Data((INIClass *)a2, aIsomappack3, (int)v29, v24); /*0x4ad526*/
  if ( v30 > 0 ) /*0x4ad52a*/
  {
    ++v39.?; /*0x4ad535*/
    KeyCount = (int)v39.Buffer; /*0x4ad53d*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad545*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad550*/
    v44.Straw_field_0x04 = 0; /*0x4ad55d*/
    v45 = 0; /*0x4ad561*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad565*/
    Buffer::Init(&v46, KeyCount, v30); /*0x4ad56d*/
    v46.Buffer_field_0C = 0; /*0x4ad57c*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad580*/
    CellClass::DecompressRawCellData((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad588*/
    --v39.?; /*0x4ad596*/
    Vector::Clear((int)&v46); /*0x4ad59a*/
    Straw::Dtor(&v44); /*0x4ad5a3*/
  }
  v31 = v39.Buffer; /*0x4ad5ac*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad5bc*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad5c7*/
  v32 = INIClass::GetBase64Data((INIClass *)a2, aIsomappack4, (int)v31, v24); /*0x4ad5d9*/
  if ( v32 > 0 ) /*0x4ad5dd*/
  {
    ++v39.?; /*0x4ad5e8*/
    KeyCount = (int)v39.Buffer; /*0x4ad5f0*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad5f8*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad603*/
    v44.Straw_field_0x04 = 0; /*0x4ad610*/
    v45 = 0; /*0x4ad614*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad618*/
    Buffer::Init(&v46, KeyCount, v32); /*0x4ad620*/
    v46.Buffer_field_0C = 0; /*0x4ad62f*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad633*/
    CellClass::DecompressTerrainDataSimple((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad63b*/
    --v39.?; /*0x4ad649*/
    Vector::Clear((int)&v46); /*0x4ad64d*/
    Straw::Dtor(&v44); /*0x4ad656*/
  }
  v33 = v39.Buffer; /*0x4ad65f*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad66f*/
  (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad67a*/
  v34 = INIClass::GetBase64Data((INIClass *)a2, aIsomappack5, (int)v33, v24); /*0x4ad68c*/
  if ( v34 > 0 ) /*0x4ad690*/
  {
    v35 = v39.Buffer; /*0x4ad69a*/
    ++v39.?; /*0x4ad69f*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 112))(&v39); /*0x4ad6a7*/
    (*(void (__thiscall **)(BSurface *))(*(_DWORD *)v39.XSurface + 116))(&v39); /*0x4ad6b2*/
    v44.Straw_field_0x04 = 0; /*0x4ad6bb*/
    v45 = 0; /*0x4ad6bf*/
    *(_DWORD *)v44.__pad_0 = &Straw::`vftable'; /*0x4ad6c3*/
    Buffer::Init(&v46, (int)v35, v34); /*0x4ad6cb*/
    v46.Buffer_field_0C = 0; /*0x4ad6d4*/
    *(_DWORD *)v44.__pad_0 = &BufferStraw::`vftable'; /*0x4ad6de*/
    CellClass::DecompressTerrainData((CellClass *)&stru_87F5F0.__pad_58[416], (int)&v44); /*0x4ad6e6*/
    --v39.?; /*0x4ad6f4*/
    Vector::Clear((int)&v46); /*0x4ad6f8*/
    Straw::Dtor(&v44); /*0x4ad701*/
  }
  --v39.?; /*0x4ad712*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 68); /*0x4ad716*/
  Event::Dispatch(); /*0x4ad71b*/
  if ( stru_A8EB00.?[391] || stru_A8EB00.?[377] ) /*0x4ad72e*/
    v5 = 1; /*0x4ad730*/
  LoadMapClassIsometricTiles(v5, BYTE1(dword_A8B230[375].ptr_0)); /*0x4ad743*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 69); /*0x4ad74f*/
  Event::Dispatch(); /*0x4ad754*/
  v36 = (int *)(v46.Buffer_field_18 + 252); /*0x4ad75f*/
  v37 = INIClass::ParseValue( /*0x4ad77a*/
          (INIClass *)a2,
          (unsigned int *)&v44,
          &off_81FFF0,
          (unsigned __int8 *)&g_Str_EVA_CannotDeployHere.RussianVoice[3],
          (unsigned int *)(v46.Buffer_field_18 + 236));
  *v36 = *v37; /*0x4ad784*/
  v36[1] = v37[1]; /*0x4ad789*/
  v36[2] = v37[2]; /*0x4ad78f*/
  v36[3] = v37[3]; /*0x4ad795*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], v36); /*0x4ad79d*/
  ScenarioClass::CalcMinShroudLevel((ScenarioClass *)&stru_87F5F0.__pad_58[416]); /*0x4ad7a7*/
  dword_822CF8 = dword_A8B230[130].uniqueId; /*0x4ad7bc*/
  Vector::Clear((int)&v39.Buffer); /*0x4ad7c2*/
}



// ==== 0x004AD7E0  MapClass::SaveCellTagsToINI  this=MapClass  sig=csp ====
int __thiscall MapClass::SaveCellTagsToINI(MapClass *this, char *a2)
{
  __int16 v3; // bp
  CellCoord *v4; // ebx
  int j; // edi
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // eax
  signed int v11; // edi
  int v12; // eax
  __int16 v14[2]; // [esp+10h] [ebp-3Ch] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-38h] BYREF
  MapClass *v16; // [esp+18h] [ebp-34h]
  CHAR v17[20]; // [esp+1Ch] [ebp-30h] BYREF
  Pipe v18; // [esp+30h] [ebp-1Ch] BYREF
  int v19; // [esp+48h] [ebp-4h]
  char *i; // [esp+50h] [ebp+4h]

  v3 = 0; /*0x4ad7ef*/
  v4 = (CellCoord *)this; /*0x4ad7f2*/
  v16 = this; /*0x4ad7f8*/
  INIClass::ClearSection((int *)a2, (int)&off_81FFF0, 0); /*0x4ad7fc*/
  MapClass::loadTheaterINI(a2, &off_81FFF0, g_INI_Key_Theater, dword_A8B230[130].uniqueId); /*0x4ad81b*/
  INIClass::SetRect(a2, &off_81FFF0, (char *)g_Str_EVA_CannotDeployHere.Type, &v4[59]); /*0x4ad835*/
  INIClass::SetRect(a2, &off_81FFF0, &g_Str_EVA_CannotDeployHere.RussianVoice[3], &v4[63]); /*0x4ad84f*/
  ScenarioClass::Write_Waypoints((ScenarioClass *)dword_A8B230, a2); /*0x4ad85b*/
  INIClass::ClearSection((int *)a2, (int)g_INI_Key_CellTags, 0); /*0x4ad86a*/
  for ( i = 0; (int)i < 512000; i += 1000 ) /*0x4ad86f*/
  {
    for ( j = 0; j < 512; ++j ) /*0x4ad873*/
    {
      v14[0] = j; /*0x4ad87c*/
      v14[1] = v3; /*0x4ad881*/
      if ( *((_DWORD *)CellCoord::To_CellObj(v4, v14) + 15) ) /*0x4ad88b*/
      {
        v15[0] = j; /*0x4ad896*/
        v15[1] = v3; /*0x4ad89e*/
        v6 = *((_DWORD *)CellCoord::To_CellObj(v4, v15) + 15); /*0x4ad8a8*/
        if ( v6 && *(_DWORD *)(v6 + 36) ) /*0x4ad8af*/
        {
          wsprintfA(v17, "%d", &i[j]); /*0x4ad8c7*/
          INIClass::SetString(a2, g_INI_Key_CellTags, v17, (char *)(*(_DWORD *)(v6 + 36) + 36)); /*0x4ad8e4*/
        }
        v4 = (CellCoord *)v16; /*0x4ad8e9*/
      }
    }
    ++v3; /*0x4ad8fe*/
  }
  v7 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 32))(DSurface_Alternate); /*0x4ad92b*/
  v8 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 31))(DSurface_Alternate) * v7; /*0x4ad932*/
  v9 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 28))(DSurface_Alternate) * v8; /*0x4ad940*/
  v10 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x4ad94d*/
          DSurface_Alternate,
          0,
          0);
  v18.Pipe_field_0x04 = 0; /*0x4ad956*/
  v18.Pipe_field_0x08 = 0; /*0x4ad95a*/
  *(_DWORD *)v18.__pad_0 = &Pipe::`vftable'; /*0x4ad95e*/
  Buffer::Init((Buffer *)&v18.Pipe_field_0x0C, v10, v9); /*0x4ad966*/
  v19 = 0; /*0x4ad96f*/
  *(_DWORD *)v18.__pad_0 = &BufferPipe::`vftable'; /*0x4ad979*/
  v11 = MapClass::DecompressCellData((MapClass *)&stru_87F5F0.__pad_58[416], (int)&v18); /*0x4ad990*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack, 0); /*0x4ad992*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack2, 0); /*0x4ad9a0*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack3, 0); /*0x4ad9af*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack4, 0); /*0x4ad9be*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack5, 0); /*0x4ad9cc*/
  if ( v11 > 0 ) /*0x4ad9d3*/
  {
    v12 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x4ad9e2*/
            DSurface_Alternate,
            0,
            0);
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)aIsomappack5, v12, v11); /*0x4ad9ee*/
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x4ad9fb*/
  }
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x4ada06*/
  Vector::Clear((int)&v18.Pipe_field_0x0C); /*0x4ada0d*/
  return Pipe::Dtor(&v18); /*0x4ada1b*/
}



// ==== 0x004ADA30  ScenarioClass::GetScenarioData  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::GetScenarioData(ScenarioClass *this, _DWORD *a2, int a3)
{
  int *v4; // esi
  int v5; // edi
  int v6; // ebp
  int *v7; // ebp
  char *v8; // esi
  int v9; // edi
  int i; // eax
  _BYTE *v11; // esi
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+18h] [ebp-8h] BYREF
  int v19; // [esp+1Ch] [ebp-4h] BYREF

  *a2 = dword_A8B230[130].uniqueId; /*0x4ada48*/
  a2[1] = this->nextScenario[59]; /*0x4ada5a*/
  a2[2] = this->nextScenario[60]; /*0x4ada5f*/
  a2[3] = this->nextScenario[61]; /*0x4ada65*/
  a2[4] = this->nextScenario[62]; /*0x4ada70*/
  v4 = a2 + 10; /*0x4ada7d*/
  v5 = 0; /*0x4ada82*/
  a2[5] = this->nextScenario[63]; /*0x4ada84*/
  v17 = 0; /*0x4ada86*/
  a2[6] = this->nextScenario[64]; /*0x4ada8d*/
  a2[7] = this->altNextScenario[0]; /*0x4ada93*/
  a2[8] = this->altNextScenario[1]; /*0x4ada99*/
  do /*0x4adafc*/
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v5) ) /*0x4adaa3*/
    {
      *v4 = v5; /*0x4adab1*/
      v6 = 125 * *((__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v18, v5) + 1); /*0x4adad8*/
      v4 += 2; /*0x4adae3*/
      *(v4 - 1) = *(__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, v5) + 8 * v6; /*0x4adaed*/
      ++v17; /*0x4adaf1*/
    }
    ++v5; /*0x4adaf5*/
  }
  while ( v5 < 702 ); /*0x4adafc*/
  v7 = v4; /*0x4adb06*/
  a2[9] = v17; /*0x4adb0a*/
  v8 = (char *)(v4 + 1); /*0x4adb0c*/
  v9 = 0; /*0x4adb0f*/
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4adb11*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x4adb1f*/
  {
    *(_DWORD *)v8 = *(_DWORD *)(i + 36); /*0x4adb24*/
    v11 = v8 + 4; /*0x4adb29*/
    *(_DWORD *)v11 = *(_DWORD *)(i + 56); /*0x4adb2c*/
    v11 += 4; /*0x4adb34*/
    *v11++ = *(_BYTE *)(i + 282); /*0x4adb37*/
    *v11++ = *(_BYTE *)(i + 283); /*0x4adb40*/
    *v11++ = *(_BYTE *)(i + 284); /*0x4adb49*/
    *(_DWORD *)v11 = *(_DWORD *)(i + 68); /*0x4adb4f*/
    v11 += 4; /*0x4adb57*/
    *v11++ = *(_BYTE *)(i + 286); /*0x4adb5a*/
    v12 = 0; /*0x4adb63*/
    *v11 = *(_BYTE *)(i + 281); /*0x4adb65*/
    v13 = *(_DWORD *)(i + 60); /*0x4adb67*/
    v14 = v11 + 1; /*0x4adb6a*/
    if ( v13 ) /*0x4adb6d*/
    {
      v15 = *(_DWORD *)(v13 + 36); /*0x4adb6f*/
      if ( v15 ) /*0x4adb74*/
        v12 = v15; /*0x4adb76*/
    }
    *v14 = v12; /*0x4adb78*/
    v8 = (char *)(v14 + 1); /*0x4adb7a*/
    ++v9; /*0x4adb7f*/
  }
  *v7 = v9; /*0x4adb8d*/
  return v8 - (char *)a2; /*0x4adb92*/
}



// ==== 0x004ADBA0  ScenarioClass::ProcessGame  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::ProcessGame(ScenarioClass *this, _DWORD *a2)
{
  int *v3; // ecx
  int *v4; // esi
  int v5; // ebx
  int v6; // ecx
  int *v7; // esi
  int result; // eax
  int v9; // edx
  char *v10; // esi
  char v11; // cl
  char v12; // cl
  int v13; // edx
  char v14; // cl
  int v15; // [esp+8h] [ebp-4h]
  _DWORD *v16; // [esp+10h] [ebp+4h]

  dword_A8B230[130].uniqueId = *a2; /*0x4adbba*/
  this->nextScenario[59] = a2[1]; /*0x4adbc7*/
  this->nextScenario[60] = a2[2]; /*0x4adbcc*/
  this->nextScenario[61] = a2[3]; /*0x4adbd2*/
  v3 = &this->nextScenario[63]; /*0x4adbd5*/
  this->nextScenario[62] = a2[4]; /*0x4adbde*/
  v4 = a2 + 10; /*0x4adbe8*/
  *v3 = a2[5]; /*0x4adbeb*/
  v3[1] = a2[6]; /*0x4adbf0*/
  v3[2] = a2[7]; /*0x4adbf6*/
  v3[3] = a2[8]; /*0x4adbfc*/
  if ( (int)a2[9] > 0 ) /*0x4adc04*/
  {
    v15 = a2[9]; /*0x4adc08*/
    do /*0x4adc56*/
    {
      v5 = *v4; /*0x4adc0c*/
      v6 = v4[1]; /*0x4adc0e*/
      v4 += 2; /*0x4adc1c*/
      LOWORD(v16) = v6 % 1000; /*0x4adc26*/
      HIWORD(v16) = v6 / 1000; /*0x4adc37*/
      ScenarioClass::Set_Waypoint((char *)dword_A8B230, v5, (int)v16); /*0x4adc48*/
      --v15; /*0x4adc52*/
    }
    while ( v15 ); /*0x4adc56*/
  }
  v7 = v4 + 1; /*0x4adc5c*/
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x4adc5f*/
  for ( result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x4adc6d*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    v9 = v7[1]; /*0x4adc6f*/
    v10 = (char *)(v7 + 2); /*0x4adc75*/
    *(_DWORD *)(result + 56) = v9; /*0x4adc78*/
    v11 = *v10++; /*0x4adc7b*/
    *(_BYTE *)(result + 282) = v11; /*0x4adc7e*/
    LOBYTE(v9) = *v10++; /*0x4adc84*/
    *(_BYTE *)(result + 283) = v9; /*0x4adc87*/
    v12 = *v10++; /*0x4adc8d*/
    *(_BYTE *)(result + 284) = v12; /*0x4adc90*/
    v13 = *(_DWORD *)v10; /*0x4adc96*/
    v10 += 4; /*0x4adc98*/
    *(_DWORD *)(result + 68) = v13; /*0x4adc9b*/
    v14 = *v10++; /*0x4adc9e*/
    *(_BYTE *)(result + 286) = v14; /*0x4adca1*/
    LOBYTE(v13) = *v10; /*0x4adca9*/
    v7 = (int *)(v10 + 5); /*0x4adcab*/
    *(_BYTE *)(result + 281) = v13; /*0x4adcae*/
  }
  return result; /*0x4adcbd*/
}



// ==== 0x004ADCD0  Radar::UpdateReveal  this=Radar  sig=csp ====
int __stdcall Radar::UpdateReveal(char a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9[3]; // [esp+14h] [ebp-24h] BYREF
  int v10[3]; // [esp+20h] [ebp-18h] BYREF
  int v11[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = dword_A8EC88; /*0x4adcd4*/
  v3 = 0; /*0x4adcdb*/
  if ( dword_A8EC88 > 0 ) /*0x4adcdf*/
  {
    while ( 1 ) /*0x4adceb*/
    {
      result = (int)dword_A8EC7C; /*0x4adceb*/
      v5 = *((_DWORD *)dword_A8EC7C + v3); /*0x4adcf0*/
      if ( !v5 ) /*0x4adcf5*/
        goto LABEL_20; /*0x4adcf5*/
      LOBYTE(result) = *(_BYTE *)(v5 + 129); /*0x4adcfb*/
      if ( (_BYTE)result ) /*0x4add03*/
        goto LABEL_20; /*0x4add03*/
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 44))(*((_DWORD *)dword_A8EC7C + v3)); /*0x4add0d*/
      if ( result == 6 ) /*0x4add13*/
      {
        LOBYTE(result) = a1; /*0x4add15*/
        if ( a1 ) /*0x4add1b*/
          goto LABEL_20; /*0x4add1b*/
      }
      result = House::IsHumanPlayer(*(#375 **)(v5 + 540)); /*0x4add27*/
      if ( (_BYTE)result ) /*0x4add2e*/
        break; /*0x4add2e*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 /*0x4addce*/
        && HIBYTE(dword_8871E0[1].?[2])
        && (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v5 + 540), dword_A83D4C) )
      {
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 1160))(v5, 0, a2, 0, 0, 0); /*0x4adde4*/
        v10[0] = *(_DWORD *)(v5 + 156); /*0x4addf4*/
        v7 = *(_DWORD *)(v5 + 608); /*0x4addf8*/
        v10[1] = *(_DWORD *)(v5 + 160); /*0x4ade04*/
        v10[2] = *(_DWORD *)(v5 + 164); /*0x4ade18*/
        result = MapClass::RevealArea2(&dword_87F7E8, v10, 0, v7 + 3, 0); /*0x4ade1c*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 /*0x4ade4c*/
             && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5) + 1518)
             && !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(v5 + 540)) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, int, #375 *, _DWORD))(*(_DWORD *)v5 + 1160))( /*0x4ade68*/
          v5,
          0,
          0,
          1,
          dword_A83D4C,
          0);
        v11[0] = *(_DWORD *)(v5 + 156); /*0x4ade78*/
        v8 = *(_DWORD *)(v5 + 608) + 3; /*0x4ade85*/
        v11[1] = *(_DWORD *)(v5 + 160); /*0x4ade88*/
        v11[2] = *(_DWORD *)(v5 + 164); /*0x4ade9c*/
        result = MapClass::RevealArea2(&dword_87F7E8, v11, 0, v8, 0); /*0x4adea0*/
      }
      else
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x4adeab*/
        if ( *(_BYTE *)(result + 3281) ) /*0x4adeb1*/
          goto LABEL_19; /*0x4adeb9*/
      }
LABEL_20:
      if ( ++v3 >= v2 ) /*0x4adec8*/
        return result; /*0x4adec8*/
    }
    LOBYTE(result) = *(_BYTE *)(v5 + 1051); /*0x4add30*/
    if ( !(_BYTE)result ) /*0x4add38*/
      goto LABEL_20; /*0x4add38*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 1160))(v5, 0, 0, 0, 0, 0); /*0x4add4c*/
    v9[0] = *(_DWORD *)(v5 + 156); /*0x4add5c*/
    v6 = *(_DWORD *)(v5 + 608) + 3; /*0x4add69*/
    v9[1] = *(_DWORD *)(v5 + 160); /*0x4add6c*/
    v9[2] = *(_DWORD *)(v5 + 164); /*0x4add78*/
    MapClass::RevealArea2(&dword_87F7E8, v9, 0, v6, 0); /*0x4add84*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x4add8d*/
    if ( !*(_BYTE *)(result + 3281) ) /*0x4add93*/
      goto LABEL_20; /*0x4add9b*/
LABEL_19:
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1044))(v5); /*0x4adebb*/
    goto LABEL_20; /*0x4adebf*/
  }
  return result; /*0x4aded0*/
}



// ==== 0x004ADEE0  HouseClass::ResetObjectOrders  this=HouseClass  sig=csp ====
int __stdcall HouseClass::ResetObjectOrders(char a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // esi

  v2 = dword_A8EC88; /*0x4adee1*/
  v3 = 0; /*0x4adee8*/
  if ( dword_A8EC88 > 0 ) /*0x4adeec*/
  {
    while ( 1 ) /*0x4adef8*/
    {
      result = (int)dword_A8EC7C; /*0x4adef8*/
      v5 = *((_DWORD *)dword_A8EC7C + v3); /*0x4adefd*/
      if ( !v5 ) /*0x4adf02*/
        goto LABEL_16; /*0x4adf02*/
      LOBYTE(result) = *(_BYTE *)(v5 + 129); /*0x4adf08*/
      if ( (_BYTE)result ) /*0x4adf10*/
        goto LABEL_16; /*0x4adf10*/
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 44))(*((_DWORD *)dword_A8EC7C + v3)); /*0x4adf1a*/
      if ( result == 6 ) /*0x4adf20*/
      {
        LOBYTE(result) = a1; /*0x4adf22*/
        if ( a1 ) /*0x4adf28*/
          goto LABEL_16; /*0x4adf28*/
      }
      result = House::IsHumanPlayer(*(#375 **)(v5 + 540)); /*0x4adf34*/
      if ( (_BYTE)result ) /*0x4adf3b*/
        break; /*0x4adf3b*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 /*0x4adfa5*/
        && HIBYTE(dword_8871E0[1].?[2])
        && (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v5 + 540), dword_A83D4C) )
      {
        result = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 1164))(v5, 0, a2, 0, 0); /*0x4adfb9*/
      }
      else
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x4adfc5*/
        if ( *(_BYTE *)(result + 3281) ) /*0x4adfcb*/
          goto LABEL_15; /*0x4adfd3*/
      }
LABEL_16:
      if ( ++v3 >= v2 ) /*0x4adfe2*/
        return result; /*0x4adfe2*/
    }
    LOBYTE(result) = *(_BYTE *)(v5 + 1051); /*0x4adf3d*/
    if ( !(_BYTE)result ) /*0x4adf45*/
      goto LABEL_16; /*0x4adf45*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 1164))(v5, 0, 0, 0, 0); /*0x4adf57*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x4adf61*/
    if ( !*(_BYTE *)(result + 3281) ) /*0x4adf67*/
      goto LABEL_16; /*0x4adf6f*/
LABEL_15:
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1048))(v5); /*0x4adfd5*/
    goto LABEL_16; /*0x4adfd9*/
  }
  return result; /*0x4adfea*/
}



// ==== 0x004ADFF0  HouseClass::RevealShroudForAllies  this=MouseClass  sig=csp ====
int __stdcall HouseClass_RevealShroudForAllies(char a1, int a2)
{
  int result; // eax
  int i; // ebp
  #375 **v4; // esi

  result = dword_8A03A0; /*0x4adff0*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x4adffa*/
  {
    v4 = *(#375 ***)(dword_8A0394 + 4 * i); /*0x4ae010*/
    if ( v4 /*0x4ae02b*/
      && ((_BYTE)v4[5] & 1) != 0
      && ((*((int (__thiscall **)(_DWORD))*v4 + 11))(*(_DWORD *)(dword_8A0394 + 4 * i)) != 6 || !a1) )
    {
      if ( (unsigned __int8)House::IsHumanPlayer(v4[135]) ) /*0x4ae033*/
      {
        if ( *((_BYTE *)v4 + 1051) ) /*0x4ae03c*/
          (*((void (__thiscall **)(#375 **, _DWORD, int))*v4 + 72))(v4, 0, a2); /*0x4ae04d*/
      }
      else if ( (*((int (__thiscall **)(#375 **))*v4 + 11))(v4) == 6 /*0x4ae07d*/
             && HIBYTE(dword_8871E0[1].?[2])
             && (unsigned __int8)HouseClass::IsAlliedWith(v4[135], dword_A83D4C) )
      {
        (*((void (__thiscall **)(#375 **, int, _DWORD))*v4 + 72))(v4, a2, 0); /*0x4ae08d*/
      }
    }
    result = dword_8A03A0; /*0x4ae093*/
  }
  return result; /*0x4ae0a4*/
}



// ==== 0x004AE290  TacticalClass::InterpolateView  this=TacticalClass  sig=csp ====
int TacticalClass::InterpolateView(TacticalClass *this)
{
  int result; // eax
  int v2; // ebp
  int v3; // edi
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int v8; // ebx
  bool v9; // zf
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // eax
  int *v13; // edx
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // eax
  int v18; // [esp+8h] [ebp-40h]
  int v19; // [esp+8h] [ebp-40h]
  int v20; // [esp+Ch] [ebp-3Ch] BYREF
  int v21; // [esp+10h] [ebp-38h]
  int v22; // [esp+14h] [ebp-34h]
  int v23; // [esp+18h] [ebp-30h]
  int v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h]
  int v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  int v28; // [esp+2Ch] [ebp-1Ch]
  _DWORD v29[3]; // [esp+30h] [ebp-18h] BYREF
  int v30[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x4ae295*/
  if ( *(int *)&stru_A8EB00.?[228] > 0 ) /*0x4ae29f*/
  {
    v3 = 0; /*0x4ae2a7*/
    v4 = 0; /*0x4ae2a9*/
    v5 = 0; /*0x4ae2ab*/
    v20 = 0; /*0x4ae2af*/
    v21 = 0; /*0x4ae2b3*/
    v22 = 0; /*0x4ae2b7*/
    v6 = *(_DWORD **)&stru_A8EB00.?[216]; /*0x4ae2bd*/
    v18 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x4ae2c2*/
    do /*0x4ae2fc*/
    {
      v7 = (_DWORD *)*v6++; /*0x4ae2c6*/
      v29[0] = v7[39]; /*0x4ae2d5*/
      v3 += v29[0]; /*0x4ae2d9*/
      v4 += v7[40]; /*0x4ae2e0*/
      v8 = v7[41]; /*0x4ae2e6*/
      v20 = v3; /*0x4ae2e9*/
      v5 += v8; /*0x4ae2ed*/
      v9 = v18 == 1; /*0x4ae2ef*/
      v21 = v4; /*0x4ae2f0*/
      v22 = v5; /*0x4ae2f4*/
      --v18; /*0x4ae2f8*/
    }
    while ( !v9 ); /*0x4ae2fc*/
    v10 = 0; /*0x4ae2fe*/
    v26 = v3; /*0x4ae302*/
    v27 = v4; /*0x4ae306*/
    v28 = v5; /*0x4ae30a*/
    if ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x4ae30e*/
    {
      v3 /= *(int *)&stru_A8EB00.?[228]; /*0x4ae315*/
      v20 = v3; /*0x4ae31c*/
      v4 /= *(int *)&stru_A8EB00.?[228]; /*0x4ae320*/
      v21 = v4; /*0x4ae327*/
      v5 /= *(int *)&stru_A8EB00.?[228]; /*0x4ae32b*/
      v22 = v5; /*0x4ae32d*/
    }
    if ( *(int *)&stru_A8EB00.?[228] > 2 ) /*0x4ae334*/
    {
      v23 = 0; /*0x4ae33c*/
      v24 = 0; /*0x4ae340*/
      v25 = 0; /*0x4ae344*/
      v19 = 0; /*0x4ae348*/
      if ( *(int *)&stru_A8EB00.?[228] > 0 ) /*0x4ae34c*/
      {
        while ( 1 ) /*0x4ae384*/
        {
          v11 = Coord::Subtract( /*0x4ae384*/
                  (Coord *)v30,
                  v3 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v10) + 156),
                  v4 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v10) + 160),
                  v5 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v10) + 164));
          v29[0] = *v11; /*0x4ae38b*/
          v29[1] = v11[1]; /*0x4ae396*/
          v29[2] = v11[2]; /*0x4ae39d*/
          v12 = Coord::Length((Coord *)v29); /*0x4ae3a1*/
          if ( v12 > v19 ) /*0x4ae3aa*/
          {
            v19 = v12; /*0x4ae3b2*/
            v13 = (int *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v10) + 156); /*0x4ae3b9*/
            v23 = *v13; /*0x4ae3c1*/
            v24 = v13[1]; /*0x4ae3c8*/
            v25 = v13[2]; /*0x4ae3cf*/
          }
          v2 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x4ae3d3*/
          if ( ++v10 >= *(int *)&stru_A8EB00.?[228] ) /*0x4ae3dc*/
            break; /*0x4ae3dc*/
          v4 = v21; /*0x4ae354*/
          v5 = v22; /*0x4ae358*/
          v3 = v20; /*0x4ae35c*/
        }
      }
      v14 = v2 - 1; /*0x4ae3fe*/
      if ( v2 == 1 ) /*0x4ae405*/
      {
        v15 = 0; /*0x4ae407*/
        v16 = 0; /*0x4ae409*/
        v17 = 0; /*0x4ae40b*/
      }
      else
      {
        v15 = (v26 - v23) / v14; /*0x4ae412*/
        v16 = (v27 - v24) / v14; /*0x4ae419*/
        v17 = (v28 - v25) / v14; /*0x4ae41e*/
      }
      v20 = v15; /*0x4ae420*/
      v21 = v16; /*0x4ae424*/
      v22 = v17; /*0x4ae428*/
    }
    return Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, &v20); /*0x4ae437*/
  }
  return result; /*0x4ae43e*/
}



// ==== 0x004AE450  TacticalClass::Initialize  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::Initialize(TacticalClass *this)
{
  int *v2; // eax

  TheatreClass::InitView(); /*0x4ae453*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x4ae45d*/
  v2 = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x4ae467*/
  for ( g_MissionQueueFrame.briefing[143] = 0; /*0x4ae478*/
        v2;
        v2 = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    TacticalClass::SetView(v2, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4ae494*/
  }
  return (*((int (__thiscall **)(TacticalClass *, int))this->AbstractClass + 14))(this, 1); /*0x4ae4b0*/
}



// ==== 0x004AE4C0  MapClass::UpdateLightingPostProcess  this=MapClass  sig=ida-proto ====
int sub_4AE4C0()
{
  int result; // eax

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x4ae4c5*/
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x4ae4d6*/
    TacticalMap::ComputeScreenTint(result); /*0x4ae4da*/
  return result; /*0x4ae4ed*/
}



// ==== 0x004AE4F0  DisplayClass::Draw  this=DisplayClass  sig=csp ====
wchar_t *__thiscall DisplayClass::Draw(DisplayClass *this, int a2)
{
  int v3; // esi
  void *v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  wchar_t *result; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  CellClass *v11; // eax
  CellClass *v12; // eax
  void *Object_field_0x30; // [esp-4h] [ebp-38h]
  bool v14[4]; // [esp+8h] [ebp-2Ch] BYREF
  int v15; // [esp+Ch] [ebp-28h] BYREF
  __int16 v16[2]; // [esp+10h] [ebp-24h] BYREF
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v18[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v19[3]; // [esp+28h] [ebp-Ch] BYREF

  if ( a2 < 500 /*0x4ae513*/
    || a2 > 900
    || (*((unsigned __int8 (__thiscall **)(DisplayClass *))this->DisplayClass_field_0x0 + 26))(this) )
  {
    return 0; /*0x4ae513*/
  }
  v3 = DSurface_ViewBounds.field_0; /*0x4ae524*/
  v4 = DSurface_ViewBounds.field_4; /*0x4ae531*/
  v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x4ae538*/
                   stru_887598.lineTrailer,
                   v18);
  v6 = v5[1]; /*0x4ae54a*/
  v17[0] = *v5 - v3; /*0x4ae54d*/
  v17[1] = v6 - (_DWORD)v4; /*0x4ae557*/
  Tactical::MouseOver(v17, v16, v19, &v15, &v14[3], (bool *)&a2); /*0x4ae571*/
  if ( LOBYTE(stru_A8EB00.__pad_CD4[1]) ) /*0x4ae57e*/
  {
    swprintf(&word_8A0630, (const size_t)aDD_2, (const wchar_t *const)(v19[0] / 256), v19[1] / 256); /*0x4ae5ac*/
    return &word_8A0630; /*0x4ae5be*/
  }
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19)->copyFlags & 8) == 0 && g_hWnd ) /*0x4ae5e0*/
    return GetStringCSF(aTxtShadow, 0, aDRa2mdpostDisp, 5048); /*0x4ae5fd*/
  v8 = v15; /*0x4ae600*/
  if ( !v15 ) /*0x4ae606*/
    return 0; /*0x4ae606*/
  if ( (*(_BYTE *)(v15 + 20) & 1) != 0 ) /*0x4ae610*/
  {
    v9 = v15; /*0x4ae61c*/
    if ( !*(_BYTE *)(v15 + 1050) ) /*0x4ae616*/
    {
      if ( *(_DWORD *)(v15 + 544) == 2 ) /*0x4ae629*/
      {
        Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ae635*/
        v10 = (_DWORD *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)v15 + 72))(v18); /*0x4ae63b*/
        v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v10); /*0x4ae644*/
        if ( !(unsigned __int8)Cell::IsPassableOffset((Cell *)v11, (int)Object_field_0x30) ) /*0x4ae64b*/
          return 0; /*0x4ae64b*/
      }
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9) + 3226) ) /*0x4ae65e*/
        return 0; /*0x4ae666*/
      v8 = v15; /*0x4ae668*/
    }
  }
  else
  {
    v9 = 0; /*0x4ae697*/
  }
  if ( !v8 ) /*0x4ae66e*/
    return 0; /*0x4ae69b*/
  result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 144))(v8); /*0x4ae672*/
  if ( !v9 ) /*0x4ae67a*/
  {
    v12 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, v16); /*0x4ae683*/
    return (wchar_t *)CellClass::GetUIName(v12); /*0x4ae68a*/
  }
  return result; /*0x4ae5b9*/
}



// ==== 0x004AE6B0  DisplayClass::Render  this=DisplayClass  sig=csp ====
int DisplayClass::Render(DisplayClass *this)
{
  int result; // eax

  result = (int)dword_B73554; /*0x4ae6b0*/
  if ( dword_B73554 ) /*0x4ae6b7*/
  {
    result = CloseWindow(dword_B73554); /*0x4ae6ba*/
    dword_B73554 = 0; /*0x4ae6c0*/
  }
  return result; /*0x4ae6ca*/
}



// ==== 0x004AE6F0  DisplayClass::SetSurface  this=DisplayClass  sig=csp ====
int __stdcall DisplayClass::SetSurface(DisplayClass *this)
{
  LayerClass *v1; // esi
  int result; // eax

  v1 = &stru_8A0360; /*0x4ae6f6*/
  do /*0x4ae70c*/
  {
    result = LayerClass::Load(v1, this); /*0x4ae6fe*/
    v1 += 2; /*0x4ae703*/
  }
  while ( (int)v1 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4ae70c*/
  return result; /*0x4ae70e*/
}



// ==== 0x004AE720  DisplayClass::GetSurface  this=DisplayClass  sig=csp ====
int __stdcall DisplayClass::GetSurface(DisplayClass *this)
{
  LayerClass *v1; // esi
  int result; // eax

  v1 = &stru_8A0360; /*0x4ae726*/
  do /*0x4ae740*/
  {
    result = LayerClass::Save(v1, this); /*0x4ae72e*/
    if ( result < 0 ) /*0x4ae735*/
      break; /*0x4ae735*/
    v1 += 2; /*0x4ae737*/
  }
  while ( (int)v1 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4ae740*/
  return result; /*0x4ae742*/
}



// ==== 0x004AE750  ObjectClass::DispatchSelectionWaypointMove  this=ObjectClass  sig=csp ====
char __userpurge DispatchSelectionWaypointMove@<al>(int a1, int a2, int a3, int a4)
{
  _DWORD **v4; // eax
  _DWORD *v5; // eax
  wchar_t *v6; // ecx
  int i; // esi
  int v8; // ecx
  int v9; // ebp
  int v10; // esi
  int *v11; // edi
  int v12; // eax
  wchar_t *v13; // ebp
  int v14; // esi
  int *v15; // edi
  int v16; // eax
  int v17; // esi
  _DWORD *v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // esi
  _DWORD *v22; // edi
  int v23; // ebp
  int v24; // eax
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v27; // [esp+10h] [ebp-8h] BYREF
  int v28; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(v4) = byte_A8ED6B; /*0x4ae753*/
  v27 = -1; /*0x4ae761*/
  LOBYTE(v26) = 0; /*0x4ae765*/
  if ( byte_A8ED6B ) /*0x4ae769*/
    return (char)v4; /*0x4ae769*/
  a2 = *(_DWORD *)HouseClass::ClampToUsableCell(&v28, &a2); /*0x4ae78f*/
  v5 = Waypoint::FindByCell((char *)dword_A83D4C, &a2); /*0x4ae794*/
  if ( v5 ) /*0x4ae79b*/
    WaypointClass::FindOrCreate((char *)dword_A83D4C, (int)v5, &v27, &v26); /*0x4ae7ae*/
  v6 = dword_A8ECC8; /*0x4ae7b3*/
  v4 = (_DWORD **)dword_A8ECBC; /*0x4ae7b9*/
  for ( i = 0; i < (int)dword_A8ECC8; ++i ) /*0x4ae7c4*/
  {
    (*(void (__thiscall **)(_DWORD *, unsigned int, int))(*v4[i] + 420))(v4[i], v27, v26); /*0x4ae7d7*/
    v4 = (_DWORD **)dword_A8ECBC; /*0x4ae7dd*/
    v8 = *((_DWORD *)dword_A8ECBC + i); /*0x4ae7e2*/
    if ( v8 && (*(_BYTE *)(v8 + 20) & 4) != 0 ) /*0x4ae7f6*/
    {
      *(_BYTE *)(v8 + 1072) = 0; /*0x4ae7fa*/
      v4 = (_DWORD **)dword_A8ECBC; /*0x4ae800*/
    }
    v6 = dword_A8ECC8; /*0x4ae805*/
  }
  v9 = a1; /*0x4ae810*/
  if ( a1 ) /*0x4ae816*/
  {
    v10 = 0; /*0x4ae818*/
    if ( (int)v6 > 0 ) /*0x4ae81c*/
    {
      while ( 1 ) /*0x4ae82d*/
      {
        v11 = v4[v10]; /*0x4ae82d*/
        a1 = *v11; /*0x4ae836*/
        v12 = (*(int (__thiscall **)(int *, int, _DWORD, int, _DWORD))(a1 + 116))(v11, v9, 0, v9, 0); /*0x4ae83a*/
        (*(void (__thiscall **)(int *, int))(a3 + 324))(v11, v12); /*0x4ae844*/
        LOBYTE(v4) = (_BYTE)dword_A8ECC8; /*0x4ae84a*/
        ++v10; /*0x4ae851*/
        g_MoveFeedback = 0; /*0x4ae852*/
        if ( v10 >= (int)dword_A8ECC8 ) /*0x4ae85a*/
          break; /*0x4ae85a*/
        v4 = (_DWORD **)dword_A8ECBC; /*0x4ae824*/
      }
      g_MoveFeedback = 1; /*0x4ae85f*/
      return (char)v4; /*0x4ae86a*/
    }
LABEL_32:
    g_MoveFeedback = 1; /*0x4ae992*/
    return (char)v4; /*0x4ae993*/
  }
  if ( a3 == 1 || a3 == 51 ) /*0x4ae87d*/
  {
    v21 = 0; /*0x4ae94e*/
    if ( (int)v6 > 0 ) /*0x4ae952*/
    {
      while ( 1 ) /*0x4ae96b*/
      {
        v22 = v4[v21]; /*0x4ae96b*/
        v23 = *v22; /*0x4ae972*/
        v24 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(*v22 + 112))( /*0x4ae976*/
                v22,
                &a2,
                0,
                0,
                &a2,
                &a2,
                0);
        (*(void (__thiscall **)(_DWORD *, int))(v23 + 320))(v22, v24); /*0x4ae97c*/
        LOBYTE(v4) = (_BYTE)dword_A8ECC8; /*0x4ae982*/
        ++v21; /*0x4ae987*/
        g_MoveFeedback = 0; /*0x4ae98a*/
        if ( v21 >= (int)dword_A8ECC8 ) /*0x4ae990*/
          break; /*0x4ae990*/
        v4 = (_DWORD **)dword_A8ECBC; /*0x4ae956*/
      }
    }
    goto LABEL_32; /*0x4ae990*/
  }
  if ( a3 == 2 ) /*0x4ae886*/
  {
    v13 = v6; /*0x4ae888*/
    v14 = 0; /*0x4ae88a*/
    if ( (int)v6 <= 0 ) /*0x4ae88e*/
      goto LABEL_32; /*0x4ae88e*/
    while ( 1 ) /*0x4ae8a8*/
    {
      v15 = v4[v14]; /*0x4ae8a8*/
      a1 = *v15; /*0x4ae8b6*/
      v16 = (*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(a1 + 112))( /*0x4ae8ba*/
              v15,
              &a2,
              0,
              0,
              &a2,
              &a2,
              0);
      LOBYTE(v4) = (*(int (__thiscall **)(int *, int))(a4 + 320))(v15, v16); /*0x4ae8c4*/
      ++v14; /*0x4ae8cc*/
      g_MoveFeedback = 0; /*0x4ae8cf*/
      if ( v14 >= (int)v13 ) /*0x4ae8d5*/
        break; /*0x4ae8d5*/
      v4 = (_DWORD **)dword_A8ECBC; /*0x4ae896*/
    }
    g_MoveFeedback = 1; /*0x4ae8da*/
  }
  else
  {
    v17 = 0; /*0x4ae8e8*/
    if ( (int)v6 <= 0 ) /*0x4ae8ec*/
      goto LABEL_32; /*0x4ae8ec*/
    while ( 1 ) /*0x4ae8fc*/
    {
      a1 = -1; /*0x4ae8fc*/
      v18 = v4[v17]; /*0x4ae916*/
      v19 = *v18; /*0x4ae91d*/
      v20 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(*v18 + 112))( /*0x4ae921*/
              v18,
              &a2,
              0,
              0,
              &a2,
              &a1,
              0);
      (*(void (__thiscall **)(_DWORD *, int))(v19 + 320))(v18, v20); /*0x4ae927*/
      LOBYTE(v4) = (_BYTE)dword_A8ECC8; /*0x4ae92d*/
      ++v17; /*0x4ae932*/
      g_MoveFeedback = 0; /*0x4ae935*/
      if ( v17 >= (int)dword_A8ECC8 ) /*0x4ae93b*/
        break; /*0x4ae93b*/
      v4 = (_DWORD **)dword_A8ECBC; /*0x4ae8f4*/
    }
    g_MoveFeedback = 1; /*0x4ae940*/
  }
  return (char)v4; /*0x4ae85e*/
}



// ==== 0x004AEA20  ObjectClass::method_4AEA20  this=ObjectClass  sig=csp ====
int __userpurge sub_4AEA20@<eax>(int a1@<ebx>, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // ebx
  int v8; // eax
  int result; // eax

  if ( a2 == -1 ) /*0x4aea27*/
    v2 = 0; /*0x4aea29*/
  else
    v2 = 8 * (a2 % 12); /*0x4aea35*/
  v3 = 0; /*0x4aea46*/
  v4 = *(_DWORD *)(dword_87F6C8 + 372) + 2; /*0x4aea48*/
  do /*0x4aeac1*/
  {
    v5 = (v3 + v2) % 256; /*0x4aea5b*/
    v6 = &byte_885180[3 * v5]; /*0x4aea5c*/
    v4 += 2; /*0x4aea63*/
    LOWORD(v5) = (unsigned __int8)((unsigned __int8)v6[2] >> g_BitMask_Red); /*0x4aea83*/
    LOWORD(a1) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v6) >> g_BitMask_Blue); /*0x4aea97*/
    v7 = a1 << g_BitMask_Green; /*0x4aea9b*/
    v8 = v7 | (v5 << g_BitShift_Blue); /*0x4aeaa3*/
    LOWORD(v7) = (unsigned __int8)((unsigned __int8)*(_WORD *)v6 >> g_BitShift_Green_0); /*0x4aeab1*/
    a1 = v7 << g_BitShift_Red; /*0x4aeab5*/
    result = a1 | v8; /*0x4aeab7*/
    ++v3; /*0x4aeab9*/
    *(_WORD *)(v4 - 2) = result; /*0x4aeaba*/
  }
  while ( v3 < 8 ); /*0x4aeac1*/
  return result; /*0x4aeac6*/
}



// ==== 0x004AEAD0  DisplayClass::ExitMode  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::ExitMode(DisplayClass *this)
{
  if ( g_TacticalClass_Instance ) /*0x4aeadb*/
    TacticalClass::ResetScrollBounds((TacticalClass *)g_TacticalClass_Instance); /*0x4aeadd*/
  this->__pad_11B4[27] = 0; /*0x4aeae2*/
  LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4aeae9*/
  stru_A8EB00.?[441] = 1; /*0x4aeaf0*/
  return (*((int (__thiscall **)(DisplayClass *, _DWORD, _DWORD))this->DisplayClass_field_0x0 + 18))(this, 0, 0); /*0x4aeb02*/
}



// ==== 0x004AEB10  MapClass::GetScrollMode  this=MapClass  sig=csp ====
int __thiscall MapClass::GetScrollMode(MapClass *this)
{
  int result; // eax

  if ( !LOBYTE(this->MapClass_field_0x119C) ) /*0x4aeb10*/
    return 0; /*0x4aeb10*/
  result = (int)this->MapClass_field_0x11A0; /*0x4aeb1a*/
  if ( !result ) /*0x4aeb22*/
    return 0; /*0x4aeb24*/
  return result; /*0x4aeb26*/
}



// ==== 0x004AEB30  MapClass::SetScrollMode  this=MapClass  sig=csp ====
int __thiscall MapClass::SetScrollMode(int this, int a2)
{
  int result; // eax

  result = a2; /*0x4aeb30*/
  *(_DWORD *)(this + 4512) = a2; /*0x4aeb36*/
  LOBYTE(result) = a2 != 0; /*0x4aeb3c*/
  *(_BYTE *)(this + 4508) = a2 != 0; /*0x4aeb3f*/
  return result; /*0x4aeb45*/
}



// ==== 0x004AEB50    this=DisplayClass  sig=? ====
_DWORD *__thiscall DisplayClass::loc_4AEB50(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4aeb53*/
  *Block = &g_ptr_7E192C; /*0x4aeb56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4aeb60*/
  {
    __3_YAXPAX_Z(v3); /*0x4aeb68*/
    *(Block + 1) = 0; /*0x4aeb70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4aeb7b*/
  *(Block + 2) = 0; /*0x4aeb81*/
  if ( (a2 & 1) != 0 ) /*0x4aeb88*/
    __3_YAXPAX_Z(Block); /*0x4aeb8b*/
  return Block; /*0x4aeb95*/
}


// ==== 0x004AEBA0  GadgetClass::COMStub_Return0  this=GadgetClass  sig=csp ====
int CheckListClass::COMStub_Return0(GadgetClass *this)
{
  return 0; /*0x4aeba2*/
}



// ==== 0x004AEBB0  TacticalClass_DisplayClass::updateRenderState  this=TacticalClass@DisplayClass  sig=csp ====
_DWORD *__thiscall DisplayClass::updateRenderState(TacticalClass_DisplayClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x4aebb3*/
  if ( (a2 & 1) != 0 ) /*0x4aebbd*/
    __3_YAXPAX_Z(this); /*0x4aebc0*/
  return this; /*0x4aebca*/
}



// ==== 0x004AEBD0  GScreenClass::StubReturnFalse  this=GScreenClass  sig=csp ====
void __stdcall InputManager_ProcessEvents::StubReturnFalse(GScreenClass *this)
{
  ; /*0x4aebd0*/
}



// ==== 0x004AEBE0  MapClass::Stub  this=MapClass  sig=csp ====
char InputManager_ProcessEvents::Stub(MapClass *this)
{
  return 0; /*0x4aebe2*/
}



// ==== 0x004AEBF0  DisplayClass::Read  this=DisplayClass  sig=csp ====
char *__thiscall DisplayClass::Read(DisplayClass *this, char a2)
{
  MapClass::Destruct((char *)this); /*0x4aebf3*/
  if ( (a2 & 1) != 0 ) /*0x4aebfd*/
    __3_YAXPAX_Z(this); /*0x4aec00*/
  return (char *)this; /*0x4aec0a*/
}



// ==== 0x004AEC10  Straw::QueryInterface  this=Straw  sig=csp ====
int *__thiscall Straw::QueryInterface(Straw *this, char a2)
{
  Straw::Dtor(this); /*0x4aec13*/
  if ( (a2 & 1) != 0 ) /*0x4aec1d*/
    __3_YAXPAX_Z(this); /*0x4aec20*/
  return (int *)this->__pad_0; /*0x4aec2a*/
}



// ==== 0x004AEC30  BufferStraw::processDisplayMode  this=BufferStraw  sig=csp ====
int *__thiscall DisplayClass::processDisplayMode(BufferStraw *this, char a2)
{
  Vector::Clear((int)(this + 1)); /*0x4aec36*/
  Straw::Dtor((Straw *)this); /*0x4aec3d*/
  if ( (a2 & 1) != 0 ) /*0x4aec47*/
    __3_YAXPAX_Z(this); /*0x4aec4a*/
  return (int *)this->__pad_0; /*0x4aec54*/
}



// ==== 0x004AEC60  Surface::Construct  this=Surface  sig=csp ====
_DWORD *__thiscall Surface::Construct(Surface *this, int a2, int a3)
{
  this->Width = a2; /*0x4aec6a*/
  this->Height = a3; /*0x4aec6d*/
  *(_DWORD *)this->__pad_0 = &Surface_Vtable; /*0x4aec70*/
  return this->__pad_0; /*0x4aec76*/
}



// ==== 0x004AEC80  Pipe::QueryInterface  this=Pipe  sig=csp ====
int *__thiscall Pipe::QueryInterface(Pipe *this, char a2)
{
  Pipe::Dtor(this); /*0x4aec83*/
  if ( (a2 & 1) != 0 ) /*0x4aec8d*/
    __3_YAXPAX_Z(this); /*0x4aec90*/
  return (int *)this->__pad_0; /*0x4aec9a*/
}



// ==== 0x004AECA0  BufferPipe::initDisplay  this=BufferPipe  sig=csp ====
int *__thiscall GameClass::initDisplay(BufferPipe *this, char a2)
{
  Vector::Clear((int)(this + 1)); /*0x4aeca6*/
  Pipe::Dtor((Pipe *)this); /*0x4aecad*/
  if ( (a2 & 1) != 0 ) /*0x4aecb7*/
    __3_YAXPAX_Z(this); /*0x4aecba*/
  return (int *)this->__pad_0; /*0x4aecc4*/
}



// ==== 0x004AECD0  ObjectClass::method_4AECD0  this=char*  sig=csp ====
int __thiscall sub_4AECD0(LPCSTR lpLibFileName)
{
  int v1; // esi
  HMODULE LibraryA; // eax
  HMODULE v3; // edi
  FARPROC ProcAddress; // eax
  int v6; // [esp+8h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x4aecd6*/
  LibraryA = LoadLibraryA(lpLibFileName); /*0x4aecd8*/
  v3 = LibraryA; /*0x4aecde*/
  if ( LibraryA ) /*0x4aece2*/
  {
    ProcAddress = GetProcAddress(LibraryA, aDllgetversion); /*0x4aecea*/
    if ( ProcAddress ) /*0x4aecf2*/
    {
      v7 = 0; /*0x4aecff*/
      v6 = 20; /*0x4aed03*/
      v8 = 0; /*0x4aed0b*/
      v9 = 0; /*0x4aed0f*/
      v10 = 0; /*0x4aed13*/
      if ( ((int (__stdcall *)(int *))ProcAddress)(&v6) >= 0 ) /*0x4aed1b*/
        v1 = (unsigned __int16)v8 | ((unsigned __int16)v7 << 16); /*0x4aed33*/
    }
    FreeLibrary(v3); /*0x4aed36*/
  }
  return v1; /*0x4aed3e*/
}



// ==== 0x004AED50  sub_4AED50  this=-  sig=ida-proto ====
int sub_4AED50()
{
  dword_8A0748 = 0; /*0x4aed52*/
  dword_8A074C = 0; /*0x4aed57*/
  dword_8A0750 = 0; /*0x4aed5c*/
  dword_8A0754 = 0; /*0x4aed61*/
  return 0; /*0x4aed66*/
}



// ==== 0x004AED70  DrawToSurfaceSHP  this=-  sig=csp ====
int __fastcall DrawToSurfaceSHP(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        int *a5,
        int *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        unsigned int a14,
        int a15,
        int a16)
{
  int result; // eax
  int v17; // edi
  int *v20; // eax
  int *v21; // ecx
  int v22; // ecx
  int *FoundationSize; // eax
  int SubFile; // eax
  int v25; // edx
  int v26; // ebp
  int v27; // esi
  int *v28; // eax
  _DWORD *v29; // esi
  int *v30; // edx
  int v31; // ecx
  int v32; // eax
  int *v33; // eax
  int *SHPFrame; // eax
  int v35; // [esp-8h] [ebp-A8h]
  int v36; // [esp+Ch] [ebp-94h]
  int v37; // [esp+Ch] [ebp-94h]
  int v38; // [esp+10h] [ebp-90h]
  void (__thiscall ***v39)(_DWORD, int); // [esp+10h] [ebp-90h]
  int v40; // [esp+14h] [ebp-8Ch]
  int v41; // [esp+14h] [ebp-8Ch]
  int v42; // [esp+18h] [ebp-88h] BYREF
  int v43; // [esp+1Ch] [ebp-84h]
  int v44; // [esp+20h] [ebp-80h]
  int v45; // [esp+24h] [ebp-7Ch]
  int v46; // [esp+28h] [ebp-78h] BYREF
  int v47; // [esp+2Ch] [ebp-74h]
  int v48; // [esp+30h] [ebp-70h]
  int v49; // [esp+34h] [ebp-6Ch]
  int v50; // [esp+38h] [ebp-68h] BYREF
  int v51; // [esp+3Ch] [ebp-64h]
  int v52; // [esp+40h] [ebp-60h]
  int v53; // [esp+44h] [ebp-5Ch]
  int v54; // [esp+48h] [ebp-58h]
  int v55; // [esp+4Ch] [ebp-54h]
  int *v56; // [esp+50h] [ebp-50h]
  int v57; // [esp+54h] [ebp-4Ch]
  int v58; // [esp+58h] [ebp-48h]
  _DWORD *v59; // [esp+5Ch] [ebp-44h]
  int v60; // [esp+60h] [ebp-40h] BYREF
  int v61; // [esp+64h] [ebp-3Ch]
  int v62; // [esp+68h] [ebp-38h]
  int v63; // [esp+6Ch] [ebp-34h]
  int v64[5]; // [esp+70h] [ebp-30h] BYREF
  int v65[3]; // [esp+84h] [ebp-1Ch] BYREF
  int v66[4]; // [esp+90h] [ebp-10h] BYREF

  v17 = a3; /*0x4aed79*/
  v59 = (_DWORD *)a2; /*0x4aed86*/
  v56 = (int *)a1; /*0x4aed8a*/
  if ( a3 ) /*0x4aed8e*/
  {
    if ( *(_WORD *)a3 == 0xFFFF ) /*0x4aed98*/
    {
      LOBYTE(result) = *(_BYTE *)(a3 + 16); /*0x4aed9a*/
      if ( !(_BYTE)result ) /*0x4aed9f*/
        House::Constructor((char **)a3); /*0x4aeda3*/
      v17 = *(_DWORD *)(a3 + 12); /*0x4aeda8*/
    }
    if ( v17 ) /*0x4aedad*/
    {
      v20 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 120))(a1, &v50); /*0x4aedbc*/
      v66[0] = *v20; /*0x4aedc1*/
      v66[1] = v20[1]; /*0x4aedcf*/
      v66[2] = v20[2]; /*0x4aedd9*/
      v66[3] = v20[3]; /*0x4aedec*/
      v60 = *a6; /*0x4aedf5*/
      v61 = a6[1]; /*0x4aedfc*/
      v62 = a6[2]; /*0x4aee03*/
      v63 = a6[3]; /*0x4aee12*/
      v21 = ClipRectIntersection(&v50, a6, v66, 0, 0); /*0x4aee1f*/
      v60 = *v21; /*0x4aee23*/
      v61 = v21[1]; /*0x4aee2a*/
      result = v21[2]; /*0x4aee2e*/
      v62 = result; /*0x4aee31*/
      v22 = v21[3]; /*0x4aee35*/
      v63 = v22; /*0x4aee3a*/
      if ( result > 0 && v22 > 0 ) /*0x4aee46*/
      {
        *(_DWORD *)(a2 + 380) = a8; /*0x4aee5a*/
        v36 = *a5; /*0x4aee75*/
        v40 = a5[1]; /*0x4aee79*/
        FoundationSize = Building::GetFoundationSize(&v50, a4); /*0x4aee7d*/
        v42 = *FoundationSize; /*0x4aee84*/
        v43 = FoundationSize[1]; /*0x4aee8c*/
        v44 = FoundationSize[2]; /*0x4aee95*/
        v45 = FoundationSize[3]; /*0x4aee9c*/
        SubFile = MixFileClass::GetSubFile((char **)v17, a4); /*0x4aeea0*/
        v25 = *(__int16 *)(v17 + 4); /*0x4aeea9*/
        v26 = SubFile; /*0x4aeeb1*/
        v57 = *(__int16 *)(v17 + 2); /*0x4aeeb7*/
        v58 = v25; /*0x4aeec1*/
        Surface::Construct(v64, v44, v45); /*0x4aeec7*/
        v64[3] = 0; /*0x4aeed8*/
        v64[0] = (int)&XSurface_Vtable; /*0x4aeee3*/
        v64[4] = 1; /*0x4aeeeb*/
        Buffer::Init(v65, v26, v45 * v44); /*0x4aeef6*/
        v64[0] = (int)&BSurface_Vtable; /*0x4aeefb*/
        v27 = a16; /*0x4aef11*/
        v54 = a15; /*0x4aef18*/
        v55 = a16; /*0x4aef1e*/
        if ( a13 ) /*0x4aef22*/
        {
          v28 = Building::GetFoundationSize(&v50, a14); /*0x4aef37*/
          v46 = *v28; /*0x4aef3e*/
          v47 = v28[1]; /*0x4aef47*/
          v48 = v28[2]; /*0x4aef4e*/
          v49 = v28[3]; /*0x4aef55*/
          v29 = __2_YAPAXI_Z(0x20u); /*0x4aef5e*/
          if ( v29 ) /*0x4aef65*/
          {
            v38 = MixFileClass::GetSubFile((char **)a13, a14); /*0x4aef7c*/
            Surface::Construct(v29, v48, v49); /*0x4aef86*/
            v29[3] = 0; /*0x4aef8b*/
            *v29 = &XSurface_Vtable; /*0x4aef92*/
            v35 = v49 * v48; /*0x4aefa5*/
            v29[4] = 1; /*0x4aefaa*/
            Buffer::Init(v29 + 5, v38, v35); /*0x4aefb1*/
            *v29 = &BSurface_Vtable; /*0x4aefb6*/
            v39 = (void (__thiscall ***)(_DWORD, int))v29; /*0x4aefbc*/
            v27 = v55; /*0x4aefc0*/
          }
          else
          {
            v27 = v55; /*0x4aefc6*/
            v39 = 0; /*0x4aefca*/
          }
        }
        else
        {
          v46 = dword_8A0748; /*0x4aefe5*/
          v39 = 0; /*0x4aefee*/
          v47 = dword_8A074C; /*0x4aeff6*/
          v48 = dword_8A0750; /*0x4aeffa*/
          v49 = dword_8A0754; /*0x4aeffe*/
        }
        if ( (a7 & 0x200) != 0 ) /*0x4af00c*/
        {
          v36 += v57 / -2; /*0x4af027*/
          v40 += v58 / -2; /*0x4af034*/
        }
        if ( a13 ) /*0x4af03a*/
        {
          v54 = a15 - (v57 / 2 - v42); /*0x4af05e*/
          v27 -= v58 / 2 - v43; /*0x4af062*/
        }
        v37 = v42 + v36; /*0x4af072*/
        v41 = v43 + v40; /*0x4af07c*/
        v42 = 0; /*0x4af084*/
        v43 = 0; /*0x4af088*/
        if ( !a13 ) /*0x4af08c*/
          goto LABEL_21; /*0x4af08c*/
        v54 += v46; /*0x4af0a0*/
        v27 += v47; /*0x4af0a6*/
        v50 = -v54; /*0x4af0a8*/
        v51 = -v27; /*0x4af0b6*/
        v52 = v48; /*0x4af0be*/
        v53 = v49; /*0x4af0cb*/
        v30 = ClipRectIntersection(&v46, &v42, &v50, 0, 0); /*0x4af0d4*/
        v42 = *v30; /*0x4af0d8*/
        v43 = v30[1]; /*0x4af0df*/
        v44 = v30[2]; /*0x4af0e6*/
        v31 = v30[3]; /*0x4af0ea*/
        v45 = v31; /*0x4af0ef*/
        if ( v44 > 0 && v31 > 0 ) /*0x4af0fb*/
        {
LABEL_21:
          if ( a8 ) /*0x4af10a*/
          {
            v32 = a7; /*0x4af10c*/
            LOBYTE(v32) = a7 | 0x10; /*0x4af113*/
            a7 = v32; /*0x4af115*/
          }
          if ( Helper_69E900((char **)v17, a4) ) /*0x4af126*/
          {
            v33 = (int *)LightConvertClass::SelectRLEBlitter(v59, a7); /*0x4af13f*/
            if ( v33 ) /*0x4af146*/
            {
              v50 = v37; /*0x4af154*/
              v51 = v41; /*0x4af15c*/
              v52 = v44; /*0x4af164*/
              v53 = v45; /*0x4af16f*/
              BlitterRLEBlitSHP( /*0x4af1bf*/
                (int)v56,
                &v60,
                &v50,
                (int)v64,
                &v42,
                &v42,
                v33,
                a9,
                a10,
                a11,
                0,
                (int)v39,
                v54,
                v27,
                a12);
            }
          }
          else
          {
            SHPFrame = (int *)BuildingClass::GetSHPFrame(v59, a7); /*0x4af1d5*/
            if ( SHPFrame ) /*0x4af1dc*/
            {
              v51 = 0; /*0x4af1e6*/
              v50 = 0; /*0x4af1ee*/
              v46 = v37; /*0x4af1f6*/
              v47 = v41; /*0x4af1fe*/
              v48 = v44; /*0x4af206*/
              v49 = v45; /*0x4af211*/
              v52 = v64[1]; /*0x4af261*/
              v53 = v64[2]; /*0x4af265*/
              BlitterCopySHP(v56, &v60, &v46, v64, (int)&v50, &v42, SHPFrame, a9, a10, a11, a12, 0); /*0x4af269*/
            }
          }
        }
        if ( v39 ) /*0x4af275*/
          (**v39)(v39, 1); /*0x4af27b*/
        return Vector::Clear((int)v65); /*0x4af284*/
      }
    }
  }
  return result; /*0x4af289*/
}



// ==== 0x004AF2A0  BlitterDrawSHP  this=ObjectClass  sig=csp ====
int __fastcall BlitterDrawSHP(
        int *a1,
        int a2,
        int *a3,
        _DWORD *a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int *SHPFrame; // eax
  int v15; // edx
  int v16; // eax
  int result; // eax
  int *v18; // [esp-18h] [ebp-40h]
  int v19[4]; // [esp+8h] [ebp-20h] BYREF
  char v20[16]; // [esp+18h] [ebp-10h] BYREF

  SHPFrame = a8; /*0x4af2a0*/
  *(_DWORD *)(a2 + 380) = a7; /*0x4af2b1*/
  if ( !a8 )
    SHPFrame = (int *)BuildingClass::GetSHPFrame((BuildingClass *)a2, a7 != 0 ? 0x10 : 0);
  v15 = *a5; /*0x4af2d0*/
  v19[1] = a5[1]; /*0x4af2d5*/
  v19[0] = v15; /*0x4af2dd*/
  v19[2] = a4[2]; /*0x4af2e4*/
  v19[3] = a4[3]; /*0x4af2eb*/
  v18 = SHPFrame; /*0x4af308*/
  v16 = (*(int (__thiscall **)(int *, char *))(*a3 + 120))(a3, v20); /*0x4af313*/
  LOBYTE(result) = BlitterCopySHP(a1, a6, v19, a3, v16, a4, v18, a9, a10, a11, a12, a13); /*0x4af323*/
  return result; /*0x4af328*/
}



// ==== 0x004AF330  sub_4AF330  this=-  sig=ida-proto ====
void sub_4AF330()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4af33c*/
  dbl_8A0778 = Math::Sqrt(v0 + v0); /*0x4af34e*/
}



// ==== 0x004AF360  sub_4AF360  this=-  sig=ida-proto ====
void sub_4AF360()
{
  dbl_8A07C8 = dbl_8A0778 / 60.0; /*0x4af36c*/
}



// ==== 0x004AF380  sub_4AF380  this=-  sig=ida-proto ====
void sub_4AF380()
{
  dbl_8A07B0 = 1.0 / dbl_8A07C8; /*0x4af38c*/
}



// ==== 0x004AF3A0  sub_4AF3A0  this=-  sig=ida-proto ====
void sub_4AF3A0()
{
  dbl_8A07A8 = 0.0174532925199433 * 45.0; /*0x4af3ac*/
}



// ==== 0x004AF3C0  sub_4AF3C0  this=-  sig=ida-proto ====
void sub_4AF3C0()
{
  dbl_8A0780 = 0.0174532925199433 * 60.0; /*0x4af3cc*/
}



// ==== 0x004AF3E0  sub_4AF3E0  this=-  sig=ida-proto ====
void sub_4AF3E0()
{
  dbl_8A0758 = 0.0174532925199433 * 90.0; /*0x4af3ec*/
}



// ==== 0x004AF400  sub_4AF400  this=-  sig=ida-proto ====
__int64 sub_4AF400()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0758 - dbl_8A0780); /*0x4af412*/
  result = Math::RoundToInt(v0 * dbl_8A0778 * 0.5); /*0x4af426*/
  dword_8A07D0 = result; /*0x4af42b*/
  return result; /*0x4af430*/
}



// ==== 0x004AF440  sub_4AF440  this=-  sig=ida-proto ====
void sub_4AF440()
{
  dbl_8A0788 = Math::ArcTan((double)dword_8A07D0 * 0.00390625); /*0x4af457*/
}



// ==== 0x004AF470  sub_4AF470  this=-  sig=ida-proto ====
void sub_4AF470()
{
  dbl_8A07A0 = Math::ArcTan((double)(2 * dword_8A07D0) / dbl_8A0778); /*0x4af492*/
}



// ==== 0x004AF4A0  sub_4AF4A0  this=-  sig=ida-proto ====
__int64 sub_4AF4A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A07D0) + 0.5); /*0x4af4bb*/
  dword_8A07C4 = result; /*0x4af4c0*/
  return result; /*0x4af4c6*/
}



// ==== 0x004AF4D0  sub_4AF4D0  this=-  sig=ida-proto ====
int sub_4AF4D0()
{
  word_8A0770 = 0; /*0x4af4d2*/
  word_8A0772 = 0; /*0x4af4d8*/
  return 0; /*0x4af4de*/
}



// ==== 0x004AF4E0  sub_4AF4E0  this=-  sig=ida-proto ====
int sub_4AF4E0()
{
  g_DDraw_ClipRect = 0; /*0x4af4e2*/
  qword_8A0794 = 0; /*0x4af4e7*/
  return 0; /*0x4af4f1*/
}



// ==== 0x004AF500  sub_4AF500  this=-  sig=ida-proto ====
int sub_4AF500()
{
  dword_8A07C0 = 0; /*0x4af505*/
  dword_8A07B8 = 128; /*0x4af50f*/
  dword_8A07BC = 128; /*0x4af514*/
  return 128; /*0x4af519*/
}



// ==== 0x004AF520  sub_4AF520  this=-  sig=ida-proto ====
int sub_4AF520()
{
  dword_8A0760 = 0; /*0x4af522*/
  dword_8A0764 = 0; /*0x4af527*/
  dword_8A0768 = 0; /*0x4af52c*/
  dword_8A076C = 0; /*0x4af531*/
  return 0; /*0x4af536*/
}



// ==== 0x004AF540  LocomotionClass::Initialize  this=DriveLocomotionClass  sig=csp ====
int __thiscall LocomotionClass::Initialize(LocomotionClass *this)
{
  int v2; // ecx
  int v3; // ecx

  LocomotionClass::Init(this); /*0x4af543*/
  this->CurrentRamp = 0; /*0x4af54d*/
  this->u32_8 = 0; /*0x4af550*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4af553*/
  this->q02C = 0; /*0x4af559*/
  this->SlopeTimer = v2; /*0x4af55c*/
  this->q00C = 0; /*0x4af55f*/
  this->Dest = g_DDraw_ClipRect; /*0x4af568*/
  this->CurrentRamp = qword_8A0794; /*0x4af570*/
  this->HeadToCoord = g_DDraw_ClipRect; /*0x4af585*/
  this->Dirty = qword_8A0794; /*0x4af58e*/
  v3 = HIDWORD(qword_8A0794); /*0x4af591*/
  this->MovementSpeed = 0; /*0x4af597*/
  this->SpeedAccum = 0; /*0x4af59a*/
  this->q048 = v3; /*0x4af59d*/
  this->__pad_015 = 0; /*0x4af5a3*/
  this->TrackNumber = -1; /*0x4af5a6*/
  this->TrackIndex = -1; /*0x4af5a9*/
  this->u32_60 = 0; /*0x4af5ac*/
  this->IsTurretLockedDown = 0; /*0x4af5af*/
  this->IsRotating = 0; /*0x4af5b2*/
  this->IsDriving = 0; /*0x4af5b5*/
  this->IsRocking = 0; /*0x4af5b8*/
  this->UnLocked = 1; /*0x4af5bb*/
  this->ptr_68 = 0; /*0x4af5bf*/
  *(_DWORD *)this->ILocomotion = &DriveLocomotionClass::`vftable'; /*0x4af5c2*/
  *(_DWORD *)&this->ILocomotion[4] = &DriveLocomotionClass::`vftable'; /*0x4af5c8*/
  this->ptr_C = &off_7E7E8C; /*0x4af5cf*/
  return (int)this->ILocomotion; /*0x4af5d8*/
}



// ==== 0x004AF610  JumpjetLocomotionClass::LoadLocomotionFromStream  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  char *pad_50; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x4af611*/
  if ( !pad_0 ) /*0x4af618*/
    return -2147467261; /*0x4af621*/
  pad_50 = this->__pad_50; /*0x4af62b*/
  if ( *(_DWORD *)this->__pad_50 ) /*0x4af628*/
  {
    this = 0; /*0x4af634*/
    v5 = StreamClass::Set2((StreamClass *)&this, pad_50); /*0x4af645*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4af653*/
      WinAPI::Wrapper(v5); /*0x4af656*/
    if ( !this ) /*0x4af661*/
      return -2147467259; /*0x4af66a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x4af674*/
    if ( this ) /*0x4af67c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x4af685*/
      return v6; /*0x4af68c*/
    }
  }
  else
  {
    pad_0 = 0; /*0x4af692*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x4af69c*/
      return -2147467259; /*0x4af69c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x4af6ad*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x4af6b1*/
    {
      v9 = this; /*0x4af6c5*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x4af6cd*/
      v8 = v9; /*0x4af6d2*/
      pad_0 = v9->LocomotionClass; /*0x4af6d5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x4af6b7*/
      v8 = 0; /*0x4af6bc*/
      pad_0 = 0; /*0x4af6be*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4af6e3*/
      WinAPI::Wrapper(v7); /*0x4af6e6*/
    if ( !v8 ) /*0x4af6f1*/
      return -2147467259; /*0x4af6fa*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x4af704*/
    if ( pad_0 ) /*0x4af70c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x4af711*/
  }
  return v6; /*0x4af61a*/
}



// ==== 0x004AF720  DriveLocomotionClass::QueryInterface  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::QueryInterface(DriveLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x4af732*/
  if ( result == -2147467262 ) /*0x4af73c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4af74b*/
    {
      if ( this ) /*0x4af752*/
        pad_18 = this->__pad_18; /*0x4af754*/
      else
        pad_18 = 0; /*0x4af759*/
      *a3 = (int)pad_18; /*0x4af75b*/
    }
    if ( *a3 ) /*0x4af75e*/
    {
      (*(void (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x4af772*/
      return 0; /*0x4af775*/
    }
    else
    {
      return -2147467262; /*0x4af766*/
    }
  }
  return result; /*0x4af764*/
}



// ==== 0x004AF780  DriveLocomotionClass::BeginMove  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::BeginMove(DriveLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x4af787*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x4af792*/
  if ( v3 < 0 ) /*0x4af796*/
    return v3; /*0x4af796*/
  if ( this ) /*0x4af79a*/
  {
    this->Piggybackee = 0; /*0x4af79c*/
    *(_DWORD *)this->LocomotionClass = &DriveLocomotionClass::`vftable'; /*0x4af7a3*/
    *(_DWORD *)&this->LocomotionClass[4] = &DriveLocomotionClass::`vftable'; /*0x4af7a9*/
    *(_DWORD *)this->__pad_18 = &off_7E7E8C; /*0x4af7b0*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x4af7c3*/
  if ( !(_BYTE)pStm ) /*0x4af7cc*/
    return v3; /*0x4af7f8*/
  Piggybackee = this->Piggybackee; /*0x4af7ce*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x4af7d1*/
  if ( Piggybackee ) /*0x4af7d6*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x4af7db*/
  *p_Piggybackee = 0; /*0x4af7e5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x4af7f1*/
}



// ==== 0x004AF800  DriveLocomotionClass::LoadFromStream  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::LoadFromStream(DriveLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  DriveLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x4af806*/
  v4 = this; /*0x4af80b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x4af817*/
  if ( IPersistStream < 0 ) /*0x4af81b*/
    return IPersistStream; /*0x4af81b*/
  if ( !v4->Piggybackee ) /*0x4af826*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x4af8c3*/
    LOBYTE(a3) = 0; /*0x4af8cf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x4af8d4*/
    return IPersistStream; /*0x4af8d8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x4af82c*/
  LOBYTE(a3) = 1; /*0x4af838*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x4af83d*/
  Piggybackee = v4->Piggybackee; /*0x4af840*/
  pPStm = 0; /*0x4af843*/
  if ( Piggybackee ) /*0x4af84d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, DriveLocomotionClass **))Piggybackee)( /*0x4af85e*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x4af862*/
    {
      v9 = (int *)this; /*0x4af87b*/
      if ( pPStm ) /*0x4af881*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4af886*/
      pPStm = v9; /*0x4af889*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x4af868*/
      pPStm = 0; /*0x4af86d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4af897*/
      WinAPI::Wrapper(v8); /*0x4af89a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x4af8ab*/
  if ( pPStm ) /*0x4af8b3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4af8b8*/
  return v10; /*0x4af8bd*/
}



// ==== 0x004AF8E0  JumpjetLocomotionClass::StubReturnZero  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x4af8e6*/
    return -2147467261; /*0x4af8e8*/
  if ( *(_DWORD *)this->__pad_50 ) /*0x4af8f4*/
    return -2147467259; /*0x4af91b*/
  *(_DWORD *)this->__pad_50 = a2; /*0x4af902*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x4af908*/
  return 0; /*0x4af8ed*/
}



// ==== 0x004AF930  JumpjetLocomotionClass::StubReturnZero_0  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x4af936*/
    return -2147467261; /*0x4af938*/
  v3 = *(_DWORD *)this->__pad_50; /*0x4af944*/
  if ( !v3 ) /*0x4af949*/
    return 1; /*0x4af959*/
  *a2 = v3; /*0x4af94b*/
  *(_DWORD *)this->__pad_50 = 0; /*0x4af94d*/
  return 0; /*0x4af93d*/
}



// ==== 0x004AF970  JumpjetLocomotionClass::CheckPiggybackState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckPiggybackState(JumpjetLocomotionClass *this)
{
  return !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) /*0x4af9a0*/
      && *(_DWORD *)this->__pad_50
      && this->unknown_4D
      && !*(_BYTE *)(*((_DWORD *)this - 3) + 1709);
}



// ==== 0x004AF9B0  ObjectClass::method_4AF9B0  this=ObjectClass  sig=csp ====
void *__thiscall sub_4AF9B0(ObjectClass *this, void *a2)
{
  ObjectClass *nextObject; // ebx
  int occupant; // edx
  int fallRate; // eax
  ObjectClass *v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int referenceCount; // edx
  Matrix3x4 v13; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(&v13); /*0x4af9bc*/
  nextObject = this->nextObject; /*0x4af9c1*/
  if ( nextObject ) /*0x4af9ca*/
  {
    occupant = this->occupant; /*0x4af9d0*/
    fallRate = this->fallRate; /*0x4af9d3*/
    if ( occupant != -1 ) /*0x4af9df*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant >= fallRate ) /*0x4af9e7*/
        fallRate = 0; /*0x4af9ed*/
      else
        fallRate -= *(_DWORD *)&stru_A8EB00.?[416] - occupant; /*0x4af9e9*/
    }
    if ( (double)((int)nextObject - fallRate) / (double)(int)this->nextObject < 1.0 ) /*0x4afa08*/
    {
      v6 = this->nextObject; /*0x4afa0a*/
      if ( v6 ) /*0x4afa13*/
      {
        v8 = this->occupant; /*0x4afa1d*/
        v9 = this->fallRate; /*0x4afa20*/
        if ( v8 != -1 ) /*0x4afa26*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x4afa2e*/
            v9 = 0; /*0x4afa34*/
          else
            v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x4afa30*/
        }
        v7 = (double)((int)v6 - v9) / (double)(int)this->nextObject; /*0x4afa40*/
      }
      else
      {
        v7 = 1.0; /*0x4afa15*/
      }
      v10 = InterpolateVoxelAnimPose(v14, (int)this->?, this->?, v7); /*0x4afa55*/
      goto LABEL_17; /*0x4afa5a*/
    }
  }
  referenceCount = this->?; /*0x4afa5c*/
  if ( referenceCount ) /*0x4afa61*/
  {
    v10 = CopyAudioData(v14, referenceCount); /*0x4afa67*/
LABEL_17:
    qmemcpy(&v13, v10, sizeof(v13)); /*0x4afa77*/
  }
  qmemcpy(a2, &v13, 0x30u); /*0x4afa79*/
  return a2; /*0x4afa8a*/
}



// ==== 0x004AFAA0  ObjectClass::method_4AFAA0  this=ObjectClass  sig=csp ====
double __thiscall sub_4AFAA0(ObjectClass *this)
{
  ObjectClass *nextObject; // esi
  int occupant; // edx
  int fallRate; // eax

  nextObject = this->nextObject; /*0x4afaa4*/
  if ( !nextObject ) /*0x4afaad*/
    return 1.0; /*0x4afab9*/
  occupant = this->occupant; /*0x4afaba*/
  fallRate = this->fallRate; /*0x4afabd*/
  if ( occupant != -1 ) /*0x4afac3*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant < fallRate ) /*0x4afacf*/
      return (double)((int)nextObject - (fallRate - (*(_DWORD *)&stru_A8EB00.?[416] - occupant))) /*0x4afae5*/
           / (double)(int)nextObject;
    fallRate = 0; /*0x4afae6*/
  }
  return (double)((int)nextObject - fallRate) / (double)(int)nextObject; /*0x4afab5*/
}



// ==== 0x004AFB00  ObjectClass::method_4AFB00  this=ObjectClass  sig=csp ====
int __thiscall sub_4AFB00(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // [esp+4h] [ebp-Ch]

  result = this->referenceCount; /*0x4afb00*/
  if ( a2 != result ) /*0x4afb0c*/
  {
    this->NeedsSaveOrLink = result; /*0x4afb0e*/
    this->referenceCount = a2; /*0x4afb11*/
    v3 = this + 9; /*0x4afb19*/
    *v3 = dword_A8ED84; /*0x4afb22*/
    v3[1] = v4; /*0x4afb2a*/
    v3[2] = 3; /*0x4afb2d*/
    v3[3] = 3; /*0x4afb30*/
    return v4; /*0x4afb24*/
  }
  return result; /*0x4afb34*/
}



// ==== 0x004AFB40  DriveLocomotionClass::InitMovementState  this=DriveLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::InitMovementState(DriveLocomotionClass *this, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  this->CurrentRamp = a2; /*0x4afb4d*/
  *(_DWORD *)this->__pad_18 = a2; /*0x4afb50*/
  this->PreviousRamp = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4afb5f*/
  this->SlopeTimer[0] = v3; /*0x4afb65*/
  this->SlopeTimer[1] = 0; /*0x4afb68*/
  this->SlopeTimer[2] = 0; /*0x4afb6b*/
  return &this->PreviousRamp; /*0x4afb6e*/
}



// ==== 0x004AFB80  JumpjetLocomotionClass::StubReturnTrue  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue(JumpjetLocomotionClass *this)
{
  if ( LODWORD(this->Wobbles) != g_DDraw_ClipRect || *(_QWORD *)&this->Deviation != qword_8A0794 ) /*0x4afba1*/
    return 1; /*0x4afbb1*/
  return (*(_DWORD *)&this->__pad_39[3] != g_DDraw_ClipRect || *(_QWORD *)this->DestinationCoords != qword_8A0794) /*0x4afc00*/
      && (*(_DWORD *)&this->__pad_39[3] != this->?->?[0] || this->DestinationCoords[0] != this->?->?[1]);
}



// ==== 0x004AFC20  DriveLocomotionClass::StubReturnTrue_0  this=DriveLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_0(DriveLocomotionClass *this)
{
  if ( (unsigned __int8)TimerClass::Active((int)this->?->?) ) /*0x4afc2e*/
    return 1; /*0x4afc37*/
  return (*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x4afc79*/
      && (this->Dest[2] != g_DDraw_ClipRect || *(_QWORD *)this->HeadToCoord != qword_8A0794)
      && (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 334))(this->?) > 0;
}



// ==== 0x004AFC90  JumpjetLocomotionClass::GetCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int Deviation; // edx
  int v3; // eax

  Deviation = this->Deviation; /*0x4afc9d*/
  v3 = *(_DWORD *)&this->NoWobbles; /*0x4afca0*/
  *a2 = LODWORD(this->Wobbles); /*0x4afca5*/
  a2[1] = Deviation; /*0x4afca7*/
  a2[2] = v3; /*0x4afcaa*/
  return a2; /*0x4afcaf*/
}



// ==== 0x004AFCC0  JumpjetLocomotionClass::GetRenderCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetRenderCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( *(_DWORD *)&this->__pad_39[3] == g_DDraw_ClipRect && *(_QWORD *)this->DestinationCoords == qword_8A0794 ) /*0x4afcde*/
  {
    Owner = this->?; /*0x4afd0b*/
    location = Owner->?; /*0x4afd14*/
    v6 = Owner->?[0]; /*0x4afd16*/
    v7 = Owner->?[1]; /*0x4afd18*/
    v8 = location[2]; /*0x4afd1b*/
    *a2 = v6; /*0x4afd24*/
    a2[1] = v7; /*0x4afd26*/
    a2[2] = v8; /*0x4afd29*/
    return a2; /*0x4afd1e*/
  }
  else
  {
    v2 = this->DestinationCoords[0]; /*0x4afcf4*/
    v3 = this->DestinationCoords[1]; /*0x4afcf7*/
    *a2 = *(_DWORD *)&this->__pad_39[3]; /*0x4afcfc*/
    a2[1] = v2; /*0x4afcfe*/
    a2[2] = v3; /*0x4afd01*/
    return a2; /*0x4afd04*/
  }
}



// ==== 0x004AFD40  DriveLocomotionClass::ConvertCoordToCell  this=DriveLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::ConvertCoordToCell(
        DriveLocomotionClass *this,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  _DWORD *result; // eax
  int v5; // ecx
  int v6; // edx

  result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x4afd4b*/
  if ( !(_BYTE)result ) /*0x4afd53*/
  {
    result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?); /*0x4afd5e*/
    if ( !(_BYTE)result ) /*0x4afd66*/
    {
      result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x4afd71*/
      if ( !(_BYTE)result ) /*0x4afd79*/
      {
        result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x4afd80*/
        if ( !(_BYTE)result ) /*0x4afd88*/
        {
          result = a2; /*0x4afd8a*/
          v5 = a3; /*0x4afd8e*/
          v6 = a4; /*0x4afd92*/
          this->SlopeTimer[3] = (int)a2; /*0x4afd99*/
          this->Dest[0] = v5; /*0x4afd9c*/
          this->Dest[1] = v6; /*0x4afd9f*/
          if ( result != (_DWORD *)g_DDraw_ClipRect || __PAIR64__(v6, v5) != qword_8A0794 ) /*0x4afdb2*/
          {
            a2 = result; /*0x4afdbc*/
            a3 = v5; /*0x4afdc4*/
            a4 = v6; /*0x4afdce*/
            result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x4afdd2*/
            if ( (result[80] & 0x100) != 0 ) /*0x4afde0*/
            {
              result = (_DWORD *)(dword_8A07C4 + this->Dest[1]); /*0x4afdeb*/
              this->Dest[1] = (int)result; /*0x4afded*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4afdf0*/
}



// ==== 0x004AFE00  DriveLocomotionClass::CheckWindowsErrorWrapper  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckWindowsErrorWrapper(DriveLocomotionClass *this)
{
  FootClass *Owner; // eax
  _DWORD *ptr_8; // esi
  double v3; // st7
  int result; // eax

  if ( this->Dest[2] != g_DDraw_ClipRect || *(_QWORD *)this->HeadToCoord != qword_8A0794 ) /*0x4afe1d*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3220) ) /*0x4afe36*/
    {
      Owner = this->?; /*0x4afe40*/
      if ( !LOBYTE(Owner[1].?) ) /*0x4afe43*/
      {
        ptr_8 = Owner[1].?; /*0x4afe4d*/
        if ( ptr_8 ) /*0x4afe55*/
        {
          do /*0x4afe87*/
          {
            if ( !ptr_8[413] ) /*0x4afe57*/
              WinAPI::Wrapper(-2147467261); /*0x4afe66*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)ptr_8[413] + 72))(ptr_8[413]); /*0x4afe74*/
            ptr_8 = (_DWORD *)ptr_8[434]; /*0x4afe77*/
          }
          while ( ptr_8 && ptr_8 != (_DWORD *)ptr_8[434] ); /*0x4afe87*/
        }
      }
    }
  }
  if ( *(double *)&this->SpeedAccum >= 0.300000011920929 ) /*0x4afe97*/
    v3 = 0.300000011920929; /*0x4afe9e*/
  else
    v3 = *(double *)&this->SpeedAccum; /*0x4afe99*/
  *(double *)&this->SpeedAccum = v3; /*0x4afea4*/
  this->SlopeTimer[3] = g_DDraw_ClipRect; /*0x4afeb0*/
  result = qword_8A0794; /*0x4afeb2*/
  *(_QWORD *)this->Dest = qword_8A0794; /*0x4afeb7*/
  return result; /*0x4afec3*/
}



// ==== 0x004AFED0  ObjectClass::method_4AFED0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4AFED0(ObjectClass *this)
{
  ObjectClass *nextObject; // edi
  double v2; // st7
  int fallRate; // eax
  int occupant; // esi
  float *ptr_C; // ecx
  BOOL result; // eax

  nextObject = this->nextObject; /*0x4afed4*/
  if ( nextObject ) /*0x4afedd*/
  {
    fallRate = this->fallRate; /*0x4afee7*/
    occupant = this->occupant; /*0x4afeeb*/
    if ( occupant != -1 ) /*0x4afef1*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant >= fallRate ) /*0x4afefd*/
        fallRate = 0; /*0x4aff03*/
      else
        fallRate -= *(_DWORD *)&stru_A8EB00.?[416] - occupant; /*0x4afeff*/
    }
    v2 = (double)((int)nextObject - fallRate) / (double)(int)this->nextObject; /*0x4aff10*/
  }
  else
  {
    v2 = 1.0; /*0x4afedf*/
  }
  result = 0; /*0x4aff4f*/
  if ( v2 == 1.0 ) /*0x4aff20*/
  {
    ptr_C = (float *)this->?; /*0x4aff22*/
    if ( fabs(ptr_C[202]) < 0.005 && fabs(ptr_C[203]) < 0.005 ) /*0x4aff4d*/
      return 1; /*0x4aff20*/
  }
  return result; /*0x4aff54*/
}



// ==== 0x004AFF60  JumpjetLocomotionClass::ComputeVoxelTransform  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeVoxelTransform(JumpjetLocomotionClass *this, float *a2, _DWORD *a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  float Accel; // edi
  double v7; // st7
  float Climb; // edx
  int Height; // eax
  FootClass *Owner; // ecx
  long double v11; // st7
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  FootClass *v18; // ecx
  float *v19; // eax
  float v20; // ebx
  Timeout *p_Climb; // ecx
  Timeout v22; // edi
  int v23; // eax
  double v24; // st7
  float v25; // edi
  const void *v26; // eax
  int v27; // esi
  float *v28; // eax
  float *v29; // edx
  float *v30; // ecx
  int v31; // ecx
  float *Transform; // eax
  float v33; // ebx
  float v34; // edx
  int v35; // eax
  float v36; // edx
  double v37; // st7
  float v38; // ecx
  int v39; // eax
  const void *v40; // eax
  int TurnRate; // esi
  float v43; // [esp+4h] [ebp-234h]
  float v44; // [esp+4h] [ebp-234h]
  float v45; // [esp+4h] [ebp-234h]
  float *v46; // [esp+4h] [ebp-234h]
  float v47; // [esp+14h] [ebp-224h]
  float v48; // [esp+18h] [ebp-220h]
  float v49; // [esp+1Ch] [ebp-21Ch]
  int v50; // [esp+1Ch] [ebp-21Ch]
  float v51; // [esp+20h] [ebp-218h]
  int v52; // [esp+20h] [ebp-218h]
  float v53; // [esp+24h] [ebp-214h]
  int v54; // [esp+24h] [ebp-214h]
  Matrix3x4 v55; // [esp+28h] [ebp-210h] BYREF
  Matrix3x4 v56; // [esp+58h] [ebp-1E0h] BYREF
  Matrix3x4 v57; // [esp+88h] [ebp-1B0h] BYREF
  Transform v58[12]; // [esp+B8h] [ebp-180h] BYREF
  Transform v59[12]; // [esp+E8h] [ebp-150h] BYREF
  float v60[12]; // [esp+118h] [ebp-120h] BYREF
  float v61[12]; // [esp+148h] [ebp-F0h] BYREF
  char v62[48]; // [esp+178h] [ebp-C0h] BYREF
  float v63[12]; // [esp+1A8h] [ebp-90h] BYREF
  _BYTE v64[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v65[12]; // [esp+208h] [ebp-30h] BYREF

  Accel = this->Accel; /*0x4aff72*/
  if ( Accel == 0.0 ) /*0x4aff7b*/
  {
    v7 = 1.0; /*0x4aff7d*/
  }
  else
  {
    Climb = this->Climb; /*0x4aff85*/
    Height = this->Height; /*0x4aff88*/
    if ( Climb != NAN ) /*0x4aff8e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Climb) >= Height ) /*0x4aff9a*/
        Height = 0; /*0x4affa0*/
      else
        Height -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Climb); /*0x4aff9c*/
    }
    v7 = (double)(LODWORD(Accel) - Height) / (double)SLODWORD(this->Accel); /*0x4affac*/
  }
  if ( v7 == 1.0 ) /*0x4affbb*/
  {
    Owner = this->?; /*0x4affbd*/
    if ( fabs(*(float *)&Owner->?) < 0.005 && fabs(*(float *)&Owner->?) < 0.005 ) /*0x4affe8*/
    {
      if ( a3 && *a3 != -1 ) /*0x4b02bf*/
      {
        v31 = *a3 << 6; /*0x4b02c1*/
        *a3 = v31; /*0x4b02c4*/
        *a3 = v31 + this->TurnRate; /*0x4b02cb*/
      }
      Transform = Turret::GetTransform((LocomotionClass *)this, v60, a3); /*0x4b02d7*/
      Transform::Copy(v59, Transform); /*0x4b02e4*/
      Matrix3x4::Identity(&v55); /*0x4b02ed*/
      v33 = this->Accel; /*0x4b02f2*/
      if ( v33 == 0.0 ) /*0x4b02fb*/
        goto LABEL_48; /*0x4b02fb*/
      v34 = this->Climb; /*0x4b0301*/
      v35 = this->Height; /*0x4b0304*/
      if ( v34 != NAN ) /*0x4b0310*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v34) >= v35 ) /*0x4b0318*/
          v35 = 0; /*0x4b031e*/
        else
          v35 -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v34); /*0x4b031a*/
      }
      if ( (double)(LODWORD(v33) - v35) / (double)SLODWORD(this->Accel) >= 1.0 ) /*0x4b0339*/
      {
LABEL_48:
        TurnRate = this->TurnRate; /*0x4b0390*/
        if ( !TurnRate ) /*0x4b0395*/
        {
LABEL_51:
          qmemcpy(v58, &v55, sizeof(v58)); /*0x4b03c9*/
          v46 = (float *)v59; /*0x4b03cb*/
          v29 = (float *)v58; /*0x4b03cc*/
          v30 = (float *)v62; /*0x4b03d3*/
          goto LABEL_52; /*0x4b03d3*/
        }
        v40 = CopyAudioData((char *)v61, TurnRate); /*0x4b03a0*/
      }
      else
      {
        v36 = this->Accel; /*0x4b033b*/
        if ( v36 == 0.0 ) /*0x4b0344*/
        {
          v37 = 1.0; /*0x4b0346*/
        }
        else
        {
          v38 = this->Climb; /*0x4b034e*/
          v39 = this->Height; /*0x4b0351*/
          if ( v38 != NAN ) /*0x4b0357*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v38) >= v39 ) /*0x4b035f*/
              v39 = 0; /*0x4b0365*/
            else
              v39 -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v38); /*0x4b0361*/
          }
          v37 = (double)(LODWORD(v36) - v39) / (double)SLODWORD(this->Accel); /*0x4b0371*/
        }
        v40 = InterpolateVoxelAnimPose(v63, this->Speed, this->TurnRate, v37); /*0x4b0389*/
      }
      qmemcpy(&v55, v40, sizeof(v55)); /*0x4b03b0*/
      goto LABEL_51; /*0x4b03b0*/
    }
  }
  Matrix3x4::Identity(&v56); /*0x4afff2*/
  Matrix3x4::Identity(&v57); /*0x4afffe*/
  v11 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 864); /*0x4b0011*/
  v49 = v11; /*0x4b0019*/
  v51 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 872); /*0x4b002f*/
  Math::ArcTan2(*(float *)&this->?->?); /*0x4b003c*/
  v47 = v3; /*0x4b0044*/
  Math::SinCos(*(float *)&this->?->?); /*0x4b0051*/
  v53 = v4; /*0x4b0059*/
  Math::ArcTan2(*(float *)&this->?->?); /*0x4b0066*/
  v48 = v5; /*0x4b006e*/
  Math::SinCos(*(float *)&this->?->?); /*0x4b007b*/
  LOWORD(v12) = Math::RoundToInt(fabs(v11) * v49 + fabs(v53) * v51); /*0x4b0095*/
  v54 = v12; /*0x4b00a2*/
  LOWORD(v13) = Math::RoundToInt(v47 * v51); /*0x4b00a6*/
  LOWORD(v14) = Math::RoundToInt(v51 - (double)v13); /*0x4b00b7*/
  v15 = v14; /*0x4b00c4*/
  v52 = v14; /*0x4b00c6*/
  LOWORD(v16) = Math::RoundToInt(v48 * v49); /*0x4b00ca*/
  LOWORD(v17) = Math::RoundToInt(v49 - (double)v16); /*0x4b00db*/
  v18 = this->?; /*0x4b00e0*/
  v50 = v17; /*0x4b00e5*/
  if ( *(float *)&v18->? < 0.0 ) /*0x4b00fa*/
    v52 = -v15; /*0x4b00fe*/
  if ( *(float *)&v18->? > 0.0 ) /*0x4b0113*/
    v50 = -v17; /*0x4b0117*/
  v43 = (float)v54; /*0x4b0124*/
  Matrix3x3::ApplyCol1(v56.m_Data, v43); /*0x4b0127*/
  v44 = (float)v52; /*0x4b0138*/
  Matrix3x4::Translate(v57.m_Data, v44); /*0x4b013b*/
  v45 = (float)v50; /*0x4b014c*/
  Matrix3x3::ApplyCol0(v57.m_Data, v45); /*0x4b014f*/
  Matrix3x3::RotateX(v57.m_Data, *(float *)&this->?->?); /*0x4b0165*/
  Matrix3D::RotateZ(v57.m_Data, *(float *)&this->?->?); /*0x4b017b*/
  if ( a3 ) /*0x4b0185*/
    *a3 = -1; /*0x4b0187*/
  v19 = Turret::GetTransform((LocomotionClass *)this, v65, a3); /*0x4b0197*/
  Transform::Copy(v58, v19); /*0x4b01a4*/
  Matrix3x4::Identity(&v55); /*0x4b01ad*/
  v20 = this->Accel; /*0x4b01b2*/
  p_Climb = (Timeout *)&this->Climb; /*0x4b01b5*/
  if ( v20 != 0.0 ) /*0x4b01be*/
  {
    v22 = *p_Climb; /*0x4b01c0*/
    v23 = this->Height; /*0x4b01c2*/
    if ( *p_Climb != -1 ) /*0x4b01c8*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v22 >= v23 ) /*0x4b01d4*/
        v23 = 0; /*0x4b01da*/
      else
        v23 -= *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v22; /*0x4b01d6*/
    }
    if ( (double)(LODWORD(v20) - v23) / (double)SLODWORD(this->Accel) < 1.0 ) /*0x4b01f5*/
    {
      if ( LODWORD(this->Accel) ) /*0x4b01f7*/
      {
        v25 = this->Accel; /*0x4b0206*/
        v24 = (double)(LODWORD(v25) - Timeout::GetRemaining(p_Climb)) / (double)SLODWORD(v25); /*0x4b021c*/
      }
      else
      {
        v24 = 1.0; /*0x4b01fe*/
      }
      v26 = InterpolateVoxelAnimPose(v64, this->Speed, this->TurnRate, v24); /*0x4b0234*/
      goto LABEL_29; /*0x4b0239*/
    }
  }
  v27 = this->TurnRate; /*0x4b023b*/
  if ( v27 ) /*0x4b0240*/
  {
    v26 = CopyAudioData(v62, v27); /*0x4b024b*/
LABEL_29:
    qmemcpy(&v55, v26, sizeof(v55)); /*0x4b025b*/
  }
  qmemcpy(v59, &v55, sizeof(v59)); /*0x4b0274*/
  v46 = (float *)&v57; /*0x4b0284*/
  v28 = MultiplyMatrix3x4(v61, (float *)v56.m_Data, (float *)&v59[0].Transform_field_00); /*0x4b0292*/
  v29 = MultiplyMatrix3x4(v63, v28, (float *)&v58[0].Transform_field_00); /*0x4b02a5*/
  v30 = v60; /*0x4b02a7*/
LABEL_52:
  qmemcpy(&v56, MultiplyMatrix3x4(v30, v29, v46), sizeof(v56)); /*0x4b03da*/
  qmemcpy(a2, &v56, 0x30u); /*0x4b03fa*/
  return a2; /*0x4b03fc*/
}


