// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00630090  ParticleSystemClass::vt[06]  this=ParticleSystemClass  sig=csp ====
int __stdcall ParticleSystemClass::g_var_1d5e6b(ParticleSystemClass *this, int *a2, int Owner)
{
  int result; // eax
  int v4; // edx
  int i; // ebx

  result = AbstractClass::SaveLoad_Prefix(&this->vtable0, a2, Owner); /*0x6300a2*/
  if ( result >= 0 ) /*0x6300a9*/
  {
    v4 = *a2; /*0x6300b1*/
    Owner = this->Owner; /*0x6300bd*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &Owner, 4, 0); /*0x6300c1*/
    if ( result >= 0 ) /*0x6300c6*/
    {
      for ( i = 0; i < Owner; ++i ) /*0x6300d0*/
      {
        result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->TargetCoords[0] + 4 * i, 4, 0); /*0x6300e3*/
        if ( result < 0 ) /*0x6300e8*/
          break; /*0x6300e8*/
      }
    }
  }
  return result; /*0x6300f3*/
}



// ==== 0x00630100  ParticleSystemClass::PowerDrainUpdate  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::PowerDrainUpdate(ParticleSystemClass *this, unsigned int *a2)
{
  int i; // edi
  int v4; // eax
  int SpotlightRadius; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp-4h] [ebp-10h]

  HouseClass::ProcessPower((ObjectClass *)this); /*0x63010a*/
  for ( i = 0; i < (int)this->Owner; ++i ) /*0x630119*/
  {
    v10 = *(_DWORD *)(this->TargetCoords[0] + 4 * i) + 4; /*0x630127*/
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)v10 + 16))(v10); /*0x63012a*/
    Power::TimerProcess(v4); /*0x630130*/
  }
  SpotlightRadius = this->SpotlightRadius; /*0x630140*/
  if ( SpotlightRadius ) /*0x630148*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(SpotlightRadius + 4) + 16))(SpotlightRadius + 4); /*0x630151*/
    Power::TimerProcess(v6); /*0x630157*/
  }
  v7 = *(_DWORD *)&this->TimeToDie; /*0x63015c*/
  if ( v7 ) /*0x630164*/
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(v7 + 4) + 16))(v7 + 4); /*0x63016d*/
    Power::TimerProcess(v8); /*0x630173*/
  }
  Checksummer::Add_float((Checksummer *)a2, *(_DWORD *)&this->__pad_E5[3]); /*0x630181*/
  return Power::TimerProcess(*(_DWORD *)&this->__pad_E5[7]); /*0x630194*/
}



// ==== 0x006301A0  ParticleSystemClass::ddtor  this=ParticleSystemClass  sig=csp ====
int __stdcall C07EFB9C::ddtor(ParticleSystemClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6301a6*/
    return -2147467261; /*0x6301a8*/
  *a2 = 237448648; /*0x6301b6*/
  a2[1] = 298949647; /*0x6301be*/
  a2[2] = -1610610249; /*0x6301c7*/
  a2[3] = unk_7E96CC; /*0x6301d0*/
  return 0; /*0x6301ad*/
}



// ==== 0x006301E0  ParticleSystemClass::ProcessFrame  this=ParticleSystemClass  sig=csp ====
void __thiscall ParticleSystemClass::ProcessFrame(ParticleSystemClass *this)
{
  this->__pad_E5[19] = 1; /*0x6301e0*/
}



// ==== 0x006301F0  ObjectClass::SetMember59  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::SetMember59(ObjectClass *this, int a2)
{
  this->q03B = a2; /*0x6301f4*/
  return a2; /*0x6301fa*/
}



// ==== 0x00630200  ParticleSystemClass::GetObjectSize  this=ParticleSystemClass  sig=csp ====
int ParticleSystemClass::GetObjectSize(ParticleSystemClass *this)
{
  return 256; /*0x630205*/
}



// ==== 0x00630210  ParticleSystemClass::GetTypeIdentifier  this=ParticleSystemClass  sig=csp ====
int ParticleSystemClass::GetTypeIdentifier(ParticleSystemClass *this)
{
  return 24; /*0x630215*/
}



// ==== 0x00630220  ParticleSystemClass::Stub  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::Stub(ParticleSystemClass *this)
{
  return (int)this->Type; /*0x630226*/
}



// ==== 0x00630230  ParticleSystemClass::ddtor  this=ParticleSystemClass  sig=csp ====
void *__thiscall ParticleSystemClass::ddtor(ParticleSystemClass *this, char a2)
{
  ParticleSystemClass *v4; // [esp+0h] [ebp-4h]

  DestructParticleSystemClass(v4, (int)this); /*0x630233*/
  if ( (a2 & 1) != 0 ) /*0x63023d*/
    __3_YAXPAX_Z(this); /*0x630240*/
  return this; /*0x63024a*/
}



// ==== 0x00630250  VectorClass::PushBackCopy  this=VectorClass  sig=csp ====
int __thiscall VectorClass::PushBackCopy(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x630253*/
  result = this->Count; /*0x630256*/
  if ( result < Capacity /*0x63027d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vtable0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (_BYTE)result) )
  {
    result = this->Count; /*0x630285*/
    Items = this->Items; /*0x630288*/
    this->Count = result + 1; /*0x63028e*/
    *(_DWORD *)(Items + 4 * result) = *a2; /*0x630298*/
    LOBYTE(result) = 1; /*0x63029b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x63027f*/
  }
  return result; /*0x630281*/
}



// ==== 0x006302A0  ParticleSystemClass::resetSystemState  this=VectorClass  sig=csp ====
_DWORD *__thiscall ParticleSystemClass::resetSystemState(ParticleSystemClass *this, int a2, int a3)
{
  this->? = 0; /*0x6302ab*/
  this->? = (void *)a2; /*0x6302ae*/
  LOBYTE(this->?) = 1; /*0x6302b1*/
  BYTE1(this->?) = 0; /*0x6302b5*/
  this->ObjectClass = &VectorClass<ParticleClass *>::`vftable'; /*0x6302b8*/
  if ( a2 ) /*0x6302be*/
  {
    if ( a3 ) /*0x6302c6*/
    {
      this->? = (void *)a3; /*0x6302c8*/
      return &this->ObjectClass; /*0x6302ce*/
    }
    this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x6302dd*/
    BYTE1(this->?) = 1; /*0x6302e0*/
  }
  return &this->ObjectClass; /*0x6302cd*/
}



// ==== 0x006302F0  sub_6302F0  this=-  sig=ida-proto ====
int sub_6302F0()
{
  dword_AC4AA0 = 0; /*0x6302f2*/
  dword_AC4AA4 = 0; /*0x6302f7*/
  dword_AC4AA8 = 0; /*0x6302fc*/
  dword_AC4AAC = 0; /*0x630301*/
  return 0; /*0x630306*/
}



// ==== 0x00630310  DecodeFrameSHP  this=-  sig=csp ====
_DWORD *__fastcall SHP_DecodeFrame(int a1, int a2, int a3, size_t Size)
{
  size_t v6; // ebp
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // ebx
  int v15; // ebx
  _BYTE *v16; // ebp
  size_t v17; // esi
  unsigned __int8 v18; // bl
  char *v19; // ecx
  char v20; // al
  char v21; // bl
  unsigned int v22; // edi
  unsigned __int8 *v23; // ebp
  unsigned __int8 *v24; // ebx
  int v25; // esi
  int v26; // edx
  int v27; // eax
  int v28; // edi
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // esi
  int v32; // ebp
  unsigned __int8 v33; // bl
  _BYTE *v34; // eax
  bool v35; // cf
  unsigned __int8 *v36; // eax
  char v37; // bl
  unsigned int i; // eax
  unsigned __int8 *v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // ebp
  unsigned __int8 v42; // cl
  _BYTE *v43; // eax
  unsigned __int8 *v44; // eax
  char *v45; // edi
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int8 *v48; // [esp+30h] [ebp-8B4h]
  _BYTE *v50; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v51; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v52; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v53; // [esp+38h] [ebp-8ACh]
  unsigned int v54; // [esp+3Ch] [ebp-8A8h]
  _DWORD *v55; // [esp+40h] [ebp-8A4h]
  int v56; // [esp+44h] [ebp-8A0h]
  int v57; // [esp+44h] [ebp-8A0h]
  int v58; // [esp+44h] [ebp-8A0h]
  char v59; // [esp+48h] [ebp-89Ch]
  char v60; // [esp+48h] [ebp-89Ch]
  size_t v61; // [esp+4Ch] [ebp-898h]
  unsigned int v62; // [esp+4Ch] [ebp-898h]
  int v63; // [esp+50h] [ebp-894h]
  int v65[3]; // [esp+58h] [ebp-88Ch] BYREF
  _BYTE v66[4]; // [esp+64h] [ebp-880h] BYREF
  unsigned __int16 v67; // [esp+68h] [ebp-87Ch]
  unsigned __int16 v68; // [esp+6Ah] [ebp-87Ah]
  unsigned __int16 v69; // [esp+6Ch] [ebp-878h]
  int v70; // [esp+6Eh] [ebp-876h]
  unsigned __int8 v71; // [esp+A5h] [ebp-83Fh]
  int v72; // [esp+A6h] [ebp-83Eh]
  _BYTE v73[2048]; // [esp+E4h] [ebp-800h] BYREF
  _UNKNOWN *retaddr; // [esp+8E4h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)a1 + 20))(0) ) /*0x630328*/
    return 0; /*0x63033b*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 28))(a1, 1); /*0x630344*/
  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v66, 128); /*0x630355*/
  if ( v66[0] != 10 && v66[1] != 5 && v66[3] != 8 ) /*0x63036b*/
    return 0; /*0x630379*/
  v6 = v71 * (unsigned __int16)v72; /*0x6303ca*/
  v7 = v69 - v67 + 1; /*0x6303cd*/
  v8 = (unsigned __int16)v70 - v68 + 1; /*0x6303ce*/
  v54 = v7; /*0x6303d7*/
  v61 = v6; /*0x6303dd*/
  v9 = (v71 != 1) + 1; /*0x6303e1*/
  if ( a3 ) /*0x6303e3*/
  {
    if ( (int)(Size / v7 - 1) < v8 ) /*0x6303f7*/
      v8 = Size / v7 - 1; /*0x6303f9*/
    Buffer::Init(v65, a3, Size); /*0x630408*/
    v10 = __2_YAPAXI_Z(0x20u); /*0x63040f*/
    v11 = v10; /*0x630414*/
    if ( v10 ) /*0x63041d*/
    {
      v10[4] = v9; /*0x63041f*/
      v10[3] = 0; /*0x630429*/
      v10[1] = v54; /*0x630438*/
      v10[2] = v8; /*0x63043b*/
      *v10 = &XSurface_Vtable; /*0x63043e*/
      Buffer::Init(v10 + 5, (int)v65, v54 * v8 * v9); /*0x630444*/
      v12 = v11; /*0x630449*/
      *v11 = &BSurface_Vtable; /*0x63044f*/
      v55 = v11; /*0x630455*/
    }
    else
    {
      v55 = 0; /*0x630460*/
      v12 = 0; /*0x630464*/
    }
    Vector::Clear((int)v65); /*0x630459*/
  }
  else
  {
    v13 = __2_YAPAXI_Z(0x20u); /*0x630473*/
    v14 = v13; /*0x630478*/
    if ( !v13 ) /*0x63047f*/
      return 0; /*0x6304c8*/
    v13[4] = v9; /*0x630481*/
    v13[1] = v54; /*0x630494*/
    v13[2] = v8; /*0x630497*/
    v13[3] = 0; /*0x63049a*/
    *v13 = &XSurface_Vtable; /*0x6304a1*/
    Buffer::Init(v13 + 5, 0, v54 * v8 * v9); /*0x6304a7*/
    *v14 = &BSurface_Vtable; /*0x6304ac*/
    v12 = v14; /*0x6304b2*/
    v55 = v14; /*0x6304b4*/
  }
  if ( !v12 ) /*0x6304ba*/
    return 0; /*0x6304ba*/
  v15 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v12 + 92))(v12, 0, 0); /*0x6304d8*/
  v56 = v15; /*0x6304dc*/
  if ( v15 ) /*0x6304e0*/
  {
    v48 = v73; /*0x6304f1*/
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630504*/
    v63 = v15; /*0x63050e*/
    if ( v71 == 3 ) /*0x630514*/
    {
      v16 = __2_YAPAXI_Z(v6); /*0x630520*/
      v50 = v16; /*0x630527*/
      if ( !v16 ) /*0x63052b*/
      {
        (*(void (__thiscall **)(_DWORD *))(*v12 + 96))(v12); /*0x630531*/
        (*(void (__thiscall **)(_DWORD *, int))*v12)(v12, 1); /*0x63053a*/
        return 0; /*0x630548*/
      }
      if ( v8 ) /*0x63054d*/
      {
        v57 = v8; /*0x630553*/
        do /*0x63067e*/
        {
          v17 = 0; /*0x630557*/
          do /*0x6305ea*/
          {
            v18 = *v48; /*0x630568*/
            v19 = (char *)++v48; /*0x63056a*/
            if ( v48 >= (unsigned __int8 *)&retaddr ) /*0x630571*/
            {
              (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630584*/
              v48 = v73; /*0x63058e*/
              v19 = v73; /*0x630592*/
            }
            if ( (v18 & 0xC0) == 0xC0 ) /*0x63059a*/
            {
              v20 = *v19; /*0x63059c*/
              v21 = v18 & 0x3F; /*0x63059e*/
              v59 = *v19; /*0x6305ab*/
              v48 = (unsigned __int8 *)(v19 + 1); /*0x6305af*/
              if ( v19 + 1 >= (char *)&retaddr ) /*0x6305b3*/
              {
                (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6305c6*/
                v20 = v59; /*0x6305d0*/
                v48 = v73; /*0x6305d4*/
              }
              do /*0x6305de*/
              {
                v16[v17++] = v20; /*0x6305d8*/
                --v21; /*0x6305dc*/
              }
              while ( v21 ); /*0x6305de*/
            }
            else
            {
              v16[v17++] = v18; /*0x6305e2*/
            }
          }
          while ( v17 < v61 ); /*0x6305ea*/
          v22 = 0; /*0x6305fb*/
          if ( v54 ) /*0x630604*/
          {
            v23 = &v16[(unsigned __int16)v72]; /*0x63060a*/
            v24 = &v50[2 * (unsigned __int16)v72]; /*0x63060c*/
            do /*0x63066f*/
            {
              v25 = (unsigned __int8)v50[v22]; /*0x63061e*/
              v26 = *v23; /*0x630626*/
              ++v22; /*0x630629*/
              v27 = (int)*v24 >> g_BitMask_Red; /*0x63062a*/
              ++v23; /*0x630632*/
              ++v24; /*0x630633*/
              v63 += 2; /*0x63065f*/
              *(_WORD *)(v63 - 2) = (v25 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x630665*/
                                  | (v26 >> g_BitMask_Blue << g_BitMask_Green)
                                  | (v27 << g_BitShift_Blue);
            }
            while ( v22 < v54 ); /*0x63066f*/
            v16 = v50; /*0x630671*/
          }
          --v57; /*0x63067a*/
        }
        while ( v57 ); /*0x63067e*/
        v12 = v55; /*0x630684*/
      }
      __3_YAXPAX_Z(v16); /*0x630689*/
      v28 = a1; /*0x630690*/
      (*(void (__thiscall **)(_DWORD *))(*v12 + 96))(v12); /*0x630699*/
    }
    else
    {
      v29 = v54; /*0x6306a8*/
      v30 = (unsigned __int16)v72; /*0x6306ac*/
      if ( (unsigned __int16)v72 == v54 ) /*0x6306b3*/
      {
        v40 = v54 * v8; /*0x630834*/
        v41 = 0; /*0x630839*/
        v62 = v40; /*0x63083b*/
        while ( v41 < v40 ) /*0x630841*/
        {
          v42 = *v48; /*0x630856*/
          v43 = v48 + 1; /*0x630858*/
          v35 = v48 + 1 < (unsigned __int8 *)&retaddr; /*0x630859*/
          v52 = *v48++; /*0x63085b*/
          if ( !v35 ) /*0x630863*/
          {
            (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630876*/
            v42 = v52; /*0x630880*/
            v48 = v73; /*0x630884*/
            v43 = v73; /*0x630888*/
          }
          if ( (v42 & 0xC0) == 0xC0 ) /*0x630892*/
          {
            v44 = v43 + 1; /*0x630897*/
            v53 = v42 & 0x3F; /*0x630898*/
            v60 = *(v44 - 1); /*0x6308a6*/
            v48 = v44; /*0x6308ac*/
            if ( v44 >= (unsigned __int8 *)&retaddr ) /*0x6308b0*/
            {
              (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6308c3*/
              v48 = v73; /*0x6308cd*/
            }
            v45 = (char *)(v15 + v41); /*0x6308de*/
            LOBYTE(v15) = v60; /*0x6308e1*/
            BYTE1(v15) = v60; /*0x6308e9*/
            v46 = v15 << 16; /*0x6308f1*/
            LOWORD(v46) = v15; /*0x6308f4*/
            v15 = v56; /*0x6308f7*/
            v47 = v53 >> 2; /*0x6308fb*/
            memset32(v45, v46, v47); /*0x6308fe*/
            v41 += v53; /*0x630905*/
            memset(&v45[4 * v47], v46, v53 & 3); /*0x630907*/
            v40 = v62; /*0x630909*/
          }
          else
          {
            *(_BYTE *)(v15 + v41++) = v42; /*0x63090f*/
          }
        }
        v12 = v55; /*0x63091b*/
        v28 = a1; /*0x63091f*/
        (*(void (__thiscall **)(_DWORD *))(*v55 + 96))(v55); /*0x630927*/
      }
      else
      {
        v31 = 0; /*0x6306b9*/
        v51 = 0; /*0x6306bb*/
        if ( v8 ) /*0x6306c2*/
        {
          v32 = v15; /*0x6306c8*/
          v58 = v8; /*0x6306ca*/
          do /*0x6307ad*/
          {
            v31 = 0; /*0x6306ce*/
            if ( v30 ) /*0x6306d2*/
            {
              do /*0x63079c*/
              {
                v33 = *v48; /*0x6306e7*/
                v34 = v48 + 1; /*0x6306e9*/
                v35 = v48 + 1 < (unsigned __int8 *)&retaddr; /*0x6306ea*/
                v51 = *v48++; /*0x6306ec*/
                if ( !v35 ) /*0x6306f4*/
                {
                  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630707*/
                  v29 = v54; /*0x630711*/
                  v48 = v73; /*0x630715*/
                  v34 = v73; /*0x630719*/
                }
                if ( (v33 & 0xC0) == 0xC0 ) /*0x630723*/
                {
                  v36 = v34 + 1; /*0x630728*/
                  v51 = v33 & 0x3F; /*0x630729*/
                  v37 = *(v36 - 1); /*0x63072d*/
                  v48 = v36; /*0x630737*/
                  if ( v36 >= (unsigned __int8 *)&retaddr ) /*0x63073d*/
                  {
                    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630750*/
                    v29 = v54; /*0x63075a*/
                    v48 = v73; /*0x63075e*/
                  }
                  for ( i = 0; i < v51; ++i ) /*0x63076e*/
                  {
                    if ( i + v31 < v29 ) /*0x630775*/
                      *(_BYTE *)(i + v32 + v31) = v37; /*0x63077a*/
                  }
                  v31 += v51; /*0x630782*/
                }
                else if ( v31 < v29 ) /*0x630788*/
                {
                  *(_BYTE *)(v31 + v32) = v33; /*0x63078a*/
                  ++v31; /*0x63078d*/
                }
                v30 = (unsigned __int16)v72; /*0x630795*/
              }
              while ( v31 < (unsigned __int16)v72 ); /*0x63079c*/
            }
            v32 += v29; /*0x6307a6*/
            --v58; /*0x6307a9*/
          }
          while ( v58 ); /*0x6307ad*/
        }
        v39 = v48; /*0x6307b3*/
        if ( v31 == v29 ) /*0x6307b9*/
        {
          v28 = a1; /*0x6307bd*/
          v39 = v48 + 1; /*0x6307c1*/
          v51 = *v48; /*0x6307cb*/
          if ( v48 + 1 >= (unsigned __int8 *)&retaddr ) /*0x6307cf*/
          {
            (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6307e2*/
            v39 = v73; /*0x6307f0*/
          }
        }
        else
        {
          v28 = a1; /*0x6307f4*/
        }
        if ( (v51 & 0xC0) == 0xC0 && v39 + 1 >= (unsigned __int8 *)&retaddr ) /*0x63080e*/
          (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v28 + 36))(v28, v73, 2048); /*0x630821*/
        v12 = v55; /*0x630824*/
        (*(void (__thiscall **)(_DWORD *))(*v55 + 96))(v55); /*0x63082c*/
      }
    }
  }
  else
  {
    v28 = a1; /*0x63092c*/
  }
  if ( a2 ) /*0x630936*/
  {
    if ( v71 == 1 ) /*0x630940*/
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v28 + 40))(v28, -768, 2); /*0x63094d*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v28 + 36))(v28, a2, 768); /*0x63095a*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 52))(v28); /*0x630961*/
  return v12; /*0x63032f*/
}



// ==== 0x00630980  sub_630980  this=-  sig=ida-proto ====
int sub_630980()
{
  dword_AC4AB8 = 0; /*0x630982*/
  dword_AC4ABC = 0; /*0x630987*/
  dword_AC4AC0 = 0; /*0x63098c*/
  dword_AC4AC4 = 0; /*0x630991*/
  return 0; /*0x630996*/
}



// ==== 0x006309A0  sub_6309A0  this=-  sig=ida-proto ====
void sub_6309A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6309ac*/
  dbl_AC4AD0 = Math::Sqrt(v0 + v0); /*0x6309be*/
}



// ==== 0x006309D0  sub_6309D0  this=-  sig=ida-proto ====
void sub_6309D0()
{
  dbl_AC4B20 = dbl_AC4AD0 / 60.0; /*0x6309dc*/
}



// ==== 0x006309F0  sub_6309F0  this=-  sig=ida-proto ====
void sub_6309F0()
{
  dbl_AC4B08 = 1.0 / dbl_AC4B20; /*0x6309fc*/
}



// ==== 0x00630A10  sub_630A10  this=-  sig=ida-proto ====
void sub_630A10()
{
  dbl_AC4B00 = 0.0174532925199433 * 45.0; /*0x630a1c*/
}



// ==== 0x00630A30  sub_630A30  this=-  sig=ida-proto ====
void sub_630A30()
{
  dbl_AC4AD8 = 0.0174532925199433 * 60.0; /*0x630a3c*/
}



// ==== 0x00630A50  sub_630A50  this=-  sig=ida-proto ====
void sub_630A50()
{
  dbl_AC4AB0 = 0.0174532925199433 * 90.0; /*0x630a5c*/
}



// ==== 0x00630A70  sub_630A70  this=-  sig=ida-proto ====
__int64 sub_630A70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4AB0 - dbl_AC4AD8); /*0x630a82*/
  result = Math::RoundToInt(v0 * dbl_AC4AD0 * 0.5); /*0x630a96*/
  dword_AC4B28 = result; /*0x630a9b*/
  return result; /*0x630aa0*/
}



// ==== 0x00630AB0  sub_630AB0  this=-  sig=ida-proto ====
void sub_630AB0()
{
  dbl_AC4AE0 = Math::ArcTan((double)dword_AC4B28 * 0.00390625); /*0x630ac7*/
}



// ==== 0x00630AE0  sub_630AE0  this=-  sig=ida-proto ====
void sub_630AE0()
{
  dbl_AC4AF8 = Math::ArcTan((double)(2 * dword_AC4B28) / dbl_AC4AD0); /*0x630b02*/
}



// ==== 0x00630B10  sub_630B10  this=-  sig=ida-proto ====
__int64 sub_630B10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4B28) + 0.5); /*0x630b2b*/
  dword_AC4B1C = result; /*0x630b30*/
  return result; /*0x630b36*/
}



// ==== 0x00630B40  sub_630B40  this=-  sig=ida-proto ====
int sub_630B40()
{
  word_AC4AC8 = 0; /*0x630b42*/
  word_AC4ACA = 0; /*0x630b48*/
  return 0; /*0x630b4e*/
}



// ==== 0x00630B50  sub_630B50  this=-  sig=ida-proto ====
int sub_630B50()
{
  dword_AC4AE8 = 0; /*0x630b52*/
  dword_AC4AEC = 0; /*0x630b57*/
  dword_AC4AF0 = 0; /*0x630b5c*/
  return 0; /*0x630b61*/
}



// ==== 0x00630B70  sub_630B70  this=-  sig=ida-proto ====
int sub_630B70()
{
  dword_AC4B18 = 0; /*0x630b75*/
  dword_AC4B10 = 128; /*0x630b7f*/
  dword_AC4B14 = 128; /*0x630b84*/
  return 128; /*0x630b89*/
}



// ==== 0x00630B90  Network::resetConnectionState  this=Network  sig=csp ====
bool __thiscall Network::resetConnectionState(Network *this)
{
  HWND Dialog; // eax
  TechnoTypeClass *v3; // ecx
  int v5; // [esp+0h] [ebp-4h]

  Dialog = (HWND)CreateDialog(0xEEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PhoneEditorDialogProc, 0); /*0x630b9f*/
  this->Network_field_0x0 = (int)Dialog; /*0x630ba6*/
  if ( Dialog ) /*0x630ba8*/
  {
    LOBYTE(this->Network_field_0x8) = 0; /*0x630bae*/
    this->Network_field_0x4 = (void *)-1; /*0x630bb2*/
    SetWindowLongA(Dialog, 8, (LONG)this); /*0x630bb9*/
    PhoneEditor::PopulateList((PhoneEditor *)this); /*0x630bc1*/
    Dialog::Show((Dialog *)this->Network_field_0x0); /*0x630bc8*/
    while ( (int)this->Network_field_0x4 < 0 ) /*0x630bd2*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x630bdb*/
        break; /*0x630bdb*/
      LOBYTE(v3) = 0; /*0x630bdd*/
      ScreenSaver::Process(v3, v5); /*0x630bdf*/
    }
    Dialog::Destroy((Dialog *)this->Network_field_0x0); /*0x630bed*/
    if ( LOBYTE(this->Network_field_0x8) == 1 ) /*0x630bf6*/
      SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x630bfd*/
  }
  return this->Network_field_0x4 == (void *)1; /*0x630c05*/
}



// ==== 0x00630C10  PhoneEditorDialogProc  this=-  sig=csp ====
int __stdcall PhoneEditorDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  HWND v6; // eax
  LRESULT v7; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  HWND v10; // esi
  HWND v11; // esi

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x630c29*/
  if ( !result ) /*0x630c30*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x630c46*/
    if ( a2 == 273 ) /*0x630c48*/
    {
      if ( (unsigned __int16)a3 > 0x5E0u ) /*0x630cbe*/
      {
        if ( (unsigned __int16)a3 == 1508 ) /*0x630e66*/
        {
          if ( !HIWORD(a3) ) /*0x630e82*/
            UI_Pop_631500(WindowLongA); /*0x630e89*/
        }
        else if ( (unsigned __int16)a3 == 1633 && !HIWORD(a3) ) /*0x630e6d*/
        {
          UI_Pop(WindowLongA); /*0x630e74*/
          return 0; /*0x630e7f*/
        }
      }
      else
      {
        switch ( (unsigned __int16)a3 ) /*0x630cc4*/
        {
          case 0x5E0u: /*0x630cc4*/
            if ( HIWORD(a3) == 1 ) /*0x630dda*/
            {
              DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1504); /*0x630dee*/
              v10 = DlgItem; /*0x630df0*/
              if ( DlgItem ) /*0x630df4*/
              {
                if ( SendMessageA(DlgItem, 0x18Bu, 0, 0) > 0 ) /*0x630e0e*/
                {
                  dword_A8DABC = SendMessageA(v10, 0x188u, 0, 0); /*0x630e1f*/
                  if ( (int)dword_A8DABC > -1 ) /*0x630e24*/
                  {
                    v11 = GetDlgItem(*(HWND *)WindowLongA, 1509); /*0x630e36*/
                    SendMessageA(v11, 0x4B4u, 0, *((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x630e4f*/
                    SetFocus(v11); /*0x630e52*/
                    return 0; /*0x630e5e*/
                  }
                }
              }
            }
            break;
          case 1u: /*0x630cc4*/
            if ( !HIWORD(a3) && (unsigned __int8)UI_Get_630EA0(WindowLongA) == 1 ) /*0x630dbe*/
            {
              *(_DWORD *)(WindowLongA + 4) = 1; /*0x630dc4*/
              return 0; /*0x630dd1*/
            }
            break;
          case 2u: /*0x630cc4*/
            if ( !HIWORD(a3) ) /*0x630d93*/
            {
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x630d9c*/
              return 0; /*0x630da9*/
            }
            break;
          default:
            if ( (unsigned __int16)a3 == 1339 && !HIWORD(a3) ) /*0x630ce3*/
            {
              v6 = GetDlgItem(*(HWND *)WindowLongA, 1504); /*0x630cfa*/
              if ( v6 ) /*0x630cfe*/
              {
                v7 = SendMessageA(v6, 0x188u, 0, 0); /*0x630d14*/
                dword_A8DABC = v7; /*0x630d19*/
                if ( v7 > -1 ) /*0x630d1e*/
                {
                  if ( v7 < (int)dword_A8DB44 && v7 < (int)--dword_A8DB44 ) /*0x630d37*/
                  {
                    do /*0x630d4f*/
                    {
                      ++v7; /*0x630d3f*/
                      *((_DWORD *)dword_A8DB38 + v7 - 1) = *((_DWORD *)dword_A8DB38 + v7); /*0x630d43*/
                    }
                    while ( v7 < (int)dword_A8DB44 ); /*0x630d4f*/
                  }
                  *(_BYTE *)(WindowLongA + 8) = 1; /*0x630d53*/
                  PhoneEditor::PopulateList((HWND *)WindowLongA); /*0x630d57*/
                  if ( dword_A8DABC == -1 ) /*0x630d63*/
                  {
                    v8 = GetDlgItem(*(HWND *)WindowLongA, 1509); /*0x630d71*/
                    if ( v8 ) /*0x630d75*/
                    {
                      SendMessageA(v8, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x630d88*/
                      return 0; /*0x630d90*/
                    }
                  }
                }
              }
            }
            break;
        }
      }
    }
    else if ( a2 == 1175 ) /*0x630c50*/
    {
      SendDlgItemMessageA(hWnd, 1509, 0xC5u, 0x14u, 0); /*0x630c6b*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0x90u, 2); /*0x630c7f*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0x79u, 150); /*0x630c93*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0, 275); /*0x630ca7*/
      return 0; /*0x630caf*/
    }
    return 0; /*0x630e8e*/
  }
  return result; /*0x630caa*/
}



// ==== 0x00630EA0  ObjectClass::UI_Get_630EA0  this=ObjectClass  sig=csp ====
char __thiscall UI_Get_630EA0(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  LRESULT v4; // eax
  int v6; // ebp
  wchar_t *StringCSF; // eax
  size_t v8; // eax
  signed int v9; // eax
  _DWORD *v10; // edx

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x630eb5*/
  SendMessageA(DlgItem, 0x4B5u, 0x15u, (LPARAM)&this->? + 1); /*0x630ec9*/
  v3 = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x630ed3*/
  v4 = SendMessageA(v3, 0x188u, 0, 0); /*0x630edf*/
  dword_A8DABC = v4; /*0x630ee4*/
  if ( v4 == -1 || strcmp((const char *)(*((_DWORD *)dword_A8DB38 + v4) + 154), (const char *)&this->? + 1) ) /*0x630eff*/
  {
    if ( !strlen((const char *)&this->? + 1) ) /*0x630f2d*/
      return 0; /*0x630f40*/
    v6 = __2_YAPAXI_Z(0xB0u); /*0x630f4b*/
    if ( !v6 ) /*0x630f52*/
      return 0; /*0x630f5b*/
    StringCSF = GetStringCSF((wchar_t *)&stru_83665C.?[3], 0, (const char *)&stru_83665C.?[6], 231); /*0x630f6d*/
    wcscpy((wchar_t *)(v6 + 112), StringCSF); /*0x630f77*/
    strcpy((char *)(v6 + 154), (const char *)&this->? + 1); /*0x630fa4*/
    *(_DWORD *)v6 = 0; /*0x630fad*/
    *(_DWORD *)(v6 + 4) = -1; /*0x630fb4*/
    *(_DWORD *)(v6 + 8) = -1; /*0x630fb7*/
    *(_DWORD *)(v6 + 12) = 0; /*0x630fba*/
    *(_DWORD *)(v6 + 16) = -1; /*0x630fc1*/
    *(_DWORD *)(v6 + 20) = 3; /*0x630fc4*/
    *(_BYTE *)(v6 + 32) = 0; /*0x630fcb*/
    if ( (int)dword_A8DB44 < dword_A8DB3C /*0x631004*/
      || (byte_A8DB41 || !dword_A8DB3C)
      && dword_A8DB48 > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DB34 + 8))(
           &dword_A8DB34,
           dword_A8DB3C + dword_A8DB48,
           0) )
    {
      v8 = dword_A8DB44++; /*0x631011*/
      *((_DWORD *)dword_A8DB38 + v8) = v6; /*0x631020*/
    }
    PhoneEditor::PopulateList((PhoneEditor *)this); /*0x631025*/
    LOBYTE(this->?) = 1; /*0x63102a*/
    v9 = 0; /*0x631034*/
    if ( (int)dword_A8DB44 <= 0 ) /*0x631038*/
    {
LABEL_17:
      v9 = -1; /*0x63104c*/
    }
    else
    {
      v10 = dword_A8DB38; /*0x63103a*/
      while ( *v10 != v6 ) /*0x631042*/
      {
        ++v9; /*0x631044*/
        ++v10; /*0x631045*/
        if ( v9 >= (int)dword_A8DB44 ) /*0x63104a*/
          goto LABEL_17; /*0x63104a*/
      }
    }
    dword_A8DABC = v9; /*0x63104f*/
  }
  return 1; /*0x630f39*/
}



// ==== 0x00631060  PhoneEditor::PopulateList  this=ObjectClass  sig=csp ====
void __thiscall PhoneEditor::PopulateList(PhoneEditor *this)
{
  HWND *v1; // edi
  HWND DlgItem; // eax
  HWND v3; // ebx
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // esi
  int v5; // eax
  signed int v6; // ebp
  unsigned __int16 v7; // si
  int v8; // esi
  WPARAM v9; // ecx
  signed int v10; // eax
  WPARAM v11; // ecx
  HWND v12; // eax
  wchar_t *StringCSF; // [esp-8h] [ebp-120h]
  LPARAM lParam; // [esp+10h] [ebp-108h] BYREF
  DeleteAndZero v16; // [esp+14h] [ebp-104h] BYREF
  wchar_t Destination[80]; // [esp+28h] [ebp-F0h] BYREF
  wchar_t Format[10]; // [esp+C8h] [ebp-50h] BYREF
  char v19; // [esp+DCh] [ebp-3Ch]

  v1 = (HWND *)this; /*0x631069*/
  Gadget::InitProperties((Gadget *)&lParam); /*0x631073*/
  DlgItem = GetDlgItem(*v1, 1504); /*0x631080*/
  v3 = DlgItem; /*0x631086*/
  if ( DlgItem ) /*0x63108a*/
  {
    v4 = SendMessageA; /*0x631090*/
    SendMessageA(DlgItem, 0x184u, 0, 0); /*0x6310a0*/
    v5 = dword_A8DB44; /*0x6310a2*/
    if ( (int)dword_A8DB44 > 1 ) /*0x6310aa*/
    {
      qsort(dword_A8DB38, dword_A8DB44, 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_631C10); /*0x6310bb*/
      v5 = dword_A8DB44; /*0x6310c0*/
    }
    v6 = 0; /*0x6310c9*/
    if ( v5 > 0 ) /*0x6310cd*/
    {
      do /*0x63124d*/
      {
        if ( wcslen((const wchar_t *)(*((_DWORD *)dword_A8DB38 + v6) + 112)) ) /*0x6310e0*/
        {
          wcsncpy(Destination, (const wchar_t *)(*((_DWORD *)dword_A8DB38 + v6) + 112), 0x14u); /*0x631114*/
          Destination[20] = 0; /*0x63111c*/
        }
        else
        {
          wcscpy(Destination, asc_82083C); /*0x6310f6*/
        }
        v7 = v4(v3, 0x4CDu, 0, (LPARAM)Destination); /*0x631132*/
        if ( strlen((const char *)(*((_DWORD *)dword_A8DB38 + v6) + 154)) ) /*0x631149*/
        {
          strncpy((char *)Format, (const char *)(*((_DWORD *)dword_A8DB38 + v6) + 154), 0x14u); /*0x63116f*/
          v19 = 0; /*0x631186*/
          swprintf(Destination, (const size_t)g_Str_Trace__hs, Format); /*0x63118e*/
        }
        else
        {
          wcscpy(Destination, asc_82083C); /*0x63115a*/
        }
        lParam = 1; /*0x63119f*/
        WideString::Reassign((void **)&v16, Destination); /*0x6311a7*/
        v8 = v7 << 16; /*0x6311b8*/
        v9 = v8; /*0x6311bb*/
        LOBYTE(v9) = v8 | 0x96; /*0x6311c1*/
        SendMessageA(v3, 0x4A8u, v9, (LPARAM)&lParam); /*0x6311cc*/
        if ( *(_DWORD *)(*((_DWORD *)dword_A8DB38 + v6) + 8) == -1 ) /*0x6311dd*/
        {
          StringCSF = GetStringCSF((wchar_t *)&stru_83665C.?[13], 0, (const char *)&stru_83665C.?[6], 321); /*0x631202*/
          swprintf(Destination, (const size_t)aS, StringCSF); /*0x63120d*/
        }
        else
        {
          swprintf( /*0x6311ea*/
            Destination,
            (const size_t)g_Str_Fmt_PctD,
            *(const wchar_t *const *)(*((_DWORD *)dword_A8DB38 + v6) + 8));
        }
        lParam = 1; /*0x63121d*/
        WideString::Reassign((void **)&v16, Destination); /*0x631226*/
        SendMessageA(v3, 0x4A8u, v8 | 0x113, (LPARAM)&lParam); /*0x63123d*/
        v4 = SendMessageA; /*0x631244*/
        ++v6; /*0x63124a*/
      }
      while ( v6 < (int)dword_A8DB44 ); /*0x63124d*/
      v1 = (HWND *)this; /*0x631253*/
    }
    if ( v4(v3, 0x18Bu, 0, 0) && (int)dword_A8DABC >= -1 ) /*0x63126f*/
    {
      v10 = v4(v3, 0x18Bu, 0, 0); /*0x63127b*/
      v11 = dword_A8DABC; /*0x63127d*/
      if ( (int)dword_A8DABC < v10 ) /*0x631285*/
      {
        if ( (int)dword_A8DABC <= -1 ) /*0x6312a0*/
          goto LABEL_24; /*0x6312a0*/
      }
      else
      {
        v11 = 0; /*0x631287*/
        dword_A8DABC = 0; /*0x631289*/
      }
      v4(v3, 0x186u, v11, 0); /*0x6312ab*/
      v12 = GetDlgItem(*v1, 1509); /*0x6312b5*/
      if ( v12 ) /*0x6312bd*/
        v4(v12, 0x4B4u, 0, *((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x6312dd*/
    }
    else
    {
      dword_A8DABC = -1; /*0x631291*/
    }
  }
LABEL_24:
  DeleteAndZero::Alt((DeleteAndZero *)&v16.DeleteAndZero_field_0x04); /*0x6312df*/
  DeleteAndZero::Alt(&v16); /*0x6312ec*/
}



// ==== 0x00631300  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_631300(ObjectClass *this)
{
  int result; // eax
  HWND v3; // esi
  HWND DlgItem; // esi

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631314*/
  v3 = (HWND)result; /*0x631316*/
  if ( result ) /*0x63131a*/
  {
    result = SendMessageA((HWND)result, 0x18Bu, 0, 0); /*0x63132c*/
    if ( result > 0 ) /*0x631330*/
    {
      result = SendMessageA(v3, 0x188u, 0, 0); /*0x63133c*/
      dword_A8DABC = result; /*0x631341*/
      if ( result > -1 ) /*0x631346*/
      {
        DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x631358*/
        SendMessageA(DlgItem, 0x4B4u, 0, *((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x631371*/
        return (int)SetFocus(DlgItem); /*0x631374*/
      }
    }
  }
  return result; /*0x63137a*/
}



// ==== 0x00631380  ObjectClass::UI_Pop  this=ObjectClass  sig=csp ====
_DWORD *__thiscall UI_Pop(ObjectClass *this)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  size_t v4; // eax
  int v5; // eax
  _DWORD *v6; // edx
  HWND DlgItem; // eax
  HWND v8; // eax
  LONG dwNewLong[31]; // [esp+Ch] [ebp-7Ch] BYREF

  result = (_DWORD *)__2_YAPAXI_Z(0xB0u); /*0x63138d*/
  v3 = result; /*0x631392*/
  if ( result ) /*0x63139b*/
  {
    *((_WORD *)result + 56) = 0; /*0x6313a5*/
    *((_BYTE *)result + 154) = 0; /*0x6313a9*/
    *result = 0; /*0x6313af*/
    result[1] = -1; /*0x6313b1*/
    result[2] = -1; /*0x6313b4*/
    result[3] = 0; /*0x6313b7*/
    result[4] = -1; /*0x6313ba*/
    result[5] = 3; /*0x6313bd*/
    *((_BYTE *)result + 32) = 0; /*0x6313c4*/
    ShowWindow((HWND)this->AbstractClass, 0); /*0x6313cb*/
    UpdateWindow(g_hWnd); /*0x6313d8*/
    if ( UI_Pop_631500_Pop((LONG)dwNewLong, (int)v3) ) /*0x6313e3*/
    {
      if ( (int)dword_A8DB44 < dword_A8DB3C /*0x631424*/
        || (byte_A8DB41 || !dword_A8DB3C)
        && dword_A8DB48 > 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DB34 + 8))(
             &dword_A8DB34,
             dword_A8DB3C + dword_A8DB48,
             0) )
      {
        v4 = dword_A8DB44++; /*0x631431*/
        *((_DWORD *)dword_A8DB38 + v4) = v3; /*0x631440*/
      }
      LOBYTE(this->?) = 1; /*0x631445*/
      PhoneEditor::PopulateList((PhoneEditor *)this); /*0x631449*/
      v5 = 0; /*0x631454*/
      if ( (int)dword_A8DB44 <= 0 ) /*0x631458*/
      {
LABEL_13:
        v5 = -1; /*0x63146c*/
      }
      else
      {
        v6 = dword_A8DB38; /*0x63145a*/
        while ( (_DWORD *)*v6 != v3 ) /*0x631462*/
        {
          ++v5; /*0x631464*/
          ++v6; /*0x631465*/
          if ( v5 >= (int)dword_A8DB44 ) /*0x63146a*/
            goto LABEL_13; /*0x63146a*/
        }
      }
      dword_A8DABC = v5; /*0x631470*/
      if ( v5 > -1 ) /*0x631475*/
      {
        DlgItem = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631485*/
        if ( DlgItem ) /*0x63148f*/
          SendMessageA(DlgItem, 0x186u, dword_A8DABC, 0); /*0x63149f*/
        v8 = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6314a9*/
        if ( v8 ) /*0x6314ad*/
        {
          SendMessageA(v8, 0x4B4u, 0, *((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x6314cc*/
          return (_DWORD *)ShowWindow((HWND)this->AbstractClass, 5); /*0x6314e0*/
        }
      }
    }
    else
    {
      __3_YAXPAX_Z(v3); /*0x6314e2*/
    }
    return (_DWORD *)ShowWindow((HWND)this->AbstractClass, 5); /*0x6314ef*/
  }
  return result; /*0x6314da*/
}



// ==== 0x00631500  ObjectClass::UI_Pop  this=ObjectClass  sig=csp ====
void __thiscall UI_Pop_631500(ObjectClass *this)
{
  HWND DlgItem; // eax
  void *v3; // eax
  void *v4; // ebp
  signed int v5; // eax
  void **v6; // edx
  HWND v7; // eax
  void *Block; // [esp+4h] [ebp-84h]
  HWND hWnd; // [esp+8h] [ebp-80h]
  LONG dwNewLong[31]; // [esp+Ch] [ebp-7Ch] BYREF

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631511*/
  hWnd = DlgItem; /*0x631519*/
  if ( DlgItem ) /*0x63151d*/
    dword_A8DABC = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x63152f*/
  if ( (int)dword_A8DABC > -1 ) /*0x63153b*/
  {
    v3 = (void *)__2_YAPAXI_Z(0xB0u); /*0x631546*/
    Block = v3; /*0x63154e*/
    if ( v3 ) /*0x631554*/
    {
      v4 = (void *)*((_DWORD *)dword_A8DB38 + dword_A8DABC); /*0x631568*/
      qmemcpy(v3, v4, 0xB0u); /*0x631577*/
      ShowWindow((HWND)this->AbstractClass, 0); /*0x63157c*/
      UpdateWindow(g_hWnd); /*0x631589*/
      if ( UI_Pop_631500_Pop((LONG)dwNewLong, (int)Block) ) /*0x631598*/
      {
        LOBYTE(this->?) = 1; /*0x6315a8*/
        qmemcpy(v4, Block, 0xB0u); /*0x6315ab*/
        PhoneEditor::PopulateList((PhoneEditor *)this); /*0x6315af*/
        v5 = 0; /*0x6315ba*/
        if ( (int)dword_A8DB44 <= 0 ) /*0x6315be*/
        {
LABEL_10:
          v5 = -1; /*0x6315d2*/
        }
        else
        {
          v6 = (void **)dword_A8DB38; /*0x6315c0*/
          while ( *v6 != v4 ) /*0x6315c8*/
          {
            ++v5; /*0x6315ca*/
            ++v6; /*0x6315cb*/
            if ( v5 >= (int)dword_A8DB44 ) /*0x6315d0*/
              goto LABEL_10; /*0x6315d0*/
          }
        }
        dword_A8DABC = v5; /*0x6315d8*/
        if ( v5 > -1 ) /*0x6315dd*/
        {
          SendMessageA(hWnd, 0x186u, v5, 0); /*0x6315f2*/
          v7 = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6315fc*/
          if ( v7 ) /*0x631604*/
            SendMessageA(v7, 0x4B4u, 0, (LPARAM)v4 + 154); /*0x631615*/
        }
      }
      ShowWindow((HWND)this->AbstractClass, 5); /*0x63161c*/
      __3_YAXPAX_Z(Block); /*0x631627*/
    }
  }
}



// ==== 0x00631640  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_631640(ObjectClass *this)
{
  HWND DlgItem; // eax
  LRESULT v3; // eax
  HWND v4; // eax

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631653*/
  if ( DlgItem ) /*0x631657*/
  {
    v3 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x631669*/
    dword_A8DABC = v3; /*0x63166e*/
    if ( v3 > -1 ) /*0x631673*/
    {
      if ( v3 < (int)dword_A8DB44 && v3 < (int)--dword_A8DB44 ) /*0x631688*/
      {
        do /*0x6316a0*/
        {
          ++v3; /*0x631690*/
          *((_DWORD *)dword_A8DB38 + v3 - 1) = *((_DWORD *)dword_A8DB38 + v3); /*0x631694*/
        }
        while ( v3 < (int)dword_A8DB44 ); /*0x6316a0*/
      }
      LOBYTE(this->?) = 1; /*0x6316a4*/
      PhoneEditor::PopulateList((PhoneEditor *)this); /*0x6316a8*/
      if ( dword_A8DABC == -1 ) /*0x6316b4*/
      {
        v4 = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6316be*/
        if ( v4 ) /*0x6316c2*/
          SendMessageA(v4, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x6316d1*/
      }
    }
  }
}



// ==== 0x006316E0  ObjectClass::UI_Pop_631500_Pop  this=ObjectClass  sig=csp ====
bool __thiscall UI_Pop_631500_Pop(ObjectClass *dwNewLong, void *a2)
{
  HWND Dialog; // eax
  TechnoTypeClass *v5; // ecx
  int v6; // [esp+0h] [ebp-8h]

  if ( !a2 ) /*0x6316ea*/
    return 0; /*0x6316ed*/
  Dialog = (HWND)CreateDialog(0xEFu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))NetworkSettingsDlgProc, 0); /*0x6316ff*/
  dwNewLong->AbstractClass = Dialog; /*0x631706*/
  if ( Dialog ) /*0x631708*/
  {
    dwNewLong->? = a2; /*0x63170e*/
    dwNewLong->? = (void *)-1; /*0x631711*/
    SetWindowLongA(Dialog, 8, (LONG)dwNewLong); /*0x631718*/
    UI_Pop_631500_Pop_Pop(dwNewLong); /*0x631720*/
    Dialog::Show((Dialog *)dwNewLong->AbstractClass); /*0x631727*/
    while ( (int)dwNewLong->? < 0 ) /*0x631731*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x63173a*/
        break; /*0x63173a*/
      LOBYTE(v5) = 0; /*0x63173c*/
      ScreenSaver::Process(v5, v6); /*0x63173e*/
    }
    Dialog::Destroy((Dialog *)dwNewLong->AbstractClass); /*0x63174c*/
  }
  return dwNewLong->? == (void *)1; /*0x6316ec*/
}



// ==== 0x00631760  NetworkSettingsDlgProc  this=-  sig=csp ====
int __stdcall NetworkSettingsDlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  LONG v6; // [esp+10h] [ebp-3F8h]
  wchar_t lParam[64]; // [esp+14h] [ebp-3F4h] BYREF
  LONG dwNewLong[221]; // [esp+94h] [ebp-374h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x63178c*/
  if ( !result ) /*0x631793*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x6317a2*/
    v6 = WindowLongA; /*0x6317aa*/
    if ( a2 == 273 ) /*0x6317ae*/
    {
      if ( (unsigned __int16)a3 > 0x5E5u ) /*0x6317ff*/
      {
        if ( (unsigned __int16)a3 == 1635 ) /*0x63190a*/
        {
          if ( HIWORD(a3) ) /*0x631986*/
          {
            SendMessageA(a4, 0xF1u, 1u, 0); /*0x631995*/
            SendDlgItemMessageA(hWnd, 1636, 0xF1u, 0, 0); /*0x6319aa*/
          }
        }
        else if ( (unsigned __int16)a3 == 1636 && HIWORD(a3) ) /*0x631913*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x631926*/
          SendDlgItemMessageA(hWnd, 1635, 0xF1u, 0, 0); /*0x63193b*/
          UpdateWindow(hWnd); /*0x631948*/
          ShowWindow(hWnd, 0); /*0x631953*/
          UpdateWindow(g_hWnd); /*0x63195c*/
          Network::sendGameEvent((LONG)dwNewLong, v6 + 12); /*0x63196d*/
          ShowWindow(hWnd, 5); /*0x631975*/
          return 0; /*0x631983*/
        }
      }
      else
      {
        switch ( (unsigned __int16)a3 ) /*0x631805*/
        {
          case 0x5E5u: /*0x631805*/
            if ( HIWORD(a3) == 1281 || HIWORD(a3) == 512 ) /*0x6318c3*/
            {
              SendMessageA(a4, 0x4B3u, 0x40u, (LPARAM)lParam); /*0x6318dc*/
              WideString::Trim(lParam); /*0x6318e2*/
              SendMessageA(a4, 0x4B2u, 0, (LPARAM)lParam); /*0x6318f4*/
              return 0; /*0x631902*/
            }
            break;
          case 1u: /*0x631805*/
            if ( !HIWORD(a3) ) /*0x63188c*/
            {
              Network_Set(); /*0x631895*/
              *(_DWORD *)(v6 + 4) = 1; /*0x6318a1*/
              return 0; /*0x6318b1*/
            }
            break;
          case 2u: /*0x631805*/
            if ( !HIWORD(a3) ) /*0x63186d*/
            {
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x631879*/
              return 0; /*0x631889*/
            }
            break;
          default:
            if ( (unsigned __int16)a3 == 1503 && (HIWORD(a3) == 1281 || HIWORD(a3) == 512) ) /*0x63182b*/
            {
              SendMessageA(a4, 0x4B5u, 0x40u, (LPARAM)lParam); /*0x631844*/
              String::Trim((char *)lParam); /*0x63184a*/
              SendMessageA(a4, 0x4B4u, 0, (LPARAM)lParam); /*0x63185c*/
              return 0; /*0x63186a*/
            }
            break;
        }
      }
    }
    else if ( a2 == 1175 ) /*0x6317b6*/
    {
      SendDlgItemMessageA(hWnd, 1509, 0xC5u, 0x14u, 0); /*0x6317d1*/
      SendDlgItemMessageA(hWnd, 1503, 0xC5u, 0x14u, 0); /*0x6317e2*/
      return 0; /*0x6317f0*/
    }
    return 0; /*0x6319b0*/
  }
  return result; /*0x6317e4*/
}



// ==== 0x006319C0  ObjectClass::Network_Set  this=ObjectClass  sig=csp ====
void __thiscall Network_Set(ObjectClass *this)
{
  HWND DlgItem; // eax
  wchar_t *StringCSF; // eax
  HWND v4; // eax
  HWND v5; // eax

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6319d4*/
  if ( DlgItem ) /*0x6319de*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)this->? + 112); /*0x6319ef*/
    if ( wcslen((const wchar_t *)this->? + 56) ) /*0x6319f8*/
    {
      _wcsupr((wchar_t *)this->? + 56); /*0x631a0b*/
    }
    else
    {
      StringCSF = GetStringCSF((wchar_t *)&stru_83665C.?[3], 0, (const char *)&stru_83665C.?[6], 757); /*0x631a26*/
      wcscpy((wchar_t *)this->? + 56, StringCSF); /*0x631a33*/
    }
  }
  Debug::Log(); /*0x631a47*/
  v4 = GetDlgItem((HWND)this->AbstractClass, 1503); /*0x631a58*/
  if ( v4 ) /*0x631a5c*/
    SendMessageA(v4, 0x4B5u, 0x15u, (LPARAM)this->? + 154); /*0x631a70*/
  Debug::Log(); /*0x631a81*/
  v5 = GetDlgItem((HWND)this->AbstractClass, 1636); /*0x631a92*/
  if ( v5 && SendMessageA(v5, 0xF0u, 0, 0) == 1 ) /*0x631aa7*/
  {
    qmemcpy(this->?, &this->?, 0x70u); /*0x631ab9*/
  }
  else
  {
    *(_DWORD *)this->? = 0; /*0x631ac3*/
    *((_DWORD *)this->? + 1) = -1; /*0x631acc*/
    *((_DWORD *)this->? + 2) = -1; /*0x631ad2*/
    *((_DWORD *)this->? + 3) = 0; /*0x631ad8*/
    *((_DWORD *)this->? + 4) = -1; /*0x631ae2*/
    *((_DWORD *)this->? + 5) = 3; /*0x631ae8*/
    *((_BYTE *)this->? + 32) = 0; /*0x631af2*/
  }
  Debug::Log(); /*0x631b06*/
}



// ==== 0x00631B20  ObjectClass::UI_Pop_631500_Pop_Pop  this=ObjectClass  sig=csp ====
int __thiscall UI_Pop_631500_Pop_Pop(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  _DWORD *vtable2; // esi
  HWND v5; // eax
  int result; // eax
  char v7; // [esp+13h] [ebp-1h]

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x631b36*/
  SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)this->? + 112); /*0x631b4d*/
  v3 = GetDlgItem((HWND)this->AbstractClass, 1503); /*0x631b58*/
  SendMessageA(v3, 0x4B4u, 0, (LPARAM)this->? + 154); /*0x631b6c*/
  vtable2 = this->?; /*0x631b6e*/
  if ( !*vtable2 || vtable2[1] == -1 || vtable2[2] == -1 ) /*0x631b83*/
  {
    v7 = 0; /*0x631ba3*/
    qmemcpy(&this->?, &dword_A8DAC0, 0x70u); /*0x631ba8*/
  }
  else
  {
    qmemcpy(&this->?, vtable2, 0x70u); /*0x631b8d*/
    v7 = 1; /*0x631b8f*/
  }
  v5 = GetDlgItem((HWND)this->AbstractClass, 1636); /*0x631bb9*/
  if ( v5 ) /*0x631bbd*/
    SendMessageA(v5, 0xF1u, v7 == 1, 0); /*0x631bd4*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1635); /*0x631bdf*/
  if ( result ) /*0x631be3*/
    return SendMessageA((HWND)result, 0xF1u, v7 == 0, 0); /*0x631bf9*/
  return result; /*0x631bfb*/
}



// ==== 0x00631C10  sub_631C10  this=-  sig=ida-proto ====
int __cdecl sub_631C10(int *a1, int *a2)
{
  int v2; // esi
  int v3; // edi
  int result; // eax

  v2 = *a2; /*0x631c1a*/
  v3 = *a1; /*0x631c1c*/
  result = wcscmp((const wchar_t *)(*a1 + 112), (const wchar_t *)(*a2 + 112)); /*0x631c26*/
  if ( !result ) /*0x631c30*/
    return strcmp((const char *)(v3 + 154), (const char *)(v2 + 154)); /*0x631c47*/
  return result; /*0x631c64*/
}



// ==== 0x00631C80  Pipe::Dtor  this=Pipe  sig=csp ====
int __thiscall Pipe::Dtor(Pipe *this)
{
  int result; // eax
  int Pipe_field_0x08; // ecx

  result = this->Pipe_field_0x04; /*0x631c86*/
  *(_DWORD *)this->__pad_0 = &Pipe::`vftable'; /*0x631c89*/
  if ( result ) /*0x631c91*/
    *(_DWORD *)(result + 8) = this->Pipe_field_0x08; /*0x631c96*/
  Pipe_field_0x08 = this->Pipe_field_0x08; /*0x631c99*/
  if ( Pipe_field_0x08 ) /*0x631c9e*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)Pipe_field_0x08 + 12))(Pipe_field_0x08, this->Pipe_field_0x04); /*0x631ca6*/
  this->Pipe_field_0x08 = 0; /*0x631ca9*/
  this->Pipe_field_0x04 = 0; /*0x631cac*/
  return result; /*0x631caf*/
}



// ==== 0x00631CC0  Pipe::SetDelegate  this=Pipe  sig=csp ====
int __thiscall Pipe::SetDelegate(Pipe *this, int a2)
{
  int result; // eax
  int v4; // ecx

  if ( this->Pipe_field_0x04 != a2 ) /*0x631ccb*/
  {
    if ( a2 ) /*0x631ccf*/
    {
      v4 = *(_DWORD *)(a2 + 8); /*0x631cd1*/
      if ( v4 ) /*0x631cd6*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, 0); /*0x631cdc*/
        *(_DWORD *)(a2 + 8) = 0; /*0x631cdf*/
      }
    }
    result = this->Pipe_field_0x04; /*0x631ce6*/
    if ( result ) /*0x631ceb*/
    {
      *(_DWORD *)(result + 8) = 0; /*0x631ced*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)this->Pipe_field_0x04 + 4))(this->Pipe_field_0x04); /*0x631cf9*/
    }
    this->Pipe_field_0x04 = a2; /*0x631cfe*/
    if ( a2 ) /*0x631d01*/
      *(_DWORD *)(a2 + 8) = this; /*0x631d03*/
  }
  return result; /*0x631d06*/
}



// ==== 0x00631D10  Pipe::Dispatch  this=Pipe  sig=csp ====
int __thiscall Delegate::Dispatch(Pipe *this, int a2, int a3)
{
  int Pipe_field_0x04; // ecx

  Pipe_field_0x04 = this->Pipe_field_0x04; /*0x631d10*/
  if ( Pipe_field_0x04 ) /*0x631d15*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)Pipe_field_0x04 + 16))(Pipe_field_0x04, a2, a3); /*0x631d23*/
  else
    return a3; /*0x631d29*/
}



// ==== 0x00631D30  Pipe::GetRelatedObject  this=Pipe  sig=csp ====
int __thiscall GameClass::GetRelatedObject(Pipe *this)
{
  int Pipe_field_0x04; // ecx

  Pipe_field_0x04 = this->Pipe_field_0x04; /*0x631d30*/
  if ( Pipe_field_0x04 ) /*0x631d35*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)Pipe_field_0x04 + 4))(Pipe_field_0x04); /*0x631d39*/
  else
    return 0; /*0x631d3c*/
}



// ==== 0x00631D40  BuildingDebris::Init  this=BuildingDebris  sig=csp ====
int __thiscall BuildingDebris::Init(BuildingDebris *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // ebx
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int result; // eax

  v3 = rand(); /*0x631d53*/
  *((_DWORD *)this + 12) = (v3 & 0x3F) - 31; /*0x631d69*/
  *((_DWORD *)this + 13) = ((v3 >> 5) & 0x1F) - 15; /*0x631d6c*/
  *(this + 6) = *(BuildingDebris *)&stru_83665C.?[40 * a2 + 31]; /*0x631d71*/
  *(this + 7) = *(BuildingDebris *)&stru_83665C.?[40 * a2 + 35]; /*0x631d77*/
  *(this + 8) = *(BuildingDebris *)&stru_83665C.?[40 * a2 + 39]; /*0x631d7d*/
  v4 = *(_DWORD *)&stru_83665C.?[40 * a2 + 55]; /*0x631d80*/
  if ( v4 ) /*0x631d85*/
  {
    v5 = (1 << v4) - 1; /*0x631d8e*/
    v6 = rand(); /*0x631d8f*/
    v7 = *((_DWORD *)this + 7); /*0x631d9d*/
    *((_DWORD *)this + 6) -= v6 & v5; /*0x631da0*/
    v8 = v6 >> *(_DWORD *)&stru_83665C.?[40 * a2 + 55]; /*0x631da6*/
    *((_DWORD *)this + 7) = v7 - (v8 & v5); /*0x631dae*/
    *((_DWORD *)this + 8) -= v5 & (v8 >> *(_DWORD *)&stru_83665C.?[40 * a2 + 55]); /*0x631dbd*/
  }
  v9 = *(_DWORD *)&stru_83665C.?[40 * a2 + 43]; /*0x631dc0*/
  *((_DWORD *)this + 9) = v9; /*0x631dc3*/
  *((_DWORD *)this + 1) = v9; /*0x631dc6*/
  v10 = *(_DWORD *)&stru_83665C.?[40 * a2 + 47]; /*0x631dc9*/
  *((_DWORD *)this + 10) = v10; /*0x631dcc*/
  *((_DWORD *)this + 2) = v10; /*0x631dcf*/
  v11 = *(_DWORD *)&stru_83665C.?[40 * a2 + 51]; /*0x631dd2*/
  *((_DWORD *)this + 4) = 0; /*0x631dd5*/
  *((_DWORD *)this + 11) = v11; /*0x631ddc*/
  *((_DWORD *)this + 3) = v11; /*0x631ddf*/
  v12 = *(_DWORD *)&stru_83665C.?[40 * a2 + 63] - *(_DWORD *)&stru_83665C.?[40 * a2 + 67] + 1; /*0x631dea*/
  *((_DWORD *)this + 5) = *(_DWORD *)&stru_83665C.?[40 * a2 + 67] + rand() % v12; /*0x631df7*/
  result = *(_DWORD *)&stru_83665C.?[40 * a2 + 59] & rand(); /*0x631e03*/
  *((_DWORD *)this + 14) = result; /*0x631e05*/
  return result; /*0x631e02*/
}



// ==== 0x00631E30  TacticalClass::saveConfig  this=PixelFXClass  sig=csp ====
_DWORD *__thiscall TacticalClass::saveConfig(TacticalClass *this, int a2)
{
  this->AbstractClass = &PixelFXClass::`vftable'; /*0x631e38*/
  BuildingDebris::Init((BuildingDebris *)this, a2); /*0x631e3e*/
  return &this->AbstractClass; /*0x631e45*/
}



// ==== 0x00631E50  TacticalClass::InterpolateColor  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::InterpolateColor(TacticalClass *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // edi

  v2 = a2 * this->? + this->?; /*0x631e5f*/
  this->? = v2; /*0x631e61*/
  if ( v2 > 0x2000 ) /*0x631e69*/
    this->? = 0x2000; /*0x631e6b*/
  result = this->? & 0xFFF; /*0x631e77*/
  if ( (this->? & 0x1000) != 0 ) /*0x631e7f*/
    result = 4096 - result; /*0x631e88*/
  v4 = result * this->?; /*0x631ea5*/
  this->? = (void *)((result * this->? + (4096 - result) * this->field24) >> 12); /*0x631ea8*/
  this->? = (void *)((v4 + (4096 - result) * this->field28) >> 12); /*0x631eb7*/
  this->? = (void *)((result * (int)this->? + (4096 - result) * this->TacticalClass_field_2C) >> 12); /*0x631ecb*/
  return result; /*0x631eb3*/
}



// ==== 0x00631EE0  TacticalClass::DecrementCounter  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::DecrementCounter(TacticalClass *this, int a2)
{
  int result; // eax

  result = this->field38 - a2; /*0x631ee9*/
  this->field38 = result; /*0x631eeb*/
  if ( result > 0 ) /*0x631ef0*/
  {
    LOBYTE(result) = 0; /*0x631efe*/
  }
  else
  {
    this->field38 = 0; /*0x631ef2*/
    LOBYTE(result) = 1; /*0x631ef9*/
  }
  return result; /*0x631efb*/
}



// ==== 0x00631F10  ObjectClass::method_631F10  this=ObjectClass  sig=csp ====
int __thiscall sub_631F10(_DWORD *this, int a2, int a3)
{
  this->nextObject = a2; /*0x631f18*/
  this->attachedTag = a3; /*0x631f1b*/
  return a2; /*0x631f1e*/
}



// ==== 0x00631F30  PixelFXClass::method_631F30  this=PixelFXClass  sig=csp ====
void __thiscall sub_631F30(PixelFXClass *this)
{
  this->m_0 = (int)&PixelFXClass::`vftable'; /*0x631f30*/
}



// ==== 0x00631F40  GameClass::saveGameState  this=PixelFXClass  sig=csp ====
_DWORD *__thiscall GameClass::saveGameState(GameClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &PixelFXClass::`vftable'; /*0x631f49*/
  if ( (a2 & 1) != 0 ) /*0x631f4f*/
    __3_YAXPAX_Z(this); /*0x631f52*/
  return this->__pad_0; /*0x631f5c*/
}



// ==== 0x00631FC0  ObjectClass::method_631FC0  this=ObjectClass  sig=csp ====
int __thiscall sub_631FC0(ObjectClass *this, _BYTE *a2)
{
  if ( a2 ) /*0x631fc6*/
    return EncodeVarInt((int)this, a2, 64); /*0x631fcf*/
  else
    return 0; /*0x631fc8*/
}



// ==== 0x00631FE0  ObjectClass::method_631FE0  this=ObjectClass  sig=csp ====
int __thiscall sub_631FE0(ObjectClass *this, _BYTE *a2)
{
  if ( a2 ) /*0x631fe6*/
    return EncodeVarInt((int)this + 256, a2, 64); /*0x631ff5*/
  else
    return 0; /*0x631fe8*/
}



// ==== 0x00632000  ObjectClass::System_Init  this=ObjectClass  sig=csp ====
int __thiscall System_Init_632000(TechnoClass *this, _BYTE *a2)
{
  int result; // eax

  DecodeLengthLCW((int)this, a2, 64); /*0x632009*/
  result = FindBitArrayHighestBit((int)this, 64) - 1; /*0x63201a*/
  this->reloadTimer[1] = result; /*0x63201b*/
  return result; /*0x632021*/
}



// ==== 0x00632030  ObjectClass::System_Init  this=ObjectClass  sig=csp ====
char __thiscall System_Init_632030(ObjectClass *this, _BYTE *a2)
{
  return DecodeLengthLCW((int)this + 256, a2, 64); /*0x632041*/
}



// ==== 0x00632740  BigInt::DecryptBlock  this=BigInt  sig=csp ====
int __thiscall BigInt_DecryptBlock(int this, char *Src, int a3, char *a4)
{
  int v6; // eax
  int v7; // edx
  size_t v9; // [esp-10h] [ebp-218h]
  int v10; // [esp+4h] [ebp-204h]
  _DWORD v11[64]; // [esp+8h] [ebp-200h] BYREF
  _DWORD v12[64]; // [esp+108h] [ebp-100h] BYREF

  v10 = 0; /*0x632751*/
  if ( a3 < (*(_DWORD *)(this + 512) - 1) / 8 ) /*0x632768*/
    return 0; /*0x632863*/
  do /*0x63284e*/
  {
    InitArrayWithValue(v11, 0, 64); /*0x632780*/
    memcpy(v11, Src, (*(_DWORD *)(this + 512) - 1) / 8); /*0x6327a3*/
    InitArrayWithValue(v12, 0, 64); /*0x6327b6*/
    dword_A8F8F8 = ModBigIntExp(v12, v11, (char *)(this + 256), (char *)this, 64); /*0x6327d5*/
    v9 = (*(_DWORD *)(this + 512) - 1) / 8 + 1; /*0x6327ff*/
    qmemcpy(v11, v12, sizeof(v11)); /*0x632801*/
    memcpy(a4, v11, v9); /*0x632804*/
    v6 = (*(_DWORD *)(this + 512) - 1) / 8; /*0x63282b*/
    v7 = v10 + v6 + 1; /*0x632832*/
    a3 -= v6; /*0x632838*/
    Src += v6; /*0x63283f*/
    a4 += v6 + 1; /*0x632846*/
    v10 = v7; /*0x63284a*/
  }
  while ( a3 >= v6 ); /*0x63284e*/
  return v7; /*0x632859*/
}



// ==== 0x00632870  BigInt::RSAOperation  this=ObjectClass  sig=csp ====
int __thiscall BigInt_RSAOperation(int this, char *Src, int a3, char *a4)
{
  int v6; // kr00_4
  int v7; // kr08_4
  int v8; // edx
  int v9; // esi
  bool v10; // cc
  size_t v12; // [esp-Ch] [ebp-318h]
  int v13; // [esp+8h] [ebp-304h]
  _DWORD v14[64]; // [esp+Ch] [ebp-300h] BYREF
  _DWORD v15[64]; // [esp+10Ch] [ebp-200h] BYREF
  _DWORD v16[64]; // [esp+20Ch] [ebp-100h] BYREF

  v13 = 0; /*0x632884*/
  InitArrayWithValue(v14, 0, 64); /*0x632888*/
  if ( a3 < (*(_DWORD *)(this + 512) - 1) / 8 + 1 ) /*0x6328a7*/
    return 0; /*0x6329b3*/
  do /*0x63299e*/
  {
    InitArrayWithValue(v16, 0, 64); /*0x6328c1*/
    v12 = (*(_DWORD *)(this + 512) - 1) / 8 + 1; /*0x6328e7*/
    qmemcpy(v14, v16, sizeof(v14)); /*0x6328ee*/
    memcpy(v14, Src, v12); /*0x6328f0*/
    InitArrayWithValue(v15, 0, 64); /*0x632903*/
    dword_A8F8F8 = ModBigIntExp(v15, v14, (char *)(this + 256), (char *)this, 64); /*0x632922*/
    v6 = *(_DWORD *)(this + 512) - 1; /*0x632942*/
    qmemcpy(v14, v15, sizeof(v14)); /*0x632944*/
    memcpy(a4, v14, v6 / 8); /*0x632957*/
    v7 = *(_DWORD *)(this + 512) - 1; /*0x632971*/
    v8 = -1 - v7 / 8; /*0x63297b*/
    a4 += v7 / 8; /*0x63297d*/
    Src += v7 / 8 + 1; /*0x63298a*/
    v9 = v7 / 8 + v13; /*0x63298e*/
    v10 = v8 + a3 < v7 / 8 + 1; /*0x632991*/
    a3 += v8; /*0x632993*/
    v13 = v9; /*0x63299a*/
  }
  while ( !v10 ); /*0x63299e*/
  return v9; /*0x6329a8*/
}



// ==== 0x006329C0  ObjectClass::method_6329C0  this=ObjectClass  sig=csp ====
void *__thiscall sub_6329C0(ObjectClass *this, void *a2, unsigned __int16 a3)
{
  _DWORD v5[64]; // [esp+8h] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x6329d2*/
  byte_A8F8FD = DecodeAudioSampleWord((int)v5, (unsigned __int16 *)this, a3, 0, 64); /*0x6329ee*/
  qmemcpy(a2, v5, 0x100u); /*0x632a05*/
  return a2; /*0x632a07*/
}



// ==== 0x00632A20  ObjectClass::method_632A20  this=ObjectClass  sig=csp ====
void *__thiscall sub_632A20(ObjectClass *this, void *a2, const void *a3)
{
  _DWORD v5[64]; // [esp+8h] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x632a32*/
  ModInverseBigInteger((char *)v5, this, a3, 64); /*0x632a47*/
  qmemcpy(a2, v5, 0x100u); /*0x632a5e*/
  return a2; /*0x632a60*/
}



// ==== 0x00632A70  ObjectClass::method_632A70  this=ObjectClass  sig=csp ====
int __thiscall sub_632A70(ObjectClass *this, int a2, int a3, int a4)
{
  int result; // eax

  sub_5C8E40(this, a2, a3, a4, 64); /*0x632a85*/
  result = (int)this->AbstractClass; /*0x632a8a*/
  LOBYTE(result) = (int)this->AbstractClass | 1; /*0x632a8c*/
  this->AbstractClass = (void *)result; /*0x632a8e*/
  return result; /*0x632a90*/
}



// ==== 0x00632AA0  Crypto::DecodeByte  this=Crypto  sig=csp ====
void *__thiscall Crypto::DecodeByte(Crypto *this, int a2)
{
  byte_A8F8FC = Crypto_Helper((unsigned int *)this, (unsigned int *)this, (_DWORD *)a2, 0, 64); /*0x632ab3*/
  return this; /*0x632aba*/
}



// ==== 0x00632AC0  ObjectClass::method_632AC0  this=ObjectClass  sig=csp ====
unsigned int *__thiscall sub_632AC0(ObjectClass *this, unsigned int *a2, unsigned __int16 a3)
{
  unsigned int v5[64]; // [esp+8h] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x632ad2*/
  byte_A8F8FC = sub_5C6AA0(v5, (unsigned int *)this, a3, 0, 64); /*0x632af3*/
  qmemcpy(a2, v5, 0x100u); /*0x632b0a*/
  return a2; /*0x632b0c*/
}



// ==== 0x00632B20  ObjectClass::method_632B20  this=ObjectClass  sig=csp ====
void *__thiscall sub_632B20(ObjectClass *this, void *a2, __int16 a3)
{
  _DWORD v5[64]; // [esp+8h] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x632b32*/
  *(int *)((char *)&stru_A8EB00.? + 1) = sub_5C6D90((int)v5, (unsigned __int16 *)this, a3, 64); /*0x632b4c*/
  qmemcpy(a2, v5, 0x100u); /*0x632b63*/
  return a2; /*0x632b65*/
}



// ==== 0x00632B70  Buffer::RotateBufferCrypto  this=Buffer  sig=csp ====
int *__thiscall Buffer::RotateBufferCrypto(Buffer *this, int *a2, int a3)
{
  int v4[64]; // [esp+8h] [ebp-100h] BYREF

  qmemcpy(v4, this, sizeof(v4)); /*0x632b8c*/
  RotateBitBufferLeft(v4, a3, 64); /*0x632b92*/
  qmemcpy(a2, v4, 0x100u); /*0x632ba9*/
  return a2; /*0x632bab*/
}



// ==== 0x00632BC0  BigInt::Compare  this=BigInt  sig=csp ====
bool __thiscall BigInt::Compare(BigInt *this, int a2)
{
  return CompareBigIntLE((int)this, a2, 64) > 0; /*0x632bd4*/
}



// ==== 0x00632BE0  Palette::ConvertIndices  this=Palette  sig=csp ====
_BYTE *__thiscall Palette::ConvertIndices(Palette *this, int a2)
{
  int v3; // ebx
  _WORD *v4; // eax
  _WORD *v5; // esi
  __int16 *v6; // edi

  LOBYTE(this->m_Colors[0]) = 0; /*0x632be9*/
  v3 = Hash_Check_5C61E0(); /*0x632bf1*/
  v4 = Hash_Check(); /*0x632bf3*/
  if ( v3 <= 0 ) /*0x632bfa*/
    return this; /*0x632c31*/
  v5 = v4; /*0x632c02*/
  v6 = (__int16 *)this->m_Colors + 1; /*0x632c04*/
  do /*0x632c23*/
  {
    LOWORD(v4) = *v5; /*0x632c07*/
    *v6 = ShiftBigIntAndScan(&stru_A8EB00.?[1], a2, (int)v4, 64); /*0x632c19*/
    ++v5; /*0x632c1c*/
    ++v6; /*0x632c1f*/
    --v3; /*0x632c22*/
  }
  while ( v3 ); /*0x632c23*/
  return this; /*0x632c2b*/
}



// ==== 0x00632C40  CheckSum::AccumulateModulo  this=CheckSum  sig=csp ====
int __thiscall CheckSum::AccumulateModulo(CheckSum *this, __int16 a2)
{
  int v3; // edi
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  unsigned __int16 i; // dx
  bool v8; // dl

  v3 = Hash_Check_5C61E0(); /*0x632c49*/
  result = (int)Hash_Check(); /*0x632c4b*/
  this->__tail_0[0] = 0; /*0x632c52*/
  if ( v3 > 0 ) /*0x632c55*/
  {
    v5 = 2; /*0x632c5d*/
    v6 = v3; /*0x632c62*/
    do /*0x632ca3*/
    {
      *(_WORD *)&this->__tail_0[v5] += a2; /*0x632c64*/
      for ( i = *(_WORD *)(result + v5 - 2); *(_WORD *)&this->__tail_0[v5] >= i; i = *(_WORD *)(result + v5 - 2) ) /*0x632c74*/
        *(_WORD *)&this->__tail_0[v5] -= i; /*0x632c76*/
      v8 = this->__tail_0[0] || !*(_WORD *)&this->__tail_0[v5]; /*0x632c98*/
      v5 += 2; /*0x632c9d*/
      --v6; /*0x632ca0*/
      this->__tail_0[0] = v8; /*0x632ca1*/
    }
    while ( v6 ); /*0x632ca3*/
  }
  return result; /*0x632ca7*/
}



// ==== 0x00632D10  PKPipe::RelinkNode  this=PKPipe  sig=csp ====
void __thiscall LinkedList_RelinkNode(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( this->q018 != a2 ) /*0x632d1b*/
  {
    if ( a2 ) /*0x632d1f*/
    {
      v3 = *(_DWORD *)(a2 + 8); /*0x632d21*/
      if ( v3 ) /*0x632d26*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 12))(v3, 0); /*0x632d2c*/
        *(_DWORD *)(a2 + 8) = 0; /*0x632d2f*/
      }
    }
    v4 = this->q018; /*0x632d36*/
    if ( v4 ) /*0x632d3b*/
      *(_DWORD *)(v4 + 8) = 0; /*0x632d3d*/
    this->q018 = a2; /*0x632d46*/
    if ( a2 ) /*0x632d49*/
      *(_DWORD *)(a2 + 8) = this + 5; /*0x632d4e*/
    this->q01C = this; /*0x632d54*/
    this->q004 = this + 5; /*0x632d57*/
  }
}



// ==== 0x00632D60  ObjectClass::method_632D60  this=ObjectClass  sig=csp ====
int __thiscall sub_632D60(ObjectClass *this, int a2)
{
  int result; // eax
  TagClass *attachedTag; // ecx

  if ( !a2 ) /*0x632d6a*/
  {
    result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 1))(this); /*0x632d6e*/
    LOBYTE(this->?) = 0; /*0x632d71*/
  }
  this->attachedBomb = (BombClass *)a2; /*0x632d77*/
  if ( a2 ) /*0x632d7a*/
  {
    attachedTag = this->attachedTag; /*0x632d7c*/
    result = 1; /*0x632d7f*/
    LOBYTE(this->?) = 1; /*0x632d86*/
    if ( attachedTag == (TagClass *)1 ) /*0x632d89*/
    {
      result = ((*(_DWORD *)(a2 + 512) - 1) / 8 + 1) * (55 / ((*(_DWORD *)(a2 + 512) - 1) / 8) + 1); /*0x632da7*/
      this->customSound_controller = result; /*0x632daa*/
      this->q04F = result; /*0x632db0*/
    }
  }
  return result; /*0x632db6*/
}



// ==== 0x00632DC0  PKPipe::WriteEncryptedStream  this=PKPipe  sig=csp ====
int __thiscall GameClass::WriteEncryptedStream(PKPipe *this, char *Src, int a3)
{
  char *v3; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  signed int v9; // edi
  bool v10; // zf
  int v12[64]; // [esp+8h] [ebp-100h] BYREF

  v3 = Src; /*0x632dc7*/
  if ( Src && a3 >= 1 && *(_DWORD *)&this->__pad_24[20] ) /*0x632de7*/
  {
    v5 = 0; /*0x632df6*/
    if ( this->__pad_0[12] ) /*0x632df2*/
    {
      if ( *(_DWORD *)&this->__pad_24[16] ) /*0x632e01*/
      {
        v9 = this->q050; /*0x632e6f*/
        if ( v9 >= a3 ) /*0x632e7e*/
          v9 = a3; /*0x632e80*/
        memcpy(&this->__pad_24[this->u32_13C - this->q050 + 24], Src, v9); /*0x632e97*/
        v3 = &Src[v9]; /*0x632eb0*/
        v10 = this->q050 == v9; /*0x632eb2*/
        a3 -= v9; /*0x632eb4*/
        this->q050 -= v9; /*0x632ebb*/
        if ( !v10 ) /*0x632ec1*/
          return v5 + Delegate::Dispatch((Pipe *)this, (int)v3, a3); /*0x632ec1*/
        BigInt::RSAOperation( /*0x632ed6*/
          *(_DWORD *)&this->__pad_24[20],
          (char *)&this->field_3C,
          this->u32_13C,
          (char *)v12);
        GameClass::processFrame((GameClass *)&this->field_14, (int)v12, 56); /*0x632ee5*/
      }
      else
      {
        memset(v12, 0, sizeof(v12)); /*0x632e17*/
        (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&this->__pad_0[16] + 8))( /*0x632e21*/
          *(_DWORD *)&this->__pad_0[16],
          v12,
          56);
        v6 = *(_DWORD *)&this->__pad_24[20]; /*0x632e24*/
        if ( v6 ) /*0x632e29*/
          v7 = (*(_DWORD *)(v6 + 512) - 1) / 8 * (55 / ((*(_DWORD *)(v6 + 512) - 1) / 8) + 1); /*0x632e4a*/
        else
          v7 = 0; /*0x632e2b*/
        v8 = BigInt::DecryptBlock(v6, (char *)v12, v7, (char *)&this->field_3C); /*0x632e57*/
        v5 = Delegate::Dispatch((Pipe *)this, (int)&this->field_3C, v8); /*0x632e65*/
        GameClass::processFrame((GameClass *)&this->field_14, (int)v12, 56); /*0x632e6d*/
      }
      this->__pad_0[12] = 0; /*0x632eea*/
    }
    return v5 + Delegate::Dispatch((Pipe *)this, (int)v3, a3); /*0x632f0a*/
  }
  return Delegate::Dispatch((Pipe *)this, (int)Src, a3); /*0x632f02*/
}



// ==== 0x00632F90  BlowPipe::QueryInterface  this=BlowPipe  sig=csp ====
_DWORD *__thiscall BlowPipe::QueryInterface(BlowPipe *this, char a2)
{
  COMObject *BlowPipe_field_0x0C; // edi

  BlowPipe_field_0x0C = (COMObject *)this->BlowPipe_field_0x0C; /*0x632f94*/
  *(_DWORD *)this->__pad_0 = &BlowPipe::`vftable'; /*0x632f97*/
  if ( BlowPipe_field_0x0C ) /*0x632f9f*/
  {
    COMObject::Release(BlowPipe_field_0x0C); /*0x632fa3*/
    __3_YAXPAX_Z(BlowPipe_field_0x0C); /*0x632fa9*/
  }
  this->BlowPipe_field_0x0C = 0; /*0x632fb3*/
  Pipe::Dtor((Pipe *)this); /*0x632fba*/
  if ( (a2 & 1) != 0 ) /*0x632fc4*/
    __3_YAXPAX_Z(this); /*0x632fc7*/
  return this->__pad_0; /*0x632fd1*/
}



// ==== 0x00632FE0  PKPipe::loadGameState  this=PKPipe  sig=csp ====
int __thiscall GameClass::loadGameState(PKPipe *this, int a2)
{
  return (*(int (__thiscall **)(PKPipe *, int))(*(_DWORD *)this->__pad_0 + 12))(this, a2); /*0x632fea*/
}



// ==== 0x00632FF0  PKPipe::validateGameFile  this=PKPipe  sig=csp ====
_DWORD *__thiscall GameClass::validateGameFile(PKPipe *this, char a2)
{
  COMObject *v3; // ebx
  Pipe *v4; // esi

  v3 = (COMObject *)this->field_20; /*0x632ff5*/
  v4 = (Pipe *)&this->field_14; /*0x632ff8*/
  this->field_14 = (int)&BlowPipe::`vftable'; /*0x632ffd*/
  if ( v3 ) /*0x633003*/
  {
    COMObject::Release(v3); /*0x633007*/
    __3_YAXPAX_Z(v3); /*0x63300d*/
  }
  v4->Pipe_field_0x0C = 0; /*0x633017*/
  Pipe::Dtor(v4); /*0x63301e*/
  Pipe::Dtor((Pipe *)this); /*0x633025*/
  if ( (a2 & 1) != 0 ) /*0x63302f*/
    __3_YAXPAX_Z(this); /*0x633032*/
  return this->__pad_0; /*0x63303c*/
}



// ==== 0x00633050  PKStrawClass::Initialize  this=PKStrawClass  sig=csp ====
int __thiscall PKStrawClass::Initialize(PKStrawClass *this, int a2, int a3)
{
  this->q004 = a3; /*0x633060*/
  this->PKStrawClass_field_0x04 = 0; /*0x63306b*/
  this->PKStrawClass_field_0x08 = 0; /*0x63306e*/
  *((_BYTE *)this + 12) = 1; /*0x633071*/
  *((_DWORD *)this + 6) = 0; /*0x633075*/
  *((_DWORD *)this + 7) = 0; /*0x633078*/
  this->q008 = 0; /*0x63307b*/
  *((_DWORD *)this + 11) = 0; /*0x63307e*/
  *((_DWORD *)this + 12) = a2 != 0; /*0x633081*/
  *((_DWORD *)this + 5) = &BlowStraw::`vftable'; /*0x633084*/
  *((_DWORD *)this + 14) = 0; /*0x63308a*/
  *((_DWORD *)this + 79) = 0; /*0x63308d*/
  *((_DWORD *)this + 80) = 0; /*0x633093*/
  *((_DWORD *)this + 13) = a2; /*0x63309c*/
  *(_DWORD *)this->__pad_0 = &PKStraw::`vftable'; /*0x63309f*/
  PKStrawClass::RelayBlowfishKey((PKStraw *)this, (int)this + 20); /*0x6330a5*/
  return (int)this->__pad_0; /*0x6330ad*/
}



// ==== 0x006330C0  PKStraw::RelayBlowfishKey  this=PKStrawClass  sig=csp ====
void __thiscall PKStrawClass::RelayBlowfishKey(PKStraw *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( *(_DWORD *)this->__pad_18 != a2 ) /*0x6330cb*/
  {
    if ( a2 ) /*0x6330cf*/
    {
      v3 = *(_DWORD *)(a2 + 8); /*0x6330d1*/
      if ( v3 ) /*0x6330d6*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 4))(v3, 0); /*0x6330dc*/
        *(_DWORD *)(a2 + 8) = 0; /*0x6330df*/
      }
    }
    v4 = *(_DWORD *)this->__pad_18; /*0x6330e6*/
    if ( v4 ) /*0x6330eb*/
      *(_DWORD *)(v4 + 8) = 0; /*0x6330ed*/
    *(_DWORD *)this->__pad_18 = a2; /*0x6330f7*/
    *(_DWORD *)&this->__pad_18[4] = this; /*0x6330fc*/
    *(_DWORD *)&this->m_1[3] = &this->m_14; /*0x6330ff*/
    if ( a2 ) /*0x633102*/
      *(_DWORD *)(a2 + 8) = this; /*0x633104*/
  }
}



// ==== 0x00633110  PKStrawClass::SetSource  this=PKStrawClass  sig=csp ====
int __thiscall sub_633110(int this, int a2)
{
  int result; // eax

  result = a2; /*0x633110*/
  *(_DWORD *)(this + 56) = a2; /*0x633118*/
  if ( a2 ) /*0x63311b*/
    *(_BYTE *)(this + 12) = 1; /*0x63311d*/
  *(_DWORD *)(this + 316) = 0; /*0x633121*/
  *(_DWORD *)(this + 320) = 0; /*0x633127*/
  return result; /*0x63312d*/
}



// ==== 0x00633130  PKStraw::ReadEncryptedStream  this=PKStrawClass  sig=csp ====
int __thiscall GameClass::ReadEncryptedStream(PKStraw *this, char *a2, signed int Size)
{
  char *v3; // ebp
  signed int v4; // edi
  int m_38; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int m_140; // eax
  signed int v16; // [esp+10h] [ebp-104h]
  char Src[256]; // [esp+14h] [ebp-100h] BYREF

  v3 = a2; /*0x633138*/
  v4 = Size; /*0x633141*/
  if ( !a2 ) /*0x63314c*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x63314c*/
  if ( Size < 1 ) /*0x633155*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x633155*/
  m_38 = this->m_38; /*0x63315b*/
  if ( !m_38 ) /*0x633160*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x6332e5*/
  v16 = 0; /*0x633169*/
  if ( LOBYTE(this->m_C) ) /*0x633166*/
  {
    if ( this->m_34 == 1 ) /*0x63317d*/
    {
      v7 = Delegate::Invoke( /*0x6331a6*/
             (Straw *)this,
             (int)Src,
             ((*(_DWORD *)(m_38 + 512) - 1) / 8 + 1) * (55 / ((*(_DWORD *)(m_38 + 512) - 1) / 8) + 1));
      v8 = this->m_38; /*0x6331ab*/
      v9 = v7; /*0x6331ae*/
      if ( v8 ) /*0x6331b2*/
        v10 = ((*(_DWORD *)(v8 + 512) - 1) / 8 + 1) * (55 / ((*(_DWORD *)(v8 + 512) - 1) / 8) + 1); /*0x6331d4*/
      else
        v10 = 0; /*0x6331b4*/
      if ( v9 != v10 ) /*0x6331d9*/
        return 0; /*0x6331e7*/
      BigInt::RSAOperation(v8, Src, v9, (char *)&this->m_3C); /*0x6331f4*/
      GameClass::updateUI((GameClass *)&this->m_14, (int)&this->m_3C, 56); /*0x6331fc*/
    }
    else
    {
      memset(Src, 0, sizeof(Src)); /*0x63320d*/
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)this->m_10 + 8))(this->m_10, Src, 56); /*0x633217*/
      v12 = this->m_38; /*0x63321a*/
      if ( v12 ) /*0x63321f*/
        v13 = (*(_DWORD *)(v12 + 512) - 1) / 8 * (55 / ((*(_DWORD *)(v12 + 512) - 1) / 8) + 1); /*0x633240*/
      else
        v13 = 0; /*0x633221*/
      v14 = BigInt::DecryptBlock(v12, Src, v13, (char *)&this->m_3C); /*0x63324d*/
      this->m_140 = v14; /*0x633258*/
      this->m_13C = v14; /*0x63325e*/
      GameClass::updateUI((GameClass *)&this->m_14, (int)Src, 56); /*0x633268*/
    }
    v4 = Size; /*0x63326d*/
    LOBYTE(this->m_C) = 0; /*0x633274*/
  }
  m_140 = this->m_140; /*0x633278*/
  if ( m_140 > 0 ) /*0x633280*/
  {
    if ( v4 >= m_140 ) /*0x633284*/
      v4 = this->m_140; /*0x633286*/
    memcpy(a2, (char *)&this->m_3C + this->m_13C - m_140, v4); /*0x633297*/
    v3 = &a2[v4]; /*0x6332ac*/
    v16 = v4; /*0x6332b2*/
    this->m_140 -= v4; /*0x6332b6*/
    v4 = Size - v4; /*0x6332c3*/
  }
  return v16 + Delegate::Invoke((Straw *)this, (int)v3, v4); /*0x6331db*/
}



// ==== 0x00633360  PKStraw::parseGameOptions  this=PKStrawClass  sig=csp ====
int __thiscall GameClass::parseGameOptions(PKStraw *this, int a2)
{
  return (*(int (__thiscall **)(PKStraw *, int))(*(_DWORD *)this->__pad_0 + 4))(this, a2); /*0x63336a*/
}



// ==== 0x00633370  PKStraw::applyGameSettings  this=PKStrawClass  sig=csp ====
_DWORD *__thiscall GameClass::applyGameSettings(PKStraw *this, char a2)
{
  COMObject *v3; // ebx
  Straw *p_m_14; // esi

  v3 = *(COMObject **)&this->__pad_18[8]; /*0x633375*/
  p_m_14 = (Straw *)&this->m_14; /*0x633378*/
  this->m_14 = (int)&BlowStraw::`vftable'; /*0x63337d*/
  if ( v3 ) /*0x633383*/
  {
    COMObject::Release(v3); /*0x633387*/
    __3_YAXPAX_Z(v3); /*0x63338d*/
  }
  p_m_14[1].Straw_field_0x04 = 0; /*0x633397*/
  Straw::Dtor(p_m_14); /*0x63339e*/
  Straw::Dtor((Straw *)this); /*0x6333a5*/
  if ( (a2 & 1) != 0 ) /*0x6333af*/
    __3_YAXPAX_Z(this); /*0x6333b2*/
  return this->__pad_0; /*0x6333bc*/
}



// ==== 0x006333D0  sub_6333D0  this=-  sig=ida-proto ====
void sub_6333D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6333dc*/
  dbl_AC4BE8 = Math::Sqrt(v0 + v0); /*0x6333ee*/
}



// ==== 0x00633400  sub_633400  this=-  sig=ida-proto ====
void sub_633400()
{
  dbl_AC4CE8 = dbl_AC4BE8 / 60.0; /*0x63340c*/
}



// ==== 0x00633420  sub_633420  this=-  sig=ida-proto ====
void sub_633420()
{
  dbl_AC4CC0 = 1.0 / dbl_AC4CE8; /*0x63342c*/
}



// ==== 0x00633440  sub_633440  this=-  sig=ida-proto ====
void sub_633440()
{
  dbl_AC4CB8 = 0.0174532925199433 * 45.0; /*0x63344c*/
}



// ==== 0x00633460  sub_633460  this=-  sig=ida-proto ====
void sub_633460()
{
  dbl_AC4C10 = 0.0174532925199433 * 60.0; /*0x63346c*/
}



// ==== 0x00633480  sub_633480  this=-  sig=ida-proto ====
void sub_633480()
{
  dbl_AC4B68 = 0.0174532925199433 * 90.0; /*0x63348c*/
}



// ==== 0x006334A0  sub_6334A0  this=-  sig=ida-proto ====
__int64 sub_6334A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4B68 - dbl_AC4C10); /*0x6334b2*/
  result = Math::RoundToInt(v0 * dbl_AC4BE8 * 0.5); /*0x6334c6*/
  dword_AC4CF0 = result; /*0x6334cb*/
  return result; /*0x6334d0*/
}



// ==== 0x006334E0  sub_6334E0  this=-  sig=ida-proto ====
void sub_6334E0()
{
  dbl_AC4C30 = Math::ArcTan((double)dword_AC4CF0 * 0.00390625); /*0x6334f7*/
}



// ==== 0x00633510  sub_633510  this=-  sig=ida-proto ====
void sub_633510()
{
  dbl_AC4C70 = Math::ArcTan((double)(2 * dword_AC4CF0) / dbl_AC4BE8); /*0x633532*/
}



// ==== 0x00633540  sub_633540  this=-  sig=ida-proto ====
__int64 sub_633540()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4CF0) + 0.5); /*0x63355b*/
  dword_AC4CE4 = result; /*0x633560*/
  return result; /*0x633566*/
}



// ==== 0x00633570  sub_633570  this=-  sig=ida-proto ====
int sub_633570()
{
  word_AC4BE4 = 0; /*0x633572*/
  word_AC4BE6 = 0; /*0x633578*/
  return 0; /*0x63357e*/
}



// ==== 0x00633580  sub_633580  this=-  sig=ida-proto ====
int sub_633580()
{
  dword_AC4C58 = 0; /*0x633582*/
  dword_AC4C5C = 0; /*0x633587*/
  dword_AC4C60 = 0; /*0x63358c*/
  return 0; /*0x633591*/
}



// ==== 0x006335A0  sub_6335A0  this=-  sig=ida-proto ====
int sub_6335A0()
{
  dword_AC4CE0 = 0; /*0x6335a5*/
  dword_AC4CD8 = 128; /*0x6335af*/
  dword_AC4CDC = 128; /*0x6335b4*/
  return 128; /*0x6335b9*/
}



// ==== 0x006335C0  sub_6335C0  this=-  sig=ida-proto ====
int sub_6335C0()
{
  dword_AC4B70 = 0; /*0x6335c2*/
  dword_AC4B74 = 0; /*0x6335c7*/
  dword_AC4B78 = 0; /*0x6335cc*/
  dword_AC4B7C = 0; /*0x6335d1*/
  return 0; /*0x6335d6*/
}



// ==== 0x006335E0  sub_6335E0  this=-  sig=ida-proto ====
int sub_6335E0()
{
  dword_AC4B4C = 0; /*0x6335e7*/
  dword_AC4B50 = 0; /*0x6335ec*/
  byte_AC4B54 = 1; /*0x6335f1*/
  byte_AC4B55 = 0; /*0x6335f8*/
  dword_AC4B48 = (int)&DynamicVectorClass<EventClass *>::`vftable'; /*0x6335fd*/
  dword_AC4B5C = 10; /*0x633607*/
  dword_AC4B58 = 0; /*0x633611*/
  return atexit(sub_633620); /*0x63361c*/
}



// ==== 0x00633620  sub_633620  this=-  sig=ida-proto ====
void __cdecl sub_633620()
{
  if ( (byte_AC4B61 & 1) == 0 ) /*0x63362a*/
  {
    dword_AC4B48 = (int)&VectorClass<EventClass *>::`vftable'; /*0x63362e*/
    byte_AC4B61 |= 1u; /*0x633641*/
    if ( dword_AC4B4C ) /*0x633647*/
    {
      if ( byte_AC4B55 ) /*0x633651*/
      {
        __3_YAXPAX_Z(dword_AC4B4C); /*0x633654*/
        dword_AC4B4C = 0; /*0x63365c*/
      }
    }
    byte_AC4B55 = 0; /*0x633666*/
    dword_AC4B50 = 0; /*0x63366d*/
  }
}



// ==== 0x00633680  sub_633680  this=-  sig=ida-proto ====
int sub_633680()
{
  dword_AC4C9C = 0; /*0x633687*/
  dword_AC4CA0 = 0; /*0x63368c*/
  byte_AC4CA4 = 1; /*0x633691*/
  byte_AC4CA5 = 0; /*0x633698*/
  dword_AC4C98 = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x63369d*/
  dword_AC4CAC = 10; /*0x6336a7*/
  dword_AC4CA8 = 0; /*0x6336b1*/
  return atexit(sub_6336C0); /*0x6336bc*/
}



// ==== 0x006336C0  sub_6336C0  this=-  sig=ida-proto ====
void __cdecl sub_6336C0()
{
  if ( (byte_AC4B60 & 1) == 0 ) /*0x6336ca*/
  {
    dword_AC4C98 = (int)&VectorClass<PlanningNodeClass *>::`vftable'; /*0x6336ce*/
    byte_AC4B60 |= 1u; /*0x6336e1*/
    if ( dword_AC4C9C ) /*0x6336e7*/
    {
      if ( byte_AC4CA5 ) /*0x6336f1*/
      {
        __3_YAXPAX_Z(dword_AC4C9C); /*0x6336f4*/
        dword_AC4C9C = 0; /*0x6336fc*/
      }
    }
    byte_AC4CA5 = 0; /*0x633706*/
    dword_AC4CA0 = 0; /*0x63370d*/
  }
}



// ==== 0x00633720  sub_633720  this=-  sig=ida-proto ====
int sub_633720()
{
  MEMORY[0xAC4C44] = 0; /*0x633727*/
  MEMORY[0xAC4C48] = 0; /*0x63372c*/
  MEMORY[0xAC4C4C] = 1; /*0x633731*/
  MEMORY[0xAC4C4D] = 0; /*0x633738*/
  stru_AC4C40 = (int)&DynamicVectorClass<TechnoClass *>::`vftable'; /*0x63373d*/
  MEMORY[0xAC4C54] = 10; /*0x633747*/
  MEMORY[0xAC4C50] = 0; /*0x633751*/
  return atexit(sub_633760); /*0x63375c*/
}



// ==== 0x00633760  sub_633760  this=-  sig=ida-proto ====
void __cdecl sub_633760()
{
  if ( (byte_AC4B63 & 1) == 0 ) /*0x63376a*/
  {
    stru_AC4C40 = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x63376e*/
    byte_AC4B63 |= 1u; /*0x633781*/
    if ( MEMORY[0xAC4C44] ) /*0x633787*/
    {
      if ( MEMORY[0xAC4C4D] ) /*0x633791*/
      {
        __3_YAXPAX_Z(MEMORY[0xAC4C44]); /*0x633794*/
        MEMORY[0xAC4C44] = 0; /*0x63379c*/
      }
    }
    MEMORY[0xAC4C4D] = 0; /*0x6337a6*/
    MEMORY[0xAC4C48] = 0; /*0x6337ad*/
  }
}



// ==== 0x006337C0  sub_6337C0  this=-  sig=ida-proto ====
int sub_6337C0()
{
  dword_AC4B34 = 0; /*0x6337c7*/
  dword_AC4B38 = 0; /*0x6337cc*/
  byte_AC4B3C = 1; /*0x6337d1*/
  byte_AC4B3D = 0; /*0x6337d8*/
  stru_AC4B30 = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x6337dd*/
  dword_AC4B44 = 10; /*0x6337e7*/
  dword_AC4B40 = 0; /*0x6337f1*/
  return atexit(sub_633800); /*0x6337fc*/
}



// ==== 0x00633800  sub_633800  this=-  sig=ida-proto ====
void __cdecl sub_633800()
{
  if ( (byte_AC4B62 & 1) == 0 ) /*0x63380a*/
  {
    stru_AC4B30 = (int)&VectorClass<PlanningNodeClass *>::`vftable'; /*0x63380e*/
    byte_AC4B62 |= 1u; /*0x633821*/
    if ( dword_AC4B34 ) /*0x633827*/
    {
      if ( byte_AC4B3D ) /*0x633831*/
      {
        __3_YAXPAX_Z(dword_AC4B34); /*0x633834*/
        dword_AC4B34 = 0; /*0x63383c*/
      }
    }
    byte_AC4B3D = 0; /*0x633846*/
    dword_AC4B38 = 0; /*0x63384d*/
  }
}



// ==== 0x00633860  sub_633860  this=-  sig=ida-proto ====
int sub_633860()
{
  dword_AC4C1C = 0; /*0x633867*/
  dword_AC4C20 = 0; /*0x63386c*/
  byte_AC4C24 = 1; /*0x633871*/
  byte_AC4C25 = 0; /*0x633878*/
  dword_AC4C18 = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x63387d*/
  dword_AC4C2C = 10; /*0x633887*/
  dword_AC4C28 = 0; /*0x633891*/
  return atexit(sub_6338A0); /*0x63389c*/
}



// ==== 0x006338A0  sub_6338A0  this=-  sig=ida-proto ====
void __cdecl sub_6338A0()
{
  if ( (byte_AC4B62 & 2) == 0 ) /*0x6338aa*/
  {
    dword_AC4C18 = (int)&VectorClass<PlanningNodeClass *>::`vftable'; /*0x6338ae*/
    byte_AC4B62 |= 2u; /*0x6338c1*/
    if ( dword_AC4C1C ) /*0x6338c7*/
    {
      if ( byte_AC4C25 ) /*0x6338d1*/
      {
        __3_YAXPAX_Z(dword_AC4C1C); /*0x6338d4*/
        dword_AC4C1C = 0; /*0x6338dc*/
      }
    }
    byte_AC4C25 = 0; /*0x6338e6*/
    dword_AC4C20 = 0; /*0x6338ed*/
  }
}



// ==== 0x00633900  sub_633900  this=-  sig=ida-proto ====
int sub_633900()
{
  dword_AC4C7C = 0; /*0x633907*/
  dword_AC4C80 = 0; /*0x63390c*/
  byte_AC4C84 = 1; /*0x633911*/
  byte_AC4C85 = 0; /*0x633918*/
  dword_AC4C78 = (int)&DynamicVectorClass<PlanningTokenClass *>::`vftable'; /*0x63391d*/
  dword_AC4C8C = 10; /*0x633927*/
  dword_AC4C88 = 0; /*0x633931*/
  return atexit(sub_633940); /*0x63393c*/
}



// ==== 0x00633940  sub_633940  this=-  sig=ida-proto ====
void __cdecl sub_633940()
{
  if ( (byte_AC4B62 & 4) == 0 ) /*0x63394a*/
  {
    dword_AC4C78 = (int)&VectorClass<PlanningTokenClass *>::`vftable'; /*0x63394e*/
    byte_AC4B62 |= 4u; /*0x633961*/
    if ( dword_AC4C7C ) /*0x633967*/
    {
      if ( byte_AC4C85 ) /*0x633971*/
      {
        __3_YAXPAX_Z(dword_AC4C7C); /*0x633974*/
        dword_AC4C7C = 0; /*0x63397c*/
      }
    }
    byte_AC4C85 = 0; /*0x633986*/
    dword_AC4C80 = 0; /*0x63398d*/
  }
}



// ==== 0x006339A0  Camera::StubReturn  this=Camera  sig=ida-proto ====
void Camera::StubReturn()
{
  ; /*0x6339a0*/
}



// ==== 0x006339B0  TeamClass::GetLeaderIndex  this=TeamClass  sig=csp ====
int __thiscall TeamClass::GetLeaderIndex(TeamClass *this)
{
  int v1; // ecx
  int v2; // esi

  v1 = this->unknown87; /*0x6339b0*/
  v2 = *(_DWORD *)(v1 + 48); /*0x6339b7*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v1) && dword_A83D4C ) /*0x6339ca*/
    return (int)dword_A83D4C->Object_field_0x30; /*0x6339cc*/
  else
    return v2; /*0x6339d1*/
}



// ==== 0x006339E0  ToCoordPixel  this=Rect  sig=csp ====
_DWORD *__fastcall ToCoordPixel(_DWORD *a1, _DWORD *a2)
{
  char *v3; // ecx
  int v5[2]; // [esp+4h] [ebp-8h] BYREF

  Coord::To_Screen((Coord *)g_TacticalClass_Instance, a2, v5); /*0x6339f2*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x633a0d*/
  *a1 = DSurface_ViewBounds.field_0 + v5[0]; /*0x633a0f*/
  a1[1] = v3; /*0x633a11*/
  return a1; /*0x633a16*/
}



// ==== 0x00633A20  ObjectClass::method_633A20  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_633A20(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x633a24*/
  this->? = 0; /*0x633a26*/
  this->? = (void *)-1; /*0x633a29*/
  LOBYTE(this->?) = 0; /*0x633a30*/
  return &this->AbstractClass; /*0x633a33*/
}



// ==== 0x00633A40  ObjectClass::method_633A40  this=ObjectClass  sig=csp ====
int __thiscall sub_633A40(_DWORD *this, int a2)
{
  *this = a2; /*0x633a44*/
  return a2; /*0x633a46*/
}



// ==== 0x00633A50  ObjectClass::method_633A50  this=ObjectClass  sig=csp ====
int __thiscall sub_633A50(_DWORD *this, int a2)
{
  this->vtable2 = a2; /*0x633a54*/
  return a2; /*0x633a57*/
}



// ==== 0x00633A60  ObjectClass::method_633A60  this=ObjectClass  sig=csp ====
int __thiscall sub_633A60(_DWORD *this, int a2)
{
  this->vtable3 = a2; /*0x633a64*/
  return a2; /*0x633a67*/
}



// ==== 0x00633A70  ObjectClass::method_633A70  this=ObjectClass  sig=csp ====
char __thiscall sub_633A70(_BYTE *this, char a2)
{
  this->vtable4 = a2; /*0x633a74*/
  return a2; /*0x633a77*/
}



// ==== 0x00633A80  ObjectClass::ReadPointerFromECX_2  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX_2(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x633a82*/
}



// ==== 0x00633A90  ObjectClass::method_633A90  this=ObjectClass  sig=csp ====
int __thiscall sub_633A90(ObjectClass *this)
{
  return (int)this->?; /*0x633a93*/
}



// ==== 0x00633AA0  ObjectClass::method_633AA0  this=ObjectClass  sig=csp ====
int __thiscall sub_633AA0(ObjectClass *this)
{
  return (int)this->?; /*0x633aa3*/
}



// ==== 0x00633AB0  ObjectClass::method_633AB0  this=ObjectClass  sig=csp ====
// ?do_decimal_point@?$_Mpunct@D@std@@MBEDXZ
// doubtful name
char __thiscall sub_633AB0(ObjectClass *this)
{
  return (char)this->?; /*0x633ab3*/
}



// ==== 0x00633AC0  ObjectClass::ExecuteActionPlanManager_Helper  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ExecuteActionPlanManager_Helper(ObjectClass *this)
{
  LOBYTE(this->AbstractClass) = 0; /*0x633ac2*/
  this->estimatedHealth = 0; /*0x633ac5*/
  *(_DWORD *)&this->isOnMap = -1; /*0x633acc*/
  return &this->AbstractClass; /*0x633ad3*/
}



// ==== 0x00633AE0  ObjectClass::method_633AE0  this=ObjectClass  sig=csp ====
void __thiscall sub_633AE0(ObjectClass *this, const void *a2)
{
  qmemcpy(this, a2, 0x6Fu); /*0x633aed*/
}



// ==== 0x00633B00  ObjectClass::method_633B00  this=ObjectClass  sig=csp ====
int __thiscall sub_633B00(_DWORD *this, int a2)
{
  this->estimatedHealth = a2; /*0x633b04*/
  return a2; /*0x633b07*/
}



// ==== 0x00633B10  ObjectClass::method_633B10  this=ObjectClass  sig=csp ====
int __thiscall sub_633B10(_DWORD *this, int a2)
{
  this->isOnMap = a2; /*0x633b14*/
  return a2; /*0x633b17*/
}



// ==== 0x00633B20  ObjectClass::method_633B20  this=ObjectClass  sig=csp ====
void __thiscall sub_633B20(ObjectClass *this)
{
  this->estimatedHealth = 0; /*0x633b20*/
}



// ==== 0x00633B30  ObjectClass::method_633B30  this=ObjectClass  sig=csp ====
int __thiscall sub_633B30(ObjectClass *this)
{
  int result; // eax

  result = this->estimatedHealth + 1; /*0x633b33*/
  this->estimatedHealth = result; /*0x633b34*/
  return result; /*0x633b37*/
}



// ==== 0x00633B40  ObjectClass::method_633B40  this=ObjectClass  sig=csp ====
int __thiscall sub_633B40(ObjectClass *this)
{
  int result; // eax

  result = this->estimatedHealth - 1; /*0x633b43*/
  this->estimatedHealth = result; /*0x633b44*/
  return result; /*0x633b47*/
}



// ==== 0x00633B70  ObjectClass::method_633B70  this=ObjectClass  sig=csp ====
int __thiscall sub_633B70(ObjectClass *this)
{
  return this->estimatedHealth; /*0x633b73*/
}



// ==== 0x00633B80  ObjectClass::method_633B80  this=ObjectClass  sig=csp ====
int __thiscall sub_633B80(ObjectClass *this)
{
  return *(_DWORD *)&this->isOnMap; /*0x633b83*/
}



// ==== 0x00633B90  ScenarioClass::GetActionCoordsCopy  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::GetActionCoordsCopy(ScenarioClass *this, _DWORD *a2)
{
  int *ScenarioClassActionCoords; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, this); /*0x633b9b*/
  v3 = *ScenarioClassActionCoords; /*0x633ba0*/
  v4 = ScenarioClassActionCoords[1]; /*0x633ba2*/
  v5 = ScenarioClassActionCoords[2]; /*0x633ba5*/
  *a2 = v3; /*0x633bae*/
  a2[1] = v4; /*0x633bb0*/
  a2[2] = v5; /*0x633bb3*/
  return a2; /*0x633bb6*/
}



// ==== 0x00633BC0  GetScenarioClassActionCoords  this=AbstractClass  sig=csp ====
_DWORD *__fastcall ScenarioClass_GetActionCoords(_DWORD *a1, _BYTE *a2)
{
  int *v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *a2 == 4 ) /*0x633bca*/
  {
    if ( a2[18] ) /*0x633bcc*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 14); /*0x633bd6*/
      if ( v3 ) /*0x633bdd*/
      {
        v4 = *v3; /*0x633bdf*/
LABEL_11:
        v5 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v4 + 88))(v3, v7); /*0x633c1b*/
        *a1 = *v5; /*0x633c25*/
        a1[1] = v5[1]; /*0x633c2a*/
        a1[2] = v5[2]; /*0x633c30*/
        return a1; /*0x633c39*/
      }
    }
    else if ( a2[28] ) /*0x633be7*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 24); /*0x633bf1*/
      if ( v3 ) /*0x633bf8*/
      {
        v4 = *v3; /*0x633bfa*/
        goto LABEL_11; /*0x633c00*/
      }
    }
    else if ( a2[23] ) /*0x633c02*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 19); /*0x633c0c*/
      if ( v3 ) /*0x633c13*/
      {
        v4 = *v3; /*0x633c15*/
        goto LABEL_11; /*0x633c15*/
      }
    }
  }
  *a1 = -1; /*0x633c43*/
  a1[1] = -1; /*0x633c4a*/
  a1[2] = -1; /*0x633c4d*/
  return a1; /*0x633c35*/
}



// ==== 0x00633C60  ObjectClass::method_633C60  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_633C60(ObjectClass *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v3; // edx
  int v5[3]; // [esp+0h] [ebp-18h] BYREF
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v5, this); /*0x633c69*/
  v6[0] = *ScenarioClassActionCoords; /*0x633c70*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x633c82*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x633c8e*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x633c92*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x633cac*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x633cb2*/
  a2[1] = v3; /*0x633cb4*/
  return a2; /*0x633cb7*/
}



// ==== 0x00633D30  TechnoClass::ClearScriptPlanningData  this=VectorClass  sig=csp ====
void __thiscall TechnoClass::ClearScriptPlanningData(TechnoClass *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  void *occupant; // eax
  void *vtable1; // eax
  TechnoClass *v7; // [esp+Ch] [ebp-4h] BYREF

  FactoryClass::ClearObjects((FactoryClass *)this); /*0x633d35*/
  v7 = this; /*0x633d4a*/
  v2 = (*(int (__thiscall **)(char *, TechnoClass **))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x633d4e*/
         &stru_AC4B30.__pad_EC[124],
         &v7);
  if ( v2 != -1 ) /*0x633d54*/
    Array::RemoveAt((Array *)&stru_AC4B30.__pad_EC[124], v2); /*0x633d5c*/
  v3 = (*(int (__thiscall **)(Array *, TechnoClass **))(*(_DWORD *)stru_AC4B30.__pad_0 + 16))(&stru_AC4B30, &v7); /*0x633d71*/
  if ( v3 != -1 ) /*0x633d77*/
    Array::RemoveAt(&stru_AC4B30, v3); /*0x633d7f*/
  v4 = (*((int (__thiscall **)(void **, TechnoClass **))stru_AC4B30.Array_field_0xE8 + 4))( /*0x633d94*/
         &stru_AC4B30.Array_field_0xE8,
         &v7);
  if ( v4 != -1 && v4 < *(int *)&stru_AC4B30.__pad_EC[12] ) /*0x633da4*/
  {
    --*(_DWORD *)&stru_AC4B30.__pad_EC[12]; /*0x633da9*/
    for ( ; /*0x633daf*/
          v4 < *(int *)&stru_AC4B30.__pad_EC[12];
          *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC
                                                                                + 4 * v4) )
    {
      ++v4; /*0x633db7*/
    }
  }
  if ( *(TechnoClass **)&stru_AC4B30.__pad_EC[176] == v7 ) /*0x633dd7*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[176] = 0; /*0x633dd9*/
  if ( *(TechnoClass **)&stru_AC4B30.__pad_EC[28] == v7 ) /*0x633de5*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x633de7*/
  if ( *(TechnoClass **)&stru_AC4B30.__pad_70[80] == v7 ) /*0x633df3*/
    *(_DWORD *)&stru_AC4B30.__pad_70[80] = 0; /*0x633df5*/
  occupant = (void *)this->?; /*0x633dfb*/
  this->? = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( occupant && BYTE1(this->?) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(occupant); /*0x633e0f*/
    this->? = 0; /*0x633e17*/
  }
  BYTE1(this->?) = 0; /*0x633e1a*/
  this->? = 0; /*0x633e1d*/
  vtable1 = this->?; /*0x633e20*/
  this->RadioClass = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( vtable1 && BYTE1(this->?) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(vtable1); /*0x633e33*/
    this->? = 0; /*0x633e3b*/
  }
  BYTE1(this->?) = 0; /*0x633e3e*/
  this->? = 0; /*0x633e41*/
}



// ==== 0x00633E50  ObjectClass::method_633E50  this=ObjectClass  sig=csp ====
int __thiscall sub_633E50(ObjectClass *this)
{
  return this->?; /*0x633e53*/
}



// ==== 0x00633E60  ObjectClass::method_633E60  this=ObjectClass  sig=csp ====
int __thiscall sub_633E60(ObjectClass *this)
{
  return this->?; /*0x633e63*/
}



// ==== 0x00633EA0  TeamClass::FindScriptAction  this=TeamClass  sig=csp ====
_DWORD *__thiscall TeamClass::FindScriptAction(TeamClass *this, _DWORD *p_vtable0)
{
  _DWORD *Type; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  Type = (_DWORD *)BuildingClass::GetType((BuildingClass *)p_vtable0); /*0x633eae*/
  v4 = Type[1]; /*0x633eb0*/
  p_vtable0 = &this->AbstractClass; /*0x633eb7*/
  v5 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(v4 + 16))(Type + 1, &p_vtable0); /*0x633ebf*/
  if ( v5 == -1 ) /*0x633ec5*/
    return 0; /*0x633ec5*/
  v6 = Type[5]; /*0x633ec7*/
  if ( v6 == 1 ) /*0x633ecd*/
    return &this->AbstractClass; /*0x633ed4*/
  v8 = v5 - 1; /*0x633ed7*/
  if ( v8 < 0 ) /*0x633ed8*/
    v8 = v6 - 1; /*0x633eda*/
  v9 = v8; /*0x633edf*/
  if ( !v6 ) /*0x633ee1*/
    return 0; /*0x633ee1*/
  if ( v8 >= v6 ) /*0x633ee5*/
  {
    v10 = Type[37]; /*0x633ee7*/
    if ( v10 < 0 ) /*0x633eef*/
      return 0; /*0x633eef*/
    v9 = v10 + (v8 - v10) % Type[36]; /*0x633efc*/
  }
  if ( v9 >= 0 && v9 < v6 ) /*0x633f04*/
    return *(_DWORD **)(Type[2] + 4 * v9); /*0x633f0f*/
  return 0; /*0x633ecf*/
}



// ==== 0x00633F20  TeamClass::GetNextScriptAction  this=TeamClass  sig=csp ====
_DWORD *__thiscall TeamClass::GetNextScriptAction(TeamClass *this, _DWORD *p_vtable0)
{
  _DWORD *Type; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  Type = (_DWORD *)BuildingClass::GetType((BuildingClass *)p_vtable0); /*0x633f2e*/
  v4 = Type[1]; /*0x633f30*/
  p_vtable0 = &this->AbstractClass; /*0x633f37*/
  v5 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(v4 + 16))(Type + 1, &p_vtable0); /*0x633f3f*/
  if ( v5 == -1 ) /*0x633f45*/
    return 0; /*0x633f45*/
  v6 = Type[5]; /*0x633f47*/
  if ( v6 == 1 ) /*0x633f4d*/
    return &this->AbstractClass; /*0x633f54*/
  v8 = v5 + 1; /*0x633f57*/
  if ( v8 >= v6 ) /*0x633f5a*/
    v8 = 0; /*0x633f5c*/
  v9 = v8; /*0x633f60*/
  if ( !v6 ) /*0x633f62*/
    return 0; /*0x633f62*/
  if ( v8 >= v6 ) /*0x633f66*/
  {
    v10 = Type[37]; /*0x633f68*/
    if ( v10 < 0 ) /*0x633f70*/
      return 0; /*0x633f70*/
    v9 = v10 + (v8 - v10) % Type[36]; /*0x633f7d*/
  }
  if ( v9 >= 0 && v9 < v6 ) /*0x633f85*/
    return *(_DWORD **)(Type[2] + 4 * v9); /*0x633f90*/
  return 0; /*0x633f4f*/
}



// ==== 0x00633FA0  ScriptAction::CreatePlacementAction  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::CreatePlacementAction(ScriptAction *this, _DWORD *a2, const void *a3)
{
  int v4; // eax
  _DWORD *v5; // ebx
  _BYTE *v6; // eax
  int v7; // eax
  int ScriptAction_field_0x14; // ecx
  int v9; // eax
  int v10; // edx
  int Type; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx

  v4 = __2_YAPAXI_Z(0x10u); /*0x633fa7*/
  if ( v4 ) /*0x633fb1*/
  {
    *(_DWORD *)v4 = 0; /*0x633fb3*/
    *(_DWORD *)(v4 + 4) = 0; /*0x633fb9*/
    *(_DWORD *)(v4 + 8) = -1; /*0x633fc0*/
    *(_BYTE *)(v4 + 12) = 0; /*0x633fc7*/
    v5 = (_DWORD *)v4; /*0x633fcb*/
  }
  else
  {
    v5 = 0; /*0x633fcf*/
  }
  *v5 = a2; /*0x633fd7*/
  v6 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x633fd9*/
  if ( v6 ) /*0x633fe3*/
    *v6 = 0; /*0x633fe5*/
  else
    v6 = 0; /*0x633fea*/
  qmemcpy(v6, a3, 0x6Fu); /*0x633ff8*/
  v5[1] = v6; /*0x633ffd*/
  v7 = this->ScriptAction_field_0x8[0]; /*0x634000*/
  if ( this->ScriptAction_field_0x10[0] < v7 /*0x634024*/
    || (this->__pad_C[1] || !v7)
    && (ScriptAction_field_0x14 = this->ScriptAction_field_0x14, ScriptAction_field_0x14 > 0)
    && (*(unsigned __int8 (__thiscall **)(ScriptAction *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
         this,
         v7 + ScriptAction_field_0x14,
         0) )
  {
    v9 = this->ScriptAction_field_0x10[0]; /*0x63402b*/
    v10 = this->ScriptAction_field_0x4[0]; /*0x63402e*/
    this->ScriptAction_field_0x10[0] = v9 + 1; /*0x634034*/
    *(_DWORD *)(v10 + 4 * v9) = v5; /*0x634037*/
  }
  Type = BuildingClass::GetType((BuildingClass *)a2); /*0x634043*/
  v12 = *(_DWORD *)(Type + 12); /*0x634045*/
  if ( *(_DWORD *)(Type + 20) < v12 /*0x63406d*/
    || (*(_BYTE *)(Type + 17) || !v12)
    && (v13 = *(_DWORD *)(Type + 24), v13 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v12 + v13, 0) )
  {
    v14 = *(_DWORD *)(Type + 20); /*0x634074*/
    v15 = *(_DWORD *)(Type + 8); /*0x634077*/
    *(_DWORD *)(Type + 20) = v14 + 1; /*0x63407d*/
    *(_DWORD *)(v15 + 4 * v14) = this; /*0x634080*/
  }
  if ( *(_DWORD *)(Type + 140) == -1 ) /*0x63408d*/
    *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x634093*/
  return ScriptAction::PlaceObject((int)this, v5); /*0x6340a1*/
}



// ==== 0x006340B0  TeamClass::DestroyAllMembers  this=VectorClass  sig=csp ====
void __thiscall TeamClass::DestroyAllMembers(TeamClass *this, _DWORD *p_vtable0)
{
  int v3; // eax
  int uniqueId; // edx
  _DWORD ***vtable1; // edi
  _DWORD ***v6; // ecx
  _DWORD **v7; // ebp
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  void *Block; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x6340b8*/
  uniqueId = this->?; /*0x6340ba*/
  if ( uniqueId <= 0 ) /*0x6340c0*/
    goto LABEL_7; /*0x6340c0*/
  vtable1 = (_DWORD ***)this->?; /*0x6340c2*/
  v6 = vtable1; /*0x6340c9*/
  while ( **v6 != p_vtable0 ) /*0x6340d0*/
  {
    ++v3; /*0x6340d2*/
    ++v6; /*0x6340d3*/
    if ( v3 >= uniqueId ) /*0x6340d8*/
    {
      v7 = 0; /*0x6340dc*/
      goto LABEL_9; /*0x6340de*/
    }
  }
  if ( v3 == -1 ) /*0x6340e3*/
LABEL_7:
    v7 = 0; /*0x6340e7*/
  else
    v7 = vtable1[v3]; /*0x6340eb*/
LABEL_9:
  Block = v7; /*0x6340f0*/
  if ( v7 ) /*0x6340f6*/
  {
    if ( *((_BYTE *)v7 + 12) ) /*0x6340fc*/
    {
      *((_BYTE *)v7 + 12) = 0; /*0x634101*/
      v8 = *((_DWORD *)this + 42) - 1; /*0x63410a*/
      *((_DWORD *)this + 42) = v8; /*0x63410b*/
      if ( !v8 ) /*0x634111*/
        *((_DWORD *)this + 44) = -1; /*0x634113*/
    }
    v9 = v7[2]; /*0x63411d*/
    if ( v9 != (_DWORD *)-1 ) /*0x634123*/
    {
      v10 = *((_DWORD *)&this->buildingType->AbstractClass + (_DWORD)v9); /*0x634129*/
      *(_DWORD *)(v10 + 116) = -1; /*0x63412e*/
      TeamClass::Reset(this, 0); /*0x634135*/
      v11 = *(_DWORD *)(v10 + 112) - 1; /*0x63413d*/
      *(_DWORD *)(v10 + 112) = v11; /*0x63413e*/
      if ( !v11 ) /*0x634141*/
      {
        p_vtable0 = &this->AbstractClass; /*0x634145*/
        if ( this ) /*0x634149*/
        {
          if ( !LOBYTE(this->?) ) /*0x63414b*/
          {
            LOBYTE(this->?) = 1; /*0x63415a*/
            VectorClass::Append((VectorClass *)&stru_AC4B30.__pad_EC[124], &p_vtable0); /*0x63415e*/
          }
        }
      }
    }
    v7[2] = (_DWORD *)-1; /*0x634163*/
    __3_YAXPAX_Z(*((void **)Block + 1)); /*0x634172*/
    v12 = (*((int (__thiscall **)(TeamClass *, void **))this->AbstractClass + 4))(this, &Block); /*0x634183*/
    if ( v12 != -1 ) /*0x634189*/
    {
      v13 = this->?; /*0x63418b*/
      if ( v12 < v13 ) /*0x634190*/
      {
        v14 = v13 - 1; /*0x634192*/
        for ( this->? = v14; v12 < this->?; *((_DWORD *)this->? + v12 - 1) = *((_DWORD *)this->? + v12) ) /*0x634198*/
          ++v12; /*0x63419d*/
      }
    }
    __3_YAXPAX_Z(Block); /*0x6341b1*/
    if ( !this->? && this ) /*0x6341c6*/
    {
      FactoryClass::ClearObjects((FactoryClass *)this); /*0x6341ce*/
      p_vtable0 = &this->AbstractClass; /*0x6341e3*/
      v15 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x6341e7*/
              &stru_AC4B30.__pad_EC[124],
              &p_vtable0);
      if ( v15 != -1 ) /*0x6341ed*/
        Array::RemoveAt((Array *)&stru_AC4B30.__pad_EC[124], v15); /*0x6341f5*/
      Team_Destroy((ObjectClass *)&stru_AC4B30, (int)&p_vtable0); /*0x634204*/
      Team_Destroy((ObjectClass *)&stru_AC4B30.Array_field_0xE8, (int)&p_vtable0); /*0x634213*/
      if ( *(_DWORD **)&stru_AC4B30.__pad_EC[176] == p_vtable0 ) /*0x634224*/
        *(_DWORD *)&stru_AC4B30.__pad_EC[176] = 0; /*0x634226*/
      if ( *(_DWORD **)&stru_AC4B30.__pad_EC[28] == p_vtable0 ) /*0x634232*/
        *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x634234*/
      if ( *(_DWORD **)&stru_AC4B30.__pad_70[80] == p_vtable0 ) /*0x634240*/
        *(_DWORD *)&stru_AC4B30.__pad_70[80] = 0; /*0x634242*/
      this->? = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63424b*/
      VectorClass::Cleanup2((int)&this->?); /*0x634251*/
      v16 = this->?; /*0x634256*/
      this->AbstractClass = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x634259*/
      if ( v16 ) /*0x634261*/
      {
        if ( BYTE1(this->?) ) /*0x634263*/
        {
          __3_YAXPAX_Z(v16); /*0x634269*/
          this->? = 0; /*0x634271*/
        }
      }
      BYTE1(this->?) = 0; /*0x634275*/
      this->? = 0; /*0x634278*/
      __3_YAXPAX_Z(this); /*0x63427b*/
    }
  }
}



// ==== 0x00634290  Array::FindValue  this=Array  sig=csp ====
int __thiscall Array::FindValue(Array *this, int a2)
{
  void *Array_field_0x10; // esi
  int result; // eax
  int v4; // edx
  _DWORD **i; // ecx

  Array_field_0x10 = this->Array_field_0x10; /*0x634292*/
  result = -1; /*0x634295*/
  v4 = 0; /*0x634298*/
  if ( (int)Array_field_0x10 > 0 ) /*0x63429d*/
  {
    for ( i = (_DWORD **)this->Array_field_0x4; **i != a2; ++i ) /*0x63429f*/
    {
      if ( ++v4 >= (int)Array_field_0x10 ) /*0x6342b2*/
        return result; /*0x6342b2*/
    }
    return v4; /*0x6342ba*/
  }
  return result; /*0x6342b4*/
}



// ==== 0x006342D0  Function::6342D0  this=Function  sig=csp ====
int __thiscall Function::Method_6342D0(Function *this, int a2)
{
  return **(_DWORD **)(this->Function_field_0x04 + 4 * a2); /*0x6342dc*/
}



// ==== 0x006342E0  ObjectClass::Team_Helper_6342E0  this=ObjectClass  sig=csp ====
int __thiscall Team_Helper_6342E0(ObjectClass *this, int a2, int a3)
{
  _BYTE *v4; // esi

  v4 = *(_BYTE **)(*((_DWORD *)this->? + a3) + 4); /*0x6342f7*/
  qmemcpy((void *)a2, v4, 0x6Cu); /*0x6342fa*/
  v4 += 108; /*0x6342fa*/
  *(_WORD *)(a2 + 108) = *(_WORD *)v4; /*0x6342fc*/
  *(_BYTE *)(a2 + 110) = v4[2]; /*0x6342fe*/
  return a2; /*0x6342ff*/
}



// ==== 0x00634310  BuildingClass::CopyTypeDataForRender  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CopyTypeDataForRender(BuildingClass *this, int a2, int a3)
{
  int uniqueId; // edx
  int v4; // eax
  _DWORD **vtable1; // esi
  _DWORD **v6; // ecx
  _DWORD *v7; // eax
  _BYTE *v8; // esi

  uniqueId = this->?; /*0x634310*/
  v4 = 0; /*0x634314*/
  if ( uniqueId <= 0 ) /*0x63431a*/
    goto LABEL_7; /*0x63431a*/
  vtable1 = (_DWORD **)this->?; /*0x63431c*/
  v6 = vtable1; /*0x634323*/
  while ( **v6 != a3 ) /*0x634329*/
  {
    ++v4; /*0x63432b*/
    ++v6; /*0x63432c*/
    if ( v4 >= uniqueId ) /*0x634331*/
    {
      v7 = 0; /*0x634333*/
      goto LABEL_9; /*0x634335*/
    }
  }
  if ( v4 == -1 ) /*0x63433a*/
LABEL_7:
    v7 = 0; /*0x63433c*/
  else
    v7 = vtable1[v4]; /*0x634340*/
LABEL_9:
  v8 = (_BYTE *)v7[1]; /*0x634343*/
  qmemcpy((void *)a2, v8, 0x6Cu); /*0x634351*/
  v8 += 108; /*0x634351*/
  *(_WORD *)(a2 + 108) = *(_WORD *)v8; /*0x634353*/
  *(_BYTE *)(a2 + 110) = v8[2]; /*0x634355*/
  return a2; /*0x634356*/
}



// ==== 0x00634360  ObjectClass::method  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_634360(ObjectClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // esi
  int v4; // eax
  _DWORD **i; // ecx

  uniqueId = this->?; /*0x634360*/
  v3 = -1; /*0x634365*/
  v4 = 0; /*0x634368*/
  if ( uniqueId > 0 ) /*0x63436d*/
  {
    for ( i = (_DWORD **)this->?; **i != a2; ++i ) /*0x63436f*/
    {
      if ( ++v4 >= uniqueId ) /*0x634382*/
        return 0; /*0x63438f*/
    }
    v3 = v4; /*0x634392*/
  }
  return v3 != -1; /*0x634389*/
}



// ==== 0x006343B0  ObjectClass::method_6343B0  this=ObjectClass  sig=csp ====
int __thiscall sub_6343B0(ObjectClass *this)
{
  return *(_DWORD *)(**(_DWORD **)this->? + 540); /*0x6343bd*/
}



// ==== 0x006343C0  ScriptAction::GetCoords  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::GetCoords(ScriptAction *this, _DWORD *a2)
{
  int *ScenarioClassActionCoords; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x6343d1*/
                                v7,
                                *(_BYTE **)(*(_DWORD *)this->ScriptAction_field_0x4[0] + 4));
  v3 = *ScenarioClassActionCoords; /*0x6343d6*/
  v4 = ScenarioClassActionCoords[1]; /*0x6343d8*/
  v5 = ScenarioClassActionCoords[2]; /*0x6343db*/
  *a2 = v3; /*0x6343e4*/
  a2[1] = v4; /*0x6343e6*/
  a2[2] = v5; /*0x6343e9*/
  return a2; /*0x6343ec*/
}



// ==== 0x00634400  ScriptAction::GetScreenPos  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::GetScreenPos(ScriptAction *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v3; // edx
  int v5[3]; // [esp+0h] [ebp-18h] BYREF
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x63440f*/
                                v5,
                                *(_BYTE **)(*(_DWORD *)this->ScriptAction_field_0x4[0] + 4));
  v6[0] = *ScenarioClassActionCoords; /*0x634416*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x63441d*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x634434*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x634438*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x634452*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x634458*/
  a2[1] = v3; /*0x63445a*/
  return a2; /*0x63445d*/
}



// ==== 0x00634470  ObjectClass::method  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_634470(ObjectClass *this, int a2, int a3)
{
  _DWORD *ScenarioClassActionCoords; // eax
  int *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v11; // [esp+8h] [ebp-30h] BYREF
  _DWORD v12[3]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v13[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD v14[4]; // [esp+28h] [ebp-10h] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, *(_BYTE **)(*(_DWORD *)this->? + 4)); /*0x634481*/
  v12[0] = *ScenarioClassActionCoords; /*0x634488*/
  v12[1] = ScenarioClassActionCoords[1]; /*0x63448f*/
  v12[2] = ScenarioClassActionCoords[2]; /*0x63449a*/
  v4 = ToCoordPixel(&v11, v12); /*0x6344a2*/
  v5 = ComputeBounds(v14, 8, *v4, v4[1]); /*0x6344bc*/
  v6 = *v5 - 4; /*0x6344c4*/
  v7 = v5[1] - 4; /*0x6344ca*/
  v8 = v5[2] + 8; /*0x6344d0*/
  v9 = v5[3] + 8; /*0x6344d6*/
  return a2 >= v6 && a2 < v8 + v6 && a3 >= v7 && a3 < v9 + v7; /*0x6344f1*/
}



// ==== 0x00634510  ComputeBounds  this=Rect  sig=csp ====
_DWORD *__fastcall Bounds_Compute(_DWORD *a1, int a2, int a3, int a4)
{
  *a1 = a2 / -2 + a3; /*0x634532*/
  a1[1] = a2 / -2 + a4; /*0x634535*/
  a1[2] = a2; /*0x634538*/
  a1[3] = a2; /*0x63453b*/
  return a1; /*0x634534*/
}



// ==== 0x00634550  ScriptAction::GetActionCoordinates  this=ScriptAction  sig=csp ====
BOOL __thiscall ScriptAction::GetActionCoordinates(ScriptAction *this, int a2, int a3, int a4)
{
  _DWORD *ScenarioClassActionCoords; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x634560*/
                                v6,
                                *(_BYTE **)(*(_DWORD *)this->ScriptAction_field_0x4[0] + 4));
  return *ScenarioClassActionCoords == a2 && ScenarioClassActionCoords[1] == a3 && ScenarioClassActionCoords[2] == a4; /*0x63456f*/
}



// ==== 0x006345A0  ObjectClass::Render_Render_6345A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Render_Render_6345A0(ObjectClass *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v3; // ecx
  int v5[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v6[3]; // [esp+14h] [ebp-18h] BYREF
  _DWORD v7[3]; // [esp+20h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, *(_BYTE **)(*(_DWORD *)this->? + 4)); /*0x6345b2*/
  v6[0] = *ScenarioClassActionCoords; /*0x6345b9*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x6345c0*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x6345d7*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x6345db*/
  v5[0] += DSurface_ViewBounds.field_0; /*0x6345f8*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1] - 4; /*0x6345fc*/
  *a2 = v5[0] - 4; /*0x63460f*/
  a2[1] = v3; /*0x634611*/
  a2[2] = 8; /*0x634614*/
  a2[3] = 8; /*0x634617*/
  return a2; /*0x63461a*/
}



// ==== 0x006346B0  ScriptAction::FindItemByValue  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::FindItemByValue(ScriptAction *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  _DWORD **i; // ecx

  v2 = this->ScriptAction_field_0x10[0]; /*0x6346b0*/
  v3 = 0; /*0x6346b4*/
  if ( v2 <= 0 ) /*0x6346ba*/
    return 0; /*0x6346ba*/
  v4 = this->ScriptAction_field_0x4[0]; /*0x6346bc*/
  for ( i = (_DWORD **)v4; **i != a2; ++i ) /*0x6346c3*/
  {
    if ( ++v3 >= v2 ) /*0x6346d1*/
      return 0; /*0x6346d8*/
  }
  if ( v3 == -1 ) /*0x6346de*/
    return 0; /*0x6346e2*/
  else
    return *(_DWORD **)(v4 + 4 * v3); /*0x6346e8*/
}



// ==== 0x00634700  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_634700(ObjectClass *this)
{
  return (int)this->nextObject; /*0x634703*/
}



// ==== 0x00634770  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int __thiscall Render_Render_634770(ObjectClass *this)
{
  int uniqueId; // esi
  int v2; // eax
  int **i; // ecx

  uniqueId = this->?; /*0x634772*/
  v2 = 0; /*0x634775*/
  if ( uniqueId <= 0 ) /*0x634779*/
    return 0; /*0x63478f*/
  for ( i = (int **)this->?; !*((_BYTE *)*i + 12); ++i ) /*0x63477b*/
  {
    if ( ++v2 >= uniqueId ) /*0x63478d*/
      return 0; /*0x63478d*/
  }
  return **i; /*0x63478f*/
}



// ==== 0x006347A0  ObjectClass::method_6347A0  this=ObjectClass  sig=csp ====
int __thiscall sub_6347A0(ObjectClass *this, int a2)
{
  return *(_DWORD *)(this->occupant + 4 * a2); /*0x6347aa*/
}



// ==== 0x006347B0  BuildingClass::GetTypeEntry  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTypeEntry(BuildingClass *this, int a2)
{
  int uniqueId; // esi
  int v3; // eax
  _DWORD **vtable1; // edx
  int v5; // eax
  int v6; // edx
  int result; // eax

  uniqueId = this->?; /*0x6347b3*/
  v3 = 0; /*0x6347b6*/
  if ( uniqueId <= 0 ) /*0x6347bb*/
    goto LABEL_7; /*0x6347bb*/
  vtable1 = (_DWORD **)this->?; /*0x6347c4*/
  while ( **vtable1 != a2 ) /*0x6347cb*/
  {
    ++v3; /*0x6347cd*/
    ++vtable1; /*0x6347ce*/
    if ( v3 >= uniqueId ) /*0x6347d3*/
    {
      v5 = 0; /*0x6347d5*/
      goto LABEL_9; /*0x6347d7*/
    }
  }
  if ( v3 == -1 ) /*0x6347dc*/
LABEL_7:
    v5 = 0; /*0x6347de*/
  else
    v5 = *((_DWORD *)this->? + v3); /*0x6347e2*/
LABEL_9:
  v6 = *(_DWORD *)(v5 + 8); /*0x6347e5*/
  result = 0; /*0x6347e9*/
  if ( v6 != -1 ) /*0x6347f1*/
    return *(_DWORD *)(this->? + 4 * v6); /*0x6347f6*/
  return result; /*0x6347e8*/
}



// ==== 0x00634800  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_634800(ObjectClass *this)
{
  return (char *)&this->attachedBomb; /*0x634803*/
}



// ==== 0x00634810  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_634810(ObjectClass *this, _DWORD *a2, int a3)
{
  int *ScenarioClassActionCoords; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(_BYTE **)(this->occupant + 4 * a3)); /*0x634823*/
  v4 = *ScenarioClassActionCoords; /*0x634828*/
  v5 = ScenarioClassActionCoords[1]; /*0x63482a*/
  v6 = ScenarioClassActionCoords[2]; /*0x63482d*/
  *a2 = v4; /*0x634836*/
  a2[1] = v5; /*0x634838*/
  a2[2] = v6; /*0x63483b*/
  return a2; /*0x63483e*/
}



// ==== 0x00634850  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_634850(ObjectClass *this, _DWORD *a2)
{
  int *ScenarioClassActionCoords; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, &this->attachedBomb); /*0x63485c*/
  v3 = *ScenarioClassActionCoords; /*0x634861*/
  v4 = ScenarioClassActionCoords[1]; /*0x634863*/
  v5 = ScenarioClassActionCoords[2]; /*0x634866*/
  *a2 = v3; /*0x63486f*/
  a2[1] = v4; /*0x634871*/
  a2[2] = v5; /*0x634874*/
  return a2; /*0x634877*/
}



// ==== 0x00634880  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_634880(ObjectClass *this, _DWORD *a2, int a3)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v4; // edx
  int v6[2]; // [esp+0h] [ebp-20h] BYREF
  _DWORD v7[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v8[3]; // [esp+14h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(_BYTE **)(this->occupant + 4 * a3)); /*0x634891*/
  v7[0] = *ScenarioClassActionCoords; /*0x634898*/
  v7[1] = ScenarioClassActionCoords[1]; /*0x63489f*/
  v7[2] = ScenarioClassActionCoords[2]; /*0x6348b6*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v7, v6); /*0x6348ba*/
  v4 = (char *)DSurface_ViewBounds.field_4 + v6[1]; /*0x6348d4*/
  *a2 = DSurface_ViewBounds.field_0 + v6[0]; /*0x6348da*/
  a2[1] = v4; /*0x6348dc*/
  return a2; /*0x6348df*/
}



// ==== 0x006348F0  ObjectClass::method_6348F0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6348F0(ObjectClass *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v3; // edx
  int v5[2]; // [esp+0h] [ebp-20h] BYREF
  _DWORD v6[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v7[3]; // [esp+14h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, &this->attachedBomb); /*0x6348fa*/
  v6[0] = *ScenarioClassActionCoords; /*0x634901*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x634913*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x63491f*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x634923*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x63493d*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x634943*/
  a2[1] = v3; /*0x634945*/
  return a2; /*0x634948*/
}



// ==== 0x00634950  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_634950(ObjectClass *this)
{
  LOBYTE(this->?) = 1; /*0x634950*/
}



// ==== 0x00634960  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_634960(ObjectClass *this)
{
  return this->?; /*0x634963*/
}



// ==== 0x00634970  ObjectClass::Helper  this=ObjectClass  sig=csp ====
int __thiscall Helper_634970(ObjectClass *this)
{
  int uniqueId; // ebx
  int i; // edi
  int result; // eax

  FactoryClass::ClearObjects((FactoryClass *)this); /*0x634975*/
  uniqueId = this->?; /*0x63497a*/
  for ( i = 0; i < uniqueId; ++i ) /*0x634981*/
    ScriptAction::PlaceObject((int)this, *((_DWORD **)this->? + i)); /*0x63498c*/
  result = ScriptAction::FindSquadMember((ScriptAction *)this); /*0x634998*/
  LOBYTE(this->?) = 0; /*0x63499d*/
  return result; /*0x6349a1*/
}



// ==== 0x006349B0  ScriptAction::FindSquadMember  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::FindSquadMember(ScriptAction *this)
{
  int v2; // edi
  BuildingClass *v3; // ebx
  int Type; // esi
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  Array *v8; // esi
  int Value; // eax
  int v10; // eax
  _BYTE *v11; // esi
  int result; // eax
  int v13; // ebx
  _BYTE *v14; // esi
  int *ScenarioClassActionCoords; // eax
  int v16; // esi
  int v17; // edi
  int *v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // [esp+10h] [ebp-110h]
  int v22; // [esp+10h] [ebp-110h]
  int v23; // [esp+14h] [ebp-10Ch]
  int v24[3]; // [esp+18h] [ebp-108h] BYREF
  int v25; // [esp+24h] [ebp-FCh]
  int v26[3]; // [esp+28h] [ebp-F8h] BYREF
  int v27[3]; // [esp+34h] [ebp-ECh] BYREF
  _BYTE v28[112]; // [esp+40h] [ebp-E0h] BYREF
  _BYTE v29[108]; // [esp+B0h] [ebp-70h] BYREF
  __int16 v30; // [esp+11Ch] [ebp-4h]
  char v31; // [esp+11Eh] [ebp-2h]

  v23 = 0; /*0x6349bc*/
  v21 = this->ScriptAction_field_0x10[0]; /*0x6349c9*/
  if ( v21 > 0 ) /*0x6349cd*/
  {
    do /*0x634a64*/
    {
      v2 = *(_DWORD *)(this->ScriptAction_field_0x4[0] + 4 * v23); /*0x6349da*/
      v3 = *(BuildingClass **)v2; /*0x6349dd*/
      Type = BuildingClass::GetType(*(BuildingClass **)v2); /*0x6349e6*/
      v24[0] = (int)this; /*0x6349ed*/
      if ( (*(int (__thiscall **)(int, int *))(*(_DWORD *)(Type + 4) + 16))(Type + 4, v24) == *(_DWORD *)(Type + 148) ) /*0x634a00*/
      {
        *(_BYTE *)(v2 + 12) = 1; /*0x634a02*/
        v5 = (char *)this->ScriptAction_field_0xA8 + 1; /*0x634a10*/
        this->ScriptAction_field_0xA8 = v5; /*0x634a15*/
        if ( v5 == (char *)1 ) /*0x634a18*/
        {
          v6 = BuildingClass::GetType(v3); /*0x634a1c*/
          v7 = *(_DWORD *)(v6 + 20) - 1; /*0x634a24*/
          if ( v7 >= 0 ) /*0x634a25*/
            v8 = *(Array **)(*(_DWORD *)(v6 + 8) + 4 * v7); /*0x634a2e*/
          else
            v8 = 0; /*0x634a27*/
          Value = Array::FindValue(v8, (int)v3); /*0x634a34*/
          if ( Value == -1 ) /*0x634a3c*/
            v10 = 0; /*0x634a3e*/
          else
            v10 = *((_DWORD *)v8->Array_field_0x4 + Value); /*0x634a45*/
          v11 = *(_BYTE **)(v10 + 4); /*0x634a48*/
          qmemcpy(&this->__pad_34[4], v11, 0x6Cu); /*0x634a50*/
          v11 += 108; /*0x634a50*/
          *(_WORD *)&this->__pad_9C[8] = *(_WORD *)v11; /*0x634a52*/
          this->__pad_9C[10] = v11[2]; /*0x634a54*/
        }
      }
      ++v23; /*0x634a60*/
    }
    while ( v23 < v21 ); /*0x634a64*/
  }
  this->ScriptAction_field_0xB0 = (void *)-1; /*0x634a6a*/
  result = (int)this->ScriptAction_field_0xA8; /*0x634a74*/
  if ( result ) /*0x634a7c*/
  {
    result = (int)this->ScriptAction_field_0x30; /*0x634a8e*/
    qmemcpy(v28, &this->__pad_34[4], 0x6Eu); /*0x634a91*/
    v13 = 0; /*0x634a95*/
    v22 = result; /*0x634a97*/
    v28[110] = this->__pad_9C[10]; /*0x634a9d*/
    if ( result > 0 ) /*0x634a9e*/
    {
      while ( 1 ) /*0x634aaf*/
      {
        v14 = *(_BYTE **)(this->ScriptAction_field_0x24 + 4 * v13); /*0x634aaf*/
        qmemcpy(v29, v14, sizeof(v29)); /*0x634ab6*/
        v14 += 108; /*0x634ab6*/
        v30 = *(_WORD *)v14; /*0x634ab8*/
        v31 = v14[2]; /*0x634abe*/
        ScenarioClassActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634abf*/
        v16 = *ScenarioClassActionCoords; /*0x634ac4*/
        v17 = ScenarioClassActionCoords[1]; /*0x634ad1*/
        v25 = ScenarioClassActionCoords[2]; /*0x634ad7*/
        v18 = GetScenarioClassActionCoords(v26, v29); /*0x634ae0*/
        result = *v18; /*0x634ae2*/
        v19 = v18[1]; /*0x634ae6*/
        v20 = v18[2]; /*0x634ae9*/
        if ( v16 == result && v17 == v19 && v25 == v20 ) /*0x634af6*/
          break; /*0x634af6*/
        result = v22; /*0x634af8*/
        if ( ++v13 >= v22 ) /*0x634aff*/
          return result; /*0x634aff*/
      }
      this->ScriptAction_field_0xB0 = (void *)v13; /*0x634b03*/
    }
  }
  return result; /*0x634b09*/
}



// ==== 0x00634B20  ObjectClass::Team_Get  this=ObjectClass  sig=csp ====
void __thiscall Team_Get(ObjectClass *this)
{
  int v2; // ebp
  _BYTE *v3; // esi
  int uniqueId; // edx
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // ebp
  _BYTE *v10; // eax
  int v11; // esi
  int i; // [esp+10h] [ebp-90h]
  ObjectClass *nextObject; // [esp+14h] [ebp-8Ch]
  int v14; // [esp+18h] [ebp-88h]
  int j; // [esp+18h] [ebp-88h]
  _DWORD v16[2]; // [esp+1Ch] [ebp-84h] BYREF
  _DWORD v17[3]; // [esp+24h] [ebp-7Ch] BYREF
  _WORD v18[56]; // [esp+30h] [ebp-70h] BYREF

  v2 = 0; /*0x634b2a*/
  nextObject = this->nextObject; /*0x634b33*/
  if ( (int)nextObject > 0 ) /*0x634b37*/
  {
    do /*0x634bf7*/
    {
      v3 = *(_BYTE **)(this->occupant + 4 * v2); /*0x634b48*/
      qmemcpy(v18, v3, 0x6Cu); /*0x634b57*/
      v3 += 108; /*0x634b57*/
      v18[54] = *(_WORD *)v3; /*0x634b59*/
      LOBYTE(v18[55]) = v3[2]; /*0x634b5f*/
      GetScenarioClassActionCoords(v17, v18); /*0x634b60*/
      Debug::Log(); /*0x634b7d*/
      uniqueId = this->?; /*0x634b82*/
      v5 = 0; /*0x634b88*/
      v14 = uniqueId; /*0x634b8a*/
      for ( i = 0; v5 < uniqueId; i = v5 ) /*0x634b94*/
      {
        v6 = (_DWORD *)*((_DWORD *)this->? + v5); /*0x634b99*/
        if ( v6[2] == v2 ) /*0x634b9f*/
        {
          v7 = *v6; /*0x634ba1*/
          (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 136))(*v6); /*0x634ba7*/
          v16[1] = *(_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 440))(v7, v16); /*0x634bc3*/
          Debug::Log(); /*0x634bd7*/
          v5 = i; /*0x634bdc*/
          uniqueId = v14; /*0x634be0*/
        }
        ++v5; /*0x634be7*/
      }
      ++v2; /*0x634bf4*/
    }
    while ( v2 < (int)nextObject ); /*0x634bf7*/
  }
  if ( (int)this->lineTrailer > 0 ) /*0x634c05*/
  {
    qmemcpy(v18, &this->attachedBomb, 0x6Fu); /*0x634c1b*/
    GetScenarioClassActionCoords(v17, v18); /*0x634c24*/
    Debug::Log(); /*0x634c43*/
    v8 = this->?; /*0x634c48*/
    v9 = 0; /*0x634c4e*/
    for ( j = v8; v9 < v8; ++v9 ) /*0x634c56*/
    {
      v10 = (_BYTE *)*((_DWORD *)this->? + v9); /*0x634c5b*/
      if ( v10[12] ) /*0x634c5e*/
      {
        v11 = *(_DWORD *)v10; /*0x634c65*/
        (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v10 + 136))(*(_DWORD *)v10); /*0x634c6b*/
        (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 440))(v11, v16); /*0x634c7f*/
        Debug::Log(); /*0x634c9b*/
        v8 = j; /*0x634ca0*/
      }
    }
  }
}



// ==== 0x00634CC0  ScriptAction::FindBuildingMatch  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::FindBuildingMatch(ScriptAction *this, _DWORD *a2)
{
  int Type; // esi
  int v4; // eax
  int v5; // eax
  ScriptAction *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  ScriptAction *v11; // ecx
  int Value; // eax
  int v13; // eax
  _BYTE *v14; // esi
  int v15; // edi
  int *ScenarioClassActionCoords; // eax
  int v17; // ebp
  int v18; // ebx
  _DWORD *v19; // esi
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  void *ScriptAction_field_0x30; // [esp+10h] [ebp-100h] BYREF
  ScriptAction *v24; // [esp+14h] [ebp-FCh]
  int v25; // [esp+1Ch] [ebp-F4h]
  int i; // [esp+20h] [ebp-F0h]
  _DWORD v27[3]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v28[108]; // [esp+30h] [ebp-E0h] BYREF
  __int16 v29; // [esp+9Ch] [ebp-74h]
  char v30; // [esp+9Eh] [ebp-72h]
  _BYTE v31[108]; // [esp+A0h] [ebp-70h] BYREF
  __int16 v32; // [esp+10Ch] [ebp-4h]
  char v33; // [esp+10Eh] [ebp-2h]

  v24 = this; /*0x634cd5*/
  Type = BuildingClass::GetType((BuildingClass *)a2); /*0x634cde*/
  v4 = *(_DWORD *)(Type + 4); /*0x634ce0*/
  ScriptAction_field_0x30 = this; /*0x634ce7*/
  v5 = (*(int (__thiscall **)(int, void **))(v4 + 16))(Type + 4, &ScriptAction_field_0x30); /*0x634cef*/
  if ( v5 == -1 ) /*0x634cf5*/
  {
    v6 = 0; /*0x634cf7*/
  }
  else
  {
    v7 = *(_DWORD *)(Type + 20); /*0x634cfb*/
    if ( v7 == 1 ) /*0x634d01*/
    {
      v6 = this; /*0x634d03*/
    }
    else
    {
      v8 = v5 - 1; /*0x634d07*/
      if ( v8 < 0 ) /*0x634d08*/
        v8 = v7 - 1; /*0x634d0a*/
      v6 = (ScriptAction *)ArrayClass::GetAt_Wrap((ArrayClass *)Type, v8); /*0x634d15*/
    }
  }
  v9 = BuildingClass::GetType((BuildingClass *)a2); /*0x634d19*/
  v10 = *(_DWORD *)(v9 + 20) - 1; /*0x634d21*/
  if ( v10 >= 0 ) /*0x634d22*/
    v11 = *(ScriptAction **)(*(_DWORD *)(v9 + 8) + 4 * v10); /*0x634d2b*/
  else
    v11 = 0; /*0x634d24*/
  if ( v6 != v11 )
  {
    Value = Array::FindValue((Array *)v6, (int)a2); /*0x634d39*/
    v13 = Value == -1 ? 0 : *(_DWORD *)(v6->ScriptAction_field_0x4[0] + 4 * Value);
    v14 = *(_BYTE **)(v13 + 4); /*0x634d4d*/
    qmemcpy(v28, v14, sizeof(v28)); /*0x634d59*/
    v14 += 108; /*0x634d59*/
    v29 = *(_WORD *)v14; /*0x634d5b*/
    v30 = v14[2]; /*0x634d5d*/
    ScriptAction_field_0x30 = this->ScriptAction_field_0x30; /*0x634d63*/
    v15 = (int)ScriptAction_field_0x30; /*0x634d5e*/
    if ( ScriptAction_field_0x30 ) /*0x634d67*/
    {
      ScenarioClassActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634d75*/
      v17 = *ScenarioClassActionCoords; /*0x634d7a*/
      v18 = 0; /*0x634d7c*/
      v25 = ScenarioClassActionCoords[1]; /*0x634d83*/
      for ( i = ScenarioClassActionCoords[2]; v18 < v15; ++v18 ) /*0x634d8e*/
      {
        v19 = *(_DWORD **)(v24->ScriptAction_field_0x24 + 4 * v18); /*0x634d97*/
        if ( v19[28] ) /*0x634d9a*/
        {
          qmemcpy(v31, v19, sizeof(v31)); /*0x634dad*/
          v20 = v19 + 27; /*0x634dad*/
          v32 = *(_WORD *)v20; /*0x634daf*/
          v33 = *((_BYTE *)v20 + 2); /*0x634dbc*/
          v21 = GetScenarioClassActionCoords(v27, v31); /*0x634dbd*/
          if ( v17 == *v21 && v25 == v21[1] && i == v21[2] ) /*0x634dda*/
            return v18; /*0x634df3*/
          v15 = (int)ScriptAction_field_0x30; /*0x634ddc*/
        }
      }
    }
  }
  return -1; /*0x634de7*/
}



// ==== 0x00634E10  ScriptAction::PlaceObject  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction_PlaceObject(int this, _DWORD *a2)
{
  _DWORD *v3; // edi
  int result; // eax
  int Type; // esi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  _BYTE *v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // ebp
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // ebp
  int v24; // ecx
  _BYTE *v25; // esi
  _DWORD *ActionCoords; // eax
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // [esp+10h] [ebp-118h] BYREF
  int v30; // [esp+14h] [ebp-114h]
  _DWORD v31[3]; // [esp+18h] [ebp-110h] BYREF
  _DWORD v32[3]; // [esp+24h] [ebp-104h] BYREF
  int v33[3]; // [esp+30h] [ebp-F8h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-ECh] BYREF
  _BYTE v35[108]; // [esp+48h] [ebp-E0h] BYREF
  __int16 v36; // [esp+B4h] [ebp-74h]
  char v37; // [esp+B6h] [ebp-72h]
  _BYTE v38[108]; // [esp+B8h] [ebp-70h] BYREF
  __int16 v39; // [esp+124h] [ebp-4h]
  char v40; // [esp+126h] [ebp-2h]

  v3 = (_DWORD *)*a2; /*0x634e23*/
  result = ScriptAction::FindBuildingMatch(*a2); /*0x634e27*/
  if ( result == -1 ) /*0x634e31*/
  {
    Type = BuildingClass::GetType(v3); /*0x634e3e*/
    v6 = *(_DWORD *)(Type + 4); /*0x634e40*/
    v29 = this; /*0x634e47*/
    v7 = (*(int (__thiscall **)(int, int *))(v6 + 16))(Type + 4, &v29); /*0x634e4f*/
    if ( v7 == -1 ) /*0x634e55*/
    {
      v8 = 0; /*0x634e57*/
    }
    else
    {
      v9 = *(_DWORD *)(Type + 20); /*0x634e5b*/
      if ( v9 == 1 ) /*0x634e61*/
      {
        v8 = this; /*0x634e63*/
      }
      else
      {
        v10 = v7 - 1; /*0x634e67*/
        if ( v10 < 0 ) /*0x634e68*/
          v10 = v9 - 1; /*0x634e6a*/
        v8 = ArrayClass::GetAt_Wrap(v10); /*0x634e75*/
      }
    }
    v11 = BuildingClass::GetType(v3); /*0x634e79*/
    v12 = *(_DWORD *)(v11 + 20) - 1; /*0x634e81*/
    if ( v12 >= 0 ) /*0x634e82*/
      v13 = *(_DWORD *)(*(_DWORD *)(v11 + 8) + 4 * v12); /*0x634e8b*/
    else
      v13 = 0; /*0x634e84*/
    if ( v8 == v13 ) /*0x634e90*/
    {
      a2[2] = -1; /*0x634e96*/
      return -1; /*0x634e92*/
    }
    else
    {
      v14 = *(_BYTE **)(ScriptAction::FindItemByValue(v3) + 4); /*0x634ead*/
      qmemcpy(v35, v14, sizeof(v35)); /*0x634ebb*/
      v14 += 108; /*0x634ebb*/
      v36 = *(_WORD *)v14; /*0x634ebd*/
      v37 = v14[2]; /*0x634ebf*/
      v15 = __2_YAPAXI_Z(0x78u); /*0x634ec0*/
      v16 = 0; /*0x634ec5*/
      if ( v15 ) /*0x634ecc*/
      {
        v15[28] = 0; /*0x634ece*/
        *(_BYTE *)v15 = 0; /*0x634ed1*/
        v15[29] = -1; /*0x634ed4*/
        v16 = v15; /*0x634edb*/
      }
      v17 = v16[28]; /*0x634ee8*/
      qmemcpy(v16, v35, 0x6Cu); /*0x634eeb*/
      *((_WORD *)v16 + 54) = v36; /*0x634eed*/
      *((_BYTE *)v16 + 110) = v37; /*0x634eef*/
      v16[28] = v17 + 1; /*0x634ef4*/
      v18 = *(_DWORD *)(this + 40); /*0x634ef7*/
      if ( *(_DWORD *)(this + 48) < v18 /*0x634f1c*/
        || (*(_BYTE *)(this + 45) || !v18)
        && (v19 = *(_DWORD *)(this + 52), v19 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 32) + 8))(this + 32, v18 + v19, 0) )
      {
        v20 = *(_DWORD *)(this + 48); /*0x634f23*/
        v21 = *(_DWORD *)(this + 36); /*0x634f26*/
        *(_DWORD *)(this + 48) = v20 + 1; /*0x634f2c*/
        *(_DWORD *)(v21 + 4 * v20) = v16; /*0x634f2f*/
      }
      v22 = *(_DWORD *)(this + 168); /*0x634f35*/
      result = *(_DWORD *)(this + 48) - 1; /*0x634f3b*/
      v29 = result; /*0x634f3e*/
      if ( v22 > 0 && *(_DWORD *)(this + 176) == -1 ) /*0x634f53*/
      {
        *(_DWORD *)(this + 176) = -1; /*0x634f59*/
        if ( *(_DWORD *)(this + 168) ) /*0x634f5f*/
        {
          v23 = 0; /*0x634f79*/
          qmemcpy(v35, (const void *)(this + 56), sizeof(v35)); /*0x634f7b*/
          v24 = *(_DWORD *)(this + 48); /*0x634f7d*/
          v36 = *(_WORD *)(this + 164); /*0x634f80*/
          v37 = *(_BYTE *)(this + 166); /*0x634f84*/
          v30 = v24; /*0x634f85*/
          if ( v24 > 0 ) /*0x634f89*/
          {
            while ( 1 ) /*0x634fa2*/
            {
              v25 = *(_BYTE **)(*(_DWORD *)(this + 36) + 4 * v23); /*0x634fa2*/
              qmemcpy(v38, v25, sizeof(v38)); /*0x634fa5*/
              v25 += 108; /*0x634fa5*/
              v39 = *(_WORD *)v25; /*0x634fa7*/
              v40 = v25[2]; /*0x634fad*/
              ActionCoords = GetScenarioClassActionCoords(v34, v35); /*0x634fae*/
              v31[0] = *ActionCoords; /*0x634fb5*/
              v31[1] = ActionCoords[1]; /*0x634fc0*/
              v31[2] = ActionCoords[2]; /*0x634fce*/
              v27 = GetScenarioClassActionCoords(v33, v38); /*0x634fd2*/
              v32[0] = *v27; /*0x634fd9*/
              v32[1] = v27[1]; /*0x634fe5*/
              v32[2] = v27[2]; /*0x634ff0*/
              if ( Coord3D::Equals(v31, v32) ) /*0x634ff4*/
                break; /*0x634ff4*/
              if ( ++v23 >= v30 ) /*0x635004*/
                goto LABEL_30; /*0x635004*/
            }
            *(_DWORD *)(this + 176) = v23; /*0x635008*/
LABEL_30:
            result = v29; /*0x63500e*/
          }
        }
      }
      *(_DWORD *)(this + 180) = -1; /*0x63501b*/
      a2[2] = result; /*0x635026*/
    }
  }
  else
  {
    v28 = *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * result); /*0x635038*/
    *(_DWORD *)(v28 + 116) = -1; /*0x63503b*/
    *(_DWORD *)(this + 180) = -1; /*0x63503e*/
    ++*(_DWORD *)(v28 + 112); /*0x635048*/
    a2[2] = result; /*0x63504b*/
  }
  return result; /*0x634e95*/
}



// ==== 0x00635060  FactoryClass::FinishProduction  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::FinishProduction(int *this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // ecx

  if ( *(_BYTE *)(a2 + 12) ) /*0x63506c*/
  {
    *(_BYTE *)(a2 + 12) = 0; /*0x635073*/
    v3 = *(this + 42) - 1; /*0x63507d*/
    *(this + 42) = v3; /*0x63507e*/
    if ( !v3 ) /*0x635084*/
      this->q02C = -1; /*0x635086*/
  }
  result = *(_DWORD *)(a2 + 8); /*0x63508c*/
  if ( result != -1 ) /*0x635091*/
  {
    result = *(_DWORD *)(this->production + 4 * result); /*0x635096*/
    *(_DWORD *)(result + 116) = -1; /*0x635099*/
    this->u32_2D = -1; /*0x63509c*/
    v5 = *(_DWORD *)(result + 112) - 1; /*0x6350a5*/
    *(_DWORD *)(result + 112) = v5; /*0x6350a6*/
    if ( !v5 ) /*0x6350a9*/
    {
      if ( this ) /*0x6350ad*/
      {
        LOBYTE(result) = this->referenceCount; /*0x6350af*/
        if ( !(_BYTE)result ) /*0x6350b4*/
        {
          this->referenceCount = 1; /*0x6350b6*/
          result = dword_AC4CA0; /*0x6350ba*/
          if ( dword_AC4CA8 < dword_AC4CA0 /*0x6350f4*/
            || (byte_AC4CA5 || !dword_AC4CA0)
            && dword_AC4CAC > 0
            && (result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(dword_AC4C98 + 8))(
                           &dword_AC4C98,
                           dword_AC4CA0 + dword_AC4CAC,
                           0),
                (_BYTE)result) )
          {
            result = dword_AC4CA8++; /*0x6350fc*/
            *((_DWORD *)dword_AC4C9C + result) = this; /*0x63510b*/
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 8) = -1; /*0x63510e*/
  return result; /*0x635111*/
}



// ==== 0x00635120  FactoryClass::ClearObjects  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::ClearObjects(FactoryClass *this)
{
  int v2; // ebp
  int i; // edi
  int uniqueId; // edx
  int result; // eax
  int v6; // ecx

  v2 = this->queuedObjects[0]; /*0x635128*/
  for ( i = 0; i < v2; ++i ) /*0x63512f*/
    __3_YAXPAX_Z(*(void **)(this->production[0] + 4 * i)); /*0x635138*/
  (*((void (__thiscall **)(void **))this->? + 3))(&this->?); /*0x63514b*/
  uniqueId = this->?; /*0x63514e*/
  result = 0; /*0x635151*/
  if ( uniqueId <= 0 ) /*0x635155*/
  {
    *((_DWORD *)this + 42) = 0; /*0x63517d*/
    this->q02C = -1; /*0x635183*/
  }
  else
  {
    do /*0x63516a*/
    {
      v6 = *((_DWORD *)this->? + result++); /*0x635160*/
      *(_DWORD *)(v6 + 8) = -1; /*0x635164*/
      *(_BYTE *)(v6 + 12) = 0; /*0x635167*/
    }
    while ( result < uniqueId ); /*0x63516a*/
    *((_DWORD *)this + 42) = 0; /*0x63516c*/
    this->q02C = -1; /*0x635172*/
  }
  return result; /*0x635178*/
}



// ==== 0x006351E0  ScriptAction::DecrementRefCount  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::DecrementRefCount(ScriptAction *this, int a2)
{
  int result; // eax

  *(_BYTE *)(a2 + 12) = 0; /*0x6351e4*/
  result = (int)this->ScriptAction_field_0xA8 - 1; /*0x6351ee*/
  this->ScriptAction_field_0xA8 = (void *)result; /*0x6351ef*/
  if ( !result ) /*0x6351f5*/
    this->ScriptAction_field_0xB0 = (void *)-1; /*0x6351f7*/
  return result; /*0x635201*/
}



// ==== 0x00635210  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_635210(ObjectClass *this)
{
  int result; // eax
  int v3; // ebp
  _BYTE *v4; // esi
  int *ScenarioClassActionCoords; // eax
  int v6; // esi
  int v7; // edi
  int *v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // [esp+10h] [ebp-108h]
  int v12; // [esp+1Ch] [ebp-FCh]
  int v13[3]; // [esp+20h] [ebp-F8h] BYREF
  int v14[3]; // [esp+2Ch] [ebp-ECh] BYREF
  _BYTE v15[112]; // [esp+38h] [ebp-E0h] BYREF
  _BYTE v16[108]; // [esp+A8h] [ebp-70h] BYREF
  __int16 v17; // [esp+114h] [ebp-4h]
  char v18; // [esp+116h] [ebp-2h]

  this->fallRate = -1; /*0x63521b*/
  result = (int)this->lineTrailer; /*0x635225*/
  if ( result ) /*0x63522e*/
  {
    result = (int)this->nextObject; /*0x635240*/
    qmemcpy(v15, &this->attachedBomb, 0x6Eu); /*0x635243*/
    v3 = 0; /*0x635247*/
    v11 = result; /*0x635249*/
    v15[110] = BYTE2(this->location[2]); /*0x63524f*/
    if ( result > 0 ) /*0x635250*/
    {
      while ( 1 ) /*0x635265*/
      {
        v4 = *(_BYTE **)(this->occupant + 4 * v3); /*0x635265*/
        qmemcpy(v16, v4, sizeof(v16)); /*0x635268*/
        v4 += 108; /*0x635268*/
        v17 = *(_WORD *)v4; /*0x63526a*/
        v18 = v4[2]; /*0x635270*/
        ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, v15); /*0x635271*/
        v6 = *ScenarioClassActionCoords; /*0x635276*/
        v7 = ScenarioClassActionCoords[1]; /*0x63527f*/
        v12 = ScenarioClassActionCoords[2]; /*0x635285*/
        v8 = GetScenarioClassActionCoords(v14, v16); /*0x635292*/
        result = *v8; /*0x635294*/
        v9 = v8[1]; /*0x635298*/
        v10 = v8[2]; /*0x63529b*/
        if ( v6 == result && v7 == v9 && v12 == v10 ) /*0x6352a8*/
          break; /*0x6352a8*/
        result = v11; /*0x6352aa*/
        if ( ++v3 >= v11 ) /*0x6352b1*/
          return result; /*0x6352b1*/
      }
      this->fallRate = v3; /*0x6352b5*/
    }
  }
  return result; /*0x6352bb*/
}



// ==== 0x006352D0  ObjectClass::method_6352D0  this=ObjectClass  sig=csp ====
char __thiscall sub_6352D0(ObjectClass *this)
{
  int v2; // esi
  int uniqueId; // ebx
  _BYTE *v4; // ecx
  char result; // al

  v2 = 0; /*0x6352d5*/
  uniqueId = this->?; /*0x6352d7*/
  if ( uniqueId > 0 ) /*0x6352dc*/
  {
    do /*0x6352fb*/
    {
      v4 = (_BYTE *)**((_DWORD **)this->? + v2); /*0x6352e4*/
      result = v4[131]; /*0x6352e6*/
      if ( !result ) /*0x6352ee*/
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 332))(v4); /*0x6352f2*/
      ++v2; /*0x6352f8*/
    }
    while ( v2 < uniqueId ); /*0x6352fb*/
  }
  return result; /*0x6352fd*/
}



// ==== 0x00635310  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_635310(ObjectClass *this)
{
  int v2; // esi
  int uniqueId; // ebx
  _BYTE *v4; // ecx
  char result; // al

  v2 = 0; /*0x635315*/
  uniqueId = this->?; /*0x635317*/
  if ( uniqueId > 0 ) /*0x63531c*/
  {
    do /*0x63533b*/
    {
      v4 = (_BYTE *)**((_DWORD **)this->? + v2); /*0x635324*/
      result = v4[131]; /*0x635326*/
      if ( result ) /*0x63532e*/
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 336))(v4); /*0x635332*/
      ++v2; /*0x635338*/
    }
    while ( v2 < uniqueId ); /*0x63533b*/
  }
  return result; /*0x63533d*/
}



// ==== 0x00635350  ScenarioClass::RenderAction  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::RenderAction(ScenarioClass *this, int a2)
{
  int *Viewport; // eax
  int v4; // edx
  int v5; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int result; // eax
  int v10; // [esp+Ch] [ebp-44h] BYREF
  _DWORD v11[3]; // [esp+14h] [ebp-3Ch] BYREF
  int v12[4]; // [esp+20h] [ebp-30h] BYREF
  int v13; // [esp+30h] [ebp-20h] BYREF
  int v14; // [esp+34h] [ebp-1Ch]
  int v15; // [esp+38h] [ebp-18h]
  int v16; // [esp+3Ch] [ebp-14h]
  int v17; // [esp+40h] [ebp-10h] BYREF
  int v18; // [esp+44h] [ebp-Ch]
  int v19; // [esp+48h] [ebp-8h]
  int v20; // [esp+4Ch] [ebp-4h]

  Viewport = Display::GetViewport(v12); /*0x63535c*/
  v17 = *Viewport; /*0x635363*/
  v18 = Viewport[1]; /*0x63536a*/
  v19 = Viewport[2]; /*0x635371*/
  v4 = Viewport[3]; /*0x635375*/
  v5 = this->nextScenario[1]; /*0x635378*/
  v20 = v4; /*0x63537b*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v12, *(_BYTE **)(*(_DWORD *)v5 + 4)); /*0x635388*/
  v11[0] = *ScenarioClassActionCoords; /*0x63538f*/
  v11[1] = ScenarioClassActionCoords[1]; /*0x635396*/
  v11[2] = ScenarioClassActionCoords[2]; /*0x6353a1*/
  v7 = ToCoordPixel(&v10, v11); /*0x6353a9*/
  v8 = v7[1]; /*0x6353bc*/
  v13 = *v7 - 4; /*0x6353bf*/
  v14 = v8 - 4; /*0x6353cb*/
  v15 = 8; /*0x6353da*/
  v16 = 8; /*0x6353de*/
  (*(void (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x6353e9*/
    DSurface_Composite,
    &v17,
    &v13,
    a2);
  result = v13; /*0x6353ec*/
  if ( v17 < v13 + v15 && v18 < v14 + v16 && v17 + v19 > v13 ) /*0x63541a*/
  {
    result = v20; /*0x63541c*/
    if ( v20 + v18 > v14 ) /*0x635424*/
    {
      result = *(_DWORD *)&stru_AC4B30.__pad_EC[4]; /*0x635426*/
      if ( *(int *)&stru_AC4B30.__pad_EC[12] < *(int *)&stru_AC4B30.__pad_EC[4] /*0x635462*/
        || (stru_AC4B30.__pad_EC[9] || !*(_DWORD *)&stru_AC4B30.__pad_EC[4])
        && *(int *)&stru_AC4B30.__pad_EC[16] > 0
        && (result = (*((int (__thiscall **)(void **, int, _DWORD))stru_AC4B30.Array_field_0xE8 + 2))(
                       &stru_AC4B30.Array_field_0xE8,
                       *(_DWORD *)&stru_AC4B30.__pad_EC[16] + *(_DWORD *)&stru_AC4B30.__pad_EC[4],
                       0),
            (_BYTE)result) )
      {
        result = (*(_DWORD *)&stru_AC4B30.__pad_EC[12])++; /*0x63546a*/
        *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC + 4 * result) = this; /*0x635479*/
      }
    }
  }
  return result; /*0x63547c*/
}



// ==== 0x00635490  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int __thiscall Render_Render_635490(ObjectClass *this, int a2)
{
  int *Viewport; // eax
  int v4; // edx
  void *vtable1; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  int v8[2]; // [esp+4h] [ebp-44h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-3Ch] BYREF
  int v10[4]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v11[4]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v12[4]; // [esp+38h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v10); /*0x63549a*/
  v12[0] = *Viewport; /*0x6354a1*/
  v12[1] = Viewport[1]; /*0x6354a8*/
  v12[2] = Viewport[2]; /*0x6354af*/
  v4 = Viewport[3]; /*0x6354b3*/
  vtable1 = this->?; /*0x6354b6*/
  v12[3] = v4; /*0x6354b9*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(_BYTE **)(*(_DWORD *)vtable1 + 4)); /*0x6354c6*/
  v9[0] = *ScenarioClassActionCoords; /*0x6354cd*/
  v9[1] = ScenarioClassActionCoords[1]; /*0x6354d4*/
  v9[2] = ScenarioClassActionCoords[2]; /*0x6354eb*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, v8); /*0x6354ef*/
  v8[0] += DSurface_ViewBounds.field_0; /*0x63550a*/
  v11[0] = v8[0] - 4 + 1; /*0x635520*/
  v11[1] = (char *)DSurface_ViewBounds.field_4 + v8[1] - 3; /*0x63552c*/
  v11[2] = 6; /*0x635541*/
  v11[3] = 6; /*0x635545*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x635553*/
           DSurface_Composite,
           v12,
           v11,
           a2);
}



// ==== 0x00635560  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_635560(ObjectClass *this, int a2)
{
  int *Viewport; // eax
  int v4; // edx
  void *vtable1; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  int *v7; // eax
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // esi
  int result; // eax
  int v14; // [esp+10h] [ebp-54h] BYREF
  _DWORD v15[3]; // [esp+18h] [ebp-4Ch] BYREF
  int v16[4]; // [esp+24h] [ebp-40h] BYREF
  int v17; // [esp+34h] [ebp-30h] BYREF
  int v18; // [esp+38h] [ebp-2Ch]
  int v19; // [esp+3Ch] [ebp-28h]
  int v20; // [esp+40h] [ebp-24h]
  _DWORD v21[4]; // [esp+44h] [ebp-20h] BYREF
  _DWORD v22[4]; // [esp+54h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v16); /*0x63556d*/
  v21[0] = *Viewport; /*0x635574*/
  v21[1] = Viewport[1]; /*0x63557b*/
  v21[2] = Viewport[2]; /*0x635582*/
  v4 = Viewport[3]; /*0x635586*/
  vtable1 = this->?; /*0x635589*/
  v21[3] = v4; /*0x63558c*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v16, *(_BYTE **)(*(_DWORD *)vtable1 + 4)); /*0x635599*/
  v15[0] = *ScenarioClassActionCoords; /*0x6355a0*/
  v15[1] = ScenarioClassActionCoords[1]; /*0x6355a7*/
  v15[2] = ScenarioClassActionCoords[2]; /*0x6355b2*/
  v7 = ToCoordPixel(&v14, v15); /*0x6355ba*/
  v8 = ComputeBounds(v22, 8, *v7, v7[1]); /*0x6355cf*/
  v9 = 3; /*0x6355d6*/
  v10 = v8[1] - 4; /*0x6355e8*/
  v11 = v8[2] + 8; /*0x6355ee*/
  v12 = v8[3]; /*0x6355f1*/
  v17 = *v8 - 4; /*0x6355f4*/
  v18 = v10; /*0x6355fb*/
  v20 = v12 + 8; /*0x6355ff*/
  v19 = v11; /*0x635607*/
  do /*0x63566d*/
  {
    result = (*(int (__thiscall **)(AudioStream *, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x635620*/
               DSurface_Composite,
               v21,
               &v17,
               a2);
    if ( v19 > -2 && v20 > -2 ) /*0x63562d*/
    {
      ++v17; /*0x63564f*/
      ++v18; /*0x635657*/
      result = 2; /*0x63565b*/
      v19 -= 2; /*0x635664*/
      v20 -= 2; /*0x635668*/
    }
    else
    {
      v17 = 0; /*0x63562f*/
      v18 = 0; /*0x635633*/
      v19 = 0; /*0x635637*/
      v20 = 0; /*0x63563b*/
    }
    --v9; /*0x63566c*/
  }
  while ( v9 ); /*0x63566d*/
  return result; /*0x63566f*/
}



// ==== 0x00635680  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_635680(ObjectClass *this, int a2)
{
  int *Viewport; // eax
  _DWORD *Coords; // eax
  int *v5; // eax
  int *v6; // eax
  int v7; // edi
  int result; // eax
  int v9; // [esp+10h] [ebp-60h] BYREF
  _DWORD v10[3]; // [esp+18h] [ebp-58h] BYREF
  _DWORD v11[3]; // [esp+24h] [ebp-4Ch] BYREF
  int v12; // [esp+30h] [ebp-40h] BYREF
  int v13; // [esp+34h] [ebp-3Ch]
  int v14; // [esp+38h] [ebp-38h]
  int v15; // [esp+3Ch] [ebp-34h]
  int v16; // [esp+40h] [ebp-30h] BYREF
  int v17; // [esp+44h] [ebp-2Ch]
  int v18; // [esp+48h] [ebp-28h]
  int v19; // [esp+4Ch] [ebp-24h]
  _DWORD v20[4]; // [esp+50h] [ebp-20h] BYREF
  int v21[4]; // [esp+60h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(&v16); /*0x63568d*/
  v20[0] = *Viewport; /*0x635694*/
  v20[1] = Viewport[1]; /*0x63569b*/
  v20[2] = Viewport[2]; /*0x6356a2*/
  v20[3] = Viewport[3]; /*0x6356b0*/
  Coords = ScriptAction::GetCoords((ScriptAction *)this, v11); /*0x6356b4*/
  v10[0] = *Coords; /*0x6356bb*/
  v10[1] = Coords[1]; /*0x6356c6*/
  v10[2] = Coords[2]; /*0x6356d1*/
  v5 = ToCoordPixel(&v9, v10); /*0x6356d5*/
  v6 = ComputeBounds(v21, 8, *v5, v5[1]); /*0x6356ea*/
  v16 = *v6; /*0x6356f1*/
  v17 = v6[1]; /*0x6356f8*/
  v18 = v6[2]; /*0x6356ff*/
  v19 = v6[3]; /*0x63570a*/
  ShrinkRect(&v16, 4); /*0x635713*/
  v21[0] = v16; /*0x635728*/
  v12 = v16 - 4; /*0x635738*/
  v13 = v17 - 4; /*0x635740*/
  v14 = v18 + 8; /*0x635744*/
  v15 = v19 + 8; /*0x635748*/
  v7 = 3; /*0x63574c*/
  do /*0x6357b8*/
  {
    result = (*(int (__thiscall **)(AudioStream *, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63576b*/
               DSurface_Composite,
               v20,
               &v12,
               a2);
    if ( v14 > -2 && v15 > -2 ) /*0x635778*/
    {
      ++v12; /*0x63579a*/
      ++v13; /*0x6357a2*/
      result = 2; /*0x6357a6*/
      v14 -= 2; /*0x6357af*/
      v15 -= 2; /*0x6357b3*/
    }
    else
    {
      v12 = 0; /*0x63577a*/
      v13 = 0; /*0x63577e*/
      v14 = 0; /*0x635782*/
      v15 = 0; /*0x635786*/
    }
    --v7; /*0x6357b7*/
  }
  while ( v7 ); /*0x6357b8*/
  return result; /*0x6357ba*/
}



// ==== 0x006357D0  ShrinkRect  this=Rect  sig=csp ====
int __fastcall Rect_Shrink(_DWORD *a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  int v5; // edx
  int v6; // edi

  result = 2 * a2; /*0x6357d0*/
  if ( (a2 & 0x40000000) != 0 && (result >= a1[2] || result >= a1[3]) ) /*0x6357e0*/
  {
    *a1 = 0; /*0x6357e2*/
    a1[1] = 0; /*0x6357e8*/
    a1[2] = 0; /*0x6357ef*/
    a1[3] = 0; /*0x6357f6*/
  }
  else
  {
    v3 = a1[1]; /*0x635802*/
    *a1 -= a2; /*0x635807*/
    v4 = v3 - a2; /*0x63580c*/
    v5 = a1[3]; /*0x63580e*/
    v6 = result + a1[2]; /*0x635811*/
    a1[1] = v4; /*0x635813*/
    a1[2] = v6; /*0x635818*/
    a1[3] = result + v5; /*0x63581c*/
  }
  return result; /*0x6357fd*/
}



// ==== 0x00635830  BuildingClass::GetDrawColor  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass_GetDrawColor(int this)
{
  int result; // eax
  _DWORD *v3; // ebx
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  bool v9; // zf
  int v10; // edi
  int Type; // edi
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  int v17; // ecx
  int v18; // edx
  unsigned __int8 v19; // al
  int v20; // ecx
  int v21; // edi
  int v22; // edx
  unsigned __int8 v23[8]; // [esp+10h] [ebp-8h] BYREF

  result = *(_DWORD *)(this + 180); /*0x635839*/
  if ( result != -1 ) /*0x635842*/
    return result; /*0x635842*/
  v3 = ***(_DWORD ****)(this + 4); /*0x63584d*/
  v4 = v3[135]; /*0x63584f*/
  v5 = *(_DWORD *)(v4 + 48); /*0x635855*/
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v4) && dword_A83D4C ) /*0x635868*/
    v5 = *((_DWORD *)dword_A83D4C + 12); /*0x63586a*/
  v6 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v5] + 22265; /*0x635878*/
  *(_WORD *)v23 = *(_WORD *)v6; /*0x635880*/
  v23[2] = *(_BYTE *)(v6 + 2); /*0x63588c*/
  result = ((int (__stdcall *)(int))ColorLerpAndPack)(80); /*0x635895*/
  *(_DWORD *)(this + 180) = result; /*0x63589a*/
  v7 = *(_DWORD *)(this + 48); /*0x6358a0*/
  v8 = 0; /*0x6358a3*/
  v9 = v7 == 0; /*0x6358a5*/
  if ( v7 <= 0 ) /*0x6358a7*/
  {
LABEL_10:
    if ( v9 ) /*0x6358c1*/
    {
      Type = BuildingClass::GetType(v3); /*0x6358ce*/
      v12 = *(_DWORD *)(Type + 4); /*0x6358d0*/
      *(_DWORD *)v23 = this; /*0x6358d7*/
      v13 = (*(int (__thiscall **)(int, unsigned __int8 *))(v12 + 16))(Type + 4, v23); /*0x6358df*/
      v14 = *(_DWORD *)(Type + 140); /*0x6358e2*/
      if ( v14 == -1 || v13 < v14 ) /*0x6358f8*/
        return *(_DWORD *)(this + 180); /*0x6358f8*/
      v15 = v3[135]; /*0x6358fe*/
      v16 = *(_DWORD *)(v15 + 48); /*0x635904*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v15) ) /*0x635907*/
      {
        if ( dword_A83D4C ) /*0x635917*/
          v16 = *((_DWORD *)dword_A83D4C + 12); /*0x635919*/
      }
      v17 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v16] + 22265; /*0x63592b*/
      *(_WORD *)v23 = *(_WORD *)v17; /*0x635934*/
      v23[2] = *(_BYTE *)(v17 + 2); /*0x635940*/
      Color::Lerp(v23, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x635944*/
      v18 = (v23[1] >> g_BitMask_Blue << g_BitMask_Green) | (v23[2] >> g_BitMask_Red << g_BitShift_Blue); /*0x63597c*/
      v19 = v23[0]; /*0x63597e*/
    }
    else
    {
      v20 = v3[135]; /*0x635987*/
      v21 = *(_DWORD *)(v20 + 48); /*0x63598d*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v20) && dword_A83D4C ) /*0x6359a0*/
        v21 = *((_DWORD *)dword_A83D4C + 12); /*0x6359a2*/
      v22 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v21] + 22265; /*0x6359b5*/
      *(_WORD *)v23 = *(_WORD *)v22; /*0x6359be*/
      v23[2] = *(_BYTE *)(v22 + 2); /*0x6359c6*/
      Color::Lerp(v23, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x6359ce*/
      v18 = (v23[1] >> g_BitMask_Blue << g_BitMask_Green) | (v23[2] >> g_BitMask_Red << g_BitShift_Blue); /*0x635a06*/
      v19 = v23[0]; /*0x635a08*/
    }
    *(_DWORD *)(this + 180) = (v19 >> g_BitShift_Green_0 << g_BitShift_Red) | v18; /*0x635a23*/
    return *(_DWORD *)(this + 180); /*0x635a29*/
  }
  v10 = *(_DWORD *)(this + 36); /*0x6358a9*/
  while ( *(_DWORD *)(*(_DWORD *)v10 + 116) != result ) /*0x6358b1*/
  {
    ++v8; /*0x6358b7*/
    v10 += 4; /*0x6358b8*/
    if ( v8 >= v7 ) /*0x6358bd*/
    {
      v9 = v7 == 0; /*0x6358bf*/
      goto LABEL_10; /*0x6358bf*/
    }
  }
  return result; /*0x635a2f*/
}



// ==== 0x00635A40  TeamClass::FindByMemberType  this=TeamClass  sig=csp ====
int __thiscall TeamClass::FindByMemberType(TeamClass *this, int a2)
{
  int result; // eax
  int uniqueId; // ecx
  BuildingClass *v5; // edi
  int v6; // ebp
  int v7; // eax
  int Type; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  HouseClass *owner; // ecx
  void *relatedTagsCount; // esi
  int v14; // ecx
  int v15; // eax
  unsigned __int8 Color_field_00; // dl
  HouseClass *v17; // ecx
  void *Object_field_0x30; // esi
  int v19; // eax
  int v20; // [esp+10h] [ebp-10h]
  TeamClass *v21; // [esp+14h] [ebp-Ch] BYREF
  Color v22[2]; // [esp+18h] [ebp-8h] BYREF

  v20 = *((_DWORD *)&this->buildingType->AbstractClass + a2); /*0x635a53*/
  result = *(_DWORD *)(v20 + 116); /*0x635a57*/
  if ( result == -1 ) /*0x635a5d*/
  {
    uniqueId = this->?; /*0x635a63*/
    v5 = 0; /*0x635a66*/
    v6 = 0; /*0x635a68*/
    v22[0].Color_field_00 = uniqueId; /*0x635a6a*/
    if ( uniqueId <= 0 ) /*0x635a70*/
    {
      return -1; /*0x635b54*/
    }
    else
    {
      do /*0x635abd*/
      {
        v7 = *((_DWORD *)this->? + v6); /*0x635a79*/
        if ( *(_DWORD *)(v7 + 8) == a2 ) /*0x635a83*/
        {
          v5 = *(BuildingClass **)v7; /*0x635a85*/
          Type = BuildingClass::GetType(*(BuildingClass **)v7); /*0x635a8e*/
          v9 = *(_DWORD *)(Type + 4); /*0x635a90*/
          v21 = this; /*0x635a97*/
          v10 = (*(int (__thiscall **)(int, TeamClass **))(v9 + 16))(Type + 4, &v21); /*0x635a9f*/
          v11 = *(_DWORD *)(Type + 140); /*0x635aa2*/
          if ( v11 == -1 || v10 < v11 ) /*0x635ab4*/
          {
            owner = v5->?; /*0x635acb*/
            relatedTagsCount = (void *)owner->relatedTagsCount; /*0x635acd*/
            if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) && dword_A83D4C ) /*0x635ae0*/
              relatedTagsCount = dword_A83D4C->Object_field_0x30; /*0x635ae2*/
            v14 = *((_DWORD *)stru_A80220.? + (_DWORD)relatedTagsCount) + 22265; /*0x635af4*/
            LOWORD(v22[0].Color_field_00) = *(_WORD *)v14; /*0x635afd*/
            BYTE2(v22[0].Color_field_00) = *(_BYTE *)(v14 + 2); /*0x635b09*/
            Color::Lerp(v22, 0x50u, &byte_A83CD9); /*0x635b0d*/
            v15 = (BYTE1(v22[0].Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635b45*/
                | (BYTE2(v22[0].Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
            Color_field_00 = v22[0].Color_field_00; /*0x635b47*/
            goto LABEL_19; /*0x635b4b*/
          }
          uniqueId = v22[0].Color_field_00; /*0x635ab6*/
        }
        ++v6; /*0x635aba*/
      }
      while ( v6 < uniqueId ); /*0x635abd*/
      if ( !v5 ) /*0x635b52*/
        return -1; /*0x635b52*/
      v17 = v5->?; /*0x635b61*/
      Object_field_0x30 = (void *)v17->relatedTagsCount; /*0x635b67*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v17) ) /*0x635b6a*/
      {
        if ( dword_A83D4C ) /*0x635b7a*/
          Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x635b7c*/
      }
      v19 = *((_DWORD *)stru_A80220.? + (_DWORD)Object_field_0x30) + 22265; /*0x635b8f*/
      LOWORD(v22[0].Color_field_00) = *(_WORD *)v19; /*0x635b97*/
      BYTE2(v22[0].Color_field_00) = *(_BYTE *)(v19 + 2); /*0x635ba3*/
      Color::Lerp(v22, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x635ba7*/
      v15 = (BYTE1(v22[0].Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635bdf*/
          | (BYTE2(v22[0].Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
      Color_field_00 = v22[0].Color_field_00; /*0x635be1*/
LABEL_19:
      result = (Color_field_00 >> g_BitShift_Green_0 << g_BitShift_Red) | v15; /*0x635be5*/
      *(_DWORD *)(v20 + 116) = result; /*0x635c01*/
    }
  }
  return result; /*0x635b54*/
}



// ==== 0x00635C10  TeamClass::GetMember  this=TeamClass  sig=csp ====
int __thiscall TeamClass::GetMember(TeamClass *this)
{
  int result; // eax
  int uniqueId; // ebp
  BuildingClass *v4; // esi
  int v5; // edi
  int v6; // eax
  HouseClass *owner; // ecx
  void *relatedTagsCount; // edi
  int v9; // edx
  int v10; // eax
  unsigned __int8 Color_field_00; // dl
  HouseClass *v12; // ecx
  void *Object_field_0x30; // esi
  int v14; // ecx
  Color v15; // [esp+10h] [ebp-8h] BYREF

  result = this->q02B; /*0x635c18*/
  if ( result == -1 ) /*0x635c22*/
  {
    uniqueId = this->?; /*0x635c28*/
    v4 = 0; /*0x635c2b*/
    v5 = 0; /*0x635c2d*/
    if ( uniqueId <= 0 ) /*0x635c31*/
    {
      return -1; /*0x635c60*/
    }
    else
    {
      do /*0x635c56*/
      {
        v6 = *((_DWORD *)this->? + v5); /*0x635c36*/
        if ( *(_BYTE *)(v6 + 12) ) /*0x635c39*/
        {
          v4 = *(BuildingClass **)v6; /*0x635c40*/
          if ( !*(_BYTE *)(BuildingClass::GetType(*(BuildingClass **)v6) + 152) ) /*0x635c51*/
          {
            owner = v4->?; /*0x635c71*/
            relatedTagsCount = (void *)owner->relatedTagsCount; /*0x635c73*/
            if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) && dword_A83D4C ) /*0x635c86*/
              relatedTagsCount = dword_A83D4C->Object_field_0x30; /*0x635c88*/
            v9 = *((_DWORD *)stru_A80220.? + (_DWORD)relatedTagsCount) + 22265; /*0x635c9b*/
            LOWORD(v15.Color_field_00) = *(_WORD *)v9; /*0x635ca4*/
            BYTE2(v15.Color_field_00) = *(_BYTE *)(v9 + 2); /*0x635cac*/
            Color::Lerp(&v15, 0x50u, &byte_A83CD9); /*0x635cb4*/
            v10 = (BYTE1(v15.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635cec*/
                | (BYTE2(v15.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
            Color_field_00 = v15.Color_field_00; /*0x635cee*/
            goto LABEL_16; /*0x635cf2*/
          }
        }
        ++v5; /*0x635c53*/
      }
      while ( v5 < uniqueId ); /*0x635c56*/
      if ( !v4 ) /*0x635c5a*/
        return -1; /*0x635c5a*/
      v12 = v4->?; /*0x635cf7*/
      Object_field_0x30 = (void *)v12->relatedTagsCount; /*0x635cfd*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v12) ) /*0x635d00*/
      {
        if ( dword_A83D4C ) /*0x635d10*/
          Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x635d12*/
      }
      v14 = *((_DWORD *)stru_A80220.? + (_DWORD)Object_field_0x30) + 22265; /*0x635d24*/
      LOWORD(v15.Color_field_00) = *(_WORD *)v14; /*0x635d2d*/
      BYTE2(v15.Color_field_00) = *(_BYTE *)(v14 + 2); /*0x635d39*/
      Color::Lerp(&v15, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x635d3d*/
      v10 = (BYTE1(v15.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635d75*/
          | (BYTE2(v15.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
      Color_field_00 = v15.Color_field_00; /*0x635d77*/
LABEL_16:
      result = (Color_field_00 >> g_BitShift_Green_0 << g_BitShift_Red) | v10; /*0x635d7b*/
      this->q02B = result; /*0x635d93*/
    }
  }
  return result; /*0x635c60*/
}



// ==== 0x00635DB0  TeamClass::Reset  this=TeamClass  sig=csp ====
int __thiscall TeamClass::Reset(TeamClass *this, char a2)
{
  int result; // eax
  HouseClass *target; // edx

  LOBYTE(result) = a2; /*0x635db0*/
  *((_DWORD *)this + 45) = -1; /*0x635dba*/
  if ( a2 ) /*0x635dc0*/
  {
    target = this->target; /*0x635dc2*/
    for ( result = 0; result < (int)target; *(_DWORD *)(*((_DWORD *)this->buildingType + result - 1) + 116) = -1 ) /*0x635dc9*/
      ++result; /*0x635dcf*/
    this->q02B = -1; /*0x635ddc*/
  }
  return result; /*0x635de2*/
}



// ==== 0x00635DF0  ObjectClass::method_635DF0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_635DF0(ObjectClass *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v4; // ecx
  int v5[2]; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v6[3]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v7[4]; // [esp+20h] [ebp-10h] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, *(_BYTE **)(*(_DWORD *)this->? + 4)); /*0x635e02*/
  v6[0] = *ScenarioClassActionCoords; /*0x635e09*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x635e10*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x635e27*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x635e2b*/
  v5[0] += DSurface_ViewBounds.field_0; /*0x635e48*/
  v4 = (char *)DSurface_ViewBounds.field_4 + v5[1] - 8; /*0x635e64*/
  *a2 = v5[0] - 8; /*0x635e69*/
  a2[1] = v4; /*0x635e70*/
  a2[2] = 16; /*0x635e73*/
  a2[3] = 16; /*0x635e76*/
  return a2; /*0x635e6f*/
}



// ==== 0x00635E90  ObjectClass::method_635E90  this=ObjectClass  sig=csp ====
int *__thiscall sub_635E90(ObjectClass *this, int *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  int *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  int v8; // esi
  int v10; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v11[3]; // [esp+14h] [ebp-28h] BYREF
  _DWORD v12[3]; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD v13[4]; // [esp+2Ch] [ebp-10h] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v12, *(_BYTE **)(*(_DWORD *)this->? + 4)); /*0x635ea2*/
  v11[0] = *ScenarioClassActionCoords; /*0x635ea9*/
  v11[1] = ScenarioClassActionCoords[1]; /*0x635eb0*/
  v11[2] = ScenarioClassActionCoords[2]; /*0x635ebb*/
  v3 = ToCoordPixel(&v10, v11); /*0x635ec3*/
  v4 = ComputeBounds(v13, 8, *v3, v3[1]); /*0x635edd*/
  v5 = *v4 - 8; /*0x635ee7*/
  v6 = v4[1] - 8; /*0x635ef0*/
  v7 = v4[2] + 8; /*0x635ef3*/
  v8 = v4[3]; /*0x635ef6*/
  *a2 = v5; /*0x635f0c*/
  a2[1] = v6; /*0x635f0f*/
  a2[2] = v7 + 8; /*0x635f12*/
  a2[3] = v8 + 16; /*0x635f15*/
  return a2; /*0x635f0e*/
}



// ==== 0x00635F20  ScriptAction::Constructor  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::Constructor(ScriptAction *this, int a2)
{
  this->ScriptAction_field_0x8[0] = 0; /*0x635f27*/
  *(_DWORD *)this->__pad_C = 0; /*0x635f2a*/
  LOBYTE(this->ScriptAction_field_0x10[0]) = 1; /*0x635f2d*/
  BYTE1(this->ScriptAction_field_0x10[0]) = 0; /*0x635f31*/
  this->ScriptAction_field_0x4[0] = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x635f34*/
  this->ScriptAction_field_0x18[0] = 10; /*0x635f3b*/
  this->ScriptAction_field_0x14 = 0; /*0x635f42*/
  this->__pad_1C[0] = 0; /*0x635f45*/
  this->__pad_1C[1] = 0; /*0x635f48*/
  LOBYTE(this->ScriptAction_field_0x98) = 0; /*0x635f4b*/
  BYTE1(this->ScriptAction_field_0x98) = 0; /*0x635f51*/
  this->ScriptAction_field_0x8C = (void *)-1; /*0x635f5b*/
  *(_DWORD *)this->__pad_90 = -1; /*0x635f61*/
  this->ScriptAction_field_0x94 = (void *)-1; /*0x635f67*/
  *(_DWORD *)this->__pad_0 = a2; /*0x635f6d*/
  return this->__pad_0; /*0x635f6f*/
}



// ==== 0x00635F80  FactoryClass::FindAvailable  this=FactoryClass  sig=csp ====
void __thiscall FactoryClass::FindAvailable(FactoryClass *this)
{
  BuildingClass *vtable0; // ecx
  int v3; // eax
  int abstractFlags; // ebx
  int i; // ebp
  Array *v6; // esi
  int Value; // eax
  void *v8; // eax
  int v9; // ecx
  void *Object_field_0x30; // esi
  void *vtable2; // eax
  void *Block; // [esp+14h] [ebp-4h] BYREF

  vtable0 = (BuildingClass *)this->AbstractClass; /*0x635f89*/
  if ( vtable0 ) /*0x635f8d*/
    BuildingClass::SetType(vtable0, 0); /*0x635f91*/
  Block = this; /*0x635f9b*/
  if ( !stru_AC4B30.__pad_EC[217] ) /*0x635fa1*/
  {
    v3 = (*(int (__thiscall **)(char *, void **))(*(_DWORD *)&stru_AC4B30.__pad_EC[92] + 16))( /*0x635fb3*/
           &stru_AC4B30.__pad_EC[92],
           &Block);
    if ( v3 != -1 && v3 < *(int *)&stru_AC4B30.__pad_EC[108] ) /*0x635fc3*/
    {
      --*(_DWORD *)&stru_AC4B30.__pad_EC[108]; /*0x635fc8*/
      for ( ; /*0x635fce*/
            v3 < *(int *)&stru_AC4B30.__pad_EC[108];
            *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[96] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[96]
                                                                                       + 4 * v3) )
      {
        ++v3; /*0x635fd6*/
      }
    }
  }
  abstractFlags = this->?; /*0x635fe8*/
  for ( i = 0; i < abstractFlags; ++i ) /*0x635ff6*/
  {
    v6 = (Array *)*((_DWORD *)this->? + i); /*0x635ffb*/
    Value = Array::FindValue(v6, (int)this->AbstractClass); /*0x636003*/
    if ( Value == -1 ) /*0x63600b*/
      v8 = 0; /*0x63600d*/
    else
      v8 = (void *)*((_DWORD *)v6->Array_field_0x4 + Value); /*0x636014*/
    Block = v8; /*0x636019*/
    if ( v8 ) /*0x63601d*/
    {
      FactoryClass::FinishProduction((int *)v6->__pad_0, (int)v8); /*0x636022*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x63602f*/
      FactoryClass::RemoveItemAt((FactoryClass *)v6, (int)&Block); /*0x63603e*/
      __3_YAXPAX_Z(Block); /*0x636048*/
      if ( !v6->Array_field_0x10 ) /*0x63604d*/
      {
        if ( v6 ) /*0x636059*/
          FactoryClass::RemoveFromArrays((FactoryClass *)v6, 1); /*0x63605f*/
      }
    }
  }
  if ( abstractFlags ) /*0x63606f*/
  {
    Block = this->AbstractClass; /*0x636073*/
    v9 = *((_DWORD *)Block + 135); /*0x636077*/
    Object_field_0x30 = *(void **)(v9 + 48); /*0x63607d*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)v9) && dword_A83D4C ) /*0x636090*/
      Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x636092*/
    DecFactoryClassCounter((unsigned int)Object_field_0x30); /*0x636097*/
    VectorClass::EraseAt((VectorClass *)&stru_AC4B30.__pad_EC[36], (int)&Block); /*0x6360a6*/
  }
  (*((void (__thiscall **)(void **))this->? + 3))(&this->?); /*0x6360b3*/
  *((_BYTE *)this + 152) = 0; /*0x6360b9*/
  *((_DWORD *)this + 35) = -1; /*0x6360c0*/
  this->production = -1; /*0x6360c6*/
  *((_DWORD *)this + 37) = -1; /*0x6360cc*/
  *((_BYTE *)this + 153) = 0; /*0x6360d2*/
  vtable2 = this->?; /*0x6360d9*/
  this->? = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x6360e0*/
  if ( vtable2 && BYTE1(this->?) ) /*0x6360e8*/
  {
    __3_YAXPAX_Z(vtable2); /*0x6360f0*/
    this->? = 0; /*0x6360f8*/
  }
  this->? = 0; /*0x6360fb*/
  BYTE1(this->?) = 0; /*0x6360fe*/
}



// ==== 0x00636110  ObjectClass::ReadPointerFromECX2  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX2(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x636112*/
}



// ==== 0x00636120  TeamClass::RemoveAllMembers  this=TeamClass  sig=csp ====
int __thiscall TeamClass::RemoveAllMembers(TeamClass *this)
{
  int abstractFlags; // ecx
  int v3; // eax
  int v4; // esi
  int Value; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int Object_field_0x30; // esi
  int v13; // eax
  int result; // eax
  bool v15; // [esp+Bh] [ebp-Dh]
  void *Block; // [esp+Ch] [ebp-Ch] BYREF
  int i; // [esp+10h] [ebp-8h]
  _DWORD *vtable0; // [esp+14h] [ebp-4h] BYREF

  abstractFlags = this->?; /*0x636127*/
  v15 = abstractFlags == 0; /*0x63612c*/
  v3 = 0; /*0x636131*/
  vtable0 = (_DWORD *)abstractFlags; /*0x636133*/
  for ( i = 0; i < (int)vtable0; ++i ) /*0x63613d*/
  {
    v4 = *((_DWORD *)this->? + v3); /*0x636148*/
    Value = Array::FindValue((Array *)v4, (int)this->AbstractClass); /*0x636150*/
    if ( Value == -1 ) /*0x636158*/
      v6 = 0; /*0x63615a*/
    else
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * Value); /*0x636161*/
    Block = (void *)v6; /*0x636166*/
    if ( v6 ) /*0x63616a*/
    {
      if ( *(_BYTE *)(v6 + 12) ) /*0x636170*/
        ScriptAction::DecrementRefCount((ScriptAction *)v4, v6); /*0x63617a*/
      v7 = *(_DWORD *)(v6 + 8); /*0x63617f*/
      if ( v7 != -1 ) /*0x636185*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v4 + 36) + 4 * v7); /*0x63618c*/
        *(_DWORD *)(v8 + 116) = -1; /*0x636191*/
        TeamClass::Reset((TeamClass *)v4, 0); /*0x636198*/
        v9 = *(_DWORD *)(v8 + 112) - 1; /*0x6361a0*/
        *(_DWORD *)(v8 + 112) = v9; /*0x6361a1*/
        if ( !v9 ) /*0x6361a4*/
          ScriptQueue::PushEntry((ScriptQueue *)v4); /*0x6361a8*/
      }
      *(_DWORD *)(v6 + 8) = -1; /*0x6361ad*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6361bc*/
      v10 = (*(int (__thiscall **)(int, void **))(*(_DWORD *)v4 + 16))(v4, &Block); /*0x6361cd*/
      if ( v10 != -1 ) /*0x6361d3*/
        Vector4::EraseAt_Copy((Vector4 *)v4, v10); /*0x6361d8*/
      __3_YAXPAX_Z(Block); /*0x6361e2*/
      if ( !*(_DWORD *)(v4 + 16) && v4 ) /*0x6361f3*/
      {
        FactoryClass::ClearObjects((FactoryClass *)v4); /*0x6361f7*/
        Team_Remove((ObjectClass *)v4); /*0x6361fe*/
        *(_DWORD *)(v4 + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x636206*/
        VectorClass::Cleanup2(v4 + 32); /*0x63620c*/
        *(_DWORD *)v4 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x636213*/
        VectorClass_ptr_PlanningMemberClass::Remove((_VectorClass_PAVPlanningMemberClass *)v4); /*0x636219*/
        __3_YAXPAX_Z((void *)v4); /*0x63621f*/
      }
    }
    v3 = i + 1; /*0x63622f*/
  }
  if ( !v15 ) /*0x636244*/
  {
    vtable0 = this->AbstractClass; /*0x63624c*/
    v11 = vtable0[135]; /*0x636250*/
    Object_field_0x30 = *(_DWORD *)(v11 + 48); /*0x636256*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)v11) && dword_A83D4C ) /*0x636269*/
      Object_field_0x30 = (unsigned int)dword_A83D4C->Object_field_0x30; /*0x63626b*/
    if ( Object_field_0x30 < 0x18 ) /*0x636270*/
      *(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] = (*(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] /*0x63628a*/
                                                                    - 1)
                                                                   & ((*(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12]
                                                                     - 1 < 0)
                                                                    - 1);
    v13 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&stru_AC4B30.__pad_EC[36] + 16))( /*0x6362a1*/
            &stru_AC4B30.__pad_EC[36],
            &vtable0);
    if ( v13 != -1 && v13 < *(int *)&stru_AC4B30.__pad_EC[52] ) /*0x6362b3*/
    {
      --*(_DWORD *)&stru_AC4B30.__pad_EC[52]; /*0x6362b8*/
      for ( ; /*0x6362be*/
            v13 < *(int *)&stru_AC4B30.__pad_EC[52];
            *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40] + 4 * v13 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40]
                                                                                        + 4 * v13) )
      {
        ++v13; /*0x6362c6*/
      }
    }
  }
  result = (*((int (__thiscall **)(void **))this->? + 3))(&this->?); /*0x6362e3*/
  this->countObjects[1] = -1; /*0x6362e6*/
  this->countObjects[2] = -1; /*0x6362ec*/
  this->countObjects[3] = -1; /*0x6362f2*/
  LOBYTE(this->countObjects[4]) = 0; /*0x6362f8*/
  BYTE1(this->countObjects[4]) = 0; /*0x6362ff*/
  return result; /*0x636306*/
}



// ==== 0x00636310  Sidebar::CancelSidebarProductionQueue  this=Sidebar  sig=csp ====
void __thiscall Sidebar::CancelSidebarProductionQueue(Sidebar *this)
{
  int v2; // ebx
  int i; // ebp
  Array *v4; // edi
  int Value; // eax
  void *v6; // eax
  int v7; // eax
  int v8; // ecx
  void *Object_field_0x30; // edi
  int *Sidebar_field_0x4; // edi
  int v11; // eax
  int v12; // ebx
  int j; // ebp
  unsigned int LeaderIndex; // eax
  void *Sidebar_field_0x8; // eax
  void *Block; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this->__pad_14; /*0x636319*/
  for ( i = 0; i < v2; ++i ) /*0x636327*/
  {
    v4 = (Array *)*((_DWORD *)this->Sidebar_field_0x8 + i); /*0x63632c*/
    Value = Array::FindValue(v4, *(_DWORD *)this->__pad_0); /*0x636334*/
    if ( Value == -1 ) /*0x63633c*/
      v6 = 0; /*0x63633e*/
    else
      v6 = (void *)*((_DWORD *)v4->Array_field_0x4 + Value); /*0x636345*/
    Block = v6; /*0x63634a*/
    if ( v6 ) /*0x63634e*/
    {
      FactoryClass::FinishProduction((int *)v4->__pad_0, (int)v6); /*0x636353*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x636360*/
      v7 = (*(int (__thiscall **)(Array *, void **))(*(_DWORD *)v4->__pad_0 + 16))(v4, &Block); /*0x636371*/
      if ( v7 != -1 ) /*0x636377*/
        Vector4::EraseAt_Copy((Vector4 *)v4, v7); /*0x63637c*/
      __3_YAXPAX_Z(Block); /*0x636386*/
      if ( !v4->Array_field_0x10 && v4 ) /*0x636397*/
        FactoryClass::RemoveFromArrays((FactoryClass *)v4, 1); /*0x63639d*/
    }
  }
  if ( v2 ) /*0x6363ad*/
  {
    Block = *(void **)this->__pad_0; /*0x6363b1*/
    v8 = *((_DWORD *)Block + 135); /*0x6363b5*/
    Object_field_0x30 = *(void **)(v8 + 48); /*0x6363bb*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)v8) && dword_A83D4C ) /*0x6363ce*/
      Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x6363d0*/
    DecFactoryClassCounter((unsigned int)Object_field_0x30); /*0x6363d5*/
    VectorClass::EraseAt((VectorClass *)&stru_AC4B30.__pad_EC[36], (int)&Block); /*0x6363e4*/
  }
  Sidebar_field_0x4 = this->Sidebar_field_0x4; /*0x6363ec*/
  (*(void (__thiscall **)(int *))(this->Sidebar_field_0x4[0] + 12))(this->Sidebar_field_0x4); /*0x6363f1*/
  this->__pad_70[40] = 0; /*0x6363f7*/
  *(_DWORD *)&this->__pad_70[28] = -1; /*0x636400*/
  *(_DWORD *)&this->__pad_70[32] = -1; /*0x636406*/
  *(_DWORD *)&this->__pad_70[36] = -1; /*0x63640c*/
  this->__pad_70[41] = 0; /*0x636412*/
  *(_DWORD *)this->__pad_0 = 0; /*0x636419*/
  if ( this ) /*0x63641f*/
  {
    if ( *(_DWORD *)this->__pad_0 ) /*0x636425*/
      BuildingClass::SetType(*(BuildingClass **)this->__pad_0, 0); /*0x63642d*/
    Block = this; /*0x636437*/
    if ( !stru_AC4B30.__pad_EC[217] ) /*0x63643d*/
    {
      v11 = (*(int (__thiscall **)(char *, void **))(*(_DWORD *)&stru_AC4B30.__pad_EC[92] + 16))( /*0x63644f*/
              &stru_AC4B30.__pad_EC[92],
              &Block);
      if ( v11 != -1 ) /*0x636454*/
        Sidebar::RemoveItem((Sidebar *)&stru_AC4B30.__pad_EC[92], v11); /*0x63645c*/
    }
    v12 = *(_DWORD *)this->__pad_14; /*0x636461*/
    for ( j = 0; j < v12; ++j ) /*0x63646f*/
      TeamClass::DestroyAllMembers(*((TeamClass **)this->Sidebar_field_0x8 + j), *(_DWORD **)this->__pad_0); /*0x63647a*/
    if ( v12 ) /*0x63648a*/
    {
      v17 = *(_DWORD *)this->__pad_0; /*0x63648e*/
      LeaderIndex = TeamClass::GetLeaderIndex((TeamClass *)v17); /*0x636492*/
      DecFactoryClassCounter(LeaderIndex); /*0x636499*/
      VectorClass::EraseAt((VectorClass *)&stru_AC4B30.__pad_EC[36], (int)&v17); /*0x6364a8*/
    }
    (*(void (__thiscall **)(int *))(*Sidebar_field_0x4 + 12))(this->Sidebar_field_0x4); /*0x6364b1*/
    this->__pad_70[40] = 0; /*0x6364b7*/
    *(_DWORD *)&this->__pad_70[28] = -1; /*0x6364be*/
    *(_DWORD *)&this->__pad_70[32] = -1; /*0x6364c4*/
    *(_DWORD *)&this->__pad_70[36] = -1; /*0x6364ca*/
    this->__pad_70[41] = 0; /*0x6364d0*/
    Sidebar_field_0x8 = this->Sidebar_field_0x8; /*0x6364d7*/
    *Sidebar_field_0x4 = (int)&VectorClass<PlanningNodeClass *>::`vftable'; /*0x6364de*/
    if ( Sidebar_field_0x8 ) /*0x6364e4*/
    {
      if ( BYTE1(this->Sidebar_field_0x10) ) /*0x6364e6*/
      {
        __3_YAXPAX_Z(Sidebar_field_0x8); /*0x6364ee*/
        this->Sidebar_field_0x8 = 0; /*0x6364f6*/
      }
    }
    BYTE1(this->Sidebar_field_0x10) = 0; /*0x6364fa*/
    this->Sidebar_field_0xC[0] = 0; /*0x6364fe*/
    __3_YAXPAX_Z(this); /*0x636501*/
  }
}



// ==== 0x00636520  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_636520(ObjectClass *this)
{
  LOBYTE(this->?) = 1; /*0x636520*/
}



// ==== 0x00636530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_636530(ObjectClass *this)
{
  LOBYTE(this->?) = 0; /*0x636530*/
}



// ==== 0x00636540  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_636540(ObjectClass *this)
{
  return this->?; /*0x636543*/
}



// ==== 0x00636570  ScriptAction::Check  this=ScriptAction  sig=csp ====
BOOL __thiscall ScriptAction::Check(ScriptAction *this)
{
  void *ScriptAction_field_0x8C; // eax
  BOOL result; // eax

  result = 0; /*0x636586*/
  if ( this->ScriptAction_field_0x14 > 0 ) /*0x636575*/
  {
    ScriptAction_field_0x8C = this->ScriptAction_field_0x8C; /*0x636577*/
    if ( ScriptAction_field_0x8C == (void *)-1 || (int)ScriptAction_field_0x8C > 0 ) /*0x636584*/
      return 1; /*0x636575*/
  }
  return result; /*0x63658b*/
}



// ==== 0x00636590  FactoryClass::CompleteCurrentItem  this=TechnoClass  sig=csp ====
int __thiscall FactoryClass::CompleteCurrentItem(int this, int a2)
{
  int v3; // ebx
  int Value; // eax
  int v5; // eax
  _BYTE *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  void *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // esi
  int v21; // eax
  void *Block; // [esp+10h] [ebp-74h] BYREF
  _BYTE v24[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v25; // [esp+80h] [ebp-4h]
  char v26; // [esp+82h] [ebp-2h]

  v3 = **(_DWORD **)(this + 8); /*0x63659c*/
  Value = Array::FindValue((int *)v3, *(_DWORD *)this); /*0x6365a4*/
  if ( Value == -1 ) /*0x6365ac*/
    v5 = 0; /*0x6365ae*/
  else
    v5 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * Value); /*0x6365b5*/
  v6 = *(_BYTE **)(v5 + 4); /*0x6365b8*/
  qmemcpy(v24, v6, sizeof(v24)); /*0x6365c4*/
  v6 += 108; /*0x6365c4*/
  v25 = *(_WORD *)v6; /*0x6365c6*/
  v26 = v6[2]; /*0x6365c8*/
  qmemcpy((void *)(this + 29), v24, 0x6Cu); /*0x6365d5*/
  *(_WORD *)(this + 137) = v25; /*0x6365d7*/
  *(_BYTE *)(this + 139) = v26; /*0x6365d9*/
  v7 = *(_DWORD *)(this + 20); /*0x6365da*/
  if ( v7 > 0 ) /*0x6365e2*/
  {
    v8 = v7 - 1; /*0x6365e4*/
    v9 = 0; /*0x6365e7*/
    for ( *(_DWORD *)(this + 20) = v8; /*0x6365ee*/
          v9 < *(_DWORD *)(this + 20);
          *(_DWORD *)(*(_DWORD *)(this + 8) + 4 * v9 - 4) = *(_DWORD *)(*(_DWORD *)(this + 8) + 4 * v9) )
    {
      ++v9; /*0x6365f3*/
    }
  }
  if ( *(_DWORD *)(this + 148) )
  {
    v14 = Array::FindValue((int *)v3, *(_DWORD *)this); /*0x636681*/
    if ( v14 == -1 ) /*0x636689*/
      v15 = 0; /*0x63668b*/
    else
      v15 = *(void **)(*(_DWORD *)(v3 + 4) + 4 * v14); /*0x636692*/
    Block = v15; /*0x636697*/
    if ( v15 ) /*0x63669b*/
    {
      FactoryClass::FinishProduction(v3, (int)v15); /*0x6366a0*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6366ad*/
      FactoryClass::RemoveItemAt(&Block); /*0x6366bc*/
      __3_YAXPAX_Z(Block); /*0x6366c6*/
      if ( !*(_DWORD *)(v3 + 16) ) /*0x6366cb*/
      {
        if ( v3 ) /*0x6366d7*/
          FactoryClass::RemoveFromArrays((int *)v3, 1); /*0x6366dd*/
      }
    }
    v16 = *(_DWORD *)(this + 148); /*0x6366e2*/
    if ( v16 > 0 )
    {
      v17 = v16 - 1; /*0x6366ec*/
      *(_DWORD *)(this + 148) = v17; /*0x6366f5*/
      *(_DWORD *)(this + 148) = v17 <= 0 ? 0 : v17;
    }
  }
  else
  {
    *(_BYTE *)(this + 153) = 1; /*0x63660c*/
    v10 = *(_DWORD *)(this + 12); /*0x636613*/
    if ( *(_DWORD *)(this + 20) < v10 /*0x636636*/
      || (*(_BYTE *)(this + 17) || !v10)
      && (v11 = *(_DWORD *)(this + 24), v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4) + 8))(this + 4, v10 + v11, 0) )
    {
      v12 = *(_DWORD *)(this + 20); /*0x63663d*/
      v13 = *(_DWORD *)(this + 8); /*0x636640*/
      *(_DWORD *)(this + 20) = v12 + 1; /*0x636646*/
      *(_DWORD *)(v13 + 4 * v12) = v3; /*0x636649*/
    }
    Block = (void *)v3; /*0x63664e*/
    if ( v3 && !*(_BYTE *)(v3 + 28) ) /*0x636658*/
    {
      *(_BYTE *)(v3 + 28) = 1; /*0x63666d*/
      VectorClass::Append(&dword_AC4C98, &Block); /*0x636671*/
    }
  }
  v18 = *(_DWORD *)(this + 140) - 1; /*0x636709*/
  if ( v18 < -1 ) /*0x63670d*/
    v18 = -1; /*0x63670f*/
  *(_DWORD *)(this + 140) = v18; /*0x636712*/
  if ( !*(_DWORD *)(this + 20) ) /*0x636718*/
  {
    Block = *(void **)this; /*0x636722*/
    v19 = *((_DWORD *)Block + 135); /*0x636726*/
    v20 = *(_DWORD *)(v19 + 48); /*0x63672c*/
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v19) && dword_A83D4C ) /*0x63673f*/
      v20 = *((_DWORD *)dword_A83D4C + 12); /*0x636741*/
    if ( v20 < 0x18 ) /*0x636746*/
      dword_AC4B84[v20] = (dword_AC4B84[v20] - 1) & ((dword_AC4B84[v20] - 1 < 0) - 1); /*0x636760*/
    v21 = (*(int (__thiscall **)(int *, void **))(stru_AC4C40 + 16))(&stru_AC4C40, &Block); /*0x636777*/
    if ( v21 != -1 ) /*0x63677d*/
      FactoryClass::RemoveItem(v21); /*0x636785*/
  }
  qmemcpy((void *)a2, v24, 0x6Cu); /*0x63679c*/
  *(_WORD *)(a2 + 108) = v25; /*0x63679e*/
  *(_BYTE *)(a2 + 110) = v26; /*0x6367a0*/
  return a2; /*0x6367a1*/
}



// ==== 0x006367B0  TeamClass::UpdateBuildQueue  this=TeamClass  sig=csp ====
int __thiscall TeamClass::UpdateBuildQueue(TeamClass *this, _DWORD *a2, int a3, int a4)
{
  TeamClass *v4; // esi
  int result; // eax
  _DWORD *vtable2; // edx
  void *vtable0; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  void ***v11; // edx
  int v12; // eax
  _BYTE *v13; // esi
  _BYTE *WaypointCoords; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  _BYTE *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int Type; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // [esp+10h] [ebp-84h]
  char v29[8]; // [esp+1Ch] [ebp-78h] BYREF
  _BYTE v30[108]; // [esp+24h] [ebp-70h] BYREF
  __int16 v31; // [esp+90h] [ebp-4h]
  char v32; // [esp+92h] [ebp-2h]

  v4 = this; /*0x6367b7*/
  result = BuildingClass::GetType((BuildingClass *)a2); /*0x6367c4*/
  if ( result ) /*0x6367cb*/
  {
    result = a3; /*0x6367d1*/
    v27 = a3; /*0x6367e1*/
    if ( a3 < a3 + a4 ) /*0x6367eb*/
    {
      while ( 1 ) /*0x6367fa*/
      {
        vtable2 = v4->?; /*0x6367fa*/
        vtable0 = v4->AbstractClass; /*0x636801*/
        v8 = vtable2[v27]; /*0x636803*/
        v9 = 0; /*0x636806*/
        v10 = *(_DWORD *)(v8 + 16); /*0x636808*/
        if ( v10 <= 0 ) /*0x63680d*/
          goto LABEL_11; /*0x63680d*/
        v11 = *(void ****)(v8 + 4); /*0x636812*/
        while ( **v11 != vtable0 ) /*0x636818*/
        {
          ++v9; /*0x63681a*/
          ++v11; /*0x63681b*/
          if ( v9 >= v10 ) /*0x636820*/
          {
            v12 = 0; /*0x636822*/
            goto LABEL_13; /*0x636824*/
          }
        }
        if ( v9 == -1 ) /*0x636829*/
LABEL_11:
          v12 = 0; /*0x63682b*/
        else
          v12 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v9); /*0x63682f*/
LABEL_13:
        v13 = *(_BYTE **)(v12 + 4); /*0x636832*/
        qmemcpy(v30, v13, sizeof(v30)); /*0x63683e*/
        v13 += 108; /*0x63683e*/
        v31 = *(_WORD *)v13; /*0x636847*/
        v32 = v13[2]; /*0x63684e*/
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v29, a2); /*0x63684f*/
        *(_DWORD *)&v30[7] = *(_DWORD *)WaypointCoords; /*0x636858*/
        v30[11] = WaypointCoords[4]; /*0x63685f*/
        v15 = __2_YAPAXI_Z(0x10u); /*0x636863*/
        v16 = 0; /*0x636868*/
        if ( v15 ) /*0x63686f*/
        {
          *(_DWORD *)v15 = 0; /*0x636871*/
          *(_DWORD *)(v15 + 4) = 0; /*0x636873*/
          *(_BYTE *)(v15 + 12) = 0; /*0x636876*/
          *(_DWORD *)(v15 + 8) = -1; /*0x636879*/
          v16 = (_DWORD *)v15; /*0x636880*/
        }
        *v16 = a2; /*0x63688b*/
        v17 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x63688d*/
        if ( v17 ) /*0x636897*/
          *v17 = 0; /*0x636899*/
        else
          v17 = 0; /*0x63689e*/
        qmemcpy(v17, v30, 0x6Cu); /*0x6368ab*/
        *((_WORD *)v17 + 54) = v31; /*0x6368ad*/
        v17[110] = v32; /*0x6368af*/
        v16[1] = v17; /*0x6368b0*/
        v18 = *(_DWORD *)(v8 + 8); /*0x6368b3*/
        if ( *(_DWORD *)(v8 + 16) < v18 /*0x6368d7*/
          || (*(_BYTE *)(v8 + 13) || !v18)
          && (v19 = *(_DWORD *)(v8 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 8))(v8, v18 + v19, 0) )
        {
          v20 = *(_DWORD *)(v8 + 16); /*0x6368de*/
          v21 = *(_DWORD *)(v8 + 4); /*0x6368e1*/
          *(_DWORD *)(v8 + 16) = v20 + 1; /*0x6368e7*/
          *(_DWORD *)(v21 + 4 * v20) = v16; /*0x6368ea*/
        }
        Type = BuildingClass::GetType((BuildingClass *)a2); /*0x6368f9*/
        v23 = *(_DWORD *)(Type + 12); /*0x6368fb*/
        if ( *(_DWORD *)(Type + 20) < v23 /*0x636923*/
          || (*(_BYTE *)(Type + 17) || !v23)
          && (v24 = *(_DWORD *)(Type + 24), v24 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v23 + v24, 0) )
        {
          v25 = *(_DWORD *)(Type + 20); /*0x63692a*/
          v26 = *(_DWORD *)(Type + 8); /*0x63692d*/
          *(_DWORD *)(Type + 20) = v25 + 1; /*0x636933*/
          *(_DWORD *)(v26 + 4 * v25) = v8; /*0x636936*/
        }
        if ( *(_DWORD *)(Type + 140) == -1 ) /*0x636940*/
          *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x636946*/
        ScriptAction::PlaceObject(v8, v16); /*0x63694f*/
        result = ++v27; /*0x63695c*/
        if ( v27 >= a3 + a4 ) /*0x636963*/
          break; /*0x636963*/
        v4 = this; /*0x6367f6*/
      }
    }
  }
  return result; /*0x63696c*/
}



// ==== 0x00636980  TeamClass::ProcessScriptActions  this=TeamClass  sig=csp ====
int __thiscall TeamClass::ProcessScriptActions(TeamClass *this, _DWORD *a2, int a3)
{
  TeamClass *v3; // ebx
  int v4; // edi
  int result; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  void ***v9; // edx
  int v10; // eax
  _BYTE *v11; // esi
  _BYTE *WaypointCoords; // eax
  int v13; // eax
  _DWORD *v14; // ebx
  _BYTE *v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int Type; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // [esp+10h] [ebp-84h]
  int v27; // [esp+18h] [ebp-7Ch]
  _BYTE v28[8]; // [esp+1Ch] [ebp-78h] BYREF
  _BYTE v29[108]; // [esp+24h] [ebp-70h] BYREF
  __int16 v30; // [esp+90h] [ebp-4h]
  char v31; // [esp+92h] [ebp-2h]

  v3 = this; /*0x636987*/
  v4 = this->? - a3; /*0x6369a0*/
  result = BuildingClass::GetType((BuildingClass *)a2); /*0x6369a2*/
  if ( result ) /*0x6369a9*/
  {
    v25 = a3; /*0x6369b1*/
    v27 = a3 + v4; /*0x6369b7*/
    if ( a3 < a3 + v4 ) /*0x6369bb*/
    {
      while ( 1 ) /*0x6369d1*/
      {
        v6 = *((_DWORD *)v3->? + v25); /*0x6369d1*/
        v7 = 0; /*0x6369d4*/
        v8 = *(_DWORD *)(v6 + 16); /*0x6369d6*/
        if ( v8 <= 0 ) /*0x6369db*/
          goto LABEL_11; /*0x6369db*/
        v9 = *(void ****)(v6 + 4); /*0x6369e0*/
        while ( **v9 != v3->AbstractClass ) /*0x6369e6*/
        {
          ++v7; /*0x6369e8*/
          ++v9; /*0x6369e9*/
          if ( v7 >= v8 ) /*0x6369ee*/
          {
            v10 = 0; /*0x6369f0*/
            goto LABEL_13; /*0x6369f2*/
          }
        }
        if ( v7 == -1 ) /*0x6369f7*/
LABEL_11:
          v10 = 0; /*0x6369f9*/
        else
          v10 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7); /*0x6369fd*/
LABEL_13:
        v11 = *(_BYTE **)(v10 + 4); /*0x636a00*/
        qmemcpy(v29, v11, sizeof(v29)); /*0x636a13*/
        v11 += 108; /*0x636a13*/
        v30 = *(_WORD *)v11; /*0x636a15*/
        v31 = v11[2]; /*0x636a1c*/
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v28, a2); /*0x636a1d*/
        *(_DWORD *)&v29[7] = *(_DWORD *)WaypointCoords; /*0x636a26*/
        v29[11] = WaypointCoords[4]; /*0x636a2d*/
        v13 = __2_YAPAXI_Z(0x10u); /*0x636a31*/
        v14 = 0; /*0x636a36*/
        if ( v13 ) /*0x636a3d*/
        {
          *(_DWORD *)v13 = 0; /*0x636a3f*/
          *(_DWORD *)(v13 + 4) = 0; /*0x636a41*/
          *(_BYTE *)(v13 + 12) = 0; /*0x636a44*/
          *(_DWORD *)(v13 + 8) = -1; /*0x636a47*/
          v14 = (_DWORD *)v13; /*0x636a4e*/
        }
        *v14 = a2; /*0x636a59*/
        v15 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x636a5b*/
        if ( v15 ) /*0x636a65*/
          *v15 = 0; /*0x636a67*/
        else
          v15 = 0; /*0x636a6c*/
        qmemcpy(v15, v29, 0x6Cu); /*0x636a79*/
        *((_WORD *)v15 + 54) = v30; /*0x636a7b*/
        v15[110] = v31; /*0x636a7d*/
        v14[1] = v15; /*0x636a7e*/
        v16 = *(_DWORD *)(v6 + 8); /*0x636a81*/
        if ( *(_DWORD *)(v6 + 16) < v16 /*0x636aa5*/
          || (*(_BYTE *)(v6 + 13) || !v16)
          && (v17 = *(_DWORD *)(v6 + 20), v17 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v16 + v17, 0) )
        {
          v18 = *(_DWORD *)(v6 + 16); /*0x636aac*/
          v19 = *(_DWORD *)(v6 + 4); /*0x636aaf*/
          *(_DWORD *)(v6 + 16) = v18 + 1; /*0x636ab5*/
          *(_DWORD *)(v19 + 4 * v18) = v14; /*0x636ab8*/
        }
        Type = BuildingClass::GetType((BuildingClass *)a2); /*0x636ac7*/
        v21 = *(_DWORD *)(Type + 12); /*0x636ac9*/
        if ( *(_DWORD *)(Type + 20) < v21 /*0x636af1*/
          || (*(_BYTE *)(Type + 17) || !v21)
          && (v22 = *(_DWORD *)(Type + 24), v22 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v21 + v22, 0) )
        {
          v23 = *(_DWORD *)(Type + 20); /*0x636af8*/
          v24 = *(_DWORD *)(Type + 8); /*0x636afb*/
          *(_DWORD *)(Type + 20) = v23 + 1; /*0x636b01*/
          *(_DWORD *)(v24 + 4 * v23) = v6; /*0x636b04*/
        }
        if ( *(_DWORD *)(Type + 140) == -1 ) /*0x636b0e*/
          *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x636b14*/
        ScriptAction::PlaceObject(v6, v14); /*0x636b1d*/
        result = ++v25; /*0x636b2a*/
        if ( v25 >= v27 ) /*0x636b31*/
          break; /*0x636b31*/
        v3 = this; /*0x6369c4*/
      }
    }
  }
  return result; /*0x636b38*/
}



// ==== 0x00636B50  TeamClass::Cleanup  this=TeamClass  sig=csp ====
int __thiscall TeamClass::Cleanup(TeamClass *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int Value; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int result; // eax
  int v15; // ecx
  void *Block; // [esp+8h] [ebp-4h] BYREF

  if ( this->? == 1 ) /*0x636b59*/
  {
    this->countObjects[1] = -1; /*0x636b5b*/
LABEL_3:
    v3 = a2; /*0x636b65*/
    goto LABEL_4; /*0x636b65*/
  }
  v6 = this->countObjects[1]; /*0x636b84*/
  if ( v6 <= 0 ) /*0x636b8c*/
    goto LABEL_3; /*0x636b8c*/
  v3 = a2; /*0x636b8e*/
  if ( a2 < v6 ) /*0x636b94*/
    this->countObjects[1] = v6 - 1; /*0x636b97*/
LABEL_4:
  v4 = this->countObjects[3]; /*0x636b69*/
  v5 = 0; /*0x636b70*/
  if ( v4 >= 0 ) /*0x636b75*/
  {
    if ( v3 >= v4 ) /*0x636b79*/
    {
      v7 = this->countObjects[2] - 1; /*0x636ba6*/
      this->countObjects[2] = v7; /*0x636ba8*/
      if ( v7 < 3 ) /*0x636bb1*/
      {
        this->countObjects[3] = -1; /*0x636bb3*/
        this->countObjects[2] = 0; /*0x636bbd*/
      }
    }
    else
    {
      this->countObjects[3] = v4 - 1; /*0x636b7c*/
    }
  }
  v8 = *((_DWORD *)this->? + v3); /*0x636bc6*/
  Value = Array::FindValue((Array *)v8, (int)this->AbstractClass); /*0x636bce*/
  if ( Value != -1 ) /*0x636bd6*/
    v5 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * Value); /*0x636bdb*/
  Block = (void *)v5; /*0x636be0*/
  if ( v5 ) /*0x636be4*/
  {
    if ( *(_BYTE *)(v5 + 12) ) /*0x636bea*/
      ScriptAction::DecrementRefCount((ScriptAction *)v8, v5); /*0x636bf4*/
    v10 = *(_DWORD *)(v5 + 8); /*0x636bf9*/
    if ( v10 != -1 ) /*0x636bff*/
    {
      v11 = *(_DWORD *)(*(_DWORD *)(v8 + 36) + 4 * v10); /*0x636c08*/
      *(_DWORD *)(v11 + 116) = -1; /*0x636c0b*/
      TeamClass::Reset((TeamClass *)v8, 0); /*0x636c12*/
      v12 = *(_DWORD *)(v11 + 112) - 1; /*0x636c1a*/
      *(_DWORD *)(v11 + 112) = v12; /*0x636c1b*/
      if ( !v12 ) /*0x636c1e*/
        ScriptQueue::PushEntry((ScriptQueue *)v8); /*0x636c22*/
      v3 = a2; /*0x636c27*/
    }
    *(_DWORD *)(v5 + 8) = -1; /*0x636c2b*/
    __3_YAXPAX_Z(*((void **)Block + 1)); /*0x636c3a*/
    v13 = (*(int (__thiscall **)(int, void **))(*(_DWORD *)v8 + 16))(v8, &Block); /*0x636c4b*/
    if ( v13 != -1 ) /*0x636c51*/
      Vector4::EraseAt_Copy((Vector4 *)v8, v13); /*0x636c56*/
    __3_YAXPAX_Z(Block); /*0x636c60*/
    if ( !*(_DWORD *)(v8 + 16) && v8 ) /*0x636c71*/
    {
      FactoryClass::ClearObjects((FactoryClass *)v8); /*0x636c75*/
      Team_Remove((ObjectClass *)v8); /*0x636c7c*/
      *(_DWORD *)(v8 + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x636c84*/
      VectorClass::Cleanup2(v8 + 32); /*0x636c8a*/
      *(_DWORD *)v8 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x636c91*/
      VectorClass_ptr_PlanningMemberClass::Remove((_VectorClass_PAVPlanningMemberClass *)v8); /*0x636c97*/
      __3_YAXPAX_Z((void *)v8); /*0x636c9d*/
    }
  }
  result = this->?; /*0x636ca5*/
  if ( v3 < result ) /*0x636cac*/
  {
    v15 = result - 1; /*0x636cae*/
    result = v3; /*0x636cb1*/
    for ( this->? = v15; result < this->?; *((_DWORD *)this->? + result - 1) = *((_DWORD *)this->? + result) ) /*0x636cb8*/
      ++result; /*0x636cbd*/
  }
  return result; /*0x636ccc*/
}



// ==== 0x00636CE0  ScriptAction::ClearBuildingState  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::ClearBuildingState(ScriptAction *this)
{
  void *ScriptAction_field_0x94; // eax
  _DWORD *v2; // edx
  int v3; // esi
  int i; // eax
  int ScriptAction_field_0x14; // ebp
  int result; // eax
  int j; // ebx
  _DWORD *v8; // edx
  int v9; // esi
  int v10; // [esp+10h] [ebp-4h]

  if ( LOBYTE(this->ScriptAction_field_0x98) ) /*0x636ce1*/
  {
    ScriptAction_field_0x94 = this->ScriptAction_field_0x94; /*0x636cf2*/
    if ( ScriptAction_field_0x94 != (void *)-1 ) /*0x636cfa*/
    {
      v2 = *(_DWORD **)(this->ScriptAction_field_0x8[0] + 4 * (_DWORD)ScriptAction_field_0x94); /*0x636cff*/
      if ( v2 ) /*0x636d04*/
      {
        v2[45] = -1; /*0x636d06*/
        v3 = v2[12]; /*0x636d0c*/
        for ( i = 0; i < v3; *(_DWORD *)(*(_DWORD *)(v2[9] + 4 * i - 4) + 116) = -1 ) /*0x636d13*/
          ++i; /*0x636d18*/
        v2[43] = -1; /*0x636d24*/
      }
    }
    LOBYTE(this->ScriptAction_field_0x98) = 0; /*0x636d2a*/
  }
  ScriptAction_field_0x14 = this->ScriptAction_field_0x14; /*0x636d37*/
  v10 = ScriptAction_field_0x14; /*0x636d3c*/
  result = this->ScriptAction_field_0x8C != (void *)-1 ? (int)this->ScriptAction_field_0x8C : 0;
  for ( j = result; j < ScriptAction_field_0x14; ++j ) /*0x636d4b*/
  {
    result = this->ScriptAction_field_0x8[0]; /*0x636d4d*/
    v8 = *(_DWORD **)(result + 4 * j); /*0x636d50*/
    if ( v8 ) /*0x636d55*/
    {
      v8[45] = -1; /*0x636d57*/
      v9 = v8[12]; /*0x636d5d*/
      result = 0; /*0x636d60*/
      if ( v9 > 0 ) /*0x636d64*/
      {
        do /*0x636d73*/
        {
          ++result; /*0x636d69*/
          *(_DWORD *)(*(_DWORD *)(v8[9] + 4 * result - 4) + 116) = -1; /*0x636d70*/
        }
        while ( result < v9 ); /*0x636d73*/
        ScriptAction_field_0x14 = v10; /*0x636d75*/
      }
      v8[43] = -1; /*0x636d79*/
    }
  }
  this->ScriptAction_field_0x8C = (void *)-1; /*0x636d84*/
  return result; /*0x636d8a*/
}



// ==== 0x00636D90  ObjectClass::?GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ(
        Concurrency::details::VirtualProcessor *this)
{
  return this->onBridge; /*0x636d96*/
}



// ==== 0x00636DC0  FactoryClass::GetState  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::GetState(FactoryClass *this)
{
  return this->?; /*0x636dc3*/
}



// ==== 0x00636E60  ArrayClass::GetAt_Wrap  this=ScriptAction  sig=csp ====
int __thiscall ArrayClass::GetAt_Wrap(ArrayClass *this, int a2)
{
  void *v2; // edi
  int v3; // eax
  void *v4; // esi

  v2 = this->field_14; /*0x636e62*/
  if ( !v2 ) /*0x636e67*/
    return 0; /*0x636e67*/
  v3 = a2; /*0x636e69*/
  if ( a2 >= (int)v2 ) /*0x636e6f*/
  {
    v4 = this->field_94; /*0x636e71*/
    if ( (int)v4 < 0 ) /*0x636e79*/
      return 0; /*0x636e79*/
    v3 = (int)v4 + (a2 - (int)v4) % *(_DWORD *)&this->__pad_18[120]; /*0x636e88*/
  }
  if ( v3 >= 0 && v3 < (int)v2 ) /*0x636e90*/
    return *((_DWORD *)this->field_8 + v3); /*0x636e9a*/
  return 0; /*0x636e95*/
}



// ==== 0x00636EB0  ObjectClass::ExecuteActionPlanManager_Helper_636EB0  this=ObjectClass  sig=csp ====
int __thiscall ExecuteActionPlanManager_Helper_636EB0(ObjectClass *this)
{
  int v1; // eax

  v1 = this->? - 1; /*0x636eb3*/
  if ( v1 >= 0 ) /*0x636eb4*/
    return *((_DWORD *)this->? + v1); /*0x636ebc*/
  else
    return 0; /*0x636eb6*/
}



// ==== 0x00636F00  ObjectClass::method_636F00  this=ObjectClass  sig=csp ====
int __thiscall sub_636F00(ObjectClass *this, int a2, int a3)
{
  _DWORD *vtable2; // eax
  void *vtable0; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // edx
  void ***v8; // esi
  void ***v9; // edi
  void **v10; // eax
  _BYTE *v11; // esi

  vtable2 = this->?; /*0x636f00*/
  vtable0 = this->AbstractClass; /*0x636f08*/
  v5 = vtable2[a3]; /*0x636f0b*/
  v6 = 0; /*0x636f0e*/
  v7 = *(_DWORD *)(v5 + 16); /*0x636f11*/
  if ( v7 <= 0 ) /*0x636f16*/
    goto LABEL_7; /*0x636f16*/
  v8 = *(void ****)(v5 + 4); /*0x636f18*/
  v9 = v8; /*0x636f1b*/
  while ( **v9 != vtable0 ) /*0x636f21*/
  {
    ++v6; /*0x636f23*/
    ++v9; /*0x636f24*/
    if ( v6 >= v7 ) /*0x636f29*/
    {
      v10 = 0; /*0x636f2b*/
      goto LABEL_9; /*0x636f2d*/
    }
  }
  if ( v6 == -1 ) /*0x636f32*/
LABEL_7:
    v10 = 0; /*0x636f34*/
  else
    v10 = v8[v6]; /*0x636f38*/
LABEL_9:
  v11 = v10[1]; /*0x636f3b*/
  qmemcpy((void *)a2, v11, 0x6Cu); /*0x636f49*/
  v11 += 108; /*0x636f49*/
  *(_WORD *)(a2 + 108) = *(_WORD *)v11; /*0x636f4b*/
  *(_BYTE *)(a2 + 110) = v11[2]; /*0x636f4d*/
  return a2; /*0x636f4e*/
}



// ==== 0x00636FA0  ObjectClass::method_636FA0  this=ObjectClass  sig=csp ====
int __thiscall sub_636FA0(int this, int a2, int a3)
{
  *(_DWORD *)(this + 144) = a2; /*0x636fa8*/
  *(_DWORD *)(this + 148) = a3; /*0x636fae*/
  *(_BYTE *)(this + 152) = 1; /*0x636fb4*/
  return a2; /*0x636fbb*/
}



// ==== 0x00636FC0  ObjectClass::?GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ(
        Concurrency::details::VirtualProcessor *this)
{
  return this->objectTypeFlags; /*0x636fc6*/
}



// ==== 0x00636FD0  ObjectClass::method_636FD0  this=ObjectClass  sig=csp ====
int __thiscall sub_636FD0(ObjectClass *this)
{
  return this->lastLayer; /*0x636fd6*/
}



// ==== 0x00637020  ObjectClass::?WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ  this=ObjectClass  sig=csp ====
bool __thiscall _WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ(
        Concurrency::details::ExternalContextBase *this)
{
  return this->isInLogic; /*0x637026*/
}



// ==== 0x00637030  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_637030(ObjectClass *this)
{
  return this->isVisible; /*0x637036*/
}



// ==== 0x00637060  TabClass::processTabInput  this=TabClass  sig=csp ====
void __thiscall TabClass::processTabInput(TabClass *this)
{
  *(_DWORD *)&stru_AC4B30.__pad_48[8] = this; /*0x637060*/
}



// ==== 0x00637070  WinMain_Helper_637070  this=-  sig=ida-proto ====
int sub_637070()
{
  byte_AC4CF4 = 0; /*0x637074*/
  byte_AC4CF5 = 0; /*0x637079*/
  dword_AC4CCC = 0; /*0x63707e*/
  dword_AC4C38 = 0; /*0x637083*/
  dword_AC4BF0 = 0; /*0x637088*/
  dword_AC4C68 = 0; /*0x63708d*/
  dword_AC4C6C = 0; /*0x637092*/
  byte_AC4CB0 = 0; /*0x637098*/
  return 0; /*0x63709d*/
}



// ==== 0x006370A0  j_PlanningNodeClass_CleanupAll  this=-  sig=ida-proto ====
// attributes: thunk
void *j_PlanningNodeClass_CleanupAll()
{
  return PlanningNodeClass::CleanupAll();
}



// ==== 0x006370B0  PlanningNodeClass::CleanupAll  this=PlanningNodeClass  sig=ida-proto ====
void *PlanningNodeClass_CleanupAll()
{
  int v0; // ebp
  int v1; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  void *result; // eax
  _DWORD *v5; // [esp+Ch] [ebp-4h] BYREF

  v0 = dword_AC4C88; /*0x6370b3*/
  v1 = 0; /*0x6370bc*/
  byte_AC4CF5 = 1; /*0x6370c0*/
  byte_AC4CF4 = 0; /*0x6370c7*/
  for ( byte_AC4CF6 = 0; v1 < v0; ++v1 ) /*0x6370d3*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_AC4C7C + v1); /*0x6370db*/
    if ( v2 ) /*0x6370e0*/
    {
      if ( *v2 ) /*0x6370e2*/
        BuildingClass::SetType((_DWORD *)*v2, 0); /*0x6370e9*/
      v5 = v2; /*0x6370f3*/
      if ( !byte_AC4CF5 ) /*0x6370f9*/
        PlanningNodeClass::RemoveFromArray(&v5); /*0x637105*/
      TeamClass::RemoveAllMembers(v2); /*0x63710c*/
      v3 = (void *)v2[2]; /*0x637111*/
      v2[1] = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x637114*/
      if ( v3 && *((_BYTE *)v2 + 17) ) /*0x63711f*/
      {
        __3_YAXPAX_Z(v3); /*0x637125*/
        v2[2] = 0; /*0x63712d*/
      }
      *((_BYTE *)v2 + 17) = 0; /*0x637131*/
      v2[3] = 0; /*0x637134*/
      __3_YAXPAX_Z(v2); /*0x637137*/
    }
  }
  MEMORY[0xAC4C50] = 0; /*0x637151*/
  memset(&dword_AC4B84, 0, 0x60u); /*0x637157*/
  if ( MEMORY[0xAC4C44] && MEMORY[0xAC4C4D] ) /*0x637168*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC4C44]); /*0x63716b*/
    MEMORY[0xAC4C44] = 0; /*0x637173*/
  }
  MEMORY[0xAC4C4D] = 0; /*0x63717e*/
  MEMORY[0xAC4C48] = 0; /*0x637186*/
  dword_AC4C88 = 0; /*0x63718c*/
  if ( dword_AC4C7C && byte_AC4C85 ) /*0x63719a*/
  {
    __3_YAXPAX_Z(dword_AC4C7C); /*0x63719d*/
    dword_AC4C7C = 0; /*0x6371a5*/
  }
  byte_AC4C85 = 0; /*0x6371b0*/
  dword_AC4C80 = 0; /*0x6371b8*/
  dword_AC4B40 = 0; /*0x6371be*/
  if ( dword_AC4B34 && byte_AC4B3D ) /*0x6371cc*/
  {
    __3_YAXPAX_Z(dword_AC4B34); /*0x6371cf*/
    dword_AC4B34 = 0; /*0x6371d7*/
  }
  result = dword_AC4C1C; /*0x6371dd*/
  byte_AC4B3D = 0; /*0x6371e2*/
  dword_AC4B38 = 0; /*0x6371ea*/
  dword_AC4C28 = 0; /*0x6371f0*/
  if ( dword_AC4C1C && byte_AC4C25 ) /*0x6371fe*/
  {
    __3_YAXPAX_Z(dword_AC4C1C); /*0x637201*/
    dword_AC4C1C = 0; /*0x637209*/
  }
  dword_AC4BF4 = 0; /*0x637212*/
  byte_AC4C25 = 0; /*0x637218*/
  dword_AC4BF8 = 0; /*0x63721e*/
  dword_AC4C20 = 0; /*0x637224*/
  dword_AC4BFC = 0; /*0x63722a*/
  dword_AC4CCC = 0; /*0x637230*/
  dword_AC4C00 = 0; /*0x637236*/
  byte_AC4CD0 = 0; /*0x63723c*/
  byte_AC4CC8 = 0; /*0x637242*/
  dword_AC4C3C = 0; /*0x637248*/
  byte_AC4C08 = 0; /*0x63724e*/
  byte_AC4CF5 = 0; /*0x637254*/
  dword_AC4C90 = -1; /*0x63725b*/
  dword_AC4C04 = 0; /*0x637265*/
  return result; /*0x637211*/
}



// ==== 0x00637270  ObjectClass::ExecutePlanningQueue  this=ObjectClass  sig=csp ====
char ExecutePlanningQueue(TechnoClass *this)
{
  SuperWeaponClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  TeamClass *v4; // ebp
  int v5; // ebx
  Array *v6; // esi
  int Value; // eax
  int v8; // eax
  _BYTE *v9; // esi
  BuildingLoadQueue *v10; // ecx
  int abstractFlags; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int Type; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // esi
  int v22; // ebp
  int i; // edi
  bool v24; // cc
  char result; // al
  int v26; // esi
  wchar_t *v27; // eax
  wchar_t *StringCSF; // eax
  SuperWeaponClass *v29; // [esp-Ch] [ebp-90h]
  ObjectClass *v30; // [esp+4h] [ebp-80h]
  int v31; // [esp+4h] [ebp-80h]
  BuildingClass *vtable0; // [esp+8h] [ebp-7Ch]
  int v33; // [esp+Ch] [ebp-78h] BYREF
  int v34; // [esp+10h] [ebp-74h]
  _BYTE v35[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v36; // [esp+80h] [ebp-4h]
  char v37; // [esp+82h] [ebp-2h]

  SelectScriptNode(v30); /*0x637276*/
  v2 = 0; /*0x637281*/
  if ( dword_AC4BF0 && (int)dword_A8ECC8 > 0 ) /*0x63728d*/
    dword_AC4BF0 = 0; /*0x63728f*/
  v3 = dword_AC4C88; /*0x637294*/
  v29 = v1; /*0x63729f*/
  v34 = dword_AC4C88; /*0x6372a0*/
  v31 = 0; /*0x6372a4*/
  if ( dword_AC4C88 <= 0 ) /*0x6372a8*/
    goto LABEL_37; /*0x6372a8*/
  do /*0x6373e5*/
  {
    v4 = (TeamClass *)*((_DWORD *)dword_AC4C7C + v2); /*0x6372b4*/
    v5 = v4->abstractFlags - 1; /*0x6372bd*/
    vtable0 = (BuildingClass *)v4->vtable0; /*0x6372be*/
    if ( v5 < 0 ) /*0x6372c2*/
      goto LABEL_36; /*0x6372c2*/
    do /*0x6373d0*/
    {
      v6 = *(Array **)(v4->vtable2 + 4 * v5); /*0x6372cb*/
      Value = Array::FindValue(v6, v4->vtable0); /*0x6372d4*/
      if ( Value == -1 ) /*0x6372dc*/
        v8 = 0; /*0x6372de*/
      else
        v8 = *(_DWORD *)(v6->Array_field_0x4 + 4 * Value); /*0x6372e5*/
      v9 = *(_BYTE **)(v8 + 4); /*0x6372e8*/
      qmemcpy(v35, v9, sizeof(v35)); /*0x6372f4*/
      v9 += 108; /*0x6372f4*/
      v36 = *(_WORD *)v9; /*0x6372f6*/
      v37 = v9[2]; /*0x6372f8*/
      if ( v35[0] == 4 ) /*0x6372fe*/
      {
        if ( v35[18] ) /*0x637306*/
        {
          v10 = (BuildingLoadQueue *)&v35[14]; /*0x637308*/
        }
        else
        {
          if ( !v35[23] ) /*0x637314*/
            goto LABEL_15; /*0x637314*/
          v10 = (BuildingLoadQueue *)&v35[19]; /*0x637316*/
        }
        if ( BuildingLoadQueue::GetNext(v10) ) /*0x63731a*/
          goto LABEL_34; /*0x637326*/
      }
LABEL_15:
      abstractFlags = v4->abstractFlags; /*0x63732c*/
      v12 = v5; /*0x63732f*/
      if ( !abstractFlags ) /*0x637333*/
        goto LABEL_22; /*0x637333*/
      if ( v5 >= abstractFlags ) /*0x637337*/
      {
        v13 = v4->countObjects[3]; /*0x637339*/
        if ( v13 < 0 ) /*0x637341*/
          goto LABEL_22; /*0x637341*/
        v12 = v13 + (v5 - v13) % v4->countObjects[2]; /*0x637350*/
      }
      if ( v12 < 0 || v12 >= abstractFlags ) /*0x637358*/
      {
LABEL_22:
        v14 = 0; /*0x637362*/
        goto LABEL_23; /*0x637362*/
      }
      v14 = *(_DWORD *)(v4->vtable2 + 4 * v12); /*0x63735d*/
LABEL_23:
      Type = BuildingClass::GetType(vtable0); /*0x637364*/
      v33 = v14; /*0x637374*/
      v16 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(Type + 4) + 16))(Type + 4, &v33); /*0x63737e*/
      if ( v16 == -1 ) /*0x637384*/
      {
        v17 = 0; /*0x637386*/
      }
      else
      {
        v18 = *(_DWORD *)(Type + 20); /*0x63738a*/
        if ( v18 == 1 ) /*0x637390*/
        {
          v17 = v14; /*0x637392*/
        }
        else
        {
          v19 = v16 + 1; /*0x637396*/
          if ( v19 >= v18 ) /*0x637399*/
            v19 = 0; /*0x63739b*/
          v17 = ArrayClass::GetAt_Wrap((ArrayClass *)Type, v19); /*0x6373a0*/
        }
      }
      v33 = v17; /*0x6373a7*/
      if ( v17 && !*(_BYTE *)(v17 + 28) ) /*0x6373ad*/
      {
        *(_BYTE *)(v17 + 28) = 1; /*0x6373b8*/
        VectorClass::Append((DynamicVectorClass *)&dword_AC4C98, &v33); /*0x6373c2*/
      }
      TeamClass::Cleanup(v4, v5); /*0x6373ca*/
LABEL_34:
      --v5; /*0x6373cf*/
    }
    while ( v5 >= 0 ); /*0x6373d0*/
    v3 = v34; /*0x6373d6*/
    v2 = v31; /*0x6373da*/
LABEL_36:
    v31 = ++v2; /*0x6373e1*/
  }
  while ( v2 < v3 ); /*0x6373e5*/
LABEL_37:
  v20 = 0; /*0x6373eb*/
  v34 = dword_AC4CA8; /*0x6373f4*/
  if ( dword_AC4CA8 > 0 ) /*0x6373f8*/
  {
    do /*0x637438*/
    {
      v21 = *((_DWORD *)dword_AC4C9C + v20); /*0x637400*/
      FactoryClass::ClearObjects((FactoryClass *)v21); /*0x637405*/
      v22 = *(_DWORD *)(v21 + 16); /*0x63740a*/
      for ( i = 0; i < v22; ++i ) /*0x637411*/
        ScriptAction::PlaceObject(v21, *(_DWORD **)(*(_DWORD *)(v21 + 4) + 4 * i)); /*0x63741c*/
      ScriptAction::FindSquadMember((ScriptAction *)v21); /*0x637428*/
      v24 = ++v20 < v34; /*0x637432*/
      *(_BYTE *)(v21 + 28) = 0; /*0x637434*/
    }
    while ( v24 ); /*0x637438*/
  }
  dword_AC4CA8 = 0; /*0x63743f*/
  BlowPipe_23::Clear_1((_VectorClass_PAVPlanningNodeClass *)&dword_AC4C98); /*0x637449*/
  v26 = dword_AC4C90; /*0x63744e*/
  if ( dword_AC4C90 != -1 ) /*0x637457*/
  {
    result = SuperWeaponClass::UpdateAll(v29); /*0x637463*/
    if ( v26 ) /*0x63746a*/
    {
      if ( v26 == 1 ) /*0x6374c2*/
      {
        result = byte_AC4C08; /*0x6374c4*/
        if ( !byte_AC4C08 ) /*0x6374cb*/
        {
          byte_AC4C08 = 1; /*0x6374de*/
          StringCSF = GetStringCSF(g_Str_MSG_PostContinualCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6374e5*/
          AddMessageListPlayerMessage(StringCSF, 480); /*0x6374f1*/
          result = PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000, 1.0, 0); /*0x63750e*/
        }
      }
      else if ( v26 == 2 ) /*0x637518*/
      {
        result = PlanManager::Notify((PlanManager *)g_Str_MSG_NodeMaximum); /*0x63751f*/
      }
    }
    else
    {
      result = byte_AC4C08; /*0x63746c*/
      if ( !byte_AC4C08 ) /*0x637473*/
      {
        byte_AC4C08 = 1; /*0x63748a*/
        v27 = GetStringCSF(g_Str_MSG_PostTerminatingCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x637491*/
        AddMessageListPlayerMessage(v27, 480); /*0x63749d*/
        result = PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000, 1.0, 0); /*0x6374b8*/
      }
    }
    dword_AC4C90 = -1; /*0x637524*/
  }
  byte_AC4CD0 = 0; /*0x637531*/
  byte_AC4CC8 = 0; /*0x637538*/
  byte_AC4C08 = 0; /*0x63753f*/
  return result; /*0x637547*/
}



// ==== 0x00637550  ObjectClass::FlushPlanningQueue  this=ObjectClass  sig=csp ====
void __usercall FlushPlanningQueue(ObjectClass *this)
{
  int i; // esi
  void *v2; // edi
  int v3; // eax

  for ( i = *(_DWORD *)&stru_AC4B30.__pad_14[20] - 1; i >= 0; --i ) /*0x63755b*/
  {
    v2 = *(void **)(*(_DWORD *)&stru_AC4B30.__pad_14[8] + 4 * i); /*0x637564*/
    Render_Show((int)v2); /*0x637569*/
    if ( i < *(int *)&stru_AC4B30.__pad_14[20] ) /*0x637576*/
    {
      v3 = i; /*0x637579*/
      --*(_DWORD *)&stru_AC4B30.__pad_14[20]; /*0x63757d*/
      if ( i < *(int *)&stru_AC4B30.__pad_14[20] ) /*0x637583*/
      {
        do /*0x63759b*/
        {
          ++v3; /*0x63758b*/
          *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_14[8] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_14[8] /*0x63758f*/
                                                                                    + 4 * v3);
        }
        while ( v3 < *(int *)&stru_AC4B30.__pad_14[20] ); /*0x63759b*/
      }
    }
    __3_YAXPAX_Z(v2); /*0x63759e*/
  }
}



// ==== 0x006375B0  ObjectClass::method_6375B0  this=ObjectClass  sig=csp ====
int __thiscall sub_6375B0(ObjectClass *this)
{
  _BYTE *v2; // eax
  _BYTE *v3; // ebx
  int *p_health; // esi
  int result; // eax

  v2 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x6375b6*/
  if ( v2 ) /*0x6375c0*/
  {
    *v2 = 0; /*0x6375c2*/
    v3 = v2; /*0x6375c5*/
  }
  else
  {
    v3 = 0; /*0x6375c9*/
  }
  qmemcpy(v3, this, 0x6Cu); /*0x6375d3*/
  p_health = &this->health; /*0x6375d3*/
  *((_WORD *)v3 + 54) = *(_WORD *)p_health; /*0x6375d5*/
  v3[110] = *((_BYTE *)p_health + 2); /*0x6375d7*/
  if ( *v3 == 4 ) /*0x6375dd*/
    v3[29] = 2; /*0x6375df*/
  result = *(_DWORD *)&stru_AC4B30.__pad_14[12]; /*0x6375e3*/
  if ( *(int *)&stru_AC4B30.__pad_14[20] < *(int *)&stru_AC4B30.__pad_14[12] /*0x63761e*/
    || (stru_AC4B30.__pad_14[17] || !*(_DWORD *)&stru_AC4B30.__pad_14[12])
    && (int)stru_AC4B30.Array_field_0x2C > 0
    && (result = (*(int (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_14[4] + 8))(
                   &stru_AC4B30.__pad_14[4],
                   (char *)stru_AC4B30.Array_field_0x2C + *(_DWORD *)&stru_AC4B30.__pad_14[12],
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&stru_AC4B30.__pad_14[20])++; /*0x637626*/
    *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_14[8] + 4 * result) = v3; /*0x637635*/
  }
  return result; /*0x637638*/
}



// ==== 0x00637640  ObjectClass::Team_Remove  this=ObjectClass  sig=csp ====
_UNKNOWN **__thiscall Team_Remove(ObjectClass *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  _UNKNOWN **result; // eax
  ObjectClass *v5; // [esp+Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h] BYREF

  v5 = this; /*0x637647*/
  v1 = (*(int (__thiscall **)(char *, ObjectClass **))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x637655*/
         &stru_AC4B30.__pad_EC[124],
         &v5);
  if ( v1 != -1 && v1 < *(int *)&stru_AC4B30.__pad_EC[140] ) /*0x637665*/
  {
    --*(_DWORD *)&stru_AC4B30.__pad_EC[140]; /*0x63766a*/
    for ( ; /*0x637670*/
          v1 < *(int *)&stru_AC4B30.__pad_EC[140];
          *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[128] + 4 * v1 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[128]
                                                                                      + 4 * v1) )
    {
      ++v1; /*0x637678*/
    }
  }
  v2 = (*(int (__thiscall **)(Array *, _UNKNOWN **))(*(_DWORD *)stru_AC4B30.__pad_0 + 16))(&stru_AC4B30, &retaddr); /*0x63769a*/
  if ( v2 != -1 && v2 < (int)stru_AC4B30.Array_field_0x10 ) /*0x6376aa*/
  {
    --stru_AC4B30.Array_field_0x10; /*0x6376af*/
    for ( ; /*0x6376b5*/
          v2 < (int)stru_AC4B30.Array_field_0x10;
          *((_DWORD *)stru_AC4B30.Array_field_0x4 + v2 - 1) = *((_DWORD *)stru_AC4B30.Array_field_0x4 + v2) )
    {
      ++v2; /*0x6376bd*/
    }
  }
  v5 = (ObjectClass *)&retaddr; /*0x6376d9*/
  v3 = (*((int (__thiscall **)(void **))stru_AC4B30.Array_field_0xE8 + 4))(&stru_AC4B30.Array_field_0xE8); /*0x6376df*/
  if ( v3 != -1 && v3 < *(int *)&stru_AC4B30.__pad_EC[12] ) /*0x6376ef*/
  {
    --*(_DWORD *)&stru_AC4B30.__pad_EC[12]; /*0x6376f4*/
    for ( ; /*0x6376fa*/
          v3 < *(int *)&stru_AC4B30.__pad_EC[12];
          *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC
                                                                                + 4 * v3) )
    {
      ++v3; /*0x637702*/
    }
  }
  result = (_UNKNOWN **)v5; /*0x637714*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_EC[176] == v5 ) /*0x637722*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[176] = 0; /*0x637724*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_EC[28] == v5 ) /*0x637730*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x637732*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_70[80] == v5 ) /*0x63773e*/
    *(_DWORD *)&stru_AC4B30.__pad_70[80] = 0; /*0x637740*/
  return result; /*0x637747*/
}



// ==== 0x00637840  TechnoClass::IsProductionChainActive  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::IsProductionChainActive(TechnoClass *this)
{
  int Type; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // ebx
  int i; // esi
  _DWORD *v6; // edx

  LOBYTE(Type) = stru_AC4B30.__pad_EC[218]; /*0x637840*/
  if ( !stru_AC4B30.__pad_EC[218] ) /*0x637847*/
  {
    LOBYTE(Type) = stru_AC4B30.__pad_EC[216]; /*0x637849*/
    stru_AC4B30.__pad_EC[218] = 1; /*0x637853*/
    if ( stru_AC4B30.__pad_EC[216] ) /*0x63785a*/
    {
      Type = BuildingClass::GetType((BuildingClass *)this); /*0x63785c*/
      if ( Type ) /*0x637863*/
      {
        v2 = *(_DWORD *)(Type + 20) - 1; /*0x637868*/
        if ( v2 >= 0 ) /*0x637869*/
        {
          Type = *(_DWORD *)(Type + 8); /*0x63786b*/
          v3 = *(_DWORD *)(Type + 4 * v2); /*0x63786e*/
          if ( v3 ) /*0x637873*/
          {
            v4 = *(_DWORD *)(v3 + 16); /*0x637875*/
            for ( i = 0; i < v4; ++i ) /*0x63787c*/
            {
              v6 = *(_DWORD **)(*(_DWORD *)(v3 + 4) + 4 * i); /*0x637881*/
              LOBYTE(Type) = *(_BYTE *)(*v6 + 131); /*0x637886*/
              if ( !(_BYTE)Type ) /*0x63788e*/
                LOBYTE(Type) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 332))(*v6); /*0x637892*/
            }
          }
        }
      }
    }
    stru_AC4B30.__pad_EC[218] = 0; /*0x63789f*/
  }
  return Type; /*0x6378a7*/
}



// ==== 0x006378B0  ScriptQueue::PushEntry  this=ScriptQueue  sig=csp ====
int __thiscall ScriptQueue::PushEntry(ScriptQueue *this)
{
  int result; // eax

  if ( this ) /*0x6378b5*/
  {
    LOBYTE(result) = *((_BYTE *)this + 28); /*0x6378b7*/
    if ( !(_BYTE)result ) /*0x6378bc*/
    {
      *((_BYTE *)this + 28) = 1; /*0x6378be*/
      result = *(_DWORD *)&stru_AC4B30.__pad_EC[132]; /*0x6378c2*/
      if ( *(int *)&stru_AC4B30.__pad_EC[140] < *(int *)&stru_AC4B30.__pad_EC[132] /*0x6378fb*/
        || (stru_AC4B30.__pad_EC[137] || !*(_DWORD *)&stru_AC4B30.__pad_EC[132])
        && *(int *)&stru_AC4B30.__pad_EC[144] > 0
        && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 8))(
                       &stru_AC4B30.__pad_EC[124],
                       *(_DWORD *)&stru_AC4B30.__pad_EC[132] + *(_DWORD *)&stru_AC4B30.__pad_EC[144],
                       0),
            (_BYTE)result) )
      {
        result = (*(_DWORD *)&stru_AC4B30.__pad_EC[140])++; /*0x637903*/
        *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[128] + 4 * result) = this; /*0x637912*/
      }
    }
  }
  return result; /*0x637915*/
}



// ==== 0x00637920  ObjectClass::CleanupFactoryClass  this=ObjectClass  sig=csp ====
void CleanupFactoryClass(ObjectClass *this)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // ebp
  int v5; // [esp+8h] [ebp-4h]

  v1 = 0; /*0x637928*/
  v2 = 0; /*0x63792a*/
  v5 = *(_DWORD *)&stru_AC4B30.__pad_EC[140]; /*0x63792e*/
  if ( *(int *)&stru_AC4B30.__pad_EC[140] > 0 ) /*0x637932*/
  {
    while ( 1 ) /*0x63793f*/
    {
      v3 = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[128] + 4 * v2); /*0x63793f*/
      FactoryClass::ClearObjects((FactoryClass *)v3); /*0x637944*/
      v4 = *(_DWORD *)(v3 + 16); /*0x637949*/
      if ( v4 > 0 ) /*0x63794e*/
      {
        do /*0x637961*/
          ScriptAction::PlaceObject(v3, *(_DWORD **)(*(_DWORD *)(v3 + 4) + 4 * v1++)); /*0x637959*/
        while ( v1 < v4 ); /*0x637961*/
      }
      ScriptAction::FindSquadMember((ScriptAction *)v3); /*0x637965*/
      ++v2; /*0x63796e*/
      *(_BYTE *)(v3 + 28) = 0; /*0x637971*/
      if ( v2 >= v5 ) /*0x637975*/
        break; /*0x637975*/
      v1 = 0; /*0x637938*/
    }
  }
  *(_DWORD *)&stru_AC4B30.__pad_EC[140] = 0; /*0x637980*/
  if ( *(_DWORD *)&stru_AC4B30.__pad_EC[128] && stru_AC4B30.__pad_EC[137] ) /*0x637992*/
  {
    __3_YAXPAX_Z(*(void **)&stru_AC4B30.__pad_EC[128]); /*0x637995*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[128] = 0; /*0x63799d*/
  }
  *(_DWORD *)&stru_AC4B30.__pad_EC[132] = 0; /*0x6379a3*/
  stru_AC4B30.__pad_EC[137] = 0; /*0x6379aa*/
}



// ==== 0x006379C0  ObjectClass::UI_Create_731A50_Create  this=ObjectClass  sig=csp ====
char UI_Create_731A50_Create(ObjectClass *this)
{
  char result; // al

  result = stru_AC4B30.__pad_EC[216]; /*0x6379c0*/
  if ( !stru_AC4B30.__pad_EC[216] ) /*0x6379c7*/
  {
    stru_AC4B30.__pad_EC[216] = 1; /*0x6379ce*/
    result = PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 468), 0x2000, 1.0, 0); /*0x6379e7*/
    if ( *(_DWORD *)&stru_AC4B30.__pad_48[8] ) /*0x6379f4*/
      return (***(char (__thiscall ****)(_DWORD, int, _DWORD))&stru_AC4B30.__pad_48[8])( /*0x6379ff*/
               *(_DWORD *)&stru_AC4B30.__pad_48[8],
               4551,
               0);
  }
  return result; /*0x637a01*/
}



// ==== 0x00637A10  ObjectClass::House_Play  this=ObjectClass  sig=csp ====
char sub_637A10()
{
  char result; // al
  _BYTE v1[108]; // [esp-70h] [ebp-ECh] BYREF
  int v2; // [esp-4h] [ebp-80h]
  char v3[108]; // [esp+Ch] [ebp-70h] BYREF
  __int16 v4; // [esp+78h] [ebp-4h]
  char v5; // [esp+7Ah] [ebp-2h]

  result = byte_AC4CF4; /*0x637a10*/
  if ( byte_AC4CF4 ) /*0x637a1f*/
  {
    EventClass::AddEvent(v3, *((_DWORD *)dword_A83D4C + 12), 0x2Bu); /*0x637a30*/
    qmemcpy(v1, v3, sizeof(v1)); /*0x637a43*/
    LOWORD(v2) = v4; /*0x637a45*/
    BYTE2(v2) = v5; /*0x637a47*/
    Network::RecordEvent( /*0x637a48*/
      *(__int64 *)v1,
      *(int *)&v1[8],
      *(int *)&v1[12],
      *(int *)&v1[16],
      *(int *)&v1[20],
      *(int *)&v1[24],
      *(int *)&v1[28],
      *(int *)&v1[32],
      *(int *)&v1[36],
      *(int *)&v1[40],
      *(int *)&v1[44],
      *(int *)&v1[48],
      *(int *)&v1[52],
      *(int *)&v1[56],
      *(int *)&v1[60],
      *(int *)&v1[64],
      *(int *)&v1[68],
      *(int *)&v1[72],
      *(int *)&v1[76],
      *(int *)&v1[80],
      *(int *)&v1[84],
      *(int *)&v1[88],
      *(int *)&v1[92],
      *(int *)&v1[96],
      *(int *)&v1[100],
      *(int *)&v1[104],
      v2);
    dword_AC4CCC = 0; /*0x637a52*/
    dword_AC4C38 = 0; /*0x637a58*/
    dword_AC4BF0 = 0; /*0x637a5e*/
    byte_AC4CF4 = 0; /*0x637a64*/
    result = PlayVocClass(dword_8871E0->EnterBioReactorSound, 0x2000, 1.0, 0); /*0x637a7b*/
    if ( dword_AC4B80 ) /*0x637a88*/
      return (**(int (__thiscall ***)(int, int, _DWORD))dword_AC4B80)(dword_AC4B80, 4552, 0); /*0x637a92*/
  }
  return result; /*0x637a94*/
}



// ==== 0x00637AA0  FactoryClass::GetFlag  this=FactoryClass  sig=csp ====
int FactoryClass::GetFlag()
{
  int result; // eax

  LOBYTE(result) = byte_AC4CF4; /*0x637aa0*/
  return result; /*0x637aa5*/
}



// ==== 0x00637AB0  SidebarClass::ResetProductionState  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::ResetProductionState(SidebarClass *this)
{
  int result; // eax
  BuildingClass *v2; // ebx
  HouseClass *owner; // ecx
  SidebarClass *relatedTagsCount; // esi
  int Type; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // edx
  int i; // eax
  int v12; // ebp
  int j; // edi
  TeamClass *v14; // ecx
  int v15; // esi
  char v16; // al
  _BYTE *WaypointCoords; // eax
  char v18; // al
  int v19; // eax
  int v20; // ebp
  int v21; // eax
  _BYTE *v22; // eax
  bool v23; // [esp+7h] [ebp-101h]
  _BYTE *v24; // [esp+8h] [ebp-100h] BYREF
  int v25; // [esp+Ch] [ebp-FCh]
  int v26; // [esp+10h] [ebp-F8h]
  SidebarClass *v27; // [esp+14h] [ebp-F4h]
  int v28; // [esp+18h] [ebp-F0h]
  ScriptAction v29; // [esp+20h] [ebp-E8h] BYREF

  v27 = this; /*0x637ab6*/
  result = 0; /*0x637aba*/
  v25 = 0; /*0x637ac2*/
  v26 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x637ac8*/
  while ( v25 < v26 )
  {
    v2 = *(BuildingClass **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * result); /*0x637adc*/
    owner = v2->?; /*0x637adf*/
    relatedTagsCount = (SidebarClass *)owner->relatedTagsCount; /*0x637ae5*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) && dword_A83D4C ) /*0x637af8*/
      relatedTagsCount = (SidebarClass *)dword_A83D4C->Object_field_0x30; /*0x637afa*/
    if ( v27 != relatedTagsCount ) /*0x637b01*/
      goto LABEL_46; /*0x637b01*/
    Type = BuildingClass::GetType(v2); /*0x637b09*/
    v6 = Type; /*0x637b0e*/
    if ( !Type ) /*0x637b12*/
      goto LABEL_46; /*0x637b12*/
    v23 = 0; /*0x637b2e*/
    if ( *(int *)(Type + 20) > 0 ) /*0x637b1d*/
    {
      v7 = *(_DWORD *)(Type + 140); /*0x637b1f*/
      if ( v7 == -1 || v7 > 0 ) /*0x637b2c*/
        v23 = 1; /*0x637b1d*/
    }
    if ( *(_BYTE *)(v6 + 152) ) /*0x637b3a*/
    {
      v8 = *(_DWORD *)(v6 + 148); /*0x637b44*/
      if ( v8 != -1 ) /*0x637b4d*/
      {
        v9 = *(_DWORD **)(*(_DWORD *)(v6 + 8) + 4 * v8); /*0x637b52*/
        if ( v9 ) /*0x637b57*/
        {
          v9[45] = -1; /*0x637b59*/
          v10 = v9[12]; /*0x637b63*/
          for ( i = 0; i < v10; *(_DWORD *)(*(_DWORD *)(v9[9] + 4 * i - 4) + 116) = -1 ) /*0x637b6a*/
            ++i; /*0x637b6f*/
          v9[43] = -1; /*0x637b7f*/
        }
      }
      *(_BYTE *)(v6 + 152) = 0; /*0x637b89*/
    }
    v12 = *(_DWORD *)(v6 + 20); /*0x637b96*/
    for ( j = *(_DWORD *)(v6 + 140) != -1 ? *(_DWORD *)(v6 + 140) : 0; j < v12; ++j )
    {
      v14 = *(TeamClass **)(*(_DWORD *)(v6 + 8) + 4 * j); /*0x637bab*/
      if ( v14 ) /*0x637bb0*/
        TeamClass::Reset(v14, 1); /*0x637bb4*/
    }
    *(_DWORD *)(v6 + 140) = -1; /*0x637bc0*/
    if ( !v2 ) /*0x637bca*/
      goto LABEL_32; /*0x637bca*/
    v15 = (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 97))(v2); /*0x637bd6*/
    if ( v15 == 5 ) /*0x637bdb*/
    {
      v16 = 1; /*0x637bdd*/
      goto LABEL_33; /*0x637bdf*/
    }
    if ( ((WaypointCoords = ScriptAction::GetWaypointCoords(&v29, &v2->?->TechnoClass::vtable0), /*0x637c0f*/
           v28 = *(_DWORD *)WaypointCoords,
           v18 = WaypointCoords[4],
           v15 == 1)
       || v15 == 11)
      && (v18 == 11 || v15 == 11 && !v18) )
    {
      v16 = 1; /*0x637c11*/
    }
    else
    {
LABEL_32:
      v16 = 0; /*0x637c15*/
    }
LABEL_33:
    if ( !v23 ) /*0x637c1d*/
    {
      if ( v16 ) /*0x637c25*/
      {
        v19 = BuildingClass::GetType(v2); /*0x637c2d*/
        v20 = v19; /*0x637c32*/
        if ( v19 ) /*0x637c36*/
        {
          if ( *(int *)(v19 + 20) > 0 ) /*0x637c41*/
          {
            v21 = *(_DWORD *)(v19 + 140); /*0x637c47*/
            if ( (v21 == -1 || v21 > 0) && !*(_BYTE *)(v20 + 28) ) /*0x637c56*/
            {
              (*((void (__thiscall **)(BuildingClass *, int, int))v2->TechnoClass + 122))(v2, 28, 1); /*0x637c65*/
              qmemcpy( /*0x637c87*/
                v29.ScriptAction_field_0x8,
                (const void *)FactoryClass::CompleteCurrentItem(v20, (int)v29.__pad_78),
                0x6Fu);
              v22 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x637c8c*/
              if ( v22 ) /*0x637c96*/
                *v22 = 0; /*0x637c98*/
              else
                v22 = 0; /*0x637c9d*/
              v24 = v22; /*0x637caa*/
              qmemcpy(v22, v29.ScriptAction_field_0x8, 0x6Cu); /*0x637cae*/
              *((_WORD *)v22 + 54) = v29.ScriptAction_field_0x74; /*0x637cb0*/
              v22[110] = BYTE2(v29.ScriptAction_field_0x74); /*0x637cb2*/
              if ( *v24 == 4 ) /*0x637cba*/
                v24[29] = 2; /*0x637cbc*/
              SidebarClass::addToList((SidebarClass *)&stru_AC4B30.__pad_14[4], &v24); /*0x637cca*/
              *(_BYTE *)(v20 + 28) = 1; /*0x637ccf*/
            }
          }
        }
      }
    }
LABEL_46:
    result = ++v25; /*0x637cd3*/
  }
  return result; /*0x637cec*/
}



// ==== 0x00637D00  ObjectClass::UI_Delete_Delete  this=ObjectClass  sig=csp ====
char __thiscall UI_Delete_Delete(ObjectClass *this)
{
  _BYTE *v1; // esi
  BuildingLoadQueue *v2; // ecx
  _DWORD *Next; // eax
  _BYTE *WaypointCoords; // eax
  _BYTE v6[108]; // [esp-70h] [ebp-160h] BYREF
  int v7; // [esp-4h] [ebp-F4h]
  _BYTE v8[228]; // [esp+8h] [ebp-E8h] BYREF
  __int16 v9; // [esp+ECh] [ebp-4h]
  char v10; // [esp+EEh] [ebp-2h]

  v1 = *(_BYTE **)(*(_DWORD *)this->? + 4); /*0x637d16*/
  qmemcpy(&v8[8], v1, 0x6Cu); /*0x637d19*/
  v1 += 108; /*0x637d19*/
  *(_WORD *)&v8[116] = *(_WORD *)v1; /*0x637d1b*/
  v8[118] = v1[2]; /*0x637d1d*/
  if ( v8[26] ) /*0x637d24*/
  {
    v2 = (BuildingLoadQueue *)&v8[22]; /*0x637d26*/
  }
  else if ( v8[36] ) /*0x637d32*/
  {
    v2 = (BuildingLoadQueue *)&v8[32]; /*0x637d34*/
  }
  else
  {
    LOBYTE(Next) = v8[31]; /*0x637d3a*/
    if ( !v8[31] ) /*0x637d40*/
      return (char)Next; /*0x637d40*/
    v2 = (BuildingLoadQueue *)&v8[27]; /*0x637d42*/
  }
  Next = BuildingLoadQueue::GetNext(v2); /*0x637d46*/
  if ( Next ) /*0x637d4d*/
  {
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v8, Next); /*0x637d54*/
    EventClass::Add(&v8[120], (int)dword_A83D4C->Object_field_0x30, 0x2Cu, *(_DWORD *)WaypointCoords, WaypointCoords[4]); /*0x637d7b*/
    qmemcpy(v6, &v8[120], sizeof(v6)); /*0x637d91*/
    LOWORD(v7) = v9; /*0x637d93*/
    BYTE2(v7) = v10; /*0x637d95*/
    LOBYTE(Next) = Network::RecordEvent( /*0x637d96*/
                     *(__int64 *)v6,
                     *(int *)&v6[8],
                     *(int *)&v6[12],
                     *(int *)&v6[16],
                     *(int *)&v6[20],
                     *(int *)&v6[24],
                     *(int *)&v6[28],
                     *(int *)&v6[32],
                     *(int *)&v6[36],
                     *(int *)&v6[40],
                     *(int *)&v6[44],
                     *(int *)&v6[48],
                     *(int *)&v6[52],
                     *(int *)&v6[56],
                     *(int *)&v6[60],
                     *(int *)&v6[64],
                     *(int *)&v6[68],
                     *(int *)&v6[72],
                     *(int *)&v6[76],
                     *(int *)&v6[80],
                     *(int *)&v6[84],
                     *(int *)&v6[88],
                     *(int *)&v6[92],
                     *(int *)&v6[96],
                     *(int *)&v6[100],
                     *(int *)&v6[104],
                     v7);
  }
  return (char)Next; /*0x637d9b*/
}



// ==== 0x00637DB0  ScriptAction::SetField10  this=ScriptAction  sig=csp ====
bool __thiscall ScriptAction::SetField10(ScriptAction *this)
{
  return !stru_AC4B30.__pad_EC[216] || this != (ScriptAction *)4; /*0x637dc0*/
}



// ==== 0x00637DD0  Object_Helper_637DD0  this=-  sig=csp ====
char __stdcall sub_637DD0(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28)
{
  char result; // al
  _BYTE v29[108]; // [esp-70h] [ebp-78h] BYREF
  int v30; // [esp-4h] [ebp-Ch]

  result = a1; /*0x637dd0*/
  if ( a1 == 4 ) /*0x637dd8*/
  {
    HIBYTE(a8) = 1; /*0x637de8*/
    qmemcpy(v29, &a1, sizeof(v29)); /*0x637df0*/
    LOWORD(v30) = a28; /*0x637df2*/
    BYTE2(v30) = BYTE2(a28); /*0x637df4*/
    return Network::RecordEvent( /*0x637df5*/
             *(__int64 *)v29,
             *(int *)&v29[8],
             *(int *)&v29[12],
             *(int *)&v29[16],
             *(int *)&v29[20],
             *(int *)&v29[24],
             *(int *)&v29[28],
             *(int *)&v29[32],
             *(int *)&v29[36],
             *(int *)&v29[40],
             *(int *)&v29[44],
             *(int *)&v29[48],
             *(int *)&v29[52],
             *(int *)&v29[56],
             *(int *)&v29[60],
             *(int *)&v29[64],
             *(int *)&v29[68],
             *(int *)&v29[72],
             *(int *)&v29[76],
             *(int *)&v29[80],
             *(int *)&v29[84],
             *(int *)&v29[88],
             *(int *)&v29[92],
             *(int *)&v29[96],
             *(int *)&v29[100],
             *(int *)&v29[104],
             v30);
  }
  return result; /*0x637dfa*/
}



// ==== 0x00637E00  ScriptAction::DispatchBuilding  this=EventClass  sig=csp ====
char __thiscall DispatchBuildingScriptAction(char *this)
{
  char v2; // al
  _DWORD *BuildingLoadQueue; // eax
  int v4; // ebp
  _DWORD *v5; // edi
  int v6; // ecx
  _DWORD *v7; // esi
  int TypeBuildingClass; // eax
  int v9; // esi
  char v10; // bl
  char v11; // al
  int v12; // ebp
  int v13; // edi
  _DWORD *v14; // ebx
  _DWORD **v15; // esi
  int *CoordsScriptAction; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // edi
  _DWORD *v19; // eax
  _BYTE *v20; // ecx
  int v21; // ebx
  int v22; // edi
  _DWORD *v23; // ebp
  int v24; // esi
  _DWORD *v25; // edi
  int v26; // eax
  int v27; // ebx
  int *v28; // eax
  int v29; // edi
  _DWORD *v30; // eax
  int v32; // [esp+10h] [ebp-38h] BYREF
  _DWORD v33[2]; // [esp+14h] [ebp-34h] BYREF
  int v34; // [esp+1Ch] [ebp-2Ch]
  int v35; // [esp+20h] [ebp-28h]
  _DWORD v36[3]; // [esp+24h] [ebp-24h] BYREF
  int v37; // [esp+30h] [ebp-18h] BYREF
  int v38; // [esp+34h] [ebp-14h]
  int v39; // [esp+38h] [ebp-10h]
  _DWORD v40[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v2 = *this; /*0x637e09*/
  if ( *this == 43 ) /*0x637e0d*/
  {
    v32 = this->q008; /*0x637e17*/
    LOBYTE(BuildingLoadQueue) = dword_A8EC88; /*0x637e1b*/
    v4 = 0; /*0x637e20*/
    for ( v33[0] = dword_A8EC88; v4 < v33[0]; ++v4 ) /*0x637e28*/
    {
      v5 = (_DWORD *)*((_DWORD *)dword_A8EC7C + v4); /*0x637e34*/
      v6 = v5[135]; /*0x637e37*/
      v7 = *(_DWORD **)(v6 + 48); /*0x637e3d*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v6) && dword_A83D4C ) /*0x637e50*/
        v7 = (_DWORD *)*((_DWORD *)dword_A83D4C + 12); /*0x637e52*/
      if ( (_DWORD *)v32 == v7 ) /*0x637e59*/
      {
        TypeBuildingClass = BuildingClass::GetType(v5); /*0x637e5d*/
        v9 = TypeBuildingClass; /*0x637e62*/
        if ( TypeBuildingClass ) /*0x637e66*/
        {
          v10 = ScriptAction::Check(TypeBuildingClass); /*0x637e71*/
          ScriptAction::ClearBuildingState(v9); /*0x637e73*/
          v11 = ScriptAction::IsBuildingTypeMatch(v5); /*0x637e7a*/
          if ( !v10 ) /*0x637e81*/
          {
            if ( v11 ) /*0x637e85*/
              BuildingClass::GetObjectData(v5); /*0x637e89*/
          }
        }
      }
      LOBYTE(BuildingLoadQueue) = v33[0]; /*0x637e8e*/
    }
  }
  else if ( v2 == 42 ) /*0x637ea1*/
  {
    BuildingLoadQueue = BuildingLoadQueue::Find(this + 7); /*0x637eaa*/
    v32 = (int)BuildingLoadQueue; /*0x637eb1*/
    if ( BuildingLoadQueue ) /*0x637eb5*/
    {
      BuildingLoadQueue = BuildingLoadQueue::GetNext(this + 12); /*0x637ebe*/
      if ( BuildingLoadQueue ) /*0x637ec5*/
      {
        BuildingLoadQueue = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*BuildingLoadQueue + 88))( /*0x637ed4*/
                                        BuildingLoadQueue,
                                        &v37);
        v12 = *BuildingLoadQueue; /*0x637ed7*/
        v13 = 0; /*0x637ed9*/
        v14 = (_DWORD *)this->q008; /*0x637edb*/
        v34 = BuildingLoadQueue[1]; /*0x637ee2*/
        v35 = BuildingLoadQueue[2]; /*0x637ee9*/
        LOBYTE(BuildingLoadQueue) = dword_AC4B40; /*0x637eed*/
        v33[0] = dword_AC4B40; /*0x637ef4*/
        if ( dword_AC4B40 > 0 ) /*0x637ef8*/
        {
          while ( 1 ) /*0x637f0c*/
          {
            v36[0] = v12; /*0x637f0c*/
            v15 = (_DWORD **)*((_DWORD *)dword_AC4B34 + v13); /*0x637f10*/
            v36[1] = v34; /*0x637f1a*/
            v36[2] = v35; /*0x637f1e*/
            CoordsScriptAction = ScriptAction::GetCoords(v15, v40); /*0x637f22*/
            v37 = *CoordsScriptAction; /*0x637f29*/
            v38 = CoordsScriptAction[1]; /*0x637f30*/
            v39 = CoordsScriptAction[2]; /*0x637f40*/
            if ( Coord3D::Equals(&v37, v36) ) /*0x637f44*/
            {
              v17 = (_DWORD *)Function::Method_6342D0(0); /*0x637f51*/
              BuildingLoadQueue = (_DWORD *)TeamClass::GetLeaderIndex(v17); /*0x637f58*/
              if ( v14 == (_DWORD *)-1 || v14 == BuildingLoadQueue ) /*0x637f64*/
                break; /*0x637f64*/
            }
            LOBYTE(BuildingLoadQueue) = v33[0]; /*0x637f66*/
            if ( ++v13 >= v33[0] ) /*0x637f6d*/
              return (char)BuildingLoadQueue; /*0x637f6d*/
          }
          if ( v15 ) /*0x637f79*/
          {
            v18 = (_DWORD *)v32; /*0x637f7f*/
            v19 = (_DWORD *)BuildingClass::GetType((_DWORD *)v32); /*0x637f85*/
            if ( !v19 ) /*0x637f8c*/
            {
              if ( __2_YAPAXI_Z(0x9Cu) ) /*0x637f93*/
                v32 = ScriptAction::Constructor(v32); /*0x637fa7*/
              else
                v32 = 0; /*0x637fad*/
              ScriptActionVector::PushBack(&v32); /*0x637fbf*/
              BuildingClass::SetType(v18, v32); /*0x637fcb*/
              v19 = (_DWORD *)v32; /*0x637fd0*/
            }
            v33[0] = v15; /*0x637fdc*/
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD *))(v19[1] + 16))(v19 + 1, v33) == -1 ) /*0x637fec*/
              LOBYTE(BuildingLoadQueue) = CompleteBuildingProduction(v18, v15); /*0x637ffb*/
            else
              LOBYTE(BuildingLoadQueue) = BuildingClass::CompleteProduction(v18, v15); /*0x637fee*/
          }
        }
      }
    }
  }
  else
  {
    v20 = this + 7; /*0x63800a*/
    if ( v2 == 44 ) /*0x63800d*/
    {
      BuildingLoadQueue = BuildingLoadQueue::GetNext(v20); /*0x638013*/
      if ( BuildingLoadQueue ) /*0x63801a*/
      {
        BuildingLoadQueue = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*BuildingLoadQueue + 88))( /*0x638029*/
                                        BuildingLoadQueue,
                                        v40);
        v21 = *BuildingLoadQueue; /*0x63802c*/
        v22 = 0; /*0x63802e*/
        v23 = (_DWORD *)this->q008; /*0x638030*/
        v38 = BuildingLoadQueue[1]; /*0x638037*/
        v39 = BuildingLoadQueue[2]; /*0x63803e*/
        LOBYTE(BuildingLoadQueue) = dword_AC4B40; /*0x638042*/
        v33[0] = dword_AC4B40; /*0x638049*/
        if ( dword_AC4B40 > 0 ) /*0x63804d*/
        {
          while ( 1 ) /*0x638060*/
          {
            v24 = *((_DWORD *)dword_AC4B34 + v22); /*0x638060*/
            if ( (unsigned __int8)ScriptAction::GetActionCoordinates(v21, v38, v39) ) /*0x638073*/
            {
              BuildingLoadQueue = (_DWORD *)TeamClass::GetLeaderIndex(***(_DWORD ****)(v24 + 4)); /*0x638083*/
              if ( v23 == (_DWORD *)-1 || v23 == BuildingLoadQueue ) /*0x63808f*/
                break; /*0x63808f*/
            }
            LOBYTE(BuildingLoadQueue) = v33[0]; /*0x638091*/
            if ( ++v22 >= v33[0] ) /*0x638098*/
              return (char)BuildingLoadQueue; /*0x638098*/
          }
          if ( v24 ) /*0x6380a4*/
          {
            v25 = ***(_DWORD ****)(v24 + 4); /*0x6380ab*/
            v26 = BuildingClass::GetType(v25); /*0x6380af*/
            v33[0] = v24; /*0x6380bc*/
            v27 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)(v26 + 4) + 16))(v26 + 4, v33); /*0x6380c7*/
            v28 = (int *)BuildingClass::GetType(v25); /*0x6380c9*/
            v29 = ArrayClass::GetAt_Wrap(v28, v27 + 1); /*0x6380d9*/
            LOBYTE(BuildingLoadQueue) = BuildingClass::FlushScriptActions(v24); /*0x6380db*/
            if ( v29 ) /*0x6380e2*/
            {
              LOBYTE(BuildingLoadQueue) = (_BYTE)dword_A83D4C; /*0x6380e4*/
              if ( v23 == *((_DWORD **)dword_A83D4C + 12) ) /*0x6380ec*/
                dword_AC4BF0 = v29; /*0x6380ee*/
            }
          }
        }
      }
    }
    else
    {
      v30 = BuildingLoadQueue::Find(v20); /*0x6380fc*/
      LOBYTE(BuildingLoadQueue) = ExecuteActionPlanManager(v30, this); /*0x638105*/
    }
  }
  return (char)BuildingLoadQueue; /*0x637e97*/
}



// ==== 0x00638120  ExecuteActionPlanManager  this=AbstractClass  sig=csp ====
char __fastcall ExecuteActionPlanManager(BuildingClass *a1, char *a2)
{
  char *v2; // edi
  int *ScenarioClassActionCoords; // eax
  int v4; // ecx
  void *Array_field_0x10; // ebx
  int v6; // edx
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  ScriptAction *v10; // edi
  TeamClass *v11; // eax
  int LeaderIndex; // eax
  ScriptAction *v13; // ecx
  BuildingClass *v14; // esi
  int v15; // eax
  char v16; // al
  wchar_t *StringCSF; // eax
  wchar_t *v19; // ecx
  ObjectClass *Type; // ebp
  ScriptAction *v21; // eax
  bool v22; // bl
  ObjectClass *v23; // ecx
  int v24; // eax
  int abstractFlags; // eax
  int v26; // eax
  unsigned int v27; // eax
  VectorClass *v28; // eax
  VectorClass *v29; // edi
  int v30; // esi
  wchar_t *v31; // eax
  int v32; // eax
  _BYTE v33[112]; // [esp-70h] [ebp-ACh] BYREF
  bool v34; // [esp+13h] [ebp-29h]
  ScriptAction *v35; // [esp+14h] [ebp-28h] BYREF
  char v36[4]; // [esp+18h] [ebp-24h] BYREF
  char *v37; // [esp+1Ch] [ebp-20h]
  BuildingClass *v38; // [esp+20h] [ebp-1Ch]
  int v39; // [esp+24h] [ebp-18h]
  int v40; // [esp+28h] [ebp-14h]
  int v41; // [esp+2Ch] [ebp-10h]
  _DWORD v42[3]; // [esp+30h] [ebp-Ch] BYREF

  v2 = a2; /*0x638127*/
  v38 = a1; /*0x638129*/
  v37 = a2; /*0x63812f*/
  if ( !a1 ) /*0x638133*/
    return 0; /*0x638133*/
  v34 = (void *)a2[2] == dword_A83D4C->Object_field_0x30; /*0x63814c*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v42, a2); /*0x638151*/
  if ( *ScenarioClassActionCoords == -1 && ScenarioClassActionCoords[1] == -1 && ScenarioClassActionCoords[2] == -1 ) /*0x63816b*/
    return 0; /*0x63816b*/
  v4 = *ScenarioClassActionCoords; /*0x638174*/
  Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x638176*/
  *(_DWORD *)v36 = *(_DWORD *)(v2 + 3); /*0x63817c*/
  v6 = ScenarioClassActionCoords[1]; /*0x638180*/
  v7 = ScenarioClassActionCoords[2]; /*0x638183*/
  v8 = v2[2]; /*0x638186*/
  v9 = 0; /*0x63818a*/
  v39 = v4; /*0x63818c*/
  v40 = v6; /*0x638192*/
  v41 = v7; /*0x638196*/
  if ( (int)stru_AC4B30.Array_field_0x10 <= 0 ) /*0x63819a*/
  {
LABEL_13:
    v13 = 0; /*0x6381f9*/
  }
  else
  {
    while ( 1 ) /*0x6381a9*/
    {
      v10 = (ScriptAction *)*((_DWORD *)stru_AC4B30.Array_field_0x4 + v9); /*0x6381a9*/
      if ( ScriptAction::GetActionCoordinates(v10, v39, v40, v41) /*0x6381d5*/
        && (*(_DWORD *)v36 == -1 || *(_DWORD *)v36 == v10->ScriptAction_field_0x18[0]) )
      {
        v11 = (TeamClass *)Function::Method_6342D0(v10, 0); /*0x6381db*/
        LeaderIndex = TeamClass::GetLeaderIndex(v11); /*0x6381e2*/
        if ( v8 == -1 || v8 == LeaderIndex ) /*0x6381ee*/
          break; /*0x6381ee*/
      }
      if ( ++v9 >= (int)Array_field_0x10 ) /*0x6381f3*/
      {
        v2 = v37; /*0x6381f5*/
        goto LABEL_13; /*0x6381f5*/
      }
    }
    v13 = v10; /*0x638252*/
    v2 = v37; /*0x638254*/
  }
  v14 = v38; /*0x6381fb*/
  v35 = v13; /*0x6381ff*/
  if ( v13 && Array::FindValue((Array *)v13, (int)v38) != -1 ) /*0x638210*/
    return 1; /*0x638210*/
  v15 = ScriptAction::ClassifyAction((int *)v38, v2); /*0x63821a*/
  if ( v15 != -1 ) /*0x638222*/
  {
    if ( !v34 ) /*0x63822e*/
      return 0; /*0x63822e*/
    if ( !v15 ) /*0x638236*/
    {
      v16 = *v2; /*0x638238*/
      if ( *v2 == 9 ) /*0x63823c*/
      {
        PlanManager::Notify(&g_Str_MSG_PlanningModeNoDeploy); /*0x638243*/
        return 0; /*0x638251*/
      }
      if ( v16 == 6 ) /*0x63825c*/
      {
        PlanManager::Notify((PlanManager *)g_Str_MSG_PlanningModeNoStop); /*0x638263*/
        return 0; /*0x638271*/
      }
      if ( v16 == 7 ) /*0x638274*/
      {
        PlanManager::Notify((PlanManager *)g_Str_MSG_PlanningModeNoScatter); /*0x63827f*/
        return 0; /*0x63828d*/
      }
      return 0; /*0x638274*/
    }
    if ( v15 == 1 ) /*0x638295*/
    {
      if ( !stru_AC4B30.__pad_70[104] ) /*0x63829e*/
      {
        stru_AC4B30.__pad_70[104] = 1; /*0x6382a4*/
        StringCSF = GetStringCSF(g_Str_MSG_PostTerminatingCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6382bb*/
        AddMessageListPlayerMessage(StringCSF, 480); /*0x6382c7*/
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x6382e4*/
        return 0; /*0x6382f2*/
      }
      return 0; /*0x63829e*/
    }
    if ( v15 != 2 || stru_AC4B30.__pad_70[104] ) /*0x638303*/
      return 0; /*0x63853c*/
    stru_AC4B30.__pad_70[104] = 1; /*0x638309*/
    *(_DWORD *)&v33[108] = 3233; /*0x63830f*/
    *(_DWORD *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x638314*/
    v19 = g_Str_MSG_PostContinualCommand; /*0x63831b*/
LABEL_67:
    v31 = GetStringCSF(v19, 0, *(const char **)&v33[104], *(int *)&v33[108]); /*0x638506*/
    AddMessageListPlayerMessage(v31, 480); /*0x638512*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x63852e*/
    return 0; /*0x63852e*/
  }
  Type = (ObjectClass *)BuildingClass::GetType(v38); /*0x63832c*/
  if ( !Type ) /*0x638330*/
  {
    v21 = (ScriptAction *)__2_YAPAXI_Z(0x9Cu); /*0x638337*/
    if ( v21 ) /*0x638341*/
      *(_DWORD *)v36 = ScriptAction::Constructor(v21, (int)v38); /*0x63834b*/
    else
      *(_DWORD *)v36 = 0; /*0x638351*/
    ScriptActionVector::PushBack((ScriptActionVector *)&stru_AC4B30.__pad_EC[92], v36); /*0x638363*/
    BuildingClass::SetType(v14, *(int *)v36); /*0x63836f*/
    Type = *(ObjectClass **)v36; /*0x638374*/
  }
  v22 = v34; /*0x638378*/
  if ( v34 ) /*0x63837e*/
  {
    v23 = (ObjectClass *)v2[12]; /*0x638380*/
    if ( v23 == (ObjectClass *)7 || v23 == (ObjectClass *)8 || v23 == (ObjectClass *)9 ) /*0x638391*/
    {
      v24 = 0; /*0x638393*/
LABEL_46:
      *(_DWORD *)&stru_AC4B30.__pad_EC[116] = v24; /*0x6383bf*/
      goto LABEL_47; /*0x6383bf*/
    }
    if ( ExecuteActionPlanManager_Helper_638C40(v23, *(_DWORD *)(v2 + 14), v2[18]) ) /*0x6383a7*/
    {
      v24 = 0; /*0x6383b0*/
      goto LABEL_46; /*0x6383b2*/
    }
    if ( Type->? == 15 ) /*0x6383b8*/
    {
      v24 = 2; /*0x6383ba*/
      goto LABEL_46; /*0x6383ba*/
    }
  }
LABEL_47:
  if ( Type->lastLayer >= 0 ) /*0x6383cc*/
  {
    if ( !v34 || stru_AC4B30.__pad_70[104] ) /*0x6383df*/
      return 0; /*0x6383df*/
    *(_DWORD *)&v33[108] = 3233; /*0x6383e5*/
    stru_AC4B30.__pad_70[104] = 1; /*0x6383ea*/
    *(_DWORD *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x6383f1*/
    v19 = (wchar_t *)aMsgPostloop; /*0x6383f8*/
    goto LABEL_67; /*0x6383fd*/
  }
  abstractFlags = Type->?; /*0x638402*/
  if ( abstractFlags ) /*0x638407*/
  {
    if ( abstractFlags == 16 ) /*0x6384df*/
    {
      if ( !v34 || stru_AC4B30.__pad_70[104] ) /*0x6384ec*/
        return 0; /*0x6384ec*/
      *(_DWORD *)&v33[108] = 3233; /*0x6384ee*/
      stru_AC4B30.__pad_70[104] = 1; /*0x6384f3*/
      *(_DWORD *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x6384fa*/
      v19 = g_Str_MSG_NodeMaximum; /*0x638501*/
      goto LABEL_67; /*0x638501*/
    }
  }
  else
  {
    if ( *(int *)&stru_AC4B30.__pad_EC[52] < *(int *)&stru_AC4B30.__pad_EC[44] /*0x638444*/
      || (stru_AC4B30.__pad_EC[49] || !*(_DWORD *)&stru_AC4B30.__pad_EC[44])
      && *(int *)&stru_AC4B30.__pad_EC[56] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_EC[36] + 8))(
           &stru_AC4B30.__pad_EC[36],
           *(_DWORD *)&stru_AC4B30.__pad_EC[56] + *(_DWORD *)&stru_AC4B30.__pad_EC[44],
           0) )
    {
      v26 = (*(_DWORD *)&stru_AC4B30.__pad_EC[52])++; /*0x638451*/
      *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40] + 4 * v26) = v14; /*0x638460*/
    }
    v27 = v2[2]; /*0x638463*/
    if ( v27 < 0x18 ) /*0x638469*/
      ++*(_DWORD *)&stru_AC4B30.__pad_48[4 * v27 + 12]; /*0x638470*/
  }
  if ( !v35 ) /*0x63847d*/
  {
    v28 = (VectorClass *)__2_YAPAXI_Z(0xB8u); /*0x638488*/
    v29 = v28; /*0x63848d*/
    if ( v28 ) /*0x638494*/
    {
      *(_DWORD *)&v33[108] = 0; /*0x63849e*/
      *(_DWORD *)&v33[104] = 0; /*0x6384a0*/
      v30 = *(_DWORD *)(v37 + 3); /*0x6384a2*/
      ExecuteActionPlanManager_Helper_63DEC0(v28, 0, 0); /*0x6384a7*/
      v29[1].Capacity = v30; /*0x6384af*/
      *(_DWORD *)&v33[108] = 0; /*0x6384b2*/
      *(_DWORD *)&v33[104] = 0; /*0x6384b4*/
      v29[1].IsInitialized = 0; /*0x6384b6*/
      ExecuteActionPlanManager_Helper_63E1D0(v29 + 2, *(int *)&v33[104], *(int *)&v33[108]); /*0x6384ba*/
      ExecuteActionPlanManager_Helper((ObjectClass *)&v29[3].Capacity); /*0x6384c2*/
      v29[11].vtable0 = (void *)-1; /*0x6384ca*/
      v29[11].Items = (void *)-1; /*0x6384d0*/
      v35 = (ScriptAction *)v29; /*0x6384d6*/
    }
    else
    {
      v35 = 0; /*0x63853d*/
    }
    VectorClass::Append((VectorClass *)&stru_AC4B30, &v35); /*0x63854f*/
    v2 = v37; /*0x638554*/
    v14 = v38; /*0x638558*/
  }
  v32 = ExecuteActionPlanManager_Helper_636EB0(Type); /*0x63855e*/
  if ( v32 ) /*0x638565*/
  {
    qmemcpy(v33, v2, 0x6Fu); /*0x638573*/
    ScriptAction::ExecutePlacement( /*0x638581*/
      (int)v35,
      v32,
      *(int *)v33,
      *(__int64 *)&v33[4],
      *(int *)&v33[12],
      *(int *)&v33[16],
      *(int *)&v33[20],
      *(int *)&v33[24],
      *(int *)&v33[28],
      *(int *)&v33[32],
      *(int *)&v33[36],
      *(int *)&v33[40],
      *(int *)&v33[44],
      *(int *)&v33[48],
      *(int *)&v33[52],
      *(int *)&v33[56],
      *(int *)&v33[60],
      *(int *)&v33[64],
      *(int *)&v33[68],
      *(int *)&v33[72],
      *(int *)&v33[76],
      *(int *)&v33[80],
      *(int *)&v33[84],
      *(int *)&v33[88],
      *(int *)&v33[92],
      *(int *)&v33[96],
      *(int *)&v33[100],
      *(int *)&v33[104],
      *(int *)&v33[108]);
  }
  else
  {
    ScriptAction::CreatePlacementAction(v35, v14, v2); /*0x63858e*/
  }
  if ( v22 ) /*0x638595*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 472), 0x2000, 1.0, 0); /*0x6385ae*/
  return 1; /*0x63824a*/
}



// ==== 0x006385C0  BuildingClass::GetObjectData  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::GetObjectData(BuildingClass *this)
{
  int Type; // eax
  int v3; // ebx
  int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // ebp
  int v7; // eax
  _WORD v9[56]; // [esp+8h] [ebp-E0h] BYREF
  _BYTE v10[112]; // [esp+78h] [ebp-70h] BYREF

  Type = BuildingClass::GetType(this); /*0x6385ca*/
  v3 = Type; /*0x6385cf*/
  if ( !Type ) /*0x6385d3*/
    return 0; /*0x6385d3*/
  if ( *(int *)(Type + 20) <= 0 ) /*0x6385de*/
    return 0; /*0x6385de*/
  v4 = *(_DWORD *)(Type + 140); /*0x6385e4*/
  if ( v4 != -1 && v4 <= 0 ) /*0x6385f1*/
    return 0; /*0x6385f1*/
  if ( *(_BYTE *)(v3 + 28) ) /*0x6385f7*/
    return 0; /*0x6386ca*/
  (*((void (__thiscall **)(BuildingClass *, int, int))this->TechnoClass + 122))(this, 28, 1); /*0x63860c*/
  qmemcpy(v9, (const void *)FactoryClass::CompleteCurrentItem(v3, (int)v10), 0x6Fu); /*0x63862e*/
  v5 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x638633*/
  if ( v5 ) /*0x63863d*/
  {
    *v5 = 0; /*0x63863f*/
    v6 = v5; /*0x638642*/
  }
  else
  {
    v6 = 0; /*0x638646*/
  }
  qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
  *((_WORD *)v6 + 54) = v9[54]; /*0x638655*/
  v6[110] = v9[55]; /*0x638657*/
  if ( *v6 == 4 ) /*0x63865c*/
    v6[29] = 2; /*0x63865e*/
  if ( *(int *)&stru_AC4B30.__pad_14[20] < *(int *)&stru_AC4B30.__pad_14[12] /*0x638699*/
    || (stru_AC4B30.__pad_14[17] || !*(_DWORD *)&stru_AC4B30.__pad_14[12])
    && (int)stru_AC4B30.Array_field_0x2C > 0
    && (*(unsigned __int8 (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_14[4] + 8))(
         &stru_AC4B30.__pad_14[4],
         (char *)stru_AC4B30.Array_field_0x2C + *(_DWORD *)&stru_AC4B30.__pad_14[12],
         0) )
  {
    v7 = (*(_DWORD *)&stru_AC4B30.__pad_14[20])++; /*0x6386a6*/
    *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_14[8] + 4 * v7) = v6; /*0x6386b5*/
  }
  *(_BYTE *)(v3 + 28) = 1; /*0x6386ba*/
  return 1; /*0x6386be*/
}



// ==== 0x006386E0  ClearFactoryClassProduction  this=IUnknown  sig=csp ====
int __fastcall ClearFactoryClassProduction(_DWORD *a1, int a2)
{
  int result; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // ebx
  int i; // ebp
  Array *v9; // esi
  int Value; // eax
  void *v11; // eax
  int v12; // ecx
  void *Object_field_0x30; // esi
  void *Block; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  if ( a1 ) /*0x6386ec*/
  {
    result = BuildingClass::GetType((BuildingClass *)a1); /*0x6386f2*/
    v5 = result; /*0x6386f7*/
    v15 = result; /*0x6386fb*/
    if ( result ) /*0x6386ff*/
    {
      if ( !a2 || (result = *(char *)(a2 + 29), !*(_BYTE *)(a2 + 29)) ) /*0x638709*/
      {
        result = *(_DWORD *)(v5 + 20); /*0x638715*/
        if ( result > 0 ) /*0x63871a*/
        {
          result = BuildingClass::GetType((BuildingClass *)a1); /*0x638722*/
          v6 = result; /*0x638727*/
          if ( result ) /*0x63872b*/
          {
            v7 = *(_DWORD *)(result + 20); /*0x638731*/
            for ( i = 0; i < v7; ++i ) /*0x638740*/
            {
              v9 = *(Array **)(*(_DWORD *)(v6 + 8) + 4 * i); /*0x638745*/
              Value = Array::FindValue(v9, *(_DWORD *)v6); /*0x63874d*/
              if ( Value == -1 ) /*0x638755*/
                v11 = 0; /*0x638757*/
              else
                v11 = (void *)*((_DWORD *)v9->Array_field_0x4 + Value); /*0x63875e*/
              Block = v11; /*0x638763*/
              if ( v11 ) /*0x638767*/
              {
                FactoryClass::FinishProduction((int *)v9->__pad_0, (int)v11); /*0x63876c*/
                __3_YAXPAX_Z(*((void **)Block + 1)); /*0x638779*/
                FactoryClass::RemoveItemAt((FactoryClass *)v9, (int)&Block); /*0x638788*/
                __3_YAXPAX_Z(Block); /*0x638792*/
                if ( !v9->Array_field_0x10 ) /*0x638797*/
                {
                  if ( v9 ) /*0x6387a3*/
                    FactoryClass::RemoveFromArrays((FactoryClass *)v9, 1); /*0x6387a9*/
                }
              }
            }
            if ( v7 ) /*0x6387ba*/
            {
              Block = *(void **)v6; /*0x6387be*/
              v12 = *((_DWORD *)Block + 135); /*0x6387c2*/
              Object_field_0x30 = *(void **)(v12 + 48); /*0x6387c8*/
              if ( (unsigned __int8)House::IsHumanPlayer((House *)v12) ) /*0x6387cb*/
              {
                if ( dword_A83D4C ) /*0x6387db*/
                  Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x6387dd*/
              }
              DecFactoryClassCounter((unsigned int)Object_field_0x30); /*0x6387e2*/
              VectorClass::EraseAt((VectorClass *)&stru_AC4B30.__pad_EC[36], (int)&Block); /*0x6387f1*/
            }
            (*(void (__thiscall **)(int))(*(_DWORD *)(v6 + 4) + 12))(v6 + 4); /*0x6387fc*/
            v5 = v15; /*0x6387ff*/
            result = -1; /*0x638803*/
            *(_DWORD *)(v6 + 140) = -1; /*0x638806*/
            *(_DWORD *)(v6 + 144) = -1; /*0x63880c*/
            *(_DWORD *)(v6 + 148) = -1; /*0x638812*/
            *(_BYTE *)(v6 + 152) = 0; /*0x638818*/
            *(_BYTE *)(v6 + 153) = 0; /*0x63881f*/
          }
        }
      }
      *(_BYTE *)(v5 + 28) = 0; /*0x638826*/
    }
  }
  return result; /*0x63882a*/
}



// ==== 0x00638840  TechnoClass::RemoveBuildingFromScripts  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RemoveBuildingFromScripts(TechnoClass *this)
{
  int result; // eax
  int v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int Value; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned int Object_field_0x30; // esi
  int v14; // eax
  bool v15; // [esp+7h] [ebp-Dh]
  void *Block; // [esp+8h] [ebp-Ch] BYREF
  int i; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h] BYREF

  result = BuildingClass::GetType((BuildingClass *)this); /*0x638844*/
  v2 = result; /*0x638849*/
  if ( result ) /*0x63884d*/
  {
    v3 = *(_DWORD *)(result + 20); /*0x638853*/
    v15 = v3 == 0; /*0x638859*/
    v4 = 0; /*0x63885e*/
    v18 = v3; /*0x638860*/
    for ( i = 0; i < v18; ++i ) /*0x63886a*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4 * v4); /*0x638875*/
      Value = Array::FindValue((Array *)v5, *(_DWORD *)v2); /*0x63887d*/
      if ( Value == -1 ) /*0x638885*/
        v7 = 0; /*0x638887*/
      else
        v7 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * Value); /*0x63888e*/
      Block = (void *)v7; /*0x638893*/
      if ( v7 ) /*0x638897*/
      {
        if ( *(_BYTE *)(v7 + 12) ) /*0x63889d*/
          ScriptAction::DecrementRefCount((ScriptAction *)v5, v7); /*0x6388a7*/
        v8 = *(_DWORD *)(v7 + 8); /*0x6388ac*/
        if ( v8 != -1 ) /*0x6388b2*/
        {
          v9 = *(_DWORD *)(*(_DWORD *)(v5 + 36) + 4 * v8); /*0x6388b9*/
          *(_DWORD *)(v9 + 116) = -1; /*0x6388be*/
          TeamClass::Reset((TeamClass *)v5, 0); /*0x6388c5*/
          v10 = *(_DWORD *)(v9 + 112) - 1; /*0x6388cd*/
          *(_DWORD *)(v9 + 112) = v10; /*0x6388ce*/
          if ( !v10 ) /*0x6388d1*/
            ScriptQueue::PushEntry((ScriptQueue *)v5); /*0x6388d5*/
        }
        *(_DWORD *)(v7 + 8) = -1; /*0x6388da*/
        __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6388e9*/
        v11 = (*(int (__thiscall **)(int, void **))(*(_DWORD *)v5 + 16))(v5, &Block); /*0x6388fa*/
        if ( v11 != -1 ) /*0x638900*/
          Vector4::EraseAt_Copy((Vector4 *)v5, v11); /*0x638905*/
        __3_YAXPAX_Z(Block); /*0x63890f*/
        if ( !*(_DWORD *)(v5 + 16) && v5 ) /*0x638920*/
        {
          TechnoClass::ClearScriptPlanningData((TechnoClass *)v5); /*0x638924*/
          __3_YAXPAX_Z((void *)v5); /*0x63892a*/
        }
      }
      v4 = i + 1; /*0x63893a*/
    }
    if ( !v15 ) /*0x63894f*/
    {
      v18 = *(_DWORD *)v2; /*0x638957*/
      v12 = *(_DWORD *)(v18 + 540); /*0x63895b*/
      Object_field_0x30 = *(_DWORD *)(v12 + 48); /*0x638961*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v12) && dword_A83D4C ) /*0x638974*/
        Object_field_0x30 = (unsigned int)dword_A83D4C->Object_field_0x30; /*0x638976*/
      if ( Object_field_0x30 < 0x18 ) /*0x63897b*/
        *(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] = (*(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] /*0x638995*/
                                                                      - 1)
                                                                     & ((*(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12]
                                                                       - 1 < 0)
                                                                      - 1);
      v14 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_AC4B30.__pad_EC[36] + 16))( /*0x6389ac*/
              &stru_AC4B30.__pad_EC[36],
              &v18);
      if ( v14 != -1 && v14 < *(int *)&stru_AC4B30.__pad_EC[52] ) /*0x6389be*/
      {
        --*(_DWORD *)&stru_AC4B30.__pad_EC[52]; /*0x6389c3*/
        for ( ; /*0x6389c9*/
              v14 < *(int *)&stru_AC4B30.__pad_EC[52];
              *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40] + 4 * v14 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40]
                                                                                          + 4 * v14) )
        {
          ++v14; /*0x6389d1*/
        }
      }
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 4) + 12))(v2 + 4); /*0x6389ee*/
    *(_DWORD *)(v2 + 140) = -1; /*0x6389f1*/
    *(_DWORD *)(v2 + 144) = -1; /*0x6389f7*/
    *(_DWORD *)(v2 + 148) = -1; /*0x6389fd*/
    *(_BYTE *)(v2 + 152) = 0; /*0x638a03*/
    *(_BYTE *)(v2 + 153) = 0; /*0x638a0a*/
  }
  return result; /*0x638a12*/
}



// ==== 0x00638A80  TechnoClass::CreatePlanningNode  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CreatePlanningNode(TechnoClass *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax

  v2 = __2_YAPAXI_Z(0x9Cu); /*0x638a89*/
  if ( v2 ) /*0x638a95*/
  {
    *(_DWORD *)(v2 + 8) = 0; /*0x638a97*/
    *(_DWORD *)(v2 + 12) = 0; /*0x638a9a*/
    *(_BYTE *)(v2 + 16) = 1; /*0x638a9d*/
    *(_BYTE *)(v2 + 17) = 0; /*0x638aa1*/
    *(_DWORD *)(v2 + 4) = &DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x638aa4*/
    *(_DWORD *)(v2 + 24) = 10; /*0x638aab*/
    *(_DWORD *)(v2 + 20) = 0; /*0x638ab2*/
    *(_BYTE *)(v2 + 28) = 0; /*0x638ab5*/
    *(_BYTE *)(v2 + 29) = 0; /*0x638abb*/
    *(_DWORD *)(v2 + 140) = -1; /*0x638abe*/
    *(_DWORD *)(v2 + 144) = -1; /*0x638ac4*/
    *(_DWORD *)(v2 + 148) = -1; /*0x638aca*/
    *(_BYTE *)(v2 + 152) = 0; /*0x638ad0*/
    *(_BYTE *)(v2 + 153) = 0; /*0x638ad6*/
    *(_DWORD *)v2 = this; /*0x638adc*/
    v3 = v2; /*0x638ade*/
  }
  else
  {
    v3 = 0; /*0x638ae2*/
  }
  if ( *(int *)&stru_AC4B30.__pad_EC[108] < *(int *)&stru_AC4B30.__pad_EC[100] /*0x638b17*/
    || (stru_AC4B30.__pad_EC[105] || !*(_DWORD *)&stru_AC4B30.__pad_EC[100])
    && *(int *)&stru_AC4B30.__pad_EC[112] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_EC[92] + 8))(
         &stru_AC4B30.__pad_EC[92],
         *(_DWORD *)&stru_AC4B30.__pad_EC[100] + *(_DWORD *)&stru_AC4B30.__pad_EC[112],
         0) )
  {
    v4 = (*(_DWORD *)&stru_AC4B30.__pad_EC[108])++; /*0x638b24*/
    *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[96] + 4 * v4) = v3; /*0x638b33*/
  }
  BuildingClass::SetType((BuildingClass *)this, v3); /*0x638b39*/
  return v3; /*0x638b40*/
}



// ==== 0x00638B70  Team_Load  this=-  sig=csp ====
char __fastcall sub_638B70(int *a1, int a2, char a3, char a4)
{
  int v6; // edi
  int v7; // edx
  int v8; // esi
  _DWORD *v9; // eax
  void *v10; // eax
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  if ( a2 != 11 ) /*0x638b79*/
    return 0; /*0x638b79*/
  if ( !a4 ) /*0x638b85*/
    return 1; /*0x638b8d*/
  if ( !a1 ) /*0x638b92*/
    return 0; /*0x638b92*/
  v6 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*a1 + 440))(a1, &v12); /*0x638ba4*/
  v7 = *a1; /*0x638ba6*/
  v12 = v6; /*0x638baf*/
  v8 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v7 + 440))(a1, &v11); /*0x638bb9*/
  v11 = v8; /*0x638bbf*/
  v9 = Network_Process_6E7C20(&a3); /*0x638bc3*/
  if ( v9 ) /*0x638bca*/
  {
    v8 = v9[9]; /*0x638bcc*/
LABEL_9:
    v11 = v8; /*0x638bef*/
    return (_WORD)v6 == (_WORD)v8 && HIWORD(v12) == HIWORD(v11); /*0x638bef*/
  }
  v10 = BuildingLoadQueue::Find(&a3); /*0x638bd5*/
  if ( v10 ) /*0x638bdc*/
  {
    v8 = *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v10 + 440))(v10, &v11); /*0x638bed*/
    goto LABEL_9; /*0x638bed*/
  }
  return (_WORD)v6 == (_WORD)v8 && HIWORD(v12) == HIWORD(v11); /*0x638b89*/
}



// ==== 0x00638C40  ObjectClass::ExecuteActionPlanManager_Helper_638C40  this=ObjectClass  sig=csp ====
bool __thiscall ExecuteActionPlanManager_Helper_638C40(ObjectClass *this, int a2, char a3)
{
  if ( this != (ObjectClass *)1 && this != (ObjectClass *)11 ) /*0x638c48*/
    return 0; /*0x638c48*/
  if ( a3 == 11 ) /*0x638c50*/
    return 1; /*0x638c54*/
  return this == (ObjectClass *)11 && !a3; /*0x638c60*/
}



// ==== 0x00638C70  ScriptAction::IsBuildingTypeMatch  this=ScriptAction  sig=csp ====
char __thiscall ScriptAction::IsBuildingTypeMatch(ScriptAction *this)
{
  int v2; // edi
  _BYTE *WaypointCoords; // eax
  char v5; // al
  _BYTE v6[8]; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-8h]

  if ( !this ) /*0x638c79*/
    return 0; /*0x638c79*/
  v2 = (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 388))(this); /*0x638c83*/
  if ( v2 == 5 ) /*0x638c88*/
    return 1; /*0x638c91*/
  if ( ((WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v6, *((_DWORD **)this + 173)), /*0x638cc0*/
         v7 = *(_DWORD *)WaypointCoords,
         v5 = WaypointCoords[4],
         v2 == 1)
     || v2 == 11)
    && (v5 == 11 || v2 == 11 && !v5) )
  {
    return 1; /*0x638cc3*/
  }
  else
  {
    return 0; /*0x638ccb*/
  }
}



// ==== 0x00638CE0  ScriptAction::ClassifyAction  this=AbstractClass  sig=csp ====
int __fastcall ScriptAction::ClassifyAction(int *a1, char *a2)
{
  char v3; // cl
  int *Type; // eax
  int v6; // ecx
  Array *v7; // esi
  int Value; // eax
  int v9; // eax
  _BYTE *v10; // esi
  _BYTE v11[108]; // [esp+8h] [ebp-70h] BYREF
  __int16 v12; // [esp+74h] [ebp-4h]
  char v13; // [esp+76h] [ebp-2h]

  v3 = *a2; /*0x638ce8*/
  if ( *a2 == 9 || v3 == 6 || v3 == 7 ) /*0x638cf8*/
    return 0; /*0x638d01*/
  if ( Team_Load(a1, a2[12], *(_DWORD *)(a2 + 14), a2[18]) ) /*0x638d1a*/
    return 0; /*0x638d2a*/
  Type = (int *)BuildingClass::GetType((BuildingClass *)a1); /*0x638d2d*/
  if ( !Type ) /*0x638d34*/
    return -1; /*0x638d34*/
  v6 = Type[5]; /*0x638d36*/
  if ( v6 <= 0 ) /*0x638d3b*/
    return -1; /*0x638d3b*/
  v7 = *(Array **)(Type[2] + 4 * v6 - 4); /*0x638d43*/
  Value = Array::FindValue(v7, *Type); /*0x638d49*/
  if ( Value == -1 ) /*0x638d51*/
    v9 = 0; /*0x638d53*/
  else
    v9 = *((_DWORD *)v7->Array_field_0x4 + Value); /*0x638d5a*/
  v10 = *(_BYTE **)(v9 + 4); /*0x638d5d*/
  qmemcpy(v11, v10, sizeof(v11)); /*0x638d69*/
  v10 += 108; /*0x638d69*/
  v12 = *(_WORD *)v10; /*0x638d6b*/
  v13 = v10[2]; /*0x638d6d*/
  if ( v11[12] == 7 || v11[12] == 8 || v11[12] == 9 ) /*0x638d80*/
    return 1; /*0x638d8c*/
  if ( (v11[12] == 1 || v11[12] == 11) && (v11[18] == 11 || v11[12] == 11 && !v11[18]) ) /*0x638da7*/
    return 2; /*0x638da9*/
  else
    return -1; /*0x638db5*/
}



// ==== 0x00638E60  ObjectClass::SelectScriptNode  this=ObjectClass  sig=csp ====
void SelectScriptNode(ObjectClass *this)
{
  int v1; // ebx
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  int *ScreenPos; // eax
  int *v6; // eax
  int v7; // [esp+4h] [ebp-2Ch]
  int v8; // [esp+8h] [ebp-28h] BYREF
  int v9; // [esp+10h] [ebp-20h] BYREF
  int v10; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+18h] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-14h]
  int v13[4]; // [esp+20h] [ebp-10h] BYREF

  if ( !stru_AC4B30.__pad_EC[148] ) /*0x638e6b*/
  {
    v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer); /*0x638e85*/
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer); /*0x638e8c*/
    v3 = 0; /*0x638e93*/
    v7 = *(_DWORD *)&stru_AC4B30.__pad_EC[12]; /*0x638e95*/
    if ( *(int *)&stru_AC4B30.__pad_EC[12] <= 0 ) /*0x638e9b*/
    {
LABEL_8:
      v4 = 0; /*0x638f1c*/
    }
    else
    {
      while ( 1 ) /*0x638ea7*/
      {
        v4 = *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC + 4 * v3); /*0x638ea7*/
        ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v4, &v8); /*0x638eac*/
        v6 = ComputeBounds(v13, 8, *ScreenPos, ScreenPos[1]); /*0x638ec1*/
        v9 = *v6; /*0x638ec8*/
        v10 = v6[1]; /*0x638ecf*/
        v11 = v6[2]; /*0x638ed6*/
        v12 = v6[3]; /*0x638ee1*/
        ShrinkRect(&v9, 4); /*0x638eea*/
        if ( v1 >= v9 && v1 < v9 + v11 && v2 >= v10 && v2 < v10 + v12 ) /*0x638f11*/
          break; /*0x638f11*/
        if ( ++v3 >= v7 ) /*0x638f1a*/
          goto LABEL_8; /*0x638f1a*/
      }
    }
    if ( v4 != *(_DWORD *)&stru_AC4B30.__pad_EC[176] ) /*0x638f28*/
    {
      *(_DWORD *)&stru_AC4B30.__pad_EC[32] = 0; /*0x638f2c*/
      if ( v4 /*0x638f66*/
        && (*(Object **)(***(_DWORD ***)(v4 + 4) + 540) != dword_A83D4C
         || *(_DWORD *)&stru_AC4B30.__pad_EC[28] && *(_DWORD *)&stru_AC4B30.__pad_EC[28] != v4
         || BuildingClass::CheckBuildability((BuildingClass *)v4) != -1) )
      {
        *(_DWORD *)&stru_AC4B30.__pad_EC[32] = v4; /*0x638f68*/
        v4 = 0; /*0x638f6e*/
      }
      *(_DWORD *)&stru_AC4B30.__pad_EC[176] = v4; /*0x638f72*/
      if ( v4 ) /*0x638f78*/
        Team_Get((ObjectClass *)v4); /*0x638f7c*/
    }
  }
}



// ==== 0x00638F90  sub_638F90  this=-  sig=csp ====
int __stdcall sub_638F90(int a1, int a2)
{
  _DWORD *Coords; // eax
  _DWORD *v3; // eax
  int v4; // eax
  int v6; // [esp+8h] [ebp-34h] BYREF
  _DWORD v7[3]; // [esp+10h] [ebp-2Ch] BYREF
  _DWORD v8[4]; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD v9[4]; // [esp+2Ch] [ebp-10h] BYREF

  if ( !dword_AC4CCC ) /*0x638f9d*/
    return 0; /*0x638f9d*/
  Coords = ScriptAction::GetCoords((_DWORD **)dword_AC4CCC, v8); /*0x638fa8*/
  v7[0] = *Coords; /*0x638faf*/
  v7[1] = Coords[1]; /*0x638fba*/
  v7[2] = Coords[2]; /*0x638fc5*/
  v3 = ToCoordPixel(&v6, v7); /*0x638fc9*/
  Rect::Set(v9, *v3 - 4, v3[1] - 4, 8, 8); /*0x638fe5*/
  v8[0] = v9[0]; /*0x638ffe*/
  v4 = v9[1] - 4; /*0x639005*/
  if ( a1 < v9[0] - 4 ) /*0x639010*/
    return 0; /*0x639010*/
  if ( a1 < v9[2] + 8 + v9[0] - 4 && a2 >= v4 && a2 < v9[3] + 8 + v4 ) /*0x639024*/
    return dword_AC4CCC; /*0x639026*/
  else
    return 0; /*0x639034*/
}



// ==== 0x00639040  ObjectClass::ReadBuildingINIEntry  this=ObjectClass  sig=csp ====
char ReadBuildingINIEntry(ObjectClass *this)
{
  int v2; // ebp
  int v3; // eax
  int *i; // esi
  int v5; // ecx
  int *Type; // edi
  int v7; // esi
  int v8; // ecx
  _DWORD *v9; // eax
  wchar_t *StringCSF; // eax

  if ( !stru_AC4B30.__pad_EC[216] ) /*0x63904b*/
    return 1; /*0x63904f*/
  v2 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x639054*/
  if ( !*(_DWORD *)&stru_A8EB00.?[228] ) /*0x63905c*/
    return 1; /*0x63905e*/
  v3 = 0; /*0x639065*/
  if ( *(int *)&stru_A8EB00.?[228] > 0 ) /*0x639069*/
  {
    for ( i = *(int **)&stru_A8EB00.?[216]; ; ++i ) /*0x63906f*/
    {
      v5 = *i; /*0x639075*/
      if ( *i ) /*0x639075*/
      {
        if ( (*(_BYTE *)(v5 + 20) & 1) != 0 ) /*0x639085*/
          break; /*0x639085*/
      }
      if ( ++v3 >= *(int *)&stru_A8EB00.?[228] ) /*0x63908d*/
        return 0; /*0x639095*/
    }
    Type = (int *)BuildingClass::GetType((BuildingClass *)v5); /*0x63909b*/
    v7 = 0; /*0x63909d*/
    while ( 1 ) /*0x6390a4*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v7); /*0x6390a4*/
      if ( !v8 ) /*0x6390a9*/
        break; /*0x6390a9*/
      if ( (*(_BYTE *)(v8 + 20) & 1) == 0 ) /*0x6390b5*/
        break; /*0x6390b5*/
      v9 = (_DWORD *)BuildingClass::GetType((BuildingClass *)v8); /*0x6390b7*/
      if ( !Object_Read(Type, v9) ) /*0x6390c0*/
        break; /*0x6390c0*/
      if ( ++v7 >= v2 ) /*0x6390cc*/
        return 1; /*0x6390cc*/
    }
    if ( !stru_AC4B30.__pad_70[104] ) /*0x6390d7*/
    {
      stru_AC4B30.__pad_70[104] = 1; /*0x6390ea*/
      StringCSF = GetStringCSF(aMsgPlanningmod_2, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6390f1*/
      AddMessageListPlayerMessage(StringCSF, 480); /*0x6390fd*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x639119*/
    }
  }
  return 0; /*0x63904d*/
}



// ==== 0x00639130  ObjectClass::ReadBuildingINI  this=ObjectClass  sig=csp ====
char ReadBuildingINI(ObjectClass *this)
{
  unsigned int Object_field_0x30; // ecx
  int v2; // ebp
  int v3; // ebx
  int v4; // edi
  int i; // esi
  int v6; // ecx
  int Type; // eax
  wchar_t *StringCSF; // eax

  if ( !stru_AC4B30.__pad_EC[216] ) /*0x639138*/
    return 1; /*0x639138*/
  Object_field_0x30 = (unsigned int)dword_A83D4C->Object_field_0x30; /*0x639143*/
  v2 = 0; /*0x639157*/
  if ( Object_field_0x30 < 0x18 ) /*0x63915d*/
    v2 = *(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12]; /*0x63915f*/
  v3 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x639166*/
  v4 = 0; /*0x63916c*/
  for ( i = 0; i < v3; ++i ) /*0x639172*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * i); /*0x63917a*/
    if ( v6 ) /*0x63917f*/
    {
      if ( (*(_BYTE *)(v6 + 20) & 1) != 0 ) /*0x63918b*/
      {
        Type = BuildingClass::GetType((BuildingClass *)v6); /*0x63918d*/
        if ( !Type || !*(_DWORD *)(Type + 20) ) /*0x639196*/
          ++v4; /*0x63919d*/
      }
    }
  }
  if ( v4 + v2 <= 128 ) /*0x6391af*/
    return 1; /*0x639203*/
  if ( !stru_AC4B30.__pad_70[104] ) /*0x6391b8*/
  {
    stru_AC4B30.__pad_70[104] = 1; /*0x6391cb*/
    StringCSF = GetStringCSF(aMsgPlannermaxi, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6391d2*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x6391de*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x6391fa*/
  }
  return 0; /*0x639202*/
}



// ==== 0x00639210  sub_639210  this=-  sig=ida-proto ====
int __fastcall sub_639210(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  _DWORD *ScenarioClassActionCoords; // eax
  int v9; // ecx
  int v10; // edi
  int v14; // [esp+18h] [ebp-10h]
  _DWORD v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = dword_AC4B40; /*0x639217*/
  v6 = 0; /*0x63921d*/
  v14 = dword_AC4B40; /*0x639229*/
  if ( dword_AC4B40 <= 0 ) /*0x63922d*/
    return 0; /*0x6392bc*/
  while ( 1 ) /*0x63923c*/
  {
    v7 = *((_DWORD *)dword_AC4B34 + v6); /*0x63923c*/
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v15, *(_BYTE **)(**(_DWORD **)(v7 + 4) + 4)); /*0x63924b*/
    if ( *ScenarioClassActionCoords != a3 /*0x639276*/
      || ScenarioClassActionCoords[1] != a4
      || ScenarioClassActionCoords[2] != a5
      || a2 != -1 && a2 != *(_DWORD *)(v7 + 24) )
    {
      goto LABEL_13; /*0x639276*/
    }
    v9 = *(_DWORD *)(***(_DWORD ***)(v7 + 4) + 540); /*0x63927f*/
    v10 = *(_DWORD *)(v9 + 48); /*0x639285*/
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v9) && dword_A83D4C ) /*0x639298*/
      v10 = *((_DWORD *)dword_A83D4C + 12); /*0x63929a*/
    if ( a1 == -1 || a1 == v10 ) /*0x6392a8*/
      return v7; /*0x6392b3*/
    v5 = v14; /*0x6392aa*/
LABEL_13:
    if ( ++v6 >= v5 ) /*0x6392b1*/
      return 0; /*0x6392b1*/
  }
}



// ==== 0x006392D0  sub_6392D0  this=-  sig=csp ====
_DWORD **__stdcall sub_6392D0(int a1, int a2)
{
  int v2; // ebx
  _DWORD **v3; // edi
  _DWORD *Coords; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v8; // [esp+10h] [ebp-44h]
  int v9; // [esp+14h] [ebp-40h] BYREF
  _DWORD v10[3]; // [esp+1Ch] [ebp-38h] BYREF
  _DWORD v11[3]; // [esp+28h] [ebp-2Ch] BYREF
  _DWORD v12[8]; // [esp+34h] [ebp-20h] BYREF

  v2 = 0; /*0x6392da*/
  v8 = dword_AC4B40; /*0x6392e0*/
  if ( dword_AC4B40 <= 0 ) /*0x6392e4*/
    return 0; /*0x639393*/
  while ( 1 ) /*0x6392f8*/
  {
    v3 = (_DWORD **)*((_DWORD *)dword_AC4B34 + v2); /*0x6392f8*/
    Coords = ScriptAction::GetCoords(v3, v11); /*0x6392fd*/
    v10[0] = *Coords; /*0x639304*/
    v10[1] = Coords[1]; /*0x63930b*/
    v10[2] = Coords[2]; /*0x639316*/
    v5 = ToCoordPixel(&v9, v10); /*0x63931e*/
    Rect::Set(v12, *v5 - 4, v5[1] - 4, 8, 8); /*0x63933a*/
    v12[4] = v12[0]; /*0x63934f*/
    v6 = v12[1] - 4; /*0x639356*/
    if ( a1 >= v12[0] - 4 && a1 < v12[2] + 8 + v12[0] - 4 && a2 >= v6 && a2 < v12[3] + 8 + v6 ) /*0x639377*/
      break; /*0x639377*/
    if ( ++v2 >= v8 ) /*0x639380*/
      return 0; /*0x639380*/
  }
  return v3; /*0x639389*/
}



// ==== 0x006393A0  sub_6393A0  this=-  sig=csp ====
_DWORD **__stdcall sub_6393A0(int a1, int a2)
{
  int v2; // ebx
  _DWORD **v3; // edi
  _DWORD *Coords; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v8; // [esp+10h] [ebp-44h]
  int v9; // [esp+14h] [ebp-40h] BYREF
  _DWORD v10[3]; // [esp+1Ch] [ebp-38h] BYREF
  _DWORD v11[3]; // [esp+28h] [ebp-2Ch] BYREF
  _DWORD v12[8]; // [esp+34h] [ebp-20h] BYREF

  v2 = 0; /*0x6393aa*/
  v8 = dword_AC4C28; /*0x6393b0*/
  if ( dword_AC4C28 <= 0 ) /*0x6393b4*/
    return 0; /*0x639463*/
  while ( 1 ) /*0x6393c8*/
  {
    v3 = (_DWORD **)*((_DWORD *)dword_AC4C1C + v2); /*0x6393c8*/
    Coords = ScriptAction::GetCoords(v3, v11); /*0x6393cd*/
    v10[0] = *Coords; /*0x6393d4*/
    v10[1] = Coords[1]; /*0x6393db*/
    v10[2] = Coords[2]; /*0x6393e6*/
    v5 = ToCoordPixel(&v9, v10); /*0x6393ee*/
    Rect::Set(v12, *v5 - 4, v5[1] - 4, 8, 8); /*0x63940a*/
    v12[4] = v12[0]; /*0x63941f*/
    v6 = v12[1] - 4; /*0x639426*/
    if ( a1 >= v12[0] - 4 && a1 < v12[2] + 8 + v12[0] - 4 && a2 >= v6 && a2 < v12[3] + 8 + v6 ) /*0x639447*/
      break; /*0x639447*/
    if ( ++v2 >= v8 ) /*0x639450*/
      return 0; /*0x639450*/
  }
  return v3; /*0x639459*/
}



// ==== 0x00639470  sub_639470  this=-  sig=csp ====
int __stdcall sub_639470(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  _DWORD *ScenarioClassActionCoords; // eax
  _DWORD v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = dword_AC4C28; /*0x639475*/
  v4 = 0; /*0x63947d*/
  if ( dword_AC4C28 <= 0 ) /*0x639481*/
    return 0; /*0x6394cd*/
  while ( 1 ) /*0x63948c*/
  {
    v5 = *((_DWORD *)dword_AC4C1C + v4); /*0x63948c*/
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(_BYTE **)(**(_DWORD **)(v5 + 4) + 4)); /*0x63949b*/
    if ( *ScenarioClassActionCoords == a1 && ScenarioClassActionCoords[1] == a2 && ScenarioClassActionCoords[2] == a3 ) /*0x6394b8*/
      break; /*0x6394b8*/
    if ( ++v4 >= v3 ) /*0x6394bd*/
      return 0; /*0x6394bd*/
  }
  return v5; /*0x6394c3*/
}



// ==== 0x006394E0  sub_6394E0  this=-  sig=ida-proto ====
char __fastcall sub_6394E0(_DWORD *a1, int a2)
{
  _BYTE *v3; // esi
  BuildingLoadQueue *v4; // ecx
  _DWORD *Next; // eax
  _BYTE *WaypointCoords; // eax
  int v7; // edx
  _BYTE *v8; // eax
  _BYTE v10[108]; // [esp-70h] [ebp-16Ch] BYREF
  int v11; // [esp-4h] [ebp-100h]
  _BYTE v12[236]; // [esp+Ch] [ebp-F0h] BYREF
  __int16 v13; // [esp+F8h] [ebp-4h]
  char v14; // [esp+FAh] [ebp-2h]

  v3 = *(_BYTE **)(**(_DWORD **)(a2 + 4) + 4); /*0x6394ef*/
  qmemcpy(&v12[16], v3, 0x6Cu); /*0x6394fc*/
  v3 += 108; /*0x6394fc*/
  *(_WORD *)&v12[124] = *(_WORD *)v3; /*0x6394fe*/
  v12[126] = v3[2]; /*0x639500*/
  if ( v12[34] ) /*0x639507*/
  {
    v4 = (BuildingLoadQueue *)&v12[30]; /*0x639509*/
  }
  else if ( v12[44] ) /*0x639515*/
  {
    v4 = (BuildingLoadQueue *)&v12[40]; /*0x639517*/
  }
  else
  {
    LOBYTE(Next) = v12[39]; /*0x63951d*/
    if ( !v12[39] ) /*0x639523*/
      return (char)Next; /*0x639523*/
    v4 = (BuildingLoadQueue *)&v12[35]; /*0x639525*/
  }
  Next = BuildingLoadQueue::GetNext(v4); /*0x639529*/
  if ( Next ) /*0x639530*/
  {
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)&v12[8], Next); /*0x639537*/
    v7 = *(_DWORD *)WaypointCoords; /*0x63953c*/
    LOBYTE(WaypointCoords) = WaypointCoords[4]; /*0x639543*/
    *(_DWORD *)&v10[104] = v7; /*0x639547*/
    LOBYTE(v11) = (_BYTE)WaypointCoords; /*0x639549*/
    v8 = ScriptAction::GetWaypointCoords((ScriptAction *)v12, a1); /*0x639550*/
    ScenarioClass::SetEvent( /*0x639577*/
      &v12[128],
      (int)dword_A83D4C->Object_field_0x30,
      42,
      *(_DWORD *)v8,
      v8[4],
      *(int *)&v10[104],
      v11);
    qmemcpy(v10, &v12[128], sizeof(v10)); /*0x63958d*/
    LOWORD(v11) = v13; /*0x63958f*/
    BYTE2(v11) = v14; /*0x639591*/
    LOBYTE(Next) = Network::RecordEvent( /*0x639592*/
                     *(__int64 *)v10,
                     *(int *)&v10[8],
                     *(int *)&v10[12],
                     *(int *)&v10[16],
                     *(int *)&v10[20],
                     *(int *)&v10[24],
                     *(int *)&v10[28],
                     *(int *)&v10[32],
                     *(int *)&v10[36],
                     *(int *)&v10[40],
                     *(int *)&v10[44],
                     *(int *)&v10[48],
                     *(int *)&v10[52],
                     *(int *)&v10[56],
                     *(int *)&v10[60],
                     *(int *)&v10[64],
                     *(int *)&v10[68],
                     *(int *)&v10[72],
                     *(int *)&v10[76],
                     *(int *)&v10[80],
                     *(int *)&v10[84],
                     *(int *)&v10[88],
                     *(int *)&v10[92],
                     *(int *)&v10[96],
                     *(int *)&v10[100],
                     *(int *)&v10[104],
                     v11);
  }
  return (char)Next; /*0x639597*/
}



// ==== 0x006395B0  BuildingClass::SetProduction  this=BuildingClass  sig=ida-proto ====
char __fastcall BuildingClass::SetProduction(int a1, ScriptAction *a2)
{
  ScriptAction *v2; // ebx
  int Type; // eax
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // ebx
  int i; // esi
  _BYTE *v18; // ecx
  int v20; // [esp+10h] [ebp-Ch] BYREF
  ScriptAction *v21; // [esp+14h] [ebp-8h] BYREF
  int v22; // [esp+18h] [ebp-4h]

  v2 = a2; /*0x6395b6*/
  v22 = (int)a2; /*0x6395bb*/
  Type = BuildingClass::GetType((BuildingClass *)a1); /*0x6395bf*/
  if ( !Type ) /*0x6395c6*/
  {
    v5 = __2_YAPAXI_Z(0x9Cu); /*0x6395d1*/
    v6 = v5; /*0x6395d6*/
    if ( v5 ) /*0x6395dd*/
    {
      v7 = (_DWORD *)(v5 + 4); /*0x6395df*/
      Object_Set((VectorClass *)(v5 + 4), 0, 0); /*0x6395e8*/
      *v7 = &DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x6395ed*/
      *(_DWORD *)(v6 + 24) = 10; /*0x6395f3*/
      *(_DWORD *)(v6 + 20) = 0; /*0x6395fa*/
      *(_BYTE *)(v6 + 28) = 0; /*0x639601*/
      *(_BYTE *)(v6 + 29) = 0; /*0x639608*/
      *(_DWORD *)(v6 + 140) = -1; /*0x63960c*/
      *(_DWORD *)(v6 + 144) = -1; /*0x639612*/
      *(_DWORD *)(v6 + 148) = -1; /*0x639618*/
      *(_BYTE *)(v6 + 152) = 0; /*0x63961e*/
      *(_BYTE *)(v6 + 153) = 0; /*0x639625*/
      *(_DWORD *)v6 = a1; /*0x63962c*/
      v20 = v6; /*0x63962e*/
    }
    else
    {
      v20 = 0; /*0x639634*/
    }
    ScriptActionVector::PushBack((ScriptActionVector *)&stru_AC4B30.__pad_EC[92], &v20); /*0x639646*/
    BuildingClass::SetType((BuildingClass *)a1, v20); /*0x639652*/
    Type = v20; /*0x639657*/
  }
  v8 = *(_DWORD *)(Type + 4); /*0x63965b*/
  v21 = v2; /*0x639665*/
  if ( (*(int (__thiscall **)(int, ScriptAction **))(v8 + 16))(Type + 4, &v21) == -1 ) /*0x639670*/
    return CompleteBuildingProduction((_DWORD *)a1, (int)v2); /*0x639727*/
  v9 = BuildingClass::GetType((BuildingClass *)a1); /*0x639678*/
  v10 = *(_DWORD *)(v9 + 4); /*0x63967d*/
  v21 = v2; /*0x639687*/
  v11 = (*(int (__thiscall **)(int, ScriptAction **))(v10 + 16))(v9 + 4, &v21); /*0x639691*/
  v12 = BuildingClass::GetType((BuildingClass *)a1); /*0x639698*/
  v13 = *(_DWORD *)(v12 + 20); /*0x63969a*/
  *(_DWORD *)(v12 + 148) = v11; /*0x63969d*/
  *(_BYTE *)(v12 + 152) = 1; /*0x6396a5*/
  *(_DWORD *)(v12 + 144) = v13 - v11; /*0x6396ac*/
  if ( !stru_AC4B30.__pad_EC[172] ) /*0x6396b9*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(a1 + 540)) ) /*0x6396c1*/
    {
      stru_AC4B30.__pad_EC[172] = 1; /*0x6396ca*/
      v14 = *(_DWORD *)(v12 + 20) - 1; /*0x6396d4*/
      if ( v14 >= 0 ) /*0x6396d5*/
        v15 = *(_DWORD *)(*(_DWORD *)(v12 + 8) + 4 * v14); /*0x6396de*/
      else
        v15 = 0; /*0x6396d7*/
      v16 = *(_DWORD *)(v15 + 16); /*0x6396e1*/
      for ( i = 0; i < v16; ++i ) /*0x6396e8*/
      {
        v18 = **(_BYTE ***)(*(_DWORD *)(v15 + 4) + 4 * i); /*0x6396f0*/
        if ( v18[131] ) /*0x6396f2*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 336))(v18); /*0x6396fe*/
      }
      v2 = (ScriptAction *)v22; /*0x639709*/
    }
    BuildingClass::CheckExitPath((BuildingClass *)a1); /*0x63970f*/
  }
  return ScriptAction::FindSquadMember(v2); /*0x63971b*/
}



// ==== 0x00639740  BuildingClass::CompleteProduction  this=BuildingClass  sig=ida-proto ====
int __fastcall BuildingClass::CompleteProduction(int a1, ScriptAction *a2)
{
  ScriptAction *v2; // ebx
  int Type; // eax
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int i; // esi
  _DWORD *v12; // eax
  ScriptAction *v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  v2 = a2; /*0x639746*/
  v15 = (int)a2; /*0x63974b*/
  Type = BuildingClass::GetType((BuildingClass *)a1); /*0x63974f*/
  v14 = v2; /*0x63975c*/
  v5 = (*(int (__thiscall **)(int, ScriptAction **))(*(_DWORD *)(Type + 4) + 16))(Type + 4, &v14); /*0x639767*/
  v6 = BuildingClass::GetType((BuildingClass *)a1); /*0x63976e*/
  v7 = *(_DWORD *)(v6 + 20); /*0x639770*/
  *(_DWORD *)(v6 + 148) = v5; /*0x639773*/
  *(_BYTE *)(v6 + 152) = 1; /*0x63977b*/
  *(_DWORD *)(v6 + 144) = v7 - v5; /*0x639782*/
  if ( !stru_AC4B30.__pad_EC[172] ) /*0x63978f*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(a1 + 540)) ) /*0x639797*/
    {
      stru_AC4B30.__pad_EC[172] = 1; /*0x6397a0*/
      v8 = *(_DWORD *)(v6 + 20) - 1; /*0x6397aa*/
      if ( v8 >= 0 ) /*0x6397ab*/
        v9 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * v8); /*0x6397b4*/
      else
        v9 = 0; /*0x6397ad*/
      v10 = *(_DWORD *)(v9 + 16); /*0x6397b7*/
      for ( i = 0; i < v10; ++i ) /*0x6397be*/
      {
        v12 = *(_DWORD **)(*(_DWORD *)(v9 + 4) + 4 * i); /*0x6397c3*/
        if ( *(_BYTE *)(*v12 + 131) ) /*0x6397c8*/
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v12 + 336))(*v12); /*0x6397d4*/
      }
      v2 = (ScriptAction *)v15; /*0x6397df*/
    }
    BuildingClass::CheckExitPath((BuildingClass *)a1); /*0x6397e5*/
  }
  return ScriptAction::FindSquadMember(v2); /*0x6397f1*/
}



// ==== 0x00639800  CompleteBuildingProduction  this=-  sig=csp ====
char __fastcall CompleteBuildingProduction(BuildingClass *a1, int a2)
{
  ScriptAction *v2; // edi
  BuildingClass *v4; // ebx
  int Type; // eax
  int v6; // edx
  int v7; // ebp
  TeamClass *v8; // ebx
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // ecx
  int abstractFlags; // edi
  int v13; // edx
  ScriptAction *v14; // esi
  int v15; // edx
  ScriptAction *v16; // eax
  int v17; // eax
  _BYTE *v18; // esi
  BuildingClass *v19; // esi
  _BYTE *WaypointCoords; // eax
  ScriptAction *v21; // eax
  ScriptAction *v22; // edx
  int v23; // eax
  int v24; // esi
  int v25; // ebx
  int j; // edi
  int v27; // ecx
  int i; // edi
  _BYTE *v29; // ecx
  int vtable0; // [esp-4h] [ebp-A4h]
  ScriptAction *v32; // [esp+10h] [ebp-90h] BYREF
  ScriptAction *v33; // [esp+14h] [ebp-8Ch]
  int v34; // [esp+18h] [ebp-88h] BYREF
  _DWORD *v35; // [esp+1Ch] [ebp-84h]
  int v36; // [esp+20h] [ebp-80h] BYREF
  BuildingClass *v37; // [esp+24h] [ebp-7Ch]
  _BYTE v38[8]; // [esp+28h] [ebp-78h] BYREF
  _BYTE v39[108]; // [esp+30h] [ebp-70h] BYREF
  __int16 v40; // [esp+9Ch] [ebp-4h]
  char v41; // [esp+9Eh] [ebp-2h]

  v2 = (ScriptAction *)a2; /*0x63980a*/
  v36 = a2; /*0x63980e*/
  v37 = a1; /*0x639812*/
  v4 = ***(BuildingClass ****)(a2 + 4); /*0x63981b*/
  Type = BuildingClass::GetType(v4); /*0x63981f*/
  v6 = *(_DWORD *)(Type + 4); /*0x639824*/
  v34 = (int)v2; /*0x63982e*/
  v7 = (*(int (__thiscall **)(int, int *))(v6 + 16))(Type + 4, &v34); /*0x639838*/
  v8 = (TeamClass *)BuildingClass::GetType(v4); /*0x63983f*/
  TeamClass::UpdateBuildQueue(v8, a1, v7, v8->? - v7); /*0x63984b*/
  v32 = (ScriptAction *)-1; /*0x639855*/
  v34 = -1; /*0x639859*/
  v33 = 0; /*0x63985d*/
  v9 = BuildingClass::GetType(a1); /*0x639865*/
  v10 = v8->countObjects[3]; /*0x63986a*/
  v11 = (_DWORD *)v9; /*0x639870*/
  v35 = (_DWORD *)v9; /*0x639874*/
  if ( v10 < 0 ) /*0x639878*/
  {
    v2 = v33; /*0x63997f*/
    v17 = v34; /*0x639983*/
  }
  else
  {
    v34 = v8->countObjects[2]; /*0x639888*/
    if ( v10 <= 0 || v7 >= v10 ) /*0x639890*/
    {
      if ( BuildingClass::GetType(v37) ) /*0x6398e5*/
      {
        v33 = (ScriptAction *)v10; /*0x6398f0*/
        if ( v10 < v7 ) /*0x6398f4*/
        {
          do /*0x639952*/
          {
            vtable0 = (int)v8->AbstractClass; /*0x639902*/
            v32 = (ScriptAction *)*((_DWORD *)v8->? + (_DWORD)v33); /*0x639903*/
            v18 = (_BYTE *)ScriptAction::FindItemByValue(v32, vtable0)[1]; /*0x63990c*/
            qmemcpy(v39, v18, sizeof(v39)); /*0x639918*/
            v18 += 108; /*0x639918*/
            v40 = *(_WORD *)v18; /*0x63991a*/
            v41 = v18[2]; /*0x63991c*/
            v19 = v37; /*0x63991d*/
            WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v38, v37); /*0x639926*/
            *(_DWORD *)&v39[7] = *(_DWORD *)WaypointCoords; /*0x63992d*/
            v39[11] = WaypointCoords[4]; /*0x63993e*/
            ScriptAction::CreatePlacementAction(v32, v19, v39); /*0x639942*/
            v33 = (ScriptAction *)((char *)v33 + 1); /*0x63994e*/
          }
          while ( (int)v33 < v7 ); /*0x639952*/
          v2 = (ScriptAction *)v36; /*0x639954*/
        }
      }
      v36 = (int)v2; /*0x639964*/
      v21 = (ScriptAction *)(*(int (__thiscall **)(_DWORD *, int *))(v35[1] + 16))(v35 + 1, &v36); /*0x63996a*/
      v11 = v35; /*0x63996d*/
      v32 = v21; /*0x639971*/
      v17 = v34; /*0x639975*/
      v33 = v2; /*0x639979*/
    }
    else
    {
      abstractFlags = v8->?; /*0x639892*/
      v13 = v10; /*0x639895*/
      if ( !abstractFlags ) /*0x639899*/
        goto LABEL_10; /*0x639899*/
      if ( v10 >= abstractFlags ) /*0x63989d*/
        v13 = v10 + 0 % v34; /*0x6398a8*/
      if ( v13 >= 0 && v13 < abstractFlags ) /*0x6398b0*/
        v14 = (ScriptAction *)*((_DWORD *)v8->? + v13); /*0x6398b5*/
      else
LABEL_10:
        v14 = 0; /*0x6398ba*/
      v15 = *(_DWORD *)(v9 + 4); /*0x6398bc*/
      v32 = v14; /*0x6398c6*/
      v16 = (ScriptAction *)(*(int (__thiscall **)(int, ScriptAction **))(v15 + 16))(v9 + 4, &v32); /*0x6398cb*/
      v2 = v14; /*0x6398ce*/
      v11 = v35; /*0x6398d0*/
      v32 = v16; /*0x6398d4*/
      v17 = v34; /*0x6398d8*/
    }
  }
  v22 = v32; /*0x639987*/
  v11[36] = v17; /*0x63998f*/
  v11[37] = v22; /*0x639995*/
  *((_BYTE *)v11 + 152) = 1; /*0x63999b*/
  if ( v2 ) /*0x6399a1*/
    ScriptAction::FindSquadMember(v2); /*0x6399a5*/
  LOBYTE(v23) = stru_AC4B30.__pad_EC[180]; /*0x6399aa*/
  if ( !stru_AC4B30.__pad_EC[180] ) /*0x6399b1*/
  {
    LOBYTE(v23) = House::IsHumanPlayer((House *)v37->?); /*0x6399c1*/
    if ( (_BYTE)v23 ) /*0x6399c8*/
    {
      stru_AC4B30.__pad_EC[180] = 1; /*0x6399ce*/
      v23 = v35[5] - 1; /*0x6399d7*/
      if ( v23 >= 0 ) /*0x6399d8*/
        v24 = *(_DWORD *)(v35[2] + 4 * v23); /*0x6399e1*/
      else
        v24 = 0; /*0x6399da*/
      v25 = *(_DWORD *)(v24 + 16); /*0x6399e4*/
      if ( v2 ) /*0x6399e9*/
      {
        for ( i = 0; i < v25; ++i ) /*0x639a1f*/
        {
          v29 = **(_BYTE ***)(*(_DWORD *)(v24 + 4) + 4 * i); /*0x639a27*/
          LOBYTE(v23) = v29[131]; /*0x639a29*/
          if ( (_BYTE)v23 ) /*0x639a31*/
            LOBYTE(v23) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v29 + 336))(v29); /*0x639a35*/
        }
      }
      else
      {
        for ( j = 0; j < v25; ++j ) /*0x6399ef*/
        {
          v23 = *(_DWORD *)(*(_DWORD *)(v24 + 4) + 4 * j); /*0x6399f4*/
          v27 = *(_DWORD *)v23; /*0x6399f7*/
          LOBYTE(v23) = *(_BYTE *)(*(_DWORD *)v23 + 131); /*0x6399f9*/
          if ( !(_BYTE)v23 ) /*0x639a01*/
            LOBYTE(v23) = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 332))(v27); /*0x639a05*/
        }
      }
    }
  }
  return v23; /*0x639a10*/
}



// ==== 0x00639A50  ScriptAction::ExecutePlacement  this=ScriptAction  sig=ida-proto ====
int __fastcall sub_639A50(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  int result; // eax
  _DWORD *v31; // ebx
  _BYTE *WaypointCoords; // eax
  _DWORD *v33; // eax
  _BYTE *v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  int Type; // ebx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // edx
  _DWORD *v44; // [esp+Ch] [ebp-18h]
  int v45; // [esp+10h] [ebp-14h]
  int v46; // [esp+14h] [ebp-10h]
  int v47; // [esp+18h] [ebp-Ch]
  char v48[8]; // [esp+1Ch] [ebp-8h] BYREF

  result = *(_DWORD *)(a2 + 16); /*0x639a53*/
  v46 = a2; /*0x639a5c*/
  v47 = result; /*0x639a62*/
  v45 = 0; /*0x639a66*/
  if ( result > 0 ) /*0x639a6a*/
  {
    while ( 1 ) /*0x639a88*/
    {
      v31 = **(_DWORD ***)(*(_DWORD *)(a2 + 4) + 4 * v45); /*0x639a88*/
      WaypointCoords = ScriptAction::GetWaypointCoords(v48, v31); /*0x639a8b*/
      *(_DWORD *)((char *)&a4 + 3) = *(_DWORD *)WaypointCoords; /*0x639a94*/
      HIBYTE(a4) = WaypointCoords[4]; /*0x639a9b*/
      v33 = __2_YAPAXI_Z(0x10u); /*0x639a9f*/
      if ( v33 ) /*0x639aa9*/
      {
        *v33 = 0; /*0x639aab*/
        v33[1] = 0; /*0x639aad*/
        v33[2] = -1; /*0x639ab0*/
        *((_BYTE *)v33 + 12) = 0; /*0x639ab7*/
        v44 = v33; /*0x639abb*/
      }
      else
      {
        v44 = 0; /*0x639ac1*/
      }
      *v44 = v31; /*0x639acb*/
      v34 = __2_YAPAXI_Z(0x6Fu); /*0x639acd*/
      if ( v34 ) /*0x639ad7*/
        *v34 = 0; /*0x639ad9*/
      else
        v34 = 0; /*0x639ade*/
      qmemcpy(v34, &a3, 0x6Cu); /*0x639aeb*/
      *((_WORD *)v34 + 54) = a29; /*0x639aed*/
      v34[110] = BYTE2(a29); /*0x639aef*/
      v44[1] = v34; /*0x639af4*/
      v35 = *(_DWORD *)(a1 + 8); /*0x639af7*/
      if ( *(_DWORD *)(a1 + 16) < v35 /*0x639b1b*/
        || (*(_BYTE *)(a1 + 13) || !v35)
        && (v36 = *(_DWORD *)(a1 + 20), v36 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v35 + v36, 0) )
      {
        v37 = *(_DWORD *)(a1 + 16); /*0x639b22*/
        v38 = *(_DWORD *)(a1 + 4); /*0x639b25*/
        *(_DWORD *)(a1 + 16) = v37 + 1; /*0x639b2b*/
        *(_DWORD *)(v38 + 4 * v37) = v44; /*0x639b2e*/
      }
      Type = BuildingClass::GetType(v31); /*0x639b38*/
      v40 = *(_DWORD *)(Type + 12); /*0x639b3a*/
      if ( *(_DWORD *)(Type + 20) < v40 /*0x639b62*/
        || (*(_BYTE *)(Type + 17) || !v40)
        && (v41 = *(_DWORD *)(Type + 24), v41 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v40 + v41, 0) )
      {
        v42 = *(_DWORD *)(Type + 20); /*0x639b69*/
        v43 = *(_DWORD *)(Type + 8); /*0x639b6c*/
        *(_DWORD *)(Type + 20) = v42 + 1; /*0x639b72*/
        *(_DWORD *)(v43 + 4 * v42) = a1; /*0x639b75*/
      }
      if ( *(_DWORD *)(Type + 140) == -1 ) /*0x639b7f*/
        *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x639b85*/
      ScriptAction::PlaceObject(a1, v44); /*0x639b8e*/
      result = ++v45; /*0x639b9b*/
      if ( v45 >= v47 ) /*0x639ba2*/
        break; /*0x639ba2*/
      a2 = v46; /*0x639a74*/
    }
  }
  return result; /*0x639baa*/
}



// ==== 0x00639BC0  BuildingClass::FlushScriptActions  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::FlushScriptActions(BuildingClass *this)
{
  _DWORD *Type; // esi
  int v3; // eax
  BuildingClass *v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  BuildingClass *v9; // edx
  int i; // edi
  TeamClass *v11; // esi
  int v12; // eax
  int uniqueId; // edi
  int j; // esi
  BuildingClass *v15; // [esp+10h] [ebp-4h] BYREF

  if ( !this ) /*0x639bc9*/
    return; /*0x639bc9*/
  Type = (_DWORD *)BuildingClass::GetType(**(BuildingClass ***)this->?); /*0x639bdb*/
  v15 = this; /*0x639be2*/
  v3 = (*(int (__thiscall **)(_DWORD *, BuildingClass **))(Type[1] + 16))(Type + 1, &v15); /*0x639bec*/
  if ( v3 != -1 ) /*0x639bf2*/
  {
    v5 = Type[5]; /*0x639bf8*/
    if ( v5 == 1 ) /*0x639bfe*/
    {
      v4 = this; /*0x639c00*/
      goto LABEL_17; /*0x639c02*/
    }
    v6 = v3 + 1; /*0x639c04*/
    if ( v6 >= v5 ) /*0x639c07*/
      v6 = 0; /*0x639c09*/
    v7 = v6; /*0x639c0d*/
    if ( !v5 ) /*0x639c0f*/
      goto LABEL_15; /*0x639c0f*/
    if ( v6 >= v5 ) /*0x639c13*/
    {
      v8 = Type[37]; /*0x639c15*/
      if ( v8 < 0 ) /*0x639c1d*/
        goto LABEL_15; /*0x639c1d*/
      v7 = v8 + (v6 - v8) % Type[36]; /*0x639c2a*/
    }
    if ( v7 >= 0 && v7 < v5 ) /*0x639c32*/
    {
      v9 = *(BuildingClass **)(Type[2] + 4 * v7); /*0x639c37*/
LABEL_16:
      v4 = v9; /*0x639c3e*/
      goto LABEL_17; /*0x639c3e*/
    }
LABEL_15:
    v9 = 0; /*0x639c3c*/
    goto LABEL_16; /*0x639c3c*/
  }
  v4 = 0; /*0x639bf4*/
LABEL_17:
  for ( i = this->? - 1; i >= 0; --i ) /*0x639c44*/
  {
    v11 = (TeamClass *)BuildingClass::GetType(**((BuildingClass ***)this->? + i)); /*0x639c53*/
    v15 = this; /*0x639c5a*/
    v12 = (*((int (__thiscall **)(void **, BuildingClass **))v11->? + 4))(&v11->?, &v15); /*0x639c64*/
    TeamClass::Cleanup(v11, v12); /*0x639c6a*/
  }
  if ( v4 && v4 != this ) /*0x639c78*/
  {
    FactoryClass::ClearObjects((FactoryClass *)v4); /*0x639c7c*/
    uniqueId = v4->?; /*0x639c81*/
    for ( j = 0; j < uniqueId; ++j ) /*0x639c88*/
      ScriptAction::PlaceObject((int)v4, *((_DWORD **)v4->? + j)); /*0x639c93*/
    ScriptAction::FindSquadMember((ScriptAction *)v4); /*0x639c9f*/
    LOBYTE(v4->?) = 0; /*0x639ca4*/
  }
}



// ==== 0x00639CB0  BuildingClass::CheckExitPath  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckExitPath(BuildingClass *this)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // edx
  int v10; // edx
  int v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  int i; // ecx
  int v16; // eax
  int v17; // [esp+10h] [ebp-8h]
  _DWORD *v18; // [esp+14h] [ebp-4h]

  result = BuildingClass::GetType(this); /*0x639cb7*/
  v2 = result; /*0x639cbc*/
  v3 = 0; /*0x639cbe*/
  v18 = (_DWORD *)result; /*0x639cc0*/
  v4 = *(_DWORD *)(result + 20); /*0x639cc4*/
  v5 = *(_DWORD *)(result + 148); /*0x639cc7*/
  v17 = v4; /*0x639ccf*/
  if ( v4 /*0x639cf0*/
    && (v4 > 0
     || v5 >= 0 && (result = -v5 / *(_DWORD *)(result + 144), v3 = v5 + -v5 % *(_DWORD *)(v2 + 144), v3 >= 0) && v3 < v4) )
  {
    result = *(_DWORD *)(v2 + 8); /*0x639cf2*/
    v6 = *(_DWORD *)(result + 4 * v3); /*0x639cf5*/
  }
  else
  {
    v6 = 0; /*0x639cfa*/
  }
  v7 = *(_DWORD *)(v6 + 16); /*0x639cfc*/
  v8 = 0; /*0x639cff*/
  if ( v7 > 0 ) /*0x639d03*/
  {
    while ( 1 ) /*0x639d0c*/
    {
      v9 = *(_DWORD **)(*(_DWORD *)(v6 + 4) + 4 * v8); /*0x639d0c*/
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v9 + 1216))(*v9); /*0x639d13*/
      if ( (_BYTE)result ) /*0x639d1b*/
        break; /*0x639d1b*/
      if ( ++v8 >= v7 ) /*0x639d20*/
        return result; /*0x639d20*/
    }
    if ( v5 < v17 ) /*0x639d2e*/
    {
      while ( 1 ) /*0x639d36*/
      {
        v10 = v5; /*0x639d36*/
        v11 = v18[5]; /*0x639d38*/
        if ( !v11 ) /*0x639d3d*/
          break; /*0x639d3d*/
        if ( v5 >= v11 ) /*0x639d41*/
        {
          v12 = v18[37]; /*0x639d43*/
          if ( v12 < 0 ) /*0x639d4b*/
            break; /*0x639d4b*/
          v10 = v12 + (v5 - v12) % v18[36]; /*0x639d5a*/
        }
        if ( v10 < 0 || v10 >= v11 ) /*0x639d62*/
          break; /*0x639d62*/
        v13 = *(_DWORD *)(v18[2] + 4 * v10); /*0x639d67*/
LABEL_21:
        v14 = *(_DWORD *)(v13 + 16); /*0x639d6e*/
        for ( i = 0; i < v14; ++i ) /*0x639d75*/
        {
          v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * i) + 4); /*0x639d7d*/
          if ( *(_BYTE *)(v16 + 12) == 2 ) /*0x639d83*/
            *(_BYTE *)(v16 + 12) = 29; /*0x639d85*/
        }
        result = v17; /*0x639d8e*/
        if ( ++v5 >= v17 ) /*0x639d95*/
          return result; /*0x639d95*/
      }
      v13 = 0; /*0x639d6c*/
      goto LABEL_21; /*0x639d6c*/
    }
  }
  return result; /*0x639d22*/
}



// ==== 0x00639DA0  UI_Process_639DA0  this=-  sig=ida-proto ====
int sub_639DA0()
{
  wchar_t *v0; // ebx
  int v1; // edi
  _BYTE *v2; // esi

  v0 = dword_A8ECC8; /*0x639da2*/
  v1 = 0; /*0x639dae*/
  if ( (int)dword_A8ECC8 <= 0 ) /*0x639db2*/
    return -1; /*0x639e1b*/
  while ( 1 ) /*0x639db9*/
  {
    v2 = (_BYTE *)*((_DWORD *)dword_A8ECBC + v1); /*0x639db9*/
    if ( !v2 || (v2[20] & 1) == 0 ) /*0x639dca*/
      break; /*0x639dca*/
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 1212))(v2) ) /*0x639dd8*/
    {
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 44))(v2) == 2 ) /*0x639def*/
        return 0; /*0x639df8*/
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 44))(v2) == 6 ) /*0x639e03*/
        return 1; /*0x639e0f*/
      return 2; /*0x639e03*/
    }
    if ( ++v1 >= (int)v0 ) /*0x639ddd*/
      return -1; /*0x639ddd*/
  }
  return 2; /*0x639df1*/
}



// ==== 0x00639E30  Object_Read  this=-  sig=csp ====
char __fastcall sub_639E30(int *a1, _DWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD **i; // edx
  int v18; // edx
  int v19; // eax
  _DWORD **j; // ecx
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+10h] [ebp-4h]

  if ( !a1 && !a2 ) /*0x639e3d*/
    return 1; /*0x639e46*/
  v4 = 0; /*0x639e47*/
  if ( a1 ) /*0x639e4b*/
    v4 = a1[5]; /*0x639e4d*/
  v5 = 0; /*0x639e50*/
  v21 = 0; /*0x639e54*/
  if ( a2 ) /*0x639e58*/
  {
    v5 = a2[5]; /*0x639e5a*/
    v21 = v5; /*0x639e5d*/
  }
  if ( !v4 ) /*0x639e63*/
    return !v5; /*0x639e67*/
  if ( !v5 ) /*0x639e77*/
    return 0; /*0x639f1a*/
  v6 = a1[5]; /*0x639e7d*/
  v7 = v4 - 1; /*0x639e80*/
  if ( !v6 ) /*0x639e83*/
    goto LABEL_19; /*0x639e83*/
  if ( v7 >= v6 ) /*0x639e87*/
  {
    v8 = a1[37]; /*0x639e89*/
    if ( v8 < 0 ) /*0x639e91*/
      goto LABEL_19; /*0x639e91*/
    v7 = v8 + (v7 - v8) % a1[36]; /*0x639ea0*/
    v5 = v21; /*0x639ea2*/
  }
  if ( v7 >= 0 && v7 < v6 ) /*0x639eac*/
  {
    v9 = *(_DWORD *)(a1[2] + 4 * v7); /*0x639eb1*/
    goto LABEL_20; /*0x639eb4*/
  }
LABEL_19:
  v9 = 0; /*0x639eb6*/
LABEL_20:
  v10 = a2[5]; /*0x639eb8*/
  v11 = v5 - 1; /*0x639ebb*/
  if ( !v10 ) /*0x639ec0*/
    goto LABEL_27; /*0x639ec0*/
  if ( v11 >= v10 ) /*0x639ec4*/
  {
    v12 = a2[37]; /*0x639ec6*/
    if ( v12 >= 0 ) /*0x639ece*/
    {
      v11 = v12 + (v11 - v12) % a2[36]; /*0x639edd*/
      goto LABEL_24; /*0x639edd*/
    }
LABEL_27:
    v13 = 0; /*0x639eef*/
    goto LABEL_28; /*0x639eef*/
  }
LABEL_24:
  if ( v11 < 0 || v11 >= v10 ) /*0x639ee5*/
    goto LABEL_27; /*0x639ee5*/
  v13 = *(_DWORD *)(a2[2] + 4 * v11); /*0x639eea*/
LABEL_28:
  v14 = *a1; /*0x639ef1*/
  v15 = *(_DWORD *)(v9 + 16); /*0x639ef3*/
  v22 = v14; /*0x639ef8*/
  v16 = 0; /*0x639efc*/
  if ( v15 <= 0 ) /*0x639f00*/
    return 0; /*0x639f00*/
  for ( i = *(_DWORD ***)(v9 + 4); **i != *a2; ++i ) /*0x639f02*/
  {
    if ( ++v16 >= v15 ) /*0x639f11*/
      return 0; /*0x639f11*/
  }
  if ( v16 == -1 ) /*0x639f1e*/
    return 0; /*0x639f1e*/
  v18 = *(_DWORD *)(v13 + 16); /*0x639f20*/
  v19 = 0; /*0x639f23*/
  if ( v18 <= 0 ) /*0x639f27*/
    return 0; /*0x639f27*/
  for ( j = *(_DWORD ***)(v13 + 4); **j != v22; ++j ) /*0x639f29*/
  {
    if ( ++v19 >= v18 ) /*0x639f3c*/
      return 0; /*0x639f45*/
  }
  return v19 != -1; /*0x639f49*/
}



// ==== 0x00639F80  DecFactoryClassCounter  this=AbstractClass  sig=ida-proto ====
int __fastcall FactoryClass_DecCounter(unsigned int a1)
{
  int result; // eax

  if ( a1 < 0x18 )
  {
    result = dword_AC4B84[a1] - 1; /*0x639f95*/
    dword_AC4B84[a1] = result < 0 ? 0 : result;
  }
  return result; /*0x639fa3*/
}



// ==== 0x00639FD0  NetworkClass::ExecutePlanningModeCmd  this=NetworkClass  sig=csp ====
int __thiscall sub_639FD0(char *this)
{
  char v1; // al
  wchar_t *StringCSF; // eax
  wchar_t *v3; // eax

  v1 = *this; /*0x639fd0*/
  if ( *this == 9 ) /*0x639fd4*/
  {
    if ( !byte_AC4C08 ) /*0x639fdd*/
    {
      byte_AC4C08 = 1; /*0x639fe8*/
      StringCSF = GetStringCSF((wchar_t *)g_Str_MSG_PlanningModeNoDeploy, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x639ffb*/
LABEL_10:
      AddMessageListPlayerMessage(StringCSF, 480); /*0x63a07b*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a09e*/
    }
  }
  else if ( v1 == 6 ) /*0x639fff*/
  {
    if ( !byte_AC4C08 ) /*0x63a008*/
    {
      byte_AC4C08 = 1; /*0x63a01f*/
      v3 = GetStringCSF(g_Str_MSG_PlanningModeNoStop, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a026*/
      AddMessageListPlayerMessage(v3, 480); /*0x63a032*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a04f*/
    }
  }
  else if ( v1 == 7 && !byte_AC4C08 ) /*0x63a05c*/
  {
    byte_AC4C08 = 1; /*0x63a063*/
    StringCSF = GetStringCSF(g_Str_MSG_PlanningModeNoScatter, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a076*/
    goto LABEL_10; /*0x63a076*/
  }
  return PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a0c0*/
}



// ==== 0x0063A0D0  System_Get  this=-  sig=ida-proto ====
char sub_63A0D0()
{
  char result; // al
  wchar_t *StringCSF; // eax

  result = byte_AC4C08; /*0x63a0d0*/
  if ( !byte_AC4C08 ) /*0x63a0d7*/
  {
    byte_AC4C08 = 1; /*0x63a0ea*/
    StringCSF = GetStringCSF(aMsgPlanningmod_12, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a0f1*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x63a0fd*/
    return PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a119*/
  }
  return result; /*0x63a11e*/
}



// ==== 0x0063A120  UI_Create_731A50_Create_63A120  this=-  sig=ida-proto ====
int __fastcall sub_63A120(char a1, char a2)
{
  int v2; // esi
  int result; // eax
  wchar_t *v4; // ecx
  wchar_t *StringCSF; // eax

  if ( a2 ) /*0x63a123*/
    v2 = a1 == 0; /*0x63a12c*/
  else
    v2 = 2; /*0x63a130*/
  if ( a1 ) /*0x63a137*/
    result = dword_AC4BF4[v2] + 1; /*0x63a140*/
  else
    result = 1; /*0x63a143*/
  if ( dword_AC4BF4[v2] < result ) /*0x63a153*/
  {
    if ( a2 ) /*0x63a157*/
    {
      if ( a1 ) /*0x63a165*/
        v4 = (wchar_t *)aMsgPlanningmod_9; /*0x63a169*/
      else
        v4 = (wchar_t *)aMsgPlanningmod_10; /*0x63a172*/
    }
    else
    {
      v4 = aMsgPlanningmod_11; /*0x63a185*/
    }
    StringCSF = GetStringCSF(v4, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a18a*/
    result = AddMessageListPlayerMessage(StringCSF, 480); /*0x63a196*/
    ++dword_AC4BF4[v2]; /*0x63a19b*/
  }
  return result; /*0x63a1a2*/
}



// ==== 0x0063A1B0  Team_Get_63A1B0  this=-  sig=ida-proto ====
void __fastcall sub_63A1B0(int a1)
{
  wchar_t *StringCSF; // eax

  if ( dword_AC4BF4[a1] < 1 ) /*0x63a1bb*/
  {
    if ( a1 == 3 ) /*0x63a1c0*/
    {
      StringCSF = GetStringCSF(aMsgPlanningmod_7, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a1d3*/
    }
    else
    {
      if ( a1 != 4 ) /*0x63a1d8*/
      {
LABEL_7:
        ++dword_AC4BF4[a1]; /*0x63a1fc*/
        return; /*0x63a1fc*/
      }
      StringCSF = GetStringCSF(aMsgPlanningmod_8, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a1eb*/
    }
    AddMessageListPlayerMessage(StringCSF, 480); /*0x63a1f7*/
    goto LABEL_7; /*0x63a1f7*/
  }
}



// ==== 0x0063A230  PlanManager::Notify  this=PlanManager  sig=csp ====
int __thiscall PlanManager::Notify(PlanManager *this)
{
  int result; // eax
  wchar_t *StringCSF; // eax

  LOBYTE(result) = stru_AC4B30.__pad_70[104]; /*0x63a230*/
  if ( !stru_AC4B30.__pad_70[104] ) /*0x63a237*/
  {
    stru_AC4B30.__pad_70[104] = 1; /*0x63a245*/
    StringCSF = GetStringCSF((wchar_t *)this, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a24c*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x63a258*/
    return PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x63a274*/
  }
  return result; /*0x63a279*/
}



// ==== 0x0063A440  sub_63A440  this=-  sig=ida-proto ====
int __fastcall sub_63A440(int a1, int a2)
{
  int v2; // eax
  int v3; // edx
  char v5; // dl
  int v6; // eax

  v2 = *(char *)(a2 + 12); /*0x63a440*/
  v3 = a2 + 14; /*0x63a447*/
  if ( v2 == 7 || v2 == 8 || v2 == 9 ) /*0x63a457*/
    return 0; /*0x63a459*/
  v5 = *(_BYTE *)(v3 + 4); /*0x63a462*/
  if ( (v2 == 1 || v2 == 11) && (v5 == 11 || v2 == 11 && !v5) ) /*0x63a480*/
    return 0; /*0x63a482*/
  v6 = -(*(_DWORD *)(a1 + 20) != 15); /*0x63a490*/
  LOBYTE(v6) = v6 & 0xFD; /*0x63a492*/
  return v6 + 2; /*0x63a45b*/
}



// ==== 0x0063A4A0  ObjectClass::method_63A4A0  this=ObjectClass  sig=csp ====
void __thiscall sub_63A4A0(ObjectClass *this)
{
  *(_DWORD *)&stru_AC4B30.__pad_EC[116] = this; /*0x63a4a0*/
}



// ==== 0x0063A5A0  HandlePlanningModeClick  this=-  sig=csp ====
bool __stdcall HandlePlanningModeClick(int a1, int a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  _DWORD **v7; // esi
  int *ScreenPosScriptAction; // eax
  int *v9; // eax
  int *v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // eax
  wchar_t *StringCSF; // eax
  int v15; // [esp+10h] [ebp-50h]
  int v16; // [esp+14h] [ebp-4Ch]
  _DWORD v17[2]; // [esp+18h] [ebp-48h] BYREF
  int v18; // [esp+20h] [ebp-40h] BYREF
  int v19; // [esp+24h] [ebp-3Ch]
  int v20; // [esp+28h] [ebp-38h]
  int v21; // [esp+2Ch] [ebp-34h]
  int v22; // [esp+30h] [ebp-30h] BYREF
  int v23; // [esp+34h] [ebp-2Ch]
  int v24; // [esp+38h] [ebp-28h]
  int v25; // [esp+3Ch] [ebp-24h]
  _DWORD v26[4]; // [esp+40h] [ebp-20h] BYREF
  _DWORD v27[4]; // [esp+50h] [ebp-10h] BYREF

  if ( !byte_AC4CF4 ) /*0x63a5ae*/
    return 0; /*0x63a5b9*/
  v3 = dword_AC4C38; /*0x63a5c2*/
  v4 = a2; /*0x63a5c8*/
  v5 = a1; /*0x63a5cc*/
  v6 = 0; /*0x63a5d0*/
  v16 = dword_AC4C38; /*0x63a5d2*/
  if ( !dword_AC4CCC ) /*0x63a5d8*/
    goto LABEL_4; /*0x63a5d8*/
  v10 = (int *)Render_Render_6345A0(v26); /*0x63a6a2*/
  v18 = *v10; /*0x63a6a9*/
  v19 = v10[1]; /*0x63a6b0*/
  v20 = v10[2]; /*0x63a6b7*/
  v21 = v10[3]; /*0x63a6c2*/
  ShrinkRect(&v18, 4); /*0x63a6cb*/
  v23 = v19; /*0x63a6dc*/
  v22 = v18; /*0x63a6e4*/
  v24 = v20; /*0x63a6f1*/
  v25 = v21; /*0x63a6f5*/
  if ( (unsigned __int8)HandlePlanningModeClick_Handle(&a1) ) /*0x63a6f9*/
  {
    a1 = dword_AC4CCC; /*0x63a70d*/
    if ( dword_AC4CCC && dword_AC4CCC != v3 ) /*0x63a719*/
    {
      Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x63a727*/
      dword_AC4C38 = a1; /*0x63a730*/
      return v16 || a1; /*0x63a757*/
    }
  }
  else
  {
LABEL_4:
    a1 = 0; /*0x63a5de*/
  }
  v15 = dword_AC4B40; /*0x63a5e9*/
  if ( dword_AC4B40 <= 0 ) /*0x63a5ed*/
    goto LABEL_21; /*0x63a5ed*/
  while ( 1 ) /*0x63a5fd*/
  {
    v17[0] = v5; /*0x63a5fd*/
    v7 = (_DWORD **)*((_DWORD *)dword_AC4B34 + v6); /*0x63a601*/
    v17[1] = v4; /*0x63a604*/
    ScreenPosScriptAction = ScriptAction::GetScreenPos(v7, &v18); /*0x63a60a*/
    v9 = ComputeBounds(v27, 8, *ScreenPosScriptAction, ScreenPosScriptAction[1]); /*0x63a61f*/
    v22 = *v9; /*0x63a626*/
    v23 = v9[1]; /*0x63a62d*/
    v24 = v9[2]; /*0x63a634*/
    v25 = v9[3]; /*0x63a63f*/
    ShrinkRect(&v22, 4); /*0x63a648*/
    v26[1] = v23; /*0x63a659*/
    v26[0] = v22; /*0x63a661*/
    v26[2] = v24; /*0x63a66e*/
    v26[3] = v25; /*0x63a672*/
    if ( (unsigned __int8)HandlePlanningModeClick_Handle(v17) ) /*0x63a676*/
      break; /*0x63a676*/
    if ( ++v6 >= v15 ) /*0x63a68a*/
      goto LABEL_21; /*0x63a68a*/
  }
  if ( !v7 ) /*0x63a75c*/
  {
LABEL_21:
    v12 = UI_Process_639DA0(); /*0x63a7c4*/
    if ( v12 == -1 ) /*0x63a7cc*/
      return v16 || a1; /*0x63a7cc*/
    if ( v12 ) /*0x63a7d4*/
    {
      if ( v12 == 1 ) /*0x63a803*/
      {
        if ( !byte_AC4C08 ) /*0x63a80c*/
        {
          byte_AC4C08 = 1; /*0x63a823*/
          StringCSF = GetStringCSF(aMsgPlanningmod_5, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a82a*/
          AddMessageListPlayerMessage(StringCSF, 480); /*0x63a836*/
          PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a852*/
          return 1; /*0x63a860*/
        }
        return 1; /*0x63a80c*/
      }
      if ( v12 == 2 && !byte_AC4C08 ) /*0x63a86f*/
      {
        byte_AC4C08 = 1; /*0x63a876*/
        v13 = GetStringCSF(aMsgPlanningmod_6, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a889*/
        goto LABEL_31; /*0x63a889*/
      }
    }
    else if ( !byte_AC4C08 ) /*0x63a7dd*/
    {
      byte_AC4C08 = 1; /*0x63a7e8*/
      v13 = GetStringCSF((wchar_t *)aMsgPlanningmod_4, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a7fb*/
LABEL_31:
      AddMessageListPlayerMessage(v13, 480); /*0x63a88e*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a8b2*/
    }
    return 1; /*0x63a8c0*/
  }
  if ( BuildingClass::CheckBuildability(v7) == -1 ) /*0x63a768*/
    return v16 || a1; /*0x63a768*/
  if ( !byte_AC4C08 ) /*0x63a771*/
  {
    byte_AC4C08 = 1; /*0x63a784*/
    v11 = GetStringCSF(aMsgPlanningmod_3, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a78b*/
    AddMessageListPlayerMessage(v11, 480); /*0x63a797*/
    PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a7b3*/
  }
  return 1; /*0x63a5b0*/
}



// ==== 0x0063A8E0  ScriptAction::HitTest  this=ScriptAction  sig=csp ====
bool __stdcall ScriptAction::HitTest(int a1, int a2)
{
  int v3; // esi
  int v4; // edi
  void *Array_field_0x10; // ebp
  ScriptAction *v6; // esi
  int *ScreenPos; // eax
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  ObjectClass *v11; // [esp+0h] [ebp-4Ch]
  int v12; // [esp+10h] [ebp-3Ch] BYREF
  int v13; // [esp+18h] [ebp-34h]
  int v14; // [esp+1Ch] [ebp-30h] BYREF
  int v15; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  int v18; // [esp+2Ch] [ebp-20h] BYREF
  int v19; // [esp+30h] [ebp-1Ch]
  int v20; // [esp+34h] [ebp-18h]
  int v21; // [esp+38h] [ebp-14h]
  _DWORD v22[4]; // [esp+3Ch] [ebp-10h] BYREF

  if ( !stru_AC4B30.__pad_EC[216] ) /*0x63a8ee*/
    return 0; /*0x63a8f9*/
  v3 = *(_DWORD *)&stru_AC4B30.__pad_EC[28]; /*0x63a902*/
  v4 = 0; /*0x63a90c*/
  v13 = *(_DWORD *)&stru_AC4B30.__pad_EC[28]; /*0x63a910*/
  if ( !*(_DWORD *)&stru_AC4B30.__pad_EC[176] /*0x63aa32*/
    || (v9 = ScriptAction::GetScreenPos(*(ScriptAction **)&stru_AC4B30.__pad_EC[176], &v12),
        v10 = ComputeBounds(&v18, 8, *v9, v9[1]),
        v14 = *v10,
        v15 = v10[1],
        v16 = v10[2],
        v17 = v10[3],
        ShrinkRect(&v14, 4),
        a1 < v14)
    || a1 >= v14 + v16
    || a2 < v15
    || a2 >= v15 + v17 )
  {
    v12 = 0; /*0x63a91a*/
LABEL_5:
    Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x63a91e*/
    if ( (int)stru_AC4B30.Array_field_0x10 > 0 ) /*0x63a926*/
    {
      while ( 1 ) /*0x63a936*/
      {
        v6 = (ScriptAction *)*((_DWORD *)stru_AC4B30.Array_field_0x4 + v4); /*0x63a936*/
        ScreenPos = ScriptAction::GetScreenPos(v6, &v14); /*0x63a93b*/
        v8 = ComputeBounds(v22, 8, *ScreenPos, ScreenPos[1]); /*0x63a950*/
        v18 = *v8; /*0x63a957*/
        v19 = v8[1]; /*0x63a95e*/
        v20 = v8[2]; /*0x63a965*/
        v21 = v8[3]; /*0x63a970*/
        ShrinkRect(&v18, 4); /*0x63a979*/
        if ( a1 >= v18 && a1 < v18 + v20 && a2 >= v19 && a2 < v19 + v21 ) /*0x63a9a4*/
          break; /*0x63a9a4*/
        if ( ++v4 >= (int)Array_field_0x10 ) /*0x63a9ad*/
          goto LABEL_22; /*0x63a9ad*/
      }
      if ( v6 && BuildingClass::CheckBuildability((BuildingClass *)v6) != -1 ) /*0x63aa73*/
        return 1; /*0x63aa7e*/
LABEL_22:
      v3 = v13; /*0x63aa81*/
    }
    *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x63aa87*/
    return v3 || v12; /*0x63aa87*/
  }
  v12 = *(_DWORD *)&stru_AC4B30.__pad_EC[176]; /*0x63aa3f*/
  if ( !*(_DWORD *)&stru_AC4B30.__pad_EC[176] || *(_DWORD *)&stru_AC4B30.__pad_EC[176] != v3 ) /*0x63aa4b*/
    goto LABEL_5; /*0x63aa4b*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 1); /*0x63aa59*/
  ExportSelectionAsScriptAction(v11); /*0x63aa5e*/
  return v3 || v12; /*0x63a8f0*/
}



// ==== 0x0063AAC0  UI_Handle  this=-  sig=csp ====
char __stdcall sub_63AAC0(int a1, int a2)
{
  char result; // al

  dword_AC4C68 = -1; /*0x63aac6*/
  result = byte_AC4CF4; /*0x63aacb*/
  byte_AC4CB0 = 1; /*0x63aad2*/
  dword_AC4C6C = -1; /*0x63aad9*/
  if ( byte_AC4CF4 ) /*0x63aadf*/
  {
    result = (char)dword_A8ECC8; /*0x63aae1*/
    if ( (int)dword_A8ECC8 <= 0 ) /*0x63aae8*/
    {
      dword_AC4C68 = a1; /*0x63aaf2*/
      dword_AC4C6C = a2; /*0x63aaf7*/
      return a1; /*0x63aaea*/
    }
  }
  return result; /*0x63aafd*/
}



// ==== 0x0063AB00  UI_Handle_63AB00  this=-  sig=csp ====
char __stdcall sub_63AB00(int a1, int a2)
{
  int v2; // eax

  LOBYTE(v2) = byte_AC4CF4; /*0x63ab00*/
  byte_AC4CB0 = 0; /*0x63ab09*/
  if ( byte_AC4CF4 ) /*0x63ab0f*/
  {
    if ( (int)dword_A8ECC8 <= 0 ) /*0x63ab17*/
    {
      if ( dword_AC4BF0 ) /*0x63ab1f*/
      {
        v2 = abs32(a1 - dword_AC4C68); /*0x63ab30*/
        if ( v2 <= 3 ) /*0x63ab35*/
        {
          v2 = abs32(a2 - dword_AC4C6C); /*0x63ab46*/
          if ( v2 <= 3 ) /*0x63ab4b*/
            dword_AC4BF0 = 0; /*0x63ab4d*/
        }
      }
    }
  }
  return v2; /*0x63ab53*/
}



// ==== 0x0063AB60  Map_Process_63AB60  this=-  sig=csp ====
char __stdcall sub_63AB60(int a1, int a2)
{
  int v3; // ebx
  _DWORD *Coords; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-34h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD v10[4]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v11[4]; // [esp+28h] [ebp-10h] BYREF

  if ( !byte_AC4CF4 ) /*0x63ab6b*/
    return 0; /*0x63ab73*/
  if ( byte_AC4CB0 ) /*0x63ab7d*/
    return 0; /*0x63ab85*/
  v3 = dword_AC4C38; /*0x63ab8e*/
  if ( !dword_AC4CCC ) /*0x63ab98*/
    goto LABEL_11; /*0x63ab98*/
  Coords = ScriptAction::GetCoords((_DWORD **)dword_AC4CCC, v10); /*0x63aba3*/
  v9[0] = *Coords; /*0x63abaa*/
  v9[1] = Coords[1]; /*0x63abb5*/
  v9[2] = Coords[2]; /*0x63abc0*/
  v5 = ToCoordPixel(&v8, v9); /*0x63abc4*/
  Rect::Set(v11, *v5 - 4, v5[1] - 4, 8, 8); /*0x63abe0*/
  v10[0] = v11[0]; /*0x63abf9*/
  v6 = v11[1] - 4; /*0x63ac00*/
  if ( a1 < v11[0] - 4 ) /*0x63ac0b*/
    goto LABEL_11; /*0x63ac0b*/
  if ( a1 < v11[2] + 8 + v11[0] - 4 && a2 >= v6 && a2 < v11[3] + 8 + v6 ) /*0x63ac1f*/
    v7 = dword_AC4CCC; /*0x63ac21*/
  else
LABEL_11:
    v7 = 0; /*0x63ac28*/
  if ( !v3 ) /*0x63ac2e*/
  {
    if ( !v7 ) /*0x63ac32*/
      return 0; /*0x63ac3a*/
    goto LABEL_17; /*0x63ac32*/
  }
  if ( v7 == v3 ) /*0x63ac3f*/
  {
LABEL_17:
    Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x63ac45*/
    return 1; /*0x63ac4e*/
  }
  Mission::SetAndCall((int *)&dword_87F7E8, 0, 0); /*0x63ac43*/
  return 1; /*0x63ab6f*/
}



// ==== 0x0063AC60  UI_Delete_Delete_63AC60  this=-  sig=ida-proto ====
int sub_63AC60()
{
  return dword_AC4BF0; /*0x63ac65*/
}



// ==== 0x0063AC70  BuildingClass::CheckBuildability  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckBuildability(BuildingClass *this)
{
  int v1; // ebp
  int v2; // edi
  int v4; // ecx
  int Type; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  BuildingClass *v11; // [esp+14h] [ebp-4h] BYREF

  v1 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x63ac75*/
  v2 = 0; /*0x63ac7d*/
  if ( *(int *)&stru_A8EB00.?[228] <= 0 ) /*0x63ac83*/
    return -1; /*0x63ad1b*/
  while ( 1 ) /*0x63ac8e*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v2); /*0x63ac8e*/
    if ( v4 ) /*0x63ac93*/
    {
      if ( (*(_BYTE *)(v4 + 20) & 1) != 0 ) /*0x63ac9f*/
      {
        Type = BuildingClass::GetType((BuildingClass *)v4); /*0x63aca1*/
        v6 = Type; /*0x63aca6*/
        if ( Type ) /*0x63acaa*/
        {
          if ( *(int *)(Type + 148) >= 0 ) /*0x63acb4*/
            return 1; /*0x63acf3*/
          v7 = *(_DWORD *)(Type + 4); /*0x63acb8*/
          v11 = this; /*0x63acc2*/
          v8 = (*(int (__thiscall **)(int, BuildingClass **))(v7 + 16))(v6 + 4, &v11); /*0x63acc7*/
          if ( v8 == -1 ) /*0x63accd*/
            return 5; /*0x63ad00*/
          v9 = *(_DWORD *)(v6 + 20); /*0x63accf*/
          if ( v8 == v9 - 1 ) /*0x63acd7*/
            return 2; /*0x63ad0d*/
          if ( v8 == v9 - 2 ) /*0x63acde*/
            break; /*0x63acde*/
        }
      }
    }
    if ( ++v2 >= v1 ) /*0x63ace3*/
      return -1; /*0x63ace3*/
  }
  return 3; /*0x63ace7*/
}



// ==== 0x0063AD30  ObjectClass::method_63AD30  this=ObjectClass  sig=csp ====
void __thiscall sub_63AD30(ObjectClass *this)
{
  *(_DWORD *)&stru_AC4B30.__pad_EC[28] = this; /*0x63ad30*/
}



// ==== 0x0063AD40  sub_63AD40  this=-  sig=ida-proto ====
int sub_63AD40()
{
  return dword_AC4C38; /*0x63ad45*/
}



// ==== 0x0063AD50  ObjectClass::ExportSelectionAsScriptAction  this=ObjectClass  sig=csp ====
int ExportSelectionAsScriptAction(ObjectClass *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  int Type; // eax
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // ebx
  int m_8; // edx
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  _DWORD *v16; // ebx
  _DWORD *_63B050; // eax
  _BYTE *WaypointCoords; // eax
  int v19; // edx
  _BYTE *v20; // eax
  wchar_t *StringCSF; // eax
  int result; // eax
  _BYTE v23[108]; // [esp-70h] [ebp-204h] BYREF
  int v24; // [esp-4h] [ebp-198h]
  _VectorClass_PAVTechnoClass v25; // [esp+10h] [ebp-184h] BYREF
  int v26; // [esp+24h] [ebp-170h]
  int v27; // [esp+28h] [ebp-16Ch]
  _BYTE v29[243]; // [esp+30h] [ebp-164h] BYREF
  int v30; // [esp+124h] [ebp-70h] BYREF

  v1 = *(_DWORD *)&stru_AC4B30.__pad_EC[28]; /*0x63ad56*/
  *(_DWORD *)&v29[8] = *(_DWORD *)&stru_AC4B30.__pad_EC[28]; /*0x63ad67*/
  *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x63ad6b*/
  *(_DWORD *)v29 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x63ad75*/
  if ( *(int *)&stru_A8EB00.?[228] <= 0 ) /*0x63ad79*/
  {
    *(_DWORD *)&stru_AC4B30.__pad_70[80] = v1; /*0x63b02f*/
    Team_Get_63A1B0(4); /*0x63b034*/
    return result; /*0x63b034*/
  }
  EventClass::resetEvent((EventClass *)&v25, 0, 0); /*0x63ad87*/
  v2 = 0; /*0x63ad8e*/
  *(_DWORD *)v25.__pad_0 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x63ad92*/
  v26 = 10; /*0x63ad9a*/
  *(_DWORD *)v25.__tail_10 = 0; /*0x63ada2*/
  v27 = 0; /*0x63ada6*/
  do /*0x63af15*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v2); /*0x63adb6*/
    if ( v3 ) /*0x63adbb*/
    {
      if ( *(_BYTE *)(v3 + 20) & 1 ) /*0x63adc7*/
      {
        Type = BuildingClass::GetType((BuildingClass *)v3); /*0x63add3*/
        if ( Type ) /*0x63adda*/
        {
          v5 = *(_DWORD *)(Type + 20) - 1; /*0x63ade3*/
          if ( v5 >= 0 ) /*0x63ade4*/
          {
            v6 = *(_DWORD *)(*(_DWORD *)(Type + 8) + 4 * v5); /*0x63ade9*/
            if ( v6 ) /*0x63adee*/
            {
              v7 = *(_DWORD *)(v6 + 16); /*0x63ae39*/
              v8 = 0; /*0x63ae3c*/
              if ( v7 <= 0 ) /*0x63ae40*/
                goto LABEL_37; /*0x63ae40*/
              m_8 = v25.m_8; /*0x63ae46*/
              while ( 2 ) /*0x63ae4a*/
              {
                v10 = 0; /*0x63ae4a*/
                v11 = **(_DWORD **)(*(_DWORD *)(v6 + 4) + 4 * v8); /*0x63ae52*/
                if ( *(int *)v25.__tail_10 <= 0 ) /*0x63ae5a*/
                  goto LABEL_22; /*0x63ae5a*/
                v12 = *(_DWORD **)&v25.m_1[3]; /*0x63ae5c*/
                while ( *v12 != v11 ) /*0x63ae62*/
                {
                  ++v10; /*0x63ae64*/
                  ++v12; /*0x63ae65*/
                  if ( v10 >= *(int *)v25.__tail_10 ) /*0x63ae6c*/
                    goto LABEL_22; /*0x63ae6c*/
                }
                if ( v10 == -1 ) /*0x63ae73*/
                {
LABEL_22:
                  if ( *(int *)v25.__tail_10 < m_8 ) /*0x63ae79*/
                    goto LABEL_27; /*0x63ae79*/
                  if ( (BYTE1(v25.m_C) || !m_8) && v26 > 0 ) /*0x63ae8d*/
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVTechnoClass *, int, _DWORD))(*(_DWORD *)v25.__pad_0 + 8))( /*0x63ae9c*/
                           &v25,
                           v26 + m_8,
                           0) )
                    {
LABEL_27:
                      v13 = (*(_DWORD *)v25.__tail_10)++; /*0x63aea3*/
                      *(_DWORD *)(*(_DWORD *)&v25.m_1[3] + 4 * v13) = v11; /*0x63aeb2*/
                    }
                    m_8 = v25.m_8; /*0x63aeb5*/
                  }
                }
                if ( ++v8 >= v7 ) /*0x63aebc*/
                  goto LABEL_37; /*0x63aebc*/
                continue; /*0x63aebc*/
              }
            }
          }
          if ( *(int *)v25.__tail_10 < v25.m_8 /*0x63ae29*/
            || (BYTE1(v25.m_C) || !v25.m_8)
            && v26 > 0
            && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVTechnoClass *, int, _DWORD))(*(_DWORD *)v25.__pad_0 + 8))(
                 &v25,
                 v26 + v25.m_8,
                 0) )
          {
LABEL_36:
            v14 = (*(_DWORD *)v25.__tail_10)++; /*0x63aef4*/
            *(_DWORD *)(*(_DWORD *)&v25.m_1[3] + 4 * v14) = v3; /*0x63af03*/
          }
        }
        else if ( *(int *)v25.__tail_10 < v25.m_8 /*0x63aeed*/
               || (BYTE1(v25.m_C) || !v25.m_8)
               && v26 > 0
               && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVTechnoClass *, int, _DWORD))(*(_DWORD *)v25.__pad_0
                                                                                                + 8))(
                    &v25,
                    v26 + v25.m_8,
                    0) )
        {
          goto LABEL_36; /*0x63aef2*/
        }
      }
    }
LABEL_37:
    v2 = ++v27; /*0x63af06*/
  }
  while ( v27 < *(int *)v29 ); /*0x63af15*/
  v15 = 0; /*0x63af1f*/
  v27 = *(_DWORD *)v25.__tail_10; /*0x63af21*/
  if ( *(int *)v25.__tail_10 > 0 ) /*0x63af27*/
  {
    do /*0x63afd3*/
    {
      v24 = 0; /*0x63af3c*/
      v16 = *(_DWORD **)(*(_DWORD *)&v25.m_1[3] + 4 * v15); /*0x63af3e*/
      qmemcpy(&v29[132], (const void *)Team_Helper_6342E0(*(ObjectClass **)&v29[8], (int)&v30, 0), 0x6Fu); /*0x63af55*/
      _63B050 = Team_Load_63B050((ObjectClass *)&v29[132]); /*0x63af61*/
      if ( _63B050 ) /*0x63af68*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v29, _63B050); /*0x63af6f*/
        v19 = *(_DWORD *)WaypointCoords; /*0x63af74*/
        LOBYTE(WaypointCoords) = WaypointCoords[4]; /*0x63af7b*/
        *(_DWORD *)&v23[104] = v19; /*0x63af7f*/
        LOBYTE(v24) = (_BYTE)WaypointCoords; /*0x63af81*/
        v20 = ScriptAction::GetWaypointCoords((ScriptAction *)&v29[12], v16); /*0x63af88*/
        ScenarioClass::SetEvent( /*0x63afac*/
          &v29[20],
          (int)dword_A83D4C->Object_field_0x30,
          42,
          *(_DWORD *)v20,
          v20[4],
          *(int *)&v23[104],
          v24);
        qmemcpy(v23, &v29[20], sizeof(v23)); /*0x63afc2*/
        LOWORD(v24) = *(_WORD *)&v29[128]; /*0x63afc4*/
        BYTE2(v24) = v29[130]; /*0x63afc6*/
        Network::RecordEvent( /*0x63afc7*/
          *(__int64 *)v23,
          *(int *)&v23[8],
          *(int *)&v23[12],
          *(int *)&v23[16],
          *(int *)&v23[20],
          *(int *)&v23[24],
          *(int *)&v23[28],
          *(int *)&v23[32],
          *(int *)&v23[36],
          *(int *)&v23[40],
          *(int *)&v23[44],
          *(int *)&v23[48],
          *(int *)&v23[52],
          *(int *)&v23[56],
          *(int *)&v23[60],
          *(int *)&v23[64],
          *(int *)&v23[68],
          *(int *)&v23[72],
          *(int *)&v23[76],
          *(int *)&v23[80],
          *(int *)&v23[84],
          *(int *)&v23[88],
          *(int *)&v23[92],
          *(int *)&v23[96],
          *(int *)&v23[100],
          *(int *)&v23[104],
          v24);
      }
      ++v15; /*0x63afd0*/
    }
    while ( v15 < v27 ); /*0x63afd3*/
    if ( v27 > 0 && *(int *)&stru_AC4B30.__pad_70[96] < 1 ) /*0x63afe4*/
    {
      StringCSF = GetStringCSF(aMsgPlanningmod_7, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63aff7*/
      AddMessageListPlayerMessage(StringCSF, 480); /*0x63b003*/
      ++*(_DWORD *)&stru_AC4B30.__pad_70[96]; /*0x63b008*/
    }
  }
  *(_DWORD *)v25.__pad_0 = &VectorClass<TechnoClass *>::`vftable'; /*0x63b012*/
  VectorClass_Techno::ddtor(&v25); /*0x63b01a*/
  return result; /*0x63b01f*/
}



// ==== 0x0063B050  ObjectClass::Team_Load_63B050  this=ObjectClass  sig=csp ====
void *__thiscall Team_Load_63B050(ObjectClass *this)
{
  void *result; // eax

  result = 0; /*0x63b053*/
  if ( BYTE2(this->?) ) /*0x63b050*/
    return BuildingLoadQueue::GetNext((BuildingLoadQueue *)((char *)&this->? + 2)); /*0x63b05c*/
  if ( LOBYTE(this->?) ) /*0x63b061*/
    return BuildingLoadQueue::GetNext((BuildingLoadQueue *)&this->?); /*0x63b06b*/
  if ( HIBYTE(this->?) ) /*0x63b070*/
    return BuildingLoadQueue::GetNext((BuildingLoadQueue *)((char *)&this->? + 3)); /*0x63b07a*/
  return result; /*0x63b07f*/
}



// ==== 0x0063B080  ObjectClass::method_63B080  this=ObjectClass  sig=csp ====
void __thiscall sub_63B080(ObjectClass *this)
{
  *(_DWORD *)&stru_AC4B30.__pad_70[80] = this; /*0x63b080*/
}



// ==== 0x0063B090  sub_63B090  this=-  sig=ida-proto ====
void sub_63B090()
{
  dword_AC4BF0 = 0; /*0x63b090*/
}



// ==== 0x0063B0A0  ObjectClass::Render_Render_63B0A0  this=ObjectClass  sig=csp ====
void Render_Render_63B0A0(ObjectClass *this)
{
  void *Array_field_0x10; // ebp
  int v2; // esi
  int v3; // edi
  int v4; // ebp
  int i; // esi
  int v6; // edi

  *(_DWORD *)&stru_AC4B30.__pad_EC[12] = 0; /*0x63b0ad*/
  if ( *(_DWORD *)stru_AC4B30.__pad_EC && stru_AC4B30.__pad_EC[9] ) /*0x63b0bb*/
  {
    __3_YAXPAX_Z(*(void **)stru_AC4B30.__pad_EC); /*0x63b0be*/
    *(_DWORD *)stru_AC4B30.__pad_EC = 0; /*0x63b0c6*/
  }
  Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x63b0cc*/
  v2 = 0; /*0x63b0d2*/
  stru_AC4B30.__pad_EC[9] = 0; /*0x63b0d6*/
  for ( *(_DWORD *)&stru_AC4B30.__pad_EC[4] = 0; v2 < (int)Array_field_0x10; ++v2 ) /*0x63b0e2*/
  {
    v3 = *((_DWORD *)stru_AC4B30.Array_field_0x4 + v2); /*0x63b0e9*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v3 + 4) + 540), (#375 *)dword_A83D4C) ) /*0x63b100*/
      RenderScenarioActionLines((ObjectClass *)v3); /*0x63b10b*/
  }
  v4 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x63b115*/
  for ( i = 0; i < v4; ++i ) /*0x63b11f*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x63b12d*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v6 + 540), (#375 *)dword_A83D4C) ) /*0x63b136*/
      ScriptAction::ProcessIdleAction((ScriptAction *)v6); /*0x63b141*/
  }
}



// ==== 0x0063B150  ObjectClass::RenderBuilding  this=ObjectClass  sig=csp ====
void RenderBuilding(ObjectClass *this)
{
  void *Array_field_0x10; // ebp
  int i; // esi
  int v3; // edi
  int j; // ebx
  int v5; // esi
  int DrawColor; // edi
  int *Viewport; // eax
  _DWORD *Coords; // eax
  int *v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int k; // esi
  int v15; // edi
  int v16; // [esp+10h] [ebp-60h] BYREF
  _DWORD v17[3]; // [esp+18h] [ebp-58h] BYREF
  _DWORD v18[3]; // [esp+24h] [ebp-4Ch] BYREF
  int v19; // [esp+30h] [ebp-40h] BYREF
  int v20; // [esp+34h] [ebp-3Ch]
  int v21; // [esp+38h] [ebp-38h]
  int v22; // [esp+3Ch] [ebp-34h]
  _DWORD v23[4]; // [esp+40h] [ebp-30h] BYREF
  int v24[4]; // [esp+50h] [ebp-20h] BYREF
  _DWORD v25[4]; // [esp+60h] [ebp-10h] BYREF

  Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x63b155*/
  for ( i = 0; i < (int)Array_field_0x10; ++i ) /*0x63b161*/
  {
    v3 = *((_DWORD *)stru_AC4B30.Array_field_0x4 + i); /*0x63b168*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v3 + 4) + 540), (#375 *)dword_A83D4C) ) /*0x63b17f*/
      RenderScenarioActionLines2((ObjectClass *)v3); /*0x63b18a*/
  }
  for ( j = 0; j < (int)Array_field_0x10; ++j ) /*0x63b198*/
  {
    v5 = *((_DWORD *)stru_AC4B30.Array_field_0x4 + j); /*0x63b1a3*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v5 + 4) + 540), (#375 *)dword_A83D4C) ) /*0x63b1ba*/
    {
      DrawColor = BuildingClass::GetDrawColor(v5); /*0x63b1d2*/
      Viewport = Display::GetViewport(v24); /*0x63b1d4*/
      v23[0] = *Viewport; /*0x63b1db*/
      v23[1] = Viewport[1]; /*0x63b1e2*/
      v23[2] = Viewport[2]; /*0x63b1e9*/
      v23[3] = Viewport[3]; /*0x63b1f7*/
      Coords = ScriptAction::GetCoords((ScriptAction *)v5, v18); /*0x63b1fb*/
      v17[0] = *Coords; /*0x63b202*/
      v17[1] = Coords[1]; /*0x63b20d*/
      v17[2] = Coords[2]; /*0x63b218*/
      v9 = ToCoordPixel(&v16, v17); /*0x63b21c*/
      v10 = ComputeBounds(v25, 8, *v9, v9[1]); /*0x63b236*/
      v19 = *v10; /*0x63b23a*/
      v20 = v10[1]; /*0x63b241*/
      v11 = v10[2]; /*0x63b245*/
      v21 = v11; /*0x63b248*/
      v12 = v10[3]; /*0x63b24f*/
      if ( v11 > -2 && v12 > -2 ) /*0x63b257*/
      {
        ++v19; /*0x63b27d*/
        ++v20; /*0x63b281*/
        v21 = v11 - 2; /*0x63b285*/
        v22 = v12 - 2; /*0x63b289*/
      }
      else
      {
        v19 = 0; /*0x63b25b*/
        v20 = 0; /*0x63b25f*/
        v21 = 0; /*0x63b263*/
        v22 = 0; /*0x63b267*/
      }
      (*(void (__thiscall **)(AudioStream *, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63b2a0*/
        DSurface_Composite,
        v23,
        &v19,
        DrawColor);
    }
  }
  v13 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x63b2ac*/
  for ( k = 0; k < v13; ++k ) /*0x63b2b6*/
  {
    v15 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * k); /*0x63b2c5*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v15 + 540), (#375 *)dword_A83D4C) ) /*0x63b2ce*/
      BuildingClass::DrawActionLines((BuildingClass *)v15); /*0x63b2d9*/
  }
}



// ==== 0x0063B2F0  ObjectClass::RenderScriptActionHighlight  this=ObjectClass  sig=csp ====
int RenderScriptActionHighlight(ObjectClass *this)
{
  ScriptAction *v1; // edi
  int result; // eax
  int v3; // esi
  int *Viewport; // eax
  int *ScreenPos; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // edi
  ObjectClass *v11; // edi
  int *v12; // eax
  int *v13; // eax
  int v14; // edi
  int v15; // [esp+10h] [ebp-50h] BYREF
  int v16; // [esp+14h] [ebp-4Ch]
  int v17; // [esp+18h] [ebp-48h]
  int v18; // [esp+1Ch] [ebp-44h]
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23; // [esp+30h] [ebp-30h] BYREF
  int v24; // [esp+34h] [ebp-2Ch]
  int v25; // [esp+38h] [ebp-28h]
  int v26; // [esp+3Ch] [ebp-24h]
  int v27[4]; // [esp+40h] [ebp-20h] BYREF
  char v28[16]; // [esp+50h] [ebp-10h] BYREF

  v1 = *(ScriptAction **)&stru_AC4B30.__pad_EC[176]; /*0x63b31c*/
  result = LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red; /*0x63b34b*/
  v3 = result /*0x63b34d*/
     | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
     | (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue);
  if ( *(_DWORD *)&stru_AC4B30.__pad_EC[176] ) /*0x63b351*/
  {
    Viewport = Display::GetViewport(v27); /*0x63b35b*/
    v23 = *Viewport; /*0x63b362*/
    v24 = Viewport[1]; /*0x63b369*/
    v25 = Viewport[2]; /*0x63b370*/
    v26 = Viewport[3]; /*0x63b37e*/
    ScreenPos = ScriptAction::GetScreenPos(v1, &v15); /*0x63b382*/
    v6 = ComputeBounds(v27, 8, *ScreenPos, ScreenPos[1]); /*0x63b397*/
    v7 = v6[1] - 4; /*0x63b3a6*/
    v8 = v6[2] + 8; /*0x63b3ac*/
    v9 = v6[3]; /*0x63b3af*/
    v19 = *v6 - 4; /*0x63b3b2*/
    v20 = v7; /*0x63b3b9*/
    v22 = v9 + 8; /*0x63b3bd*/
    v21 = v8; /*0x63b3c1*/
    v10 = 3; /*0x63b3c5*/
    do /*0x63b42a*/
    {
      result = (*(int (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63b3dd*/
                 DSurface_Composite,
                 &v23,
                 &v19,
                 v3);
      if ( v21 > -2 && v22 > -2 ) /*0x63b3ea*/
      {
        ++v19; /*0x63b40c*/
        ++v20; /*0x63b414*/
        result = 2; /*0x63b418*/
        v21 -= 2; /*0x63b421*/
        v22 -= 2; /*0x63b425*/
      }
      else
      {
        v19 = 0; /*0x63b3ec*/
        v20 = 0; /*0x63b3f0*/
        v21 = 0; /*0x63b3f4*/
        v22 = 0; /*0x63b3f8*/
      }
      --v10; /*0x63b429*/
    }
    while ( v10 ); /*0x63b42a*/
  }
  v11 = *(ObjectClass **)&stru_AC4B30.__pad_70[80]; /*0x63b42c*/
  if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63b434*/
  {
    v12 = Display::GetViewport(&v23); /*0x63b43e*/
    v27[0] = *v12; /*0x63b445*/
    v27[1] = v12[1]; /*0x63b44c*/
    v27[2] = v12[2]; /*0x63b453*/
    v27[3] = v12[3]; /*0x63b461*/
    v13 = Render_Render_6345A0(v11, v28); /*0x63b465*/
    v15 = *v13; /*0x63b46c*/
    v16 = v13[1]; /*0x63b473*/
    v17 = v13[2]; /*0x63b47a*/
    v18 = v13[3]; /*0x63b485*/
    ShrinkRect(&v15, 4); /*0x63b48e*/
    v23 = v15; /*0x63b49f*/
    v24 = v16; /*0x63b4a7*/
    v25 = v17; /*0x63b4ab*/
    v26 = v18; /*0x63b4b8*/
    ShrinkRect(&v23, 4); /*0x63b4bc*/
    v19 = v23; /*0x63b4cd*/
    v20 = v24; /*0x63b4d5*/
    v21 = v25; /*0x63b4d9*/
    v22 = v26; /*0x63b4dd*/
    v14 = 3; /*0x63b4e1*/
    do /*0x63b546*/
    {
      result = (*(int (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63b4f9*/
                 DSurface_Composite,
                 v27,
                 &v19,
                 v3);
      if ( v21 > -2 && v22 > -2 ) /*0x63b506*/
      {
        ++v19; /*0x63b528*/
        ++v20; /*0x63b530*/
        result = 2; /*0x63b534*/
        v21 -= 2; /*0x63b53d*/
        v22 -= 2; /*0x63b541*/
      }
      else
      {
        v19 = 0; /*0x63b508*/
        v20 = 0; /*0x63b50c*/
        v21 = 0; /*0x63b510*/
        v22 = 0; /*0x63b514*/
      }
      --v14; /*0x63b545*/
    }
    while ( v14 ); /*0x63b546*/
  }
  return result; /*0x63b548*/
}



// ==== 0x0063B550  ScriptAction::ProcessIdleAction  this=ScriptAction  sig=csp ====
char __thiscall ScriptAction::ProcessIdleAction(ScriptAction *this)
{
  ArrayClass *Type; // esi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // edi
  BuildingClass *v6; // ebx
  void *v7; // eax
  bool v8; // dl
  char *v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int Coord3D_field_0x08; // eax
  char *v13; // edi
  ArrayClass *v14; // ebp
  Coord3D *Viewport; // eax
  int *v16; // eax
  int v17; // esi
  int v18; // eax
  int *v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // edi
  int *v23; // eax
  Coord3D *v24; // eax
  int *v25; // eax
  int updated; // eax
  char v27; // al
  int v28; // edx
  int *v29; // eax
  char v30; // al
  int v31; // edi
  char *v32; // esi
  Coord2D *v33; // eax
  Coord3D *v34; // eax
  Coord2D *v35; // eax
  Coord3D *v36; // eax
  int v37; // esi
  int v38; // eax
  int *v39; // eax
  int v40; // eax
  int v41; // esi
  int v42; // edi
  Coord3D *v43; // eax
  int v44; // esi
  int v45; // esi
  ArrayClass *v46; // esi
  int *ScreenPos; // eax
  int v48; // edi
  const void *TypeEntry; // eax
  const void *v50; // esi
  int *v51; // eax
  bool v53; // [esp+2Eh] [ebp-172h]
  char v54; // [esp+2Fh] [ebp-171h]
  Coord3D v55; // [esp+30h] [ebp-170h] BYREF
  int v56; // [esp+3Ch] [ebp-164h]
  int v57; // [esp+40h] [ebp-160h] BYREF
  int v58; // [esp+44h] [ebp-15Ch]
  int v59; // [esp+48h] [ebp-158h]
  Coord3D v60; // [esp+4Ch] [ebp-154h] BYREF
  int v61; // [esp+58h] [ebp-148h] BYREF
  int v62; // [esp+5Ch] [ebp-144h]
  int v63; // [esp+68h] [ebp-138h] BYREF
  int v64; // [esp+6Ch] [ebp-134h]
  int v65; // [esp+70h] [ebp-130h]
  int v66; // [esp+74h] [ebp-12Ch]
  Coord2D v67; // [esp+78h] [ebp-128h] BYREF
  int v68; // [esp+80h] [ebp-120h]
  int Coord2D_field_0x04; // [esp+84h] [ebp-11Ch]
  ArrayClass *v70; // [esp+88h] [ebp-118h] BYREF
  char *v71; // [esp+8Ch] [ebp-114h]
  Rect v72; // [esp+94h] [ebp-10Ch] BYREF
  Rect v73; // [esp+A4h] [ebp-FCh] BYREF
  _DWORD v74[3]; // [esp+B4h] [ebp-ECh] BYREF
  _WORD v75[56]; // [esp+C0h] [ebp-E0h] BYREF
  char v76[112]; // [esp+130h] [ebp-70h] BYREF

  Type = (ArrayClass *)BuildingClass::GetType((BuildingClass *)this); /*0x63b565*/
  v3 = *(_DWORD *)this->__pad_0; /*0x63b567*/
  v70 = Type; /*0x63b56d*/
  v4 = (_DWORD *)(*(int (__thiscall **)(ScriptAction *, int *))(v3 + 88))(this, &v63); /*0x63b571*/
  v74[0] = *v4; /*0x63b576*/
  v74[1] = v4[1]; /*0x63b580*/
  v74[2] = v4[2]; /*0x63b59d*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v74, &v61); /*0x63b5a4*/
  v62 += (int)DSurface_ViewBounds.field_4; /*0x63b5c1*/
  v60.Coord3D_field_0x04 = v62; /*0x63b5c5*/
  v61 += DSurface_ViewBounds.field_0; /*0x63b5ce*/
  *(_DWORD *)v60.__pad_0 = v61; /*0x63b5d2*/
  v5 = PackRGBFromBytes((ObjectClass *)&byte_A83CD9); /*0x63b5dd*/
  if ( this ) /*0x63b5df*/
  {
    v6 = (BuildingClass *)PackRGBFromBytes(&stru_A80220); /*0x63b5f1*/
    if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63b5f5*/
    {
      if ( Array::FindValue(*(Array **)&stru_AC4B30.__pad_70[80], (int)this) != -1 ) /*0x63b600*/
        goto LABEL_7; /*0x63b600*/
    }
    else if ( this->__pad_78[11] ) /*0x63b604*/
    {
      goto LABEL_7; /*0x63b60c*/
    }
  }
  v6 = (BuildingClass *)v5; /*0x63b60e*/
LABEL_7:
  if ( Type ) /*0x63b612*/
    v7 = Type->field_14; /*0x63b618*/
  else
    v7 = 0; /*0x63b614*/
  v53 = (int)v7 > 0; /*0x63b622*/
  v8 = (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 388))(this) != 5 /*0x63b653*/
    && !BuildingClass::IsIdleWithNoCaptives((BuildingClass *)this)
    && (v53 || this->__pad_78[11]);
  v57 = 4; /*0x63b657*/
  if ( Type && (*(_DWORD *)(*(_DWORD *)Type->__pad_0 + 172) == 28 || *(_DWORD *)(*(_DWORD *)Type->__pad_0 + 180) == 28) ) /*0x63b67a*/
  {
    v9 = &Type->__pad_18[5]; /*0x63b680*/
    qmemcpy(v75, v9, 0x6Cu); /*0x63b696*/
    v9 += 108; /*0x63b696*/
    v75[54] = *(_WORD *)v9; /*0x63b698*/
    LOBYTE(v75[55]) = v9[2]; /*0x63b69e*/
    v55 = *(Coord3D *)GetScenarioClassActionCoords(&v63, v75); /*0x63b6a6*/
    v10 = Coord3D::Set(&v60, -1, -1, -1); /*0x63b6c2*/
    if ( (unsigned __int8)Coord3D::Equals(&v55, v10) && this ) /*0x63b6d7*/
    {
      v11 = (_DWORD *)(*(int (__thiscall **)(ScriptAction *, ArrayClass **))(*(_DWORD *)this->__pad_0 + 88))(this, &v70); /*0x63b6e3*/
      *(_DWORD *)v55.__pad_0 = *v11; /*0x63b6e8*/
      v55.Coord3D_field_0x04 = v11[1]; /*0x63b6ef*/
      Coord3D_field_0x08 = v11[2]; /*0x63b6f3*/
    }
    else
    {
      Coord3D_field_0x08 = v55.Coord3D_field_0x08; /*0x63b6f8*/
    }
    v68 = Coord3D_field_0x08; /*0x63b704*/
    v67 = *(Coord2D *)v55.__pad_0; /*0x63b708*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v67, &v57); /*0x63b720*/
    v13 = (char *)DSurface_ViewBounds.field_4 + v58; /*0x63b739*/
    v14 = (ArrayClass *)(DSurface_ViewBounds.field_0 + v57); /*0x63b73f*/
    v58 += (int)DSurface_ViewBounds.field_4; /*0x63b741*/
    Viewport = (Coord3D *)Display::GetViewport(&v72.X); /*0x63b745*/
    v55 = *Viewport; /*0x63b74c*/
    v56 = *(_DWORD *)Viewport[1].__pad_0; /*0x63b76f*/
    v16 = ComputeBounds(&v72, 6, v61, v62); /*0x63b778*/
    v63 = *v16; /*0x63b77f*/
    v64 = v16[1]; /*0x63b787*/
    v65 = v16[2]; /*0x63b78e*/
    v66 = v16[3]; /*0x63b79b*/
    (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63b7ab*/
                                                                             + 84))(
      DSurface_Composite,
      &v55,
      &v63,
      v6);
    v17 = -1; /*0x63b7ae*/
    do /*0x63b7cc*/
      DrawTacticalLine2D(v17++, (int)v6, v61, v62, (int)v14, (int)v13, 0); /*0x63b7c3*/
    while ( v17 <= 1 ); /*0x63b7cc*/
    if ( SLOBYTE(v75[6]) == 11 ) /*0x63b7d9*/
    {
      v18 = Memory::Alloc76(); /*0x63b7db*/
    }
    else
    {
      if ( SLOBYTE(v75[6]) != 29 ) /*0x63b7e5*/
      {
LABEL_32:
        v24 = (Coord3D *)Display::GetViewport(&v72.X); /*0x63b8ac*/
        v55 = *v24; /*0x63b8b7*/
        v56 = *(_DWORD *)v24[1].__pad_0; /*0x63b8d5*/
        v25 = ComputeBounds(&v72, 6, (int)v14, (int)v13); /*0x63b8de*/
        v63 = *v25; /*0x63b8e5*/
        v64 = v25[1]; /*0x63b8ed*/
        v65 = v25[2]; /*0x63b8f4*/
        v66 = v25[3]; /*0x63b901*/
        LOBYTE(updated) = (*(char (__thiscall **)(AudioStream *, Coord3D *, int *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63b911*/
                            DSurface_Composite,
                            &v55,
                            &v63,
                            v6);
        return updated; /*0x63b91e*/
      }
      v18 = Factory::IdleHandler(); /*0x63b7eb*/
    }
    if ( v18 != -1 ) /*0x63b7f3*/
    {
      *(_DWORD *)v60.__pad_0 = v61; /*0x63b801*/
      v70 = v14; /*0x63b813*/
      v71 = v13; /*0x63b817*/
      v60.Coord3D_field_0x04 = v62; /*0x63b81b*/
      v19 = Coord2D::Sub((Coord2D *)&v60, (int *)v55.__pad_0, &v70); /*0x63b81f*/
      Vector::TwoDMagnitudeMath(v19); /*0x63b826*/
      if ( v20 >= 37 ) /*0x63b82e*/
      {
        v21 = (int)&v70->__pad_0[*(_DWORD *)v60.__pad_0] / 2 - 10; /*0x63b857*/
        v22 = (int)&v71[v60.Coord3D_field_0x04] / 2 - 10; /*0x63b85a*/
        v23 = Display::GetViewport(&v72.X); /*0x63b85d*/
        v63 = *v23; /*0x63b864*/
        v64 = v23[1]; /*0x63b86f*/
        v65 = v23[2]; /*0x63b878*/
        v66 = v23[3]; /*0x63b886*/
        Rect::Set(&v73, v21, v22, 21, 21); /*0x63b88a*/
        (*(void (__thiscall **)(AudioStream *, int *, Rect *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63b8a5*/
                                                                              + 84))(
          DSurface_Composite,
          &v63,
          &v73,
          v6);
        v13 = (char *)v58; /*0x63b8a8*/
      }
    }
    goto LABEL_32; /*0x63b8a8*/
  }
  if ( !v8 ) /*0x63b921*/
  {
    LOBYTE(updated) = v53; /*0x63bd19*/
    if ( !v53 ) /*0x63bd1f*/
      return updated; /*0x63bd1f*/
    goto LABEL_55; /*0x63bd1f*/
  }
  v27 = (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 1196))(this); /*0x63b92c*/
  v28 = *(_DWORD *)this->__pad_0; /*0x63b932*/
  HIBYTE(v59) = v27; /*0x63b937*/
  v54 = (*(int (__thiscall **)(ScriptAction *))(v28 + 1200))(this); /*0x63b945*/
  v29 = (int *)(*(int (__thiscall **)(ScriptAction *, Coord3D *))(*(_DWORD *)this->__pad_0 + 1068))(this, &v55); /*0x63b94f*/
  v63 = *v29; /*0x63b957*/
  v64 = v29[1]; /*0x63b95e*/
  v65 = v29[2]; /*0x63b975*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v63, &v57); /*0x63b979*/
  v30 = this->__pad_78[9]; /*0x63b992*/
  v31 = DSurface_ViewBounds.field_0 + v57; /*0x63b998*/
  v32 = (char *)DSurface_ViewBounds.field_4 + v58; /*0x63b99a*/
  v57 += DSurface_ViewBounds.field_0; /*0x63b99c*/
  v58 += (int)DSurface_ViewBounds.field_4; /*0x63b9a2*/
  if ( v30 ) /*0x63b9a6*/
  {
    v33 = (Coord2D *)Display::GetViewport(&v72.X); /*0x63b9ac*/
    v67 = *v33; /*0x63b9b3*/
    v68 = *(_DWORD *)v33[1].__pad_0; /*0x63b9ca*/
    Coord2D_field_0x04 = v33[1].Coord2D_field_0x04; /*0x63b9d6*/
    v34 = (Coord3D *)ComputeBounds(&v72, 6, v31, (int)v32); /*0x63b9da*/
    v55 = *v34; /*0x63b9e1*/
    v56 = *(_DWORD *)v34[1].__pad_0; /*0x63b9fd*/
    LOBYTE(updated) = (*(char (__thiscall **)(AudioStream *, Coord2D *, Coord3D *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63ba0d*/
                        DSurface_Composite,
                        &v67,
                        &v55,
                        v6);
    return updated; /*0x63ba1a*/
  }
  v35 = (Coord2D *)Display::GetViewport(&v72.X); /*0x63ba1f*/
  v67 = *v35; /*0x63ba26*/
  v68 = *(_DWORD *)v35[1].__pad_0; /*0x63ba34*/
  Coord2D_field_0x04 = v35[1].Coord2D_field_0x04; /*0x63ba44*/
  v36 = (Coord3D *)ComputeBounds(&v72, 6, v61, v62); /*0x63ba55*/
  v55 = *v36; /*0x63ba5c*/
  v56 = *(_DWORD *)v36[1].__pad_0; /*0x63ba78*/
  (*(void (__thiscall **)(AudioStream *, Coord2D *, Coord3D *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63ba88*/
                                                                               + 84))(
    DSurface_Composite,
    &v67,
    &v55,
    v6);
  v37 = -1; /*0x63ba8b*/
  do /*0x63baad*/
    DrawTacticalLine2D(v37++, (int)v6, v61, v62, v31, v58, 0); /*0x63baa4*/
  while ( v37 <= 1 ); /*0x63baad*/
  if ( !HIBYTE(v59) || v54 ) /*0x63babd*/
  {
    if ( (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 388))(this) == 11 ) /*0x63bae8*/
    {
      v38 = Memory::Alloc76(); /*0x63baee*/
      goto LABEL_44; /*0x63baee*/
    }
  }
  else if ( (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 1204))(this) == 29 ) /*0x63bacd*/
  {
    v38 = Factory::IdleHandler(); /*0x63bad3*/
LABEL_44:
    if ( v38 != -1 ) /*0x63baf6*/
    {
      v55.Coord3D_field_0x04 = v58; /*0x63bb08*/
      *(_DWORD *)v67.__pad_0 = v61; /*0x63bb0c*/
      *(_DWORD *)v55.__pad_0 = v31; /*0x63bb1e*/
      v67.Coord2D_field_0x04 = v62; /*0x63bb22*/
      v39 = Coord2D::Sub(&v67, &v61, &v55); /*0x63bb26*/
      Vector::TwoDMagnitudeMath(v39); /*0x63bb2d*/
      if ( v40 >= 37 ) /*0x63bb35*/
      {
        v41 = (*(_DWORD *)v55.__pad_0 + *(_DWORD *)v67.__pad_0) / 2 - 10; /*0x63bb61*/
        v42 = (v67.Coord2D_field_0x04 + v55.Coord3D_field_0x04) / 2 - 10; /*0x63bb64*/
        v73 = *(Rect *)Display::GetViewport(&v61); /*0x63bb6e*/
        Rect::Set(&v72, v41, v42, 21, 21); /*0x63bba0*/
        (*(void (__thiscall **)(AudioStream *, Rect *, Rect *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63bbbb*/
                                                                               + 84))(
          DSurface_Composite,
          &v73,
          &v72,
          v6);
        v31 = v57; /*0x63bbbe*/
      }
    }
  }
  v43 = (Coord3D *)Display::GetViewport(&v72.X); /*0x63bbc2*/
  v44 = v58; /*0x63bbcd*/
  v55 = *v43; /*0x63bbd1*/
  v56 = *(_DWORD *)v43[1].__pad_0; /*0x63bbef*/
  v73 = *(Rect *)ComputeBounds(&v72, 6, v31, v58); /*0x63bbff*/
  (*(void (__thiscall **)(AudioStream *, Coord3D *, Rect *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63bc3a*/
    DSurface_Composite,
    &v55,
    &v73,
    v6);
  if ( v54 ) /*0x63bc43*/
  {
    v55 = *(Coord3D *)(*(int (__thiscall **)(ScriptAction *, Coord2D *))(*(_DWORD *)this->__pad_0 + 1208))(this, &v67); /*0x63bc5b*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v55, (int *)v60.__pad_0); /*0x63bc7d*/
    v45 = DSurface_ViewBounds.field_0 + *(_DWORD *)v60.__pad_0; /*0x63bc98*/
    v60.Coord3D_field_0x04 += (int)DSurface_ViewBounds.field_4; /*0x63bc9a*/
    DrawTacticalFillScanline( /*0x63bcad*/
      3,
      (int)v6,
      v31,
      v58,
      DSurface_ViewBounds.field_0 + *(_DWORD *)v60.__pad_0,
      v60.Coord3D_field_0x04);
    if ( (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 1204))(this) == 29 /*0x63bcca*/
      && Factory::IdleHandler() != -1 )
    {
      BuildingClass::DrawSelectionBlip(v6, v31, v58, v45, v60.Coord3D_field_0x04); /*0x63bcda*/
    }
    LOBYTE(updated) = DSurface::DrawMarker((DSurface *)v6, v45, v60.Coord3D_field_0x04); /*0x63bce7*/
    return updated; /*0x63bcf6*/
  }
  LOBYTE(updated) = v53; /*0x63bcf7*/
  if ( !v53 ) /*0x63bcfd*/
    return updated; /*0x63bcfd*/
  v60.Coord3D_field_0x04 = v44; /*0x63bd03*/
  Type = v70; /*0x63bd07*/
  *(_DWORD *)v60.__pad_0 = v31; /*0x63bd0b*/
  v57 = 3; /*0x63bd0f*/
LABEL_55:
  v46 = (ArrayClass *)ArrayClass::GetAt_Wrap(Type, 0); /*0x63bd25*/
  v70 = v46; /*0x63bd37*/
  ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v46, &v55); /*0x63bd3b*/
  v48 = *ScreenPos; /*0x63bd40*/
  v61 = *ScreenPos; /*0x63bd45*/
  v62 = ScreenPos[1]; /*0x63bd4c*/
  TypeEntry = (const void *)BuildingClass::GetTypeEntry((BuildingClass *)v46, (int)this); /*0x63bd50*/
  v50 = TypeEntry; /*0x63bd55*/
  if ( TypeEntry ) /*0x63bd59*/
  {
    v51 = ActionScenarioClassCoordToScreen((int *)v55.__pad_0, TypeEntry, (int)this); /*0x63bd62*/
    v61 = *v51; /*0x63bd69*/
    v48 = v61; /*0x63bd6d*/
    v62 = v51[1]; /*0x63bd72*/
  }
  DSurface::DrawMarker((DSurface *)v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04); /*0x63bd82*/
  DrawTacticalFillScanline(v57, (int)v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04, v48, v62); /*0x63bd9d*/
  if ( v50 ) /*0x63bda4*/
    DSurface::DrawMarker((DSurface *)v6, v48, v62); /*0x63bdae*/
  qmemcpy(v75, (const void *)BuildingClass::CopyTypeDataForRender((BuildingClass *)v70, (int)v76, (int)this), 0x6Fu); /*0x63bdd3*/
  updated = BuildingClass::updateAnimationState((char *)v75); /*0x63bddf*/
  if ( updated != -1 ) /*0x63bde7*/
    LOBYTE(updated) = BuildingClass::DrawSelectionBlip(v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04, v61, v62); /*0x63bdff*/
  return updated; /*0x63b914*/
}



// ==== 0x0063BE10  BuildingClass::IsIdleWithNoCaptives  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::IsIdleWithNoCaptives(BuildingClass *this)
{
  return (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 11 /*0x63be4a*/
      && (!this || (this->? & 4) == 0 || !this->Anims[18] && !this->?);
}



// ==== 0x0063BE60  BuildingClass::DrawActionLines  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::DrawActionLines(BuildingClass *this)
{
  ArrayClass *Type; // esi
  int (__thiscall **vtable0)(BuildingClass *, Coord3D *); // eax
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  void *v8; // eax
  int (__thiscall **v9)(BuildingClass *); // edx
  int v10; // edi
  int v11; // eax
  int isSelected; // ecx
  char *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int Coord3D_field_0x08; // eax
  int v17; // esi
  char *v18; // edi
  Coord3D *Viewport; // eax
  int *v20; // eax
  ObjectClass *v21; // ebp
  unsigned int v22; // eax
  Coord3D *v23; // eax
  int *v24; // eax
  char v25; // al
  int (__thiscall **v26)(BuildingClass *); // edx
  int v27; // esi
  char *v28; // edi
  Coord3D *v29; // eax
  int *v30; // eax
  Coord3D *v31; // eax
  int *v32; // eax
  unsigned int v33; // eax
  Coord3D *v34; // eax
  int *v35; // eax
  int *v36; // eax
  int v37; // ebx
  unsigned int v38; // eax
  ArrayClass *v39; // edi
  int *ScreenPos; // eax
  const void *TypeEntry; // eax
  const void *v42; // edi
  int *v43; // eax
  int v44; // esi
  ObjectClass *v45; // ebx
  int v46; // esi
  unsigned int updated; // eax
  bool v48; // [esp+23h] [ebp-165h]
  char v49; // [esp+23h] [ebp-165h]
  int v50; // [esp+24h] [ebp-164h] BYREF
  int v51; // [esp+28h] [ebp-160h]
  ObjectClass *v52; // [esp+2Ch] [ebp-15Ch]
  int v53; // [esp+30h] [ebp-158h] BYREF
  int v54; // [esp+34h] [ebp-154h]
  int v55; // [esp+38h] [ebp-150h]
  int v56; // [esp+3Ch] [ebp-14Ch]
  int v57; // [esp+40h] [ebp-148h]
  int v58; // [esp+44h] [ebp-144h] BYREF
  int v59; // [esp+48h] [ebp-140h]
  int v60; // [esp+4Ch] [ebp-13Ch]
  Coord3D v61; // [esp+54h] [ebp-134h] BYREF
  int v62; // [esp+60h] [ebp-128h]
  int v63; // [esp+64h] [ebp-124h] BYREF
  int v64; // [esp+68h] [ebp-120h]
  Coord3D v65; // [esp+74h] [ebp-114h] BYREF
  ArrayClass *v66; // [esp+84h] [ebp-104h]
  int v67; // [esp+88h] [ebp-100h] BYREF
  int Coord3D_field_0x04; // [esp+8Ch] [ebp-FCh]
  int v69; // [esp+90h] [ebp-F8h]
  ObjectClass *v70; // [esp+98h] [ebp-F0h]
  _DWORD v71[3]; // [esp+9Ch] [ebp-ECh] BYREF
  _WORD v72[56]; // [esp+A8h] [ebp-E0h] BYREF
  char v73[112]; // [esp+118h] [ebp-70h] BYREF

  Type = (ArrayClass *)BuildingClass::GetType(this); /*0x63be75*/
  vtable0 = (int (__thiscall **)(BuildingClass *, Coord3D *))this->TechnoClass; /*0x63be77*/
  v66 = Type; /*0x63be7d*/
  v4 = (_DWORD *)vtable0[22](this, &v65); /*0x63be81*/
  v71[0] = *v4; /*0x63be86*/
  v71[1] = v4[1]; /*0x63be90*/
  v71[2] = v4[2]; /*0x63bead*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v71, &v58); /*0x63beb4*/
  v5 = DSurface_ViewBounds.field_0 + v58; /*0x63becd*/
  v59 += (int)DSurface_ViewBounds.field_4; /*0x63bed3*/
  v63 = DSurface_ViewBounds.field_0 + v58; /*0x63bed7*/
  v64 = v59; /*0x63bedb*/
  v6 = *((_DWORD *)stru_A80220.? + TeamClass::GetLeaderIndex((TeamClass *)this)) + 22265; /*0x63beef*/
  LOWORD(v50) = *(_WORD *)v6; /*0x63bef7*/
  BYTE2(v50) = *(_BYTE *)(v6 + 2); /*0x63bf03*/
  v52 = (ObjectClass *)ColorLerpAndPack((HouseClass *)&v50, &byte_A83CD9, 0x50u); /*0x63bf13*/
  v7 = *((_DWORD *)stru_A80220.? + TeamClass::GetLeaderIndex((TeamClass *)this)) + 22265; /*0x63bf27*/
  LOWORD(v50) = *(_WORD *)v7; /*0x63bf30*/
  BYTE2(v50) = *(_BYTE *)(v7 + 2); /*0x63bf3d*/
  v70 = (ObjectClass *)ColorLerpAndPack((HouseClass *)&v50, (unsigned __int8 *)&stru_A80220, 0x64u); /*0x63bf4c*/
  if ( Type ) /*0x63bf53*/
    v8 = Type->field_14; /*0x63bf59*/
  else
    v8 = 0; /*0x63bf55*/
  v9 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x63bf5c*/
  HIBYTE(v51) = (int)v8 > 0; /*0x63bf63*/
  v48 = v9[97](this) != 5 && !BuildingClass::IsIdleWithNoCaptives(this) && (HIBYTE(v51) || this->?); /*0x63bf97*/
  v67 = 4; /*0x63bfb3*/
  v10 = PackRGB565(byte_A83CD9, word_A83CDA, MEMORY[0xA83CDB]); /*0x63bfc2*/
  if ( !this ) /*0x63bfc4*/
    goto LABEL_15; /*0x63bfc4*/
  v11 = PackRGBFromBytes(&stru_A80220); /*0x63bfcb*/
  v50 = v11; /*0x63bfd6*/
  if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63bfdc*/
  {
    if ( Array::FindValue(*(Array **)&stru_AC4B30.__pad_70[80], (int)this) != -1 ) /*0x63bfe7*/
      goto LABEL_16; /*0x63bfe7*/
    goto LABEL_15; /*0x63bfe7*/
  }
  isSelected = (unsigned __int8)this->?; /*0x63bff3*/
  v50 = v11; /*0x63bff9*/
  if ( !(_BYTE)isSelected ) /*0x63bfff*/
LABEL_15:
    v50 = v10; /*0x63c001*/
LABEL_16:
  if ( Type && (*(_DWORD *)(*(_DWORD *)Type->__pad_0 + 172) == 28 || *(_DWORD *)(*(_DWORD *)Type->__pad_0 + 180) == 28) ) /*0x63c022*/
  {
    v13 = &Type->__pad_18[5]; /*0x63c028*/
    qmemcpy(v72, v13, 0x6Cu); /*0x63c03e*/
    v13 += 108; /*0x63c03e*/
    v72[54] = *(_WORD *)v13; /*0x63c040*/
    LOBYTE(v72[55]) = v13[2]; /*0x63c046*/
    v65 = *(Coord3D *)GetScenarioClassActionCoords(&v63, v72); /*0x63c04e*/
    v14 = Coord3D::Set(&v61, -1, -1, -1); /*0x63c06a*/
    if ( (unsigned __int8)Coord3D::Equals(&v65, v14) && this ) /*0x63c07f*/
    {
      v15 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 22))(this, &v53); /*0x63c08b*/
      *(_DWORD *)v65.__pad_0 = *v15; /*0x63c090*/
      v65.Coord3D_field_0x04 = v15[1]; /*0x63c097*/
      Coord3D_field_0x08 = v15[2]; /*0x63c09b*/
    }
    else
    {
      Coord3D_field_0x08 = v65.Coord3D_field_0x08; /*0x63c0a0*/
    }
    v69 = Coord3D_field_0x08; /*0x63c0ac*/
    v67 = *(_DWORD *)v65.__pad_0; /*0x63c0b3*/
    Coord3D_field_0x04 = v65.Coord3D_field_0x04; /*0x63c0c7*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v67, &v63); /*0x63c0ce*/
    v17 = DSurface_ViewBounds.field_0 + v63; /*0x63c0e6*/
    v18 = (char *)DSurface_ViewBounds.field_4 + v64; /*0x63c0ec*/
    Viewport = (Coord3D *)Display::GetViewport((int *)v65.__pad_0); /*0x63c0ee*/
    v61 = *Viewport; /*0x63c0f5*/
    v62 = *(_DWORD *)Viewport[1].__pad_0; /*0x63c119*/
    v20 = ComputeBounds(&v65, 6, v5, v59); /*0x63c11d*/
    v53 = *v20; /*0x63c124*/
    v54 = v20[1]; /*0x63c12b*/
    v55 = v20[2]; /*0x63c136*/
    v56 = v20[3]; /*0x63c140*/
    ShrinkRect(&v53, -1); /*0x63c144*/
    v21 = v52; /*0x63c149*/
    (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63c160*/
      DSurface_Composite,
      &v61,
      &v53,
      v52);
    DrawTacticalLine2D(0, (int)v21, v5, v59, v17, (int)v18, 1); /*0x63c171*/
    if ( SLOBYTE(v72[6]) == 11 ) /*0x63c181*/
    {
      v22 = Memory::Alloc76(); /*0x63c183*/
    }
    else
    {
      if ( SLOBYTE(v72[6]) != 29 ) /*0x63c18d*/
      {
LABEL_29:
        v23 = (Coord3D *)Display::GetViewport((int *)v65.__pad_0); /*0x63c1ad*/
        v61 = *v23; /*0x63c1b8*/
        v62 = *(_DWORD *)v23[1].__pad_0; /*0x63c1d3*/
        v24 = ComputeBounds(&v65, 6, v17, (int)v18); /*0x63c1dc*/
        v53 = *v24; /*0x63c1e3*/
        v54 = v24[1]; /*0x63c1ea*/
        v55 = v24[2]; /*0x63c1f1*/
        v56 = v24[3]; /*0x63c1fc*/
        ShrinkRect(&v53, -1); /*0x63c203*/
        (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63c21b*/
                                                                               + 16))(
          DSurface_Composite,
          &v61,
          &v53,
          v21);
        return; /*0x63c228*/
      }
      v22 = Factory::IdleHandler(); /*0x63c18f*/
    }
    if ( v22 != -1 ) /*0x63c197*/
      DrawTacticalWaypoint((int)v21, v50, v5, v59, v17, (int)v18, v22); /*0x63c1a8*/
    goto LABEL_29; /*0x63c1a8*/
  }
  if ( !v48 ) /*0x63c22f*/
  {
    if ( !HIBYTE(v51) ) /*0x63c56f*/
      return; /*0x63c56f*/
    goto LABEL_49; /*0x63c56f*/
  }
  v25 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 299))(this); /*0x63c23a*/
  v26 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x63c240*/
  HIBYTE(v57) = v25; /*0x63c245*/
  v49 = v26[300](this); /*0x63c253*/
  v65 = *(Coord3D *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 267))(this, &v53); /*0x63c265*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v65, &v67); /*0x63c287*/
  v27 = DSurface_ViewBounds.field_0 + v67; /*0x63c2a6*/
  v28 = (char *)DSurface_ViewBounds.field_4 + Coord3D_field_0x04; /*0x63c2a8*/
  if ( this->? ) /*0x63c2a0*/
  {
    v29 = (Coord3D *)Display::GetViewport(&v63); /*0x63c2b6*/
    v61 = *v29; /*0x63c2bd*/
    v62 = *(_DWORD *)v29[1].__pad_0; /*0x63c2dd*/
    v30 = ComputeBounds(&v63, 6, v27, (int)v28); /*0x63c2e1*/
    v53 = *v30; /*0x63c2e8*/
    v54 = v30[1]; /*0x63c2ef*/
    v55 = v30[2]; /*0x63c2f6*/
    v56 = v30[3]; /*0x63c301*/
    ShrinkRect(&v53, -1); /*0x63c308*/
    (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63c324*/
      DSurface_Composite,
      &v61,
      &v53,
      v52);
    return; /*0x63c331*/
  }
  v31 = (Coord3D *)Display::GetViewport(&v67); /*0x63c336*/
  v61 = *v31; /*0x63c33d*/
  v62 = *(_DWORD *)v31[1].__pad_0; /*0x63c35a*/
  v32 = ComputeBounds(&v67, 6, v5, v59); /*0x63c365*/
  v53 = *v32; /*0x63c36c*/
  v54 = v32[1]; /*0x63c373*/
  v55 = v32[2]; /*0x63c37a*/
  v56 = v32[3]; /*0x63c385*/
  ShrinkRect(&v53, -1); /*0x63c38c*/
  (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63c3a8*/
    DSurface_Composite,
    &v61,
    &v53,
    v52);
  DrawTacticalLine2D(0, (int)v52, v5, v59, v27, (int)v28, 1); /*0x63c3bb*/
  if ( !HIBYTE(v57) || v49 ) /*0x63c3ce*/
  {
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 11 ) /*0x63c3f5*/
    {
      v33 = Memory::Alloc76(); /*0x63c3f7*/
LABEL_39:
      if ( v33 != -1 ) /*0x63c3ff*/
        DrawTacticalWaypoint((int)v52, v50, v5, v59, v27, (int)v28, v33); /*0x63c412*/
    }
  }
  else if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 301))(this) == 29 ) /*0x63c3de*/
  {
    v33 = Factory::IdleHandler(); /*0x63c3e0*/
    goto LABEL_39; /*0x63c3e5*/
  }
  v34 = (Coord3D *)Display::GetViewport(&v58); /*0x63c417*/
  v61 = *v34; /*0x63c422*/
  v62 = *(_DWORD *)v34[1].__pad_0; /*0x63c43d*/
  v35 = ComputeBounds(&v58, 6, v27, (int)v28); /*0x63c446*/
  v53 = *v35; /*0x63c44d*/
  v54 = v35[1]; /*0x63c454*/
  v55 = v35[2]; /*0x63c45b*/
  v56 = v35[3]; /*0x63c466*/
  ShrinkRect(&v53, -1); /*0x63c46d*/
  (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63c489*/
    DSurface_Composite,
    &v61,
    &v53,
    v52);
  if ( v49 ) /*0x63c492*/
  {
    v36 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 302))(this, &v53); /*0x63c4a2*/
    v58 = *v36; /*0x63c4aa*/
    v59 = v36[1]; /*0x63c4b1*/
    v60 = v36[2]; /*0x63c4c8*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v58, &v63); /*0x63c4cc*/
    v37 = DSurface_ViewBounds.field_0 + v63; /*0x63c4e0*/
    v64 += (int)DSurface_ViewBounds.field_4; /*0x63c4f4*/
    DrawTacticalLine2D(0, (int)v52, v27, (int)v28, DSurface_ViewBounds.field_0 + v63, v64, 1); /*0x63c4f8*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 301))(this) == 29 ) /*0x63c50b*/
    {
      v38 = Factory::IdleHandler(); /*0x63c50d*/
      if ( v38 != -1 ) /*0x63c515*/
        DrawTacticalWaypoint((int)v52, v50, v27, (int)v28, v37, v64, v38); /*0x63c528*/
    }
    DrawActionLineSegment(v52, v37, v64); /*0x63c537*/
    return; /*0x63c546*/
  }
  if ( !HIBYTE(v51) ) /*0x63c54d*/
    return; /*0x63c54d*/
  v63 = v27; /*0x63c553*/
  Type = v66; /*0x63c557*/
  v64 = (int)v28; /*0x63c55b*/
  v67 = 3; /*0x63c55f*/
LABEL_49:
  v39 = (ArrayClass *)ArrayClass::GetAt_Wrap(Type, 0); /*0x63c575*/
  v66 = v39; /*0x63c587*/
  ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v39, &v65); /*0x63c58b*/
  v58 = *ScreenPos; /*0x63c592*/
  v59 = ScreenPos[1]; /*0x63c59c*/
  TypeEntry = (const void *)BuildingClass::GetTypeEntry((BuildingClass *)v39, (int)this); /*0x63c5a0*/
  v42 = TypeEntry; /*0x63c5a5*/
  if ( TypeEntry ) /*0x63c5a9*/
  {
    v43 = ActionScenarioClassCoordToScreen((int *)v65.__pad_0, TypeEntry, (int)this); /*0x63c5b2*/
    v58 = *v43; /*0x63c5b9*/
    v59 = v43[1]; /*0x63c5c0*/
  }
  v44 = *(_DWORD *)&Type->__pad_18[116]; /*0x63c5c4*/
  if ( v44 == -1 || (v45 = v70, v44 > 0) ) /*0x63c5dd*/
    v45 = v52; /*0x63c5df*/
  v46 = v63; /*0x63c5e7*/
  DrawActionLineSegment(v45, v63, v64); /*0x63c5ef*/
  globalHelper_03D960(v67, (int)v45, v46, v64, v58, v59); /*0x63c60a*/
  if ( v42 ) /*0x63c611*/
    DrawActionLineSegment(v45, v58, v59); /*0x63c61f*/
  qmemcpy(v72, (const void *)BuildingClass::CopyTypeDataForRender((BuildingClass *)v66, (int)v73, (int)this), 0x6Fu); /*0x63c644*/
  updated = BuildingClass::updateAnimationState((char *)v72); /*0x63c650*/
  if ( updated != -1 ) /*0x63c658*/
    DrawTacticalWaypoint((int)v45, v50, v63, v64, v58, v59, updated); /*0x63c675*/
}



// ==== 0x0063C690  ObjectClass::RenderScenarioActionLines  this=ObjectClass  sig=csp ====
int __thiscall RenderScenarioActionLines(ObjectClass *this)
{
  int *v2; // eax
  int v3; // edx
  int uniqueId; // eax
  _BYTE *v5; // esi
  ObjectClass *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int **vtable1; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  int *v15; // eax
  int v16; // esi
  int *v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // edi
  int *Viewport; // eax
  int v22; // esi
  int v23; // edi
  int v24; // eax
  int *v25; // eax
  int v26; // ebx
  int v28; // [esp+10h] [ebp-120h]
  BuildingClass *v29; // [esp+14h] [ebp-11Ch]
  Coord3D v30; // [esp+18h] [ebp-118h] BYREF
  int v31; // [esp+24h] [ebp-10Ch]
  int v32; // [esp+28h] [ebp-108h]
  int v33; // [esp+2Ch] [ebp-104h] BYREF
  int v34; // [esp+30h] [ebp-100h]
  int v35; // [esp+34h] [ebp-FCh]
  Coord2D v36; // [esp+38h] [ebp-F8h] BYREF
  int v37; // [esp+40h] [ebp-F0h] BYREF
  int v38; // [esp+44h] [ebp-ECh]
  _DWORD v39[3]; // [esp+48h] [ebp-E8h] BYREF
  const void *v40; // [esp+54h] [ebp-DCh]
  int nextObject; // [esp+58h] [ebp-D8h]
  __int64 v42; // [esp+5Ch] [ebp-D4h] BYREF
  int v43; // [esp+64h] [ebp-CCh]
  _DWORD v44[4]; // [esp+68h] [ebp-C8h] BYREF
  int v45[2]; // [esp+78h] [ebp-B8h] BYREF
  _DWORD v46[3]; // [esp+80h] [ebp-B0h] BYREF
  int v47; // [esp+8Ch] [ebp-A4h] BYREF
  Rect v48; // [esp+94h] [ebp-9Ch] BYREF
  _DWORD v49[3]; // [esp+A4h] [ebp-8Ch] BYREF
  Display v50[16]; // [esp+B0h] [ebp-80h] BYREF
  _WORD v51[56]; // [esp+C0h] [ebp-70h] BYREF

  v30 = *(Coord3D *)ScriptAction::GetCoords((ScriptAction *)this, v39); /*0x63c6a8*/
  v2 = ToCoordPixel(&v33, &v30); /*0x63c6c2*/
  v31 = *v2; /*0x63c6cc*/
  v28 = -1; /*0x63c6d0*/
  v3 = v2[1]; /*0x63c6d4*/
  uniqueId = this->uniqueId; /*0x63c6d7*/
  v32 = v3; /*0x63c6dc*/
  if ( uniqueId > 0 ) /*0x63c6e0*/
  {
    v5 = *(_BYTE **)(*(_DWORD *)this->vtable1 + 4); /*0x63c6f3*/
    qmemcpy(v51, v5, 0x6Cu); /*0x63c6f6*/
    v5 += 108; /*0x63c6f6*/
    v51[54] = *(_WORD *)v5; /*0x63c6f8*/
    LOBYTE(v51[55]) = v5[2]; /*0x63c6fa*/
    if ( SLOBYTE(v51[6]) == 11 ) /*0x63c706*/
    {
      v28 = Memory::Alloc76(); /*0x63c70d*/
    }
    else if ( SLOBYTE(v51[6]) == 29 ) /*0x63c716*/
    {
      v28 = Factory::IdleHandler(); /*0x63c71d*/
    }
    else
    {
      v28 = -1; /*0x63c723*/
    }
  }
  v6 = (ObjectClass *)Function::Method_6342D0((Function *)this, 0); /*0x63c72b*/
  v29 = (BuildingClass *)Render_Render_63D0F0(v6); /*0x63c737*/
  v7 = 0; /*0x63c73e*/
  nextObject = this->nextObject; /*0x63c740*/
  v35 = 0; /*0x63c746*/
  if ( nextObject > 0 ) /*0x63c74a*/
  {
    while ( 1 ) /*0x63c76b*/
    {
      v30 = *(Coord3D *)ScenarioClass::GetActionCoordsCopy(*(ScenarioClass **)(this->occupant + 4 * v7), v49); /*0x63c76b*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v30, &v37); /*0x63c78d*/
      v8 = DSurface_ViewBounds.field_0 + v37; /*0x63c7a2*/
      v9 = dword_886FA4 + v38; /*0x63c7aa*/
      v37 += DSurface_ViewBounds.field_0; /*0x63c7b4*/
      v38 += dword_886FA4; /*0x63c7b8*/
      Coord::Subtract((Coord *)&v42, -1, -1, -1); /*0x63c7bc*/
      if ( *(_QWORD *)v30.__pad_0 == v42 && v30.Coord3D_field_0x08 == v43 ) /*0x63c7eb*/
      {
        v10 = this->uniqueId; /*0x63c7f4*/
        v11 = 0; /*0x63c7fa*/
        v40 = *(const void **)(this->occupant + 4 * v7); /*0x63c7fe*/
        if ( v10 <= 0 ) /*0x63c802*/
        {
LABEL_16:
          v13 = 0; /*0x63c81a*/
        }
        else
        {
          vtable1 = (int **)this->vtable1; /*0x63c804*/
          while ( (*vtable1)[2] != v7 ) /*0x63c80c*/
          {
            ++v11; /*0x63c812*/
            ++vtable1; /*0x63c813*/
            if ( v11 >= v10 ) /*0x63c818*/
              goto LABEL_16; /*0x63c818*/
          }
          v13 = **vtable1; /*0x63ca6b*/
        }
        v8 = -1; /*0x63c820*/
        v9 = -1; /*0x63c823*/
        if ( v40 ) /*0x63c828*/
        {
          qmemcpy(v51, v40, 0x6Fu); /*0x63c836*/
          v14 = Render_Render_63CA80(v46, v51, v13); /*0x63c84a*/
          v39[0] = *v14; /*0x63c851*/
          v39[1] = v14[1]; /*0x63c858*/
          v39[2] = v14[2]; /*0x63c866*/
          v15 = ToCoordPixel(&v47, v39); /*0x63c86e*/
          v8 = *v15; /*0x63c873*/
          v9 = v15[1]; /*0x63c875*/
        }
      }
      v16 = -1; /*0x63c878*/
      do /*0x63c898*/
        DrawTacticalLine2D(v16++, (int)v29, v8, v9, v31, v32, 0); /*0x63c88f*/
      while ( v16 <= 2 ); /*0x63c898*/
      if ( v28 != -1 ) /*0x63c89f*/
      {
        v33 = v31; /*0x63c8ad*/
        v34 = v32; /*0x63c8bf*/
        *(_DWORD *)v36.__pad_0 = v8; /*0x63c8c3*/
        v36.Coord2D_field_0x04 = v9; /*0x63c8c7*/
        v17 = Coord2D::Sub(&v36, v45, &v33); /*0x63c8cb*/
        Vector::TwoDMagnitudeMath((Vector *)v17); /*0x63c8d2*/
        if ( v18 >= 37 ) /*0x63c8da*/
        {
          v19 = (*(_DWORD *)v36.__pad_0 + v33) / 2 - 10; /*0x63c90a*/
          v20 = (v34 + v36.Coord2D_field_0x04) / 2 - 10; /*0x63c90d*/
          Viewport = Display::GetViewport(v50); /*0x63c910*/
          v44[0] = *Viewport; /*0x63c917*/
          v44[1] = Viewport[1]; /*0x63c922*/
          v44[2] = Viewport[2]; /*0x63c92b*/
          v44[3] = Viewport[3]; /*0x63c93c*/
          Rect::Set(&v48, v19, v20, 21, 21); /*0x63c943*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, Rect *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63c962*/
                                                                                   + 84))(
            DSurface_Composite,
            v44,
            &v48,
            v29);
        }
      }
      if ( ++v35 >= nextObject ) /*0x63c974*/
        break; /*0x63c974*/
      v7 = v35; /*0x63c752*/
    }
  }
  if ( this->lineTrailer > 0 && this->fallRate == -1 ) /*0x63c991*/
  {
    v30 = *(Coord3D *)ScenarioClass::GetActionCoordsCopy((ScenarioClass *)&this->attachedBomb, v46); /*0x63c9ab*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v30, &v33); /*0x63c9cd*/
    v22 = DSurface_ViewBounds.field_0 + v33; /*0x63c9e7*/
    v23 = dword_886FA4 + v34; /*0x63c9f1*/
    Coord::Subtract((Coord *)v39, -1, -1, -1); /*0x63c9f3*/
    if ( (unsigned __int8)Coord3D::Equals(&v30, v39) ) /*0x63ca01*/
    {
      v24 = Render_Render_634770(this); /*0x63ca0c*/
      v25 = ActionScenarioClassCoordToScreen(v45, &this->attachedBomb, v24); /*0x63ca18*/
      v22 = *v25; /*0x63ca1d*/
      v23 = v25[1]; /*0x63ca1f*/
    }
    v26 = v31; /*0x63ca26*/
    DrawTacticalFillScanline(4, (int)v29, v22, v23, v31, v32); /*0x63ca37*/
    if ( v28 != -1 ) /*0x63ca41*/
      BuildingClass::DrawSelectionBlip(v29, v22, v23, v26, v32); /*0x63ca4f*/
  }
  return ScenarioClass::RenderAction((ScenarioClass *)this, (int)v29); /*0x63ca60*/
}



// ==== 0x0063CA80  Render_Render_63CA80  this=-  sig=csp ====
_DWORD *__fastcall sub_63CA80(_DWORD *a1, _BYTE *a2, int a3)
{
  int *ScenarioClassActionCoords; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int *v8; // ecx
  _DWORD v10[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, a2); /*0x63ca90*/
  v5 = *ScenarioClassActionCoords; /*0x63ca92*/
  v6 = ScenarioClassActionCoords[1]; /*0x63ca97*/
  v7 = ScenarioClassActionCoords[2]; /*0x63ca9a*/
  if ( *ScenarioClassActionCoords == -1 && v6 == -1 && v7 == -1 && a3 ) /*0x63caad*/
  {
    v8 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a3 + 88))(a3, v10); /*0x63cab9*/
    v5 = *v8; /*0x63cabb*/
    v6 = v8[1]; /*0x63cabd*/
    v7 = v8[2]; /*0x63cac0*/
  }
  *a1 = v5; /*0x63cac5*/
  a1[1] = v6; /*0x63caca*/
  a1[2] = v7; /*0x63cacd*/
  return a1; /*0x63cac9*/
}



// ==== 0x0063CAE0  ObjectClass::RenderScenarioActionLines2  this=ObjectClass  sig=csp ====
int __thiscall RenderScenarioActionLines2(ObjectClass *this)
{
  int *Coords; // eax
  int *v3; // eax
  int v4; // edx
  int uniqueId; // eax
  _BYTE *v6; // esi
  ObjectClass *v7; // eax
  int v8; // esi
  int *ActionCoordsCopy; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // edx
  const void *v13; // ebx
  int v14; // eax
  int **vtable1; // ecx
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  int *v19; // eax
  int i; // esi
  int *v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int *v25; // eax
  int v26; // ebx
  int DrawColor; // eax
  unsigned int v29; // [esp+10h] [ebp-D8h]
  int v30; // [esp+14h] [ebp-D4h] BYREF
  int v31; // [esp+18h] [ebp-D0h]
  int v32; // [esp+1Ch] [ebp-CCh]
  int v33; // [esp+20h] [ebp-C8h]
  int v34; // [esp+24h] [ebp-C4h]
  int v35; // [esp+28h] [ebp-C0h] BYREF
  int v36; // [esp+2Ch] [ebp-BCh]
  int nextObject; // [esp+30h] [ebp-B8h]
  int v38; // [esp+34h] [ebp-B4h]
  int v39; // [esp+38h] [ebp-B0h]
  int v40; // [esp+3Ch] [ebp-ACh] BYREF
  int v41; // [esp+40h] [ebp-A8h]
  int v42; // [esp+44h] [ebp-A4h]
  int v43; // [esp+48h] [ebp-A0h]
  _DWORD v44[3]; // [esp+4Ch] [ebp-9Ch] BYREF
  int v45[2]; // [esp+58h] [ebp-90h] BYREF
  _DWORD v46[3]; // [esp+60h] [ebp-88h] BYREF
  _DWORD v47[3]; // [esp+6Ch] [ebp-7Ch] BYREF
  _WORD v48[56]; // [esp+78h] [ebp-70h] BYREF

  Coords = ScriptAction::GetCoords((ScriptAction *)this, &v40); /*0x63caf1*/
  v30 = *Coords; /*0x63caf8*/
  v31 = Coords[1]; /*0x63cb03*/
  v32 = Coords[2]; /*0x63cb0e*/
  v3 = ToCoordPixel(&v35, &v30); /*0x63cb12*/
  v33 = *v3; /*0x63cb1c*/
  v29 = -1; /*0x63cb20*/
  v4 = v3[1]; /*0x63cb24*/
  uniqueId = this->uniqueId; /*0x63cb27*/
  v34 = v4; /*0x63cb2c*/
  if ( uniqueId > 0 ) /*0x63cb30*/
  {
    v6 = *(_BYTE **)(*(_DWORD *)this->vtable1 + 4); /*0x63cb40*/
    qmemcpy(v48, v6, 0x6Cu); /*0x63cb43*/
    v6 += 108; /*0x63cb43*/
    v48[54] = *(_WORD *)v6; /*0x63cb45*/
    LOBYTE(v48[55]) = v6[2]; /*0x63cb47*/
    if ( SLOBYTE(v48[6]) == 11 ) /*0x63cb53*/
    {
      v29 = Memory::Alloc76(); /*0x63cb5a*/
    }
    else if ( SLOBYTE(v48[6]) == 29 ) /*0x63cb63*/
    {
      v29 = Factory::IdleHandler(); /*0x63cb6a*/
    }
    else
    {
      v29 = -1; /*0x63cb70*/
    }
  }
  v7 = (ObjectClass *)Function::Method_6342D0((Function *)this, 0); /*0x63cb78*/
  v39 = Render_Render_63D0F0(v7); /*0x63cb84*/
  v8 = 0; /*0x63cb8b*/
  nextObject = this->nextObject; /*0x63cb8d*/
  v38 = 0; /*0x63cb93*/
  if ( nextObject > 0 ) /*0x63cb97*/
  {
    while ( 1 ) /*0x63cbaf*/
    {
      v43 = TeamClass::FindByMemberType((TeamClass *)this, v8); /*0x63cbaf*/
      ActionCoordsCopy = ScenarioClass::GetActionCoordsCopy(*(ScenarioClass **)(this->occupant + 4 * v8), v47); /*0x63cbba*/
      v30 = *ActionCoordsCopy; /*0x63cbc1*/
      v31 = ActionCoordsCopy[1]; /*0x63cbd3*/
      v32 = ActionCoordsCopy[2]; /*0x63cbdf*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v30, &v35); /*0x63cbe3*/
      v10 = DSurface_ViewBounds.field_0 + v35; /*0x63cbf8*/
      v11 = dword_886FA4 + v36; /*0x63cc00*/
      v35 += DSurface_ViewBounds.field_0; /*0x63cc0a*/
      v36 += dword_886FA4; /*0x63cc0e*/
      Coord::Subtract((Coord *)v44, -1, -1, -1); /*0x63cc12*/
      if ( v30 == v44[0] && v31 == v44[1] && v32 == v44[2] ) /*0x63cc41*/
      {
        v12 = this->uniqueId; /*0x63cc46*/
        v13 = *(const void **)(this->occupant + 4 * v8); /*0x63cc49*/
        v14 = 0; /*0x63cc4c*/
        if ( v12 <= 0 ) /*0x63cc50*/
        {
LABEL_17:
          v16 = 0; /*0x63cc68*/
        }
        else
        {
          vtable1 = (int **)this->vtable1; /*0x63cc52*/
          while ( (*vtable1)[2] != v8 ) /*0x63cc5a*/
          {
            ++v14; /*0x63cc60*/
            ++vtable1; /*0x63cc61*/
            if ( v14 >= v12 ) /*0x63cc66*/
              goto LABEL_17; /*0x63cc66*/
          }
          v16 = **vtable1; /*0x63ce2d*/
        }
        v10 = -1; /*0x63cc6a*/
        v17 = -1; /*0x63cc6d*/
        if ( v13 ) /*0x63cc72*/
        {
          qmemcpy(v48, v13, 0x6Fu); /*0x63cc80*/
          v18 = Render_Render_63CA80(v46, v48, v16); /*0x63cc8d*/
          v40 = *v18; /*0x63cc94*/
          v41 = v18[1]; /*0x63cc9f*/
          v42 = v18[2]; /*0x63ccaa*/
          v19 = ToCoordPixel(v45, &v40); /*0x63ccae*/
          v10 = *v19; /*0x63ccb3*/
          v17 = v19[1]; /*0x63ccb5*/
        }
        v11 = v17; /*0x63ccb8*/
      }
      for ( i = 0; i <= 1; ++i ) /*0x63ccba*/
        DrawTacticalLine2D(i, v43, v10, v11, v33, v34, 1); /*0x63ccd0*/
      if ( v29 != -1 ) /*0x63cce2*/
        DrawTacticalWaypoint(v43, v39, v10, v11, v33, v34, v29); /*0x63ccf9*/
      if ( ++v38 >= nextObject ) /*0x63cd0d*/
        break; /*0x63cd0d*/
      v8 = v38; /*0x63cb9f*/
    }
  }
  if ( this->lineTrailer > 0 && this->fallRate == -1 ) /*0x63cd2a*/
  {
    nextObject = TeamClass::GetMember((TeamClass *)this); /*0x63cd41*/
    v21 = ScenarioClass::GetActionCoordsCopy((ScenarioClass *)&this->attachedBomb, v46); /*0x63cd45*/
    v30 = *v21; /*0x63cd4c*/
    v31 = v21[1]; /*0x63cd53*/
    v32 = v21[2]; /*0x63cd6a*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v30, &v35); /*0x63cd6e*/
    v22 = dword_886FA4 + v36; /*0x63cd89*/
    v23 = DSurface_ViewBounds.field_0 + v35; /*0x63cd93*/
    Coord::Subtract((Coord *)&v40, -1, -1, -1); /*0x63cd95*/
    if ( v30 == v40 && v31 == v41 && v32 == v42 ) /*0x63cdbc*/
    {
      v24 = Render_Render_634770(this); /*0x63cdc0*/
      v25 = ActionScenarioClassCoordToScreen(v45, &this->attachedBomb, v24); /*0x63cdcc*/
      v23 = *v25; /*0x63cdd1*/
      v22 = v25[1]; /*0x63cdd3*/
    }
    v26 = nextObject; /*0x63cdda*/
    globalHelper_03D960(4, nextObject, v23, v22, v33, v34); /*0x63cded*/
    if ( v29 != -1 ) /*0x63cdf9*/
      DrawTacticalWaypoint(v26, v39, v23, v22, v33, v34, v29); /*0x63ce0e*/
  }
  DrawColor = BuildingClass::GetDrawColor((int)this); /*0x63ce15*/
  return Render_Render_635490(this, DrawColor); /*0x63ce22*/
}



// ==== 0x0063CE40  ScriptAction::DrawPlacementMarker  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::DrawPlacementMarker(ScriptAction *this)
{
  int DrawColor; // edi
  int *Viewport; // eax
  int v4; // edx
  int v5; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  int v8[2]; // [esp+8h] [ebp-44h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v10[4]; // [esp+1Ch] [ebp-30h] BYREF
  _DWORD v11[4]; // [esp+2Ch] [ebp-20h] BYREF
  _DWORD v12[4]; // [esp+3Ch] [ebp-10h] BYREF

  DrawColor = BuildingClass::GetDrawColor((int)this); /*0x63ce50*/
  Viewport = Display::GetViewport(v10); /*0x63ce52*/
  v12[0] = *Viewport; /*0x63ce59*/
  v12[1] = Viewport[1]; /*0x63ce60*/
  v12[2] = Viewport[2]; /*0x63ce67*/
  v4 = Viewport[3]; /*0x63ce6b*/
  v5 = this->ScriptAction_field_0x4[0]; /*0x63ce6e*/
  v12[3] = v4; /*0x63ce71*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(_BYTE **)(*(_DWORD *)v5 + 4)); /*0x63ce7e*/
  v9[0] = *ScenarioClassActionCoords; /*0x63ce85*/
  v9[1] = ScenarioClassActionCoords[1]; /*0x63ce8c*/
  v9[2] = ScenarioClassActionCoords[2]; /*0x63cea3*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, v8); /*0x63cea7*/
  v8[0] += DSurface_ViewBounds.field_0; /*0x63cec7*/
  v11[0] = v8[0] - 4 + 1; /*0x63cedb*/
  v11[1] = (char *)DSurface_ViewBounds.field_4 + v8[1] - 3; /*0x63cedf*/
  v11[2] = 6; /*0x63cef5*/
  v11[3] = 6; /*0x63cef9*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63cf07*/
           DSurface_Composite,
           v12,
           v11,
           DrawColor);
}



// ==== 0x0063CF10  HouseClass::method_63CF10  this=HouseClass  sig=csp ====
int __thiscall sub_63CF10(HouseClass *this)
{
  int v1; // ecx
  void *Object_field_0x30; // esi
  int v3; // ecx
  Color v5; // [esp+4h] [ebp-8h] BYREF

  v1 = this->planningPaths[3]; /*0x63cf10*/
  Object_field_0x30 = *(void **)(v1 + 48); /*0x63cf1a*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v1) && dword_A83D4C ) /*0x63cf2d*/
    Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x63cf2f*/
  v3 = *((_DWORD *)stru_A80220.? + (_DWORD)Object_field_0x30) + 22265; /*0x63cf41*/
  LOWORD(v5.Color_field_00) = *(_WORD *)v3; /*0x63cf4a*/
  BYTE2(v5.Color_field_00) = *(_BYTE *)(v3 + 2); /*0x63cf56*/
  Color::Lerp(&v5, 0x50u, &byte_A83CD9); /*0x63cf5a*/
  return (BYTE1(v5.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x63cf80*/
       | (LOBYTE(v5.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
       | (BYTE2(v5.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x0063CFC0  HouseClass::method_63CFC0  this=HouseClass  sig=csp ====
int __thiscall sub_63CFC0(HouseClass *this)
{
  int v1; // ecx
  void *Object_field_0x30; // esi
  int v3; // ecx
  Color v5; // [esp+4h] [ebp-8h] BYREF

  v1 = this->planningPaths[3]; /*0x63cfc0*/
  Object_field_0x30 = *(void **)(v1 + 48); /*0x63cfca*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v1) && dword_A83D4C ) /*0x63cfdd*/
    Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x63cfdf*/
  v3 = *((_DWORD *)stru_A80220.? + (_DWORD)Object_field_0x30) + 22265; /*0x63cff1*/
  LOWORD(v5.Color_field_00) = *(_WORD *)v3; /*0x63cffa*/
  BYTE2(v5.Color_field_00) = *(_BYTE *)(v3 + 2); /*0x63d006*/
  Color::Lerp(&v5, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x63d00a*/
  return (BYTE1(v5.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x63d030*/
       | (LOBYTE(v5.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
       | (BYTE2(v5.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x0063D070  HouseClass::ColorLerpAndPack  this=HouseClass  sig=csp ====
int __fastcall ColorLerpAndPack(HouseClass *this, unsigned __int8 *a2, unsigned __int8 a3)
{
  __int16 vtable0; // ax
  Color v5; // [esp+0h] [ebp-8h] BYREF

  vtable0 = (__int16)this->AbstractClass; /*0x63d073*/
  BYTE2(v5.Color_field_00) = BYTE2(this->AbstractClass); /*0x63d07e*/
  LOWORD(v5.Color_field_00) = vtable0; /*0x63d087*/
  Color::Lerp(&v5, a3, a2); /*0x63d08c*/
  return (LOBYTE(v5.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x63d0e2*/
       | (BYTE1(v5.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(v5.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x0063D0F0  ObjectClass::Render_Render_63D0F0  this=ObjectClass  sig=csp ====
int __thiscall Render_Render_63D0F0(ObjectClass *this)
{
  int result; // eax
  int v2; // edi
  int v3; // ecx
  ObjectClass ***i; // edx

  result = (MEMORY[0xA83CDB] >> g_BitMask_Red << g_BitShift_Blue) /*0x63d16d*/
         | (word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
         | (byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
  if ( this ) /*0x63d171*/
  {
    if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63d1c0*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_70[80] + 16); /*0x63d1c2*/
      v3 = 0; /*0x63d1c5*/
      if ( v2 > 0 ) /*0x63d1c9*/
      {
        for ( i = *(ObjectClass ****)(*(_DWORD *)&stru_AC4B30.__pad_70[80] + 4); **i != this; ++i ) /*0x63d1cb*/
        {
          if ( ++v3 >= v2 ) /*0x63d1df*/
            return result; /*0x63d1df*/
        }
        if ( v3 != -1 ) /*0x63d1ec*/
          return (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d1ee*/
               | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
               | (LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red);
      }
    }
    else if ( this->isSelected ) /*0x63d1fc*/
    {
      return (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d206*/
           | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
           | (LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red);
    }
  }
  return result; /*0x63d1e1*/
}



// ==== 0x0063D210  ActionScenarioClassCoordToScreen  this=-  sig=csp ====
int *__fastcall sub_63D210(int *a1, const void *a2, int a3)
{
  int v3; // eax
  int v5; // ecx
  int *ActionCoords; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int *v10; // ecx
  _DWORD v12[3]; // [esp+4h] [ebp-94h] BYREF
  int v13[3]; // [esp+10h] [ebp-88h] BYREF
  _BYTE v14[12]; // [esp+1Ch] [ebp-7Ch] BYREF
  _BYTE v15[112]; // [esp+28h] [ebp-70h] BYREF

  v3 = -1; /*0x63d216*/
  v5 = -1; /*0x63d21c*/
  if ( a2 ) /*0x63d221*/
  {
    qmemcpy(v15, a2, 0x6Fu); /*0x63d238*/
    ActionCoords = GetScenarioClassActionCoords(v13, v15); /*0x63d246*/
    v7 = *ActionCoords; /*0x63d248*/
    v8 = ActionCoords[1]; /*0x63d24d*/
    v9 = ActionCoords[2]; /*0x63d250*/
    if ( *ActionCoords == -1 && v8 == -1 && v9 == -1 && a3 ) /*0x63d266*/
    {
      v10 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 88))(a3, v14); /*0x63d272*/
      v7 = *v10; /*0x63d274*/
      v8 = v10[1]; /*0x63d276*/
      v9 = v10[2]; /*0x63d279*/
    }
    v12[1] = v8; /*0x63d282*/
    v12[0] = v7; /*0x63d286*/
    v12[2] = v9; /*0x63d294*/
    Coord::To_Screen(g_TacticalClass_Instance, v12, v13); /*0x63d298*/
    v3 = DSurface_ViewBounds + v13[0]; /*0x63d2b1*/
    v5 = dword_886FA4 + v13[1]; /*0x63d2b4*/
  }
  *a1 = v3; /*0x63d2b7*/
  a1[1] = v5; /*0x63d2b9*/
  return a1; /*0x63d2be*/
}



// ==== 0x0063D2D0  ObjectClass::method_63D2D0  this=ObjectClass  sig=csp ====
int __thiscall sub_63D2D0(ObjectClass *this)
{
  int result; // eax
  int v2; // edi
  int v3; // ecx
  _DWORD **i; // edx
  int v5; // [esp+10h] [ebp-Ch]

  v5 = **(_DWORD **)this->?; /*0x63d31a*/
  result = (MEMORY[0xA83CDB] >> g_BitMask_Red << g_BitShift_Blue) /*0x63d354*/
         | (word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
         | (byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
  if ( v5 ) /*0x63d358*/
  {
    if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63d3a7*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_70[80] + 16); /*0x63d3a9*/
      v3 = 0; /*0x63d3ac*/
      if ( v2 > 0 ) /*0x63d3b0*/
      {
        for ( i = *(_DWORD ***)(*(_DWORD *)&stru_AC4B30.__pad_70[80] + 4); **i != v5; ++i ) /*0x63d3b2*/
        {
          if ( ++v3 >= v2 ) /*0x63d3c6*/
            return result; /*0x63d3c6*/
        }
        if ( v3 != -1 ) /*0x63d3d3*/
          return (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d3d5*/
               | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
               | (LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red);
      }
    }
    else if ( *(_BYTE *)(v5 + 131) ) /*0x63d3e3*/
    {
      return (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d3ed*/
           | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
           | (LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red);
    }
  }
  return result; /*0x63d3c8*/
}



// ==== 0x0063D400  DSurface::DrawMarker  this=DSurface  sig=csp ====
int __thiscall DSurface::DrawMarker(DSurface *this, int a2, int a3)
{
  int *Viewport; // eax
  int v6[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v7[4]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v8[4]; // [esp+28h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v6); /*0x63d40b*/
  v8[0] = *Viewport; /*0x63d412*/
  v8[1] = Viewport[1]; /*0x63d41a*/
  v8[2] = Viewport[2]; /*0x63d421*/
  v8[3] = Viewport[3]; /*0x63d430*/
  v6[0] = a2; /*0x63d434*/
  v7[2] = 6; /*0x63d442*/
  v7[0] = a2 - 3; /*0x63d446*/
  v7[1] = a3 - 3; /*0x63d458*/
  v7[3] = 6; /*0x63d45c*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, DSurface *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63d46a*/
                                                                              + 84))(
           DSurface_Composite,
           v8,
           v7,
           this);
}



// ==== 0x0063D480  ObjectClass::DrawActionLineSegment  this=ObjectClass  sig=csp ====
int __thiscall DrawActionLineSegment(ObjectClass *this, int a2, int a3)
{
  int *Viewport; // eax
  int v6[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v7[4]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v8[4]; // [esp+28h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v6); /*0x63d48b*/
  v8[0] = *Viewport; /*0x63d492*/
  v8[1] = Viewport[1]; /*0x63d49a*/
  v8[2] = Viewport[2]; /*0x63d4a1*/
  v8[3] = Viewport[3]; /*0x63d4b0*/
  v6[0] = a2; /*0x63d4b4*/
  v7[2] = 4; /*0x63d4cd*/
  v7[0] = a2 - 3 + 1; /*0x63d4d1*/
  v7[1] = a3 - 3 + 1; /*0x63d4e4*/
  v7[3] = 4; /*0x63d4e8*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63d4f6*/
                                                                                 + 16))(
           DSurface_Composite,
           v8,
           v7,
           this);
}



// ==== 0x0063D540  BuildingClass::updateAnimationState  this=BuildingClass  sig=csp ====
int __thiscall sub_63D540(char *this)
{
  int v1; // eax

  v1 = this->vtable4; /*0x63d540*/
  if ( v1 == 11 ) /*0x63d547*/
    return Memory::Alloc76(); /*0x63d549*/
  if ( v1 == 29 ) /*0x63d551*/
    return Factory::IdleHandler(); /*0x63d553*/
  return -1; /*0x63d55b*/
}



// ==== 0x0063D560  BuildingClass::DrawSelectionBlip  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DrawSelectionBlip(BuildingClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st7
  int result; // eax
  int *Viewport; // eax
  double v9; // [esp+0h] [ebp-48h]
  int v10; // [esp+18h] [ebp-30h] BYREF
  int v11; // [esp+1Ch] [ebp-2Ch]
  int v12; // [esp+20h] [ebp-28h]
  int v13; // [esp+24h] [ebp-24h]
  _DWORD v14[4]; // [esp+28h] [ebp-20h] BYREF
  int v15[4]; // [esp+38h] [ebp-10h] BYREF

  v10 = a2 - a4; /*0x63d57f*/
  __asm { fild [esp+40h+var_30] } /*0x63d585*/
  v11 = a3 - a5; /*0x63d589*/
  __asm /*0x63d590*/
  {
    fild [esp+48h+var_2C]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+48h+var_48]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v9); /*0x63d5a5*/
  LOWORD(result) = Math::RoundToInt(v5); /*0x63d5ad*/
  if ( result >= 37 ) /*0x63d5b5*/
  {
    Viewport = Display::GetViewport(v15); /*0x63d5bb*/
    v14[0] = *Viewport; /*0x63d5c2*/
    v14[1] = Viewport[1]; /*0x63d5ca*/
    v14[2] = Viewport[2]; /*0x63d5d5*/
    v14[3] = Viewport[3]; /*0x63d5dc*/
    v10 = (a4 + a2) / 2 - 10; /*0x63d5eb*/
    v11 = (a5 + a3) / 2 - 10; /*0x63d600*/
    v12 = 21; /*0x63d609*/
    v13 = 21; /*0x63d60d*/
    return (*(int (__thiscall **)(AudioStream *, _DWORD *, int *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63d61d*/
                                                                                  + 84))(
             DSurface_Composite,
             v14,
             &v10,
             this);
  }
  return result; /*0x63d620*/
}



// ==== 0x0063D630  DrawTacticalWaypoint  this=ObjectClass  sig=csp ====
void __fastcall Tactical_DrawWaypoint(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // edi
  double v11; // st7
  int v12; // esi
  int v13; // edi
  int *Viewport; // eax
  int v15; // eax
  int v16; // edi
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23; // [esp+30h] [ebp-30h] BYREF
  int v24; // [esp+34h] [ebp-2Ch]
  int v25; // [esp+38h] [ebp-28h]
  int v26; // [esp+3Ch] [ebp-24h]
  int v27[4]; // [esp+40h] [ebp-20h] BYREF
  int v28[4]; // [esp+50h] [ebp-10h] BYREF

  v7 = a4; /*0x63d634*/
  v8 = a6; /*0x63d639*/
  v9 = a3; /*0x63d63e*/
  v10 = a5; /*0x63d643*/
  v19 = a3 - a5; /*0x63d651*/
  v20 = a4 - a6; /*0x63d65b*/
  v11 = Math::Sqrt((double)(a4 - a6) * (double)(a4 - a6) + (double)(a3 - a5) * (double)(a3 - a5)); /*0x63d67b*/
  if ( (int)Math::RoundToInt(v11) >= 37 ) /*0x63d68b*/
  {
    v12 = (v10 + v9) / 2; /*0x63d6a5*/
    v13 = (v7 + v8) / 2; /*0x63d6a7*/
    Viewport = Display::GetViewport(v28); /*0x63d6af*/
    v23 = *Viewport; /*0x63d6b6*/
    v24 = Viewport[1]; /*0x63d6bd*/
    v25 = Viewport[2]; /*0x63d6c7*/
    v15 = Viewport[3]; /*0x63d6ce*/
    v20 = v13 - 10 + 1; /*0x63d6d1*/
    v26 = v15; /*0x63d6d9*/
    v19 = v12 - 10 + 1; /*0x63d6de*/
    v21 = 19; /*0x63d6f2*/
    v22 = 19; /*0x63d6f6*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 84))( /*0x63d701*/
      DSurface_Composite,
      &v23,
      &v19,
      a1);
    if ( v21 > -2 && v22 > -2 ) /*0x63d713*/
    {
      ++v19; /*0x63d737*/
      ++v20; /*0x63d73f*/
      v21 -= 2; /*0x63d74c*/
      v22 -= 2; /*0x63d750*/
    }
    else
    {
      v19 = 0; /*0x63d717*/
      v20 = 0; /*0x63d71b*/
      v21 = 0; /*0x63d71f*/
      v22 = 0; /*0x63d723*/
    }
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 16))( /*0x63d76b*/
      DSurface_Composite,
      &v23,
      &v19,
      a2);
    a3 = v12 - 10; /*0x63d76e*/
    a4 = v13 - 10; /*0x63d772*/
    v27[0] = v23; /*0x63d782*/
    v27[1] = v24; /*0x63d78a*/
    v27[2] = v25; /*0x63d794*/
    v27[3] = v26; /*0x63d798*/
    v16 = v13 - *((__int16 *)dword_ABF294 + 2) / 2; /*0x63d7b4*/
    a3 = v12 - *((__int16 *)dword_ABF294 + 1) / 2 - 1; /*0x63d7ed*/
    a4 = v16; /*0x63d7f4*/
    DrawToSurfaceSHP( /*0x63d7fb*/
      DSurface_Composite,
      dword_87F6C8,
      (int)dword_ABF294,
      a7,
      &a3,
      v27,
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



// ==== 0x0063D810  DrawTacticalLine2D  this=-  sig=csp ====
char __fastcall Tactical_DrawLine2D(int a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  signed int v7; // ebx
  signed int v8; // eax
  int v9; // edx
  int v10; // eax
  char result; // al
  DWORD Time; // eax
  int v14[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = abs32(a6 - a4); /*0x63d832*/
  v8 = abs32(a5 - a3); /*0x63d83d*/
  v9 = v8 <= v7 ? a1 : 0;
  v10 = v8 > v7 ? a1 : 0;
  v14[1] = dword_886FA4; /*0x63d871*/
  v14[0] = DSurface_ViewBounds; /*0x63d879*/
  v14[2] = dword_886FA8; /*0x63d882*/
  a3 += v9; /*0x63d88f*/
  a4 += v10; /*0x63d893*/
  a5 += v9; /*0x63d897*/
  a6 += v10; /*0x63d89b*/
  v14[3] = dword_886FAC; /*0x63d89f*/
  result = ClipLine(&a3, &a5, v14); /*0x63d8a3*/
  if ( result ) /*0x63d8ae*/
  {
    if ( a7 ) /*0x63d8b6*/
    {
      Time = timeGetTime(); /*0x63d8b8*/
      return (*(int (__thiscall **)(int, int *, int *, int, void *, int))(*(_DWORD *)DSurface_Composite + 72))( /*0x63d8e3*/
               DSurface_Composite,
               &a3,
               &a5,
               a2,
               &unk_836880,
               ((signed int)-Time >> 5) & 0xF);
    }
    else
    {
      return (*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x63d903*/
               DSurface_Composite,
               &a3,
               &a5,
               a2);
    }
  }
  return result; /*0x63d8aa*/
}



// ==== 0x0063D910  DrawTacticalFillScanline  this=Rect  sig=csp ====
char __fastcall DrawTacticalFillScanline(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // edi
  int v9; // esi

  v7 = a1 - (a1 >> 31); /*0x63d917*/
  v8 = a1 / 2; /*0x63d91c*/
  v9 = a1 / 2 - a1 + 1; /*0x63d922*/
  if ( v9 <= a1 / 2 ) /*0x63d925*/
  {
    do /*0x63d94a*/
      LOBYTE(v7) = DrawTacticalLine2D(v9++, a2, a3, a4, a5, a6, 0); /*0x63d942*/
    while ( v9 <= v8 ); /*0x63d94a*/
  }
  return v7; /*0x63d94d*/
}



// ==== 0x0063D960  globalHelper_03D960  this=-  sig=csp ====
char __fastcall sub_63D960(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // eax

  v6 = a1 - 2; /*0x63d961*/
  if ( v6 > 0 ) /*0x63d96c*/
  {
    v9 = v6 - (v6 >> 31); /*0x63d977*/
    v8 = v6 / 2; /*0x63d97b*/
    v7 = v6 / 2 - v6 + 1; /*0x63d981*/
  }
  else
  {
    v7 = 0; /*0x63d96e*/
    v8 = 0; /*0x63d970*/
  }
  for ( ; v7 <= v8; ++v7 ) /*0x63d984*/
    LOBYTE(v9) = DrawTacticalLine2D(v7, a2, a3, a4, a5, a6, 1); /*0x63d9a4*/
  return v9; /*0x63d9b3*/
}



// ==== 0x0063D9C0  FactoryClass::RemoveFromArrays  this=VectorClass  sig=csp ====
int *__thiscall FactoryClass::RemoveFromArrays(FactoryClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  void *v6; // eax
  void *vtable1; // eax
  FactoryClass *v9; // [esp+Ch] [ebp-4h] BYREF

  FactoryClass::ClearObjects(this); /*0x63d9c4*/
  v9 = this; /*0x63d9d9*/
  v3 = (*(int (__thiscall **)(char *, FactoryClass **))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x63d9dd*/
         &stru_AC4B30.__pad_EC[124],
         &v9);
  if ( v3 != -1 ) /*0x63d9e3*/
    Array::RemoveAt((Array *)&stru_AC4B30.__pad_EC[124], v3); /*0x63d9eb*/
  v4 = (*(int (__thiscall **)(Array *, FactoryClass **))(*(_DWORD *)stru_AC4B30.__pad_0 + 16))(&stru_AC4B30, &v9); /*0x63da00*/
  if ( v4 != -1 ) /*0x63da06*/
    Array::RemoveAt(&stru_AC4B30, v4); /*0x63da0e*/
  v5 = (*((int (__thiscall **)(void **, FactoryClass **))stru_AC4B30.Array_field_0xE8 + 4))( /*0x63da23*/
         &stru_AC4B30.Array_field_0xE8,
         &v9);
  if ( v5 != -1 ) /*0x63da29*/
    Array::RemoveAt((Array *)&stru_AC4B30.Array_field_0xE8, v5); /*0x63da31*/
  if ( *(FactoryClass **)&stru_AC4B30.__pad_EC[176] == v9 ) /*0x63da45*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[176] = 0; /*0x63da47*/
  if ( *(FactoryClass **)&stru_AC4B30.__pad_EC[28] == v9 ) /*0x63da53*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x63da55*/
  if ( *(FactoryClass **)&stru_AC4B30.__pad_70[80] == v9 ) /*0x63da61*/
    *(_DWORD *)&stru_AC4B30.__pad_70[80] = 0; /*0x63da63*/
  v6 = (void *)this->production[0]; /*0x63da69*/
  this->? = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63da6c*/
  if ( v6 && BYTE1(this->production[2]) ) /*0x63da77*/
  {
    __3_YAXPAX_Z(v6); /*0x63da7d*/
    this->production[0] = 0; /*0x63da85*/
  }
  BYTE1(this->production[2]) = 0; /*0x63da88*/
  this->production[1] = 0; /*0x63da8b*/
  vtable1 = this->?; /*0x63da8e*/
  this->AbstractClass = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x63da91*/
  if ( vtable1 && BYTE1(this->?) ) /*0x63da9b*/
  {
    __3_YAXPAX_Z(vtable1); /*0x63daa1*/
    this->? = 0; /*0x63daa9*/
  }
  BYTE1(this->?) = 0; /*0x63dab0*/
  this->? = 0; /*0x63dab3*/
  if ( (a2 & 1) != 0 ) /*0x63dab9*/
    __3_YAXPAX_Z(this); /*0x63dabc*/
  return (int *)this; /*0x63dac6*/
}



// ==== 0x0063DAD0  ObjectClass::PackRGBFromBytes  this=ObjectClass  sig=csp ====
int __thiscall PackRGBFromBytes(ObjectClass *this)
{
  return (LOBYTE(this->AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x63db15*/
       | (BYTE1(this->AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(this->AbstractClass) >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x0063DB20  ObjectClass::HandlePlanningModeClick_Handle  this=ObjectClass  sig=csp ====
BOOL __thiscall HandlePlanningModeClick_Handle(ObjectClass *this, _DWORD *a2)
{
  int v2; // eax
  void *vtable1; // edx
  BOOL result; // eax

  result = 0; /*0x63db54*/
  if ( *a2 >= (int)this->AbstractClass && *a2 < (int)((int)this->AbstractClass + (unsigned int)this->?) ) /*0x63db36*/
  {
    v2 = a2[1]; /*0x63db38*/
    vtable1 = this->?; /*0x63db3b*/
    if ( v2 >= (int)vtable1 && v2 < (int)((int)vtable1 + (unsigned int)this->?) ) /*0x63db49*/
      return 1; /*0x63db2b*/
  }
  return result; /*0x63db50*/
}



// ==== 0x0063DB60  _DynamicVectorClass_PAVPlanningMemberClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_PlanningMemberClass::Destroy(_DynamicVectorClass_PAVPlanningMemberClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63db66*/
  this->m_10 = 0; /*0x63db69*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63db70*/
  {
    __3_YAXPAX_Z(v2); /*0x63db76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63db7e*/
  }
  BYTE1(this->m_C) = 0; /*0x63db81*/
  this->m_8 = 0; /*0x63db84*/
}



// ==== 0x0063DB90  _DynamicVectorClass_PAVPlanningMemberClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningMemberClass::GetItemIndex(
        _DynamicVectorClass_PAVPlanningMemberClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63db90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dba5*/
  else
    return 0; /*0x63db97*/
}



// ==== 0x0063DBB0  _VectorClass_PAVPlanningMemberClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningMemberClass::Get(_VectorClass_PAVPlanningMemberClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dbba*/
}



// ==== 0x0063DBC0  _DynamicVectorClass_PAVPlanningBranchClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_PlanningMemberClass::Destroy_0(_DynamicVectorClass_PAVPlanningBranchClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63dbc6*/
  this->m_10 = 0; /*0x63dbc9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63dbd0*/
  {
    __3_YAXPAX_Z(v2); /*0x63dbd6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63dbde*/
  }
  BYTE1(this->m_C) = 0; /*0x63dbe1*/
  this->m_8 = 0; /*0x63dbe4*/
}



// ==== 0x0063DBF0  _DynamicVectorClass_PAVPlanningBranchClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningMemberClass::GetItemIndex_0(
        _DynamicVectorClass_PAVPlanningBranchClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dbf0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dc05*/
  else
    return 0; /*0x63dbf7*/
}



// ==== 0x0063DC10  _VectorClass_PAVPlanningBranchClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningBranchClass::Clear(_VectorClass_PAVPlanningBranchClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dc1a*/
}



// ==== 0x0063DC20  _DynamicVectorClass_PAVPlanningNodeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall BlowPipe_31::ddtor(_DynamicVectorClass_PAVPlanningNodeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63dc26*/
  this->m_10 = 0; /*0x63dc29*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63dc30*/
  {
    __3_YAXPAX_Z(v2); /*0x63dc36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63dc3e*/
  }
  BYTE1(this->m_C) = 0; /*0x63dc41*/
  this->m_8 = 0; /*0x63dc44*/
}



// ==== 0x0063DC50  _DynamicVectorClass_PAVPlanningNodeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall BlowPipe_31::Write(_DynamicVectorClass_PAVPlanningNodeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dc50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dc65*/
  else
    return 0; /*0x63dc57*/
}



// ==== 0x0063DC70  _VectorClass_PAVPlanningNodeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall BlowPipe_31::Seek(_VectorClass_PAVPlanningNodeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dc7a*/
}



// ==== 0x0063DC80  _DynamicVectorClass_PAVEventClass::Clear  this=DynamicVector  sig=csp ====
void __thiscall BlowPipe_23::Clear(_DynamicVectorClass_PAVEventClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63dc86*/
  this->m_10 = 0; /*0x63dc89*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63dc90*/
  {
    __3_YAXPAX_Z(v2); /*0x63dc96*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63dc9e*/
  }
  BYTE1(this->m_C) = 0; /*0x63dca1*/
  this->m_8 = 0; /*0x63dca4*/
}



// ==== 0x0063DCB0  _DynamicVectorClass_PAVEventClass::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall BlowPipe_23::GetCount(_DynamicVectorClass_PAVEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dcb0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dcc5*/
  else
    return 0; /*0x63dcb7*/
}



// ==== 0x0063DCD0  _VectorClass_PAVEventClass::Seek  this=VectorClass  sig=csp ====
int __thiscall BlowPipe_23::Seek(_VectorClass_PAVEventClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dcda*/
}



// ==== 0x0063DCE0  _DynamicVectorClass_PAVPlanningTokenClass::Clear_0  this=DynamicVector  sig=csp ====
void __thiscall BlowPipe_23::Clear_0(_DynamicVectorClass_PAVPlanningTokenClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63dce6*/
  this->m_10 = 0; /*0x63dce9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63dcf0*/
  {
    __3_YAXPAX_Z(v2); /*0x63dcf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63dcfe*/
  }
  BYTE1(this->m_C) = 0; /*0x63dd01*/
  this->m_8 = 0; /*0x63dd04*/
}



// ==== 0x0063DD10  _DynamicVectorClass_PAVPlanningTokenClass::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall BlowPipe_23::GetCount_0(_DynamicVectorClass_PAVPlanningTokenClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dd10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dd25*/
  else
    return 0; /*0x63dd17*/
}



// ==== 0x0063DD30  _VectorClass_PAVPlanningTokenClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningTokenClass::Get(_VectorClass_PAVPlanningTokenClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dd3a*/
}



// ==== 0x0063DD40  _VectorClass_PAVPlanningMemberClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningMemberClass::Add(_VectorClass_PAVPlanningMemberClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63dd42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63dd4d*/
  {
    v3 = 0; /*0x63dd4f*/
    if ( m_8 <= 0 ) /*0x63dd53*/
      return 1; /*0x63dd73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63dd55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63dd5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63dd64*/
    {
      ++v3; /*0x63dd66*/
      ++v4; /*0x63dd67*/
      if ( v3 >= m_8 ) /*0x63dd6c*/
        return 1; /*0x63dd6c*/
    }
  }
  return 0; /*0x63dd6e*/
}



// ==== 0x0063DD80  _VectorClass_PAVPlanningMemberClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningMemberClass::Release(
        _VectorClass_PAVPlanningMemberClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63dd8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63dd96*/
    if ( a3 ) /*0x63dd9c*/
      v4 = a3; /*0x63ddb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63ddae*/
    LOBYTE(this->m_C) = 1; /*0x63ddb6*/
    if ( v4 ) /*0x63ddba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63ddc5*/
      {
        m_8 = this->m_8; /*0x63ddcc*/
        if ( a2 < m_8 ) /*0x63ddd1*/
          m_8 = a2; /*0x63ddd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63ddd9*/
          ++i; /*0x63ddde*/
        if ( BYTE1(this->m_C) ) /*0x63ddeb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63ddf6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63ddfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63de07*/
      this->m_8 = a2; /*0x63de0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63de12*/
      return 1; /*0x63de18*/
    }
    else
    {
      return 0; /*0x63ddbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningMemberClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63de22*/
    return 1; /*0x63de28*/
  }
}



// ==== 0x0063DE30  _VectorClass_PAVPlanningMemberClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PlanningMemberClass::Remove(_VectorClass_PAVPlanningMemberClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x63de3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63de43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63de4b*/
  }
  BYTE1(this->m_C) = 0; /*0x63de4e*/
  this->m_8 = 0; /*0x63de51*/
}



// ==== 0x0063DE60  _VectorClass_PAVPlanningMemberClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningMemberClass::GetSize(_VectorClass_PAVPlanningMemberClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63de60*/
    return 0; /*0x63de68*/
  m_8 = this->m_8; /*0x63de6e*/
  result = 0; /*0x63de71*/
  if ( m_8 <= 0 ) /*0x63de75*/
    return -1; /*0x63de8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63de7b*/
  {
    if ( ++result >= m_8 ) /*0x63de8a*/
      return -1; /*0x63de8a*/
  }
  return result; /*0x63de6a*/
}



// ==== 0x0063DEA0  _VectorClass_PAVPlanningMemberClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningMemberClass::GetCapacity(
        _VectorClass_PAVPlanningMemberClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dea0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63deb5*/
  else
    return 0; /*0x63dea7*/
}



// ==== 0x0063DEC0  VectorClass::ExecuteActionPlanManager_Helper_63DEC0  this=VectorClass  sig=csp ====
_DWORD *__thiscall ExecuteActionPlanManager_Helper_63DEC0(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x63dec9*/
  this->Capacity = a2; /*0x63ded0*/
  this->IsInitialized = 1; /*0x63ded3*/
  this->IsAllocated = 0; /*0x63ded7*/
  this->vtable0 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x63dedb*/
  if ( a2 ) /*0x63dee1*/
  {
    if ( a3 ) /*0x63dee9*/
    {
      this->Items = (void *)a3; /*0x63deeb*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x63defc*/
      this->IsAllocated = 1; /*0x63deff*/
    }
  }
  this->vtable0 = &DynamicVectorClass<PlanningMemberClass *>::`vftable'; /*0x63df03*/
  *((_DWORD *)this + 5) = 10; /*0x63df09*/
  this->Items = 0; /*0x63df10*/
  return &this->vtable0; /*0x63df19*/
}



// ==== 0x0063DF20  _DynamicVectorClass_PAVPlanningMemberClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_PlanningMemberClass::SetCapacity(
        _DynamicVectorClass_PAVPlanningMemberClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63df2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63df32*/
    if ( a3 ) /*0x63df38*/
      v4 = a3; /*0x63df4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63df4a*/
    LOBYTE(this->m_C) = 1; /*0x63df52*/
    if ( !v4 ) /*0x63df56*/
      return 0; /*0x63dfca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63df58*/
    {
      m_8 = this->m_8; /*0x63df5f*/
      if ( a2 < m_8 ) /*0x63df64*/
        m_8 = a2; /*0x63df66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63df6c*/
        ++i; /*0x63df71*/
      if ( BYTE1(this->m_C) ) /*0x63df7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63df89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63df91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63df9a*/
    this->m_8 = a2; /*0x63dfa2*/
    BYTE1(this->m_C) = a3 == 0; /*0x63dfa5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPlanningMemberClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63dfae*/
  }
  v7 = this->m_8; /*0x63dfb1*/
  if ( v7 < this->m_10 ) /*0x63dfb9*/
    this->m_10 = v7; /*0x63dfbb*/
  return 1; /*0x63dfbe*/
}



// ==== 0x0063DFD0  FactoryClass::RemoveItemAt  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::RemoveItemAt(FactoryClass *this, int a2)
{
  int result; // eax
  int uniqueId; // ecx
  int v5; // ecx

  result = (*((int (__thiscall **)(FactoryClass *, int))this->AbstractClass + 4))(this, a2); /*0x63dfdc*/
  if ( result == -1 || (uniqueId = this->?, result >= uniqueId) ) /*0x63dfe9*/
  {
    LOBYTE(result) = 0; /*0x63e00b*/
  }
  else
  {
    v5 = uniqueId - 1; /*0x63dfeb*/
    for ( this->? = v5; result < this->?; *((_DWORD *)this->? + result - 1) = *((_DWORD *)this->? + result) ) /*0x63dff1*/
      ++result; /*0x63dff6*/
    LOBYTE(result) = 1; /*0x63e005*/
  }
  return result; /*0x63e007*/
}



// ==== 0x0063E020  _DynamicVectorClass_PAVPlanningMemberClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_PlanningMemberClass::FindItemIndex(
        _DynamicVectorClass_PAVPlanningMemberClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63e020*/
  result = 0; /*0x63e023*/
  if ( m_10 <= 0 ) /*0x63e028*/
    return -1; /*0x63e03f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e02e*/
  {
    if ( ++result >= m_10 ) /*0x63e03d*/
      return -1; /*0x63e03d*/
  }
  return result; /*0x63e042*/
}



// ==== 0x0063E050  _VectorClass_PAVPlanningBranchClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningBranchClass::Add(_VectorClass_PAVPlanningBranchClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63e052*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e05d*/
  {
    v3 = 0; /*0x63e05f*/
    if ( m_8 <= 0 ) /*0x63e063*/
      return 1; /*0x63e083*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63e065*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e06b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e074*/
    {
      ++v3; /*0x63e076*/
      ++v4; /*0x63e077*/
      if ( v3 >= m_8 ) /*0x63e07c*/
        return 1; /*0x63e07c*/
    }
  }
  return 0; /*0x63e07e*/
}



// ==== 0x0063E090  _VectorClass_PAVPlanningBranchClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningBranchClass::Release(
        _VectorClass_PAVPlanningBranchClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e09c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e0a6*/
    if ( a3 ) /*0x63e0ac*/
      v4 = a3; /*0x63e0c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e0be*/
    LOBYTE(this->m_C) = 1; /*0x63e0c6*/
    if ( v4 ) /*0x63e0ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e0d5*/
      {
        m_8 = this->m_8; /*0x63e0dc*/
        if ( a2 < m_8 ) /*0x63e0e1*/
          m_8 = a2; /*0x63e0e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e0e9*/
          ++i; /*0x63e0ee*/
        if ( BYTE1(this->m_C) ) /*0x63e0fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e106*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63e10e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63e117*/
      this->m_8 = a2; /*0x63e11f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63e122*/
      return 1; /*0x63e128*/
    }
    else
    {
      return 0; /*0x63e0cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningBranchClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e132*/
    return 1; /*0x63e138*/
  }
}



// ==== 0x0063E140  ?$VectorClass@PAVPlanningBranchClass@@::Cleanup2  this=VectorClass  sig=csp ====
int __thiscall VectorClass::Cleanup2(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 4); /*0x63e146*/
  if ( result && *(_BYTE *)(this + 13) ) /*0x63e14d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x63e153*/
    *(_DWORD *)(this + 4) = 0; /*0x63e15b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x63e15e*/
  *(_DWORD *)(this + 8) = 0; /*0x63e161*/
  return result; /*0x63e164*/
}



// ==== 0x0063E170  _VectorClass_PAVPlanningBranchClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningBranchClass::GetSize(_VectorClass_PAVPlanningBranchClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63e170*/
    return 0; /*0x63e178*/
  m_8 = this->m_8; /*0x63e17e*/
  result = 0; /*0x63e181*/
  if ( m_8 <= 0 ) /*0x63e185*/
    return -1; /*0x63e19c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e18b*/
  {
    if ( ++result >= m_8 ) /*0x63e19a*/
      return -1; /*0x63e19a*/
  }
  return result; /*0x63e17a*/
}



// ==== 0x0063E1B0  _VectorClass_PAVPlanningBranchClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningBranchClass::Remove(_VectorClass_PAVPlanningBranchClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63e1b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63e1c5*/
  else
    return 0; /*0x63e1b7*/
}



// ==== 0x0063E1D0  VectorClass::ExecuteActionPlanManager_Helper_63E1D0  this=VectorClass  sig=csp ====
_DWORD *__thiscall ExecuteActionPlanManager_Helper_63E1D0(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x63e1d9*/
  this->Capacity = a2; /*0x63e1e0*/
  this->IsInitialized = 1; /*0x63e1e3*/
  this->IsAllocated = 0; /*0x63e1e7*/
  this->vtable0 = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63e1eb*/
  if ( a2 ) /*0x63e1f1*/
  {
    if ( a3 ) /*0x63e1f9*/
    {
      this->Items = (void *)a3; /*0x63e1fb*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x63e20c*/
      this->IsAllocated = 1; /*0x63e20f*/
    }
  }
  this->vtable0 = &DynamicVectorClass<PlanningBranchClass *>::`vftable'; /*0x63e213*/
  *((_DWORD *)this + 5) = 10; /*0x63e219*/
  this->Items = 0; /*0x63e220*/
  return &this->vtable0; /*0x63e229*/
}



// ==== 0x0063E230  _DynamicVectorClass_PAVPlanningBranchClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_PlanningMemberClass::SetCapacity_0(
        _DynamicVectorClass_PAVPlanningBranchClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e23c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e242*/
    if ( a3 ) /*0x63e248*/
      v4 = a3; /*0x63e25e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e25a*/
    LOBYTE(this->m_C) = 1; /*0x63e262*/
    if ( !v4 ) /*0x63e266*/
      return 0; /*0x63e2da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63e268*/
    {
      m_8 = this->m_8; /*0x63e26f*/
      if ( a2 < m_8 ) /*0x63e274*/
        m_8 = a2; /*0x63e276*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e27c*/
        ++i; /*0x63e281*/
      if ( BYTE1(this->m_C) ) /*0x63e28e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e299*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63e2a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63e2aa*/
    this->m_8 = a2; /*0x63e2b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x63e2b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPlanningBranchClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e2be*/
  }
  v7 = this->m_8; /*0x63e2c1*/
  if ( v7 < this->m_10 ) /*0x63e2c9*/
    this->m_10 = v7; /*0x63e2cb*/
  return 1; /*0x63e2ce*/
}



// ==== 0x0063E2E0  _DynamicVectorClass_PAVPlanningBranchClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_PlanningMemberClass::FindItemIndex_0(
        _DynamicVectorClass_PAVPlanningBranchClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63e2e0*/
  result = 0; /*0x63e2e3*/
  if ( m_10 <= 0 ) /*0x63e2e8*/
    return -1; /*0x63e2ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e2ee*/
  {
    if ( ++result >= m_10 ) /*0x63e2fd*/
      return -1; /*0x63e2fd*/
  }
  return result; /*0x63e302*/
}



// ==== 0x0063E310  _VectorClass_PAVPlanningNodeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall BlowPipe_31::AddRef(_VectorClass_PAVPlanningNodeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63e312*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e31d*/
  {
    v3 = 0; /*0x63e31f*/
    if ( m_8 <= 0 ) /*0x63e323*/
      return 1; /*0x63e343*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63e325*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e32b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e334*/
    {
      ++v3; /*0x63e336*/
      ++v4; /*0x63e337*/
      if ( v3 >= m_8 ) /*0x63e33c*/
        return 1; /*0x63e33c*/
    }
  }
  return 0; /*0x63e33e*/
}



// ==== 0x0063E350  _VectorClass_PAVPlanningNodeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall BlowPipe_23::SetCapacity(_VectorClass_PAVPlanningNodeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e35c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e366*/
    if ( a3 ) /*0x63e36c*/
      v4 = a3; /*0x63e382*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e37e*/
    LOBYTE(this->m_C) = 1; /*0x63e386*/
    if ( v4 ) /*0x63e38a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e395*/
      {
        m_8 = this->m_8; /*0x63e39c*/
        if ( a2 < m_8 ) /*0x63e3a1*/
          m_8 = a2; /*0x63e3a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e3a9*/
          ++i; /*0x63e3ae*/
        if ( BYTE1(this->m_C) ) /*0x63e3bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e3c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63e3ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63e3d7*/
      this->m_8 = a2; /*0x63e3df*/
      BYTE1(this->m_C) = a3 == 0; /*0x63e3e2*/
      return 1; /*0x63e3e8*/
    }
    else
    {
      return 0; /*0x63e38f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningNodeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e3f2*/
    return 1; /*0x63e3f8*/
  }
}



// ==== 0x0063E400  _VectorClass_PAVPlanningNodeClass::Clear_1  this=VectorClass  sig=csp ====
void __thiscall BlowPipe_23::Clear_1(_VectorClass_PAVPlanningNodeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x63e40d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e413*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63e41b*/
  }
  BYTE1(this->m_C) = 0; /*0x63e41e*/
  this->m_8 = 0; /*0x63e421*/
}



// ==== 0x0063E430  _VectorClass_PAVPlanningNodeClass::FindItemIndex  this=VectorClass  sig=csp ====
int __thiscall BlowPipe_23::FindItemIndex(_VectorClass_PAVPlanningNodeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63e430*/
    return 0; /*0x63e438*/
  m_8 = this->m_8; /*0x63e43e*/
  result = 0; /*0x63e441*/
  if ( m_8 <= 0 ) /*0x63e445*/
    return -1; /*0x63e45c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e44b*/
  {
    if ( ++result >= m_8 ) /*0x63e45a*/
      return -1; /*0x63e45a*/
  }
  return result; /*0x63e43a*/
}



// ==== 0x0063E470  _VectorClass_PAVPlanningNodeClass::GetCount_1  this=VectorClass  sig=csp ====
unsigned int __thiscall BlowPipe_23::GetCount_1(_VectorClass_PAVPlanningNodeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63e470*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63e485*/
  else
    return 0; /*0x63e477*/
}



// ==== 0x0063E490  _DynamicVectorClass_PAVPlanningNodeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall BlowPipe_31::Release(_DynamicVectorClass_PAVPlanningNodeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e49c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e4a2*/
    if ( a3 ) /*0x63e4a8*/
      v4 = a3; /*0x63e4be*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e4ba*/
    LOBYTE(this->m_C) = 1; /*0x63e4c2*/
    if ( !v4 ) /*0x63e4c6*/
      return 0; /*0x63e53a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63e4c8*/
    {
      m_8 = this->m_8; /*0x63e4cf*/
      if ( a2 < m_8 ) /*0x63e4d4*/
        m_8 = a2; /*0x63e4d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e4dc*/
        ++i; /*0x63e4e1*/
      if ( BYTE1(this->m_C) ) /*0x63e4ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e4f9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63e501*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63e50a*/
    this->m_8 = a2; /*0x63e512*/
    BYTE1(this->m_C) = a3 == 0; /*0x63e515*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPlanningNodeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e51e*/
  }
  v7 = this->m_8; /*0x63e521*/
  if ( v7 < this->m_10 ) /*0x63e529*/
    this->m_10 = v7; /*0x63e52b*/
  return 1; /*0x63e52e*/
}



// ==== 0x0063E540  VectorClass::Append  this=VectorClass  sig=csp ====
int __thiscall VectorClass::Append(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x63e543*/
  result = this->Count; /*0x63e546*/
  if ( result < Capacity /*0x63e56d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vtable0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (_BYTE)result) )
  {
    result = this->Count; /*0x63e575*/
    Items = this->Items; /*0x63e578*/
    this->Count = result + 1; /*0x63e57e*/
    *(_DWORD *)(Items + 4 * result) = *a2; /*0x63e588*/
    LOBYTE(result) = 1; /*0x63e58b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x63e56f*/
  }
  return result; /*0x63e571*/
}



// ==== 0x0063E590  Array::RemoveAt  this=Array  sig=csp ====
int __thiscall Array::RemoveAt(Array *this, int a2)
{
  char *Array_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  Array_field_0x10 = (char *)this->Array_field_0x10; /*0x63e590*/
  result = a2; /*0x63e593*/
  if ( a2 >= (int)Array_field_0x10 ) /*0x63e599*/
  {
    LOBYTE(result) = 0; /*0x63e5bc*/
  }
  else
  {
    v4 = Array_field_0x10 - 1; /*0x63e59b*/
    this->Array_field_0x10 = v4; /*0x63e59e*/
    if ( a2 < (int)v4 ) /*0x63e5a1*/
    {
      do /*0x63e5b4*/
      {
        ++result; /*0x63e5a7*/
        *((_DWORD *)this->Array_field_0x4 + result - 1) = *((_DWORD *)this->Array_field_0x4 + result); /*0x63e5ab*/
      }
      while ( result < (int)this->Array_field_0x10 ); /*0x63e5b4*/
    }
    LOBYTE(result) = 1; /*0x63e5b7*/
  }
  return result; /*0x63e5b9*/
}



// ==== 0x0063E5D0  ObjectClass::Team_Destroy  this=ObjectClass  sig=csp ====
char __thiscall Team_Destroy(ObjectClass *this, int a2)
{
  int v3; // eax
  int uniqueId; // ecx
  int v5; // ecx

  v3 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 4))(this, a2); /*0x63e5dc*/
  if ( v3 == -1 ) /*0x63e5e2*/
    return 0; /*0x63e5e2*/
  uniqueId = this->?; /*0x63e5e4*/
  if ( v3 >= uniqueId ) /*0x63e5e9*/
    return 0; /*0x63e60b*/
  v5 = uniqueId - 1; /*0x63e5eb*/
  for ( this->? = v5; v3 < this->?; *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3) ) /*0x63e5f1*/
    ++v3; /*0x63e5f6*/
  return 1; /*0x63e607*/
}



// ==== 0x0063E620  _DynamicVectorClass_PAVPlanningNodeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall BlowPipe_31::Read(_DynamicVectorClass_PAVPlanningNodeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63e620*/
  result = 0; /*0x63e623*/
  if ( m_10 <= 0 ) /*0x63e628*/
    return -1; /*0x63e63f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e62e*/
  {
    if ( ++result >= m_10 ) /*0x63e63d*/
      return -1; /*0x63e63d*/
  }
  return result; /*0x63e642*/
}



// ==== 0x0063E650  _VectorClass_PAVEventClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall BlowPipe_23::AddRef(_VectorClass_PAVEventClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63e652*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e65d*/
  {
    v3 = 0; /*0x63e65f*/
    if ( m_8 <= 0 ) /*0x63e663*/
      return 1; /*0x63e683*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63e665*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e66b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e674*/
    {
      ++v3; /*0x63e676*/
      ++v4; /*0x63e677*/
      if ( v3 >= m_8 ) /*0x63e67c*/
        return 1; /*0x63e67c*/
    }
  }
  return 0; /*0x63e67e*/
}



// ==== 0x0063E690  _VectorClass_PAVEventClass::Release  this=VectorClass  sig=csp ====
char __thiscall BlowPipe_23::Release(_VectorClass_PAVEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e69c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e6a6*/
    if ( a3 ) /*0x63e6ac*/
      v4 = a3; /*0x63e6c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e6be*/
    LOBYTE(this->m_C) = 1; /*0x63e6c6*/
    if ( v4 ) /*0x63e6ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e6d5*/
      {
        m_8 = this->m_8; /*0x63e6dc*/
        if ( a2 < m_8 ) /*0x63e6e1*/
          m_8 = a2; /*0x63e6e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e6e9*/
          ++i; /*0x63e6ee*/
        if ( BYTE1(this->m_C) ) /*0x63e6fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e706*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63e70e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63e717*/
      this->m_8 = a2; /*0x63e71f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63e722*/
      return 1; /*0x63e728*/
    }
    else
    {
      return 0; /*0x63e6cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e732*/
    return 1; /*0x63e738*/
  }
}



// ==== 0x0063E740  _VectorClass_PAVEventClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall BlowPipe_23::ddtor(_VectorClass_PAVEventClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x63e74d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e753*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63e75b*/
  }
  BYTE1(this->m_C) = 0; /*0x63e75e*/
  this->m_8 = 0; /*0x63e761*/
}



// ==== 0x0063E770  _VectorClass_PAVEventClass::Read  this=VectorClass  sig=csp ====
int __thiscall BlowPipe_23::Read(_VectorClass_PAVEventClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63e770*/
    return 0; /*0x63e778*/
  m_8 = this->m_8; /*0x63e77e*/
  result = 0; /*0x63e781*/
  if ( m_8 <= 0 ) /*0x63e785*/
    return -1; /*0x63e79c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e78b*/
  {
    if ( ++result >= m_8 ) /*0x63e79a*/
      return -1; /*0x63e79a*/
  }
  return result; /*0x63e77a*/
}



// ==== 0x0063E7B0  _VectorClass_PAVEventClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall BlowPipe_23::Write(_VectorClass_PAVEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63e7b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63e7c5*/
  else
    return 0; /*0x63e7b7*/
}



// ==== 0x0063E7D0  _DynamicVectorClass_PAVEventClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall BlowPipe_23::SetCapacity_0(_DynamicVectorClass_PAVEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e7dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e7e2*/
    if ( a3 ) /*0x63e7e8*/
      v4 = a3; /*0x63e7fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e7fa*/
    LOBYTE(this->m_C) = 1; /*0x63e802*/
    if ( !v4 ) /*0x63e806*/
      return 0; /*0x63e87a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63e808*/
    {
      m_8 = this->m_8; /*0x63e80f*/
      if ( a2 < m_8 ) /*0x63e814*/
        m_8 = a2; /*0x63e816*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e81c*/
        ++i; /*0x63e821*/
      if ( BYTE1(this->m_C) ) /*0x63e82e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e839*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63e841*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63e84a*/
    this->m_8 = a2; /*0x63e852*/
    BYTE1(this->m_C) = a3 == 0; /*0x63e855*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e85e*/
  }
  v7 = this->m_8; /*0x63e861*/
  if ( v7 < this->m_10 ) /*0x63e869*/
    this->m_10 = v7; /*0x63e86b*/
  return 1; /*0x63e86e*/
}



// ==== 0x0063E880  SidebarClass::addToList  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::addToList(SidebarClass *this, _DWORD *a2)
{
  void *SidebarClass_field_0x8; // ecx
  void *SidebarClass_field_0x14; // eax
  int v6; // eax
  _DWORD *SidebarClass_field_0x4; // edx

  SidebarClass_field_0x8 = this->SidebarClass_field_0x8; /*0x63e883*/
  if ( *(_DWORD *)&this->__pad_C[4] >= (int)SidebarClass_field_0x8 ) /*0x63e88b*/
  {
    if ( !this->__pad_C[1] && SidebarClass_field_0x8 ) /*0x63e896*/
      return 0; /*0x63e896*/
    SidebarClass_field_0x14 = this->SidebarClass_field_0x14; /*0x63e898*/
    if ( (int)SidebarClass_field_0x14 <= 0 /*0x63e8a8*/
      || !(*((unsigned __int8 (__thiscall **)(SidebarClass *, int, _DWORD))this->SidebarClass_field_0x0 + 2))(
            this,
            (int)SidebarClass_field_0x14 + (_DWORD)SidebarClass_field_0x8,
            0) )
    {
      return 0; /*0x63e8af*/
    }
  }
  v6 = *(_DWORD *)&this->__pad_C[4]; /*0x63e8b5*/
  SidebarClass_field_0x4 = this->SidebarClass_field_0x4; /*0x63e8b8*/
  *(_DWORD *)&this->__pad_C[4] = v6 + 1; /*0x63e8be*/
  SidebarClass_field_0x4[v6] = *a2; /*0x63e8c8*/
  return 1; /*0x63e8b1*/
}



// ==== 0x0063E8D0  _DynamicVectorClass_PAVEventClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall BlowPipe_23::FindItemIndex_0(_DynamicVectorClass_PAVEventClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63e8d0*/
  result = 0; /*0x63e8d3*/
  if ( m_10 <= 0 ) /*0x63e8d8*/
    return -1; /*0x63e8ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e8de*/
  {
    if ( ++result >= m_10 ) /*0x63e8ed*/
      return -1; /*0x63e8ed*/
  }
  return result; /*0x63e8f2*/
}



// ==== 0x0063E900  VectorClass::EraseAt  this=VectorClass  sig=csp ====
int __thiscall VectorClass::EraseAt(DynamicVectorClass *this, int a2)
{
  int result; // eax
  int Count; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(DynamicVectorClass *, int))(this->vtable0 + 16))(this, a2); /*0x63e90c*/
  if ( result == -1 || (Count = this->Count, result >= Count) ) /*0x63e919*/
  {
    LOBYTE(result) = 0; /*0x63e93b*/
  }
  else
  {
    v5 = Count - 1; /*0x63e91b*/
    for ( this->Count = v5; /*0x63e921*/
          result < this->Count;
          *(_DWORD *)(this->Items + 4 * result - 4) = *(_DWORD *)(this->Items + 4 * result) )
    {
      ++result; /*0x63e926*/
    }
    LOBYTE(result) = 1; /*0x63e935*/
  }
  return result; /*0x63e937*/
}



// ==== 0x0063E950  _VectorClass_PAVPlanningTokenClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningTokenClass::Add(_VectorClass_PAVPlanningTokenClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63e952*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e95d*/
  {
    v3 = 0; /*0x63e95f*/
    if ( m_8 <= 0 ) /*0x63e963*/
      return 1; /*0x63e983*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63e965*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e96b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e974*/
    {
      ++v3; /*0x63e976*/
      ++v4; /*0x63e977*/
      if ( v3 >= m_8 ) /*0x63e97c*/
        return 1; /*0x63e97c*/
    }
  }
  return 0; /*0x63e97e*/
}



// ==== 0x0063E990  _VectorClass_PAVPlanningTokenClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningTokenClass::Release(
        _VectorClass_PAVPlanningTokenClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e99c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e9a6*/
    if ( a3 ) /*0x63e9ac*/
      v4 = a3; /*0x63e9c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e9be*/
    LOBYTE(this->m_C) = 1; /*0x63e9c6*/
    if ( v4 ) /*0x63e9ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e9d5*/
      {
        m_8 = this->m_8; /*0x63e9dc*/
        if ( a2 < m_8 ) /*0x63e9e1*/
          m_8 = a2; /*0x63e9e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e9e9*/
          ++i; /*0x63e9ee*/
        if ( BYTE1(this->m_C) ) /*0x63e9fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63ea06*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63ea0e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63ea17*/
      this->m_8 = a2; /*0x63ea1f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63ea22*/
      return 1; /*0x63ea28*/
    }
    else
    {
      return 0; /*0x63e9cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningTokenClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63ea32*/
    return 1; /*0x63ea38*/
  }
}



// ==== 0x0063EA40  _VectorClass_PAVPlanningTokenClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PlanningTokenClass::Remove(_VectorClass_PAVPlanningTokenClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x63ea4d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63ea53*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ea5b*/
  }
  BYTE1(this->m_C) = 0; /*0x63ea5e*/
  this->m_8 = 0; /*0x63ea61*/
}



// ==== 0x0063EA70  _VectorClass_PAVPlanningTokenClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningTokenClass::GetSize(_VectorClass_PAVPlanningTokenClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63ea70*/
    return 0; /*0x63ea78*/
  m_8 = this->m_8; /*0x63ea7e*/
  result = 0; /*0x63ea81*/
  if ( m_8 <= 0 ) /*0x63ea85*/
    return -1; /*0x63ea9c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63ea8b*/
  {
    if ( ++result >= m_8 ) /*0x63ea9a*/
      return -1; /*0x63ea9a*/
  }
  return result; /*0x63ea7a*/
}



// ==== 0x0063EAB0  _VectorClass_PAVPlanningTokenClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningTokenClass::GetCapacity(
        _VectorClass_PAVPlanningTokenClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63eab0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63eac5*/
  else
    return 0; /*0x63eab7*/
}



// ==== 0x0063EAD0  _DynamicVectorClass_PAVPlanningTokenClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall BlowPipe_23::SetCapacity_1(_DynamicVectorClass_PAVPlanningTokenClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63eadc*/
  {
    LOBYTE(this->m_C) = 0; /*0x63eae2*/
    if ( a3 ) /*0x63eae8*/
      v4 = a3; /*0x63eafe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63eafa*/
    LOBYTE(this->m_C) = 1; /*0x63eb02*/
    if ( !v4 ) /*0x63eb06*/
      return 0; /*0x63eb7a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63eb08*/
    {
      m_8 = this->m_8; /*0x63eb0f*/
      if ( a2 < m_8 ) /*0x63eb14*/
        m_8 = a2; /*0x63eb16*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63eb1c*/
        ++i; /*0x63eb21*/
      if ( BYTE1(this->m_C) ) /*0x63eb2e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63eb39*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63eb41*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63eb4a*/
    this->m_8 = a2; /*0x63eb52*/
    BYTE1(this->m_C) = a3 == 0; /*0x63eb55*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPlanningTokenClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63eb5e*/
  }
  v7 = this->m_8; /*0x63eb61*/
  if ( v7 < this->m_10 ) /*0x63eb69*/
    this->m_10 = v7; /*0x63eb6b*/
  return 1; /*0x63eb6e*/
}



// ==== 0x0063EB80  ScriptActionVector::PushBack  this=ScriptActionVector  sig=csp ====
int __thiscall ScriptActionVector::PushBack(ScriptActionVector *this, _DWORD *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = *((_DWORD *)this + 2); /*0x63eb83*/
  result = *((_DWORD *)this + 4); /*0x63eb86*/
  if ( result < v3 /*0x63ebad*/
    || (*((_BYTE *)this + 13) || !v3)
    && (result = *((_DWORD *)this + 5), result > 0)
    && (result = (*(int (__thiscall **)(ScriptActionVector *, int, _DWORD))(*(_DWORD *)this + 8))(this, v3 + result, 0),
        (_BYTE)result) )
  {
    result = *((_DWORD *)this + 4); /*0x63ebb5*/
    v5 = *((_DWORD *)this + 1); /*0x63ebb8*/
    *((_DWORD *)this + 4) = result + 1; /*0x63ebbe*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x63ebc8*/
    LOBYTE(result) = 1; /*0x63ebcb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x63ebaf*/
  }
  return result; /*0x63ebb1*/
}



// ==== 0x0063EBD0  PlanningNodeClass::RemoveFromArray  this=PlanningNodeClass  sig=csp ====
char __thiscall PlanningNodeClass::RemoveFromArray(PlanningNodeClass *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  v3 = (*(int (__thiscall **)(PlanningNodeClass *, int))(*(_DWORD *)this->__pad_0 + 16))(this, a2); /*0x63ebdc*/
  if ( v3 == -1 ) /*0x63ebe2*/
    return 0; /*0x63ebe2*/
  v4 = this->q004; /*0x63ebe4*/
  if ( v3 >= v4 ) /*0x63ebe9*/
    return 0; /*0x63ec0b*/
  v5 = v4 - 1; /*0x63ebeb*/
  for ( this->q004 = v5; /*0x63ebf1*/
        v3 < this->q004;
        *(_DWORD *)(this->PlanningNodeClass_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(this->PlanningNodeClass_field_0x04
                                                                                 + 4 * v3) )
  {
    ++v3; /*0x63ebf6*/
  }
  return 1; /*0x63ec07*/
}



// ==== 0x0063EC20  _DynamicVectorClass_PAVPlanningTokenClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall BlowPipe_23::FindItemIndex_1(_DynamicVectorClass_PAVPlanningTokenClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63ec20*/
  result = 0; /*0x63ec23*/
  if ( m_10 <= 0 ) /*0x63ec28*/
    return -1; /*0x63ec3f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63ec2e*/
  {
    if ( ++result >= m_10 ) /*0x63ec3d*/
      return -1; /*0x63ec3d*/
  }
  return result; /*0x63ec42*/
}



// ==== 0x0063EC50  _VectorClass_PAVPlanningMemberClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningMemberClass::QueryInterface(
        _VectorClass_PAVPlanningMemberClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ec53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x63ec56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ec60*/
  {
    __3_YAXPAX_Z(v3); /*0x63ec68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ec70*/
  }
  BYTE1(this->m_C) = 0; /*0x63ec7b*/
  this->m_8 = 0; /*0x63ec81*/
  if ( (a2 & 1) != 0 ) /*0x63ec88*/
    __3_YAXPAX_Z(this); /*0x63ec8b*/
  return this->__pad_0; /*0x63ec95*/
}



// ==== 0x0063ECA0  _DynamicVectorClass_PAVPlanningMemberClass::Constructor_VectorClass_PlanningMemberClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningMemberClass___(
        _DynamicVectorClass_PAVPlanningMemberClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63eca3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x63eca6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ecb0*/
  {
    __3_YAXPAX_Z(v3); /*0x63ecb8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ecc0*/
  }
  BYTE1(this->m_C) = 0; /*0x63eccb*/
  this->m_8 = 0; /*0x63ecd1*/
  if ( (a2 & 1) != 0 ) /*0x63ecd8*/
    __3_YAXPAX_Z(this); /*0x63ecdb*/
  return this->__pad_0; /*0x63ece5*/
}



// ==== 0x0063ECF0  _VectorClass_PAVPlanningBranchClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningBranchClass::QueryInterface(
        _VectorClass_PAVPlanningBranchClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ecf3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63ecf6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ed00*/
  {
    __3_YAXPAX_Z(v3); /*0x63ed08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ed10*/
  }
  BYTE1(this->m_C) = 0; /*0x63ed1b*/
  this->m_8 = 0; /*0x63ed21*/
  if ( (a2 & 1) != 0 ) /*0x63ed28*/
    __3_YAXPAX_Z(this); /*0x63ed2b*/
  return this->__pad_0; /*0x63ed35*/
}



// ==== 0x0063ED40  _DynamicVectorClass_PAVPlanningBranchClass::Constructor_VectorClass_PlanningBranchClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningBranchClass___(
        _DynamicVectorClass_PAVPlanningBranchClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ed43*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63ed46*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ed50*/
  {
    __3_YAXPAX_Z(v3); /*0x63ed58*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ed60*/
  }
  BYTE1(this->m_C) = 0; /*0x63ed6b*/
  this->m_8 = 0; /*0x63ed71*/
  if ( (a2 & 1) != 0 ) /*0x63ed78*/
    __3_YAXPAX_Z(this); /*0x63ed7b*/
  return this->__pad_0; /*0x63ed85*/
}



// ==== 0x0063ED90  _VectorClass_PAVPlanningNodeClass::Destructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall BlowPipe_23::Destructor(_VectorClass_PAVPlanningNodeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ed93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x63ed96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63eda0*/
  {
    __3_YAXPAX_Z(v3); /*0x63eda8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63edb0*/
  }
  BYTE1(this->m_C) = 0; /*0x63edbb*/
  this->m_8 = 0; /*0x63edc1*/
  if ( (a2 & 1) != 0 ) /*0x63edc8*/
    __3_YAXPAX_Z(this); /*0x63edcb*/
  return this->__pad_0; /*0x63edd5*/
}



// ==== 0x0063EDE0  _DynamicVectorClass_PAVPlanningNodeClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BlowPipe_31::QueryInterface(_DynamicVectorClass_PAVPlanningNodeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ede3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x63ede6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63edf0*/
  {
    __3_YAXPAX_Z(v3); /*0x63edf8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ee00*/
  }
  BYTE1(this->m_C) = 0; /*0x63ee0b*/
  this->m_8 = 0; /*0x63ee11*/
  if ( (a2 & 1) != 0 ) /*0x63ee18*/
    __3_YAXPAX_Z(this); /*0x63ee1b*/
  return this->__pad_0; /*0x63ee25*/
}



// ==== 0x0063EE30  _VectorClass_PAVEventClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall BlowPipe_23::QueryInterface(_VectorClass_PAVEventClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ee33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EventClass *>::`vftable'; /*0x63ee36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ee40*/
  {
    __3_YAXPAX_Z(v3); /*0x63ee48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ee50*/
  }
  BYTE1(this->m_C) = 0; /*0x63ee5b*/
  this->m_8 = 0; /*0x63ee61*/
  if ( (a2 & 1) != 0 ) /*0x63ee68*/
    __3_YAXPAX_Z(this); /*0x63ee6b*/
  return this->__pad_0; /*0x63ee75*/
}



// ==== 0x0063EE80  _DynamicVectorClass_PAVEventClass::Destructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BlowPipe_23::Destructor_0(_DynamicVectorClass_PAVEventClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ee83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EventClass *>::`vftable'; /*0x63ee86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ee90*/
  {
    __3_YAXPAX_Z(v3); /*0x63ee98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63eea0*/
  }
  BYTE1(this->m_C) = 0; /*0x63eeab*/
  this->m_8 = 0; /*0x63eeb1*/
  if ( (a2 & 1) != 0 ) /*0x63eeb8*/
    __3_YAXPAX_Z(this); /*0x63eebb*/
  return this->__pad_0; /*0x63eec5*/
}



// ==== 0x0063EED0  _VectorClass_PAVPlanningTokenClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningTokenClass::QueryInterface(
        _VectorClass_PAVPlanningTokenClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63eed3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningTokenClass *>::`vftable'; /*0x63eed6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63eee0*/
  {
    __3_YAXPAX_Z(v3); /*0x63eee8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63eef0*/
  }
  BYTE1(this->m_C) = 0; /*0x63eefb*/
  this->m_8 = 0; /*0x63ef01*/
  if ( (a2 & 1) != 0 ) /*0x63ef08*/
    __3_YAXPAX_Z(this); /*0x63ef0b*/
  return this->__pad_0; /*0x63ef15*/
}



// ==== 0x0063EF20  _DynamicVectorClass_PAVPlanningTokenClass::Destructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BlowPipe_23::Destructor_1(_DynamicVectorClass_PAVPlanningTokenClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ef23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningTokenClass *>::`vftable'; /*0x63ef26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ef30*/
  {
    __3_YAXPAX_Z(v3); /*0x63ef38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ef40*/
  }
  BYTE1(this->m_C) = 0; /*0x63ef4b*/
  this->m_8 = 0; /*0x63ef51*/
  if ( (a2 & 1) != 0 ) /*0x63ef58*/
    __3_YAXPAX_Z(this); /*0x63ef5b*/
  return this->__pad_0; /*0x63ef65*/
}



// ==== 0x0063EF70  Vector4::EraseAt_Copy  this=Vector4  sig=csp ====
int __thiscall Vector4::EraseAt_Copy(Vector4 *this, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // edx

  v2 = this->q004; /*0x63ef70*/
  result = a2; /*0x63ef73*/
  if ( a2 >= v2 ) /*0x63ef79*/
  {
    LOBYTE(result) = 0; /*0x63ef9c*/
  }
  else
  {
    v4 = v2 - 1; /*0x63ef7b*/
    this->q004 = v4; /*0x63ef7e*/
    if ( a2 < v4 ) /*0x63ef81*/
    {
      do /*0x63ef94*/
      {
        ++result; /*0x63ef87*/
        *(_DWORD *)(this->Vector4_field_0x04 + 4 * result - 4) = *(_DWORD *)(this->Vector4_field_0x04 + 4 * result); /*0x63ef8b*/
      }
      while ( result < this->q004 ); /*0x63ef94*/
    }
    LOBYTE(result) = 1; /*0x63ef97*/
  }
  return result; /*0x63ef99*/
}



// ==== 0x0063EFB0  VectorClass::Object_Set  this=VectorClass  sig=csp ====
_DWORD *__thiscall Object_Set(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x63efbb*/
  this->Capacity = a2; /*0x63efbe*/
  this->IsInitialized = 1; /*0x63efc1*/
  this->IsAllocated = 0; /*0x63efc5*/
  this->vtable0 = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x63efc8*/
  if ( a2 ) /*0x63efce*/
  {
    if ( a3 ) /*0x63efd6*/
    {
      this->Items = (void *)a3; /*0x63efd8*/
      return &this->vtable0; /*0x63efde*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x63efed*/
    this->IsAllocated = 1; /*0x63eff0*/
  }
  return &this->vtable0; /*0x63efdd*/
}



// ==== 0x0063F000  FactoryClass::RemoveItem  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::RemoveItem(FactoryClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->?; /*0x63f000*/
  v3 = a2; /*0x63f003*/
  if ( a2 >= uniqueId ) /*0x63f009*/
    return 0; /*0x63f02c*/
  v4 = uniqueId - 1; /*0x63f00b*/
  this->? = v4; /*0x63f00e*/
  if ( a2 < v4 ) /*0x63f011*/
  {
    do /*0x63f024*/
    {
      ++v3; /*0x63f017*/
      *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3); /*0x63f01b*/
    }
    while ( v3 < this->? ); /*0x63f024*/
  }
  return 1; /*0x63f029*/
}



// ==== 0x0063F040  Sidebar::RemoveItem  this=Sidebar  sig=csp ====
char __thiscall Sidebar::RemoveItem(Sidebar *this, int a2)
{
  char *Sidebar_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  Sidebar_field_0x10 = (char *)this->Sidebar_field_0x10; /*0x63f040*/
  v3 = a2; /*0x63f043*/
  if ( a2 >= (int)Sidebar_field_0x10 ) /*0x63f049*/
    return 0; /*0x63f06c*/
  v4 = Sidebar_field_0x10 - 1; /*0x63f04b*/
  this->Sidebar_field_0x10 = v4; /*0x63f04e*/
  if ( a2 < (int)v4 ) /*0x63f051*/
  {
    do /*0x63f064*/
    {
      ++v3; /*0x63f057*/
      *(_DWORD *)(this->Sidebar_field_0x4[0] + 4 * v3 - 4) = *(_DWORD *)(this->Sidebar_field_0x4[0] + 4 * v3); /*0x63f05b*/
    }
    while ( v3 < (int)this->Sidebar_field_0x10 ); /*0x63f064*/
  }
  return 1; /*0x63f069*/
}



// ==== 0x0063F080  ProcessVoxelVertexData  this=-  sig=csp ====
void __fastcall Voxel_ProcessVertexData(_DWORD *a1, int *a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int *v7; // ebp
  int v8; // edx
  int v9; // ebp
  int v10; // edx
  int v11; // edi
  int v12; // edx
  int v13; // ebp
  BOOL v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int *v18; // ebp
  int v19; // ecx
  bool v20; // zf
  int v21; // edx
  BOOL v22; // ebx
  int v23; // ebx
  int v24; // ebp
  int v25; // edi
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+14h] [ebp-20h] BYREF
  int v28; // [esp+18h] [ebp-1Ch]
  _DWORD *v29; // [esp+1Ch] [ebp-18h]
  BOOL v30; // [esp+20h] [ebp-14h]
  int v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+28h] [ebp-Ch]
  int *v33; // [esp+2Ch] [ebp-8h]
  int v34; // [esp+30h] [ebp-4h]

  v2 = a1[1]; /*0x63f086*/
  v29 = a1; /*0x63f08a*/
  v3 = *a1; /*0x63f08e*/
  v4 = 0; /*0x63f090*/
  v33 = a2; /*0x63f094*/
  if ( v3 ) /*0x63f098*/
  {
    v5 = *(_DWORD *)(v2 + 4); /*0x63f09e*/
    v6 = 1; /*0x63f0a1*/
    v31 = 0; /*0x63f0a8*/
    v27 = v5; /*0x63f0ac*/
    if ( v3 > 1 ) /*0x63f0b0*/
    {
      v7 = (int *)(v2 + 12); /*0x63f0b6*/
      do /*0x63f0da*/
      {
        v8 = *v7; /*0x63f0b9*/
        if ( *v7 >= v5 ) /*0x63f0be*/
        {
          if ( v8 > v27 ) /*0x63f0ca*/
          {
            v31 = v6; /*0x63f0cc*/
            v27 = v8; /*0x63f0d0*/
          }
        }
        else
        {
          v4 = v6; /*0x63f0c0*/
          v5 = *v7; /*0x63f0c2*/
        }
        ++v6; /*0x63f0d4*/
        v7 += 2; /*0x63f0d5*/
      }
      while ( v6 < v3 ); /*0x63f0da*/
      if ( v5 != v27 ) /*0x63f0e0*/
      {
        v9 = *(_DWORD *)(v2 + 8 * v4 + 4); /*0x63f0e6*/
        v10 = v4; /*0x63f0ea*/
        if ( v9 == v5 ) /*0x63f0ee*/
        {
          do /*0x63f0fa*/
            v10 = (v10 + 1) % v3; /*0x63f0f4*/
          while ( *(_DWORD *)(v2 + 8 * v10 + 4) == v5 ); /*0x63f0fa*/
        }
        v26 = (v3 + v10 - 1) % v3; /*0x63f105*/
        if ( v9 == v5 ) /*0x63f109*/
        {
          do /*0x63f118*/
            v4 = (v3 + v4 - 1) % v3; /*0x63f112*/
          while ( *(_DWORD *)(v2 + 8 * v4 + 4) == v5 ); /*0x63f118*/
        }
        v28 = -1; /*0x63f11d*/
        v11 = (v4 + 1) % v3; /*0x63f12c*/
        v12 = *(_DWORD *)(v2 + 8 * v26); /*0x63f12e*/
        v13 = *(_DWORD *)(v2 + 8 * v11); /*0x63f133*/
        v14 = v13 != v12; /*0x63f138*/
        v30 = v14; /*0x63f13e*/
        if ( v14 ) /*0x63f142*/
        {
          if ( v13 > v12 ) /*0x63f146*/
          {
            v15 = v11; /*0x63f148*/
            v11 = v26; /*0x63f14a*/
            v28 = v13 != v12; /*0x63f14e*/
            v26 = v15; /*0x63f152*/
          }
        }
        else
        {
          v32 = (v26 + 1) % v3; /*0x63f166*/
          v16 = *(_DWORD *)(v2 + 8 * v11 + 4); /*0x63f16d*/
          v34 = (v3 + v11 - 1) % v3; /*0x63f171*/
          if ( (*(_DWORD *)(v2 + 8 * v32) - v13) * (*(_DWORD *)(v2 + 8 * v34 + 4) - v16) /*0x63f19f*/
             - (*(_DWORD *)(v2 + 8 * v34) - v13) * (*(_DWORD *)(v2 + 8 * v32 + 4) - v16) < 0 )
          {
            v17 = v11; /*0x63f1a1*/
            v11 = v26; /*0x63f1a3*/
            v28 = 1; /*0x63f1a7*/
            v26 = v17; /*0x63f1af*/
          }
          v14 = v30; /*0x63f1b3*/
        }
        v18 = v33; /*0x63f1bb*/
        v19 = v14 - v5 + v27 - 1; /*0x63f1c3*/
        v20 = v14 - v5 + v27 == 1; /*0x63f1c7*/
        *v33 = v19; /*0x63f1c9*/
        if ( v19 >= 0 && !v20 ) /*0x63f1cc*/
        {
          v21 = v18[2]; /*0x63f1d2*/
          v18[1] = v5 - v14 + 1; /*0x63f1da*/
          if ( !v21 ) /*0x63f1dd*/
          {
            v18[2] = (int)__2_YAPAXI_Z(8 * v19 + 1600); /*0x63f1ec*/
            v14 = v30; /*0x63f1ef*/
          }
          if ( v18[2] ) /*0x63f1f6*/
          {
            v27 = v18[2]; /*0x63f20a*/
            v22 = !v14; /*0x63f210*/
            v34 = v22; /*0x63f215*/
            do /*0x63f267*/
            {
              if ( v28 <= 0 ) /*0x63f21f*/
              {
                v18 = v33; /*0x63f23c*/
                v11 = (v11 + *v29 - 1) % *v29; /*0x63f240*/
              }
              else
              {
                v11 = (v11 + 1) % *v29; /*0x63f22b*/
              }
              Audio_Process(*(_DWORD *)(v2 + 8 * v11), *(_DWORD *)(v2 + 8 * v11 + 4), 1, v22, &v27); /*0x63f25a*/
              v22 = 0; /*0x63f25f*/
            }
            while ( v11 != v31 ); /*0x63f267*/
            v23 = v34; /*0x63f270*/
            v27 = v18[2]; /*0x63f274*/
            v24 = -v28; /*0x63f27c*/
            v25 = v26; /*0x63f27e*/
            v34 = -v28; /*0x63f280*/
            do /*0x63f2d0*/
            {
              if ( v24 <= 0 ) /*0x63f286*/
              {
                v24 = v34; /*0x63f2a3*/
                v25 = (v25 + *v29 - 1) % *v29; /*0x63f2a7*/
              }
              else
              {
                v25 = (v25 + 1) % *v29; /*0x63f292*/
              }
              Audio_Process(*(_DWORD *)(v2 + 8 * v25) - 1, *(_DWORD *)(v2 + 8 * v25 + 4), 0, v23, &v27); /*0x63f2c3*/
              v23 = 0; /*0x63f2c8*/
            }
            while ( v25 != v31 ); /*0x63f2d0*/
          }
          else
          {
            *v18 = 0; /*0x63f1fe*/
          }
        }
      }
    }
  }
}



// ==== 0x0063F2E0  Audio_Process  this=-  sig=csp ====
int __fastcall sub_63F2E0(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD **a7)
{
  _DWORD *v7; // ebx
  int v8; // edi
  signed int v9; // esi
  int result; // eax
  signed int v11; // ebp
  int v12; // edx
  int v13; // esi
  int v14; // edx
  int v15; // ebx
  int v16; // edx
  _DWORD *v17; // [esp+Ch] [ebp-4h]
  int v18; // [esp+14h] [ebp+4h]
  int v19; // [esp+20h] [ebp+10h]

  v7 = *a7; /*0x63f2ec*/
  v8 = a3 - a1; /*0x63f2f2*/
  v17 = *a7; /*0x63f2f6*/
  v9 = a4 - a2; /*0x63f300*/
  result = a3 - a1 <= 0 ? -1 : 1;
  v18 = result; /*0x63f308*/
  if ( a4 - a2 <= 0 ) /*0x63f30c*/
    return result; /*0x63f30c*/
  result = v8; /*0x63f315*/
  v11 = abs32(v8); /*0x63f31a*/
  if ( !v11 ) /*0x63f31c*/
  {
    v12 = v9 - a6; /*0x63f322*/
    v13 = v9 - a6 - 1; /*0x63f324*/
    if ( v12 > 0 ) /*0x63f327*/
    {
      result = v13 + 1; /*0x63f331*/
      do /*0x63f344*/
      {
        if ( a5 == 1 ) /*0x63f337*/
          *v7 = a1; /*0x63f339*/
        else
          v7[1] = a1; /*0x63f33d*/
        v7 += 2; /*0x63f340*/
        --result; /*0x63f343*/
      }
      while ( result ); /*0x63f344*/
      *a7 = v7; /*0x63f34d*/
      return result; /*0x63f351*/
    }
    goto LABEL_50; /*0x63f327*/
  }
  if ( v9 == v11 ) /*0x63f356*/
  {
    if ( a6 ) /*0x63f362*/
      a1 += v18; /*0x63f364*/
    result = v9 - a6; /*0x63f368*/
    if ( v9 - a6 <= 0 ) /*0x63f36d*/
      goto LABEL_50; /*0x63f36d*/
    do /*0x63f38c*/
    {
      if ( a5 == 1 ) /*0x63f37d*/
        *v7 = a1; /*0x63f37f*/
      else
        v7[1] = a1; /*0x63f383*/
      a1 += v18; /*0x63f386*/
      v7 += 2; /*0x63f388*/
      --result; /*0x63f38b*/
    }
    while ( result ); /*0x63f38c*/
    *a7 = v7; /*0x63f395*/
  }
  else
  {
    if ( v9 <= v11 ) /*0x63f39c*/
    {
      v15 = v18 * (v11 / v9); /*0x63f40c*/
      v16 = v11 % v9; /*0x63f412*/
      if ( v8 < 0 ) /*0x63f416*/
        result = 1 - v9; /*0x63f421*/
      else
        result = 0; /*0x63f418*/
      if ( a6 ) /*0x63f429*/
      {
        result += v16; /*0x63f42b*/
        a1 += v15; /*0x63f42d*/
        if ( result > 0 ) /*0x63f431*/
        {
          a1 += v18; /*0x63f437*/
          result -= v9; /*0x63f439*/
        }
      }
      if ( v9 - a6 > 0 ) /*0x63f444*/
      {
        v19 = v9 - a6; /*0x63f44b*/
        do /*0x63f483*/
        {
          if ( a5 == 1 ) /*0x63f45a*/
            *v17 = a1; /*0x63f45c*/
          else
            v17[1] = a1; /*0x63f460*/
          result += v16; /*0x63f463*/
          a1 += v15; /*0x63f465*/
          if ( result > 0 ) /*0x63f469*/
          {
            a1 += v18; /*0x63f46b*/
            result -= v9; /*0x63f46d*/
          }
          v17 += 2; /*0x63f476*/
          --v19; /*0x63f47f*/
        }
        while ( v19 ); /*0x63f483*/
      }
      v7 = v17; /*0x63f485*/
      goto LABEL_50; /*0x63f485*/
    }
    if ( v8 < 0 ) /*0x63f3a0*/
      result = 1 - v9; /*0x63f3ab*/
    else
      result = 0; /*0x63f3a2*/
    if ( a6 ) /*0x63f3b3*/
    {
      result += v11; /*0x63f3b5*/
      if ( result > 0 ) /*0x63f3b9*/
      {
        a1 += v18; /*0x63f3bf*/
        result -= v9; /*0x63f3c1*/
      }
    }
    if ( v9 - a6 <= 0 ) /*0x63f3cc*/
    {
LABEL_50:
      *a7 = v7; /*0x63f489*/
      return result; /*0x63f48e*/
    }
    v14 = v9 - a6; /*0x63f3d6*/
    do /*0x63f3f3*/
    {
      if ( a5 == 1 ) /*0x63f3da*/
        *v7 = a1; /*0x63f3dc*/
      else
        v7[1] = a1; /*0x63f3e0*/
      result += v11; /*0x63f3e3*/
      if ( result > 0 ) /*0x63f3e7*/
      {
        a1 += v18; /*0x63f3e9*/
        result -= v9; /*0x63f3ed*/
      }
      v7 += 2; /*0x63f3ef*/
      --v14; /*0x63f3f2*/
    }
    while ( v14 ); /*0x63f3f3*/
    *a7 = v7; /*0x63f3fc*/
  }
  return result; /*0x63f34b*/
}



// ==== 0x0063F4A0  sub_63F4A0  this=-  sig=ida-proto ====
int sub_63F4A0()
{
  dword_AC4D00 = 0; /*0x63f4a2*/
  dword_AC4D04 = 0; /*0x63f4a7*/
  dword_AC4D08 = 0; /*0x63f4ac*/
  dword_AC4D0C = 0; /*0x63f4b1*/
  return 0; /*0x63f4b6*/
}



// ==== 0x0063F4C0  sub_63F4C0  this=-  sig=ida-proto ====
void sub_63F4C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x63f4cc*/
  dbl_AC4D18 = Math::Sqrt(v0 + v0); /*0x63f4de*/
}



// ==== 0x0063F4F0  sub_63F4F0  this=-  sig=ida-proto ====
void sub_63F4F0()
{
  dbl_AC4E68 = dbl_AC4D18 / 60.0; /*0x63f4fc*/
}



// ==== 0x0063F510  sub_63F510  this=-  sig=ida-proto ====
void sub_63F510()
{
  dbl_AC4E50 = 1.0 / dbl_AC4E68; /*0x63f51c*/
}



// ==== 0x0063F530  sub_63F530  this=-  sig=ida-proto ====
void sub_63F530()
{
  dbl_AC4E48 = 0.0174532925199433 * 45.0; /*0x63f53c*/
}



// ==== 0x0063F550  sub_63F550  this=-  sig=ida-proto ====
void sub_63F550()
{
  dbl_AC4D20 = 0.0174532925199433 * 60.0; /*0x63f55c*/
}



// ==== 0x0063F570  sub_63F570  this=-  sig=ida-proto ====
void sub_63F570()
{
  dbl_AC4CF8 = 0.0174532925199433 * 90.0; /*0x63f57c*/
}



// ==== 0x0063F590  sub_63F590  this=-  sig=ida-proto ====
__int64 sub_63F590()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4CF8 - dbl_AC4D20); /*0x63f5a2*/
  result = Math::RoundToInt(v0 * dbl_AC4D18 * 0.5); /*0x63f5b6*/
  dword_AC4E70 = result; /*0x63f5bb*/
  return result; /*0x63f5c0*/
}



// ==== 0x0063F5D0  sub_63F5D0  this=-  sig=ida-proto ====
void sub_63F5D0()
{
  dbl_AC4D28 = Math::ArcTan((double)dword_AC4E70 * 0.00390625); /*0x63f5e7*/
}



// ==== 0x0063F600  sub_63F600  this=-  sig=ida-proto ====
void sub_63F600()
{
  dbl_AC4E40 = Math::ArcTan((double)(2 * dword_AC4E70) / dbl_AC4D18); /*0x63f622*/
}



// ==== 0x0063F630  sub_63F630  this=-  sig=ida-proto ====
__int64 sub_63F630()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4E70) + 0.5); /*0x63f64b*/
  dword_AC4E64 = result; /*0x63f650*/
  return result; /*0x63f656*/
}



// ==== 0x0063F660  sub_63F660  this=-  sig=ida-proto ====
int sub_63F660()
{
  word_AC4D10 = 0; /*0x63f662*/
  word_AC4D12 = 0; /*0x63f668*/
  return 0; /*0x63f66e*/
}



// ==== 0x0063F670  sub_63F670  this=-  sig=ida-proto ====
int sub_63F670()
{
  dword_AC4E30 = 0; /*0x63f672*/
  dword_AC4E34 = 0; /*0x63f677*/
  dword_AC4E38 = 0; /*0x63f67c*/
  return 0; /*0x63f681*/
}



// ==== 0x0063F690  sub_63F690  this=-  sig=ida-proto ====
int sub_63F690()
{
  dword_AC4E60 = 0; /*0x63f695*/
  dword_AC4E58 = 128; /*0x63f69f*/
  dword_AC4E5C = 128; /*0x63f6a4*/
  return 128; /*0x63f6a9*/
}



// ==== 0x0063F6B0  RadarClass::Create  this=PowerClass  sig=csp ====
int __thiscall sub_63F6B0(int this)
{
  RadarClass::Construct((_DWORD *)this); /*0x63f6b4*/
  *(_BYTE *)(this + 5388) = 0; /*0x63f6c1*/
  *(_DWORD *)(this + 5392) = Timer::GetTicks(); /*0x63f6cc*/
  *(_DWORD *)(this + 5400) = 0; /*0x63f6d2*/
  *(_DWORD *)(this + 5404) = 0; /*0x63f6de*/
  *(_DWORD *)(this + 5408) = Timer::GetTicks(); /*0x63f6e9*/
  *(_DWORD *)(this + 5416) = 0; /*0x63f6f2*/
  *(_DWORD *)(this + 5436) = -1; /*0x63f6f8*/
  *(_DWORD *)(this + 5440) = -1; /*0x63f6fe*/
  *(_DWORD *)(this + 5420) = 0; /*0x63f704*/
  *(_DWORD *)(this + 5424) = 0; /*0x63f70a*/
  *(_DWORD *)(this + 5428) = 0; /*0x63f710*/
  *(_BYTE *)(this + 5432) = 0; /*0x63f716*/
  *(_DWORD *)this = &PowerClass::`vftable'; /*0x63f71c*/
  return this; /*0x63f724*/
}



// ==== 0x0063F730  PowerClass::updateDrain  this=PowerClass  sig=csp ====
int __thiscall PowerClass::updateDrain(PowerClass *this)
{
  int Ticks; // eax
  int v4; // [esp+Ch] [ebp-8h]

  RadarClass::Destru_vt07((RadarClass *)this); /*0x63f737*/
  this->q153C = -1; /*0x63f743*/
  this->q1540 = -1; /*0x63f749*/
  *(_DWORD *)this->__pad_1510 = Timer::GetTicks(); /*0x63f75e*/
  *(_DWORD *)&this->__pad_1510[12] = 0; /*0x63f764*/
  *(_DWORD *)&this->__pad_1510[4] = v4; /*0x63f76a*/
  *(_DWORD *)&this->__pad_1510[8] = 0; /*0x63f76d*/
  Ticks = Timer::GetTicks(); /*0x63f774*/
  *(_DWORD *)this->__pad_152C = 0; /*0x63f781*/
  this->field_1530 = 0; /*0x63f787*/
  this->field_1520 = Ticks; /*0x63f78d*/
  *(_DWORD *)this->__pad_1534 = 0; /*0x63f793*/
  LOBYTE(this->field_1538) = 0; /*0x63f799*/
  *(_DWORD *)this->__pad_1524 = v4; /*0x63f79f*/
  this->field_1528 = 0; /*0x63f7a4*/
  return v4; /*0x63f7a2*/
}



// ==== 0x0063F7B0  PowerClass::Stub  this=PowerClass  sig=csp ====
// attributes: thunk
void __thiscall PowerClass::Stub(PowerClass *this, int a2)
{
  RadarClass::Destru_vt05((RadarClass *)this); /*0x63f7b0*/
}



// ==== 0x0063F7C0  PowerClass::checkBlackout  this=PowerClass  sig=csp ====
void *__thiscall PowerClass::checkBlackout(PowerClass *this)
{
  void *result; // eax

  RadarClass::Destru_vt53((RadarClass *)this); /*0x63f7c0*/
  result = LoadFileSHP(aPowerpShp, (bool *)&stru_AC4B30.__pad_EC[604]); /*0x63f7cf*/
  *(_DWORD *)&stru_AC4B30.__pad_EC[600] = result; /*0x63f7d4*/
  return result; /*0x63f7d9*/
}



// ==== 0x0063F7E0  PowerClass::checkLowPower  this=PowerClass  sig=csp ====
void PowerClass::_vt50()
{
  RadarClass::Destru_vt50(); /*0x63f7e0*/
  if ( byte_AC4E78 ) /*0x63f7ec*/
  {
    __3_YAXPAX_Z(dword_AC4E74); /*0x63f7f4*/
    byte_AC4E78 = 0; /*0x63f7fc*/
  }
}



// ==== 0x0063F810  ObjectClass::method_63F810  this=ObjectClass  sig=csp ====
int __thiscall sub_63F810(ObjectClass *this)
{
  char *v1; // esi
  int v3; // [esp+8h] [ebp-8h]

  *((_DWORD *)this + 1351) = 10; /*0x63f81a*/
  v1 = (char *)this + 5392; /*0x63f829*/
  *((_DWORD *)this + 1348) = Timer::GetTicks(); /*0x63f834*/
  *((_DWORD *)v1 + 1) = v3; /*0x63f83a*/
  *((_DWORD *)v1 + 2) = 3; /*0x63f83d*/
  return v3; /*0x63f840*/
}



// ==== 0x0063F850  PowerBar::CalcFill  this=PowerClass  sig=csp ====
int PowerBar_CalcFill()
{
  int v0; // ecx
  int v1; // ebx
  int v2; // edx
  int *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx

  v0 = 0; /*0x63f874*/
  v1 = (dword_B0B504 + 3) / 3; /*0x63f876*/
  v2 = 0; /*0x63f878*/
  if ( *((int *)dword_A83D4C + 30) > 0 ) /*0x63f880*/
  {
    v3 = (int *)*((_DWORD *)dword_A83D4C + 27); /*0x63f882*/
    v4 = *((_DWORD *)dword_A83D4C + 30); /*0x63f887*/
    do /*0x63f8a5*/
    {
      v5 = *v3++; /*0x63f889*/
      v6 = *(_DWORD *)(v5 + 1312); /*0x63f88e*/
      v0 += *(_DWORD *)(v6 + 3812); /*0x63f89a*/
      v2 += *(_DWORD *)(v6 + 3808); /*0x63f8a2*/
      --v4; /*0x63f8a4*/
    }
    while ( v4 ); /*0x63f8a5*/
  }
  v7 = Math::RoundToInt(400.0 / ((double)(v0 + v2) + 400.0) * (double)((dword_B0B504 + 3) / 3)); /*0x63f8c3*/
  v8 = v7 <= 0 ? 0 : v7;
  if ( v8 >= v1 - 1 ) /*0x63f8d7*/
    v8 = v1 - 1; /*0x63f8d9*/
  return v1 - v8; /*0x63f8dd*/
}



// ==== 0x0063F8F0  ObjectClass::method_63F8F0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_63F8F0(ObjectClass *this)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // kr00_4
  int v5; // [esp+0h] [ebp-8h]

  v2 = PowerBar::CalcFill(); /*0x63f8f6*/
  v5 = *((_DWORD *)this + 1355) + *((_DWORD *)this + 1356) + *((_DWORD *)this + 1357); /*0x63f917*/
  if ( v5 > v2 ) /*0x63f91c*/
    v5 = v2; /*0x63f91e*/
  v4 = Math::RoundToInt((double)v5 / (double)v2 * 5.0); /*0x63f930*/
  WORD2(result) = HIWORD(v4); /*0x63f930*/
  LOWORD(result) = v4; /*0x63f930*/
  return result; /*0x63f935*/
}



// ==== 0x0063F960  PowerBar::ComputeFill  this=IUnknown  sig=csp ====
int __stdcall PowerBar_ComputeFill(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  char *v4; // esi
  int v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st7
  int v11; // [esp+14h] [ebp-34h]
  double v12; // [esp+18h] [ebp-30h]
  double v13; // [esp+20h] [ebp-28h]
  double v14; // [esp+28h] [ebp-20h]

  v3 = (dword_B0B504 + 3) / 3; /*0x63f982*/
  v11 = PowerBar::CalcFill(); /*0x63f989*/
  v4 = (char *)dword_A83D4C + 36; /*0x63f995*/
  v5 = (*(int (__stdcall **)(char *))(*((_DWORD *)dword_A83D4C + 9) + 36))((char *)dword_A83D4C + 36); /*0x63f9a3*/
  v12 = 100.0; /*0x63f9ad*/
  v6 = (double)((*(int (__stdcall **)(char *))(*(_DWORD *)v4 + 32))(v4) - v5); /*0x63f9c1*/
  if ( v6 >= 0.0 ) /*0x63f9d0*/
  {
    if ( v6 < 100.0 ) /*0x63fa01*/
      v12 = v6; /*0x63fa03*/
    v13 = v6 - v12; /*0x63fa0b*/
  }
  else
  {
    v12 = 0.0; /*0x63f9d4*/
    v13 = 0.0; /*0x63f9e4*/
  }
  v14 = (double)(*(int (__stdcall **)(char *))(*((_DWORD *)dword_A83D4C + 9) + 36))((char *)dword_A83D4C + 36) /*0x63fa5f*/
      + v12
      + v13;
  if ( v14 <= 0.0 ) /*0x63fa6e*/
  {
    v7 = 1.0; /*0x63faa0*/
    v8 = 0.0; /*0x63faa4*/
  }
  else
  {
    v7 = (double)(*(int (__stdcall **)(char *))(*((_DWORD *)dword_A83D4C + 9) + 36))((char *)dword_A83D4C + 36) / v14; /*0x63fa86*/
    v8 = v13 / v14; /*0x63fa8e*/
  }
  *a3 = Math::RoundToInt(v7); /*0x63fac2*/
  *a2 = Math::RoundToInt(v7); /*0x63fad2*/
  v9 = (double)v11 * v8; /*0x63fad4*/
  *a1 = Math::RoundToInt(v9); /*0x63fae6*/
  *a3 = Math::RoundToInt(v9); /*0x63fb0d*/
  return v3; /*0x63fb17*/
}



// ==== 0x0063FB20  PowerClass::Render  this=PowerClass  sig=csp ====
int __thiscall Sidebar::Render(PowerClass *this, char a2)
{
  int v3; // ebx
  int v4; // esi
  int *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int result; // eax
  int NeedsSaveOrLink; // [esp+4h] [ebp-20h] BYREF
  int v17; // [esp+8h] [ebp-1Ch]
  int v18[4]; // [esp+14h] [ebp-10h] BYREF

  if ( (a2 || LOBYTE(this->field_150C)) && byte_884B8D ) /*0x63fb43*/
  {
    LOBYTE(this->field_150C) = 0; /*0x63fb49*/
    g_TooltipActive = 1; /*0x63fb55*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x63fb5d*/
      v3 = 0; /*0x63fb70*/
    else
      v3 = 5; /*0x63fb69*/
    NeedsSaveOrLink = (int)dword_A8B230[374].NeedsSaveOrLink; /*0x63fb78*/
    v4 = g_DSurface_SidebarBounds + 69; /*0x63fb80*/
    v5 = (int *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x63fb8c*/
                  DSurface_Sidebar,
                  &NeedsSaveOrLink);
    v6 = this->field_1530; /*0x63fb91*/
    v18[0] = *v5; /*0x63fb97*/
    v18[1] = v5[1]; /*0x63fb9e*/
    v18[2] = v5[2]; /*0x63fba5*/
    v18[3] = v5[3]; /*0x63fbb1*/
    v7 = *(_DWORD *)this->__pad_1534; /*0x63fbc6*/
    v8 = *(_DWORD *)this->__pad_152C; /*0x63fbce*/
    if ( (dword_B0B504 + 3) / 3 - v7 - v6 - v8 > 0 ) /*0x63fbdc*/
    {
      v9 = (dword_B0B504 + 3) / 3 - v7 - v6 - v8; /*0x63fbde*/
      do /*0x63fc24*/
      {
        NeedsSaveOrLink = v3; /*0x63fc13*/
        v17 = v4; /*0x63fc17*/
        DrawToSurfaceSHP( /*0x63fc1b*/
          (int)DSurface_Sidebar,
          *(int *)&stru_87F5F0.__pad_58[132],
          *(int *)&stru_AC4B30.__pad_EC[600],
          0,
          &NeedsSaveOrLink,
          v18,
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
        v4 += 3; /*0x63fc20*/
        --v9; /*0x63fc23*/
      }
      while ( v9 ); /*0x63fc24*/
    }
    v10 = *(_DWORD *)&this->__pad_1510[12]; /*0x63fc26*/
    v11 = 0; /*0x63fc2c*/
    if ( v10 > 0 && (v10 & 1) == 0 ) /*0x63fc3e*/
    {
      NeedsSaveOrLink = v3; /*0x63fc75*/
      v17 = v4; /*0x63fc79*/
      DrawToSurfaceSHP( /*0x63fc7d*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        *(int *)&stru_AC4B30.__pad_EC[600],
        4u,
        &NeedsSaveOrLink,
        v18,
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
      v4 += 3; /*0x63fc82*/
      v11 = 1; /*0x63fc85*/
    }
    v12 = *(_DWORD *)this->__pad_152C; /*0x63fc8a*/
    if ( v12 > 0 ) /*0x63fc92*/
    {
      if ( v11 < v12 ) /*0x63fc96*/
      {
        do /*0x63fce4*/
        {
          NeedsSaveOrLink = v3; /*0x63fccb*/
          v17 = v4; /*0x63fccf*/
          DrawToSurfaceSHP( /*0x63fcd3*/
            (int)DSurface_Sidebar,
            *(int *)&stru_87F5F0.__pad_58[132],
            *(int *)&stru_AC4B30.__pad_EC[600],
            1u,
            &NeedsSaveOrLink,
            v18,
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
          v4 += 3; /*0x63fcde*/
          ++v11; /*0x63fce1*/
        }
        while ( v11 < *(_DWORD *)this->__pad_152C ); /*0x63fce4*/
      }
      v11 = 0; /*0x63fce6*/
    }
    v13 = this->field_1530; /*0x63fce8*/
    if ( v13 > 0 ) /*0x63fcf0*/
    {
      if ( v11 < v13 ) /*0x63fcf4*/
      {
        do /*0x63fd42*/
        {
          NeedsSaveOrLink = v3; /*0x63fd29*/
          v17 = v4; /*0x63fd2d*/
          DrawToSurfaceSHP( /*0x63fd31*/
            (int)DSurface_Sidebar,
            *(int *)&stru_87F5F0.__pad_58[132],
            *(int *)&stru_AC4B30.__pad_EC[600],
            2u,
            &NeedsSaveOrLink,
            v18,
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
          v4 += 3; /*0x63fd3c*/
          ++v11; /*0x63fd3f*/
        }
        while ( v11 < this->field_1530 ); /*0x63fd42*/
      }
      v11 = 0; /*0x63fd44*/
    }
    v14 = *(_DWORD *)this->__pad_1534; /*0x63fd46*/
    if ( v14 > 0 && v11 < v14 ) /*0x63fd52*/
    {
      do /*0x63fda0*/
      {
        NeedsSaveOrLink = v3; /*0x63fd87*/
        v17 = v4; /*0x63fd8b*/
        DrawToSurfaceSHP( /*0x63fd8f*/
          (int)DSurface_Sidebar,
          *(int *)&stru_87F5F0.__pad_58[132],
          *(int *)&stru_AC4B30.__pad_EC[600],
          3u,
          &NeedsSaveOrLink,
          v18,
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
        v4 += 3; /*0x63fd9a*/
        ++v11; /*0x63fd9d*/
      }
      while ( v11 < *(_DWORD *)this->__pad_1534 ); /*0x63fda0*/
    }
  }
  LOBYTE(result) = RadarClass::Destru_vt16((RadarClass *)this, a2); /*0x63fdac*/
  return result; /*0x63fdb1*/
}



// ==== 0x0063FDC0  ObjectClass::method_63FDC0  this=ObjectClass  sig=csp ====
int __thiscall sub_63FDC0(ObjectClass *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  PowerBar::ComputeFill(&v5, &v7, &v6); /*0x63fdd7*/
  v2 = *((_DWORD *)this + 1355); /*0x63fddc*/
  if ( v2 <= v5 ) /*0x63fde8*/
  {
    v4 = *((_DWORD *)this + 1357); /*0x63fdf6*/
    if ( v4 <= v6 ) /*0x63fe02*/
    {
      result = *((_DWORD *)this + 1356); /*0x63fe10*/
      if ( result > v7 ) /*0x63fe1c*/
        *((_DWORD *)this + 1356) = --result; /*0x63fe1f*/
    }
    else
    {
      result = v4 - 1; /*0x63fe04*/
      *((_DWORD *)this + 1357) = result; /*0x63fe05*/
    }
  }
  else
  {
    result = v2 - 1; /*0x63fdea*/
    *((_DWORD *)this + 1355) = result; /*0x63fdeb*/
  }
  return result; /*0x63fdf1*/
}



// ==== 0x0063FE30  ObjectClass::method_63FE30  this=ObjectClass  sig=csp ====
int __thiscall sub_63FE30(ObjectClass *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  PowerBar::ComputeFill(&v6, &v7, &v5); /*0x63fe47*/
  v2 = *((_DWORD *)this + 1357); /*0x63fe4c*/
  if ( v2 >= v5 ) /*0x63fe58*/
  {
    v4 = *((_DWORD *)this + 1355); /*0x63fe66*/
    if ( v4 >= v6 ) /*0x63fe72*/
    {
      result = *((_DWORD *)this + 1356); /*0x63fe80*/
      if ( result < v7 ) /*0x63fe8c*/
        *((_DWORD *)this + 1356) = ++result; /*0x63fe8f*/
    }
    else
    {
      result = v4 + 1; /*0x63fe74*/
      *((_DWORD *)this + 1355) = result; /*0x63fe75*/
    }
  }
  else
  {
    result = v2 + 1; /*0x63fe5a*/
    *((_DWORD *)this + 1357) = result; /*0x63fe5b*/
  }
  return result; /*0x63fe61*/
}



// ==== 0x0063FEA0  PowerClass::updatePowerBarAnimation  this=PowerClass  sig=csp ====
int __thiscall PowerClass::updatePowerBarAnimation(PowerClass *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  bool v11; // cc
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  bool v20; // cc
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool v27; // cc
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int Ticks; // edi
  int v36; // eax
  int v37; // edx
  int result; // eax
  int v39; // [esp+18h] [ebp-24h] BYREF
  int v40; // [esp+1Ch] [ebp-20h] BYREF
  int v41; // [esp+20h] [ebp-1Ch] BYREF
  int v42; // [esp+24h] [ebp-18h] BYREF
  int v43; // [esp+28h] [ebp-14h] BYREF
  int v44; // [esp+2Ch] [ebp-10h] BYREF
  int v45; // [esp+34h] [ebp-8h]

  if ( !byte_884B8D ) /*0x63feaf*/
    goto LABEL_66; /*0x63feaf*/
  if ( !LOBYTE(this->field_1538) && *(int *)&this->__pad_1510[12] > 0 ) /*0x63fec9*/
  {
    v4 = *(_DWORD *)&this->__pad_1510[8]; /*0x63fed1*/
    if ( *(_DWORD *)this->__pad_1510 != -1 ) /*0x63feda*/
    {
      v5 = Timer::GetTicks() - *(_DWORD *)this->__pad_1510; /*0x63fee7*/
      if ( v5 >= v4 ) /*0x63feef*/
      {
LABEL_8:
        v6 = *(_DWORD *)&this->__pad_1510[12]; /*0x63fef7*/
        LOBYTE(this->field_150C) = 1; /*0x63fefd*/
        *(_DWORD *)&this->__pad_1510[12] = v6 - 1; /*0x63ff06*/
        byte_884B8E = 1; /*0x63ff11*/
        MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x63ff17*/
        *(_DWORD *)this->__pad_1510 = Timer::GetTicks(); /*0x63ff25*/
        *(_DWORD *)&this->__pad_1510[4] = v45; /*0x63ff34*/
        *(_DWORD *)&this->__pad_1510[8] = 3; /*0x63ff3a*/
        goto LABEL_9; /*0x63ff3a*/
      }
      v4 -= v5; /*0x63fef1*/
    }
    if ( !v4 ) /*0x63fef5*/
      goto LABEL_8; /*0x63fef5*/
  }
LABEL_9:
  if ( (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 36))(&dword_A83D4C->__pad_C[24]) == this->q153C /*0x63ff76*/
    && (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 32))(&dword_A83D4C->__pad_C[24]) == this->q1540
    && !LOBYTE(this->field_1538) )
  {
    goto LABEL_66; /*0x63ff76*/
  }
  LOBYTE(this->field_150C) = 1; /*0x63ff7c*/
  byte_884B8E = 1; /*0x63ff89*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x63ff8f*/
  if ( (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 36))(&dword_A83D4C->__pad_C[24]) != this->q153C /*0x63ffc2*/
    || (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 32))(&dword_A83D4C->__pad_C[24]) != this->q1540 )
  {
    LOBYTE(this->field_1538) = 1; /*0x63ffc8*/
    *(_DWORD *)&this->__pad_1510[12] = 10; /*0x63ffce*/
    *(_DWORD *)this->__pad_1510 = Timer::GetTicks(); /*0x63ffe8*/
    *(_DWORD *)&this->__pad_1510[4] = v45; /*0x63ffee*/
    *(_DWORD *)&this->__pad_1510[8] = 3; /*0x63fff1*/
  }
  this->q153C = (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 36))(&dword_A83D4C->__pad_C[24]); /*0x640004*/
  this->q1540 = (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 32))(&dword_A83D4C->__pad_C[24]); /*0x640018*/
  PowerBar::ComputeFill(&v43, &v44, &v40); /*0x64002f*/
  v7 = this->field_1528; /*0x64003a*/
  if ( this->field_1520 != -1 ) /*0x640043*/
  {
    v8 = Timer::GetTicks() - this->field_1520; /*0x640050*/
    if ( v8 >= v7 ) /*0x640058*/
      goto LABEL_19; /*0x640058*/
    v7 -= v8; /*0x64005a*/
  }
  if ( v7 ) /*0x64005e*/
    goto LABEL_66; /*0x64005e*/
LABEL_19:
  v9 = *(_DWORD *)this->__pad_1534; /*0x640064*/
  v10 = v9 == v40; /*0x64006e*/
  v11 = v9 <= v40; /*0x64006e*/
  LOBYTE(this->field_1538) = 0; /*0x640070*/
  if ( !v10 ) /*0x640077*/
  {
    LOBYTE(this->field_1538) = 1; /*0x64007d*/
    if ( !v11 ) /*0x640083*/
    {
      *(_DWORD *)this->__pad_1534 = v9 - 1; /*0x64008a*/
      PowerBar::ComputeFill(&v41, &v42, &v39); /*0x64009d*/
      v12 = *(_DWORD *)this->__pad_1534; /*0x6400a2*/
      if ( v12 < v39 ) /*0x6400ae*/
      {
        *(_DWORD *)this->__pad_1534 = v12 + 1; /*0x6400b1*/
        goto LABEL_62; /*0x6400b7*/
      }
      v13 = *(_DWORD *)this->__pad_152C; /*0x6400bc*/
      if ( v13 < v41 ) /*0x6400c8*/
      {
        *(_DWORD *)this->__pad_152C = v13 + 1; /*0x6400cb*/
        goto LABEL_62; /*0x6400d1*/
      }
      v14 = this->field_1530; /*0x6400d6*/
      if ( v14 < v42 ) /*0x6400e2*/
      {
        v15 = v14 + 1; /*0x6400e8*/
LABEL_61:
        this->field_1530 = v15; /*0x640314*/
        goto LABEL_62; /*0x640314*/
      }
      goto LABEL_62; /*0x6400e2*/
    }
    *(_DWORD *)this->__pad_1534 = v9 + 1; /*0x6400f3*/
    PowerBar::ComputeFill(&v42, &v39, &v41); /*0x640106*/
    v16 = *(_DWORD *)this->__pad_152C; /*0x64010b*/
    if ( v16 > v42 ) /*0x640117*/
    {
      *(_DWORD *)this->__pad_152C = v16 - 1; /*0x64011a*/
      goto LABEL_62; /*0x640120*/
    }
    v17 = *(_DWORD *)this->__pad_1534; /*0x640125*/
    if ( v17 > v41 ) /*0x640131*/
    {
      *(_DWORD *)this->__pad_1534 = v17 - 1; /*0x640134*/
      goto LABEL_62; /*0x64013a*/
    }
    v18 = this->field_1530; /*0x64013f*/
    if ( v18 <= v39 ) /*0x64014b*/
      goto LABEL_62; /*0x64014b*/
LABEL_60:
    v15 = v18 - 1; /*0x640313*/
    goto LABEL_61; /*0x640313*/
  }
  v19 = *(_DWORD *)this->__pad_152C; /*0x640156*/
  v20 = v19 <= v43; /*0x640160*/
  if ( v19 == v43 ) /*0x640162*/
  {
    v26 = this->field_1530; /*0x640241*/
    v27 = v26 <= v44; /*0x64024b*/
    if ( v26 == v44 ) /*0x64024d*/
      goto LABEL_62; /*0x64024d*/
    LOBYTE(this->field_1538) = 1; /*0x640253*/
    if ( !v27 ) /*0x640259*/
    {
      this->field_1530 = v26 - 1; /*0x640260*/
      PowerBar::ComputeFill(&v41, &v39, &v42); /*0x640273*/
      v28 = *(_DWORD *)this->__pad_1534; /*0x640278*/
      if ( v28 < v42 ) /*0x640284*/
      {
        *(_DWORD *)this->__pad_1534 = v28 + 1; /*0x640287*/
        goto LABEL_62; /*0x64028d*/
      }
      v29 = *(_DWORD *)this->__pad_152C; /*0x640292*/
      if ( v29 < v41 ) /*0x64029e*/
      {
        *(_DWORD *)this->__pad_152C = v29 + 1; /*0x6402a1*/
        goto LABEL_62; /*0x6402a7*/
      }
      v30 = this->field_1530; /*0x6402a9*/
      if ( v30 < v39 ) /*0x6402b5*/
      {
        v15 = v30 + 1; /*0x6402b7*/
        goto LABEL_61; /*0x6402b8*/
      }
      goto LABEL_62; /*0x6402b5*/
    }
    this->field_1530 = v26 + 1; /*0x6402bf*/
    PowerBar::ComputeFill(&v42, &v39, &v41); /*0x6402d2*/
    v31 = *(_DWORD *)this->__pad_152C; /*0x6402d7*/
    if ( v31 > v42 ) /*0x6402e3*/
    {
      *(_DWORD *)this->__pad_152C = v31 - 1; /*0x6402e6*/
      goto LABEL_62; /*0x6402ec*/
    }
    v32 = *(_DWORD *)this->__pad_1534; /*0x6402ee*/
    if ( v32 > v41 ) /*0x6402fa*/
    {
      *(_DWORD *)this->__pad_1534 = v32 - 1; /*0x6402fd*/
      goto LABEL_62; /*0x640303*/
    }
    v18 = this->field_1530; /*0x640305*/
    if ( v18 <= v39 ) /*0x640311*/
      goto LABEL_62; /*0x640311*/
    goto LABEL_60; /*0x640311*/
  }
  LOBYTE(this->field_1538) = 1; /*0x640168*/
  if ( v20 ) /*0x64016e*/
  {
    *(_DWORD *)this->__pad_152C = v19 + 1; /*0x6401de*/
    PowerBar::ComputeFill(&v42, &v39, &v41); /*0x6401f1*/
    v24 = *(_DWORD *)this->__pad_152C; /*0x6401f6*/
    if ( v24 > v42 ) /*0x640202*/
    {
      *(_DWORD *)this->__pad_152C = v24 - 1; /*0x640205*/
      goto LABEL_62; /*0x64020b*/
    }
    v25 = *(_DWORD *)this->__pad_1534; /*0x640210*/
    if ( v25 > v41 ) /*0x64021c*/
    {
      *(_DWORD *)this->__pad_1534 = v25 - 1; /*0x64021f*/
      goto LABEL_62; /*0x640225*/
    }
    v18 = this->field_1530; /*0x64022a*/
    if ( v18 <= v39 ) /*0x640236*/
      goto LABEL_62; /*0x640236*/
    goto LABEL_60; /*0x640236*/
  }
  *(_DWORD *)this->__pad_152C = v19 - 1; /*0x640175*/
  PowerBar::ComputeFill(&v41, &v39, &v42); /*0x640188*/
  v21 = *(_DWORD *)this->__pad_1534; /*0x64018d*/
  if ( v21 < v42 ) /*0x640199*/
  {
    *(_DWORD *)this->__pad_1534 = v21 + 1; /*0x64019c*/
    goto LABEL_62; /*0x6401a2*/
  }
  v22 = *(_DWORD *)this->__pad_152C; /*0x6401a7*/
  if ( v22 < v41 ) /*0x6401b3*/
  {
    *(_DWORD *)this->__pad_152C = v22 + 1; /*0x6401b6*/
    goto LABEL_62; /*0x6401bc*/
  }
  v23 = this->field_1530; /*0x6401c1*/
  if ( v23 < v39 ) /*0x6401cd*/
  {
    v15 = v23 + 1; /*0x6401d3*/
    goto LABEL_61; /*0x6401d4*/
  }
LABEL_62:
  if ( LOBYTE(this->field_1538) ) /*0x64031a*/
  {
    v33 = PowerBar::CalcFill(); /*0x640326*/
    v34 = *(_DWORD *)this->__pad_1534 + *(_DWORD *)this->__pad_152C + this->field_1530; /*0x64033f*/
    v42 = v33; /*0x640341*/
    v39 = v34; /*0x640347*/
    if ( v34 > v33 ) /*0x64034b*/
      v39 = v33; /*0x64034d*/
    Ticks = Timer::GetTicks(); /*0x64035e*/
    LOWORD(v36) = Math::RoundToInt((double)v39 / (double)v42 * 5.0); /*0x64036a*/
    v37 = v45; /*0x64036f*/
    this->field_1520 = Ticks; /*0x640373*/
    *(_DWORD *)this->__pad_1524 = v37; /*0x640379*/
    this->field_1528 = v36; /*0x64037f*/
  }
LABEL_66:
  TacticalClass::MouseInput((RadarClass *)this, a2, a3); /*0x640385*/
  return result; /*0x640396*/
}



// ==== 0x00630090  ParticleSystemClass::vt[06]  this=ParticleSystemClass  sig=csp ====
int __stdcall ParticleSystemClass::g_var_1d5e6b(ParticleSystemClass *this, int *a2, int Owner)
{
  int result; // eax
  int v4; // edx
  int i; // ebx

  result = AbstractClass::SaveLoad_Prefix(&this->vtable0, a2, Owner); /*0x6300a2*/
  if ( result >= 0 ) /*0x6300a9*/
  {
    v4 = *a2; /*0x6300b1*/
    Owner = this->Owner; /*0x6300bd*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &Owner, 4, 0); /*0x6300c1*/
    if ( result >= 0 ) /*0x6300c6*/
    {
      for ( i = 0; i < Owner; ++i ) /*0x6300d0*/
      {
        result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->TargetCoords[0] + 4 * i, 4, 0); /*0x6300e3*/
        if ( result < 0 ) /*0x6300e8*/
          break; /*0x6300e8*/
      }
    }
  }
  return result; /*0x6300f3*/
}



// ==== 0x00630100  ParticleSystemClass::PowerDrainUpdate  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::PowerDrainUpdate(ParticleSystemClass *this, unsigned int *a2)
{
  int i; // edi
  int v4; // eax
  int SpotlightRadius; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp-4h] [ebp-10h]

  HouseClass::ProcessPower((ObjectClass *)this); /*0x63010a*/
  for ( i = 0; i < (int)this->Owner; ++i ) /*0x630119*/
  {
    v10 = *(_DWORD *)(this->TargetCoords[0] + 4 * i) + 4; /*0x630127*/
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)v10 + 16))(v10); /*0x63012a*/
    Power::TimerProcess(v4); /*0x630130*/
  }
  SpotlightRadius = this->SpotlightRadius; /*0x630140*/
  if ( SpotlightRadius ) /*0x630148*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(SpotlightRadius + 4) + 16))(SpotlightRadius + 4); /*0x630151*/
    Power::TimerProcess(v6); /*0x630157*/
  }
  v7 = *(_DWORD *)&this->TimeToDie; /*0x63015c*/
  if ( v7 ) /*0x630164*/
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(v7 + 4) + 16))(v7 + 4); /*0x63016d*/
    Power::TimerProcess(v8); /*0x630173*/
  }
  Checksummer::Add_float((Checksummer *)a2, *(_DWORD *)&this->__pad_E5[3]); /*0x630181*/
  return Power::TimerProcess(*(_DWORD *)&this->__pad_E5[7]); /*0x630194*/
}



// ==== 0x006301A0  ParticleSystemClass::ddtor  this=ParticleSystemClass  sig=csp ====
int __stdcall C07EFB9C::ddtor(ParticleSystemClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6301a6*/
    return -2147467261; /*0x6301a8*/
  *a2 = 237448648; /*0x6301b6*/
  a2[1] = 298949647; /*0x6301be*/
  a2[2] = -1610610249; /*0x6301c7*/
  a2[3] = unk_7E96CC; /*0x6301d0*/
  return 0; /*0x6301ad*/
}



// ==== 0x006301E0  ParticleSystemClass::ProcessFrame  this=ParticleSystemClass  sig=csp ====
void __thiscall ParticleSystemClass::ProcessFrame(ParticleSystemClass *this)
{
  this->__pad_E5[19] = 1; /*0x6301e0*/
}



// ==== 0x006301F0  ObjectClass::SetMember59  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::SetMember59(ObjectClass *this, int a2)
{
  this->q03B = a2; /*0x6301f4*/
  return a2; /*0x6301fa*/
}



// ==== 0x00630200  ParticleSystemClass::GetObjectSize  this=ParticleSystemClass  sig=csp ====
int ParticleSystemClass::GetObjectSize(ParticleSystemClass *this)
{
  return 256; /*0x630205*/
}



// ==== 0x00630210  ParticleSystemClass::GetTypeIdentifier  this=ParticleSystemClass  sig=csp ====
int ParticleSystemClass::GetTypeIdentifier(ParticleSystemClass *this)
{
  return 24; /*0x630215*/
}



// ==== 0x00630220  ParticleSystemClass::Stub  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::Stub(ParticleSystemClass *this)
{
  return (int)this->Type; /*0x630226*/
}



// ==== 0x00630230  ParticleSystemClass::ddtor  this=ParticleSystemClass  sig=csp ====
void *__thiscall ParticleSystemClass::ddtor(ParticleSystemClass *this, char a2)
{
  ParticleSystemClass *v4; // [esp+0h] [ebp-4h]

  DestructParticleSystemClass(v4, (int)this); /*0x630233*/
  if ( (a2 & 1) != 0 ) /*0x63023d*/
    __3_YAXPAX_Z(this); /*0x630240*/
  return this; /*0x63024a*/
}



// ==== 0x00630250  VectorClass::PushBackCopy  this=VectorClass  sig=csp ====
int __thiscall VectorClass::PushBackCopy(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x630253*/
  result = this->Count; /*0x630256*/
  if ( result < Capacity /*0x63027d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vtable0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (_BYTE)result) )
  {
    result = this->Count; /*0x630285*/
    Items = this->Items; /*0x630288*/
    this->Count = result + 1; /*0x63028e*/
    *(_DWORD *)(Items + 4 * result) = *a2; /*0x630298*/
    LOBYTE(result) = 1; /*0x63029b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x63027f*/
  }
  return result; /*0x630281*/
}



// ==== 0x006302A0  ParticleSystemClass::resetSystemState  this=VectorClass  sig=csp ====
_DWORD *__thiscall ParticleSystemClass::resetSystemState(ParticleSystemClass *this, int a2, int a3)
{
  this->? = 0; /*0x6302ab*/
  this->? = (void *)a2; /*0x6302ae*/
  LOBYTE(this->?) = 1; /*0x6302b1*/
  BYTE1(this->?) = 0; /*0x6302b5*/
  this->ObjectClass = &VectorClass<ParticleClass *>::`vftable'; /*0x6302b8*/
  if ( a2 ) /*0x6302be*/
  {
    if ( a3 ) /*0x6302c6*/
    {
      this->? = (void *)a3; /*0x6302c8*/
      return &this->ObjectClass; /*0x6302ce*/
    }
    this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x6302dd*/
    BYTE1(this->?) = 1; /*0x6302e0*/
  }
  return &this->ObjectClass; /*0x6302cd*/
}



// ==== 0x006302F0  sub_6302F0  this=-  sig=ida-proto ====
int sub_6302F0()
{
  dword_AC4AA0 = 0; /*0x6302f2*/
  dword_AC4AA4 = 0; /*0x6302f7*/
  dword_AC4AA8 = 0; /*0x6302fc*/
  dword_AC4AAC = 0; /*0x630301*/
  return 0; /*0x630306*/
}



// ==== 0x00630310  DecodeFrameSHP  this=-  sig=csp ====
_DWORD *__fastcall SHP_DecodeFrame(int a1, int a2, int a3, size_t Size)
{
  size_t v6; // ebp
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // ebx
  int v15; // ebx
  _BYTE *v16; // ebp
  size_t v17; // esi
  unsigned __int8 v18; // bl
  char *v19; // ecx
  char v20; // al
  char v21; // bl
  unsigned int v22; // edi
  unsigned __int8 *v23; // ebp
  unsigned __int8 *v24; // ebx
  int v25; // esi
  int v26; // edx
  int v27; // eax
  int v28; // edi
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // esi
  int v32; // ebp
  unsigned __int8 v33; // bl
  _BYTE *v34; // eax
  bool v35; // cf
  unsigned __int8 *v36; // eax
  char v37; // bl
  unsigned int i; // eax
  unsigned __int8 *v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // ebp
  unsigned __int8 v42; // cl
  _BYTE *v43; // eax
  unsigned __int8 *v44; // eax
  char *v45; // edi
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int8 *v48; // [esp+30h] [ebp-8B4h]
  _BYTE *v50; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v51; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v52; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v53; // [esp+38h] [ebp-8ACh]
  unsigned int v54; // [esp+3Ch] [ebp-8A8h]
  _DWORD *v55; // [esp+40h] [ebp-8A4h]
  int v56; // [esp+44h] [ebp-8A0h]
  int v57; // [esp+44h] [ebp-8A0h]
  int v58; // [esp+44h] [ebp-8A0h]
  char v59; // [esp+48h] [ebp-89Ch]
  char v60; // [esp+48h] [ebp-89Ch]
  size_t v61; // [esp+4Ch] [ebp-898h]
  unsigned int v62; // [esp+4Ch] [ebp-898h]
  int v63; // [esp+50h] [ebp-894h]
  int v65[3]; // [esp+58h] [ebp-88Ch] BYREF
  _BYTE v66[4]; // [esp+64h] [ebp-880h] BYREF
  unsigned __int16 v67; // [esp+68h] [ebp-87Ch]
  unsigned __int16 v68; // [esp+6Ah] [ebp-87Ah]
  unsigned __int16 v69; // [esp+6Ch] [ebp-878h]
  int v70; // [esp+6Eh] [ebp-876h]
  unsigned __int8 v71; // [esp+A5h] [ebp-83Fh]
  int v72; // [esp+A6h] [ebp-83Eh]
  _BYTE v73[2048]; // [esp+E4h] [ebp-800h] BYREF
  _UNKNOWN *retaddr; // [esp+8E4h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)a1 + 20))(0) ) /*0x630328*/
    return 0; /*0x63033b*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 28))(a1, 1); /*0x630344*/
  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v66, 128); /*0x630355*/
  if ( v66[0] != 10 && v66[1] != 5 && v66[3] != 8 ) /*0x63036b*/
    return 0; /*0x630379*/
  v6 = v71 * (unsigned __int16)v72; /*0x6303ca*/
  v7 = v69 - v67 + 1; /*0x6303cd*/
  v8 = (unsigned __int16)v70 - v68 + 1; /*0x6303ce*/
  v54 = v7; /*0x6303d7*/
  v61 = v6; /*0x6303dd*/
  v9 = (v71 != 1) + 1; /*0x6303e1*/
  if ( a3 ) /*0x6303e3*/
  {
    if ( (int)(Size / v7 - 1) < v8 ) /*0x6303f7*/
      v8 = Size / v7 - 1; /*0x6303f9*/
    Buffer::Init(v65, a3, Size); /*0x630408*/
    v10 = __2_YAPAXI_Z(0x20u); /*0x63040f*/
    v11 = v10; /*0x630414*/
    if ( v10 ) /*0x63041d*/
    {
      v10[4] = v9; /*0x63041f*/
      v10[3] = 0; /*0x630429*/
      v10[1] = v54; /*0x630438*/
      v10[2] = v8; /*0x63043b*/
      *v10 = &XSurface_Vtable; /*0x63043e*/
      Buffer::Init(v10 + 5, (int)v65, v54 * v8 * v9); /*0x630444*/
      v12 = v11; /*0x630449*/
      *v11 = &BSurface_Vtable; /*0x63044f*/
      v55 = v11; /*0x630455*/
    }
    else
    {
      v55 = 0; /*0x630460*/
      v12 = 0; /*0x630464*/
    }
    Vector::Clear((int)v65); /*0x630459*/
  }
  else
  {
    v13 = __2_YAPAXI_Z(0x20u); /*0x630473*/
    v14 = v13; /*0x630478*/
    if ( !v13 ) /*0x63047f*/
      return 0; /*0x6304c8*/
    v13[4] = v9; /*0x630481*/
    v13[1] = v54; /*0x630494*/
    v13[2] = v8; /*0x630497*/
    v13[3] = 0; /*0x63049a*/
    *v13 = &XSurface_Vtable; /*0x6304a1*/
    Buffer::Init(v13 + 5, 0, v54 * v8 * v9); /*0x6304a7*/
    *v14 = &BSurface_Vtable; /*0x6304ac*/
    v12 = v14; /*0x6304b2*/
    v55 = v14; /*0x6304b4*/
  }
  if ( !v12 ) /*0x6304ba*/
    return 0; /*0x6304ba*/
  v15 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v12 + 92))(v12, 0, 0); /*0x6304d8*/
  v56 = v15; /*0x6304dc*/
  if ( v15 ) /*0x6304e0*/
  {
    v48 = v73; /*0x6304f1*/
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630504*/
    v63 = v15; /*0x63050e*/
    if ( v71 == 3 ) /*0x630514*/
    {
      v16 = __2_YAPAXI_Z(v6); /*0x630520*/
      v50 = v16; /*0x630527*/
      if ( !v16 ) /*0x63052b*/
      {
        (*(void (__thiscall **)(_DWORD *))(*v12 + 96))(v12); /*0x630531*/
        (*(void (__thiscall **)(_DWORD *, int))*v12)(v12, 1); /*0x63053a*/
        return 0; /*0x630548*/
      }
      if ( v8 ) /*0x63054d*/
      {
        v57 = v8; /*0x630553*/
        do /*0x63067e*/
        {
          v17 = 0; /*0x630557*/
          do /*0x6305ea*/
          {
            v18 = *v48; /*0x630568*/
            v19 = (char *)++v48; /*0x63056a*/
            if ( v48 >= (unsigned __int8 *)&retaddr ) /*0x630571*/
            {
              (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630584*/
              v48 = v73; /*0x63058e*/
              v19 = v73; /*0x630592*/
            }
            if ( (v18 & 0xC0) == 0xC0 ) /*0x63059a*/
            {
              v20 = *v19; /*0x63059c*/
              v21 = v18 & 0x3F; /*0x63059e*/
              v59 = *v19; /*0x6305ab*/
              v48 = (unsigned __int8 *)(v19 + 1); /*0x6305af*/
              if ( v19 + 1 >= (char *)&retaddr ) /*0x6305b3*/
              {
                (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6305c6*/
                v20 = v59; /*0x6305d0*/
                v48 = v73; /*0x6305d4*/
              }
              do /*0x6305de*/
              {
                v16[v17++] = v20; /*0x6305d8*/
                --v21; /*0x6305dc*/
              }
              while ( v21 ); /*0x6305de*/
            }
            else
            {
              v16[v17++] = v18; /*0x6305e2*/
            }
          }
          while ( v17 < v61 ); /*0x6305ea*/
          v22 = 0; /*0x6305fb*/
          if ( v54 ) /*0x630604*/
          {
            v23 = &v16[(unsigned __int16)v72]; /*0x63060a*/
            v24 = &v50[2 * (unsigned __int16)v72]; /*0x63060c*/
            do /*0x63066f*/
            {
              v25 = (unsigned __int8)v50[v22]; /*0x63061e*/
              v26 = *v23; /*0x630626*/
              ++v22; /*0x630629*/
              v27 = (int)*v24 >> g_BitMask_Red; /*0x63062a*/
              ++v23; /*0x630632*/
              ++v24; /*0x630633*/
              v63 += 2; /*0x63065f*/
              *(_WORD *)(v63 - 2) = (v25 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x630665*/
                                  | (v26 >> g_BitMask_Blue << g_BitMask_Green)
                                  | (v27 << g_BitShift_Blue);
            }
            while ( v22 < v54 ); /*0x63066f*/
            v16 = v50; /*0x630671*/
          }
          --v57; /*0x63067a*/
        }
        while ( v57 ); /*0x63067e*/
        v12 = v55; /*0x630684*/
      }
      __3_YAXPAX_Z(v16); /*0x630689*/
      v28 = a1; /*0x630690*/
      (*(void (__thiscall **)(_DWORD *))(*v12 + 96))(v12); /*0x630699*/
    }
    else
    {
      v29 = v54; /*0x6306a8*/
      v30 = (unsigned __int16)v72; /*0x6306ac*/
      if ( (unsigned __int16)v72 == v54 ) /*0x6306b3*/
      {
        v40 = v54 * v8; /*0x630834*/
        v41 = 0; /*0x630839*/
        v62 = v40; /*0x63083b*/
        while ( v41 < v40 ) /*0x630841*/
        {
          v42 = *v48; /*0x630856*/
          v43 = v48 + 1; /*0x630858*/
          v35 = v48 + 1 < (unsigned __int8 *)&retaddr; /*0x630859*/
          v52 = *v48++; /*0x63085b*/
          if ( !v35 ) /*0x630863*/
          {
            (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630876*/
            v42 = v52; /*0x630880*/
            v48 = v73; /*0x630884*/
            v43 = v73; /*0x630888*/
          }
          if ( (v42 & 0xC0) == 0xC0 ) /*0x630892*/
          {
            v44 = v43 + 1; /*0x630897*/
            v53 = v42 & 0x3F; /*0x630898*/
            v60 = *(v44 - 1); /*0x6308a6*/
            v48 = v44; /*0x6308ac*/
            if ( v44 >= (unsigned __int8 *)&retaddr ) /*0x6308b0*/
            {
              (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6308c3*/
              v48 = v73; /*0x6308cd*/
            }
            v45 = (char *)(v15 + v41); /*0x6308de*/
            LOBYTE(v15) = v60; /*0x6308e1*/
            BYTE1(v15) = v60; /*0x6308e9*/
            v46 = v15 << 16; /*0x6308f1*/
            LOWORD(v46) = v15; /*0x6308f4*/
            v15 = v56; /*0x6308f7*/
            v47 = v53 >> 2; /*0x6308fb*/
            memset32(v45, v46, v47); /*0x6308fe*/
            v41 += v53; /*0x630905*/
            memset(&v45[4 * v47], v46, v53 & 3); /*0x630907*/
            v40 = v62; /*0x630909*/
          }
          else
          {
            *(_BYTE *)(v15 + v41++) = v42; /*0x63090f*/
          }
        }
        v12 = v55; /*0x63091b*/
        v28 = a1; /*0x63091f*/
        (*(void (__thiscall **)(_DWORD *))(*v55 + 96))(v55); /*0x630927*/
      }
      else
      {
        v31 = 0; /*0x6306b9*/
        v51 = 0; /*0x6306bb*/
        if ( v8 ) /*0x6306c2*/
        {
          v32 = v15; /*0x6306c8*/
          v58 = v8; /*0x6306ca*/
          do /*0x6307ad*/
          {
            v31 = 0; /*0x6306ce*/
            if ( v30 ) /*0x6306d2*/
            {
              do /*0x63079c*/
              {
                v33 = *v48; /*0x6306e7*/
                v34 = v48 + 1; /*0x6306e9*/
                v35 = v48 + 1 < (unsigned __int8 *)&retaddr; /*0x6306ea*/
                v51 = *v48++; /*0x6306ec*/
                if ( !v35 ) /*0x6306f4*/
                {
                  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630707*/
                  v29 = v54; /*0x630711*/
                  v48 = v73; /*0x630715*/
                  v34 = v73; /*0x630719*/
                }
                if ( (v33 & 0xC0) == 0xC0 ) /*0x630723*/
                {
                  v36 = v34 + 1; /*0x630728*/
                  v51 = v33 & 0x3F; /*0x630729*/
                  v37 = *(v36 - 1); /*0x63072d*/
                  v48 = v36; /*0x630737*/
                  if ( v36 >= (unsigned __int8 *)&retaddr ) /*0x63073d*/
                  {
                    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630750*/
                    v29 = v54; /*0x63075a*/
                    v48 = v73; /*0x63075e*/
                  }
                  for ( i = 0; i < v51; ++i ) /*0x63076e*/
                  {
                    if ( i + v31 < v29 ) /*0x630775*/
                      *(_BYTE *)(i + v32 + v31) = v37; /*0x63077a*/
                  }
                  v31 += v51; /*0x630782*/
                }
                else if ( v31 < v29 ) /*0x630788*/
                {
                  *(_BYTE *)(v31 + v32) = v33; /*0x63078a*/
                  ++v31; /*0x63078d*/
                }
                v30 = (unsigned __int16)v72; /*0x630795*/
              }
              while ( v31 < (unsigned __int16)v72 ); /*0x63079c*/
            }
            v32 += v29; /*0x6307a6*/
            --v58; /*0x6307a9*/
          }
          while ( v58 ); /*0x6307ad*/
        }
        v39 = v48; /*0x6307b3*/
        if ( v31 == v29 ) /*0x6307b9*/
        {
          v28 = a1; /*0x6307bd*/
          v39 = v48 + 1; /*0x6307c1*/
          v51 = *v48; /*0x6307cb*/
          if ( v48 + 1 >= (unsigned __int8 *)&retaddr ) /*0x6307cf*/
          {
            (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6307e2*/
            v39 = v73; /*0x6307f0*/
          }
        }
        else
        {
          v28 = a1; /*0x6307f4*/
        }
        if ( (v51 & 0xC0) == 0xC0 && v39 + 1 >= (unsigned __int8 *)&retaddr ) /*0x63080e*/
          (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v28 + 36))(v28, v73, 2048); /*0x630821*/
        v12 = v55; /*0x630824*/
        (*(void (__thiscall **)(_DWORD *))(*v55 + 96))(v55); /*0x63082c*/
      }
    }
  }
  else
  {
    v28 = a1; /*0x63092c*/
  }
  if ( a2 ) /*0x630936*/
  {
    if ( v71 == 1 ) /*0x630940*/
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v28 + 40))(v28, -768, 2); /*0x63094d*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v28 + 36))(v28, a2, 768); /*0x63095a*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 52))(v28); /*0x630961*/
  return v12; /*0x63032f*/
}



// ==== 0x00630980  sub_630980  this=-  sig=ida-proto ====
int sub_630980()
{
  dword_AC4AB8 = 0; /*0x630982*/
  dword_AC4ABC = 0; /*0x630987*/
  dword_AC4AC0 = 0; /*0x63098c*/
  dword_AC4AC4 = 0; /*0x630991*/
  return 0; /*0x630996*/
}



// ==== 0x006309A0  sub_6309A0  this=-  sig=ida-proto ====
void sub_6309A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6309ac*/
  dbl_AC4AD0 = Math::Sqrt(v0 + v0); /*0x6309be*/
}



// ==== 0x006309D0  sub_6309D0  this=-  sig=ida-proto ====
void sub_6309D0()
{
  dbl_AC4B20 = dbl_AC4AD0 / 60.0; /*0x6309dc*/
}



// ==== 0x006309F0  sub_6309F0  this=-  sig=ida-proto ====
void sub_6309F0()
{
  dbl_AC4B08 = 1.0 / dbl_AC4B20; /*0x6309fc*/
}



// ==== 0x00630A10  sub_630A10  this=-  sig=ida-proto ====
void sub_630A10()
{
  dbl_AC4B00 = 0.0174532925199433 * 45.0; /*0x630a1c*/
}



// ==== 0x00630A30  sub_630A30  this=-  sig=ida-proto ====
void sub_630A30()
{
  dbl_AC4AD8 = 0.0174532925199433 * 60.0; /*0x630a3c*/
}



// ==== 0x00630A50  sub_630A50  this=-  sig=ida-proto ====
void sub_630A50()
{
  dbl_AC4AB0 = 0.0174532925199433 * 90.0; /*0x630a5c*/
}



// ==== 0x00630A70  sub_630A70  this=-  sig=ida-proto ====
__int64 sub_630A70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4AB0 - dbl_AC4AD8); /*0x630a82*/
  result = Math::RoundToInt(v0 * dbl_AC4AD0 * 0.5); /*0x630a96*/
  dword_AC4B28 = result; /*0x630a9b*/
  return result; /*0x630aa0*/
}



// ==== 0x00630AB0  sub_630AB0  this=-  sig=ida-proto ====
void sub_630AB0()
{
  dbl_AC4AE0 = Math::ArcTan((double)dword_AC4B28 * 0.00390625); /*0x630ac7*/
}



// ==== 0x00630AE0  sub_630AE0  this=-  sig=ida-proto ====
void sub_630AE0()
{
  dbl_AC4AF8 = Math::ArcTan((double)(2 * dword_AC4B28) / dbl_AC4AD0); /*0x630b02*/
}



// ==== 0x00630B10  sub_630B10  this=-  sig=ida-proto ====
__int64 sub_630B10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4B28) + 0.5); /*0x630b2b*/
  dword_AC4B1C = result; /*0x630b30*/
  return result; /*0x630b36*/
}



// ==== 0x00630B40  sub_630B40  this=-  sig=ida-proto ====
int sub_630B40()
{
  word_AC4AC8 = 0; /*0x630b42*/
  word_AC4ACA = 0; /*0x630b48*/
  return 0; /*0x630b4e*/
}



// ==== 0x00630B50  sub_630B50  this=-  sig=ida-proto ====
int sub_630B50()
{
  dword_AC4AE8 = 0; /*0x630b52*/
  dword_AC4AEC = 0; /*0x630b57*/
  dword_AC4AF0 = 0; /*0x630b5c*/
  return 0; /*0x630b61*/
}



// ==== 0x00630B70  sub_630B70  this=-  sig=ida-proto ====
int sub_630B70()
{
  dword_AC4B18 = 0; /*0x630b75*/
  dword_AC4B10 = 128; /*0x630b7f*/
  dword_AC4B14 = 128; /*0x630b84*/
  return 128; /*0x630b89*/
}



// ==== 0x00630B90  Network::resetConnectionState  this=Network  sig=csp ====
bool __thiscall Network::resetConnectionState(Network *this)
{
  HWND Dialog; // eax
  TechnoTypeClass *v3; // ecx
  int v5; // [esp+0h] [ebp-4h]

  Dialog = (HWND)CreateDialog(0xEEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PhoneEditorDialogProc, 0); /*0x630b9f*/
  this->Network_field_0x0 = (int)Dialog; /*0x630ba6*/
  if ( Dialog ) /*0x630ba8*/
  {
    LOBYTE(this->Network_field_0x8) = 0; /*0x630bae*/
    this->Network_field_0x4 = (void *)-1; /*0x630bb2*/
    SetWindowLongA(Dialog, 8, (LONG)this); /*0x630bb9*/
    PhoneEditor::PopulateList((PhoneEditor *)this); /*0x630bc1*/
    Dialog::Show((Dialog *)this->Network_field_0x0); /*0x630bc8*/
    while ( (int)this->Network_field_0x4 < 0 ) /*0x630bd2*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x630bdb*/
        break; /*0x630bdb*/
      LOBYTE(v3) = 0; /*0x630bdd*/
      ScreenSaver::Process(v3, v5); /*0x630bdf*/
    }
    Dialog::Destroy((Dialog *)this->Network_field_0x0); /*0x630bed*/
    if ( LOBYTE(this->Network_field_0x8) == 1 ) /*0x630bf6*/
      SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x630bfd*/
  }
  return this->Network_field_0x4 == (void *)1; /*0x630c05*/
}



// ==== 0x00630C10  PhoneEditorDialogProc  this=-  sig=csp ====
int __stdcall PhoneEditorDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  HWND v6; // eax
  LRESULT v7; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  HWND v10; // esi
  HWND v11; // esi

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x630c29*/
  if ( !result ) /*0x630c30*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x630c46*/
    if ( a2 == 273 ) /*0x630c48*/
    {
      if ( (unsigned __int16)a3 > 0x5E0u ) /*0x630cbe*/
      {
        if ( (unsigned __int16)a3 == 1508 ) /*0x630e66*/
        {
          if ( !HIWORD(a3) ) /*0x630e82*/
            UI_Pop_631500(WindowLongA); /*0x630e89*/
        }
        else if ( (unsigned __int16)a3 == 1633 && !HIWORD(a3) ) /*0x630e6d*/
        {
          UI_Pop(WindowLongA); /*0x630e74*/
          return 0; /*0x630e7f*/
        }
      }
      else
      {
        switch ( (unsigned __int16)a3 ) /*0x630cc4*/
        {
          case 0x5E0u: /*0x630cc4*/
            if ( HIWORD(a3) == 1 ) /*0x630dda*/
            {
              DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1504); /*0x630dee*/
              v10 = DlgItem; /*0x630df0*/
              if ( DlgItem ) /*0x630df4*/
              {
                if ( SendMessageA(DlgItem, 0x18Bu, 0, 0) > 0 ) /*0x630e0e*/
                {
                  dword_A8DABC = SendMessageA(v10, 0x188u, 0, 0); /*0x630e1f*/
                  if ( (int)dword_A8DABC > -1 ) /*0x630e24*/
                  {
                    v11 = GetDlgItem(*(HWND *)WindowLongA, 1509); /*0x630e36*/
                    SendMessageA(v11, 0x4B4u, 0, *((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x630e4f*/
                    SetFocus(v11); /*0x630e52*/
                    return 0; /*0x630e5e*/
                  }
                }
              }
            }
            break;
          case 1u: /*0x630cc4*/
            if ( !HIWORD(a3) && (unsigned __int8)UI_Get_630EA0(WindowLongA) == 1 ) /*0x630dbe*/
            {
              *(_DWORD *)(WindowLongA + 4) = 1; /*0x630dc4*/
              return 0; /*0x630dd1*/
            }
            break;
          case 2u: /*0x630cc4*/
            if ( !HIWORD(a3) ) /*0x630d93*/
            {
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x630d9c*/
              return 0; /*0x630da9*/
            }
            break;
          default:
            if ( (unsigned __int16)a3 == 1339 && !HIWORD(a3) ) /*0x630ce3*/
            {
              v6 = GetDlgItem(*(HWND *)WindowLongA, 1504); /*0x630cfa*/
              if ( v6 ) /*0x630cfe*/
              {
                v7 = SendMessageA(v6, 0x188u, 0, 0); /*0x630d14*/
                dword_A8DABC = v7; /*0x630d19*/
                if ( v7 > -1 ) /*0x630d1e*/
                {
                  if ( v7 < (int)dword_A8DB44 && v7 < (int)--dword_A8DB44 ) /*0x630d37*/
                  {
                    do /*0x630d4f*/
                    {
                      ++v7; /*0x630d3f*/
                      *((_DWORD *)dword_A8DB38 + v7 - 1) = *((_DWORD *)dword_A8DB38 + v7); /*0x630d43*/
                    }
                    while ( v7 < (int)dword_A8DB44 ); /*0x630d4f*/
                  }
                  *(_BYTE *)(WindowLongA + 8) = 1; /*0x630d53*/
                  PhoneEditor::PopulateList((HWND *)WindowLongA); /*0x630d57*/
                  if ( dword_A8DABC == -1 ) /*0x630d63*/
                  {
                    v8 = GetDlgItem(*(HWND *)WindowLongA, 1509); /*0x630d71*/
                    if ( v8 ) /*0x630d75*/
                    {
                      SendMessageA(v8, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x630d88*/
                      return 0; /*0x630d90*/
                    }
                  }
                }
              }
            }
            break;
        }
      }
    }
    else if ( a2 == 1175 ) /*0x630c50*/
    {
      SendDlgItemMessageA(hWnd, 1509, 0xC5u, 0x14u, 0); /*0x630c6b*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0x90u, 2); /*0x630c7f*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0x79u, 150); /*0x630c93*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0, 275); /*0x630ca7*/
      return 0; /*0x630caf*/
    }
    return 0; /*0x630e8e*/
  }
  return result; /*0x630caa*/
}



// ==== 0x00630EA0  ObjectClass::UI_Get_630EA0  this=ObjectClass  sig=csp ====
char __thiscall UI_Get_630EA0(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  LRESULT v4; // eax
  int v6; // ebp
  wchar_t *StringCSF; // eax
  size_t v8; // eax
  signed int v9; // eax
  _DWORD *v10; // edx

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x630eb5*/
  SendMessageA(DlgItem, 0x4B5u, 0x15u, (LPARAM)&this->? + 1); /*0x630ec9*/
  v3 = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x630ed3*/
  v4 = SendMessageA(v3, 0x188u, 0, 0); /*0x630edf*/
  dword_A8DABC = v4; /*0x630ee4*/
  if ( v4 == -1 || strcmp((const char *)(*((_DWORD *)dword_A8DB38 + v4) + 154), (const char *)&this->? + 1) ) /*0x630eff*/
  {
    if ( !strlen((const char *)&this->? + 1) ) /*0x630f2d*/
      return 0; /*0x630f40*/
    v6 = __2_YAPAXI_Z(0xB0u); /*0x630f4b*/
    if ( !v6 ) /*0x630f52*/
      return 0; /*0x630f5b*/
    StringCSF = GetStringCSF((wchar_t *)&stru_83665C.?[3], 0, (const char *)&stru_83665C.?[6], 231); /*0x630f6d*/
    wcscpy((wchar_t *)(v6 + 112), StringCSF); /*0x630f77*/
    strcpy((char *)(v6 + 154), (const char *)&this->? + 1); /*0x630fa4*/
    *(_DWORD *)v6 = 0; /*0x630fad*/
    *(_DWORD *)(v6 + 4) = -1; /*0x630fb4*/
    *(_DWORD *)(v6 + 8) = -1; /*0x630fb7*/
    *(_DWORD *)(v6 + 12) = 0; /*0x630fba*/
    *(_DWORD *)(v6 + 16) = -1; /*0x630fc1*/
    *(_DWORD *)(v6 + 20) = 3; /*0x630fc4*/
    *(_BYTE *)(v6 + 32) = 0; /*0x630fcb*/
    if ( (int)dword_A8DB44 < dword_A8DB3C /*0x631004*/
      || (byte_A8DB41 || !dword_A8DB3C)
      && dword_A8DB48 > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DB34 + 8))(
           &dword_A8DB34,
           dword_A8DB3C + dword_A8DB48,
           0) )
    {
      v8 = dword_A8DB44++; /*0x631011*/
      *((_DWORD *)dword_A8DB38 + v8) = v6; /*0x631020*/
    }
    PhoneEditor::PopulateList((PhoneEditor *)this); /*0x631025*/
    LOBYTE(this->?) = 1; /*0x63102a*/
    v9 = 0; /*0x631034*/
    if ( (int)dword_A8DB44 <= 0 ) /*0x631038*/
    {
LABEL_17:
      v9 = -1; /*0x63104c*/
    }
    else
    {
      v10 = dword_A8DB38; /*0x63103a*/
      while ( *v10 != v6 ) /*0x631042*/
      {
        ++v9; /*0x631044*/
        ++v10; /*0x631045*/
        if ( v9 >= (int)dword_A8DB44 ) /*0x63104a*/
          goto LABEL_17; /*0x63104a*/
      }
    }
    dword_A8DABC = v9; /*0x63104f*/
  }
  return 1; /*0x630f39*/
}



// ==== 0x00631060  PhoneEditor::PopulateList  this=ObjectClass  sig=csp ====
void __thiscall PhoneEditor::PopulateList(PhoneEditor *this)
{
  HWND *v1; // edi
  HWND DlgItem; // eax
  HWND v3; // ebx
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // esi
  int v5; // eax
  signed int v6; // ebp
  unsigned __int16 v7; // si
  int v8; // esi
  WPARAM v9; // ecx
  signed int v10; // eax
  WPARAM v11; // ecx
  HWND v12; // eax
  wchar_t *StringCSF; // [esp-8h] [ebp-120h]
  LPARAM lParam; // [esp+10h] [ebp-108h] BYREF
  DeleteAndZero v16; // [esp+14h] [ebp-104h] BYREF
  wchar_t Destination[80]; // [esp+28h] [ebp-F0h] BYREF
  wchar_t Format[10]; // [esp+C8h] [ebp-50h] BYREF
  char v19; // [esp+DCh] [ebp-3Ch]

  v1 = (HWND *)this; /*0x631069*/
  Gadget::InitProperties((Gadget *)&lParam); /*0x631073*/
  DlgItem = GetDlgItem(*v1, 1504); /*0x631080*/
  v3 = DlgItem; /*0x631086*/
  if ( DlgItem ) /*0x63108a*/
  {
    v4 = SendMessageA; /*0x631090*/
    SendMessageA(DlgItem, 0x184u, 0, 0); /*0x6310a0*/
    v5 = dword_A8DB44; /*0x6310a2*/
    if ( (int)dword_A8DB44 > 1 ) /*0x6310aa*/
    {
      qsort(dword_A8DB38, dword_A8DB44, 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_631C10); /*0x6310bb*/
      v5 = dword_A8DB44; /*0x6310c0*/
    }
    v6 = 0; /*0x6310c9*/
    if ( v5 > 0 ) /*0x6310cd*/
    {
      do /*0x63124d*/
      {
        if ( wcslen((const wchar_t *)(*((_DWORD *)dword_A8DB38 + v6) + 112)) ) /*0x6310e0*/
        {
          wcsncpy(Destination, (const wchar_t *)(*((_DWORD *)dword_A8DB38 + v6) + 112), 0x14u); /*0x631114*/
          Destination[20] = 0; /*0x63111c*/
        }
        else
        {
          wcscpy(Destination, asc_82083C); /*0x6310f6*/
        }
        v7 = v4(v3, 0x4CDu, 0, (LPARAM)Destination); /*0x631132*/
        if ( strlen((const char *)(*((_DWORD *)dword_A8DB38 + v6) + 154)) ) /*0x631149*/
        {
          strncpy((char *)Format, (const char *)(*((_DWORD *)dword_A8DB38 + v6) + 154), 0x14u); /*0x63116f*/
          v19 = 0; /*0x631186*/
          swprintf(Destination, (const size_t)g_Str_Trace__hs, Format); /*0x63118e*/
        }
        else
        {
          wcscpy(Destination, asc_82083C); /*0x63115a*/
        }
        lParam = 1; /*0x63119f*/
        WideString::Reassign((void **)&v16, Destination); /*0x6311a7*/
        v8 = v7 << 16; /*0x6311b8*/
        v9 = v8; /*0x6311bb*/
        LOBYTE(v9) = v8 | 0x96; /*0x6311c1*/
        SendMessageA(v3, 0x4A8u, v9, (LPARAM)&lParam); /*0x6311cc*/
        if ( *(_DWORD *)(*((_DWORD *)dword_A8DB38 + v6) + 8) == -1 ) /*0x6311dd*/
        {
          StringCSF = GetStringCSF((wchar_t *)&stru_83665C.?[13], 0, (const char *)&stru_83665C.?[6], 321); /*0x631202*/
          swprintf(Destination, (const size_t)aS, StringCSF); /*0x63120d*/
        }
        else
        {
          swprintf( /*0x6311ea*/
            Destination,
            (const size_t)g_Str_Fmt_PctD,
            *(const wchar_t *const *)(*((_DWORD *)dword_A8DB38 + v6) + 8));
        }
        lParam = 1; /*0x63121d*/
        WideString::Reassign((void **)&v16, Destination); /*0x631226*/
        SendMessageA(v3, 0x4A8u, v8 | 0x113, (LPARAM)&lParam); /*0x63123d*/
        v4 = SendMessageA; /*0x631244*/
        ++v6; /*0x63124a*/
      }
      while ( v6 < (int)dword_A8DB44 ); /*0x63124d*/
      v1 = (HWND *)this; /*0x631253*/
    }
    if ( v4(v3, 0x18Bu, 0, 0) && (int)dword_A8DABC >= -1 ) /*0x63126f*/
    {
      v10 = v4(v3, 0x18Bu, 0, 0); /*0x63127b*/
      v11 = dword_A8DABC; /*0x63127d*/
      if ( (int)dword_A8DABC < v10 ) /*0x631285*/
      {
        if ( (int)dword_A8DABC <= -1 ) /*0x6312a0*/
          goto LABEL_24; /*0x6312a0*/
      }
      else
      {
        v11 = 0; /*0x631287*/
        dword_A8DABC = 0; /*0x631289*/
      }
      v4(v3, 0x186u, v11, 0); /*0x6312ab*/
      v12 = GetDlgItem(*v1, 1509); /*0x6312b5*/
      if ( v12 ) /*0x6312bd*/
        v4(v12, 0x4B4u, 0, *((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x6312dd*/
    }
    else
    {
      dword_A8DABC = -1; /*0x631291*/
    }
  }
LABEL_24:
  DeleteAndZero::Alt((DeleteAndZero *)&v16.DeleteAndZero_field_0x04); /*0x6312df*/
  DeleteAndZero::Alt(&v16); /*0x6312ec*/
}



// ==== 0x00631300  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_631300(ObjectClass *this)
{
  int result; // eax
  HWND v3; // esi
  HWND DlgItem; // esi

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631314*/
  v3 = (HWND)result; /*0x631316*/
  if ( result ) /*0x63131a*/
  {
    result = SendMessageA((HWND)result, 0x18Bu, 0, 0); /*0x63132c*/
    if ( result > 0 ) /*0x631330*/
    {
      result = SendMessageA(v3, 0x188u, 0, 0); /*0x63133c*/
      dword_A8DABC = result; /*0x631341*/
      if ( result > -1 ) /*0x631346*/
      {
        DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x631358*/
        SendMessageA(DlgItem, 0x4B4u, 0, *((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x631371*/
        return (int)SetFocus(DlgItem); /*0x631374*/
      }
    }
  }
  return result; /*0x63137a*/
}



// ==== 0x00631380  ObjectClass::UI_Pop  this=ObjectClass  sig=csp ====
_DWORD *__thiscall UI_Pop(ObjectClass *this)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  size_t v4; // eax
  int v5; // eax
  _DWORD *v6; // edx
  HWND DlgItem; // eax
  HWND v8; // eax
  LONG dwNewLong[31]; // [esp+Ch] [ebp-7Ch] BYREF

  result = (_DWORD *)__2_YAPAXI_Z(0xB0u); /*0x63138d*/
  v3 = result; /*0x631392*/
  if ( result ) /*0x63139b*/
  {
    *((_WORD *)result + 56) = 0; /*0x6313a5*/
    *((_BYTE *)result + 154) = 0; /*0x6313a9*/
    *result = 0; /*0x6313af*/
    result[1] = -1; /*0x6313b1*/
    result[2] = -1; /*0x6313b4*/
    result[3] = 0; /*0x6313b7*/
    result[4] = -1; /*0x6313ba*/
    result[5] = 3; /*0x6313bd*/
    *((_BYTE *)result + 32) = 0; /*0x6313c4*/
    ShowWindow((HWND)this->AbstractClass, 0); /*0x6313cb*/
    UpdateWindow(g_hWnd); /*0x6313d8*/
    if ( UI_Pop_631500_Pop((LONG)dwNewLong, (int)v3) ) /*0x6313e3*/
    {
      if ( (int)dword_A8DB44 < dword_A8DB3C /*0x631424*/
        || (byte_A8DB41 || !dword_A8DB3C)
        && dword_A8DB48 > 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DB34 + 8))(
             &dword_A8DB34,
             dword_A8DB3C + dword_A8DB48,
             0) )
      {
        v4 = dword_A8DB44++; /*0x631431*/
        *((_DWORD *)dword_A8DB38 + v4) = v3; /*0x631440*/
      }
      LOBYTE(this->?) = 1; /*0x631445*/
      PhoneEditor::PopulateList((PhoneEditor *)this); /*0x631449*/
      v5 = 0; /*0x631454*/
      if ( (int)dword_A8DB44 <= 0 ) /*0x631458*/
      {
LABEL_13:
        v5 = -1; /*0x63146c*/
      }
      else
      {
        v6 = dword_A8DB38; /*0x63145a*/
        while ( (_DWORD *)*v6 != v3 ) /*0x631462*/
        {
          ++v5; /*0x631464*/
          ++v6; /*0x631465*/
          if ( v5 >= (int)dword_A8DB44 ) /*0x63146a*/
            goto LABEL_13; /*0x63146a*/
        }
      }
      dword_A8DABC = v5; /*0x631470*/
      if ( v5 > -1 ) /*0x631475*/
      {
        DlgItem = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631485*/
        if ( DlgItem ) /*0x63148f*/
          SendMessageA(DlgItem, 0x186u, dword_A8DABC, 0); /*0x63149f*/
        v8 = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6314a9*/
        if ( v8 ) /*0x6314ad*/
        {
          SendMessageA(v8, 0x4B4u, 0, *((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x6314cc*/
          return (_DWORD *)ShowWindow((HWND)this->AbstractClass, 5); /*0x6314e0*/
        }
      }
    }
    else
    {
      __3_YAXPAX_Z(v3); /*0x6314e2*/
    }
    return (_DWORD *)ShowWindow((HWND)this->AbstractClass, 5); /*0x6314ef*/
  }
  return result; /*0x6314da*/
}



// ==== 0x00631500  ObjectClass::UI_Pop  this=ObjectClass  sig=csp ====
void __thiscall UI_Pop_631500(ObjectClass *this)
{
  HWND DlgItem; // eax
  void *v3; // eax
  void *v4; // ebp
  signed int v5; // eax
  void **v6; // edx
  HWND v7; // eax
  void *Block; // [esp+4h] [ebp-84h]
  HWND hWnd; // [esp+8h] [ebp-80h]
  LONG dwNewLong[31]; // [esp+Ch] [ebp-7Ch] BYREF

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631511*/
  hWnd = DlgItem; /*0x631519*/
  if ( DlgItem ) /*0x63151d*/
    dword_A8DABC = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x63152f*/
  if ( (int)dword_A8DABC > -1 ) /*0x63153b*/
  {
    v3 = (void *)__2_YAPAXI_Z(0xB0u); /*0x631546*/
    Block = v3; /*0x63154e*/
    if ( v3 ) /*0x631554*/
    {
      v4 = (void *)*((_DWORD *)dword_A8DB38 + dword_A8DABC); /*0x631568*/
      qmemcpy(v3, v4, 0xB0u); /*0x631577*/
      ShowWindow((HWND)this->AbstractClass, 0); /*0x63157c*/
      UpdateWindow(g_hWnd); /*0x631589*/
      if ( UI_Pop_631500_Pop((LONG)dwNewLong, (int)Block) ) /*0x631598*/
      {
        LOBYTE(this->?) = 1; /*0x6315a8*/
        qmemcpy(v4, Block, 0xB0u); /*0x6315ab*/
        PhoneEditor::PopulateList((PhoneEditor *)this); /*0x6315af*/
        v5 = 0; /*0x6315ba*/
        if ( (int)dword_A8DB44 <= 0 ) /*0x6315be*/
        {
LABEL_10:
          v5 = -1; /*0x6315d2*/
        }
        else
        {
          v6 = (void **)dword_A8DB38; /*0x6315c0*/
          while ( *v6 != v4 ) /*0x6315c8*/
          {
            ++v5; /*0x6315ca*/
            ++v6; /*0x6315cb*/
            if ( v5 >= (int)dword_A8DB44 ) /*0x6315d0*/
              goto LABEL_10; /*0x6315d0*/
          }
        }
        dword_A8DABC = v5; /*0x6315d8*/
        if ( v5 > -1 ) /*0x6315dd*/
        {
          SendMessageA(hWnd, 0x186u, v5, 0); /*0x6315f2*/
          v7 = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6315fc*/
          if ( v7 ) /*0x631604*/
            SendMessageA(v7, 0x4B4u, 0, (LPARAM)v4 + 154); /*0x631615*/
        }
      }
      ShowWindow((HWND)this->AbstractClass, 5); /*0x63161c*/
      __3_YAXPAX_Z(Block); /*0x631627*/
    }
  }
}



// ==== 0x00631640  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_631640(ObjectClass *this)
{
  HWND DlgItem; // eax
  LRESULT v3; // eax
  HWND v4; // eax

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631653*/
  if ( DlgItem ) /*0x631657*/
  {
    v3 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x631669*/
    dword_A8DABC = v3; /*0x63166e*/
    if ( v3 > -1 ) /*0x631673*/
    {
      if ( v3 < (int)dword_A8DB44 && v3 < (int)--dword_A8DB44 ) /*0x631688*/
      {
        do /*0x6316a0*/
        {
          ++v3; /*0x631690*/
          *((_DWORD *)dword_A8DB38 + v3 - 1) = *((_DWORD *)dword_A8DB38 + v3); /*0x631694*/
        }
        while ( v3 < (int)dword_A8DB44 ); /*0x6316a0*/
      }
      LOBYTE(this->?) = 1; /*0x6316a4*/
      PhoneEditor::PopulateList((PhoneEditor *)this); /*0x6316a8*/
      if ( dword_A8DABC == -1 ) /*0x6316b4*/
      {
        v4 = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6316be*/
        if ( v4 ) /*0x6316c2*/
          SendMessageA(v4, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x6316d1*/
      }
    }
  }
}



// ==== 0x006316E0  ObjectClass::UI_Pop_631500_Pop  this=ObjectClass  sig=csp ====
bool __thiscall UI_Pop_631500_Pop(ObjectClass *dwNewLong, void *a2)
{
  HWND Dialog; // eax
  TechnoTypeClass *v5; // ecx
  int v6; // [esp+0h] [ebp-8h]

  if ( !a2 ) /*0x6316ea*/
    return 0; /*0x6316ed*/
  Dialog = (HWND)CreateDialog(0xEFu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))NetworkSettingsDlgProc, 0); /*0x6316ff*/
  dwNewLong->AbstractClass = Dialog; /*0x631706*/
  if ( Dialog ) /*0x631708*/
  {
    dwNewLong->? = a2; /*0x63170e*/
    dwNewLong->? = (void *)-1; /*0x631711*/
    SetWindowLongA(Dialog, 8, (LONG)dwNewLong); /*0x631718*/
    UI_Pop_631500_Pop_Pop(dwNewLong); /*0x631720*/
    Dialog::Show((Dialog *)dwNewLong->AbstractClass); /*0x631727*/
    while ( (int)dwNewLong->? < 0 ) /*0x631731*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x63173a*/
        break; /*0x63173a*/
      LOBYTE(v5) = 0; /*0x63173c*/
      ScreenSaver::Process(v5, v6); /*0x63173e*/
    }
    Dialog::Destroy((Dialog *)dwNewLong->AbstractClass); /*0x63174c*/
  }
  return dwNewLong->? == (void *)1; /*0x6316ec*/
}



// ==== 0x00631760  NetworkSettingsDlgProc  this=-  sig=csp ====
int __stdcall NetworkSettingsDlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  LONG v6; // [esp+10h] [ebp-3F8h]
  wchar_t lParam[64]; // [esp+14h] [ebp-3F4h] BYREF
  LONG dwNewLong[221]; // [esp+94h] [ebp-374h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x63178c*/
  if ( !result ) /*0x631793*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x6317a2*/
    v6 = WindowLongA; /*0x6317aa*/
    if ( a2 == 273 ) /*0x6317ae*/
    {
      if ( (unsigned __int16)a3 > 0x5E5u ) /*0x6317ff*/
      {
        if ( (unsigned __int16)a3 == 1635 ) /*0x63190a*/
        {
          if ( HIWORD(a3) ) /*0x631986*/
          {
            SendMessageA(a4, 0xF1u, 1u, 0); /*0x631995*/
            SendDlgItemMessageA(hWnd, 1636, 0xF1u, 0, 0); /*0x6319aa*/
          }
        }
        else if ( (unsigned __int16)a3 == 1636 && HIWORD(a3) ) /*0x631913*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x631926*/
          SendDlgItemMessageA(hWnd, 1635, 0xF1u, 0, 0); /*0x63193b*/
          UpdateWindow(hWnd); /*0x631948*/
          ShowWindow(hWnd, 0); /*0x631953*/
          UpdateWindow(g_hWnd); /*0x63195c*/
          Network::sendGameEvent((LONG)dwNewLong, v6 + 12); /*0x63196d*/
          ShowWindow(hWnd, 5); /*0x631975*/
          return 0; /*0x631983*/
        }
      }
      else
      {
        switch ( (unsigned __int16)a3 ) /*0x631805*/
        {
          case 0x5E5u: /*0x631805*/
            if ( HIWORD(a3) == 1281 || HIWORD(a3) == 512 ) /*0x6318c3*/
            {
              SendMessageA(a4, 0x4B3u, 0x40u, (LPARAM)lParam); /*0x6318dc*/
              WideString::Trim(lParam); /*0x6318e2*/
              SendMessageA(a4, 0x4B2u, 0, (LPARAM)lParam); /*0x6318f4*/
              return 0; /*0x631902*/
            }
            break;
          case 1u: /*0x631805*/
            if ( !HIWORD(a3) ) /*0x63188c*/
            {
              Network_Set(); /*0x631895*/
              *(_DWORD *)(v6 + 4) = 1; /*0x6318a1*/
              return 0; /*0x6318b1*/
            }
            break;
          case 2u: /*0x631805*/
            if ( !HIWORD(a3) ) /*0x63186d*/
            {
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x631879*/
              return 0; /*0x631889*/
            }
            break;
          default:
            if ( (unsigned __int16)a3 == 1503 && (HIWORD(a3) == 1281 || HIWORD(a3) == 512) ) /*0x63182b*/
            {
              SendMessageA(a4, 0x4B5u, 0x40u, (LPARAM)lParam); /*0x631844*/
              String::Trim((char *)lParam); /*0x63184a*/
              SendMessageA(a4, 0x4B4u, 0, (LPARAM)lParam); /*0x63185c*/
              return 0; /*0x63186a*/
            }
            break;
        }
      }
    }
    else if ( a2 == 1175 ) /*0x6317b6*/
    {
      SendDlgItemMessageA(hWnd, 1509, 0xC5u, 0x14u, 0); /*0x6317d1*/
      SendDlgItemMessageA(hWnd, 1503, 0xC5u, 0x14u, 0); /*0x6317e2*/
      return 0; /*0x6317f0*/
    }
    return 0; /*0x6319b0*/
  }
  return result; /*0x6317e4*/
}



// ==== 0x006319C0  ObjectClass::Network_Set  this=ObjectClass  sig=csp ====
void __thiscall Network_Set(ObjectClass *this)
{
  HWND DlgItem; // eax
  wchar_t *StringCSF; // eax
  HWND v4; // eax
  HWND v5; // eax

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6319d4*/
  if ( DlgItem ) /*0x6319de*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)this->? + 112); /*0x6319ef*/
    if ( wcslen((const wchar_t *)this->? + 56) ) /*0x6319f8*/
    {
      _wcsupr((wchar_t *)this->? + 56); /*0x631a0b*/
    }
    else
    {
      StringCSF = GetStringCSF((wchar_t *)&stru_83665C.?[3], 0, (const char *)&stru_83665C.?[6], 757); /*0x631a26*/
      wcscpy((wchar_t *)this->? + 56, StringCSF); /*0x631a33*/
    }
  }
  Debug::Log(); /*0x631a47*/
  v4 = GetDlgItem((HWND)this->AbstractClass, 1503); /*0x631a58*/
  if ( v4 ) /*0x631a5c*/
    SendMessageA(v4, 0x4B5u, 0x15u, (LPARAM)this->? + 154); /*0x631a70*/
  Debug::Log(); /*0x631a81*/
  v5 = GetDlgItem((HWND)this->AbstractClass, 1636); /*0x631a92*/
  if ( v5 && SendMessageA(v5, 0xF0u, 0, 0) == 1 ) /*0x631aa7*/
  {
    qmemcpy(this->?, &this->?, 0x70u); /*0x631ab9*/
  }
  else
  {
    *(_DWORD *)this->? = 0; /*0x631ac3*/
    *((_DWORD *)this->? + 1) = -1; /*0x631acc*/
    *((_DWORD *)this->? + 2) = -1; /*0x631ad2*/
    *((_DWORD *)this->? + 3) = 0; /*0x631ad8*/
    *((_DWORD *)this->? + 4) = -1; /*0x631ae2*/
    *((_DWORD *)this->? + 5) = 3; /*0x631ae8*/
    *((_BYTE *)this->? + 32) = 0; /*0x631af2*/
  }
  Debug::Log(); /*0x631b06*/
}



// ==== 0x00631B20  ObjectClass::UI_Pop_631500_Pop_Pop  this=ObjectClass  sig=csp ====
int __thiscall UI_Pop_631500_Pop_Pop(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  _DWORD *vtable2; // esi
  HWND v5; // eax
  int result; // eax
  char v7; // [esp+13h] [ebp-1h]

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x631b36*/
  SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)this->? + 112); /*0x631b4d*/
  v3 = GetDlgItem((HWND)this->AbstractClass, 1503); /*0x631b58*/
  SendMessageA(v3, 0x4B4u, 0, (LPARAM)this->? + 154); /*0x631b6c*/
  vtable2 = this->?; /*0x631b6e*/
  if ( !*vtable2 || vtable2[1] == -1 || vtable2[2] == -1 ) /*0x631b83*/
  {
    v7 = 0; /*0x631ba3*/
    qmemcpy(&this->?, &dword_A8DAC0, 0x70u); /*0x631ba8*/
  }
  else
  {
    qmemcpy(&this->?, vtable2, 0x70u); /*0x631b8d*/
    v7 = 1; /*0x631b8f*/
  }
  v5 = GetDlgItem((HWND)this->AbstractClass, 1636); /*0x631bb9*/
  if ( v5 ) /*0x631bbd*/
    SendMessageA(v5, 0xF1u, v7 == 1, 0); /*0x631bd4*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1635); /*0x631bdf*/
  if ( result ) /*0x631be3*/
    return SendMessageA((HWND)result, 0xF1u, v7 == 0, 0); /*0x631bf9*/
  return result; /*0x631bfb*/
}



// ==== 0x00631C10  sub_631C10  this=-  sig=ida-proto ====
int __cdecl sub_631C10(int *a1, int *a2)
{
  int v2; // esi
  int v3; // edi
  int result; // eax

  v2 = *a2; /*0x631c1a*/
  v3 = *a1; /*0x631c1c*/
  result = wcscmp((const wchar_t *)(*a1 + 112), (const wchar_t *)(*a2 + 112)); /*0x631c26*/
  if ( !result ) /*0x631c30*/
    return strcmp((const char *)(v3 + 154), (const char *)(v2 + 154)); /*0x631c47*/
  return result; /*0x631c64*/
}



// ==== 0x00631C80  Pipe::Dtor  this=Pipe  sig=csp ====
int __thiscall Pipe::Dtor(Pipe *this)
{
  int result; // eax
  int Pipe_field_0x08; // ecx

  result = this->Pipe_field_0x04; /*0x631c86*/
  *(_DWORD *)this->__pad_0 = &Pipe::`vftable'; /*0x631c89*/
  if ( result ) /*0x631c91*/
    *(_DWORD *)(result + 8) = this->Pipe_field_0x08; /*0x631c96*/
  Pipe_field_0x08 = this->Pipe_field_0x08; /*0x631c99*/
  if ( Pipe_field_0x08 ) /*0x631c9e*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)Pipe_field_0x08 + 12))(Pipe_field_0x08, this->Pipe_field_0x04); /*0x631ca6*/
  this->Pipe_field_0x08 = 0; /*0x631ca9*/
  this->Pipe_field_0x04 = 0; /*0x631cac*/
  return result; /*0x631caf*/
}



// ==== 0x00631CC0  Pipe::SetDelegate  this=Pipe  sig=csp ====
int __thiscall Pipe::SetDelegate(Pipe *this, int a2)
{
  int result; // eax
  int v4; // ecx

  if ( this->Pipe_field_0x04 != a2 ) /*0x631ccb*/
  {
    if ( a2 ) /*0x631ccf*/
    {
      v4 = *(_DWORD *)(a2 + 8); /*0x631cd1*/
      if ( v4 ) /*0x631cd6*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, 0); /*0x631cdc*/
        *(_DWORD *)(a2 + 8) = 0; /*0x631cdf*/
      }
    }
    result = this->Pipe_field_0x04; /*0x631ce6*/
    if ( result ) /*0x631ceb*/
    {
      *(_DWORD *)(result + 8) = 0; /*0x631ced*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)this->Pipe_field_0x04 + 4))(this->Pipe_field_0x04); /*0x631cf9*/
    }
    this->Pipe_field_0x04 = a2; /*0x631cfe*/
    if ( a2 ) /*0x631d01*/
      *(_DWORD *)(a2 + 8) = this; /*0x631d03*/
  }
  return result; /*0x631d06*/
}



// ==== 0x00631D10  Pipe::Dispatch  this=Pipe  sig=csp ====
int __thiscall Delegate::Dispatch(Pipe *this, int a2, int a3)
{
  int Pipe_field_0x04; // ecx

  Pipe_field_0x04 = this->Pipe_field_0x04; /*0x631d10*/
  if ( Pipe_field_0x04 ) /*0x631d15*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)Pipe_field_0x04 + 16))(Pipe_field_0x04, a2, a3); /*0x631d23*/
  else
    return a3; /*0x631d29*/
}



// ==== 0x00631D30  Pipe::GetRelatedObject  this=Pipe  sig=csp ====
int __thiscall GameClass::GetRelatedObject(Pipe *this)
{
  int Pipe_field_0x04; // ecx

  Pipe_field_0x04 = this->Pipe_field_0x04; /*0x631d30*/
  if ( Pipe_field_0x04 ) /*0x631d35*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)Pipe_field_0x04 + 4))(Pipe_field_0x04); /*0x631d39*/
  else
    return 0; /*0x631d3c*/
}



// ==== 0x00631D40  BuildingDebris::Init  this=BuildingDebris  sig=csp ====
int __thiscall BuildingDebris::Init(BuildingDebris *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // ebx
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int result; // eax

  v3 = rand(); /*0x631d53*/
  *((_DWORD *)this + 12) = (v3 & 0x3F) - 31; /*0x631d69*/
  *((_DWORD *)this + 13) = ((v3 >> 5) & 0x1F) - 15; /*0x631d6c*/
  *(this + 6) = *(BuildingDebris *)&stru_83665C.?[40 * a2 + 31]; /*0x631d71*/
  *(this + 7) = *(BuildingDebris *)&stru_83665C.?[40 * a2 + 35]; /*0x631d77*/
  *(this + 8) = *(BuildingDebris *)&stru_83665C.?[40 * a2 + 39]; /*0x631d7d*/
  v4 = *(_DWORD *)&stru_83665C.?[40 * a2 + 55]; /*0x631d80*/
  if ( v4 ) /*0x631d85*/
  {
    v5 = (1 << v4) - 1; /*0x631d8e*/
    v6 = rand(); /*0x631d8f*/
    v7 = *((_DWORD *)this + 7); /*0x631d9d*/
    *((_DWORD *)this + 6) -= v6 & v5; /*0x631da0*/
    v8 = v6 >> *(_DWORD *)&stru_83665C.?[40 * a2 + 55]; /*0x631da6*/
    *((_DWORD *)this + 7) = v7 - (v8 & v5); /*0x631dae*/
    *((_DWORD *)this + 8) -= v5 & (v8 >> *(_DWORD *)&stru_83665C.?[40 * a2 + 55]); /*0x631dbd*/
  }
  v9 = *(_DWORD *)&stru_83665C.?[40 * a2 + 43]; /*0x631dc0*/
  *((_DWORD *)this + 9) = v9; /*0x631dc3*/
  *((_DWORD *)this + 1) = v9; /*0x631dc6*/
  v10 = *(_DWORD *)&stru_83665C.?[40 * a2 + 47]; /*0x631dc9*/
  *((_DWORD *)this + 10) = v10; /*0x631dcc*/
  *((_DWORD *)this + 2) = v10; /*0x631dcf*/
  v11 = *(_DWORD *)&stru_83665C.?[40 * a2 + 51]; /*0x631dd2*/
  *((_DWORD *)this + 4) = 0; /*0x631dd5*/
  *((_DWORD *)this + 11) = v11; /*0x631ddc*/
  *((_DWORD *)this + 3) = v11; /*0x631ddf*/
  v12 = *(_DWORD *)&stru_83665C.?[40 * a2 + 63] - *(_DWORD *)&stru_83665C.?[40 * a2 + 67] + 1; /*0x631dea*/
  *((_DWORD *)this + 5) = *(_DWORD *)&stru_83665C.?[40 * a2 + 67] + rand() % v12; /*0x631df7*/
  result = *(_DWORD *)&stru_83665C.?[40 * a2 + 59] & rand(); /*0x631e03*/
  *((_DWORD *)this + 14) = result; /*0x631e05*/
  return result; /*0x631e02*/
}



// ==== 0x00631E30  TacticalClass::saveConfig  this=PixelFXClass  sig=csp ====
_DWORD *__thiscall TacticalClass::saveConfig(TacticalClass *this, int a2)
{
  this->AbstractClass = &PixelFXClass::`vftable'; /*0x631e38*/
  BuildingDebris::Init((BuildingDebris *)this, a2); /*0x631e3e*/
  return &this->AbstractClass; /*0x631e45*/
}



// ==== 0x00631E50  TacticalClass::InterpolateColor  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::InterpolateColor(TacticalClass *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // edi

  v2 = a2 * this->? + this->?; /*0x631e5f*/
  this->? = v2; /*0x631e61*/
  if ( v2 > 0x2000 ) /*0x631e69*/
    this->? = 0x2000; /*0x631e6b*/
  result = this->? & 0xFFF; /*0x631e77*/
  if ( (this->? & 0x1000) != 0 ) /*0x631e7f*/
    result = 4096 - result; /*0x631e88*/
  v4 = result * this->?; /*0x631ea5*/
  this->? = (void *)((result * this->? + (4096 - result) * this->field24) >> 12); /*0x631ea8*/
  this->? = (void *)((v4 + (4096 - result) * this->field28) >> 12); /*0x631eb7*/
  this->? = (void *)((result * (int)this->? + (4096 - result) * this->TacticalClass_field_2C) >> 12); /*0x631ecb*/
  return result; /*0x631eb3*/
}



// ==== 0x00631EE0  TacticalClass::DecrementCounter  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::DecrementCounter(TacticalClass *this, int a2)
{
  int result; // eax

  result = this->field38 - a2; /*0x631ee9*/
  this->field38 = result; /*0x631eeb*/
  if ( result > 0 ) /*0x631ef0*/
  {
    LOBYTE(result) = 0; /*0x631efe*/
  }
  else
  {
    this->field38 = 0; /*0x631ef2*/
    LOBYTE(result) = 1; /*0x631ef9*/
  }
  return result; /*0x631efb*/
}



// ==== 0x00631F10  ObjectClass::method_631F10  this=ObjectClass  sig=csp ====
int __thiscall sub_631F10(_DWORD *this, int a2, int a3)
{
  this->nextObject = a2; /*0x631f18*/
  this->attachedTag = a3; /*0x631f1b*/
  return a2; /*0x631f1e*/
}



// ==== 0x00631F30  PixelFXClass::method_631F30  this=PixelFXClass  sig=csp ====
void __thiscall sub_631F30(PixelFXClass *this)
{
  this->m_0 = (int)&PixelFXClass::`vftable'; /*0x631f30*/
}



// ==== 0x00631F40  GameClass::saveGameState  this=PixelFXClass  sig=csp ====
_DWORD *__thiscall GameClass::saveGameState(GameClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &PixelFXClass::`vftable'; /*0x631f49*/
  if ( (a2 & 1) != 0 ) /*0x631f4f*/
    __3_YAXPAX_Z(this); /*0x631f52*/
  return this->__pad_0; /*0x631f5c*/
}



// ==== 0x00631FC0  ObjectClass::method_631FC0  this=ObjectClass  sig=csp ====
int __thiscall sub_631FC0(ObjectClass *this, _BYTE *a2)
{
  if ( a2 ) /*0x631fc6*/
    return EncodeVarInt((int)this, a2, 64); /*0x631fcf*/
  else
    return 0; /*0x631fc8*/
}



// ==== 0x00631FE0  ObjectClass::method_631FE0  this=ObjectClass  sig=csp ====
int __thiscall sub_631FE0(ObjectClass *this, _BYTE *a2)
{
  if ( a2 ) /*0x631fe6*/
    return EncodeVarInt((int)this + 256, a2, 64); /*0x631ff5*/
  else
    return 0; /*0x631fe8*/
}



// ==== 0x00632000  ObjectClass::System_Init  this=ObjectClass  sig=csp ====
int __thiscall System_Init_632000(TechnoClass *this, _BYTE *a2)
{
  int result; // eax

  DecodeLengthLCW((int)this, a2, 64); /*0x632009*/
  result = FindBitArrayHighestBit((int)this, 64) - 1; /*0x63201a*/
  this->reloadTimer[1] = result; /*0x63201b*/
  return result; /*0x632021*/
}



// ==== 0x00632030  ObjectClass::System_Init  this=ObjectClass  sig=csp ====
char __thiscall System_Init_632030(ObjectClass *this, _BYTE *a2)
{
  return DecodeLengthLCW((int)this + 256, a2, 64); /*0x632041*/
}



// ==== 0x00632740  BigInt::DecryptBlock  this=BigInt  sig=csp ====
int __thiscall BigInt_DecryptBlock(int this, char *Src, int a3, char *a4)
{
  int v6; // eax
  int v7; // edx
  size_t v9; // [esp-10h] [ebp-218h]
  int v10; // [esp+4h] [ebp-204h]
  _DWORD v11[64]; // [esp+8h] [ebp-200h] BYREF
  _DWORD v12[64]; // [esp+108h] [ebp-100h] BYREF

  v10 = 0; /*0x632751*/
  if ( a3 < (*(_DWORD *)(this + 512) - 1) / 8 ) /*0x632768*/
    return 0; /*0x632863*/
  do /*0x63284e*/
  {
    InitArrayWithValue(v11, 0, 64); /*0x632780*/
    memcpy(v11, Src, (*(_DWORD *)(this + 512) - 1) / 8); /*0x6327a3*/
    InitArrayWithValue(v12, 0, 64); /*0x6327b6*/
    dword_A8F8F8 = ModBigIntExp(v12, v11, (char *)(this + 256), (char *)this, 64); /*0x6327d5*/
    v9 = (*(_DWORD *)(this + 512) - 1) / 8 + 1; /*0x6327ff*/
    qmemcpy(v11, v12, sizeof(v11)); /*0x632801*/
    memcpy(a4, v11, v9); /*0x632804*/
    v6 = (*(_DWORD *)(this + 512) - 1) / 8; /*0x63282b*/
    v7 = v10 + v6 + 1; /*0x632832*/
    a3 -= v6; /*0x632838*/
    Src += v6; /*0x63283f*/
    a4 += v6 + 1; /*0x632846*/
    v10 = v7; /*0x63284a*/
  }
  while ( a3 >= v6 ); /*0x63284e*/
  return v7; /*0x632859*/
}



// ==== 0x00632870  BigInt::RSAOperation  this=ObjectClass  sig=csp ====
int __thiscall BigInt_RSAOperation(int this, char *Src, int a3, char *a4)
{
  int v6; // kr00_4
  int v7; // kr08_4
  int v8; // edx
  int v9; // esi
  bool v10; // cc
  size_t v12; // [esp-Ch] [ebp-318h]
  int v13; // [esp+8h] [ebp-304h]
  _DWORD v14[64]; // [esp+Ch] [ebp-300h] BYREF
  _DWORD v15[64]; // [esp+10Ch] [ebp-200h] BYREF
  _DWORD v16[64]; // [esp+20Ch] [ebp-100h] BYREF

  v13 = 0; /*0x632884*/
  InitArrayWithValue(v14, 0, 64); /*0x632888*/
  if ( a3 < (*(_DWORD *)(this + 512) - 1) / 8 + 1 ) /*0x6328a7*/
    return 0; /*0x6329b3*/
  do /*0x63299e*/
  {
    InitArrayWithValue(v16, 0, 64); /*0x6328c1*/
    v12 = (*(_DWORD *)(this + 512) - 1) / 8 + 1; /*0x6328e7*/
    qmemcpy(v14, v16, sizeof(v14)); /*0x6328ee*/
    memcpy(v14, Src, v12); /*0x6328f0*/
    InitArrayWithValue(v15, 0, 64); /*0x632903*/
    dword_A8F8F8 = ModBigIntExp(v15, v14, (char *)(this + 256), (char *)this, 64); /*0x632922*/
    v6 = *(_DWORD *)(this + 512) - 1; /*0x632942*/
    qmemcpy(v14, v15, sizeof(v14)); /*0x632944*/
    memcpy(a4, v14, v6 / 8); /*0x632957*/
    v7 = *(_DWORD *)(this + 512) - 1; /*0x632971*/
    v8 = -1 - v7 / 8; /*0x63297b*/
    a4 += v7 / 8; /*0x63297d*/
    Src += v7 / 8 + 1; /*0x63298a*/
    v9 = v7 / 8 + v13; /*0x63298e*/
    v10 = v8 + a3 < v7 / 8 + 1; /*0x632991*/
    a3 += v8; /*0x632993*/
    v13 = v9; /*0x63299a*/
  }
  while ( !v10 ); /*0x63299e*/
  return v9; /*0x6329a8*/
}



// ==== 0x006329C0  ObjectClass::method_6329C0  this=ObjectClass  sig=csp ====
void *__thiscall sub_6329C0(ObjectClass *this, void *a2, unsigned __int16 a3)
{
  _DWORD v5[64]; // [esp+8h] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x6329d2*/
  byte_A8F8FD = DecodeAudioSampleWord((int)v5, (unsigned __int16 *)this, a3, 0, 64); /*0x6329ee*/
  qmemcpy(a2, v5, 0x100u); /*0x632a05*/
  return a2; /*0x632a07*/
}



// ==== 0x00632A20  ObjectClass::method_632A20  this=ObjectClass  sig=csp ====
void *__thiscall sub_632A20(ObjectClass *this, void *a2, const void *a3)
{
  _DWORD v5[64]; // [esp+8h] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x632a32*/
  ModInverseBigInteger((char *)v5, this, a3, 64); /*0x632a47*/
  qmemcpy(a2, v5, 0x100u); /*0x632a5e*/
  return a2; /*0x632a60*/
}



// ==== 0x00632A70  ObjectClass::method_632A70  this=ObjectClass  sig=csp ====
int __thiscall sub_632A70(ObjectClass *this, int a2, int a3, int a4)
{
  int result; // eax

  sub_5C8E40(this, a2, a3, a4, 64); /*0x632a85*/
  result = (int)this->AbstractClass; /*0x632a8a*/
  LOBYTE(result) = (int)this->AbstractClass | 1; /*0x632a8c*/
  this->AbstractClass = (void *)result; /*0x632a8e*/
  return result; /*0x632a90*/
}



// ==== 0x00632AA0  Crypto::DecodeByte  this=Crypto  sig=csp ====
void *__thiscall Crypto::DecodeByte(Crypto *this, int a2)
{
  byte_A8F8FC = Crypto_Helper((unsigned int *)this, (unsigned int *)this, (_DWORD *)a2, 0, 64); /*0x632ab3*/
  return this; /*0x632aba*/
}



// ==== 0x00632AC0  ObjectClass::method_632AC0  this=ObjectClass  sig=csp ====
unsigned int *__thiscall sub_632AC0(ObjectClass *this, unsigned int *a2, unsigned __int16 a3)
{
  unsigned int v5[64]; // [esp+8h] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x632ad2*/
  byte_A8F8FC = sub_5C6AA0(v5, (unsigned int *)this, a3, 0, 64); /*0x632af3*/
  qmemcpy(a2, v5, 0x100u); /*0x632b0a*/
  return a2; /*0x632b0c*/
}



// ==== 0x00632B20  ObjectClass::method_632B20  this=ObjectClass  sig=csp ====
void *__thiscall sub_632B20(ObjectClass *this, void *a2, __int16 a3)
{
  _DWORD v5[64]; // [esp+8h] [ebp-100h] BYREF

  InitArrayWithValue(v5, 0, 64); /*0x632b32*/
  *(int *)((char *)&stru_A8EB00.? + 1) = sub_5C6D90((int)v5, (unsigned __int16 *)this, a3, 64); /*0x632b4c*/
  qmemcpy(a2, v5, 0x100u); /*0x632b63*/
  return a2; /*0x632b65*/
}



// ==== 0x00632B70  Buffer::RotateBufferCrypto  this=Buffer  sig=csp ====
int *__thiscall Buffer::RotateBufferCrypto(Buffer *this, int *a2, int a3)
{
  int v4[64]; // [esp+8h] [ebp-100h] BYREF

  qmemcpy(v4, this, sizeof(v4)); /*0x632b8c*/
  RotateBitBufferLeft(v4, a3, 64); /*0x632b92*/
  qmemcpy(a2, v4, 0x100u); /*0x632ba9*/
  return a2; /*0x632bab*/
}



// ==== 0x00632BC0  BigInt::Compare  this=BigInt  sig=csp ====
bool __thiscall BigInt::Compare(BigInt *this, int a2)
{
  return CompareBigIntLE((int)this, a2, 64) > 0; /*0x632bd4*/
}



// ==== 0x00632BE0  Palette::ConvertIndices  this=Palette  sig=csp ====
_BYTE *__thiscall Palette::ConvertIndices(Palette *this, int a2)
{
  int v3; // ebx
  _WORD *v4; // eax
  _WORD *v5; // esi
  __int16 *v6; // edi

  LOBYTE(this->m_Colors[0]) = 0; /*0x632be9*/
  v3 = Hash_Check_5C61E0(); /*0x632bf1*/
  v4 = Hash_Check(); /*0x632bf3*/
  if ( v3 <= 0 ) /*0x632bfa*/
    return this; /*0x632c31*/
  v5 = v4; /*0x632c02*/
  v6 = (__int16 *)this->m_Colors + 1; /*0x632c04*/
  do /*0x632c23*/
  {
    LOWORD(v4) = *v5; /*0x632c07*/
    *v6 = ShiftBigIntAndScan(&stru_A8EB00.?[1], a2, (int)v4, 64); /*0x632c19*/
    ++v5; /*0x632c1c*/
    ++v6; /*0x632c1f*/
    --v3; /*0x632c22*/
  }
  while ( v3 ); /*0x632c23*/
  return this; /*0x632c2b*/
}



// ==== 0x00632C40  CheckSum::AccumulateModulo  this=CheckSum  sig=csp ====
int __thiscall CheckSum::AccumulateModulo(CheckSum *this, __int16 a2)
{
  int v3; // edi
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  unsigned __int16 i; // dx
  bool v8; // dl

  v3 = Hash_Check_5C61E0(); /*0x632c49*/
  result = (int)Hash_Check(); /*0x632c4b*/
  this->__tail_0[0] = 0; /*0x632c52*/
  if ( v3 > 0 ) /*0x632c55*/
  {
    v5 = 2; /*0x632c5d*/
    v6 = v3; /*0x632c62*/
    do /*0x632ca3*/
    {
      *(_WORD *)&this->__tail_0[v5] += a2; /*0x632c64*/
      for ( i = *(_WORD *)(result + v5 - 2); *(_WORD *)&this->__tail_0[v5] >= i; i = *(_WORD *)(result + v5 - 2) ) /*0x632c74*/
        *(_WORD *)&this->__tail_0[v5] -= i; /*0x632c76*/
      v8 = this->__tail_0[0] || !*(_WORD *)&this->__tail_0[v5]; /*0x632c98*/
      v5 += 2; /*0x632c9d*/
      --v6; /*0x632ca0*/
      this->__tail_0[0] = v8; /*0x632ca1*/
    }
    while ( v6 ); /*0x632ca3*/
  }
  return result; /*0x632ca7*/
}



// ==== 0x00632D10  PKPipe::RelinkNode  this=PKPipe  sig=csp ====
void __thiscall LinkedList_RelinkNode(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( this->q018 != a2 ) /*0x632d1b*/
  {
    if ( a2 ) /*0x632d1f*/
    {
      v3 = *(_DWORD *)(a2 + 8); /*0x632d21*/
      if ( v3 ) /*0x632d26*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 12))(v3, 0); /*0x632d2c*/
        *(_DWORD *)(a2 + 8) = 0; /*0x632d2f*/
      }
    }
    v4 = this->q018; /*0x632d36*/
    if ( v4 ) /*0x632d3b*/
      *(_DWORD *)(v4 + 8) = 0; /*0x632d3d*/
    this->q018 = a2; /*0x632d46*/
    if ( a2 ) /*0x632d49*/
      *(_DWORD *)(a2 + 8) = this + 5; /*0x632d4e*/
    this->q01C = this; /*0x632d54*/
    this->q004 = this + 5; /*0x632d57*/
  }
}



// ==== 0x00632D60  ObjectClass::method_632D60  this=ObjectClass  sig=csp ====
int __thiscall sub_632D60(ObjectClass *this, int a2)
{
  int result; // eax
  TagClass *attachedTag; // ecx

  if ( !a2 ) /*0x632d6a*/
  {
    result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 1))(this); /*0x632d6e*/
    LOBYTE(this->?) = 0; /*0x632d71*/
  }
  this->attachedBomb = (BombClass *)a2; /*0x632d77*/
  if ( a2 ) /*0x632d7a*/
  {
    attachedTag = this->attachedTag; /*0x632d7c*/
    result = 1; /*0x632d7f*/
    LOBYTE(this->?) = 1; /*0x632d86*/
    if ( attachedTag == (TagClass *)1 ) /*0x632d89*/
    {
      result = ((*(_DWORD *)(a2 + 512) - 1) / 8 + 1) * (55 / ((*(_DWORD *)(a2 + 512) - 1) / 8) + 1); /*0x632da7*/
      this->customSound_controller = result; /*0x632daa*/
      this->q04F = result; /*0x632db0*/
    }
  }
  return result; /*0x632db6*/
}



// ==== 0x00632DC0  PKPipe::WriteEncryptedStream  this=PKPipe  sig=csp ====
int __thiscall GameClass::WriteEncryptedStream(PKPipe *this, char *Src, int a3)
{
  char *v3; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  signed int v9; // edi
  bool v10; // zf
  int v12[64]; // [esp+8h] [ebp-100h] BYREF

  v3 = Src; /*0x632dc7*/
  if ( Src && a3 >= 1 && *(_DWORD *)&this->__pad_24[20] ) /*0x632de7*/
  {
    v5 = 0; /*0x632df6*/
    if ( this->__pad_0[12] ) /*0x632df2*/
    {
      if ( *(_DWORD *)&this->__pad_24[16] ) /*0x632e01*/
      {
        v9 = this->q050; /*0x632e6f*/
        if ( v9 >= a3 ) /*0x632e7e*/
          v9 = a3; /*0x632e80*/
        memcpy(&this->__pad_24[this->u32_13C - this->q050 + 24], Src, v9); /*0x632e97*/
        v3 = &Src[v9]; /*0x632eb0*/
        v10 = this->q050 == v9; /*0x632eb2*/
        a3 -= v9; /*0x632eb4*/
        this->q050 -= v9; /*0x632ebb*/
        if ( !v10 ) /*0x632ec1*/
          return v5 + Delegate::Dispatch((Pipe *)this, (int)v3, a3); /*0x632ec1*/
        BigInt::RSAOperation( /*0x632ed6*/
          *(_DWORD *)&this->__pad_24[20],
          (char *)&this->field_3C,
          this->u32_13C,
          (char *)v12);
        GameClass::processFrame((GameClass *)&this->field_14, (int)v12, 56); /*0x632ee5*/
      }
      else
      {
        memset(v12, 0, sizeof(v12)); /*0x632e17*/
        (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&this->__pad_0[16] + 8))( /*0x632e21*/
          *(_DWORD *)&this->__pad_0[16],
          v12,
          56);
        v6 = *(_DWORD *)&this->__pad_24[20]; /*0x632e24*/
        if ( v6 ) /*0x632e29*/
          v7 = (*(_DWORD *)(v6 + 512) - 1) / 8 * (55 / ((*(_DWORD *)(v6 + 512) - 1) / 8) + 1); /*0x632e4a*/
        else
          v7 = 0; /*0x632e2b*/
        v8 = BigInt::DecryptBlock(v6, (char *)v12, v7, (char *)&this->field_3C); /*0x632e57*/
        v5 = Delegate::Dispatch((Pipe *)this, (int)&this->field_3C, v8); /*0x632e65*/
        GameClass::processFrame((GameClass *)&this->field_14, (int)v12, 56); /*0x632e6d*/
      }
      this->__pad_0[12] = 0; /*0x632eea*/
    }
    return v5 + Delegate::Dispatch((Pipe *)this, (int)v3, a3); /*0x632f0a*/
  }
  return Delegate::Dispatch((Pipe *)this, (int)Src, a3); /*0x632f02*/
}



// ==== 0x00632F90  BlowPipe::QueryInterface  this=BlowPipe  sig=csp ====
_DWORD *__thiscall BlowPipe::QueryInterface(BlowPipe *this, char a2)
{
  COMObject *BlowPipe_field_0x0C; // edi

  BlowPipe_field_0x0C = (COMObject *)this->BlowPipe_field_0x0C; /*0x632f94*/
  *(_DWORD *)this->__pad_0 = &BlowPipe::`vftable'; /*0x632f97*/
  if ( BlowPipe_field_0x0C ) /*0x632f9f*/
  {
    COMObject::Release(BlowPipe_field_0x0C); /*0x632fa3*/
    __3_YAXPAX_Z(BlowPipe_field_0x0C); /*0x632fa9*/
  }
  this->BlowPipe_field_0x0C = 0; /*0x632fb3*/
  Pipe::Dtor((Pipe *)this); /*0x632fba*/
  if ( (a2 & 1) != 0 ) /*0x632fc4*/
    __3_YAXPAX_Z(this); /*0x632fc7*/
  return this->__pad_0; /*0x632fd1*/
}



// ==== 0x00632FE0  PKPipe::loadGameState  this=PKPipe  sig=csp ====
int __thiscall GameClass::loadGameState(PKPipe *this, int a2)
{
  return (*(int (__thiscall **)(PKPipe *, int))(*(_DWORD *)this->__pad_0 + 12))(this, a2); /*0x632fea*/
}



// ==== 0x00632FF0  PKPipe::validateGameFile  this=PKPipe  sig=csp ====
_DWORD *__thiscall GameClass::validateGameFile(PKPipe *this, char a2)
{
  COMObject *v3; // ebx
  Pipe *v4; // esi

  v3 = (COMObject *)this->field_20; /*0x632ff5*/
  v4 = (Pipe *)&this->field_14; /*0x632ff8*/
  this->field_14 = (int)&BlowPipe::`vftable'; /*0x632ffd*/
  if ( v3 ) /*0x633003*/
  {
    COMObject::Release(v3); /*0x633007*/
    __3_YAXPAX_Z(v3); /*0x63300d*/
  }
  v4->Pipe_field_0x0C = 0; /*0x633017*/
  Pipe::Dtor(v4); /*0x63301e*/
  Pipe::Dtor((Pipe *)this); /*0x633025*/
  if ( (a2 & 1) != 0 ) /*0x63302f*/
    __3_YAXPAX_Z(this); /*0x633032*/
  return this->__pad_0; /*0x63303c*/
}



// ==== 0x00633050  PKStrawClass::Initialize  this=PKStrawClass  sig=csp ====
int __thiscall PKStrawClass::Initialize(PKStrawClass *this, int a2, int a3)
{
  this->q004 = a3; /*0x633060*/
  this->PKStrawClass_field_0x04 = 0; /*0x63306b*/
  this->PKStrawClass_field_0x08 = 0; /*0x63306e*/
  *((_BYTE *)this + 12) = 1; /*0x633071*/
  *((_DWORD *)this + 6) = 0; /*0x633075*/
  *((_DWORD *)this + 7) = 0; /*0x633078*/
  this->q008 = 0; /*0x63307b*/
  *((_DWORD *)this + 11) = 0; /*0x63307e*/
  *((_DWORD *)this + 12) = a2 != 0; /*0x633081*/
  *((_DWORD *)this + 5) = &BlowStraw::`vftable'; /*0x633084*/
  *((_DWORD *)this + 14) = 0; /*0x63308a*/
  *((_DWORD *)this + 79) = 0; /*0x63308d*/
  *((_DWORD *)this + 80) = 0; /*0x633093*/
  *((_DWORD *)this + 13) = a2; /*0x63309c*/
  *(_DWORD *)this->__pad_0 = &PKStraw::`vftable'; /*0x63309f*/
  PKStrawClass::RelayBlowfishKey((PKStraw *)this, (int)this + 20); /*0x6330a5*/
  return (int)this->__pad_0; /*0x6330ad*/
}



// ==== 0x006330C0  PKStraw::RelayBlowfishKey  this=PKStrawClass  sig=csp ====
void __thiscall PKStrawClass::RelayBlowfishKey(PKStraw *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( *(_DWORD *)this->__pad_18 != a2 ) /*0x6330cb*/
  {
    if ( a2 ) /*0x6330cf*/
    {
      v3 = *(_DWORD *)(a2 + 8); /*0x6330d1*/
      if ( v3 ) /*0x6330d6*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 4))(v3, 0); /*0x6330dc*/
        *(_DWORD *)(a2 + 8) = 0; /*0x6330df*/
      }
    }
    v4 = *(_DWORD *)this->__pad_18; /*0x6330e6*/
    if ( v4 ) /*0x6330eb*/
      *(_DWORD *)(v4 + 8) = 0; /*0x6330ed*/
    *(_DWORD *)this->__pad_18 = a2; /*0x6330f7*/
    *(_DWORD *)&this->__pad_18[4] = this; /*0x6330fc*/
    *(_DWORD *)&this->m_1[3] = &this->m_14; /*0x6330ff*/
    if ( a2 ) /*0x633102*/
      *(_DWORD *)(a2 + 8) = this; /*0x633104*/
  }
}



// ==== 0x00633110  PKStrawClass::SetSource  this=PKStrawClass  sig=csp ====
int __thiscall sub_633110(int this, int a2)
{
  int result; // eax

  result = a2; /*0x633110*/
  *(_DWORD *)(this + 56) = a2; /*0x633118*/
  if ( a2 ) /*0x63311b*/
    *(_BYTE *)(this + 12) = 1; /*0x63311d*/
  *(_DWORD *)(this + 316) = 0; /*0x633121*/
  *(_DWORD *)(this + 320) = 0; /*0x633127*/
  return result; /*0x63312d*/
}



// ==== 0x00633130  PKStraw::ReadEncryptedStream  this=PKStrawClass  sig=csp ====
int __thiscall GameClass::ReadEncryptedStream(PKStraw *this, char *a2, signed int Size)
{
  char *v3; // ebp
  signed int v4; // edi
  int m_38; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int m_140; // eax
  signed int v16; // [esp+10h] [ebp-104h]
  char Src[256]; // [esp+14h] [ebp-100h] BYREF

  v3 = a2; /*0x633138*/
  v4 = Size; /*0x633141*/
  if ( !a2 ) /*0x63314c*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x63314c*/
  if ( Size < 1 ) /*0x633155*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x633155*/
  m_38 = this->m_38; /*0x63315b*/
  if ( !m_38 ) /*0x633160*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x6332e5*/
  v16 = 0; /*0x633169*/
  if ( LOBYTE(this->m_C) ) /*0x633166*/
  {
    if ( this->m_34 == 1 ) /*0x63317d*/
    {
      v7 = Delegate::Invoke( /*0x6331a6*/
             (Straw *)this,
             (int)Src,
             ((*(_DWORD *)(m_38 + 512) - 1) / 8 + 1) * (55 / ((*(_DWORD *)(m_38 + 512) - 1) / 8) + 1));
      v8 = this->m_38; /*0x6331ab*/
      v9 = v7; /*0x6331ae*/
      if ( v8 ) /*0x6331b2*/
        v10 = ((*(_DWORD *)(v8 + 512) - 1) / 8 + 1) * (55 / ((*(_DWORD *)(v8 + 512) - 1) / 8) + 1); /*0x6331d4*/
      else
        v10 = 0; /*0x6331b4*/
      if ( v9 != v10 ) /*0x6331d9*/
        return 0; /*0x6331e7*/
      BigInt::RSAOperation(v8, Src, v9, (char *)&this->m_3C); /*0x6331f4*/
      GameClass::updateUI((GameClass *)&this->m_14, (int)&this->m_3C, 56); /*0x6331fc*/
    }
    else
    {
      memset(Src, 0, sizeof(Src)); /*0x63320d*/
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)this->m_10 + 8))(this->m_10, Src, 56); /*0x633217*/
      v12 = this->m_38; /*0x63321a*/
      if ( v12 ) /*0x63321f*/
        v13 = (*(_DWORD *)(v12 + 512) - 1) / 8 * (55 / ((*(_DWORD *)(v12 + 512) - 1) / 8) + 1); /*0x633240*/
      else
        v13 = 0; /*0x633221*/
      v14 = BigInt::DecryptBlock(v12, Src, v13, (char *)&this->m_3C); /*0x63324d*/
      this->m_140 = v14; /*0x633258*/
      this->m_13C = v14; /*0x63325e*/
      GameClass::updateUI((GameClass *)&this->m_14, (int)Src, 56); /*0x633268*/
    }
    v4 = Size; /*0x63326d*/
    LOBYTE(this->m_C) = 0; /*0x633274*/
  }
  m_140 = this->m_140; /*0x633278*/
  if ( m_140 > 0 ) /*0x633280*/
  {
    if ( v4 >= m_140 ) /*0x633284*/
      v4 = this->m_140; /*0x633286*/
    memcpy(a2, (char *)&this->m_3C + this->m_13C - m_140, v4); /*0x633297*/
    v3 = &a2[v4]; /*0x6332ac*/
    v16 = v4; /*0x6332b2*/
    this->m_140 -= v4; /*0x6332b6*/
    v4 = Size - v4; /*0x6332c3*/
  }
  return v16 + Delegate::Invoke((Straw *)this, (int)v3, v4); /*0x6331db*/
}



// ==== 0x00633360  PKStraw::parseGameOptions  this=PKStrawClass  sig=csp ====
int __thiscall GameClass::parseGameOptions(PKStraw *this, int a2)
{
  return (*(int (__thiscall **)(PKStraw *, int))(*(_DWORD *)this->__pad_0 + 4))(this, a2); /*0x63336a*/
}



// ==== 0x00633370  PKStraw::applyGameSettings  this=PKStrawClass  sig=csp ====
_DWORD *__thiscall GameClass::applyGameSettings(PKStraw *this, char a2)
{
  COMObject *v3; // ebx
  Straw *p_m_14; // esi

  v3 = *(COMObject **)&this->__pad_18[8]; /*0x633375*/
  p_m_14 = (Straw *)&this->m_14; /*0x633378*/
  this->m_14 = (int)&BlowStraw::`vftable'; /*0x63337d*/
  if ( v3 ) /*0x633383*/
  {
    COMObject::Release(v3); /*0x633387*/
    __3_YAXPAX_Z(v3); /*0x63338d*/
  }
  p_m_14[1].Straw_field_0x04 = 0; /*0x633397*/
  Straw::Dtor(p_m_14); /*0x63339e*/
  Straw::Dtor((Straw *)this); /*0x6333a5*/
  if ( (a2 & 1) != 0 ) /*0x6333af*/
    __3_YAXPAX_Z(this); /*0x6333b2*/
  return this->__pad_0; /*0x6333bc*/
}



// ==== 0x006333D0  sub_6333D0  this=-  sig=ida-proto ====
void sub_6333D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6333dc*/
  dbl_AC4BE8 = Math::Sqrt(v0 + v0); /*0x6333ee*/
}



// ==== 0x00633400  sub_633400  this=-  sig=ida-proto ====
void sub_633400()
{
  dbl_AC4CE8 = dbl_AC4BE8 / 60.0; /*0x63340c*/
}



// ==== 0x00633420  sub_633420  this=-  sig=ida-proto ====
void sub_633420()
{
  dbl_AC4CC0 = 1.0 / dbl_AC4CE8; /*0x63342c*/
}



// ==== 0x00633440  sub_633440  this=-  sig=ida-proto ====
void sub_633440()
{
  dbl_AC4CB8 = 0.0174532925199433 * 45.0; /*0x63344c*/
}



// ==== 0x00633460  sub_633460  this=-  sig=ida-proto ====
void sub_633460()
{
  dbl_AC4C10 = 0.0174532925199433 * 60.0; /*0x63346c*/
}



// ==== 0x00633480  sub_633480  this=-  sig=ida-proto ====
void sub_633480()
{
  dbl_AC4B68 = 0.0174532925199433 * 90.0; /*0x63348c*/
}



// ==== 0x006334A0  sub_6334A0  this=-  sig=ida-proto ====
__int64 sub_6334A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4B68 - dbl_AC4C10); /*0x6334b2*/
  result = Math::RoundToInt(v0 * dbl_AC4BE8 * 0.5); /*0x6334c6*/
  dword_AC4CF0 = result; /*0x6334cb*/
  return result; /*0x6334d0*/
}



// ==== 0x006334E0  sub_6334E0  this=-  sig=ida-proto ====
void sub_6334E0()
{
  dbl_AC4C30 = Math::ArcTan((double)dword_AC4CF0 * 0.00390625); /*0x6334f7*/
}



// ==== 0x00633510  sub_633510  this=-  sig=ida-proto ====
void sub_633510()
{
  dbl_AC4C70 = Math::ArcTan((double)(2 * dword_AC4CF0) / dbl_AC4BE8); /*0x633532*/
}



// ==== 0x00633540  sub_633540  this=-  sig=ida-proto ====
__int64 sub_633540()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4CF0) + 0.5); /*0x63355b*/
  dword_AC4CE4 = result; /*0x633560*/
  return result; /*0x633566*/
}



// ==== 0x00633570  sub_633570  this=-  sig=ida-proto ====
int sub_633570()
{
  word_AC4BE4 = 0; /*0x633572*/
  word_AC4BE6 = 0; /*0x633578*/
  return 0; /*0x63357e*/
}



// ==== 0x00633580  sub_633580  this=-  sig=ida-proto ====
int sub_633580()
{
  dword_AC4C58 = 0; /*0x633582*/
  dword_AC4C5C = 0; /*0x633587*/
  dword_AC4C60 = 0; /*0x63358c*/
  return 0; /*0x633591*/
}



// ==== 0x006335A0  sub_6335A0  this=-  sig=ida-proto ====
int sub_6335A0()
{
  dword_AC4CE0 = 0; /*0x6335a5*/
  dword_AC4CD8 = 128; /*0x6335af*/
  dword_AC4CDC = 128; /*0x6335b4*/
  return 128; /*0x6335b9*/
}



// ==== 0x006335C0  sub_6335C0  this=-  sig=ida-proto ====
int sub_6335C0()
{
  dword_AC4B70 = 0; /*0x6335c2*/
  dword_AC4B74 = 0; /*0x6335c7*/
  dword_AC4B78 = 0; /*0x6335cc*/
  dword_AC4B7C = 0; /*0x6335d1*/
  return 0; /*0x6335d6*/
}



// ==== 0x006335E0  sub_6335E0  this=-  sig=ida-proto ====
int sub_6335E0()
{
  dword_AC4B4C = 0; /*0x6335e7*/
  dword_AC4B50 = 0; /*0x6335ec*/
  byte_AC4B54 = 1; /*0x6335f1*/
  byte_AC4B55 = 0; /*0x6335f8*/
  dword_AC4B48 = (int)&DynamicVectorClass<EventClass *>::`vftable'; /*0x6335fd*/
  dword_AC4B5C = 10; /*0x633607*/
  dword_AC4B58 = 0; /*0x633611*/
  return atexit(sub_633620); /*0x63361c*/
}



// ==== 0x00633620  sub_633620  this=-  sig=ida-proto ====
void __cdecl sub_633620()
{
  if ( (byte_AC4B61 & 1) == 0 ) /*0x63362a*/
  {
    dword_AC4B48 = (int)&VectorClass<EventClass *>::`vftable'; /*0x63362e*/
    byte_AC4B61 |= 1u; /*0x633641*/
    if ( dword_AC4B4C ) /*0x633647*/
    {
      if ( byte_AC4B55 ) /*0x633651*/
      {
        __3_YAXPAX_Z(dword_AC4B4C); /*0x633654*/
        dword_AC4B4C = 0; /*0x63365c*/
      }
    }
    byte_AC4B55 = 0; /*0x633666*/
    dword_AC4B50 = 0; /*0x63366d*/
  }
}



// ==== 0x00633680  sub_633680  this=-  sig=ida-proto ====
int sub_633680()
{
  dword_AC4C9C = 0; /*0x633687*/
  dword_AC4CA0 = 0; /*0x63368c*/
  byte_AC4CA4 = 1; /*0x633691*/
  byte_AC4CA5 = 0; /*0x633698*/
  dword_AC4C98 = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x63369d*/
  dword_AC4CAC = 10; /*0x6336a7*/
  dword_AC4CA8 = 0; /*0x6336b1*/
  return atexit(sub_6336C0); /*0x6336bc*/
}



// ==== 0x006336C0  sub_6336C0  this=-  sig=ida-proto ====
void __cdecl sub_6336C0()
{
  if ( (byte_AC4B60 & 1) == 0 ) /*0x6336ca*/
  {
    dword_AC4C98 = (int)&VectorClass<PlanningNodeClass *>::`vftable'; /*0x6336ce*/
    byte_AC4B60 |= 1u; /*0x6336e1*/
    if ( dword_AC4C9C ) /*0x6336e7*/
    {
      if ( byte_AC4CA5 ) /*0x6336f1*/
      {
        __3_YAXPAX_Z(dword_AC4C9C); /*0x6336f4*/
        dword_AC4C9C = 0; /*0x6336fc*/
      }
    }
    byte_AC4CA5 = 0; /*0x633706*/
    dword_AC4CA0 = 0; /*0x63370d*/
  }
}



// ==== 0x00633720  sub_633720  this=-  sig=ida-proto ====
int sub_633720()
{
  MEMORY[0xAC4C44] = 0; /*0x633727*/
  MEMORY[0xAC4C48] = 0; /*0x63372c*/
  MEMORY[0xAC4C4C] = 1; /*0x633731*/
  MEMORY[0xAC4C4D] = 0; /*0x633738*/
  stru_AC4C40 = (int)&DynamicVectorClass<TechnoClass *>::`vftable'; /*0x63373d*/
  MEMORY[0xAC4C54] = 10; /*0x633747*/
  MEMORY[0xAC4C50] = 0; /*0x633751*/
  return atexit(sub_633760); /*0x63375c*/
}



// ==== 0x00633760  sub_633760  this=-  sig=ida-proto ====
void __cdecl sub_633760()
{
  if ( (byte_AC4B63 & 1) == 0 ) /*0x63376a*/
  {
    stru_AC4C40 = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x63376e*/
    byte_AC4B63 |= 1u; /*0x633781*/
    if ( MEMORY[0xAC4C44] ) /*0x633787*/
    {
      if ( MEMORY[0xAC4C4D] ) /*0x633791*/
      {
        __3_YAXPAX_Z(MEMORY[0xAC4C44]); /*0x633794*/
        MEMORY[0xAC4C44] = 0; /*0x63379c*/
      }
    }
    MEMORY[0xAC4C4D] = 0; /*0x6337a6*/
    MEMORY[0xAC4C48] = 0; /*0x6337ad*/
  }
}



// ==== 0x006337C0  sub_6337C0  this=-  sig=ida-proto ====
int sub_6337C0()
{
  dword_AC4B34 = 0; /*0x6337c7*/
  dword_AC4B38 = 0; /*0x6337cc*/
  byte_AC4B3C = 1; /*0x6337d1*/
  byte_AC4B3D = 0; /*0x6337d8*/
  stru_AC4B30 = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x6337dd*/
  dword_AC4B44 = 10; /*0x6337e7*/
  dword_AC4B40 = 0; /*0x6337f1*/
  return atexit(sub_633800); /*0x6337fc*/
}



// ==== 0x00633800  sub_633800  this=-  sig=ida-proto ====
void __cdecl sub_633800()
{
  if ( (byte_AC4B62 & 1) == 0 ) /*0x63380a*/
  {
    stru_AC4B30 = (int)&VectorClass<PlanningNodeClass *>::`vftable'; /*0x63380e*/
    byte_AC4B62 |= 1u; /*0x633821*/
    if ( dword_AC4B34 ) /*0x633827*/
    {
      if ( byte_AC4B3D ) /*0x633831*/
      {
        __3_YAXPAX_Z(dword_AC4B34); /*0x633834*/
        dword_AC4B34 = 0; /*0x63383c*/
      }
    }
    byte_AC4B3D = 0; /*0x633846*/
    dword_AC4B38 = 0; /*0x63384d*/
  }
}



// ==== 0x00633860  sub_633860  this=-  sig=ida-proto ====
int sub_633860()
{
  dword_AC4C1C = 0; /*0x633867*/
  dword_AC4C20 = 0; /*0x63386c*/
  byte_AC4C24 = 1; /*0x633871*/
  byte_AC4C25 = 0; /*0x633878*/
  dword_AC4C18 = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x63387d*/
  dword_AC4C2C = 10; /*0x633887*/
  dword_AC4C28 = 0; /*0x633891*/
  return atexit(sub_6338A0); /*0x63389c*/
}



// ==== 0x006338A0  sub_6338A0  this=-  sig=ida-proto ====
void __cdecl sub_6338A0()
{
  if ( (byte_AC4B62 & 2) == 0 ) /*0x6338aa*/
  {
    dword_AC4C18 = (int)&VectorClass<PlanningNodeClass *>::`vftable'; /*0x6338ae*/
    byte_AC4B62 |= 2u; /*0x6338c1*/
    if ( dword_AC4C1C ) /*0x6338c7*/
    {
      if ( byte_AC4C25 ) /*0x6338d1*/
      {
        __3_YAXPAX_Z(dword_AC4C1C); /*0x6338d4*/
        dword_AC4C1C = 0; /*0x6338dc*/
      }
    }
    byte_AC4C25 = 0; /*0x6338e6*/
    dword_AC4C20 = 0; /*0x6338ed*/
  }
}



// ==== 0x00633900  sub_633900  this=-  sig=ida-proto ====
int sub_633900()
{
  dword_AC4C7C = 0; /*0x633907*/
  dword_AC4C80 = 0; /*0x63390c*/
  byte_AC4C84 = 1; /*0x633911*/
  byte_AC4C85 = 0; /*0x633918*/
  dword_AC4C78 = (int)&DynamicVectorClass<PlanningTokenClass *>::`vftable'; /*0x63391d*/
  dword_AC4C8C = 10; /*0x633927*/
  dword_AC4C88 = 0; /*0x633931*/
  return atexit(sub_633940); /*0x63393c*/
}



// ==== 0x00633940  sub_633940  this=-  sig=ida-proto ====
void __cdecl sub_633940()
{
  if ( (byte_AC4B62 & 4) == 0 ) /*0x63394a*/
  {
    dword_AC4C78 = (int)&VectorClass<PlanningTokenClass *>::`vftable'; /*0x63394e*/
    byte_AC4B62 |= 4u; /*0x633961*/
    if ( dword_AC4C7C ) /*0x633967*/
    {
      if ( byte_AC4C85 ) /*0x633971*/
      {
        __3_YAXPAX_Z(dword_AC4C7C); /*0x633974*/
        dword_AC4C7C = 0; /*0x63397c*/
      }
    }
    byte_AC4C85 = 0; /*0x633986*/
    dword_AC4C80 = 0; /*0x63398d*/
  }
}



// ==== 0x006339A0  Camera::StubReturn  this=Camera  sig=ida-proto ====
void Camera::StubReturn()
{
  ; /*0x6339a0*/
}



// ==== 0x006339B0  TeamClass::GetLeaderIndex  this=TeamClass  sig=csp ====
int __thiscall TeamClass::GetLeaderIndex(TeamClass *this)
{
  int v1; // ecx
  int v2; // esi

  v1 = this->unknown87; /*0x6339b0*/
  v2 = *(_DWORD *)(v1 + 48); /*0x6339b7*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v1) && dword_A83D4C ) /*0x6339ca*/
    return (int)dword_A83D4C->Object_field_0x30; /*0x6339cc*/
  else
    return v2; /*0x6339d1*/
}



// ==== 0x006339E0  ToCoordPixel  this=Rect  sig=csp ====
_DWORD *__fastcall ToCoordPixel(_DWORD *a1, _DWORD *a2)
{
  char *v3; // ecx
  int v5[2]; // [esp+4h] [ebp-8h] BYREF

  Coord::To_Screen((Coord *)g_TacticalClass_Instance, a2, v5); /*0x6339f2*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x633a0d*/
  *a1 = DSurface_ViewBounds.field_0 + v5[0]; /*0x633a0f*/
  a1[1] = v3; /*0x633a11*/
  return a1; /*0x633a16*/
}



// ==== 0x00633A20  ObjectClass::method_633A20  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_633A20(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x633a24*/
  this->? = 0; /*0x633a26*/
  this->? = (void *)-1; /*0x633a29*/
  LOBYTE(this->?) = 0; /*0x633a30*/
  return &this->AbstractClass; /*0x633a33*/
}



// ==== 0x00633A40  ObjectClass::method_633A40  this=ObjectClass  sig=csp ====
int __thiscall sub_633A40(_DWORD *this, int a2)
{
  *this = a2; /*0x633a44*/
  return a2; /*0x633a46*/
}



// ==== 0x00633A50  ObjectClass::method_633A50  this=ObjectClass  sig=csp ====
int __thiscall sub_633A50(_DWORD *this, int a2)
{
  this->vtable2 = a2; /*0x633a54*/
  return a2; /*0x633a57*/
}



// ==== 0x00633A60  ObjectClass::method_633A60  this=ObjectClass  sig=csp ====
int __thiscall sub_633A60(_DWORD *this, int a2)
{
  this->vtable3 = a2; /*0x633a64*/
  return a2; /*0x633a67*/
}



// ==== 0x00633A70  ObjectClass::method_633A70  this=ObjectClass  sig=csp ====
char __thiscall sub_633A70(_BYTE *this, char a2)
{
  this->vtable4 = a2; /*0x633a74*/
  return a2; /*0x633a77*/
}



// ==== 0x00633A80  ObjectClass::ReadPointerFromECX_2  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX_2(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x633a82*/
}



// ==== 0x00633A90  ObjectClass::method_633A90  this=ObjectClass  sig=csp ====
int __thiscall sub_633A90(ObjectClass *this)
{
  return (int)this->?; /*0x633a93*/
}



// ==== 0x00633AA0  ObjectClass::method_633AA0  this=ObjectClass  sig=csp ====
int __thiscall sub_633AA0(ObjectClass *this)
{
  return (int)this->?; /*0x633aa3*/
}



// ==== 0x00633AB0  ObjectClass::method_633AB0  this=ObjectClass  sig=csp ====
// ?do_decimal_point@?$_Mpunct@D@std@@MBEDXZ
// doubtful name
char __thiscall sub_633AB0(ObjectClass *this)
{
  return (char)this->?; /*0x633ab3*/
}



// ==== 0x00633AC0  ObjectClass::ExecuteActionPlanManager_Helper  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ExecuteActionPlanManager_Helper(ObjectClass *this)
{
  LOBYTE(this->AbstractClass) = 0; /*0x633ac2*/
  this->estimatedHealth = 0; /*0x633ac5*/
  *(_DWORD *)&this->isOnMap = -1; /*0x633acc*/
  return &this->AbstractClass; /*0x633ad3*/
}



// ==== 0x00633AE0  ObjectClass::method_633AE0  this=ObjectClass  sig=csp ====
void __thiscall sub_633AE0(ObjectClass *this, const void *a2)
{
  qmemcpy(this, a2, 0x6Fu); /*0x633aed*/
}



// ==== 0x00633B00  ObjectClass::method_633B00  this=ObjectClass  sig=csp ====
int __thiscall sub_633B00(_DWORD *this, int a2)
{
  this->estimatedHealth = a2; /*0x633b04*/
  return a2; /*0x633b07*/
}



// ==== 0x00633B10  ObjectClass::method_633B10  this=ObjectClass  sig=csp ====
int __thiscall sub_633B10(_DWORD *this, int a2)
{
  this->isOnMap = a2; /*0x633b14*/
  return a2; /*0x633b17*/
}



// ==== 0x00633B20  ObjectClass::method_633B20  this=ObjectClass  sig=csp ====
void __thiscall sub_633B20(ObjectClass *this)
{
  this->estimatedHealth = 0; /*0x633b20*/
}



// ==== 0x00633B30  ObjectClass::method_633B30  this=ObjectClass  sig=csp ====
int __thiscall sub_633B30(ObjectClass *this)
{
  int result; // eax

  result = this->estimatedHealth + 1; /*0x633b33*/
  this->estimatedHealth = result; /*0x633b34*/
  return result; /*0x633b37*/
}



// ==== 0x00633B40  ObjectClass::method_633B40  this=ObjectClass  sig=csp ====
int __thiscall sub_633B40(ObjectClass *this)
{
  int result; // eax

  result = this->estimatedHealth - 1; /*0x633b43*/
  this->estimatedHealth = result; /*0x633b44*/
  return result; /*0x633b47*/
}



// ==== 0x00633B70  ObjectClass::method_633B70  this=ObjectClass  sig=csp ====
int __thiscall sub_633B70(ObjectClass *this)
{
  return this->estimatedHealth; /*0x633b73*/
}



// ==== 0x00633B80  ObjectClass::method_633B80  this=ObjectClass  sig=csp ====
int __thiscall sub_633B80(ObjectClass *this)
{
  return *(_DWORD *)&this->isOnMap; /*0x633b83*/
}



// ==== 0x00633B90  ScenarioClass::GetActionCoordsCopy  this=ScenarioClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::GetActionCoordsCopy(ScenarioClass *this, _DWORD *a2)
{
  int *ScenarioClassActionCoords; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, this); /*0x633b9b*/
  v3 = *ScenarioClassActionCoords; /*0x633ba0*/
  v4 = ScenarioClassActionCoords[1]; /*0x633ba2*/
  v5 = ScenarioClassActionCoords[2]; /*0x633ba5*/
  *a2 = v3; /*0x633bae*/
  a2[1] = v4; /*0x633bb0*/
  a2[2] = v5; /*0x633bb3*/
  return a2; /*0x633bb6*/
}



// ==== 0x00633BC0  GetScenarioClassActionCoords  this=AbstractClass  sig=csp ====
_DWORD *__fastcall ScenarioClass_GetActionCoords(_DWORD *a1, _BYTE *a2)
{
  int *v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *a2 == 4 ) /*0x633bca*/
  {
    if ( a2[18] ) /*0x633bcc*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 14); /*0x633bd6*/
      if ( v3 ) /*0x633bdd*/
      {
        v4 = *v3; /*0x633bdf*/
LABEL_11:
        v5 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v4 + 88))(v3, v7); /*0x633c1b*/
        *a1 = *v5; /*0x633c25*/
        a1[1] = v5[1]; /*0x633c2a*/
        a1[2] = v5[2]; /*0x633c30*/
        return a1; /*0x633c39*/
      }
    }
    else if ( a2[28] ) /*0x633be7*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 24); /*0x633bf1*/
      if ( v3 ) /*0x633bf8*/
      {
        v4 = *v3; /*0x633bfa*/
        goto LABEL_11; /*0x633c00*/
      }
    }
    else if ( a2[23] ) /*0x633c02*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 19); /*0x633c0c*/
      if ( v3 ) /*0x633c13*/
      {
        v4 = *v3; /*0x633c15*/
        goto LABEL_11; /*0x633c15*/
      }
    }
  }
  *a1 = -1; /*0x633c43*/
  a1[1] = -1; /*0x633c4a*/
  a1[2] = -1; /*0x633c4d*/
  return a1; /*0x633c35*/
}



// ==== 0x00633C60  ObjectClass::method_633C60  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_633C60(ObjectClass *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v3; // edx
  int v5[3]; // [esp+0h] [ebp-18h] BYREF
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v5, this); /*0x633c69*/
  v6[0] = *ScenarioClassActionCoords; /*0x633c70*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x633c82*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x633c8e*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x633c92*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x633cac*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x633cb2*/
  a2[1] = v3; /*0x633cb4*/
  return a2; /*0x633cb7*/
}



// ==== 0x00633D30  TechnoClass::ClearScriptPlanningData  this=VectorClass  sig=csp ====
void __thiscall TechnoClass::ClearScriptPlanningData(TechnoClass *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  void *occupant; // eax
  void *vtable1; // eax
  TechnoClass *v7; // [esp+Ch] [ebp-4h] BYREF

  FactoryClass::ClearObjects((FactoryClass *)this); /*0x633d35*/
  v7 = this; /*0x633d4a*/
  v2 = (*(int (__thiscall **)(char *, TechnoClass **))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x633d4e*/
         &stru_AC4B30.__pad_EC[124],
         &v7);
  if ( v2 != -1 ) /*0x633d54*/
    Array::RemoveAt((Array *)&stru_AC4B30.__pad_EC[124], v2); /*0x633d5c*/
  v3 = (*(int (__thiscall **)(Array *, TechnoClass **))(*(_DWORD *)stru_AC4B30.__pad_0 + 16))(&stru_AC4B30, &v7); /*0x633d71*/
  if ( v3 != -1 ) /*0x633d77*/
    Array::RemoveAt(&stru_AC4B30, v3); /*0x633d7f*/
  v4 = (*((int (__thiscall **)(void **, TechnoClass **))stru_AC4B30.Array_field_0xE8 + 4))( /*0x633d94*/
         &stru_AC4B30.Array_field_0xE8,
         &v7);
  if ( v4 != -1 && v4 < *(int *)&stru_AC4B30.__pad_EC[12] ) /*0x633da4*/
  {
    --*(_DWORD *)&stru_AC4B30.__pad_EC[12]; /*0x633da9*/
    for ( ; /*0x633daf*/
          v4 < *(int *)&stru_AC4B30.__pad_EC[12];
          *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC
                                                                                + 4 * v4) )
    {
      ++v4; /*0x633db7*/
    }
  }
  if ( *(TechnoClass **)&stru_AC4B30.__pad_EC[176] == v7 ) /*0x633dd7*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[176] = 0; /*0x633dd9*/
  if ( *(TechnoClass **)&stru_AC4B30.__pad_EC[28] == v7 ) /*0x633de5*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x633de7*/
  if ( *(TechnoClass **)&stru_AC4B30.__pad_70[80] == v7 ) /*0x633df3*/
    *(_DWORD *)&stru_AC4B30.__pad_70[80] = 0; /*0x633df5*/
  occupant = (void *)this->?; /*0x633dfb*/
  this->? = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( occupant && BYTE1(this->?) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(occupant); /*0x633e0f*/
    this->? = 0; /*0x633e17*/
  }
  BYTE1(this->?) = 0; /*0x633e1a*/
  this->? = 0; /*0x633e1d*/
  vtable1 = this->?; /*0x633e20*/
  this->RadioClass = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( vtable1 && BYTE1(this->?) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(vtable1); /*0x633e33*/
    this->? = 0; /*0x633e3b*/
  }
  BYTE1(this->?) = 0; /*0x633e3e*/
  this->? = 0; /*0x633e41*/
}



// ==== 0x00633E50  ObjectClass::method_633E50  this=ObjectClass  sig=csp ====
int __thiscall sub_633E50(ObjectClass *this)
{
  return this->?; /*0x633e53*/
}



// ==== 0x00633E60  ObjectClass::method_633E60  this=ObjectClass  sig=csp ====
int __thiscall sub_633E60(ObjectClass *this)
{
  return this->?; /*0x633e63*/
}



// ==== 0x00633EA0  TeamClass::FindScriptAction  this=TeamClass  sig=csp ====
_DWORD *__thiscall TeamClass::FindScriptAction(TeamClass *this, _DWORD *p_vtable0)
{
  _DWORD *Type; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  Type = (_DWORD *)BuildingClass::GetType((BuildingClass *)p_vtable0); /*0x633eae*/
  v4 = Type[1]; /*0x633eb0*/
  p_vtable0 = &this->AbstractClass; /*0x633eb7*/
  v5 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(v4 + 16))(Type + 1, &p_vtable0); /*0x633ebf*/
  if ( v5 == -1 ) /*0x633ec5*/
    return 0; /*0x633ec5*/
  v6 = Type[5]; /*0x633ec7*/
  if ( v6 == 1 ) /*0x633ecd*/
    return &this->AbstractClass; /*0x633ed4*/
  v8 = v5 - 1; /*0x633ed7*/
  if ( v8 < 0 ) /*0x633ed8*/
    v8 = v6 - 1; /*0x633eda*/
  v9 = v8; /*0x633edf*/
  if ( !v6 ) /*0x633ee1*/
    return 0; /*0x633ee1*/
  if ( v8 >= v6 ) /*0x633ee5*/
  {
    v10 = Type[37]; /*0x633ee7*/
    if ( v10 < 0 ) /*0x633eef*/
      return 0; /*0x633eef*/
    v9 = v10 + (v8 - v10) % Type[36]; /*0x633efc*/
  }
  if ( v9 >= 0 && v9 < v6 ) /*0x633f04*/
    return *(_DWORD **)(Type[2] + 4 * v9); /*0x633f0f*/
  return 0; /*0x633ecf*/
}



// ==== 0x00633F20  TeamClass::GetNextScriptAction  this=TeamClass  sig=csp ====
_DWORD *__thiscall TeamClass::GetNextScriptAction(TeamClass *this, _DWORD *p_vtable0)
{
  _DWORD *Type; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  Type = (_DWORD *)BuildingClass::GetType((BuildingClass *)p_vtable0); /*0x633f2e*/
  v4 = Type[1]; /*0x633f30*/
  p_vtable0 = &this->AbstractClass; /*0x633f37*/
  v5 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(v4 + 16))(Type + 1, &p_vtable0); /*0x633f3f*/
  if ( v5 == -1 ) /*0x633f45*/
    return 0; /*0x633f45*/
  v6 = Type[5]; /*0x633f47*/
  if ( v6 == 1 ) /*0x633f4d*/
    return &this->AbstractClass; /*0x633f54*/
  v8 = v5 + 1; /*0x633f57*/
  if ( v8 >= v6 ) /*0x633f5a*/
    v8 = 0; /*0x633f5c*/
  v9 = v8; /*0x633f60*/
  if ( !v6 ) /*0x633f62*/
    return 0; /*0x633f62*/
  if ( v8 >= v6 ) /*0x633f66*/
  {
    v10 = Type[37]; /*0x633f68*/
    if ( v10 < 0 ) /*0x633f70*/
      return 0; /*0x633f70*/
    v9 = v10 + (v8 - v10) % Type[36]; /*0x633f7d*/
  }
  if ( v9 >= 0 && v9 < v6 ) /*0x633f85*/
    return *(_DWORD **)(Type[2] + 4 * v9); /*0x633f90*/
  return 0; /*0x633f4f*/
}



// ==== 0x00633FA0  ScriptAction::CreatePlacementAction  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::CreatePlacementAction(ScriptAction *this, _DWORD *a2, const void *a3)
{
  int v4; // eax
  _DWORD *v5; // ebx
  _BYTE *v6; // eax
  int v7; // eax
  int ScriptAction_field_0x14; // ecx
  int v9; // eax
  int v10; // edx
  int Type; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx

  v4 = __2_YAPAXI_Z(0x10u); /*0x633fa7*/
  if ( v4 ) /*0x633fb1*/
  {
    *(_DWORD *)v4 = 0; /*0x633fb3*/
    *(_DWORD *)(v4 + 4) = 0; /*0x633fb9*/
    *(_DWORD *)(v4 + 8) = -1; /*0x633fc0*/
    *(_BYTE *)(v4 + 12) = 0; /*0x633fc7*/
    v5 = (_DWORD *)v4; /*0x633fcb*/
  }
  else
  {
    v5 = 0; /*0x633fcf*/
  }
  *v5 = a2; /*0x633fd7*/
  v6 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x633fd9*/
  if ( v6 ) /*0x633fe3*/
    *v6 = 0; /*0x633fe5*/
  else
    v6 = 0; /*0x633fea*/
  qmemcpy(v6, a3, 0x6Fu); /*0x633ff8*/
  v5[1] = v6; /*0x633ffd*/
  v7 = this->ScriptAction_field_0x8[0]; /*0x634000*/
  if ( this->ScriptAction_field_0x10[0] < v7 /*0x634024*/
    || (this->__pad_C[1] || !v7)
    && (ScriptAction_field_0x14 = this->ScriptAction_field_0x14, ScriptAction_field_0x14 > 0)
    && (*(unsigned __int8 (__thiscall **)(ScriptAction *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
         this,
         v7 + ScriptAction_field_0x14,
         0) )
  {
    v9 = this->ScriptAction_field_0x10[0]; /*0x63402b*/
    v10 = this->ScriptAction_field_0x4[0]; /*0x63402e*/
    this->ScriptAction_field_0x10[0] = v9 + 1; /*0x634034*/
    *(_DWORD *)(v10 + 4 * v9) = v5; /*0x634037*/
  }
  Type = BuildingClass::GetType((BuildingClass *)a2); /*0x634043*/
  v12 = *(_DWORD *)(Type + 12); /*0x634045*/
  if ( *(_DWORD *)(Type + 20) < v12 /*0x63406d*/
    || (*(_BYTE *)(Type + 17) || !v12)
    && (v13 = *(_DWORD *)(Type + 24), v13 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v12 + v13, 0) )
  {
    v14 = *(_DWORD *)(Type + 20); /*0x634074*/
    v15 = *(_DWORD *)(Type + 8); /*0x634077*/
    *(_DWORD *)(Type + 20) = v14 + 1; /*0x63407d*/
    *(_DWORD *)(v15 + 4 * v14) = this; /*0x634080*/
  }
  if ( *(_DWORD *)(Type + 140) == -1 ) /*0x63408d*/
    *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x634093*/
  return ScriptAction::PlaceObject((int)this, v5); /*0x6340a1*/
}



// ==== 0x006340B0  TeamClass::DestroyAllMembers  this=VectorClass  sig=csp ====
void __thiscall TeamClass::DestroyAllMembers(TeamClass *this, _DWORD *p_vtable0)
{
  int v3; // eax
  int uniqueId; // edx
  _DWORD ***vtable1; // edi
  _DWORD ***v6; // ecx
  _DWORD **v7; // ebp
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  void *Block; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x6340b8*/
  uniqueId = this->?; /*0x6340ba*/
  if ( uniqueId <= 0 ) /*0x6340c0*/
    goto LABEL_7; /*0x6340c0*/
  vtable1 = (_DWORD ***)this->?; /*0x6340c2*/
  v6 = vtable1; /*0x6340c9*/
  while ( **v6 != p_vtable0 ) /*0x6340d0*/
  {
    ++v3; /*0x6340d2*/
    ++v6; /*0x6340d3*/
    if ( v3 >= uniqueId ) /*0x6340d8*/
    {
      v7 = 0; /*0x6340dc*/
      goto LABEL_9; /*0x6340de*/
    }
  }
  if ( v3 == -1 ) /*0x6340e3*/
LABEL_7:
    v7 = 0; /*0x6340e7*/
  else
    v7 = vtable1[v3]; /*0x6340eb*/
LABEL_9:
  Block = v7; /*0x6340f0*/
  if ( v7 ) /*0x6340f6*/
  {
    if ( *((_BYTE *)v7 + 12) ) /*0x6340fc*/
    {
      *((_BYTE *)v7 + 12) = 0; /*0x634101*/
      v8 = *((_DWORD *)this + 42) - 1; /*0x63410a*/
      *((_DWORD *)this + 42) = v8; /*0x63410b*/
      if ( !v8 ) /*0x634111*/
        *((_DWORD *)this + 44) = -1; /*0x634113*/
    }
    v9 = v7[2]; /*0x63411d*/
    if ( v9 != (_DWORD *)-1 ) /*0x634123*/
    {
      v10 = *((_DWORD *)&this->buildingType->AbstractClass + (_DWORD)v9); /*0x634129*/
      *(_DWORD *)(v10 + 116) = -1; /*0x63412e*/
      TeamClass::Reset(this, 0); /*0x634135*/
      v11 = *(_DWORD *)(v10 + 112) - 1; /*0x63413d*/
      *(_DWORD *)(v10 + 112) = v11; /*0x63413e*/
      if ( !v11 ) /*0x634141*/
      {
        p_vtable0 = &this->AbstractClass; /*0x634145*/
        if ( this ) /*0x634149*/
        {
          if ( !LOBYTE(this->?) ) /*0x63414b*/
          {
            LOBYTE(this->?) = 1; /*0x63415a*/
            VectorClass::Append((VectorClass *)&stru_AC4B30.__pad_EC[124], &p_vtable0); /*0x63415e*/
          }
        }
      }
    }
    v7[2] = (_DWORD *)-1; /*0x634163*/
    __3_YAXPAX_Z(*((void **)Block + 1)); /*0x634172*/
    v12 = (*((int (__thiscall **)(TeamClass *, void **))this->AbstractClass + 4))(this, &Block); /*0x634183*/
    if ( v12 != -1 ) /*0x634189*/
    {
      v13 = this->?; /*0x63418b*/
      if ( v12 < v13 ) /*0x634190*/
      {
        v14 = v13 - 1; /*0x634192*/
        for ( this->? = v14; v12 < this->?; *((_DWORD *)this->? + v12 - 1) = *((_DWORD *)this->? + v12) ) /*0x634198*/
          ++v12; /*0x63419d*/
      }
    }
    __3_YAXPAX_Z(Block); /*0x6341b1*/
    if ( !this->? && this ) /*0x6341c6*/
    {
      FactoryClass::ClearObjects((FactoryClass *)this); /*0x6341ce*/
      p_vtable0 = &this->AbstractClass; /*0x6341e3*/
      v15 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x6341e7*/
              &stru_AC4B30.__pad_EC[124],
              &p_vtable0);
      if ( v15 != -1 ) /*0x6341ed*/
        Array::RemoveAt((Array *)&stru_AC4B30.__pad_EC[124], v15); /*0x6341f5*/
      Team_Destroy((ObjectClass *)&stru_AC4B30, (int)&p_vtable0); /*0x634204*/
      Team_Destroy((ObjectClass *)&stru_AC4B30.Array_field_0xE8, (int)&p_vtable0); /*0x634213*/
      if ( *(_DWORD **)&stru_AC4B30.__pad_EC[176] == p_vtable0 ) /*0x634224*/
        *(_DWORD *)&stru_AC4B30.__pad_EC[176] = 0; /*0x634226*/
      if ( *(_DWORD **)&stru_AC4B30.__pad_EC[28] == p_vtable0 ) /*0x634232*/
        *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x634234*/
      if ( *(_DWORD **)&stru_AC4B30.__pad_70[80] == p_vtable0 ) /*0x634240*/
        *(_DWORD *)&stru_AC4B30.__pad_70[80] = 0; /*0x634242*/
      this->? = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63424b*/
      VectorClass::Cleanup2((int)&this->?); /*0x634251*/
      v16 = this->?; /*0x634256*/
      this->AbstractClass = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x634259*/
      if ( v16 ) /*0x634261*/
      {
        if ( BYTE1(this->?) ) /*0x634263*/
        {
          __3_YAXPAX_Z(v16); /*0x634269*/
          this->? = 0; /*0x634271*/
        }
      }
      BYTE1(this->?) = 0; /*0x634275*/
      this->? = 0; /*0x634278*/
      __3_YAXPAX_Z(this); /*0x63427b*/
    }
  }
}



// ==== 0x00634290  Array::FindValue  this=Array  sig=csp ====
int __thiscall Array::FindValue(Array *this, int a2)
{
  void *Array_field_0x10; // esi
  int result; // eax
  int v4; // edx
  _DWORD **i; // ecx

  Array_field_0x10 = this->Array_field_0x10; /*0x634292*/
  result = -1; /*0x634295*/
  v4 = 0; /*0x634298*/
  if ( (int)Array_field_0x10 > 0 ) /*0x63429d*/
  {
    for ( i = (_DWORD **)this->Array_field_0x4; **i != a2; ++i ) /*0x63429f*/
    {
      if ( ++v4 >= (int)Array_field_0x10 ) /*0x6342b2*/
        return result; /*0x6342b2*/
    }
    return v4; /*0x6342ba*/
  }
  return result; /*0x6342b4*/
}



// ==== 0x006342D0  Function::6342D0  this=Function  sig=csp ====
int __thiscall Function::Method_6342D0(Function *this, int a2)
{
  return **(_DWORD **)(this->Function_field_0x04 + 4 * a2); /*0x6342dc*/
}



// ==== 0x006342E0  ObjectClass::Team_Helper_6342E0  this=ObjectClass  sig=csp ====
int __thiscall Team_Helper_6342E0(ObjectClass *this, int a2, int a3)
{
  _BYTE *v4; // esi

  v4 = *(_BYTE **)(*((_DWORD *)this->? + a3) + 4); /*0x6342f7*/
  qmemcpy((void *)a2, v4, 0x6Cu); /*0x6342fa*/
  v4 += 108; /*0x6342fa*/
  *(_WORD *)(a2 + 108) = *(_WORD *)v4; /*0x6342fc*/
  *(_BYTE *)(a2 + 110) = v4[2]; /*0x6342fe*/
  return a2; /*0x6342ff*/
}



// ==== 0x00634310  BuildingClass::CopyTypeDataForRender  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CopyTypeDataForRender(BuildingClass *this, int a2, int a3)
{
  int uniqueId; // edx
  int v4; // eax
  _DWORD **vtable1; // esi
  _DWORD **v6; // ecx
  _DWORD *v7; // eax
  _BYTE *v8; // esi

  uniqueId = this->?; /*0x634310*/
  v4 = 0; /*0x634314*/
  if ( uniqueId <= 0 ) /*0x63431a*/
    goto LABEL_7; /*0x63431a*/
  vtable1 = (_DWORD **)this->?; /*0x63431c*/
  v6 = vtable1; /*0x634323*/
  while ( **v6 != a3 ) /*0x634329*/
  {
    ++v4; /*0x63432b*/
    ++v6; /*0x63432c*/
    if ( v4 >= uniqueId ) /*0x634331*/
    {
      v7 = 0; /*0x634333*/
      goto LABEL_9; /*0x634335*/
    }
  }
  if ( v4 == -1 ) /*0x63433a*/
LABEL_7:
    v7 = 0; /*0x63433c*/
  else
    v7 = vtable1[v4]; /*0x634340*/
LABEL_9:
  v8 = (_BYTE *)v7[1]; /*0x634343*/
  qmemcpy((void *)a2, v8, 0x6Cu); /*0x634351*/
  v8 += 108; /*0x634351*/
  *(_WORD *)(a2 + 108) = *(_WORD *)v8; /*0x634353*/
  *(_BYTE *)(a2 + 110) = v8[2]; /*0x634355*/
  return a2; /*0x634356*/
}



// ==== 0x00634360  ObjectClass::method  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_634360(ObjectClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // esi
  int v4; // eax
  _DWORD **i; // ecx

  uniqueId = this->?; /*0x634360*/
  v3 = -1; /*0x634365*/
  v4 = 0; /*0x634368*/
  if ( uniqueId > 0 ) /*0x63436d*/
  {
    for ( i = (_DWORD **)this->?; **i != a2; ++i ) /*0x63436f*/
    {
      if ( ++v4 >= uniqueId ) /*0x634382*/
        return 0; /*0x63438f*/
    }
    v3 = v4; /*0x634392*/
  }
  return v3 != -1; /*0x634389*/
}



// ==== 0x006343B0  ObjectClass::method_6343B0  this=ObjectClass  sig=csp ====
int __thiscall sub_6343B0(ObjectClass *this)
{
  return *(_DWORD *)(**(_DWORD **)this->? + 540); /*0x6343bd*/
}



// ==== 0x006343C0  ScriptAction::GetCoords  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::GetCoords(ScriptAction *this, _DWORD *a2)
{
  int *ScenarioClassActionCoords; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x6343d1*/
                                v7,
                                *(_BYTE **)(*(_DWORD *)this->ScriptAction_field_0x4[0] + 4));
  v3 = *ScenarioClassActionCoords; /*0x6343d6*/
  v4 = ScenarioClassActionCoords[1]; /*0x6343d8*/
  v5 = ScenarioClassActionCoords[2]; /*0x6343db*/
  *a2 = v3; /*0x6343e4*/
  a2[1] = v4; /*0x6343e6*/
  a2[2] = v5; /*0x6343e9*/
  return a2; /*0x6343ec*/
}



// ==== 0x00634400  ScriptAction::GetScreenPos  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::GetScreenPos(ScriptAction *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v3; // edx
  int v5[3]; // [esp+0h] [ebp-18h] BYREF
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x63440f*/
                                v5,
                                *(_BYTE **)(*(_DWORD *)this->ScriptAction_field_0x4[0] + 4));
  v6[0] = *ScenarioClassActionCoords; /*0x634416*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x63441d*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x634434*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x634438*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x634452*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x634458*/
  a2[1] = v3; /*0x63445a*/
  return a2; /*0x63445d*/
}



// ==== 0x00634470  ObjectClass::method  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_634470(ObjectClass *this, int a2, int a3)
{
  _DWORD *ScenarioClassActionCoords; // eax
  int *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v11; // [esp+8h] [ebp-30h] BYREF
  _DWORD v12[3]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v13[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD v14[4]; // [esp+28h] [ebp-10h] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, *(_BYTE **)(*(_DWORD *)this->? + 4)); /*0x634481*/
  v12[0] = *ScenarioClassActionCoords; /*0x634488*/
  v12[1] = ScenarioClassActionCoords[1]; /*0x63448f*/
  v12[2] = ScenarioClassActionCoords[2]; /*0x63449a*/
  v4 = ToCoordPixel(&v11, v12); /*0x6344a2*/
  v5 = ComputeBounds(v14, 8, *v4, v4[1]); /*0x6344bc*/
  v6 = *v5 - 4; /*0x6344c4*/
  v7 = v5[1] - 4; /*0x6344ca*/
  v8 = v5[2] + 8; /*0x6344d0*/
  v9 = v5[3] + 8; /*0x6344d6*/
  return a2 >= v6 && a2 < v8 + v6 && a3 >= v7 && a3 < v9 + v7; /*0x6344f1*/
}



// ==== 0x00634510  ComputeBounds  this=Rect  sig=csp ====
_DWORD *__fastcall Bounds_Compute(_DWORD *a1, int a2, int a3, int a4)
{
  *a1 = a2 / -2 + a3; /*0x634532*/
  a1[1] = a2 / -2 + a4; /*0x634535*/
  a1[2] = a2; /*0x634538*/
  a1[3] = a2; /*0x63453b*/
  return a1; /*0x634534*/
}



// ==== 0x00634550  ScriptAction::GetActionCoordinates  this=ScriptAction  sig=csp ====
BOOL __thiscall ScriptAction::GetActionCoordinates(ScriptAction *this, int a2, int a3, int a4)
{
  _DWORD *ScenarioClassActionCoords; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x634560*/
                                v6,
                                *(_BYTE **)(*(_DWORD *)this->ScriptAction_field_0x4[0] + 4));
  return *ScenarioClassActionCoords == a2 && ScenarioClassActionCoords[1] == a3 && ScenarioClassActionCoords[2] == a4; /*0x63456f*/
}



// ==== 0x006345A0  ObjectClass::Render_Render_6345A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Render_Render_6345A0(ObjectClass *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v3; // ecx
  int v5[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v6[3]; // [esp+14h] [ebp-18h] BYREF
  _DWORD v7[3]; // [esp+20h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, *(_BYTE **)(*(_DWORD *)this->? + 4)); /*0x6345b2*/
  v6[0] = *ScenarioClassActionCoords; /*0x6345b9*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x6345c0*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x6345d7*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x6345db*/
  v5[0] += DSurface_ViewBounds.field_0; /*0x6345f8*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1] - 4; /*0x6345fc*/
  *a2 = v5[0] - 4; /*0x63460f*/
  a2[1] = v3; /*0x634611*/
  a2[2] = 8; /*0x634614*/
  a2[3] = 8; /*0x634617*/
  return a2; /*0x63461a*/
}



// ==== 0x006346B0  ScriptAction::FindItemByValue  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::FindItemByValue(ScriptAction *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  _DWORD **i; // ecx

  v2 = this->ScriptAction_field_0x10[0]; /*0x6346b0*/
  v3 = 0; /*0x6346b4*/
  if ( v2 <= 0 ) /*0x6346ba*/
    return 0; /*0x6346ba*/
  v4 = this->ScriptAction_field_0x4[0]; /*0x6346bc*/
  for ( i = (_DWORD **)v4; **i != a2; ++i ) /*0x6346c3*/
  {
    if ( ++v3 >= v2 ) /*0x6346d1*/
      return 0; /*0x6346d8*/
  }
  if ( v3 == -1 ) /*0x6346de*/
    return 0; /*0x6346e2*/
  else
    return *(_DWORD **)(v4 + 4 * v3); /*0x6346e8*/
}



// ==== 0x00634700  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_634700(ObjectClass *this)
{
  return (int)this->nextObject; /*0x634703*/
}



// ==== 0x00634770  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int __thiscall Render_Render_634770(ObjectClass *this)
{
  int uniqueId; // esi
  int v2; // eax
  int **i; // ecx

  uniqueId = this->?; /*0x634772*/
  v2 = 0; /*0x634775*/
  if ( uniqueId <= 0 ) /*0x634779*/
    return 0; /*0x63478f*/
  for ( i = (int **)this->?; !*((_BYTE *)*i + 12); ++i ) /*0x63477b*/
  {
    if ( ++v2 >= uniqueId ) /*0x63478d*/
      return 0; /*0x63478d*/
  }
  return **i; /*0x63478f*/
}



// ==== 0x006347A0  ObjectClass::method_6347A0  this=ObjectClass  sig=csp ====
int __thiscall sub_6347A0(ObjectClass *this, int a2)
{
  return *(_DWORD *)(this->occupant + 4 * a2); /*0x6347aa*/
}



// ==== 0x006347B0  BuildingClass::GetTypeEntry  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTypeEntry(BuildingClass *this, int a2)
{
  int uniqueId; // esi
  int v3; // eax
  _DWORD **vtable1; // edx
  int v5; // eax
  int v6; // edx
  int result; // eax

  uniqueId = this->?; /*0x6347b3*/
  v3 = 0; /*0x6347b6*/
  if ( uniqueId <= 0 ) /*0x6347bb*/
    goto LABEL_7; /*0x6347bb*/
  vtable1 = (_DWORD **)this->?; /*0x6347c4*/
  while ( **vtable1 != a2 ) /*0x6347cb*/
  {
    ++v3; /*0x6347cd*/
    ++vtable1; /*0x6347ce*/
    if ( v3 >= uniqueId ) /*0x6347d3*/
    {
      v5 = 0; /*0x6347d5*/
      goto LABEL_9; /*0x6347d7*/
    }
  }
  if ( v3 == -1 ) /*0x6347dc*/
LABEL_7:
    v5 = 0; /*0x6347de*/
  else
    v5 = *((_DWORD *)this->? + v3); /*0x6347e2*/
LABEL_9:
  v6 = *(_DWORD *)(v5 + 8); /*0x6347e5*/
  result = 0; /*0x6347e9*/
  if ( v6 != -1 ) /*0x6347f1*/
    return *(_DWORD *)(this->? + 4 * v6); /*0x6347f6*/
  return result; /*0x6347e8*/
}



// ==== 0x00634800  ObjectClass::method  this=ObjectClass  sig=csp ====
char *__thiscall sub_634800(ObjectClass *this)
{
  return (char *)&this->attachedBomb; /*0x634803*/
}



// ==== 0x00634810  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_634810(ObjectClass *this, _DWORD *a2, int a3)
{
  int *ScenarioClassActionCoords; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(_BYTE **)(this->occupant + 4 * a3)); /*0x634823*/
  v4 = *ScenarioClassActionCoords; /*0x634828*/
  v5 = ScenarioClassActionCoords[1]; /*0x63482a*/
  v6 = ScenarioClassActionCoords[2]; /*0x63482d*/
  *a2 = v4; /*0x634836*/
  a2[1] = v5; /*0x634838*/
  a2[2] = v6; /*0x63483b*/
  return a2; /*0x63483e*/
}



// ==== 0x00634850  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_634850(ObjectClass *this, _DWORD *a2)
{
  int *ScenarioClassActionCoords; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, &this->attachedBomb); /*0x63485c*/
  v3 = *ScenarioClassActionCoords; /*0x634861*/
  v4 = ScenarioClassActionCoords[1]; /*0x634863*/
  v5 = ScenarioClassActionCoords[2]; /*0x634866*/
  *a2 = v3; /*0x63486f*/
  a2[1] = v4; /*0x634871*/
  a2[2] = v5; /*0x634874*/
  return a2; /*0x634877*/
}



// ==== 0x00634880  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_634880(ObjectClass *this, _DWORD *a2, int a3)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v4; // edx
  int v6[2]; // [esp+0h] [ebp-20h] BYREF
  _DWORD v7[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v8[3]; // [esp+14h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(_BYTE **)(this->occupant + 4 * a3)); /*0x634891*/
  v7[0] = *ScenarioClassActionCoords; /*0x634898*/
  v7[1] = ScenarioClassActionCoords[1]; /*0x63489f*/
  v7[2] = ScenarioClassActionCoords[2]; /*0x6348b6*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v7, v6); /*0x6348ba*/
  v4 = (char *)DSurface_ViewBounds.field_4 + v6[1]; /*0x6348d4*/
  *a2 = DSurface_ViewBounds.field_0 + v6[0]; /*0x6348da*/
  a2[1] = v4; /*0x6348dc*/
  return a2; /*0x6348df*/
}



// ==== 0x006348F0  ObjectClass::method_6348F0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6348F0(ObjectClass *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v3; // edx
  int v5[2]; // [esp+0h] [ebp-20h] BYREF
  _DWORD v6[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v7[3]; // [esp+14h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, &this->attachedBomb); /*0x6348fa*/
  v6[0] = *ScenarioClassActionCoords; /*0x634901*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x634913*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x63491f*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x634923*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x63493d*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x634943*/
  a2[1] = v3; /*0x634945*/
  return a2; /*0x634948*/
}



// ==== 0x00634950  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_634950(ObjectClass *this)
{
  LOBYTE(this->?) = 1; /*0x634950*/
}



// ==== 0x00634960  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_634960(ObjectClass *this)
{
  return this->?; /*0x634963*/
}



// ==== 0x00634970  ObjectClass::Helper  this=ObjectClass  sig=csp ====
int __thiscall Helper_634970(ObjectClass *this)
{
  int uniqueId; // ebx
  int i; // edi
  int result; // eax

  FactoryClass::ClearObjects((FactoryClass *)this); /*0x634975*/
  uniqueId = this->?; /*0x63497a*/
  for ( i = 0; i < uniqueId; ++i ) /*0x634981*/
    ScriptAction::PlaceObject((int)this, *((_DWORD **)this->? + i)); /*0x63498c*/
  result = ScriptAction::FindSquadMember((ScriptAction *)this); /*0x634998*/
  LOBYTE(this->?) = 0; /*0x63499d*/
  return result; /*0x6349a1*/
}



// ==== 0x006349B0  ScriptAction::FindSquadMember  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::FindSquadMember(ScriptAction *this)
{
  int v2; // edi
  BuildingClass *v3; // ebx
  int Type; // esi
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  Array *v8; // esi
  int Value; // eax
  int v10; // eax
  _BYTE *v11; // esi
  int result; // eax
  int v13; // ebx
  _BYTE *v14; // esi
  int *ScenarioClassActionCoords; // eax
  int v16; // esi
  int v17; // edi
  int *v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // [esp+10h] [ebp-110h]
  int v22; // [esp+10h] [ebp-110h]
  int v23; // [esp+14h] [ebp-10Ch]
  int v24[3]; // [esp+18h] [ebp-108h] BYREF
  int v25; // [esp+24h] [ebp-FCh]
  int v26[3]; // [esp+28h] [ebp-F8h] BYREF
  int v27[3]; // [esp+34h] [ebp-ECh] BYREF
  _BYTE v28[112]; // [esp+40h] [ebp-E0h] BYREF
  _BYTE v29[108]; // [esp+B0h] [ebp-70h] BYREF
  __int16 v30; // [esp+11Ch] [ebp-4h]
  char v31; // [esp+11Eh] [ebp-2h]

  v23 = 0; /*0x6349bc*/
  v21 = this->ScriptAction_field_0x10[0]; /*0x6349c9*/
  if ( v21 > 0 ) /*0x6349cd*/
  {
    do /*0x634a64*/
    {
      v2 = *(_DWORD *)(this->ScriptAction_field_0x4[0] + 4 * v23); /*0x6349da*/
      v3 = *(BuildingClass **)v2; /*0x6349dd*/
      Type = BuildingClass::GetType(*(BuildingClass **)v2); /*0x6349e6*/
      v24[0] = (int)this; /*0x6349ed*/
      if ( (*(int (__thiscall **)(int, int *))(*(_DWORD *)(Type + 4) + 16))(Type + 4, v24) == *(_DWORD *)(Type + 148) ) /*0x634a00*/
      {
        *(_BYTE *)(v2 + 12) = 1; /*0x634a02*/
        v5 = (char *)this->ScriptAction_field_0xA8 + 1; /*0x634a10*/
        this->ScriptAction_field_0xA8 = v5; /*0x634a15*/
        if ( v5 == (char *)1 ) /*0x634a18*/
        {
          v6 = BuildingClass::GetType(v3); /*0x634a1c*/
          v7 = *(_DWORD *)(v6 + 20) - 1; /*0x634a24*/
          if ( v7 >= 0 ) /*0x634a25*/
            v8 = *(Array **)(*(_DWORD *)(v6 + 8) + 4 * v7); /*0x634a2e*/
          else
            v8 = 0; /*0x634a27*/
          Value = Array::FindValue(v8, (int)v3); /*0x634a34*/
          if ( Value == -1 ) /*0x634a3c*/
            v10 = 0; /*0x634a3e*/
          else
            v10 = *((_DWORD *)v8->Array_field_0x4 + Value); /*0x634a45*/
          v11 = *(_BYTE **)(v10 + 4); /*0x634a48*/
          qmemcpy(&this->__pad_34[4], v11, 0x6Cu); /*0x634a50*/
          v11 += 108; /*0x634a50*/
          *(_WORD *)&this->__pad_9C[8] = *(_WORD *)v11; /*0x634a52*/
          this->__pad_9C[10] = v11[2]; /*0x634a54*/
        }
      }
      ++v23; /*0x634a60*/
    }
    while ( v23 < v21 ); /*0x634a64*/
  }
  this->ScriptAction_field_0xB0 = (void *)-1; /*0x634a6a*/
  result = (int)this->ScriptAction_field_0xA8; /*0x634a74*/
  if ( result ) /*0x634a7c*/
  {
    result = (int)this->ScriptAction_field_0x30; /*0x634a8e*/
    qmemcpy(v28, &this->__pad_34[4], 0x6Eu); /*0x634a91*/
    v13 = 0; /*0x634a95*/
    v22 = result; /*0x634a97*/
    v28[110] = this->__pad_9C[10]; /*0x634a9d*/
    if ( result > 0 ) /*0x634a9e*/
    {
      while ( 1 ) /*0x634aaf*/
      {
        v14 = *(_BYTE **)(this->ScriptAction_field_0x24 + 4 * v13); /*0x634aaf*/
        qmemcpy(v29, v14, sizeof(v29)); /*0x634ab6*/
        v14 += 108; /*0x634ab6*/
        v30 = *(_WORD *)v14; /*0x634ab8*/
        v31 = v14[2]; /*0x634abe*/
        ScenarioClassActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634abf*/
        v16 = *ScenarioClassActionCoords; /*0x634ac4*/
        v17 = ScenarioClassActionCoords[1]; /*0x634ad1*/
        v25 = ScenarioClassActionCoords[2]; /*0x634ad7*/
        v18 = GetScenarioClassActionCoords(v26, v29); /*0x634ae0*/
        result = *v18; /*0x634ae2*/
        v19 = v18[1]; /*0x634ae6*/
        v20 = v18[2]; /*0x634ae9*/
        if ( v16 == result && v17 == v19 && v25 == v20 ) /*0x634af6*/
          break; /*0x634af6*/
        result = v22; /*0x634af8*/
        if ( ++v13 >= v22 ) /*0x634aff*/
          return result; /*0x634aff*/
      }
      this->ScriptAction_field_0xB0 = (void *)v13; /*0x634b03*/
    }
  }
  return result; /*0x634b09*/
}



// ==== 0x00634B20  ObjectClass::Team_Get  this=ObjectClass  sig=csp ====
void __thiscall Team_Get(ObjectClass *this)
{
  int v2; // ebp
  _BYTE *v3; // esi
  int uniqueId; // edx
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // ebp
  _BYTE *v10; // eax
  int v11; // esi
  int i; // [esp+10h] [ebp-90h]
  ObjectClass *nextObject; // [esp+14h] [ebp-8Ch]
  int v14; // [esp+18h] [ebp-88h]
  int j; // [esp+18h] [ebp-88h]
  _DWORD v16[2]; // [esp+1Ch] [ebp-84h] BYREF
  _DWORD v17[3]; // [esp+24h] [ebp-7Ch] BYREF
  _WORD v18[56]; // [esp+30h] [ebp-70h] BYREF

  v2 = 0; /*0x634b2a*/
  nextObject = this->nextObject; /*0x634b33*/
  if ( (int)nextObject > 0 ) /*0x634b37*/
  {
    do /*0x634bf7*/
    {
      v3 = *(_BYTE **)(this->occupant + 4 * v2); /*0x634b48*/
      qmemcpy(v18, v3, 0x6Cu); /*0x634b57*/
      v3 += 108; /*0x634b57*/
      v18[54] = *(_WORD *)v3; /*0x634b59*/
      LOBYTE(v18[55]) = v3[2]; /*0x634b5f*/
      GetScenarioClassActionCoords(v17, v18); /*0x634b60*/
      Debug::Log(); /*0x634b7d*/
      uniqueId = this->?; /*0x634b82*/
      v5 = 0; /*0x634b88*/
      v14 = uniqueId; /*0x634b8a*/
      for ( i = 0; v5 < uniqueId; i = v5 ) /*0x634b94*/
      {
        v6 = (_DWORD *)*((_DWORD *)this->? + v5); /*0x634b99*/
        if ( v6[2] == v2 ) /*0x634b9f*/
        {
          v7 = *v6; /*0x634ba1*/
          (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 136))(*v6); /*0x634ba7*/
          v16[1] = *(_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 440))(v7, v16); /*0x634bc3*/
          Debug::Log(); /*0x634bd7*/
          v5 = i; /*0x634bdc*/
          uniqueId = v14; /*0x634be0*/
        }
        ++v5; /*0x634be7*/
      }
      ++v2; /*0x634bf4*/
    }
    while ( v2 < (int)nextObject ); /*0x634bf7*/
  }
  if ( (int)this->lineTrailer > 0 ) /*0x634c05*/
  {
    qmemcpy(v18, &this->attachedBomb, 0x6Fu); /*0x634c1b*/
    GetScenarioClassActionCoords(v17, v18); /*0x634c24*/
    Debug::Log(); /*0x634c43*/
    v8 = this->?; /*0x634c48*/
    v9 = 0; /*0x634c4e*/
    for ( j = v8; v9 < v8; ++v9 ) /*0x634c56*/
    {
      v10 = (_BYTE *)*((_DWORD *)this->? + v9); /*0x634c5b*/
      if ( v10[12] ) /*0x634c5e*/
      {
        v11 = *(_DWORD *)v10; /*0x634c65*/
        (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v10 + 136))(*(_DWORD *)v10); /*0x634c6b*/
        (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 440))(v11, v16); /*0x634c7f*/
        Debug::Log(); /*0x634c9b*/
        v8 = j; /*0x634ca0*/
      }
    }
  }
}



// ==== 0x00634CC0  ScriptAction::FindBuildingMatch  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::FindBuildingMatch(ScriptAction *this, _DWORD *a2)
{
  int Type; // esi
  int v4; // eax
  int v5; // eax
  ScriptAction *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  ScriptAction *v11; // ecx
  int Value; // eax
  int v13; // eax
  _BYTE *v14; // esi
  int v15; // edi
  int *ScenarioClassActionCoords; // eax
  int v17; // ebp
  int v18; // ebx
  _DWORD *v19; // esi
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  void *ScriptAction_field_0x30; // [esp+10h] [ebp-100h] BYREF
  ScriptAction *v24; // [esp+14h] [ebp-FCh]
  int v25; // [esp+1Ch] [ebp-F4h]
  int i; // [esp+20h] [ebp-F0h]
  _DWORD v27[3]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v28[108]; // [esp+30h] [ebp-E0h] BYREF
  __int16 v29; // [esp+9Ch] [ebp-74h]
  char v30; // [esp+9Eh] [ebp-72h]
  _BYTE v31[108]; // [esp+A0h] [ebp-70h] BYREF
  __int16 v32; // [esp+10Ch] [ebp-4h]
  char v33; // [esp+10Eh] [ebp-2h]

  v24 = this; /*0x634cd5*/
  Type = BuildingClass::GetType((BuildingClass *)a2); /*0x634cde*/
  v4 = *(_DWORD *)(Type + 4); /*0x634ce0*/
  ScriptAction_field_0x30 = this; /*0x634ce7*/
  v5 = (*(int (__thiscall **)(int, void **))(v4 + 16))(Type + 4, &ScriptAction_field_0x30); /*0x634cef*/
  if ( v5 == -1 ) /*0x634cf5*/
  {
    v6 = 0; /*0x634cf7*/
  }
  else
  {
    v7 = *(_DWORD *)(Type + 20); /*0x634cfb*/
    if ( v7 == 1 ) /*0x634d01*/
    {
      v6 = this; /*0x634d03*/
    }
    else
    {
      v8 = v5 - 1; /*0x634d07*/
      if ( v8 < 0 ) /*0x634d08*/
        v8 = v7 - 1; /*0x634d0a*/
      v6 = (ScriptAction *)ArrayClass::GetAt_Wrap((ArrayClass *)Type, v8); /*0x634d15*/
    }
  }
  v9 = BuildingClass::GetType((BuildingClass *)a2); /*0x634d19*/
  v10 = *(_DWORD *)(v9 + 20) - 1; /*0x634d21*/
  if ( v10 >= 0 ) /*0x634d22*/
    v11 = *(ScriptAction **)(*(_DWORD *)(v9 + 8) + 4 * v10); /*0x634d2b*/
  else
    v11 = 0; /*0x634d24*/
  if ( v6 != v11 )
  {
    Value = Array::FindValue((Array *)v6, (int)a2); /*0x634d39*/
    v13 = Value == -1 ? 0 : *(_DWORD *)(v6->ScriptAction_field_0x4[0] + 4 * Value);
    v14 = *(_BYTE **)(v13 + 4); /*0x634d4d*/
    qmemcpy(v28, v14, sizeof(v28)); /*0x634d59*/
    v14 += 108; /*0x634d59*/
    v29 = *(_WORD *)v14; /*0x634d5b*/
    v30 = v14[2]; /*0x634d5d*/
    ScriptAction_field_0x30 = this->ScriptAction_field_0x30; /*0x634d63*/
    v15 = (int)ScriptAction_field_0x30; /*0x634d5e*/
    if ( ScriptAction_field_0x30 ) /*0x634d67*/
    {
      ScenarioClassActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634d75*/
      v17 = *ScenarioClassActionCoords; /*0x634d7a*/
      v18 = 0; /*0x634d7c*/
      v25 = ScenarioClassActionCoords[1]; /*0x634d83*/
      for ( i = ScenarioClassActionCoords[2]; v18 < v15; ++v18 ) /*0x634d8e*/
      {
        v19 = *(_DWORD **)(v24->ScriptAction_field_0x24 + 4 * v18); /*0x634d97*/
        if ( v19[28] ) /*0x634d9a*/
        {
          qmemcpy(v31, v19, sizeof(v31)); /*0x634dad*/
          v20 = v19 + 27; /*0x634dad*/
          v32 = *(_WORD *)v20; /*0x634daf*/
          v33 = *((_BYTE *)v20 + 2); /*0x634dbc*/
          v21 = GetScenarioClassActionCoords(v27, v31); /*0x634dbd*/
          if ( v17 == *v21 && v25 == v21[1] && i == v21[2] ) /*0x634dda*/
            return v18; /*0x634df3*/
          v15 = (int)ScriptAction_field_0x30; /*0x634ddc*/
        }
      }
    }
  }
  return -1; /*0x634de7*/
}



// ==== 0x00634E10  ScriptAction::PlaceObject  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction_PlaceObject(int this, _DWORD *a2)
{
  _DWORD *v3; // edi
  int result; // eax
  int Type; // esi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  _BYTE *v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // ebp
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // ebp
  int v24; // ecx
  _BYTE *v25; // esi
  _DWORD *ActionCoords; // eax
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // [esp+10h] [ebp-118h] BYREF
  int v30; // [esp+14h] [ebp-114h]
  _DWORD v31[3]; // [esp+18h] [ebp-110h] BYREF
  _DWORD v32[3]; // [esp+24h] [ebp-104h] BYREF
  int v33[3]; // [esp+30h] [ebp-F8h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-ECh] BYREF
  _BYTE v35[108]; // [esp+48h] [ebp-E0h] BYREF
  __int16 v36; // [esp+B4h] [ebp-74h]
  char v37; // [esp+B6h] [ebp-72h]
  _BYTE v38[108]; // [esp+B8h] [ebp-70h] BYREF
  __int16 v39; // [esp+124h] [ebp-4h]
  char v40; // [esp+126h] [ebp-2h]

  v3 = (_DWORD *)*a2; /*0x634e23*/
  result = ScriptAction::FindBuildingMatch(*a2); /*0x634e27*/
  if ( result == -1 ) /*0x634e31*/
  {
    Type = BuildingClass::GetType(v3); /*0x634e3e*/
    v6 = *(_DWORD *)(Type + 4); /*0x634e40*/
    v29 = this; /*0x634e47*/
    v7 = (*(int (__thiscall **)(int, int *))(v6 + 16))(Type + 4, &v29); /*0x634e4f*/
    if ( v7 == -1 ) /*0x634e55*/
    {
      v8 = 0; /*0x634e57*/
    }
    else
    {
      v9 = *(_DWORD *)(Type + 20); /*0x634e5b*/
      if ( v9 == 1 ) /*0x634e61*/
      {
        v8 = this; /*0x634e63*/
      }
      else
      {
        v10 = v7 - 1; /*0x634e67*/
        if ( v10 < 0 ) /*0x634e68*/
          v10 = v9 - 1; /*0x634e6a*/
        v8 = ArrayClass::GetAt_Wrap(v10); /*0x634e75*/
      }
    }
    v11 = BuildingClass::GetType(v3); /*0x634e79*/
    v12 = *(_DWORD *)(v11 + 20) - 1; /*0x634e81*/
    if ( v12 >= 0 ) /*0x634e82*/
      v13 = *(_DWORD *)(*(_DWORD *)(v11 + 8) + 4 * v12); /*0x634e8b*/
    else
      v13 = 0; /*0x634e84*/
    if ( v8 == v13 ) /*0x634e90*/
    {
      a2[2] = -1; /*0x634e96*/
      return -1; /*0x634e92*/
    }
    else
    {
      v14 = *(_BYTE **)(ScriptAction::FindItemByValue(v3) + 4); /*0x634ead*/
      qmemcpy(v35, v14, sizeof(v35)); /*0x634ebb*/
      v14 += 108; /*0x634ebb*/
      v36 = *(_WORD *)v14; /*0x634ebd*/
      v37 = v14[2]; /*0x634ebf*/
      v15 = __2_YAPAXI_Z(0x78u); /*0x634ec0*/
      v16 = 0; /*0x634ec5*/
      if ( v15 ) /*0x634ecc*/
      {
        v15[28] = 0; /*0x634ece*/
        *(_BYTE *)v15 = 0; /*0x634ed1*/
        v15[29] = -1; /*0x634ed4*/
        v16 = v15; /*0x634edb*/
      }
      v17 = v16[28]; /*0x634ee8*/
      qmemcpy(v16, v35, 0x6Cu); /*0x634eeb*/
      *((_WORD *)v16 + 54) = v36; /*0x634eed*/
      *((_BYTE *)v16 + 110) = v37; /*0x634eef*/
      v16[28] = v17 + 1; /*0x634ef4*/
      v18 = *(_DWORD *)(this + 40); /*0x634ef7*/
      if ( *(_DWORD *)(this + 48) < v18 /*0x634f1c*/
        || (*(_BYTE *)(this + 45) || !v18)
        && (v19 = *(_DWORD *)(this + 52), v19 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 32) + 8))(this + 32, v18 + v19, 0) )
      {
        v20 = *(_DWORD *)(this + 48); /*0x634f23*/
        v21 = *(_DWORD *)(this + 36); /*0x634f26*/
        *(_DWORD *)(this + 48) = v20 + 1; /*0x634f2c*/
        *(_DWORD *)(v21 + 4 * v20) = v16; /*0x634f2f*/
      }
      v22 = *(_DWORD *)(this + 168); /*0x634f35*/
      result = *(_DWORD *)(this + 48) - 1; /*0x634f3b*/
      v29 = result; /*0x634f3e*/
      if ( v22 > 0 && *(_DWORD *)(this + 176) == -1 ) /*0x634f53*/
      {
        *(_DWORD *)(this + 176) = -1; /*0x634f59*/
        if ( *(_DWORD *)(this + 168) ) /*0x634f5f*/
        {
          v23 = 0; /*0x634f79*/
          qmemcpy(v35, (const void *)(this + 56), sizeof(v35)); /*0x634f7b*/
          v24 = *(_DWORD *)(this + 48); /*0x634f7d*/
          v36 = *(_WORD *)(this + 164); /*0x634f80*/
          v37 = *(_BYTE *)(this + 166); /*0x634f84*/
          v30 = v24; /*0x634f85*/
          if ( v24 > 0 ) /*0x634f89*/
          {
            while ( 1 ) /*0x634fa2*/
            {
              v25 = *(_BYTE **)(*(_DWORD *)(this + 36) + 4 * v23); /*0x634fa2*/
              qmemcpy(v38, v25, sizeof(v38)); /*0x634fa5*/
              v25 += 108; /*0x634fa5*/
              v39 = *(_WORD *)v25; /*0x634fa7*/
              v40 = v25[2]; /*0x634fad*/
              ActionCoords = GetScenarioClassActionCoords(v34, v35); /*0x634fae*/
              v31[0] = *ActionCoords; /*0x634fb5*/
              v31[1] = ActionCoords[1]; /*0x634fc0*/
              v31[2] = ActionCoords[2]; /*0x634fce*/
              v27 = GetScenarioClassActionCoords(v33, v38); /*0x634fd2*/
              v32[0] = *v27; /*0x634fd9*/
              v32[1] = v27[1]; /*0x634fe5*/
              v32[2] = v27[2]; /*0x634ff0*/
              if ( Coord3D::Equals(v31, v32) ) /*0x634ff4*/
                break; /*0x634ff4*/
              if ( ++v23 >= v30 ) /*0x635004*/
                goto LABEL_30; /*0x635004*/
            }
            *(_DWORD *)(this + 176) = v23; /*0x635008*/
LABEL_30:
            result = v29; /*0x63500e*/
          }
        }
      }
      *(_DWORD *)(this + 180) = -1; /*0x63501b*/
      a2[2] = result; /*0x635026*/
    }
  }
  else
  {
    v28 = *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * result); /*0x635038*/
    *(_DWORD *)(v28 + 116) = -1; /*0x63503b*/
    *(_DWORD *)(this + 180) = -1; /*0x63503e*/
    ++*(_DWORD *)(v28 + 112); /*0x635048*/
    a2[2] = result; /*0x63504b*/
  }
  return result; /*0x634e95*/
}



// ==== 0x00635060  FactoryClass::FinishProduction  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::FinishProduction(int *this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // ecx

  if ( *(_BYTE *)(a2 + 12) ) /*0x63506c*/
  {
    *(_BYTE *)(a2 + 12) = 0; /*0x635073*/
    v3 = *(this + 42) - 1; /*0x63507d*/
    *(this + 42) = v3; /*0x63507e*/
    if ( !v3 ) /*0x635084*/
      this->q02C = -1; /*0x635086*/
  }
  result = *(_DWORD *)(a2 + 8); /*0x63508c*/
  if ( result != -1 ) /*0x635091*/
  {
    result = *(_DWORD *)(this->production + 4 * result); /*0x635096*/
    *(_DWORD *)(result + 116) = -1; /*0x635099*/
    this->u32_2D = -1; /*0x63509c*/
    v5 = *(_DWORD *)(result + 112) - 1; /*0x6350a5*/
    *(_DWORD *)(result + 112) = v5; /*0x6350a6*/
    if ( !v5 ) /*0x6350a9*/
    {
      if ( this ) /*0x6350ad*/
      {
        LOBYTE(result) = this->referenceCount; /*0x6350af*/
        if ( !(_BYTE)result ) /*0x6350b4*/
        {
          this->referenceCount = 1; /*0x6350b6*/
          result = dword_AC4CA0; /*0x6350ba*/
          if ( dword_AC4CA8 < dword_AC4CA0 /*0x6350f4*/
            || (byte_AC4CA5 || !dword_AC4CA0)
            && dword_AC4CAC > 0
            && (result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(dword_AC4C98 + 8))(
                           &dword_AC4C98,
                           dword_AC4CA0 + dword_AC4CAC,
                           0),
                (_BYTE)result) )
          {
            result = dword_AC4CA8++; /*0x6350fc*/
            *((_DWORD *)dword_AC4C9C + result) = this; /*0x63510b*/
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 8) = -1; /*0x63510e*/
  return result; /*0x635111*/
}



// ==== 0x00635120  FactoryClass::ClearObjects  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::ClearObjects(FactoryClass *this)
{
  int v2; // ebp
  int i; // edi
  int uniqueId; // edx
  int result; // eax
  int v6; // ecx

  v2 = this->queuedObjects[0]; /*0x635128*/
  for ( i = 0; i < v2; ++i ) /*0x63512f*/
    __3_YAXPAX_Z(*(void **)(this->production[0] + 4 * i)); /*0x635138*/
  (*((void (__thiscall **)(void **))this->? + 3))(&this->?); /*0x63514b*/
  uniqueId = this->?; /*0x63514e*/
  result = 0; /*0x635151*/
  if ( uniqueId <= 0 ) /*0x635155*/
  {
    *((_DWORD *)this + 42) = 0; /*0x63517d*/
    this->q02C = -1; /*0x635183*/
  }
  else
  {
    do /*0x63516a*/
    {
      v6 = *((_DWORD *)this->? + result++); /*0x635160*/
      *(_DWORD *)(v6 + 8) = -1; /*0x635164*/
      *(_BYTE *)(v6 + 12) = 0; /*0x635167*/
    }
    while ( result < uniqueId ); /*0x63516a*/
    *((_DWORD *)this + 42) = 0; /*0x63516c*/
    this->q02C = -1; /*0x635172*/
  }
  return result; /*0x635178*/
}



// ==== 0x006351E0  ScriptAction::DecrementRefCount  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::DecrementRefCount(ScriptAction *this, int a2)
{
  int result; // eax

  *(_BYTE *)(a2 + 12) = 0; /*0x6351e4*/
  result = (int)this->ScriptAction_field_0xA8 - 1; /*0x6351ee*/
  this->ScriptAction_field_0xA8 = (void *)result; /*0x6351ef*/
  if ( !result ) /*0x6351f5*/
    this->ScriptAction_field_0xB0 = (void *)-1; /*0x6351f7*/
  return result; /*0x635201*/
}



// ==== 0x00635210  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_635210(ObjectClass *this)
{
  int result; // eax
  int v3; // ebp
  _BYTE *v4; // esi
  int *ScenarioClassActionCoords; // eax
  int v6; // esi
  int v7; // edi
  int *v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // [esp+10h] [ebp-108h]
  int v12; // [esp+1Ch] [ebp-FCh]
  int v13[3]; // [esp+20h] [ebp-F8h] BYREF
  int v14[3]; // [esp+2Ch] [ebp-ECh] BYREF
  _BYTE v15[112]; // [esp+38h] [ebp-E0h] BYREF
  _BYTE v16[108]; // [esp+A8h] [ebp-70h] BYREF
  __int16 v17; // [esp+114h] [ebp-4h]
  char v18; // [esp+116h] [ebp-2h]

  this->fallRate = -1; /*0x63521b*/
  result = (int)this->lineTrailer; /*0x635225*/
  if ( result ) /*0x63522e*/
  {
    result = (int)this->nextObject; /*0x635240*/
    qmemcpy(v15, &this->attachedBomb, 0x6Eu); /*0x635243*/
    v3 = 0; /*0x635247*/
    v11 = result; /*0x635249*/
    v15[110] = BYTE2(this->location[2]); /*0x63524f*/
    if ( result > 0 ) /*0x635250*/
    {
      while ( 1 ) /*0x635265*/
      {
        v4 = *(_BYTE **)(this->occupant + 4 * v3); /*0x635265*/
        qmemcpy(v16, v4, sizeof(v16)); /*0x635268*/
        v4 += 108; /*0x635268*/
        v17 = *(_WORD *)v4; /*0x63526a*/
        v18 = v4[2]; /*0x635270*/
        ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, v15); /*0x635271*/
        v6 = *ScenarioClassActionCoords; /*0x635276*/
        v7 = ScenarioClassActionCoords[1]; /*0x63527f*/
        v12 = ScenarioClassActionCoords[2]; /*0x635285*/
        v8 = GetScenarioClassActionCoords(v14, v16); /*0x635292*/
        result = *v8; /*0x635294*/
        v9 = v8[1]; /*0x635298*/
        v10 = v8[2]; /*0x63529b*/
        if ( v6 == result && v7 == v9 && v12 == v10 ) /*0x6352a8*/
          break; /*0x6352a8*/
        result = v11; /*0x6352aa*/
        if ( ++v3 >= v11 ) /*0x6352b1*/
          return result; /*0x6352b1*/
      }
      this->fallRate = v3; /*0x6352b5*/
    }
  }
  return result; /*0x6352bb*/
}



// ==== 0x006352D0  ObjectClass::method_6352D0  this=ObjectClass  sig=csp ====
char __thiscall sub_6352D0(ObjectClass *this)
{
  int v2; // esi
  int uniqueId; // ebx
  _BYTE *v4; // ecx
  char result; // al

  v2 = 0; /*0x6352d5*/
  uniqueId = this->?; /*0x6352d7*/
  if ( uniqueId > 0 ) /*0x6352dc*/
  {
    do /*0x6352fb*/
    {
      v4 = (_BYTE *)**((_DWORD **)this->? + v2); /*0x6352e4*/
      result = v4[131]; /*0x6352e6*/
      if ( !result ) /*0x6352ee*/
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 332))(v4); /*0x6352f2*/
      ++v2; /*0x6352f8*/
    }
    while ( v2 < uniqueId ); /*0x6352fb*/
  }
  return result; /*0x6352fd*/
}



// ==== 0x00635310  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_635310(ObjectClass *this)
{
  int v2; // esi
  int uniqueId; // ebx
  _BYTE *v4; // ecx
  char result; // al

  v2 = 0; /*0x635315*/
  uniqueId = this->?; /*0x635317*/
  if ( uniqueId > 0 ) /*0x63531c*/
  {
    do /*0x63533b*/
    {
      v4 = (_BYTE *)**((_DWORD **)this->? + v2); /*0x635324*/
      result = v4[131]; /*0x635326*/
      if ( result ) /*0x63532e*/
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 336))(v4); /*0x635332*/
      ++v2; /*0x635338*/
    }
    while ( v2 < uniqueId ); /*0x63533b*/
  }
  return result; /*0x63533d*/
}



// ==== 0x00635350  ScenarioClass::RenderAction  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::RenderAction(ScenarioClass *this, int a2)
{
  int *Viewport; // eax
  int v4; // edx
  int v5; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int result; // eax
  int v10; // [esp+Ch] [ebp-44h] BYREF
  _DWORD v11[3]; // [esp+14h] [ebp-3Ch] BYREF
  int v12[4]; // [esp+20h] [ebp-30h] BYREF
  int v13; // [esp+30h] [ebp-20h] BYREF
  int v14; // [esp+34h] [ebp-1Ch]
  int v15; // [esp+38h] [ebp-18h]
  int v16; // [esp+3Ch] [ebp-14h]
  int v17; // [esp+40h] [ebp-10h] BYREF
  int v18; // [esp+44h] [ebp-Ch]
  int v19; // [esp+48h] [ebp-8h]
  int v20; // [esp+4Ch] [ebp-4h]

  Viewport = Display::GetViewport(v12); /*0x63535c*/
  v17 = *Viewport; /*0x635363*/
  v18 = Viewport[1]; /*0x63536a*/
  v19 = Viewport[2]; /*0x635371*/
  v4 = Viewport[3]; /*0x635375*/
  v5 = this->nextScenario[1]; /*0x635378*/
  v20 = v4; /*0x63537b*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v12, *(_BYTE **)(*(_DWORD *)v5 + 4)); /*0x635388*/
  v11[0] = *ScenarioClassActionCoords; /*0x63538f*/
  v11[1] = ScenarioClassActionCoords[1]; /*0x635396*/
  v11[2] = ScenarioClassActionCoords[2]; /*0x6353a1*/
  v7 = ToCoordPixel(&v10, v11); /*0x6353a9*/
  v8 = v7[1]; /*0x6353bc*/
  v13 = *v7 - 4; /*0x6353bf*/
  v14 = v8 - 4; /*0x6353cb*/
  v15 = 8; /*0x6353da*/
  v16 = 8; /*0x6353de*/
  (*(void (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x6353e9*/
    DSurface_Composite,
    &v17,
    &v13,
    a2);
  result = v13; /*0x6353ec*/
  if ( v17 < v13 + v15 && v18 < v14 + v16 && v17 + v19 > v13 ) /*0x63541a*/
  {
    result = v20; /*0x63541c*/
    if ( v20 + v18 > v14 ) /*0x635424*/
    {
      result = *(_DWORD *)&stru_AC4B30.__pad_EC[4]; /*0x635426*/
      if ( *(int *)&stru_AC4B30.__pad_EC[12] < *(int *)&stru_AC4B30.__pad_EC[4] /*0x635462*/
        || (stru_AC4B30.__pad_EC[9] || !*(_DWORD *)&stru_AC4B30.__pad_EC[4])
        && *(int *)&stru_AC4B30.__pad_EC[16] > 0
        && (result = (*((int (__thiscall **)(void **, int, _DWORD))stru_AC4B30.Array_field_0xE8 + 2))(
                       &stru_AC4B30.Array_field_0xE8,
                       *(_DWORD *)&stru_AC4B30.__pad_EC[16] + *(_DWORD *)&stru_AC4B30.__pad_EC[4],
                       0),
            (_BYTE)result) )
      {
        result = (*(_DWORD *)&stru_AC4B30.__pad_EC[12])++; /*0x63546a*/
        *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC + 4 * result) = this; /*0x635479*/
      }
    }
  }
  return result; /*0x63547c*/
}



// ==== 0x00635490  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int __thiscall Render_Render_635490(ObjectClass *this, int a2)
{
  int *Viewport; // eax
  int v4; // edx
  void *vtable1; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  int v8[2]; // [esp+4h] [ebp-44h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-3Ch] BYREF
  int v10[4]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v11[4]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v12[4]; // [esp+38h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v10); /*0x63549a*/
  v12[0] = *Viewport; /*0x6354a1*/
  v12[1] = Viewport[1]; /*0x6354a8*/
  v12[2] = Viewport[2]; /*0x6354af*/
  v4 = Viewport[3]; /*0x6354b3*/
  vtable1 = this->?; /*0x6354b6*/
  v12[3] = v4; /*0x6354b9*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(_BYTE **)(*(_DWORD *)vtable1 + 4)); /*0x6354c6*/
  v9[0] = *ScenarioClassActionCoords; /*0x6354cd*/
  v9[1] = ScenarioClassActionCoords[1]; /*0x6354d4*/
  v9[2] = ScenarioClassActionCoords[2]; /*0x6354eb*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, v8); /*0x6354ef*/
  v8[0] += DSurface_ViewBounds.field_0; /*0x63550a*/
  v11[0] = v8[0] - 4 + 1; /*0x635520*/
  v11[1] = (char *)DSurface_ViewBounds.field_4 + v8[1] - 3; /*0x63552c*/
  v11[2] = 6; /*0x635541*/
  v11[3] = 6; /*0x635545*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x635553*/
           DSurface_Composite,
           v12,
           v11,
           a2);
}



// ==== 0x00635560  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_635560(ObjectClass *this, int a2)
{
  int *Viewport; // eax
  int v4; // edx
  void *vtable1; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  int *v7; // eax
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // esi
  int result; // eax
  int v14; // [esp+10h] [ebp-54h] BYREF
  _DWORD v15[3]; // [esp+18h] [ebp-4Ch] BYREF
  int v16[4]; // [esp+24h] [ebp-40h] BYREF
  int v17; // [esp+34h] [ebp-30h] BYREF
  int v18; // [esp+38h] [ebp-2Ch]
  int v19; // [esp+3Ch] [ebp-28h]
  int v20; // [esp+40h] [ebp-24h]
  _DWORD v21[4]; // [esp+44h] [ebp-20h] BYREF
  _DWORD v22[4]; // [esp+54h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v16); /*0x63556d*/
  v21[0] = *Viewport; /*0x635574*/
  v21[1] = Viewport[1]; /*0x63557b*/
  v21[2] = Viewport[2]; /*0x635582*/
  v4 = Viewport[3]; /*0x635586*/
  vtable1 = this->?; /*0x635589*/
  v21[3] = v4; /*0x63558c*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v16, *(_BYTE **)(*(_DWORD *)vtable1 + 4)); /*0x635599*/
  v15[0] = *ScenarioClassActionCoords; /*0x6355a0*/
  v15[1] = ScenarioClassActionCoords[1]; /*0x6355a7*/
  v15[2] = ScenarioClassActionCoords[2]; /*0x6355b2*/
  v7 = ToCoordPixel(&v14, v15); /*0x6355ba*/
  v8 = ComputeBounds(v22, 8, *v7, v7[1]); /*0x6355cf*/
  v9 = 3; /*0x6355d6*/
  v10 = v8[1] - 4; /*0x6355e8*/
  v11 = v8[2] + 8; /*0x6355ee*/
  v12 = v8[3]; /*0x6355f1*/
  v17 = *v8 - 4; /*0x6355f4*/
  v18 = v10; /*0x6355fb*/
  v20 = v12 + 8; /*0x6355ff*/
  v19 = v11; /*0x635607*/
  do /*0x63566d*/
  {
    result = (*(int (__thiscall **)(AudioStream *, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x635620*/
               DSurface_Composite,
               v21,
               &v17,
               a2);
    if ( v19 > -2 && v20 > -2 ) /*0x63562d*/
    {
      ++v17; /*0x63564f*/
      ++v18; /*0x635657*/
      result = 2; /*0x63565b*/
      v19 -= 2; /*0x635664*/
      v20 -= 2; /*0x635668*/
    }
    else
    {
      v17 = 0; /*0x63562f*/
      v18 = 0; /*0x635633*/
      v19 = 0; /*0x635637*/
      v20 = 0; /*0x63563b*/
    }
    --v9; /*0x63566c*/
  }
  while ( v9 ); /*0x63566d*/
  return result; /*0x63566f*/
}



// ==== 0x00635680  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_635680(ObjectClass *this, int a2)
{
  int *Viewport; // eax
  _DWORD *Coords; // eax
  int *v5; // eax
  int *v6; // eax
  int v7; // edi
  int result; // eax
  int v9; // [esp+10h] [ebp-60h] BYREF
  _DWORD v10[3]; // [esp+18h] [ebp-58h] BYREF
  _DWORD v11[3]; // [esp+24h] [ebp-4Ch] BYREF
  int v12; // [esp+30h] [ebp-40h] BYREF
  int v13; // [esp+34h] [ebp-3Ch]
  int v14; // [esp+38h] [ebp-38h]
  int v15; // [esp+3Ch] [ebp-34h]
  int v16; // [esp+40h] [ebp-30h] BYREF
  int v17; // [esp+44h] [ebp-2Ch]
  int v18; // [esp+48h] [ebp-28h]
  int v19; // [esp+4Ch] [ebp-24h]
  _DWORD v20[4]; // [esp+50h] [ebp-20h] BYREF
  int v21[4]; // [esp+60h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(&v16); /*0x63568d*/
  v20[0] = *Viewport; /*0x635694*/
  v20[1] = Viewport[1]; /*0x63569b*/
  v20[2] = Viewport[2]; /*0x6356a2*/
  v20[3] = Viewport[3]; /*0x6356b0*/
  Coords = ScriptAction::GetCoords((ScriptAction *)this, v11); /*0x6356b4*/
  v10[0] = *Coords; /*0x6356bb*/
  v10[1] = Coords[1]; /*0x6356c6*/
  v10[2] = Coords[2]; /*0x6356d1*/
  v5 = ToCoordPixel(&v9, v10); /*0x6356d5*/
  v6 = ComputeBounds(v21, 8, *v5, v5[1]); /*0x6356ea*/
  v16 = *v6; /*0x6356f1*/
  v17 = v6[1]; /*0x6356f8*/
  v18 = v6[2]; /*0x6356ff*/
  v19 = v6[3]; /*0x63570a*/
  ShrinkRect(&v16, 4); /*0x635713*/
  v21[0] = v16; /*0x635728*/
  v12 = v16 - 4; /*0x635738*/
  v13 = v17 - 4; /*0x635740*/
  v14 = v18 + 8; /*0x635744*/
  v15 = v19 + 8; /*0x635748*/
  v7 = 3; /*0x63574c*/
  do /*0x6357b8*/
  {
    result = (*(int (__thiscall **)(AudioStream *, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63576b*/
               DSurface_Composite,
               v20,
               &v12,
               a2);
    if ( v14 > -2 && v15 > -2 ) /*0x635778*/
    {
      ++v12; /*0x63579a*/
      ++v13; /*0x6357a2*/
      result = 2; /*0x6357a6*/
      v14 -= 2; /*0x6357af*/
      v15 -= 2; /*0x6357b3*/
    }
    else
    {
      v12 = 0; /*0x63577a*/
      v13 = 0; /*0x63577e*/
      v14 = 0; /*0x635782*/
      v15 = 0; /*0x635786*/
    }
    --v7; /*0x6357b7*/
  }
  while ( v7 ); /*0x6357b8*/
  return result; /*0x6357ba*/
}



// ==== 0x006357D0  ShrinkRect  this=Rect  sig=csp ====
int __fastcall Rect_Shrink(_DWORD *a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  int v5; // edx
  int v6; // edi

  result = 2 * a2; /*0x6357d0*/
  if ( (a2 & 0x40000000) != 0 && (result >= a1[2] || result >= a1[3]) ) /*0x6357e0*/
  {
    *a1 = 0; /*0x6357e2*/
    a1[1] = 0; /*0x6357e8*/
    a1[2] = 0; /*0x6357ef*/
    a1[3] = 0; /*0x6357f6*/
  }
  else
  {
    v3 = a1[1]; /*0x635802*/
    *a1 -= a2; /*0x635807*/
    v4 = v3 - a2; /*0x63580c*/
    v5 = a1[3]; /*0x63580e*/
    v6 = result + a1[2]; /*0x635811*/
    a1[1] = v4; /*0x635813*/
    a1[2] = v6; /*0x635818*/
    a1[3] = result + v5; /*0x63581c*/
  }
  return result; /*0x6357fd*/
}



// ==== 0x00635830  BuildingClass::GetDrawColor  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass_GetDrawColor(int this)
{
  int result; // eax
  _DWORD *v3; // ebx
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  bool v9; // zf
  int v10; // edi
  int Type; // edi
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  int v17; // ecx
  int v18; // edx
  unsigned __int8 v19; // al
  int v20; // ecx
  int v21; // edi
  int v22; // edx
  unsigned __int8 v23[8]; // [esp+10h] [ebp-8h] BYREF

  result = *(_DWORD *)(this + 180); /*0x635839*/
  if ( result != -1 ) /*0x635842*/
    return result; /*0x635842*/
  v3 = ***(_DWORD ****)(this + 4); /*0x63584d*/
  v4 = v3[135]; /*0x63584f*/
  v5 = *(_DWORD *)(v4 + 48); /*0x635855*/
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v4) && dword_A83D4C ) /*0x635868*/
    v5 = *((_DWORD *)dword_A83D4C + 12); /*0x63586a*/
  v6 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v5] + 22265; /*0x635878*/
  *(_WORD *)v23 = *(_WORD *)v6; /*0x635880*/
  v23[2] = *(_BYTE *)(v6 + 2); /*0x63588c*/
  result = ((int (__stdcall *)(int))ColorLerpAndPack)(80); /*0x635895*/
  *(_DWORD *)(this + 180) = result; /*0x63589a*/
  v7 = *(_DWORD *)(this + 48); /*0x6358a0*/
  v8 = 0; /*0x6358a3*/
  v9 = v7 == 0; /*0x6358a5*/
  if ( v7 <= 0 ) /*0x6358a7*/
  {
LABEL_10:
    if ( v9 ) /*0x6358c1*/
    {
      Type = BuildingClass::GetType(v3); /*0x6358ce*/
      v12 = *(_DWORD *)(Type + 4); /*0x6358d0*/
      *(_DWORD *)v23 = this; /*0x6358d7*/
      v13 = (*(int (__thiscall **)(int, unsigned __int8 *))(v12 + 16))(Type + 4, v23); /*0x6358df*/
      v14 = *(_DWORD *)(Type + 140); /*0x6358e2*/
      if ( v14 == -1 || v13 < v14 ) /*0x6358f8*/
        return *(_DWORD *)(this + 180); /*0x6358f8*/
      v15 = v3[135]; /*0x6358fe*/
      v16 = *(_DWORD *)(v15 + 48); /*0x635904*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v15) ) /*0x635907*/
      {
        if ( dword_A83D4C ) /*0x635917*/
          v16 = *((_DWORD *)dword_A83D4C + 12); /*0x635919*/
      }
      v17 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v16] + 22265; /*0x63592b*/
      *(_WORD *)v23 = *(_WORD *)v17; /*0x635934*/
      v23[2] = *(_BYTE *)(v17 + 2); /*0x635940*/
      Color::Lerp(v23, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x635944*/
      v18 = (v23[1] >> g_BitMask_Blue << g_BitMask_Green) | (v23[2] >> g_BitMask_Red << g_BitShift_Blue); /*0x63597c*/
      v19 = v23[0]; /*0x63597e*/
    }
    else
    {
      v20 = v3[135]; /*0x635987*/
      v21 = *(_DWORD *)(v20 + 48); /*0x63598d*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v20) && dword_A83D4C ) /*0x6359a0*/
        v21 = *((_DWORD *)dword_A83D4C + 12); /*0x6359a2*/
      v22 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v21] + 22265; /*0x6359b5*/
      *(_WORD *)v23 = *(_WORD *)v22; /*0x6359be*/
      v23[2] = *(_BYTE *)(v22 + 2); /*0x6359c6*/
      Color::Lerp(v23, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x6359ce*/
      v18 = (v23[1] >> g_BitMask_Blue << g_BitMask_Green) | (v23[2] >> g_BitMask_Red << g_BitShift_Blue); /*0x635a06*/
      v19 = v23[0]; /*0x635a08*/
    }
    *(_DWORD *)(this + 180) = (v19 >> g_BitShift_Green_0 << g_BitShift_Red) | v18; /*0x635a23*/
    return *(_DWORD *)(this + 180); /*0x635a29*/
  }
  v10 = *(_DWORD *)(this + 36); /*0x6358a9*/
  while ( *(_DWORD *)(*(_DWORD *)v10 + 116) != result ) /*0x6358b1*/
  {
    ++v8; /*0x6358b7*/
    v10 += 4; /*0x6358b8*/
    if ( v8 >= v7 ) /*0x6358bd*/
    {
      v9 = v7 == 0; /*0x6358bf*/
      goto LABEL_10; /*0x6358bf*/
    }
  }
  return result; /*0x635a2f*/
}



// ==== 0x00635A40  TeamClass::FindByMemberType  this=TeamClass  sig=csp ====
int __thiscall TeamClass::FindByMemberType(TeamClass *this, int a2)
{
  int result; // eax
  int uniqueId; // ecx
  BuildingClass *v5; // edi
  int v6; // ebp
  int v7; // eax
  int Type; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  HouseClass *owner; // ecx
  void *relatedTagsCount; // esi
  int v14; // ecx
  int v15; // eax
  unsigned __int8 Color_field_00; // dl
  HouseClass *v17; // ecx
  void *Object_field_0x30; // esi
  int v19; // eax
  int v20; // [esp+10h] [ebp-10h]
  TeamClass *v21; // [esp+14h] [ebp-Ch] BYREF
  Color v22[2]; // [esp+18h] [ebp-8h] BYREF

  v20 = *((_DWORD *)&this->buildingType->AbstractClass + a2); /*0x635a53*/
  result = *(_DWORD *)(v20 + 116); /*0x635a57*/
  if ( result == -1 ) /*0x635a5d*/
  {
    uniqueId = this->?; /*0x635a63*/
    v5 = 0; /*0x635a66*/
    v6 = 0; /*0x635a68*/
    v22[0].Color_field_00 = uniqueId; /*0x635a6a*/
    if ( uniqueId <= 0 ) /*0x635a70*/
    {
      return -1; /*0x635b54*/
    }
    else
    {
      do /*0x635abd*/
      {
        v7 = *((_DWORD *)this->? + v6); /*0x635a79*/
        if ( *(_DWORD *)(v7 + 8) == a2 ) /*0x635a83*/
        {
          v5 = *(BuildingClass **)v7; /*0x635a85*/
          Type = BuildingClass::GetType(*(BuildingClass **)v7); /*0x635a8e*/
          v9 = *(_DWORD *)(Type + 4); /*0x635a90*/
          v21 = this; /*0x635a97*/
          v10 = (*(int (__thiscall **)(int, TeamClass **))(v9 + 16))(Type + 4, &v21); /*0x635a9f*/
          v11 = *(_DWORD *)(Type + 140); /*0x635aa2*/
          if ( v11 == -1 || v10 < v11 ) /*0x635ab4*/
          {
            owner = v5->?; /*0x635acb*/
            relatedTagsCount = (void *)owner->relatedTagsCount; /*0x635acd*/
            if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) && dword_A83D4C ) /*0x635ae0*/
              relatedTagsCount = dword_A83D4C->Object_field_0x30; /*0x635ae2*/
            v14 = *((_DWORD *)stru_A80220.? + (_DWORD)relatedTagsCount) + 22265; /*0x635af4*/
            LOWORD(v22[0].Color_field_00) = *(_WORD *)v14; /*0x635afd*/
            BYTE2(v22[0].Color_field_00) = *(_BYTE *)(v14 + 2); /*0x635b09*/
            Color::Lerp(v22, 0x50u, &byte_A83CD9); /*0x635b0d*/
            v15 = (BYTE1(v22[0].Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635b45*/
                | (BYTE2(v22[0].Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
            Color_field_00 = v22[0].Color_field_00; /*0x635b47*/
            goto LABEL_19; /*0x635b4b*/
          }
          uniqueId = v22[0].Color_field_00; /*0x635ab6*/
        }
        ++v6; /*0x635aba*/
      }
      while ( v6 < uniqueId ); /*0x635abd*/
      if ( !v5 ) /*0x635b52*/
        return -1; /*0x635b52*/
      v17 = v5->?; /*0x635b61*/
      Object_field_0x30 = (void *)v17->relatedTagsCount; /*0x635b67*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v17) ) /*0x635b6a*/
      {
        if ( dword_A83D4C ) /*0x635b7a*/
          Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x635b7c*/
      }
      v19 = *((_DWORD *)stru_A80220.? + (_DWORD)Object_field_0x30) + 22265; /*0x635b8f*/
      LOWORD(v22[0].Color_field_00) = *(_WORD *)v19; /*0x635b97*/
      BYTE2(v22[0].Color_field_00) = *(_BYTE *)(v19 + 2); /*0x635ba3*/
      Color::Lerp(v22, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x635ba7*/
      v15 = (BYTE1(v22[0].Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635bdf*/
          | (BYTE2(v22[0].Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
      Color_field_00 = v22[0].Color_field_00; /*0x635be1*/
LABEL_19:
      result = (Color_field_00 >> g_BitShift_Green_0 << g_BitShift_Red) | v15; /*0x635be5*/
      *(_DWORD *)(v20 + 116) = result; /*0x635c01*/
    }
  }
  return result; /*0x635b54*/
}



// ==== 0x00635C10  TeamClass::GetMember  this=TeamClass  sig=csp ====
int __thiscall TeamClass::GetMember(TeamClass *this)
{
  int result; // eax
  int uniqueId; // ebp
  BuildingClass *v4; // esi
  int v5; // edi
  int v6; // eax
  HouseClass *owner; // ecx
  void *relatedTagsCount; // edi
  int v9; // edx
  int v10; // eax
  unsigned __int8 Color_field_00; // dl
  HouseClass *v12; // ecx
  void *Object_field_0x30; // esi
  int v14; // ecx
  Color v15; // [esp+10h] [ebp-8h] BYREF

  result = this->q02B; /*0x635c18*/
  if ( result == -1 ) /*0x635c22*/
  {
    uniqueId = this->?; /*0x635c28*/
    v4 = 0; /*0x635c2b*/
    v5 = 0; /*0x635c2d*/
    if ( uniqueId <= 0 ) /*0x635c31*/
    {
      return -1; /*0x635c60*/
    }
    else
    {
      do /*0x635c56*/
      {
        v6 = *((_DWORD *)this->? + v5); /*0x635c36*/
        if ( *(_BYTE *)(v6 + 12) ) /*0x635c39*/
        {
          v4 = *(BuildingClass **)v6; /*0x635c40*/
          if ( !*(_BYTE *)(BuildingClass::GetType(*(BuildingClass **)v6) + 152) ) /*0x635c51*/
          {
            owner = v4->?; /*0x635c71*/
            relatedTagsCount = (void *)owner->relatedTagsCount; /*0x635c73*/
            if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) && dword_A83D4C ) /*0x635c86*/
              relatedTagsCount = dword_A83D4C->Object_field_0x30; /*0x635c88*/
            v9 = *((_DWORD *)stru_A80220.? + (_DWORD)relatedTagsCount) + 22265; /*0x635c9b*/
            LOWORD(v15.Color_field_00) = *(_WORD *)v9; /*0x635ca4*/
            BYTE2(v15.Color_field_00) = *(_BYTE *)(v9 + 2); /*0x635cac*/
            Color::Lerp(&v15, 0x50u, &byte_A83CD9); /*0x635cb4*/
            v10 = (BYTE1(v15.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635cec*/
                | (BYTE2(v15.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
            Color_field_00 = v15.Color_field_00; /*0x635cee*/
            goto LABEL_16; /*0x635cf2*/
          }
        }
        ++v5; /*0x635c53*/
      }
      while ( v5 < uniqueId ); /*0x635c56*/
      if ( !v4 ) /*0x635c5a*/
        return -1; /*0x635c5a*/
      v12 = v4->?; /*0x635cf7*/
      Object_field_0x30 = (void *)v12->relatedTagsCount; /*0x635cfd*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v12) ) /*0x635d00*/
      {
        if ( dword_A83D4C ) /*0x635d10*/
          Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x635d12*/
      }
      v14 = *((_DWORD *)stru_A80220.? + (_DWORD)Object_field_0x30) + 22265; /*0x635d24*/
      LOWORD(v15.Color_field_00) = *(_WORD *)v14; /*0x635d2d*/
      BYTE2(v15.Color_field_00) = *(_BYTE *)(v14 + 2); /*0x635d39*/
      Color::Lerp(&v15, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x635d3d*/
      v10 = (BYTE1(v15.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635d75*/
          | (BYTE2(v15.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
      Color_field_00 = v15.Color_field_00; /*0x635d77*/
LABEL_16:
      result = (Color_field_00 >> g_BitShift_Green_0 << g_BitShift_Red) | v10; /*0x635d7b*/
      this->q02B = result; /*0x635d93*/
    }
  }
  return result; /*0x635c60*/
}



// ==== 0x00635DB0  TeamClass::Reset  this=TeamClass  sig=csp ====
int __thiscall TeamClass::Reset(TeamClass *this, char a2)
{
  int result; // eax
  HouseClass *target; // edx

  LOBYTE(result) = a2; /*0x635db0*/
  *((_DWORD *)this + 45) = -1; /*0x635dba*/
  if ( a2 ) /*0x635dc0*/
  {
    target = this->target; /*0x635dc2*/
    for ( result = 0; result < (int)target; *(_DWORD *)(*((_DWORD *)this->buildingType + result - 1) + 116) = -1 ) /*0x635dc9*/
      ++result; /*0x635dcf*/
    this->q02B = -1; /*0x635ddc*/
  }
  return result; /*0x635de2*/
}



// ==== 0x00635DF0  ObjectClass::method_635DF0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_635DF0(ObjectClass *this, _DWORD *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  char *v4; // ecx
  int v5[2]; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v6[3]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v7[4]; // [esp+20h] [ebp-10h] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, *(_BYTE **)(*(_DWORD *)this->? + 4)); /*0x635e02*/
  v6[0] = *ScenarioClassActionCoords; /*0x635e09*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x635e10*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x635e27*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x635e2b*/
  v5[0] += DSurface_ViewBounds.field_0; /*0x635e48*/
  v4 = (char *)DSurface_ViewBounds.field_4 + v5[1] - 8; /*0x635e64*/
  *a2 = v5[0] - 8; /*0x635e69*/
  a2[1] = v4; /*0x635e70*/
  a2[2] = 16; /*0x635e73*/
  a2[3] = 16; /*0x635e76*/
  return a2; /*0x635e6f*/
}



// ==== 0x00635E90  ObjectClass::method_635E90  this=ObjectClass  sig=csp ====
int *__thiscall sub_635E90(ObjectClass *this, int *a2)
{
  _DWORD *ScenarioClassActionCoords; // eax
  int *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  int v8; // esi
  int v10; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v11[3]; // [esp+14h] [ebp-28h] BYREF
  _DWORD v12[3]; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD v13[4]; // [esp+2Ch] [ebp-10h] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v12, *(_BYTE **)(*(_DWORD *)this->? + 4)); /*0x635ea2*/
  v11[0] = *ScenarioClassActionCoords; /*0x635ea9*/
  v11[1] = ScenarioClassActionCoords[1]; /*0x635eb0*/
  v11[2] = ScenarioClassActionCoords[2]; /*0x635ebb*/
  v3 = ToCoordPixel(&v10, v11); /*0x635ec3*/
  v4 = ComputeBounds(v13, 8, *v3, v3[1]); /*0x635edd*/
  v5 = *v4 - 8; /*0x635ee7*/
  v6 = v4[1] - 8; /*0x635ef0*/
  v7 = v4[2] + 8; /*0x635ef3*/
  v8 = v4[3]; /*0x635ef6*/
  *a2 = v5; /*0x635f0c*/
  a2[1] = v6; /*0x635f0f*/
  a2[2] = v7 + 8; /*0x635f12*/
  a2[3] = v8 + 16; /*0x635f15*/
  return a2; /*0x635f0e*/
}



// ==== 0x00635F20  ScriptAction::Constructor  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::Constructor(ScriptAction *this, int a2)
{
  this->ScriptAction_field_0x8[0] = 0; /*0x635f27*/
  *(_DWORD *)this->__pad_C = 0; /*0x635f2a*/
  LOBYTE(this->ScriptAction_field_0x10[0]) = 1; /*0x635f2d*/
  BYTE1(this->ScriptAction_field_0x10[0]) = 0; /*0x635f31*/
  this->ScriptAction_field_0x4[0] = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x635f34*/
  this->ScriptAction_field_0x18[0] = 10; /*0x635f3b*/
  this->ScriptAction_field_0x14 = 0; /*0x635f42*/
  this->__pad_1C[0] = 0; /*0x635f45*/
  this->__pad_1C[1] = 0; /*0x635f48*/
  LOBYTE(this->ScriptAction_field_0x98) = 0; /*0x635f4b*/
  BYTE1(this->ScriptAction_field_0x98) = 0; /*0x635f51*/
  this->ScriptAction_field_0x8C = (void *)-1; /*0x635f5b*/
  *(_DWORD *)this->__pad_90 = -1; /*0x635f61*/
  this->ScriptAction_field_0x94 = (void *)-1; /*0x635f67*/
  *(_DWORD *)this->__pad_0 = a2; /*0x635f6d*/
  return this->__pad_0; /*0x635f6f*/
}



// ==== 0x00635F80  FactoryClass::FindAvailable  this=FactoryClass  sig=csp ====
void __thiscall FactoryClass::FindAvailable(FactoryClass *this)
{
  BuildingClass *vtable0; // ecx
  int v3; // eax
  int abstractFlags; // ebx
  int i; // ebp
  Array *v6; // esi
  int Value; // eax
  void *v8; // eax
  int v9; // ecx
  void *Object_field_0x30; // esi
  void *vtable2; // eax
  void *Block; // [esp+14h] [ebp-4h] BYREF

  vtable0 = (BuildingClass *)this->AbstractClass; /*0x635f89*/
  if ( vtable0 ) /*0x635f8d*/
    BuildingClass::SetType(vtable0, 0); /*0x635f91*/
  Block = this; /*0x635f9b*/
  if ( !stru_AC4B30.__pad_EC[217] ) /*0x635fa1*/
  {
    v3 = (*(int (__thiscall **)(char *, void **))(*(_DWORD *)&stru_AC4B30.__pad_EC[92] + 16))( /*0x635fb3*/
           &stru_AC4B30.__pad_EC[92],
           &Block);
    if ( v3 != -1 && v3 < *(int *)&stru_AC4B30.__pad_EC[108] ) /*0x635fc3*/
    {
      --*(_DWORD *)&stru_AC4B30.__pad_EC[108]; /*0x635fc8*/
      for ( ; /*0x635fce*/
            v3 < *(int *)&stru_AC4B30.__pad_EC[108];
            *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[96] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[96]
                                                                                       + 4 * v3) )
      {
        ++v3; /*0x635fd6*/
      }
    }
  }
  abstractFlags = this->?; /*0x635fe8*/
  for ( i = 0; i < abstractFlags; ++i ) /*0x635ff6*/
  {
    v6 = (Array *)*((_DWORD *)this->? + i); /*0x635ffb*/
    Value = Array::FindValue(v6, (int)this->AbstractClass); /*0x636003*/
    if ( Value == -1 ) /*0x63600b*/
      v8 = 0; /*0x63600d*/
    else
      v8 = (void *)*((_DWORD *)v6->Array_field_0x4 + Value); /*0x636014*/
    Block = v8; /*0x636019*/
    if ( v8 ) /*0x63601d*/
    {
      FactoryClass::FinishProduction((int *)v6->__pad_0, (int)v8); /*0x636022*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x63602f*/
      FactoryClass::RemoveItemAt((FactoryClass *)v6, (int)&Block); /*0x63603e*/
      __3_YAXPAX_Z(Block); /*0x636048*/
      if ( !v6->Array_field_0x10 ) /*0x63604d*/
      {
        if ( v6 ) /*0x636059*/
          FactoryClass::RemoveFromArrays((FactoryClass *)v6, 1); /*0x63605f*/
      }
    }
  }
  if ( abstractFlags ) /*0x63606f*/
  {
    Block = this->AbstractClass; /*0x636073*/
    v9 = *((_DWORD *)Block + 135); /*0x636077*/
    Object_field_0x30 = *(void **)(v9 + 48); /*0x63607d*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)v9) && dword_A83D4C ) /*0x636090*/
      Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x636092*/
    DecFactoryClassCounter((unsigned int)Object_field_0x30); /*0x636097*/
    VectorClass::EraseAt((VectorClass *)&stru_AC4B30.__pad_EC[36], (int)&Block); /*0x6360a6*/
  }
  (*((void (__thiscall **)(void **))this->? + 3))(&this->?); /*0x6360b3*/
  *((_BYTE *)this + 152) = 0; /*0x6360b9*/
  *((_DWORD *)this + 35) = -1; /*0x6360c0*/
  this->production = -1; /*0x6360c6*/
  *((_DWORD *)this + 37) = -1; /*0x6360cc*/
  *((_BYTE *)this + 153) = 0; /*0x6360d2*/
  vtable2 = this->?; /*0x6360d9*/
  this->? = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x6360e0*/
  if ( vtable2 && BYTE1(this->?) ) /*0x6360e8*/
  {
    __3_YAXPAX_Z(vtable2); /*0x6360f0*/
    this->? = 0; /*0x6360f8*/
  }
  this->? = 0; /*0x6360fb*/
  BYTE1(this->?) = 0; /*0x6360fe*/
}



// ==== 0x00636110  ObjectClass::ReadPointerFromECX2  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX2(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x636112*/
}



// ==== 0x00636120  TeamClass::RemoveAllMembers  this=TeamClass  sig=csp ====
int __thiscall TeamClass::RemoveAllMembers(TeamClass *this)
{
  int abstractFlags; // ecx
  int v3; // eax
  int v4; // esi
  int Value; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int Object_field_0x30; // esi
  int v13; // eax
  int result; // eax
  bool v15; // [esp+Bh] [ebp-Dh]
  void *Block; // [esp+Ch] [ebp-Ch] BYREF
  int i; // [esp+10h] [ebp-8h]
  _DWORD *vtable0; // [esp+14h] [ebp-4h] BYREF

  abstractFlags = this->?; /*0x636127*/
  v15 = abstractFlags == 0; /*0x63612c*/
  v3 = 0; /*0x636131*/
  vtable0 = (_DWORD *)abstractFlags; /*0x636133*/
  for ( i = 0; i < (int)vtable0; ++i ) /*0x63613d*/
  {
    v4 = *((_DWORD *)this->? + v3); /*0x636148*/
    Value = Array::FindValue((Array *)v4, (int)this->AbstractClass); /*0x636150*/
    if ( Value == -1 ) /*0x636158*/
      v6 = 0; /*0x63615a*/
    else
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * Value); /*0x636161*/
    Block = (void *)v6; /*0x636166*/
    if ( v6 ) /*0x63616a*/
    {
      if ( *(_BYTE *)(v6 + 12) ) /*0x636170*/
        ScriptAction::DecrementRefCount((ScriptAction *)v4, v6); /*0x63617a*/
      v7 = *(_DWORD *)(v6 + 8); /*0x63617f*/
      if ( v7 != -1 ) /*0x636185*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v4 + 36) + 4 * v7); /*0x63618c*/
        *(_DWORD *)(v8 + 116) = -1; /*0x636191*/
        TeamClass::Reset((TeamClass *)v4, 0); /*0x636198*/
        v9 = *(_DWORD *)(v8 + 112) - 1; /*0x6361a0*/
        *(_DWORD *)(v8 + 112) = v9; /*0x6361a1*/
        if ( !v9 ) /*0x6361a4*/
          ScriptQueue::PushEntry((ScriptQueue *)v4); /*0x6361a8*/
      }
      *(_DWORD *)(v6 + 8) = -1; /*0x6361ad*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6361bc*/
      v10 = (*(int (__thiscall **)(int, void **))(*(_DWORD *)v4 + 16))(v4, &Block); /*0x6361cd*/
      if ( v10 != -1 ) /*0x6361d3*/
        Vector4::EraseAt_Copy((Vector4 *)v4, v10); /*0x6361d8*/
      __3_YAXPAX_Z(Block); /*0x6361e2*/
      if ( !*(_DWORD *)(v4 + 16) && v4 ) /*0x6361f3*/
      {
        FactoryClass::ClearObjects((FactoryClass *)v4); /*0x6361f7*/
        Team_Remove((ObjectClass *)v4); /*0x6361fe*/
        *(_DWORD *)(v4 + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x636206*/
        VectorClass::Cleanup2(v4 + 32); /*0x63620c*/
        *(_DWORD *)v4 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x636213*/
        VectorClass_ptr_PlanningMemberClass::Remove((_VectorClass_PAVPlanningMemberClass *)v4); /*0x636219*/
        __3_YAXPAX_Z((void *)v4); /*0x63621f*/
      }
    }
    v3 = i + 1; /*0x63622f*/
  }
  if ( !v15 ) /*0x636244*/
  {
    vtable0 = this->AbstractClass; /*0x63624c*/
    v11 = vtable0[135]; /*0x636250*/
    Object_field_0x30 = *(_DWORD *)(v11 + 48); /*0x636256*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)v11) && dword_A83D4C ) /*0x636269*/
      Object_field_0x30 = (unsigned int)dword_A83D4C->Object_field_0x30; /*0x63626b*/
    if ( Object_field_0x30 < 0x18 ) /*0x636270*/
      *(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] = (*(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] /*0x63628a*/
                                                                    - 1)
                                                                   & ((*(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12]
                                                                     - 1 < 0)
                                                                    - 1);
    v13 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&stru_AC4B30.__pad_EC[36] + 16))( /*0x6362a1*/
            &stru_AC4B30.__pad_EC[36],
            &vtable0);
    if ( v13 != -1 && v13 < *(int *)&stru_AC4B30.__pad_EC[52] ) /*0x6362b3*/
    {
      --*(_DWORD *)&stru_AC4B30.__pad_EC[52]; /*0x6362b8*/
      for ( ; /*0x6362be*/
            v13 < *(int *)&stru_AC4B30.__pad_EC[52];
            *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40] + 4 * v13 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40]
                                                                                        + 4 * v13) )
      {
        ++v13; /*0x6362c6*/
      }
    }
  }
  result = (*((int (__thiscall **)(void **))this->? + 3))(&this->?); /*0x6362e3*/
  this->countObjects[1] = -1; /*0x6362e6*/
  this->countObjects[2] = -1; /*0x6362ec*/
  this->countObjects[3] = -1; /*0x6362f2*/
  LOBYTE(this->countObjects[4]) = 0; /*0x6362f8*/
  BYTE1(this->countObjects[4]) = 0; /*0x6362ff*/
  return result; /*0x636306*/
}



// ==== 0x00636310  Sidebar::CancelSidebarProductionQueue  this=Sidebar  sig=csp ====
void __thiscall Sidebar::CancelSidebarProductionQueue(Sidebar *this)
{
  int v2; // ebx
  int i; // ebp
  Array *v4; // edi
  int Value; // eax
  void *v6; // eax
  int v7; // eax
  int v8; // ecx
  void *Object_field_0x30; // edi
  int *Sidebar_field_0x4; // edi
  int v11; // eax
  int v12; // ebx
  int j; // ebp
  unsigned int LeaderIndex; // eax
  void *Sidebar_field_0x8; // eax
  void *Block; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this->__pad_14; /*0x636319*/
  for ( i = 0; i < v2; ++i ) /*0x636327*/
  {
    v4 = (Array *)*((_DWORD *)this->Sidebar_field_0x8 + i); /*0x63632c*/
    Value = Array::FindValue(v4, *(_DWORD *)this->__pad_0); /*0x636334*/
    if ( Value == -1 ) /*0x63633c*/
      v6 = 0; /*0x63633e*/
    else
      v6 = (void *)*((_DWORD *)v4->Array_field_0x4 + Value); /*0x636345*/
    Block = v6; /*0x63634a*/
    if ( v6 ) /*0x63634e*/
    {
      FactoryClass::FinishProduction((int *)v4->__pad_0, (int)v6); /*0x636353*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x636360*/
      v7 = (*(int (__thiscall **)(Array *, void **))(*(_DWORD *)v4->__pad_0 + 16))(v4, &Block); /*0x636371*/
      if ( v7 != -1 ) /*0x636377*/
        Vector4::EraseAt_Copy((Vector4 *)v4, v7); /*0x63637c*/
      __3_YAXPAX_Z(Block); /*0x636386*/
      if ( !v4->Array_field_0x10 && v4 ) /*0x636397*/
        FactoryClass::RemoveFromArrays((FactoryClass *)v4, 1); /*0x63639d*/
    }
  }
  if ( v2 ) /*0x6363ad*/
  {
    Block = *(void **)this->__pad_0; /*0x6363b1*/
    v8 = *((_DWORD *)Block + 135); /*0x6363b5*/
    Object_field_0x30 = *(void **)(v8 + 48); /*0x6363bb*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)v8) && dword_A83D4C ) /*0x6363ce*/
      Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x6363d0*/
    DecFactoryClassCounter((unsigned int)Object_field_0x30); /*0x6363d5*/
    VectorClass::EraseAt((VectorClass *)&stru_AC4B30.__pad_EC[36], (int)&Block); /*0x6363e4*/
  }
  Sidebar_field_0x4 = this->Sidebar_field_0x4; /*0x6363ec*/
  (*(void (__thiscall **)(int *))(this->Sidebar_field_0x4[0] + 12))(this->Sidebar_field_0x4); /*0x6363f1*/
  this->__pad_70[40] = 0; /*0x6363f7*/
  *(_DWORD *)&this->__pad_70[28] = -1; /*0x636400*/
  *(_DWORD *)&this->__pad_70[32] = -1; /*0x636406*/
  *(_DWORD *)&this->__pad_70[36] = -1; /*0x63640c*/
  this->__pad_70[41] = 0; /*0x636412*/
  *(_DWORD *)this->__pad_0 = 0; /*0x636419*/
  if ( this ) /*0x63641f*/
  {
    if ( *(_DWORD *)this->__pad_0 ) /*0x636425*/
      BuildingClass::SetType(*(BuildingClass **)this->__pad_0, 0); /*0x63642d*/
    Block = this; /*0x636437*/
    if ( !stru_AC4B30.__pad_EC[217] ) /*0x63643d*/
    {
      v11 = (*(int (__thiscall **)(char *, void **))(*(_DWORD *)&stru_AC4B30.__pad_EC[92] + 16))( /*0x63644f*/
              &stru_AC4B30.__pad_EC[92],
              &Block);
      if ( v11 != -1 ) /*0x636454*/
        Sidebar::RemoveItem((Sidebar *)&stru_AC4B30.__pad_EC[92], v11); /*0x63645c*/
    }
    v12 = *(_DWORD *)this->__pad_14; /*0x636461*/
    for ( j = 0; j < v12; ++j ) /*0x63646f*/
      TeamClass::DestroyAllMembers(*((TeamClass **)this->Sidebar_field_0x8 + j), *(_DWORD **)this->__pad_0); /*0x63647a*/
    if ( v12 ) /*0x63648a*/
    {
      v17 = *(_DWORD *)this->__pad_0; /*0x63648e*/
      LeaderIndex = TeamClass::GetLeaderIndex((TeamClass *)v17); /*0x636492*/
      DecFactoryClassCounter(LeaderIndex); /*0x636499*/
      VectorClass::EraseAt((VectorClass *)&stru_AC4B30.__pad_EC[36], (int)&v17); /*0x6364a8*/
    }
    (*(void (__thiscall **)(int *))(*Sidebar_field_0x4 + 12))(this->Sidebar_field_0x4); /*0x6364b1*/
    this->__pad_70[40] = 0; /*0x6364b7*/
    *(_DWORD *)&this->__pad_70[28] = -1; /*0x6364be*/
    *(_DWORD *)&this->__pad_70[32] = -1; /*0x6364c4*/
    *(_DWORD *)&this->__pad_70[36] = -1; /*0x6364ca*/
    this->__pad_70[41] = 0; /*0x6364d0*/
    Sidebar_field_0x8 = this->Sidebar_field_0x8; /*0x6364d7*/
    *Sidebar_field_0x4 = (int)&VectorClass<PlanningNodeClass *>::`vftable'; /*0x6364de*/
    if ( Sidebar_field_0x8 ) /*0x6364e4*/
    {
      if ( BYTE1(this->Sidebar_field_0x10) ) /*0x6364e6*/
      {
        __3_YAXPAX_Z(Sidebar_field_0x8); /*0x6364ee*/
        this->Sidebar_field_0x8 = 0; /*0x6364f6*/
      }
    }
    BYTE1(this->Sidebar_field_0x10) = 0; /*0x6364fa*/
    this->Sidebar_field_0xC[0] = 0; /*0x6364fe*/
    __3_YAXPAX_Z(this); /*0x636501*/
  }
}



// ==== 0x00636520  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_636520(ObjectClass *this)
{
  LOBYTE(this->?) = 1; /*0x636520*/
}



// ==== 0x00636530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_636530(ObjectClass *this)
{
  LOBYTE(this->?) = 0; /*0x636530*/
}



// ==== 0x00636540  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_636540(ObjectClass *this)
{
  return this->?; /*0x636543*/
}



// ==== 0x00636570  ScriptAction::Check  this=ScriptAction  sig=csp ====
BOOL __thiscall ScriptAction::Check(ScriptAction *this)
{
  void *ScriptAction_field_0x8C; // eax
  BOOL result; // eax

  result = 0; /*0x636586*/
  if ( this->ScriptAction_field_0x14 > 0 ) /*0x636575*/
  {
    ScriptAction_field_0x8C = this->ScriptAction_field_0x8C; /*0x636577*/
    if ( ScriptAction_field_0x8C == (void *)-1 || (int)ScriptAction_field_0x8C > 0 ) /*0x636584*/
      return 1; /*0x636575*/
  }
  return result; /*0x63658b*/
}



// ==== 0x00636590  FactoryClass::CompleteCurrentItem  this=TechnoClass  sig=csp ====
int __thiscall FactoryClass::CompleteCurrentItem(int this, int a2)
{
  int v3; // ebx
  int Value; // eax
  int v5; // eax
  _BYTE *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  void *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // esi
  int v21; // eax
  void *Block; // [esp+10h] [ebp-74h] BYREF
  _BYTE v24[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v25; // [esp+80h] [ebp-4h]
  char v26; // [esp+82h] [ebp-2h]

  v3 = **(_DWORD **)(this + 8); /*0x63659c*/
  Value = Array::FindValue((int *)v3, *(_DWORD *)this); /*0x6365a4*/
  if ( Value == -1 ) /*0x6365ac*/
    v5 = 0; /*0x6365ae*/
  else
    v5 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * Value); /*0x6365b5*/
  v6 = *(_BYTE **)(v5 + 4); /*0x6365b8*/
  qmemcpy(v24, v6, sizeof(v24)); /*0x6365c4*/
  v6 += 108; /*0x6365c4*/
  v25 = *(_WORD *)v6; /*0x6365c6*/
  v26 = v6[2]; /*0x6365c8*/
  qmemcpy((void *)(this + 29), v24, 0x6Cu); /*0x6365d5*/
  *(_WORD *)(this + 137) = v25; /*0x6365d7*/
  *(_BYTE *)(this + 139) = v26; /*0x6365d9*/
  v7 = *(_DWORD *)(this + 20); /*0x6365da*/
  if ( v7 > 0 ) /*0x6365e2*/
  {
    v8 = v7 - 1; /*0x6365e4*/
    v9 = 0; /*0x6365e7*/
    for ( *(_DWORD *)(this + 20) = v8; /*0x6365ee*/
          v9 < *(_DWORD *)(this + 20);
          *(_DWORD *)(*(_DWORD *)(this + 8) + 4 * v9 - 4) = *(_DWORD *)(*(_DWORD *)(this + 8) + 4 * v9) )
    {
      ++v9; /*0x6365f3*/
    }
  }
  if ( *(_DWORD *)(this + 148) )
  {
    v14 = Array::FindValue((int *)v3, *(_DWORD *)this); /*0x636681*/
    if ( v14 == -1 ) /*0x636689*/
      v15 = 0; /*0x63668b*/
    else
      v15 = *(void **)(*(_DWORD *)(v3 + 4) + 4 * v14); /*0x636692*/
    Block = v15; /*0x636697*/
    if ( v15 ) /*0x63669b*/
    {
      FactoryClass::FinishProduction(v3, (int)v15); /*0x6366a0*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6366ad*/
      FactoryClass::RemoveItemAt(&Block); /*0x6366bc*/
      __3_YAXPAX_Z(Block); /*0x6366c6*/
      if ( !*(_DWORD *)(v3 + 16) ) /*0x6366cb*/
      {
        if ( v3 ) /*0x6366d7*/
          FactoryClass::RemoveFromArrays((int *)v3, 1); /*0x6366dd*/
      }
    }
    v16 = *(_DWORD *)(this + 148); /*0x6366e2*/
    if ( v16 > 0 )
    {
      v17 = v16 - 1; /*0x6366ec*/
      *(_DWORD *)(this + 148) = v17; /*0x6366f5*/
      *(_DWORD *)(this + 148) = v17 <= 0 ? 0 : v17;
    }
  }
  else
  {
    *(_BYTE *)(this + 153) = 1; /*0x63660c*/
    v10 = *(_DWORD *)(this + 12); /*0x636613*/
    if ( *(_DWORD *)(this + 20) < v10 /*0x636636*/
      || (*(_BYTE *)(this + 17) || !v10)
      && (v11 = *(_DWORD *)(this + 24), v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4) + 8))(this + 4, v10 + v11, 0) )
    {
      v12 = *(_DWORD *)(this + 20); /*0x63663d*/
      v13 = *(_DWORD *)(this + 8); /*0x636640*/
      *(_DWORD *)(this + 20) = v12 + 1; /*0x636646*/
      *(_DWORD *)(v13 + 4 * v12) = v3; /*0x636649*/
    }
    Block = (void *)v3; /*0x63664e*/
    if ( v3 && !*(_BYTE *)(v3 + 28) ) /*0x636658*/
    {
      *(_BYTE *)(v3 + 28) = 1; /*0x63666d*/
      VectorClass::Append(&dword_AC4C98, &Block); /*0x636671*/
    }
  }
  v18 = *(_DWORD *)(this + 140) - 1; /*0x636709*/
  if ( v18 < -1 ) /*0x63670d*/
    v18 = -1; /*0x63670f*/
  *(_DWORD *)(this + 140) = v18; /*0x636712*/
  if ( !*(_DWORD *)(this + 20) ) /*0x636718*/
  {
    Block = *(void **)this; /*0x636722*/
    v19 = *((_DWORD *)Block + 135); /*0x636726*/
    v20 = *(_DWORD *)(v19 + 48); /*0x63672c*/
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v19) && dword_A83D4C ) /*0x63673f*/
      v20 = *((_DWORD *)dword_A83D4C + 12); /*0x636741*/
    if ( v20 < 0x18 ) /*0x636746*/
      dword_AC4B84[v20] = (dword_AC4B84[v20] - 1) & ((dword_AC4B84[v20] - 1 < 0) - 1); /*0x636760*/
    v21 = (*(int (__thiscall **)(int *, void **))(stru_AC4C40 + 16))(&stru_AC4C40, &Block); /*0x636777*/
    if ( v21 != -1 ) /*0x63677d*/
      FactoryClass::RemoveItem(v21); /*0x636785*/
  }
  qmemcpy((void *)a2, v24, 0x6Cu); /*0x63679c*/
  *(_WORD *)(a2 + 108) = v25; /*0x63679e*/
  *(_BYTE *)(a2 + 110) = v26; /*0x6367a0*/
  return a2; /*0x6367a1*/
}



// ==== 0x006367B0  TeamClass::UpdateBuildQueue  this=TeamClass  sig=csp ====
int __thiscall TeamClass::UpdateBuildQueue(TeamClass *this, _DWORD *a2, int a3, int a4)
{
  TeamClass *v4; // esi
  int result; // eax
  _DWORD *vtable2; // edx
  void *vtable0; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  void ***v11; // edx
  int v12; // eax
  _BYTE *v13; // esi
  _BYTE *WaypointCoords; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  _BYTE *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int Type; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // [esp+10h] [ebp-84h]
  char v29[8]; // [esp+1Ch] [ebp-78h] BYREF
  _BYTE v30[108]; // [esp+24h] [ebp-70h] BYREF
  __int16 v31; // [esp+90h] [ebp-4h]
  char v32; // [esp+92h] [ebp-2h]

  v4 = this; /*0x6367b7*/
  result = BuildingClass::GetType((BuildingClass *)a2); /*0x6367c4*/
  if ( result ) /*0x6367cb*/
  {
    result = a3; /*0x6367d1*/
    v27 = a3; /*0x6367e1*/
    if ( a3 < a3 + a4 ) /*0x6367eb*/
    {
      while ( 1 ) /*0x6367fa*/
      {
        vtable2 = v4->?; /*0x6367fa*/
        vtable0 = v4->AbstractClass; /*0x636801*/
        v8 = vtable2[v27]; /*0x636803*/
        v9 = 0; /*0x636806*/
        v10 = *(_DWORD *)(v8 + 16); /*0x636808*/
        if ( v10 <= 0 ) /*0x63680d*/
          goto LABEL_11; /*0x63680d*/
        v11 = *(void ****)(v8 + 4); /*0x636812*/
        while ( **v11 != vtable0 ) /*0x636818*/
        {
          ++v9; /*0x63681a*/
          ++v11; /*0x63681b*/
          if ( v9 >= v10 ) /*0x636820*/
          {
            v12 = 0; /*0x636822*/
            goto LABEL_13; /*0x636824*/
          }
        }
        if ( v9 == -1 ) /*0x636829*/
LABEL_11:
          v12 = 0; /*0x63682b*/
        else
          v12 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v9); /*0x63682f*/
LABEL_13:
        v13 = *(_BYTE **)(v12 + 4); /*0x636832*/
        qmemcpy(v30, v13, sizeof(v30)); /*0x63683e*/
        v13 += 108; /*0x63683e*/
        v31 = *(_WORD *)v13; /*0x636847*/
        v32 = v13[2]; /*0x63684e*/
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v29, a2); /*0x63684f*/
        *(_DWORD *)&v30[7] = *(_DWORD *)WaypointCoords; /*0x636858*/
        v30[11] = WaypointCoords[4]; /*0x63685f*/
        v15 = __2_YAPAXI_Z(0x10u); /*0x636863*/
        v16 = 0; /*0x636868*/
        if ( v15 ) /*0x63686f*/
        {
          *(_DWORD *)v15 = 0; /*0x636871*/
          *(_DWORD *)(v15 + 4) = 0; /*0x636873*/
          *(_BYTE *)(v15 + 12) = 0; /*0x636876*/
          *(_DWORD *)(v15 + 8) = -1; /*0x636879*/
          v16 = (_DWORD *)v15; /*0x636880*/
        }
        *v16 = a2; /*0x63688b*/
        v17 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x63688d*/
        if ( v17 ) /*0x636897*/
          *v17 = 0; /*0x636899*/
        else
          v17 = 0; /*0x63689e*/
        qmemcpy(v17, v30, 0x6Cu); /*0x6368ab*/
        *((_WORD *)v17 + 54) = v31; /*0x6368ad*/
        v17[110] = v32; /*0x6368af*/
        v16[1] = v17; /*0x6368b0*/
        v18 = *(_DWORD *)(v8 + 8); /*0x6368b3*/
        if ( *(_DWORD *)(v8 + 16) < v18 /*0x6368d7*/
          || (*(_BYTE *)(v8 + 13) || !v18)
          && (v19 = *(_DWORD *)(v8 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 8))(v8, v18 + v19, 0) )
        {
          v20 = *(_DWORD *)(v8 + 16); /*0x6368de*/
          v21 = *(_DWORD *)(v8 + 4); /*0x6368e1*/
          *(_DWORD *)(v8 + 16) = v20 + 1; /*0x6368e7*/
          *(_DWORD *)(v21 + 4 * v20) = v16; /*0x6368ea*/
        }
        Type = BuildingClass::GetType((BuildingClass *)a2); /*0x6368f9*/
        v23 = *(_DWORD *)(Type + 12); /*0x6368fb*/
        if ( *(_DWORD *)(Type + 20) < v23 /*0x636923*/
          || (*(_BYTE *)(Type + 17) || !v23)
          && (v24 = *(_DWORD *)(Type + 24), v24 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v23 + v24, 0) )
        {
          v25 = *(_DWORD *)(Type + 20); /*0x63692a*/
          v26 = *(_DWORD *)(Type + 8); /*0x63692d*/
          *(_DWORD *)(Type + 20) = v25 + 1; /*0x636933*/
          *(_DWORD *)(v26 + 4 * v25) = v8; /*0x636936*/
        }
        if ( *(_DWORD *)(Type + 140) == -1 ) /*0x636940*/
          *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x636946*/
        ScriptAction::PlaceObject(v8, v16); /*0x63694f*/
        result = ++v27; /*0x63695c*/
        if ( v27 >= a3 + a4 ) /*0x636963*/
          break; /*0x636963*/
        v4 = this; /*0x6367f6*/
      }
    }
  }
  return result; /*0x63696c*/
}



// ==== 0x00636980  TeamClass::ProcessScriptActions  this=TeamClass  sig=csp ====
int __thiscall TeamClass::ProcessScriptActions(TeamClass *this, _DWORD *a2, int a3)
{
  TeamClass *v3; // ebx
  int v4; // edi
  int result; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  void ***v9; // edx
  int v10; // eax
  _BYTE *v11; // esi
  _BYTE *WaypointCoords; // eax
  int v13; // eax
  _DWORD *v14; // ebx
  _BYTE *v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int Type; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // [esp+10h] [ebp-84h]
  int v27; // [esp+18h] [ebp-7Ch]
  _BYTE v28[8]; // [esp+1Ch] [ebp-78h] BYREF
  _BYTE v29[108]; // [esp+24h] [ebp-70h] BYREF
  __int16 v30; // [esp+90h] [ebp-4h]
  char v31; // [esp+92h] [ebp-2h]

  v3 = this; /*0x636987*/
  v4 = this->? - a3; /*0x6369a0*/
  result = BuildingClass::GetType((BuildingClass *)a2); /*0x6369a2*/
  if ( result ) /*0x6369a9*/
  {
    v25 = a3; /*0x6369b1*/
    v27 = a3 + v4; /*0x6369b7*/
    if ( a3 < a3 + v4 ) /*0x6369bb*/
    {
      while ( 1 ) /*0x6369d1*/
      {
        v6 = *((_DWORD *)v3->? + v25); /*0x6369d1*/
        v7 = 0; /*0x6369d4*/
        v8 = *(_DWORD *)(v6 + 16); /*0x6369d6*/
        if ( v8 <= 0 ) /*0x6369db*/
          goto LABEL_11; /*0x6369db*/
        v9 = *(void ****)(v6 + 4); /*0x6369e0*/
        while ( **v9 != v3->AbstractClass ) /*0x6369e6*/
        {
          ++v7; /*0x6369e8*/
          ++v9; /*0x6369e9*/
          if ( v7 >= v8 ) /*0x6369ee*/
          {
            v10 = 0; /*0x6369f0*/
            goto LABEL_13; /*0x6369f2*/
          }
        }
        if ( v7 == -1 ) /*0x6369f7*/
LABEL_11:
          v10 = 0; /*0x6369f9*/
        else
          v10 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7); /*0x6369fd*/
LABEL_13:
        v11 = *(_BYTE **)(v10 + 4); /*0x636a00*/
        qmemcpy(v29, v11, sizeof(v29)); /*0x636a13*/
        v11 += 108; /*0x636a13*/
        v30 = *(_WORD *)v11; /*0x636a15*/
        v31 = v11[2]; /*0x636a1c*/
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v28, a2); /*0x636a1d*/
        *(_DWORD *)&v29[7] = *(_DWORD *)WaypointCoords; /*0x636a26*/
        v29[11] = WaypointCoords[4]; /*0x636a2d*/
        v13 = __2_YAPAXI_Z(0x10u); /*0x636a31*/
        v14 = 0; /*0x636a36*/
        if ( v13 ) /*0x636a3d*/
        {
          *(_DWORD *)v13 = 0; /*0x636a3f*/
          *(_DWORD *)(v13 + 4) = 0; /*0x636a41*/
          *(_BYTE *)(v13 + 12) = 0; /*0x636a44*/
          *(_DWORD *)(v13 + 8) = -1; /*0x636a47*/
          v14 = (_DWORD *)v13; /*0x636a4e*/
        }
        *v14 = a2; /*0x636a59*/
        v15 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x636a5b*/
        if ( v15 ) /*0x636a65*/
          *v15 = 0; /*0x636a67*/
        else
          v15 = 0; /*0x636a6c*/
        qmemcpy(v15, v29, 0x6Cu); /*0x636a79*/
        *((_WORD *)v15 + 54) = v30; /*0x636a7b*/
        v15[110] = v31; /*0x636a7d*/
        v14[1] = v15; /*0x636a7e*/
        v16 = *(_DWORD *)(v6 + 8); /*0x636a81*/
        if ( *(_DWORD *)(v6 + 16) < v16 /*0x636aa5*/
          || (*(_BYTE *)(v6 + 13) || !v16)
          && (v17 = *(_DWORD *)(v6 + 20), v17 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v16 + v17, 0) )
        {
          v18 = *(_DWORD *)(v6 + 16); /*0x636aac*/
          v19 = *(_DWORD *)(v6 + 4); /*0x636aaf*/
          *(_DWORD *)(v6 + 16) = v18 + 1; /*0x636ab5*/
          *(_DWORD *)(v19 + 4 * v18) = v14; /*0x636ab8*/
        }
        Type = BuildingClass::GetType((BuildingClass *)a2); /*0x636ac7*/
        v21 = *(_DWORD *)(Type + 12); /*0x636ac9*/
        if ( *(_DWORD *)(Type + 20) < v21 /*0x636af1*/
          || (*(_BYTE *)(Type + 17) || !v21)
          && (v22 = *(_DWORD *)(Type + 24), v22 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v21 + v22, 0) )
        {
          v23 = *(_DWORD *)(Type + 20); /*0x636af8*/
          v24 = *(_DWORD *)(Type + 8); /*0x636afb*/
          *(_DWORD *)(Type + 20) = v23 + 1; /*0x636b01*/
          *(_DWORD *)(v24 + 4 * v23) = v6; /*0x636b04*/
        }
        if ( *(_DWORD *)(Type + 140) == -1 ) /*0x636b0e*/
          *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x636b14*/
        ScriptAction::PlaceObject(v6, v14); /*0x636b1d*/
        result = ++v25; /*0x636b2a*/
        if ( v25 >= v27 ) /*0x636b31*/
          break; /*0x636b31*/
        v3 = this; /*0x6369c4*/
      }
    }
  }
  return result; /*0x636b38*/
}



// ==== 0x00636B50  TeamClass::Cleanup  this=TeamClass  sig=csp ====
int __thiscall TeamClass::Cleanup(TeamClass *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int Value; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int result; // eax
  int v15; // ecx
  void *Block; // [esp+8h] [ebp-4h] BYREF

  if ( this->? == 1 ) /*0x636b59*/
  {
    this->countObjects[1] = -1; /*0x636b5b*/
LABEL_3:
    v3 = a2; /*0x636b65*/
    goto LABEL_4; /*0x636b65*/
  }
  v6 = this->countObjects[1]; /*0x636b84*/
  if ( v6 <= 0 ) /*0x636b8c*/
    goto LABEL_3; /*0x636b8c*/
  v3 = a2; /*0x636b8e*/
  if ( a2 < v6 ) /*0x636b94*/
    this->countObjects[1] = v6 - 1; /*0x636b97*/
LABEL_4:
  v4 = this->countObjects[3]; /*0x636b69*/
  v5 = 0; /*0x636b70*/
  if ( v4 >= 0 ) /*0x636b75*/
  {
    if ( v3 >= v4 ) /*0x636b79*/
    {
      v7 = this->countObjects[2] - 1; /*0x636ba6*/
      this->countObjects[2] = v7; /*0x636ba8*/
      if ( v7 < 3 ) /*0x636bb1*/
      {
        this->countObjects[3] = -1; /*0x636bb3*/
        this->countObjects[2] = 0; /*0x636bbd*/
      }
    }
    else
    {
      this->countObjects[3] = v4 - 1; /*0x636b7c*/
    }
  }
  v8 = *((_DWORD *)this->? + v3); /*0x636bc6*/
  Value = Array::FindValue((Array *)v8, (int)this->AbstractClass); /*0x636bce*/
  if ( Value != -1 ) /*0x636bd6*/
    v5 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * Value); /*0x636bdb*/
  Block = (void *)v5; /*0x636be0*/
  if ( v5 ) /*0x636be4*/
  {
    if ( *(_BYTE *)(v5 + 12) ) /*0x636bea*/
      ScriptAction::DecrementRefCount((ScriptAction *)v8, v5); /*0x636bf4*/
    v10 = *(_DWORD *)(v5 + 8); /*0x636bf9*/
    if ( v10 != -1 ) /*0x636bff*/
    {
      v11 = *(_DWORD *)(*(_DWORD *)(v8 + 36) + 4 * v10); /*0x636c08*/
      *(_DWORD *)(v11 + 116) = -1; /*0x636c0b*/
      TeamClass::Reset((TeamClass *)v8, 0); /*0x636c12*/
      v12 = *(_DWORD *)(v11 + 112) - 1; /*0x636c1a*/
      *(_DWORD *)(v11 + 112) = v12; /*0x636c1b*/
      if ( !v12 ) /*0x636c1e*/
        ScriptQueue::PushEntry((ScriptQueue *)v8); /*0x636c22*/
      v3 = a2; /*0x636c27*/
    }
    *(_DWORD *)(v5 + 8) = -1; /*0x636c2b*/
    __3_YAXPAX_Z(*((void **)Block + 1)); /*0x636c3a*/
    v13 = (*(int (__thiscall **)(int, void **))(*(_DWORD *)v8 + 16))(v8, &Block); /*0x636c4b*/
    if ( v13 != -1 ) /*0x636c51*/
      Vector4::EraseAt_Copy((Vector4 *)v8, v13); /*0x636c56*/
    __3_YAXPAX_Z(Block); /*0x636c60*/
    if ( !*(_DWORD *)(v8 + 16) && v8 ) /*0x636c71*/
    {
      FactoryClass::ClearObjects((FactoryClass *)v8); /*0x636c75*/
      Team_Remove((ObjectClass *)v8); /*0x636c7c*/
      *(_DWORD *)(v8 + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x636c84*/
      VectorClass::Cleanup2(v8 + 32); /*0x636c8a*/
      *(_DWORD *)v8 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x636c91*/
      VectorClass_ptr_PlanningMemberClass::Remove((_VectorClass_PAVPlanningMemberClass *)v8); /*0x636c97*/
      __3_YAXPAX_Z((void *)v8); /*0x636c9d*/
    }
  }
  result = this->?; /*0x636ca5*/
  if ( v3 < result ) /*0x636cac*/
  {
    v15 = result - 1; /*0x636cae*/
    result = v3; /*0x636cb1*/
    for ( this->? = v15; result < this->?; *((_DWORD *)this->? + result - 1) = *((_DWORD *)this->? + result) ) /*0x636cb8*/
      ++result; /*0x636cbd*/
  }
  return result; /*0x636ccc*/
}



// ==== 0x00636CE0  ScriptAction::ClearBuildingState  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::ClearBuildingState(ScriptAction *this)
{
  void *ScriptAction_field_0x94; // eax
  _DWORD *v2; // edx
  int v3; // esi
  int i; // eax
  int ScriptAction_field_0x14; // ebp
  int result; // eax
  int j; // ebx
  _DWORD *v8; // edx
  int v9; // esi
  int v10; // [esp+10h] [ebp-4h]

  if ( LOBYTE(this->ScriptAction_field_0x98) ) /*0x636ce1*/
  {
    ScriptAction_field_0x94 = this->ScriptAction_field_0x94; /*0x636cf2*/
    if ( ScriptAction_field_0x94 != (void *)-1 ) /*0x636cfa*/
    {
      v2 = *(_DWORD **)(this->ScriptAction_field_0x8[0] + 4 * (_DWORD)ScriptAction_field_0x94); /*0x636cff*/
      if ( v2 ) /*0x636d04*/
      {
        v2[45] = -1; /*0x636d06*/
        v3 = v2[12]; /*0x636d0c*/
        for ( i = 0; i < v3; *(_DWORD *)(*(_DWORD *)(v2[9] + 4 * i - 4) + 116) = -1 ) /*0x636d13*/
          ++i; /*0x636d18*/
        v2[43] = -1; /*0x636d24*/
      }
    }
    LOBYTE(this->ScriptAction_field_0x98) = 0; /*0x636d2a*/
  }
  ScriptAction_field_0x14 = this->ScriptAction_field_0x14; /*0x636d37*/
  v10 = ScriptAction_field_0x14; /*0x636d3c*/
  result = this->ScriptAction_field_0x8C != (void *)-1 ? (int)this->ScriptAction_field_0x8C : 0;
  for ( j = result; j < ScriptAction_field_0x14; ++j ) /*0x636d4b*/
  {
    result = this->ScriptAction_field_0x8[0]; /*0x636d4d*/
    v8 = *(_DWORD **)(result + 4 * j); /*0x636d50*/
    if ( v8 ) /*0x636d55*/
    {
      v8[45] = -1; /*0x636d57*/
      v9 = v8[12]; /*0x636d5d*/
      result = 0; /*0x636d60*/
      if ( v9 > 0 ) /*0x636d64*/
      {
        do /*0x636d73*/
        {
          ++result; /*0x636d69*/
          *(_DWORD *)(*(_DWORD *)(v8[9] + 4 * result - 4) + 116) = -1; /*0x636d70*/
        }
        while ( result < v9 ); /*0x636d73*/
        ScriptAction_field_0x14 = v10; /*0x636d75*/
      }
      v8[43] = -1; /*0x636d79*/
    }
  }
  this->ScriptAction_field_0x8C = (void *)-1; /*0x636d84*/
  return result; /*0x636d8a*/
}



// ==== 0x00636D90  ObjectClass::?GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ(
        Concurrency::details::VirtualProcessor *this)
{
  return this->onBridge; /*0x636d96*/
}



// ==== 0x00636DC0  FactoryClass::GetState  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::GetState(FactoryClass *this)
{
  return this->?; /*0x636dc3*/
}



// ==== 0x00636E60  ArrayClass::GetAt_Wrap  this=ScriptAction  sig=csp ====
int __thiscall ArrayClass::GetAt_Wrap(ArrayClass *this, int a2)
{
  void *v2; // edi
  int v3; // eax
  void *v4; // esi

  v2 = this->field_14; /*0x636e62*/
  if ( !v2 ) /*0x636e67*/
    return 0; /*0x636e67*/
  v3 = a2; /*0x636e69*/
  if ( a2 >= (int)v2 ) /*0x636e6f*/
  {
    v4 = this->field_94; /*0x636e71*/
    if ( (int)v4 < 0 ) /*0x636e79*/
      return 0; /*0x636e79*/
    v3 = (int)v4 + (a2 - (int)v4) % *(_DWORD *)&this->__pad_18[120]; /*0x636e88*/
  }
  if ( v3 >= 0 && v3 < (int)v2 ) /*0x636e90*/
    return *((_DWORD *)this->field_8 + v3); /*0x636e9a*/
  return 0; /*0x636e95*/
}



// ==== 0x00636EB0  ObjectClass::ExecuteActionPlanManager_Helper_636EB0  this=ObjectClass  sig=csp ====
int __thiscall ExecuteActionPlanManager_Helper_636EB0(ObjectClass *this)
{
  int v1; // eax

  v1 = this->? - 1; /*0x636eb3*/
  if ( v1 >= 0 ) /*0x636eb4*/
    return *((_DWORD *)this->? + v1); /*0x636ebc*/
  else
    return 0; /*0x636eb6*/
}



// ==== 0x00636F00  ObjectClass::method_636F00  this=ObjectClass  sig=csp ====
int __thiscall sub_636F00(ObjectClass *this, int a2, int a3)
{
  _DWORD *vtable2; // eax
  void *vtable0; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // edx
  void ***v8; // esi
  void ***v9; // edi
  void **v10; // eax
  _BYTE *v11; // esi

  vtable2 = this->?; /*0x636f00*/
  vtable0 = this->AbstractClass; /*0x636f08*/
  v5 = vtable2[a3]; /*0x636f0b*/
  v6 = 0; /*0x636f0e*/
  v7 = *(_DWORD *)(v5 + 16); /*0x636f11*/
  if ( v7 <= 0 ) /*0x636f16*/
    goto LABEL_7; /*0x636f16*/
  v8 = *(void ****)(v5 + 4); /*0x636f18*/
  v9 = v8; /*0x636f1b*/
  while ( **v9 != vtable0 ) /*0x636f21*/
  {
    ++v6; /*0x636f23*/
    ++v9; /*0x636f24*/
    if ( v6 >= v7 ) /*0x636f29*/
    {
      v10 = 0; /*0x636f2b*/
      goto LABEL_9; /*0x636f2d*/
    }
  }
  if ( v6 == -1 ) /*0x636f32*/
LABEL_7:
    v10 = 0; /*0x636f34*/
  else
    v10 = v8[v6]; /*0x636f38*/
LABEL_9:
  v11 = v10[1]; /*0x636f3b*/
  qmemcpy((void *)a2, v11, 0x6Cu); /*0x636f49*/
  v11 += 108; /*0x636f49*/
  *(_WORD *)(a2 + 108) = *(_WORD *)v11; /*0x636f4b*/
  *(_BYTE *)(a2 + 110) = v11[2]; /*0x636f4d*/
  return a2; /*0x636f4e*/
}



// ==== 0x00636FA0  ObjectClass::method_636FA0  this=ObjectClass  sig=csp ====
int __thiscall sub_636FA0(int this, int a2, int a3)
{
  *(_DWORD *)(this + 144) = a2; /*0x636fa8*/
  *(_DWORD *)(this + 148) = a3; /*0x636fae*/
  *(_BYTE *)(this + 152) = 1; /*0x636fb4*/
  return a2; /*0x636fbb*/
}



// ==== 0x00636FC0  ObjectClass::?GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ(
        Concurrency::details::VirtualProcessor *this)
{
  return this->objectTypeFlags; /*0x636fc6*/
}



// ==== 0x00636FD0  ObjectClass::method_636FD0  this=ObjectClass  sig=csp ====
int __thiscall sub_636FD0(ObjectClass *this)
{
  return this->lastLayer; /*0x636fd6*/
}



// ==== 0x00637020  ObjectClass::?WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ  this=ObjectClass  sig=csp ====
bool __thiscall _WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ(
        Concurrency::details::ExternalContextBase *this)
{
  return this->isInLogic; /*0x637026*/
}



// ==== 0x00637030  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_637030(ObjectClass *this)
{
  return this->isVisible; /*0x637036*/
}



// ==== 0x00637060  TabClass::processTabInput  this=TabClass  sig=csp ====
void __thiscall TabClass::processTabInput(TabClass *this)
{
  *(_DWORD *)&stru_AC4B30.__pad_48[8] = this; /*0x637060*/
}



// ==== 0x00637070  WinMain_Helper_637070  this=-  sig=ida-proto ====
int sub_637070()
{
  byte_AC4CF4 = 0; /*0x637074*/
  byte_AC4CF5 = 0; /*0x637079*/
  dword_AC4CCC = 0; /*0x63707e*/
  dword_AC4C38 = 0; /*0x637083*/
  dword_AC4BF0 = 0; /*0x637088*/
  dword_AC4C68 = 0; /*0x63708d*/
  dword_AC4C6C = 0; /*0x637092*/
  byte_AC4CB0 = 0; /*0x637098*/
  return 0; /*0x63709d*/
}



// ==== 0x006370A0  j_PlanningNodeClass_CleanupAll  this=-  sig=ida-proto ====
// attributes: thunk
void *j_PlanningNodeClass_CleanupAll()
{
  return PlanningNodeClass::CleanupAll();
}



// ==== 0x006370B0  PlanningNodeClass::CleanupAll  this=PlanningNodeClass  sig=ida-proto ====
void *PlanningNodeClass_CleanupAll()
{
  int v0; // ebp
  int v1; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  void *result; // eax
  _DWORD *v5; // [esp+Ch] [ebp-4h] BYREF

  v0 = dword_AC4C88; /*0x6370b3*/
  v1 = 0; /*0x6370bc*/
  byte_AC4CF5 = 1; /*0x6370c0*/
  byte_AC4CF4 = 0; /*0x6370c7*/
  for ( byte_AC4CF6 = 0; v1 < v0; ++v1 ) /*0x6370d3*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_AC4C7C + v1); /*0x6370db*/
    if ( v2 ) /*0x6370e0*/
    {
      if ( *v2 ) /*0x6370e2*/
        BuildingClass::SetType((_DWORD *)*v2, 0); /*0x6370e9*/
      v5 = v2; /*0x6370f3*/
      if ( !byte_AC4CF5 ) /*0x6370f9*/
        PlanningNodeClass::RemoveFromArray(&v5); /*0x637105*/
      TeamClass::RemoveAllMembers(v2); /*0x63710c*/
      v3 = (void *)v2[2]; /*0x637111*/
      v2[1] = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x637114*/
      if ( v3 && *((_BYTE *)v2 + 17) ) /*0x63711f*/
      {
        __3_YAXPAX_Z(v3); /*0x637125*/
        v2[2] = 0; /*0x63712d*/
      }
      *((_BYTE *)v2 + 17) = 0; /*0x637131*/
      v2[3] = 0; /*0x637134*/
      __3_YAXPAX_Z(v2); /*0x637137*/
    }
  }
  MEMORY[0xAC4C50] = 0; /*0x637151*/
  memset(&dword_AC4B84, 0, 0x60u); /*0x637157*/
  if ( MEMORY[0xAC4C44] && MEMORY[0xAC4C4D] ) /*0x637168*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC4C44]); /*0x63716b*/
    MEMORY[0xAC4C44] = 0; /*0x637173*/
  }
  MEMORY[0xAC4C4D] = 0; /*0x63717e*/
  MEMORY[0xAC4C48] = 0; /*0x637186*/
  dword_AC4C88 = 0; /*0x63718c*/
  if ( dword_AC4C7C && byte_AC4C85 ) /*0x63719a*/
  {
    __3_YAXPAX_Z(dword_AC4C7C); /*0x63719d*/
    dword_AC4C7C = 0; /*0x6371a5*/
  }
  byte_AC4C85 = 0; /*0x6371b0*/
  dword_AC4C80 = 0; /*0x6371b8*/
  dword_AC4B40 = 0; /*0x6371be*/
  if ( dword_AC4B34 && byte_AC4B3D ) /*0x6371cc*/
  {
    __3_YAXPAX_Z(dword_AC4B34); /*0x6371cf*/
    dword_AC4B34 = 0; /*0x6371d7*/
  }
  result = dword_AC4C1C; /*0x6371dd*/
  byte_AC4B3D = 0; /*0x6371e2*/
  dword_AC4B38 = 0; /*0x6371ea*/
  dword_AC4C28 = 0; /*0x6371f0*/
  if ( dword_AC4C1C && byte_AC4C25 ) /*0x6371fe*/
  {
    __3_YAXPAX_Z(dword_AC4C1C); /*0x637201*/
    dword_AC4C1C = 0; /*0x637209*/
  }
  dword_AC4BF4 = 0; /*0x637212*/
  byte_AC4C25 = 0; /*0x637218*/
  dword_AC4BF8 = 0; /*0x63721e*/
  dword_AC4C20 = 0; /*0x637224*/
  dword_AC4BFC = 0; /*0x63722a*/
  dword_AC4CCC = 0; /*0x637230*/
  dword_AC4C00 = 0; /*0x637236*/
  byte_AC4CD0 = 0; /*0x63723c*/
  byte_AC4CC8 = 0; /*0x637242*/
  dword_AC4C3C = 0; /*0x637248*/
  byte_AC4C08 = 0; /*0x63724e*/
  byte_AC4CF5 = 0; /*0x637254*/
  dword_AC4C90 = -1; /*0x63725b*/
  dword_AC4C04 = 0; /*0x637265*/
  return result; /*0x637211*/
}



// ==== 0x00637270  ObjectClass::ExecutePlanningQueue  this=ObjectClass  sig=csp ====
char ExecutePlanningQueue(TechnoClass *this)
{
  SuperWeaponClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  TeamClass *v4; // ebp
  int v5; // ebx
  Array *v6; // esi
  int Value; // eax
  int v8; // eax
  _BYTE *v9; // esi
  BuildingLoadQueue *v10; // ecx
  int abstractFlags; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int Type; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // esi
  int v22; // ebp
  int i; // edi
  bool v24; // cc
  char result; // al
  int v26; // esi
  wchar_t *v27; // eax
  wchar_t *StringCSF; // eax
  SuperWeaponClass *v29; // [esp-Ch] [ebp-90h]
  ObjectClass *v30; // [esp+4h] [ebp-80h]
  int v31; // [esp+4h] [ebp-80h]
  BuildingClass *vtable0; // [esp+8h] [ebp-7Ch]
  int v33; // [esp+Ch] [ebp-78h] BYREF
  int v34; // [esp+10h] [ebp-74h]
  _BYTE v35[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v36; // [esp+80h] [ebp-4h]
  char v37; // [esp+82h] [ebp-2h]

  SelectScriptNode(v30); /*0x637276*/
  v2 = 0; /*0x637281*/
  if ( dword_AC4BF0 && (int)dword_A8ECC8 > 0 ) /*0x63728d*/
    dword_AC4BF0 = 0; /*0x63728f*/
  v3 = dword_AC4C88; /*0x637294*/
  v29 = v1; /*0x63729f*/
  v34 = dword_AC4C88; /*0x6372a0*/
  v31 = 0; /*0x6372a4*/
  if ( dword_AC4C88 <= 0 ) /*0x6372a8*/
    goto LABEL_37; /*0x6372a8*/
  do /*0x6373e5*/
  {
    v4 = (TeamClass *)*((_DWORD *)dword_AC4C7C + v2); /*0x6372b4*/
    v5 = v4->abstractFlags - 1; /*0x6372bd*/
    vtable0 = (BuildingClass *)v4->vtable0; /*0x6372be*/
    if ( v5 < 0 ) /*0x6372c2*/
      goto LABEL_36; /*0x6372c2*/
    do /*0x6373d0*/
    {
      v6 = *(Array **)(v4->vtable2 + 4 * v5); /*0x6372cb*/
      Value = Array::FindValue(v6, v4->vtable0); /*0x6372d4*/
      if ( Value == -1 ) /*0x6372dc*/
        v8 = 0; /*0x6372de*/
      else
        v8 = *(_DWORD *)(v6->Array_field_0x4 + 4 * Value); /*0x6372e5*/
      v9 = *(_BYTE **)(v8 + 4); /*0x6372e8*/
      qmemcpy(v35, v9, sizeof(v35)); /*0x6372f4*/
      v9 += 108; /*0x6372f4*/
      v36 = *(_WORD *)v9; /*0x6372f6*/
      v37 = v9[2]; /*0x6372f8*/
      if ( v35[0] == 4 ) /*0x6372fe*/
      {
        if ( v35[18] ) /*0x637306*/
        {
          v10 = (BuildingLoadQueue *)&v35[14]; /*0x637308*/
        }
        else
        {
          if ( !v35[23] ) /*0x637314*/
            goto LABEL_15; /*0x637314*/
          v10 = (BuildingLoadQueue *)&v35[19]; /*0x637316*/
        }
        if ( BuildingLoadQueue::GetNext(v10) ) /*0x63731a*/
          goto LABEL_34; /*0x637326*/
      }
LABEL_15:
      abstractFlags = v4->abstractFlags; /*0x63732c*/
      v12 = v5; /*0x63732f*/
      if ( !abstractFlags ) /*0x637333*/
        goto LABEL_22; /*0x637333*/
      if ( v5 >= abstractFlags ) /*0x637337*/
      {
        v13 = v4->countObjects[3]; /*0x637339*/
        if ( v13 < 0 ) /*0x637341*/
          goto LABEL_22; /*0x637341*/
        v12 = v13 + (v5 - v13) % v4->countObjects[2]; /*0x637350*/
      }
      if ( v12 < 0 || v12 >= abstractFlags ) /*0x637358*/
      {
LABEL_22:
        v14 = 0; /*0x637362*/
        goto LABEL_23; /*0x637362*/
      }
      v14 = *(_DWORD *)(v4->vtable2 + 4 * v12); /*0x63735d*/
LABEL_23:
      Type = BuildingClass::GetType(vtable0); /*0x637364*/
      v33 = v14; /*0x637374*/
      v16 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(Type + 4) + 16))(Type + 4, &v33); /*0x63737e*/
      if ( v16 == -1 ) /*0x637384*/
      {
        v17 = 0; /*0x637386*/
      }
      else
      {
        v18 = *(_DWORD *)(Type + 20); /*0x63738a*/
        if ( v18 == 1 ) /*0x637390*/
        {
          v17 = v14; /*0x637392*/
        }
        else
        {
          v19 = v16 + 1; /*0x637396*/
          if ( v19 >= v18 ) /*0x637399*/
            v19 = 0; /*0x63739b*/
          v17 = ArrayClass::GetAt_Wrap((ArrayClass *)Type, v19); /*0x6373a0*/
        }
      }
      v33 = v17; /*0x6373a7*/
      if ( v17 && !*(_BYTE *)(v17 + 28) ) /*0x6373ad*/
      {
        *(_BYTE *)(v17 + 28) = 1; /*0x6373b8*/
        VectorClass::Append((DynamicVectorClass *)&dword_AC4C98, &v33); /*0x6373c2*/
      }
      TeamClass::Cleanup(v4, v5); /*0x6373ca*/
LABEL_34:
      --v5; /*0x6373cf*/
    }
    while ( v5 >= 0 ); /*0x6373d0*/
    v3 = v34; /*0x6373d6*/
    v2 = v31; /*0x6373da*/
LABEL_36:
    v31 = ++v2; /*0x6373e1*/
  }
  while ( v2 < v3 ); /*0x6373e5*/
LABEL_37:
  v20 = 0; /*0x6373eb*/
  v34 = dword_AC4CA8; /*0x6373f4*/
  if ( dword_AC4CA8 > 0 ) /*0x6373f8*/
  {
    do /*0x637438*/
    {
      v21 = *((_DWORD *)dword_AC4C9C + v20); /*0x637400*/
      FactoryClass::ClearObjects((FactoryClass *)v21); /*0x637405*/
      v22 = *(_DWORD *)(v21 + 16); /*0x63740a*/
      for ( i = 0; i < v22; ++i ) /*0x637411*/
        ScriptAction::PlaceObject(v21, *(_DWORD **)(*(_DWORD *)(v21 + 4) + 4 * i)); /*0x63741c*/
      ScriptAction::FindSquadMember((ScriptAction *)v21); /*0x637428*/
      v24 = ++v20 < v34; /*0x637432*/
      *(_BYTE *)(v21 + 28) = 0; /*0x637434*/
    }
    while ( v24 ); /*0x637438*/
  }
  dword_AC4CA8 = 0; /*0x63743f*/
  BlowPipe_23::Clear_1((_VectorClass_PAVPlanningNodeClass *)&dword_AC4C98); /*0x637449*/
  v26 = dword_AC4C90; /*0x63744e*/
  if ( dword_AC4C90 != -1 ) /*0x637457*/
  {
    result = SuperWeaponClass::UpdateAll(v29); /*0x637463*/
    if ( v26 ) /*0x63746a*/
    {
      if ( v26 == 1 ) /*0x6374c2*/
      {
        result = byte_AC4C08; /*0x6374c4*/
        if ( !byte_AC4C08 ) /*0x6374cb*/
        {
          byte_AC4C08 = 1; /*0x6374de*/
          StringCSF = GetStringCSF(g_Str_MSG_PostContinualCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6374e5*/
          AddMessageListPlayerMessage(StringCSF, 480); /*0x6374f1*/
          result = PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000, 1.0, 0); /*0x63750e*/
        }
      }
      else if ( v26 == 2 ) /*0x637518*/
      {
        result = PlanManager::Notify((PlanManager *)g_Str_MSG_NodeMaximum); /*0x63751f*/
      }
    }
    else
    {
      result = byte_AC4C08; /*0x63746c*/
      if ( !byte_AC4C08 ) /*0x637473*/
      {
        byte_AC4C08 = 1; /*0x63748a*/
        v27 = GetStringCSF(g_Str_MSG_PostTerminatingCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x637491*/
        AddMessageListPlayerMessage(v27, 480); /*0x63749d*/
        result = PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000, 1.0, 0); /*0x6374b8*/
      }
    }
    dword_AC4C90 = -1; /*0x637524*/
  }
  byte_AC4CD0 = 0; /*0x637531*/
  byte_AC4CC8 = 0; /*0x637538*/
  byte_AC4C08 = 0; /*0x63753f*/
  return result; /*0x637547*/
}



// ==== 0x00637550  ObjectClass::FlushPlanningQueue  this=ObjectClass  sig=csp ====
void __usercall FlushPlanningQueue(ObjectClass *this)
{
  int i; // esi
  void *v2; // edi
  int v3; // eax

  for ( i = *(_DWORD *)&stru_AC4B30.__pad_14[20] - 1; i >= 0; --i ) /*0x63755b*/
  {
    v2 = *(void **)(*(_DWORD *)&stru_AC4B30.__pad_14[8] + 4 * i); /*0x637564*/
    Render_Show((int)v2); /*0x637569*/
    if ( i < *(int *)&stru_AC4B30.__pad_14[20] ) /*0x637576*/
    {
      v3 = i; /*0x637579*/
      --*(_DWORD *)&stru_AC4B30.__pad_14[20]; /*0x63757d*/
      if ( i < *(int *)&stru_AC4B30.__pad_14[20] ) /*0x637583*/
      {
        do /*0x63759b*/
        {
          ++v3; /*0x63758b*/
          *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_14[8] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_14[8] /*0x63758f*/
                                                                                    + 4 * v3);
        }
        while ( v3 < *(int *)&stru_AC4B30.__pad_14[20] ); /*0x63759b*/
      }
    }
    __3_YAXPAX_Z(v2); /*0x63759e*/
  }
}



// ==== 0x006375B0  ObjectClass::method_6375B0  this=ObjectClass  sig=csp ====
int __thiscall sub_6375B0(ObjectClass *this)
{
  _BYTE *v2; // eax
  _BYTE *v3; // ebx
  int *p_health; // esi
  int result; // eax

  v2 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x6375b6*/
  if ( v2 ) /*0x6375c0*/
  {
    *v2 = 0; /*0x6375c2*/
    v3 = v2; /*0x6375c5*/
  }
  else
  {
    v3 = 0; /*0x6375c9*/
  }
  qmemcpy(v3, this, 0x6Cu); /*0x6375d3*/
  p_health = &this->health; /*0x6375d3*/
  *((_WORD *)v3 + 54) = *(_WORD *)p_health; /*0x6375d5*/
  v3[110] = *((_BYTE *)p_health + 2); /*0x6375d7*/
  if ( *v3 == 4 ) /*0x6375dd*/
    v3[29] = 2; /*0x6375df*/
  result = *(_DWORD *)&stru_AC4B30.__pad_14[12]; /*0x6375e3*/
  if ( *(int *)&stru_AC4B30.__pad_14[20] < *(int *)&stru_AC4B30.__pad_14[12] /*0x63761e*/
    || (stru_AC4B30.__pad_14[17] || !*(_DWORD *)&stru_AC4B30.__pad_14[12])
    && (int)stru_AC4B30.Array_field_0x2C > 0
    && (result = (*(int (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_14[4] + 8))(
                   &stru_AC4B30.__pad_14[4],
                   (char *)stru_AC4B30.Array_field_0x2C + *(_DWORD *)&stru_AC4B30.__pad_14[12],
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&stru_AC4B30.__pad_14[20])++; /*0x637626*/
    *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_14[8] + 4 * result) = v3; /*0x637635*/
  }
  return result; /*0x637638*/
}



// ==== 0x00637640  ObjectClass::Team_Remove  this=ObjectClass  sig=csp ====
_UNKNOWN **__thiscall Team_Remove(ObjectClass *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  _UNKNOWN **result; // eax
  ObjectClass *v5; // [esp+Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h] BYREF

  v5 = this; /*0x637647*/
  v1 = (*(int (__thiscall **)(char *, ObjectClass **))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x637655*/
         &stru_AC4B30.__pad_EC[124],
         &v5);
  if ( v1 != -1 && v1 < *(int *)&stru_AC4B30.__pad_EC[140] ) /*0x637665*/
  {
    --*(_DWORD *)&stru_AC4B30.__pad_EC[140]; /*0x63766a*/
    for ( ; /*0x637670*/
          v1 < *(int *)&stru_AC4B30.__pad_EC[140];
          *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[128] + 4 * v1 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[128]
                                                                                      + 4 * v1) )
    {
      ++v1; /*0x637678*/
    }
  }
  v2 = (*(int (__thiscall **)(Array *, _UNKNOWN **))(*(_DWORD *)stru_AC4B30.__pad_0 + 16))(&stru_AC4B30, &retaddr); /*0x63769a*/
  if ( v2 != -1 && v2 < (int)stru_AC4B30.Array_field_0x10 ) /*0x6376aa*/
  {
    --stru_AC4B30.Array_field_0x10; /*0x6376af*/
    for ( ; /*0x6376b5*/
          v2 < (int)stru_AC4B30.Array_field_0x10;
          *((_DWORD *)stru_AC4B30.Array_field_0x4 + v2 - 1) = *((_DWORD *)stru_AC4B30.Array_field_0x4 + v2) )
    {
      ++v2; /*0x6376bd*/
    }
  }
  v5 = (ObjectClass *)&retaddr; /*0x6376d9*/
  v3 = (*((int (__thiscall **)(void **))stru_AC4B30.Array_field_0xE8 + 4))(&stru_AC4B30.Array_field_0xE8); /*0x6376df*/
  if ( v3 != -1 && v3 < *(int *)&stru_AC4B30.__pad_EC[12] ) /*0x6376ef*/
  {
    --*(_DWORD *)&stru_AC4B30.__pad_EC[12]; /*0x6376f4*/
    for ( ; /*0x6376fa*/
          v3 < *(int *)&stru_AC4B30.__pad_EC[12];
          *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC
                                                                                + 4 * v3) )
    {
      ++v3; /*0x637702*/
    }
  }
  result = (_UNKNOWN **)v5; /*0x637714*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_EC[176] == v5 ) /*0x637722*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[176] = 0; /*0x637724*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_EC[28] == v5 ) /*0x637730*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x637732*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_70[80] == v5 ) /*0x63773e*/
    *(_DWORD *)&stru_AC4B30.__pad_70[80] = 0; /*0x637740*/
  return result; /*0x637747*/
}



// ==== 0x00637840  TechnoClass::IsProductionChainActive  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::IsProductionChainActive(TechnoClass *this)
{
  int Type; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // ebx
  int i; // esi
  _DWORD *v6; // edx

  LOBYTE(Type) = stru_AC4B30.__pad_EC[218]; /*0x637840*/
  if ( !stru_AC4B30.__pad_EC[218] ) /*0x637847*/
  {
    LOBYTE(Type) = stru_AC4B30.__pad_EC[216]; /*0x637849*/
    stru_AC4B30.__pad_EC[218] = 1; /*0x637853*/
    if ( stru_AC4B30.__pad_EC[216] ) /*0x63785a*/
    {
      Type = BuildingClass::GetType((BuildingClass *)this); /*0x63785c*/
      if ( Type ) /*0x637863*/
      {
        v2 = *(_DWORD *)(Type + 20) - 1; /*0x637868*/
        if ( v2 >= 0 ) /*0x637869*/
        {
          Type = *(_DWORD *)(Type + 8); /*0x63786b*/
          v3 = *(_DWORD *)(Type + 4 * v2); /*0x63786e*/
          if ( v3 ) /*0x637873*/
          {
            v4 = *(_DWORD *)(v3 + 16); /*0x637875*/
            for ( i = 0; i < v4; ++i ) /*0x63787c*/
            {
              v6 = *(_DWORD **)(*(_DWORD *)(v3 + 4) + 4 * i); /*0x637881*/
              LOBYTE(Type) = *(_BYTE *)(*v6 + 131); /*0x637886*/
              if ( !(_BYTE)Type ) /*0x63788e*/
                LOBYTE(Type) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 332))(*v6); /*0x637892*/
            }
          }
        }
      }
    }
    stru_AC4B30.__pad_EC[218] = 0; /*0x63789f*/
  }
  return Type; /*0x6378a7*/
}



// ==== 0x006378B0  ScriptQueue::PushEntry  this=ScriptQueue  sig=csp ====
int __thiscall ScriptQueue::PushEntry(ScriptQueue *this)
{
  int result; // eax

  if ( this ) /*0x6378b5*/
  {
    LOBYTE(result) = *((_BYTE *)this + 28); /*0x6378b7*/
    if ( !(_BYTE)result ) /*0x6378bc*/
    {
      *((_BYTE *)this + 28) = 1; /*0x6378be*/
      result = *(_DWORD *)&stru_AC4B30.__pad_EC[132]; /*0x6378c2*/
      if ( *(int *)&stru_AC4B30.__pad_EC[140] < *(int *)&stru_AC4B30.__pad_EC[132] /*0x6378fb*/
        || (stru_AC4B30.__pad_EC[137] || !*(_DWORD *)&stru_AC4B30.__pad_EC[132])
        && *(int *)&stru_AC4B30.__pad_EC[144] > 0
        && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 8))(
                       &stru_AC4B30.__pad_EC[124],
                       *(_DWORD *)&stru_AC4B30.__pad_EC[132] + *(_DWORD *)&stru_AC4B30.__pad_EC[144],
                       0),
            (_BYTE)result) )
      {
        result = (*(_DWORD *)&stru_AC4B30.__pad_EC[140])++; /*0x637903*/
        *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[128] + 4 * result) = this; /*0x637912*/
      }
    }
  }
  return result; /*0x637915*/
}



// ==== 0x00637920  ObjectClass::CleanupFactoryClass  this=ObjectClass  sig=csp ====
void CleanupFactoryClass(ObjectClass *this)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // ebp
  int v5; // [esp+8h] [ebp-4h]

  v1 = 0; /*0x637928*/
  v2 = 0; /*0x63792a*/
  v5 = *(_DWORD *)&stru_AC4B30.__pad_EC[140]; /*0x63792e*/
  if ( *(int *)&stru_AC4B30.__pad_EC[140] > 0 ) /*0x637932*/
  {
    while ( 1 ) /*0x63793f*/
    {
      v3 = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[128] + 4 * v2); /*0x63793f*/
      FactoryClass::ClearObjects((FactoryClass *)v3); /*0x637944*/
      v4 = *(_DWORD *)(v3 + 16); /*0x637949*/
      if ( v4 > 0 ) /*0x63794e*/
      {
        do /*0x637961*/
          ScriptAction::PlaceObject(v3, *(_DWORD **)(*(_DWORD *)(v3 + 4) + 4 * v1++)); /*0x637959*/
        while ( v1 < v4 ); /*0x637961*/
      }
      ScriptAction::FindSquadMember((ScriptAction *)v3); /*0x637965*/
      ++v2; /*0x63796e*/
      *(_BYTE *)(v3 + 28) = 0; /*0x637971*/
      if ( v2 >= v5 ) /*0x637975*/
        break; /*0x637975*/
      v1 = 0; /*0x637938*/
    }
  }
  *(_DWORD *)&stru_AC4B30.__pad_EC[140] = 0; /*0x637980*/
  if ( *(_DWORD *)&stru_AC4B30.__pad_EC[128] && stru_AC4B30.__pad_EC[137] ) /*0x637992*/
  {
    __3_YAXPAX_Z(*(void **)&stru_AC4B30.__pad_EC[128]); /*0x637995*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[128] = 0; /*0x63799d*/
  }
  *(_DWORD *)&stru_AC4B30.__pad_EC[132] = 0; /*0x6379a3*/
  stru_AC4B30.__pad_EC[137] = 0; /*0x6379aa*/
}



// ==== 0x006379C0  ObjectClass::UI_Create_731A50_Create  this=ObjectClass  sig=csp ====
char UI_Create_731A50_Create(ObjectClass *this)
{
  char result; // al

  result = stru_AC4B30.__pad_EC[216]; /*0x6379c0*/
  if ( !stru_AC4B30.__pad_EC[216] ) /*0x6379c7*/
  {
    stru_AC4B30.__pad_EC[216] = 1; /*0x6379ce*/
    result = PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 468), 0x2000, 1.0, 0); /*0x6379e7*/
    if ( *(_DWORD *)&stru_AC4B30.__pad_48[8] ) /*0x6379f4*/
      return (***(char (__thiscall ****)(_DWORD, int, _DWORD))&stru_AC4B30.__pad_48[8])( /*0x6379ff*/
               *(_DWORD *)&stru_AC4B30.__pad_48[8],
               4551,
               0);
  }
  return result; /*0x637a01*/
}



// ==== 0x00637A10  ObjectClass::House_Play  this=ObjectClass  sig=csp ====
char sub_637A10()
{
  char result; // al
  _BYTE v1[108]; // [esp-70h] [ebp-ECh] BYREF
  int v2; // [esp-4h] [ebp-80h]
  char v3[108]; // [esp+Ch] [ebp-70h] BYREF
  __int16 v4; // [esp+78h] [ebp-4h]
  char v5; // [esp+7Ah] [ebp-2h]

  result = byte_AC4CF4; /*0x637a10*/
  if ( byte_AC4CF4 ) /*0x637a1f*/
  {
    EventClass::AddEvent(v3, *((_DWORD *)dword_A83D4C + 12), 0x2Bu); /*0x637a30*/
    qmemcpy(v1, v3, sizeof(v1)); /*0x637a43*/
    LOWORD(v2) = v4; /*0x637a45*/
    BYTE2(v2) = v5; /*0x637a47*/
    Network::RecordEvent( /*0x637a48*/
      *(__int64 *)v1,
      *(int *)&v1[8],
      *(int *)&v1[12],
      *(int *)&v1[16],
      *(int *)&v1[20],
      *(int *)&v1[24],
      *(int *)&v1[28],
      *(int *)&v1[32],
      *(int *)&v1[36],
      *(int *)&v1[40],
      *(int *)&v1[44],
      *(int *)&v1[48],
      *(int *)&v1[52],
      *(int *)&v1[56],
      *(int *)&v1[60],
      *(int *)&v1[64],
      *(int *)&v1[68],
      *(int *)&v1[72],
      *(int *)&v1[76],
      *(int *)&v1[80],
      *(int *)&v1[84],
      *(int *)&v1[88],
      *(int *)&v1[92],
      *(int *)&v1[96],
      *(int *)&v1[100],
      *(int *)&v1[104],
      v2);
    dword_AC4CCC = 0; /*0x637a52*/
    dword_AC4C38 = 0; /*0x637a58*/
    dword_AC4BF0 = 0; /*0x637a5e*/
    byte_AC4CF4 = 0; /*0x637a64*/
    result = PlayVocClass(dword_8871E0->EnterBioReactorSound, 0x2000, 1.0, 0); /*0x637a7b*/
    if ( dword_AC4B80 ) /*0x637a88*/
      return (**(int (__thiscall ***)(int, int, _DWORD))dword_AC4B80)(dword_AC4B80, 4552, 0); /*0x637a92*/
  }
  return result; /*0x637a94*/
}



// ==== 0x00637AA0  FactoryClass::GetFlag  this=FactoryClass  sig=csp ====
int FactoryClass::GetFlag()
{
  int result; // eax

  LOBYTE(result) = byte_AC4CF4; /*0x637aa0*/
  return result; /*0x637aa5*/
}



// ==== 0x00637AB0  SidebarClass::ResetProductionState  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::ResetProductionState(SidebarClass *this)
{
  int result; // eax
  BuildingClass *v2; // ebx
  HouseClass *owner; // ecx
  SidebarClass *relatedTagsCount; // esi
  int Type; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // edx
  int i; // eax
  int v12; // ebp
  int j; // edi
  TeamClass *v14; // ecx
  int v15; // esi
  char v16; // al
  _BYTE *WaypointCoords; // eax
  char v18; // al
  int v19; // eax
  int v20; // ebp
  int v21; // eax
  _BYTE *v22; // eax
  bool v23; // [esp+7h] [ebp-101h]
  _BYTE *v24; // [esp+8h] [ebp-100h] BYREF
  int v25; // [esp+Ch] [ebp-FCh]
  int v26; // [esp+10h] [ebp-F8h]
  SidebarClass *v27; // [esp+14h] [ebp-F4h]
  int v28; // [esp+18h] [ebp-F0h]
  ScriptAction v29; // [esp+20h] [ebp-E8h] BYREF

  v27 = this; /*0x637ab6*/
  result = 0; /*0x637aba*/
  v25 = 0; /*0x637ac2*/
  v26 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x637ac8*/
  while ( v25 < v26 )
  {
    v2 = *(BuildingClass **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * result); /*0x637adc*/
    owner = v2->?; /*0x637adf*/
    relatedTagsCount = (SidebarClass *)owner->relatedTagsCount; /*0x637ae5*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) && dword_A83D4C ) /*0x637af8*/
      relatedTagsCount = (SidebarClass *)dword_A83D4C->Object_field_0x30; /*0x637afa*/
    if ( v27 != relatedTagsCount ) /*0x637b01*/
      goto LABEL_46; /*0x637b01*/
    Type = BuildingClass::GetType(v2); /*0x637b09*/
    v6 = Type; /*0x637b0e*/
    if ( !Type ) /*0x637b12*/
      goto LABEL_46; /*0x637b12*/
    v23 = 0; /*0x637b2e*/
    if ( *(int *)(Type + 20) > 0 ) /*0x637b1d*/
    {
      v7 = *(_DWORD *)(Type + 140); /*0x637b1f*/
      if ( v7 == -1 || v7 > 0 ) /*0x637b2c*/
        v23 = 1; /*0x637b1d*/
    }
    if ( *(_BYTE *)(v6 + 152) ) /*0x637b3a*/
    {
      v8 = *(_DWORD *)(v6 + 148); /*0x637b44*/
      if ( v8 != -1 ) /*0x637b4d*/
      {
        v9 = *(_DWORD **)(*(_DWORD *)(v6 + 8) + 4 * v8); /*0x637b52*/
        if ( v9 ) /*0x637b57*/
        {
          v9[45] = -1; /*0x637b59*/
          v10 = v9[12]; /*0x637b63*/
          for ( i = 0; i < v10; *(_DWORD *)(*(_DWORD *)(v9[9] + 4 * i - 4) + 116) = -1 ) /*0x637b6a*/
            ++i; /*0x637b6f*/
          v9[43] = -1; /*0x637b7f*/
        }
      }
      *(_BYTE *)(v6 + 152) = 0; /*0x637b89*/
    }
    v12 = *(_DWORD *)(v6 + 20); /*0x637b96*/
    for ( j = *(_DWORD *)(v6 + 140) != -1 ? *(_DWORD *)(v6 + 140) : 0; j < v12; ++j )
    {
      v14 = *(TeamClass **)(*(_DWORD *)(v6 + 8) + 4 * j); /*0x637bab*/
      if ( v14 ) /*0x637bb0*/
        TeamClass::Reset(v14, 1); /*0x637bb4*/
    }
    *(_DWORD *)(v6 + 140) = -1; /*0x637bc0*/
    if ( !v2 ) /*0x637bca*/
      goto LABEL_32; /*0x637bca*/
    v15 = (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 97))(v2); /*0x637bd6*/
    if ( v15 == 5 ) /*0x637bdb*/
    {
      v16 = 1; /*0x637bdd*/
      goto LABEL_33; /*0x637bdf*/
    }
    if ( ((WaypointCoords = ScriptAction::GetWaypointCoords(&v29, &v2->?->TechnoClass::vtable0), /*0x637c0f*/
           v28 = *(_DWORD *)WaypointCoords,
           v18 = WaypointCoords[4],
           v15 == 1)
       || v15 == 11)
      && (v18 == 11 || v15 == 11 && !v18) )
    {
      v16 = 1; /*0x637c11*/
    }
    else
    {
LABEL_32:
      v16 = 0; /*0x637c15*/
    }
LABEL_33:
    if ( !v23 ) /*0x637c1d*/
    {
      if ( v16 ) /*0x637c25*/
      {
        v19 = BuildingClass::GetType(v2); /*0x637c2d*/
        v20 = v19; /*0x637c32*/
        if ( v19 ) /*0x637c36*/
        {
          if ( *(int *)(v19 + 20) > 0 ) /*0x637c41*/
          {
            v21 = *(_DWORD *)(v19 + 140); /*0x637c47*/
            if ( (v21 == -1 || v21 > 0) && !*(_BYTE *)(v20 + 28) ) /*0x637c56*/
            {
              (*((void (__thiscall **)(BuildingClass *, int, int))v2->TechnoClass + 122))(v2, 28, 1); /*0x637c65*/
              qmemcpy( /*0x637c87*/
                v29.ScriptAction_field_0x8,
                (const void *)FactoryClass::CompleteCurrentItem(v20, (int)v29.__pad_78),
                0x6Fu);
              v22 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x637c8c*/
              if ( v22 ) /*0x637c96*/
                *v22 = 0; /*0x637c98*/
              else
                v22 = 0; /*0x637c9d*/
              v24 = v22; /*0x637caa*/
              qmemcpy(v22, v29.ScriptAction_field_0x8, 0x6Cu); /*0x637cae*/
              *((_WORD *)v22 + 54) = v29.ScriptAction_field_0x74; /*0x637cb0*/
              v22[110] = BYTE2(v29.ScriptAction_field_0x74); /*0x637cb2*/
              if ( *v24 == 4 ) /*0x637cba*/
                v24[29] = 2; /*0x637cbc*/
              SidebarClass::addToList((SidebarClass *)&stru_AC4B30.__pad_14[4], &v24); /*0x637cca*/
              *(_BYTE *)(v20 + 28) = 1; /*0x637ccf*/
            }
          }
        }
      }
    }
LABEL_46:
    result = ++v25; /*0x637cd3*/
  }
  return result; /*0x637cec*/
}



// ==== 0x00637D00  ObjectClass::UI_Delete_Delete  this=ObjectClass  sig=csp ====
char __thiscall UI_Delete_Delete(ObjectClass *this)
{
  _BYTE *v1; // esi
  BuildingLoadQueue *v2; // ecx
  _DWORD *Next; // eax
  _BYTE *WaypointCoords; // eax
  _BYTE v6[108]; // [esp-70h] [ebp-160h] BYREF
  int v7; // [esp-4h] [ebp-F4h]
  _BYTE v8[228]; // [esp+8h] [ebp-E8h] BYREF
  __int16 v9; // [esp+ECh] [ebp-4h]
  char v10; // [esp+EEh] [ebp-2h]

  v1 = *(_BYTE **)(*(_DWORD *)this->? + 4); /*0x637d16*/
  qmemcpy(&v8[8], v1, 0x6Cu); /*0x637d19*/
  v1 += 108; /*0x637d19*/
  *(_WORD *)&v8[116] = *(_WORD *)v1; /*0x637d1b*/
  v8[118] = v1[2]; /*0x637d1d*/
  if ( v8[26] ) /*0x637d24*/
  {
    v2 = (BuildingLoadQueue *)&v8[22]; /*0x637d26*/
  }
  else if ( v8[36] ) /*0x637d32*/
  {
    v2 = (BuildingLoadQueue *)&v8[32]; /*0x637d34*/
  }
  else
  {
    LOBYTE(Next) = v8[31]; /*0x637d3a*/
    if ( !v8[31] ) /*0x637d40*/
      return (char)Next; /*0x637d40*/
    v2 = (BuildingLoadQueue *)&v8[27]; /*0x637d42*/
  }
  Next = BuildingLoadQueue::GetNext(v2); /*0x637d46*/
  if ( Next ) /*0x637d4d*/
  {
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v8, Next); /*0x637d54*/
    EventClass::Add(&v8[120], (int)dword_A83D4C->Object_field_0x30, 0x2Cu, *(_DWORD *)WaypointCoords, WaypointCoords[4]); /*0x637d7b*/
    qmemcpy(v6, &v8[120], sizeof(v6)); /*0x637d91*/
    LOWORD(v7) = v9; /*0x637d93*/
    BYTE2(v7) = v10; /*0x637d95*/
    LOBYTE(Next) = Network::RecordEvent( /*0x637d96*/
                     *(__int64 *)v6,
                     *(int *)&v6[8],
                     *(int *)&v6[12],
                     *(int *)&v6[16],
                     *(int *)&v6[20],
                     *(int *)&v6[24],
                     *(int *)&v6[28],
                     *(int *)&v6[32],
                     *(int *)&v6[36],
                     *(int *)&v6[40],
                     *(int *)&v6[44],
                     *(int *)&v6[48],
                     *(int *)&v6[52],
                     *(int *)&v6[56],
                     *(int *)&v6[60],
                     *(int *)&v6[64],
                     *(int *)&v6[68],
                     *(int *)&v6[72],
                     *(int *)&v6[76],
                     *(int *)&v6[80],
                     *(int *)&v6[84],
                     *(int *)&v6[88],
                     *(int *)&v6[92],
                     *(int *)&v6[96],
                     *(int *)&v6[100],
                     *(int *)&v6[104],
                     v7);
  }
  return (char)Next; /*0x637d9b*/
}



// ==== 0x00637DB0  ScriptAction::SetField10  this=ScriptAction  sig=csp ====
bool __thiscall ScriptAction::SetField10(ScriptAction *this)
{
  return !stru_AC4B30.__pad_EC[216] || this != (ScriptAction *)4; /*0x637dc0*/
}



// ==== 0x00637DD0  Object_Helper_637DD0  this=-  sig=csp ====
char __stdcall sub_637DD0(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28)
{
  char result; // al
  _BYTE v29[108]; // [esp-70h] [ebp-78h] BYREF
  int v30; // [esp-4h] [ebp-Ch]

  result = a1; /*0x637dd0*/
  if ( a1 == 4 ) /*0x637dd8*/
  {
    HIBYTE(a8) = 1; /*0x637de8*/
    qmemcpy(v29, &a1, sizeof(v29)); /*0x637df0*/
    LOWORD(v30) = a28; /*0x637df2*/
    BYTE2(v30) = BYTE2(a28); /*0x637df4*/
    return Network::RecordEvent( /*0x637df5*/
             *(__int64 *)v29,
             *(int *)&v29[8],
             *(int *)&v29[12],
             *(int *)&v29[16],
             *(int *)&v29[20],
             *(int *)&v29[24],
             *(int *)&v29[28],
             *(int *)&v29[32],
             *(int *)&v29[36],
             *(int *)&v29[40],
             *(int *)&v29[44],
             *(int *)&v29[48],
             *(int *)&v29[52],
             *(int *)&v29[56],
             *(int *)&v29[60],
             *(int *)&v29[64],
             *(int *)&v29[68],
             *(int *)&v29[72],
             *(int *)&v29[76],
             *(int *)&v29[80],
             *(int *)&v29[84],
             *(int *)&v29[88],
             *(int *)&v29[92],
             *(int *)&v29[96],
             *(int *)&v29[100],
             *(int *)&v29[104],
             v30);
  }
  return result; /*0x637dfa*/
}



// ==== 0x00637E00  ScriptAction::DispatchBuilding  this=EventClass  sig=csp ====
char __thiscall DispatchBuildingScriptAction(char *this)
{
  char v2; // al
  _DWORD *BuildingLoadQueue; // eax
  int v4; // ebp
  _DWORD *v5; // edi
  int v6; // ecx
  _DWORD *v7; // esi
  int TypeBuildingClass; // eax
  int v9; // esi
  char v10; // bl
  char v11; // al
  int v12; // ebp
  int v13; // edi
  _DWORD *v14; // ebx
  _DWORD **v15; // esi
  int *CoordsScriptAction; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // edi
  _DWORD *v19; // eax
  _BYTE *v20; // ecx
  int v21; // ebx
  int v22; // edi
  _DWORD *v23; // ebp
  int v24; // esi
  _DWORD *v25; // edi
  int v26; // eax
  int v27; // ebx
  int *v28; // eax
  int v29; // edi
  _DWORD *v30; // eax
  int v32; // [esp+10h] [ebp-38h] BYREF
  _DWORD v33[2]; // [esp+14h] [ebp-34h] BYREF
  int v34; // [esp+1Ch] [ebp-2Ch]
  int v35; // [esp+20h] [ebp-28h]
  _DWORD v36[3]; // [esp+24h] [ebp-24h] BYREF
  int v37; // [esp+30h] [ebp-18h] BYREF
  int v38; // [esp+34h] [ebp-14h]
  int v39; // [esp+38h] [ebp-10h]
  _DWORD v40[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v2 = *this; /*0x637e09*/
  if ( *this == 43 ) /*0x637e0d*/
  {
    v32 = this->q008; /*0x637e17*/
    LOBYTE(BuildingLoadQueue) = dword_A8EC88; /*0x637e1b*/
    v4 = 0; /*0x637e20*/
    for ( v33[0] = dword_A8EC88; v4 < v33[0]; ++v4 ) /*0x637e28*/
    {
      v5 = (_DWORD *)*((_DWORD *)dword_A8EC7C + v4); /*0x637e34*/
      v6 = v5[135]; /*0x637e37*/
      v7 = *(_DWORD **)(v6 + 48); /*0x637e3d*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v6) && dword_A83D4C ) /*0x637e50*/
        v7 = (_DWORD *)*((_DWORD *)dword_A83D4C + 12); /*0x637e52*/
      if ( (_DWORD *)v32 == v7 ) /*0x637e59*/
      {
        TypeBuildingClass = BuildingClass::GetType(v5); /*0x637e5d*/
        v9 = TypeBuildingClass; /*0x637e62*/
        if ( TypeBuildingClass ) /*0x637e66*/
        {
          v10 = ScriptAction::Check(TypeBuildingClass); /*0x637e71*/
          ScriptAction::ClearBuildingState(v9); /*0x637e73*/
          v11 = ScriptAction::IsBuildingTypeMatch(v5); /*0x637e7a*/
          if ( !v10 ) /*0x637e81*/
          {
            if ( v11 ) /*0x637e85*/
              BuildingClass::GetObjectData(v5); /*0x637e89*/
          }
        }
      }
      LOBYTE(BuildingLoadQueue) = v33[0]; /*0x637e8e*/
    }
  }
  else if ( v2 == 42 ) /*0x637ea1*/
  {
    BuildingLoadQueue = BuildingLoadQueue::Find(this + 7); /*0x637eaa*/
    v32 = (int)BuildingLoadQueue; /*0x637eb1*/
    if ( BuildingLoadQueue ) /*0x637eb5*/
    {
      BuildingLoadQueue = BuildingLoadQueue::GetNext(this + 12); /*0x637ebe*/
      if ( BuildingLoadQueue ) /*0x637ec5*/
      {
        BuildingLoadQueue = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*BuildingLoadQueue + 88))( /*0x637ed4*/
                                        BuildingLoadQueue,
                                        &v37);
        v12 = *BuildingLoadQueue; /*0x637ed7*/
        v13 = 0; /*0x637ed9*/
        v14 = (_DWORD *)this->q008; /*0x637edb*/
        v34 = BuildingLoadQueue[1]; /*0x637ee2*/
        v35 = BuildingLoadQueue[2]; /*0x637ee9*/
        LOBYTE(BuildingLoadQueue) = dword_AC4B40; /*0x637eed*/
        v33[0] = dword_AC4B40; /*0x637ef4*/
        if ( dword_AC4B40 > 0 ) /*0x637ef8*/
        {
          while ( 1 ) /*0x637f0c*/
          {
            v36[0] = v12; /*0x637f0c*/
            v15 = (_DWORD **)*((_DWORD *)dword_AC4B34 + v13); /*0x637f10*/
            v36[1] = v34; /*0x637f1a*/
            v36[2] = v35; /*0x637f1e*/
            CoordsScriptAction = ScriptAction::GetCoords(v15, v40); /*0x637f22*/
            v37 = *CoordsScriptAction; /*0x637f29*/
            v38 = CoordsScriptAction[1]; /*0x637f30*/
            v39 = CoordsScriptAction[2]; /*0x637f40*/
            if ( Coord3D::Equals(&v37, v36) ) /*0x637f44*/
            {
              v17 = (_DWORD *)Function::Method_6342D0(0); /*0x637f51*/
              BuildingLoadQueue = (_DWORD *)TeamClass::GetLeaderIndex(v17); /*0x637f58*/
              if ( v14 == (_DWORD *)-1 || v14 == BuildingLoadQueue ) /*0x637f64*/
                break; /*0x637f64*/
            }
            LOBYTE(BuildingLoadQueue) = v33[0]; /*0x637f66*/
            if ( ++v13 >= v33[0] ) /*0x637f6d*/
              return (char)BuildingLoadQueue; /*0x637f6d*/
          }
          if ( v15 ) /*0x637f79*/
          {
            v18 = (_DWORD *)v32; /*0x637f7f*/
            v19 = (_DWORD *)BuildingClass::GetType((_DWORD *)v32); /*0x637f85*/
            if ( !v19 ) /*0x637f8c*/
            {
              if ( __2_YAPAXI_Z(0x9Cu) ) /*0x637f93*/
                v32 = ScriptAction::Constructor(v32); /*0x637fa7*/
              else
                v32 = 0; /*0x637fad*/
              ScriptActionVector::PushBack(&v32); /*0x637fbf*/
              BuildingClass::SetType(v18, v32); /*0x637fcb*/
              v19 = (_DWORD *)v32; /*0x637fd0*/
            }
            v33[0] = v15; /*0x637fdc*/
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD *))(v19[1] + 16))(v19 + 1, v33) == -1 ) /*0x637fec*/
              LOBYTE(BuildingLoadQueue) = CompleteBuildingProduction(v18, v15); /*0x637ffb*/
            else
              LOBYTE(BuildingLoadQueue) = BuildingClass::CompleteProduction(v18, v15); /*0x637fee*/
          }
        }
      }
    }
  }
  else
  {
    v20 = this + 7; /*0x63800a*/
    if ( v2 == 44 ) /*0x63800d*/
    {
      BuildingLoadQueue = BuildingLoadQueue::GetNext(v20); /*0x638013*/
      if ( BuildingLoadQueue ) /*0x63801a*/
      {
        BuildingLoadQueue = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*BuildingLoadQueue + 88))( /*0x638029*/
                                        BuildingLoadQueue,
                                        v40);
        v21 = *BuildingLoadQueue; /*0x63802c*/
        v22 = 0; /*0x63802e*/
        v23 = (_DWORD *)this->q008; /*0x638030*/
        v38 = BuildingLoadQueue[1]; /*0x638037*/
        v39 = BuildingLoadQueue[2]; /*0x63803e*/
        LOBYTE(BuildingLoadQueue) = dword_AC4B40; /*0x638042*/
        v33[0] = dword_AC4B40; /*0x638049*/
        if ( dword_AC4B40 > 0 ) /*0x63804d*/
        {
          while ( 1 ) /*0x638060*/
          {
            v24 = *((_DWORD *)dword_AC4B34 + v22); /*0x638060*/
            if ( (unsigned __int8)ScriptAction::GetActionCoordinates(v21, v38, v39) ) /*0x638073*/
            {
              BuildingLoadQueue = (_DWORD *)TeamClass::GetLeaderIndex(***(_DWORD ****)(v24 + 4)); /*0x638083*/
              if ( v23 == (_DWORD *)-1 || v23 == BuildingLoadQueue ) /*0x63808f*/
                break; /*0x63808f*/
            }
            LOBYTE(BuildingLoadQueue) = v33[0]; /*0x638091*/
            if ( ++v22 >= v33[0] ) /*0x638098*/
              return (char)BuildingLoadQueue; /*0x638098*/
          }
          if ( v24 ) /*0x6380a4*/
          {
            v25 = ***(_DWORD ****)(v24 + 4); /*0x6380ab*/
            v26 = BuildingClass::GetType(v25); /*0x6380af*/
            v33[0] = v24; /*0x6380bc*/
            v27 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)(v26 + 4) + 16))(v26 + 4, v33); /*0x6380c7*/
            v28 = (int *)BuildingClass::GetType(v25); /*0x6380c9*/
            v29 = ArrayClass::GetAt_Wrap(v28, v27 + 1); /*0x6380d9*/
            LOBYTE(BuildingLoadQueue) = BuildingClass::FlushScriptActions(v24); /*0x6380db*/
            if ( v29 ) /*0x6380e2*/
            {
              LOBYTE(BuildingLoadQueue) = (_BYTE)dword_A83D4C; /*0x6380e4*/
              if ( v23 == *((_DWORD **)dword_A83D4C + 12) ) /*0x6380ec*/
                dword_AC4BF0 = v29; /*0x6380ee*/
            }
          }
        }
      }
    }
    else
    {
      v30 = BuildingLoadQueue::Find(v20); /*0x6380fc*/
      LOBYTE(BuildingLoadQueue) = ExecuteActionPlanManager(v30, this); /*0x638105*/
    }
  }
  return (char)BuildingLoadQueue; /*0x637e97*/
}



// ==== 0x00638120  ExecuteActionPlanManager  this=AbstractClass  sig=csp ====
char __fastcall ExecuteActionPlanManager(BuildingClass *a1, char *a2)
{
  char *v2; // edi
  int *ScenarioClassActionCoords; // eax
  int v4; // ecx
  void *Array_field_0x10; // ebx
  int v6; // edx
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  ScriptAction *v10; // edi
  TeamClass *v11; // eax
  int LeaderIndex; // eax
  ScriptAction *v13; // ecx
  BuildingClass *v14; // esi
  int v15; // eax
  char v16; // al
  wchar_t *StringCSF; // eax
  wchar_t *v19; // ecx
  ObjectClass *Type; // ebp
  ScriptAction *v21; // eax
  bool v22; // bl
  ObjectClass *v23; // ecx
  int v24; // eax
  int abstractFlags; // eax
  int v26; // eax
  unsigned int v27; // eax
  VectorClass *v28; // eax
  VectorClass *v29; // edi
  int v30; // esi
  wchar_t *v31; // eax
  int v32; // eax
  _BYTE v33[112]; // [esp-70h] [ebp-ACh] BYREF
  bool v34; // [esp+13h] [ebp-29h]
  ScriptAction *v35; // [esp+14h] [ebp-28h] BYREF
  char v36[4]; // [esp+18h] [ebp-24h] BYREF
  char *v37; // [esp+1Ch] [ebp-20h]
  BuildingClass *v38; // [esp+20h] [ebp-1Ch]
  int v39; // [esp+24h] [ebp-18h]
  int v40; // [esp+28h] [ebp-14h]
  int v41; // [esp+2Ch] [ebp-10h]
  _DWORD v42[3]; // [esp+30h] [ebp-Ch] BYREF

  v2 = a2; /*0x638127*/
  v38 = a1; /*0x638129*/
  v37 = a2; /*0x63812f*/
  if ( !a1 ) /*0x638133*/
    return 0; /*0x638133*/
  v34 = (void *)a2[2] == dword_A83D4C->Object_field_0x30; /*0x63814c*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v42, a2); /*0x638151*/
  if ( *ScenarioClassActionCoords == -1 && ScenarioClassActionCoords[1] == -1 && ScenarioClassActionCoords[2] == -1 ) /*0x63816b*/
    return 0; /*0x63816b*/
  v4 = *ScenarioClassActionCoords; /*0x638174*/
  Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x638176*/
  *(_DWORD *)v36 = *(_DWORD *)(v2 + 3); /*0x63817c*/
  v6 = ScenarioClassActionCoords[1]; /*0x638180*/
  v7 = ScenarioClassActionCoords[2]; /*0x638183*/
  v8 = v2[2]; /*0x638186*/
  v9 = 0; /*0x63818a*/
  v39 = v4; /*0x63818c*/
  v40 = v6; /*0x638192*/
  v41 = v7; /*0x638196*/
  if ( (int)stru_AC4B30.Array_field_0x10 <= 0 ) /*0x63819a*/
  {
LABEL_13:
    v13 = 0; /*0x6381f9*/
  }
  else
  {
    while ( 1 ) /*0x6381a9*/
    {
      v10 = (ScriptAction *)*((_DWORD *)stru_AC4B30.Array_field_0x4 + v9); /*0x6381a9*/
      if ( ScriptAction::GetActionCoordinates(v10, v39, v40, v41) /*0x6381d5*/
        && (*(_DWORD *)v36 == -1 || *(_DWORD *)v36 == v10->ScriptAction_field_0x18[0]) )
      {
        v11 = (TeamClass *)Function::Method_6342D0(v10, 0); /*0x6381db*/
        LeaderIndex = TeamClass::GetLeaderIndex(v11); /*0x6381e2*/
        if ( v8 == -1 || v8 == LeaderIndex ) /*0x6381ee*/
          break; /*0x6381ee*/
      }
      if ( ++v9 >= (int)Array_field_0x10 ) /*0x6381f3*/
      {
        v2 = v37; /*0x6381f5*/
        goto LABEL_13; /*0x6381f5*/
      }
    }
    v13 = v10; /*0x638252*/
    v2 = v37; /*0x638254*/
  }
  v14 = v38; /*0x6381fb*/
  v35 = v13; /*0x6381ff*/
  if ( v13 && Array::FindValue((Array *)v13, (int)v38) != -1 ) /*0x638210*/
    return 1; /*0x638210*/
  v15 = ScriptAction::ClassifyAction((int *)v38, v2); /*0x63821a*/
  if ( v15 != -1 ) /*0x638222*/
  {
    if ( !v34 ) /*0x63822e*/
      return 0; /*0x63822e*/
    if ( !v15 ) /*0x638236*/
    {
      v16 = *v2; /*0x638238*/
      if ( *v2 == 9 ) /*0x63823c*/
      {
        PlanManager::Notify(&g_Str_MSG_PlanningModeNoDeploy); /*0x638243*/
        return 0; /*0x638251*/
      }
      if ( v16 == 6 ) /*0x63825c*/
      {
        PlanManager::Notify((PlanManager *)g_Str_MSG_PlanningModeNoStop); /*0x638263*/
        return 0; /*0x638271*/
      }
      if ( v16 == 7 ) /*0x638274*/
      {
        PlanManager::Notify((PlanManager *)g_Str_MSG_PlanningModeNoScatter); /*0x63827f*/
        return 0; /*0x63828d*/
      }
      return 0; /*0x638274*/
    }
    if ( v15 == 1 ) /*0x638295*/
    {
      if ( !stru_AC4B30.__pad_70[104] ) /*0x63829e*/
      {
        stru_AC4B30.__pad_70[104] = 1; /*0x6382a4*/
        StringCSF = GetStringCSF(g_Str_MSG_PostTerminatingCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6382bb*/
        AddMessageListPlayerMessage(StringCSF, 480); /*0x6382c7*/
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x6382e4*/
        return 0; /*0x6382f2*/
      }
      return 0; /*0x63829e*/
    }
    if ( v15 != 2 || stru_AC4B30.__pad_70[104] ) /*0x638303*/
      return 0; /*0x63853c*/
    stru_AC4B30.__pad_70[104] = 1; /*0x638309*/
    *(_DWORD *)&v33[108] = 3233; /*0x63830f*/
    *(_DWORD *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x638314*/
    v19 = g_Str_MSG_PostContinualCommand; /*0x63831b*/
LABEL_67:
    v31 = GetStringCSF(v19, 0, *(const char **)&v33[104], *(int *)&v33[108]); /*0x638506*/
    AddMessageListPlayerMessage(v31, 480); /*0x638512*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x63852e*/
    return 0; /*0x63852e*/
  }
  Type = (ObjectClass *)BuildingClass::GetType(v38); /*0x63832c*/
  if ( !Type ) /*0x638330*/
  {
    v21 = (ScriptAction *)__2_YAPAXI_Z(0x9Cu); /*0x638337*/
    if ( v21 ) /*0x638341*/
      *(_DWORD *)v36 = ScriptAction::Constructor(v21, (int)v38); /*0x63834b*/
    else
      *(_DWORD *)v36 = 0; /*0x638351*/
    ScriptActionVector::PushBack((ScriptActionVector *)&stru_AC4B30.__pad_EC[92], v36); /*0x638363*/
    BuildingClass::SetType(v14, *(int *)v36); /*0x63836f*/
    Type = *(ObjectClass **)v36; /*0x638374*/
  }
  v22 = v34; /*0x638378*/
  if ( v34 ) /*0x63837e*/
  {
    v23 = (ObjectClass *)v2[12]; /*0x638380*/
    if ( v23 == (ObjectClass *)7 || v23 == (ObjectClass *)8 || v23 == (ObjectClass *)9 ) /*0x638391*/
    {
      v24 = 0; /*0x638393*/
LABEL_46:
      *(_DWORD *)&stru_AC4B30.__pad_EC[116] = v24; /*0x6383bf*/
      goto LABEL_47; /*0x6383bf*/
    }
    if ( ExecuteActionPlanManager_Helper_638C40(v23, *(_DWORD *)(v2 + 14), v2[18]) ) /*0x6383a7*/
    {
      v24 = 0; /*0x6383b0*/
      goto LABEL_46; /*0x6383b2*/
    }
    if ( Type->? == 15 ) /*0x6383b8*/
    {
      v24 = 2; /*0x6383ba*/
      goto LABEL_46; /*0x6383ba*/
    }
  }
LABEL_47:
  if ( Type->lastLayer >= 0 ) /*0x6383cc*/
  {
    if ( !v34 || stru_AC4B30.__pad_70[104] ) /*0x6383df*/
      return 0; /*0x6383df*/
    *(_DWORD *)&v33[108] = 3233; /*0x6383e5*/
    stru_AC4B30.__pad_70[104] = 1; /*0x6383ea*/
    *(_DWORD *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x6383f1*/
    v19 = (wchar_t *)aMsgPostloop; /*0x6383f8*/
    goto LABEL_67; /*0x6383fd*/
  }
  abstractFlags = Type->?; /*0x638402*/
  if ( abstractFlags ) /*0x638407*/
  {
    if ( abstractFlags == 16 ) /*0x6384df*/
    {
      if ( !v34 || stru_AC4B30.__pad_70[104] ) /*0x6384ec*/
        return 0; /*0x6384ec*/
      *(_DWORD *)&v33[108] = 3233; /*0x6384ee*/
      stru_AC4B30.__pad_70[104] = 1; /*0x6384f3*/
      *(_DWORD *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x6384fa*/
      v19 = g_Str_MSG_NodeMaximum; /*0x638501*/
      goto LABEL_67; /*0x638501*/
    }
  }
  else
  {
    if ( *(int *)&stru_AC4B30.__pad_EC[52] < *(int *)&stru_AC4B30.__pad_EC[44] /*0x638444*/
      || (stru_AC4B30.__pad_EC[49] || !*(_DWORD *)&stru_AC4B30.__pad_EC[44])
      && *(int *)&stru_AC4B30.__pad_EC[56] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_EC[36] + 8))(
           &stru_AC4B30.__pad_EC[36],
           *(_DWORD *)&stru_AC4B30.__pad_EC[56] + *(_DWORD *)&stru_AC4B30.__pad_EC[44],
           0) )
    {
      v26 = (*(_DWORD *)&stru_AC4B30.__pad_EC[52])++; /*0x638451*/
      *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40] + 4 * v26) = v14; /*0x638460*/
    }
    v27 = v2[2]; /*0x638463*/
    if ( v27 < 0x18 ) /*0x638469*/
      ++*(_DWORD *)&stru_AC4B30.__pad_48[4 * v27 + 12]; /*0x638470*/
  }
  if ( !v35 ) /*0x63847d*/
  {
    v28 = (VectorClass *)__2_YAPAXI_Z(0xB8u); /*0x638488*/
    v29 = v28; /*0x63848d*/
    if ( v28 ) /*0x638494*/
    {
      *(_DWORD *)&v33[108] = 0; /*0x63849e*/
      *(_DWORD *)&v33[104] = 0; /*0x6384a0*/
      v30 = *(_DWORD *)(v37 + 3); /*0x6384a2*/
      ExecuteActionPlanManager_Helper_63DEC0(v28, 0, 0); /*0x6384a7*/
      v29[1].Capacity = v30; /*0x6384af*/
      *(_DWORD *)&v33[108] = 0; /*0x6384b2*/
      *(_DWORD *)&v33[104] = 0; /*0x6384b4*/
      v29[1].IsInitialized = 0; /*0x6384b6*/
      ExecuteActionPlanManager_Helper_63E1D0(v29 + 2, *(int *)&v33[104], *(int *)&v33[108]); /*0x6384ba*/
      ExecuteActionPlanManager_Helper((ObjectClass *)&v29[3].Capacity); /*0x6384c2*/
      v29[11].vtable0 = (void *)-1; /*0x6384ca*/
      v29[11].Items = (void *)-1; /*0x6384d0*/
      v35 = (ScriptAction *)v29; /*0x6384d6*/
    }
    else
    {
      v35 = 0; /*0x63853d*/
    }
    VectorClass::Append((VectorClass *)&stru_AC4B30, &v35); /*0x63854f*/
    v2 = v37; /*0x638554*/
    v14 = v38; /*0x638558*/
  }
  v32 = ExecuteActionPlanManager_Helper_636EB0(Type); /*0x63855e*/
  if ( v32 ) /*0x638565*/
  {
    qmemcpy(v33, v2, 0x6Fu); /*0x638573*/
    ScriptAction::ExecutePlacement( /*0x638581*/
      (int)v35,
      v32,
      *(int *)v33,
      *(__int64 *)&v33[4],
      *(int *)&v33[12],
      *(int *)&v33[16],
      *(int *)&v33[20],
      *(int *)&v33[24],
      *(int *)&v33[28],
      *(int *)&v33[32],
      *(int *)&v33[36],
      *(int *)&v33[40],
      *(int *)&v33[44],
      *(int *)&v33[48],
      *(int *)&v33[52],
      *(int *)&v33[56],
      *(int *)&v33[60],
      *(int *)&v33[64],
      *(int *)&v33[68],
      *(int *)&v33[72],
      *(int *)&v33[76],
      *(int *)&v33[80],
      *(int *)&v33[84],
      *(int *)&v33[88],
      *(int *)&v33[92],
      *(int *)&v33[96],
      *(int *)&v33[100],
      *(int *)&v33[104],
      *(int *)&v33[108]);
  }
  else
  {
    ScriptAction::CreatePlacementAction(v35, v14, v2); /*0x63858e*/
  }
  if ( v22 ) /*0x638595*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 472), 0x2000, 1.0, 0); /*0x6385ae*/
  return 1; /*0x63824a*/
}



// ==== 0x006385C0  BuildingClass::GetObjectData  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::GetObjectData(BuildingClass *this)
{
  int Type; // eax
  int v3; // ebx
  int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // ebp
  int v7; // eax
  _WORD v9[56]; // [esp+8h] [ebp-E0h] BYREF
  _BYTE v10[112]; // [esp+78h] [ebp-70h] BYREF

  Type = BuildingClass::GetType(this); /*0x6385ca*/
  v3 = Type; /*0x6385cf*/
  if ( !Type ) /*0x6385d3*/
    return 0; /*0x6385d3*/
  if ( *(int *)(Type + 20) <= 0 ) /*0x6385de*/
    return 0; /*0x6385de*/
  v4 = *(_DWORD *)(Type + 140); /*0x6385e4*/
  if ( v4 != -1 && v4 <= 0 ) /*0x6385f1*/
    return 0; /*0x6385f1*/
  if ( *(_BYTE *)(v3 + 28) ) /*0x6385f7*/
    return 0; /*0x6386ca*/
  (*((void (__thiscall **)(BuildingClass *, int, int))this->TechnoClass + 122))(this, 28, 1); /*0x63860c*/
  qmemcpy(v9, (const void *)FactoryClass::CompleteCurrentItem(v3, (int)v10), 0x6Fu); /*0x63862e*/
  v5 = (_BYTE *)__2_YAPAXI_Z(0x6Fu); /*0x638633*/
  if ( v5 ) /*0x63863d*/
  {
    *v5 = 0; /*0x63863f*/
    v6 = v5; /*0x638642*/
  }
  else
  {
    v6 = 0; /*0x638646*/
  }
  qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
  *((_WORD *)v6 + 54) = v9[54]; /*0x638655*/
  v6[110] = v9[55]; /*0x638657*/
  if ( *v6 == 4 ) /*0x63865c*/
    v6[29] = 2; /*0x63865e*/
  if ( *(int *)&stru_AC4B30.__pad_14[20] < *(int *)&stru_AC4B30.__pad_14[12] /*0x638699*/
    || (stru_AC4B30.__pad_14[17] || !*(_DWORD *)&stru_AC4B30.__pad_14[12])
    && (int)stru_AC4B30.Array_field_0x2C > 0
    && (*(unsigned __int8 (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_14[4] + 8))(
         &stru_AC4B30.__pad_14[4],
         (char *)stru_AC4B30.Array_field_0x2C + *(_DWORD *)&stru_AC4B30.__pad_14[12],
         0) )
  {
    v7 = (*(_DWORD *)&stru_AC4B30.__pad_14[20])++; /*0x6386a6*/
    *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_14[8] + 4 * v7) = v6; /*0x6386b5*/
  }
  *(_BYTE *)(v3 + 28) = 1; /*0x6386ba*/
  return 1; /*0x6386be*/
}



// ==== 0x006386E0  ClearFactoryClassProduction  this=IUnknown  sig=csp ====
int __fastcall ClearFactoryClassProduction(_DWORD *a1, int a2)
{
  int result; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // ebx
  int i; // ebp
  Array *v9; // esi
  int Value; // eax
  void *v11; // eax
  int v12; // ecx
  void *Object_field_0x30; // esi
  void *Block; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  if ( a1 ) /*0x6386ec*/
  {
    result = BuildingClass::GetType((BuildingClass *)a1); /*0x6386f2*/
    v5 = result; /*0x6386f7*/
    v15 = result; /*0x6386fb*/
    if ( result ) /*0x6386ff*/
    {
      if ( !a2 || (result = *(char *)(a2 + 29), !*(_BYTE *)(a2 + 29)) ) /*0x638709*/
      {
        result = *(_DWORD *)(v5 + 20); /*0x638715*/
        if ( result > 0 ) /*0x63871a*/
        {
          result = BuildingClass::GetType((BuildingClass *)a1); /*0x638722*/
          v6 = result; /*0x638727*/
          if ( result ) /*0x63872b*/
          {
            v7 = *(_DWORD *)(result + 20); /*0x638731*/
            for ( i = 0; i < v7; ++i ) /*0x638740*/
            {
              v9 = *(Array **)(*(_DWORD *)(v6 + 8) + 4 * i); /*0x638745*/
              Value = Array::FindValue(v9, *(_DWORD *)v6); /*0x63874d*/
              if ( Value == -1 ) /*0x638755*/
                v11 = 0; /*0x638757*/
              else
                v11 = (void *)*((_DWORD *)v9->Array_field_0x4 + Value); /*0x63875e*/
              Block = v11; /*0x638763*/
              if ( v11 ) /*0x638767*/
              {
                FactoryClass::FinishProduction((int *)v9->__pad_0, (int)v11); /*0x63876c*/
                __3_YAXPAX_Z(*((void **)Block + 1)); /*0x638779*/
                FactoryClass::RemoveItemAt((FactoryClass *)v9, (int)&Block); /*0x638788*/
                __3_YAXPAX_Z(Block); /*0x638792*/
                if ( !v9->Array_field_0x10 ) /*0x638797*/
                {
                  if ( v9 ) /*0x6387a3*/
                    FactoryClass::RemoveFromArrays((FactoryClass *)v9, 1); /*0x6387a9*/
                }
              }
            }
            if ( v7 ) /*0x6387ba*/
            {
              Block = *(void **)v6; /*0x6387be*/
              v12 = *((_DWORD *)Block + 135); /*0x6387c2*/
              Object_field_0x30 = *(void **)(v12 + 48); /*0x6387c8*/
              if ( (unsigned __int8)House::IsHumanPlayer((House *)v12) ) /*0x6387cb*/
              {
                if ( dword_A83D4C ) /*0x6387db*/
                  Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x6387dd*/
              }
              DecFactoryClassCounter((unsigned int)Object_field_0x30); /*0x6387e2*/
              VectorClass::EraseAt((VectorClass *)&stru_AC4B30.__pad_EC[36], (int)&Block); /*0x6387f1*/
            }
            (*(void (__thiscall **)(int))(*(_DWORD *)(v6 + 4) + 12))(v6 + 4); /*0x6387fc*/
            v5 = v15; /*0x6387ff*/
            result = -1; /*0x638803*/
            *(_DWORD *)(v6 + 140) = -1; /*0x638806*/
            *(_DWORD *)(v6 + 144) = -1; /*0x63880c*/
            *(_DWORD *)(v6 + 148) = -1; /*0x638812*/
            *(_BYTE *)(v6 + 152) = 0; /*0x638818*/
            *(_BYTE *)(v6 + 153) = 0; /*0x63881f*/
          }
        }
      }
      *(_BYTE *)(v5 + 28) = 0; /*0x638826*/
    }
  }
  return result; /*0x63882a*/
}



// ==== 0x00638840  TechnoClass::RemoveBuildingFromScripts  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RemoveBuildingFromScripts(TechnoClass *this)
{
  int result; // eax
  int v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int Value; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned int Object_field_0x30; // esi
  int v14; // eax
  bool v15; // [esp+7h] [ebp-Dh]
  void *Block; // [esp+8h] [ebp-Ch] BYREF
  int i; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h] BYREF

  result = BuildingClass::GetType((BuildingClass *)this); /*0x638844*/
  v2 = result; /*0x638849*/
  if ( result ) /*0x63884d*/
  {
    v3 = *(_DWORD *)(result + 20); /*0x638853*/
    v15 = v3 == 0; /*0x638859*/
    v4 = 0; /*0x63885e*/
    v18 = v3; /*0x638860*/
    for ( i = 0; i < v18; ++i ) /*0x63886a*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4 * v4); /*0x638875*/
      Value = Array::FindValue((Array *)v5, *(_DWORD *)v2); /*0x63887d*/
      if ( Value == -1 ) /*0x638885*/
        v7 = 0; /*0x638887*/
      else
        v7 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * Value); /*0x63888e*/
      Block = (void *)v7; /*0x638893*/
      if ( v7 ) /*0x638897*/
      {
        if ( *(_BYTE *)(v7 + 12) ) /*0x63889d*/
          ScriptAction::DecrementRefCount((ScriptAction *)v5, v7); /*0x6388a7*/
        v8 = *(_DWORD *)(v7 + 8); /*0x6388ac*/
        if ( v8 != -1 ) /*0x6388b2*/
        {
          v9 = *(_DWORD *)(*(_DWORD *)(v5 + 36) + 4 * v8); /*0x6388b9*/
          *(_DWORD *)(v9 + 116) = -1; /*0x6388be*/
          TeamClass::Reset((TeamClass *)v5, 0); /*0x6388c5*/
          v10 = *(_DWORD *)(v9 + 112) - 1; /*0x6388cd*/
          *(_DWORD *)(v9 + 112) = v10; /*0x6388ce*/
          if ( !v10 ) /*0x6388d1*/
            ScriptQueue::PushEntry((ScriptQueue *)v5); /*0x6388d5*/
        }
        *(_DWORD *)(v7 + 8) = -1; /*0x6388da*/
        __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6388e9*/
        v11 = (*(int (__thiscall **)(int, void **))(*(_DWORD *)v5 + 16))(v5, &Block); /*0x6388fa*/
        if ( v11 != -1 ) /*0x638900*/
          Vector4::EraseAt_Copy((Vector4 *)v5, v11); /*0x638905*/
        __3_YAXPAX_Z(Block); /*0x63890f*/
        if ( !*(_DWORD *)(v5 + 16) && v5 ) /*0x638920*/
        {
          TechnoClass::ClearScriptPlanningData((TechnoClass *)v5); /*0x638924*/
          __3_YAXPAX_Z((void *)v5); /*0x63892a*/
        }
      }
      v4 = i + 1; /*0x63893a*/
    }
    if ( !v15 ) /*0x63894f*/
    {
      v18 = *(_DWORD *)v2; /*0x638957*/
      v12 = *(_DWORD *)(v18 + 540); /*0x63895b*/
      Object_field_0x30 = *(_DWORD *)(v12 + 48); /*0x638961*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v12) && dword_A83D4C ) /*0x638974*/
        Object_field_0x30 = (unsigned int)dword_A83D4C->Object_field_0x30; /*0x638976*/
      if ( Object_field_0x30 < 0x18 ) /*0x63897b*/
        *(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] = (*(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] /*0x638995*/
                                                                      - 1)
                                                                     & ((*(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12]
                                                                       - 1 < 0)
                                                                      - 1);
      v14 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_AC4B30.__pad_EC[36] + 16))( /*0x6389ac*/
              &stru_AC4B30.__pad_EC[36],
              &v18);
      if ( v14 != -1 && v14 < *(int *)&stru_AC4B30.__pad_EC[52] ) /*0x6389be*/
      {
        --*(_DWORD *)&stru_AC4B30.__pad_EC[52]; /*0x6389c3*/
        for ( ; /*0x6389c9*/
              v14 < *(int *)&stru_AC4B30.__pad_EC[52];
              *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40] + 4 * v14 - 4) = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[40]
                                                                                          + 4 * v14) )
        {
          ++v14; /*0x6389d1*/
        }
      }
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 4) + 12))(v2 + 4); /*0x6389ee*/
    *(_DWORD *)(v2 + 140) = -1; /*0x6389f1*/
    *(_DWORD *)(v2 + 144) = -1; /*0x6389f7*/
    *(_DWORD *)(v2 + 148) = -1; /*0x6389fd*/
    *(_BYTE *)(v2 + 152) = 0; /*0x638a03*/
    *(_BYTE *)(v2 + 153) = 0; /*0x638a0a*/
  }
  return result; /*0x638a12*/
}



// ==== 0x00638A80  TechnoClass::CreatePlanningNode  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CreatePlanningNode(TechnoClass *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax

  v2 = __2_YAPAXI_Z(0x9Cu); /*0x638a89*/
  if ( v2 ) /*0x638a95*/
  {
    *(_DWORD *)(v2 + 8) = 0; /*0x638a97*/
    *(_DWORD *)(v2 + 12) = 0; /*0x638a9a*/
    *(_BYTE *)(v2 + 16) = 1; /*0x638a9d*/
    *(_BYTE *)(v2 + 17) = 0; /*0x638aa1*/
    *(_DWORD *)(v2 + 4) = &DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x638aa4*/
    *(_DWORD *)(v2 + 24) = 10; /*0x638aab*/
    *(_DWORD *)(v2 + 20) = 0; /*0x638ab2*/
    *(_BYTE *)(v2 + 28) = 0; /*0x638ab5*/
    *(_BYTE *)(v2 + 29) = 0; /*0x638abb*/
    *(_DWORD *)(v2 + 140) = -1; /*0x638abe*/
    *(_DWORD *)(v2 + 144) = -1; /*0x638ac4*/
    *(_DWORD *)(v2 + 148) = -1; /*0x638aca*/
    *(_BYTE *)(v2 + 152) = 0; /*0x638ad0*/
    *(_BYTE *)(v2 + 153) = 0; /*0x638ad6*/
    *(_DWORD *)v2 = this; /*0x638adc*/
    v3 = v2; /*0x638ade*/
  }
  else
  {
    v3 = 0; /*0x638ae2*/
  }
  if ( *(int *)&stru_AC4B30.__pad_EC[108] < *(int *)&stru_AC4B30.__pad_EC[100] /*0x638b17*/
    || (stru_AC4B30.__pad_EC[105] || !*(_DWORD *)&stru_AC4B30.__pad_EC[100])
    && *(int *)&stru_AC4B30.__pad_EC[112] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_AC4B30.__pad_EC[92] + 8))(
         &stru_AC4B30.__pad_EC[92],
         *(_DWORD *)&stru_AC4B30.__pad_EC[100] + *(_DWORD *)&stru_AC4B30.__pad_EC[112],
         0) )
  {
    v4 = (*(_DWORD *)&stru_AC4B30.__pad_EC[108])++; /*0x638b24*/
    *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_EC[96] + 4 * v4) = v3; /*0x638b33*/
  }
  BuildingClass::SetType((BuildingClass *)this, v3); /*0x638b39*/
  return v3; /*0x638b40*/
}



// ==== 0x00638B70  Team_Load  this=-  sig=csp ====
char __fastcall sub_638B70(int *a1, int a2, char a3, char a4)
{
  int v6; // edi
  int v7; // edx
  int v8; // esi
  _DWORD *v9; // eax
  void *v10; // eax
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  if ( a2 != 11 ) /*0x638b79*/
    return 0; /*0x638b79*/
  if ( !a4 ) /*0x638b85*/
    return 1; /*0x638b8d*/
  if ( !a1 ) /*0x638b92*/
    return 0; /*0x638b92*/
  v6 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*a1 + 440))(a1, &v12); /*0x638ba4*/
  v7 = *a1; /*0x638ba6*/
  v12 = v6; /*0x638baf*/
  v8 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v7 + 440))(a1, &v11); /*0x638bb9*/
  v11 = v8; /*0x638bbf*/
  v9 = Network_Process_6E7C20(&a3); /*0x638bc3*/
  if ( v9 ) /*0x638bca*/
  {
    v8 = v9[9]; /*0x638bcc*/
LABEL_9:
    v11 = v8; /*0x638bef*/
    return (_WORD)v6 == (_WORD)v8 && HIWORD(v12) == HIWORD(v11); /*0x638bef*/
  }
  v10 = BuildingLoadQueue::Find(&a3); /*0x638bd5*/
  if ( v10 ) /*0x638bdc*/
  {
    v8 = *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v10 + 440))(v10, &v11); /*0x638bed*/
    goto LABEL_9; /*0x638bed*/
  }
  return (_WORD)v6 == (_WORD)v8 && HIWORD(v12) == HIWORD(v11); /*0x638b89*/
}



// ==== 0x00638C40  ObjectClass::ExecuteActionPlanManager_Helper_638C40  this=ObjectClass  sig=csp ====
bool __thiscall ExecuteActionPlanManager_Helper_638C40(ObjectClass *this, int a2, char a3)
{
  if ( this != (ObjectClass *)1 && this != (ObjectClass *)11 ) /*0x638c48*/
    return 0; /*0x638c48*/
  if ( a3 == 11 ) /*0x638c50*/
    return 1; /*0x638c54*/
  return this == (ObjectClass *)11 && !a3; /*0x638c60*/
}



// ==== 0x00638C70  ScriptAction::IsBuildingTypeMatch  this=ScriptAction  sig=csp ====
char __thiscall ScriptAction::IsBuildingTypeMatch(ScriptAction *this)
{
  int v2; // edi
  _BYTE *WaypointCoords; // eax
  char v5; // al
  _BYTE v6[8]; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-8h]

  if ( !this ) /*0x638c79*/
    return 0; /*0x638c79*/
  v2 = (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 388))(this); /*0x638c83*/
  if ( v2 == 5 ) /*0x638c88*/
    return 1; /*0x638c91*/
  if ( ((WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v6, *((_DWORD **)this + 173)), /*0x638cc0*/
         v7 = *(_DWORD *)WaypointCoords,
         v5 = WaypointCoords[4],
         v2 == 1)
     || v2 == 11)
    && (v5 == 11 || v2 == 11 && !v5) )
  {
    return 1; /*0x638cc3*/
  }
  else
  {
    return 0; /*0x638ccb*/
  }
}



// ==== 0x00638CE0  ScriptAction::ClassifyAction  this=AbstractClass  sig=csp ====
int __fastcall ScriptAction::ClassifyAction(int *a1, char *a2)
{
  char v3; // cl
  int *Type; // eax
  int v6; // ecx
  Array *v7; // esi
  int Value; // eax
  int v9; // eax
  _BYTE *v10; // esi
  _BYTE v11[108]; // [esp+8h] [ebp-70h] BYREF
  __int16 v12; // [esp+74h] [ebp-4h]
  char v13; // [esp+76h] [ebp-2h]

  v3 = *a2; /*0x638ce8*/
  if ( *a2 == 9 || v3 == 6 || v3 == 7 ) /*0x638cf8*/
    return 0; /*0x638d01*/
  if ( Team_Load(a1, a2[12], *(_DWORD *)(a2 + 14), a2[18]) ) /*0x638d1a*/
    return 0; /*0x638d2a*/
  Type = (int *)BuildingClass::GetType((BuildingClass *)a1); /*0x638d2d*/
  if ( !Type ) /*0x638d34*/
    return -1; /*0x638d34*/
  v6 = Type[5]; /*0x638d36*/
  if ( v6 <= 0 ) /*0x638d3b*/
    return -1; /*0x638d3b*/
  v7 = *(Array **)(Type[2] + 4 * v6 - 4); /*0x638d43*/
  Value = Array::FindValue(v7, *Type); /*0x638d49*/
  if ( Value == -1 ) /*0x638d51*/
    v9 = 0; /*0x638d53*/
  else
    v9 = *((_DWORD *)v7->Array_field_0x4 + Value); /*0x638d5a*/
  v10 = *(_BYTE **)(v9 + 4); /*0x638d5d*/
  qmemcpy(v11, v10, sizeof(v11)); /*0x638d69*/
  v10 += 108; /*0x638d69*/
  v12 = *(_WORD *)v10; /*0x638d6b*/
  v13 = v10[2]; /*0x638d6d*/
  if ( v11[12] == 7 || v11[12] == 8 || v11[12] == 9 ) /*0x638d80*/
    return 1; /*0x638d8c*/
  if ( (v11[12] == 1 || v11[12] == 11) && (v11[18] == 11 || v11[12] == 11 && !v11[18]) ) /*0x638da7*/
    return 2; /*0x638da9*/
  else
    return -1; /*0x638db5*/
}



// ==== 0x00638E60  ObjectClass::SelectScriptNode  this=ObjectClass  sig=csp ====
void SelectScriptNode(ObjectClass *this)
{
  int v1; // ebx
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  int *ScreenPos; // eax
  int *v6; // eax
  int v7; // [esp+4h] [ebp-2Ch]
  int v8; // [esp+8h] [ebp-28h] BYREF
  int v9; // [esp+10h] [ebp-20h] BYREF
  int v10; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+18h] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-14h]
  int v13[4]; // [esp+20h] [ebp-10h] BYREF

  if ( !stru_AC4B30.__pad_EC[148] ) /*0x638e6b*/
  {
    v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer); /*0x638e85*/
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer); /*0x638e8c*/
    v3 = 0; /*0x638e93*/
    v7 = *(_DWORD *)&stru_AC4B30.__pad_EC[12]; /*0x638e95*/
    if ( *(int *)&stru_AC4B30.__pad_EC[12] <= 0 ) /*0x638e9b*/
    {
LABEL_8:
      v4 = 0; /*0x638f1c*/
    }
    else
    {
      while ( 1 ) /*0x638ea7*/
      {
        v4 = *(_DWORD *)(*(_DWORD *)stru_AC4B30.__pad_EC + 4 * v3); /*0x638ea7*/
        ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v4, &v8); /*0x638eac*/
        v6 = ComputeBounds(v13, 8, *ScreenPos, ScreenPos[1]); /*0x638ec1*/
        v9 = *v6; /*0x638ec8*/
        v10 = v6[1]; /*0x638ecf*/
        v11 = v6[2]; /*0x638ed6*/
        v12 = v6[3]; /*0x638ee1*/
        ShrinkRect(&v9, 4); /*0x638eea*/
        if ( v1 >= v9 && v1 < v9 + v11 && v2 >= v10 && v2 < v10 + v12 ) /*0x638f11*/
          break; /*0x638f11*/
        if ( ++v3 >= v7 ) /*0x638f1a*/
          goto LABEL_8; /*0x638f1a*/
      }
    }
    if ( v4 != *(_DWORD *)&stru_AC4B30.__pad_EC[176] ) /*0x638f28*/
    {
      *(_DWORD *)&stru_AC4B30.__pad_EC[32] = 0; /*0x638f2c*/
      if ( v4 /*0x638f66*/
        && (*(Object **)(***(_DWORD ***)(v4 + 4) + 540) != dword_A83D4C
         || *(_DWORD *)&stru_AC4B30.__pad_EC[28] && *(_DWORD *)&stru_AC4B30.__pad_EC[28] != v4
         || BuildingClass::CheckBuildability((BuildingClass *)v4) != -1) )
      {
        *(_DWORD *)&stru_AC4B30.__pad_EC[32] = v4; /*0x638f68*/
        v4 = 0; /*0x638f6e*/
      }
      *(_DWORD *)&stru_AC4B30.__pad_EC[176] = v4; /*0x638f72*/
      if ( v4 ) /*0x638f78*/
        Team_Get((ObjectClass *)v4); /*0x638f7c*/
    }
  }
}



// ==== 0x00638F90  sub_638F90  this=-  sig=csp ====
int __stdcall sub_638F90(int a1, int a2)
{
  _DWORD *Coords; // eax
  _DWORD *v3; // eax
  int v4; // eax
  int v6; // [esp+8h] [ebp-34h] BYREF
  _DWORD v7[3]; // [esp+10h] [ebp-2Ch] BYREF
  _DWORD v8[4]; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD v9[4]; // [esp+2Ch] [ebp-10h] BYREF

  if ( !dword_AC4CCC ) /*0x638f9d*/
    return 0; /*0x638f9d*/
  Coords = ScriptAction::GetCoords((_DWORD **)dword_AC4CCC, v8); /*0x638fa8*/
  v7[0] = *Coords; /*0x638faf*/
  v7[1] = Coords[1]; /*0x638fba*/
  v7[2] = Coords[2]; /*0x638fc5*/
  v3 = ToCoordPixel(&v6, v7); /*0x638fc9*/
  Rect::Set(v9, *v3 - 4, v3[1] - 4, 8, 8); /*0x638fe5*/
  v8[0] = v9[0]; /*0x638ffe*/
  v4 = v9[1] - 4; /*0x639005*/
  if ( a1 < v9[0] - 4 ) /*0x639010*/
    return 0; /*0x639010*/
  if ( a1 < v9[2] + 8 + v9[0] - 4 && a2 >= v4 && a2 < v9[3] + 8 + v4 ) /*0x639024*/
    return dword_AC4CCC; /*0x639026*/
  else
    return 0; /*0x639034*/
}



// ==== 0x00639040  ObjectClass::ReadBuildingINIEntry  this=ObjectClass  sig=csp ====
char ReadBuildingINIEntry(ObjectClass *this)
{
  int v2; // ebp
  int v3; // eax
  int *i; // esi
  int v5; // ecx
  int *Type; // edi
  int v7; // esi
  int v8; // ecx
  _DWORD *v9; // eax
  wchar_t *StringCSF; // eax

  if ( !stru_AC4B30.__pad_EC[216] ) /*0x63904b*/
    return 1; /*0x63904f*/
  v2 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x639054*/
  if ( !*(_DWORD *)&stru_A8EB00.?[228] ) /*0x63905c*/
    return 1; /*0x63905e*/
  v3 = 0; /*0x639065*/
  if ( *(int *)&stru_A8EB00.?[228] > 0 ) /*0x639069*/
  {
    for ( i = *(int **)&stru_A8EB00.?[216]; ; ++i ) /*0x63906f*/
    {
      v5 = *i; /*0x639075*/
      if ( *i ) /*0x639075*/
      {
        if ( (*(_BYTE *)(v5 + 20) & 1) != 0 ) /*0x639085*/
          break; /*0x639085*/
      }
      if ( ++v3 >= *(int *)&stru_A8EB00.?[228] ) /*0x63908d*/
        return 0; /*0x639095*/
    }
    Type = (int *)BuildingClass::GetType((BuildingClass *)v5); /*0x63909b*/
    v7 = 0; /*0x63909d*/
    while ( 1 ) /*0x6390a4*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v7); /*0x6390a4*/
      if ( !v8 ) /*0x6390a9*/
        break; /*0x6390a9*/
      if ( (*(_BYTE *)(v8 + 20) & 1) == 0 ) /*0x6390b5*/
        break; /*0x6390b5*/
      v9 = (_DWORD *)BuildingClass::GetType((BuildingClass *)v8); /*0x6390b7*/
      if ( !Object_Read(Type, v9) ) /*0x6390c0*/
        break; /*0x6390c0*/
      if ( ++v7 >= v2 ) /*0x6390cc*/
        return 1; /*0x6390cc*/
    }
    if ( !stru_AC4B30.__pad_70[104] ) /*0x6390d7*/
    {
      stru_AC4B30.__pad_70[104] = 1; /*0x6390ea*/
      StringCSF = GetStringCSF(aMsgPlanningmod_2, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6390f1*/
      AddMessageListPlayerMessage(StringCSF, 480); /*0x6390fd*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x639119*/
    }
  }
  return 0; /*0x63904d*/
}



// ==== 0x00639130  ObjectClass::ReadBuildingINI  this=ObjectClass  sig=csp ====
char ReadBuildingINI(ObjectClass *this)
{
  unsigned int Object_field_0x30; // ecx
  int v2; // ebp
  int v3; // ebx
  int v4; // edi
  int i; // esi
  int v6; // ecx
  int Type; // eax
  wchar_t *StringCSF; // eax

  if ( !stru_AC4B30.__pad_EC[216] ) /*0x639138*/
    return 1; /*0x639138*/
  Object_field_0x30 = (unsigned int)dword_A83D4C->Object_field_0x30; /*0x639143*/
  v2 = 0; /*0x639157*/
  if ( Object_field_0x30 < 0x18 ) /*0x63915d*/
    v2 = *(_DWORD *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12]; /*0x63915f*/
  v3 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x639166*/
  v4 = 0; /*0x63916c*/
  for ( i = 0; i < v3; ++i ) /*0x639172*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * i); /*0x63917a*/
    if ( v6 ) /*0x63917f*/
    {
      if ( (*(_BYTE *)(v6 + 20) & 1) != 0 ) /*0x63918b*/
      {
        Type = BuildingClass::GetType((BuildingClass *)v6); /*0x63918d*/
        if ( !Type || !*(_DWORD *)(Type + 20) ) /*0x639196*/
          ++v4; /*0x63919d*/
      }
    }
  }
  if ( v4 + v2 <= 128 ) /*0x6391af*/
    return 1; /*0x639203*/
  if ( !stru_AC4B30.__pad_70[104] ) /*0x6391b8*/
  {
    stru_AC4B30.__pad_70[104] = 1; /*0x6391cb*/
    StringCSF = GetStringCSF(aMsgPlannermaxi, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6391d2*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x6391de*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x6391fa*/
  }
  return 0; /*0x639202*/
}



// ==== 0x00639210  sub_639210  this=-  sig=ida-proto ====
int __fastcall sub_639210(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  _DWORD *ScenarioClassActionCoords; // eax
  int v9; // ecx
  int v10; // edi
  int v14; // [esp+18h] [ebp-10h]
  _DWORD v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = dword_AC4B40; /*0x639217*/
  v6 = 0; /*0x63921d*/
  v14 = dword_AC4B40; /*0x639229*/
  if ( dword_AC4B40 <= 0 ) /*0x63922d*/
    return 0; /*0x6392bc*/
  while ( 1 ) /*0x63923c*/
  {
    v7 = *((_DWORD *)dword_AC4B34 + v6); /*0x63923c*/
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v15, *(_BYTE **)(**(_DWORD **)(v7 + 4) + 4)); /*0x63924b*/
    if ( *ScenarioClassActionCoords != a3 /*0x639276*/
      || ScenarioClassActionCoords[1] != a4
      || ScenarioClassActionCoords[2] != a5
      || a2 != -1 && a2 != *(_DWORD *)(v7 + 24) )
    {
      goto LABEL_13; /*0x639276*/
    }
    v9 = *(_DWORD *)(***(_DWORD ***)(v7 + 4) + 540); /*0x63927f*/
    v10 = *(_DWORD *)(v9 + 48); /*0x639285*/
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v9) && dword_A83D4C ) /*0x639298*/
      v10 = *((_DWORD *)dword_A83D4C + 12); /*0x63929a*/
    if ( a1 == -1 || a1 == v10 ) /*0x6392a8*/
      return v7; /*0x6392b3*/
    v5 = v14; /*0x6392aa*/
LABEL_13:
    if ( ++v6 >= v5 ) /*0x6392b1*/
      return 0; /*0x6392b1*/
  }
}



// ==== 0x006392D0  sub_6392D0  this=-  sig=csp ====
_DWORD **__stdcall sub_6392D0(int a1, int a2)
{
  int v2; // ebx
  _DWORD **v3; // edi
  _DWORD *Coords; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v8; // [esp+10h] [ebp-44h]
  int v9; // [esp+14h] [ebp-40h] BYREF
  _DWORD v10[3]; // [esp+1Ch] [ebp-38h] BYREF
  _DWORD v11[3]; // [esp+28h] [ebp-2Ch] BYREF
  _DWORD v12[8]; // [esp+34h] [ebp-20h] BYREF

  v2 = 0; /*0x6392da*/
  v8 = dword_AC4B40; /*0x6392e0*/
  if ( dword_AC4B40 <= 0 ) /*0x6392e4*/
    return 0; /*0x639393*/
  while ( 1 ) /*0x6392f8*/
  {
    v3 = (_DWORD **)*((_DWORD *)dword_AC4B34 + v2); /*0x6392f8*/
    Coords = ScriptAction::GetCoords(v3, v11); /*0x6392fd*/
    v10[0] = *Coords; /*0x639304*/
    v10[1] = Coords[1]; /*0x63930b*/
    v10[2] = Coords[2]; /*0x639316*/
    v5 = ToCoordPixel(&v9, v10); /*0x63931e*/
    Rect::Set(v12, *v5 - 4, v5[1] - 4, 8, 8); /*0x63933a*/
    v12[4] = v12[0]; /*0x63934f*/
    v6 = v12[1] - 4; /*0x639356*/
    if ( a1 >= v12[0] - 4 && a1 < v12[2] + 8 + v12[0] - 4 && a2 >= v6 && a2 < v12[3] + 8 + v6 ) /*0x639377*/
      break; /*0x639377*/
    if ( ++v2 >= v8 ) /*0x639380*/
      return 0; /*0x639380*/
  }
  return v3; /*0x639389*/
}



// ==== 0x006393A0  sub_6393A0  this=-  sig=csp ====
_DWORD **__stdcall sub_6393A0(int a1, int a2)
{
  int v2; // ebx
  _DWORD **v3; // edi
  _DWORD *Coords; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v8; // [esp+10h] [ebp-44h]
  int v9; // [esp+14h] [ebp-40h] BYREF
  _DWORD v10[3]; // [esp+1Ch] [ebp-38h] BYREF
  _DWORD v11[3]; // [esp+28h] [ebp-2Ch] BYREF
  _DWORD v12[8]; // [esp+34h] [ebp-20h] BYREF

  v2 = 0; /*0x6393aa*/
  v8 = dword_AC4C28; /*0x6393b0*/
  if ( dword_AC4C28 <= 0 ) /*0x6393b4*/
    return 0; /*0x639463*/
  while ( 1 ) /*0x6393c8*/
  {
    v3 = (_DWORD **)*((_DWORD *)dword_AC4C1C + v2); /*0x6393c8*/
    Coords = ScriptAction::GetCoords(v3, v11); /*0x6393cd*/
    v10[0] = *Coords; /*0x6393d4*/
    v10[1] = Coords[1]; /*0x6393db*/
    v10[2] = Coords[2]; /*0x6393e6*/
    v5 = ToCoordPixel(&v9, v10); /*0x6393ee*/
    Rect::Set(v12, *v5 - 4, v5[1] - 4, 8, 8); /*0x63940a*/
    v12[4] = v12[0]; /*0x63941f*/
    v6 = v12[1] - 4; /*0x639426*/
    if ( a1 >= v12[0] - 4 && a1 < v12[2] + 8 + v12[0] - 4 && a2 >= v6 && a2 < v12[3] + 8 + v6 ) /*0x639447*/
      break; /*0x639447*/
    if ( ++v2 >= v8 ) /*0x639450*/
      return 0; /*0x639450*/
  }
  return v3; /*0x639459*/
}



// ==== 0x00639470  sub_639470  this=-  sig=csp ====
int __stdcall sub_639470(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  _DWORD *ScenarioClassActionCoords; // eax
  _DWORD v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = dword_AC4C28; /*0x639475*/
  v4 = 0; /*0x63947d*/
  if ( dword_AC4C28 <= 0 ) /*0x639481*/
    return 0; /*0x6394cd*/
  while ( 1 ) /*0x63948c*/
  {
    v5 = *((_DWORD *)dword_AC4C1C + v4); /*0x63948c*/
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(_BYTE **)(**(_DWORD **)(v5 + 4) + 4)); /*0x63949b*/
    if ( *ScenarioClassActionCoords == a1 && ScenarioClassActionCoords[1] == a2 && ScenarioClassActionCoords[2] == a3 ) /*0x6394b8*/
      break; /*0x6394b8*/
    if ( ++v4 >= v3 ) /*0x6394bd*/
      return 0; /*0x6394bd*/
  }
  return v5; /*0x6394c3*/
}



// ==== 0x006394E0  sub_6394E0  this=-  sig=ida-proto ====
char __fastcall sub_6394E0(_DWORD *a1, int a2)
{
  _BYTE *v3; // esi
  BuildingLoadQueue *v4; // ecx
  _DWORD *Next; // eax
  _BYTE *WaypointCoords; // eax
  int v7; // edx
  _BYTE *v8; // eax
  _BYTE v10[108]; // [esp-70h] [ebp-16Ch] BYREF
  int v11; // [esp-4h] [ebp-100h]
  _BYTE v12[236]; // [esp+Ch] [ebp-F0h] BYREF
  __int16 v13; // [esp+F8h] [ebp-4h]
  char v14; // [esp+FAh] [ebp-2h]

  v3 = *(_BYTE **)(**(_DWORD **)(a2 + 4) + 4); /*0x6394ef*/
  qmemcpy(&v12[16], v3, 0x6Cu); /*0x6394fc*/
  v3 += 108; /*0x6394fc*/
  *(_WORD *)&v12[124] = *(_WORD *)v3; /*0x6394fe*/
  v12[126] = v3[2]; /*0x639500*/
  if ( v12[34] ) /*0x639507*/
  {
    v4 = (BuildingLoadQueue *)&v12[30]; /*0x639509*/
  }
  else if ( v12[44] ) /*0x639515*/
  {
    v4 = (BuildingLoadQueue *)&v12[40]; /*0x639517*/
  }
  else
  {
    LOBYTE(Next) = v12[39]; /*0x63951d*/
    if ( !v12[39] ) /*0x639523*/
      return (char)Next; /*0x639523*/
    v4 = (BuildingLoadQueue *)&v12[35]; /*0x639525*/
  }
  Next = BuildingLoadQueue::GetNext(v4); /*0x639529*/
  if ( Next ) /*0x639530*/
  {
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)&v12[8], Next); /*0x639537*/
    v7 = *(_DWORD *)WaypointCoords; /*0x63953c*/
    LOBYTE(WaypointCoords) = WaypointCoords[4]; /*0x639543*/
    *(_DWORD *)&v10[104] = v7; /*0x639547*/
    LOBYTE(v11) = (_BYTE)WaypointCoords; /*0x639549*/
    v8 = ScriptAction::GetWaypointCoords((ScriptAction *)v12, a1); /*0x639550*/
    ScenarioClass::SetEvent( /*0x639577*/
      &v12[128],
      (int)dword_A83D4C->Object_field_0x30,
      42,
      *(_DWORD *)v8,
      v8[4],
      *(int *)&v10[104],
      v11);
    qmemcpy(v10, &v12[128], sizeof(v10)); /*0x63958d*/
    LOWORD(v11) = v13; /*0x63958f*/
    BYTE2(v11) = v14; /*0x639591*/
    LOBYTE(Next) = Network::RecordEvent( /*0x639592*/
                     *(__int64 *)v10,
                     *(int *)&v10[8],
                     *(int *)&v10[12],
                     *(int *)&v10[16],
                     *(int *)&v10[20],
                     *(int *)&v10[24],
                     *(int *)&v10[28],
                     *(int *)&v10[32],
                     *(int *)&v10[36],
                     *(int *)&v10[40],
                     *(int *)&v10[44],
                     *(int *)&v10[48],
                     *(int *)&v10[52],
                     *(int *)&v10[56],
                     *(int *)&v10[60],
                     *(int *)&v10[64],
                     *(int *)&v10[68],
                     *(int *)&v10[72],
                     *(int *)&v10[76],
                     *(int *)&v10[80],
                     *(int *)&v10[84],
                     *(int *)&v10[88],
                     *(int *)&v10[92],
                     *(int *)&v10[96],
                     *(int *)&v10[100],
                     *(int *)&v10[104],
                     v11);
  }
  return (char)Next; /*0x639597*/
}



// ==== 0x006395B0  BuildingClass::SetProduction  this=BuildingClass  sig=ida-proto ====
char __fastcall BuildingClass::SetProduction(int a1, ScriptAction *a2)
{
  ScriptAction *v2; // ebx
  int Type; // eax
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // ebx
  int i; // esi
  _BYTE *v18; // ecx
  int v20; // [esp+10h] [ebp-Ch] BYREF
  ScriptAction *v21; // [esp+14h] [ebp-8h] BYREF
  int v22; // [esp+18h] [ebp-4h]

  v2 = a2; /*0x6395b6*/
  v22 = (int)a2; /*0x6395bb*/
  Type = BuildingClass::GetType((BuildingClass *)a1); /*0x6395bf*/
  if ( !Type ) /*0x6395c6*/
  {
    v5 = __2_YAPAXI_Z(0x9Cu); /*0x6395d1*/
    v6 = v5; /*0x6395d6*/
    if ( v5 ) /*0x6395dd*/
    {
      v7 = (_DWORD *)(v5 + 4); /*0x6395df*/
      Object_Set((VectorClass *)(v5 + 4), 0, 0); /*0x6395e8*/
      *v7 = &DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x6395ed*/
      *(_DWORD *)(v6 + 24) = 10; /*0x6395f3*/
      *(_DWORD *)(v6 + 20) = 0; /*0x6395fa*/
      *(_BYTE *)(v6 + 28) = 0; /*0x639601*/
      *(_BYTE *)(v6 + 29) = 0; /*0x639608*/
      *(_DWORD *)(v6 + 140) = -1; /*0x63960c*/
      *(_DWORD *)(v6 + 144) = -1; /*0x639612*/
      *(_DWORD *)(v6 + 148) = -1; /*0x639618*/
      *(_BYTE *)(v6 + 152) = 0; /*0x63961e*/
      *(_BYTE *)(v6 + 153) = 0; /*0x639625*/
      *(_DWORD *)v6 = a1; /*0x63962c*/
      v20 = v6; /*0x63962e*/
    }
    else
    {
      v20 = 0; /*0x639634*/
    }
    ScriptActionVector::PushBack((ScriptActionVector *)&stru_AC4B30.__pad_EC[92], &v20); /*0x639646*/
    BuildingClass::SetType((BuildingClass *)a1, v20); /*0x639652*/
    Type = v20; /*0x639657*/
  }
  v8 = *(_DWORD *)(Type + 4); /*0x63965b*/
  v21 = v2; /*0x639665*/
  if ( (*(int (__thiscall **)(int, ScriptAction **))(v8 + 16))(Type + 4, &v21) == -1 ) /*0x639670*/
    return CompleteBuildingProduction((_DWORD *)a1, (int)v2); /*0x639727*/
  v9 = BuildingClass::GetType((BuildingClass *)a1); /*0x639678*/
  v10 = *(_DWORD *)(v9 + 4); /*0x63967d*/
  v21 = v2; /*0x639687*/
  v11 = (*(int (__thiscall **)(int, ScriptAction **))(v10 + 16))(v9 + 4, &v21); /*0x639691*/
  v12 = BuildingClass::GetType((BuildingClass *)a1); /*0x639698*/
  v13 = *(_DWORD *)(v12 + 20); /*0x63969a*/
  *(_DWORD *)(v12 + 148) = v11; /*0x63969d*/
  *(_BYTE *)(v12 + 152) = 1; /*0x6396a5*/
  *(_DWORD *)(v12 + 144) = v13 - v11; /*0x6396ac*/
  if ( !stru_AC4B30.__pad_EC[172] ) /*0x6396b9*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(a1 + 540)) ) /*0x6396c1*/
    {
      stru_AC4B30.__pad_EC[172] = 1; /*0x6396ca*/
      v14 = *(_DWORD *)(v12 + 20) - 1; /*0x6396d4*/
      if ( v14 >= 0 ) /*0x6396d5*/
        v15 = *(_DWORD *)(*(_DWORD *)(v12 + 8) + 4 * v14); /*0x6396de*/
      else
        v15 = 0; /*0x6396d7*/
      v16 = *(_DWORD *)(v15 + 16); /*0x6396e1*/
      for ( i = 0; i < v16; ++i ) /*0x6396e8*/
      {
        v18 = **(_BYTE ***)(*(_DWORD *)(v15 + 4) + 4 * i); /*0x6396f0*/
        if ( v18[131] ) /*0x6396f2*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 336))(v18); /*0x6396fe*/
      }
      v2 = (ScriptAction *)v22; /*0x639709*/
    }
    BuildingClass::CheckExitPath((BuildingClass *)a1); /*0x63970f*/
  }
  return ScriptAction::FindSquadMember(v2); /*0x63971b*/
}



// ==== 0x00639740  BuildingClass::CompleteProduction  this=BuildingClass  sig=ida-proto ====
int __fastcall BuildingClass::CompleteProduction(int a1, ScriptAction *a2)
{
  ScriptAction *v2; // ebx
  int Type; // eax
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int i; // esi
  _DWORD *v12; // eax
  ScriptAction *v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  v2 = a2; /*0x639746*/
  v15 = (int)a2; /*0x63974b*/
  Type = BuildingClass::GetType((BuildingClass *)a1); /*0x63974f*/
  v14 = v2; /*0x63975c*/
  v5 = (*(int (__thiscall **)(int, ScriptAction **))(*(_DWORD *)(Type + 4) + 16))(Type + 4, &v14); /*0x639767*/
  v6 = BuildingClass::GetType((BuildingClass *)a1); /*0x63976e*/
  v7 = *(_DWORD *)(v6 + 20); /*0x639770*/
  *(_DWORD *)(v6 + 148) = v5; /*0x639773*/
  *(_BYTE *)(v6 + 152) = 1; /*0x63977b*/
  *(_DWORD *)(v6 + 144) = v7 - v5; /*0x639782*/
  if ( !stru_AC4B30.__pad_EC[172] ) /*0x63978f*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(a1 + 540)) ) /*0x639797*/
    {
      stru_AC4B30.__pad_EC[172] = 1; /*0x6397a0*/
      v8 = *(_DWORD *)(v6 + 20) - 1; /*0x6397aa*/
      if ( v8 >= 0 ) /*0x6397ab*/
        v9 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * v8); /*0x6397b4*/
      else
        v9 = 0; /*0x6397ad*/
      v10 = *(_DWORD *)(v9 + 16); /*0x6397b7*/
      for ( i = 0; i < v10; ++i ) /*0x6397be*/
      {
        v12 = *(_DWORD **)(*(_DWORD *)(v9 + 4) + 4 * i); /*0x6397c3*/
        if ( *(_BYTE *)(*v12 + 131) ) /*0x6397c8*/
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v12 + 336))(*v12); /*0x6397d4*/
      }
      v2 = (ScriptAction *)v15; /*0x6397df*/
    }
    BuildingClass::CheckExitPath((BuildingClass *)a1); /*0x6397e5*/
  }
  return ScriptAction::FindSquadMember(v2); /*0x6397f1*/
}



// ==== 0x00639800  CompleteBuildingProduction  this=-  sig=csp ====
char __fastcall CompleteBuildingProduction(BuildingClass *a1, int a2)
{
  ScriptAction *v2; // edi
  BuildingClass *v4; // ebx
  int Type; // eax
  int v6; // edx
  int v7; // ebp
  TeamClass *v8; // ebx
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // ecx
  int abstractFlags; // edi
  int v13; // edx
  ScriptAction *v14; // esi
  int v15; // edx
  ScriptAction *v16; // eax
  int v17; // eax
  _BYTE *v18; // esi
  BuildingClass *v19; // esi
  _BYTE *WaypointCoords; // eax
  ScriptAction *v21; // eax
  ScriptAction *v22; // edx
  int v23; // eax
  int v24; // esi
  int v25; // ebx
  int j; // edi
  int v27; // ecx
  int i; // edi
  _BYTE *v29; // ecx
  int vtable0; // [esp-4h] [ebp-A4h]
  ScriptAction *v32; // [esp+10h] [ebp-90h] BYREF
  ScriptAction *v33; // [esp+14h] [ebp-8Ch]
  int v34; // [esp+18h] [ebp-88h] BYREF
  _DWORD *v35; // [esp+1Ch] [ebp-84h]
  int v36; // [esp+20h] [ebp-80h] BYREF
  BuildingClass *v37; // [esp+24h] [ebp-7Ch]
  _BYTE v38[8]; // [esp+28h] [ebp-78h] BYREF
  _BYTE v39[108]; // [esp+30h] [ebp-70h] BYREF
  __int16 v40; // [esp+9Ch] [ebp-4h]
  char v41; // [esp+9Eh] [ebp-2h]

  v2 = (ScriptAction *)a2; /*0x63980a*/
  v36 = a2; /*0x63980e*/
  v37 = a1; /*0x639812*/
  v4 = ***(BuildingClass ****)(a2 + 4); /*0x63981b*/
  Type = BuildingClass::GetType(v4); /*0x63981f*/
  v6 = *(_DWORD *)(Type + 4); /*0x639824*/
  v34 = (int)v2; /*0x63982e*/
  v7 = (*(int (__thiscall **)(int, int *))(v6 + 16))(Type + 4, &v34); /*0x639838*/
  v8 = (TeamClass *)BuildingClass::GetType(v4); /*0x63983f*/
  TeamClass::UpdateBuildQueue(v8, a1, v7, v8->? - v7); /*0x63984b*/
  v32 = (ScriptAction *)-1; /*0x639855*/
  v34 = -1; /*0x639859*/
  v33 = 0; /*0x63985d*/
  v9 = BuildingClass::GetType(a1); /*0x639865*/
  v10 = v8->countObjects[3]; /*0x63986a*/
  v11 = (_DWORD *)v9; /*0x639870*/
  v35 = (_DWORD *)v9; /*0x639874*/
  if ( v10 < 0 ) /*0x639878*/
  {
    v2 = v33; /*0x63997f*/
    v17 = v34; /*0x639983*/
  }
  else
  {
    v34 = v8->countObjects[2]; /*0x639888*/
    if ( v10 <= 0 || v7 >= v10 ) /*0x639890*/
    {
      if ( BuildingClass::GetType(v37) ) /*0x6398e5*/
      {
        v33 = (ScriptAction *)v10; /*0x6398f0*/
        if ( v10 < v7 ) /*0x6398f4*/
        {
          do /*0x639952*/
          {
            vtable0 = (int)v8->AbstractClass; /*0x639902*/
            v32 = (ScriptAction *)*((_DWORD *)v8->? + (_DWORD)v33); /*0x639903*/
            v18 = (_BYTE *)ScriptAction::FindItemByValue(v32, vtable0)[1]; /*0x63990c*/
            qmemcpy(v39, v18, sizeof(v39)); /*0x639918*/
            v18 += 108; /*0x639918*/
            v40 = *(_WORD *)v18; /*0x63991a*/
            v41 = v18[2]; /*0x63991c*/
            v19 = v37; /*0x63991d*/
            WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v38, v37); /*0x639926*/
            *(_DWORD *)&v39[7] = *(_DWORD *)WaypointCoords; /*0x63992d*/
            v39[11] = WaypointCoords[4]; /*0x63993e*/
            ScriptAction::CreatePlacementAction(v32, v19, v39); /*0x639942*/
            v33 = (ScriptAction *)((char *)v33 + 1); /*0x63994e*/
          }
          while ( (int)v33 < v7 ); /*0x639952*/
          v2 = (ScriptAction *)v36; /*0x639954*/
        }
      }
      v36 = (int)v2; /*0x639964*/
      v21 = (ScriptAction *)(*(int (__thiscall **)(_DWORD *, int *))(v35[1] + 16))(v35 + 1, &v36); /*0x63996a*/
      v11 = v35; /*0x63996d*/
      v32 = v21; /*0x639971*/
      v17 = v34; /*0x639975*/
      v33 = v2; /*0x639979*/
    }
    else
    {
      abstractFlags = v8->?; /*0x639892*/
      v13 = v10; /*0x639895*/
      if ( !abstractFlags ) /*0x639899*/
        goto LABEL_10; /*0x639899*/
      if ( v10 >= abstractFlags ) /*0x63989d*/
        v13 = v10 + 0 % v34; /*0x6398a8*/
      if ( v13 >= 0 && v13 < abstractFlags ) /*0x6398b0*/
        v14 = (ScriptAction *)*((_DWORD *)v8->? + v13); /*0x6398b5*/
      else
LABEL_10:
        v14 = 0; /*0x6398ba*/
      v15 = *(_DWORD *)(v9 + 4); /*0x6398bc*/
      v32 = v14; /*0x6398c6*/
      v16 = (ScriptAction *)(*(int (__thiscall **)(int, ScriptAction **))(v15 + 16))(v9 + 4, &v32); /*0x6398cb*/
      v2 = v14; /*0x6398ce*/
      v11 = v35; /*0x6398d0*/
      v32 = v16; /*0x6398d4*/
      v17 = v34; /*0x6398d8*/
    }
  }
  v22 = v32; /*0x639987*/
  v11[36] = v17; /*0x63998f*/
  v11[37] = v22; /*0x639995*/
  *((_BYTE *)v11 + 152) = 1; /*0x63999b*/
  if ( v2 ) /*0x6399a1*/
    ScriptAction::FindSquadMember(v2); /*0x6399a5*/
  LOBYTE(v23) = stru_AC4B30.__pad_EC[180]; /*0x6399aa*/
  if ( !stru_AC4B30.__pad_EC[180] ) /*0x6399b1*/
  {
    LOBYTE(v23) = House::IsHumanPlayer((House *)v37->?); /*0x6399c1*/
    if ( (_BYTE)v23 ) /*0x6399c8*/
    {
      stru_AC4B30.__pad_EC[180] = 1; /*0x6399ce*/
      v23 = v35[5] - 1; /*0x6399d7*/
      if ( v23 >= 0 ) /*0x6399d8*/
        v24 = *(_DWORD *)(v35[2] + 4 * v23); /*0x6399e1*/
      else
        v24 = 0; /*0x6399da*/
      v25 = *(_DWORD *)(v24 + 16); /*0x6399e4*/
      if ( v2 ) /*0x6399e9*/
      {
        for ( i = 0; i < v25; ++i ) /*0x639a1f*/
        {
          v29 = **(_BYTE ***)(*(_DWORD *)(v24 + 4) + 4 * i); /*0x639a27*/
          LOBYTE(v23) = v29[131]; /*0x639a29*/
          if ( (_BYTE)v23 ) /*0x639a31*/
            LOBYTE(v23) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v29 + 336))(v29); /*0x639a35*/
        }
      }
      else
      {
        for ( j = 0; j < v25; ++j ) /*0x6399ef*/
        {
          v23 = *(_DWORD *)(*(_DWORD *)(v24 + 4) + 4 * j); /*0x6399f4*/
          v27 = *(_DWORD *)v23; /*0x6399f7*/
          LOBYTE(v23) = *(_BYTE *)(*(_DWORD *)v23 + 131); /*0x6399f9*/
          if ( !(_BYTE)v23 ) /*0x639a01*/
            LOBYTE(v23) = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 332))(v27); /*0x639a05*/
        }
      }
    }
  }
  return v23; /*0x639a10*/
}



// ==== 0x00639A50  ScriptAction::ExecutePlacement  this=ScriptAction  sig=ida-proto ====
int __fastcall sub_639A50(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  int result; // eax
  _DWORD *v31; // ebx
  _BYTE *WaypointCoords; // eax
  _DWORD *v33; // eax
  _BYTE *v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  int Type; // ebx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // edx
  _DWORD *v44; // [esp+Ch] [ebp-18h]
  int v45; // [esp+10h] [ebp-14h]
  int v46; // [esp+14h] [ebp-10h]
  int v47; // [esp+18h] [ebp-Ch]
  char v48[8]; // [esp+1Ch] [ebp-8h] BYREF

  result = *(_DWORD *)(a2 + 16); /*0x639a53*/
  v46 = a2; /*0x639a5c*/
  v47 = result; /*0x639a62*/
  v45 = 0; /*0x639a66*/
  if ( result > 0 ) /*0x639a6a*/
  {
    while ( 1 ) /*0x639a88*/
    {
      v31 = **(_DWORD ***)(*(_DWORD *)(a2 + 4) + 4 * v45); /*0x639a88*/
      WaypointCoords = ScriptAction::GetWaypointCoords(v48, v31); /*0x639a8b*/
      *(_DWORD *)((char *)&a4 + 3) = *(_DWORD *)WaypointCoords; /*0x639a94*/
      HIBYTE(a4) = WaypointCoords[4]; /*0x639a9b*/
      v33 = __2_YAPAXI_Z(0x10u); /*0x639a9f*/
      if ( v33 ) /*0x639aa9*/
      {
        *v33 = 0; /*0x639aab*/
        v33[1] = 0; /*0x639aad*/
        v33[2] = -1; /*0x639ab0*/
        *((_BYTE *)v33 + 12) = 0; /*0x639ab7*/
        v44 = v33; /*0x639abb*/
      }
      else
      {
        v44 = 0; /*0x639ac1*/
      }
      *v44 = v31; /*0x639acb*/
      v34 = __2_YAPAXI_Z(0x6Fu); /*0x639acd*/
      if ( v34 ) /*0x639ad7*/
        *v34 = 0; /*0x639ad9*/
      else
        v34 = 0; /*0x639ade*/
      qmemcpy(v34, &a3, 0x6Cu); /*0x639aeb*/
      *((_WORD *)v34 + 54) = a29; /*0x639aed*/
      v34[110] = BYTE2(a29); /*0x639aef*/
      v44[1] = v34; /*0x639af4*/
      v35 = *(_DWORD *)(a1 + 8); /*0x639af7*/
      if ( *(_DWORD *)(a1 + 16) < v35 /*0x639b1b*/
        || (*(_BYTE *)(a1 + 13) || !v35)
        && (v36 = *(_DWORD *)(a1 + 20), v36 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v35 + v36, 0) )
      {
        v37 = *(_DWORD *)(a1 + 16); /*0x639b22*/
        v38 = *(_DWORD *)(a1 + 4); /*0x639b25*/
        *(_DWORD *)(a1 + 16) = v37 + 1; /*0x639b2b*/
        *(_DWORD *)(v38 + 4 * v37) = v44; /*0x639b2e*/
      }
      Type = BuildingClass::GetType(v31); /*0x639b38*/
      v40 = *(_DWORD *)(Type + 12); /*0x639b3a*/
      if ( *(_DWORD *)(Type + 20) < v40 /*0x639b62*/
        || (*(_BYTE *)(Type + 17) || !v40)
        && (v41 = *(_DWORD *)(Type + 24), v41 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v40 + v41, 0) )
      {
        v42 = *(_DWORD *)(Type + 20); /*0x639b69*/
        v43 = *(_DWORD *)(Type + 8); /*0x639b6c*/
        *(_DWORD *)(Type + 20) = v42 + 1; /*0x639b72*/
        *(_DWORD *)(v43 + 4 * v42) = a1; /*0x639b75*/
      }
      if ( *(_DWORD *)(Type + 140) == -1 ) /*0x639b7f*/
        *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x639b85*/
      ScriptAction::PlaceObject(a1, v44); /*0x639b8e*/
      result = ++v45; /*0x639b9b*/
      if ( v45 >= v47 ) /*0x639ba2*/
        break; /*0x639ba2*/
      a2 = v46; /*0x639a74*/
    }
  }
  return result; /*0x639baa*/
}



// ==== 0x00639BC0  BuildingClass::FlushScriptActions  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::FlushScriptActions(BuildingClass *this)
{
  _DWORD *Type; // esi
  int v3; // eax
  BuildingClass *v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  BuildingClass *v9; // edx
  int i; // edi
  TeamClass *v11; // esi
  int v12; // eax
  int uniqueId; // edi
  int j; // esi
  BuildingClass *v15; // [esp+10h] [ebp-4h] BYREF

  if ( !this ) /*0x639bc9*/
    return; /*0x639bc9*/
  Type = (_DWORD *)BuildingClass::GetType(**(BuildingClass ***)this->?); /*0x639bdb*/
  v15 = this; /*0x639be2*/
  v3 = (*(int (__thiscall **)(_DWORD *, BuildingClass **))(Type[1] + 16))(Type + 1, &v15); /*0x639bec*/
  if ( v3 != -1 ) /*0x639bf2*/
  {
    v5 = Type[5]; /*0x639bf8*/
    if ( v5 == 1 ) /*0x639bfe*/
    {
      v4 = this; /*0x639c00*/
      goto LABEL_17; /*0x639c02*/
    }
    v6 = v3 + 1; /*0x639c04*/
    if ( v6 >= v5 ) /*0x639c07*/
      v6 = 0; /*0x639c09*/
    v7 = v6; /*0x639c0d*/
    if ( !v5 ) /*0x639c0f*/
      goto LABEL_15; /*0x639c0f*/
    if ( v6 >= v5 ) /*0x639c13*/
    {
      v8 = Type[37]; /*0x639c15*/
      if ( v8 < 0 ) /*0x639c1d*/
        goto LABEL_15; /*0x639c1d*/
      v7 = v8 + (v6 - v8) % Type[36]; /*0x639c2a*/
    }
    if ( v7 >= 0 && v7 < v5 ) /*0x639c32*/
    {
      v9 = *(BuildingClass **)(Type[2] + 4 * v7); /*0x639c37*/
LABEL_16:
      v4 = v9; /*0x639c3e*/
      goto LABEL_17; /*0x639c3e*/
    }
LABEL_15:
    v9 = 0; /*0x639c3c*/
    goto LABEL_16; /*0x639c3c*/
  }
  v4 = 0; /*0x639bf4*/
LABEL_17:
  for ( i = this->? - 1; i >= 0; --i ) /*0x639c44*/
  {
    v11 = (TeamClass *)BuildingClass::GetType(**((BuildingClass ***)this->? + i)); /*0x639c53*/
    v15 = this; /*0x639c5a*/
    v12 = (*((int (__thiscall **)(void **, BuildingClass **))v11->? + 4))(&v11->?, &v15); /*0x639c64*/
    TeamClass::Cleanup(v11, v12); /*0x639c6a*/
  }
  if ( v4 && v4 != this ) /*0x639c78*/
  {
    FactoryClass::ClearObjects((FactoryClass *)v4); /*0x639c7c*/
    uniqueId = v4->?; /*0x639c81*/
    for ( j = 0; j < uniqueId; ++j ) /*0x639c88*/
      ScriptAction::PlaceObject((int)v4, *((_DWORD **)v4->? + j)); /*0x639c93*/
    ScriptAction::FindSquadMember((ScriptAction *)v4); /*0x639c9f*/
    LOBYTE(v4->?) = 0; /*0x639ca4*/
  }
}



// ==== 0x00639CB0  BuildingClass::CheckExitPath  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckExitPath(BuildingClass *this)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // edx
  int v10; // edx
  int v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  int i; // ecx
  int v16; // eax
  int v17; // [esp+10h] [ebp-8h]
  _DWORD *v18; // [esp+14h] [ebp-4h]

  result = BuildingClass::GetType(this); /*0x639cb7*/
  v2 = result; /*0x639cbc*/
  v3 = 0; /*0x639cbe*/
  v18 = (_DWORD *)result; /*0x639cc0*/
  v4 = *(_DWORD *)(result + 20); /*0x639cc4*/
  v5 = *(_DWORD *)(result + 148); /*0x639cc7*/
  v17 = v4; /*0x639ccf*/
  if ( v4 /*0x639cf0*/
    && (v4 > 0
     || v5 >= 0 && (result = -v5 / *(_DWORD *)(result + 144), v3 = v5 + -v5 % *(_DWORD *)(v2 + 144), v3 >= 0) && v3 < v4) )
  {
    result = *(_DWORD *)(v2 + 8); /*0x639cf2*/
    v6 = *(_DWORD *)(result + 4 * v3); /*0x639cf5*/
  }
  else
  {
    v6 = 0; /*0x639cfa*/
  }
  v7 = *(_DWORD *)(v6 + 16); /*0x639cfc*/
  v8 = 0; /*0x639cff*/
  if ( v7 > 0 ) /*0x639d03*/
  {
    while ( 1 ) /*0x639d0c*/
    {
      v9 = *(_DWORD **)(*(_DWORD *)(v6 + 4) + 4 * v8); /*0x639d0c*/
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v9 + 1216))(*v9); /*0x639d13*/
      if ( (_BYTE)result ) /*0x639d1b*/
        break; /*0x639d1b*/
      if ( ++v8 >= v7 ) /*0x639d20*/
        return result; /*0x639d20*/
    }
    if ( v5 < v17 ) /*0x639d2e*/
    {
      while ( 1 ) /*0x639d36*/
      {
        v10 = v5; /*0x639d36*/
        v11 = v18[5]; /*0x639d38*/
        if ( !v11 ) /*0x639d3d*/
          break; /*0x639d3d*/
        if ( v5 >= v11 ) /*0x639d41*/
        {
          v12 = v18[37]; /*0x639d43*/
          if ( v12 < 0 ) /*0x639d4b*/
            break; /*0x639d4b*/
          v10 = v12 + (v5 - v12) % v18[36]; /*0x639d5a*/
        }
        if ( v10 < 0 || v10 >= v11 ) /*0x639d62*/
          break; /*0x639d62*/
        v13 = *(_DWORD *)(v18[2] + 4 * v10); /*0x639d67*/
LABEL_21:
        v14 = *(_DWORD *)(v13 + 16); /*0x639d6e*/
        for ( i = 0; i < v14; ++i ) /*0x639d75*/
        {
          v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * i) + 4); /*0x639d7d*/
          if ( *(_BYTE *)(v16 + 12) == 2 ) /*0x639d83*/
            *(_BYTE *)(v16 + 12) = 29; /*0x639d85*/
        }
        result = v17; /*0x639d8e*/
        if ( ++v5 >= v17 ) /*0x639d95*/
          return result; /*0x639d95*/
      }
      v13 = 0; /*0x639d6c*/
      goto LABEL_21; /*0x639d6c*/
    }
  }
  return result; /*0x639d22*/
}



// ==== 0x00639DA0  UI_Process_639DA0  this=-  sig=ida-proto ====
int sub_639DA0()
{
  wchar_t *v0; // ebx
  int v1; // edi
  _BYTE *v2; // esi

  v0 = dword_A8ECC8; /*0x639da2*/
  v1 = 0; /*0x639dae*/
  if ( (int)dword_A8ECC8 <= 0 ) /*0x639db2*/
    return -1; /*0x639e1b*/
  while ( 1 ) /*0x639db9*/
  {
    v2 = (_BYTE *)*((_DWORD *)dword_A8ECBC + v1); /*0x639db9*/
    if ( !v2 || (v2[20] & 1) == 0 ) /*0x639dca*/
      break; /*0x639dca*/
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 1212))(v2) ) /*0x639dd8*/
    {
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 44))(v2) == 2 ) /*0x639def*/
        return 0; /*0x639df8*/
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 44))(v2) == 6 ) /*0x639e03*/
        return 1; /*0x639e0f*/
      return 2; /*0x639e03*/
    }
    if ( ++v1 >= (int)v0 ) /*0x639ddd*/
      return -1; /*0x639ddd*/
  }
  return 2; /*0x639df1*/
}



// ==== 0x00639E30  Object_Read  this=-  sig=csp ====
char __fastcall sub_639E30(int *a1, _DWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD **i; // edx
  int v18; // edx
  int v19; // eax
  _DWORD **j; // ecx
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+10h] [ebp-4h]

  if ( !a1 && !a2 ) /*0x639e3d*/
    return 1; /*0x639e46*/
  v4 = 0; /*0x639e47*/
  if ( a1 ) /*0x639e4b*/
    v4 = a1[5]; /*0x639e4d*/
  v5 = 0; /*0x639e50*/
  v21 = 0; /*0x639e54*/
  if ( a2 ) /*0x639e58*/
  {
    v5 = a2[5]; /*0x639e5a*/
    v21 = v5; /*0x639e5d*/
  }
  if ( !v4 ) /*0x639e63*/
    return !v5; /*0x639e67*/
  if ( !v5 ) /*0x639e77*/
    return 0; /*0x639f1a*/
  v6 = a1[5]; /*0x639e7d*/
  v7 = v4 - 1; /*0x639e80*/
  if ( !v6 ) /*0x639e83*/
    goto LABEL_19; /*0x639e83*/
  if ( v7 >= v6 ) /*0x639e87*/
  {
    v8 = a1[37]; /*0x639e89*/
    if ( v8 < 0 ) /*0x639e91*/
      goto LABEL_19; /*0x639e91*/
    v7 = v8 + (v7 - v8) % a1[36]; /*0x639ea0*/
    v5 = v21; /*0x639ea2*/
  }
  if ( v7 >= 0 && v7 < v6 ) /*0x639eac*/
  {
    v9 = *(_DWORD *)(a1[2] + 4 * v7); /*0x639eb1*/
    goto LABEL_20; /*0x639eb4*/
  }
LABEL_19:
  v9 = 0; /*0x639eb6*/
LABEL_20:
  v10 = a2[5]; /*0x639eb8*/
  v11 = v5 - 1; /*0x639ebb*/
  if ( !v10 ) /*0x639ec0*/
    goto LABEL_27; /*0x639ec0*/
  if ( v11 >= v10 ) /*0x639ec4*/
  {
    v12 = a2[37]; /*0x639ec6*/
    if ( v12 >= 0 ) /*0x639ece*/
    {
      v11 = v12 + (v11 - v12) % a2[36]; /*0x639edd*/
      goto LABEL_24; /*0x639edd*/
    }
LABEL_27:
    v13 = 0; /*0x639eef*/
    goto LABEL_28; /*0x639eef*/
  }
LABEL_24:
  if ( v11 < 0 || v11 >= v10 ) /*0x639ee5*/
    goto LABEL_27; /*0x639ee5*/
  v13 = *(_DWORD *)(a2[2] + 4 * v11); /*0x639eea*/
LABEL_28:
  v14 = *a1; /*0x639ef1*/
  v15 = *(_DWORD *)(v9 + 16); /*0x639ef3*/
  v22 = v14; /*0x639ef8*/
  v16 = 0; /*0x639efc*/
  if ( v15 <= 0 ) /*0x639f00*/
    return 0; /*0x639f00*/
  for ( i = *(_DWORD ***)(v9 + 4); **i != *a2; ++i ) /*0x639f02*/
  {
    if ( ++v16 >= v15 ) /*0x639f11*/
      return 0; /*0x639f11*/
  }
  if ( v16 == -1 ) /*0x639f1e*/
    return 0; /*0x639f1e*/
  v18 = *(_DWORD *)(v13 + 16); /*0x639f20*/
  v19 = 0; /*0x639f23*/
  if ( v18 <= 0 ) /*0x639f27*/
    return 0; /*0x639f27*/
  for ( j = *(_DWORD ***)(v13 + 4); **j != v22; ++j ) /*0x639f29*/
  {
    if ( ++v19 >= v18 ) /*0x639f3c*/
      return 0; /*0x639f45*/
  }
  return v19 != -1; /*0x639f49*/
}



// ==== 0x00639F80  DecFactoryClassCounter  this=AbstractClass  sig=ida-proto ====
int __fastcall FactoryClass_DecCounter(unsigned int a1)
{
  int result; // eax

  if ( a1 < 0x18 )
  {
    result = dword_AC4B84[a1] - 1; /*0x639f95*/
    dword_AC4B84[a1] = result < 0 ? 0 : result;
  }
  return result; /*0x639fa3*/
}



// ==== 0x00639FD0  NetworkClass::ExecutePlanningModeCmd  this=NetworkClass  sig=csp ====
int __thiscall sub_639FD0(char *this)
{
  char v1; // al
  wchar_t *StringCSF; // eax
  wchar_t *v3; // eax

  v1 = *this; /*0x639fd0*/
  if ( *this == 9 ) /*0x639fd4*/
  {
    if ( !byte_AC4C08 ) /*0x639fdd*/
    {
      byte_AC4C08 = 1; /*0x639fe8*/
      StringCSF = GetStringCSF((wchar_t *)g_Str_MSG_PlanningModeNoDeploy, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x639ffb*/
LABEL_10:
      AddMessageListPlayerMessage(StringCSF, 480); /*0x63a07b*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a09e*/
    }
  }
  else if ( v1 == 6 ) /*0x639fff*/
  {
    if ( !byte_AC4C08 ) /*0x63a008*/
    {
      byte_AC4C08 = 1; /*0x63a01f*/
      v3 = GetStringCSF(g_Str_MSG_PlanningModeNoStop, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a026*/
      AddMessageListPlayerMessage(v3, 480); /*0x63a032*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a04f*/
    }
  }
  else if ( v1 == 7 && !byte_AC4C08 ) /*0x63a05c*/
  {
    byte_AC4C08 = 1; /*0x63a063*/
    StringCSF = GetStringCSF(g_Str_MSG_PlanningModeNoScatter, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a076*/
    goto LABEL_10; /*0x63a076*/
  }
  return PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a0c0*/
}



// ==== 0x0063A0D0  System_Get  this=-  sig=ida-proto ====
char sub_63A0D0()
{
  char result; // al
  wchar_t *StringCSF; // eax

  result = byte_AC4C08; /*0x63a0d0*/
  if ( !byte_AC4C08 ) /*0x63a0d7*/
  {
    byte_AC4C08 = 1; /*0x63a0ea*/
    StringCSF = GetStringCSF(aMsgPlanningmod_12, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a0f1*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x63a0fd*/
    return PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a119*/
  }
  return result; /*0x63a11e*/
}



// ==== 0x0063A120  UI_Create_731A50_Create_63A120  this=-  sig=ida-proto ====
int __fastcall sub_63A120(char a1, char a2)
{
  int v2; // esi
  int result; // eax
  wchar_t *v4; // ecx
  wchar_t *StringCSF; // eax

  if ( a2 ) /*0x63a123*/
    v2 = a1 == 0; /*0x63a12c*/
  else
    v2 = 2; /*0x63a130*/
  if ( a1 ) /*0x63a137*/
    result = dword_AC4BF4[v2] + 1; /*0x63a140*/
  else
    result = 1; /*0x63a143*/
  if ( dword_AC4BF4[v2] < result ) /*0x63a153*/
  {
    if ( a2 ) /*0x63a157*/
    {
      if ( a1 ) /*0x63a165*/
        v4 = (wchar_t *)aMsgPlanningmod_9; /*0x63a169*/
      else
        v4 = (wchar_t *)aMsgPlanningmod_10; /*0x63a172*/
    }
    else
    {
      v4 = aMsgPlanningmod_11; /*0x63a185*/
    }
    StringCSF = GetStringCSF(v4, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a18a*/
    result = AddMessageListPlayerMessage(StringCSF, 480); /*0x63a196*/
    ++dword_AC4BF4[v2]; /*0x63a19b*/
  }
  return result; /*0x63a1a2*/
}



// ==== 0x0063A1B0  Team_Get_63A1B0  this=-  sig=ida-proto ====
void __fastcall sub_63A1B0(int a1)
{
  wchar_t *StringCSF; // eax

  if ( dword_AC4BF4[a1] < 1 ) /*0x63a1bb*/
  {
    if ( a1 == 3 ) /*0x63a1c0*/
    {
      StringCSF = GetStringCSF(aMsgPlanningmod_7, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a1d3*/
    }
    else
    {
      if ( a1 != 4 ) /*0x63a1d8*/
      {
LABEL_7:
        ++dword_AC4BF4[a1]; /*0x63a1fc*/
        return; /*0x63a1fc*/
      }
      StringCSF = GetStringCSF(aMsgPlanningmod_8, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a1eb*/
    }
    AddMessageListPlayerMessage(StringCSF, 480); /*0x63a1f7*/
    goto LABEL_7; /*0x63a1f7*/
  }
}



// ==== 0x0063A230  PlanManager::Notify  this=PlanManager  sig=csp ====
int __thiscall PlanManager::Notify(PlanManager *this)
{
  int result; // eax
  wchar_t *StringCSF; // eax

  LOBYTE(result) = stru_AC4B30.__pad_70[104]; /*0x63a230*/
  if ( !stru_AC4B30.__pad_70[104] ) /*0x63a237*/
  {
    stru_AC4B30.__pad_70[104] = 1; /*0x63a245*/
    StringCSF = GetStringCSF((wchar_t *)this, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a24c*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x63a258*/
    return PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x63a274*/
  }
  return result; /*0x63a279*/
}



// ==== 0x0063A440  sub_63A440  this=-  sig=ida-proto ====
int __fastcall sub_63A440(int a1, int a2)
{
  int v2; // eax
  int v3; // edx
  char v5; // dl
  int v6; // eax

  v2 = *(char *)(a2 + 12); /*0x63a440*/
  v3 = a2 + 14; /*0x63a447*/
  if ( v2 == 7 || v2 == 8 || v2 == 9 ) /*0x63a457*/
    return 0; /*0x63a459*/
  v5 = *(_BYTE *)(v3 + 4); /*0x63a462*/
  if ( (v2 == 1 || v2 == 11) && (v5 == 11 || v2 == 11 && !v5) ) /*0x63a480*/
    return 0; /*0x63a482*/
  v6 = -(*(_DWORD *)(a1 + 20) != 15); /*0x63a490*/
  LOBYTE(v6) = v6 & 0xFD; /*0x63a492*/
  return v6 + 2; /*0x63a45b*/
}



// ==== 0x0063A4A0  ObjectClass::method_63A4A0  this=ObjectClass  sig=csp ====
void __thiscall sub_63A4A0(ObjectClass *this)
{
  *(_DWORD *)&stru_AC4B30.__pad_EC[116] = this; /*0x63a4a0*/
}



// ==== 0x0063A5A0  HandlePlanningModeClick  this=-  sig=csp ====
bool __stdcall HandlePlanningModeClick(int a1, int a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  _DWORD **v7; // esi
  int *ScreenPosScriptAction; // eax
  int *v9; // eax
  int *v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // eax
  wchar_t *StringCSF; // eax
  int v15; // [esp+10h] [ebp-50h]
  int v16; // [esp+14h] [ebp-4Ch]
  _DWORD v17[2]; // [esp+18h] [ebp-48h] BYREF
  int v18; // [esp+20h] [ebp-40h] BYREF
  int v19; // [esp+24h] [ebp-3Ch]
  int v20; // [esp+28h] [ebp-38h]
  int v21; // [esp+2Ch] [ebp-34h]
  int v22; // [esp+30h] [ebp-30h] BYREF
  int v23; // [esp+34h] [ebp-2Ch]
  int v24; // [esp+38h] [ebp-28h]
  int v25; // [esp+3Ch] [ebp-24h]
  _DWORD v26[4]; // [esp+40h] [ebp-20h] BYREF
  _DWORD v27[4]; // [esp+50h] [ebp-10h] BYREF

  if ( !byte_AC4CF4 ) /*0x63a5ae*/
    return 0; /*0x63a5b9*/
  v3 = dword_AC4C38; /*0x63a5c2*/
  v4 = a2; /*0x63a5c8*/
  v5 = a1; /*0x63a5cc*/
  v6 = 0; /*0x63a5d0*/
  v16 = dword_AC4C38; /*0x63a5d2*/
  if ( !dword_AC4CCC ) /*0x63a5d8*/
    goto LABEL_4; /*0x63a5d8*/
  v10 = (int *)Render_Render_6345A0(v26); /*0x63a6a2*/
  v18 = *v10; /*0x63a6a9*/
  v19 = v10[1]; /*0x63a6b0*/
  v20 = v10[2]; /*0x63a6b7*/
  v21 = v10[3]; /*0x63a6c2*/
  ShrinkRect(&v18, 4); /*0x63a6cb*/
  v23 = v19; /*0x63a6dc*/
  v22 = v18; /*0x63a6e4*/
  v24 = v20; /*0x63a6f1*/
  v25 = v21; /*0x63a6f5*/
  if ( (unsigned __int8)HandlePlanningModeClick_Handle(&a1) ) /*0x63a6f9*/
  {
    a1 = dword_AC4CCC; /*0x63a70d*/
    if ( dword_AC4CCC && dword_AC4CCC != v3 ) /*0x63a719*/
    {
      Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x63a727*/
      dword_AC4C38 = a1; /*0x63a730*/
      return v16 || a1; /*0x63a757*/
    }
  }
  else
  {
LABEL_4:
    a1 = 0; /*0x63a5de*/
  }
  v15 = dword_AC4B40; /*0x63a5e9*/
  if ( dword_AC4B40 <= 0 ) /*0x63a5ed*/
    goto LABEL_21; /*0x63a5ed*/
  while ( 1 ) /*0x63a5fd*/
  {
    v17[0] = v5; /*0x63a5fd*/
    v7 = (_DWORD **)*((_DWORD *)dword_AC4B34 + v6); /*0x63a601*/
    v17[1] = v4; /*0x63a604*/
    ScreenPosScriptAction = ScriptAction::GetScreenPos(v7, &v18); /*0x63a60a*/
    v9 = ComputeBounds(v27, 8, *ScreenPosScriptAction, ScreenPosScriptAction[1]); /*0x63a61f*/
    v22 = *v9; /*0x63a626*/
    v23 = v9[1]; /*0x63a62d*/
    v24 = v9[2]; /*0x63a634*/
    v25 = v9[3]; /*0x63a63f*/
    ShrinkRect(&v22, 4); /*0x63a648*/
    v26[1] = v23; /*0x63a659*/
    v26[0] = v22; /*0x63a661*/
    v26[2] = v24; /*0x63a66e*/
    v26[3] = v25; /*0x63a672*/
    if ( (unsigned __int8)HandlePlanningModeClick_Handle(v17) ) /*0x63a676*/
      break; /*0x63a676*/
    if ( ++v6 >= v15 ) /*0x63a68a*/
      goto LABEL_21; /*0x63a68a*/
  }
  if ( !v7 ) /*0x63a75c*/
  {
LABEL_21:
    v12 = UI_Process_639DA0(); /*0x63a7c4*/
    if ( v12 == -1 ) /*0x63a7cc*/
      return v16 || a1; /*0x63a7cc*/
    if ( v12 ) /*0x63a7d4*/
    {
      if ( v12 == 1 ) /*0x63a803*/
      {
        if ( !byte_AC4C08 ) /*0x63a80c*/
        {
          byte_AC4C08 = 1; /*0x63a823*/
          StringCSF = GetStringCSF(aMsgPlanningmod_5, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a82a*/
          AddMessageListPlayerMessage(StringCSF, 480); /*0x63a836*/
          PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a852*/
          return 1; /*0x63a860*/
        }
        return 1; /*0x63a80c*/
      }
      if ( v12 == 2 && !byte_AC4C08 ) /*0x63a86f*/
      {
        byte_AC4C08 = 1; /*0x63a876*/
        v13 = GetStringCSF(aMsgPlanningmod_6, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a889*/
        goto LABEL_31; /*0x63a889*/
      }
    }
    else if ( !byte_AC4C08 ) /*0x63a7dd*/
    {
      byte_AC4C08 = 1; /*0x63a7e8*/
      v13 = GetStringCSF((wchar_t *)aMsgPlanningmod_4, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a7fb*/
LABEL_31:
      AddMessageListPlayerMessage(v13, 480); /*0x63a88e*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a8b2*/
    }
    return 1; /*0x63a8c0*/
  }
  if ( BuildingClass::CheckBuildability(v7) == -1 ) /*0x63a768*/
    return v16 || a1; /*0x63a768*/
  if ( !byte_AC4C08 ) /*0x63a771*/
  {
    byte_AC4C08 = 1; /*0x63a784*/
    v11 = GetStringCSF(aMsgPlanningmod_3, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a78b*/
    AddMessageListPlayerMessage(v11, 480); /*0x63a797*/
    PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a7b3*/
  }
  return 1; /*0x63a5b0*/
}



// ==== 0x0063A8E0  ScriptAction::HitTest  this=ScriptAction  sig=csp ====
bool __stdcall ScriptAction::HitTest(int a1, int a2)
{
  int v3; // esi
  int v4; // edi
  void *Array_field_0x10; // ebp
  ScriptAction *v6; // esi
  int *ScreenPos; // eax
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  ObjectClass *v11; // [esp+0h] [ebp-4Ch]
  int v12; // [esp+10h] [ebp-3Ch] BYREF
  int v13; // [esp+18h] [ebp-34h]
  int v14; // [esp+1Ch] [ebp-30h] BYREF
  int v15; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  int v18; // [esp+2Ch] [ebp-20h] BYREF
  int v19; // [esp+30h] [ebp-1Ch]
  int v20; // [esp+34h] [ebp-18h]
  int v21; // [esp+38h] [ebp-14h]
  _DWORD v22[4]; // [esp+3Ch] [ebp-10h] BYREF

  if ( !stru_AC4B30.__pad_EC[216] ) /*0x63a8ee*/
    return 0; /*0x63a8f9*/
  v3 = *(_DWORD *)&stru_AC4B30.__pad_EC[28]; /*0x63a902*/
  v4 = 0; /*0x63a90c*/
  v13 = *(_DWORD *)&stru_AC4B30.__pad_EC[28]; /*0x63a910*/
  if ( !*(_DWORD *)&stru_AC4B30.__pad_EC[176] /*0x63aa32*/
    || (v9 = ScriptAction::GetScreenPos(*(ScriptAction **)&stru_AC4B30.__pad_EC[176], &v12),
        v10 = ComputeBounds(&v18, 8, *v9, v9[1]),
        v14 = *v10,
        v15 = v10[1],
        v16 = v10[2],
        v17 = v10[3],
        ShrinkRect(&v14, 4),
        a1 < v14)
    || a1 >= v14 + v16
    || a2 < v15
    || a2 >= v15 + v17 )
  {
    v12 = 0; /*0x63a91a*/
LABEL_5:
    Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x63a91e*/
    if ( (int)stru_AC4B30.Array_field_0x10 > 0 ) /*0x63a926*/
    {
      while ( 1 ) /*0x63a936*/
      {
        v6 = (ScriptAction *)*((_DWORD *)stru_AC4B30.Array_field_0x4 + v4); /*0x63a936*/
        ScreenPos = ScriptAction::GetScreenPos(v6, &v14); /*0x63a93b*/
        v8 = ComputeBounds(v22, 8, *ScreenPos, ScreenPos[1]); /*0x63a950*/
        v18 = *v8; /*0x63a957*/
        v19 = v8[1]; /*0x63a95e*/
        v20 = v8[2]; /*0x63a965*/
        v21 = v8[3]; /*0x63a970*/
        ShrinkRect(&v18, 4); /*0x63a979*/
        if ( a1 >= v18 && a1 < v18 + v20 && a2 >= v19 && a2 < v19 + v21 ) /*0x63a9a4*/
          break; /*0x63a9a4*/
        if ( ++v4 >= (int)Array_field_0x10 ) /*0x63a9ad*/
          goto LABEL_22; /*0x63a9ad*/
      }
      if ( v6 && BuildingClass::CheckBuildability((BuildingClass *)v6) != -1 ) /*0x63aa73*/
        return 1; /*0x63aa7e*/
LABEL_22:
      v3 = v13; /*0x63aa81*/
    }
    *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x63aa87*/
    return v3 || v12; /*0x63aa87*/
  }
  v12 = *(_DWORD *)&stru_AC4B30.__pad_EC[176]; /*0x63aa3f*/
  if ( !*(_DWORD *)&stru_AC4B30.__pad_EC[176] || *(_DWORD *)&stru_AC4B30.__pad_EC[176] != v3 ) /*0x63aa4b*/
    goto LABEL_5; /*0x63aa4b*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 1); /*0x63aa59*/
  ExportSelectionAsScriptAction(v11); /*0x63aa5e*/
  return v3 || v12; /*0x63a8f0*/
}



// ==== 0x0063AAC0  UI_Handle  this=-  sig=csp ====
char __stdcall sub_63AAC0(int a1, int a2)
{
  char result; // al

  dword_AC4C68 = -1; /*0x63aac6*/
  result = byte_AC4CF4; /*0x63aacb*/
  byte_AC4CB0 = 1; /*0x63aad2*/
  dword_AC4C6C = -1; /*0x63aad9*/
  if ( byte_AC4CF4 ) /*0x63aadf*/
  {
    result = (char)dword_A8ECC8; /*0x63aae1*/
    if ( (int)dword_A8ECC8 <= 0 ) /*0x63aae8*/
    {
      dword_AC4C68 = a1; /*0x63aaf2*/
      dword_AC4C6C = a2; /*0x63aaf7*/
      return a1; /*0x63aaea*/
    }
  }
  return result; /*0x63aafd*/
}



// ==== 0x0063AB00  UI_Handle_63AB00  this=-  sig=csp ====
char __stdcall sub_63AB00(int a1, int a2)
{
  int v2; // eax

  LOBYTE(v2) = byte_AC4CF4; /*0x63ab00*/
  byte_AC4CB0 = 0; /*0x63ab09*/
  if ( byte_AC4CF4 ) /*0x63ab0f*/
  {
    if ( (int)dword_A8ECC8 <= 0 ) /*0x63ab17*/
    {
      if ( dword_AC4BF0 ) /*0x63ab1f*/
      {
        v2 = abs32(a1 - dword_AC4C68); /*0x63ab30*/
        if ( v2 <= 3 ) /*0x63ab35*/
        {
          v2 = abs32(a2 - dword_AC4C6C); /*0x63ab46*/
          if ( v2 <= 3 ) /*0x63ab4b*/
            dword_AC4BF0 = 0; /*0x63ab4d*/
        }
      }
    }
  }
  return v2; /*0x63ab53*/
}



// ==== 0x0063AB60  Map_Process_63AB60  this=-  sig=csp ====
char __stdcall sub_63AB60(int a1, int a2)
{
  int v3; // ebx
  _DWORD *Coords; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-34h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD v10[4]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v11[4]; // [esp+28h] [ebp-10h] BYREF

  if ( !byte_AC4CF4 ) /*0x63ab6b*/
    return 0; /*0x63ab73*/
  if ( byte_AC4CB0 ) /*0x63ab7d*/
    return 0; /*0x63ab85*/
  v3 = dword_AC4C38; /*0x63ab8e*/
  if ( !dword_AC4CCC ) /*0x63ab98*/
    goto LABEL_11; /*0x63ab98*/
  Coords = ScriptAction::GetCoords((_DWORD **)dword_AC4CCC, v10); /*0x63aba3*/
  v9[0] = *Coords; /*0x63abaa*/
  v9[1] = Coords[1]; /*0x63abb5*/
  v9[2] = Coords[2]; /*0x63abc0*/
  v5 = ToCoordPixel(&v8, v9); /*0x63abc4*/
  Rect::Set(v11, *v5 - 4, v5[1] - 4, 8, 8); /*0x63abe0*/
  v10[0] = v11[0]; /*0x63abf9*/
  v6 = v11[1] - 4; /*0x63ac00*/
  if ( a1 < v11[0] - 4 ) /*0x63ac0b*/
    goto LABEL_11; /*0x63ac0b*/
  if ( a1 < v11[2] + 8 + v11[0] - 4 && a2 >= v6 && a2 < v11[3] + 8 + v6 ) /*0x63ac1f*/
    v7 = dword_AC4CCC; /*0x63ac21*/
  else
LABEL_11:
    v7 = 0; /*0x63ac28*/
  if ( !v3 ) /*0x63ac2e*/
  {
    if ( !v7 ) /*0x63ac32*/
      return 0; /*0x63ac3a*/
    goto LABEL_17; /*0x63ac32*/
  }
  if ( v7 == v3 ) /*0x63ac3f*/
  {
LABEL_17:
    Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x63ac45*/
    return 1; /*0x63ac4e*/
  }
  Mission::SetAndCall((int *)&dword_87F7E8, 0, 0); /*0x63ac43*/
  return 1; /*0x63ab6f*/
}



// ==== 0x0063AC60  UI_Delete_Delete_63AC60  this=-  sig=ida-proto ====
int sub_63AC60()
{
  return dword_AC4BF0; /*0x63ac65*/
}



// ==== 0x0063AC70  BuildingClass::CheckBuildability  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckBuildability(BuildingClass *this)
{
  int v1; // ebp
  int v2; // edi
  int v4; // ecx
  int Type; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  BuildingClass *v11; // [esp+14h] [ebp-4h] BYREF

  v1 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x63ac75*/
  v2 = 0; /*0x63ac7d*/
  if ( *(int *)&stru_A8EB00.?[228] <= 0 ) /*0x63ac83*/
    return -1; /*0x63ad1b*/
  while ( 1 ) /*0x63ac8e*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v2); /*0x63ac8e*/
    if ( v4 ) /*0x63ac93*/
    {
      if ( (*(_BYTE *)(v4 + 20) & 1) != 0 ) /*0x63ac9f*/
      {
        Type = BuildingClass::GetType((BuildingClass *)v4); /*0x63aca1*/
        v6 = Type; /*0x63aca6*/
        if ( Type ) /*0x63acaa*/
        {
          if ( *(int *)(Type + 148) >= 0 ) /*0x63acb4*/
            return 1; /*0x63acf3*/
          v7 = *(_DWORD *)(Type + 4); /*0x63acb8*/
          v11 = this; /*0x63acc2*/
          v8 = (*(int (__thiscall **)(int, BuildingClass **))(v7 + 16))(v6 + 4, &v11); /*0x63acc7*/
          if ( v8 == -1 ) /*0x63accd*/
            return 5; /*0x63ad00*/
          v9 = *(_DWORD *)(v6 + 20); /*0x63accf*/
          if ( v8 == v9 - 1 ) /*0x63acd7*/
            return 2; /*0x63ad0d*/
          if ( v8 == v9 - 2 ) /*0x63acde*/
            break; /*0x63acde*/
        }
      }
    }
    if ( ++v2 >= v1 ) /*0x63ace3*/
      return -1; /*0x63ace3*/
  }
  return 3; /*0x63ace7*/
}



// ==== 0x0063AD30  ObjectClass::method_63AD30  this=ObjectClass  sig=csp ====
void __thiscall sub_63AD30(ObjectClass *this)
{
  *(_DWORD *)&stru_AC4B30.__pad_EC[28] = this; /*0x63ad30*/
}



// ==== 0x0063AD40  sub_63AD40  this=-  sig=ida-proto ====
int sub_63AD40()
{
  return dword_AC4C38; /*0x63ad45*/
}



// ==== 0x0063AD50  ObjectClass::ExportSelectionAsScriptAction  this=ObjectClass  sig=csp ====
int ExportSelectionAsScriptAction(ObjectClass *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  int Type; // eax
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // ebx
  int m_8; // edx
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  _DWORD *v16; // ebx
  _DWORD *_63B050; // eax
  _BYTE *WaypointCoords; // eax
  int v19; // edx
  _BYTE *v20; // eax
  wchar_t *StringCSF; // eax
  int result; // eax
  _BYTE v23[108]; // [esp-70h] [ebp-204h] BYREF
  int v24; // [esp-4h] [ebp-198h]
  _VectorClass_PAVTechnoClass v25; // [esp+10h] [ebp-184h] BYREF
  int v26; // [esp+24h] [ebp-170h]
  int v27; // [esp+28h] [ebp-16Ch]
  _BYTE v29[243]; // [esp+30h] [ebp-164h] BYREF
  int v30; // [esp+124h] [ebp-70h] BYREF

  v1 = *(_DWORD *)&stru_AC4B30.__pad_EC[28]; /*0x63ad56*/
  *(_DWORD *)&v29[8] = *(_DWORD *)&stru_AC4B30.__pad_EC[28]; /*0x63ad67*/
  *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x63ad6b*/
  *(_DWORD *)v29 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x63ad75*/
  if ( *(int *)&stru_A8EB00.?[228] <= 0 ) /*0x63ad79*/
  {
    *(_DWORD *)&stru_AC4B30.__pad_70[80] = v1; /*0x63b02f*/
    Team_Get_63A1B0(4); /*0x63b034*/
    return result; /*0x63b034*/
  }
  EventClass::resetEvent((EventClass *)&v25, 0, 0); /*0x63ad87*/
  v2 = 0; /*0x63ad8e*/
  *(_DWORD *)v25.__pad_0 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x63ad92*/
  v26 = 10; /*0x63ad9a*/
  *(_DWORD *)v25.__tail_10 = 0; /*0x63ada2*/
  v27 = 0; /*0x63ada6*/
  do /*0x63af15*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v2); /*0x63adb6*/
    if ( v3 ) /*0x63adbb*/
    {
      if ( *(_BYTE *)(v3 + 20) & 1 ) /*0x63adc7*/
      {
        Type = BuildingClass::GetType((BuildingClass *)v3); /*0x63add3*/
        if ( Type ) /*0x63adda*/
        {
          v5 = *(_DWORD *)(Type + 20) - 1; /*0x63ade3*/
          if ( v5 >= 0 ) /*0x63ade4*/
          {
            v6 = *(_DWORD *)(*(_DWORD *)(Type + 8) + 4 * v5); /*0x63ade9*/
            if ( v6 ) /*0x63adee*/
            {
              v7 = *(_DWORD *)(v6 + 16); /*0x63ae39*/
              v8 = 0; /*0x63ae3c*/
              if ( v7 <= 0 ) /*0x63ae40*/
                goto LABEL_37; /*0x63ae40*/
              m_8 = v25.m_8; /*0x63ae46*/
              while ( 2 ) /*0x63ae4a*/
              {
                v10 = 0; /*0x63ae4a*/
                v11 = **(_DWORD **)(*(_DWORD *)(v6 + 4) + 4 * v8); /*0x63ae52*/
                if ( *(int *)v25.__tail_10 <= 0 ) /*0x63ae5a*/
                  goto LABEL_22; /*0x63ae5a*/
                v12 = *(_DWORD **)&v25.m_1[3]; /*0x63ae5c*/
                while ( *v12 != v11 ) /*0x63ae62*/
                {
                  ++v10; /*0x63ae64*/
                  ++v12; /*0x63ae65*/
                  if ( v10 >= *(int *)v25.__tail_10 ) /*0x63ae6c*/
                    goto LABEL_22; /*0x63ae6c*/
                }
                if ( v10 == -1 ) /*0x63ae73*/
                {
LABEL_22:
                  if ( *(int *)v25.__tail_10 < m_8 ) /*0x63ae79*/
                    goto LABEL_27; /*0x63ae79*/
                  if ( (BYTE1(v25.m_C) || !m_8) && v26 > 0 ) /*0x63ae8d*/
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVTechnoClass *, int, _DWORD))(*(_DWORD *)v25.__pad_0 + 8))( /*0x63ae9c*/
                           &v25,
                           v26 + m_8,
                           0) )
                    {
LABEL_27:
                      v13 = (*(_DWORD *)v25.__tail_10)++; /*0x63aea3*/
                      *(_DWORD *)(*(_DWORD *)&v25.m_1[3] + 4 * v13) = v11; /*0x63aeb2*/
                    }
                    m_8 = v25.m_8; /*0x63aeb5*/
                  }
                }
                if ( ++v8 >= v7 ) /*0x63aebc*/
                  goto LABEL_37; /*0x63aebc*/
                continue; /*0x63aebc*/
              }
            }
          }
          if ( *(int *)v25.__tail_10 < v25.m_8 /*0x63ae29*/
            || (BYTE1(v25.m_C) || !v25.m_8)
            && v26 > 0
            && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVTechnoClass *, int, _DWORD))(*(_DWORD *)v25.__pad_0 + 8))(
                 &v25,
                 v26 + v25.m_8,
                 0) )
          {
LABEL_36:
            v14 = (*(_DWORD *)v25.__tail_10)++; /*0x63aef4*/
            *(_DWORD *)(*(_DWORD *)&v25.m_1[3] + 4 * v14) = v3; /*0x63af03*/
          }
        }
        else if ( *(int *)v25.__tail_10 < v25.m_8 /*0x63aeed*/
               || (BYTE1(v25.m_C) || !v25.m_8)
               && v26 > 0
               && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVTechnoClass *, int, _DWORD))(*(_DWORD *)v25.__pad_0
                                                                                                + 8))(
                    &v25,
                    v26 + v25.m_8,
                    0) )
        {
          goto LABEL_36; /*0x63aef2*/
        }
      }
    }
LABEL_37:
    v2 = ++v27; /*0x63af06*/
  }
  while ( v27 < *(int *)v29 ); /*0x63af15*/
  v15 = 0; /*0x63af1f*/
  v27 = *(_DWORD *)v25.__tail_10; /*0x63af21*/
  if ( *(int *)v25.__tail_10 > 0 ) /*0x63af27*/
  {
    do /*0x63afd3*/
    {
      v24 = 0; /*0x63af3c*/
      v16 = *(_DWORD **)(*(_DWORD *)&v25.m_1[3] + 4 * v15); /*0x63af3e*/
      qmemcpy(&v29[132], (const void *)Team_Helper_6342E0(*(ObjectClass **)&v29[8], (int)&v30, 0), 0x6Fu); /*0x63af55*/
      _63B050 = Team_Load_63B050((ObjectClass *)&v29[132]); /*0x63af61*/
      if ( _63B050 ) /*0x63af68*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v29, _63B050); /*0x63af6f*/
        v19 = *(_DWORD *)WaypointCoords; /*0x63af74*/
        LOBYTE(WaypointCoords) = WaypointCoords[4]; /*0x63af7b*/
        *(_DWORD *)&v23[104] = v19; /*0x63af7f*/
        LOBYTE(v24) = (_BYTE)WaypointCoords; /*0x63af81*/
        v20 = ScriptAction::GetWaypointCoords((ScriptAction *)&v29[12], v16); /*0x63af88*/
        ScenarioClass::SetEvent( /*0x63afac*/
          &v29[20],
          (int)dword_A83D4C->Object_field_0x30,
          42,
          *(_DWORD *)v20,
          v20[4],
          *(int *)&v23[104],
          v24);
        qmemcpy(v23, &v29[20], sizeof(v23)); /*0x63afc2*/
        LOWORD(v24) = *(_WORD *)&v29[128]; /*0x63afc4*/
        BYTE2(v24) = v29[130]; /*0x63afc6*/
        Network::RecordEvent( /*0x63afc7*/
          *(__int64 *)v23,
          *(int *)&v23[8],
          *(int *)&v23[12],
          *(int *)&v23[16],
          *(int *)&v23[20],
          *(int *)&v23[24],
          *(int *)&v23[28],
          *(int *)&v23[32],
          *(int *)&v23[36],
          *(int *)&v23[40],
          *(int *)&v23[44],
          *(int *)&v23[48],
          *(int *)&v23[52],
          *(int *)&v23[56],
          *(int *)&v23[60],
          *(int *)&v23[64],
          *(int *)&v23[68],
          *(int *)&v23[72],
          *(int *)&v23[76],
          *(int *)&v23[80],
          *(int *)&v23[84],
          *(int *)&v23[88],
          *(int *)&v23[92],
          *(int *)&v23[96],
          *(int *)&v23[100],
          *(int *)&v23[104],
          v24);
      }
      ++v15; /*0x63afd0*/
    }
    while ( v15 < v27 ); /*0x63afd3*/
    if ( v27 > 0 && *(int *)&stru_AC4B30.__pad_70[96] < 1 ) /*0x63afe4*/
    {
      StringCSF = GetStringCSF(aMsgPlanningmod_7, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63aff7*/
      AddMessageListPlayerMessage(StringCSF, 480); /*0x63b003*/
      ++*(_DWORD *)&stru_AC4B30.__pad_70[96]; /*0x63b008*/
    }
  }
  *(_DWORD *)v25.__pad_0 = &VectorClass<TechnoClass *>::`vftable'; /*0x63b012*/
  VectorClass_Techno::ddtor(&v25); /*0x63b01a*/
  return result; /*0x63b01f*/
}



// ==== 0x0063B050  ObjectClass::Team_Load_63B050  this=ObjectClass  sig=csp ====
void *__thiscall Team_Load_63B050(ObjectClass *this)
{
  void *result; // eax

  result = 0; /*0x63b053*/
  if ( BYTE2(this->?) ) /*0x63b050*/
    return BuildingLoadQueue::GetNext((BuildingLoadQueue *)((char *)&this->? + 2)); /*0x63b05c*/
  if ( LOBYTE(this->?) ) /*0x63b061*/
    return BuildingLoadQueue::GetNext((BuildingLoadQueue *)&this->?); /*0x63b06b*/
  if ( HIBYTE(this->?) ) /*0x63b070*/
    return BuildingLoadQueue::GetNext((BuildingLoadQueue *)((char *)&this->? + 3)); /*0x63b07a*/
  return result; /*0x63b07f*/
}



// ==== 0x0063B080  ObjectClass::method_63B080  this=ObjectClass  sig=csp ====
void __thiscall sub_63B080(ObjectClass *this)
{
  *(_DWORD *)&stru_AC4B30.__pad_70[80] = this; /*0x63b080*/
}



// ==== 0x0063B090  sub_63B090  this=-  sig=ida-proto ====
void sub_63B090()
{
  dword_AC4BF0 = 0; /*0x63b090*/
}



// ==== 0x0063B0A0  ObjectClass::Render_Render_63B0A0  this=ObjectClass  sig=csp ====
void Render_Render_63B0A0(ObjectClass *this)
{
  void *Array_field_0x10; // ebp
  int v2; // esi
  int v3; // edi
  int v4; // ebp
  int i; // esi
  int v6; // edi

  *(_DWORD *)&stru_AC4B30.__pad_EC[12] = 0; /*0x63b0ad*/
  if ( *(_DWORD *)stru_AC4B30.__pad_EC && stru_AC4B30.__pad_EC[9] ) /*0x63b0bb*/
  {
    __3_YAXPAX_Z(*(void **)stru_AC4B30.__pad_EC); /*0x63b0be*/
    *(_DWORD *)stru_AC4B30.__pad_EC = 0; /*0x63b0c6*/
  }
  Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x63b0cc*/
  v2 = 0; /*0x63b0d2*/
  stru_AC4B30.__pad_EC[9] = 0; /*0x63b0d6*/
  for ( *(_DWORD *)&stru_AC4B30.__pad_EC[4] = 0; v2 < (int)Array_field_0x10; ++v2 ) /*0x63b0e2*/
  {
    v3 = *((_DWORD *)stru_AC4B30.Array_field_0x4 + v2); /*0x63b0e9*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v3 + 4) + 540), (#375 *)dword_A83D4C) ) /*0x63b100*/
      RenderScenarioActionLines((ObjectClass *)v3); /*0x63b10b*/
  }
  v4 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x63b115*/
  for ( i = 0; i < v4; ++i ) /*0x63b11f*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x63b12d*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v6 + 540), (#375 *)dword_A83D4C) ) /*0x63b136*/
      ScriptAction::ProcessIdleAction((ScriptAction *)v6); /*0x63b141*/
  }
}



// ==== 0x0063B150  ObjectClass::RenderBuilding  this=ObjectClass  sig=csp ====
void RenderBuilding(ObjectClass *this)
{
  void *Array_field_0x10; // ebp
  int i; // esi
  int v3; // edi
  int j; // ebx
  int v5; // esi
  int DrawColor; // edi
  int *Viewport; // eax
  _DWORD *Coords; // eax
  int *v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int k; // esi
  int v15; // edi
  int v16; // [esp+10h] [ebp-60h] BYREF
  _DWORD v17[3]; // [esp+18h] [ebp-58h] BYREF
  _DWORD v18[3]; // [esp+24h] [ebp-4Ch] BYREF
  int v19; // [esp+30h] [ebp-40h] BYREF
  int v20; // [esp+34h] [ebp-3Ch]
  int v21; // [esp+38h] [ebp-38h]
  int v22; // [esp+3Ch] [ebp-34h]
  _DWORD v23[4]; // [esp+40h] [ebp-30h] BYREF
  int v24[4]; // [esp+50h] [ebp-20h] BYREF
  _DWORD v25[4]; // [esp+60h] [ebp-10h] BYREF

  Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x63b155*/
  for ( i = 0; i < (int)Array_field_0x10; ++i ) /*0x63b161*/
  {
    v3 = *((_DWORD *)stru_AC4B30.Array_field_0x4 + i); /*0x63b168*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v3 + 4) + 540), (#375 *)dword_A83D4C) ) /*0x63b17f*/
      RenderScenarioActionLines2((ObjectClass *)v3); /*0x63b18a*/
  }
  for ( j = 0; j < (int)Array_field_0x10; ++j ) /*0x63b198*/
  {
    v5 = *((_DWORD *)stru_AC4B30.Array_field_0x4 + j); /*0x63b1a3*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v5 + 4) + 540), (#375 *)dword_A83D4C) ) /*0x63b1ba*/
    {
      DrawColor = BuildingClass::GetDrawColor(v5); /*0x63b1d2*/
      Viewport = Display::GetViewport(v24); /*0x63b1d4*/
      v23[0] = *Viewport; /*0x63b1db*/
      v23[1] = Viewport[1]; /*0x63b1e2*/
      v23[2] = Viewport[2]; /*0x63b1e9*/
      v23[3] = Viewport[3]; /*0x63b1f7*/
      Coords = ScriptAction::GetCoords((ScriptAction *)v5, v18); /*0x63b1fb*/
      v17[0] = *Coords; /*0x63b202*/
      v17[1] = Coords[1]; /*0x63b20d*/
      v17[2] = Coords[2]; /*0x63b218*/
      v9 = ToCoordPixel(&v16, v17); /*0x63b21c*/
      v10 = ComputeBounds(v25, 8, *v9, v9[1]); /*0x63b236*/
      v19 = *v10; /*0x63b23a*/
      v20 = v10[1]; /*0x63b241*/
      v11 = v10[2]; /*0x63b245*/
      v21 = v11; /*0x63b248*/
      v12 = v10[3]; /*0x63b24f*/
      if ( v11 > -2 && v12 > -2 ) /*0x63b257*/
      {
        ++v19; /*0x63b27d*/
        ++v20; /*0x63b281*/
        v21 = v11 - 2; /*0x63b285*/
        v22 = v12 - 2; /*0x63b289*/
      }
      else
      {
        v19 = 0; /*0x63b25b*/
        v20 = 0; /*0x63b25f*/
        v21 = 0; /*0x63b263*/
        v22 = 0; /*0x63b267*/
      }
      (*(void (__thiscall **)(AudioStream *, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63b2a0*/
        DSurface_Composite,
        v23,
        &v19,
        DrawColor);
    }
  }
  v13 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x63b2ac*/
  for ( k = 0; k < v13; ++k ) /*0x63b2b6*/
  {
    v15 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * k); /*0x63b2c5*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v15 + 540), (#375 *)dword_A83D4C) ) /*0x63b2ce*/
      BuildingClass::DrawActionLines((BuildingClass *)v15); /*0x63b2d9*/
  }
}



// ==== 0x0063B2F0  ObjectClass::RenderScriptActionHighlight  this=ObjectClass  sig=csp ====
int RenderScriptActionHighlight(ObjectClass *this)
{
  ScriptAction *v1; // edi
  int result; // eax
  int v3; // esi
  int *Viewport; // eax
  int *ScreenPos; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // edi
  ObjectClass *v11; // edi
  int *v12; // eax
  int *v13; // eax
  int v14; // edi
  int v15; // [esp+10h] [ebp-50h] BYREF
  int v16; // [esp+14h] [ebp-4Ch]
  int v17; // [esp+18h] [ebp-48h]
  int v18; // [esp+1Ch] [ebp-44h]
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23; // [esp+30h] [ebp-30h] BYREF
  int v24; // [esp+34h] [ebp-2Ch]
  int v25; // [esp+38h] [ebp-28h]
  int v26; // [esp+3Ch] [ebp-24h]
  int v27[4]; // [esp+40h] [ebp-20h] BYREF
  char v28[16]; // [esp+50h] [ebp-10h] BYREF

  v1 = *(ScriptAction **)&stru_AC4B30.__pad_EC[176]; /*0x63b31c*/
  result = LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red; /*0x63b34b*/
  v3 = result /*0x63b34d*/
     | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
     | (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue);
  if ( *(_DWORD *)&stru_AC4B30.__pad_EC[176] ) /*0x63b351*/
  {
    Viewport = Display::GetViewport(v27); /*0x63b35b*/
    v23 = *Viewport; /*0x63b362*/
    v24 = Viewport[1]; /*0x63b369*/
    v25 = Viewport[2]; /*0x63b370*/
    v26 = Viewport[3]; /*0x63b37e*/
    ScreenPos = ScriptAction::GetScreenPos(v1, &v15); /*0x63b382*/
    v6 = ComputeBounds(v27, 8, *ScreenPos, ScreenPos[1]); /*0x63b397*/
    v7 = v6[1] - 4; /*0x63b3a6*/
    v8 = v6[2] + 8; /*0x63b3ac*/
    v9 = v6[3]; /*0x63b3af*/
    v19 = *v6 - 4; /*0x63b3b2*/
    v20 = v7; /*0x63b3b9*/
    v22 = v9 + 8; /*0x63b3bd*/
    v21 = v8; /*0x63b3c1*/
    v10 = 3; /*0x63b3c5*/
    do /*0x63b42a*/
    {
      result = (*(int (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63b3dd*/
                 DSurface_Composite,
                 &v23,
                 &v19,
                 v3);
      if ( v21 > -2 && v22 > -2 ) /*0x63b3ea*/
      {
        ++v19; /*0x63b40c*/
        ++v20; /*0x63b414*/
        result = 2; /*0x63b418*/
        v21 -= 2; /*0x63b421*/
        v22 -= 2; /*0x63b425*/
      }
      else
      {
        v19 = 0; /*0x63b3ec*/
        v20 = 0; /*0x63b3f0*/
        v21 = 0; /*0x63b3f4*/
        v22 = 0; /*0x63b3f8*/
      }
      --v10; /*0x63b429*/
    }
    while ( v10 ); /*0x63b42a*/
  }
  v11 = *(ObjectClass **)&stru_AC4B30.__pad_70[80]; /*0x63b42c*/
  if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63b434*/
  {
    v12 = Display::GetViewport(&v23); /*0x63b43e*/
    v27[0] = *v12; /*0x63b445*/
    v27[1] = v12[1]; /*0x63b44c*/
    v27[2] = v12[2]; /*0x63b453*/
    v27[3] = v12[3]; /*0x63b461*/
    v13 = Render_Render_6345A0(v11, v28); /*0x63b465*/
    v15 = *v13; /*0x63b46c*/
    v16 = v13[1]; /*0x63b473*/
    v17 = v13[2]; /*0x63b47a*/
    v18 = v13[3]; /*0x63b485*/
    ShrinkRect(&v15, 4); /*0x63b48e*/
    v23 = v15; /*0x63b49f*/
    v24 = v16; /*0x63b4a7*/
    v25 = v17; /*0x63b4ab*/
    v26 = v18; /*0x63b4b8*/
    ShrinkRect(&v23, 4); /*0x63b4bc*/
    v19 = v23; /*0x63b4cd*/
    v20 = v24; /*0x63b4d5*/
    v21 = v25; /*0x63b4d9*/
    v22 = v26; /*0x63b4dd*/
    v14 = 3; /*0x63b4e1*/
    do /*0x63b546*/
    {
      result = (*(int (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63b4f9*/
                 DSurface_Composite,
                 v27,
                 &v19,
                 v3);
      if ( v21 > -2 && v22 > -2 ) /*0x63b506*/
      {
        ++v19; /*0x63b528*/
        ++v20; /*0x63b530*/
        result = 2; /*0x63b534*/
        v21 -= 2; /*0x63b53d*/
        v22 -= 2; /*0x63b541*/
      }
      else
      {
        v19 = 0; /*0x63b508*/
        v20 = 0; /*0x63b50c*/
        v21 = 0; /*0x63b510*/
        v22 = 0; /*0x63b514*/
      }
      --v14; /*0x63b545*/
    }
    while ( v14 ); /*0x63b546*/
  }
  return result; /*0x63b548*/
}



// ==== 0x0063B550  ScriptAction::ProcessIdleAction  this=ScriptAction  sig=csp ====
char __thiscall ScriptAction::ProcessIdleAction(ScriptAction *this)
{
  ArrayClass *Type; // esi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // edi
  BuildingClass *v6; // ebx
  void *v7; // eax
  bool v8; // dl
  char *v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int Coord3D_field_0x08; // eax
  char *v13; // edi
  ArrayClass *v14; // ebp
  Coord3D *Viewport; // eax
  int *v16; // eax
  int v17; // esi
  int v18; // eax
  int *v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // edi
  int *v23; // eax
  Coord3D *v24; // eax
  int *v25; // eax
  int updated; // eax
  char v27; // al
  int v28; // edx
  int *v29; // eax
  char v30; // al
  int v31; // edi
  char *v32; // esi
  Coord2D *v33; // eax
  Coord3D *v34; // eax
  Coord2D *v35; // eax
  Coord3D *v36; // eax
  int v37; // esi
  int v38; // eax
  int *v39; // eax
  int v40; // eax
  int v41; // esi
  int v42; // edi
  Coord3D *v43; // eax
  int v44; // esi
  int v45; // esi
  ArrayClass *v46; // esi
  int *ScreenPos; // eax
  int v48; // edi
  const void *TypeEntry; // eax
  const void *v50; // esi
  int *v51; // eax
  bool v53; // [esp+2Eh] [ebp-172h]
  char v54; // [esp+2Fh] [ebp-171h]
  Coord3D v55; // [esp+30h] [ebp-170h] BYREF
  int v56; // [esp+3Ch] [ebp-164h]
  int v57; // [esp+40h] [ebp-160h] BYREF
  int v58; // [esp+44h] [ebp-15Ch]
  int v59; // [esp+48h] [ebp-158h]
  Coord3D v60; // [esp+4Ch] [ebp-154h] BYREF
  int v61; // [esp+58h] [ebp-148h] BYREF
  int v62; // [esp+5Ch] [ebp-144h]
  int v63; // [esp+68h] [ebp-138h] BYREF
  int v64; // [esp+6Ch] [ebp-134h]
  int v65; // [esp+70h] [ebp-130h]
  int v66; // [esp+74h] [ebp-12Ch]
  Coord2D v67; // [esp+78h] [ebp-128h] BYREF
  int v68; // [esp+80h] [ebp-120h]
  int Coord2D_field_0x04; // [esp+84h] [ebp-11Ch]
  ArrayClass *v70; // [esp+88h] [ebp-118h] BYREF
  char *v71; // [esp+8Ch] [ebp-114h]
  Rect v72; // [esp+94h] [ebp-10Ch] BYREF
  Rect v73; // [esp+A4h] [ebp-FCh] BYREF
  _DWORD v74[3]; // [esp+B4h] [ebp-ECh] BYREF
  _WORD v75[56]; // [esp+C0h] [ebp-E0h] BYREF
  char v76[112]; // [esp+130h] [ebp-70h] BYREF

  Type = (ArrayClass *)BuildingClass::GetType((BuildingClass *)this); /*0x63b565*/
  v3 = *(_DWORD *)this->__pad_0; /*0x63b567*/
  v70 = Type; /*0x63b56d*/
  v4 = (_DWORD *)(*(int (__thiscall **)(ScriptAction *, int *))(v3 + 88))(this, &v63); /*0x63b571*/
  v74[0] = *v4; /*0x63b576*/
  v74[1] = v4[1]; /*0x63b580*/
  v74[2] = v4[2]; /*0x63b59d*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v74, &v61); /*0x63b5a4*/
  v62 += (int)DSurface_ViewBounds.field_4; /*0x63b5c1*/
  v60.Coord3D_field_0x04 = v62; /*0x63b5c5*/
  v61 += DSurface_ViewBounds.field_0; /*0x63b5ce*/
  *(_DWORD *)v60.__pad_0 = v61; /*0x63b5d2*/
  v5 = PackRGBFromBytes((ObjectClass *)&byte_A83CD9); /*0x63b5dd*/
  if ( this ) /*0x63b5df*/
  {
    v6 = (BuildingClass *)PackRGBFromBytes(&stru_A80220); /*0x63b5f1*/
    if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63b5f5*/
    {
      if ( Array::FindValue(*(Array **)&stru_AC4B30.__pad_70[80], (int)this) != -1 ) /*0x63b600*/
        goto LABEL_7; /*0x63b600*/
    }
    else if ( this->__pad_78[11] ) /*0x63b604*/
    {
      goto LABEL_7; /*0x63b60c*/
    }
  }
  v6 = (BuildingClass *)v5; /*0x63b60e*/
LABEL_7:
  if ( Type ) /*0x63b612*/
    v7 = Type->field_14; /*0x63b618*/
  else
    v7 = 0; /*0x63b614*/
  v53 = (int)v7 > 0; /*0x63b622*/
  v8 = (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 388))(this) != 5 /*0x63b653*/
    && !BuildingClass::IsIdleWithNoCaptives((BuildingClass *)this)
    && (v53 || this->__pad_78[11]);
  v57 = 4; /*0x63b657*/
  if ( Type && (*(_DWORD *)(*(_DWORD *)Type->__pad_0 + 172) == 28 || *(_DWORD *)(*(_DWORD *)Type->__pad_0 + 180) == 28) ) /*0x63b67a*/
  {
    v9 = &Type->__pad_18[5]; /*0x63b680*/
    qmemcpy(v75, v9, 0x6Cu); /*0x63b696*/
    v9 += 108; /*0x63b696*/
    v75[54] = *(_WORD *)v9; /*0x63b698*/
    LOBYTE(v75[55]) = v9[2]; /*0x63b69e*/
    v55 = *(Coord3D *)GetScenarioClassActionCoords(&v63, v75); /*0x63b6a6*/
    v10 = Coord3D::Set(&v60, -1, -1, -1); /*0x63b6c2*/
    if ( (unsigned __int8)Coord3D::Equals(&v55, v10) && this ) /*0x63b6d7*/
    {
      v11 = (_DWORD *)(*(int (__thiscall **)(ScriptAction *, ArrayClass **))(*(_DWORD *)this->__pad_0 + 88))(this, &v70); /*0x63b6e3*/
      *(_DWORD *)v55.__pad_0 = *v11; /*0x63b6e8*/
      v55.Coord3D_field_0x04 = v11[1]; /*0x63b6ef*/
      Coord3D_field_0x08 = v11[2]; /*0x63b6f3*/
    }
    else
    {
      Coord3D_field_0x08 = v55.Coord3D_field_0x08; /*0x63b6f8*/
    }
    v68 = Coord3D_field_0x08; /*0x63b704*/
    v67 = *(Coord2D *)v55.__pad_0; /*0x63b708*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v67, &v57); /*0x63b720*/
    v13 = (char *)DSurface_ViewBounds.field_4 + v58; /*0x63b739*/
    v14 = (ArrayClass *)(DSurface_ViewBounds.field_0 + v57); /*0x63b73f*/
    v58 += (int)DSurface_ViewBounds.field_4; /*0x63b741*/
    Viewport = (Coord3D *)Display::GetViewport(&v72.X); /*0x63b745*/
    v55 = *Viewport; /*0x63b74c*/
    v56 = *(_DWORD *)Viewport[1].__pad_0; /*0x63b76f*/
    v16 = ComputeBounds(&v72, 6, v61, v62); /*0x63b778*/
    v63 = *v16; /*0x63b77f*/
    v64 = v16[1]; /*0x63b787*/
    v65 = v16[2]; /*0x63b78e*/
    v66 = v16[3]; /*0x63b79b*/
    (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63b7ab*/
                                                                             + 84))(
      DSurface_Composite,
      &v55,
      &v63,
      v6);
    v17 = -1; /*0x63b7ae*/
    do /*0x63b7cc*/
      DrawTacticalLine2D(v17++, (int)v6, v61, v62, (int)v14, (int)v13, 0); /*0x63b7c3*/
    while ( v17 <= 1 ); /*0x63b7cc*/
    if ( SLOBYTE(v75[6]) == 11 ) /*0x63b7d9*/
    {
      v18 = Memory::Alloc76(); /*0x63b7db*/
    }
    else
    {
      if ( SLOBYTE(v75[6]) != 29 ) /*0x63b7e5*/
      {
LABEL_32:
        v24 = (Coord3D *)Display::GetViewport(&v72.X); /*0x63b8ac*/
        v55 = *v24; /*0x63b8b7*/
        v56 = *(_DWORD *)v24[1].__pad_0; /*0x63b8d5*/
        v25 = ComputeBounds(&v72, 6, (int)v14, (int)v13); /*0x63b8de*/
        v63 = *v25; /*0x63b8e5*/
        v64 = v25[1]; /*0x63b8ed*/
        v65 = v25[2]; /*0x63b8f4*/
        v66 = v25[3]; /*0x63b901*/
        LOBYTE(updated) = (*(char (__thiscall **)(AudioStream *, Coord3D *, int *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63b911*/
                            DSurface_Composite,
                            &v55,
                            &v63,
                            v6);
        return updated; /*0x63b91e*/
      }
      v18 = Factory::IdleHandler(); /*0x63b7eb*/
    }
    if ( v18 != -1 ) /*0x63b7f3*/
    {
      *(_DWORD *)v60.__pad_0 = v61; /*0x63b801*/
      v70 = v14; /*0x63b813*/
      v71 = v13; /*0x63b817*/
      v60.Coord3D_field_0x04 = v62; /*0x63b81b*/
      v19 = Coord2D::Sub((Coord2D *)&v60, (int *)v55.__pad_0, &v70); /*0x63b81f*/
      Vector::TwoDMagnitudeMath(v19); /*0x63b826*/
      if ( v20 >= 37 ) /*0x63b82e*/
      {
        v21 = (int)&v70->__pad_0[*(_DWORD *)v60.__pad_0] / 2 - 10; /*0x63b857*/
        v22 = (int)&v71[v60.Coord3D_field_0x04] / 2 - 10; /*0x63b85a*/
        v23 = Display::GetViewport(&v72.X); /*0x63b85d*/
        v63 = *v23; /*0x63b864*/
        v64 = v23[1]; /*0x63b86f*/
        v65 = v23[2]; /*0x63b878*/
        v66 = v23[3]; /*0x63b886*/
        Rect::Set(&v73, v21, v22, 21, 21); /*0x63b88a*/
        (*(void (__thiscall **)(AudioStream *, int *, Rect *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63b8a5*/
                                                                              + 84))(
          DSurface_Composite,
          &v63,
          &v73,
          v6);
        v13 = (char *)v58; /*0x63b8a8*/
      }
    }
    goto LABEL_32; /*0x63b8a8*/
  }
  if ( !v8 ) /*0x63b921*/
  {
    LOBYTE(updated) = v53; /*0x63bd19*/
    if ( !v53 ) /*0x63bd1f*/
      return updated; /*0x63bd1f*/
    goto LABEL_55; /*0x63bd1f*/
  }
  v27 = (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 1196))(this); /*0x63b92c*/
  v28 = *(_DWORD *)this->__pad_0; /*0x63b932*/
  HIBYTE(v59) = v27; /*0x63b937*/
  v54 = (*(int (__thiscall **)(ScriptAction *))(v28 + 1200))(this); /*0x63b945*/
  v29 = (int *)(*(int (__thiscall **)(ScriptAction *, Coord3D *))(*(_DWORD *)this->__pad_0 + 1068))(this, &v55); /*0x63b94f*/
  v63 = *v29; /*0x63b957*/
  v64 = v29[1]; /*0x63b95e*/
  v65 = v29[2]; /*0x63b975*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v63, &v57); /*0x63b979*/
  v30 = this->__pad_78[9]; /*0x63b992*/
  v31 = DSurface_ViewBounds.field_0 + v57; /*0x63b998*/
  v32 = (char *)DSurface_ViewBounds.field_4 + v58; /*0x63b99a*/
  v57 += DSurface_ViewBounds.field_0; /*0x63b99c*/
  v58 += (int)DSurface_ViewBounds.field_4; /*0x63b9a2*/
  if ( v30 ) /*0x63b9a6*/
  {
    v33 = (Coord2D *)Display::GetViewport(&v72.X); /*0x63b9ac*/
    v67 = *v33; /*0x63b9b3*/
    v68 = *(_DWORD *)v33[1].__pad_0; /*0x63b9ca*/
    Coord2D_field_0x04 = v33[1].Coord2D_field_0x04; /*0x63b9d6*/
    v34 = (Coord3D *)ComputeBounds(&v72, 6, v31, (int)v32); /*0x63b9da*/
    v55 = *v34; /*0x63b9e1*/
    v56 = *(_DWORD *)v34[1].__pad_0; /*0x63b9fd*/
    LOBYTE(updated) = (*(char (__thiscall **)(AudioStream *, Coord2D *, Coord3D *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63ba0d*/
                        DSurface_Composite,
                        &v67,
                        &v55,
                        v6);
    return updated; /*0x63ba1a*/
  }
  v35 = (Coord2D *)Display::GetViewport(&v72.X); /*0x63ba1f*/
  v67 = *v35; /*0x63ba26*/
  v68 = *(_DWORD *)v35[1].__pad_0; /*0x63ba34*/
  Coord2D_field_0x04 = v35[1].Coord2D_field_0x04; /*0x63ba44*/
  v36 = (Coord3D *)ComputeBounds(&v72, 6, v61, v62); /*0x63ba55*/
  v55 = *v36; /*0x63ba5c*/
  v56 = *(_DWORD *)v36[1].__pad_0; /*0x63ba78*/
  (*(void (__thiscall **)(AudioStream *, Coord2D *, Coord3D *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63ba88*/
                                                                               + 84))(
    DSurface_Composite,
    &v67,
    &v55,
    v6);
  v37 = -1; /*0x63ba8b*/
  do /*0x63baad*/
    DrawTacticalLine2D(v37++, (int)v6, v61, v62, v31, v58, 0); /*0x63baa4*/
  while ( v37 <= 1 ); /*0x63baad*/
  if ( !HIBYTE(v59) || v54 ) /*0x63babd*/
  {
    if ( (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 388))(this) == 11 ) /*0x63bae8*/
    {
      v38 = Memory::Alloc76(); /*0x63baee*/
      goto LABEL_44; /*0x63baee*/
    }
  }
  else if ( (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 1204))(this) == 29 ) /*0x63bacd*/
  {
    v38 = Factory::IdleHandler(); /*0x63bad3*/
LABEL_44:
    if ( v38 != -1 ) /*0x63baf6*/
    {
      v55.Coord3D_field_0x04 = v58; /*0x63bb08*/
      *(_DWORD *)v67.__pad_0 = v61; /*0x63bb0c*/
      *(_DWORD *)v55.__pad_0 = v31; /*0x63bb1e*/
      v67.Coord2D_field_0x04 = v62; /*0x63bb22*/
      v39 = Coord2D::Sub(&v67, &v61, &v55); /*0x63bb26*/
      Vector::TwoDMagnitudeMath(v39); /*0x63bb2d*/
      if ( v40 >= 37 ) /*0x63bb35*/
      {
        v41 = (*(_DWORD *)v55.__pad_0 + *(_DWORD *)v67.__pad_0) / 2 - 10; /*0x63bb61*/
        v42 = (v67.Coord2D_field_0x04 + v55.Coord3D_field_0x04) / 2 - 10; /*0x63bb64*/
        v73 = *(Rect *)Display::GetViewport(&v61); /*0x63bb6e*/
        Rect::Set(&v72, v41, v42, 21, 21); /*0x63bba0*/
        (*(void (__thiscall **)(AudioStream *, Rect *, Rect *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63bbbb*/
                                                                               + 84))(
          DSurface_Composite,
          &v73,
          &v72,
          v6);
        v31 = v57; /*0x63bbbe*/
      }
    }
  }
  v43 = (Coord3D *)Display::GetViewport(&v72.X); /*0x63bbc2*/
  v44 = v58; /*0x63bbcd*/
  v55 = *v43; /*0x63bbd1*/
  v56 = *(_DWORD *)v43[1].__pad_0; /*0x63bbef*/
  v73 = *(Rect *)ComputeBounds(&v72, 6, v31, v58); /*0x63bbff*/
  (*(void (__thiscall **)(AudioStream *, Coord3D *, Rect *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 84))( /*0x63bc3a*/
    DSurface_Composite,
    &v55,
    &v73,
    v6);
  if ( v54 ) /*0x63bc43*/
  {
    v55 = *(Coord3D *)(*(int (__thiscall **)(ScriptAction *, Coord2D *))(*(_DWORD *)this->__pad_0 + 1208))(this, &v67); /*0x63bc5b*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v55, (int *)v60.__pad_0); /*0x63bc7d*/
    v45 = DSurface_ViewBounds.field_0 + *(_DWORD *)v60.__pad_0; /*0x63bc98*/
    v60.Coord3D_field_0x04 += (int)DSurface_ViewBounds.field_4; /*0x63bc9a*/
    DrawTacticalFillScanline( /*0x63bcad*/
      3,
      (int)v6,
      v31,
      v58,
      DSurface_ViewBounds.field_0 + *(_DWORD *)v60.__pad_0,
      v60.Coord3D_field_0x04);
    if ( (*(int (__thiscall **)(ScriptAction *))(*(_DWORD *)this->__pad_0 + 1204))(this) == 29 /*0x63bcca*/
      && Factory::IdleHandler() != -1 )
    {
      BuildingClass::DrawSelectionBlip(v6, v31, v58, v45, v60.Coord3D_field_0x04); /*0x63bcda*/
    }
    LOBYTE(updated) = DSurface::DrawMarker((DSurface *)v6, v45, v60.Coord3D_field_0x04); /*0x63bce7*/
    return updated; /*0x63bcf6*/
  }
  LOBYTE(updated) = v53; /*0x63bcf7*/
  if ( !v53 ) /*0x63bcfd*/
    return updated; /*0x63bcfd*/
  v60.Coord3D_field_0x04 = v44; /*0x63bd03*/
  Type = v70; /*0x63bd07*/
  *(_DWORD *)v60.__pad_0 = v31; /*0x63bd0b*/
  v57 = 3; /*0x63bd0f*/
LABEL_55:
  v46 = (ArrayClass *)ArrayClass::GetAt_Wrap(Type, 0); /*0x63bd25*/
  v70 = v46; /*0x63bd37*/
  ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v46, &v55); /*0x63bd3b*/
  v48 = *ScreenPos; /*0x63bd40*/
  v61 = *ScreenPos; /*0x63bd45*/
  v62 = ScreenPos[1]; /*0x63bd4c*/
  TypeEntry = (const void *)BuildingClass::GetTypeEntry((BuildingClass *)v46, (int)this); /*0x63bd50*/
  v50 = TypeEntry; /*0x63bd55*/
  if ( TypeEntry ) /*0x63bd59*/
  {
    v51 = ActionScenarioClassCoordToScreen((int *)v55.__pad_0, TypeEntry, (int)this); /*0x63bd62*/
    v61 = *v51; /*0x63bd69*/
    v48 = v61; /*0x63bd6d*/
    v62 = v51[1]; /*0x63bd72*/
  }
  DSurface::DrawMarker((DSurface *)v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04); /*0x63bd82*/
  DrawTacticalFillScanline(v57, (int)v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04, v48, v62); /*0x63bd9d*/
  if ( v50 ) /*0x63bda4*/
    DSurface::DrawMarker((DSurface *)v6, v48, v62); /*0x63bdae*/
  qmemcpy(v75, (const void *)BuildingClass::CopyTypeDataForRender((BuildingClass *)v70, (int)v76, (int)this), 0x6Fu); /*0x63bdd3*/
  updated = BuildingClass::updateAnimationState((char *)v75); /*0x63bddf*/
  if ( updated != -1 ) /*0x63bde7*/
    LOBYTE(updated) = BuildingClass::DrawSelectionBlip(v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04, v61, v62); /*0x63bdff*/
  return updated; /*0x63b914*/
}



// ==== 0x0063BE10  BuildingClass::IsIdleWithNoCaptives  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::IsIdleWithNoCaptives(BuildingClass *this)
{
  return (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 11 /*0x63be4a*/
      && (!this || (this->? & 4) == 0 || !this->Anims[18] && !this->?);
}



// ==== 0x0063BE60  BuildingClass::DrawActionLines  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::DrawActionLines(BuildingClass *this)
{
  ArrayClass *Type; // esi
  int (__thiscall **vtable0)(BuildingClass *, Coord3D *); // eax
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  void *v8; // eax
  int (__thiscall **v9)(BuildingClass *); // edx
  int v10; // edi
  int v11; // eax
  int isSelected; // ecx
  char *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int Coord3D_field_0x08; // eax
  int v17; // esi
  char *v18; // edi
  Coord3D *Viewport; // eax
  int *v20; // eax
  ObjectClass *v21; // ebp
  unsigned int v22; // eax
  Coord3D *v23; // eax
  int *v24; // eax
  char v25; // al
  int (__thiscall **v26)(BuildingClass *); // edx
  int v27; // esi
  char *v28; // edi
  Coord3D *v29; // eax
  int *v30; // eax
  Coord3D *v31; // eax
  int *v32; // eax
  unsigned int v33; // eax
  Coord3D *v34; // eax
  int *v35; // eax
  int *v36; // eax
  int v37; // ebx
  unsigned int v38; // eax
  ArrayClass *v39; // edi
  int *ScreenPos; // eax
  const void *TypeEntry; // eax
  const void *v42; // edi
  int *v43; // eax
  int v44; // esi
  ObjectClass *v45; // ebx
  int v46; // esi
  unsigned int updated; // eax
  bool v48; // [esp+23h] [ebp-165h]
  char v49; // [esp+23h] [ebp-165h]
  int v50; // [esp+24h] [ebp-164h] BYREF
  int v51; // [esp+28h] [ebp-160h]
  ObjectClass *v52; // [esp+2Ch] [ebp-15Ch]
  int v53; // [esp+30h] [ebp-158h] BYREF
  int v54; // [esp+34h] [ebp-154h]
  int v55; // [esp+38h] [ebp-150h]
  int v56; // [esp+3Ch] [ebp-14Ch]
  int v57; // [esp+40h] [ebp-148h]
  int v58; // [esp+44h] [ebp-144h] BYREF
  int v59; // [esp+48h] [ebp-140h]
  int v60; // [esp+4Ch] [ebp-13Ch]
  Coord3D v61; // [esp+54h] [ebp-134h] BYREF
  int v62; // [esp+60h] [ebp-128h]
  int v63; // [esp+64h] [ebp-124h] BYREF
  int v64; // [esp+68h] [ebp-120h]
  Coord3D v65; // [esp+74h] [ebp-114h] BYREF
  ArrayClass *v66; // [esp+84h] [ebp-104h]
  int v67; // [esp+88h] [ebp-100h] BYREF
  int Coord3D_field_0x04; // [esp+8Ch] [ebp-FCh]
  int v69; // [esp+90h] [ebp-F8h]
  ObjectClass *v70; // [esp+98h] [ebp-F0h]
  _DWORD v71[3]; // [esp+9Ch] [ebp-ECh] BYREF
  _WORD v72[56]; // [esp+A8h] [ebp-E0h] BYREF
  char v73[112]; // [esp+118h] [ebp-70h] BYREF

  Type = (ArrayClass *)BuildingClass::GetType(this); /*0x63be75*/
  vtable0 = (int (__thiscall **)(BuildingClass *, Coord3D *))this->TechnoClass; /*0x63be77*/
  v66 = Type; /*0x63be7d*/
  v4 = (_DWORD *)vtable0[22](this, &v65); /*0x63be81*/
  v71[0] = *v4; /*0x63be86*/
  v71[1] = v4[1]; /*0x63be90*/
  v71[2] = v4[2]; /*0x63bead*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v71, &v58); /*0x63beb4*/
  v5 = DSurface_ViewBounds.field_0 + v58; /*0x63becd*/
  v59 += (int)DSurface_ViewBounds.field_4; /*0x63bed3*/
  v63 = DSurface_ViewBounds.field_0 + v58; /*0x63bed7*/
  v64 = v59; /*0x63bedb*/
  v6 = *((_DWORD *)stru_A80220.? + TeamClass::GetLeaderIndex((TeamClass *)this)) + 22265; /*0x63beef*/
  LOWORD(v50) = *(_WORD *)v6; /*0x63bef7*/
  BYTE2(v50) = *(_BYTE *)(v6 + 2); /*0x63bf03*/
  v52 = (ObjectClass *)ColorLerpAndPack((HouseClass *)&v50, &byte_A83CD9, 0x50u); /*0x63bf13*/
  v7 = *((_DWORD *)stru_A80220.? + TeamClass::GetLeaderIndex((TeamClass *)this)) + 22265; /*0x63bf27*/
  LOWORD(v50) = *(_WORD *)v7; /*0x63bf30*/
  BYTE2(v50) = *(_BYTE *)(v7 + 2); /*0x63bf3d*/
  v70 = (ObjectClass *)ColorLerpAndPack((HouseClass *)&v50, (unsigned __int8 *)&stru_A80220, 0x64u); /*0x63bf4c*/
  if ( Type ) /*0x63bf53*/
    v8 = Type->field_14; /*0x63bf59*/
  else
    v8 = 0; /*0x63bf55*/
  v9 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x63bf5c*/
  HIBYTE(v51) = (int)v8 > 0; /*0x63bf63*/
  v48 = v9[97](this) != 5 && !BuildingClass::IsIdleWithNoCaptives(this) && (HIBYTE(v51) || this->?); /*0x63bf97*/
  v67 = 4; /*0x63bfb3*/
  v10 = PackRGB565(byte_A83CD9, word_A83CDA, MEMORY[0xA83CDB]); /*0x63bfc2*/
  if ( !this ) /*0x63bfc4*/
    goto LABEL_15; /*0x63bfc4*/
  v11 = PackRGBFromBytes(&stru_A80220); /*0x63bfcb*/
  v50 = v11; /*0x63bfd6*/
  if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63bfdc*/
  {
    if ( Array::FindValue(*(Array **)&stru_AC4B30.__pad_70[80], (int)this) != -1 ) /*0x63bfe7*/
      goto LABEL_16; /*0x63bfe7*/
    goto LABEL_15; /*0x63bfe7*/
  }
  isSelected = (unsigned __int8)this->?; /*0x63bff3*/
  v50 = v11; /*0x63bff9*/
  if ( !(_BYTE)isSelected ) /*0x63bfff*/
LABEL_15:
    v50 = v10; /*0x63c001*/
LABEL_16:
  if ( Type && (*(_DWORD *)(*(_DWORD *)Type->__pad_0 + 172) == 28 || *(_DWORD *)(*(_DWORD *)Type->__pad_0 + 180) == 28) ) /*0x63c022*/
  {
    v13 = &Type->__pad_18[5]; /*0x63c028*/
    qmemcpy(v72, v13, 0x6Cu); /*0x63c03e*/
    v13 += 108; /*0x63c03e*/
    v72[54] = *(_WORD *)v13; /*0x63c040*/
    LOBYTE(v72[55]) = v13[2]; /*0x63c046*/
    v65 = *(Coord3D *)GetScenarioClassActionCoords(&v63, v72); /*0x63c04e*/
    v14 = Coord3D::Set(&v61, -1, -1, -1); /*0x63c06a*/
    if ( (unsigned __int8)Coord3D::Equals(&v65, v14) && this ) /*0x63c07f*/
    {
      v15 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 22))(this, &v53); /*0x63c08b*/
      *(_DWORD *)v65.__pad_0 = *v15; /*0x63c090*/
      v65.Coord3D_field_0x04 = v15[1]; /*0x63c097*/
      Coord3D_field_0x08 = v15[2]; /*0x63c09b*/
    }
    else
    {
      Coord3D_field_0x08 = v65.Coord3D_field_0x08; /*0x63c0a0*/
    }
    v69 = Coord3D_field_0x08; /*0x63c0ac*/
    v67 = *(_DWORD *)v65.__pad_0; /*0x63c0b3*/
    Coord3D_field_0x04 = v65.Coord3D_field_0x04; /*0x63c0c7*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v67, &v63); /*0x63c0ce*/
    v17 = DSurface_ViewBounds.field_0 + v63; /*0x63c0e6*/
    v18 = (char *)DSurface_ViewBounds.field_4 + v64; /*0x63c0ec*/
    Viewport = (Coord3D *)Display::GetViewport((int *)v65.__pad_0); /*0x63c0ee*/
    v61 = *Viewport; /*0x63c0f5*/
    v62 = *(_DWORD *)Viewport[1].__pad_0; /*0x63c119*/
    v20 = ComputeBounds(&v65, 6, v5, v59); /*0x63c11d*/
    v53 = *v20; /*0x63c124*/
    v54 = v20[1]; /*0x63c12b*/
    v55 = v20[2]; /*0x63c136*/
    v56 = v20[3]; /*0x63c140*/
    ShrinkRect(&v53, -1); /*0x63c144*/
    v21 = v52; /*0x63c149*/
    (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63c160*/
      DSurface_Composite,
      &v61,
      &v53,
      v52);
    DrawTacticalLine2D(0, (int)v21, v5, v59, v17, (int)v18, 1); /*0x63c171*/
    if ( SLOBYTE(v72[6]) == 11 ) /*0x63c181*/
    {
      v22 = Memory::Alloc76(); /*0x63c183*/
    }
    else
    {
      if ( SLOBYTE(v72[6]) != 29 ) /*0x63c18d*/
      {
LABEL_29:
        v23 = (Coord3D *)Display::GetViewport((int *)v65.__pad_0); /*0x63c1ad*/
        v61 = *v23; /*0x63c1b8*/
        v62 = *(_DWORD *)v23[1].__pad_0; /*0x63c1d3*/
        v24 = ComputeBounds(&v65, 6, v17, (int)v18); /*0x63c1dc*/
        v53 = *v24; /*0x63c1e3*/
        v54 = v24[1]; /*0x63c1ea*/
        v55 = v24[2]; /*0x63c1f1*/
        v56 = v24[3]; /*0x63c1fc*/
        ShrinkRect(&v53, -1); /*0x63c203*/
        (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63c21b*/
                                                                               + 16))(
          DSurface_Composite,
          &v61,
          &v53,
          v21);
        return; /*0x63c228*/
      }
      v22 = Factory::IdleHandler(); /*0x63c18f*/
    }
    if ( v22 != -1 ) /*0x63c197*/
      DrawTacticalWaypoint((int)v21, v50, v5, v59, v17, (int)v18, v22); /*0x63c1a8*/
    goto LABEL_29; /*0x63c1a8*/
  }
  if ( !v48 ) /*0x63c22f*/
  {
    if ( !HIBYTE(v51) ) /*0x63c56f*/
      return; /*0x63c56f*/
    goto LABEL_49; /*0x63c56f*/
  }
  v25 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 299))(this); /*0x63c23a*/
  v26 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x63c240*/
  HIBYTE(v57) = v25; /*0x63c245*/
  v49 = v26[300](this); /*0x63c253*/
  v65 = *(Coord3D *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 267))(this, &v53); /*0x63c265*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v65, &v67); /*0x63c287*/
  v27 = DSurface_ViewBounds.field_0 + v67; /*0x63c2a6*/
  v28 = (char *)DSurface_ViewBounds.field_4 + Coord3D_field_0x04; /*0x63c2a8*/
  if ( this->? ) /*0x63c2a0*/
  {
    v29 = (Coord3D *)Display::GetViewport(&v63); /*0x63c2b6*/
    v61 = *v29; /*0x63c2bd*/
    v62 = *(_DWORD *)v29[1].__pad_0; /*0x63c2dd*/
    v30 = ComputeBounds(&v63, 6, v27, (int)v28); /*0x63c2e1*/
    v53 = *v30; /*0x63c2e8*/
    v54 = v30[1]; /*0x63c2ef*/
    v55 = v30[2]; /*0x63c2f6*/
    v56 = v30[3]; /*0x63c301*/
    ShrinkRect(&v53, -1); /*0x63c308*/
    (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63c324*/
      DSurface_Composite,
      &v61,
      &v53,
      v52);
    return; /*0x63c331*/
  }
  v31 = (Coord3D *)Display::GetViewport(&v67); /*0x63c336*/
  v61 = *v31; /*0x63c33d*/
  v62 = *(_DWORD *)v31[1].__pad_0; /*0x63c35a*/
  v32 = ComputeBounds(&v67, 6, v5, v59); /*0x63c365*/
  v53 = *v32; /*0x63c36c*/
  v54 = v32[1]; /*0x63c373*/
  v55 = v32[2]; /*0x63c37a*/
  v56 = v32[3]; /*0x63c385*/
  ShrinkRect(&v53, -1); /*0x63c38c*/
  (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63c3a8*/
    DSurface_Composite,
    &v61,
    &v53,
    v52);
  DrawTacticalLine2D(0, (int)v52, v5, v59, v27, (int)v28, 1); /*0x63c3bb*/
  if ( !HIBYTE(v57) || v49 ) /*0x63c3ce*/
  {
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 11 ) /*0x63c3f5*/
    {
      v33 = Memory::Alloc76(); /*0x63c3f7*/
LABEL_39:
      if ( v33 != -1 ) /*0x63c3ff*/
        DrawTacticalWaypoint((int)v52, v50, v5, v59, v27, (int)v28, v33); /*0x63c412*/
    }
  }
  else if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 301))(this) == 29 ) /*0x63c3de*/
  {
    v33 = Factory::IdleHandler(); /*0x63c3e0*/
    goto LABEL_39; /*0x63c3e5*/
  }
  v34 = (Coord3D *)Display::GetViewport(&v58); /*0x63c417*/
  v61 = *v34; /*0x63c422*/
  v62 = *(_DWORD *)v34[1].__pad_0; /*0x63c43d*/
  v35 = ComputeBounds(&v58, 6, v27, (int)v28); /*0x63c446*/
  v53 = *v35; /*0x63c44d*/
  v54 = v35[1]; /*0x63c454*/
  v55 = v35[2]; /*0x63c45b*/
  v56 = v35[3]; /*0x63c466*/
  ShrinkRect(&v53, -1); /*0x63c46d*/
  (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63c489*/
    DSurface_Composite,
    &v61,
    &v53,
    v52);
  if ( v49 ) /*0x63c492*/
  {
    v36 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 302))(this, &v53); /*0x63c4a2*/
    v58 = *v36; /*0x63c4aa*/
    v59 = v36[1]; /*0x63c4b1*/
    v60 = v36[2]; /*0x63c4c8*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v58, &v63); /*0x63c4cc*/
    v37 = DSurface_ViewBounds.field_0 + v63; /*0x63c4e0*/
    v64 += (int)DSurface_ViewBounds.field_4; /*0x63c4f4*/
    DrawTacticalLine2D(0, (int)v52, v27, (int)v28, DSurface_ViewBounds.field_0 + v63, v64, 1); /*0x63c4f8*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 301))(this) == 29 ) /*0x63c50b*/
    {
      v38 = Factory::IdleHandler(); /*0x63c50d*/
      if ( v38 != -1 ) /*0x63c515*/
        DrawTacticalWaypoint((int)v52, v50, v27, (int)v28, v37, v64, v38); /*0x63c528*/
    }
    DrawActionLineSegment(v52, v37, v64); /*0x63c537*/
    return; /*0x63c546*/
  }
  if ( !HIBYTE(v51) ) /*0x63c54d*/
    return; /*0x63c54d*/
  v63 = v27; /*0x63c553*/
  Type = v66; /*0x63c557*/
  v64 = (int)v28; /*0x63c55b*/
  v67 = 3; /*0x63c55f*/
LABEL_49:
  v39 = (ArrayClass *)ArrayClass::GetAt_Wrap(Type, 0); /*0x63c575*/
  v66 = v39; /*0x63c587*/
  ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v39, &v65); /*0x63c58b*/
  v58 = *ScreenPos; /*0x63c592*/
  v59 = ScreenPos[1]; /*0x63c59c*/
  TypeEntry = (const void *)BuildingClass::GetTypeEntry((BuildingClass *)v39, (int)this); /*0x63c5a0*/
  v42 = TypeEntry; /*0x63c5a5*/
  if ( TypeEntry ) /*0x63c5a9*/
  {
    v43 = ActionScenarioClassCoordToScreen((int *)v65.__pad_0, TypeEntry, (int)this); /*0x63c5b2*/
    v58 = *v43; /*0x63c5b9*/
    v59 = v43[1]; /*0x63c5c0*/
  }
  v44 = *(_DWORD *)&Type->__pad_18[116]; /*0x63c5c4*/
  if ( v44 == -1 || (v45 = v70, v44 > 0) ) /*0x63c5dd*/
    v45 = v52; /*0x63c5df*/
  v46 = v63; /*0x63c5e7*/
  DrawActionLineSegment(v45, v63, v64); /*0x63c5ef*/
  globalHelper_03D960(v67, (int)v45, v46, v64, v58, v59); /*0x63c60a*/
  if ( v42 ) /*0x63c611*/
    DrawActionLineSegment(v45, v58, v59); /*0x63c61f*/
  qmemcpy(v72, (const void *)BuildingClass::CopyTypeDataForRender((BuildingClass *)v66, (int)v73, (int)this), 0x6Fu); /*0x63c644*/
  updated = BuildingClass::updateAnimationState((char *)v72); /*0x63c650*/
  if ( updated != -1 ) /*0x63c658*/
    DrawTacticalWaypoint((int)v45, v50, v63, v64, v58, v59, updated); /*0x63c675*/
}



// ==== 0x0063C690  ObjectClass::RenderScenarioActionLines  this=ObjectClass  sig=csp ====
int __thiscall RenderScenarioActionLines(ObjectClass *this)
{
  int *v2; // eax
  int v3; // edx
  int uniqueId; // eax
  _BYTE *v5; // esi
  ObjectClass *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int **vtable1; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  int *v15; // eax
  int v16; // esi
  int *v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // edi
  int *Viewport; // eax
  int v22; // esi
  int v23; // edi
  int v24; // eax
  int *v25; // eax
  int v26; // ebx
  int v28; // [esp+10h] [ebp-120h]
  BuildingClass *v29; // [esp+14h] [ebp-11Ch]
  Coord3D v30; // [esp+18h] [ebp-118h] BYREF
  int v31; // [esp+24h] [ebp-10Ch]
  int v32; // [esp+28h] [ebp-108h]
  int v33; // [esp+2Ch] [ebp-104h] BYREF
  int v34; // [esp+30h] [ebp-100h]
  int v35; // [esp+34h] [ebp-FCh]
  Coord2D v36; // [esp+38h] [ebp-F8h] BYREF
  int v37; // [esp+40h] [ebp-F0h] BYREF
  int v38; // [esp+44h] [ebp-ECh]
  _DWORD v39[3]; // [esp+48h] [ebp-E8h] BYREF
  const void *v40; // [esp+54h] [ebp-DCh]
  int nextObject; // [esp+58h] [ebp-D8h]
  __int64 v42; // [esp+5Ch] [ebp-D4h] BYREF
  int v43; // [esp+64h] [ebp-CCh]
  _DWORD v44[4]; // [esp+68h] [ebp-C8h] BYREF
  int v45[2]; // [esp+78h] [ebp-B8h] BYREF
  _DWORD v46[3]; // [esp+80h] [ebp-B0h] BYREF
  int v47; // [esp+8Ch] [ebp-A4h] BYREF
  Rect v48; // [esp+94h] [ebp-9Ch] BYREF
  _DWORD v49[3]; // [esp+A4h] [ebp-8Ch] BYREF
  Display v50[16]; // [esp+B0h] [ebp-80h] BYREF
  _WORD v51[56]; // [esp+C0h] [ebp-70h] BYREF

  v30 = *(Coord3D *)ScriptAction::GetCoords((ScriptAction *)this, v39); /*0x63c6a8*/
  v2 = ToCoordPixel(&v33, &v30); /*0x63c6c2*/
  v31 = *v2; /*0x63c6cc*/
  v28 = -1; /*0x63c6d0*/
  v3 = v2[1]; /*0x63c6d4*/
  uniqueId = this->uniqueId; /*0x63c6d7*/
  v32 = v3; /*0x63c6dc*/
  if ( uniqueId > 0 ) /*0x63c6e0*/
  {
    v5 = *(_BYTE **)(*(_DWORD *)this->vtable1 + 4); /*0x63c6f3*/
    qmemcpy(v51, v5, 0x6Cu); /*0x63c6f6*/
    v5 += 108; /*0x63c6f6*/
    v51[54] = *(_WORD *)v5; /*0x63c6f8*/
    LOBYTE(v51[55]) = v5[2]; /*0x63c6fa*/
    if ( SLOBYTE(v51[6]) == 11 ) /*0x63c706*/
    {
      v28 = Memory::Alloc76(); /*0x63c70d*/
    }
    else if ( SLOBYTE(v51[6]) == 29 ) /*0x63c716*/
    {
      v28 = Factory::IdleHandler(); /*0x63c71d*/
    }
    else
    {
      v28 = -1; /*0x63c723*/
    }
  }
  v6 = (ObjectClass *)Function::Method_6342D0((Function *)this, 0); /*0x63c72b*/
  v29 = (BuildingClass *)Render_Render_63D0F0(v6); /*0x63c737*/
  v7 = 0; /*0x63c73e*/
  nextObject = this->nextObject; /*0x63c740*/
  v35 = 0; /*0x63c746*/
  if ( nextObject > 0 ) /*0x63c74a*/
  {
    while ( 1 ) /*0x63c76b*/
    {
      v30 = *(Coord3D *)ScenarioClass::GetActionCoordsCopy(*(ScenarioClass **)(this->occupant + 4 * v7), v49); /*0x63c76b*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v30, &v37); /*0x63c78d*/
      v8 = DSurface_ViewBounds.field_0 + v37; /*0x63c7a2*/
      v9 = dword_886FA4 + v38; /*0x63c7aa*/
      v37 += DSurface_ViewBounds.field_0; /*0x63c7b4*/
      v38 += dword_886FA4; /*0x63c7b8*/
      Coord::Subtract((Coord *)&v42, -1, -1, -1); /*0x63c7bc*/
      if ( *(_QWORD *)v30.__pad_0 == v42 && v30.Coord3D_field_0x08 == v43 ) /*0x63c7eb*/
      {
        v10 = this->uniqueId; /*0x63c7f4*/
        v11 = 0; /*0x63c7fa*/
        v40 = *(const void **)(this->occupant + 4 * v7); /*0x63c7fe*/
        if ( v10 <= 0 ) /*0x63c802*/
        {
LABEL_16:
          v13 = 0; /*0x63c81a*/
        }
        else
        {
          vtable1 = (int **)this->vtable1; /*0x63c804*/
          while ( (*vtable1)[2] != v7 ) /*0x63c80c*/
          {
            ++v11; /*0x63c812*/
            ++vtable1; /*0x63c813*/
            if ( v11 >= v10 ) /*0x63c818*/
              goto LABEL_16; /*0x63c818*/
          }
          v13 = **vtable1; /*0x63ca6b*/
        }
        v8 = -1; /*0x63c820*/
        v9 = -1; /*0x63c823*/
        if ( v40 ) /*0x63c828*/
        {
          qmemcpy(v51, v40, 0x6Fu); /*0x63c836*/
          v14 = Render_Render_63CA80(v46, v51, v13); /*0x63c84a*/
          v39[0] = *v14; /*0x63c851*/
          v39[1] = v14[1]; /*0x63c858*/
          v39[2] = v14[2]; /*0x63c866*/
          v15 = ToCoordPixel(&v47, v39); /*0x63c86e*/
          v8 = *v15; /*0x63c873*/
          v9 = v15[1]; /*0x63c875*/
        }
      }
      v16 = -1; /*0x63c878*/
      do /*0x63c898*/
        DrawTacticalLine2D(v16++, (int)v29, v8, v9, v31, v32, 0); /*0x63c88f*/
      while ( v16 <= 2 ); /*0x63c898*/
      if ( v28 != -1 ) /*0x63c89f*/
      {
        v33 = v31; /*0x63c8ad*/
        v34 = v32; /*0x63c8bf*/
        *(_DWORD *)v36.__pad_0 = v8; /*0x63c8c3*/
        v36.Coord2D_field_0x04 = v9; /*0x63c8c7*/
        v17 = Coord2D::Sub(&v36, v45, &v33); /*0x63c8cb*/
        Vector::TwoDMagnitudeMath((Vector *)v17); /*0x63c8d2*/
        if ( v18 >= 37 ) /*0x63c8da*/
        {
          v19 = (*(_DWORD *)v36.__pad_0 + v33) / 2 - 10; /*0x63c90a*/
          v20 = (v34 + v36.Coord2D_field_0x04) / 2 - 10; /*0x63c90d*/
          Viewport = Display::GetViewport(v50); /*0x63c910*/
          v44[0] = *Viewport; /*0x63c917*/
          v44[1] = Viewport[1]; /*0x63c922*/
          v44[2] = Viewport[2]; /*0x63c92b*/
          v44[3] = Viewport[3]; /*0x63c93c*/
          Rect::Set(&v48, v19, v20, 21, 21); /*0x63c943*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, Rect *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63c962*/
                                                                                   + 84))(
            DSurface_Composite,
            v44,
            &v48,
            v29);
        }
      }
      if ( ++v35 >= nextObject ) /*0x63c974*/
        break; /*0x63c974*/
      v7 = v35; /*0x63c752*/
    }
  }
  if ( this->lineTrailer > 0 && this->fallRate == -1 ) /*0x63c991*/
  {
    v30 = *(Coord3D *)ScenarioClass::GetActionCoordsCopy((ScenarioClass *)&this->attachedBomb, v46); /*0x63c9ab*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v30, &v33); /*0x63c9cd*/
    v22 = DSurface_ViewBounds.field_0 + v33; /*0x63c9e7*/
    v23 = dword_886FA4 + v34; /*0x63c9f1*/
    Coord::Subtract((Coord *)v39, -1, -1, -1); /*0x63c9f3*/
    if ( (unsigned __int8)Coord3D::Equals(&v30, v39) ) /*0x63ca01*/
    {
      v24 = Render_Render_634770(this); /*0x63ca0c*/
      v25 = ActionScenarioClassCoordToScreen(v45, &this->attachedBomb, v24); /*0x63ca18*/
      v22 = *v25; /*0x63ca1d*/
      v23 = v25[1]; /*0x63ca1f*/
    }
    v26 = v31; /*0x63ca26*/
    DrawTacticalFillScanline(4, (int)v29, v22, v23, v31, v32); /*0x63ca37*/
    if ( v28 != -1 ) /*0x63ca41*/
      BuildingClass::DrawSelectionBlip(v29, v22, v23, v26, v32); /*0x63ca4f*/
  }
  return ScenarioClass::RenderAction((ScenarioClass *)this, (int)v29); /*0x63ca60*/
}



// ==== 0x0063CA80  Render_Render_63CA80  this=-  sig=csp ====
_DWORD *__fastcall sub_63CA80(_DWORD *a1, _BYTE *a2, int a3)
{
  int *ScenarioClassActionCoords; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int *v8; // ecx
  _DWORD v10[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, a2); /*0x63ca90*/
  v5 = *ScenarioClassActionCoords; /*0x63ca92*/
  v6 = ScenarioClassActionCoords[1]; /*0x63ca97*/
  v7 = ScenarioClassActionCoords[2]; /*0x63ca9a*/
  if ( *ScenarioClassActionCoords == -1 && v6 == -1 && v7 == -1 && a3 ) /*0x63caad*/
  {
    v8 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a3 + 88))(a3, v10); /*0x63cab9*/
    v5 = *v8; /*0x63cabb*/
    v6 = v8[1]; /*0x63cabd*/
    v7 = v8[2]; /*0x63cac0*/
  }
  *a1 = v5; /*0x63cac5*/
  a1[1] = v6; /*0x63caca*/
  a1[2] = v7; /*0x63cacd*/
  return a1; /*0x63cac9*/
}



// ==== 0x0063CAE0  ObjectClass::RenderScenarioActionLines2  this=ObjectClass  sig=csp ====
int __thiscall RenderScenarioActionLines2(ObjectClass *this)
{
  int *Coords; // eax
  int *v3; // eax
  int v4; // edx
  int uniqueId; // eax
  _BYTE *v6; // esi
  ObjectClass *v7; // eax
  int v8; // esi
  int *ActionCoordsCopy; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // edx
  const void *v13; // ebx
  int v14; // eax
  int **vtable1; // ecx
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  int *v19; // eax
  int i; // esi
  int *v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int *v25; // eax
  int v26; // ebx
  int DrawColor; // eax
  unsigned int v29; // [esp+10h] [ebp-D8h]
  int v30; // [esp+14h] [ebp-D4h] BYREF
  int v31; // [esp+18h] [ebp-D0h]
  int v32; // [esp+1Ch] [ebp-CCh]
  int v33; // [esp+20h] [ebp-C8h]
  int v34; // [esp+24h] [ebp-C4h]
  int v35; // [esp+28h] [ebp-C0h] BYREF
  int v36; // [esp+2Ch] [ebp-BCh]
  int nextObject; // [esp+30h] [ebp-B8h]
  int v38; // [esp+34h] [ebp-B4h]
  int v39; // [esp+38h] [ebp-B0h]
  int v40; // [esp+3Ch] [ebp-ACh] BYREF
  int v41; // [esp+40h] [ebp-A8h]
  int v42; // [esp+44h] [ebp-A4h]
  int v43; // [esp+48h] [ebp-A0h]
  _DWORD v44[3]; // [esp+4Ch] [ebp-9Ch] BYREF
  int v45[2]; // [esp+58h] [ebp-90h] BYREF
  _DWORD v46[3]; // [esp+60h] [ebp-88h] BYREF
  _DWORD v47[3]; // [esp+6Ch] [ebp-7Ch] BYREF
  _WORD v48[56]; // [esp+78h] [ebp-70h] BYREF

  Coords = ScriptAction::GetCoords((ScriptAction *)this, &v40); /*0x63caf1*/
  v30 = *Coords; /*0x63caf8*/
  v31 = Coords[1]; /*0x63cb03*/
  v32 = Coords[2]; /*0x63cb0e*/
  v3 = ToCoordPixel(&v35, &v30); /*0x63cb12*/
  v33 = *v3; /*0x63cb1c*/
  v29 = -1; /*0x63cb20*/
  v4 = v3[1]; /*0x63cb24*/
  uniqueId = this->uniqueId; /*0x63cb27*/
  v34 = v4; /*0x63cb2c*/
  if ( uniqueId > 0 ) /*0x63cb30*/
  {
    v6 = *(_BYTE **)(*(_DWORD *)this->vtable1 + 4); /*0x63cb40*/
    qmemcpy(v48, v6, 0x6Cu); /*0x63cb43*/
    v6 += 108; /*0x63cb43*/
    v48[54] = *(_WORD *)v6; /*0x63cb45*/
    LOBYTE(v48[55]) = v6[2]; /*0x63cb47*/
    if ( SLOBYTE(v48[6]) == 11 ) /*0x63cb53*/
    {
      v29 = Memory::Alloc76(); /*0x63cb5a*/
    }
    else if ( SLOBYTE(v48[6]) == 29 ) /*0x63cb63*/
    {
      v29 = Factory::IdleHandler(); /*0x63cb6a*/
    }
    else
    {
      v29 = -1; /*0x63cb70*/
    }
  }
  v7 = (ObjectClass *)Function::Method_6342D0((Function *)this, 0); /*0x63cb78*/
  v39 = Render_Render_63D0F0(v7); /*0x63cb84*/
  v8 = 0; /*0x63cb8b*/
  nextObject = this->nextObject; /*0x63cb8d*/
  v38 = 0; /*0x63cb93*/
  if ( nextObject > 0 ) /*0x63cb97*/
  {
    while ( 1 ) /*0x63cbaf*/
    {
      v43 = TeamClass::FindByMemberType((TeamClass *)this, v8); /*0x63cbaf*/
      ActionCoordsCopy = ScenarioClass::GetActionCoordsCopy(*(ScenarioClass **)(this->occupant + 4 * v8), v47); /*0x63cbba*/
      v30 = *ActionCoordsCopy; /*0x63cbc1*/
      v31 = ActionCoordsCopy[1]; /*0x63cbd3*/
      v32 = ActionCoordsCopy[2]; /*0x63cbdf*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v30, &v35); /*0x63cbe3*/
      v10 = DSurface_ViewBounds.field_0 + v35; /*0x63cbf8*/
      v11 = dword_886FA4 + v36; /*0x63cc00*/
      v35 += DSurface_ViewBounds.field_0; /*0x63cc0a*/
      v36 += dword_886FA4; /*0x63cc0e*/
      Coord::Subtract((Coord *)v44, -1, -1, -1); /*0x63cc12*/
      if ( v30 == v44[0] && v31 == v44[1] && v32 == v44[2] ) /*0x63cc41*/
      {
        v12 = this->uniqueId; /*0x63cc46*/
        v13 = *(const void **)(this->occupant + 4 * v8); /*0x63cc49*/
        v14 = 0; /*0x63cc4c*/
        if ( v12 <= 0 ) /*0x63cc50*/
        {
LABEL_17:
          v16 = 0; /*0x63cc68*/
        }
        else
        {
          vtable1 = (int **)this->vtable1; /*0x63cc52*/
          while ( (*vtable1)[2] != v8 ) /*0x63cc5a*/
          {
            ++v14; /*0x63cc60*/
            ++vtable1; /*0x63cc61*/
            if ( v14 >= v12 ) /*0x63cc66*/
              goto LABEL_17; /*0x63cc66*/
          }
          v16 = **vtable1; /*0x63ce2d*/
        }
        v10 = -1; /*0x63cc6a*/
        v17 = -1; /*0x63cc6d*/
        if ( v13 ) /*0x63cc72*/
        {
          qmemcpy(v48, v13, 0x6Fu); /*0x63cc80*/
          v18 = Render_Render_63CA80(v46, v48, v16); /*0x63cc8d*/
          v40 = *v18; /*0x63cc94*/
          v41 = v18[1]; /*0x63cc9f*/
          v42 = v18[2]; /*0x63ccaa*/
          v19 = ToCoordPixel(v45, &v40); /*0x63ccae*/
          v10 = *v19; /*0x63ccb3*/
          v17 = v19[1]; /*0x63ccb5*/
        }
        v11 = v17; /*0x63ccb8*/
      }
      for ( i = 0; i <= 1; ++i ) /*0x63ccba*/
        DrawTacticalLine2D(i, v43, v10, v11, v33, v34, 1); /*0x63ccd0*/
      if ( v29 != -1 ) /*0x63cce2*/
        DrawTacticalWaypoint(v43, v39, v10, v11, v33, v34, v29); /*0x63ccf9*/
      if ( ++v38 >= nextObject ) /*0x63cd0d*/
        break; /*0x63cd0d*/
      v8 = v38; /*0x63cb9f*/
    }
  }
  if ( this->lineTrailer > 0 && this->fallRate == -1 ) /*0x63cd2a*/
  {
    nextObject = TeamClass::GetMember((TeamClass *)this); /*0x63cd41*/
    v21 = ScenarioClass::GetActionCoordsCopy((ScenarioClass *)&this->attachedBomb, v46); /*0x63cd45*/
    v30 = *v21; /*0x63cd4c*/
    v31 = v21[1]; /*0x63cd53*/
    v32 = v21[2]; /*0x63cd6a*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v30, &v35); /*0x63cd6e*/
    v22 = dword_886FA4 + v36; /*0x63cd89*/
    v23 = DSurface_ViewBounds.field_0 + v35; /*0x63cd93*/
    Coord::Subtract((Coord *)&v40, -1, -1, -1); /*0x63cd95*/
    if ( v30 == v40 && v31 == v41 && v32 == v42 ) /*0x63cdbc*/
    {
      v24 = Render_Render_634770(this); /*0x63cdc0*/
      v25 = ActionScenarioClassCoordToScreen(v45, &this->attachedBomb, v24); /*0x63cdcc*/
      v23 = *v25; /*0x63cdd1*/
      v22 = v25[1]; /*0x63cdd3*/
    }
    v26 = nextObject; /*0x63cdda*/
    globalHelper_03D960(4, nextObject, v23, v22, v33, v34); /*0x63cded*/
    if ( v29 != -1 ) /*0x63cdf9*/
      DrawTacticalWaypoint(v26, v39, v23, v22, v33, v34, v29); /*0x63ce0e*/
  }
  DrawColor = BuildingClass::GetDrawColor((int)this); /*0x63ce15*/
  return Render_Render_635490(this, DrawColor); /*0x63ce22*/
}



// ==== 0x0063CE40  ScriptAction::DrawPlacementMarker  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::DrawPlacementMarker(ScriptAction *this)
{
  int DrawColor; // edi
  int *Viewport; // eax
  int v4; // edx
  int v5; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  int v8[2]; // [esp+8h] [ebp-44h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v10[4]; // [esp+1Ch] [ebp-30h] BYREF
  _DWORD v11[4]; // [esp+2Ch] [ebp-20h] BYREF
  _DWORD v12[4]; // [esp+3Ch] [ebp-10h] BYREF

  DrawColor = BuildingClass::GetDrawColor((int)this); /*0x63ce50*/
  Viewport = Display::GetViewport(v10); /*0x63ce52*/
  v12[0] = *Viewport; /*0x63ce59*/
  v12[1] = Viewport[1]; /*0x63ce60*/
  v12[2] = Viewport[2]; /*0x63ce67*/
  v4 = Viewport[3]; /*0x63ce6b*/
  v5 = this->ScriptAction_field_0x4[0]; /*0x63ce6e*/
  v12[3] = v4; /*0x63ce71*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(_BYTE **)(*(_DWORD *)v5 + 4)); /*0x63ce7e*/
  v9[0] = *ScenarioClassActionCoords; /*0x63ce85*/
  v9[1] = ScenarioClassActionCoords[1]; /*0x63ce8c*/
  v9[2] = ScenarioClassActionCoords[2]; /*0x63cea3*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, v8); /*0x63cea7*/
  v8[0] += DSurface_ViewBounds.field_0; /*0x63cec7*/
  v11[0] = v8[0] - 4 + 1; /*0x63cedb*/
  v11[1] = (char *)DSurface_ViewBounds.field_4 + v8[1] - 3; /*0x63cedf*/
  v11[2] = 6; /*0x63cef5*/
  v11[3] = 6; /*0x63cef9*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 16))( /*0x63cf07*/
           DSurface_Composite,
           v12,
           v11,
           DrawColor);
}



// ==== 0x0063CF10  HouseClass::method_63CF10  this=HouseClass  sig=csp ====
int __thiscall sub_63CF10(HouseClass *this)
{
  int v1; // ecx
  void *Object_field_0x30; // esi
  int v3; // ecx
  Color v5; // [esp+4h] [ebp-8h] BYREF

  v1 = this->planningPaths[3]; /*0x63cf10*/
  Object_field_0x30 = *(void **)(v1 + 48); /*0x63cf1a*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v1) && dword_A83D4C ) /*0x63cf2d*/
    Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x63cf2f*/
  v3 = *((_DWORD *)stru_A80220.? + (_DWORD)Object_field_0x30) + 22265; /*0x63cf41*/
  LOWORD(v5.Color_field_00) = *(_WORD *)v3; /*0x63cf4a*/
  BYTE2(v5.Color_field_00) = *(_BYTE *)(v3 + 2); /*0x63cf56*/
  Color::Lerp(&v5, 0x50u, &byte_A83CD9); /*0x63cf5a*/
  return (BYTE1(v5.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x63cf80*/
       | (LOBYTE(v5.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
       | (BYTE2(v5.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x0063CFC0  HouseClass::method_63CFC0  this=HouseClass  sig=csp ====
int __thiscall sub_63CFC0(HouseClass *this)
{
  int v1; // ecx
  void *Object_field_0x30; // esi
  int v3; // ecx
  Color v5; // [esp+4h] [ebp-8h] BYREF

  v1 = this->planningPaths[3]; /*0x63cfc0*/
  Object_field_0x30 = *(void **)(v1 + 48); /*0x63cfca*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v1) && dword_A83D4C ) /*0x63cfdd*/
    Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x63cfdf*/
  v3 = *((_DWORD *)stru_A80220.? + (_DWORD)Object_field_0x30) + 22265; /*0x63cff1*/
  LOWORD(v5.Color_field_00) = *(_WORD *)v3; /*0x63cffa*/
  BYTE2(v5.Color_field_00) = *(_BYTE *)(v3 + 2); /*0x63d006*/
  Color::Lerp(&v5, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x63d00a*/
  return (BYTE1(v5.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x63d030*/
       | (LOBYTE(v5.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
       | (BYTE2(v5.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x0063D070  HouseClass::ColorLerpAndPack  this=HouseClass  sig=csp ====
int __fastcall ColorLerpAndPack(HouseClass *this, unsigned __int8 *a2, unsigned __int8 a3)
{
  __int16 vtable0; // ax
  Color v5; // [esp+0h] [ebp-8h] BYREF

  vtable0 = (__int16)this->AbstractClass; /*0x63d073*/
  BYTE2(v5.Color_field_00) = BYTE2(this->AbstractClass); /*0x63d07e*/
  LOWORD(v5.Color_field_00) = vtable0; /*0x63d087*/
  Color::Lerp(&v5, a3, a2); /*0x63d08c*/
  return (LOBYTE(v5.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x63d0e2*/
       | (BYTE1(v5.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(v5.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x0063D0F0  ObjectClass::Render_Render_63D0F0  this=ObjectClass  sig=csp ====
int __thiscall Render_Render_63D0F0(ObjectClass *this)
{
  int result; // eax
  int v2; // edi
  int v3; // ecx
  ObjectClass ***i; // edx

  result = (MEMORY[0xA83CDB] >> g_BitMask_Red << g_BitShift_Blue) /*0x63d16d*/
         | (word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
         | (byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
  if ( this ) /*0x63d171*/
  {
    if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63d1c0*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_70[80] + 16); /*0x63d1c2*/
      v3 = 0; /*0x63d1c5*/
      if ( v2 > 0 ) /*0x63d1c9*/
      {
        for ( i = *(ObjectClass ****)(*(_DWORD *)&stru_AC4B30.__pad_70[80] + 4); **i != this; ++i ) /*0x63d1cb*/
        {
          if ( ++v3 >= v2 ) /*0x63d1df*/
            return result; /*0x63d1df*/
        }
        if ( v3 != -1 ) /*0x63d1ec*/
          return (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d1ee*/
               | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
               | (LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red);
      }
    }
    else if ( this->isSelected ) /*0x63d1fc*/
    {
      return (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d206*/
           | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
           | (LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red);
    }
  }
  return result; /*0x63d1e1*/
}



// ==== 0x0063D210  ActionScenarioClassCoordToScreen  this=-  sig=csp ====
int *__fastcall sub_63D210(int *a1, const void *a2, int a3)
{
  int v3; // eax
  int v5; // ecx
  int *ActionCoords; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int *v10; // ecx
  _DWORD v12[3]; // [esp+4h] [ebp-94h] BYREF
  int v13[3]; // [esp+10h] [ebp-88h] BYREF
  _BYTE v14[12]; // [esp+1Ch] [ebp-7Ch] BYREF
  _BYTE v15[112]; // [esp+28h] [ebp-70h] BYREF

  v3 = -1; /*0x63d216*/
  v5 = -1; /*0x63d21c*/
  if ( a2 ) /*0x63d221*/
  {
    qmemcpy(v15, a2, 0x6Fu); /*0x63d238*/
    ActionCoords = GetScenarioClassActionCoords(v13, v15); /*0x63d246*/
    v7 = *ActionCoords; /*0x63d248*/
    v8 = ActionCoords[1]; /*0x63d24d*/
    v9 = ActionCoords[2]; /*0x63d250*/
    if ( *ActionCoords == -1 && v8 == -1 && v9 == -1 && a3 ) /*0x63d266*/
    {
      v10 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 88))(a3, v14); /*0x63d272*/
      v7 = *v10; /*0x63d274*/
      v8 = v10[1]; /*0x63d276*/
      v9 = v10[2]; /*0x63d279*/
    }
    v12[1] = v8; /*0x63d282*/
    v12[0] = v7; /*0x63d286*/
    v12[2] = v9; /*0x63d294*/
    Coord::To_Screen(g_TacticalClass_Instance, v12, v13); /*0x63d298*/
    v3 = DSurface_ViewBounds + v13[0]; /*0x63d2b1*/
    v5 = dword_886FA4 + v13[1]; /*0x63d2b4*/
  }
  *a1 = v3; /*0x63d2b7*/
  a1[1] = v5; /*0x63d2b9*/
  return a1; /*0x63d2be*/
}



// ==== 0x0063D2D0  ObjectClass::method_63D2D0  this=ObjectClass  sig=csp ====
int __thiscall sub_63D2D0(ObjectClass *this)
{
  int result; // eax
  int v2; // edi
  int v3; // ecx
  _DWORD **i; // edx
  int v5; // [esp+10h] [ebp-Ch]

  v5 = **(_DWORD **)this->?; /*0x63d31a*/
  result = (MEMORY[0xA83CDB] >> g_BitMask_Red << g_BitShift_Blue) /*0x63d354*/
         | (word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
         | (byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
  if ( v5 ) /*0x63d358*/
  {
    if ( *(_DWORD *)&stru_AC4B30.__pad_70[80] ) /*0x63d3a7*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)&stru_AC4B30.__pad_70[80] + 16); /*0x63d3a9*/
      v3 = 0; /*0x63d3ac*/
      if ( v2 > 0 ) /*0x63d3b0*/
      {
        for ( i = *(_DWORD ***)(*(_DWORD *)&stru_AC4B30.__pad_70[80] + 4); **i != v5; ++i ) /*0x63d3b2*/
        {
          if ( ++v3 >= v2 ) /*0x63d3c6*/
            return result; /*0x63d3c6*/
        }
        if ( v3 != -1 ) /*0x63d3d3*/
          return (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d3d5*/
               | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
               | (LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red);
      }
    }
    else if ( *(_BYTE *)(v5 + 131) ) /*0x63d3e3*/
    {
      return (BYTE2(stru_A80220.AbstractClass) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d3ed*/
           | (BYTE1(stru_A80220.AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
           | (LOBYTE(stru_A80220.AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red);
    }
  }
  return result; /*0x63d3c8*/
}



// ==== 0x0063D400  DSurface::DrawMarker  this=DSurface  sig=csp ====
int __thiscall DSurface::DrawMarker(DSurface *this, int a2, int a3)
{
  int *Viewport; // eax
  int v6[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v7[4]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v8[4]; // [esp+28h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v6); /*0x63d40b*/
  v8[0] = *Viewport; /*0x63d412*/
  v8[1] = Viewport[1]; /*0x63d41a*/
  v8[2] = Viewport[2]; /*0x63d421*/
  v8[3] = Viewport[3]; /*0x63d430*/
  v6[0] = a2; /*0x63d434*/
  v7[2] = 6; /*0x63d442*/
  v7[0] = a2 - 3; /*0x63d446*/
  v7[1] = a3 - 3; /*0x63d458*/
  v7[3] = 6; /*0x63d45c*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, DSurface *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63d46a*/
                                                                              + 84))(
           DSurface_Composite,
           v8,
           v7,
           this);
}



// ==== 0x0063D480  ObjectClass::DrawActionLineSegment  this=ObjectClass  sig=csp ====
int __thiscall DrawActionLineSegment(ObjectClass *this, int a2, int a3)
{
  int *Viewport; // eax
  int v6[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v7[4]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v8[4]; // [esp+28h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v6); /*0x63d48b*/
  v8[0] = *Viewport; /*0x63d492*/
  v8[1] = Viewport[1]; /*0x63d49a*/
  v8[2] = Viewport[2]; /*0x63d4a1*/
  v8[3] = Viewport[3]; /*0x63d4b0*/
  v6[0] = a2; /*0x63d4b4*/
  v7[2] = 4; /*0x63d4cd*/
  v7[0] = a2 - 3 + 1; /*0x63d4d1*/
  v7[1] = a3 - 3 + 1; /*0x63d4e4*/
  v7[3] = 4; /*0x63d4e8*/
  return (*(int (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, ObjectClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63d4f6*/
                                                                                 + 16))(
           DSurface_Composite,
           v8,
           v7,
           this);
}



// ==== 0x0063D540  BuildingClass::updateAnimationState  this=BuildingClass  sig=csp ====
int __thiscall sub_63D540(char *this)
{
  int v1; // eax

  v1 = this->vtable4; /*0x63d540*/
  if ( v1 == 11 ) /*0x63d547*/
    return Memory::Alloc76(); /*0x63d549*/
  if ( v1 == 29 ) /*0x63d551*/
    return Factory::IdleHandler(); /*0x63d553*/
  return -1; /*0x63d55b*/
}



// ==== 0x0063D560  BuildingClass::DrawSelectionBlip  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DrawSelectionBlip(BuildingClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st7
  int result; // eax
  int *Viewport; // eax
  double v9; // [esp+0h] [ebp-48h]
  int v10; // [esp+18h] [ebp-30h] BYREF
  int v11; // [esp+1Ch] [ebp-2Ch]
  int v12; // [esp+20h] [ebp-28h]
  int v13; // [esp+24h] [ebp-24h]
  _DWORD v14[4]; // [esp+28h] [ebp-20h] BYREF
  int v15[4]; // [esp+38h] [ebp-10h] BYREF

  v10 = a2 - a4; /*0x63d57f*/
  __asm { fild [esp+40h+var_30] } /*0x63d585*/
  v11 = a3 - a5; /*0x63d589*/
  __asm /*0x63d590*/
  {
    fild [esp+48h+var_2C]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+48h+var_48]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v9); /*0x63d5a5*/
  LOWORD(result) = Math::RoundToInt(v5); /*0x63d5ad*/
  if ( result >= 37 ) /*0x63d5b5*/
  {
    Viewport = Display::GetViewport(v15); /*0x63d5bb*/
    v14[0] = *Viewport; /*0x63d5c2*/
    v14[1] = Viewport[1]; /*0x63d5ca*/
    v14[2] = Viewport[2]; /*0x63d5d5*/
    v14[3] = Viewport[3]; /*0x63d5dc*/
    v10 = (a4 + a2) / 2 - 10; /*0x63d5eb*/
    v11 = (a5 + a3) / 2 - 10; /*0x63d600*/
    v12 = 21; /*0x63d609*/
    v13 = 21; /*0x63d60d*/
    return (*(int (__thiscall **)(AudioStream *, _DWORD *, int *, BuildingClass *))(*(_DWORD *)DSurface_Composite->__pad_0 /*0x63d61d*/
                                                                                  + 84))(
             DSurface_Composite,
             v14,
             &v10,
             this);
  }
  return result; /*0x63d620*/
}



// ==== 0x0063D630  DrawTacticalWaypoint  this=ObjectClass  sig=csp ====
void __fastcall Tactical_DrawWaypoint(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // edi
  double v11; // st7
  int v12; // esi
  int v13; // edi
  int *Viewport; // eax
  int v15; // eax
  int v16; // edi
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23; // [esp+30h] [ebp-30h] BYREF
  int v24; // [esp+34h] [ebp-2Ch]
  int v25; // [esp+38h] [ebp-28h]
  int v26; // [esp+3Ch] [ebp-24h]
  int v27[4]; // [esp+40h] [ebp-20h] BYREF
  int v28[4]; // [esp+50h] [ebp-10h] BYREF

  v7 = a4; /*0x63d634*/
  v8 = a6; /*0x63d639*/
  v9 = a3; /*0x63d63e*/
  v10 = a5; /*0x63d643*/
  v19 = a3 - a5; /*0x63d651*/
  v20 = a4 - a6; /*0x63d65b*/
  v11 = Math::Sqrt((double)(a4 - a6) * (double)(a4 - a6) + (double)(a3 - a5) * (double)(a3 - a5)); /*0x63d67b*/
  if ( (int)Math::RoundToInt(v11) >= 37 ) /*0x63d68b*/
  {
    v12 = (v10 + v9) / 2; /*0x63d6a5*/
    v13 = (v7 + v8) / 2; /*0x63d6a7*/
    Viewport = Display::GetViewport(v28); /*0x63d6af*/
    v23 = *Viewport; /*0x63d6b6*/
    v24 = Viewport[1]; /*0x63d6bd*/
    v25 = Viewport[2]; /*0x63d6c7*/
    v15 = Viewport[3]; /*0x63d6ce*/
    v20 = v13 - 10 + 1; /*0x63d6d1*/
    v26 = v15; /*0x63d6d9*/
    v19 = v12 - 10 + 1; /*0x63d6de*/
    v21 = 19; /*0x63d6f2*/
    v22 = 19; /*0x63d6f6*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 84))( /*0x63d701*/
      DSurface_Composite,
      &v23,
      &v19,
      a1);
    if ( v21 > -2 && v22 > -2 ) /*0x63d713*/
    {
      ++v19; /*0x63d737*/
      ++v20; /*0x63d73f*/
      v21 -= 2; /*0x63d74c*/
      v22 -= 2; /*0x63d750*/
    }
    else
    {
      v19 = 0; /*0x63d717*/
      v20 = 0; /*0x63d71b*/
      v21 = 0; /*0x63d71f*/
      v22 = 0; /*0x63d723*/
    }
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 16))( /*0x63d76b*/
      DSurface_Composite,
      &v23,
      &v19,
      a2);
    a3 = v12 - 10; /*0x63d76e*/
    a4 = v13 - 10; /*0x63d772*/
    v27[0] = v23; /*0x63d782*/
    v27[1] = v24; /*0x63d78a*/
    v27[2] = v25; /*0x63d794*/
    v27[3] = v26; /*0x63d798*/
    v16 = v13 - *((__int16 *)dword_ABF294 + 2) / 2; /*0x63d7b4*/
    a3 = v12 - *((__int16 *)dword_ABF294 + 1) / 2 - 1; /*0x63d7ed*/
    a4 = v16; /*0x63d7f4*/
    DrawToSurfaceSHP( /*0x63d7fb*/
      DSurface_Composite,
      dword_87F6C8,
      (int)dword_ABF294,
      a7,
      &a3,
      v27,
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



// ==== 0x0063D810  DrawTacticalLine2D  this=-  sig=csp ====
char __fastcall Tactical_DrawLine2D(int a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  signed int v7; // ebx
  signed int v8; // eax
  int v9; // edx
  int v10; // eax
  char result; // al
  DWORD Time; // eax
  int v14[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = abs32(a6 - a4); /*0x63d832*/
  v8 = abs32(a5 - a3); /*0x63d83d*/
  v9 = v8 <= v7 ? a1 : 0;
  v10 = v8 > v7 ? a1 : 0;
  v14[1] = dword_886FA4; /*0x63d871*/
  v14[0] = DSurface_ViewBounds; /*0x63d879*/
  v14[2] = dword_886FA8; /*0x63d882*/
  a3 += v9; /*0x63d88f*/
  a4 += v10; /*0x63d893*/
  a5 += v9; /*0x63d897*/
  a6 += v10; /*0x63d89b*/
  v14[3] = dword_886FAC; /*0x63d89f*/
  result = ClipLine(&a3, &a5, v14); /*0x63d8a3*/
  if ( result ) /*0x63d8ae*/
  {
    if ( a7 ) /*0x63d8b6*/
    {
      Time = timeGetTime(); /*0x63d8b8*/
      return (*(int (__thiscall **)(int, int *, int *, int, void *, int))(*(_DWORD *)DSurface_Composite + 72))( /*0x63d8e3*/
               DSurface_Composite,
               &a3,
               &a5,
               a2,
               &unk_836880,
               ((signed int)-Time >> 5) & 0xF);
    }
    else
    {
      return (*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x63d903*/
               DSurface_Composite,
               &a3,
               &a5,
               a2);
    }
  }
  return result; /*0x63d8aa*/
}



// ==== 0x0063D910  DrawTacticalFillScanline  this=Rect  sig=csp ====
char __fastcall DrawTacticalFillScanline(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // edi
  int v9; // esi

  v7 = a1 - (a1 >> 31); /*0x63d917*/
  v8 = a1 / 2; /*0x63d91c*/
  v9 = a1 / 2 - a1 + 1; /*0x63d922*/
  if ( v9 <= a1 / 2 ) /*0x63d925*/
  {
    do /*0x63d94a*/
      LOBYTE(v7) = DrawTacticalLine2D(v9++, a2, a3, a4, a5, a6, 0); /*0x63d942*/
    while ( v9 <= v8 ); /*0x63d94a*/
  }
  return v7; /*0x63d94d*/
}



// ==== 0x0063D960  globalHelper_03D960  this=-  sig=csp ====
char __fastcall sub_63D960(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // eax

  v6 = a1 - 2; /*0x63d961*/
  if ( v6 > 0 ) /*0x63d96c*/
  {
    v9 = v6 - (v6 >> 31); /*0x63d977*/
    v8 = v6 / 2; /*0x63d97b*/
    v7 = v6 / 2 - v6 + 1; /*0x63d981*/
  }
  else
  {
    v7 = 0; /*0x63d96e*/
    v8 = 0; /*0x63d970*/
  }
  for ( ; v7 <= v8; ++v7 ) /*0x63d984*/
    LOBYTE(v9) = DrawTacticalLine2D(v7, a2, a3, a4, a5, a6, 1); /*0x63d9a4*/
  return v9; /*0x63d9b3*/
}



// ==== 0x0063D9C0  FactoryClass::RemoveFromArrays  this=VectorClass  sig=csp ====
int *__thiscall FactoryClass::RemoveFromArrays(FactoryClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  void *v6; // eax
  void *vtable1; // eax
  FactoryClass *v9; // [esp+Ch] [ebp-4h] BYREF

  FactoryClass::ClearObjects(this); /*0x63d9c4*/
  v9 = this; /*0x63d9d9*/
  v3 = (*(int (__thiscall **)(char *, FactoryClass **))(*(_DWORD *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x63d9dd*/
         &stru_AC4B30.__pad_EC[124],
         &v9);
  if ( v3 != -1 ) /*0x63d9e3*/
    Array::RemoveAt((Array *)&stru_AC4B30.__pad_EC[124], v3); /*0x63d9eb*/
  v4 = (*(int (__thiscall **)(Array *, FactoryClass **))(*(_DWORD *)stru_AC4B30.__pad_0 + 16))(&stru_AC4B30, &v9); /*0x63da00*/
  if ( v4 != -1 ) /*0x63da06*/
    Array::RemoveAt(&stru_AC4B30, v4); /*0x63da0e*/
  v5 = (*((int (__thiscall **)(void **, FactoryClass **))stru_AC4B30.Array_field_0xE8 + 4))( /*0x63da23*/
         &stru_AC4B30.Array_field_0xE8,
         &v9);
  if ( v5 != -1 ) /*0x63da29*/
    Array::RemoveAt((Array *)&stru_AC4B30.Array_field_0xE8, v5); /*0x63da31*/
  if ( *(FactoryClass **)&stru_AC4B30.__pad_EC[176] == v9 ) /*0x63da45*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[176] = 0; /*0x63da47*/
  if ( *(FactoryClass **)&stru_AC4B30.__pad_EC[28] == v9 ) /*0x63da53*/
    *(_DWORD *)&stru_AC4B30.__pad_EC[28] = 0; /*0x63da55*/
  if ( *(FactoryClass **)&stru_AC4B30.__pad_70[80] == v9 ) /*0x63da61*/
    *(_DWORD *)&stru_AC4B30.__pad_70[80] = 0; /*0x63da63*/
  v6 = (void *)this->production[0]; /*0x63da69*/
  this->? = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63da6c*/
  if ( v6 && BYTE1(this->production[2]) ) /*0x63da77*/
  {
    __3_YAXPAX_Z(v6); /*0x63da7d*/
    this->production[0] = 0; /*0x63da85*/
  }
  BYTE1(this->production[2]) = 0; /*0x63da88*/
  this->production[1] = 0; /*0x63da8b*/
  vtable1 = this->?; /*0x63da8e*/
  this->AbstractClass = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x63da91*/
  if ( vtable1 && BYTE1(this->?) ) /*0x63da9b*/
  {
    __3_YAXPAX_Z(vtable1); /*0x63daa1*/
    this->? = 0; /*0x63daa9*/
  }
  BYTE1(this->?) = 0; /*0x63dab0*/
  this->? = 0; /*0x63dab3*/
  if ( (a2 & 1) != 0 ) /*0x63dab9*/
    __3_YAXPAX_Z(this); /*0x63dabc*/
  return (int *)this; /*0x63dac6*/
}



// ==== 0x0063DAD0  ObjectClass::PackRGBFromBytes  this=ObjectClass  sig=csp ====
int __thiscall PackRGBFromBytes(ObjectClass *this)
{
  return (LOBYTE(this->AbstractClass) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x63db15*/
       | (BYTE1(this->AbstractClass) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(this->AbstractClass) >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x0063DB20  ObjectClass::HandlePlanningModeClick_Handle  this=ObjectClass  sig=csp ====
BOOL __thiscall HandlePlanningModeClick_Handle(ObjectClass *this, _DWORD *a2)
{
  int v2; // eax
  void *vtable1; // edx
  BOOL result; // eax

  result = 0; /*0x63db54*/
  if ( *a2 >= (int)this->AbstractClass && *a2 < (int)((int)this->AbstractClass + (unsigned int)this->?) ) /*0x63db36*/
  {
    v2 = a2[1]; /*0x63db38*/
    vtable1 = this->?; /*0x63db3b*/
    if ( v2 >= (int)vtable1 && v2 < (int)((int)vtable1 + (unsigned int)this->?) ) /*0x63db49*/
      return 1; /*0x63db2b*/
  }
  return result; /*0x63db50*/
}



// ==== 0x0063DB60  _DynamicVectorClass_PAVPlanningMemberClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_PlanningMemberClass::Destroy(_DynamicVectorClass_PAVPlanningMemberClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63db66*/
  this->m_10 = 0; /*0x63db69*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63db70*/
  {
    __3_YAXPAX_Z(v2); /*0x63db76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63db7e*/
  }
  BYTE1(this->m_C) = 0; /*0x63db81*/
  this->m_8 = 0; /*0x63db84*/
}



// ==== 0x0063DB90  _DynamicVectorClass_PAVPlanningMemberClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningMemberClass::GetItemIndex(
        _DynamicVectorClass_PAVPlanningMemberClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63db90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dba5*/
  else
    return 0; /*0x63db97*/
}



// ==== 0x0063DBB0  _VectorClass_PAVPlanningMemberClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningMemberClass::Get(_VectorClass_PAVPlanningMemberClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dbba*/
}



// ==== 0x0063DBC0  _DynamicVectorClass_PAVPlanningBranchClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_PlanningMemberClass::Destroy_0(_DynamicVectorClass_PAVPlanningBranchClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63dbc6*/
  this->m_10 = 0; /*0x63dbc9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63dbd0*/
  {
    __3_YAXPAX_Z(v2); /*0x63dbd6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63dbde*/
  }
  BYTE1(this->m_C) = 0; /*0x63dbe1*/
  this->m_8 = 0; /*0x63dbe4*/
}



// ==== 0x0063DBF0  _DynamicVectorClass_PAVPlanningBranchClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningMemberClass::GetItemIndex_0(
        _DynamicVectorClass_PAVPlanningBranchClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dbf0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dc05*/
  else
    return 0; /*0x63dbf7*/
}



// ==== 0x0063DC10  _VectorClass_PAVPlanningBranchClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningBranchClass::Clear(_VectorClass_PAVPlanningBranchClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dc1a*/
}



// ==== 0x0063DC20  _DynamicVectorClass_PAVPlanningNodeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall BlowPipe_31::ddtor(_DynamicVectorClass_PAVPlanningNodeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63dc26*/
  this->m_10 = 0; /*0x63dc29*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63dc30*/
  {
    __3_YAXPAX_Z(v2); /*0x63dc36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63dc3e*/
  }
  BYTE1(this->m_C) = 0; /*0x63dc41*/
  this->m_8 = 0; /*0x63dc44*/
}



// ==== 0x0063DC50  _DynamicVectorClass_PAVPlanningNodeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall BlowPipe_31::Write(_DynamicVectorClass_PAVPlanningNodeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dc50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dc65*/
  else
    return 0; /*0x63dc57*/
}



// ==== 0x0063DC70  _VectorClass_PAVPlanningNodeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall BlowPipe_31::Seek(_VectorClass_PAVPlanningNodeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dc7a*/
}



// ==== 0x0063DC80  _DynamicVectorClass_PAVEventClass::Clear  this=DynamicVector  sig=csp ====
void __thiscall BlowPipe_23::Clear(_DynamicVectorClass_PAVEventClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63dc86*/
  this->m_10 = 0; /*0x63dc89*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63dc90*/
  {
    __3_YAXPAX_Z(v2); /*0x63dc96*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63dc9e*/
  }
  BYTE1(this->m_C) = 0; /*0x63dca1*/
  this->m_8 = 0; /*0x63dca4*/
}



// ==== 0x0063DCB0  _DynamicVectorClass_PAVEventClass::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall BlowPipe_23::GetCount(_DynamicVectorClass_PAVEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dcb0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dcc5*/
  else
    return 0; /*0x63dcb7*/
}



// ==== 0x0063DCD0  _VectorClass_PAVEventClass::Seek  this=VectorClass  sig=csp ====
int __thiscall BlowPipe_23::Seek(_VectorClass_PAVEventClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dcda*/
}



// ==== 0x0063DCE0  _DynamicVectorClass_PAVPlanningTokenClass::Clear_0  this=DynamicVector  sig=csp ====
void __thiscall BlowPipe_23::Clear_0(_DynamicVectorClass_PAVPlanningTokenClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x63dce6*/
  this->m_10 = 0; /*0x63dce9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x63dcf0*/
  {
    __3_YAXPAX_Z(v2); /*0x63dcf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63dcfe*/
  }
  BYTE1(this->m_C) = 0; /*0x63dd01*/
  this->m_8 = 0; /*0x63dd04*/
}



// ==== 0x0063DD10  _DynamicVectorClass_PAVPlanningTokenClass::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall BlowPipe_23::GetCount_0(_DynamicVectorClass_PAVPlanningTokenClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dd10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63dd25*/
  else
    return 0; /*0x63dd17*/
}



// ==== 0x0063DD30  _VectorClass_PAVPlanningTokenClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningTokenClass::Get(_VectorClass_PAVPlanningTokenClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x63dd3a*/
}



// ==== 0x0063DD40  _VectorClass_PAVPlanningMemberClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningMemberClass::Add(_VectorClass_PAVPlanningMemberClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63dd42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63dd4d*/
  {
    v3 = 0; /*0x63dd4f*/
    if ( m_8 <= 0 ) /*0x63dd53*/
      return 1; /*0x63dd73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63dd55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63dd5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63dd64*/
    {
      ++v3; /*0x63dd66*/
      ++v4; /*0x63dd67*/
      if ( v3 >= m_8 ) /*0x63dd6c*/
        return 1; /*0x63dd6c*/
    }
  }
  return 0; /*0x63dd6e*/
}



// ==== 0x0063DD80  _VectorClass_PAVPlanningMemberClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningMemberClass::Release(
        _VectorClass_PAVPlanningMemberClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63dd8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63dd96*/
    if ( a3 ) /*0x63dd9c*/
      v4 = a3; /*0x63ddb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63ddae*/
    LOBYTE(this->m_C) = 1; /*0x63ddb6*/
    if ( v4 ) /*0x63ddba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63ddc5*/
      {
        m_8 = this->m_8; /*0x63ddcc*/
        if ( a2 < m_8 ) /*0x63ddd1*/
          m_8 = a2; /*0x63ddd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63ddd9*/
          ++i; /*0x63ddde*/
        if ( BYTE1(this->m_C) ) /*0x63ddeb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63ddf6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63ddfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63de07*/
      this->m_8 = a2; /*0x63de0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63de12*/
      return 1; /*0x63de18*/
    }
    else
    {
      return 0; /*0x63ddbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningMemberClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63de22*/
    return 1; /*0x63de28*/
  }
}



// ==== 0x0063DE30  _VectorClass_PAVPlanningMemberClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PlanningMemberClass::Remove(_VectorClass_PAVPlanningMemberClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x63de3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63de43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63de4b*/
  }
  BYTE1(this->m_C) = 0; /*0x63de4e*/
  this->m_8 = 0; /*0x63de51*/
}



// ==== 0x0063DE60  _VectorClass_PAVPlanningMemberClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningMemberClass::GetSize(_VectorClass_PAVPlanningMemberClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63de60*/
    return 0; /*0x63de68*/
  m_8 = this->m_8; /*0x63de6e*/
  result = 0; /*0x63de71*/
  if ( m_8 <= 0 ) /*0x63de75*/
    return -1; /*0x63de8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63de7b*/
  {
    if ( ++result >= m_8 ) /*0x63de8a*/
      return -1; /*0x63de8a*/
  }
  return result; /*0x63de6a*/
}



// ==== 0x0063DEA0  _VectorClass_PAVPlanningMemberClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningMemberClass::GetCapacity(
        _VectorClass_PAVPlanningMemberClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63dea0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63deb5*/
  else
    return 0; /*0x63dea7*/
}



// ==== 0x0063DEC0  VectorClass::ExecuteActionPlanManager_Helper_63DEC0  this=VectorClass  sig=csp ====
_DWORD *__thiscall ExecuteActionPlanManager_Helper_63DEC0(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x63dec9*/
  this->Capacity = a2; /*0x63ded0*/
  this->IsInitialized = 1; /*0x63ded3*/
  this->IsAllocated = 0; /*0x63ded7*/
  this->vtable0 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x63dedb*/
  if ( a2 ) /*0x63dee1*/
  {
    if ( a3 ) /*0x63dee9*/
    {
      this->Items = (void *)a3; /*0x63deeb*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x63defc*/
      this->IsAllocated = 1; /*0x63deff*/
    }
  }
  this->vtable0 = &DynamicVectorClass<PlanningMemberClass *>::`vftable'; /*0x63df03*/
  *((_DWORD *)this + 5) = 10; /*0x63df09*/
  this->Items = 0; /*0x63df10*/
  return &this->vtable0; /*0x63df19*/
}



// ==== 0x0063DF20  _DynamicVectorClass_PAVPlanningMemberClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_PlanningMemberClass::SetCapacity(
        _DynamicVectorClass_PAVPlanningMemberClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63df2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63df32*/
    if ( a3 ) /*0x63df38*/
      v4 = a3; /*0x63df4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63df4a*/
    LOBYTE(this->m_C) = 1; /*0x63df52*/
    if ( !v4 ) /*0x63df56*/
      return 0; /*0x63dfca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63df58*/
    {
      m_8 = this->m_8; /*0x63df5f*/
      if ( a2 < m_8 ) /*0x63df64*/
        m_8 = a2; /*0x63df66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63df6c*/
        ++i; /*0x63df71*/
      if ( BYTE1(this->m_C) ) /*0x63df7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63df89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63df91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63df9a*/
    this->m_8 = a2; /*0x63dfa2*/
    BYTE1(this->m_C) = a3 == 0; /*0x63dfa5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPlanningMemberClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63dfae*/
  }
  v7 = this->m_8; /*0x63dfb1*/
  if ( v7 < this->m_10 ) /*0x63dfb9*/
    this->m_10 = v7; /*0x63dfbb*/
  return 1; /*0x63dfbe*/
}



// ==== 0x0063DFD0  FactoryClass::RemoveItemAt  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::RemoveItemAt(FactoryClass *this, int a2)
{
  int result; // eax
  int uniqueId; // ecx
  int v5; // ecx

  result = (*((int (__thiscall **)(FactoryClass *, int))this->AbstractClass + 4))(this, a2); /*0x63dfdc*/
  if ( result == -1 || (uniqueId = this->?, result >= uniqueId) ) /*0x63dfe9*/
  {
    LOBYTE(result) = 0; /*0x63e00b*/
  }
  else
  {
    v5 = uniqueId - 1; /*0x63dfeb*/
    for ( this->? = v5; result < this->?; *((_DWORD *)this->? + result - 1) = *((_DWORD *)this->? + result) ) /*0x63dff1*/
      ++result; /*0x63dff6*/
    LOBYTE(result) = 1; /*0x63e005*/
  }
  return result; /*0x63e007*/
}



// ==== 0x0063E020  _DynamicVectorClass_PAVPlanningMemberClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_PlanningMemberClass::FindItemIndex(
        _DynamicVectorClass_PAVPlanningMemberClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63e020*/
  result = 0; /*0x63e023*/
  if ( m_10 <= 0 ) /*0x63e028*/
    return -1; /*0x63e03f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e02e*/
  {
    if ( ++result >= m_10 ) /*0x63e03d*/
      return -1; /*0x63e03d*/
  }
  return result; /*0x63e042*/
}



// ==== 0x0063E050  _VectorClass_PAVPlanningBranchClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningBranchClass::Add(_VectorClass_PAVPlanningBranchClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63e052*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e05d*/
  {
    v3 = 0; /*0x63e05f*/
    if ( m_8 <= 0 ) /*0x63e063*/
      return 1; /*0x63e083*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63e065*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e06b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e074*/
    {
      ++v3; /*0x63e076*/
      ++v4; /*0x63e077*/
      if ( v3 >= m_8 ) /*0x63e07c*/
        return 1; /*0x63e07c*/
    }
  }
  return 0; /*0x63e07e*/
}



// ==== 0x0063E090  _VectorClass_PAVPlanningBranchClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningBranchClass::Release(
        _VectorClass_PAVPlanningBranchClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e09c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e0a6*/
    if ( a3 ) /*0x63e0ac*/
      v4 = a3; /*0x63e0c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e0be*/
    LOBYTE(this->m_C) = 1; /*0x63e0c6*/
    if ( v4 ) /*0x63e0ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e0d5*/
      {
        m_8 = this->m_8; /*0x63e0dc*/
        if ( a2 < m_8 ) /*0x63e0e1*/
          m_8 = a2; /*0x63e0e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e0e9*/
          ++i; /*0x63e0ee*/
        if ( BYTE1(this->m_C) ) /*0x63e0fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e106*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63e10e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63e117*/
      this->m_8 = a2; /*0x63e11f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63e122*/
      return 1; /*0x63e128*/
    }
    else
    {
      return 0; /*0x63e0cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningBranchClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e132*/
    return 1; /*0x63e138*/
  }
}



// ==== 0x0063E140  ?$VectorClass@PAVPlanningBranchClass@@::Cleanup2  this=VectorClass  sig=csp ====
int __thiscall VectorClass::Cleanup2(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 4); /*0x63e146*/
  if ( result && *(_BYTE *)(this + 13) ) /*0x63e14d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x63e153*/
    *(_DWORD *)(this + 4) = 0; /*0x63e15b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x63e15e*/
  *(_DWORD *)(this + 8) = 0; /*0x63e161*/
  return result; /*0x63e164*/
}



// ==== 0x0063E170  _VectorClass_PAVPlanningBranchClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningBranchClass::GetSize(_VectorClass_PAVPlanningBranchClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63e170*/
    return 0; /*0x63e178*/
  m_8 = this->m_8; /*0x63e17e*/
  result = 0; /*0x63e181*/
  if ( m_8 <= 0 ) /*0x63e185*/
    return -1; /*0x63e19c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e18b*/
  {
    if ( ++result >= m_8 ) /*0x63e19a*/
      return -1; /*0x63e19a*/
  }
  return result; /*0x63e17a*/
}



// ==== 0x0063E1B0  _VectorClass_PAVPlanningBranchClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningBranchClass::Remove(_VectorClass_PAVPlanningBranchClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63e1b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63e1c5*/
  else
    return 0; /*0x63e1b7*/
}



// ==== 0x0063E1D0  VectorClass::ExecuteActionPlanManager_Helper_63E1D0  this=VectorClass  sig=csp ====
_DWORD *__thiscall ExecuteActionPlanManager_Helper_63E1D0(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x63e1d9*/
  this->Capacity = a2; /*0x63e1e0*/
  this->IsInitialized = 1; /*0x63e1e3*/
  this->IsAllocated = 0; /*0x63e1e7*/
  this->vtable0 = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63e1eb*/
  if ( a2 ) /*0x63e1f1*/
  {
    if ( a3 ) /*0x63e1f9*/
    {
      this->Items = (void *)a3; /*0x63e1fb*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x63e20c*/
      this->IsAllocated = 1; /*0x63e20f*/
    }
  }
  this->vtable0 = &DynamicVectorClass<PlanningBranchClass *>::`vftable'; /*0x63e213*/
  *((_DWORD *)this + 5) = 10; /*0x63e219*/
  this->Items = 0; /*0x63e220*/
  return &this->vtable0; /*0x63e229*/
}



// ==== 0x0063E230  _DynamicVectorClass_PAVPlanningBranchClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_PlanningMemberClass::SetCapacity_0(
        _DynamicVectorClass_PAVPlanningBranchClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e23c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e242*/
    if ( a3 ) /*0x63e248*/
      v4 = a3; /*0x63e25e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e25a*/
    LOBYTE(this->m_C) = 1; /*0x63e262*/
    if ( !v4 ) /*0x63e266*/
      return 0; /*0x63e2da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63e268*/
    {
      m_8 = this->m_8; /*0x63e26f*/
      if ( a2 < m_8 ) /*0x63e274*/
        m_8 = a2; /*0x63e276*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e27c*/
        ++i; /*0x63e281*/
      if ( BYTE1(this->m_C) ) /*0x63e28e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e299*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63e2a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63e2aa*/
    this->m_8 = a2; /*0x63e2b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x63e2b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPlanningBranchClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e2be*/
  }
  v7 = this->m_8; /*0x63e2c1*/
  if ( v7 < this->m_10 ) /*0x63e2c9*/
    this->m_10 = v7; /*0x63e2cb*/
  return 1; /*0x63e2ce*/
}



// ==== 0x0063E2E0  _DynamicVectorClass_PAVPlanningBranchClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_PlanningMemberClass::FindItemIndex_0(
        _DynamicVectorClass_PAVPlanningBranchClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63e2e0*/
  result = 0; /*0x63e2e3*/
  if ( m_10 <= 0 ) /*0x63e2e8*/
    return -1; /*0x63e2ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e2ee*/
  {
    if ( ++result >= m_10 ) /*0x63e2fd*/
      return -1; /*0x63e2fd*/
  }
  return result; /*0x63e302*/
}



// ==== 0x0063E310  _VectorClass_PAVPlanningNodeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall BlowPipe_31::AddRef(_VectorClass_PAVPlanningNodeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63e312*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e31d*/
  {
    v3 = 0; /*0x63e31f*/
    if ( m_8 <= 0 ) /*0x63e323*/
      return 1; /*0x63e343*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63e325*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e32b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e334*/
    {
      ++v3; /*0x63e336*/
      ++v4; /*0x63e337*/
      if ( v3 >= m_8 ) /*0x63e33c*/
        return 1; /*0x63e33c*/
    }
  }
  return 0; /*0x63e33e*/
}



// ==== 0x0063E350  _VectorClass_PAVPlanningNodeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall BlowPipe_23::SetCapacity(_VectorClass_PAVPlanningNodeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e35c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e366*/
    if ( a3 ) /*0x63e36c*/
      v4 = a3; /*0x63e382*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e37e*/
    LOBYTE(this->m_C) = 1; /*0x63e386*/
    if ( v4 ) /*0x63e38a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e395*/
      {
        m_8 = this->m_8; /*0x63e39c*/
        if ( a2 < m_8 ) /*0x63e3a1*/
          m_8 = a2; /*0x63e3a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e3a9*/
          ++i; /*0x63e3ae*/
        if ( BYTE1(this->m_C) ) /*0x63e3bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e3c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63e3ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63e3d7*/
      this->m_8 = a2; /*0x63e3df*/
      BYTE1(this->m_C) = a3 == 0; /*0x63e3e2*/
      return 1; /*0x63e3e8*/
    }
    else
    {
      return 0; /*0x63e38f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningNodeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e3f2*/
    return 1; /*0x63e3f8*/
  }
}



// ==== 0x0063E400  _VectorClass_PAVPlanningNodeClass::Clear_1  this=VectorClass  sig=csp ====
void __thiscall BlowPipe_23::Clear_1(_VectorClass_PAVPlanningNodeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x63e40d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e413*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63e41b*/
  }
  BYTE1(this->m_C) = 0; /*0x63e41e*/
  this->m_8 = 0; /*0x63e421*/
}



// ==== 0x0063E430  _VectorClass_PAVPlanningNodeClass::FindItemIndex  this=VectorClass  sig=csp ====
int __thiscall BlowPipe_23::FindItemIndex(_VectorClass_PAVPlanningNodeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63e430*/
    return 0; /*0x63e438*/
  m_8 = this->m_8; /*0x63e43e*/
  result = 0; /*0x63e441*/
  if ( m_8 <= 0 ) /*0x63e445*/
    return -1; /*0x63e45c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e44b*/
  {
    if ( ++result >= m_8 ) /*0x63e45a*/
      return -1; /*0x63e45a*/
  }
  return result; /*0x63e43a*/
}



// ==== 0x0063E470  _VectorClass_PAVPlanningNodeClass::GetCount_1  this=VectorClass  sig=csp ====
unsigned int __thiscall BlowPipe_23::GetCount_1(_VectorClass_PAVPlanningNodeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63e470*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63e485*/
  else
    return 0; /*0x63e477*/
}



// ==== 0x0063E490  _DynamicVectorClass_PAVPlanningNodeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall BlowPipe_31::Release(_DynamicVectorClass_PAVPlanningNodeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e49c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e4a2*/
    if ( a3 ) /*0x63e4a8*/
      v4 = a3; /*0x63e4be*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e4ba*/
    LOBYTE(this->m_C) = 1; /*0x63e4c2*/
    if ( !v4 ) /*0x63e4c6*/
      return 0; /*0x63e53a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63e4c8*/
    {
      m_8 = this->m_8; /*0x63e4cf*/
      if ( a2 < m_8 ) /*0x63e4d4*/
        m_8 = a2; /*0x63e4d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e4dc*/
        ++i; /*0x63e4e1*/
      if ( BYTE1(this->m_C) ) /*0x63e4ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e4f9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63e501*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63e50a*/
    this->m_8 = a2; /*0x63e512*/
    BYTE1(this->m_C) = a3 == 0; /*0x63e515*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPlanningNodeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e51e*/
  }
  v7 = this->m_8; /*0x63e521*/
  if ( v7 < this->m_10 ) /*0x63e529*/
    this->m_10 = v7; /*0x63e52b*/
  return 1; /*0x63e52e*/
}



// ==== 0x0063E540  VectorClass::Append  this=VectorClass  sig=csp ====
int __thiscall VectorClass::Append(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int result; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x63e543*/
  result = this->Count; /*0x63e546*/
  if ( result < Capacity /*0x63e56d*/
    || (this->IsAllocated[0] || !Capacity)
    && (result = this->CapacityIncrement, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vtable0 + 8))(
                   this,
                   Capacity + result,
                   0),
        (_BYTE)result) )
  {
    result = this->Count; /*0x63e575*/
    Items = this->Items; /*0x63e578*/
    this->Count = result + 1; /*0x63e57e*/
    *(_DWORD *)(Items + 4 * result) = *a2; /*0x63e588*/
    LOBYTE(result) = 1; /*0x63e58b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x63e56f*/
  }
  return result; /*0x63e571*/
}



// ==== 0x0063E590  Array::RemoveAt  this=Array  sig=csp ====
int __thiscall Array::RemoveAt(Array *this, int a2)
{
  char *Array_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  Array_field_0x10 = (char *)this->Array_field_0x10; /*0x63e590*/
  result = a2; /*0x63e593*/
  if ( a2 >= (int)Array_field_0x10 ) /*0x63e599*/
  {
    LOBYTE(result) = 0; /*0x63e5bc*/
  }
  else
  {
    v4 = Array_field_0x10 - 1; /*0x63e59b*/
    this->Array_field_0x10 = v4; /*0x63e59e*/
    if ( a2 < (int)v4 ) /*0x63e5a1*/
    {
      do /*0x63e5b4*/
      {
        ++result; /*0x63e5a7*/
        *((_DWORD *)this->Array_field_0x4 + result - 1) = *((_DWORD *)this->Array_field_0x4 + result); /*0x63e5ab*/
      }
      while ( result < (int)this->Array_field_0x10 ); /*0x63e5b4*/
    }
    LOBYTE(result) = 1; /*0x63e5b7*/
  }
  return result; /*0x63e5b9*/
}



// ==== 0x0063E5D0  ObjectClass::Team_Destroy  this=ObjectClass  sig=csp ====
char __thiscall Team_Destroy(ObjectClass *this, int a2)
{
  int v3; // eax
  int uniqueId; // ecx
  int v5; // ecx

  v3 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 4))(this, a2); /*0x63e5dc*/
  if ( v3 == -1 ) /*0x63e5e2*/
    return 0; /*0x63e5e2*/
  uniqueId = this->?; /*0x63e5e4*/
  if ( v3 >= uniqueId ) /*0x63e5e9*/
    return 0; /*0x63e60b*/
  v5 = uniqueId - 1; /*0x63e5eb*/
  for ( this->? = v5; v3 < this->?; *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3) ) /*0x63e5f1*/
    ++v3; /*0x63e5f6*/
  return 1; /*0x63e607*/
}



// ==== 0x0063E620  _DynamicVectorClass_PAVPlanningNodeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall BlowPipe_31::Read(_DynamicVectorClass_PAVPlanningNodeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63e620*/
  result = 0; /*0x63e623*/
  if ( m_10 <= 0 ) /*0x63e628*/
    return -1; /*0x63e63f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e62e*/
  {
    if ( ++result >= m_10 ) /*0x63e63d*/
      return -1; /*0x63e63d*/
  }
  return result; /*0x63e642*/
}



// ==== 0x0063E650  _VectorClass_PAVEventClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall BlowPipe_23::AddRef(_VectorClass_PAVEventClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63e652*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e65d*/
  {
    v3 = 0; /*0x63e65f*/
    if ( m_8 <= 0 ) /*0x63e663*/
      return 1; /*0x63e683*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63e665*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e66b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e674*/
    {
      ++v3; /*0x63e676*/
      ++v4; /*0x63e677*/
      if ( v3 >= m_8 ) /*0x63e67c*/
        return 1; /*0x63e67c*/
    }
  }
  return 0; /*0x63e67e*/
}



// ==== 0x0063E690  _VectorClass_PAVEventClass::Release  this=VectorClass  sig=csp ====
char __thiscall BlowPipe_23::Release(_VectorClass_PAVEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e69c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e6a6*/
    if ( a3 ) /*0x63e6ac*/
      v4 = a3; /*0x63e6c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e6be*/
    LOBYTE(this->m_C) = 1; /*0x63e6c6*/
    if ( v4 ) /*0x63e6ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e6d5*/
      {
        m_8 = this->m_8; /*0x63e6dc*/
        if ( a2 < m_8 ) /*0x63e6e1*/
          m_8 = a2; /*0x63e6e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e6e9*/
          ++i; /*0x63e6ee*/
        if ( BYTE1(this->m_C) ) /*0x63e6fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e706*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63e70e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63e717*/
      this->m_8 = a2; /*0x63e71f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63e722*/
      return 1; /*0x63e728*/
    }
    else
    {
      return 0; /*0x63e6cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e732*/
    return 1; /*0x63e738*/
  }
}



// ==== 0x0063E740  _VectorClass_PAVEventClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall BlowPipe_23::ddtor(_VectorClass_PAVEventClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x63e74d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e753*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63e75b*/
  }
  BYTE1(this->m_C) = 0; /*0x63e75e*/
  this->m_8 = 0; /*0x63e761*/
}



// ==== 0x0063E770  _VectorClass_PAVEventClass::Read  this=VectorClass  sig=csp ====
int __thiscall BlowPipe_23::Read(_VectorClass_PAVEventClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63e770*/
    return 0; /*0x63e778*/
  m_8 = this->m_8; /*0x63e77e*/
  result = 0; /*0x63e781*/
  if ( m_8 <= 0 ) /*0x63e785*/
    return -1; /*0x63e79c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e78b*/
  {
    if ( ++result >= m_8 ) /*0x63e79a*/
      return -1; /*0x63e79a*/
  }
  return result; /*0x63e77a*/
}



// ==== 0x0063E7B0  _VectorClass_PAVEventClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall BlowPipe_23::Write(_VectorClass_PAVEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63e7b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63e7c5*/
  else
    return 0; /*0x63e7b7*/
}



// ==== 0x0063E7D0  _DynamicVectorClass_PAVEventClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall BlowPipe_23::SetCapacity_0(_DynamicVectorClass_PAVEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e7dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e7e2*/
    if ( a3 ) /*0x63e7e8*/
      v4 = a3; /*0x63e7fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e7fa*/
    LOBYTE(this->m_C) = 1; /*0x63e802*/
    if ( !v4 ) /*0x63e806*/
      return 0; /*0x63e87a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63e808*/
    {
      m_8 = this->m_8; /*0x63e80f*/
      if ( a2 < m_8 ) /*0x63e814*/
        m_8 = a2; /*0x63e816*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e81c*/
        ++i; /*0x63e821*/
      if ( BYTE1(this->m_C) ) /*0x63e82e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63e839*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63e841*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63e84a*/
    this->m_8 = a2; /*0x63e852*/
    BYTE1(this->m_C) = a3 == 0; /*0x63e855*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63e85e*/
  }
  v7 = this->m_8; /*0x63e861*/
  if ( v7 < this->m_10 ) /*0x63e869*/
    this->m_10 = v7; /*0x63e86b*/
  return 1; /*0x63e86e*/
}



// ==== 0x0063E880  SidebarClass::addToList  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::addToList(SidebarClass *this, _DWORD *a2)
{
  void *SidebarClass_field_0x8; // ecx
  void *SidebarClass_field_0x14; // eax
  int v6; // eax
  _DWORD *SidebarClass_field_0x4; // edx

  SidebarClass_field_0x8 = this->SidebarClass_field_0x8; /*0x63e883*/
  if ( *(_DWORD *)&this->__pad_C[4] >= (int)SidebarClass_field_0x8 ) /*0x63e88b*/
  {
    if ( !this->__pad_C[1] && SidebarClass_field_0x8 ) /*0x63e896*/
      return 0; /*0x63e896*/
    SidebarClass_field_0x14 = this->SidebarClass_field_0x14; /*0x63e898*/
    if ( (int)SidebarClass_field_0x14 <= 0 /*0x63e8a8*/
      || !(*((unsigned __int8 (__thiscall **)(SidebarClass *, int, _DWORD))this->SidebarClass_field_0x0 + 2))(
            this,
            (int)SidebarClass_field_0x14 + (_DWORD)SidebarClass_field_0x8,
            0) )
    {
      return 0; /*0x63e8af*/
    }
  }
  v6 = *(_DWORD *)&this->__pad_C[4]; /*0x63e8b5*/
  SidebarClass_field_0x4 = this->SidebarClass_field_0x4; /*0x63e8b8*/
  *(_DWORD *)&this->__pad_C[4] = v6 + 1; /*0x63e8be*/
  SidebarClass_field_0x4[v6] = *a2; /*0x63e8c8*/
  return 1; /*0x63e8b1*/
}



// ==== 0x0063E8D0  _DynamicVectorClass_PAVEventClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall BlowPipe_23::FindItemIndex_0(_DynamicVectorClass_PAVEventClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63e8d0*/
  result = 0; /*0x63e8d3*/
  if ( m_10 <= 0 ) /*0x63e8d8*/
    return -1; /*0x63e8ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63e8de*/
  {
    if ( ++result >= m_10 ) /*0x63e8ed*/
      return -1; /*0x63e8ed*/
  }
  return result; /*0x63e8f2*/
}



// ==== 0x0063E900  VectorClass::EraseAt  this=VectorClass  sig=csp ====
int __thiscall VectorClass::EraseAt(DynamicVectorClass *this, int a2)
{
  int result; // eax
  int Count; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(DynamicVectorClass *, int))(this->vtable0 + 16))(this, a2); /*0x63e90c*/
  if ( result == -1 || (Count = this->Count, result >= Count) ) /*0x63e919*/
  {
    LOBYTE(result) = 0; /*0x63e93b*/
  }
  else
  {
    v5 = Count - 1; /*0x63e91b*/
    for ( this->Count = v5; /*0x63e921*/
          result < this->Count;
          *(_DWORD *)(this->Items + 4 * result - 4) = *(_DWORD *)(this->Items + 4 * result) )
    {
      ++result; /*0x63e926*/
    }
    LOBYTE(result) = 1; /*0x63e935*/
  }
  return result; /*0x63e937*/
}



// ==== 0x0063E950  _VectorClass_PAVPlanningTokenClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningTokenClass::Add(_VectorClass_PAVPlanningTokenClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x63e952*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x63e95d*/
  {
    v3 = 0; /*0x63e95f*/
    if ( m_8 <= 0 ) /*0x63e963*/
      return 1; /*0x63e983*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x63e965*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e96b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e974*/
    {
      ++v3; /*0x63e976*/
      ++v4; /*0x63e977*/
      if ( v3 >= m_8 ) /*0x63e97c*/
        return 1; /*0x63e97c*/
    }
  }
  return 0; /*0x63e97e*/
}



// ==== 0x0063E990  _VectorClass_PAVPlanningTokenClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PlanningTokenClass::Release(
        _VectorClass_PAVPlanningTokenClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e99c*/
  {
    LOBYTE(this->m_C) = 0; /*0x63e9a6*/
    if ( a3 ) /*0x63e9ac*/
      v4 = a3; /*0x63e9c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63e9be*/
    LOBYTE(this->m_C) = 1; /*0x63e9c6*/
    if ( v4 ) /*0x63e9ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x63e9d5*/
      {
        m_8 = this->m_8; /*0x63e9dc*/
        if ( a2 < m_8 ) /*0x63e9e1*/
          m_8 = a2; /*0x63e9e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63e9e9*/
          ++i; /*0x63e9ee*/
        if ( BYTE1(this->m_C) ) /*0x63e9fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63ea06*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x63ea0e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x63ea17*/
      this->m_8 = a2; /*0x63ea1f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63ea22*/
      return 1; /*0x63ea28*/
    }
    else
    {
      return 0; /*0x63e9cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPlanningTokenClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63ea32*/
    return 1; /*0x63ea38*/
  }
}



// ==== 0x0063EA40  _VectorClass_PAVPlanningTokenClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PlanningTokenClass::Remove(_VectorClass_PAVPlanningTokenClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x63ea4d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63ea53*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ea5b*/
  }
  BYTE1(this->m_C) = 0; /*0x63ea5e*/
  this->m_8 = 0; /*0x63ea61*/
}



// ==== 0x0063EA70  _VectorClass_PAVPlanningTokenClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PlanningTokenClass::GetSize(_VectorClass_PAVPlanningTokenClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x63ea70*/
    return 0; /*0x63ea78*/
  m_8 = this->m_8; /*0x63ea7e*/
  result = 0; /*0x63ea81*/
  if ( m_8 <= 0 ) /*0x63ea85*/
    return -1; /*0x63ea9c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63ea8b*/
  {
    if ( ++result >= m_8 ) /*0x63ea9a*/
      return -1; /*0x63ea9a*/
  }
  return result; /*0x63ea7a*/
}



// ==== 0x0063EAB0  _VectorClass_PAVPlanningTokenClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PlanningTokenClass::GetCapacity(
        _VectorClass_PAVPlanningTokenClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x63eab0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x63eac5*/
  else
    return 0; /*0x63eab7*/
}



// ==== 0x0063EAD0  _DynamicVectorClass_PAVPlanningTokenClass::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall BlowPipe_23::SetCapacity_1(_DynamicVectorClass_PAVPlanningTokenClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63eadc*/
  {
    LOBYTE(this->m_C) = 0; /*0x63eae2*/
    if ( a3 ) /*0x63eae8*/
      v4 = a3; /*0x63eafe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x63eafa*/
    LOBYTE(this->m_C) = 1; /*0x63eb02*/
    if ( !v4 ) /*0x63eb06*/
      return 0; /*0x63eb7a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x63eb08*/
    {
      m_8 = this->m_8; /*0x63eb0f*/
      if ( a2 < m_8 ) /*0x63eb14*/
        m_8 = a2; /*0x63eb16*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x63eb1c*/
        ++i; /*0x63eb21*/
      if ( BYTE1(this->m_C) ) /*0x63eb2e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x63eb39*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x63eb41*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x63eb4a*/
    this->m_8 = a2; /*0x63eb52*/
    BYTE1(this->m_C) = a3 == 0; /*0x63eb55*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPlanningTokenClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x63eb5e*/
  }
  v7 = this->m_8; /*0x63eb61*/
  if ( v7 < this->m_10 ) /*0x63eb69*/
    this->m_10 = v7; /*0x63eb6b*/
  return 1; /*0x63eb6e*/
}



// ==== 0x0063EB80  ScriptActionVector::PushBack  this=ScriptActionVector  sig=csp ====
int __thiscall ScriptActionVector::PushBack(ScriptActionVector *this, _DWORD *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = *((_DWORD *)this + 2); /*0x63eb83*/
  result = *((_DWORD *)this + 4); /*0x63eb86*/
  if ( result < v3 /*0x63ebad*/
    || (*((_BYTE *)this + 13) || !v3)
    && (result = *((_DWORD *)this + 5), result > 0)
    && (result = (*(int (__thiscall **)(ScriptActionVector *, int, _DWORD))(*(_DWORD *)this + 8))(this, v3 + result, 0),
        (_BYTE)result) )
  {
    result = *((_DWORD *)this + 4); /*0x63ebb5*/
    v5 = *((_DWORD *)this + 1); /*0x63ebb8*/
    *((_DWORD *)this + 4) = result + 1; /*0x63ebbe*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x63ebc8*/
    LOBYTE(result) = 1; /*0x63ebcb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x63ebaf*/
  }
  return result; /*0x63ebb1*/
}



// ==== 0x0063EBD0  PlanningNodeClass::RemoveFromArray  this=PlanningNodeClass  sig=csp ====
char __thiscall PlanningNodeClass::RemoveFromArray(PlanningNodeClass *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  v3 = (*(int (__thiscall **)(PlanningNodeClass *, int))(*(_DWORD *)this->__pad_0 + 16))(this, a2); /*0x63ebdc*/
  if ( v3 == -1 ) /*0x63ebe2*/
    return 0; /*0x63ebe2*/
  v4 = this->q004; /*0x63ebe4*/
  if ( v3 >= v4 ) /*0x63ebe9*/
    return 0; /*0x63ec0b*/
  v5 = v4 - 1; /*0x63ebeb*/
  for ( this->q004 = v5; /*0x63ebf1*/
        v3 < this->q004;
        *(_DWORD *)(this->PlanningNodeClass_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(this->PlanningNodeClass_field_0x04
                                                                                 + 4 * v3) )
  {
    ++v3; /*0x63ebf6*/
  }
  return 1; /*0x63ec07*/
}



// ==== 0x0063EC20  _DynamicVectorClass_PAVPlanningTokenClass::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall BlowPipe_23::FindItemIndex_1(_DynamicVectorClass_PAVPlanningTokenClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x63ec20*/
  result = 0; /*0x63ec23*/
  if ( m_10 <= 0 ) /*0x63ec28*/
    return -1; /*0x63ec3f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x63ec2e*/
  {
    if ( ++result >= m_10 ) /*0x63ec3d*/
      return -1; /*0x63ec3d*/
  }
  return result; /*0x63ec42*/
}



// ==== 0x0063EC50  _VectorClass_PAVPlanningMemberClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningMemberClass::QueryInterface(
        _VectorClass_PAVPlanningMemberClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ec53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x63ec56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ec60*/
  {
    __3_YAXPAX_Z(v3); /*0x63ec68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ec70*/
  }
  BYTE1(this->m_C) = 0; /*0x63ec7b*/
  this->m_8 = 0; /*0x63ec81*/
  if ( (a2 & 1) != 0 ) /*0x63ec88*/
    __3_YAXPAX_Z(this); /*0x63ec8b*/
  return this->__pad_0; /*0x63ec95*/
}



// ==== 0x0063ECA0  _DynamicVectorClass_PAVPlanningMemberClass::Constructor_VectorClass_PlanningMemberClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningMemberClass___(
        _DynamicVectorClass_PAVPlanningMemberClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63eca3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x63eca6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ecb0*/
  {
    __3_YAXPAX_Z(v3); /*0x63ecb8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ecc0*/
  }
  BYTE1(this->m_C) = 0; /*0x63eccb*/
  this->m_8 = 0; /*0x63ecd1*/
  if ( (a2 & 1) != 0 ) /*0x63ecd8*/
    __3_YAXPAX_Z(this); /*0x63ecdb*/
  return this->__pad_0; /*0x63ece5*/
}



// ==== 0x0063ECF0  _VectorClass_PAVPlanningBranchClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningBranchClass::QueryInterface(
        _VectorClass_PAVPlanningBranchClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ecf3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63ecf6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ed00*/
  {
    __3_YAXPAX_Z(v3); /*0x63ed08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ed10*/
  }
  BYTE1(this->m_C) = 0; /*0x63ed1b*/
  this->m_8 = 0; /*0x63ed21*/
  if ( (a2 & 1) != 0 ) /*0x63ed28*/
    __3_YAXPAX_Z(this); /*0x63ed2b*/
  return this->__pad_0; /*0x63ed35*/
}



// ==== 0x0063ED40  _DynamicVectorClass_PAVPlanningBranchClass::Constructor_VectorClass_PlanningBranchClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningMemberClass::Constructor_VectorClass_PlanningBranchClass___(
        _DynamicVectorClass_PAVPlanningBranchClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ed43*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63ed46*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ed50*/
  {
    __3_YAXPAX_Z(v3); /*0x63ed58*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ed60*/
  }
  BYTE1(this->m_C) = 0; /*0x63ed6b*/
  this->m_8 = 0; /*0x63ed71*/
  if ( (a2 & 1) != 0 ) /*0x63ed78*/
    __3_YAXPAX_Z(this); /*0x63ed7b*/
  return this->__pad_0; /*0x63ed85*/
}



// ==== 0x0063ED90  _VectorClass_PAVPlanningNodeClass::Destructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall BlowPipe_23::Destructor(_VectorClass_PAVPlanningNodeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ed93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x63ed96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63eda0*/
  {
    __3_YAXPAX_Z(v3); /*0x63eda8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63edb0*/
  }
  BYTE1(this->m_C) = 0; /*0x63edbb*/
  this->m_8 = 0; /*0x63edc1*/
  if ( (a2 & 1) != 0 ) /*0x63edc8*/
    __3_YAXPAX_Z(this); /*0x63edcb*/
  return this->__pad_0; /*0x63edd5*/
}



// ==== 0x0063EDE0  _DynamicVectorClass_PAVPlanningNodeClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BlowPipe_31::QueryInterface(_DynamicVectorClass_PAVPlanningNodeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ede3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x63ede6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63edf0*/
  {
    __3_YAXPAX_Z(v3); /*0x63edf8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ee00*/
  }
  BYTE1(this->m_C) = 0; /*0x63ee0b*/
  this->m_8 = 0; /*0x63ee11*/
  if ( (a2 & 1) != 0 ) /*0x63ee18*/
    __3_YAXPAX_Z(this); /*0x63ee1b*/
  return this->__pad_0; /*0x63ee25*/
}



// ==== 0x0063EE30  _VectorClass_PAVEventClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall BlowPipe_23::QueryInterface(_VectorClass_PAVEventClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ee33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EventClass *>::`vftable'; /*0x63ee36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ee40*/
  {
    __3_YAXPAX_Z(v3); /*0x63ee48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ee50*/
  }
  BYTE1(this->m_C) = 0; /*0x63ee5b*/
  this->m_8 = 0; /*0x63ee61*/
  if ( (a2 & 1) != 0 ) /*0x63ee68*/
    __3_YAXPAX_Z(this); /*0x63ee6b*/
  return this->__pad_0; /*0x63ee75*/
}



// ==== 0x0063EE80  _DynamicVectorClass_PAVEventClass::Destructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BlowPipe_23::Destructor_0(_DynamicVectorClass_PAVEventClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ee83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<EventClass *>::`vftable'; /*0x63ee86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ee90*/
  {
    __3_YAXPAX_Z(v3); /*0x63ee98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63eea0*/
  }
  BYTE1(this->m_C) = 0; /*0x63eeab*/
  this->m_8 = 0; /*0x63eeb1*/
  if ( (a2 & 1) != 0 ) /*0x63eeb8*/
    __3_YAXPAX_Z(this); /*0x63eebb*/
  return this->__pad_0; /*0x63eec5*/
}



// ==== 0x0063EED0  _VectorClass_PAVPlanningTokenClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PlanningTokenClass::QueryInterface(
        _VectorClass_PAVPlanningTokenClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63eed3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningTokenClass *>::`vftable'; /*0x63eed6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63eee0*/
  {
    __3_YAXPAX_Z(v3); /*0x63eee8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63eef0*/
  }
  BYTE1(this->m_C) = 0; /*0x63eefb*/
  this->m_8 = 0; /*0x63ef01*/
  if ( (a2 & 1) != 0 ) /*0x63ef08*/
    __3_YAXPAX_Z(this); /*0x63ef0b*/
  return this->__pad_0; /*0x63ef15*/
}



// ==== 0x0063EF20  _DynamicVectorClass_PAVPlanningTokenClass::Destructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BlowPipe_23::Destructor_1(_DynamicVectorClass_PAVPlanningTokenClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x63ef23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PlanningTokenClass *>::`vftable'; /*0x63ef26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x63ef30*/
  {
    __3_YAXPAX_Z(v3); /*0x63ef38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x63ef40*/
  }
  BYTE1(this->m_C) = 0; /*0x63ef4b*/
  this->m_8 = 0; /*0x63ef51*/
  if ( (a2 & 1) != 0 ) /*0x63ef58*/
    __3_YAXPAX_Z(this); /*0x63ef5b*/
  return this->__pad_0; /*0x63ef65*/
}



// ==== 0x0063EF70  Vector4::EraseAt_Copy  this=Vector4  sig=csp ====
int __thiscall Vector4::EraseAt_Copy(Vector4 *this, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // edx

  v2 = this->q004; /*0x63ef70*/
  result = a2; /*0x63ef73*/
  if ( a2 >= v2 ) /*0x63ef79*/
  {
    LOBYTE(result) = 0; /*0x63ef9c*/
  }
  else
  {
    v4 = v2 - 1; /*0x63ef7b*/
    this->q004 = v4; /*0x63ef7e*/
    if ( a2 < v4 ) /*0x63ef81*/
    {
      do /*0x63ef94*/
      {
        ++result; /*0x63ef87*/
        *(_DWORD *)(this->Vector4_field_0x04 + 4 * result - 4) = *(_DWORD *)(this->Vector4_field_0x04 + 4 * result); /*0x63ef8b*/
      }
      while ( result < this->q004 ); /*0x63ef94*/
    }
    LOBYTE(result) = 1; /*0x63ef97*/
  }
  return result; /*0x63ef99*/
}



// ==== 0x0063EFB0  VectorClass::Object_Set  this=VectorClass  sig=csp ====
_DWORD *__thiscall Object_Set(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x63efbb*/
  this->Capacity = a2; /*0x63efbe*/
  this->IsInitialized = 1; /*0x63efc1*/
  this->IsAllocated = 0; /*0x63efc5*/
  this->vtable0 = &VectorClass<PlanningNodeClass *>::`vftable'; /*0x63efc8*/
  if ( a2 ) /*0x63efce*/
  {
    if ( a3 ) /*0x63efd6*/
    {
      this->Items = (void *)a3; /*0x63efd8*/
      return &this->vtable0; /*0x63efde*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x63efed*/
    this->IsAllocated = 1; /*0x63eff0*/
  }
  return &this->vtable0; /*0x63efdd*/
}



// ==== 0x0063F000  FactoryClass::RemoveItem  this=FactoryClass  sig=csp ====
char __thiscall FactoryClass::RemoveItem(FactoryClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->?; /*0x63f000*/
  v3 = a2; /*0x63f003*/
  if ( a2 >= uniqueId ) /*0x63f009*/
    return 0; /*0x63f02c*/
  v4 = uniqueId - 1; /*0x63f00b*/
  this->? = v4; /*0x63f00e*/
  if ( a2 < v4 ) /*0x63f011*/
  {
    do /*0x63f024*/
    {
      ++v3; /*0x63f017*/
      *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3); /*0x63f01b*/
    }
    while ( v3 < this->? ); /*0x63f024*/
  }
  return 1; /*0x63f029*/
}



// ==== 0x0063F040  Sidebar::RemoveItem  this=Sidebar  sig=csp ====
char __thiscall Sidebar::RemoveItem(Sidebar *this, int a2)
{
  char *Sidebar_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  Sidebar_field_0x10 = (char *)this->Sidebar_field_0x10; /*0x63f040*/
  v3 = a2; /*0x63f043*/
  if ( a2 >= (int)Sidebar_field_0x10 ) /*0x63f049*/
    return 0; /*0x63f06c*/
  v4 = Sidebar_field_0x10 - 1; /*0x63f04b*/
  this->Sidebar_field_0x10 = v4; /*0x63f04e*/
  if ( a2 < (int)v4 ) /*0x63f051*/
  {
    do /*0x63f064*/
    {
      ++v3; /*0x63f057*/
      *(_DWORD *)(this->Sidebar_field_0x4[0] + 4 * v3 - 4) = *(_DWORD *)(this->Sidebar_field_0x4[0] + 4 * v3); /*0x63f05b*/
    }
    while ( v3 < (int)this->Sidebar_field_0x10 ); /*0x63f064*/
  }
  return 1; /*0x63f069*/
}



// ==== 0x0063F080  ProcessVoxelVertexData  this=-  sig=csp ====
void __fastcall Voxel_ProcessVertexData(_DWORD *a1, int *a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int *v7; // ebp
  int v8; // edx
  int v9; // ebp
  int v10; // edx
  int v11; // edi
  int v12; // edx
  int v13; // ebp
  BOOL v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int *v18; // ebp
  int v19; // ecx
  bool v20; // zf
  int v21; // edx
  BOOL v22; // ebx
  int v23; // ebx
  int v24; // ebp
  int v25; // edi
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+14h] [ebp-20h] BYREF
  int v28; // [esp+18h] [ebp-1Ch]
  _DWORD *v29; // [esp+1Ch] [ebp-18h]
  BOOL v30; // [esp+20h] [ebp-14h]
  int v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+28h] [ebp-Ch]
  int *v33; // [esp+2Ch] [ebp-8h]
  int v34; // [esp+30h] [ebp-4h]

  v2 = a1[1]; /*0x63f086*/
  v29 = a1; /*0x63f08a*/
  v3 = *a1; /*0x63f08e*/
  v4 = 0; /*0x63f090*/
  v33 = a2; /*0x63f094*/
  if ( v3 ) /*0x63f098*/
  {
    v5 = *(_DWORD *)(v2 + 4); /*0x63f09e*/
    v6 = 1; /*0x63f0a1*/
    v31 = 0; /*0x63f0a8*/
    v27 = v5; /*0x63f0ac*/
    if ( v3 > 1 ) /*0x63f0b0*/
    {
      v7 = (int *)(v2 + 12); /*0x63f0b6*/
      do /*0x63f0da*/
      {
        v8 = *v7; /*0x63f0b9*/
        if ( *v7 >= v5 ) /*0x63f0be*/
        {
          if ( v8 > v27 ) /*0x63f0ca*/
          {
            v31 = v6; /*0x63f0cc*/
            v27 = v8; /*0x63f0d0*/
          }
        }
        else
        {
          v4 = v6; /*0x63f0c0*/
          v5 = *v7; /*0x63f0c2*/
        }
        ++v6; /*0x63f0d4*/
        v7 += 2; /*0x63f0d5*/
      }
      while ( v6 < v3 ); /*0x63f0da*/
      if ( v5 != v27 ) /*0x63f0e0*/
      {
        v9 = *(_DWORD *)(v2 + 8 * v4 + 4); /*0x63f0e6*/
        v10 = v4; /*0x63f0ea*/
        if ( v9 == v5 ) /*0x63f0ee*/
        {
          do /*0x63f0fa*/
            v10 = (v10 + 1) % v3; /*0x63f0f4*/
          while ( *(_DWORD *)(v2 + 8 * v10 + 4) == v5 ); /*0x63f0fa*/
        }
        v26 = (v3 + v10 - 1) % v3; /*0x63f105*/
        if ( v9 == v5 ) /*0x63f109*/
        {
          do /*0x63f118*/
            v4 = (v3 + v4 - 1) % v3; /*0x63f112*/
          while ( *(_DWORD *)(v2 + 8 * v4 + 4) == v5 ); /*0x63f118*/
        }
        v28 = -1; /*0x63f11d*/
        v11 = (v4 + 1) % v3; /*0x63f12c*/
        v12 = *(_DWORD *)(v2 + 8 * v26); /*0x63f12e*/
        v13 = *(_DWORD *)(v2 + 8 * v11); /*0x63f133*/
        v14 = v13 != v12; /*0x63f138*/
        v30 = v14; /*0x63f13e*/
        if ( v14 ) /*0x63f142*/
        {
          if ( v13 > v12 ) /*0x63f146*/
          {
            v15 = v11; /*0x63f148*/
            v11 = v26; /*0x63f14a*/
            v28 = v13 != v12; /*0x63f14e*/
            v26 = v15; /*0x63f152*/
          }
        }
        else
        {
          v32 = (v26 + 1) % v3; /*0x63f166*/
          v16 = *(_DWORD *)(v2 + 8 * v11 + 4); /*0x63f16d*/
          v34 = (v3 + v11 - 1) % v3; /*0x63f171*/
          if ( (*(_DWORD *)(v2 + 8 * v32) - v13) * (*(_DWORD *)(v2 + 8 * v34 + 4) - v16) /*0x63f19f*/
             - (*(_DWORD *)(v2 + 8 * v34) - v13) * (*(_DWORD *)(v2 + 8 * v32 + 4) - v16) < 0 )
          {
            v17 = v11; /*0x63f1a1*/
            v11 = v26; /*0x63f1a3*/
            v28 = 1; /*0x63f1a7*/
            v26 = v17; /*0x63f1af*/
          }
          v14 = v30; /*0x63f1b3*/
        }
        v18 = v33; /*0x63f1bb*/
        v19 = v14 - v5 + v27 - 1; /*0x63f1c3*/
        v20 = v14 - v5 + v27 == 1; /*0x63f1c7*/
        *v33 = v19; /*0x63f1c9*/
        if ( v19 >= 0 && !v20 ) /*0x63f1cc*/
        {
          v21 = v18[2]; /*0x63f1d2*/
          v18[1] = v5 - v14 + 1; /*0x63f1da*/
          if ( !v21 ) /*0x63f1dd*/
          {
            v18[2] = (int)__2_YAPAXI_Z(8 * v19 + 1600); /*0x63f1ec*/
            v14 = v30; /*0x63f1ef*/
          }
          if ( v18[2] ) /*0x63f1f6*/
          {
            v27 = v18[2]; /*0x63f20a*/
            v22 = !v14; /*0x63f210*/
            v34 = v22; /*0x63f215*/
            do /*0x63f267*/
            {
              if ( v28 <= 0 ) /*0x63f21f*/
              {
                v18 = v33; /*0x63f23c*/
                v11 = (v11 + *v29 - 1) % *v29; /*0x63f240*/
              }
              else
              {
                v11 = (v11 + 1) % *v29; /*0x63f22b*/
              }
              Audio_Process(*(_DWORD *)(v2 + 8 * v11), *(_DWORD *)(v2 + 8 * v11 + 4), 1, v22, &v27); /*0x63f25a*/
              v22 = 0; /*0x63f25f*/
            }
            while ( v11 != v31 ); /*0x63f267*/
            v23 = v34; /*0x63f270*/
            v27 = v18[2]; /*0x63f274*/
            v24 = -v28; /*0x63f27c*/
            v25 = v26; /*0x63f27e*/
            v34 = -v28; /*0x63f280*/
            do /*0x63f2d0*/
            {
              if ( v24 <= 0 ) /*0x63f286*/
              {
                v24 = v34; /*0x63f2a3*/
                v25 = (v25 + *v29 - 1) % *v29; /*0x63f2a7*/
              }
              else
              {
                v25 = (v25 + 1) % *v29; /*0x63f292*/
              }
              Audio_Process(*(_DWORD *)(v2 + 8 * v25) - 1, *(_DWORD *)(v2 + 8 * v25 + 4), 0, v23, &v27); /*0x63f2c3*/
              v23 = 0; /*0x63f2c8*/
            }
            while ( v25 != v31 ); /*0x63f2d0*/
          }
          else
          {
            *v18 = 0; /*0x63f1fe*/
          }
        }
      }
    }
  }
}



// ==== 0x0063F2E0  Audio_Process  this=-  sig=csp ====
int __fastcall sub_63F2E0(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD **a7)
{
  _DWORD *v7; // ebx
  int v8; // edi
  signed int v9; // esi
  int result; // eax
  signed int v11; // ebp
  int v12; // edx
  int v13; // esi
  int v14; // edx
  int v15; // ebx
  int v16; // edx
  _DWORD *v17; // [esp+Ch] [ebp-4h]
  int v18; // [esp+14h] [ebp+4h]
  int v19; // [esp+20h] [ebp+10h]

  v7 = *a7; /*0x63f2ec*/
  v8 = a3 - a1; /*0x63f2f2*/
  v17 = *a7; /*0x63f2f6*/
  v9 = a4 - a2; /*0x63f300*/
  result = a3 - a1 <= 0 ? -1 : 1;
  v18 = result; /*0x63f308*/
  if ( a4 - a2 <= 0 ) /*0x63f30c*/
    return result; /*0x63f30c*/
  result = v8; /*0x63f315*/
  v11 = abs32(v8); /*0x63f31a*/
  if ( !v11 ) /*0x63f31c*/
  {
    v12 = v9 - a6; /*0x63f322*/
    v13 = v9 - a6 - 1; /*0x63f324*/
    if ( v12 > 0 ) /*0x63f327*/
    {
      result = v13 + 1; /*0x63f331*/
      do /*0x63f344*/
      {
        if ( a5 == 1 ) /*0x63f337*/
          *v7 = a1; /*0x63f339*/
        else
          v7[1] = a1; /*0x63f33d*/
        v7 += 2; /*0x63f340*/
        --result; /*0x63f343*/
      }
      while ( result ); /*0x63f344*/
      *a7 = v7; /*0x63f34d*/
      return result; /*0x63f351*/
    }
    goto LABEL_50; /*0x63f327*/
  }
  if ( v9 == v11 ) /*0x63f356*/
  {
    if ( a6 ) /*0x63f362*/
      a1 += v18; /*0x63f364*/
    result = v9 - a6; /*0x63f368*/
    if ( v9 - a6 <= 0 ) /*0x63f36d*/
      goto LABEL_50; /*0x63f36d*/
    do /*0x63f38c*/
    {
      if ( a5 == 1 ) /*0x63f37d*/
        *v7 = a1; /*0x63f37f*/
      else
        v7[1] = a1; /*0x63f383*/
      a1 += v18; /*0x63f386*/
      v7 += 2; /*0x63f388*/
      --result; /*0x63f38b*/
    }
    while ( result ); /*0x63f38c*/
    *a7 = v7; /*0x63f395*/
  }
  else
  {
    if ( v9 <= v11 ) /*0x63f39c*/
    {
      v15 = v18 * (v11 / v9); /*0x63f40c*/
      v16 = v11 % v9; /*0x63f412*/
      if ( v8 < 0 ) /*0x63f416*/
        result = 1 - v9; /*0x63f421*/
      else
        result = 0; /*0x63f418*/
      if ( a6 ) /*0x63f429*/
      {
        result += v16; /*0x63f42b*/
        a1 += v15; /*0x63f42d*/
        if ( result > 0 ) /*0x63f431*/
        {
          a1 += v18; /*0x63f437*/
          result -= v9; /*0x63f439*/
        }
      }
      if ( v9 - a6 > 0 ) /*0x63f444*/
      {
        v19 = v9 - a6; /*0x63f44b*/
        do /*0x63f483*/
        {
          if ( a5 == 1 ) /*0x63f45a*/
            *v17 = a1; /*0x63f45c*/
          else
            v17[1] = a1; /*0x63f460*/
          result += v16; /*0x63f463*/
          a1 += v15; /*0x63f465*/
          if ( result > 0 ) /*0x63f469*/
          {
            a1 += v18; /*0x63f46b*/
            result -= v9; /*0x63f46d*/
          }
          v17 += 2; /*0x63f476*/
          --v19; /*0x63f47f*/
        }
        while ( v19 ); /*0x63f483*/
      }
      v7 = v17; /*0x63f485*/
      goto LABEL_50; /*0x63f485*/
    }
    if ( v8 < 0 ) /*0x63f3a0*/
      result = 1 - v9; /*0x63f3ab*/
    else
      result = 0; /*0x63f3a2*/
    if ( a6 ) /*0x63f3b3*/
    {
      result += v11; /*0x63f3b5*/
      if ( result > 0 ) /*0x63f3b9*/
      {
        a1 += v18; /*0x63f3bf*/
        result -= v9; /*0x63f3c1*/
      }
    }
    if ( v9 - a6 <= 0 ) /*0x63f3cc*/
    {
LABEL_50:
      *a7 = v7; /*0x63f489*/
      return result; /*0x63f48e*/
    }
    v14 = v9 - a6; /*0x63f3d6*/
    do /*0x63f3f3*/
    {
      if ( a5 == 1 ) /*0x63f3da*/
        *v7 = a1; /*0x63f3dc*/
      else
        v7[1] = a1; /*0x63f3e0*/
      result += v11; /*0x63f3e3*/
      if ( result > 0 ) /*0x63f3e7*/
      {
        a1 += v18; /*0x63f3e9*/
        result -= v9; /*0x63f3ed*/
      }
      v7 += 2; /*0x63f3ef*/
      --v14; /*0x63f3f2*/
    }
    while ( v14 ); /*0x63f3f3*/
    *a7 = v7; /*0x63f3fc*/
  }
  return result; /*0x63f34b*/
}



// ==== 0x0063F4A0  sub_63F4A0  this=-  sig=ida-proto ====
int sub_63F4A0()
{
  dword_AC4D00 = 0; /*0x63f4a2*/
  dword_AC4D04 = 0; /*0x63f4a7*/
  dword_AC4D08 = 0; /*0x63f4ac*/
  dword_AC4D0C = 0; /*0x63f4b1*/
  return 0; /*0x63f4b6*/
}



// ==== 0x0063F4C0  sub_63F4C0  this=-  sig=ida-proto ====
void sub_63F4C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x63f4cc*/
  dbl_AC4D18 = Math::Sqrt(v0 + v0); /*0x63f4de*/
}



// ==== 0x0063F4F0  sub_63F4F0  this=-  sig=ida-proto ====
void sub_63F4F0()
{
  dbl_AC4E68 = dbl_AC4D18 / 60.0; /*0x63f4fc*/
}



// ==== 0x0063F510  sub_63F510  this=-  sig=ida-proto ====
void sub_63F510()
{
  dbl_AC4E50 = 1.0 / dbl_AC4E68; /*0x63f51c*/
}



// ==== 0x0063F530  sub_63F530  this=-  sig=ida-proto ====
void sub_63F530()
{
  dbl_AC4E48 = 0.0174532925199433 * 45.0; /*0x63f53c*/
}



// ==== 0x0063F550  sub_63F550  this=-  sig=ida-proto ====
void sub_63F550()
{
  dbl_AC4D20 = 0.0174532925199433 * 60.0; /*0x63f55c*/
}



// ==== 0x0063F570  sub_63F570  this=-  sig=ida-proto ====
void sub_63F570()
{
  dbl_AC4CF8 = 0.0174532925199433 * 90.0; /*0x63f57c*/
}



// ==== 0x0063F590  sub_63F590  this=-  sig=ida-proto ====
__int64 sub_63F590()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4CF8 - dbl_AC4D20); /*0x63f5a2*/
  result = Math::RoundToInt(v0 * dbl_AC4D18 * 0.5); /*0x63f5b6*/
  dword_AC4E70 = result; /*0x63f5bb*/
  return result; /*0x63f5c0*/
}



// ==== 0x0063F5D0  sub_63F5D0  this=-  sig=ida-proto ====
void sub_63F5D0()
{
  dbl_AC4D28 = Math::ArcTan((double)dword_AC4E70 * 0.00390625); /*0x63f5e7*/
}



// ==== 0x0063F600  sub_63F600  this=-  sig=ida-proto ====
void sub_63F600()
{
  dbl_AC4E40 = Math::ArcTan((double)(2 * dword_AC4E70) / dbl_AC4D18); /*0x63f622*/
}



// ==== 0x0063F630  sub_63F630  this=-  sig=ida-proto ====
__int64 sub_63F630()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4E70) + 0.5); /*0x63f64b*/
  dword_AC4E64 = result; /*0x63f650*/
  return result; /*0x63f656*/
}



// ==== 0x0063F660  sub_63F660  this=-  sig=ida-proto ====
int sub_63F660()
{
  word_AC4D10 = 0; /*0x63f662*/
  word_AC4D12 = 0; /*0x63f668*/
  return 0; /*0x63f66e*/
}



// ==== 0x0063F670  sub_63F670  this=-  sig=ida-proto ====
int sub_63F670()
{
  dword_AC4E30 = 0; /*0x63f672*/
  dword_AC4E34 = 0; /*0x63f677*/
  dword_AC4E38 = 0; /*0x63f67c*/
  return 0; /*0x63f681*/
}



// ==== 0x0063F690  sub_63F690  this=-  sig=ida-proto ====
int sub_63F690()
{
  dword_AC4E60 = 0; /*0x63f695*/
  dword_AC4E58 = 128; /*0x63f69f*/
  dword_AC4E5C = 128; /*0x63f6a4*/
  return 128; /*0x63f6a9*/
}



// ==== 0x0063F6B0  RadarClass::Create  this=PowerClass  sig=csp ====
int __thiscall sub_63F6B0(int this)
{
  RadarClass::Construct((_DWORD *)this); /*0x63f6b4*/
  *(_BYTE *)(this + 5388) = 0; /*0x63f6c1*/
  *(_DWORD *)(this + 5392) = Timer::GetTicks(); /*0x63f6cc*/
  *(_DWORD *)(this + 5400) = 0; /*0x63f6d2*/
  *(_DWORD *)(this + 5404) = 0; /*0x63f6de*/
  *(_DWORD *)(this + 5408) = Timer::GetTicks(); /*0x63f6e9*/
  *(_DWORD *)(this + 5416) = 0; /*0x63f6f2*/
  *(_DWORD *)(this + 5436) = -1; /*0x63f6f8*/
  *(_DWORD *)(this + 5440) = -1; /*0x63f6fe*/
  *(_DWORD *)(this + 5420) = 0; /*0x63f704*/
  *(_DWORD *)(this + 5424) = 0; /*0x63f70a*/
  *(_DWORD *)(this + 5428) = 0; /*0x63f710*/
  *(_BYTE *)(this + 5432) = 0; /*0x63f716*/
  *(_DWORD *)this = &PowerClass::`vftable'; /*0x63f71c*/
  return this; /*0x63f724*/
}



// ==== 0x0063F730  PowerClass::updateDrain  this=PowerClass  sig=csp ====
int __thiscall PowerClass::updateDrain(PowerClass *this)
{
  int Ticks; // eax
  int v4; // [esp+Ch] [ebp-8h]

  RadarClass::Destru_vt07((RadarClass *)this); /*0x63f737*/
  this->q153C = -1; /*0x63f743*/
  this->q1540 = -1; /*0x63f749*/
  *(_DWORD *)this->__pad_1510 = Timer::GetTicks(); /*0x63f75e*/
  *(_DWORD *)&this->__pad_1510[12] = 0; /*0x63f764*/
  *(_DWORD *)&this->__pad_1510[4] = v4; /*0x63f76a*/
  *(_DWORD *)&this->__pad_1510[8] = 0; /*0x63f76d*/
  Ticks = Timer::GetTicks(); /*0x63f774*/
  *(_DWORD *)this->__pad_152C = 0; /*0x63f781*/
  this->field_1530 = 0; /*0x63f787*/
  this->field_1520 = Ticks; /*0x63f78d*/
  *(_DWORD *)this->__pad_1534 = 0; /*0x63f793*/
  LOBYTE(this->field_1538) = 0; /*0x63f799*/
  *(_DWORD *)this->__pad_1524 = v4; /*0x63f79f*/
  this->field_1528 = 0; /*0x63f7a4*/
  return v4; /*0x63f7a2*/
}



// ==== 0x0063F7B0  PowerClass::Stub  this=PowerClass  sig=csp ====
// attributes: thunk
void __thiscall PowerClass::Stub(PowerClass *this, int a2)
{
  RadarClass::Destru_vt05((RadarClass *)this); /*0x63f7b0*/
}



// ==== 0x0063F7C0  PowerClass::checkBlackout  this=PowerClass  sig=csp ====
void *__thiscall PowerClass::checkBlackout(PowerClass *this)
{
  void *result; // eax

  RadarClass::Destru_vt53((RadarClass *)this); /*0x63f7c0*/
  result = LoadFileSHP(aPowerpShp, (bool *)&stru_AC4B30.__pad_EC[604]); /*0x63f7cf*/
  *(_DWORD *)&stru_AC4B30.__pad_EC[600] = result; /*0x63f7d4*/
  return result; /*0x63f7d9*/
}



// ==== 0x0063F7E0  PowerClass::checkLowPower  this=PowerClass  sig=csp ====
void PowerClass::_vt50()
{
  RadarClass::Destru_vt50(); /*0x63f7e0*/
  if ( byte_AC4E78 ) /*0x63f7ec*/
  {
    __3_YAXPAX_Z(dword_AC4E74); /*0x63f7f4*/
    byte_AC4E78 = 0; /*0x63f7fc*/
  }
}



// ==== 0x0063F810  ObjectClass::method_63F810  this=ObjectClass  sig=csp ====
int __thiscall sub_63F810(ObjectClass *this)
{
  char *v1; // esi
  int v3; // [esp+8h] [ebp-8h]

  *((_DWORD *)this + 1351) = 10; /*0x63f81a*/
  v1 = (char *)this + 5392; /*0x63f829*/
  *((_DWORD *)this + 1348) = Timer::GetTicks(); /*0x63f834*/
  *((_DWORD *)v1 + 1) = v3; /*0x63f83a*/
  *((_DWORD *)v1 + 2) = 3; /*0x63f83d*/
  return v3; /*0x63f840*/
}



// ==== 0x0063F850  PowerBar::CalcFill  this=PowerClass  sig=csp ====
int PowerBar_CalcFill()
{
  int v0; // ecx
  int v1; // ebx
  int v2; // edx
  int *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx

  v0 = 0; /*0x63f874*/
  v1 = (dword_B0B504 + 3) / 3; /*0x63f876*/
  v2 = 0; /*0x63f878*/
  if ( *((int *)dword_A83D4C + 30) > 0 ) /*0x63f880*/
  {
    v3 = (int *)*((_DWORD *)dword_A83D4C + 27); /*0x63f882*/
    v4 = *((_DWORD *)dword_A83D4C + 30); /*0x63f887*/
    do /*0x63f8a5*/
    {
      v5 = *v3++; /*0x63f889*/
      v6 = *(_DWORD *)(v5 + 1312); /*0x63f88e*/
      v0 += *(_DWORD *)(v6 + 3812); /*0x63f89a*/
      v2 += *(_DWORD *)(v6 + 3808); /*0x63f8a2*/
      --v4; /*0x63f8a4*/
    }
    while ( v4 ); /*0x63f8a5*/
  }
  v7 = Math::RoundToInt(400.0 / ((double)(v0 + v2) + 400.0) * (double)((dword_B0B504 + 3) / 3)); /*0x63f8c3*/
  v8 = v7 <= 0 ? 0 : v7;
  if ( v8 >= v1 - 1 ) /*0x63f8d7*/
    v8 = v1 - 1; /*0x63f8d9*/
  return v1 - v8; /*0x63f8dd*/
}



// ==== 0x0063F8F0  ObjectClass::method_63F8F0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_63F8F0(ObjectClass *this)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // kr00_4
  int v5; // [esp+0h] [ebp-8h]

  v2 = PowerBar::CalcFill(); /*0x63f8f6*/
  v5 = *((_DWORD *)this + 1355) + *((_DWORD *)this + 1356) + *((_DWORD *)this + 1357); /*0x63f917*/
  if ( v5 > v2 ) /*0x63f91c*/
    v5 = v2; /*0x63f91e*/
  v4 = Math::RoundToInt((double)v5 / (double)v2 * 5.0); /*0x63f930*/
  WORD2(result) = HIWORD(v4); /*0x63f930*/
  LOWORD(result) = v4; /*0x63f930*/
  return result; /*0x63f935*/
}



// ==== 0x0063F960  PowerBar::ComputeFill  this=IUnknown  sig=csp ====
int __stdcall PowerBar_ComputeFill(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  char *v4; // esi
  int v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st7
  int v11; // [esp+14h] [ebp-34h]
  double v12; // [esp+18h] [ebp-30h]
  double v13; // [esp+20h] [ebp-28h]
  double v14; // [esp+28h] [ebp-20h]

  v3 = (dword_B0B504 + 3) / 3; /*0x63f982*/
  v11 = PowerBar::CalcFill(); /*0x63f989*/
  v4 = (char *)dword_A83D4C + 36; /*0x63f995*/
  v5 = (*(int (__stdcall **)(char *))(*((_DWORD *)dword_A83D4C + 9) + 36))((char *)dword_A83D4C + 36); /*0x63f9a3*/
  v12 = 100.0; /*0x63f9ad*/
  v6 = (double)((*(int (__stdcall **)(char *))(*(_DWORD *)v4 + 32))(v4) - v5); /*0x63f9c1*/
  if ( v6 >= 0.0 ) /*0x63f9d0*/
  {
    if ( v6 < 100.0 ) /*0x63fa01*/
      v12 = v6; /*0x63fa03*/
    v13 = v6 - v12; /*0x63fa0b*/
  }
  else
  {
    v12 = 0.0; /*0x63f9d4*/
    v13 = 0.0; /*0x63f9e4*/
  }
  v14 = (double)(*(int (__stdcall **)(char *))(*((_DWORD *)dword_A83D4C + 9) + 36))((char *)dword_A83D4C + 36) /*0x63fa5f*/
      + v12
      + v13;
  if ( v14 <= 0.0 ) /*0x63fa6e*/
  {
    v7 = 1.0; /*0x63faa0*/
    v8 = 0.0; /*0x63faa4*/
  }
  else
  {
    v7 = (double)(*(int (__stdcall **)(char *))(*((_DWORD *)dword_A83D4C + 9) + 36))((char *)dword_A83D4C + 36) / v14; /*0x63fa86*/
    v8 = v13 / v14; /*0x63fa8e*/
  }
  *a3 = Math::RoundToInt(v7); /*0x63fac2*/
  *a2 = Math::RoundToInt(v7); /*0x63fad2*/
  v9 = (double)v11 * v8; /*0x63fad4*/
  *a1 = Math::RoundToInt(v9); /*0x63fae6*/
  *a3 = Math::RoundToInt(v9); /*0x63fb0d*/
  return v3; /*0x63fb17*/
}



// ==== 0x0063FB20  PowerClass::Render  this=PowerClass  sig=csp ====
int __thiscall Sidebar::Render(PowerClass *this, char a2)
{
  int v3; // ebx
  int v4; // esi
  int *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int result; // eax
  int NeedsSaveOrLink; // [esp+4h] [ebp-20h] BYREF
  int v17; // [esp+8h] [ebp-1Ch]
  int v18[4]; // [esp+14h] [ebp-10h] BYREF

  if ( (a2 || LOBYTE(this->field_150C)) && byte_884B8D ) /*0x63fb43*/
  {
    LOBYTE(this->field_150C) = 0; /*0x63fb49*/
    g_TooltipActive = 1; /*0x63fb55*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x63fb5d*/
      v3 = 0; /*0x63fb70*/
    else
      v3 = 5; /*0x63fb69*/
    NeedsSaveOrLink = (int)dword_A8B230[374].NeedsSaveOrLink; /*0x63fb78*/
    v4 = g_DSurface_SidebarBounds + 69; /*0x63fb80*/
    v5 = (int *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x63fb8c*/
                  DSurface_Sidebar,
                  &NeedsSaveOrLink);
    v6 = this->field_1530; /*0x63fb91*/
    v18[0] = *v5; /*0x63fb97*/
    v18[1] = v5[1]; /*0x63fb9e*/
    v18[2] = v5[2]; /*0x63fba5*/
    v18[3] = v5[3]; /*0x63fbb1*/
    v7 = *(_DWORD *)this->__pad_1534; /*0x63fbc6*/
    v8 = *(_DWORD *)this->__pad_152C; /*0x63fbce*/
    if ( (dword_B0B504 + 3) / 3 - v7 - v6 - v8 > 0 ) /*0x63fbdc*/
    {
      v9 = (dword_B0B504 + 3) / 3 - v7 - v6 - v8; /*0x63fbde*/
      do /*0x63fc24*/
      {
        NeedsSaveOrLink = v3; /*0x63fc13*/
        v17 = v4; /*0x63fc17*/
        DrawToSurfaceSHP( /*0x63fc1b*/
          (int)DSurface_Sidebar,
          *(int *)&stru_87F5F0.__pad_58[132],
          *(int *)&stru_AC4B30.__pad_EC[600],
          0,
          &NeedsSaveOrLink,
          v18,
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
        v4 += 3; /*0x63fc20*/
        --v9; /*0x63fc23*/
      }
      while ( v9 ); /*0x63fc24*/
    }
    v10 = *(_DWORD *)&this->__pad_1510[12]; /*0x63fc26*/
    v11 = 0; /*0x63fc2c*/
    if ( v10 > 0 && (v10 & 1) == 0 ) /*0x63fc3e*/
    {
      NeedsSaveOrLink = v3; /*0x63fc75*/
      v17 = v4; /*0x63fc79*/
      DrawToSurfaceSHP( /*0x63fc7d*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        *(int *)&stru_AC4B30.__pad_EC[600],
        4u,
        &NeedsSaveOrLink,
        v18,
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
      v4 += 3; /*0x63fc82*/
      v11 = 1; /*0x63fc85*/
    }
    v12 = *(_DWORD *)this->__pad_152C; /*0x63fc8a*/
    if ( v12 > 0 ) /*0x63fc92*/
    {
      if ( v11 < v12 ) /*0x63fc96*/
      {
        do /*0x63fce4*/
        {
          NeedsSaveOrLink = v3; /*0x63fccb*/
          v17 = v4; /*0x63fccf*/
          DrawToSurfaceSHP( /*0x63fcd3*/
            (int)DSurface_Sidebar,
            *(int *)&stru_87F5F0.__pad_58[132],
            *(int *)&stru_AC4B30.__pad_EC[600],
            1u,
            &NeedsSaveOrLink,
            v18,
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
          v4 += 3; /*0x63fcde*/
          ++v11; /*0x63fce1*/
        }
        while ( v11 < *(_DWORD *)this->__pad_152C ); /*0x63fce4*/
      }
      v11 = 0; /*0x63fce6*/
    }
    v13 = this->field_1530; /*0x63fce8*/
    if ( v13 > 0 ) /*0x63fcf0*/
    {
      if ( v11 < v13 ) /*0x63fcf4*/
      {
        do /*0x63fd42*/
        {
          NeedsSaveOrLink = v3; /*0x63fd29*/
          v17 = v4; /*0x63fd2d*/
          DrawToSurfaceSHP( /*0x63fd31*/
            (int)DSurface_Sidebar,
            *(int *)&stru_87F5F0.__pad_58[132],
            *(int *)&stru_AC4B30.__pad_EC[600],
            2u,
            &NeedsSaveOrLink,
            v18,
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
          v4 += 3; /*0x63fd3c*/
          ++v11; /*0x63fd3f*/
        }
        while ( v11 < this->field_1530 ); /*0x63fd42*/
      }
      v11 = 0; /*0x63fd44*/
    }
    v14 = *(_DWORD *)this->__pad_1534; /*0x63fd46*/
    if ( v14 > 0 && v11 < v14 ) /*0x63fd52*/
    {
      do /*0x63fda0*/
      {
        NeedsSaveOrLink = v3; /*0x63fd87*/
        v17 = v4; /*0x63fd8b*/
        DrawToSurfaceSHP( /*0x63fd8f*/
          (int)DSurface_Sidebar,
          *(int *)&stru_87F5F0.__pad_58[132],
          *(int *)&stru_AC4B30.__pad_EC[600],
          3u,
          &NeedsSaveOrLink,
          v18,
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
        v4 += 3; /*0x63fd9a*/
        ++v11; /*0x63fd9d*/
      }
      while ( v11 < *(_DWORD *)this->__pad_1534 ); /*0x63fda0*/
    }
  }
  LOBYTE(result) = RadarClass::Destru_vt16((RadarClass *)this, a2); /*0x63fdac*/
  return result; /*0x63fdb1*/
}



// ==== 0x0063FDC0  ObjectClass::method_63FDC0  this=ObjectClass  sig=csp ====
int __thiscall sub_63FDC0(ObjectClass *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  PowerBar::ComputeFill(&v5, &v7, &v6); /*0x63fdd7*/
  v2 = *((_DWORD *)this + 1355); /*0x63fddc*/
  if ( v2 <= v5 ) /*0x63fde8*/
  {
    v4 = *((_DWORD *)this + 1357); /*0x63fdf6*/
    if ( v4 <= v6 ) /*0x63fe02*/
    {
      result = *((_DWORD *)this + 1356); /*0x63fe10*/
      if ( result > v7 ) /*0x63fe1c*/
        *((_DWORD *)this + 1356) = --result; /*0x63fe1f*/
    }
    else
    {
      result = v4 - 1; /*0x63fe04*/
      *((_DWORD *)this + 1357) = result; /*0x63fe05*/
    }
  }
  else
  {
    result = v2 - 1; /*0x63fdea*/
    *((_DWORD *)this + 1355) = result; /*0x63fdeb*/
  }
  return result; /*0x63fdf1*/
}



// ==== 0x0063FE30  ObjectClass::method_63FE30  this=ObjectClass  sig=csp ====
int __thiscall sub_63FE30(ObjectClass *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  PowerBar::ComputeFill(&v6, &v7, &v5); /*0x63fe47*/
  v2 = *((_DWORD *)this + 1357); /*0x63fe4c*/
  if ( v2 >= v5 ) /*0x63fe58*/
  {
    v4 = *((_DWORD *)this + 1355); /*0x63fe66*/
    if ( v4 >= v6 ) /*0x63fe72*/
    {
      result = *((_DWORD *)this + 1356); /*0x63fe80*/
      if ( result < v7 ) /*0x63fe8c*/
        *((_DWORD *)this + 1356) = ++result; /*0x63fe8f*/
    }
    else
    {
      result = v4 + 1; /*0x63fe74*/
      *((_DWORD *)this + 1355) = result; /*0x63fe75*/
    }
  }
  else
  {
    result = v2 + 1; /*0x63fe5a*/
    *((_DWORD *)this + 1357) = result; /*0x63fe5b*/
  }
  return result; /*0x63fe61*/
}



// ==== 0x0063FEA0  PowerClass::updatePowerBarAnimation  this=PowerClass  sig=csp ====
int __thiscall PowerClass::updatePowerBarAnimation(PowerClass *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  bool v11; // cc
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  bool v20; // cc
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool v27; // cc
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int Ticks; // edi
  int v36; // eax
  int v37; // edx
  int result; // eax
  int v39; // [esp+18h] [ebp-24h] BYREF
  int v40; // [esp+1Ch] [ebp-20h] BYREF
  int v41; // [esp+20h] [ebp-1Ch] BYREF
  int v42; // [esp+24h] [ebp-18h] BYREF
  int v43; // [esp+28h] [ebp-14h] BYREF
  int v44; // [esp+2Ch] [ebp-10h] BYREF
  int v45; // [esp+34h] [ebp-8h]

  if ( !byte_884B8D ) /*0x63feaf*/
    goto LABEL_66; /*0x63feaf*/
  if ( !LOBYTE(this->field_1538) && *(int *)&this->__pad_1510[12] > 0 ) /*0x63fec9*/
  {
    v4 = *(_DWORD *)&this->__pad_1510[8]; /*0x63fed1*/
    if ( *(_DWORD *)this->__pad_1510 != -1 ) /*0x63feda*/
    {
      v5 = Timer::GetTicks() - *(_DWORD *)this->__pad_1510; /*0x63fee7*/
      if ( v5 >= v4 ) /*0x63feef*/
      {
LABEL_8:
        v6 = *(_DWORD *)&this->__pad_1510[12]; /*0x63fef7*/
        LOBYTE(this->field_150C) = 1; /*0x63fefd*/
        *(_DWORD *)&this->__pad_1510[12] = v6 - 1; /*0x63ff06*/
        byte_884B8E = 1; /*0x63ff11*/
        MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x63ff17*/
        *(_DWORD *)this->__pad_1510 = Timer::GetTicks(); /*0x63ff25*/
        *(_DWORD *)&this->__pad_1510[4] = v45; /*0x63ff34*/
        *(_DWORD *)&this->__pad_1510[8] = 3; /*0x63ff3a*/
        goto LABEL_9; /*0x63ff3a*/
      }
      v4 -= v5; /*0x63fef1*/
    }
    if ( !v4 ) /*0x63fef5*/
      goto LABEL_8; /*0x63fef5*/
  }
LABEL_9:
  if ( (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 36))(&dword_A83D4C->__pad_C[24]) == this->q153C /*0x63ff76*/
    && (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 32))(&dword_A83D4C->__pad_C[24]) == this->q1540
    && !LOBYTE(this->field_1538) )
  {
    goto LABEL_66; /*0x63ff76*/
  }
  LOBYTE(this->field_150C) = 1; /*0x63ff7c*/
  byte_884B8E = 1; /*0x63ff89*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x63ff8f*/
  if ( (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 36))(&dword_A83D4C->__pad_C[24]) != this->q153C /*0x63ffc2*/
    || (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 32))(&dword_A83D4C->__pad_C[24]) != this->q1540 )
  {
    LOBYTE(this->field_1538) = 1; /*0x63ffc8*/
    *(_DWORD *)&this->__pad_1510[12] = 10; /*0x63ffce*/
    *(_DWORD *)this->__pad_1510 = Timer::GetTicks(); /*0x63ffe8*/
    *(_DWORD *)&this->__pad_1510[4] = v45; /*0x63ffee*/
    *(_DWORD *)&this->__pad_1510[8] = 3; /*0x63fff1*/
  }
  this->q153C = (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 36))(&dword_A83D4C->__pad_C[24]); /*0x640004*/
  this->q1540 = (*(int (__stdcall **)(char *))(*(_DWORD *)&dword_A83D4C->__pad_C[24] + 32))(&dword_A83D4C->__pad_C[24]); /*0x640018*/
  PowerBar::ComputeFill(&v43, &v44, &v40); /*0x64002f*/
  v7 = this->field_1528; /*0x64003a*/
  if ( this->field_1520 != -1 ) /*0x640043*/
  {
    v8 = Timer::GetTicks() - this->field_1520; /*0x640050*/
    if ( v8 >= v7 ) /*0x640058*/
      goto LABEL_19; /*0x640058*/
    v7 -= v8; /*0x64005a*/
  }
  if ( v7 ) /*0x64005e*/
    goto LABEL_66; /*0x64005e*/
LABEL_19:
  v9 = *(_DWORD *)this->__pad_1534; /*0x640064*/
  v10 = v9 == v40; /*0x64006e*/
  v11 = v9 <= v40; /*0x64006e*/
  LOBYTE(this->field_1538) = 0; /*0x640070*/
  if ( !v10 ) /*0x640077*/
  {
    LOBYTE(this->field_1538) = 1; /*0x64007d*/
    if ( !v11 ) /*0x640083*/
    {
      *(_DWORD *)this->__pad_1534 = v9 - 1; /*0x64008a*/
      PowerBar::ComputeFill(&v41, &v42, &v39); /*0x64009d*/
      v12 = *(_DWORD *)this->__pad_1534; /*0x6400a2*/
      if ( v12 < v39 ) /*0x6400ae*/
      {
        *(_DWORD *)this->__pad_1534 = v12 + 1; /*0x6400b1*/
        goto LABEL_62; /*0x6400b7*/
      }
      v13 = *(_DWORD *)this->__pad_152C; /*0x6400bc*/
      if ( v13 < v41 ) /*0x6400c8*/
      {
        *(_DWORD *)this->__pad_152C = v13 + 1; /*0x6400cb*/
        goto LABEL_62; /*0x6400d1*/
      }
      v14 = this->field_1530; /*0x6400d6*/
      if ( v14 < v42 ) /*0x6400e2*/
      {
        v15 = v14 + 1; /*0x6400e8*/
LABEL_61:
        this->field_1530 = v15; /*0x640314*/
        goto LABEL_62; /*0x640314*/
      }
      goto LABEL_62; /*0x6400e2*/
    }
    *(_DWORD *)this->__pad_1534 = v9 + 1; /*0x6400f3*/
    PowerBar::ComputeFill(&v42, &v39, &v41); /*0x640106*/
    v16 = *(_DWORD *)this->__pad_152C; /*0x64010b*/
    if ( v16 > v42 ) /*0x640117*/
    {
      *(_DWORD *)this->__pad_152C = v16 - 1; /*0x64011a*/
      goto LABEL_62; /*0x640120*/
    }
    v17 = *(_DWORD *)this->__pad_1534; /*0x640125*/
    if ( v17 > v41 ) /*0x640131*/
    {
      *(_DWORD *)this->__pad_1534 = v17 - 1; /*0x640134*/
      goto LABEL_62; /*0x64013a*/
    }
    v18 = this->field_1530; /*0x64013f*/
    if ( v18 <= v39 ) /*0x64014b*/
      goto LABEL_62; /*0x64014b*/
LABEL_60:
    v15 = v18 - 1; /*0x640313*/
    goto LABEL_61; /*0x640313*/
  }
  v19 = *(_DWORD *)this->__pad_152C; /*0x640156*/
  v20 = v19 <= v43; /*0x640160*/
  if ( v19 == v43 ) /*0x640162*/
  {
    v26 = this->field_1530; /*0x640241*/
    v27 = v26 <= v44; /*0x64024b*/
    if ( v26 == v44 ) /*0x64024d*/
      goto LABEL_62; /*0x64024d*/
    LOBYTE(this->field_1538) = 1; /*0x640253*/
    if ( !v27 ) /*0x640259*/
    {
      this->field_1530 = v26 - 1; /*0x640260*/
      PowerBar::ComputeFill(&v41, &v39, &v42); /*0x640273*/
      v28 = *(_DWORD *)this->__pad_1534; /*0x640278*/
      if ( v28 < v42 ) /*0x640284*/
      {
        *(_DWORD *)this->__pad_1534 = v28 + 1; /*0x640287*/
        goto LABEL_62; /*0x64028d*/
      }
      v29 = *(_DWORD *)this->__pad_152C; /*0x640292*/
      if ( v29 < v41 ) /*0x64029e*/
      {
        *(_DWORD *)this->__pad_152C = v29 + 1; /*0x6402a1*/
        goto LABEL_62; /*0x6402a7*/
      }
      v30 = this->field_1530; /*0x6402a9*/
      if ( v30 < v39 ) /*0x6402b5*/
      {
        v15 = v30 + 1; /*0x6402b7*/
        goto LABEL_61; /*0x6402b8*/
      }
      goto LABEL_62; /*0x6402b5*/
    }
    this->field_1530 = v26 + 1; /*0x6402bf*/
    PowerBar::ComputeFill(&v42, &v39, &v41); /*0x6402d2*/
    v31 = *(_DWORD *)this->__pad_152C; /*0x6402d7*/
    if ( v31 > v42 ) /*0x6402e3*/
    {
      *(_DWORD *)this->__pad_152C = v31 - 1; /*0x6402e6*/
      goto LABEL_62; /*0x6402ec*/
    }
    v32 = *(_DWORD *)this->__pad_1534; /*0x6402ee*/
    if ( v32 > v41 ) /*0x6402fa*/
    {
      *(_DWORD *)this->__pad_1534 = v32 - 1; /*0x6402fd*/
      goto LABEL_62; /*0x640303*/
    }
    v18 = this->field_1530; /*0x640305*/
    if ( v18 <= v39 ) /*0x640311*/
      goto LABEL_62; /*0x640311*/
    goto LABEL_60; /*0x640311*/
  }
  LOBYTE(this->field_1538) = 1; /*0x640168*/
  if ( v20 ) /*0x64016e*/
  {
    *(_DWORD *)this->__pad_152C = v19 + 1; /*0x6401de*/
    PowerBar::ComputeFill(&v42, &v39, &v41); /*0x6401f1*/
    v24 = *(_DWORD *)this->__pad_152C; /*0x6401f6*/
    if ( v24 > v42 ) /*0x640202*/
    {
      *(_DWORD *)this->__pad_152C = v24 - 1; /*0x640205*/
      goto LABEL_62; /*0x64020b*/
    }
    v25 = *(_DWORD *)this->__pad_1534; /*0x640210*/
    if ( v25 > v41 ) /*0x64021c*/
    {
      *(_DWORD *)this->__pad_1534 = v25 - 1; /*0x64021f*/
      goto LABEL_62; /*0x640225*/
    }
    v18 = this->field_1530; /*0x64022a*/
    if ( v18 <= v39 ) /*0x640236*/
      goto LABEL_62; /*0x640236*/
    goto LABEL_60; /*0x640236*/
  }
  *(_DWORD *)this->__pad_152C = v19 - 1; /*0x640175*/
  PowerBar::ComputeFill(&v41, &v39, &v42); /*0x640188*/
  v21 = *(_DWORD *)this->__pad_1534; /*0x64018d*/
  if ( v21 < v42 ) /*0x640199*/
  {
    *(_DWORD *)this->__pad_1534 = v21 + 1; /*0x64019c*/
    goto LABEL_62; /*0x6401a2*/
  }
  v22 = *(_DWORD *)this->__pad_152C; /*0x6401a7*/
  if ( v22 < v41 ) /*0x6401b3*/
  {
    *(_DWORD *)this->__pad_152C = v22 + 1; /*0x6401b6*/
    goto LABEL_62; /*0x6401bc*/
  }
  v23 = this->field_1530; /*0x6401c1*/
  if ( v23 < v39 ) /*0x6401cd*/
  {
    v15 = v23 + 1; /*0x6401d3*/
    goto LABEL_61; /*0x6401d4*/
  }
LABEL_62:
  if ( LOBYTE(this->field_1538) ) /*0x64031a*/
  {
    v33 = PowerBar::CalcFill(); /*0x640326*/
    v34 = *(_DWORD *)this->__pad_1534 + *(_DWORD *)this->__pad_152C + this->field_1530; /*0x64033f*/
    v42 = v33; /*0x640341*/
    v39 = v34; /*0x640347*/
    if ( v34 > v33 ) /*0x64034b*/
      v39 = v33; /*0x64034d*/
    Ticks = Timer::GetTicks(); /*0x64035e*/
    LOWORD(v36) = Math::RoundToInt((double)v39 / (double)v42 * 5.0); /*0x64036a*/
    v37 = v45; /*0x64036f*/
    this->field_1520 = Ticks; /*0x640373*/
    *(_DWORD *)this->__pad_1524 = v37; /*0x640379*/
    this->field_1528 = v36; /*0x64037f*/
  }
LABEL_66:
  TacticalClass::MouseInput((RadarClass *)this, a2, a3); /*0x640385*/
  return result; /*0x640396*/
}


