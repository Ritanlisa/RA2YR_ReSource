// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004A0010  EnumConnectionsClass::Release  this=EnumConnectionsClass  sig=csp ====
LONG __stdcall EnumConnectionsClass::_vt02(volatile LONG *Block)
{
  LONG result; // eax
  int i; // esi
  void *v3; // eax
  int v4; // [esp-8h] [ebp-10h]

  --g_BulletClassPool; /*0x4a0020*/
  result = InterlockedDecrement(Block + 8); /*0x4a0027*/
  if ( !result && Block ) /*0x4a0035*/
  {
    *Block = (volatile LONG)&vt_EnumConnectionsClass; /*0x4a0037*/
    for ( i = 0; i < *((_DWORD *)Block + 5); ++i ) /*0x4a0045*/
    {
      v4 = *(_DWORD *)(*((_DWORD *)Block + 2) + 8 * i); /*0x4a004d*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4a0050*/
    }
    (*(void (__thiscall **)(char *))(*((_DWORD *)Block + 1) + 12))((char *)Block + 4); /*0x4a0063*/
    v3 = (void *)*((_DWORD *)Block + 2); /*0x4a0066*/
    *((_DWORD *)Block + 1) = &vt_VectorClass_tagCONNECTDATA; /*0x4a0069*/
    if ( v3 ) /*0x4a0071*/
    {
      if ( *((_BYTE *)Block + 17) ) /*0x4a0073*/
      {
        __3_YAXPAX_Z(v3); /*0x4a007b*/
        *((_DWORD *)Block + 2) = 0; /*0x4a0083*/
      }
    }
    *((_BYTE *)Block + 17) = 0; /*0x4a008b*/
    *((_DWORD *)Block + 3) = 0; /*0x4a008f*/
    __3_YAXPAX_Z((void *)Block); /*0x4a0096*/
    return 0; /*0x4a009e*/
  }
  return result; /*0x4a00a1*/
}


// ==== 0x004A00B0  EnumConnectionsClass::ddtor  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::_vt03(_DWORD *a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v6; // ebp
  unsigned int i; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
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
  for ( i = 0; i < a2; *(_DWORD *)(v4 - 4) = *(_DWORD *)(v10 + 8 * v9 + 4) ) /*0x4a00f3*/
  {
    v8 = a1[7]; /*0x4a00f9*/
    if ( v8 >= a1[5] ) /*0x4a0101*/
      break; /*0x4a0101*/
    v11 = *(_DWORD *)(a1[2] + 8 * v8); /*0x4a0109*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 4))(v11); /*0x4a010c*/
    v9 = a1[7]; /*0x4a010f*/
    v4 += 8; /*0x4a0112*/
    ++v6; /*0x4a0115*/
    ++i; /*0x4a0116*/
    a1[7] = v9 + 1; /*0x4a011a*/
    v10 = a1[2]; /*0x4a011d*/
    *(_DWORD *)(v4 - 8) = *(_DWORD *)(v10 + 8 * v9); /*0x4a0123*/
  }
  if ( a4 ) /*0x4a013b*/
    *a4 = v6; /*0x4a013d*/
  return v6 != 0 ? 0 : -2147467259;
}


// ==== 0x004A0160  EnumConnectionsClass::Next  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::_vt04(int a1, int a2)
{
  *(_DWORD *)(a1 + 28) += a2; /*0x4a016d*/
  return 0; /*0x4a0172*/
}


// ==== 0x004A0180  EnumConnectionsClass::Skip  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::_vt05(int a1)
{
  *(_DWORD *)(a1 + 28) = 0; /*0x4a0184*/
  return 0; /*0x4a018d*/
}


// ==== 0x004A0190  EnumConnectionsClass::ResetConnections  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::_vt06(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  void *v5; // eax
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
  v3[2] = 0; /*0x4a01c8*/
  v3[3] = 0; /*0x4a01cb*/
  *((_BYTE *)v3 + 16) = 1; /*0x4a01ce*/
  *((_BYTE *)v3 + 17) = 0; /*0x4a01d2*/
  v3[1] = &vt_VectorClass_tagCONNECTDATA; /*0x4a01d5*/
  if ( v3 + 1 != a1 + 1 ) /*0x4a01db*/
  {
    VectorClass::ClearAndFree2((int)(v3 + 1)); /*0x4a01df*/
    v4 = a1[3]; /*0x4a01e5*/
    v3[3] = v4; /*0x4a01ea*/
    if ( v4 ) /*0x4a01ed*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a01f7*/
      v3[2] = v5; /*0x4a0201*/
      if ( v5 ) /*0x4a0204*/
      {
        v6 = v3[3]; /*0x4a0206*/
        v7 = 0; /*0x4a0209*/
        *((_BYTE *)v3 + 17) = 1; /*0x4a020d*/
        if ( v6 > 0 ) /*0x4a0211*/
        {
          do /*0x4a0236*/
          {
            v8 = (_DWORD *)(a1[2] + 8 * v7); /*0x4a021f*/
            v9 = (_DWORD *)(v3[2] + 8 * v7++); /*0x4a0224*/
            *v9 = *v8; /*0x4a0229*/
            v9[1] = v8[1]; /*0x4a022e*/
          }
          while ( v7 < v3[3] ); /*0x4a0236*/
        }
      }
    }
    else
    {
      v3[2] = 0; /*0x4a023c*/
      *((_BYTE *)v3 + 17) = 0; /*0x4a023f*/
    }
  }
  v3[5] = a1[5]; /*0x4a0249*/
  v3[6] = a1[6]; /*0x4a024f*/
  v3[1] = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a0252*/
  v10 = a1[7]; /*0x4a0258*/
  v3[8] = 0; /*0x4a025b*/
  v3[7] = v10; /*0x4a025e*/
  *v3 = &vt_EnumConnectionsClass; /*0x4a0261*/
  for ( i = 0; i < v3[5]; ++i ) /*0x4a026e*/
  {
    v13 = *(_DWORD *)(v3[2] + 8 * i); /*0x4a0276*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a0279*/
  }
  v12 = *v3; /*0x4a0284*/
  v3[8] = 0; /*0x4a0287*/
  (*(void (__stdcall **)(_DWORD *))(v12 + 4))(v3); /*0x4a028a*/
  *a2 = v3; /*0x4a0295*/
  return 0; /*0x4a019c*/
}


// ==== 0x004A02B0  EnumConnectionsClass::method_4A02B0  this=EnumConnectionsClass  sig=csp ====
_DWORD *__thiscall sub_4A02B0(_DWORD *this, _DWORD *a2)
{
  char *v3; // esi
  int v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int i; // esi
  int v12; // [esp-4h] [ebp-14h]

  v3 = (char *)(this + 1); /*0x4a02bc*/
  this->q008 = 0; /*0x4a02c1*/
  this->q00C = 0; /*0x4a02c4*/
  this->q010 = 1; /*0x4a02c7*/
  *((_BYTE *)this + 17) = 0; /*0x4a02cb*/
  this->q004 = &vt_VectorClass_tagCONNECTDATA; /*0x4a02ce*/
  if ( this + 1 != a2 ) /*0x4a02d4*/
  {
    VectorClass::ClearAndFree2((int)(this + 1)); /*0x4a02d8*/
    v4 = a2[2]; /*0x4a02de*/
    *((_DWORD *)v3 + 2) = v4; /*0x4a02e3*/
    if ( v4 ) /*0x4a02e6*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a02ec*/
      *((_DWORD *)v3 + 1) = v5; /*0x4a02f6*/
      if ( v5 ) /*0x4a02f9*/
      {
        v6 = *((_DWORD *)v3 + 2); /*0x4a02fb*/
        v7 = 0; /*0x4a02fe*/
        v3[13] = 1; /*0x4a0302*/
        if ( v6 > 0 ) /*0x4a0306*/
        {
          do /*0x4a0322*/
          {
            v8 = a2[1]; /*0x4a0308*/
            v9 = *((_DWORD *)v3 + 1); /*0x4a030b*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a0311*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a0318*/
            ++v7; /*0x4a031f*/
          }
          while ( v7 < *((_DWORD *)v3 + 2) ); /*0x4a0322*/
        }
      }
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0; /*0x4a0328*/
      v3[13] = 0; /*0x4a032b*/
    }
  }
  *((_DWORD *)v3 + 4) = a2[4]; /*0x4a0331*/
  *((_DWORD *)v3 + 5) = a2[5]; /*0x4a0337*/
  *(_DWORD *)v3 = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a033a*/
  this->q007 = 0; /*0x4a0340*/
  this->q008 = 0; /*0x4a0343*/
  *this = &vt_EnumConnectionsClass; /*0x4a0346*/
  for ( i = 0; i < this->q014; ++i ) /*0x4a0353*/
  {
    v12 = *(_DWORD *)(this->q008 + 8 * i); /*0x4a035b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x4a035e*/
  }
  return this; /*0x4a036b*/
}


// ==== 0x004A0380  EnumConnectionsClass::method_4A0380  this=EnumConnectionsClass  sig=csp ====
_DWORD *__thiscall sub_4A0380(_DWORD *this, _DWORD *a2)
{
  char *v3; // esi
  int v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int i; // esi
  int v13; // [esp-4h] [ebp-14h]

  v3 = (char *)(this + 1); /*0x4a038f*/
  this->q008 = 0; /*0x4a0394*/
  this->q00C = 0; /*0x4a0397*/
  this->q010 = 1; /*0x4a039a*/
  *((_BYTE *)this + 17) = 0; /*0x4a039e*/
  this->q004 = &vt_VectorClass_tagCONNECTDATA; /*0x4a03a1*/
  if ( this + 1 != a2 + 1 ) /*0x4a03a7*/
  {
    VectorClass::ClearAndFree2((int)(this + 1)); /*0x4a03ab*/
    v4 = a2[3]; /*0x4a03b1*/
    *((_DWORD *)v3 + 2) = v4; /*0x4a03b6*/
    if ( v4 ) /*0x4a03b9*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a03c3*/
      *((_DWORD *)v3 + 1) = v5; /*0x4a03cd*/
      if ( v5 ) /*0x4a03d0*/
      {
        v6 = *((_DWORD *)v3 + 2); /*0x4a03d2*/
        v7 = 0; /*0x4a03d5*/
        v3[13] = 1; /*0x4a03d9*/
        if ( v6 > 0 ) /*0x4a03dd*/
        {
          do /*0x4a03f9*/
          {
            v8 = a2[2]; /*0x4a03df*/
            v9 = *((_DWORD *)v3 + 1); /*0x4a03e2*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a03e8*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a03ef*/
            ++v7; /*0x4a03f6*/
          }
          while ( v7 < *((_DWORD *)v3 + 2) ); /*0x4a03f9*/
        }
      }
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0; /*0x4a03ff*/
      v3[13] = 0; /*0x4a0402*/
    }
  }
  *((_DWORD *)v3 + 4) = a2[5]; /*0x4a040c*/
  *((_DWORD *)v3 + 5) = a2[6]; /*0x4a0412*/
  *(_DWORD *)v3 = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a0415*/
  v10 = a2[7]; /*0x4a041b*/
  this->q008 = 0; /*0x4a041e*/
  this->q007 = v10; /*0x4a0421*/
  *this = &vt_EnumConnectionsClass; /*0x4a0424*/
  for ( i = 0; i < this->q014; ++i ) /*0x4a0431*/
  {
    v13 = *(_DWORD *)(this->q008 + 8 * i); /*0x4a0439*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a043c*/
  }
  return this; /*0x4a0449*/
}


// ==== 0x004A0450  EnumConnectionsClass::method_4A0450  this=EnumConnectionsClass  sig=csp ====
void __thiscall sub_4A0450(_DWORD *this)
{
  int v2; // edi
  int v3; // edx
  _DWORD *v4; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0457*/
  for ( *this = &vt_EnumConnectionsClass; v2 < this->q014; ++v2 ) /*0x4a0464*/
  {
    v6 = *(_DWORD *)(this->q008 + 8 * v2); /*0x4a046c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4a046f*/
  }
  v3 = this->q004; /*0x4a047a*/
  v4 = this + 1; /*0x4a047d*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x4a0482*/
  v5 = (void *)v4[1]; /*0x4a0485*/
  *v4 = &vt_VectorClass_tagCONNECTDATA; /*0x4a0488*/
  if ( v5 && *((_BYTE *)v4 + 13) ) /*0x4a0492*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0498*/
    v4[1] = 0; /*0x4a04a0*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x4a04a3*/
  v4[2] = 0; /*0x4a04a6*/
}


// ==== 0x004A04B0  ConnectionPointClass::QueryInterface  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::_vt00(int a1, const void *a2, _DWORD *a3)
{
  int v4; // eax

  if ( !a3 ) /*0x4a04b7*/
    return -2147467261; /*0x4a04b9*/
  v4 = 0; /*0x4a04c9*/
  if ( !memcmp(a2, &unk_7F7CC0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a04eb*/
    v4 = a1; /*0x4a04ef*/
  *a3 = v4; /*0x4a04f7*/
  if ( !v4 ) /*0x4a04fa*/
    return -2147467262; /*0x4a0508*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 4))(v4); /*0x4a04ff*/
  return 0; /*0x4a04be*/
}


// ==== 0x004A0520  ConnectionPointClass::AddRef  this=ConnectionPointClass  sig=csp ====
LONG __stdcall ConnectionPointClass::_vt01(int a1)
{
  ++g_BulletClassPool; /*0x4a052f*/
  return InterlockedIncrement((volatile LONG *)(a1 + 20)); /*0x4a053b*/
}


// ==== 0x004A0540  ConnectionPointClass::Release  this=ConnectionPointClass  sig=csp ====
LONG __stdcall ConnectionPointClass::_vt02(volatile LONG *Block)
{
  LONG result; // eax
  int v2; // eax
  void *v3; // eax

  --g_BulletClassPool; /*0x4a0550*/
  result = InterlockedDecrement(Block + 5); /*0x4a0557*/
  if ( !result && Block ) /*0x4a0565*/
  {
    v2 = *((_DWORD *)Block + 6); /*0x4a0567*/
    *Block = (volatile LONG)&vt_ConnectionPointClass; /*0x4a056a*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4a0574*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)Block + 7) + 12))((char *)Block + 28); /*0x4a057f*/
    v3 = (void *)*((_DWORD *)Block + 8); /*0x4a0582*/
    *((_DWORD *)Block + 7) = &vt_VectorClass_tagCONNECTDATA; /*0x4a0585*/
    if ( v3 ) /*0x4a058d*/
    {
      if ( *((_BYTE *)Block + 41) ) /*0x4a058f*/
      {
        __3_YAXPAX_Z(v3); /*0x4a0597*/
        *((_DWORD *)Block + 8) = 0; /*0x4a059f*/
      }
    }
    *((_BYTE *)Block + 41) = 0; /*0x4a05a3*/
    *((_DWORD *)Block + 9) = 0; /*0x4a05a7*/
    __3_YAXPAX_Z((void *)Block); /*0x4a05ae*/
    return 0; /*0x4a05b6*/
  }
  return result; /*0x4a05b9*/
}


// ==== 0x004A05D0  ConnectionPointClass::ddtor  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::_vt03(_DWORD *a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4a05d6*/
    return -2147467261; /*0x4a05d8*/
  *a2 = a1[1]; /*0x4a05e9*/
  a2[1] = a1[2]; /*0x4a05ee*/
  a2[2] = a1[3]; /*0x4a05f4*/
  a2[3] = a1[4]; /*0x4a05fa*/
  return 0; /*0x4a05dd*/
}


// ==== 0x004A0610  ConnectionPointClass::Advise  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::_vt04(int a1, int a2)
{
  return (***(int (__stdcall ****)(_DWORD, void *, int))(a1 + 24))(*(_DWORD *)(a1 + 24), &unk_7F7CD0, a2); /*0x4a0626*/
}


// ==== 0x004A0630  ConnectionPointClass::Unadvise  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::_vt05(int a1, int (__stdcall ***a2)(_DWORD, int, int *), int *a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h]

  if ( !a2 || !a3 ) /*0x4a0648*/
    return -2147467261; /*0x4a06ec*/
  v9 = AbstractClass::updateAITimer(MEMORY[0xA8B230]); /*0x4a0661*/
  if ( (**a2)(a2, a1 + 4, &v8) < 0 ) /*0x4a0671*/
    return -2147220990; /*0x4a0675*/
  v4 = *(_DWORD *)(a1 + 36); /*0x4a0681*/
  if ( *(_DWORD *)(a1 + 44) >= v4 ) /*0x4a068c*/
  {
    if ( !*(_BYTE *)(a1 + 41) && v4 ) /*0x4a0697*/
      return -2147220991; /*0x4a0697*/
    v5 = *(_DWORD *)(a1 + 48); /*0x4a0699*/
    if ( v5 <= 0 /*0x4a06a9*/
      || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 28) + 8))(a1 + 28, v4 + v5, 0) )
    {
      return -2147220991; /*0x4a06de*/
    }
  }
  v6 = *(_DWORD *)(a1 + 44); /*0x4a06b0*/
  v7 = *(_DWORD *)(a1 + 32); /*0x4a06b3*/
  *(_DWORD *)(a1 + 44) = v6 + 1; /*0x4a06ba*/
  *(_DWORD *)(v7 + 8 * v6) = v8; /*0x4a06c1*/
  *(_DWORD *)(v7 + 8 * v6 + 4) = v9; /*0x4a06c9*/
  *a3 = v9; /*0x4a06d1*/
  return 0; /*0x4a0673*/
}


// ==== 0x004A0700  ConnectionPointClass::EnumConnections  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::_vt06(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *i; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = 0; /*0x4a0705*/
  v3 = *(_DWORD *)(a1 + 44); /*0x4a0707*/
  if ( v3 <= 0 ) /*0x4a070d*/
    return -2147220992; /*0x4a0725*/
  for ( i = (_DWORD *)(*(_DWORD *)(a1 + 32) + 4); *i != a2; i += 2 ) /*0x4a0716*/
  {
    if ( ++v2 >= v3 ) /*0x4a0723*/
      return -2147220992; /*0x4a0723*/
  }
  v6 = *(_DWORD *)(a1 + 44); /*0x4a072f*/
  if ( v2 < v6 ) /*0x4a0734*/
  {
    v7 = v6 - 1; /*0x4a0736*/
    for ( *(_DWORD *)(a1 + 44) = v7; v2 < *(_DWORD *)(a1 + 44); *(_DWORD *)(v8 + 8 * v2 - 4) = *(_DWORD *)(v8 + 8 * v2 + 4) ) /*0x4a073c*/
    {
      v8 = *(_DWORD *)(a1 + 32); /*0x4a073e*/
      ++v2; /*0x4a0741*/
      *(_DWORD *)(v8 + 8 * v2 - 8) = *(_DWORD *)(v8 + 8 * v2); /*0x4a0745*/
    }
  }
  return 0; /*0x4a0725*/
}


// ==== 0x004A0760  ConnectionPointClass::GetConnectionInterface  this=ConnectionPointClass  sig=csp ====
int __stdcall ConnectionPointClass::_vt07(_DWORD *a1, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  void *v5; // eax
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
  v3[2] = 0; /*0x4a0798*/
  v3[3] = 0; /*0x4a079b*/
  *((_BYTE *)v3 + 16) = 1; /*0x4a079e*/
  *((_BYTE *)v3 + 17) = 0; /*0x4a07a2*/
  v3[1] = &vt_VectorClass_tagCONNECTDATA; /*0x4a07a5*/
  if ( v3 + 1 != a1 + 7 ) /*0x4a07ab*/
  {
    VectorClass::ClearAndFree2((int)(v3 + 1)); /*0x4a07af*/
    v4 = a1[9]; /*0x4a07b5*/
    v3[3] = v4; /*0x4a07ba*/
    if ( v4 ) /*0x4a07bd*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a07c7*/
      v3[2] = v5; /*0x4a07d1*/
      if ( v5 ) /*0x4a07d4*/
      {
        v6 = v3[3]; /*0x4a07d6*/
        v7 = 0; /*0x4a07d9*/
        *((_BYTE *)v3 + 17) = 1; /*0x4a07dd*/
        if ( v6 > 0 ) /*0x4a07e1*/
        {
          do /*0x4a0806*/
          {
            v8 = (_DWORD *)(a1[8] + 8 * v7); /*0x4a07ef*/
            v9 = (_DWORD *)(v3[2] + 8 * v7++); /*0x4a07f4*/
            *v9 = *v8; /*0x4a07f9*/
            v9[1] = v8[1]; /*0x4a07fe*/
          }
          while ( v7 < v3[3] ); /*0x4a0806*/
        }
      }
    }
    else
    {
      v3[2] = 0; /*0x4a080c*/
      *((_BYTE *)v3 + 17) = 0; /*0x4a080f*/
    }
  }
  v3[5] = a1[11]; /*0x4a0815*/
  v3[6] = a1[12]; /*0x4a081b*/
  v3[1] = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a081e*/
  v3[7] = 0; /*0x4a0824*/
  v3[8] = 0; /*0x4a0827*/
  *v3 = &vt_EnumConnectionsClass; /*0x4a082a*/
  for ( i = 0; i < v3[5]; ++i ) /*0x4a0837*/
  {
    v11 = *(_DWORD *)(v3[2] + 8 * i); /*0x4a083f*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 4))(v11); /*0x4a0842*/
  }
  return (*(int (__stdcall **)(_DWORD *, void *, int))*v3)(v3, &unk_7F7CB0, a2); /*0x4a076c*/
}


// ==== 0x004A0870  ConnectionPointClass::Construct  this=ConnectionPointClass  sig=csp ====
_DWORD *__thiscall ConnectionPointClass::Construct(_DWORD *this, _DWORD *a1, ConnectionPointClass *aP2)
{
  this->q004 = *a1; /*0x4a087c*/
  this->q008 = a1[1]; /*0x4a0881*/
  this->q00C = a1[2]; /*0x4a0887*/
  this->u32_10 = a1[3]; /*0x4a088d*/
  this->q018 = aP2; /*0x4a0896*/
  this->q014 = 0; /*0x4a0899*/
  this->q020 = 0; /*0x4a089c*/
  this->q024 = 0; /*0x4a089f*/
  this->u8_28 = 1; /*0x4a08a2*/
  this->u8_29 = 0; /*0x4a08a6*/
  this->q01C = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a08a9*/
  this->ptr_30 = 10; /*0x4a08b0*/
  this->u32_2C = 0; /*0x4a08b7*/
  *this = &vt_ConnectionPointClass; /*0x4a08ba*/
  (*(void (__stdcall **)(ConnectionPointClass *))(*(_DWORD *)aP2->__pad_0 + 4))(aP2); /*0x4a08c3*/
  return this; /*0x4a08c8*/
}


// ==== 0x004A08D0  ConnectionPointClass::method_4A08D0  this=ConnectionPointClass  sig=csp ====
void __thiscall sub_4A08D0(_DWORD *this)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v4; // esi
  void *v5; // eax

  v2 = this->q018; /*0x4a08d4*/
  *this = &vt_ConnectionPointClass; /*0x4a08d7*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4a08e0*/
  v3 = this->q01C; /*0x4a08e3*/
  v4 = this + 7; /*0x4a08e6*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x4a08eb*/
  v5 = (void *)v4[1]; /*0x4a08ee*/
  *v4 = &vt_VectorClass_tagCONNECTDATA; /*0x4a08f5*/
  if ( v5 && *((_BYTE *)v4 + 13) ) /*0x4a08fd*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0903*/
    v4[1] = 0; /*0x4a090b*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x4a090e*/
  v4[2] = 0; /*0x4a0911*/
}


// ==== 0x004A0920  EnumConnectionPointsClass::QueryInterface  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::_vt00(int a1, const void *a2, _DWORD *a3)
{
  int v4; // eax

  if ( !a3 ) /*0x4a0928*/
    return -2147467261; /*0x4a092b*/
  v4 = 0; /*0x4a093a*/
  if ( !memcmp(a2, &unk_7F7CE0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a0960*/
    v4 = a1; /*0x4a0964*/
  *a3 = v4; /*0x4a0967*/
  if ( !v4 ) /*0x4a096d*/
    return -2147467262; /*0x4a097d*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x4a0972*/
  return 0; /*0x4a092a*/
}


// ==== 0x004A0990  EnumConnectionPointsClass::AddRef  this=EnumConnectionPointsClass  sig=csp ====
LONG __stdcall EnumConnectionPointsClass::_vt01(int a1)
{
  ++g_BulletClassPool; /*0x4a099f*/
  return InterlockedIncrement((volatile LONG *)(a1 + 8)); /*0x4a09ab*/
}


// ==== 0x004A09B0  EnumConnectionPointsClass::Release  this=EnumConnectionPointsClass  sig=csp ====
LONG __stdcall EnumConnectionPointsClass::_vt02(volatile LONG *Block)
{
  LONG result; // eax
  int i; // esi
  void *v3; // eax
  int v4; // [esp-8h] [ebp-10h]

  --g_BulletClassPool; /*0x4a09c0*/
  result = InterlockedDecrement(Block + 2); /*0x4a09c7*/
  if ( !result && Block ) /*0x4a09d5*/
  {
    *Block = (volatile LONG)&vt_EnumConnectionPointsClass; /*0x4a09d7*/
    for ( i = 0; i < *((_DWORD *)Block + 7); ++i ) /*0x4a09e5*/
    {
      v4 = *(_DWORD *)(*((_DWORD *)Block + 4) + 4 * i); /*0x4a09ed*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4a09f0*/
    }
    (*(void (__thiscall **)(char *))(*((_DWORD *)Block + 3) + 12))((char *)Block + 12); /*0x4a0a03*/
    v3 = (void *)*((_DWORD *)Block + 4); /*0x4a0a06*/
    *((_DWORD *)Block + 3) = &vt_VectorClass_IConnectionPoint; /*0x4a0a09*/
    if ( v3 ) /*0x4a0a11*/
    {
      if ( *((_BYTE *)Block + 25) ) /*0x4a0a13*/
      {
        __3_YAXPAX_Z(v3); /*0x4a0a1b*/
        *((_DWORD *)Block + 4) = 0; /*0x4a0a23*/
      }
    }
    *((_BYTE *)Block + 25) = 0; /*0x4a0a2b*/
    *((_DWORD *)Block + 5) = 0; /*0x4a0a2f*/
    __3_YAXPAX_Z((void *)Block); /*0x4a0a36*/
    return 0; /*0x4a0a3e*/
  }
  return result; /*0x4a0a41*/
}


// ==== 0x004A0A50  EnumConnectionPointsClass::ddtor  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::_vt03(_DWORD *a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  int v6; // ebp
  unsigned int i; // edi
  int v8; // eax
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
  for ( i = 0; i < a2; *(_DWORD *)(v4 - 4) = *(_DWORD *)(a1[4] + 4 * v9) ) /*0x4a0a93*/
  {
    v8 = a1[1]; /*0x4a0a99*/
    if ( v8 >= a1[7] ) /*0x4a0aa1*/
      break; /*0x4a0aa1*/
    v10 = *(_DWORD *)(a1[4] + 4 * v8); /*0x4a0aa9*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0aac*/
    v9 = a1[1]; /*0x4a0aaf*/
    v4 += 4; /*0x4a0ab2*/
    ++v6; /*0x4a0ab5*/
    ++i; /*0x4a0ab6*/
    a1[1] = v9 + 1; /*0x4a0aba*/
  }
  if ( a4 ) /*0x4a0ad4*/
    *a4 = v6; /*0x4a0ad6*/
  return v6 != 0 ? 0 : -2147467259;
}


// ==== 0x004A0AF0  EnumConnectionPointsClass::Next  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::_vt04(int a1, int a2)
{
  *(_DWORD *)(a1 + 4) += a2; /*0x4a0afd*/
  return 0; /*0x4a0b02*/
}


// ==== 0x004A0B10  EnumConnectionPointsClass::Skip  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::_vt05(int a1)
{
  *(_DWORD *)(a1 + 4) = 0; /*0x4a0b14*/
  return 0; /*0x4a0b1d*/
}


// ==== 0x004A0B20  EnumConnectionPointsClass::ResetConnectionPoints  this=EnumConnectionPointsClass  sig=csp ====
int __stdcall EnumConnectionPointsClass::_vt06(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v9; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a0b2a*/
    return -2147467261; /*0x4a0b2d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a0b3d*/
  if ( !v3 ) /*0x4a0b44*/
    return -2147024882; /*0x4a0c13*/
  v3[1] = a1[1]; /*0x4a0b59*/
  v3[2] = 0; /*0x4a0b5c*/
  v3[4] = 0; /*0x4a0b61*/
  v3[5] = 0; /*0x4a0b64*/
  *((_BYTE *)v3 + 24) = 1; /*0x4a0b67*/
  *((_BYTE *)v3 + 25) = 0; /*0x4a0b6b*/
  v3[3] = &vt_VectorClass_IConnectionPoint; /*0x4a0b6e*/
  if ( v3 + 3 != a1 + 3 ) /*0x4a0b74*/
  {
    VectorClass::CleanupTyped((int)(v3 + 3)); /*0x4a0b78*/
    v4 = a1[5]; /*0x4a0b7e*/
    v3[5] = v4; /*0x4a0b83*/
    if ( v4 ) /*0x4a0b86*/
    {
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0b90*/
      v3[4] = v5; /*0x4a0b9a*/
      if ( v5 ) /*0x4a0b9d*/
      {
        v6 = v3[5]; /*0x4a0b9f*/
        v7 = 0; /*0x4a0ba2*/
        *((_BYTE *)v3 + 25) = 1; /*0x4a0ba6*/
        if ( v6 > 0 ) /*0x4a0baa*/
        {
          do /*0x4a0bbe*/
          {
            *(_DWORD *)(v3[4] + 4 * v7) = *(_DWORD *)(a1[4] + 4 * v7); /*0x4a0bb5*/
            ++v7; /*0x4a0bbb*/
          }
          while ( v7 < v3[5] ); /*0x4a0bbe*/
        }
      }
    }
    else
    {
      v3[4] = 0; /*0x4a0bc2*/
      *((_BYTE *)v3 + 25) = 0; /*0x4a0bc5*/
    }
  }
  v3[7] = a1[7]; /*0x4a0bcb*/
  v3[8] = a1[8]; /*0x4a0bd1*/
  v3[3] = &vt_DynamicVectorClass_IConnectionPoint; /*0x4a0bd4*/
  *v3 = &vt_EnumConnectionPointsClass; /*0x4a0bda*/
  for ( i = 0; i < v3[7]; ++i ) /*0x4a0be7*/
  {
    v9 = *(_DWORD *)(v3[4] + 4 * i); /*0x4a0bef*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x4a0bf2*/
  }
  (*(void (__stdcall **)(_DWORD *))(*v3 + 4))(v3); /*0x4a0c00*/
  *a2 = v3; /*0x4a0c0b*/
  return 0; /*0x4a0b2c*/
}


// ==== 0x004A0C20  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor  this=EnumConnectionPointsClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(
        _DWORD *this,
        EnumConnectionPointsClass *aP1)
{
  _DWORD *v3; // esi
  int EnumConnectionPointsClass_field_0x08; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  v3 = this + 3; /*0x4a0c2c*/
  this->Items = 0; /*0x4a0c2f*/
  this->Capacity = 0; /*0x4a0c32*/
  this->Items = 0; /*0x4a0c37*/
  this->q005 = 0; /*0x4a0c3a*/
  this->q018 = 1; /*0x4a0c3d*/
  *((_BYTE *)this + 25) = 0; /*0x4a0c41*/
  this->q00C = &vt_VectorClass_IConnectionPoint; /*0x4a0c44*/
  if ( this + 3 != (_DWORD *)aP1 ) /*0x4a0c4a*/
  {
    VectorClass::CleanupTyped((int)(this + 3)); /*0x4a0c4e*/
    EnumConnectionPointsClass_field_0x08 = aP1->EnumConnectionPointsClass_field_0x08; /*0x4a0c54*/
    v3[2] = EnumConnectionPointsClass_field_0x08; /*0x4a0c59*/
    if ( EnumConnectionPointsClass_field_0x08 ) /*0x4a0c5c*/
    {
      v5 = __2_YAPAXI_Z(4 * EnumConnectionPointsClass_field_0x08); /*0x4a0c62*/
      v3[1] = v5; /*0x4a0c6c*/
      if ( v5 ) /*0x4a0c6f*/
      {
        v6 = v3[2]; /*0x4a0c71*/
        v7 = 0; /*0x4a0c74*/
        *((_BYTE *)v3 + 13) = 1; /*0x4a0c78*/
        if ( v6 > 0 ) /*0x4a0c7c*/
        {
          do /*0x4a0c90*/
          {
            *(_DWORD *)(v3[1] + 4 * v7) = *(_DWORD *)(aP1->EnumConnectionPointsClass_field_0x04 + 4 * v7); /*0x4a0c87*/
            ++v7; /*0x4a0c8d*/
          }
          while ( v7 < v3[2] ); /*0x4a0c90*/
        }
      }
    }
    else
    {
      v3[1] = 0; /*0x4a0c94*/
      *((_BYTE *)v3 + 13) = 0; /*0x4a0c97*/
    }
  }
  v3[4] = aP1->EnumConnectionPointsClass_field_0x10; /*0x4a0c9d*/
  v3[5] = aP1->EnumConnectionPointsClass_field_0x14; /*0x4a0ca3*/
  *v3 = &vt_DynamicVectorClass_IConnectionPoint; /*0x4a0ca6*/
  *this = &vt_EnumConnectionPointsClass; /*0x4a0cac*/
  for ( i = 0; i < this->q01C; ++i ) /*0x4a0cb9*/
  {
    v10 = *(_DWORD *)(this->Items + 4 * i); /*0x4a0cc1*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0cc4*/
  }
  return this; /*0x4a0cd1*/
}


// ==== 0x004A0CE0  EnumConnectionPointsClass::method_4A0CE0  this=EnumConnectionPointsClass  sig=csp ====
_DWORD *__thiscall sub_4A0CE0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  int v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  v3 = this + 3; /*0x4a0cf2*/
  this->Items = a2[1]; /*0x4a0cf5*/
  this->Capacity = 0; /*0x4a0cf8*/
  this->q010 = 0; /*0x4a0cfd*/
  this->q014 = 0; /*0x4a0d00*/
  this->q018 = 1; /*0x4a0d03*/
  *((_BYTE *)this + 25) = 0; /*0x4a0d07*/
  this->q00C = &vt_VectorClass_IConnectionPoint; /*0x4a0d0a*/
  if ( this + 3 != a2 + 3 ) /*0x4a0d10*/
  {
    VectorClass::CleanupTyped((int)(this + 3)); /*0x4a0d14*/
    v4 = a2[5]; /*0x4a0d1a*/
    this->q014 = v4; /*0x4a0d1f*/
    if ( v4 ) /*0x4a0d22*/
    {
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0d2c*/
      this->q010 = v5; /*0x4a0d36*/
      if ( v5 ) /*0x4a0d39*/
      {
        v6 = this->q014; /*0x4a0d3b*/
        v7 = 0; /*0x4a0d3e*/
        *((_BYTE *)this + 25) = 1; /*0x4a0d42*/
        if ( v6 > 0 ) /*0x4a0d46*/
        {
          do /*0x4a0d5a*/
          {
            *(_DWORD *)(this->q010 + 4 * v7) = *(_DWORD *)(a2[4] + 4 * v7); /*0x4a0d51*/
            ++v7; /*0x4a0d57*/
          }
          while ( v7 < this->q014 ); /*0x4a0d5a*/
        }
      }
    }
    else
    {
      this->q010 = 0; /*0x4a0d5e*/
      *((_BYTE *)this + 25) = 0; /*0x4a0d61*/
    }
  }
  this->q01C = a2[7]; /*0x4a0d67*/
  this->q020 = a2[8]; /*0x4a0d6d*/
  *v3 = &vt_DynamicVectorClass_IConnectionPoint; /*0x4a0d70*/
  *this = &vt_EnumConnectionPointsClass; /*0x4a0d76*/
  for ( i = 0; i < this->q01C; ++i ) /*0x4a0d83*/
  {
    v10 = *(_DWORD *)(this->q010 + 4 * i); /*0x4a0d8b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0d8e*/
  }
  return this; /*0x4a0d9b*/
}


// ==== 0x004A0DB0  EnumConnectionPointsClass::method_4A0DB0  this=EnumConnectionPointsClass  sig=csp ====
void __thiscall sub_4A0DB0(_DWORD *this)
{
  int v2; // edi
  int v3; // edx
  _DWORD *v4; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0db7*/
  for ( *this = &vt_EnumConnectionPointsClass; v2 < this->q01C; ++v2 ) /*0x4a0dc4*/
  {
    v6 = *(_DWORD *)(this->q010 + 4 * v2); /*0x4a0dcc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4a0dcf*/
  }
  v3 = this->q00C; /*0x4a0dda*/
  v4 = this + 3; /*0x4a0ddd*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x4a0de2*/
  v5 = (void *)v4[1]; /*0x4a0de5*/
  *v4 = &vt_VectorClass_IConnectionPoint; /*0x4a0de8*/
  if ( v5 && *((_BYTE *)v4 + 13) ) /*0x4a0df2*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0df8*/
    v4[1] = 0; /*0x4a0e00*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x4a0e03*/
  v4[2] = 0; /*0x4a0e06*/
}


// ==== 0x004A0E10  _DynamicVectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_UtagCONNECTDATA::Constructor_VectorClass_tagCONNECTDATA_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4a0e13*/
  *Block = &vt_VectorClass_tagCONNECTDATA; /*0x4a0e16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4a0e20*/
  {
    __3_YAXPAX_Z(v3); /*0x4a0e28*/
    *(Block + 1) = 0; /*0x4a0e30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4a0e3b*/
  *(Block + 2) = 0; /*0x4a0e41*/
  if ( (a2 & 1) != 0 ) /*0x4a0e48*/
    __3_YAXPAX_Z(Block); /*0x4a0e4b*/
  return (DynamicVector *)Block; /*0x4a0e55*/
}


// ==== 0x004A0E60  _DynamicVectorClass_PAUIConnectionPoint::Constructor_VectorClass_IConnectionPoint___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall EnumConnectionPointsClass::Constructor_VectorClass_IConnectionPoint___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4a0e63*/
  *Block = &vt_VectorClass_IConnectionPoint; /*0x4a0e66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4a0e70*/
  {
    __3_YAXPAX_Z(v3); /*0x4a0e78*/
    *(Block + 1) = 0; /*0x4a0e80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4a0e8b*/
  *(Block + 2) = 0; /*0x4a0e91*/
  if ( (a2 & 1) != 0 ) /*0x4a0e98*/
    __3_YAXPAX_Z(Block); /*0x4a0e9b*/
  return (DynamicVector *)Block; /*0x4a0ea5*/
}


// ==== 0x004A0EB0  _DynamicVectorClass_UtagCONNECTDATA::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UtagCONNECTDATA::sub_4A0EB0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4a0eb6*/
  *(_DWORD *)(this + 16) = 0; /*0x4a0eb9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4a0ec0*/
  {
    __3_YAXPAX_Z(v2); /*0x4a0ec6*/
    *(_DWORD *)(this + 4) = 0; /*0x4a0ece*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a0ed1*/
  *(_DWORD *)(this + 8) = 0; /*0x4a0ed4*/
}


// ==== 0x004A0EE0  _DynamicVectorClass_UtagCONNECTDATA::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UtagCONNECTDATA::sub_4A0EE0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4a0ee0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x4a0ef5*/
  else
    return 0; /*0x4a0ee7*/
}


// ==== 0x004A0F00  _VectorClass_UtagCONNECTDATA::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UtagCONNECTDATA::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = this->Items; /*0x4a0f00*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x4a0f0f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x4a0f16*/
  return a2; /*0x4a0f11*/
}


// ==== 0x004A0F20  _DynamicVectorClass_PAUIConnectionPoint::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall EnumConnectionPointsClass::sub_4A0F20(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4a0f26*/
  *(_DWORD *)(this + 16) = 0; /*0x4a0f29*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4a0f30*/
  {
    __3_YAXPAX_Z(v2); /*0x4a0f36*/
    *(_DWORD *)(this + 4) = 0; /*0x4a0f3e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a0f41*/
  *(_DWORD *)(this + 8) = 0; /*0x4a0f44*/
}


// ==== 0x004A0F50  _DynamicVectorClass_PAUIConnectionPoint::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall EnumConnectionPointsClass::sub_4A0F50(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4a0f50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4a0f65*/
  else
    return 0; /*0x4a0f57*/
}


// ==== 0x004A0F70  _VectorClass_PAUIConnectionPoint::EnumConnections  this=VectorClass  sig=csp ====
int __thiscall ConnectionPointClass_9_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4a0f7a*/
}


// ==== 0x004A0F80  _VectorClass_UtagCONNECTDATA::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x4a0f8b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4a0f90*/
  {
    v3 = 0; /*0x4a0f92*/
    if ( v2 <= 0 ) /*0x4a0f96*/
      return 1; /*0x4a0fc6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4a0f98*/
    v5 = (_DWORD *)this->Items; /*0x4a0f9b*/
    v6 = (_DWORD *)(v4 + 4); /*0x4a0f9e*/
    v7 = v4 - (_DWORD)v5; /*0x4a0fa1*/
    while ( v5[1] == *v6 && *v5 == *(_DWORD *)((char *)v5 + v7) ) /*0x4a0fb3*/
    {
      ++v3; /*0x4a0fb5*/
      v6 += 2; /*0x4a0fb6*/
      v5 += 2; /*0x4a0fb9*/
      if ( v3 >= v2 ) /*0x4a0fbe*/
        return 1; /*0x4a0fbe*/
    }
  }
  return 0; /*0x4a0fc0*/
}


// ==== 0x004A0FE0  _VectorClass_UtagCONNECTDATA::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  if ( a2 ) /*0x4a0fec*/
  {
    v4 = a3; /*0x4a0ff2*/
    this->IsInitialized = 0; /*0x4a0ff6*/
    if ( a3 ) /*0x4a0ffc*/
      v5 = a3; /*0x4a1012*/
    else
      v5 = __2_YAPAXI_Z(8 * a2); /*0x4a100e*/
    this->IsInitialized = 1; /*0x4a1016*/
    if ( v5 ) /*0x4a101a*/
    {
      if ( this->Items ) /*0x4a1025*/
      {
        v7 = this->Capacity; /*0x4a102c*/
        if ( a2 < v7 ) /*0x4a1031*/
          v7 = a2; /*0x4a1033*/
        v8 = 0; /*0x4a1035*/
        if ( v7 > 0 ) /*0x4a1039*/
        {
          do /*0x4a1051*/
          {
            v9 = this->Items; /*0x4a103b*/
            ++v8; /*0x4a103e*/
            v5[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x4a1045*/
            v5[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x4a104d*/
          }
          while ( v8 < v7 ); /*0x4a1051*/
          v4 = a3; /*0x4a1053*/
        }
        if ( this->IsAllocated ) /*0x4a1057*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a1062*/
          this->Items = 0; /*0x4a106a*/
        }
      }
      this->Items = v5; /*0x4a1073*/
      this->Capacity = a2; /*0x4a107b*/
      this->IsAllocated = v4 == 0; /*0x4a107e*/
      return 1; /*0x4a1084*/
    }
    else
    {
      return 0; /*0x4a101f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4a108e*/
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
int __thiscall VectorClass_UtagCONNECTDATA::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4a10d0*/
    return 0; /*0x4a10de*/
  v3 = *(_DWORD *)(this + 8); /*0x4a10e4*/
  result = 0; /*0x4a10e7*/
  if ( v3 <= 0 ) /*0x4a10eb*/
    return -1; /*0x4a110c*/
  for ( i = *(_DWORD **)(this + 4); i[1] != a2[1] || *i != *a2; i += 2 ) /*0x4a10f1*/
  {
    if ( ++result >= v3 ) /*0x4a110a*/
      return -1; /*0x4a110a*/
  }
  return result; /*0x4a10db*/
}


// ==== 0x004A1120  _VectorClass_UtagCONNECTDATA::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UtagCONNECTDATA::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4a1120*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x4a1135*/
  else
    return 0; /*0x4a1127*/
}


// ==== 0x004A1140  _DynamicVectorClass_UtagCONNECTDATA::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UtagCONNECTDATA::sub_4A1140(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax

  if ( a2 ) /*0x4a114c*/
  {
    v4 = a3; /*0x4a1152*/
    this->IsInitialized = 0; /*0x4a1156*/
    if ( a3 ) /*0x4a115c*/
      v5 = a3; /*0x4a1172*/
    else
      v5 = __2_YAPAXI_Z(8 * a2); /*0x4a116e*/
    this->IsInitialized = 1; /*0x4a1176*/
    if ( !v5 ) /*0x4a117a*/
      return 0; /*0x4a11fa*/
    if ( this->Items ) /*0x4a117c*/
    {
      v6 = this->q008; /*0x4a1183*/
      if ( a2 < v6 ) /*0x4a1188*/
        v6 = a2; /*0x4a118a*/
      v7 = 0; /*0x4a118c*/
      if ( v6 > 0 ) /*0x4a1190*/
      {
        do /*0x4a11a8*/
        {
          v8 = this->Items; /*0x4a1192*/
          ++v7; /*0x4a1195*/
          v5[2 * v7 - 2] = *(_DWORD *)(v8 + 8 * v7 - 8); /*0x4a119c*/
          v5[2 * v7 - 1] = *(_DWORD *)(v8 + 8 * v7 - 4); /*0x4a11a4*/
        }
        while ( v7 < v6 ); /*0x4a11a8*/
        v4 = a3; /*0x4a11aa*/
      }
      if ( this->IsAllocated ) /*0x4a11ae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a11b9*/
        this->Items = 0; /*0x4a11c1*/
      }
    }
    this->Items = v5; /*0x4a11ca*/
    this->q008 = a2; /*0x4a11d2*/
    this->IsAllocated = v4 == 0; /*0x4a11d5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4a11de*/
  }
  v9 = this->q008; /*0x4a11e1*/
  if ( v9 < this->Items ) /*0x4a11e9*/
    this->Items = v9; /*0x4a11eb*/
  return 1; /*0x4a11ee*/
}


// ==== 0x004A1200  _DynamicVectorClass_UtagCONNECTDATA::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UtagCONNECTDATA::sub_4A1200(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4a1200*/
  result = 0; /*0x4a1205*/
  if ( v2 <= 0 ) /*0x4a120b*/
    return -1; /*0x4a122c*/
  for ( i = (_DWORD *)this->Items; i[1] != a2[1] || *i != *a2; i += 2 ) /*0x4a1211*/
  {
    if ( ++result >= v2 ) /*0x4a122a*/
      return -1; /*0x4a122a*/
  }
  return result; /*0x4a122f*/
}


// ==== 0x004A1240  _VectorClass_PAUIConnectionPoint::AddRef  this=VectorClass  sig=csp ====
char __thiscall ConnectionPointClass_9_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4a1242*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4a124d*/
  {
    v3 = 0; /*0x4a124f*/
    if ( v2 <= 0 ) /*0x4a1253*/
      return 1; /*0x4a1273*/
    v4 = (_DWORD *)this->Items; /*0x4a1255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a125b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a1264*/
    {
      ++v3; /*0x4a1266*/
      ++v4; /*0x4a1267*/
      if ( v3 >= v2 ) /*0x4a126c*/
        return 1; /*0x4a126c*/
    }
  }
  return 0; /*0x4a126e*/
}


// ==== 0x004A1280  _VectorClass_PAUIConnectionPoint::Release  this=VectorClass  sig=csp ====
char __thiscall ConnectionPointClass_9_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a128c*/
  {
    this->IsInitialized = 0; /*0x4a1296*/
    if ( a3 ) /*0x4a129c*/
      v4 = a3; /*0x4a12b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a12ae*/
    this->IsInitialized = 1; /*0x4a12b6*/
    if ( v4 ) /*0x4a12ba*/
    {
      if ( this->Items ) /*0x4a12c5*/
      {
        v6 = this->Capacity; /*0x4a12cc*/
        if ( a2 < v6 ) /*0x4a12d1*/
          v6 = a2; /*0x4a12d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4a12d9*/
          ++i; /*0x4a12de*/
        if ( this->IsAllocated ) /*0x4a12eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a12f6*/
          this->Items = 0; /*0x4a12fe*/
        }
      }
      this->Items = v4; /*0x4a1307*/
      this->Capacity = a2; /*0x4a130f*/
      this->IsAllocated = a3 == 0; /*0x4a1312*/
      return 1; /*0x4a1318*/
    }
    else
    {
      return 0; /*0x4a12bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4a1322*/
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
int __thiscall ConnectionPointClass_9_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4a1360*/
    return 0; /*0x4a1368*/
  v3 = *(_DWORD *)(this + 8); /*0x4a136e*/
  result = 0; /*0x4a1371*/
  if ( v3 <= 0 ) /*0x4a1375*/
    return -1; /*0x4a138c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4a137b*/
  {
    if ( ++result >= v3 ) /*0x4a138a*/
      return -1; /*0x4a138a*/
  }
  return result; /*0x4a136a*/
}


// ==== 0x004A13A0  _VectorClass_PAUIConnectionPoint::Unadvise  this=VectorClass  sig=csp ====
unsigned int __thiscall ConnectionPointClass_9_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4a13a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4a13b5*/
  else
    return 0; /*0x4a13a7*/
}


// ==== 0x004A13C0  _DynamicVectorClass_PAUIConnectionPoint::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall EnumConnectionPointsClass::sub_4A13C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a13cc*/
  {
    this->IsInitialized = 0; /*0x4a13d2*/
    if ( a3 ) /*0x4a13d8*/
      v4 = a3; /*0x4a13ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a13ea*/
    this->IsInitialized = 1; /*0x4a13f2*/
    if ( !v4 ) /*0x4a13f6*/
      return 0; /*0x4a146a*/
    if ( this->Items ) /*0x4a13f8*/
    {
      v5 = this->q008; /*0x4a13ff*/
      if ( a2 < v5 ) /*0x4a1404*/
        v5 = a2; /*0x4a1406*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4a140c*/
        ++i; /*0x4a1411*/
      if ( this->IsAllocated ) /*0x4a141e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a1429*/
        this->Items = 0; /*0x4a1431*/
      }
    }
    this->Items = v4; /*0x4a143a*/
    this->q008 = a2; /*0x4a1442*/
    this->IsAllocated = a3 == 0; /*0x4a1445*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4a144e*/
  }
  v7 = this->q008; /*0x4a1451*/
  if ( v7 < this->Items ) /*0x4a1459*/
    this->Items = v7; /*0x4a145b*/
  return 1; /*0x4a145e*/
}


// ==== 0x004A1470  _DynamicVectorClass_PAUIConnectionPoint::FindItem  this=DynamicVector  sig=csp ====
int __thiscall EnumConnectionPointsClass::sub_4A1470(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4a1470*/
  result = 0; /*0x4a1473*/
  if ( v2 <= 0 ) /*0x4a1478*/
    return -1; /*0x4a148f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4a147e*/
  {
    if ( ++result >= v2 ) /*0x4a148d*/
      return -1; /*0x4a148d*/
  }
  return result; /*0x4a1492*/
}


// ==== 0x004A14A0  _VectorClass_UtagCONNECTDATA::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UtagCONNECTDATA::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4a14a3*/
  *Block = &vt_VectorClass_tagCONNECTDATA; /*0x4a14a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4a14b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a14b8*/
    *(Block + 1) = 0; /*0x4a14c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4a14cb*/
  *(Block + 2) = 0; /*0x4a14d1*/
  if ( (a2 & 1) != 0 ) /*0x4a14d8*/
    __3_YAXPAX_Z(Block); /*0x4a14db*/
  return (VectorClass *)Block; /*0x4a14e5*/
}


// ==== 0x004A14F0  _VectorClass_PAUIConnectionPoint::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall ConnectionPointClass_9_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4a14f3*/
  *Block = &vt_VectorClass_IConnectionPoint; /*0x4a14f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4a1500*/
  {
    __3_YAXPAX_Z(v3); /*0x4a1508*/
    *(Block + 1) = 0; /*0x4a1510*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4a151b*/
  *(Block + 2) = 0; /*0x4a1521*/
  if ( (a2 & 1) != 0 ) /*0x4a1528*/
    __3_YAXPAX_Z(Block); /*0x4a152b*/
  return (VectorClass *)Block; /*0x4a1535*/
}


// ==== 0x004A1540  sub_4A1540  this=-  sig=ida-proto ====
int sub_4A1540()
{
  MEMORY[0x89F7E8] = 0; /*0x4a1542*/
  MEMORY[0x89F7EC] = 0; /*0x4a1547*/
  MEMORY[0x89F7F0] = 0; /*0x4a154c*/
  MEMORY[0x89F7F4] = 0; /*0x4a1551*/
  return 0; /*0x4a1556*/
}


// ==== 0x004A1560  sub_4A1560  this=-  sig=ida-proto ====
void sub_4A1560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a156c*/
  MEMORY[0x89F800] = Math::Sqrt(v0 + v0); /*0x4a157e*/
}


// ==== 0x004A1590  sub_4A1590  this=-  sig=ida-proto ====
void sub_4A1590()
{
  MEMORY[0x89F850] = MEMORY[0x89F800] / 60.0; /*0x4a159c*/
}


// ==== 0x004A15B0  sub_4A15B0  this=-  sig=ida-proto ====
void sub_4A15B0()
{
  MEMORY[0x89F838] = 1.0 / MEMORY[0x89F850]; /*0x4a15bc*/
}


// ==== 0x004A15D0  sub_4A15D0  this=-  sig=ida-proto ====
void sub_4A15D0()
{
  MEMORY[0x89F830] = 0.0174532925199433 * 45.0; /*0x4a15dc*/
}


// ==== 0x004A15F0  sub_4A15F0  this=-  sig=ida-proto ====
void sub_4A15F0()
{
  MEMORY[0x89F808] = 0.0174532925199433 * 60.0; /*0x4a15fc*/
}


// ==== 0x004A1610  sub_4A1610  this=-  sig=ida-proto ====
void sub_4A1610()
{
  MEMORY[0x89F7E0] = 0.0174532925199433 * 90.0; /*0x4a161c*/
}


// ==== 0x004A1630  sub_4A1630  this=-  sig=ida-proto ====
__int64 sub_4A1630()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89F7E0] - MEMORY[0x89F808]); /*0x4a1642*/
  result = Math::RoundToInt(v0 * MEMORY[0x89F800] * 0.5); /*0x4a1656*/
  MEMORY[0x89F858] = result; /*0x4a165b*/
  return result; /*0x4a1660*/
}


// ==== 0x004A1670  sub_4A1670  this=-  sig=ida-proto ====
void sub_4A1670()
{
  MEMORY[0x89F810] = Math::ArcTan((double)MEMORY[0x89F858] * 0.00390625); /*0x4a1687*/
}


// ==== 0x004A16A0  sub_4A16A0  this=-  sig=ida-proto ====
void sub_4A16A0()
{
  MEMORY[0x89F828] = Math::ArcTan((double)(2 * MEMORY[0x89F858]) / MEMORY[0x89F800]); /*0x4a16c2*/
}


// ==== 0x004A16D0  sub_4A16D0  this=-  sig=ida-proto ====
__int64 sub_4A16D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89F858]) + 0.5); /*0x4a16eb*/
  MEMORY[0x89F84C] = result; /*0x4a16f0*/
  return result; /*0x4a16f6*/
}


// ==== 0x004A1700  sub_4A1700  this=-  sig=ida-proto ====
int sub_4A1700()
{
  MEMORY[0x89F7F8] = 0; /*0x4a1702*/
  return 0; /*0x4a170e*/
}


// ==== 0x004A1710  sub_4A1710  this=-  sig=ida-proto ====
int sub_4A1710()
{
  MEMORY[0x89F818] = 0; /*0x4a1712*/
  MEMORY[0x89F81C] = 0; /*0x4a1717*/
  MEMORY[0x89F820] = 0; /*0x4a171c*/
  return 0; /*0x4a1721*/
}


// ==== 0x004A1730  sub_4A1730  this=-  sig=ida-proto ====
int sub_4A1730()
{
  MEMORY[0x89F848] = 0; /*0x4a1735*/
  MEMORY[0x89F840] = 128; /*0x4a173f*/
  MEMORY[0x89F844] = 128; /*0x4a1744*/
  return 128; /*0x4a1749*/
}


// ==== 0x004A1750  CellClass::Cleanup  this=CellClass  sig=csp ====
char __thiscall sub_4A1750(__int16 *this)
{
  __int16 *v2; // edi
  int v3; // edx
  int v4; // eax
  char *v5; // ecx

  v2 = this + 6; /*0x4a1758*/
  if ( this->vtable4 == MEMORY[0x89F7F8] ) /*0x4a1762*/
    return 0; /*0x4a1764*/
  CellClass::DestroyOverlay(v2); /*0x4a1773*/
  *(_DWORD *)v2 = MEMORY[0x89F7F8]; /*0x4a177e*/
  v3 = *(_DWORD *)this; /*0x4a1780*/
  if ( *(_DWORD *)this != -1 ) /*0x4a1785*/
  {
    v4 = this->vtable3; /*0x4a1787*/
    v5 = (char *)MEMORY[0xA8ED84] - v3; /*0x4a1795*/
    if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x4a1799*/
    {
      *(_DWORD *)this = -1; /*0x4a179d*/
      this->vtable3 = v4 - (_DWORD)v5; /*0x4a17a3*/
      return 1; /*0x4a17aa*/
    }
    this->vtable3 = 0; /*0x4a17ad*/
    *(_DWORD *)this = -1; /*0x4a17b0*/
  }
  return 1; /*0x4a17a6*/
}


// ==== 0x004A17C0  BuildingClass::BeginCrumblingTimer  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::BeginCrumblingTimer(wchar_t **this, IUnknown *aP1)
{
  MouseClass *v3; // edi
  IUnknown *v4; // edx
  AbstractClass *v5; // eax
  wchar_t *v6; // eax
  IUnknown *v7; // eax
  IUnknown *v8; // edi
  wchar_t *v9; // eax
  wchar_t *v10; // edx
  int v12; // [esp+Ch] [ebp-18h] BYREF
  double v13; // [esp+10h] [ebp-14h]
  double v14; // [esp+18h] [ebp-Ch]
  IUnknown *aP1a; // [esp+28h] [ebp+4h]

  v3 = (MouseClass *)(this + 3); /*0x4a17cc*/
  if ( this->nextArrayIndex != *(_WORD *)&MEMORY[0x89F690].__pad_164[4] /*0x4a17e3*/
    || this->referenceCount != *(_WORD *)&MEMORY[0x89F690].__pad_164[6] )
  {
    CellClass::DestroyOverlay((__int16 *)v3); /*0x4a17e7*/
    v3->field_0 = *(_DWORD *)&MEMORY[0x89F690].__pad_164[4]; /*0x4a17f2*/
    v4 = (IUnknown *)*this; /*0x4a17f4*/
    if ( *this != (wchar_t *)-1 ) /*0x4a17f9*/
    {
      v5 = (AbstractClass *)this->vtable3; /*0x4a17fb*/
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v4 >= (int)v5 ) /*0x4a180d*/
        v6 = 0; /*0x4a1813*/
      else
        v6 = (wchar_t *)((char *)v5 - (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v4)); /*0x4a180f*/
      this->vtable3 = v6; /*0x4a1815*/
      *this = (wchar_t *)-1; /*0x4a1818*/
    }
  }
  v12 = aP1->field_0; /*0x4a1828*/
  if ( !BuildingClass::CreateCraterAtCell((__int16 *)&v12) ) /*0x4a182c*/
    return 0; /*0x4a18e3*/
  v7 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1); /*0x4a183f*/
  Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v7); /*0x4a184b*/
  v3->field_0 = v12; /*0x4a1859*/
  v14 = *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5752) * 1800.0; /*0x4a187a*/
  v13 = *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5752) * 450.0; /*0x4a188a*/
  aP1a = (IUnknown *)Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x7FFFFFFE); /*0x4a189b*/
  v8 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4a189f*/
  v9 = (wchar_t *)Math::RoundToInt((v14 - v13) * ((double)(int)aP1a * 4.656612877414201e-10) + v13); /*0x4a18b5*/
  v10 = (wchar_t *)HIDWORD(v14); /*0x4a18ba*/
  *this = (wchar_t *)v8; /*0x4a18c0*/
  this->vtable2 = v10; /*0x4a18c2*/
  this->vtable3 = v9; /*0x4a18c5*/
  if ( *this == (wchar_t *)-1 ) /*0x4a18cd*/
    *this = *(wchar_t **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4a18d4*/
  return 1; /*0x4a18d6*/
}


// ==== 0x004A18F0  BuildingClass::CreateCraterAtCell  this=IUnknown  sig=csp ====
char __thiscall BuildingClass::CreateCraterAtCell(IUnknown *this)
{
  int v1; // ebp
  ObjectClass *v3; // edi
  void *v4; // eax
  void *v5; // eax
  ObjectClass *PlacementRect; // esi
  int *StartCoords; // eax
  int v8; // ebp
  int v9; // ecx
  IUnknown *v10; // edi
  int v11; // edx
  char *v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // edi
  int v17; // [esp+10h] [ebp-30h]
  int v18; // [esp+1Ch] [ebp-24h]
  int v19[4]; // [esp+20h] [ebp-20h] BYREF
  int v20[4]; // [esp+30h] [ebp-10h] BYREF

  v1 = *(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x4a18f5*/
  v17 = *(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x4a1907*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[21752] = 0; /*0x4a190b*/
  if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], this, (TechnoClass *)1) /*0x4a1933*/
    && (v3 = (ObjectClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)this),
        v3->ambientSoundController[2] == -1) )
  {
    if ( *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)this) + 59) == 2 ) /*0x4a1952*/
    {
      v4 = (void *)__2_YAPAXI_Z(0xB0u); /*0x4a1954*/
      if ( v4 ) /*0x4a195e*/
        Object::SpawnAtCell( /*0x4a196f*/
          v4,
          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 256),
          this,
          (BuildingTypeClass *)0xFFFFFFFF);
    }
    else
    {
      v5 = (void *)__2_YAPAXI_Z(0xB0u); /*0x4a1971*/
      if ( v5 ) /*0x4a197b*/
        Object::SpawnAtCell( /*0x4a198f*/
          v5,
          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 248),
          this,
          (BuildingTypeClass *)0xFFFFFFFF);
    }
    PlacementRect = (ObjectClass *)BuildingClass::GetPlacementRect((int)v3, (IUnknown *)v19); /*0x4a19a4*/
    StartCoords = House::GetStartCoords((int)v3, (IUnknown *)v20); /*0x4a19a9*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4a19be*/
    {
      v9 = *(_DWORD *)PlacementRect->__pad_0; /*0x4a1a45*/
      v11 = *(_DWORD *)&PlacementRect->__pad_0[4]; /*0x4a1a47*/
      v15 = *(_DWORD *)&PlacementRect->__pad_0[8]; /*0x4a1a4a*/
      v13 = *(_DWORD *)&PlacementRect->__pad_0[12]; /*0x4a1a4d*/
    }
    else
    {
      v8 = *(_DWORD *)&PlacementRect->__pad_0[8]; /*0x4a19c4*/
      if ( v8 <= 0 || (v18 = *(_DWORD *)&PlacementRect->__pad_0[12], v18 <= 0) ) /*0x4a19d8*/
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
        v10 = *(IUnknown **)PlacementRect->__pad_0; /*0x4a19dc*/
        v11 = StartCoords[1]; /*0x4a19de*/
        v12 = (char *)StartCoords[2]; /*0x4a19e1*/
        v13 = StartCoords[3]; /*0x4a19e4*/
        if ( v9 > *(_DWORD *)PlacementRect->__pad_0 ) /*0x4a19e9*/
        {
          v12 += v9 - (_DWORD)v10; /*0x4a19ed*/
          v9 = *(_DWORD *)PlacementRect->__pad_0; /*0x4a19ef*/
        }
        v14 = *(_DWORD *)&PlacementRect->__pad_0[4]; /*0x4a19f1*/
        if ( v11 > v14 ) /*0x4a19fa*/
        {
          v13 += v11 - v14; /*0x4a19fe*/
          v11 = v14; /*0x4a1a00*/
        }
        if ( (int)&v12[v9] < (int)v10 + v8 ) /*0x4a1a0a*/
          v12 = (char *)&v10->field_0 + v8 - v9 + 1; /*0x4a1a12*/
        if ( v13 + v11 < v18 + v14 ) /*0x4a1a25*/
          v13 = v18 + v14 - v11 + 1; /*0x4a1a2a*/
        v1 = v17; /*0x4a1a2c*/
        v15 = (int)v12; /*0x4a1a30*/
      }
    }
    Cell::CreateCrater( /*0x4a1a78*/
      v9 - *(_DWORD *)&stru_87C374.__pad_579C[21648],
      v11 - *(_DWORD *)&stru_87C374.__pad_579C[21652],
      v15,
      v13,
      0);
    *(_DWORD *)&HouseClass_Player.__pad_5568[21752] = v1; /*0x4a1a7d*/
    return 1; /*0x4a1a83*/
  }
  else
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[21752] = v1; /*0x4a1a8e*/
    return 0; /*0x4a1a96*/
  }
}


// ==== 0x004A1AA0  CellClass::DestroyOverlay  this=CellClass  sig=csp ====
char __thiscall CellClass::DestroyOverlay(IUnknown *this)
{
  ObjectClass *v2; // ebx
  int v3; // eax
  int v4; // eax
  int *PlacementRect; // esi
  AnimClass **StartCoords; // eax
  int v7; // ebp
  AnimClass *v8; // ebx
  AnimClass *v9; // edx
  int v10; // ecx
  AnimClass *v11; // edi
  int v12; // eax
  int v13; // esi
  AnimClass *v14; // edx
  int v16; // [esp+18h] [ebp-28h]
  AbstractClass *v17; // [esp+1Ch] [ebp-24h]
  int v18[4]; // [esp+20h] [ebp-20h] BYREF
  char v19; // [esp+30h] [ebp-10h] BYREF
  int v20; // [esp+34h] [ebp-Ch]

  if ( !LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], this) ) /*0x4a1aaf*/
    return 0; /*0x4a1aaf*/
  v2 = (ObjectClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)this); /*0x4a1ac7*/
  v17 = (AbstractClass *)v2; /*0x4a1ac9*/
  v3 = v2->ambientSoundController[2]; /*0x4a1acd*/
  if ( v3 == -1 ) /*0x4a1ad3*/
    return 0; /*0x4a1ad3*/
  v4 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v3]; /*0x4a1adf*/
  if ( v4 != *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 248) /*0x4a1afe*/
    && v4 != *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 252)
    && v4 != *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 256) )
  {
    return 0; /*0x4a1bfc*/
  }
  PlacementRect = BuildingClass::GetPlacementRect((int)v2, (IUnknown *)v18); /*0x4a1b10*/
  StartCoords = (AnimClass **)House::GetStartCoords((int)v2, (IUnknown *)&v19); /*0x4a1b19*/
  if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x4a1b2e*/
  {
    v14 = (AnimClass *)*PlacementRect; /*0x4a1bad*/
    v10 = PlacementRect[1]; /*0x4a1baf*/
    v11 = (AnimClass *)PlacementRect[2]; /*0x4a1bb2*/
    v12 = PlacementRect[3]; /*0x4a1bb5*/
  }
  else
  {
    v7 = PlacementRect[2]; /*0x4a1b30*/
    if ( v7 <= 0 || (v16 = PlacementRect[3], v16 <= 0) ) /*0x4a1b44*/
    {
      v14 = *StartCoords; /*0x4a1ba0*/
      v10 = (int)StartCoords[1]; /*0x4a1ba2*/
      v11 = StartCoords[2]; /*0x4a1ba5*/
      v12 = (int)StartCoords[3]; /*0x4a1ba8*/
    }
    else
    {
      v8 = *StartCoords; /*0x4a1b46*/
      v9 = (AnimClass *)*PlacementRect; /*0x4a1b48*/
      v10 = (int)StartCoords[1]; /*0x4a1b4a*/
      v11 = StartCoords[2]; /*0x4a1b4d*/
      v12 = (int)StartCoords[3]; /*0x4a1b50*/
      if ( (int)v8 > *PlacementRect ) /*0x4a1b55*/
      {
        v11 = (AnimClass *)((char *)v11 + (char *)v8 - (char *)v9); /*0x4a1b59*/
        v8 = (AnimClass *)*PlacementRect; /*0x4a1b5b*/
      }
      v13 = PlacementRect[1]; /*0x4a1b5d*/
      if ( v10 > v13 ) /*0x4a1b66*/
      {
        v12 += v10 - v13; /*0x4a1b6a*/
        v10 = v13; /*0x4a1b6c*/
      }
      if ( (int)v8 + (int)v11 < (int)v9 + v7 ) /*0x4a1b76*/
        v11 = (AnimClass *)((char *)v9 - (char *)v8 + v7 + 1); /*0x4a1b7e*/
      if ( v12 + v10 < v16 + v13 ) /*0x4a1b91*/
        v12 = v16 + v13 - v10 + 1; /*0x4a1b96*/
      v14 = v8; /*0x4a1b98*/
      v2 = (ObjectClass *)v17; /*0x4a1b9a*/
    }
  }
  v20 = v10; /*0x4a1bc0*/
  Cell::CreateCrater((int)v14, v10 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536], (int)v11, v12, 0); /*0x4a1bdc*/
  v2->ambientSoundController[2] = -1; /*0x4a1be1*/
  BYTE2(v2[1].estimatedHealth) = 0; /*0x4a1be8*/
  return 1; /*0x4a1bf1*/
}


// ==== 0x004A1C10  Power::FinalizeDrain  this=IUnknown  sig=csp ====
int __thiscall Power::FinalizeDrain(AbstractClass *this, int a2)
{
  int v2; // eax
  int result; // eax
  unsigned int i; // eax
  int *v5; // esi
  unsigned int v6; // eax
  int v7; // edi

  v2 = *(_DWORD *)&this->__pad_0[4]; /*0x4a1c10*/
  if ( !v2 ) /*0x4a1c15*/
    *(_DWORD *)&this->__pad_0[8] = 0; /*0x4a1c17*/
  this->__pad_0[v2 + 8] = a2; /*0x4a1c1f*/
  result = *(_DWORD *)&this->__pad_0[4] + 1; /*0x4a1c27*/
  *(_DWORD *)&this->__pad_0[4] = result; /*0x4a1c29*/
  if ( result == 4 ) /*0x4a1c2f*/
  {
    this->__pad_0[12] = this->__pad_0[4]; /*0x4a1c34*/
    for ( i = *(_DWORD *)&this->__pad_0[4] + 1; i < 4; ++i ) /*0x4a1c3d*/
      this->__pad_0[i + 8] = this->__pad_0[8]; /*0x4a1c42*/
    a2 = *(_DWORD *)&this->__pad_0[8]; /*0x4a1c50*/
    v5 = &a2; /*0x4a1c57*/
    v6 = ~*(_DWORD *)this->__pad_0; /*0x4a1c5b*/
    v7 = 4; /*0x4a1c5d*/
    do /*0x4a1c7e*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)v5 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1c7a*/
      v5 = (int *)((char *)v5 + 1); /*0x4a1c7c*/
      --v7; /*0x4a1c7d*/
    }
    while ( v7 ); /*0x4a1c7e*/
    result = ~v6; /*0x4a1c80*/
    *(_DWORD *)this->__pad_0 = result; /*0x4a1c83*/
    *(_DWORD *)&this->__pad_0[4] = 0; /*0x4a1c85*/
  }
  return result; /*0x4a1c8e*/
}


// ==== 0x004A1CA0  Power::FlagProcess  this=IUnknown  sig=csp ====
int __thiscall Power::FlagProcess(AbstractClass *this, int a2)
{
  int v2; // eax
  int result; // eax
  unsigned int i; // eax
  int *v5; // esi
  unsigned int v6; // eax
  int v7; // edi

  v2 = *(_DWORD *)&this->__pad_0[4]; /*0x4a1ca0*/
  if ( !v2 ) /*0x4a1ca7*/
    *(_DWORD *)&this->__pad_0[8] = 0; /*0x4a1ca9*/
  this->__pad_0[v2 + 8] = (_BYTE)a2 != 0; /*0x4a1cb7*/
  result = *(_DWORD *)&this->__pad_0[4] + 1; /*0x4a1cbf*/
  *(_DWORD *)&this->__pad_0[4] = result; /*0x4a1cc1*/
  if ( result == 4 ) /*0x4a1cc7*/
  {
    this->__pad_0[12] = this->__pad_0[4]; /*0x4a1ccc*/
    for ( i = *(_DWORD *)&this->__pad_0[4] + 1; i < 4; ++i ) /*0x4a1cd5*/
      this->__pad_0[i + 8] = this->__pad_0[8]; /*0x4a1cda*/
    a2 = *(_DWORD *)&this->__pad_0[8]; /*0x4a1ce8*/
    v5 = &a2; /*0x4a1cef*/
    v6 = ~*(_DWORD *)this->__pad_0; /*0x4a1cf3*/
    v7 = 4; /*0x4a1cf5*/
    do /*0x4a1d16*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)v5 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1d12*/
      v5 = (int *)((char *)v5 + 1); /*0x4a1d14*/
      --v7; /*0x4a1d15*/
    }
    while ( v7 ); /*0x4a1d16*/
    result = ~v6; /*0x4a1d18*/
    *(_DWORD *)this->__pad_0 = result; /*0x4a1d1b*/
    *(_DWORD *)&this->__pad_0[4] = 0; /*0x4a1d1d*/
  }
  return result; /*0x4a1d23*/
}


// ==== 0x004A1D30  Checksummer::Add_WORD  this=IUnknown  sig=csp ====
int __thiscall Checksummer::Add_WORD(unsigned int *this, AbstractClass *aP1)
{
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&aP1, (IUnknown *)2); /*0x4a1d46*/
}


// ==== 0x004A1D50  Power::TimerProcess  this=IUnknown  sig=csp ====
int __thiscall Power::TimerProcess(AbstractClass *this)
{
  int v2; // [esp+4h] [ebp+4h] BYREF

  return Checksummer::Add_Buffer((unsigned int *)this, (unsigned __int8 *)&v2, 4); /*0x4a1d64*/
}


// ==== 0x004A1D70  Checksummer::Add_float  this=IUnknown  sig=csp ====
int __thiscall Checksummer::Add_float(unsigned int *this, ParticleSystemClass *aP1)
{
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&aP1, (IUnknown *)4); /*0x4a1d84*/
}


// ==== 0x004A1D90  Checksummer::Add_double  this=IUnknown  sig=csp ====
int __thiscall Checksummer::Add_double(AbstractClass *this, AbstractClass *aP1, AbstractClass *aP2)
{
  return Checksummer::Add_Buffer((unsigned int *)this, (unsigned __int8 *)&aP1, (IUnknown *)8); /*0x4a1dac*/
}


// ==== 0x004A1DB0  Checksum::AddString  this=IUnknown  sig=csp ====
int __thiscall Checksum::AddString(unsigned int *this, AbstractClass *aP1)
{
  int result; // eax

  if ( aP1 ) /*0x4a1db9*/
    return Checksummer::Add_Buffer(this, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x4a1dcc*/
  return result; /*0x4a1dd2*/
}


// ==== 0x004A1DE0  Checksummer::Add_Buffer  this=Checksummer  sig=csp ====
int __thiscall Checksummer::Add_Buffer(unsigned int *this, unsigned __int8 *a1, IUnknown *aP2)
{
  unsigned __int8 *v3; // ebp
  int v5; // edi
  INILinkNode *v6; // eax
  unsigned int v7; // ecx
  unsigned int i; // eax
  unsigned __int8 *v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  INILinkNode *v12; // eax
  unsigned __int8 v13; // cl
  int v14; // edi
  INILinkNode *v15; // eax
  unsigned int j; // eax
  unsigned int v17; // eax
  IUnknown **p_aP2; // ecx
  unsigned int v19; // eax
  INILinkNode *v20; // eax
  unsigned int k; // eax
  unsigned __int8 *v22; // eax
  unsigned int v23; // esi
  Pipe *v24; // eax
  unsigned int v25; // esi
  int v26; // ecx
  unsigned int v28; // [esp-4h] [ebp-14h]

  v3 = a1; /*0x4a1de2*/
  if ( a1 ) /*0x4a1dee*/
  {
    v5 = (int)aP2; /*0x4a1df4*/
    if ( (int)aP2 > 0 ) /*0x4a1dfa*/
    {
      do /*0x4a1e59*/
      {
        v6 = (INILinkNode *)this->bytePos; /*0x4a1e00*/
        if ( !v6 || (unsigned int)v6 >= 4 ) /*0x4a1e0e*/
          break; /*0x4a1e0e*/
        *((_BYTE *)this + (_DWORD)v6 + 8) = *v3; /*0x4a1e13*/
        v7 = this->bytePos + 1; /*0x4a1e1a*/
        this->bytePos = v7; /*0x4a1e1d*/
        if ( v7 == 4 ) /*0x4a1e22*/
        {
          this->buffer = 4; /*0x4a1e26*/
          for ( i = this->bytePos + 1; i < 4; ++i ) /*0x4a1e2f*/
            *((_BYTE *)this + i + 8) = this->state; /*0x4a1e34*/
          v28 = *this; /*0x4a1e42*/
          a1 = (unsigned __int8 *)this->state; /*0x4a1e47*/
          *this = CRC32::Compute((unsigned __int8 *)&a1, 4, v28); /*0x4a1e50*/
          this->bytePos = 0; /*0x4a1e52*/
        }
        ++v3; /*0x4a1e55*/
        --v5; /*0x4a1e56*/
      }
      while ( v5 > 0 ); /*0x4a1e59*/
      if ( (unsigned int)v5 >> 2 ) /*0x4a1e60*/
      {
        a1 = (unsigned __int8 *)((unsigned int)v5 >> 2); /*0x4a1e68*/
        aP2 = (IUnknown *)(v5 - 4 * ((unsigned int)v5 >> 2)); /*0x4a1e71*/
        do /*0x4a1eae*/
        {
          v9 = v3; /*0x4a1e77*/
          v10 = ~*this; /*0x4a1e79*/
          v11 = 4; /*0x4a1e7b*/
          do /*0x4a1e9c*/
          {
            v10 = CRC32_Table[*v9++ ^ (unsigned __int8)v10] ^ (v10 >> 8); /*0x4a1e98*/
            --v11; /*0x4a1e9b*/
          }
          while ( v11 ); /*0x4a1e9c*/
          *this = ~v10; /*0x4a1ea0*/
          v3 += 4; /*0x4a1ea6*/
          --a1; /*0x4a1eaa*/
        }
        while ( a1 ); /*0x4a1eae*/
        v5 = (int)aP2; /*0x4a1eb0*/
      }
      if ( v5 > 0 ) /*0x4a1eb8*/
      {
        a1 = (unsigned __int8 *)v5; /*0x4a1ebe*/
        do /*0x4a1f3e*/
        {
          v12 = (INILinkNode *)this->bytePos; /*0x4a1ec2*/
          v13 = *v3; /*0x4a1ec5*/
          if ( !v12 ) /*0x4a1eca*/
            this->state = 0; /*0x4a1ecc*/
          *((_BYTE *)this + (_DWORD)v12 + 8) = v13; /*0x4a1ecf*/
          v14 = 4; /*0x4a1ed7*/
          v15 = (INILinkNode *)(this->bytePos + 1); /*0x4a1edc*/
          this->bytePos = (unsigned int)v15; /*0x4a1ede*/
          if ( v15 == (INILinkNode *)4 ) /*0x4a1ee3*/
          {
            this->buffer = 4; /*0x4a1ee7*/
            for ( j = this->bytePos + 1; j < 4; ++j ) /*0x4a1ef0*/
              *((_BYTE *)this + j + 8) = this->state; /*0x4a1ef5*/
            v17 = *this; /*0x4a1f01*/
            aP2 = (IUnknown *)this->state; /*0x4a1f03*/
            p_aP2 = &aP2; /*0x4a1f07*/
            v19 = ~v17; /*0x4a1f0b*/
            do /*0x4a1f29*/
            {
              v19 = CRC32_Table[*(unsigned __int8 *)p_aP2 ^ (unsigned __int8)v19] ^ (v19 >> 8); /*0x4a1f25*/
              p_aP2 = (IUnknown **)((char *)p_aP2 + 1); /*0x4a1f27*/
              --v14; /*0x4a1f28*/
            }
            while ( v14 ); /*0x4a1f29*/
            *this = ~v19; /*0x4a1f2f*/
            this->bytePos = 0; /*0x4a1f31*/
          }
          ++v3; /*0x4a1f38*/
          --a1; /*0x4a1f3a*/
        }
        while ( a1 ); /*0x4a1f3e*/
      }
    }
  }
  v20 = (INILinkNode *)this->bytePos; /*0x4a1f40*/
  if ( !v20 ) /*0x4a1f45*/
    return *this; /*0x4a1fa0*/
  *((_BYTE *)this + (_DWORD)v20 + 8) = (_BYTE)v20; /*0x4a1f49*/
  for ( k = this->bytePos + 1; k < 4; ++k ) /*0x4a1f54*/
    *((_BYTE *)this + k + 8) = this->state; /*0x4a1f59*/
  v22 = (unsigned __int8 *)this->state; /*0x4a1f63*/
  v23 = *this; /*0x4a1f66*/
  a1 = v22; /*0x4a1f68*/
  v24 = (Pipe *)&a1; /*0x4a1f6c*/
  v25 = ~v23; /*0x4a1f70*/
  v26 = 4; /*0x4a1f72*/
  do /*0x4a1f93*/
  {
    v25 = CRC32_Table[(unsigned __int8)v24->__pad_0[0] ^ (unsigned __int8)v25] ^ (v25 >> 8); /*0x4a1f8f*/
    v24 = (Pipe *)((char *)v24 + 1); /*0x4a1f91*/
    --v26; /*0x4a1f92*/
  }
  while ( v26 ); /*0x4a1f93*/
  return ~v25; /*0x4a1f99*/
}


// ==== 0x004A1FB0  CRC32::Compute  this=INIClass  sig=csp ====
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
int __thiscall sub_4A2030(unsigned int *this, Pipe *aP1, int aP2)
{
  Checksummer::Add_Buffer(this + 3, (unsigned __int8 *)aP1, (IUnknown *)aP2); /*0x4a2042*/
  return (int)Delegate::Dispatch(this, aP1, (Pipe *)aP2); /*0x4a2050*/
}


// ==== 0x004A20B0  ObjectClass::method_4A20B0  this=ObjectClass  sig=csp ====
int __thiscall sub_4A20B0(unsigned int *this, Straw *aP1, int aP2)
{
  IUnknown *v4; // esi

  if ( !aP1 || aP2 < 1 ) /*0x4a20c3*/
    return 0; /*0x4a20e2*/
  v4 = (IUnknown *)Delegate::Invoke(this, (int)aP1, (Straw *)aP2); /*0x4a20cd*/
  Checksummer::Add_Buffer(this + 3, (unsigned __int8 *)aP1, v4); /*0x4a20d4*/
  return (int)v4; /*0x4a20dc*/
}


// ==== 0x004A2140  sub_4A2140  this=-  sig=ida-proto ====
int sub_4A2140()
{
  MEMORY[0x89F8E8] = 0; /*0x4a2142*/
  MEMORY[0x89F8EC] = 0; /*0x4a2147*/
  MEMORY[0x89F8F0] = 0; /*0x4a214c*/
  MEMORY[0x89F8F4] = 0; /*0x4a2151*/
  return 0; /*0x4a2156*/
}


// ==== 0x004A2160  sub_4A2160  this=-  sig=ida-proto ====
void sub_4A2160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a216c*/
  MEMORY[0x89F900] = Math::Sqrt(v0 + v0); /*0x4a217e*/
}


// ==== 0x004A2190  sub_4A2190  this=-  sig=ida-proto ====
void sub_4A2190()
{
  MEMORY[0x89F950] = MEMORY[0x89F900] / 60.0; /*0x4a219c*/
}


// ==== 0x004A21B0  sub_4A21B0  this=-  sig=ida-proto ====
void sub_4A21B0()
{
  MEMORY[0x89F938] = 1.0 / MEMORY[0x89F950]; /*0x4a21bc*/
}


// ==== 0x004A21D0  sub_4A21D0  this=-  sig=ida-proto ====
void sub_4A21D0()
{
  MEMORY[0x89F930] = 0.0174532925199433 * 45.0; /*0x4a21dc*/
}


// ==== 0x004A21F0  sub_4A21F0  this=-  sig=ida-proto ====
void sub_4A21F0()
{
  MEMORY[0x89F908] = 0.0174532925199433 * 60.0; /*0x4a21fc*/
}


// ==== 0x004A2210  sub_4A2210  this=-  sig=ida-proto ====
void sub_4A2210()
{
  MEMORY[0x89F8E0] = 0.0174532925199433 * 90.0; /*0x4a221c*/
}


// ==== 0x004A2230  sub_4A2230  this=-  sig=ida-proto ====
__int64 sub_4A2230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89F8E0] - MEMORY[0x89F908]); /*0x4a2242*/
  result = Math::RoundToInt(v0 * MEMORY[0x89F900] * 0.5); /*0x4a2256*/
  MEMORY[0x89F958] = result; /*0x4a225b*/
  return result; /*0x4a2260*/
}


// ==== 0x004A2270  sub_4A2270  this=-  sig=ida-proto ====
void sub_4A2270()
{
  MEMORY[0x89F910] = Math::ArcTan((double)MEMORY[0x89F958] * 0.00390625); /*0x4a2287*/
}


// ==== 0x004A22A0  sub_4A22A0  this=-  sig=ida-proto ====
void sub_4A22A0()
{
  MEMORY[0x89F928] = Math::ArcTan((double)(2 * MEMORY[0x89F958]) / MEMORY[0x89F900]); /*0x4a22c2*/
}


// ==== 0x004A22D0  sub_4A22D0  this=-  sig=ida-proto ====
__int64 sub_4A22D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89F958]) + 0.5); /*0x4a22eb*/
  MEMORY[0x89F94C] = result; /*0x4a22f0*/
  return result; /*0x4a22f6*/
}


// ==== 0x004A2300  sub_4A2300  this=-  sig=ida-proto ====
int sub_4A2300()
{
  MEMORY[0x89F8F8] = 0; /*0x4a2302*/
  MEMORY[0x89F8FA] = 0; /*0x4a2308*/
  return 0; /*0x4a230e*/
}


// ==== 0x004A2310  sub_4A2310  this=-  sig=ida-proto ====
int sub_4A2310()
{
  MEMORY[0x89F918] = 0; /*0x4a2312*/
  MEMORY[0x89F91C] = 0; /*0x4a2317*/
  MEMORY[0x89F920] = 0; /*0x4a231c*/
  return 0; /*0x4a2321*/
}


// ==== 0x004A2330  sub_4A2330  this=-  sig=ida-proto ====
int sub_4A2330()
{
  MEMORY[0x89F948] = 0; /*0x4a2335*/
  MEMORY[0x89F940] = 128; /*0x4a233f*/
  MEMORY[0x89F944] = 128; /*0x4a2344*/
  return 128; /*0x4a2349*/
}


// ==== 0x004A2350  TabClass::initStripClass  this=TabClass  sig=csp ====
_DWORD *__thiscall sub_4A2350(_DWORD *this)
{
  *this = 0; /*0x4a2354*/
  this->q004 = 0; /*0x4a2356*/
  this->u32_20 = 0; /*0x4a2359*/
  this->q024 = 0; /*0x4a235c*/
  this->q028 = 0; /*0x4a235f*/
  this->q00C = 0; /*0x4a2362*/
  return this; /*0x4a2365*/
}


// ==== 0x004A2370  ObjectClass::DrawSidebarCreditsTimer  this=ObjectClass  sig=csp ====
unsigned __int8 __userpurge DrawSidebarCreditsTimer@<al>(int a1@<ecx>, int a2@<edi>, char a3)
{
  unsigned __int8 result; // al
  int v5; // kr00_4
  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // ecx
  wchar_t *StringCSF; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // [esp-14h] [ebp-38h]
  int v15; // [esp-Ch] [ebp-30h]
  int v16; // [esp-8h] [ebp-2Ch]
  int v17; // [esp+8h] [ebp-1Ch] BYREF
  int v18[3]; // [esp+Ch] [ebp-18h] BYREF
  int v19[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( a3 || (result = *(_BYTE *)(a1 + 8)) != 0 ) /*0x4a2383*/
  {
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887300] + 124))(MEMORY[0x887300], a2); /*0x4a239f*/
    if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x4a23aa*/
    {
      UI_Draw_6D0E60(&MEMORY[0x87F7E8]); /*0x4a23b5*/
      v17 = v5 / 2; /*0x4a23c2*/
      v18[0] = 2; /*0x4a23c6*/
      v6 = *(_DWORD *)(a1 + 4); /*0x4a241f*/
      v7 = ((unsigned __int8)MEMORY[0xB0FA1C] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4a2422*/
         | (BYTE1(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
         | (BYTE2(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
      if ( v6 / 3600 > 99 ) /*0x4a243a*/
        v6 = 359999; /*0x4a243c*/
      v8 = v6 / 3600; /*0x4a2454*/
      v9 = 720 * (4 * (v6 / -3600) - v6 / 3600) + v6; /*0x4a246d*/
      v16 = v9 % 60; /*0x4a2488*/
      v15 = v9 / 60; /*0x4a2489*/
      StringCSF = GetStringCSF(g_Str_TXT_TIME_FORMAT_HOURS, 0, aDRa2mdpostCred, 107); /*0x4a2499*/
      swprintf(&MEMORY[0x89F860], (const size_t)StringCSF, (const wchar_t *const)v8, v15, v16); /*0x4a24a4*/
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300]); /*0x4a24c6*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a24db*/
                                  v18,
                                  (size_t)&MEMORY[0x89F860],
                                  MEMORY[0x887300],
                                  v11,
                                  (int)v19,
                                  (int)&v17,
                                  v7,
                                  0,
                                  0x4108u);
      *(_BYTE *)(a1 + 8) = 0; /*0x4a24e3*/
      *(_BYTE *)(a1 + 10) = 0; /*0x4a24e7*/
    }
    else
    {
      if ( *(_BYTE *)(a1 + 10) && MEMORY[0x8871E0]->ScatterSound >= 2 ) /*0x4a250b*/
      {
        if ( *(_BYTE *)(a1 + 9) ) /*0x4a250d*/
          v12 = *(_DWORD *)MEMORY[0x8871E0]->ChuteSound; /*0x4a2526*/
        else
          v12 = *(_DWORD *)(MEMORY[0x8871E0]->ChuteSound + 4); /*0x4a2530*/
        PlayVocClass(v12, 0x2000, 0.5, 0); /*0x4a2533*/
      }
      UI_Draw_6D0E60(&MEMORY[0x87F7E8]); /*0x4a253d*/
      v17 = v5 / 2; /*0x4a254e*/
      v18[0] = 2; /*0x4a2552*/
      v14 = ((unsigned __int8)MEMORY[0xB0FA1C] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4a25be*/
          | (BYTE1(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
          | (BYTE2(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300]); /*0x4a25c7*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a25db*/
                                  v18,
                                  (size_t)&off_81FBB4,
                                  MEMORY[0x887300],
                                  v13,
                                  (int)v19,
                                  (int)&v17,
                                  v14,
                                  0,
                                  0x4108u);
      *(_BYTE *)(a1 + 8) = 0; /*0x4a25e3*/
      *(_BYTE *)(a1 + 10) = 0; /*0x4a25e7*/
    }
  }
  return result; /*0x4a24ed*/
}


// ==== 0x004A2600  CountdownTimer::UpdateDisplay  this=CountdownTimer  sig=csp ====
char __thiscall sub_4A2600(int *this, char a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx

  MEMORY[0x89F95C] = (int)MEMORY[0xA8ED84]; /*0x4a260f*/
  if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x4a261b*/
  {
    v3 = *((_DWORD *)MEMORY[0xA8B230] + 391); /*0x4a262a*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x4a2639*/
    {
      v4 = (char *)MEMORY[0xA8B230] + 1556; /*0x4a2630*/
      v3 += Timer::GetTicks() - *v4; /*0x4a2645*/
    }
    v5 = this->q001; /*0x4a265b*/
    *this = v3 / 60; /*0x4a2660*/
    if ( v3 / 60 != v5 || (LOBYTE(v6) = a2) != 0 ) /*0x4a266a*/
    {
      this->q001 = v3 / 60; /*0x4a2670*/
LABEL_26:
      *((_BYTE *)this + 8) = 1; /*0x4a2757*/
      LOBYTE(v6) = MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x4a2761*/
      MEMORY[0x884B90] = 1; /*0x4a2766*/
      return v6; /*0x4a2766*/
    }
    return v6; /*0x4a266a*/
  }
  v7 = (*(int (__stdcall **)(char *))(*((_DWORD *)HouseClass_Player + 9) + 24))((char *)HouseClass_Player + 36); /*0x4a2684*/
  *this = v7; /*0x4a2689*/
  *this = v7 <= 0 ? 0 : v7;
  if ( *((_DWORD *)MEMORY[0xA8B230] + 1146) != -1 ) /*0x4a26a7*/
    goto LABEL_12; /*0x4a26a7*/
  v6 = *((_DWORD *)MEMORY[0xA8B230] + 1148); /*0x4a26a9*/
  v8 = *((_DWORD *)MEMORY[0xA8B230] + 1146); /*0x4a26af*/
  if ( v8 != -1 ) /*0x4a26b8*/
  {
    if ( (int)MEMORY[0xA8ED84] - v8 >= v6 ) /*0x4a26c4*/
      goto LABEL_13; /*0x4a26c4*/
    v6 -= (int)MEMORY[0xA8ED84] - v8; /*0x4a26c6*/
  }
  if ( v6 ) /*0x4a26ca*/
  {
LABEL_12:
    *((_BYTE *)this + 8) = 1; /*0x4a26d3*/
    LOBYTE(v6) = MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x4a26d6*/
  }
LABEL_13:
  v9 = this->q001; /*0x4a26db*/
  v10 = *this; /*0x4a26de*/
  if ( v9 != *this )
  {
    if ( a2 )
    {
      *((_BYTE *)this + 10) = 0; /*0x4a26f0*/
      this->q001 = v10; /*0x4a26f4*/
    }
    else
    {
      v11 = this->q003; /*0x4a26f9*/
      if ( v11 ) /*0x4a26fe*/
        this->q003 = v11 - 1; /*0x4a2701*/
      this->q003 = v10 - v9 <= 0 ? 3 : 1;
      v12 = (int)abs32(v10 - v9) >> 3; /*0x4a271e*/
      if ( v12 >= 1 ) /*0x4a2723*/
      {
        if ( v12 > 143 ) /*0x4a272e*/
          v12 = 143; /*0x4a2730*/
      }
      else
      {
        v12 = 1; /*0x4a2725*/
      }
      if ( this->q001 > v10 ) /*0x4a2738*/
        v12 = -v12; /*0x4a273a*/
      v13 = v12 + this->q001; /*0x4a273f*/
      this->q001 = v13; /*0x4a2743*/
      if ( v13 - v12 != v13 ) /*0x4a274a*/
      {
        *((_BYTE *)this + 10) = 1; /*0x4a2751*/
        *((_BYTE *)this + 9) = v12 > 0; /*0x4a2754*/
      }
    }
    goto LABEL_26; /*0x4a26f7*/
  }
  return v6; /*0x4a276c*/
}


// ==== 0x004A2780  CacheStraw::StreamToBuffer  this=CacheStraw  sig=csp ====
int __thiscall Delegate::StreamToBuffer(CacheStraw *this, char *a1, int a3)
{
  int result; // eax
  char *v5; // ebp
  ModemGame *v6; // ebx
  Straw *v7; // edi
  int v8; // ecx
  int v9; // eax
  ModemGame *v10; // [esp+10h] [ebp-4h]

  result = 0; /*0x4a2786*/
  v10 = 0; /*0x4a278c*/
  if ( *(_DWORD *)&this->__pad_0[12] ) /*0x4a2789*/
  {
    v5 = a1; /*0x4a2794*/
    if ( a1 ) /*0x4a279a*/
    {
      v6 = (ModemGame *)a3; /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          v7 = (Straw *)this->field_1C; /*0x4a27a4*/
          if ( (int)v7 > 0 ) /*0x4a27a9*/
          {
            if ( (int)v7 >= (int)v6 ) /*0x4a27ad*/
              v7 = (Straw *)v6; /*0x4a27af*/
            memcpy(v5, (const void *)(*(_DWORD *)&this->__pad_0[12] + *(_DWORD *)&this->__pad_14[4]), (size_t)v7); /*0x4a27bc*/
            v8 = this->field_1C - (_DWORD)v7; /*0x4a27cf*/
            v6 = (ModemGame *)((char *)v6 - (int)v7); /*0x4a27d4*/
            *(_DWORD *)&this->__pad_14[4] += v7; /*0x4a27d6*/
            v10 = (ModemGame *)((char *)v10 + (_DWORD)v7); /*0x4a27d9*/
            this->field_1C = v8; /*0x4a27dd*/
            v5 = &v5[(_DWORD)v7]; /*0x4a27e0*/
          }
          if ( !v6 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          v9 = Delegate::Invoke(this, *(_DWORD *)&this->__pad_0[12], (Straw *)this->field_10); /*0x4a27f0*/
          this->field_1C = v9; /*0x4a27f7*/
          *(_DWORD *)&this->__pad_14[4] = 0; /*0x4a27fa*/
          if ( !v9 ) /*0x4a2801*/
            break; /*0x4a2801*/
        }
        while ( (int)v6 > 0 ); /*0x4a2805*/
        return (int)v10->__pad_0; /*0x4a2807*/
      }
    }
  }
  return result; /*0x4a280b*/
}


// ==== 0x004A2820  CStreamClass::Constructor  this=CStreamClass  sig=csp ====
_DWORD *__thiscall sub_4A2820(_DWORD *this)
{
  this->Capacity = 0; /*0x4a282a*/
  this->q00C = 0; /*0x4a282d*/
  this->q040 = 0; /*0x4a2830*/
  this->q044 = 0; /*0x4a2833*/
  this->q014 = 0; /*0x4a2836*/
  this->q018 = __2_YAPAXI_Z(0x10000u); /*0x4a2843*/
  this->q01C = __2_YAPAXI_Z(0x10000u); /*0x4a2850*/
  this->q020 = __2_YAPAXI_Z(0x10000u); /*0x4a285b*/
  *this = &CStreamClass::`vftable'; /*0x4a285e*/
  this->vtable2 = &vt_CStreamClass; /*0x4a2864*/
  this->q024 = 0xFFFF; /*0x4a286b*/
  return this; /*0x4a2874*/
}


// ==== 0x004A2880  CStreamClass::method_4A2880  this=CStreamClass  sig=csp ====
void __thiscall sub_4A2880(void *this)
{
  int v2; // eax
  void *v3; // ecx
  void *v4; // edx
  int v5; // esi
  ULONG v6; // [esp+0h] [ebp-8h]

  v2 = this->Capacity; /*0x4a2886*/
  *(_DWORD *)this = &CStreamClass::`vftable'; /*0x4a2889*/
  this->vtable2 = &vt_CStreamClass; /*0x4a2891*/
  if ( v2 ) /*0x4a2898*/
  {
    if ( this->q044 && *((int *)this + 5) > 0 && this->Capacity ) /*0x4a28aa*/
      IStream::Read(*((IStream **)this + 6), *((void **)this + 5), v6); /*0x4a28b4*/
    if ( this->Capacity /*0x4a28da*/
      && (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 2) + 32))(this->Capacity, 0) >= 0 )
    {
      if ( !this->Capacity ) /*0x4a28dc*/
        WinAPI::Wrapper(-2147467261); /*0x4a28e6*/
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 2) + 8))(this->Capacity); /*0x4a28f1*/
      this->Capacity = 0; /*0x4a28f4*/
    }
  }
  __3_YAXPAX_Z(*((void **)this + 8)); /*0x4a28fb*/
  v3 = (void *)this->q018; /*0x4a2900*/
  this->Capacity = 0; /*0x4a2903*/
  __3_YAXPAX_Z(v3); /*0x4a2907*/
  v4 = (void *)this->q01C; /*0x4a290c*/
  this->q018 = 0; /*0x4a290f*/
  __3_YAXPAX_Z(v4); /*0x4a2913*/
  this->q01C = 0; /*0x4a2918*/
  v5 = this->Capacity; /*0x4a291b*/
  if ( v5 ) /*0x4a2923*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4a2928*/
}


// ==== 0x004A2930  CStreamClass::AddRef  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::AddRef(int a1)
{
  ++dword_A8ED54[47098]; /*0x4a293f*/
  return ((int (__stdcall *)(int))InterlockedIncrement)(a1 + 12); /*0x4a294b*/
}


// ==== 0x004A2950  CStreamClass::Release  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::_vt02(volatile LONG *a1)
{
  LONG v1; // esi

  --g_BulletClassPool; /*0x4a2960*/
  v1 = InterlockedDecrement(a1 + 3); /*0x4a296d*/
  if ( !v1 && a1 ) /*0x4a2975*/
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 56))(a1, 1); /*0x4a297d*/
  return v1; /*0x4a2982*/
}


// ==== 0x004A2990  CStreamClass::QueryInterface  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt00(int a1, const void *a2, _DWORD *a3)
{
  int v4; // ecx

  if ( !a3 ) /*0x4a2997*/
    return -2147467261; /*0x4a2999*/
  *a3 = 0; /*0x4a29b6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a29c0*/
    *a3 = a1; /*0x4a29c4*/
  if ( !memcmp(a2, &unk_7F7CF0, 0x10u) ) /*0x4a29d5*/
    *a3 = a1; /*0x4a29da*/
  if ( !memcmp(a2, &unk_7E9530, 0x10u) ) /*0x4a29ea*/
  {
    if ( a1 ) /*0x4a29f2*/
      v4 = a1 + 4; /*0x4a29f4*/
    else
      v4 = 0; /*0x4a29f9*/
    *a3 = v4; /*0x4a29fb*/
  }
  if ( !*a3 ) /*0x4a29fd*/
    return -2147467262; /*0x4a2a02*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x4a2a0e*/
  return 0; /*0x4a299e*/
}


// ==== 0x004A2A20  CStreamClass::StubReturnNullPointer  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::sub_4A2A20(int a1, int (__stdcall ***a2)(_DWORD, void *, _DWORD))
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, void *, _DWORD); // edi

  if ( !a2 ) /*0x4a2a27*/
    return -2147467261; /*0x4a2a29*/
  if ( *(_DWORD *)(a1 + 4) ) /*0x4a2a36*/
    return -2147467259; /*0x4a2a3d*/
  v3 = (**a2)(a2, &unk_81FC50, &a2); /*0x4a2a56*/
  if ( v3 >= 0 ) /*0x4a2a5a*/
  {
    v5 = *(_DWORD *)(a1 + 4); /*0x4a2a72*/
    v6 = a2; /*0x4a2a76*/
    if ( v5 ) /*0x4a2a7c*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4a2a81*/
    *(_DWORD *)(a1 + 4) = v6; /*0x4a2a84*/
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 4); /*0x4a2a5c*/
    if ( v4 ) /*0x4a2a61*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(_DWORD *)(a1 + 4)); /*0x4a2a66*/
    *(_DWORD *)(a1 + 4) = 0; /*0x4a2a69*/
  }
  if ( v3 < 0 && v3 != -2147467262 ) /*0x4a2a92*/
    WinAPI::Wrapper(v3); /*0x4a2a95*/
  return 0; /*0x4a2a2e*/
}


// ==== 0x004A2AB0  CStreamClass::StreamRead  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::StreamRead(int a1, _DWORD *a2)
{
  int v2; // ecx
  int result; // eax
  ULONG v4; // [esp+0h] [ebp-4h]

  v2 = a1 - 4; /*0x4a2ab8*/
  if ( *(_BYTE *)(a1 + 13) && *(int *)(v2 + 20) > 0 && *(_DWORD *)(v2 + 8) ) /*0x4a2ac6*/
    IStream::Read(*(IStream **)(v2 + 24), *(void **)(v2 + 20), v4); /*0x4a2ad2*/
  if ( !*(_DWORD *)(a1 + 4) ) /*0x4a2ad7*/
    return -2147467259; /*0x4a2ade*/
  if ( a2 ) /*0x4a2aee*/
  {
    if ( !*(_DWORD *)(a1 + 4) ) /*0x4a2af0*/
      WinAPI::Wrapper(-2147467261); /*0x4a2afc*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 4))(*(_DWORD *)(a1 + 4)); /*0x4a2b07*/
    *a2 = *(_DWORD *)(a1 + 4); /*0x4a2b0d*/
  }
  if ( !*(_DWORD *)(a1 + 4) ) /*0x4a2b0f*/
    WinAPI::Wrapper(-2147467261); /*0x4a2b1c*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 32))(*(_DWORD *)(a1 + 4), 0); /*0x4a2b29*/
  if ( result >= 0 ) /*0x4a2b2e*/
  {
    if ( !*(_DWORD *)(a1 + 4) ) /*0x4a2b30*/
      WinAPI::Wrapper(-2147467261); /*0x4a2b3c*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 8))(*(_DWORD *)(a1 + 4)); /*0x4a2b47*/
    *(_DWORD *)(a1 + 4) = 0; /*0x4a2b4a*/
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
HRESULT __stdcall CStreamClass::CopyStreamToBuffer(int a1, IStream *Src, signed int Size, size_t *a4)
{
  IStream *v4; // ebp
  size_t v5; // edi
  signed int v6; // ebx
  HRESULT result; // eax
  int v8; // ecx
  size_t v9; // eax
  ULONG v10; // [esp+0h] [ebp-10h]

  v4 = Src; /*0x4a2cd2*/
  v5 = Size; /*0x4a2cd8*/
  v6 = Size; /*0x4a2cde*/
  if ( !Src ) /*0x4a2ce0*/
    return -2147467261; /*0x4a2ceb*/
  if ( Size < 0 ) /*0x4a2cf0*/
    return -2147024809; /*0x4a2cfb*/
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2d02*/
    return -2147467259; /*0x4a2d12*/
  if ( *(_BYTE *)(a1 + 16) ) /*0x4a2d15*/
    return -2147467259; /*0x4a2d25*/
  *(_BYTE *)(a1 + 17) = 1; /*0x4a2d2a*/
  if ( !Size ) /*0x4a2d2e*/
    return 0; /*0x4a2d2e*/
  if ( a4 ) /*0x4a2d3a*/
    *a4 = 0; /*0x4a2d3c*/
  v8 = *(_DWORD *)(a1 + 20); /*0x4a2d42*/
  if ( v8 > 0 ) /*0x4a2d47*/
  {
    if ( Size >= 0x10000 - v8 ) /*0x4a2d52*/
      v5 = 0x10000 - v8; /*0x4a2d54*/
    memcpy((void *)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 20)), Src, v5); /*0x4a2d61*/
    v9 = v5 + *(_DWORD *)(a1 + 20); /*0x4a2d72*/
    v4 = (IStream *)((char *)Src + v5); /*0x4a2d74*/
    v6 = Size - v5; /*0x4a2d76*/
    *(_DWORD *)(a1 + 20) = v9; /*0x4a2d7d*/
    if ( v9 == 0x10000 ) /*0x4a2d80*/
    {
      result = IStream::Read(*(IStream **)(a1 + 24), (void *)0x10000, v10); /*0x4a2d8d*/
      if ( result < 0 ) /*0x4a2d94*/
        return result; /*0x4a2d94*/
      *(_DWORD *)(a1 + 20) = 0; /*0x4a2d96*/
    }
    v5 = Size; /*0x4a2d9d*/
  }
  if ( v6 < 0x10000 ) /*0x4a2da7*/
  {
LABEL_23:
    if ( v6 > 0 ) /*0x4a2dd4*/
    {
      memcpy(*(void **)(a1 + 24), v4, v6); /*0x4a2ddc*/
      v5 = Size; /*0x4a2de1*/
      *(_DWORD *)(a1 + 20) = v6; /*0x4a2de8*/
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
int __stdcall CStreamClass::_vt05(int a1, int a2, int a3, int a4, int a5)
{
  if ( *(_BYTE *)(a1 + 16) || *(_BYTE *)(a1 + 17) ) /*0x4a2e0c*/
    return -2147467259; /*0x4a2e45*/
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2e13*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e1f*/
  return (*(int (__stdcall **)(_DWORD, int, int, int, int))(**(_DWORD **)(a1 + 8) + 20))( /*0x4a2e41*/
           *(_DWORD *)(a1 + 8),
           a2,
           a3,
           a4,
           a5);
}


// ==== 0x004A2E50  CStreamClass::Write  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt06(int a1, int a2, int a3)
{
  if ( *(_BYTE *)(a1 + 16) || *(_BYTE *)(a1 + 17) ) /*0x4a2e5c*/
    return -2147467259; /*0x4a2e8b*/
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2e63*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e6f*/
  return (*(int (__stdcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 8) + 24))(*(_DWORD *)(a1 + 8), a2, a3); /*0x4a2e87*/
}


// ==== 0x004A2EA0  CStreamClass::Seek  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt07(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2ea5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2eb1*/
  return (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)(a1 + 8) + 28))( /*0x4a2ed8*/
           *(_DWORD *)(a1 + 8),
           a2,
           a3,
           a4,
           a5,
           a6);
}


// ==== 0x004A2EE0  CStreamClass::SetSize  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt08(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2ee5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2ef1*/
  return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 32))(*(_DWORD *)(a1 + 8), a2); /*0x4a2f04*/
}


// ==== 0x004A2F10  CStreamClass::Commit  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt09(int a1)
{
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2f15*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f21*/
  return (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 36))(*(_DWORD *)(a1 + 8)); /*0x4a2f2f*/
}


// ==== 0x004A2F40  CStreamClass::Revert  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt10(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2f45*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f51*/
  return (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)(a1 + 8) + 40))( /*0x4a2f78*/
           *(_DWORD *)(a1 + 8),
           a2,
           a3,
           a4,
           a5,
           a6);
}


// ==== 0x004A2F80  CStreamClass::LockRegion  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt11(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2f85*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f91*/
  return (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)(a1 + 8) + 44))( /*0x4a2fb8*/
           *(_DWORD *)(a1 + 8),
           a2,
           a3,
           a4,
           a5,
           a6);
}


// ==== 0x004A2FC0  CStreamClass::UnlockRegion  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt12(int a1, int a2, int a3)
{
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2fc5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2fd1*/
  return (*(int (__stdcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 8) + 48))(*(_DWORD *)(a1 + 8), a2, a3); /*0x4a2fe9*/
}


// ==== 0x004A2FF0  CStreamClass::Stat  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::_vt13(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2ff5*/
    WinAPI::Wrapper(-2147467261); /*0x4a3001*/
  return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 52))(*(_DWORD *)(a1 + 8), a2); /*0x4a3014*/
}


// ==== 0x004A3020  IStream::Read  this=IStream  sig=csp ====
HRESULT __stdcall IStream_Read(IStream *pstm, void *pv, ULONG cb)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // esi
  void *v5; // ecx
  HRESULT result; // eax
  void *v7; // [esp+20h] [ebp-4h] BYREF

  v4 = v3; /*0x4a3026*/
  v7 = pv; /*0x4a302d*/
  WriteCompressionBlock(v3[7], &v7, v3[8]); /*0x4a303e*/
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
CStreamClass *__userpurge CStreamClass::ddtor@<eax>(void *Block@<ecx>, ULONG a2@<edi>, char a3)
{
  int v4; // eax
  void *v5; // ecx
  void *v6; // edx
  int v7; // eax

  v4 = *((_DWORD *)Block + 2); /*0x4a3116*/
  *(_DWORD *)Block = &CStreamClass::`vftable'; /*0x4a3119*/
  *((_DWORD *)Block + 1) = &vt_CStreamClass; /*0x4a3121*/
  if ( v4 ) /*0x4a3128*/
  {
    if ( *((_BYTE *)Block + 17) /*0x4a314b*/
      && *((int *)Block + 5) > 0
      && !CStreamClass::IsEmpty((_DWORD *)Block + 2, 0)
      && *((int *)Block + 5) > 0 )
    {
      IStream::Read(*((IStream **)Block + 6), *((void **)Block + 5), a2); /*0x4a3154*/
    }
    if ( *((_DWORD *)Block + 2) /*0x4a317b*/
      && (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)Block + 2) + 32))(*((_DWORD *)Block + 2), 0) >= 0 )
    {
      if ( !*((_DWORD *)Block + 2) ) /*0x4a317d*/
        WinAPI::Wrapper(-2147467261); /*0x4a3187*/
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)Block + 2) + 8))(*((_DWORD *)Block + 2)); /*0x4a3192*/
      *((_DWORD *)Block + 2) = 0; /*0x4a3195*/
    }
  }
  OperatorDelete(*((void **)Block + 8)); /*0x4a319c*/
  v5 = (void *)*((_DWORD *)Block + 6); /*0x4a31a1*/
  *((_DWORD *)Block + 8) = 0; /*0x4a31a4*/
  OperatorDelete(v5); /*0x4a31a8*/
  v6 = (void *)*((_DWORD *)Block + 7); /*0x4a31ad*/
  *((_DWORD *)Block + 6) = 0; /*0x4a31b0*/
  OperatorDelete(v6); /*0x4a31b4*/
  *((_DWORD *)Block + 7) = 0; /*0x4a31b9*/
  v7 = *((_DWORD *)Block + 2); /*0x4a31bc*/
  if ( v7 ) /*0x4a31c4*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*((_DWORD *)Block + 2)); /*0x4a31c9*/
  if ( (a3 & 1) != 0 ) /*0x4a31d1*/
    OperatorDelete(Block); /*0x4a31d4*/
  return (CStreamClass *)Block; /*0x4a31de*/
}


// ==== 0x004A31F0  CStreamClass::IsEmpty  this=CStreamClass  sig=csp ====
BOOL __thiscall sub_4A31F0(_DWORD *this, int a2)
{
  if ( a2 ) /*0x4a31f9*/
    WinAPI::Wrapper(-2147467261); /*0x4a3200*/
  return *this == 0; /*0x4a320e*/
}


// ==== 0x004A3220  CStreamClass::IStreamQueryInterface  this=CStreamClass  sig=csp ====
int __stdcall CStreamClass::sub_4A3220(int a1, const void *a2, _DWORD *a3)
{
  return CStreamClass::QueryInterface(a1 - 4, a2, a3);
}


// ==== 0x004A3230  CStreamClass::IStreamAddRef  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::sub_4A3230(int a1)
{
  return CStreamClass::AddRef(a1 - 4);
}


// ==== 0x004A3240  CStreamClass::IStreamRelease  this=CStreamClass  sig=csp ====
LONG __stdcall CStreamClass::sub_4A3240(int a1)
{
  return CStreamClass::Release((volatile LONG *)(a1 - 4));
}


// ==== 0x004A3250  sub_4A3250  this=-  sig=ida-proto ====
int sub_4A3250()
{
  MEMORY[0x89F960] = 0; /*0x4a3252*/
  MEMORY[0x89F964] = 0; /*0x4a3257*/
  MEMORY[0x89F968] = 0; /*0x4a325c*/
  MEMORY[0x89F96C] = 0; /*0x4a3261*/
  return 0; /*0x4a3266*/
}


// ==== 0x004A3270  ObjectClass::method_4A3270  this=ObjectClass  sig=csp ====
int *__thiscall sub_4A3270(int *this, int a2, int a3, int a4)
{
  int *v5; // ebx
  int v6; // ebx
  _DWORD v8[25]; // [esp+10h] [ebp-64h] BYREF

  v5 = this + 28; /*0x4a3287*/
  *this = a4; /*0x4a328f*/
  this->referenceCount = 0; /*0x4a3291*/
  this->q01D = 0; /*0x4a3297*/
  memset(this + 1, 0, 0x6Cu); /*0x4a329e*/
  this->vtable2 = 108; /*0x4a32a4*/
  this->vtable3 = 7; /*0x4a32aa*/
  this->health = dword_81FC60[a4]; /*0x4a32b8*/
  this->vtable2 = a2; /*0x4a32bf*/
  this->vtable4 = a3; /*0x4a32c2*/
  if ( a4 == 1 ) /*0x4a32c5*/
  {
    this->vtable3 = 71; /*0x4a32c7*/
    this->referenceCount = 16; /*0x4a32ce*/
  }
  if ( !MEMORY[0x8A0E00] /*0x4a32e5*/
    || !(*(int (__stdcall **)(int, int *, int *, _DWORD))(*(_DWORD *)MEMORY[0x8A0E00] + 24))(
          MEMORY[0x8A0E00],
          this + 1,
          this + 28,
          0) )
  {
    v6 = *v5; /*0x4a32ec*/
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
          return this; /*0x4a3347*/
        }
        if ( a4 != 2 ) /*0x4a32fb*/
          return this; /*0x4a3306*/
      }
      (**(void (__stdcall ***)(int, void *, int))v6)(v6, &unk_7F8130, (int)(this + 29)); /*0x4a3356*/
    }
  }
  return this; /*0x4a32ff*/
}


// ==== 0x004A3370  DDraw::ReleaseSurfaces  this=AbstractClass  sig=csp ====
int __thiscall DDraw::ReleaseSurfaces(int *this)
{
  int v2; // eax
  int result; // eax

  v2 = this->q01D; /*0x4a3373*/
  if ( v2 ) /*0x4a3378*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4a337d*/
    this->q01D = 0; /*0x4a3380*/
  }
  result = this->referenceCount; /*0x4a3387*/
  if ( result ) /*0x4a338c*/
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this->referenceCount); /*0x4a3391*/
    this->referenceCount = 0; /*0x4a3394*/
  }
  return result; /*0x4a339b*/
}


// ==== 0x004A33A0  AudioStream::ReadSamples  this=AbstractClass  sig=csp ====
int __thiscall AudioStream_ReadSamples(_DWORD *this, const void *a2)
{
  _DWORD *v2; // ebx
  int v3; // edx
  _DWORD *v5; // ecx
  _WORD *v6; // ebx
  unsigned int v7; // edi
  int v8; // ebp
  _WORD *SamplePosition; // esi
  _WORD *v10; // eax
  _WORD *v11; // edx
  unsigned int v13; // [esp+18h] [ebp-E8h]
  int v14; // [esp+1Ch] [ebp-E4h]
  _DWORD v15[4]; // [esp+20h] [ebp-E0h] BYREF
  _DWORD v16[27]; // [esp+30h] [ebp-D0h] BYREF
  _DWORD v17[25]; // [esp+9Ch] [ebp-64h] BYREF

  v2 = this; /*0x4a33a7*/
  v3 = this->q070; /*0x4a33ac*/
  if ( !v3 ) /*0x4a33b7*/
    return -1; /*0x4a33b7*/
  if ( *this == 2 )
  {
    if ( !MEMORY[0x8A0E08] || !*((_DWORD *)MEMORY[0x8A0E08] + 28) ) /*0x4a33d8*/
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
             *((_DWORD *)MEMORY[0x8A0E08] + 28),
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
      if ( *v2 ) /*0x4a3474*/
      {
        if ( *v2 == 1 ) /*0x4a347f*/
        {
          v5 = MEMORY[0x887644]; /*0x4a3485*/
          if ( MEMORY[0x887644] ) /*0x4a348d*/
          {
            if ( MEMORY[0x87E8A4] ) /*0x4a3499*/
            {
              v6 = (_WORD *)v16[9]; /*0x4a34a6*/
              v7 = 0; /*0x4a34aa*/
              v8 = v16[4] >> 1; /*0x4a34ac*/
              v14 = v16[4] >> 1; /*0x4a34b0*/
              v13 = *((_DWORD *)MEMORY[0x887644] + 11); /*0x4a34b4*/
              if ( v13 ) /*0x4a34b8*/
              {
                do /*0x4a353c*/
                {
                  SamplePosition = (_WORD *)Audio::GetSamplePosition((int)v5, 0, v7 - v5[1]); /*0x4a34d4*/
                  v10 = (_WORD *)StreamClass::ReadAndSeek( /*0x4a34df*/
                                   (int)MEMORY[0x87E8A4],
                                   0,
                                   v7 - *((_DWORD *)MEMORY[0x87E8A4] + 1));
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
                      v5 = MEMORY[0x887644]; /*0x4a3507*/
                      v11 = SamplePosition + 1; /*0x4a350d*/
                      ++v6; /*0x4a3510*/
                      if ( (unsigned int)(SamplePosition + 1) >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x4a3516*/
                        v11 = (_WORD *)((char *)v11 - *((_DWORD *)MEMORY[0x887644] + 8)); /*0x4a3518*/
                      SamplePosition = v11; /*0x4a351b*/
                      if ( (unsigned int)++v10 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4a3529*/
                        v10 = (_WORD *)((char *)v10 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4a352b*/
                      --v8; /*0x4a352e*/
                    }
                    while ( v8 ); /*0x4a352f*/
                    v8 = v14; /*0x4a3531*/
                  }
                  else
                  {
                    v5 = MEMORY[0x887644]; /*0x4a3540*/
                  }
                  ++v7; /*0x4a3539*/
                }
                while ( v7 < v13 ); /*0x4a353c*/
              }
              v2 = this; /*0x4a356f*/
            }
          }
        }
      }
      else if ( a2 ) /*0x4a3551*/
      {
        qmemcpy((void *)v16[9], a2, v16[4] * v2[3]); /*0x4a3564*/
      }
      return (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v2[28] + 128))(v2[28], 0) != 0 ? 2 : 0;
    }
  }
}


// ==== 0x004A35A0  ColorStruct::SetRGB  this=ColorStruct  sig=csp ====
int __thiscall ColorStruct_SetRGB(_DWORD *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned int v4; // eax

  v4 = a4 | ((a3 | ((a2 | 0xFFFFFF00) << 8)) << 8); /*0x4a35c5*/
  this->q050 = v4; /*0x4a35c7*/
  this->q030 = v4; /*0x4a35ca*/
  this->q010 = v4; /*0x4a35cd*/
  this->q054 = -16777216; /*0x4a35d5*/
  this->q034 = -16777216; /*0x4a35d8*/
  this->q014 = -16777216; /*0x4a35db*/
  return -16777216; /*0x4a35de*/
}


// ==== 0x004A35F0  Tactical::SetCellTransform  this=IUnknown  sig=csp ====
char *__thiscall Tactical::SetCellTransform(
        char *this,
        int a2,
        CoordStruct *aP2,
        int a4,
        CoordStruct *aP4,
        int a6,
        int a7)
{
  char *result; // eax

  result = this + 32 * a2; /*0x4a35fb*/
  *(_DWORD *)result = aP2; /*0x4a3601*/
  *((_DWORD *)result + 1) = a4; /*0x4a3607*/
  *((_DWORD *)result + 2) = aP4; /*0x4a360e*/
  *((_DWORD *)result + 6) = a6; /*0x4a3615*/
  *((_DWORD *)result + 7) = a7; /*0x4a3618*/
  *((_DWORD *)result + 3) = 1065353216; /*0x4a361b*/
  return result; /*0x4a3622*/
}


// ==== 0x004A3630  ObjectClass::method_4A3630  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4A3630(_DWORD *this)
{
  this->q6000 = 0; /*0x4a3632*/
  return this; /*0x4a363c*/
}


// ==== 0x004A3640  DDraw::Init  this=AbstractClass  sig=csp ====
void __thiscall sub_4A3640(_DWORD *this)
{
  this->q1800 = 0; /*0x4a3640*/
}


// ==== 0x004A3650  nullsub_115  this=-  sig=ida-proto ====
void nullsub_115()
{
  ; /*0x4a3650*/
}


// ==== 0x004A3660  ObjectClass::RenderTactical3DScene  this=AbstractClass  sig=csp ====
int __thiscall sub_4A3660(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  bool v4; // zf
  int v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // edx
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
  v5 = this->q1800; /*0x4a366c*/
  this->q1800 = 0; /*0x4a3672*/
  v18 = v5; /*0x4a367c*/
  if ( v4 ) /*0x4a3680*/
    return -1; /*0x4a3680*/
  v6 = MEMORY[0x8A0E04]; /*0x4a3686*/
  if ( !MEMORY[0x8A0E04] ) /*0x4a368e*/
    return -1; /*0x4a368e*/
  if ( !*((_DWORD *)MEMORY[0x8A0E04] + 29) ) /*0x4a3694*/
    return -1; /*0x4a3694*/
  v7 = MEMORY[0x8A0E08]; /*0x4a369f*/
  if ( !MEMORY[0x8A0E08] ) /*0x4a36a7*/
    return -1; /*0x4a36a7*/
  v8 = *((_DWORD *)MEMORY[0x8A0E08] + 28); /*0x4a36ad*/
  if ( !v8 ) /*0x4a36b2*/
    return -1; /*0x4a3832*/
  if ( MEMORY[0x89F970] == v2 ) /*0x4a36bf*/
    goto LABEL_13; /*0x4a36bf*/
  if ( MEMORY[0x89F970] ) /*0x4a36c3*/
  {
    result = (*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)MEMORY[0x89F970] + 32))(MEMORY[0x89F970], 0, v8); /*0x4a36cb*/
    if ( result ) /*0x4a36d0*/
      return result; /*0x4a36d0*/
    v7 = MEMORY[0x8A0E08]; /*0x4a36d6*/
    MEMORY[0x89F970] = 0; /*0x4a36dc*/
  }
  result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v7[28]); /*0x4a36e8*/
  if ( !result ) /*0x4a36ed*/
  {
    result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF8] + 60))(MEMORY[0x8A0DF8], v2, 0); /*0x4a36fe*/
    if ( !result ) /*0x4a3703*/
    {
      v6 = MEMORY[0x8A0E04]; /*0x4a3709*/
      MEMORY[0x89F970] = v2; /*0x4a370f*/
LABEL_13:
      if ( MEMORY[0x8A0E0C] ) /*0x4a371c*/
        v10 = *((_DWORD *)MEMORY[0x8A0E0C] + 29); /*0x4a371e*/
      else
        v10 = v6[29]; /*0x4a3723*/
      result = (*(int (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v10 + 12))(v10, MEMORY[0x8A0DF8], &a2); /*0x4a3735*/
      if ( !result ) /*0x4a373a*/
      {
        result = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))(MEMORY[0x8A0DF8], 1, a2); /*0x4a374f*/
        if ( !result ) /*0x4a3754*/
        {
          result = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))(MEMORY[0x8A0DF8], 7, 1); /*0x4a3766*/
          if ( !result ) /*0x4a376b*/
          {
            result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))( /*0x4a377d*/
                       MEMORY[0x8A0DF8],
                       14,
                       0);
            if ( !result ) /*0x4a3782*/
            {
              v11 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))(MEMORY[0x8A0DF8], 17, 2); /*0x4a3797*/
              v12 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))(MEMORY[0x8A0DF8], 19, 2) /*0x4a37a8*/
                  | v11;
              v13 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))(MEMORY[0x8A0DF8], 20, 2) /*0x4a37b9*/
                  | v12;
              v14 = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))( /*0x4a37ca*/
                      MEMORY[0x8A0DF8],
                      29,
                      0)
                  | v13;
              v15 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))(MEMORY[0x8A0DF8], 27, 1) /*0x4a37db*/
                  | v14;
              v16 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)MEMORY[0x8A0DF8] + 92))(MEMORY[0x8A0DF8], 22, 1) /*0x4a37ec*/
                  | v15;
              if ( v16 ) /*0x4a37ee*/
              {
                return v16; /*0x4a37f0*/
              }
              else
              {
                for ( i = 0; i < v18; v3 += 24 ) /*0x4a3801*/
                {
                  v16 = (*(int (__stdcall **)(_DWORD, int, int, _DWORD *, int, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF8] + 116))( /*0x4a3817*/
                          MEMORY[0x8A0DF8],
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


// ==== 0x004A3840  StructTable::Append  this=AbstractClass  sig=csp ====
int __thiscall StructTable::Append(_DWORD *this, CCINIClass *aP1)
{
  int v3; // ecx

  v3 = this->q1800; /*0x4a3842*/
  if ( v3 == 1024 ) /*0x4a384e*/
    return 1; /*0x4a3850*/
  qmemcpy(this + 24 * v3, aP1, 0x60u); /*0x4a386b*/
  ++this->q1800; /*0x4a3876*/
  return 0; /*0x4a3855*/
}


// ==== 0x004A3890  CCFileClass::ReadEntireFile  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::ReadEntireFile(void *this)
{
  int v2; // edi
  int v3; // ebx

  v2 = 0; /*0x4a3895*/
  if ( (*(unsigned __int8 (__thiscall **)(void *, _DWORD))(this->FileTimeDateLo)(this, 0) ) /*0x4a389a*/
  {
    v3 = (*(int (__thiscall **)(void *))(this->BufferPosition)(this); /*0x4a38a8*/
    v2 = __2_YAPAXI_Z(v3); /*0x4a38b0*/
    if ( v2 ) /*0x4a38b7*/
      (*(void (__thiscall **)(void *, int, int))(this->BufferOffset)(this, v2, v3); /*0x4a38bf*/
  }
  return v2; /*0x4a38c4*/
}


// ==== 0x004A38D0  LoadFileSHP  this=-  sig=csp ====
void *__fastcall LoadFileSHP(char *Source, bool *a2)
{
  void *result; // eax
  int v5; // esi
  int v6; // edi
  bool v7; // zf
  _DWORD v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v9[5]; // [esp+64h] [ebp-14h] BYREF

  *a2 = 0; /*0x4a38db*/
  result = (void *)SearchMIXFile(Source, 0); /*0x4a38de*/
  if ( !result ) /*0x4a38e5*/
  {
    CCFileClass::Construct(v8, Source); /*0x4a38ed*/
    v5 = 0; /*0x4a38f2*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v8[0] + 20))(v8, 0) ) /*0x4a38fd*/
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(v8[0] + 44))(v8); /*0x4a390f*/
      v5 = __2_YAPAXI_Z(v6); /*0x4a3917*/
      v7 = v5 == 0; /*0x4a391c*/
      if ( !v5 ) /*0x4a391e*/
      {
LABEL_6:
        *a2 = !v7; /*0x4a392f*/
        v8[0] = &CCFileClass::`vftable'; /*0x4a3938*/
        v9[3] = 0; /*0x4a3940*/
        Vector::Clear((int)v9); /*0x4a3948*/
        v8[0] = &off_7E1668; /*0x4a3951*/
        BufferIOFileClass::Dtor(v8); /*0x4a3959*/
        return (void *)v5; /*0x4a395e*/
      }
      (*(void (__thiscall **)(_DWORD *, int, int))(v8[0] + 36))(v8, v5, v6); /*0x4a392a*/
    }
    v7 = v5 == 0; /*0x4a392d*/
    goto LABEL_6; /*0x4a392d*/
  }
  return result; /*0x4a3961*/
}


// ==== 0x004A3970  LoadFileClassToBuffer  this=MSAnim  sig=csp ====
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
        v8[0] = &vt_CCFileClass; /*0x4a39df*/
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
HRSRC __fastcall FindResource(unsigned __int16 a1, const CHAR *a2)
{
  HRSRC result; // eax

  result = FindResourceA(*(HMODULE *)&MEMORY[0x89F690].__pad_2B8[44], (LPCSTR)a1, a2); /*0x4a3b4e*/
  if ( result ) /*0x4a3b56*/
  {
    result = (HRSRC)LoadResource(*(HMODULE *)&MEMORY[0x89F690].__pad_2B8[44], result); /*0x4a3b61*/
    if ( result ) /*0x4a3b69*/
      return (HRSRC)LockResource(result); /*0x4a3b6d*/
  }
  return result; /*0x4a3b58*/
}


// ==== 0x004A3BF0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_3  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_3(std::codecvt_base *this)
{
  return 1; /*0x4a3bf2*/
}


// ==== 0x004A3C00  CreditsScreen::Init  this=CreditsScreen  sig=csp ====
void __thiscall sub_4A3C00(_BYTE *this)
{
  *this = 0; /*0x4a3c00*/
}


// ==== 0x004A3C10  sub_4A3C10  this=-  sig=ida-proto ====
int sub_4A3C10()
{
  MEMORY[0x89F980] = 0; /*0x4a3c12*/
  MEMORY[0x89F984] = 0; /*0x4a3c17*/
  MEMORY[0x89F988] = 0; /*0x4a3c1c*/
  MEMORY[0x89F98C] = 0; /*0x4a3c21*/
  return 0; /*0x4a3c26*/
}


// ==== 0x004A3C30  FadePalette  this=-  sig=csp ====
int __fastcall FadePalette(const void *a1, signed int a2, void (*a3)(void))
{
  int v5; // eax
  int result; // eax
  _BYTE *v7; // eax
  int v8; // ecx
  int v9; // edx
  signed int v10; // esi
  int v11; // eax
  int v12; // eax
  signed int v13; // esi
  int v14; // eax
  int v15; // eax
  signed int v16; // esi
  int v17; // eax
  signed int v18; // edi
  signed int v19; // esi
  int v20; // eax
  int v21; // eax
  int Ticks; // [esp+8h] [ebp-910h]
  char v23[4]; // [esp+Ch] [ebp-90Ch] BYREF
  signed int v24; // [esp+10h] [ebp-908h]
  signed int v25; // [esp+14h] [ebp-904h]
  _BYTE v26[768]; // [esp+18h] [ebp-900h] BYREF
  unsigned __int8 Src[768]; // [esp+318h] [ebp-600h] BYREF
  _BYTE v28[768]; // [esp+618h] [ebp-300h] BYREF

  v5 = *(_DWORD *)MEMORY[0x87F7E8][7880]; /*0x4a3c42*/
  v25 = a2; /*0x4a3c44*/
  result = (*(int (__thiscall **)(_DWORD))(v5 + 112))(MEMORY[0x87F7E8][7880]); /*0x4a3c48*/
  if ( result == 1 ) /*0x4a3c4e*/
  {
    Ticks = Timer::GetTicks(v23); /*0x4a3c5f*/
    v24 = a2; /*0x4a3c63*/
    v7 = &v26[2]; /*0x4a3c67*/
    v8 = 256; /*0x4a3c6b*/
    do /*0x4a3c7e*/
    {
      *(v7 - 2) = 0; /*0x4a3c72*/
      *(v7 - 1) = 0; /*0x4a3c75*/
      *v7 = 0; /*0x4a3c78*/
      v7 += 3; /*0x4a3c7a*/
      --v8; /*0x4a3c7d*/
    }
    while ( v8 ); /*0x4a3c7e*/
    v9 = Ticks; /*0x4a3c80*/
    qmemcpy(v26, &MEMORY[0x87F7E8][32874], sizeof(v26)); /*0x4a3c92*/
    qmemcpy(v28, a1, sizeof(v28)); /*0x4a3ca9*/
    while ( 1 ) /*0x4a3cab*/
    {
      v10 = v24; /*0x4a3cab*/
      if ( v9 != -1 ) /*0x4a3cb2*/
      {
        v11 = Timer::GetTicks(v23); /*0x4a3cb8*/
        v9 = Ticks; /*0x4a3cbd*/
        v12 = v11 - Ticks; /*0x4a3cc1*/
        if ( v12 >= v10 ) /*0x4a3cc5*/
          return Surface::CreateSurfacePalette(v28); /*0x4a3cc5*/
        v10 -= v12; /*0x4a3ccb*/
      }
      if ( !v10 ) /*0x4a3ccf*/
        return Surface::CreateSurfacePalette(v28); /*0x4a3daf*/
      qmemcpy(Src, v26, sizeof(Src)); /*0x4a3ce8*/
      v13 = v24; /*0x4a3cea*/
      if ( v9 != -1 ) /*0x4a3cee*/
      {
        v14 = Timer::GetTicks(v23) - Ticks; /*0x4a3cf9*/
        if ( v14 >= v13 ) /*0x4a3cff*/
          v13 = 0; /*0x4a3d05*/
        else
          v13 -= v14; /*0x4a3d01*/
      }
      v15 = ((v25 - v13) << 8) / v25; /*0x4a3d13*/
      if ( v15 >= 255 ) /*0x4a3d1a*/
        LOBYTE(v15) = -1; /*0x4a3d1c*/
      Render_Helper(Src, v15, (int)v28); /*0x4a3d31*/
      v16 = v24; /*0x4a3d36*/
      if ( Ticks == -1 ) /*0x4a3d3f*/
        goto LABEL_18; /*0x4a3d3f*/
      v17 = Timer::GetTicks(v23) - Ticks; /*0x4a3d4a*/
      if ( v17 < v16 ) /*0x4a3d50*/
        break; /*0x4a3d50*/
      v18 = 0; /*0x4a3d8c*/
LABEL_19:
      Surface::CreateSurfacePalette(Src); /*0x4a3d56*/
      if ( a3 ) /*0x4a3d64*/
LABEL_20:
        a3(); /*0x4a3d66*/
      v9 = Ticks; /*0x4a3d68*/
      while ( 1 ) /*0x4a3d6c*/
      {
        v19 = v24; /*0x4a3d6c*/
        if ( v9 != -1 ) /*0x4a3d73*/
        {
          v20 = Timer::GetTicks(v23); /*0x4a3d79*/
          v9 = Ticks; /*0x4a3d7e*/
          v21 = v20 - Ticks; /*0x4a3d82*/
          if ( v21 >= v19 ) /*0x4a3d86*/
            v19 = 0; /*0x4a3d90*/
          else
            v19 -= v21; /*0x4a3d88*/
        }
        if ( v19 != v18 || !v18 ) /*0x4a3d9c*/
          break; /*0x4a3d9c*/
        if ( a3 ) /*0x4a3da4*/
          goto LABEL_20; /*0x4a3da4*/
      }
    }
    v16 -= v17; /*0x4a3d52*/
LABEL_18:
    v18 = v16; /*0x4a3d54*/
    goto LABEL_19; /*0x4a3d54*/
  }
  return result; /*0x4a3db6*/
}


// ==== 0x004A3DD0  DDraw::LogError  this=AbstractClass  sig=ida-proto ====
int __thiscall DDraw::LogError(IUnknown *this)
{
  int v1; // edx
  int result; // eax
  CHAR Text[80]; // [esp+0h] [ebp-50h] BYREF

  if ( this ) /*0x4a3dd5*/
  {
    if ( *(_DWORD *)&stru_89E138.__pad_14B0[2760] ) /*0x4a3dfd*/
    {
      return (*(int (**)(void))&stru_89E138.__pad_14B0[2760])(); /*0x4a3dff*/
    }
    else
    {
      sprintf(Text, &g_Str_Trace_DDRAW_DLL_Error_code____08X, (INIClass *)this); /*0x4a3e10*/
      return MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a3e2a*/
    }
  }
  else if ( v1 ) /*0x4a3dd9*/
  {
    return MessageBoxA( /*0x4a3dec*/
             g_hWnd,
             (LPCSTR)&g_Str_Trace_DDRAW_DLL_Error_code____08X.referenceCount,
             (LPCSTR)&g_Str_Trace_DDRAW_DLL_Error_code____08X.ambientSoundController[4],
             0);
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
  Debug::Log(MEMORY[0x81FD18]); /*0x4a3e5b*/
  g_DDraw_UseHWBlit = 1; /*0x4a3e67*/
  XSurface::Fill(v7, 0); /*0x4a3e6f*/
  v2 = 5; /*0x4a3e82*/
  v3 = 5; /*0x4a3e86*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3e8a*/
  {
    g_DDraw_UseHWBlit = 0; /*0x4a3e93*/
  }
  else
  {
    XSurface::Fill(v7, 1); /*0x4a3ea1*/
    v2 = 5; /*0x4a3eaf*/
    v3 = 5; /*0x4a3eb3*/
    if ( XSurface::GetPixel(v7, &v2) == 1 ) /*0x4a3ebf*/
    {
      v0 = MEMORY[0x81FD14]; /*0x4a3ed0*/
      if ( g_DDraw_UseHWBlit ) /*0x4a3ed5*/
        goto LABEL_7; /*0x4a3ed5*/
    }
    else
    {
      g_DDraw_UseHWBlit = 0; /*0x4a3ec1*/
    }
  }
  v0 = MEMORY[0x81FD0C]; /*0x4a3ed7*/
LABEL_7:
  Debug::Log_0(MEMORY[0x81FD08], v0); /*0x4a3edc*/
  Debug::Log(MEMORY[0x81FCE0]); /*0x4a3eec*/
  g_DDraw_AllowOverlayBlit = 1; /*0x4a3ef8*/
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
    Debug::Log_0(MEMORY[0x81FCD4]); /*0x4a3f8a*/
    g_DDraw_AllowOverlayBlit = 0; /*0x4a3f96*/
  }
  else
  {
    Debug::Log_0(MEMORY[0x81FCD0]); /*0x4a3fac*/
  }
  return DSurface::Destroy(v7); /*0x4a3fa1*/
}


// ==== 0x004A3FD0  ObjectClass::method_4A3FD0  this=ObjectClass  sig=csp ====
void sub_4A3FD0()
{
  HRESULT v0; // eax
  struct IDirectDrawVtbl *lpVtbl; // ecx
  int v2; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-50h] BYREF

  Debug::Log(); /*0x4a3fd8*/
  if ( !MEMORY[0x8A0094] ) /*0x4a3fe7*/
  {
    v0 = DirectDrawCreate(0, &MEMORY[0x8A0094], 0); /*0x4a3ff2*/
    if ( v0 ) /*0x4a3ff9*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4003*/
      {
        MEMORY[0x8A00B0](v0); /*0x4a4007*/
        Debug::Log(); /*0x4a400e*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v0); /*0x4a4025*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4040*/
        Debug::Log(); /*0x4a404b*/
      }
    }
    else
    {
      lpVtbl = MEMORY[0x8A0094]->lpVtbl; /*0x4a4063*/
      if ( MEMORY[0x89F978] ) /*0x4a4065*/
        v2 = lpVtbl->SetCooperativeLevel(MEMORY[0x8A0094], g_hWnd, 8); /*0x4a4069*/
      else
        v2 = lpVtbl->SetCooperativeLevel(MEMORY[0x8A0094], g_hWnd, 17); /*0x4a4075*/
      if ( v2 ) /*0x4a407a*/
      {
        if ( MEMORY[0x8A00B0] ) /*0x4a4084*/
        {
          MEMORY[0x8A00B0](v2); /*0x4a4088*/
        }
        else
        {
          sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2); /*0x4a4099*/
          MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a40b4*/
        }
      }
    }
  }
}


// ==== 0x004A40C0  ObjectClass::method_4A40C0  this=ObjectClass  sig=csp ====
LPDIRECTDRAW sub_4A40C0()
{
  LPDIRECTDRAW result; // eax
  CHAR Text[80]; // [esp+4h] [ebp-50h] BYREF

  result = MEMORY[0x8A0094]; /*0x4a40c0*/
  if ( MEMORY[0x8A0094] ) /*0x4a40ca*/
  {
    result = (LPDIRECTDRAW)MEMORY[0x8A0094]->lpVtbl->Release(MEMORY[0x8A0094]); /*0x4a40cf*/
    if ( result ) /*0x4a40d4*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a40de*/
      {
        result = (LPDIRECTDRAW)MEMORY[0x8A00B0](result); /*0x4a40e2*/
        MEMORY[0x8A0094] = 0; /*0x4a40e4*/
        return result; /*0x4a40f1*/
      }
      sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, result); /*0x4a40fd*/
      result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4118*/
    }
    MEMORY[0x8A0094] = 0; /*0x4a411e*/
  }
  return result; /*0x4a40ee*/
}


// ==== 0x004A4130  ObjectClass::method_4A4130  this=ObjectClass  sig=csp ====
unsigned int sub_4A4130()
{
  LPDIRECTDRAW v0; // eax
  char v1; // bl
  HRESULT v2; // eax
  unsigned int v3; // esi
  int v4; // esi
  int v5; // eax
  _DWORD v7[27]; // [esp+Ch] [ebp-1F8h] BYREF
  CHAR Text[80]; // [esp+78h] [ebp-18Ch] BYREF
  _DWORD v9[79]; // [esp+C8h] [ebp-13Ch] BYREF

  v0 = MEMORY[0x8A0094]; /*0x4a4130*/
  v1 = 0; /*0x4a413c*/
  if ( !MEMORY[0x8A0094] ) /*0x4a4148*/
  {
    v2 = DirectDrawCreate(0, &MEMORY[0x8A0094], 0); /*0x4a4153*/
    if ( v2 ) /*0x4a415a*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4168*/
      {
        MEMORY[0x8A00B0](v2); /*0x4a4170*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2); /*0x4a427b*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4296*/
      }
      v0 = 0; /*0x4a4172*/
      MEMORY[0x8A0094] = 0; /*0x4a4174*/
    }
    else
    {
      v0 = MEMORY[0x8A0094]; /*0x4a429d*/
      v1 = 1; /*0x4a42a2*/
    }
  }
  v3 = 0; /*0x4a4179*/
  if ( v0 ) /*0x4a417d*/
  {
    v9[0] = 316; /*0x4a418a*/
    if ( !v0->lpVtbl->GetCaps(v0, (LPDDCAPS)v9, 0) ) /*0x4a419a*/
    {
      v4 = v9[15]; /*0x4a41af*/
      Debug::Log(); /*0x4a41bb*/
      memset(v7, 0, sizeof(v7)); /*0x4a41ce*/
      v7[0] = 108; /*0x4a41d9*/
      if ( !MEMORY[0x8A0094]->lpVtbl->GetDisplayMode(MEMORY[0x8A0094], (LPDDSURFACEDESC)v7) ) /*0x4a41e5*/
      {
        Debug::Log(); /*0x4a4206*/
        v4 += v7[2] * v7[3] * (v7[21] >> 3); /*0x4a421f*/
      }
      v3 = (v4 + 0x20000) & 0xFFF00000; /*0x4a4227*/
      Debug::Log(); /*0x4a4239*/
    }
    v0 = MEMORY[0x8A0094]; /*0x4a4241*/
  }
  if ( v1 && v0 ) /*0x4a4250*/
  {
    v5 = v0->lpVtbl->Release(v0); /*0x4a4259*/
    if ( v5 ) /*0x4a425e*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4268*/
      {
        MEMORY[0x8A00B0](v5); /*0x4a426c*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v5); /*0x4a42b4*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a42cf*/
      }
    }
    MEMORY[0x8A0094] = 0; /*0x4a42d1*/
  }
  return v3; /*0x4a42dd*/
}


// ==== 0x004A42F0  InitializeDDraw  this=ObjectClass  sig=csp ====
char __fastcall InitializeDDraw(int a1, ObjectClass *aP1, DWORD a3, DWORD a4)
{
  INIClass *v5; // eax
  int v7; // ecx
  INIClass *v8; // eax
  INIClass *v9; // eax
  CHAR Text[80]; // [esp+24h] [ebp-50h] BYREF

  Debug::Log(); /*0x4a42fe*/
  if ( !*(_DWORD *)&stru_89E138.__pad_14B0[2732] ) /*0x4a4313*/
  {
    v5 = (INIClass *)DirectDrawCreate(0, (LPDIRECTDRAW *)&stru_89E138.__pad_14B0[2732], 0); /*0x4a431e*/
    if ( v5 ) /*0x4a4325*/
    {
      if ( *(_DWORD *)&stru_89E138.__pad_14B0[2760] ) /*0x4a4333*/
      {
        (*(void (__thiscall **)(INIClass *))&stru_89E138.__pad_14B0[2760])(v5); /*0x4a4337*/
      }
      else
      {
        sprintf(Text, &g_Str_Trace_DDRAW_DLL_Error_code____08X, v5); /*0x4a4398*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a43b3*/
      }
      Debug::Log(); /*0x4a433e*/
    }
    else
    {
      v7 = **(_DWORD **)&stru_89E138.__pad_14B0[2732]; /*0x4a43c3*/
      if ( stru_89E138.__pad_14B0[912] ) /*0x4a43c5*/
        v8 = (INIClass *)(*(int (__stdcall **)(_DWORD, HWND, int))(v7 + 80))( /*0x4a43c9*/
                           *(_DWORD *)&stru_89E138.__pad_14B0[2732],
                           g_hWnd,
                           8);
      else
        v8 = (INIClass *)(*(int (__stdcall **)(_DWORD, HWND, int))(v7 + 80))( /*0x4a43d5*/
                           *(_DWORD *)&stru_89E138.__pad_14B0[2732],
                           g_hWnd,
                           17);
      if ( v8 ) /*0x4a43da*/
      {
        if ( *(_DWORD *)&stru_89E138.__pad_14B0[2760] ) /*0x4a43e8*/
        {
          (*(void (__thiscall **)(INIClass *))&stru_89E138.__pad_14B0[2760])(v8); /*0x4a43ec*/
        }
        else
        {
          sprintf(Text, &g_Str_Trace_DDRAW_DLL_Error_code____08X, v8); /*0x4a43fe*/
          MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4419*/
        }
      }
    }
  }
  Debug::Log(); /*0x4a4356*/
  if ( (*(int (__stdcall **)(_DWORD, ObjectClass *, DWORD, DWORD))(**(_DWORD **)&stru_89E138.__pad_14B0[2732] + 84))( /*0x4a4369*/
         *(_DWORD *)&stru_89E138.__pad_14B0[2732],
         aP1,
         a3,
         a4) )
  {
    goto LABEL_7; /*0x4a436e*/
  }
  *(_DWORD *)&stru_89E138.__pad_14B0[2748] = aP1; /*0x4a4423*/
  *(_DWORD *)&stru_89E138.__pad_14B0[2752] = a3; /*0x4a4429*/
  *(_DWORD *)&stru_89E138.__pad_14B0[2756] = a4; /*0x4a442f*/
  if ( a4 == 8 ) /*0x4a4435*/
  {
    Debug::Log(); /*0x4a4440*/
    v9 = (INIClass *)(*(int (__stdcall **)(_DWORD, int, char *, char *, _DWORD))(**(_DWORD **)&stru_89E138.__pad_14B0[2732] /*0x4a445e*/
                                                                               + 20))(
                       *(_DWORD *)&stru_89E138.__pad_14B0[2732],
                       68,
                       &stru_89E138.__pad_14B0[1708],
                       &stru_89E138.__pad_14B0[1704],
                       0);
    if ( v9 ) /*0x4a4463*/
    {
      if ( *(_DWORD *)&stru_89E138.__pad_14B0[2760] ) /*0x4a446d*/
      {
        (*(void (__thiscall **)(INIClass *))&stru_89E138.__pad_14B0[2760])(v9); /*0x4a4471*/
      }
      else
      {
        sprintf(Text, &g_Str_Trace_DDRAW_DLL_Error_code____08X, v9); /*0x4a4497*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a44b2*/
      }
LABEL_7:
      Debug::Log(); /*0x4a4374*/
      return 0; /*0x4a438a*/
    }
  }
  DDraw::CapabilityCheck(); /*0x4a44cd*/
  Debug::Log(); /*0x4a44d7*/
  return 1; /*0x4a4383*/
}


// ==== 0x004A44F0  ObjectClass::method_4A44F0  this=ObjectClass  sig=csp ====
LPDIRECTDRAW __usercall sub_4A44F0@<eax>(int a1@<esi>)
{
  LPDIRECTDRAW result; // eax
  int v2; // eax
  CHAR Buffer[4]; // [esp+8h] [ebp-50h] BYREF
  CHAR Text[76]; // [esp+Ch] [ebp-4Ch] BYREF

  result = MEMORY[0x8A0094]; /*0x4a44f0*/
  if ( MEMORY[0x8A0094] ) /*0x4a44fd*/
  {
    v2 = ((int (__stdcall *)(LPDIRECTDRAW, int))MEMORY[0x8A0094]->lpVtbl->RestoreDisplayMode)(MEMORY[0x8A0094], a1); /*0x4a4507*/
    if ( v2 ) /*0x4a4512*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a451c*/
      {
        MEMORY[0x8A00B0](v2); /*0x4a4520*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2); /*0x4a452f*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a454a*/
      }
    }
    MEMORY[0x8A00A4] = 0; /*0x4a4551*/
    MEMORY[0x8A00A8] = 0; /*0x4a4557*/
    MEMORY[0x8A00AC] = 0; /*0x4a455d*/
    result = (LPDIRECTDRAW)((int (__cdecl *)(LPDIRECTDRAW))MEMORY[0x8A0094]->lpVtbl->Release)(MEMORY[0x8A0094]); /*0x4a4566*/
    if ( result ) /*0x4a456b*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4575*/
      {
        result = (LPDIRECTDRAW)MEMORY[0x8A00B0](result); /*0x4a4579*/
        MEMORY[0x8A0094] = 0; /*0x4a457b*/
        return result; /*0x4a4586*/
      }
      sprintf(Buffer, g_Str_Trace_DDRAW_DLL_Error_code____08X, result); /*0x4a4592*/
      result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a45ad*/
    }
    MEMORY[0x8A0094] = 0; /*0x4a45af*/
  }
  return result; /*0x4a4582*/
}


// ==== 0x004A45C0  ObjectClass::method_4A45C0  this=ObjectClass  sig=csp ====
int sub_4A45C0()
{
  int v1[16]; // [esp+0h] [ebp-23Ch] BYREF
  int v2; // [esp+40h] [ebp-1FCh]
  char Buffer[256]; // [esp+13Ch] [ebp-100h] BYREF

  if ( !MEMORY[0x8A0094] ) /*0x4a45cd*/
    return 0; /*0x4a45cd*/
  v1[0] = 316; /*0x4a45d3*/
  if ( MEMORY[0x8A0094]->lpVtbl->GetCaps(MEMORY[0x8A0094], (LPDDCAPS)v1, 0) ) /*0x4a45e1*/
    return 0; /*0x4a460d*/
  sprintf(Buffer, stru_81FE6C, v2); /*0x4a45fa*/
  return v2; /*0x4a4606*/
}


// ==== 0x004A4620  DDraw::CheckCapabilities  this=DDraw  sig=ida-proto ====
char sub_4A4620()
{
  int v0; // eax
  HRESULT v1; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-18Ch] BYREF
  _DWORD v4[79]; // [esp+5Ch] [ebp-13Ch] BYREF

  if ( MEMORY[0x8A0094] ) /*0x4a462e*/
  {
    memset(v4, 0, sizeof(v4)); /*0x4a4645*/
    v4[0] = 316; /*0x4a464b*/
    v1 = MEMORY[0x8A0094]->lpVtbl->GetCaps(MEMORY[0x8A0094], (LPDDCAPS)v4, 0); /*0x4a4659*/
    if ( v1 ) /*0x4a465f*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4669*/
      {
        MEMORY[0x8A00B0](v1); /*0x4a466d*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v1); /*0x4a4683*/
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
char sub_4A4700()
{
  HRESULT v0; // eax
  char Buffer[80]; // [esp+Ch] [ebp-50h] BYREF

  LOBYTE(v0) = byte_81FC6C; /*0x4a4700*/
  if ( byte_81FC6C ) /*0x4a470a*/
  {
    v0 = MEMORY[0x8A0094]->lpVtbl->WaitForVerticalBlank(MEMORY[0x8A0094], 1, 0); /*0x4a4718*/
    if ( v0 == -2147467263 ) /*0x4a4720*/
    {
      byte_81FC6C = 0; /*0x4a4722*/
    }
    else if ( v0 ) /*0x4a472f*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4739*/
      {
        LOBYTE(v0) = MEMORY[0x8A00B0](v0); /*0x4a473d*/
      }
      else
      {
        sprintf(Buffer, g_Str_Trace_DDRAW_DLL_Error_code____08X, v0); /*0x4a474e*/
        LOBYTE(v0) = MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a4769*/
      }
    }
  }
  return v0; /*0x4a4729*/
}


// ==== 0x004A4780  Surface::CreateSurfacePalette  this=AbstractClass  sig=csp ====
LPDIRECTDRAW __thiscall Surface::CreateSurfacePalette(AbstractClass *Src)
{
  LPDIRECTDRAW result; // eax
  int v3; // edi
  BombClass *v4; // eax
  char *v5; // ecx
  char v6; // dl
  char *v7; // eax
  char v8; // bl
  char v9; // [esp+8h] [ebp-4h]

  if ( Src != (AbstractClass *)&stru_89E138.__pad_14B0[936] ) /*0x4a478b*/
    memcpy(&stru_89E138.__pad_14B0[936], Src, 0x300u); /*0x4a4798*/
  result = *(LPDIRECTDRAW *)&stru_89E138.__pad_14B0[2732]; /*0x4a47a0*/
  if ( *(_DWORD *)&stru_89E138.__pad_14B0[2732] ) /*0x4a47a7*/
  {
    v3 = *(_DWORD *)&stru_89E138.__pad_14B0[2740]; /*0x4a47a9*/
    if ( *(_DWORD *)&stru_89E138.__pad_14B0[2740] ) /*0x4a47b1*/
    {
      v4 = (BombClass *)Src; /*0x4a47b4*/
      v5 = &stru_89E138.__pad_14B0[1709]; /*0x4a47b6*/
      do /*0x4a47e5*/
      {
        v6 = v4->__pad_0[0]; /*0x4a47bf*/
        v9 = v4->__pad_0[1]; /*0x4a47c5*/
        v7 = &v4->__pad_0[2]; /*0x4a47c9*/
        v5 += 4; /*0x4a47cc*/
        v8 = *v7; /*0x4a47cf*/
        *(v5 - 5) = v6; /*0x4a47d1*/
        v4 = (BombClass *)(v7 + 1); /*0x4a47d8*/
        *(v5 - 4) = v9; /*0x4a47d9*/
        *(v5 - 3) = v8; /*0x4a47dc*/
      }
      while ( (int)v5 < 9044117 ); /*0x4a47e5*/
      result = *(LPDIRECTDRAW *)&stru_89E138.__pad_14B0[1704]; /*0x4a47e7*/
      if ( *(_DWORD *)&stru_89E138.__pad_14B0[1704] ) /*0x4a47ef*/
      {
        if ( !stru_89E138.__pad_14B0[2736] ) /*0x4a47f9*/
        {
          (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 124))(v3, *(_DWORD *)&stru_89E138.__pad_14B0[1704]); /*0x4a47ff*/
          result = *(LPDIRECTDRAW *)&stru_89E138.__pad_14B0[1704]; /*0x4a4802*/
          stru_89E138.__pad_14B0[2736] = 1; /*0x4a4807*/
        }
        return ((LPDIRECTDRAW (__stdcall *)(LPDIRECTDRAW, _DWORD, _DWORD, int, char *))result->lpVtbl->CreateSurface)( /*0x4a481f*/
                 result,
                 0,
                 0,
                 256,
                 &stru_89E138.__pad_14B0[1708]);
      }
    }
  }
  return result; /*0x4a4822*/
}


// ==== 0x004A4830  DDraw::WaitForIdle  this=DDraw  sig=csp ====
int DDraw_WaitForIdle()
{
  int result; // eax

  do /*0x4a4846*/
    result = (*(int (__stdcall **)(int, int))(*(_DWORD *)MEMORY[0x8A009C] + 52))(MEMORY[0x8A009C], 2); /*0x4a483a*/
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

  if ( !MEMORY[0x8A0094] ) /*0x4a4915*/
    return 0; /*0x4a4ab2*/
  sub_4A4E30(&v16, 0, 0); /*0x4a4923*/
  v16 = &vt_DynamicVectorClass_DDSURFACEDESC; /*0x4a4937*/
  v20 = 10; /*0x4a493f*/
  v19 = 0; /*0x4a4947*/
  if ( MEMORY[0x8A0094]->lpVtbl->EnumDisplayModes(MEMORY[0x8A0094], 0, 0, &v16, (LPDDENUMMODESCALLBACK)sub_4A4850) /*0x4a4967*/
    || !v19 )
  {
    v16 = &vt_VectorClass_DDSURFACEDESC; /*0x4a4a93*/
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
    v16 = &vt_VectorClass_DDSURFACEDESC; /*0x4a4a28*/
    if ( Block && BYTE1(v18) ) /*0x4a4a38*/
    {
      __3_YAXPAX_Z(Block); /*0x4a4a3b*/
      return 0; /*0x4a4a4b*/
    }
    return 0; /*0x4a4a38*/
  }
  qsort(v5, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4A48C0); /*0x4a4a5b*/
  v16 = &vt_VectorClass_DDSURFACEDESC; /*0x4a4a69*/
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
void __thiscall CStreamClass::sub_4A4AD0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4a4ad6*/
  *(_DWORD *)(this + 16) = 0; /*0x4a4ad9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4a4ae0*/
  {
    __3_YAXPAX_Z(v2); /*0x4a4ae6*/
    *(_DWORD *)(this + 4) = 0; /*0x4a4aee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a4af1*/
  *(_DWORD *)(this + 8) = 0; /*0x4a4af4*/
}


// ==== 0x004A4B00  _DynamicVectorClass_PAU_DDSURFACEDESC::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall CStreamClass::sub_4A4B00(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4a4b00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4a4b15*/
  else
    return 0; /*0x4a4b07*/
}


// ==== 0x004A4B20  _VectorClass_PAU_DDSURFACEDESC::Seek  this=VectorClass  sig=csp ====
int __thiscall CStreamClass_16_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4a4b2a*/
}


// ==== 0x004A4B30  _VectorClass_PAU_DDSURFACEDESC::AddRef  this=VectorClass  sig=csp ====
char __thiscall CStreamClass_16_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4a4b32*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4a4b3d*/
  {
    v3 = 0; /*0x4a4b3f*/
    if ( v2 <= 0 ) /*0x4a4b43*/
      return 1; /*0x4a4b63*/
    v4 = (_DWORD *)this->Items; /*0x4a4b45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a4b4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a4b54*/
    {
      ++v3; /*0x4a4b56*/
      ++v4; /*0x4a4b57*/
      if ( v3 >= v2 ) /*0x4a4b5c*/
        return 1; /*0x4a4b5c*/
    }
  }
  return 0; /*0x4a4b5e*/
}


// ==== 0x004A4B70  _VectorClass_PAU_DDSURFACEDESC::Release  this=VectorClass  sig=csp ====
char __thiscall CStreamClass_16_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a4b7c*/
  {
    this->IsInitialized = 0; /*0x4a4b86*/
    if ( a3 ) /*0x4a4b8c*/
      v4 = a3; /*0x4a4ba2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a4b9e*/
    this->IsInitialized = 1; /*0x4a4ba6*/
    if ( v4 ) /*0x4a4baa*/
    {
      if ( this->Items ) /*0x4a4bb5*/
      {
        v6 = this->Capacity; /*0x4a4bbc*/
        if ( a2 < v6 ) /*0x4a4bc1*/
          v6 = a2; /*0x4a4bc3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4a4bc9*/
          ++i; /*0x4a4bce*/
        if ( this->IsAllocated ) /*0x4a4bdb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a4be6*/
          this->Items = 0; /*0x4a4bee*/
        }
      }
      this->Items = v4; /*0x4a4bf7*/
      this->Capacity = a2; /*0x4a4bff*/
      this->IsAllocated = a3 == 0; /*0x4a4c02*/
      return 1; /*0x4a4c08*/
    }
    else
    {
      return 0; /*0x4a4baf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4a4c12*/
    return 1; /*0x4a4c18*/
  }
}


// ==== 0x004A4C20  _VectorClass_PAU_DDSURFACEDESC::ddtor  this=VectorClass  sig=csp ====
void __thiscall CStreamClass_16_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4a4c2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4a4c33*/
    *(_DWORD *)(this + 4) = 0; /*0x4a4c3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a4c3e*/
  *(_DWORD *)(this + 8) = 0; /*0x4a4c41*/
}


// ==== 0x004A4C50  _VectorClass_PAU_DDSURFACEDESC::Read  this=VectorClass  sig=csp ====
int __thiscall CStreamClass_16_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4a4c50*/
    return 0; /*0x4a4c58*/
  v3 = *(_DWORD *)(this + 8); /*0x4a4c5e*/
  result = 0; /*0x4a4c61*/
  if ( v3 <= 0 ) /*0x4a4c65*/
    return -1; /*0x4a4c7c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4a4c6b*/
  {
    if ( ++result >= v3 ) /*0x4a4c7a*/
      return -1; /*0x4a4c7a*/
  }
  return result; /*0x4a4c5a*/
}


// ==== 0x004A4C90  _VectorClass_PAU_DDSURFACEDESC::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall CStreamClass_16_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4a4c90*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4a4ca5*/
  else
    return 0; /*0x4a4c97*/
}


// ==== 0x004A4CB0  _DynamicVectorClass_PAU_DDSURFACEDESC::CopyItems  this=DynamicVector  sig=csp ====
char __thiscall CStreamClass::sub_4A4CB0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a4cbc*/
  {
    this->IsInitialized = 0; /*0x4a4cc2*/
    if ( a3 ) /*0x4a4cc8*/
      v4 = a3; /*0x4a4cde*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a4cda*/
    this->IsInitialized = 1; /*0x4a4ce2*/
    if ( !v4 ) /*0x4a4ce6*/
      return 0; /*0x4a4d5a*/
    if ( this->Items ) /*0x4a4ce8*/
    {
      v5 = this->q008; /*0x4a4cef*/
      if ( a2 < v5 ) /*0x4a4cf4*/
        v5 = a2; /*0x4a4cf6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4a4cfc*/
        ++i; /*0x4a4d01*/
      if ( this->IsAllocated ) /*0x4a4d0e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a4d19*/
        this->Items = 0; /*0x4a4d21*/
      }
    }
    this->Items = v4; /*0x4a4d2a*/
    this->q008 = a2; /*0x4a4d32*/
    this->IsAllocated = a3 == 0; /*0x4a4d35*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4a4d3e*/
  }
  v7 = this->q008; /*0x4a4d41*/
  if ( v7 < this->Items ) /*0x4a4d49*/
    this->Items = v7; /*0x4a4d4b*/
  return 1; /*0x4a4d4e*/
}


// ==== 0x004A4D60  _DynamicVectorClass_PAU_DDSURFACEDESC::FindItem  this=DynamicVector  sig=csp ====
int __thiscall CStreamClass::sub_4A4D60(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4a4d60*/
  result = 0; /*0x4a4d63*/
  if ( v2 <= 0 ) /*0x4a4d68*/
    return -1; /*0x4a4d7f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4a4d6e*/
  {
    if ( ++result >= v2 ) /*0x4a4d7d*/
      return -1; /*0x4a4d7d*/
  }
  return result; /*0x4a4d82*/
}


// ==== 0x004A4D90  _VectorClass_PAU_DDSURFACEDESC::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall CStreamClass_16_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4a4d93*/
  *Block = &vt_VectorClass_DDSURFACEDESC; /*0x4a4d96*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4a4da0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a4da8*/
    *(Block + 1) = 0; /*0x4a4db0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4a4dbb*/
  *(Block + 2) = 0; /*0x4a4dc1*/
  if ( (a2 & 1) != 0 ) /*0x4a4dc8*/
    __3_YAXPAX_Z(Block); /*0x4a4dcb*/
  return (VectorClass *)Block; /*0x4a4dd5*/
}


// ==== 0x004A4DE0  _DynamicVectorClass_PAU_DDSURFACEDESC::Constructor_VectorClass__DDSURFACEDESC___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall CStreamClass::Constructor_VectorClass__DDSURFACEDESC___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4a4de3*/
  *Block = &vt_VectorClass_DDSURFACEDESC; /*0x4a4de6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4a4df0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a4df8*/
    *(Block + 1) = 0; /*0x4a4e00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4a4e0b*/
  *(Block + 2) = 0; /*0x4a4e11*/
  if ( (a2 & 1) != 0 ) /*0x4a4e18*/
    __3_YAXPAX_Z(Block); /*0x4a4e1b*/
  return (DynamicVector *)Block; /*0x4a4e25*/
}


// ==== 0x004A4E30  VectorClass::sub_4A4E30  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_4A4E30(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x4a4e3b*/
  this->Capacity = a2; /*0x4a4e3e*/
  this->q030 = 1; /*0x4a4e41*/
  this->q034 = 0; /*0x4a4e45*/
  *this = &vt_VectorClass_DDSURFACEDESC; /*0x4a4e48*/
  if ( a2 ) /*0x4a4e4e*/
  {
    if ( a3 ) /*0x4a4e56*/
    {
      this->Items = a3; /*0x4a4e58*/
      return this; /*0x4a4e5e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x4a4e6d*/
    this->q034 = 1; /*0x4a4e70*/
  }
  return this; /*0x4a4e5d*/
}


// ==== 0x004A4E80  sub_4A4E80  this=-  sig=ida-proto ====
int sub_4A4E80()
{
  MEMORY[0x8A00C0] = 0; /*0x4a4e82*/
  MEMORY[0x8A00C4] = 0; /*0x4a4e87*/
  MEMORY[0x8A00C8] = 0; /*0x4a4e8c*/
  MEMORY[0x8A00CC] = 0; /*0x4a4e91*/
  return 0; /*0x4a4e96*/
}


// ==== 0x004A4EA0  sub_4A4EA0  this=-  sig=ida-proto ====
void sub_4A4EA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a4eac*/
  MEMORY[0x8A00D8] = Math::Sqrt(v0 + v0); /*0x4a4ebe*/
}


// ==== 0x004A4ED0  sub_4A4ED0  this=-  sig=ida-proto ====
void sub_4A4ED0()
{
  MEMORY[0x8A0128] = MEMORY[0x8A00D8] / 60.0; /*0x4a4edc*/
}


// ==== 0x004A4EF0  sub_4A4EF0  this=-  sig=ida-proto ====
void sub_4A4EF0()
{
  MEMORY[0x8A0110] = 1.0 / MEMORY[0x8A0128]; /*0x4a4efc*/
}


// ==== 0x004A4F10  sub_4A4F10  this=-  sig=ida-proto ====
void sub_4A4F10()
{
  MEMORY[0x8A0108] = 0.0174532925199433 * 45.0; /*0x4a4f1c*/
}


// ==== 0x004A4F30  sub_4A4F30  this=-  sig=ida-proto ====
void sub_4A4F30()
{
  MEMORY[0x8A00E0] = 0.0174532925199433 * 60.0; /*0x4a4f3c*/
}


// ==== 0x004A4F50  sub_4A4F50  this=-  sig=ida-proto ====
void sub_4A4F50()
{
  MEMORY[0x8A00B8] = 0.0174532925199433 * 90.0; /*0x4a4f5c*/
}


// ==== 0x004A4F70  sub_4A4F70  this=-  sig=ida-proto ====
__int64 sub_4A4F70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A00B8] - MEMORY[0x8A00E0]); /*0x4a4f82*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A00D8] * 0.5); /*0x4a4f96*/
  MEMORY[0x8A0130] = result; /*0x4a4f9b*/
  return result; /*0x4a4fa0*/
}


// ==== 0x004A4FB0  sub_4A4FB0  this=-  sig=ida-proto ====
void sub_4A4FB0()
{
  MEMORY[0x8A00E8] = Math::ArcTan((double)MEMORY[0x8A0130] * 0.00390625); /*0x4a4fc7*/
}


// ==== 0x004A4FE0  sub_4A4FE0  this=-  sig=ida-proto ====
void sub_4A4FE0()
{
  MEMORY[0x8A0100] = Math::ArcTan((double)(2 * MEMORY[0x8A0130]) / MEMORY[0x8A00D8]); /*0x4a5002*/
}


// ==== 0x004A5010  sub_4A5010  this=-  sig=ida-proto ====
__int64 sub_4A5010()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0130]) + 0.5); /*0x4a502b*/
  MEMORY[0x8A0124] = result; /*0x4a5030*/
  return result; /*0x4a5036*/
}


// ==== 0x004A5040  sub_4A5040  this=-  sig=ida-proto ====
int sub_4A5040()
{
  MEMORY[0x8A00D0] = 0; /*0x4a5042*/
  MEMORY[0x8A00D2] = 0; /*0x4a5048*/
  return 0; /*0x4a504e*/
}


// ==== 0x004A5050  sub_4A5050  this=-  sig=ida-proto ====
int sub_4A5050()
{
  MEMORY[0x8A00F0] = 0; /*0x4a5052*/
  MEMORY[0x8A00F4] = 0; /*0x4a5057*/
  MEMORY[0x8A00F8] = 0; /*0x4a505c*/
  return 0; /*0x4a5061*/
}


// ==== 0x004A5070  sub_4A5070  this=-  sig=ida-proto ====
int sub_4A5070()
{
  MEMORY[0x8A0120] = 0; /*0x4a5075*/
  MEMORY[0x8A0118] = 128; /*0x4a507f*/
  MEMORY[0x8A011C] = 128; /*0x4a5084*/
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
int __thiscall sub_4A50F0(int this)
{
  *(_DWORD *)(this + 8) = MEMORY[0xA8ED84]; /*0x4a50f8*/
  *(_DWORD *)(this + 16) = 0; /*0x4a50fd*/
  *(_DWORD *)(this + 20) = 0; /*0x4a5100*/
  *(_BYTE *)(this + 24) = 0; /*0x4a5103*/
  *(_BYTE *)(this + 25) = 0; /*0x4a5106*/
  return this; /*0x4a5109*/
}


// ==== 0x004A5110  Window::IsVisible  this=OwnedTiberiumStruct  sig=csp ====
bool __thiscall Window_IsVisible(_BYTE *this)
{
  return *(this + 24) && *(this + 25); /*0x4a5120*/
}


// ==== 0x004A5130  BuildingClass::CheckFlag24  this=OwnedTiberiumStruct  sig=csp ====
bool __thiscall BuildingClass_CheckFlag24(_BYTE *this)
{
  return *(this + 24) && !*(this + 25); /*0x4a5140*/
}


// ==== 0x004A5150  MovementAI::IsProgressAtEnd  this=MovementAI  sig=csp ====
bool __thiscall sub_4A5150(int this)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax

  if ( !*(_BYTE *)(this + 24) ) /*0x4a5150*/
    return 1; /*0x4a5150*/
  v1 = *(_DWORD *)(this + 20); /*0x4a515b*/
  if ( !v1 ) /*0x4a5164*/
    return 1; /*0x4a5164*/
  v2 = *(_DWORD *)(this + 8); /*0x4a5166*/
  v3 = *(_DWORD *)(this + 16); /*0x4a5169*/
  if ( v2 != -1 ) /*0x4a516f*/
  {
    if ( (int)MEMORY[0xA8ED84] - v2 >= v3 ) /*0x4a517b*/
      v3 = 0; /*0x4a5181*/
    else
      v3 -= (int)MEMORY[0xA8ED84] - v2; /*0x4a517d*/
  }
  return (double)(v1 - v3) / (double)*(int *)(this + 20) == 1.0; /*0x4a519e*/
}


// ==== 0x004A51B0  BuildingClass::CheckPowerFlags  this=OwnedTiberiumStruct  sig=csp ====
char __thiscall BuildingClass_CheckPowerFlags(_BYTE *this)
{
  char result; // al

  if ( *(this + 24) ) /*0x4a51b0*/
    return 0; /*0x4a51b0*/
  result = 1; /*0x4a51ba*/
  if ( *(this + 25) != 1 ) /*0x4a51be*/
    return 0; /*0x4a51c0*/
  return result; /*0x4a51c2*/
}


// ==== 0x004A51D0  Flag::CheckNone  this=OwnedTiberiumStruct  sig=csp ====
bool __thiscall Flag_CheckNone(_BYTE *this)
{
  return !*(this + 24) && !*(this + 25); /*0x4a51e0*/
}


// ==== 0x004A51F0  RateScaler::Init  this=RateScaler  sig=csp ====
char __thiscall RateScaler_Init(_BYTE *this, double a2)
{
  int v3; // eax
  wchar_t *v4; // ecx
  int v6; // [esp+8h] [ebp-Ch]

  LOBYTE(v3) = this->q018; /*0x4a51f6*/
  if ( (_BYTE)v3 || this->q019 != 1 ) /*0x4a5201*/
  {
    this->q018 = 1; /*0x4a520d*/
    *(double *)this = a2 * 900.0; /*0x4a5211*/
    v3 = Math::RoundToInt(a2 * 900.0); /*0x4a5213*/
    v4 = MEMORY[0xA8ED84]; /*0x4a5218*/
    this->q019 = 1; /*0x4a5221*/
    *((_DWORD *)this + 2) = v4; /*0x4a5225*/
    *((_DWORD *)this + 3) = v6; /*0x4a522b*/
    *((_DWORD *)this + 4) = v3; /*0x4a522e*/
    *((_DWORD *)this + 5) = v3; /*0x4a5231*/
  }
  return v3; /*0x4a5234*/
}


// ==== 0x004A5240  Timer::StartDouble  this=OwnedTiberiumStruct  sig=csp ====
char __thiscall Timer_StartDouble(_BYTE *this, double a2)
{
  int v3; // eax
  wchar_t *v4; // ecx
  int v6; // [esp+8h] [ebp-Ch]

  if ( *(this + 24) || (LOBYTE(v3) = *(this + 25), (_BYTE)v3) ) /*0x4a5252*/
  {
    *(this + 24) = 1; /*0x4a525e*/
    *(double *)this = a2 * 900.0; /*0x4a5262*/
    v3 = Math::RoundToInt(a2 * 900.0); /*0x4a5264*/
    v4 = MEMORY[0xA8ED84]; /*0x4a5269*/
    *(this + 25) = 0; /*0x4a5272*/
    *((_DWORD *)this + 2) = v4; /*0x4a5276*/
    *((_DWORD *)this + 3) = v6; /*0x4a527c*/
    *((_DWORD *)this + 4) = v3; /*0x4a527f*/
    *((_DWORD *)this + 5) = v3; /*0x4a5282*/
  }
  return v3; /*0x4a5285*/
}


// ==== 0x004A5290  BuildingClass::UpdateTimerWithElapsed  this=BuildingClass  sig=csp ====
char __thiscall sub_4A5290(int this)
{
  char result; // al
  int v2; // eax
  int v3; // esi

  result = *(_BYTE *)(this + 24); /*0x4a5290*/
  if ( result ) /*0x4a5295*/
  {
    v2 = *(_DWORD *)(this + 16); /*0x4a5297*/
    v3 = *(_DWORD *)(this + 8); /*0x4a529b*/
    if ( v3 != -1 ) /*0x4a52a1*/
    {
      if ( (int)MEMORY[0xA8ED84] - v3 >= v2 ) /*0x4a52ad*/
        v2 = 0; /*0x4a52b3*/
      else
        v2 -= (int)MEMORY[0xA8ED84] - v3; /*0x4a52af*/
    }
    *(_DWORD *)(this + 16) = *(_DWORD *)(this + 20) - v2; /*0x4a52bb*/
    result = *(_BYTE *)(this + 25) == 0; /*0x4a52c3*/
    *(_BYTE *)(this + 25) = result; /*0x4a52c6*/
  }
  return result; /*0x4a52c9*/
}


// ==== 0x004A52D0  ObjectClass::method_4A52D0  this=ObjectClass  sig=csp ====
void __thiscall sub_4A52D0(_BYTE *this)
{
  this->nextArrayIndex = 0; /*0x4a52d0*/
  this->customSound = 1; /*0x4a52d4*/
}


// ==== 0x004A52E0  ObjectClass::method_4A52E0  this=ObjectClass  sig=csp ====
char __thiscall sub_4A52E0(_BYTE *this)
{
  this->nextArrayIndex = 0; /*0x4a52e2*/
  this->customSound = 0; /*0x4a52e5*/
  return 0; /*0x4a52e8*/
}


// ==== 0x004A52F0  Animation::GetProgress  this=Animation  sig=csp ====
double __thiscall Animation::GetProgress(int this)
{
  int v1; // esi
  int v3; // edx
  int v4; // eax

  if ( !*(_BYTE *)(this + 24) ) /*0x4a52f0*/
    return 1.0; /*0x4a5352*/
  v1 = *(_DWORD *)(this + 20); /*0x4a52fb*/
  if ( !v1 ) /*0x4a5304*/
    return 1.0; /*0x4a5310*/
  v3 = *(_DWORD *)(this + 8); /*0x4a5311*/
  v4 = *(_DWORD *)(this + 16); /*0x4a5314*/
  if ( v3 != -1 ) /*0x4a531a*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x4a5326*/
      return (double)(v1 - (v4 - ((int)MEMORY[0xA8ED84] - v3))) / (double)v1; /*0x4a533c*/
    v4 = 0; /*0x4a533d*/
  }
  return (double)(v1 - v4) / (double)v1; /*0x4a530d*/
}


// ==== 0x004A5360  MovementAI::Check  this=OwnedTiberiumStruct  sig=csp ====
char __thiscall sub_4A5360(_BYTE *this)
{
  char result; // al

  result = 0; /*0x4a5363*/
  if ( *(this + 24) ) /*0x4a5360*/
  {
    if ( *(this + 25) ) /*0x4a5369*/
    {
      *(this + 24) = 0; /*0x4a536e*/
      *(this + 25) = 1; /*0x4a5371*/
    }
    if ( *(this + 24) ) /*0x4a5375*/
    {
      if ( !*(this + 25) ) /*0x4a537a*/
      {
        *(this + 24) = 0; /*0x4a537f*/
        *(this + 25) = 0; /*0x4a5382*/
      }
    }
  }
  return result; /*0x4a5385*/
}


// ==== 0x004A5390  sub_4A5390  this=-  sig=ida-proto ====
int sub_4A5390()
{
  MEMORY[0x8A0138] = 0; /*0x4a5392*/
  MEMORY[0x8A013C] = 0; /*0x4a5397*/
  MEMORY[0x8A0140] = 0; /*0x4a539c*/
  MEMORY[0x8A0144] = 0; /*0x4a53a1*/
  return 0; /*0x4a53a6*/
}


// ==== 0x004A53B0  Dial8Class::Constructor  this=Dial8Class  sig=csp ====
Dial8Class *__thiscall Dial8Class::Constructor(
        _DWORD *this,
        ControlClass *aP1,
        ControlClass *aP2,
        ControlClass *aP3,
        ControlClass *aP4,
        ControlClass *aP5,
        int a7)
{
  ControlClass *v7; // ebx
  __int16 v10; // cx
  unsigned int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  ControlClass *aP1a; // [esp+14h] [ebp+4h]
  int aP2a; // [esp+18h] [ebp+8h]
  int aP4a; // [esp+20h] [ebp+10h]
  int aP5a; // [esp+24h] [ebp+14h]
  int aP5b; // [esp+24h] [ebp+14h]

  v7 = aP5; /*0x4a53b5*/
  ControlClass::Construct(this, aP1, aP2, aP3, aP4, aP5, 7, (ControlClass *)1); /*0x4a53d5*/
  *this = &Dial8Class::`vftable'; /*0x4a53da*/
  LOBYTE(v10) = 0; /*0x4a53ed*/
  this->q02C = this->q00C + this->q005 / 2; /*0x4a53ef*/
  this->q00C = this->q004 + this->q006 / 2; /*0x4a53ff*/
  HIBYTE(v10) = a7; /*0x4a5406*/
  this->q02D = a7; /*0x4a5408*/
  LOWORD(aP5) = v10; /*0x4a540e*/
  v11 = ((((unsigned int)aP5 >> 12) + 1) >> 1) & 7; /*0x4a541d*/
  this->q0B8 = v11; /*0x4a5420*/
  this->q0BC = v11; /*0x4a5426*/
  this->q034 = this->q02C; /*0x4a5436*/
  v12 = this->q00C; /*0x4a5439*/
  this->q00E = v12 - 8 * (int)v7 / 2 / 10; /*0x4a546b*/
  v13 = this->q02C; /*0x4a5479*/
  aP5a = 56 * (int)aP4 / 2 / 100; /*0x4a5486*/
  this->q00F = aP5a + v13; /*0x4a548d*/
  this->q048 = v12; /*0x4a5497*/
  this->Enabled = v13; /*0x4a549c*/
  this->q01A = v12; /*0x4a54a5*/
  this->q01D = v13; /*0x4a54b8*/
  aP1a = (ControlClass *)(v12 - 56 * (int)v7 / 2 / 100); /*0x4a54c8*/
  this->Height = aP1a; /*0x4a54cc*/
  aP2a = 8 * (int)aP4 / 2 / 10; /*0x4a54ee*/
  this->q044 = v13 + aP2a; /*0x4a54f4*/
  this->q130 = aP5a + v13; /*0x4a5502*/
  this->Visible = v12 + 56 * (int)v7 / 2 / 100; /*0x4a550f*/
  this->q058 = v12 + 8 * (int)v7 / 2 / 10; /*0x4a5519*/
  this->q05C = v13 - aP5a; /*0x4a5528*/
  this->ID = v12 + 56 * (int)v7 / 2 / 100; /*0x4a552b*/
  this->q019 = v13 - aP2a; /*0x4a553a*/
  this->q070 = aP1a; /*0x4a5541*/
  this->q01B = v13 - aP5a; /*0x4a5549*/
  this->q01E = v12 - 6 * (int)v7 / 2 / 10; /*0x4a556c*/
  this->q025 = v13; /*0x4a5580*/
  this->q022 = v12; /*0x4a5596*/
  this->q02A = v12; /*0x4a55a1*/
  aP5b = 42 * (int)aP4 / 2 / 100; /*0x4a55a7*/
  this->q01F = aP5b + v13; /*0x4a55ae*/
  aP4a = 42 * (int)v7 / 2 / 100; /*0x4a55df*/
  this->u32_20 = v12 - aP4a; /*0x4a55e8*/
  this->q02C = v12 - aP4a; /*0x4a55fe*/
  v14 = 6 * (int)aP4 / 2 / 10; /*0x4a5607*/
  this->q021 = v14 + v13; /*0x4a560c*/
  this->q023 = v13 + aP5b; /*0x4a5618*/
  this->q024 = aP4a + v12; /*0x4a562b*/
  this->q026 = v12 + 6 * (int)v7 / 2 / 10; /*0x4a5631*/
  this->q028 = aP4a + v12; /*0x4a563f*/
  this->q029 = v13 - v14; /*0x4a5645*/
  this->q027 = v13 - aP5b; /*0x4a564b*/
  this->q02B = v13 - aP5b; /*0x4a5651*/
  return (Dial8Class *)this; /*0x4a5659*/
}


// ==== 0x004A5660  Dial8Class::SetValue  this=Dial8Class  sig=csp ====
int __thiscall Dial8Class::SetValue(int *this, unsigned int a2, ControlClass *aP2, int a4)
{
  int v4; // ebx
  int *v7; // eax
  double v8; // st7
  __int16 v9; // dx
  int v10; // ecx
  unsigned int v11; // eax
  _BYTE v12[8]; // [esp+30h] [ebp-8h] BYREF

  v4 = a2; /*0x4a5664*/
  (*(void (__thiscall **)(int *, unsigned int))(*this + 120))(this, a2); /*0x4a566e*/
  if ( (a2 & 1) != 0 ) /*0x4a5676*/
  {
    *(_DWORD *)&MEMORY[0x89F690].__pad_71C[924] = 1; /*0x4a5678*/
    goto LABEL_8; /*0x4a5684*/
  }
  if ( (a2 & 2) != 0 && *(_DWORD *)&MEMORY[0x89F690].__pad_71C[924] ) /*0x4a5692*/
  {
LABEL_8:
    v7 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4a56c1*/
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                  v12);
    v8 = Math::CalcAngle((double)this->q00C - (double)v7[1], (double)*v7 - (double)this->q02C); /*0x4a5709*/
    LOWORD(a2) = Math::RoundToInt((v8 - 1.570796326794897) * -10430.06004058427); /*0x4a5722*/
    LOBYTE(v9) = 0; /*0x4a572f*/
    v10 = this->q0BC; /*0x4a5738*/
    HIBYTE(v9) = ((a2 >> 7) + 1) >> 1; /*0x4a573e*/
    this->q02D = HIBYTE(v9); /*0x4a5740*/
    LOWORD(a2) = v9; /*0x4a5746*/
    v11 = (((a2 >> 12) + 1) >> 1) & 7; /*0x4a5755*/
    this->q0B8 = v11; /*0x4a575a*/
    if ( v11 == v10 ) /*0x4a5760*/
    {
      *(_DWORD *)aP2->__pad_0 = 0; /*0x4a578f*/
      CellClass::Draw((int)this, 0, aP2, 0); /*0x4a5795*/
    }
    else
    {
      this->q0BC = v11; /*0x4a5762*/
      CellClass::Draw((int)this, v4, aP2, 0); /*0x4a5772*/
    }
    return 1; /*0x4a5781*/
  }
  if ( (a2 & 4) != 0 ) /*0x4a569b*/
  {
    *(_DWORD *)aP2->__pad_0 = 0; /*0x4a569d*/
    *(_DWORD *)&MEMORY[0x89F690].__pad_71C[924] = 0; /*0x4a56a3*/
  }
  return CellClass::Draw((int)this, 0, aP2, 0); /*0x4a56b9*/
}


// ==== 0x004A57B0  Dial8Class::GetValue  this=Dial8Class  sig=csp ====
int __userpurge Dial8Class::_vt27@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
  void *v6; // ecx
  _DWORD *v7; // edi
  int v8; // ebx
  void *v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v23; // [esp+18h] [ebp-Ch] BYREF
  int v24; // [esp+1Ch] [ebp-8h]
  int v25; // [esp+20h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]

  BuildingAnim::GetType(); /*0x4a57b6*/
  if ( !Control::DispatchClick(a1, a5) ) /*0x4a57c6*/
    return 0; /*0x4a5944*/
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640], a4, a3, a2); /*0x4a57de*/
  v6 = (void *)a1[4]; /*0x4a57e4*/
  v25 = a1[3]; /*0x4a57ea*/
  retaddr = v6; /*0x4a57f1*/
  DrawBuildingTilesSHP(&v25, 0, 1); /*0x4a5805*/
  v7 = a1 + 14; /*0x4a580a*/
  v8 = 8; /*0x4a580d*/
  do /*0x4a5842*/
  {
    v9 = (void *)(*v7 - 1); /*0x4a581d*/
    v25 = *(v7 - 1) - 1; /*0x4a581e*/
    retaddr = v9; /*0x4a5822*/
    DrawBuildingTilesSHP(&v25, 1, 0); /*0x4a5839*/
    v7 += 2; /*0x4a583e*/
    --v8; /*0x4a5841*/
  }
  while ( v8 ); /*0x4a5842*/
  v10 = v23; /*0x4a5849*/
  v11 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + v23) + 796); /*0x4a5855*/
  if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4a5864*/
    v12 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v11); /*0x4a5871*/
  else
    v12 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v11); /*0x4a587d*/
  v13 = a1[46]; /*0x4a5881*/
  v14 = a1[2 * v13 + 30]; /*0x4a588c*/
  v15 = a1[2 * v13 + 29] + 1; /*0x4a5895*/
  v24 = v14 + 1; /*0x4a5896*/
  v16 = a1[11]; /*0x4a589a*/
  v23 = v15; /*0x4a589d*/
  retaddr = (_UNKNOWN *)(a1[12] + 1); /*0x4a58a6*/
  v25 = v16 + 1; /*0x4a58b1*/
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)MEMORY[0x887314] + 48))(MEMORY[0x887314], &v25, &v23, v12); /*0x4a58bc*/
  v17 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + v10) + 808); /*0x4a58c7*/
  if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4a58d6*/
    v18 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v17); /*0x4a58e3*/
  else
    v18 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v17); /*0x4a58ef*/
  v19 = a1[46]; /*0x4a58f3*/
  retaddr = (_UNKNOWN *)a1[2 * v19 + 30]; /*0x4a5906*/
  v20 = a1[11]; /*0x4a590a*/
  v25 = a1[2 * v19 + 29]; /*0x4a590d*/
  v21 = a1[12]; /*0x4a5911*/
  v23 = v20; /*0x4a5914*/
  v24 = v21; /*0x4a591f*/
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)MEMORY[0x887314] + 48))(MEMORY[0x887314], &v23, &v25, v18); /*0x4a592a*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x4a5935*/
  return 1; /*0x4a593d*/
}


// ==== 0x004A5950  ObjectClass::?GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ(
        Concurrency::details::SchedulerProxy *this)
{
  return this->q0B4; /*0x4a5956*/
}


// ==== 0x004A59A0  Dial8Class::QueryInterface  this=Dial8Class  sig=csp ====
Dial8Class *__thiscall Dial8Class::QueryInterface(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x4a59a3*/
  if ( (a2 & 1) != 0 ) /*0x4a59ad*/
    __3_YAXPAX_Z(Block); /*0x4a59b0*/
  return (Dial8Class *)Block; /*0x4a59ba*/
}


// ==== 0x004A59C0  sub_4A59C0  this=-  sig=ida-proto ====
int sub_4A59C0()
{
  MEMORY[0x8A0160] = 0; /*0x4a59c2*/
  MEMORY[0x8A0164] = 0; /*0x4a59c7*/
  MEMORY[0x8A0168] = 0; /*0x4a59cc*/
  MEMORY[0x8A016C] = 0; /*0x4a59d1*/
  return 0; /*0x4a59d6*/
}


// ==== 0x004A59E0  GetTextBoundingRect  this=-  sig=csp ====
_DWORD *__fastcall GetTextBoundingRect(_DWORD *a1, CampaignScore *a2, int a3, int a4, __int16 a5, int a6, int a7)
{
  BitFont *v7; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // ecx

  v7 = (BitFont *)aP0; /*0x4a59e4*/
  v9 = Text::MeasureWidth(a2, 0); /*0x4a59f1*/
  v10 = v7[2].field_4; /*0x4a59f6*/
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
  v5 = (_DWORD *)*((_DWORD *)MEMORY[0xB054D4] + BuildingAnim::GetType()); /*0x4a5a7f*/
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
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], a1, v13); /*0x4a5b82*/
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
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 88))(MEMORY[0x887314], v72, v53); /*0x4a5df1*/
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
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)MEMORY[0x887314] + 48))( /*0x4a5bed*/
        MEMORY[0x887314],
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
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 48))( /*0x4a5c46*/
        MEMORY[0x887314],
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
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)MEMORY[0x887314] + 48))( /*0x4a5c9e*/
        MEMORY[0x887314],
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
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 48))( /*0x4a5cf1*/
        MEMORY[0x887314],
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
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 36))(MEMORY[0x887314], v65, v44); /*0x4a5d42*/
      v46 = v5[195]; /*0x4a5d45*/
      v47 = v10[3]; /*0x4a5d4b*/
      if ( *(_DWORD *)(v46 + 4) == 1 ) /*0x4a5d51*/
        v48 = *(unsigned __int8 *)(*(_DWORD *)(v46 + 372) + v47); /*0x4a5d5b*/
      else
        v48 = *(unsigned __int16 *)(*(_DWORD *)(v46 + 372) + 2 * v47); /*0x4a5d68*/
      v49 = a1[1]; /*0x4a5d71*/
      v68[0] = *a1 + a1[2]; /*0x4a5d76*/
      v68[1] = v49; /*0x4a5d81*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 36))(MEMORY[0x887314], v68, v48); /*0x4a5d8c*/
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
    return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 88))(MEMORY[0x887314], a1, v59); /*0x4a5e33*/
  }
}


// ==== 0x004A5E50  ObjectClass::method_4A5E50  this=ObjectClass  sig=csp ====
int __thiscall sub_4A5E50(unsigned __int16 *this, int a2, AbstractClass *aP2, AbstractClass *aP3)
{
  BitFont *v5; // esi
  int PixelData; // eax

  *(_DWORD *)aP2->__pad_0 = 0; /*0x4a5e5e*/
  *(_DWORD *)aP3->__pad_0 = 0; /*0x4a5e65*/
  v5 = (BitFont *)aP0; /*0x4a5e6b*/
  if ( !this || !aP0 ) /*0x4a5e77*/
    return 0; /*0x4a5ea2*/
  PixelData = FontClass::GetPixelData(aP0, 0x57u); /*0x4a5e7d*/
  Text::Layout(v5, this, aP2, aP3, (AbstractClass *)(a2 * PixelData)); /*0x4a5e8d*/
  return *(_DWORD *)aP3->__pad_0 / v5[2].field_4; /*0x4a5e98*/
}


// ==== 0x004A5EB0  RenderTextLabel  this=IUnknown  sig=csp ====
int *__fastcall sub_4A5EB0(int *a1, int a2, int a3, _DWORD *a4, int a5, __int16 a6, int a7, int a8, int a9)
{
  _DWORD *v9; // edi
  int v10; // ebx
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
  char *v24; // [esp+20h] [ebp-18h]
  char *v25; // [esp+24h] [ebp-14h]
  _DWORD v26[4]; // [esp+28h] [ebp-10h] BYREF

  v9 = a4; /*0x4a5ebe*/
  v10 = MEMORY[0x89C4D0]; /*0x4a5ec8*/
  v11 = a4[1] + *(_DWORD *)(a5 + 4); /*0x4a5ed3*/
  v12 = *(_DWORD *)a5 + *a4; /*0x4a5ed8*/
  Text::Layout(a2, &a5, &a4, a4[2]); /*0x4a5eec*/
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
      v24 = (char *)(a5 + 2); /*0x4a5f6c*/
      v25 = (char *)a4 + 2; /*0x4a5f7a*/
      v23 = v11 - 1; /*0x4a5f82*/
      v22 = v12 - 1; /*0x4a5f86*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a3 + 20))(a3, &v22, 0); /*0x4a5f93*/
    }
  }
  else
  {
    v24 = (char *)(a5 + 2); /*0x4a5f21*/
    v23 = v11 - 1; /*0x4a5f2c*/
    v25 = (char *)a4 + 2; /*0x4a5f30*/
    v22 = v12 - 1; /*0x4a5f42*/
    v14 = *(_DWORD *)a3; /*0x4a5f46*/
    LOWORD(a8) = 0; /*0x4a5f4c*/
    BYTE2(a8) = 0; /*0x4a5f57*/
    (*(void (__thiscall **)(int, int *, int *, int))(v14 + 28))(a3, &v22, &a8, 60); /*0x4a5f5c*/
  }
  v15 = v9[2]; /*0x4a5f98*/
  v16 = v9[1]; /*0x4a5f9b*/
  v26[0] = *v9; /*0x4a5f9e*/
  v17 = v15 + v26[0]; /*0x4a5fa2*/
  v18 = v9[3]; /*0x4a5fa4*/
  v26[1] = v16; /*0x4a5fa7*/
  v26[2] = v17; /*0x4a5fb1*/
  v26[3] = v16 + v18; /*0x4a5fb5*/
  Char::Swap(1); /*0x4a5fb9*/
  TextGroup::SetRect(v26); /*0x4a5fc5*/
  Property::Set(a6); /*0x4a5fd1*/
  FontRenderer::DrawText(v10, a3, a2, v12, v11, 0, 0); /*0x4a5fed*/
  *a1 = v12; /*0x4a5ff7*/
  a1[1] = v11; /*0x4a5ff9*/
  return a1; /*0x4a5ff6*/
}


// ==== 0x004A6010  globalHelper_0A6010  this=-  sig=csp ====
int *__fastcall RenderTextLabelWordWrap(
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
  BitFont *v15; // edx
  unsigned __int16 v16; // ax
  int v17; // esi
  unsigned __int16 *v18; // edi
  int v19; // edx
  int *v20; // eax
  unsigned int *v21; // ecx
  unsigned int v22; // eax
  _DWORD *v24; // [esp+8h] [ebp-428h]
  int v25; // [esp+Ch] [ebp-424h]
  BitFont *v26; // [esp+10h] [ebp-420h]
  int v28; // [esp+1Ch] [ebp-414h]
  _DWORD v29[2]; // [esp+20h] [ebp-410h] BYREF
  int v30; // [esp+28h] [ebp-408h] BYREF
  wchar_t Destination[512]; // [esp+30h] [ebp-400h] BYREF

  v10 = a1; /*0x4a636f*/
  v11 = *a5; /*0x4a6371*/
  v28 = a5[1]; /*0x4a637c*/
  if ( a2 ) /*0x4a6380*/
  {
    wcscpy(Destination, a2); /*0x4a638e*/
    v24 = (_DWORD *)aP0; /*0x4a639c*/
    v12 = Destination; /*0x4a63a0*/
    v13 = 0; /*0x4a63a4*/
    v25 = 1; /*0x4a63a6*/
    do /*0x4a64d6*/
    {
      if ( v13 >= a9 ) /*0x4a63b5*/
        break; /*0x4a63b5*/
      v14 = wcschr(v12, 9u); /*0x4a63be*/
      v15 = (BitFont *)v14; /*0x4a63c3*/
      v26 = (BitFont *)v14; /*0x4a63ca*/
      if ( v14 ) /*0x4a63ce*/
        *v14 = 0; /*0x4a63d0*/
      v16 = *v12; /*0x4a63d5*/
      if ( *v12 ) /*0x4a63d5*/
      {
        v17 = 0; /*0x4a63e2*/
        v18 = v12; /*0x4a63e4*/
        do /*0x4a6409*/
        {
          ++v18; /*0x4a63eb*/
          v17 += FontClass::GetPixelData(v24, v16); /*0x4a63f3*/
          v16 = *v18; /*0x4a63f5*/
        }
        while ( *v18 && v17 + v13 < a9 ); /*0x4a6409*/
        if ( v17 + v13 >= a9 ) /*0x4a6417*/
        {
          v17 -= FontClass::GetPixelData(v24, *(v18 - 1)); /*0x4a642a*/
          *(v18 - 1) = 0; /*0x4a642c*/
          v25 = 0; /*0x4a6431*/
        }
        v19 = a5[1]; /*0x4a6444*/
        v29[0] = v13 + *a5; /*0x4a6450*/
        v29[1] = v19; /*0x4a645b*/
        v20 = RenderTextLabel(&v30, (int)v12, a3, a4, (int)v29, a6, a7, a8, 1); /*0x4a6484*/
        v11 = *v20; /*0x4a6489*/
        v13 += v17; /*0x4a648b*/
        v10 = a1; /*0x4a648d*/
        v15 = v26; /*0x4a6491*/
        v28 = v20[1]; /*0x4a6498*/
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
      v12 = (wchar_t *)&v15->__pad_0[2]; /*0x4a64d1*/
    }
    while ( v25 ); /*0x4a64d6*/
  }
  *v10 = v11; /*0x4a64e2*/
  v10[1] = v28; /*0x4a64e4*/
  return v10; /*0x4a64e9*/
}


// ==== 0x004A60D0  TextRenderer::GetInstance  this=TextRenderer  sig=csp ====
AbstractClass *TextRenderer::GetInstance()
{
  return aP0; /*0x4a60d5*/
}


// ==== 0x004A60E0  TextRenderer::Printf  this=AbstractClass  sig=csp ====
_DWORD *__cdecl TextRenderer::Printf(
        ConvertClass *aP0,
        size_t BufferCount,
        ObjectClass *aP2,
        ConvertClass *aP3,
        int a2,
        int a6,
        int a7,
        int a8,
        CampaignScore *aP8)
{
  wchar_t *v9; // ecx
  AbstractClass *v11; // edx
  AbstractClass v12[29]; // [esp-10h] [ebp-418h] BYREF

  if ( BufferCount ) /*0x4a60ec*/
  {
    vswprintf( /*0x4a60fc*/
      (wchar_t *const)&v12[0].nextArrayIndex,
      (CampaignScore *)BufferCount,
      (ObjectClass *)&aP8,
      (SessionClass *)v12[0].uniqueId);
    *(_DWORD *)&v12[0].__pad_0[12] = 1; /*0x4a6119*/
    *(_DWORD *)&v12[0].__pad_0[8] = a8; /*0x4a611b*/
    *(_DWORD *)&v12[0].__pad_0[4] = a7; /*0x4a6123*/
    *(_DWORD *)v12[0].__pad_0 = a6; /*0x4a612b*/
    v9 = (wchar_t *)RenderTextLabel((int *)aP2->__pad_0, (AbstractClass *)aP3, (int *)a2, v12[0]); /*0x4a6143*/
    *(_DWORD *)aP0->__pad_0 = *(_DWORD *)v9; /*0x4a614e*/
    *(_DWORD *)&aP0->field_2[2] = *((_DWORD *)v9 + 1); /*0x4a6153*/
    return aP0->__pad_0; /*0x4a6145*/
  }
  else
  {
    *(_DWORD *)&v12[0].__pad_0[12] = 1; /*0x4a6172*/
    *(_DWORD *)&v12[0].__pad_0[8] = a8; /*0x4a6174*/
    *(_DWORD *)&v12[0].__pad_0[4] = a7; /*0x4a617c*/
    *(_DWORD *)v12[0].__pad_0 = a6; /*0x4a6184*/
    v11 = (AbstractClass *)RenderTextLabel((int *)aP2->__pad_0, (AbstractClass *)aP3, (int *)a2, v12[0]); /*0x4a619a*/
    *(_DWORD *)aP0->__pad_0 = *(_DWORD *)v11->__pad_0; /*0x4a61a5*/
    *(_DWORD *)&aP0->field_2[2] = *(_DWORD *)&v11->__pad_0[4]; /*0x4a61aa*/
    return aP0->__pad_0; /*0x4a619c*/
  }
}


// ==== 0x004A61C0  TextRenderer::DrawText  this=TextRenderer  sig=csp ====
int *TextRenderer::DrawText(
        int *a0,
        size_t BufferCount,
        IUnknown *aP2,
        _DWORD *a3,
        int a2,
        ObjectClass *aP5,
        int a7,
        int a8,
        ...)
{
  int v8; // eax
  int *v9; // edx
  AbstractClass v11[29]; // [esp-10h] [ebp-420h] BYREF
  ObjectClass Format; // [esp+434h] [ebp+24h] BYREF
  va_list va; // [esp+4E0h] [ebp+D0h]

  va_start(va, a8);
  if ( BufferCount ) /*0x4a61cd*/
    vswprintf( /*0x4a61e1*/
      (wchar_t *const)&v11[0].NeedsSaveOrLink,
      (CampaignScore *)BufferCount,
      &Format,
      (SessionClass *)v11[0].uniqueId);
  v8 = Color::ConvertToRGB((unsigned __int8 *)&aP5[4].customSound_controller[2], (int)&v11[0].referenceCount); /*0x4a6202*/
  LOWORD(v11[0].abstractFlags) = *(_WORD *)v8; /*0x4a6210*/
  *(_DWORD *)&v11[0].__pad_0[12] = 1; /*0x4a6215*/
  *(_DWORD *)&v11[0].__pad_0[8] = a8; /*0x4a621a*/
  BYTE2(v11[0].abstractFlags) = *(_BYTE *)(v8 + 2); /*0x4a621b*/
  *(_DWORD *)&v11[0].__pad_0[4] = a7; /*0x4a626f*/
  *(_DWORD *)v11[0].__pad_0 = (BYTE1(v11[0].abstractFlags) >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]) /*0x4a6280*/
                            | (BYTE2(v11[0].abstractFlags) >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
                            | (LOBYTE(v11[0].abstractFlags) >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]);
  v9 = RenderTextLabel(&aP2->field_0, (AbstractClass *)a3, (int *)a2, v11[0]); /*0x4a6345*/
  *a0 = *v9; /*0x4a6351*/
  a0[1] = v9[1]; /*0x4a6356*/
  return a0; /*0x4a634e*/
}


// ==== 0x004A6360  RenderTextLabelWordWrap  this=-  sig=csp ====
int *__fastcall RenderTextLabelWordWrap(
        int *a1,
        const #72 *a2,
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
  const #72 *v12; // ebp
  unsigned int v13; // ebx
  _WORD *v14; // eax
  _WORD *v15; // edx
  unsigned __int16 v16; // ax
  int v17; // esi
  unsigned __int16 *v18; // edi
  int v19; // edx
  int *v20; // eax
  unsigned int *v21; // ecx
  unsigned int v22; // eax
  _DWORD *v24; // [esp+8h] [ebp-428h]
  int v25; // [esp+Ch] [ebp-424h]
  _WORD *v26; // [esp+10h] [ebp-420h]
  int v28; // [esp+1Ch] [ebp-414h]
  _DWORD v29[2]; // [esp+20h] [ebp-410h] BYREF
  int v30; // [esp+28h] [ebp-408h] BYREF
  _BYTE Destination[1024]; // [esp+30h] [ebp-400h] BYREF

  v10 = a1; /*0x4a636f*/
  v11 = *a5; /*0x4a6371*/
  v28 = a5[1]; /*0x4a637c*/
  if ( a2 ) /*0x4a6380*/
  {
    wcscpy((#72 *)Destination, a2); /*0x4a638e*/
    v24 = (_DWORD *)MEMORY[0x87F7E8][29498]; /*0x4a639c*/
    v12 = (const #72 *)Destination; /*0x4a63a0*/
    v13 = 0; /*0x4a63a4*/
    v25 = 1; /*0x4a63a6*/
    do /*0x4a64d6*/
    {
      if ( v13 >= a9 ) /*0x4a63b5*/
        break; /*0x4a63b5*/
      v14 = (_WORD *)wcschr(v12, 9); /*0x4a63be*/
      v15 = v14; /*0x4a63c3*/
      v26 = v14; /*0x4a63ca*/
      if ( v14 ) /*0x4a63ce*/
        *v14 = 0; /*0x4a63d0*/
      v16 = *(_WORD *)v12; /*0x4a63d5*/
      if ( *(_WORD *)v12 ) /*0x4a63d5*/
      {
        v17 = 0; /*0x4a63e2*/
        v18 = (unsigned __int16 *)v12; /*0x4a63e4*/
        do /*0x4a6409*/
        {
          ++v18; /*0x4a63eb*/
          v17 += FontClass::GetPixelData(v24, v16); /*0x4a63f3*/
          v16 = *v18; /*0x4a63f5*/
        }
        while ( *v18 && v17 + v13 < a9 ); /*0x4a6409*/
        if ( v17 + v13 >= a9 ) /*0x4a6417*/
        {
          v17 -= FontClass::GetPixelData(v24, *(v18 - 1)); /*0x4a642a*/
          *(v18 - 1) = 0; /*0x4a642c*/
          v25 = 0; /*0x4a6431*/
        }
        v19 = a5[1]; /*0x4a6444*/
        v29[0] = v13 + *a5; /*0x4a6450*/
        v29[1] = v19; /*0x4a645b*/
        v20 = RenderTextLabel(&v30, (int)v12, a3, a4, (int)v29, a6, a7, a8, 1); /*0x4a6484*/
        v11 = *v20; /*0x4a6489*/
        v13 += v17; /*0x4a648b*/
        v10 = a1; /*0x4a648d*/
        v15 = v26; /*0x4a6491*/
        v28 = v20[1]; /*0x4a6498*/
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
      v12 = (const #72 *)(v15 + 1); /*0x4a64d1*/
    }
    while ( v25 ); /*0x4a64d6*/
  }
  *v10 = v11; /*0x4a64e2*/
  v10[1] = v28; /*0x4a64e4*/
  return v10; /*0x4a64e9*/
}


// ==== 0x004A6500  FillRectangle  this=AbstractClass  sig=csp ====
_DWORD *__fastcall FillRectangle(
        IUnknown *aP0,
        IUnknown *aP1,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v12; // eax
  int *v13; // eax
  int v14; // edx
  int v16; // [esp+8h] [ebp-8h] BYREF

  v12 = Color::ConvertToRGB((unsigned __int8 *)(a6 + 776), (int)&a6); /*0x4a6518*/
  LOWORD(v16) = *(_WORD *)v12; /*0x4a6526*/
  BYTE2(v16) = *(_BYTE *)(v12 + 2); /*0x4a652e*/
  v13 = RenderTextLabelWordWrap( /*0x4a65a7*/
          &v16,
          (const wchar_t *)aP1,
          a3,
          (_DWORD *)a4,
          (int *)a5,
          ((unsigned __int8)v16 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
        | (BYTE1(v16) >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
        | (BYTE2(v16) >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]),
          a7,
          a8,
          a9,
          (unsigned int *)a10);
  aP0->field_0 = *v13; /*0x4a65ae*/
  v14 = v13[1]; /*0x4a65b1*/
  aP0->field_4 = v14; /*0x4a65b6*/
  return &aP0->field_0; /*0x4a65b0*/
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
    v14 = Color::ConvertToRGB((unsigned __int8 *)(*((_DWORD *)MEMORY[0xB054D4] + a9) + 776), (int)&a9); /*0x4a6628*/
    LOWORD(v15[0]) = *(_WORD *)v14; /*0x4a6630*/
    BYTE2(v15[0]) = *(_BYTE *)(v14 + 2); /*0x4a663e*/
    v12 = RenderTextLabel( /*0x4a66b2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (BYTE1(v15[0]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
          | (BYTE2(v15[0]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
          | (LOBYTE(v15[0]) >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6602*/
  a1[1] = v12[1]; /*0x4a660a*/
  return a1; /*0x4a6604*/
}


// ==== 0x004A66D0  globalHelper_0A66D0  this=-  sig=csp ====
int *__fastcall sub_4A67E0(char a1, int a2)
{
  int v2; // ecx

  LOBYTE(a2) = a1; /*0x4a67e0*/
  BYTE1(a2) = a1; /*0x4a67e4*/
  MEMORY[0x8A0150] = 0; /*0x4a67e6*/
  MEMORY[0x8A0154] = 0; /*0x4a67ed*/
  v2 = a2 << 16; /*0x4a67f2*/
  MEMORY[0x8A0158] = 0; /*0x4a67f5*/
  LOWORD(v2) = a2; /*0x4a67fa*/
  *(int *)((char *)&MEMORY[0x8A0158] + 3) = v2; /*0x4a6802*/
  HIBYTE(MEMORY[0x8A015C]) = a2; /*0x4a6808*/
  return &MEMORY[0x8A0150]; /*0x4a6813*/
}


// ==== 0x004A67E0  sub_4A67E0  this=-  sig=ida-proto ====
int *__fastcall sub_4A67E0(char a1, int a2)
{
  int v2; // ecx

  LOBYTE(a2) = a1; /*0x4a67e0*/
  BYTE1(a2) = a1; /*0x4a67e4*/
  MEMORY[0x8A0150] = 0; /*0x4a67e6*/
  MEMORY[0x8A0154] = 0; /*0x4a67ed*/
  v2 = a2 << 16; /*0x4a67f2*/
  MEMORY[0x8A0158] = 0; /*0x4a67f5*/
  LOWORD(v2) = a2; /*0x4a67fa*/
  *(int *)((char *)&MEMORY[0x8A0158] + 3) = v2; /*0x4a6802*/
  HIBYTE(MEMORY[0x8A015C]) = a2; /*0x4a6808*/
  return &MEMORY[0x8A0150]; /*0x4a6813*/
}


// ==== 0x004A6820  sub_4A6820  this=-  sig=ida-proto ====
int sub_4A6820()
{
  MEMORY[0x8A0170] = 0; /*0x4a6822*/
  MEMORY[0x8A0174] = 0; /*0x4a6827*/
  MEMORY[0x8A0178] = 0; /*0x4a682c*/
  MEMORY[0x8A017C] = 0; /*0x4a6831*/
  return 0; /*0x4a6836*/
}


// ==== 0x004A6840  ObjectClass::method_4A6840  this=ObjectClass  sig=csp ====
char *__thiscall sub_4A6840(char *this, HWND hWnd, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int i; // eax
  _BYTE *v8; // ecx
  _DWORD *v9; // ebp
  HDC DC; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ebp
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // ecx

  *this = 0; /*0x4a6855*/
  this->vtable2 = 0; /*0x4a6857*/
  this->vtable3 = 0; /*0x4a685a*/
  this->vtable4 = 0; /*0x4a685d*/
  this->vtable2 = a3; /*0x4a6860*/
  this->abstractFlags = a4; /*0x4a6863*/
  this->nextArrayIndex = 0; /*0x4a6866*/
  this->referenceCount = 0; /*0x4a6869*/
  this->vtable3 = 0; /*0x4a686c*/
  v6 = __2_YAPAXI_Z(0x42Cu); /*0x4a686f*/
  this->vtable2 = v6; /*0x4a6879*/
  if ( !v6 ) /*0x4a687c*/
    goto LABEL_12; /*0x4a687c*/
  *v6 = 40; /*0x4a6882*/
  *(_DWORD *)(this->vtable2 + 4) = a3; /*0x4a688d*/
  *(_DWORD *)(this->vtable2 + 8) = -a4; /*0x4a6893*/
  *(_WORD *)(this->vtable2 + 12) = 1; /*0x4a689d*/
  *(_WORD *)(this->vtable2 + 14) = 8; /*0x4a68a6*/
  *(_DWORD *)(this->vtable2 + 16) = 0; /*0x4a68af*/
  *(_DWORD *)(this->vtable2 + 20) = 0; /*0x4a68b5*/
  *(_DWORD *)(this->vtable2 + 24) = 0; /*0x4a68bb*/
  *(_DWORD *)(this->vtable2 + 28) = 0; /*0x4a68c6*/
  *(_DWORD *)(this->vtable2 + 32) = 256; /*0x4a68cc*/
  *(_DWORD *)(this->vtable2 + 36) = 256; /*0x4a68d2*/
  for ( i = 0; i < 256; *(_BYTE *)(this->vtable2 + 4 * i + 39) = 0 ) /*0x4a68d5*/
  {
    v8 = (_BYTE *)(a5 + 2 * (i % 256) + i % 256); /*0x4a68ef*/
    ++i; /*0x4a68f1*/
    *(_BYTE *)(this->vtable2 + 4 * i + 36) = v8[2]; /*0x4a68fa*/
    *(_BYTE *)(this->vtable2 + 4 * i + 37) = v8[1]; /*0x4a6904*/
    *(_BYTE *)(this->vtable2 + 4 * i + 38) = *v8; /*0x4a690d*/
  }
  v9 = this + 12; /*0x4a6929*/
  DC = GetDC(hWnd); /*0x4a692e*/
  this->vtable3 = CreateDIBSection(DC, *((const BITMAPINFO **)this + 1), 0, (void **)this + 3, 0, 0); /*0x4a693f*/
  ReleaseDC(hWnd, DC); /*0x4a6942*/
  if ( !this->vtable3 ) /*0x4a6948*/
    goto LABEL_12; /*0x4a6948*/
  v11 = this->vtable2; /*0x4a6951*/
  this->vtable2 = *(_DWORD *)(v11 + 4); /*0x4a6957*/
  v12 = this->vtable2; /*0x4a6962*/
  this->abstractFlags = abs32(*(_DWORD *)(v11 + 8)); /*0x4a6965*/
  v13 = v12 + 3; /*0x4a6968*/
  LOBYTE(v13) = (v12 + 3) & 0xFC; /*0x4a696b*/
  this->referenceCount = v13; /*0x4a696d*/
  if ( *(int *)(v11 + 8) <= 0 ) /*0x4a6975*/
  {
    this->nextArrayIndex = *v9; /*0x4a698b*/
  }
  else
  {
    this->nextArrayIndex = *v9 + v12 * (this->abstractFlags - 1); /*0x4a6981*/
    v13 = -v13; /*0x4a6984*/
  }
  this->referenceCount = v13; /*0x4a698e*/
  v14 = abs32(v13); /*0x4a6998*/
  v15 = __2_YAPAXI_Z(0x20u); /*0x4a699f*/
  if ( v15 ) /*0x4a69a6*/
  {
    v16 = this->abstractFlags; /*0x4a69a8*/
    v17 = this->vtable4; /*0x4a69ab*/
    v15[2] = v16; /*0x4a69ae*/
    v15[1] = v14; /*0x4a69b9*/
    v15[3] = 0; /*0x4a69bc*/
    *v15 = &XSurface_Vtable; /*0x4a69bf*/
    v15[4] = 1; /*0x4a69c5*/
    Buffer::Init(v15 + 5, v17, v14 * v16); /*0x4a69cc*/
    *v15 = &BSurface_Vtable; /*0x4a69d1*/
  }
  else
  {
    v15 = 0; /*0x4a69d9*/
  }
  this->vtable3 = v15; /*0x4a69dd*/
  if ( !v15 ) /*0x4a69e0*/
LABEL_12:
    *this = 1; /*0x4a69e2*/
  return this; /*0x4a69e7*/
}


// ==== 0x004A6A60  sub_4A6A60  this=-  sig=ida-proto ====
void sub_4A6A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a6a6c*/
  MEMORY[0x8A0238] = Math::Sqrt(v0 + v0); /*0x4a6a7e*/
}


// ==== 0x004A6A90  sub_4A6A90  this=-  sig=ida-proto ====
void sub_4A6A90()
{
  MEMORY[0x8A0288] = MEMORY[0x8A0238] / 60.0; /*0x4a6a9c*/
}


// ==== 0x004A6AB0  sub_4A6AB0  this=-  sig=ida-proto ====
void sub_4A6AB0()
{
  MEMORY[0x8A0270] = 1.0 / MEMORY[0x8A0288]; /*0x4a6abc*/
}


// ==== 0x004A6AD0  sub_4A6AD0  this=-  sig=ida-proto ====
void sub_4A6AD0()
{
  MEMORY[0x8A0268] = 0.0174532925199433 * 45.0; /*0x4a6adc*/
}


// ==== 0x004A6AF0  sub_4A6AF0  this=-  sig=ida-proto ====
void sub_4A6AF0()
{
  MEMORY[0x8A0240] = 0.0174532925199433 * 60.0; /*0x4a6afc*/
}


// ==== 0x004A6B10  sub_4A6B10  this=-  sig=ida-proto ====
void sub_4A6B10()
{
  MEMORY[0x8A0200] = 0.0174532925199433 * 90.0; /*0x4a6b1c*/
}


// ==== 0x004A6B30  sub_4A6B30  this=-  sig=ida-proto ====
__int64 sub_4A6B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0200] - MEMORY[0x8A0240]); /*0x4a6b42*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0238] * 0.5); /*0x4a6b56*/
  MEMORY[0x8A0290] = result; /*0x4a6b5b*/
  return result; /*0x4a6b60*/
}


// ==== 0x004A6B70  sub_4A6B70  this=-  sig=ida-proto ====
void sub_4A6B70()
{
  MEMORY[0x8A0248] = Math::ArcTan((double)MEMORY[0x8A0290] * 0.00390625); /*0x4a6b87*/
}


// ==== 0x004A6BA0  sub_4A6BA0  this=-  sig=ida-proto ====
void sub_4A6BA0()
{
  MEMORY[0x8A0260] = Math::ArcTan((double)(2 * MEMORY[0x8A0290]) / MEMORY[0x8A0238]); /*0x4a6bc2*/
}


// ==== 0x004A6BD0  sub_4A6BD0  this=-  sig=ida-proto ====
__int64 sub_4A6BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0290]) + 0.5); /*0x4a6beb*/
  MEMORY[0x8A0284] = result; /*0x4a6bf0*/
  return result; /*0x4a6bf6*/
}


// ==== 0x004A6C00  sub_4A6C00  this=-  sig=ida-proto ====
int sub_4A6C00()
{
  MEMORY[0x8A0230] = 0; /*0x4a6c02*/
  MEMORY[0x8A0232] = 0; /*0x4a6c08*/
  return 0; /*0x4a6c0e*/
}


// ==== 0x004A6C10  sub_4A6C10  this=-  sig=ida-proto ====
int sub_4A6C10()
{
  MEMORY[0x8A0250] = 0; /*0x4a6c12*/
  MEMORY[0x8A0254] = 0; /*0x4a6c17*/
  MEMORY[0x8A0258] = 0; /*0x4a6c1c*/
  return 0; /*0x4a6c21*/
}


// ==== 0x004A6C30  sub_4A6C30  this=-  sig=ida-proto ====
int sub_4A6C30()
{
  MEMORY[0x8A0280] = 0; /*0x4a6c35*/
  MEMORY[0x8A0278] = 128; /*0x4a6c3f*/
  MEMORY[0x8A027C] = 128; /*0x4a6c44*/
  return 128; /*0x4a6c49*/
}


// ==== 0x004A6C50  sub_4A6C50  this=-  sig=ida-proto ====
int sub_4A6C50()
{
  MEMORY[0x8A0220] = 0; /*0x4a6c52*/
  MEMORY[0x8A0224] = 0; /*0x4a6c57*/
  MEMORY[0x8A0228] = 0; /*0x4a6c5c*/
  MEMORY[0x8A022C] = 0; /*0x4a6c61*/
  return 0; /*0x4a6c66*/
}


// ==== 0x004A6C70  sub_4A6C70  this=-  sig=ida-proto ====
int sub_4A6C70()
{
  MEMORY[0x8A020C] = 0; /*0x4a6c77*/
  MEMORY[0x8A0210] = 0; /*0x4a6c7c*/
  MEMORY[0x8A0214] = 1; /*0x4a6c81*/
  MEMORY[0x8A0215] = 0; /*0x4a6c88*/
  MEMORY[0x8A0208] = (int)&vt_DynamicVectorClass_DiskLaserClass; /*0x4a6c8d*/
  MEMORY[0x8A021C] = 10; /*0x4a6c97*/
  MEMORY[0x8A0218] = 0; /*0x4a6ca1*/
  return atexit(sub_4A6CB0); /*0x4a6cac*/
}


// ==== 0x004A6CB0  sub_4A6CB0  this=-  sig=ida-proto ====
void __cdecl sub_4A6CB0()
{
  MEMORY[0x8A0208] = (int)&vt_VectorClass_DiskLaserClass; /*0x4a6cb8*/
  if ( MEMORY[0x8A020C] && MEMORY[0x8A0215] ) /*0x4a6ccc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8A020C]); /*0x4a6ccf*/
    MEMORY[0x8A020C] = 0; /*0x4a6cd7*/
  }
  MEMORY[0x8A0215] = 0; /*0x4a6cdd*/
  MEMORY[0x8A0210] = 0; /*0x4a6ce3*/
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
  MEMORY[0x8A0180][0] = Math::RoundToInt(v2 * 240.0); /*0x4a6d40*/
  MEMORY[0x8A0184][0] = v1; /*0x4a6d45*/
  v3 = Math::SinCos(0.0174532925199433 * 292.0); /*0x4a6d4e*/
  v4 = Math::RoundToInt(v3 * 240.0); /*0x4a6d6a*/
  v5 = Math::ArcTan2(0.0174532925199433 * 292.0); /*0x4a6d6f*/
  MEMORY[0x8A0188] = Math::RoundToInt(v5 * 240.0); /*0x4a6d8b*/
  MEMORY[0x8A018C] = v4; /*0x4a6d90*/
  v6 = Math::SinCos(0.0174532925199433 * 315.0); /*0x4a6d99*/
  v7 = Math::RoundToInt(v6 * 240.0); /*0x4a6db5*/
  v8 = Math::ArcTan2(0.0174532925199433 * 315.0); /*0x4a6dba*/
  MEMORY[0x8A0190] = Math::RoundToInt(v8 * 240.0); /*0x4a6dd6*/
  MEMORY[0x8A0194] = v7; /*0x4a6ddb*/
  v9 = Math::SinCos(0.0174532925199433 * 337.0); /*0x4a6de4*/
  v10 = Math::RoundToInt(v9 * 240.0); /*0x4a6e00*/
  v11 = Math::ArcTan2(0.0174532925199433 * 337.0); /*0x4a6e05*/
  MEMORY[0x8A0198] = Math::RoundToInt(v11 * 240.0); /*0x4a6e19*/
  MEMORY[0x8A019C] = v10; /*0x4a6e1e*/
  v12 = Math::SinCos(0.0); /*0x4a6e24*/
  v13 = Math::RoundToInt(v12 * 240.0); /*0x4a6e38*/
  v14 = Math::ArcTan2(0.0); /*0x4a6e3a*/
  MEMORY[0x8A01A0] = Math::RoundToInt(v14 * 240.0); /*0x4a6e59*/
  MEMORY[0x8A01A4] = v13; /*0x4a6e5e*/
  v15 = Math::SinCos(0.0174532925199433 * 22.0); /*0x4a6e67*/
  v16 = Math::RoundToInt(v15 * 240.0); /*0x4a6e83*/
  v17 = Math::ArcTan2(0.0174532925199433 * 22.0); /*0x4a6e88*/
  MEMORY[0x8A01A8] = Math::RoundToInt(v17 * 240.0); /*0x4a6ea4*/
  MEMORY[0x8A01AC] = v16; /*0x4a6ea9*/
  v18 = Math::SinCos(0.0174532925199433 * 45.0); /*0x4a6eb2*/
  v19 = Math::RoundToInt(v18 * 240.0); /*0x4a6ece*/
  v20 = Math::ArcTan2(0.0174532925199433 * 45.0); /*0x4a6ed3*/
  MEMORY[0x8A01B0] = Math::RoundToInt(v20 * 240.0); /*0x4a6eef*/
  MEMORY[0x8A01B4] = v19; /*0x4a6ef4*/
  v21 = Math::SinCos(0.0174532925199433 * 67.0); /*0x4a6efd*/
  v22 = Math::RoundToInt(v21 * 240.0); /*0x4a6f19*/
  v23 = Math::ArcTan2(0.0174532925199433 * 67.0); /*0x4a6f1e*/
  MEMORY[0x8A01B8] = Math::RoundToInt(v23 * 240.0); /*0x4a6f3a*/
  MEMORY[0x8A01BC] = v22; /*0x4a6f3f*/
  v24 = Math::SinCos(0.0174532925199433 * 90.0); /*0x4a6f48*/
  v25 = Math::RoundToInt(v24 * 240.0); /*0x4a6f64*/
  v26 = Math::ArcTan2(0.0174532925199433 * 90.0); /*0x4a6f69*/
  MEMORY[0x8A01C0] = Math::RoundToInt(v26 * 240.0); /*0x4a6f85*/
  MEMORY[0x8A01C4] = v25; /*0x4a6f8a*/
  v27 = Math::SinCos(0.0174532925199433 * 112.0); /*0x4a6f93*/
  v28 = Math::RoundToInt(v27 * 240.0); /*0x4a6faf*/
  v29 = Math::ArcTan2(0.0174532925199433 * 112.0); /*0x4a6fb4*/
  MEMORY[0x8A01C8] = Math::RoundToInt(v29 * 240.0); /*0x4a6fd0*/
  MEMORY[0x8A01CC] = v28; /*0x4a6fd5*/
  v30 = Math::SinCos(0.0174532925199433 * 135.0); /*0x4a6fde*/
  v31 = Math::RoundToInt(v30 * 240.0); /*0x4a6ffa*/
  v32 = Math::ArcTan2(0.0174532925199433 * 135.0); /*0x4a6fff*/
  MEMORY[0x8A01D0] = Math::RoundToInt(v32 * 240.0); /*0x4a701b*/
  MEMORY[0x8A01D4] = v31; /*0x4a7020*/
  v33 = Math::SinCos(0.0174532925199433 * 157.0); /*0x4a7029*/
  v34 = Math::RoundToInt(v33 * 240.0); /*0x4a7045*/
  v35 = Math::ArcTan2(0.0174532925199433 * 157.0); /*0x4a704a*/
  MEMORY[0x8A01D8] = Math::RoundToInt(v35 * 240.0); /*0x4a7066*/
  MEMORY[0x8A01DC] = v34; /*0x4a706b*/
  v36 = Math::SinCos(0.0174532925199433 * 180.0); /*0x4a7074*/
  v37 = Math::RoundToInt(v36 * 240.0); /*0x4a7090*/
  v38 = Math::ArcTan2(0.0174532925199433 * 180.0); /*0x4a7095*/
  MEMORY[0x8A01E0] = Math::RoundToInt(v38 * 240.0); /*0x4a70b1*/
  MEMORY[0x8A01E4] = v37; /*0x4a70b6*/
  v39 = Math::SinCos(0.0174532925199433 * 202.0); /*0x4a70bf*/
  v40 = Math::RoundToInt(v39 * 240.0); /*0x4a70db*/
  v41 = Math::ArcTan2(0.0174532925199433 * 202.0); /*0x4a70e0*/
  MEMORY[0x8A01E8] = Math::RoundToInt(v41 * 240.0); /*0x4a70fc*/
  MEMORY[0x8A01EC] = v40; /*0x4a7101*/
  v42 = Math::SinCos(0.0174532925199433 * 235.0); /*0x4a710a*/
  v43 = Math::RoundToInt(v42 * 240.0); /*0x4a7126*/
  v44 = Math::ArcTan2(0.0174532925199433 * 235.0); /*0x4a712b*/
  MEMORY[0x8A01F0] = Math::RoundToInt(v44 * 240.0); /*0x4a7147*/
  MEMORY[0x8A01F4] = v43; /*0x4a714c*/
  v45 = Math::SinCos(0.0174532925199433 * 257.0); /*0x4a7155*/
  v46 = Math::RoundToInt(v45 * 240.0); /*0x4a7171*/
  v47 = Math::ArcTan2(0.0174532925199433 * 257.0); /*0x4a7176*/
  result = Math::RoundToInt(v47 * 240.0); /*0x4a7184*/
  MEMORY[0x8A01FC] = v46; /*0x4a7189*/
  MEMORY[0x8A01F8] = result; /*0x4a718f*/
  return result; /*0x4a7194*/
}


// ==== 0x004A71A0  DiskLaserClass::Fire  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::Fire(_DWORD *this, int a2, InfantryClass *aP2, DiskLaserClass *aP3, DiskLaserClass *aP4)
{
  int result; // eax
  unsigned int *v7; // ebp
  int *v8; // eax
  double v9; // st7
  _BYTE v10[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+30h] [ebp-Ch] BYREF
  unsigned int v12; // [esp+40h] [ebp+4h]

  if ( a2 ) /*0x4a71ad*/
  {
    if ( aP2 ) /*0x4a7201*/
    {
      if ( aP3 ) /*0x4a7229*/
      {
        this->q024 = a2; /*0x4a729e*/
        this->q03C = aP4; /*0x4a72a1*/
        this->q028 = aP2; /*0x4a72a4*/
        this->q02C = aP3; /*0x4a72a7*/
        v7 = (unsigned int *)(*(int (__thiscall **)(InfantryClass *, _BYTE *))(*(_DWORD *)aP2->__pad_0 + 72))(aP2, v10); /*0x4a72b9*/
        v8 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v11); /*0x4a72c0*/
        v12 = *v7; /*0x4a72c8*/
        v9 = Math::CalcAngle((double)v8[1] - (double)(int)v7[1], (double)(int)*v7 - (double)*v8); /*0x4a72eb*/
        result = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427); /*0x4a72ff*/
        LOWORD(v12) = result; /*0x4a7304*/
        this->u8_34 = (int)(((((v12 >> 11) + 1) >> 1) & 0xF) + 8) % 16; /*0x4a7326*/
        this->q030 = 0; /*0x4a7329*/
        this->q038 = 0; /*0x4a7330*/
        return result; /*0x4a7330*/
      }
      this->q030 = -1; /*0x4a722b*/
      result = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996]; /*0x4a7232*/
      if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10004] < *(int *)&MEMORY[0xB077F8].__pad_579C[9996] ) /*0x4a723d*/
      {
LABEL_18:
        result = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10004])++; /*0x4a727a*/
        *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9992] + 4 * result) = this; /*0x4a7290*/
        return result; /*0x4a7297*/
      }
      if ( !MEMORY[0xB077F8].__pad_579C[10001] ) /*0x4a7247*/
        goto LABEL_14; /*0x4a7247*/
    }
    else
    {
      this->q030 = -1; /*0x4a7203*/
      result = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996]; /*0x4a720a*/
      if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10004] < *(int *)&MEMORY[0xB077F8].__pad_579C[9996] ) /*0x4a7215*/
        goto LABEL_18; /*0x4a7215*/
      if ( !MEMORY[0xB077F8].__pad_579C[10001] ) /*0x4a721f*/
      {
LABEL_14:
        if ( result ) /*0x4a724b*/
          return result; /*0x4a724b*/
      }
    }
    if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10008] <= 0 ) /*0x4a7259*/
      return result; /*0x4a7259*/
    result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9988] + 8))( /*0x4a726f*/
               &MEMORY[0xB077F8].__pad_579C[9988],
               result + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10008],
               0);
LABEL_17:
    if ( !(_BYTE)result ) /*0x4a7274*/
      return result; /*0x4a7274*/
    goto LABEL_18; /*0x4a7274*/
  }
  this->q030 = -1; /*0x4a71af*/
  result = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996]; /*0x4a71b6*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10004] < *(int *)&MEMORY[0xB077F8].__pad_579C[9996] ) /*0x4a71c1*/
    goto LABEL_18; /*0x4a71c1*/
  if ( (MEMORY[0xB077F8].__pad_579C[10001] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996]) /*0x4a71e1*/
    && *(int *)&MEMORY[0xB077F8].__pad_579C[10008] > 0 )
  {
    result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9988] + 8))( /*0x4a71f6*/
               &MEMORY[0xB077F8].__pad_579C[9988],
               *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10008],
               0);
    goto LABEL_17; /*0x4a71f9*/
  }
  return result; /*0x4a7280*/
}


// ==== 0x004A7340  DiskLaserClass::Update  this=DiskLaserClass  sig=csp ====
char __thiscall DiskLaserClass::Update(int this)
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
  int v11; // ebx
  int FoundationHeight; // ebp
  _BYTE *v13; // ecx
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
  int v32; // ecx
  int v33; // edx
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // edi
  int v39; // edi
  int v40; // ecx
  int *v41; // ecx
  char v42; // dl
  int v43; // eax
  int v44; // ebx
  int v45; // edi
  int v46; // ebx
  int v47; // edi
  char *v48; // eax
  int *v49; // ecx
  int v50; // eax
  int **v52; // [esp-Ch] [ebp-70h]
  int **v53; // [esp-Ch] [ebp-70h]
  int v54; // [esp-Ch] [ebp-70h]
  int *v55; // [esp-8h] [ebp-6Ch] BYREF
  int v56; // [esp-4h] [ebp-68h] BYREF
  int v57; // [esp+0h] [ebp-64h]
  int v58; // [esp+4h] [ebp-60h]
  int v59; // [esp+8h] [ebp-5Ch]
  int v60; // [esp+Ch] [ebp-58h]
  int v61; // [esp+10h] [ebp-54h]
  _BYTE *v62; // [esp+24h] [ebp-40h]
  __int16 v63; // [esp+28h] [ebp-3Ch] BYREF
  char v64; // [esp+2Ah] [ebp-3Ah]
  __int16 *v65; // [esp+2Ch] [ebp-38h]
  int v66; // [esp+30h] [ebp-34h]
  int v67; // [esp+34h] [ebp-30h] BYREF
  char *v68; // [esp+38h] [ebp-2Ch]
  int v69; // [esp+3Ch] [ebp-28h]
  int v70; // [esp+40h] [ebp-24h] BYREF
  int v71; // [esp+44h] [ebp-20h]
  int v72; // [esp+48h] [ebp-1Ch]
  int v73; // [esp+4Ch] [ebp-18h] BYREF
  int v74; // [esp+50h] [ebp-14h]
  int v75; // [esp+54h] [ebp-10h]
  int v76[3]; // [esp+58h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 48); /*0x4a7349*/
  if ( v2 < 0 ) /*0x4a734e*/
    goto LABEL_2; /*0x4a734e*/
  if ( v2 > 0 ) /*0x4a7372*/
  {
    v3 = v2 - 1; /*0x4a7374*/
    *(_DWORD *)(this + 48) = v3; /*0x4a7375*/
    return v3; /*0x4a737f*/
  }
  v4 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 36) + 72))(*(_DWORD *)(this + 36), v76); /*0x4a738a*/
  v5 = *v4; /*0x4a738d*/
  v6 = v4[1]; /*0x4a7392*/
  v7 = v4[2]; /*0x4a7397*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 84))(*(_DWORD *)(this + 36)) ) /*0x4a739a*/
    v7 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 40) + 72))(*(_DWORD *)(this + 40), v76) /*0x4a73ae*/
                   + 8);
  v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 40) + 72))(*(_DWORD *)(this + 40), v76); /*0x4a73bb*/
  v9 = Coord::Subtract(&v70, v5 - *v8, v6 - v8[1], v7 - v8[2]); /*0x4a73d3*/
  v73 = *v9; /*0x4a73da*/
  v74 = v9[1]; /*0x4a73e5*/
  v75 = v9[2]; /*0x4a73ec*/
  v10 = Coord::Length(&v73); /*0x4a73f8*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 44))(*(_DWORD *)(this + 40)) == 6 ) /*0x4a7402*/
  {
    v11 = *(_DWORD *)(this + 40); /*0x4a7404*/
    if ( v11 ) /*0x4a7409*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(v11 + 1312), 0); /*0x4a741e*/
      v10 += -64 * (BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v11 + 1312)) + FoundationHeight); /*0x4a742c*/
      if ( v10 < 0 ) /*0x4a742e*/
        v10 = 0; /*0x4a7430*/
    }
  }
  if ( v10 > *(_DWORD *)(*(_DWORD *)(this + 44) + 180) ) /*0x4a743b*/
  {
    *(_DWORD *)(this + 48) = -1; /*0x4a7441*/
    v67 = this; /*0x4a744e*/
    LOBYTE(v3) = VectorClass::AppendCopy(&MEMORY[0xB0F698], &v67); /*0x4a7452*/
    return v3; /*0x4a745e*/
  }
  v13 = *(_BYTE **)(this + 36); /*0x4a745f*/
  if ( v13[1061] ) /*0x4a7462*/
  {
LABEL_2:
    v61 = (int)&v67; /*0x4a7359*/
    *(_DWORD *)(this + 48) = -1; /*0x4a735a*/
    v67 = this; /*0x4a7361*/
    LOBYTE(v3) = VectorClass::AppendCopy(&MEMORY[0xB0F698], (_DWORD *)v61); /*0x4a7365*/
  }
  else
  {
    v14 = (int *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 176))( /*0x4a74aa*/
                   v13,
                   v76,
                   0,
                   0,
                   0,
                   0);
    v73 = *v14; /*0x4a74b2*/
    v15 = *(_DWORD *)(this + 56); /*0x4a74b6*/
    v74 = v14[1]; /*0x4a74bc*/
    v16 = *(_DWORD *)(this + 52); /*0x4a74c0*/
    v17 = v14[2]; /*0x4a74c3*/
    v18 = v16 + v15; /*0x4a74c6*/
    v19 = (v16 + v15) % 16; /*0x4a74d6*/
    v20 = v16 - v15; /*0x4a74d7*/
    v21 = (v20 + 16) % 16; /*0x4a74e8*/
    v22 = (v18 + 1) % 16; /*0x4a74f6*/
    v69 = (v20 + 15) % 16; /*0x4a7507*/
    v23 = *(_DWORD *)(this + 44); /*0x4a750b*/
    v63 = 0; /*0x4a750e*/
    v24 = *(_BYTE *)(v23 + 333) == 0; /*0x4a7518*/
    v64 = 0; /*0x4a751f*/
    if ( v24 ) /*0x4a7524*/
    {
      v62 = (_BYTE *)(v23 + 288); /*0x4a7567*/
      v25 = (__int16 *)(*(_DWORD *)(this + 44) + 291); /*0x4a756e*/
    }
    else
    {
      v62 = (_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 36) + 540) + 22268); /*0x4a7535*/
      LOBYTE(v63) = *v62 >> 1; /*0x4a753d*/
      HIBYTE(v63) = v62[1] >> 1; /*0x4a754a*/
      v64 = v62[2] >> 1; /*0x4a7557*/
      v25 = &v63; /*0x4a755b*/
    }
    v65 = v25; /*0x4a7574*/
    v66 = *(_DWORD *)(this + 44) + 294; /*0x4a7583*/
    if ( v19 == v21 && v15 ) /*0x4a758f*/
    {
      v26 = MEMORY[0x8A0180][2 * v19]; /*0x4a7595*/
      v27 = v74 + MEMORY[0x8A0184][2 * v19]; /*0x4a75ad*/
      v70 = v73 + v26; /*0x4a75af*/
      v28 = *(_BYTE **)(this + 40); /*0x4a75b3*/
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
        v32 = *(_DWORD *)(this + 44); /*0x4a7607*/
        v61 = 0; /*0x4a760a*/
        v60 = 1065353216; /*0x4a760c*/
        v59 = 1; /*0x4a7611*/
        v33 = *(char *)(v32 + 334); /*0x4a7613*/
        v58 = 0; /*0x4a761a*/
        v57 = v33; /*0x4a761c*/
        v56 = v32; /*0x4a7621*/
        LOBYTE(v33) = *(_BYTE *)(v66 + 2); /*0x4a7627*/
        LOWORD(v56) = *(_WORD *)v66; /*0x4a762a*/
        v55 = &v56; /*0x4a762d*/
        BYTE2(v56) = v33; /*0x4a762e*/
        LOBYTE(v33) = *((_BYTE *)v65 + 2); /*0x4a763a*/
        LOWORD(v55) = *v65; /*0x4a763d*/
        v52 = &v55; /*0x4a7640*/
        BYTE2(v55) = v33; /*0x4a7641*/
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
          v56,
          v57,
          0,
          1,
          1065353216,
          0);
      }
      PlaySoundEffectAt( /*0x4a76af*/
        &v73,
        *(_DWORD *)(this + 60),
        *(_DWORD **)(this + 36),
        *(_DWORD *)(*(_DWORD *)(this + 44) + 172),
        1,
        0);
      v34 = *(_DWORD *)(this + 44); /*0x4a76b4*/
      v3 = *(_DWORD *)(v34 + 204); /*0x4a76b7*/
      if ( v3 > 0 ) /*0x4a76bf*/
        LOBYTE(v3) = StartAudioControllerAt( /*0x4a76e8*/
                       *(_DWORD *)(*(_DWORD *)(v34 + 192)
                                 + 4
                                 * ((unsigned int)*(unsigned __int16 *)(*(_DWORD *)(this + 36) + 968)
                                  % *(_DWORD *)(v34 + 204))),
                       (int)&v70,
                       0);
      *(_DWORD *)(this + 48) = -1; /*0x4a76ed*/
    }
    else
    {
      v72 = v17; /*0x4a7701*/
      v67 = 8 - v15; /*0x4a7707*/
      v35 = MEMORY[0x8A0180][2 * v19] + v73; /*0x4a770f*/
      v36 = MEMORY[0x8A0184][2 * v19]; /*0x4a7716*/
      v70 = v35; /*0x4a772b*/
      v71 = v74 + v36; /*0x4a7733*/
      v37 = MEMORY[0x8A0180][2 * v22]; /*0x4a7737*/
      v38 = MEMORY[0x8A0184][2 * v22]; /*0x4a773e*/
      v76[0] = v73 + v37; /*0x4a774b*/
      v39 = v74 + v38; /*0x4a774f*/
      if ( !v15 ) /*0x4a7753*/
      {
        v40 = *((_DWORD *)MEMORY[0x8871E0] + 163); /*0x4a775a*/
        if ( v40 != -1 ) /*0x4a7763*/
          StartAudioControllerAt(v40, (int)&v70, 0); /*0x4a776b*/
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
          v56,
          v67,
          0,
          1,
          1065353216,
          1056964608);
      }
      v43 = MEMORY[0x8A0180][2 * v21]; /*0x4a7809*/
      v44 = v74 + MEMORY[0x8A0184][2 * v21]; /*0x4a7821*/
      v70 = v73 + v43; /*0x4a7823*/
      v71 = v44; /*0x4a782b*/
      v61 = 92; /*0x4a782f*/
      v45 = MEMORY[0x8A0184][2 * v69]; /*0x4a7838*/
      v46 = v73 + MEMORY[0x8A0180][2 * v69]; /*0x4a783f*/
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
        v49 = (int *)v66; /*0x4a787b*/
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
          v56,
          v67,
          0,
          1,
          1065353216,
          1056964608);
      }
      v50 = *(_DWORD *)(this + 56); /*0x4a78e4*/
      *(_DWORD *)(this + 48) = 1; /*0x4a78e7*/
      v3 = v50 + 1; /*0x4a78ee*/
      *(_DWORD *)(this + 56) = v3; /*0x4a78f0*/
    }
  }
  return v3; /*0x4a736a*/
}


// ==== 0x004A7900  DiskLaserClass::PointerGotInvalid  this=AbstractClass  sig=csp ====
void __thiscall DiskLaserClass::PointerGotInvalid(_DWORD *this, AbstractClass *aP1)
{
  AbstractClass *v3; // eax
  AbstractClass *v4; // eax

  if ( aP1 == (AbstractClass *)this->q024 ) /*0x4a790b*/
  {
    this->u32_30 = -1; /*0x4a790d*/
    if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10004] < *(int *)&MEMORY[0xB077F8].__pad_579C[9996] /*0x4a7948*/
      || (MEMORY[0xB077F8].__pad_579C[10001] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996])
      && *(int *)&MEMORY[0xB077F8].__pad_579C[10008] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9988] + 8))(
           &MEMORY[0xB077F8].__pad_579C[9988],
           *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10008],
           0) )
    {
      v3 = (AbstractClass *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10004])++; /*0x4a7955*/
      *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9992] + 4 * (_DWORD)v3) = this; /*0x4a7964*/
    }
  }
  if ( aP1 == (AbstractClass *)this->q028 ) /*0x4a796a*/
  {
    this->u32_30 = -1; /*0x4a796c*/
    if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10004] < *(int *)&MEMORY[0xB077F8].__pad_579C[9996] /*0x4a79a8*/
      || (MEMORY[0xB077F8].__pad_579C[10001] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996])
      && *(int *)&MEMORY[0xB077F8].__pad_579C[10008] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9988] + 8))(
           &MEMORY[0xB077F8].__pad_579C[9988],
           *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9996] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10008],
           0) )
    {
      v4 = (AbstractClass *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10004])++; /*0x4a79b5*/
      *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9992] + 4 * (_DWORD)v4) = this; /*0x4a79c4*/
    }
  }
}


// ==== 0x004A7A30  DiskLaserClass::DiskLaserClass  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::DiskLaserClass(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4a7a33*/
  *(_DWORD *)this = &DiskLaserClass::`vftable'; /*0x4a7a3a*/
  *(_DWORD *)(this + 4) = &DiskLaserClass::`vftable'; /*0x4a7a40*/
  *(_DWORD *)(this + 8) = &DiskLaserClass::`vftable'; /*0x4a7a47*/
  *(_DWORD *)(this + 12) = &vt_DiskLaserClass; /*0x4a7a4e*/
  *(_DWORD *)(this + 36) = 0; /*0x4a7a55*/
  *(_DWORD *)(this + 40) = 0; /*0x4a7a58*/
  *(_DWORD *)(this + 44) = 0; /*0x4a7a5b*/
  *(_DWORD *)(this + 48) = 0; /*0x4a7a5e*/
  *(_DWORD *)(this + 52) = 0; /*0x4a7a61*/
  *(_DWORD *)(this + 56) = 0; /*0x4a7a64*/
  *(_DWORD *)(this + 60) = 0; /*0x4a7a67*/
  if ( MEMORY[0x8A0218] < MEMORY[0x8A0210] /*0x4a7a9e*/
    || (MEMORY[0x8A0215] || !MEMORY[0x8A0210])
    && MEMORY[0x8A021C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8A0208] + 8))(
         &MEMORY[0x8A0208],
         MEMORY[0x8A0210] + MEMORY[0x8A021C],
         0) )
  {
    v2 = MEMORY[0x8A0218]++; /*0x4a7aab*/
    *((_DWORD *)MEMORY[0x8A020C] + v2) = this; /*0x4a7aba*/
  }
  return this; /*0x4a7abf*/
}


// ==== 0x004A7B80  DiskLaserClass::Stat  this=DiskLaserClass  sig=csp ====
int __thiscall DiskLaserClass::Stat(void *this, AbstractClass *aP1)
{
  return AbstractClass::ProcessPower((#378 *)this); /*0x4a7b8a*/
}


// ==== 0x004A7B90  DiskLaserClass::Write  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::Write(AbstractClass *aP0, int aP1)
{
  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x4a7ba1*/
  if ( (int)Prefix_0 >= 0 ) /*0x4a7ba5*/
  {
    if ( aP0 ) /*0x4a7ba9*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x4a7bb2*/
      *(_DWORD *)aP0->__pad_0 = &DiskLaserClass::`vftable'; /*0x4a7bb7*/
      *(_DWORD *)&aP0->__pad_0[4] = &DiskLaserClass::`vftable'; /*0x4a7bbd*/
      *(_DWORD *)&aP0->__pad_0[8] = &DiskLaserClass::`vftable'; /*0x4a7bc4*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_DiskLaserClass; /*0x4a7bcb*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x4a7bdb*/
    ObjectPtr::RegisterForTracking( /*0x4a7be9*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x4a7bf7*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
  }
  return (int)Prefix_0->__pad_0; /*0x4a7bfe*/
}


// ==== 0x004A7C10  DiskLaserClass::Seek  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::Seek(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4a7c24*/
}


// ==== 0x004A7C30  DiskLaserClass::ddtor  this=DiskLaserClass  sig=csp ====
int __stdcall DiskLaserClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4a7c36*/
    return -2147467261; /*0x4a7c38*/
  *a2 = 1378929064; /*0x4a7c46*/
  a2[1] = 1206682730; /*0x4a7c4e*/
  a2[2] = -1786862915; /*0x4a7c57*/
  a2[3] = 1226661444; /*0x4a7c60*/
  return 0; /*0x4a7c3d*/
}


// ==== 0x004A7C70  DiskLaserClass::StubReturn64  this=DiskLaserClass  sig=csp ====
int DiskLaserClass::_vt12()
{
  return 64; /*0x4a7c75*/
}


// ==== 0x004A7C80  DiskLaserClass::StubReturn73  this=DiskLaserClass  sig=csp ====
int DiskLaserClass::_vt11()
{
  return 73; /*0x4a7c85*/
}


// ==== 0x004A7C90  DiskLaserClass::CopyTo  this=DiskLaserClass  sig=csp ====
DiskLaserClass *__thiscall DiskLaserClass::CopyTo(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &DiskLaserClass::`vftable'; /*0x4a7c9d*/
  *(Block + 1) = &DiskLaserClass::`vftable'; /*0x4a7ca3*/
  *(Block + 2) = &DiskLaserClass::`vftable'; /*0x4a7caa*/
  *(Block + 3) = &vt_DiskLaserClass; /*0x4a7cb1*/
  v5 = Block; /*0x4a7cbf*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0x8A0208] + 16))(&MEMORY[0x8A0208], &v5); /*0x4a7cc3*/
  if ( v3 != -1 && v3 < MEMORY[0x8A0218] && v3 < --MEMORY[0x8A0218] ) /*0x4a7cde*/
  {
    do /*0x4a7cf6*/
    {
      ++v3; /*0x4a7ce6*/
      *((_DWORD *)MEMORY[0x8A020C] + v3 - 1) = *((_DWORD *)MEMORY[0x8A020C] + v3); /*0x4a7cea*/
    }
    while ( v3 < MEMORY[0x8A0218] ); /*0x4a7cf6*/
  }
  AbstractClass::DTOR(Block); /*0x4a7cfa*/
  if ( (a2 & 1) != 0 ) /*0x4a7d04*/
    __3_YAXPAX_Z(Block); /*0x4a7d07*/
  return (DiskLaserClass *)Block; /*0x4a7d11*/
}


// ==== 0x004A7D20  _DynamicVectorClass_PAVDiskLaserClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall Dial8Class_48_::sub_4A7D20(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4a7d26*/
  *(_DWORD *)(this + 16) = 0; /*0x4a7d29*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4a7d30*/
  {
    __3_YAXPAX_Z(v2); /*0x4a7d36*/
    *(_DWORD *)(this + 4) = 0; /*0x4a7d3e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a7d41*/
  *(_DWORD *)(this + 8) = 0; /*0x4a7d44*/
}


// ==== 0x004A7D50  _DynamicVectorClass_PAVDiskLaserClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall Dial8Class_48_::sub_4A7D50(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4a7d50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4a7d65*/
  else
    return 0; /*0x4a7d57*/
}


// ==== 0x004A7D70  _VectorClass_PAVDiskLaserClass::Seek  this=VectorClass  sig=csp ====
int __thiscall Dial8Class_48_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4a7d7a*/
}


// ==== 0x004A7D80  _VectorClass_PAVDiskLaserClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall Dial8Class_48_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4a7d82*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4a7d8d*/
  {
    v3 = 0; /*0x4a7d8f*/
    if ( v2 <= 0 ) /*0x4a7d93*/
      return 1; /*0x4a7db3*/
    v4 = (_DWORD *)this->Items; /*0x4a7d95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a7d9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a7da4*/
    {
      ++v3; /*0x4a7da6*/
      ++v4; /*0x4a7da7*/
      if ( v3 >= v2 ) /*0x4a7dac*/
        return 1; /*0x4a7dac*/
    }
  }
  return 0; /*0x4a7dae*/
}


// ==== 0x004A7DC0  _VectorClass_PAVDiskLaserClass::Release  this=VectorClass  sig=csp ====
char __thiscall Dial8Class_48_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a7dcc*/
  {
    this->IsInitialized = 0; /*0x4a7dd6*/
    if ( a3 ) /*0x4a7ddc*/
      v4 = a3; /*0x4a7df2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a7dee*/
    this->IsInitialized = 1; /*0x4a7df6*/
    if ( v4 ) /*0x4a7dfa*/
    {
      if ( this->Items ) /*0x4a7e05*/
      {
        v6 = this->Capacity; /*0x4a7e0c*/
        if ( a2 < v6 ) /*0x4a7e11*/
          v6 = a2; /*0x4a7e13*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4a7e19*/
          ++i; /*0x4a7e1e*/
        if ( this->IsAllocated ) /*0x4a7e2b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a7e36*/
          this->Items = 0; /*0x4a7e3e*/
        }
      }
      this->Items = v4; /*0x4a7e47*/
      this->Capacity = a2; /*0x4a7e4f*/
      this->IsAllocated = a3 == 0; /*0x4a7e52*/
      return 1; /*0x4a7e58*/
    }
    else
    {
      return 0; /*0x4a7dff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4a7e62*/
    return 1; /*0x4a7e68*/
  }
}


// ==== 0x004A7E70  _VectorClass_PAVDiskLaserClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall Dial8Class_48_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4a7e7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4a7e83*/
    *(_DWORD *)(this + 4) = 0; /*0x4a7e8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a7e8e*/
  *(_DWORD *)(this + 8) = 0; /*0x4a7e91*/
}


// ==== 0x004A7EA0  _VectorClass_PAVDiskLaserClass::Read  this=VectorClass  sig=csp ====
int __thiscall Dial8Class_48_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4a7ea0*/
    return 0; /*0x4a7ea8*/
  v3 = *(_DWORD *)(this + 8); /*0x4a7eae*/
  result = 0; /*0x4a7eb1*/
  if ( v3 <= 0 ) /*0x4a7eb5*/
    return -1; /*0x4a7ecc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4a7ebb*/
  {
    if ( ++result >= v3 ) /*0x4a7eca*/
      return -1; /*0x4a7eca*/
  }
  return result; /*0x4a7eaa*/
}


// ==== 0x004A7EE0  _VectorClass_PAVDiskLaserClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall Dial8Class_48_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4a7ee0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4a7ef5*/
  else
    return 0; /*0x4a7ee7*/
}


// ==== 0x004A7F00  _DynamicVectorClass_PAVDiskLaserClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall Dial8Class_48_::sub_4A7F00(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a7f0c*/
  {
    this->IsInitialized = 0; /*0x4a7f12*/
    if ( a3 ) /*0x4a7f18*/
      v4 = a3; /*0x4a7f2e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a7f2a*/
    this->IsInitialized = 1; /*0x4a7f32*/
    if ( !v4 ) /*0x4a7f36*/
      return 0; /*0x4a7faa*/
    if ( this->Items ) /*0x4a7f38*/
    {
      v5 = this->q008; /*0x4a7f3f*/
      if ( a2 < v5 ) /*0x4a7f44*/
        v5 = a2; /*0x4a7f46*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4a7f4c*/
        ++i; /*0x4a7f51*/
      if ( this->IsAllocated ) /*0x4a7f5e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a7f69*/
        this->Items = 0; /*0x4a7f71*/
      }
    }
    this->Items = v4; /*0x4a7f7a*/
    this->q008 = a2; /*0x4a7f82*/
    this->IsAllocated = a3 == 0; /*0x4a7f85*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4a7f8e*/
  }
  v7 = this->q008; /*0x4a7f91*/
  if ( v7 < this->Items ) /*0x4a7f99*/
    this->Items = v7; /*0x4a7f9b*/
  return 1; /*0x4a7f9e*/
}


// ==== 0x004A7FB0  _DynamicVectorClass_PAVDiskLaserClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall Dial8Class_48_::sub_4A7FB0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4a7fb0*/
  result = 0; /*0x4a7fb3*/
  if ( v2 <= 0 ) /*0x4a7fb8*/
    return -1; /*0x4a7fcf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4a7fbe*/
  {
    if ( ++result >= v2 ) /*0x4a7fcd*/
      return -1; /*0x4a7fcd*/
  }
  return result; /*0x4a7fd2*/
}


// ==== 0x004A7FE0  VectorClass::AppendCopy  this=VectorClass  sig=csp ====
char __thiscall VectorClass::AppendCopy(_DWORD *this, DynamicVector *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x4a7fe3*/
  if ( this->q010 >= v3 ) /*0x4a7feb*/
  {
    if ( !this->q034 && v3 ) /*0x4a7ff6*/
      return 0; /*0x4a7ff6*/
    v4 = this->u32_14; /*0x4a7ff8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x4a8008*/
      return 0; /*0x4a800f*/
  }
  v6 = this->q010; /*0x4a8015*/
  v7 = this->Items; /*0x4a8018*/
  this->q010 = v6 + 1; /*0x4a801e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->__pad_0; /*0x4a8028*/
  return 1; /*0x4a8011*/
}


// ==== 0x004A8030  _VectorClass_PAVDiskLaserClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall Dial8Class_48_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4a8033*/
  *Block = &vt_VectorClass_DiskLaserClass; /*0x4a8036*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4a8040*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8048*/
    *(Block + 1) = 0; /*0x4a8050*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4a805b*/
  *(Block + 2) = 0; /*0x4a8061*/
  if ( (a2 & 1) != 0 ) /*0x4a8068*/
    __3_YAXPAX_Z(Block); /*0x4a806b*/
  return (VectorClass *)Block; /*0x4a8075*/
}


// ==== 0x004A8080  _DynamicVectorClass_PAVDiskLaserClass::Constructor_VectorClass_DiskLaserClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall Dial8Class_48_::Constructor_VectorClass_DiskLaserClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4a8083*/
  *Block = &vt_VectorClass_DiskLaserClass; /*0x4a8086*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4a8090*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8098*/
    *(Block + 1) = 0; /*0x4a80a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4a80ab*/
  *(Block + 2) = 0; /*0x4a80b1*/
  if ( (a2 & 1) != 0 ) /*0x4a80b8*/
    __3_YAXPAX_Z(Block); /*0x4a80bb*/
  return (DynamicVector *)Block; /*0x4a80c5*/
}


// ==== 0x004A80D0  AlwaysFindYRCD  this=-  sig=ida-proto ====
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
  wsprintfA(v14, MEMORY[0x81C4B4], a1 + 65); /*0x4a8120*/
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
      wsprintfA(v14, MEMORY[0x81C4B4], v4); /*0x4a8196*/
      if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a81ba*/
        goto LABEL_8; /*0x4a81be*/
    }
  }
  return -1; /*0x4a8257*/
}


// ==== 0x004A8270  CD::CheckDiscPresence  this=CD  sig=csp ====
char __thiscall sub_4A8270(void *this, int a2)
{
  int v2; // edi
  void *v3; // ebx
  int v4; // esi
  int YRCD; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  void *v13; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x4a8277*/
  v3 = this; /*0x4a827b*/
  v13 = 0; /*0x4a8284*/
  if ( a2 == -2 ) /*0x4a828c*/
    return 1; /*0x4a83bc*/
  if ( a2 >= 0 ) /*0x4a8294*/
    v2 = 2; /*0x4a8296*/
  v4 = MEMORY[0x89E414]; /*0x4a829b*/
  YRCD = AlwaysFindYRCD(); /*0x4a82a8*/
  if ( YRCD > -1 && (v2 == YRCD || v2 == -1) ) /*0x4a82b9*/
  {
    v13 = (void *)v4; /*0x4a82bd*/
    if ( v4 ) /*0x4a82c1*/
    {
LABEL_30:
      if ( v2 > -1 && dword_81FFB0 != v2 ) /*0x4a8393*/
      {
        dword_81FFB0 = v2; /*0x4a8395*/
        return (*(int (__thiscall **)(void *, int))(*(_DWORD *)v3 + 8))(v3, v2); /*0x4a83aa*/
      }
      return 1; /*0x4a8393*/
    }
  }
  if ( MEMORY[0x89E418] ) /*0x4a82cf*/
  {
    if ( MEMORY[0x89E418] != MEMORY[0x89E414] ) /*0x4a82d7*/
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
    v7 = MEMORY[0xA8E950]; /*0x4a82fe*/
    v8 = 0; /*0x4a8304*/
    if ( MEMORY[0xA8E950] > 0 ) /*0x4a8308*/
    {
      while ( 1 ) /*0x4a830c*/
      {
        if ( v7 ) /*0x4a830c*/
        {
          v9 = MEMORY[0xA8E954]; /*0x4a830e*/
          if ( MEMORY[0xA8E954] == v7 ) /*0x4a8315*/
          {
            v9 = 0; /*0x4a8317*/
            MEMORY[0xA8E954] = 0; /*0x4a8319*/
          }
          v10 = MEMORY[0xA8E8E8][v9]; /*0x4a831e*/
          MEMORY[0xA8E954] = v9 + 1; /*0x4a8326*/
        }
        else
        {
          v10 = -1; /*0x4a832d*/
        }
        v11 = AlwaysFindYRCD(); /*0x4a8334*/
        if ( v11 > -1 && (v2 == v11 || v2 == -1 || v2 == -2) ) /*0x4a834a*/
          break; /*0x4a834a*/
        v7 = MEMORY[0xA8E950]; /*0x4a834c*/
        if ( ++v8 >= MEMORY[0xA8E950] ) /*0x4a8355*/
          goto LABEL_26; /*0x4a8355*/
      }
      v13 = (void *)v10; /*0x4a8359*/
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
  while ( (*(unsigned __int8 (__thiscall **)(void *, int))(this->q004)(this, v2) ); /*0x4a8371*/
  return 0; /*0x4a83a3*/
}


// ==== 0x004A83D0  sub_4A83D0  this=-  sig=csp ====
bool __stdcall sub_4A83D0(INIClass *aP0)
{
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF

  sprintf(Buffer, &stru_81FFCC, aP0); /*0x4a83e5*/
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
  MEMORY[0x8A03E8] = 0; /*0x4a8422*/
  MEMORY[0x8A03EC] = 0; /*0x4a8427*/
  MEMORY[0x8A03F0] = 0; /*0x4a842c*/
  MEMORY[0x8A03F4] = 0; /*0x4a8431*/
  return 0; /*0x4a8436*/
}


// ==== 0x004A8440  sub_4A8440  this=-  sig=ida-proto ====
void sub_4A8440()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a844c*/
  MEMORY[0x8A0400] = Math::Sqrt(v0 + v0); /*0x4a845e*/
}


// ==== 0x004A8470  sub_4A8470  this=-  sig=ida-proto ====
void sub_4A8470()
{
  MEMORY[0x8A0738] = MEMORY[0x8A0400] / 60.0; /*0x4a847c*/
}


// ==== 0x004A8490  sub_4A8490  this=-  sig=ida-proto ====
void sub_4A8490()
{
  MEMORY[0x8A0628] = 1.0 / MEMORY[0x8A0738]; /*0x4a849c*/
}


// ==== 0x004A84B0  sub_4A84B0  this=-  sig=ida-proto ====
void sub_4A84B0()
{
  MEMORY[0x8A0620] = 0.0174532925199433 * 45.0; /*0x4a84bc*/
}


// ==== 0x004A84D0  sub_4A84D0  this=-  sig=ida-proto ====
void sub_4A84D0()
{
  MEMORY[0x8A0408] = 0.0174532925199433 * 60.0; /*0x4a84dc*/
}


// ==== 0x004A84F0  sub_4A84F0  this=-  sig=ida-proto ====
void sub_4A84F0()
{
  MEMORY[0x8A03D8] = 0.0174532925199433 * 90.0; /*0x4a84fc*/
}


// ==== 0x004A8510  sub_4A8510  this=-  sig=ida-proto ====
__int64 sub_4A8510()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A03D8] - MEMORY[0x8A0408]); /*0x4a8522*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0400] * 0.5); /*0x4a8536*/
  MEMORY[0x8A0740] = result; /*0x4a853b*/
  return result; /*0x4a8540*/
}


// ==== 0x004A8550  sub_4A8550  this=-  sig=ida-proto ====
void sub_4A8550()
{
  MEMORY[0x8A0410] = Math::ArcTan((double)MEMORY[0x8A0740] * 0.00390625); /*0x4a8567*/
}


// ==== 0x004A8580  sub_4A8580  this=-  sig=ida-proto ====
void sub_4A8580()
{
  MEMORY[0x8A0610] = Math::ArcTan((double)(2 * MEMORY[0x8A0740]) / MEMORY[0x8A0400]); /*0x4a85a2*/
}


// ==== 0x004A85B0  sub_4A85B0  this=-  sig=ida-proto ====
__int64 sub_4A85B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0740]) + 0.5); /*0x4a85cb*/
  MEMORY[0x8A0730] = result; /*0x4a85d0*/
  return result; /*0x4a85d6*/
}


// ==== 0x004A85E0  sub_4A85E0  this=-  sig=ida-proto ====
int sub_4A85E0()
{
  MEMORY[0x8A03F8] = 0; /*0x4a85e2*/
  return 0; /*0x4a85ee*/
}


// ==== 0x004A85F0  sub_4A85F0  this=-  sig=ida-proto ====
int sub_4A85F0()
{
  MEMORY[0x8A0600] = 0; /*0x4a85f2*/
  MEMORY[0x8A0604] = 0; /*0x4a85f7*/
  MEMORY[0x8A0608] = 0; /*0x4a85fc*/
  return 0; /*0x4a8601*/
}


// ==== 0x004A8610  sub_4A8610  this=-  sig=ida-proto ====
int sub_4A8610()
{
  MEMORY[0x8A0728] = 0; /*0x4a8615*/
  MEMORY[0x8A0720] = 128; /*0x4a861f*/
  MEMORY[0x8A0724] = 128; /*0x4a8624*/
  return 128; /*0x4a8629*/
}


// ==== 0x004A8630  sub_4A8630  this=-  sig=ida-proto ====
int sub_4A8630()
{
  _DWORD *v0; // eax
  int v1; // edx

  v0 = &MEMORY[0x8A0368]; /*0x4a8630*/
  v1 = 5; /*0x4a8635*/
  do /*0x4a866b*/
  {
    *(v0 - 1) = 0; /*0x4a863c*/
    *v0 = 0; /*0x4a863f*/
    *((_BYTE *)v0 + 4) = 1; /*0x4a8641*/
    *((_BYTE *)v0 + 5) = 0; /*0x4a8645*/
    *(v0 - 2) = &vt_VectorClass_ObjectClass; /*0x4a8648*/
    *(v0 - 2) = &vt_DynamicVectorClass_ObjectClass; /*0x4a864f*/
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

  if ( (MEMORY[0x8A03E1] & 1) == 0 ) /*0x4a868a*/
  {
    MEMORY[0x8A03E1] |= 1u; /*0x4a8691*/
    v0 = 9044956; /*0x4a8697*/
    v1 = 5; /*0x4a869c*/
    do /*0x4a86cb*/
    {
      v2 = *(void **)(v0 - 24); /*0x4a86a3*/
      v0 -= 24; /*0x4a86a6*/
      *(_DWORD *)(v0 - 4) = &vt_VectorClass_ObjectClass; /*0x4a86ab*/
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
  GadgetClass::Construct(MEMORY[0x8A06F8], 0, 0, 0, 0, 127, 1); /*0x4a86f1*/
  MEMORY[0x8A06F8][0] = (int)&vt_DisplayClass_TacticalClass; /*0x4a86fb*/
  return atexit(sub_4A8710); /*0x4a870b*/
}


// ==== 0x004A8710  sub_4A8710  this=-  sig=ida-proto ====
void __cdecl sub_4A8710()
{
  if ( (MEMORY[0x8A03E0] & 1) == 0 ) /*0x4a871a*/
  {
    MEMORY[0x8A03E0] |= 1u; /*0x4a871e*/
    GadgetClass::Dtor(MEMORY[0x8A06F8]); /*0x4a8729*/
  }
}


// ==== 0x004A8730  RadarClass::RenderSpySatellite  this=DisplayClass  sig=csp ====
_DWORD *__thiscall sub_4A8730(_DWORD *this)
{
  RadarClass::RenderMapPreview((int)this); /*0x4a8733*/
  this->q45D = MEMORY[0x8A03F8]; /*0x4a873d*/
  *((_WORD *)this + 2236) = 0; /*0x4a8745*/
  *((_WORD *)this + 2237) = 0; /*0x4a874c*/
  this->q117C = 0; /*0x4a8753*/
  this->q1180 = 0; /*0x4a8759*/
  this->q1181 = 0; /*0x4a875f*/
  *(_DWORD *)((char *)this + 4482) = MEMORY[0x8A03F8]; /*0x4a876b*/
  *((_WORD *)this + 2243) = 0; /*0x4a8774*/
  *((_WORD *)this + 2244) = 0; /*0x4a877b*/
  this->q463 = 0; /*0x4a8782*/
  this->q464 = 0; /*0x4a8788*/
  this->q1194 = 0; /*0x4a878e*/
  this->q1198 = -1; /*0x4a8794*/
  this->q119C = 0; /*0x4a879a*/
  this->q11A0 = 0; /*0x4a87a0*/
  this->q11A4 = 0; /*0x4a87a6*/
  this->q11A8 = 0; /*0x4a87ac*/
  this->q11AC = -1; /*0x4a87b2*/
  this->q11B0 = 0; /*0x4a87b8*/
  this->u8_11B1 = 0; /*0x4a87be*/
  this->u8_11B2 = 0; /*0x4a87c4*/
  this->q11B3 = 0; /*0x4a87ca*/
  this->q11B4 = 0; /*0x4a87d0*/
  this->q11B8 = -1; /*0x4a87d6*/
  this->q46F = 0; /*0x4a87dc*/
  this->ZoneIterator_X = 0; /*0x4a87e2*/
  this->q471 = 0; /*0x4a87e8*/
  this->q472 = 0; /*0x4a87ee*/
  this->q11CC = 0; /*0x4a87f4*/
  this->q11CD = 0; /*0x4a87fa*/
  this->q11CE = 0; /*0x4a8800*/
  this->q11CF = 0; /*0x4a8806*/
  this->q11D0 = 0; /*0x4a880c*/
  *((_BYTE *)this + 4561) = 0; /*0x4a8812*/
  this->q11D4 = 0; /*0x4a8818*/
  this->q11D8 = 0; /*0x4a881e*/
  this->q11DC = 0; /*0x4a8824*/
  this->q11E0 = 0; /*0x4a882a*/
  *this = &DisplayClass::`vftable'; /*0x4a8830*/
  MEMORY[0x8A072C] = 0; /*0x4a8836*/
  MEMORY[0x8A03FC] = 0; /*0x4a883b*/
  MEMORY[0x8A0418] = 0; /*0x4a8840*/
  return this; /*0x4a8847*/
}


// ==== 0x004A8850  DisplayClass::LoadTypeData  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::_vt05(int *this)
{
  int *Viewport; // eax
  int v3; // edx
  int v4; // eax
  _DWORD v6[4]; // [esp+4h] [ebp-20h] BYREF
  int v7[4]; // [esp+14h] [ebp-10h] BYREF

  MapClass::Destru_vt05(this); /*0x4a8856*/
  MEMORY[0x8A03FC] = SearchMIXFile(aPlaceShp, 0); /*0x4a886e*/
  MEMORY[0x8A072C] = SearchMIXFile(MEMORY[0x820074], 0); /*0x4a887c*/
  Viewport = Display::GetViewport(v7); /*0x4a8881*/
  v6[0] = *Viewport; /*0x4a8888*/
  v6[1] = Viewport[1]; /*0x4a888f*/
  v6[2] = Viewport[2]; /*0x4a8896*/
  v3 = Viewport[3]; /*0x4a889e*/
  v4 = *this; /*0x4a88a1*/
  v6[3] = v3; /*0x4a88a6*/
  return (*(int (__thiscall **)(int *, _DWORD *))(v4 + 168))(this, v6); /*0x4a88b0*/
}


// ==== 0x004A88C0  DisplayClass::SetSize  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::_vt07(int this)
{
  int *v2; // esi
  int result; // eax

  MapClass::Destru_vt07(this); /*0x4a88c3*/
  *(_DWORD *)(this + 4516) = 0; /*0x4a88cd*/
  *(_DWORD *)(this + 4520) = 0; /*0x4a88d3*/
  *(_DWORD *)(this + 4524) = -1; /*0x4a88d9*/
  *(_DWORD *)(this + 4476) = 0; /*0x4a88df*/
  *(_DWORD *)(this + 4536) = -1; /*0x4a88e5*/
  *(_BYTE *)(this + 4528) = 0; /*0x4a88eb*/
  *(_BYTE *)(this + 4559) = 0; /*0x4a88f1*/
  *(_BYTE *)(this + 4560) = 0; /*0x4a88f7*/
  *(_BYTE *)(this + 4529) = 0; /*0x4a88fd*/
  *(_BYTE *)(this + 4530) = 0; /*0x4a8903*/
  v2 = MEMORY[0x8A0360]; /*0x4a8909*/
  do /*0x4a891e*/
  {
    result = (*(int (__thiscall **)(int *))(*v2 + 12))(v2); /*0x4a8912*/
    v2 += 6; /*0x4a8915*/
  }
  while ( (int)v2 < (int)&MEMORY[0x8A03D8] ); /*0x4a891e*/
  return result; /*0x4a8920*/
}


// ==== 0x004A8930  DisplayClass::ddtor  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::_vt08(void *this)
{
  char result; // al

  VectorCursor_uint_DynamicVectorClass_uint____13::Get(); /*0x4a8933*/
  result = MEMORY[0xA8ED6B]; /*0x4a8938*/
  if ( !MEMORY[0xA8ED6B] ) /*0x4a893f*/
  {
    Hash::Reset(MEMORY[0x8A06F8]); /*0x4a8946*/
    return (*(int (__thiscall **)(void *, int *))(this->q030)(this, MEMORY[0x8A06F8]); /*0x4a8954*/
  }
  return result; /*0x4a8957*/
}


// ==== 0x004A8960  DisplayClass::SetViewDimensions  this=DisplayClass  sig=csp ====
void __stdcall TacticalClass::SetViewDimensions(int *a1)
{
  void *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  void *v4; // esi
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // esi
  _DWORD v9[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v10; // [esp+24h] [ebp-4h]

  Debug::Log(); /*0x4a897e*/
  MEMORY[0x87F7E8][7662] = *a1; /*0x4a8987*/
  MEMORY[0x87F7E8][7663] = a1[1]; /*0x4a8990*/
  MEMORY[0x87F7E8][7664] = a1[2]; /*0x4a8999*/
  MEMORY[0x87F7E8][7665] = a1[3]; /*0x4a89a1*/
  if ( MEMORY[0x87F7E8][7887] ) /*0x4a89b2*/
  {
    TacticalClass::SetViewportPosition(MEMORY[0x87F7E8][7887], &MEMORY[0x87F7E8][7662]); /*0x4a89bd*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 12))(MEMORY[0x87F7E8][8086]); /*0x4a89ca*/
    if ( MEMORY[0x87F7E8][8087] ) /*0x4a89d3*/
    {
      Debug::Log(); /*0x4a89da*/
      v1 = (void *)MEMORY[0x87F7E8][8087]; /*0x4a89df*/
      if ( MEMORY[0x87F7E8][8087] ) /*0x4a89ea*/
      {
        Stream::GetField((_DWORD *)MEMORY[0x87F7E8][8087]); /*0x4a89ee*/
        __3_YAXPAX_Z(v1); /*0x4a89f4*/
      }
      MEMORY[0x87F7E8][8087] = 0; /*0x4a89fc*/
    }
    v2 = (_DWORD *)__2_YAPAXI_Z(48); /*0x4a8a04*/
    if ( v2 ) /*0x4a8a0e*/
      v3 = BSurface::ConstructEx( /*0x4a8a3a*/
             v2,
             MEMORY[0x87F7E8][7662],
             MEMORY[0x87F7E8][7663],
             MEMORY[0x87F7E8][7664],
             MEMORY[0x87F7E8][7665]);
    else
      v3 = 0; /*0x4a8a41*/
    MEMORY[0x87F7E8][8087] = v3; /*0x4a8a43*/
    v3[9] = 0x8000; /*0x4a8a48*/
    Debug::Log(); /*0x4a8a61*/
    if ( MEMORY[0x87E8A4] ) /*0x4a8a70*/
    {
      Debug::Log(); /*0x4a8a77*/
      v4 = MEMORY[0x87E8A4]; /*0x4a8a7c*/
      if ( MEMORY[0x87E8A4] ) /*0x4a8a87*/
      {
        StreamObj::Release(MEMORY[0x87E8A4]); /*0x4a8a8b*/
        __3_YAXPAX_Z(v4); /*0x4a8a91*/
      }
      MEMORY[0x87E8A4] = 0; /*0x4a8a99*/
    }
    v5 = (int *)__2_YAPAXI_Z(48); /*0x4a8aa1*/
    if ( v5 ) /*0x4a8aab*/
      MEMORY[0x87E8A4] = BSurface::Construct( /*0x4a8adc*/
                           v5,
                           MEMORY[0x87F7E8][7662],
                           MEMORY[0x87F7E8][7663],
                           MEMORY[0x87F7E8][7664],
                           MEMORY[0x87F7E8][7665]);
    else
      MEMORY[0x87E8A4] = 0; /*0x4a8ae3*/
    Debug::Log(); /*0x4a8afb*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 16))(MEMORY[0x87F7E8][8086]); /*0x4a8b0b*/
  }
  SidebarClass::LoadResources(); /*0x4a8b13*/
  v6 = MEMORY[0x87F7E8][7662]; /*0x4a8b1e*/
  v7 = MEMORY[0x87F7E8][7663]; /*0x4a8b24*/
  v8 = MEMORY[0x87F7E8][7664]; /*0x4a8b29*/
  MEMORY[0x87F7E8][33735] = MEMORY[0x87F7E8][7662]; /*0x4a8b37*/
  MEMORY[0x87F7E8][33736] = MEMORY[0x87F7E8][7663]; /*0x4a8b3d*/
  MEMORY[0x87F7E8][33737] = MEMORY[0x87F7E8][7664]; /*0x4a8b42*/
  MEMORY[0x87F7E8][33738] = MEMORY[0x87F7E8][7665]; /*0x4a8b48*/
  if ( MEMORY[0x87F7E8][7904] ) /*0x4a8b4e*/
  {
    v10 = 0; /*0x4a8b55*/
    v9[0] = 500; /*0x4a8b59*/
    v9[5] = 0; /*0x4a8b61*/
    v9[1] = MEMORY[0x87F7E8][7662]; /*0x4a8b65*/
    v9[2] = MEMORY[0x87F7E8][7663]; /*0x4a8b69*/
    v9[3] = MEMORY[0x87F7E8][7664]; /*0x4a8b6d*/
    v9[4] = MEMORY[0x87F7E8][7665]; /*0x4a8b71*/
    HashTable::Remove((int *)MEMORY[0x87F7E8][7904], 500); /*0x4a8b75*/
    CommandClass::AddAction(MEMORY[0x87F7E8][7904], (int)v9); /*0x4a8b85*/
    v7 = MEMORY[0x87F7E8][7663]; /*0x4a8b8a*/
    v6 = MEMORY[0x87F7E8][7662]; /*0x4a8b8f*/
    v8 = MEMORY[0x87F7E8][7664]; /*0x4a8b95*/
  }
  MessageListClass::Init((#474 *)&MEMORY[0x87F7E8][536862], v6 + 3, v7, 6, 98, 14, -1, -1, 0, 20, 98, v8 - 6); /*0x4a8bb8*/
  TacticalClass::processInput((int **)&MEMORY[0x87F7E8][536862], MEMORY[0x87F7E8][7664]); /*0x4a8bc9*/
  Debug::Log(); /*0x4a8bd3*/
}


// ==== 0x004A8BF0  Mouse::SetBounds  this=DisplayClass  sig=csp ====
int __thiscall Mouse::SetBounds(int this, IUnknown *aP1)
{
  int result; // eax
  __int16 v4; // cx
  Tactical *v5; // esi
  bool v6; // zf
  int v7; // eax
  __int16 v8; // cx
  __int16 v9; // [esp+8h] [ebp-8h] BYREF
  __int16 v10; // [esp+Ah] [ebp-6h]

  result = *(_DWORD *)(this + 4476); /*0x4a8bf7*/
  if ( result ) /*0x4a8bff*/
  {
    v4 = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a8c16*/
    v9 = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a8c1f*/
    v10 = v4; /*0x4a8c24*/
    LOBYTE(result) = MapClass::SetCellFlagsAlongPath((__int16 **)this, (IUnknown *)&v9, 0); /*0x4a8c38*/
  }
  v5 = (Tactical *)aP1; /*0x4a8c3d*/
  v6 = aP1 == 0; /*0x4a8c47*/
  *(_DWORD *)(this + 4472) = *(_DWORD *)&MEMORY[0x89F690].__pad_BC0[424]; /*0x4a8c49*/
  if ( v6 ) /*0x4a8c4f*/
  {
    *(_DWORD *)(this + 4476) = 0; /*0x4a8d1f*/
  }
  else
  {
    if ( (MEMORY[0x89F690].__pad_DFC[396] & 1) == 0 ) /*0x4a8c5c*/
    {
      MEMORY[0x89F690].__pad_DFC[396] |= 1u; /*0x4a8c68*/
      atexit(nullsub_10); /*0x4a8c6e*/
    }
    qmemcpy(&MEMORY[0x89F690].__pad_BC0[460], v5, 0x1E0u); /*0x4a8c85*/
    *(_DWORD *)(this + 4476) = &MEMORY[0x89F690].__pad_BC0[460]; /*0x4a8c8f*/
    v7 = *CoordList::GetBounds(&aP1, (__int16 *)&MEMORY[0x89F690].__pad_BC0[460]); /*0x4a8c9e*/
    v9 = v7 - 1; /*0x4a8ca6*/
    v10 = HIWORD(v7) - 1; /*0x4a8cab*/
    LOWORD(aP1) = (__int16)(1 - v7) / 2; /*0x4a8cc4*/
    HIWORD(aP1) = (__int16)(1 - HIWORD(v7)) / 2; /*0x4a8cd1*/
    v8 = (__int16)aP1; /*0x4a8cd6*/
    *(_DWORD *)(this + 4472) = aP1; /*0x4a8cda*/
    LOWORD(v7) = *(_WORD *)(this + 4474) + *(_WORD *)(this + 4470); /*0x4a8cee*/
    LOWORD(aP1) = v8 + *(_WORD *)(this + 4468); /*0x4a8cf8*/
    HIWORD(aP1) = v7; /*0x4a8cfd*/
    LOBYTE(result) = MapClass::SetCellFlagsAlongPath((__int16 **)this, (IUnknown *)&aP1, (_WORD *)1); /*0x4a8d11*/
  }
  return result; /*0x4a8d17*/
}


// ==== 0x004A8D40  nullsub_10  this=-  sig=ida-proto ====
void __cdecl nullsub_10()
{
  ; /*0x4a8d40*/
}


// ==== 0x004A8D50  MIXClass::CopyHeader  this=MouseClass  sig=csp ====
int __thiscall MIXClass::CopyHeader(int this, IUnknown *aP1)
{
  int result; // eax
  __int16 v4; // cx
  IUnknown *v5; // esi
  bool v6; // zf
  int v7; // eax
  __int16 v8; // cx
  __int16 v9; // [esp+8h] [ebp-8h] BYREF
  __int16 v10; // [esp+Ah] [ebp-6h]

  result = *(_DWORD *)(this + 4492); /*0x4a8d57*/
  if ( result ) /*0x4a8d5f*/
  {
    v4 = *(_WORD *)(this + 4484) + *(_WORD *)(this + 4488); /*0x4a8d76*/
    v9 = *(_WORD *)(this + 4482) + *(_WORD *)(this + 4486); /*0x4a8d7f*/
    v10 = v4; /*0x4a8d84*/
    LOBYTE(result) = BuildingClass::MarkExitPath((__int16 **)this, &v9, 0); /*0x4a8d98*/
  }
  v5 = aP1; /*0x4a8d9d*/
  v6 = aP1 == 0; /*0x4a8da7*/
  *(_DWORD *)(this + 4486) = *(_DWORD *)&MEMORY[0x89F690].__pad_BC0[424]; /*0x4a8da9*/
  if ( v6 ) /*0x4a8daf*/
  {
    *(_DWORD *)(this + 4492) = 0; /*0x4a8e7f*/
  }
  else
  {
    if ( (MEMORY[0x89F690].__pad_DFC[397] & 1) == 0 ) /*0x4a8dbc*/
    {
      MEMORY[0x89F690].__pad_DFC[397] |= 1u; /*0x4a8dc8*/
      atexit(nullsub_11); /*0x4a8dce*/
    }
    qmemcpy(&MEMORY[0x89F690].__pad_BC0[72], v5, 0xC8u); /*0x4a8de5*/
    *(_DWORD *)(this + 4492) = &MEMORY[0x89F690].__pad_BC0[72]; /*0x4a8def*/
    v7 = *CoordList::GetBounds(&aP1, (__int16 *)&MEMORY[0x89F690].__pad_BC0[72]); /*0x4a8dfe*/
    v9 = v7 - 1; /*0x4a8e06*/
    v10 = HIWORD(v7) - 1; /*0x4a8e0b*/
    LOWORD(aP1) = (__int16)(1 - v7) / 2; /*0x4a8e24*/
    HIWORD(aP1) = (__int16)(1 - HIWORD(v7)) / 2; /*0x4a8e31*/
    v8 = (__int16)aP1; /*0x4a8e36*/
    *(_DWORD *)(this + 4486) = aP1; /*0x4a8e3a*/
    LOWORD(v7) = *(_WORD *)(this + 4488) + *(_WORD *)(this + 4484); /*0x4a8e4e*/
    LOWORD(aP1) = v8 + *(_WORD *)(this + 4482); /*0x4a8e58*/
    HIWORD(aP1) = v7; /*0x4a8e5d*/
    LOBYTE(result) = BuildingClass::MarkExitPath((__int16 **)this, &aP1, (_WORD *)1); /*0x4a8e71*/
  }
  return result; /*0x4a8e77*/
}


// ==== 0x004A8EA0  nullsub_11  this=-  sig=ida-proto ====
void __cdecl nullsub_11()
{
  ; /*0x4a8ea0*/
}


// ==== 0x004A8EB0  GetBuildingPlacement  this=DisplayClass  sig=csp ====
char __stdcall GetBuildingPlacement(IUnknown *aP0, int a2, DisplayClass *aP2, IUnknown *aP3)
{
  int FoundationWidth; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  char *v12; // esi
  int v13; // edi
  _DWORD *v14; // eax
  IUnknown *v15; // eax
  IUnknown *v16; // esi
  _DWORD *v17; // ecx
  __int16 v19[2]; // [esp+8h] [ebp-20h] BYREF
  int v20; // [esp+Ch] [ebp-1Ch]
  char *v21; // [esp+10h] [ebp-18h]
  int v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-Ch]
  IUnknown *aP0a; // [esp+2Ch] [ebp+4h]
  char aP2a; // [esp+34h] [ebp+Ch]
  IUnknown *aP3a; // [esp+38h] [ebp+10h]

  if ( a2 != *(_DWORD *)(HouseClass_Player.field_0 + 48) /*0x4a8f19*/
    || HouseClass_Player.__pad_5568[23223]
    || !aP2
    || LOWORD(aP3->field_0) == *(_WORD *)&stru_89E138.__pad_14B0[3600]
    && HIWORD(aP3->field_0) == *(_WORD *)&stru_89E138.__pad_14B0[3602]
    || !aP0
    || (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) != 7 )
  {
    return 1; /*0x4a905d*/
  }
  aP0a = (IUnknown *)BuildingTypeClass::GetFoundationHeight((int)aP0, 0); /*0x4a8f2c*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(aP0); /*0x4a8f30*/
  v6 = SLOWORD(aP3->field_0); /*0x4a8f35*/
  v7 = SHIWORD(aP3->field_0); /*0x4a8f38*/
  v8 = FoundationWidth; /*0x4a8f3c*/
  v9 = *(_DWORD *)&aP0->__pad_DFC[184] + 1; /*0x4a8f48*/
  v20 = v8; /*0x4a8f4b*/
  v23 = v7; /*0x4a8f54*/
  v10 = v6 - v9 + v8 + 2 * v9; /*0x4a8f58*/
  v11 = v7 - v9; /*0x4a8f5a*/
  aP2a = 0; /*0x4a8f61*/
  aP3a = (IUnknown *)(v6 - v9); /*0x4a8f66*/
  v22 = v10; /*0x4a8f6a*/
  if ( v6 - v9 < v10 ) /*0x4a8f6e*/
  {
    v12 = (char *)aP0a + 2 * v9 + v11; /*0x4a8f74*/
    v21 = v12; /*0x4a8f76*/
    do /*0x4a9048*/
    {
      v13 = v11; /*0x4a8f7c*/
      if ( v11 < (int)v12 ) /*0x4a8f7e*/
      {
        do /*0x4a9033*/
        {
          v19[0] = (__int16)aP3a; /*0x4a8f90*/
          v19[1] = v13; /*0x4a8f95*/
          if ( (__int16)aP3a < v6 || (__int16)aP3a >= v6 + v20 || (__int16)v13 < v23 || (__int16)v13 >= (int)aP0a + v23 ) /*0x4a8fb9*/
          {
            v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v19); /*0x4a8fc5*/
            v15 = (IUnknown *)Cell::IsBridge(v14); /*0x4a8fcc*/
            v16 = v15; /*0x4a8fd1*/
            if ( v15 ) /*0x4a8fd5*/
            {
              v17 = (_DWORD *)v15->field_21C; /*0x4a8fd7*/
              if ( v17[12] == a2 && *(_BYTE *)(v15->field_520 + 5455) ) /*0x4a8fec*/
                aP2a = 1; /*0x4a8ff5*/
              if ( HouseClass_Player.__pad_5568[8112] /*0x4a900e*/
                && (unsigned __int8)HouseClass::IsAlliedWith(v17, *(IUnknown **)&HouseClass_Array->__pad_0[4 * a2]) )
              {
                if ( *(_BYTE *)(v16->field_520 + 5456) ) /*0x4a901d*/
                  aP2a = 1; /*0x4a9027*/
              }
            }
          }
          v12 = v21; /*0x4a902c*/
          ++v13; /*0x4a9030*/
        }
        while ( v13 < (int)v21 ); /*0x4a9033*/
        v10 = v22; /*0x4a9039*/
      }
      aP3a = (IUnknown *)((char *)aP3a + 1); /*0x4a9044*/
    }
    while ( (int)aP3a < v10 ); /*0x4a9048*/
  }
  return aP2a; /*0x4a9054*/
}


// ==== 0x004A9070  ProcessDataBuildingTypeClass  this=DisplayClass  sig=csp ====
bool __stdcall ProcessDataBuildingTypeClass(_DWORD *a0, DisplayClass *aP1, DisplayClass *aP2, __int16 *a3)
{
  int FoundationHeight; // edi
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // edx
  DisplayClass *v8; // eax
  int v9; // ebp
  int v10; // edi
  _DWORD v12[2]; // [esp+10h] [ebp-1Ch] BYREF
  int GroundHeight; // [esp+18h] [ebp-14h]
  int v14; // [esp+20h] [ebp-Ch]
  DisplayClass *aP1a; // [esp+34h] [ebp+8h]
  DisplayClass *aP2a; // [esp+38h] [ebp+Ch]

  if ( aP1 != *(DisplayClass **)(HouseClass_Player.field_0 + 48) /*0x4a90c0*/
    || HouseClass_Player.__pad_5568[23223]
    || !aP2
    || *a3 == *(_WORD *)&stru_89E138.__pad_14B0[3600] && a3[1] == *(_WORD *)&stru_89E138.__pad_14B0[3602] )
  {
    return 1; /*0x4a90c0*/
  }
  if ( !a0 ) /*0x4a90cc*/
    return 1; /*0x4a90cc*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 7 ) /*0x4a90dc*/
    return 1; /*0x4a90dc*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)a0, 0); /*0x4a90ed*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(a0); /*0x4a90ef*/
  v6 = *a3; /*0x4a90f4*/
  v7 = a3[1]; /*0x4a90f7*/
  v8 = (DisplayClass *)(v6 + FoundationWidth); /*0x4a90fb*/
  v14 = v7; /*0x4a90fd*/
  v9 = v6; /*0x4a9103*/
  aP2a = v8; /*0x4a9105*/
  if ( v6 >= (int)v8 ) /*0x4a9109*/
    return 1; /*0x4a9109*/
  aP1a = (DisplayClass *)(v7 + FoundationHeight); /*0x4a9111*/
  while ( 1 ) /*0x4a9119*/
  {
    v10 = v7; /*0x4a9119*/
    if ( v7 < (int)aP1a ) /*0x4a911d*/
      break; /*0x4a911d*/
LABEL_14:
    if ( ++v9 >= (int)v8 ) /*0x4a917e*/
      return 1; /*0x4a917e*/
  }
  while ( 1 ) /*0x4a913d*/
  {
    v12[1] = ((__int16)v10 << 8) + 128; /*0x4a913d*/
    v12[0] = ((__int16)v9 << 8) + 128; /*0x4a9146*/
    GroundHeight = 0; /*0x4a914a*/
    GroundHeight = Cell::GetGroundHeight((IUnknown *)v12); /*0x4a9157*/
    if ( Cell::IsPassable((IUnknown *)v12) ) /*0x4a9161*/
      return a0[918] != 0; /*0x4a919f*/
    if ( ++v10 >= (int)aP1a ) /*0x4a9171*/
    {
      v7 = v14; /*0x4a9173*/
      v8 = aP2a; /*0x4a9177*/
      goto LABEL_14; /*0x4a9177*/
    }
  }
}


// ==== 0x004A91B0  Tactical::MouseMove  this=Tactical  sig=csp ====
_DWORD *__thiscall Tactical::MouseMove(int this, MouseClass *aP1, MouseClass *aP2)
{
  MouseClass *v3; // ebp
  bool v4; // zf
  MouseClass *v6; // eax
  IUnknown *v7; // edi
  int v8; // ebx
  MouseClass *v9; // ecx
  int v10; // eax
  void *v11; // ecx
  int *v12; // eax
  MouseClass *v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  DisplayClass *v16; // eax
  int v17; // ecx
  __int16 v19; // dx
  _WORD *v20; // eax
  __int16 v21; // dx
  int v22; // ebx
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // cx
  DisplayClass *v26; // edx
  __int16 v27; // ax
  MouseClass *v28; // [esp+10h] [ebp-14h] BYREF
  int v29; // [esp+14h] [ebp-10h] BYREF
  int v30; // [esp+18h] [ebp-Ch]
  _BYTE v31[8]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = (MouseClass *)aP2->field_0; /*0x4a91ba*/
  v4 = (unsigned __int16)aP2->field_0 == *(_WORD *)&MEMORY[0x89F690].__pad_BC0[424]; /*0x4a91bd*/
  aP2 = (MouseClass *)aP2->field_0; /*0x4a91c6*/
  if ( v4 && HIWORD(aP2) == *(_WORD *)&MEMORY[0x89F690].__pad_BC0[426] ) /*0x4a91dc*/
  {
    v6 = (MouseClass *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4a91ef*/
                         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                         &v29);
    v7 = *(IUnknown **)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x4a91f2*/
    v8 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x4a91f8*/
    v9 = v6; /*0x4a91fe*/
    v10 = v6->field_0; /*0x4a9200*/
    v11 = v9->field_4; /*0x4a9204*/
    if ( v10 < *(int *)&MEMORY[0x87F8E4].__pad_5568[8532] /*0x4a9223*/
      || v10 >= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540]
      || (int)v11 < *(int *)&MEMORY[0x87F8E4].__pad_5568[8536]
      || (int)v11 >= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544] )
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4a9284*/
                        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                        v31);
      v15 = v14[1]; /*0x4a9292*/
      v29 = *v14 - (_DWORD)v7; /*0x4a9295*/
      v30 = v15 - v8; /*0x4a929f*/
      v3 = (MouseClass *)*Tactical::PixelToCell( /*0x4a92af*/
                            *(int *)&MEMORY[0x87F8E4].__pad_5568[9432],
                            (AbstractClass *)&aP2,
                            (IUnknown *)&v29);
    }
    else
    {
      v12 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4a9232*/
                     *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                     v31);
      v29 = *v12; /*0x4a9237*/
      v30 = v12[1]; /*0x4a924d*/
      v13 = (MouseClass *)*TacticalClass::PixelToCellCheck(&v28, &v29); /*0x4a9256*/
      v28 = v13; /*0x4a925f*/
      if ( v13 == *(MouseClass **)&MEMORY[0x89F690].__pad_BC0[424] ) /*0x4a9263*/
        goto LABEL_11; /*0x4a9263*/
      v3 = v13; /*0x4a9273*/
    }
    aP2 = v3; /*0x4a92b1*/
  }
LABEL_11:
  v16 = *(DisplayClass **)(this + 4476); /*0x4a92b5*/
  if ( v16 ) /*0x4a92bd*/
  {
    if ( !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x4a92e3*/
    {
      v19 = HIWORD(aP2) + *(_WORD *)(this + 4474); /*0x4a92f3*/
      LOWORD(v28) = (_WORD)v3 + *(_WORD *)(this + 4472); /*0x4a92fb*/
      HIWORD(v28) = v19; /*0x4a9301*/
      v20 = UI_Move(&v29, &v28, (int)v16); /*0x4a931e*/
      v21 = v20[1] - *(_WORD *)(this + 4474); /*0x4a9331*/
      LOWORD(aP2) = *v20 - *(_WORD *)(this + 4472); /*0x4a9338*/
      HIWORD(aP2) = v21; /*0x4a933d*/
      v3 = aP2; /*0x4a9342*/
    }
    v4 = (_WORD)v3 == *(_WORD *)(this + 4468); /*0x4a9346*/
    aP2 = v3; /*0x4a934d*/
    if ( v4 && HIWORD(v3) == *(_WORD *)(this + 4470) ) /*0x4a935f*/
    {
      aP1->field_0 = (int)v3; /*0x4a9367*/
      return &aP1->field_0; /*0x4a9361*/
    }
    else
    {
      v22 = *(_DWORD *)(this + 4468); /*0x4a9377*/
      if ( *(_DWORD *)(this + 4476) ) /*0x4a9371*/
      {
        if ( v3 != *(MouseClass **)(this + 4468) /*0x4a93b0*/
          && (*(_WORD *)(this + 4468) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[424]
           || *(_WORD *)(this + 4470) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[426]) )
        {
          v23 = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a93c7*/
          LOWORD(aP2) = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a93d0*/
          HIWORD(aP2) = v23; /*0x4a93d5*/
          MapClass::SetCellFlagsAlongPath((__int16 **)this, (IUnknown *)&aP2, 0); /*0x4a93e9*/
        }
        if ( v3 != *(MouseClass **)&MEMORY[0x89F690].__pad_BC0[424] ) /*0x4a93f5*/
        {
          v24 = *(_WORD *)(this + 4472) + (_WORD)v3; /*0x4a940a*/
          HIWORD(aP2) = HIWORD(v3) + *(_WORD *)(this + 4474); /*0x4a9414*/
          LOWORD(aP2) = v24; /*0x4a941b*/
          MapClass::SetCellFlagsAlongPath((__int16 **)this, (IUnknown *)&aP2, (_WORD *)1); /*0x4a942f*/
        }
      }
      *(_DWORD *)(this + 4468) = v3; /*0x4a9434*/
      v25 = *(_WORD *)(this + 4472) + (_WORD)v3; /*0x4a944b*/
      HIWORD(aP2) = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a9452*/
      v26 = *(DisplayClass **)(this + 4476); /*0x4a9457*/
      LOWORD(aP2) = v25; /*0x4a945d*/
      *(_BYTE *)(this + 4480) = GetBuildingPlacement( /*0x4a9485*/
                                  *(_DWORD **)(this + 4520),
                                  *(_DWORD *)(this + 4524),
                                  (int)v26,
                                  (__int16 *)&aP2);
      v27 = *(_WORD *)(this + 4474) + *(_WORD *)(this + 4470); /*0x4a94a0*/
      LOWORD(aP2) = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a94a7*/
      HIWORD(aP2) = v27; /*0x4a94b0*/
      *(_BYTE *)(this + 4481) = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                  *(_DWORD **)(this + 4520),
                                  *(_DWORD *)(this + 4524),
                                  *(_DWORD *)(this + 4476),
                                  (__int16 *)&aP2);
      aP1->field_0 = v22; /*0x4a94e6*/
      return &aP1->field_0; /*0x4a94e0*/
    }
  }
  else
  {
    v17 = *(_DWORD *)(this + 4468); /*0x4a92bf*/
    *(_DWORD *)(this + 4468) = v3; /*0x4a92c9*/
    aP1->field_0 = v17; /*0x4a92d2*/
    return &aP1->field_0; /*0x4a92c5*/
  }
}


// ==== 0x004A94F0  CoordList::GetBounds  this=MouseClass  sig=csp ====
_DWORD *__stdcall CoordList::GetBounds(IUnknown *aP0, __int16 *a1)
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

  v2 = a1; /*0x4a94f1*/
  v3 = 512; /*0x4a94fa*/
  v4 = -512; /*0x4a94ff*/
  v5 = 512; /*0x4a9507*/
  v6 = -512; /*0x4a9509*/
  v12 = 0; /*0x4a950b*/
  if ( !a1 ) /*0x4a9515*/
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
    aP0->field_0 = v12; /*0x4a9570*/
    return &aP0->field_0; /*0x4a957f*/
  }
  HIWORD(v12) = v10 + 1; /*0x4a9582*/
  aP0->field_0 = v12; /*0x4a9592*/
  return &aP0->field_0; /*0x4a9578*/
}


// ==== 0x004A95A0  MapClass::SetCellFlagsAlongPath  this=DisplayClass  sig=csp ====
char __thiscall MapClass::SetCellFlagsAlongPath(__int16 **this, IUnknown *aP1, _WORD *a2)
{
  IUnknown *v3; // ebp
  _DWORD *v5; // eax
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v3 = aP1; /*0x4a95a2*/
  LOWORD(v5) = aP1->field_0; /*0x4a95aa*/
  if ( LOWORD(aP1->field_0) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[424] /*0x4a95c2*/
    || HIWORD(aP1->field_0) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[426] )
  {
    v6 = this->q117C; /*0x4a95c4*/
    v7 = (char)a2; /*0x4a95ca*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a95db*/
    {
      v8 = v6; /*0x4a95dd*/
      v6 += 2; /*0x4a95df*/
      v9 = *v8; /*0x4a95e2*/
      LOWORD(v8) = HIWORD(v3->field_0) + v8[1]; /*0x4a95ed*/
      LOWORD(a2) = LOWORD(v3->field_0) + v9; /*0x4a95f1*/
      HIWORD(a2) = (_WORD)v8; /*0x4a95f6*/
      aP1 = (IUnknown *)a2; /*0x4a9603*/
      LOBYTE(v5) = LayerClass::CoordinatesLegal(this, (IUnknown *)&aP1); /*0x4a960a*/
      if ( (_BYTE)v5 ) /*0x4a9611*/
      {
        v5 = CellCoord::To_CellObj(this, (__int16 *)&aP1); /*0x4a961a*/
        v10 = v5[75]; /*0x4a961f*/
        if ( v7 ) /*0x4a9627*/
          v5[75] = v10 | 2; /*0x4a962c*/
        else
          v5[75] = v10 & 0xFFFFFFFD; /*0x4a9637*/
      }
    }
  }
  return (char)v5; /*0x4a963f*/
}


// ==== 0x004A9650  BuildingClass::MarkExitPath  this=MouseClass  sig=csp ====
char __thiscall sub_4A9650(__int16 **this, _WORD *a2, _WORD *a3)
{
  _WORD *v3; // ebp
  _DWORD *v5; // eax
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v3 = a2; /*0x4a9652*/
  LOWORD(v5) = *a2; /*0x4a965a*/
  if ( *(_DWORD *)a2 != MEMORY[0x8A03F8] ) /*0x4a9665*/
  {
    v6 = this->q463; /*0x4a9674*/
    v7 = (char)a3; /*0x4a967a*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a968b*/
    {
      v8 = v6; /*0x4a968d*/
      v6 += 2; /*0x4a968f*/
      v9 = *v8; /*0x4a9692*/
      LOWORD(v8) = v3[1] + v8[1]; /*0x4a969d*/
      LOWORD(a3) = *v3 + v9; /*0x4a96a1*/
      HIWORD(a3) = (_WORD)v8; /*0x4a96a6*/
      a2 = a3; /*0x4a96b3*/
      LOBYTE(v5) = LayerClass::CoordinatesLegal(this, (__int16 *)&a2); /*0x4a96ba*/
      if ( (_BYTE)v5 ) /*0x4a96c1*/
      {
        v5 = CellCoord::To_CellObj(this, (__int16 *)&a2); /*0x4a96ca*/
        v10 = v5[75]; /*0x4a96cf*/
        if ( v7 ) /*0x4a96d7*/
          v5[75] = v10 | 4; /*0x4a96dc*/
        else
          v5[75] = v10 & 0xFFFFFFFB; /*0x4a96e7*/
      }
    }
  }
  return (char)v5; /*0x4a96ef*/
}


// ==== 0x004A9700  DisplayClass::Update  this=DisplayClass  sig=csp ====
void __thiscall DisplayClass::Update(int *this, PowerClass *aP1, int a3)
{
  VectorCursor_uint_DynamicVectorClass_uint____13::Count(this, (int)aP1, a3); /*0x4a970a*/
}


// ==== 0x004A9720  Targeting::Readd  this=Targeting  sig=csp ====
void __stdcall Targeting::Readd(IUnknown *aP0)
{
  int v1; // eax
  int v2; // edi

  if ( aP0 ) /*0x4a9728*/
  {
    if ( *(_DWORD *)&aP0->__pad_8C[8] != -1 ) /*0x4a9731*/
      RemoveTarget(aP0); /*0x4a9734*/
    v1 = (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 120))(aP0); /*0x4a973d*/
    v2 = v1; /*0x4a9740*/
    if ( v1 != -1 && DisplayClass::RenderStatusText(24 * v1 + 9044832, aP0, v1 == 2) ) /*0x4a9759*/
      *(_DWORD *)&aP0->__pad_8C[8] = v2; /*0x4a9762*/
  }
}


// ==== 0x004A9770  RemoveTarget  this=-  sig=csp ====
void __stdcall RemoveTarget(IUnknown *aP0)
{
  IUnknown *v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  char *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx

  v1 = aP0; /*0x4a9772*/
  if ( aP0 ) /*0x4a9778*/
  {
    v2 = *(_DWORD *)&aP0->__pad_8C[8]; /*0x4a977e*/
    if ( v2 != -1 ) /*0x4a9787*/
    {
      v3 = 3 * v2; /*0x4a978d*/
      v4 = 8 * v3 + 9044832; /*0x4a979b*/
      v5 = (*(int (__thiscall **)(int, IUnknown **))(*(_DWORD *)&stru_89E138.__pad_14B0[8 * v3 + 3448] + 16))(v4, &aP0); /*0x4a97a9*/
      if ( v5 != -1 ) /*0x4a97af*/
      {
        v6 = *(_DWORD *)(v4 + 16); /*0x4a97b1*/
        if ( v5 < v6 ) /*0x4a97b6*/
        {
          v7 = v6 - 1; /*0x4a97b8*/
          for ( *(_DWORD *)(v4 + 16) = v7; /*0x4a97be*/
                v5 < *(_DWORD *)(v4 + 16);
                *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v5) )
          {
            ++v5; /*0x4a97c3*/
          }
          *(_DWORD *)&v1->__pad_8C[8] = -1; /*0x4a97d2*/
        }
      }
      if ( *(_DWORD *)&v1->__pad_8C[8] != -1 ) /*0x4a97e3*/
      {
        v8 = &stru_89E138.__pad_14B0[3464]; /*0x4a97e5*/
        do /*0x4a982a*/
        {
          while ( 1 ) /*0x4a97ea*/
          {
            v9 = *((_DWORD *)v8 - 4); /*0x4a97ea*/
            aP0 = v1; /*0x4a97f4*/
            v10 = (*(int (__thiscall **)(char *, IUnknown **))(v9 + 16))(v8 - 16, &aP0); /*0x4a97f9*/
            if ( v10 == -1 || v10 >= *(_DWORD *)v8 ) /*0x4a9805*/
              break; /*0x4a9805*/
            v11 = *(_DWORD *)v8 - 1; /*0x4a9807*/
            for ( *(_DWORD *)v8 = v11; /*0x4a980c*/
                  v10 < *(_DWORD *)v8;
                  *(_DWORD *)(*((_DWORD *)v8 - 3) + 4 * v10 - 4) = *(_DWORD *)(*((_DWORD *)v8 - 3) + 4 * v10) )
            {
              ++v10; /*0x4a9811*/
            }
          }
          v8 += 24; /*0x4a9821*/
        }
        while ( (int)v8 < (int)&stru_89E138.__pad_14B0[3584] ); /*0x4a982a*/
        *(_DWORD *)&v1->__pad_8C[8] = -1; /*0x4a982c*/
      }
    }
  }
}


// ==== 0x004A9840  DisplayClass::SetCoordVisible  this=DisplayClass  sig=csp ====
bool __stdcall DisplayClass::SetCoordVisible(IUnknown *aP0, MouseClass *aP1, char a3)
{
  if ( aP1->field_0 ) /*0x4a9848*/
  {
    if ( !a3 ) /*0x4a9859*/
      return DisplayClass::GetCoordDelta(*(_DWORD **)&stru_87C374.__pad_579C[22548], (AbstractClass *)aP0) != -1; /*0x4a9875*/
  }
  else if ( !a3 ) /*0x4a9850*/
  {
    return 0; /*0x4a9854*/
  }
  DisplayClass::ScrollTacticalView(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP0, (IUnknown *)aP1->field_0); /*0x4a9884*/
  return 1; /*0x4a9854*/
}


// ==== 0x004A9890  DisplayClass::UpdateCellPassability  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::UpdateCellPassability(_DWORD *this, __int16 *a1, IUnknown *aP2)
{
  IUnknown *v3; // esi
  IUnknown *v5; // ebp
  int v6; // eax
  int v7; // eax
  char AdjacentPassableMask; // al
  int v9; // eax
  char v10; // al
  int v11; // eax
  int v12; // edx
  __int16 v13; // cx
  IUnknown *v14; // edi
  int v15; // eax
  int v16; // eax
  int j; // ebp
  int v18; // edx
  __int16 v19; // cx
  Tactical *v20; // esi
  char v21; // al
  int v22; // eax
  int v23; // eax
  int k; // edi
  int v25; // edx
  __int16 v26; // cx
  Tactical *v27; // esi
  char v28; // al
  char v30; // [esp+Eh] [ebp-22h]
  bool v31; // [esp+Fh] [ebp-21h]
  IUnknown *v32; // [esp+10h] [ebp-20h] BYREF
  Tactical *i; // [esp+14h] [ebp-1Ch]
  IUnknown *v34; // [esp+18h] [ebp-18h]
  Tactical *v35; // [esp+1Ch] [ebp-14h]
  MouseClass *v36; // [esp+20h] [ebp-10h] BYREF
  IUnknown *v37; // [esp+24h] [ebp-Ch]
  IUnknown *v38; // [esp+28h] [ebp-8h]
  MouseClass *v39; // [esp+2Ch] [ebp-4h]

  v3 = (IUnknown *)a1; /*0x4a9896*/
  v5 = (IUnknown *)CellCoord::To_CellObj(this, a1); /*0x4a98a2*/
  v38 = v5; /*0x4a98a4*/
  v6 = v5->field_140; /*0x4a98a8*/
  v31 = (v6 & 2) == 0; /*0x4a98b9*/
  if ( (v6 & 2) == 0 || (v30 = 0, (v5->__pad_11C[16] & 8) == 0) ) /*0x4a98cd*/
    v30 = 1; /*0x4a98cf*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a98da*/
  LOBYTE(v39) = v30; /*0x4a98dc*/
  v5->field_140 = v6; /*0x4a98e0*/
  v7 = *(_DWORD *)&v5->__pad_11C[16]; /*0x4a98e6*/
  LOBYTE(v7) = v7 | 8; /*0x4a98ec*/
  *(_DWORD *)&v5->__pad_11C[16] = v7; /*0x4a98f0*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a1, 0); /*0x4a98fd*/
  if ( AdjacentPassableMask != v5->__pad_11C[4] ) /*0x4a9908*/
  {
    v30 = 1; /*0x4a990a*/
    v5->__pad_11C[4] = AdjacentPassableMask; /*0x4a990f*/
  }
  if ( v5->__pad_11C[4] == -1 ) /*0x4a991c*/
  {
    v9 = *(_DWORD *)&v5->__pad_11C[16]; /*0x4a991e*/
    LOBYTE(v9) = v9 | 0x10; /*0x4a9924*/
    *(_DWORD *)&v5->__pad_11C[16] = v9; /*0x4a9926*/
  }
  v10 = Cell::GetAdjacentPassableMask(a1, 1); /*0x4a9935*/
  if ( v10 != v5->__pad_11C[5] ) /*0x4a9940*/
  {
    v30 = 1; /*0x4a9942*/
    v5->__pad_11C[5] = v10; /*0x4a9947*/
  }
  if ( v5->__pad_11C[5] == -1 ) /*0x4a9954*/
  {
    v11 = v5->field_140; /*0x4a9956*/
    LOBYTE(v11) = v11 | 1; /*0x4a995c*/
    v5->field_140 = v11; /*0x4a995e*/
  }
  if ( v30 ) /*0x4a996a*/
    Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v5); /*0x4a9973*/
  for ( i = 0; (int)i < 8; i = (Tactical *)((char *)i + 1) ) /*0x4a9979*/
  {
    v12 = (unsigned __int8)i & 7; /*0x4a9985*/
    v13 = LOWORD(v3->field_0) + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v12); /*0x4a9997*/
    LOWORD(v12) = HIWORD(v3->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v12); /*0x4a999e*/
    LOWORD(v34) = v13; /*0x4a99a2*/
    HIWORD(v34) = v12; /*0x4a99ab*/
    v32 = v34; /*0x4a99b7*/
    v14 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v32); /*0x4a99c5*/
    if ( v32 != (IUnknown *)v3->field_0 && (v14->__pad_11C[16] & 0x10) == 0 ) /*0x4a99e2*/
    {
      v15 = Cell::GetAdjacentPassableMask((__int16 *)&v32, 0); /*0x4a99f5*/
      if ( v15 == -1 ) /*0x4a99fd*/
      {
        v16 = *(_DWORD *)&v14->__pad_11C[16]; /*0x4a9a03*/
        if ( (v16 & 8) == 0 ) /*0x4a9a0b*/
          goto LABEL_19; /*0x4a9a0b*/
        LOBYTE(v16) = v16 | 0x10; /*0x4a9a26*/
        *(_DWORD *)&v14->__pad_11C[16] = v16; /*0x4a9a29*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4a9a35*/
        for ( j = 0; j < 8; ++j ) /*0x4a9a3a*/
        {
          v18 = j & 7; /*0x4a9a3e*/
          v19 = (_WORD)v32 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v18); /*0x4a9a50*/
          LOWORD(v18) = HIWORD(v32) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v18); /*0x4a9a59*/
          LOWORD(v35) = v19; /*0x4a9a5e*/
          HIWORD(v35) = v18; /*0x4a9a67*/
          v36 = (MouseClass *)v35; /*0x4a9a73*/
          v20 = (Tactical *)CellCoord::To_CellObj(this, (__int16 *)&v36); /*0x4a9a89*/
          v21 = Cell::GetAdjacentPassableMask((__int16 *)&v36, 0); /*0x4a9a8b*/
          if ( v21 != v20->__pad_11F[1] ) /*0x4a9a96*/
          {
            v20->__pad_11F[1] = v21; /*0x4a9a98*/
            Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)v20); /*0x4a9aa5*/
          }
        }
        v5 = v38; /*0x4a9ab0*/
        v3 = (IUnknown *)a1; /*0x4a9ab4*/
      }
      else
      {
        if ( v15 != -2 && (v14->__pad_11C[16] & 8) == 0 ) /*0x4a9ac6*/
        {
LABEL_19:
          (*(void (__thiscall **)(_DWORD *, IUnknown **, IUnknown *))(*this + 144))(this, &v32, aP2); /*0x4a9a0d*/
          goto LABEL_30; /*0x4a9a21*/
        }
        if ( v15 >= 0 && v15 != v14->__pad_11C[4] ) /*0x4a9aeb*/
        {
          v14->__pad_11C[4] = v15; /*0x4a9aed*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4a9afa*/
        }
      }
    }
LABEL_30:
    if ( v32 != (IUnknown *)v3->field_0 && (v14->field_140 & 1) == 0 ) /*0x4a9b1f*/
    {
      v22 = Cell::GetAdjacentPassableMask((__int16 *)&v32, 1); /*0x4a9b32*/
      if ( v22 == -1 ) /*0x4a9b3a*/
      {
        v23 = v14->field_140; /*0x4a9b40*/
        if ( (v23 & 2) == 0 ) /*0x4a9b48*/
          goto LABEL_34; /*0x4a9b48*/
        LOBYTE(v23) = v23 | 1; /*0x4a9b63*/
        v14->field_140 = v23; /*0x4a9b66*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4a9b72*/
        for ( k = 0; k < 8; ++k ) /*0x4a9b77*/
        {
          v25 = k & 7; /*0x4a9b7b*/
          v26 = (_WORD)v32 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v25); /*0x4a9b8d*/
          LOWORD(v25) = HIWORD(v32) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v25); /*0x4a9b96*/
          LOWORD(v37) = v26; /*0x4a9b9b*/
          HIWORD(v37) = v25; /*0x4a9ba4*/
          v36 = (MouseClass *)v37; /*0x4a9bb0*/
          v27 = (Tactical *)CellCoord::To_CellObj(this, (__int16 *)&v36); /*0x4a9bc6*/
          v28 = Cell::GetAdjacentPassableMask((__int16 *)&v36, 1); /*0x4a9bc8*/
          if ( v28 != v27->__pad_11F[2] ) /*0x4a9bd3*/
          {
            v27->__pad_11F[2] = v28; /*0x4a9bd5*/
            Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)v27); /*0x4a9be2*/
          }
        }
        v5 = v38; /*0x4a9bed*/
        v3 = (IUnknown *)a1; /*0x4a9bf1*/
      }
      else
      {
        if ( v22 != -2 && (v14->field_140 & 2) == 0 ) /*0x4a9c03*/
        {
LABEL_34:
          (*(void (__thiscall **)(_DWORD *, IUnknown **, IUnknown *))(*this + 144))(this, &v32, aP2); /*0x4a9b4a*/
          continue; /*0x4a9b5e*/
        }
        if ( v22 >= 0 && v22 != v14->__pad_11C[5] ) /*0x4a9c28*/
        {
          v14->__pad_11C[5] = v22; /*0x4a9c2a*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4a9c37*/
        }
      }
    }
  }
  if ( v30 ) /*0x4a9c55*/
    CellClass::SpiralFindClosest((int)v5, (int)aP2, (char)v39); /*0x4a9c67*/
  if ( (v5->field_140 & 2) != 0 && v31 && (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 ) /*0x4a9c88*/
    CellClass::UpdateZone(v5); /*0x4a9c8c*/
  return v30; /*0x4a9c91*/
}


// ==== 0x004A9CA0  DisplayClass::vt_entry_94  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::vt_entry_94(_DWORD *this, MouseClass *aP1, IUnknown *aP2, MouseClass *aP3)
{
  IUnknown *v5; // esi
  int v6; // eax
  bool v7; // bl
  char AdjacentPassableMask; // al
  int v9; // eax
  char v10; // cl
  char result; // al
  char v12; // [esp+Ch] [ebp-4h]
  char aP1a; // [esp+14h] [ebp+4h]

  v5 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)aP1); /*0x4a9cae*/
  v6 = v5->field_140; /*0x4a9cb0*/
  v7 = (v6 & 2) == 0; /*0x4a9cbc*/
  if ( (v6 & 2) == 0 || (aP1a = 0, (v5->__pad_11C[16] & 8) == 0) ) /*0x4a9cd1*/
    aP1a = 1; /*0x4a9cd3*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a9cde*/
  v12 = aP1a; /*0x4a9ce0*/
  v5->field_140 = v6; /*0x4a9ce4*/
  if ( (_BYTE)aP3 ) /*0x4a9cf2*/
    DisplayClass::AdvanceFrameCounter(&v5->field_0); /*0x4a9cf4*/
  else
    DisplayClass::UpdateDisplayTimer(v5); /*0x4a9cfb*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)aP1, 0); /*0x4a9d09*/
  if ( AdjacentPassableMask != v5->__pad_11C[4] ) /*0x4a9d14*/
  {
    aP1a = 1; /*0x4a9d16*/
    v5->__pad_11C[4] = AdjacentPassableMask; /*0x4a9d1b*/
  }
  if ( v5->__pad_11C[4] == -1 ) /*0x4a9d28*/
  {
    v9 = *(_DWORD *)&v5->__pad_11C[16]; /*0x4a9d2a*/
    LOBYTE(v9) = v9 | 0x10; /*0x4a9d30*/
    *(_DWORD *)&v5->__pad_11C[16] = v9; /*0x4a9d32*/
  }
  v10 = Cell::GetAdjacentPassableMask((__int16 *)aP1, 1); /*0x4a9d46*/
  if ( v10 == v5->__pad_11C[5] ) /*0x4a9d50*/
  {
    result = aP1a; /*0x4a9d60*/
  }
  else
  {
    result = 1; /*0x4a9d52*/
    v5->__pad_11C[5] = v10; /*0x4a9d54*/
    aP1a = 1; /*0x4a9d5a*/
  }
  if ( v5->__pad_11C[5] == -1 ) /*0x4a9d6b*/
    v5->field_140 |= 1u; /*0x4a9d6d*/
  if ( result ) /*0x4a9d76*/
  {
    Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v5); /*0x4a9d7f*/
    CellClass::SpiralFindClosest((int)v5, (int)aP2, v12); /*0x4a9d94*/
    result = aP1a; /*0x4a9d99*/
  }
  if ( (v5->field_140 & 2) != 0 && v7 && (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 ) /*0x4a9db5*/
  {
    CellClass::UpdateZone(v5); /*0x4a9db9*/
    return aP1a; /*0x4a9dbe*/
  }
  return result; /*0x4a9dc2*/
}


// ==== 0x004A9DD0  DisplayClass::ProcessCellReveal  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::ProcessCellReveal(_DWORD *this, MouseClass *aP1, IUnknown *aP2)
{
  IUnknown *v5; // edi
  int v6; // eax
  char v7; // cl
  char AdjacentPassableMask; // al
  int v9; // eax
  int v10; // eax
  __int16 v11; // dx
  IUnknown *v13; // esi
  int eax10; // eax
  int v14; // eax
  int j; // edi
  int v16; // edx
  __int16 v17; // cx
  IUnknown *v19; // esi
  char al14; // al
  bool v21; // [esp+Fh] [ebp-1Dh]
  IUnknown *v22; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  IUnknown *v25; // [esp+18h] [ebp-14h]
  IUnknown *v26; // [esp+1Ch] [ebp-10h]
  IUnknown *varC; // [esp+20h] [ebp-Ch] BYREF
  IUnknown *v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]
  char aP1a; // [esp+30h] [ebp+4h]

  v5 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)aP1); /*0x4a9de2*/
  v27 = v5; /*0x4a9de7*/
  v6 = v5->field_140; /*0x4a9deb*/
  v7 = v6; /*0x4a9df1*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a9dfc*/
  v21 = (v7 & 2) == 0; /*0x4a9dfe*/
  aP1a = v21; /*0x4a9e02*/
  LOBYTE(v28) = v21; /*0x4a9e06*/
  v5->field_140 = v6; /*0x4a9e0a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)aP1, 1); /*0x4a9e16*/
  if ( AdjacentPassableMask != v5->__pad_11C[5] ) /*0x4a9e21*/
  {
    aP1a = 1; /*0x4a9e23*/
    v5->__pad_11C[5] = AdjacentPassableMask; /*0x4a9e28*/
  }
  if ( v5->__pad_11C[5] == -1 ) /*0x4a9e35*/
  {
    v9 = v5->field_140; /*0x4a9e37*/
    LOBYTE(v9) = v9 | 1; /*0x4a9e3d*/
    v5->field_140 = v9; /*0x4a9e3f*/
  }
  if ( aP1a ) /*0x4a9e4b*/
    Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v5); /*0x4a9e54*/
  for ( i = 0; i < 8; ++i ) /*0x4a9e5a*/
  {
    v10 = i & 7; /*0x4a9e69*/
    v11 = HIWORD(aP1->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v10); /*0x4a9e7c*/
    LOWORD(v25) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v10) + LOWORD(aP1->field_0); /*0x4a9e87*/
    HIWORD(v25) = v11; /*0x4a9e90*/
    v22 = v25; /*0x4a9e9c*/
    v13 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v22); /*0x4a9eaa*/
    if ( v22 != (IUnknown *)aP1->field_0 && (v13->field_140 & 1) == 0 ) /*0x4a9ec7*/
    {
      eax10 = Cell::GetAdjacentPassableMask((__int16 *)&v22, 1); /*0x4a9eda*/
      if ( eax10 == -1 ) /*0x4a9ee2*/
      {
        v14 = v13->field_140; /*0x4a9ee8*/
        if ( (v14 & 2) == 0 ) /*0x4a9ef0*/
          goto LABEL_12; /*0x4a9ef0*/
        LOBYTE(v14) = v14 | 1; /*0x4a9f0c*/
        v13->field_140 = v14; /*0x4a9f0f*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v13); /*0x4a9f1b*/
        for ( j = 0; j < 8; ++j ) /*0x4a9f20*/
        {
          v16 = j & 7; /*0x4a9f29*/
          v17 = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v16) + (_WORD)v22; /*0x4a9f2c*/
          LOWORD(v16) = *((_WORD *)&MEMORY[0x89F68A] + 2 * v16); /*0x4a9f3b*/
          LOWORD(v26) = v17; /*0x4a9f43*/
          HIWORD(v26) = HIWORD(v22) + v16; /*0x4a9f54*/
          varC = v26; /*0x4a9f5d*/
          v19 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&varC); /*0x4a9f73*/
          al14 = Cell::GetAdjacentPassableMask((__int16 *)&varC, 1); /*0x4a9f75*/
          if ( al14 != v19->__pad_11C[5] ) /*0x4a9f80*/
          {
            v19->__pad_11C[5] = al14; /*0x4a9f82*/
            Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v19); /*0x4a9f8f*/
          }
        }
        v5 = v27; /*0x4a9f9a*/
      }
      else
      {
        if ( eax10 != -2 && (v13->field_140 & 2) == 0 ) /*0x4a9fac*/
        {
LABEL_12:
          (*(void (__thiscall **)(_DWORD *, IUnknown **, IUnknown *))(*this + 152))(this, &v22, aP2); /*0x4a9ef2*/
          continue; /*0x4a9f07*/
        }
        if ( eax10 >= 0 && eax10 != v13->__pad_11C[5] ) /*0x4a9fd2*/
        {
          v13->__pad_11C[5] = eax10; /*0x4a9fd4*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v13); /*0x4a9fe1*/
        }
      }
    }
  }
  if ( aP1a ) /*0x4a9fff*/
    CellClass::SpiralFindClosest((int)v5, (int)aP2, v28); /*0x4aa011*/
  if ( (v5->field_140 & 2) != 0 && v21 && (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 ) /*0x4aa032*/
    CellClass::UpdateZone(v5); /*0x4aa036*/
  return aP1a; /*0x4aa03b*/
}


// ==== 0x004AA050  DisplayClass::RevealFogCell  this=DisplayClass  sig=csp ====
bool __thiscall DisplayClass::RevealFogCell(_DWORD *this, __int16 *a1, IUnknown *aP2)
{
  IUnknown *v3; // edi
  Tactical *v5; // esi
  int v6; // eax
  char v7; // bl
  bool v8; // bl
  char AdjacentPassableMask; // al
  int v10; // eax
  int v11; // eax
  __int16 v12; // dx
  IUnknown *v14; // esi
  int eax10; // eax
  int v15; // eax
  int j; // edi
  int v17; // edx
  __int16 v18; // cx
  IUnknown *v20; // esi
  char al14; // al
  int v22; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  Tactical *v25; // [esp+1Ch] [ebp-10h]
  Tactical *v27; // [esp+20h] [ebp-Ch] BYREF
  int var8; // [esp+24h] [ebp-8h]
  Tactical *v28; // [esp+28h] [ebp-4h]

  v3 = (IUnknown *)a1; /*0x4aa057*/
  v5 = (Tactical *)CellCoord::To_CellObj(this, a1); /*0x4aa063*/
  v28 = v5; /*0x4aa068*/
  v6 = *(_DWORD *)&v5->__pad_11F[13]; /*0x4aa06c*/
  v7 = v6; /*0x4aa072*/
  LOBYTE(v6) = v6 | 8; /*0x4aa074*/
  v8 = (v7 & 8) == 0; /*0x4aa07b*/
  *(_DWORD *)&v5->__pad_11F[13] = v6; /*0x4aa07e*/
  LOBYTE(var8) = v8; /*0x4aa08a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a1, 0); /*0x4aa08e*/
  if ( AdjacentPassableMask != v5->__pad_11F[1] ) /*0x4aa099*/
  {
    v8 = 1; /*0x4aa09b*/
    v5->__pad_11F[1] = AdjacentPassableMask; /*0x4aa09d*/
  }
  if ( v5->__pad_11F[1] == -1 ) /*0x4aa0aa*/
  {
    v10 = *(_DWORD *)&v5->__pad_11F[13]; /*0x4aa0ac*/
    LOBYTE(v10) = v10 | 0x10; /*0x4aa0b2*/
    *(_DWORD *)&v5->__pad_11F[13] = v10; /*0x4aa0b4*/
  }
  if ( v8 ) /*0x4aa0bc*/
    Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)v5); /*0x4aa0c5*/
  for ( i = 0; i < 8; ++i ) /*0x4aa0ca*/
  {
    v11 = i & 7; /*0x4aa0d6*/
    v12 = HIWORD(v3->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v11); /*0x4aa0ec*/
    LOWORD(v24) = LOWORD(v3->field_0) + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v11); /*0x4aa0f7*/
    HIWORD(v24) = v12; /*0x4aa100*/
    v22 = v24; /*0x4aa10c*/
    v14 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v22); /*0x4aa11a*/
    if ( v22 != v3->field_0 && (v14->__pad_11C[16] & 0x10) == 0 ) /*0x4aa137*/
    {
      eax10 = Cell::GetAdjacentPassableMask((__int16 *)&v22, 0); /*0x4aa14a*/
      if ( eax10 == -1 ) /*0x4aa152*/
      {
        v15 = *(_DWORD *)&v14->__pad_11C[16]; /*0x4aa158*/
        if ( (v15 & 8) == 0 ) /*0x4aa160*/
          goto LABEL_12; /*0x4aa160*/
        LOBYTE(v15) = v15 | 0x10; /*0x4aa17c*/
        *(_DWORD *)&v14->__pad_11C[16] = v15; /*0x4aa17f*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4aa18b*/
        for ( j = 0; j < 8; ++j ) /*0x4aa190*/
        {
          v17 = j & 7; /*0x4aa194*/
          v18 = v22 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v17); /*0x4aa1a6*/
          LOWORD(v17) = HIWORD(v22) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v17); /*0x4aa1af*/
          LOWORD(v25) = v18; /*0x4aa1b4*/
          HIWORD(v25) = v17; /*0x4aa1bd*/
          v27 = v25; /*0x4aa1c9*/
          v20 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v27); /*0x4aa1df*/
          al14 = Cell::GetAdjacentPassableMask((__int16 *)&v27, 0); /*0x4aa1e1*/
          if ( al14 != v20->__pad_11C[4] ) /*0x4aa1ec*/
          {
            v20->__pad_11C[4] = al14; /*0x4aa1ee*/
            Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v20); /*0x4aa1fb*/
          }
        }
        v3 = (IUnknown *)a1; /*0x4aa206*/
      }
      else
      {
        if ( eax10 != -2 && (v14->__pad_11C[16] & 8) == 0 ) /*0x4aa218*/
        {
LABEL_12:
          (*(void (__thiscall **)(_DWORD *, int *, IUnknown *))(*this + 156))(this, &v22, aP2); /*0x4aa162*/
          continue; /*0x4aa177*/
        }
        if ( eax10 >= 0 && eax10 != v14->__pad_11C[4] ) /*0x4aa23e*/
        {
          v14->__pad_11C[4] = eax10; /*0x4aa240*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4aa24d*/
        }
      }
    }
  }
  if ( v8 ) /*0x4aa266*/
    CellClass::SpiralFindClosest((int)v28, (int)aP2, var8); /*0x4aa27c*/
  return v8; /*0x4aa281*/
}


// ==== 0x004AA290  BuildingClass::updateSellBack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::updateSellBack(_DWORD *this, IUnknown *aP1, AbstractClass *aP2)
{
  _DWORD *v3; // eax

  v3 = CellCoord::To_CellObj(this, (__int16 *)aP1); /*0x4aa29c*/
  return Object::FindObjectCell(v3, (TechnoClass *)aP2, 0); /*0x4aa2a8*/
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
  v1 = &MEMORY[0x820030]; /*0x4aa2d1*/
  while ( 1 ) /*0x4aa2d8*/
  {
    v2 = 0; /*0x4aa2d8*/
    v3 = 6 * *v1; /*0x4aa2dd*/
    if ( MEMORY[0x8A0370][v3] > 0 ) /*0x4aa2e8*/
      break; /*0x4aa2e8*/
LABEL_12:
    if ( (int)++v1 >= (int)MEMORY[0x82003C] ) /*0x4aa35b*/
      return *(_BYTE **)&v8[1]; /*0x4aa36c*/
  }
  while ( 1 )
  {
    v4 = MEMORY[0x8A0364][v3]; /*0x4aa2ea*/
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
    if ( v2 >= MEMORY[0x8A0370][v3] ) /*0x4aa350*/
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
  v1 = &MEMORY[0x82003C]; /*0x4aa3a1*/
  while ( 1 ) /*0x4aa3b2*/
  {
    v2 = MEMORY[0x8A0370][6 * *v1] - 1; /*0x4aa3b2*/
    if ( v2 >= 0 ) /*0x4aa3b3*/
      break; /*0x4aa3b3*/
LABEL_12:
    if ( (int)++v1 >= (int)&MEMORY[0x820048] ) /*0x4aa41d*/
      return *(_BYTE **)&v6[1]; /*0x4aa42a*/
  }
  while ( 1 )
  {
    v3 = *(_BYTE **)(MEMORY[0x8A0364][6 * *v1] + 4 * v2); /*0x4aa3c1*/
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
int *__thiscall CellClass::FindOpenNeighbor(
        int *this,
        MouseClass *aP1,
        MouseClass *aP2,
        int a4,
        int a5,
        int a6,
        int a7,
        MouseClass *aP7)
{
  IUnknown *v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *ScreenCenterOffset; // eax
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ebp
  int v19; // edx
  int v20; // ebx
  int v21; // edi
  IUnknown *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // kr08_4
  _DWORD *v26; // eax
  int v27; // ecx
  int v28; // ebx
  int v29; // ebx
  _DWORD *v30; // eax
  int v31; // ecx
  IUnknown **v32; // eax
  IUnknown *v33; // ebx
  IUnknown *v34; // ebp
  int v36; // eax
  int v37; // eax
  int v38; // eax
  MouseClass *v39; // ebx
  int v40; // ebp
  int v41; // edi
  int v42; // eax
  _DWORD *v43; // eax
  int v44; // ecx
  MapClass *v45; // eax
  IUnknown *v46; // kr04_4
  int v47; // eax
  _WORD *v48; // edx
  CCINIClass *v49; // ebx
  int v50; // esi
  int v51; // edi
  double v52; // st7
  double v53; // st7
  __int16 v54; // ax
  int v55; // ecx
  IUnknown *v56; // ebx
  _DWORD *v57; // eax
  int v58; // ecx
  IUnknown **v59; // eax
  IUnknown *v60; // ebx
  IUnknown *v61; // ebp
  char v62; // [esp+22h] [ebp-4Eh]
  char v63; // [esp+23h] [ebp-4Dh]
  IUnknown *v64; // [esp+24h] [ebp-4Ch] BYREF
  IUnknown *TileIndex; // [esp+28h] [ebp-48h]
  __int16 v66; // [esp+2Ch] [ebp-44h] BYREF
  __int16 v67; // [esp+2Eh] [ebp-42h]
  IUnknown *v68; // [esp+30h] [ebp-40h] BYREF
  int v69; // [esp+34h] [ebp-3Ch]
  MouseClass *v70; // [esp+38h] [ebp-38h] BYREF
  MouseClass *v71; // [esp+3Ch] [ebp-34h]
  MouseClass *v72; // [esp+40h] [ebp-30h] BYREF
  ObjectClass *v73; // [esp+44h] [ebp-2Ch]
  _BYTE v74[8]; // [esp+48h] [ebp-28h] BYREF
  _DWORD v75[2]; // [esp+50h] [ebp-20h] BYREF
  void **v76; // [esp+58h] [ebp-18h] BYREF
  void *Block; // [esp+5Ch] [ebp-14h]
  int v78; // [esp+60h] [ebp-10h]
  char v79; // [esp+65h] [ebp-Bh]
  IUnknown *v80; // [esp+68h] [ebp-8h]
  int v81; // [esp+6Ch] [ebp-4h]
  MouseClass *aP2a; // [esp+78h] [ebp+8h]
  MouseClass *aP2b; // [esp+78h] [ebp+8h]

  v9 = 0; /*0x4aa459*/
  v10 = *(_WORD *)a4 == *(_WORD *)&MEMORY[0x89F690].__pad_BC0[424]; /*0x4aa45b*/
  v62 = 0; /*0x4aa45f*/
  v63 = 0; /*0x4aa464*/
  TileIndex = (IUnknown *)-1; /*0x4aa469*/
  v64 = 0; /*0x4aa471*/
  if ( !v10 || *(_WORD *)(a4 + 2) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[426] ) /*0x4aa481*/
    v64 = *(IUnknown **)a4; /*0x4aa485*/
  if ( v64 == *(IUnknown **)&MEMORY[0x89F690].__pad_BC0[424] ) /*0x4aa48e*/
    v64 = *(IUnknown **)a5; /*0x4aa49d*/
  v11 = (int)aP2; /*0x4aa4a1*/
  if ( aP2 == (MouseClass *)-1 ) /*0x4aa4a8*/
    v11 = 0; /*0x4aa4aa*/
  if ( (_BYTE)a7 && v64 != *(IUnknown **)&MEMORY[0x89F690].__pad_BC0[424] ) /*0x4aa4b9*/
    TileIndex = (IUnknown *)MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)&v64, (IUnknown *)aP7, (IUnknown *)1); /*0x4aa4d8*/
  v68 = (IUnknown *)(__int16)v64; /*0x4aa4e6*/
  v69 = SHIWORD(v64); /*0x4aa4f2*/
  ScreenCenterOffset = CellClass::GetScreenCenterOffset(this, (MouseClass *)&v72, (int *)&v68); /*0x4aa4fa*/
  v13 = *ScreenCenterOffset; /*0x4aa4ff*/
  v14 = ScreenCenterOffset[1]; /*0x4aa50d*/
  if ( v64 == *(IUnknown **)&MEMORY[0x89F690].__pad_BC0[424] ) /*0x4aa510*/
  {
    a7 = 0; /*0x4aa618*/
    a4 = 0; /*0x4aa61d*/
    if ( v11 != 1 ) /*0x4aa621*/
    {
      if ( v11 == 2 ) /*0x4aa624*/
      {
        v63 = 1; /*0x4aa65f*/
        a4 = 2 * this->q042 + 2; /*0x4aa66e*/
        v23 = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)1, (IUnknown *)this->unknown104); /*0x4aa67b*/
      }
      else
      {
        if ( v11 != 3 ) /*0x4aa627*/
        {
          v22 = (IUnknown *)this->unknown104; /*0x4aa629*/
          v63 = 1; /*0x4aa62f*/
LABEL_32:
          v23 = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)1, v22); /*0x4aa694*/
          goto LABEL_33; /*0x4aa6a2*/
        }
        v62 = 1; /*0x4aa645*/
        v23 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)(2 * this->q042)); /*0x4aa651*/
      }
LABEL_33:
      v21 = v23 - 1; /*0x4aa6a7*/
      goto LABEL_34; /*0x4aa6a9*/
    }
    v24 = this->q042; /*0x4aa683*/
    v62 = 1; /*0x4aa689*/
    a7 = this->unknown104; /*0x4aa68e*/
    v22 = (IUnknown *)(2 * v24); /*0x4aa692*/
    goto LABEL_32; /*0x4aa692*/
  }
  v15 = this->CellClass_field_FC; /*0x4aa52a*/
  v16 = v13 - v15; /*0x4aa534*/
  v17 = this->unknown104 - v13 + v15; /*0x4aa536*/
  a5 = v16; /*0x4aa53a*/
  if ( v16 >= v17 ) /*0x4aa53e*/
    v16 = v17; /*0x4aa540*/
  v18 = this->q040; /*0x4aa542*/
  a7 = 2 * v16; /*0x4aa54b*/
  v19 = this->q042; /*0x4aa557*/
  v20 = v14 - 2 * v18; /*0x4aa55d*/
  if ( v20 >= 2 * (v19 + v18) - v14 ) /*0x4aa568*/
    v20 = 2 * (v19 + v18) - v14; /*0x4aa56a*/
  if ( a7 >= v20 ) /*0x4aa570*/
  {
    v62 = 0; /*0x4aa5cc*/
    v63 = 1; /*0x4aa5d3*/
    if ( v14 - 2 * v18 >= 2 * v19 / 2 ) /*0x4aa5df*/
    {
      a4 = 2 * v19; /*0x4aa5fa*/
      v21 = a5; /*0x4aa5fe*/
      v11 = 2; /*0x4aa602*/
    }
    else
    {
      v21 = a5; /*0x4aa5e1*/
      v11 = 0; /*0x4aa5e5*/
      a4 = -1; /*0x4aa5e7*/
    }
    a7 = 0; /*0x4aa5ef*/
    v9 = 0; /*0x4aa5f3*/
  }
  else
  {
    v62 = 1; /*0x4aa578*/
    v63 = 0; /*0x4aa57f*/
    v21 = v14 - v18; /*0x4aa591*/
    if ( a5 >= this->unknown104 / 2 ) /*0x4aa58f*/
    {
      a7 = this->unknown104; /*0x4aa5b1*/
      v11 = 1; /*0x4aa5b5*/
    }
    else
    {
      a7 = -1; /*0x4aa593*/
      v11 = 3; /*0x4aa59b*/
    }
    a4 = 0; /*0x4aa5a0*/
    v9 = 0; /*0x4aa5a8*/
  }
LABEL_34:
  v25 = this->unknown104; /*0x4aa6aa*/
  v68 = (IUnknown *)1; /*0x4aa6c1*/
  v69 = v25 / 2; /*0x4aa6c9*/
  v26 = HexCoord::Convert(this, (IUnknown *)&v72, (IUnknown *)&v68); /*0x4aa6cd*/
  LOWORD(a5) = *v26; /*0x4aa6d6*/
  HIWORD(a5) = v26[1]; /*0x4aa6e2*/
  if ( v62 )
  {
    aP2a = 0; /*0x4aa702*/
    v27 = 2 * this->q042; /*0x4aa709*/
    v28 = v11 != 1 ? 1 : -1;
    if ( v27 > 0 ) /*0x4aa70e*/
    {
      v68 = (IUnknown *)(a7 + v28); /*0x4aa71a*/
      while ( 1 ) /*0x4aa733*/
      {
        v70 = (MouseClass *)a7; /*0x4aa733*/
        v29 = ((int)aP2a + v21) % v27; /*0x4aa737*/
        v71 = (MouseClass *)v29; /*0x4aa73e*/
        v30 = HexCoord::Convert(this, (IUnknown *)v74, (IUnknown *)&v70); /*0x4aa742*/
        v72 = (MouseClass *)v68; /*0x4aa74d*/
        v73 = (ObjectClass *)v29; /*0x4aa751*/
        v31 = v30[1]; /*0x4aa757*/
        LOWORD(a4) = *v30; /*0x4aa75a*/
        HIWORD(a4) = v31; /*0x4aa75f*/
        v32 = (IUnknown **)HexCoord::Convert(this, (IUnknown *)v75, (IUnknown *)&v72); /*0x4aa770*/
        v33 = *v32; /*0x4aa775*/
        v34 = v32[1]; /*0x4aa77e*/
        if ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&a4, (TechnoClass *)1) ) /*0x4aa783*/
        {
          v66 = (__int16)v33; /*0x4aa7a7*/
          v67 = (__int16)v34; /*0x4aa7ac*/
          if ( CellClass::CheckBuildablePair(this, (IUnknown *)&a4, &v66, a6, TileIndex, aP7) ) /*0x4aa7b1*/
            break; /*0x4aa7b1*/
        }
        v27 = 2 * this->q042; /*0x4aa7c5*/
        aP2a = (MouseClass *)((char *)aP2a + 1); /*0x4aa7c9*/
        if ( (int)aP2a >= v27 ) /*0x4aa7cd*/
          goto LABEL_40; /*0x4aa7cd*/
      }
      aP1->field_0 = a4; /*0x4aa7f2*/
      return &aP1->field_0; /*0x4aa7f8*/
    }
LABEL_40:
    aP1->field_0 = a5; /*0x4aa7d3*/
    return &aP1->field_0; /*0x4aa7e4*/
  }
  if ( !v63 ) /*0x4aa801*/
    goto LABEL_40; /*0x4aa801*/
  v36 = -(v11 != 0); /*0x4aa807*/
  LOBYTE(v36) = v36 & 0xFE; /*0x4aa809*/
  v37 = v36 + 1; /*0x4aa80b*/
  if ( v11 == 2 ) /*0x4aa80f*/
  {
    VectorClass::CellConstructor(&v76, 0, 0); /*0x4aa81b*/
    v38 = this->unknown104; /*0x4aa820*/
    v39 = 0; /*0x4aa826*/
    v76 = &vt_DynamicVectorClass_Cell; /*0x4aa82a*/
    v81 = 10; /*0x4aa832*/
    v80 = 0; /*0x4aa83a*/
    if ( v38 > 0 ) /*0x4aa83e*/
    {
      v40 = a6; /*0x4aa844*/
      do /*0x4aa913*/
      {
        v41 = 0; /*0x4aa848*/
        while ( 1 ) /*0x4aa84a*/
        {
          v42 = this->q042; /*0x4aa84a*/
          v72 = v39; /*0x4aa855*/
          v73 = (ObjectClass *)(v41 + 2 * v42); /*0x4aa860*/
          v43 = HexCoord::Convert(this, (IUnknown *)v75, (IUnknown *)&v72); /*0x4aa867*/
          v44 = v43[1]; /*0x4aa877*/
          LOWORD(a7) = *v43; /*0x4aa87a*/
          HIWORD(a7) = v44; /*0x4aa882*/
          if ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&a7, (TechnoClass *)1) ) /*0x4aa88c*/
          {
            if ( CellClass::CheckBuildablePair(this, (IUnknown *)&a7, (__int16 *)&v64, v40, TileIndex, aP7) ) /*0x4aa8af*/
              break; /*0x4aa8af*/
          }
          if ( ++v41 >= 15 ) /*0x4aa8bc*/
            goto LABEL_57; /*0x4aa8bc*/
        }
        if ( (int)v80 < v78 /*0x4aa8ed*/
          || (v79 || !v78)
          && v81 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v76[2])(&v76, v81 + v78, 0) )
        {
          v45 = (MapClass *)v80; /*0x4aa8fc*/
          v80 = (IUnknown *)((char *)v80 + 1); /*0x4aa8ff*/
          *((_DWORD *)Block + (_DWORD)v45) = a7; /*0x4aa907*/
        }
LABEL_57:
        v39 = (MouseClass *)((char *)v39 + 1); /*0x4aa90a*/
      }
      while ( (int)v39 < this->unknown104 ); /*0x4aa913*/
      v9 = v80; /*0x4aa919*/
    }
    v46 = v64; /*0x4aa928*/
    if ( v64 == *(IUnknown **)&MEMORY[0x89F690].__pad_BC0[424] ) /*0x4aa930*/
    {
      if ( (int)v9 <= 0 ) /*0x4aa93d*/
      {
        a5 = *(_DWORD *)&MEMORY[0x89F690].__pad_BC0[424]; /*0x4aa963*/
        v48 = Block; /*0x4aa967*/
      }
      else
      {
        v47 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)((char *)v9 - 1)); /*0x4aa94e*/
        v48 = Block; /*0x4aa953*/
        a5 = *((_DWORD *)Block + v47); /*0x4aa95a*/
      }
    }
    else
    {
      v49 = *(CCINIClass **)&MEMORY[0x89F690].__pad_BC0[424]; /*0x4aa970*/
      v50 = -1; /*0x4aa976*/
      v51 = 0; /*0x4aa979*/
      v48 = Block; /*0x4aa97d*/
      if ( (int)v80 > 0 ) /*0x4aa981*/
      {
        while ( 1 ) /*0x4aa9a8*/
        {
          v52 = (double)(__int16)(HIWORD(v46) - v48[2 * v51 + 1]); /*0x4aa9a8*/
          a7 = (__int16)((_WORD)v46 - v48[2 * v51]); /*0x4aa9af*/
          v53 = Math::Sqrt((double)a7 * (double)a7 + v52 * v52); /*0x4aa9ce*/
          v54 = Math::RoundToInt(v53); /*0x4aa9d6*/
          v48 = Block; /*0x4aa9db*/
          if ( v50 == -1 || v54 < v50 ) /*0x4aa9e9*/
          {
            v49 = (CCINIClass *)*((_DWORD *)Block + v51); /*0x4aa9eb*/
            v50 = v54; /*0x4aa9ee*/
          }
          if ( ++v51 >= (int)v9 ) /*0x4aa9f3*/
            break; /*0x4aa9f3*/
          v46 = v64; /*0x4aa98a*/
        }
      }
      a5 = (int)v49; /*0x4aa9f5*/
    }
    v76 = &vt_VectorClass_Cell; /*0x4aa9fb*/
    if ( v48 && v79 ) /*0x4aaa0f*/
    {
      __3_YAXPAX_Z(v48); /*0x4aaa16*/
      aP1->field_0 = a5; /*0x4aaa26*/
      return &aP1->field_0; /*0x4aaa2f*/
    }
    goto LABEL_40; /*0x4aaa0f*/
  }
  v55 = this->unknown104; /*0x4aaa32*/
  aP2b = 0; /*0x4aaa38*/
  if ( v55 <= 0 ) /*0x4aaa3e*/
    goto LABEL_40; /*0x4aaa3e*/
  v68 = (IUnknown *)(a4 + v37); /*0x4aaa4a*/
  while ( 1 ) /*0x4aaa5f*/
  {
    v73 = (ObjectClass *)a4; /*0x4aaa5f*/
    v56 = (IUnknown *)(((int)aP2b + v21) % v55); /*0x4aaa65*/
    v72 = (MouseClass *)v56; /*0x4aaa6d*/
    v57 = HexCoord::Convert(this, (IUnknown *)v75, (IUnknown *)&v72); /*0x4aaa71*/
    v70 = (MouseClass *)v56; /*0x4aaa7c*/
    v71 = (MouseClass *)v68; /*0x4aaa80*/
    v58 = v57[1]; /*0x4aaa86*/
    LOWORD(a7) = *v57; /*0x4aaa89*/
    HIWORD(a7) = v58; /*0x4aaa8e*/
    v59 = (IUnknown **)HexCoord::Convert(this, (IUnknown *)v74, (IUnknown *)&v70); /*0x4aaa9f*/
    v60 = *v59; /*0x4aaaa4*/
    v61 = v59[1]; /*0x4aaaad*/
    if ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&a7, (TechnoClass *)1) ) /*0x4aaab2*/
    {
      v66 = (__int16)v60; /*0x4aaad9*/
      v67 = (__int16)v61; /*0x4aaade*/
      if ( CellClass::CheckBuildablePair(this, (IUnknown *)&a7, &v66, a6, TileIndex, aP7) ) /*0x4aaae3*/
        break; /*0x4aaae3*/
    }
    v55 = this->unknown104; /*0x4aaaf0*/
    aP2b = (MouseClass *)((char *)aP2b + 1); /*0x4aaaf9*/
    if ( (int)aP2b >= v55 ) /*0x4aaafd*/
    {
      aP1->field_0 = a5; /*0x4aab0e*/
      return &aP1->field_0; /*0x4aab14*/
    }
  }
  aP1->field_0 = a7; /*0x4aab22*/
  return &aP1->field_0; /*0x4aa7db*/
}


// ==== 0x004AAB30  CellClass::CheckBuildablePair  this=IUnknown  sig=csp ====
char __thiscall CellClass::CheckBuildablePair(
        _DWORD *this,
        IUnknown *aP1,
        __int16 *a2,
        int a4,
        IUnknown *aP4,
        MouseClass *aP5)
{
  char result; // al
  void *v8; // eax
  void *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h]

  if ( a4 == 4 ) /*0x4aab40*/
    return 1; /*0x4aab45*/
  v8 = CellCoord::To_CellObj(this, (__int16 *)aP1); /*0x4aab63*/
  result = Cell::IsBuildable((int)v8, a4, 1, 1, (IUnknown *)0xFFFFFFFF, 0, (IUnknown *)0xFFFFFFFF, (IUnknown *)1); /*0x4aab6a*/
  if ( result ) /*0x4aab71*/
  {
    v9 = CellCoord::To_CellObj(this, a2); /*0x4aab97*/
    result = Cell::IsBuildable((int)v9, a4, 1, 1, aP4, (IUnknown *)aP5, (IUnknown *)0xFFFFFFFF, (IUnknown *)1); /*0x4aab9e*/
    if ( result ) /*0x4aaba5*/
    {
      v12 = 0; /*0x4aabbb*/
      v13 = 0; /*0x4aabbf*/
      v10 = CellCoord::To_CellObj(this, (__int16 *)aP1); /*0x4aabc3*/
      if ( Object::FindClosestObjectCell(v10, (IUnknown *)&v12, 0, 0) ) /*0x4aabca*/
      {
        return 0; /*0x4aabd6*/
      }
      else
      {
        v12 = 0; /*0x4aabe9*/
        v13 = 0; /*0x4aabed*/
        v11 = CellCoord::To_CellObj(this, a2); /*0x4aabf1*/
        return Object::FindClosestObjectCell(v11, (IUnknown *)&v12, 0, 0) == 0; /*0x4aac03*/
      }
    }
  }
  return result; /*0x4aab42*/
}


// ==== 0x004AAC10  TacticalClass_DisplayClass::ProcessTacticalMouseInput  this=TacticalClass@DisplayClass  sig=csp ====
int __thiscall DisplayClass::ProcessTacticalMouseInput(TacticalClass_DisplayClass *this, char a2, int a3, int a4)
{
  int v5; // eax
  int *v6; // eax
  __int16 v8; // [esp+6h] [ebp-2Ah] BYREF
  int v9; // [esp+8h] [ebp-28h] BYREF
  int v10; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-14h] BYREF
  int v13; // [esp+20h] [ebp-10h]
  int v14[3]; // [esp+24h] [ebp-Ch] BYREF

  v10 = 0; /*0x4aac1c*/
  v12 = 0; /*0x4aac24*/
  v13 = 0; /*0x4aac2c*/
  if ( (a2 & 0x55) != 0 ) /*0x4aac34*/
  {
    v5 = MEMORY[0x87F770]->headNode[0]; /*0x4aac3d*/
    v12 = *(_DWORD *)MEMORY[0x87F770]->__pad_0; /*0x4aac40*/
    v13 = v5; /*0x4aac44*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x4aac52*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 48))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x4aac5d*/
    v6 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4aac6d*/
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                  v11);
    v12 = *v6; /*0x4aac72*/
    v13 = v6[1]; /*0x4aac79*/
  }
  TacticalClass::TransformPixel(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)v11, (MouseClass *)&v12); /*0x4aac8d*/
  v12 -= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x4aaca3*/
  v13 -= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x4aacb1*/
  Tactical::MouseOver(&v12, (__int16 *)&v9, v14, &v10, (bool *)&v8 + 1, (bool *)&a2); /*0x4aacd4*/
  if ( v9 != *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3748] ) /*0x4aace5*/
    Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)v11, (MouseClass *)&v9); /*0x4aad04*/
  return COMObject::ActivateThunk(this, 0, a3, 0); /*0x4aad19*/
}


// ==== 0x004AAD20  DisplayClass::vt_entry_B0  this=DisplayClass  sig=csp ====
void __stdcall DisplayClass::vt_entry_B0(MouseClass *aP0)
{
  ; /*0x4aad20*/
}


// ==== 0x004AAD30  DisplayClass::DispatchMode  this=DisplayClass  sig=csp ====
int __thiscall TacticalClass::DispatchMode(int *this, MouseClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // eax

  v3 = this->q11A4; /*0x4aad34*/
  if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x4aad47*/
  {
    this->q11A4 = 0; /*0x4aad4b*/
    this->q11A8 = 0; /*0x4aad55*/
    this->q11AC = -1; /*0x4aad5f*/
    v4 = Mouse::SetBounds((int)this, 0); /*0x4aad69*/
    LOBYTE(v4) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x4aad6e*/
    return (*(int (__thiscall **)(int *, _DWORD, int))(*this + 72))(this, 0, v4); /*0x4aad7a*/
  }
  else if ( this->q11B0 ) /*0x4aad82*/
  {
    BuildingClass::TogglePower2(this, 0); /*0x4aad90*/
    LOBYTE(v6) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x4aad95*/
    return (*(int (__thiscall **)(int *, _DWORD, int))(*this + 72))(this, 0, v6); /*0x4aada1*/
  }
  else if ( this->u8_11B1 ) /*0x4aada9*/
  {
    BuildingClass::TogglePower(this, 0); /*0x4aadb7*/
    LOBYTE(v7) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x4aadbc*/
    return (*(int (__thiscall **)(int *, _DWORD, int))(*this + 72))(this, 0, v7); /*0x4aadc8*/
  }
  else if ( this->u8_11B2 ) /*0x4aadd0*/
  {
    TacticalClass::SetObserverMode(this, 0); /*0x4aadde*/
    LOBYTE(v8) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x4aade3*/
    return (*(int (__thiscall **)(int *, _DWORD, int))(*this + 72))(this, 0, v8); /*0x4aadef*/
  }
  else
  {
    v9 = -1; /*0x4aadfd*/
    if ( this->q11B8 == -1 ) /*0x4aae02*/
    {
      if ( this->q11B3 ) /*0x4aae1e*/
      {
        v11 = TacticalClass::SetDisplayMode(this, 0, 0); /*0x4aae2e*/
        LOBYTE(v11) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x4aae33*/
        return (*(int (__thiscall **)(int *, _DWORD, _DWORD *))(*this + 72))(this, 0, v11); /*0x4aae3f*/
      }
      else
      {
        if ( this->q11B4 ) /*0x4aae47*/
          v12 = MapClass::ToggleZoom(this, 0); /*0x4aae55*/
        else
          v12 = MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4aae6e*/
        LOBYTE(v12) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x4aae5a*/
        return (*(int (__thiscall **)(int *, _DWORD, int))(*this + 72))(this, 0, v12); /*0x4aae66*/
      }
    }
    else
    {
      v10 = *this; /*0x4aae04*/
      this->q11B8 = -1; /*0x4aae06*/
      LOBYTE(v9) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x4aae0c*/
      return (*(int (__thiscall **)(int *, _DWORD, int))(v10 + 72))(this, 0, v9); /*0x4aae16*/
    }
  }
}


// ==== 0x004AAE90  DisplayClass::HandlePlayerAction  this=DisplayClass  sig=csp ====
int __thiscall TacticalClass::HandlePlayerAction(
        char *this,
        MouseClass *aP1,
        MouseClass *aP2,
        void *a3,
        int aP3,
        int aP3_4)
{
  IUnknown *v6; // ebx
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
  MouseClass *v26; // eax
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
  int v47; // edi
  int v48; // eax
  _BYTE *v49; // eax
  int v50; // edi
  int v51; // eax
  int v52; // [esp-4h] [ebp-24h]
  int v53; // [esp-4h] [ebp-24h]
  void *v54; // [esp+10h] [ebp-10h]
  int v55; // [esp+14h] [ebp-Ch] BYREF
  MouseClass *v56; // [esp+18h] [ebp-8h]
  __int16 v57; // [esp+1Ch] [ebp-4h]

  HIWORD(v6) = HIWORD(aP1); /*0x4aae94*/
  v56 = 0; /*0x4aaea1*/
  this->q11D0 = 0; /*0x4aaeab*/
  if ( a3 ) /*0x4aaeb2*/
  {
    v56 = (MouseClass *)a3; /*0x4aaeb8*/
    v8 = AbstractClass::IsTechnoType(a3); /*0x4aaebc*/
    v9 = v8; /*0x4aaec1*/
    if ( v8 /*0x4aaeea*/
      && ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6 || !*(_BYTE *)(*((_DWORD *)v9 + 328) + 5889))
      && !MEMORY[0xA8D63C].__pad_14B0[639] )
    {
      v9[1073] = 1; /*0x4aaeec*/
    }
  }
  else if ( LOWORD(aP1->field_0) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[424] /*0x4aafe0*/
         || HIWORD(aP1->field_0) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[426] )
  {
    v56 = (MouseClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1); /*0x4aaff1*/
  }
  if ( this->q11B3
    && this->q46F
    && !Waypoint::FindByCell((char *)HouseClass_Player, (IUnknown *)aP1)
    && LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)aP1, (TechnoClass *)1) )
  {
    v10 = (_DWORD *)this->q46F; /*0x4aaf37*/
    v11 = SHIWORD(aP1->field_0) << 8; /*0x4aaf48*/
    *v10 = (SLOWORD(aP1->field_0) << 8) + 128; /*0x4aaf4b*/
    v10[1] = v11 + 128; /*0x4aaf53*/
    v10[2] = 0; /*0x4aaf5b*/
    v12 = (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1) + 80) & 0x100) != 0
        ? *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[676]
        : 0;
    *(_DWORD *)(this->q46F + 8) = Cell::GetGroundHeight(*((_DWORD **)this + 1135)) + v12; /*0x4aaf94*/
  }
  if ( Waypoint::FindByCell((char *)HouseClass_Player, (IUnknown *)aP1) ) /*0x4aaf9e*/
  {
    switch ( aP3 ) /*0x4aafbb*/
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
        v13 = aP3; /*0x4ab008*/
        break; /*0x4ab00a*/
    }
  }
  else
  {
    v13 = aP3; /*0x4ab00c*/
  }
  v14 = this + 4556; /*0x4ab016*/
  v54 = (void *)v13; /*0x4ab01e*/
  if ( !this->q11CC && !this->q11CD && !this->q11CE ) /*0x4ab02b*/
  {
    v15 = *(_WORD *)(*(_DWORD *)MEMORY[0x87F6C8]->__pad_174 + 2); /*0x4ab03d*/
    LOBYTE(aP3) = (unsigned __int8)(v15 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]; /*0x4ab05c*/
    BYTE1(aP3) = (unsigned __int8)(v15 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]; /*0x4ab074*/
    v16 = (unsigned __int8)(v15 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]; /*0x4ab088*/
    *(_WORD *)v14 = aP3; /*0x4ab08c*/
    this->q11CE = v16; /*0x4ab08f*/
  }
  v17 = v13 - 42; /*0x4ab092*/
  switch ( v13 ) /*0x4ab0a6*/
  {
    case '*': /*0x4ab0a6*/
    case '+': /*0x4ab0a6*/
    case '/': /*0x4ab0a6*/
      v18 = *(_DWORD *)&HouseClass_Player->__pad_1D8[52]; /*0x4ab0b2*/
      if ( v18 == -1 ) /*0x4ab0bb*/
        v19 = 0; /*0x4ab0bd*/
      else
        v19 = 8 * (v18 % 12); /*0x4ab0c9*/
      v20 = 0; /*0x4ab0d1*/
      v21 = *(_DWORD *)MEMORY[0x87F6C8]->__pad_174 + 2; /*0x4ab0d9*/
      do /*0x4ab152*/
      {
        v22 = (v20 + v19) % 256; /*0x4ab0ec*/
        v23 = &MEMORY[0x87F8E4].__pad_5568[3 * v22 + 820]; /*0x4ab0ed*/
        v21 += 2; /*0x4ab0f4*/
        LOWORD(aP3) = *(_WORD *)v23; /*0x4ab0fa*/
        LOWORD(v6) = (unsigned __int8)(BYTE1(aP3) >> MEMORY[0x89F690].__pad_14B0[676]); /*0x4ab114*/
        LOWORD(v22) = (unsigned __int8)((unsigned __int8)v23[2] >> MEMORY[0x89F690].__pad_14B0[668]); /*0x4ab128*/
        v24 = v22 << MEMORY[0x89F690].__pad_14B0[664]; /*0x4ab12c*/
        v25 = v24 | ((_DWORD)v6 << MEMORY[0x89F690].__pad_14B0[672]); /*0x4ab134*/
        LOWORD(v24) = (unsigned __int8)((unsigned __int8)aP3 >> MEMORY[0x89F690].__pad_14B0[660]); /*0x4ab142*/
        v6 = (IUnknown *)((v24 << MEMORY[0x89F690].__pad_14B0[656]) | v25); /*0x4ab148*/
        ++v20; /*0x4ab14a*/
        *(_WORD *)(v21 - 2) = (_WORD)v6; /*0x4ab14b*/
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
      v26 = (MouseClass *)Waypoint::FindByCell((char *)HouseClass_Player, (IUnknown *)aP1); /*0x4ab16c*/
      WaypointClass::FindOrCreate((char *)HouseClass_Player, v26, (IUnknown *)&v55, (IUnknown *)&aP3); /*0x4ab182*/
      if ( !this->q11B3 ) /*0x4ab187*/
        *(_DWORD *)&HouseClass_Player->__pad_1D8[52] = v55; /*0x4ab19b*/
      if ( v55 == -1 ) /*0x4ab1a8*/
        v27 = 0; /*0x4ab1aa*/
      else
        v27 = 8 * (v55 % 12); /*0x4ab1b6*/
      v28 = 0; /*0x4ab1be*/
      v29 = *(_DWORD *)MEMORY[0x87F6C8]->__pad_174 + 2; /*0x4ab1c6*/
      do /*0x4ab23f*/
      {
        v30 = (v28 + v27) % 256; /*0x4ab1d9*/
        v31 = &MEMORY[0x87F8E4].__pad_5568[3 * v30 + 820]; /*0x4ab1da*/
        v29 += 2; /*0x4ab1e1*/
        v57 = *(_WORD *)v31; /*0x4ab1e7*/
        LOWORD(v6) = (unsigned __int8)(HIBYTE(v57) >> MEMORY[0x89F690].__pad_14B0[676]); /*0x4ab201*/
        LOWORD(v30) = (unsigned __int8)((unsigned __int8)v31[2] >> MEMORY[0x89F690].__pad_14B0[668]); /*0x4ab215*/
        v32 = v30 << MEMORY[0x89F690].__pad_14B0[664]; /*0x4ab219*/
        v33 = v32 | ((_DWORD)v6 << MEMORY[0x89F690].__pad_14B0[672]); /*0x4ab221*/
        LOWORD(v32) = (unsigned __int8)((unsigned __int8)v57 >> MEMORY[0x89F690].__pad_14B0[660]); /*0x4ab22f*/
        v6 = (IUnknown *)((v32 << MEMORY[0x89F690].__pad_14B0[656]) | v33); /*0x4ab235*/
        ++v28; /*0x4ab237*/
        *(_WORD *)(v29 - 2) = (_WORD)v6; /*0x4ab238*/
      }
      while ( v28 < 8 ); /*0x4ab23f*/
      break; /*0x4ab23f*/
    default:
      LOWORD(v17) = (unsigned __int8)((unsigned __int8)this->q11CD >> MEMORY[0x89F690].__pad_14B0[676]); /*0x4ab261*/
      LOWORD(v13) = (unsigned __int8)((unsigned __int8)this->q11CE >> MEMORY[0x89F690].__pad_14B0[668]); /*0x4ab279*/
      v34 = v13 << MEMORY[0x89F690].__pad_14B0[664]; /*0x4ab27d*/
      v35 = v34 | (v17 << MEMORY[0x89F690].__pad_14B0[672]); /*0x4ab285*/
      LOBYTE(v34) = (unsigned __int8)*v14 >> MEMORY[0x89F690].__pad_14B0[660]; /*0x4ab289*/
      v43 = 0; /*0x4ab291*/
      LOWORD(v34) = (unsigned __int8)v34; /*0x4ab293*/
      v36 = (v34 << MEMORY[0x89F690].__pad_14B0[656]) | v35; /*0x4ab29f*/
      v42 = *(_DWORD *)MEMORY[0x87F6C8]->__pad_174; /*0x4ab2a1*/
      *(_WORD *)(v42 + 2) = v36; /*0x4ab2a7*/
      v39 = *(_DWORD *)MEMORY[0x87F6C8]->__pad_174 + 2; /*0x4ab2b6*/
      do /*0x4ab32e*/
      {
        v37 = v43 % 256; /*0x4ab2c8*/
        v38 = &MEMORY[0x87F8E4].__pad_5568[3 * (v43 % 256) + 820]; /*0x4ab2c9*/
        v39 += 2; /*0x4ab2d0*/
        LOWORD(v42) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v38) >> MEMORY[0x89F690].__pad_14B0[676]); /*0x4ab2f0*/
        LOWORD(v37) = (unsigned __int8)((unsigned __int8)v38[2] >> MEMORY[0x89F690].__pad_14B0[668]); /*0x4ab304*/
        v40 = v37 << MEMORY[0x89F690].__pad_14B0[664]; /*0x4ab308*/
        v41 = v40 | (v42 << MEMORY[0x89F690].__pad_14B0[672]); /*0x4ab310*/
        LOWORD(v40) = (unsigned __int8)((unsigned __int8)*(_WORD *)v38 >> MEMORY[0x89F690].__pad_14B0[660]); /*0x4ab31e*/
        v42 = (v40 << MEMORY[0x89F690].__pad_14B0[656]) | v41; /*0x4ab324*/
        ++v43; /*0x4ab326*/
        *(_WORD *)(v39 - 2) = v42; /*0x4ab327*/
      }
      while ( v43 < 8 ); /*0x4ab32e*/
      if ( !this->q11B3 ) /*0x4ab330*/
        *(_DWORD *)&HouseClass_Player->__pad_1D8[52] = -1; /*0x4ab340*/
      break; /*0x4ab340*/
  }
  v44 = TacticalClass::MapSpecialDrawMode(v54, (MouseClass *)a3); /*0x4ab355*/
  if ( (_BYTE)aP2 ) /*0x4ab360*/
  {
    v45 = aP3_4; /*0x4ab36f*/
    switch ( v44 ) /*0x4ab37b*/
    {
      case 1: /*0x4ab37b*/
      case 5: /*0x4ab37b*/
        goto LABEL_55;
      case 2: /*0x4ab37b*/
        if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] ) /*0x4ab3f3*/
        {
          v49 = **(_BYTE ***)&MEMORY[0xA8D63C].__pad_14B0[464]; /*0x4ab3ff*/
          if ( **(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[464] ) /*0x4ab3ff*/
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
        (*(void (__thiscall **)(char *, int, int))(this->q048)(this, 60, aP3_4); /*0x4ab3d5*/
        break; /*0x4ab3d5*/
      case 57: /*0x4ab37b*/
        goto LABEL_59;
      case 60: /*0x4ab37b*/
        return (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 78, v45);
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
    return (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 78, v45); /*0x4ab3d8*/
  }
  else
  {
    result = v44 - 1; /*0x4ab449*/
    switch ( result ) /*0x4ab453*/
    {
      case 0: /*0x4ab453*/
LABEL_55:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 18, aP3_4); /*0x4ab431*/
        break; /*0x4ab446*/
      case 1: /*0x4ab453*/
      case 53: /*0x4ab453*/
LABEL_73:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 19, aP3_4); /*0x4ab5b5*/
        break; /*0x4ab5ca*/
      case 2: /*0x4ab453*/
      case 8: /*0x4ab453*/
      case 10: /*0x4ab453*/
      case 34: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 25, aP3_4); /*0x4ab560*/
        break; /*0x4ab56a*/
      case 3: /*0x4ab453*/
      case 51: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 27, aP3_4); /*0x4ab590*/
        break; /*0x4ab59a*/
      case 4: /*0x4ab453*/
        if ( !v56 /*0x4ab51b*/
          || *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] != 1
          || !**(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[464]
          || (*(_BYTE *)(**(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[464] + 20) & 1) == 0
          || !(*(unsigned __int8 (__thiscall **)(_DWORD, MouseClass *))(***(_DWORD ***)&MEMORY[0xA8D63C].__pad_14B0[464]
                                                                      + 940))(
                **(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[464],
                v56) )
        {
          goto LABEL_68; /*0x4ab523*/
        }
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 20, aP3_4); /*0x4ab530*/
        break; /*0x4ab53a*/
      case 5: /*0x4ab453*/
LABEL_68:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 21, aP3_4); /*0x4ab53d*/
        break; /*0x4ab552*/
      case 6: /*0x4ab453*/
      case 7: /*0x4ab453*/
      case 60: /*0x4ab453*/
LABEL_61:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 17, aP3_4); /*0x4ab4ba*/
        break; /*0x4ab4cf*/
      case 9: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 34, aP3_4); /*0x4ab608*/
        break; /*0x4ab612*/
      case 11: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 30, aP3_4); /*0x4ab638*/
        break; /*0x4ab642*/
      case 12: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 31, aP3_4); /*0x4ab620*/
        break; /*0x4ab62a*/
      case 13: /*0x4ab453*/
LABEL_70:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 32, aP3_4); /*0x4ab56d*/
        break; /*0x4ab582*/
      case 14: /*0x4ab453*/
      case 31: /*0x4ab453*/
LABEL_48:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 35, aP3_4); /*0x4ab3b6*/
        break; /*0x4ab3cb*/
      case 15: /*0x4ab453*/
      case 54: /*0x4ab453*/
      case 55: /*0x4ab453*/
      case 63: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 52, aP3_4); /*0x4ab5d8*/
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
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 60, aP3_4); /*0x4ab45a*/
        break; /*0x4ab46f*/
      case 19: /*0x4ab453*/
LABEL_79:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 53, aP3_4); /*0x4ab645*/
        break; /*0x4ab65a*/
      case 25: /*0x4ab453*/
LABEL_47:
        v47 = *(_DWORD *)this; /*0x4ab39a*/
        v52 = aP3_4; /*0x4ab3a0*/
        v48 = Map_Handle_731CC0(); /*0x4ab3a1*/
        result = (*(int (__thiscall **)(char *, int, int))(v47 + 72))(this, v48, v52); /*0x4ab3a9*/
        break; /*0x4ab3b3*/
      case 27: /*0x4ab453*/
        return result;
      case 28: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 33, aP3_4); /*0x4ab4ad*/
        break; /*0x4ab4b7*/
      case 29: /*0x4ab453*/
LABEL_58:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 28, aP3_4); /*0x4ab472*/
        break; /*0x4ab487*/
      case 30: /*0x4ab453*/
LABEL_46:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 26, aP3_4); /*0x4ab382*/
        break; /*0x4ab397*/
      case 36: /*0x4ab453*/
LABEL_80:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 57, aP3_4); /*0x4ab65d*/
        break; /*0x4ab672*/
      case 37: /*0x4ab453*/
LABEL_83:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 50, aP3_4); /*0x4ab6a5*/
        break; /*0x4ab6ba*/
      case 38: /*0x4ab453*/
      case 39: /*0x4ab453*/
LABEL_84:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 58, aP3_4); /*0x4ab6bd*/
        break; /*0x4ab6d2*/
      case 40: /*0x4ab453*/
      case 64: /*0x4ab453*/
LABEL_85:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 47, aP3_4); /*0x4ab6d5*/
        break; /*0x4ab6ea*/
      case 52: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 38, aP3_4); /*0x4ab5a8*/
        break; /*0x4ab5b2*/
      case 56: /*0x4ab453*/
LABEL_59:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 59, aP3_4); /*0x4ab48a*/
        break; /*0x4ab49f*/
      case 59: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 78, aP3_4); /*0x4ab758*/
        break; /*0x4ab762*/
      case 61: /*0x4ab453*/
      case 62: /*0x4ab453*/
LABEL_91:
        v50 = *(_DWORD *)this; /*0x4ab765*/
        v53 = aP3_4; /*0x4ab76b*/
        v51 = Map_Handle_731CB0(); /*0x4ab76c*/
        result = (*(int (__thiscall **)(char *, int, int))(v50 + 72))(this, v51, v53); /*0x4ab774*/
        break; /*0x4ab77e*/
      case 65: /*0x4ab453*/
LABEL_86:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 83, aP3_4); /*0x4ab6ed*/
        break; /*0x4ab702*/
      case 66: /*0x4ab453*/
LABEL_87:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 85, aP3_4); /*0x4ab705*/
        break; /*0x4ab71a*/
      case 67: /*0x4ab453*/
LABEL_88:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 81, aP3_4); /*0x4ab71d*/
        break; /*0x4ab732*/
      case 68: /*0x4ab453*/
LABEL_81:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 79, aP3_4); /*0x4ab675*/
        break; /*0x4ab68a*/
      case 69: /*0x4ab453*/
LABEL_82:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 80, aP3_4); /*0x4ab68d*/
        break; /*0x4ab6a2*/
      case 70: /*0x4ab453*/
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 82, aP3_4); /*0x4ab5f0*/
        break; /*0x4ab5fa*/
      case 71: /*0x4ab453*/
LABEL_89:
        result = (*(int (__thiscall **)(char *, int, int))(this->q048)(this, 84, aP3_4); /*0x4ab735*/
        break; /*0x4ab74a*/
      default:
LABEL_92:
        result = (*(int (__thiscall **)(char *, _DWORD, int))(this->q048)(this, 0, aP3_4); /*0x4ab781*/
        break; /*0x4ab796*/
    }
  }
  return result; /*0x4ab390*/
}


// ==== 0x004AB9B0  DisplayClass::ExecuteCommand  this=DisplayClass  sig=csp ====
int __thiscall PlayerClass::ExecuteCommand(char *this, MouseClass *aP1, __int16 *a2, void *a3, int a5, int arg10)
{
  IUnknown *v6; // esi
  __int16 v8; // cx
  int v9; // ecx
  _BYTE *v10; // eax
  char v11; // cl
  __int16 v12; // dx
  int v13; // esi
  IUnknown *v14; // ecx
  int v15; // eax
  char *v16; // eax
  int v17; // esi
  void *v18; // eax
  IUnknown *v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  IUnknown *v24; // eax
  int result; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // ebx
  #375 *v29; // eax
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
  AbstractClass *v47; // [esp-Ch] [ebp-9Ch]
  int v48; // [esp-8h] [ebp-98h]
  unsigned __int8 v49; // [esp-8h] [ebp-98h]
  int v50; // [esp-4h] [ebp-94h]
  int v51; // [esp-4h] [ebp-94h]
  char v52; // [esp+0h] [ebp-90h]
  int v53; // [esp+4h] [ebp-8Ch]
  int a6; // [esp+14h] [ebp-7Ch] BYREF
  __int16 v55[4]; // [esp+18h] [ebp-78h] BYREF
  char v56[112]; // [esp+20h] [ebp-70h] BYREF

  v6 = (IUnknown *)a3; /*0x4ab9b6*/
  if ( a3 /*0x4ab9ed*/
    && MEMORY[0xA8D63C].__pad_14B0[624]
    && MEMORY[0xA8D63C].__pad_1258[268]
    && !MEMORY[0xA8D63C].__pad_14B0[639]
    && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)a3 + 104))(a3, 0, 0) == 5 )
  {
    v6 = 0; /*0x4ab9ef*/
  }
  if ( !this->q11A4 ) /*0x4ab9f9*/
  {
    v26 = 0; /*0x4abca1*/
    if ( this->q11CF ) /*0x4abc94*/
    {
      *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 3453) = 1; /*0x4abcaf*/
      if ( !Mouse::IsButtonDown(0x10u) ) /*0x4abcbc*/
      {
        if ( PlayerClass::HasOccupiedCell(*(int **)&MEMORY[0x87F8E4].__pad_5568[9432]) ) /*0x4abccb*/
          MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4abcd4*/
        else
          v26 = 1; /*0x4abcdb*/
      }
      PlayerClass::ProcessOccupancyUpdate( /*0x4abceb*/
        *(int **)&MEMORY[0x87F8E4].__pad_5568[9432],
        (void (__thiscall *)(_BYTE *))PlayerClass::CheckHumanPlayer);
      FrameTimer::Init25(); /*0x4abcf0*/
      v27 = *(_DWORD *)this; /*0x4abcf5*/
      this->q11CF = 0; /*0x4abcfd*/
      (*(void (__thiscall **)(char *, _DWORD, int))(v27 + 72))(this, 0, arg10); /*0x4abd04*/
      this->q11D0 = 0; /*0x4abd07*/
      MEMORY[0xA8D63C].__pad_14B0[689] = 1; /*0x4abd0e*/
      if ( !v26 ) /*0x4abd17*/
        goto LABEL_121; /*0x4abd17*/
    }
    v28 = a5; /*0x4abd1d*/
    if ( a5 == 8 ) /*0x4abd27*/
    {
      if ( v6 ) /*0x4abd2f*/
      {
        if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] ) /*0x4abd3c*/
        {
          v29 = (#375 *)(*(int (__thiscall **)(_DWORD))(***(_DWORD ***)&MEMORY[0xA8D63C].__pad_14B0[464] + 60))(**(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[464]); /*0x4abd4b*/
          if ( (unsigned __int8)House::IsHumanPlayer(v29) ) /*0x4abd50*/
          {
            if ( v6->__pad_68[27] ) /*0x4abd59*/
            {
              if ( Selection::GetFlag() ) /*0x4abd63*/
              {
                v30 = (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 136))(v6); /*0x4abd70*/
                PlayerClass::UpdateAIUnits((void *)(v30 + 36)); /*0x4abd7b*/
              }
              else
              {
                (*(void (__thiscall **)(IUnknown *))(v6->field_0 + 336))(v6); /*0x4abd89*/
              }
            }
            else if ( Selection::GetFlag() ) /*0x4abd94*/
            {
              v31 = (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 136))(v6); /*0x4abda1*/
              MoveFeedback::ProcessCommand((void *)(v31 + 36)); /*0x4abdac*/
            }
            else
            {
              (*(void (__thiscall **)(IUnknown *))(v6->field_0 + 332))(v6); /*0x4abdba*/
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
      if ( !v6 || !(*(unsigned __int8 (__thiscall **)(IUnknown *))(v6->field_0 + 312))(v6) || v6->__pad_68[27] ) /*0x4abe03*/
        goto LABEL_120; /*0x4abe0b*/
      v28 = 0; /*0x4abe11*/
LABEL_56:
      if ( (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 44))(v6) != 6 /*0x4abe40*/
        || (unsigned __int8)House::IsHumanPlayer((#375 *)v6->field_21C)
        || v6->__pad_690[93] != 15
        || (*(unsigned __int8 (__thiscall **)(IUnknown *))(v6->field_0 + 808))(v6) )
      {
        MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4abe4a*/
        if ( Selection::GetFlag() ) /*0x4abe4f*/
        {
          v32 = (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 136))(v6); /*0x4abe5c*/
          MoveFeedback::ProcessCommand((void *)(v32 + 36)); /*0x4abe67*/
        }
        else
        {
          (*(void (__thiscall **)(IUnknown *))(v6->field_0 + 332))(v6); /*0x4abe72*/
        }
        (*(void (__thiscall **)(char *, _DWORD, int))(this->q048)(this, 0, arg10); /*0x4abe80*/
        FrameTimer::Init25(); /*0x4abe83*/
      }
LABEL_64:
      if ( v28 == 61 ) /*0x4abe8b*/
      {
        v33 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x4abe9a*/
        PlayerClass::FindNearestWaypoint( /*0x4abed7*/
          dword_89C3B0,
          (*a2 << 8) + 128,
          (a2[1] << 8) + 128,
          *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[692] * v33[283]);
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
            || (BuildingINIEntry = ReadBuildingINIEntry(), BuildingINI = ReadBuildingINI(), BuildingINIEntry)
            && BuildingINI )
          {
LABEL_92:
            DispatchSelectionWaypointMove((int)v6, *(_DWORD *)a2, a5, v53); /*0x4abf94*/
            FrameTimer::Init25(); /*0x4abfae*/
            if ( a5 == 33 ) /*0x4abfbc*/
            {
              if ( (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 44))(v6) != 6 ) /*0x4abfc8*/
                goto LABEL_117; /*0x4abfc8*/
              if ( v6->__pad_524[316] ) /*0x4abfce*/
              {
                WaypointCoords = ScriptAction::GetWaypointCoords(v55, v6); /*0x4abfdd*/
                v37 = *(_DWORD *)WaypointCoords; /*0x4abfe2*/
                v38 = WaypointCoords[4]; /*0x4abfe9*/
                v49 = 2; /*0x4abfec*/
              }
              else
              {
                v39 = ScriptAction::GetWaypointCoords(v55, v6); /*0x4ac00a*/
                v37 = *(_DWORD *)v39; /*0x4ac00f*/
                v38 = v39[4]; /*0x4ac016*/
                v49 = 1; /*0x4ac019*/
              }
              v51 = v37; /*0x4abfee*/
              v52 = v38; /*0x4abff0*/
              v47 = *(AbstractClass **)&HouseClass_Player->__pad_28[8]; /*0x4ac000*/
            }
            else
            {
              if ( a5 == 60 ) /*0x4ac03d*/
              {
                if ( !MEMORY[0xA8B538] ) /*0x4ac046*/
                {
                  v40 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2) + 283); /*0x4ac05a*/
                  PlacePlayerBeacon( /*0x4ac09d*/
                    dword_89C3B0,
                    *(_DWORD *)&HouseClass_Player->__pad_28[8],
                    (*a2 << 8) + 128,
                    (a2[1] << 8) + 128,
                    *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[692] * v40,
                    -1);
                }
                MapClass::ToggleZoom((int *)&MEMORY[0x87F7E8], 0); /*0x4ac0a9*/
                (*(void (__thiscall **)(char *, _DWORD, int))(this->q048)(this, 0, arg10); /*0x4ac0b6*/
                goto LABEL_117; /*0x4ac0b9*/
              }
              if ( a5 == 10 ) /*0x4ac0c1*/
              {
                if ( (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 44))(v6) != 6 ) /*0x4ac0cd*/
                  goto LABEL_117; /*0x4ac0cd*/
                v41 = ScriptAction::GetWaypointCoords(v55, v6); /*0x4ac0d8*/
                v49 = 21; /*0x4ac0e7*/
                v51 = *(_DWORD *)v41; /*0x4ac0e9*/
                v52 = v41[4]; /*0x4ac0eb*/
                v47 = *(AbstractClass **)&HouseClass_Player->__pad_28[8]; /*0x4ac0fb*/
              }
              else
              {
                if ( a5 == 13 ) /*0x4ac104*/
                {
                  if ( !v6 ) /*0x4ac108*/
                    goto LABEL_117; /*0x4ac108*/
                  v42 = (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 44))(v6); /*0x4ac112*/
                  if ( v42 <= 0 || v42 > 2 ) /*0x4ac120*/
                    goto LABEL_117; /*0x4ac120*/
                }
                else
                {
                  if ( a5 != 12 ) /*0x4ac154*/
                    goto LABEL_117; /*0x4ac154*/
                  if ( !v6 ) /*0x4ac15c*/
                  {
                    v44 = PlayerClass::SetTargetOrClear(v56, *(AbstractClass **)&HouseClass_Player->__pad_28[8], 23, a2); /*0x4ac1b2*/
                    if ( Networking_LastEventIndex < 128 ) /*0x4ac1c1*/
                    {
LABEL_116:
                      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v44, 0x6Fu); /*0x4ac1c3*/
                      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x4ac1ea*/
                      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x4ac201*/
                      ++Networking_LastEventIndex; /*0x4ac207*/
                    }
LABEL_117:
                    FirstOfAction = SuperWeaponTypeClass::FindFirstOfAction((void *)a5); /*0x4ac20c*/
                    if ( FirstOfAction ) /*0x4ac21a*/
                    {
                      v46 = SidebarClass::SetFlashEntry( /*0x4ac23a*/
                              v56,
                              *(_DWORD *)&HouseClass_Player->__pad_28[8],
                              18,
                              *(_DWORD *)(FirstOfAction + 152),
                              a2);
                      if ( Networking_LastEventIndex < 128 ) /*0x4ac249*/
                      {
                        qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v46, 0x6Fu); /*0x4ac265*/
                        g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x4ac272*/
                        Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x4ac289*/
                        ++Networking_LastEventIndex; /*0x4ac28f*/
                      }
                    }
                    goto LABEL_120; /*0x4ac28f*/
                  }
                }
                v43 = ScriptAction::GetWaypointCoords(v55, v6); /*0x4ac163*/
                v49 = 22; /*0x4ac172*/
                v51 = *(_DWORD *)v43; /*0x4ac174*/
                v52 = v43[4]; /*0x4ac176*/
                v47 = *(AbstractClass **)&HouseClass_Player->__pad_28[8]; /*0x4ac186*/
              }
            }
            v44 = EventClass::Add(v56, v47, v49, v51, v52); /*0x4ac187*/
            if ( Networking_LastEventIndex < 128 ) /*0x4ac196*/
              goto LABEL_116; /*0x4ac196*/
            goto LABEL_117; /*0x4ac196*/
          }
        }
      }
LABEL_120:
      this->q11D0 = 0; /*0x4ac294*/
LABEL_121:
      TechnoClass::GetField(); /*0x4ac29b*/
      return result; /*0x4ac29b*/
    }
    if ( !v6 ) /*0x4abdda*/
      goto LABEL_120; /*0x4abdda*/
    goto LABEL_56; /*0x4abdda*/
  }
  if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1130) + 44))(this->q11A8) == 7 ) /*0x4aba14*/
  {
    v8 = a2[1] + *((_WORD *)this + 2237); /*0x4aba27*/
    LOWORD(a6) = *((_WORD *)this + 2236) + *a2; /*0x4aba2b*/
    HIWORD(a6) = v8; /*0x4aba30*/
    v9 = this->q117C; /*0x4aba39*/
    *(_DWORD *)v55 = a6; /*0x4aba43*/
    this->q1180 = GetBuildingPlacement(*((_DWORD **)this + 1130), this->q11AC, v9, v55); /*0x4aba5e*/
  }
  if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1130) + 44))(this->q11A8) == 7 /*0x4aba94*/
    && v6
    && (*(int (__thiscall **)(IUnknown *))(v6->field_0 + 44))(v6) == 6
    && BuildingClass::CanAcceptType((int)v6, *((IUnknown **)this + 1130), (AbstractClass *)HouseClass_Player) )
  {
    this->q1180 = 1; /*0x4aba9d*/
  }
  if ( !this->q1180 || !this->q1181 ) /*0x4abab2*/
  {
    VoxClass::FindAndPlay(g_Str_EVA_CannotDeployHere, -1, -1); /*0x4abc80*/
    TechnoClass::GetField(); /*0x4abc85*/
    return result; /*0x4abc91*/
  }
  v10 = __RTDynamicCast( /*0x4abad5*/
          *((void ***)this + 1130),
          0,
          (struct TypeDescriptor *)&MEMORY[0x817F70].__pad_0[8],
          (struct TypeDescriptor *)&MEMORY[0x817F70].owningHouseIndex,
          0);
  if ( !v10 || (v11 = v10[3278], LOBYTE(v55[0]) = 1, !v11) ) /*0x4abaee*/
    LOBYTE(v55[0]) = 0; /*0x4abaf0*/
  v12 = a2[1] + *((_WORD *)this + 2237); /*0x4abb06*/
  v13 = this->q11A4; /*0x4abb0a*/
  LOWORD(a6) = *((_WORD *)this + 2236) + *a2; /*0x4abb10*/
  v14 = (IUnknown *)this->q11A8; /*0x4abb15*/
  HIWORD(a6) = v12; /*0x4abb1b*/
  v50 = LOBYTE(v55[0]); /*0x4abb38*/
  v48 = (*(int (__thiscall **)(IUnknown *))(v14->field_0 + 64))(v14); /*0x4abb3c*/
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x4abb41*/
  v16 = EventClass::Init(v56, *(IUnknown **)&HouseClass_Player->__pad_28[8], 11, v15, v48, v50, &a6); /*0x4abb55*/
  if ( Networking_LastEventIndex < 128 ) /*0x4abb64*/
  {
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v16, 0x6Fu); /*0x4abb80*/
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x4abb91*/
    Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x4abba8*/
    ++Networking_LastEventIndex; /*0x4abbae*/
  }
  v17 = this->q11A4; /*0x4abbb3*/
  if ( v17 )
    v18 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v17 + 44))(this->q11A4) == 6 ? (void *)v17 : 0;
  else
    v18 = 0; /*0x4abbbf*/
  Selection::ClearGlobals(v18); /*0x4abbd7*/
  if ( MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x4abbe3*/
    goto LABEL_121; /*0x4abbe3*/
  v19 = (IUnknown *)this->q11A8; /*0x4abbe9*/
  v20 = this->q11A4; /*0x4abbef*/
  this->q1194 = v19; /*0x4abbf5*/
  this->q464 = v20; /*0x4abbfb*/
  v21 = this->q1178; /*0x4abc03*/
  *(_DWORD *)(this + 4482) = *(_DWORD *)a2; /*0x4abc09*/
  v22 = this->q117C; /*0x4abc0f*/
  *(_DWORD *)(this + 4486) = v21; /*0x4abc15*/
  v23 = this->q11AC; /*0x4abc1b*/
  this->q463 = v22; /*0x4abc23*/
  this->q1198 = v23; /*0x4abc29*/
  if ( v19 ) /*0x4abc2f*/
  {
    v24 = (IUnknown *)(*(int (__thiscall **)(IUnknown *, int))(v19->field_0 + 144))(v19, 1); /*0x4abc35*/
    MIXClass::CopyHeader((int)&MEMORY[0x87F7E8], v24); /*0x4abc41*/
  }
  Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x4abc4c*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] = 0; /*0x4abc51*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = 0; /*0x4abc57*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3804] = -1; /*0x4abc5d*/
  TechnoClass::GetField(); /*0x4abc67*/
  return result; /*0x4abc6c*/
}


// ==== 0x004AC2B0  PlayerClass::CheckHumanPlayer  this=PlayerClass  sig=csp ====
char __thiscall sub_4AC2B0(_BYTE *this)
{
  #375 *v2; // eax

  v2 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 60))(this); /*0x4ac2b5*/
  if ( v2 ) /*0x4ac2ba*/
  {
    LOBYTE(v2) = House::IsHumanPlayer(v2); /*0x4ac2be*/
    if ( (_BYTE)v2 ) /*0x4ac2c5*/
    {
      LOBYTE(v2) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 312))(this); /*0x4ac2cb*/
      if ( (_BYTE)v2 ) /*0x4ac2d3*/
      {
        LOBYTE(v2) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 316))(this); /*0x4ac2d9*/
        if ( (_BYTE)v2 ) /*0x4ac2e1*/
        {
          LOBYTE(v2) = this->q081; /*0x4ac2e3*/
          if ( !(_BYTE)v2 ) /*0x4ac2eb*/
          {
            LOBYTE(v2) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 332))(this); /*0x4ac2f1*/
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
char __thiscall TacticalClass_InitViewBounds(int this, _DWORD *a2)
{
  int v2; // eax

  LOBYTE(v2) = *(_BYTE *)(this + 4528); /*0x4ac310*/
  if ( !(_BYTE)v2 ) /*0x4ac318*/
  {
    LOBYTE(v2) = *(_BYTE *)(this + 4530); /*0x4ac31a*/
    if ( !(_BYTE)v2 ) /*0x4ac322*/
    {
      LOBYTE(v2) = *(_BYTE *)(this + 4529); /*0x4ac324*/
      if ( !(_BYTE)v2 && *(_DWORD *)(this + 4536) == -1 ) /*0x4ac335*/
      {
        v2 = *(_DWORD *)(this + 4520); /*0x4ac337*/
        if ( !v2 ) /*0x4ac33f*/
        {
          *(_BYTE *)(this + 4560) = 1; /*0x4ac345*/
          *(_DWORD *)(this + 4564) = *a2; /*0x4ac34e*/
          *(_DWORD *)(this + 4568) = a2[1]; /*0x4ac357*/
          *(_DWORD *)(this + 4572) = *a2; /*0x4ac35f*/
          v2 = a2[1]; /*0x4ac365*/
          *(_DWORD *)(this + 4576) = v2; /*0x4ac368*/
        }
      }
    }
  }
  return v2; /*0x4ac36e*/
}


// ==== 0x004AC380  DisplayClass::ProcessScroll  this=DisplayClass  sig=csp ====
char __thiscall TacticalClass_ProcessScroll(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  double v7; // st7
  char v8; // cl
  int v10; // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-Ch]

  if ( !*(_BYTE *)(this + 4559) || *(_BYTE *)(this + 4531) || *(_BYTE *)(this + 4532) ) /*0x4ac3a3*/
  {
    LOBYTE(v3) = *(_BYTE *)(this + 4560); /*0x4ac436*/
    if ( (_BYTE)v3 ) /*0x4ac43e*/
    {
      v6 = a2[1]; /*0x4ac45b*/
      v10 = *a2 - *(_DWORD *)(this + 4564); /*0x4ac45e*/
      v11 = v6 - *(_DWORD *)(this + 4568); /*0x4ac467*/
      v7 = Math::Sqrt((double)v10 * (double)v10 + (double)v11 * (double)v11); /*0x4ac484*/
      v3 = Math::RoundToInt(v7); /*0x4ac48c*/
      if ( v3 > 4 ) /*0x4ac494*/
      {
        v8 = *(_BYTE *)(this + 4531); /*0x4ac496*/
        LOBYTE(v3) = 1; /*0x4ac49c*/
        *(_BYTE *)(this + 4559) = 1; /*0x4ac4a0*/
        *(_BYTE *)(this + 4560) = 0; /*0x4ac4a6*/
        if ( !v8 && !*(_BYTE *)(this + 4532) ) /*0x4ac4af*/
        {
          BYTE1(MEMORY[0x887324][863].__tail_0) = 1; /*0x4ac4c0*/
          TacticalClass::InitScrollBounds(this + 4564); /*0x4ac4cc*/
          LOBYTE(v3) = Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0); /*0x4ac4da*/
        }
      }
    }
  }
  else
  {
    v11 = MEMORY[0x886FA4]; /*0x4ac3c8*/
    v10 = MEMORY[0x886FA0]; /*0x4ac3d0*/
    v3 = *a2; /*0x4ac3d4*/
    v4 = a2[1]; /*0x4ac3d6*/
    if ( *a2 < 0 ) /*0x4ac3db*/
      v3 = 0; /*0x4ac3dd*/
    if ( v3 >= MEMORY[0x886FA8] ) /*0x4ac3e1*/
      v3 = MEMORY[0x886FA8] - 1; /*0x4ac3e3*/
    if ( v4 < 0 ) /*0x4ac3e8*/
      v4 = 0; /*0x4ac3ea*/
    if ( v4 >= MEMORY[0x886FAC] ) /*0x4ac3ee*/
      v4 = MEMORY[0x886FAC] - 1; /*0x4ac3f0*/
    v5 = *(_DWORD *)(this + 4572); /*0x4ac3f3*/
    v10 = v3; /*0x4ac3f9*/
    v11 = v4; /*0x4ac3ff*/
    if ( v3 != v5 || v4 != *(_DWORD *)(this + 4576) ) /*0x4ac40b*/
    {
      BYTE1(MEMORY[0x887324][863].__tail_0) = 1; /*0x4ac41c*/
      LOBYTE(v3) = TacticalClass::UpdateScrollMaxBounds(&v10); /*0x4ac429*/
    }
  }
  return v3; /*0x4ac42e*/
}


// ==== 0x004AC4F0  ObjectClass::GetHouseData  this=ObjectClass  sig=csp ====
void *sub_4AC4F0()
{
  int v0; // edi
  int v1; // eax
  int v2; // ebx
  char *v3; // ebp
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  void *result; // eax
  int v8; // [esp+8h] [ebp-1Ch]
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v0 = 0; /*0x4ac4fb*/
  v1 = 0; /*0x4ac4fd*/
  v2 = 0; /*0x4ac4ff*/
  v10 = 0; /*0x4ac503*/
  v11 = 0; /*0x4ac507*/
  v12 = 0; /*0x4ac50b*/
  if ( MEMORY[0xA8EC88] > 0 ) /*0x4ac50f*/
  {
    v3 = (char *)MEMORY[0xA8EC7C]; /*0x4ac512*/
    v8 = MEMORY[0xA8EC88]; /*0x4ac519*/
    do /*0x4ac567*/
    {
      v4 = *(_DWORD *)v3; /*0x4ac51d*/
      if ( !*(_BYTE *)(*(_DWORD *)v3 + 129) && *(_BYTE *)(v4 + 1050) ) /*0x4ac52a*/
      {
        v1 += *(_DWORD *)(v4 + 156); /*0x4ac53e*/
        v2 += *(_DWORD *)(v4 + 160); /*0x4ac543*/
        v5 = *(_DWORD *)(v4 + 164); /*0x4ac549*/
        v10 = v1; /*0x4ac54c*/
        v11 = v2; /*0x4ac552*/
        v12 += v5; /*0x4ac556*/
        ++v0; /*0x4ac55a*/
      }
      v3 += 4; /*0x4ac55f*/
      --v8; /*0x4ac563*/
    }
    while ( v8 ); /*0x4ac567*/
  }
  v12 = 0; /*0x4ac56d*/
  if ( v0 ) /*0x4ac575*/
  {
    v10 = v1 / v0; /*0x4ac57a*/
    v6 = v2 / v0; /*0x4ac583*/
    v11 = v2 / v0; /*0x4ac58a*/
    v12 = 0 / v0; /*0x4ac58e*/
  }
  else
  {
    v10 = *HouseClass::GetStartCoords(HouseClass_Player, v13); /*0x4ac5aa*/
    v6 = HouseClass::GetStartCoords(HouseClass_Player, v13)[1]; /*0x4ac5ba*/
    v11 = v6; /*0x4ac5bd*/
  }
  LOWORD(v9) = v10 / 256; /*0x4ac5d3*/
  HIWORD(v9) = v6 / 256; /*0x4ac5e6*/
  *(_DWORD *)((char *)MEMORY[0xA8B230] + 13466) = v9; /*0x4ac5f4*/
  *(_DWORD *)((char *)MEMORY[0xA8B230] + 13462) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13466); /*0x4ac605*/
  *(_DWORD *)((char *)MEMORY[0xA8B230] + 13458) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13462); /*0x4ac616*/
  *(_DWORD *)((char *)MEMORY[0xA8B230] + 13454) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13458); /*0x4ac627*/
  result = MEMORY[0xA8B230]; /*0x4ac62d*/
  *((_DWORD *)MEMORY[0xA8B230] + 132) = *((_DWORD *)MEMORY[0xA8B230] + 131); /*0x4ac638*/
  if ( MEMORY[0x887324] ) /*0x4ac646*/
    return (void *)Tactical::SetTacticalPosition((int)MEMORY[0x887324], &v10); /*0x4ac64d*/
  return result; /*0x4ac5c5*/
}


// ==== 0x004AC660  BuildingClass::TogglePower  this=SidebarClass  sig=csp ====
char __thiscall BuildingClass::TogglePower(_BYTE *this, IUnknown *aP1)
{
  int v3; // eax
  char v4; // bl
  int v5; // edx

  LOBYTE(v3) = this->q11B1; /*0x4ac668*/
  v4 = v3; /*0x4ac671*/
  if ( aP1 == (IUnknown *)-1 ) /*0x4ac673*/
  {
    v4 = (_BYTE)v3 == 0; /*0x4ac688*/
  }
  else if ( aP1 ) /*0x4ac677*/
  {
    if ( aP1 == (IUnknown *)1 ) /*0x4ac67c*/
      v4 = 1; /*0x4ac67e*/
  }
  else
  {
    v4 = 0; /*0x4ac682*/
  }
  if ( v4 != (_BYTE)v3 ) /*0x4ac68d*/
  {
    v3 = this->q11A8; /*0x4ac68f*/
    if ( !v3 ) /*0x4ac697*/
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(this->q048)(this, 0, 0); /*0x4ac6a1*/
      this->q11B0 = 0; /*0x4ac6a6*/
      this->q11B2 = 0; /*0x4ac6ad*/
      this->q11B3 = 0; /*0x4ac6b4*/
      this->q11B4 = 0; /*0x4ac6bb*/
      if ( v4 && *(int *)&HouseClass_Player->__pad_2B8[56] > 0 ) /*0x4ac6d2*/
      {
        this->q11B1 = 1; /*0x4ac6d4*/
        LOBYTE(v3) = MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac6db*/
      }
      else
      {
        v5 = *(_DWORD *)this; /*0x4ac6e5*/
        this->q11B1 = 0; /*0x4ac6e9*/
        LOBYTE(v3) = (*(char (__thiscall **)(_BYTE *))(v5 + 80))(this); /*0x4ac6f0*/
      }
    }
  }
  return v3; /*0x4ac6e0*/
}


// ==== 0x004AC700  TacticalClass::SetDisplayMode  this=TacticalClass  sig=csp ====
_DWORD *__thiscall TacticalClass_SetDisplayMode(_BYTE *this, _DWORD *a2, char a3)
{
  _DWORD *result; // eax
  char v5; // cl
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // edx

  result = a2; /*0x4ac700*/
  v5 = this->q11B3; /*0x4ac70b*/
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
    result = (_DWORD *)this->q11A8; /*0x4ac733*/
    if ( !result ) /*0x4ac73b*/
    {
      this->q11B0 = 0; /*0x4ac741*/
      this->q11B1 = 0; /*0x4ac748*/
      this->q11B2 = 0; /*0x4ac74f*/
      this->q11B4 = 0; /*0x4ac756*/
      v7 = TacticalClass::updateVisibility((int *)HouseClass_Player); /*0x4ac763*/
      if ( v6 ) /*0x4ac76a*/
      {
        if ( v7 == -1 && (!a3 || *((_DWORD *)HouseClass_Player + 131) == -1) ) /*0x4ac786*/
        {
          v8 = *(_DWORD *)this; /*0x4ac788*/
          this->q11B3 = 0; /*0x4ac78c*/
          result = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(v8 + 80))(this); /*0x4ac793*/
          this->q11BC = 0; /*0x4ac796*/
        }
        else
        {
          this->q11B3 = 1; /*0x4ac7a7*/
          if ( !a3 ) /*0x4ac7ae*/
            *((_DWORD *)HouseClass_Player + 131) = v7; /*0x4ac7b6*/
          return (_DWORD *)MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac7bc*/
        }
      }
      else
      {
        v9 = *(_DWORD *)this; /*0x4ac7c6*/
        this->q11B3 = 0; /*0x4ac7ca*/
        (*(void (__thiscall **)(_BYTE *))(v9 + 80))(this); /*0x4ac7d1*/
        result = (_DWORD *)this->q11BC; /*0x4ac7d4*/
        if ( result ) /*0x4ac7dc*/
        {
          *result = this->u32_11C0; /*0x4ac7ea*/
          result[1] = this->u32_11C4; /*0x4ac7ef*/
          result[2] = this->q472; /*0x4ac7f5*/
          this->q11BC = 0; /*0x4ac7f8*/
          return (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x4ac80a*/
        }
      }
    }
  }
  return result; /*0x4ac7a0*/
}


// ==== 0x004AC820  TacticalClass::SetObserverMode  this=TacticalClass  sig=csp ====
char __thiscall TacticalClass_SetObserverMode(_BYTE *this, int a2)
{
  int v3; // eax
  char v4; // bl
  int v5; // edx

  LOBYTE(v3) = this->q11B2; /*0x4ac828*/
  v4 = v3; /*0x4ac831*/
  if ( a2 == -1 ) /*0x4ac833*/
  {
    v4 = (_BYTE)v3 == 0; /*0x4ac848*/
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
  if ( v4 != (_BYTE)v3 ) /*0x4ac84d*/
  {
    v3 = this->q11A8; /*0x4ac84f*/
    if ( !v3 ) /*0x4ac857*/
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(this->field48)(this, 0, 0); /*0x4ac861*/
      this->q11B0 = 0; /*0x4ac866*/
      this->q11B1 = 0; /*0x4ac86d*/
      this->q11B3 = 0; /*0x4ac874*/
      this->q11B4 = 0; /*0x4ac87b*/
      if ( v4 && *((int *)HouseClass_Player + 188) > 0 ) /*0x4ac892*/
      {
        this->q11B2 = 1; /*0x4ac894*/
        LOBYTE(v3) = MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac89b*/
      }
      else
      {
        v5 = *(_DWORD *)this; /*0x4ac8a5*/
        this->q11B2 = 0; /*0x4ac8a9*/
        LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *))(v5 + 80))(this); /*0x4ac8b0*/
      }
    }
  }
  return v3; /*0x4ac8a0*/
}


// ==== 0x004AC8C0  BuildingClass::TogglePower2  this=SidebarClass  sig=csp ====
char __thiscall BuildingClass::TogglePower2(_BYTE *this, IUnknown *aP1)
{
  int v3; // eax
  char v4; // bl
  int v5; // eax
  int v6; // edx

  LOBYTE(v3) = this->q11B0; /*0x4ac8c8*/
  v4 = v3; /*0x4ac8d1*/
  if ( aP1 == (IUnknown *)-1 ) /*0x4ac8d3*/
  {
    v4 = (_BYTE)v3 == 0; /*0x4ac8e8*/
  }
  else if ( aP1 ) /*0x4ac8d7*/
  {
    if ( aP1 == (IUnknown *)1 ) /*0x4ac8dc*/
      v4 = 1; /*0x4ac8de*/
  }
  else
  {
    v4 = 0; /*0x4ac8e2*/
  }
  if ( v4 != (_BYTE)v3 ) /*0x4ac8ed*/
  {
    v3 = this->q11A8; /*0x4ac8ef*/
    if ( !v3 ) /*0x4ac8f7*/
    {
      v5 = *(_DWORD *)this; /*0x4ac8f9*/
      this->q11B1 = 0; /*0x4ac901*/
      this->q11B2 = 0; /*0x4ac908*/
      this->q11B3 = 0; /*0x4ac90f*/
      this->q11B4 = 0; /*0x4ac916*/
      (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(v5 + 72))(this, 0, 0); /*0x4ac91d*/
      if ( v4 && *(int *)&HouseClass_Player->__pad_2B8[56] > 0 ) /*0x4ac932*/
      {
        this->q11B0 = 1; /*0x4ac934*/
        LOBYTE(v3) = MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac93b*/
      }
      else
      {
        v6 = *(_DWORD *)this; /*0x4ac945*/
        this->q11B0 = 0; /*0x4ac949*/
        LOBYTE(v3) = (*(char (__thiscall **)(_BYTE *))(v6 + 80))(this); /*0x4ac950*/
      }
    }
  }
  return v3; /*0x4ac940*/
}


// ==== 0x004AC960  MapClass::ToggleZoom  this=MapClass  sig=csp ====
int __thiscall MapClass_ToggleZoom(int *this, int a2)
{
  int result; // eax
  char v4; // bl
  int v5; // edx
  int v6; // eax

  result = a2; /*0x4ac960*/
  v4 = this->q11B0; /*0x4ac96b*/
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
  if ( v4 != this->q11B4 ) /*0x4ac98f*/
  {
    result = this->q11A8; /*0x4ac991*/
    if ( !result ) /*0x4ac999*/
    {
      if ( v4 /*0x4ac9ad*/
        && !(unsigned __int8)((_DWORD (__stdcall *)(_DWORD))MapClass::isCellAccessible)(*((_DWORD *)HouseClass_Player
                                                                                        + 12)) )
      {
        v4 = 0; /*0x4ac9b6*/
      }
      v5 = *this; /*0x4ac9b8*/
      this->q11B1 = 0; /*0x4ac9c0*/
      this->q11B2 = 0; /*0x4ac9c7*/
      this->q11B3 = 0; /*0x4ac9ce*/
      this->q11B0 = 0; /*0x4ac9d5*/
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v5 + 72))(this, 0, 0); /*0x4ac9dc*/
      if ( v4 ) /*0x4ac9e1*/
      {
        this->q11B4 = 1; /*0x4ac9e3*/
        return MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac9ea*/
      }
      else
      {
        v6 = *this; /*0x4ac9f4*/
        this->q11B4 = 0; /*0x4ac9f8*/
        return (*(int (__thiscall **)(int *))(v6 + 80))(this); /*0x4ac9ff*/
      }
    }
  }
  return result; /*0x4ac9ef*/
}


// ==== 0x004ACA10  ObjectPlacement::CalcPosition_Wrapper  this=ObjectPlacement  sig=csp ====
int *__stdcall ObjectPlacement::CalcPosition_Wrapper(MouseClass *aP0, IUnknown *aP1, char a3)
{
  _DWORD *v3; // eax
  char v4; // cl
  int *v5; // edx
  int a1[3]; // [esp+4h] [ebp-Ch] BYREF

  v3 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP1); /*0x4aca1e*/
  v4 = (v3[80] & 0x100) != 0 && aP1->field_8 >= *(_DWORD *)&stru_89E138.__pad_14B0[4440] * (*((char *)v3 + 283) + 4); /*0x4aca46*/
  v5 = ObjectPlacement::CalcPosition(v3, a1, aP1, a3, v4, 0); /*0x4aca64*/
  aP0->field_0 = *v5; /*0x4aca6e*/
  aP0->field_4 = (void *)v5[1]; /*0x4aca73*/
  aP0->field_8 = (void *)v5[2]; /*0x4aca7a*/
  return &aP0->field_0; /*0x4aca76*/
}


// ==== 0x004ACAC0  MapClass::ProcessVisibilityFlags  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessVisibilityFlags(_DWORD *this)
{
  int i; // ebp
  MouseClass *j; // edi
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
    for ( j = 0; (int)j < 512; j = (MouseClass *)((char *)j + 1) ) /*0x4acad0*/
    {
      v10 = (__int16)j; /*0x4acad9*/
      v11 = i; /*0x4acade*/
      if ( LayerClass::CoordinatesLegal(this, (IUnknown *)&v10) ) /*0x4acae3*/
      {
        v12[0] = (__int16)j; /*0x4acaf0*/
        v12[1] = i; /*0x4acaf8*/
        v4 = CellCoord::To_CellObj(this, v12); /*0x4acafd*/
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
      if ( LayerClass::CoordinatesLegal(this, (IUnknown *)&v10) /*0x4acb5a*/
        && (*((_BYTE *)CellCoord::To_CellObj(this, &v10) + 320) & 0x20) != 0 )
      {
        v8 = CellCoord::To_CellObj(this, &v10); /*0x4acb63*/
        v8[80] &= ~0x20u; /*0x4acb7a*/
        MapClass::RevealCell(this, (MouseClass *)&v10); /*0x4acb7f*/
      }
    }
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x4acb9c*/
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 56))(this, 1); /*0x4acbaa*/
}


// ==== 0x004ACBC0  MapClass::ProcessFogTransition  this=IUnknown  sig=csp ====
int __thiscall MapClass::ProcessFogTransition(_DWORD *this)
{
  int i; // eax
  int v3; // ecx
  int result; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset(this); /*0x4acbc4*/
  for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) ) /*0x4acbd2*/
  {
    v3 = *(_DWORD *)(i + 320); /*0x4acbd4*/
    if ( (v3 & 1) == 0 && (v3 & 2) != 0 ) /*0x4acbe2*/
      *(_DWORD *)(i + 320) = v3 | 0x40; /*0x4acbe7*/
  }
  HouseClass::RevealShroudForAllies(0, 1); /*0x4acbfe*/
  LayerClass::CellIteratorReset(this); /*0x4acc05*/
  for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(this) ) /*0x4acc13*/
  {
    if ( (*(_BYTE *)(result + 320) & 0x40) != 0 ) /*0x4acc1c*/
    {
      *(_DWORD *)(result + 320) &= ~0x40u; /*0x4acc27*/
      v5 = *(_DWORD *)(result + 36); /*0x4acc34*/
      CellClass::ProcessVisibility(this, (MouseClass *)&v5); /*0x4acc3b*/
    }
  }
  return result; /*0x4acc4b*/
}


// ==== 0x004ACC50  CellClass::ProcessVisibility  this=IUnknown  sig=csp ====
char __thiscall CellClass::ProcessVisibility(_DWORD *this, MouseClass *aP1)
{
  char result; // al
  IUnknown *v5; // ecx
  int v6; // eax
  int i; // ebp
  int v8; // eax
  IUnknown *v9; // esi
  int AdjacentPassableMask; // eax
  int v11; // ecx
  IUnknown *v12; // [esp+8h] [ebp-10h]
  IUnknown *v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h] BYREF
  IUnknown *v15; // [esp+14h] [ebp-4h]
  bool aP1a; // [esp+1Ch] [ebp+4h]

  result = LayerClass::CoordinatesLegal(this, (IUnknown *)aP1); /*0x4acc5c*/
  if ( result ) /*0x4acc63*/
  {
    v5 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)aP1); /*0x4acc71*/
    v15 = v5; /*0x4acc78*/
    v6 = v5->field_140; /*0x4acc7c*/
    aP1a = (v6 & 3) != 0; /*0x4acc86*/
    LOBYTE(v6) = v6 & 0xFC; /*0x4acc8b*/
    v5->__pad_11C[5] = -2; /*0x4acc8d*/
    v5->field_140 = v6; /*0x4acc94*/
    if ( (v5->__pad_11C[16] & 8) != 0 ) /*0x4acca2*/
      Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v5); /*0x4accab*/
    for ( i = 0; i < 8; ++i ) /*0x4accb2*/
    {
      v8 = i & 7; /*0x4accb9*/
      LOWORD(v12) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v8) + LOWORD(aP1->field_0); /*0x4accd7*/
      HIWORD(v12) = HIWORD(aP1->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v8); /*0x4acce0*/
      v13 = v12; /*0x4accec*/
      v9 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v13); /*0x4accfb*/
      v14 = v9->field_24; /*0x4acd07*/
      AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&v14, 1); /*0x4acd0b*/
      if ( AdjacentPassableMask != -2 || v9->__pad_11C[5] == -2 ) /*0x4acd1b*/
      {
        v11 = v9->field_140; /*0x4acd2b*/
        if ( ((v11 & 1) != 0 || AdjacentPassableMask != v9->__pad_11C[5]) /*0x4acd4c*/
          && AdjacentPassableMask >= 0
          && v9->__pad_11C[5] >= -1 )
        {
          v9->__pad_11C[5] = AdjacentPassableMask; /*0x4acd51*/
          v9->field_140 = v11 & 0xFFFFFFFC | 2; /*0x4acd5b*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v9); /*0x4acd67*/
        }
      }
      else
      {
        CellClass::ProcessVisibility(this, (MouseClass *)&v13); /*0x4acd24*/
      }
    }
    result = aP1a; /*0x4acd76*/
    if ( aP1a ) /*0x4acd7e*/
      return CellClass::CreateFoggedObjects(v15); /*0x4acd84*/
  }
  return result; /*0x4acd89*/
}


// ==== 0x004ACDA0  MapClass::RevealCell  this=IUnknown  sig=csp ====
char __thiscall MapClass::RevealCell(_DWORD *this, MouseClass *aP1)
{
  MouseClass *v2; // esi
  IUnknown *v4; // eax
  int v5; // ecx
  int i; // edi
  int v7; // eax
  MouseClass *v9; // [esp+8h] [ebp-4h]

  v2 = aP1; /*0x4acda3*/
  LOBYTE(v4) = LayerClass::CoordinatesLegal(this, (IUnknown *)aP1); /*0x4acdaa*/
  if ( (_BYTE)v4 ) /*0x4acdb1*/
  {
    v4 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)v2); /*0x4acdba*/
    v5 = *(_DWORD *)&v4->__pad_11C[16]; /*0x4acdbf*/
    if ( (v5 & 8) != 0 ) /*0x4acdc8*/
    {
      *(_DWORD *)&v4->__pad_11C[16] = v5 & 0xFFFFFFE7; /*0x4acdd2*/
      Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x4acddf*/
      for ( i = 0; i < 8; ++i ) /*0x4acde4*/
      {
        v7 = i & 7; /*0x4acde8*/
        LOWORD(v9) = LOWORD(v2->field_0) + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v7); /*0x4ace09*/
        HIWORD(v9) = HIWORD(v2->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v7); /*0x4ace12*/
        aP1 = v9; /*0x4ace1e*/
        v4 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&aP1); /*0x4ace22*/
        if ( aP1 != (MouseClass *)v2->field_0 ) /*0x4ace2f*/
        {
          *(_DWORD *)&v4->__pad_11C[16] &= ~0x10u; /*0x4ace46*/
          LOBYTE(v4) = Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x4ace52*/
        }
      }
    }
  }
  return (char)v4; /*0x4ace5e*/
}


// ==== 0x004ACE70  DisplayClass::LoadMapData  this=DisplayClass  sig=csp ====
void __thiscall ScenarioClass::LoadMapData(int *this, CCINIClass *aP1)
{
  unsigned int *v3; // eax
  int v4; // edx
  char v5; // bl
  ObjectClass *i; // esi
  int v7; // eax
  char v8; // cl
  int v9; // esi
  int theater; // ecx
  int altHomeCell; // edx
  int uniqueId; // eax
  int v13; // eax
  CCINIClass *StringByIndex; // esi
  CCINIClass *v15; // ecx
  char *v16; // esi
  IUnknown *v17; // eax
  IUnknown *v18; // esi
  _DWORD *v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  size_t v24; // esi
  int v25; // ebp
  AbstractClass *Base64Data; // ebp
  int v27; // ebp
  AbstractClass *v28; // ebp
  int v29; // ebp
  AbstractClass *v30; // ebp
  int v31; // ebp
  AbstractClass *v32; // ebp
  int v33; // ebp
  AbstractClass *v34; // esi
  int v35; // ebp
  MouseClass *v36; // esi
  unsigned int *v37; // eax
  #376 *v38; // [esp+Ch] [ebp-134h]
  _DWORD v39[3]; // [esp+1Ch] [ebp-124h] BYREF
  int v40; // [esp+28h] [ebp-118h]
  int v41; // [esp+2Ch] [ebp-114h]
  int v42[3]; // [esp+30h] [ebp-110h] BYREF
  int KeyCount; // [esp+3Ch] [ebp-104h] BYREF
  CCINIClass *aP2; // [esp+40h] [ebp-100h]
  int sectionCount; // [esp+44h] [ebp-FCh] BYREF
  char *Int_Overwrite; // [esp+48h] [ebp-F8h]
  CCINIClass v47; // [esp+4Ch] [ebp-F4h] BYREF
  INIClass Source[2]; // [esp+C0h] [ebp-80h] BYREF

  *(_DWORD *)&v47.__pad_20[4] = this; /*0x4ace85*/
  INIClass::ResetSection(aP1); /*0x4ace89*/
  v47.INIClass_field_3C = 50; /*0x4ace97*/
  *(_DWORD *)&v47.ownsFile = 50; /*0x4ace9b*/
  *(_DWORD *)&v47.needsSave_flag = 1; /*0x4aceb9*/
  v47.unknown38 = 1; /*0x4acec0*/
  v3 = INIClass::ParseValue( /*0x4acec7*/
         (int)aP1,
         &v47,
         (INIClass *)&MEMORY[0x81FFE4].headNode[2],
         (unsigned __int8 *)g_INI_Key_Size,
         (MouseClass *)&v47.needsSave_flag);
  *(_DWORD *)&v47.__pad_41[3] = *v3; /*0x4acece*/
  *(_DWORD *)v47.__pad_48 = v3[1]; /*0x4aced8*/
  v47.CCINIClass_field_4C = v3[2]; /*0x4acee4*/
  v4 = *this; /*0x4aceeb*/
  v47.unknown50 = v3[3]; /*0x4acef1*/
  (*(void (__thiscall **)(int *))(v4 + 96))(this); /*0x4acef8*/
  v5 = 0; /*0x4acefe*/
  (*(void (__thiscall **)(int *, char *, int, _DWORD, int))(*this + 112))(this, &v47.__pad_41[3], 1, 0, 1); /*0x4acf0d*/
  Int_Overwrite = (char *)INIClass::ReadInt_Overwrite( /*0x4acf28*/
                            (int)aP1,
                            (unsigned __int8 *)&MEMORY[0x81FFE4].headNode[2],
                            &aLevel,
                            0);
  sectionCount = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58072]; /*0x4acf47*/
  aP2 = 0; /*0x4acf4b*/
  INIClass::GetString( /*0x4acf4f*/
    (unsigned __int8 ***)aP1,
    (INIClass *)&MEMORY[0x81FFE4].headNode[2],
    aFill,
    &g_INI_Key_Clear,
    (INIClass *)&v47.unknown54,
    32);
  if ( !_strcmpi((char *)&v47.unknown54, g_INI_Key_Water) ) /*0x4acf61*/
  {
    aP2 = (CCINIClass *)3; /*0x4acf73*/
    sectionCount = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648]; /*0x4acf7b*/
  }
  LayerClass::CellIteratorReset(this); /*0x4acf81*/
  for ( i = (ObjectClass *)LayerClass::CellIteratorNext(this); i; i = (ObjectClass *)LayerClass::CellIteratorNext(this) ) /*0x4acf91*/
  {
    v7 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)aP2); /*0x4acfa5*/
    v8 = (_BYTE)Int_Overwrite + HIBYTE(i[1].health); /*0x4acfba*/
    i->attachedBomb = (void *)(sectionCount + v7); /*0x4acfbc*/
    HIBYTE(i[1].health) = v8; /*0x4acfbf*/
    BYTE2(i[1].health) = 0; /*0x4acfc7*/
  }
  MEMORY[0xA8B230]->theater = ScenarioClass::ReadAndParseString( /*0x4acff0*/
                                (unsigned __int8 ***)aP1,
                                (INIClass *)&MEMORY[0x81FFE4].headNode[2],
                                (unsigned __int8 *)&unk_818658,
                                0);
  (*(void (__thiscall **)(int *, int))(*this + 24))(this, MEMORY[0xA8B230]->theater); /*0x4ad007*/
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 63); /*0x4ad011*/
  Event::Dispatch(); /*0x4ad016*/
  v9 = MEMORY[0xA8B230]->random[0]; /*0x4ad026*/
  LoadObjectTypeClassTheaterSHP(MEMORY[0xA8B230]->theater); /*0x4ad02c*/
  theater = MEMORY[0xA8B230]->theater; /*0x4ad03c*/
  if ( theater == dword_822CF8 ) /*0x4ad044*/
    ResetAllTechnoField776(); /*0x4ad04f*/
  else
    LoadTerrainTypeClassTheatre(theater, 1); /*0x4ad048*/
  MEMORY[0xA8B230]->random[0] = v9 + 10000; /*0x4ad05f*/
  LoadBuildingTypeClassSHPs(MEMORY[0xA8B230]->theater); /*0x4ad071*/
  BuildingTypeClass::LoadRepairAnimations(v38); /*0x4ad082*/
  LoadBuildingTypeClassTheatreSHP(MEMORY[0xA8B230]->theater); /*0x4ad092*/
  LoadFactoryClassTheaterSHP(MEMORY[0xA8B230]->theater); /*0x4ad0a3*/
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 65); /*0x4ad0af*/
  Event::Dispatch(); /*0x4ad0b4*/
  ScenarioClass::ReadWaypoints((__int16 *)MEMORY[0xA8B230], aP1); /*0x4ad0c0*/
  if ( !ScenarioClass::Is_Waypoint_Valid((char *)MEMORY[0xA8B230], MEMORY[0xA8B230]->altHomeCell) ) /*0x4ad0d2*/
  {
    altHomeCell = MEMORY[0xA8B230]->altHomeCell; /*0x4ad0f2*/
    LOWORD(aP2) = (this->q03D + this->q0F8) / 2; /*0x4ad0fa*/
    HIWORD(aP2) = (_WORD)aP2; /*0x4ad0ff*/
    ScenarioClass::Set_Waypoint((char *)MEMORY[0xA8B230], altHomeCell, (ScenarioClass *)aP2); /*0x4ad10a*/
  }
  if ( MEMORY[0xA8B230]->globalVariables[40] ) /*0x4ad115*/
    uniqueId = MEMORY[0xA8B230]->uniqueId; /*0x4ad11d*/
  else
    uniqueId = MEMORY[0xA8B230]->altHomeCell; /*0x4ad125*/
  v13 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &KeyCount, uniqueId); /*0x4ad13c*/
  Int_Overwrite = (char *)v13; /*0x4ad13e*/
  *(int *)((char *)MEMORY[0xA8B230]->view3 + 2) = v13; /*0x4ad142*/
  *(int *)((char *)MEMORY[0xA8B230]->view2 + 2) = *(int *)((char *)MEMORY[0xA8B230]->view3 + 2); /*0x4ad157*/
  *(int *)((char *)MEMORY[0xA8B230]->view1 + 2) = *(int *)((char *)MEMORY[0xA8B230]->view2 + 2); /*0x4ad171*/
  *(int *)((char *)&MEMORY[0xA8B230]->localVariables[1024] + 2) = *(int *)((char *)MEMORY[0xA8B230]->view1 + 2); /*0x4ad183*/
  v47.INIClass_field_2C = (SHIWORD(Int_Overwrite) << 8) + 128; /*0x4ad19c*/
  *(_DWORD *)&v47.__pad_20[8] = ((__int16)v13 << 8) + 128; /*0x4ad1a6*/
  v47.unknown30 = 0; /*0x4ad1aa*/
  Tactical::SetTacticalPosition(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)&v47.__pad_20[8]); /*0x4ad1ae*/
  KeyCount = INIClass::GetKeyCount(aP1->__pad_0, &MEMORY[0x81FFE4]); /*0x4ad1c1*/
  for ( aP2 = 0; (int)aP2 < KeyCount; aP2 = (CCINIClass *)((char *)aP2 + 1) ) /*0x4ad1c9*/
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex(aP1->__pad_0, (CCINIClass *)&MEMORY[0x81FFE4], aP2); /*0x4ad1ec*/
    if ( INIClass::GetString( /*0x4ad1fc*/
           (unsigned __int8 ***)aP1,
           &MEMORY[0x81FFE4],
           (unsigned __int8 *)StringByIndex,
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Source,
           128) )
    {
      Int_Overwrite = TagTypeClass::FindOrCreate(Source[0].__pad_0); /*0x4ad211*/
    }
    else
    {
      Int_Overwrite = 0; /*0x4ad217*/
    }
    v15 = (CCINIClass *)atoi(StringByIndex->__pad_0); /*0x4ad221*/
    if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[656] < 4 ) /*0x4ad22e*/
    {
      LOWORD(v47.sectionCount) = (int)v15 % 128; /*0x4ad270*/
      HIWORD(v47.sectionCount) = (int)v15 / 128; /*0x4ad27e*/
      sectionCount = v47.sectionCount; /*0x4ad287*/
    }
    else
    {
      *(_WORD *)v47.__pad_20 = (int)v15 % 1000; /*0x4ad23f*/
      *(_WORD *)&v47.__pad_20[2] = (int)v15 / 1000; /*0x4ad250*/
      sectionCount = *(_DWORD *)v47.__pad_20; /*0x4ad259*/
    }
    v16 = Int_Overwrite; /*0x4ad28b*/
    if ( Int_Overwrite ) /*0x4ad291*/
    {
      if ( !*((_DWORD *)CellCoord::To_CellObj(this, (__int16 *)&sectionCount) + 15) ) /*0x4ad2a3*/
      {
        v17 = (IUnknown *)TeamClass::FindOrCreate(v16); /*0x4ad2aa*/
        v18 = v17; /*0x4ad2af*/
        if ( v17 ) /*0x4ad2b3*/
        {
          ScenarioClass::checkMissionObjectives(v17, sectionCount); /*0x4ad2bc*/
          v19 = CellCoord::To_CellObj(this, (__int16 *)&sectionCount); /*0x4ad2c9*/
          ObjectClass::SetTriggerTarget(v19, (int)v18); /*0x4ad2d0*/
          v20 = this->q1164; /*0x4ad2d5*/
          if ( this->q116C < v20 /*0x4ad303*/
            || (this->q1169 || !v20)
            && (v21 = this->q1170, v21 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->q115C + 8))(this + 1111, v21 + v20, 0) )
          {
            v22 = this->q116C; /*0x4ad30a*/
            v23 = this->q1160; /*0x4ad30d*/
            this->q116C = v22 + 1; /*0x4ad313*/
            *(_DWORD *)(v23 + 4 * v22) = sectionCount; /*0x4ad31a*/
          }
        }
      }
    }
  }
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 67); /*0x4ad339*/
  Event::Dispatch(); /*0x4ad33e*/
  Surface::Construct(v39, (ObjectClass *)0x280, (IUnknown *)0x190); /*0x4ad351*/
  v40 = 0; /*0x4ad360*/
  v39[0] = &XSurface_Vtable; /*0x4ad364*/
  v41 = 2; /*0x4ad36c*/
  Buffer::Init(v42, 0, (AbstractClass *)0x7D000); /*0x4ad374*/
  v24 = v39[1] * v41 * v39[2]; /*0x4ad386*/
  v25 = v42[0]; /*0x4ad38b*/
  ++v40; /*0x4ad390*/
  v39[0] = &BSurface_Vtable; /*0x4ad398*/
  BSurface::GetBytesPerPixel(v39); /*0x4ad3a0*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad3ae*/
  Base64Data = (AbstractClass *)INIClass::GetBase64Data(aP1, MEMORY[0x820024], v25, v24); /*0x4ad3c0*/
  if ( (int)Base64Data > 0 ) /*0x4ad3c4*/
  {
    ++v40; /*0x4ad3cf*/
    KeyCount = v42[0]; /*0x4ad3d7*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad3df*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad3ea*/
    v47.headNode[0] = 0; /*0x4ad3f7*/
    v47.headNode[1] = 0; /*0x4ad3fb*/
    *(_DWORD *)v47.__pad_0 = &vt_Straw; /*0x4ad3ff*/
    Buffer::Init(&v47.headNode[2], KeyCount, Base64Data); /*0x4ad407*/
    v47.sectionHead[2] = 0; /*0x4ad416*/
    *(_DWORD *)v47.__pad_0 = &vt_BufferStraw; /*0x4ad41a*/
    CellClass::LoadTerrainTiles(&MEMORY[0x87F7E8], (int)&v47); /*0x4ad422*/
    --v40; /*0x4ad430*/
    Vector::Clear((int)&v47.headNode[2]); /*0x4ad434*/
    Straw::Dtor((int *)v47.__pad_0); /*0x4ad43d*/
  }
  v27 = v42[0]; /*0x4ad446*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad456*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad461*/
  v28 = (AbstractClass *)INIClass::GetBase64Data(aP1, &MEMORY[0x81FFE4].needsSave_flag, v27, v24); /*0x4ad473*/
  if ( (int)v28 > 0 ) /*0x4ad477*/
  {
    ++v40; /*0x4ad482*/
    KeyCount = v42[0]; /*0x4ad48a*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad492*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad49d*/
    v47.headNode[0] = 0; /*0x4ad4aa*/
    v47.headNode[1] = 0; /*0x4ad4ae*/
    *(_DWORD *)v47.__pad_0 = &vt_Straw; /*0x4ad4b2*/
    Buffer::Init(&v47.headNode[2], KeyCount, v28); /*0x4ad4ba*/
    v47.sectionHead[2] = 0; /*0x4ad4c9*/
    *(_DWORD *)v47.__pad_0 = &vt_BufferStraw; /*0x4ad4cd*/
    CellClass::CreateOverlay(&MEMORY[0x87F7E8], (int)&v47); /*0x4ad4d5*/
    --v40; /*0x4ad4e3*/
    Vector::Clear((int)&v47.headNode[2]); /*0x4ad4e7*/
    Straw::Dtor((int *)v47.__pad_0); /*0x4ad4f0*/
  }
  v29 = v42[0]; /*0x4ad4f9*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad509*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad514*/
  v30 = (AbstractClass *)INIClass::GetBase64Data(aP1, &MEMORY[0x81FFE4].__pad_20[8], v29, v24); /*0x4ad526*/
  if ( (int)v30 > 0 ) /*0x4ad52a*/
  {
    ++v40; /*0x4ad535*/
    KeyCount = v42[0]; /*0x4ad53d*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad545*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad550*/
    v47.headNode[0] = 0; /*0x4ad55d*/
    v47.headNode[1] = 0; /*0x4ad561*/
    *(_DWORD *)v47.__pad_0 = &vt_Straw; /*0x4ad565*/
    Buffer::Init(&v47.headNode[2], KeyCount, v30); /*0x4ad56d*/
    v47.sectionHead[2] = 0; /*0x4ad57c*/
    *(_DWORD *)v47.__pad_0 = &vt_BufferStraw; /*0x4ad580*/
    CellClass::DecompressRawCellData(&MEMORY[0x87F7E8], (int)&v47); /*0x4ad588*/
    --v40; /*0x4ad596*/
    Vector::Clear((int)&v47.headNode[2]); /*0x4ad59a*/
    Straw::Dtor((int *)v47.__pad_0); /*0x4ad5a3*/
  }
  v31 = v42[0]; /*0x4ad5ac*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad5bc*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad5c7*/
  v32 = (AbstractClass *)INIClass::GetBase64Data(aP1, (char *)&MEMORY[0x81FFE4].sectionCount, v31, v24); /*0x4ad5d9*/
  if ( (int)v32 > 0 ) /*0x4ad5dd*/
  {
    ++v40; /*0x4ad5e8*/
    KeyCount = v42[0]; /*0x4ad5f0*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad5f8*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad603*/
    v47.headNode[0] = 0; /*0x4ad610*/
    v47.headNode[1] = 0; /*0x4ad614*/
    *(_DWORD *)v47.__pad_0 = &vt_Straw; /*0x4ad618*/
    Buffer::Init(&v47.headNode[2], KeyCount, v32); /*0x4ad620*/
    v47.sectionHead[2] = 0; /*0x4ad62f*/
    *(_DWORD *)v47.__pad_0 = &vt_BufferStraw; /*0x4ad633*/
    CellClass::DecompressTerrainDataSimple(&MEMORY[0x87F7E8], (int)&v47); /*0x4ad63b*/
    --v40; /*0x4ad649*/
    Vector::Clear((int)&v47.headNode[2]); /*0x4ad64d*/
    Straw::Dtor((int *)v47.__pad_0); /*0x4ad656*/
  }
  v33 = v42[0]; /*0x4ad65f*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad66f*/
  (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad67a*/
  v34 = (AbstractClass *)INIClass::GetBase64Data(aP1, (char *)MEMORY[0x81FFE4].sectionHead, v33, v24); /*0x4ad68c*/
  if ( (int)v34 > 0 ) /*0x4ad690*/
  {
    v35 = v42[0]; /*0x4ad69a*/
    ++v40; /*0x4ad69f*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 112))(v39); /*0x4ad6a7*/
    (*(void (__thiscall **)(_DWORD *))(v39[0] + 116))(v39); /*0x4ad6b2*/
    v47.headNode[0] = 0; /*0x4ad6bb*/
    v47.headNode[1] = 0; /*0x4ad6bf*/
    *(_DWORD *)v47.__pad_0 = &vt_Straw; /*0x4ad6c3*/
    Buffer::Init(&v47.headNode[2], v35, v34); /*0x4ad6cb*/
    v47.sectionHead[2] = 0; /*0x4ad6d4*/
    *(_DWORD *)v47.__pad_0 = &vt_BufferStraw; /*0x4ad6de*/
    CellClass::DecompressTerrainData(&MEMORY[0x87F7E8], (MouseClass *)&v47); /*0x4ad6e6*/
    --v40; /*0x4ad6f4*/
    Vector::Clear((int)&v47.headNode[2]); /*0x4ad6f8*/
    Straw::Dtor((int *)v47.__pad_0); /*0x4ad701*/
  }
  --v40; /*0x4ad712*/
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 68); /*0x4ad716*/
  Event::Dispatch(); /*0x4ad71b*/
  if ( MEMORY[0xA8D63C].__pad_14B0[639] || MEMORY[0xA8D63C].__pad_14B0[625] ) /*0x4ad72e*/
    v5 = 1; /*0x4ad730*/
  LoadMapClassIsometricTiles(v5, MEMORY[0xA8B230]->isRandom); /*0x4ad743*/
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 69); /*0x4ad74f*/
  Event::Dispatch(); /*0x4ad754*/
  v36 = (MouseClass *)(*(_DWORD *)&v47.__pad_20[4] + 252); /*0x4ad75f*/
  v37 = INIClass::ParseValue( /*0x4ad77a*/
          (int)aP1,
          &v47,
          (INIClass *)&MEMORY[0x81FFE4].headNode[2],
          (unsigned __int8 *)g_INI_Key_LocalSize,
          (MouseClass *)(*(_DWORD *)&v47.__pad_20[4] + 236));
  v36->field_0 = *v37; /*0x4ad784*/
  v36->field_4 = (void *)v37[1]; /*0x4ad789*/
  v36->field_8 = (void *)v37[2]; /*0x4ad78f*/
  v36->field_C = (void *)v37[3]; /*0x4ad795*/
  Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], v36); /*0x4ad79d*/
  ScenarioClass::CalcMinShroudLevel(&MEMORY[0x87F7E8]); /*0x4ad7a7*/
  dword_822CF8 = MEMORY[0xA8B230]->theater; /*0x4ad7bc*/
  Vector::Clear((int)v42); /*0x4ad7c2*/
}


// ==== 0x004AD7E0  MapClass::SaveCellTagsToINI  this=IUnknown  sig=csp ====
int __thiscall MapClass::SaveCellTagsToINI(_DWORD *this, char *a2)
{
  __int16 v3; // bp
  _DWORD *v4; // ebx
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
  _DWORD *v16; // [esp+18h] [ebp-34h]
  CHAR v17[20]; // [esp+1Ch] [ebp-30h] BYREF
  int v18[3]; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v19[4]; // [esp+3Ch] [ebp-10h] BYREF
  int i; // [esp+50h] [ebp+4h]

  v3 = 0; /*0x4ad7ef*/
  v4 = this; /*0x4ad7f2*/
  v16 = this; /*0x4ad7f8*/
  INIClass::ClearSection((int)a2, (int)&MEMORY[0x81FFF0], 0); /*0x4ad7fc*/
  MapClass::loadTheaterINI(&MEMORY[0x81FFF0], unk_818658, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x4ad81b*/
  INIClass::SetRect(a2, (unsigned __int8 *)&MEMORY[0x81FFF0], g_INI_Key_Size, v4 + 59); /*0x4ad835*/
  INIClass::SetRect(a2, (unsigned __int8 *)&MEMORY[0x81FFF0], g_INI_Key_LocalSize, v4 + 63); /*0x4ad84f*/
  ScenarioClass::Write_Waypoints(a2); /*0x4ad85b*/
  INIClass::ClearSection((int)a2, (int)MEMORY[0x81FFE4], 0); /*0x4ad86a*/
  for ( i = 0; i < 512000; i += 1000 ) /*0x4ad86f*/
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
          wsprintfA(v17, MEMORY[0x817F6C], j + i); /*0x4ad8c7*/
          INIClass::SetString(a2, (unsigned __int8 *)MEMORY[0x81FFE4], v17, (char *)(*(_DWORD *)(v6 + 36) + 36)); /*0x4ad8e4*/
        }
        v4 = v16; /*0x4ad8e9*/
      }
    }
    ++v3; /*0x4ad8fe*/
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 128))(MEMORY[0x887310]); /*0x4ad92b*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 124))(MEMORY[0x887310]) * v7; /*0x4ad932*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 112))(MEMORY[0x887310]) * v8; /*0x4ad940*/
  v10 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x4ad94d*/
  v18[1] = 0; /*0x4ad956*/
  v18[2] = 0; /*0x4ad95a*/
  v18[0] = (int)&vt_Pipe; /*0x4ad95e*/
  Buffer::Init(v19, v10, v9); /*0x4ad966*/
  v19[3] = 0; /*0x4ad96f*/
  v18[0] = (int)&vt_BufferPipe; /*0x4ad979*/
  v11 = MapClass::DecompressCellData(v18); /*0x4ad990*/
  INIClass::ClearSection((int)a2, (int)MEMORY[0x820024], 0); /*0x4ad992*/
  INIClass::ClearSection((int)a2, (int)MEMORY[0x820018], 0); /*0x4ad9a0*/
  INIClass::ClearSection((int)a2, (int)MEMORY[0x82000C], 0); /*0x4ad9af*/
  INIClass::ClearSection((int)a2, (int)MEMORY[0x820000], 0); /*0x4ad9be*/
  INIClass::ClearSection((int)a2, (int)MEMORY[0x81FFF4], 0); /*0x4ad9cc*/
  if ( v11 > 0 ) /*0x4ad9d3*/
  {
    v12 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x4ad9e2*/
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)MEMORY[0x81FFF4], v12, v11); /*0x4ad9ee*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x4ad9fb*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x4ada06*/
  Vector::Clear((int)v19); /*0x4ada0d*/
  return Pipe::Dtor(v18); /*0x4ada1b*/
}


// ==== 0x004ADA30  ScenarioClass::GetScenarioData  this=ScenarioClass  sig=csp ====
int __thiscall sub_4ADA30(_DWORD *this, _DWORD *a2, int a3)
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

  *a2 = *((_DWORD *)MEMORY[0xA8B230] + 1174); /*0x4ada48*/
  a2[1] = this->q0EC; /*0x4ada5a*/
  a2[2] = this->q0F0; /*0x4ada5f*/
  a2[3] = this->q0F4; /*0x4ada65*/
  a2[4] = this->q0F8; /*0x4ada70*/
  v4 = a2 + 10; /*0x4ada7d*/
  v5 = 0; /*0x4ada82*/
  a2[5] = this->q0FC; /*0x4ada84*/
  v17 = 0; /*0x4ada86*/
  a2[6] = this->q100; /*0x4ada8d*/
  a2[7] = this->altNextScenario; /*0x4ada93*/
  a2[8] = this->q108; /*0x4ada99*/
  do /*0x4adafc*/
  {
    if ( ScenarioClass::Is_Waypoint_Valid((char *)MEMORY[0xA8B230], v5) ) /*0x4adaa3*/
    {
      *v4 = v5; /*0x4adab1*/
      v6 = 125 * *((__int16 *)ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v18, v5) + 1); /*0x4adad8*/
      v4 += 2; /*0x4adae3*/
      *(v4 - 1) = *(__int16 *)ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v19, v5) + 8 * v6; /*0x4adaed*/
      ++v17; /*0x4adaf1*/
    }
    ++v5; /*0x4adaf5*/
  }
  while ( v5 < 702 ); /*0x4adafc*/
  v7 = v4; /*0x4adb06*/
  a2[9] = v17; /*0x4adb0a*/
  v8 = (char *)(v4 + 1); /*0x4adb0c*/
  v9 = 0; /*0x4adb0f*/
  LayerClass::CellIteratorReset(this); /*0x4adb11*/
  for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) ) /*0x4adb1f*/
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
int __thiscall sub_4ADBA0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx
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
  int v16; // [esp+10h] [ebp+4h]

  *((_DWORD *)MEMORY[0xA8B230] + 1174) = *a2; /*0x4adbba*/
  this->q0EC = a2[1]; /*0x4adbc7*/
  this->q0F0 = a2[2]; /*0x4adbcc*/
  this->q0F4 = a2[3]; /*0x4adbd2*/
  v3 = this + 63; /*0x4adbd5*/
  this->q0F8 = a2[4]; /*0x4adbde*/
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
      ScenarioClass::Set_Waypoint((char *)MEMORY[0xA8B230], v5, v16); /*0x4adc48*/
      --v15; /*0x4adc52*/
    }
    while ( v15 ); /*0x4adc56*/
  }
  v7 = v4 + 1; /*0x4adc5c*/
  LayerClass::CellIteratorReset(this); /*0x4adc5f*/
  for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(this) ) /*0x4adc6d*/
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
void __stdcall Radar::UpdateReveal(char a1, IUnknown *aP1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  MouseClass *v5; // edx
  int v6; // ecx
  MouseClass *v7; // eax
  _DWORD v8[3]; // [esp+14h] [ebp-24h] BYREF
  _DWORD v9[3]; // [esp+20h] [ebp-18h] BYREF
  _DWORD v10[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&HouseClass_Player.__pad_5568[22996]; /*0x4adcd4*/
  v3 = 0; /*0x4adcdb*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22996] > 0 ) /*0x4adcdf*/
  {
    while ( 1 ) /*0x4adcf0*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984] + 4 * v3); /*0x4adcf0*/
      if ( !v4 /*0x4add1b*/
        || *(_BYTE *)(v4 + 129)
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 44))(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984]
                                                                          + 4 * v3)) == 6
        && a1 )
      {
        goto LABEL_20; /*0x4add1b*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) ) /*0x4add27*/
        break; /*0x4add27*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 /*0x4addce*/
        && *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6119)
        && (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(v4 + 540), (IUnknown *)HouseClass_Player.field_0) )
      {
        (*(void (__thiscall **)(int, _DWORD, IUnknown *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 1160))( /*0x4adde4*/
          v4,
          0,
          aP1,
          0,
          0,
          0);
        v9[0] = *(_DWORD *)(v4 + 156); /*0x4addf4*/
        v6 = *(_DWORD *)(v4 + 608); /*0x4addf8*/
        v9[1] = *(_DWORD *)(v4 + 160); /*0x4ade04*/
        v9[2] = *(_DWORD *)(v4 + 164); /*0x4ade18*/
        MapClass::RevealArea2(&stru_87C374.__pad_14B0[8132], (IUnknown *)v9, 0, (MouseClass *)(v6 + 3), 0); /*0x4ade1c*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 /*0x4ade4c*/
             && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 1518)
             && !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)v4 + 1160))( /*0x4ade68*/
          v4,
          0,
          0,
          1,
          HouseClass_Player.field_0,
          0);
        v10[0] = *(_DWORD *)(v4 + 156); /*0x4ade78*/
        v7 = (MouseClass *)(*(_DWORD *)(v4 + 608) + 3); /*0x4ade85*/
        v10[1] = *(_DWORD *)(v4 + 160); /*0x4ade88*/
        v10[2] = *(_DWORD *)(v4 + 164); /*0x4ade9c*/
        MapClass::RevealArea2(&stru_87C374.__pad_14B0[8132], (IUnknown *)v10, 0, v7, 0); /*0x4adea0*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4adeb1*/
      {
        goto LABEL_19; /*0x4adeb9*/
      }
LABEL_20:
      if ( ++v3 >= v2 ) /*0x4adec8*/
        return; /*0x4adec8*/
    }
    if ( !*(_BYTE *)(v4 + 1051) ) /*0x4add30*/
      goto LABEL_20; /*0x4add30*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 1160))(v4, 0, 0, 0, 0, 0); /*0x4add4c*/
    v8[0] = *(_DWORD *)(v4 + 156); /*0x4add5c*/
    v5 = (MouseClass *)(*(_DWORD *)(v4 + 608) + 3); /*0x4add69*/
    v8[1] = *(_DWORD *)(v4 + 160); /*0x4add6c*/
    v8[2] = *(_DWORD *)(v4 + 164); /*0x4add78*/
    MapClass::RevealArea2(&stru_87C374.__pad_14B0[8132], (IUnknown *)v8, 0, v5, 0); /*0x4add84*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4add93*/
      goto LABEL_20; /*0x4add9b*/
LABEL_19:
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1044))(v4); /*0x4adebb*/
    goto LABEL_20; /*0x4adebf*/
  }
}


// ==== 0x004ADEE0  HouseClass::ResetObjectOrders  this=HouseClass  sig=csp ====
void __stdcall HouseClass_ResetObjectOrders(char a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi

  v2 = MEMORY[0xA8EC88]; /*0x4adee1*/
  v3 = 0; /*0x4adee8*/
  if ( MEMORY[0xA8EC88] > 0 ) /*0x4adeec*/
  {
    while ( 1 ) /*0x4adefd*/
    {
      v4 = *((_DWORD *)MEMORY[0xA8EC7C] + v3); /*0x4adefd*/
      if ( !v4 /*0x4adf28*/
        || *(_BYTE *)(v4 + 129)
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 44))(*((_DWORD *)MEMORY[0xA8EC7C] + v3)) == 6 && a1 )
      {
        goto LABEL_16; /*0x4adf28*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) ) /*0x4adf34*/
        break; /*0x4adf34*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 /*0x4adfa5*/
        && *((_BYTE *)MEMORY[0x8871E0] + 6119)
        && (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v4 + 540), HouseClass_Player) )
      {
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 1164))(v4, 0, a2, 0, 0); /*0x4adfb9*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4adfcb*/
      {
        goto LABEL_15; /*0x4adfd3*/
      }
LABEL_16:
      if ( ++v3 >= v2 ) /*0x4adfe2*/
        return; /*0x4adfe2*/
    }
    if ( !*(_BYTE *)(v4 + 1051) ) /*0x4adf3d*/
      goto LABEL_16; /*0x4adf3d*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 1164))(v4, 0, 0, 0, 0); /*0x4adf57*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4adf67*/
      goto LABEL_16; /*0x4adf6f*/
LABEL_15:
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1048))(v4); /*0x4adfd5*/
    goto LABEL_16; /*0x4adfd9*/
  }
}


// ==== 0x004ADFF0  HouseClass::RevealShroudForAllies  this=MouseClass  sig=csp ====
int __stdcall HouseClass_RevealShroudForAllies(char a1, int a2)
{
  int result; // eax
  int i; // ebp
  #375 **v4; // esi

  result = MEMORY[0x8A03A0]; /*0x4adff0*/
  for ( i = 0; i < MEMORY[0x8A03A0]; ++i ) /*0x4adffa*/
  {
    v4 = *(#375 ***)(MEMORY[0x8A0394] + 4 * i); /*0x4ae010*/
    if ( v4 /*0x4ae02b*/
      && ((_BYTE)v4[5] & 1) != 0
      && ((*((int (__thiscall **)(_DWORD))*v4 + 11))(*(_DWORD *)(MEMORY[0x8A0394] + 4 * i)) != 6 || !a1) )
    {
      if ( (unsigned __int8)House::IsHumanPlayer(v4[135]) ) /*0x4ae033*/
      {
        if ( *((_BYTE *)v4 + 1051) ) /*0x4ae03c*/
          (*((void (__thiscall **)(#375 **, _DWORD, int))*v4 + 72))(v4, 0, a2); /*0x4ae04d*/
      }
      else if ( (*((int (__thiscall **)(#375 **))*v4 + 11))(v4) == 6 /*0x4ae07d*/
             && HIBYTE(MEMORY[0x8871E0][1].?[2])
             && (unsigned __int8)HouseClass::IsAlliedWith(v4[135], HouseClass_Player) )
      {
        (*((void (__thiscall **)(#375 **, int, _DWORD))*v4 + 72))(v4, a2, 0); /*0x4ae08d*/
      }
    }
    result = MEMORY[0x8A03A0]; /*0x4ae093*/
  }
  return result; /*0x4ae0a4*/
}


// ==== 0x004AE290  TacticalClass::InterpolateView  this=TacticalClass  sig=csp ====
void TacticalClass_InterpolateView()
{
  wchar_t *v0; // ebp
  int v1; // edi
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  int v6; // ebx
  bool v7; // zf
  int v8; // ebx
  int *v9; // eax
  int v10; // eax
  int *v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edi
  int v15; // eax
  wchar_t *v16; // [esp+8h] [ebp-40h]
  int v17; // [esp+8h] [ebp-40h]
  int v18; // [esp+Ch] [ebp-3Ch] BYREF
  int v19; // [esp+10h] [ebp-38h]
  int v20; // [esp+14h] [ebp-34h]
  int v21; // [esp+18h] [ebp-30h]
  int v22; // [esp+1Ch] [ebp-2Ch]
  int v23; // [esp+20h] [ebp-28h]
  int v24; // [esp+24h] [ebp-24h]
  int v25; // [esp+28h] [ebp-20h]
  int v26; // [esp+2Ch] [ebp-1Ch]
  int v27[3]; // [esp+30h] [ebp-18h] BYREF
  int v28[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v0 = MEMORY[0xA8ECC8]; /*0x4ae295*/
  if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x4ae29f*/
  {
    v1 = 0; /*0x4ae2a7*/
    v2 = 0; /*0x4ae2a9*/
    v3 = 0; /*0x4ae2ab*/
    v18 = 0; /*0x4ae2af*/
    v19 = 0; /*0x4ae2b3*/
    v20 = 0; /*0x4ae2b7*/
    v4 = MEMORY[0xA8ECBC]; /*0x4ae2bd*/
    v16 = MEMORY[0xA8ECC8]; /*0x4ae2c2*/
    do /*0x4ae2fc*/
    {
      v5 = (_DWORD *)*v4++; /*0x4ae2c6*/
      v27[0] = v5[39]; /*0x4ae2d5*/
      v1 += v27[0]; /*0x4ae2d9*/
      v2 += v5[40]; /*0x4ae2e0*/
      v6 = v5[41]; /*0x4ae2e6*/
      v18 = v1; /*0x4ae2e9*/
      v3 += v6; /*0x4ae2ed*/
      v7 = v16 == (wchar_t *)1; /*0x4ae2ef*/
      v19 = v2; /*0x4ae2f0*/
      v20 = v3; /*0x4ae2f4*/
      v16 = (wchar_t *)((char *)v16 - 1); /*0x4ae2f8*/
    }
    while ( !v7 ); /*0x4ae2fc*/
    v8 = 0; /*0x4ae2fe*/
    v24 = v1; /*0x4ae302*/
    v25 = v2; /*0x4ae306*/
    v26 = v3; /*0x4ae30a*/
    if ( MEMORY[0xA8ECC8] ) /*0x4ae30e*/
    {
      v1 /= (int)MEMORY[0xA8ECC8]; /*0x4ae315*/
      v18 = v1; /*0x4ae31c*/
      v2 /= (int)MEMORY[0xA8ECC8]; /*0x4ae320*/
      v19 = v2; /*0x4ae327*/
      v3 /= (int)MEMORY[0xA8ECC8]; /*0x4ae32b*/
      v20 = v3; /*0x4ae32d*/
    }
    if ( (int)MEMORY[0xA8ECC8] > 2 ) /*0x4ae334*/
    {
      v21 = 0; /*0x4ae33c*/
      v22 = 0; /*0x4ae340*/
      v23 = 0; /*0x4ae344*/
      v17 = 0; /*0x4ae348*/
      if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x4ae34c*/
      {
        while ( 1 ) /*0x4ae384*/
        {
          v9 = Coord::Subtract( /*0x4ae384*/
                 v28,
                 v1 - *(_DWORD *)(*((_DWORD *)MEMORY[0xA8ECBC] + v8) + 156),
                 v2 - *(_DWORD *)(*((_DWORD *)MEMORY[0xA8ECBC] + v8) + 160),
                 v3 - *(_DWORD *)(*((_DWORD *)MEMORY[0xA8ECBC] + v8) + 164));
          v27[0] = *v9; /*0x4ae38b*/
          v27[1] = v9[1]; /*0x4ae396*/
          v27[2] = v9[2]; /*0x4ae39d*/
          v10 = Coord::Length(v27); /*0x4ae3a1*/
          if ( v10 > v17 ) /*0x4ae3aa*/
          {
            v17 = v10; /*0x4ae3b2*/
            v11 = (int *)(*((_DWORD *)MEMORY[0xA8ECBC] + v8) + 156); /*0x4ae3b9*/
            v21 = *v11; /*0x4ae3c1*/
            v22 = v11[1]; /*0x4ae3c8*/
            v23 = v11[2]; /*0x4ae3cf*/
          }
          v0 = MEMORY[0xA8ECC8]; /*0x4ae3d3*/
          if ( ++v8 >= (int)MEMORY[0xA8ECC8] ) /*0x4ae3dc*/
            break; /*0x4ae3dc*/
          v2 = v19; /*0x4ae354*/
          v3 = v20; /*0x4ae358*/
          v1 = v18; /*0x4ae35c*/
        }
      }
      v12 = (int)v0 - 1; /*0x4ae3fe*/
      if ( v0 == (wchar_t *)1 ) /*0x4ae405*/
      {
        v13 = 0; /*0x4ae407*/
        v14 = 0; /*0x4ae409*/
        v15 = 0; /*0x4ae40b*/
      }
      else
      {
        v13 = (v24 - v21) / v12; /*0x4ae412*/
        v14 = (v25 - v22) / v12; /*0x4ae419*/
        v15 = (v26 - v23) / v12; /*0x4ae41e*/
      }
      v18 = v13; /*0x4ae420*/
      v19 = v14; /*0x4ae424*/
      v20 = v15; /*0x4ae428*/
    }
    Tactical::SetTacticalPosition(&v18); /*0x4ae437*/
  }
}


// ==== 0x004AE450  TacticalClass::Initialize  this=TacticalClass  sig=csp ====
int __thiscall sub_4AE450(void *this)
{
  int v2; // eax

  TheatreClass::InitView(); /*0x4ae453*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x4ae45d*/
  v2 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x4ae467*/
  for ( dword_ABDC84 = 0; v2; v2 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x4ae478*/
    TacticalClass::SetView(v2, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4ae494*/
  return (*(int (__thiscall **)(void *, int))(this->field38)(this, 1); /*0x4ae4b0*/
}


// ==== 0x004AE4C0  MapClass::UpdateLightingPostProcess  this=MapClass  sig=ida-proto ====
int sub_4AE4C0()
{
  int result; // eax

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x4ae4c5*/
  for ( result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x4ae4d6*/
        result;
        result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    TacticalMap::ComputeScreenTint(result); /*0x4ae4da*/
  }
  return result; /*0x4ae4ed*/
}


// ==== 0x004AE4F0  DisplayClass::Draw  this=DisplayClass  sig=csp ====
wchar_t *__thiscall DisplayClass::_vt33(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  wchar_t *result; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  _WORD *v11; // eax
  int *v12; // eax
  int v13; // [esp-4h] [ebp-38h]
  int v14; // [esp+8h] [ebp-2Ch] BYREF
  int v15; // [esp+Ch] [ebp-28h] BYREF
  int v16; // [esp+10h] [ebp-24h] BYREF
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v18[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v19[3]; // [esp+28h] [ebp-Ch] BYREF

  if ( a2 < 500 || a2 > 900 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 104))(this) ) /*0x4ae513*/
    return 0; /*0x4ae513*/
  v3 = MEMORY[0x886FA0]; /*0x4ae524*/
  v4 = MEMORY[0x886FA4]; /*0x4ae531*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887640] + 52))(MEMORY[0x887640], v18); /*0x4ae538*/
  v6 = v5[1]; /*0x4ae54a*/
  v17[0] = *v5 - v3; /*0x4ae54d*/
  v17[1] = v6 - v4; /*0x4ae557*/
  Tactical::MouseOver(v17, (__int16 *)&v16, v19, &v15, (bool *)&v14 + 3, (bool *)&a2); /*0x4ae571*/
  if ( MEMORY[0xA8F7D8] ) /*0x4ae57e*/
  {
    swprintf(&MEMORY[0x8A0630], (const size_t)aDD_2, (const wchar_t *const)(v19[0] / 256), v19[1] / 256); /*0x4ae5ac*/
    return &MEMORY[0x8A0630]; /*0x4ae5be*/
  }
  if ( (*((_BYTE *)Coord::To_Cell(&MEMORY[0x87F7E8], v19) + 300) & 8) == 0 && g_hWnd ) /*0x4ae5e0*/
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
        v13 = *((_DWORD *)HouseClass_Player + 12); /*0x4ae635*/
        v10 = (_DWORD *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)v15 + 72))(v18); /*0x4ae63b*/
        v11 = Coord::To_Cell(&MEMORY[0x87F7E8], v10); /*0x4ae644*/
        if ( !Cell::IsPassableOffset(v11, v13) ) /*0x4ae64b*/
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
    v12 = (int *)CellCoord::To_CellObj(this, (__int16 *)&v16); /*0x4ae683*/
    return (wchar_t *)CellClass::GetUIName(v12); /*0x4ae68a*/
  }
  return result; /*0x4ae5b9*/
}


// ==== 0x004AE6B0  DisplayClass::Render  this=DisplayClass  sig=csp ====
HWND DisplayClass::_vt34()
{
  HWND result; // eax

  result = hWnd; /*0x4ae6b0*/
  if ( hWnd ) /*0x4ae6b7*/
  {
    result = (HWND)CloseWindow(hWnd); /*0x4ae6ba*/
    hWnd = 0; /*0x4ae6c0*/
  }
  return result; /*0x4ae6ca*/
}


// ==== 0x004AE6F0  DisplayClass::SetSurface  this=DisplayClass  sig=csp ====
int __stdcall DisplayClass::_vt30(_DWORD *a1)
{
  int *v1; // esi
  int result; // eax

  v1 = MEMORY[0x8A0360]; /*0x4ae6f6*/
  do /*0x4ae70c*/
  {
    result = LayerClass::Load(v1, a1); /*0x4ae6fe*/
    v1 += 6; /*0x4ae703*/
  }
  while ( (int)v1 < (int)&MEMORY[0x8A03D8] ); /*0x4ae70c*/
  return result; /*0x4ae70e*/
}


// ==== 0x004AE720  DisplayClass::GetSurface  this=DisplayClass  sig=csp ====
int __stdcall DisplayClass::_vt31(_DWORD *a1)
{
  int *v1; // esi
  int result; // eax

  v1 = MEMORY[0x8A0360]; /*0x4ae726*/
  do /*0x4ae740*/
  {
    result = LayerClass::Save(v1, a1); /*0x4ae72e*/
    if ( result < 0 ) /*0x4ae735*/
      break; /*0x4ae735*/
    v1 += 6; /*0x4ae737*/
  }
  while ( (int)v1 < (int)&MEMORY[0x8A03D8] ); /*0x4ae740*/
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

  LOBYTE(v4) = MEMORY[0xA8ED6B]; /*0x4ae753*/
  v27 = -1; /*0x4ae761*/
  LOBYTE(v26) = 0; /*0x4ae765*/
  if ( MEMORY[0xA8ED6B] ) /*0x4ae769*/
    return (char)v4; /*0x4ae769*/
  a2 = *(_DWORD *)HouseClass::ClampToUsableCell(&v28, &a2); /*0x4ae78f*/
  v5 = Waypoint::FindByCell((char *)HouseClass_Player, &a2); /*0x4ae794*/
  if ( v5 ) /*0x4ae79b*/
    WaypointClass::FindOrCreate((char *)HouseClass_Player, (int)v5, &v27, &v26); /*0x4ae7ae*/
  v6 = MEMORY[0xA8ECC8]; /*0x4ae7b3*/
  v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae7b9*/
  for ( i = 0; i < (int)MEMORY[0xA8ECC8]; ++i ) /*0x4ae7c4*/
  {
    (*(void (__thiscall **)(_DWORD *, unsigned int, int))(*v4[i] + 420))(v4[i], v27, v26); /*0x4ae7d7*/
    v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae7dd*/
    v8 = *((_DWORD *)MEMORY[0xA8ECBC] + i); /*0x4ae7e2*/
    if ( v8 && (*(_BYTE *)(v8 + 20) & 4) != 0 ) /*0x4ae7f6*/
    {
      *(_BYTE *)(v8 + 1072) = 0; /*0x4ae7fa*/
      v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae800*/
    }
    v6 = MEMORY[0xA8ECC8]; /*0x4ae805*/
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
        LOBYTE(v4) = (_BYTE)MEMORY[0xA8ECC8]; /*0x4ae84a*/
        ++v10; /*0x4ae851*/
        g_MoveFeedback = 0; /*0x4ae852*/
        if ( v10 >= (int)MEMORY[0xA8ECC8] ) /*0x4ae85a*/
          break; /*0x4ae85a*/
        v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae824*/
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
        LOBYTE(v4) = (_BYTE)MEMORY[0xA8ECC8]; /*0x4ae982*/
        ++v21; /*0x4ae987*/
        g_MoveFeedback = 0; /*0x4ae98a*/
        if ( v21 >= (int)MEMORY[0xA8ECC8] ) /*0x4ae990*/
          break; /*0x4ae990*/
        v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae956*/
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
      v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae896*/
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
      LOBYTE(v4) = (_BYTE)MEMORY[0xA8ECC8]; /*0x4ae92d*/
      ++v17; /*0x4ae932*/
      g_MoveFeedback = 0; /*0x4ae935*/
      if ( v17 >= (int)MEMORY[0xA8ECC8] ) /*0x4ae93b*/
        break; /*0x4ae93b*/
      v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae8f4*/
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
  v4 = *(_DWORD *)(MEMORY[0x87F6C8] + 372) + 2; /*0x4aea48*/
  do /*0x4aeac1*/
  {
    v5 = (v3 + v2) % 256; /*0x4aea5b*/
    v6 = &MEMORY[0x885180][3 * v5]; /*0x4aea5c*/
    v4 += 2; /*0x4aea63*/
    LOWORD(v5) = (unsigned __int8)((unsigned __int8)v6[2] >> MEMORY[0x8A0DDC]); /*0x4aea83*/
    LOWORD(a1) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v6) >> MEMORY[0x8A0DE4]); /*0x4aea97*/
    v7 = a1 << MEMORY[0x8A0DE0]; /*0x4aea9b*/
    v8 = v7 | (v5 << MEMORY[0x8A0DD8]); /*0x4aeaa3*/
    LOWORD(v7) = (unsigned __int8)((unsigned __int8)*(_WORD *)v6 >> MEMORY[0x8A0DD4]); /*0x4aeab1*/
    a1 = v7 << MEMORY[0x8A0DD0]; /*0x4aeab5*/
    result = a1 | v8; /*0x4aeab7*/
    ++v3; /*0x4aeab9*/
    *(_WORD *)(v4 - 2) = result; /*0x4aeaba*/
  }
  while ( v3 < 8 ); /*0x4aeac1*/
  return result; /*0x4aeac6*/
}


// ==== 0x004AEAD0  DisplayClass::ExitMode  this=DisplayClass  sig=csp ====
int __thiscall TacticalClass_ExitMode(_BYTE *this)
{
  if ( MEMORY[0x887324] ) /*0x4aeadb*/
    TacticalClass::ResetScrollBounds(); /*0x4aeadd*/
  this->q11CF = 0; /*0x4aeae2*/
  this->q11D0 = 0; /*0x4aeae9*/
  MEMORY[0xA8ED9D] = 1; /*0x4aeaf0*/
  return (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(this->q048)(this, 0, 0); /*0x4aeb02*/
}


// ==== 0x004AEB10  MapClass::GetScrollMode  this=MapClass  sig=csp ====
int __thiscall MapClass_GetScrollMode(int this)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 4508) ) /*0x4aeb10*/
    return 0; /*0x4aeb10*/
  result = *(_DWORD *)(this + 4512); /*0x4aeb1a*/
  if ( !result ) /*0x4aeb22*/
    return 0; /*0x4aeb24*/
  return result; /*0x4aeb26*/
}


// ==== 0x004AEB30  MapClass::SetScrollMode  this=MapClass  sig=csp ====
bool __thiscall MapClass::SetScrollMode(int this, MouseClass *aP1)
{
  *(_DWORD *)(this + 4512) = aP1; /*0x4aeb36*/
  *(_BYTE *)(this + 4508) = aP1 != 0; /*0x4aeb3f*/
  return aP1 != 0; /*0x4aeb45*/
}


// ==== 0x004AEB50    this=DisplayClass  sig=? ====
_DWORD *__thiscall DisplayClass::loc_4AEB50(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4aeb53*/
  *Block = &vt_VectorClass_ObjectClass; /*0x4aeb56*/
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
int MiniStub_4aeba0()
{
  return 0; /*0x4aeba2*/
}


// ==== 0x004AEBB0  TacticalClass_DisplayClass::updateRenderState  this=TacticalClass@DisplayClass  sig=csp ====
_DWORD *__thiscall DisplayClass::updateRenderState(TacticalClass_DisplayClass *this, char a2)
{
  GadgetClass::Dtor(this); /*0x4aebb3*/
  if ( (a2 & 1) != 0 ) /*0x4aebbd*/
    __3_YAXPAX_Z(this); /*0x4aebc0*/
  return &this->vfptr; /*0x4aebca*/
}


// ==== 0x004AEBD0  GScreenClass::StubReturnFalse  this=GScreenClass  sig=csp ====
void __stdcall InputManager_ProcessEvents::StubReturnFalse(int a1)
{
  ; /*0x4aebd0*/
}


// ==== 0x004AEBE0  MapClass::Stub  this=MapClass  sig=csp ====
char MiniStub_4aebe0()
{
  return 0; /*0x4aebe2*/
}


// ==== 0x004AEBF0  DisplayClass::Read  this=DisplayClass  sig=csp ====
DisplayClass *__thiscall DisplayClass::Read(char *Block, char a2)
{
  MapClass::Destruct(Block); /*0x4aebf3*/
  if ( (a2 & 1) != 0 ) /*0x4aebfd*/
    __3_YAXPAX_Z(Block); /*0x4aec00*/
  return (DisplayClass *)Block; /*0x4aec0a*/
}


// ==== 0x004AEC10  Straw::QueryInterface  this=Straw  sig=csp ====
Straw *__thiscall Straw::QueryInterface(int *Block, char a2)
{
  Straw::Dtor(Block); /*0x4aec13*/
  if ( (a2 & 1) != 0 ) /*0x4aec1d*/
    __3_YAXPAX_Z(Block); /*0x4aec20*/
  return (Straw *)Block; /*0x4aec2a*/
}


// ==== 0x004AEC30  BufferStraw::processDisplayMode  this=BufferStraw  sig=csp ====
int *__thiscall DisplayClass::processDisplayMode(BufferStraw *this, char a2)
{
  Vector::Clear((int)(this + 3)); /*0x4aec36*/
  Straw::Dtor((int *)this); /*0x4aec3d*/
  if ( (a2 & 1) != 0 ) /*0x4aec47*/
    __3_YAXPAX_Z(this); /*0x4aec4a*/
  return (int *)this; /*0x4aec54*/
}


// ==== 0x004AEC60  Surface::Construct  this=AbstractClass  sig=csp ====
_DWORD *__thiscall Surface::Construct(_DWORD *this, ObjectClass *aP1, IUnknown *aP2)
{
  this->vtable2 = aP1; /*0x4aec6a*/
  this->vtable3 = aP2; /*0x4aec6d*/
  *this = &Surface_Vtable; /*0x4aec70*/
  return this; /*0x4aec76*/
}


// ==== 0x004AEC80  Pipe::QueryInterface  this=Pipe  sig=csp ====
Pipe *__thiscall Pipe::QueryInterface(int *Block, char a2)
{
  Pipe::Dtor(Block); /*0x4aec83*/
  if ( (a2 & 1) != 0 ) /*0x4aec8d*/
    __3_YAXPAX_Z(Block); /*0x4aec90*/
  return (Pipe *)Block; /*0x4aec9a*/
}


// ==== 0x004AECA0  BufferPipe::initDisplay  this=BufferPipe  sig=csp ====
int *__thiscall GameClass::initDisplay(BufferPipe *this, char a2)
{
  Vector::Clear((int)(this + 3)); /*0x4aeca6*/
  Pipe::Dtor((int *)this); /*0x4aecad*/
  if ( (a2 & 1) != 0 ) /*0x4aecb7*/
    __3_YAXPAX_Z(this); /*0x4aecba*/
  return (int *)this; /*0x4aecc4*/
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
  MEMORY[0x8A0748] = 0; /*0x4aed52*/
  MEMORY[0x8A074C] = 0; /*0x4aed57*/
  MEMORY[0x8A0750] = 0; /*0x4aed5c*/
  MEMORY[0x8A0754] = 0; /*0x4aed61*/
  return 0; /*0x4aed66*/
}


// ==== 0x004AED70  DrawToSurfaceSHP  this=-  sig=csp ====
void __fastcall DrawToSurfaceSHP(
        int a1,
        int a2,
        ConvertClass *aP2,
        unsigned int arg4,
        ConvertClass *aP4,
        ConvertClass *aP5,
        ConvertClass *aP6,
        ConvertClass *aP7,
        int aP7a,
        ConvertClass *aP9,
        ConvertClass *aP10,
        ConvertClass *aP11,
        int a13,
        ConvertClass *aP13,
        int a15,
        ConvertClass *aP15)
{
  ConvertClass *v16; // edi
  _DWORD *v19; // eax
  IUnknown **v20; // eax
  int v21; // ecx
  int SubFile; // eax
  int v23; // edx
  int v24; // ebp
  ConvertClass *v25; // esi
  ObjectClass *v28; // esi
  _DWORD *v27; // edx
  int ecx19; // ecx
  IUnknown *v31; // eax
  TechnoClass *v30; // eax
  XSurface *SHPFrame; // eax
  AbstractClass *v32; // [esp-8h] [ebp-A8h]
  ObjectClass *v35; // [esp+Ch] [ebp-94h]
  ObjectClass *v36; // [esp+Ch] [ebp-94h]
  int var90a; // [esp+10h] [ebp-90h]
  ObjectClass *var90; // [esp+10h] [ebp-90h]
  ObjectClass *v39; // [esp+14h] [ebp-8Ch]
  ObjectClass *v40; // [esp+14h] [ebp-8Ch]
  XSurface a4; // [esp+18h] [ebp-88h] BYREF
  XSurface var78; // [esp+28h] [ebp-78h] BYREF
  XSurface *v41; // [esp+38h] [ebp-68h] BYREF
  XSurface *v50; // [esp+3Ch] [ebp-64h]
  int Height; // [esp+40h] [ebp-60h]
  TechnoClass *v52; // [esp+44h] [ebp-5Ch]
  TechnoClass *aP12; // [esp+48h] [ebp-58h]
  int v46; // [esp+4Ch] [ebp-54h]
  XSurface *v55; // [esp+50h] [ebp-50h]
  int v48; // [esp+54h] [ebp-4Ch]
  int v49; // [esp+58h] [ebp-48h]
  _DWORD *var44; // [esp+5Ch] [ebp-44h]
  IUnknown *v59; // [esp+60h] [ebp-40h] BYREF
  IUnknown *var3C; // [esp+64h] [ebp-3Ch]
  int v53; // [esp+68h] [ebp-38h]
  int v54; // [esp+6Ch] [ebp-34h]
  XSurface aP3; // [esp+70h] [ebp-30h] BYREF
  int v56; // [esp+80h] [ebp-20h]
  _DWORD v57[3]; // [esp+84h] [ebp-1Ch] BYREF
  _DWORD v58[4]; // [esp+90h] [ebp-10h] BYREF

  v16 = aP2; /*0x4aed79*/
  var44 = (_DWORD *)a2; /*0x4aed86*/
  v55 = (XSurface *)a1; /*0x4aed8a*/
  if ( aP2 ) /*0x4aed8e*/
  {
    if ( *(_WORD *)aP2->__pad_0 == 0xFFFF ) /*0x4aed98*/
    {
      if ( !aP2->__pad_6[10] ) /*0x4aed9a*/
        House::Constructor((char **)aP2); /*0x4aeda3*/
      v16 = *(ConvertClass **)&aP2->__pad_6[6]; /*0x4aeda8*/
    }
    if ( v16 ) /*0x4aedad*/
    {
      v19 = (_DWORD *)(*(int (__thiscall **)(int, XSurface **))(*(_DWORD *)a1 + 120))(a1, &v41); /*0x4aedbc*/
      v58[0] = *v19; /*0x4aedc1*/
      v58[1] = v19[1]; /*0x4aedcf*/
      v58[2] = v19[2]; /*0x4aedd9*/
      v58[3] = v19[3]; /*0x4aedec*/
      v59 = *(IUnknown **)aP5->__pad_0; /*0x4aedf5*/
      var3C = *(IUnknown **)&aP5->field_2[2]; /*0x4aedfc*/
      v53 = *(_DWORD *)&aP5->__pad_6[2]; /*0x4aee03*/
      v54 = *(_DWORD *)&aP5->__pad_6[6]; /*0x4aee12*/
      v20 = (IUnknown **)ClipRectIntersection((IUnknown *)&v41, (IUnknown *)aP5, (IUnknown *)v58, 0, 0); /*0x4aee1a*/
      v59 = *v20; /*0x4aee23*/
      var3C = v20[1]; /*0x4aee2a*/
      v53 = (int)v20[2]; /*0x4aee31*/
      v21 = (int)v20[3]; /*0x4aee35*/
      v54 = v21; /*0x4aee3a*/
      if ( v53 > 0 && v21 > 0 ) /*0x4aee46*/
      {
        *(_DWORD *)(a2 + 380) = aP7; /*0x4aee5a*/
        v35 = *(ObjectClass **)aP4->__pad_0; /*0x4aee75*/
        v39 = *(ObjectClass **)&aP4->field_2[2]; /*0x4aee79*/
        a4 = *(XSurface *)Building::GetFoundationSize(&v41, arg4); /*0x4aee84*/
        SubFile = MixFileClass::GetSubFile((char **)v16, arg4); /*0x4aeea0*/
        v23 = *(__int16 *)&v16->field_2[2]; /*0x4aeea9*/
        v24 = SubFile; /*0x4aeeb1*/
        v48 = *(__int16 *)v16->field_2; /*0x4aeeb7*/
        v49 = v23; /*0x4aeec1*/
        Surface::Construct(&aP3, (ObjectClass *)a4.Height, (IUnknown *)a4.LockCount); /*0x4aeec7*/
        aP3.LockCount = 0; /*0x4aeed8*/
        *(_DWORD *)aP3.__pad_0 = &XSurface_Vtable; /*0x4aeee3*/
        v56 = 1; /*0x4aeeeb*/
        Buffer::Init(v57, v24, (AbstractClass *)(a4.LockCount * a4.Height)); /*0x4aeef6*/
        *(_DWORD *)aP3.__pad_0 = &BSurface_Vtable; /*0x4aeefb*/
        v25 = aP15; /*0x4aef11*/
        aP12 = (TechnoClass *)a15; /*0x4aef18*/
        v46 = (int)aP15; /*0x4aef1e*/
        if ( a13 ) /*0x4aef22*/
        {
          var78 = *(XSurface *)Building::GetFoundationSize(&v41, (unsigned int)aP13); /*0x4aef3e*/
          v28 = (ObjectClass *)__2_YAPAXI_Z(0x20u); /*0x4aef5e*/
          if ( v28 ) /*0x4aef65*/
          {
            var90a = MixFileClass::GetSubFile((char **)a13, (unsigned int)aP13); /*0x4aef7c*/
            Surface::Construct(v28, (ObjectClass *)var78.Height, (IUnknown *)var78.LockCount); /*0x4aef86*/
            *(_DWORD *)&v28->__pad_0[12] = 0; /*0x4aef8b*/
            *(_DWORD *)v28->__pad_0 = &XSurface_Vtable; /*0x4aef92*/
            v32 = (AbstractClass *)(var78.LockCount * var78.Height); /*0x4aefa5*/
            v28->uniqueId = 1; /*0x4aefaa*/
            Buffer::Init(&v28->abstractFlags, var90a, v32); /*0x4aefb1*/
            *(_DWORD *)v28->__pad_0 = &BSurface_Vtable; /*0x4aefb6*/
            var90 = v28; /*0x4aefbc*/
            v25 = (ConvertClass *)v46; /*0x4aefc0*/
          }
          else
          {
            v25 = (ConvertClass *)v46; /*0x4aefc6*/
            var90 = 0; /*0x4aefca*/
          }
        }
        else
        {
          var78 = *(XSurface *)&stru_89E138.__pad_14B0[4448]; /*0x4aefe5*/
          var90 = 0; /*0x4aefee*/
        }
        if ( (BYTE1(aP6) & 2) != 0 ) /*0x4af00c*/
        {
          v35 = (ObjectClass *)((char *)v35 + v48 / -2); /*0x4af027*/
          v39 = (ObjectClass *)((char *)v39 + v49 / -2); /*0x4af034*/
        }
        if ( a13 ) /*0x4af03a*/
        {
          aP12 = (TechnoClass *)(a15 - (v48 / 2 - *(_DWORD *)a4.__pad_0)); /*0x4af05e*/
          v25 = (ConvertClass *)((char *)v25 - (v49 / 2 - a4.Width)); /*0x4af062*/
        }
        v36 = (ObjectClass *)((char *)v35 + *(_DWORD *)a4.__pad_0); /*0x4af072*/
        v40 = (ObjectClass *)((char *)v39 + a4.Width); /*0x4af07c*/
        *(_DWORD *)a4.__pad_0 = 0; /*0x4af084*/
        a4.Width = 0; /*0x4af088*/
        if ( !a13 ) /*0x4af08c*/
          goto LABEL_21; /*0x4af08c*/
        aP12 = (TechnoClass *)((char *)aP12 + *(_DWORD *)var78.__pad_0); /*0x4af0a0*/
        v25 = (ConvertClass *)((char *)v25 + var78.Width); /*0x4af0a6*/
        v41 = (XSurface *)-(int)aP12; /*0x4af0a8*/
        v50 = (XSurface *)-(int)v25; /*0x4af0b6*/
        Height = var78.Height; /*0x4af0be*/
        v52 = (TechnoClass *)var78.LockCount; /*0x4af0cb*/
        v27 = ClipRectIntersection((IUnknown *)&var78, (IUnknown *)&a4, (IUnknown *)&v41, 0, 0); /*0x4af0d4*/
        *(_DWORD *)a4.__pad_0 = *v27; /*0x4af0d8*/
        a4.Width = v27[1]; /*0x4af0df*/
        a4.Height = v27[2]; /*0x4af0e6*/
        ecx19 = v27[3]; /*0x4af0ea*/
        a4.LockCount = ecx19; /*0x4af0ef*/
        if ( a4.Height > 0 && ecx19 > 0 ) /*0x4af0fb*/
        {
LABEL_21:
          if ( aP7 ) /*0x4af10a*/
          {
            v31 = (IUnknown *)aP6; /*0x4af10c*/
            LOBYTE(v31) = (unsigned __int8)aP6 | 0x10; /*0x4af113*/
            aP6 = (ConvertClass *)v31; /*0x4af115*/
          }
          if ( Helper_69E900((char **)v16, arg4) ) /*0x4af126*/
          {
            v30 = (TechnoClass *)LightConvertClass::SelectRLEBlitter(var44, (IUnknown *)aP6); /*0x4af13f*/
            if ( v30 ) /*0x4af146*/
            {
              v41 = (XSurface *)v36; /*0x4af154*/
              v50 = (XSurface *)v40; /*0x4af15c*/
              Height = a4.Height; /*0x4af164*/
              v52 = (TechnoClass *)a4.LockCount; /*0x4af16f*/
              BlitterRLEBlitSHP( /*0x4af1bf*/
                (IUnknown *)v55,
                (int *)&v59,
                (TechnoClass *)&v41,
                (IUnknown *)&aP3,
                &a4,
                (int *)a4.__pad_0,
                v30,
                aP7a,
                (int)aP9,
                (TechnoClass *)aP10,
                0,
                (int)var90,
                aP12,
                (int)v25,
                (int)aP11);
            }
          }
          else
          {
            SHPFrame = (XSurface *)BuildingClass::GetSHPFrame(var44, aP6); /*0x4af1d5*/
            if ( SHPFrame ) /*0x4af1dc*/
            {
              v50 = 0; /*0x4af1e6*/
              v41 = 0; /*0x4af1ee*/
              *(_DWORD *)var78.__pad_0 = v36; /*0x4af1f6*/
              var78.Width = (int)v40; /*0x4af1fe*/
              var78.Height = a4.Height; /*0x4af206*/
              var78.LockCount = a4.LockCount; /*0x4af211*/
              Height = aP3.Width; /*0x4af261*/
              v52 = (TechnoClass *)aP3.Height; /*0x4af265*/
              BlitterCopySHP( /*0x4af269*/
                v55,
                (XSurface *)&v59,
                &var78,
                &aP3,
                (int)&v41,
                &a4,
                SHPFrame,
                (XSurface *)aP7a,
                (XSurface *)aP9,
                (int)aP10,
                (int)aP11,
                0);
            }
          }
        }
        if ( var90 ) /*0x4af275*/
          (**(void (__thiscall ***)(ObjectClass *, int))var90->__pad_0)(var90, 1); /*0x4af27b*/
        Vector::Clear((int)v57); /*0x4af284*/
      }
    }
  }
}


// ==== 0x004AF2A0  BlitterDrawSHP  this=AbstractClass  sig=csp ====
char __thiscall BlitterDrawSHP(IUnknown *this)
{
  _DWORD *v1; // edx
  int SHPFrame; // eax
  int v4; // edx
  int v5; // eax
  XSurface *v7; // [esp-18h] [ebp-40h]
  XSurface aP2; // [esp+8h] [ebp-20h] BYREF
  char v9[16]; // [esp+18h] [ebp-10h] BYREF
  XSurface *aP3; // [esp+2Ch] [ebp+4h]
  XSurface *aP5; // [esp+30h] [ebp+8h]
  XSurface *v12; // [esp+34h] [ebp+Ch]
  XSurface *aP1; // [esp+38h] [ebp+10h]
  int v14; // [esp+3Ch] [ebp+14h]
  XSurface *aP6; // [esp+40h] [ebp+18h]
  XSurface *aP7; // [esp+44h] [ebp+1Ch]
  XSurface *aP8; // [esp+48h] [ebp+20h]
  int v18; // [esp+4Ch] [ebp+24h]
  int v19; // [esp+50h] [ebp+28h]
  int v20; // [esp+54h] [ebp+2Ch]

  SHPFrame = (int)aP6; /*0x4af2a0*/
  v1[95] = v14; /*0x4af2b1*/
  if ( !aP6 )
    SHPFrame = BuildingClass::GetSHPFrame(v1, v14 != 0 ? (ConvertClass *)0x10 : 0);
  v4 = *(_DWORD *)v12->__pad_0; /*0x4af2d0*/
  aP2.Width = v12->Width; /*0x4af2d5*/
  *(_DWORD *)aP2.__pad_0 = v4; /*0x4af2dd*/
  aP2.Height = aP5->Height; /*0x4af2e4*/
  aP2.LockCount = aP5->LockCount; /*0x4af2eb*/
  v7 = (XSurface *)SHPFrame; /*0x4af308*/
  v5 = (*(int (__thiscall **)(XSurface *, char *))(*(_DWORD *)aP3->__pad_0 + 120))(aP3, v9); /*0x4af313*/
  return BlitterCopySHP((XSurface *)this, aP1, &aP2, aP3, v5, aP5, v7, aP7, aP8, v18, v19, v20); /*0x4af328*/
}


// ==== 0x004AF330  sub_4AF330  this=-  sig=ida-proto ====
void sub_4AF330()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4af33c*/
  MEMORY[0x8A0778] = Math::Sqrt(v0 + v0); /*0x4af34e*/
}


// ==== 0x004AF360  sub_4AF360  this=-  sig=ida-proto ====
void sub_4AF360()
{
  MEMORY[0x8A07C8] = MEMORY[0x8A0778] / 60.0; /*0x4af36c*/
}


// ==== 0x004AF380  sub_4AF380  this=-  sig=ida-proto ====
void sub_4AF380()
{
  MEMORY[0x8A07B0] = 1.0 / MEMORY[0x8A07C8]; /*0x4af38c*/
}


// ==== 0x004AF3A0  sub_4AF3A0  this=-  sig=ida-proto ====
void sub_4AF3A0()
{
  MEMORY[0x8A07A8] = 0.0174532925199433 * 45.0; /*0x4af3ac*/
}


// ==== 0x004AF3C0  sub_4AF3C0  this=-  sig=ida-proto ====
void sub_4AF3C0()
{
  MEMORY[0x8A0780] = 0.0174532925199433 * 60.0; /*0x4af3cc*/
}


// ==== 0x004AF3E0  sub_4AF3E0  this=-  sig=ida-proto ====
void sub_4AF3E0()
{
  MEMORY[0x8A0758] = 0.0174532925199433 * 90.0; /*0x4af3ec*/
}


// ==== 0x004AF400  sub_4AF400  this=-  sig=ida-proto ====
__int64 sub_4AF400()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0758] - MEMORY[0x8A0780]); /*0x4af412*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0778] * 0.5); /*0x4af426*/
  MEMORY[0x8A07D0] = result; /*0x4af42b*/
  return result; /*0x4af430*/
}


// ==== 0x004AF440  sub_4AF440  this=-  sig=ida-proto ====
void sub_4AF440()
{
  MEMORY[0x8A0788] = Math::ArcTan((double)MEMORY[0x8A07D0] * 0.00390625); /*0x4af457*/
}


// ==== 0x004AF470  sub_4AF470  this=-  sig=ida-proto ====
void sub_4AF470()
{
  MEMORY[0x8A07A0] = Math::ArcTan((double)(2 * MEMORY[0x8A07D0]) / MEMORY[0x8A0778]); /*0x4af492*/
}


// ==== 0x004AF4A0  sub_4AF4A0  this=-  sig=ida-proto ====
__int64 sub_4AF4A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A07D0]) + 0.5); /*0x4af4bb*/
  MEMORY[0x8A07C4] = result; /*0x4af4c0*/
  return result; /*0x4af4c6*/
}


// ==== 0x004AF4D0  sub_4AF4D0  this=-  sig=ida-proto ====
int sub_4AF4D0()
{
  MEMORY[0x8A0770] = 0; /*0x4af4d2*/
  MEMORY[0x8A0772] = 0; /*0x4af4d8*/
  return 0; /*0x4af4de*/
}


// ==== 0x004AF4E0  sub_4AF4E0  this=-  sig=ida-proto ====
int sub_4AF4E0()
{
  MEMORY[0x8A0790] = 0; /*0x4af4e2*/
  MEMORY[0x8A0794] = 0; /*0x4af4e7*/
  return 0; /*0x4af4f1*/
}


// ==== 0x004AF500  sub_4AF500  this=-  sig=ida-proto ====
int sub_4AF500()
{
  MEMORY[0x8A07C0] = 0; /*0x4af505*/
  MEMORY[0x8A07B8] = 128; /*0x4af50f*/
  MEMORY[0x8A07BC] = 128; /*0x4af514*/
  return 128; /*0x4af519*/
}


// ==== 0x004AF520  sub_4AF520  this=-  sig=ida-proto ====
int sub_4AF520()
{
  MEMORY[0x8A0760] = 0; /*0x4af522*/
  MEMORY[0x8A0764] = 0; /*0x4af527*/
  MEMORY[0x8A0768] = 0; /*0x4af52c*/
  MEMORY[0x8A076C] = 0; /*0x4af531*/
  return 0; /*0x4af536*/
}


// ==== 0x004AF540  LocomotionClass::Initialize  this=DriveLocomotionClass  sig=csp ====
int __thiscall sub_4AF540(int this)
{
  wchar_t *v2; // ecx
  int v3; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x4af543*/
  *(_DWORD *)(this + 28) = 0; /*0x4af54d*/
  *(_DWORD *)(this + 32) = 0; /*0x4af550*/
  v2 = MEMORY[0xA8ED84]; /*0x4af553*/
  *(_DWORD *)(this + 44) = 0; /*0x4af559*/
  *(_DWORD *)(this + 36) = v2; /*0x4af55c*/
  *(_DWORD *)(this + 48) = 0; /*0x4af55f*/
  *(_DWORD *)(this + 52) = MEMORY[0x8A0790]; /*0x4af568*/
  *(_QWORD *)(this + 56) = MEMORY[0x8A0794]; /*0x4af570*/
  *(_DWORD *)(this + 64) = MEMORY[0x8A0790]; /*0x4af585*/
  *(_DWORD *)(this + 68) = MEMORY[0x8A0794]; /*0x4af58e*/
  v3 = HIDWORD(MEMORY[0x8A0794]); /*0x4af591*/
  *(_DWORD *)(this + 80) = 0; /*0x4af597*/
  *(_DWORD *)(this + 76) = 0; /*0x4af59a*/
  *(_DWORD *)(this + 72) = v3; /*0x4af59d*/
  *(_DWORD *)(this + 84) = 0; /*0x4af5a3*/
  *(_DWORD *)(this + 88) = -1; /*0x4af5a6*/
  *(_DWORD *)(this + 92) = -1; /*0x4af5a9*/
  *(_BYTE *)(this + 96) = 0; /*0x4af5ac*/
  *(_BYTE *)(this + 97) = 0; /*0x4af5af*/
  *(_BYTE *)(this + 98) = 0; /*0x4af5b2*/
  *(_BYTE *)(this + 99) = 0; /*0x4af5b5*/
  *(_BYTE *)(this + 100) = 0; /*0x4af5b8*/
  *(_BYTE *)(this + 101) = 1; /*0x4af5bb*/
  *(_DWORD *)(this + 104) = 0; /*0x4af5bf*/
  *(_DWORD *)this = &DriveLocomotionClass::`vftable'; /*0x4af5c2*/
  *(_DWORD *)(this + 4) = &vt_DriveLocomotionClass; /*0x4af5c8*/
  *(_DWORD *)(this + 24) = &off_7E7E8C; /*0x4af5cf*/
  return this; /*0x4af5d8*/
}


// ==== 0x004AF610  JumpjetLocomotionClass::LoadLocomotionFromStream  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4AF610(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x4af611*/
  if ( !a2 ) /*0x4af618*/
    return -2147467261; /*0x4af621*/
  v4 = a1 + 20; /*0x4af62b*/
  if ( a1[20] ) /*0x4af628*/
  {
    a1 = 0; /*0x4af634*/
    v5 = StreamClass::Set2(&a1, v4); /*0x4af645*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4af653*/
      WinAPI::Wrapper(v5); /*0x4af656*/
    if ( !a1 ) /*0x4af661*/
      return -2147467259; /*0x4af66a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x4af674*/
    if ( a1 ) /*0x4af67c*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x4af685*/
      return v6; /*0x4af68c*/
    }
  }
  else
  {
    a2 = 0; /*0x4af692*/
    if ( a1 == (_DWORD *)24 ) /*0x4af69c*/
      return -2147467259; /*0x4af69c*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x4af6ad*/
    if ( v7 >= 0 ) /*0x4af6b1*/
    {
      v9 = a1; /*0x4af6c5*/
      ComPtr::Release_Alt((int *)&a2); /*0x4af6cd*/
      v8 = v9; /*0x4af6d2*/
      a2 = v9; /*0x4af6d5*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x4af6b7*/
      v8 = 0; /*0x4af6bc*/
      a2 = 0; /*0x4af6be*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4af6e3*/
      WinAPI::Wrapper(v7); /*0x4af6e6*/
    if ( !v8 ) /*0x4af6f1*/
      return -2147467259; /*0x4af6fa*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x4af704*/
    if ( a2 ) /*0x4af70c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x4af711*/
  }
  return v6; /*0x4af61a*/
}


// ==== 0x004AF720  DriveLocomotionClass::QueryInterface  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::_vt00(int a1, const void *a2, int *a3)
{
  int result; // eax
  int v4; // eax

  result = LocomotionClass::QueryInterface(a1, a2, a3); /*0x4af732*/
  if ( result == -2147467262 ) /*0x4af73c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4af74b*/
    {
      if ( a1 ) /*0x4af752*/
        v4 = a1 + 24; /*0x4af754*/
      else
        v4 = 0; /*0x4af759*/
      *a3 = v4; /*0x4af75b*/
    }
    if ( *a3 ) /*0x4af75e*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x4af772*/
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
HRESULT __stdcall DriveLocomotionClass::_vt05(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x4af787*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x4af792*/
  if ( v3 < 0 ) /*0x4af796*/
    return v3; /*0x4af796*/
  if ( a1 ) /*0x4af79a*/
  {
    a1[26] = 0; /*0x4af79c*/
    *a1 = (int)&DriveLocomotionClass::`vftable'; /*0x4af7a3*/
    a1[1] = (int)&vt_DriveLocomotionClass; /*0x4af7a9*/
    a1[6] = (int)&off_7E7E8C; /*0x4af7b0*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x4af7c3*/
  if ( !(_BYTE)pStm ) /*0x4af7cc*/
    return v3; /*0x4af7f8*/
  v4 = a1[26]; /*0x4af7ce*/
  v5 = (LPVOID *)(a1 + 26); /*0x4af7d1*/
  if ( v4 ) /*0x4af7d6*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4af7db*/
  *v5 = 0; /*0x4af7e5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x4af7f1*/
}


// ==== 0x004AF800  DriveLocomotionClass::LoadFromStream  this=DriveLocomotionClass  sig=csp ====
HRESULT __stdcall DriveLocomotionClass::LoadFromStream(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x4af806*/
  v4 = a1; /*0x4af80b*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x4af817*/
  if ( IPersistStream < 0 ) /*0x4af81b*/
    return IPersistStream; /*0x4af81b*/
  if ( !v4[26] ) /*0x4af826*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x4af8c3*/
    LOBYTE(a3) = 0; /*0x4af8cf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x4af8d4*/
    return IPersistStream; /*0x4af8d8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x4af82c*/
  LOBYTE(a3) = 1; /*0x4af838*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x4af83d*/
  v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[26]; /*0x4af840*/
  pPStm = 0; /*0x4af843*/
  if ( v7 ) /*0x4af84d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x4af85e*/
    if ( v8 >= 0 ) /*0x4af862*/
    {
      v9 = a1; /*0x4af87b*/
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
int __stdcall JumpjetLocomotionClass::sub_4AF8E0(int a1, int a2)
{
  if ( !a2 ) /*0x4af8e6*/
    return -2147467261; /*0x4af8e8*/
  if ( *(_DWORD *)(a1 + 80) ) /*0x4af8f4*/
    return -2147467259; /*0x4af91b*/
  *(_DWORD *)(a1 + 80) = a2; /*0x4af902*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x4af908*/
  return 0; /*0x4af8ed*/
}


// ==== 0x004AF930  JumpjetLocomotionClass::StubReturnZero_0  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4AF930(int a1, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x4af936*/
    return -2147467261; /*0x4af938*/
  v3 = *(_DWORD *)(a1 + 80); /*0x4af944*/
  if ( !v3 ) /*0x4af949*/
    return 1; /*0x4af959*/
  *a2 = v3; /*0x4af94b*/
  *(_DWORD *)(a1 + 80) = 0; /*0x4af94d*/
  return 0; /*0x4af93d*/
}


// ==== 0x004AF970  JumpjetLocomotionClass::CheckPiggybackState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_4AF970(int a1)
{
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) /*0x4af9a0*/
      && *(_DWORD *)(a1 + 80)
      && *(_BYTE *)(a1 + 77)
      && !*(_BYTE *)(*(_DWORD *)(a1 - 12) + 1709);
}


// ==== 0x004AF9B0  ObjectClass::method_4AF9B0  this=ObjectClass  sig=csp ====
void *__thiscall sub_4AF9B0(int *this, void *a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int v11; // edx
  _DWORD v13[12]; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v13); /*0x4af9bc*/
  v3 = this->vtable4; /*0x4af9c1*/
  if ( v3 ) /*0x4af9ca*/
  {
    v4 = this->objectTypeFlags; /*0x4af9d0*/
    v5 = this->fallRate; /*0x4af9d3*/
    if ( v4 != -1 ) /*0x4af9df*/
    {
      if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x4af9e7*/
        v5 = 0; /*0x4af9ed*/
      else
        v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x4af9e9*/
    }
    if ( (double)(v3 - v5) / (double)this->vtable4 < 1.0 ) /*0x4afa08*/
    {
      v6 = this->vtable4; /*0x4afa0a*/
      if ( v6 ) /*0x4afa13*/
      {
        v8 = this->objectTypeFlags; /*0x4afa1d*/
        v9 = this->fallRate; /*0x4afa20*/
        if ( v8 != -1 ) /*0x4afa26*/
        {
          if ( (int)MEMORY[0xA8ED84] - v8 >= v9 ) /*0x4afa2e*/
            v9 = 0; /*0x4afa34*/
          else
            v9 -= (int)MEMORY[0xA8ED84] - v8; /*0x4afa30*/
        }
        v7 = (double)(v6 - v9) / (double)this->vtable4; /*0x4afa40*/
      }
      else
      {
        v7 = 1.0; /*0x4afa15*/
      }
      v10 = InterpolateVoxelAnimPose(v14, this->vtable3, this->referenceCount, v7); /*0x4afa55*/
      goto LABEL_17; /*0x4afa5a*/
    }
  }
  v11 = this->referenceCount; /*0x4afa5c*/
  if ( v11 ) /*0x4afa61*/
  {
    v10 = CopyAudioData(v14, v11); /*0x4afa67*/
LABEL_17:
    qmemcpy(v13, v10, sizeof(v13)); /*0x4afa77*/
  }
  qmemcpy(a2, v13, 0x30u); /*0x4afa79*/
  return a2; /*0x4afa8a*/
}


// ==== 0x004AFAA0  ObjectClass::method_4AFAA0  this=ObjectClass  sig=csp ====
double __thiscall sub_4AFAA0(int *this)
{
  int v1; // esi
  int v3; // edx
  int v4; // eax

  v1 = this->vtable4; /*0x4afaa4*/
  if ( !v1 ) /*0x4afaad*/
    return 1.0; /*0x4afab9*/
  v3 = this->objectTypeFlags; /*0x4afaba*/
  v4 = this->fallRate; /*0x4afabd*/
  if ( v3 != -1 ) /*0x4afac3*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x4afacf*/
      return (double)(v1 - (v4 - ((int)MEMORY[0xA8ED84] - v3))) / (double)v1; /*0x4afae5*/
    v4 = 0; /*0x4afae6*/
  }
  return (double)(v1 - v4) / (double)v1; /*0x4afab5*/
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
    *v3 = MEMORY[0xA8ED84]; /*0x4afb22*/
    v3[1] = v4; /*0x4afb2a*/
    v3[2] = 3; /*0x4afb2d*/
    v3[3] = 3; /*0x4afb30*/
    return v4; /*0x4afb24*/
  }
  return result; /*0x4afb34*/
}


// ==== 0x004AFB40  DriveLocomotionClass::InitMovementState  this=DriveLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_4AFB40(_DWORD *a1, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  a1[7] = a2; /*0x4afb4d*/
  a1[6] = a2; /*0x4afb50*/
  a1[8] = MEMORY[0xA8ED84]; /*0x4afb5f*/
  a1[9] = v3; /*0x4afb65*/
  a1[10] = 0; /*0x4afb68*/
  a1[11] = 0; /*0x4afb6b*/
  return a1 + 8; /*0x4afb6e*/
}


// ==== 0x004AFB80  JumpjetLocomotionClass::StubReturnTrue  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_4AFB80(int a1)
{
  if ( *(_DWORD *)(a1 + 48) != MEMORY[0x8A0790] || *(_QWORD *)(a1 + 52) != MEMORY[0x8A0794] ) /*0x4afba1*/
    return 1; /*0x4afbb1*/
  return (*(_DWORD *)(a1 + 60) != MEMORY[0x8A0790] || *(_QWORD *)(a1 + 64) != MEMORY[0x8A0794]) /*0x4afc00*/
      && (*(_DWORD *)(a1 + 60) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156)
       || *(_DWORD *)(a1 + 64) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160));
}


// ==== 0x004AFC20  DriveLocomotionClass::StubReturnTrue_0  this=DriveLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_0(InfantryClass *aP0)
{
  if ( TimerClass::Active(*(_DWORD *)&aP0->__pad_0[8] + 904) ) /*0x4afc2e*/
    return 1; /*0x4afc37*/
  return (*(unsigned __int8 (__stdcall **)(InfantryClass *))(*(_DWORD *)aP0->__pad_0 + 16))(aP0) /*0x4afc79*/
      && (aP0->ambientSoundController[0] != *(_DWORD *)&stru_89E138.__pad_14B0[4520]
       || aP0->ambientSoundController[1] != *(_DWORD *)&stru_89E138.__pad_14B0[4524]
       || aP0->ambientSoundController[2] != *(_DWORD *)&stru_89E138.__pad_14B0[4528])
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&aP0->__pad_0[8] + 1336))(*(_DWORD *)&aP0->__pad_0[8]) > 0;
}


// ==== 0x004AFC90  JumpjetLocomotionClass::GetCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_4AFC90(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = a1[13]; /*0x4afc9d*/
  v3 = a1[14]; /*0x4afca0*/
  *a2 = a1[12]; /*0x4afca5*/
  a2[1] = v2; /*0x4afca7*/
  a2[2] = v3; /*0x4afcaa*/
  return a2; /*0x4afcaf*/
}


// ==== 0x004AFCC0  JumpjetLocomotionClass::GetRenderCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_4AFCC0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( a1[15] == MEMORY[0x8A0790] && *((_QWORD *)a1 + 8) == MEMORY[0x8A0794] ) /*0x4afcde*/
  {
    v4 = a1[2]; /*0x4afd0b*/
    v5 = v4 + 156; /*0x4afd14*/
    v6 = *(_DWORD *)(v4 + 156); /*0x4afd16*/
    v7 = *(_DWORD *)(v4 + 160); /*0x4afd18*/
    v8 = *(_DWORD *)(v5 + 8); /*0x4afd1b*/
    *a2 = v6; /*0x4afd24*/
    a2[1] = v7; /*0x4afd26*/
    a2[2] = v8; /*0x4afd29*/
    return a2; /*0x4afd1e*/
  }
  else
  {
    v2 = a1[16]; /*0x4afcf4*/
    v3 = a1[17]; /*0x4afcf7*/
    *a2 = a1[15]; /*0x4afcfc*/
    a2[1] = v2; /*0x4afcfe*/
    a2[2] = v3; /*0x4afd01*/
    return a2; /*0x4afd04*/
  }
}


// ==== 0x004AFD40  DriveLocomotionClass::ConvertCoordToCell  this=DriveLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::ConvertCoordToCell(int arg0, _DWORD *a1, unsigned int aP1_4, IUnknown *aP3)
{
  _DWORD *result; // eax
  unsigned int v5; // ecx
  IUnknown *v6; // edx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 892))(*(_DWORD *)(arg0 + 8)); /*0x4afd4b*/
  if ( !(_BYTE)result ) /*0x4afd53*/
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 896))(*(_DWORD *)(arg0 + 8)); /*0x4afd5e*/
    if ( !(_BYTE)result ) /*0x4afd66*/
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 468))(*(_DWORD *)(arg0 + 8)); /*0x4afd71*/
      if ( !(_BYTE)result ) /*0x4afd79*/
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 472))(*(_DWORD *)(arg0 + 8)); /*0x4afd80*/
        if ( !(_BYTE)result ) /*0x4afd88*/
        {
          result = a1; /*0x4afd8a*/
          v5 = aP1_4; /*0x4afd8e*/
          v6 = aP3; /*0x4afd92*/
          *(_DWORD *)(arg0 + 48) = a1; /*0x4afd99*/
          *(_DWORD *)(arg0 + 52) = v5; /*0x4afd9c*/
          *(_DWORD *)(arg0 + 56) = v6; /*0x4afd9f*/
          if ( result != *(_DWORD **)&stru_89E138.__pad_14B0[4520] /*0x4afdba*/
            || v5 != *(_DWORD *)&stru_89E138.__pad_14B0[4524]
            || v6 != *(IUnknown **)&stru_89E138.__pad_14B0[4528] )
          {
            a1 = result; /*0x4afdbc*/
            aP1_4 = v5; /*0x4afdc4*/
            aP3 = v6; /*0x4afdce*/
            result = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1); /*0x4afdd2*/
            if ( (result[80] & 0x100) != 0 ) /*0x4afde0*/
            {
              result = (_DWORD *)(*(_DWORD *)&stru_89E138.__pad_14B0[4572] + *(_DWORD *)(arg0 + 56)); /*0x4afdeb*/
              *(_DWORD *)(arg0 + 56) = result; /*0x4afded*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4afdf0*/
}


// ==== 0x004AFE00  DriveLocomotionClass::CheckWindowsErrorWrapper  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4AFE00(int a1)
{
  int v1; // eax
  int v2; // esi
  double v3; // st7
  int result; // eax

  if ( *(_DWORD *)(a1 + 60) != MEMORY[0x8A0790] || *(_QWORD *)(a1 + 64) != MEMORY[0x8A0794] ) /*0x4afe1d*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3220) ) /*0x4afe36*/
    {
      v1 = *(_DWORD *)(a1 + 8); /*0x4afe40*/
      if ( !*(_BYTE *)(v1 + 1744) ) /*0x4afe43*/
      {
        v2 = *(_DWORD *)(v1 + 1736); /*0x4afe4d*/
        if ( v2 ) /*0x4afe55*/
        {
          do /*0x4afe87*/
          {
            if ( !*(_DWORD *)(v2 + 1652) ) /*0x4afe57*/
              WinAPI::Wrapper(-2147467261); /*0x4afe66*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 1652) + 72))(*(_DWORD *)(v2 + 1652)); /*0x4afe74*/
            v2 = *(_DWORD *)(v2 + 1736); /*0x4afe77*/
          }
          while ( v2 && v2 != *(_DWORD *)(v2 + 1736) ); /*0x4afe87*/
        }
      }
    }
  }
  if ( *(double *)(a1 + 76) >= 0.300000011920929 ) /*0x4afe97*/
    v3 = 0.300000011920929; /*0x4afe9e*/
  else
    v3 = *(double *)(a1 + 76); /*0x4afe99*/
  *(double *)(a1 + 76) = v3; /*0x4afea4*/
  *(_DWORD *)(a1 + 48) = MEMORY[0x8A0790]; /*0x4afeb0*/
  result = MEMORY[0x8A0794]; /*0x4afeb2*/
  *(_QWORD *)(a1 + 52) = MEMORY[0x8A0794]; /*0x4afeb7*/
  return result; /*0x4afec3*/
}


// ==== 0x004AFED0  ObjectClass::method_4AFED0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4AFED0(_DWORD *this)
{
  int v1; // edi
  double v2; // st7
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  BOOL result; // eax

  v1 = this->nextObject; /*0x4afed4*/
  if ( v1 ) /*0x4afedd*/
  {
    v3 = this->fallRate; /*0x4afee7*/
    v4 = this->objectTypeFlags; /*0x4afeeb*/
    if ( v4 != -1 ) /*0x4afef1*/
    {
      if ( (int)MEMORY[0xA8ED84] - v4 >= v3 ) /*0x4afefd*/
        v3 = 0; /*0x4aff03*/
      else
        v3 -= (int)MEMORY[0xA8ED84] - v4; /*0x4afeff*/
    }
    v2 = (double)(v1 - v3) / (double)(int)this->nextObject; /*0x4aff10*/
  }
  else
  {
    v2 = 1.0; /*0x4afedf*/
  }
  result = 0; /*0x4aff4f*/
  if ( v2 == 1.0 ) /*0x4aff20*/
  {
    v5 = this->vtable4; /*0x4aff22*/
    if ( fabs(*(float *)(v5 + 808)) < 0.005 && fabs(*(float *)(v5 + 812)) < 0.005 ) /*0x4aff4d*/
      return 1; /*0x4aff20*/
  }
  return result; /*0x4aff54*/
}


// ==== 0x004AFF60  JumpjetLocomotionClass::ComputeVoxelTransform  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall Voxel_ComputeTransform(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  float *v12; // eax
  int v13; // ebx
  int *v14; // ecx
  int v15; // edi
  int v16; // eax
  double v17; // st7
  int v18; // edi
  const void *v19; // eax
  int v20; // esi
  float *v21; // eax
  float *v22; // edx
  float *v23; // ecx
  int v24; // ecx
  float *Transform; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  double v30; // st7
  int v31; // ecx
  int v32; // eax
  const void *v33; // eax
  int v34; // esi
  float v36; // [esp+4h] [ebp-234h]
  float v37; // [esp+4h] [ebp-234h]
  float v38; // [esp+4h] [ebp-234h]
  float *v39; // [esp+4h] [ebp-234h]
  float v40; // [esp+14h] [ebp-224h]
  int v41; // [esp+14h] [ebp-224h]
  float v42; // [esp+18h] [ebp-220h]
  int v43; // [esp+18h] [ebp-220h]
  float v44; // [esp+1Ch] [ebp-21Ch]
  int v45; // [esp+1Ch] [ebp-21Ch]
  float v46; // [esp+20h] [ebp-218h]
  int v47; // [esp+20h] [ebp-218h]
  float v48; // [esp+24h] [ebp-214h]
  int v49; // [esp+24h] [ebp-214h]
  _DWORD v50[12]; // [esp+28h] [ebp-210h] BYREF
  float v51[12]; // [esp+58h] [ebp-1E0h] BYREF
  float v52[12]; // [esp+88h] [ebp-1B0h] BYREF
  float v53[12]; // [esp+B8h] [ebp-180h] BYREF
  float v54[12]; // [esp+E8h] [ebp-150h] BYREF
  float v55[12]; // [esp+118h] [ebp-120h] BYREF
  float v56[12]; // [esp+148h] [ebp-F0h] BYREF
  char v57[48]; // [esp+178h] [ebp-C0h] BYREF
  float v58[12]; // [esp+1A8h] [ebp-90h] BYREF
  _BYTE v59[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v60[12]; // [esp+208h] [ebp-30h] BYREF

  v3 = a1[11]; /*0x4aff72*/
  if ( v3 ) /*0x4aff7b*/
  {
    v5 = a1[8]; /*0x4aff85*/
    v6 = a1[10]; /*0x4aff88*/
    if ( v5 != -1 ) /*0x4aff8e*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x4aff9a*/
        v6 = 0; /*0x4affa0*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x4aff9c*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x4affac*/
  }
  else
  {
    v4 = 1.0; /*0x4aff7d*/
  }
  if ( v4 == 1.0 ) /*0x4affbb*/
  {
    v7 = a1[2]; /*0x4affbd*/
    if ( fabs(*(float *)(v7 + 808)) < 0.005 && fabs(*(float *)(v7 + 812)) < 0.005 ) /*0x4affe8*/
    {
      if ( a3 && *a3 != -1 ) /*0x4b02bf*/
      {
        v24 = *a3 << 6; /*0x4b02c1*/
        *a3 = v24; /*0x4b02c4*/
        *a3 = v24 + a1[6]; /*0x4b02cb*/
      }
      Transform = Turret::GetTransform((signed int)a1, v55, a3); /*0x4b02d7*/
      Transform::Copy(v54, Transform); /*0x4b02e4*/
      Matrix3x4::Identity(v50); /*0x4b02ed*/
      v26 = a1[11]; /*0x4b02f2*/
      if ( !v26 ) /*0x4b02fb*/
        goto LABEL_48; /*0x4b02fb*/
      v27 = a1[8]; /*0x4b0301*/
      v28 = a1[10]; /*0x4b0304*/
      if ( v27 != -1 ) /*0x4b0310*/
      {
        if ( (int)MEMORY[0xA8ED84] - v27 >= v28 ) /*0x4b0318*/
          v28 = 0; /*0x4b031e*/
        else
          v28 -= (int)MEMORY[0xA8ED84] - v27; /*0x4b031a*/
      }
      if ( (double)(v26 - v28) / (double)(int)a1[11] < 1.0 ) /*0x4b0339*/
      {
        v29 = a1[11]; /*0x4b033b*/
        if ( v29 ) /*0x4b0344*/
        {
          v31 = a1[8]; /*0x4b034e*/
          v32 = a1[10]; /*0x4b0351*/
          if ( v31 != -1 ) /*0x4b0357*/
          {
            if ( (int)MEMORY[0xA8ED84] - v31 >= v32 ) /*0x4b035f*/
              v32 = 0; /*0x4b0365*/
            else
              v32 -= (int)MEMORY[0xA8ED84] - v31; /*0x4b0361*/
          }
          v30 = (double)(v29 - v32) / (double)(int)a1[11]; /*0x4b0371*/
        }
        else
        {
          v30 = 1.0; /*0x4b0346*/
        }
        v33 = InterpolateVoxelAnimPose(v58, a1[7], a1[6], v30); /*0x4b0389*/
      }
      else
      {
LABEL_48:
        v34 = a1[6]; /*0x4b0390*/
        if ( !v34 ) /*0x4b0395*/
        {
LABEL_51:
          qmemcpy(v53, v50, sizeof(v53)); /*0x4b03c9*/
          v39 = v54; /*0x4b03cb*/
          v22 = v53; /*0x4b03cc*/
          v23 = (float *)v57; /*0x4b03d3*/
          goto LABEL_52; /*0x4b03d3*/
        }
        v33 = CopyAudioData((char *)v56, v34); /*0x4b03a0*/
      }
      qmemcpy(v50, v33, sizeof(v50)); /*0x4b03b0*/
      goto LABEL_51; /*0x4b03b0*/
    }
  }
  Matrix3x4::Identity(v51); /*0x4afff2*/
  Matrix3x4::Identity(v52); /*0x4afffe*/
  v44 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x4b0019*/
  v46 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x4b002f*/
  v40 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x4b0044*/
  v48 = Math::SinCos(*(float *)(a1[2] + 812)); /*0x4b0059*/
  v42 = Math::ArcTan2(*(float *)(a1[2] + 808)); /*0x4b006e*/
  v8 = Math::SinCos(*(float *)(a1[2] + 808)); /*0x4b007b*/
  v49 = Math::RoundToInt(fabs(v8) * v44 + fabs(v48) * v46); /*0x4b00a2*/
  v41 = Math::RoundToInt(v40 * v46); /*0x4b00ab*/
  v9 = Math::RoundToInt(v46 - (double)v41); /*0x4b00c4*/
  v47 = v9; /*0x4b00c6*/
  v43 = Math::RoundToInt(v42 * v44); /*0x4b00cf*/
  v10 = Math::RoundToInt(v44 - (double)v43); /*0x4b00db*/
  v11 = a1[2]; /*0x4b00e0*/
  v45 = v10; /*0x4b00e5*/
  if ( *(float *)(v11 + 812) < 0.0 ) /*0x4b00fa*/
    v47 = -v9; /*0x4b00fe*/
  if ( *(float *)(v11 + 808) > 0.0 ) /*0x4b0113*/
    v45 = -v10; /*0x4b0117*/
  v36 = (float)v49; /*0x4b0124*/
  Matrix3x3::ApplyCol1(v51, v36); /*0x4b0127*/
  v37 = (float)v47; /*0x4b0138*/
  Matrix3x4::Translate(v52, v37); /*0x4b013b*/
  v38 = (float)v45; /*0x4b014c*/
  Matrix3x3::ApplyCol0(v52, v38); /*0x4b014f*/
  Matrix3x3::RotateX(v52, *(float *)(a1[2] + 808)); /*0x4b0165*/
  Matrix3D::RotateZ(v52, *(float *)(a1[2] + 812)); /*0x4b017b*/
  if ( a3 ) /*0x4b0185*/
    *a3 = -1; /*0x4b0187*/
  v12 = Turret::GetTransform((signed int)a1, v60, a3); /*0x4b0197*/
  Transform::Copy(v53, v12); /*0x4b01a4*/
  Matrix3x4::Identity(v50); /*0x4b01ad*/
  v13 = a1[11]; /*0x4b01b2*/
  v14 = a1 + 8; /*0x4b01b5*/
  if ( v13 ) /*0x4b01be*/
  {
    v15 = *v14; /*0x4b01c0*/
    v16 = a1[10]; /*0x4b01c2*/
    if ( *v14 != -1 ) /*0x4b01c8*/
    {
      if ( (int)MEMORY[0xA8ED84] - v15 >= v16 ) /*0x4b01d4*/
        v16 = 0; /*0x4b01da*/
      else
        v16 -= (int)MEMORY[0xA8ED84] - v15; /*0x4b01d6*/
    }
    if ( (double)(v13 - v16) / (double)(int)a1[11] < 1.0 ) /*0x4b01f5*/
    {
      if ( a1[11] ) /*0x4b01f7*/
      {
        v18 = a1[11]; /*0x4b0206*/
        v17 = (double)(v18 - Timeout::GetRemaining(v14)) / (double)v18; /*0x4b021c*/
      }
      else
      {
        v17 = 1.0; /*0x4b01fe*/
      }
      v19 = InterpolateVoxelAnimPose(v59, a1[7], a1[6], v17); /*0x4b0234*/
      goto LABEL_29; /*0x4b0239*/
    }
  }
  v20 = a1[6]; /*0x4b023b*/
  if ( v20 ) /*0x4b0240*/
  {
    v19 = CopyAudioData(v57, v20); /*0x4b024b*/
LABEL_29:
    qmemcpy(v50, v19, sizeof(v50)); /*0x4b025b*/
  }
  qmemcpy(v54, v50, sizeof(v54)); /*0x4b0274*/
  v39 = v52; /*0x4b0284*/
  v21 = MultiplyMatrix3x4(v56, v51, v54); /*0x4b0292*/
  v22 = MultiplyMatrix3x4(v58, v21, v53); /*0x4b02a5*/
  v23 = v55; /*0x4b02a7*/
LABEL_52:
  qmemcpy(v51, MultiplyMatrix3x4(v23, v22, v39), sizeof(v51)); /*0x4b03da*/
  qmemcpy(a2, v51, 0x30u); /*0x4b03fa*/
  return a2; /*0x4b03fc*/
}

