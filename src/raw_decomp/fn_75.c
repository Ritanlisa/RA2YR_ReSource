// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00750010  Audio::IsLoud  this=HouseClass  sig=csp ====
int __thiscall Audio::IsLoud(int *this)
{
  return *(float *)this >= 2.0; /*0x750024*/
}



// ==== 0x00750030  FootClass::CheckAccelLimit  this=HouseClass  sig=csp ====
int __thiscall FootClass::CheckAccelLimit(int *this)
{
  int result; // eax

  if ( *(float *)this < 2.0 ) /*0x75003d*/
    JUMPOUT(0x75004C); /*0x75004c*/
  nullsub_52(); /*0x750040*/
  return result;
}



// ==== 0x00750060  ObjectClass::Team_Create  this=ObjectClass  sig=csp ====
char __thiscall Team_Create_750060(ObjectClass *this, char a2)
{
  char result; // al

  result = a2; /*0x750060*/
  if ( a2 ) /*0x750066*/
    this->AbstractClass = (void *)-1098907648; /*0x750068*/
  else
    this->AbstractClass = 0; /*0x750071*/
  return result; /*0x75006e*/
}



// ==== 0x00750080  Crate::processCratePickup  this=Crate  sig=csp ====
void __thiscall Crate::processCratePickup(Crate *this, int a2)
{
  this->crate_timer[0] = 0; /*0x750080*/
}



// ==== 0x00750090  Power::ChangedHouse  this=Power  sig=csp ====
int __thiscall Power::ChangedHouse(Power *this, char a2)
{
  int result; // eax

  LOBYTE(result) = a2; /*0x750090*/
  if ( a2 ) /*0x750096*/
    this->Power_field_0x0 = 1065353216; /*0x750098*/
  else
    this->Power_field_0x0 = 0; /*0x7500a1*/
  return result; /*0x75009e*/
}



// ==== 0x007500B0  Timer::SetFlag  this=Timer  sig=csp ====
int __thiscall Timer::SetFlag(Timer *this, char a2)
{
  int result; // eax

  LOBYTE(result) = a2; /*0x7500b0*/
  if ( a2 ) /*0x7500b6*/
    *(_DWORD *)this->__pad_0 = 0x40000000; /*0x7500b8*/
  else
    *(_DWORD *)this->__pad_0 = 0; /*0x7500c1*/
  return result; /*0x7500be*/
}



// ==== 0x007500D0  FootClass::GetField  this=FootClass  sig=csp ====
int __thiscall FootClass::GetField(int *this)
{
  int result; // eax

  LOWORD(result) = Math::RoundToInt(*(float *)this * 100.0); /*0x7500d8*/
  return result;
}



// ==== 0x007500E0  FootClass::SetField  this=FootClass  sig=csp ====
int __thiscall FootClass::SetField(int *this, int a2)
{
  int result; // eax

  *(float *)this = (double)a2 * 0.01; /*0x7500ea*/
  return result; /*0x7500ec*/
}



// ==== 0x007500F0  sub_7500F0  this=-  sig=ida-proto ====
int sub_7500F0()
{
  dword_B1D300 = 0; /*0x7500f2*/
  dword_B1D304 = 0; /*0x7500f7*/
  dword_B1D308 = 0; /*0x7500fc*/
  dword_B1D30C = 0; /*0x750101*/
  return 0; /*0x750106*/
}



// ==== 0x00750110  sub_750110  this=-  sig=ida-proto ====
void sub_750110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75011c*/
  dbl_B1D318 = Math::Sqrt(v0 + v0); /*0x75012e*/
}



// ==== 0x00750140  sub_750140  this=-  sig=ida-proto ====
void sub_750140()
{
  dbl_B1D398 = dbl_B1D318 / 60.0; /*0x75014c*/
}



// ==== 0x00750160  sub_750160  this=-  sig=ida-proto ====
void sub_750160()
{
  dbl_B1D360 = 1.0 / dbl_B1D398; /*0x75016c*/
}



// ==== 0x00750180  sub_750180  this=-  sig=ida-proto ====
void sub_750180()
{
  dbl_B1D358 = 0.0174532925199433 * 45.0; /*0x75018c*/
}



// ==== 0x007501A0  sub_7501A0  this=-  sig=ida-proto ====
void sub_7501A0()
{
  dbl_B1D330 = 0.0174532925199433 * 60.0; /*0x7501ac*/
}



// ==== 0x007501C0  sub_7501C0  this=-  sig=ida-proto ====
void sub_7501C0()
{
  dbl_B1D2F8 = 0.0174532925199433 * 90.0; /*0x7501cc*/
}



// ==== 0x007501E0  sub_7501E0  this=-  sig=ida-proto ====
__int64 sub_7501E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B1D2F8 - dbl_B1D330); /*0x7501f2*/
  result = Math::RoundToInt(v0 * dbl_B1D318 * 0.5); /*0x750206*/
  dword_B1D3A0 = result; /*0x75020b*/
  return result; /*0x750210*/
}



// ==== 0x00750220  sub_750220  this=-  sig=ida-proto ====
void sub_750220()
{
  dbl_B1D338 = Math::ArcTan((double)dword_B1D3A0 * 0.00390625); /*0x750237*/
}



// ==== 0x00750250  sub_750250  this=-  sig=ida-proto ====
void sub_750250()
{
  dbl_B1D350 = Math::ArcTan((double)(2 * dword_B1D3A0) / dbl_B1D318); /*0x750272*/
}



// ==== 0x00750280  sub_750280  this=-  sig=ida-proto ====
__int64 sub_750280()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D3A0) + 0.5); /*0x75029b*/
  dword_B1D390 = result; /*0x7502a0*/
  return result; /*0x7502a6*/
}



// ==== 0x007502B0  sub_7502B0  this=-  sig=ida-proto ====
int sub_7502B0()
{
  word_B1D310 = 0; /*0x7502b2*/
  word_B1D312 = 0; /*0x7502b8*/
  return 0; /*0x7502be*/
}



// ==== 0x007502C0  sub_7502C0  this=-  sig=ida-proto ====
int sub_7502C0()
{
  dword_B1D340 = 0; /*0x7502c2*/
  dword_B1D344 = 0; /*0x7502c7*/
  dword_B1D348 = 0; /*0x7502cc*/
  return 0; /*0x7502d1*/
}



// ==== 0x007502E0  sub_7502E0  this=-  sig=ida-proto ====
int sub_7502E0()
{
  dword_B1D370 = 0; /*0x7502e5*/
  dword_B1D368 = 128; /*0x7502ef*/
  dword_B1D36C = 128; /*0x7502f4*/
  return 128; /*0x7502f9*/
}



// ==== 0x00750300  sub_750300  this=-  sig=ida-proto ====
int sub_750300()
{
  g_VocAudioConfig = 0; /*0x750307*/
  dword_B1D380 = 0; /*0x75030c*/
  byte_B1D384 = 1; /*0x750311*/
  byte_B1D385 = 0; /*0x750318*/
  dword_B1D378 = (int)&DynamicVectorClass<VocClass *>::`vftable'; /*0x75031d*/
  dword_B1D38C = 10; /*0x750327*/
  g_VocPlayState = 0; /*0x750331*/
  return atexit(sub_750340); /*0x75033c*/
}



// ==== 0x00750340  sub_750340  this=-  sig=ida-proto ====
void __cdecl sub_750340()
{
  dword_B1D378 = (int)&VectorClass<VocClass *>::`vftable'; /*0x750348*/
  if ( g_VocAudioConfig && byte_B1D385 ) /*0x75035c*/
  {
    __3_YAXPAX_Z(g_VocAudioConfig); /*0x75035f*/
    g_VocAudioConfig = 0; /*0x750367*/
  }
  byte_B1D385 = 0; /*0x75036d*/
  dword_B1D380 = 0; /*0x750373*/
}



// ==== 0x00750440  ObjectClass::LoadVocFromINI  this=ObjectClass  sig=csp ====
char __thiscall LoadVocFromINI(ObjectClass *this, unsigned __int8 ***a2)
{
  double v2; // st7
  unsigned __int8 *SampleName; // eax
  char *v5; // eax
  char *i; // eax
  char *v7; // eax
  int v10; // eax
  char *v11; // eax
  int Int_Overwrite; // eax
  char *v13; // eax
  char *v16; // eax
  char *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v20; // eax
  char *v21; // eax
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  char *v25; // eax
  int v26; // eax
  char *v27; // eax
  int v28; // eax
  char *v29; // eax
  int v30; // eax
  char *v31; // eax
  char *v32; // eax
  int v33; // ebx
  int v34; // ecx
  char *v35; // eax
  char *v36; // eax
  int v37; // edi
  int v38; // ecx
  double v40; // [esp+0h] [ebp-820h]
  double v41; // [esp+0h] [ebp-820h]
  float v42; // [esp+10h] [ebp-810h]
  int v43; // [esp+14h] [ebp-80Ch] BYREF
  int v44; // [esp+18h] [ebp-808h] BYREF
  int v45; // [esp+1Ch] [ebp-804h] BYREF
  char String[2048]; // [esp+20h] [ebp-800h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x750453*/
  if ( !this->AbstractClass ) /*0x750458*/
    return 0; /*0x750458*/
  SampleName = (unsigned __int8 *)VocClass::GetSampleName((char *)this->AbstractClass); /*0x750462*/
  if ( !INIClass::BinarySearchSection((int)a2, SampleName) ) /*0x75046a*/
    return 0; /*0x750912*/
  if ( this->AbstractClass ) /*0x75047c*/
    v5 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750482*/
  else
    v5 = g_Str_Invalid_Voc; /*0x750489*/
  INIClass::GetString( /*0x7504a5*/
    (INIClass *)a2,
    (unsigned __int8 *)v5,
    (unsigned __int8 *)aSounds,
    &g_INI_DefaultBuffer,
    String,
    2048);
  for ( i = strtok(String, asc_846570); i; i = strtok(0, asc_846570) ) /*0x7504be*/
    AddSampleVocClass((int)this->AbstractClass, i); /*0x7504c4*/
  if ( this->AbstractClass ) /*0x7504dc*/
    v7 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7504e2*/
  else
    v7 = g_Str_Invalid_Voc; /*0x7504e9*/
  __asm { fld flt_8464B4 } /*0x7504ee*/
  __asm { fstp [esp+820h+var_820]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)v7, g_INI_Key_Volume, v40); /*0x750502*/
  __asm /*0x750507*/
  {
    fmul ds:flt_7EAAE0
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x750518*/
  {
    __asm /*0x750524*/
    {
      fcom ds:flt_7E1748
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x75052f*/
    {
      __asm /*0x750531*/
      {
        fstp st
        fld ds:flt_7E1748
      }
    }
  }
  else
  {
    __asm /*0x75051a*/
    {
      fstp st
      fld ds:flt_7E2AC8
    }
  }
  __asm { fmul ds:flt_7EF38C } /*0x750539*/
  LOWORD(v10) = Math::RoundToInt(v2); /*0x75053f*/
  sub_406550((int)this->AbstractClass, v10); /*0x750548*/
  if ( this->AbstractClass ) /*0x75054d*/
    v11 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750553*/
  else
    v11 = g_Str_Invalid_Voc; /*0x75055a*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v11, aVshift, 0); /*0x750569*/
  sub_406620((int)this->AbstractClass, Int_Overwrite); /*0x750572*/
  if ( this->AbstractClass ) /*0x750577*/
    v13 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x75057d*/
  else
    v13 = g_Str_Invalid_Voc; /*0x750584*/
  __asm { fld flt_8464B8 } /*0x750589*/
  __asm { fstp [esp+820h+var_820]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)v13, aMinvolume, v41); /*0x75059d*/
  __asm /*0x7505a2*/
  {
    fmul ds:flt_7EAAE0
    fst [esp+818h+var_810]
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x7505b7*/
  {
    __asm /*0x7505c3*/
    {
      fld [esp+818h+var_810]
      fcomp ds:flt_7E1748
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x7505d2*/
      v42 = 0.0; /*0x7505d4*/
    sub_4065F0((ObjectClass *)this->AbstractClass, SLODWORD(v42)); /*0x7505e3*/
  }
  else
  {
    sub_4065F0((ObjectClass *)this->AbstractClass, 1065353216); /*0x7505c1*/
  }
  if ( this->AbstractClass ) /*0x7505e8*/
    v16 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7505ee*/
  else
    v16 = g_Str_Invalid_Voc; /*0x7505f5*/
  INIClass::GetString( /*0x750611*/
    (INIClass *)a2,
    (unsigned __int8 *)v16,
    (unsigned __int8 *)&g_INI_Key_TRUCKA.?[3],
    g_INI_Key_NORMAL,
    String,
    2048);
  v45 = dword_8464B0; /*0x750620*/
  sub_4067D0(String, &v45); /*0x750628*/
  sub_406540((int)this->AbstractClass, v45); /*0x750633*/
  if ( this->AbstractClass ) /*0x750638*/
    v17 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x75063e*/
  else
    v17 = g_Str_Invalid_Voc; /*0x750645*/
  v18 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v17, g_INI_Key_Attack, 0); /*0x750654*/
  sub_406520((int)this->AbstractClass, v18); /*0x75065d*/
  if ( this->AbstractClass ) /*0x750662*/
    v19 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750668*/
  else
    v19 = g_Str_Invalid_Voc; /*0x75066f*/
  v20 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v19, aDecay, 0); /*0x75067e*/
  sub_406530((int)this->AbstractClass, v20); /*0x750687*/
  if ( this->AbstractClass ) /*0x75068c*/
    v21 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750692*/
  else
    v21 = g_Str_Invalid_Voc; /*0x750699*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)v21, aControl, &g_INI_DefaultBuffer, String, 2048); /*0x7506b5*/
  v22 = strtok(String, asc_846570); /*0x7506c4*/
  v44 = dword_B1D3B0; /*0x7506d4*/
  if ( v22 ) /*0x7506d8*/
  {
    v44 = 0; /*0x7506da*/
    do /*0x7506fe*/
    {
      sub_406820(&v44, v22); /*0x7506e8*/
      v22 = strtok(0, asc_846570); /*0x7506f4*/
    }
    while ( v22 ); /*0x7506fe*/
  }
  sub_406570(this->AbstractClass, v44); /*0x750706*/
  if ( this->AbstractClass ) /*0x75070b*/
    v23 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750711*/
  else
    v23 = g_Str_Invalid_Voc; /*0x750718*/
  INIClass::GetString( /*0x750734*/
    (INIClass *)a2,
    (unsigned __int8 *)v23,
    (unsigned __int8 *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    String,
    2048);
  v24 = strtok(String, asc_846570); /*0x750743*/
  v43 = dword_8464BC; /*0x750753*/
  if ( v24 ) /*0x750757*/
  {
    v43 = 32; /*0x750759*/
    do /*0x75077d*/
    {
      Audio::ApplyFormatFlags(&v43, v24); /*0x750767*/
      v24 = strtok(0, asc_846570); /*0x750773*/
    }
    while ( v24 ); /*0x75077d*/
  }
  sub_4065C0((int)this->AbstractClass, v43); /*0x750785*/
  if ( this->AbstractClass ) /*0x75078a*/
    v25 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750790*/
  else
    v25 = g_Str_Invalid_Voc; /*0x750797*/
  v26 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v25, aLimit, dword_8464C4); /*0x7507ab*/
  sub_4065D0((int)this->AbstractClass, v26); /*0x7507b4*/
  if ( this->AbstractClass ) /*0x7507b9*/
    v27 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7507bf*/
  else
    v27 = g_Str_Invalid_Voc; /*0x7507c6*/
  v28 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v27, aLoop, 0); /*0x7507d5*/
  sub_406640((int)this->AbstractClass, v28); /*0x7507de*/
  if ( this->AbstractClass ) /*0x7507e3*/
    v29 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7507e9*/
  else
    v29 = g_Str_Invalid_Voc; /*0x7507f0*/
  v30 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v29, g_INI_Key_Range, dword_8464C0); /*0x750804*/
  sub_4065E0((int)this->AbstractClass, v30); /*0x75080d*/
  if ( this->AbstractClass ) /*0x750812*/
    v31 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750818*/
  else
    v31 = g_Str_Invalid_Voc; /*0x75081f*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)v31, aDelay, &g_INI_DefaultBuffer, String, 2048); /*0x75083c*/
  v32 = strtok(String, asc_846570); /*0x75084b*/
  v33 = 0; /*0x750853*/
  if ( v32 ) /*0x750857*/
  {
    v33 = atoi(v32); /*0x750866*/
    v32 = strtok(0, asc_846570); /*0x750868*/
  }
  v34 = v33; /*0x750872*/
  if ( v32 ) /*0x750874*/
    v34 = atoi(v32); /*0x75087f*/
  sub_406600((int)this->AbstractClass, v33, v34); /*0x750886*/
  if ( this->AbstractClass ) /*0x75088b*/
    v35 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750892*/
  else
    v35 = g_Str_Invalid_Voc; /*0x750899*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)v35, aFshift, &g_INI_DefaultBuffer, String, 2048); /*0x7508b5*/
  v36 = strtok(String, asc_846570); /*0x7508c4*/
  v37 = 0; /*0x7508cc*/
  if ( v36 ) /*0x7508d0*/
  {
    v37 = atoi(v36); /*0x7508df*/
    v36 = strtok(0, asc_846570); /*0x7508e1*/
  }
  v38 = v37; /*0x7508eb*/
  if ( v36 ) /*0x7508ed*/
    v38 = atoi(v36); /*0x7508f8*/
  sub_406610((int)this->AbstractClass, v37, v38); /*0x7508ff*/
  return 1; /*0x750904*/
}



// ==== 0x00750920  PlayVocClass  this=-  sig=csp ====
int __fastcall VocClass_Play(int a1, int a2, float a3, int a4)
{
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  unsigned int v8; // edi

  if ( !VocClass_VoicesEnabled ) /*0x75092c*/
    return 0; /*0x75092e*/
  v5 = 0; /*0x750935*/
  if ( a1 >= 0 && a1 < g_VocPlayState ) /*0x750943*/
    v5 = **((_DWORD **)g_VocAudioConfig + a1); /*0x75094d*/
  v6 = 0; /*0x750953*/
  if ( a4 ) /*0x750957*/
  {
    v7 = AudioSource::Get(a4); /*0x75095b*/
    v6 = v7; /*0x750960*/
    if ( v7 ) /*0x750964*/
    {
      if ( sub_406310(v7) != v5 ) /*0x75096f*/
      {
        VocClass::Release(v6); /*0x750973*/
        v6 = 0; /*0x750978*/
      }
    }
  }
  if ( v5 ) /*0x75097d*/
  {
    v8 = Math::RoundToInt(a3 * 16384.0); /*0x75098e*/
    if ( v8 >= 0x4000 ) /*0x750996*/
      v8 = 0x4000; /*0x750998*/
    if ( v6 || (v6 = AudioPool::ProcessQueue(v5)) != 0 ) /*0x7509ac*/
    {
      AudioMixer::PlayBuffer(v6, v8); /*0x7509b2*/
      AudioMixer::RequestOrEndBuffer(v6, a2); /*0x7509bd*/
    }
  }
  if ( a4 ) /*0x7509c5*/
    SetAudioSource(v5); /*0x7509cc*/
  return v6; /*0x750931*/
}



// ==== 0x007509E0  StartAudioControllerAt  this=-  sig=csp ====
int *__fastcall StartAudioControllerAt(int a1, _DWORD *a2, int **a3)
{
  int *v5; // esi
  _DWORD *v6; // edi
  int v7; // ebp
  int *v8; // eax
  double v9; // st7
  unsigned int v10; // eax
  unsigned int v11; // ebx

  if ( !VocClass_VoicesEnabled ) /*0x7509ea*/
    return 0; /*0x7509ec*/
  v5 = 0; /*0x7509f5*/
  v6 = 0; /*0x7509f7*/
  if ( a1 >= 0 && a1 < g_VocPlayState ) /*0x750a03*/
    v6 = (_DWORD *)**((_DWORD **)g_VocAudioConfig + a1); /*0x750a0d*/
  v7 = (int)a3; /*0x750a0f*/
  if ( a3 ) /*0x750a15*/
  {
    v8 = AudioSource::Get(a3); /*0x750a19*/
    v5 = v8; /*0x750a1e*/
    if ( v8 ) /*0x750a22*/
    {
      if ( (_DWORD *)sub_406310(v8) != v6 ) /*0x750a2d*/
      {
        VocClass::Release((int)v5); /*0x750a31*/
        v5 = 0; /*0x750a36*/
      }
    }
  }
  if ( v6 ) /*0x750a3a*/
  {
    v9 = ComputeAudioPosition(a2, &a3, *(float *)&v6); /*0x750a43*/
    if ( v9 <= 0.0 ) /*0x750a53*/
    {
      if ( v5 ) /*0x750a9a*/
      {
        VocClass::Release((int)v5); /*0x750a9e*/
        v5 = 0; /*0x750aa3*/
      }
    }
    else
    {
      LOWORD(v10) = Math::RoundToInt(v9 * 16384.0); /*0x750a5b*/
      v11 = v10; /*0x750a60*/
      if ( v10 >= 0x4000 ) /*0x750a68*/
        v11 = 0x4000; /*0x750a6a*/
      if ( v5 || (v5 = AudioPool::ProcessQueue(v6)) != 0 ) /*0x750a7e*/
      {
        AudioMixer::PlayBuffer(v5, v11); /*0x750a84*/
        AudioMixer::RequestOrEndBuffer((int)v5, (unsigned int)a3); /*0x750a8f*/
      }
    }
  }
  if ( v7 ) /*0x750aa7*/
    SetAudioSource(v7, v5, (int)v6); /*0x750aae*/
  return v5; /*0x7509ee*/
}



// ==== 0x00750AC0  ComputeAudioPosition  this=-  sig=csp ====
double __fastcall ComputeAudioPosition(_DWORD *a1, _DWORD *a2, int a3)
{
  ObjectClass *v4; // edi
  __int16 v6; // ax
  char v7; // bl
  int v8; // ecx
  int v9; // eax
  double v11; // st7
  int v12; // eax
  int v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st7
  int v18; // eax
  float v19; // [esp+10h] [ebp-24h]
  float v20; // [esp+14h] [ebp-20h]
  float v21; // [esp+18h] [ebp-1Ch]
  float v22; // [esp+1Ch] [ebp-18h]
  float v23; // [esp+20h] [ebp-14h]
  float v24; // [esp+20h] [ebp-14h]
  float v25; // [esp+24h] [ebp-10h]
  int v26[2]; // [esp+2Ch] [ebp-8h] BYREF

  v4 = (ObjectClass *)a3; /*0x750ac9*/
  *a2 = 0; /*0x750acd*/
  v21 = 0.0; /*0x750ade*/
  v23 = (double)*(int *)DSurface_ViewBounds.__pad_8 * 0.5; /*0x750aec*/
  v25 = (double)*(int *)&DSurface_ViewBounds.__pad_8[4] * 0.5; /*0x750afc*/
  v22 = v23 + v23; /*0x750b06*/
  a3 = 60 * sub_405130(v4); /*0x750b1a*/
  v20 = (float)a3; /*0x750b22*/
  v6 = sub_405160(v4); /*0x750b26*/
  v7 = v6; /*0x750b2b*/
  if ( (v6 & 0x800) == 0 ) /*0x750b30*/
    goto LABEL_7; /*0x750b30*/
  v8 = *a1 / 256; /*0x750b4b*/
  v9 = a1[1] / 256; /*0x750b4e*/
  LOWORD(a3) = v8; /*0x750b58*/
  HIWORD(a3) = v9; /*0x750b5d*/
  if ( (_WORD)v8 == *(_WORD *)&stru_B1D290.needsRedraw && (_WORD)v9 == *(_WORD *)&stru_B1D290.inOpenToppedTransport ) /*0x750b73*/
    return 0.0; /*0x750b82*/
  if ( (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) + 300) & 0x18) == 0 ) /*0x750b9b*/
    return 0.0; /*0x750b9d*/
LABEL_7:
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, a1, v26); /*0x750bb9*/
  v11 = (double)v26[0] - v23; /*0x750bc2*/
  v19 = v11; /*0x750bc6*/
  LOWORD(v12) = Math::RoundToInt(v11); /*0x750bca*/
  *(float *)&a3 = (float)(int)abs32(v12); /*0x750bdc*/
  LOWORD(v13) = Math::RoundToInt((double)v26[1] - v25); /*0x750be8*/
  v14 = (double)(int)abs32(v13); /*0x750bf6*/
  if ( (v7 & 0x40) == 0 ) /*0x750bfd*/
  {
    v15 = *(float *)&a3 - v23; /*0x750c03*/
    *(float *)&a3 = v15; /*0x750c07*/
    v14 = v14 - v25; /*0x750c11*/
    if ( v15 < 0.0 ) /*0x750c1e*/
      *(float *)&a3 = 0.0; /*0x750c20*/
    if ( v14 < 0.0 ) /*0x750c33*/
      v14 = 0.0; /*0x750c37*/
  }
  v24 = v14 + v14; /*0x750c3f*/
  if ( *(float *)&a3 < (double)v20 && v24 < (double)v20 && v20 > 0.0 ) /*0x750c70*/
  {
    if ( *(float *)&a3 <= (double)v24 ) /*0x750c7f*/
      v16 = v24; /*0x750c87*/
    else
      v16 = *(float *)&a3; /*0x750c81*/
    v21 = (v20 - v16) / v20; /*0x750c95*/
  }
  if ( (v7 & 0x10) != 0 && sub_405140((float *)v4) > v21 ) /*0x750cb0*/
    v21 = sub_405140((float *)v4); /*0x750cb9*/
  if ( v21 < 0.05 ) /*0x750ccc*/
    return 0.0; /*0x750cce*/
  v17 = -v22; /*0x750ce2*/
  if ( v19 >= v17 ) /*0x750cef*/
  {
    if ( v19 > (double)v22 ) /*0x750d06*/
      v19 = v22; /*0x750d0c*/
  }
  else
  {
    v19 = v17; /*0x750cf1*/
  }
  LOWORD(v18) = Math::RoundToInt(v19 * 8192.0 / v22 + 8192.0); /*0x750d24*/
  *a2 = v18; /*0x750d2e*/
  return v21; /*0x750b7b*/
}



// ==== 0x00750D40  StartAudioController  this=AbstractClass  sig=ida-proto ====
VocClass *__fastcall StartAudioController(_DWORD *a1, AudioSource *a2)
{
  VocClass *result; // eax
  VocClass *v5; // esi
  int v6; // eax
  AudioPool *v7; // edi
  double v8; // st7
  int *v9; // eax
  unsigned int v10; // eax
  float v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h] BYREF

  result = 0; /*0x750d43*/
  if ( !a2 ) /*0x750d4d*/
    return result; /*0x750d4d*/
  v5 = (VocClass *)AudioSource::Get(a2); /*0x750d5e*/
  v6 = VocClass::Check((VocClass *)a2); /*0x750d60*/
  v7 = (AudioPool *)v6; /*0x750d65*/
  if ( !v6 ) /*0x750d69*/
    goto LABEL_15; /*0x750d69*/
  v8 = ComputeAudioPosition(a1, &v12, v6); /*0x750d76*/
  if ( v8 <= 0.0 ) /*0x750d8a*/
  {
    if ( v5 ) /*0x750e01*/
    {
      VocClass::Release(v5); /*0x750e05*/
      v5 = 0; /*0x750e0a*/
    }
    goto LABEL_15; /*0x750e0a*/
  }
  if ( !v5 ) /*0x750d8e*/
  {
    if ( AudioMixer::SetVolume((AudioMixer *)v7) && VocClass_VoicesEnabled ) /*0x750da2*/
    {
      v9 = AudioPool::ProcessQueue(v7); /*0x750da6*/
      v5 = (VocClass *)v9; /*0x750dab*/
      if ( !v9 ) /*0x750daf*/
        goto LABEL_15; /*0x750daf*/
      sub_4052E0((ObjectClass *)v9); /*0x750db3*/
    }
    if ( v5 ) /*0x750dba*/
      goto LABEL_10; /*0x750dba*/
LABEL_15:
    SetAudioSource((int)a2, v5, (int)v7); /*0x750e0c*/
    return v5; /*0x750e16*/
  }
LABEL_10:
  v11 = v8; /*0x750dbc*/
  LOWORD(v10) = Math::RoundToInt(v11 * 16384.0); /*0x750dc6*/
  if ( v10 >= 0x4000 ) /*0x750dd0*/
    v10 = 0x4000; /*0x750dd2*/
  AudioMixer::PlayBuffer(v5, v10); /*0x750ddb*/
  AudioMixer::RequestOrEndBuffer((int)v5, v12); /*0x750de6*/
  SetAudioSource((int)a2, v5, (int)v7); /*0x750df0*/
  return v5; /*0x750df9*/
}



// ==== 0x00750E20  PlayAudioAt2  this=RandomStruct  sig=csp ====
int *__fastcall PlayAudioAt2(int a1, _DWORD *a2, int a3)
{
  int *result; // eax
  int v6; // esi
  int *started; // edi
  int v8; // eax

  if ( a1 < 0 ) /*0x750e29*/
    return 0; /*0x750e2d*/
  result = LinkedList::Next((int **)dword_B1D3A4); /*0x750e39*/
  v6 = (int)result; /*0x750e3e*/
  if ( result ) /*0x750e42*/
  {
    AudioController::Init(result + 3); /*0x750e50*/
    DListNode::InitEmpty((_DWORD *)v6); /*0x750e57*/
    *(_DWORD *)(v6 + 48) = 0; /*0x750e5c*/
    *(_DWORD *)(v6 + 32) = *a2; /*0x750e6b*/
    *(_DWORD *)(v6 + 36) = a2[1]; /*0x750e70*/
    *(_DWORD *)(v6 + 40) = a2[2]; /*0x750e76*/
    *(_DWORD *)(v6 + 44) = a3; /*0x750e7f*/
    started = StartAudioControllerAt(a1, (_DWORD *)(v6 + 32), (int **)(v6 + 12)); /*0x750e8e*/
    InsertAfterDListNode((int)unk_B1D320, (_DWORD *)v6); /*0x750e90*/
    v8 = ++dword_B1D3A8; /*0x750ea0*/
    if ( dword_B1D3A8 > dword_B1D3AC ) /*0x750ea9*/
      dword_B1D3AC = v8; /*0x750eab*/
    return started; /*0x750eb0*/
  }
  return result; /*0x750e2b*/
}



// ==== 0x00750EC0  UpdateVocClass  this=-  sig=ida-proto ====
int VocClass_Update()
{
  int result; // eax
  int v1; // esi
  int v2; // ebx
  int v3; // eax

  result = AudioQueue::GetNext(&unk_B1D320); /*0x750ec6*/
  v1 = result; /*0x750ecb*/
  if ( result ) /*0x750ecf*/
  {
    do /*0x750f30*/
    {
      v2 = AudioQueue::GetNextAlt(v1); /*0x750eda*/
      if ( !*(_DWORD *)(v1 + 48) ) /*0x750edc*/
        StartAudioController(v1 + 32, v1 + 12); /*0x750ee9*/
      result = AudioSource::Get(v1 + 12); /*0x750ef3*/
      if ( !result ) /*0x750efa*/
      {
        v3 = VocClass::Check(v1 + 12); /*0x750efe*/
        if ( !v3 || (result = AudioMixer::SetVolume(v3)) == 0 ) /*0x750f10*/
        {
          LinkedList::Init(v1); /*0x750f14*/
          result = PushFrontLinkedListAlt(dword_B1D3A4, v1); /*0x750f21*/
          --dword_B1D3A8; /*0x750f26*/
        }
      }
      v1 = v2; /*0x750f2e*/
    }
    while ( v2 ); /*0x750f30*/
  }
  return result; /*0x750f34*/
}



// ==== 0x00750F40  globalHelper_050F40  this=-  sig=csp ====
int __fastcall sub_750F40(_DWORD *a1, int a2)
{
  int result; // eax
  int *i; // esi

  result = AudioQueue::GetNext(unk_B1D320); /*0x750f4c*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x750f55*/
  {
    if ( (a2 & i[11]) != 0 && i[8] == *a1 && i[9] == a1[1] && i[10] == a1[2] ) /*0x750f77*/
      AudioFile::Stop(i + 3); /*0x750f7c*/
    result = AudioQueue::GetNextAlt(i); /*0x750f83*/
  }
  return result; /*0x750f8e*/
}



// ==== 0x00750FA0  AudioQueue::DrainAll  this=AudioQueue  sig=ida-proto ====
int AudioQueue_DrainAll()
{
  int result; // eax
  int *v1; // esi
  int Next_Alt; // edi

  result = AudioQueue::GetNext(unk_B1D320); /*0x750fa6*/
  v1 = (int *)result; /*0x750fab*/
  if ( result ) /*0x750faf*/
  {
    do /*0x750fe8*/
    {
      Next_Alt = AudioQueue::GetNextAlt(v1); /*0x750fbc*/
      AudioController::Stop(v1 + 3); /*0x750fbe*/
      LinkedList::Init((_DWORD **)v1); /*0x750fc5*/
      result = PushFrontLinkedListAlt(dword_B1D3A4, (int)v1); /*0x750fd2*/
      v1 = (int *)Next_Alt; /*0x750fdd*/
      --dword_B1D3A8; /*0x750fe2*/
    }
    while ( Next_Alt ); /*0x750fe8*/
  }
  return result; /*0x750feb*/
}



// ==== 0x00751040  sub_751040  this=-  sig=ida-proto ====
int sub_751040()
{
  int result; // eax
  int i; // esi
  int *v2; // eax

  result = AudioQueue::GetNext(unk_B1D320); /*0x751046*/
  for ( i = result; result; i = result ) /*0x75104f*/
  {
    ++*(_DWORD *)(i + 48); /*0x751055*/
    v2 = AudioSource::Get((int **)(i + 12)); /*0x75105b*/
    if ( v2 ) /*0x751062*/
      sub_4053E0((int)v2); /*0x751066*/
    result = AudioQueue::GetNextAlt((int *)i); /*0x75106d*/
  }
  return result; /*0x751078*/
}



// ==== 0x00751080  sub_751080  this=-  sig=ida-proto ====
int sub_751080()
{
  int result; // eax
  int i; // esi
  int v2; // eax
  int *v3; // eax

  result = AudioQueue::GetNext(unk_B1D320); /*0x751086*/
  for ( i = result; result; i = result ) /*0x75108f*/
  {
    if ( *(_DWORD *)(i + 48) ) /*0x751091*/
    {
      v2 = *(_DWORD *)(i + 48) - 1; /*0x75109b*/
      *(_DWORD *)(i + 48) = v2; /*0x75109e*/
      if ( v2 < 0 ) /*0x7510a1*/
        *(_DWORD *)(i + 48) = 0; /*0x7510a3*/
      v3 = AudioSource::Get((int **)(i + 12)); /*0x7510ad*/
      if ( v3 ) /*0x7510b4*/
        sub_405430((int)v3); /*0x7510b8*/
    }
    result = AudioQueue::GetNextAlt((int *)i); /*0x7510bf*/
  }
  return result; /*0x7510ca*/
}



// ==== 0x007510D0  Audio::InitFromINI  this=Audio  sig=csp ====
char __usercall Audio::InitFromINI@<al>(Audio *this, double a2@<st1>, double a3@<st0>)
{
  double *v3; // ecx
  double *v4; // edi
  char *v5; // eax
  char *v6; // eax
  int KeyCount; // eax
  int v8; // esi
  int v9; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v11; // esi
  char *v12; // ecx
  char *v13; // eax
  ObjectClass *v14; // eax
  ObjectClass *v15; // esi
  int v16; // eax
  int v18; // [esp+8h] [ebp-830h] BYREF
  int i; // [esp+14h] [ebp-824h]
  char Destination[32]; // [esp+18h] [ebp-820h] BYREF
  char String[2048]; // [esp+38h] [ebp-800h] BYREF

  v4 = v3; /*0x7510d9*/
  DListNode::Init((DListNode *)&unk_B1D320); /*0x7510e0*/
  dword_B1D3A4 = (VtableStub *)AllocLinkedListMemory(200, 60); /*0x7510f6*/
  dword_B1D3A8 = 0; /*0x751100*/
  dword_B1D3AC = 0; /*0x75110a*/
  if ( INIClass::BinarySearchSection((int)v4, g_INI_Key_Defaults) ) /*0x751114*/
  {
    INIClass::ReadDouble_Overwrite(v4, g_INI_Key_Defaults, g_INI_Key_Volume, flt_8464B4); /*0x75113e*/
    flt_8464B4 = a2; /*0x751143*/
    INIClass::ReadDouble_Overwrite(v4, g_INI_Key_Defaults, aMinvolume, flt_8464B8); /*0x751161*/
    flt_8464B8 = a3; /*0x751166*/
    INIClass::GetString( /*0x751187*/
      (INIClass *)v4,
      g_INI_Key_Defaults,
      (unsigned __int8 *)aPriority,
      g_INI_Key_NORMAL,
      String,
      2048);
    sub_4067D0(String, &dword_8464B0); /*0x751195*/
    INIClass::GetString((INIClass *)v4, g_INI_Key_Defaults, aControl, &g_INI_DefaultBuffer, String, 2048); /*0x7511b5*/
    v5 = strtok(String, asc_846570); /*0x7511c4*/
    if ( v5 ) /*0x7511ce*/
    {
      dword_B1D3B0 = 0; /*0x7511d0*/
      do /*0x7511f7*/
      {
        sub_406820(&dword_B1D3B0, v5); /*0x7511e1*/
        v5 = strtok(0, asc_846570); /*0x7511ed*/
      }
      while ( v5 ); /*0x7511f7*/
    }
    INIClass::GetString( /*0x751214*/
      (INIClass *)v4,
      g_INI_Key_Defaults,
      (unsigned __int8 *)g_INI_Key_Type,
      &g_INI_DefaultBuffer,
      String,
      2048);
    v6 = strtok(String, asc_846570); /*0x751223*/
    if ( v6 ) /*0x75122d*/
    {
      dword_8464BC = 32; /*0x75122f*/
      do /*0x751256*/
      {
        Audio::ApplyFormatFlags(&dword_8464BC, v6); /*0x751240*/
        v6 = strtok(0, asc_846570); /*0x75124c*/
      }
      while ( v6 ); /*0x751256*/
    }
    dword_8464C4 = INIClass::ReadInt_Overwrite((bool *)v4, g_INI_Key_Defaults, aLimit, dword_8464C4); /*0x751270*/
    dword_8464C0 = INIClass::ReadInt_Overwrite((bool *)v4, g_INI_Key_Defaults, g_INI_Key_Range, dword_8464C0); /*0x75128c*/
  }
  LOBYTE(KeyCount) = INIClass::BinarySearchSection((int)v4, g_INI_Key_SoundList) != 0; /*0x75129f*/
  if ( (_BYTE)KeyCount )
  {
    KeyCount = INIClass::GetKeyCount((char *)v4, g_INI_Key_SoundList); /*0x7512b1*/
    v8 = KeyCount; /*0x7512b6*/
    v9 = 0; /*0x7512b8*/
    for ( i = KeyCount; v9 < v8; ++v9 )
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex((char *)v4, g_INI_Key_SoundList, v9); /*0x7512da*/
      KeyCount = INIClass::GetString( /*0x7512e7*/
                   (INIClass *)v4,
                   g_INI_Key_SoundList,
                   StringByIndex,
                   &g_INI_DefaultBuffer,
                   Destination,
                   32);
      if ( KeyCount )
      {
        if ( &v18 == (int *)-16 ) /*0x7512fa*/
          goto LABEL_21; /*0x7512fa*/
        v11 = 0; /*0x751301*/
        if ( g_VocPlayState <= 0 ) /*0x751305*/
          goto LABEL_21; /*0x751305*/
        while ( 1 )
        {
          v12 = (char *)**((_DWORD **)g_VocAudioConfig + v11); /*0x75130f*/
          v13 = v12 ? VocClass::GetSampleName(v12) : g_Str_Invalid_Voc;
          if ( !_strcmpi(Destination, v13) ) /*0x751327*/
            break; /*0x751327*/
          if ( ++v11 >= g_VocPlayState ) /*0x75133b*/
            goto LABEL_21; /*0x75133b*/
        }
        if ( v11 == -1 ) /*0x751342*/
        {
LABEL_21:
          v14 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x751344*/
          v15 = v14; /*0x75134b*/
          if ( v14 ) /*0x751352*/
          {
            v14->vtable0 = 0; /*0x751354*/
            if ( g_VocPlayState < dword_B1D380 /*0x75138f*/
              || (byte_B1D385 || !dword_B1D380)
              && dword_B1D38C > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B1D378 + 8))(
                   &dword_B1D378,
                   dword_B1D380 + dword_B1D38C,
                   0) )
            {
              v16 = g_VocPlayState++; /*0x75139c*/
              *((_DWORD *)g_VocAudioConfig + v16) = v15; /*0x7513ab*/
            }
            v15->vtable0 = (int)Audio::ProcessMixerOutput(Destination); /*0x7513b7*/
          }
          else
          {
            v15 = 0; /*0x7513bb*/
          }
        }
        else
        {
          v15 = (ObjectClass *)*((_DWORD *)g_VocAudioConfig + v11); /*0x7513c5*/
        }
        LOBYTE(KeyCount) = LoadVocFromINI(v15, (unsigned __int8 ***)v4); /*0x7513cb*/
        v8 = i; /*0x7513d0*/
      }
    }
  }
  return KeyCount; /*0x7513dd*/
}



// ==== 0x007513F0  Audio::LoadSoundINI  this=Audio  sig=csp ====
void *Audio::LoadSoundINI(Audio *this)
{
  void *v1; // esi
  int v2; // eax
  void *result; // eax
  int Next; // esi
  int NextAlt; // edi
  int v6; // [esp+4h] [ebp-4h] BYREF

  while ( g_VocPlayState > 0 ) /*0x7513f9*/
  {
    v1 = *(void **)g_VocAudioConfig; /*0x751400*/
    if ( *(_DWORD *)g_VocAudioConfig ) /*0x751400*/
    {
      v6 = *(_DWORD *)g_VocAudioConfig; /*0x751416*/
      v2 = (*(int (__thiscall **)(int *, int *))(dword_B1D378 + 16))(&dword_B1D378, &v6); /*0x75141a*/
      if ( v2 != -1 && v2 < g_VocPlayState && v2 < --g_VocPlayState ) /*0x751435*/
      {
        do /*0x75144d*/
        {
          ++v2; /*0x75143d*/
          *((_DWORD *)g_VocAudioConfig + v2 - 1) = *((_DWORD *)g_VocAudioConfig + v2); /*0x751441*/
        }
        while ( v2 < g_VocPlayState ); /*0x75144d*/
      }
      __3_YAXPAX_Z(v1); /*0x751450*/
    }
  }
  result = dword_B1D3A4; /*0x751461*/
  if ( dword_B1D3A4 ) /*0x751468*/
  {
    Next = AudioQueue::GetNext((AudioQueue *)&stru_B1D290.isAliveFlag); /*0x751474*/
    if ( Next ) /*0x751478*/
    {
      do /*0x7514b1*/
      {
        NextAlt = AudioQueue::GetNextAlt((AudioQueue *)Next); /*0x751485*/
        AudioController::Stop((AudioController *)(Next + 12)); /*0x751487*/
        LinkedList::Init((LinkedList *)Next); /*0x75148e*/
        PushFrontLinkedListAlt(dword_B1D3A4, Next); /*0x75149b*/
        Next = NextAlt; /*0x7514a6*/
        --dword_B1D3A8; /*0x7514ab*/
      }
      while ( NextAlt ); /*0x7514b1*/
    }
    result = (void *)VtableStub::Push_407510(dword_B1D3A4); /*0x7514ba*/
    dword_B1D3A4 = 0; /*0x7514bf*/
  }
  return result; /*0x7514c9*/
}



// ==== 0x007514D0  VocClass::FindIndex  this=VocClass  sig=csp ====
int __thiscall VocClass::FindIndex(VocClass *this)
{
  int v2; // esi
  char *v3; // ecx
  char *v4; // eax

  if ( !this ) /*0x7514d6*/
    return -1; /*0x7514d6*/
  v2 = 0; /*0x7514dd*/
  if ( g_VocPlayState <= 0 ) /*0x7514e1*/
    return -1; /*0x751515*/
  while ( 1 )
  {
    v3 = (char *)**((_DWORD **)g_VocAudioConfig + v2); /*0x7514eb*/
    v4 = v3 ? VocClass::GetSampleName(v3) : g_Str_Invalid_Voc;
    if ( !_strcmpi((char *)this, v4) ) /*0x7514ff*/
      break; /*0x7514ff*/
    if ( ++v2 >= g_VocPlayState ) /*0x751513*/
      return -1; /*0x751513*/
  }
  return v2; /*0x751515*/
}



// ==== 0x00751520  ObjectClass::System_Get  this=ObjectClass  sig=csp ====
int __thiscall System_Get_751520(ObjectClass *this)
{
  int v2; // esi
  char *v3; // ecx
  char *v4; // eax

  if ( !this ) /*0x751526*/
    return 0; /*0x751526*/
  if ( !_strcmpi((char *)this, g_Str__none_) ) /*0x75152e*/
    return 0; /*0x75152e*/
  v2 = 0; /*0x75153f*/
  if ( g_VocPlayState <= 0 ) /*0x751543*/
    return 0; /*0x751577*/
  while ( 1 )
  {
    v3 = (char *)**((_DWORD **)g_VocAudioConfig + v2); /*0x75154d*/
    v4 = v3 ? VocClass::GetSampleName(v3) : g_Str_Invalid_Voc;
    if ( !_strcmpi((char *)this, v4) ) /*0x751561*/
      break; /*0x751561*/
    if ( ++v2 >= g_VocPlayState ) /*0x751575*/
      return 0; /*0x751575*/
  }
  return *((_DWORD *)g_VocAudioConfig + v2); /*0x751577*/
}



// ==== 0x00751590  VocClass::GetSampleNameByIndex  this=VocClass  sig=ida-proto ====
char *__fastcall VocClass::GetSampleNameByIndex(int a1)
{
  char *v1; // ecx

  if ( a1 < 0 || a1 >= g_VocPlayState ) /*0x75159a*/
    return g_Str__none_; /*0x7515b5*/
  v1 = (char *)**((_DWORD **)g_VocAudioConfig + a1); /*0x7515a4*/
  if ( v1 ) /*0x7515a8*/
    return VocClass::GetSampleName(v1); /*0x7515aa*/
  else
    return g_Str_Invalid_Voc; /*0x7515af*/
}



// ==== 0x007515C0  ObjectClass::System_Get_7515C0  this=ObjectClass  sig=csp ====
int __thiscall System_Get_7515C0(ObjectClass *this)
{
  int result; // eax
  ObjectClass **i; // esi

  result = 0; /*0x7515c6*/
  if ( g_VocPlayState <= 0 ) /*0x7515cb*/
    return -1; /*0x7515df*/
  for ( i = (ObjectClass **)g_VocAudioConfig; *i != this; ++i ) /*0x7515cd*/
  {
    if ( ++result >= g_VocPlayState ) /*0x7515dd*/
      return -1; /*0x7515dd*/
  }
  return result; /*0x7515e2*/
}



// ==== 0x00751620  SaveGame::SaveAudioQueueItems  this=SaveGame  sig=csp ====
int __thiscall SaveGame::SaveAudioQueueItems(SaveGame *this)
{
  int v2; // esi
  int i; // edi
  int v4; // esi
  char *v5; // ecx
  char *SampleName; // ebx
  char *v7; // ecx
  char *v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-14h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-10h] BYREF

  v11 = SaveGame::CountLinkedList((SaveGame *)&stru_B1D290.isAliveFlag); /*0x751637*/
  v2 = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(this, &v11, 4, 0); /*0x751647*/
  if ( v2 >= 0 )
  {
    for ( i = AudioQueue::GetNext((AudioQueue *)&stru_B1D290.isAliveFlag); i; i = AudioQueue::GetNextAlt((AudioQueue *)i) )
    {
      v4 = -1; /*0x751665*/
      v12[0] = -1; /*0x751668*/
      v5 = *(char **)(i + 20); /*0x75166c*/
      if ( v5 )
      {
        SampleName = VocClass::GetSampleName(v5); /*0x751678*/
        if ( SampleName )
        {
          v4 = 0; /*0x751683*/
          if ( g_VocPlayState <= 0 )
          {
LABEL_11:
            v4 = -1; /*0x7516bc*/
          }
          else
          {
            while ( 1 )
            {
              v7 = (char *)**((_DWORD **)g_VocAudioConfig + v4); /*0x751692*/
              v8 = v7 ? VocClass::GetSampleName(v7) : g_Str_Invalid_Voc;
              if ( !_strcmpi(SampleName, v8) ) /*0x7516a6*/
                break; /*0x7516a6*/
              if ( ++v4 >= g_VocPlayState ) /*0x7516ba*/
                goto LABEL_11; /*0x7516ba*/
            }
          }
        }
        v12[0] = v4; /*0x7516bf*/
      }
      v12[1] = *(_DWORD *)(i + 32); /*0x7516c8*/
      v9 = *(_DWORD *)this->__pad_0; /*0x7516cf*/
      v12[2] = *(_DWORD *)(i + 36); /*0x7516d2*/
      v12[3] = *(_DWORD *)(i + 40); /*0x7516e1*/
      v2 = (*(int (__stdcall **)(SaveGame *, _DWORD *, int, _DWORD))(v9 + 16))(this, v12, 16, 0); /*0x7516e8*/
      if ( v2 < 0 ) /*0x7516ec*/
        break; /*0x7516ec*/
    }
  }
  return v2; /*0x751701*/
}



// ==== 0x00751710  LoadGame::RestoreAudioState  this=LoadGame  sig=csp ====
int __thiscall LoadGame::RestoreAudioState(LoadGame *this)
{
  LoadGame *v1; // edi
  int Next; // esi
  int NextAlt; // ebx
  int result; // eax
  AudioMixer *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int *v8; // eax
  int *v9; // esi
  int v10; // ebx
  int v11; // eax
  int v13; // [esp+24h] [ebp-2Ch]
  int v14; // [esp+28h] [ebp-28h] BYREF
  int v15; // [esp+2Ch] [ebp-24h]
  int v16; // [esp+30h] [ebp-20h]
  int v17; // [esp+3Ch] [ebp-14h]
  _DWORD v18[4]; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x751717*/
  Next = AudioQueue::GetNext((AudioQueue *)&stru_B1D290.isAliveFlag); /*0x751727*/
  if ( Next ) /*0x75172b*/
  {
    do /*0x751763*/
    {
      NextAlt = AudioQueue::GetNextAlt((AudioQueue *)Next); /*0x751737*/
      AudioController::Stop((AudioController *)(Next + 12)); /*0x751739*/
      LinkedList::Init((LinkedList *)Next); /*0x751740*/
      PushFrontLinkedListAlt(dword_B1D3A4, Next); /*0x75174d*/
      Next = NextAlt; /*0x751758*/
      --dword_B1D3A8; /*0x75175d*/
    }
    while ( NextAlt ); /*0x751763*/
  }
  AudioMixer::Shutdown(); /*0x751765*/
  result = (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)v1->__pad_0 + 12))(v1, &v14, 4, 0); /*0x751776*/
  if ( result >= 0 ) /*0x75177b*/
  {
    v13 = 0; /*0x751785*/
    if ( v14 > 0 ) /*0x75178f*/
    {
      while ( 1 ) /*0x7517a1*/
      {
        result = (*(int (__stdcall **)(LoadGame *, _DWORD *, int, _DWORD))(*(_DWORD *)v1->__pad_0 + 12))(v1, v18, 16, 0); /*0x7517a1*/
        v16 = result; /*0x7517a6*/
        if ( result < 0 ) /*0x7517aa*/
          break; /*0x7517aa*/
        if ( v18[0] != -1 && v18[0] < g_VocPlayState && v18[0] >= 0 ) /*0x7517cb*/
        {
          v5 = (AudioMixer *)**((_DWORD **)g_VocAudioConfig + v18[0]); /*0x7517da*/
          if ( v5 ) /*0x7517de*/
          {
            if ( AudioMixer::SetVolume(v5) ) /*0x7517e4*/
            {
              v6 = v18[1]; /*0x7517f9*/
              v7 = v18[2]; /*0x7517fd*/
              v17 = v18[3]; /*0x751803*/
              v15 = v18[0]; /*0x751807*/
              if ( v18[0] >= 0 ) /*0x75180b*/
              {
                v8 = LinkedList::Next((LinkedList *)dword_B1D3A4); /*0x751813*/
                v9 = v8; /*0x751818*/
                if ( v8 ) /*0x75181c*/
                {
                  AudioController::Init((AudioController *)(v8 + 3)); /*0x751823*/
                  DListNode::InitEmpty((DListNode *)v9); /*0x75182a*/
                  v9[12] = 0; /*0x751831*/
                  v9[11] = 0; /*0x75183a*/
                  v9[8] = v6; /*0x75183d*/
                  v10 = v17; /*0x75183f*/
                  v9[9] = v7; /*0x751843*/
                  v9[10] = v10; /*0x751846*/
                  StartAudioControllerAt(v15, v9 + 8, (int **)v9 + 3); /*0x75184d*/
                  InsertAfterDListNode((int)&stru_B1D290.isAliveFlag, v9); /*0x751859*/
                  v11 = ++dword_B1D3A8; /*0x751869*/
                  if ( dword_B1D3A8 > dword_B1D3AC ) /*0x751871*/
                    dword_B1D3AC = v11; /*0x751873*/
                  v1 = this; /*0x751878*/
                }
              }
            }
          }
        }
        if ( ++v13 >= v14 ) /*0x75188b*/
          return v16; /*0x751891*/
      }
    }
  }
  return result; /*0x751895*/
}



// ==== 0x007518C0  SetVocClassEnabled  this=-  sig=ida-proto ====
void __fastcall VocClass_SetEnabled(char a1)
{
  VocClass_VoicesEnabled = a1; /*0x7518c0*/
}



// ==== 0x007518D0  _DynamicVectorClass_PAVVocClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_VocClass::Destroy(_DynamicVectorClass_PAVVocClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7518d6*/
  this->m_10 = 0; /*0x7518d9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7518e0*/
  {
    __3_YAXPAX_Z(v2); /*0x7518e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7518ee*/
  }
  BYTE1(this->m_C) = 0; /*0x7518f1*/
  this->m_8 = 0; /*0x7518f4*/
}



// ==== 0x00751900  _DynamicVectorClass_PAVVocClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VocClass::GetItemIndex(_DynamicVectorClass_PAVVocClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x751900*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x751915*/
  else
    return 0; /*0x751907*/
}



// ==== 0x00751920  _VectorClass_PAVVocClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VocClass::Get(_VectorClass_PAVVocClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x75192a*/
}



// ==== 0x00751930  _VectorClass_PAVVocClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VocClass::Add(_VectorClass_PAVVocClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x751932*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x75193d*/
  {
    v3 = 0; /*0x75193f*/
    if ( m_8 <= 0 ) /*0x751943*/
      return 1; /*0x751963*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x751945*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x75194b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x751954*/
    {
      ++v3; /*0x751956*/
      ++v4; /*0x751957*/
      if ( v3 >= m_8 ) /*0x75195c*/
        return 1; /*0x75195c*/
    }
  }
  return 0; /*0x75195e*/
}



// ==== 0x00751970  _VectorClass_PAVVocClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VocClass::Release(_VectorClass_PAVVocClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x75197c*/
  {
    LOBYTE(this->m_C) = 0; /*0x751986*/
    if ( a3 ) /*0x75198c*/
      v4 = a3; /*0x7519a2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75199e*/
    LOBYTE(this->m_C) = 1; /*0x7519a6*/
    if ( v4 ) /*0x7519aa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7519b5*/
      {
        m_8 = this->m_8; /*0x7519bc*/
        if ( a2 < m_8 ) /*0x7519c1*/
          m_8 = a2; /*0x7519c3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7519c9*/
          ++i; /*0x7519ce*/
        if ( BYTE1(this->m_C) ) /*0x7519db*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7519e6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7519ee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7519f7*/
      this->m_8 = a2; /*0x7519ff*/
      BYTE1(this->m_C) = a3 == 0; /*0x751a02*/
      return 1; /*0x751a08*/
    }
    else
    {
      return 0; /*0x7519af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVVocClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x751a12*/
    return 1; /*0x751a18*/
  }
}



// ==== 0x00751A20  _VectorClass_PAVVocClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_VocClass::Remove(_VectorClass_PAVVocClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x751a2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x751a33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x751a3b*/
  }
  BYTE1(this->m_C) = 0; /*0x751a3e*/
  this->m_8 = 0; /*0x751a41*/
}



// ==== 0x00751A50  _VectorClass_PAVVocClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VocClass::GetSize(_VectorClass_PAVVocClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x751a50*/
    return 0; /*0x751a58*/
  m_8 = this->m_8; /*0x751a5e*/
  result = 0; /*0x751a61*/
  if ( m_8 <= 0 ) /*0x751a65*/
    return -1; /*0x751a7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x751a6b*/
  {
    if ( ++result >= m_8 ) /*0x751a7a*/
      return -1; /*0x751a7a*/
  }
  return result; /*0x751a5a*/
}



// ==== 0x00751A90  _VectorClass_PAVVocClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VocClass::GetCapacity(_VectorClass_PAVVocClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x751a90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x751aa5*/
  else
    return 0; /*0x751a97*/
}



// ==== 0x00751AB0  _DynamicVectorClass_PAVVocClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_VocClass::SetCapacity(_DynamicVectorClass_PAVVocClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x751abc*/
  {
    LOBYTE(this->m_C) = 0; /*0x751ac2*/
    if ( a3 ) /*0x751ac8*/
      v4 = a3; /*0x751ade*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x751ada*/
    LOBYTE(this->m_C) = 1; /*0x751ae2*/
    if ( !v4 ) /*0x751ae6*/
      return 0; /*0x751b5a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x751ae8*/
    {
      m_8 = this->m_8; /*0x751aef*/
      if ( a2 < m_8 ) /*0x751af4*/
        m_8 = a2; /*0x751af6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x751afc*/
        ++i; /*0x751b01*/
      if ( BYTE1(this->m_C) ) /*0x751b0e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x751b19*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x751b21*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x751b2a*/
    this->m_8 = a2; /*0x751b32*/
    BYTE1(this->m_C) = a3 == 0; /*0x751b35*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVVocClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x751b3e*/
  }
  v7 = this->m_8; /*0x751b41*/
  if ( v7 < this->m_10 ) /*0x751b49*/
    this->m_10 = v7; /*0x751b4b*/
  return 1; /*0x751b4e*/
}



// ==== 0x00751B60  _DynamicVectorClass_PAVVocClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_VocClass::FindItemIndex(_DynamicVectorClass_PAVVocClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x751b60*/
  result = 0; /*0x751b63*/
  if ( m_10 <= 0 ) /*0x751b68*/
    return -1; /*0x751b7f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x751b6e*/
  {
    if ( ++result >= m_10 ) /*0x751b7d*/
      return -1; /*0x751b7d*/
  }
  return result; /*0x751b82*/
}



// ==== 0x00751B90  _VectorClass_PAVVocClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_VocClass::QueryInterface(_VectorClass_PAVVocClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x751b93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VocClass *>::`vftable'; /*0x751b96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x751ba0*/
  {
    __3_YAXPAX_Z(v3); /*0x751ba8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x751bb0*/
  }
  BYTE1(this->m_C) = 0; /*0x751bbb*/
  this->m_8 = 0; /*0x751bc1*/
  if ( (a2 & 1) != 0 ) /*0x751bc8*/
    __3_YAXPAX_Z(this); /*0x751bcb*/
  return this->__pad_0; /*0x751bd5*/
}



// ==== 0x00751BE0  _DynamicVectorClass_PAVVocClass::Constructor_VectorClass_VocClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_VocClass::Constructor_VectorClass_VocClass___(
        _DynamicVectorClass_PAVVocClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x751be3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VocClass *>::`vftable'; /*0x751be6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x751bf0*/
  {
    __3_YAXPAX_Z(v3); /*0x751bf8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x751c00*/
  }
  BYTE1(this->m_C) = 0; /*0x751c0b*/
  this->m_8 = 0; /*0x751c11*/
  if ( (a2 & 1) != 0 ) /*0x751c18*/
    __3_YAXPAX_Z(this); /*0x751c1b*/
  return this->__pad_0; /*0x751c25*/
}



// ==== 0x00751C30  Map_Load_751C30  this=-  sig=ida-proto ====
char sub_751C30()
{
  DWORD NumberOfFreeClusters; // [esp+10h] [ebp-1D0h] BYREF
  DWORD BytesPerSector; // [esp+14h] [ebp-1CCh] BYREF
  DWORD SectorsPerCluster; // [esp+18h] [ebp-1C8h] BYREF
  DWORD TotalNumberOfClusters; // [esp+1Ch] [ebp-1C4h] BYREF
  DWORD MaximumComponentLength[2]; // [esp+20h] [ebp-1C0h] BYREF
  DWORD FileSystemFlags; // [esp+28h] [ebp-1B8h] BYREF
  char v7[176]; // [esp+2Ch] [ebp-1B4h] BYREF
  CHAR Buffer[260]; // [esp+DCh] [ebp-104h] BYREF

  if ( !GetLogicalDriveStringsA(0x104u, Buffer) ) /*0x751c47*/
    return 0; /*0x751c54*/
  if ( strlen(Buffer) ) /*0x751c71*/
  {
    *(_DWORD *)Buffer = 23598; /*0x751c88*/
    memset(&v7[32], 0, 0x90u); /*0x751ca0*/
    *(_DWORD *)&v7[32] = GetDriveTypeA(Buffer); /*0x751cac*/
    GetDiskFreeSpaceA(Buffer, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters); /*0x751cbd*/
    *(_DWORD *)&v7[168] = NumberOfFreeClusters * BytesPerSector * SectorsPerCluster; /*0x751cdf*/
    *(_DWORD *)&v7[172] = TotalNumberOfClusters * BytesPerSector * SectorsPerCluster; /*0x751ced*/
    GetVolumeInformationA( /*0x751d18*/
      Buffer,
      &v7[36],
      0x40u,
      (LPDWORD)&v7[100],
      MaximumComponentLength,
      &FileSystemFlags,
      &v7[104],
      0x40u);
    sprintf(v7, "RA%d", 1); /*0x751d4f*/
    _strcmpi(v7, &v7[36]); /*0x751d5e*/
  }
  else
  {
    CD::`vftable'(dword_81C1D0); /*0x751da4*/
  }
  return 1; /*0x751c51*/
}



// ==== 0x00751DD0  sub_751DD0  this=-  sig=ida-proto ====
char __fastcall sub_751DD0(LPCSTR lpRootPathName, UINT *a2)
{
  DWORD v5; // eax
  bool v6; // zf
  DWORD SectorsPerCluster; // [esp+Ch] [ebp-18h] BYREF
  DWORD BytesPerSector; // [esp+10h] [ebp-14h] BYREF
  DWORD NumberOfFreeClusters; // [esp+14h] [ebp-10h] BYREF
  DWORD TotalNumberOfClusters; // [esp+18h] [ebp-Ch] BYREF
  DWORD FileSystemFlags; // [esp+1Ch] [ebp-8h] BYREF
  DWORD MaximumComponentLength; // [esp+20h] [ebp-4h] BYREF

  memset(a2, 0, 0x90u); /*0x751de4*/
  *a2 = GetDriveTypeA(lpRootPathName); /*0x751dec*/
  if ( !GetDiskFreeSpaceA( /*0x751e03*/
          lpRootPathName,
          &SectorsPerCluster,
          &BytesPerSector,
          &NumberOfFreeClusters,
          &TotalNumberOfClusters) )
    goto LABEL_2; /*0x751e0b*/
  v5 = BytesPerSector * SectorsPerCluster; /*0x751e2c*/
  v6 = NumberOfFreeClusters == 0; /*0x751e36*/
  a2[34] = NumberOfFreeClusters * BytesPerSector * SectorsPerCluster; /*0x751e38*/
  if ( !v6 ) /*0x751e3e*/
    return 0; /*0x751e42*/
  a2[35] = TotalNumberOfClusters * v5; /*0x751e4e*/
  if ( !GetVolumeInformationA( /*0x751e77*/
          lpRootPathName,
          (LPSTR)a2 + 4,
          0x40u,
          a2 + 17,
          &MaximumComponentLength,
          &FileSystemFlags,
          (LPSTR)a2 + 72,
          0x40u) )
  {
LABEL_2:
    Debug::Log(); /*0x751e0d*/
    return 0; /*0x751e23*/
  }
  return 1; /*0x751e1d*/
}



// ==== 0x00751EA0  sub_751EA0  this=-  sig=csp ====
HANDLE __fastcall sub_751EA0(const CHAR *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  const char *v4; // edi
  HANDLE result; // eax
  void *v7; // esi
  HANDLE v9; // [esp+10h] [ebp-248h]
  CHAR FileName[260]; // [esp+14h] [ebp-244h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+118h] [ebp-140h] BYREF

  v4 = a1; /*0x751eb0*/
  result = FindFirstFileA(a1, &FindFileData); /*0x751eba*/
  v7 = result; /*0x751ec0*/
  v9 = result; /*0x751ec5*/
  if ( result != (HANDLE)-1 ) /*0x751ec9*/
  {
    do /*0x751fef*/
    {
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 ) /*0x751edf*/
      {
        if ( _strcmpi(FindFileData.cFileName, asc_826598) ) /*0x751ef2*/
        {
          if ( _strcmpi(FindFileData.cFileName, asc_846610) ) /*0x751f0f*/
          {
            ++*a2; /*0x751f29*/
            strcpy(FileName, v4); /*0x751f43*/
            FileName[strlen(FileName) - 1] = 0; /*0x751f61*/
            strcat(FileName, FindFileData.cFileName); /*0x751f7f*/
            strcat(FileName, asc_84660C); /*0x751fab*/
            sub_751EA0(a3, a4); /*0x751fc2*/
            v7 = v9; /*0x751fc7*/
            v4 = a1; /*0x751fcb*/
          }
        }
      }
      else
      {
        ++*a3; /*0x751fdb*/
        *a4 += FindFileData.nFileSizeLow; /*0x751fe4*/
      }
    }
    while ( FindNextFileA(v7, &FindFileData) ); /*0x751fef*/
    return (HANDLE)FindClose(v7); /*0x751ffe*/
  }
  return result; /*0x752005*/
}



// ==== 0x00752020  sub_752020  this=-  sig=ida-proto ====
void sub_752020()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75202c*/
  dbl_B1D3E8 = Math::Sqrt(v0 + v0); /*0x75203e*/
}



// ==== 0x00752050  sub_752050  this=-  sig=ida-proto ====
void sub_752050()
{
  dbl_B1D490 = dbl_B1D3E8 / 60.0; /*0x75205c*/
}



// ==== 0x00752070  sub_752070  this=-  sig=ida-proto ====
void sub_752070()
{
  dbl_B1D438 = 1.0 / dbl_B1D490; /*0x75207c*/
}



// ==== 0x00752090  sub_752090  this=-  sig=ida-proto ====
void sub_752090()
{
  dbl_B1D430 = 0.0174532925199433 * 45.0; /*0x75209c*/
}



// ==== 0x007520B0  sub_7520B0  this=-  sig=ida-proto ====
void sub_7520B0()
{
  dbl_B1D400 = 0.0174532925199433 * 60.0; /*0x7520bc*/
}



// ==== 0x007520D0  sub_7520D0  this=-  sig=ida-proto ====
void sub_7520D0()
{
  dbl_B1D3C0 = 0.0174532925199433 * 90.0; /*0x7520dc*/
}



// ==== 0x007520F0  sub_7520F0  this=-  sig=ida-proto ====
__int64 sub_7520F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B1D3C0 - dbl_B1D400); /*0x752102*/
  result = Math::RoundToInt(v0 * dbl_B1D3E8 * 0.5); /*0x752116*/
  dword_B1D498 = result; /*0x75211b*/
  return result; /*0x752120*/
}



// ==== 0x00752130  sub_752130  this=-  sig=ida-proto ====
void sub_752130()
{
  dbl_B1D408 = Math::ArcTan((double)dword_B1D498 * 0.00390625); /*0x752147*/
}



// ==== 0x00752160  sub_752160  this=-  sig=ida-proto ====
void sub_752160()
{
  dbl_B1D420 = Math::ArcTan((double)(2 * dword_B1D498) / dbl_B1D3E8); /*0x752182*/
}



// ==== 0x00752190  sub_752190  this=-  sig=ida-proto ====
__int64 sub_752190()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D498) + 0.5); /*0x7521ab*/
  dword_B1D488 = result; /*0x7521b0*/
  return result; /*0x7521b6*/
}



// ==== 0x007521C0  sub_7521C0  this=-  sig=ida-proto ====
int sub_7521C0()
{
  word_B1D3D4 = 0; /*0x7521c2*/
  word_B1D3D6 = 0; /*0x7521c8*/
  return 0; /*0x7521ce*/
}



// ==== 0x007521D0  sub_7521D0  this=-  sig=ida-proto ====
int sub_7521D0()
{
  dword_B1D410 = 0; /*0x7521d2*/
  dword_B1D414 = 0; /*0x7521d7*/
  dword_B1D418 = 0; /*0x7521dc*/
  return 0; /*0x7521e1*/
}



// ==== 0x007521F0  sub_7521F0  this=-  sig=ida-proto ====
int sub_7521F0()
{
  dword_B1D448 = 0; /*0x7521f5*/
  dword_B1D440 = 128; /*0x7521ff*/
  dword_B1D444 = 128; /*0x752204*/
  return 128; /*0x752209*/
}



// ==== 0x00752210  sub_752210  this=-  sig=ida-proto ====
int sub_752210()
{
  g_InfantryRenderPool = 0; /*0x752217*/
  dword_B1D4A8 = 0; /*0x75221c*/
  byte_B1D4AC = 1; /*0x752221*/
  byte_B1D4AD = 0; /*0x752228*/
  dword_B1D4A0 = (int)&DynamicVectorClass<VoxClass *>::`vftable'; /*0x75222d*/
  dword_B1D4B4 = 10; /*0x752237*/
  g_InfantrySelectState = 0; /*0x752241*/
  return atexit(sub_752250); /*0x75224c*/
}



// ==== 0x00752250  sub_752250  this=-  sig=ida-proto ====
void __cdecl sub_752250()
{
  dword_B1D4A0 = (int)&VectorClass<VoxClass *>::`vftable'; /*0x752258*/
  if ( g_InfantryRenderPool && byte_B1D4AD ) /*0x75226c*/
  {
    __3_YAXPAX_Z(g_InfantryRenderPool); /*0x75226f*/
    g_InfantryRenderPool = 0; /*0x752277*/
  }
  byte_B1D4AD = 0; /*0x75227d*/
  dword_B1D4A8 = 0; /*0x752283*/
}



// ==== 0x00752290  Audio_Init_752290  this=-  sig=ida-proto ====
int sub_752290()
{
  char *v0; // esi
  int result; // eax
  void *Enabled; // eax

  dword_B1D3D8 = 0; /*0x752291*/
  dword_B1D428 = 0; /*0x75229b*/
  v0 = stru_B1D450; /*0x7522a5*/
  do /*0x7522ba*/
  {
    DListNode::Init(v0); /*0x7522ac*/
    v0 += 12; /*0x7522b1*/
  }
  while ( (int)v0 < (int)&unk_B1D480 ); /*0x7522ba*/
  DListNode::Init(&stru_B1D3F0); /*0x7522c1*/
  DListNode::Init(&stru_B1D3C8); /*0x7522cb*/
  result = (int)g_InfantryDrawState; /*0x7522d0*/
  dword_B1D4B8 = 0; /*0x7522d5*/
  dword_B1D4BC = 1; /*0x7522e1*/
  if ( g_InfantryDrawState /*0x752307*/
    || (Enabled = Audio::GetEnabled(),
        result = (int)AudioStream::Constructor(Enabled, 0xBB8u),
        (g_InfantryDrawState = (void *)result) != 0) )
  {
    SetAudioFileName(result, aEvaStream); /*0x752311*/
    AudioQueue::IsEmpty((int)g_InfantryDrawState, g_MixerChannel_Voice); /*0x752322*/
    AudioQueue::IsNotEmpty((int)g_InfantryDrawState, g_MixerChannel_Ambient); /*0x752333*/
    return 1; /*0x752338*/
  }
  return result; /*0x752309*/
}



// ==== 0x00752340  Audio_Cleanup  this=-  sig=ida-proto ====
void sub_752340()
{
  ThemeClass::ClearQueues(); /*0x752340*/
  if ( g_InfantryDrawState ) /*0x75234d*/
  {
    Audio::Release(g_InfantryDrawState); /*0x75234f*/
    AudioSample::Destructor(g_InfantryDrawState); /*0x75235a*/
    g_InfantryDrawState = 0; /*0x75235f*/
  }
}



// ==== 0x00752370  ThemeClass::ClearQueues  this=ThemeClass  sig=ida-proto ====
int __cdecl ThemeClass_ClearQueues()
{
  int result; // eax
  int i; // esi
  int j; // esi
  int *v3; // edi
  int k; // esi

  result = dword_B1D4BC; /*0x752370*/
  if ( dword_B1D4BC ) /*0x752377*/
  {
    if ( dword_B1D4B8 ) /*0x75238c*/
    {
      *(_DWORD *)(*((_DWORD *)dword_B1D4B8 + 3) + 80) = 2; /*0x752391*/
      __3_YAXPAX_Z(dword_B1D4B8); /*0x75239b*/
      dword_B1D4B8 = 0; /*0x7523a3*/
    }
    for ( i = AudioQueue::GetNext(&stru_B1D3F0); i; i = AudioQueue::GetNext(&stru_B1D3F0) ) /*0x7523bb*/
    {
      LinkedList::Init((_DWORD **)i); /*0x7523bf*/
      *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x7523c8*/
      __3_YAXPAX_Z((void *)i); /*0x7523cb*/
    }
    for ( j = AudioQueue::GetNext(&stru_B1D3C8); j; j = AudioQueue::GetNext(&stru_B1D3C8) ) /*0x7523f1*/
    {
      LinkedList::Init((_DWORD **)j); /*0x7523f5*/
      *(_DWORD *)(*(_DWORD *)(j + 12) + 80) = 2; /*0x7523fe*/
      __3_YAXPAX_Z((void *)j); /*0x752401*/
    }
    v3 = (int *)stru_B1D450; /*0x752419*/
    do /*0x752457*/
    {
      result = AudioQueue::GetNext(v3); /*0x752420*/
      for ( k = result; result; k = result ) /*0x752429*/
      {
        LinkedList::Init((_DWORD **)k); /*0x75242d*/
        *(_DWORD *)(*(_DWORD *)(k + 12) + 80) = 2; /*0x752436*/
        __3_YAXPAX_Z((void *)k); /*0x752439*/
        result = AudioQueue::GetNext(v3); /*0x752443*/
      }
      v3 += 3; /*0x75244e*/
    }
    while ( (int)v3 < (int)&unk_B1D480 ); /*0x752457*/
  }
  return result; /*0x75245c*/
}



// ==== 0x00752460  Team_Helper_752460  this=-  sig=ida-proto ====
char *__fastcall sub_752460(int a1)
{
  if ( a1 < 0 || a1 >= g_InfantrySelectState ) /*0x75246f*/
    return g_Str_none; /*0x75247a*/
  else
    return (char *)*((_DWORD *)g_InfantryRenderPool + a1); /*0x752476*/
}



// ==== 0x00752480  UpdateThemeManager  this=RandomStruct  sig=csp ====
int __fastcall UpdateThemeManager(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ebp
  int *v5; // ebx
  int i; // esi
  int *v7; // eax

  result = (int)g_InfantryDrawState; /*0x752480*/
  v4 = a2; /*0x752487*/
  if ( g_InfantryDrawState ) /*0x75248b*/
  {
    if ( a1 >= 0 && a1 < g_InfantrySelectState ) /*0x75249f*/
    {
      result = dword_B1D3D8; /*0x7524a5*/
      if ( !dword_B1D3D8 ) /*0x7524ac*/
      {
        v5 = (int *)*((_DWORD *)g_InfantryRenderPool + a1); /*0x7524b7*/
        result = dword_B1D4C4; /*0x7524ba*/
        if ( v5 != (int *)dword_B1D4C4 ) /*0x7524c1*/
        {
          if ( a2 == -1 ) /*0x7524ca*/
            v4 = v5[19]; /*0x7524cc*/
          if ( a3 == -1 ) /*0x7524d4*/
            a3 = v5[18]; /*0x7524d9*/
          if ( dword_B1D4C4 && v4 == 2 ) /*0x7524e4*/
          {
            for ( i = AudioQueue::GetNext(&stru_B1D3C8); i; i = AudioQueue::GetNext(&stru_B1D3C8) ) /*0x7524f5*/
            {
              LinkedList::Init((_DWORD **)i); /*0x7524f9*/
              *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x752502*/
              __3_YAXPAX_Z((void *)i); /*0x752509*/
            }
            if ( dword_B1D4C4 ) /*0x752529*/
            {
              *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x75252b*/
              dword_B1D4C4 = 0; /*0x752532*/
            }
            if ( g_InfantryDrawState ) /*0x752544*/
              Audio::Release(g_InfantryDrawState); /*0x752546*/
            ThemeClass::ClearQueues(); /*0x75254b*/
            qword_B1D4D0 = 0; /*0x752552*/
          }
          v7 = AudioQueue::FindByData(v5); /*0x75255e*/
          if ( !v7 || v7[6] != v4 ) /*0x75256a*/
            Audio_Load((int)v5, v4, a3); /*0x752575*/
          UpdateThemes(); /*0x75257a*/
        }
      }
    }
  }
  return result; /*0x75257f*/
}



// ==== 0x00752590  Audio_Load  this=AudioQueue  sig=csp ====
void __fastcall sub_752590(int a1, int a2, int a3)
{
  _DWORD *v5; // esi

  v5 = __2_YAPAXI_Z(0x20u); /*0x75259f*/
  DListNode::InitEmpty(v5); /*0x7525a6*/
  v5[3] = a1; /*0x7525af*/
  v5[5] = a3; /*0x7525b2*/
  v5[6] = a2; /*0x7525b5*/
  v5[7] = dword_B1D4C0 % 100; /*0x7525c5*/
  ++dword_B1D4C0; /*0x7525d2*/
  *(_DWORD *)(a1 + 80) = 1; /*0x7525d8*/
  if ( a2 == 3 ) /*0x7525df*/
  {
    InsertAfterDListNode((int)&stru_B1D3C8, v5); /*0x7525e8*/
  }
  else if ( a2 == 1 ) /*0x7525f7*/
  {
    InsertAfterDListNode(12 * a3 + 11654224, v5); /*0x752605*/
  }
  else if ( a3 == 3 ) /*0x752614*/
  {
    InsertAfterDListNode((int)&stru_B1D3F0, v5); /*0x75261d*/
  }
  else if ( (int *)dword_B1D3CC == &stru_B1D3C8 /*0x75264d*/
         && (int *)dword_B1D3F4 == &stru_B1D3F0
         && (!dword_B1D4B8 || *((_DWORD *)dword_B1D4B8 + 5) < a3) )
  {
    dword_B1D4B8 = v5; /*0x75264f*/
  }
  else
  {
    *(_DWORD *)(a1 + 80) = 2; /*0x75265d*/
    __3_YAXPAX_Z(v5); /*0x752664*/
  }
}



// ==== 0x00752680  AudioQueue::FindByData  this=AudioQueue  sig=csp ====
int *__thiscall AudioQueue::FindByData(AudioQueue *this)
{
  int *result; // eax
  AudioQueue *v3; // esi

  result = (int *)AudioQueue::GetNext((AudioQueue *)&stru_B1D3F0); /*0x752689*/
  if ( result ) /*0x752690*/
  {
    while ( (AudioQueue *)result[3] != this ) /*0x752695*/
    {
      result = (int *)AudioQueue::GetNextAlt((AudioQueue *)result); /*0x752699*/
      if ( !result ) /*0x7526a0*/
        goto LABEL_4; /*0x7526a0*/
    }
  }
  else
  {
LABEL_4:
    result = (int *)dword_B1D4B8; /*0x7526a2*/
    if ( !dword_B1D4B8 || *((AudioQueue **)dword_B1D4B8 + 3) != this ) /*0x7526ae*/
    {
      v3 = &stru_B1D474; /*0x7526b0*/
      while ( 1 ) /*0x7526b7*/
      {
        result = (int *)AudioQueue::GetNext(v3); /*0x7526b7*/
        if ( result ) /*0x7526be*/
          break; /*0x7526be*/
LABEL_10:
        v3 = (AudioQueue *)((char *)v3 - 12); /*0x7526d0*/
        if ( (int)v3 < (int)&stru_B1D450 ) /*0x7526d9*/
        {
          result = (int *)AudioQueue::GetNext((AudioQueue *)&stru_B1D3C8); /*0x7526e0*/
          if ( !result ) /*0x7526e7*/
            return 0; /*0x7526f9*/
          while ( (AudioQueue *)result[3] != this ) /*0x7526ec*/
          {
            result = (int *)AudioQueue::GetNextAlt((AudioQueue *)result); /*0x7526f0*/
            if ( !result ) /*0x7526f7*/
              return 0; /*0x7526f7*/
          }
          return result; /*0x7526ec*/
        }
      }
      while ( (AudioQueue *)result[3] != this ) /*0x7526c3*/
      {
        result = (int *)AudioQueue::GetNextAlt((AudioQueue *)result); /*0x7526c7*/
        if ( !result ) /*0x7526ce*/
          goto LABEL_10; /*0x7526ce*/
      }
    }
  }
  return result; /*0x7526fb*/
}



// ==== 0x00752700  VoxClass::FindAndPlay  this=VoxClass  sig=csp ====
int __thiscall VoxClass::FindAndPlay(VoxClass *this, int a2)
{
  int v2; // edx
  int v4; // ebx
  int v5; // esi
  int result; // eax

  v4 = v2; /*0x752704*/
  if ( this ) /*0x752708*/
  {
    v5 = 0; /*0x752710*/
    if ( g_InfantrySelectState <= 0 ) /*0x752714*/
    {
      return UpdateThemeManager(-1, v4, a2); /*0x752736*/
    }
    else
    {
      while ( _strcmpi((char *)this, *((char **)g_InfantryRenderPool + v5)) ) /*0x75272a*/
      {
        if ( ++v5 >= g_InfantrySelectState ) /*0x752734*/
          return UpdateThemeManager(-1, v4, a2); /*0x752734*/
      }
      return UpdateThemeManager(v5, v4, a2); /*0x752754*/
    }
  }
  return result; /*0x752746*/
}



// ==== 0x00752760  UpdateThemes  this=-  sig=ida-proto ====
void ThemeClass_Update()
{
  unsigned __int64 v0; // rdi
  unsigned __int64 v1; // rax
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  char *v5; // edi
  int v6; // eax
  int v7; // ebp
  const char *v8; // edi
  _BYTE v9[16]; // [esp+0h] [ebp-118h] BYREF
  int v10; // [esp+10h] [ebp-108h]
  int v11; // [esp+14h] [ebp-104h]
  char v12[5]; // [esp+18h] [ebp-100h] BYREF

  if ( byte_A8ED64 ) /*0x752773*/
    return; /*0x752773*/
  if ( !Audio::IsSoundEnabled() ) /*0x752779*/
    return; /*0x752779*/
  if ( !g_InfantryDrawState ) /*0x75278e*/
    return; /*0x75278e*/
  if ( Audio::IsSoundPlaying() ) /*0x752794*/
    return; /*0x752794*/
  v0 = qword_B1D4D0 + ThemeClass::GetValue(g_InfantryDrawState); /*0x7527b4*/
  LODWORD(v1) = Audio::Callback(); /*0x7527be*/
  if ( v1 <= v0 || dword_B1D428 ) /*0x7527dc*/
    return; /*0x7527dc*/
  if ( dword_B1D4C4 ) /*0x7527e9*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7527eb*/
    dword_B1D4C4 = 0; /*0x7527f2*/
  }
  v11 = 0; /*0x7527fd*/
  v10 = 0; /*0x752801*/
  v2 = AudioQueue::GetNext(&stru_B1D3C8); /*0x752805*/
  v3 = (_DWORD *)v2; /*0x75280a*/
  if ( v2 ) /*0x75280e*/
  {
    LinkedList::Init(v2); /*0x752812*/
    if ( !dword_B1D4B8 ) /*0x75281e*/
      goto LABEL_22; /*0x75281e*/
    goto LABEL_11; /*0x75281e*/
  }
  v4 = AudioQueue::GetNext(&stru_B1D3F0); /*0x75283a*/
  v3 = (_DWORD *)v4; /*0x75283f*/
  if ( !v4 ) /*0x752843*/
  {
    v3 = dword_B1D4B8; /*0x752866*/
    if ( dword_B1D4B8 ) /*0x75286e*/
    {
      dword_B1D4B8 = 0; /*0x752870*/
    }
    else
    {
      v5 = (char *)&stru_B1D474; /*0x752878*/
      while ( 1 ) /*0x75287f*/
      {
        v6 = AudioQueue::GetNext(v5); /*0x75287f*/
        v3 = (_DWORD *)v6; /*0x752884*/
        if ( v6 ) /*0x752888*/
          break; /*0x752888*/
        v5 -= 12; /*0x75288a*/
        if ( (int)v5 < (int)stru_B1D450 ) /*0x752893*/
          return; /*0x752893*/
      }
      LinkedList::Init(v6); /*0x7528a2*/
    }
    goto LABEL_22; /*0x752876*/
  }
  LinkedList::Init(v4); /*0x752847*/
  if ( dword_B1D4B8 ) /*0x752853*/
  {
LABEL_11:
    __3_YAXPAX_Z(dword_B1D4B8); /*0x752824*/
    dword_B1D4B8 = 0; /*0x75282d*/
  }
LABEL_22:
  if ( v3 ) /*0x7528a9*/
  {
    v7 = v3[3]; /*0x7528af*/
    if ( v9 != (_BYTE *)-20 ) /*0x7528b8*/
      v11 = v3[6]; /*0x7528bd*/
    if ( v9 != (_BYTE *)-16 ) /*0x7528c7*/
      v10 = v3[5]; /*0x7528cc*/
    __3_YAXPAX_Z(v3); /*0x7528d1*/
    if ( v7 ) /*0x7528db*/
    {
      *(_DWORD *)(v7 + 80) = 2; /*0x7528e1*/
      if ( dword_B1D4C8 ) /*0x7528ef*/
      {
        v8 = (const char *)(v7 + 53); /*0x7528f9*/
        if ( dword_B1D4C8 != 1 ) /*0x7528fc*/
          v8 = (const char *)(v7 + 44); /*0x7528fe*/
      }
      else
      {
        v8 = (const char *)(v7 + 62); /*0x7528f1*/
      }
      strcpy(v12, v8); /*0x75291d*/
      strcat(v12, g_Str_File__WAV); /*0x752949*/
      if ( ThreadAudioMixerMain(g_InfantryDrawState, 1) ) /*0x75295c*/
      {
        qword_B1D4D0 = 500; /*0x75296d*/
        dword_B1D4C4 = v7; /*0x75297d*/
        dword_B1D3B8 = v11; /*0x752983*/
        dword_B1D3E0 = v10; /*0x752988*/
        *(_DWORD *)(v7 + 80) = 0; /*0x75298e*/
      }
    }
  }
}



// ==== 0x007529A0  StopThemeClass  this=-  sig=ida-proto ====
void __fastcall ThemeClass_Stop(char a1)
{
  if ( dword_B1D4C4 ) /*0x7529aa*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7529ac*/
    dword_B1D4C4 = 0; /*0x7529b3*/
  }
  if ( g_InfantryDrawState ) /*0x7529c5*/
    Audio::Release(g_InfantryDrawState); /*0x7529c7*/
  if ( a1 ) /*0x7529cf*/
    ThemeClass::ClearQueues(); /*0x7529d1*/
}



// ==== 0x007529E0  Audio::IsPlaying  this=Audio  sig=csp ====
int Audio_IsPlaying()
{
  char *v0; // eax

  UpdateThemes(); /*0x7529e0*/
  if ( !g_InfantryDrawState ) /*0x7529ed*/
    return 0; /*0x752a2d*/
  if ( !Audio::IsSoundPlaying(g_InfantryDrawState) /*0x752a17*/
    && (_UNKNOWN *)dword_B1D3CC == &stru_B1D3C8
    && (_UNKNOWN *)dword_B1D3F4 == &stru_B1D3F0
    && !dword_B1D4B8 )
  {
    v0 = stru_B1D450; /*0x752a19*/
    while ( *((char **)v0 + 1) == v0 ) /*0x752a21*/
    {
      v0 += 12; /*0x752a23*/
      if ( (int)v0 >= (int)&unk_B1D480 ) /*0x752a2b*/
        return 0; /*0x752a2b*/
    }
  }
  return 1; /*0x752a2f*/
}



// ==== 0x00752A40  ClearThemeQueuePlaylist  this=-  sig=ida-proto ====
void __fastcall ThemeQueue_ClearPlaylist(int a1)
{
  int i; // esi

  if ( a1 >= 0 && a1 < g_InfantrySelectState ) /*0x752a4e*/
  {
    for ( i = AudioQueue::FindByData(*((_DWORD *)g_InfantryRenderPool + a1)); /*0x752a61*/
          i;
          i = AudioQueue::FindByData(*((_DWORD *)g_InfantryRenderPool + a1)) )
    {
      if ( *(_DWORD *)(i + 4) != i ) /*0x752a66*/
        LinkedList::Init((_DWORD **)i); /*0x752a6a*/
      if ( (void *)i == dword_B1D4B8 ) /*0x752a75*/
        dword_B1D4B8 = 0; /*0x752a77*/
      *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x752a85*/
      __3_YAXPAX_Z((void *)i); /*0x752a8c*/
    }
  }
}



// ==== 0x00752AB0  ThemeClass::GetField  this=AnimClass  sig=ida-proto ====
void __fastcall ThemeClass::GetField(int a1)
{
  dword_846614 = a1; /*0x752ab6*/
  if ( a1 >= 255 ) /*0x752abc*/
    dword_846614 = 255; /*0x752abe*/
}



// ==== 0x00752AD0  Audio_Init_752AD0  this=-  sig=ida-proto ====
int sub_752AD0()
{
  int result; // eax
  void *Enabled; // eax

  result = (int)dword_B1D4D8; /*0x752ad0*/
  if ( dword_B1D4D8 /*0x752af2*/
    || (Enabled = Audio::GetEnabled(),
        result = (int)AudioStream::Constructor(Enabled, 0xBB8u),
        (dword_B1D4D8 = (void *)result) != 0) )
  {
    SetAudioFileName(result, aTauntStream); /*0x752afc*/
    AudioQueue::IsEmpty((int)g_InfantryDrawState, g_MixerChannel_Voice); /*0x752b0d*/
    AudioQueue::IsNotEmpty((int)g_InfantryDrawState, g_MixerChannel_Ambient); /*0x752b1e*/
    unk_B1D480 = 0; /*0x752b23*/
    return 1; /*0x752b2d*/
  }
  return result; /*0x752af4*/
}



// ==== 0x00752B40  Audio_Cleanup_752B40  this=-  sig=ida-proto ====
void sub_752B40()
{
  if ( dword_B1D4D8 ) /*0x752b48*/
  {
    Audio::Release(dword_B1D4D8); /*0x752b4a*/
    AudioSample::Destructor(dword_B1D4D8); /*0x752b55*/
    dword_B1D4D8 = 0; /*0x752b5a*/
  }
}



// ==== 0x00752B70  PlayTauntClass  this=-  sig=ida-proto ====
int __fastcall TauntClass_Play(int a1)
{
  char v1; // al
  int result; // eax
  const char *v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]
  char Buffer[20]; // [esp+0h] [ebp-14h] BYREF

  if ( !dword_B1D4D8 ) /*0x752b7a*/
    return 0; /*0x752b7a*/
  if ( unk_B1D480 ) /*0x752b87*/
    return 0; /*0x752b87*/
  v1 = a1 & 0xF; /*0x752b8f*/
  if ( (a1 & 0xF) == 0 || (a1 & 0xFu) > 8 ) /*0x752b9b*/
    return 0; /*0x752c63*/
  switch ( (a1 >> 4) & 0xF ) /*0x752bb0*/
  {
    case 0: /*0x752bb0*/
      v4 = v1; /*0x752bba*/
      v3 = aTauntsTauam02i; /*0x752bbb*/
      goto LABEL_16; /*0x752bc0*/
    case 1: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauko%02i.wav", v1); /*0x752bd0*/
      goto LABEL_17; /*0x752bd0*/
    case 2: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taufr%02i.wav", v1); /*0x752be0*/
      goto LABEL_17; /*0x752be0*/
    case 3: /*0x752bb0*/
      v4 = v1; /*0x752be5*/
      v3 = aTauntsTauge02i; /*0x752be6*/
      goto LABEL_16; /*0x752beb*/
    case 4: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taubr%02i.wav", v1); /*0x752bfb*/
      goto LABEL_17; /*0x752bfb*/
    case 5: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauli%02i.wav", v1); /*0x752c0b*/
      goto LABEL_17; /*0x752c0b*/
    case 6: /*0x752bb0*/
      v4 = v1; /*0x752c10*/
      v3 = aTauntsTauir02i; /*0x752c11*/
      goto LABEL_16; /*0x752c16*/
    case 7: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taucu%02i.wav", v1); /*0x752c26*/
      goto LABEL_17; /*0x752c26*/
    case 8: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauru%02i.wav", v1); /*0x752c36*/
      goto LABEL_17; /*0x752c36*/
    case 9: /*0x752bb0*/
      v4 = v1; /*0x752c3b*/
      v3 = aTauntsTauyu02i; /*0x752c3c*/
LABEL_16:
      sprintf(Buffer, v3, v4); /*0x752c41*/
LABEL_17:
      result = ThreadAudioMixerMain(dword_B1D4D8, Buffer, 0); /*0x752c4b*/
      break; /*0x752c62*/
    default:
      return 0;
  }
  return result; /*0x752c5f*/
}



// ==== 0x00752CA0  ??__F?m_badAllocExceptionPtr___ExceptionPtr__0V?$shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ  this=-  sig=ida-proto ====
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ()
{
  if ( dword_B1D4D8 ) /*0x752ca8*/
    Audio::Release(dword_B1D4D8); /*0x752caa*/
}



// ==== 0x00752CB0  ObjectClass::method_752CB0  this=ObjectClass  sig=csp ====
int __thiscall sub_752CB0(ObjectClass *this, const char *a2)
{
  int v3; // eax

  this->owningHouseIndex = 1065353216; /*0x752cbe*/
  strcpy((char *)this, a2); /*0x752cd4*/
  LOBYTE(this->fallRate) = 0; /*0x752cdf*/
  BYTE1(this->attachedTag) = 0; /*0x752ce2*/
  BYTE2(this->ambientSoundController[0]) = 0; /*0x752ce5*/
  this->ambientSoundController[3] = 1; /*0x752ce8*/
  this->ambientSoundController[4] = 0; /*0x752cef*/
  this->customSound_controller[0] = 2; /*0x752cf2*/
  if ( g_InfantrySelectState < dword_B1D4A8 /*0x752d2e*/
    || (byte_B1D4AD || !dword_B1D4A8)
    && dword_B1D4B4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B1D4A0 + 8))(
         &dword_B1D4A0,
         dword_B1D4A8 + dword_B1D4B4,
         0) )
  {
    v3 = g_InfantrySelectState++; /*0x752d3b*/
    *((_DWORD *)g_InfantryRenderPool + v3) = this; /*0x752d4a*/
  }
  return (int)this; /*0x752d4d*/
}



// ==== 0x00752DB0  AudioEvent::LoadFromINI  this=AudioEvent  sig=csp ====
char __thiscall AudioEvent::LoadFromINI(void *this, unsigned __int8 ***a2)
{
  double v5; // [esp+0h] [ebp-20Ch]
  char Source[500]; // [esp+18h] [ebp-1F4h] BYREF

  _ESI = this; /*0x752dc0*/
  INIClass::ResetSection((INIClass *)a2); /*0x752dc4*/
  *((_DWORD *)_ESI + 10) = 1065353216; /*0x752dcc*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)_ESI) ) /*0x752dd3*/
    return 0; /*0x752fec*/
  __asm { fld dword ptr [esi+28h] } /*0x752de7*/
  __asm { fstp [esp+20Ch+var_20C]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)_ESI, g_INI_Key_Volume, v5); /*0x752df9*/
  __asm { fstp dword ptr [esi+28h] } /*0x752dfe*/
  *((float *)_ESI + 10) = _ET1; /*0x752dfe*/
  INIClass::GetString( /*0x752e18*/
    (INIClass *)a2,
    (unsigned __int8 *)_ESI,
    (unsigned __int8 *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    Source,
    500);
  if ( strlen(Source) ) /*0x752e21*/
  {
    if ( _strcmpi(Source, aQueue) ) /*0x752e37*/
    {
      if ( _strcmpi(Source, aStandard) ) /*0x752e56*/
      {
        if ( _strcmpi(Source, aInterrupt) ) /*0x752e71*/
        {
          if ( !_strcmpi(Source, aQueuedInterrup) ) /*0x752e90*/
            *((_DWORD *)_ESI + 19) = 3; /*0x752e9c*/
        }
        else
        {
          *((_DWORD *)_ESI + 19) = 2; /*0x752e7d*/
        }
      }
      else
      {
        *((_DWORD *)_ESI + 19) = 0; /*0x752e62*/
      }
    }
    else
    {
      *((_DWORD *)_ESI + 19) = 1; /*0x752e43*/
    }
  }
  INIClass::GetString( /*0x752eba*/
    (INIClass *)a2,
    (unsigned __int8 *)_ESI,
    (unsigned __int8 *)&g_INI_Key_TRUCKA.?[3],
    &g_INI_DefaultBuffer,
    Source,
    500);
  if ( strlen(Source) ) /*0x752ec3*/
  {
    if ( _strcmpi(Source, aLow) ) /*0x752eda*/
    {
      if ( _strcmpi(Source, g_INI_Key_NORMAL) ) /*0x752ef5*/
      {
        if ( _strcmpi(Source, aImportant) ) /*0x752f14*/
        {
          if ( !_strcmpi(Source, aCritical) ) /*0x752f33*/
            *((_DWORD *)_ESI + 18) = 3; /*0x752f3f*/
        }
        else
        {
          *((_DWORD *)_ESI + 18) = 2; /*0x752f20*/
        }
      }
      else
      {
        *((_DWORD *)_ESI + 18) = 1; /*0x752f01*/
      }
    }
    else
    {
      *((_DWORD *)_ESI + 18) = 0; /*0x752ee6*/
    }
  }
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)_ESI, aYuri, &g_INI_DefaultBuffer, Source, 500); /*0x752f5d*/
  strncpy((char *)_ESI + 44, Source, 9u); /*0x752f6d*/
  *((_BYTE *)_ESI + 52) = 0; /*0x752f79*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)_ESI, aRussian, &g_INI_DefaultBuffer, Source, 500); /*0x752f8f*/
  strncpy((char *)_ESI + 53, Source, 9u); /*0x752f9f*/
  *((_BYTE *)_ESI + 61) = 0; /*0x752fab*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)_ESI, aAllied, &g_INI_DefaultBuffer, Source, 500); /*0x752fc1*/
  strncpy((char *)_ESI + 62, Source, 9u); /*0x752fd1*/
  *((_BYTE *)_ESI + 70) = 0; /*0x752fd9*/
  return 1; /*0x752fde*/
}



// ==== 0x00753000  ObjectClass::InitFromINIEVA  this=ObjectClass  sig=csp ====
char __thiscall InitFromINIEVA(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int KeyCount; // eax
  int v3; // ebp
  int v4; // esi
  unsigned __int8 *StringByIndex; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  void *v9; // ecx
  int v11; // [esp+0h] [ebp-E4h] BYREF
  int i; // [esp+10h] [ebp-D4h]
  int v13; // [esp+14h] [ebp-D0h]
  int v14; // [esp+18h] [ebp-CCh]
  char Destination[200]; // [esp+1Ch] [ebp-C8h] BYREF

  v1 = this; /*0x75300a*/
  v13 = (int)this; /*0x753011*/
  LOBYTE(KeyCount) = INIClass::BinarySearchSection((int)this, g_INI_Key_DialogList) != 0; /*0x75301c*/
  if ( (_BYTE)KeyCount ) /*0x753023*/
  {
    KeyCount = INIClass::GetKeyCount((char *)v1, g_INI_Key_DialogList); /*0x753030*/
    v3 = KeyCount; /*0x753035*/
    v4 = 0; /*0x753037*/
    v14 = KeyCount; /*0x75303b*/
    for ( i = 0; v4 < v3; i = v4 ) /*0x753043*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex((char *)v1, g_INI_Key_DialogList, v4); /*0x753060*/
      KeyCount = INIClass::GetString( /*0x75306d*/
                   (INIClass *)v1,
                   g_INI_Key_DialogList,
                   StringByIndex,
                   &g_INI_DefaultBuffer,
                   Destination,
                   200);
      if ( KeyCount ) /*0x753074*/
      {
        if ( &v11 == (int *)-28 ) /*0x753080*/
          goto LABEL_10; /*0x753080*/
        v6 = 0; /*0x753087*/
        if ( g_InfantrySelectState <= 0 ) /*0x75308b*/
          goto LABEL_10; /*0x75308b*/
        while ( _strcmpi(Destination, *((char **)g_InfantryRenderPool + v6)) ) /*0x7530a6*/
        {
          if ( ++v6 >= g_InfantrySelectState ) /*0x7530b0*/
            goto LABEL_10; /*0x7530b0*/
        }
        if ( v6 == -1 ) /*0x7530b7*/
        {
LABEL_10:
          v7 = __2_YAPAXI_Z(0x54u); /*0x7530bd*/
          if ( v7 ) /*0x7530cb*/
          {
            *(_DWORD *)(v7 + 40) = 1065353216; /*0x7530da*/
            strcpy((char *)v7, Destination); /*0x7530f0*/
            *(_BYTE *)(v7 + 44) = 0; /*0x7530f9*/
            *(_BYTE *)(v7 + 53) = 0; /*0x7530fc*/
            *(_BYTE *)(v7 + 62) = 0; /*0x7530ff*/
            *(_DWORD *)(v7 + 72) = 1; /*0x753102*/
            *(_DWORD *)(v7 + 76) = 0; /*0x753109*/
            *(_DWORD *)(v7 + 80) = 2; /*0x75310c*/
            if ( g_InfantrySelectState < dword_B1D4A8 /*0x753146*/
              || (byte_B1D4AD || !dword_B1D4A8)
              && dword_B1D4B4 > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B1D4A0 + 8))(
                   &dword_B1D4A0,
                   dword_B1D4A8 + dword_B1D4B4,
                   0) )
            {
              v8 = g_InfantrySelectState++; /*0x753153*/
              *((_DWORD *)g_InfantryRenderPool + v8) = v7; /*0x753162*/
            }
            v1 = (ObjectClass *)v13; /*0x753165*/
            v9 = (void *)v7; /*0x753169*/
          }
          else
          {
            v9 = 0; /*0x75316d*/
          }
        }
        else
        {
          v9 = (void *)*((_DWORD *)g_InfantryRenderPool + v6); /*0x753177*/
        }
        LOBYTE(KeyCount) = AudioEvent::LoadFromINI(v9, (unsigned __int8 ***)v1); /*0x75317b*/
        v4 = i; /*0x753180*/
        v3 = v14; /*0x753184*/
      }
      ++v4; /*0x753188*/
    }
  }
  return KeyCount; /*0x753195*/
}



// ==== 0x007531A0  ObjectClass::LoadINIEVA  this=ObjectClass  sig=csp ====
int __thiscall LoadINIEVA(ObjectClass *this)
{
  int result; // eax
  void *v2; // esi
  int v3; // eax
  ObjectClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x7531a0*/
  if ( dword_B1D4C4 ) /*0x7531a8*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7531aa*/
    dword_B1D4C4 = 0; /*0x7531b1*/
  }
  if ( g_InfantryDrawState ) /*0x7531c3*/
    Audio::Release(g_InfantryDrawState); /*0x7531c5*/
  ThemeClass::ClearQueues(); /*0x7531ca*/
  for ( result = g_InfantrySelectState; g_InfantrySelectState > 0; result = g_InfantrySelectState ) /*0x7531d6*/
  {
    v2 = *(void **)g_InfantryRenderPool; /*0x7531de*/
    if ( *(_DWORD *)g_InfantryRenderPool ) /*0x7531de*/
    {
      v4 = *(ObjectClass **)g_InfantryRenderPool; /*0x7531f4*/
      v3 = (*(int (__thiscall **)(int *, ObjectClass **))(dword_B1D4A0 + 16))(&dword_B1D4A0, &v4); /*0x7531f8*/
      if ( v3 != -1 && v3 < g_InfantrySelectState && v3 < --g_InfantrySelectState ) /*0x753213*/
      {
        do /*0x75322b*/
        {
          ++v3; /*0x75321b*/
          *((_DWORD *)g_InfantryRenderPool + v3 - 1) = *((_DWORD *)g_InfantryRenderPool + v3); /*0x75321f*/
        }
        while ( v3 < g_InfantrySelectState ); /*0x75322b*/
      }
      __3_YAXPAX_Z(v2); /*0x75322e*/
    }
  }
  return result; /*0x753241*/
}



// ==== 0x00753250  VocClass::FindByName  this=VocClass  sig=csp ====
int __thiscall VocClass::FindByName(VocClass *this)
{
  int v3; // esi

  if ( !this ) /*0x753255*/
    return -1; /*0x753257*/
  v3 = 0; /*0x753262*/
  if ( g_InfantrySelectState <= 0 ) /*0x753266*/
    return -1; /*0x753288*/
  while ( _strcmpi((char *)this, *((char **)g_InfantryRenderPool + v3)) ) /*0x75327c*/
  {
    if ( ++v3 >= g_InfantrySelectState ) /*0x753286*/
      return -1; /*0x753286*/
  }
  return v3; /*0x75325a*/
}



// ==== 0x007532A0  globalHelper_0532A0  this=RandomStruct  sig=csp ====
bool __fastcall sub_7532A0(std::codecvt_base *a1)
{
  if ( (int)a1 < 0 || (int)a1 >= g_InfantrySelectState ) /*0x7532aa*/
    return _do_always_noconv_codecvt_base_std__MBE_NXZ_21(a1); /*0x7532a2*/
  else
    return *(_DWORD *)(*((_DWORD *)g_InfantryRenderPool + (_DWORD)a1) + 80) == 2; /*0x7532ba*/
}



// ==== 0x007532BE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_21  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_21(std::codecvt_base *this)
{
  return 1; /*0x7532c0*/
}



// ==== 0x007533A0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_22  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_22(std::codecvt_base *this)
{
  return 1; /*0x7533a2*/
}



// ==== 0x007533B0  SaveGame::WriteMagicHeader  this=SaveGame  sig=csp ====
int __thiscall SaveGame::WriteMagicHeader(SaveGame *this)
{
  int v2; // eax
  int result; // eax
  int v4; // edx
  int v5; // [esp+10h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this->__pad_0; /*0x7533ba*/
  v5 = 1450145875; /*0x7533c0*/
  result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v2 + 16))(this, &v5, 4, 0); /*0x7533c8*/
  if ( result >= 0 ) /*0x7533cd*/
  {
    v4 = *(_DWORD *)this->__pad_0; /*0x7533cf*/
    v5 = 1450145861; /*0x7533db*/
    return (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v4 + 16))(this, &v5, 4, 0); /*0x7533e3*/
  }
  return result; /*0x7533e6*/
}



// ==== 0x007533F0  LoadGame::LoadMagicAndAudio  this=LoadGame  sig=csp ====
int __thiscall LoadGame::LoadMagicAndAudio(LoadGame *this)
{
  int result; // eax
  int v3; // [esp+30h] [ebp-10h] BYREF
  _DWORD v4[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( dword_B1D4C4 ) /*0x7533fd*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7533ff*/
    dword_B1D4C4 = 0; /*0x753406*/
  }
  if ( g_InfantryDrawState ) /*0x753418*/
    Audio::Release(g_InfantryDrawState); /*0x75341a*/
  ThemeClass::ClearQueues(); /*0x75341f*/
  result = (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v3, 4, 0); /*0x753430*/
  if ( result >= 0 && v3 == 1450145875 ) /*0x753443*/
  {
    result = (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v3, 4, 0); /*0x753455*/
    if ( result >= 0 ) /*0x75345a*/
    {
      while ( v3 != 1450145861 ) /*0x753466*/
      {
        if ( v3 != 1450145865 ) /*0x75346e*/
          return -2147467259; /*0x7534cb*/
        result = (*(int (__stdcall **)(LoadGame *, _DWORD *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x75347c*/
                   this,
                   v4,
                   12,
                   0);
        if ( result >= 0 ) /*0x753481*/
        {
          if ( g_InfantryDrawState && v4[0] >= 0 && v4[0] < g_InfantrySelectState ) /*0x75349a*/
            Audio_Load(*((_DWORD *)g_InfantryRenderPool + v4[0]), v4[1], v4[2]); /*0x7534ae*/
          result = (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x7534bf*/
                     this,
                     &v3,
                     4,
                     0);
          if ( result >= 0 ) /*0x7534c4*/
            continue; /*0x7534c4*/
        }
        return result; /*0x7534c4*/
      }
    }
  }
  return result; /*0x7534c6*/
}



// ==== 0x007534E0  VoxClass::SetEVAIndex  this=VoxClass  sig=csp ====
int __thiscall VoxClass::SetEVAIndex(VoxClass *this)
{
  int result; // eax

  if ( this == (VoxClass *)-1 ) /*0x7534e3*/
  {
    dword_B1D4C8 = 0; /*0x7534e7*/
    return 0; /*0x7534e5*/
  }
  else
  {
    dword_B1D4C8 = (int)this; /*0x7534ed*/
  }
  return result; /*0x7534ec*/
}



// ==== 0x00753510  ??__F?m_badAllocExceptionPtr___ExceptionPtr__0V?$shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1  this=-  sig=ida-proto ====
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1()
{
  if ( dword_B1D4D8 ) /*0x753518*/
    AudioMixer::ProcessAudioFrame((int)dword_B1D4D8); /*0x75351a*/
}



// ==== 0x00753570  Map_Process_753570  this=-  sig=ida-proto ====
int sub_753570()
{
  return ++dword_B1D3D8; /*0x75357b*/
}



// ==== 0x00753580  ChronoScreenEffect::DecrementCounter  this=ChronoScreenEffect  sig=ida-proto ====
int ChronoScreenEffect::DecrementCounter()
{
  int result; // eax

  result = dword_B1D3D8; /*0x753580*/
  if ( dword_B1D3D8 ) /*0x753587*/
  {
    result = --dword_B1D3D8; /*0x75358e*/
    if ( dword_B1D3D8 < 0 ) /*0x753594*/
      dword_B1D3D8 = 0; /*0x753596*/
  }
  return result; /*0x7535a0*/
}



// ==== 0x007535B0  AudioFrame::CounterInc  this=AudioFrame  sig=ida-proto ====
int AudioFrame_CounterInc()
{
  if ( g_InfantryDrawState ) /*0x7535b8*/
    AudioFrame::ProcessAudioFrame(); /*0x7535ba*/
  return ++dword_B1D428; /*0x7535ca*/
}



// ==== 0x007535D0  WTFMode_Cleanup  this=-  sig=ida-proto ====
int sub_7535D0()
{
  int result; // eax

  if ( dword_B1D4C4 ) /*0x7535d7*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7535d9*/
    dword_B1D4C4 = 0; /*0x7535e0*/
  }
  if ( g_InfantryDrawState ) /*0x7535f2*/
    Audio::Release(g_InfantryDrawState); /*0x7535f4*/
  result = ThemeClass::ClearQueues(); /*0x7535f9*/
  dword_B1D428 = 0; /*0x7535fe*/
  dword_B1D3D8 = 0; /*0x753608*/
  return result; /*0x753612*/
}



// ==== 0x00753620  AudioMixer::Pump  this=AudioMixer  sig=ida-proto ====
int AudioMixer_Pump()
{
  int result; // eax

  if ( g_InfantryDrawState ) /*0x753628*/
    AudioMixer::ProcessAudioFrame(); /*0x75362a*/
  result = dword_B1D428; /*0x75362f*/
  if ( dword_B1D428 ) /*0x753636*/
  {
    result = --dword_B1D428; /*0x75363d*/
    if ( dword_B1D428 < 0 ) /*0x753643*/
      dword_B1D428 = 0; /*0x753645*/
  }
  return result; /*0x75364f*/
}



// ==== 0x00753650  _DynamicVectorClass_PAVVoxClass::getItem  this=DynamicVector  sig=csp ====
void __thiscall VoxClass_Vector::getItem(_DynamicVectorClass_PAVVoxClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x753656*/
  this->m_10 = 0; /*0x753659*/
  if ( v2 && BYTE1(this->m_C) ) /*0x753660*/
  {
    __3_YAXPAX_Z(v2); /*0x753666*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75366e*/
  }
  BYTE1(this->m_C) = 0; /*0x753671*/
  this->m_8 = 0; /*0x753674*/
}



// ==== 0x00753680  _DynamicVectorClass_PAVVoxClass::getItemAt  this=DynamicVector  sig=csp ====
unsigned int __thiscall VoxClass_Vector::getItemAt(_DynamicVectorClass_PAVVoxClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x753680*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x753695*/
  else
    return 0; /*0x753687*/
}



// ==== 0x007536A0  _VectorClass_PAVVoxClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VoxClass::Get(_VectorClass_PAVVoxClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7536aa*/
}



// ==== 0x007536B0  _VectorClass_PAVVoxClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VoxClass::Add(_VectorClass_PAVVoxClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7536b2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7536bd*/
  {
    v3 = 0; /*0x7536bf*/
    if ( m_8 <= 0 ) /*0x7536c3*/
      return 1; /*0x7536e3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7536c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7536cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7536d4*/
    {
      ++v3; /*0x7536d6*/
      ++v4; /*0x7536d7*/
      if ( v3 >= m_8 ) /*0x7536dc*/
        return 1; /*0x7536dc*/
    }
  }
  return 0; /*0x7536de*/
}



// ==== 0x007536F0  _VectorClass_PAVVoxClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VoxClass::Release(_VectorClass_PAVVoxClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7536fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x753706*/
    if ( a3 ) /*0x75370c*/
      v4 = a3; /*0x753722*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75371e*/
    LOBYTE(this->m_C) = 1; /*0x753726*/
    if ( v4 ) /*0x75372a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x753735*/
      {
        m_8 = this->m_8; /*0x75373c*/
        if ( a2 < m_8 ) /*0x753741*/
          m_8 = a2; /*0x753743*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x753749*/
          ++i; /*0x75374e*/
        if ( BYTE1(this->m_C) ) /*0x75375b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x753766*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x75376e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x753777*/
      this->m_8 = a2; /*0x75377f*/
      BYTE1(this->m_C) = a3 == 0; /*0x753782*/
      return 1; /*0x753788*/
    }
    else
    {
      return 0; /*0x75372f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVVoxClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x753792*/
    return 1; /*0x753798*/
  }
}



// ==== 0x007537A0  _VectorClass_PAVVoxClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_VoxClass::Remove(_VectorClass_PAVVoxClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x7537ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7537b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7537bb*/
  }
  BYTE1(this->m_C) = 0; /*0x7537be*/
  this->m_8 = 0; /*0x7537c1*/
}



// ==== 0x007537D0  _VectorClass_PAVVoxClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VoxClass::GetSize(_VectorClass_PAVVoxClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7537d0*/
    return 0; /*0x7537d8*/
  m_8 = this->m_8; /*0x7537de*/
  result = 0; /*0x7537e1*/
  if ( m_8 <= 0 ) /*0x7537e5*/
    return -1; /*0x7537fc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7537eb*/
  {
    if ( ++result >= m_8 ) /*0x7537fa*/
      return -1; /*0x7537fa*/
  }
  return result; /*0x7537da*/
}



// ==== 0x00753810  _VectorClass_PAVVoxClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VoxClass::GetCapacity(_VectorClass_PAVVoxClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x753810*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x753825*/
  else
    return 0; /*0x753817*/
}



// ==== 0x00753830  _DynamicVectorClass_PAVVoxClass::removeItem  this=DynamicVector  sig=csp ====
char __thiscall VoxClass_Vector::removeItem(_DynamicVectorClass_PAVVoxClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x75383c*/
  {
    LOBYTE(this->m_C) = 0; /*0x753842*/
    if ( a3 ) /*0x753848*/
      v4 = a3; /*0x75385e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75385a*/
    LOBYTE(this->m_C) = 1; /*0x753862*/
    if ( !v4 ) /*0x753866*/
      return 0; /*0x7538da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x753868*/
    {
      m_8 = this->m_8; /*0x75386f*/
      if ( a2 < m_8 ) /*0x753874*/
        m_8 = a2; /*0x753876*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x75387c*/
        ++i; /*0x753881*/
      if ( BYTE1(this->m_C) ) /*0x75388e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x753899*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7538a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7538aa*/
    this->m_8 = a2; /*0x7538b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x7538b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVVoxClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7538be*/
  }
  v7 = this->m_8; /*0x7538c1*/
  if ( v7 < this->m_10 ) /*0x7538c9*/
    this->m_10 = v7; /*0x7538cb*/
  return 1; /*0x7538ce*/
}



// ==== 0x007538E0  _DynamicVectorClass_PAVVoxClass::getItemWithIndex  this=DynamicVector  sig=csp ====
int __thiscall VoxClass_Vector::getItemWithIndex(_DynamicVectorClass_PAVVoxClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7538e0*/
  result = 0; /*0x7538e3*/
  if ( m_10 <= 0 ) /*0x7538e8*/
    return -1; /*0x7538ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7538ee*/
  {
    if ( ++result >= m_10 ) /*0x7538fd*/
      return -1; /*0x7538fd*/
  }
  return result; /*0x753902*/
}



// ==== 0x00753910  _VectorClass_PAVVoxClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_VoxClass::QueryInterface(_VectorClass_PAVVoxClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x753913*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxClass *>::`vftable'; /*0x753916*/
  if ( v3 && BYTE1(this->m_C) ) /*0x753920*/
  {
    __3_YAXPAX_Z(v3); /*0x753928*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x753930*/
  }
  BYTE1(this->m_C) = 0; /*0x75393b*/
  this->m_8 = 0; /*0x753941*/
  if ( (a2 & 1) != 0 ) /*0x753948*/
    __3_YAXPAX_Z(this); /*0x75394b*/
  return this->__pad_0; /*0x753955*/
}



// ==== 0x00753960  _DynamicVectorClass_PAVVoxClass::findItem  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VoxClass_Vector::findItem(_DynamicVectorClass_PAVVoxClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x753963*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxClass *>::`vftable'; /*0x753966*/
  if ( v3 && BYTE1(this->m_C) ) /*0x753970*/
  {
    __3_YAXPAX_Z(v3); /*0x753978*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x753980*/
  }
  BYTE1(this->m_C) = 0; /*0x75398b*/
  this->m_8 = 0; /*0x753991*/
  if ( (a2 & 1) != 0 ) /*0x753998*/
    __3_YAXPAX_Z(this); /*0x75399b*/
  return this->__pad_0; /*0x7539a5*/
}



// ==== 0x007539B0  sub_7539B0  this=-  sig=ida-proto ====
int sub_7539B0()
{
  dword_B2D810 = 0; /*0x7539b2*/
  dword_B2D814 = 0; /*0x7539b7*/
  dword_B2D818 = 0; /*0x7539bc*/
  dword_B2D81C = 0; /*0x7539c1*/
  return 0; /*0x7539c6*/
}



// ==== 0x007539D0  sub_7539D0  this=-  sig=ida-proto ====
int sub_7539D0()
{
  dword_B2D92C = 256; /*0x7539e4*/
  dword_B2D930 = 256; /*0x7539e9*/
  dword_B2D934 = 0; /*0x7539ee*/
  dword_B2D928 = (int)&XSurface_Vtable; /*0x7539f8*/
  dword_B2D938 = 1; /*0x753a02*/
  Buffer::Init(stru_B2D93C, (int)g_VoxelRenderBuffer, 0x10000); /*0x753a0c*/
  dword_B2D928 = (int)&BSurface_Vtable; /*0x753a16*/
  return atexit(sub_753A30); /*0x753a26*/
}



// ==== 0x00753A30  sub_753A30  this=-  sig=ida-proto ====
void __cdecl sub_753A30()
{
  Vector::Clear((int)&stru_B2D93C); /*0x753a35*/
  dword_B2D928 = (int)&Surface_Vtable; /*0x753a3a*/
}



// ==== 0x00753A50  sub_753A50  this=-  sig=ida-proto ====
int sub_753A50()
{
  dword_B2D7F4 = 256; /*0x753a64*/
  dword_B2D7F8 = 256; /*0x753a69*/
  dword_B2D7FC = 0; /*0x753a6e*/
  dword_B2D7F0 = (int)&XSurface_Vtable; /*0x753a78*/
  dword_B2D800 = 1; /*0x753a82*/
  Buffer::Init(stru_B2D804, (int)byte_B1D5E0, 0x10000); /*0x753a8c*/
  dword_B2D7F0 = (int)&BSurface_Vtable; /*0x753a96*/
  return atexit(sub_753AB0); /*0x753aa6*/
}



// ==== 0x00753AB0  sub_753AB0  this=-  sig=ida-proto ====
void __cdecl sub_753AB0()
{
  Vector::Clear((int)&stru_B2D804); /*0x753ab5*/
  dword_B2D7F0 = (int)&Surface_Vtable; /*0x753aba*/
}



// ==== 0x00753AD0  ScreenEffect::Stub1  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub1()
{
  ; /*0x753ad0*/
}



// ==== 0x00753AE0  ScreenEffect::Stub2  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub2()
{
  ; /*0x753ae0*/
}



// ==== 0x00753AF0  sub_753AF0  this=-  sig=ida-proto ====
int sub_753AF0()
{
  dword_B2FB60 = 0; /*0x753af2*/
  dword_B2FB64 = 0; /*0x753af7*/
  dword_B2FB68 = 255; /*0x753b01*/
  dword_B2FB6C = 255; /*0x753b06*/
  return 255; /*0x753b0b*/
}



// ==== 0x00753B10  sub_753B10  this=-  sig=ida-proto ====
int sub_753B10()
{
  char *v0; // esi
  int v1; // edi
  int result; // eax

  v0 = (char *)&dword_B2D980; /*0x753b12*/
  v1 = 64; /*0x753b17*/
  do /*0x753b32*/
  {
    result = Array::ForEach((int)v0, 12, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x753b26*/
    v0 += 136; /*0x753b2b*/
    --v1; /*0x753b31*/
  }
  while ( v1 ); /*0x753b32*/
  return result; /*0x753b34*/
}



// ==== 0x00753B40  sub_753B40  this=-  sig=ida-proto ====
int sub_753B40()
{
  char *v0; // esi
  int v1; // edi
  int result; // eax

  v0 = (char *)&dword_B3FF84; /*0x753b42*/
  v1 = 64; /*0x753b47*/
  do /*0x753b5f*/
  {
    result = Array::ForEach((int)v0, 12, 4, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x753b56*/
    v0 += 72; /*0x753b5b*/
    --v1; /*0x753b5e*/
  }
  while ( v1 ); /*0x753b5f*/
  return result; /*0x753b61*/
}



// ==== 0x00753B70  VoxelPaletteClass::LoadFromFile  this=VoxelPaletteClass  sig=csp ====
int __thiscall VoxelPaletteClass::LoadFromFile(VoxelPaletteClass *this)
{
  int v2; // esi
  VoxelPalette v4; // [esp+4h] [ebp-20h] BYREF
  int v5; // [esp+Ch] [ebp-18h]
  int v6; // [esp+10h] [ebp-14h]

  VoxelPalette::Init(&v4, (int)&unk_B2FB78, (int)g_VoxelColorPalette); /*0x753b84*/
  v2 = VoxelPaletteClass::ConvertFromFile((VoxelPaletteClass *)&v4, (int)this); /*0x753b93*/
  dword_B2FB74 = *(_DWORD *)v4.__pad_0; /*0x753ba1*/
  dword_B4317C = v4.VoxelPalette_field_0x04; /*0x753baa*/
  dword_B2FB58 = v5; /*0x753bb4*/
  dword_B43178 = v6; /*0x753bba*/
  VoxelPalette::Reset(&v4); /*0x753bbf*/
  return v2; /*0x753bc6*/
}



// ==== 0x00753BF0  sub_753BF0  this=-  sig=csp ====
char *__userpurge sub_753BF0@<eax>(
        char a1@<dl>,
        char a2@<cl>,
        int a3@<ebx>,
        int a4@<ebp>,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _WORD *v8; // esi
  char *result; // eax
  int v10; // ebx
  int v11; // ebp

  v8 = &unk_B2D5EC; /*0x753bf6*/
  result = (char *)&unk_B2FB79; /*0x753bfd*/
  do /*0x753c4a*/
  {
    LOBYTE(a3) = (unsigned __int8)*(result - 1) >> a2; /*0x753c07*/
    result += 3; /*0x753c0b*/
    ++v8; /*0x753c0e*/
    LOWORD(a4) = (unsigned __int8)a3; /*0x753c11*/
    LOWORD(a3) = (unsigned __int8)((unsigned __int8)*(result - 2) >> a7); /*0x753c24*/
    v10 = a3 << a8; /*0x753c28*/
    v11 = v10 | (a4 << a1); /*0x753c2e*/
    LOWORD(v10) = (unsigned __int8)((unsigned __int8)*(result - 3) >> a5); /*0x753c39*/
    a3 = v10 << a6; /*0x753c3d*/
    a4 = a3 | v11; /*0x753c3f*/
    *(v8 - 1) = a4; /*0x753c46*/
  }
  while ( result < byte_B2FE79 ); /*0x753c4a*/
  return result; /*0x753c4c*/
}



// ==== 0x00753C60  sub_753C60  this=-  sig=ida-proto ====
char *sub_753C60()
{
  return g_VoxelRenderBuffer; /*0x753c65*/
}



// ==== 0x00753C70  Miles::DriverGet  this=Miles  sig=csp ====
int *Miles_DriverGet()
{
  return &dword_B2D928; /*0x753c75*/
}



// ==== 0x00753C80  globalHelper_053C80  this=-  sig=csp ====
char __fastcall globalHelper_053C80(VoxelSection *a1, int a2, int a3, float *a4, float *a5)
{
  float *v7; // eax
  int Info; // eax
  float *v10; // [esp+0h] [ebp-88h]
  float v11[3]; // [esp+10h] [ebp-78h] BYREF
  int v12[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v13[12]; // [esp+28h] [ebp-60h] BYREF
  float v14[12]; // [esp+58h] [ebp-30h] BYREF

  qmemcpy(v13, InvertMatrix3x3Signs(v14, a4), sizeof(v13)); /*0x753cad*/
  v7 = (float *)Matrix3x3::TransformPoint(v12, a5, v10); /*0x753cb9*/
  v11[0] = *v7; /*0x753cc0*/
  v11[1] = v7[1]; /*0x753cc7*/
  v11[2] = v7[2]; /*0x753cd9*/
  Info = VoxelSection::GetInfo(a1, a2, a3); /*0x753cdd*/
  return GlobalHelper_053C80_Helper(v11, *(unsigned __int8 *)(Info + 163)); /*0x753cf3*/
}



// ==== 0x00753D00  Audio_Render  this=-  sig=csp ====
char __fastcall Audio_Render(VoxelSection *a1, int a2, int a3, float *a4, float *a5, float *a6, float a7)
{
  float *v9; // eax
  float *v10; // eax
  int Info; // eax
  float *v13; // [esp+0h] [ebp-D0h]
  float *v14; // [esp+0h] [ebp-D0h]
  int v15[3]; // [esp+10h] [ebp-C0h] BYREF
  float v16[3]; // [esp+1Ch] [ebp-B4h] BYREF
  float v17[3]; // [esp+28h] [ebp-A8h] BYREF
  int v18[3]; // [esp+34h] [ebp-9Ch] BYREF
  float v19[12]; // [esp+40h] [ebp-90h] BYREF
  float v20[12]; // [esp+70h] [ebp-60h] BYREF
  float v21[12]; // [esp+A0h] [ebp-30h] BYREF

  qmemcpy(v20, InvertMatrix3x3Signs(v21, a4), sizeof(v20)); /*0x753d33*/
  qmemcpy(v19, InvertMatrix3x3Signs(v21, a5), sizeof(v19)); /*0x753d53*/
  v9 = (float *)Matrix3x3::TransformPoint(v15, a6, v13); /*0x753d5f*/
  v17[0] = *v9; /*0x753d66*/
  v17[1] = v9[1]; /*0x753d6d*/
  v17[2] = v9[2]; /*0x753d82*/
  v15[0] = 0; /*0x753d86*/
  v15[1] = 0; /*0x753d8e*/
  v15[2] = 1065353216; /*0x753d96*/
  v10 = (float *)Matrix3x3::TransformPoint(v18, (float *)v15, v14); /*0x753d9e*/
  v16[0] = *v10; /*0x753da5*/
  v16[1] = v10[1]; /*0x753dac*/
  v16[2] = v10[2]; /*0x753dbe*/
  Info = VoxelSection::GetInfo(a1, a2, a3); /*0x753dc2*/
  return VoxelAnim::ComputeTransform(v17, v16, a7, *(unsigned __int8 *)(Info + 163)); /*0x753de7*/
}



// ==== 0x00753E00  Viewport::Clear  this=Viewport  sig=csp ====
int Viewport::Clear(Viewport *this)
{
  int v1; // esi
  int v2; // edx
  char *v3; // esi
  int v4; // ebx
  char *v5; // edi
  unsigned int v6; // ebx
  char *v7; // esi
  int v8; // edx
  char *v9; // edi

  stru_B2D804.Buffer_field_1C = 0; /*0x753e10*/
  dword_B2FB70 = 0; /*0x753e16*/
  if ( dword_8467E0 ) /*0x753e1c*/
  {
    dword_8467E0 = 0; /*0x753e2a*/
    memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x753e30*/
    memset(byte_B1D5E0, 0, 0x10000u); /*0x753e3c*/
  }
  else
  {
    v1 = dword_B2FB60; /*0x753e43*/
    v2 = dword_B2FB64; /*0x753e49*/
    if ( dword_B2FB60 < 0 || dword_B2FB64 < 0 || dword_B2FB60 + dword_B2FB68 > 255 || dword_B2FB6C + dword_B2FB64 > 255 ) /*0x753e73*/
    {
      memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x753ec3*/
    }
    else if ( dword_B2FB64 <= dword_B2FB6C + dword_B2FB64 ) /*0x753e77*/
    {
      v3 = &g_VoxelRenderBuffer[256 * dword_B2FB64 + dword_B2FB60]; /*0x753e81*/
      v4 = dword_B2FB6C + 1; /*0x753e88*/
      do /*0x753eab*/
      {
        v5 = v3; /*0x753e8f*/
        v3 += 256; /*0x753e91*/
        memset(v5, 0, dword_B2FB68 + 1); /*0x753ea1*/
        --v4; /*0x753ea8*/
      }
      while ( v4 ); /*0x753eab*/
      v1 = dword_B2FB60; /*0x753ead*/
    }
    if ( dword_B43180 && v2 <= dword_B2FB6C + v2 ) /*0x753ed8*/
    {
      v6 = dword_B2FB68 + 1; /*0x753ee2*/
      v7 = &byte_B1D5E0[256 * v2 + v1]; /*0x753eeb*/
      v8 = dword_B2FB6C + 1; /*0x753ef2*/
      do /*0x753f0f*/
      {
        memset(v7, 0, 4 * (v6 >> 2)); /*0x753eff*/
        v9 = &v7[4 * (v6 >> 2)]; /*0x753eff*/
        v7 += 256; /*0x753f03*/
        --v8; /*0x753f0c*/
        memset(v9, 0, v6 & 3); /*0x753f0d*/
      }
      while ( v8 ); /*0x753f0f*/
    }
  }
  dword_B2D5E0 = 1176256512; /*0x753f35*/
  dword_B2D5E4 = 1176256512; /*0x753f3b*/
  dword_B2D5E8 = 1176256512; /*0x753f40*/
  stru_B2D93C.Buffer_field_0C = -971227136; /*0x753f6d*/
  stru_B2D93C.Buffer_field_10 = -971227136; /*0x753f73*/
  stru_B2D93C.Buffer_field_14 = -971227136; /*0x753f78*/
  return -971227136; /*0x753f6a*/
}



// ==== 0x00753F90  globalHelper_053F90  this=-  sig=csp ====
int __fastcall globalHelper_053F90(
        VoxelSection *a1,
        VoxelSection *a2,
        VoxelSection *a3,
        float *a4,
        float *a5,
        float *a6,
        VoxelSection *a7,
        VoxelSection *a8,
        VoxelSection *a9)
{
  int Info; // eax
  int v12; // ebp
  VoxelSection **v13; // ecx
  float *v14; // esi
  float *v15; // ebx
  float *v16; // eax
  float *v17; // eax
  double v18; // st7
  float v20; // [esp+10h] [ebp-24h]
  float v21; // [esp+14h] [ebp-20h]
  float v22; // [esp+18h] [ebp-1Ch]
  float v23[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v24[3]; // [esp+28h] [ebp-Ch] BYREF

  Info = VoxelSection::GetInfo(a1, (int)a2, (int)a3); /*0x753fa1*/
  v12 = 4; /*0x753fac*/
  v13 = (VoxelSection **)(72 * dword_B2FB70 + 11796344); /*0x753fb8*/
  v13[15] = a7; /*0x753fbf*/
  v13[16] = a8; /*0x753fc6*/
  *v13 = a1; /*0x753fcd*/
  v13[1] = a2; /*0x753fd3*/
  v13[2] = a3; /*0x753fd6*/
  v13[17] = a9; /*0x753fd9*/
  v14 = (float *)(v13 + 3); /*0x753fdc*/
  v15 = (float *)(Info + 64); /*0x753fdf*/
  do /*0x7540c6*/
  {
    v16 = TransformMatrix3x4Point(v23, a5, v15); /*0x753feb*/
    *v14 = *v16; /*0x753ff5*/
    v14[1] = v16[1]; /*0x753ffa*/
    v14[2] = v16[2]; /*0x754004*/
    v14[2] = 0.0; /*0x75400b*/
    v17 = TransformMatrix3x4Point(v24, a4, v14); /*0x754012*/
    *v14 = *v17; /*0x75401b*/
    v14[1] = v17[1]; /*0x754020*/
    v14[2] = v17[2]; /*0x754026*/
    v20 = *a6 + *v14; /*0x75402d*/
    v21 = v14[1] + a6[1]; /*0x75403b*/
    v18 = a6[2] + v14[2]; /*0x754042*/
    *v14 = v20; /*0x754049*/
    v22 = v18; /*0x75404b*/
    v14[1] = v21; /*0x754053*/
    v14[2] = v22; /*0x754056*/
    v14[1] = -v14[1]; /*0x75405e*/
    if ( *v14 < (double)*(float *)&dword_B2D5E0 ) /*0x75406e*/
      dword_B2D5E0 = *(_DWORD *)v14; /*0x754072*/
    if ( v14[1] < (double)*(float *)&dword_B2D5E4 ) /*0x754085*/
      dword_B2D5E4 = *((_DWORD *)v14 + 1); /*0x75408a*/
    if ( *v14 > (double)*(float *)&stru_B2D93C.Buffer_field_0C ) /*0x75409d*/
      stru_B2D93C.Buffer_field_0C = *(int *)v14; /*0x7540a1*/
    if ( v14[1] > (double)*(float *)&stru_B2D93C.Buffer_field_10 ) /*0x7540b5*/
      stru_B2D93C.Buffer_field_10 = (int)v14[1]; /*0x7540ba*/
    v15 += 3; /*0x7540bf*/
    v14 += 3; /*0x7540c2*/
    --v12; /*0x7540c5*/
  }
  while ( v12 ); /*0x7540c6*/
  return ++dword_B2FB70; /*0x7540d1*/
}



// ==== 0x007540F0  TransformVoxelVertex  this=-  sig=csp ====
int __fastcall TransformVoxelVertex(VoxelSection *a1, VoxelSection *a2, VoxelSection *a3, float *a4)
{
  int Info; // eax
  VoxelSection **v7; // esi
  _DWORD *v8; // ecx
  int v9; // ebp
  int v10; // edx
  int v11; // edx
  float *v12; // edi
  VoxelSection **v13; // ebx
  float *v14; // eax
  VoxelSection *v15; // edx
  int v17; // [esp+10h] [ebp-Ch] BYREF
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  float *v20; // [esp+20h] [ebp+4h]

  Info = VoxelSection::GetInfo(a1, (int)a2, (int)a3); /*0x754101*/
  v18 = 1176256512; /*0x75411b*/
  v19 = 1176256512; /*0x754123*/
  v7 = (VoxelSection **)(136 * stru_B2D804.Buffer_field_1C + 11721048); /*0x75412b*/
  v17 = -971227136; /*0x754136*/
  v8 = (_DWORD *)(136 * stru_B2D804.Buffer_field_1C + 11721064); /*0x75413e*/
  v7[2] = a3; /*0x754141*/
  v9 = 0; /*0x754144*/
  *v8 = 1176256512; /*0x754149*/
  v10 = v18; /*0x75414b*/
  v18 = -971227136; /*0x75414f*/
  v7[1] = a2; /*0x754157*/
  v8[1] = v10; /*0x75415a*/
  v11 = v19; /*0x75415d*/
  v19 = -971227136; /*0x754161*/
  *v7 = a1; /*0x754169*/
  v8[2] = v11; /*0x75416b*/
  v12 = (float *)(v7 + 11); /*0x754175*/
  v20 = (float *)(Info + 64); /*0x754178*/
  v7[7] = (VoxelSection *)v17; /*0x75417c*/
  v7[8] = (VoxelSection *)v18; /*0x754182*/
  v7[9] = (VoxelSection *)v19; /*0x754189*/
  do /*0x754238*/
  {
    v13 = (VoxelSection **)(v12 - 1); /*0x754199*/
    v14 = TransformMatrix3x4Point((float *)&v17, a4, v20); /*0x75419c*/
    *(v12 - 1) = *v14; /*0x7541a5*/
    *v12 = v14[1]; /*0x7541aa*/
    v12[1] = v14[2]; /*0x7541b0*/
    *v12 = -*v12; /*0x7541b7*/
    if ( *(v12 - 1) < (double)*((float *)v7 + 4) ) /*0x7541c3*/
      v7[4] = *v13; /*0x7541c7*/
    if ( *(float *)v13 > (double)*((float *)v7 + 7) ) /*0x7541d4*/
      v7[7] = *v13; /*0x7541d8*/
    if ( *v12 < (double)*((float *)v7 + 5) ) /*0x7541e5*/
      v7[5] = *(VoxelSection **)v12; /*0x7541e9*/
    if ( *v12 > (double)*((float *)v7 + 8) ) /*0x7541f6*/
      v7[8] = *(VoxelSection **)v12; /*0x7541fa*/
    if ( v12[1] < (double)*((float *)v7 + 6) ) /*0x754208*/
    {
      v15 = (VoxelSection *)*((_DWORD *)v12 + 1); /*0x75420a*/
      v7[3] = (VoxelSection *)v9; /*0x75420d*/
      v7[6] = v15; /*0x754210*/
    }
    if ( v12[1] > (double)*((float *)v7 + 9) ) /*0x75421e*/
      v7[9] = (VoxelSection *)*((_DWORD *)v12 + 1); /*0x754223*/
    ++v9; /*0x75422a*/
    v12 += 3; /*0x75422e*/
    v20 += 3; /*0x754234*/
  }
  while ( v9 < 8 ); /*0x754238*/
  if ( *((float *)v7 + 4) < (double)*(float *)&dword_B2D5E0 ) /*0x75424c*/
    dword_B2D5E0 = (int)v7[4]; /*0x754251*/
  if ( *((float *)v7 + 5) < (double)*(float *)&dword_B2D5E4 ) /*0x754265*/
    dword_B2D5E4 = (int)v7[5]; /*0x75426a*/
  if ( *((float *)v7 + 6) < (double)*(float *)&dword_B2D5E8 ) /*0x75427e*/
    dword_B2D5E8 = (int)v7[6]; /*0x754283*/
  if ( *((float *)v7 + 7) > (double)*(float *)&stru_B2D93C.Buffer_field_0C ) /*0x754296*/
    stru_B2D93C.Buffer_field_0C = (int)v7[7]; /*0x75429b*/
  if ( *((float *)v7 + 8) > (double)*(float *)&stru_B2D93C.Buffer_field_10 ) /*0x7542af*/
    stru_B2D93C.Buffer_field_10 = (int)v7[8]; /*0x7542b4*/
  if ( *((float *)v7 + 9) > (double)*(float *)&stru_B2D93C.Buffer_field_14 ) /*0x7542c8*/
    stru_B2D93C.Buffer_field_14 = (int)v7[9]; /*0x7542cd*/
  return ++stru_B2D804.Buffer_field_1C; /*0x7542d7*/
}



// ==== 0x007542F0  InitializeAudioOcclusion  this=-  sig=csp ====
int __fastcall InitializeAudioOcclusion(int *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  _DWORD **v5; // esi
  int v6; // ebp
  _DWORD *v7; // ecx
  char *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  char *v12; // edi
  char *v13; // ecx
  int v14; // ebp
  int v15; // edx
  _DWORD ***v16; // esi
  int v17; // edi
  int v18; // esi
  _DWORD ***v19; // edi
  int v20; // eax
  int v21; // ecx
  double v22; // st7
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int v26; // esi
  int v27; // eax
  double v28; // st7
  int v29; // esi
  int result; // eax
  int v31; // [esp+10h] [ebp-14h]
  float v33; // [esp+18h] [ebp-Ch] BYREF
  float v34; // [esp+1Ch] [ebp-8h]
  float v35; // [esp+20h] [ebp-4h]

  v3 = 0; /*0x75430e*/
  v33 = (*(float *)&dword_B2D5E0 + *(float *)&dword_B2D948) * 0.5; /*0x754318*/
  v34 = (*(float *)&dword_B2D5E4 + *(float *)&dword_B2D94C) * 0.5; /*0x75432e*/
  v35 = (*(float *)&dword_B2D5E8 + *(float *)&dword_B2D950) * 0.5; /*0x754344*/
  if ( dword_B2FB70 > 0 ) /*0x754348*/
  {
    v5 = (_DWORD **)&unk_B3FF78; /*0x75434a*/
    do /*0x754367*/
    {
      InitializeTileAudioOcclusion(*v5, (int)v5, &v33); /*0x754357*/
      ++v3; /*0x754361*/
      v5 += 18; /*0x754362*/
    }
    while ( v3 < dword_B2FB70 ); /*0x754367*/
  }
  v6 = dword_B2D820; /*0x754369*/
  if ( dword_B2D820 > 0 ) /*0x754371*/
  {
    v7 = &unk_B2FE78; /*0x754373*/
    v8 = (char *)&unk_B2D958; /*0x754378*/
    v9 = dword_B2D820; /*0x75437d*/
    do /*0x75438a*/
    {
      *v7 = v8; /*0x75437f*/
      v8 += 136; /*0x754381*/
      ++v7; /*0x754386*/
      --v9; /*0x754389*/
    }
    while ( v9 ); /*0x75438a*/
  }
  v10 = v6 - 1; /*0x75438c*/
  if ( v6 - 1 > 0 ) /*0x754391*/
  {
    v11 = 1; /*0x754393*/
    v12 = (char *)&unk_B2FE78; /*0x754398*/
    v31 = 1; /*0x75439d*/
    do /*0x7543df*/
    {
      if ( v11 < v6 ) /*0x7543a3*/
      {
        v13 = v12 + 4; /*0x7543a5*/
        v14 = v6 - v11; /*0x7543a8*/
        do /*0x7543c3*/
        {
          v15 = *(_DWORD *)v12; /*0x7543aa*/
          if ( *(float *)(*(_DWORD *)v12 + 36) > (double)*(float *)(*(_DWORD *)v13 + 36) ) /*0x7543b9*/
          {
            *(_DWORD *)v12 = *(_DWORD *)v13; /*0x7543bb*/
            *(_DWORD *)v13 = v15; /*0x7543bd*/
          }
          v13 += 4; /*0x7543bf*/
          --v14; /*0x7543c2*/
        }
        while ( v14 ); /*0x7543c3*/
        v11 = v31; /*0x7543c5*/
        v6 = dword_B2D820; /*0x7543c9*/
      }
      ++v11; /*0x7543cf*/
      v10 = v6 - 1; /*0x7543d0*/
      v12 += 4; /*0x7543d3*/
      v31 = v11; /*0x7543d6*/
    }
    while ( v11 - 1 < v6 - 1 ); /*0x7543df*/
  }
  if ( dword_B43180 ) /*0x7543e8*/
  {
    if ( v10 >= 0 ) /*0x7543ec*/
    {
      v16 = (_DWORD ***)(4 * v10 + 11730552); /*0x7543ee*/
      v17 = v10 + 1; /*0x7543f5*/
      do /*0x75440b*/
      {
        Voxel::ProcessColor(**v16, *v16, &v33); /*0x754402*/
        --v16; /*0x754407*/
        --v17; /*0x75440a*/
      }
      while ( v17 ); /*0x75440b*/
    }
  }
  else
  {
    v18 = 0; /*0x75440f*/
    if ( v6 > 0 ) /*0x754413*/
    {
      v19 = (_DWORD ***)&unk_B2FE78; /*0x754415*/
      do /*0x754434*/
      {
        Voxel::ProcessColor(**v19, *v19, &v33); /*0x754424*/
        ++v18; /*0x75442e*/
        ++v19; /*0x75442f*/
      }
      while ( v18 < dword_B2D820 ); /*0x754434*/
    }
  }
  a1[2] = Math::RoundToInt(*(float *)&dword_B2D948 - *(float *)&dword_B2D5E0); /*0x754447*/
  v20 = Math::RoundToInt(*(float *)&dword_B2D94C - *(float *)&dword_B2D5E4); /*0x754456*/
  v21 = a1[2]; /*0x75445b*/
  a1[3] = v20; /*0x75445e*/
  v22 = v33; /*0x754467*/
  v23 = a1[3]; /*0x754476*/
  *a1 = 128 - v21 / 2; /*0x754478*/
  v24 = 128 - v23 / 2; /*0x754487*/
  a1[3] = v23 + 8; /*0x754489*/
  v25 = *a1; /*0x75448c*/
  a1[1] = v24; /*0x75448e*/
  a1[2] = v21 + 8; /*0x75449c*/
  *a1 = v25 - 4; /*0x75449f*/
  a1[1] = v24 - 4; /*0x7544a1*/
  dword_B2FB60 = *a1; /*0x7544a6*/
  dword_B2FB64 = a1[1]; /*0x7544af*/
  dword_B2FB68 = a1[2]; /*0x7544b8*/
  dword_B2FB6C = a1[3]; /*0x7544c1*/
  v26 = a1[2] / 2; /*0x7544cf*/
  v27 = Math::RoundToInt(v22); /*0x7544d1*/
  v28 = v34; /*0x7544dc*/
  *a2 = v27 - v26; /*0x7544e0*/
  v29 = a1[3] / 2; /*0x7544ea*/
  result = Math::RoundToInt(v28) - v29; /*0x7544f5*/
  *a3 = result; /*0x7544fa*/
  return result; /*0x7544f7*/
}



// ==== 0x00754510  Voxel::RenderFrame  this=Voxel  sig=csp ====
float *__thiscall Voxel_RenderFrame(float *this)
{
  int v1; // edi
  char *v2; // esi
  int v3; // ebx
  _DWORD *v4; // ecx
  char *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ebp
  char *v9; // edi
  char *v10; // ecx
  int v11; // ebx
  int v12; // edx
  _DWORD ***v13; // esi
  int v14; // edi
  int v15; // esi
  _DWORD ***v16; // edi
  float v17; // esi
  int v18; // eax
  int v19; // ebx
  float v20; // edi
  int v21; // eax
  float v24; // [esp+14h] [ebp-30h]
  float v25[7]; // [esp+1Ch] [ebp-28h] BYREF
  int v26; // [esp+38h] [ebp-Ch]

  v1 = 0; /*0x75452e*/
  v25[0] = (*(float *)&dword_B2D5E0 + *(float *)&dword_B2D948) * 0.5; /*0x754536*/
  v25[1] = (*(float *)&dword_B2D5E4 + *(float *)&dword_B2D94C) * 0.5; /*0x75454c*/
  v25[2] = (*(float *)&dword_B2D5E8 + *(float *)&dword_B2D950) * 0.5; /*0x754562*/
  if ( dword_B2FB70 > 0 ) /*0x754566*/
  {
    v2 = (char *)&unk_B3FF78; /*0x754568*/
    do /*0x754585*/
    {
      InitializeTileAudioOcclusion(v2, v25); /*0x754575*/
      ++v1; /*0x75457f*/
      v2 += 72; /*0x754580*/
    }
    while ( v1 < dword_B2FB70 ); /*0x754585*/
  }
  v3 = dword_B2D820; /*0x754587*/
  if ( dword_B2D820 > 0 ) /*0x75458f*/
  {
    v4 = &unk_B2D824; /*0x754591*/
    v5 = (char *)&unk_B2D958; /*0x754596*/
    v6 = dword_B2D820; /*0x75459b*/
    do /*0x7545a8*/
    {
      *v4 = v5; /*0x75459d*/
      v5 += 136; /*0x75459f*/
      ++v4; /*0x7545a4*/
      --v6; /*0x7545a7*/
    }
    while ( v6 ); /*0x7545a8*/
  }
  v7 = v3 - 1; /*0x7545aa*/
  if ( v3 - 1 > 0 ) /*0x7545af*/
  {
    v8 = 1; /*0x7545b1*/
    v9 = (char *)&unk_B2D824; /*0x7545b6*/
    do /*0x7545f1*/
    {
      if ( v8 < v3 ) /*0x7545bd*/
      {
        v10 = v9 + 4; /*0x7545bf*/
        v11 = v3 - v8; /*0x7545c2*/
        do /*0x7545dd*/
        {
          v12 = *(_DWORD *)v9; /*0x7545c4*/
          if ( *(float *)(*(_DWORD *)v9 + 36) > (double)*(float *)(*(_DWORD *)v10 + 36) ) /*0x7545d3*/
          {
            *(_DWORD *)v9 = *(_DWORD *)v10; /*0x7545d5*/
            *(_DWORD *)v10 = v12; /*0x7545d7*/
          }
          v10 += 4; /*0x7545d9*/
          --v11; /*0x7545dc*/
        }
        while ( v11 ); /*0x7545dd*/
        v3 = dword_B2D820; /*0x7545df*/
      }
      ++v8; /*0x7545e5*/
      v7 = v3 - 1; /*0x7545e6*/
      v9 += 4; /*0x7545e9*/
    }
    while ( v8 - 1 < v3 - 1 ); /*0x7545f1*/
  }
  if ( dword_B43180 ) /*0x7545fb*/
  {
    if ( v7 >= 0 ) /*0x7545ff*/
    {
      v13 = (_DWORD ***)(4 * v7 + 11720740); /*0x754601*/
      v14 = v7 + 1; /*0x754608*/
      do /*0x75461e*/
      {
        Voxel::ProcessColor(**v13, *v13, v25); /*0x754615*/
        --v13; /*0x75461a*/
        --v14; /*0x75461d*/
      }
      while ( v14 ); /*0x75461e*/
    }
  }
  else
  {
    v15 = 0; /*0x754622*/
    if ( v3 > 0 ) /*0x754626*/
    {
      v16 = (_DWORD ***)&unk_B2D824; /*0x754628*/
      do /*0x754647*/
      {
        Voxel::ProcessColor(**v16, *v16, v25); /*0x754637*/
        ++v15; /*0x754641*/
        ++v16; /*0x754642*/
      }
      while ( v15 < dword_B2D820 ); /*0x754647*/
    }
  }
  LODWORD(v17) = Math::RoundToInt(*(float *)&dword_B2D948 - *(float *)&dword_B2D5E0); /*0x754666*/
  v18 = Math::RoundToInt(*(float *)&dword_B2D94C - *(float *)&dword_B2D5E4); /*0x754668*/
  v19 = 128 - SLODWORD(v17) / 2; /*0x75467f*/
  LODWORD(v17) += 8; /*0x754686*/
  LODWORD(v20) = v18 + 8; /*0x754694*/
  v19 -= 4; /*0x75469a*/
  v26 = 128 - v18 / 2 - 4; /*0x75469d*/
  dword_B2FB64 = v26; /*0x7546a1*/
  dword_B2FB60 = v19; /*0x7546a8*/
  dword_B2FB68 = LODWORD(v17); /*0x7546b1*/
  dword_B2FB6C = v18 + 8; /*0x7546b9*/
  LODWORD(v24) = Math::RoundToInt(v25[0]) - SLODWORD(v17) / 2; /*0x7546c8*/
  v21 = Math::RoundToInt(v25[1]); /*0x7546d9*/
  v25[0] = v24; /*0x7546e8*/
  LODWORD(v25[1]) = v21 - SLODWORD(v20) / 2; /*0x7546ec*/
  v25[4] = v17; /*0x7546f4*/
  v25[5] = v20; /*0x7546f8*/
  LODWORD(v25[2]) = v19; /*0x754707*/
  LODWORD(v25[3]) = v26; /*0x75470b*/
  qmemcpy(this, v25, 0x18u); /*0x75470f*/
  return this; /*0x754711*/
}



// ==== 0x00754740  sub_754740  this=-  sig=ida-proto ====
int __fastcall sub_754740(int a1, int a2, unsigned int a3, int a4)
{
  int result; // eax
  char *v5; // esi
  int v6; // edx
  char *v7; // edi

  if ( a1 < 0 || a2 < 0 || (int)(a1 + a3) > 255 || (result = a2 + a4, a2 + a4 > 255) ) /*0x754763*/
  {
    memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x7547ac*/
    return 0; /*0x7547a5*/
  }
  else if ( a2 <= result ) /*0x754767*/
  {
    v5 = &g_VoxelRenderBuffer[256 * a2 + a1]; /*0x754773*/
    v6 = a4 + 1; /*0x75477a*/
    do /*0x754797*/
    {
      result = 0; /*0x75477e*/
      memset(v5, 0, 4 * (a3 >> 2)); /*0x754787*/
      v7 = &v5[4 * (a3 >> 2)]; /*0x754787*/
      v5 += 256; /*0x75478b*/
      --v6; /*0x754794*/
      memset(v7, 0, a3 & 3); /*0x754795*/
    }
    while ( v6 ); /*0x754797*/
  }
  return result; /*0x75479b*/
}



// ==== 0x00754900  ObjectClass::??0Iostream_init_QAE_XZ_8  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_8(Iostream_init *this)
{
  return this; /*0x754902*/
}



// ==== 0x00754910  sub_754910  this=-  sig=ida-proto ====
void sub_754910()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75491c*/
  dbl_B43EF8 = Math::Sqrt(v0 + v0); /*0x75492e*/
}



// ==== 0x00754940  sub_754940  this=-  sig=ida-proto ====
void sub_754940()
{
  dbl_B45180 = dbl_B43EF8 / 60.0; /*0x75494c*/
}



// ==== 0x00754960  sub_754960  this=-  sig=ida-proto ====
void sub_754960()
{
  dbl_B450A0 = 1.0 / dbl_B45180; /*0x75496c*/
}



// ==== 0x00754980  sub_754980  this=-  sig=ida-proto ====
void sub_754980()
{
  dbl_B44498 = 0.0174532925199433 * 45.0; /*0x75498c*/
}



// ==== 0x007549A0  sub_7549A0  this=-  sig=ida-proto ====
void sub_7549A0()
{
  dbl_B43F00 = 0.0174532925199433 * 60.0; /*0x7549ac*/
}



// ==== 0x007549C0  sub_7549C0  this=-  sig=ida-proto ====
void sub_7549C0()
{
  dbl_B43ED8 = 0.0174532925199433 * 90.0; /*0x7549cc*/
}



// ==== 0x007549E0  sub_7549E0  this=-  sig=ida-proto ====
__int64 sub_7549E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B43ED8 - dbl_B43F00); /*0x7549f2*/
  result = Math::RoundToInt(v0 * dbl_B43EF8 * 0.5); /*0x754a06*/
  dword_B45578 = result; /*0x754a0b*/
  return result; /*0x754a10*/
}



// ==== 0x00754A20  sub_754A20  this=-  sig=ida-proto ====
void sub_754A20()
{
  dbl_B43F08 = Math::ArcTan((double)dword_B45578 * 0.00390625); /*0x754a37*/
}



// ==== 0x00754A50  sub_754A50  this=-  sig=ida-proto ====
void sub_754A50()
{
  dbl_B44310 = Math::ArcTan((double)(2 * dword_B45578) / dbl_B43EF8); /*0x754a72*/
}



// ==== 0x00754A80  sub_754A80  this=-  sig=ida-proto ====
__int64 sub_754A80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45578) + 0.5); /*0x754a9b*/
  dword_B45178 = result; /*0x754aa0*/
  return result; /*0x754aa6*/
}



// ==== 0x00754AB0  sub_754AB0  this=-  sig=ida-proto ====
int sub_754AB0()
{
  word_B43EF0 = 0; /*0x754ab2*/
  word_B43EF2 = 0; /*0x754ab8*/
  return 0; /*0x754abe*/
}



// ==== 0x00754AC0  sub_754AC0  this=-  sig=ida-proto ====
int sub_754AC0()
{
  dword_B44300 = 0; /*0x754ac2*/
  dword_B44304 = 0; /*0x754ac7*/
  dword_B44308 = 0; /*0x754acc*/
  return 0; /*0x754ad1*/
}



// ==== 0x00754AE0  sub_754AE0  this=-  sig=ida-proto ====
int sub_754AE0()
{
  dword_B450B0 = 0; /*0x754ae5*/
  dword_B450A8 = 128; /*0x754aef*/
  dword_B450AC = 128; /*0x754af4*/
  return 128; /*0x754af9*/
}



// ==== 0x00754B00  sub_754B00  this=-  sig=ida-proto ====
int sub_754B00()
{
  dword_B43EE0 = 0; /*0x754b02*/
  dword_B43EE4 = 0; /*0x754b07*/
  dword_B43EE8 = 0; /*0x754b0c*/
  dword_B43EEC = 0; /*0x754b11*/
  return 0; /*0x754b16*/
}



// ==== 0x00754B20  ScreenEffect::Stub3  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub3()
{
  ; /*0x754b20*/
}



// ==== 0x00754B30  ScreenEffect::Stub4  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub4()
{
  ; /*0x754b30*/
}



// ==== 0x00754B40  sub_754B40  this=-  sig=ida-proto ====
_DWORD *sub_754B40()
{
  _DWORD *v0; // esi
  int v1; // edi
  _DWORD *result; // eax

  v0 = &stru_B44348; /*0x754b42*/
  v1 = 21; /*0x754b47*/
  do /*0x754b62*/
  {
    result = Int4::Set(v0, 0, 0, 0, 1065353216); /*0x754b59*/
    v0 += 4; /*0x754b5e*/
    --v1; /*0x754b61*/
  }
  while ( v1 ); /*0x754b62*/
  return result; /*0x754b64*/
}



// ==== 0x00754B70  sub_754B70  this=-  sig=ida-proto ====
_DWORD *sub_754B70()
{
  _DWORD *v0; // esi
  int v1; // edi
  _DWORD *result; // eax

  v0 = &stru_B43188; /*0x754b72*/
  v1 = 21; /*0x754b77*/
  do /*0x754b92*/
  {
    result = Int4::Set(v0, 0, 0, 0, 1065353216); /*0x754b89*/
    v0 += 4; /*0x754b8e*/
    --v1; /*0x754b91*/
  }
  while ( v1 ); /*0x754b92*/
  return result; /*0x754b94*/
}



// ==== 0x00754BA0  ScreenEffect::Stub5  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub5()
{
  ; /*0x754ba0*/
}



// ==== 0x00754BB0  ScreenEffect::Stub6  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub6()
{
  ; /*0x754bb0*/
}



// ==== 0x00754BC0  ScreenEffect::Stub7  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub7()
{
  ; /*0x754bc0*/
}



// ==== 0x00754BD0  ScreenEffect::Stub8  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub8()
{
  ; /*0x754bd0*/
}



// ==== 0x00754BE0  AudioConfig::InitDefault  this=AudioConfig  sig=csp ====
void *__thiscall AudioConfig::InitDefault(AudioConfig *this)
{
  qmemcpy(this, &stru_B44318, 0x30u); /*0x754bf0*/
  return this; /*0x754bf2*/
}



// ==== 0x00754C00  Voxel::SetProjectionAngle  this=Voxel  sig=csp ====
int __stdcall sub_754C00(float a1)
{
  int *v1; // eax
  float v3[3]; // [esp+0h] [ebp-48h] BYREF
  float v4[3]; // [esp+Ch] [ebp-3Ch] BYREF
  float v5[12]; // [esp+18h] [ebp-30h] BYREF

  Matrix3x4::Identity(v5); /*0x754c07*/
  dword_88746C = a1; /*0x754c12*/
  Matrix3D::RotateZ(v5, a1); /*0x754c1c*/
  v3[0] = -0.70710599; /*0x754c2e*/
  v3[1] = -0.70710599; /*0x754c36*/
  v3[2] = 0.0; /*0x754c3e*/
  v1 = (int *)TransformMatrix3x4Point(v4, v5, v3); /*0x754c46*/
  dword_887470 = *v1; /*0x754c4d*/
  dword_887474 = v1[1]; /*0x754c62*/
  dword_887478 = v1[2]; /*0x754c6b*/
  dword_887424 = 0; /*0x754c88*/
  v3[0] = *(float *)&dword_887470 * -6.0; /*0x754c8e*/
  dword_887428 = 0; /*0x754c96*/
  dword_887420 = LODWORD(v3[0]); /*0x754c9b*/
  return 0; /*0x754ca1*/
}



// ==== 0x00754CB0  Voxel::Projection_Setup  this=Voxel  sig=csp ====
int Voxel::Projection_Setup(Voxel *this)
{
  float *v1; // eax
  float *v2; // eax
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  float v7; // edx
  float *v8; // eax
  float *v9; // eax
  float v10; // edx
  float v11; // ebx
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float v16; // ebp
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  float *v28; // eax
  int v29; // edi
  float *v30; // esi
  float *v31; // eax
  int v32; // ecx
  float *v33; // ecx
  double v34; // st7
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  Matrix3x4 *v52; // esi
  int result; // eax
  float v54; // [esp+0h] [ebp-114h]
  float v55; // [esp+0h] [ebp-114h]
  float v56; // [esp+0h] [ebp-114h]
  float v57[4]; // [esp+14h] [ebp-100h] BYREF
  float v58[4]; // [esp+24h] [ebp-F0h] BYREF
  int v59; // [esp+34h] [ebp-E0h] BYREF
  float v60; // [esp+38h] [ebp-DCh]
  int v61; // [esp+3Ch] [ebp-D8h]
  int v62; // [esp+40h] [ebp-D4h] BYREF
  int v63; // [esp+44h] [ebp-D0h]
  int v64; // [esp+48h] [ebp-CCh]
  float v65; // [esp+4Ch] [ebp-C8h]
  Matrix3D v66; // [esp+50h] [ebp-C4h] BYREF
  float v67[3]; // [esp+80h] [ebp-94h] BYREF
  float v68[3]; // [esp+8Ch] [ebp-88h] BYREF
  float v69[3]; // [esp+98h] [ebp-7Ch] BYREF
  float v70[3]; // [esp+A4h] [ebp-70h] BYREF
  float v71[3]; // [esp+B0h] [ebp-64h] BYREF
  float v72[3]; // [esp+BCh] [ebp-58h] BYREF
  float v73[3]; // [esp+C8h] [ebp-4Ch] BYREF
  float v74[3]; // [esp+D4h] [ebp-40h] BYREF
  float v75; // [esp+E0h] [ebp-34h]
  Matrix3x4 v76; // [esp+E4h] [ebp-30h] BYREF

  v75 = dbl_B43F08; /*0x754cbe*/
  v65 = dbl_B44310; /*0x754cd0*/
  *(float *)&v59 = 1.0; /*0x754ce4*/
  v60 = 0.0; /*0x754cec*/
  v61 = 0; /*0x754cf4*/
  v62 = 0; /*0x754cfc*/
  v63 = 0; /*0x754d04*/
  v64 = 1065353216; /*0x754d0c*/
  v1 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v62, 0.785375); /*0x754d14*/
  v2 = TransformMatrix3x4Point(v57, v1, (float *)&v59); /*0x754d1f*/
  v70[0] = *v2; /*0x754d26*/
  v70[1] = v2[1]; /*0x754d30*/
  v70[2] = v2[2]; /*0x754d4d*/
  v62 = 1065353216; /*0x754d54*/
  v63 = 0; /*0x754d5c*/
  v64 = 0; /*0x754d64*/
  *(float *)&v59 = 0.0; /*0x754d6c*/
  v60 = 0.0; /*0x754d74*/
  v61 = 1065353216; /*0x754d7c*/
  v3 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 2.3561251); /*0x754d84*/
  v4 = TransformMatrix3x4Point(v57, v3, (float *)&v62); /*0x754d8f*/
  v67[0] = *v4; /*0x754d96*/
  v67[1] = v4[1]; /*0x754d9d*/
  v67[2] = v4[2]; /*0x754dba*/
  v62 = 1065353216; /*0x754dc1*/
  v63 = 0; /*0x754dc9*/
  v64 = 0; /*0x754dd1*/
  *(float *)&v59 = 0.0; /*0x754dd9*/
  v60 = 0.0; /*0x754de1*/
  v61 = 1065353216; /*0x754de9*/
  v5 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 3.9268751); /*0x754df1*/
  v6 = TransformMatrix3x4Point(v57, v5, (float *)&v62); /*0x754dfc*/
  v73[0] = *v6; /*0x754e03*/
  v73[1] = v6[1]; /*0x754e0d*/
  v7 = v6[2]; /*0x754e14*/
  v62 = 1065353216; /*0x754e17*/
  v73[2] = v7; /*0x754e1f*/
  v63 = 0; /*0x754e26*/
  v64 = 0; /*0x754e2e*/
  *(float *)&v59 = 0.0; /*0x754e36*/
  v60 = 0.0; /*0x754e3e*/
  v61 = 1065353216; /*0x754e46*/
  v8 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 5.4976249); /*0x754e61*/
  v9 = TransformMatrix3x4Point(v57, v8, (float *)&v62); /*0x754e6c*/
  v71[0] = *v9; /*0x754e73*/
  v71[1] = v9[1]; /*0x754e7d*/
  v10 = v9[2]; /*0x754e89*/
  v74[0] = 1.0; /*0x754e8c*/
  v71[2] = v10; /*0x754e97*/
  v74[1] = 0.0; /*0x754e9e*/
  v74[2] = 0.0; /*0x754ea9*/
  v72[0] = 0.0; /*0x754eb4*/
  v72[1] = 1.0; /*0x754ebf*/
  v72[2] = 0.0; /*0x754eca*/
  v68[0] = -1.0; /*0x754ed5*/
  v68[1] = 0.0; /*0x754ee0*/
  v68[2] = 0.0; /*0x754eeb*/
  v69[0] = 0.0; /*0x754ef6*/
  v69[1] = -1.0; /*0x754f01*/
  v69[2] = 0.0; /*0x754f0c*/
  Matrix3x4::Identity(&stru_B43F10); /*0x754f17*/
  v11 = v65; /*0x754f1c*/
  qmemcpy(&unk_B43F40, Matrix3D::Constructor(&v66, 3.9268751, v65), 0x30u); /*0x754f3c*/
  qmemcpy(&unk_B43F70, Matrix3D::Constructor(&v66, 2.3561251, v11), 0x30u); /*0x754f59*/
  qmemcpy(&unk_B43FA0, Matrix3D::Constructor(&v66, 0.785375, v11), 0x30u); /*0x754f76*/
  qmemcpy(&unk_B43FD0, Matrix3D::Constructor(&v66, 5.4976249, v11), 0x30u); /*0x754f93*/
  v12 = FromQuaternionAxisAngle(v58, v73, v11); /*0x754fa0*/
  Float4::Copy(flt_B44358, v57, v12); /*0x754fb0*/
  v13 = FromQuaternionAxisAngle(v58, v67, v11); /*0x754fbe*/
  Float4::Copy(flt_B44368, v57, v13); /*0x754fce*/
  v14 = FromQuaternionAxisAngle(v58, v70, v11); /*0x754fdf*/
  Float4::Copy(flt_B44378, v57, v14); /*0x754fef*/
  v15 = FromQuaternionAxisAngle(v58, v71, v11); /*0x755000*/
  Float4::Copy(flt_B44388, v57, v15); /*0x755010*/
  v16 = v75; /*0x755019*/
  qmemcpy(&unk_B44000, Matrix3D::Constructor(&v66, 3.1415, v75), 0x30u); /*0x755038*/
  qmemcpy(&unk_B44030, Matrix3D::Constructor(&v66, 1.57075, v16), 0x30u); /*0x755055*/
  qmemcpy(&unk_B44060, Matrix3D::Constructor(&v66, 0.0, v16), 0x30u); /*0x75506f*/
  qmemcpy(&unk_B44090, Matrix3D::Constructor(&v66, 4.7122502, v16), 0x30u); /*0x75508c*/
  v17 = FromQuaternionAxisAngle(v58, v68, v16); /*0x755099*/
  Float4::Copy(flt_B44398, v57, v17); /*0x7550a9*/
  v18 = FromQuaternionAxisAngle(v58, v72, v16); /*0x7550ba*/
  Float4::Copy(flt_B443A8, v57, v18); /*0x7550ca*/
  v19 = FromQuaternionAxisAngle(v58, v74, v16); /*0x7550db*/
  Float4::Copy(flt_B443B8, v57, v19); /*0x7550eb*/
  v20 = FromQuaternionAxisAngle(v58, v69, v16); /*0x7550fc*/
  Float4::Copy(flt_B443C8, v57, v20); /*0x75510c*/
  qmemcpy(&unk_B440C0, Matrix3D::Constructor(&v66, 3.1415, v16), 0x30u); /*0x75512d*/
  qmemcpy(&unk_B440F0, Matrix3D::Constructor(&v66, 1.57075, v16), 0x30u); /*0x75514a*/
  qmemcpy(&unk_B44120, Matrix3D::Constructor(&v66, 0.0, v16), 0x30u); /*0x755164*/
  qmemcpy(&unk_B44150, Matrix3D::Constructor(&v66, 4.7122502, v16), 0x30u); /*0x755181*/
  v21 = FromQuaternionAxisAngle(v58, v68, v16); /*0x75518e*/
  Float4::Copy(flt_B443D8, v57, v21); /*0x75519e*/
  v22 = FromQuaternionAxisAngle(v58, v72, v16); /*0x7551af*/
  Float4::Copy(flt_B443E8, v57, v22); /*0x7551bf*/
  v23 = FromQuaternionAxisAngle(v58, v74, v16); /*0x7551d0*/
  Float4::Copy(flt_B443F8, v57, v23); /*0x7551e0*/
  v24 = FromQuaternionAxisAngle(v58, v69, v16); /*0x7551f1*/
  Float4::Copy(flt_B44408, v57, v24); /*0x755201*/
  qmemcpy(&unk_B44180, Matrix3D::Constructor(&v66, 3.1415, v11), 0x30u); /*0x755221*/
  qmemcpy(&unk_B441B0, Matrix3D::Constructor(&v66, 1.57075, v11), 0x30u); /*0x75523f*/
  qmemcpy(&unk_B441E0, Matrix3D::Constructor(&v66, 0.0, v11), 0x30u); /*0x755259*/
  qmemcpy(&unk_B44210, Matrix3D::Constructor(&v66, 4.7122502, v11), 0x30u); /*0x755276*/
  v25 = FromQuaternionAxisAngle(v58, v68, v11); /*0x755283*/
  Float4::Copy(flt_B44418, v57, v25); /*0x755293*/
  v26 = FromQuaternionAxisAngle(v58, v72, v11); /*0x7552a4*/
  Float4::Copy(flt_B44428, v57, v26); /*0x7552b4*/
  v27 = FromQuaternionAxisAngle(v58, v74, v11); /*0x7552c5*/
  Float4::Copy(flt_B44438, v57, v27); /*0x7552d5*/
  v28 = FromQuaternionAxisAngle(v58, v69, v11); /*0x7552e6*/
  Float4::Copy(flt_B44448, v57, v28); /*0x7552f6*/
  Matrix3x4::Identity(&stru_B44240); /*0x755300*/
  Matrix3x4::Identity(&stru_B44270); /*0x75530a*/
  Matrix3x4::Identity(&stru_B442A0); /*0x755314*/
  Matrix3x4::Identity(&stru_B442D0); /*0x75531e*/
  v29 = 0; /*0x755323*/
  Int4::Set2(&stru_B44458, 0, 0, 0, 1065353216); /*0x755332*/
  Int4::Set2(&stru_B44468, 0, 0, 0, 1065353216); /*0x755344*/
  Int4::Set2(&stru_B44478, 0, 0, 0, 1065353216); /*0x755356*/
  Int4::Set2(&stru_B44488, 0, 0, 0, 1065353216); /*0x755368*/
  v65 = 0.0; /*0x75536d*/
  do /*0x755459*/
  {
    Matrix3x4::Identity(&v76); /*0x755378*/
    v54 = (double)SLODWORD(v65) * 0.024542969; /*0x75538f*/
    Matrix2D::Rotate(v76.m_Data, v54); /*0x755392*/
    v62 = 1065353216; /*0x7553a7*/
    v63 = 0; /*0x7553af*/
    v64 = 0; /*0x7553b7*/
    v30 = &flt_B432D8[v29]; /*0x7553bf*/
    v31 = TransformMatrix3x4Point(v57, (float *)v76.m_Data, (float *)&v62); /*0x7553c5*/
    *v30 = *v31; /*0x7553d4*/
    v32 = *((_DWORD *)v31 + 1); /*0x7553d6*/
    v61 = 0; /*0x7553d9*/
    *((_DWORD *)v30 + 1) = v32; /*0x7553e1*/
    v30[2] = v31[2]; /*0x7553e7*/
    v33 = &flt_B444A0[v29]; /*0x7553f8*/
    *(float *)&v59 = *(float *)(v29 * 4 + 11809500) - 0.0; /*0x7553fa*/
    v34 = 0.0 - flt_B432D8[v29]; /*0x755402*/
    *v33 = *(float *)&v59; /*0x755404*/
    v60 = v34; /*0x755406*/
    v33[1] = v60; /*0x75540e*/
    *((_DWORD *)v33 + 2) = v61; /*0x755415*/
    Math::BuildRotationMatrix((float *)v66.__pad_0, &flt_B444A0[v29], *(float *)&stru_887460.Buffer_field_0C); /*0x755424*/
    v35 = TransformMatrix3x4Point(v58, (float *)v66.__pad_0, &flt_B432D8[v29]); /*0x755432*/
    v29 += 3; /*0x755439*/
    *v30 = *v35; /*0x75543c*/
    v30[1] = v35[1]; /*0x755441*/
    v30[2] = v35[2]; /*0x755447*/
    ++LODWORD(v65); /*0x755455*/
  }
  while ( v29 < 768 ); /*0x755459*/
  Matrix3x4::Identity(&stru_B45188); /*0x755464*/
  qmemcpy(&unk_B451B8, Matrix3D::Constructor(&v66, 4.7122502, v11), 0x30u); /*0x755485*/
  qmemcpy(&unk_B451E8, Matrix3D::Constructor(&v66, 3.1415, v11), 0x30u); /*0x7554a2*/
  qmemcpy(&unk_B45218, Matrix3D::Constructor(&v66, 1.57075, v11), 0x30u); /*0x7554bf*/
  qmemcpy(&unk_B45248, Matrix3D::Constructor(&v66, 0.0, v11), 0x30u); /*0x7554d9*/
  qmemcpy(&unk_B45278, Matrix3D::Constructor(&v66, 3.9268751, v16), 0x30u); /*0x7554f6*/
  qmemcpy(&unk_B452A8, Matrix3D::Constructor(&v66, 2.3561251, v16), 0x30u); /*0x755513*/
  qmemcpy(&unk_B452D8, Matrix3D::Constructor(&v66, 0.785375, v16), 0x30u); /*0x755530*/
  qmemcpy(&unk_B45308, Matrix3D::Constructor(&v66, 5.4976249, v16), 0x30u); /*0x75554d*/
  qmemcpy(&unk_B45338, Matrix3D::Constructor(&v66, 3.9268751, v16), 0x30u); /*0x75556a*/
  qmemcpy(&unk_B45368, Matrix3D::Constructor(&v66, 2.3561251, v16), 0x30u); /*0x755586*/
  qmemcpy(&unk_B45398, Matrix3D::Constructor(&v66, 0.785375, v16), 0x30u); /*0x7555a4*/
  qmemcpy(&unk_B453C8, Matrix3D::Constructor(&v66, 5.4976249, v16), 0x30u); /*0x7555c1*/
  qmemcpy(&unk_B453F8, Matrix3D::Constructor(&v66, 3.9268751, v11), 0x30u); /*0x7555de*/
  qmemcpy(&unk_B45428, Matrix3D::Constructor(&v66, 2.3561251, v11), 0x30u); /*0x7555fb*/
  qmemcpy(&unk_B45458, Matrix3D::Constructor(&v66, 0.785375, v11), 0x30u); /*0x755618*/
  qmemcpy(&unk_B45488, Matrix3D::Constructor(&v66, 5.4976249, v11), 0x30u); /*0x755639*/
  Int4::Set2(&stru_B43188, 0, 0, 0, 1065353216); /*0x755646*/
  v36 = FromQuaternionAxisAngle(v58, v69, v11); /*0x755657*/
  Float4::Copy(flt_B43198, v57, v36); /*0x755667*/
  v37 = FromQuaternionAxisAngle(v58, v68, v11); /*0x755678*/
  Float4::Copy(flt_B431A8, v57, v37); /*0x755688*/
  v38 = FromQuaternionAxisAngle(v58, v72, v11); /*0x755699*/
  Float4::Copy(flt_B431B8, v57, v38); /*0x7556a9*/
  v39 = FromQuaternionAxisAngle(v58, v74, v11); /*0x7556ba*/
  Float4::Copy(flt_B431C8, v57, v39); /*0x7556ca*/
  v40 = FromQuaternionAxisAngle(v58, v73, v16); /*0x7556db*/
  Float4::Copy(flt_B431D8, v57, v40); /*0x7556eb*/
  v41 = FromQuaternionAxisAngle(v58, v67, v16); /*0x7556f9*/
  Float4::Copy(flt_B431E8, v57, v41); /*0x755709*/
  v42 = FromQuaternionAxisAngle(v58, v70, v16); /*0x75571a*/
  Float4::Copy(flt_B431F8, v57, v42); /*0x75572a*/
  v43 = FromQuaternionAxisAngle(v58, v71, v16); /*0x75573b*/
  Float4::Copy(flt_B43208, v57, v43); /*0x75574b*/
  v44 = FromQuaternionAxisAngle(v58, v73, v16); /*0x75575c*/
  Float4::Copy(flt_B43218, v57, v44); /*0x75576c*/
  v45 = FromQuaternionAxisAngle(v58, v67, v16); /*0x75577a*/
  Float4::Copy(flt_B43228, v57, v45); /*0x75578a*/
  v46 = FromQuaternionAxisAngle(v58, v70, v16); /*0x75579b*/
  Float4::Copy(flt_B43238, v57, v46); /*0x7557ab*/
  v47 = FromQuaternionAxisAngle(v58, v71, v16); /*0x7557bc*/
  Float4::Copy(flt_B43248, v57, v47); /*0x7557cc*/
  v48 = FromQuaternionAxisAngle(v58, v73, v11); /*0x7557dd*/
  Float4::Copy(flt_B43258, v57, v48); /*0x7557ed*/
  v49 = FromQuaternionAxisAngle(v58, v67, v11); /*0x7557fb*/
  Float4::Copy(flt_B43268, v57, v49); /*0x75580b*/
  v50 = FromQuaternionAxisAngle(v58, v70, v11); /*0x75581c*/
  Float4::Copy(flt_B43278, v57, v50); /*0x75582c*/
  v51 = FromQuaternionAxisAngle(v58, v71, v11); /*0x75583d*/
  Float4::Copy(flt_B43288, v57, v51); /*0x75584d*/
  Matrix3x4::Identity(&stru_B454B8); /*0x755857*/
  Matrix3x4::Identity(&stru_B454E8); /*0x755861*/
  Matrix3x4::Identity(&stru_B45518); /*0x75586b*/
  Matrix3x4::Identity(&stru_B45548); /*0x755875*/
  Int4::Set2(&stru_B43298, 0, 0, 0, 1065353216); /*0x75588a*/
  Int4::Set2(&stru_B432A8, 0, 0, 0, 1065353216); /*0x75589f*/
  Int4::Set2(&stru_B432B8, 0, 0, 0, 1065353216); /*0x7558b4*/
  Int4::Set2(&stru_B432C8, 0, 0, 0, 1065353216); /*0x7558c9*/
  Matrix3x4::Identity(&stru_B44318); /*0x7558d3*/
  v55 = -dbl_B43F00; /*0x7558e6*/
  Matrix3x3::RotateX(stru_B44318.m_Data, v55); /*0x7558e9*/
  v56 = -dbl_B44498; /*0x7558f7*/
  Matrix2D::Rotate(stru_B44318.m_Data, v56); /*0x7558ff*/
  v52 = &stru_B450B8; /*0x755904*/
  do /*0x755919*/
    result = Matrix3x4::Identity(v52++); /*0x75590b*/
  while ( (int)v52 < (int)&dword_B45178 ); /*0x755919*/
  stru_B450B8.m_Data[5] = -1082130432; /*0x75591e*/
  dword_B450E8 = 0; /*0x755928*/
  dword_B450EC = 1065353216; /*0x755932*/
  dword_B450F8 = 1065353216; /*0x75593c*/
  dword_B450FC = 0; /*0x755946*/
  dword_B45118 = -1082130432; /*0x755950*/
  dword_B45148 = 0; /*0x75595a*/
  dword_B4514C = -1082130432; /*0x755964*/
  dword_B45158 = -1082130432; /*0x75596e*/
  dword_B4515C = 0; /*0x755978*/
  return result; /*0x75591d*/
}



// ==== 0x007559B0  CopyAudioData  this=-  sig=csp ====
char *__fastcall AudioData_Copy(char *a1, int a2)
{
  qmemcpy(a1, (char *)&stru_B45188 + 48 * a2, 0x30u); /*0x7559c7*/
  return a1; /*0x7559c9*/
}



// ==== 0x007559D0  sub_7559D0  this=-  sig=ida-proto ====
float *__fastcall sub_7559D0(float *a1, float *a2, void *a3, double a4)
{
  float *result; // eax
  float *v5; // eax
  float v6; // [esp+0h] [ebp-4Ch]
  _DWORD v7[4]; // [esp+Ch] [ebp-40h] BYREF
  float v8[12]; // [esp+1Ch] [ebp-30h] BYREF

  result = a2; /*0x7559d3*/
  if ( a1 == a2 ) /*0x7559d9*/
  {
    qmemcpy(a3, (char *)&stru_B43F10 + 48 * (_DWORD)a2, 0x30u); /*0x7559f0*/
  }
  else
  {
    v6 = a4; /*0x755a04*/
    v5 = (float *)Math::QuaternionSlerp(v7, &stru_B44348[4 * (_DWORD)a1], &stru_B44348[4 * (_DWORD)a2], v6); /*0x755a1a*/
    result = ToQuaternionMatrix(v8, v5); /*0x755a25*/
    qmemcpy(a3, result, 0x30u); /*0x755a35*/
  }
  return result; /*0x7559f2*/
}



// ==== 0x00755A40  InterpolateVoxelAnimPose  this=-  sig=csp ====
void *__fastcall VoxelAnim_InterpolatePose(void *a1, int a2, int a3, double a4)
{
  int v5; // eax
  const void *v6; // esi
  float v8; // [esp+0h] [ebp-50h]
  _BYTE v9[48]; // [esp+20h] [ebp-30h] BYREF

  if ( a2 == a3 ) /*0x755a4e*/
  {
    qmemcpy(a1, (char *)&stru_B45188 + 48 * a3, 0x30u); /*0x755aa7*/
    return a1; /*0x755aaa*/
  }
  else
  {
    v8 = a4; /*0x755a5c*/
    v5 = Math::QuaternionSlerp((int)&stru_B43188 + 16 * a3, v8); /*0x755a6e*/
    v6 = (const void *)ToQuaternionMatrix(v9, v5); /*0x755a83*/
    qmemcpy(a1, v6, 0x30u); /*0x755a89*/
    return a1; /*0x755a87*/
  }
}



// ==== 0x00755AC0  sub_755AC0  this=-  sig=ida-proto ====
int __fastcall sub_755AC0(int a1)
{
  return dword_8467FC[a1]; /*0x755ac7*/
}



// ==== 0x00755AD0  sub_755AD0  this=-  sig=ida-proto ====
char __fastcall sub_755AD0(unsigned int *a1, int *a2)
{
  double v2; // st7
  unsigned int v4; // [esp+14h] [ebp-4h]

  v4 = *a1; /*0x755ad8*/
  v2 = Math::CalcAngle((double)(int)a1[1] - (double)a2[1], (double)*a2 - (double)(int)*a1); /*0x755afa*/
  LOWORD(v4) = Math::RoundToInt((v2 - 1.570796326794897) * -10430.06004058427); /*0x755b10*/
  return 32 - (((v4 >> 7) + 1) >> 1); /*0x755b26*/
}



// ==== 0x00755B30  VoxelModel::BuildDrawList  this=VoxelModel  sig=ida-proto ====
void __fastcall VoxelModel::BuildDrawList(float *a1, int a2, int a3)
{
  int v4; // ebx
  double v5; // st7
  double v6; // st7
  float *v7; // [esp+0h] [ebp-88h]
  float v8; // [esp+10h] [ebp-78h]
  int v9; // [esp+14h] [ebp-74h]
  int v10; // [esp+18h] [ebp-70h]
  int v11[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v12[12]; // [esp+28h] [ebp-60h] BYREF
  float v13[12]; // [esp+58h] [ebp-30h] BYREF

  v4 = 12 * a2; /*0x755b47*/
  Math::BuildRotationMatrix(v12, &flt_B444A0[3 * a2], flt_8467E4[a3]); /*0x755b56*/
  qmemcpy(a1, MultiplyMatrix3x4(v13, a1, v12), 0x30u); /*0x755b74*/
  v8 = *(float *)(v4 + 11809496) * -3.0; /*0x755b82*/
  v5 = *(float *)(v4 + 11809500) * -3.0; /*0x755b8c*/
  *(float *)v11 = v8; /*0x755b96*/
  *(float *)&v9 = v5; /*0x755b9e*/
  v6 = *(float *)(v4 + 11809504) * -3.0; /*0x755ba8*/
  v11[1] = v9; /*0x755bb5*/
  *(float *)&v10 = v6; /*0x755bb9*/
  v11[2] = v10; /*0x755bc1*/
  Matrix3x3::Multiply(v11, v7); /*0x755bc5*/
  Vector::MatrixMulVectorMath((int *)a1, 0.0, 0.0, 3.0); /*0x755bd5*/
}



// ==== 0x00755BF0  sub_755BF0  this=-  sig=ida-proto ====
float *__fastcall sub_755BF0(float *a1, int a2, int a3)
{
  double v4; // st7
  int v5; // edx
  double v6; // st7
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  v4 = flt_B432D8[3 * a2] * 1.5; /*0x755bff*/
  v5 = 12 * a2 + 11809496; /*0x755c05*/
  v7 = v4; /*0x755c0c*/
  v8 = *(float *)(v5 + 4) * 1.5; /*0x755c1d*/
  v6 = *(float *)(v5 + 8) * 1.5; /*0x755c24*/
  *a1 = v7; /*0x755c2c*/
  v9 = v6; /*0x755c32*/
  a1[1] = v8; /*0x755c36*/
  a1[2] = v9; /*0x755c3d*/
  return a1; /*0x755c40*/
}



// ==== 0x00755C50  j_TechnoClass_ClearArrays  this=-  sig=ida-proto ====
// attributes: thunk
int j_TechnoClass_ClearArrays()
{
  return TechnoClass::ClearArrays();
}



// ==== 0x00755C60  Locomotor_Update  this=-  sig=csp ====
char *__fastcall sub_755C60(char *a1, int a2)
{
  char *result; // eax

  result = a1; /*0x755c63*/
  if ( a2 >= 4 ) /*0x755c65*/
    a2 -= 4; /*0x755c67*/
  qmemcpy(a1, (char *)&stru_B450B8 + 48 * a2, 0x30u); /*0x755c7f*/
  return result; /*0x755c83*/
}



// ==== 0x00755C90  sub_755C90  this=-  sig=ida-proto ====
int sub_755C90()
{
  dword_B45580 = 0; /*0x755c92*/
  dword_B45584 = 0; /*0x755c97*/
  dword_B45588 = 0; /*0x755c9c*/
  dword_B4558C = 0; /*0x755ca1*/
  return 0; /*0x755ca6*/
}



// ==== 0x00755CB0  ObjectClass::method_755CB0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_755CB0(ObjectClass *this)
{
  LOBYTE(this->AbstractClass) = 0; /*0x755cb4*/
  this->? = 0; /*0x755cb6*/
  this->? = 0; /*0x755cb9*/
  this->? = 0; /*0x755cbc*/
  this->? = 0; /*0x755cbf*/
  this->? = 0; /*0x755cc2*/
  this->? = 0; /*0x755cc5*/
  return &this->AbstractClass; /*0x755cc8*/
}



// ==== 0x00755CD0  File::LoadFileVXL  this=File  sig=csp ====
_DWORD *__thiscall File::LoadFileVXL(File *this, int a2, int a3)
{
  this->__pad_0[0] = 0; /*0x755cd9*/
  *(_DWORD *)&this->File_field_0x2[2] = 0; /*0x755cdb*/
  *(_DWORD *)&this->__pad_6[2] = 0; /*0x755cde*/
  *(_DWORD *)&this->__pad_6[6] = 0; /*0x755ce1*/
  *(_DWORD *)&this->__pad_6[10] = 0; /*0x755ce4*/
  *(_DWORD *)&this->__pad_6[14] = 0; /*0x755ce7*/
  *(_DWORD *)&this->__pad_6[18] = 0; /*0x755cea*/
  if ( !Voxel::SortDepth((int)this, a2, a3) ) /*0x755cf5*/
    this->__pad_0[0] = 1; /*0x755cfe*/
  return this->__pad_0; /*0x755d03*/
}



// ==== 0x00755D10  WaveClass::Destroy  this=WaveClass  sig=csp ====
void __thiscall WaveClass::Destroy(WaveClass *this)
{
  void *abstractFlags; // eax
  void *nextArrayIndex; // eax

  if ( this->? ) /*0x755d16*/
    __3_YAXPAX_Z((void *)this->?); /*0x755d1e*/
  abstractFlags = (void *)this->?; /*0x755d26*/
  this->? = 0; /*0x755d29*/
  if ( abstractFlags ) /*0x755d2e*/
    __3_YAXPAX_Z(abstractFlags); /*0x755d31*/
  nextArrayIndex = (void *)this->?; /*0x755d39*/
  this->? = 0; /*0x755d3c*/
  if ( nextArrayIndex ) /*0x755d41*/
    __3_YAXPAX_Z(nextArrayIndex); /*0x755d44*/
  this->? = 0; /*0x755d4c*/
}



// ==== 0x00755DB0  Voxel::SortDepth  this=File  sig=csp ====
int __thiscall Voxel_Sort_Depth(int this, int a2, int a3)
{
  unsigned int v4; // edi
  void *v5; // eax
  void *v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  void *v11; // eax
  int v12; // ebp
  float v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // edi
  void *v17; // eax
  void *v18; // ecx
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  char *v23; // ebp
  int v24; // ebp
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  int v28; // eax
  int v29; // ebp
  double v30; // st7
  double v31; // st6
  double v32; // st5
  int v33; // eax
  int v34; // ecx
  float v35; // eax
  float v36; // edx
  int v37; // eax
  int v38; // ecx
  float v39; // eax
  float v40; // edx
  int v41; // eax
  int v42; // ecx
  float v43; // eax
  float v44; // edx
  int v45; // eax
  int v46; // ecx
  float v47; // eax
  double v48; // st5
  float v49; // edx
  double v50; // st5
  double v51; // st5
  int v52; // ecx
  float v53; // eax
  float v54; // edx
  double v55; // st5
  int v56; // eax
  int v57; // ecx
  float v58; // eax
  float v59; // edx
  double v60; // st6
  int v61; // ecx
  float v62; // eax
  float v63; // edx
  double v64; // st7
  double v65; // st7
  int v66; // ecx
  float v67; // edx
  float v68; // eax
  unsigned int v69; // ecx
  void *v70; // eax
  void *v71; // eax
  float v72; // [esp+2Ch] [ebp-13Ch] BYREF
  float v73; // [esp+30h] [ebp-138h]
  float v74; // [esp+34h] [ebp-134h]
  float v75; // [esp+38h] [ebp-130h]
  float v76; // [esp+3Ch] [ebp-12Ch]
  float v77; // [esp+40h] [ebp-128h]
  float v78; // [esp+44h] [ebp-124h]
  float v79; // [esp+48h] [ebp-120h]
  float v80; // [esp+4Ch] [ebp-11Ch]
  float v81; // [esp+50h] [ebp-118h]
  float v82; // [esp+54h] [ebp-114h]
  float v83; // [esp+58h] [ebp-110h]
  float v84; // [esp+5Ch] [ebp-10Ch]
  float v85; // [esp+60h] [ebp-108h]
  float v86; // [esp+64h] [ebp-104h]
  float v87; // [esp+68h] [ebp-100h]
  float v88; // [esp+6Ch] [ebp-FCh]
  float v89; // [esp+70h] [ebp-F8h]
  float v90; // [esp+74h] [ebp-F4h]
  float v91; // [esp+78h] [ebp-F0h]
  float v92; // [esp+7Ch] [ebp-ECh]
  float v93; // [esp+80h] [ebp-E8h]
  char v94[4]; // [esp+84h] [ebp-E4h] BYREF
  float v95; // [esp+88h] [ebp-E0h]
  float v96; // [esp+8Ch] [ebp-DCh]
  float v97; // [esp+90h] [ebp-D8h]
  float v98; // [esp+94h] [ebp-D4h]
  float v99; // [esp+98h] [ebp-D0h]
  float v100; // [esp+9Ch] [ebp-CCh]
  _DWORD v101[4]; // [esp+A0h] [ebp-C8h] BYREF
  char v102[48]; // [esp+B0h] [ebp-B8h] BYREF
  float v103; // [esp+E0h] [ebp-88h]
  float v104; // [esp+E4h] [ebp-84h]
  float v105; // [esp+E8h] [ebp-80h]
  float v106; // [esp+ECh] [ebp-7Ch]
  float v107; // [esp+F0h] [ebp-78h]
  float v108; // [esp+F4h] [ebp-74h]
  char v109; // [esp+F8h] [ebp-70h]
  char v110; // [esp+F9h] [ebp-6Fh]
  char v111; // [esp+FAh] [ebp-6Eh]
  char v112; // [esp+FBh] [ebp-6Dh]
  char v113[16]; // [esp+FCh] [ebp-6Ch] BYREF
  unsigned int v114; // [esp+10Ch] [ebp-5Ch]
  int v115; // [esp+110h] [ebp-58h]
  int v116; // [esp+114h] [ebp-54h]
  int v117; // [esp+118h] [ebp-50h]
  _DWORD v118[12]; // [esp+11Ch] [ebp-4Ch] BYREF
  char v119[16]; // [esp+14Ch] [ebp-1Ch] BYREF
  int v120; // [esp+15Ch] [ebp-Ch]
  int v121; // [esp+160h] [ebp-8h]
  int v122; // [esp+164h] [ebp-4h]

  v4 = 0; /*0x755dbc*/
  if ( *(_DWORD *)(this + 16) ) /*0x755dbe*/
    __3_YAXPAX_Z(*(void **)(this + 16)); /*0x755dc6*/
  v5 = *(void **)(this + 20); /*0x755dce*/
  *(_DWORD *)(this + 16) = 0; /*0x755dd1*/
  if ( v5 ) /*0x755dd6*/
    __3_YAXPAX_Z(v5); /*0x755dd9*/
  v6 = *(void **)(this + 24); /*0x755de1*/
  *(_DWORD *)(this + 20) = 0; /*0x755de4*/
  if ( v6 ) /*0x755de9*/
    __3_YAXPAX_Z(v6); /*0x755dec*/
  v7 = a2; /*0x755df4*/
  *(_DWORD *)(this + 24) = 0; /*0x755dfb*/
  if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1) ) /*0x755e09*/
    return 0; /*0x755e09*/
  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v113, 32); /*0x755e1d*/
  v8 = v115; /*0x755e20*/
  v9 = v116; /*0x755e27*/
  v10 = v117; /*0x755e2e*/
  *(_DWORD *)(this + 4) = v115; /*0x755e35*/
  *(_DWORD *)(this + 8) = v9; /*0x755e3b*/
  *(_DWORD *)(this + 12) = v10; /*0x755e42*/
  v11 = __2_YAPAXI_Z(12 * v8); /*0x755e45*/
  v12 = *(_DWORD *)(this + 8); /*0x755e4a*/
  *(_DWORD *)(this + 16) = v11; /*0x755e4d*/
  v13 = COERCE_FLOAT(__2_YAPAXI_Z(164 * v12)); /*0x755e5c*/
  v72 = v13; /*0x755e66*/
  if ( v13 == 0.0 ) /*0x755e6a*/
  {
    v13 = 0.0; /*0x755e99*/
  }
  else
  {
    v14 = v12 - 1; /*0x755e6c*/
    if ( v12 - 1 >= 0 ) /*0x755e71*/
    {
      v15 = LODWORD(v13) + 64; /*0x755e73*/
      v16 = v14 + 1; /*0x755e76*/
      do /*0x755e8f*/
      {
        Array::ForEach(v15, 12, 8, __0Iostream_init_QAE_XZ_8); /*0x755e83*/
        v15 += 164; /*0x755e88*/
        --v16; /*0x755e8e*/
      }
      while ( v16 ); /*0x755e8f*/
      v13 = v72; /*0x755e91*/
      v4 = 0; /*0x755e95*/
    }
  }
  *(float *)(this + 20) = v13; /*0x755e9b*/
  v17 = __2_YAPAXI_Z(*(_DWORD *)(this + 12)); /*0x755ea2*/
  v18 = *(void **)(this + 16); /*0x755ea7*/
  *(_DWORD *)(this + 24) = v17; /*0x755eaf*/
  if ( !v18 ) /*0x755eb2*/
  {
LABEL_67:
    v71 = *(void **)(this + 20); /*0x756453*/
    *(_DWORD *)(this + 16) = 0; /*0x756456*/
    if ( v71 ) /*0x75645b*/
      __3_YAXPAX_Z(v71); /*0x75645e*/
    v70 = *(void **)(this + 24); /*0x756466*/
    *(_DWORD *)(this + 20) = 0; /*0x756469*/
    if ( !v70 ) /*0x75646e*/
      goto LABEL_71; /*0x75646e*/
    goto LABEL_70; /*0x75646e*/
  }
  if ( !*(_DWORD *)(this + 20) || !v17 ) /*0x755ec3*/
  {
    __3_YAXPAX_Z(v18); /*0x75644b*/
    goto LABEL_67; /*0x75644b*/
  }
  if ( a3 ) /*0x755ed0*/
  {
    VoxelPalette::Init(&unk_B2FB78, &g_VoxelColorPalette); /*0x755ee7*/
    if ( (*(int (__thiscall **)(int, float *, int))(*(_DWORD *)a2 + 36))(a2, &v72, 1) != 1 ) /*0x755efd*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x755f03*/
      if ( *(_DWORD *)(this + 16) ) /*0x755f06*/
        __3_YAXPAX_Z(*(void **)(this + 16)); /*0x755f0e*/
      v19 = *(void **)(this + 20); /*0x755f16*/
      *(_DWORD *)(this + 16) = 0; /*0x755f19*/
      if ( v19 ) /*0x755f1e*/
        __3_YAXPAX_Z(v19); /*0x755f21*/
      v20 = *(void **)(this + 24); /*0x755f29*/
      *(_DWORD *)(this + 20) = 0; /*0x755f2c*/
      if ( !v20 ) /*0x755f31*/
        goto LABEL_32; /*0x755f31*/
      goto LABEL_31; /*0x755f31*/
    }
    if ( (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v94, 1) != 1 ) /*0x755f46*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x755f4c*/
      if ( *(_DWORD *)(this + 16) ) /*0x755f4f*/
        __3_YAXPAX_Z(*(void **)(this + 16)); /*0x755f57*/
      v21 = *(void **)(this + 20); /*0x755f5f*/
      *(_DWORD *)(this + 16) = 0; /*0x755f62*/
      if ( v21 ) /*0x755f67*/
        __3_YAXPAX_Z(v21); /*0x755f6a*/
      v20 = *(void **)(this + 24); /*0x755f72*/
      *(_DWORD *)(this + 20) = 0; /*0x755f75*/
      if ( !v20 ) /*0x755f7a*/
        goto LABEL_32; /*0x755f7a*/
LABEL_31:
      __3_YAXPAX_Z(v20); /*0x755f7c*/
LABEL_32:
      *(_DWORD *)(this + 24) = 0; /*0x755f85*/
      VoxelPalette::Reset(v118); /*0x755f8f*/
      return 0; /*0x755fa0*/
    }
    v118[0] = LOBYTE(v72); /*0x755fb6*/
    v118[1] = (unsigned __int8)v94[0]; /*0x755fbd*/
    v23 = (char *)&unk_B2FB79; /*0x755fc4*/
    do /*0x755ff6*/
    {
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v23 - 1, 1); /*0x755fd3*/
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v23, 1); /*0x755fdd*/
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v23 + 1, 1); /*0x755fea*/
      v23 += 3; /*0x755fed*/
    }
    while ( v23 < byte_B2FE79 ); /*0x755ff6*/
    if ( v114 > 1 ) /*0x756002*/
      (*(void (__thiscall **)(int, unsigned int, int))(*(_DWORD *)a2 + 40))(a2, 768 * v114 - 768, 1); /*0x756016*/
    GenerateLightRemapTable(0, 0); /*0x756022*/
    VoxelPalette::Reset(v118); /*0x75602e*/
  }
  else
  {
    (*(void (__thiscall **)(int, unsigned int, int))(*(_DWORD *)a2 + 40))(a2, 770 * v114, 1); /*0x75604d*/
  }
  if ( !*(_DWORD *)(this + 4) ) /*0x756055*/
  {
LABEL_43:
    if ( (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 36))( /*0x7560b5*/
           a2,
           *(_DWORD *)(this + 24),
           *(_DWORD *)(this + 12)) == *(_DWORD *)(this + 12) )
    {
      v28 = *(_DWORD *)(this + 8); /*0x75612d*/
      v72 = 0.0; /*0x756134*/
      if ( !v28 ) /*0x756138*/
      {
LABEL_59:
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 52))(v7); /*0x7563fe*/
        return 1; /*0x756414*/
      }
      v29 = 0; /*0x75613e*/
      while ( (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v7 + 36))(v7, v101, 92) == 92 ) /*0x756158*/
      {
        *(_BYTE *)(*(_DWORD *)(this + 20) + v29 + 160) = v109; /*0x756168*/
        *(_BYTE *)(*(_DWORD *)(this + 20) + v29 + 161) = v110; /*0x756179*/
        *(_BYTE *)(*(_DWORD *)(this + 20) + v29 + 162) = v111; /*0x75618a*/
        *(_BYTE *)(*(_DWORD *)(this + 20) + v29 + 163) = v112; /*0x75619b*/
        *(float *)(*(_DWORD *)(this + 20) + v29 + 12) = *(float *)&v101[3]; /*0x7561b3*/
        qmemcpy((void *)(*(_DWORD *)(this + 20) + v29 + 16), (const void *)Matrix::Copy12Float(v102), 0x30u); /*0x7561d2*/
        v30 = v103; /*0x7561d4*/
        v31 = v104; /*0x7561db*/
        v32 = v105; /*0x7561e2*/
        v95 = v106; /*0x7561fe*/
        v73 = v106; /*0x756210*/
        v33 = *(_DWORD *)(this + 20); /*0x756214*/
        v74 = v107; /*0x756217*/
        v96 = v107; /*0x75621b*/
        v97 = v105; /*0x756226*/
        v75 = v108; /*0x75622e*/
        v34 = v33 + v29 + 64; /*0x756236*/
        v35 = v107; /*0x75623a*/
        v85 = v106; /*0x75623e*/
        *(float *)v34 = v106; /*0x756242*/
        v36 = v97; /*0x756244*/
        *(float *)(v34 + 4) = v35; /*0x75624a*/
        v86 = v31; /*0x75624d*/
        *(float *)(v34 + 8) = v36; /*0x756251*/
        v37 = *(_DWORD *)(this + 20); /*0x756254*/
        v87 = v32; /*0x75625d*/
        v38 = v37 + v29 + 76; /*0x756261*/
        v39 = v86; /*0x756265*/
        *(float *)v38 = v85; /*0x75626b*/
        v40 = v87; /*0x75626d*/
        v98 = v30; /*0x756271*/
        *(float *)(v38 + 4) = v39; /*0x756275*/
        *(float *)(v38 + 8) = v40; /*0x75627a*/
        v41 = *(_DWORD *)(this + 20); /*0x75627d*/
        v99 = v31; /*0x756284*/
        v42 = v41 + v29 + 88; /*0x756288*/
        v43 = v99; /*0x75628c*/
        v100 = v32; /*0x756292*/
        *(float *)v42 = v98; /*0x756299*/
        v44 = v100; /*0x75629d*/
        *(float *)(v42 + 4) = v43; /*0x7562a4*/
        v91 = v30; /*0x7562a7*/
        v92 = v74; /*0x7562af*/
        *(float *)(v42 + 8) = v44; /*0x7562b3*/
        v45 = *(_DWORD *)(this + 20); /*0x7562b6*/
        v93 = v32; /*0x7562bd*/
        v46 = v45 + v29 + 100; /*0x7562c5*/
        v47 = v92; /*0x7562c9*/
        v76 = v73; /*0x7562cd*/
        v48 = v74; /*0x7562d1*/
        *(float *)v46 = v91; /*0x7562d5*/
        v49 = v93; /*0x7562d7*/
        v77 = v48; /*0x7562db*/
        v50 = v75; /*0x7562df*/
        *(float *)(v46 + 4) = v47; /*0x7562e3*/
        v78 = v50; /*0x7562e6*/
        v51 = v73; /*0x7562ea*/
        *(float *)(v46 + 8) = v49; /*0x7562ee*/
        v52 = *(_DWORD *)(this + 20) + v29 + 112; /*0x7562f8*/
        v53 = v77; /*0x7562fc*/
        v79 = v51; /*0x756300*/
        *(float *)v52 = v76; /*0x756304*/
        v54 = v78; /*0x756306*/
        *(float *)(v52 + 4) = v53; /*0x75630c*/
        v80 = v31; /*0x75630f*/
        v55 = v75; /*0x756313*/
        *(float *)(v52 + 8) = v54; /*0x756317*/
        v56 = *(_DWORD *)(this + 20); /*0x75631a*/
        v81 = v55; /*0x756321*/
        v57 = v56 + v29 + 124; /*0x756325*/
        v58 = v80; /*0x756329*/
        *(float *)v57 = v79; /*0x75632f*/
        v59 = v81; /*0x756331*/
        v82 = v30; /*0x756335*/
        *(float *)(v57 + 4) = v58; /*0x756339*/
        v83 = v31; /*0x75633c*/
        v60 = v75; /*0x756340*/
        *(float *)(v57 + 8) = v59; /*0x756344*/
        v61 = *(_DWORD *)(this + 20) + v29 + 136; /*0x75634e*/
        v62 = v83; /*0x756355*/
        v84 = v60; /*0x756359*/
        *(float *)v61 = v82; /*0x75635d*/
        v63 = v84; /*0x75635f*/
        v88 = v30; /*0x756363*/
        v64 = v74; /*0x756367*/
        *(float *)(v61 + 4) = v62; /*0x75636b*/
        v89 = v64; /*0x75636e*/
        v65 = v75; /*0x756372*/
        *(float *)(v61 + 8) = v63; /*0x756376*/
        v66 = *(_DWORD *)(this + 20) + v29 + 148; /*0x756380*/
        v90 = v65; /*0x756387*/
        *(float *)v66 = v88; /*0x75638b*/
        v67 = v90; /*0x756391*/
        *(float *)(v66 + 4) = v89; /*0x756395*/
        v7 = a2; /*0x756398*/
        v29 += 164; /*0x75639f*/
        *(float *)(v66 + 8) = v67; /*0x7563a5*/
        *(_DWORD *)(*(_DWORD *)(this + 20) + v29 - 164) = *(_DWORD *)(this + 24) + v101[0]; /*0x7563b7*/
        *(_DWORD *)(*(_DWORD *)(this + 20) + v29 - 160) = *(_DWORD *)(this + 24) + v101[1]; /*0x7563cd*/
        v68 = v72; /*0x7563e1*/
        *(_DWORD *)(*(_DWORD *)(this + 20) + v29 - 156) = *(_DWORD *)(this + 24) + v101[2]; /*0x7563e7*/
        v69 = *(_DWORD *)(this + 8); /*0x7563ee*/
        LODWORD(v72) = LODWORD(v68) + 1; /*0x7563f4*/
        if ( LODWORD(v68) + 1 >= v69 ) /*0x7563f8*/
          goto LABEL_59; /*0x7563f8*/
      }
      if ( *(_DWORD *)(this + 16) ) /*0x756417*/
        __3_YAXPAX_Z(*(void **)(this + 16)); /*0x75641f*/
      v25 = *(void **)(this + 20); /*0x756427*/
      *(_DWORD *)(this + 16) = 0; /*0x75642a*/
      if ( v25 ) /*0x75642f*/
        goto LABEL_63; /*0x75642f*/
    }
    else
    {
      if ( *(_DWORD *)(this + 16) ) /*0x7560b7*/
        __3_YAXPAX_Z(*(void **)(this + 16)); /*0x7560c1*/
      v25 = *(void **)(this + 20); /*0x7560c9*/
      *(_DWORD *)(this + 16) = 0; /*0x7560cc*/
      if ( v25 ) /*0x7560d1*/
LABEL_63:
        __3_YAXPAX_Z(v25); /*0x756431*/
    }
    v70 = *(void **)(this + 24); /*0x75643a*/
    *(_DWORD *)(this + 20) = 0; /*0x75643d*/
    if ( !v70 ) /*0x756442*/
    {
LABEL_71:
      *(_DWORD *)(this + 24) = 0; /*0x756479*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 52))(v7); /*0x756480*/
      return 0; /*0x756486*/
    }
LABEL_70:
    __3_YAXPAX_Z(v70); /*0x756470*/
    goto LABEL_71; /*0x756471*/
  }
  v24 = 0; /*0x756057*/
  while ( (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v119, 28) == 28 ) /*0x75606d*/
  {
    ++v4; /*0x756079*/
    *(_DWORD *)(*(_DWORD *)(this + 16) + v24) = v120; /*0x75607a*/
    *(_DWORD *)(*(_DWORD *)(this + 16) + v24 + 4) = v121; /*0x756087*/
    *(_BYTE *)(*(_DWORD *)(this + 16) + v24 + 8) = v122; /*0x756095*/
    v24 += 12; /*0x75609c*/
    if ( v4 >= *(_DWORD *)(this + 4) ) /*0x7560a1*/
      goto LABEL_43; /*0x7560a1*/
  }
  if ( *(_DWORD *)(this + 16) ) /*0x7560dc*/
    __3_YAXPAX_Z(*(void **)(this + 16)); /*0x7560e6*/
  v26 = *(void **)(this + 20); /*0x7560ee*/
  *(_DWORD *)(this + 16) = 0; /*0x7560f1*/
  if ( v26 ) /*0x7560f6*/
    __3_YAXPAX_Z(v26); /*0x7560f9*/
  v27 = *(void **)(this + 24); /*0x756101*/
  *(_DWORD *)(this + 20) = 0; /*0x756104*/
  if ( v27 ) /*0x756109*/
    __3_YAXPAX_Z(v27); /*0x75610c*/
  *(_DWORD *)(this + 24) = 0; /*0x756114*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x75611b*/
  return 0; /*0x755f94*/
}



// ==== 0x007564A0  ObjectClass::method_7564A0  this=ObjectClass  sig=csp ====
int __thiscall sub_7564A0(ObjectClass *this, int a2)
{
  return this->? + 12 * a2; /*0x7564ad*/
}



// ==== 0x007564B0  VoxelSection::GetInfo  this=VoxelSection  sig=csp ====
int __thiscall VoxelSection::GetInfo(VoxelSection *this, int a2, int a3)
{
  return *((_DWORD *)this + 5) + 164 * (a3 + *(_DWORD *)(*((_DWORD *)this + 4) + 12 * a2)); /*0x7564cf*/
}



// ==== 0x007564E0  ObjectClass::method_7564E0  this=ObjectClass  sig=csp ====
float *__thiscall sub_7564E0(ObjectClass *this, float *a2, int a3, int a4)
{
  int uniqueId; // edx
  int abstractFlags; // ecx
  int v6; // eax
  double v7; // st7
  float *v8; // eax
  double v9; // st6
  float v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]

  uniqueId = this->?; /*0x7564e7*/
  abstractFlags = this->?; /*0x7564ea*/
  v6 = 41 * (a4 + *(_DWORD *)(uniqueId + 12 * a3)); /*0x7564fc*/
  v7 = *(float *)(abstractFlags + 4 * v6 + 112) + *(float *)(abstractFlags + 4 * v6 + 88); /*0x756503*/
  v8 = (float *)(abstractFlags + 164 * (a4 + *(_DWORD *)(uniqueId + 12 * a3))); /*0x75650b*/
  v14 = v8[29] + v8[23]; /*0x756511*/
  v9 = v8[30] + v8[24]; /*0x756518*/
  v15 = v9; /*0x756521*/
  v11 = v7 * 0.5; /*0x75652b*/
  *a2 = v11; /*0x75653d*/
  v12 = v14 * 0.5; /*0x75653f*/
  a2[1] = v12; /*0x756551*/
  v13 = v15 * 0.5; /*0x756554*/
  a2[2] = v13; /*0x75655c*/
  return a2; /*0x75655f*/
}



// ==== 0x00756570  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_756570(ObjectClass *this)
{
  return (int)this->? + 164 * (int)this->? + 12 * (int)this->? + 28; /*0x75658c*/
}



// ==== 0x00756590  Voxel::ProcessColor  this=Voxel  sig=csp ====
int __thiscall Voxel::ProcessColor(Voxel *this, _DWORD *a2, float *a3)
{
  int v4; // ebx
  int v5; // esi
  unsigned __int8 v6; // dl
  int v7; // ecx
  float *v8; // edi
  float *v9; // edx
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  int v13; // esi
  int result; // eax
  float *v15; // [esp+10h] [ebp-44h]
  unsigned __int8 v16; // [esp+14h] [ebp-40h]
  float v17; // [esp+14h] [ebp-40h]
  unsigned __int8 v18; // [esp+1Ch] [ebp-38h]
  _DWORD v19[6]; // [esp+20h] [ebp-34h] BYREF
  __int16 v20; // [esp+38h] [ebp-1Ch]
  __int16 v21; // [esp+3Ah] [ebp-1Ah]
  __int16 v22; // [esp+3Ch] [ebp-18h]
  __int16 v23; // [esp+3Eh] [ebp-16h]
  __int16 v24; // [esp+40h] [ebp-14h]
  __int16 v25; // [esp+42h] [ebp-12h]
  __int16 v26; // [esp+44h] [ebp-10h]
  __int16 v27; // [esp+46h] [ebp-Eh]
  __int16 v28; // [esp+48h] [ebp-Ch]
  __int16 v29; // [esp+4Ah] [ebp-Ah]
  __int16 v30; // [esp+4Ch] [ebp-8h]
  __int16 v31; // [esp+4Eh] [ebp-6h]
  unsigned __int8 v32; // [esp+50h] [ebp-4h]
  unsigned __int8 v33; // [esp+51h] [ebp-3h]
  unsigned __int8 v34; // [esp+52h] [ebp-2h]
  float *v35; // [esp+58h] [ebp+4h]
  float v36; // [esp+5Ch] [ebp+8h]

  v4 = this->Voxel_field_0x14[0] + 164 * (a2[2] + *(_DWORD *)(this->Voxel_field_0x10[0] + 12 * a2[1])); /*0x7565b8*/
  v5 = 9 * a2[3]; /*0x7565be*/
  v16 = *(_BYTE *)(v4 + 161); /*0x7565cd*/
  v6 = *(_BYTE *)(v4 + 162); /*0x7565d1*/
  v32 = *(_BYTE *)(v4 + 160); /*0x7565db*/
  v18 = v6; /*0x7565e3*/
  v33 = v16; /*0x7565e7*/
  v34 = v6; /*0x7565eb*/
  v19[0] = *(_DWORD *)v4; /*0x7565f1*/
  v19[1] = *(_DWORD *)(v4 + 4); /*0x7565f8*/
  v7 = 3 * dword_8468C4[v5]; /*0x756605*/
  v19[2] = *(_DWORD *)(v4 + 8); /*0x756608*/
  v8 = (float *)&a2[v7 + 10]; /*0x75660c*/
  v35 = (float *)&a2[3 * dword_8468CC[v5] + 10]; /*0x756630*/
  v9 = (float *)&a2[3 * dword_8468D0[v5] + 10]; /*0x756637*/
  v10 = dword_8468E0[v5]; /*0x756641*/
  v19[4] = dword_8468DC[v5]; /*0x756647*/
  v15 = v9; /*0x75664f*/
  v11 = dword_8468D8[v5]; /*0x756658*/
  v19[5] = v32 * v10; /*0x756661*/
  v19[3] = (v32 - 1) * dword_8468D4[v5] + v32 * (v16 - 1) * v11; /*0x75668a*/
  v20 = Math::RoundToInt((*v8 + 128.0 - *a3) * 256.0); /*0x7566a7*/
  v21 = Math::RoundToInt((v8[1] + 128.0 - a3[1]) * 256.0); /*0x7566cb*/
  v12 = (double)v32; /*0x7566e7*/
  v22 = Math::RoundToInt((v8[2] + 128.0 - a3[2]) * 256.0); /*0x7566eb*/
  v23 = Math::RoundToInt(v12); /*0x75670a*/
  v26 = Math::RoundToInt(v12); /*0x756726*/
  v29 = Math::RoundToInt(v12); /*0x756757*/
  v24 = Math::RoundToInt(v12); /*0x756773*/
  v27 = Math::RoundToInt(v12); /*0x75678d*/
  v30 = Math::RoundToInt(v12); /*0x7567ab*/
  if ( dword_B43180 ) /*0x7567b7*/
  {
    v25 = Math::RoundToInt(v12); /*0x7567d0*/
    v36 = (float)v16; /*0x75670f*/
    v28 = Math::RoundToInt((v35[2] - v8[2]) / v36 * 256.0); /*0x7567f0*/
    v17 = (float)v18; /*0x756740*/
    v31 = Math::RoundToInt((v15[2] - v8[2]) / v17 * 256.0); /*0x75680a*/
  }
  v13 = dword_8468C0[v5]; /*0x756818*/
  if ( dword_B43180 ) /*0x756820*/
    v13 |= 2u; /*0x756822*/
  if ( dword_B43184 ) /*0x75682c*/
    v13 |= 4u; /*0x75682e*/
  if ( !*(_BYTE *)(v4 + 163) ) /*0x756831*/
    v13 |= 8u; /*0x75683b*/
  LOBYTE(result) = ((char (__usercall *)@<al>(int@<ebx>, int@<edi>, int))funcs_756843[v13])(v4, (int)v8, (int)v19); /*0x756843*/
  return result; /*0x75684d*/
}



// ==== 0x00756860  ObjectClass::InitializeTileAudioOcclusion  this=ObjectClass  sig=csp ====
int __thiscall InitializeTileAudioOcclusion(ObjectClass *this, int a2, float *a3)
{
  int uniqueId; // edx
  int abstractFlags; // ecx
  int v6; // edi
  double v7; // st7
  int v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // eax
  __int16 v12; // ax
  double v13; // st7
  __int16 v14; // ax
  double v15; // st7
  int v16; // eax
  double v17; // st7
  int v18; // eax
  double v19; // st7
  __int16 v20; // bp
  __int16 v21; // ax
  double v22; // st7
  __int16 v23; // ax
  _DWORD *v24; // ecx
  float *v25; // ebx
  int result; // eax
  int v27; // edx
  int v28; // esi
  unsigned __int8 v29; // dl
  int v30; // eax
  int v31; // ebp
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  int v35; // ebp
  int v36; // ecx
  int v37; // [esp+10h] [ebp-68h]
  int v38; // [esp+14h] [ebp-64h]
  int v39; // [esp+14h] [ebp-64h]
  int v40; // [esp+18h] [ebp-60h]
  int v41; // [esp+18h] [ebp-60h]
  _DWORD *v42; // [esp+1Ch] [ebp-5Ch]
  int v43; // [esp+20h] [ebp-58h]
  int v44; // [esp+24h] [ebp-54h]
  int v45; // [esp+28h] [ebp-50h]
  int v46; // [esp+2Ch] [ebp-4Ch]
  __int16 v47; // [esp+30h] [ebp-48h]
  _DWORD v48[2]; // [esp+34h] [ebp-44h] BYREF
  _DWORD v49[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  int v50; // [esp+48h] [ebp-30h]
  int v51; // [esp+50h] [ebp-28h]
  _BYTE v52[6]; // [esp+5Ch] [ebp-1Ch]
  _WORD v53[3]; // [esp+62h] [ebp-16h]
  _DWORD v54[4]; // [esp+68h] [ebp-10h]
  float v55; // [esp+7Ch] [ebp+4h]
  int v56; // [esp+7Ch] [ebp+4h]
  float *v57; // [esp+80h] [ebp+8h]
  float *v58; // [esp+80h] [ebp+8h]

  uniqueId = this->?; /*0x756865*/
  abstractFlags = this->?; /*0x75686d*/
  v6 = 0; /*0x756878*/
  v7 = *(float *)(a2 + 36); /*0x75687a*/
  v8 = 3 * *(_DWORD *)(a2 + 4); /*0x75687d*/
  v51 = 0; /*0x756880*/
  v9 = 41 * (*(_DWORD *)(a2 + 8) + *(_DWORD *)(uniqueId + 4 * v8)); /*0x756897*/
  LOBYTE(uniqueId) = *(_BYTE *)(abstractFlags + 4 * v9 + 160); /*0x75689a*/
  v10 = (v7 + 128.0 - *a3) * 256.0; /*0x7568a1*/
  v11 = abstractFlags + 4 * v9; /*0x7568a7*/
  LOBYTE(v44) = *(_BYTE *)(v11 + 161); /*0x7568bb*/
  v50 = *(_DWORD *)(v11 + 4); /*0x7568c4*/
  v37 = (unsigned __int8)uniqueId; /*0x7568c8*/
  v12 = Math::RoundToInt(v10); /*0x7568cc*/
  v13 = *(float *)(a2 + 40) + 128.0; /*0x7568d4*/
  *(_WORD *)v52 = v12; /*0x7568da*/
  v14 = Math::RoundToInt((v13 - a3[1]) * 256.0); /*0x7568e8*/
  v15 = (double)*(int *)(a2 + 64); /*0x7568ed*/
  *(_WORD *)&v52[2] = v14; /*0x7568f0*/
  LOWORD(v16) = Math::RoundToInt(v15 + *a3); /*0x7568f7*/
  v17 = (double)*(int *)(a2 + 68); /*0x7568fc*/
  *(_DWORD *)(a2 + 64) = v16; /*0x7568ff*/
  LOWORD(v18) = Math::RoundToInt(v17 + a3[1]); /*0x756905*/
  v19 = (double)v37; /*0x75690a*/
  v20 = v18; /*0x75690e*/
  *(_DWORD *)(a2 + 68) = v18; /*0x756910*/
  v47 = v18; /*0x756913*/
  v53[0] = Math::RoundToInt(v19); /*0x75692a*/
  v55 = (float)(unsigned __int8)v44; /*0x756946*/
  LOWORD(v54[0]) = Math::RoundToInt(v19); /*0x756965*/
  v21 = Math::RoundToInt(v19); /*0x756972*/
  v22 = *(float *)(a2 + 52) - *(float *)(a2 + 40); /*0x75697c*/
  v53[1] = v21; /*0x75697f*/
  v23 = Math::RoundToInt(v22 / v55 * 256.0); /*0x75698e*/
  v24 = *(_DWORD **)(a2 + 60); /*0x756993*/
  v25 = *(float **)v52; /*0x756996*/
  HIWORD(v54[0]) = v23; /*0x75699a*/
  v45 = *(_DWORD *)(a2 + 64); /*0x7569a2*/
  result = *(_DWORD *)&v52[2]; /*0x7569a6*/
  v42 = v24; /*0x7569ac*/
  v56 = *(_DWORD *)&v52[2]; /*0x7569b0*/
  if ( v24 ) /*0x7569b4*/
  {
    if ( (_BYTE)v44 ) /*0x7569c3*/
    {
      v44 = (unsigned __int8)v44; /*0x7569c9*/
      while ( 1 ) /*0x7569d7*/
      {
        v27 = v37; /*0x7569d7*/
        v40 = v6; /*0x7569db*/
        v57 = v25; /*0x7569e1*/
        v38 = result; /*0x7569e8*/
        if ( v37 ) /*0x7569ec*/
        {
          v43 = v37; /*0x7569f2*/
          do /*0x756aaa*/
          {
            if ( *(_DWORD *)(v50 + 4 * v6) != -1 ) /*0x7569fe*/
            {
              v28 = result & 0xFF00 | ((unsigned __int16)v25 >> 8); /*0x756a1b*/
              v29 = BYTE1(result); /*0x756a25*/
              v30 = *v24; /*0x756a27*/
              v31 = (unsigned __int16)(v29 + v20); /*0x756a35*/
              v48[0] = (unsigned __int16)(BYTE1(v25) + (_WORD)v45); /*0x756a3c*/
              v48[1] = v31; /*0x756a40*/
              v46 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(v30 + 40))(v24, v48); /*0x756a4b*/
              v32 = *v42; /*0x756a54*/
              v49[0] = (unsigned __int16)(BYTE1(v25) + (_WORD)v45) + 1; /*0x756a57*/
              v49[1] = v31; /*0x756a5b*/
              v33 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(v32 + 40))(v42, v49); /*0x756a5f*/
              v20 = v47; /*0x756a66*/
              v6 = v51; /*0x756a6a*/
              v34 = v33 == 0; /*0x756a73*/
              result = v56; /*0x756a75*/
              g_VoxelRenderBuffer[v28] = v46 == 0; /*0x756a79*/
              v24 = v42; /*0x756a7f*/
              g_VoxelDepthBuffer[v28] = v34; /*0x756a86*/
            }
            result += *(_DWORD *)&v53[1]; /*0x756a94*/
            LOWORD(v25) = v53[0] + (_WORD)v25; /*0x756a9a*/
            ++v6; /*0x756a9c*/
            v34 = v43 == 1; /*0x756a9d*/
            v56 = result; /*0x756a9e*/
            v51 = v6; /*0x756aa2*/
            --v43; /*0x756aa6*/
          }
          while ( !v34 ); /*0x756aaa*/
          v27 = v37; /*0x756ab0*/
        }
        v25 = (float *)((char *)v57 + v54[0]); /*0x756abf*/
        v56 = *(_DWORD *)((char *)v54 + 2) + v38; /*0x756ad2*/
        v51 = v27 + v40; /*0x756ad6*/
        result = --v44; /*0x756ade*/
        if ( !v44 ) /*0x756ae3*/
          break; /*0x756ae3*/
        result = *(_DWORD *)((char *)v54 + 2) + v38; /*0x7569cf*/
        v6 = v51; /*0x7569d3*/
      }
    }
  }
  else if ( (_BYTE)v44 ) /*0x756afc*/
  {
    v44 = (unsigned __int8)v44; /*0x756b02*/
    while ( 1 ) /*0x756b14*/
    {
      v41 = v6; /*0x756b14*/
      v58 = v25; /*0x756b1a*/
      v39 = result; /*0x756b21*/
      if ( v37 ) /*0x756b25*/
      {
        v35 = v37; /*0x756b27*/
        do /*0x756b64*/
        {
          if ( *(_DWORD *)(v50 + 4 * v6) != -1 ) /*0x756b31*/
          {
            v36 = result & 0xFF00 | ((unsigned __int16)v25 >> 8); /*0x756b46*/
            g_VoxelRenderBuffer[v36] = 1; /*0x756b4a*/
            g_VoxelDepthBuffer[v36] = 1; /*0x756b50*/
          }
          LOWORD(v25) = v53[0] + (_WORD)v25; /*0x756b5e*/
          LOWORD(result) = v53[1] + result; /*0x756b60*/
          ++v6; /*0x756b62*/
          --v35; /*0x756b63*/
        }
        while ( v35 ); /*0x756b64*/
      }
      v25 = (float *)((char *)v58 + v54[0]); /*0x756b75*/
      result = v44 - 1; /*0x756b8c*/
      v34 = v44 == 1; /*0x756b8c*/
      v51 = v37 + v41; /*0x756b8d*/
      --v44; /*0x756b91*/
      if ( v34 ) /*0x756b95*/
        break; /*0x756b95*/
      result = *(_DWORD *)((char *)v54 + 2) + v39; /*0x756b08*/
      v6 = v51; /*0x756b0c*/
    }
  }
  return result; /*0x756ae9*/
}



// ==== 0x00756BB0  AudioOcclusion::ComputeBoundingVertices  this=AudioOcclusion  sig=csp ====
int __thiscall AudioOcclusion::ComputeBoundingVertices(AudioOcclusion *this)
{
  unsigned int v2; // ecx
  int result; // eax
  int v4; // eax
  int v5; // ebx
  float *v6; // edx
  float v7; // [esp+4h] [ebp-78h]
  int v8; // [esp+8h] [ebp-74h]
  float v9; // [esp+8h] [ebp-74h]
  float v10; // [esp+Ch] [ebp-70h]
  int v11; // [esp+10h] [ebp-6Ch]
  int v12; // [esp+14h] [ebp-68h]
  float v13; // [esp+18h] [ebp-64h]
  float v14; // [esp+1Ch] [ebp-60h]
  float v15; // [esp+24h] [ebp-58h]

  v2 = 0; /*0x756bb6*/
  result = *((_DWORD *)this + 2); /*0x756bb8*/
  if ( result ) /*0x756bbd*/
  {
    result = 0; /*0x756bc4*/
    v11 = 0; /*0x756bc8*/
    do /*0x756dc0*/
    {
      v4 = *((_DWORD *)this + 5) + result; /*0x756bd1*/
      v5 = *(unsigned __int8 *)(v4 + 161); /*0x756bdb*/
      v12 = *(unsigned __int8 *)(v4 + 162); /*0x756bff*/
      v14 = (double)*(unsigned __int8 *)(v4 + 160) * 0.5; /*0x756c05*/
      v8 = -*(unsigned __int8 *)(v4 + 160); /*0x756c22*/
      v13 = (double)v5 * 0.5; /*0x756c29*/
      *(float *)(v4 + 64) = v14; /*0x756c39*/
      *(float *)(v4 + 68) = v13; /*0x756c48*/
      v15 = (double)-v12 * 0.5; /*0x756c4b*/
      *(float *)(v4 + 72) = v15; /*0x756c5d*/
      *(float *)(v4 + 76) = v14; /*0x756c64*/
      v10 = (double)-v5 * 0.5; /*0x756c6c*/
      *(float *)(v4 + 80) = v10; /*0x756c82*/
      *(float *)(v4 + 84) = v15; /*0x756c8f*/
      v7 = (double)v8 * 0.5; /*0x756c92*/
      *(float *)(v4 + 88) = v7; /*0x756ca2*/
      *(float *)(v4 + 92) = v10; /*0x756cae*/
      *(float *)(v4 + 96) = v15; /*0x756cb9*/
      *(float *)(v4 + 100) = v7; /*0x756cdd*/
      *(float *)(v4 + 104) = v13; /*0x756ce9*/
      *(float *)(v4 + 108) = v15; /*0x756cf0*/
      v9 = (double)v12 * 0.5; /*0x756cfa*/
      *(float *)(v4 + 112) = v14; /*0x756d02*/
      *(float *)(v4 + 116) = v13; /*0x756d0c*/
      *(float *)(v4 + 120) = v9; /*0x756d13*/
      *(float *)(v4 + 124) = v14; /*0x756d2d*/
      *(float *)(v4 + 128) = v10; /*0x756d34*/
      *(float *)(v4 + 132) = v9; /*0x756d3b*/
      v6 = (float *)(v4 + 136); /*0x756d5a*/
      v4 += 148; /*0x756d60*/
      ++v2; /*0x756d65*/
      *v6 = v7; /*0x756d66*/
      v6[1] = v10; /*0x756d6c*/
      v6[2] = v9; /*0x756d73*/
      *(float *)v4 = v7; /*0x756d98*/
      *(float *)(v4 + 4) = v13; /*0x756da1*/
      *(float *)(v4 + 8) = v9; /*0x756dab*/
      result = v11 + 164; /*0x756db5*/
      v11 += 164; /*0x756dbc*/
    }
    while ( v2 < *((_DWORD *)this + 2) ); /*0x756dc0*/
  }
  return result; /*0x756dc9*/
}



// ==== 0x00756DD0  VoxelModel::LoadVXLHeader  this=VoxelModel  sig=csp ====
char __usercall sub_756DD0@<al>(int a1@<ebx>, int a2@<edi>, int a3)
{
  unsigned int v4; // esi
  _WORD *v5; // eax
  __int16 v6; // dx
  char result; // al
  int v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // ebp
  unsigned __int8 v11; // dl
  unsigned __int8 *v12; // eax
  int v13; // edx
  _BYTE *v14; // eax
  unsigned int v15; // edx
  unsigned int i; // [esp+8h] [ebp-24h]
  unsigned int v17; // [esp+Ch] [ebp-20h]
  int v18; // [esp+14h] [ebp-18h]
  __int16 v19; // [esp+18h] [ebp-14h]
  __int16 v20; // [esp+1Ch] [ebp-10h]
  __int16 v21; // [esp+20h] [ebp-Ch]
  __int16 v22; // [esp+24h] [ebp-8h]
  int v23; // [esp+28h] [ebp-4h]
  int v24; // [esp+30h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x756dd7*/
  v4 = 1; /*0x756df0*/
  if ( *(_BYTE *)(a3 + 50) > 1u ) /*0x756df5*/
  {
    v5 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x756df7*/
    do /*0x756e1e*/
    {
      v6 = *(v5 - 1); /*0x756dfc*/
      v5 += 2; /*0x756e00*/
      *(v5 - 1) = *(_WORD *)(a3 + 42) + v6; /*0x756e07*/
      ++v4; /*0x756e13*/
      *v5 = *(_WORD *)(a3 + 44) + *(v5 - 2); /*0x756e14*/
    }
    while ( v4 < *(unsigned __int8 *)(a3 + 50) ); /*0x756e1e*/
  }
  result = *(_BYTE *)(a3 + 49); /*0x756e20*/
  LOWORD(v4) = *(_WORD *)(a3 + 24); /*0x756e23*/
  LOWORD(a2) = *(_WORD *)(a3 + 26); /*0x756e27*/
  v17 = 0; /*0x756e2b*/
  if ( result ) /*0x756e35*/
  {
    do /*0x756f63*/
    {
      v21 = v4; /*0x756e40*/
      v23 = *(_DWORD *)(a3 + 12); /*0x756e44*/
      v22 = a2; /*0x756e4d*/
      for ( i = 0; i < *(unsigned __int8 *)(a3 + 48); ++i ) /*0x756e48*/
      {
        v19 = v4; /*0x756e64*/
        v20 = a2; /*0x756e68*/
        v8 = *(_DWORD *)(*(_DWORD *)a3 + 4 * *(_DWORD *)(a3 + 12)); /*0x756e6c*/
        if ( v8 != -1 ) /*0x756e72*/
        {
          v9 = (unsigned __int8 *)(v8 + *(_DWORD *)(a3 + 8)); /*0x756e7b*/
          v10 = *(unsigned __int8 *)(a3 + 50); /*0x756e82*/
          if ( *(_BYTE *)(a3 + 50) ) /*0x756e7f*/
          {
            do /*0x756f00*/
            {
              v11 = *v9; /*0x756e88*/
              v12 = v9 + 1; /*0x756e8a*/
              v10 -= v11; /*0x756e99*/
              LOWORD(a1) = g_VoxelOffsetTable[v11]; /*0x756e9b*/
              v4 += a1; /*0x756ea3*/
              LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v11]); /*0x756ea5*/
              a2 += a1; /*0x756eaf*/
              v13 = *v12; /*0x756eb1*/
              v14 = v12 + 1; /*0x756eb3*/
              if ( v13 ) /*0x756eb6*/
              {
                v24 = v13; /*0x756eba*/
                v18 = v10 - v13; /*0x756ebe*/
                do /*0x756ef7*/
                {
                  LOBYTE(v13) = *v14; /*0x756ec2*/
                  v14 += 2; /*0x756ed4*/
                  a1 = BYTE1(v4) | a2 & 0xFF00; /*0x756eda*/
                  g_VoxelRenderBuffer[a1] = v13; /*0x756edc*/
                  LOWORD(v13) = *(_WORD *)(a3 + 42); /*0x756ee2*/
                  v4 += v13; /*0x756ee6*/
                  LOWORD(v13) = *(_WORD *)(a3 + 44); /*0x756ee8*/
                  a2 += v13; /*0x756eec*/
                  v13 = --v24; /*0x756ef2*/
                }
                while ( v24 ); /*0x756ef7*/
                v10 = v18; /*0x756ef9*/
              }
              v9 = v14 + 1; /*0x756efd*/
            }
            while ( v10 ); /*0x756f00*/
          }
        }
        LOWORD(v4) = v19 + *(_WORD *)(a3 + 30); /*0x756f10*/
        LOWORD(a2) = v20 + *(_WORD *)(a3 + 32); /*0x756f15*/
        *(_DWORD *)(a3 + 12) += *(_DWORD *)(a3 + 16); /*0x756f20*/
      }
      LOWORD(v4) = v21 + *(_WORD *)(a3 + 36); /*0x756f44*/
      LOWORD(a2) = v22 + *(_WORD *)(a3 + 38); /*0x756f49*/
      v15 = *(unsigned __int8 *)(a3 + 49); /*0x756f52*/
      *(_DWORD *)(a3 + 12) = v23 + *(_DWORD *)(a3 + 20); /*0x756f55*/
      result = ++v17; /*0x756f5c*/
    }
    while ( v17 < v15 ); /*0x756f63*/
  }
  return result; /*0x756f6b*/
}



// ==== 0x00756F80  VoxelModel::ParseSectionData  this=VoxelModel  sig=csp ====
char __usercall sub_756F80@<al>(unsigned int a1@<ebx>, int a2@<edi>, int a3)
{
  unsigned int v4; // esi
  _WORD *v5; // eax
  __int16 v6; // di
  char result; // al
  int v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // ebp
  int v11; // edx
  unsigned __int8 *v12; // eax
  unsigned int v13; // edx
  unsigned int i; // [esp+Ch] [ebp-24h]
  unsigned int v15; // [esp+10h] [ebp-20h]
  int v16; // [esp+14h] [ebp-1Ch]
  unsigned __int8 v17; // [esp+18h] [ebp-18h]
  __int16 v18; // [esp+1Ch] [ebp-14h]
  __int16 v19; // [esp+20h] [ebp-10h]
  __int16 v20; // [esp+24h] [ebp-Ch]
  __int16 v21; // [esp+28h] [ebp-8h]
  int v22; // [esp+2Ch] [ebp-4h]
  int v23; // [esp+34h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x756f89*/
  v4 = 1; /*0x756f9f*/
  if ( *(_BYTE *)(a3 + 50) > 1u ) /*0x756fa4*/
  {
    v5 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x756fa6*/
    do /*0x756fcd*/
    {
      v6 = *(_WORD *)(a3 + 42) + *(v5 - 1); /*0x756fb1*/
      v5 += 2; /*0x756fb5*/
      *(v5 - 1) = v6; /*0x756fb8*/
      ++v4; /*0x756fc4*/
      *v5 = *(v5 - 2) + *(_WORD *)(a3 + 44); /*0x756fc5*/
      a1 = *(unsigned __int8 *)(a3 + 50); /*0x756fc8*/
    }
    while ( v4 < a1 ); /*0x756fcd*/
  }
  result = *(_BYTE *)(a3 + 49); /*0x756fcf*/
  LOWORD(v4) = *(_WORD *)(a3 + 24); /*0x756fd2*/
  LOWORD(a2) = *(_WORD *)(a3 + 26); /*0x756fd6*/
  v15 = 0; /*0x756fdc*/
  if ( result ) /*0x756fe0*/
  {
    do /*0x75710d*/
    {
      v20 = v4; /*0x756fee*/
      v22 = *(_DWORD *)(a3 + 12); /*0x756ff2*/
      v21 = a2; /*0x756ffb*/
      for ( i = 0; i < *(unsigned __int8 *)(a3 + 48); ++i ) /*0x756ff6*/
      {
        v18 = v4; /*0x75700f*/
        v19 = a2; /*0x757013*/
        v8 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * *(_DWORD *)(a3 + 12)); /*0x757017*/
        if ( v8 != -1 ) /*0x75701d*/
        {
          v9 = (unsigned __int8 *)(v8 + *(_DWORD *)(a3 + 8)); /*0x757026*/
          v10 = *(unsigned __int8 *)(a3 + 50); /*0x75702d*/
          if ( *(_BYTE *)(a3 + 50) ) /*0x75702a*/
          {
            do /*0x7570aa*/
            {
              v11 = *v9; /*0x757035*/
              v12 = v9 - 1; /*0x757037*/
              if ( v11 ) /*0x75703a*/
              {
                v23 = v11; /*0x75703e*/
                v16 = v10 - v11; /*0x757042*/
                do /*0x75707b*/
                {
                  LOBYTE(v11) = *(v12 - 1); /*0x757046*/
                  a1 = BYTE1(v4) | a2 & 0xFF00; /*0x75705d*/
                  v12 -= 2; /*0x75705f*/
                  g_VoxelRenderBuffer[a1] = v11; /*0x757060*/
                  LOWORD(v11) = *(_WORD *)(a3 + 42); /*0x757066*/
                  v4 += v11; /*0x75706a*/
                  LOWORD(v11) = *(_WORD *)(a3 + 44); /*0x75706c*/
                  a2 += v11; /*0x757070*/
                  v11 = --v23; /*0x757076*/
                }
                while ( v23 ); /*0x75707b*/
                v10 = v16; /*0x75707d*/
              }
              v17 = *(v12 - 1); /*0x757085*/
              v9 = v12 - 2; /*0x757089*/
              LOWORD(a1) = g_VoxelOffsetTable[v17]; /*0x757094*/
              v4 += a1; /*0x75709c*/
              LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v17]); /*0x75709e*/
              a2 += a1; /*0x7570a6*/
              v10 -= v17; /*0x7570a8*/
            }
            while ( v10 ); /*0x7570aa*/
          }
        }
        LOWORD(v4) = v18 + *(_WORD *)(a3 + 30); /*0x7570ba*/
        LOWORD(a2) = v19 + *(_WORD *)(a3 + 32); /*0x7570bf*/
        *(_DWORD *)(a3 + 12) += *(_DWORD *)(a3 + 16); /*0x7570ca*/
      }
      LOWORD(v4) = v20 + *(_WORD *)(a3 + 36); /*0x7570ee*/
      LOWORD(a2) = v21 + *(_WORD *)(a3 + 38); /*0x7570f3*/
      v13 = *(unsigned __int8 *)(a3 + 49); /*0x7570fc*/
      *(_DWORD *)(a3 + 12) = v22 + *(_DWORD *)(a3 + 20); /*0x7570ff*/
      result = ++v15; /*0x757106*/
    }
    while ( v15 < v13 ); /*0x75710d*/
  }
  return result; /*0x757114*/
}



// ==== 0x00757120  ObjectClass::RenderVoxels  this=ObjectClass  sig=csp ====
char __usercall Voxel_Render@<al>(int *a1@<ebx>, int a2@<ebp>, int a3@<edi>, int *a4)
{
  int *v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // dx
  char result; // al
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  _BYTE *v12; // esi
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // al
  int v15; // eax
  char *v16; // esi
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // edx
  int *v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+18h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-20h]
  __int16 v27; // [esp+20h] [ebp-1Ch]
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+28h] [ebp-14h]
  __int16 v30; // [esp+2Ch] [ebp-10h]
  __int16 v31; // [esp+30h] [ebp-Ch]
  __int16 v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v4 = a4; /*0x757120*/
  g_VoxelOffsetTable[0] = 0; /*0x757127*/
  v5 = 1; /*0x757141*/
  if ( *((_BYTE *)a4 + 50) > 1u ) /*0x757146*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757148*/
    do /*0x75716f*/
    {
      v7 = *(v6 - 1); /*0x75714d*/
      v6 += 2; /*0x757151*/
      *(v6 - 1) = *((_WORD *)a4 + 21) + v7; /*0x757158*/
      ++v5; /*0x757164*/
      *v6 = *(v6 - 2) + *((_WORD *)a4 + 22); /*0x757165*/
    }
    while ( v5 < *((unsigned __int8 *)a4 + 50) ); /*0x75716f*/
  }
  LOWORD(a3) = *((_WORD *)a4 + 12); /*0x757175*/
  LOWORD(a2) = *((_WORD *)a4 + 13); /*0x757179*/
  LOWORD(a4) = *((_WORD *)a4 + 14); /*0x75717d*/
  result = *((_BYTE *)v4 + 49); /*0x757182*/
  v26 = 0; /*0x757185*/
  if ( result ) /*0x75718f*/
  {
    do /*0x757347*/
    {
      HIWORD(v9) = HIWORD(a4); /*0x757196*/
      v32 = (__int16)a4; /*0x75719d*/
      v33 = v4[3]; /*0x7571a6*/
      v30 = a3; /*0x7571aa*/
      v31 = a2; /*0x7571ae*/
      v25 = 0; /*0x7571b2*/
      if ( *((_BYTE *)v4 + 48) ) /*0x7571a1*/
      {
        do /*0x757306*/
        {
          v29 = (__int16)a4; /*0x7571c7*/
          v10 = (int *)*v4; /*0x7571cb*/
          v27 = a3; /*0x7571cd*/
          v28 = a2; /*0x7571d1*/
          v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7571d5*/
          if ( v11 != (int *)-1 ) /*0x7571db*/
          {
            v12 = (char *)v11 + v4[2]; /*0x7571e4*/
            v11 = (int *)*((unsigned __int8 *)v4 + 50); /*0x7571e8*/
            v22 = v11; /*0x7571ed*/
            if ( *((_BYTE *)v4 + 50) ) /*0x7571e8*/
            {
              do /*0x7572c6*/
              {
                LOBYTE(v10) = *v12; /*0x7571f7*/
                v13 = v12 + 1; /*0x7571f9*/
                v14 = (unsigned __int8)v10; /*0x7571fe*/
                LOWORD(v10) = *((_WORD *)v4 + 23) * (unsigned __int8)v10; /*0x757206*/
                LOWORD(a1) = g_VoxelOffsetTable[v14]; /*0x757210*/
                a3 += (int)a1; /*0x757218*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v14]); /*0x75721a*/
                a2 += (int)a1; /*0x757222*/
                a1 = (int *)((char *)a4 + (_DWORD)v10); /*0x757228*/
                v10 = (int *)((char *)v22 - v14); /*0x75722e*/
                v15 = *v13; /*0x757232*/
                v16 = (char *)(v13 + 1); /*0x757234*/
                a4 = a1; /*0x757237*/
                v22 = v10; /*0x75723b*/
                if ( v15 ) /*0x75723f*/
                {
                  v24 = v15; /*0x757243*/
                  v22 = (int *)((char *)v10 - v15); /*0x757247*/
                  do /*0x7572bd*/
                  {
                    v23 = *v16; /*0x75724f*/
                    v17 = BYTE1(a3); /*0x757260*/
                    v18 = v17 | a2 & 0xFF00; /*0x757263*/
                    v16 += 2; /*0x757276*/
                    if ( (unsigned __int16)((unsigned __int16)a4 >> 8) > (unsigned __int8)byte_B1D5E0[v18] ) /*0x75727c*/
                    {
                      byte_B1D5E0[v18] = BYTE1(a4); /*0x757282*/
                      g_VoxelRenderBuffer[v18] = v23; /*0x757288*/
                      g_VoxelDepthBuffer[v18] = v23; /*0x75728e*/
                      byte_B1D5E1[v18] = BYTE1(a4); /*0x757294*/
                    }
                    LOWORD(v18) = *((_WORD *)v4 + 21); /*0x75729a*/
                    LOWORD(v17) = *((_WORD *)v4 + 22); /*0x75729e*/
                    a3 += v18; /*0x7572a2*/
                    LOWORD(v18) = *((_WORD *)v4 + 23); /*0x7572a4*/
                    a2 += v17; /*0x7572a8*/
                    v10 = (int *)((char *)a4 + v18); /*0x7572ae*/
                    v19 = v24 == 1; /*0x7572b4*/
                    a4 = (int *)((char *)a4 + v18); /*0x7572b5*/
                    --v24; /*0x7572b9*/
                  }
                  while ( !v19 ); /*0x7572bd*/
                }
                HIWORD(v11) = HIWORD(v22); /*0x7572bf*/
                v12 = v16 + 1; /*0x7572c3*/
              }
              while ( v22 ); /*0x7572c6*/
            }
          }
          LOWORD(v11) = v29 + *((_WORD *)v4 + 17); /*0x7572d3*/
          LOWORD(a3) = v27 + *((_WORD *)v4 + 15); /*0x7572e0*/
          LOWORD(a2) = v28 + *((_WORD *)v4 + 16); /*0x7572e5*/
          a4 = v11; /*0x7572ea*/
          v20 = *((unsigned __int8 *)v4 + 48); /*0x7572f5*/
          v4[3] += v4[4]; /*0x7572f8*/
          v9 = (int *)++v25; /*0x7572ff*/
        }
        while ( v25 < v20 ); /*0x757306*/
      }
      LOWORD(v9) = v32 + *((_WORD *)v4 + 20); /*0x757314*/
      LOWORD(a3) = v30 + *((_WORD *)v4 + 18); /*0x757321*/
      LOWORD(a2) = v31 + *((_WORD *)v4 + 19); /*0x757326*/
      a4 = v9; /*0x75732b*/
      v21 = *((unsigned __int8 *)v4 + 49); /*0x757336*/
      v4[3] = v33 + v4[5]; /*0x757339*/
      result = ++v26; /*0x757340*/
    }
    while ( v26 < v21 ); /*0x757347*/
  }
  return result; /*0x75734e*/
}



// ==== 0x00757360  ObjectClass::ProcessVoxelDepthSamples  this=ObjectClass  sig=csp ====
char __usercall ProcessVoxelDepthSamples@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // eax
  unsigned __int8 *v14; // esi
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // [esp+10h] [ebp-30h]
  char v20; // [esp+14h] [ebp-2Ch]
  unsigned __int8 v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-24h]
  unsigned int v24; // [esp+20h] [ebp-20h]
  __int16 v25; // [esp+24h] [ebp-1Ch]
  __int16 v26; // [esp+28h] [ebp-18h]
  __int16 v27; // [esp+2Ch] [ebp-14h]
  __int16 v28; // [esp+30h] [ebp-10h]
  __int16 v29; // [esp+34h] [ebp-Ch]
  __int16 v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v4 = a4; /*0x757360*/
  g_VoxelOffsetTable[0] = 0; /*0x757369*/
  v5 = 1; /*0x757380*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x757385*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757387*/
    do /*0x7573ae*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x757392*/
      v6 += 2; /*0x757396*/
      *(v6 - 1) = v7; /*0x757399*/
      ++v5; /*0x7573a5*/
      *v6 = *(_WORD *)(a4 + 44) + *(v6 - 2); /*0x7573a6*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x7573a9*/
    }
    while ( v5 < a1 ); /*0x7573ae*/
  }
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x7573b4*/
  LOWORD(a2) = *(_WORD *)(a4 + 26); /*0x7573b8*/
  LOWORD(a4) = *(_WORD *)(a4 + 28); /*0x7573bc*/
  result = *(_BYTE *)(v4 + 49); /*0x7573c1*/
  v24 = 0; /*0x7573c4*/
  if ( result ) /*0x7573ca*/
  {
    do /*0x757585*/
    {
      v28 = a3; /*0x7573d7*/
      v31 = *(_DWORD *)(v4 + 12); /*0x7573db*/
      HIWORD(v9) = HIWORD(a4); /*0x7573df*/
      v30 = a4; /*0x7573e3*/
      v29 = a2; /*0x7573ec*/
      v23 = 0; /*0x7573f0*/
      if ( *(_BYTE *)(v4 + 48) ) /*0x7573e7*/
      {
        do /*0x757544*/
        {
          v27 = a4; /*0x757401*/
          v10 = *(_DWORD *)(v4 + 4); /*0x757405*/
          v25 = a3; /*0x757408*/
          v26 = a2; /*0x75740c*/
          v11 = *(_DWORD *)(v10 + 4 * *(_DWORD *)(v4 + 12)); /*0x757410*/
          if ( v11 != -1 ) /*0x757416*/
          {
            v12 = (unsigned __int8 *)(v11 + *(_DWORD *)(v4 + 8)); /*0x75741f*/
            v11 = *(unsigned __int8 *)(v4 + 50); /*0x757423*/
            v19 = v11; /*0x757428*/
            if ( *(_BYTE *)(v4 + 50) ) /*0x757423*/
            {
              do /*0x757504*/
              {
                v13 = *v12; /*0x757434*/
                v14 = v12 - 1; /*0x757436*/
                if ( v13 ) /*0x757439*/
                {
                  v22 = v13; /*0x757443*/
                  v19 -= v13; /*0x757449*/
                  do /*0x7574bf*/
                  {
                    v20 = *(v14 - 1); /*0x757453*/
                    v14 -= 2; /*0x757464*/
                    v15 = BYTE1(a3); /*0x757465*/
                    v16 = v15 | a2 & 0xFF00; /*0x757468*/
                    if ( (unsigned __int16)BYTE1(a4) > (unsigned __int8)byte_B1D5E0[v16] ) /*0x75747e*/
                    {
                      byte_B1D5E0[v16] = BYTE1(a4); /*0x757484*/
                      g_VoxelRenderBuffer[v16] = v20; /*0x75748a*/
                      g_VoxelDepthBuffer[v16] = v20; /*0x757490*/
                      byte_B1D5E1[v16] = BYTE1(a4); /*0x757496*/
                    }
                    LOWORD(v16) = *(_WORD *)(v4 + 42); /*0x75749c*/
                    LOWORD(v15) = *(_WORD *)(v4 + 44); /*0x7574a0*/
                    a3 += v16; /*0x7574a4*/
                    LOWORD(v16) = *(_WORD *)(v4 + 46); /*0x7574a6*/
                    a2 += v15; /*0x7574aa*/
                    v10 = v16 + a4; /*0x7574b0*/
                    v17 = v22 == 1; /*0x7574b6*/
                    a4 += v16; /*0x7574b7*/
                    --v22; /*0x7574bb*/
                  }
                  while ( !v17 ); /*0x7574bf*/
                }
                v21 = *(v14 - 1); /*0x7574c5*/
                v12 = v14 - 2; /*0x7574c9*/
                LOWORD(v10) = *(_WORD *)(v4 + 46) * v21; /*0x7574d2*/
                v11 = v21; /*0x7574d7*/
                LOWORD(a1) = g_VoxelOffsetTable[v21]; /*0x7574dc*/
                a3 += a1; /*0x7574e4*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v21]); /*0x7574e6*/
                a2 += a1; /*0x7574ee*/
                a1 = v10 + a4; /*0x7574f4*/
                v10 = v19 - v21; /*0x7574fa*/
                v17 = v19 == v21; /*0x7574fa*/
                a4 = a1; /*0x7574fc*/
                v19 = v10; /*0x757500*/
              }
              while ( !v17 ); /*0x757504*/
            }
          }
          LOWORD(v11) = v27 + *(_WORD *)(v4 + 34); /*0x757511*/
          LOWORD(a3) = v25 + *(_WORD *)(v4 + 30); /*0x75751e*/
          LOWORD(a2) = v26 + *(_WORD *)(v4 + 32); /*0x757523*/
          a4 = v11; /*0x757528*/
          *(_DWORD *)(v4 + 12) += *(_DWORD *)(v4 + 16); /*0x757535*/
          v9 = v23 + 1; /*0x75753d*/
          v23 = v9; /*0x757540*/
        }
        while ( v9 < *(unsigned __int8 *)(v4 + 48) ); /*0x757544*/
      }
      LOWORD(v9) = v30 + *(_WORD *)(v4 + 40); /*0x757552*/
      LOWORD(a3) = v28 + *(_WORD *)(v4 + 36); /*0x75755f*/
      LOWORD(a2) = v29 + *(_WORD *)(v4 + 38); /*0x757564*/
      a4 = v9; /*0x757569*/
      v18 = *(unsigned __int8 *)(v4 + 49); /*0x757574*/
      *(_DWORD *)(v4 + 12) = v31 + *(_DWORD *)(v4 + 20); /*0x757577*/
      result = ++v24; /*0x75757e*/
    }
    while ( v24 < v18 ); /*0x757585*/
  }
  return result; /*0x75758b*/
}



// ==== 0x007575A0  VoxelRenderer::DrawSection  this=VoxelRenderer  sig=csp ====
char __usercall VoxelRenderer::DrawSection@<al>(VoxelRenderer *this, int a2@<ebp>, int a3@<edi>, int a4)
{
  int v4; // ebx
  unsigned int v5; // ecx
  _WORD *v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned __int8 *v12; // eax
  unsigned __int8 v13; // cl
  unsigned __int8 *v14; // eax
  int v15; // ecx
  unsigned __int8 *v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // ecx
  int v21; // [esp+10h] [ebp-24h]
  unsigned int i; // [esp+14h] [ebp-20h]
  unsigned int v23; // [esp+18h] [ebp-1Ch]
  int v24; // [esp+1Ch] [ebp-18h]
  __int16 v25; // [esp+20h] [ebp-14h]
  __int16 v26; // [esp+24h] [ebp-10h]
  __int16 v27; // [esp+28h] [ebp-Ch]
  __int16 v28; // [esp+2Ch] [ebp-8h]
  int VoxelRenderer_field_0x0C; // [esp+30h] [ebp-4h]
  unsigned __int8 thisa; // [esp+38h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x7575a3*/
  v5 = 1; /*0x7575b5*/
  if ( *((_BYTE *)this + 50) > 1u ) /*0x7575c4*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x7575c6*/
    do /*0x7575ed*/
    {
      v8 = *(v7 - 1); /*0x7575cb*/
      v7 += 2; /*0x7575cf*/
      *(v7 - 1) = *((_WORD *)this + 21) + v8; /*0x7575d6*/
      ++v5; /*0x7575e2*/
      *v7 = *((_WORD *)this + 22) + *(v7 - 2); /*0x7575e3*/
    }
    while ( v5 < *((unsigned __int8 *)this + 50) ); /*0x7575ed*/
  }
  LOBYTE(v9) = *((_BYTE *)this + 49); /*0x7575ef*/
  LOWORD(a3) = this->VoxelRenderer_field_0x18; /*0x7575f2*/
  LOWORD(a2) = HIWORD(this->VoxelRenderer_field_0x18); /*0x7575f6*/
  v23 = 0; /*0x7575fa*/
  if ( (_BYTE)v9 ) /*0x757604*/
  {
    do /*0x75777d*/
    {
      v27 = a3; /*0x75760e*/
      VoxelRenderer_field_0x0C = this->VoxelRenderer_field_0x0C; /*0x757612*/
      v28 = a2; /*0x75761b*/
      for ( i = 0; i < *((unsigned __int8 *)this + 48); ++i ) /*0x757616*/
      {
        v25 = a3; /*0x757632*/
        v26 = a2; /*0x757636*/
        v10 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * this->VoxelRenderer_field_0x0C); /*0x75763a*/
        if ( v10 != -1 ) /*0x757640*/
        {
          v11 = *((unsigned __int8 *)this + 50); /*0x75764b*/
          v12 = (unsigned __int8 *)(v10 + this->VoxelRenderer_field_0x08); /*0x75764e*/
          if ( *((_BYTE *)this + 50) ) /*0x75764b*/
          {
            do /*0x757716*/
            {
              v13 = *v12; /*0x757658*/
              v14 = v12 + 1; /*0x75765a*/
              v11 -= v13; /*0x757669*/
              LOWORD(v4) = g_VoxelOffsetTable[v13]; /*0x75766b*/
              a3 += v4; /*0x757673*/
              LOWORD(v4) = HIWORD(g_VoxelOffsetTable[v13]); /*0x757675*/
              a2 += v4; /*0x75767f*/
              v15 = *v14; /*0x757681*/
              v16 = v14 + 1; /*0x757683*/
              if ( v15 ) /*0x757686*/
              {
                v21 = v15; /*0x75768e*/
                v24 = v11 - v15; /*0x757692*/
                do /*0x75770d*/
                {
                  thisa = v16[1]; /*0x75769c*/
                  v4 = *v16; /*0x7576b2*/
                  v16 += 2; /*0x7576b8*/
                  v17 = BYTE1(a3) | a2 & 0xFF00; /*0x7576d6*/
                  v18 = (unsigned __int8)g_VoxelShadeTable[thisa] << 8; /*0x7576e2*/
                  LOBYTE(v18) = g_VoxelColorPalette[v18 + v4]; /*0x7576e5*/
                  g_VoxelRenderBuffer[v17] = v18; /*0x7576ec*/
                  g_VoxelDepthBuffer[v17] = v18; /*0x7576f2*/
                  LOWORD(v17) = *((_WORD *)this + 21); /*0x7576f8*/
                  LOWORD(v18) = *((_WORD *)this + 22); /*0x7576fc*/
                  a3 += v17; /*0x757700*/
                  a2 += v18; /*0x757706*/
                  --v21; /*0x757709*/
                }
                while ( v21 ); /*0x75770d*/
                v11 = v24; /*0x75770f*/
              }
              v12 = v16 + 1; /*0x757713*/
            }
            while ( v11 ); /*0x757716*/
          }
        }
        LOWORD(a3) = v25 + *((_WORD *)this + 15); /*0x75772a*/
        LOWORD(a2) = v26 + this->u32_10; /*0x75772f*/
        this->VoxelRenderer_field_0x0C += this->VoxelRenderer_field_0x10; /*0x75773a*/
      }
      LOWORD(a3) = v27 + *((_WORD *)this + 18); /*0x75775e*/
      LOWORD(a2) = v28 + *((_WORD *)this + 19); /*0x757763*/
      v9 = v23 + 1; /*0x757770*/
      v19 = *((unsigned __int8 *)this + 49); /*0x757771*/
      this->VoxelRenderer_field_0x0C = VoxelRenderer_field_0x0C + this->VoxelRenderer_field_0x14; /*0x757774*/
      v23 = v9; /*0x757779*/
    }
    while ( v9 < v19 ); /*0x75777d*/
  }
  return v9; /*0x757784*/
}



// ==== 0x00757790  VoxelRenderer::DrawSectionLines  this=VoxelRenderer  sig=csp ====
char __usercall VoxelRenderer::DrawSectionLines@<al>(VoxelRenderer *this, int a2@<ebp>, int a3@<edi>, int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // ecx
  _WORD *v7; // eax
  __int16 v8; // di
  char result; // al
  int v10; // eax
  int v11; // edx
  unsigned __int8 *v12; // ecx
  int v13; // eax
  unsigned __int8 *v14; // ecx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned __int8 v19; // [esp+10h] [ebp-28h]
  int v20; // [esp+14h] [ebp-24h]
  unsigned int v21; // [esp+18h] [ebp-20h]
  unsigned int v22; // [esp+1Ch] [ebp-1Ch]
  int v23; // [esp+20h] [ebp-18h]
  __int16 v24; // [esp+24h] [ebp-14h]
  __int16 v25; // [esp+28h] [ebp-10h]
  __int16 v26; // [esp+2Ch] [ebp-Ch]
  __int16 v27; // [esp+30h] [ebp-8h]
  int VoxelRenderer_field_0x0C; // [esp+34h] [ebp-4h]
  unsigned __int8 thisa; // [esp+3Ch] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757795*/
  v6 = 1; /*0x7577aa*/
  if ( *((_BYTE *)this + 50) > 1u ) /*0x7577b3*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x7577b5*/
    do /*0x7577dc*/
    {
      v8 = *((_WORD *)this + 21) + *(v7 - 1); /*0x7577c0*/
      v7 += 2; /*0x7577c4*/
      *(v7 - 1) = v8; /*0x7577c7*/
      ++v6; /*0x7577d3*/
      *v7 = *((_WORD *)this + 22) + *(v7 - 2); /*0x7577d4*/
      v4 = *((unsigned __int8 *)this + 50); /*0x7577d7*/
    }
    while ( v6 < v4 ); /*0x7577dc*/
  }
  result = *((_BYTE *)this + 49); /*0x7577de*/
  LOWORD(a3) = this->VoxelRenderer_field_0x18; /*0x7577e1*/
  LOWORD(a2) = HIWORD(this->VoxelRenderer_field_0x18); /*0x7577e5*/
  v22 = 0; /*0x7577eb*/
  if ( result ) /*0x7577ef*/
  {
    do /*0x757965*/
    {
      v26 = a3; /*0x7577fc*/
      VoxelRenderer_field_0x0C = this->VoxelRenderer_field_0x0C; /*0x757800*/
      v27 = a2; /*0x757809*/
      v21 = 0; /*0x75780d*/
      if ( this->q00C ) /*0x757804*/
      {
        do /*0x757931*/
        {
          v24 = a3; /*0x75781d*/
          v25 = a2; /*0x757821*/
          v10 = *(_DWORD *)(this->VoxelRenderer_field_0x04 + 4 * this->VoxelRenderer_field_0x0C); /*0x757825*/
          if ( v10 != -1 ) /*0x75782b*/
          {
            v11 = *((unsigned __int8 *)this + 50); /*0x757836*/
            v12 = (unsigned __int8 *)(v10 + this->VoxelRenderer_field_0x08); /*0x757839*/
            if ( *((_BYTE *)this + 50) ) /*0x757836*/
            {
              do /*0x7578fe*/
              {
                v13 = *v12; /*0x757845*/
                v14 = v12 - 1; /*0x757847*/
                if ( v13 ) /*0x75784a*/
                {
                  v20 = v13; /*0x757852*/
                  v23 = v11 - v13; /*0x757856*/
                  do /*0x7578d0*/
                  {
                    thisa = *v14; /*0x75785d*/
                    v14 -= 2; /*0x75786b*/
                    v4 = v14[1]; /*0x757890*/
                    v15 = BYTE1(a3) | a2 & 0xFF00; /*0x757899*/
                    v16 = (unsigned __int8)g_VoxelShadeTable[thisa] << 8; /*0x7578a5*/
                    LOBYTE(v16) = g_VoxelColorPalette[v16 + v4]; /*0x7578a8*/
                    g_VoxelRenderBuffer[v15] = v16; /*0x7578af*/
                    g_VoxelDepthBuffer[v15] = v16; /*0x7578b5*/
                    LOWORD(v15) = *((_WORD *)this + 21); /*0x7578bb*/
                    LOWORD(v16) = *((_WORD *)this + 22); /*0x7578bf*/
                    a3 += v15; /*0x7578c3*/
                    a2 += v16; /*0x7578c9*/
                    --v20; /*0x7578cc*/
                  }
                  while ( v20 ); /*0x7578d0*/
                  v11 = v23; /*0x7578d2*/
                }
                v19 = *(v14 - 1); /*0x7578da*/
                v12 = v14 - 2; /*0x7578de*/
                LOWORD(v4) = g_VoxelOffsetTable[v19]; /*0x7578e8*/
                a3 += v4; /*0x7578f0*/
                LOWORD(v4) = HIWORD(g_VoxelOffsetTable[v19]); /*0x7578f2*/
                a2 += v4; /*0x7578fa*/
                v11 -= v19; /*0x7578fc*/
              }
              while ( v11 ); /*0x7578fe*/
            }
          }
          LOWORD(a3) = v24 + *((_WORD *)this + 15); /*0x757916*/
          LOWORD(a2) = v25 + this->u32_10; /*0x75791b*/
          v17 = *((unsigned __int8 *)this + 48); /*0x757922*/
          v4 = this->VoxelRenderer_field_0x10 + this->VoxelRenderer_field_0x0C; /*0x757925*/
          this->VoxelRenderer_field_0x0C = v4; /*0x757928*/
          ++v21; /*0x75792d*/
        }
        while ( v21 < v17 ); /*0x757931*/
      }
      LOWORD(a3) = v26 + *((_WORD *)this + 18); /*0x757946*/
      LOWORD(a2) = v27 + *((_WORD *)this + 19); /*0x75794b*/
      v18 = *((unsigned __int8 *)this + 49); /*0x757954*/
      this->VoxelRenderer_field_0x0C = VoxelRenderer_field_0x0C + this->VoxelRenderer_field_0x14; /*0x757957*/
      result = ++v22; /*0x75795e*/
    }
    while ( v22 < v18 ); /*0x757965*/
  }
  return result; /*0x75796b*/
}



// ==== 0x00757980  ObjectClass::ProcessVoxelColorScanline  this=ObjectClass  sig=csp ====
char __usercall ProcessVoxelColorScanline@<al>(unsigned int a1@<edx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
  unsigned int v6; // esi
  _WORD *v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // esi
  unsigned __int8 v12; // al
  unsigned __int8 *v13; // esi
  int v14; // eax
  unsigned __int8 *v15; // esi
  int v16; // eax
  unsigned __int16 v17; // dx
  unsigned __int8 v18; // bl
  unsigned __int8 *v19; // esi
  unsigned __int8 v20; // bp
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int8 v24; // [esp+10h] [ebp-34h]
  unsigned int v25; // [esp+14h] [ebp-30h]
  int v26; // [esp+18h] [ebp-2Ch]
  int v27; // [esp+1Ch] [ebp-28h]
  unsigned int v28; // [esp+20h] [ebp-24h]
  unsigned int v29; // [esp+24h] [ebp-20h]
  __int16 v30; // [esp+28h] [ebp-1Ch]
  __int16 v31; // [esp+2Ch] [ebp-18h]
  __int16 v32; // [esp+30h] [ebp-14h]
  __int16 v33; // [esp+34h] [ebp-10h]
  __int16 v34; // [esp+38h] [ebp-Ch]
  __int16 v35; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]
  int v37; // [esp+48h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757987*/
  v6 = 1; /*0x7579a1*/
  if ( *(_BYTE *)(a5 + 50) > 1u ) /*0x7579a6*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x7579a8*/
    do /*0x7579cf*/
    {
      v8 = *(v7 - 1); /*0x7579ad*/
      v7 += 2; /*0x7579b1*/
      *(v7 - 1) = *(_WORD *)(a5 + 42) + v8; /*0x7579b8*/
      ++v6; /*0x7579c4*/
      *v7 = *(_WORD *)(a5 + 44) + *(v7 - 2); /*0x7579c5*/
      a1 = *(unsigned __int8 *)(a5 + 50); /*0x7579ca*/
    }
    while ( v6 < a1 ); /*0x7579cf*/
  }
  LOBYTE(v9) = *(_BYTE *)(a5 + 49); /*0x7579d1*/
  LOWORD(a4) = *(_WORD *)(a5 + 24); /*0x7579d4*/
  LOWORD(a3) = *(_WORD *)(a5 + 26); /*0x7579d8*/
  LOWORD(a1) = *(_WORD *)(a5 + 28); /*0x7579dc*/
  v29 = 0; /*0x7579e2*/
  if ( (_BYTE)v9 ) /*0x7579ea*/
  {
    do /*0x757bd7*/
    {
      v33 = a4; /*0x7579f4*/
      v36 = *(_DWORD *)(a5 + 12); /*0x7579f8*/
      v34 = a3; /*0x757a01*/
      v35 = a1; /*0x757a05*/
      v28 = 0; /*0x757a09*/
      if ( *(_BYTE *)(a5 + 48) ) /*0x7579fc*/
      {
        do /*0x757b9a*/
        {
          v30 = a4; /*0x757a1c*/
          v31 = a3; /*0x757a20*/
          v10 = *(_DWORD *)(*(_DWORD *)a5 + 4 * *(_DWORD *)(a5 + 12)); /*0x757a24*/
          v32 = a1; /*0x757a27*/
          if ( v10 != -1 ) /*0x757a2e*/
          {
            v11 = (unsigned __int8 *)(v10 + *(_DWORD *)(a5 + 8)); /*0x757a37*/
            v37 = *(unsigned __int8 *)(a5 + 50); /*0x757a40*/
            if ( *(_BYTE *)(a5 + 50) ) /*0x757a3b*/
            {
              do /*0x757b5e*/
              {
                v12 = *v11; /*0x757a4a*/
                v13 = v11 + 1; /*0x757a4c*/
                LOWORD(a2) = g_VoxelOffsetTable[v12]; /*0x757a5a*/
                a4 += a2; /*0x757a62*/
                LOWORD(a2) = HIWORD(g_VoxelOffsetTable[v12]); /*0x757a64*/
                a3 += a2; /*0x757a6c*/
                LOWORD(a2) = *(_WORD *)(a5 + 46) * v12; /*0x757a74*/
                a1 += a2; /*0x757a79*/
                a2 = v37 - v12; /*0x757a7f*/
                v14 = *v13; /*0x757a83*/
                v15 = v13 + 1; /*0x757a85*/
                v26 = a3; /*0x757a88*/
                v25 = a1; /*0x757a8c*/
                v37 = a2; /*0x757a90*/
                if ( v14 ) /*0x757a94*/
                {
                  v27 = v14; /*0x757a9c*/
                  v37 = a2 - v14; /*0x757aa0*/
                  do /*0x757b51*/
                  {
                    a2 = BYTE1(a4); /*0x757ab3*/
                    v16 = a2 | a3 & 0xFF00; /*0x757ab6*/
                    v17 = BYTE1(a1); /*0x757ab8*/
                    if ( v17 <= (unsigned __int8)byte_B1D5E0[v16] ) /*0x757ac7*/
                    {
                      v15 += 2; /*0x757b27*/
                    }
                    else
                    {
                      v18 = *v15; /*0x757ac9*/
                      v19 = v15 + 1; /*0x757acb*/
                      v20 = v18; /*0x757ad2*/
                      v24 = *v19; /*0x757ad6*/
                      v15 = v19 + 1; /*0x757ada*/
                      byte_B1D5E0[v16] = v17; /*0x757adf*/
                      byte_B1D5E1[v16] = v17; /*0x757aeb*/
                      a2 = (unsigned __int8)g_VoxelShadeTable[v24] << 8; /*0x757b05*/
                      LOBYTE(a2) = g_VoxelColorPalette[a2 + v20]; /*0x757b0e*/
                      a3 = v26; /*0x757b15*/
                      g_VoxelRenderBuffer[v16] = a2; /*0x757b19*/
                      g_VoxelDepthBuffer[v16] = a2; /*0x757b1f*/
                    }
                    LOWORD(v16) = *(_WORD *)(a5 + 42); /*0x757b2a*/
                    a4 += v16; /*0x757b32*/
                    LOWORD(v16) = *(_WORD *)(a5 + 44); /*0x757b34*/
                    a3 += v16; /*0x757b38*/
                    LOWORD(v16) = *(_WORD *)(a5 + 46); /*0x757b3a*/
                    a1 = v16 + v25; /*0x757b3e*/
                    v21 = v27 == 1; /*0x757b44*/
                    v26 = a3; /*0x757b45*/
                    v25 += v16; /*0x757b49*/
                    --v27; /*0x757b4d*/
                  }
                  while ( !v21 ); /*0x757b51*/
                }
                v11 = v15 + 1; /*0x757b5b*/
              }
              while ( v37 ); /*0x757b5e*/
            }
          }
          LOWORD(a4) = v30 + *(_WORD *)(a5 + 30); /*0x757b76*/
          LOWORD(a3) = v31 + *(_WORD *)(a5 + 32); /*0x757b7b*/
          LOWORD(a1) = v32 + *(_WORD *)(a5 + 34); /*0x757b80*/
          v22 = *(unsigned __int8 *)(a5 + 48); /*0x757b89*/
          *(_DWORD *)(a5 + 12) += *(_DWORD *)(a5 + 16); /*0x757b8c*/
          ++v28; /*0x757b96*/
        }
        while ( v28 < v22 ); /*0x757b9a*/
      }
      LOWORD(a4) = v33 + *(_WORD *)(a5 + 36); /*0x757bb3*/
      LOWORD(a3) = v34 + *(_WORD *)(a5 + 38); /*0x757bb8*/
      LOWORD(a1) = v35 + *(_WORD *)(a5 + 40); /*0x757bbd*/
      *(_DWORD *)(a5 + 12) = v36 + *(_DWORD *)(a5 + 20); /*0x757bc8*/
      v9 = *(unsigned __int8 *)(a5 + 49); /*0x757bcd*/
      ++v29; /*0x757bd3*/
    }
    while ( v29 < v9 ); /*0x757bd7*/
  }
  return v9; /*0x757bde*/
}



// ==== 0x00757BF0  ObjectClass::VoxelDrawScanline  this=ObjectClass  sig=csp ====
char __usercall VoxelDrawScanline@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4)
{
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned __int8 *v11; // esi
  int v12; // eax
  unsigned __int8 *v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  bool v17; // zf
  unsigned int v18; // edx
  bool v19; // cf
  unsigned int v21; // [esp+10h] [ebp-38h]
  unsigned __int8 v22; // [esp+14h] [ebp-34h]
  int v23; // [esp+18h] [ebp-30h]
  unsigned __int8 v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h]
  unsigned int v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  __int16 v28; // [esp+2Ch] [ebp-1Ch]
  __int16 v29; // [esp+30h] [ebp-18h]
  __int16 v30; // [esp+34h] [ebp-14h]
  __int16 v31; // [esp+38h] [ebp-10h]
  __int16 v32; // [esp+3Ch] [ebp-Ch]
  __int16 v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]
  int v35; // [esp+4Ch] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757bf9*/
  v5 = 1; /*0x757c10*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x757c15*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757c17*/
    do /*0x757c3e*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x757c22*/
      v6 += 2; /*0x757c26*/
      *(v6 - 1) = v7; /*0x757c29*/
      ++v5; /*0x757c35*/
      *v6 = *(v6 - 2) + *(_WORD *)(a4 + 44); /*0x757c36*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x757c39*/
    }
    while ( v5 < a1 ); /*0x757c3e*/
  }
  LOBYTE(v8) = *(_BYTE *)(a4 + 49); /*0x757c40*/
  LOWORD(a1) = *(_WORD *)(a4 + 26); /*0x757c43*/
  LOWORD(a2) = *(_WORD *)(a4 + 28); /*0x757c47*/
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x757c4b*/
  v21 = a1; /*0x757c51*/
  v35 = a2; /*0x757c55*/
  v27 = 0; /*0x757c59*/
  if ( (_BYTE)v8 ) /*0x757c5d*/
  {
    do /*0x757e5d*/
    {
      v31 = a3; /*0x757c6a*/
      v34 = *(_DWORD *)(a4 + 12); /*0x757c6e*/
      v32 = a1; /*0x757c77*/
      v33 = a2; /*0x757c7b*/
      v26 = 0; /*0x757c7f*/
      if ( *(_BYTE *)(a4 + 48) ) /*0x757c72*/
      {
        do /*0x757e18*/
        {
          v9 = *(_DWORD *)(a4 + 12); /*0x757c89*/
          v28 = a3; /*0x757c8f*/
          v29 = a1; /*0x757c93*/
          v10 = *(_DWORD *)(*(_DWORD *)(a4 + 4) + 4 * v9); /*0x757c97*/
          v30 = a2; /*0x757c9a*/
          if ( v10 != -1 ) /*0x757ca1*/
          {
            v11 = (unsigned __int8 *)(v10 + *(_DWORD *)(a4 + 8)); /*0x757caa*/
            v23 = *(unsigned __int8 *)(a4 + 50); /*0x757cb3*/
            if ( *(_BYTE *)(a4 + 50) ) /*0x757cae*/
            {
              do /*0x757dd4*/
              {
                v12 = *v11; /*0x757cbf*/
                v13 = v11 - 1; /*0x757cc1*/
                if ( v12 ) /*0x757cc4*/
                {
                  v25 = v12; /*0x757cce*/
                  v23 -= v12; /*0x757cd4*/
                  do /*0x757d89*/
                  {
                    v9 = BYTE1(a3); /*0x757ce7*/
                    v14 = v9 | a1 & 0xFF00; /*0x757cea*/
                    LOWORD(v9) = BYTE1(a2); /*0x757cef*/
                    if ( (unsigned __int16)BYTE1(a2) <= (unsigned __int8)byte_B1D5E0[v14] ) /*0x757cfe*/
                    {
                      v13 -= 2; /*0x757d5f*/
                    }
                    else
                    {
                      v24 = *v13; /*0x757d03*/
                      v13 -= 2; /*0x757d11*/
                      v15 = (unsigned __int8)g_VoxelShadeTable[v24] << 8; /*0x757d31*/
                      v16 = v13[1]; /*0x757d34*/
                      byte_B1D5E0[v14] = v9; /*0x757d3a*/
                      byte_B1D5E1[v14] = v9; /*0x757d40*/
                      LOBYTE(v15) = g_VoxelColorPalette[v15 + v16]; /*0x757d46*/
                      g_VoxelRenderBuffer[v14] = v15; /*0x757d4d*/
                      g_VoxelDepthBuffer[v14] = v15; /*0x757d53*/
                      a1 = v21; /*0x757d59*/
                    }
                    LOWORD(v14) = *(_WORD *)(a4 + 42); /*0x757d62*/
                    LOWORD(v9) = *(_WORD *)(a4 + 44); /*0x757d6a*/
                    a3 += v14; /*0x757d6e*/
                    LOWORD(v14) = *(_WORD *)(a4 + 46); /*0x757d70*/
                    a1 += v9; /*0x757d74*/
                    a2 = v14 + v35; /*0x757d76*/
                    v17 = v25 == 1; /*0x757d7c*/
                    v21 = a1; /*0x757d7d*/
                    v35 += v14; /*0x757d81*/
                    --v25; /*0x757d85*/
                  }
                  while ( !v17 ); /*0x757d89*/
                }
                v22 = *(v13 - 1); /*0x757d93*/
                v11 = v13 - 2; /*0x757d97*/
                LOWORD(v9) = g_VoxelOffsetTable[v22]; /*0x757da1*/
                a3 += v9; /*0x757da9*/
                LOWORD(v9) = HIWORD(g_VoxelOffsetTable[v22]); /*0x757dab*/
                a1 += v9; /*0x757db3*/
                LOWORD(v9) = *(_WORD *)(a4 + 46) * v22; /*0x757dbb*/
                a2 += v9; /*0x757dc0*/
                v9 = v23 - v22; /*0x757dc6*/
                v17 = v23 == v22; /*0x757dc6*/
                v21 = a1; /*0x757dc8*/
                v35 = a2; /*0x757dcc*/
                v23 = v9; /*0x757dd0*/
              }
              while ( !v17 ); /*0x757dd4*/
            }
          }
          LOWORD(a3) = v28 + *(_WORD *)(a4 + 30); /*0x757dec*/
          LOWORD(a1) = v29 + *(_WORD *)(a4 + 32); /*0x757df1*/
          LOWORD(a2) = v30 + *(_WORD *)(a4 + 34); /*0x757df6*/
          v18 = *(unsigned __int8 *)(a4 + 48); /*0x757dff*/
          *(_DWORD *)(a4 + 12) += *(_DWORD *)(a4 + 16); /*0x757e02*/
          v21 = a1; /*0x757e09*/
          v35 = a2; /*0x757e0e*/
          ++v26; /*0x757e14*/
        }
        while ( v26 < v18 ); /*0x757e18*/
      }
      LOWORD(a3) = v31 + *(_WORD *)(a4 + 36); /*0x757e31*/
      LOWORD(a1) = v32 + *(_WORD *)(a4 + 38); /*0x757e36*/
      LOWORD(a2) = v33 + *(_WORD *)(a4 + 40); /*0x757e3b*/
      v8 = v34 + *(_DWORD *)(a4 + 20); /*0x757e40*/
      v21 = a1; /*0x757e4c*/
      v19 = v27 + 1 < (unsigned int)*(unsigned __int8 *)(a4 + 49); /*0x757e50*/
      v35 = a2; /*0x757e52*/
      *(_DWORD *)(a4 + 12) = v8; /*0x757e56*/
      ++v27; /*0x757e59*/
    }
    while ( v19 ); /*0x757e5d*/
  }
  return v8; /*0x757e63*/
}



// ==== 0x00757E70  VoxelRenderer::ProcessVoxelData  this=VoxelRenderer  sig=csp ====
char __usercall VoxelRenderer::ProcessVoxelData@<al>(VoxelRenderer *this, int a2@<ebp>, int a3@<edi>, int a4)
{
  int v4; // ebx
  unsigned int v5; // ecx
  _WORD *v7; // eax
  __int16 v8; // dx
  char result; // al
  int v10; // eax
  int v11; // edx
  unsigned __int8 *v12; // ecx
  unsigned __int8 v13; // al
  unsigned __int8 *v14; // ecx
  int v15; // eax
  _BYTE *v16; // ecx
  int v17; // edx
  int v18; // edi
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // [esp+Ch] [ebp-28h]
  unsigned int v23; // [esp+10h] [ebp-24h]
  unsigned int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+1Ch] [ebp-18h]
  __int16 v26; // [esp+20h] [ebp-14h]
  __int16 v27; // [esp+24h] [ebp-10h]
  __int16 v28; // [esp+28h] [ebp-Ch]
  __int16 v29; // [esp+2Ch] [ebp-8h]
  int VoxelRenderer_field_0x0C; // [esp+30h] [ebp-4h]
  VoxelRenderer *thisa; // [esp+38h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757e73*/
  v5 = 1; /*0x757e85*/
  if ( *((_BYTE *)this + 50) > 1u ) /*0x757e94*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757e96*/
    do /*0x757ebd*/
    {
      v8 = *(v7 - 1); /*0x757e9b*/
      v7 += 2; /*0x757e9f*/
      *(v7 - 1) = *((_WORD *)this + 21) + v8; /*0x757ea6*/
      ++v5; /*0x757eb2*/
      *v7 = *(v7 - 2) + *((_WORD *)this + 22); /*0x757eb3*/
    }
    while ( v5 < *((unsigned __int8 *)this + 50) ); /*0x757ebd*/
  }
  result = *((_BYTE *)this + 49); /*0x757ebf*/
  LOWORD(a2) = this->VoxelRenderer_field_0x18; /*0x757ec2*/
  LOWORD(a3) = HIWORD(this->VoxelRenderer_field_0x18); /*0x757ec6*/
  v24 = 0; /*0x757eca*/
  if ( result ) /*0x757ed4*/
  {
    do /*0x758018*/
    {
      v28 = a2; /*0x757ede*/
      VoxelRenderer_field_0x0C = this->VoxelRenderer_field_0x0C; /*0x757ee2*/
      v29 = a3; /*0x757eeb*/
      v23 = 0; /*0x757eef*/
      if ( this->q00C ) /*0x757ee6*/
      {
        do /*0x757fe4*/
        {
          v26 = a2; /*0x757f02*/
          v27 = a3; /*0x757f06*/
          v10 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * this->VoxelRenderer_field_0x0C); /*0x757f0a*/
          if ( v10 != -1 ) /*0x757f10*/
          {
            v11 = *((unsigned __int8 *)this + 50); /*0x757f1b*/
            v12 = (unsigned __int8 *)(v10 + this->VoxelRenderer_field_0x08); /*0x757f1e*/
            if ( *((_BYTE *)this + 50) ) /*0x757f1b*/
            {
              do /*0x757fb1*/
              {
                v13 = *v12; /*0x757f28*/
                v14 = v12 + 1; /*0x757f2a*/
                v11 -= v13; /*0x757f38*/
                LOWORD(v4) = g_VoxelOffsetTable[v13]; /*0x757f3a*/
                a2 += v4; /*0x757f42*/
                LOWORD(v4) = HIWORD(g_VoxelOffsetTable[v13]); /*0x757f44*/
                a3 += v4; /*0x757f4e*/
                v15 = *v14; /*0x757f50*/
                v16 = v14 + 1; /*0x757f52*/
                thisa = (VoxelRenderer *)a3; /*0x757f55*/
                if ( v15 ) /*0x757f59*/
                {
                  v17 = v11 - v15; /*0x757f5b*/
                  v22 = v15; /*0x757f5d*/
                  v25 = v17; /*0x757f61*/
                  do /*0x757fa8*/
                  {
                    LOBYTE(v17) = *v16; /*0x757f65*/
                    v18 = a3 & 0xFF00; /*0x757f6e*/
                    ++v16; /*0x757f79*/
                    v4 = v18 | BYTE1(a2); /*0x757f7a*/
                    g_VoxelRenderBuffer[v4] = v17; /*0x757f7f*/
                    g_VoxelRenderBuffer[BYTE1(a2) | (v18 + 1)] = v17; /*0x757f85*/
                    LOWORD(v17) = *((_WORD *)this + 21); /*0x757f93*/
                    a3 = (int)&thisa->__pad_0[*((unsigned __int16 *)this + 22)]; /*0x757f97*/
                    a2 += v17; /*0x757f9d*/
                    v19 = v22 == 1; /*0x757f9f*/
                    thisa = (VoxelRenderer *)a3; /*0x757fa0*/
                    --v22; /*0x757fa4*/
                  }
                  while ( !v19 ); /*0x757fa8*/
                  v11 = v25; /*0x757faa*/
                }
                v12 = v16 + 1; /*0x757fae*/
              }
              while ( v11 ); /*0x757fb1*/
            }
          }
          LOWORD(a2) = v26 + *((_WORD *)this + 15); /*0x757fc9*/
          LOWORD(a3) = v27 + this->u32_10; /*0x757fce*/
          v20 = *((unsigned __int8 *)this + 48); /*0x757fd5*/
          v4 = this->VoxelRenderer_field_0x10 + this->VoxelRenderer_field_0x0C; /*0x757fd8*/
          this->VoxelRenderer_field_0x0C = v4; /*0x757fdb*/
          ++v23; /*0x757fe0*/
        }
        while ( v23 < v20 ); /*0x757fe4*/
      }
      LOWORD(a2) = v28 + *((_WORD *)this + 18); /*0x757ff9*/
      LOWORD(a3) = v29 + *((_WORD *)this + 19); /*0x757ffe*/
      v21 = *((unsigned __int8 *)this + 49); /*0x758007*/
      this->VoxelRenderer_field_0x0C = VoxelRenderer_field_0x0C + this->VoxelRenderer_field_0x14; /*0x75800a*/
      result = ++v24; /*0x758011*/
    }
    while ( v24 < v21 ); /*0x758018*/
  }
  return result; /*0x75801f*/
}



// ==== 0x00758030  VoxelRenderer::RenderFrame  this=VoxelRenderer  sig=csp ====
char __usercall sub_758030@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3)
{
  unsigned int v4; // esi
  _WORD *v5; // eax
  __int16 v6; // di
  char result; // al
  int v8; // eax
  int v9; // edx
  unsigned __int8 *v10; // edi
  int v11; // eax
  unsigned __int8 *v12; // edi
  int v13; // edx
  int v14; // esi
  bool v15; // zf
  unsigned int v16; // edx
  unsigned int v17; // edx
  int v18; // [esp+10h] [ebp-28h]
  unsigned int v19; // [esp+14h] [ebp-24h]
  unsigned int v20; // [esp+18h] [ebp-20h]
  int v21; // [esp+1Ch] [ebp-1Ch]
  unsigned __int8 v22; // [esp+20h] [ebp-18h]
  __int16 v23; // [esp+24h] [ebp-14h]
  __int16 v24; // [esp+28h] [ebp-10h]
  __int16 v25; // [esp+2Ch] [ebp-Ch]
  __int16 v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]
  unsigned int v28; // [esp+3Ch] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x758039*/
  v4 = 1; /*0x758050*/
  if ( *(_BYTE *)(a3 + 50) > 1u ) /*0x758055*/
  {
    v5 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758057*/
    do /*0x75807e*/
    {
      v6 = *(_WORD *)(a3 + 42) + *(v5 - 1); /*0x758062*/
      v5 += 2; /*0x758066*/
      *(v5 - 1) = v6; /*0x758069*/
      ++v4; /*0x758075*/
      *v5 = *(_WORD *)(a3 + 44) + *(v5 - 2); /*0x758076*/
      a1 = *(unsigned __int8 *)(a3 + 50); /*0x758079*/
    }
    while ( v4 < a1 ); /*0x75807e*/
  }
  result = *(_BYTE *)(a3 + 49); /*0x758080*/
  LOWORD(v4) = *(_WORD *)(a3 + 26); /*0x758083*/
  LOWORD(a2) = *(_WORD *)(a3 + 24); /*0x758087*/
  v28 = v4; /*0x75808d*/
  v20 = 0; /*0x758091*/
  if ( result ) /*0x758095*/
  {
    do /*0x7581e0*/
    {
      v25 = a2; /*0x7580a2*/
      v27 = *(_DWORD *)(a3 + 12); /*0x7580a6*/
      v26 = v4; /*0x7580af*/
      v19 = 0; /*0x7580b3*/
      if ( *(_BYTE *)(a3 + 48) ) /*0x7580aa*/
      {
        do /*0x7581a8*/
        {
          v23 = a2; /*0x7580c3*/
          v24 = v4; /*0x7580c7*/
          v8 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * *(_DWORD *)(a3 + 12)); /*0x7580cb*/
          if ( v8 != -1 ) /*0x7580d1*/
          {
            v9 = *(unsigned __int8 *)(a3 + 50); /*0x7580dc*/
            v10 = (unsigned __int8 *)(v8 + *(_DWORD *)(a3 + 8)); /*0x7580df*/
            if ( *(_BYTE *)(a3 + 50) ) /*0x7580dc*/
            {
              do /*0x758171*/
              {
                v11 = *v10; /*0x7580eb*/
                v12 = v10 - 1; /*0x7580ed*/
                if ( v11 ) /*0x7580f0*/
                {
                  v13 = v9 - v11; /*0x7580f2*/
                  v18 = v11; /*0x7580f4*/
                  v21 = v13; /*0x7580f8*/
                  do /*0x75813f*/
                  {
                    LOBYTE(v13) = *v12; /*0x7580fc*/
                    v14 = v4 & 0xFF00; /*0x758105*/
                    --v12; /*0x758110*/
                    a1 = v14 | BYTE1(a2); /*0x758111*/
                    g_VoxelRenderBuffer[a1] = v13; /*0x758116*/
                    g_VoxelRenderBuffer[BYTE1(a2) | (v14 + 1)] = v13; /*0x75811c*/
                    LOWORD(v13) = *(_WORD *)(a3 + 42); /*0x75812a*/
                    v4 = *(unsigned __int16 *)(a3 + 44) + v28; /*0x75812e*/
                    a2 += v13; /*0x758134*/
                    v15 = v18 == 1; /*0x758136*/
                    v28 = v4; /*0x758137*/
                    --v18; /*0x75813b*/
                  }
                  while ( !v15 ); /*0x75813f*/
                  v9 = v21; /*0x758141*/
                }
                v22 = *(v12 - 1); /*0x758149*/
                v10 = v12 - 2; /*0x75814d*/
                LOWORD(a1) = g_VoxelOffsetTable[v22]; /*0x758157*/
                a2 += a1; /*0x75815f*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v22]); /*0x758161*/
                v4 += a1; /*0x758169*/
                v9 -= v22; /*0x75816b*/
                v28 = v4; /*0x75816d*/
              }
              while ( v9 ); /*0x758171*/
            }
          }
          LOWORD(a2) = v23 + *(_WORD *)(a3 + 30); /*0x758185*/
          LOWORD(v4) = v24 + *(_WORD *)(a3 + 32); /*0x75818a*/
          v16 = *(unsigned __int8 *)(a3 + 48); /*0x758193*/
          *(_DWORD *)(a3 + 12) += *(_DWORD *)(a3 + 16); /*0x758196*/
          v28 = v4; /*0x75819d*/
          ++v19; /*0x7581a4*/
        }
        while ( v19 < v16 ); /*0x7581a8*/
      }
      LOWORD(a2) = v25 + *(_WORD *)(a3 + 36); /*0x7581bd*/
      LOWORD(v4) = v26 + *(_WORD *)(a3 + 38); /*0x7581c2*/
      v17 = *(unsigned __int8 *)(a3 + 49); /*0x7581cb*/
      *(_DWORD *)(a3 + 12) = v27 + *(_DWORD *)(a3 + 20); /*0x7581ce*/
      v28 = v4; /*0x7581d5*/
      result = ++v20; /*0x7581d9*/
    }
    while ( v20 < v17 ); /*0x7581e0*/
  }
  return result; /*0x7581e6*/
}



// ==== 0x007581F0  ObjectClass::ProcessVoxelColorSamples  this=ObjectClass  sig=csp ====
char __usercall ProcessVoxelColorSamples@<al>(int *a1@<ebx>, int a2@<ebp>, int a3@<edi>, int *a4)
{
  int *v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // dx
  char result; // al
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  _BYTE *v12; // esi
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // al
  int v15; // eax
  char *v16; // esi
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // edx
  int *v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+18h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-20h]
  __int16 v27; // [esp+20h] [ebp-1Ch]
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+28h] [ebp-14h]
  __int16 v30; // [esp+2Ch] [ebp-10h]
  __int16 v31; // [esp+30h] [ebp-Ch]
  __int16 v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v4 = a4; /*0x7581f0*/
  g_VoxelOffsetTable[0] = 0; /*0x7581f7*/
  v5 = 1; /*0x758211*/
  if ( *((_BYTE *)a4 + 50) > 1u ) /*0x758216*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758218*/
    do /*0x75823f*/
    {
      v7 = *(v6 - 1); /*0x75821d*/
      v6 += 2; /*0x758221*/
      *(v6 - 1) = *((_WORD *)a4 + 21) + v7; /*0x758228*/
      ++v5; /*0x758234*/
      *v6 = *((_WORD *)a4 + 22) + *(v6 - 2); /*0x758235*/
    }
    while ( v5 < *((unsigned __int8 *)a4 + 50) ); /*0x75823f*/
  }
  LOWORD(a3) = *((_WORD *)a4 + 12); /*0x758245*/
  LOWORD(a2) = *((_WORD *)a4 + 13); /*0x758249*/
  LOWORD(a4) = *((_WORD *)a4 + 14); /*0x75824d*/
  result = *((_BYTE *)v4 + 49); /*0x758252*/
  v26 = 0; /*0x758255*/
  if ( result ) /*0x75825f*/
  {
    do /*0x758415*/
    {
      HIWORD(v9) = HIWORD(a4); /*0x758266*/
      v32 = (__int16)a4; /*0x75826d*/
      v33 = v4[3]; /*0x758276*/
      v30 = a3; /*0x75827a*/
      v31 = a2; /*0x75827e*/
      v25 = 0; /*0x758282*/
      if ( *((_BYTE *)v4 + 48) ) /*0x758271*/
      {
        do /*0x7583d4*/
        {
          v29 = (__int16)a4; /*0x758297*/
          v10 = (int *)*v4; /*0x75829b*/
          v27 = a3; /*0x75829d*/
          v28 = a2; /*0x7582a1*/
          v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7582a5*/
          if ( v11 != (int *)-1 ) /*0x7582ab*/
          {
            v12 = (char *)v11 + v4[2]; /*0x7582b4*/
            v11 = (int *)*((unsigned __int8 *)v4 + 50); /*0x7582b8*/
            v22 = v11; /*0x7582bd*/
            if ( *((_BYTE *)v4 + 50) ) /*0x7582b8*/
            {
              do /*0x758394*/
              {
                LOBYTE(v10) = *v12; /*0x7582c7*/
                v13 = v12 + 1; /*0x7582c9*/
                v14 = (unsigned __int8)v10; /*0x7582ce*/
                LOWORD(v10) = *((_WORD *)v4 + 23) * (unsigned __int8)v10; /*0x7582d6*/
                LOWORD(a1) = g_VoxelOffsetTable[v14]; /*0x7582e0*/
                a3 += (int)a1; /*0x7582e8*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v14]); /*0x7582ea*/
                a2 += (int)a1; /*0x7582f2*/
                a1 = (int *)((char *)a4 + (_DWORD)v10); /*0x7582f8*/
                v10 = (int *)((char *)v22 - v14); /*0x7582fe*/
                v15 = *v13; /*0x758302*/
                v16 = (char *)(v13 + 1); /*0x758304*/
                a4 = a1; /*0x758307*/
                v22 = v10; /*0x75830b*/
                if ( v15 ) /*0x75830f*/
                {
                  v24 = v15; /*0x758313*/
                  v22 = (int *)((char *)v10 - v15); /*0x758317*/
                  do /*0x75838b*/
                  {
                    v23 = *v16; /*0x75831f*/
                    v17 = BYTE1(a3); /*0x758330*/
                    v18 = v17 | a2 & 0xFF00; /*0x758333*/
                    ++v16; /*0x758346*/
                    if ( (unsigned __int16)((unsigned __int16)a4 >> 8) > (unsigned __int8)byte_B1D5E0[v18] ) /*0x75834a*/
                    {
                      byte_B1D5E0[v18] = BYTE1(a4); /*0x758350*/
                      g_VoxelRenderBuffer[v18] = v23; /*0x758356*/
                      g_VoxelDepthBuffer[v18] = v23; /*0x75835c*/
                      byte_B1D5E1[v18] = BYTE1(a4); /*0x758362*/
                    }
                    LOWORD(v18) = *((_WORD *)v4 + 21); /*0x758368*/
                    LOWORD(v17) = *((_WORD *)v4 + 22); /*0x75836c*/
                    a3 += v18; /*0x758370*/
                    LOWORD(v18) = *((_WORD *)v4 + 23); /*0x758372*/
                    a2 += v17; /*0x758376*/
                    v10 = (int *)((char *)a4 + v18); /*0x75837c*/
                    v19 = v24 == 1; /*0x758382*/
                    a4 = (int *)((char *)a4 + v18); /*0x758383*/
                    --v24; /*0x758387*/
                  }
                  while ( !v19 ); /*0x75838b*/
                }
                HIWORD(v11) = HIWORD(v22); /*0x75838d*/
                v12 = v16 + 1; /*0x758391*/
              }
              while ( v22 ); /*0x758394*/
            }
          }
          LOWORD(v11) = v29 + *((_WORD *)v4 + 17); /*0x7583a1*/
          LOWORD(a3) = v27 + *((_WORD *)v4 + 15); /*0x7583ae*/
          LOWORD(a2) = v28 + *((_WORD *)v4 + 16); /*0x7583b3*/
          a4 = v11; /*0x7583b8*/
          v20 = *((unsigned __int8 *)v4 + 48); /*0x7583c3*/
          v4[3] += v4[4]; /*0x7583c6*/
          v9 = (int *)++v25; /*0x7583cd*/
        }
        while ( v25 < v20 ); /*0x7583d4*/
      }
      LOWORD(v9) = v32 + *((_WORD *)v4 + 20); /*0x7583e2*/
      LOWORD(a3) = v30 + *((_WORD *)v4 + 18); /*0x7583ef*/
      LOWORD(a2) = v31 + *((_WORD *)v4 + 19); /*0x7583f4*/
      a4 = v9; /*0x7583f9*/
      v21 = *((unsigned __int8 *)v4 + 49); /*0x758404*/
      v4[3] = v33 + v4[5]; /*0x758407*/
      result = ++v26; /*0x75840e*/
    }
    while ( v26 < v21 ); /*0x758415*/
  }
  return result; /*0x75841c*/
}



// ==== 0x00758430  ObjectClass::ProcessVoxelScanSamples  this=ObjectClass  sig=csp ====
char __usercall ProcessVoxelScanSamples@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  char *v12; // esi
  int v13; // eax
  char *v14; // esi
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // [esp+10h] [ebp-30h]
  char v20; // [esp+14h] [ebp-2Ch]
  unsigned __int8 v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-24h]
  unsigned int v24; // [esp+20h] [ebp-20h]
  __int16 v25; // [esp+24h] [ebp-1Ch]
  __int16 v26; // [esp+28h] [ebp-18h]
  __int16 v27; // [esp+2Ch] [ebp-14h]
  __int16 v28; // [esp+30h] [ebp-10h]
  __int16 v29; // [esp+34h] [ebp-Ch]
  __int16 v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v4 = a4; /*0x758430*/
  g_VoxelOffsetTable[0] = 0; /*0x758439*/
  v5 = 1; /*0x758450*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x758455*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758457*/
    do /*0x75847e*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x758462*/
      v6 += 2; /*0x758466*/
      *(v6 - 1) = v7; /*0x758469*/
      ++v5; /*0x758475*/
      *v6 = *(_WORD *)(a4 + 44) + *(v6 - 2); /*0x758476*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x758479*/
    }
    while ( v5 < a1 ); /*0x75847e*/
  }
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x758484*/
  LOWORD(a2) = *(_WORD *)(a4 + 26); /*0x758488*/
  LOWORD(a4) = *(_WORD *)(a4 + 28); /*0x75848c*/
  result = *(_BYTE *)(v4 + 49); /*0x758491*/
  v24 = 0; /*0x758494*/
  if ( result ) /*0x75849a*/
  {
    do /*0x758653*/
    {
      v28 = a3; /*0x7584a7*/
      v31 = *(_DWORD *)(v4 + 12); /*0x7584ab*/
      HIWORD(v9) = HIWORD(a4); /*0x7584af*/
      v30 = a4; /*0x7584b3*/
      v29 = a2; /*0x7584bc*/
      v23 = 0; /*0x7584c0*/
      if ( *(_BYTE *)(v4 + 48) ) /*0x7584b7*/
      {
        do /*0x758612*/
        {
          v27 = a4; /*0x7584d1*/
          v10 = *(_DWORD *)(v4 + 4); /*0x7584d5*/
          v25 = a3; /*0x7584d8*/
          v26 = a2; /*0x7584dc*/
          v11 = *(_DWORD *)(v10 + 4 * *(_DWORD *)(v4 + 12)); /*0x7584e0*/
          if ( v11 != -1 ) /*0x7584e6*/
          {
            v12 = (char *)(v11 + *(_DWORD *)(v4 + 8)); /*0x7584ef*/
            v11 = *(unsigned __int8 *)(v4 + 50); /*0x7584f3*/
            v19 = v11; /*0x7584f8*/
            if ( *(_BYTE *)(v4 + 50) ) /*0x7584f3*/
            {
              do /*0x7585d2*/
              {
                v13 = (unsigned __int8)*v12; /*0x758504*/
                v14 = v12 - 1; /*0x758506*/
                if ( v13 ) /*0x758509*/
                {
                  v22 = v13; /*0x758513*/
                  v19 -= v13; /*0x758519*/
                  do /*0x75858d*/
                  {
                    v20 = *v14; /*0x758521*/
                    v15 = BYTE1(a3); /*0x758532*/
                    v16 = v15 | a2 & 0xFF00; /*0x758535*/
                    --v14; /*0x758548*/
                    if ( (unsigned __int16)BYTE1(a4) > (unsigned __int8)byte_B1D5E0[v16] ) /*0x75854c*/
                    {
                      byte_B1D5E0[v16] = BYTE1(a4); /*0x758552*/
                      g_VoxelRenderBuffer[v16] = v20; /*0x758558*/
                      g_VoxelDepthBuffer[v16] = v20; /*0x75855e*/
                      byte_B1D5E1[v16] = BYTE1(a4); /*0x758564*/
                    }
                    LOWORD(v16) = *(_WORD *)(v4 + 42); /*0x75856a*/
                    LOWORD(v15) = *(_WORD *)(v4 + 44); /*0x75856e*/
                    a3 += v16; /*0x758572*/
                    LOWORD(v16) = *(_WORD *)(v4 + 46); /*0x758574*/
                    a2 += v15; /*0x758578*/
                    v10 = v16 + a4; /*0x75857e*/
                    v17 = v22 == 1; /*0x758584*/
                    a4 += v16; /*0x758585*/
                    --v22; /*0x758589*/
                  }
                  while ( !v17 ); /*0x75858d*/
                }
                v21 = *(v14 - 1); /*0x758593*/
                v12 = v14 - 2; /*0x758597*/
                LOWORD(v10) = *(_WORD *)(v4 + 46) * v21; /*0x7585a0*/
                v11 = v21; /*0x7585a5*/
                LOWORD(a1) = g_VoxelOffsetTable[v21]; /*0x7585aa*/
                a3 += a1; /*0x7585b2*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v21]); /*0x7585b4*/
                a2 += a1; /*0x7585bc*/
                a1 = v10 + a4; /*0x7585c2*/
                v10 = v19 - v21; /*0x7585c8*/
                v17 = v19 == v21; /*0x7585c8*/
                a4 = a1; /*0x7585ca*/
                v19 = v10; /*0x7585ce*/
              }
              while ( !v17 ); /*0x7585d2*/
            }
          }
          LOWORD(v11) = v27 + *(_WORD *)(v4 + 34); /*0x7585df*/
          LOWORD(a3) = v25 + *(_WORD *)(v4 + 30); /*0x7585ec*/
          LOWORD(a2) = v26 + *(_WORD *)(v4 + 32); /*0x7585f1*/
          a4 = v11; /*0x7585f6*/
          *(_DWORD *)(v4 + 12) += *(_DWORD *)(v4 + 16); /*0x758603*/
          v9 = v23 + 1; /*0x75860b*/
          v23 = v9; /*0x75860e*/
        }
        while ( v9 < *(unsigned __int8 *)(v4 + 48) ); /*0x758612*/
      }
      LOWORD(v9) = v30 + *(_WORD *)(v4 + 40); /*0x758620*/
      LOWORD(a3) = v28 + *(_WORD *)(v4 + 36); /*0x75862d*/
      LOWORD(a2) = v29 + *(_WORD *)(v4 + 38); /*0x758632*/
      a4 = v9; /*0x758637*/
      v18 = *(unsigned __int8 *)(v4 + 49); /*0x758642*/
      *(_DWORD *)(v4 + 12) = v31 + *(_DWORD *)(v4 + 20); /*0x758645*/
      result = ++v24; /*0x75864c*/
    }
    while ( v24 < v18 ); /*0x758653*/
  }
  return result; /*0x758659*/
}



// ==== 0x00758670  GlobalHelper_053C80_Helper  this=-  sig=csp ====
char __fastcall sub_758670(float *a1, int a2)
{
  int v2; // ebp
  int v3; // esi
  float *v5; // edi
  double v6; // st7

  v2 = dword_8469F4[a2]; /*0x758679*/
  v3 = 0; /*0x758681*/
  if ( v2 > 0 ) /*0x758687*/
  {
    v5 = (float *)(dword_8469E0[a2] + 4); /*0x75868a*/
    do /*0x7586d0*/
    {
      v6 = *(v5 - 1) * *a1 + v5[1] * a1[2] + a1[1] * *v5; /*0x75869f*/
      if ( v6 >= 0.0 ) /*0x7586ac*/
        g_VoxelShadeTable[v3] = Math::RoundToInt(v6 * 16.0); /*0x7586c4*/
      else
        g_VoxelShadeTable[v3] = 0; /*0x7586b0*/
      ++v3; /*0x7586ca*/
      v5 += 3; /*0x7586cb*/
    }
    while ( v3 < v2 ); /*0x7586d0*/
  }
  byte_B45A8F = 16; /*0x7586d7*/
  byte_B45A8E = 16; /*0x7586dc*/
  byte_B45A8D = 16; /*0x7586e1*/
  return 16; /*0x7586d5*/
}



// ==== 0x007586F0  VoxelAnim::ComputeTransform  this=VoxelAnim  sig=csp ====
char __fastcall sub_7586F0(float *a1, float *a2, float a3, int a4)
{
  int v5; // esi
  double v6; // st7
  double v7; // st7
  float v8; // edx
  int v9; // ebx
  int v10; // edi
  float *v11; // esi
  double v12; // st7
  double v13; // st6
  double v14; // st7
  float v16; // [esp+18h] [ebp-24h]
  float v17; // [esp+1Ch] [ebp-20h]
  float v18; // [esp+20h] [ebp-1Ch]
  float v19; // [esp+24h] [ebp-18h]
  float v20; // [esp+28h] [ebp-14h]
  float v21; // [esp+2Ch] [ebp-10h]
  float v22; // [esp+30h] [ebp-Ch]
  float v23; // [esp+34h] [ebp-8h]
  float v24; // [esp+38h] [ebp-4h]
  float v25; // [esp+44h] [ebp+8h]

  v5 = dword_8469E0[a4]; /*0x758702*/
  v16 = *a1 + *a2; /*0x75870c*/
  v17 = a2[1] + a1[1]; /*0x758716*/
  v6 = a2[2] + a1[2]; /*0x75871d*/
  v18 = v6; /*0x758720*/
  v7 = Math::Sqrt(v6 * v18 + v16 * v16 + v17 * v17); /*0x75873f*/
  if ( v7 == 0.0 ) /*0x758752*/
  {
    v8 = v18; /*0x75878e*/
    v19 = v16; /*0x758792*/
    v20 = v17; /*0x758798*/
  }
  else
  {
    v22 = v16 / v7; /*0x75875a*/
    v19 = v22; /*0x758768*/
    v23 = v17 / v7; /*0x75876c*/
    v20 = v23; /*0x758778*/
    v24 = v18 / v7; /*0x75877c*/
    v8 = v24; /*0x758780*/
  }
  v9 = dword_8469F4[a4]; /*0x75879c*/
  v10 = 0; /*0x7587a3*/
  v21 = v8; /*0x7587a7*/
  if ( v9 > 0 ) /*0x7587ab*/
  {
    v11 = (float *)(v5 + 4); /*0x7587b1*/
    do /*0x758856*/
    {
      v12 = v11[1] * a1[2] + *v11 * a1[1] + *(v11 - 1) * *a1; /*0x7587c7*/
      v13 = v19 * *(v11 - 1) + v20 * *v11 + v21 * v11[1]; /*0x7587df*/
      v25 = v13 / (a3 - v13 * a3 + v13); /*0x7587ef*/
      if ( v25 < 0.0 ) /*0x758804*/
        v25 = 0.0; /*0x758806*/
      if ( v12 < 0.0 ) /*0x758819*/
        v12 = 0.0; /*0x75881d*/
      v14 = v12 + v25; /*0x758823*/
      if ( v14 >= 0.0 ) /*0x758832*/
        g_VoxelShadeTable[v10] = Math::RoundToInt(v14 * 16.0); /*0x75884a*/
      else
        g_VoxelShadeTable[v10] = 0; /*0x758836*/
      ++v10; /*0x758850*/
      v11 += 3; /*0x758851*/
    }
    while ( v10 < v9 ); /*0x758856*/
  }
  byte_B45A8F = 16; /*0x758861*/
  byte_B45A8E = 16; /*0x758866*/
  byte_B45A8D = 16; /*0x75886b*/
  return 16; /*0x75885c*/
}



// ==== 0x00758880  VoxelRenderer::ClearDepth  this=VoxelRenderer  sig=ida-proto ====
int __fastcall sub_758880(float *a1, int a2)
{
  int v4; // ebx
  int v5; // ebp
  int v7; // edi
  int v8; // ecx
  float *v9; // edx
  double v10; // st7
  float v11; // [esp+18h] [ebp-4h]

  v4 = dword_8469E0[a2]; /*0x75889c*/
  v11 = 0.0; /*0x7588a3*/
  v5 = 0; /*0x7588ab*/
  if ( Math::Sqrt(*a1 * *a1 + a1[1] * a1[1] + a1[2] * a1[2]) < 0.2 ) /*0x7588d1*/
    return 255; /*0x7588d6*/
  v7 = dword_8469F4[a2]; /*0x7588de*/
  v8 = 0; /*0x7588e5*/
  if ( v7 > 0 ) /*0x7588e9*/
  {
    v9 = (float *)(v4 + 4); /*0x7588eb*/
    do /*0x75891d*/
    {
      v10 = *(v9 - 1) * *a1 + v9[1] * a1[2] + *v9 * a1[1]; /*0x758900*/
      if ( v10 > v11 ) /*0x75890b*/
      {
        v11 = v10; /*0x75890d*/
        v5 = v8; /*0x758911*/
      }
      ++v8; /*0x758917*/
      v9 += 3; /*0x758918*/
    }
    while ( v8 < v7 ); /*0x75891d*/
  }
  return v5; /*0x7588d3*/
}



// ==== 0x00758950  VoxelPalette::Init  this=VoxelPalette  sig=csp ====
_DWORD *__thiscall VoxelPalette::Init(VoxelPalette *this, int a2, int a3)
{
  if ( a2 ) /*0x758959*/
  {
    this->q004 = a2; /*0x758974*/
    *((_DWORD *)this + 6) = 0; /*0x758977*/
  }
  else
  {
    this->q004 = __2_YAPAXI_Z(0x300u); /*0x758968*/
    *((_DWORD *)this + 6) = 1; /*0x75896b*/
  }
  if ( a3 ) /*0x758984*/
  {
    *((_DWORD *)this + 5) = a3; /*0x7589a3*/
    *((_DWORD *)this + 7) = 0; /*0x7589a6*/
  }
  else
  {
    *((_DWORD *)this + 5) = __2_YAPAXI_Z(0x8000u); /*0x758993*/
    *((_DWORD *)this + 7) = 1; /*0x758996*/
  }
  return this->__pad_0; /*0x75899f*/
}



// ==== 0x007589C0  VoxelPalette::Reset  this=VoxelPalette  sig=csp ====
int __thiscall VoxelPalette::Reset(VoxelPalette *this)
{
  int result; // eax

  if ( *((_DWORD *)this + 6) ) /*0x7589c3*/
    __3_YAXPAX_Z(*((void **)this + 4)); /*0x7589ce*/
  result = *((_DWORD *)this + 7); /*0x7589d6*/
  if ( result ) /*0x7589db*/
    __3_YAXPAX_Z(*((void **)this + 5)); /*0x7589e1*/
  return result; /*0x7589e9*/
}



// ==== 0x007589F0  ObjectClass::method_7589F0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_7589F0(ObjectClass *this, int a2)
{
  BOOL v4; // ebx

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1); /*0x758a01*/
  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 36))(a2, this->?, 768) != 768; /*0x758a1b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x758a24*/
  return v4; /*0x758a27*/
}



// ==== 0x00758A30  VoxelPaletteClass::ConvertFromFile  this=VoxelPaletteClass  sig=csp ====
int __thiscall VoxelPaletteClass::ConvertFromFile(VoxelPaletteClass *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  _DWORD v9[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = 0; /*0x758a42*/
  if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1) ) /*0x758a44*/
    goto LABEL_5; /*0x758a44*/
  if ( (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 36))(a2, v9, 16) != 16 ) /*0x758a5c*/
    goto LABEL_5; /*0x758a5c*/
  v4 = v9[2]; /*0x758a62*/
  v5 = v9[1]; /*0x758a66*/
  *(_DWORD *)this = v9[0]; /*0x758a6a*/
  v6 = v9[3]; /*0x758a6c*/
  this->q020 = v4; /*0x758a70*/
  v7 = this->u32_4; /*0x758a73*/
  this->u32_4 = v5; /*0x758a76*/
  this->u32_C = v6; /*0x758a79*/
  if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 36))(a2, v7, 768) != 768 /*0x758aaa*/
    || (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 36))(
         a2,
         this->u32_14,
         this->q020 << 8) != this->q020 << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758aac*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x758ab5*/
  return v3; /*0x758ab8*/
}



// ==== 0x00758AD0  ObjectClass::method_758AD0  this=ObjectClass  sig=csp ====
int __thiscall sub_758AD0(ObjectClass *this, int *a2)
{
  int v3; // ebx
  void *vtable2; // eax
  void *vtable1; // edx
  void *vtable3; // ecx
  int v7; // edx
  _DWORD v9[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = 0; /*0x758ae2*/
  if ( !(*(int (__thiscall **)(int *, int))(*a2 + 28))(a2, 2) ) /*0x758ae4*/
    goto LABEL_5; /*0x758ae4*/
  vtable2 = this->?; /*0x758aed*/
  vtable1 = this->?; /*0x758af0*/
  v9[0] = this->AbstractClass; /*0x758af3*/
  vtable3 = this->?; /*0x758af7*/
  v9[2] = vtable2; /*0x758afa*/
  v9[1] = vtable1; /*0x758afe*/
  v7 = *a2; /*0x758b02*/
  v9[3] = vtable3; /*0x758b08*/
  if ( (*(int (__thiscall **)(int *, _DWORD *, int))(v7 + 48))(a2, v9, 16) != 16 /*0x758b4a*/
    || (*(int (__thiscall **)(int *, int, int))(*a2 + 48))(a2, this->?, 768) != 768
    || (*(int (__thiscall **)(int *, int, int))(*a2 + 48))(a2, this->?, (int)this->? << 8) != (int)this->? << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758b4c*/
  }
  (*(void (__thiscall **)(int *))(*a2 + 52))(a2); /*0x758b55*/
  return v3; /*0x758b58*/
}



// ==== 0x00758B70  ObjectClass::GenerateLightRemapTable  this=ObjectClass  sig=csp ====
int __thiscall GenerateLightRemapTable(ObjectClass *this, float *a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  int v6; // ecx
  float *v7; // eax
  double v8; // st7
  int v9; // ebp
  int i; // edi
  double v11; // st7
  unsigned __int8 *v12; // eax
  char v13; // al
  int v14; // ecx
  bool v15; // cc
  int v16; // edi
  int j; // ebp
  double v18; // st7
  unsigned __int8 *v19; // eax
  double v20; // st7
  char v21; // al
  int v22; // ecx
  int result; // eax
  float *v24; // [esp+10h] [ebp-14h]
  float *v25; // [esp+10h] [ebp-14h]
  float *v26; // [esp+14h] [ebp-10h]
  float v27; // [esp+14h] [ebp-10h]
  float v28; // [esp+18h] [ebp-Ch]
  float v29; // [esp+18h] [ebp-Ch]
  float v30; // [esp+1Ch] [ebp-8h]
  float v31; // [esp+1Ch] [ebp-8h]
  float v32; // [esp+20h] [ebp-4h]
  float *v33; // [esp+28h] [ebp+4h]
  int v34; // [esp+28h] [ebp+4h]
  float *v35; // [esp+28h] [ebp+4h]
  int v36; // [esp+28h] [ebp+4h]
  int v37; // [esp+2Ch] [ebp+8h]
  char v38; // [esp+2Ch] [ebp+8h]
  char v39; // [esp+2Ch] [ebp+8h]

  if ( a2 && a3 ) /*0x758b89*/
  {
    this->? = (void *)a3; /*0x758b8b*/
    v26 = a2; /*0x758b8e*/
  }
  else
  {
    v4 = (float *)&unk_B45A90; /*0x758b94*/
    this->? = (void *)32; /*0x758b99*/
    v26 = (float *)&unk_B45A90; /*0x758ba0*/
    v33 = 0; /*0x758ba4*/
    do /*0x758bd2*/
    {
      ++v4; /*0x758bb0*/
      v5 = (double)(int)v33 * 0.0625; /*0x758bb9*/
      v33 = (float *)((char *)v33 + 1); /*0x758bbf*/
      *(v4 - 1) = v5 * 0.80000001 + 0.60000002; /*0x758bcf*/
    }
    while ( (int)v4 < (int)flt_B45AD0 ); /*0x758bd2*/
    v6 = 16; /*0x758bd4*/
    v7 = flt_B45AD0; /*0x758bd9*/
    v34 = 16; /*0x758bde*/
    do /*0x758c0d*/
    {
      ++v7; /*0x758be5*/
      v37 = v6 - 16; /*0x758be8*/
      ++v6; /*0x758bec*/
      v8 = (double)v37 + (double)v34; /*0x758bf6*/
      v34 = v6; /*0x758bfa*/
      *(v7 - 1) = v8 * 0.0625 + 0.40000001; /*0x758c0a*/
    }
    while ( (int)v7 < (int)&dbl_B45B10 ); /*0x758c0d*/
  }
  v35 = 0; /*0x758c13*/
  v24 = v26; /*0x758c17*/
  do /*0x758cdb*/
  {
    v9 = 1; /*0x758c23*/
    for ( i = 3; i < 768; i += 3 ) /*0x758c2f*/
    {
      if ( v9 < (int)this->AbstractClass || (v38 = 1, v9 > (int)this->?) ) /*0x758c42*/
        v38 = 0; /*0x758c44*/
      v11 = *v24; /*0x758c50*/
      v12 = (unsigned __int8 *)(this->? + i); /*0x758c52*/
      v32 = (double)*v12 * v11; /*0x758c76*/
      v28 = (double)v12[1] * v11; /*0x758c88*/
      v30 = (double)v12[2] * v11; /*0x758c96*/
      v13 = VoxelRenderer::ProjectVertex((VoxelRenderer *)this, v32, v28, v30, v38); /*0x758ca5*/
      v14 = v9++ | ((_DWORD)v35 << 8); /*0x758caf*/
      *(_BYTE *)(v14 + this->?) = v13; /*0x758cbb*/
    }
    v15 = (int)v35 + 1 < 16; /*0x758cd0*/
    v35 = (float *)((char *)v35 + 1); /*0x758cd3*/
    ++v24; /*0x758cd7*/
  }
  while ( v15 ); /*0x758cdb*/
  v36 = 16; /*0x758ce5*/
  v25 = v26 + 16; /*0x758cf0*/
  do /*0x758df9*/
  {
    v16 = 1; /*0x758cfc*/
    for ( j = 3; j < 768; j += 3 ) /*0x758d08*/
    {
      if ( v16 < (int)this->AbstractClass || (v39 = 1, v16 > (int)this->?) ) /*0x758d1b*/
        v39 = 0; /*0x758d1d*/
      v18 = *v25; /*0x758d29*/
      v19 = (unsigned __int8 *)(this->? + j); /*0x758d2b*/
      v29 = (double)*v19 * v18; /*0x758d4a*/
      v27 = (double)v19[1] * v18; /*0x758d58*/
      v20 = v18 * (double)v19[2]; /*0x758d60*/
      v31 = v20; /*0x758d62*/
      if ( v29 > 255.0 ) /*0x758d75*/
        v29 = 255.0; /*0x758d77*/
      if ( v27 > 255.0 ) /*0x758d8e*/
        v27 = 255.0; /*0x758d90*/
      if ( v20 > 255.0 ) /*0x758da3*/
        v31 = 255.0; /*0x758da5*/
      v21 = VoxelRenderer::ProjectVertex((VoxelRenderer *)this, v29, v27, v31, v39); /*0x758dc3*/
      v22 = v16++ | (v36 << 8); /*0x758dcd*/
      *(_BYTE *)(v22 + this->?) = v21; /*0x758dd9*/
    }
    result = v36 + 1; /*0x758dea*/
    v15 = ++v36 < 32; /*0x758dee*/
    ++v25; /*0x758df5*/
  }
  while ( v15 ); /*0x758df9*/
  return result; /*0x758dff*/
}



// ==== 0x00758E10  ObjectClass::method_758E10  this=ObjectClass  sig=csp ====
char __thiscall sub_758E10(ObjectClass *this, float a2, float a3, float a4)
{
  unsigned __int8 *uniqueId; // ecx
  char v5; // bl
  int i; // edx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float v11; // [esp+4h] [ebp-8h]

  uniqueId = (unsigned __int8 *)this->?; /*0x758e13*/
  v5 = 0; /*0x758e17*/
  v11 = 100000.0; /*0x758e19*/
  for ( i = 0; i < 256; ++i ) /*0x758e21*/
  {
    v7 = a3 - (double)uniqueId[1]; /*0x758e49*/
    v8 = a4 - (double)uniqueId[2]; /*0x758e51*/
    v9 = v8 * v8 + v7 * v7 + (a2 - (double)*uniqueId) * (a2 - (double)*uniqueId); /*0x758e63*/
    if ( v9 < v11 ) /*0x758e74*/
    {
      v11 = v9; /*0x758e76*/
      v5 = i; /*0x758e7a*/
    }
    uniqueId += 3; /*0x758e81*/
  }
  return v5; /*0x758e8e*/
}



// ==== 0x00758EA0  VoxelRenderer::ProjectVertex  this=VoxelRenderer  sig=csp ====
char __thiscall VoxelRenderer::ProjectVertex(VoxelRenderer *this, float a2, float a3, float a4, char a5)
{
  int v6; // ecx
  int v7; // edx
  int i; // edi
  int v9; // eax
  unsigned __int8 *v10; // eax
  double v11; // st6
  double v12; // st5
  double v13; // st4
  float v15; // [esp+Ch] [ebp-8h]

  if ( a5 ) /*0x758eae*/
    v6 = *(_DWORD *)this->__pad_0; /*0x758eb0*/
  else
    LOBYTE(v6) = 1; /*0x758eb4*/
  v15 = 100000.0; /*0x758eb9*/
  v7 = 1; /*0x758ec1*/
  for ( i = 3; i < 768; i += 3 ) /*0x758ec6*/
  {
    v9 = *(_DWORD *)this->__pad_0; /*0x758ed1*/
    if ( a5 ) /*0x758ed3*/
    {
      if ( v7 < v9 || v7 > this->VoxelRenderer_field_0x04 ) /*0x758edc*/
        goto LABEL_13; /*0x758edc*/
    }
    else if ( v7 >= v9 && v7 <= this->VoxelRenderer_field_0x04 ) /*0x758ee7*/
    {
      goto LABEL_13; /*0x758ee7*/
    }
    v10 = (unsigned __int8 *)(i + this->VoxelRenderer_field_0x10); /*0x758eee*/
    v11 = a3 - (double)v10[1]; /*0x758f14*/
    v12 = a4 - (double)v10[2]; /*0x758f1c*/
    v13 = v12 * v12 + v11 * v11 + (a2 - (double)*v10) * (a2 - (double)*v10); /*0x758f2e*/
    if ( v13 < v15 ) /*0x758f3f*/
    {
      v15 = v13; /*0x758f41*/
      LOBYTE(v6) = v7; /*0x758f45*/
    }
LABEL_13:
    ++v7; /*0x758f4e*/
  }
  return v6; /*0x758f5b*/
}



// ==== 0x00758F70  sub_758F70  this=-  sig=ida-proto ====
int sub_758F70()
{
  dword_B45B18 = 0; /*0x758f72*/
  dword_B45B1C = 0; /*0x758f77*/
  dword_B45B20 = 0; /*0x758f7c*/
  dword_B45B24 = 0; /*0x758f81*/
  return 0; /*0x758f86*/
}



// ==== 0x00758F90  sub_758F90  this=-  sig=ida-proto ====
void sub_758F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x758f9c*/
  dbl_B45B30 = Math::Sqrt(v0 + v0); /*0x758fae*/
}



// ==== 0x00758FC0  sub_758FC0  this=-  sig=ida-proto ====
void sub_758FC0()
{
  dbl_B45B98 = dbl_B45B30 / 60.0; /*0x758fcc*/
}



// ==== 0x00758FE0  sub_758FE0  this=-  sig=ida-proto ====
void sub_758FE0()
{
  dbl_B45B80 = 1.0 / dbl_B45B98; /*0x758fec*/
}



// ==== 0x00759000  sub_759000  this=-  sig=ida-proto ====
void sub_759000()
{
  dbl_B45B78 = 0.0174532925199433 * 45.0; /*0x75900c*/
}



// ==== 0x00759020  sub_759020  this=-  sig=ida-proto ====
void sub_759020()
{
  dbl_B45B38 = 0.0174532925199433 * 60.0; /*0x75902c*/
}



// ==== 0x00759040  sub_759040  this=-  sig=ida-proto ====
void sub_759040()
{
  dbl_B45B10 = 0.0174532925199433 * 90.0; /*0x75904c*/
}



// ==== 0x00759060  sub_759060  this=-  sig=ida-proto ====
__int64 sub_759060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45B10 - dbl_B45B38); /*0x759072*/
  result = Math::RoundToInt(v0 * dbl_B45B30 * 0.5); /*0x759086*/
  dword_B45BA0 = result; /*0x75908b*/
  return result; /*0x759090*/
}



// ==== 0x007590A0  sub_7590A0  this=-  sig=ida-proto ====
void sub_7590A0()
{
  dbl_B45B40 = Math::ArcTan((double)dword_B45BA0 * 0.00390625); /*0x7590b7*/
}



// ==== 0x007590D0  sub_7590D0  this=-  sig=ida-proto ====
void sub_7590D0()
{
  dbl_B45B70 = Math::ArcTan((double)(2 * dword_B45BA0) / dbl_B45B30); /*0x7590f2*/
}



// ==== 0x00759100  sub_759100  this=-  sig=ida-proto ====
__int64 sub_759100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45BA0) + 0.5); /*0x75911b*/
  dword_B45B94 = result; /*0x759120*/
  return result; /*0x759126*/
}



// ==== 0x00759130  sub_759130  this=-  sig=ida-proto ====
int sub_759130()
{
  word_B45B28 = 0; /*0x759132*/
  word_B45B2A = 0; /*0x759138*/
  return 0; /*0x75913e*/
}



// ==== 0x00759140  sub_759140  this=-  sig=ida-proto ====
int sub_759140()
{
  dword_B45B48 = 0; /*0x759142*/
  dword_B45B4C = 0; /*0x759147*/
  dword_B45B50 = 0; /*0x75914c*/
  return 0; /*0x759151*/
}



// ==== 0x00759160  sub_759160  this=-  sig=ida-proto ====
int sub_759160()
{
  dword_B45B90 = 0; /*0x759165*/
  dword_B45B88 = 128; /*0x75916f*/
  dword_B45B8C = 128; /*0x759174*/
  return 128; /*0x759179*/
}



// ==== 0x00759180  sub_759180  this=-  sig=ida-proto ====
int sub_759180()
{
  AsyncIO_Instance = 0; /*0x759187*/
  dword_B45B60 = 0; /*0x75918c*/
  byte_B45B64 = 1; /*0x759191*/
  byte_B45B65 = 0; /*0x759198*/
  dword_B45B58 = (int)&DynamicVectorClass<MovieHandle *>::`vftable'; /*0x75919d*/
  dword_B45B6C = 10; /*0x7591a7*/
  g_AsyncIOState = 0; /*0x7591b1*/
  return atexit(sub_7591C0); /*0x7591bc*/
}



// ==== 0x007591C0  sub_7591C0  this=-  sig=ida-proto ====
void __cdecl sub_7591C0()
{
  dword_B45B58 = (int)&VectorClass<MovieHandle *>::`vftable'; /*0x7591c8*/
  if ( AsyncIO_Instance && byte_B45B65 ) /*0x7591dc*/
  {
    __3_YAXPAX_Z(AsyncIO_Instance); /*0x7591df*/
    AsyncIO_Instance = 0; /*0x7591e7*/
  }
  byte_B45B65 = 0; /*0x7591ed*/
  dword_B45B60 = 0; /*0x7591f3*/
}



// ==== 0x00759200  sub_759200  this=-  sig=ida-proto ====
char sub_759200()
{
  MSG Msg; // [esp+0h] [ebp-1Ch] BYREF

  ++dword_AA0430; /*0x759210*/
  if ( !GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x759223*/
    return 1; /*0x759223*/
  if ( IsMessageDialog(&Msg, 0, 0, 0) ) /*0x75922f*/
  {
    TranslateMessage(&Msg); /*0x75923d*/
    DispatchMessageA(&Msg); /*0x759248*/
    return 1; /*0x759253*/
  }
  return 0; /*0x759250*/
}



// ==== 0x00759260  Stream::InitializeBinkAudio  this=AbstractClass  sig=csp ====
char *__thiscall InitializeBinkAudioStream(char *this, const char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  char v17; // al
  char v19; // [esp+13h] [ebp-1h] BYREF

  CCFileClass::Construct3((int)(this + 4)); /*0x75926a*/
  Stream::CopyFromTemplate(this + 376); /*0x759275*/
  *((_DWORD *)this + 331) = a3; /*0x759282*/
  *((_DWORD *)this + 121) = this; /*0x759288*/
  *((_DWORD *)this + 101) = &v19; /*0x75928e*/
  *((_DWORD *)this + 110) = 0; /*0x75929b*/
  if ( !TestBitArray(15) ) /*0x7592a1*/
    *((_DWORD *)this + 110) |= 1u; /*0x7592af*/
  if ( !TestBitArray(1) ) /*0x7592b7*/
  {
    v9 = *((_DWORD *)this + 110); /*0x7592c0*/
    LOBYTE(v9) = v9 | 4; /*0x7592c6*/
    *((_DWORD *)this + 110) = v9; /*0x7592c8*/
  }
  if ( TestBitArray(10) ) /*0x7592d3*/
  {
    v10 = *((_DWORD *)this + 110); /*0x7592dc*/
    LOBYTE(v10) = v10 | 0x40; /*0x7592e2*/
    *((_DWORD *)this + 110) = v10; /*0x7592e4*/
  }
  if ( TestBitArray(12) ) /*0x7592ef*/
  {
    v11 = *((_DWORD *)this + 110); /*0x7592f8*/
    LOBYTE(v11) = v11 | 0x80; /*0x7592fe*/
    *((_DWORD *)this + 110) = v11; /*0x759300*/
  }
  v12 = *((_DWORD *)this + 111) | 8; /*0x75930c*/
  *((_DWORD *)this + 111) = v12; /*0x75930f*/
  v13 = v12; /*0x75931e*/
  if ( (*(this + 1324) & 2) != 0 ) /*0x759320*/
  {
    LOBYTE(v13) = v12 | 0x20; /*0x759322*/
    *((_DWORD *)this + 111) = v13; /*0x759324*/
    if ( (*(this + 1324) & 4) == 0 ) /*0x759333*/
      goto LABEL_14; /*0x759333*/
    BYTE1(v13) = BYTE1(v12) | 1; /*0x759335*/
  }
  else
  {
    LOBYTE(v13) = v12 & 0xDF; /*0x75933a*/
  }
  *((_DWORD *)this + 111) = v13; /*0x75933c*/
LABEL_14:
  v14 = TestBitArray(17); /*0x759342*/
  v15 = *((_DWORD *)this + 111); /*0x75934e*/
  if ( v14 ) /*0x759354*/
    LOBYTE(v15) = v15 | 4; /*0x759356*/
  else
    LOBYTE(v15) = v15 & 0xFB; /*0x75935a*/
  *((_DWORD *)this + 111) = v15; /*0x759361*/
  v14 = TestBitArray(3); /*0x75936c*/
  v16 = *((_DWORD *)this + 111); /*0x75936e*/
  if ( v14 ) /*0x759374*/
    LOBYTE(v16) = v16 & 0xFE; /*0x759376*/
  else
    v16 |= 1u; /*0x75937a*/
  *((_DWORD *)this + 111) = v16; /*0x759383*/
  *((_DWORD *)this + 102) = -1; /*0x75938d*/
  *((_DWORD *)this + 103) = -1; /*0x759393*/
  this->u8_1A = 0; /*0x75939e*/
  *((_DWORD *)this + 105) = 0; /*0x7593a4*/
  *((_DWORD *)this + 97) = 0; /*0x7593aa*/
  *((_DWORD *)this + 106) = a7; /*0x7593b0*/
  *((_DWORD *)this + 107) = a8; /*0x7593b6*/
  if ( TestBitArray(3) ) /*0x7593bc*/
    this->referenceCount = 1; /*0x7593c5*/
  else
    this->referenceCount = 14; /*0x7593cd*/
  v17 = *(this + 1324); /*0x7593d7*/
  *((_DWORD *)this + 113) = -1; /*0x7593dd*/
  if ( (v17 & 1) != 0 ) /*0x7593e5*/
    *((_DWORD *)this + 94) = sub_75A2B0; /*0x7593e7*/
  else
    *((_DWORD *)this + 94) = sub_75A100; /*0x7593f3*/
  *((_DWORD *)this + 95) = sub_75A2F0; /*0x759402*/
  this->nextArrayIndex = sub_75A350; /*0x75940c*/
  if ( TestBitArray(4) ) /*0x759416*/
  {
    *((_DWORD *)this + 98) = j_Time_GetElapsedMS; /*0x75941f*/
    *((_DWORD *)this + 108) = 60; /*0x759429*/
  }
  else
  {
    *((_DWORD *)this + 98) = sub_4116A0; /*0x759435*/
    *((_DWORD *)this + 108) = 60; /*0x75943f*/
    *((_DWORD *)this + 127) = (unsigned __int16)unk_A8EBA8; /*0x759455*/
  }
  *((_DWORD *)this + 100) = ManageMultimediaTimer; /*0x759463*/
  *((_DWORD *)this + 117) = 0x2000; /*0x75946d*/
  *((_DWORD *)this + 321) = 0; /*0x759477*/
  *((_DWORD *)this + 339) = 0; /*0x75947d*/
  *((_DWORD *)this + 322) = 0; /*0x759483*/
  strcpy(this + 113, a2); /*0x75949f*/
  *((_DWORD *)this + 338) = a6; /*0x7594b0*/
  *((_DWORD *)this + 326) = 0; /*0x7594b7*/
  *((_DWORD *)this + 327) = 0; /*0x7594bd*/
  *((_DWORD *)this + 328) = 0; /*0x7594c3*/
  *((_DWORD *)this + 329) = 0; /*0x7594c9*/
  *((_DWORD *)this + 324) = -1; /*0x7594cf*/
  *(this + 1320) = 0; /*0x7594d9*/
  *((_DWORD *)this + 336) = a4; /*0x7594df*/
  *((_DWORD *)this + 337) = a5; /*0x7594e5*/
  this->referenceCount = 0; /*0x7594eb*/
  *(this + 1300) = 0; /*0x7594ee*/
  *(this + 1360) = 0; /*0x7594f4*/
  *(this + 1361) = 0; /*0x7594fa*/
  *(_DWORD *)this = 0; /*0x759500*/
  return this; /*0x7594b6*/
}



// ==== 0x00759510  CCFileClass::Cleanup  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Cleanup(CCFileClass *this)
{
  System_Cleanup(); /*0x759513*/
  this = (CCFileClass *)((char *)this + 4); /*0x759518*/
  *(_DWORD *)this->CDFileClass = &CCFileClass::`vftable'; /*0x75951e*/
  this->tail_19 = 0; /*0x759524*/
  Vector::Clear((int)this + 88); /*0x75952b*/
  *(_DWORD *)this->CDFileClass = &off_7E1668; /*0x759532*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)this); /*0x75953d*/
}



// ==== 0x00759540  HVAAnimation::LoadFromFile  this=HVAAnimation  sig=csp ====
int __thiscall HVAAnimation::LoadFromFile(HVAAnimation *this, int a2)
{
  int *p_HVAAnimation_field_0x04; // edi
  bool v4; // al
  size_t v6; // eax
  void *v7; // eax
  int v8; // edi
  int v9; // ecx
  unsigned int v10; // eax
  int *v11; // ebp
  unsigned int v12; // ecx
  unsigned int v13; // edx

  if ( *((_BYTE *)this + 112) ) /*0x759548*/
    goto LABEL_6; /*0x759548*/
  p_HVAAnimation_field_0x04 = &this->HVAAnimation_field_0x04; /*0x759550*/
  v4 = (*(int (__thiscall **)(int *, char *, int))(this->HVAAnimation_field_0x04 + 32))( /*0x759560*/
         &this->HVAAnimation_field_0x04,
         (char *)this + 113,
         1) != 0;
  *((_BYTE *)this + 112) = v4; /*0x759565*/
  if ( !v4 ) /*0x759568*/
    return -4; /*0x759573*/
  v6 = (*(int (__thiscall **)(int *))(*p_HVAAnimation_field_0x04 + 44))(&this->HVAAnimation_field_0x04); /*0x75957a*/
  *((_DWORD *)this + 332) = v6; /*0x75957e*/
  *((_DWORD *)this + 334) = 0; /*0x759584*/
  *((_DWORD *)this + 333) = 0; /*0x75958a*/
  v7 = malloc(v6); /*0x759590*/
  *((_DWORD *)this + 335) = v7; /*0x75959a*/
  if ( v7 ) /*0x7595a0*/
  {
LABEL_6:
    v8 = a2; /*0x7595b8*/
    if ( a2 ) /*0x7595be*/
    {
      v9 = *((_DWORD *)this + 333); /*0x7595d0*/
      v10 = *((_DWORD *)this + 332); /*0x7595d6*/
      if ( v9 + a2 > v10 ) /*0x7595e1*/
        v8 = v10 - v9; /*0x7595e5*/
    }
    else
    {
      v8 = *((_DWORD *)this + 332) - *((_DWORD *)this + 333); /*0x7595cc*/
    }
    v11 = &this->HVAAnimation_field_0x04; /*0x7595f6*/
    if ( (*(int (__thiscall **)(int *, int, int))(this->HVAAnimation_field_0x04 + 36))( /*0x759604*/
           &this->HVAAnimation_field_0x04,
           *((_DWORD *)this + 333) + *((_DWORD *)this + 335),
           v8) == v8 )
    {
      v12 = *((_DWORD *)this + 332); /*0x75962f*/
      v13 = v8 + *((_DWORD *)this + 333); /*0x759635*/
      *((_DWORD *)this + 333) = v13; /*0x759639*/
      if ( v13 < v12 ) /*0x759641*/
      {
        return -1; /*0x75965d*/
      }
      else
      {
        (*(void (__thiscall **)(int *))(*v11 + 52))(&this->HVAAnimation_field_0x04); /*0x759648*/
        *((_BYTE *)this + 112) = 0; /*0x75964b*/
        return -2; /*0x759651*/
      }
    }
    else
    {
      (*(void (__thiscall **)(int *))(*v11 + 52))(&this->HVAAnimation_field_0x04); /*0x75960b*/
      *((_BYTE *)this + 112) = 0; /*0x75960e*/
      *((_DWORD *)this + 334) = 0; /*0x759611*/
      *((_DWORD *)this + 333) = 0; /*0x759617*/
      return -5; /*0x759620*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int *))(*p_HVAAnimation_field_0x04 + 52))(&this->HVAAnimation_field_0x04); /*0x7595a6*/
    *((_BYTE *)this + 112) = 0; /*0x7595a9*/
    return -3; /*0x7595af*/
  }
}



// ==== 0x00759670  HVAAnimation::ParseFrames  this=HVAAnimation  sig=csp ====
int __thiscall HVAAnimation::ParseFrames(HVAAnimation *this, int a2, void *a3, unsigned int a4)
{
  int result; // eax
  int v5; // edi

  switch ( a2 ) /*0x759682*/
  {
    case 1: /*0x759682*/
    case 2: /*0x759682*/
    case 3: /*0x759682*/
    case 4: /*0x759682*/
      result = 0; /*0x75968a*/
      break; /*0x75968d*/
    case 5: /*0x759682*/
      v5 = *((_DWORD *)this + 334); /*0x759690*/
      if ( v5 + a4 > *((_DWORD *)this + 332) ) /*0x7596a5*/
        goto LABEL_11; /*0x7596a5*/
      qmemcpy(a3, (const void *)(v5 + *((_DWORD *)this + 335)), a4); /*0x7596bf*/
      *((_DWORD *)this + 334) += a4; /*0x7596d3*/
      result = 0; /*0x7596d9*/
      break; /*0x7596db*/
    case 7: /*0x759682*/
      if ( a3 ) /*0x7596e5*/
      {
        if ( a3 == (void *)1 ) /*0x7596e8*/
        {
          *((_DWORD *)this + 334) += a4; /*0x759714*/
          result = 0; /*0x75971a*/
        }
        else
        {
          if ( a3 != (void *)2 ) /*0x7596eb*/
            goto LABEL_11; /*0x7596eb*/
          *((_DWORD *)this + 334) = *((_DWORD *)this + 332) - a4 - 1; /*0x7596fc*/
          result = 0; /*0x759702*/
        }
      }
      else
      {
        *((_DWORD *)this + 334) = a4; /*0x759725*/
        result = 0; /*0x75972b*/
      }
      break; /*0x759704*/
    default:
LABEL_11:
      result = 1; /*0x759731*/
      break; /*0x759732*/
  }
  return result; /*0x759689*/
}



// ==== 0x00759760  ObjectClass::method  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_759760(TechnoClass *this, const void *a2)
{
  qmemcpy(&this->reloadTimer[2], a2, 0x300u); /*0x759773*/
  *((_BYTE *)this + 1320) = 1; /*0x759776*/
  return this; /*0x759775*/
}



// ==== 0x00759790  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_759790(ObjectClass *this)
{
  return Surface::CreateSurfacePalette((Surface *)this + 43);
}



// ==== 0x007597A0  ObjectClass::Render_Load_7597A0  this=ObjectClass  sig=csp ====
char __thiscall Render_Load_7597A0(TechnoClass *this)
{
  int *v2; // edi
  unsigned __int16 *v4; // eax
  unsigned __int16 v5; // dx

  v2 = &this->reloadTimer[1]; /*0x7597a4*/
  if ( RenderAudioVideoFrame((const char *)&this->estimatedHealth + 1, &this->radarFlashTimer[1], &this->reloadTimer[1]) == -1 ) /*0x7597bc*/
  {
    v4 = (unsigned __int16 *)*v2; /*0x7597ca*/
    this->threatPosed = *(_DWORD *)(*v2 + 16); /*0x7597d2*/
    this->shouldLoseTarget = v4[6]; /*0x7597de*/
    this->disguiseAsType = v4[1]; /*0x7597ea*/
    v5 = v4[2]; /*0x7597f0*/
    this->disguisedAsHouse = v5; /*0x7597f6*/
    LOBYTE(this->planningToken) = 1; /*0x7597fc*/
    return 1; /*0x7597f4*/
  }
  else
  {
    LOBYTE(this->planningToken) = 0; /*0x7597be*/
    return 0; /*0x7597c6*/
  }
}



// ==== 0x00759830  ObjectClass::Render_Load  this=ObjectClass  sig=csp ====
int __thiscall Render_Load_759830(ObjectClass *this, int a2)
{
  int result; // eax

  result = this->u32_77; /*0x759834*/
  if ( a2 != -1 ) /*0x75983d*/
    this->u32_77 = a2; /*0x75983f*/
  return result; /*0x759845*/
}



// ==== 0x00759850  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
bool __thiscall Render_Render_759850(TechnoClass *this, int a2, int a3)
{
  int v3; // eax

  v3 = a3; /*0x759850*/
  if ( a3 < 0 ) /*0x759856*/
    v3 = -1; /*0x759858*/
  return Audio_Render_7C3430(this->reloadTimer[1], a2, v3, 1u) == -1; /*0x759873*/
}



// ==== 0x00759880  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
bool __thiscall Render_Render_759880(TechnoClass *this, int a2, int a3, int a4)
{
  signed int v4; // edx
  signed int v5; // eax
  int v6; // esi

  v4 = a2; /*0x759880*/
  if ( a2 < 0 || a2 >= this->threatPosed ) /*0x75988e*/
    v4 = 0; /*0x759890*/
  v5 = a3; /*0x759892*/
  if ( a3 < 0 || a3 >= this->threatPosed ) /*0x7598a1*/
    v5 = this->threatPosed - 1; /*0x7598a9*/
  v6 = a4; /*0x7598aa*/
  if ( a4 < 0 ) /*0x7598b0*/
    v6 = -1; /*0x7598b2*/
  return SeekAudioStream(this->reloadTimer[1], v4, v5, v6, 0) == -1; /*0x7598cb*/
}



// ==== 0x007598D0  AbstractClass::updateBuildingState  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::updateBuildingState(AbstractClass *this, signed int a2)
{
  if ( a2 != *((_DWORD *)this + 321) && ProcessAudioStreamBuffer(this->needsSave, a2, 0) != -6 ) /*0x7598f2*/
    *((_DWORD *)this + 321) = a2; /*0x7598f4*/
}



// ==== 0x00759940  MovieClass::RenderLoop  this=AbstractClass  sig=csp ====
BOOL __thiscall MovieClass::RenderLoop(char *this, int a2, char a3)
{
  int v4; // edi
  unsigned int v5; // eax
  void (*v6)(void); // eax
  char v8; // [esp+12h] [ebp-26h]
  char v9; // [esp+13h] [ebp-25h]
  _BYTE v10[4]; // [esp+14h] [ebp-24h] BYREF
  MSG Msg; // [esp+1Ch] [ebp-1Ch] BYREF

  v9 = 0; /*0x759951*/
  v8 = 0; /*0x759955*/
  Render_Render_7C3690(this->needsSave); /*0x759970*/
  if ( *((_DWORD *)this + 324) != -1 ) /*0x75997c*/
  {
    Render_Render_7C3710(v10, &a2); /*0x759996*/
    if ( a2 == 1 ) /*0x7599a2*/
    {
      Voxel::BuildIndexTable(*((void **)this + 324)); /*0x7599aa*/
      if ( TestBitArray(11) ) /*0x7599b4*/
        Render_Render_7C3230(IsoTile::Decode16Bit); /*0x7599c7*/
      else
        Render_Render_7C3230(CopySHPFrameToSurface); /*0x7599d3*/
    }
    else if ( a2 == 4 ) /*0x7599d8*/
    {
      Voxel::BuildIndexTable(*((void **)this + 324)); /*0x7599e0*/
      if ( TestBitArray(11) ) /*0x7599ea*/
        Render_Render_7C3230(IsoTile::Decode8BitV2); /*0x759a03*/
    }
  }
  v4 = 0; /*0x759a0e*/
  while ( v4 >= 0 || v4 == -10 || v4 == -9 || v4 == -11 || v4 == -1 ) /*0x759a26*/
  {
    if ( v9 ) /*0x759a30*/
      return 1; /*0x759a30*/
    ++dword_AA0430; /*0x759a3f*/
    if ( GameLoopMessagePump(&Msg, 0, 0, 0, 0) && IsMessageDialog(&Msg, 0, 0, 0) ) /*0x759a5d*/
    {
      TranslateMessage(&Msg); /*0x759a6b*/
      DispatchMessageA(&Msg); /*0x759a76*/
    }
    if ( v8 == 1 ) /*0x759a81*/
    {
      if ( byte_A8ED80 ) /*0x759a89*/
      {
        v8 = 0; /*0x759a99*/
        *(this + 1360) = 0; /*0x759a9d*/
        Debug::Log(); /*0x759aa3*/
        goto LABEL_23; /*0x759aa3*/
      }
      Sleep(0x21u); /*0x759a8d*/
    }
    else
    {
LABEL_23:
      if ( byte_A8ED80 != 1 || *(this + 1360) ) /*0x759ab4*/
      {
        v8 = 1; /*0x759b2a*/
        if ( *(this + 1300) && !*(this + 1360) ) /*0x759b33*/
          ProcessAudioStreamPipeline(this->needsSave, 2, 0); /*0x759b47*/
        *(this + 1360) = 1; /*0x759b51*/
        Debug::Log(); /*0x759b58*/
      }
      else
      {
        v4 = ProcessAudioStreamPipeline(this->needsSave, 1, 0); /*0x759acd*/
        if ( v4 >= 0 ) /*0x759ad1*/
        {
          if ( *(this + 1320) ) /*0x759ad7*/
          {
            Surface::CreateSurfacePalette(this + 516); /*0x759ae5*/
            *(this + 1320) = 0; /*0x759aea*/
          }
          if ( *(_DWORD *)this ) /*0x759af0*/
          {
            v5 = MovieClass::ComputeTime(this->needsSave); /*0x759afa*/
            BinkMovie::CheckKeyframeTransition(*(_DWORD **)this, v5); /*0x759b02*/
          }
          v6 = (void (*)(void))*((_DWORD *)this + 338); /*0x759b07*/
          if ( v6 ) /*0x759b0f*/
            v6(); /*0x759b11*/
          *((_DWORD *)this + 321) = v4 + 1; /*0x759b16*/
        }
      }
      if ( !a3 && EventQueue::Process(dword_87F770) && EventQueue::Read(dword_87F770) == 2075 ) /*0x759b8d*/
        v9 = 1; /*0x759b93*/
    }
  }
  return v9 != 0; /*0x759ba3*/
}



// ==== 0x00759BC0  ObjectClass::method_759BC0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_759BC0(TechnoClass *this, signed int a2)
{
  signed int v2; // edi
  unsigned int result; // eax

  v2 = a2; /*0x759bc2*/
  if ( a2 == -1 ) /*0x759bcb*/
    v2 = this->threatPosed - 1; /*0x759bd3*/
  if ( this->empLockRemaining != v2 ) /*0x759bda*/
  {
    if ( ProcessAudioStreamBuffer(this->reloadTimer[1], v2, 0) != -6 ) /*0x759bee*/
      this->empLockRemaining = v2; /*0x759bf0*/
    this->empLockRemaining = v2; /*0x759bf6*/
  }
  MovieClass::RenderLoop((char *)this, v2, 0); /*0x759c01*/
  result = this->empLockRemaining; /*0x759c06*/
  if ( result >= this->threatPosed ) /*0x759c14*/
    this->empLockRemaining = 0; /*0x759c16*/
  return result; /*0x759c20*/
}



// ==== 0x00759C30  VQAClass::AdvanceFrame  this=AbstractClass  sig=csp ====
char __thiscall sub_759C30(char *this, _BYTE *a2)
{
  _BYTE *v2; // ebp
  int v4; // eax
  int v5; // edi
  unsigned int v6; // eax
  void (*v7)(void); // eax
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x759c34*/
  *a2 = 0; /*0x759c3b*/
  if ( !*(this + 1361) ) /*0x759c40*/
  {
    Render_Render_7C3690(this->needsSave, *((_DWORD *)this + 322)); /*0x759c56*/
    if ( *((_DWORD *)this + 324) != -1 ) /*0x759c62*/
    {
      Render_Render_7C3710(*((unsigned __int8 **)this + 128), &v10, &v9, &a2); /*0x759c78*/
      if ( a2 == (_BYTE *)1 || a2 == (_BYTE *)4 ) /*0x759c89*/
      {
        Voxel::BuildIndexTable(*((void **)this + 324)); /*0x759c91*/
        if ( a2 == (_BYTE *)1 ) /*0x759c9b*/
          Render_Render_7C3230(this->needsSave, (int)sub_7C6B70, (int)CopySHPFrameToSurface); /*0x759cad*/
      }
    }
    Debug::Log(); /*0x759cb7*/
    *(this + 1361) = 1; /*0x759cbf*/
  }
  if ( *(this + 1360) == 1 && (dword_A8D5F8 & 2) == 0 && !dword_A8EDA0 ) /*0x759cdf*/
  {
    if ( byte_A8ED80 != 1 ) /*0x759ce8*/
      goto LABEL_28; /*0x759ce8*/
    *(this + 1360) = 0; /*0x759cf3*/
    Debug::Log(); /*0x759cfa*/
  }
  if ( byte_A8ED80 == 1 && !*(this + 1360) ) /*0x759d0f*/
  {
    v4 = ProcessAudioStreamPipeline(this->needsSave, 1, 0); /*0x759d2a*/
    v5 = v4; /*0x759d2f*/
    if ( v4 < 0 ) /*0x759d33*/
    {
      if ( v4 >= -11 && (v4 <= -10 || v4 == -1) ) /*0x759d94*/
      {
        *v2 = 0; /*0x759d97*/
        return 0; /*0x759d9c*/
      }
      else
      {
        *v2 = 1; /*0x759da6*/
        return 0; /*0x759dab*/
      }
    }
    else
    {
      if ( *(this + 1320) ) /*0x759d35*/
      {
        Surface::CreateSurfacePalette(this + 516); /*0x759d45*/
        *(this + 1320) = 0; /*0x759d4a*/
      }
      if ( *(_DWORD *)this ) /*0x759d51*/
      {
        v6 = MovieClass::ComputeTime(this->needsSave); /*0x759d5c*/
        BinkMovie::CheckKeyframeTransition(*(_DWORD **)this, v6); /*0x759d64*/
      }
      v7 = (void (*)(void))*((_DWORD *)this + 338); /*0x759d69*/
      if ( v7 ) /*0x759d71*/
        v7(); /*0x759d73*/
      *((_DWORD *)this + 321) = v5 + 1; /*0x759d78*/
      return 1; /*0x759d76*/
    }
  }
LABEL_28:
  if ( !byte_B45BA4 ) /*0x759dbb*/
  {
    if ( *(this + 1300) && !*(this + 1360) ) /*0x759dc7*/
      ProcessAudioStreamPipeline(this->needsSave, 2, 0); /*0x759dde*/
    *(this + 1360) = 1; /*0x759de3*/
    byte_B45BA4 = 1; /*0x759def*/
    Debug::Log(); /*0x759df6*/
  }
  return 0; /*0x759d7e*/
}



// ==== 0x00759E10  AbstractClass::processConstruction  this=AbstractClass  sig=csp ====
char __thiscall AbstractClass::processConstruction(AbstractClass *this)
{
  char result; // al

  result = *((_BYTE *)this + 1300); /*0x759e13*/
  if ( result ) /*0x759e1b*/
  {
    result = *((_BYTE *)this + 1360); /*0x759e1d*/
    if ( !result ) /*0x759e25*/
      result = ProcessAudioStreamPipeline(this->needsSave, 2, 0); /*0x759e34*/
  }
  *((_BYTE *)this + 1360) = 1; /*0x759e39*/
  return result; /*0x759e40*/
}



// ==== 0x00759E50  AbstractClass::checkBuildProgress  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::checkBuildProgress(AbstractClass *this)
{
  *((_BYTE *)this + 1360) = 0; /*0x759e50*/
}



// ==== 0x00759E60  DSurface::FlipIfNeeded  this=DSurface  sig=csp ====
char __thiscall DSurface::FlipIfNeeded(DSurface *this)
{
  char result; // al

  result = (char)this->DSurface_field_0x514; /*0x759e60*/
  if ( result ) /*0x759e68*/
    return DSurface::Flip((DSurface *)this->DSurface_field_0x200); /*0x759e70*/
  return result; /*0x759e75*/
}



// ==== 0x00759E80  AbstractClass::finalizeConstruction  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::finalizeConstruction(AbstractClass *this)
{
  int result; // eax
  _DWORD *vtable0; // ecx

  result = AbstractClass::finalizeDestruction(this->needsSave); /*0x759e89*/
  vtable0 = this->vtable0; /*0x759e8e*/
  if ( this->vtable0 ) /*0x759e8e*/
  {
    vtable0[1] = 0; /*0x6c9d22*/
    vtable0[2] = 0; /*0x6c9d25*/
    return 0; /*0x6c9d20*/
  }
  return result; /*0x759e90*/
}



// ==== 0x00759EA0  ObjectClass::Render_Load_759EA0  this=ObjectClass  sig=csp ====
int __thiscall Render_Load_759EA0(TechnoClass *this)
{
  return this->shouldLoseTarget; /*0x759ea6*/
}



// ==== 0x00759EB0  ObjectClass::Render_Load_759EB0  this=ObjectClass  sig=csp ====
bool __thiscall Render_Load_759EB0(TechnoClass *this, int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  int v8; // edx
  int v9; // eax

  v6 = a3; /*0x759eb2*/
  if ( a3 == -1 ) /*0x759eb9*/
    v6 = *((_DWORD *)this + 328); /*0x759ebb*/
  else
    *((_DWORD *)this + 328) = a3; /*0x759ec3*/
  v7 = a4; /*0x759ec9*/
  if ( a4 == -1 ) /*0x759ed0*/
    v7 = *((_DWORD *)this + 329); /*0x759ed2*/
  else
    *((_DWORD *)this + 329) = a4; /*0x759eda*/
  v8 = a5; /*0x759ee0*/
  if ( a5 == -1 ) /*0x759ee7*/
    v8 = 0; /*0x759ee9*/
  v9 = a6; /*0x759eeb*/
  if ( a6 == -1 ) /*0x759ef2*/
    v9 = 0; /*0x759ef4*/
  return Audio_Process_7C3270(this->reloadTimer[1], a2, v6, v7, v8, v9) == -1; /*0x759f0c*/
}



// ==== 0x00759F20  ObjectClass::Render_Load_759F20  this=ObjectClass  sig=csp ====
int __thiscall Render_Load_759F20(TechnoClass *this, int a2)
{
  this->firingRadBeam = a2; /*0x759f24*/
  return a2; /*0x759f2a*/
}



// ==== 0x00759F70  MovieClass::GetWidth  this=MovieClass  sig=csp ====
int __thiscall MovieClass::GetWidth(MovieClass *this)
{
  return *((_DWORD *)this + 326); /*0x759f76*/
}



// ==== 0x00759F80  MovieClass::GetHeight  this=MovieClass  sig=csp ====
int __thiscall MovieClass::GetHeight(MovieClass *this)
{
  return *((_DWORD *)this + 327); /*0x759f86*/
}



// ==== 0x00759FB0  VoxelRenderer::InitializeBuffers  this=VoxelRenderer  sig=csp ====
BOOL __thiscall sub_759FB0(int this, int a2, _DWORD *a3, int a4)
{
  BOOL result; // eax
  bool v6; // al
  int v7; // esi
  int v8; // esi
  int v9; // esi

  result = 1; /*0x759fb7*/
  switch ( a2 ) /*0x759fc6*/
  {
    case 1: /*0x759fc6*/
    case 2: /*0x759fc6*/
      goto LABEL_13;
    case 3: /*0x759fc6*/
      v6 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)(this + 4) + 32))(this + 4, a3, 1) != 0; /*0x759fdf*/
      *(_BYTE *)(this + 112) = v6; /*0x759fe4*/
      result = !v6; /*0x759fec*/
      break; /*0x759fef*/
    case 4: /*0x759fc6*/
      (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4) + 52))(this + 4); /*0x75a0cf*/
      *(_BYTE *)(this + 112) = 0; /*0x75a0d4*/
      result = 0; /*0x75a0d2*/
      break; /*0x75a0d2*/
    case 5: /*0x759fc6*/
      v7 = a4; /*0x759ffc*/
      result = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)(this + 4) + 36))(this + 4, a3, a4) != v7; /*0x75a00c*/
      break; /*0x75a00f*/
    case 6: /*0x759fc6*/
      result = 1; /*0x75a012*/
      break; /*0x75a018*/
    case 7: /*0x759fc6*/
      result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4, a3) == 0; /*0x75a033*/
      break; /*0x75a034*/
    case 8: /*0x759fc6*/
      if ( a4 <= 0 ) /*0x75a03d*/
      {
        v9 = this + 4; /*0x75a078*/
        result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4, a3) == 0; /*0x75a086*/
        if ( !result ) /*0x75a087*/
        {
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 36))(v9, &a4, 1) != 1; /*0x75a09c*/
          if ( !result ) /*0x75a09e*/
            result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 40))(v9, -1, 1) == 0; /*0x75a0b0*/
        }
      }
      else
      {
        v8 = this + 4; /*0x75a046*/
        result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4 - 1, a3) == 0; /*0x75a055*/
        if ( !result ) /*0x75a056*/
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v8 + 36))(v8, &a4, 1) != 1; /*0x75a06c*/
      }
      break; /*0x75a06e*/
    case 9: /*0x759fc6*/
      *a3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 44))(this + 4); /*0x75a0c1*/
LABEL_13:
      result = 0; /*0x75a0c3*/
      break; /*0x75a0c3*/
    default:
      return result;
  }
  return result; /*0x759fee*/
}



// ==== 0x0075A100  sub_75A100  this=-  sig=ida-proto ====
BOOL __cdecl sub_75A100(int a1, int a2, _DWORD *a3, int a4)
{
  return VoxelRenderer::InitializeBuffers(*(_DWORD *)(a1 + 172), a2, a3, a4); /*0x75a11e*/
}



// ==== 0x0075A120  ObjectClass::method_75A120  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_75A120(int this, int a2, int *a3, int a4)
{
  BOOL result; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // eax
  int v12; // [esp-Ch] [ebp-10h]

  result = 1; /*0x75a127*/
  switch ( a2 ) /*0x75a136*/
  {
    case 1: /*0x75a136*/
    case 2: /*0x75a136*/
      goto LABEL_14;
    case 3: /*0x75a136*/
      a2 = 0; /*0x75a143*/
      a3 = 0; /*0x75a147*/
      if ( !LookupFileInfoCache((const char *)(this + 113), 0, &a3, &a2, 0) ) /*0x75a15e*/
        goto LABEL_5; /*0x75a15e*/
      v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)(this + 4) + 32))(this + 4, a3[3], 1) == 0; /*0x75a17c*/
      v7 = *(_DWORD *)(this + 4); /*0x75a17e*/
      v12 = a2; /*0x75a180*/
      *(_BYTE *)(this + 112) = !v6; /*0x75a186*/
      result = (*(int (__thiscall **)(int, int, int))(v7 + 40))(this + 4, v12, 1) == 0; /*0x75a191*/
      break; /*0x75a193*/
    case 4: /*0x75a136*/
      (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4) + 52))(this + 4); /*0x75a273*/
      *(_BYTE *)(this + 112) = 0; /*0x75a278*/
      return 0; /*0x75a276*/
    case 5: /*0x75a136*/
      v8 = a4; /*0x75a1a0*/
      return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)(this + 4) + 36))(this + 4, a3, a4) != v8; /*0x75a1b3*/
    case 6: /*0x75a136*/
LABEL_5:
      result = 1; /*0x75a1b6*/
      break; /*0x75a1bc*/
    case 7: /*0x75a136*/
      result = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4, a3) == 0; /*0x75a1d7*/
      break; /*0x75a1d8*/
    case 8: /*0x75a136*/
      if ( a4 <= 0 ) /*0x75a1e1*/
      {
        v10 = this + 4; /*0x75a21c*/
        result = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4, a3) == 0; /*0x75a22a*/
        if ( !result ) /*0x75a22b*/
        {
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v10 + 36))(v10, &a4, 1) != 1; /*0x75a240*/
          if ( !result ) /*0x75a242*/
            result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 40))(v10, -1, 1) == 0; /*0x75a254*/
        }
      }
      else
      {
        v9 = this + 4; /*0x75a1ea*/
        result = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4 - 1, a3) == 0; /*0x75a1f9*/
        if ( !result ) /*0x75a1fa*/
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 36))(v9, &a4, 1) != 1; /*0x75a210*/
      }
      break; /*0x75a212*/
    case 9: /*0x75a136*/
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 44))(this + 4); /*0x75a25e*/
      *a3 = v11; /*0x75a265*/
LABEL_14:
      result = 0; /*0x75a267*/
      break; /*0x75a267*/
    default:
      return result;
  }
  return result; /*0x75a192*/
}



// ==== 0x0075A2B0  sub_75A2B0  this=-  sig=ida-proto ====
BOOL __cdecl sub_75A2B0(int a1, int a2, int *a3, int a4)
{
  return sub_75A120(*(_DWORD *)(a1 + 172), a2, a3, a4); /*0x75a2ce*/
}



// ==== 0x0075A2F0  sub_75A2F0  this=-  sig=ida-proto ====
_DWORD *__cdecl sub_75A2F0(int a1, int a2, _DWORD *Block, size_t Size)
{
  _DWORD *result; // eax

  switch ( a2 ) /*0x75a2fc*/
  {
    case 2: /*0x75a2fc*/
      result = malloc(Size); /*0x75a308*/
      break; /*0x75a310*/
    case 3: /*0x75a2fc*/
      free(Block); /*0x75a316*/
      result = 0; /*0x75a31e*/
      break; /*0x75a320*/
    case 4: /*0x75a2fc*/
    case 5: /*0x75a2fc*/
      result = Block; /*0x75a321*/
      break; /*0x75a325*/
    case 6: /*0x75a2fc*/
      *Block = -1; /*0x75a32a*/
      goto LABEL_6; /*0x75a32a*/
    default:
LABEL_6:
      result = 0; /*0x75a330*/
      break; /*0x75a330*/
  }
  return result; /*0x75a310*/
}



// ==== 0x0075A350  sub_75A350  this=-  sig=ida-proto ====
int __cdecl sub_75A350(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  int v4; // ebx
  int i; // eax
  int result; // eax

  v4 = *(_DWORD *)(a1 + 172); /*0x75a359*/
  switch ( a2 ) /*0x75a367*/
  {
    case 2: /*0x75a367*/
      for ( i = 0; i < 256; ++i ) /*0x75a374*/
        a3[i] *= 4; /*0x75a37c*/
      qmemcpy((void *)(v4 + 516), a3, 0x300u); /*0x75a392*/
      *(_BYTE *)(v4 + 1320) = 1; /*0x75a395*/
      result = 0; /*0x75a39d*/
      break; /*0x75a3a0*/
    case 3: /*0x75a367*/
      if ( *(_DWORD *)(v4 + 1296) != -1 ) /*0x75a3a8*/
        sub_748380((unsigned __int16 *)a3, a4 >> 1); /*0x75a3b4*/
      *(_DWORD *)(v4 + 1356) = *(_DWORD *)(v4 + 1284); /*0x75a3c1*/
      result = 0; /*0x75a3bf*/
      break; /*0x75a3c8*/
    case 6: /*0x75a367*/
      result = (*(int (**)(void))(v4 + 1344))(); /*0x75a3c9*/
      break; /*0x75a3d0*/
    case 7: /*0x75a367*/
      (*(void (**)(void))(v4 + 1348))(); /*0x75a3d1*/
      goto LABEL_10; /*0x75a3d1*/
    default:
LABEL_10:
      result = 0; /*0x75a3d7*/
      break; /*0x75a3d7*/
  }
  return result; /*0x75a39f*/
}



// ==== 0x0075A400  ReturnNull2  this=-  sig=ida-proto ====
int ReturnNull2()
{
  return 0; /*0x75a402*/
}



// ==== 0x0075A410  nullsub_257  this=-  sig=ida-proto ====
void nullsub_257()
{
  ; /*0x75a410*/
}



// ==== 0x0075A420  nullsub_258  this=-  sig=ida-proto ====
void nullsub_258()
{
  ; /*0x75a420*/
}



// ==== 0x0075A430  _DynamicVectorClass_PAVMovieHandle::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_MovieHandle::Destroy(_DynamicVectorClass_PAVMovieHandle *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x75a436*/
  this->m_10 = 0; /*0x75a439*/
  if ( v2 && BYTE1(this->m_C) ) /*0x75a440*/
  {
    __3_YAXPAX_Z(v2); /*0x75a446*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75a44e*/
  }
  BYTE1(this->m_C) = 0; /*0x75a451*/
  this->m_8 = 0; /*0x75a454*/
}



// ==== 0x0075A460  _DynamicVectorClass_PAVMovieHandle::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MovieHandle::GetItemIndex(_DynamicVectorClass_PAVMovieHandle *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x75a460*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x75a475*/
  else
    return 0; /*0x75a467*/
}



// ==== 0x0075A480  _VectorClass_PAVMovieHandle::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MovieHandle::Get(_VectorClass_PAVMovieHandle *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x75a48a*/
}



// ==== 0x0075A490  _VectorClass_PAVMovieHandle::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MovieHandle::Add(_VectorClass_PAVMovieHandle *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x75a492*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x75a49d*/
  {
    v3 = 0; /*0x75a49f*/
    if ( m_8 <= 0 ) /*0x75a4a3*/
      return 1; /*0x75a4c3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x75a4a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x75a4ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x75a4b4*/
    {
      ++v3; /*0x75a4b6*/
      ++v4; /*0x75a4b7*/
      if ( v3 >= m_8 ) /*0x75a4bc*/
        return 1; /*0x75a4bc*/
    }
  }
  return 0; /*0x75a4be*/
}



// ==== 0x0075A4D0  _VectorClass_PAVMovieHandle::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MovieHandle::Release(_VectorClass_PAVMovieHandle *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x75a4dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x75a4e6*/
    if ( a3 ) /*0x75a4ec*/
      v4 = a3; /*0x75a502*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75a4fe*/
    LOBYTE(this->m_C) = 1; /*0x75a506*/
    if ( v4 ) /*0x75a50a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x75a515*/
      {
        m_8 = this->m_8; /*0x75a51c*/
        if ( a2 < m_8 ) /*0x75a521*/
          m_8 = a2; /*0x75a523*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x75a529*/
          ++i; /*0x75a52e*/
        if ( BYTE1(this->m_C) ) /*0x75a53b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x75a546*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x75a54e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x75a557*/
      this->m_8 = a2; /*0x75a55f*/
      BYTE1(this->m_C) = a3 == 0; /*0x75a562*/
      return 1; /*0x75a568*/
    }
    else
    {
      return 0; /*0x75a50f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMovieHandle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x75a572*/
    return 1; /*0x75a578*/
  }
}



// ==== 0x0075A580  _VectorClass_PAVMovieHandle::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MovieHandle::Remove(_VectorClass_PAVMovieHandle *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x75a58d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x75a593*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75a59b*/
  }
  BYTE1(this->m_C) = 0; /*0x75a59e*/
  this->m_8 = 0; /*0x75a5a1*/
}



// ==== 0x0075A5B0  _VectorClass_PAVMovieHandle::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MovieHandle::GetSize(_VectorClass_PAVMovieHandle *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x75a5b0*/
    return 0; /*0x75a5b8*/
  m_8 = this->m_8; /*0x75a5be*/
  result = 0; /*0x75a5c1*/
  if ( m_8 <= 0 ) /*0x75a5c5*/
    return -1; /*0x75a5dc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x75a5cb*/
  {
    if ( ++result >= m_8 ) /*0x75a5da*/
      return -1; /*0x75a5da*/
  }
  return result; /*0x75a5ba*/
}



// ==== 0x0075A5F0  _VectorClass_PAVMovieHandle::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MovieHandle::GetCapacity(_VectorClass_PAVMovieHandle *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x75a5f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x75a605*/
  else
    return 0; /*0x75a5f7*/
}



// ==== 0x0075A610  _DynamicVectorClass_PAVMovieHandle::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_MovieHandle::SetCapacity(_DynamicVectorClass_PAVMovieHandle *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x75a61c*/
  {
    LOBYTE(this->m_C) = 0; /*0x75a622*/
    if ( a3 ) /*0x75a628*/
      v4 = a3; /*0x75a63e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75a63a*/
    LOBYTE(this->m_C) = 1; /*0x75a642*/
    if ( !v4 ) /*0x75a646*/
      return 0; /*0x75a6ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x75a648*/
    {
      m_8 = this->m_8; /*0x75a64f*/
      if ( a2 < m_8 ) /*0x75a654*/
        m_8 = a2; /*0x75a656*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x75a65c*/
        ++i; /*0x75a661*/
      if ( BYTE1(this->m_C) ) /*0x75a66e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x75a679*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x75a681*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x75a68a*/
    this->m_8 = a2; /*0x75a692*/
    BYTE1(this->m_C) = a3 == 0; /*0x75a695*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMovieHandle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x75a69e*/
  }
  v7 = this->m_8; /*0x75a6a1*/
  if ( v7 < this->m_10 ) /*0x75a6a9*/
    this->m_10 = v7; /*0x75a6ab*/
  return 1; /*0x75a6ae*/
}



// ==== 0x0075A6C0  _DynamicVectorClass_PAVMovieHandle::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_MovieHandle::FindItemIndex(_DynamicVectorClass_PAVMovieHandle *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x75a6c0*/
  result = 0; /*0x75a6c3*/
  if ( m_10 <= 0 ) /*0x75a6c8*/
    return -1; /*0x75a6df*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x75a6ce*/
  {
    if ( ++result >= m_10 ) /*0x75a6dd*/
      return -1; /*0x75a6dd*/
  }
  return result; /*0x75a6e2*/
}



// ==== 0x0075A6F0  _VectorClass_PAVMovieHandle::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MovieHandle::QueryInterface(_VectorClass_PAVMovieHandle *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x75a6f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MovieHandle *>::`vftable'; /*0x75a6f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x75a700*/
  {
    __3_YAXPAX_Z(v3); /*0x75a708*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75a710*/
  }
  BYTE1(this->m_C) = 0; /*0x75a71b*/
  this->m_8 = 0; /*0x75a721*/
  if ( (a2 & 1) != 0 ) /*0x75a728*/
    __3_YAXPAX_Z(this); /*0x75a72b*/
  return this->__pad_0; /*0x75a735*/
}



// ==== 0x0075A740  _DynamicVectorClass_PAVMovieHandle::Constructor_VectorClass_MovieHandle___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MovieHandle::Constructor_VectorClass_MovieHandle___(
        _DynamicVectorClass_PAVMovieHandle *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x75a743*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MovieHandle *>::`vftable'; /*0x75a746*/
  if ( v3 && BYTE1(this->m_C) ) /*0x75a750*/
  {
    __3_YAXPAX_Z(v3); /*0x75a758*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75a760*/
  }
  BYTE1(this->m_C) = 0; /*0x75a76b*/
  this->m_8 = 0; /*0x75a771*/
  if ( (a2 & 1) != 0 ) /*0x75a778*/
    __3_YAXPAX_Z(this); /*0x75a77b*/
  return this->__pad_0; /*0x75a785*/
}



// ==== 0x0075A790  AnimSystem::Init  this=AnimSystem  sig=ida-proto ====
char AnimSystem_Init()
{
  int i; // edx
  int v1; // eax
  char v2; // cl
  char result; // al

  for ( i = 0; i < 18; ++i ) /*0x75a791*/
  {
    v1 = i >> 3; /*0x75a79e*/
    v2 = ~(1 << (i & 7)) & byte_B45BA8[i >> 3]; /*0x75a7a9*/
    byte_B45BA8[v1] = v2; /*0x75a7af*/
  }
  result = byte_B45BA8[0] | 0x40; /*0x75a7bd*/
  byte_B45BA8[0] |= 0x40u; /*0x75a7bf*/
  return result; /*0x75a7bc*/
}



// ==== 0x0075A7D0  ResetAnimSystem  this=-  sig=ida-proto ====
int __fastcall AnimSystem_Reset(int a1)
{
  byte_B45BA8[a1 >> 3] |= 1 << (a1 & 7); /*0x75a7dc*/
  return a1 >> 3; /*0x75a7e2*/
}



// ==== 0x0075A810  TestBitArray  this=-  sig=csp ====
int __fastcall TestBitArray(int a1)
{
  int result; // eax

  result = a1 >> 3; /*0x75a81b*/
  LOBYTE(result) = ((unsigned __int8)(1 << (a1 & 7)) & (unsigned __int8)byte_B45BA8[a1 >> 3]) != 0; /*0x75a824*/
  return result; /*0x75a827*/
}



// ==== 0x0075A880  sub_75A880  this=-  sig=ida-proto ====
int sub_75A880()
{
  dword_B45BB8 = 0; /*0x75a882*/
  dword_B45BBC = 0; /*0x75a887*/
  dword_B45BC0 = 0; /*0x75a88c*/
  dword_B45BC4 = 0; /*0x75a891*/
  return 0; /*0x75a896*/
}



// ==== 0x0075A8A0  sub_75A8A0  this=-  sig=ida-proto ====
void sub_75A8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75a8ac*/
  dbl_B45BD0 = Math::Sqrt(v0 + v0); /*0x75a8be*/
}



// ==== 0x0075A8D0  sub_75A8D0  this=-  sig=ida-proto ====
void sub_75A8D0()
{
  dbl_B45C20 = dbl_B45BD0 / 60.0; /*0x75a8dc*/
}



// ==== 0x0075A8F0  sub_75A8F0  this=-  sig=ida-proto ====
void sub_75A8F0()
{
  dbl_B45C08 = 1.0 / dbl_B45C20; /*0x75a8fc*/
}



// ==== 0x0075A910  sub_75A910  this=-  sig=ida-proto ====
void sub_75A910()
{
  dbl_B45C00 = 0.0174532925199433 * 45.0; /*0x75a91c*/
}



// ==== 0x0075A930  sub_75A930  this=-  sig=ida-proto ====
void sub_75A930()
{
  dbl_B45BD8 = 0.0174532925199433 * 60.0; /*0x75a93c*/
}



// ==== 0x0075A950  sub_75A950  this=-  sig=ida-proto ====
void sub_75A950()
{
  dbl_B45BB0 = 0.0174532925199433 * 90.0; /*0x75a95c*/
}



// ==== 0x0075A970  sub_75A970  this=-  sig=ida-proto ====
__int64 sub_75A970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45BB0 - dbl_B45BD8); /*0x75a982*/
  result = Math::RoundToInt(v0 * dbl_B45BD0 * 0.5); /*0x75a996*/
  dword_B45C28 = result; /*0x75a99b*/
  return result; /*0x75a9a0*/
}



// ==== 0x0075A9B0  sub_75A9B0  this=-  sig=ida-proto ====
void sub_75A9B0()
{
  dbl_B45BE0 = Math::ArcTan((double)dword_B45C28 * 0.00390625); /*0x75a9c7*/
}



// ==== 0x0075A9E0  sub_75A9E0  this=-  sig=ida-proto ====
void sub_75A9E0()
{
  dbl_B45BF8 = Math::ArcTan((double)(2 * dword_B45C28) / dbl_B45BD0); /*0x75aa02*/
}



// ==== 0x0075AA10  sub_75AA10  this=-  sig=ida-proto ====
__int64 sub_75AA10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45C28) + 0.5); /*0x75aa2b*/
  dword_B45C1C = result; /*0x75aa30*/
  return result; /*0x75aa36*/
}



// ==== 0x0075AA40  sub_75AA40  this=-  sig=ida-proto ====
int sub_75AA40()
{
  word_B45BC8 = 0; /*0x75aa42*/
  word_B45BCA = 0; /*0x75aa48*/
  return 0; /*0x75aa4e*/
}



// ==== 0x0075AA50  sub_75AA50  this=-  sig=ida-proto ====
int sub_75AA50()
{
  g_AsyncMovieState = 0; /*0x75aa52*/
  g_MovieFrameState1 = 0; /*0x75aa57*/
  g_MovieFrameState2 = 0; /*0x75aa5c*/
  return 0; /*0x75aa61*/
}



// ==== 0x0075AA70  sub_75AA70  this=-  sig=ida-proto ====
int sub_75AA70()
{
  dword_B45C18 = 0; /*0x75aa75*/
  dword_B45C10 = 128; /*0x75aa7f*/
  dword_B45C14 = 128; /*0x75aa84*/
  return 128; /*0x75aa89*/
}



// ==== 0x0075AA90  VoxelAnimClass::Reset  this=WalkLocomotionClass  sig=csp ====
int __thiscall VoxelAnimClass::Reset(VoxelAnimClass *this)
{
  LocomotionClass::Init((LocomotionClass *)this); /*0x75aa93*/
  this->VoxelAnimClass_field_0x1C[0] = g_AsyncMovieState; /*0x75aaa1*/
  *(_DWORD *)this->__pad_20 = g_MovieFrameState1; /*0x75aaaa*/
  *(_DWORD *)&this->__pad_20[4] = g_MovieFrameState2; /*0x75aab6*/
  *(_DWORD *)&this->__pad_20[8] = g_AsyncMovieState; /*0x75aabe*/
  *(_DWORD *)&this->__pad_20[12] = g_MovieFrameState1; /*0x75aac6*/
  *(_DWORD *)&this->__pad_20[16] = g_MovieFrameState2; /*0x75aace*/
  this->__pad_20[20] = 0; /*0x75aad3*/
  this->__pad_20[21] = 0; /*0x75aad6*/
  this->__pad_20[22] = 0; /*0x75aad9*/
  *(_DWORD *)&this->__pad_20[24] = 0; /*0x75aadc*/
  this->VoxelAnimClass_field_0x0 = &WalkLocomotionClass::`vftable'; /*0x75aadf*/
  this->VoxelAnimClass_field_0x4[0] = (int)&WalkLocomotionClass::`vftable'; /*0x75aae5*/
  *(_DWORD *)&this->__pad_C[12] = &WalkLocomotionClass::`vftable'; /*0x75aaec*/
  return (int)this; /*0x75aaf5*/
}



// ==== 0x0075AB30  JumpjetLocomotionClass::SmallStub_75AB30  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SmallStub_75AB30(JumpjetLocomotionClass *this)
{
  return LOBYTE(this->Wobbles); /*0x75ab37*/
}



// ==== 0x0075AB40  WalkLocomotionClass::ComputeFloatExpression_4  this=WalkLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::ComputeFloatExpression_4(WalkLocomotionClass *this)
{
  return (*(unsigned __int8 (__stdcall **)(WalkLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x75ab8c*/
      && *(double *)this->?->currentSpeed_percentage > 0.0
      && (this->Dest[2] != g_AsyncMovieState
       || this->HeadToCoord[0] != g_MovieFrameState1
       || this->HeadToCoord[1] != g_MovieFrameState2);
}



// ==== 0x0075ABA0  JumpjetLocomotionClass::GetMovementCoordinate_2  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetMovementCoordinate_2(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int Speed; // edx
  float Climb; // esi
  float *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x75aba9*/
  {
    result = a2; /*0x75abb0*/
    Speed = this->Speed; /*0x75abb7*/
    Climb = this->Climb; /*0x75abba*/
    v5 = (float *)a2; /*0x75abbd*/
    *a2 = this->TurnRate; /*0x75abbf*/
  }
  else
  {
    result = a2; /*0x75abcc*/
    Speed = g_MovieFrameState1; /*0x75abd6*/
    Climb = *(float *)&g_MovieFrameState2; /*0x75abdc*/
    v5 = (float *)a2; /*0x75abe2*/
    *a2 = g_AsyncMovieState; /*0x75abe4*/
  }
  *((_DWORD *)v5 + 1) = Speed; /*0x75abc1*/
  v5[2] = Climb; /*0x75abc4*/
  return result; /*0x75abc7*/
}



// ==== 0x0075AC00  JumpjetLocomotionClass::GetRenderCoordinate_2  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetRenderCoordinate_2(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int Height; // edx
  float Accel; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( LODWORD(this->Crash) == g_AsyncMovieState /*0x75ac2b*/
    && this->Height == g_MovieFrameState1
    && LODWORD(this->Accel) == g_MovieFrameState2 )
  {
    Owner = this->?; /*0x75ac4b*/
    location = Owner->?; /*0x75ac54*/
    v7 = Owner->?[0]; /*0x75ac56*/
    v8 = Owner->?[1]; /*0x75ac58*/
    v9 = location[2]; /*0x75ac5b*/
    *a2 = v7; /*0x75ac64*/
    a2[1] = v8; /*0x75ac66*/
    a2[2] = v9; /*0x75ac69*/
    return a2; /*0x75ac5e*/
  }
  else
  {
    Height = this->Height; /*0x75ac34*/
    Accel = this->Accel; /*0x75ac37*/
    *a2 = LODWORD(this->Crash); /*0x75ac3c*/
    a2[1] = Height; /*0x75ac3e*/
    *((float *)a2 + 2) = Accel; /*0x75ac41*/
    return a2; /*0x75ac44*/
  }
}



// ==== 0x0075AC80  WalkLocomotionClass::DrawVoxelAnimation  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DrawVoxelAnimation(WalkLocomotionClass *this)
{
  BYTE1(this->HeadToCoord[2]) = 1; /*0x75ac8a*/
  VoxelAnim::Draw((int)this - 4, (_DWORD *)1); /*0x75ac8e*/
  BYTE1(this->HeadToCoord[2]) = 0; /*0x75ac93*/
  return (*(int (__stdcall **)(WalkLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x75ac9d*/
}



// ==== 0x0075ACB0  WalkLocomotionClass::ConvertCoordToCell_4  this=WalkLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::ConvertCoordToCell_4(WalkLocomotionClass *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx

  LOBYTE(v4) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x75acbd*/
  if ( !(_BYTE)v4 ) /*0x75acc5*/
  {
    LOBYTE(v4) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x75acd0*/
    if ( !(_BYTE)v4 ) /*0x75acd8*/
    {
      LOBYTE(v4) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x75ace3*/
      if ( !(_BYTE)v4 ) /*0x75aceb*/
      {
        v4 = a2; /*0x75acf1*/
        v5 = a3; /*0x75acf5*/
        v6 = a4; /*0x75acf9*/
        *(_DWORD *)this->__pad_18 = a2; /*0x75ad00*/
        this->Dest[0] = v5; /*0x75ad03*/
        this->Dest[1] = v6; /*0x75ad06*/
        if ( v4 == g_AsyncMovieState && v5 == g_MovieFrameState1 && v6 == g_MovieFrameState2 ) /*0x75ad25*/
        {
          if ( this->Dest[2] == g_AsyncMovieState /*0x75ad72*/
            && this->HeadToCoord[0] == g_MovieFrameState1
            && this->HeadToCoord[1] == g_MovieFrameState2 )
          {
            LOBYTE(v4) = this->HeadToCoord[2]; /*0x75ad74*/
            LOBYTE(this->HeadToCoord[2]) = 0; /*0x75ad77*/
            if ( (_BYTE)v4 ) /*0x75ad7d*/
              LOBYTE(v4) = (*((char (__thiscall **)(FootClass *))this->?->TechnoClass + 339))(this->?); /*0x75ad84*/
          }
        }
        else
        {
          a3 = v5; /*0x75ad27*/
          a2 = v4; /*0x75ad35*/
          a4 = v6; /*0x75ad39*/
          v4 = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x75ad3d*/
          if ( (*(_DWORD *)(v4 + 320) & 0x100) != 0 ) /*0x75ad4b*/
          {
            v4 = Coord::ScaleToScreenY((Coord *)0x3C); /*0x75ad52*/
            this->Dest[1] += v4; /*0x75ad57*/
          }
          LOBYTE(this->HeadToCoord[2]) = 1; /*0x75ad5a*/
        }
      }
    }
  }
  return v4; /*0x75ad5e*/
}



// ==== 0x0075ADA0  WalkLocomotionClass::DispatchVirtualCall_8  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_8(WalkLocomotionClass *this)
{
  int result; // eax

  result = (int)this; /*0x75ada0*/
  *(_DWORD *)this->__pad_18 = g_AsyncMovieState; /*0x75adad*/
  this->Dest[0] = g_MovieFrameState1; /*0x75adb6*/
  this->Dest[1] = g_MovieFrameState2; /*0x75adbf*/
  if ( this->Dest[2] == g_AsyncMovieState /*0x75ade5*/
    && this->HeadToCoord[0] == g_MovieFrameState1
    && this->HeadToCoord[1] == g_MovieFrameState2 )
  {
    LOBYTE(this->HeadToCoord[2]) = 0; /*0x75ade9*/
    BYTE2(this->HeadToCoord[2]) = 0; /*0x75adec*/
    return (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 339))(this->?); /*0x75adf6*/
  }
  return result; /*0x75adfc*/
}



// ==== 0x0075AE00  WalkLocomotionClass::SynchronizeFacingDirection_1  this=WalkLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SynchronizeFacingDirection_1(WalkLocomotionClass *this, int a2)
{
  return FacingClass::Set_SyncLog((char *)this->?->?, &a2); /*0x75ae1f*/
}



// ==== 0x0075AE30  WalkLocomotionClass::DispatchVirtualCall_9  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_9(WalkLocomotionClass *this, int a2, int a3, int a4)
{
  char v4; // bl
  int result; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  v6[0] = a2; /*0x75ae45*/
  v4 = this->HeadToCoord[2]; /*0x75ae4d*/
  v6[1] = a3; /*0x75ae51*/
  v6[2] = a4; /*0x75ae59*/
  Voxel::DrawHelper((Voxel *)((char *)this - 4), v6); /*0x75ae5d*/
  result = g_AsyncMovieState; /*0x75ae62*/
  if ( this->Dest[2] == g_AsyncMovieState /*0x75ae95*/
    && this->HeadToCoord[0] == g_MovieFrameState1
    && this->HeadToCoord[1] == g_MovieFrameState2
    && *(_DWORD *)this->__pad_18 == g_AsyncMovieState
    && this->Dest[0] == g_MovieFrameState1
    && this->Dest[1] == g_MovieFrameState2 )
  {
    LOBYTE(this->HeadToCoord[2]) = 0; /*0x75ae99*/
    if ( v4 ) /*0x75ae9d*/
      return (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 339))(this->?); /*0x75aea4*/
  }
  return result; /*0x75aeaa*/
}



// ==== 0x0075AEC0  VoxelAnim::Draw  this=VoxelAnim  sig=csp ====
char __thiscall VoxelAnim_Draw(int this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  _DWORD *v13; // eax
  int *v14; // eax
  _BYTE *v15; // ecx
  int v16; // eax
  int v17; // ecx
  _BYTE *v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // edx
  _DWORD *v21; // esi
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // ecx
  _DWORD *v28; // eax
  _DWORD *v29; // edx
  _DWORD *v30; // esi
  int v31; // edx
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // eax
  int *v35; // eax
  int v36; // eax
  int v37; // ecx
  _DWORD *v38; // edx
  int v39; // ecx
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // edx
  int v43; // edx
  int v44; // esi
  int v45; // edi
  _DWORD *v46; // eax
  int v47; // ecx
  _DWORD *v48; // esi
  int v49; // edx
  int v50; // eax
  _DWORD *v5... [35635 chars total]



// ==== 0x0075C240  Voxel::DrawHelper  this=Voxel  sig=csp ====
char __thiscall Voxel::DrawHelper(Voxel *this, _DWORD *a2)
{
  int *Voxel_field_0x28; // ebx
  int *Voxel_field_0xC; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  _WORD *v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // ebx
  _WORD *v14; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  CellClass *v17; // eax
  int v18; // eax
  _DWORD *v19; // ebp
  CellClass *v20; // eax
  int v21; // ebx
  CellClass *v22; // eax
  int *v23; // eax
  signed int v24; // edi
  CellClass *v25; // eax
  int *v26; // eax
  CellClass *v27; // eax
  int v28; // eax
  int *v30; // ecx
  int v31; // [esp-4h] [ebp-2Ch]
  char v32[4]; // [esp+Ch] [ebp-1Ch]
  char v33; // [esp+Ch] [ebp-1Ch]
  __int16 v34; // [esp+Eh] [ebp-1Ah]
  int v35; // [esp+10h] [ebp-18h] BYREF
  int v36; // [esp+14h] [ebp-14h]
  int v37; // [esp+18h] [ebp-10h]
  _DWORD v38[3]; // [esp+1Ch] [ebp-Ch] BYREF
  char v39; // [esp+2Ch] [ebp+4h]

  Voxel_field_0x28 = this->Voxel_field_0x28; /*0x75c251*/
  if ( this->Voxel_field_0x28[0] == g_AsyncMovieState /*0x75c26e*/
    && this->Voxel_field_0x2C[0] == g_MovieFrameState1
    && *(_DWORD *)this->__pad_30 == g_MovieFrameState2 )
  {
    Voxel_field_0xC = (int *)this->Voxel_field_0xC; /*0x75c278*/
    v35 = Voxel_field_0xC[39]; /*0x75c287*/
    v36 = Voxel_field_0xC[40]; /*0x75c28e*/
    v37 = Voxel_field_0xC[41]; /*0x75c295*/
    (*(void (__stdcall **)(int *))(*Voxel_field_0xC + 244))(&v35); /*0x75c2a0*/
  }
  else
  {
    (*(void (__stdcall **)(int *))(*(_DWORD *)this->Voxel_field_0xC + 244))(this->Voxel_field_0x28); /*0x75c276*/
  }
  v39 = 0; /*0x75c2aa*/
  v38[0] = *a2; /*0x75c2b3*/
  v6 = *a2; /*0x75c2b7*/
  v38[1] = a2[1]; /*0x75c2bc*/
  v38[2] = a2[2]; /*0x75c2c3*/
  if ( v6 == g_AsyncMovieState && a2[1] == g_MovieFrameState1 && a2[2] == g_MovieFrameState2 )
  {
    *Voxel_field_0x28 = *a2; /*0x75c5b7*/
    this->Voxel_field_0x2C[0] = a2[1]; /*0x75c5bc*/
    *(_DWORD *)this->__pad_30 = a2[2]; /*0x75c5c2*/
  }
  else
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 8 /*0x75c33c*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 9
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 7
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 11
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 25 )
    {
      v7 = this->Voxel_field_0xC; /*0x75c342*/
      v8 = *(_DWORD *)(v7 + 1444); /*0x75c345*/
      if ( v8 ) /*0x75c34d*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 44))(*(_DWORD *)(v7 + 1444)) == 1 ) /*0x75c359*/
        {
          v34 = a2[1] / 256; /*0x75c37e*/
          v9 = *a2 / 256; /*0x75c385*/
          v10 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v8 + 440))(v8, &v35); /*0x75c388*/
          if ( *v10 == (_WORD)v9 && v10[1] == v34 ) /*0x75c39c*/
            v39 = 1; /*0x75c39e*/
        }
      }
      v11 = *(_DWORD *)(this->Voxel_field_0xC + 1444); /*0x75c3a6*/
      *(_DWORD *)v32 = v11; /*0x75c3ae*/
      if ( v11 ) /*0x75c3b2*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 ) /*0x75c3bc*/
        {
          v12 = *a2 / 256; /*0x75c3e4*/
          v13 = a2[1] / 256; /*0x75c3e7*/
          v14 = (_WORD *)(*(int (__thiscall **)(char *, int *))(**(_DWORD **)v32 + 440))(*(char **)v32, &v35); /*0x75c3ea*/
          if ( *v14 == (_WORD)v12 && v14[1] == (_WORD)v13 ) /*0x75c3f9*/
            v39 = 1; /*0x75c3fb*/
        }
      }
      v15 = this->Voxel_field_0xC; /*0x75c400*/
      v16 = *(_DWORD **)(v15 + 1444); /*0x75c403*/
      if ( v16 ) /*0x75c40b*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(*v16 + 44))(*(_DWORD *)(v15 + 1444)) == 6 ) /*0x75c417*/
        {
          v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x75c41f*/
          if ( Cell::IsBridge((Cell *)v17) == v16 ) /*0x75c42d*/
            v39 = 1; /*0x75c42f*/
        }
      }
    }
    v18 = *(_DWORD *)(this->Voxel_field_0xC + 732); /*0x75c439*/
    if ( v18 )
    {
      if ( *(_DWORD *)(v18 + 728) )
      {
        v19 = (_DWORD *)this->Voxel_field_0xC; /*0x75c44b*/
        v35 = 0; /*0x75c44f*/
        v36 = 0; /*0x75c453*/
        v20 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x75c463*/
        if ( Object::FindClosestObjectCell((Object *)v20, &v35, 0, 0) == v19[183] )
        {
          v21 = v19 ? ((*(int (__thiscall **)(_DWORD *))(*v19 + 44))(v19) == 15 ? (unsigned int)v19 : 0) : 0;
          v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x75c49a*/
          if ( BuildingClass::CheckBridge(*(BuildingClass **)(*(_DWORD *)(this->Voxel_field_0xC + 732) + 728), v21, v22) ) /*0x75c4b0*/
            v39 = 1; /*0x75c4b9*/
        }
      }
    }
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v38)->flags[0] & 0x100) == 0 /*0x75c513*/
      || (v23 = (int *)(this->Voxel_field_0xC + 156),
          v35 = *v23,
          v36 = v23[1],
          v24 = v23[2],
          v33 = 1,
          v24 <= (int)(3 * dword_B45C28 + Cell::GetGroundHeight(v38))) )
    {
      v33 = 0; /*0x75c515*/
    }
    v25 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v38); /*0x75c53a*/
    v26 = ObjectPlacement::CalcPosition((ObjectPlacement *)v25, &v35, v38, v39, v33, 0); /*0x75c541*/
    Voxel_field_0x28 = this->Voxel_field_0x28; /*0x75c548*/
    this->Voxel_field_0x28[0] = *v26; /*0x75c54d*/
    this->Voxel_field_0x2C[0] = v26[1]; /*0x75c552*/
    v31 = this->Voxel_field_0xC; /*0x75c55b*/
    *(_DWORD *)this->__pad_30 = v26[2]; /*0x75c562*/
    v27 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this->Voxel_field_0x28); /*0x75c565*/
    if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v27, v31) ) /*0x75c56c*/
    {
      v28 = this->Voxel_field_0xC; /*0x75c575*/
      if ( !*(_BYTE *)(v28 + 129) ) /*0x75c578*/
      {
        *Voxel_field_0x28 = g_AsyncMovieState; /*0x75c58a*/
        this->Voxel_field_0x2C[0] = g_MovieFrameState1; /*0x75c592*/
        *(_DWORD *)this->__pad_30 = g_MovieFrameState2; /*0x75c59b*/
        if ( !*(_BYTE *)(v28 + 144) ) /*0x75c59e*/
          return 0; /*0x75c5b0*/
      }
    }
  }
  if ( *Voxel_field_0x28 == g_AsyncMovieState /*0x75c5e7*/
    && Voxel_field_0x28[1] == g_MovieFrameState1
    && Voxel_field_0x28[2] == g_MovieFrameState2 )
  {
    v30 = (int *)this->Voxel_field_0xC; /*0x75c602*/
    v35 = v30[39]; /*0x75c611*/
    v36 = v30[40]; /*0x75c618*/
    v37 = v30[41]; /*0x75c61f*/
    (*(void (__thiscall **)(int *, int *))(*v30 + 240))(v30, &v35); /*0x75c62a*/
    return 0; /*0x75c632*/
  }
  else
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)this->Voxel_field_0xC + 240))( /*0x75c5f1*/
      this->Voxel_field_0xC,
      Voxel_field_0x28);
    return 1; /*0x75c5f9*/
  }
}



// ==== 0x0075C640  WalkLocomotionClass::ddtor  this=WalkLocomotionClass  sig=csp ====
int __stdcall WalkLocomotionClass::ddtor(WalkLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x75c646*/
    return -2147467261; /*0x75c648*/
  *(IID *)a2 = g_CLSID_WalkLocomotion; /*0x75c656*/
  a2[3] = unk_7E9A6C; /*0x75c670*/
  return 0; /*0x75c64d*/
}



// ==== 0x0075C680  WalkLocomotionClass::BeginMove  this=WalkLocomotionClass  sig=csp ====
int __stdcall WalkLocomotionClass::BeginMove(WalkLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x75c687*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x75c692*/
  if ( v3 < 0 ) /*0x75c696*/
    return v3; /*0x75c696*/
  if ( this ) /*0x75c69a*/
  {
    this->Piggybackee = 0; /*0x75c69c*/
    *(_DWORD *)this->LocomotionClass = &WalkLocomotionClass::`vftable'; /*0x75c6a3*/
    *(_DWORD *)&this->LocomotionClass[4] = &WalkLocomotionClass::`vftable'; /*0x75c6a9*/
    *(_DWORD *)this->__pad_18 = &WalkLocomotionClass::`vftable'; /*0x75c6b0*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x75c6c3*/
  if ( !(_BYTE)pStm ) /*0x75c6cc*/
    return v3; /*0x75c6f8*/
  Piggybackee = this->Piggybackee; /*0x75c6ce*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x75c6d1*/
  if ( Piggybackee ) /*0x75c6d6*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x75c6db*/
  *p_Piggybackee = 0; /*0x75c6e5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x75c6f1*/
}



// ==== 0x0075C700  WalkLocomotionClass::LoadFromStream  this=WalkLocomotionClass  sig=csp ====
int __stdcall WalkLocomotionClass::LoadFromStream(WalkLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  WalkLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x75c706*/
  v4 = this; /*0x75c70b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x75c717*/
  if ( IPersistStream < 0 ) /*0x75c71b*/
    return IPersistStream; /*0x75c71b*/
  if ( !v4->Piggybackee ) /*0x75c726*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x75c7c3*/
    LOBYTE(a3) = 0; /*0x75c7cf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x75c7d4*/
    return IPersistStream; /*0x75c7d8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x75c72c*/
  LOBYTE(a3) = 1; /*0x75c738*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x75c73d*/
  Piggybackee = v4->Piggybackee; /*0x75c740*/
  pPStm = 0; /*0x75c743*/
  if ( Piggybackee ) /*0x75c74d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, WalkLocomotionClass **))Piggybackee)( /*0x75c75e*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x75c762*/
    {
      v9 = (int *)this; /*0x75c77b*/
      if ( pPStm ) /*0x75c781*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x75c786*/
      pPStm = v9; /*0x75c789*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x75c768*/
      pPStm = 0; /*0x75c76d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x75c797*/
      WinAPI::Wrapper(v8); /*0x75c79a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x75c7ab*/
  if ( pPStm ) /*0x75c7b3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x75c7b8*/
  return v10; /*0x75c7bd*/
}



// ==== 0x0075C7E0  WalkLocomotionClass::SmallStub_75C7E0  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_75C7E0(WalkLocomotionClass *this)
{
  return 2; /*0x75c7e5*/
}



// ==== 0x0075C7F0  WalkLocomotionClass::QueryInterface  this=WalkLocomotionClass  sig=csp ====
int __stdcall WalkLocomotionClass::QueryInterface(WalkLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x75c802*/
  if ( result == -2147467262 ) /*0x75c80c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x75c81b*/
    {
      if ( this ) /*0x75c822*/
        pad_18 = this->__pad_18; /*0x75c824*/
      else
        pad_18 = 0; /*0x75c829*/
      *a3 = (int)pad_18; /*0x75c82b*/
    }
    if ( *a3 ) /*0x75c82e*/
    {
      (*(void (__stdcall **)(WalkLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x75c842*/
      return 0; /*0x75c845*/
    }
    else
    {
      return -2147467262; /*0x75c836*/
    }
  }
  return result; /*0x75c834*/
}



// ==== 0x0075C850  JumpjetLocomotionClass::StubReturnZero_22  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_22(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x75c856*/
    return -2147467261; /*0x75c858*/
  if ( LODWORD(this->Climb) ) /*0x75c864*/
    return -2147467259; /*0x75c88b*/
  LODWORD(this->Climb) = a2; /*0x75c872*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x75c878*/
  return 0; /*0x75c85d*/
}



// ==== 0x0075C8A0  JumpjetLocomotionClass::StubReturnZero_23  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_23(JumpjetLocomotionClass *this, _DWORD *a2)
{
  float Climb; // eax

  if ( !a2 ) /*0x75c8a6*/
    return -2147467261; /*0x75c8a8*/
  Climb = this->Climb; /*0x75c8b4*/
  if ( Climb == 0.0 ) /*0x75c8b9*/
    return 1; /*0x75c8c9*/
  *(float *)a2 = Climb; /*0x75c8bb*/
  this->Climb = 0.0; /*0x75c8bd*/
  return 0; /*0x75c8ad*/
}



// ==== 0x0075C8E0  JumpjetLocomotionClass::CheckBaseClassState_0  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckBaseClassState_0(JumpjetLocomotionClass *this)
{
  return !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) /*0x75c910*/
      && LODWORD(this->Climb)
      && !BYTE1(this->Speed)
      && !*(_BYTE *)(*((_DWORD *)this - 3) + 1709);
}



// ==== 0x0075C920  JumpjetLocomotionClass::LoadLocomotionFromStream_4  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_4(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  float *p_Climb; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x75c921*/
  if ( !pad_0 ) /*0x75c928*/
    return -2147467261; /*0x75c931*/
  p_Climb = &this->Climb; /*0x75c93b*/
  if ( LODWORD(this->Climb) ) /*0x75c938*/
  {
    this = 0; /*0x75c944*/
    v5 = StreamClass::Set2((StreamClass *)&this, p_Climb); /*0x75c955*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x75c963*/
      WinAPI::Wrapper(v5); /*0x75c966*/
    if ( !this ) /*0x75c971*/
      return -2147467259; /*0x75c97a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x75c984*/
    if ( this ) /*0x75c98c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x75c995*/
      return v6; /*0x75c99c*/
    }
  }
  else
  {
    pad_0 = 0; /*0x75c9a2*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x75c9ac*/
      return -2147467259; /*0x75c9ac*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x75c9bd*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x75c9c1*/
    {
      v9 = this; /*0x75c9d5*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x75c9dd*/
      v8 = v9; /*0x75c9e2*/
      pad_0 = v9->LocomotionClass; /*0x75c9e5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x75c9c7*/
      v8 = 0; /*0x75c9cc*/
      pad_0 = 0; /*0x75c9ce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x75c9f3*/
      WinAPI::Wrapper(v7); /*0x75c9f6*/
    if ( !v8 ) /*0x75ca01*/
      return -2147467259; /*0x75ca0a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x75ca14*/
    if ( pad_0 ) /*0x75ca1c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x75ca21*/
  }
  return v6; /*0x75c92a*/
}



// ==== 0x0075CA30  WalkLocomotionClass::DispatchVirtualCall_10  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_10(WalkLocomotionClass *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  FootClass *Owner; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x75ca30*/
  if ( !a2 ) /*0x75ca39*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(WalkLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x75ca48*/
                     this,
                     v6);
    v5[0] = *v3; /*0x75ca4d*/
    v5[1] = v3[1]; /*0x75ca54*/
    Owner = this->?; /*0x75ca5b*/
    v5[2] = v3[2]; /*0x75ca5e*/
    return (*((int (__thiscall **)(FootClass *, _DWORD *))Owner->TechnoClass + 61))(Owner, v5); /*0x75ca69*/
  }
  return result; /*0x75ca70*/
}



// ==== 0x0075CA80  WalkLocomotionClass::IsPositionWithinThreshold_1  this=WalkLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsPositionWithinThreshold_1(WalkLocomotionClass *this, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(WalkLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))(this, v9); /*0x75ca93*/
  v5 = v4[2]; /*0x75ca9b*/
  v6 = *v4; /*0x75cac7*/
  v7 = v4[1] / 256; /*0x75cadd*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x75cb01*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= dword_B45C28;
}



// ==== 0x0075CB20  WalkLocomotionClass::SmallStub_75CB20  this=WalkLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SmallStub_75CB20(WalkLocomotionClass *this)
{
  return BYTE2(this->HeadToCoord[2]); /*0x75cb27*/
}



// ==== 0x0075CB30  WalkLocomotionClass::InitMultiFieldArray_1  this=WalkLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::InitMultiFieldArray_1(WalkLocomotionClass *this)
{
  *(_DWORD *)this->__pad_18 = g_AsyncMovieState; /*0x75cb40*/
  this->Dest[0] = g_MovieFrameState1; /*0x75cb48*/
  this->Dest[1] = g_MovieFrameState2; /*0x75cb51*/
  this->Dest[2] = g_AsyncMovieState; /*0x75cb5a*/
  this->HeadToCoord[0] = g_MovieFrameState1; /*0x75cb62*/
  this->HeadToCoord[1] = g_MovieFrameState2; /*0x75cb6b*/
  return &this->Dest[2]; /*0x75cb6e*/
}



// ==== 0x0075CB80  WalkLocomotionClass::AddRef  this=WalkLocomotionClass  sig=csp ====
LONG __stdcall WalkLocomotionClass::AddRef(WalkLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x75cb8a*/
}



// ==== 0x0075CB90  WalkLocomotionClass::Release  this=WalkLocomotionClass  sig=csp ====
LONG __stdcall WalkLocomotionClass::Release(WalkLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x75cb9a*/
}



// ==== 0x0075CBA0  JumpjetLocomotionClass::ShortFunc_75CBA0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_75CBA0(int a1)
{
  return *(_DWORD *)(a1 + 32) != 0; /*0x75cbae*/
}



// ==== 0x0075CBC0  WalkLocomotionClass::SetByteField_3  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField_3(WalkLocomotionClass *this)
{
  BYTE2(this->HeadToCoord[2]) = 0; /*0x75cbc4*/
  return (int)this->LocomotionClass; /*0x75cbc8*/
}



// ==== 0x0075CBD0  WalkLocomotionClass::StubReturn60  this=WalkLocomotionClass  sig=csp ====
int WalkLocomotionClass::StubReturn60(WalkLocomotionClass *this)
{
  return 60; /*0x75cbd5*/
}



// ==== 0x0075CBE0  WalkLocomotionClass::ProcessMove  this=WalkLocomotionClass  sig=csp ====
_DWORD *__thiscall WalkLocomotionClass::ProcessMove(WalkLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  *(_DWORD *)this->LocomotionClass = &WalkLocomotionClass::`vftable'; /*0x75cbe3*/
  *(_DWORD *)&this->LocomotionClass[4] = &WalkLocomotionClass::`vftable'; /*0x75cbe9*/
  *(_DWORD *)this->__pad_18 = &WalkLocomotionClass::`vftable'; /*0x75cbf0*/
  Piggybackee = this->Piggybackee; /*0x75cbf7*/
  if ( Piggybackee ) /*0x75cbfc*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x75cc01*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x75cc06*/
  if ( (a2 & 1) != 0 ) /*0x75cc10*/
    __3_YAXPAX_Z(this); /*0x75cc13*/
  return this->LocomotionClass; /*0x75cc1d*/
}



// ==== 0x0075CC30  JumpjetLocomotionClass::SmallStub_75CC30  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_75CC30(int a1, const void *a2, int *a3)
{
  return WalkLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x0075CC40  JumpjetLocomotionClass::SmallStub_75CC40  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_75CC40(int a1)
{
  return WalkLocomotionClass::AddRef(a1 - 4);
}



// ==== 0x0075CC50  JumpjetLocomotionClass::SmallStub_75CC50  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_75CC50(int a1)
{
  return WalkLocomotionClass::Release((volatile LONG *)(a1 - 4));
}



// ==== 0x0075CC60  JumpjetLocomotionClass::SmallStub_75CC60  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_75CC60(int a1, const void *a2, int *a3)
{
  return WalkLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}



// ==== 0x0075CC70  JumpjetLocomotionClass::SmallStub_75CC70  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_75CC70(int a1)
{
  return WalkLocomotionClass::AddRef(a1 - 24);
}



// ==== 0x0075CC80  JumpjetLocomotionClass::SmallStub_75CC80  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_75CC80(int a1)
{
  return WalkLocomotionClass::Release((volatile LONG *)(a1 - 24));
}



// ==== 0x0075CC90  sub_75CC90  this=-  sig=ida-proto ====
void sub_75CC90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75cc9c*/
  dbl_B45C40 = Math::Sqrt(v0 + v0); /*0x75ccae*/
}



// ==== 0x0075CCC0  sub_75CCC0  this=-  sig=ida-proto ====
void sub_75CCC0()
{
  dbl_B45C90 = dbl_B45C40 / 60.0; /*0x75cccc*/
}



// ==== 0x0075CCE0  sub_75CCE0  this=-  sig=ida-proto ====
void sub_75CCE0()
{
  dbl_B45C78 = 1.0 / dbl_B45C90; /*0x75ccec*/
}



// ==== 0x0075CD00  sub_75CD00  this=-  sig=ida-proto ====
void sub_75CD00()
{
  dbl_B45C70 = 0.0174532925199433 * 45.0; /*0x75cd0c*/
}



// ==== 0x0075CD20  sub_75CD20  this=-  sig=ida-proto ====
void sub_75CD20()
{
  dbl_B45C48 = 0.0174532925199433 * 60.0; /*0x75cd2c*/
}



// ==== 0x0075CD40  sub_75CD40  this=-  sig=ida-proto ====
void sub_75CD40()
{
  dbl_B45C30 = 0.0174532925199433 * 90.0; /*0x75cd4c*/
}



// ==== 0x0075CD60  sub_75CD60  this=-  sig=ida-proto ====
__int64 sub_75CD60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45C30 - dbl_B45C48); /*0x75cd72*/
  result = Math::RoundToInt(v0 * dbl_B45C40 * 0.5); /*0x75cd86*/
  dword_B45C98 = result; /*0x75cd8b*/
  return result; /*0x75cd90*/
}



// ==== 0x0075CDA0  sub_75CDA0  this=-  sig=ida-proto ====
void sub_75CDA0()
{
  dbl_B45C50 = Math::ArcTan((double)dword_B45C98 * 0.00390625); /*0x75cdb7*/
}



// ==== 0x0075CDD0  sub_75CDD0  this=-  sig=ida-proto ====
void sub_75CDD0()
{
  dbl_B45C68 = Math::ArcTan((double)(2 * dword_B45C98) / dbl_B45C40); /*0x75cdf2*/
}



// ==== 0x0075CE00  sub_75CE00  this=-  sig=ida-proto ====
__int64 sub_75CE00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45C98) + 0.5); /*0x75ce1b*/
  dword_B45C8C = result; /*0x75ce20*/
  return result; /*0x75ce26*/
}



// ==== 0x0075CE30  sub_75CE30  this=-  sig=ida-proto ====
int sub_75CE30()
{
  word_B45C38 = 0; /*0x75ce32*/
  word_B45C3A = 0; /*0x75ce38*/
  return 0; /*0x75ce3e*/
}



// ==== 0x0075CE40  sub_75CE40  this=-  sig=ida-proto ====
int sub_75CE40()
{
  dword_B45C58 = 0; /*0x75ce42*/
  dword_B45C5C = 0; /*0x75ce47*/
  dword_B45C60 = 0; /*0x75ce4c*/
  return 0; /*0x75ce51*/
}



// ==== 0x0075CE60  sub_75CE60  this=-  sig=ida-proto ====
int sub_75CE60()
{
  dword_B45C88 = 0; /*0x75ce65*/
  dword_B45C80 = 128; /*0x75ce6f*/
  dword_B45C84 = 128; /*0x75ce74*/
  return 128; /*0x75ce79*/
}



// ==== 0x0075CEC0  WarheadTypeClass::Construct  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass_Constructor(int this, char *Source)
{
  int v3; // eax
  int v4; // eax

  AbstractTypeClass::Constructor(this, Source); /*0x75cecb*/
  *(_DWORD *)(this + 152) = 0; /*0x75ced8*/
  *(_DWORD *)(this + 156) = 0; /*0x75cede*/
  *(_DWORD *)(this + 248) = 0; /*0x75cee4*/
  *(_DWORD *)(this + 252) = 1072693248; /*0x75ceeb*/
  *(_DWORD *)(this + 256) = 0; /*0x75cef8*/
  AnimTypeVector::Constructor((_DWORD *)(this + 260), 0, 0); /*0x75cefe*/
  *(_DWORD *)(this + 276) = 0; /*0x75cf08*/
  *(_DWORD *)(this + 280) = 10; /*0x75cf0b*/
  *(_DWORD *)(this + 260) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75cf0e*/
  *(_DWORD *)(this + 288) = 0; /*0x75cf14*/
  *(_DWORD *)(this + 292) = 0; /*0x75cf1a*/
  *(_DWORD *)(this + 296) = 0; /*0x75cf25*/
  *(_DWORD *)(this + 300) = 1065353216; /*0x75cf2b*/
  *(_BYTE *)(this + 304) = 0; /*0x75cf31*/
  *(_DWORD *)(this + 308) = 5; /*0x75cf37*/
  *(_DWORD *)(this + 312) = 1065353216; /*0x75cf41*/
  *(_DWORD *)(this + 316) = 0; /*0x75cf47*/
  *(_DWORD *)(this + 320) = 0; /*0x75cf4d*/
  *(_BYTE *)(this + 324) = 0; /*0x75cf53*/
  *(_BYTE *)(this + 325) = 0; /*0x75cf59*/
  *(_BYTE *)(this + 326) = 0; /*0x75cf5f*/
  *(_BYTE *)(this + 327) = 0; /*0x75cf65*/
  *(_BYTE *)(this + 328) = 0; /*0x75cf6b*/
  *(_BYTE *)(this + 329) = 0; /*0x75cf71*/
  *(_BYTE *)(this + 330) = 0; /*0x75cf77*/
  *(_BYTE *)(this + 331) = 0; /*0x75cf7d*/
  *(_BYTE *)(this + 332) = 0; /*0x75cf83*/
  *(_BYTE *)(this + 333) = 0; /*0x75cf89*/
  *(_BYTE *)(this + 334) = 0; /*0x75cf8f*/
  *(_BYTE *)(this + 335) = 0; /*0x75cf95*/
  *(_BYTE *)(this + 336) = 0; /*0x75cf9b*/
  *(_BYTE *)(this + 337) = 0; /*0x75cfa1*/
  *(_BYTE *)(this + 338) = 0; /*0x75cfa7*/
  *(_BYTE *)(this + 339) = 0; /*0x75cfad*/
  *(_BYTE *)(this + 340) = 0; /*0x75cfb3*/
  *(_BYTE *)(this + 341) = 0; /*0x75cfb9*/
  *(_BYTE *)(this + 342) = 0; /*0x75cfbf*/
  *(_BYTE *)(this + 343) = 0; /*0x75cfc5*/
  *(_BYTE *)(this + 344) = 0; /*0x75cfcb*/
  *(_BYTE *)(this + 345) = 0; /*0x75cfd1*/
  *(_BYTE *)(this + 346) = 0; /*0x75cfd7*/
  *(_BYTE *)(this + 347) = 0; /*0x75cfdd*/
  *(_DWORD *)(this + 348) = 1247291207; /*0x75cfee*/
  *(_DWORD *)(this + 352) = 298948665; /*0x75cff9*/
  *(_DWORD *)(this + 356) = -1610610249; /*0x75d001*/
  *(_BYTE *)(this + 364) = 0; /*0x75d009*/
  *(_BYTE *)(this + 365) = 0; /*0x75d00f*/
  *(_DWORD *)(this + 360) = -777003740; /*0x75d015*/
  *(_BYTE *)(this + 366) = 0; /*0x75d01a*/
  *(_DWORD *)(this + 368) = 0; /*0x75d020*/
  *(_BYTE *)(this + 372) = 0; /*0x75d026*/
  *(_BYTE *)(this + 373) = 0; /*0x75d02c*/
  *(_BYTE *)(this + 374) = 0; /*0x75d032*/
  *(_BYTE *)(this + 375) = 0; /*0x75d038*/
  *(_BYTE *)(this + 376) = 0; /*0x75d03e*/
  *(_BYTE *)(this + 377) = 1; /*0x75d044*/
  *(_BYTE *)(this + 378) = 0; /*0x75d04a*/
  *(_BYTE *)(this + 379) = 0; /*0x75d050*/
  *(_DWORD *)(this + 380) = 0; /*0x75d056*/
  *(_DWORD *)(this + 384) = 0; /*0x75d05c*/
  *(_DWORD *)(this + 388) = 0; /*0x75d06e*/
  *(_DWORD *)(this + 392) = 0; /*0x75d074*/
  *(_DWORD *)(this + 400) = 0; /*0x75d07a*/
  *(_DWORD *)(this + 404) = 0; /*0x75d07d*/
  *(_BYTE *)(this + 408) = 1; /*0x75d080*/
  *(_BYTE *)(this + 409) = 0; /*0x75d083*/
  *(_DWORD *)(this + 416) = 10; /*0x75d086*/
  *(_DWORD *)(this + 412) = 0; /*0x75d089*/
  *(_DWORD *)(this + 396) = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75d08c*/
  *(_BYTE *)(this + 436) = 1; /*0x75d092*/
  *(_DWORD *)(this + 428) = 0; /*0x75d098*/
  *(_DWORD *)(this + 432) = 0; /*0x75d09b*/
  *(_BYTE *)(this + 437) = 0; /*0x75d09e*/
  *(_DWORD *)(this + 444) = 10; /*0x75d0a1*/
  *(_DWORD *)(this + 440) = 0; /*0x75d0a4*/
  *(_DWORD *)(this + 424) = &TypeList<int>::`vftable'; /*0x75d0a7*/
  *(_DWORD *)(this + 452) = 0; /*0x75d0ae*/
  *(_DWORD *)(this + 456) = 0; /*0x75d0b4*/
  *(_DWORD *)this = &WarheadTypeClass::`vftable'; /*0x75d0ba*/
  *(_DWORD *)(this + 4) = &WarheadTypeClass::`vftable'; /*0x75d0c1*/
  *(_DWORD *)(this + 8) = &WarheadTypeClass::`vftable'; /*0x75d0c7*/
  *(_DWORD *)(this + 12) = &WarheadTypeClass::`vftable'; /*0x75d0ce*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x75d0d5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 396) + 12))(this + 396); /*0x75d0de*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 424) + 12))(this + 424); /*0x75d0e5*/
  if ( g_WarheadTypePool < dword_8874C8 /*0x75d11c*/
    || (byte_8874CD || !dword_8874C8)
    && dword_8874D4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(WarheadTypeClass_Array + 8))(
         &WarheadTypeClass_Array,
         dword_8874C8 + dword_8874D4,
         0) )
  {
    v3 = g_WarheadTypePool++; /*0x75d129*/
    *((_DWORD *)dword_8874C4 + v3) = this; /*0x75d138*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x75d16f*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v4 = dword_B0F680++; /*0x75d17c*/
    *((_DWORD *)dword_B0F674 + v4) = this; /*0x75d18b*/
  }
  *(_DWORD *)(this + 160) = 0; /*0x75d19b*/
  *(_DWORD *)(this + 164) = 1072693248; /*0x75d1a0*/
  qmemcpy((void *)(this + 168), (const void *)(this + 160), 0x50u); /*0x75d1a7*/
  return this; /*0x75d1a9*/
}



// ==== 0x0075D230  AbstractClass::ProcessInit  this=WarheadTypeClass  sig=csp ====
int __thiscall AbstractClass::ProcessInit(AbstractClass *this)
{
  int v2; // eax
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  AbstractClass *v8; // [esp+8h] [ebp-4h] BYREF

  this->vtable0 = &WarheadTypeClass::`vftable'; /*0x75d237*/
  this->vtable1 = &WarheadTypeClass::`vftable'; /*0x75d23d*/
  this->vtable2 = &WarheadTypeClass::`vftable'; /*0x75d244*/
  this->vtable3 = &WarheadTypeClass::`vftable'; /*0x75d24b*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x75d252*/
  v8 = this; /*0x75d267*/
  v2 = ((int (__thiscall *)(WarheadTypeClass **, AbstractClass **))WarheadTypeClass_Array->WarheadTypeClass_field_0x10)( /*0x75d26b*/
         &WarheadTypeClass_Array,
         &v8);
  if ( v2 != -1 && v2 < g_WarheadTypePool && v2 < --g_WarheadTypePool ) /*0x75d286*/
  {
    do /*0x75d29e*/
    {
      ++v2; /*0x75d28e*/
      *((_DWORD *)dword_8874C4 + v2 - 1) = *((_DWORD *)dword_8874C4 + v2); /*0x75d292*/
    }
    while ( v2 < g_WarheadTypePool ); /*0x75d29e*/
  }
  v8 = this; /*0x75d2b0*/
  v3 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x75d2b4*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v8);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x75d2c4*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x75d2c9*/
    for ( ; /*0x75d2cf*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x75d2d7*/
    }
  }
  v4 = (void *)this->q1AC; /*0x75d2e9*/
  this->u32_1A8 = &VectorClass<int>::`vftable'; /*0x75d2f3*/
  if ( v4 && this->q1B5 ) /*0x75d2ff*/
  {
    __3_YAXPAX_Z(v4); /*0x75d308*/
    this->q1AC = 0; /*0x75d310*/
  }
  this->q1B5 = 0; /*0x75d316*/
  this->q06C = 0; /*0x75d31c*/
  v5 = (void *)this->Name; /*0x75d322*/
  this->DebrisTypes = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75d328*/
  if ( v5 && this->u32_199 ) /*0x75d336*/
  {
    __3_YAXPAX_Z(v5); /*0x75d33f*/
    this->Name = 0; /*0x75d347*/
  }
  this->u32_199 = 0; /*0x75d34d*/
  this->MaxDebris = 0; /*0x75d353*/
  v6 = (void *)this->q042; /*0x75d359*/
  this->q104 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75d35f*/
  if ( v6 && this->q111 ) /*0x75d36d*/
  {
    __3_YAXPAX_Z(v6); /*0x75d376*/
    this->q042 = 0; /*0x75d37e*/
  }
  this->q111 = 0; /*0x75d386*/
  this->q043 = 0; /*0x75d38c*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x75d397*/
}



// ==== 0x0075D3A0  WarheadTypeClass::Draw  this=WarheadTypeClass  sig=csp ====
char __thiscall Voxel_Section::Draw(WarheadTypeClass *this, int a2)
{
  _DWORD *WarheadTypeClass_field_0x140; // ebx
  _DWORD *v9; // eax
  char *i; // eax
  int CapacityIncrement; // ecx
  int unknown_18; // edx
  void *Items; // eax
  int Int_Overwrite; // eax
  char v16; // cl
  char Bool_Overwrite; // al
  char v18; // al
  char v19; // cl
  char v20; // al
  char v21; // al
  char v22; // cl
  char v23; // al
  _DWORD *GUID_Overwrite; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  char v28; // al
  char v29; // al
  int Paralyzes; // ecx
  int v31; // eax
  char v32; // al
  char v33; // cl
  char v34; // al
  double v35; // rax
  char Culling_high; // cl
  char v38; // al
  char v39; // al
  char v40; // cl
  char v41; // al
  int v42; // eax
  int WarheadTypeClass_field_0x180; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  char *j; // eax
  _DWORD *v51; // ebx
  void *v52; // eax
  int Capacity; // eax
  bool v54; // zf
  int v55; // eax
  int MaxDebris; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // edx
  void *v60; // eax
  int v61; // eax
  unsigned __int8 *inited; // eax
  char *IntList; // eax
  int v64; // eax
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  int v68; // edx
  void *v69; // eax
  char *v70; // edi
  double *v71; // ebx
  int v72; // ebp
  char *v73; // eax
  void **v78; // [esp-14h] [ebp-168h] BYREF
  _DWORD *v79; // [esp-10h] [ebp-164h]
  int v80; // [esp-Ch] [ebp-160h]
  __int16 v81; // [esp-8h] [ebp-15Ch]
  unsigned __int8 *p_WarheadTypeClass_field_0x24; // [esp-4h] [ebp-158h]
  double v83; // [esp+0h] [ebp-154h]
  char *v84; // [esp+18h] [ebp-13Ch] BYREF
  TypeList v85; // [esp+1Ch] [ebp-138h] BYREF
  DynamicVector v86; // [esp+38h] [ebp-11Ch] BYREF
  char Destination[128]; // [esp+D4h] [ebp-80h] BYREF

  _ESI = this; /*0x75d3b1*/
  INIClass::ResetSection((INIClass *)a2); /*0x75d3b5*/
  if ( !INIClass::BinarySearchSection(a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24) ) /*0x75d3c0*/
    return 0; /*0x75deb2*/
  __asm { fld dword ptr [esi+124h] } /*0x75d3d2*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aCellspread, v83); /*0x75d3e6*/
  __asm { fstp dword ptr [esi+124h] } /*0x75d3eb*/
  *(float *)_ESI->__pad_124 = _ET1; /*0x75d3eb*/
  __asm { fld dword ptr [esi+128h] } /*0x75d3f1*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aCellinset, v83); /*0x75d405*/
  __asm { fstp dword ptr [esi+128h] } /*0x75d40a*/
  *(float *)&_ESI->__pad_124[4] = _ET1; /*0x75d40a*/
  __asm { fld dword ptr [esi+12Ch] } /*0x75d410*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite( /*0x75d424*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
    aPercentatmax,
    v83);
  __asm { fstp dword ptr [esi+12Ch] } /*0x75d429*/
  *(float *)&_ESI->__pad_124[8] = _ET1; /*0x75d429*/
  _ESI->__pad_124[12] = INIClass::ReadBool_Overwrite( /*0x75d443*/
                          (int *)a2,
                          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                          aCausesdelaykil,
                          _ESI->__pad_124[12]);
  *(_DWORD *)&_ESI->__pad_124[16] = INIClass::ReadInt_Overwrite( /*0x75d45d*/
                                      (bool *)a2,
                                      (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                      aDelaykillframe,
                                      *(_DWORD *)&_ESI->__pad_124[16]);
  __asm { fld dword ptr [esi+138h] } /*0x75d466*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite( /*0x75d477*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
    aDelaykillatmax,
    v83);
  __asm { fstp dword ptr [esi+138h] } /*0x75d47c*/
  *(float *)&_ESI->__pad_124[20] = _ET1; /*0x75d47c*/
  __asm { fld dword ptr [esi+13Ch] } /*0x75d482*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite( /*0x75d496*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
    aCombatlightsiz,
    v83);
  __asm { fstp dword ptr [esi+13Ch] } /*0x75d49b*/
  *(float *)&_ESI->__pad_124[24] = _ET1; /*0x75d49b*/
  WarheadTypeClass_field_0x140 = _ESI->WarheadTypeClass_field_0x140; /*0x75d4a1*/
  if ( INIClass::GetString( /*0x75d4be*/
         (INIClass *)a2,
         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
         (unsigned __int8 *)&g_INI_Key_Special.?[8],
         &g_INI_DefaultBuffer,
         (char *)&v86.DynamicVector_field_0x1C,
         128) )
  {
    v9 = BuildingTypeClass::LoadOrGet((char *)&v86.DynamicVector_field_0x1C); /*0x75d4cb*/
  }
  else
  {
    v9 = WarheadTypeClass_field_0x140; /*0x75d4d2*/
  }
  _ESI->WarheadTypeClass_field_0x140 = v9; /*0x75d4d4*/
  _ESI->Conventional[0] = INIClass::ReadBool_Overwrite( /*0x75d4ee*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aConventional,
                            _ESI->Conventional[0]);
  _ESI->__pad_144[0] = INIClass::ReadBool_Overwrite( /*0x75d508*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         g_INI_Key_Wall,
                         _ESI->__pad_144[0]);
  _ESI->__pad_144[1] = INIClass::ReadBool_Overwrite( /*0x75d522*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         aWallabsolutede,
                         _ESI->__pad_144[1]);
  _ESI->__pad_144[2] = INIClass::ReadBool_Overwrite( /*0x75d53c*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         aPenetratesbunk,
                         _ESI->__pad_144[2]);
  _ESI->__pad_144[3] = INIClass::ReadBool_Overwrite( /*0x75d556*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         aWood,
                         _ESI->__pad_144[3]);
  _ESI->__pad_144[4] = INIClass::ReadBool_Overwrite( /*0x75d570*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         (unsigned __int8 *)g_INI_Key_Tiberium,
                         _ESI->__pad_144[4]);
  _ESI->WarheadTypeClass_field_bool_149[1] = INIClass::ReadBool_Overwrite( /*0x75d58a*/
                                               (int *)a2,
                                               (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                               aSparky,
                                               _ESI->WarheadTypeClass_field_bool_149[1]);
  _ESI->WarheadTypeClass_field_bool_149[2] = INIClass::ReadBool_Overwrite( /*0x75d5a4*/
                                               (int *)a2,
                                               (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                               aSonic,
                                               _ESI->WarheadTypeClass_field_bool_149[2]);
  _ESI->Conventional[1] = INIClass::ReadBool_Overwrite( /*0x75d5be*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aRocker,
                            _ESI->Conventional[1]);
  _ESI->Conventional[2] = INIClass::ReadBool_Overwrite( /*0x75d5d8*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aDirectrocker,
                            _ESI->Conventional[2]);
  _ESI->WarheadTypeClass_field_bool_149[3] = INIClass::ReadBool_Overwrite( /*0x75d5f2*/
                                               (int *)a2,
                                               (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                               g_INI_Key_Fire,
                                               _ESI->WarheadTypeClass_field_bool_149[3]);
  _ESI->Conventional[3] = INIClass::ReadBool_Overwrite( /*0x75d60c*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aBright,
                            _ESI->Conventional[3]);
  _ESI->CLDisableRed[0] = INIClass::ReadBool_Overwrite( /*0x75d626*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aCldisablered,
                            _ESI->CLDisableRed[0]);
  _ESI->CLDisableRed[1] = INIClass::ReadBool_Overwrite( /*0x75d640*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aCldisablegreen,
                            _ESI->CLDisableRed[1]);
  _ESI->CLDisableRed[2] = INIClass::ReadBool_Overwrite( /*0x75d65a*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aCldisableblue,
                            _ESI->CLDisableRed[2]);
  if ( INIClass::GetString( /*0x75d677*/
         (INIClass *)a2,
         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
         aAnimlist,
         &g_INI_DefaultBuffer,
         (char *)&v86.DynamicVector_field_0x1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v86, 0, 0); /*0x75d68c*/
    *(_DWORD *)v86.__pad_0 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75d69b*/
    for ( i = strtok((char *)&v86.DynamicVector_field_0x1C, Str); i; i = strtok(0, Str) ) /*0x75d6ad*/
    {
      if ( !*i ) /*0x75d6af*/
        break; /*0x75d6b2*/
      v84 = (char *)AnimTypeClass::FindOrCreate(i); /*0x75d6bd*/
      if ( v84 ) /*0x75d6c1*/
        DynamicVector::Add_Alt4(&v86, &v84); /*0x75d6cc*/
    }
    TypeList::AnimTypeCopy(&v85, &v86); /*0x75d6ed*/
    *(_DWORD *)v86.__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75d6f6*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v86); /*0x75d6fe*/
  }
  else
  {
    TypeList::AnimTypeCopy(&v85, _ESI->__pad_104); /*0x75d710*/
  }
  VectorClass::CopyDefault((VectorClass *)_ESI->__pad_104, &v85); /*0x75d722*/
  CapacityIncrement = v85.?; /*0x75d72b*/
  unknown_18 = v85.unknown_18; /*0x75d72f*/
  _ESI->WarheadTypeClass_field_0x114 = v85.?; /*0x75d733*/
  Items = v85.?; /*0x75d736*/
  *(_DWORD *)_ESI->__pad_118 = CapacityIncrement; /*0x75d73a*/
  *(_DWORD *)&_ESI->__pad_118[4] = unknown_18; /*0x75d73f*/
  v85.DynamicVectorClass = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75d742*/
  if ( Items && v85.? ) /*0x75d752*/
    __3_YAXPAX_Z(Items); /*0x75d755*/
  _ESI->WarheadTypeClass_field_0x120 = INIClass::ReadInt_Overwrite( /*0x75d771*/
                                         (bool *)a2,
                                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                         aInfdeath,
                                         _ESI->WarheadTypeClass_field_0x120);
  INIClass::ReadDouble_Overwrite( /*0x75d78d*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
    aDeform,
    *(double *)&_ESI->__pad_44[84]);
  __asm { fstp qword ptr [esi+98h] } /*0x75d792*/
  *(double *)&_ESI->__pad_44[84] = _RT1; /*0x75d792*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x75d7a7*/
                    (bool *)a2,
                    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                    aDeformthreshho,
                    _ESI->WarheadTypeClass_field_0x100);
  v16 = _ESI->CLDisableRed[3]; /*0x75d7ac*/
  _ESI->WarheadTypeClass_field_0x100 = Int_Overwrite; /*0x75d7b2*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x75d7c1*/
                     (int *)a2,
                     (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                     aEmeffect,
                     v16);
  BYTE4(v83) = _ESI->MindControl[0]; /*0x75d7ce*/
  LODWORD(v83) = aMindcontrol; /*0x75d7cf*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d7d4*/
  _ESI->CLDisableRed[3] = Bool_Overwrite; /*0x75d7d5*/
  _ESI->MindControl[0] = INIClass::ReadBool_Overwrite( /*0x75d7e0*/
                           (int *)a2,
                           p_WarheadTypeClass_field_0x24,
                           (unsigned __int8 *)LODWORD(v83),
                           SBYTE4(v83));
  v18 = INIClass::ReadBool_Overwrite( /*0x75d7f5*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aPoison,
          _ESI->MindControl[1]);
  v19 = _ESI->MindControl[2]; /*0x75d7fa*/
  _ESI->MindControl[1] = v18; /*0x75d800*/
  v20 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aIvanbomb, v19); /*0x75d80f*/
  BYTE4(v83) = _ESI->MindControl[3]; /*0x75d81c*/
  LODWORD(v83) = aElectricassaul; /*0x75d81d*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d822*/
  _ESI->MindControl[2] = v20; /*0x75d823*/
  _ESI->MindControl[3] = INIClass::ReadBool_Overwrite( /*0x75d82e*/
                           (int *)a2,
                           p_WarheadTypeClass_field_0x24,
                           (unsigned __int8 *)LODWORD(v83),
                           SBYTE4(v83));
  v21 = INIClass::ReadBool_Overwrite( /*0x75d843*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aParasite,
          _ESI->Parasite[0]);
  v22 = _ESI->Parasite[1]; /*0x75d848*/
  _ESI->Parasite[0] = v21; /*0x75d84e*/
  v23 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aTemporal, v22); /*0x75d85d*/
  BYTE4(v83) = _ESI->Parasite[2]; /*0x75d86a*/
  LODWORD(v83) = aIslocomotor; /*0x75d86b*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d870*/
  _ESI->Parasite[1] = v23; /*0x75d871*/
  _ESI->Parasite[2] = INIClass::ReadBool_Overwrite( /*0x75d87c*/
                        (int *)a2,
                        p_WarheadTypeClass_field_0x24,
                        (unsigned __int8 *)LODWORD(v83),
                        SBYTE4(v83));
  GUID_Overwrite = (_DWORD *)INIClass::ReadGUID_Overwrite( /*0x75d8b2*/
                               a2,
                               (int)&v86,
                               (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                               (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1624[92],
                               *(_DWORD *)&_ESI->Parasite[3],
                               *(_DWORD *)&_ESI->__pad_15D[3],
                               *(_DWORD *)&_ESI->__pad_15D[7],
                               *(_DWORD *)&_ESI->__pad_15D[11]);
  *(_DWORD *)&_ESI->Parasite[3] = *GUID_Overwrite; /*0x75d8b9*/
  v25 = GUID_Overwrite[1]; /*0x75d8bb*/
  *(_DWORD *)&_ESI->__pad_15D[3] = v25; /*0x75d8be*/
  LOBYTE(v25) = _ESI->Airstrike; /*0x75d8c1*/
  v26 = GUID_Overwrite[2]; /*0x75d8c7*/
  HIDWORD(v83) = v25; /*0x75d8ca*/
  *(_DWORD *)&_ESI->__pad_15D[7] = v26; /*0x75d8cb*/
  LODWORD(v83) = aAirstrike; /*0x75d8ce*/
  v27 = GUID_Overwrite[3]; /*0x75d8d3*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d8d6*/
  *(_DWORD *)&_ESI->__pad_15D[11] = v27; /*0x75d8d9*/
  v28 = INIClass::ReadBool_Overwrite( /*0x75d8dc*/
          (int *)a2,
          p_WarheadTypeClass_field_0x24,
          (unsigned __int8 *)LODWORD(v83),
          SBYTE4(v83));
  BYTE4(v83) = BYTE1(_ESI->Airstrike); /*0x75d8e9*/
  LODWORD(v83) = aPsychedelic; /*0x75d8ea*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d8ef*/
  LOBYTE(_ESI->Airstrike) = v28; /*0x75d8f0*/
  BYTE1(_ESI->Airstrike) = INIClass::ReadBool_Overwrite( /*0x75d8fb*/
                             (int *)a2,
                             p_WarheadTypeClass_field_0x24,
                             (unsigned __int8 *)LODWORD(v83),
                             SBYTE4(v83));
  v29 = INIClass::ReadBool_Overwrite( /*0x75d910*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aBombdisarm,
          BYTE2(_ESI->Airstrike));
  Paralyzes = _ESI->Paralyzes; /*0x75d915*/
  BYTE2(_ESI->Airstrike) = v29; /*0x75d91b*/
  v31 = INIClass::ReadInt_Overwrite( /*0x75d92a*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aParalyzes,
          Paralyzes);
  BYTE4(v83) = _ESI->Culling; /*0x75d937*/
  LODWORD(v83) = aCulling; /*0x75d938*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d93d*/
  _ESI->Paralyzes = v31; /*0x75d93e*/
  LOBYTE(_ESI->Culling) = INIClass::ReadBool_Overwrite( /*0x75d949*/
                            (int *)a2,
                            p_WarheadTypeClass_field_0x24,
                            (unsigned __int8 *)LODWORD(v83),
                            SBYTE4(v83));
  v32 = INIClass::ReadBool_Overwrite( /*0x75d95e*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aMakesdisguise,
          BYTE1(_ESI->Culling));
  v33 = BYTE2(_ESI->Culling); /*0x75d963*/
  BYTE1(_ESI->Culling) = v32; /*0x75d969*/
  v34 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aNukemaker, v33); /*0x75d978*/
  HIDWORD(v35) = *(_DWORD *)_ESI->__pad_FC; /*0x75d97d*/
  BYTE2(_ESI->Culling) = v34; /*0x75d983*/
  LODWORD(v35) = _ESI->WarheadTypeClass_field_0xF8; /*0x75d989*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aPronedamage, v35); /*0x75d999*/
  Culling_high = HIBYTE(_ESI->Culling); /*0x75d99e*/
  __asm { fstp qword ptr [esi+0F8h] } /*0x75d9a4*/
  *(double *)&_ESI->WarheadTypeClass_field_0xF8 = _RT1; /*0x75d9a4*/
  v38 = INIClass::ReadBool_Overwrite( /*0x75d9b3*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aRadiation,
          Culling_high);
  BYTE4(v83) = _ESI->PsychicDamage; /*0x75d9c0*/
  LODWORD(v83) = aPsychicdamage; /*0x75d9c1*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d9c6*/
  HIBYTE(_ESI->Culling) = v38; /*0x75d9c7*/
  LOBYTE(_ESI->PsychicDamage) = INIClass::ReadBool_Overwrite( /*0x75d9d2*/
                                  (int *)a2,
                                  p_WarheadTypeClass_field_0x24,
                                  (unsigned __int8 *)LODWORD(v83),
                                  SBYTE4(v83));
  v39 = INIClass::ReadBool_Overwrite( /*0x75d9e7*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aAffectsallies,
          BYTE1(_ESI->PsychicDamage));
  v40 = BYTE2(_ESI->PsychicDamage); /*0x75d9ec*/
  BYTE1(_ESI->PsychicDamage) = v39; /*0x75d9f2*/
  v41 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aBullets, v40); /*0x75da01*/
  BYTE4(v83) = HIBYTE(_ESI->PsychicDamage); /*0x75da0e*/
  LODWORD(v83) = aVeinhole; /*0x75da0f*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75da14*/
  BYTE2(_ESI->PsychicDamage) = v41; /*0x75da15*/
  HIBYTE(_ESI->PsychicDamage) = INIClass::ReadBool_Overwrite( /*0x75da20*/
                                  (int *)a2,
                                  p_WarheadTypeClass_field_0x24,
                                  (unsigned __int8 *)LODWORD(v83),
                                  SBYTE4(v83));
  v42 = INIClass::ReadInt_Overwrite( /*0x75da35*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aShakexlo,
          _ESI->WarheadTypeClass_field_0x17C);
  WarheadTypeClass_field_0x180 = _ESI->WarheadTypeClass_field_0x180; /*0x75da3a*/
  _ESI->WarheadTypeClass_field_0x17C = v42; /*0x75da40*/
  v44 = INIClass::ReadInt_Overwrite( /*0x75da4f*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aShakexhi,
          WarheadTypeClass_field_0x180);
  HIDWORD(v83) = _ESI->WarheadTypeClass_field_0x184; /*0x75da5c*/
  LODWORD(v83) = aShakeylo; /*0x75da5d*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75da62*/
  _ESI->WarheadTypeClass_field_0x180 = v44; /*0x75da63*/
  _ESI->WarheadTypeClass_field_0x184 = INIClass::ReadInt_Overwrite( /*0x75da6e*/
                                         (bool *)a2,
                                         p_WarheadTypeClass_field_0x24,
                                         (unsigned __int8 *)LODWORD(v83),
                                         SHIDWORD(v83));
  v45 = INIClass::ReadInt_Overwrite( /*0x75da83*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aShakeyhi,
          _ESI->WarheadTypeClass_field_0x188);
  v46 = _ESI->WarheadTypeClass_field_0x1C4[0]; /*0x75da88*/
  _ESI->WarheadTypeClass_field_0x188 = v45; /*0x75da8e*/
  v47 = INIClass::ReadInt_Overwrite( /*0x75da9d*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[76],
          v46);
  HIDWORD(v83) = _ESI->WarheadTypeClass_field_0x1C8[0]; /*0x75daaa*/
  LODWORD(v83) = &g_INI_Key_TRUCKA.__pad_1584[64]; /*0x75daab*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75dab0*/
  _ESI->WarheadTypeClass_field_0x1C4[0] = v47; /*0x75dab1*/
  v48 = INIClass::ReadInt_Overwrite( /*0x75dab7*/
          (bool *)a2,
          p_WarheadTypeClass_field_0x24,
          (unsigned __int8 *)LODWORD(v83),
          SHIDWORD(v83));
  _ESI->WarheadTypeClass_field_0x1C8[0] = v48; /*0x75dabe*/
  if ( v48 < 0 ) /*0x75dac4*/
    _ESI->WarheadTypeClass_field_0x1C8[0] = 0; /*0x75dac6*/
  v49 = _ESI->WarheadTypeClass_field_0x1C8[0]; /*0x75dad0*/
  if ( _ESI->WarheadTypeClass_field_0x1C4[0] < v49 ) /*0x75dade*/
    _ESI->WarheadTypeClass_field_0x1C4[0] = v49; /*0x75dae0*/
  if ( INIClass::GetString( /*0x75dafd*/
         (INIClass *)a2,
         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
         (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[52],
         &g_INI_DefaultBuffer,
         (char *)&v86.DynamicVector_field_0x1C,
         128) )
  {
    DynamicVector::Constructor_VoxelAnim(&v86, 0, 0); /*0x75db12*/
    *(_DWORD *)v86.__pad_0 = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75db21*/
    for ( j = strtok((char *)&v86.DynamicVector_field_0x1C, Str); j; j = strtok(0, Str) ) /*0x75db33*/
    {
      if ( !*j ) /*0x75db35*/
        break; /*0x75db38*/
      v51 = UnitTypeClass::FindOrCreate(j); /*0x75db41*/
      if ( v51 /*0x75db74*/
        && ((int)v86.DynamicVector_field_0x10 < v86.DynamicVector_field_0x8
         || (v86.__pad_C[1] || !v86.DynamicVector_field_0x8)
         && *(int *)v86.__pad_14 > 0
         && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v86.__pad_0 + 8))(
              &v86,
              v86.DynamicVector_field_0x8 + *(_DWORD *)v86.__pad_14,
              0)) )
      {
        v52 = v86.DynamicVector_field_0x10++; /*0x75db7f*/
        *(_DWORD *)(*(_DWORD *)&v86.DynamicVector_field_0x1[3] + 4 * (_DWORD)v52) = v51; /*0x75db8a*/
      }
    }
    Voxel_Section::Constructor((Voxel_Section *)&v85, &v86); /*0x75dba9*/
    v85.DynamicVectorClass = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75dbb2*/
    *(_DWORD *)v86.__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75dbba*/
    Vector::Cleanup2((_VectorClass_PBVVoxelAnimTypeClass *)&v86); /*0x75dbc2*/
  }
  else
  {
    Voxel_Section::Constructor((Voxel_Section *)&v85, _ESI->DebrisTypes); /*0x75dbd4*/
    v85.DynamicVectorClass = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75dbd9*/
  }
  if ( _ESI->DebrisTypes != (int *)&v85 ) /*0x75dbed*/
  {
    (*(void (__thiscall **)(int *))(_ESI->DebrisTypes[0] + 12))(_ESI->DebrisTypes); /*0x75dbf3*/
    Capacity = v85.?; /*0x75dbf6*/
    v54 = v85.? == 0; /*0x75dbfa*/
    _ESI->MaxDebris = v85.?; /*0x75dbfc*/
    if ( v54 ) /*0x75dbff*/
    {
      _ESI->WarheadTypeClass_field_0x190[0] = 0; /*0x75dc38*/
      BYTE1(_ESI->MinDebris) = 0; /*0x75dc3f*/
    }
    else
    {
      v55 = __2_YAPAXI_Z(4 * Capacity); /*0x75dc05*/
      _ESI->WarheadTypeClass_field_0x190[0] = v55; /*0x75dc0d*/
      if ( v55 ) /*0x75dc12*/
      {
        MaxDebris = _ESI->MaxDebris; /*0x75dc14*/
        v57 = 0; /*0x75dc17*/
        BYTE1(_ESI->MinDebris) = 1; /*0x75dc1b*/
        if ( MaxDebris > 0 ) /*0x75dc1f*/
        {
          do /*0x75dc34*/
          {
            *(_DWORD *)(_ESI->WarheadTypeClass_field_0x190[0] + 4 * v57) = *((_DWORD *)v85.? + v57); /*0x75dc2b*/
            ++v57; /*0x75dc31*/
          }
          while ( v57 < _ESI->MaxDebris ); /*0x75dc34*/
        }
      }
    }
  }
  v58 = v85.?; /*0x75dc47*/
  v59 = v85.unknown_18; /*0x75dc4b*/
  _ESI->unused_1CC[0] = v85.?; /*0x75dc4f*/
  v60 = v85.?; /*0x75dc52*/
  *(_DWORD *)_ESI->__pad_1A0 = v58; /*0x75dc56*/
  *(_DWORD *)&_ESI->__pad_1A0[4] = v59; /*0x75dc5b*/
  v85.DynamicVectorClass = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75dc5e*/
  if ( v60 && v85.? ) /*0x75dc6e*/
    __3_YAXPAX_Z(v60); /*0x75dc71*/
  v79 = 0; /*0x75dc88*/
  v80 = 0; /*0x75dc8b*/
  v81 = 1; /*0x75dc8e*/
  v78 = &VectorClass<int>::`vftable'; /*0x75dc95*/
  if ( &v78 != (void ***)&_ESI->__pad_1A0[8] ) /*0x75dc9b*/
  {
    VectorClass::Destroy((int)&v78); /*0x75dc9f*/
    v80 = *(_DWORD *)_ESI->__pad_1B0; /*0x75dcad*/
    if ( v80 ) /*0x75dcb0*/
    {
      v79 = (_DWORD *)__2_YAPAXI_Z(4 * v80); /*0x75dcbe*/
      if ( v79 ) /*0x75dcc3*/
      {
        v61 = 0; /*0x75dcc8*/
        for ( HIBYTE(v81) = 1; v61 < v80; ++v61 ) /*0x75dcd0*/
          v79[v61] = *((_DWORD *)&_ESI->WarheadTypeClass_field_0x1AC->AbstractClass + v61); /*0x75dcde*/
      }
    }
    else
    {
      v79 = 0; /*0x75dceb*/
      HIBYTE(v81) = 0; /*0x75dcf2*/
    }
  }
  p_WarheadTypeClass_field_0x24 = *(unsigned __int8 **)&_ESI->__pad_1B0[8]; /*0x75dd01*/
  LODWORD(v83) = _ESI->WarheadTypeClass_field_0x1BC[0]; /*0x75dd0c*/
  v78 = &TypeList<int>::`vftable'; /*0x75dd0f*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)&_ESI->WarheadTypeClass_field_0x24); /*0x75dd15*/
  IntList = (char *)INIClass::ReadIntList( /*0x75dd22*/
                      (INIClass *)a2,
                      (int)&v85,
                      inited,
                      (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[36],
                      v78,
                      v79,
                      v80,
                      v81,
                      (int)p_WarheadTypeClass_field_0x24,
                      SLODWORD(v83),
                      SHIDWORD(v83));
  v84 = IntList; /*0x75dd2d*/
  if ( &_ESI->__pad_1A0[8] != IntList ) /*0x75dd33*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)&_ESI->__pad_1A0[8] + 12))(&_ESI->__pad_1A0[8]); /*0x75dd39*/
    v64 = *((_DWORD *)v84 + 2); /*0x75dd40*/
    *(_DWORD *)_ESI->__pad_1B0 = v64; /*0x75dd45*/
    if ( v64 ) /*0x75dd48*/
    {
      v65 = __2_YAPAXI_Z(4 * v64); /*0x75dd52*/
      _ESI->WarheadTypeClass_field_0x1AC = (CampaignClass *)v65; /*0x75dd5a*/
      if ( v65 ) /*0x75dd5f*/
      {
        v66 = *(_DWORD *)_ESI->__pad_1B0; /*0x75dd61*/
        v67 = 0; /*0x75dd64*/
        _ESI->__pad_1B0[5] = 1; /*0x75dd68*/
        if ( v66 > 0 ) /*0x75dd6c*/
        {
          do /*0x75dd86*/
          {
            ++v67; /*0x75dd72*/
            *((_DWORD *)_ESI->WarheadTypeClass_field_0x1AC + v67 - 1) = *(_DWORD *)(*((_DWORD *)v84 + 1) + 4 * v67 - 4); /*0x75dd7d*/
          }
          while ( v67 < *(_DWORD *)_ESI->__pad_1B0 ); /*0x75dd86*/
        }
      }
    }
    else
    {
      _ESI->WarheadTypeClass_field_0x1AC = 0; /*0x75dd8a*/
      _ESI->__pad_1B0[5] = 0; /*0x75dd91*/
    }
    IntList = v84; /*0x75dd95*/
  }
  *(_DWORD *)&_ESI->__pad_1B0[8] = *((_DWORD *)IntList + 4); /*0x75dd9c*/
  _ESI->WarheadTypeClass_field_0x1BC[0] = *((_DWORD *)IntList + 5); /*0x75dda2*/
  v68 = *((_DWORD *)IntList + 6); /*0x75dda5*/
  v69 = v85.?; /*0x75dda8*/
  *(_DWORD *)_ESI->__pad_1C0 = v68; /*0x75ddac*/
  v85.DynamicVectorClass = &VectorClass<int>::`vftable'; /*0x75ddb1*/
  if ( v69 && v85.? ) /*0x75ddc1*/
    __3_YAXPAX_Z(v69); /*0x75ddc4*/
  if ( INIClass::GetString( /*0x75dde6*/
         (INIClass *)a2,
         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
         aVerses,
         a10010010010010,
         Destination,
         128) )
  {
    v70 = strtok(Destination, Str); /*0x75de04*/
    v71 = (double *)&_ESI->__pad_44[92]; /*0x75de06*/
    v72 = 11; /*0x75de0c*/
    do /*0x75de58*/
    {
      v73 = strchr(v70, 37); /*0x75de14*/
      HIDWORD(v83) = v70; /*0x75de1e*/
      if ( v73 ) /*0x75de1f*/
      {
        v84 = (char *)atoi((const char *)HIDWORD(v83)); /*0x75de26*/
        __asm /*0x75de2d*/
        {
          fild [esp+14Ch+var_13C]
          fmul ds:dbl_7E3808
        }
      }
      else
      {
        atof((const char *)HIDWORD(v83)); /*0x75de39*/
      }
      HIDWORD(v83) = Str; /*0x75de41*/
      LODWORD(v83) = 0; /*0x75de46*/
      __asm { fstp qword ptr [ebx] } /*0x75de48*/
      *v71++ = _RT1; /*0x75de48*/
      --v72; /*0x75de55*/
      v70 = strtok((char *)LODWORD(v83), (const char *)HIDWORD(v83)); /*0x75de56*/
    }
    while ( v72 ); /*0x75de58*/
  }
  __asm /*0x75de5a*/
  {
    fld qword ptr [esi+0C0h]
    fcomp ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) == 0 ) /*0x75de6b*/
    goto LABEL_70; /*0x75de6b*/
  __asm /*0x75de6d*/
  {
    fld qword ptr [esi+0D0h]
    fcomp ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x75de7e*/
  {
    _ESI->WarheadTypeClass_field_bool_149[0] = 1; /*0x75de85*/
    return 1; /*0x75de80*/
  }
  else
  {
LABEL_70:
    _ESI->WarheadTypeClass_field_bool_149[0] = 0; /*0x75de9a*/
    return 1; /*0x75de98*/
  }
}


// ==== 0x0075DEC0  WarheadTypeClass::ProcessPower  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::ProcessPower(WarheadTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int *v18; // ebx
  int v20; // [esp+Ch] [ebp-4h]

  v3 = AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x75ded0*/
  LOBYTE(v3) = this->__pad_144[0]; /*0x75ded5*/
  Power::FlagProcess((Power *)a2, v3); /*0x75dede*/
  LOBYTE(v4) = this->__pad_144[3]; /*0x75dee3*/
  Power::FlagProcess((Power *)a2, v4); /*0x75deec*/
  LOBYTE(v5) = this->__pad_144[4]; /*0x75def1*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x75defa*/
  LOBYTE(v6) = this->WarheadTypeClass_field_bool_149[0]; /*0x75deff*/
  Power::FlagProcess((Power *)a2, v6); /*0x75df08*/
  LOBYTE(v7) = this->WarheadTypeClass_field_bool_149[1]; /*0x75df0d*/
  Power::FlagProcess((Power *)a2, v7); /*0x75df16*/
  LOBYTE(v8) = this->WarheadTypeClass_field_bool_149[2]; /*0x75df1b*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x75df24*/
  LOBYTE(v9) = this->WarheadTypeClass_field_bool_149[3]; /*0x75df29*/
  Power::FlagProcess((Power *)a2, v9); /*0x75df32*/
  LOBYTE(v10) = this->Conventional[0]; /*0x75df37*/
  Power::FlagProcess((Power *)a2, v10); /*0x75df40*/
  LOBYTE(v11) = this->Conventional[1]; /*0x75df45*/
  v12 = Power::FlagProcess((Power *)a2, v11); /*0x75df4e*/
  LOBYTE(v12) = this->Conventional[2]; /*0x75df53*/
  Power::FlagProcess((Power *)a2, v12); /*0x75df5c*/
  LOBYTE(v13) = this->Conventional[3]; /*0x75df61*/
  Power::FlagProcess((Power *)a2, v13); /*0x75df6a*/
  LOBYTE(v14) = this->CLDisableRed[0]; /*0x75df6f*/
  v15 = Power::FlagProcess((Power *)a2, v14); /*0x75df78*/
  LOBYTE(v15) = this->CLDisableRed[1]; /*0x75df7d*/
  Power::FlagProcess((Power *)a2, v15); /*0x75df86*/
  LOBYTE(v16) = this->CLDisableRed[2]; /*0x75df8b*/
  Power::FlagProcess((Power *)a2, v16); /*0x75df94*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_44[84], *(_DWORD *)&this->__pad_44[88]); /*0x75dfa9*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x100); /*0x75dfb7*/
  Checksummer::Add_double((Checksummer *)a2, (int)this->WarheadTypeClass_field_0xF8, *(_DWORD *)this->__pad_FC); /*0x75dfcc*/
  LOBYTE(v17) = HIBYTE(this->PsychicDamage); /*0x75dfd1*/
  Power::FlagProcess((Power *)a2, v17); /*0x75dfda*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x17C); /*0x75dfe8*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x180); /*0x75dff6*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x184); /*0x75e004*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x188); /*0x75e012*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)&this->Parasite[3], 16); /*0x75e022*/
  v18 = (int *)&this->__pad_44[92]; /*0x75e027*/
  v20 = 11; /*0x75e02d*/
  do /*0x75e04f*/
  {
    Checksummer::Add_double((Checksummer *)a2, *v18, v18[1]); /*0x75e03e*/
    v18 += 2; /*0x75e047*/
    --v20; /*0x75e04b*/
  }
  while ( v20 ); /*0x75e04f*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x114); /*0x75e05a*/
  return Power::TimerProcess(this->WarheadTypeClass_field_0x120); /*0x75e06d*/
}



// ==== 0x0075E080  WarheadTypeClass::vt[03]  this=WarheadTypeClass  sig=csp ====
int __stdcall WarheadTypeClass::g_var_ffdfec(WarheadTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x75e086*/
    return -2147467261; /*0x75e088*/
  *a2 = -1463464540; /*0x75e096*/
  a2[1] = 298979195; /*0x75e09e*/
  a2[2] = 1610642049; /*0x75e0a7*/
  a2[3] = unk_7E984C; /*0x75e0b0*/
  return 0; /*0x75e08d*/
}



// ==== 0x0075E0C0  WarheadTypeClass::SaveLoad_Prefix  this=WarheadTypeClass  sig=csp ====
int __stdcall WarheadTypeClass::SaveLoad_Prefix(WarheadTypeClass *this, int a2)
{
  WarheadTypeClass *v2; // edi
  int *DebrisTypes; // ebp
  int v4; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi
  int n; // esi

  v2 = this; /*0x75e0c4*/
  DebrisTypes = this->DebrisTypes; /*0x75e0ce*/
  (*(void (__thiscall **)(int *))(this->DebrisTypes[0] + 12))(this->DebrisTypes); /*0x75e0d6*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&v2->__pad_1A0[8] + 12))(&v2->__pad_1A0[8]); /*0x75e0e7*/
  v4 = a2; /*0x75e0ea*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x75e0f0*/
  if ( result >= 0 ) /*0x75e0f7*/
  {
    if ( v2 ) /*0x75e0ff*/
    {
      AbstractTypeClass::Init((int)v2, (int)&this); /*0x75e108*/
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v2->__pad_104, 0, 0); /*0x75e117*/
      *(_DWORD *)v2->__pad_104 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75e120*/
      WarheadTypeClass::checkImmunity((WarheadTypeClass *)DebrisTypes, (int)&this); /*0x75e12d*/
      WarheadTypeClass::calculateDamage((WarheadTypeClass *)&v2->__pad_1A0[8], (int)&this); /*0x75e139*/
      v2->Deform = &WarheadTypeClass::`vftable'; /*0x75e13e*/
      v2->WarheadTypeClass_field_0x4 = &WarheadTypeClass::`vftable'; /*0x75e144*/
      v2->WarheadTypeClass_field_0x8 = &WarheadTypeClass::`vftable'; /*0x75e14b*/
      v2->WarheadTypeClass_field_0xC = &WarheadTypeClass::`vftable'; /*0x75e152*/
    }
    if ( v2 != (WarheadTypeClass *)-260 ) /*0x75e161*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v2->__pad_104, 0, 0); /*0x75e169*/
      *(_DWORD *)v2->__pad_104 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75e16e*/
    }
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x75e180*/
    for ( i = 0; i < (int)this; ++i ) /*0x75e18b*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e199*/
      DynamicVector::Add_Alt4((DynamicVector *)v2->__pad_104, &a2); /*0x75e1a7*/
    }
    if ( DebrisTypes ) /*0x75e1b5*/
      TypeList::VoxelAnimConstructor((TypeList *)DebrisTypes); /*0x75e1b9*/
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x75e1ca*/
    for ( j = 0; j < (int)this; ++j ) /*0x75e1d5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e1e3*/
      DynamicVector::Add2((DynamicVector *)DebrisTypes, &a2); /*0x75e1ed*/
    }
    if ( v2 != (WarheadTypeClass *)-424 ) /*0x75e201*/
      TypeList::Construct((TypeList *)&v2->__pad_1A0[8]); /*0x75e205*/
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x75e216*/
    for ( k = 0; k < (int)this; ++k ) /*0x75e221*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e22f*/
      DynamicVector::Add_Alt((DynamicVector *)&v2->__pad_1A0[8], &a2); /*0x75e239*/
    }
    for ( m = 0; m < v2->WarheadTypeClass_field_0x114; ++m ) /*0x75e24f*/
      ObjectPtr::RegisterForTracking( /*0x75e260*/
        (int)&SwizzleManagerClass_Instance,
        (int *)(v2->WarheadTypeClass_field_0x108 + 4 * m));
    for ( n = 0; n < v2->unused_1CC[0]; ++n ) /*0x75e27a*/
      ObjectPtr::RegisterForTracking( /*0x75e28b*/
        (int)&SwizzleManagerClass_Instance,
        (int *)(v2->WarheadTypeClass_field_0x190[0] + 4 * n));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->WarheadTypeClass_field_0x140); /*0x75e2a7*/
    return 0; /*0x75e2ac*/
  }
  return result; /*0x75e2ae*/
}



// ==== 0x0075E2C0  WarheadTypeClass::SaveLoad_Prefix_0  this=WarheadTypeClass  sig=csp ====
int __userpurge WarheadTypeClass::SaveLoad_Prefix_0@<eax>(
        WarheadTypeClass *this,
        int *a2,
        int *WarheadTypeClass_field_0x114,
        int a4,
        int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, (int)WarheadTypeClass_field_0x114); /*0x75e2d1*/
  if ( result >= 0 ) /*0x75e2d8*/
  {
    v7 = *a2; /*0x75e2e4*/
    WarheadTypeClass_field_0x114 = (int *)this->WarheadTypeClass_field_0x114; /*0x75e2f1*/
    (*(void (__stdcall **)(int *, int **, int, _DWORD, int))(v7 + 16))(a2, &WarheadTypeClass_field_0x114, 4, 0, v5); /*0x75e2f5*/
    for ( i = 0; i < a4; ++i ) /*0x75e300*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->WarheadTypeClass_field_0x108 + 4 * i, 4, 0); /*0x75e313*/
    v9 = *a2; /*0x75e323*/
    a4 = this->unused_1CC[0]; /*0x75e32f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x75e333*/
    for ( j = 0; j < a4; ++j ) /*0x75e33e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x75e351*/
        a2,
        this->WarheadTypeClass_field_0x190[0] + 4 * j,
        4,
        0);
    v11 = *a2; /*0x75e361*/
    a4 = *(_DWORD *)&this->__pad_1B0[8]; /*0x75e36d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x75e371*/
    for ( k = 0; k < (int)WarheadTypeClass_field_0x114; ++k ) /*0x75e37c*/
      (*(void (__stdcall **)(int *, char *, int, _DWORD))(*a2 + 16))( /*0x75e38f*/
        a2,
        (char *)&this->WarheadTypeClass_field_0x1AC->AbstractClass + 4 * k,
        4,
        0);
    return 0; /*0x75e399*/
  }
  return result; /*0x75e39c*/
}



// ==== 0x0075E3B0  WarheadTypeClass::FindOrCreate  this=AbstractTypeClass  sig=csp ====
int __thiscall WarheadTypeClass_FindOrCreate(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x75e3cc*/
    return 0; /*0x75e42f*/
  v2 = 0; /*0x75e3dd*/
  if ( g_WarheadTypePool <= 0 ) /*0x75e3e1*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0x1D0u) ) /*0x75e40b*/
      return WarheadTypeClass::Construct(Source); /*0x75e421*/
    return 0; /*0x75e415*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_8874C4 + v2) + 36), Source) ) /*0x75e3fa*/
  {
    if ( ++v2 >= g_WarheadTypePool ) /*0x75e404*/
      goto LABEL_6; /*0x75e404*/
  }
  return *((_DWORD *)dword_8874C4 + v2); /*0x75e41f*/
}



// ==== 0x0075E440  WarheadTypeClass::GetDamage  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::GetDamage(WarheadTypeClass *this, int a2, int a3)
{
  int v3; // eax
  char *pad_104; // esi
  int result; // eax
  int v6; // ecx
  int v7; // ecx

  v3 = a2; /*0x75e440*/
  if ( (void *)a2 == this->WarheadTypeClass_field_0x140 ) /*0x75e44c*/
    this->WarheadTypeClass_field_0x140 = 0; /*0x75e44e*/
  pad_104 = this->__pad_104; /*0x75e459*/
  a2 = v3; /*0x75e463*/
  result = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)this->__pad_104 + 16))(this->__pad_104, &a2); /*0x75e46c*/
  if ( result != -1 ) /*0x75e472*/
  {
    v6 = *((_DWORD *)pad_104 + 4); /*0x75e474*/
    if ( result < v6 ) /*0x75e479*/
    {
      v7 = v6 - 1; /*0x75e47b*/
      for ( *((_DWORD *)pad_104 + 4) = v7; /*0x75e481*/
            result < *((_DWORD *)pad_104 + 4);
            *(_DWORD *)(*((_DWORD *)pad_104 + 1) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)pad_104 + 1) + 4 * result) )
      {
        ++result; /*0x75e486*/
      }
    }
  }
  return result; /*0x75e496*/
}



// ==== 0x0075E4A0  Crate::applyCrateEffect  this=Crate  sig=csp ====
int __thiscall Crate::applyCrateEffect(Crate *this)
{
  int v1; // esi

  v1 = 0; /*0x75e4a6*/
  if ( g_WarheadTypePool <= 0 ) /*0x75e4ad*/
    return 0; /*0x75e4d2*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_8874C4 + v1) + 36), (char *)this) ) /*0x75e4c6*/
  {
    if ( ++v1 >= g_WarheadTypePool ) /*0x75e4d0*/
      return 0; /*0x75e4d0*/
  }
  return *((_DWORD *)dword_8874C4 + v1); /*0x75e4d2*/
}



// ==== 0x0075E4F0  WarheadTypeClass::GetObjectSize  this=WarheadTypeClass  sig=csp ====
int WarheadTypeClass::GetObjectSize(WarheadTypeClass *this)
{
  return 464; /*0x75e4f5*/
}



// ==== 0x0075E500  WarheadTypeClass::GetTypeIdentifier  this=WarheadTypeClass  sig=csp ====
int WarheadTypeClass::GetTypeIdentifier(WarheadTypeClass *this)
{
  return 50; /*0x75e505*/
}



// ==== 0x0075E510  WarheadTypeClass::Destructor  this=WarheadTypeClass  sig=csp ====
void **__thiscall WarheadTypeClass::Destructor(WarheadTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  CampaignClass *WarheadTypeClass_field_0x1AC; // eax
  void *v6; // eax
  void *WarheadTypeClass_field_0x108; // eax
  WarheadTypeClass *v9; // [esp+4h] [ebp-4h] BYREF

  this->Deform = &WarheadTypeClass::`vftable'; /*0x75e516*/
  this->WarheadTypeClass_field_0x4 = &WarheadTypeClass::`vftable'; /*0x75e51c*/
  this->WarheadTypeClass_field_0x8 = &WarheadTypeClass::`vftable'; /*0x75e523*/
  this->WarheadTypeClass_field_0xC = &WarheadTypeClass::`vftable'; /*0x75e52a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x75e531*/
  v9 = this; /*0x75e546*/
  v3 = ((int (__thiscall *)(WarheadTypeClass **, WarheadTypeClass **))WarheadTypeClass_Array->WarheadTypeClass_field_0x10)( /*0x75e54a*/
         &WarheadTypeClass_Array,
         &v9);
  if ( v3 != -1 && v3 < g_WarheadTypePool && v3 < --g_WarheadTypePool ) /*0x75e565*/
  {
    do /*0x75e57d*/
    {
      ++v3; /*0x75e56d*/
      *((_DWORD *)dword_8874C4 + v3 - 1) = *((_DWORD *)dword_8874C4 + v3); /*0x75e571*/
    }
    while ( v3 < g_WarheadTypePool ); /*0x75e57d*/
  }
  v9 = this; /*0x75e58f*/
  v4 = (*(int (__thiscall **)(int *, WarheadTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x75e593*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v9);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x75e5a3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x75e5a8*/
    for ( ; /*0x75e5ae*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x75e5b6*/
    }
  }
  WarheadTypeClass_field_0x1AC = this->WarheadTypeClass_field_0x1AC; /*0x75e5c8*/
  *(_DWORD *)&this->__pad_1A0[8] = &VectorClass<int>::`vftable'; /*0x75e5d1*/
  if ( WarheadTypeClass_field_0x1AC && this->__pad_1B0[5] ) /*0x75e5df*/
  {
    __3_YAXPAX_Z(WarheadTypeClass_field_0x1AC); /*0x75e5e8*/
    this->WarheadTypeClass_field_0x1AC = 0; /*0x75e5f0*/
  }
  this->__pad_1B0[5] = 0; /*0x75e5f6*/
  *(_DWORD *)this->__pad_1B0 = 0; /*0x75e5fc*/
  v6 = (void *)this->WarheadTypeClass_field_0x190[0]; /*0x75e602*/
  this->DebrisTypes[0] = (int)&VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75e608*/
  if ( v6 && BYTE1(this->MinDebris) ) /*0x75e616*/
  {
    __3_YAXPAX_Z(v6); /*0x75e61f*/
    this->WarheadTypeClass_field_0x190[0] = 0; /*0x75e627*/
  }
  BYTE1(this->MinDebris) = 0; /*0x75e62d*/
  this->MaxDebris = 0; /*0x75e633*/
  WarheadTypeClass_field_0x108 = (void *)this->WarheadTypeClass_field_0x108; /*0x75e639*/
  *(_DWORD *)this->__pad_104 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75e63f*/
  if ( WarheadTypeClass_field_0x108 && this->__pad_10C[5] ) /*0x75e64d*/
  {
    __3_YAXPAX_Z(WarheadTypeClass_field_0x108); /*0x75e656*/
    this->WarheadTypeClass_field_0x108 = 0; /*0x75e65e*/
  }
  this->__pad_10C[5] = 0; /*0x75e666*/
  *(_DWORD *)this->__pad_10C = 0; /*0x75e66c*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x75e672*/
  if ( (a2 & 1) != 0 ) /*0x75e67e*/
    __3_YAXPAX_Z(this); /*0x75e681*/
  return &this->Deform; /*0x75e68b*/
}



// ==== 0x0075E690  WarheadTypeClass::checkImmunity  this=TypeList  sig=csp ====
_DWORD *__thiscall WarheadTypeClass::checkImmunity(WarheadTypeClass *this, int a2)
{
  this->Deform = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75e692*/
  return &this->Deform; /*0x75e698*/
}



// ==== 0x0075E6A0  WarheadTypeClass::calculateDamage  this=TypeList  sig=csp ====
_DWORD *__thiscall WarheadTypeClass::calculateDamage(WarheadTypeClass *this, int a2)
{
  this->Deform = &TypeList<int>::`vftable'; /*0x75e6a2*/
  return &this->Deform; /*0x75e6a8*/
}



// ==== 0x0075E6B0  Voxel_Section::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall Voxel_Section::Constructor(Voxel_Section *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Voxel_Section_field_0x04 = 0; /*0x75e6bd*/
  this->Capacity = 0; /*0x75e6c0*/
  this->IsInitialized = 1; /*0x75e6c3*/
  this->IsAllocated = 0; /*0x75e6c7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75e6ca*/
  if ( this != (Voxel_Section *)a2 ) /*0x75e6d0*/
  {
    Vector::Cleanup2((_VectorClass_PBVVoxelAnimTypeClass *)this); /*0x75e6d2*/
    v3 = a2[2]; /*0x75e6d8*/
    this->Capacity = v3; /*0x75e6dd*/
    if ( v3 ) /*0x75e6e0*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x75e6e6*/
      this->Voxel_Section_field_0x04 = v4; /*0x75e6f0*/
      if ( v4 ) /*0x75e6f3*/
      {
        v5 = this->Capacity; /*0x75e6f5*/
        v6 = 0; /*0x75e6f8*/
        this->IsAllocated = 1; /*0x75e6fc*/
        if ( v5 > 0 ) /*0x75e700*/
        {
          do /*0x75e714*/
          {
            *(_DWORD *)(this->Voxel_Section_field_0x04 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x75e70b*/
            ++v6; /*0x75e711*/
          }
          while ( v6 < this->Capacity ); /*0x75e714*/
        }
      }
    }
    else
    {
      this->Voxel_Section_field_0x04 = 0; /*0x75e718*/
      this->IsAllocated = 0; /*0x75e71b*/
    }
  }
  this->Items = a2[4]; /*0x75e721*/
  *((_DWORD *)this + 5) = a2[5]; /*0x75e727*/
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75e72a*/
  return this->__pad_0; /*0x75e732*/
}



// ==== 0x0075E740  sub_75E740  this=-  sig=ida-proto ====
void sub_75E740()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75e74c*/
  dbl_B45D80 = Math::Sqrt(v0 + v0); /*0x75e75e*/
}



// ==== 0x0075E770  sub_75E770  this=-  sig=ida-proto ====
void sub_75E770()
{
  dbl_B725C0 = dbl_B45D80 / 60.0; /*0x75e77c*/
}



// ==== 0x0075E790  sub_75E790  this=-  sig=ida-proto ====
void sub_75E790()
{
  dbl_B46688 = 1.0 / dbl_B725C0; /*0x75e79c*/
}



// ==== 0x0075E7B0  sub_75E7B0  this=-  sig=ida-proto ====
void sub_75E7B0()
{
  dbl_B46680 = 0.0174532925199433 * 45.0; /*0x75e7bc*/
}



// ==== 0x0075E7D0  sub_75E7D0  this=-  sig=ida-proto ====
void sub_75E7D0()
{
  dbl_B45D90 = 0.0174532925199433 * 60.0; /*0x75e7dc*/
}



// ==== 0x0075E7F0  sub_75E7F0  this=-  sig=ida-proto ====
void sub_75E7F0()
{
  dbl_B45D60 = 0.0174532925199433 * 90.0; /*0x75e7fc*/
}



// ==== 0x0075E810  sub_75E810  this=-  sig=ida-proto ====
__int64 sub_75E810()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45D60 - dbl_B45D90); /*0x75e822*/
  result = Math::RoundToInt(v0 * dbl_B45D80 * 0.5); /*0x75e836*/
  dword_B725C8 = result; /*0x75e83b*/
  return result; /*0x75e840*/
}



// ==== 0x0075E850  sub_75E850  this=-  sig=ida-proto ====
void sub_75E850()
{
  dbl_B45D98 = Math::ArcTan((double)dword_B725C8 * 0.00390625); /*0x75e867*/
}



// ==== 0x0075E880  sub_75E880  this=-  sig=ida-proto ====
void sub_75E880()
{
  dbl_B46640 = Math::ArcTan((double)(2 * dword_B725C8) / dbl_B45D80); /*0x75e8a2*/
}



// ==== 0x0075E8B0  sub_75E8B0  this=-  sig=ida-proto ====
__int64 sub_75E8B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B725C8) + 0.5); /*0x75e8cb*/
  dword_B725BC = result; /*0x75e8d0*/
  return result; /*0x75e8d6*/
}



// ==== 0x0075E8E0  sub_75E8E0  this=-  sig=ida-proto ====
int sub_75E8E0()
{
  word_B45D78 = 0; /*0x75e8e2*/
  word_B45D7A = 0; /*0x75e8e8*/
  return 0; /*0x75e8ee*/
}



// ==== 0x0075E8F0  sub_75E8F0  this=-  sig=ida-proto ====
int sub_75E8F0()
{
  dword_B46248 = 0; /*0x75e8f2*/
  dword_B4624C = 0; /*0x75e8f7*/
  dword_B46250 = 0; /*0x75e8fc*/
  return 0; /*0x75e901*/
}



// ==== 0x0075E910  sub_75E910  this=-  sig=ida-proto ====
int sub_75E910()
{
  dword_B46698 = 0; /*0x75e915*/
  dword_B46690 = 128; /*0x75e91f*/
  dword_B46694 = 128; /*0x75e924*/
  return 128; /*0x75e929*/
}



// ==== 0x0075E930  sub_75E930  this=-  sig=ida-proto ====
int sub_75E930()
{
  dword_B45D68 = 0; /*0x75e932*/
  dword_B45D6C = 0; /*0x75e937*/
  dword_B45D70 = 0; /*0x75e93c*/
  dword_B45D74 = 0; /*0x75e941*/
  return 0; /*0x75e946*/
}



// ==== 0x0075E950  WaveClass::Constructor  this=WaveClass  sig=csp ====
void **__thiscall WaveClass::Constructor(WaveClass *this, int *a2, _DWORD *a3, void *a4, void *a5, void *a6)
{
  double v6; // st7
  int v8; // edx
  int v10; // eax
  int v11; // eax
  int *WaveClass_field_14C; // edx
  int WaveClass_field_DC; // eax
  int v14; // edx
  int v15; // edx
  Voxel *v16; // [esp+8h] [ebp-10h]

  ObjectClass::ctor((ObjectClass *)this); /*0x75e956*/
  this->WaveClass_field_138 = 0; /*0x75e969*/
  this->WaveClass_field_140 = 0; /*0x75e96f*/
  this->Target = a6; /*0x75e975*/
  this->Type[0] = (int)a5; /*0x75e97b*/
  this->WaveClass_field_12C = 1; /*0x75e981*/
  this->WaveClass_field_12D = 0; /*0x75e988*/
  this->WaveIntensity = 100; /*0x75e98e*/
  this->WaveClass_field_134 = 0; /*0x75e998*/
  this->WaveClass_field_13C = 0; /*0x75e99e*/
  this->WaveClass_field_144 = 0; /*0x75e9a4*/
  this->WaveClass_field_148 = 0; /*0x75e9aa*/
  this->WaveClass_field_14C = 0; /*0x75e9b0*/
  this->WaveClass_field_1A0 = 0; /*0x75e9b6*/
  this->WaveClass_field_1A4 = 0; /*0x75e9bc*/
  this->WaveClass_field_1A8 = 0; /*0x75e9c2*/
  this->LaserIntensity = 0; /*0x75e9ce*/
  this->Owner = a4; /*0x75e9d4*/
  FrameSnapshot::Init((FrameSnapshot *)this->Facing); /*0x75e9da*/
  *((_DWORD *)this + 125) = 0; /*0x75e9e1*/
  *((_DWORD *)this + 126) = 5; /*0x75e9e7*/
  *((_BYTE *)this + 508) = 1; /*0x75e9f1*/
  *((_BYTE *)this + 509) = 0; /*0x75e9f8*/
  this->WaveClass_field_128 = &VectorClass<CellClass *>::`vftable'; /*0x75e9fe*/
  *((_DWORD *)this + 125) = __2_YAPAXI_Z(0x14u); /*0x75ea18*/
  *((_BYTE *)this + 509) = 1; /*0x75ea1e*/
  this->WaveClass_field_128 = &DynamicVectorClass<CellClass *>::`vftable'; /*0x75ea25*/
  this->WaveClass_field_12D = 10; /*0x75ea2f*/
  this->WaveClass_field_12C = 0; /*0x75ea39*/
  this->ObjectClass = &WaveClass::`vftable'; /*0x75ea3f*/
  this->? = &WaveClass::`vftable'; /*0x75ea45*/
  this->? = &WaveClass::`vftable'; /*0x75ea4b*/
  this->? = &off_7F6BC8; /*0x75ea52*/
  v8 = a2[1] - a3[1]; /*0x75ea66*/
  Math::Sqrt((double)((*a2 - *a3) * (*a2 - *a3) + v8 * v8)); /*0x75ea7e*/
  if ( v6 >= 240.0 ) /*0x75ea91*/
  {
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x75eaa4*/
    if ( *(int *)&stru_A8EB00.?[100] < *(int *)&stru_A8EB00.?[92] /*0x75eadd*/
      || (stru_A8EB00.?[97] || !*(_DWORD *)&stru_A8EB00.?[92])
      && *(int *)&stru_A8EB00.?[104] > 0
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[84] + 8))(
           &stru_A8EB00.?[84],
           *(_DWORD *)&stru_A8EB00.?[92] + *(_DWORD *)&stru_A8EB00.?[104],
           0) )
    {
      v10 = (*(_DWORD *)&stru_A8EB00.?[100])++; /*0x75eaea*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v10) = this; /*0x75eaf9*/
    }
    if ( !byte_B725CC ) /*0x75eb02*/
      Voxel::InitDistanceTable(v16); /*0x75eb04*/
    if ( this->Type[0] == 3 ) /*0x75eb10*/
      Voxel::LightRender((Voxel *)this, a2, (int)a3); /*0x75eb1a*/
    else
      Voxel::SectionProject((Voxel *)this, a2, (int)a3); /*0x75eb29*/
    this->WaveClass_field_1A8 = 0; /*0x75eb3c*/
    this->WaveClass_field_1CC = CalcMathFacing8(&this->WaveClass_field_CC, &this->WaveClass_field_E4); /*0x75eb51*/
    WaveClass::DrawWave(this, this->someCoords, 0); /*0x75eb57*/
    v11 = this->Type[0]; /*0x75eb5c*/
    if ( v11 > 0 && v11 <= 2 ) /*0x75eb69*/
    {
      WaveClass_field_14C = (int *)this->WaveClass_field_14C; /*0x75eb6b*/
      WaveClass_field_DC = this->WaveClass_field_DC; /*0x75eb71*/
      this->WaveClass_field_138 = 0; /*0x75eb77*/
      this->WaveClass_field_13C = 1072693248; /*0x75eb7d*/
      this->LaserIntensity = 160; /*0x75eb87*/
      *WaveClass_field_14C = WaveClass_field_DC; /*0x75eb91*/
      WaveClass_field_14C[1] = this->WaveClass_field_E0; /*0x75eb99*/
      v14 = this->WaveClass_field_14C; /*0x75eb9c*/
      *(_DWORD *)(v14 + 8) = this->WaveClass_field_D4; /*0x75eba8*/
      *(_DWORD *)(v14 + 12) = this->WaveClass_field_D8; /*0x75ebb1*/
      v15 = this->WaveClass_field_14C; /*0x75ebb4*/
      *(_DWORD *)(v15 + 16) = this->WaveClass_field_E4; /*0x75ebbc*/
      *(_DWORD *)(v15 + 20) = this->WaveClass_field_E8; /*0x75ebc2*/
    }
    Voxel::TransformMatrix((int)this); /*0x75ebc7*/
    return &this->ObjectClass; /*0x75ebcc*/
  }
  else
  {
    ObjectClass::Destroy((ObjectClass *)this); /*0x75ea95*/
    return &this->ObjectClass; /*0x75ea9a*/
  }
}



// ==== 0x0075EBE0  VoxelAnimClass::Constructor  this=WaveClass  sig=csp ====
int __thiscall VoxelAnimClass::Constructor(VoxelAnimClass *this)
{
  int v2; // eax
  Voxel *v4; // [esp+0h] [ebp-8h]

  ObjectClass::ctor((ObjectClass *)this); /*0x75ebe4*/
  this->__pad_12C[0] = 1; /*0x75ebeb*/
  *(_DWORD *)&this->__pad_12C[12] = 0; /*0x75ebf2*/
  this->VoxelAnimClass_field_0x140 = 0; /*0x75ebf8*/
  *(_DWORD *)&this->__pad_98[20] = 0; /*0x75ebfe*/
  this->__pad_12C[1] = 0; /*0x75ec04*/
  *(_DWORD *)&this->__pad_12C[4] = 100; /*0x75ec0a*/
  *(_DWORD *)&this->__pad_12C[16] = 0; /*0x75ec14*/
  *(_DWORD *)this->__pad_144 = 0; /*0x75ec1a*/
  *(_DWORD *)&this->__pad_144[4] = 0; /*0x75ec20*/
  *(_DWORD *)&this->__pad_144[8] = 0; /*0x75ec26*/
  *(_DWORD *)&this->__pad_144[92] = 0; /*0x75ec2c*/
  *(_DWORD *)&this->__pad_144[96] = 0; /*0x75ec32*/
  *(_DWORD *)&this->__pad_144[100] = 0; /*0x75ec38*/
  *(_DWORD *)&this->__pad_144[140] = 0; /*0x75ec44*/
  *(_DWORD *)&this->__pad_144[144] = 0; /*0x75ec4a*/
  FrameSnapshot::Init((FrameSnapshot *)&this->__pad_144[148]); /*0x75ec50*/
  *(_DWORD *)&this->__pad_144[176] = 0; /*0x75ec57*/
  *(_DWORD *)&this->__pad_144[180] = 5; /*0x75ec5d*/
  this->__pad_144[184] = 1; /*0x75ec67*/
  this->__pad_144[185] = 0; /*0x75ec6e*/
  *(_DWORD *)&this->__pad_144[172] = &VectorClass<CellClass *>::`vftable'; /*0x75ec74*/
  *(_DWORD *)&this->__pad_144[176] = __2_YAPAXI_Z(0x14u); /*0x75ec83*/
  this->__pad_144[185] = 1; /*0x75ec89*/
  *(_DWORD *)&this->__pad_144[172] = &DynamicVectorClass<CellClass *>::`vftable'; /*0x75ec90*/
  *(_DWORD *)&this->__pad_144[192] = 10; /*0x75ec9a*/
  *(_DWORD *)&this->__pad_144[188] = 0; /*0x75eca4*/
  this->VoxelAnimClass_field_0x0 = &WaveClass::`vftable'; /*0x75ecaa*/
  this->VoxelAnimClass_field_0x4[0] = (int)&WaveClass::`vftable'; /*0x75ecb0*/
  this->VoxelAnimClass_field_0x8 = &WaveClass::`vftable'; /*0x75ecb7*/
  *(_DWORD *)this->__pad_C = &off_7F6BC8; /*0x75ecbe*/
  if ( *(int *)&stru_A8EB00.?[100] < *(int *)&stru_A8EB00.?[92] /*0x75ecfb*/
    || (stru_A8EB00.?[97] || !*(_DWORD *)&stru_A8EB00.?[92])
    && *(int *)&stru_A8EB00.?[104] > 0
    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[84] + 8))(
         &stru_A8EB00.?[84],
         *(_DWORD *)&stru_A8EB00.?[92] + *(_DWORD *)&stru_A8EB00.?[104],
         0) )
  {
    v2 = (*(_DWORD *)&stru_A8EB00.?[100])++; /*0x75ed08*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v2) = this; /*0x75ed17*/
  }
  if ( !byte_B725CC ) /*0x75ed20*/
    Voxel::InitDistanceTable(v4); /*0x75ed22*/
  return (int)this; /*0x75ed29*/
}



// ==== 0x0075ED30  WaveClass::Destructor  this=WaveClass  sig=csp ====
int __thiscall WaveClass::Destructor(WaveClass *this)
{
  int v2; // eax
  void *v3; // eax
  WaveClass *v5; // [esp+8h] [ebp-4h] BYREF

  this->ObjectClass = &WaveClass::`vftable'; /*0x75ed37*/
  this->? = &WaveClass::`vftable'; /*0x75ed3d*/
  this->? = &WaveClass::`vftable'; /*0x75ed44*/
  this->? = &off_7F6BC8; /*0x75ed4b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x75ed52*/
  v5 = this; /*0x75ed67*/
  v2 = (*(int (__thiscall **)(_BYTE *, WaveClass **))(*(_DWORD *)&stru_A8EB00.?[84] + 16))(&stru_A8EB00.?[84], &v5); /*0x75ed6b*/
  if ( v2 != -1 && v2 < *(int *)&stru_A8EB00.?[100] ) /*0x75ed7b*/
  {
    --*(_DWORD *)&stru_A8EB00.?[100]; /*0x75ed80*/
    for ( ; /*0x75ed86*/
          v2 < *(int *)&stru_A8EB00.?[100];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v2 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v2) )
    {
      ++v2; /*0x75ed8e*/
    }
  }
  (*(void (__thiscall **)(char *))(this->WaveClass_field_128 + 12))((char *)this + 496); /*0x75edae*/
  v3 = (void *)*((_DWORD *)this + 125); /*0x75edb1*/
  this->WaveClass_field_128 = &VectorClass<CellClass *>::`vftable'; /*0x75edb4*/
  if ( v3 && *((_BYTE *)this + 509) ) /*0x75edbe*/
  {
    __3_YAXPAX_Z(v3); /*0x75edc6*/
    *((_DWORD *)this + 125) = 0; /*0x75edce*/
  }
  *((_BYTE *)this + 509) = 0; /*0x75edd7*/
  *((_DWORD *)this + 126) = 0; /*0x75eddb*/
  return ObjectClass::Dtor((ObjectClass *)this); /*0x75ede7*/
}



// ==== 0x0075EDF0  Voxel::BlendShadowColor  this=Voxel  sig=csp ====
int __thiscall Voxel::BlendShadowColor(Voxel *this, int a2, int a3, int a4, _WORD *a5)
{
  __int64 v5; // rax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int result; // eax

  v5 = word_B46254[(int)this->Voxel_field_0x130 /*0x75ee44*/
                 + (unsigned __int16)word_B4669C[300 * a4 + abs32(a2 - (unsigned int)this->Voxel_field_0xCC - a3)]];
  LODWORD(v5) = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x75ee47*/
  v6 = dword_B46648[(_DWORD)v5]; /*0x75ee50*/
  WORD2(v5) = a5[*(_DWORD *)&this->__pad_134[4 * v5 + 212]]; /*0x75ee57*/
  v7 = ((v6 * (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitMask_Green) << g_BitMask_Blue)) >> 8) /*0x75eeb8*/
     + (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitMask_Green) << g_BitMask_Blue);
  v8 = ((v6 * (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Blue) << g_BitMask_Red)) >> 8) /*0x75eec6*/
     + (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Blue) << g_BitMask_Red);
  v9 = (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Red) << g_BitShift_Green_0); /*0x75eec8*/
  if ( v8 > 255 ) /*0x75eed3*/
    v8 = 255; /*0x75eed5*/
  v10 = 255; /*0x75eee0*/
  if ( v7 <= 255 ) /*0x75eee5*/
    v10 = v7; /*0x75eee7*/
  result = v8 >> g_BitMask_Red << g_BitShift_Blue; /*0x75ef07*/
  *a5 = (v9 >> g_BitShift_Green_0 << g_BitShift_Red) | result | (v10 >> g_BitMask_Blue << g_BitMask_Green); /*0x75ef19*/
  return result; /*0x75ef1c*/
}



// ==== 0x0075EF30  sub_75EF30  this=-  sig=csp ====
int __stdcall sub_75EF30(_WORD *a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int result; // eax

  v2 = (unsigned __int8)((unsigned __int8)(*a1 >> g_BitShift_Red) << g_BitShift_Green_0) + (char)(a2 >> 2); /*0x75efa7*/
  v3 = (unsigned __int8)((unsigned __int8)(*a1 >> g_BitShift_Blue) << g_BitMask_Red) + ((96 * a2) >> 8); /*0x75efbf*/
  if ( v3 > 255 ) /*0x75efc6*/
    v3 = 255; /*0x75efc8*/
  if ( v2 > 255 ) /*0x75efe0*/
    v2 = 255; /*0x75efe2*/
  result = v3 >> g_BitMask_Red << g_BitShift_Blue; /*0x75f00f*/
  *a1 = result /*0x75f013*/
      | ((int)(unsigned __int8)((unsigned __int8)(*a1 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
      | (v2 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x75f016*/
}



// ==== 0x0075F020  Voxel::InitDistanceTable  this=Voxel  sig=csp ====
int Voxel::InitDistanceTable(Voxel *this)
{
  double v1; // st7
  int v2; // ebp
  __int16 *v3; // edi
  int i; // esi
  __int16 *v5; // esi
  __int16 *v6; // esi
  int *v7; // ecx
  int result; // eax
  double v9; // [esp+0h] [ebp-20h]
  double v10; // [esp+0h] [ebp-20h]
  double v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+1Ch] [ebp-4h]
  int v13; // [esp+1Ch] [ebp-4h]
  int v14; // [esp+1Ch] [ebp-4h]

  byte_B725CC = 1; /*0x75f02d*/
  v2 = 0; /*0x75f034*/
  v3 = word_B4669C; /*0x75f036*/
  do /*0x75f07a*/
  {
    for ( i = 0; i < 300; ++i ) /*0x75f03d*/
    {
      v12 = v2 * v2 + i * i; /*0x75f04c*/
      __asm /*0x75f050*/
      {
        fild [esp+20h+var_4]
        fstp [esp+20h+var_20]; double
      }
      Math::Sqrt(v9); /*0x75f057*/
      *v3++ = Math::RoundToInt(v1); /*0x75f064*/
    }
    ++v2; /*0x75f073*/
  }
  while ( (int)v3 < (int)&dword_B725BC ); /*0x75f07a*/
  v5 = word_B46254; /*0x75f07e*/
  v13 = 0; /*0x75f083*/
  do /*0x75f0c5*/
  {
    __asm { fild [esp+18h+var_4] } /*0x75f087*/
    __asm
    {
      fmul ds:dbl_7F6DE0
      fstp [esp+20h+var_20]; double
    }
    Math::SinCos(v10); /*0x75f097*/
    __asm { fmul ds:dbl_7ED8D8 } /*0x75f09c*/
    __asm { fadd ds:dbl_7EDB10 }
    *v5++ = Math::RoundToInt(v1); /*0x75f0b4*/
    ++v13; /*0x75f0c1*/
  }
  while ( (int)v5 < (int)word_B4663C ); /*0x75f0c5*/
  v14 = 0; /*0x75f0c7*/
  v6 = word_B45E68; /*0x75f0cb*/
  do /*0x75f10e*/
  {
    __asm { fild [esp+18h+var_4] } /*0x75f0d0*/
    __asm
    {
      fmul ds:dbl_7E3860
      fstp [esp+20h+var_20]; double
    }
    Math::SinCos(v11); /*0x75f0e0*/
    __asm { fmul ds:dbl_7ED8D8 } /*0x75f0e5*/
    __asm { fadd ds:dbl_7EDB10 }
    *v6++ = Math::RoundToInt(v1); /*0x75f0fd*/
    ++v14; /*0x75f10a*/
  }
  while ( (int)v6 < (int)&dword_B46248 ); /*0x75f10e*/
  v7 = dword_B46648; /*0x75f110*/
  for ( result = 110; result < 214; result += 8 ) /*0x75f115*/
    *v7++ = result; /*0x75f11a*/
  return result; /*0x75f129*/
}



// ==== 0x0075F140  Voxel::loadSectionData  this=Voxel  sig=csp ====
int __thiscall Voxel::loadSectionData(Voxel *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  char *v5; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75f14e*/
  *(_DWORD *)&this->__pad_134[120] = -v2; /*0x75f159*/
  *(_DWORD *)&this->__pad_134[124] = 1 - v2; /*0x75f164*/
  *(_DWORD *)&this->__pad_134[132] = v2 + 1; /*0x75f16a*/
  *(_DWORD *)&this->__pad_134[136] = v2; /*0x75f176*/
  *(_DWORD *)&this->__pad_134[140] = v2 - 1; /*0x75f17c*/
  v3 = *(_DWORD *)&this->__pad_134[152]; /*0x75f182*/
  v4 = -1 - v2; /*0x75f188*/
  *(_DWORD *)&this->__pad_134[212] = 0; /*0x75f18c*/
  *(_DWORD *)&this->__pad_134[216] = 0; /*0x75f192*/
  v5 = &this->__pad_134[4 * v3 + 120]; /*0x75f198*/
  *(_DWORD *)&this->__pad_134[128] = 1; /*0x75f19f*/
  *(_DWORD *)&this->__pad_134[144] = -1; /*0x75f1a9*/
  *(_DWORD *)&this->__pad_134[148] = v4; /*0x75f1b3*/
  *(_DWORD *)&this->__pad_134[220] = *(_DWORD *)v5; /*0x75f1bb*/
  *(_DWORD *)&this->__pad_134[224] = *(_DWORD *)v5; /*0x75f1c3*/
  *(_DWORD *)&this->__pad_134[228] = *(_DWORD *)v5; /*0x75f1cb*/
  *(_DWORD *)&this->__pad_134[232] = *(_DWORD *)v5; /*0x75f1d3*/
  *(_DWORD *)&this->__pad_134[236] = *(_DWORD *)v5; /*0x75f1db*/
  *(_DWORD *)&this->__pad_134[240] = 2 * *(_DWORD *)v5; /*0x75f1e5*/
  *(_DWORD *)&this->__pad_134[244] = 2 * *(_DWORD *)v5; /*0x75f1ef*/
  *(_DWORD *)&this->__pad_134[248] = 2 * *(_DWORD *)v5; /*0x75f1f9*/
  *(_DWORD *)&this->__pad_134[252] = 3 * *(_DWORD *)v5; /*0x75f204*/
  *(_DWORD *)&this->__pad_134[256] = 3 * *(_DWORD *)v5; /*0x75f20f*/
  result = 3 * *(_DWORD *)v5; /*0x75f217*/
  *(_DWORD *)&this->__pad_134[260] = result; /*0x75f21a*/
  return result; /*0x75f220*/
}



// ==== 0x0075F230  CalcMathFacing8  this=RecoilData  sig=csp ====
int __fastcall sub_75F230(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  double v4; // st7
  double v5; // st6
  int v6; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  double v11; // [esp+10h] [ebp-8h]

  v2 = *a2 - *a1; /*0x75f239*/
  v3 = a1[1] - a2[1]; /*0x75f246*/
  v11 = Math::SinCos(0.3926990816987241); /*0x75f25a*/
  v4 = v11 / Math::ArcTan2(0.3926990816987241); /*0x75f26d*/
  if ( !v2 ) /*0x75f276*/
    goto LABEL_11; /*0x75f276*/
  v5 = (double)v3 / (double)v2; /*0x75f280*/
  if ( v5 >= 1.0 / v4 ) /*0x75f299*/
  {
    if ( v5 >= v4 ) /*0x75f2ba*/
      goto LABEL_8; /*0x75f2ba*/
  }
  else if ( v5 >= v4 ) /*0x75f29e*/
  {
    v6 = (v2 <= 0) - 1; /*0x75f2a8*/
    LOBYTE(v6) = v6 & 0xFC; /*0x75f2ac*/
    return v6 + 5; /*0x75f2b6*/
  }
  if ( v5 >= -v4 ) /*0x75f2c9*/
  {
    v8 = (v2 <= 0) - 1; /*0x75f2d3*/
    LOBYTE(v8) = v8 & 0xFC; /*0x75f2d7*/
    return v8 + 6; /*0x75f2e1*/
  }
LABEL_8:
  if ( v5 < -v4 && v5 >= -1.0 / v4 ) /*0x75f304*/
  {
    v9 = (v2 <= 0) - 1; /*0x75f30e*/
    LOBYTE(v9) = v9 & 0xFC; /*0x75f310*/
    return v9 + 7; /*0x75f318*/
  }
LABEL_11:
  v10 = (v3 <= 0) - 1; /*0x75f31d*/
  LOBYTE(v10) = v10 & 0xFC; /*0x75f326*/
  return v10 + 4; /*0x75f2b3*/
}



// ==== 0x0075F330  WaveClass::DamageArea  this=WaveClass  sig=csp ====
char __thiscall WaveClass::DamageArea(WaveClass *this, _DWORD *a2)
{
  ObjectClass *v2; // ebx
  void *Owner; // eax
  _DWORD *v5; // ecx
  char *v6; // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // esi
  int v14; // edx
  ObjectClass *v16; // [esp+4h] [ebp-18h]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h] BYREF

  Owner = this->Owner; /*0x75f338*/
  if ( Owner ) /*0x75f340*/
  {
    v5 = a2; /*0x75f346*/
    v16 = v2; /*0x75f34a*/
    LOWORD(a2) = *a2 / 256; /*0x75f359*/
    HIWORD(a2) = v5[1] / 256; /*0x75f372*/
    v6 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x75f391*/
    v7 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this->Owner + 1016))(this->Owner, 0); /*0x75f395*/
    v8 = *(_DWORD *)v7; /*0x75f39b*/
    v17 = *(_DWORD *)(*(_DWORD *)v7 + 172); /*0x75f3a9*/
    v18 = *(_DWORD *)(*(_DWORD *)v7 + 152); /*0x75f3ad*/
    if ( (*((_DWORD *)v6 + 80) & 0x100) != 0 && this->WaveClass_field_BC >= dword_B725C8 * (v6[283] + 4) ) /*0x75f3d5*/
      v9 = (_DWORD *)*((_DWORD *)v6 + 58); /*0x75f3d7*/
    else
      v9 = (_DWORD *)*((_DWORD *)v6 + 57); /*0x75f3df*/
    for ( ; v9; v9 = (_DWORD *)v9[12] ) /*0x75f3e7*/
    {
      v10 = this->Owner; /*0x75f3e9*/
      if ( v9 != v10 && *((_BYTE *)v9 + 144) && *((_BYTE *)v9 + 116) && !*((_BYTE *)v9 + 129) && (int)v9[27] > 0 ) /*0x75f413*/
        (*(void (__thiscall **)(_DWORD *, int *, _DWORD, int, _DWORD *, _DWORD, _DWORD, _DWORD))(*v9 + 364))( /*0x75f42c*/
          v9,
          &v18,
          0,
          v17,
          v10,
          0,
          0,
          0);
    }
    v11 = *((_DWORD *)v6 + 17); /*0x75f439*/
    if ( v11 != -1 ) /*0x75f43f*/
    {
      v12 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v11); /*0x75f447*/
      if ( *(_BYTE *)(v12 + 689) ) /*0x75f44a*/
      {
        a2 = (_DWORD *)*((_DWORD *)v6 + 9); /*0x75f45b*/
        CellChainReact(v16); /*0x75f45f*/
      }
      if ( *(_BYTE *)(v12 + 680) ) /*0x75f464*/
        BuildingClass::SellEffects((int)v6, *(_DWORD *)(v8 + 152)); /*0x75f477*/
    }
    LOBYTE(Owner) = CellClass::IsActiveOrNext((CellClass *)v6); /*0x75f47e*/
    if ( (_BYTE)Owner ) /*0x75f486*/
    {
      v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x75f497*/
      Owner = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99); /*0x75f4a3*/
      if ( (int)Owner < v13 ) /*0x75f4aa*/
        LOBYTE(Owner) = LayerClass::DestroyCliff((int *)&stru_87F5F0.__pad_58[416], v14, (int)v6); /*0x75f4b2*/
    }
  }
  return (char)Owner; /*0x75f4b7*/
}



// ==== 0x0075F4C0  Voxel::renderSection  this=ObjectClass  sig=csp ====
char __thiscall Voxel::renderSection(Voxel *this, __int16 *a2)
{
  __int16 *v3; // eax
  int v4; // edx
  char *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  v3 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x75f4cd*/
  v4 = *(_DWORD *)&this->__pad_134[188]; /*0x75f4d2*/
  v5 = &this->__pad_134[188]; /*0x75f4d8*/
  a2 = v3; /*0x75f4de*/
  v6 = (*(int (__thiscall **)(char *, __int16 **))(v4 + 16))(v5, &a2); /*0x75f4e9*/
  if ( v6 == -1 ) /*0x75f4ef*/
  {
    v7 = *((_DWORD *)v5 + 2); /*0x75f4f1*/
    if ( *((_DWORD *)v5 + 4) < v7 /*0x75f51b*/
      || ((LOBYTE(v6) = v5[13], (_BYTE)v6) || !v7)
      && (v6 = *((_DWORD *)v5 + 5), v6 > 0)
      && (LOBYTE(v6) = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v7 + v6, 0), (_BYTE)v6) )
    {
      v6 = *((_DWORD *)v5 + 4); /*0x75f51d*/
      v8 = *((_DWORD *)v5 + 1); /*0x75f520*/
      *((_DWORD *)v5 + 4) = v6 + 1; /*0x75f526*/
      *(_DWORD *)(v8 + 4 * v6) = a2; /*0x75f52d*/
    }
  }
  return v6; /*0x75f530*/
}



// ==== 0x0075F540  Color::RGBFromFloat  this=Color  sig=csp ====
_DWORD *__thiscall Color::RGBFromFloat(Color *this, int a2, float a3)
{
  double v3; // st7
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v10; // [esp+4h] [ebp-8h]

  v3 = 1.0 - a3; /*0x75f547*/
  LOWORD(v5) = Math::RoundToInt(v3); /*0x75f565*/
  v6 = v5; /*0x75f56d*/
  LOWORD(v7) = Math::RoundToInt(v3); /*0x75f57a*/
  v10 = v7; /*0x75f582*/
  LOWORD(v8) = Math::RoundToInt(v3); /*0x75f591*/
  this->Color_field_00 = v6; /*0x75f59e*/
  *((_DWORD *)this + 1) = v10; /*0x75f5a0*/
  *((_DWORD *)this + 2) = v8; /*0x75f5a3*/
  return &this->Color_field_00; /*0x75f5ac*/
}



// ==== 0x0075F5C0  TacticalClass::CalcInverseAlpha  this=TacticalClass  sig=csp ====
_DWORD *__thiscall TacticalClass::CalcInverseAlpha(TacticalClass *this, int a2, float a3)
{
  double v3; // st7
  void *v5; // eax
  void *v6; // ebp
  void *v7; // eax

  v3 = 1.0 - a3; /*0x75f5c4*/
  LOWORD(v5) = Math::RoundToInt(v3); /*0x75f5e2*/
  v6 = v5; /*0x75f5ea*/
  LOWORD(v7) = Math::RoundToInt(v3); /*0x75f5f7*/
  this->AbstractClass = v6; /*0x75f5fc*/
  this->? = v7; /*0x75f5fe*/
  return &this->AbstractClass; /*0x75f609*/
}



// ==== 0x0075F610  WaveClass::UpdateWave  this=WaveClass  sig=csp ====
int __thiscall WaveClass::UpdateWave(WaveClass *this, int a2, int a3)
{
  int result; // eax

  Object::Unlink((ObjectClass *)this); /*0x75f61e*/
  result = 0; /*0x75f629*/
  if ( this->Owner == (void *)a2 ) /*0x75f62d*/
    this->Owner = 0; /*0x75f62f*/
  if ( this->Target == (void *)a2 ) /*0x75f63b*/
    this->Target = 0; /*0x75f63d*/
  return result; /*0x75f643*/
}



// ==== 0x0075F650  WaveClass::LoadWaveData  this=WaveClass  sig=csp ====
int __thiscall WaveClass::LoadWaveData(WaveClass *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int Register; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v13; // [esp+28h] [ebp-4h] BYREF

  v3 = a3; /*0x75f652*/
  v4 = a2; /*0x75f659*/
  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x75f664*/
  if ( Register >= 0 )
  {
    if ( v4 ) /*0x75f672*/
    {
      ObjectClass::Init((ObjectClass *)v4, (int)&a3); /*0x75f67b*/
      *(_DWORD *)(v4 + 332) = 0; /*0x75f680*/
      *(_DWORD *)(v4 + 424) = 0; /*0x75f68c*/
      FrameSnapshot::Init((FrameSnapshot *)(v4 + 472)); /*0x75f692*/
      WaveClass::Constructor_7632D0((WaveClass *)(v4 + 496), 0, 0); /*0x75f69f*/
      *(_DWORD *)v4 = &WaveClass::`vftable'; /*0x75f6a4*/
      *(_DWORD *)(v4 + 4) = &WaveClass::`vftable'; /*0x75f6aa*/
      *(_DWORD *)(v4 + 8) = &WaveClass::`vftable'; /*0x75f6b1*/
      *(_DWORD *)(v4 + 12) = &off_7F6BC8; /*0x75f6b8*/
    }
    *(_DWORD *)(v4 + 332) = *(_DWORD *)(v4 + 176) == 3 ? v4 + 384 : v4 + 336;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 172)); /*0x75f6ee*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 468)); /*0x75f6ff*/
    Register = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &a2, 4, 0); /*0x75f712*/
    if ( Register >= 0 ) /*0x75f716*/
    {
      v6 = a2; /*0x75f71c*/
      a3 = 0; /*0x75f720*/
      if ( a2 <= 0 ) /*0x75f726*/
      {
LABEL_17:
        v11 = 0; /*0x75f799*/
        if ( v6 > 0 ) /*0x75f79d*/
        {
          do /*0x75f7b8*/
            ObjectPtr::RegisterForTracking( /*0x75f7ae*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)(v4 + 500) + 4 * v11++));
          while ( v11 < a2 ); /*0x75f7b8*/
        }
      }
      else
      {
        while ( 1 ) /*0x75f737*/
        {
          Register = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &v13, 4, 0); /*0x75f737*/
          if ( Register < 0 ) /*0x75f73b*/
            break; /*0x75f73b*/
          v7 = *(_DWORD *)(v4 + 504); /*0x75f73d*/
          if ( *(_DWORD *)(v4 + 512) < v7 /*0x75f76e*/
            || (*(_BYTE *)(v4 + 509) || !v7)
            && (v8 = *(_DWORD *)(v4 + 516), v8 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v4 + 496) + 8))(v4 + 496, v7 + v8, 0) )
          {
            v9 = *(_DWORD *)(v4 + 512); /*0x75f775*/
            v10 = *(_DWORD *)(v4 + 500); /*0x75f778*/
            *(_DWORD *)(v4 + 512) = v9 + 1; /*0x75f77e*/
            *(_DWORD *)(v10 + 4 * v9) = v13; /*0x75f785*/
          }
          v6 = a2; /*0x75f78c*/
          if ( ++a3 >= a2 ) /*0x75f797*/
            goto LABEL_17; /*0x75f797*/
        }
      }
    }
  }
  return Register; /*0x75f7ba*/
}



// ==== 0x0075F7D0  WaveClass::ProcessWaveTick  this=WaveClass  sig=csp ====
int __stdcall WaveClass::ProcessWaveTick(WaveClass *this, int *a2, int a3)
{
  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = this->WaveClass_field_12C; /*0x75f7f9*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *((_DWORD *)this + 125) + 4 * i, 4, 0); /*0x75f81f*/
      if ( result < 0 ) /*0x75f824*/
        break; /*0x75f824*/
    }
  }
  return result; /*0x75f82f*/
}



// ==== 0x0075F840  WaveClass::GetClassIdentifier  this=WaveClass  sig=csp ====
int __stdcall WaveClass::GetClassIdentifier(WaveClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x75f846*/
    return -2147467261; /*0x75f848*/
  *a2 = 237448653; /*0x75f856*/
  a2[1] = 298949647; /*0x75f85e*/
  a2[2] = -1610610249; /*0x75f867*/
  a2[3] = unk_7E972C; /*0x75f870*/
  return 0; /*0x75f84d*/
}



// ==== 0x0075F880  WaveClass::GetObjectSize  this=WaveClass  sig=csp ====
int WaveClass::GetObjectSize(WaveClass *this)
{
  return 576; /*0x75f885*/
}



// ==== 0x0075F890  WaveClass::CheckStateFlag  this=WaveClass  sig=csp ====
int WaveClass::CheckStateFlag(WaveClass *this)
{
  return 3; /*0x75f895*/
}



// ==== 0x0075F8A0  WaveClass::StubReturnFalse  this=WaveClass  sig=csp ====
int WaveClass::StubReturnFalse(WaveClass *this)
{
  return 0; /*0x75f8a2*/
}



// ==== 0x0075F8B0  WaveClass::DrawWave  this=WaveClass  sig=csp ====
char __thiscall WaveClass::DrawWave(WaveClass *this, _DWORD *a2, int a3)
{
  int (__thiscall **vtable0)(WaveClass *, CellClass *, int, int, _DWORD, int); // ebp
  CellClass *v5; // eax
  void (__thiscall **v6)(WaveClass *, _DWORD *); // edx
  int v8; // [esp-10h] [ebp-18h]

  if ( !byte_A8E9A0 ) /*0x75f8bb*/
    return 0; /*0x75f8bb*/
  if ( !this->? ) /*0x75f8c1*/
    return 0; /*0x75f8c1*/
  if ( this->? ) /*0x75f8cf*/
    return 0; /*0x75f8cf*/
  if ( !dword_A8E7AC ) /*0x75f8e5*/
  {
    vtable0 = (int (__thiscall **)(WaveClass *, CellClass *, int, int, _DWORD, int))this->ObjectClass; /*0x75f8eb*/
    v8 = a2[2]; /*0x75f8f1*/
    v5 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x75f8fa*/
    if ( vtable0[107](this, v5, -1, v8, 0, 1) ) /*0x75f902*/
      return 0; /*0x75f902*/
  }
  v6 = (void (__thiscall **)(WaveClass *, _DWORD *))this->ObjectClass; /*0x75f90d*/
  this->? = 0; /*0x75f912*/
  this->? = 0; /*0x75f919*/
  v6[109](this, a2); /*0x75f920*/
  if ( !(*((unsigned __int8 (__thiscall **)(WaveClass *, int))this->ObjectClass + 73))(this, 1) ) /*0x75f92c*/
    return 0; /*0x75f96c*/
  if ( this->? ) /*0x75f936*/
  {
    if ( (*((int (__thiscall **)(WaveClass *))this->ObjectClass + 30))(this) != -1 ) /*0x75f94a*/
      Targeting::Readd(this); /*0x75f952*/
    ObjectClass::SetDeployState((LogicClass *)this, 0); /*0x75f95f*/
  }
  return 1; /*0x75f964*/
}



// ==== 0x0075F980  WaveClass::UpdateWavePosition  this=WaveClass  sig=csp ====
char __thiscall WaveClass::UpdateWavePosition(WaveClass *this)
{
  if ( !byte_A8E9A0 || this->inLimbo[0] ) /*0x75f98c*/
    return 0; /*0x75f9de*/
  (*(void (__thiscall **)(WaveClass *, int))(this->vtable0 + 220))(this, 1); /*0x75f99a*/
  (*(void (__thiscall **)(WaveClass *, _DWORD))(this->vtable0 + 292))(this, 0); /*0x75f9a6*/
  RemoveTarget((int)this); /*0x75f9b2*/
  VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x75f9bd*/
  (*(void (__thiscall **)(WaveClass *))(this->vtable0 + 284))(this); /*0x75f9c6*/
  this->inLimbo[0] = 1; /*0x75f9cc*/
  this->needsRedraw[0] = 0; /*0x75f9d3*/
  return 1; /*0x75f9dc*/
}



// ==== 0x0075F9F0  WaveClass::ProcessWaveCollision  this=WaveClass  sig=csp ====
void __thiscall WaveClass::ProcessWaveCollision(WaveClass *this, _DWORD *a2, int *a3)
{
  if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 /*0x75fa20*/
    || !(unsigned __int8)Game::Stub3((int)this->someCoords)
    || !(unsigned __int8)Game::Stub3((int)&this->WaveClass_field_C0) )
  {
    switch ( this->Type[0] ) /*0x75fa34*/
    {
      case 0: /*0x75fa34*/
        Voxel::ShadowCalc((int)this, a2, a3); /*0x75fa47*/
        break; /*0x75fa4d*/
      case 1: /*0x75fa34*/
      case 2: /*0x75fa34*/
        Voxel::FaceDraw((Voxel *)this, a2, a3); /*0x75fa71*/
        break; /*0x75fa71*/
      case 3: /*0x75fa34*/
        Surface::RenderToSurfaceVoxel((int)this, a2, a3); /*0x75fa5c*/
        break; /*0x75fa62*/
      default:
        return;
    }
  }
}



// ==== 0x0075FA90  Voxel::ShadowCalc  this=WaveClass  sig=csp ====
void __thiscall Voxel::ShadowCalc(int this, _DWORD *a2, int *a3)
{
  int *v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  char *v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  _WORD *v14; // edi
  int v15; // edx
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned __int16 *v20; // ebx
  _WORD *v21; // edi
  __int64 v22; // rax
  int v23; // ebp
  int v24; // eax
  int m; // ebp
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edi
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  _WORD *v37; // edi
  int v38; // ecx
  int v39; // eax
  int v40; // ebp
  _WORD *v41; // edi
  unsigned __int16 *v42; // ecx
  __int64 v43; // rax
  int j; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  _DWORD *v49; // eax
  int v50; // ebx
  int v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  int v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v61; // [esp+14h] [ebp-30h]
  int v62; // [esp+14h] [ebp-30h]
  int v63; // [esp+14h] [ebp-30h]
  char *v64; // [esp+18h] [ebp-2Ch]
  _WORD *v65; // [esp+18h] [ebp-2Ch]
  _WORD *SamplePosition; // [esp+18h] [ebp-2Ch]
  unsigned __int16 *v67; // [esp+18h] [ebp-2Ch]
  _WORD *v68; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  StreamClass *v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  StreamClass *m_Stream; // [esp+20h] [ebp-24h]
  int v73; // [esp+20h] [ebp-24h]
  int v74; // [esp+24h] [ebp-20h]
  int v75; // [esp+24h] [ebp-20h]
  int v76; // [esp+28h] [ebp-1Ch]
  int v77; // [esp+2Ch] [ebp-18h]
  int v78; // [esp+30h] [ebp-14h]
  int v79; // [esp+34h] [ebp-10h]
  int v80; // [esp+38h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-Ch]
  int v82; // [esp+3Ch] [ebp-8h]
  int v83; // [esp+3Ch] [ebp-8h]
  int v84; // [esp+3Ch] [ebp-8h]
  int v85; // [esp+40h] [ebp-4h]
  unsigned __int16 v86; // [esp+48h] [ebp+4h]
  unsigned __int16 v87; // [esp+48h] [ebp+4h]
  int v88; // [esp+48h] [ebp+4h]
  _DWORD *v89; // [esp+4Ch] [ebp+8h]
  _DWORD *v90; // [esp+4Ch] [ebp+8h]

  v58 = ZCoordToScreenY(*(_DWORD *)(this + 188)); /*0x75faa8*/
  v74 = (*(int (__thiscall **)(AudioStream *, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 92))( /*0x75fab9*/
          g_DSurface_Hidden_2,
          0,
          0);
  if ( v74 ) /*0x75fabd*/
  {
    v4 = a3; /*0x75fac3*/
    v5 = a3[1]; /*0x75fac9*/
    v78 = v5 + a3[3] - 3; /*0x75fad9*/
    v77 = v5 + 3; /*0x75fadf*/
    v79 = *a3 + 3; /*0x75faf0*/
    v69 = *a3 + a3[2] - 3; /*0x75faf8*/
    v6 = a2[1] - *(_DWORD *)(this + 208); /*0x75fb09*/
    v57 = *a2 - *(_DWORD *)(this + 204); /*0x75fb17*/
    v76 = v6; /*0x75fb1b*/
    ProcessVoxelVertexData((_DWORD *)(this + 328), (int *)(this + 416)); /*0x75fb1f*/
    if ( *(_DWORD *)(this + 424) ) /*0x75fb24*/
    {
      v7 = *(_DWORD *)(this + 416); /*0x75fb48*/
      v8 = (char *)DSurface_ViewBounds.field_4 + *(_DWORD *)(this + 420) + v6; /*0x75fb4e*/
      v61 = (int)v8; /*0x75fb50*/
      v9 = (int)&v8[v7 - 1]; /*0x75fb54*/
      if ( v9 >= a3[3] + a3[1] ) /*0x75fb5a*/
      {
        v64 = (char *)(a3[3] + a3[1]); /*0x75fb62*/
        v9 = (int)v64; /*0x75fb66*/
      }
      else
      {
        v64 = &v8[v7 - 1]; /*0x75fb5c*/
      }
      Voxel::loadSectionData((Voxel *)this); /*0x75fb6a*/
      v10 = *(_DWORD *)(this + 460); /*0x75fb6f*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x75fb81*/
      {
        SamplePosition = (_WORD *)Audio::GetSamplePosition( /*0x75fe6e*/
                                    (int *)g_ZBufferDescriptor,
                                    0,
                                    v8 - (char *)DSurface_ViewBounds.field_4);
        v35 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x75fe74*/
        HIWORD(v36) = HIWORD(g_ZBufferDescriptor); /*0x75fe77*/
        v81 = v9 - (_DWORD)v8; /*0x75fe88*/
        m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x75fe90*/
        if ( (unsigned int)&SamplePosition[v35 + (_DWORD)m_Stream * (v9 - (_DWORD)v8 + 1)] >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x75fea6*/
        {
          LOWORD(v36) = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v9; /*0x76000b*/
          v46 = v9; /*0x76000e*/
          v56 = v9; /*0x760012*/
          v47 = v36 - v58 - 2; /*0x760016*/
          v88 = v47; /*0x76001b*/
          if ( v9 >= (int)v8 ) /*0x76001f*/
          {
            v73 = 8 * v81; /*0x76002c*/
            do /*0x760149*/
            {
              v48 = v4[1]; /*0x760030*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760047*/
              {
                v49 = (_DWORD *)(*(_DWORD *)(this + 424) + v73); /*0x760060*/
                v50 = v49[1] + v57; /*0x76006a*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x76006e*/
                  v50 = *v4 + v4[2] - 2; /*0x760070*/
                v60 = v57 + *v49; /*0x76007f*/
                if ( v60 <= *v4 + 2 ) /*0x760083*/
                  v60 = *v4 + 2; /*0x760085*/
                v68 = (_WORD *)(v74 /*0x7600b4*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1)));
                v51 = v56 - (unsigned int)DSurface_ViewBounds.field_4; /*0x7600c0*/
                v84 = v50; /*0x7600c4*/
                for ( i = abs32(v56 - v76 - *(_DWORD *)(this + 208)); v50 >= v60; --v68 ) /*0x7600d5*/
                {
                  if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v84, v51) > (unsigned __int16)v88 ) /*0x7600f0*/
                    Voxel::BlendShadowColor((Voxel *)this, v50, v57, i, v68); /*0x760100*/
                  --v50; /*0x76010e*/
                  --v84; /*0x76010f*/
                }
                v47 = v88; /*0x760122*/
                v8 = (char *)v61; /*0x760126*/
                v4 = a3; /*0x76012a*/
                v46 = v56; /*0x76012e*/
              }
              ++v47; /*0x760136*/
              --v46; /*0x760137*/
              v88 = v47; /*0x76013d*/
              v56 = v46; /*0x760141*/
              v73 -= 8; /*0x760145*/
            }
            while ( v46 >= (int)v8 ); /*0x760149*/
          }
        }
        else
        {
          v83 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75feb9*/
          v37 = (_WORD *)(v74 + 2 * v9 * v83); /*0x75feca*/
          v90 = (_DWORD *)(*(_DWORD *)(this + 424) + 8 * v81); /*0x75fed8*/
          v87 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v9 - v58 - 2; /*0x75fef0*/
          v38 = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v9 - (unsigned int)DSurface_ViewBounds.field_4); /*0x75ff03*/
          v39 = v9; /*0x75ff05*/
          v55 = v9; /*0x75ff09*/
          if ( v9 >= (int)v8 ) /*0x75ff0d*/
          {
            while ( 1 ) /*0x75ff19*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x75ff27*/
              {
                v40 = v57 + v90[1]; /*0x75ff40*/
                if ( v40 >= v69 ) /*0x75ff42*/
                  v40 = v69; /*0x75ff44*/
                v59 = v57 + *v90; /*0x75ff56*/
                if ( v59 <= v79 ) /*0x75ff5a*/
                  v59 = v79; /*0x75ff5c*/
                v41 = &v37[v40]; /*0x75ff68*/
                v42 = (unsigned __int16 *)(2 * v40 + v38); /*0x75ff6a*/
                v67 = v42; /*0x75ff76*/
                v43 = v39 - v76 - *(_DWORD *)(this + 208); /*0x75ff7a*/
                for ( j = (HIDWORD(v43) ^ v43) - HIDWORD(v43); v40 >= v59; v67 = v42 ) /*0x75ff87*/
                {
                  if ( *v42 > v87 ) /*0x75ff91*/
                  {
                    Voxel::BlendShadowColor((Voxel *)this, v40, v57, j, v41); /*0x75ff9d*/
                    v42 = v67; /*0x75ffa2*/
                  }
                  --v42; /*0x75ffaa*/
                  --v41; /*0x75ffad*/
                  --v40; /*0x75ffb0*/
                }
                v8 = (char *)v61; /*0x75ffb9*/
                v39 = v55; /*0x75ffbd*/
                v45 = 2 * v40; /*0x75ffc1*/
                v38 = (int)&v42[v45 / 0xFFFFFFFE]; /*0x75ffc3*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x75ffc5*/
              }
              --v39; /*0x75ffe6*/
              v37 -= v83; /*0x75ffe9*/
              ++v87; /*0x75ffec*/
              v90 -= 2; /*0x75fff0*/
              v55 = v39; /*0x75fff4*/
              if ( v39 < (int)v8 ) /*0x75fff8*/
                break; /*0x75fff8*/
              v38 -= 2 * (_DWORD)m_Stream; /*0x75ff15*/
            }
          }
        }
      }
      else
      {
        v86 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v58 - (_WORD)v8 - 2; /*0x75fba4*/
        v11 = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v8 - (char *)DSurface_ViewBounds.field_4); /*0x75fbb6*/
        v12 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x75fbba*/
        v70 = g_ZBufferDescriptor[2].m_Stream; /*0x75fbc8*/
        if ( (unsigned int)(v11 + 2 * (v12 + (_DWORD)v70 * (v9 - v61 + 1))) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x75fbe7*/
        {
          v27 = v61; /*0x75fd07*/
          v54 = v61; /*0x75fd0d*/
          if ( v61 <= v9 ) /*0x75fd11*/
          {
            v71 = 0; /*0x75fd17*/
            do /*0x75fe44*/
            {
              v28 = v4[1]; /*0x75fd1f*/
              if ( v27 >= v28 + 2 && v27 <= v28 + v4[3] - 2 ) /*0x75fd36*/
              {
                v29 = (_DWORD *)(*(_DWORD *)(this + 424) + v71); /*0x75fd49*/
                v30 = *v4; /*0x75fd4b*/
                v63 = v57 + v29[1]; /*0x75fd64*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x75fd68*/
                  v63 = *v4 + v4[2] - 2; /*0x75fd6a*/
                v31 = v57 + *v29; /*0x75fd74*/
                v32 = v30 + 2; /*0x75fd76*/
                if ( v31 > v30 + 2 ) /*0x75fd7b*/
                  v32 = v31; /*0x75fd7d*/
                v82 = v32; /*0x75fd95*/
                v65 = (_WORD *)(v74 /*0x75fda3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1)));
                v33 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x75fdad*/
                v85 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x75fdb7*/
                v34 = abs32(v27 - v76 - *(_DWORD *)(this + 208)); /*0x75fdc6*/
                if ( v32 <= v63 ) /*0x75fdca*/
                {
                  while ( 1 ) /*0x75fdd2*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v82, v33) > v86 ) /*0x75fdeb*/
                      Voxel::BlendShadowColor((Voxel *)this, v32, v57, v34, v65); /*0x75fdfb*/
                    ++v32; /*0x75fe09*/
                    ++v82; /*0x75fe0a*/
                    ++v65; /*0x75fe17*/
                    if ( v32 > v63 ) /*0x75fe1b*/
                      break; /*0x75fe1b*/
                    v33 = v85; /*0x75fdce*/
                  }
                }
                v27 = v54; /*0x75fe1d*/
                v4 = a3; /*0x75fe21*/
              }
              ++v27; /*0x75fe32*/
              --v86; /*0x75fe38*/
              v54 = v27; /*0x75fe3c*/
              v71 += 8; /*0x75fe40*/
            }
            while ( v27 <= v9 ); /*0x75fe44*/
          }
        }
        else
        {
          v13 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75fbf8*/
          v80 = v13; /*0x75fc05*/
          v14 = (_WORD *)(v74 + 2 * v61 * v13); /*0x75fc09*/
          v15 = v61; /*0x75fc0c*/
          v16 = *(_DWORD **)(this + 424); /*0x75fc10*/
          v89 = v16; /*0x75fc18*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x75fc20*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x75fc34*/
            {
              v17 = v57 + v16[1]; /*0x75fc41*/
              if ( v17 >= v69 ) /*0x75fc47*/
                v17 = v69; /*0x75fc49*/
              v62 = v17; /*0x75fc4f*/
              v18 = *v16 + v57; /*0x75fc53*/
              v19 = v79; /*0x75fc56*/
              if ( v18 > v79 ) /*0x75fc5c*/
                v19 = v18; /*0x75fc5e*/
              v20 = (unsigned __int16 *)(2 * v19 + v11); /*0x75fc67*/
              v21 = &v14[v19]; /*0x75fc69*/
              v22 = v15 - v76 - *(_DWORD *)(this + 208); /*0x75fc7b*/
              v23 = v22; /*0x75fc7c*/
              v24 = v19; /*0x75fc7e*/
              v75 = v19; /*0x75fc82*/
              for ( m = (HIDWORD(v22) ^ v23) - HIDWORD(v22); v24 <= v62; v75 = v24 ) /*0x75fc8e*/
              {
                if ( *v20 > v86 ) /*0x75fc98*/
                {
                  Voxel::BlendShadowColor((Voxel *)this, v24, v57, m, v21); /*0x75fca4*/
                  v24 = v75; /*0x75fca9*/
                }
                ++v20; /*0x75fcb1*/
                ++v21; /*0x75fcb4*/
                ++v24; /*0x75fcb7*/
              }
              v9 = (int)v64; /*0x75fcc0*/
              v15 = k; /*0x75fcc4*/
              v26 = 2 * v24; /*0x75fcc8*/
              v11 = (int)&v20[v26 / 0xFFFFFFFE]; /*0x75fcca*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x75fccc*/
              v13 = v80; /*0x75fcce*/
            }
            v14 += v13; /*0x75fcd6*/
            v11 += 2 * (_DWORD)v70; /*0x75fcd9*/
            --v86; /*0x75fce6*/
            v16 = v89 + 2; /*0x75fcee*/
            ++v15; /*0x75fcf1*/
            v89 += 2; /*0x75fcf4*/
          }
        }
      }
    }
    (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 96))(g_DSurface_Hidden_2); /*0x760157*/
    if ( *(_DWORD *)(this + 424) ) /*0x76015a*/
    {
      __3_YAXPAX_Z(*(void **)(this + 424)); /*0x760167*/
      *(_DWORD *)(this + 424) = 0; /*0x76016f*/
    }
  }
}



// ==== 0x00750010  Audio::IsLoud  this=HouseClass  sig=csp ====
int __thiscall Audio::IsLoud(int *this)
{
  return *(float *)this >= 2.0; /*0x750024*/
}



// ==== 0x00750030  FootClass::CheckAccelLimit  this=HouseClass  sig=csp ====
int __thiscall FootClass::CheckAccelLimit(int *this)
{
  int result; // eax

  if ( *(float *)this < 2.0 ) /*0x75003d*/
    JUMPOUT(0x75004C); /*0x75004c*/
  nullsub_52(); /*0x750040*/
  return result;
}



// ==== 0x00750060  ObjectClass::Team_Create  this=ObjectClass  sig=csp ====
char __thiscall Team_Create_750060(ObjectClass *this, char a2)
{
  char result; // al

  result = a2; /*0x750060*/
  if ( a2 ) /*0x750066*/
    this->AbstractClass = (void *)-1098907648; /*0x750068*/
  else
    this->AbstractClass = 0; /*0x750071*/
  return result; /*0x75006e*/
}



// ==== 0x00750080  Crate::processCratePickup  this=Crate  sig=csp ====
void __thiscall Crate::processCratePickup(Crate *this, int a2)
{
  this->crate_timer[0] = 0; /*0x750080*/
}



// ==== 0x00750090  Power::ChangedHouse  this=Power  sig=csp ====
int __thiscall Power::ChangedHouse(Power *this, char a2)
{
  int result; // eax

  LOBYTE(result) = a2; /*0x750090*/
  if ( a2 ) /*0x750096*/
    this->Power_field_0x0 = 1065353216; /*0x750098*/
  else
    this->Power_field_0x0 = 0; /*0x7500a1*/
  return result; /*0x75009e*/
}



// ==== 0x007500B0  Timer::SetFlag  this=Timer  sig=csp ====
int __thiscall Timer::SetFlag(Timer *this, char a2)
{
  int result; // eax

  LOBYTE(result) = a2; /*0x7500b0*/
  if ( a2 ) /*0x7500b6*/
    *(_DWORD *)this->__pad_0 = 0x40000000; /*0x7500b8*/
  else
    *(_DWORD *)this->__pad_0 = 0; /*0x7500c1*/
  return result; /*0x7500be*/
}



// ==== 0x007500D0  FootClass::GetField  this=FootClass  sig=csp ====
int __thiscall FootClass::GetField(int *this)
{
  int result; // eax

  LOWORD(result) = Math::RoundToInt(*(float *)this * 100.0); /*0x7500d8*/
  return result;
}



// ==== 0x007500E0  FootClass::SetField  this=FootClass  sig=csp ====
int __thiscall FootClass::SetField(int *this, int a2)
{
  int result; // eax

  *(float *)this = (double)a2 * 0.01; /*0x7500ea*/
  return result; /*0x7500ec*/
}



// ==== 0x007500F0  sub_7500F0  this=-  sig=ida-proto ====
int sub_7500F0()
{
  dword_B1D300 = 0; /*0x7500f2*/
  dword_B1D304 = 0; /*0x7500f7*/
  dword_B1D308 = 0; /*0x7500fc*/
  dword_B1D30C = 0; /*0x750101*/
  return 0; /*0x750106*/
}



// ==== 0x00750110  sub_750110  this=-  sig=ida-proto ====
void sub_750110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75011c*/
  dbl_B1D318 = Math::Sqrt(v0 + v0); /*0x75012e*/
}



// ==== 0x00750140  sub_750140  this=-  sig=ida-proto ====
void sub_750140()
{
  dbl_B1D398 = dbl_B1D318 / 60.0; /*0x75014c*/
}



// ==== 0x00750160  sub_750160  this=-  sig=ida-proto ====
void sub_750160()
{
  dbl_B1D360 = 1.0 / dbl_B1D398; /*0x75016c*/
}



// ==== 0x00750180  sub_750180  this=-  sig=ida-proto ====
void sub_750180()
{
  dbl_B1D358 = 0.0174532925199433 * 45.0; /*0x75018c*/
}



// ==== 0x007501A0  sub_7501A0  this=-  sig=ida-proto ====
void sub_7501A0()
{
  dbl_B1D330 = 0.0174532925199433 * 60.0; /*0x7501ac*/
}



// ==== 0x007501C0  sub_7501C0  this=-  sig=ida-proto ====
void sub_7501C0()
{
  dbl_B1D2F8 = 0.0174532925199433 * 90.0; /*0x7501cc*/
}



// ==== 0x007501E0  sub_7501E0  this=-  sig=ida-proto ====
__int64 sub_7501E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B1D2F8 - dbl_B1D330); /*0x7501f2*/
  result = Math::RoundToInt(v0 * dbl_B1D318 * 0.5); /*0x750206*/
  dword_B1D3A0 = result; /*0x75020b*/
  return result; /*0x750210*/
}



// ==== 0x00750220  sub_750220  this=-  sig=ida-proto ====
void sub_750220()
{
  dbl_B1D338 = Math::ArcTan((double)dword_B1D3A0 * 0.00390625); /*0x750237*/
}



// ==== 0x00750250  sub_750250  this=-  sig=ida-proto ====
void sub_750250()
{
  dbl_B1D350 = Math::ArcTan((double)(2 * dword_B1D3A0) / dbl_B1D318); /*0x750272*/
}



// ==== 0x00750280  sub_750280  this=-  sig=ida-proto ====
__int64 sub_750280()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D3A0) + 0.5); /*0x75029b*/
  dword_B1D390 = result; /*0x7502a0*/
  return result; /*0x7502a6*/
}



// ==== 0x007502B0  sub_7502B0  this=-  sig=ida-proto ====
int sub_7502B0()
{
  word_B1D310 = 0; /*0x7502b2*/
  word_B1D312 = 0; /*0x7502b8*/
  return 0; /*0x7502be*/
}



// ==== 0x007502C0  sub_7502C0  this=-  sig=ida-proto ====
int sub_7502C0()
{
  dword_B1D340 = 0; /*0x7502c2*/
  dword_B1D344 = 0; /*0x7502c7*/
  dword_B1D348 = 0; /*0x7502cc*/
  return 0; /*0x7502d1*/
}



// ==== 0x007502E0  sub_7502E0  this=-  sig=ida-proto ====
int sub_7502E0()
{
  dword_B1D370 = 0; /*0x7502e5*/
  dword_B1D368 = 128; /*0x7502ef*/
  dword_B1D36C = 128; /*0x7502f4*/
  return 128; /*0x7502f9*/
}



// ==== 0x00750300  sub_750300  this=-  sig=ida-proto ====
int sub_750300()
{
  g_VocAudioConfig = 0; /*0x750307*/
  dword_B1D380 = 0; /*0x75030c*/
  byte_B1D384 = 1; /*0x750311*/
  byte_B1D385 = 0; /*0x750318*/
  dword_B1D378 = (int)&DynamicVectorClass<VocClass *>::`vftable'; /*0x75031d*/
  dword_B1D38C = 10; /*0x750327*/
  g_VocPlayState = 0; /*0x750331*/
  return atexit(sub_750340); /*0x75033c*/
}



// ==== 0x00750340  sub_750340  this=-  sig=ida-proto ====
void __cdecl sub_750340()
{
  dword_B1D378 = (int)&VectorClass<VocClass *>::`vftable'; /*0x750348*/
  if ( g_VocAudioConfig && byte_B1D385 ) /*0x75035c*/
  {
    __3_YAXPAX_Z(g_VocAudioConfig); /*0x75035f*/
    g_VocAudioConfig = 0; /*0x750367*/
  }
  byte_B1D385 = 0; /*0x75036d*/
  dword_B1D380 = 0; /*0x750373*/
}



// ==== 0x00750440  ObjectClass::LoadVocFromINI  this=ObjectClass  sig=csp ====
char __thiscall LoadVocFromINI(ObjectClass *this, unsigned __int8 ***a2)
{
  double v2; // st7
  unsigned __int8 *SampleName; // eax
  char *v5; // eax
  char *i; // eax
  char *v7; // eax
  int v10; // eax
  char *v11; // eax
  int Int_Overwrite; // eax
  char *v13; // eax
  char *v16; // eax
  char *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v20; // eax
  char *v21; // eax
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  char *v25; // eax
  int v26; // eax
  char *v27; // eax
  int v28; // eax
  char *v29; // eax
  int v30; // eax
  char *v31; // eax
  char *v32; // eax
  int v33; // ebx
  int v34; // ecx
  char *v35; // eax
  char *v36; // eax
  int v37; // edi
  int v38; // ecx
  double v40; // [esp+0h] [ebp-820h]
  double v41; // [esp+0h] [ebp-820h]
  float v42; // [esp+10h] [ebp-810h]
  int v43; // [esp+14h] [ebp-80Ch] BYREF
  int v44; // [esp+18h] [ebp-808h] BYREF
  int v45; // [esp+1Ch] [ebp-804h] BYREF
  char String[2048]; // [esp+20h] [ebp-800h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x750453*/
  if ( !this->AbstractClass ) /*0x750458*/
    return 0; /*0x750458*/
  SampleName = (unsigned __int8 *)VocClass::GetSampleName((char *)this->AbstractClass); /*0x750462*/
  if ( !INIClass::BinarySearchSection((int)a2, SampleName) ) /*0x75046a*/
    return 0; /*0x750912*/
  if ( this->AbstractClass ) /*0x75047c*/
    v5 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750482*/
  else
    v5 = g_Str_Invalid_Voc; /*0x750489*/
  INIClass::GetString( /*0x7504a5*/
    (INIClass *)a2,
    (unsigned __int8 *)v5,
    (unsigned __int8 *)aSounds,
    &g_INI_DefaultBuffer,
    String,
    2048);
  for ( i = strtok(String, asc_846570); i; i = strtok(0, asc_846570) ) /*0x7504be*/
    AddSampleVocClass((int)this->AbstractClass, i); /*0x7504c4*/
  if ( this->AbstractClass ) /*0x7504dc*/
    v7 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7504e2*/
  else
    v7 = g_Str_Invalid_Voc; /*0x7504e9*/
  __asm { fld flt_8464B4 } /*0x7504ee*/
  __asm { fstp [esp+820h+var_820]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)v7, g_INI_Key_Volume, v40); /*0x750502*/
  __asm /*0x750507*/
  {
    fmul ds:flt_7EAAE0
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x750518*/
  {
    __asm /*0x750524*/
    {
      fcom ds:flt_7E1748
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x75052f*/
    {
      __asm /*0x750531*/
      {
        fstp st
        fld ds:flt_7E1748
      }
    }
  }
  else
  {
    __asm /*0x75051a*/
    {
      fstp st
      fld ds:flt_7E2AC8
    }
  }
  __asm { fmul ds:flt_7EF38C } /*0x750539*/
  LOWORD(v10) = Math::RoundToInt(v2); /*0x75053f*/
  sub_406550((int)this->AbstractClass, v10); /*0x750548*/
  if ( this->AbstractClass ) /*0x75054d*/
    v11 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750553*/
  else
    v11 = g_Str_Invalid_Voc; /*0x75055a*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v11, aVshift, 0); /*0x750569*/
  sub_406620((int)this->AbstractClass, Int_Overwrite); /*0x750572*/
  if ( this->AbstractClass ) /*0x750577*/
    v13 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x75057d*/
  else
    v13 = g_Str_Invalid_Voc; /*0x750584*/
  __asm { fld flt_8464B8 } /*0x750589*/
  __asm { fstp [esp+820h+var_820]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)v13, aMinvolume, v41); /*0x75059d*/
  __asm /*0x7505a2*/
  {
    fmul ds:flt_7EAAE0
    fst [esp+818h+var_810]
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x7505b7*/
  {
    __asm /*0x7505c3*/
    {
      fld [esp+818h+var_810]
      fcomp ds:flt_7E1748
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x7505d2*/
      v42 = 0.0; /*0x7505d4*/
    sub_4065F0((ObjectClass *)this->AbstractClass, SLODWORD(v42)); /*0x7505e3*/
  }
  else
  {
    sub_4065F0((ObjectClass *)this->AbstractClass, 1065353216); /*0x7505c1*/
  }
  if ( this->AbstractClass ) /*0x7505e8*/
    v16 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7505ee*/
  else
    v16 = g_Str_Invalid_Voc; /*0x7505f5*/
  INIClass::GetString( /*0x750611*/
    (INIClass *)a2,
    (unsigned __int8 *)v16,
    (unsigned __int8 *)&g_INI_Key_TRUCKA.?[3],
    g_INI_Key_NORMAL,
    String,
    2048);
  v45 = dword_8464B0; /*0x750620*/
  sub_4067D0(String, &v45); /*0x750628*/
  sub_406540((int)this->AbstractClass, v45); /*0x750633*/
  if ( this->AbstractClass ) /*0x750638*/
    v17 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x75063e*/
  else
    v17 = g_Str_Invalid_Voc; /*0x750645*/
  v18 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v17, g_INI_Key_Attack, 0); /*0x750654*/
  sub_406520((int)this->AbstractClass, v18); /*0x75065d*/
  if ( this->AbstractClass ) /*0x750662*/
    v19 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750668*/
  else
    v19 = g_Str_Invalid_Voc; /*0x75066f*/
  v20 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v19, aDecay, 0); /*0x75067e*/
  sub_406530((int)this->AbstractClass, v20); /*0x750687*/
  if ( this->AbstractClass ) /*0x75068c*/
    v21 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750692*/
  else
    v21 = g_Str_Invalid_Voc; /*0x750699*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)v21, aControl, &g_INI_DefaultBuffer, String, 2048); /*0x7506b5*/
  v22 = strtok(String, asc_846570); /*0x7506c4*/
  v44 = dword_B1D3B0; /*0x7506d4*/
  if ( v22 ) /*0x7506d8*/
  {
    v44 = 0; /*0x7506da*/
    do /*0x7506fe*/
    {
      sub_406820(&v44, v22); /*0x7506e8*/
      v22 = strtok(0, asc_846570); /*0x7506f4*/
    }
    while ( v22 ); /*0x7506fe*/
  }
  sub_406570(this->AbstractClass, v44); /*0x750706*/
  if ( this->AbstractClass ) /*0x75070b*/
    v23 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750711*/
  else
    v23 = g_Str_Invalid_Voc; /*0x750718*/
  INIClass::GetString( /*0x750734*/
    (INIClass *)a2,
    (unsigned __int8 *)v23,
    (unsigned __int8 *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    String,
    2048);
  v24 = strtok(String, asc_846570); /*0x750743*/
  v43 = dword_8464BC; /*0x750753*/
  if ( v24 ) /*0x750757*/
  {
    v43 = 32; /*0x750759*/
    do /*0x75077d*/
    {
      Audio::ApplyFormatFlags(&v43, v24); /*0x750767*/
      v24 = strtok(0, asc_846570); /*0x750773*/
    }
    while ( v24 ); /*0x75077d*/
  }
  sub_4065C0((int)this->AbstractClass, v43); /*0x750785*/
  if ( this->AbstractClass ) /*0x75078a*/
    v25 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750790*/
  else
    v25 = g_Str_Invalid_Voc; /*0x750797*/
  v26 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v25, aLimit, dword_8464C4); /*0x7507ab*/
  sub_4065D0((int)this->AbstractClass, v26); /*0x7507b4*/
  if ( this->AbstractClass ) /*0x7507b9*/
    v27 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7507bf*/
  else
    v27 = g_Str_Invalid_Voc; /*0x7507c6*/
  v28 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v27, aLoop, 0); /*0x7507d5*/
  sub_406640((int)this->AbstractClass, v28); /*0x7507de*/
  if ( this->AbstractClass ) /*0x7507e3*/
    v29 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7507e9*/
  else
    v29 = g_Str_Invalid_Voc; /*0x7507f0*/
  v30 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)v29, g_INI_Key_Range, dword_8464C0); /*0x750804*/
  sub_4065E0((int)this->AbstractClass, v30); /*0x75080d*/
  if ( this->AbstractClass ) /*0x750812*/
    v31 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750818*/
  else
    v31 = g_Str_Invalid_Voc; /*0x75081f*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)v31, aDelay, &g_INI_DefaultBuffer, String, 2048); /*0x75083c*/
  v32 = strtok(String, asc_846570); /*0x75084b*/
  v33 = 0; /*0x750853*/
  if ( v32 ) /*0x750857*/
  {
    v33 = atoi(v32); /*0x750866*/
    v32 = strtok(0, asc_846570); /*0x750868*/
  }
  v34 = v33; /*0x750872*/
  if ( v32 ) /*0x750874*/
    v34 = atoi(v32); /*0x75087f*/
  sub_406600((int)this->AbstractClass, v33, v34); /*0x750886*/
  if ( this->AbstractClass ) /*0x75088b*/
    v35 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750892*/
  else
    v35 = g_Str_Invalid_Voc; /*0x750899*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)v35, aFshift, &g_INI_DefaultBuffer, String, 2048); /*0x7508b5*/
  v36 = strtok(String, asc_846570); /*0x7508c4*/
  v37 = 0; /*0x7508cc*/
  if ( v36 ) /*0x7508d0*/
  {
    v37 = atoi(v36); /*0x7508df*/
    v36 = strtok(0, asc_846570); /*0x7508e1*/
  }
  v38 = v37; /*0x7508eb*/
  if ( v36 ) /*0x7508ed*/
    v38 = atoi(v36); /*0x7508f8*/
  sub_406610((int)this->AbstractClass, v37, v38); /*0x7508ff*/
  return 1; /*0x750904*/
}



// ==== 0x00750920  PlayVocClass  this=-  sig=csp ====
int __fastcall VocClass_Play(int a1, int a2, float a3, int a4)
{
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  unsigned int v8; // edi

  if ( !VocClass_VoicesEnabled ) /*0x75092c*/
    return 0; /*0x75092e*/
  v5 = 0; /*0x750935*/
  if ( a1 >= 0 && a1 < g_VocPlayState ) /*0x750943*/
    v5 = **((_DWORD **)g_VocAudioConfig + a1); /*0x75094d*/
  v6 = 0; /*0x750953*/
  if ( a4 ) /*0x750957*/
  {
    v7 = AudioSource::Get(a4); /*0x75095b*/
    v6 = v7; /*0x750960*/
    if ( v7 ) /*0x750964*/
    {
      if ( sub_406310(v7) != v5 ) /*0x75096f*/
      {
        VocClass::Release(v6); /*0x750973*/
        v6 = 0; /*0x750978*/
      }
    }
  }
  if ( v5 ) /*0x75097d*/
  {
    v8 = Math::RoundToInt(a3 * 16384.0); /*0x75098e*/
    if ( v8 >= 0x4000 ) /*0x750996*/
      v8 = 0x4000; /*0x750998*/
    if ( v6 || (v6 = AudioPool::ProcessQueue(v5)) != 0 ) /*0x7509ac*/
    {
      AudioMixer::PlayBuffer(v6, v8); /*0x7509b2*/
      AudioMixer::RequestOrEndBuffer(v6, a2); /*0x7509bd*/
    }
  }
  if ( a4 ) /*0x7509c5*/
    SetAudioSource(v5); /*0x7509cc*/
  return v6; /*0x750931*/
}



// ==== 0x007509E0  StartAudioControllerAt  this=-  sig=csp ====
int *__fastcall StartAudioControllerAt(int a1, _DWORD *a2, int **a3)
{
  int *v5; // esi
  _DWORD *v6; // edi
  int v7; // ebp
  int *v8; // eax
  double v9; // st7
  unsigned int v10; // eax
  unsigned int v11; // ebx

  if ( !VocClass_VoicesEnabled ) /*0x7509ea*/
    return 0; /*0x7509ec*/
  v5 = 0; /*0x7509f5*/
  v6 = 0; /*0x7509f7*/
  if ( a1 >= 0 && a1 < g_VocPlayState ) /*0x750a03*/
    v6 = (_DWORD *)**((_DWORD **)g_VocAudioConfig + a1); /*0x750a0d*/
  v7 = (int)a3; /*0x750a0f*/
  if ( a3 ) /*0x750a15*/
  {
    v8 = AudioSource::Get(a3); /*0x750a19*/
    v5 = v8; /*0x750a1e*/
    if ( v8 ) /*0x750a22*/
    {
      if ( (_DWORD *)sub_406310(v8) != v6 ) /*0x750a2d*/
      {
        VocClass::Release((int)v5); /*0x750a31*/
        v5 = 0; /*0x750a36*/
      }
    }
  }
  if ( v6 ) /*0x750a3a*/
  {
    v9 = ComputeAudioPosition(a2, &a3, *(float *)&v6); /*0x750a43*/
    if ( v9 <= 0.0 ) /*0x750a53*/
    {
      if ( v5 ) /*0x750a9a*/
      {
        VocClass::Release((int)v5); /*0x750a9e*/
        v5 = 0; /*0x750aa3*/
      }
    }
    else
    {
      LOWORD(v10) = Math::RoundToInt(v9 * 16384.0); /*0x750a5b*/
      v11 = v10; /*0x750a60*/
      if ( v10 >= 0x4000 ) /*0x750a68*/
        v11 = 0x4000; /*0x750a6a*/
      if ( v5 || (v5 = AudioPool::ProcessQueue(v6)) != 0 ) /*0x750a7e*/
      {
        AudioMixer::PlayBuffer(v5, v11); /*0x750a84*/
        AudioMixer::RequestOrEndBuffer((int)v5, (unsigned int)a3); /*0x750a8f*/
      }
    }
  }
  if ( v7 ) /*0x750aa7*/
    SetAudioSource(v7, v5, (int)v6); /*0x750aae*/
  return v5; /*0x7509ee*/
}



// ==== 0x00750AC0  ComputeAudioPosition  this=-  sig=csp ====
double __fastcall ComputeAudioPosition(_DWORD *a1, _DWORD *a2, int a3)
{
  ObjectClass *v4; // edi
  __int16 v6; // ax
  char v7; // bl
  int v8; // ecx
  int v9; // eax
  double v11; // st7
  int v12; // eax
  int v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st7
  int v18; // eax
  float v19; // [esp+10h] [ebp-24h]
  float v20; // [esp+14h] [ebp-20h]
  float v21; // [esp+18h] [ebp-1Ch]
  float v22; // [esp+1Ch] [ebp-18h]
  float v23; // [esp+20h] [ebp-14h]
  float v24; // [esp+20h] [ebp-14h]
  float v25; // [esp+24h] [ebp-10h]
  int v26[2]; // [esp+2Ch] [ebp-8h] BYREF

  v4 = (ObjectClass *)a3; /*0x750ac9*/
  *a2 = 0; /*0x750acd*/
  v21 = 0.0; /*0x750ade*/
  v23 = (double)*(int *)DSurface_ViewBounds.__pad_8 * 0.5; /*0x750aec*/
  v25 = (double)*(int *)&DSurface_ViewBounds.__pad_8[4] * 0.5; /*0x750afc*/
  v22 = v23 + v23; /*0x750b06*/
  a3 = 60 * sub_405130(v4); /*0x750b1a*/
  v20 = (float)a3; /*0x750b22*/
  v6 = sub_405160(v4); /*0x750b26*/
  v7 = v6; /*0x750b2b*/
  if ( (v6 & 0x800) == 0 ) /*0x750b30*/
    goto LABEL_7; /*0x750b30*/
  v8 = *a1 / 256; /*0x750b4b*/
  v9 = a1[1] / 256; /*0x750b4e*/
  LOWORD(a3) = v8; /*0x750b58*/
  HIWORD(a3) = v9; /*0x750b5d*/
  if ( (_WORD)v8 == *(_WORD *)&stru_B1D290.needsRedraw && (_WORD)v9 == *(_WORD *)&stru_B1D290.inOpenToppedTransport ) /*0x750b73*/
    return 0.0; /*0x750b82*/
  if ( (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) + 300) & 0x18) == 0 ) /*0x750b9b*/
    return 0.0; /*0x750b9d*/
LABEL_7:
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, a1, v26); /*0x750bb9*/
  v11 = (double)v26[0] - v23; /*0x750bc2*/
  v19 = v11; /*0x750bc6*/
  LOWORD(v12) = Math::RoundToInt(v11); /*0x750bca*/
  *(float *)&a3 = (float)(int)abs32(v12); /*0x750bdc*/
  LOWORD(v13) = Math::RoundToInt((double)v26[1] - v25); /*0x750be8*/
  v14 = (double)(int)abs32(v13); /*0x750bf6*/
  if ( (v7 & 0x40) == 0 ) /*0x750bfd*/
  {
    v15 = *(float *)&a3 - v23; /*0x750c03*/
    *(float *)&a3 = v15; /*0x750c07*/
    v14 = v14 - v25; /*0x750c11*/
    if ( v15 < 0.0 ) /*0x750c1e*/
      *(float *)&a3 = 0.0; /*0x750c20*/
    if ( v14 < 0.0 ) /*0x750c33*/
      v14 = 0.0; /*0x750c37*/
  }
  v24 = v14 + v14; /*0x750c3f*/
  if ( *(float *)&a3 < (double)v20 && v24 < (double)v20 && v20 > 0.0 ) /*0x750c70*/
  {
    if ( *(float *)&a3 <= (double)v24 ) /*0x750c7f*/
      v16 = v24; /*0x750c87*/
    else
      v16 = *(float *)&a3; /*0x750c81*/
    v21 = (v20 - v16) / v20; /*0x750c95*/
  }
  if ( (v7 & 0x10) != 0 && sub_405140((float *)v4) > v21 ) /*0x750cb0*/
    v21 = sub_405140((float *)v4); /*0x750cb9*/
  if ( v21 < 0.05 ) /*0x750ccc*/
    return 0.0; /*0x750cce*/
  v17 = -v22; /*0x750ce2*/
  if ( v19 >= v17 ) /*0x750cef*/
  {
    if ( v19 > (double)v22 ) /*0x750d06*/
      v19 = v22; /*0x750d0c*/
  }
  else
  {
    v19 = v17; /*0x750cf1*/
  }
  LOWORD(v18) = Math::RoundToInt(v19 * 8192.0 / v22 + 8192.0); /*0x750d24*/
  *a2 = v18; /*0x750d2e*/
  return v21; /*0x750b7b*/
}



// ==== 0x00750D40  StartAudioController  this=AbstractClass  sig=ida-proto ====
VocClass *__fastcall StartAudioController(_DWORD *a1, AudioSource *a2)
{
  VocClass *result; // eax
  VocClass *v5; // esi
  int v6; // eax
  AudioPool *v7; // edi
  double v8; // st7
  int *v9; // eax
  unsigned int v10; // eax
  float v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h] BYREF

  result = 0; /*0x750d43*/
  if ( !a2 ) /*0x750d4d*/
    return result; /*0x750d4d*/
  v5 = (VocClass *)AudioSource::Get(a2); /*0x750d5e*/
  v6 = VocClass::Check((VocClass *)a2); /*0x750d60*/
  v7 = (AudioPool *)v6; /*0x750d65*/
  if ( !v6 ) /*0x750d69*/
    goto LABEL_15; /*0x750d69*/
  v8 = ComputeAudioPosition(a1, &v12, v6); /*0x750d76*/
  if ( v8 <= 0.0 ) /*0x750d8a*/
  {
    if ( v5 ) /*0x750e01*/
    {
      VocClass::Release(v5); /*0x750e05*/
      v5 = 0; /*0x750e0a*/
    }
    goto LABEL_15; /*0x750e0a*/
  }
  if ( !v5 ) /*0x750d8e*/
  {
    if ( AudioMixer::SetVolume((AudioMixer *)v7) && VocClass_VoicesEnabled ) /*0x750da2*/
    {
      v9 = AudioPool::ProcessQueue(v7); /*0x750da6*/
      v5 = (VocClass *)v9; /*0x750dab*/
      if ( !v9 ) /*0x750daf*/
        goto LABEL_15; /*0x750daf*/
      sub_4052E0((ObjectClass *)v9); /*0x750db3*/
    }
    if ( v5 ) /*0x750dba*/
      goto LABEL_10; /*0x750dba*/
LABEL_15:
    SetAudioSource((int)a2, v5, (int)v7); /*0x750e0c*/
    return v5; /*0x750e16*/
  }
LABEL_10:
  v11 = v8; /*0x750dbc*/
  LOWORD(v10) = Math::RoundToInt(v11 * 16384.0); /*0x750dc6*/
  if ( v10 >= 0x4000 ) /*0x750dd0*/
    v10 = 0x4000; /*0x750dd2*/
  AudioMixer::PlayBuffer(v5, v10); /*0x750ddb*/
  AudioMixer::RequestOrEndBuffer((int)v5, v12); /*0x750de6*/
  SetAudioSource((int)a2, v5, (int)v7); /*0x750df0*/
  return v5; /*0x750df9*/
}



// ==== 0x00750E20  PlayAudioAt2  this=RandomStruct  sig=csp ====
int *__fastcall PlayAudioAt2(int a1, _DWORD *a2, int a3)
{
  int *result; // eax
  int v6; // esi
  int *started; // edi
  int v8; // eax

  if ( a1 < 0 ) /*0x750e29*/
    return 0; /*0x750e2d*/
  result = LinkedList::Next((int **)dword_B1D3A4); /*0x750e39*/
  v6 = (int)result; /*0x750e3e*/
  if ( result ) /*0x750e42*/
  {
    AudioController::Init(result + 3); /*0x750e50*/
    DListNode::InitEmpty((_DWORD *)v6); /*0x750e57*/
    *(_DWORD *)(v6 + 48) = 0; /*0x750e5c*/
    *(_DWORD *)(v6 + 32) = *a2; /*0x750e6b*/
    *(_DWORD *)(v6 + 36) = a2[1]; /*0x750e70*/
    *(_DWORD *)(v6 + 40) = a2[2]; /*0x750e76*/
    *(_DWORD *)(v6 + 44) = a3; /*0x750e7f*/
    started = StartAudioControllerAt(a1, (_DWORD *)(v6 + 32), (int **)(v6 + 12)); /*0x750e8e*/
    InsertAfterDListNode((int)unk_B1D320, (_DWORD *)v6); /*0x750e90*/
    v8 = ++dword_B1D3A8; /*0x750ea0*/
    if ( dword_B1D3A8 > dword_B1D3AC ) /*0x750ea9*/
      dword_B1D3AC = v8; /*0x750eab*/
    return started; /*0x750eb0*/
  }
  return result; /*0x750e2b*/
}



// ==== 0x00750EC0  UpdateVocClass  this=-  sig=ida-proto ====
int VocClass_Update()
{
  int result; // eax
  int v1; // esi
  int v2; // ebx
  int v3; // eax

  result = AudioQueue::GetNext(&unk_B1D320); /*0x750ec6*/
  v1 = result; /*0x750ecb*/
  if ( result ) /*0x750ecf*/
  {
    do /*0x750f30*/
    {
      v2 = AudioQueue::GetNextAlt(v1); /*0x750eda*/
      if ( !*(_DWORD *)(v1 + 48) ) /*0x750edc*/
        StartAudioController(v1 + 32, v1 + 12); /*0x750ee9*/
      result = AudioSource::Get(v1 + 12); /*0x750ef3*/
      if ( !result ) /*0x750efa*/
      {
        v3 = VocClass::Check(v1 + 12); /*0x750efe*/
        if ( !v3 || (result = AudioMixer::SetVolume(v3)) == 0 ) /*0x750f10*/
        {
          LinkedList::Init(v1); /*0x750f14*/
          result = PushFrontLinkedListAlt(dword_B1D3A4, v1); /*0x750f21*/
          --dword_B1D3A8; /*0x750f26*/
        }
      }
      v1 = v2; /*0x750f2e*/
    }
    while ( v2 ); /*0x750f30*/
  }
  return result; /*0x750f34*/
}



// ==== 0x00750F40  globalHelper_050F40  this=-  sig=csp ====
int __fastcall sub_750F40(_DWORD *a1, int a2)
{
  int result; // eax
  int *i; // esi

  result = AudioQueue::GetNext(unk_B1D320); /*0x750f4c*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x750f55*/
  {
    if ( (a2 & i[11]) != 0 && i[8] == *a1 && i[9] == a1[1] && i[10] == a1[2] ) /*0x750f77*/
      AudioFile::Stop(i + 3); /*0x750f7c*/
    result = AudioQueue::GetNextAlt(i); /*0x750f83*/
  }
  return result; /*0x750f8e*/
}



// ==== 0x00750FA0  AudioQueue::DrainAll  this=AudioQueue  sig=ida-proto ====
int AudioQueue_DrainAll()
{
  int result; // eax
  int *v1; // esi
  int Next_Alt; // edi

  result = AudioQueue::GetNext(unk_B1D320); /*0x750fa6*/
  v1 = (int *)result; /*0x750fab*/
  if ( result ) /*0x750faf*/
  {
    do /*0x750fe8*/
    {
      Next_Alt = AudioQueue::GetNextAlt(v1); /*0x750fbc*/
      AudioController::Stop(v1 + 3); /*0x750fbe*/
      LinkedList::Init((_DWORD **)v1); /*0x750fc5*/
      result = PushFrontLinkedListAlt(dword_B1D3A4, (int)v1); /*0x750fd2*/
      v1 = (int *)Next_Alt; /*0x750fdd*/
      --dword_B1D3A8; /*0x750fe2*/
    }
    while ( Next_Alt ); /*0x750fe8*/
  }
  return result; /*0x750feb*/
}



// ==== 0x00751040  sub_751040  this=-  sig=ida-proto ====
int sub_751040()
{
  int result; // eax
  int i; // esi
  int *v2; // eax

  result = AudioQueue::GetNext(unk_B1D320); /*0x751046*/
  for ( i = result; result; i = result ) /*0x75104f*/
  {
    ++*(_DWORD *)(i + 48); /*0x751055*/
    v2 = AudioSource::Get((int **)(i + 12)); /*0x75105b*/
    if ( v2 ) /*0x751062*/
      sub_4053E0((int)v2); /*0x751066*/
    result = AudioQueue::GetNextAlt((int *)i); /*0x75106d*/
  }
  return result; /*0x751078*/
}



// ==== 0x00751080  sub_751080  this=-  sig=ida-proto ====
int sub_751080()
{
  int result; // eax
  int i; // esi
  int v2; // eax
  int *v3; // eax

  result = AudioQueue::GetNext(unk_B1D320); /*0x751086*/
  for ( i = result; result; i = result ) /*0x75108f*/
  {
    if ( *(_DWORD *)(i + 48) ) /*0x751091*/
    {
      v2 = *(_DWORD *)(i + 48) - 1; /*0x75109b*/
      *(_DWORD *)(i + 48) = v2; /*0x75109e*/
      if ( v2 < 0 ) /*0x7510a1*/
        *(_DWORD *)(i + 48) = 0; /*0x7510a3*/
      v3 = AudioSource::Get((int **)(i + 12)); /*0x7510ad*/
      if ( v3 ) /*0x7510b4*/
        sub_405430((int)v3); /*0x7510b8*/
    }
    result = AudioQueue::GetNextAlt((int *)i); /*0x7510bf*/
  }
  return result; /*0x7510ca*/
}



// ==== 0x007510D0  Audio::InitFromINI  this=Audio  sig=csp ====
char __usercall Audio::InitFromINI@<al>(Audio *this, double a2@<st1>, double a3@<st0>)
{
  double *v3; // ecx
  double *v4; // edi
  char *v5; // eax
  char *v6; // eax
  int KeyCount; // eax
  int v8; // esi
  int v9; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v11; // esi
  char *v12; // ecx
  char *v13; // eax
  ObjectClass *v14; // eax
  ObjectClass *v15; // esi
  int v16; // eax
  int v18; // [esp+8h] [ebp-830h] BYREF
  int i; // [esp+14h] [ebp-824h]
  char Destination[32]; // [esp+18h] [ebp-820h] BYREF
  char String[2048]; // [esp+38h] [ebp-800h] BYREF

  v4 = v3; /*0x7510d9*/
  DListNode::Init((DListNode *)&unk_B1D320); /*0x7510e0*/
  dword_B1D3A4 = (VtableStub *)AllocLinkedListMemory(200, 60); /*0x7510f6*/
  dword_B1D3A8 = 0; /*0x751100*/
  dword_B1D3AC = 0; /*0x75110a*/
  if ( INIClass::BinarySearchSection((int)v4, g_INI_Key_Defaults) ) /*0x751114*/
  {
    INIClass::ReadDouble_Overwrite(v4, g_INI_Key_Defaults, g_INI_Key_Volume, flt_8464B4); /*0x75113e*/
    flt_8464B4 = a2; /*0x751143*/
    INIClass::ReadDouble_Overwrite(v4, g_INI_Key_Defaults, aMinvolume, flt_8464B8); /*0x751161*/
    flt_8464B8 = a3; /*0x751166*/
    INIClass::GetString( /*0x751187*/
      (INIClass *)v4,
      g_INI_Key_Defaults,
      (unsigned __int8 *)aPriority,
      g_INI_Key_NORMAL,
      String,
      2048);
    sub_4067D0(String, &dword_8464B0); /*0x751195*/
    INIClass::GetString((INIClass *)v4, g_INI_Key_Defaults, aControl, &g_INI_DefaultBuffer, String, 2048); /*0x7511b5*/
    v5 = strtok(String, asc_846570); /*0x7511c4*/
    if ( v5 ) /*0x7511ce*/
    {
      dword_B1D3B0 = 0; /*0x7511d0*/
      do /*0x7511f7*/
      {
        sub_406820(&dword_B1D3B0, v5); /*0x7511e1*/
        v5 = strtok(0, asc_846570); /*0x7511ed*/
      }
      while ( v5 ); /*0x7511f7*/
    }
    INIClass::GetString( /*0x751214*/
      (INIClass *)v4,
      g_INI_Key_Defaults,
      (unsigned __int8 *)g_INI_Key_Type,
      &g_INI_DefaultBuffer,
      String,
      2048);
    v6 = strtok(String, asc_846570); /*0x751223*/
    if ( v6 ) /*0x75122d*/
    {
      dword_8464BC = 32; /*0x75122f*/
      do /*0x751256*/
      {
        Audio::ApplyFormatFlags(&dword_8464BC, v6); /*0x751240*/
        v6 = strtok(0, asc_846570); /*0x75124c*/
      }
      while ( v6 ); /*0x751256*/
    }
    dword_8464C4 = INIClass::ReadInt_Overwrite((bool *)v4, g_INI_Key_Defaults, aLimit, dword_8464C4); /*0x751270*/
    dword_8464C0 = INIClass::ReadInt_Overwrite((bool *)v4, g_INI_Key_Defaults, g_INI_Key_Range, dword_8464C0); /*0x75128c*/
  }
  LOBYTE(KeyCount) = INIClass::BinarySearchSection((int)v4, g_INI_Key_SoundList) != 0; /*0x75129f*/
  if ( (_BYTE)KeyCount )
  {
    KeyCount = INIClass::GetKeyCount((char *)v4, g_INI_Key_SoundList); /*0x7512b1*/
    v8 = KeyCount; /*0x7512b6*/
    v9 = 0; /*0x7512b8*/
    for ( i = KeyCount; v9 < v8; ++v9 )
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex((char *)v4, g_INI_Key_SoundList, v9); /*0x7512da*/
      KeyCount = INIClass::GetString( /*0x7512e7*/
                   (INIClass *)v4,
                   g_INI_Key_SoundList,
                   StringByIndex,
                   &g_INI_DefaultBuffer,
                   Destination,
                   32);
      if ( KeyCount )
      {
        if ( &v18 == (int *)-16 ) /*0x7512fa*/
          goto LABEL_21; /*0x7512fa*/
        v11 = 0; /*0x751301*/
        if ( g_VocPlayState <= 0 ) /*0x751305*/
          goto LABEL_21; /*0x751305*/
        while ( 1 )
        {
          v12 = (char *)**((_DWORD **)g_VocAudioConfig + v11); /*0x75130f*/
          v13 = v12 ? VocClass::GetSampleName(v12) : g_Str_Invalid_Voc;
          if ( !_strcmpi(Destination, v13) ) /*0x751327*/
            break; /*0x751327*/
          if ( ++v11 >= g_VocPlayState ) /*0x75133b*/
            goto LABEL_21; /*0x75133b*/
        }
        if ( v11 == -1 ) /*0x751342*/
        {
LABEL_21:
          v14 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x751344*/
          v15 = v14; /*0x75134b*/
          if ( v14 ) /*0x751352*/
          {
            v14->vtable0 = 0; /*0x751354*/
            if ( g_VocPlayState < dword_B1D380 /*0x75138f*/
              || (byte_B1D385 || !dword_B1D380)
              && dword_B1D38C > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B1D378 + 8))(
                   &dword_B1D378,
                   dword_B1D380 + dword_B1D38C,
                   0) )
            {
              v16 = g_VocPlayState++; /*0x75139c*/
              *((_DWORD *)g_VocAudioConfig + v16) = v15; /*0x7513ab*/
            }
            v15->vtable0 = (int)Audio::ProcessMixerOutput(Destination); /*0x7513b7*/
          }
          else
          {
            v15 = 0; /*0x7513bb*/
          }
        }
        else
        {
          v15 = (ObjectClass *)*((_DWORD *)g_VocAudioConfig + v11); /*0x7513c5*/
        }
        LOBYTE(KeyCount) = LoadVocFromINI(v15, (unsigned __int8 ***)v4); /*0x7513cb*/
        v8 = i; /*0x7513d0*/
      }
    }
  }
  return KeyCount; /*0x7513dd*/
}



// ==== 0x007513F0  Audio::LoadSoundINI  this=Audio  sig=csp ====
void *Audio::LoadSoundINI(Audio *this)
{
  void *v1; // esi
  int v2; // eax
  void *result; // eax
  int Next; // esi
  int NextAlt; // edi
  int v6; // [esp+4h] [ebp-4h] BYREF

  while ( g_VocPlayState > 0 ) /*0x7513f9*/
  {
    v1 = *(void **)g_VocAudioConfig; /*0x751400*/
    if ( *(_DWORD *)g_VocAudioConfig ) /*0x751400*/
    {
      v6 = *(_DWORD *)g_VocAudioConfig; /*0x751416*/
      v2 = (*(int (__thiscall **)(int *, int *))(dword_B1D378 + 16))(&dword_B1D378, &v6); /*0x75141a*/
      if ( v2 != -1 && v2 < g_VocPlayState && v2 < --g_VocPlayState ) /*0x751435*/
      {
        do /*0x75144d*/
        {
          ++v2; /*0x75143d*/
          *((_DWORD *)g_VocAudioConfig + v2 - 1) = *((_DWORD *)g_VocAudioConfig + v2); /*0x751441*/
        }
        while ( v2 < g_VocPlayState ); /*0x75144d*/
      }
      __3_YAXPAX_Z(v1); /*0x751450*/
    }
  }
  result = dword_B1D3A4; /*0x751461*/
  if ( dword_B1D3A4 ) /*0x751468*/
  {
    Next = AudioQueue::GetNext((AudioQueue *)&stru_B1D290.isAliveFlag); /*0x751474*/
    if ( Next ) /*0x751478*/
    {
      do /*0x7514b1*/
      {
        NextAlt = AudioQueue::GetNextAlt((AudioQueue *)Next); /*0x751485*/
        AudioController::Stop((AudioController *)(Next + 12)); /*0x751487*/
        LinkedList::Init((LinkedList *)Next); /*0x75148e*/
        PushFrontLinkedListAlt(dword_B1D3A4, Next); /*0x75149b*/
        Next = NextAlt; /*0x7514a6*/
        --dword_B1D3A8; /*0x7514ab*/
      }
      while ( NextAlt ); /*0x7514b1*/
    }
    result = (void *)VtableStub::Push_407510(dword_B1D3A4); /*0x7514ba*/
    dword_B1D3A4 = 0; /*0x7514bf*/
  }
  return result; /*0x7514c9*/
}



// ==== 0x007514D0  VocClass::FindIndex  this=VocClass  sig=csp ====
int __thiscall VocClass::FindIndex(VocClass *this)
{
  int v2; // esi
  char *v3; // ecx
  char *v4; // eax

  if ( !this ) /*0x7514d6*/
    return -1; /*0x7514d6*/
  v2 = 0; /*0x7514dd*/
  if ( g_VocPlayState <= 0 ) /*0x7514e1*/
    return -1; /*0x751515*/
  while ( 1 )
  {
    v3 = (char *)**((_DWORD **)g_VocAudioConfig + v2); /*0x7514eb*/
    v4 = v3 ? VocClass::GetSampleName(v3) : g_Str_Invalid_Voc;
    if ( !_strcmpi((char *)this, v4) ) /*0x7514ff*/
      break; /*0x7514ff*/
    if ( ++v2 >= g_VocPlayState ) /*0x751513*/
      return -1; /*0x751513*/
  }
  return v2; /*0x751515*/
}



// ==== 0x00751520  ObjectClass::System_Get  this=ObjectClass  sig=csp ====
int __thiscall System_Get_751520(ObjectClass *this)
{
  int v2; // esi
  char *v3; // ecx
  char *v4; // eax

  if ( !this ) /*0x751526*/
    return 0; /*0x751526*/
  if ( !_strcmpi((char *)this, g_Str__none_) ) /*0x75152e*/
    return 0; /*0x75152e*/
  v2 = 0; /*0x75153f*/
  if ( g_VocPlayState <= 0 ) /*0x751543*/
    return 0; /*0x751577*/
  while ( 1 )
  {
    v3 = (char *)**((_DWORD **)g_VocAudioConfig + v2); /*0x75154d*/
    v4 = v3 ? VocClass::GetSampleName(v3) : g_Str_Invalid_Voc;
    if ( !_strcmpi((char *)this, v4) ) /*0x751561*/
      break; /*0x751561*/
    if ( ++v2 >= g_VocPlayState ) /*0x751575*/
      return 0; /*0x751575*/
  }
  return *((_DWORD *)g_VocAudioConfig + v2); /*0x751577*/
}



// ==== 0x00751590  VocClass::GetSampleNameByIndex  this=VocClass  sig=ida-proto ====
char *__fastcall VocClass::GetSampleNameByIndex(int a1)
{
  char *v1; // ecx

  if ( a1 < 0 || a1 >= g_VocPlayState ) /*0x75159a*/
    return g_Str__none_; /*0x7515b5*/
  v1 = (char *)**((_DWORD **)g_VocAudioConfig + a1); /*0x7515a4*/
  if ( v1 ) /*0x7515a8*/
    return VocClass::GetSampleName(v1); /*0x7515aa*/
  else
    return g_Str_Invalid_Voc; /*0x7515af*/
}



// ==== 0x007515C0  ObjectClass::System_Get_7515C0  this=ObjectClass  sig=csp ====
int __thiscall System_Get_7515C0(ObjectClass *this)
{
  int result; // eax
  ObjectClass **i; // esi

  result = 0; /*0x7515c6*/
  if ( g_VocPlayState <= 0 ) /*0x7515cb*/
    return -1; /*0x7515df*/
  for ( i = (ObjectClass **)g_VocAudioConfig; *i != this; ++i ) /*0x7515cd*/
  {
    if ( ++result >= g_VocPlayState ) /*0x7515dd*/
      return -1; /*0x7515dd*/
  }
  return result; /*0x7515e2*/
}



// ==== 0x00751620  SaveGame::SaveAudioQueueItems  this=SaveGame  sig=csp ====
int __thiscall SaveGame::SaveAudioQueueItems(SaveGame *this)
{
  int v2; // esi
  int i; // edi
  int v4; // esi
  char *v5; // ecx
  char *SampleName; // ebx
  char *v7; // ecx
  char *v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-14h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-10h] BYREF

  v11 = SaveGame::CountLinkedList((SaveGame *)&stru_B1D290.isAliveFlag); /*0x751637*/
  v2 = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(this, &v11, 4, 0); /*0x751647*/
  if ( v2 >= 0 )
  {
    for ( i = AudioQueue::GetNext((AudioQueue *)&stru_B1D290.isAliveFlag); i; i = AudioQueue::GetNextAlt((AudioQueue *)i) )
    {
      v4 = -1; /*0x751665*/
      v12[0] = -1; /*0x751668*/
      v5 = *(char **)(i + 20); /*0x75166c*/
      if ( v5 )
      {
        SampleName = VocClass::GetSampleName(v5); /*0x751678*/
        if ( SampleName )
        {
          v4 = 0; /*0x751683*/
          if ( g_VocPlayState <= 0 )
          {
LABEL_11:
            v4 = -1; /*0x7516bc*/
          }
          else
          {
            while ( 1 )
            {
              v7 = (char *)**((_DWORD **)g_VocAudioConfig + v4); /*0x751692*/
              v8 = v7 ? VocClass::GetSampleName(v7) : g_Str_Invalid_Voc;
              if ( !_strcmpi(SampleName, v8) ) /*0x7516a6*/
                break; /*0x7516a6*/
              if ( ++v4 >= g_VocPlayState ) /*0x7516ba*/
                goto LABEL_11; /*0x7516ba*/
            }
          }
        }
        v12[0] = v4; /*0x7516bf*/
      }
      v12[1] = *(_DWORD *)(i + 32); /*0x7516c8*/
      v9 = *(_DWORD *)this->__pad_0; /*0x7516cf*/
      v12[2] = *(_DWORD *)(i + 36); /*0x7516d2*/
      v12[3] = *(_DWORD *)(i + 40); /*0x7516e1*/
      v2 = (*(int (__stdcall **)(SaveGame *, _DWORD *, int, _DWORD))(v9 + 16))(this, v12, 16, 0); /*0x7516e8*/
      if ( v2 < 0 ) /*0x7516ec*/
        break; /*0x7516ec*/
    }
  }
  return v2; /*0x751701*/
}



// ==== 0x00751710  LoadGame::RestoreAudioState  this=LoadGame  sig=csp ====
int __thiscall LoadGame::RestoreAudioState(LoadGame *this)
{
  LoadGame *v1; // edi
  int Next; // esi
  int NextAlt; // ebx
  int result; // eax
  AudioMixer *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int *v8; // eax
  int *v9; // esi
  int v10; // ebx
  int v11; // eax
  int v13; // [esp+24h] [ebp-2Ch]
  int v14; // [esp+28h] [ebp-28h] BYREF
  int v15; // [esp+2Ch] [ebp-24h]
  int v16; // [esp+30h] [ebp-20h]
  int v17; // [esp+3Ch] [ebp-14h]
  _DWORD v18[4]; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x751717*/
  Next = AudioQueue::GetNext((AudioQueue *)&stru_B1D290.isAliveFlag); /*0x751727*/
  if ( Next ) /*0x75172b*/
  {
    do /*0x751763*/
    {
      NextAlt = AudioQueue::GetNextAlt((AudioQueue *)Next); /*0x751737*/
      AudioController::Stop((AudioController *)(Next + 12)); /*0x751739*/
      LinkedList::Init((LinkedList *)Next); /*0x751740*/
      PushFrontLinkedListAlt(dword_B1D3A4, Next); /*0x75174d*/
      Next = NextAlt; /*0x751758*/
      --dword_B1D3A8; /*0x75175d*/
    }
    while ( NextAlt ); /*0x751763*/
  }
  AudioMixer::Shutdown(); /*0x751765*/
  result = (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)v1->__pad_0 + 12))(v1, &v14, 4, 0); /*0x751776*/
  if ( result >= 0 ) /*0x75177b*/
  {
    v13 = 0; /*0x751785*/
    if ( v14 > 0 ) /*0x75178f*/
    {
      while ( 1 ) /*0x7517a1*/
      {
        result = (*(int (__stdcall **)(LoadGame *, _DWORD *, int, _DWORD))(*(_DWORD *)v1->__pad_0 + 12))(v1, v18, 16, 0); /*0x7517a1*/
        v16 = result; /*0x7517a6*/
        if ( result < 0 ) /*0x7517aa*/
          break; /*0x7517aa*/
        if ( v18[0] != -1 && v18[0] < g_VocPlayState && v18[0] >= 0 ) /*0x7517cb*/
        {
          v5 = (AudioMixer *)**((_DWORD **)g_VocAudioConfig + v18[0]); /*0x7517da*/
          if ( v5 ) /*0x7517de*/
          {
            if ( AudioMixer::SetVolume(v5) ) /*0x7517e4*/
            {
              v6 = v18[1]; /*0x7517f9*/
              v7 = v18[2]; /*0x7517fd*/
              v17 = v18[3]; /*0x751803*/
              v15 = v18[0]; /*0x751807*/
              if ( v18[0] >= 0 ) /*0x75180b*/
              {
                v8 = LinkedList::Next((LinkedList *)dword_B1D3A4); /*0x751813*/
                v9 = v8; /*0x751818*/
                if ( v8 ) /*0x75181c*/
                {
                  AudioController::Init((AudioController *)(v8 + 3)); /*0x751823*/
                  DListNode::InitEmpty((DListNode *)v9); /*0x75182a*/
                  v9[12] = 0; /*0x751831*/
                  v9[11] = 0; /*0x75183a*/
                  v9[8] = v6; /*0x75183d*/
                  v10 = v17; /*0x75183f*/
                  v9[9] = v7; /*0x751843*/
                  v9[10] = v10; /*0x751846*/
                  StartAudioControllerAt(v15, v9 + 8, (int **)v9 + 3); /*0x75184d*/
                  InsertAfterDListNode((int)&stru_B1D290.isAliveFlag, v9); /*0x751859*/
                  v11 = ++dword_B1D3A8; /*0x751869*/
                  if ( dword_B1D3A8 > dword_B1D3AC ) /*0x751871*/
                    dword_B1D3AC = v11; /*0x751873*/
                  v1 = this; /*0x751878*/
                }
              }
            }
          }
        }
        if ( ++v13 >= v14 ) /*0x75188b*/
          return v16; /*0x751891*/
      }
    }
  }
  return result; /*0x751895*/
}



// ==== 0x007518C0  SetVocClassEnabled  this=-  sig=ida-proto ====
void __fastcall VocClass_SetEnabled(char a1)
{
  VocClass_VoicesEnabled = a1; /*0x7518c0*/
}



// ==== 0x007518D0  _DynamicVectorClass_PAVVocClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_VocClass::Destroy(_DynamicVectorClass_PAVVocClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7518d6*/
  this->m_10 = 0; /*0x7518d9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7518e0*/
  {
    __3_YAXPAX_Z(v2); /*0x7518e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7518ee*/
  }
  BYTE1(this->m_C) = 0; /*0x7518f1*/
  this->m_8 = 0; /*0x7518f4*/
}



// ==== 0x00751900  _DynamicVectorClass_PAVVocClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VocClass::GetItemIndex(_DynamicVectorClass_PAVVocClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x751900*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x751915*/
  else
    return 0; /*0x751907*/
}



// ==== 0x00751920  _VectorClass_PAVVocClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VocClass::Get(_VectorClass_PAVVocClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x75192a*/
}



// ==== 0x00751930  _VectorClass_PAVVocClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VocClass::Add(_VectorClass_PAVVocClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x751932*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x75193d*/
  {
    v3 = 0; /*0x75193f*/
    if ( m_8 <= 0 ) /*0x751943*/
      return 1; /*0x751963*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x751945*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x75194b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x751954*/
    {
      ++v3; /*0x751956*/
      ++v4; /*0x751957*/
      if ( v3 >= m_8 ) /*0x75195c*/
        return 1; /*0x75195c*/
    }
  }
  return 0; /*0x75195e*/
}



// ==== 0x00751970  _VectorClass_PAVVocClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VocClass::Release(_VectorClass_PAVVocClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x75197c*/
  {
    LOBYTE(this->m_C) = 0; /*0x751986*/
    if ( a3 ) /*0x75198c*/
      v4 = a3; /*0x7519a2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75199e*/
    LOBYTE(this->m_C) = 1; /*0x7519a6*/
    if ( v4 ) /*0x7519aa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7519b5*/
      {
        m_8 = this->m_8; /*0x7519bc*/
        if ( a2 < m_8 ) /*0x7519c1*/
          m_8 = a2; /*0x7519c3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7519c9*/
          ++i; /*0x7519ce*/
        if ( BYTE1(this->m_C) ) /*0x7519db*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7519e6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7519ee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7519f7*/
      this->m_8 = a2; /*0x7519ff*/
      BYTE1(this->m_C) = a3 == 0; /*0x751a02*/
      return 1; /*0x751a08*/
    }
    else
    {
      return 0; /*0x7519af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVVocClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x751a12*/
    return 1; /*0x751a18*/
  }
}



// ==== 0x00751A20  _VectorClass_PAVVocClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_VocClass::Remove(_VectorClass_PAVVocClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x751a2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x751a33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x751a3b*/
  }
  BYTE1(this->m_C) = 0; /*0x751a3e*/
  this->m_8 = 0; /*0x751a41*/
}



// ==== 0x00751A50  _VectorClass_PAVVocClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VocClass::GetSize(_VectorClass_PAVVocClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x751a50*/
    return 0; /*0x751a58*/
  m_8 = this->m_8; /*0x751a5e*/
  result = 0; /*0x751a61*/
  if ( m_8 <= 0 ) /*0x751a65*/
    return -1; /*0x751a7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x751a6b*/
  {
    if ( ++result >= m_8 ) /*0x751a7a*/
      return -1; /*0x751a7a*/
  }
  return result; /*0x751a5a*/
}



// ==== 0x00751A90  _VectorClass_PAVVocClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VocClass::GetCapacity(_VectorClass_PAVVocClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x751a90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x751aa5*/
  else
    return 0; /*0x751a97*/
}



// ==== 0x00751AB0  _DynamicVectorClass_PAVVocClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_VocClass::SetCapacity(_DynamicVectorClass_PAVVocClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x751abc*/
  {
    LOBYTE(this->m_C) = 0; /*0x751ac2*/
    if ( a3 ) /*0x751ac8*/
      v4 = a3; /*0x751ade*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x751ada*/
    LOBYTE(this->m_C) = 1; /*0x751ae2*/
    if ( !v4 ) /*0x751ae6*/
      return 0; /*0x751b5a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x751ae8*/
    {
      m_8 = this->m_8; /*0x751aef*/
      if ( a2 < m_8 ) /*0x751af4*/
        m_8 = a2; /*0x751af6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x751afc*/
        ++i; /*0x751b01*/
      if ( BYTE1(this->m_C) ) /*0x751b0e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x751b19*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x751b21*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x751b2a*/
    this->m_8 = a2; /*0x751b32*/
    BYTE1(this->m_C) = a3 == 0; /*0x751b35*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVVocClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x751b3e*/
  }
  v7 = this->m_8; /*0x751b41*/
  if ( v7 < this->m_10 ) /*0x751b49*/
    this->m_10 = v7; /*0x751b4b*/
  return 1; /*0x751b4e*/
}



// ==== 0x00751B60  _DynamicVectorClass_PAVVocClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_VocClass::FindItemIndex(_DynamicVectorClass_PAVVocClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x751b60*/
  result = 0; /*0x751b63*/
  if ( m_10 <= 0 ) /*0x751b68*/
    return -1; /*0x751b7f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x751b6e*/
  {
    if ( ++result >= m_10 ) /*0x751b7d*/
      return -1; /*0x751b7d*/
  }
  return result; /*0x751b82*/
}



// ==== 0x00751B90  _VectorClass_PAVVocClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_VocClass::QueryInterface(_VectorClass_PAVVocClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x751b93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VocClass *>::`vftable'; /*0x751b96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x751ba0*/
  {
    __3_YAXPAX_Z(v3); /*0x751ba8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x751bb0*/
  }
  BYTE1(this->m_C) = 0; /*0x751bbb*/
  this->m_8 = 0; /*0x751bc1*/
  if ( (a2 & 1) != 0 ) /*0x751bc8*/
    __3_YAXPAX_Z(this); /*0x751bcb*/
  return this->__pad_0; /*0x751bd5*/
}



// ==== 0x00751BE0  _DynamicVectorClass_PAVVocClass::Constructor_VectorClass_VocClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_VocClass::Constructor_VectorClass_VocClass___(
        _DynamicVectorClass_PAVVocClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x751be3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VocClass *>::`vftable'; /*0x751be6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x751bf0*/
  {
    __3_YAXPAX_Z(v3); /*0x751bf8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x751c00*/
  }
  BYTE1(this->m_C) = 0; /*0x751c0b*/
  this->m_8 = 0; /*0x751c11*/
  if ( (a2 & 1) != 0 ) /*0x751c18*/
    __3_YAXPAX_Z(this); /*0x751c1b*/
  return this->__pad_0; /*0x751c25*/
}



// ==== 0x00751C30  Map_Load_751C30  this=-  sig=ida-proto ====
char sub_751C30()
{
  DWORD NumberOfFreeClusters; // [esp+10h] [ebp-1D0h] BYREF
  DWORD BytesPerSector; // [esp+14h] [ebp-1CCh] BYREF
  DWORD SectorsPerCluster; // [esp+18h] [ebp-1C8h] BYREF
  DWORD TotalNumberOfClusters; // [esp+1Ch] [ebp-1C4h] BYREF
  DWORD MaximumComponentLength[2]; // [esp+20h] [ebp-1C0h] BYREF
  DWORD FileSystemFlags; // [esp+28h] [ebp-1B8h] BYREF
  char v7[176]; // [esp+2Ch] [ebp-1B4h] BYREF
  CHAR Buffer[260]; // [esp+DCh] [ebp-104h] BYREF

  if ( !GetLogicalDriveStringsA(0x104u, Buffer) ) /*0x751c47*/
    return 0; /*0x751c54*/
  if ( strlen(Buffer) ) /*0x751c71*/
  {
    *(_DWORD *)Buffer = 23598; /*0x751c88*/
    memset(&v7[32], 0, 0x90u); /*0x751ca0*/
    *(_DWORD *)&v7[32] = GetDriveTypeA(Buffer); /*0x751cac*/
    GetDiskFreeSpaceA(Buffer, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters); /*0x751cbd*/
    *(_DWORD *)&v7[168] = NumberOfFreeClusters * BytesPerSector * SectorsPerCluster; /*0x751cdf*/
    *(_DWORD *)&v7[172] = TotalNumberOfClusters * BytesPerSector * SectorsPerCluster; /*0x751ced*/
    GetVolumeInformationA( /*0x751d18*/
      Buffer,
      &v7[36],
      0x40u,
      (LPDWORD)&v7[100],
      MaximumComponentLength,
      &FileSystemFlags,
      &v7[104],
      0x40u);
    sprintf(v7, "RA%d", 1); /*0x751d4f*/
    _strcmpi(v7, &v7[36]); /*0x751d5e*/
  }
  else
  {
    CD::`vftable'(dword_81C1D0); /*0x751da4*/
  }
  return 1; /*0x751c51*/
}



// ==== 0x00751DD0  sub_751DD0  this=-  sig=ida-proto ====
char __fastcall sub_751DD0(LPCSTR lpRootPathName, UINT *a2)
{
  DWORD v5; // eax
  bool v6; // zf
  DWORD SectorsPerCluster; // [esp+Ch] [ebp-18h] BYREF
  DWORD BytesPerSector; // [esp+10h] [ebp-14h] BYREF
  DWORD NumberOfFreeClusters; // [esp+14h] [ebp-10h] BYREF
  DWORD TotalNumberOfClusters; // [esp+18h] [ebp-Ch] BYREF
  DWORD FileSystemFlags; // [esp+1Ch] [ebp-8h] BYREF
  DWORD MaximumComponentLength; // [esp+20h] [ebp-4h] BYREF

  memset(a2, 0, 0x90u); /*0x751de4*/
  *a2 = GetDriveTypeA(lpRootPathName); /*0x751dec*/
  if ( !GetDiskFreeSpaceA( /*0x751e03*/
          lpRootPathName,
          &SectorsPerCluster,
          &BytesPerSector,
          &NumberOfFreeClusters,
          &TotalNumberOfClusters) )
    goto LABEL_2; /*0x751e0b*/
  v5 = BytesPerSector * SectorsPerCluster; /*0x751e2c*/
  v6 = NumberOfFreeClusters == 0; /*0x751e36*/
  a2[34] = NumberOfFreeClusters * BytesPerSector * SectorsPerCluster; /*0x751e38*/
  if ( !v6 ) /*0x751e3e*/
    return 0; /*0x751e42*/
  a2[35] = TotalNumberOfClusters * v5; /*0x751e4e*/
  if ( !GetVolumeInformationA( /*0x751e77*/
          lpRootPathName,
          (LPSTR)a2 + 4,
          0x40u,
          a2 + 17,
          &MaximumComponentLength,
          &FileSystemFlags,
          (LPSTR)a2 + 72,
          0x40u) )
  {
LABEL_2:
    Debug::Log(); /*0x751e0d*/
    return 0; /*0x751e23*/
  }
  return 1; /*0x751e1d*/
}



// ==== 0x00751EA0  sub_751EA0  this=-  sig=csp ====
HANDLE __fastcall sub_751EA0(const CHAR *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  const char *v4; // edi
  HANDLE result; // eax
  void *v7; // esi
  HANDLE v9; // [esp+10h] [ebp-248h]
  CHAR FileName[260]; // [esp+14h] [ebp-244h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+118h] [ebp-140h] BYREF

  v4 = a1; /*0x751eb0*/
  result = FindFirstFileA(a1, &FindFileData); /*0x751eba*/
  v7 = result; /*0x751ec0*/
  v9 = result; /*0x751ec5*/
  if ( result != (HANDLE)-1 ) /*0x751ec9*/
  {
    do /*0x751fef*/
    {
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 ) /*0x751edf*/
      {
        if ( _strcmpi(FindFileData.cFileName, asc_826598) ) /*0x751ef2*/
        {
          if ( _strcmpi(FindFileData.cFileName, asc_846610) ) /*0x751f0f*/
          {
            ++*a2; /*0x751f29*/
            strcpy(FileName, v4); /*0x751f43*/
            FileName[strlen(FileName) - 1] = 0; /*0x751f61*/
            strcat(FileName, FindFileData.cFileName); /*0x751f7f*/
            strcat(FileName, asc_84660C); /*0x751fab*/
            sub_751EA0(a3, a4); /*0x751fc2*/
            v7 = v9; /*0x751fc7*/
            v4 = a1; /*0x751fcb*/
          }
        }
      }
      else
      {
        ++*a3; /*0x751fdb*/
        *a4 += FindFileData.nFileSizeLow; /*0x751fe4*/
      }
    }
    while ( FindNextFileA(v7, &FindFileData) ); /*0x751fef*/
    return (HANDLE)FindClose(v7); /*0x751ffe*/
  }
  return result; /*0x752005*/
}



// ==== 0x00752020  sub_752020  this=-  sig=ida-proto ====
void sub_752020()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75202c*/
  dbl_B1D3E8 = Math::Sqrt(v0 + v0); /*0x75203e*/
}



// ==== 0x00752050  sub_752050  this=-  sig=ida-proto ====
void sub_752050()
{
  dbl_B1D490 = dbl_B1D3E8 / 60.0; /*0x75205c*/
}



// ==== 0x00752070  sub_752070  this=-  sig=ida-proto ====
void sub_752070()
{
  dbl_B1D438 = 1.0 / dbl_B1D490; /*0x75207c*/
}



// ==== 0x00752090  sub_752090  this=-  sig=ida-proto ====
void sub_752090()
{
  dbl_B1D430 = 0.0174532925199433 * 45.0; /*0x75209c*/
}



// ==== 0x007520B0  sub_7520B0  this=-  sig=ida-proto ====
void sub_7520B0()
{
  dbl_B1D400 = 0.0174532925199433 * 60.0; /*0x7520bc*/
}



// ==== 0x007520D0  sub_7520D0  this=-  sig=ida-proto ====
void sub_7520D0()
{
  dbl_B1D3C0 = 0.0174532925199433 * 90.0; /*0x7520dc*/
}



// ==== 0x007520F0  sub_7520F0  this=-  sig=ida-proto ====
__int64 sub_7520F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B1D3C0 - dbl_B1D400); /*0x752102*/
  result = Math::RoundToInt(v0 * dbl_B1D3E8 * 0.5); /*0x752116*/
  dword_B1D498 = result; /*0x75211b*/
  return result; /*0x752120*/
}



// ==== 0x00752130  sub_752130  this=-  sig=ida-proto ====
void sub_752130()
{
  dbl_B1D408 = Math::ArcTan((double)dword_B1D498 * 0.00390625); /*0x752147*/
}



// ==== 0x00752160  sub_752160  this=-  sig=ida-proto ====
void sub_752160()
{
  dbl_B1D420 = Math::ArcTan((double)(2 * dword_B1D498) / dbl_B1D3E8); /*0x752182*/
}



// ==== 0x00752190  sub_752190  this=-  sig=ida-proto ====
__int64 sub_752190()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D498) + 0.5); /*0x7521ab*/
  dword_B1D488 = result; /*0x7521b0*/
  return result; /*0x7521b6*/
}



// ==== 0x007521C0  sub_7521C0  this=-  sig=ida-proto ====
int sub_7521C0()
{
  word_B1D3D4 = 0; /*0x7521c2*/
  word_B1D3D6 = 0; /*0x7521c8*/
  return 0; /*0x7521ce*/
}



// ==== 0x007521D0  sub_7521D0  this=-  sig=ida-proto ====
int sub_7521D0()
{
  dword_B1D410 = 0; /*0x7521d2*/
  dword_B1D414 = 0; /*0x7521d7*/
  dword_B1D418 = 0; /*0x7521dc*/
  return 0; /*0x7521e1*/
}



// ==== 0x007521F0  sub_7521F0  this=-  sig=ida-proto ====
int sub_7521F0()
{
  dword_B1D448 = 0; /*0x7521f5*/
  dword_B1D440 = 128; /*0x7521ff*/
  dword_B1D444 = 128; /*0x752204*/
  return 128; /*0x752209*/
}



// ==== 0x00752210  sub_752210  this=-  sig=ida-proto ====
int sub_752210()
{
  g_InfantryRenderPool = 0; /*0x752217*/
  dword_B1D4A8 = 0; /*0x75221c*/
  byte_B1D4AC = 1; /*0x752221*/
  byte_B1D4AD = 0; /*0x752228*/
  dword_B1D4A0 = (int)&DynamicVectorClass<VoxClass *>::`vftable'; /*0x75222d*/
  dword_B1D4B4 = 10; /*0x752237*/
  g_InfantrySelectState = 0; /*0x752241*/
  return atexit(sub_752250); /*0x75224c*/
}



// ==== 0x00752250  sub_752250  this=-  sig=ida-proto ====
void __cdecl sub_752250()
{
  dword_B1D4A0 = (int)&VectorClass<VoxClass *>::`vftable'; /*0x752258*/
  if ( g_InfantryRenderPool && byte_B1D4AD ) /*0x75226c*/
  {
    __3_YAXPAX_Z(g_InfantryRenderPool); /*0x75226f*/
    g_InfantryRenderPool = 0; /*0x752277*/
  }
  byte_B1D4AD = 0; /*0x75227d*/
  dword_B1D4A8 = 0; /*0x752283*/
}



// ==== 0x00752290  Audio_Init_752290  this=-  sig=ida-proto ====
int sub_752290()
{
  char *v0; // esi
  int result; // eax
  void *Enabled; // eax

  dword_B1D3D8 = 0; /*0x752291*/
  dword_B1D428 = 0; /*0x75229b*/
  v0 = stru_B1D450; /*0x7522a5*/
  do /*0x7522ba*/
  {
    DListNode::Init(v0); /*0x7522ac*/
    v0 += 12; /*0x7522b1*/
  }
  while ( (int)v0 < (int)&unk_B1D480 ); /*0x7522ba*/
  DListNode::Init(&stru_B1D3F0); /*0x7522c1*/
  DListNode::Init(&stru_B1D3C8); /*0x7522cb*/
  result = (int)g_InfantryDrawState; /*0x7522d0*/
  dword_B1D4B8 = 0; /*0x7522d5*/
  dword_B1D4BC = 1; /*0x7522e1*/
  if ( g_InfantryDrawState /*0x752307*/
    || (Enabled = Audio::GetEnabled(),
        result = (int)AudioStream::Constructor(Enabled, 0xBB8u),
        (g_InfantryDrawState = (void *)result) != 0) )
  {
    SetAudioFileName(result, aEvaStream); /*0x752311*/
    AudioQueue::IsEmpty((int)g_InfantryDrawState, g_MixerChannel_Voice); /*0x752322*/
    AudioQueue::IsNotEmpty((int)g_InfantryDrawState, g_MixerChannel_Ambient); /*0x752333*/
    return 1; /*0x752338*/
  }
  return result; /*0x752309*/
}



// ==== 0x00752340  Audio_Cleanup  this=-  sig=ida-proto ====
void sub_752340()
{
  ThemeClass::ClearQueues(); /*0x752340*/
  if ( g_InfantryDrawState ) /*0x75234d*/
  {
    Audio::Release(g_InfantryDrawState); /*0x75234f*/
    AudioSample::Destructor(g_InfantryDrawState); /*0x75235a*/
    g_InfantryDrawState = 0; /*0x75235f*/
  }
}



// ==== 0x00752370  ThemeClass::ClearQueues  this=ThemeClass  sig=ida-proto ====
int __cdecl ThemeClass_ClearQueues()
{
  int result; // eax
  int i; // esi
  int j; // esi
  int *v3; // edi
  int k; // esi

  result = dword_B1D4BC; /*0x752370*/
  if ( dword_B1D4BC ) /*0x752377*/
  {
    if ( dword_B1D4B8 ) /*0x75238c*/
    {
      *(_DWORD *)(*((_DWORD *)dword_B1D4B8 + 3) + 80) = 2; /*0x752391*/
      __3_YAXPAX_Z(dword_B1D4B8); /*0x75239b*/
      dword_B1D4B8 = 0; /*0x7523a3*/
    }
    for ( i = AudioQueue::GetNext(&stru_B1D3F0); i; i = AudioQueue::GetNext(&stru_B1D3F0) ) /*0x7523bb*/
    {
      LinkedList::Init((_DWORD **)i); /*0x7523bf*/
      *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x7523c8*/
      __3_YAXPAX_Z((void *)i); /*0x7523cb*/
    }
    for ( j = AudioQueue::GetNext(&stru_B1D3C8); j; j = AudioQueue::GetNext(&stru_B1D3C8) ) /*0x7523f1*/
    {
      LinkedList::Init((_DWORD **)j); /*0x7523f5*/
      *(_DWORD *)(*(_DWORD *)(j + 12) + 80) = 2; /*0x7523fe*/
      __3_YAXPAX_Z((void *)j); /*0x752401*/
    }
    v3 = (int *)stru_B1D450; /*0x752419*/
    do /*0x752457*/
    {
      result = AudioQueue::GetNext(v3); /*0x752420*/
      for ( k = result; result; k = result ) /*0x752429*/
      {
        LinkedList::Init((_DWORD **)k); /*0x75242d*/
        *(_DWORD *)(*(_DWORD *)(k + 12) + 80) = 2; /*0x752436*/
        __3_YAXPAX_Z((void *)k); /*0x752439*/
        result = AudioQueue::GetNext(v3); /*0x752443*/
      }
      v3 += 3; /*0x75244e*/
    }
    while ( (int)v3 < (int)&unk_B1D480 ); /*0x752457*/
  }
  return result; /*0x75245c*/
}



// ==== 0x00752460  Team_Helper_752460  this=-  sig=ida-proto ====
char *__fastcall sub_752460(int a1)
{
  if ( a1 < 0 || a1 >= g_InfantrySelectState ) /*0x75246f*/
    return g_Str_none; /*0x75247a*/
  else
    return (char *)*((_DWORD *)g_InfantryRenderPool + a1); /*0x752476*/
}



// ==== 0x00752480  UpdateThemeManager  this=RandomStruct  sig=csp ====
int __fastcall UpdateThemeManager(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ebp
  int *v5; // ebx
  int i; // esi
  int *v7; // eax

  result = (int)g_InfantryDrawState; /*0x752480*/
  v4 = a2; /*0x752487*/
  if ( g_InfantryDrawState ) /*0x75248b*/
  {
    if ( a1 >= 0 && a1 < g_InfantrySelectState ) /*0x75249f*/
    {
      result = dword_B1D3D8; /*0x7524a5*/
      if ( !dword_B1D3D8 ) /*0x7524ac*/
      {
        v5 = (int *)*((_DWORD *)g_InfantryRenderPool + a1); /*0x7524b7*/
        result = dword_B1D4C4; /*0x7524ba*/
        if ( v5 != (int *)dword_B1D4C4 ) /*0x7524c1*/
        {
          if ( a2 == -1 ) /*0x7524ca*/
            v4 = v5[19]; /*0x7524cc*/
          if ( a3 == -1 ) /*0x7524d4*/
            a3 = v5[18]; /*0x7524d9*/
          if ( dword_B1D4C4 && v4 == 2 ) /*0x7524e4*/
          {
            for ( i = AudioQueue::GetNext(&stru_B1D3C8); i; i = AudioQueue::GetNext(&stru_B1D3C8) ) /*0x7524f5*/
            {
              LinkedList::Init((_DWORD **)i); /*0x7524f9*/
              *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x752502*/
              __3_YAXPAX_Z((void *)i); /*0x752509*/
            }
            if ( dword_B1D4C4 ) /*0x752529*/
            {
              *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x75252b*/
              dword_B1D4C4 = 0; /*0x752532*/
            }
            if ( g_InfantryDrawState ) /*0x752544*/
              Audio::Release(g_InfantryDrawState); /*0x752546*/
            ThemeClass::ClearQueues(); /*0x75254b*/
            qword_B1D4D0 = 0; /*0x752552*/
          }
          v7 = AudioQueue::FindByData(v5); /*0x75255e*/
          if ( !v7 || v7[6] != v4 ) /*0x75256a*/
            Audio_Load((int)v5, v4, a3); /*0x752575*/
          UpdateThemes(); /*0x75257a*/
        }
      }
    }
  }
  return result; /*0x75257f*/
}



// ==== 0x00752590  Audio_Load  this=AudioQueue  sig=csp ====
void __fastcall sub_752590(int a1, int a2, int a3)
{
  _DWORD *v5; // esi

  v5 = __2_YAPAXI_Z(0x20u); /*0x75259f*/
  DListNode::InitEmpty(v5); /*0x7525a6*/
  v5[3] = a1; /*0x7525af*/
  v5[5] = a3; /*0x7525b2*/
  v5[6] = a2; /*0x7525b5*/
  v5[7] = dword_B1D4C0 % 100; /*0x7525c5*/
  ++dword_B1D4C0; /*0x7525d2*/
  *(_DWORD *)(a1 + 80) = 1; /*0x7525d8*/
  if ( a2 == 3 ) /*0x7525df*/
  {
    InsertAfterDListNode((int)&stru_B1D3C8, v5); /*0x7525e8*/
  }
  else if ( a2 == 1 ) /*0x7525f7*/
  {
    InsertAfterDListNode(12 * a3 + 11654224, v5); /*0x752605*/
  }
  else if ( a3 == 3 ) /*0x752614*/
  {
    InsertAfterDListNode((int)&stru_B1D3F0, v5); /*0x75261d*/
  }
  else if ( (int *)dword_B1D3CC == &stru_B1D3C8 /*0x75264d*/
         && (int *)dword_B1D3F4 == &stru_B1D3F0
         && (!dword_B1D4B8 || *((_DWORD *)dword_B1D4B8 + 5) < a3) )
  {
    dword_B1D4B8 = v5; /*0x75264f*/
  }
  else
  {
    *(_DWORD *)(a1 + 80) = 2; /*0x75265d*/
    __3_YAXPAX_Z(v5); /*0x752664*/
  }
}



// ==== 0x00752680  AudioQueue::FindByData  this=AudioQueue  sig=csp ====
int *__thiscall AudioQueue::FindByData(AudioQueue *this)
{
  int *result; // eax
  AudioQueue *v3; // esi

  result = (int *)AudioQueue::GetNext((AudioQueue *)&stru_B1D3F0); /*0x752689*/
  if ( result ) /*0x752690*/
  {
    while ( (AudioQueue *)result[3] != this ) /*0x752695*/
    {
      result = (int *)AudioQueue::GetNextAlt((AudioQueue *)result); /*0x752699*/
      if ( !result ) /*0x7526a0*/
        goto LABEL_4; /*0x7526a0*/
    }
  }
  else
  {
LABEL_4:
    result = (int *)dword_B1D4B8; /*0x7526a2*/
    if ( !dword_B1D4B8 || *((AudioQueue **)dword_B1D4B8 + 3) != this ) /*0x7526ae*/
    {
      v3 = &stru_B1D474; /*0x7526b0*/
      while ( 1 ) /*0x7526b7*/
      {
        result = (int *)AudioQueue::GetNext(v3); /*0x7526b7*/
        if ( result ) /*0x7526be*/
          break; /*0x7526be*/
LABEL_10:
        v3 = (AudioQueue *)((char *)v3 - 12); /*0x7526d0*/
        if ( (int)v3 < (int)&stru_B1D450 ) /*0x7526d9*/
        {
          result = (int *)AudioQueue::GetNext((AudioQueue *)&stru_B1D3C8); /*0x7526e0*/
          if ( !result ) /*0x7526e7*/
            return 0; /*0x7526f9*/
          while ( (AudioQueue *)result[3] != this ) /*0x7526ec*/
          {
            result = (int *)AudioQueue::GetNextAlt((AudioQueue *)result); /*0x7526f0*/
            if ( !result ) /*0x7526f7*/
              return 0; /*0x7526f7*/
          }
          return result; /*0x7526ec*/
        }
      }
      while ( (AudioQueue *)result[3] != this ) /*0x7526c3*/
      {
        result = (int *)AudioQueue::GetNextAlt((AudioQueue *)result); /*0x7526c7*/
        if ( !result ) /*0x7526ce*/
          goto LABEL_10; /*0x7526ce*/
      }
    }
  }
  return result; /*0x7526fb*/
}



// ==== 0x00752700  VoxClass::FindAndPlay  this=VoxClass  sig=csp ====
int __thiscall VoxClass::FindAndPlay(VoxClass *this, int a2)
{
  int v2; // edx
  int v4; // ebx
  int v5; // esi
  int result; // eax

  v4 = v2; /*0x752704*/
  if ( this ) /*0x752708*/
  {
    v5 = 0; /*0x752710*/
    if ( g_InfantrySelectState <= 0 ) /*0x752714*/
    {
      return UpdateThemeManager(-1, v4, a2); /*0x752736*/
    }
    else
    {
      while ( _strcmpi((char *)this, *((char **)g_InfantryRenderPool + v5)) ) /*0x75272a*/
      {
        if ( ++v5 >= g_InfantrySelectState ) /*0x752734*/
          return UpdateThemeManager(-1, v4, a2); /*0x752734*/
      }
      return UpdateThemeManager(v5, v4, a2); /*0x752754*/
    }
  }
  return result; /*0x752746*/
}



// ==== 0x00752760  UpdateThemes  this=-  sig=ida-proto ====
void ThemeClass_Update()
{
  unsigned __int64 v0; // rdi
  unsigned __int64 v1; // rax
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  char *v5; // edi
  int v6; // eax
  int v7; // ebp
  const char *v8; // edi
  _BYTE v9[16]; // [esp+0h] [ebp-118h] BYREF
  int v10; // [esp+10h] [ebp-108h]
  int v11; // [esp+14h] [ebp-104h]
  char v12[5]; // [esp+18h] [ebp-100h] BYREF

  if ( byte_A8ED64 ) /*0x752773*/
    return; /*0x752773*/
  if ( !Audio::IsSoundEnabled() ) /*0x752779*/
    return; /*0x752779*/
  if ( !g_InfantryDrawState ) /*0x75278e*/
    return; /*0x75278e*/
  if ( Audio::IsSoundPlaying() ) /*0x752794*/
    return; /*0x752794*/
  v0 = qword_B1D4D0 + ThemeClass::GetValue(g_InfantryDrawState); /*0x7527b4*/
  LODWORD(v1) = Audio::Callback(); /*0x7527be*/
  if ( v1 <= v0 || dword_B1D428 ) /*0x7527dc*/
    return; /*0x7527dc*/
  if ( dword_B1D4C4 ) /*0x7527e9*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7527eb*/
    dword_B1D4C4 = 0; /*0x7527f2*/
  }
  v11 = 0; /*0x7527fd*/
  v10 = 0; /*0x752801*/
  v2 = AudioQueue::GetNext(&stru_B1D3C8); /*0x752805*/
  v3 = (_DWORD *)v2; /*0x75280a*/
  if ( v2 ) /*0x75280e*/
  {
    LinkedList::Init(v2); /*0x752812*/
    if ( !dword_B1D4B8 ) /*0x75281e*/
      goto LABEL_22; /*0x75281e*/
    goto LABEL_11; /*0x75281e*/
  }
  v4 = AudioQueue::GetNext(&stru_B1D3F0); /*0x75283a*/
  v3 = (_DWORD *)v4; /*0x75283f*/
  if ( !v4 ) /*0x752843*/
  {
    v3 = dword_B1D4B8; /*0x752866*/
    if ( dword_B1D4B8 ) /*0x75286e*/
    {
      dword_B1D4B8 = 0; /*0x752870*/
    }
    else
    {
      v5 = (char *)&stru_B1D474; /*0x752878*/
      while ( 1 ) /*0x75287f*/
      {
        v6 = AudioQueue::GetNext(v5); /*0x75287f*/
        v3 = (_DWORD *)v6; /*0x752884*/
        if ( v6 ) /*0x752888*/
          break; /*0x752888*/
        v5 -= 12; /*0x75288a*/
        if ( (int)v5 < (int)stru_B1D450 ) /*0x752893*/
          return; /*0x752893*/
      }
      LinkedList::Init(v6); /*0x7528a2*/
    }
    goto LABEL_22; /*0x752876*/
  }
  LinkedList::Init(v4); /*0x752847*/
  if ( dword_B1D4B8 ) /*0x752853*/
  {
LABEL_11:
    __3_YAXPAX_Z(dword_B1D4B8); /*0x752824*/
    dword_B1D4B8 = 0; /*0x75282d*/
  }
LABEL_22:
  if ( v3 ) /*0x7528a9*/
  {
    v7 = v3[3]; /*0x7528af*/
    if ( v9 != (_BYTE *)-20 ) /*0x7528b8*/
      v11 = v3[6]; /*0x7528bd*/
    if ( v9 != (_BYTE *)-16 ) /*0x7528c7*/
      v10 = v3[5]; /*0x7528cc*/
    __3_YAXPAX_Z(v3); /*0x7528d1*/
    if ( v7 ) /*0x7528db*/
    {
      *(_DWORD *)(v7 + 80) = 2; /*0x7528e1*/
      if ( dword_B1D4C8 ) /*0x7528ef*/
      {
        v8 = (const char *)(v7 + 53); /*0x7528f9*/
        if ( dword_B1D4C8 != 1 ) /*0x7528fc*/
          v8 = (const char *)(v7 + 44); /*0x7528fe*/
      }
      else
      {
        v8 = (const char *)(v7 + 62); /*0x7528f1*/
      }
      strcpy(v12, v8); /*0x75291d*/
      strcat(v12, g_Str_File__WAV); /*0x752949*/
      if ( ThreadAudioMixerMain(g_InfantryDrawState, 1) ) /*0x75295c*/
      {
        qword_B1D4D0 = 500; /*0x75296d*/
        dword_B1D4C4 = v7; /*0x75297d*/
        dword_B1D3B8 = v11; /*0x752983*/
        dword_B1D3E0 = v10; /*0x752988*/
        *(_DWORD *)(v7 + 80) = 0; /*0x75298e*/
      }
    }
  }
}



// ==== 0x007529A0  StopThemeClass  this=-  sig=ida-proto ====
void __fastcall ThemeClass_Stop(char a1)
{
  if ( dword_B1D4C4 ) /*0x7529aa*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7529ac*/
    dword_B1D4C4 = 0; /*0x7529b3*/
  }
  if ( g_InfantryDrawState ) /*0x7529c5*/
    Audio::Release(g_InfantryDrawState); /*0x7529c7*/
  if ( a1 ) /*0x7529cf*/
    ThemeClass::ClearQueues(); /*0x7529d1*/
}



// ==== 0x007529E0  Audio::IsPlaying  this=Audio  sig=csp ====
int Audio_IsPlaying()
{
  char *v0; // eax

  UpdateThemes(); /*0x7529e0*/
  if ( !g_InfantryDrawState ) /*0x7529ed*/
    return 0; /*0x752a2d*/
  if ( !Audio::IsSoundPlaying(g_InfantryDrawState) /*0x752a17*/
    && (_UNKNOWN *)dword_B1D3CC == &stru_B1D3C8
    && (_UNKNOWN *)dword_B1D3F4 == &stru_B1D3F0
    && !dword_B1D4B8 )
  {
    v0 = stru_B1D450; /*0x752a19*/
    while ( *((char **)v0 + 1) == v0 ) /*0x752a21*/
    {
      v0 += 12; /*0x752a23*/
      if ( (int)v0 >= (int)&unk_B1D480 ) /*0x752a2b*/
        return 0; /*0x752a2b*/
    }
  }
  return 1; /*0x752a2f*/
}



// ==== 0x00752A40  ClearThemeQueuePlaylist  this=-  sig=ida-proto ====
void __fastcall ThemeQueue_ClearPlaylist(int a1)
{
  int i; // esi

  if ( a1 >= 0 && a1 < g_InfantrySelectState ) /*0x752a4e*/
  {
    for ( i = AudioQueue::FindByData(*((_DWORD *)g_InfantryRenderPool + a1)); /*0x752a61*/
          i;
          i = AudioQueue::FindByData(*((_DWORD *)g_InfantryRenderPool + a1)) )
    {
      if ( *(_DWORD *)(i + 4) != i ) /*0x752a66*/
        LinkedList::Init((_DWORD **)i); /*0x752a6a*/
      if ( (void *)i == dword_B1D4B8 ) /*0x752a75*/
        dword_B1D4B8 = 0; /*0x752a77*/
      *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x752a85*/
      __3_YAXPAX_Z((void *)i); /*0x752a8c*/
    }
  }
}



// ==== 0x00752AB0  ThemeClass::GetField  this=AnimClass  sig=ida-proto ====
void __fastcall ThemeClass::GetField(int a1)
{
  dword_846614 = a1; /*0x752ab6*/
  if ( a1 >= 255 ) /*0x752abc*/
    dword_846614 = 255; /*0x752abe*/
}



// ==== 0x00752AD0  Audio_Init_752AD0  this=-  sig=ida-proto ====
int sub_752AD0()
{
  int result; // eax
  void *Enabled; // eax

  result = (int)dword_B1D4D8; /*0x752ad0*/
  if ( dword_B1D4D8 /*0x752af2*/
    || (Enabled = Audio::GetEnabled(),
        result = (int)AudioStream::Constructor(Enabled, 0xBB8u),
        (dword_B1D4D8 = (void *)result) != 0) )
  {
    SetAudioFileName(result, aTauntStream); /*0x752afc*/
    AudioQueue::IsEmpty((int)g_InfantryDrawState, g_MixerChannel_Voice); /*0x752b0d*/
    AudioQueue::IsNotEmpty((int)g_InfantryDrawState, g_MixerChannel_Ambient); /*0x752b1e*/
    unk_B1D480 = 0; /*0x752b23*/
    return 1; /*0x752b2d*/
  }
  return result; /*0x752af4*/
}



// ==== 0x00752B40  Audio_Cleanup_752B40  this=-  sig=ida-proto ====
void sub_752B40()
{
  if ( dword_B1D4D8 ) /*0x752b48*/
  {
    Audio::Release(dword_B1D4D8); /*0x752b4a*/
    AudioSample::Destructor(dword_B1D4D8); /*0x752b55*/
    dword_B1D4D8 = 0; /*0x752b5a*/
  }
}



// ==== 0x00752B70  PlayTauntClass  this=-  sig=ida-proto ====
int __fastcall TauntClass_Play(int a1)
{
  char v1; // al
  int result; // eax
  const char *v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]
  char Buffer[20]; // [esp+0h] [ebp-14h] BYREF

  if ( !dword_B1D4D8 ) /*0x752b7a*/
    return 0; /*0x752b7a*/
  if ( unk_B1D480 ) /*0x752b87*/
    return 0; /*0x752b87*/
  v1 = a1 & 0xF; /*0x752b8f*/
  if ( (a1 & 0xF) == 0 || (a1 & 0xFu) > 8 ) /*0x752b9b*/
    return 0; /*0x752c63*/
  switch ( (a1 >> 4) & 0xF ) /*0x752bb0*/
  {
    case 0: /*0x752bb0*/
      v4 = v1; /*0x752bba*/
      v3 = aTauntsTauam02i; /*0x752bbb*/
      goto LABEL_16; /*0x752bc0*/
    case 1: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauko%02i.wav", v1); /*0x752bd0*/
      goto LABEL_17; /*0x752bd0*/
    case 2: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taufr%02i.wav", v1); /*0x752be0*/
      goto LABEL_17; /*0x752be0*/
    case 3: /*0x752bb0*/
      v4 = v1; /*0x752be5*/
      v3 = aTauntsTauge02i; /*0x752be6*/
      goto LABEL_16; /*0x752beb*/
    case 4: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taubr%02i.wav", v1); /*0x752bfb*/
      goto LABEL_17; /*0x752bfb*/
    case 5: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauli%02i.wav", v1); /*0x752c0b*/
      goto LABEL_17; /*0x752c0b*/
    case 6: /*0x752bb0*/
      v4 = v1; /*0x752c10*/
      v3 = aTauntsTauir02i; /*0x752c11*/
      goto LABEL_16; /*0x752c16*/
    case 7: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taucu%02i.wav", v1); /*0x752c26*/
      goto LABEL_17; /*0x752c26*/
    case 8: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauru%02i.wav", v1); /*0x752c36*/
      goto LABEL_17; /*0x752c36*/
    case 9: /*0x752bb0*/
      v4 = v1; /*0x752c3b*/
      v3 = aTauntsTauyu02i; /*0x752c3c*/
LABEL_16:
      sprintf(Buffer, v3, v4); /*0x752c41*/
LABEL_17:
      result = ThreadAudioMixerMain(dword_B1D4D8, Buffer, 0); /*0x752c4b*/
      break; /*0x752c62*/
    default:
      return 0;
  }
  return result; /*0x752c5f*/
}



// ==== 0x00752CA0  ??__F?m_badAllocExceptionPtr___ExceptionPtr__0V?$shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ  this=-  sig=ida-proto ====
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ()
{
  if ( dword_B1D4D8 ) /*0x752ca8*/
    Audio::Release(dword_B1D4D8); /*0x752caa*/
}



// ==== 0x00752CB0  ObjectClass::method_752CB0  this=ObjectClass  sig=csp ====
int __thiscall sub_752CB0(ObjectClass *this, const char *a2)
{
  int v3; // eax

  this->owningHouseIndex = 1065353216; /*0x752cbe*/
  strcpy((char *)this, a2); /*0x752cd4*/
  LOBYTE(this->fallRate) = 0; /*0x752cdf*/
  BYTE1(this->attachedTag) = 0; /*0x752ce2*/
  BYTE2(this->ambientSoundController[0]) = 0; /*0x752ce5*/
  this->ambientSoundController[3] = 1; /*0x752ce8*/
  this->ambientSoundController[4] = 0; /*0x752cef*/
  this->customSound_controller[0] = 2; /*0x752cf2*/
  if ( g_InfantrySelectState < dword_B1D4A8 /*0x752d2e*/
    || (byte_B1D4AD || !dword_B1D4A8)
    && dword_B1D4B4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B1D4A0 + 8))(
         &dword_B1D4A0,
         dword_B1D4A8 + dword_B1D4B4,
         0) )
  {
    v3 = g_InfantrySelectState++; /*0x752d3b*/
    *((_DWORD *)g_InfantryRenderPool + v3) = this; /*0x752d4a*/
  }
  return (int)this; /*0x752d4d*/
}



// ==== 0x00752DB0  AudioEvent::LoadFromINI  this=AudioEvent  sig=csp ====
char __thiscall AudioEvent::LoadFromINI(void *this, unsigned __int8 ***a2)
{
  double v5; // [esp+0h] [ebp-20Ch]
  char Source[500]; // [esp+18h] [ebp-1F4h] BYREF

  _ESI = this; /*0x752dc0*/
  INIClass::ResetSection((INIClass *)a2); /*0x752dc4*/
  *((_DWORD *)_ESI + 10) = 1065353216; /*0x752dcc*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)_ESI) ) /*0x752dd3*/
    return 0; /*0x752fec*/
  __asm { fld dword ptr [esi+28h] } /*0x752de7*/
  __asm { fstp [esp+20Ch+var_20C]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)_ESI, g_INI_Key_Volume, v5); /*0x752df9*/
  __asm { fstp dword ptr [esi+28h] } /*0x752dfe*/
  *((float *)_ESI + 10) = _ET1; /*0x752dfe*/
  INIClass::GetString( /*0x752e18*/
    (INIClass *)a2,
    (unsigned __int8 *)_ESI,
    (unsigned __int8 *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    Source,
    500);
  if ( strlen(Source) ) /*0x752e21*/
  {
    if ( _strcmpi(Source, aQueue) ) /*0x752e37*/
    {
      if ( _strcmpi(Source, aStandard) ) /*0x752e56*/
      {
        if ( _strcmpi(Source, aInterrupt) ) /*0x752e71*/
        {
          if ( !_strcmpi(Source, aQueuedInterrup) ) /*0x752e90*/
            *((_DWORD *)_ESI + 19) = 3; /*0x752e9c*/
        }
        else
        {
          *((_DWORD *)_ESI + 19) = 2; /*0x752e7d*/
        }
      }
      else
      {
        *((_DWORD *)_ESI + 19) = 0; /*0x752e62*/
      }
    }
    else
    {
      *((_DWORD *)_ESI + 19) = 1; /*0x752e43*/
    }
  }
  INIClass::GetString( /*0x752eba*/
    (INIClass *)a2,
    (unsigned __int8 *)_ESI,
    (unsigned __int8 *)&g_INI_Key_TRUCKA.?[3],
    &g_INI_DefaultBuffer,
    Source,
    500);
  if ( strlen(Source) ) /*0x752ec3*/
  {
    if ( _strcmpi(Source, aLow) ) /*0x752eda*/
    {
      if ( _strcmpi(Source, g_INI_Key_NORMAL) ) /*0x752ef5*/
      {
        if ( _strcmpi(Source, aImportant) ) /*0x752f14*/
        {
          if ( !_strcmpi(Source, aCritical) ) /*0x752f33*/
            *((_DWORD *)_ESI + 18) = 3; /*0x752f3f*/
        }
        else
        {
          *((_DWORD *)_ESI + 18) = 2; /*0x752f20*/
        }
      }
      else
      {
        *((_DWORD *)_ESI + 18) = 1; /*0x752f01*/
      }
    }
    else
    {
      *((_DWORD *)_ESI + 18) = 0; /*0x752ee6*/
    }
  }
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)_ESI, aYuri, &g_INI_DefaultBuffer, Source, 500); /*0x752f5d*/
  strncpy((char *)_ESI + 44, Source, 9u); /*0x752f6d*/
  *((_BYTE *)_ESI + 52) = 0; /*0x752f79*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)_ESI, aRussian, &g_INI_DefaultBuffer, Source, 500); /*0x752f8f*/
  strncpy((char *)_ESI + 53, Source, 9u); /*0x752f9f*/
  *((_BYTE *)_ESI + 61) = 0; /*0x752fab*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)_ESI, aAllied, &g_INI_DefaultBuffer, Source, 500); /*0x752fc1*/
  strncpy((char *)_ESI + 62, Source, 9u); /*0x752fd1*/
  *((_BYTE *)_ESI + 70) = 0; /*0x752fd9*/
  return 1; /*0x752fde*/
}



// ==== 0x00753000  ObjectClass::InitFromINIEVA  this=ObjectClass  sig=csp ====
char __thiscall InitFromINIEVA(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int KeyCount; // eax
  int v3; // ebp
  int v4; // esi
  unsigned __int8 *StringByIndex; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  void *v9; // ecx
  int v11; // [esp+0h] [ebp-E4h] BYREF
  int i; // [esp+10h] [ebp-D4h]
  int v13; // [esp+14h] [ebp-D0h]
  int v14; // [esp+18h] [ebp-CCh]
  char Destination[200]; // [esp+1Ch] [ebp-C8h] BYREF

  v1 = this; /*0x75300a*/
  v13 = (int)this; /*0x753011*/
  LOBYTE(KeyCount) = INIClass::BinarySearchSection((int)this, g_INI_Key_DialogList) != 0; /*0x75301c*/
  if ( (_BYTE)KeyCount ) /*0x753023*/
  {
    KeyCount = INIClass::GetKeyCount((char *)v1, g_INI_Key_DialogList); /*0x753030*/
    v3 = KeyCount; /*0x753035*/
    v4 = 0; /*0x753037*/
    v14 = KeyCount; /*0x75303b*/
    for ( i = 0; v4 < v3; i = v4 ) /*0x753043*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex((char *)v1, g_INI_Key_DialogList, v4); /*0x753060*/
      KeyCount = INIClass::GetString( /*0x75306d*/
                   (INIClass *)v1,
                   g_INI_Key_DialogList,
                   StringByIndex,
                   &g_INI_DefaultBuffer,
                   Destination,
                   200);
      if ( KeyCount ) /*0x753074*/
      {
        if ( &v11 == (int *)-28 ) /*0x753080*/
          goto LABEL_10; /*0x753080*/
        v6 = 0; /*0x753087*/
        if ( g_InfantrySelectState <= 0 ) /*0x75308b*/
          goto LABEL_10; /*0x75308b*/
        while ( _strcmpi(Destination, *((char **)g_InfantryRenderPool + v6)) ) /*0x7530a6*/
        {
          if ( ++v6 >= g_InfantrySelectState ) /*0x7530b0*/
            goto LABEL_10; /*0x7530b0*/
        }
        if ( v6 == -1 ) /*0x7530b7*/
        {
LABEL_10:
          v7 = __2_YAPAXI_Z(0x54u); /*0x7530bd*/
          if ( v7 ) /*0x7530cb*/
          {
            *(_DWORD *)(v7 + 40) = 1065353216; /*0x7530da*/
            strcpy((char *)v7, Destination); /*0x7530f0*/
            *(_BYTE *)(v7 + 44) = 0; /*0x7530f9*/
            *(_BYTE *)(v7 + 53) = 0; /*0x7530fc*/
            *(_BYTE *)(v7 + 62) = 0; /*0x7530ff*/
            *(_DWORD *)(v7 + 72) = 1; /*0x753102*/
            *(_DWORD *)(v7 + 76) = 0; /*0x753109*/
            *(_DWORD *)(v7 + 80) = 2; /*0x75310c*/
            if ( g_InfantrySelectState < dword_B1D4A8 /*0x753146*/
              || (byte_B1D4AD || !dword_B1D4A8)
              && dword_B1D4B4 > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B1D4A0 + 8))(
                   &dword_B1D4A0,
                   dword_B1D4A8 + dword_B1D4B4,
                   0) )
            {
              v8 = g_InfantrySelectState++; /*0x753153*/
              *((_DWORD *)g_InfantryRenderPool + v8) = v7; /*0x753162*/
            }
            v1 = (ObjectClass *)v13; /*0x753165*/
            v9 = (void *)v7; /*0x753169*/
          }
          else
          {
            v9 = 0; /*0x75316d*/
          }
        }
        else
        {
          v9 = (void *)*((_DWORD *)g_InfantryRenderPool + v6); /*0x753177*/
        }
        LOBYTE(KeyCount) = AudioEvent::LoadFromINI(v9, (unsigned __int8 ***)v1); /*0x75317b*/
        v4 = i; /*0x753180*/
        v3 = v14; /*0x753184*/
      }
      ++v4; /*0x753188*/
    }
  }
  return KeyCount; /*0x753195*/
}



// ==== 0x007531A0  ObjectClass::LoadINIEVA  this=ObjectClass  sig=csp ====
int __thiscall LoadINIEVA(ObjectClass *this)
{
  int result; // eax
  void *v2; // esi
  int v3; // eax
  ObjectClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x7531a0*/
  if ( dword_B1D4C4 ) /*0x7531a8*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7531aa*/
    dword_B1D4C4 = 0; /*0x7531b1*/
  }
  if ( g_InfantryDrawState ) /*0x7531c3*/
    Audio::Release(g_InfantryDrawState); /*0x7531c5*/
  ThemeClass::ClearQueues(); /*0x7531ca*/
  for ( result = g_InfantrySelectState; g_InfantrySelectState > 0; result = g_InfantrySelectState ) /*0x7531d6*/
  {
    v2 = *(void **)g_InfantryRenderPool; /*0x7531de*/
    if ( *(_DWORD *)g_InfantryRenderPool ) /*0x7531de*/
    {
      v4 = *(ObjectClass **)g_InfantryRenderPool; /*0x7531f4*/
      v3 = (*(int (__thiscall **)(int *, ObjectClass **))(dword_B1D4A0 + 16))(&dword_B1D4A0, &v4); /*0x7531f8*/
      if ( v3 != -1 && v3 < g_InfantrySelectState && v3 < --g_InfantrySelectState ) /*0x753213*/
      {
        do /*0x75322b*/
        {
          ++v3; /*0x75321b*/
          *((_DWORD *)g_InfantryRenderPool + v3 - 1) = *((_DWORD *)g_InfantryRenderPool + v3); /*0x75321f*/
        }
        while ( v3 < g_InfantrySelectState ); /*0x75322b*/
      }
      __3_YAXPAX_Z(v2); /*0x75322e*/
    }
  }
  return result; /*0x753241*/
}



// ==== 0x00753250  VocClass::FindByName  this=VocClass  sig=csp ====
int __thiscall VocClass::FindByName(VocClass *this)
{
  int v3; // esi

  if ( !this ) /*0x753255*/
    return -1; /*0x753257*/
  v3 = 0; /*0x753262*/
  if ( g_InfantrySelectState <= 0 ) /*0x753266*/
    return -1; /*0x753288*/
  while ( _strcmpi((char *)this, *((char **)g_InfantryRenderPool + v3)) ) /*0x75327c*/
  {
    if ( ++v3 >= g_InfantrySelectState ) /*0x753286*/
      return -1; /*0x753286*/
  }
  return v3; /*0x75325a*/
}



// ==== 0x007532A0  globalHelper_0532A0  this=RandomStruct  sig=csp ====
bool __fastcall sub_7532A0(std::codecvt_base *a1)
{
  if ( (int)a1 < 0 || (int)a1 >= g_InfantrySelectState ) /*0x7532aa*/
    return _do_always_noconv_codecvt_base_std__MBE_NXZ_21(a1); /*0x7532a2*/
  else
    return *(_DWORD *)(*((_DWORD *)g_InfantryRenderPool + (_DWORD)a1) + 80) == 2; /*0x7532ba*/
}



// ==== 0x007532BE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_21  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_21(std::codecvt_base *this)
{
  return 1; /*0x7532c0*/
}



// ==== 0x007533A0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_22  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_22(std::codecvt_base *this)
{
  return 1; /*0x7533a2*/
}



// ==== 0x007533B0  SaveGame::WriteMagicHeader  this=SaveGame  sig=csp ====
int __thiscall SaveGame::WriteMagicHeader(SaveGame *this)
{
  int v2; // eax
  int result; // eax
  int v4; // edx
  int v5; // [esp+10h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this->__pad_0; /*0x7533ba*/
  v5 = 1450145875; /*0x7533c0*/
  result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v2 + 16))(this, &v5, 4, 0); /*0x7533c8*/
  if ( result >= 0 ) /*0x7533cd*/
  {
    v4 = *(_DWORD *)this->__pad_0; /*0x7533cf*/
    v5 = 1450145861; /*0x7533db*/
    return (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v4 + 16))(this, &v5, 4, 0); /*0x7533e3*/
  }
  return result; /*0x7533e6*/
}



// ==== 0x007533F0  LoadGame::LoadMagicAndAudio  this=LoadGame  sig=csp ====
int __thiscall LoadGame::LoadMagicAndAudio(LoadGame *this)
{
  int result; // eax
  int v3; // [esp+30h] [ebp-10h] BYREF
  _DWORD v4[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( dword_B1D4C4 ) /*0x7533fd*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7533ff*/
    dword_B1D4C4 = 0; /*0x753406*/
  }
  if ( g_InfantryDrawState ) /*0x753418*/
    Audio::Release(g_InfantryDrawState); /*0x75341a*/
  ThemeClass::ClearQueues(); /*0x75341f*/
  result = (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v3, 4, 0); /*0x753430*/
  if ( result >= 0 && v3 == 1450145875 ) /*0x753443*/
  {
    result = (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v3, 4, 0); /*0x753455*/
    if ( result >= 0 ) /*0x75345a*/
    {
      while ( v3 != 1450145861 ) /*0x753466*/
      {
        if ( v3 != 1450145865 ) /*0x75346e*/
          return -2147467259; /*0x7534cb*/
        result = (*(int (__stdcall **)(LoadGame *, _DWORD *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x75347c*/
                   this,
                   v4,
                   12,
                   0);
        if ( result >= 0 ) /*0x753481*/
        {
          if ( g_InfantryDrawState && v4[0] >= 0 && v4[0] < g_InfantrySelectState ) /*0x75349a*/
            Audio_Load(*((_DWORD *)g_InfantryRenderPool + v4[0]), v4[1], v4[2]); /*0x7534ae*/
          result = (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x7534bf*/
                     this,
                     &v3,
                     4,
                     0);
          if ( result >= 0 ) /*0x7534c4*/
            continue; /*0x7534c4*/
        }
        return result; /*0x7534c4*/
      }
    }
  }
  return result; /*0x7534c6*/
}



// ==== 0x007534E0  VoxClass::SetEVAIndex  this=VoxClass  sig=csp ====
int __thiscall VoxClass::SetEVAIndex(VoxClass *this)
{
  int result; // eax

  if ( this == (VoxClass *)-1 ) /*0x7534e3*/
  {
    dword_B1D4C8 = 0; /*0x7534e7*/
    return 0; /*0x7534e5*/
  }
  else
  {
    dword_B1D4C8 = (int)this; /*0x7534ed*/
  }
  return result; /*0x7534ec*/
}



// ==== 0x00753510  ??__F?m_badAllocExceptionPtr___ExceptionPtr__0V?$shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1  this=-  sig=ida-proto ====
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1()
{
  if ( dword_B1D4D8 ) /*0x753518*/
    AudioMixer::ProcessAudioFrame((int)dword_B1D4D8); /*0x75351a*/
}



// ==== 0x00753570  Map_Process_753570  this=-  sig=ida-proto ====
int sub_753570()
{
  return ++dword_B1D3D8; /*0x75357b*/
}



// ==== 0x00753580  ChronoScreenEffect::DecrementCounter  this=ChronoScreenEffect  sig=ida-proto ====
int ChronoScreenEffect::DecrementCounter()
{
  int result; // eax

  result = dword_B1D3D8; /*0x753580*/
  if ( dword_B1D3D8 ) /*0x753587*/
  {
    result = --dword_B1D3D8; /*0x75358e*/
    if ( dword_B1D3D8 < 0 ) /*0x753594*/
      dword_B1D3D8 = 0; /*0x753596*/
  }
  return result; /*0x7535a0*/
}



// ==== 0x007535B0  AudioFrame::CounterInc  this=AudioFrame  sig=ida-proto ====
int AudioFrame_CounterInc()
{
  if ( g_InfantryDrawState ) /*0x7535b8*/
    AudioFrame::ProcessAudioFrame(); /*0x7535ba*/
  return ++dword_B1D428; /*0x7535ca*/
}



// ==== 0x007535D0  WTFMode_Cleanup  this=-  sig=ida-proto ====
int sub_7535D0()
{
  int result; // eax

  if ( dword_B1D4C4 ) /*0x7535d7*/
  {
    *(_DWORD *)(dword_B1D4C4 + 80) = 2; /*0x7535d9*/
    dword_B1D4C4 = 0; /*0x7535e0*/
  }
  if ( g_InfantryDrawState ) /*0x7535f2*/
    Audio::Release(g_InfantryDrawState); /*0x7535f4*/
  result = ThemeClass::ClearQueues(); /*0x7535f9*/
  dword_B1D428 = 0; /*0x7535fe*/
  dword_B1D3D8 = 0; /*0x753608*/
  return result; /*0x753612*/
}



// ==== 0x00753620  AudioMixer::Pump  this=AudioMixer  sig=ida-proto ====
int AudioMixer_Pump()
{
  int result; // eax

  if ( g_InfantryDrawState ) /*0x753628*/
    AudioMixer::ProcessAudioFrame(); /*0x75362a*/
  result = dword_B1D428; /*0x75362f*/
  if ( dword_B1D428 ) /*0x753636*/
  {
    result = --dword_B1D428; /*0x75363d*/
    if ( dword_B1D428 < 0 ) /*0x753643*/
      dword_B1D428 = 0; /*0x753645*/
  }
  return result; /*0x75364f*/
}



// ==== 0x00753650  _DynamicVectorClass_PAVVoxClass::getItem  this=DynamicVector  sig=csp ====
void __thiscall VoxClass_Vector::getItem(_DynamicVectorClass_PAVVoxClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x753656*/
  this->m_10 = 0; /*0x753659*/
  if ( v2 && BYTE1(this->m_C) ) /*0x753660*/
  {
    __3_YAXPAX_Z(v2); /*0x753666*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75366e*/
  }
  BYTE1(this->m_C) = 0; /*0x753671*/
  this->m_8 = 0; /*0x753674*/
}



// ==== 0x00753680  _DynamicVectorClass_PAVVoxClass::getItemAt  this=DynamicVector  sig=csp ====
unsigned int __thiscall VoxClass_Vector::getItemAt(_DynamicVectorClass_PAVVoxClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x753680*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x753695*/
  else
    return 0; /*0x753687*/
}



// ==== 0x007536A0  _VectorClass_PAVVoxClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VoxClass::Get(_VectorClass_PAVVoxClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7536aa*/
}



// ==== 0x007536B0  _VectorClass_PAVVoxClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VoxClass::Add(_VectorClass_PAVVoxClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7536b2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7536bd*/
  {
    v3 = 0; /*0x7536bf*/
    if ( m_8 <= 0 ) /*0x7536c3*/
      return 1; /*0x7536e3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7536c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7536cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7536d4*/
    {
      ++v3; /*0x7536d6*/
      ++v4; /*0x7536d7*/
      if ( v3 >= m_8 ) /*0x7536dc*/
        return 1; /*0x7536dc*/
    }
  }
  return 0; /*0x7536de*/
}



// ==== 0x007536F0  _VectorClass_PAVVoxClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VoxClass::Release(_VectorClass_PAVVoxClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7536fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x753706*/
    if ( a3 ) /*0x75370c*/
      v4 = a3; /*0x753722*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75371e*/
    LOBYTE(this->m_C) = 1; /*0x753726*/
    if ( v4 ) /*0x75372a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x753735*/
      {
        m_8 = this->m_8; /*0x75373c*/
        if ( a2 < m_8 ) /*0x753741*/
          m_8 = a2; /*0x753743*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x753749*/
          ++i; /*0x75374e*/
        if ( BYTE1(this->m_C) ) /*0x75375b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x753766*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x75376e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x753777*/
      this->m_8 = a2; /*0x75377f*/
      BYTE1(this->m_C) = a3 == 0; /*0x753782*/
      return 1; /*0x753788*/
    }
    else
    {
      return 0; /*0x75372f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVVoxClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x753792*/
    return 1; /*0x753798*/
  }
}



// ==== 0x007537A0  _VectorClass_PAVVoxClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_VoxClass::Remove(_VectorClass_PAVVoxClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x7537ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7537b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7537bb*/
  }
  BYTE1(this->m_C) = 0; /*0x7537be*/
  this->m_8 = 0; /*0x7537c1*/
}



// ==== 0x007537D0  _VectorClass_PAVVoxClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VoxClass::GetSize(_VectorClass_PAVVoxClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7537d0*/
    return 0; /*0x7537d8*/
  m_8 = this->m_8; /*0x7537de*/
  result = 0; /*0x7537e1*/
  if ( m_8 <= 0 ) /*0x7537e5*/
    return -1; /*0x7537fc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7537eb*/
  {
    if ( ++result >= m_8 ) /*0x7537fa*/
      return -1; /*0x7537fa*/
  }
  return result; /*0x7537da*/
}



// ==== 0x00753810  _VectorClass_PAVVoxClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VoxClass::GetCapacity(_VectorClass_PAVVoxClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x753810*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x753825*/
  else
    return 0; /*0x753817*/
}



// ==== 0x00753830  _DynamicVectorClass_PAVVoxClass::removeItem  this=DynamicVector  sig=csp ====
char __thiscall VoxClass_Vector::removeItem(_DynamicVectorClass_PAVVoxClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x75383c*/
  {
    LOBYTE(this->m_C) = 0; /*0x753842*/
    if ( a3 ) /*0x753848*/
      v4 = a3; /*0x75385e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75385a*/
    LOBYTE(this->m_C) = 1; /*0x753862*/
    if ( !v4 ) /*0x753866*/
      return 0; /*0x7538da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x753868*/
    {
      m_8 = this->m_8; /*0x75386f*/
      if ( a2 < m_8 ) /*0x753874*/
        m_8 = a2; /*0x753876*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x75387c*/
        ++i; /*0x753881*/
      if ( BYTE1(this->m_C) ) /*0x75388e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x753899*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7538a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7538aa*/
    this->m_8 = a2; /*0x7538b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x7538b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVVoxClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7538be*/
  }
  v7 = this->m_8; /*0x7538c1*/
  if ( v7 < this->m_10 ) /*0x7538c9*/
    this->m_10 = v7; /*0x7538cb*/
  return 1; /*0x7538ce*/
}



// ==== 0x007538E0  _DynamicVectorClass_PAVVoxClass::getItemWithIndex  this=DynamicVector  sig=csp ====
int __thiscall VoxClass_Vector::getItemWithIndex(_DynamicVectorClass_PAVVoxClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7538e0*/
  result = 0; /*0x7538e3*/
  if ( m_10 <= 0 ) /*0x7538e8*/
    return -1; /*0x7538ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7538ee*/
  {
    if ( ++result >= m_10 ) /*0x7538fd*/
      return -1; /*0x7538fd*/
  }
  return result; /*0x753902*/
}



// ==== 0x00753910  _VectorClass_PAVVoxClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_VoxClass::QueryInterface(_VectorClass_PAVVoxClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x753913*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxClass *>::`vftable'; /*0x753916*/
  if ( v3 && BYTE1(this->m_C) ) /*0x753920*/
  {
    __3_YAXPAX_Z(v3); /*0x753928*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x753930*/
  }
  BYTE1(this->m_C) = 0; /*0x75393b*/
  this->m_8 = 0; /*0x753941*/
  if ( (a2 & 1) != 0 ) /*0x753948*/
    __3_YAXPAX_Z(this); /*0x75394b*/
  return this->__pad_0; /*0x753955*/
}



// ==== 0x00753960  _DynamicVectorClass_PAVVoxClass::findItem  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VoxClass_Vector::findItem(_DynamicVectorClass_PAVVoxClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x753963*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxClass *>::`vftable'; /*0x753966*/
  if ( v3 && BYTE1(this->m_C) ) /*0x753970*/
  {
    __3_YAXPAX_Z(v3); /*0x753978*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x753980*/
  }
  BYTE1(this->m_C) = 0; /*0x75398b*/
  this->m_8 = 0; /*0x753991*/
  if ( (a2 & 1) != 0 ) /*0x753998*/
    __3_YAXPAX_Z(this); /*0x75399b*/
  return this->__pad_0; /*0x7539a5*/
}



// ==== 0x007539B0  sub_7539B0  this=-  sig=ida-proto ====
int sub_7539B0()
{
  dword_B2D810 = 0; /*0x7539b2*/
  dword_B2D814 = 0; /*0x7539b7*/
  dword_B2D818 = 0; /*0x7539bc*/
  dword_B2D81C = 0; /*0x7539c1*/
  return 0; /*0x7539c6*/
}



// ==== 0x007539D0  sub_7539D0  this=-  sig=ida-proto ====
int sub_7539D0()
{
  dword_B2D92C = 256; /*0x7539e4*/
  dword_B2D930 = 256; /*0x7539e9*/
  dword_B2D934 = 0; /*0x7539ee*/
  dword_B2D928 = (int)&XSurface_Vtable; /*0x7539f8*/
  dword_B2D938 = 1; /*0x753a02*/
  Buffer::Init(stru_B2D93C, (int)g_VoxelRenderBuffer, 0x10000); /*0x753a0c*/
  dword_B2D928 = (int)&BSurface_Vtable; /*0x753a16*/
  return atexit(sub_753A30); /*0x753a26*/
}



// ==== 0x00753A30  sub_753A30  this=-  sig=ida-proto ====
void __cdecl sub_753A30()
{
  Vector::Clear((int)&stru_B2D93C); /*0x753a35*/
  dword_B2D928 = (int)&Surface_Vtable; /*0x753a3a*/
}



// ==== 0x00753A50  sub_753A50  this=-  sig=ida-proto ====
int sub_753A50()
{
  dword_B2D7F4 = 256; /*0x753a64*/
  dword_B2D7F8 = 256; /*0x753a69*/
  dword_B2D7FC = 0; /*0x753a6e*/
  dword_B2D7F0 = (int)&XSurface_Vtable; /*0x753a78*/
  dword_B2D800 = 1; /*0x753a82*/
  Buffer::Init(stru_B2D804, (int)byte_B1D5E0, 0x10000); /*0x753a8c*/
  dword_B2D7F0 = (int)&BSurface_Vtable; /*0x753a96*/
  return atexit(sub_753AB0); /*0x753aa6*/
}



// ==== 0x00753AB0  sub_753AB0  this=-  sig=ida-proto ====
void __cdecl sub_753AB0()
{
  Vector::Clear((int)&stru_B2D804); /*0x753ab5*/
  dword_B2D7F0 = (int)&Surface_Vtable; /*0x753aba*/
}



// ==== 0x00753AD0  ScreenEffect::Stub1  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub1()
{
  ; /*0x753ad0*/
}



// ==== 0x00753AE0  ScreenEffect::Stub2  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub2()
{
  ; /*0x753ae0*/
}



// ==== 0x00753AF0  sub_753AF0  this=-  sig=ida-proto ====
int sub_753AF0()
{
  dword_B2FB60 = 0; /*0x753af2*/
  dword_B2FB64 = 0; /*0x753af7*/
  dword_B2FB68 = 255; /*0x753b01*/
  dword_B2FB6C = 255; /*0x753b06*/
  return 255; /*0x753b0b*/
}



// ==== 0x00753B10  sub_753B10  this=-  sig=ida-proto ====
int sub_753B10()
{
  char *v0; // esi
  int v1; // edi
  int result; // eax

  v0 = (char *)&dword_B2D980; /*0x753b12*/
  v1 = 64; /*0x753b17*/
  do /*0x753b32*/
  {
    result = Array::ForEach((int)v0, 12, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x753b26*/
    v0 += 136; /*0x753b2b*/
    --v1; /*0x753b31*/
  }
  while ( v1 ); /*0x753b32*/
  return result; /*0x753b34*/
}



// ==== 0x00753B40  sub_753B40  this=-  sig=ida-proto ====
int sub_753B40()
{
  char *v0; // esi
  int v1; // edi
  int result; // eax

  v0 = (char *)&dword_B3FF84; /*0x753b42*/
  v1 = 64; /*0x753b47*/
  do /*0x753b5f*/
  {
    result = Array::ForEach((int)v0, 12, 4, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x753b56*/
    v0 += 72; /*0x753b5b*/
    --v1; /*0x753b5e*/
  }
  while ( v1 ); /*0x753b5f*/
  return result; /*0x753b61*/
}



// ==== 0x00753B70  VoxelPaletteClass::LoadFromFile  this=VoxelPaletteClass  sig=csp ====
int __thiscall VoxelPaletteClass::LoadFromFile(VoxelPaletteClass *this)
{
  int v2; // esi
  VoxelPalette v4; // [esp+4h] [ebp-20h] BYREF
  int v5; // [esp+Ch] [ebp-18h]
  int v6; // [esp+10h] [ebp-14h]

  VoxelPalette::Init(&v4, (int)&unk_B2FB78, (int)g_VoxelColorPalette); /*0x753b84*/
  v2 = VoxelPaletteClass::ConvertFromFile((VoxelPaletteClass *)&v4, (int)this); /*0x753b93*/
  dword_B2FB74 = *(_DWORD *)v4.__pad_0; /*0x753ba1*/
  dword_B4317C = v4.VoxelPalette_field_0x04; /*0x753baa*/
  dword_B2FB58 = v5; /*0x753bb4*/
  dword_B43178 = v6; /*0x753bba*/
  VoxelPalette::Reset(&v4); /*0x753bbf*/
  return v2; /*0x753bc6*/
}



// ==== 0x00753BF0  sub_753BF0  this=-  sig=csp ====
char *__userpurge sub_753BF0@<eax>(
        char a1@<dl>,
        char a2@<cl>,
        int a3@<ebx>,
        int a4@<ebp>,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _WORD *v8; // esi
  char *result; // eax
  int v10; // ebx
  int v11; // ebp

  v8 = &unk_B2D5EC; /*0x753bf6*/
  result = (char *)&unk_B2FB79; /*0x753bfd*/
  do /*0x753c4a*/
  {
    LOBYTE(a3) = (unsigned __int8)*(result - 1) >> a2; /*0x753c07*/
    result += 3; /*0x753c0b*/
    ++v8; /*0x753c0e*/
    LOWORD(a4) = (unsigned __int8)a3; /*0x753c11*/
    LOWORD(a3) = (unsigned __int8)((unsigned __int8)*(result - 2) >> a7); /*0x753c24*/
    v10 = a3 << a8; /*0x753c28*/
    v11 = v10 | (a4 << a1); /*0x753c2e*/
    LOWORD(v10) = (unsigned __int8)((unsigned __int8)*(result - 3) >> a5); /*0x753c39*/
    a3 = v10 << a6; /*0x753c3d*/
    a4 = a3 | v11; /*0x753c3f*/
    *(v8 - 1) = a4; /*0x753c46*/
  }
  while ( result < byte_B2FE79 ); /*0x753c4a*/
  return result; /*0x753c4c*/
}



// ==== 0x00753C60  sub_753C60  this=-  sig=ida-proto ====
char *sub_753C60()
{
  return g_VoxelRenderBuffer; /*0x753c65*/
}



// ==== 0x00753C70  Miles::DriverGet  this=Miles  sig=csp ====
int *Miles_DriverGet()
{
  return &dword_B2D928; /*0x753c75*/
}



// ==== 0x00753C80  globalHelper_053C80  this=-  sig=csp ====
char __fastcall globalHelper_053C80(VoxelSection *a1, int a2, int a3, float *a4, float *a5)
{
  float *v7; // eax
  int Info; // eax
  float *v10; // [esp+0h] [ebp-88h]
  float v11[3]; // [esp+10h] [ebp-78h] BYREF
  int v12[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v13[12]; // [esp+28h] [ebp-60h] BYREF
  float v14[12]; // [esp+58h] [ebp-30h] BYREF

  qmemcpy(v13, InvertMatrix3x3Signs(v14, a4), sizeof(v13)); /*0x753cad*/
  v7 = (float *)Matrix3x3::TransformPoint(v12, a5, v10); /*0x753cb9*/
  v11[0] = *v7; /*0x753cc0*/
  v11[1] = v7[1]; /*0x753cc7*/
  v11[2] = v7[2]; /*0x753cd9*/
  Info = VoxelSection::GetInfo(a1, a2, a3); /*0x753cdd*/
  return GlobalHelper_053C80_Helper(v11, *(unsigned __int8 *)(Info + 163)); /*0x753cf3*/
}



// ==== 0x00753D00  Audio_Render  this=-  sig=csp ====
char __fastcall Audio_Render(VoxelSection *a1, int a2, int a3, float *a4, float *a5, float *a6, float a7)
{
  float *v9; // eax
  float *v10; // eax
  int Info; // eax
  float *v13; // [esp+0h] [ebp-D0h]
  float *v14; // [esp+0h] [ebp-D0h]
  int v15[3]; // [esp+10h] [ebp-C0h] BYREF
  float v16[3]; // [esp+1Ch] [ebp-B4h] BYREF
  float v17[3]; // [esp+28h] [ebp-A8h] BYREF
  int v18[3]; // [esp+34h] [ebp-9Ch] BYREF
  float v19[12]; // [esp+40h] [ebp-90h] BYREF
  float v20[12]; // [esp+70h] [ebp-60h] BYREF
  float v21[12]; // [esp+A0h] [ebp-30h] BYREF

  qmemcpy(v20, InvertMatrix3x3Signs(v21, a4), sizeof(v20)); /*0x753d33*/
  qmemcpy(v19, InvertMatrix3x3Signs(v21, a5), sizeof(v19)); /*0x753d53*/
  v9 = (float *)Matrix3x3::TransformPoint(v15, a6, v13); /*0x753d5f*/
  v17[0] = *v9; /*0x753d66*/
  v17[1] = v9[1]; /*0x753d6d*/
  v17[2] = v9[2]; /*0x753d82*/
  v15[0] = 0; /*0x753d86*/
  v15[1] = 0; /*0x753d8e*/
  v15[2] = 1065353216; /*0x753d96*/
  v10 = (float *)Matrix3x3::TransformPoint(v18, (float *)v15, v14); /*0x753d9e*/
  v16[0] = *v10; /*0x753da5*/
  v16[1] = v10[1]; /*0x753dac*/
  v16[2] = v10[2]; /*0x753dbe*/
  Info = VoxelSection::GetInfo(a1, a2, a3); /*0x753dc2*/
  return VoxelAnim::ComputeTransform(v17, v16, a7, *(unsigned __int8 *)(Info + 163)); /*0x753de7*/
}



// ==== 0x00753E00  Viewport::Clear  this=Viewport  sig=csp ====
int Viewport::Clear(Viewport *this)
{
  int v1; // esi
  int v2; // edx
  char *v3; // esi
  int v4; // ebx
  char *v5; // edi
  unsigned int v6; // ebx
  char *v7; // esi
  int v8; // edx
  char *v9; // edi

  stru_B2D804.Buffer_field_1C = 0; /*0x753e10*/
  dword_B2FB70 = 0; /*0x753e16*/
  if ( dword_8467E0 ) /*0x753e1c*/
  {
    dword_8467E0 = 0; /*0x753e2a*/
    memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x753e30*/
    memset(byte_B1D5E0, 0, 0x10000u); /*0x753e3c*/
  }
  else
  {
    v1 = dword_B2FB60; /*0x753e43*/
    v2 = dword_B2FB64; /*0x753e49*/
    if ( dword_B2FB60 < 0 || dword_B2FB64 < 0 || dword_B2FB60 + dword_B2FB68 > 255 || dword_B2FB6C + dword_B2FB64 > 255 ) /*0x753e73*/
    {
      memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x753ec3*/
    }
    else if ( dword_B2FB64 <= dword_B2FB6C + dword_B2FB64 ) /*0x753e77*/
    {
      v3 = &g_VoxelRenderBuffer[256 * dword_B2FB64 + dword_B2FB60]; /*0x753e81*/
      v4 = dword_B2FB6C + 1; /*0x753e88*/
      do /*0x753eab*/
      {
        v5 = v3; /*0x753e8f*/
        v3 += 256; /*0x753e91*/
        memset(v5, 0, dword_B2FB68 + 1); /*0x753ea1*/
        --v4; /*0x753ea8*/
      }
      while ( v4 ); /*0x753eab*/
      v1 = dword_B2FB60; /*0x753ead*/
    }
    if ( dword_B43180 && v2 <= dword_B2FB6C + v2 ) /*0x753ed8*/
    {
      v6 = dword_B2FB68 + 1; /*0x753ee2*/
      v7 = &byte_B1D5E0[256 * v2 + v1]; /*0x753eeb*/
      v8 = dword_B2FB6C + 1; /*0x753ef2*/
      do /*0x753f0f*/
      {
        memset(v7, 0, 4 * (v6 >> 2)); /*0x753eff*/
        v9 = &v7[4 * (v6 >> 2)]; /*0x753eff*/
        v7 += 256; /*0x753f03*/
        --v8; /*0x753f0c*/
        memset(v9, 0, v6 & 3); /*0x753f0d*/
      }
      while ( v8 ); /*0x753f0f*/
    }
  }
  dword_B2D5E0 = 1176256512; /*0x753f35*/
  dword_B2D5E4 = 1176256512; /*0x753f3b*/
  dword_B2D5E8 = 1176256512; /*0x753f40*/
  stru_B2D93C.Buffer_field_0C = -971227136; /*0x753f6d*/
  stru_B2D93C.Buffer_field_10 = -971227136; /*0x753f73*/
  stru_B2D93C.Buffer_field_14 = -971227136; /*0x753f78*/
  return -971227136; /*0x753f6a*/
}



// ==== 0x00753F90  globalHelper_053F90  this=-  sig=csp ====
int __fastcall globalHelper_053F90(
        VoxelSection *a1,
        VoxelSection *a2,
        VoxelSection *a3,
        float *a4,
        float *a5,
        float *a6,
        VoxelSection *a7,
        VoxelSection *a8,
        VoxelSection *a9)
{
  int Info; // eax
  int v12; // ebp
  VoxelSection **v13; // ecx
  float *v14; // esi
  float *v15; // ebx
  float *v16; // eax
  float *v17; // eax
  double v18; // st7
  float v20; // [esp+10h] [ebp-24h]
  float v21; // [esp+14h] [ebp-20h]
  float v22; // [esp+18h] [ebp-1Ch]
  float v23[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v24[3]; // [esp+28h] [ebp-Ch] BYREF

  Info = VoxelSection::GetInfo(a1, (int)a2, (int)a3); /*0x753fa1*/
  v12 = 4; /*0x753fac*/
  v13 = (VoxelSection **)(72 * dword_B2FB70 + 11796344); /*0x753fb8*/
  v13[15] = a7; /*0x753fbf*/
  v13[16] = a8; /*0x753fc6*/
  *v13 = a1; /*0x753fcd*/
  v13[1] = a2; /*0x753fd3*/
  v13[2] = a3; /*0x753fd6*/
  v13[17] = a9; /*0x753fd9*/
  v14 = (float *)(v13 + 3); /*0x753fdc*/
  v15 = (float *)(Info + 64); /*0x753fdf*/
  do /*0x7540c6*/
  {
    v16 = TransformMatrix3x4Point(v23, a5, v15); /*0x753feb*/
    *v14 = *v16; /*0x753ff5*/
    v14[1] = v16[1]; /*0x753ffa*/
    v14[2] = v16[2]; /*0x754004*/
    v14[2] = 0.0; /*0x75400b*/
    v17 = TransformMatrix3x4Point(v24, a4, v14); /*0x754012*/
    *v14 = *v17; /*0x75401b*/
    v14[1] = v17[1]; /*0x754020*/
    v14[2] = v17[2]; /*0x754026*/
    v20 = *a6 + *v14; /*0x75402d*/
    v21 = v14[1] + a6[1]; /*0x75403b*/
    v18 = a6[2] + v14[2]; /*0x754042*/
    *v14 = v20; /*0x754049*/
    v22 = v18; /*0x75404b*/
    v14[1] = v21; /*0x754053*/
    v14[2] = v22; /*0x754056*/
    v14[1] = -v14[1]; /*0x75405e*/
    if ( *v14 < (double)*(float *)&dword_B2D5E0 ) /*0x75406e*/
      dword_B2D5E0 = *(_DWORD *)v14; /*0x754072*/
    if ( v14[1] < (double)*(float *)&dword_B2D5E4 ) /*0x754085*/
      dword_B2D5E4 = *((_DWORD *)v14 + 1); /*0x75408a*/
    if ( *v14 > (double)*(float *)&stru_B2D93C.Buffer_field_0C ) /*0x75409d*/
      stru_B2D93C.Buffer_field_0C = *(int *)v14; /*0x7540a1*/
    if ( v14[1] > (double)*(float *)&stru_B2D93C.Buffer_field_10 ) /*0x7540b5*/
      stru_B2D93C.Buffer_field_10 = (int)v14[1]; /*0x7540ba*/
    v15 += 3; /*0x7540bf*/
    v14 += 3; /*0x7540c2*/
    --v12; /*0x7540c5*/
  }
  while ( v12 ); /*0x7540c6*/
  return ++dword_B2FB70; /*0x7540d1*/
}



// ==== 0x007540F0  TransformVoxelVertex  this=-  sig=csp ====
int __fastcall TransformVoxelVertex(VoxelSection *a1, VoxelSection *a2, VoxelSection *a3, float *a4)
{
  int Info; // eax
  VoxelSection **v7; // esi
  _DWORD *v8; // ecx
  int v9; // ebp
  int v10; // edx
  int v11; // edx
  float *v12; // edi
  VoxelSection **v13; // ebx
  float *v14; // eax
  VoxelSection *v15; // edx
  int v17; // [esp+10h] [ebp-Ch] BYREF
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  float *v20; // [esp+20h] [ebp+4h]

  Info = VoxelSection::GetInfo(a1, (int)a2, (int)a3); /*0x754101*/
  v18 = 1176256512; /*0x75411b*/
  v19 = 1176256512; /*0x754123*/
  v7 = (VoxelSection **)(136 * stru_B2D804.Buffer_field_1C + 11721048); /*0x75412b*/
  v17 = -971227136; /*0x754136*/
  v8 = (_DWORD *)(136 * stru_B2D804.Buffer_field_1C + 11721064); /*0x75413e*/
  v7[2] = a3; /*0x754141*/
  v9 = 0; /*0x754144*/
  *v8 = 1176256512; /*0x754149*/
  v10 = v18; /*0x75414b*/
  v18 = -971227136; /*0x75414f*/
  v7[1] = a2; /*0x754157*/
  v8[1] = v10; /*0x75415a*/
  v11 = v19; /*0x75415d*/
  v19 = -971227136; /*0x754161*/
  *v7 = a1; /*0x754169*/
  v8[2] = v11; /*0x75416b*/
  v12 = (float *)(v7 + 11); /*0x754175*/
  v20 = (float *)(Info + 64); /*0x754178*/
  v7[7] = (VoxelSection *)v17; /*0x75417c*/
  v7[8] = (VoxelSection *)v18; /*0x754182*/
  v7[9] = (VoxelSection *)v19; /*0x754189*/
  do /*0x754238*/
  {
    v13 = (VoxelSection **)(v12 - 1); /*0x754199*/
    v14 = TransformMatrix3x4Point((float *)&v17, a4, v20); /*0x75419c*/
    *(v12 - 1) = *v14; /*0x7541a5*/
    *v12 = v14[1]; /*0x7541aa*/
    v12[1] = v14[2]; /*0x7541b0*/
    *v12 = -*v12; /*0x7541b7*/
    if ( *(v12 - 1) < (double)*((float *)v7 + 4) ) /*0x7541c3*/
      v7[4] = *v13; /*0x7541c7*/
    if ( *(float *)v13 > (double)*((float *)v7 + 7) ) /*0x7541d4*/
      v7[7] = *v13; /*0x7541d8*/
    if ( *v12 < (double)*((float *)v7 + 5) ) /*0x7541e5*/
      v7[5] = *(VoxelSection **)v12; /*0x7541e9*/
    if ( *v12 > (double)*((float *)v7 + 8) ) /*0x7541f6*/
      v7[8] = *(VoxelSection **)v12; /*0x7541fa*/
    if ( v12[1] < (double)*((float *)v7 + 6) ) /*0x754208*/
    {
      v15 = (VoxelSection *)*((_DWORD *)v12 + 1); /*0x75420a*/
      v7[3] = (VoxelSection *)v9; /*0x75420d*/
      v7[6] = v15; /*0x754210*/
    }
    if ( v12[1] > (double)*((float *)v7 + 9) ) /*0x75421e*/
      v7[9] = (VoxelSection *)*((_DWORD *)v12 + 1); /*0x754223*/
    ++v9; /*0x75422a*/
    v12 += 3; /*0x75422e*/
    v20 += 3; /*0x754234*/
  }
  while ( v9 < 8 ); /*0x754238*/
  if ( *((float *)v7 + 4) < (double)*(float *)&dword_B2D5E0 ) /*0x75424c*/
    dword_B2D5E0 = (int)v7[4]; /*0x754251*/
  if ( *((float *)v7 + 5) < (double)*(float *)&dword_B2D5E4 ) /*0x754265*/
    dword_B2D5E4 = (int)v7[5]; /*0x75426a*/
  if ( *((float *)v7 + 6) < (double)*(float *)&dword_B2D5E8 ) /*0x75427e*/
    dword_B2D5E8 = (int)v7[6]; /*0x754283*/
  if ( *((float *)v7 + 7) > (double)*(float *)&stru_B2D93C.Buffer_field_0C ) /*0x754296*/
    stru_B2D93C.Buffer_field_0C = (int)v7[7]; /*0x75429b*/
  if ( *((float *)v7 + 8) > (double)*(float *)&stru_B2D93C.Buffer_field_10 ) /*0x7542af*/
    stru_B2D93C.Buffer_field_10 = (int)v7[8]; /*0x7542b4*/
  if ( *((float *)v7 + 9) > (double)*(float *)&stru_B2D93C.Buffer_field_14 ) /*0x7542c8*/
    stru_B2D93C.Buffer_field_14 = (int)v7[9]; /*0x7542cd*/
  return ++stru_B2D804.Buffer_field_1C; /*0x7542d7*/
}



// ==== 0x007542F0  InitializeAudioOcclusion  this=-  sig=csp ====
int __fastcall InitializeAudioOcclusion(int *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  _DWORD **v5; // esi
  int v6; // ebp
  _DWORD *v7; // ecx
  char *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  char *v12; // edi
  char *v13; // ecx
  int v14; // ebp
  int v15; // edx
  _DWORD ***v16; // esi
  int v17; // edi
  int v18; // esi
  _DWORD ***v19; // edi
  int v20; // eax
  int v21; // ecx
  double v22; // st7
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int v26; // esi
  int v27; // eax
  double v28; // st7
  int v29; // esi
  int result; // eax
  int v31; // [esp+10h] [ebp-14h]
  float v33; // [esp+18h] [ebp-Ch] BYREF
  float v34; // [esp+1Ch] [ebp-8h]
  float v35; // [esp+20h] [ebp-4h]

  v3 = 0; /*0x75430e*/
  v33 = (*(float *)&dword_B2D5E0 + *(float *)&dword_B2D948) * 0.5; /*0x754318*/
  v34 = (*(float *)&dword_B2D5E4 + *(float *)&dword_B2D94C) * 0.5; /*0x75432e*/
  v35 = (*(float *)&dword_B2D5E8 + *(float *)&dword_B2D950) * 0.5; /*0x754344*/
  if ( dword_B2FB70 > 0 ) /*0x754348*/
  {
    v5 = (_DWORD **)&unk_B3FF78; /*0x75434a*/
    do /*0x754367*/
    {
      InitializeTileAudioOcclusion(*v5, (int)v5, &v33); /*0x754357*/
      ++v3; /*0x754361*/
      v5 += 18; /*0x754362*/
    }
    while ( v3 < dword_B2FB70 ); /*0x754367*/
  }
  v6 = dword_B2D820; /*0x754369*/
  if ( dword_B2D820 > 0 ) /*0x754371*/
  {
    v7 = &unk_B2FE78; /*0x754373*/
    v8 = (char *)&unk_B2D958; /*0x754378*/
    v9 = dword_B2D820; /*0x75437d*/
    do /*0x75438a*/
    {
      *v7 = v8; /*0x75437f*/
      v8 += 136; /*0x754381*/
      ++v7; /*0x754386*/
      --v9; /*0x754389*/
    }
    while ( v9 ); /*0x75438a*/
  }
  v10 = v6 - 1; /*0x75438c*/
  if ( v6 - 1 > 0 ) /*0x754391*/
  {
    v11 = 1; /*0x754393*/
    v12 = (char *)&unk_B2FE78; /*0x754398*/
    v31 = 1; /*0x75439d*/
    do /*0x7543df*/
    {
      if ( v11 < v6 ) /*0x7543a3*/
      {
        v13 = v12 + 4; /*0x7543a5*/
        v14 = v6 - v11; /*0x7543a8*/
        do /*0x7543c3*/
        {
          v15 = *(_DWORD *)v12; /*0x7543aa*/
          if ( *(float *)(*(_DWORD *)v12 + 36) > (double)*(float *)(*(_DWORD *)v13 + 36) ) /*0x7543b9*/
          {
            *(_DWORD *)v12 = *(_DWORD *)v13; /*0x7543bb*/
            *(_DWORD *)v13 = v15; /*0x7543bd*/
          }
          v13 += 4; /*0x7543bf*/
          --v14; /*0x7543c2*/
        }
        while ( v14 ); /*0x7543c3*/
        v11 = v31; /*0x7543c5*/
        v6 = dword_B2D820; /*0x7543c9*/
      }
      ++v11; /*0x7543cf*/
      v10 = v6 - 1; /*0x7543d0*/
      v12 += 4; /*0x7543d3*/
      v31 = v11; /*0x7543d6*/
    }
    while ( v11 - 1 < v6 - 1 ); /*0x7543df*/
  }
  if ( dword_B43180 ) /*0x7543e8*/
  {
    if ( v10 >= 0 ) /*0x7543ec*/
    {
      v16 = (_DWORD ***)(4 * v10 + 11730552); /*0x7543ee*/
      v17 = v10 + 1; /*0x7543f5*/
      do /*0x75440b*/
      {
        Voxel::ProcessColor(**v16, *v16, &v33); /*0x754402*/
        --v16; /*0x754407*/
        --v17; /*0x75440a*/
      }
      while ( v17 ); /*0x75440b*/
    }
  }
  else
  {
    v18 = 0; /*0x75440f*/
    if ( v6 > 0 ) /*0x754413*/
    {
      v19 = (_DWORD ***)&unk_B2FE78; /*0x754415*/
      do /*0x754434*/
      {
        Voxel::ProcessColor(**v19, *v19, &v33); /*0x754424*/
        ++v18; /*0x75442e*/
        ++v19; /*0x75442f*/
      }
      while ( v18 < dword_B2D820 ); /*0x754434*/
    }
  }
  a1[2] = Math::RoundToInt(*(float *)&dword_B2D948 - *(float *)&dword_B2D5E0); /*0x754447*/
  v20 = Math::RoundToInt(*(float *)&dword_B2D94C - *(float *)&dword_B2D5E4); /*0x754456*/
  v21 = a1[2]; /*0x75445b*/
  a1[3] = v20; /*0x75445e*/
  v22 = v33; /*0x754467*/
  v23 = a1[3]; /*0x754476*/
  *a1 = 128 - v21 / 2; /*0x754478*/
  v24 = 128 - v23 / 2; /*0x754487*/
  a1[3] = v23 + 8; /*0x754489*/
  v25 = *a1; /*0x75448c*/
  a1[1] = v24; /*0x75448e*/
  a1[2] = v21 + 8; /*0x75449c*/
  *a1 = v25 - 4; /*0x75449f*/
  a1[1] = v24 - 4; /*0x7544a1*/
  dword_B2FB60 = *a1; /*0x7544a6*/
  dword_B2FB64 = a1[1]; /*0x7544af*/
  dword_B2FB68 = a1[2]; /*0x7544b8*/
  dword_B2FB6C = a1[3]; /*0x7544c1*/
  v26 = a1[2] / 2; /*0x7544cf*/
  v27 = Math::RoundToInt(v22); /*0x7544d1*/
  v28 = v34; /*0x7544dc*/
  *a2 = v27 - v26; /*0x7544e0*/
  v29 = a1[3] / 2; /*0x7544ea*/
  result = Math::RoundToInt(v28) - v29; /*0x7544f5*/
  *a3 = result; /*0x7544fa*/
  return result; /*0x7544f7*/
}



// ==== 0x00754510  Voxel::RenderFrame  this=Voxel  sig=csp ====
float *__thiscall Voxel_RenderFrame(float *this)
{
  int v1; // edi
  char *v2; // esi
  int v3; // ebx
  _DWORD *v4; // ecx
  char *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ebp
  char *v9; // edi
  char *v10; // ecx
  int v11; // ebx
  int v12; // edx
  _DWORD ***v13; // esi
  int v14; // edi
  int v15; // esi
  _DWORD ***v16; // edi
  float v17; // esi
  int v18; // eax
  int v19; // ebx
  float v20; // edi
  int v21; // eax
  float v24; // [esp+14h] [ebp-30h]
  float v25[7]; // [esp+1Ch] [ebp-28h] BYREF
  int v26; // [esp+38h] [ebp-Ch]

  v1 = 0; /*0x75452e*/
  v25[0] = (*(float *)&dword_B2D5E0 + *(float *)&dword_B2D948) * 0.5; /*0x754536*/
  v25[1] = (*(float *)&dword_B2D5E4 + *(float *)&dword_B2D94C) * 0.5; /*0x75454c*/
  v25[2] = (*(float *)&dword_B2D5E8 + *(float *)&dword_B2D950) * 0.5; /*0x754562*/
  if ( dword_B2FB70 > 0 ) /*0x754566*/
  {
    v2 = (char *)&unk_B3FF78; /*0x754568*/
    do /*0x754585*/
    {
      InitializeTileAudioOcclusion(v2, v25); /*0x754575*/
      ++v1; /*0x75457f*/
      v2 += 72; /*0x754580*/
    }
    while ( v1 < dword_B2FB70 ); /*0x754585*/
  }
  v3 = dword_B2D820; /*0x754587*/
  if ( dword_B2D820 > 0 ) /*0x75458f*/
  {
    v4 = &unk_B2D824; /*0x754591*/
    v5 = (char *)&unk_B2D958; /*0x754596*/
    v6 = dword_B2D820; /*0x75459b*/
    do /*0x7545a8*/
    {
      *v4 = v5; /*0x75459d*/
      v5 += 136; /*0x75459f*/
      ++v4; /*0x7545a4*/
      --v6; /*0x7545a7*/
    }
    while ( v6 ); /*0x7545a8*/
  }
  v7 = v3 - 1; /*0x7545aa*/
  if ( v3 - 1 > 0 ) /*0x7545af*/
  {
    v8 = 1; /*0x7545b1*/
    v9 = (char *)&unk_B2D824; /*0x7545b6*/
    do /*0x7545f1*/
    {
      if ( v8 < v3 ) /*0x7545bd*/
      {
        v10 = v9 + 4; /*0x7545bf*/
        v11 = v3 - v8; /*0x7545c2*/
        do /*0x7545dd*/
        {
          v12 = *(_DWORD *)v9; /*0x7545c4*/
          if ( *(float *)(*(_DWORD *)v9 + 36) > (double)*(float *)(*(_DWORD *)v10 + 36) ) /*0x7545d3*/
          {
            *(_DWORD *)v9 = *(_DWORD *)v10; /*0x7545d5*/
            *(_DWORD *)v10 = v12; /*0x7545d7*/
          }
          v10 += 4; /*0x7545d9*/
          --v11; /*0x7545dc*/
        }
        while ( v11 ); /*0x7545dd*/
        v3 = dword_B2D820; /*0x7545df*/
      }
      ++v8; /*0x7545e5*/
      v7 = v3 - 1; /*0x7545e6*/
      v9 += 4; /*0x7545e9*/
    }
    while ( v8 - 1 < v3 - 1 ); /*0x7545f1*/
  }
  if ( dword_B43180 ) /*0x7545fb*/
  {
    if ( v7 >= 0 ) /*0x7545ff*/
    {
      v13 = (_DWORD ***)(4 * v7 + 11720740); /*0x754601*/
      v14 = v7 + 1; /*0x754608*/
      do /*0x75461e*/
      {
        Voxel::ProcessColor(**v13, *v13, v25); /*0x754615*/
        --v13; /*0x75461a*/
        --v14; /*0x75461d*/
      }
      while ( v14 ); /*0x75461e*/
    }
  }
  else
  {
    v15 = 0; /*0x754622*/
    if ( v3 > 0 ) /*0x754626*/
    {
      v16 = (_DWORD ***)&unk_B2D824; /*0x754628*/
      do /*0x754647*/
      {
        Voxel::ProcessColor(**v16, *v16, v25); /*0x754637*/
        ++v15; /*0x754641*/
        ++v16; /*0x754642*/
      }
      while ( v15 < dword_B2D820 ); /*0x754647*/
    }
  }
  LODWORD(v17) = Math::RoundToInt(*(float *)&dword_B2D948 - *(float *)&dword_B2D5E0); /*0x754666*/
  v18 = Math::RoundToInt(*(float *)&dword_B2D94C - *(float *)&dword_B2D5E4); /*0x754668*/
  v19 = 128 - SLODWORD(v17) / 2; /*0x75467f*/
  LODWORD(v17) += 8; /*0x754686*/
  LODWORD(v20) = v18 + 8; /*0x754694*/
  v19 -= 4; /*0x75469a*/
  v26 = 128 - v18 / 2 - 4; /*0x75469d*/
  dword_B2FB64 = v26; /*0x7546a1*/
  dword_B2FB60 = v19; /*0x7546a8*/
  dword_B2FB68 = LODWORD(v17); /*0x7546b1*/
  dword_B2FB6C = v18 + 8; /*0x7546b9*/
  LODWORD(v24) = Math::RoundToInt(v25[0]) - SLODWORD(v17) / 2; /*0x7546c8*/
  v21 = Math::RoundToInt(v25[1]); /*0x7546d9*/
  v25[0] = v24; /*0x7546e8*/
  LODWORD(v25[1]) = v21 - SLODWORD(v20) / 2; /*0x7546ec*/
  v25[4] = v17; /*0x7546f4*/
  v25[5] = v20; /*0x7546f8*/
  LODWORD(v25[2]) = v19; /*0x754707*/
  LODWORD(v25[3]) = v26; /*0x75470b*/
  qmemcpy(this, v25, 0x18u); /*0x75470f*/
  return this; /*0x754711*/
}



// ==== 0x00754740  sub_754740  this=-  sig=ida-proto ====
int __fastcall sub_754740(int a1, int a2, unsigned int a3, int a4)
{
  int result; // eax
  char *v5; // esi
  int v6; // edx
  char *v7; // edi

  if ( a1 < 0 || a2 < 0 || (int)(a1 + a3) > 255 || (result = a2 + a4, a2 + a4 > 255) ) /*0x754763*/
  {
    memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x7547ac*/
    return 0; /*0x7547a5*/
  }
  else if ( a2 <= result ) /*0x754767*/
  {
    v5 = &g_VoxelRenderBuffer[256 * a2 + a1]; /*0x754773*/
    v6 = a4 + 1; /*0x75477a*/
    do /*0x754797*/
    {
      result = 0; /*0x75477e*/
      memset(v5, 0, 4 * (a3 >> 2)); /*0x754787*/
      v7 = &v5[4 * (a3 >> 2)]; /*0x754787*/
      v5 += 256; /*0x75478b*/
      --v6; /*0x754794*/
      memset(v7, 0, a3 & 3); /*0x754795*/
    }
    while ( v6 ); /*0x754797*/
  }
  return result; /*0x75479b*/
}



// ==== 0x00754900  ObjectClass::??0Iostream_init_QAE_XZ_8  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_8(Iostream_init *this)
{
  return this; /*0x754902*/
}



// ==== 0x00754910  sub_754910  this=-  sig=ida-proto ====
void sub_754910()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75491c*/
  dbl_B43EF8 = Math::Sqrt(v0 + v0); /*0x75492e*/
}



// ==== 0x00754940  sub_754940  this=-  sig=ida-proto ====
void sub_754940()
{
  dbl_B45180 = dbl_B43EF8 / 60.0; /*0x75494c*/
}



// ==== 0x00754960  sub_754960  this=-  sig=ida-proto ====
void sub_754960()
{
  dbl_B450A0 = 1.0 / dbl_B45180; /*0x75496c*/
}



// ==== 0x00754980  sub_754980  this=-  sig=ida-proto ====
void sub_754980()
{
  dbl_B44498 = 0.0174532925199433 * 45.0; /*0x75498c*/
}



// ==== 0x007549A0  sub_7549A0  this=-  sig=ida-proto ====
void sub_7549A0()
{
  dbl_B43F00 = 0.0174532925199433 * 60.0; /*0x7549ac*/
}



// ==== 0x007549C0  sub_7549C0  this=-  sig=ida-proto ====
void sub_7549C0()
{
  dbl_B43ED8 = 0.0174532925199433 * 90.0; /*0x7549cc*/
}



// ==== 0x007549E0  sub_7549E0  this=-  sig=ida-proto ====
__int64 sub_7549E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B43ED8 - dbl_B43F00); /*0x7549f2*/
  result = Math::RoundToInt(v0 * dbl_B43EF8 * 0.5); /*0x754a06*/
  dword_B45578 = result; /*0x754a0b*/
  return result; /*0x754a10*/
}



// ==== 0x00754A20  sub_754A20  this=-  sig=ida-proto ====
void sub_754A20()
{
  dbl_B43F08 = Math::ArcTan((double)dword_B45578 * 0.00390625); /*0x754a37*/
}



// ==== 0x00754A50  sub_754A50  this=-  sig=ida-proto ====
void sub_754A50()
{
  dbl_B44310 = Math::ArcTan((double)(2 * dword_B45578) / dbl_B43EF8); /*0x754a72*/
}



// ==== 0x00754A80  sub_754A80  this=-  sig=ida-proto ====
__int64 sub_754A80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45578) + 0.5); /*0x754a9b*/
  dword_B45178 = result; /*0x754aa0*/
  return result; /*0x754aa6*/
}



// ==== 0x00754AB0  sub_754AB0  this=-  sig=ida-proto ====
int sub_754AB0()
{
  word_B43EF0 = 0; /*0x754ab2*/
  word_B43EF2 = 0; /*0x754ab8*/
  return 0; /*0x754abe*/
}



// ==== 0x00754AC0  sub_754AC0  this=-  sig=ida-proto ====
int sub_754AC0()
{
  dword_B44300 = 0; /*0x754ac2*/
  dword_B44304 = 0; /*0x754ac7*/
  dword_B44308 = 0; /*0x754acc*/
  return 0; /*0x754ad1*/
}



// ==== 0x00754AE0  sub_754AE0  this=-  sig=ida-proto ====
int sub_754AE0()
{
  dword_B450B0 = 0; /*0x754ae5*/
  dword_B450A8 = 128; /*0x754aef*/
  dword_B450AC = 128; /*0x754af4*/
  return 128; /*0x754af9*/
}



// ==== 0x00754B00  sub_754B00  this=-  sig=ida-proto ====
int sub_754B00()
{
  dword_B43EE0 = 0; /*0x754b02*/
  dword_B43EE4 = 0; /*0x754b07*/
  dword_B43EE8 = 0; /*0x754b0c*/
  dword_B43EEC = 0; /*0x754b11*/
  return 0; /*0x754b16*/
}



// ==== 0x00754B20  ScreenEffect::Stub3  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub3()
{
  ; /*0x754b20*/
}



// ==== 0x00754B30  ScreenEffect::Stub4  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub4()
{
  ; /*0x754b30*/
}



// ==== 0x00754B40  sub_754B40  this=-  sig=ida-proto ====
_DWORD *sub_754B40()
{
  _DWORD *v0; // esi
  int v1; // edi
  _DWORD *result; // eax

  v0 = &stru_B44348; /*0x754b42*/
  v1 = 21; /*0x754b47*/
  do /*0x754b62*/
  {
    result = Int4::Set(v0, 0, 0, 0, 1065353216); /*0x754b59*/
    v0 += 4; /*0x754b5e*/
    --v1; /*0x754b61*/
  }
  while ( v1 ); /*0x754b62*/
  return result; /*0x754b64*/
}



// ==== 0x00754B70  sub_754B70  this=-  sig=ida-proto ====
_DWORD *sub_754B70()
{
  _DWORD *v0; // esi
  int v1; // edi
  _DWORD *result; // eax

  v0 = &stru_B43188; /*0x754b72*/
  v1 = 21; /*0x754b77*/
  do /*0x754b92*/
  {
    result = Int4::Set(v0, 0, 0, 0, 1065353216); /*0x754b89*/
    v0 += 4; /*0x754b8e*/
    --v1; /*0x754b91*/
  }
  while ( v1 ); /*0x754b92*/
  return result; /*0x754b94*/
}



// ==== 0x00754BA0  ScreenEffect::Stub5  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub5()
{
  ; /*0x754ba0*/
}



// ==== 0x00754BB0  ScreenEffect::Stub6  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub6()
{
  ; /*0x754bb0*/
}



// ==== 0x00754BC0  ScreenEffect::Stub7  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub7()
{
  ; /*0x754bc0*/
}



// ==== 0x00754BD0  ScreenEffect::Stub8  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub8()
{
  ; /*0x754bd0*/
}



// ==== 0x00754BE0  AudioConfig::InitDefault  this=AudioConfig  sig=csp ====
void *__thiscall AudioConfig::InitDefault(AudioConfig *this)
{
  qmemcpy(this, &stru_B44318, 0x30u); /*0x754bf0*/
  return this; /*0x754bf2*/
}



// ==== 0x00754C00  Voxel::SetProjectionAngle  this=Voxel  sig=csp ====
int __stdcall sub_754C00(float a1)
{
  int *v1; // eax
  float v3[3]; // [esp+0h] [ebp-48h] BYREF
  float v4[3]; // [esp+Ch] [ebp-3Ch] BYREF
  float v5[12]; // [esp+18h] [ebp-30h] BYREF

  Matrix3x4::Identity(v5); /*0x754c07*/
  dword_88746C = a1; /*0x754c12*/
  Matrix3D::RotateZ(v5, a1); /*0x754c1c*/
  v3[0] = -0.70710599; /*0x754c2e*/
  v3[1] = -0.70710599; /*0x754c36*/
  v3[2] = 0.0; /*0x754c3e*/
  v1 = (int *)TransformMatrix3x4Point(v4, v5, v3); /*0x754c46*/
  dword_887470 = *v1; /*0x754c4d*/
  dword_887474 = v1[1]; /*0x754c62*/
  dword_887478 = v1[2]; /*0x754c6b*/
  dword_887424 = 0; /*0x754c88*/
  v3[0] = *(float *)&dword_887470 * -6.0; /*0x754c8e*/
  dword_887428 = 0; /*0x754c96*/
  dword_887420 = LODWORD(v3[0]); /*0x754c9b*/
  return 0; /*0x754ca1*/
}



// ==== 0x00754CB0  Voxel::Projection_Setup  this=Voxel  sig=csp ====
int Voxel::Projection_Setup(Voxel *this)
{
  float *v1; // eax
  float *v2; // eax
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  float v7; // edx
  float *v8; // eax
  float *v9; // eax
  float v10; // edx
  float v11; // ebx
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float v16; // ebp
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  float *v28; // eax
  int v29; // edi
  float *v30; // esi
  float *v31; // eax
  int v32; // ecx
  float *v33; // ecx
  double v34; // st7
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  Matrix3x4 *v52; // esi
  int result; // eax
  float v54; // [esp+0h] [ebp-114h]
  float v55; // [esp+0h] [ebp-114h]
  float v56; // [esp+0h] [ebp-114h]
  float v57[4]; // [esp+14h] [ebp-100h] BYREF
  float v58[4]; // [esp+24h] [ebp-F0h] BYREF
  int v59; // [esp+34h] [ebp-E0h] BYREF
  float v60; // [esp+38h] [ebp-DCh]
  int v61; // [esp+3Ch] [ebp-D8h]
  int v62; // [esp+40h] [ebp-D4h] BYREF
  int v63; // [esp+44h] [ebp-D0h]
  int v64; // [esp+48h] [ebp-CCh]
  float v65; // [esp+4Ch] [ebp-C8h]
  Matrix3D v66; // [esp+50h] [ebp-C4h] BYREF
  float v67[3]; // [esp+80h] [ebp-94h] BYREF
  float v68[3]; // [esp+8Ch] [ebp-88h] BYREF
  float v69[3]; // [esp+98h] [ebp-7Ch] BYREF
  float v70[3]; // [esp+A4h] [ebp-70h] BYREF
  float v71[3]; // [esp+B0h] [ebp-64h] BYREF
  float v72[3]; // [esp+BCh] [ebp-58h] BYREF
  float v73[3]; // [esp+C8h] [ebp-4Ch] BYREF
  float v74[3]; // [esp+D4h] [ebp-40h] BYREF
  float v75; // [esp+E0h] [ebp-34h]
  Matrix3x4 v76; // [esp+E4h] [ebp-30h] BYREF

  v75 = dbl_B43F08; /*0x754cbe*/
  v65 = dbl_B44310; /*0x754cd0*/
  *(float *)&v59 = 1.0; /*0x754ce4*/
  v60 = 0.0; /*0x754cec*/
  v61 = 0; /*0x754cf4*/
  v62 = 0; /*0x754cfc*/
  v63 = 0; /*0x754d04*/
  v64 = 1065353216; /*0x754d0c*/
  v1 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v62, 0.785375); /*0x754d14*/
  v2 = TransformMatrix3x4Point(v57, v1, (float *)&v59); /*0x754d1f*/
  v70[0] = *v2; /*0x754d26*/
  v70[1] = v2[1]; /*0x754d30*/
  v70[2] = v2[2]; /*0x754d4d*/
  v62 = 1065353216; /*0x754d54*/
  v63 = 0; /*0x754d5c*/
  v64 = 0; /*0x754d64*/
  *(float *)&v59 = 0.0; /*0x754d6c*/
  v60 = 0.0; /*0x754d74*/
  v61 = 1065353216; /*0x754d7c*/
  v3 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 2.3561251); /*0x754d84*/
  v4 = TransformMatrix3x4Point(v57, v3, (float *)&v62); /*0x754d8f*/
  v67[0] = *v4; /*0x754d96*/
  v67[1] = v4[1]; /*0x754d9d*/
  v67[2] = v4[2]; /*0x754dba*/
  v62 = 1065353216; /*0x754dc1*/
  v63 = 0; /*0x754dc9*/
  v64 = 0; /*0x754dd1*/
  *(float *)&v59 = 0.0; /*0x754dd9*/
  v60 = 0.0; /*0x754de1*/
  v61 = 1065353216; /*0x754de9*/
  v5 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 3.9268751); /*0x754df1*/
  v6 = TransformMatrix3x4Point(v57, v5, (float *)&v62); /*0x754dfc*/
  v73[0] = *v6; /*0x754e03*/
  v73[1] = v6[1]; /*0x754e0d*/
  v7 = v6[2]; /*0x754e14*/
  v62 = 1065353216; /*0x754e17*/
  v73[2] = v7; /*0x754e1f*/
  v63 = 0; /*0x754e26*/
  v64 = 0; /*0x754e2e*/
  *(float *)&v59 = 0.0; /*0x754e36*/
  v60 = 0.0; /*0x754e3e*/
  v61 = 1065353216; /*0x754e46*/
  v8 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 5.4976249); /*0x754e61*/
  v9 = TransformMatrix3x4Point(v57, v8, (float *)&v62); /*0x754e6c*/
  v71[0] = *v9; /*0x754e73*/
  v71[1] = v9[1]; /*0x754e7d*/
  v10 = v9[2]; /*0x754e89*/
  v74[0] = 1.0; /*0x754e8c*/
  v71[2] = v10; /*0x754e97*/
  v74[1] = 0.0; /*0x754e9e*/
  v74[2] = 0.0; /*0x754ea9*/
  v72[0] = 0.0; /*0x754eb4*/
  v72[1] = 1.0; /*0x754ebf*/
  v72[2] = 0.0; /*0x754eca*/
  v68[0] = -1.0; /*0x754ed5*/
  v68[1] = 0.0; /*0x754ee0*/
  v68[2] = 0.0; /*0x754eeb*/
  v69[0] = 0.0; /*0x754ef6*/
  v69[1] = -1.0; /*0x754f01*/
  v69[2] = 0.0; /*0x754f0c*/
  Matrix3x4::Identity(&stru_B43F10); /*0x754f17*/
  v11 = v65; /*0x754f1c*/
  qmemcpy(&unk_B43F40, Matrix3D::Constructor(&v66, 3.9268751, v65), 0x30u); /*0x754f3c*/
  qmemcpy(&unk_B43F70, Matrix3D::Constructor(&v66, 2.3561251, v11), 0x30u); /*0x754f59*/
  qmemcpy(&unk_B43FA0, Matrix3D::Constructor(&v66, 0.785375, v11), 0x30u); /*0x754f76*/
  qmemcpy(&unk_B43FD0, Matrix3D::Constructor(&v66, 5.4976249, v11), 0x30u); /*0x754f93*/
  v12 = FromQuaternionAxisAngle(v58, v73, v11); /*0x754fa0*/
  Float4::Copy(flt_B44358, v57, v12); /*0x754fb0*/
  v13 = FromQuaternionAxisAngle(v58, v67, v11); /*0x754fbe*/
  Float4::Copy(flt_B44368, v57, v13); /*0x754fce*/
  v14 = FromQuaternionAxisAngle(v58, v70, v11); /*0x754fdf*/
  Float4::Copy(flt_B44378, v57, v14); /*0x754fef*/
  v15 = FromQuaternionAxisAngle(v58, v71, v11); /*0x755000*/
  Float4::Copy(flt_B44388, v57, v15); /*0x755010*/
  v16 = v75; /*0x755019*/
  qmemcpy(&unk_B44000, Matrix3D::Constructor(&v66, 3.1415, v75), 0x30u); /*0x755038*/
  qmemcpy(&unk_B44030, Matrix3D::Constructor(&v66, 1.57075, v16), 0x30u); /*0x755055*/
  qmemcpy(&unk_B44060, Matrix3D::Constructor(&v66, 0.0, v16), 0x30u); /*0x75506f*/
  qmemcpy(&unk_B44090, Matrix3D::Constructor(&v66, 4.7122502, v16), 0x30u); /*0x75508c*/
  v17 = FromQuaternionAxisAngle(v58, v68, v16); /*0x755099*/
  Float4::Copy(flt_B44398, v57, v17); /*0x7550a9*/
  v18 = FromQuaternionAxisAngle(v58, v72, v16); /*0x7550ba*/
  Float4::Copy(flt_B443A8, v57, v18); /*0x7550ca*/
  v19 = FromQuaternionAxisAngle(v58, v74, v16); /*0x7550db*/
  Float4::Copy(flt_B443B8, v57, v19); /*0x7550eb*/
  v20 = FromQuaternionAxisAngle(v58, v69, v16); /*0x7550fc*/
  Float4::Copy(flt_B443C8, v57, v20); /*0x75510c*/
  qmemcpy(&unk_B440C0, Matrix3D::Constructor(&v66, 3.1415, v16), 0x30u); /*0x75512d*/
  qmemcpy(&unk_B440F0, Matrix3D::Constructor(&v66, 1.57075, v16), 0x30u); /*0x75514a*/
  qmemcpy(&unk_B44120, Matrix3D::Constructor(&v66, 0.0, v16), 0x30u); /*0x755164*/
  qmemcpy(&unk_B44150, Matrix3D::Constructor(&v66, 4.7122502, v16), 0x30u); /*0x755181*/
  v21 = FromQuaternionAxisAngle(v58, v68, v16); /*0x75518e*/
  Float4::Copy(flt_B443D8, v57, v21); /*0x75519e*/
  v22 = FromQuaternionAxisAngle(v58, v72, v16); /*0x7551af*/
  Float4::Copy(flt_B443E8, v57, v22); /*0x7551bf*/
  v23 = FromQuaternionAxisAngle(v58, v74, v16); /*0x7551d0*/
  Float4::Copy(flt_B443F8, v57, v23); /*0x7551e0*/
  v24 = FromQuaternionAxisAngle(v58, v69, v16); /*0x7551f1*/
  Float4::Copy(flt_B44408, v57, v24); /*0x755201*/
  qmemcpy(&unk_B44180, Matrix3D::Constructor(&v66, 3.1415, v11), 0x30u); /*0x755221*/
  qmemcpy(&unk_B441B0, Matrix3D::Constructor(&v66, 1.57075, v11), 0x30u); /*0x75523f*/
  qmemcpy(&unk_B441E0, Matrix3D::Constructor(&v66, 0.0, v11), 0x30u); /*0x755259*/
  qmemcpy(&unk_B44210, Matrix3D::Constructor(&v66, 4.7122502, v11), 0x30u); /*0x755276*/
  v25 = FromQuaternionAxisAngle(v58, v68, v11); /*0x755283*/
  Float4::Copy(flt_B44418, v57, v25); /*0x755293*/
  v26 = FromQuaternionAxisAngle(v58, v72, v11); /*0x7552a4*/
  Float4::Copy(flt_B44428, v57, v26); /*0x7552b4*/
  v27 = FromQuaternionAxisAngle(v58, v74, v11); /*0x7552c5*/
  Float4::Copy(flt_B44438, v57, v27); /*0x7552d5*/
  v28 = FromQuaternionAxisAngle(v58, v69, v11); /*0x7552e6*/
  Float4::Copy(flt_B44448, v57, v28); /*0x7552f6*/
  Matrix3x4::Identity(&stru_B44240); /*0x755300*/
  Matrix3x4::Identity(&stru_B44270); /*0x75530a*/
  Matrix3x4::Identity(&stru_B442A0); /*0x755314*/
  Matrix3x4::Identity(&stru_B442D0); /*0x75531e*/
  v29 = 0; /*0x755323*/
  Int4::Set2(&stru_B44458, 0, 0, 0, 1065353216); /*0x755332*/
  Int4::Set2(&stru_B44468, 0, 0, 0, 1065353216); /*0x755344*/
  Int4::Set2(&stru_B44478, 0, 0, 0, 1065353216); /*0x755356*/
  Int4::Set2(&stru_B44488, 0, 0, 0, 1065353216); /*0x755368*/
  v65 = 0.0; /*0x75536d*/
  do /*0x755459*/
  {
    Matrix3x4::Identity(&v76); /*0x755378*/
    v54 = (double)SLODWORD(v65) * 0.024542969; /*0x75538f*/
    Matrix2D::Rotate(v76.m_Data, v54); /*0x755392*/
    v62 = 1065353216; /*0x7553a7*/
    v63 = 0; /*0x7553af*/
    v64 = 0; /*0x7553b7*/
    v30 = &flt_B432D8[v29]; /*0x7553bf*/
    v31 = TransformMatrix3x4Point(v57, (float *)v76.m_Data, (float *)&v62); /*0x7553c5*/
    *v30 = *v31; /*0x7553d4*/
    v32 = *((_DWORD *)v31 + 1); /*0x7553d6*/
    v61 = 0; /*0x7553d9*/
    *((_DWORD *)v30 + 1) = v32; /*0x7553e1*/
    v30[2] = v31[2]; /*0x7553e7*/
    v33 = &flt_B444A0[v29]; /*0x7553f8*/
    *(float *)&v59 = *(float *)(v29 * 4 + 11809500) - 0.0; /*0x7553fa*/
    v34 = 0.0 - flt_B432D8[v29]; /*0x755402*/
    *v33 = *(float *)&v59; /*0x755404*/
    v60 = v34; /*0x755406*/
    v33[1] = v60; /*0x75540e*/
    *((_DWORD *)v33 + 2) = v61; /*0x755415*/
    Math::BuildRotationMatrix((float *)v66.__pad_0, &flt_B444A0[v29], *(float *)&stru_887460.Buffer_field_0C); /*0x755424*/
    v35 = TransformMatrix3x4Point(v58, (float *)v66.__pad_0, &flt_B432D8[v29]); /*0x755432*/
    v29 += 3; /*0x755439*/
    *v30 = *v35; /*0x75543c*/
    v30[1] = v35[1]; /*0x755441*/
    v30[2] = v35[2]; /*0x755447*/
    ++LODWORD(v65); /*0x755455*/
  }
  while ( v29 < 768 ); /*0x755459*/
  Matrix3x4::Identity(&stru_B45188); /*0x755464*/
  qmemcpy(&unk_B451B8, Matrix3D::Constructor(&v66, 4.7122502, v11), 0x30u); /*0x755485*/
  qmemcpy(&unk_B451E8, Matrix3D::Constructor(&v66, 3.1415, v11), 0x30u); /*0x7554a2*/
  qmemcpy(&unk_B45218, Matrix3D::Constructor(&v66, 1.57075, v11), 0x30u); /*0x7554bf*/
  qmemcpy(&unk_B45248, Matrix3D::Constructor(&v66, 0.0, v11), 0x30u); /*0x7554d9*/
  qmemcpy(&unk_B45278, Matrix3D::Constructor(&v66, 3.9268751, v16), 0x30u); /*0x7554f6*/
  qmemcpy(&unk_B452A8, Matrix3D::Constructor(&v66, 2.3561251, v16), 0x30u); /*0x755513*/
  qmemcpy(&unk_B452D8, Matrix3D::Constructor(&v66, 0.785375, v16), 0x30u); /*0x755530*/
  qmemcpy(&unk_B45308, Matrix3D::Constructor(&v66, 5.4976249, v16), 0x30u); /*0x75554d*/
  qmemcpy(&unk_B45338, Matrix3D::Constructor(&v66, 3.9268751, v16), 0x30u); /*0x75556a*/
  qmemcpy(&unk_B45368, Matrix3D::Constructor(&v66, 2.3561251, v16), 0x30u); /*0x755586*/
  qmemcpy(&unk_B45398, Matrix3D::Constructor(&v66, 0.785375, v16), 0x30u); /*0x7555a4*/
  qmemcpy(&unk_B453C8, Matrix3D::Constructor(&v66, 5.4976249, v16), 0x30u); /*0x7555c1*/
  qmemcpy(&unk_B453F8, Matrix3D::Constructor(&v66, 3.9268751, v11), 0x30u); /*0x7555de*/
  qmemcpy(&unk_B45428, Matrix3D::Constructor(&v66, 2.3561251, v11), 0x30u); /*0x7555fb*/
  qmemcpy(&unk_B45458, Matrix3D::Constructor(&v66, 0.785375, v11), 0x30u); /*0x755618*/
  qmemcpy(&unk_B45488, Matrix3D::Constructor(&v66, 5.4976249, v11), 0x30u); /*0x755639*/
  Int4::Set2(&stru_B43188, 0, 0, 0, 1065353216); /*0x755646*/
  v36 = FromQuaternionAxisAngle(v58, v69, v11); /*0x755657*/
  Float4::Copy(flt_B43198, v57, v36); /*0x755667*/
  v37 = FromQuaternionAxisAngle(v58, v68, v11); /*0x755678*/
  Float4::Copy(flt_B431A8, v57, v37); /*0x755688*/
  v38 = FromQuaternionAxisAngle(v58, v72, v11); /*0x755699*/
  Float4::Copy(flt_B431B8, v57, v38); /*0x7556a9*/
  v39 = FromQuaternionAxisAngle(v58, v74, v11); /*0x7556ba*/
  Float4::Copy(flt_B431C8, v57, v39); /*0x7556ca*/
  v40 = FromQuaternionAxisAngle(v58, v73, v16); /*0x7556db*/
  Float4::Copy(flt_B431D8, v57, v40); /*0x7556eb*/
  v41 = FromQuaternionAxisAngle(v58, v67, v16); /*0x7556f9*/
  Float4::Copy(flt_B431E8, v57, v41); /*0x755709*/
  v42 = FromQuaternionAxisAngle(v58, v70, v16); /*0x75571a*/
  Float4::Copy(flt_B431F8, v57, v42); /*0x75572a*/
  v43 = FromQuaternionAxisAngle(v58, v71, v16); /*0x75573b*/
  Float4::Copy(flt_B43208, v57, v43); /*0x75574b*/
  v44 = FromQuaternionAxisAngle(v58, v73, v16); /*0x75575c*/
  Float4::Copy(flt_B43218, v57, v44); /*0x75576c*/
  v45 = FromQuaternionAxisAngle(v58, v67, v16); /*0x75577a*/
  Float4::Copy(flt_B43228, v57, v45); /*0x75578a*/
  v46 = FromQuaternionAxisAngle(v58, v70, v16); /*0x75579b*/
  Float4::Copy(flt_B43238, v57, v46); /*0x7557ab*/
  v47 = FromQuaternionAxisAngle(v58, v71, v16); /*0x7557bc*/
  Float4::Copy(flt_B43248, v57, v47); /*0x7557cc*/
  v48 = FromQuaternionAxisAngle(v58, v73, v11); /*0x7557dd*/
  Float4::Copy(flt_B43258, v57, v48); /*0x7557ed*/
  v49 = FromQuaternionAxisAngle(v58, v67, v11); /*0x7557fb*/
  Float4::Copy(flt_B43268, v57, v49); /*0x75580b*/
  v50 = FromQuaternionAxisAngle(v58, v70, v11); /*0x75581c*/
  Float4::Copy(flt_B43278, v57, v50); /*0x75582c*/
  v51 = FromQuaternionAxisAngle(v58, v71, v11); /*0x75583d*/
  Float4::Copy(flt_B43288, v57, v51); /*0x75584d*/
  Matrix3x4::Identity(&stru_B454B8); /*0x755857*/
  Matrix3x4::Identity(&stru_B454E8); /*0x755861*/
  Matrix3x4::Identity(&stru_B45518); /*0x75586b*/
  Matrix3x4::Identity(&stru_B45548); /*0x755875*/
  Int4::Set2(&stru_B43298, 0, 0, 0, 1065353216); /*0x75588a*/
  Int4::Set2(&stru_B432A8, 0, 0, 0, 1065353216); /*0x75589f*/
  Int4::Set2(&stru_B432B8, 0, 0, 0, 1065353216); /*0x7558b4*/
  Int4::Set2(&stru_B432C8, 0, 0, 0, 1065353216); /*0x7558c9*/
  Matrix3x4::Identity(&stru_B44318); /*0x7558d3*/
  v55 = -dbl_B43F00; /*0x7558e6*/
  Matrix3x3::RotateX(stru_B44318.m_Data, v55); /*0x7558e9*/
  v56 = -dbl_B44498; /*0x7558f7*/
  Matrix2D::Rotate(stru_B44318.m_Data, v56); /*0x7558ff*/
  v52 = &stru_B450B8; /*0x755904*/
  do /*0x755919*/
    result = Matrix3x4::Identity(v52++); /*0x75590b*/
  while ( (int)v52 < (int)&dword_B45178 ); /*0x755919*/
  stru_B450B8.m_Data[5] = -1082130432; /*0x75591e*/
  dword_B450E8 = 0; /*0x755928*/
  dword_B450EC = 1065353216; /*0x755932*/
  dword_B450F8 = 1065353216; /*0x75593c*/
  dword_B450FC = 0; /*0x755946*/
  dword_B45118 = -1082130432; /*0x755950*/
  dword_B45148 = 0; /*0x75595a*/
  dword_B4514C = -1082130432; /*0x755964*/
  dword_B45158 = -1082130432; /*0x75596e*/
  dword_B4515C = 0; /*0x755978*/
  return result; /*0x75591d*/
}



// ==== 0x007559B0  CopyAudioData  this=-  sig=csp ====
char *__fastcall AudioData_Copy(char *a1, int a2)
{
  qmemcpy(a1, (char *)&stru_B45188 + 48 * a2, 0x30u); /*0x7559c7*/
  return a1; /*0x7559c9*/
}



// ==== 0x007559D0  sub_7559D0  this=-  sig=ida-proto ====
float *__fastcall sub_7559D0(float *a1, float *a2, void *a3, double a4)
{
  float *result; // eax
  float *v5; // eax
  float v6; // [esp+0h] [ebp-4Ch]
  _DWORD v7[4]; // [esp+Ch] [ebp-40h] BYREF
  float v8[12]; // [esp+1Ch] [ebp-30h] BYREF

  result = a2; /*0x7559d3*/
  if ( a1 == a2 ) /*0x7559d9*/
  {
    qmemcpy(a3, (char *)&stru_B43F10 + 48 * (_DWORD)a2, 0x30u); /*0x7559f0*/
  }
  else
  {
    v6 = a4; /*0x755a04*/
    v5 = (float *)Math::QuaternionSlerp(v7, &stru_B44348[4 * (_DWORD)a1], &stru_B44348[4 * (_DWORD)a2], v6); /*0x755a1a*/
    result = ToQuaternionMatrix(v8, v5); /*0x755a25*/
    qmemcpy(a3, result, 0x30u); /*0x755a35*/
  }
  return result; /*0x7559f2*/
}



// ==== 0x00755A40  InterpolateVoxelAnimPose  this=-  sig=csp ====
void *__fastcall VoxelAnim_InterpolatePose(void *a1, int a2, int a3, double a4)
{
  int v5; // eax
  const void *v6; // esi
  float v8; // [esp+0h] [ebp-50h]
  _BYTE v9[48]; // [esp+20h] [ebp-30h] BYREF

  if ( a2 == a3 ) /*0x755a4e*/
  {
    qmemcpy(a1, (char *)&stru_B45188 + 48 * a3, 0x30u); /*0x755aa7*/
    return a1; /*0x755aaa*/
  }
  else
  {
    v8 = a4; /*0x755a5c*/
    v5 = Math::QuaternionSlerp((int)&stru_B43188 + 16 * a3, v8); /*0x755a6e*/
    v6 = (const void *)ToQuaternionMatrix(v9, v5); /*0x755a83*/
    qmemcpy(a1, v6, 0x30u); /*0x755a89*/
    return a1; /*0x755a87*/
  }
}



// ==== 0x00755AC0  sub_755AC0  this=-  sig=ida-proto ====
int __fastcall sub_755AC0(int a1)
{
  return dword_8467FC[a1]; /*0x755ac7*/
}



// ==== 0x00755AD0  sub_755AD0  this=-  sig=ida-proto ====
char __fastcall sub_755AD0(unsigned int *a1, int *a2)
{
  double v2; // st7
  unsigned int v4; // [esp+14h] [ebp-4h]

  v4 = *a1; /*0x755ad8*/
  v2 = Math::CalcAngle((double)(int)a1[1] - (double)a2[1], (double)*a2 - (double)(int)*a1); /*0x755afa*/
  LOWORD(v4) = Math::RoundToInt((v2 - 1.570796326794897) * -10430.06004058427); /*0x755b10*/
  return 32 - (((v4 >> 7) + 1) >> 1); /*0x755b26*/
}



// ==== 0x00755B30  VoxelModel::BuildDrawList  this=VoxelModel  sig=ida-proto ====
void __fastcall VoxelModel::BuildDrawList(float *a1, int a2, int a3)
{
  int v4; // ebx
  double v5; // st7
  double v6; // st7
  float *v7; // [esp+0h] [ebp-88h]
  float v8; // [esp+10h] [ebp-78h]
  int v9; // [esp+14h] [ebp-74h]
  int v10; // [esp+18h] [ebp-70h]
  int v11[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v12[12]; // [esp+28h] [ebp-60h] BYREF
  float v13[12]; // [esp+58h] [ebp-30h] BYREF

  v4 = 12 * a2; /*0x755b47*/
  Math::BuildRotationMatrix(v12, &flt_B444A0[3 * a2], flt_8467E4[a3]); /*0x755b56*/
  qmemcpy(a1, MultiplyMatrix3x4(v13, a1, v12), 0x30u); /*0x755b74*/
  v8 = *(float *)(v4 + 11809496) * -3.0; /*0x755b82*/
  v5 = *(float *)(v4 + 11809500) * -3.0; /*0x755b8c*/
  *(float *)v11 = v8; /*0x755b96*/
  *(float *)&v9 = v5; /*0x755b9e*/
  v6 = *(float *)(v4 + 11809504) * -3.0; /*0x755ba8*/
  v11[1] = v9; /*0x755bb5*/
  *(float *)&v10 = v6; /*0x755bb9*/
  v11[2] = v10; /*0x755bc1*/
  Matrix3x3::Multiply(v11, v7); /*0x755bc5*/
  Vector::MatrixMulVectorMath((int *)a1, 0.0, 0.0, 3.0); /*0x755bd5*/
}



// ==== 0x00755BF0  sub_755BF0  this=-  sig=ida-proto ====
float *__fastcall sub_755BF0(float *a1, int a2, int a3)
{
  double v4; // st7
  int v5; // edx
  double v6; // st7
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  v4 = flt_B432D8[3 * a2] * 1.5; /*0x755bff*/
  v5 = 12 * a2 + 11809496; /*0x755c05*/
  v7 = v4; /*0x755c0c*/
  v8 = *(float *)(v5 + 4) * 1.5; /*0x755c1d*/
  v6 = *(float *)(v5 + 8) * 1.5; /*0x755c24*/
  *a1 = v7; /*0x755c2c*/
  v9 = v6; /*0x755c32*/
  a1[1] = v8; /*0x755c36*/
  a1[2] = v9; /*0x755c3d*/
  return a1; /*0x755c40*/
}



// ==== 0x00755C50  j_TechnoClass_ClearArrays  this=-  sig=ida-proto ====
// attributes: thunk
int j_TechnoClass_ClearArrays()
{
  return TechnoClass::ClearArrays();
}



// ==== 0x00755C60  Locomotor_Update  this=-  sig=csp ====
char *__fastcall sub_755C60(char *a1, int a2)
{
  char *result; // eax

  result = a1; /*0x755c63*/
  if ( a2 >= 4 ) /*0x755c65*/
    a2 -= 4; /*0x755c67*/
  qmemcpy(a1, (char *)&stru_B450B8 + 48 * a2, 0x30u); /*0x755c7f*/
  return result; /*0x755c83*/
}



// ==== 0x00755C90  sub_755C90  this=-  sig=ida-proto ====
int sub_755C90()
{
  dword_B45580 = 0; /*0x755c92*/
  dword_B45584 = 0; /*0x755c97*/
  dword_B45588 = 0; /*0x755c9c*/
  dword_B4558C = 0; /*0x755ca1*/
  return 0; /*0x755ca6*/
}



// ==== 0x00755CB0  ObjectClass::method_755CB0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_755CB0(ObjectClass *this)
{
  LOBYTE(this->AbstractClass) = 0; /*0x755cb4*/
  this->? = 0; /*0x755cb6*/
  this->? = 0; /*0x755cb9*/
  this->? = 0; /*0x755cbc*/
  this->? = 0; /*0x755cbf*/
  this->? = 0; /*0x755cc2*/
  this->? = 0; /*0x755cc5*/
  return &this->AbstractClass; /*0x755cc8*/
}



// ==== 0x00755CD0  File::LoadFileVXL  this=File  sig=csp ====
_DWORD *__thiscall File::LoadFileVXL(File *this, int a2, int a3)
{
  this->__pad_0[0] = 0; /*0x755cd9*/
  *(_DWORD *)&this->File_field_0x2[2] = 0; /*0x755cdb*/
  *(_DWORD *)&this->__pad_6[2] = 0; /*0x755cde*/
  *(_DWORD *)&this->__pad_6[6] = 0; /*0x755ce1*/
  *(_DWORD *)&this->__pad_6[10] = 0; /*0x755ce4*/
  *(_DWORD *)&this->__pad_6[14] = 0; /*0x755ce7*/
  *(_DWORD *)&this->__pad_6[18] = 0; /*0x755cea*/
  if ( !Voxel::SortDepth((int)this, a2, a3) ) /*0x755cf5*/
    this->__pad_0[0] = 1; /*0x755cfe*/
  return this->__pad_0; /*0x755d03*/
}



// ==== 0x00755D10  WaveClass::Destroy  this=WaveClass  sig=csp ====
void __thiscall WaveClass::Destroy(WaveClass *this)
{
  void *abstractFlags; // eax
  void *nextArrayIndex; // eax

  if ( this->? ) /*0x755d16*/
    __3_YAXPAX_Z((void *)this->?); /*0x755d1e*/
  abstractFlags = (void *)this->?; /*0x755d26*/
  this->? = 0; /*0x755d29*/
  if ( abstractFlags ) /*0x755d2e*/
    __3_YAXPAX_Z(abstractFlags); /*0x755d31*/
  nextArrayIndex = (void *)this->?; /*0x755d39*/
  this->? = 0; /*0x755d3c*/
  if ( nextArrayIndex ) /*0x755d41*/
    __3_YAXPAX_Z(nextArrayIndex); /*0x755d44*/
  this->? = 0; /*0x755d4c*/
}



// ==== 0x00755DB0  Voxel::SortDepth  this=File  sig=csp ====
int __thiscall Voxel_Sort_Depth(int this, int a2, int a3)
{
  unsigned int v4; // edi
  void *v5; // eax
  void *v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  void *v11; // eax
  int v12; // ebp
  float v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // edi
  void *v17; // eax
  void *v18; // ecx
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  char *v23; // ebp
  int v24; // ebp
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  int v28; // eax
  int v29; // ebp
  double v30; // st7
  double v31; // st6
  double v32; // st5
  int v33; // eax
  int v34; // ecx
  float v35; // eax
  float v36; // edx
  int v37; // eax
  int v38; // ecx
  float v39; // eax
  float v40; // edx
  int v41; // eax
  int v42; // ecx
  float v43; // eax
  float v44; // edx
  int v45; // eax
  int v46; // ecx
  float v47; // eax
  double v48; // st5
  float v49; // edx
  double v50; // st5
  double v51; // st5
  int v52; // ecx
  float v53; // eax
  float v54; // edx
  double v55; // st5
  int v56; // eax
  int v57; // ecx
  float v58; // eax
  float v59; // edx
  double v60; // st6
  int v61; // ecx
  float v62; // eax
  float v63; // edx
  double v64; // st7
  double v65; // st7
  int v66; // ecx
  float v67; // edx
  float v68; // eax
  unsigned int v69; // ecx
  void *v70; // eax
  void *v71; // eax
  float v72; // [esp+2Ch] [ebp-13Ch] BYREF
  float v73; // [esp+30h] [ebp-138h]
  float v74; // [esp+34h] [ebp-134h]
  float v75; // [esp+38h] [ebp-130h]
  float v76; // [esp+3Ch] [ebp-12Ch]
  float v77; // [esp+40h] [ebp-128h]
  float v78; // [esp+44h] [ebp-124h]
  float v79; // [esp+48h] [ebp-120h]
  float v80; // [esp+4Ch] [ebp-11Ch]
  float v81; // [esp+50h] [ebp-118h]
  float v82; // [esp+54h] [ebp-114h]
  float v83; // [esp+58h] [ebp-110h]
  float v84; // [esp+5Ch] [ebp-10Ch]
  float v85; // [esp+60h] [ebp-108h]
  float v86; // [esp+64h] [ebp-104h]
  float v87; // [esp+68h] [ebp-100h]
  float v88; // [esp+6Ch] [ebp-FCh]
  float v89; // [esp+70h] [ebp-F8h]
  float v90; // [esp+74h] [ebp-F4h]
  float v91; // [esp+78h] [ebp-F0h]
  float v92; // [esp+7Ch] [ebp-ECh]
  float v93; // [esp+80h] [ebp-E8h]
  char v94[4]; // [esp+84h] [ebp-E4h] BYREF
  float v95; // [esp+88h] [ebp-E0h]
  float v96; // [esp+8Ch] [ebp-DCh]
  float v97; // [esp+90h] [ebp-D8h]
  float v98; // [esp+94h] [ebp-D4h]
  float v99; // [esp+98h] [ebp-D0h]
  float v100; // [esp+9Ch] [ebp-CCh]
  _DWORD v101[4]; // [esp+A0h] [ebp-C8h] BYREF
  char v102[48]; // [esp+B0h] [ebp-B8h] BYREF
  float v103; // [esp+E0h] [ebp-88h]
  float v104; // [esp+E4h] [ebp-84h]
  float v105; // [esp+E8h] [ebp-80h]
  float v106; // [esp+ECh] [ebp-7Ch]
  float v107; // [esp+F0h] [ebp-78h]
  float v108; // [esp+F4h] [ebp-74h]
  char v109; // [esp+F8h] [ebp-70h]
  char v110; // [esp+F9h] [ebp-6Fh]
  char v111; // [esp+FAh] [ebp-6Eh]
  char v112; // [esp+FBh] [ebp-6Dh]
  char v113[16]; // [esp+FCh] [ebp-6Ch] BYREF
  unsigned int v114; // [esp+10Ch] [ebp-5Ch]
  int v115; // [esp+110h] [ebp-58h]
  int v116; // [esp+114h] [ebp-54h]
  int v117; // [esp+118h] [ebp-50h]
  _DWORD v118[12]; // [esp+11Ch] [ebp-4Ch] BYREF
  char v119[16]; // [esp+14Ch] [ebp-1Ch] BYREF
  int v120; // [esp+15Ch] [ebp-Ch]
  int v121; // [esp+160h] [ebp-8h]
  int v122; // [esp+164h] [ebp-4h]

  v4 = 0; /*0x755dbc*/
  if ( *(_DWORD *)(this + 16) ) /*0x755dbe*/
    __3_YAXPAX_Z(*(void **)(this + 16)); /*0x755dc6*/
  v5 = *(void **)(this + 20); /*0x755dce*/
  *(_DWORD *)(this + 16) = 0; /*0x755dd1*/
  if ( v5 ) /*0x755dd6*/
    __3_YAXPAX_Z(v5); /*0x755dd9*/
  v6 = *(void **)(this + 24); /*0x755de1*/
  *(_DWORD *)(this + 20) = 0; /*0x755de4*/
  if ( v6 ) /*0x755de9*/
    __3_YAXPAX_Z(v6); /*0x755dec*/
  v7 = a2; /*0x755df4*/
  *(_DWORD *)(this + 24) = 0; /*0x755dfb*/
  if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1) ) /*0x755e09*/
    return 0; /*0x755e09*/
  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v113, 32); /*0x755e1d*/
  v8 = v115; /*0x755e20*/
  v9 = v116; /*0x755e27*/
  v10 = v117; /*0x755e2e*/
  *(_DWORD *)(this + 4) = v115; /*0x755e35*/
  *(_DWORD *)(this + 8) = v9; /*0x755e3b*/
  *(_DWORD *)(this + 12) = v10; /*0x755e42*/
  v11 = __2_YAPAXI_Z(12 * v8); /*0x755e45*/
  v12 = *(_DWORD *)(this + 8); /*0x755e4a*/
  *(_DWORD *)(this + 16) = v11; /*0x755e4d*/
  v13 = COERCE_FLOAT(__2_YAPAXI_Z(164 * v12)); /*0x755e5c*/
  v72 = v13; /*0x755e66*/
  if ( v13 == 0.0 ) /*0x755e6a*/
  {
    v13 = 0.0; /*0x755e99*/
  }
  else
  {
    v14 = v12 - 1; /*0x755e6c*/
    if ( v12 - 1 >= 0 ) /*0x755e71*/
    {
      v15 = LODWORD(v13) + 64; /*0x755e73*/
      v16 = v14 + 1; /*0x755e76*/
      do /*0x755e8f*/
      {
        Array::ForEach(v15, 12, 8, __0Iostream_init_QAE_XZ_8); /*0x755e83*/
        v15 += 164; /*0x755e88*/
        --v16; /*0x755e8e*/
      }
      while ( v16 ); /*0x755e8f*/
      v13 = v72; /*0x755e91*/
      v4 = 0; /*0x755e95*/
    }
  }
  *(float *)(this + 20) = v13; /*0x755e9b*/
  v17 = __2_YAPAXI_Z(*(_DWORD *)(this + 12)); /*0x755ea2*/
  v18 = *(void **)(this + 16); /*0x755ea7*/
  *(_DWORD *)(this + 24) = v17; /*0x755eaf*/
  if ( !v18 ) /*0x755eb2*/
  {
LABEL_67:
    v71 = *(void **)(this + 20); /*0x756453*/
    *(_DWORD *)(this + 16) = 0; /*0x756456*/
    if ( v71 ) /*0x75645b*/
      __3_YAXPAX_Z(v71); /*0x75645e*/
    v70 = *(void **)(this + 24); /*0x756466*/
    *(_DWORD *)(this + 20) = 0; /*0x756469*/
    if ( !v70 ) /*0x75646e*/
      goto LABEL_71; /*0x75646e*/
    goto LABEL_70; /*0x75646e*/
  }
  if ( !*(_DWORD *)(this + 20) || !v17 ) /*0x755ec3*/
  {
    __3_YAXPAX_Z(v18); /*0x75644b*/
    goto LABEL_67; /*0x75644b*/
  }
  if ( a3 ) /*0x755ed0*/
  {
    VoxelPalette::Init(&unk_B2FB78, &g_VoxelColorPalette); /*0x755ee7*/
    if ( (*(int (__thiscall **)(int, float *, int))(*(_DWORD *)a2 + 36))(a2, &v72, 1) != 1 ) /*0x755efd*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x755f03*/
      if ( *(_DWORD *)(this + 16) ) /*0x755f06*/
        __3_YAXPAX_Z(*(void **)(this + 16)); /*0x755f0e*/
      v19 = *(void **)(this + 20); /*0x755f16*/
      *(_DWORD *)(this + 16) = 0; /*0x755f19*/
      if ( v19 ) /*0x755f1e*/
        __3_YAXPAX_Z(v19); /*0x755f21*/
      v20 = *(void **)(this + 24); /*0x755f29*/
      *(_DWORD *)(this + 20) = 0; /*0x755f2c*/
      if ( !v20 ) /*0x755f31*/
        goto LABEL_32; /*0x755f31*/
      goto LABEL_31; /*0x755f31*/
    }
    if ( (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v94, 1) != 1 ) /*0x755f46*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x755f4c*/
      if ( *(_DWORD *)(this + 16) ) /*0x755f4f*/
        __3_YAXPAX_Z(*(void **)(this + 16)); /*0x755f57*/
      v21 = *(void **)(this + 20); /*0x755f5f*/
      *(_DWORD *)(this + 16) = 0; /*0x755f62*/
      if ( v21 ) /*0x755f67*/
        __3_YAXPAX_Z(v21); /*0x755f6a*/
      v20 = *(void **)(this + 24); /*0x755f72*/
      *(_DWORD *)(this + 20) = 0; /*0x755f75*/
      if ( !v20 ) /*0x755f7a*/
        goto LABEL_32; /*0x755f7a*/
LABEL_31:
      __3_YAXPAX_Z(v20); /*0x755f7c*/
LABEL_32:
      *(_DWORD *)(this + 24) = 0; /*0x755f85*/
      VoxelPalette::Reset(v118); /*0x755f8f*/
      return 0; /*0x755fa0*/
    }
    v118[0] = LOBYTE(v72); /*0x755fb6*/
    v118[1] = (unsigned __int8)v94[0]; /*0x755fbd*/
    v23 = (char *)&unk_B2FB79; /*0x755fc4*/
    do /*0x755ff6*/
    {
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v23 - 1, 1); /*0x755fd3*/
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v23, 1); /*0x755fdd*/
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v23 + 1, 1); /*0x755fea*/
      v23 += 3; /*0x755fed*/
    }
    while ( v23 < byte_B2FE79 ); /*0x755ff6*/
    if ( v114 > 1 ) /*0x756002*/
      (*(void (__thiscall **)(int, unsigned int, int))(*(_DWORD *)a2 + 40))(a2, 768 * v114 - 768, 1); /*0x756016*/
    GenerateLightRemapTable(0, 0); /*0x756022*/
    VoxelPalette::Reset(v118); /*0x75602e*/
  }
  else
  {
    (*(void (__thiscall **)(int, unsigned int, int))(*(_DWORD *)a2 + 40))(a2, 770 * v114, 1); /*0x75604d*/
  }
  if ( !*(_DWORD *)(this + 4) ) /*0x756055*/
  {
LABEL_43:
    if ( (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 36))( /*0x7560b5*/
           a2,
           *(_DWORD *)(this + 24),
           *(_DWORD *)(this + 12)) == *(_DWORD *)(this + 12) )
    {
      v28 = *(_DWORD *)(this + 8); /*0x75612d*/
      v72 = 0.0; /*0x756134*/
      if ( !v28 ) /*0x756138*/
      {
LABEL_59:
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 52))(v7); /*0x7563fe*/
        return 1; /*0x756414*/
      }
      v29 = 0; /*0x75613e*/
      while ( (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v7 + 36))(v7, v101, 92) == 92 ) /*0x756158*/
      {
        *(_BYTE *)(*(_DWORD *)(this + 20) + v29 + 160) = v109; /*0x756168*/
        *(_BYTE *)(*(_DWORD *)(this + 20) + v29 + 161) = v110; /*0x756179*/
        *(_BYTE *)(*(_DWORD *)(this + 20) + v29 + 162) = v111; /*0x75618a*/
        *(_BYTE *)(*(_DWORD *)(this + 20) + v29 + 163) = v112; /*0x75619b*/
        *(float *)(*(_DWORD *)(this + 20) + v29 + 12) = *(float *)&v101[3]; /*0x7561b3*/
        qmemcpy((void *)(*(_DWORD *)(this + 20) + v29 + 16), (const void *)Matrix::Copy12Float(v102), 0x30u); /*0x7561d2*/
        v30 = v103; /*0x7561d4*/
        v31 = v104; /*0x7561db*/
        v32 = v105; /*0x7561e2*/
        v95 = v106; /*0x7561fe*/
        v73 = v106; /*0x756210*/
        v33 = *(_DWORD *)(this + 20); /*0x756214*/
        v74 = v107; /*0x756217*/
        v96 = v107; /*0x75621b*/
        v97 = v105; /*0x756226*/
        v75 = v108; /*0x75622e*/
        v34 = v33 + v29 + 64; /*0x756236*/
        v35 = v107; /*0x75623a*/
        v85 = v106; /*0x75623e*/
        *(float *)v34 = v106; /*0x756242*/
        v36 = v97; /*0x756244*/
        *(float *)(v34 + 4) = v35; /*0x75624a*/
        v86 = v31; /*0x75624d*/
        *(float *)(v34 + 8) = v36; /*0x756251*/
        v37 = *(_DWORD *)(this + 20); /*0x756254*/
        v87 = v32; /*0x75625d*/
        v38 = v37 + v29 + 76; /*0x756261*/
        v39 = v86; /*0x756265*/
        *(float *)v38 = v85; /*0x75626b*/
        v40 = v87; /*0x75626d*/
        v98 = v30; /*0x756271*/
        *(float *)(v38 + 4) = v39; /*0x756275*/
        *(float *)(v38 + 8) = v40; /*0x75627a*/
        v41 = *(_DWORD *)(this + 20); /*0x75627d*/
        v99 = v31; /*0x756284*/
        v42 = v41 + v29 + 88; /*0x756288*/
        v43 = v99; /*0x75628c*/
        v100 = v32; /*0x756292*/
        *(float *)v42 = v98; /*0x756299*/
        v44 = v100; /*0x75629d*/
        *(float *)(v42 + 4) = v43; /*0x7562a4*/
        v91 = v30; /*0x7562a7*/
        v92 = v74; /*0x7562af*/
        *(float *)(v42 + 8) = v44; /*0x7562b3*/
        v45 = *(_DWORD *)(this + 20); /*0x7562b6*/
        v93 = v32; /*0x7562bd*/
        v46 = v45 + v29 + 100; /*0x7562c5*/
        v47 = v92; /*0x7562c9*/
        v76 = v73; /*0x7562cd*/
        v48 = v74; /*0x7562d1*/
        *(float *)v46 = v91; /*0x7562d5*/
        v49 = v93; /*0x7562d7*/
        v77 = v48; /*0x7562db*/
        v50 = v75; /*0x7562df*/
        *(float *)(v46 + 4) = v47; /*0x7562e3*/
        v78 = v50; /*0x7562e6*/
        v51 = v73; /*0x7562ea*/
        *(float *)(v46 + 8) = v49; /*0x7562ee*/
        v52 = *(_DWORD *)(this + 20) + v29 + 112; /*0x7562f8*/
        v53 = v77; /*0x7562fc*/
        v79 = v51; /*0x756300*/
        *(float *)v52 = v76; /*0x756304*/
        v54 = v78; /*0x756306*/
        *(float *)(v52 + 4) = v53; /*0x75630c*/
        v80 = v31; /*0x75630f*/
        v55 = v75; /*0x756313*/
        *(float *)(v52 + 8) = v54; /*0x756317*/
        v56 = *(_DWORD *)(this + 20); /*0x75631a*/
        v81 = v55; /*0x756321*/
        v57 = v56 + v29 + 124; /*0x756325*/
        v58 = v80; /*0x756329*/
        *(float *)v57 = v79; /*0x75632f*/
        v59 = v81; /*0x756331*/
        v82 = v30; /*0x756335*/
        *(float *)(v57 + 4) = v58; /*0x756339*/
        v83 = v31; /*0x75633c*/
        v60 = v75; /*0x756340*/
        *(float *)(v57 + 8) = v59; /*0x756344*/
        v61 = *(_DWORD *)(this + 20) + v29 + 136; /*0x75634e*/
        v62 = v83; /*0x756355*/
        v84 = v60; /*0x756359*/
        *(float *)v61 = v82; /*0x75635d*/
        v63 = v84; /*0x75635f*/
        v88 = v30; /*0x756363*/
        v64 = v74; /*0x756367*/
        *(float *)(v61 + 4) = v62; /*0x75636b*/
        v89 = v64; /*0x75636e*/
        v65 = v75; /*0x756372*/
        *(float *)(v61 + 8) = v63; /*0x756376*/
        v66 = *(_DWORD *)(this + 20) + v29 + 148; /*0x756380*/
        v90 = v65; /*0x756387*/
        *(float *)v66 = v88; /*0x75638b*/
        v67 = v90; /*0x756391*/
        *(float *)(v66 + 4) = v89; /*0x756395*/
        v7 = a2; /*0x756398*/
        v29 += 164; /*0x75639f*/
        *(float *)(v66 + 8) = v67; /*0x7563a5*/
        *(_DWORD *)(*(_DWORD *)(this + 20) + v29 - 164) = *(_DWORD *)(this + 24) + v101[0]; /*0x7563b7*/
        *(_DWORD *)(*(_DWORD *)(this + 20) + v29 - 160) = *(_DWORD *)(this + 24) + v101[1]; /*0x7563cd*/
        v68 = v72; /*0x7563e1*/
        *(_DWORD *)(*(_DWORD *)(this + 20) + v29 - 156) = *(_DWORD *)(this + 24) + v101[2]; /*0x7563e7*/
        v69 = *(_DWORD *)(this + 8); /*0x7563ee*/
        LODWORD(v72) = LODWORD(v68) + 1; /*0x7563f4*/
        if ( LODWORD(v68) + 1 >= v69 ) /*0x7563f8*/
          goto LABEL_59; /*0x7563f8*/
      }
      if ( *(_DWORD *)(this + 16) ) /*0x756417*/
        __3_YAXPAX_Z(*(void **)(this + 16)); /*0x75641f*/
      v25 = *(void **)(this + 20); /*0x756427*/
      *(_DWORD *)(this + 16) = 0; /*0x75642a*/
      if ( v25 ) /*0x75642f*/
        goto LABEL_63; /*0x75642f*/
    }
    else
    {
      if ( *(_DWORD *)(this + 16) ) /*0x7560b7*/
        __3_YAXPAX_Z(*(void **)(this + 16)); /*0x7560c1*/
      v25 = *(void **)(this + 20); /*0x7560c9*/
      *(_DWORD *)(this + 16) = 0; /*0x7560cc*/
      if ( v25 ) /*0x7560d1*/
LABEL_63:
        __3_YAXPAX_Z(v25); /*0x756431*/
    }
    v70 = *(void **)(this + 24); /*0x75643a*/
    *(_DWORD *)(this + 20) = 0; /*0x75643d*/
    if ( !v70 ) /*0x756442*/
    {
LABEL_71:
      *(_DWORD *)(this + 24) = 0; /*0x756479*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 52))(v7); /*0x756480*/
      return 0; /*0x756486*/
    }
LABEL_70:
    __3_YAXPAX_Z(v70); /*0x756470*/
    goto LABEL_71; /*0x756471*/
  }
  v24 = 0; /*0x756057*/
  while ( (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 36))(a2, v119, 28) == 28 ) /*0x75606d*/
  {
    ++v4; /*0x756079*/
    *(_DWORD *)(*(_DWORD *)(this + 16) + v24) = v120; /*0x75607a*/
    *(_DWORD *)(*(_DWORD *)(this + 16) + v24 + 4) = v121; /*0x756087*/
    *(_BYTE *)(*(_DWORD *)(this + 16) + v24 + 8) = v122; /*0x756095*/
    v24 += 12; /*0x75609c*/
    if ( v4 >= *(_DWORD *)(this + 4) ) /*0x7560a1*/
      goto LABEL_43; /*0x7560a1*/
  }
  if ( *(_DWORD *)(this + 16) ) /*0x7560dc*/
    __3_YAXPAX_Z(*(void **)(this + 16)); /*0x7560e6*/
  v26 = *(void **)(this + 20); /*0x7560ee*/
  *(_DWORD *)(this + 16) = 0; /*0x7560f1*/
  if ( v26 ) /*0x7560f6*/
    __3_YAXPAX_Z(v26); /*0x7560f9*/
  v27 = *(void **)(this + 24); /*0x756101*/
  *(_DWORD *)(this + 20) = 0; /*0x756104*/
  if ( v27 ) /*0x756109*/
    __3_YAXPAX_Z(v27); /*0x75610c*/
  *(_DWORD *)(this + 24) = 0; /*0x756114*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x75611b*/
  return 0; /*0x755f94*/
}



// ==== 0x007564A0  ObjectClass::method_7564A0  this=ObjectClass  sig=csp ====
int __thiscall sub_7564A0(ObjectClass *this, int a2)
{
  return this->? + 12 * a2; /*0x7564ad*/
}



// ==== 0x007564B0  VoxelSection::GetInfo  this=VoxelSection  sig=csp ====
int __thiscall VoxelSection::GetInfo(VoxelSection *this, int a2, int a3)
{
  return *((_DWORD *)this + 5) + 164 * (a3 + *(_DWORD *)(*((_DWORD *)this + 4) + 12 * a2)); /*0x7564cf*/
}



// ==== 0x007564E0  ObjectClass::method_7564E0  this=ObjectClass  sig=csp ====
float *__thiscall sub_7564E0(ObjectClass *this, float *a2, int a3, int a4)
{
  int uniqueId; // edx
  int abstractFlags; // ecx
  int v6; // eax
  double v7; // st7
  float *v8; // eax
  double v9; // st6
  float v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]

  uniqueId = this->?; /*0x7564e7*/
  abstractFlags = this->?; /*0x7564ea*/
  v6 = 41 * (a4 + *(_DWORD *)(uniqueId + 12 * a3)); /*0x7564fc*/
  v7 = *(float *)(abstractFlags + 4 * v6 + 112) + *(float *)(abstractFlags + 4 * v6 + 88); /*0x756503*/
  v8 = (float *)(abstractFlags + 164 * (a4 + *(_DWORD *)(uniqueId + 12 * a3))); /*0x75650b*/
  v14 = v8[29] + v8[23]; /*0x756511*/
  v9 = v8[30] + v8[24]; /*0x756518*/
  v15 = v9; /*0x756521*/
  v11 = v7 * 0.5; /*0x75652b*/
  *a2 = v11; /*0x75653d*/
  v12 = v14 * 0.5; /*0x75653f*/
  a2[1] = v12; /*0x756551*/
  v13 = v15 * 0.5; /*0x756554*/
  a2[2] = v13; /*0x75655c*/
  return a2; /*0x75655f*/
}



// ==== 0x00756570  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_756570(ObjectClass *this)
{
  return (int)this->? + 164 * (int)this->? + 12 * (int)this->? + 28; /*0x75658c*/
}



// ==== 0x00756590  Voxel::ProcessColor  this=Voxel  sig=csp ====
int __thiscall Voxel::ProcessColor(Voxel *this, _DWORD *a2, float *a3)
{
  int v4; // ebx
  int v5; // esi
  unsigned __int8 v6; // dl
  int v7; // ecx
  float *v8; // edi
  float *v9; // edx
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  int v13; // esi
  int result; // eax
  float *v15; // [esp+10h] [ebp-44h]
  unsigned __int8 v16; // [esp+14h] [ebp-40h]
  float v17; // [esp+14h] [ebp-40h]
  unsigned __int8 v18; // [esp+1Ch] [ebp-38h]
  _DWORD v19[6]; // [esp+20h] [ebp-34h] BYREF
  __int16 v20; // [esp+38h] [ebp-1Ch]
  __int16 v21; // [esp+3Ah] [ebp-1Ah]
  __int16 v22; // [esp+3Ch] [ebp-18h]
  __int16 v23; // [esp+3Eh] [ebp-16h]
  __int16 v24; // [esp+40h] [ebp-14h]
  __int16 v25; // [esp+42h] [ebp-12h]
  __int16 v26; // [esp+44h] [ebp-10h]
  __int16 v27; // [esp+46h] [ebp-Eh]
  __int16 v28; // [esp+48h] [ebp-Ch]
  __int16 v29; // [esp+4Ah] [ebp-Ah]
  __int16 v30; // [esp+4Ch] [ebp-8h]
  __int16 v31; // [esp+4Eh] [ebp-6h]
  unsigned __int8 v32; // [esp+50h] [ebp-4h]
  unsigned __int8 v33; // [esp+51h] [ebp-3h]
  unsigned __int8 v34; // [esp+52h] [ebp-2h]
  float *v35; // [esp+58h] [ebp+4h]
  float v36; // [esp+5Ch] [ebp+8h]

  v4 = this->Voxel_field_0x14[0] + 164 * (a2[2] + *(_DWORD *)(this->Voxel_field_0x10[0] + 12 * a2[1])); /*0x7565b8*/
  v5 = 9 * a2[3]; /*0x7565be*/
  v16 = *(_BYTE *)(v4 + 161); /*0x7565cd*/
  v6 = *(_BYTE *)(v4 + 162); /*0x7565d1*/
  v32 = *(_BYTE *)(v4 + 160); /*0x7565db*/
  v18 = v6; /*0x7565e3*/
  v33 = v16; /*0x7565e7*/
  v34 = v6; /*0x7565eb*/
  v19[0] = *(_DWORD *)v4; /*0x7565f1*/
  v19[1] = *(_DWORD *)(v4 + 4); /*0x7565f8*/
  v7 = 3 * dword_8468C4[v5]; /*0x756605*/
  v19[2] = *(_DWORD *)(v4 + 8); /*0x756608*/
  v8 = (float *)&a2[v7 + 10]; /*0x75660c*/
  v35 = (float *)&a2[3 * dword_8468CC[v5] + 10]; /*0x756630*/
  v9 = (float *)&a2[3 * dword_8468D0[v5] + 10]; /*0x756637*/
  v10 = dword_8468E0[v5]; /*0x756641*/
  v19[4] = dword_8468DC[v5]; /*0x756647*/
  v15 = v9; /*0x75664f*/
  v11 = dword_8468D8[v5]; /*0x756658*/
  v19[5] = v32 * v10; /*0x756661*/
  v19[3] = (v32 - 1) * dword_8468D4[v5] + v32 * (v16 - 1) * v11; /*0x75668a*/
  v20 = Math::RoundToInt((*v8 + 128.0 - *a3) * 256.0); /*0x7566a7*/
  v21 = Math::RoundToInt((v8[1] + 128.0 - a3[1]) * 256.0); /*0x7566cb*/
  v12 = (double)v32; /*0x7566e7*/
  v22 = Math::RoundToInt((v8[2] + 128.0 - a3[2]) * 256.0); /*0x7566eb*/
  v23 = Math::RoundToInt(v12); /*0x75670a*/
  v26 = Math::RoundToInt(v12); /*0x756726*/
  v29 = Math::RoundToInt(v12); /*0x756757*/
  v24 = Math::RoundToInt(v12); /*0x756773*/
  v27 = Math::RoundToInt(v12); /*0x75678d*/
  v30 = Math::RoundToInt(v12); /*0x7567ab*/
  if ( dword_B43180 ) /*0x7567b7*/
  {
    v25 = Math::RoundToInt(v12); /*0x7567d0*/
    v36 = (float)v16; /*0x75670f*/
    v28 = Math::RoundToInt((v35[2] - v8[2]) / v36 * 256.0); /*0x7567f0*/
    v17 = (float)v18; /*0x756740*/
    v31 = Math::RoundToInt((v15[2] - v8[2]) / v17 * 256.0); /*0x75680a*/
  }
  v13 = dword_8468C0[v5]; /*0x756818*/
  if ( dword_B43180 ) /*0x756820*/
    v13 |= 2u; /*0x756822*/
  if ( dword_B43184 ) /*0x75682c*/
    v13 |= 4u; /*0x75682e*/
  if ( !*(_BYTE *)(v4 + 163) ) /*0x756831*/
    v13 |= 8u; /*0x75683b*/
  LOBYTE(result) = ((char (__usercall *)@<al>(int@<ebx>, int@<edi>, int))funcs_756843[v13])(v4, (int)v8, (int)v19); /*0x756843*/
  return result; /*0x75684d*/
}



// ==== 0x00756860  ObjectClass::InitializeTileAudioOcclusion  this=ObjectClass  sig=csp ====
int __thiscall InitializeTileAudioOcclusion(ObjectClass *this, int a2, float *a3)
{
  int uniqueId; // edx
  int abstractFlags; // ecx
  int v6; // edi
  double v7; // st7
  int v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // eax
  __int16 v12; // ax
  double v13; // st7
  __int16 v14; // ax
  double v15; // st7
  int v16; // eax
  double v17; // st7
  int v18; // eax
  double v19; // st7
  __int16 v20; // bp
  __int16 v21; // ax
  double v22; // st7
  __int16 v23; // ax
  _DWORD *v24; // ecx
  float *v25; // ebx
  int result; // eax
  int v27; // edx
  int v28; // esi
  unsigned __int8 v29; // dl
  int v30; // eax
  int v31; // ebp
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  int v35; // ebp
  int v36; // ecx
  int v37; // [esp+10h] [ebp-68h]
  int v38; // [esp+14h] [ebp-64h]
  int v39; // [esp+14h] [ebp-64h]
  int v40; // [esp+18h] [ebp-60h]
  int v41; // [esp+18h] [ebp-60h]
  _DWORD *v42; // [esp+1Ch] [ebp-5Ch]
  int v43; // [esp+20h] [ebp-58h]
  int v44; // [esp+24h] [ebp-54h]
  int v45; // [esp+28h] [ebp-50h]
  int v46; // [esp+2Ch] [ebp-4Ch]
  __int16 v47; // [esp+30h] [ebp-48h]
  _DWORD v48[2]; // [esp+34h] [ebp-44h] BYREF
  _DWORD v49[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  int v50; // [esp+48h] [ebp-30h]
  int v51; // [esp+50h] [ebp-28h]
  _BYTE v52[6]; // [esp+5Ch] [ebp-1Ch]
  _WORD v53[3]; // [esp+62h] [ebp-16h]
  _DWORD v54[4]; // [esp+68h] [ebp-10h]
  float v55; // [esp+7Ch] [ebp+4h]
  int v56; // [esp+7Ch] [ebp+4h]
  float *v57; // [esp+80h] [ebp+8h]
  float *v58; // [esp+80h] [ebp+8h]

  uniqueId = this->?; /*0x756865*/
  abstractFlags = this->?; /*0x75686d*/
  v6 = 0; /*0x756878*/
  v7 = *(float *)(a2 + 36); /*0x75687a*/
  v8 = 3 * *(_DWORD *)(a2 + 4); /*0x75687d*/
  v51 = 0; /*0x756880*/
  v9 = 41 * (*(_DWORD *)(a2 + 8) + *(_DWORD *)(uniqueId + 4 * v8)); /*0x756897*/
  LOBYTE(uniqueId) = *(_BYTE *)(abstractFlags + 4 * v9 + 160); /*0x75689a*/
  v10 = (v7 + 128.0 - *a3) * 256.0; /*0x7568a1*/
  v11 = abstractFlags + 4 * v9; /*0x7568a7*/
  LOBYTE(v44) = *(_BYTE *)(v11 + 161); /*0x7568bb*/
  v50 = *(_DWORD *)(v11 + 4); /*0x7568c4*/
  v37 = (unsigned __int8)uniqueId; /*0x7568c8*/
  v12 = Math::RoundToInt(v10); /*0x7568cc*/
  v13 = *(float *)(a2 + 40) + 128.0; /*0x7568d4*/
  *(_WORD *)v52 = v12; /*0x7568da*/
  v14 = Math::RoundToInt((v13 - a3[1]) * 256.0); /*0x7568e8*/
  v15 = (double)*(int *)(a2 + 64); /*0x7568ed*/
  *(_WORD *)&v52[2] = v14; /*0x7568f0*/
  LOWORD(v16) = Math::RoundToInt(v15 + *a3); /*0x7568f7*/
  v17 = (double)*(int *)(a2 + 68); /*0x7568fc*/
  *(_DWORD *)(a2 + 64) = v16; /*0x7568ff*/
  LOWORD(v18) = Math::RoundToInt(v17 + a3[1]); /*0x756905*/
  v19 = (double)v37; /*0x75690a*/
  v20 = v18; /*0x75690e*/
  *(_DWORD *)(a2 + 68) = v18; /*0x756910*/
  v47 = v18; /*0x756913*/
  v53[0] = Math::RoundToInt(v19); /*0x75692a*/
  v55 = (float)(unsigned __int8)v44; /*0x756946*/
  LOWORD(v54[0]) = Math::RoundToInt(v19); /*0x756965*/
  v21 = Math::RoundToInt(v19); /*0x756972*/
  v22 = *(float *)(a2 + 52) - *(float *)(a2 + 40); /*0x75697c*/
  v53[1] = v21; /*0x75697f*/
  v23 = Math::RoundToInt(v22 / v55 * 256.0); /*0x75698e*/
  v24 = *(_DWORD **)(a2 + 60); /*0x756993*/
  v25 = *(float **)v52; /*0x756996*/
  HIWORD(v54[0]) = v23; /*0x75699a*/
  v45 = *(_DWORD *)(a2 + 64); /*0x7569a2*/
  result = *(_DWORD *)&v52[2]; /*0x7569a6*/
  v42 = v24; /*0x7569ac*/
  v56 = *(_DWORD *)&v52[2]; /*0x7569b0*/
  if ( v24 ) /*0x7569b4*/
  {
    if ( (_BYTE)v44 ) /*0x7569c3*/
    {
      v44 = (unsigned __int8)v44; /*0x7569c9*/
      while ( 1 ) /*0x7569d7*/
      {
        v27 = v37; /*0x7569d7*/
        v40 = v6; /*0x7569db*/
        v57 = v25; /*0x7569e1*/
        v38 = result; /*0x7569e8*/
        if ( v37 ) /*0x7569ec*/
        {
          v43 = v37; /*0x7569f2*/
          do /*0x756aaa*/
          {
            if ( *(_DWORD *)(v50 + 4 * v6) != -1 ) /*0x7569fe*/
            {
              v28 = result & 0xFF00 | ((unsigned __int16)v25 >> 8); /*0x756a1b*/
              v29 = BYTE1(result); /*0x756a25*/
              v30 = *v24; /*0x756a27*/
              v31 = (unsigned __int16)(v29 + v20); /*0x756a35*/
              v48[0] = (unsigned __int16)(BYTE1(v25) + (_WORD)v45); /*0x756a3c*/
              v48[1] = v31; /*0x756a40*/
              v46 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(v30 + 40))(v24, v48); /*0x756a4b*/
              v32 = *v42; /*0x756a54*/
              v49[0] = (unsigned __int16)(BYTE1(v25) + (_WORD)v45) + 1; /*0x756a57*/
              v49[1] = v31; /*0x756a5b*/
              v33 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(v32 + 40))(v42, v49); /*0x756a5f*/
              v20 = v47; /*0x756a66*/
              v6 = v51; /*0x756a6a*/
              v34 = v33 == 0; /*0x756a73*/
              result = v56; /*0x756a75*/
              g_VoxelRenderBuffer[v28] = v46 == 0; /*0x756a79*/
              v24 = v42; /*0x756a7f*/
              g_VoxelDepthBuffer[v28] = v34; /*0x756a86*/
            }
            result += *(_DWORD *)&v53[1]; /*0x756a94*/
            LOWORD(v25) = v53[0] + (_WORD)v25; /*0x756a9a*/
            ++v6; /*0x756a9c*/
            v34 = v43 == 1; /*0x756a9d*/
            v56 = result; /*0x756a9e*/
            v51 = v6; /*0x756aa2*/
            --v43; /*0x756aa6*/
          }
          while ( !v34 ); /*0x756aaa*/
          v27 = v37; /*0x756ab0*/
        }
        v25 = (float *)((char *)v57 + v54[0]); /*0x756abf*/
        v56 = *(_DWORD *)((char *)v54 + 2) + v38; /*0x756ad2*/
        v51 = v27 + v40; /*0x756ad6*/
        result = --v44; /*0x756ade*/
        if ( !v44 ) /*0x756ae3*/
          break; /*0x756ae3*/
        result = *(_DWORD *)((char *)v54 + 2) + v38; /*0x7569cf*/
        v6 = v51; /*0x7569d3*/
      }
    }
  }
  else if ( (_BYTE)v44 ) /*0x756afc*/
  {
    v44 = (unsigned __int8)v44; /*0x756b02*/
    while ( 1 ) /*0x756b14*/
    {
      v41 = v6; /*0x756b14*/
      v58 = v25; /*0x756b1a*/
      v39 = result; /*0x756b21*/
      if ( v37 ) /*0x756b25*/
      {
        v35 = v37; /*0x756b27*/
        do /*0x756b64*/
        {
          if ( *(_DWORD *)(v50 + 4 * v6) != -1 ) /*0x756b31*/
          {
            v36 = result & 0xFF00 | ((unsigned __int16)v25 >> 8); /*0x756b46*/
            g_VoxelRenderBuffer[v36] = 1; /*0x756b4a*/
            g_VoxelDepthBuffer[v36] = 1; /*0x756b50*/
          }
          LOWORD(v25) = v53[0] + (_WORD)v25; /*0x756b5e*/
          LOWORD(result) = v53[1] + result; /*0x756b60*/
          ++v6; /*0x756b62*/
          --v35; /*0x756b63*/
        }
        while ( v35 ); /*0x756b64*/
      }
      v25 = (float *)((char *)v58 + v54[0]); /*0x756b75*/
      result = v44 - 1; /*0x756b8c*/
      v34 = v44 == 1; /*0x756b8c*/
      v51 = v37 + v41; /*0x756b8d*/
      --v44; /*0x756b91*/
      if ( v34 ) /*0x756b95*/
        break; /*0x756b95*/
      result = *(_DWORD *)((char *)v54 + 2) + v39; /*0x756b08*/
      v6 = v51; /*0x756b0c*/
    }
  }
  return result; /*0x756ae9*/
}



// ==== 0x00756BB0  AudioOcclusion::ComputeBoundingVertices  this=AudioOcclusion  sig=csp ====
int __thiscall AudioOcclusion::ComputeBoundingVertices(AudioOcclusion *this)
{
  unsigned int v2; // ecx
  int result; // eax
  int v4; // eax
  int v5; // ebx
  float *v6; // edx
  float v7; // [esp+4h] [ebp-78h]
  int v8; // [esp+8h] [ebp-74h]
  float v9; // [esp+8h] [ebp-74h]
  float v10; // [esp+Ch] [ebp-70h]
  int v11; // [esp+10h] [ebp-6Ch]
  int v12; // [esp+14h] [ebp-68h]
  float v13; // [esp+18h] [ebp-64h]
  float v14; // [esp+1Ch] [ebp-60h]
  float v15; // [esp+24h] [ebp-58h]

  v2 = 0; /*0x756bb6*/
  result = *((_DWORD *)this + 2); /*0x756bb8*/
  if ( result ) /*0x756bbd*/
  {
    result = 0; /*0x756bc4*/
    v11 = 0; /*0x756bc8*/
    do /*0x756dc0*/
    {
      v4 = *((_DWORD *)this + 5) + result; /*0x756bd1*/
      v5 = *(unsigned __int8 *)(v4 + 161); /*0x756bdb*/
      v12 = *(unsigned __int8 *)(v4 + 162); /*0x756bff*/
      v14 = (double)*(unsigned __int8 *)(v4 + 160) * 0.5; /*0x756c05*/
      v8 = -*(unsigned __int8 *)(v4 + 160); /*0x756c22*/
      v13 = (double)v5 * 0.5; /*0x756c29*/
      *(float *)(v4 + 64) = v14; /*0x756c39*/
      *(float *)(v4 + 68) = v13; /*0x756c48*/
      v15 = (double)-v12 * 0.5; /*0x756c4b*/
      *(float *)(v4 + 72) = v15; /*0x756c5d*/
      *(float *)(v4 + 76) = v14; /*0x756c64*/
      v10 = (double)-v5 * 0.5; /*0x756c6c*/
      *(float *)(v4 + 80) = v10; /*0x756c82*/
      *(float *)(v4 + 84) = v15; /*0x756c8f*/
      v7 = (double)v8 * 0.5; /*0x756c92*/
      *(float *)(v4 + 88) = v7; /*0x756ca2*/
      *(float *)(v4 + 92) = v10; /*0x756cae*/
      *(float *)(v4 + 96) = v15; /*0x756cb9*/
      *(float *)(v4 + 100) = v7; /*0x756cdd*/
      *(float *)(v4 + 104) = v13; /*0x756ce9*/
      *(float *)(v4 + 108) = v15; /*0x756cf0*/
      v9 = (double)v12 * 0.5; /*0x756cfa*/
      *(float *)(v4 + 112) = v14; /*0x756d02*/
      *(float *)(v4 + 116) = v13; /*0x756d0c*/
      *(float *)(v4 + 120) = v9; /*0x756d13*/
      *(float *)(v4 + 124) = v14; /*0x756d2d*/
      *(float *)(v4 + 128) = v10; /*0x756d34*/
      *(float *)(v4 + 132) = v9; /*0x756d3b*/
      v6 = (float *)(v4 + 136); /*0x756d5a*/
      v4 += 148; /*0x756d60*/
      ++v2; /*0x756d65*/
      *v6 = v7; /*0x756d66*/
      v6[1] = v10; /*0x756d6c*/
      v6[2] = v9; /*0x756d73*/
      *(float *)v4 = v7; /*0x756d98*/
      *(float *)(v4 + 4) = v13; /*0x756da1*/
      *(float *)(v4 + 8) = v9; /*0x756dab*/
      result = v11 + 164; /*0x756db5*/
      v11 += 164; /*0x756dbc*/
    }
    while ( v2 < *((_DWORD *)this + 2) ); /*0x756dc0*/
  }
  return result; /*0x756dc9*/
}



// ==== 0x00756DD0  VoxelModel::LoadVXLHeader  this=VoxelModel  sig=csp ====
char __usercall sub_756DD0@<al>(int a1@<ebx>, int a2@<edi>, int a3)
{
  unsigned int v4; // esi
  _WORD *v5; // eax
  __int16 v6; // dx
  char result; // al
  int v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // ebp
  unsigned __int8 v11; // dl
  unsigned __int8 *v12; // eax
  int v13; // edx
  _BYTE *v14; // eax
  unsigned int v15; // edx
  unsigned int i; // [esp+8h] [ebp-24h]
  unsigned int v17; // [esp+Ch] [ebp-20h]
  int v18; // [esp+14h] [ebp-18h]
  __int16 v19; // [esp+18h] [ebp-14h]
  __int16 v20; // [esp+1Ch] [ebp-10h]
  __int16 v21; // [esp+20h] [ebp-Ch]
  __int16 v22; // [esp+24h] [ebp-8h]
  int v23; // [esp+28h] [ebp-4h]
  int v24; // [esp+30h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x756dd7*/
  v4 = 1; /*0x756df0*/
  if ( *(_BYTE *)(a3 + 50) > 1u ) /*0x756df5*/
  {
    v5 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x756df7*/
    do /*0x756e1e*/
    {
      v6 = *(v5 - 1); /*0x756dfc*/
      v5 += 2; /*0x756e00*/
      *(v5 - 1) = *(_WORD *)(a3 + 42) + v6; /*0x756e07*/
      ++v4; /*0x756e13*/
      *v5 = *(_WORD *)(a3 + 44) + *(v5 - 2); /*0x756e14*/
    }
    while ( v4 < *(unsigned __int8 *)(a3 + 50) ); /*0x756e1e*/
  }
  result = *(_BYTE *)(a3 + 49); /*0x756e20*/
  LOWORD(v4) = *(_WORD *)(a3 + 24); /*0x756e23*/
  LOWORD(a2) = *(_WORD *)(a3 + 26); /*0x756e27*/
  v17 = 0; /*0x756e2b*/
  if ( result ) /*0x756e35*/
  {
    do /*0x756f63*/
    {
      v21 = v4; /*0x756e40*/
      v23 = *(_DWORD *)(a3 + 12); /*0x756e44*/
      v22 = a2; /*0x756e4d*/
      for ( i = 0; i < *(unsigned __int8 *)(a3 + 48); ++i ) /*0x756e48*/
      {
        v19 = v4; /*0x756e64*/
        v20 = a2; /*0x756e68*/
        v8 = *(_DWORD *)(*(_DWORD *)a3 + 4 * *(_DWORD *)(a3 + 12)); /*0x756e6c*/
        if ( v8 != -1 ) /*0x756e72*/
        {
          v9 = (unsigned __int8 *)(v8 + *(_DWORD *)(a3 + 8)); /*0x756e7b*/
          v10 = *(unsigned __int8 *)(a3 + 50); /*0x756e82*/
          if ( *(_BYTE *)(a3 + 50) ) /*0x756e7f*/
          {
            do /*0x756f00*/
            {
              v11 = *v9; /*0x756e88*/
              v12 = v9 + 1; /*0x756e8a*/
              v10 -= v11; /*0x756e99*/
              LOWORD(a1) = g_VoxelOffsetTable[v11]; /*0x756e9b*/
              v4 += a1; /*0x756ea3*/
              LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v11]); /*0x756ea5*/
              a2 += a1; /*0x756eaf*/
              v13 = *v12; /*0x756eb1*/
              v14 = v12 + 1; /*0x756eb3*/
              if ( v13 ) /*0x756eb6*/
              {
                v24 = v13; /*0x756eba*/
                v18 = v10 - v13; /*0x756ebe*/
                do /*0x756ef7*/
                {
                  LOBYTE(v13) = *v14; /*0x756ec2*/
                  v14 += 2; /*0x756ed4*/
                  a1 = BYTE1(v4) | a2 & 0xFF00; /*0x756eda*/
                  g_VoxelRenderBuffer[a1] = v13; /*0x756edc*/
                  LOWORD(v13) = *(_WORD *)(a3 + 42); /*0x756ee2*/
                  v4 += v13; /*0x756ee6*/
                  LOWORD(v13) = *(_WORD *)(a3 + 44); /*0x756ee8*/
                  a2 += v13; /*0x756eec*/
                  v13 = --v24; /*0x756ef2*/
                }
                while ( v24 ); /*0x756ef7*/
                v10 = v18; /*0x756ef9*/
              }
              v9 = v14 + 1; /*0x756efd*/
            }
            while ( v10 ); /*0x756f00*/
          }
        }
        LOWORD(v4) = v19 + *(_WORD *)(a3 + 30); /*0x756f10*/
        LOWORD(a2) = v20 + *(_WORD *)(a3 + 32); /*0x756f15*/
        *(_DWORD *)(a3 + 12) += *(_DWORD *)(a3 + 16); /*0x756f20*/
      }
      LOWORD(v4) = v21 + *(_WORD *)(a3 + 36); /*0x756f44*/
      LOWORD(a2) = v22 + *(_WORD *)(a3 + 38); /*0x756f49*/
      v15 = *(unsigned __int8 *)(a3 + 49); /*0x756f52*/
      *(_DWORD *)(a3 + 12) = v23 + *(_DWORD *)(a3 + 20); /*0x756f55*/
      result = ++v17; /*0x756f5c*/
    }
    while ( v17 < v15 ); /*0x756f63*/
  }
  return result; /*0x756f6b*/
}



// ==== 0x00756F80  VoxelModel::ParseSectionData  this=VoxelModel  sig=csp ====
char __usercall sub_756F80@<al>(unsigned int a1@<ebx>, int a2@<edi>, int a3)
{
  unsigned int v4; // esi
  _WORD *v5; // eax
  __int16 v6; // di
  char result; // al
  int v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // ebp
  int v11; // edx
  unsigned __int8 *v12; // eax
  unsigned int v13; // edx
  unsigned int i; // [esp+Ch] [ebp-24h]
  unsigned int v15; // [esp+10h] [ebp-20h]
  int v16; // [esp+14h] [ebp-1Ch]
  unsigned __int8 v17; // [esp+18h] [ebp-18h]
  __int16 v18; // [esp+1Ch] [ebp-14h]
  __int16 v19; // [esp+20h] [ebp-10h]
  __int16 v20; // [esp+24h] [ebp-Ch]
  __int16 v21; // [esp+28h] [ebp-8h]
  int v22; // [esp+2Ch] [ebp-4h]
  int v23; // [esp+34h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x756f89*/
  v4 = 1; /*0x756f9f*/
  if ( *(_BYTE *)(a3 + 50) > 1u ) /*0x756fa4*/
  {
    v5 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x756fa6*/
    do /*0x756fcd*/
    {
      v6 = *(_WORD *)(a3 + 42) + *(v5 - 1); /*0x756fb1*/
      v5 += 2; /*0x756fb5*/
      *(v5 - 1) = v6; /*0x756fb8*/
      ++v4; /*0x756fc4*/
      *v5 = *(v5 - 2) + *(_WORD *)(a3 + 44); /*0x756fc5*/
      a1 = *(unsigned __int8 *)(a3 + 50); /*0x756fc8*/
    }
    while ( v4 < a1 ); /*0x756fcd*/
  }
  result = *(_BYTE *)(a3 + 49); /*0x756fcf*/
  LOWORD(v4) = *(_WORD *)(a3 + 24); /*0x756fd2*/
  LOWORD(a2) = *(_WORD *)(a3 + 26); /*0x756fd6*/
  v15 = 0; /*0x756fdc*/
  if ( result ) /*0x756fe0*/
  {
    do /*0x75710d*/
    {
      v20 = v4; /*0x756fee*/
      v22 = *(_DWORD *)(a3 + 12); /*0x756ff2*/
      v21 = a2; /*0x756ffb*/
      for ( i = 0; i < *(unsigned __int8 *)(a3 + 48); ++i ) /*0x756ff6*/
      {
        v18 = v4; /*0x75700f*/
        v19 = a2; /*0x757013*/
        v8 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * *(_DWORD *)(a3 + 12)); /*0x757017*/
        if ( v8 != -1 ) /*0x75701d*/
        {
          v9 = (unsigned __int8 *)(v8 + *(_DWORD *)(a3 + 8)); /*0x757026*/
          v10 = *(unsigned __int8 *)(a3 + 50); /*0x75702d*/
          if ( *(_BYTE *)(a3 + 50) ) /*0x75702a*/
          {
            do /*0x7570aa*/
            {
              v11 = *v9; /*0x757035*/
              v12 = v9 - 1; /*0x757037*/
              if ( v11 ) /*0x75703a*/
              {
                v23 = v11; /*0x75703e*/
                v16 = v10 - v11; /*0x757042*/
                do /*0x75707b*/
                {
                  LOBYTE(v11) = *(v12 - 1); /*0x757046*/
                  a1 = BYTE1(v4) | a2 & 0xFF00; /*0x75705d*/
                  v12 -= 2; /*0x75705f*/
                  g_VoxelRenderBuffer[a1] = v11; /*0x757060*/
                  LOWORD(v11) = *(_WORD *)(a3 + 42); /*0x757066*/
                  v4 += v11; /*0x75706a*/
                  LOWORD(v11) = *(_WORD *)(a3 + 44); /*0x75706c*/
                  a2 += v11; /*0x757070*/
                  v11 = --v23; /*0x757076*/
                }
                while ( v23 ); /*0x75707b*/
                v10 = v16; /*0x75707d*/
              }
              v17 = *(v12 - 1); /*0x757085*/
              v9 = v12 - 2; /*0x757089*/
              LOWORD(a1) = g_VoxelOffsetTable[v17]; /*0x757094*/
              v4 += a1; /*0x75709c*/
              LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v17]); /*0x75709e*/
              a2 += a1; /*0x7570a6*/
              v10 -= v17; /*0x7570a8*/
            }
            while ( v10 ); /*0x7570aa*/
          }
        }
        LOWORD(v4) = v18 + *(_WORD *)(a3 + 30); /*0x7570ba*/
        LOWORD(a2) = v19 + *(_WORD *)(a3 + 32); /*0x7570bf*/
        *(_DWORD *)(a3 + 12) += *(_DWORD *)(a3 + 16); /*0x7570ca*/
      }
      LOWORD(v4) = v20 + *(_WORD *)(a3 + 36); /*0x7570ee*/
      LOWORD(a2) = v21 + *(_WORD *)(a3 + 38); /*0x7570f3*/
      v13 = *(unsigned __int8 *)(a3 + 49); /*0x7570fc*/
      *(_DWORD *)(a3 + 12) = v22 + *(_DWORD *)(a3 + 20); /*0x7570ff*/
      result = ++v15; /*0x757106*/
    }
    while ( v15 < v13 ); /*0x75710d*/
  }
  return result; /*0x757114*/
}



// ==== 0x00757120  ObjectClass::RenderVoxels  this=ObjectClass  sig=csp ====
char __usercall Voxel_Render@<al>(int *a1@<ebx>, int a2@<ebp>, int a3@<edi>, int *a4)
{
  int *v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // dx
  char result; // al
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  _BYTE *v12; // esi
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // al
  int v15; // eax
  char *v16; // esi
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // edx
  int *v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+18h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-20h]
  __int16 v27; // [esp+20h] [ebp-1Ch]
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+28h] [ebp-14h]
  __int16 v30; // [esp+2Ch] [ebp-10h]
  __int16 v31; // [esp+30h] [ebp-Ch]
  __int16 v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v4 = a4; /*0x757120*/
  g_VoxelOffsetTable[0] = 0; /*0x757127*/
  v5 = 1; /*0x757141*/
  if ( *((_BYTE *)a4 + 50) > 1u ) /*0x757146*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757148*/
    do /*0x75716f*/
    {
      v7 = *(v6 - 1); /*0x75714d*/
      v6 += 2; /*0x757151*/
      *(v6 - 1) = *((_WORD *)a4 + 21) + v7; /*0x757158*/
      ++v5; /*0x757164*/
      *v6 = *(v6 - 2) + *((_WORD *)a4 + 22); /*0x757165*/
    }
    while ( v5 < *((unsigned __int8 *)a4 + 50) ); /*0x75716f*/
  }
  LOWORD(a3) = *((_WORD *)a4 + 12); /*0x757175*/
  LOWORD(a2) = *((_WORD *)a4 + 13); /*0x757179*/
  LOWORD(a4) = *((_WORD *)a4 + 14); /*0x75717d*/
  result = *((_BYTE *)v4 + 49); /*0x757182*/
  v26 = 0; /*0x757185*/
  if ( result ) /*0x75718f*/
  {
    do /*0x757347*/
    {
      HIWORD(v9) = HIWORD(a4); /*0x757196*/
      v32 = (__int16)a4; /*0x75719d*/
      v33 = v4[3]; /*0x7571a6*/
      v30 = a3; /*0x7571aa*/
      v31 = a2; /*0x7571ae*/
      v25 = 0; /*0x7571b2*/
      if ( *((_BYTE *)v4 + 48) ) /*0x7571a1*/
      {
        do /*0x757306*/
        {
          v29 = (__int16)a4; /*0x7571c7*/
          v10 = (int *)*v4; /*0x7571cb*/
          v27 = a3; /*0x7571cd*/
          v28 = a2; /*0x7571d1*/
          v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7571d5*/
          if ( v11 != (int *)-1 ) /*0x7571db*/
          {
            v12 = (char *)v11 + v4[2]; /*0x7571e4*/
            v11 = (int *)*((unsigned __int8 *)v4 + 50); /*0x7571e8*/
            v22 = v11; /*0x7571ed*/
            if ( *((_BYTE *)v4 + 50) ) /*0x7571e8*/
            {
              do /*0x7572c6*/
              {
                LOBYTE(v10) = *v12; /*0x7571f7*/
                v13 = v12 + 1; /*0x7571f9*/
                v14 = (unsigned __int8)v10; /*0x7571fe*/
                LOWORD(v10) = *((_WORD *)v4 + 23) * (unsigned __int8)v10; /*0x757206*/
                LOWORD(a1) = g_VoxelOffsetTable[v14]; /*0x757210*/
                a3 += (int)a1; /*0x757218*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v14]); /*0x75721a*/
                a2 += (int)a1; /*0x757222*/
                a1 = (int *)((char *)a4 + (_DWORD)v10); /*0x757228*/
                v10 = (int *)((char *)v22 - v14); /*0x75722e*/
                v15 = *v13; /*0x757232*/
                v16 = (char *)(v13 + 1); /*0x757234*/
                a4 = a1; /*0x757237*/
                v22 = v10; /*0x75723b*/
                if ( v15 ) /*0x75723f*/
                {
                  v24 = v15; /*0x757243*/
                  v22 = (int *)((char *)v10 - v15); /*0x757247*/
                  do /*0x7572bd*/
                  {
                    v23 = *v16; /*0x75724f*/
                    v17 = BYTE1(a3); /*0x757260*/
                    v18 = v17 | a2 & 0xFF00; /*0x757263*/
                    v16 += 2; /*0x757276*/
                    if ( (unsigned __int16)((unsigned __int16)a4 >> 8) > (unsigned __int8)byte_B1D5E0[v18] ) /*0x75727c*/
                    {
                      byte_B1D5E0[v18] = BYTE1(a4); /*0x757282*/
                      g_VoxelRenderBuffer[v18] = v23; /*0x757288*/
                      g_VoxelDepthBuffer[v18] = v23; /*0x75728e*/
                      byte_B1D5E1[v18] = BYTE1(a4); /*0x757294*/
                    }
                    LOWORD(v18) = *((_WORD *)v4 + 21); /*0x75729a*/
                    LOWORD(v17) = *((_WORD *)v4 + 22); /*0x75729e*/
                    a3 += v18; /*0x7572a2*/
                    LOWORD(v18) = *((_WORD *)v4 + 23); /*0x7572a4*/
                    a2 += v17; /*0x7572a8*/
                    v10 = (int *)((char *)a4 + v18); /*0x7572ae*/
                    v19 = v24 == 1; /*0x7572b4*/
                    a4 = (int *)((char *)a4 + v18); /*0x7572b5*/
                    --v24; /*0x7572b9*/
                  }
                  while ( !v19 ); /*0x7572bd*/
                }
                HIWORD(v11) = HIWORD(v22); /*0x7572bf*/
                v12 = v16 + 1; /*0x7572c3*/
              }
              while ( v22 ); /*0x7572c6*/
            }
          }
          LOWORD(v11) = v29 + *((_WORD *)v4 + 17); /*0x7572d3*/
          LOWORD(a3) = v27 + *((_WORD *)v4 + 15); /*0x7572e0*/
          LOWORD(a2) = v28 + *((_WORD *)v4 + 16); /*0x7572e5*/
          a4 = v11; /*0x7572ea*/
          v20 = *((unsigned __int8 *)v4 + 48); /*0x7572f5*/
          v4[3] += v4[4]; /*0x7572f8*/
          v9 = (int *)++v25; /*0x7572ff*/
        }
        while ( v25 < v20 ); /*0x757306*/
      }
      LOWORD(v9) = v32 + *((_WORD *)v4 + 20); /*0x757314*/
      LOWORD(a3) = v30 + *((_WORD *)v4 + 18); /*0x757321*/
      LOWORD(a2) = v31 + *((_WORD *)v4 + 19); /*0x757326*/
      a4 = v9; /*0x75732b*/
      v21 = *((unsigned __int8 *)v4 + 49); /*0x757336*/
      v4[3] = v33 + v4[5]; /*0x757339*/
      result = ++v26; /*0x757340*/
    }
    while ( v26 < v21 ); /*0x757347*/
  }
  return result; /*0x75734e*/
}



// ==== 0x00757360  ObjectClass::ProcessVoxelDepthSamples  this=ObjectClass  sig=csp ====
char __usercall ProcessVoxelDepthSamples@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // eax
  unsigned __int8 *v14; // esi
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // [esp+10h] [ebp-30h]
  char v20; // [esp+14h] [ebp-2Ch]
  unsigned __int8 v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-24h]
  unsigned int v24; // [esp+20h] [ebp-20h]
  __int16 v25; // [esp+24h] [ebp-1Ch]
  __int16 v26; // [esp+28h] [ebp-18h]
  __int16 v27; // [esp+2Ch] [ebp-14h]
  __int16 v28; // [esp+30h] [ebp-10h]
  __int16 v29; // [esp+34h] [ebp-Ch]
  __int16 v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v4 = a4; /*0x757360*/
  g_VoxelOffsetTable[0] = 0; /*0x757369*/
  v5 = 1; /*0x757380*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x757385*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757387*/
    do /*0x7573ae*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x757392*/
      v6 += 2; /*0x757396*/
      *(v6 - 1) = v7; /*0x757399*/
      ++v5; /*0x7573a5*/
      *v6 = *(_WORD *)(a4 + 44) + *(v6 - 2); /*0x7573a6*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x7573a9*/
    }
    while ( v5 < a1 ); /*0x7573ae*/
  }
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x7573b4*/
  LOWORD(a2) = *(_WORD *)(a4 + 26); /*0x7573b8*/
  LOWORD(a4) = *(_WORD *)(a4 + 28); /*0x7573bc*/
  result = *(_BYTE *)(v4 + 49); /*0x7573c1*/
  v24 = 0; /*0x7573c4*/
  if ( result ) /*0x7573ca*/
  {
    do /*0x757585*/
    {
      v28 = a3; /*0x7573d7*/
      v31 = *(_DWORD *)(v4 + 12); /*0x7573db*/
      HIWORD(v9) = HIWORD(a4); /*0x7573df*/
      v30 = a4; /*0x7573e3*/
      v29 = a2; /*0x7573ec*/
      v23 = 0; /*0x7573f0*/
      if ( *(_BYTE *)(v4 + 48) ) /*0x7573e7*/
      {
        do /*0x757544*/
        {
          v27 = a4; /*0x757401*/
          v10 = *(_DWORD *)(v4 + 4); /*0x757405*/
          v25 = a3; /*0x757408*/
          v26 = a2; /*0x75740c*/
          v11 = *(_DWORD *)(v10 + 4 * *(_DWORD *)(v4 + 12)); /*0x757410*/
          if ( v11 != -1 ) /*0x757416*/
          {
            v12 = (unsigned __int8 *)(v11 + *(_DWORD *)(v4 + 8)); /*0x75741f*/
            v11 = *(unsigned __int8 *)(v4 + 50); /*0x757423*/
            v19 = v11; /*0x757428*/
            if ( *(_BYTE *)(v4 + 50) ) /*0x757423*/
            {
              do /*0x757504*/
              {
                v13 = *v12; /*0x757434*/
                v14 = v12 - 1; /*0x757436*/
                if ( v13 ) /*0x757439*/
                {
                  v22 = v13; /*0x757443*/
                  v19 -= v13; /*0x757449*/
                  do /*0x7574bf*/
                  {
                    v20 = *(v14 - 1); /*0x757453*/
                    v14 -= 2; /*0x757464*/
                    v15 = BYTE1(a3); /*0x757465*/
                    v16 = v15 | a2 & 0xFF00; /*0x757468*/
                    if ( (unsigned __int16)BYTE1(a4) > (unsigned __int8)byte_B1D5E0[v16] ) /*0x75747e*/
                    {
                      byte_B1D5E0[v16] = BYTE1(a4); /*0x757484*/
                      g_VoxelRenderBuffer[v16] = v20; /*0x75748a*/
                      g_VoxelDepthBuffer[v16] = v20; /*0x757490*/
                      byte_B1D5E1[v16] = BYTE1(a4); /*0x757496*/
                    }
                    LOWORD(v16) = *(_WORD *)(v4 + 42); /*0x75749c*/
                    LOWORD(v15) = *(_WORD *)(v4 + 44); /*0x7574a0*/
                    a3 += v16; /*0x7574a4*/
                    LOWORD(v16) = *(_WORD *)(v4 + 46); /*0x7574a6*/
                    a2 += v15; /*0x7574aa*/
                    v10 = v16 + a4; /*0x7574b0*/
                    v17 = v22 == 1; /*0x7574b6*/
                    a4 += v16; /*0x7574b7*/
                    --v22; /*0x7574bb*/
                  }
                  while ( !v17 ); /*0x7574bf*/
                }
                v21 = *(v14 - 1); /*0x7574c5*/
                v12 = v14 - 2; /*0x7574c9*/
                LOWORD(v10) = *(_WORD *)(v4 + 46) * v21; /*0x7574d2*/
                v11 = v21; /*0x7574d7*/
                LOWORD(a1) = g_VoxelOffsetTable[v21]; /*0x7574dc*/
                a3 += a1; /*0x7574e4*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v21]); /*0x7574e6*/
                a2 += a1; /*0x7574ee*/
                a1 = v10 + a4; /*0x7574f4*/
                v10 = v19 - v21; /*0x7574fa*/
                v17 = v19 == v21; /*0x7574fa*/
                a4 = a1; /*0x7574fc*/
                v19 = v10; /*0x757500*/
              }
              while ( !v17 ); /*0x757504*/
            }
          }
          LOWORD(v11) = v27 + *(_WORD *)(v4 + 34); /*0x757511*/
          LOWORD(a3) = v25 + *(_WORD *)(v4 + 30); /*0x75751e*/
          LOWORD(a2) = v26 + *(_WORD *)(v4 + 32); /*0x757523*/
          a4 = v11; /*0x757528*/
          *(_DWORD *)(v4 + 12) += *(_DWORD *)(v4 + 16); /*0x757535*/
          v9 = v23 + 1; /*0x75753d*/
          v23 = v9; /*0x757540*/
        }
        while ( v9 < *(unsigned __int8 *)(v4 + 48) ); /*0x757544*/
      }
      LOWORD(v9) = v30 + *(_WORD *)(v4 + 40); /*0x757552*/
      LOWORD(a3) = v28 + *(_WORD *)(v4 + 36); /*0x75755f*/
      LOWORD(a2) = v29 + *(_WORD *)(v4 + 38); /*0x757564*/
      a4 = v9; /*0x757569*/
      v18 = *(unsigned __int8 *)(v4 + 49); /*0x757574*/
      *(_DWORD *)(v4 + 12) = v31 + *(_DWORD *)(v4 + 20); /*0x757577*/
      result = ++v24; /*0x75757e*/
    }
    while ( v24 < v18 ); /*0x757585*/
  }
  return result; /*0x75758b*/
}



// ==== 0x007575A0  VoxelRenderer::DrawSection  this=VoxelRenderer  sig=csp ====
char __usercall VoxelRenderer::DrawSection@<al>(VoxelRenderer *this, int a2@<ebp>, int a3@<edi>, int a4)
{
  int v4; // ebx
  unsigned int v5; // ecx
  _WORD *v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned __int8 *v12; // eax
  unsigned __int8 v13; // cl
  unsigned __int8 *v14; // eax
  int v15; // ecx
  unsigned __int8 *v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // ecx
  int v21; // [esp+10h] [ebp-24h]
  unsigned int i; // [esp+14h] [ebp-20h]
  unsigned int v23; // [esp+18h] [ebp-1Ch]
  int v24; // [esp+1Ch] [ebp-18h]
  __int16 v25; // [esp+20h] [ebp-14h]
  __int16 v26; // [esp+24h] [ebp-10h]
  __int16 v27; // [esp+28h] [ebp-Ch]
  __int16 v28; // [esp+2Ch] [ebp-8h]
  int VoxelRenderer_field_0x0C; // [esp+30h] [ebp-4h]
  unsigned __int8 thisa; // [esp+38h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x7575a3*/
  v5 = 1; /*0x7575b5*/
  if ( *((_BYTE *)this + 50) > 1u ) /*0x7575c4*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x7575c6*/
    do /*0x7575ed*/
    {
      v8 = *(v7 - 1); /*0x7575cb*/
      v7 += 2; /*0x7575cf*/
      *(v7 - 1) = *((_WORD *)this + 21) + v8; /*0x7575d6*/
      ++v5; /*0x7575e2*/
      *v7 = *((_WORD *)this + 22) + *(v7 - 2); /*0x7575e3*/
    }
    while ( v5 < *((unsigned __int8 *)this + 50) ); /*0x7575ed*/
  }
  LOBYTE(v9) = *((_BYTE *)this + 49); /*0x7575ef*/
  LOWORD(a3) = this->VoxelRenderer_field_0x18; /*0x7575f2*/
  LOWORD(a2) = HIWORD(this->VoxelRenderer_field_0x18); /*0x7575f6*/
  v23 = 0; /*0x7575fa*/
  if ( (_BYTE)v9 ) /*0x757604*/
  {
    do /*0x75777d*/
    {
      v27 = a3; /*0x75760e*/
      VoxelRenderer_field_0x0C = this->VoxelRenderer_field_0x0C; /*0x757612*/
      v28 = a2; /*0x75761b*/
      for ( i = 0; i < *((unsigned __int8 *)this + 48); ++i ) /*0x757616*/
      {
        v25 = a3; /*0x757632*/
        v26 = a2; /*0x757636*/
        v10 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * this->VoxelRenderer_field_0x0C); /*0x75763a*/
        if ( v10 != -1 ) /*0x757640*/
        {
          v11 = *((unsigned __int8 *)this + 50); /*0x75764b*/
          v12 = (unsigned __int8 *)(v10 + this->VoxelRenderer_field_0x08); /*0x75764e*/
          if ( *((_BYTE *)this + 50) ) /*0x75764b*/
          {
            do /*0x757716*/
            {
              v13 = *v12; /*0x757658*/
              v14 = v12 + 1; /*0x75765a*/
              v11 -= v13; /*0x757669*/
              LOWORD(v4) = g_VoxelOffsetTable[v13]; /*0x75766b*/
              a3 += v4; /*0x757673*/
              LOWORD(v4) = HIWORD(g_VoxelOffsetTable[v13]); /*0x757675*/
              a2 += v4; /*0x75767f*/
              v15 = *v14; /*0x757681*/
              v16 = v14 + 1; /*0x757683*/
              if ( v15 ) /*0x757686*/
              {
                v21 = v15; /*0x75768e*/
                v24 = v11 - v15; /*0x757692*/
                do /*0x75770d*/
                {
                  thisa = v16[1]; /*0x75769c*/
                  v4 = *v16; /*0x7576b2*/
                  v16 += 2; /*0x7576b8*/
                  v17 = BYTE1(a3) | a2 & 0xFF00; /*0x7576d6*/
                  v18 = (unsigned __int8)g_VoxelShadeTable[thisa] << 8; /*0x7576e2*/
                  LOBYTE(v18) = g_VoxelColorPalette[v18 + v4]; /*0x7576e5*/
                  g_VoxelRenderBuffer[v17] = v18; /*0x7576ec*/
                  g_VoxelDepthBuffer[v17] = v18; /*0x7576f2*/
                  LOWORD(v17) = *((_WORD *)this + 21); /*0x7576f8*/
                  LOWORD(v18) = *((_WORD *)this + 22); /*0x7576fc*/
                  a3 += v17; /*0x757700*/
                  a2 += v18; /*0x757706*/
                  --v21; /*0x757709*/
                }
                while ( v21 ); /*0x75770d*/
                v11 = v24; /*0x75770f*/
              }
              v12 = v16 + 1; /*0x757713*/
            }
            while ( v11 ); /*0x757716*/
          }
        }
        LOWORD(a3) = v25 + *((_WORD *)this + 15); /*0x75772a*/
        LOWORD(a2) = v26 + this->u32_10; /*0x75772f*/
        this->VoxelRenderer_field_0x0C += this->VoxelRenderer_field_0x10; /*0x75773a*/
      }
      LOWORD(a3) = v27 + *((_WORD *)this + 18); /*0x75775e*/
      LOWORD(a2) = v28 + *((_WORD *)this + 19); /*0x757763*/
      v9 = v23 + 1; /*0x757770*/
      v19 = *((unsigned __int8 *)this + 49); /*0x757771*/
      this->VoxelRenderer_field_0x0C = VoxelRenderer_field_0x0C + this->VoxelRenderer_field_0x14; /*0x757774*/
      v23 = v9; /*0x757779*/
    }
    while ( v9 < v19 ); /*0x75777d*/
  }
  return v9; /*0x757784*/
}



// ==== 0x00757790  VoxelRenderer::DrawSectionLines  this=VoxelRenderer  sig=csp ====
char __usercall VoxelRenderer::DrawSectionLines@<al>(VoxelRenderer *this, int a2@<ebp>, int a3@<edi>, int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // ecx
  _WORD *v7; // eax
  __int16 v8; // di
  char result; // al
  int v10; // eax
  int v11; // edx
  unsigned __int8 *v12; // ecx
  int v13; // eax
  unsigned __int8 *v14; // ecx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned __int8 v19; // [esp+10h] [ebp-28h]
  int v20; // [esp+14h] [ebp-24h]
  unsigned int v21; // [esp+18h] [ebp-20h]
  unsigned int v22; // [esp+1Ch] [ebp-1Ch]
  int v23; // [esp+20h] [ebp-18h]
  __int16 v24; // [esp+24h] [ebp-14h]
  __int16 v25; // [esp+28h] [ebp-10h]
  __int16 v26; // [esp+2Ch] [ebp-Ch]
  __int16 v27; // [esp+30h] [ebp-8h]
  int VoxelRenderer_field_0x0C; // [esp+34h] [ebp-4h]
  unsigned __int8 thisa; // [esp+3Ch] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757795*/
  v6 = 1; /*0x7577aa*/
  if ( *((_BYTE *)this + 50) > 1u ) /*0x7577b3*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x7577b5*/
    do /*0x7577dc*/
    {
      v8 = *((_WORD *)this + 21) + *(v7 - 1); /*0x7577c0*/
      v7 += 2; /*0x7577c4*/
      *(v7 - 1) = v8; /*0x7577c7*/
      ++v6; /*0x7577d3*/
      *v7 = *((_WORD *)this + 22) + *(v7 - 2); /*0x7577d4*/
      v4 = *((unsigned __int8 *)this + 50); /*0x7577d7*/
    }
    while ( v6 < v4 ); /*0x7577dc*/
  }
  result = *((_BYTE *)this + 49); /*0x7577de*/
  LOWORD(a3) = this->VoxelRenderer_field_0x18; /*0x7577e1*/
  LOWORD(a2) = HIWORD(this->VoxelRenderer_field_0x18); /*0x7577e5*/
  v22 = 0; /*0x7577eb*/
  if ( result ) /*0x7577ef*/
  {
    do /*0x757965*/
    {
      v26 = a3; /*0x7577fc*/
      VoxelRenderer_field_0x0C = this->VoxelRenderer_field_0x0C; /*0x757800*/
      v27 = a2; /*0x757809*/
      v21 = 0; /*0x75780d*/
      if ( this->q00C ) /*0x757804*/
      {
        do /*0x757931*/
        {
          v24 = a3; /*0x75781d*/
          v25 = a2; /*0x757821*/
          v10 = *(_DWORD *)(this->VoxelRenderer_field_0x04 + 4 * this->VoxelRenderer_field_0x0C); /*0x757825*/
          if ( v10 != -1 ) /*0x75782b*/
          {
            v11 = *((unsigned __int8 *)this + 50); /*0x757836*/
            v12 = (unsigned __int8 *)(v10 + this->VoxelRenderer_field_0x08); /*0x757839*/
            if ( *((_BYTE *)this + 50) ) /*0x757836*/
            {
              do /*0x7578fe*/
              {
                v13 = *v12; /*0x757845*/
                v14 = v12 - 1; /*0x757847*/
                if ( v13 ) /*0x75784a*/
                {
                  v20 = v13; /*0x757852*/
                  v23 = v11 - v13; /*0x757856*/
                  do /*0x7578d0*/
                  {
                    thisa = *v14; /*0x75785d*/
                    v14 -= 2; /*0x75786b*/
                    v4 = v14[1]; /*0x757890*/
                    v15 = BYTE1(a3) | a2 & 0xFF00; /*0x757899*/
                    v16 = (unsigned __int8)g_VoxelShadeTable[thisa] << 8; /*0x7578a5*/
                    LOBYTE(v16) = g_VoxelColorPalette[v16 + v4]; /*0x7578a8*/
                    g_VoxelRenderBuffer[v15] = v16; /*0x7578af*/
                    g_VoxelDepthBuffer[v15] = v16; /*0x7578b5*/
                    LOWORD(v15) = *((_WORD *)this + 21); /*0x7578bb*/
                    LOWORD(v16) = *((_WORD *)this + 22); /*0x7578bf*/
                    a3 += v15; /*0x7578c3*/
                    a2 += v16; /*0x7578c9*/
                    --v20; /*0x7578cc*/
                  }
                  while ( v20 ); /*0x7578d0*/
                  v11 = v23; /*0x7578d2*/
                }
                v19 = *(v14 - 1); /*0x7578da*/
                v12 = v14 - 2; /*0x7578de*/
                LOWORD(v4) = g_VoxelOffsetTable[v19]; /*0x7578e8*/
                a3 += v4; /*0x7578f0*/
                LOWORD(v4) = HIWORD(g_VoxelOffsetTable[v19]); /*0x7578f2*/
                a2 += v4; /*0x7578fa*/
                v11 -= v19; /*0x7578fc*/
              }
              while ( v11 ); /*0x7578fe*/
            }
          }
          LOWORD(a3) = v24 + *((_WORD *)this + 15); /*0x757916*/
          LOWORD(a2) = v25 + this->u32_10; /*0x75791b*/
          v17 = *((unsigned __int8 *)this + 48); /*0x757922*/
          v4 = this->VoxelRenderer_field_0x10 + this->VoxelRenderer_field_0x0C; /*0x757925*/
          this->VoxelRenderer_field_0x0C = v4; /*0x757928*/
          ++v21; /*0x75792d*/
        }
        while ( v21 < v17 ); /*0x757931*/
      }
      LOWORD(a3) = v26 + *((_WORD *)this + 18); /*0x757946*/
      LOWORD(a2) = v27 + *((_WORD *)this + 19); /*0x75794b*/
      v18 = *((unsigned __int8 *)this + 49); /*0x757954*/
      this->VoxelRenderer_field_0x0C = VoxelRenderer_field_0x0C + this->VoxelRenderer_field_0x14; /*0x757957*/
      result = ++v22; /*0x75795e*/
    }
    while ( v22 < v18 ); /*0x757965*/
  }
  return result; /*0x75796b*/
}



// ==== 0x00757980  ObjectClass::ProcessVoxelColorScanline  this=ObjectClass  sig=csp ====
char __usercall ProcessVoxelColorScanline@<al>(unsigned int a1@<edx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
  unsigned int v6; // esi
  _WORD *v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // esi
  unsigned __int8 v12; // al
  unsigned __int8 *v13; // esi
  int v14; // eax
  unsigned __int8 *v15; // esi
  int v16; // eax
  unsigned __int16 v17; // dx
  unsigned __int8 v18; // bl
  unsigned __int8 *v19; // esi
  unsigned __int8 v20; // bp
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int8 v24; // [esp+10h] [ebp-34h]
  unsigned int v25; // [esp+14h] [ebp-30h]
  int v26; // [esp+18h] [ebp-2Ch]
  int v27; // [esp+1Ch] [ebp-28h]
  unsigned int v28; // [esp+20h] [ebp-24h]
  unsigned int v29; // [esp+24h] [ebp-20h]
  __int16 v30; // [esp+28h] [ebp-1Ch]
  __int16 v31; // [esp+2Ch] [ebp-18h]
  __int16 v32; // [esp+30h] [ebp-14h]
  __int16 v33; // [esp+34h] [ebp-10h]
  __int16 v34; // [esp+38h] [ebp-Ch]
  __int16 v35; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]
  int v37; // [esp+48h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757987*/
  v6 = 1; /*0x7579a1*/
  if ( *(_BYTE *)(a5 + 50) > 1u ) /*0x7579a6*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x7579a8*/
    do /*0x7579cf*/
    {
      v8 = *(v7 - 1); /*0x7579ad*/
      v7 += 2; /*0x7579b1*/
      *(v7 - 1) = *(_WORD *)(a5 + 42) + v8; /*0x7579b8*/
      ++v6; /*0x7579c4*/
      *v7 = *(_WORD *)(a5 + 44) + *(v7 - 2); /*0x7579c5*/
      a1 = *(unsigned __int8 *)(a5 + 50); /*0x7579ca*/
    }
    while ( v6 < a1 ); /*0x7579cf*/
  }
  LOBYTE(v9) = *(_BYTE *)(a5 + 49); /*0x7579d1*/
  LOWORD(a4) = *(_WORD *)(a5 + 24); /*0x7579d4*/
  LOWORD(a3) = *(_WORD *)(a5 + 26); /*0x7579d8*/
  LOWORD(a1) = *(_WORD *)(a5 + 28); /*0x7579dc*/
  v29 = 0; /*0x7579e2*/
  if ( (_BYTE)v9 ) /*0x7579ea*/
  {
    do /*0x757bd7*/
    {
      v33 = a4; /*0x7579f4*/
      v36 = *(_DWORD *)(a5 + 12); /*0x7579f8*/
      v34 = a3; /*0x757a01*/
      v35 = a1; /*0x757a05*/
      v28 = 0; /*0x757a09*/
      if ( *(_BYTE *)(a5 + 48) ) /*0x7579fc*/
      {
        do /*0x757b9a*/
        {
          v30 = a4; /*0x757a1c*/
          v31 = a3; /*0x757a20*/
          v10 = *(_DWORD *)(*(_DWORD *)a5 + 4 * *(_DWORD *)(a5 + 12)); /*0x757a24*/
          v32 = a1; /*0x757a27*/
          if ( v10 != -1 ) /*0x757a2e*/
          {
            v11 = (unsigned __int8 *)(v10 + *(_DWORD *)(a5 + 8)); /*0x757a37*/
            v37 = *(unsigned __int8 *)(a5 + 50); /*0x757a40*/
            if ( *(_BYTE *)(a5 + 50) ) /*0x757a3b*/
            {
              do /*0x757b5e*/
              {
                v12 = *v11; /*0x757a4a*/
                v13 = v11 + 1; /*0x757a4c*/
                LOWORD(a2) = g_VoxelOffsetTable[v12]; /*0x757a5a*/
                a4 += a2; /*0x757a62*/
                LOWORD(a2) = HIWORD(g_VoxelOffsetTable[v12]); /*0x757a64*/
                a3 += a2; /*0x757a6c*/
                LOWORD(a2) = *(_WORD *)(a5 + 46) * v12; /*0x757a74*/
                a1 += a2; /*0x757a79*/
                a2 = v37 - v12; /*0x757a7f*/
                v14 = *v13; /*0x757a83*/
                v15 = v13 + 1; /*0x757a85*/
                v26 = a3; /*0x757a88*/
                v25 = a1; /*0x757a8c*/
                v37 = a2; /*0x757a90*/
                if ( v14 ) /*0x757a94*/
                {
                  v27 = v14; /*0x757a9c*/
                  v37 = a2 - v14; /*0x757aa0*/
                  do /*0x757b51*/
                  {
                    a2 = BYTE1(a4); /*0x757ab3*/
                    v16 = a2 | a3 & 0xFF00; /*0x757ab6*/
                    v17 = BYTE1(a1); /*0x757ab8*/
                    if ( v17 <= (unsigned __int8)byte_B1D5E0[v16] ) /*0x757ac7*/
                    {
                      v15 += 2; /*0x757b27*/
                    }
                    else
                    {
                      v18 = *v15; /*0x757ac9*/
                      v19 = v15 + 1; /*0x757acb*/
                      v20 = v18; /*0x757ad2*/
                      v24 = *v19; /*0x757ad6*/
                      v15 = v19 + 1; /*0x757ada*/
                      byte_B1D5E0[v16] = v17; /*0x757adf*/
                      byte_B1D5E1[v16] = v17; /*0x757aeb*/
                      a2 = (unsigned __int8)g_VoxelShadeTable[v24] << 8; /*0x757b05*/
                      LOBYTE(a2) = g_VoxelColorPalette[a2 + v20]; /*0x757b0e*/
                      a3 = v26; /*0x757b15*/
                      g_VoxelRenderBuffer[v16] = a2; /*0x757b19*/
                      g_VoxelDepthBuffer[v16] = a2; /*0x757b1f*/
                    }
                    LOWORD(v16) = *(_WORD *)(a5 + 42); /*0x757b2a*/
                    a4 += v16; /*0x757b32*/
                    LOWORD(v16) = *(_WORD *)(a5 + 44); /*0x757b34*/
                    a3 += v16; /*0x757b38*/
                    LOWORD(v16) = *(_WORD *)(a5 + 46); /*0x757b3a*/
                    a1 = v16 + v25; /*0x757b3e*/
                    v21 = v27 == 1; /*0x757b44*/
                    v26 = a3; /*0x757b45*/
                    v25 += v16; /*0x757b49*/
                    --v27; /*0x757b4d*/
                  }
                  while ( !v21 ); /*0x757b51*/
                }
                v11 = v15 + 1; /*0x757b5b*/
              }
              while ( v37 ); /*0x757b5e*/
            }
          }
          LOWORD(a4) = v30 + *(_WORD *)(a5 + 30); /*0x757b76*/
          LOWORD(a3) = v31 + *(_WORD *)(a5 + 32); /*0x757b7b*/
          LOWORD(a1) = v32 + *(_WORD *)(a5 + 34); /*0x757b80*/
          v22 = *(unsigned __int8 *)(a5 + 48); /*0x757b89*/
          *(_DWORD *)(a5 + 12) += *(_DWORD *)(a5 + 16); /*0x757b8c*/
          ++v28; /*0x757b96*/
        }
        while ( v28 < v22 ); /*0x757b9a*/
      }
      LOWORD(a4) = v33 + *(_WORD *)(a5 + 36); /*0x757bb3*/
      LOWORD(a3) = v34 + *(_WORD *)(a5 + 38); /*0x757bb8*/
      LOWORD(a1) = v35 + *(_WORD *)(a5 + 40); /*0x757bbd*/
      *(_DWORD *)(a5 + 12) = v36 + *(_DWORD *)(a5 + 20); /*0x757bc8*/
      v9 = *(unsigned __int8 *)(a5 + 49); /*0x757bcd*/
      ++v29; /*0x757bd3*/
    }
    while ( v29 < v9 ); /*0x757bd7*/
  }
  return v9; /*0x757bde*/
}



// ==== 0x00757BF0  ObjectClass::VoxelDrawScanline  this=ObjectClass  sig=csp ====
char __usercall VoxelDrawScanline@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4)
{
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned __int8 *v11; // esi
  int v12; // eax
  unsigned __int8 *v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  bool v17; // zf
  unsigned int v18; // edx
  bool v19; // cf
  unsigned int v21; // [esp+10h] [ebp-38h]
  unsigned __int8 v22; // [esp+14h] [ebp-34h]
  int v23; // [esp+18h] [ebp-30h]
  unsigned __int8 v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h]
  unsigned int v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  __int16 v28; // [esp+2Ch] [ebp-1Ch]
  __int16 v29; // [esp+30h] [ebp-18h]
  __int16 v30; // [esp+34h] [ebp-14h]
  __int16 v31; // [esp+38h] [ebp-10h]
  __int16 v32; // [esp+3Ch] [ebp-Ch]
  __int16 v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]
  int v35; // [esp+4Ch] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757bf9*/
  v5 = 1; /*0x757c10*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x757c15*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757c17*/
    do /*0x757c3e*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x757c22*/
      v6 += 2; /*0x757c26*/
      *(v6 - 1) = v7; /*0x757c29*/
      ++v5; /*0x757c35*/
      *v6 = *(v6 - 2) + *(_WORD *)(a4 + 44); /*0x757c36*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x757c39*/
    }
    while ( v5 < a1 ); /*0x757c3e*/
  }
  LOBYTE(v8) = *(_BYTE *)(a4 + 49); /*0x757c40*/
  LOWORD(a1) = *(_WORD *)(a4 + 26); /*0x757c43*/
  LOWORD(a2) = *(_WORD *)(a4 + 28); /*0x757c47*/
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x757c4b*/
  v21 = a1; /*0x757c51*/
  v35 = a2; /*0x757c55*/
  v27 = 0; /*0x757c59*/
  if ( (_BYTE)v8 ) /*0x757c5d*/
  {
    do /*0x757e5d*/
    {
      v31 = a3; /*0x757c6a*/
      v34 = *(_DWORD *)(a4 + 12); /*0x757c6e*/
      v32 = a1; /*0x757c77*/
      v33 = a2; /*0x757c7b*/
      v26 = 0; /*0x757c7f*/
      if ( *(_BYTE *)(a4 + 48) ) /*0x757c72*/
      {
        do /*0x757e18*/
        {
          v9 = *(_DWORD *)(a4 + 12); /*0x757c89*/
          v28 = a3; /*0x757c8f*/
          v29 = a1; /*0x757c93*/
          v10 = *(_DWORD *)(*(_DWORD *)(a4 + 4) + 4 * v9); /*0x757c97*/
          v30 = a2; /*0x757c9a*/
          if ( v10 != -1 ) /*0x757ca1*/
          {
            v11 = (unsigned __int8 *)(v10 + *(_DWORD *)(a4 + 8)); /*0x757caa*/
            v23 = *(unsigned __int8 *)(a4 + 50); /*0x757cb3*/
            if ( *(_BYTE *)(a4 + 50) ) /*0x757cae*/
            {
              do /*0x757dd4*/
              {
                v12 = *v11; /*0x757cbf*/
                v13 = v11 - 1; /*0x757cc1*/
                if ( v12 ) /*0x757cc4*/
                {
                  v25 = v12; /*0x757cce*/
                  v23 -= v12; /*0x757cd4*/
                  do /*0x757d89*/
                  {
                    v9 = BYTE1(a3); /*0x757ce7*/
                    v14 = v9 | a1 & 0xFF00; /*0x757cea*/
                    LOWORD(v9) = BYTE1(a2); /*0x757cef*/
                    if ( (unsigned __int16)BYTE1(a2) <= (unsigned __int8)byte_B1D5E0[v14] ) /*0x757cfe*/
                    {
                      v13 -= 2; /*0x757d5f*/
                    }
                    else
                    {
                      v24 = *v13; /*0x757d03*/
                      v13 -= 2; /*0x757d11*/
                      v15 = (unsigned __int8)g_VoxelShadeTable[v24] << 8; /*0x757d31*/
                      v16 = v13[1]; /*0x757d34*/
                      byte_B1D5E0[v14] = v9; /*0x757d3a*/
                      byte_B1D5E1[v14] = v9; /*0x757d40*/
                      LOBYTE(v15) = g_VoxelColorPalette[v15 + v16]; /*0x757d46*/
                      g_VoxelRenderBuffer[v14] = v15; /*0x757d4d*/
                      g_VoxelDepthBuffer[v14] = v15; /*0x757d53*/
                      a1 = v21; /*0x757d59*/
                    }
                    LOWORD(v14) = *(_WORD *)(a4 + 42); /*0x757d62*/
                    LOWORD(v9) = *(_WORD *)(a4 + 44); /*0x757d6a*/
                    a3 += v14; /*0x757d6e*/
                    LOWORD(v14) = *(_WORD *)(a4 + 46); /*0x757d70*/
                    a1 += v9; /*0x757d74*/
                    a2 = v14 + v35; /*0x757d76*/
                    v17 = v25 == 1; /*0x757d7c*/
                    v21 = a1; /*0x757d7d*/
                    v35 += v14; /*0x757d81*/
                    --v25; /*0x757d85*/
                  }
                  while ( !v17 ); /*0x757d89*/
                }
                v22 = *(v13 - 1); /*0x757d93*/
                v11 = v13 - 2; /*0x757d97*/
                LOWORD(v9) = g_VoxelOffsetTable[v22]; /*0x757da1*/
                a3 += v9; /*0x757da9*/
                LOWORD(v9) = HIWORD(g_VoxelOffsetTable[v22]); /*0x757dab*/
                a1 += v9; /*0x757db3*/
                LOWORD(v9) = *(_WORD *)(a4 + 46) * v22; /*0x757dbb*/
                a2 += v9; /*0x757dc0*/
                v9 = v23 - v22; /*0x757dc6*/
                v17 = v23 == v22; /*0x757dc6*/
                v21 = a1; /*0x757dc8*/
                v35 = a2; /*0x757dcc*/
                v23 = v9; /*0x757dd0*/
              }
              while ( !v17 ); /*0x757dd4*/
            }
          }
          LOWORD(a3) = v28 + *(_WORD *)(a4 + 30); /*0x757dec*/
          LOWORD(a1) = v29 + *(_WORD *)(a4 + 32); /*0x757df1*/
          LOWORD(a2) = v30 + *(_WORD *)(a4 + 34); /*0x757df6*/
          v18 = *(unsigned __int8 *)(a4 + 48); /*0x757dff*/
          *(_DWORD *)(a4 + 12) += *(_DWORD *)(a4 + 16); /*0x757e02*/
          v21 = a1; /*0x757e09*/
          v35 = a2; /*0x757e0e*/
          ++v26; /*0x757e14*/
        }
        while ( v26 < v18 ); /*0x757e18*/
      }
      LOWORD(a3) = v31 + *(_WORD *)(a4 + 36); /*0x757e31*/
      LOWORD(a1) = v32 + *(_WORD *)(a4 + 38); /*0x757e36*/
      LOWORD(a2) = v33 + *(_WORD *)(a4 + 40); /*0x757e3b*/
      v8 = v34 + *(_DWORD *)(a4 + 20); /*0x757e40*/
      v21 = a1; /*0x757e4c*/
      v19 = v27 + 1 < (unsigned int)*(unsigned __int8 *)(a4 + 49); /*0x757e50*/
      v35 = a2; /*0x757e52*/
      *(_DWORD *)(a4 + 12) = v8; /*0x757e56*/
      ++v27; /*0x757e59*/
    }
    while ( v19 ); /*0x757e5d*/
  }
  return v8; /*0x757e63*/
}



// ==== 0x00757E70  VoxelRenderer::ProcessVoxelData  this=VoxelRenderer  sig=csp ====
char __usercall VoxelRenderer::ProcessVoxelData@<al>(VoxelRenderer *this, int a2@<ebp>, int a3@<edi>, int a4)
{
  int v4; // ebx
  unsigned int v5; // ecx
  _WORD *v7; // eax
  __int16 v8; // dx
  char result; // al
  int v10; // eax
  int v11; // edx
  unsigned __int8 *v12; // ecx
  unsigned __int8 v13; // al
  unsigned __int8 *v14; // ecx
  int v15; // eax
  _BYTE *v16; // ecx
  int v17; // edx
  int v18; // edi
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // [esp+Ch] [ebp-28h]
  unsigned int v23; // [esp+10h] [ebp-24h]
  unsigned int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+1Ch] [ebp-18h]
  __int16 v26; // [esp+20h] [ebp-14h]
  __int16 v27; // [esp+24h] [ebp-10h]
  __int16 v28; // [esp+28h] [ebp-Ch]
  __int16 v29; // [esp+2Ch] [ebp-8h]
  int VoxelRenderer_field_0x0C; // [esp+30h] [ebp-4h]
  VoxelRenderer *thisa; // [esp+38h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757e73*/
  v5 = 1; /*0x757e85*/
  if ( *((_BYTE *)this + 50) > 1u ) /*0x757e94*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757e96*/
    do /*0x757ebd*/
    {
      v8 = *(v7 - 1); /*0x757e9b*/
      v7 += 2; /*0x757e9f*/
      *(v7 - 1) = *((_WORD *)this + 21) + v8; /*0x757ea6*/
      ++v5; /*0x757eb2*/
      *v7 = *(v7 - 2) + *((_WORD *)this + 22); /*0x757eb3*/
    }
    while ( v5 < *((unsigned __int8 *)this + 50) ); /*0x757ebd*/
  }
  result = *((_BYTE *)this + 49); /*0x757ebf*/
  LOWORD(a2) = this->VoxelRenderer_field_0x18; /*0x757ec2*/
  LOWORD(a3) = HIWORD(this->VoxelRenderer_field_0x18); /*0x757ec6*/
  v24 = 0; /*0x757eca*/
  if ( result ) /*0x757ed4*/
  {
    do /*0x758018*/
    {
      v28 = a2; /*0x757ede*/
      VoxelRenderer_field_0x0C = this->VoxelRenderer_field_0x0C; /*0x757ee2*/
      v29 = a3; /*0x757eeb*/
      v23 = 0; /*0x757eef*/
      if ( this->q00C ) /*0x757ee6*/
      {
        do /*0x757fe4*/
        {
          v26 = a2; /*0x757f02*/
          v27 = a3; /*0x757f06*/
          v10 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * this->VoxelRenderer_field_0x0C); /*0x757f0a*/
          if ( v10 != -1 ) /*0x757f10*/
          {
            v11 = *((unsigned __int8 *)this + 50); /*0x757f1b*/
            v12 = (unsigned __int8 *)(v10 + this->VoxelRenderer_field_0x08); /*0x757f1e*/
            if ( *((_BYTE *)this + 50) ) /*0x757f1b*/
            {
              do /*0x757fb1*/
              {
                v13 = *v12; /*0x757f28*/
                v14 = v12 + 1; /*0x757f2a*/
                v11 -= v13; /*0x757f38*/
                LOWORD(v4) = g_VoxelOffsetTable[v13]; /*0x757f3a*/
                a2 += v4; /*0x757f42*/
                LOWORD(v4) = HIWORD(g_VoxelOffsetTable[v13]); /*0x757f44*/
                a3 += v4; /*0x757f4e*/
                v15 = *v14; /*0x757f50*/
                v16 = v14 + 1; /*0x757f52*/
                thisa = (VoxelRenderer *)a3; /*0x757f55*/
                if ( v15 ) /*0x757f59*/
                {
                  v17 = v11 - v15; /*0x757f5b*/
                  v22 = v15; /*0x757f5d*/
                  v25 = v17; /*0x757f61*/
                  do /*0x757fa8*/
                  {
                    LOBYTE(v17) = *v16; /*0x757f65*/
                    v18 = a3 & 0xFF00; /*0x757f6e*/
                    ++v16; /*0x757f79*/
                    v4 = v18 | BYTE1(a2); /*0x757f7a*/
                    g_VoxelRenderBuffer[v4] = v17; /*0x757f7f*/
                    g_VoxelRenderBuffer[BYTE1(a2) | (v18 + 1)] = v17; /*0x757f85*/
                    LOWORD(v17) = *((_WORD *)this + 21); /*0x757f93*/
                    a3 = (int)&thisa->__pad_0[*((unsigned __int16 *)this + 22)]; /*0x757f97*/
                    a2 += v17; /*0x757f9d*/
                    v19 = v22 == 1; /*0x757f9f*/
                    thisa = (VoxelRenderer *)a3; /*0x757fa0*/
                    --v22; /*0x757fa4*/
                  }
                  while ( !v19 ); /*0x757fa8*/
                  v11 = v25; /*0x757faa*/
                }
                v12 = v16 + 1; /*0x757fae*/
              }
              while ( v11 ); /*0x757fb1*/
            }
          }
          LOWORD(a2) = v26 + *((_WORD *)this + 15); /*0x757fc9*/
          LOWORD(a3) = v27 + this->u32_10; /*0x757fce*/
          v20 = *((unsigned __int8 *)this + 48); /*0x757fd5*/
          v4 = this->VoxelRenderer_field_0x10 + this->VoxelRenderer_field_0x0C; /*0x757fd8*/
          this->VoxelRenderer_field_0x0C = v4; /*0x757fdb*/
          ++v23; /*0x757fe0*/
        }
        while ( v23 < v20 ); /*0x757fe4*/
      }
      LOWORD(a2) = v28 + *((_WORD *)this + 18); /*0x757ff9*/
      LOWORD(a3) = v29 + *((_WORD *)this + 19); /*0x757ffe*/
      v21 = *((unsigned __int8 *)this + 49); /*0x758007*/
      this->VoxelRenderer_field_0x0C = VoxelRenderer_field_0x0C + this->VoxelRenderer_field_0x14; /*0x75800a*/
      result = ++v24; /*0x758011*/
    }
    while ( v24 < v21 ); /*0x758018*/
  }
  return result; /*0x75801f*/
}



// ==== 0x00758030  VoxelRenderer::RenderFrame  this=VoxelRenderer  sig=csp ====
char __usercall sub_758030@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3)
{
  unsigned int v4; // esi
  _WORD *v5; // eax
  __int16 v6; // di
  char result; // al
  int v8; // eax
  int v9; // edx
  unsigned __int8 *v10; // edi
  int v11; // eax
  unsigned __int8 *v12; // edi
  int v13; // edx
  int v14; // esi
  bool v15; // zf
  unsigned int v16; // edx
  unsigned int v17; // edx
  int v18; // [esp+10h] [ebp-28h]
  unsigned int v19; // [esp+14h] [ebp-24h]
  unsigned int v20; // [esp+18h] [ebp-20h]
  int v21; // [esp+1Ch] [ebp-1Ch]
  unsigned __int8 v22; // [esp+20h] [ebp-18h]
  __int16 v23; // [esp+24h] [ebp-14h]
  __int16 v24; // [esp+28h] [ebp-10h]
  __int16 v25; // [esp+2Ch] [ebp-Ch]
  __int16 v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]
  unsigned int v28; // [esp+3Ch] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x758039*/
  v4 = 1; /*0x758050*/
  if ( *(_BYTE *)(a3 + 50) > 1u ) /*0x758055*/
  {
    v5 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758057*/
    do /*0x75807e*/
    {
      v6 = *(_WORD *)(a3 + 42) + *(v5 - 1); /*0x758062*/
      v5 += 2; /*0x758066*/
      *(v5 - 1) = v6; /*0x758069*/
      ++v4; /*0x758075*/
      *v5 = *(_WORD *)(a3 + 44) + *(v5 - 2); /*0x758076*/
      a1 = *(unsigned __int8 *)(a3 + 50); /*0x758079*/
    }
    while ( v4 < a1 ); /*0x75807e*/
  }
  result = *(_BYTE *)(a3 + 49); /*0x758080*/
  LOWORD(v4) = *(_WORD *)(a3 + 26); /*0x758083*/
  LOWORD(a2) = *(_WORD *)(a3 + 24); /*0x758087*/
  v28 = v4; /*0x75808d*/
  v20 = 0; /*0x758091*/
  if ( result ) /*0x758095*/
  {
    do /*0x7581e0*/
    {
      v25 = a2; /*0x7580a2*/
      v27 = *(_DWORD *)(a3 + 12); /*0x7580a6*/
      v26 = v4; /*0x7580af*/
      v19 = 0; /*0x7580b3*/
      if ( *(_BYTE *)(a3 + 48) ) /*0x7580aa*/
      {
        do /*0x7581a8*/
        {
          v23 = a2; /*0x7580c3*/
          v24 = v4; /*0x7580c7*/
          v8 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * *(_DWORD *)(a3 + 12)); /*0x7580cb*/
          if ( v8 != -1 ) /*0x7580d1*/
          {
            v9 = *(unsigned __int8 *)(a3 + 50); /*0x7580dc*/
            v10 = (unsigned __int8 *)(v8 + *(_DWORD *)(a3 + 8)); /*0x7580df*/
            if ( *(_BYTE *)(a3 + 50) ) /*0x7580dc*/
            {
              do /*0x758171*/
              {
                v11 = *v10; /*0x7580eb*/
                v12 = v10 - 1; /*0x7580ed*/
                if ( v11 ) /*0x7580f0*/
                {
                  v13 = v9 - v11; /*0x7580f2*/
                  v18 = v11; /*0x7580f4*/
                  v21 = v13; /*0x7580f8*/
                  do /*0x75813f*/
                  {
                    LOBYTE(v13) = *v12; /*0x7580fc*/
                    v14 = v4 & 0xFF00; /*0x758105*/
                    --v12; /*0x758110*/
                    a1 = v14 | BYTE1(a2); /*0x758111*/
                    g_VoxelRenderBuffer[a1] = v13; /*0x758116*/
                    g_VoxelRenderBuffer[BYTE1(a2) | (v14 + 1)] = v13; /*0x75811c*/
                    LOWORD(v13) = *(_WORD *)(a3 + 42); /*0x75812a*/
                    v4 = *(unsigned __int16 *)(a3 + 44) + v28; /*0x75812e*/
                    a2 += v13; /*0x758134*/
                    v15 = v18 == 1; /*0x758136*/
                    v28 = v4; /*0x758137*/
                    --v18; /*0x75813b*/
                  }
                  while ( !v15 ); /*0x75813f*/
                  v9 = v21; /*0x758141*/
                }
                v22 = *(v12 - 1); /*0x758149*/
                v10 = v12 - 2; /*0x75814d*/
                LOWORD(a1) = g_VoxelOffsetTable[v22]; /*0x758157*/
                a2 += a1; /*0x75815f*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v22]); /*0x758161*/
                v4 += a1; /*0x758169*/
                v9 -= v22; /*0x75816b*/
                v28 = v4; /*0x75816d*/
              }
              while ( v9 ); /*0x758171*/
            }
          }
          LOWORD(a2) = v23 + *(_WORD *)(a3 + 30); /*0x758185*/
          LOWORD(v4) = v24 + *(_WORD *)(a3 + 32); /*0x75818a*/
          v16 = *(unsigned __int8 *)(a3 + 48); /*0x758193*/
          *(_DWORD *)(a3 + 12) += *(_DWORD *)(a3 + 16); /*0x758196*/
          v28 = v4; /*0x75819d*/
          ++v19; /*0x7581a4*/
        }
        while ( v19 < v16 ); /*0x7581a8*/
      }
      LOWORD(a2) = v25 + *(_WORD *)(a3 + 36); /*0x7581bd*/
      LOWORD(v4) = v26 + *(_WORD *)(a3 + 38); /*0x7581c2*/
      v17 = *(unsigned __int8 *)(a3 + 49); /*0x7581cb*/
      *(_DWORD *)(a3 + 12) = v27 + *(_DWORD *)(a3 + 20); /*0x7581ce*/
      v28 = v4; /*0x7581d5*/
      result = ++v20; /*0x7581d9*/
    }
    while ( v20 < v17 ); /*0x7581e0*/
  }
  return result; /*0x7581e6*/
}



// ==== 0x007581F0  ObjectClass::ProcessVoxelColorSamples  this=ObjectClass  sig=csp ====
char __usercall ProcessVoxelColorSamples@<al>(int *a1@<ebx>, int a2@<ebp>, int a3@<edi>, int *a4)
{
  int *v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // dx
  char result; // al
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  _BYTE *v12; // esi
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // al
  int v15; // eax
  char *v16; // esi
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // edx
  int *v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+18h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-20h]
  __int16 v27; // [esp+20h] [ebp-1Ch]
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+28h] [ebp-14h]
  __int16 v30; // [esp+2Ch] [ebp-10h]
  __int16 v31; // [esp+30h] [ebp-Ch]
  __int16 v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v4 = a4; /*0x7581f0*/
  g_VoxelOffsetTable[0] = 0; /*0x7581f7*/
  v5 = 1; /*0x758211*/
  if ( *((_BYTE *)a4 + 50) > 1u ) /*0x758216*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758218*/
    do /*0x75823f*/
    {
      v7 = *(v6 - 1); /*0x75821d*/
      v6 += 2; /*0x758221*/
      *(v6 - 1) = *((_WORD *)a4 + 21) + v7; /*0x758228*/
      ++v5; /*0x758234*/
      *v6 = *((_WORD *)a4 + 22) + *(v6 - 2); /*0x758235*/
    }
    while ( v5 < *((unsigned __int8 *)a4 + 50) ); /*0x75823f*/
  }
  LOWORD(a3) = *((_WORD *)a4 + 12); /*0x758245*/
  LOWORD(a2) = *((_WORD *)a4 + 13); /*0x758249*/
  LOWORD(a4) = *((_WORD *)a4 + 14); /*0x75824d*/
  result = *((_BYTE *)v4 + 49); /*0x758252*/
  v26 = 0; /*0x758255*/
  if ( result ) /*0x75825f*/
  {
    do /*0x758415*/
    {
      HIWORD(v9) = HIWORD(a4); /*0x758266*/
      v32 = (__int16)a4; /*0x75826d*/
      v33 = v4[3]; /*0x758276*/
      v30 = a3; /*0x75827a*/
      v31 = a2; /*0x75827e*/
      v25 = 0; /*0x758282*/
      if ( *((_BYTE *)v4 + 48) ) /*0x758271*/
      {
        do /*0x7583d4*/
        {
          v29 = (__int16)a4; /*0x758297*/
          v10 = (int *)*v4; /*0x75829b*/
          v27 = a3; /*0x75829d*/
          v28 = a2; /*0x7582a1*/
          v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7582a5*/
          if ( v11 != (int *)-1 ) /*0x7582ab*/
          {
            v12 = (char *)v11 + v4[2]; /*0x7582b4*/
            v11 = (int *)*((unsigned __int8 *)v4 + 50); /*0x7582b8*/
            v22 = v11; /*0x7582bd*/
            if ( *((_BYTE *)v4 + 50) ) /*0x7582b8*/
            {
              do /*0x758394*/
              {
                LOBYTE(v10) = *v12; /*0x7582c7*/
                v13 = v12 + 1; /*0x7582c9*/
                v14 = (unsigned __int8)v10; /*0x7582ce*/
                LOWORD(v10) = *((_WORD *)v4 + 23) * (unsigned __int8)v10; /*0x7582d6*/
                LOWORD(a1) = g_VoxelOffsetTable[v14]; /*0x7582e0*/
                a3 += (int)a1; /*0x7582e8*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v14]); /*0x7582ea*/
                a2 += (int)a1; /*0x7582f2*/
                a1 = (int *)((char *)a4 + (_DWORD)v10); /*0x7582f8*/
                v10 = (int *)((char *)v22 - v14); /*0x7582fe*/
                v15 = *v13; /*0x758302*/
                v16 = (char *)(v13 + 1); /*0x758304*/
                a4 = a1; /*0x758307*/
                v22 = v10; /*0x75830b*/
                if ( v15 ) /*0x75830f*/
                {
                  v24 = v15; /*0x758313*/
                  v22 = (int *)((char *)v10 - v15); /*0x758317*/
                  do /*0x75838b*/
                  {
                    v23 = *v16; /*0x75831f*/
                    v17 = BYTE1(a3); /*0x758330*/
                    v18 = v17 | a2 & 0xFF00; /*0x758333*/
                    ++v16; /*0x758346*/
                    if ( (unsigned __int16)((unsigned __int16)a4 >> 8) > (unsigned __int8)byte_B1D5E0[v18] ) /*0x75834a*/
                    {
                      byte_B1D5E0[v18] = BYTE1(a4); /*0x758350*/
                      g_VoxelRenderBuffer[v18] = v23; /*0x758356*/
                      g_VoxelDepthBuffer[v18] = v23; /*0x75835c*/
                      byte_B1D5E1[v18] = BYTE1(a4); /*0x758362*/
                    }
                    LOWORD(v18) = *((_WORD *)v4 + 21); /*0x758368*/
                    LOWORD(v17) = *((_WORD *)v4 + 22); /*0x75836c*/
                    a3 += v18; /*0x758370*/
                    LOWORD(v18) = *((_WORD *)v4 + 23); /*0x758372*/
                    a2 += v17; /*0x758376*/
                    v10 = (int *)((char *)a4 + v18); /*0x75837c*/
                    v19 = v24 == 1; /*0x758382*/
                    a4 = (int *)((char *)a4 + v18); /*0x758383*/
                    --v24; /*0x758387*/
                  }
                  while ( !v19 ); /*0x75838b*/
                }
                HIWORD(v11) = HIWORD(v22); /*0x75838d*/
                v12 = v16 + 1; /*0x758391*/
              }
              while ( v22 ); /*0x758394*/
            }
          }
          LOWORD(v11) = v29 + *((_WORD *)v4 + 17); /*0x7583a1*/
          LOWORD(a3) = v27 + *((_WORD *)v4 + 15); /*0x7583ae*/
          LOWORD(a2) = v28 + *((_WORD *)v4 + 16); /*0x7583b3*/
          a4 = v11; /*0x7583b8*/
          v20 = *((unsigned __int8 *)v4 + 48); /*0x7583c3*/
          v4[3] += v4[4]; /*0x7583c6*/
          v9 = (int *)++v25; /*0x7583cd*/
        }
        while ( v25 < v20 ); /*0x7583d4*/
      }
      LOWORD(v9) = v32 + *((_WORD *)v4 + 20); /*0x7583e2*/
      LOWORD(a3) = v30 + *((_WORD *)v4 + 18); /*0x7583ef*/
      LOWORD(a2) = v31 + *((_WORD *)v4 + 19); /*0x7583f4*/
      a4 = v9; /*0x7583f9*/
      v21 = *((unsigned __int8 *)v4 + 49); /*0x758404*/
      v4[3] = v33 + v4[5]; /*0x758407*/
      result = ++v26; /*0x75840e*/
    }
    while ( v26 < v21 ); /*0x758415*/
  }
  return result; /*0x75841c*/
}



// ==== 0x00758430  ObjectClass::ProcessVoxelScanSamples  this=ObjectClass  sig=csp ====
char __usercall ProcessVoxelScanSamples@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  char *v12; // esi
  int v13; // eax
  char *v14; // esi
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // [esp+10h] [ebp-30h]
  char v20; // [esp+14h] [ebp-2Ch]
  unsigned __int8 v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-24h]
  unsigned int v24; // [esp+20h] [ebp-20h]
  __int16 v25; // [esp+24h] [ebp-1Ch]
  __int16 v26; // [esp+28h] [ebp-18h]
  __int16 v27; // [esp+2Ch] [ebp-14h]
  __int16 v28; // [esp+30h] [ebp-10h]
  __int16 v29; // [esp+34h] [ebp-Ch]
  __int16 v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v4 = a4; /*0x758430*/
  g_VoxelOffsetTable[0] = 0; /*0x758439*/
  v5 = 1; /*0x758450*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x758455*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758457*/
    do /*0x75847e*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x758462*/
      v6 += 2; /*0x758466*/
      *(v6 - 1) = v7; /*0x758469*/
      ++v5; /*0x758475*/
      *v6 = *(_WORD *)(a4 + 44) + *(v6 - 2); /*0x758476*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x758479*/
    }
    while ( v5 < a1 ); /*0x75847e*/
  }
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x758484*/
  LOWORD(a2) = *(_WORD *)(a4 + 26); /*0x758488*/
  LOWORD(a4) = *(_WORD *)(a4 + 28); /*0x75848c*/
  result = *(_BYTE *)(v4 + 49); /*0x758491*/
  v24 = 0; /*0x758494*/
  if ( result ) /*0x75849a*/
  {
    do /*0x758653*/
    {
      v28 = a3; /*0x7584a7*/
      v31 = *(_DWORD *)(v4 + 12); /*0x7584ab*/
      HIWORD(v9) = HIWORD(a4); /*0x7584af*/
      v30 = a4; /*0x7584b3*/
      v29 = a2; /*0x7584bc*/
      v23 = 0; /*0x7584c0*/
      if ( *(_BYTE *)(v4 + 48) ) /*0x7584b7*/
      {
        do /*0x758612*/
        {
          v27 = a4; /*0x7584d1*/
          v10 = *(_DWORD *)(v4 + 4); /*0x7584d5*/
          v25 = a3; /*0x7584d8*/
          v26 = a2; /*0x7584dc*/
          v11 = *(_DWORD *)(v10 + 4 * *(_DWORD *)(v4 + 12)); /*0x7584e0*/
          if ( v11 != -1 ) /*0x7584e6*/
          {
            v12 = (char *)(v11 + *(_DWORD *)(v4 + 8)); /*0x7584ef*/
            v11 = *(unsigned __int8 *)(v4 + 50); /*0x7584f3*/
            v19 = v11; /*0x7584f8*/
            if ( *(_BYTE *)(v4 + 50) ) /*0x7584f3*/
            {
              do /*0x7585d2*/
              {
                v13 = (unsigned __int8)*v12; /*0x758504*/
                v14 = v12 - 1; /*0x758506*/
                if ( v13 ) /*0x758509*/
                {
                  v22 = v13; /*0x758513*/
                  v19 -= v13; /*0x758519*/
                  do /*0x75858d*/
                  {
                    v20 = *v14; /*0x758521*/
                    v15 = BYTE1(a3); /*0x758532*/
                    v16 = v15 | a2 & 0xFF00; /*0x758535*/
                    --v14; /*0x758548*/
                    if ( (unsigned __int16)BYTE1(a4) > (unsigned __int8)byte_B1D5E0[v16] ) /*0x75854c*/
                    {
                      byte_B1D5E0[v16] = BYTE1(a4); /*0x758552*/
                      g_VoxelRenderBuffer[v16] = v20; /*0x758558*/
                      g_VoxelDepthBuffer[v16] = v20; /*0x75855e*/
                      byte_B1D5E1[v16] = BYTE1(a4); /*0x758564*/
                    }
                    LOWORD(v16) = *(_WORD *)(v4 + 42); /*0x75856a*/
                    LOWORD(v15) = *(_WORD *)(v4 + 44); /*0x75856e*/
                    a3 += v16; /*0x758572*/
                    LOWORD(v16) = *(_WORD *)(v4 + 46); /*0x758574*/
                    a2 += v15; /*0x758578*/
                    v10 = v16 + a4; /*0x75857e*/
                    v17 = v22 == 1; /*0x758584*/
                    a4 += v16; /*0x758585*/
                    --v22; /*0x758589*/
                  }
                  while ( !v17 ); /*0x75858d*/
                }
                v21 = *(v14 - 1); /*0x758593*/
                v12 = v14 - 2; /*0x758597*/
                LOWORD(v10) = *(_WORD *)(v4 + 46) * v21; /*0x7585a0*/
                v11 = v21; /*0x7585a5*/
                LOWORD(a1) = g_VoxelOffsetTable[v21]; /*0x7585aa*/
                a3 += a1; /*0x7585b2*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v21]); /*0x7585b4*/
                a2 += a1; /*0x7585bc*/
                a1 = v10 + a4; /*0x7585c2*/
                v10 = v19 - v21; /*0x7585c8*/
                v17 = v19 == v21; /*0x7585c8*/
                a4 = a1; /*0x7585ca*/
                v19 = v10; /*0x7585ce*/
              }
              while ( !v17 ); /*0x7585d2*/
            }
          }
          LOWORD(v11) = v27 + *(_WORD *)(v4 + 34); /*0x7585df*/
          LOWORD(a3) = v25 + *(_WORD *)(v4 + 30); /*0x7585ec*/
          LOWORD(a2) = v26 + *(_WORD *)(v4 + 32); /*0x7585f1*/
          a4 = v11; /*0x7585f6*/
          *(_DWORD *)(v4 + 12) += *(_DWORD *)(v4 + 16); /*0x758603*/
          v9 = v23 + 1; /*0x75860b*/
          v23 = v9; /*0x75860e*/
        }
        while ( v9 < *(unsigned __int8 *)(v4 + 48) ); /*0x758612*/
      }
      LOWORD(v9) = v30 + *(_WORD *)(v4 + 40); /*0x758620*/
      LOWORD(a3) = v28 + *(_WORD *)(v4 + 36); /*0x75862d*/
      LOWORD(a2) = v29 + *(_WORD *)(v4 + 38); /*0x758632*/
      a4 = v9; /*0x758637*/
      v18 = *(unsigned __int8 *)(v4 + 49); /*0x758642*/
      *(_DWORD *)(v4 + 12) = v31 + *(_DWORD *)(v4 + 20); /*0x758645*/
      result = ++v24; /*0x75864c*/
    }
    while ( v24 < v18 ); /*0x758653*/
  }
  return result; /*0x758659*/
}



// ==== 0x00758670  GlobalHelper_053C80_Helper  this=-  sig=csp ====
char __fastcall sub_758670(float *a1, int a2)
{
  int v2; // ebp
  int v3; // esi
  float *v5; // edi
  double v6; // st7

  v2 = dword_8469F4[a2]; /*0x758679*/
  v3 = 0; /*0x758681*/
  if ( v2 > 0 ) /*0x758687*/
  {
    v5 = (float *)(dword_8469E0[a2] + 4); /*0x75868a*/
    do /*0x7586d0*/
    {
      v6 = *(v5 - 1) * *a1 + v5[1] * a1[2] + a1[1] * *v5; /*0x75869f*/
      if ( v6 >= 0.0 ) /*0x7586ac*/
        g_VoxelShadeTable[v3] = Math::RoundToInt(v6 * 16.0); /*0x7586c4*/
      else
        g_VoxelShadeTable[v3] = 0; /*0x7586b0*/
      ++v3; /*0x7586ca*/
      v5 += 3; /*0x7586cb*/
    }
    while ( v3 < v2 ); /*0x7586d0*/
  }
  byte_B45A8F = 16; /*0x7586d7*/
  byte_B45A8E = 16; /*0x7586dc*/
  byte_B45A8D = 16; /*0x7586e1*/
  return 16; /*0x7586d5*/
}



// ==== 0x007586F0  VoxelAnim::ComputeTransform  this=VoxelAnim  sig=csp ====
char __fastcall sub_7586F0(float *a1, float *a2, float a3, int a4)
{
  int v5; // esi
  double v6; // st7
  double v7; // st7
  float v8; // edx
  int v9; // ebx
  int v10; // edi
  float *v11; // esi
  double v12; // st7
  double v13; // st6
  double v14; // st7
  float v16; // [esp+18h] [ebp-24h]
  float v17; // [esp+1Ch] [ebp-20h]
  float v18; // [esp+20h] [ebp-1Ch]
  float v19; // [esp+24h] [ebp-18h]
  float v20; // [esp+28h] [ebp-14h]
  float v21; // [esp+2Ch] [ebp-10h]
  float v22; // [esp+30h] [ebp-Ch]
  float v23; // [esp+34h] [ebp-8h]
  float v24; // [esp+38h] [ebp-4h]
  float v25; // [esp+44h] [ebp+8h]

  v5 = dword_8469E0[a4]; /*0x758702*/
  v16 = *a1 + *a2; /*0x75870c*/
  v17 = a2[1] + a1[1]; /*0x758716*/
  v6 = a2[2] + a1[2]; /*0x75871d*/
  v18 = v6; /*0x758720*/
  v7 = Math::Sqrt(v6 * v18 + v16 * v16 + v17 * v17); /*0x75873f*/
  if ( v7 == 0.0 ) /*0x758752*/
  {
    v8 = v18; /*0x75878e*/
    v19 = v16; /*0x758792*/
    v20 = v17; /*0x758798*/
  }
  else
  {
    v22 = v16 / v7; /*0x75875a*/
    v19 = v22; /*0x758768*/
    v23 = v17 / v7; /*0x75876c*/
    v20 = v23; /*0x758778*/
    v24 = v18 / v7; /*0x75877c*/
    v8 = v24; /*0x758780*/
  }
  v9 = dword_8469F4[a4]; /*0x75879c*/
  v10 = 0; /*0x7587a3*/
  v21 = v8; /*0x7587a7*/
  if ( v9 > 0 ) /*0x7587ab*/
  {
    v11 = (float *)(v5 + 4); /*0x7587b1*/
    do /*0x758856*/
    {
      v12 = v11[1] * a1[2] + *v11 * a1[1] + *(v11 - 1) * *a1; /*0x7587c7*/
      v13 = v19 * *(v11 - 1) + v20 * *v11 + v21 * v11[1]; /*0x7587df*/
      v25 = v13 / (a3 - v13 * a3 + v13); /*0x7587ef*/
      if ( v25 < 0.0 ) /*0x758804*/
        v25 = 0.0; /*0x758806*/
      if ( v12 < 0.0 ) /*0x758819*/
        v12 = 0.0; /*0x75881d*/
      v14 = v12 + v25; /*0x758823*/
      if ( v14 >= 0.0 ) /*0x758832*/
        g_VoxelShadeTable[v10] = Math::RoundToInt(v14 * 16.0); /*0x75884a*/
      else
        g_VoxelShadeTable[v10] = 0; /*0x758836*/
      ++v10; /*0x758850*/
      v11 += 3; /*0x758851*/
    }
    while ( v10 < v9 ); /*0x758856*/
  }
  byte_B45A8F = 16; /*0x758861*/
  byte_B45A8E = 16; /*0x758866*/
  byte_B45A8D = 16; /*0x75886b*/
  return 16; /*0x75885c*/
}



// ==== 0x00758880  VoxelRenderer::ClearDepth  this=VoxelRenderer  sig=ida-proto ====
int __fastcall sub_758880(float *a1, int a2)
{
  int v4; // ebx
  int v5; // ebp
  int v7; // edi
  int v8; // ecx
  float *v9; // edx
  double v10; // st7
  float v11; // [esp+18h] [ebp-4h]

  v4 = dword_8469E0[a2]; /*0x75889c*/
  v11 = 0.0; /*0x7588a3*/
  v5 = 0; /*0x7588ab*/
  if ( Math::Sqrt(*a1 * *a1 + a1[1] * a1[1] + a1[2] * a1[2]) < 0.2 ) /*0x7588d1*/
    return 255; /*0x7588d6*/
  v7 = dword_8469F4[a2]; /*0x7588de*/
  v8 = 0; /*0x7588e5*/
  if ( v7 > 0 ) /*0x7588e9*/
  {
    v9 = (float *)(v4 + 4); /*0x7588eb*/
    do /*0x75891d*/
    {
      v10 = *(v9 - 1) * *a1 + v9[1] * a1[2] + *v9 * a1[1]; /*0x758900*/
      if ( v10 > v11 ) /*0x75890b*/
      {
        v11 = v10; /*0x75890d*/
        v5 = v8; /*0x758911*/
      }
      ++v8; /*0x758917*/
      v9 += 3; /*0x758918*/
    }
    while ( v8 < v7 ); /*0x75891d*/
  }
  return v5; /*0x7588d3*/
}



// ==== 0x00758950  VoxelPalette::Init  this=VoxelPalette  sig=csp ====
_DWORD *__thiscall VoxelPalette::Init(VoxelPalette *this, int a2, int a3)
{
  if ( a2 ) /*0x758959*/
  {
    this->q004 = a2; /*0x758974*/
    *((_DWORD *)this + 6) = 0; /*0x758977*/
  }
  else
  {
    this->q004 = __2_YAPAXI_Z(0x300u); /*0x758968*/
    *((_DWORD *)this + 6) = 1; /*0x75896b*/
  }
  if ( a3 ) /*0x758984*/
  {
    *((_DWORD *)this + 5) = a3; /*0x7589a3*/
    *((_DWORD *)this + 7) = 0; /*0x7589a6*/
  }
  else
  {
    *((_DWORD *)this + 5) = __2_YAPAXI_Z(0x8000u); /*0x758993*/
    *((_DWORD *)this + 7) = 1; /*0x758996*/
  }
  return this->__pad_0; /*0x75899f*/
}



// ==== 0x007589C0  VoxelPalette::Reset  this=VoxelPalette  sig=csp ====
int __thiscall VoxelPalette::Reset(VoxelPalette *this)
{
  int result; // eax

  if ( *((_DWORD *)this + 6) ) /*0x7589c3*/
    __3_YAXPAX_Z(*((void **)this + 4)); /*0x7589ce*/
  result = *((_DWORD *)this + 7); /*0x7589d6*/
  if ( result ) /*0x7589db*/
    __3_YAXPAX_Z(*((void **)this + 5)); /*0x7589e1*/
  return result; /*0x7589e9*/
}



// ==== 0x007589F0  ObjectClass::method_7589F0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_7589F0(ObjectClass *this, int a2)
{
  BOOL v4; // ebx

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1); /*0x758a01*/
  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 36))(a2, this->?, 768) != 768; /*0x758a1b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x758a24*/
  return v4; /*0x758a27*/
}



// ==== 0x00758A30  VoxelPaletteClass::ConvertFromFile  this=VoxelPaletteClass  sig=csp ====
int __thiscall VoxelPaletteClass::ConvertFromFile(VoxelPaletteClass *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  _DWORD v9[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = 0; /*0x758a42*/
  if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1) ) /*0x758a44*/
    goto LABEL_5; /*0x758a44*/
  if ( (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 36))(a2, v9, 16) != 16 ) /*0x758a5c*/
    goto LABEL_5; /*0x758a5c*/
  v4 = v9[2]; /*0x758a62*/
  v5 = v9[1]; /*0x758a66*/
  *(_DWORD *)this = v9[0]; /*0x758a6a*/
  v6 = v9[3]; /*0x758a6c*/
  this->q020 = v4; /*0x758a70*/
  v7 = this->u32_4; /*0x758a73*/
  this->u32_4 = v5; /*0x758a76*/
  this->u32_C = v6; /*0x758a79*/
  if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 36))(a2, v7, 768) != 768 /*0x758aaa*/
    || (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 36))(
         a2,
         this->u32_14,
         this->q020 << 8) != this->q020 << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758aac*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x758ab5*/
  return v3; /*0x758ab8*/
}



// ==== 0x00758AD0  ObjectClass::method_758AD0  this=ObjectClass  sig=csp ====
int __thiscall sub_758AD0(ObjectClass *this, int *a2)
{
  int v3; // ebx
  void *vtable2; // eax
  void *vtable1; // edx
  void *vtable3; // ecx
  int v7; // edx
  _DWORD v9[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = 0; /*0x758ae2*/
  if ( !(*(int (__thiscall **)(int *, int))(*a2 + 28))(a2, 2) ) /*0x758ae4*/
    goto LABEL_5; /*0x758ae4*/
  vtable2 = this->?; /*0x758aed*/
  vtable1 = this->?; /*0x758af0*/
  v9[0] = this->AbstractClass; /*0x758af3*/
  vtable3 = this->?; /*0x758af7*/
  v9[2] = vtable2; /*0x758afa*/
  v9[1] = vtable1; /*0x758afe*/
  v7 = *a2; /*0x758b02*/
  v9[3] = vtable3; /*0x758b08*/
  if ( (*(int (__thiscall **)(int *, _DWORD *, int))(v7 + 48))(a2, v9, 16) != 16 /*0x758b4a*/
    || (*(int (__thiscall **)(int *, int, int))(*a2 + 48))(a2, this->?, 768) != 768
    || (*(int (__thiscall **)(int *, int, int))(*a2 + 48))(a2, this->?, (int)this->? << 8) != (int)this->? << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758b4c*/
  }
  (*(void (__thiscall **)(int *))(*a2 + 52))(a2); /*0x758b55*/
  return v3; /*0x758b58*/
}



// ==== 0x00758B70  ObjectClass::GenerateLightRemapTable  this=ObjectClass  sig=csp ====
int __thiscall GenerateLightRemapTable(ObjectClass *this, float *a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  int v6; // ecx
  float *v7; // eax
  double v8; // st7
  int v9; // ebp
  int i; // edi
  double v11; // st7
  unsigned __int8 *v12; // eax
  char v13; // al
  int v14; // ecx
  bool v15; // cc
  int v16; // edi
  int j; // ebp
  double v18; // st7
  unsigned __int8 *v19; // eax
  double v20; // st7
  char v21; // al
  int v22; // ecx
  int result; // eax
  float *v24; // [esp+10h] [ebp-14h]
  float *v25; // [esp+10h] [ebp-14h]
  float *v26; // [esp+14h] [ebp-10h]
  float v27; // [esp+14h] [ebp-10h]
  float v28; // [esp+18h] [ebp-Ch]
  float v29; // [esp+18h] [ebp-Ch]
  float v30; // [esp+1Ch] [ebp-8h]
  float v31; // [esp+1Ch] [ebp-8h]
  float v32; // [esp+20h] [ebp-4h]
  float *v33; // [esp+28h] [ebp+4h]
  int v34; // [esp+28h] [ebp+4h]
  float *v35; // [esp+28h] [ebp+4h]
  int v36; // [esp+28h] [ebp+4h]
  int v37; // [esp+2Ch] [ebp+8h]
  char v38; // [esp+2Ch] [ebp+8h]
  char v39; // [esp+2Ch] [ebp+8h]

  if ( a2 && a3 ) /*0x758b89*/
  {
    this->? = (void *)a3; /*0x758b8b*/
    v26 = a2; /*0x758b8e*/
  }
  else
  {
    v4 = (float *)&unk_B45A90; /*0x758b94*/
    this->? = (void *)32; /*0x758b99*/
    v26 = (float *)&unk_B45A90; /*0x758ba0*/
    v33 = 0; /*0x758ba4*/
    do /*0x758bd2*/
    {
      ++v4; /*0x758bb0*/
      v5 = (double)(int)v33 * 0.0625; /*0x758bb9*/
      v33 = (float *)((char *)v33 + 1); /*0x758bbf*/
      *(v4 - 1) = v5 * 0.80000001 + 0.60000002; /*0x758bcf*/
    }
    while ( (int)v4 < (int)flt_B45AD0 ); /*0x758bd2*/
    v6 = 16; /*0x758bd4*/
    v7 = flt_B45AD0; /*0x758bd9*/
    v34 = 16; /*0x758bde*/
    do /*0x758c0d*/
    {
      ++v7; /*0x758be5*/
      v37 = v6 - 16; /*0x758be8*/
      ++v6; /*0x758bec*/
      v8 = (double)v37 + (double)v34; /*0x758bf6*/
      v34 = v6; /*0x758bfa*/
      *(v7 - 1) = v8 * 0.0625 + 0.40000001; /*0x758c0a*/
    }
    while ( (int)v7 < (int)&dbl_B45B10 ); /*0x758c0d*/
  }
  v35 = 0; /*0x758c13*/
  v24 = v26; /*0x758c17*/
  do /*0x758cdb*/
  {
    v9 = 1; /*0x758c23*/
    for ( i = 3; i < 768; i += 3 ) /*0x758c2f*/
    {
      if ( v9 < (int)this->AbstractClass || (v38 = 1, v9 > (int)this->?) ) /*0x758c42*/
        v38 = 0; /*0x758c44*/
      v11 = *v24; /*0x758c50*/
      v12 = (unsigned __int8 *)(this->? + i); /*0x758c52*/
      v32 = (double)*v12 * v11; /*0x758c76*/
      v28 = (double)v12[1] * v11; /*0x758c88*/
      v30 = (double)v12[2] * v11; /*0x758c96*/
      v13 = VoxelRenderer::ProjectVertex((VoxelRenderer *)this, v32, v28, v30, v38); /*0x758ca5*/
      v14 = v9++ | ((_DWORD)v35 << 8); /*0x758caf*/
      *(_BYTE *)(v14 + this->?) = v13; /*0x758cbb*/
    }
    v15 = (int)v35 + 1 < 16; /*0x758cd0*/
    v35 = (float *)((char *)v35 + 1); /*0x758cd3*/
    ++v24; /*0x758cd7*/
  }
  while ( v15 ); /*0x758cdb*/
  v36 = 16; /*0x758ce5*/
  v25 = v26 + 16; /*0x758cf0*/
  do /*0x758df9*/
  {
    v16 = 1; /*0x758cfc*/
    for ( j = 3; j < 768; j += 3 ) /*0x758d08*/
    {
      if ( v16 < (int)this->AbstractClass || (v39 = 1, v16 > (int)this->?) ) /*0x758d1b*/
        v39 = 0; /*0x758d1d*/
      v18 = *v25; /*0x758d29*/
      v19 = (unsigned __int8 *)(this->? + j); /*0x758d2b*/
      v29 = (double)*v19 * v18; /*0x758d4a*/
      v27 = (double)v19[1] * v18; /*0x758d58*/
      v20 = v18 * (double)v19[2]; /*0x758d60*/
      v31 = v20; /*0x758d62*/
      if ( v29 > 255.0 ) /*0x758d75*/
        v29 = 255.0; /*0x758d77*/
      if ( v27 > 255.0 ) /*0x758d8e*/
        v27 = 255.0; /*0x758d90*/
      if ( v20 > 255.0 ) /*0x758da3*/
        v31 = 255.0; /*0x758da5*/
      v21 = VoxelRenderer::ProjectVertex((VoxelRenderer *)this, v29, v27, v31, v39); /*0x758dc3*/
      v22 = v16++ | (v36 << 8); /*0x758dcd*/
      *(_BYTE *)(v22 + this->?) = v21; /*0x758dd9*/
    }
    result = v36 + 1; /*0x758dea*/
    v15 = ++v36 < 32; /*0x758dee*/
    ++v25; /*0x758df5*/
  }
  while ( v15 ); /*0x758df9*/
  return result; /*0x758dff*/
}



// ==== 0x00758E10  ObjectClass::method_758E10  this=ObjectClass  sig=csp ====
char __thiscall sub_758E10(ObjectClass *this, float a2, float a3, float a4)
{
  unsigned __int8 *uniqueId; // ecx
  char v5; // bl
  int i; // edx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float v11; // [esp+4h] [ebp-8h]

  uniqueId = (unsigned __int8 *)this->?; /*0x758e13*/
  v5 = 0; /*0x758e17*/
  v11 = 100000.0; /*0x758e19*/
  for ( i = 0; i < 256; ++i ) /*0x758e21*/
  {
    v7 = a3 - (double)uniqueId[1]; /*0x758e49*/
    v8 = a4 - (double)uniqueId[2]; /*0x758e51*/
    v9 = v8 * v8 + v7 * v7 + (a2 - (double)*uniqueId) * (a2 - (double)*uniqueId); /*0x758e63*/
    if ( v9 < v11 ) /*0x758e74*/
    {
      v11 = v9; /*0x758e76*/
      v5 = i; /*0x758e7a*/
    }
    uniqueId += 3; /*0x758e81*/
  }
  return v5; /*0x758e8e*/
}



// ==== 0x00758EA0  VoxelRenderer::ProjectVertex  this=VoxelRenderer  sig=csp ====
char __thiscall VoxelRenderer::ProjectVertex(VoxelRenderer *this, float a2, float a3, float a4, char a5)
{
  int v6; // ecx
  int v7; // edx
  int i; // edi
  int v9; // eax
  unsigned __int8 *v10; // eax
  double v11; // st6
  double v12; // st5
  double v13; // st4
  float v15; // [esp+Ch] [ebp-8h]

  if ( a5 ) /*0x758eae*/
    v6 = *(_DWORD *)this->__pad_0; /*0x758eb0*/
  else
    LOBYTE(v6) = 1; /*0x758eb4*/
  v15 = 100000.0; /*0x758eb9*/
  v7 = 1; /*0x758ec1*/
  for ( i = 3; i < 768; i += 3 ) /*0x758ec6*/
  {
    v9 = *(_DWORD *)this->__pad_0; /*0x758ed1*/
    if ( a5 ) /*0x758ed3*/
    {
      if ( v7 < v9 || v7 > this->VoxelRenderer_field_0x04 ) /*0x758edc*/
        goto LABEL_13; /*0x758edc*/
    }
    else if ( v7 >= v9 && v7 <= this->VoxelRenderer_field_0x04 ) /*0x758ee7*/
    {
      goto LABEL_13; /*0x758ee7*/
    }
    v10 = (unsigned __int8 *)(i + this->VoxelRenderer_field_0x10); /*0x758eee*/
    v11 = a3 - (double)v10[1]; /*0x758f14*/
    v12 = a4 - (double)v10[2]; /*0x758f1c*/
    v13 = v12 * v12 + v11 * v11 + (a2 - (double)*v10) * (a2 - (double)*v10); /*0x758f2e*/
    if ( v13 < v15 ) /*0x758f3f*/
    {
      v15 = v13; /*0x758f41*/
      LOBYTE(v6) = v7; /*0x758f45*/
    }
LABEL_13:
    ++v7; /*0x758f4e*/
  }
  return v6; /*0x758f5b*/
}



// ==== 0x00758F70  sub_758F70  this=-  sig=ida-proto ====
int sub_758F70()
{
  dword_B45B18 = 0; /*0x758f72*/
  dword_B45B1C = 0; /*0x758f77*/
  dword_B45B20 = 0; /*0x758f7c*/
  dword_B45B24 = 0; /*0x758f81*/
  return 0; /*0x758f86*/
}



// ==== 0x00758F90  sub_758F90  this=-  sig=ida-proto ====
void sub_758F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x758f9c*/
  dbl_B45B30 = Math::Sqrt(v0 + v0); /*0x758fae*/
}



// ==== 0x00758FC0  sub_758FC0  this=-  sig=ida-proto ====
void sub_758FC0()
{
  dbl_B45B98 = dbl_B45B30 / 60.0; /*0x758fcc*/
}



// ==== 0x00758FE0  sub_758FE0  this=-  sig=ida-proto ====
void sub_758FE0()
{
  dbl_B45B80 = 1.0 / dbl_B45B98; /*0x758fec*/
}



// ==== 0x00759000  sub_759000  this=-  sig=ida-proto ====
void sub_759000()
{
  dbl_B45B78 = 0.0174532925199433 * 45.0; /*0x75900c*/
}



// ==== 0x00759020  sub_759020  this=-  sig=ida-proto ====
void sub_759020()
{
  dbl_B45B38 = 0.0174532925199433 * 60.0; /*0x75902c*/
}



// ==== 0x00759040  sub_759040  this=-  sig=ida-proto ====
void sub_759040()
{
  dbl_B45B10 = 0.0174532925199433 * 90.0; /*0x75904c*/
}



// ==== 0x00759060  sub_759060  this=-  sig=ida-proto ====
__int64 sub_759060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45B10 - dbl_B45B38); /*0x759072*/
  result = Math::RoundToInt(v0 * dbl_B45B30 * 0.5); /*0x759086*/
  dword_B45BA0 = result; /*0x75908b*/
  return result; /*0x759090*/
}



// ==== 0x007590A0  sub_7590A0  this=-  sig=ida-proto ====
void sub_7590A0()
{
  dbl_B45B40 = Math::ArcTan((double)dword_B45BA0 * 0.00390625); /*0x7590b7*/
}



// ==== 0x007590D0  sub_7590D0  this=-  sig=ida-proto ====
void sub_7590D0()
{
  dbl_B45B70 = Math::ArcTan((double)(2 * dword_B45BA0) / dbl_B45B30); /*0x7590f2*/
}



// ==== 0x00759100  sub_759100  this=-  sig=ida-proto ====
__int64 sub_759100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45BA0) + 0.5); /*0x75911b*/
  dword_B45B94 = result; /*0x759120*/
  return result; /*0x759126*/
}



// ==== 0x00759130  sub_759130  this=-  sig=ida-proto ====
int sub_759130()
{
  word_B45B28 = 0; /*0x759132*/
  word_B45B2A = 0; /*0x759138*/
  return 0; /*0x75913e*/
}



// ==== 0x00759140  sub_759140  this=-  sig=ida-proto ====
int sub_759140()
{
  dword_B45B48 = 0; /*0x759142*/
  dword_B45B4C = 0; /*0x759147*/
  dword_B45B50 = 0; /*0x75914c*/
  return 0; /*0x759151*/
}



// ==== 0x00759160  sub_759160  this=-  sig=ida-proto ====
int sub_759160()
{
  dword_B45B90 = 0; /*0x759165*/
  dword_B45B88 = 128; /*0x75916f*/
  dword_B45B8C = 128; /*0x759174*/
  return 128; /*0x759179*/
}



// ==== 0x00759180  sub_759180  this=-  sig=ida-proto ====
int sub_759180()
{
  AsyncIO_Instance = 0; /*0x759187*/
  dword_B45B60 = 0; /*0x75918c*/
  byte_B45B64 = 1; /*0x759191*/
  byte_B45B65 = 0; /*0x759198*/
  dword_B45B58 = (int)&DynamicVectorClass<MovieHandle *>::`vftable'; /*0x75919d*/
  dword_B45B6C = 10; /*0x7591a7*/
  g_AsyncIOState = 0; /*0x7591b1*/
  return atexit(sub_7591C0); /*0x7591bc*/
}



// ==== 0x007591C0  sub_7591C0  this=-  sig=ida-proto ====
void __cdecl sub_7591C0()
{
  dword_B45B58 = (int)&VectorClass<MovieHandle *>::`vftable'; /*0x7591c8*/
  if ( AsyncIO_Instance && byte_B45B65 ) /*0x7591dc*/
  {
    __3_YAXPAX_Z(AsyncIO_Instance); /*0x7591df*/
    AsyncIO_Instance = 0; /*0x7591e7*/
  }
  byte_B45B65 = 0; /*0x7591ed*/
  dword_B45B60 = 0; /*0x7591f3*/
}



// ==== 0x00759200  sub_759200  this=-  sig=ida-proto ====
char sub_759200()
{
  MSG Msg; // [esp+0h] [ebp-1Ch] BYREF

  ++dword_AA0430; /*0x759210*/
  if ( !GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x759223*/
    return 1; /*0x759223*/
  if ( IsMessageDialog(&Msg, 0, 0, 0) ) /*0x75922f*/
  {
    TranslateMessage(&Msg); /*0x75923d*/
    DispatchMessageA(&Msg); /*0x759248*/
    return 1; /*0x759253*/
  }
  return 0; /*0x759250*/
}



// ==== 0x00759260  Stream::InitializeBinkAudio  this=AbstractClass  sig=csp ====
char *__thiscall InitializeBinkAudioStream(char *this, const char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  char v17; // al
  char v19; // [esp+13h] [ebp-1h] BYREF

  CCFileClass::Construct3((int)(this + 4)); /*0x75926a*/
  Stream::CopyFromTemplate(this + 376); /*0x759275*/
  *((_DWORD *)this + 331) = a3; /*0x759282*/
  *((_DWORD *)this + 121) = this; /*0x759288*/
  *((_DWORD *)this + 101) = &v19; /*0x75928e*/
  *((_DWORD *)this + 110) = 0; /*0x75929b*/
  if ( !TestBitArray(15) ) /*0x7592a1*/
    *((_DWORD *)this + 110) |= 1u; /*0x7592af*/
  if ( !TestBitArray(1) ) /*0x7592b7*/
  {
    v9 = *((_DWORD *)this + 110); /*0x7592c0*/
    LOBYTE(v9) = v9 | 4; /*0x7592c6*/
    *((_DWORD *)this + 110) = v9; /*0x7592c8*/
  }
  if ( TestBitArray(10) ) /*0x7592d3*/
  {
    v10 = *((_DWORD *)this + 110); /*0x7592dc*/
    LOBYTE(v10) = v10 | 0x40; /*0x7592e2*/
    *((_DWORD *)this + 110) = v10; /*0x7592e4*/
  }
  if ( TestBitArray(12) ) /*0x7592ef*/
  {
    v11 = *((_DWORD *)this + 110); /*0x7592f8*/
    LOBYTE(v11) = v11 | 0x80; /*0x7592fe*/
    *((_DWORD *)this + 110) = v11; /*0x759300*/
  }
  v12 = *((_DWORD *)this + 111) | 8; /*0x75930c*/
  *((_DWORD *)this + 111) = v12; /*0x75930f*/
  v13 = v12; /*0x75931e*/
  if ( (*(this + 1324) & 2) != 0 ) /*0x759320*/
  {
    LOBYTE(v13) = v12 | 0x20; /*0x759322*/
    *((_DWORD *)this + 111) = v13; /*0x759324*/
    if ( (*(this + 1324) & 4) == 0 ) /*0x759333*/
      goto LABEL_14; /*0x759333*/
    BYTE1(v13) = BYTE1(v12) | 1; /*0x759335*/
  }
  else
  {
    LOBYTE(v13) = v12 & 0xDF; /*0x75933a*/
  }
  *((_DWORD *)this + 111) = v13; /*0x75933c*/
LABEL_14:
  v14 = TestBitArray(17); /*0x759342*/
  v15 = *((_DWORD *)this + 111); /*0x75934e*/
  if ( v14 ) /*0x759354*/
    LOBYTE(v15) = v15 | 4; /*0x759356*/
  else
    LOBYTE(v15) = v15 & 0xFB; /*0x75935a*/
  *((_DWORD *)this + 111) = v15; /*0x759361*/
  v14 = TestBitArray(3); /*0x75936c*/
  v16 = *((_DWORD *)this + 111); /*0x75936e*/
  if ( v14 ) /*0x759374*/
    LOBYTE(v16) = v16 & 0xFE; /*0x759376*/
  else
    v16 |= 1u; /*0x75937a*/
  *((_DWORD *)this + 111) = v16; /*0x759383*/
  *((_DWORD *)this + 102) = -1; /*0x75938d*/
  *((_DWORD *)this + 103) = -1; /*0x759393*/
  this->u8_1A = 0; /*0x75939e*/
  *((_DWORD *)this + 105) = 0; /*0x7593a4*/
  *((_DWORD *)this + 97) = 0; /*0x7593aa*/
  *((_DWORD *)this + 106) = a7; /*0x7593b0*/
  *((_DWORD *)this + 107) = a8; /*0x7593b6*/
  if ( TestBitArray(3) ) /*0x7593bc*/
    this->referenceCount = 1; /*0x7593c5*/
  else
    this->referenceCount = 14; /*0x7593cd*/
  v17 = *(this + 1324); /*0x7593d7*/
  *((_DWORD *)this + 113) = -1; /*0x7593dd*/
  if ( (v17 & 1) != 0 ) /*0x7593e5*/
    *((_DWORD *)this + 94) = sub_75A2B0; /*0x7593e7*/
  else
    *((_DWORD *)this + 94) = sub_75A100; /*0x7593f3*/
  *((_DWORD *)this + 95) = sub_75A2F0; /*0x759402*/
  this->nextArrayIndex = sub_75A350; /*0x75940c*/
  if ( TestBitArray(4) ) /*0x759416*/
  {
    *((_DWORD *)this + 98) = j_Time_GetElapsedMS; /*0x75941f*/
    *((_DWORD *)this + 108) = 60; /*0x759429*/
  }
  else
  {
    *((_DWORD *)this + 98) = sub_4116A0; /*0x759435*/
    *((_DWORD *)this + 108) = 60; /*0x75943f*/
    *((_DWORD *)this + 127) = (unsigned __int16)unk_A8EBA8; /*0x759455*/
  }
  *((_DWORD *)this + 100) = ManageMultimediaTimer; /*0x759463*/
  *((_DWORD *)this + 117) = 0x2000; /*0x75946d*/
  *((_DWORD *)this + 321) = 0; /*0x759477*/
  *((_DWORD *)this + 339) = 0; /*0x75947d*/
  *((_DWORD *)this + 322) = 0; /*0x759483*/
  strcpy(this + 113, a2); /*0x75949f*/
  *((_DWORD *)this + 338) = a6; /*0x7594b0*/
  *((_DWORD *)this + 326) = 0; /*0x7594b7*/
  *((_DWORD *)this + 327) = 0; /*0x7594bd*/
  *((_DWORD *)this + 328) = 0; /*0x7594c3*/
  *((_DWORD *)this + 329) = 0; /*0x7594c9*/
  *((_DWORD *)this + 324) = -1; /*0x7594cf*/
  *(this + 1320) = 0; /*0x7594d9*/
  *((_DWORD *)this + 336) = a4; /*0x7594df*/
  *((_DWORD *)this + 337) = a5; /*0x7594e5*/
  this->referenceCount = 0; /*0x7594eb*/
  *(this + 1300) = 0; /*0x7594ee*/
  *(this + 1360) = 0; /*0x7594f4*/
  *(this + 1361) = 0; /*0x7594fa*/
  *(_DWORD *)this = 0; /*0x759500*/
  return this; /*0x7594b6*/
}



// ==== 0x00759510  CCFileClass::Cleanup  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Cleanup(CCFileClass *this)
{
  System_Cleanup(); /*0x759513*/
  this = (CCFileClass *)((char *)this + 4); /*0x759518*/
  *(_DWORD *)this->CDFileClass = &CCFileClass::`vftable'; /*0x75951e*/
  this->tail_19 = 0; /*0x759524*/
  Vector::Clear((int)this + 88); /*0x75952b*/
  *(_DWORD *)this->CDFileClass = &off_7E1668; /*0x759532*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)this); /*0x75953d*/
}



// ==== 0x00759540  HVAAnimation::LoadFromFile  this=HVAAnimation  sig=csp ====
int __thiscall HVAAnimation::LoadFromFile(HVAAnimation *this, int a2)
{
  int *p_HVAAnimation_field_0x04; // edi
  bool v4; // al
  size_t v6; // eax
  void *v7; // eax
  int v8; // edi
  int v9; // ecx
  unsigned int v10; // eax
  int *v11; // ebp
  unsigned int v12; // ecx
  unsigned int v13; // edx

  if ( *((_BYTE *)this + 112) ) /*0x759548*/
    goto LABEL_6; /*0x759548*/
  p_HVAAnimation_field_0x04 = &this->HVAAnimation_field_0x04; /*0x759550*/
  v4 = (*(int (__thiscall **)(int *, char *, int))(this->HVAAnimation_field_0x04 + 32))( /*0x759560*/
         &this->HVAAnimation_field_0x04,
         (char *)this + 113,
         1) != 0;
  *((_BYTE *)this + 112) = v4; /*0x759565*/
  if ( !v4 ) /*0x759568*/
    return -4; /*0x759573*/
  v6 = (*(int (__thiscall **)(int *))(*p_HVAAnimation_field_0x04 + 44))(&this->HVAAnimation_field_0x04); /*0x75957a*/
  *((_DWORD *)this + 332) = v6; /*0x75957e*/
  *((_DWORD *)this + 334) = 0; /*0x759584*/
  *((_DWORD *)this + 333) = 0; /*0x75958a*/
  v7 = malloc(v6); /*0x759590*/
  *((_DWORD *)this + 335) = v7; /*0x75959a*/
  if ( v7 ) /*0x7595a0*/
  {
LABEL_6:
    v8 = a2; /*0x7595b8*/
    if ( a2 ) /*0x7595be*/
    {
      v9 = *((_DWORD *)this + 333); /*0x7595d0*/
      v10 = *((_DWORD *)this + 332); /*0x7595d6*/
      if ( v9 + a2 > v10 ) /*0x7595e1*/
        v8 = v10 - v9; /*0x7595e5*/
    }
    else
    {
      v8 = *((_DWORD *)this + 332) - *((_DWORD *)this + 333); /*0x7595cc*/
    }
    v11 = &this->HVAAnimation_field_0x04; /*0x7595f6*/
    if ( (*(int (__thiscall **)(int *, int, int))(this->HVAAnimation_field_0x04 + 36))( /*0x759604*/
           &this->HVAAnimation_field_0x04,
           *((_DWORD *)this + 333) + *((_DWORD *)this + 335),
           v8) == v8 )
    {
      v12 = *((_DWORD *)this + 332); /*0x75962f*/
      v13 = v8 + *((_DWORD *)this + 333); /*0x759635*/
      *((_DWORD *)this + 333) = v13; /*0x759639*/
      if ( v13 < v12 ) /*0x759641*/
      {
        return -1; /*0x75965d*/
      }
      else
      {
        (*(void (__thiscall **)(int *))(*v11 + 52))(&this->HVAAnimation_field_0x04); /*0x759648*/
        *((_BYTE *)this + 112) = 0; /*0x75964b*/
        return -2; /*0x759651*/
      }
    }
    else
    {
      (*(void (__thiscall **)(int *))(*v11 + 52))(&this->HVAAnimation_field_0x04); /*0x75960b*/
      *((_BYTE *)this + 112) = 0; /*0x75960e*/
      *((_DWORD *)this + 334) = 0; /*0x759611*/
      *((_DWORD *)this + 333) = 0; /*0x759617*/
      return -5; /*0x759620*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int *))(*p_HVAAnimation_field_0x04 + 52))(&this->HVAAnimation_field_0x04); /*0x7595a6*/
    *((_BYTE *)this + 112) = 0; /*0x7595a9*/
    return -3; /*0x7595af*/
  }
}



// ==== 0x00759670  HVAAnimation::ParseFrames  this=HVAAnimation  sig=csp ====
int __thiscall HVAAnimation::ParseFrames(HVAAnimation *this, int a2, void *a3, unsigned int a4)
{
  int result; // eax
  int v5; // edi

  switch ( a2 ) /*0x759682*/
  {
    case 1: /*0x759682*/
    case 2: /*0x759682*/
    case 3: /*0x759682*/
    case 4: /*0x759682*/
      result = 0; /*0x75968a*/
      break; /*0x75968d*/
    case 5: /*0x759682*/
      v5 = *((_DWORD *)this + 334); /*0x759690*/
      if ( v5 + a4 > *((_DWORD *)this + 332) ) /*0x7596a5*/
        goto LABEL_11; /*0x7596a5*/
      qmemcpy(a3, (const void *)(v5 + *((_DWORD *)this + 335)), a4); /*0x7596bf*/
      *((_DWORD *)this + 334) += a4; /*0x7596d3*/
      result = 0; /*0x7596d9*/
      break; /*0x7596db*/
    case 7: /*0x759682*/
      if ( a3 ) /*0x7596e5*/
      {
        if ( a3 == (void *)1 ) /*0x7596e8*/
        {
          *((_DWORD *)this + 334) += a4; /*0x759714*/
          result = 0; /*0x75971a*/
        }
        else
        {
          if ( a3 != (void *)2 ) /*0x7596eb*/
            goto LABEL_11; /*0x7596eb*/
          *((_DWORD *)this + 334) = *((_DWORD *)this + 332) - a4 - 1; /*0x7596fc*/
          result = 0; /*0x759702*/
        }
      }
      else
      {
        *((_DWORD *)this + 334) = a4; /*0x759725*/
        result = 0; /*0x75972b*/
      }
      break; /*0x759704*/
    default:
LABEL_11:
      result = 1; /*0x759731*/
      break; /*0x759732*/
  }
  return result; /*0x759689*/
}



// ==== 0x00759760  ObjectClass::method  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_759760(TechnoClass *this, const void *a2)
{
  qmemcpy(&this->reloadTimer[2], a2, 0x300u); /*0x759773*/
  *((_BYTE *)this + 1320) = 1; /*0x759776*/
  return this; /*0x759775*/
}



// ==== 0x00759790  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_759790(ObjectClass *this)
{
  return Surface::CreateSurfacePalette((Surface *)this + 43);
}



// ==== 0x007597A0  ObjectClass::Render_Load_7597A0  this=ObjectClass  sig=csp ====
char __thiscall Render_Load_7597A0(TechnoClass *this)
{
  int *v2; // edi
  unsigned __int16 *v4; // eax
  unsigned __int16 v5; // dx

  v2 = &this->reloadTimer[1]; /*0x7597a4*/
  if ( RenderAudioVideoFrame((const char *)&this->estimatedHealth + 1, &this->radarFlashTimer[1], &this->reloadTimer[1]) == -1 ) /*0x7597bc*/
  {
    v4 = (unsigned __int16 *)*v2; /*0x7597ca*/
    this->threatPosed = *(_DWORD *)(*v2 + 16); /*0x7597d2*/
    this->shouldLoseTarget = v4[6]; /*0x7597de*/
    this->disguiseAsType = v4[1]; /*0x7597ea*/
    v5 = v4[2]; /*0x7597f0*/
    this->disguisedAsHouse = v5; /*0x7597f6*/
    LOBYTE(this->planningToken) = 1; /*0x7597fc*/
    return 1; /*0x7597f4*/
  }
  else
  {
    LOBYTE(this->planningToken) = 0; /*0x7597be*/
    return 0; /*0x7597c6*/
  }
}



// ==== 0x00759830  ObjectClass::Render_Load  this=ObjectClass  sig=csp ====
int __thiscall Render_Load_759830(ObjectClass *this, int a2)
{
  int result; // eax

  result = this->u32_77; /*0x759834*/
  if ( a2 != -1 ) /*0x75983d*/
    this->u32_77 = a2; /*0x75983f*/
  return result; /*0x759845*/
}



// ==== 0x00759850  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
bool __thiscall Render_Render_759850(TechnoClass *this, int a2, int a3)
{
  int v3; // eax

  v3 = a3; /*0x759850*/
  if ( a3 < 0 ) /*0x759856*/
    v3 = -1; /*0x759858*/
  return Audio_Render_7C3430(this->reloadTimer[1], a2, v3, 1u) == -1; /*0x759873*/
}



// ==== 0x00759880  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
bool __thiscall Render_Render_759880(TechnoClass *this, int a2, int a3, int a4)
{
  signed int v4; // edx
  signed int v5; // eax
  int v6; // esi

  v4 = a2; /*0x759880*/
  if ( a2 < 0 || a2 >= this->threatPosed ) /*0x75988e*/
    v4 = 0; /*0x759890*/
  v5 = a3; /*0x759892*/
  if ( a3 < 0 || a3 >= this->threatPosed ) /*0x7598a1*/
    v5 = this->threatPosed - 1; /*0x7598a9*/
  v6 = a4; /*0x7598aa*/
  if ( a4 < 0 ) /*0x7598b0*/
    v6 = -1; /*0x7598b2*/
  return SeekAudioStream(this->reloadTimer[1], v4, v5, v6, 0) == -1; /*0x7598cb*/
}



// ==== 0x007598D0  AbstractClass::updateBuildingState  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::updateBuildingState(AbstractClass *this, signed int a2)
{
  if ( a2 != *((_DWORD *)this + 321) && ProcessAudioStreamBuffer(this->needsSave, a2, 0) != -6 ) /*0x7598f2*/
    *((_DWORD *)this + 321) = a2; /*0x7598f4*/
}



// ==== 0x00759940  MovieClass::RenderLoop  this=AbstractClass  sig=csp ====
BOOL __thiscall MovieClass::RenderLoop(char *this, int a2, char a3)
{
  int v4; // edi
  unsigned int v5; // eax
  void (*v6)(void); // eax
  char v8; // [esp+12h] [ebp-26h]
  char v9; // [esp+13h] [ebp-25h]
  _BYTE v10[4]; // [esp+14h] [ebp-24h] BYREF
  MSG Msg; // [esp+1Ch] [ebp-1Ch] BYREF

  v9 = 0; /*0x759951*/
  v8 = 0; /*0x759955*/
  Render_Render_7C3690(this->needsSave); /*0x759970*/
  if ( *((_DWORD *)this + 324) != -1 ) /*0x75997c*/
  {
    Render_Render_7C3710(v10, &a2); /*0x759996*/
    if ( a2 == 1 ) /*0x7599a2*/
    {
      Voxel::BuildIndexTable(*((void **)this + 324)); /*0x7599aa*/
      if ( TestBitArray(11) ) /*0x7599b4*/
        Render_Render_7C3230(IsoTile::Decode16Bit); /*0x7599c7*/
      else
        Render_Render_7C3230(CopySHPFrameToSurface); /*0x7599d3*/
    }
    else if ( a2 == 4 ) /*0x7599d8*/
    {
      Voxel::BuildIndexTable(*((void **)this + 324)); /*0x7599e0*/
      if ( TestBitArray(11) ) /*0x7599ea*/
        Render_Render_7C3230(IsoTile::Decode8BitV2); /*0x759a03*/
    }
  }
  v4 = 0; /*0x759a0e*/
  while ( v4 >= 0 || v4 == -10 || v4 == -9 || v4 == -11 || v4 == -1 ) /*0x759a26*/
  {
    if ( v9 ) /*0x759a30*/
      return 1; /*0x759a30*/
    ++dword_AA0430; /*0x759a3f*/
    if ( GameLoopMessagePump(&Msg, 0, 0, 0, 0) && IsMessageDialog(&Msg, 0, 0, 0) ) /*0x759a5d*/
    {
      TranslateMessage(&Msg); /*0x759a6b*/
      DispatchMessageA(&Msg); /*0x759a76*/
    }
    if ( v8 == 1 ) /*0x759a81*/
    {
      if ( byte_A8ED80 ) /*0x759a89*/
      {
        v8 = 0; /*0x759a99*/
        *(this + 1360) = 0; /*0x759a9d*/
        Debug::Log(); /*0x759aa3*/
        goto LABEL_23; /*0x759aa3*/
      }
      Sleep(0x21u); /*0x759a8d*/
    }
    else
    {
LABEL_23:
      if ( byte_A8ED80 != 1 || *(this + 1360) ) /*0x759ab4*/
      {
        v8 = 1; /*0x759b2a*/
        if ( *(this + 1300) && !*(this + 1360) ) /*0x759b33*/
          ProcessAudioStreamPipeline(this->needsSave, 2, 0); /*0x759b47*/
        *(this + 1360) = 1; /*0x759b51*/
        Debug::Log(); /*0x759b58*/
      }
      else
      {
        v4 = ProcessAudioStreamPipeline(this->needsSave, 1, 0); /*0x759acd*/
        if ( v4 >= 0 ) /*0x759ad1*/
        {
          if ( *(this + 1320) ) /*0x759ad7*/
          {
            Surface::CreateSurfacePalette(this + 516); /*0x759ae5*/
            *(this + 1320) = 0; /*0x759aea*/
          }
          if ( *(_DWORD *)this ) /*0x759af0*/
          {
            v5 = MovieClass::ComputeTime(this->needsSave); /*0x759afa*/
            BinkMovie::CheckKeyframeTransition(*(_DWORD **)this, v5); /*0x759b02*/
          }
          v6 = (void (*)(void))*((_DWORD *)this + 338); /*0x759b07*/
          if ( v6 ) /*0x759b0f*/
            v6(); /*0x759b11*/
          *((_DWORD *)this + 321) = v4 + 1; /*0x759b16*/
        }
      }
      if ( !a3 && EventQueue::Process(dword_87F770) && EventQueue::Read(dword_87F770) == 2075 ) /*0x759b8d*/
        v9 = 1; /*0x759b93*/
    }
  }
  return v9 != 0; /*0x759ba3*/
}



// ==== 0x00759BC0  ObjectClass::method_759BC0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_759BC0(TechnoClass *this, signed int a2)
{
  signed int v2; // edi
  unsigned int result; // eax

  v2 = a2; /*0x759bc2*/
  if ( a2 == -1 ) /*0x759bcb*/
    v2 = this->threatPosed - 1; /*0x759bd3*/
  if ( this->empLockRemaining != v2 ) /*0x759bda*/
  {
    if ( ProcessAudioStreamBuffer(this->reloadTimer[1], v2, 0) != -6 ) /*0x759bee*/
      this->empLockRemaining = v2; /*0x759bf0*/
    this->empLockRemaining = v2; /*0x759bf6*/
  }
  MovieClass::RenderLoop((char *)this, v2, 0); /*0x759c01*/
  result = this->empLockRemaining; /*0x759c06*/
  if ( result >= this->threatPosed ) /*0x759c14*/
    this->empLockRemaining = 0; /*0x759c16*/
  return result; /*0x759c20*/
}



// ==== 0x00759C30  VQAClass::AdvanceFrame  this=AbstractClass  sig=csp ====
char __thiscall sub_759C30(char *this, _BYTE *a2)
{
  _BYTE *v2; // ebp
  int v4; // eax
  int v5; // edi
  unsigned int v6; // eax
  void (*v7)(void); // eax
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x759c34*/
  *a2 = 0; /*0x759c3b*/
  if ( !*(this + 1361) ) /*0x759c40*/
  {
    Render_Render_7C3690(this->needsSave, *((_DWORD *)this + 322)); /*0x759c56*/
    if ( *((_DWORD *)this + 324) != -1 ) /*0x759c62*/
    {
      Render_Render_7C3710(*((unsigned __int8 **)this + 128), &v10, &v9, &a2); /*0x759c78*/
      if ( a2 == (_BYTE *)1 || a2 == (_BYTE *)4 ) /*0x759c89*/
      {
        Voxel::BuildIndexTable(*((void **)this + 324)); /*0x759c91*/
        if ( a2 == (_BYTE *)1 ) /*0x759c9b*/
          Render_Render_7C3230(this->needsSave, (int)sub_7C6B70, (int)CopySHPFrameToSurface); /*0x759cad*/
      }
    }
    Debug::Log(); /*0x759cb7*/
    *(this + 1361) = 1; /*0x759cbf*/
  }
  if ( *(this + 1360) == 1 && (dword_A8D5F8 & 2) == 0 && !dword_A8EDA0 ) /*0x759cdf*/
  {
    if ( byte_A8ED80 != 1 ) /*0x759ce8*/
      goto LABEL_28; /*0x759ce8*/
    *(this + 1360) = 0; /*0x759cf3*/
    Debug::Log(); /*0x759cfa*/
  }
  if ( byte_A8ED80 == 1 && !*(this + 1360) ) /*0x759d0f*/
  {
    v4 = ProcessAudioStreamPipeline(this->needsSave, 1, 0); /*0x759d2a*/
    v5 = v4; /*0x759d2f*/
    if ( v4 < 0 ) /*0x759d33*/
    {
      if ( v4 >= -11 && (v4 <= -10 || v4 == -1) ) /*0x759d94*/
      {
        *v2 = 0; /*0x759d97*/
        return 0; /*0x759d9c*/
      }
      else
      {
        *v2 = 1; /*0x759da6*/
        return 0; /*0x759dab*/
      }
    }
    else
    {
      if ( *(this + 1320) ) /*0x759d35*/
      {
        Surface::CreateSurfacePalette(this + 516); /*0x759d45*/
        *(this + 1320) = 0; /*0x759d4a*/
      }
      if ( *(_DWORD *)this ) /*0x759d51*/
      {
        v6 = MovieClass::ComputeTime(this->needsSave); /*0x759d5c*/
        BinkMovie::CheckKeyframeTransition(*(_DWORD **)this, v6); /*0x759d64*/
      }
      v7 = (void (*)(void))*((_DWORD *)this + 338); /*0x759d69*/
      if ( v7 ) /*0x759d71*/
        v7(); /*0x759d73*/
      *((_DWORD *)this + 321) = v5 + 1; /*0x759d78*/
      return 1; /*0x759d76*/
    }
  }
LABEL_28:
  if ( !byte_B45BA4 ) /*0x759dbb*/
  {
    if ( *(this + 1300) && !*(this + 1360) ) /*0x759dc7*/
      ProcessAudioStreamPipeline(this->needsSave, 2, 0); /*0x759dde*/
    *(this + 1360) = 1; /*0x759de3*/
    byte_B45BA4 = 1; /*0x759def*/
    Debug::Log(); /*0x759df6*/
  }
  return 0; /*0x759d7e*/
}



// ==== 0x00759E10  AbstractClass::processConstruction  this=AbstractClass  sig=csp ====
char __thiscall AbstractClass::processConstruction(AbstractClass *this)
{
  char result; // al

  result = *((_BYTE *)this + 1300); /*0x759e13*/
  if ( result ) /*0x759e1b*/
  {
    result = *((_BYTE *)this + 1360); /*0x759e1d*/
    if ( !result ) /*0x759e25*/
      result = ProcessAudioStreamPipeline(this->needsSave, 2, 0); /*0x759e34*/
  }
  *((_BYTE *)this + 1360) = 1; /*0x759e39*/
  return result; /*0x759e40*/
}



// ==== 0x00759E50  AbstractClass::checkBuildProgress  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::checkBuildProgress(AbstractClass *this)
{
  *((_BYTE *)this + 1360) = 0; /*0x759e50*/
}



// ==== 0x00759E60  DSurface::FlipIfNeeded  this=DSurface  sig=csp ====
char __thiscall DSurface::FlipIfNeeded(DSurface *this)
{
  char result; // al

  result = (char)this->DSurface_field_0x514; /*0x759e60*/
  if ( result ) /*0x759e68*/
    return DSurface::Flip((DSurface *)this->DSurface_field_0x200); /*0x759e70*/
  return result; /*0x759e75*/
}



// ==== 0x00759E80  AbstractClass::finalizeConstruction  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::finalizeConstruction(AbstractClass *this)
{
  int result; // eax
  _DWORD *vtable0; // ecx

  result = AbstractClass::finalizeDestruction(this->needsSave); /*0x759e89*/
  vtable0 = this->vtable0; /*0x759e8e*/
  if ( this->vtable0 ) /*0x759e8e*/
  {
    vtable0[1] = 0; /*0x6c9d22*/
    vtable0[2] = 0; /*0x6c9d25*/
    return 0; /*0x6c9d20*/
  }
  return result; /*0x759e90*/
}



// ==== 0x00759EA0  ObjectClass::Render_Load_759EA0  this=ObjectClass  sig=csp ====
int __thiscall Render_Load_759EA0(TechnoClass *this)
{
  return this->shouldLoseTarget; /*0x759ea6*/
}



// ==== 0x00759EB0  ObjectClass::Render_Load_759EB0  this=ObjectClass  sig=csp ====
bool __thiscall Render_Load_759EB0(TechnoClass *this, int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  int v8; // edx
  int v9; // eax

  v6 = a3; /*0x759eb2*/
  if ( a3 == -1 ) /*0x759eb9*/
    v6 = *((_DWORD *)this + 328); /*0x759ebb*/
  else
    *((_DWORD *)this + 328) = a3; /*0x759ec3*/
  v7 = a4; /*0x759ec9*/
  if ( a4 == -1 ) /*0x759ed0*/
    v7 = *((_DWORD *)this + 329); /*0x759ed2*/
  else
    *((_DWORD *)this + 329) = a4; /*0x759eda*/
  v8 = a5; /*0x759ee0*/
  if ( a5 == -1 ) /*0x759ee7*/
    v8 = 0; /*0x759ee9*/
  v9 = a6; /*0x759eeb*/
  if ( a6 == -1 ) /*0x759ef2*/
    v9 = 0; /*0x759ef4*/
  return Audio_Process_7C3270(this->reloadTimer[1], a2, v6, v7, v8, v9) == -1; /*0x759f0c*/
}



// ==== 0x00759F20  ObjectClass::Render_Load_759F20  this=ObjectClass  sig=csp ====
int __thiscall Render_Load_759F20(TechnoClass *this, int a2)
{
  this->firingRadBeam = a2; /*0x759f24*/
  return a2; /*0x759f2a*/
}



// ==== 0x00759F70  MovieClass::GetWidth  this=MovieClass  sig=csp ====
int __thiscall MovieClass::GetWidth(MovieClass *this)
{
  return *((_DWORD *)this + 326); /*0x759f76*/
}



// ==== 0x00759F80  MovieClass::GetHeight  this=MovieClass  sig=csp ====
int __thiscall MovieClass::GetHeight(MovieClass *this)
{
  return *((_DWORD *)this + 327); /*0x759f86*/
}



// ==== 0x00759FB0  VoxelRenderer::InitializeBuffers  this=VoxelRenderer  sig=csp ====
BOOL __thiscall sub_759FB0(int this, int a2, _DWORD *a3, int a4)
{
  BOOL result; // eax
  bool v6; // al
  int v7; // esi
  int v8; // esi
  int v9; // esi

  result = 1; /*0x759fb7*/
  switch ( a2 ) /*0x759fc6*/
  {
    case 1: /*0x759fc6*/
    case 2: /*0x759fc6*/
      goto LABEL_13;
    case 3: /*0x759fc6*/
      v6 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)(this + 4) + 32))(this + 4, a3, 1) != 0; /*0x759fdf*/
      *(_BYTE *)(this + 112) = v6; /*0x759fe4*/
      result = !v6; /*0x759fec*/
      break; /*0x759fef*/
    case 4: /*0x759fc6*/
      (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4) + 52))(this + 4); /*0x75a0cf*/
      *(_BYTE *)(this + 112) = 0; /*0x75a0d4*/
      result = 0; /*0x75a0d2*/
      break; /*0x75a0d2*/
    case 5: /*0x759fc6*/
      v7 = a4; /*0x759ffc*/
      result = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)(this + 4) + 36))(this + 4, a3, a4) != v7; /*0x75a00c*/
      break; /*0x75a00f*/
    case 6: /*0x759fc6*/
      result = 1; /*0x75a012*/
      break; /*0x75a018*/
    case 7: /*0x759fc6*/
      result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4, a3) == 0; /*0x75a033*/
      break; /*0x75a034*/
    case 8: /*0x759fc6*/
      if ( a4 <= 0 ) /*0x75a03d*/
      {
        v9 = this + 4; /*0x75a078*/
        result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4, a3) == 0; /*0x75a086*/
        if ( !result ) /*0x75a087*/
        {
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 36))(v9, &a4, 1) != 1; /*0x75a09c*/
          if ( !result ) /*0x75a09e*/
            result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 40))(v9, -1, 1) == 0; /*0x75a0b0*/
        }
      }
      else
      {
        v8 = this + 4; /*0x75a046*/
        result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4 - 1, a3) == 0; /*0x75a055*/
        if ( !result ) /*0x75a056*/
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v8 + 36))(v8, &a4, 1) != 1; /*0x75a06c*/
      }
      break; /*0x75a06e*/
    case 9: /*0x759fc6*/
      *a3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 44))(this + 4); /*0x75a0c1*/
LABEL_13:
      result = 0; /*0x75a0c3*/
      break; /*0x75a0c3*/
    default:
      return result;
  }
  return result; /*0x759fee*/
}



// ==== 0x0075A100  sub_75A100  this=-  sig=ida-proto ====
BOOL __cdecl sub_75A100(int a1, int a2, _DWORD *a3, int a4)
{
  return VoxelRenderer::InitializeBuffers(*(_DWORD *)(a1 + 172), a2, a3, a4); /*0x75a11e*/
}



// ==== 0x0075A120  ObjectClass::method_75A120  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_75A120(int this, int a2, int *a3, int a4)
{
  BOOL result; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // eax
  int v12; // [esp-Ch] [ebp-10h]

  result = 1; /*0x75a127*/
  switch ( a2 ) /*0x75a136*/
  {
    case 1: /*0x75a136*/
    case 2: /*0x75a136*/
      goto LABEL_14;
    case 3: /*0x75a136*/
      a2 = 0; /*0x75a143*/
      a3 = 0; /*0x75a147*/
      if ( !LookupFileInfoCache((const char *)(this + 113), 0, &a3, &a2, 0) ) /*0x75a15e*/
        goto LABEL_5; /*0x75a15e*/
      v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)(this + 4) + 32))(this + 4, a3[3], 1) == 0; /*0x75a17c*/
      v7 = *(_DWORD *)(this + 4); /*0x75a17e*/
      v12 = a2; /*0x75a180*/
      *(_BYTE *)(this + 112) = !v6; /*0x75a186*/
      result = (*(int (__thiscall **)(int, int, int))(v7 + 40))(this + 4, v12, 1) == 0; /*0x75a191*/
      break; /*0x75a193*/
    case 4: /*0x75a136*/
      (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4) + 52))(this + 4); /*0x75a273*/
      *(_BYTE *)(this + 112) = 0; /*0x75a278*/
      return 0; /*0x75a276*/
    case 5: /*0x75a136*/
      v8 = a4; /*0x75a1a0*/
      return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)(this + 4) + 36))(this + 4, a3, a4) != v8; /*0x75a1b3*/
    case 6: /*0x75a136*/
LABEL_5:
      result = 1; /*0x75a1b6*/
      break; /*0x75a1bc*/
    case 7: /*0x75a136*/
      result = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4, a3) == 0; /*0x75a1d7*/
      break; /*0x75a1d8*/
    case 8: /*0x75a136*/
      if ( a4 <= 0 ) /*0x75a1e1*/
      {
        v10 = this + 4; /*0x75a21c*/
        result = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4, a3) == 0; /*0x75a22a*/
        if ( !result ) /*0x75a22b*/
        {
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v10 + 36))(v10, &a4, 1) != 1; /*0x75a240*/
          if ( !result ) /*0x75a242*/
            result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 40))(v10, -1, 1) == 0; /*0x75a254*/
        }
      }
      else
      {
        v9 = this + 4; /*0x75a1ea*/
        result = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)(this + 4) + 40))(this + 4, a4 - 1, a3) == 0; /*0x75a1f9*/
        if ( !result ) /*0x75a1fa*/
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 36))(v9, &a4, 1) != 1; /*0x75a210*/
      }
      break; /*0x75a212*/
    case 9: /*0x75a136*/
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 44))(this + 4); /*0x75a25e*/
      *a3 = v11; /*0x75a265*/
LABEL_14:
      result = 0; /*0x75a267*/
      break; /*0x75a267*/
    default:
      return result;
  }
  return result; /*0x75a192*/
}



// ==== 0x0075A2B0  sub_75A2B0  this=-  sig=ida-proto ====
BOOL __cdecl sub_75A2B0(int a1, int a2, int *a3, int a4)
{
  return sub_75A120(*(_DWORD *)(a1 + 172), a2, a3, a4); /*0x75a2ce*/
}



// ==== 0x0075A2F0  sub_75A2F0  this=-  sig=ida-proto ====
_DWORD *__cdecl sub_75A2F0(int a1, int a2, _DWORD *Block, size_t Size)
{
  _DWORD *result; // eax

  switch ( a2 ) /*0x75a2fc*/
  {
    case 2: /*0x75a2fc*/
      result = malloc(Size); /*0x75a308*/
      break; /*0x75a310*/
    case 3: /*0x75a2fc*/
      free(Block); /*0x75a316*/
      result = 0; /*0x75a31e*/
      break; /*0x75a320*/
    case 4: /*0x75a2fc*/
    case 5: /*0x75a2fc*/
      result = Block; /*0x75a321*/
      break; /*0x75a325*/
    case 6: /*0x75a2fc*/
      *Block = -1; /*0x75a32a*/
      goto LABEL_6; /*0x75a32a*/
    default:
LABEL_6:
      result = 0; /*0x75a330*/
      break; /*0x75a330*/
  }
  return result; /*0x75a310*/
}



// ==== 0x0075A350  sub_75A350  this=-  sig=ida-proto ====
int __cdecl sub_75A350(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  int v4; // ebx
  int i; // eax
  int result; // eax

  v4 = *(_DWORD *)(a1 + 172); /*0x75a359*/
  switch ( a2 ) /*0x75a367*/
  {
    case 2: /*0x75a367*/
      for ( i = 0; i < 256; ++i ) /*0x75a374*/
        a3[i] *= 4; /*0x75a37c*/
      qmemcpy((void *)(v4 + 516), a3, 0x300u); /*0x75a392*/
      *(_BYTE *)(v4 + 1320) = 1; /*0x75a395*/
      result = 0; /*0x75a39d*/
      break; /*0x75a3a0*/
    case 3: /*0x75a367*/
      if ( *(_DWORD *)(v4 + 1296) != -1 ) /*0x75a3a8*/
        sub_748380((unsigned __int16 *)a3, a4 >> 1); /*0x75a3b4*/
      *(_DWORD *)(v4 + 1356) = *(_DWORD *)(v4 + 1284); /*0x75a3c1*/
      result = 0; /*0x75a3bf*/
      break; /*0x75a3c8*/
    case 6: /*0x75a367*/
      result = (*(int (**)(void))(v4 + 1344))(); /*0x75a3c9*/
      break; /*0x75a3d0*/
    case 7: /*0x75a367*/
      (*(void (**)(void))(v4 + 1348))(); /*0x75a3d1*/
      goto LABEL_10; /*0x75a3d1*/
    default:
LABEL_10:
      result = 0; /*0x75a3d7*/
      break; /*0x75a3d7*/
  }
  return result; /*0x75a39f*/
}



// ==== 0x0075A400  ReturnNull2  this=-  sig=ida-proto ====
int ReturnNull2()
{
  return 0; /*0x75a402*/
}



// ==== 0x0075A410  nullsub_257  this=-  sig=ida-proto ====
void nullsub_257()
{
  ; /*0x75a410*/
}



// ==== 0x0075A420  nullsub_258  this=-  sig=ida-proto ====
void nullsub_258()
{
  ; /*0x75a420*/
}



// ==== 0x0075A430  _DynamicVectorClass_PAVMovieHandle::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_MovieHandle::Destroy(_DynamicVectorClass_PAVMovieHandle *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x75a436*/
  this->m_10 = 0; /*0x75a439*/
  if ( v2 && BYTE1(this->m_C) ) /*0x75a440*/
  {
    __3_YAXPAX_Z(v2); /*0x75a446*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75a44e*/
  }
  BYTE1(this->m_C) = 0; /*0x75a451*/
  this->m_8 = 0; /*0x75a454*/
}



// ==== 0x0075A460  _DynamicVectorClass_PAVMovieHandle::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MovieHandle::GetItemIndex(_DynamicVectorClass_PAVMovieHandle *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x75a460*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x75a475*/
  else
    return 0; /*0x75a467*/
}



// ==== 0x0075A480  _VectorClass_PAVMovieHandle::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MovieHandle::Get(_VectorClass_PAVMovieHandle *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x75a48a*/
}



// ==== 0x0075A490  _VectorClass_PAVMovieHandle::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MovieHandle::Add(_VectorClass_PAVMovieHandle *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x75a492*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x75a49d*/
  {
    v3 = 0; /*0x75a49f*/
    if ( m_8 <= 0 ) /*0x75a4a3*/
      return 1; /*0x75a4c3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x75a4a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x75a4ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x75a4b4*/
    {
      ++v3; /*0x75a4b6*/
      ++v4; /*0x75a4b7*/
      if ( v3 >= m_8 ) /*0x75a4bc*/
        return 1; /*0x75a4bc*/
    }
  }
  return 0; /*0x75a4be*/
}



// ==== 0x0075A4D0  _VectorClass_PAVMovieHandle::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MovieHandle::Release(_VectorClass_PAVMovieHandle *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x75a4dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x75a4e6*/
    if ( a3 ) /*0x75a4ec*/
      v4 = a3; /*0x75a502*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75a4fe*/
    LOBYTE(this->m_C) = 1; /*0x75a506*/
    if ( v4 ) /*0x75a50a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x75a515*/
      {
        m_8 = this->m_8; /*0x75a51c*/
        if ( a2 < m_8 ) /*0x75a521*/
          m_8 = a2; /*0x75a523*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x75a529*/
          ++i; /*0x75a52e*/
        if ( BYTE1(this->m_C) ) /*0x75a53b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x75a546*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x75a54e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x75a557*/
      this->m_8 = a2; /*0x75a55f*/
      BYTE1(this->m_C) = a3 == 0; /*0x75a562*/
      return 1; /*0x75a568*/
    }
    else
    {
      return 0; /*0x75a50f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMovieHandle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x75a572*/
    return 1; /*0x75a578*/
  }
}



// ==== 0x0075A580  _VectorClass_PAVMovieHandle::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MovieHandle::Remove(_VectorClass_PAVMovieHandle *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x75a58d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x75a593*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75a59b*/
  }
  BYTE1(this->m_C) = 0; /*0x75a59e*/
  this->m_8 = 0; /*0x75a5a1*/
}



// ==== 0x0075A5B0  _VectorClass_PAVMovieHandle::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MovieHandle::GetSize(_VectorClass_PAVMovieHandle *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x75a5b0*/
    return 0; /*0x75a5b8*/
  m_8 = this->m_8; /*0x75a5be*/
  result = 0; /*0x75a5c1*/
  if ( m_8 <= 0 ) /*0x75a5c5*/
    return -1; /*0x75a5dc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x75a5cb*/
  {
    if ( ++result >= m_8 ) /*0x75a5da*/
      return -1; /*0x75a5da*/
  }
  return result; /*0x75a5ba*/
}



// ==== 0x0075A5F0  _VectorClass_PAVMovieHandle::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MovieHandle::GetCapacity(_VectorClass_PAVMovieHandle *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x75a5f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x75a605*/
  else
    return 0; /*0x75a5f7*/
}



// ==== 0x0075A610  _DynamicVectorClass_PAVMovieHandle::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_MovieHandle::SetCapacity(_DynamicVectorClass_PAVMovieHandle *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x75a61c*/
  {
    LOBYTE(this->m_C) = 0; /*0x75a622*/
    if ( a3 ) /*0x75a628*/
      v4 = a3; /*0x75a63e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x75a63a*/
    LOBYTE(this->m_C) = 1; /*0x75a642*/
    if ( !v4 ) /*0x75a646*/
      return 0; /*0x75a6ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x75a648*/
    {
      m_8 = this->m_8; /*0x75a64f*/
      if ( a2 < m_8 ) /*0x75a654*/
        m_8 = a2; /*0x75a656*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x75a65c*/
        ++i; /*0x75a661*/
      if ( BYTE1(this->m_C) ) /*0x75a66e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x75a679*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x75a681*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x75a68a*/
    this->m_8 = a2; /*0x75a692*/
    BYTE1(this->m_C) = a3 == 0; /*0x75a695*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMovieHandle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x75a69e*/
  }
  v7 = this->m_8; /*0x75a6a1*/
  if ( v7 < this->m_10 ) /*0x75a6a9*/
    this->m_10 = v7; /*0x75a6ab*/
  return 1; /*0x75a6ae*/
}



// ==== 0x0075A6C0  _DynamicVectorClass_PAVMovieHandle::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_MovieHandle::FindItemIndex(_DynamicVectorClass_PAVMovieHandle *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x75a6c0*/
  result = 0; /*0x75a6c3*/
  if ( m_10 <= 0 ) /*0x75a6c8*/
    return -1; /*0x75a6df*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x75a6ce*/
  {
    if ( ++result >= m_10 ) /*0x75a6dd*/
      return -1; /*0x75a6dd*/
  }
  return result; /*0x75a6e2*/
}



// ==== 0x0075A6F0  _VectorClass_PAVMovieHandle::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MovieHandle::QueryInterface(_VectorClass_PAVMovieHandle *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x75a6f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MovieHandle *>::`vftable'; /*0x75a6f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x75a700*/
  {
    __3_YAXPAX_Z(v3); /*0x75a708*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75a710*/
  }
  BYTE1(this->m_C) = 0; /*0x75a71b*/
  this->m_8 = 0; /*0x75a721*/
  if ( (a2 & 1) != 0 ) /*0x75a728*/
    __3_YAXPAX_Z(this); /*0x75a72b*/
  return this->__pad_0; /*0x75a735*/
}



// ==== 0x0075A740  _DynamicVectorClass_PAVMovieHandle::Constructor_VectorClass_MovieHandle___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MovieHandle::Constructor_VectorClass_MovieHandle___(
        _DynamicVectorClass_PAVMovieHandle *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x75a743*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MovieHandle *>::`vftable'; /*0x75a746*/
  if ( v3 && BYTE1(this->m_C) ) /*0x75a750*/
  {
    __3_YAXPAX_Z(v3); /*0x75a758*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x75a760*/
  }
  BYTE1(this->m_C) = 0; /*0x75a76b*/
  this->m_8 = 0; /*0x75a771*/
  if ( (a2 & 1) != 0 ) /*0x75a778*/
    __3_YAXPAX_Z(this); /*0x75a77b*/
  return this->__pad_0; /*0x75a785*/
}



// ==== 0x0075A790  AnimSystem::Init  this=AnimSystem  sig=ida-proto ====
char AnimSystem_Init()
{
  int i; // edx
  int v1; // eax
  char v2; // cl
  char result; // al

  for ( i = 0; i < 18; ++i ) /*0x75a791*/
  {
    v1 = i >> 3; /*0x75a79e*/
    v2 = ~(1 << (i & 7)) & byte_B45BA8[i >> 3]; /*0x75a7a9*/
    byte_B45BA8[v1] = v2; /*0x75a7af*/
  }
  result = byte_B45BA8[0] | 0x40; /*0x75a7bd*/
  byte_B45BA8[0] |= 0x40u; /*0x75a7bf*/
  return result; /*0x75a7bc*/
}



// ==== 0x0075A7D0  ResetAnimSystem  this=-  sig=ida-proto ====
int __fastcall AnimSystem_Reset(int a1)
{
  byte_B45BA8[a1 >> 3] |= 1 << (a1 & 7); /*0x75a7dc*/
  return a1 >> 3; /*0x75a7e2*/
}



// ==== 0x0075A810  TestBitArray  this=-  sig=csp ====
int __fastcall TestBitArray(int a1)
{
  int result; // eax

  result = a1 >> 3; /*0x75a81b*/
  LOBYTE(result) = ((unsigned __int8)(1 << (a1 & 7)) & (unsigned __int8)byte_B45BA8[a1 >> 3]) != 0; /*0x75a824*/
  return result; /*0x75a827*/
}



// ==== 0x0075A880  sub_75A880  this=-  sig=ida-proto ====
int sub_75A880()
{
  dword_B45BB8 = 0; /*0x75a882*/
  dword_B45BBC = 0; /*0x75a887*/
  dword_B45BC0 = 0; /*0x75a88c*/
  dword_B45BC4 = 0; /*0x75a891*/
  return 0; /*0x75a896*/
}



// ==== 0x0075A8A0  sub_75A8A0  this=-  sig=ida-proto ====
void sub_75A8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75a8ac*/
  dbl_B45BD0 = Math::Sqrt(v0 + v0); /*0x75a8be*/
}



// ==== 0x0075A8D0  sub_75A8D0  this=-  sig=ida-proto ====
void sub_75A8D0()
{
  dbl_B45C20 = dbl_B45BD0 / 60.0; /*0x75a8dc*/
}



// ==== 0x0075A8F0  sub_75A8F0  this=-  sig=ida-proto ====
void sub_75A8F0()
{
  dbl_B45C08 = 1.0 / dbl_B45C20; /*0x75a8fc*/
}



// ==== 0x0075A910  sub_75A910  this=-  sig=ida-proto ====
void sub_75A910()
{
  dbl_B45C00 = 0.0174532925199433 * 45.0; /*0x75a91c*/
}



// ==== 0x0075A930  sub_75A930  this=-  sig=ida-proto ====
void sub_75A930()
{
  dbl_B45BD8 = 0.0174532925199433 * 60.0; /*0x75a93c*/
}



// ==== 0x0075A950  sub_75A950  this=-  sig=ida-proto ====
void sub_75A950()
{
  dbl_B45BB0 = 0.0174532925199433 * 90.0; /*0x75a95c*/
}



// ==== 0x0075A970  sub_75A970  this=-  sig=ida-proto ====
__int64 sub_75A970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45BB0 - dbl_B45BD8); /*0x75a982*/
  result = Math::RoundToInt(v0 * dbl_B45BD0 * 0.5); /*0x75a996*/
  dword_B45C28 = result; /*0x75a99b*/
  return result; /*0x75a9a0*/
}



// ==== 0x0075A9B0  sub_75A9B0  this=-  sig=ida-proto ====
void sub_75A9B0()
{
  dbl_B45BE0 = Math::ArcTan((double)dword_B45C28 * 0.00390625); /*0x75a9c7*/
}



// ==== 0x0075A9E0  sub_75A9E0  this=-  sig=ida-proto ====
void sub_75A9E0()
{
  dbl_B45BF8 = Math::ArcTan((double)(2 * dword_B45C28) / dbl_B45BD0); /*0x75aa02*/
}



// ==== 0x0075AA10  sub_75AA10  this=-  sig=ida-proto ====
__int64 sub_75AA10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45C28) + 0.5); /*0x75aa2b*/
  dword_B45C1C = result; /*0x75aa30*/
  return result; /*0x75aa36*/
}



// ==== 0x0075AA40  sub_75AA40  this=-  sig=ida-proto ====
int sub_75AA40()
{
  word_B45BC8 = 0; /*0x75aa42*/
  word_B45BCA = 0; /*0x75aa48*/
  return 0; /*0x75aa4e*/
}



// ==== 0x0075AA50  sub_75AA50  this=-  sig=ida-proto ====
int sub_75AA50()
{
  g_AsyncMovieState = 0; /*0x75aa52*/
  g_MovieFrameState1 = 0; /*0x75aa57*/
  g_MovieFrameState2 = 0; /*0x75aa5c*/
  return 0; /*0x75aa61*/
}



// ==== 0x0075AA70  sub_75AA70  this=-  sig=ida-proto ====
int sub_75AA70()
{
  dword_B45C18 = 0; /*0x75aa75*/
  dword_B45C10 = 128; /*0x75aa7f*/
  dword_B45C14 = 128; /*0x75aa84*/
  return 128; /*0x75aa89*/
}



// ==== 0x0075AA90  VoxelAnimClass::Reset  this=WalkLocomotionClass  sig=csp ====
int __thiscall VoxelAnimClass::Reset(VoxelAnimClass *this)
{
  LocomotionClass::Init((LocomotionClass *)this); /*0x75aa93*/
  this->VoxelAnimClass_field_0x1C[0] = g_AsyncMovieState; /*0x75aaa1*/
  *(_DWORD *)this->__pad_20 = g_MovieFrameState1; /*0x75aaaa*/
  *(_DWORD *)&this->__pad_20[4] = g_MovieFrameState2; /*0x75aab6*/
  *(_DWORD *)&this->__pad_20[8] = g_AsyncMovieState; /*0x75aabe*/
  *(_DWORD *)&this->__pad_20[12] = g_MovieFrameState1; /*0x75aac6*/
  *(_DWORD *)&this->__pad_20[16] = g_MovieFrameState2; /*0x75aace*/
  this->__pad_20[20] = 0; /*0x75aad3*/
  this->__pad_20[21] = 0; /*0x75aad6*/
  this->__pad_20[22] = 0; /*0x75aad9*/
  *(_DWORD *)&this->__pad_20[24] = 0; /*0x75aadc*/
  this->VoxelAnimClass_field_0x0 = &WalkLocomotionClass::`vftable'; /*0x75aadf*/
  this->VoxelAnimClass_field_0x4[0] = (int)&WalkLocomotionClass::`vftable'; /*0x75aae5*/
  *(_DWORD *)&this->__pad_C[12] = &WalkLocomotionClass::`vftable'; /*0x75aaec*/
  return (int)this; /*0x75aaf5*/
}



// ==== 0x0075AB30  JumpjetLocomotionClass::SmallStub_75AB30  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SmallStub_75AB30(JumpjetLocomotionClass *this)
{
  return LOBYTE(this->Wobbles); /*0x75ab37*/
}



// ==== 0x0075AB40  WalkLocomotionClass::ComputeFloatExpression_4  this=WalkLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::ComputeFloatExpression_4(WalkLocomotionClass *this)
{
  return (*(unsigned __int8 (__stdcall **)(WalkLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x75ab8c*/
      && *(double *)this->?->currentSpeed_percentage > 0.0
      && (this->Dest[2] != g_AsyncMovieState
       || this->HeadToCoord[0] != g_MovieFrameState1
       || this->HeadToCoord[1] != g_MovieFrameState2);
}



// ==== 0x0075ABA0  JumpjetLocomotionClass::GetMovementCoordinate_2  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetMovementCoordinate_2(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int Speed; // edx
  float Climb; // esi
  float *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x75aba9*/
  {
    result = a2; /*0x75abb0*/
    Speed = this->Speed; /*0x75abb7*/
    Climb = this->Climb; /*0x75abba*/
    v5 = (float *)a2; /*0x75abbd*/
    *a2 = this->TurnRate; /*0x75abbf*/
  }
  else
  {
    result = a2; /*0x75abcc*/
    Speed = g_MovieFrameState1; /*0x75abd6*/
    Climb = *(float *)&g_MovieFrameState2; /*0x75abdc*/
    v5 = (float *)a2; /*0x75abe2*/
    *a2 = g_AsyncMovieState; /*0x75abe4*/
  }
  *((_DWORD *)v5 + 1) = Speed; /*0x75abc1*/
  v5[2] = Climb; /*0x75abc4*/
  return result; /*0x75abc7*/
}



// ==== 0x0075AC00  JumpjetLocomotionClass::GetRenderCoordinate_2  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetRenderCoordinate_2(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int Height; // edx
  float Accel; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( LODWORD(this->Crash) == g_AsyncMovieState /*0x75ac2b*/
    && this->Height == g_MovieFrameState1
    && LODWORD(this->Accel) == g_MovieFrameState2 )
  {
    Owner = this->?; /*0x75ac4b*/
    location = Owner->?; /*0x75ac54*/
    v7 = Owner->?[0]; /*0x75ac56*/
    v8 = Owner->?[1]; /*0x75ac58*/
    v9 = location[2]; /*0x75ac5b*/
    *a2 = v7; /*0x75ac64*/
    a2[1] = v8; /*0x75ac66*/
    a2[2] = v9; /*0x75ac69*/
    return a2; /*0x75ac5e*/
  }
  else
  {
    Height = this->Height; /*0x75ac34*/
    Accel = this->Accel; /*0x75ac37*/
    *a2 = LODWORD(this->Crash); /*0x75ac3c*/
    a2[1] = Height; /*0x75ac3e*/
    *((float *)a2 + 2) = Accel; /*0x75ac41*/
    return a2; /*0x75ac44*/
  }
}



// ==== 0x0075AC80  WalkLocomotionClass::DrawVoxelAnimation  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DrawVoxelAnimation(WalkLocomotionClass *this)
{
  BYTE1(this->HeadToCoord[2]) = 1; /*0x75ac8a*/
  VoxelAnim::Draw((int)this - 4, (_DWORD *)1); /*0x75ac8e*/
  BYTE1(this->HeadToCoord[2]) = 0; /*0x75ac93*/
  return (*(int (__stdcall **)(WalkLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x75ac9d*/
}



// ==== 0x0075ACB0  WalkLocomotionClass::ConvertCoordToCell_4  this=WalkLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::ConvertCoordToCell_4(WalkLocomotionClass *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx

  LOBYTE(v4) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x75acbd*/
  if ( !(_BYTE)v4 ) /*0x75acc5*/
  {
    LOBYTE(v4) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x75acd0*/
    if ( !(_BYTE)v4 ) /*0x75acd8*/
    {
      LOBYTE(v4) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x75ace3*/
      if ( !(_BYTE)v4 ) /*0x75aceb*/
      {
        v4 = a2; /*0x75acf1*/
        v5 = a3; /*0x75acf5*/
        v6 = a4; /*0x75acf9*/
        *(_DWORD *)this->__pad_18 = a2; /*0x75ad00*/
        this->Dest[0] = v5; /*0x75ad03*/
        this->Dest[1] = v6; /*0x75ad06*/
        if ( v4 == g_AsyncMovieState && v5 == g_MovieFrameState1 && v6 == g_MovieFrameState2 ) /*0x75ad25*/
        {
          if ( this->Dest[2] == g_AsyncMovieState /*0x75ad72*/
            && this->HeadToCoord[0] == g_MovieFrameState1
            && this->HeadToCoord[1] == g_MovieFrameState2 )
          {
            LOBYTE(v4) = this->HeadToCoord[2]; /*0x75ad74*/
            LOBYTE(this->HeadToCoord[2]) = 0; /*0x75ad77*/
            if ( (_BYTE)v4 ) /*0x75ad7d*/
              LOBYTE(v4) = (*((char (__thiscall **)(FootClass *))this->?->TechnoClass + 339))(this->?); /*0x75ad84*/
          }
        }
        else
        {
          a3 = v5; /*0x75ad27*/
          a2 = v4; /*0x75ad35*/
          a4 = v6; /*0x75ad39*/
          v4 = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x75ad3d*/
          if ( (*(_DWORD *)(v4 + 320) & 0x100) != 0 ) /*0x75ad4b*/
          {
            v4 = Coord::ScaleToScreenY((Coord *)0x3C); /*0x75ad52*/
            this->Dest[1] += v4; /*0x75ad57*/
          }
          LOBYTE(this->HeadToCoord[2]) = 1; /*0x75ad5a*/
        }
      }
    }
  }
  return v4; /*0x75ad5e*/
}



// ==== 0x0075ADA0  WalkLocomotionClass::DispatchVirtualCall_8  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_8(WalkLocomotionClass *this)
{
  int result; // eax

  result = (int)this; /*0x75ada0*/
  *(_DWORD *)this->__pad_18 = g_AsyncMovieState; /*0x75adad*/
  this->Dest[0] = g_MovieFrameState1; /*0x75adb6*/
  this->Dest[1] = g_MovieFrameState2; /*0x75adbf*/
  if ( this->Dest[2] == g_AsyncMovieState /*0x75ade5*/
    && this->HeadToCoord[0] == g_MovieFrameState1
    && this->HeadToCoord[1] == g_MovieFrameState2 )
  {
    LOBYTE(this->HeadToCoord[2]) = 0; /*0x75ade9*/
    BYTE2(this->HeadToCoord[2]) = 0; /*0x75adec*/
    return (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 339))(this->?); /*0x75adf6*/
  }
  return result; /*0x75adfc*/
}



// ==== 0x0075AE00  WalkLocomotionClass::SynchronizeFacingDirection_1  this=WalkLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SynchronizeFacingDirection_1(WalkLocomotionClass *this, int a2)
{
  return FacingClass::Set_SyncLog((char *)this->?->?, &a2); /*0x75ae1f*/
}



// ==== 0x0075AE30  WalkLocomotionClass::DispatchVirtualCall_9  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_9(WalkLocomotionClass *this, int a2, int a3, int a4)
{
  char v4; // bl
  int result; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  v6[0] = a2; /*0x75ae45*/
  v4 = this->HeadToCoord[2]; /*0x75ae4d*/
  v6[1] = a3; /*0x75ae51*/
  v6[2] = a4; /*0x75ae59*/
  Voxel::DrawHelper((Voxel *)((char *)this - 4), v6); /*0x75ae5d*/
  result = g_AsyncMovieState; /*0x75ae62*/
  if ( this->Dest[2] == g_AsyncMovieState /*0x75ae95*/
    && this->HeadToCoord[0] == g_MovieFrameState1
    && this->HeadToCoord[1] == g_MovieFrameState2
    && *(_DWORD *)this->__pad_18 == g_AsyncMovieState
    && this->Dest[0] == g_MovieFrameState1
    && this->Dest[1] == g_MovieFrameState2 )
  {
    LOBYTE(this->HeadToCoord[2]) = 0; /*0x75ae99*/
    if ( v4 ) /*0x75ae9d*/
      return (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 339))(this->?); /*0x75aea4*/
  }
  return result; /*0x75aeaa*/
}



// ==== 0x0075AEC0  VoxelAnim::Draw  this=VoxelAnim  sig=csp ====
char __thiscall VoxelAnim_Draw(int this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  _DWORD *v13; // eax
  int *v14; // eax
  _BYTE *v15; // ecx
  int v16; // eax
  int v17; // ecx
  _BYTE *v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // edx
  _DWORD *v21; // esi
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // ecx
  _DWORD *v28; // eax
  _DWORD *v29; // edx
  _DWORD *v30; // esi
  int v31; // edx
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // eax
  int *v35; // eax
  int v36; // eax
  int v37; // ecx
  _DWORD *v38; // edx
  int v39; // ecx
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // edx
  int v43; // edx
  int v44; // esi
  int v45; // edi
  _DWORD *v46; // eax
  int v47; // ecx
  _DWORD *v48; // esi
  int v49; // edx
  int v50; // eax
  _DWORD *v5... [35635 chars total]



// ==== 0x0075C240  Voxel::DrawHelper  this=Voxel  sig=csp ====
char __thiscall Voxel::DrawHelper(Voxel *this, _DWORD *a2)
{
  int *Voxel_field_0x28; // ebx
  int *Voxel_field_0xC; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  _WORD *v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // ebx
  _WORD *v14; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  CellClass *v17; // eax
  int v18; // eax
  _DWORD *v19; // ebp
  CellClass *v20; // eax
  int v21; // ebx
  CellClass *v22; // eax
  int *v23; // eax
  signed int v24; // edi
  CellClass *v25; // eax
  int *v26; // eax
  CellClass *v27; // eax
  int v28; // eax
  int *v30; // ecx
  int v31; // [esp-4h] [ebp-2Ch]
  char v32[4]; // [esp+Ch] [ebp-1Ch]
  char v33; // [esp+Ch] [ebp-1Ch]
  __int16 v34; // [esp+Eh] [ebp-1Ah]
  int v35; // [esp+10h] [ebp-18h] BYREF
  int v36; // [esp+14h] [ebp-14h]
  int v37; // [esp+18h] [ebp-10h]
  _DWORD v38[3]; // [esp+1Ch] [ebp-Ch] BYREF
  char v39; // [esp+2Ch] [ebp+4h]

  Voxel_field_0x28 = this->Voxel_field_0x28; /*0x75c251*/
  if ( this->Voxel_field_0x28[0] == g_AsyncMovieState /*0x75c26e*/
    && this->Voxel_field_0x2C[0] == g_MovieFrameState1
    && *(_DWORD *)this->__pad_30 == g_MovieFrameState2 )
  {
    Voxel_field_0xC = (int *)this->Voxel_field_0xC; /*0x75c278*/
    v35 = Voxel_field_0xC[39]; /*0x75c287*/
    v36 = Voxel_field_0xC[40]; /*0x75c28e*/
    v37 = Voxel_field_0xC[41]; /*0x75c295*/
    (*(void (__stdcall **)(int *))(*Voxel_field_0xC + 244))(&v35); /*0x75c2a0*/
  }
  else
  {
    (*(void (__stdcall **)(int *))(*(_DWORD *)this->Voxel_field_0xC + 244))(this->Voxel_field_0x28); /*0x75c276*/
  }
  v39 = 0; /*0x75c2aa*/
  v38[0] = *a2; /*0x75c2b3*/
  v6 = *a2; /*0x75c2b7*/
  v38[1] = a2[1]; /*0x75c2bc*/
  v38[2] = a2[2]; /*0x75c2c3*/
  if ( v6 == g_AsyncMovieState && a2[1] == g_MovieFrameState1 && a2[2] == g_MovieFrameState2 )
  {
    *Voxel_field_0x28 = *a2; /*0x75c5b7*/
    this->Voxel_field_0x2C[0] = a2[1]; /*0x75c5bc*/
    *(_DWORD *)this->__pad_30 = a2[2]; /*0x75c5c2*/
  }
  else
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 8 /*0x75c33c*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 9
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 7
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 11
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->Voxel_field_0xC + 388))(this->Voxel_field_0xC) == 25 )
    {
      v7 = this->Voxel_field_0xC; /*0x75c342*/
      v8 = *(_DWORD *)(v7 + 1444); /*0x75c345*/
      if ( v8 ) /*0x75c34d*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 44))(*(_DWORD *)(v7 + 1444)) == 1 ) /*0x75c359*/
        {
          v34 = a2[1] / 256; /*0x75c37e*/
          v9 = *a2 / 256; /*0x75c385*/
          v10 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v8 + 440))(v8, &v35); /*0x75c388*/
          if ( *v10 == (_WORD)v9 && v10[1] == v34 ) /*0x75c39c*/
            v39 = 1; /*0x75c39e*/
        }
      }
      v11 = *(_DWORD *)(this->Voxel_field_0xC + 1444); /*0x75c3a6*/
      *(_DWORD *)v32 = v11; /*0x75c3ae*/
      if ( v11 ) /*0x75c3b2*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 ) /*0x75c3bc*/
        {
          v12 = *a2 / 256; /*0x75c3e4*/
          v13 = a2[1] / 256; /*0x75c3e7*/
          v14 = (_WORD *)(*(int (__thiscall **)(char *, int *))(**(_DWORD **)v32 + 440))(*(char **)v32, &v35); /*0x75c3ea*/
          if ( *v14 == (_WORD)v12 && v14[1] == (_WORD)v13 ) /*0x75c3f9*/
            v39 = 1; /*0x75c3fb*/
        }
      }
      v15 = this->Voxel_field_0xC; /*0x75c400*/
      v16 = *(_DWORD **)(v15 + 1444); /*0x75c403*/
      if ( v16 ) /*0x75c40b*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(*v16 + 44))(*(_DWORD *)(v15 + 1444)) == 6 ) /*0x75c417*/
        {
          v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x75c41f*/
          if ( Cell::IsBridge((Cell *)v17) == v16 ) /*0x75c42d*/
            v39 = 1; /*0x75c42f*/
        }
      }
    }
    v18 = *(_DWORD *)(this->Voxel_field_0xC + 732); /*0x75c439*/
    if ( v18 )
    {
      if ( *(_DWORD *)(v18 + 728) )
      {
        v19 = (_DWORD *)this->Voxel_field_0xC; /*0x75c44b*/
        v35 = 0; /*0x75c44f*/
        v36 = 0; /*0x75c453*/
        v20 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x75c463*/
        if ( Object::FindClosestObjectCell((Object *)v20, &v35, 0, 0) == v19[183] )
        {
          v21 = v19 ? ((*(int (__thiscall **)(_DWORD *))(*v19 + 44))(v19) == 15 ? (unsigned int)v19 : 0) : 0;
          v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x75c49a*/
          if ( BuildingClass::CheckBridge(*(BuildingClass **)(*(_DWORD *)(this->Voxel_field_0xC + 732) + 728), v21, v22) ) /*0x75c4b0*/
            v39 = 1; /*0x75c4b9*/
        }
      }
    }
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v38)->flags[0] & 0x100) == 0 /*0x75c513*/
      || (v23 = (int *)(this->Voxel_field_0xC + 156),
          v35 = *v23,
          v36 = v23[1],
          v24 = v23[2],
          v33 = 1,
          v24 <= (int)(3 * dword_B45C28 + Cell::GetGroundHeight(v38))) )
    {
      v33 = 0; /*0x75c515*/
    }
    v25 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v38); /*0x75c53a*/
    v26 = ObjectPlacement::CalcPosition((ObjectPlacement *)v25, &v35, v38, v39, v33, 0); /*0x75c541*/
    Voxel_field_0x28 = this->Voxel_field_0x28; /*0x75c548*/
    this->Voxel_field_0x28[0] = *v26; /*0x75c54d*/
    this->Voxel_field_0x2C[0] = v26[1]; /*0x75c552*/
    v31 = this->Voxel_field_0xC; /*0x75c55b*/
    *(_DWORD *)this->__pad_30 = v26[2]; /*0x75c562*/
    v27 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this->Voxel_field_0x28); /*0x75c565*/
    if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v27, v31) ) /*0x75c56c*/
    {
      v28 = this->Voxel_field_0xC; /*0x75c575*/
      if ( !*(_BYTE *)(v28 + 129) ) /*0x75c578*/
      {
        *Voxel_field_0x28 = g_AsyncMovieState; /*0x75c58a*/
        this->Voxel_field_0x2C[0] = g_MovieFrameState1; /*0x75c592*/
        *(_DWORD *)this->__pad_30 = g_MovieFrameState2; /*0x75c59b*/
        if ( !*(_BYTE *)(v28 + 144) ) /*0x75c59e*/
          return 0; /*0x75c5b0*/
      }
    }
  }
  if ( *Voxel_field_0x28 == g_AsyncMovieState /*0x75c5e7*/
    && Voxel_field_0x28[1] == g_MovieFrameState1
    && Voxel_field_0x28[2] == g_MovieFrameState2 )
  {
    v30 = (int *)this->Voxel_field_0xC; /*0x75c602*/
    v35 = v30[39]; /*0x75c611*/
    v36 = v30[40]; /*0x75c618*/
    v37 = v30[41]; /*0x75c61f*/
    (*(void (__thiscall **)(int *, int *))(*v30 + 240))(v30, &v35); /*0x75c62a*/
    return 0; /*0x75c632*/
  }
  else
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)this->Voxel_field_0xC + 240))( /*0x75c5f1*/
      this->Voxel_field_0xC,
      Voxel_field_0x28);
    return 1; /*0x75c5f9*/
  }
}



// ==== 0x0075C640  WalkLocomotionClass::ddtor  this=WalkLocomotionClass  sig=csp ====
int __stdcall WalkLocomotionClass::ddtor(WalkLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x75c646*/
    return -2147467261; /*0x75c648*/
  *(IID *)a2 = g_CLSID_WalkLocomotion; /*0x75c656*/
  a2[3] = unk_7E9A6C; /*0x75c670*/
  return 0; /*0x75c64d*/
}



// ==== 0x0075C680  WalkLocomotionClass::BeginMove  this=WalkLocomotionClass  sig=csp ====
int __stdcall WalkLocomotionClass::BeginMove(WalkLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x75c687*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x75c692*/
  if ( v3 < 0 ) /*0x75c696*/
    return v3; /*0x75c696*/
  if ( this ) /*0x75c69a*/
  {
    this->Piggybackee = 0; /*0x75c69c*/
    *(_DWORD *)this->LocomotionClass = &WalkLocomotionClass::`vftable'; /*0x75c6a3*/
    *(_DWORD *)&this->LocomotionClass[4] = &WalkLocomotionClass::`vftable'; /*0x75c6a9*/
    *(_DWORD *)this->__pad_18 = &WalkLocomotionClass::`vftable'; /*0x75c6b0*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x75c6c3*/
  if ( !(_BYTE)pStm ) /*0x75c6cc*/
    return v3; /*0x75c6f8*/
  Piggybackee = this->Piggybackee; /*0x75c6ce*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x75c6d1*/
  if ( Piggybackee ) /*0x75c6d6*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x75c6db*/
  *p_Piggybackee = 0; /*0x75c6e5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x75c6f1*/
}



// ==== 0x0075C700  WalkLocomotionClass::LoadFromStream  this=WalkLocomotionClass  sig=csp ====
int __stdcall WalkLocomotionClass::LoadFromStream(WalkLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  WalkLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x75c706*/
  v4 = this; /*0x75c70b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x75c717*/
  if ( IPersistStream < 0 ) /*0x75c71b*/
    return IPersistStream; /*0x75c71b*/
  if ( !v4->Piggybackee ) /*0x75c726*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x75c7c3*/
    LOBYTE(a3) = 0; /*0x75c7cf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x75c7d4*/
    return IPersistStream; /*0x75c7d8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x75c72c*/
  LOBYTE(a3) = 1; /*0x75c738*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x75c73d*/
  Piggybackee = v4->Piggybackee; /*0x75c740*/
  pPStm = 0; /*0x75c743*/
  if ( Piggybackee ) /*0x75c74d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, WalkLocomotionClass **))Piggybackee)( /*0x75c75e*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x75c762*/
    {
      v9 = (int *)this; /*0x75c77b*/
      if ( pPStm ) /*0x75c781*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x75c786*/
      pPStm = v9; /*0x75c789*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x75c768*/
      pPStm = 0; /*0x75c76d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x75c797*/
      WinAPI::Wrapper(v8); /*0x75c79a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x75c7ab*/
  if ( pPStm ) /*0x75c7b3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x75c7b8*/
  return v10; /*0x75c7bd*/
}



// ==== 0x0075C7E0  WalkLocomotionClass::SmallStub_75C7E0  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_75C7E0(WalkLocomotionClass *this)
{
  return 2; /*0x75c7e5*/
}



// ==== 0x0075C7F0  WalkLocomotionClass::QueryInterface  this=WalkLocomotionClass  sig=csp ====
int __stdcall WalkLocomotionClass::QueryInterface(WalkLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x75c802*/
  if ( result == -2147467262 ) /*0x75c80c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x75c81b*/
    {
      if ( this ) /*0x75c822*/
        pad_18 = this->__pad_18; /*0x75c824*/
      else
        pad_18 = 0; /*0x75c829*/
      *a3 = (int)pad_18; /*0x75c82b*/
    }
    if ( *a3 ) /*0x75c82e*/
    {
      (*(void (__stdcall **)(WalkLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x75c842*/
      return 0; /*0x75c845*/
    }
    else
    {
      return -2147467262; /*0x75c836*/
    }
  }
  return result; /*0x75c834*/
}



// ==== 0x0075C850  JumpjetLocomotionClass::StubReturnZero_22  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_22(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x75c856*/
    return -2147467261; /*0x75c858*/
  if ( LODWORD(this->Climb) ) /*0x75c864*/
    return -2147467259; /*0x75c88b*/
  LODWORD(this->Climb) = a2; /*0x75c872*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x75c878*/
  return 0; /*0x75c85d*/
}



// ==== 0x0075C8A0  JumpjetLocomotionClass::StubReturnZero_23  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_23(JumpjetLocomotionClass *this, _DWORD *a2)
{
  float Climb; // eax

  if ( !a2 ) /*0x75c8a6*/
    return -2147467261; /*0x75c8a8*/
  Climb = this->Climb; /*0x75c8b4*/
  if ( Climb == 0.0 ) /*0x75c8b9*/
    return 1; /*0x75c8c9*/
  *(float *)a2 = Climb; /*0x75c8bb*/
  this->Climb = 0.0; /*0x75c8bd*/
  return 0; /*0x75c8ad*/
}



// ==== 0x0075C8E0  JumpjetLocomotionClass::CheckBaseClassState_0  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckBaseClassState_0(JumpjetLocomotionClass *this)
{
  return !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) /*0x75c910*/
      && LODWORD(this->Climb)
      && !BYTE1(this->Speed)
      && !*(_BYTE *)(*((_DWORD *)this - 3) + 1709);
}



// ==== 0x0075C920  JumpjetLocomotionClass::LoadLocomotionFromStream_4  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_4(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  float *p_Climb; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x75c921*/
  if ( !pad_0 ) /*0x75c928*/
    return -2147467261; /*0x75c931*/
  p_Climb = &this->Climb; /*0x75c93b*/
  if ( LODWORD(this->Climb) ) /*0x75c938*/
  {
    this = 0; /*0x75c944*/
    v5 = StreamClass::Set2((StreamClass *)&this, p_Climb); /*0x75c955*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x75c963*/
      WinAPI::Wrapper(v5); /*0x75c966*/
    if ( !this ) /*0x75c971*/
      return -2147467259; /*0x75c97a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x75c984*/
    if ( this ) /*0x75c98c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x75c995*/
      return v6; /*0x75c99c*/
    }
  }
  else
  {
    pad_0 = 0; /*0x75c9a2*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x75c9ac*/
      return -2147467259; /*0x75c9ac*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x75c9bd*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x75c9c1*/
    {
      v9 = this; /*0x75c9d5*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x75c9dd*/
      v8 = v9; /*0x75c9e2*/
      pad_0 = v9->LocomotionClass; /*0x75c9e5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x75c9c7*/
      v8 = 0; /*0x75c9cc*/
      pad_0 = 0; /*0x75c9ce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x75c9f3*/
      WinAPI::Wrapper(v7); /*0x75c9f6*/
    if ( !v8 ) /*0x75ca01*/
      return -2147467259; /*0x75ca0a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x75ca14*/
    if ( pad_0 ) /*0x75ca1c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x75ca21*/
  }
  return v6; /*0x75c92a*/
}



// ==== 0x0075CA30  WalkLocomotionClass::DispatchVirtualCall_10  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_10(WalkLocomotionClass *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  FootClass *Owner; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x75ca30*/
  if ( !a2 ) /*0x75ca39*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(WalkLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x75ca48*/
                     this,
                     v6);
    v5[0] = *v3; /*0x75ca4d*/
    v5[1] = v3[1]; /*0x75ca54*/
    Owner = this->?; /*0x75ca5b*/
    v5[2] = v3[2]; /*0x75ca5e*/
    return (*((int (__thiscall **)(FootClass *, _DWORD *))Owner->TechnoClass + 61))(Owner, v5); /*0x75ca69*/
  }
  return result; /*0x75ca70*/
}



// ==== 0x0075CA80  WalkLocomotionClass::IsPositionWithinThreshold_1  this=WalkLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsPositionWithinThreshold_1(WalkLocomotionClass *this, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(WalkLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))(this, v9); /*0x75ca93*/
  v5 = v4[2]; /*0x75ca9b*/
  v6 = *v4; /*0x75cac7*/
  v7 = v4[1] / 256; /*0x75cadd*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x75cb01*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= dword_B45C28;
}



// ==== 0x0075CB20  WalkLocomotionClass::SmallStub_75CB20  this=WalkLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SmallStub_75CB20(WalkLocomotionClass *this)
{
  return BYTE2(this->HeadToCoord[2]); /*0x75cb27*/
}



// ==== 0x0075CB30  WalkLocomotionClass::InitMultiFieldArray_1  this=WalkLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::InitMultiFieldArray_1(WalkLocomotionClass *this)
{
  *(_DWORD *)this->__pad_18 = g_AsyncMovieState; /*0x75cb40*/
  this->Dest[0] = g_MovieFrameState1; /*0x75cb48*/
  this->Dest[1] = g_MovieFrameState2; /*0x75cb51*/
  this->Dest[2] = g_AsyncMovieState; /*0x75cb5a*/
  this->HeadToCoord[0] = g_MovieFrameState1; /*0x75cb62*/
  this->HeadToCoord[1] = g_MovieFrameState2; /*0x75cb6b*/
  return &this->Dest[2]; /*0x75cb6e*/
}



// ==== 0x0075CB80  WalkLocomotionClass::AddRef  this=WalkLocomotionClass  sig=csp ====
LONG __stdcall WalkLocomotionClass::AddRef(WalkLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x75cb8a*/
}



// ==== 0x0075CB90  WalkLocomotionClass::Release  this=WalkLocomotionClass  sig=csp ====
LONG __stdcall WalkLocomotionClass::Release(WalkLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x75cb9a*/
}



// ==== 0x0075CBA0  JumpjetLocomotionClass::ShortFunc_75CBA0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_75CBA0(int a1)
{
  return *(_DWORD *)(a1 + 32) != 0; /*0x75cbae*/
}



// ==== 0x0075CBC0  WalkLocomotionClass::SetByteField_3  this=WalkLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField_3(WalkLocomotionClass *this)
{
  BYTE2(this->HeadToCoord[2]) = 0; /*0x75cbc4*/
  return (int)this->LocomotionClass; /*0x75cbc8*/
}



// ==== 0x0075CBD0  WalkLocomotionClass::StubReturn60  this=WalkLocomotionClass  sig=csp ====
int WalkLocomotionClass::StubReturn60(WalkLocomotionClass *this)
{
  return 60; /*0x75cbd5*/
}



// ==== 0x0075CBE0  WalkLocomotionClass::ProcessMove  this=WalkLocomotionClass  sig=csp ====
_DWORD *__thiscall WalkLocomotionClass::ProcessMove(WalkLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  *(_DWORD *)this->LocomotionClass = &WalkLocomotionClass::`vftable'; /*0x75cbe3*/
  *(_DWORD *)&this->LocomotionClass[4] = &WalkLocomotionClass::`vftable'; /*0x75cbe9*/
  *(_DWORD *)this->__pad_18 = &WalkLocomotionClass::`vftable'; /*0x75cbf0*/
  Piggybackee = this->Piggybackee; /*0x75cbf7*/
  if ( Piggybackee ) /*0x75cbfc*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x75cc01*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x75cc06*/
  if ( (a2 & 1) != 0 ) /*0x75cc10*/
    __3_YAXPAX_Z(this); /*0x75cc13*/
  return this->LocomotionClass; /*0x75cc1d*/
}



// ==== 0x0075CC30  JumpjetLocomotionClass::SmallStub_75CC30  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_75CC30(int a1, const void *a2, int *a3)
{
  return WalkLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x0075CC40  JumpjetLocomotionClass::SmallStub_75CC40  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_75CC40(int a1)
{
  return WalkLocomotionClass::AddRef(a1 - 4);
}



// ==== 0x0075CC50  JumpjetLocomotionClass::SmallStub_75CC50  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_75CC50(int a1)
{
  return WalkLocomotionClass::Release((volatile LONG *)(a1 - 4));
}



// ==== 0x0075CC60  JumpjetLocomotionClass::SmallStub_75CC60  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_75CC60(int a1, const void *a2, int *a3)
{
  return WalkLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}



// ==== 0x0075CC70  JumpjetLocomotionClass::SmallStub_75CC70  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_75CC70(int a1)
{
  return WalkLocomotionClass::AddRef(a1 - 24);
}



// ==== 0x0075CC80  JumpjetLocomotionClass::SmallStub_75CC80  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_75CC80(int a1)
{
  return WalkLocomotionClass::Release((volatile LONG *)(a1 - 24));
}



// ==== 0x0075CC90  sub_75CC90  this=-  sig=ida-proto ====
void sub_75CC90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75cc9c*/
  dbl_B45C40 = Math::Sqrt(v0 + v0); /*0x75ccae*/
}



// ==== 0x0075CCC0  sub_75CCC0  this=-  sig=ida-proto ====
void sub_75CCC0()
{
  dbl_B45C90 = dbl_B45C40 / 60.0; /*0x75cccc*/
}



// ==== 0x0075CCE0  sub_75CCE0  this=-  sig=ida-proto ====
void sub_75CCE0()
{
  dbl_B45C78 = 1.0 / dbl_B45C90; /*0x75ccec*/
}



// ==== 0x0075CD00  sub_75CD00  this=-  sig=ida-proto ====
void sub_75CD00()
{
  dbl_B45C70 = 0.0174532925199433 * 45.0; /*0x75cd0c*/
}



// ==== 0x0075CD20  sub_75CD20  this=-  sig=ida-proto ====
void sub_75CD20()
{
  dbl_B45C48 = 0.0174532925199433 * 60.0; /*0x75cd2c*/
}



// ==== 0x0075CD40  sub_75CD40  this=-  sig=ida-proto ====
void sub_75CD40()
{
  dbl_B45C30 = 0.0174532925199433 * 90.0; /*0x75cd4c*/
}



// ==== 0x0075CD60  sub_75CD60  this=-  sig=ida-proto ====
__int64 sub_75CD60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45C30 - dbl_B45C48); /*0x75cd72*/
  result = Math::RoundToInt(v0 * dbl_B45C40 * 0.5); /*0x75cd86*/
  dword_B45C98 = result; /*0x75cd8b*/
  return result; /*0x75cd90*/
}



// ==== 0x0075CDA0  sub_75CDA0  this=-  sig=ida-proto ====
void sub_75CDA0()
{
  dbl_B45C50 = Math::ArcTan((double)dword_B45C98 * 0.00390625); /*0x75cdb7*/
}



// ==== 0x0075CDD0  sub_75CDD0  this=-  sig=ida-proto ====
void sub_75CDD0()
{
  dbl_B45C68 = Math::ArcTan((double)(2 * dword_B45C98) / dbl_B45C40); /*0x75cdf2*/
}



// ==== 0x0075CE00  sub_75CE00  this=-  sig=ida-proto ====
__int64 sub_75CE00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45C98) + 0.5); /*0x75ce1b*/
  dword_B45C8C = result; /*0x75ce20*/
  return result; /*0x75ce26*/
}



// ==== 0x0075CE30  sub_75CE30  this=-  sig=ida-proto ====
int sub_75CE30()
{
  word_B45C38 = 0; /*0x75ce32*/
  word_B45C3A = 0; /*0x75ce38*/
  return 0; /*0x75ce3e*/
}



// ==== 0x0075CE40  sub_75CE40  this=-  sig=ida-proto ====
int sub_75CE40()
{
  dword_B45C58 = 0; /*0x75ce42*/
  dword_B45C5C = 0; /*0x75ce47*/
  dword_B45C60 = 0; /*0x75ce4c*/
  return 0; /*0x75ce51*/
}



// ==== 0x0075CE60  sub_75CE60  this=-  sig=ida-proto ====
int sub_75CE60()
{
  dword_B45C88 = 0; /*0x75ce65*/
  dword_B45C80 = 128; /*0x75ce6f*/
  dword_B45C84 = 128; /*0x75ce74*/
  return 128; /*0x75ce79*/
}



// ==== 0x0075CEC0  WarheadTypeClass::Construct  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass_Constructor(int this, char *Source)
{
  int v3; // eax
  int v4; // eax

  AbstractTypeClass::Constructor(this, Source); /*0x75cecb*/
  *(_DWORD *)(this + 152) = 0; /*0x75ced8*/
  *(_DWORD *)(this + 156) = 0; /*0x75cede*/
  *(_DWORD *)(this + 248) = 0; /*0x75cee4*/
  *(_DWORD *)(this + 252) = 1072693248; /*0x75ceeb*/
  *(_DWORD *)(this + 256) = 0; /*0x75cef8*/
  AnimTypeVector::Constructor((_DWORD *)(this + 260), 0, 0); /*0x75cefe*/
  *(_DWORD *)(this + 276) = 0; /*0x75cf08*/
  *(_DWORD *)(this + 280) = 10; /*0x75cf0b*/
  *(_DWORD *)(this + 260) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75cf0e*/
  *(_DWORD *)(this + 288) = 0; /*0x75cf14*/
  *(_DWORD *)(this + 292) = 0; /*0x75cf1a*/
  *(_DWORD *)(this + 296) = 0; /*0x75cf25*/
  *(_DWORD *)(this + 300) = 1065353216; /*0x75cf2b*/
  *(_BYTE *)(this + 304) = 0; /*0x75cf31*/
  *(_DWORD *)(this + 308) = 5; /*0x75cf37*/
  *(_DWORD *)(this + 312) = 1065353216; /*0x75cf41*/
  *(_DWORD *)(this + 316) = 0; /*0x75cf47*/
  *(_DWORD *)(this + 320) = 0; /*0x75cf4d*/
  *(_BYTE *)(this + 324) = 0; /*0x75cf53*/
  *(_BYTE *)(this + 325) = 0; /*0x75cf59*/
  *(_BYTE *)(this + 326) = 0; /*0x75cf5f*/
  *(_BYTE *)(this + 327) = 0; /*0x75cf65*/
  *(_BYTE *)(this + 328) = 0; /*0x75cf6b*/
  *(_BYTE *)(this + 329) = 0; /*0x75cf71*/
  *(_BYTE *)(this + 330) = 0; /*0x75cf77*/
  *(_BYTE *)(this + 331) = 0; /*0x75cf7d*/
  *(_BYTE *)(this + 332) = 0; /*0x75cf83*/
  *(_BYTE *)(this + 333) = 0; /*0x75cf89*/
  *(_BYTE *)(this + 334) = 0; /*0x75cf8f*/
  *(_BYTE *)(this + 335) = 0; /*0x75cf95*/
  *(_BYTE *)(this + 336) = 0; /*0x75cf9b*/
  *(_BYTE *)(this + 337) = 0; /*0x75cfa1*/
  *(_BYTE *)(this + 338) = 0; /*0x75cfa7*/
  *(_BYTE *)(this + 339) = 0; /*0x75cfad*/
  *(_BYTE *)(this + 340) = 0; /*0x75cfb3*/
  *(_BYTE *)(this + 341) = 0; /*0x75cfb9*/
  *(_BYTE *)(this + 342) = 0; /*0x75cfbf*/
  *(_BYTE *)(this + 343) = 0; /*0x75cfc5*/
  *(_BYTE *)(this + 344) = 0; /*0x75cfcb*/
  *(_BYTE *)(this + 345) = 0; /*0x75cfd1*/
  *(_BYTE *)(this + 346) = 0; /*0x75cfd7*/
  *(_BYTE *)(this + 347) = 0; /*0x75cfdd*/
  *(_DWORD *)(this + 348) = 1247291207; /*0x75cfee*/
  *(_DWORD *)(this + 352) = 298948665; /*0x75cff9*/
  *(_DWORD *)(this + 356) = -1610610249; /*0x75d001*/
  *(_BYTE *)(this + 364) = 0; /*0x75d009*/
  *(_BYTE *)(this + 365) = 0; /*0x75d00f*/
  *(_DWORD *)(this + 360) = -777003740; /*0x75d015*/
  *(_BYTE *)(this + 366) = 0; /*0x75d01a*/
  *(_DWORD *)(this + 368) = 0; /*0x75d020*/
  *(_BYTE *)(this + 372) = 0; /*0x75d026*/
  *(_BYTE *)(this + 373) = 0; /*0x75d02c*/
  *(_BYTE *)(this + 374) = 0; /*0x75d032*/
  *(_BYTE *)(this + 375) = 0; /*0x75d038*/
  *(_BYTE *)(this + 376) = 0; /*0x75d03e*/
  *(_BYTE *)(this + 377) = 1; /*0x75d044*/
  *(_BYTE *)(this + 378) = 0; /*0x75d04a*/
  *(_BYTE *)(this + 379) = 0; /*0x75d050*/
  *(_DWORD *)(this + 380) = 0; /*0x75d056*/
  *(_DWORD *)(this + 384) = 0; /*0x75d05c*/
  *(_DWORD *)(this + 388) = 0; /*0x75d06e*/
  *(_DWORD *)(this + 392) = 0; /*0x75d074*/
  *(_DWORD *)(this + 400) = 0; /*0x75d07a*/
  *(_DWORD *)(this + 404) = 0; /*0x75d07d*/
  *(_BYTE *)(this + 408) = 1; /*0x75d080*/
  *(_BYTE *)(this + 409) = 0; /*0x75d083*/
  *(_DWORD *)(this + 416) = 10; /*0x75d086*/
  *(_DWORD *)(this + 412) = 0; /*0x75d089*/
  *(_DWORD *)(this + 396) = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75d08c*/
  *(_BYTE *)(this + 436) = 1; /*0x75d092*/
  *(_DWORD *)(this + 428) = 0; /*0x75d098*/
  *(_DWORD *)(this + 432) = 0; /*0x75d09b*/
  *(_BYTE *)(this + 437) = 0; /*0x75d09e*/
  *(_DWORD *)(this + 444) = 10; /*0x75d0a1*/
  *(_DWORD *)(this + 440) = 0; /*0x75d0a4*/
  *(_DWORD *)(this + 424) = &TypeList<int>::`vftable'; /*0x75d0a7*/
  *(_DWORD *)(this + 452) = 0; /*0x75d0ae*/
  *(_DWORD *)(this + 456) = 0; /*0x75d0b4*/
  *(_DWORD *)this = &WarheadTypeClass::`vftable'; /*0x75d0ba*/
  *(_DWORD *)(this + 4) = &WarheadTypeClass::`vftable'; /*0x75d0c1*/
  *(_DWORD *)(this + 8) = &WarheadTypeClass::`vftable'; /*0x75d0c7*/
  *(_DWORD *)(this + 12) = &WarheadTypeClass::`vftable'; /*0x75d0ce*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x75d0d5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 396) + 12))(this + 396); /*0x75d0de*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 424) + 12))(this + 424); /*0x75d0e5*/
  if ( g_WarheadTypePool < dword_8874C8 /*0x75d11c*/
    || (byte_8874CD || !dword_8874C8)
    && dword_8874D4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(WarheadTypeClass_Array + 8))(
         &WarheadTypeClass_Array,
         dword_8874C8 + dword_8874D4,
         0) )
  {
    v3 = g_WarheadTypePool++; /*0x75d129*/
    *((_DWORD *)dword_8874C4 + v3) = this; /*0x75d138*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x75d16f*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v4 = dword_B0F680++; /*0x75d17c*/
    *((_DWORD *)dword_B0F674 + v4) = this; /*0x75d18b*/
  }
  *(_DWORD *)(this + 160) = 0; /*0x75d19b*/
  *(_DWORD *)(this + 164) = 1072693248; /*0x75d1a0*/
  qmemcpy((void *)(this + 168), (const void *)(this + 160), 0x50u); /*0x75d1a7*/
  return this; /*0x75d1a9*/
}



// ==== 0x0075D230  AbstractClass::ProcessInit  this=WarheadTypeClass  sig=csp ====
int __thiscall AbstractClass::ProcessInit(AbstractClass *this)
{
  int v2; // eax
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  AbstractClass *v8; // [esp+8h] [ebp-4h] BYREF

  this->vtable0 = &WarheadTypeClass::`vftable'; /*0x75d237*/
  this->vtable1 = &WarheadTypeClass::`vftable'; /*0x75d23d*/
  this->vtable2 = &WarheadTypeClass::`vftable'; /*0x75d244*/
  this->vtable3 = &WarheadTypeClass::`vftable'; /*0x75d24b*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x75d252*/
  v8 = this; /*0x75d267*/
  v2 = ((int (__thiscall *)(WarheadTypeClass **, AbstractClass **))WarheadTypeClass_Array->WarheadTypeClass_field_0x10)( /*0x75d26b*/
         &WarheadTypeClass_Array,
         &v8);
  if ( v2 != -1 && v2 < g_WarheadTypePool && v2 < --g_WarheadTypePool ) /*0x75d286*/
  {
    do /*0x75d29e*/
    {
      ++v2; /*0x75d28e*/
      *((_DWORD *)dword_8874C4 + v2 - 1) = *((_DWORD *)dword_8874C4 + v2); /*0x75d292*/
    }
    while ( v2 < g_WarheadTypePool ); /*0x75d29e*/
  }
  v8 = this; /*0x75d2b0*/
  v3 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x75d2b4*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v8);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x75d2c4*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x75d2c9*/
    for ( ; /*0x75d2cf*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x75d2d7*/
    }
  }
  v4 = (void *)this->q1AC; /*0x75d2e9*/
  this->u32_1A8 = &VectorClass<int>::`vftable'; /*0x75d2f3*/
  if ( v4 && this->q1B5 ) /*0x75d2ff*/
  {
    __3_YAXPAX_Z(v4); /*0x75d308*/
    this->q1AC = 0; /*0x75d310*/
  }
  this->q1B5 = 0; /*0x75d316*/
  this->q06C = 0; /*0x75d31c*/
  v5 = (void *)this->Name; /*0x75d322*/
  this->DebrisTypes = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75d328*/
  if ( v5 && this->u32_199 ) /*0x75d336*/
  {
    __3_YAXPAX_Z(v5); /*0x75d33f*/
    this->Name = 0; /*0x75d347*/
  }
  this->u32_199 = 0; /*0x75d34d*/
  this->MaxDebris = 0; /*0x75d353*/
  v6 = (void *)this->q042; /*0x75d359*/
  this->q104 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75d35f*/
  if ( v6 && this->q111 ) /*0x75d36d*/
  {
    __3_YAXPAX_Z(v6); /*0x75d376*/
    this->q042 = 0; /*0x75d37e*/
  }
  this->q111 = 0; /*0x75d386*/
  this->q043 = 0; /*0x75d38c*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x75d397*/
}



// ==== 0x0075D3A0  WarheadTypeClass::Draw  this=WarheadTypeClass  sig=csp ====
char __thiscall Voxel_Section::Draw(WarheadTypeClass *this, int a2)
{
  _DWORD *WarheadTypeClass_field_0x140; // ebx
  _DWORD *v9; // eax
  char *i; // eax
  int CapacityIncrement; // ecx
  int unknown_18; // edx
  void *Items; // eax
  int Int_Overwrite; // eax
  char v16; // cl
  char Bool_Overwrite; // al
  char v18; // al
  char v19; // cl
  char v20; // al
  char v21; // al
  char v22; // cl
  char v23; // al
  _DWORD *GUID_Overwrite; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  char v28; // al
  char v29; // al
  int Paralyzes; // ecx
  int v31; // eax
  char v32; // al
  char v33; // cl
  char v34; // al
  double v35; // rax
  char Culling_high; // cl
  char v38; // al
  char v39; // al
  char v40; // cl
  char v41; // al
  int v42; // eax
  int WarheadTypeClass_field_0x180; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  char *j; // eax
  _DWORD *v51; // ebx
  void *v52; // eax
  int Capacity; // eax
  bool v54; // zf
  int v55; // eax
  int MaxDebris; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // edx
  void *v60; // eax
  int v61; // eax
  unsigned __int8 *inited; // eax
  char *IntList; // eax
  int v64; // eax
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  int v68; // edx
  void *v69; // eax
  char *v70; // edi
  double *v71; // ebx
  int v72; // ebp
  char *v73; // eax
  void **v78; // [esp-14h] [ebp-168h] BYREF
  _DWORD *v79; // [esp-10h] [ebp-164h]
  int v80; // [esp-Ch] [ebp-160h]
  __int16 v81; // [esp-8h] [ebp-15Ch]
  unsigned __int8 *p_WarheadTypeClass_field_0x24; // [esp-4h] [ebp-158h]
  double v83; // [esp+0h] [ebp-154h]
  char *v84; // [esp+18h] [ebp-13Ch] BYREF
  TypeList v85; // [esp+1Ch] [ebp-138h] BYREF
  DynamicVector v86; // [esp+38h] [ebp-11Ch] BYREF
  char Destination[128]; // [esp+D4h] [ebp-80h] BYREF

  _ESI = this; /*0x75d3b1*/
  INIClass::ResetSection((INIClass *)a2); /*0x75d3b5*/
  if ( !INIClass::BinarySearchSection(a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24) ) /*0x75d3c0*/
    return 0; /*0x75deb2*/
  __asm { fld dword ptr [esi+124h] } /*0x75d3d2*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aCellspread, v83); /*0x75d3e6*/
  __asm { fstp dword ptr [esi+124h] } /*0x75d3eb*/
  *(float *)_ESI->__pad_124 = _ET1; /*0x75d3eb*/
  __asm { fld dword ptr [esi+128h] } /*0x75d3f1*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aCellinset, v83); /*0x75d405*/
  __asm { fstp dword ptr [esi+128h] } /*0x75d40a*/
  *(float *)&_ESI->__pad_124[4] = _ET1; /*0x75d40a*/
  __asm { fld dword ptr [esi+12Ch] } /*0x75d410*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite( /*0x75d424*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
    aPercentatmax,
    v83);
  __asm { fstp dword ptr [esi+12Ch] } /*0x75d429*/
  *(float *)&_ESI->__pad_124[8] = _ET1; /*0x75d429*/
  _ESI->__pad_124[12] = INIClass::ReadBool_Overwrite( /*0x75d443*/
                          (int *)a2,
                          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                          aCausesdelaykil,
                          _ESI->__pad_124[12]);
  *(_DWORD *)&_ESI->__pad_124[16] = INIClass::ReadInt_Overwrite( /*0x75d45d*/
                                      (bool *)a2,
                                      (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                      aDelaykillframe,
                                      *(_DWORD *)&_ESI->__pad_124[16]);
  __asm { fld dword ptr [esi+138h] } /*0x75d466*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite( /*0x75d477*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
    aDelaykillatmax,
    v83);
  __asm { fstp dword ptr [esi+138h] } /*0x75d47c*/
  *(float *)&_ESI->__pad_124[20] = _ET1; /*0x75d47c*/
  __asm { fld dword ptr [esi+13Ch] } /*0x75d482*/
  __asm { fstp [esp+154h+var_154]; double }
  INIClass::ReadDouble_Overwrite( /*0x75d496*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
    aCombatlightsiz,
    v83);
  __asm { fstp dword ptr [esi+13Ch] } /*0x75d49b*/
  *(float *)&_ESI->__pad_124[24] = _ET1; /*0x75d49b*/
  WarheadTypeClass_field_0x140 = _ESI->WarheadTypeClass_field_0x140; /*0x75d4a1*/
  if ( INIClass::GetString( /*0x75d4be*/
         (INIClass *)a2,
         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
         (unsigned __int8 *)&g_INI_Key_Special.?[8],
         &g_INI_DefaultBuffer,
         (char *)&v86.DynamicVector_field_0x1C,
         128) )
  {
    v9 = BuildingTypeClass::LoadOrGet((char *)&v86.DynamicVector_field_0x1C); /*0x75d4cb*/
  }
  else
  {
    v9 = WarheadTypeClass_field_0x140; /*0x75d4d2*/
  }
  _ESI->WarheadTypeClass_field_0x140 = v9; /*0x75d4d4*/
  _ESI->Conventional[0] = INIClass::ReadBool_Overwrite( /*0x75d4ee*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aConventional,
                            _ESI->Conventional[0]);
  _ESI->__pad_144[0] = INIClass::ReadBool_Overwrite( /*0x75d508*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         g_INI_Key_Wall,
                         _ESI->__pad_144[0]);
  _ESI->__pad_144[1] = INIClass::ReadBool_Overwrite( /*0x75d522*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         aWallabsolutede,
                         _ESI->__pad_144[1]);
  _ESI->__pad_144[2] = INIClass::ReadBool_Overwrite( /*0x75d53c*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         aPenetratesbunk,
                         _ESI->__pad_144[2]);
  _ESI->__pad_144[3] = INIClass::ReadBool_Overwrite( /*0x75d556*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         aWood,
                         _ESI->__pad_144[3]);
  _ESI->__pad_144[4] = INIClass::ReadBool_Overwrite( /*0x75d570*/
                         (int *)a2,
                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                         (unsigned __int8 *)g_INI_Key_Tiberium,
                         _ESI->__pad_144[4]);
  _ESI->WarheadTypeClass_field_bool_149[1] = INIClass::ReadBool_Overwrite( /*0x75d58a*/
                                               (int *)a2,
                                               (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                               aSparky,
                                               _ESI->WarheadTypeClass_field_bool_149[1]);
  _ESI->WarheadTypeClass_field_bool_149[2] = INIClass::ReadBool_Overwrite( /*0x75d5a4*/
                                               (int *)a2,
                                               (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                               aSonic,
                                               _ESI->WarheadTypeClass_field_bool_149[2]);
  _ESI->Conventional[1] = INIClass::ReadBool_Overwrite( /*0x75d5be*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aRocker,
                            _ESI->Conventional[1]);
  _ESI->Conventional[2] = INIClass::ReadBool_Overwrite( /*0x75d5d8*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aDirectrocker,
                            _ESI->Conventional[2]);
  _ESI->WarheadTypeClass_field_bool_149[3] = INIClass::ReadBool_Overwrite( /*0x75d5f2*/
                                               (int *)a2,
                                               (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                               g_INI_Key_Fire,
                                               _ESI->WarheadTypeClass_field_bool_149[3]);
  _ESI->Conventional[3] = INIClass::ReadBool_Overwrite( /*0x75d60c*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aBright,
                            _ESI->Conventional[3]);
  _ESI->CLDisableRed[0] = INIClass::ReadBool_Overwrite( /*0x75d626*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aCldisablered,
                            _ESI->CLDisableRed[0]);
  _ESI->CLDisableRed[1] = INIClass::ReadBool_Overwrite( /*0x75d640*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aCldisablegreen,
                            _ESI->CLDisableRed[1]);
  _ESI->CLDisableRed[2] = INIClass::ReadBool_Overwrite( /*0x75d65a*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aCldisableblue,
                            _ESI->CLDisableRed[2]);
  if ( INIClass::GetString( /*0x75d677*/
         (INIClass *)a2,
         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
         aAnimlist,
         &g_INI_DefaultBuffer,
         (char *)&v86.DynamicVector_field_0x1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v86, 0, 0); /*0x75d68c*/
    *(_DWORD *)v86.__pad_0 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75d69b*/
    for ( i = strtok((char *)&v86.DynamicVector_field_0x1C, Str); i; i = strtok(0, Str) ) /*0x75d6ad*/
    {
      if ( !*i ) /*0x75d6af*/
        break; /*0x75d6b2*/
      v84 = (char *)AnimTypeClass::FindOrCreate(i); /*0x75d6bd*/
      if ( v84 ) /*0x75d6c1*/
        DynamicVector::Add_Alt4(&v86, &v84); /*0x75d6cc*/
    }
    TypeList::AnimTypeCopy(&v85, &v86); /*0x75d6ed*/
    *(_DWORD *)v86.__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75d6f6*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v86); /*0x75d6fe*/
  }
  else
  {
    TypeList::AnimTypeCopy(&v85, _ESI->__pad_104); /*0x75d710*/
  }
  VectorClass::CopyDefault((VectorClass *)_ESI->__pad_104, &v85); /*0x75d722*/
  CapacityIncrement = v85.?; /*0x75d72b*/
  unknown_18 = v85.unknown_18; /*0x75d72f*/
  _ESI->WarheadTypeClass_field_0x114 = v85.?; /*0x75d733*/
  Items = v85.?; /*0x75d736*/
  *(_DWORD *)_ESI->__pad_118 = CapacityIncrement; /*0x75d73a*/
  *(_DWORD *)&_ESI->__pad_118[4] = unknown_18; /*0x75d73f*/
  v85.DynamicVectorClass = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75d742*/
  if ( Items && v85.? ) /*0x75d752*/
    __3_YAXPAX_Z(Items); /*0x75d755*/
  _ESI->WarheadTypeClass_field_0x120 = INIClass::ReadInt_Overwrite( /*0x75d771*/
                                         (bool *)a2,
                                         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                         aInfdeath,
                                         _ESI->WarheadTypeClass_field_0x120);
  INIClass::ReadDouble_Overwrite( /*0x75d78d*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
    aDeform,
    *(double *)&_ESI->__pad_44[84]);
  __asm { fstp qword ptr [esi+98h] } /*0x75d792*/
  *(double *)&_ESI->__pad_44[84] = _RT1; /*0x75d792*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x75d7a7*/
                    (bool *)a2,
                    (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                    aDeformthreshho,
                    _ESI->WarheadTypeClass_field_0x100);
  v16 = _ESI->CLDisableRed[3]; /*0x75d7ac*/
  _ESI->WarheadTypeClass_field_0x100 = Int_Overwrite; /*0x75d7b2*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x75d7c1*/
                     (int *)a2,
                     (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                     aEmeffect,
                     v16);
  BYTE4(v83) = _ESI->MindControl[0]; /*0x75d7ce*/
  LODWORD(v83) = aMindcontrol; /*0x75d7cf*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d7d4*/
  _ESI->CLDisableRed[3] = Bool_Overwrite; /*0x75d7d5*/
  _ESI->MindControl[0] = INIClass::ReadBool_Overwrite( /*0x75d7e0*/
                           (int *)a2,
                           p_WarheadTypeClass_field_0x24,
                           (unsigned __int8 *)LODWORD(v83),
                           SBYTE4(v83));
  v18 = INIClass::ReadBool_Overwrite( /*0x75d7f5*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aPoison,
          _ESI->MindControl[1]);
  v19 = _ESI->MindControl[2]; /*0x75d7fa*/
  _ESI->MindControl[1] = v18; /*0x75d800*/
  v20 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aIvanbomb, v19); /*0x75d80f*/
  BYTE4(v83) = _ESI->MindControl[3]; /*0x75d81c*/
  LODWORD(v83) = aElectricassaul; /*0x75d81d*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d822*/
  _ESI->MindControl[2] = v20; /*0x75d823*/
  _ESI->MindControl[3] = INIClass::ReadBool_Overwrite( /*0x75d82e*/
                           (int *)a2,
                           p_WarheadTypeClass_field_0x24,
                           (unsigned __int8 *)LODWORD(v83),
                           SBYTE4(v83));
  v21 = INIClass::ReadBool_Overwrite( /*0x75d843*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aParasite,
          _ESI->Parasite[0]);
  v22 = _ESI->Parasite[1]; /*0x75d848*/
  _ESI->Parasite[0] = v21; /*0x75d84e*/
  v23 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aTemporal, v22); /*0x75d85d*/
  BYTE4(v83) = _ESI->Parasite[2]; /*0x75d86a*/
  LODWORD(v83) = aIslocomotor; /*0x75d86b*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d870*/
  _ESI->Parasite[1] = v23; /*0x75d871*/
  _ESI->Parasite[2] = INIClass::ReadBool_Overwrite( /*0x75d87c*/
                        (int *)a2,
                        p_WarheadTypeClass_field_0x24,
                        (unsigned __int8 *)LODWORD(v83),
                        SBYTE4(v83));
  GUID_Overwrite = (_DWORD *)INIClass::ReadGUID_Overwrite( /*0x75d8b2*/
                               a2,
                               (int)&v86,
                               (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                               (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1624[92],
                               *(_DWORD *)&_ESI->Parasite[3],
                               *(_DWORD *)&_ESI->__pad_15D[3],
                               *(_DWORD *)&_ESI->__pad_15D[7],
                               *(_DWORD *)&_ESI->__pad_15D[11]);
  *(_DWORD *)&_ESI->Parasite[3] = *GUID_Overwrite; /*0x75d8b9*/
  v25 = GUID_Overwrite[1]; /*0x75d8bb*/
  *(_DWORD *)&_ESI->__pad_15D[3] = v25; /*0x75d8be*/
  LOBYTE(v25) = _ESI->Airstrike; /*0x75d8c1*/
  v26 = GUID_Overwrite[2]; /*0x75d8c7*/
  HIDWORD(v83) = v25; /*0x75d8ca*/
  *(_DWORD *)&_ESI->__pad_15D[7] = v26; /*0x75d8cb*/
  LODWORD(v83) = aAirstrike; /*0x75d8ce*/
  v27 = GUID_Overwrite[3]; /*0x75d8d3*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d8d6*/
  *(_DWORD *)&_ESI->__pad_15D[11] = v27; /*0x75d8d9*/
  v28 = INIClass::ReadBool_Overwrite( /*0x75d8dc*/
          (int *)a2,
          p_WarheadTypeClass_field_0x24,
          (unsigned __int8 *)LODWORD(v83),
          SBYTE4(v83));
  BYTE4(v83) = BYTE1(_ESI->Airstrike); /*0x75d8e9*/
  LODWORD(v83) = aPsychedelic; /*0x75d8ea*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d8ef*/
  LOBYTE(_ESI->Airstrike) = v28; /*0x75d8f0*/
  BYTE1(_ESI->Airstrike) = INIClass::ReadBool_Overwrite( /*0x75d8fb*/
                             (int *)a2,
                             p_WarheadTypeClass_field_0x24,
                             (unsigned __int8 *)LODWORD(v83),
                             SBYTE4(v83));
  v29 = INIClass::ReadBool_Overwrite( /*0x75d910*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aBombdisarm,
          BYTE2(_ESI->Airstrike));
  Paralyzes = _ESI->Paralyzes; /*0x75d915*/
  BYTE2(_ESI->Airstrike) = v29; /*0x75d91b*/
  v31 = INIClass::ReadInt_Overwrite( /*0x75d92a*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aParalyzes,
          Paralyzes);
  BYTE4(v83) = _ESI->Culling; /*0x75d937*/
  LODWORD(v83) = aCulling; /*0x75d938*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d93d*/
  _ESI->Paralyzes = v31; /*0x75d93e*/
  LOBYTE(_ESI->Culling) = INIClass::ReadBool_Overwrite( /*0x75d949*/
                            (int *)a2,
                            p_WarheadTypeClass_field_0x24,
                            (unsigned __int8 *)LODWORD(v83),
                            SBYTE4(v83));
  v32 = INIClass::ReadBool_Overwrite( /*0x75d95e*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aMakesdisguise,
          BYTE1(_ESI->Culling));
  v33 = BYTE2(_ESI->Culling); /*0x75d963*/
  BYTE1(_ESI->Culling) = v32; /*0x75d969*/
  v34 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aNukemaker, v33); /*0x75d978*/
  HIDWORD(v35) = *(_DWORD *)_ESI->__pad_FC; /*0x75d97d*/
  BYTE2(_ESI->Culling) = v34; /*0x75d983*/
  LODWORD(v35) = _ESI->WarheadTypeClass_field_0xF8; /*0x75d989*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aPronedamage, v35); /*0x75d999*/
  Culling_high = HIBYTE(_ESI->Culling); /*0x75d99e*/
  __asm { fstp qword ptr [esi+0F8h] } /*0x75d9a4*/
  *(double *)&_ESI->WarheadTypeClass_field_0xF8 = _RT1; /*0x75d9a4*/
  v38 = INIClass::ReadBool_Overwrite( /*0x75d9b3*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aRadiation,
          Culling_high);
  BYTE4(v83) = _ESI->PsychicDamage; /*0x75d9c0*/
  LODWORD(v83) = aPsychicdamage; /*0x75d9c1*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d9c6*/
  HIBYTE(_ESI->Culling) = v38; /*0x75d9c7*/
  LOBYTE(_ESI->PsychicDamage) = INIClass::ReadBool_Overwrite( /*0x75d9d2*/
                                  (int *)a2,
                                  p_WarheadTypeClass_field_0x24,
                                  (unsigned __int8 *)LODWORD(v83),
                                  SBYTE4(v83));
  v39 = INIClass::ReadBool_Overwrite( /*0x75d9e7*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aAffectsallies,
          BYTE1(_ESI->PsychicDamage));
  v40 = BYTE2(_ESI->PsychicDamage); /*0x75d9ec*/
  BYTE1(_ESI->PsychicDamage) = v39; /*0x75d9f2*/
  v41 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aBullets, v40); /*0x75da01*/
  BYTE4(v83) = HIBYTE(_ESI->PsychicDamage); /*0x75da0e*/
  LODWORD(v83) = aVeinhole; /*0x75da0f*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75da14*/
  BYTE2(_ESI->PsychicDamage) = v41; /*0x75da15*/
  HIBYTE(_ESI->PsychicDamage) = INIClass::ReadBool_Overwrite( /*0x75da20*/
                                  (int *)a2,
                                  p_WarheadTypeClass_field_0x24,
                                  (unsigned __int8 *)LODWORD(v83),
                                  SBYTE4(v83));
  v42 = INIClass::ReadInt_Overwrite( /*0x75da35*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aShakexlo,
          _ESI->WarheadTypeClass_field_0x17C);
  WarheadTypeClass_field_0x180 = _ESI->WarheadTypeClass_field_0x180; /*0x75da3a*/
  _ESI->WarheadTypeClass_field_0x17C = v42; /*0x75da40*/
  v44 = INIClass::ReadInt_Overwrite( /*0x75da4f*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aShakexhi,
          WarheadTypeClass_field_0x180);
  HIDWORD(v83) = _ESI->WarheadTypeClass_field_0x184; /*0x75da5c*/
  LODWORD(v83) = aShakeylo; /*0x75da5d*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75da62*/
  _ESI->WarheadTypeClass_field_0x180 = v44; /*0x75da63*/
  _ESI->WarheadTypeClass_field_0x184 = INIClass::ReadInt_Overwrite( /*0x75da6e*/
                                         (bool *)a2,
                                         p_WarheadTypeClass_field_0x24,
                                         (unsigned __int8 *)LODWORD(v83),
                                         SHIDWORD(v83));
  v45 = INIClass::ReadInt_Overwrite( /*0x75da83*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          aShakeyhi,
          _ESI->WarheadTypeClass_field_0x188);
  v46 = _ESI->WarheadTypeClass_field_0x1C4[0]; /*0x75da88*/
  _ESI->WarheadTypeClass_field_0x188 = v45; /*0x75da8e*/
  v47 = INIClass::ReadInt_Overwrite( /*0x75da9d*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[76],
          v46);
  HIDWORD(v83) = _ESI->WarheadTypeClass_field_0x1C8[0]; /*0x75daaa*/
  LODWORD(v83) = &g_INI_Key_TRUCKA.__pad_1584[64]; /*0x75daab*/
  p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75dab0*/
  _ESI->WarheadTypeClass_field_0x1C4[0] = v47; /*0x75dab1*/
  v48 = INIClass::ReadInt_Overwrite( /*0x75dab7*/
          (bool *)a2,
          p_WarheadTypeClass_field_0x24,
          (unsigned __int8 *)LODWORD(v83),
          SHIDWORD(v83));
  _ESI->WarheadTypeClass_field_0x1C8[0] = v48; /*0x75dabe*/
  if ( v48 < 0 ) /*0x75dac4*/
    _ESI->WarheadTypeClass_field_0x1C8[0] = 0; /*0x75dac6*/
  v49 = _ESI->WarheadTypeClass_field_0x1C8[0]; /*0x75dad0*/
  if ( _ESI->WarheadTypeClass_field_0x1C4[0] < v49 ) /*0x75dade*/
    _ESI->WarheadTypeClass_field_0x1C4[0] = v49; /*0x75dae0*/
  if ( INIClass::GetString( /*0x75dafd*/
         (INIClass *)a2,
         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
         (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[52],
         &g_INI_DefaultBuffer,
         (char *)&v86.DynamicVector_field_0x1C,
         128) )
  {
    DynamicVector::Constructor_VoxelAnim(&v86, 0, 0); /*0x75db12*/
    *(_DWORD *)v86.__pad_0 = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75db21*/
    for ( j = strtok((char *)&v86.DynamicVector_field_0x1C, Str); j; j = strtok(0, Str) ) /*0x75db33*/
    {
      if ( !*j ) /*0x75db35*/
        break; /*0x75db38*/
      v51 = UnitTypeClass::FindOrCreate(j); /*0x75db41*/
      if ( v51 /*0x75db74*/
        && ((int)v86.DynamicVector_field_0x10 < v86.DynamicVector_field_0x8
         || (v86.__pad_C[1] || !v86.DynamicVector_field_0x8)
         && *(int *)v86.__pad_14 > 0
         && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)v86.__pad_0 + 8))(
              &v86,
              v86.DynamicVector_field_0x8 + *(_DWORD *)v86.__pad_14,
              0)) )
      {
        v52 = v86.DynamicVector_field_0x10++; /*0x75db7f*/
        *(_DWORD *)(*(_DWORD *)&v86.DynamicVector_field_0x1[3] + 4 * (_DWORD)v52) = v51; /*0x75db8a*/
      }
    }
    Voxel_Section::Constructor((Voxel_Section *)&v85, &v86); /*0x75dba9*/
    v85.DynamicVectorClass = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75dbb2*/
    *(_DWORD *)v86.__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75dbba*/
    Vector::Cleanup2((_VectorClass_PBVVoxelAnimTypeClass *)&v86); /*0x75dbc2*/
  }
  else
  {
    Voxel_Section::Constructor((Voxel_Section *)&v85, _ESI->DebrisTypes); /*0x75dbd4*/
    v85.DynamicVectorClass = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75dbd9*/
  }
  if ( _ESI->DebrisTypes != (int *)&v85 ) /*0x75dbed*/
  {
    (*(void (__thiscall **)(int *))(_ESI->DebrisTypes[0] + 12))(_ESI->DebrisTypes); /*0x75dbf3*/
    Capacity = v85.?; /*0x75dbf6*/
    v54 = v85.? == 0; /*0x75dbfa*/
    _ESI->MaxDebris = v85.?; /*0x75dbfc*/
    if ( v54 ) /*0x75dbff*/
    {
      _ESI->WarheadTypeClass_field_0x190[0] = 0; /*0x75dc38*/
      BYTE1(_ESI->MinDebris) = 0; /*0x75dc3f*/
    }
    else
    {
      v55 = __2_YAPAXI_Z(4 * Capacity); /*0x75dc05*/
      _ESI->WarheadTypeClass_field_0x190[0] = v55; /*0x75dc0d*/
      if ( v55 ) /*0x75dc12*/
      {
        MaxDebris = _ESI->MaxDebris; /*0x75dc14*/
        v57 = 0; /*0x75dc17*/
        BYTE1(_ESI->MinDebris) = 1; /*0x75dc1b*/
        if ( MaxDebris > 0 ) /*0x75dc1f*/
        {
          do /*0x75dc34*/
          {
            *(_DWORD *)(_ESI->WarheadTypeClass_field_0x190[0] + 4 * v57) = *((_DWORD *)v85.? + v57); /*0x75dc2b*/
            ++v57; /*0x75dc31*/
          }
          while ( v57 < _ESI->MaxDebris ); /*0x75dc34*/
        }
      }
    }
  }
  v58 = v85.?; /*0x75dc47*/
  v59 = v85.unknown_18; /*0x75dc4b*/
  _ESI->unused_1CC[0] = v85.?; /*0x75dc4f*/
  v60 = v85.?; /*0x75dc52*/
  *(_DWORD *)_ESI->__pad_1A0 = v58; /*0x75dc56*/
  *(_DWORD *)&_ESI->__pad_1A0[4] = v59; /*0x75dc5b*/
  v85.DynamicVectorClass = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75dc5e*/
  if ( v60 && v85.? ) /*0x75dc6e*/
    __3_YAXPAX_Z(v60); /*0x75dc71*/
  v79 = 0; /*0x75dc88*/
  v80 = 0; /*0x75dc8b*/
  v81 = 1; /*0x75dc8e*/
  v78 = &VectorClass<int>::`vftable'; /*0x75dc95*/
  if ( &v78 != (void ***)&_ESI->__pad_1A0[8] ) /*0x75dc9b*/
  {
    VectorClass::Destroy((int)&v78); /*0x75dc9f*/
    v80 = *(_DWORD *)_ESI->__pad_1B0; /*0x75dcad*/
    if ( v80 ) /*0x75dcb0*/
    {
      v79 = (_DWORD *)__2_YAPAXI_Z(4 * v80); /*0x75dcbe*/
      if ( v79 ) /*0x75dcc3*/
      {
        v61 = 0; /*0x75dcc8*/
        for ( HIBYTE(v81) = 1; v61 < v80; ++v61 ) /*0x75dcd0*/
          v79[v61] = *((_DWORD *)&_ESI->WarheadTypeClass_field_0x1AC->AbstractClass + v61); /*0x75dcde*/
      }
    }
    else
    {
      v79 = 0; /*0x75dceb*/
      HIBYTE(v81) = 0; /*0x75dcf2*/
    }
  }
  p_WarheadTypeClass_field_0x24 = *(unsigned __int8 **)&_ESI->__pad_1B0[8]; /*0x75dd01*/
  LODWORD(v83) = _ESI->WarheadTypeClass_field_0x1BC[0]; /*0x75dd0c*/
  v78 = &TypeList<int>::`vftable'; /*0x75dd0f*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)&_ESI->WarheadTypeClass_field_0x24); /*0x75dd15*/
  IntList = (char *)INIClass::ReadIntList( /*0x75dd22*/
                      (INIClass *)a2,
                      (int)&v85,
                      inited,
                      (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[36],
                      v78,
                      v79,
                      v80,
                      v81,
                      (int)p_WarheadTypeClass_field_0x24,
                      SLODWORD(v83),
                      SHIDWORD(v83));
  v84 = IntList; /*0x75dd2d*/
  if ( &_ESI->__pad_1A0[8] != IntList ) /*0x75dd33*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)&_ESI->__pad_1A0[8] + 12))(&_ESI->__pad_1A0[8]); /*0x75dd39*/
    v64 = *((_DWORD *)v84 + 2); /*0x75dd40*/
    *(_DWORD *)_ESI->__pad_1B0 = v64; /*0x75dd45*/
    if ( v64 ) /*0x75dd48*/
    {
      v65 = __2_YAPAXI_Z(4 * v64); /*0x75dd52*/
      _ESI->WarheadTypeClass_field_0x1AC = (CampaignClass *)v65; /*0x75dd5a*/
      if ( v65 ) /*0x75dd5f*/
      {
        v66 = *(_DWORD *)_ESI->__pad_1B0; /*0x75dd61*/
        v67 = 0; /*0x75dd64*/
        _ESI->__pad_1B0[5] = 1; /*0x75dd68*/
        if ( v66 > 0 ) /*0x75dd6c*/
        {
          do /*0x75dd86*/
          {
            ++v67; /*0x75dd72*/
            *((_DWORD *)_ESI->WarheadTypeClass_field_0x1AC + v67 - 1) = *(_DWORD *)(*((_DWORD *)v84 + 1) + 4 * v67 - 4); /*0x75dd7d*/
          }
          while ( v67 < *(_DWORD *)_ESI->__pad_1B0 ); /*0x75dd86*/
        }
      }
    }
    else
    {
      _ESI->WarheadTypeClass_field_0x1AC = 0; /*0x75dd8a*/
      _ESI->__pad_1B0[5] = 0; /*0x75dd91*/
    }
    IntList = v84; /*0x75dd95*/
  }
  *(_DWORD *)&_ESI->__pad_1B0[8] = *((_DWORD *)IntList + 4); /*0x75dd9c*/
  _ESI->WarheadTypeClass_field_0x1BC[0] = *((_DWORD *)IntList + 5); /*0x75dda2*/
  v68 = *((_DWORD *)IntList + 6); /*0x75dda5*/
  v69 = v85.?; /*0x75dda8*/
  *(_DWORD *)_ESI->__pad_1C0 = v68; /*0x75ddac*/
  v85.DynamicVectorClass = &VectorClass<int>::`vftable'; /*0x75ddb1*/
  if ( v69 && v85.? ) /*0x75ddc1*/
    __3_YAXPAX_Z(v69); /*0x75ddc4*/
  if ( INIClass::GetString( /*0x75dde6*/
         (INIClass *)a2,
         (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
         aVerses,
         a10010010010010,
         Destination,
         128) )
  {
    v70 = strtok(Destination, Str); /*0x75de04*/
    v71 = (double *)&_ESI->__pad_44[92]; /*0x75de06*/
    v72 = 11; /*0x75de0c*/
    do /*0x75de58*/
    {
      v73 = strchr(v70, 37); /*0x75de14*/
      HIDWORD(v83) = v70; /*0x75de1e*/
      if ( v73 ) /*0x75de1f*/
      {
        v84 = (char *)atoi((const char *)HIDWORD(v83)); /*0x75de26*/
        __asm /*0x75de2d*/
        {
          fild [esp+14Ch+var_13C]
          fmul ds:dbl_7E3808
        }
      }
      else
      {
        atof((const char *)HIDWORD(v83)); /*0x75de39*/
      }
      HIDWORD(v83) = Str; /*0x75de41*/
      LODWORD(v83) = 0; /*0x75de46*/
      __asm { fstp qword ptr [ebx] } /*0x75de48*/
      *v71++ = _RT1; /*0x75de48*/
      --v72; /*0x75de55*/
      v70 = strtok((char *)LODWORD(v83), (const char *)HIDWORD(v83)); /*0x75de56*/
    }
    while ( v72 ); /*0x75de58*/
  }
  __asm /*0x75de5a*/
  {
    fld qword ptr [esi+0C0h]
    fcomp ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) == 0 ) /*0x75de6b*/
    goto LABEL_70; /*0x75de6b*/
  __asm /*0x75de6d*/
  {
    fld qword ptr [esi+0D0h]
    fcomp ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x75de7e*/
  {
    _ESI->WarheadTypeClass_field_bool_149[0] = 1; /*0x75de85*/
    return 1; /*0x75de80*/
  }
  else
  {
LABEL_70:
    _ESI->WarheadTypeClass_field_bool_149[0] = 0; /*0x75de9a*/
    return 1; /*0x75de98*/
  }
}


// ==== 0x0075D4A0    this=-  sig=? ====
char __thiscall Voxel_Section_Draw(int this, int a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  int v8; // ebx
  int v9; // eax
  char *i; // eax
  int v11; // ecx
  int v12; // edx
  void *v13; // eax
  int v14; // eax
  char v15; // cl
  char v16; // al
  char v17; // al
  char v18; // cl
  char v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  _DWORD *v23; // eax
  const char *v24; // ecx
  int v25; // edx
  int v26; // eax
  char v27; // al
  char v28; // al
  int v29; // ecx
  int v30; // eax
  char v31; // al
  char v32; // cl
  char v33; // al
  double v34; // rax
  char v35; // cl
  char v36; // al
  char v37; // al
  char v38; // cl
  char v39; // al
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  char *j; // eax
  int v49; // ebx
  int v50; // eax
  int v51; // eax
  bool v52; // zf
  void *v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // edx
  void *v58; // eax
  int v59; // eax
  Iostream_init *v60; // eax
  _DWORD *v61; // eax
  int v62; // eax
  void *v63; // eax
  int v64; // ecx
  int v65; // eax
  int v66; // edx
  void *v67; // eax
  char *v68; // edi
  double *v69; // ebx
  int v70; // ebp
  char *v71; // eax
  double v72; // st7
  void **v74; // [esp-14h] [ebp-168h] BYREF
  _DWORD *v75; // [esp-10h] [ebp-164h]
  int v76; // [esp-Ch] [ebp-160h]
  int v77; // [esp-8h] [ebp-15Ch]
  int v78; // [esp-4h] [ebp-158h]
  char *v79; // [esp+0h] [ebp-154h]
  const char *v80; // [esp+4h] [ebp-150h]
  int v81; // [esp+18h] [ebp-13Ch] BYREF
  int v82; // [esp+1Ch] [ebp-138h] BYREF
  void *Block; // [esp+20h] [ebp-134h]
  int v84; // [esp+24h] [ebp-130h]
  char v85; // [esp+29h] [ebp-12Bh]
  int v86; // [esp+2Ch] [ebp-128h]
  int v87; // [esp+30h] [ebp-124h]
  int v88; // [esp+34h] [ebp-120h]
  int v89[2]; // [esp+38h] [ebp-11Ch] BYREF
  int v90; // [esp+40h] [ebp-114h]
  char v91; // [esp+45h] [ebp-10Fh]
  int v92; // [esp+48h] [ebp-10Ch]
  int v93; // [esp+4Ch] [ebp-108h]
  char String[128]; // [esp+54h] [ebp-100h] BYREF
  char Destination[128]; // [esp+D4h] [ebp-80h] BYREF

  INIClass::ResetSection(a2);
  if ( !INIClass::BinarySearchSection(this + 36) )
    return 0;
  v3 = *(float *)(this + 292);
  INIClass::ReadDouble_Overwrite(this + 36, (int)unk_847EA0, v3);
  *(float *)(this + 292) = v3;
  v4 = *(float *)(this + 296);
  INIClass::ReadDouble_Overwrite(this + 36, (int)unk_847E94, v4);
  *(float *)(this + 296) = v4;
  v5 = *(float *)(this + 300);
  INIClass::ReadDouble_Overwrite(this + 36, (int)unk_847E84, v5);
  *(float *)(this + 300) = v5;
  *(_BYTE *)(this + 304) = INIClass::ReadBool_Overwrite(this + 36, unk_847E74, *(_BYTE *)(this + 304));
  *(_DWORD *)(this + 308) = INIClass::ReadInt_Overwrite(this + 36, unk_847E64, *(_DWORD *)(this + 308));
  v6 = *(float *)(this + 312);
  INIClass::ReadDouble_Overwrite(this + 36, (int)unk_847E54, v6);
  *(float *)(this + 312) = v6;
  v7 = *(float *)(this + 316);
  INIClass::ReadDouble_Overwrite(this + 36, (int)unk_847E44, v7);
  *(float *)(this + 316) = v7;
  v8 = *(_DWORD *)(this + 320);
  if ( INIClass::GetString(this + 36, (int)MEMORY[0x817384], &MEMORY[0x889F64], String, 0x80u) )
    v9 = BuildingTypeClass::LoadOrGet(String);
  else
    v9 = v8;
  *(_DWORD *)(this + 320) = v9;
  *(_BYTE *)(this + 333) = INIClass::ReadBool_Overwrite(this + 36, unk_847E34, *(_BYTE *)(this + 333));
  *(_BYTE *)(this + 324) = INIClass::ReadBool_Overwrite(this + 36, MEMORY[0x81AC58], *(_BYTE *)(this + 324));
  *(_BYTE *)(this + 325) = INIClass::ReadBool_Overwrite(this + 36, unk_847E1C, *(_BYTE *)(this + 325));
  *(_BYTE *)(this + 326) = INIClass::ReadBool_Overwrite(this + 36, unk_847E08, *(_BYTE *)(this + 326));
  *(_BYTE *)(this + 327) = INIClass::ReadBool_Overwrite(this + 36, unk_847E00, *(_BYTE *)(this + 327));
  *(_BYTE *)(this + 328) = INIClass::ReadBool_Overwrite(this + 36, MEMORY[0x817278], *(_BYTE *)(this + 328));
  *(_BYTE *)(this + 330) = INIClass::ReadBool_Overwrite(this + 36, unk_847DF8, *(_BYTE *)(this + 330));
  *(_BYTE *)(this + 331) = INIClass::ReadBool_Overwrite(this + 36, unk_847DF0, *(_BYTE *)(this + 331));
  *(_BYTE *)(this + 334) = INIClass::ReadBool_Overwrite(this + 36, unk_847DE8, *(_BYTE *)(this + 334));
  *(_BYTE *)(this + 335) = INIClass::ReadBool_Overwrite(this + 36, unk_847DD8, *(_BYTE *)(this + 335));
  *(_BYTE *)(this + 332) = INIClass::ReadBool_Overwrite(this + 36, MEMORY[0x836F04], *(_BYTE *)(this + 332));
  *(_BYTE *)(this + 336) = INIClass::ReadBool_Overwrite(this + 36, unk_847DD0, *(_BYTE *)(this + 336));
  *(_BYTE *)(this + 337) = INIClass::ReadBool_Overwrite(this + 36, unk_847DC0, *(_BYTE *)(this + 337));
  *(_BYTE *)(this + 338) = INIClass::ReadBool_Overwrite(this + 36, unk_847DB0, *(_BYTE *)(this + 338));
  *(_BYTE *)(this + 339) = INIClass::ReadBool_Overwrite(this + 36, unk_847DA0, *(_BYTE *)(this + 339));
  if ( INIClass::GetString(this + 36, (int)unk_847D94, &MEMORY[0x889F64], String, 0x80u) )
  {
    DynamicVectorClass::AnimTypeConstructor(0, 0);
    v89[0] = (int)&g_ptr_7EB6D4;
    for ( i = strtok(String, MEMORY[0x817F70]); i; i = strtok(0, MEMORY[0x817F70]) )
    {
      if ( !*i )
        break;
      v81 = AnimTypeClass::FindOrCreate(i);
      if ( v81 )
        DynamicVector::Add_Alt4(&v81);
    }
    TypeList::AnimTypeCopy(v89);
    v89[0] = (int)&g_ptr_7EB6F4;
    DynamicVectorClass::Destroy_Alt(v89);
  }
  else
  {
    TypeList::AnimTypeCopy(this + 260);
  }
  VectorClass::CopyDefault(&v82);
  v11 = v87;
  v12 = v88;
  *(_DWORD *)(this + 276) = v86;
  v13 = Block;
  *(_DWORD *)(this + 280) = v11;
  *(_DWORD *)(this + 284) = v12;
  v82 = (int)&g_ptr_7EB6F4;
  if ( v13 && v85 )
    __3_YAXPAX_Z(v13);
  *(_DWORD *)(this + 288) = INIClass::ReadInt_Overwrite(this + 36, unk_847D88, *(_DWORD *)(this + 288));
  INIClass::ReadDouble_Overwrite(this + 36, (int)unk_847D80, *(double *)(this + 152));
  *(double *)(this + 152) = v7;
  v14 = INIClass::ReadInt_Overwrite(this + 36, unk_847D6C, *(_DWORD *)(this + 256));
  v15 = *(_BYTE *)(this + 340);
  *(_DWORD *)(this + 256) = v14;
  v16 = INIClass::ReadBool_Overwrite(this + 36, unk_847D60, v15);
  LOBYTE(v80) = *(_BYTE *)(this + 341);
  v79 = stru_81BBC8;
  v78 = this + 36;
  *(_BYTE *)(this + 340) = v16;
  *(_BYTE *)(this + 341) = INIClass::ReadBool_Overwrite(v78, v79, (char)v80);
  v17 = INIClass::ReadBool_Overwrite(this + 36, unk_847D58, *(_BYTE *)(this + 342));
  v18 = *(_BYTE *)(this + 343);
  *(_BYTE *)(this + 342) = v17;
  v19 = INIClass::ReadBool_Overwrite(this + 36, stru_81BD60, v18);
  LOBYTE(v80) = *(_BYTE *)(this + 344);
  v79 = unk_847D48;
  v78 = this + 36;
  *(_BYTE *)(this + 343) = v19;
  *(_BYTE *)(this + 344) = INIClass::ReadBool_Overwrite(v78, v79, (char)v80);
  v20 = INIClass::ReadBool_Overwrite(this + 36, MEMORY[0x81717C], *(_BYTE *)(this + 345));
  v21 = *(_BYTE *)(this + 346);
  *(_BYTE *)(this + 345) = v20;
  v22 = INIClass::ReadBool_Overwrite(this + 36, MEMORY[0x817168], v21);
  LOBYTE(v80) = *(_BYTE *)(this + 347);
  v79 = unk_847D3C;
  v78 = this + 36;
  *(_BYTE *)(this + 346) = v22;
  *(_BYTE *)(this + 347) = INIClass::ReadBool_Overwrite(v78, v79, (char)v80);
  v23 = (_DWORD *)INIClass::ReadGUID_Overwrite(
                    v89,
                    this + 36,
                    MEMORY[0x84444C],
                    *(_DWORD *)(this + 348),
                    *(_DWORD *)(this + 352),
                    *(_DWORD *)(this + 356),
                    *(_DWORD *)(this + 360));
  *(_DWORD *)(this + 348) = *v23;
  v24 = (const char *)v23[1];
  *(_DWORD *)(this + 352) = v24;
  LOBYTE(v24) = *(_BYTE *)(this + 364);
  v25 = v23[2];
  v80 = v24;
  *(_DWORD *)(this + 356) = v25;
  v79 = MEMORY[0x817154];
  v26 = v23[3];
  v78 = this + 36;
  *(_DWORD *)(this + 360) = v26;
  v27 = INIClass::ReadBool_Overwrite(v78, v79, (char)v80);
  LOBYTE(v80) = *(_BYTE *)(this + 365);
  v79 = unk_847D30;
  v78 = this + 36;
  *(_BYTE *)(this + 364) = v27;
  *(_BYTE *)(this + 365) = INIClass::ReadBool_Overwrite(v78, v79, (char)v80);
  v28 = INIClass::ReadBool_Overwrite(this + 36, unk_847D24, *(_BYTE *)(this + 366));
  v29 = *(_DWORD *)(this + 368);
  *(_BYTE *)(this + 366) = v28;
  v30 = INIClass::ReadInt_Overwrite(this + 36, unk_847D18, v29);
  LOBYTE(v80) = *(_BYTE *)(this + 372);
  v79 = unk_847D10;
  v78 = this + 36;
  *(_DWORD *)(this + 368) = v30;
  *(_BYTE *)(this + 372) = INIClass::ReadBool_Overwrite(v78, v79, (char)v80);
  v31 = INIClass::ReadBool_Overwrite(this + 36, unk_847D00, *(_BYTE *)(this + 373));
  v32 = *(_BYTE *)(this + 374);
  *(_BYTE *)(this + 373) = v31;
  v33 = INIClass::ReadBool_Overwrite(this + 36, unk_847CF4, v32);
  HIDWORD(v34) = *(_DWORD *)(this + 252);
  *(_BYTE *)(this + 374) = v33;
  LODWORD(v34) = *(_DWORD *)(this + 248);
  INIClass::ReadDouble_Overwrite(this + 36, (int)unk_847CE8, v34);
  v35 = *(_BYTE *)(this + 375);
  *(double *)(this + 248) = v7;
  v36 = INIClass::ReadBool_Overwrite(this + 36, MEMORY[0x839E80], v35);
  LOBYTE(v80) = *(_BYTE *)(this + 376);
  v79 = MEMORY[0x847CD8];
  v78 = this + 36;
  *(_BYTE *)(this + 375) = v36;
  *(_BYTE *)(this + 376) = INIClass::ReadBool_Overwrite(v78, v79, (char)v80);
  v37 = INIClass::ReadBool_Overwrite(this + 36, MEMORY[0x847CC8], *(_BYTE *)(this + 377));
  v38 = *(_BYTE *)(this + 378);
  *(_BYTE *)(this + 377) = v37;
  v39 = INIClass::ReadBool_Overwrite(this + 36, MEMORY[0x847CC0], v38);
  LOBYTE(v80) = *(_BYTE *)(this + 379);
  v79 = MEMORY[0x847CB4];
  v78 = this + 36;
  *(_BYTE *)(this + 378) = v39;
  *(_BYTE *)(this + 379) = INIClass::ReadBool_Overwrite(v78, v79, (char)v80);
  v40 = INIClass::ReadInt_Overwrite(this + 36, MEMORY[0x847CA8], *(_DWORD *)(this + 380));
  v41 = *(_DWORD *)(this + 384);
  *(_DWORD *)(this + 380) = v40;
  v42 = INIClass::ReadInt_Overwrite(this + 36, MEMORY[0x847C9C], v41);
  v80 = *(const char **)(this + 388);
  v79 = MEMORY[0x847C90];
  v78 = this + 36;
  *(_DWORD *)(this + 384) = v42;
  *(_DWORD *)(this + 388) = INIClass::ReadInt_Overwrite(v78, v79, v80);
  v43 = INIClass::ReadInt_Overwrite(this + 36, stru_847C84, *(_DWORD *)(this + 392));
  v44 = *(_DWORD *)(this + 452);
  *(_DWORD *)(this + 392) = v43;
  v45 = INIClass::ReadInt_Overwrite(this + 36, MEMORY[0x84439C], v44);
  v80 = *(const char **)(this + 456);
  v79 = MEMORY[0x844390];
  v78 = this + 36;
  *(_DWORD *)(this + 452) = v45;
  v46 = INIClass::ReadInt_Overwrite(v78, v79, v80);
  *(_DWORD *)(this + 456) = v46;
  if ( v46 < 0 )
    *(_DWORD *)(this + 456) = 0;
  v47 = *(_DWORD *)(this + 456);
  if ( *(_DWORD *)(this + 452) < v47 )
    *(_DWORD *)(this + 452) = v47;
  if ( INIClass::GetString(this + 36, (int)MEMORY[0x844384], &MEMORY[0x889F64], String, 0x80u) )
  {
    DynamicVector::Constructor_VoxelAnim(0, 0);
    v89[0] = (int)&g_ptr_7F0D3C;
    for ( j = strtok(String, MEMORY[0x817F70]); j; j = strtok(0, MEMORY[0x817F70]) )
    {
      if ( !*j )
        break;
      v49 = UnitTypeClass::FindOrCreate(j);
      if ( v49
        && (v92 < v90
         || (v91 || !v90)
         && v93 > 0
         && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v89[0] + 8))(v89, v90 + v93, 0)) )
      {
        v50 = v92++;
        *(_DWORD *)(v89[1] + 4 * v50) = v49;
      }
    }
    Voxel_Section::Constructor(v89);
    v82 = (int)&g_ptr_7F0D3C;
    v89[0] = (int)&g_ptr_7F0D5C;
    Vector::Cleanup2(v89);
  }
  else
  {
    Voxel_Section::Constructor(this + 396);
    v82 = (int)&g_ptr_7F0D3C;
  }
  if ( (int *)(this + 396) != &v82 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 396) + 12))(this + 396);
    v51 = v84;
    v52 = v84 == 0;
    *(_DWORD *)(this + 404) = v84;
    if ( v52 )
    {
      *(_DWORD *)(this + 400) = 0;
      *(_BYTE *)(this + 409) = 0;
    }
    else
    {
      v53 = __2_YAPAXI_Z(4 * v51);
      *(_DWORD *)(this + 400) = v53;
      if ( v53 )
      {
        v54 = *(_DWORD *)(this + 404);
        v55 = 0;
        *(_BYTE *)(this + 409) = 1;
        if ( v54 > 0 )
        {
          do
          {
            *(_DWORD *)(*(_DWORD *)(this + 400) + 4 * v55) = *((_DWORD *)Block + v55);
            ++v55;
          }
          while ( v55 < *(_DWORD *)(this + 404) );
        }
      }
    }
  }
  v56 = v87;
  v57 = v88;
  *(_DWORD *)(this + 412) = v86;
  v58 = Block;
  *(_DWORD *)(this + 416) = v56;
  *(_DWORD *)(this + 420) = v57;
  v82 = (int)&g_ptr_7F0D5C;
  if ( v58 && v85 )
    __3_YAXPAX_Z(v58);
  v75 = 0;
  v76 = 0;
  LOWORD(v77) = 1;
  v74 = &g_ptr_7E4DB8;
  if ( &v74 != (void ***)(this + 424) )
  {
    VectorClass::Destroy(v74, v75, v76, v77);
    v76 = *(_DWORD *)(this + 432);
    if ( v76 )
    {
      v75 = __2_YAPAXI_Z(4 * v76);
      if ( v75 )
      {
        v59 = 0;
        for ( BYTE1(v77) = 1; v59 < v76; ++v59 )
          v75[v59] = *(_DWORD *)(*(_DWORD *)(this + 428) + 4 * v59);
      }
    }
    else
    {
      v75 = 0;
      BYTE1(v77) = 0;
    }
  }
  v78 = *(_DWORD *)(this + 440);
  v79 = *(char **)(this + 444);
  v74 = &g_ptr_7E4DD8;
  v60 = __0Iostream_init_QAE_XZ_4((Iostream_init *)(this + 36));
  v61 = (_DWORD *)INIClass::ReadIntList(
                    (int)&v82,
                    (int)v60,
                    (int)MEMORY[0x844374],
                    (int)v74,
                    v75,
                    v76,
                    v77,
                    v78,
                    (int)v79,
                    (int)v80);
  v81 = (int)v61;
  if ( (_DWORD *)(this + 424) != v61 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 424) + 12))(this + 424);
    v62 = *(_DWORD *)(v81 + 8);
    *(_DWORD *)(this + 432) = v62;
    if ( v62 )
    {
      v63 = __2_YAPAXI_Z(4 * v62);
      *(_DWORD *)(this + 428) = v63;
      if ( v63 )
      {
        v64 = *(_DWORD *)(this + 432);
        v65 = 0;
        *(_BYTE *)(this + 437) = 1;
        if ( v64 > 0 )
        {
          do
          {
            ++v65;
            *(_DWORD *)(*(_DWORD *)(this + 428) + 4 * v65 - 4) = *(_DWORD *)(*(_DWORD *)(v81 + 4) + 4 * v65 - 4);
          }
          while ( v65 < *(_DWORD *)(this + 432) );
        }
      }
    }
    else
    {
      *(_DWORD *)(this + 428) = 0;
      *(_BYTE *)(this + 437) = 0;
    }
    v61 = (_DWORD *)v81;
  }
  *(_DWORD *)(this + 440) = v61[4];
  *(_DWORD *)(this + 444) = v61[5];
  v66 = v61[6];
  v67 = Block;
  *(_DWORD *)(this + 448) = v66;
  v82 = (int)&g_ptr_7E4DB8;
  if ( v67 && v85 )
    __3_YAXPAX_Z(v67);
  if ( INIClass::GetString(this + 36, (int)aVerses, stru_847C40, Destination, 0x80u) )
  {
    v68 = strtok(Destination, MEMORY[0x817F70]);
    v69 = (double *)(this + 160);
    v70 = 11;
    do
    {
      v71 = strchr(v68, 37);
      v80 = v68;
      if ( v71 )
      {
        v81 = atoi(v80);
        v72 = (double)v81 * 0.01;
      }
      else
      {
        v72 = atof(v80);
      }
      v80 = MEMORY[0x817F70];
      v79 = 0;
      *v69++ = v72;
      --v70;
      v68 = strtok(v79, v80);
    }
    while ( v70 );
  }
  if ( *(double *)(this + 192) == 0.0 && *(double *)(this + 208) == 0.0 )
  {
    *(_BYTE *)(this + 329) = 1;
    return 1;
  }
  else
  {
    *(_BYTE *)(this + 329) = 0;
    return 1;
  }
}


// ==== 0x0075DEC0  WarheadTypeClass::ProcessPower  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::ProcessPower(WarheadTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int *v18; // ebx
  int v20; // [esp+Ch] [ebp-4h]

  v3 = AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x75ded0*/
  LOBYTE(v3) = this->__pad_144[0]; /*0x75ded5*/
  Power::FlagProcess((Power *)a2, v3); /*0x75dede*/
  LOBYTE(v4) = this->__pad_144[3]; /*0x75dee3*/
  Power::FlagProcess((Power *)a2, v4); /*0x75deec*/
  LOBYTE(v5) = this->__pad_144[4]; /*0x75def1*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x75defa*/
  LOBYTE(v6) = this->WarheadTypeClass_field_bool_149[0]; /*0x75deff*/
  Power::FlagProcess((Power *)a2, v6); /*0x75df08*/
  LOBYTE(v7) = this->WarheadTypeClass_field_bool_149[1]; /*0x75df0d*/
  Power::FlagProcess((Power *)a2, v7); /*0x75df16*/
  LOBYTE(v8) = this->WarheadTypeClass_field_bool_149[2]; /*0x75df1b*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x75df24*/
  LOBYTE(v9) = this->WarheadTypeClass_field_bool_149[3]; /*0x75df29*/
  Power::FlagProcess((Power *)a2, v9); /*0x75df32*/
  LOBYTE(v10) = this->Conventional[0]; /*0x75df37*/
  Power::FlagProcess((Power *)a2, v10); /*0x75df40*/
  LOBYTE(v11) = this->Conventional[1]; /*0x75df45*/
  v12 = Power::FlagProcess((Power *)a2, v11); /*0x75df4e*/
  LOBYTE(v12) = this->Conventional[2]; /*0x75df53*/
  Power::FlagProcess((Power *)a2, v12); /*0x75df5c*/
  LOBYTE(v13) = this->Conventional[3]; /*0x75df61*/
  Power::FlagProcess((Power *)a2, v13); /*0x75df6a*/
  LOBYTE(v14) = this->CLDisableRed[0]; /*0x75df6f*/
  v15 = Power::FlagProcess((Power *)a2, v14); /*0x75df78*/
  LOBYTE(v15) = this->CLDisableRed[1]; /*0x75df7d*/
  Power::FlagProcess((Power *)a2, v15); /*0x75df86*/
  LOBYTE(v16) = this->CLDisableRed[2]; /*0x75df8b*/
  Power::FlagProcess((Power *)a2, v16); /*0x75df94*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_44[84], *(_DWORD *)&this->__pad_44[88]); /*0x75dfa9*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x100); /*0x75dfb7*/
  Checksummer::Add_double((Checksummer *)a2, (int)this->WarheadTypeClass_field_0xF8, *(_DWORD *)this->__pad_FC); /*0x75dfcc*/
  LOBYTE(v17) = HIBYTE(this->PsychicDamage); /*0x75dfd1*/
  Power::FlagProcess((Power *)a2, v17); /*0x75dfda*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x17C); /*0x75dfe8*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x180); /*0x75dff6*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x184); /*0x75e004*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x188); /*0x75e012*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)&this->Parasite[3], 16); /*0x75e022*/
  v18 = (int *)&this->__pad_44[92]; /*0x75e027*/
  v20 = 11; /*0x75e02d*/
  do /*0x75e04f*/
  {
    Checksummer::Add_double((Checksummer *)a2, *v18, v18[1]); /*0x75e03e*/
    v18 += 2; /*0x75e047*/
    --v20; /*0x75e04b*/
  }
  while ( v20 ); /*0x75e04f*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x114); /*0x75e05a*/
  return Power::TimerProcess(this->WarheadTypeClass_field_0x120); /*0x75e06d*/
}



// ==== 0x0075E080  WarheadTypeClass::vt[03]  this=WarheadTypeClass  sig=csp ====
int __stdcall WarheadTypeClass::g_var_ffdfec(WarheadTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x75e086*/
    return -2147467261; /*0x75e088*/
  *a2 = -1463464540; /*0x75e096*/
  a2[1] = 298979195; /*0x75e09e*/
  a2[2] = 1610642049; /*0x75e0a7*/
  a2[3] = unk_7E984C; /*0x75e0b0*/
  return 0; /*0x75e08d*/
}



// ==== 0x0075E0C0  WarheadTypeClass::SaveLoad_Prefix  this=WarheadTypeClass  sig=csp ====
int __stdcall WarheadTypeClass::SaveLoad_Prefix(WarheadTypeClass *this, int a2)
{
  WarheadTypeClass *v2; // edi
  int *DebrisTypes; // ebp
  int v4; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi
  int n; // esi

  v2 = this; /*0x75e0c4*/
  DebrisTypes = this->DebrisTypes; /*0x75e0ce*/
  (*(void (__thiscall **)(int *))(this->DebrisTypes[0] + 12))(this->DebrisTypes); /*0x75e0d6*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&v2->__pad_1A0[8] + 12))(&v2->__pad_1A0[8]); /*0x75e0e7*/
  v4 = a2; /*0x75e0ea*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x75e0f0*/
  if ( result >= 0 ) /*0x75e0f7*/
  {
    if ( v2 ) /*0x75e0ff*/
    {
      AbstractTypeClass::Init((int)v2, (int)&this); /*0x75e108*/
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v2->__pad_104, 0, 0); /*0x75e117*/
      *(_DWORD *)v2->__pad_104 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75e120*/
      WarheadTypeClass::checkImmunity((WarheadTypeClass *)DebrisTypes, (int)&this); /*0x75e12d*/
      WarheadTypeClass::calculateDamage((WarheadTypeClass *)&v2->__pad_1A0[8], (int)&this); /*0x75e139*/
      v2->Deform = &WarheadTypeClass::`vftable'; /*0x75e13e*/
      v2->WarheadTypeClass_field_0x4 = &WarheadTypeClass::`vftable'; /*0x75e144*/
      v2->WarheadTypeClass_field_0x8 = &WarheadTypeClass::`vftable'; /*0x75e14b*/
      v2->WarheadTypeClass_field_0xC = &WarheadTypeClass::`vftable'; /*0x75e152*/
    }
    if ( v2 != (WarheadTypeClass *)-260 ) /*0x75e161*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v2->__pad_104, 0, 0); /*0x75e169*/
      *(_DWORD *)v2->__pad_104 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75e16e*/
    }
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x75e180*/
    for ( i = 0; i < (int)this; ++i ) /*0x75e18b*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e199*/
      DynamicVector::Add_Alt4((DynamicVector *)v2->__pad_104, &a2); /*0x75e1a7*/
    }
    if ( DebrisTypes ) /*0x75e1b5*/
      TypeList::VoxelAnimConstructor((TypeList *)DebrisTypes); /*0x75e1b9*/
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x75e1ca*/
    for ( j = 0; j < (int)this; ++j ) /*0x75e1d5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e1e3*/
      DynamicVector::Add2((DynamicVector *)DebrisTypes, &a2); /*0x75e1ed*/
    }
    if ( v2 != (WarheadTypeClass *)-424 ) /*0x75e201*/
      TypeList::Construct((TypeList *)&v2->__pad_1A0[8]); /*0x75e205*/
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x75e216*/
    for ( k = 0; k < (int)this; ++k ) /*0x75e221*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e22f*/
      DynamicVector::Add_Alt((DynamicVector *)&v2->__pad_1A0[8], &a2); /*0x75e239*/
    }
    for ( m = 0; m < v2->WarheadTypeClass_field_0x114; ++m ) /*0x75e24f*/
      ObjectPtr::RegisterForTracking( /*0x75e260*/
        (int)&SwizzleManagerClass_Instance,
        (int *)(v2->WarheadTypeClass_field_0x108 + 4 * m));
    for ( n = 0; n < v2->unused_1CC[0]; ++n ) /*0x75e27a*/
      ObjectPtr::RegisterForTracking( /*0x75e28b*/
        (int)&SwizzleManagerClass_Instance,
        (int *)(v2->WarheadTypeClass_field_0x190[0] + 4 * n));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->WarheadTypeClass_field_0x140); /*0x75e2a7*/
    return 0; /*0x75e2ac*/
  }
  return result; /*0x75e2ae*/
}



// ==== 0x0075E2C0  WarheadTypeClass::SaveLoad_Prefix_0  this=WarheadTypeClass  sig=csp ====
int __userpurge WarheadTypeClass::SaveLoad_Prefix_0@<eax>(
        WarheadTypeClass *this,
        int *a2,
        int *WarheadTypeClass_field_0x114,
        int a4,
        int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, (int)WarheadTypeClass_field_0x114); /*0x75e2d1*/
  if ( result >= 0 ) /*0x75e2d8*/
  {
    v7 = *a2; /*0x75e2e4*/
    WarheadTypeClass_field_0x114 = (int *)this->WarheadTypeClass_field_0x114; /*0x75e2f1*/
    (*(void (__stdcall **)(int *, int **, int, _DWORD, int))(v7 + 16))(a2, &WarheadTypeClass_field_0x114, 4, 0, v5); /*0x75e2f5*/
    for ( i = 0; i < a4; ++i ) /*0x75e300*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->WarheadTypeClass_field_0x108 + 4 * i, 4, 0); /*0x75e313*/
    v9 = *a2; /*0x75e323*/
    a4 = this->unused_1CC[0]; /*0x75e32f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x75e333*/
    for ( j = 0; j < a4; ++j ) /*0x75e33e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x75e351*/
        a2,
        this->WarheadTypeClass_field_0x190[0] + 4 * j,
        4,
        0);
    v11 = *a2; /*0x75e361*/
    a4 = *(_DWORD *)&this->__pad_1B0[8]; /*0x75e36d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x75e371*/
    for ( k = 0; k < (int)WarheadTypeClass_field_0x114; ++k ) /*0x75e37c*/
      (*(void (__stdcall **)(int *, char *, int, _DWORD))(*a2 + 16))( /*0x75e38f*/
        a2,
        (char *)&this->WarheadTypeClass_field_0x1AC->AbstractClass + 4 * k,
        4,
        0);
    return 0; /*0x75e399*/
  }
  return result; /*0x75e39c*/
}



// ==== 0x0075E3B0  WarheadTypeClass::FindOrCreate  this=AbstractTypeClass  sig=csp ====
int __thiscall WarheadTypeClass_FindOrCreate(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x75e3cc*/
    return 0; /*0x75e42f*/
  v2 = 0; /*0x75e3dd*/
  if ( g_WarheadTypePool <= 0 ) /*0x75e3e1*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0x1D0u) ) /*0x75e40b*/
      return WarheadTypeClass::Construct(Source); /*0x75e421*/
    return 0; /*0x75e415*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_8874C4 + v2) + 36), Source) ) /*0x75e3fa*/
  {
    if ( ++v2 >= g_WarheadTypePool ) /*0x75e404*/
      goto LABEL_6; /*0x75e404*/
  }
  return *((_DWORD *)dword_8874C4 + v2); /*0x75e41f*/
}



// ==== 0x0075E440  WarheadTypeClass::GetDamage  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::GetDamage(WarheadTypeClass *this, int a2, int a3)
{
  int v3; // eax
  char *pad_104; // esi
  int result; // eax
  int v6; // ecx
  int v7; // ecx

  v3 = a2; /*0x75e440*/
  if ( (void *)a2 == this->WarheadTypeClass_field_0x140 ) /*0x75e44c*/
    this->WarheadTypeClass_field_0x140 = 0; /*0x75e44e*/
  pad_104 = this->__pad_104; /*0x75e459*/
  a2 = v3; /*0x75e463*/
  result = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)this->__pad_104 + 16))(this->__pad_104, &a2); /*0x75e46c*/
  if ( result != -1 ) /*0x75e472*/
  {
    v6 = *((_DWORD *)pad_104 + 4); /*0x75e474*/
    if ( result < v6 ) /*0x75e479*/
    {
      v7 = v6 - 1; /*0x75e47b*/
      for ( *((_DWORD *)pad_104 + 4) = v7; /*0x75e481*/
            result < *((_DWORD *)pad_104 + 4);
            *(_DWORD *)(*((_DWORD *)pad_104 + 1) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)pad_104 + 1) + 4 * result) )
      {
        ++result; /*0x75e486*/
      }
    }
  }
  return result; /*0x75e496*/
}



// ==== 0x0075E4A0  Crate::applyCrateEffect  this=Crate  sig=csp ====
int __thiscall Crate::applyCrateEffect(Crate *this)
{
  int v1; // esi

  v1 = 0; /*0x75e4a6*/
  if ( g_WarheadTypePool <= 0 ) /*0x75e4ad*/
    return 0; /*0x75e4d2*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_8874C4 + v1) + 36), (char *)this) ) /*0x75e4c6*/
  {
    if ( ++v1 >= g_WarheadTypePool ) /*0x75e4d0*/
      return 0; /*0x75e4d0*/
  }
  return *((_DWORD *)dword_8874C4 + v1); /*0x75e4d2*/
}



// ==== 0x0075E4F0  WarheadTypeClass::GetObjectSize  this=WarheadTypeClass  sig=csp ====
int WarheadTypeClass::GetObjectSize(WarheadTypeClass *this)
{
  return 464; /*0x75e4f5*/
}



// ==== 0x0075E500  WarheadTypeClass::GetTypeIdentifier  this=WarheadTypeClass  sig=csp ====
int WarheadTypeClass::GetTypeIdentifier(WarheadTypeClass *this)
{
  return 50; /*0x75e505*/
}



// ==== 0x0075E510  WarheadTypeClass::Destructor  this=WarheadTypeClass  sig=csp ====
void **__thiscall WarheadTypeClass::Destructor(WarheadTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  CampaignClass *WarheadTypeClass_field_0x1AC; // eax
  void *v6; // eax
  void *WarheadTypeClass_field_0x108; // eax
  WarheadTypeClass *v9; // [esp+4h] [ebp-4h] BYREF

  this->Deform = &WarheadTypeClass::`vftable'; /*0x75e516*/
  this->WarheadTypeClass_field_0x4 = &WarheadTypeClass::`vftable'; /*0x75e51c*/
  this->WarheadTypeClass_field_0x8 = &WarheadTypeClass::`vftable'; /*0x75e523*/
  this->WarheadTypeClass_field_0xC = &WarheadTypeClass::`vftable'; /*0x75e52a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x75e531*/
  v9 = this; /*0x75e546*/
  v3 = ((int (__thiscall *)(WarheadTypeClass **, WarheadTypeClass **))WarheadTypeClass_Array->WarheadTypeClass_field_0x10)( /*0x75e54a*/
         &WarheadTypeClass_Array,
         &v9);
  if ( v3 != -1 && v3 < g_WarheadTypePool && v3 < --g_WarheadTypePool ) /*0x75e565*/
  {
    do /*0x75e57d*/
    {
      ++v3; /*0x75e56d*/
      *((_DWORD *)dword_8874C4 + v3 - 1) = *((_DWORD *)dword_8874C4 + v3); /*0x75e571*/
    }
    while ( v3 < g_WarheadTypePool ); /*0x75e57d*/
  }
  v9 = this; /*0x75e58f*/
  v4 = (*(int (__thiscall **)(int *, WarheadTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x75e593*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v9);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x75e5a3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x75e5a8*/
    for ( ; /*0x75e5ae*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x75e5b6*/
    }
  }
  WarheadTypeClass_field_0x1AC = this->WarheadTypeClass_field_0x1AC; /*0x75e5c8*/
  *(_DWORD *)&this->__pad_1A0[8] = &VectorClass<int>::`vftable'; /*0x75e5d1*/
  if ( WarheadTypeClass_field_0x1AC && this->__pad_1B0[5] ) /*0x75e5df*/
  {
    __3_YAXPAX_Z(WarheadTypeClass_field_0x1AC); /*0x75e5e8*/
    this->WarheadTypeClass_field_0x1AC = 0; /*0x75e5f0*/
  }
  this->__pad_1B0[5] = 0; /*0x75e5f6*/
  *(_DWORD *)this->__pad_1B0 = 0; /*0x75e5fc*/
  v6 = (void *)this->WarheadTypeClass_field_0x190[0]; /*0x75e602*/
  this->DebrisTypes[0] = (int)&VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75e608*/
  if ( v6 && BYTE1(this->MinDebris) ) /*0x75e616*/
  {
    __3_YAXPAX_Z(v6); /*0x75e61f*/
    this->WarheadTypeClass_field_0x190[0] = 0; /*0x75e627*/
  }
  BYTE1(this->MinDebris) = 0; /*0x75e62d*/
  this->MaxDebris = 0; /*0x75e633*/
  WarheadTypeClass_field_0x108 = (void *)this->WarheadTypeClass_field_0x108; /*0x75e639*/
  *(_DWORD *)this->__pad_104 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75e63f*/
  if ( WarheadTypeClass_field_0x108 && this->__pad_10C[5] ) /*0x75e64d*/
  {
    __3_YAXPAX_Z(WarheadTypeClass_field_0x108); /*0x75e656*/
    this->WarheadTypeClass_field_0x108 = 0; /*0x75e65e*/
  }
  this->__pad_10C[5] = 0; /*0x75e666*/
  *(_DWORD *)this->__pad_10C = 0; /*0x75e66c*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x75e672*/
  if ( (a2 & 1) != 0 ) /*0x75e67e*/
    __3_YAXPAX_Z(this); /*0x75e681*/
  return &this->Deform; /*0x75e68b*/
}



// ==== 0x0075E690  WarheadTypeClass::checkImmunity  this=TypeList  sig=csp ====
_DWORD *__thiscall WarheadTypeClass::checkImmunity(WarheadTypeClass *this, int a2)
{
  this->Deform = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75e692*/
  return &this->Deform; /*0x75e698*/
}



// ==== 0x0075E6A0  WarheadTypeClass::calculateDamage  this=TypeList  sig=csp ====
_DWORD *__thiscall WarheadTypeClass::calculateDamage(WarheadTypeClass *this, int a2)
{
  this->Deform = &TypeList<int>::`vftable'; /*0x75e6a2*/
  return &this->Deform; /*0x75e6a8*/
}



// ==== 0x0075E6B0  Voxel_Section::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall Voxel_Section::Constructor(Voxel_Section *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Voxel_Section_field_0x04 = 0; /*0x75e6bd*/
  this->Capacity = 0; /*0x75e6c0*/
  this->IsInitialized = 1; /*0x75e6c3*/
  this->IsAllocated = 0; /*0x75e6c7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75e6ca*/
  if ( this != (Voxel_Section *)a2 ) /*0x75e6d0*/
  {
    Vector::Cleanup2((_VectorClass_PBVVoxelAnimTypeClass *)this); /*0x75e6d2*/
    v3 = a2[2]; /*0x75e6d8*/
    this->Capacity = v3; /*0x75e6dd*/
    if ( v3 ) /*0x75e6e0*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x75e6e6*/
      this->Voxel_Section_field_0x04 = v4; /*0x75e6f0*/
      if ( v4 ) /*0x75e6f3*/
      {
        v5 = this->Capacity; /*0x75e6f5*/
        v6 = 0; /*0x75e6f8*/
        this->IsAllocated = 1; /*0x75e6fc*/
        if ( v5 > 0 ) /*0x75e700*/
        {
          do /*0x75e714*/
          {
            *(_DWORD *)(this->Voxel_Section_field_0x04 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x75e70b*/
            ++v6; /*0x75e711*/
          }
          while ( v6 < this->Capacity ); /*0x75e714*/
        }
      }
    }
    else
    {
      this->Voxel_Section_field_0x04 = 0; /*0x75e718*/
      this->IsAllocated = 0; /*0x75e71b*/
    }
  }
  this->Items = a2[4]; /*0x75e721*/
  *((_DWORD *)this + 5) = a2[5]; /*0x75e727*/
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75e72a*/
  return this->__pad_0; /*0x75e732*/
}



// ==== 0x0075E740  sub_75E740  this=-  sig=ida-proto ====
void sub_75E740()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75e74c*/
  dbl_B45D80 = Math::Sqrt(v0 + v0); /*0x75e75e*/
}



// ==== 0x0075E770  sub_75E770  this=-  sig=ida-proto ====
void sub_75E770()
{
  dbl_B725C0 = dbl_B45D80 / 60.0; /*0x75e77c*/
}



// ==== 0x0075E790  sub_75E790  this=-  sig=ida-proto ====
void sub_75E790()
{
  dbl_B46688 = 1.0 / dbl_B725C0; /*0x75e79c*/
}



// ==== 0x0075E7B0  sub_75E7B0  this=-  sig=ida-proto ====
void sub_75E7B0()
{
  dbl_B46680 = 0.0174532925199433 * 45.0; /*0x75e7bc*/
}



// ==== 0x0075E7D0  sub_75E7D0  this=-  sig=ida-proto ====
void sub_75E7D0()
{
  dbl_B45D90 = 0.0174532925199433 * 60.0; /*0x75e7dc*/
}



// ==== 0x0075E7F0  sub_75E7F0  this=-  sig=ida-proto ====
void sub_75E7F0()
{
  dbl_B45D60 = 0.0174532925199433 * 90.0; /*0x75e7fc*/
}



// ==== 0x0075E810  sub_75E810  this=-  sig=ida-proto ====
__int64 sub_75E810()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45D60 - dbl_B45D90); /*0x75e822*/
  result = Math::RoundToInt(v0 * dbl_B45D80 * 0.5); /*0x75e836*/
  dword_B725C8 = result; /*0x75e83b*/
  return result; /*0x75e840*/
}



// ==== 0x0075E850  sub_75E850  this=-  sig=ida-proto ====
void sub_75E850()
{
  dbl_B45D98 = Math::ArcTan((double)dword_B725C8 * 0.00390625); /*0x75e867*/
}



// ==== 0x0075E880  sub_75E880  this=-  sig=ida-proto ====
void sub_75E880()
{
  dbl_B46640 = Math::ArcTan((double)(2 * dword_B725C8) / dbl_B45D80); /*0x75e8a2*/
}



// ==== 0x0075E8B0  sub_75E8B0  this=-  sig=ida-proto ====
__int64 sub_75E8B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B725C8) + 0.5); /*0x75e8cb*/
  dword_B725BC = result; /*0x75e8d0*/
  return result; /*0x75e8d6*/
}



// ==== 0x0075E8E0  sub_75E8E0  this=-  sig=ida-proto ====
int sub_75E8E0()
{
  word_B45D78 = 0; /*0x75e8e2*/
  word_B45D7A = 0; /*0x75e8e8*/
  return 0; /*0x75e8ee*/
}



// ==== 0x0075E8F0  sub_75E8F0  this=-  sig=ida-proto ====
int sub_75E8F0()
{
  dword_B46248 = 0; /*0x75e8f2*/
  dword_B4624C = 0; /*0x75e8f7*/
  dword_B46250 = 0; /*0x75e8fc*/
  return 0; /*0x75e901*/
}



// ==== 0x0075E910  sub_75E910  this=-  sig=ida-proto ====
int sub_75E910()
{
  dword_B46698 = 0; /*0x75e915*/
  dword_B46690 = 128; /*0x75e91f*/
  dword_B46694 = 128; /*0x75e924*/
  return 128; /*0x75e929*/
}



// ==== 0x0075E930  sub_75E930  this=-  sig=ida-proto ====
int sub_75E930()
{
  dword_B45D68 = 0; /*0x75e932*/
  dword_B45D6C = 0; /*0x75e937*/
  dword_B45D70 = 0; /*0x75e93c*/
  dword_B45D74 = 0; /*0x75e941*/
  return 0; /*0x75e946*/
}



// ==== 0x0075E950  WaveClass::Constructor  this=WaveClass  sig=csp ====
void **__thiscall WaveClass::Constructor(WaveClass *this, int *a2, _DWORD *a3, void *a4, void *a5, void *a6)
{
  double v6; // st7
  int v8; // edx
  int v10; // eax
  int v11; // eax
  int *WaveClass_field_14C; // edx
  int WaveClass_field_DC; // eax
  int v14; // edx
  int v15; // edx
  Voxel *v16; // [esp+8h] [ebp-10h]

  ObjectClass::ctor((ObjectClass *)this); /*0x75e956*/
  this->WaveClass_field_138 = 0; /*0x75e969*/
  this->WaveClass_field_140 = 0; /*0x75e96f*/
  this->Target = a6; /*0x75e975*/
  this->Type[0] = (int)a5; /*0x75e97b*/
  this->WaveClass_field_12C = 1; /*0x75e981*/
  this->WaveClass_field_12D = 0; /*0x75e988*/
  this->WaveIntensity = 100; /*0x75e98e*/
  this->WaveClass_field_134 = 0; /*0x75e998*/
  this->WaveClass_field_13C = 0; /*0x75e99e*/
  this->WaveClass_field_144 = 0; /*0x75e9a4*/
  this->WaveClass_field_148 = 0; /*0x75e9aa*/
  this->WaveClass_field_14C = 0; /*0x75e9b0*/
  this->WaveClass_field_1A0 = 0; /*0x75e9b6*/
  this->WaveClass_field_1A4 = 0; /*0x75e9bc*/
  this->WaveClass_field_1A8 = 0; /*0x75e9c2*/
  this->LaserIntensity = 0; /*0x75e9ce*/
  this->Owner = a4; /*0x75e9d4*/
  FrameSnapshot::Init((FrameSnapshot *)this->Facing); /*0x75e9da*/
  *((_DWORD *)this + 125) = 0; /*0x75e9e1*/
  *((_DWORD *)this + 126) = 5; /*0x75e9e7*/
  *((_BYTE *)this + 508) = 1; /*0x75e9f1*/
  *((_BYTE *)this + 509) = 0; /*0x75e9f8*/
  this->WaveClass_field_128 = &VectorClass<CellClass *>::`vftable'; /*0x75e9fe*/
  *((_DWORD *)this + 125) = __2_YAPAXI_Z(0x14u); /*0x75ea18*/
  *((_BYTE *)this + 509) = 1; /*0x75ea1e*/
  this->WaveClass_field_128 = &DynamicVectorClass<CellClass *>::`vftable'; /*0x75ea25*/
  this->WaveClass_field_12D = 10; /*0x75ea2f*/
  this->WaveClass_field_12C = 0; /*0x75ea39*/
  this->ObjectClass = &WaveClass::`vftable'; /*0x75ea3f*/
  this->? = &WaveClass::`vftable'; /*0x75ea45*/
  this->? = &WaveClass::`vftable'; /*0x75ea4b*/
  this->? = &off_7F6BC8; /*0x75ea52*/
  v8 = a2[1] - a3[1]; /*0x75ea66*/
  Math::Sqrt((double)((*a2 - *a3) * (*a2 - *a3) + v8 * v8)); /*0x75ea7e*/
  if ( v6 >= 240.0 ) /*0x75ea91*/
  {
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x75eaa4*/
    if ( *(int *)&stru_A8EB00.?[100] < *(int *)&stru_A8EB00.?[92] /*0x75eadd*/
      || (stru_A8EB00.?[97] || !*(_DWORD *)&stru_A8EB00.?[92])
      && *(int *)&stru_A8EB00.?[104] > 0
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[84] + 8))(
           &stru_A8EB00.?[84],
           *(_DWORD *)&stru_A8EB00.?[92] + *(_DWORD *)&stru_A8EB00.?[104],
           0) )
    {
      v10 = (*(_DWORD *)&stru_A8EB00.?[100])++; /*0x75eaea*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v10) = this; /*0x75eaf9*/
    }
    if ( !byte_B725CC ) /*0x75eb02*/
      Voxel::InitDistanceTable(v16); /*0x75eb04*/
    if ( this->Type[0] == 3 ) /*0x75eb10*/
      Voxel::LightRender((Voxel *)this, a2, (int)a3); /*0x75eb1a*/
    else
      Voxel::SectionProject((Voxel *)this, a2, (int)a3); /*0x75eb29*/
    this->WaveClass_field_1A8 = 0; /*0x75eb3c*/
    this->WaveClass_field_1CC = CalcMathFacing8(&this->WaveClass_field_CC, &this->WaveClass_field_E4); /*0x75eb51*/
    WaveClass::DrawWave(this, this->someCoords, 0); /*0x75eb57*/
    v11 = this->Type[0]; /*0x75eb5c*/
    if ( v11 > 0 && v11 <= 2 ) /*0x75eb69*/
    {
      WaveClass_field_14C = (int *)this->WaveClass_field_14C; /*0x75eb6b*/
      WaveClass_field_DC = this->WaveClass_field_DC; /*0x75eb71*/
      this->WaveClass_field_138 = 0; /*0x75eb77*/
      this->WaveClass_field_13C = 1072693248; /*0x75eb7d*/
      this->LaserIntensity = 160; /*0x75eb87*/
      *WaveClass_field_14C = WaveClass_field_DC; /*0x75eb91*/
      WaveClass_field_14C[1] = this->WaveClass_field_E0; /*0x75eb99*/
      v14 = this->WaveClass_field_14C; /*0x75eb9c*/
      *(_DWORD *)(v14 + 8) = this->WaveClass_field_D4; /*0x75eba8*/
      *(_DWORD *)(v14 + 12) = this->WaveClass_field_D8; /*0x75ebb1*/
      v15 = this->WaveClass_field_14C; /*0x75ebb4*/
      *(_DWORD *)(v15 + 16) = this->WaveClass_field_E4; /*0x75ebbc*/
      *(_DWORD *)(v15 + 20) = this->WaveClass_field_E8; /*0x75ebc2*/
    }
    Voxel::TransformMatrix((int)this); /*0x75ebc7*/
    return &this->ObjectClass; /*0x75ebcc*/
  }
  else
  {
    ObjectClass::Destroy((ObjectClass *)this); /*0x75ea95*/
    return &this->ObjectClass; /*0x75ea9a*/
  }
}



// ==== 0x0075EBE0  VoxelAnimClass::Constructor  this=WaveClass  sig=csp ====
int __thiscall VoxelAnimClass::Constructor(VoxelAnimClass *this)
{
  int v2; // eax
  Voxel *v4; // [esp+0h] [ebp-8h]

  ObjectClass::ctor((ObjectClass *)this); /*0x75ebe4*/
  this->__pad_12C[0] = 1; /*0x75ebeb*/
  *(_DWORD *)&this->__pad_12C[12] = 0; /*0x75ebf2*/
  this->VoxelAnimClass_field_0x140 = 0; /*0x75ebf8*/
  *(_DWORD *)&this->__pad_98[20] = 0; /*0x75ebfe*/
  this->__pad_12C[1] = 0; /*0x75ec04*/
  *(_DWORD *)&this->__pad_12C[4] = 100; /*0x75ec0a*/
  *(_DWORD *)&this->__pad_12C[16] = 0; /*0x75ec14*/
  *(_DWORD *)this->__pad_144 = 0; /*0x75ec1a*/
  *(_DWORD *)&this->__pad_144[4] = 0; /*0x75ec20*/
  *(_DWORD *)&this->__pad_144[8] = 0; /*0x75ec26*/
  *(_DWORD *)&this->__pad_144[92] = 0; /*0x75ec2c*/
  *(_DWORD *)&this->__pad_144[96] = 0; /*0x75ec32*/
  *(_DWORD *)&this->__pad_144[100] = 0; /*0x75ec38*/
  *(_DWORD *)&this->__pad_144[140] = 0; /*0x75ec44*/
  *(_DWORD *)&this->__pad_144[144] = 0; /*0x75ec4a*/
  FrameSnapshot::Init((FrameSnapshot *)&this->__pad_144[148]); /*0x75ec50*/
  *(_DWORD *)&this->__pad_144[176] = 0; /*0x75ec57*/
  *(_DWORD *)&this->__pad_144[180] = 5; /*0x75ec5d*/
  this->__pad_144[184] = 1; /*0x75ec67*/
  this->__pad_144[185] = 0; /*0x75ec6e*/
  *(_DWORD *)&this->__pad_144[172] = &VectorClass<CellClass *>::`vftable'; /*0x75ec74*/
  *(_DWORD *)&this->__pad_144[176] = __2_YAPAXI_Z(0x14u); /*0x75ec83*/
  this->__pad_144[185] = 1; /*0x75ec89*/
  *(_DWORD *)&this->__pad_144[172] = &DynamicVectorClass<CellClass *>::`vftable'; /*0x75ec90*/
  *(_DWORD *)&this->__pad_144[192] = 10; /*0x75ec9a*/
  *(_DWORD *)&this->__pad_144[188] = 0; /*0x75eca4*/
  this->VoxelAnimClass_field_0x0 = &WaveClass::`vftable'; /*0x75ecaa*/
  this->VoxelAnimClass_field_0x4[0] = (int)&WaveClass::`vftable'; /*0x75ecb0*/
  this->VoxelAnimClass_field_0x8 = &WaveClass::`vftable'; /*0x75ecb7*/
  *(_DWORD *)this->__pad_C = &off_7F6BC8; /*0x75ecbe*/
  if ( *(int *)&stru_A8EB00.?[100] < *(int *)&stru_A8EB00.?[92] /*0x75ecfb*/
    || (stru_A8EB00.?[97] || !*(_DWORD *)&stru_A8EB00.?[92])
    && *(int *)&stru_A8EB00.?[104] > 0
    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[84] + 8))(
         &stru_A8EB00.?[84],
         *(_DWORD *)&stru_A8EB00.?[92] + *(_DWORD *)&stru_A8EB00.?[104],
         0) )
  {
    v2 = (*(_DWORD *)&stru_A8EB00.?[100])++; /*0x75ed08*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v2) = this; /*0x75ed17*/
  }
  if ( !byte_B725CC ) /*0x75ed20*/
    Voxel::InitDistanceTable(v4); /*0x75ed22*/
  return (int)this; /*0x75ed29*/
}



// ==== 0x0075ED30  WaveClass::Destructor  this=WaveClass  sig=csp ====
int __thiscall WaveClass::Destructor(WaveClass *this)
{
  int v2; // eax
  void *v3; // eax
  WaveClass *v5; // [esp+8h] [ebp-4h] BYREF

  this->ObjectClass = &WaveClass::`vftable'; /*0x75ed37*/
  this->? = &WaveClass::`vftable'; /*0x75ed3d*/
  this->? = &WaveClass::`vftable'; /*0x75ed44*/
  this->? = &off_7F6BC8; /*0x75ed4b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x75ed52*/
  v5 = this; /*0x75ed67*/
  v2 = (*(int (__thiscall **)(_BYTE *, WaveClass **))(*(_DWORD *)&stru_A8EB00.?[84] + 16))(&stru_A8EB00.?[84], &v5); /*0x75ed6b*/
  if ( v2 != -1 && v2 < *(int *)&stru_A8EB00.?[100] ) /*0x75ed7b*/
  {
    --*(_DWORD *)&stru_A8EB00.?[100]; /*0x75ed80*/
    for ( ; /*0x75ed86*/
          v2 < *(int *)&stru_A8EB00.?[100];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v2 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v2) )
    {
      ++v2; /*0x75ed8e*/
    }
  }
  (*(void (__thiscall **)(char *))(this->WaveClass_field_128 + 12))((char *)this + 496); /*0x75edae*/
  v3 = (void *)*((_DWORD *)this + 125); /*0x75edb1*/
  this->WaveClass_field_128 = &VectorClass<CellClass *>::`vftable'; /*0x75edb4*/
  if ( v3 && *((_BYTE *)this + 509) ) /*0x75edbe*/
  {
    __3_YAXPAX_Z(v3); /*0x75edc6*/
    *((_DWORD *)this + 125) = 0; /*0x75edce*/
  }
  *((_BYTE *)this + 509) = 0; /*0x75edd7*/
  *((_DWORD *)this + 126) = 0; /*0x75eddb*/
  return ObjectClass::Dtor((ObjectClass *)this); /*0x75ede7*/
}



// ==== 0x0075EDF0  Voxel::BlendShadowColor  this=Voxel  sig=csp ====
int __thiscall Voxel::BlendShadowColor(Voxel *this, int a2, int a3, int a4, _WORD *a5)
{
  __int64 v5; // rax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int result; // eax

  v5 = word_B46254[(int)this->Voxel_field_0x130 /*0x75ee44*/
                 + (unsigned __int16)word_B4669C[300 * a4 + abs32(a2 - (unsigned int)this->Voxel_field_0xCC - a3)]];
  LODWORD(v5) = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x75ee47*/
  v6 = dword_B46648[(_DWORD)v5]; /*0x75ee50*/
  WORD2(v5) = a5[*(_DWORD *)&this->__pad_134[4 * v5 + 212]]; /*0x75ee57*/
  v7 = ((v6 * (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitMask_Green) << g_BitMask_Blue)) >> 8) /*0x75eeb8*/
     + (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitMask_Green) << g_BitMask_Blue);
  v8 = ((v6 * (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Blue) << g_BitMask_Red)) >> 8) /*0x75eec6*/
     + (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Blue) << g_BitMask_Red);
  v9 = (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Red) << g_BitShift_Green_0); /*0x75eec8*/
  if ( v8 > 255 ) /*0x75eed3*/
    v8 = 255; /*0x75eed5*/
  v10 = 255; /*0x75eee0*/
  if ( v7 <= 255 ) /*0x75eee5*/
    v10 = v7; /*0x75eee7*/
  result = v8 >> g_BitMask_Red << g_BitShift_Blue; /*0x75ef07*/
  *a5 = (v9 >> g_BitShift_Green_0 << g_BitShift_Red) | result | (v10 >> g_BitMask_Blue << g_BitMask_Green); /*0x75ef19*/
  return result; /*0x75ef1c*/
}



// ==== 0x0075EF30  sub_75EF30  this=-  sig=csp ====
int __stdcall sub_75EF30(_WORD *a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int result; // eax

  v2 = (unsigned __int8)((unsigned __int8)(*a1 >> g_BitShift_Red) << g_BitShift_Green_0) + (char)(a2 >> 2); /*0x75efa7*/
  v3 = (unsigned __int8)((unsigned __int8)(*a1 >> g_BitShift_Blue) << g_BitMask_Red) + ((96 * a2) >> 8); /*0x75efbf*/
  if ( v3 > 255 ) /*0x75efc6*/
    v3 = 255; /*0x75efc8*/
  if ( v2 > 255 ) /*0x75efe0*/
    v2 = 255; /*0x75efe2*/
  result = v3 >> g_BitMask_Red << g_BitShift_Blue; /*0x75f00f*/
  *a1 = result /*0x75f013*/
      | ((int)(unsigned __int8)((unsigned __int8)(*a1 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
      | (v2 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x75f016*/
}



// ==== 0x0075F020  Voxel::InitDistanceTable  this=Voxel  sig=csp ====
int Voxel::InitDistanceTable(Voxel *this)
{
  double v1; // st7
  int v2; // ebp
  __int16 *v3; // edi
  int i; // esi
  __int16 *v5; // esi
  __int16 *v6; // esi
  int *v7; // ecx
  int result; // eax
  double v9; // [esp+0h] [ebp-20h]
  double v10; // [esp+0h] [ebp-20h]
  double v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+1Ch] [ebp-4h]
  int v13; // [esp+1Ch] [ebp-4h]
  int v14; // [esp+1Ch] [ebp-4h]

  byte_B725CC = 1; /*0x75f02d*/
  v2 = 0; /*0x75f034*/
  v3 = word_B4669C; /*0x75f036*/
  do /*0x75f07a*/
  {
    for ( i = 0; i < 300; ++i ) /*0x75f03d*/
    {
      v12 = v2 * v2 + i * i; /*0x75f04c*/
      __asm /*0x75f050*/
      {
        fild [esp+20h+var_4]
        fstp [esp+20h+var_20]; double
      }
      Math::Sqrt(v9); /*0x75f057*/
      *v3++ = Math::RoundToInt(v1); /*0x75f064*/
    }
    ++v2; /*0x75f073*/
  }
  while ( (int)v3 < (int)&dword_B725BC ); /*0x75f07a*/
  v5 = word_B46254; /*0x75f07e*/
  v13 = 0; /*0x75f083*/
  do /*0x75f0c5*/
  {
    __asm { fild [esp+18h+var_4] } /*0x75f087*/
    __asm
    {
      fmul ds:dbl_7F6DE0
      fstp [esp+20h+var_20]; double
    }
    Math::SinCos(v10); /*0x75f097*/
    __asm { fmul ds:dbl_7ED8D8 } /*0x75f09c*/
    __asm { fadd ds:dbl_7EDB10 }
    *v5++ = Math::RoundToInt(v1); /*0x75f0b4*/
    ++v13; /*0x75f0c1*/
  }
  while ( (int)v5 < (int)word_B4663C ); /*0x75f0c5*/
  v14 = 0; /*0x75f0c7*/
  v6 = word_B45E68; /*0x75f0cb*/
  do /*0x75f10e*/
  {
    __asm { fild [esp+18h+var_4] } /*0x75f0d0*/
    __asm
    {
      fmul ds:dbl_7E3860
      fstp [esp+20h+var_20]; double
    }
    Math::SinCos(v11); /*0x75f0e0*/
    __asm { fmul ds:dbl_7ED8D8 } /*0x75f0e5*/
    __asm { fadd ds:dbl_7EDB10 }
    *v6++ = Math::RoundToInt(v1); /*0x75f0fd*/
    ++v14; /*0x75f10a*/
  }
  while ( (int)v6 < (int)&dword_B46248 ); /*0x75f10e*/
  v7 = dword_B46648; /*0x75f110*/
  for ( result = 110; result < 214; result += 8 ) /*0x75f115*/
    *v7++ = result; /*0x75f11a*/
  return result; /*0x75f129*/
}



// ==== 0x0075F140  Voxel::loadSectionData  this=Voxel  sig=csp ====
int __thiscall Voxel::loadSectionData(Voxel *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  char *v5; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75f14e*/
  *(_DWORD *)&this->__pad_134[120] = -v2; /*0x75f159*/
  *(_DWORD *)&this->__pad_134[124] = 1 - v2; /*0x75f164*/
  *(_DWORD *)&this->__pad_134[132] = v2 + 1; /*0x75f16a*/
  *(_DWORD *)&this->__pad_134[136] = v2; /*0x75f176*/
  *(_DWORD *)&this->__pad_134[140] = v2 - 1; /*0x75f17c*/
  v3 = *(_DWORD *)&this->__pad_134[152]; /*0x75f182*/
  v4 = -1 - v2; /*0x75f188*/
  *(_DWORD *)&this->__pad_134[212] = 0; /*0x75f18c*/
  *(_DWORD *)&this->__pad_134[216] = 0; /*0x75f192*/
  v5 = &this->__pad_134[4 * v3 + 120]; /*0x75f198*/
  *(_DWORD *)&this->__pad_134[128] = 1; /*0x75f19f*/
  *(_DWORD *)&this->__pad_134[144] = -1; /*0x75f1a9*/
  *(_DWORD *)&this->__pad_134[148] = v4; /*0x75f1b3*/
  *(_DWORD *)&this->__pad_134[220] = *(_DWORD *)v5; /*0x75f1bb*/
  *(_DWORD *)&this->__pad_134[224] = *(_DWORD *)v5; /*0x75f1c3*/
  *(_DWORD *)&this->__pad_134[228] = *(_DWORD *)v5; /*0x75f1cb*/
  *(_DWORD *)&this->__pad_134[232] = *(_DWORD *)v5; /*0x75f1d3*/
  *(_DWORD *)&this->__pad_134[236] = *(_DWORD *)v5; /*0x75f1db*/
  *(_DWORD *)&this->__pad_134[240] = 2 * *(_DWORD *)v5; /*0x75f1e5*/
  *(_DWORD *)&this->__pad_134[244] = 2 * *(_DWORD *)v5; /*0x75f1ef*/
  *(_DWORD *)&this->__pad_134[248] = 2 * *(_DWORD *)v5; /*0x75f1f9*/
  *(_DWORD *)&this->__pad_134[252] = 3 * *(_DWORD *)v5; /*0x75f204*/
  *(_DWORD *)&this->__pad_134[256] = 3 * *(_DWORD *)v5; /*0x75f20f*/
  result = 3 * *(_DWORD *)v5; /*0x75f217*/
  *(_DWORD *)&this->__pad_134[260] = result; /*0x75f21a*/
  return result; /*0x75f220*/
}



// ==== 0x0075F230  CalcMathFacing8  this=RecoilData  sig=csp ====
int __fastcall sub_75F230(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  double v4; // st7
  double v5; // st6
  int v6; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  double v11; // [esp+10h] [ebp-8h]

  v2 = *a2 - *a1; /*0x75f239*/
  v3 = a1[1] - a2[1]; /*0x75f246*/
  v11 = Math::SinCos(0.3926990816987241); /*0x75f25a*/
  v4 = v11 / Math::ArcTan2(0.3926990816987241); /*0x75f26d*/
  if ( !v2 ) /*0x75f276*/
    goto LABEL_11; /*0x75f276*/
  v5 = (double)v3 / (double)v2; /*0x75f280*/
  if ( v5 >= 1.0 / v4 ) /*0x75f299*/
  {
    if ( v5 >= v4 ) /*0x75f2ba*/
      goto LABEL_8; /*0x75f2ba*/
  }
  else if ( v5 >= v4 ) /*0x75f29e*/
  {
    v6 = (v2 <= 0) - 1; /*0x75f2a8*/
    LOBYTE(v6) = v6 & 0xFC; /*0x75f2ac*/
    return v6 + 5; /*0x75f2b6*/
  }
  if ( v5 >= -v4 ) /*0x75f2c9*/
  {
    v8 = (v2 <= 0) - 1; /*0x75f2d3*/
    LOBYTE(v8) = v8 & 0xFC; /*0x75f2d7*/
    return v8 + 6; /*0x75f2e1*/
  }
LABEL_8:
  if ( v5 < -v4 && v5 >= -1.0 / v4 ) /*0x75f304*/
  {
    v9 = (v2 <= 0) - 1; /*0x75f30e*/
    LOBYTE(v9) = v9 & 0xFC; /*0x75f310*/
    return v9 + 7; /*0x75f318*/
  }
LABEL_11:
  v10 = (v3 <= 0) - 1; /*0x75f31d*/
  LOBYTE(v10) = v10 & 0xFC; /*0x75f326*/
  return v10 + 4; /*0x75f2b3*/
}



// ==== 0x0075F330  WaveClass::DamageArea  this=WaveClass  sig=csp ====
char __thiscall WaveClass::DamageArea(WaveClass *this, _DWORD *a2)
{
  ObjectClass *v2; // ebx
  void *Owner; // eax
  _DWORD *v5; // ecx
  char *v6; // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // esi
  int v14; // edx
  ObjectClass *v16; // [esp+4h] [ebp-18h]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h] BYREF

  Owner = this->Owner; /*0x75f338*/
  if ( Owner ) /*0x75f340*/
  {
    v5 = a2; /*0x75f346*/
    v16 = v2; /*0x75f34a*/
    LOWORD(a2) = *a2 / 256; /*0x75f359*/
    HIWORD(a2) = v5[1] / 256; /*0x75f372*/
    v6 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x75f391*/
    v7 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this->Owner + 1016))(this->Owner, 0); /*0x75f395*/
    v8 = *(_DWORD *)v7; /*0x75f39b*/
    v17 = *(_DWORD *)(*(_DWORD *)v7 + 172); /*0x75f3a9*/
    v18 = *(_DWORD *)(*(_DWORD *)v7 + 152); /*0x75f3ad*/
    if ( (*((_DWORD *)v6 + 80) & 0x100) != 0 && this->WaveClass_field_BC >= dword_B725C8 * (v6[283] + 4) ) /*0x75f3d5*/
      v9 = (_DWORD *)*((_DWORD *)v6 + 58); /*0x75f3d7*/
    else
      v9 = (_DWORD *)*((_DWORD *)v6 + 57); /*0x75f3df*/
    for ( ; v9; v9 = (_DWORD *)v9[12] ) /*0x75f3e7*/
    {
      v10 = this->Owner; /*0x75f3e9*/
      if ( v9 != v10 && *((_BYTE *)v9 + 144) && *((_BYTE *)v9 + 116) && !*((_BYTE *)v9 + 129) && (int)v9[27] > 0 ) /*0x75f413*/
        (*(void (__thiscall **)(_DWORD *, int *, _DWORD, int, _DWORD *, _DWORD, _DWORD, _DWORD))(*v9 + 364))( /*0x75f42c*/
          v9,
          &v18,
          0,
          v17,
          v10,
          0,
          0,
          0);
    }
    v11 = *((_DWORD *)v6 + 17); /*0x75f439*/
    if ( v11 != -1 ) /*0x75f43f*/
    {
      v12 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v11); /*0x75f447*/
      if ( *(_BYTE *)(v12 + 689) ) /*0x75f44a*/
      {
        a2 = (_DWORD *)*((_DWORD *)v6 + 9); /*0x75f45b*/
        CellChainReact(v16); /*0x75f45f*/
      }
      if ( *(_BYTE *)(v12 + 680) ) /*0x75f464*/
        BuildingClass::SellEffects((int)v6, *(_DWORD *)(v8 + 152)); /*0x75f477*/
    }
    LOBYTE(Owner) = CellClass::IsActiveOrNext((CellClass *)v6); /*0x75f47e*/
    if ( (_BYTE)Owner ) /*0x75f486*/
    {
      v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x75f497*/
      Owner = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99); /*0x75f4a3*/
      if ( (int)Owner < v13 ) /*0x75f4aa*/
        LOBYTE(Owner) = LayerClass::DestroyCliff((int *)&stru_87F5F0.__pad_58[416], v14, (int)v6); /*0x75f4b2*/
    }
  }
  return (char)Owner; /*0x75f4b7*/
}



// ==== 0x0075F4C0  Voxel::renderSection  this=ObjectClass  sig=csp ====
char __thiscall Voxel::renderSection(Voxel *this, __int16 *a2)
{
  __int16 *v3; // eax
  int v4; // edx
  char *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  v3 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x75f4cd*/
  v4 = *(_DWORD *)&this->__pad_134[188]; /*0x75f4d2*/
  v5 = &this->__pad_134[188]; /*0x75f4d8*/
  a2 = v3; /*0x75f4de*/
  v6 = (*(int (__thiscall **)(char *, __int16 **))(v4 + 16))(v5, &a2); /*0x75f4e9*/
  if ( v6 == -1 ) /*0x75f4ef*/
  {
    v7 = *((_DWORD *)v5 + 2); /*0x75f4f1*/
    if ( *((_DWORD *)v5 + 4) < v7 /*0x75f51b*/
      || ((LOBYTE(v6) = v5[13], (_BYTE)v6) || !v7)
      && (v6 = *((_DWORD *)v5 + 5), v6 > 0)
      && (LOBYTE(v6) = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v7 + v6, 0), (_BYTE)v6) )
    {
      v6 = *((_DWORD *)v5 + 4); /*0x75f51d*/
      v8 = *((_DWORD *)v5 + 1); /*0x75f520*/
      *((_DWORD *)v5 + 4) = v6 + 1; /*0x75f526*/
      *(_DWORD *)(v8 + 4 * v6) = a2; /*0x75f52d*/
    }
  }
  return v6; /*0x75f530*/
}



// ==== 0x0075F540  Color::RGBFromFloat  this=Color  sig=csp ====
_DWORD *__thiscall Color::RGBFromFloat(Color *this, int a2, float a3)
{
  double v3; // st7
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v10; // [esp+4h] [ebp-8h]

  v3 = 1.0 - a3; /*0x75f547*/
  LOWORD(v5) = Math::RoundToInt(v3); /*0x75f565*/
  v6 = v5; /*0x75f56d*/
  LOWORD(v7) = Math::RoundToInt(v3); /*0x75f57a*/
  v10 = v7; /*0x75f582*/
  LOWORD(v8) = Math::RoundToInt(v3); /*0x75f591*/
  this->Color_field_00 = v6; /*0x75f59e*/
  *((_DWORD *)this + 1) = v10; /*0x75f5a0*/
  *((_DWORD *)this + 2) = v8; /*0x75f5a3*/
  return &this->Color_field_00; /*0x75f5ac*/
}



// ==== 0x0075F5C0  TacticalClass::CalcInverseAlpha  this=TacticalClass  sig=csp ====
_DWORD *__thiscall TacticalClass::CalcInverseAlpha(TacticalClass *this, int a2, float a3)
{
  double v3; // st7
  void *v5; // eax
  void *v6; // ebp
  void *v7; // eax

  v3 = 1.0 - a3; /*0x75f5c4*/
  LOWORD(v5) = Math::RoundToInt(v3); /*0x75f5e2*/
  v6 = v5; /*0x75f5ea*/
  LOWORD(v7) = Math::RoundToInt(v3); /*0x75f5f7*/
  this->AbstractClass = v6; /*0x75f5fc*/
  this->? = v7; /*0x75f5fe*/
  return &this->AbstractClass; /*0x75f609*/
}



// ==== 0x0075F610  WaveClass::UpdateWave  this=WaveClass  sig=csp ====
int __thiscall WaveClass::UpdateWave(WaveClass *this, int a2, int a3)
{
  int result; // eax

  Object::Unlink((ObjectClass *)this); /*0x75f61e*/
  result = 0; /*0x75f629*/
  if ( this->Owner == (void *)a2 ) /*0x75f62d*/
    this->Owner = 0; /*0x75f62f*/
  if ( this->Target == (void *)a2 ) /*0x75f63b*/
    this->Target = 0; /*0x75f63d*/
  return result; /*0x75f643*/
}



// ==== 0x0075F650  WaveClass::LoadWaveData  this=WaveClass  sig=csp ====
int __thiscall WaveClass::LoadWaveData(WaveClass *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int Register; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v13; // [esp+28h] [ebp-4h] BYREF

  v3 = a3; /*0x75f652*/
  v4 = a2; /*0x75f659*/
  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x75f664*/
  if ( Register >= 0 )
  {
    if ( v4 ) /*0x75f672*/
    {
      ObjectClass::Init((ObjectClass *)v4, (int)&a3); /*0x75f67b*/
      *(_DWORD *)(v4 + 332) = 0; /*0x75f680*/
      *(_DWORD *)(v4 + 424) = 0; /*0x75f68c*/
      FrameSnapshot::Init((FrameSnapshot *)(v4 + 472)); /*0x75f692*/
      WaveClass::Constructor_7632D0((WaveClass *)(v4 + 496), 0, 0); /*0x75f69f*/
      *(_DWORD *)v4 = &WaveClass::`vftable'; /*0x75f6a4*/
      *(_DWORD *)(v4 + 4) = &WaveClass::`vftable'; /*0x75f6aa*/
      *(_DWORD *)(v4 + 8) = &WaveClass::`vftable'; /*0x75f6b1*/
      *(_DWORD *)(v4 + 12) = &off_7F6BC8; /*0x75f6b8*/
    }
    *(_DWORD *)(v4 + 332) = *(_DWORD *)(v4 + 176) == 3 ? v4 + 384 : v4 + 336;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 172)); /*0x75f6ee*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 468)); /*0x75f6ff*/
    Register = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &a2, 4, 0); /*0x75f712*/
    if ( Register >= 0 ) /*0x75f716*/
    {
      v6 = a2; /*0x75f71c*/
      a3 = 0; /*0x75f720*/
      if ( a2 <= 0 ) /*0x75f726*/
      {
LABEL_17:
        v11 = 0; /*0x75f799*/
        if ( v6 > 0 ) /*0x75f79d*/
        {
          do /*0x75f7b8*/
            ObjectPtr::RegisterForTracking( /*0x75f7ae*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)(v4 + 500) + 4 * v11++));
          while ( v11 < a2 ); /*0x75f7b8*/
        }
      }
      else
      {
        while ( 1 ) /*0x75f737*/
        {
          Register = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &v13, 4, 0); /*0x75f737*/
          if ( Register < 0 ) /*0x75f73b*/
            break; /*0x75f73b*/
          v7 = *(_DWORD *)(v4 + 504); /*0x75f73d*/
          if ( *(_DWORD *)(v4 + 512) < v7 /*0x75f76e*/
            || (*(_BYTE *)(v4 + 509) || !v7)
            && (v8 = *(_DWORD *)(v4 + 516), v8 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v4 + 496) + 8))(v4 + 496, v7 + v8, 0) )
          {
            v9 = *(_DWORD *)(v4 + 512); /*0x75f775*/
            v10 = *(_DWORD *)(v4 + 500); /*0x75f778*/
            *(_DWORD *)(v4 + 512) = v9 + 1; /*0x75f77e*/
            *(_DWORD *)(v10 + 4 * v9) = v13; /*0x75f785*/
          }
          v6 = a2; /*0x75f78c*/
          if ( ++a3 >= a2 ) /*0x75f797*/
            goto LABEL_17; /*0x75f797*/
        }
      }
    }
  }
  return Register; /*0x75f7ba*/
}



// ==== 0x0075F7D0  WaveClass::ProcessWaveTick  this=WaveClass  sig=csp ====
int __stdcall WaveClass::ProcessWaveTick(WaveClass *this, int *a2, int a3)
{
  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = this->WaveClass_field_12C; /*0x75f7f9*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *((_DWORD *)this + 125) + 4 * i, 4, 0); /*0x75f81f*/
      if ( result < 0 ) /*0x75f824*/
        break; /*0x75f824*/
    }
  }
  return result; /*0x75f82f*/
}



// ==== 0x0075F840  WaveClass::GetClassIdentifier  this=WaveClass  sig=csp ====
int __stdcall WaveClass::GetClassIdentifier(WaveClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x75f846*/
    return -2147467261; /*0x75f848*/
  *a2 = 237448653; /*0x75f856*/
  a2[1] = 298949647; /*0x75f85e*/
  a2[2] = -1610610249; /*0x75f867*/
  a2[3] = unk_7E972C; /*0x75f870*/
  return 0; /*0x75f84d*/
}



// ==== 0x0075F880  WaveClass::GetObjectSize  this=WaveClass  sig=csp ====
int WaveClass::GetObjectSize(WaveClass *this)
{
  return 576; /*0x75f885*/
}



// ==== 0x0075F890  WaveClass::CheckStateFlag  this=WaveClass  sig=csp ====
int WaveClass::CheckStateFlag(WaveClass *this)
{
  return 3; /*0x75f895*/
}



// ==== 0x0075F8A0  WaveClass::StubReturnFalse  this=WaveClass  sig=csp ====
int WaveClass::StubReturnFalse(WaveClass *this)
{
  return 0; /*0x75f8a2*/
}



// ==== 0x0075F8B0  WaveClass::DrawWave  this=WaveClass  sig=csp ====
char __thiscall WaveClass::DrawWave(WaveClass *this, _DWORD *a2, int a3)
{
  int (__thiscall **vtable0)(WaveClass *, CellClass *, int, int, _DWORD, int); // ebp
  CellClass *v5; // eax
  void (__thiscall **v6)(WaveClass *, _DWORD *); // edx
  int v8; // [esp-10h] [ebp-18h]

  if ( !byte_A8E9A0 ) /*0x75f8bb*/
    return 0; /*0x75f8bb*/
  if ( !this->? ) /*0x75f8c1*/
    return 0; /*0x75f8c1*/
  if ( this->? ) /*0x75f8cf*/
    return 0; /*0x75f8cf*/
  if ( !dword_A8E7AC ) /*0x75f8e5*/
  {
    vtable0 = (int (__thiscall **)(WaveClass *, CellClass *, int, int, _DWORD, int))this->ObjectClass; /*0x75f8eb*/
    v8 = a2[2]; /*0x75f8f1*/
    v5 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x75f8fa*/
    if ( vtable0[107](this, v5, -1, v8, 0, 1) ) /*0x75f902*/
      return 0; /*0x75f902*/
  }
  v6 = (void (__thiscall **)(WaveClass *, _DWORD *))this->ObjectClass; /*0x75f90d*/
  this->? = 0; /*0x75f912*/
  this->? = 0; /*0x75f919*/
  v6[109](this, a2); /*0x75f920*/
  if ( !(*((unsigned __int8 (__thiscall **)(WaveClass *, int))this->ObjectClass + 73))(this, 1) ) /*0x75f92c*/
    return 0; /*0x75f96c*/
  if ( this->? ) /*0x75f936*/
  {
    if ( (*((int (__thiscall **)(WaveClass *))this->ObjectClass + 30))(this) != -1 ) /*0x75f94a*/
      Targeting::Readd(this); /*0x75f952*/
    ObjectClass::SetDeployState((LogicClass *)this, 0); /*0x75f95f*/
  }
  return 1; /*0x75f964*/
}



// ==== 0x0075F980  WaveClass::UpdateWavePosition  this=WaveClass  sig=csp ====
char __thiscall WaveClass::UpdateWavePosition(WaveClass *this)
{
  if ( !byte_A8E9A0 || this->inLimbo[0] ) /*0x75f98c*/
    return 0; /*0x75f9de*/
  (*(void (__thiscall **)(WaveClass *, int))(this->vtable0 + 220))(this, 1); /*0x75f99a*/
  (*(void (__thiscall **)(WaveClass *, _DWORD))(this->vtable0 + 292))(this, 0); /*0x75f9a6*/
  RemoveTarget((int)this); /*0x75f9b2*/
  VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x75f9bd*/
  (*(void (__thiscall **)(WaveClass *))(this->vtable0 + 284))(this); /*0x75f9c6*/
  this->inLimbo[0] = 1; /*0x75f9cc*/
  this->needsRedraw[0] = 0; /*0x75f9d3*/
  return 1; /*0x75f9dc*/
}



// ==== 0x0075F9F0  WaveClass::ProcessWaveCollision  this=WaveClass  sig=csp ====
void __thiscall WaveClass::ProcessWaveCollision(WaveClass *this, _DWORD *a2, int *a3)
{
  if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 /*0x75fa20*/
    || !(unsigned __int8)Game::Stub3((int)this->someCoords)
    || !(unsigned __int8)Game::Stub3((int)&this->WaveClass_field_C0) )
  {
    switch ( this->Type[0] ) /*0x75fa34*/
    {
      case 0: /*0x75fa34*/
        Voxel::ShadowCalc((int)this, a2, a3); /*0x75fa47*/
        break; /*0x75fa4d*/
      case 1: /*0x75fa34*/
      case 2: /*0x75fa34*/
        Voxel::FaceDraw((Voxel *)this, a2, a3); /*0x75fa71*/
        break; /*0x75fa71*/
      case 3: /*0x75fa34*/
        Surface::RenderToSurfaceVoxel((int)this, a2, a3); /*0x75fa5c*/
        break; /*0x75fa62*/
      default:
        return;
    }
  }
}



// ==== 0x0075FA90  Voxel::ShadowCalc  this=WaveClass  sig=csp ====
void __thiscall Voxel::ShadowCalc(int this, _DWORD *a2, int *a3)
{
  int *v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  char *v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  _WORD *v14; // edi
  int v15; // edx
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned __int16 *v20; // ebx
  _WORD *v21; // edi
  __int64 v22; // rax
  int v23; // ebp
  int v24; // eax
  int m; // ebp
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edi
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  _WORD *v37; // edi
  int v38; // ecx
  int v39; // eax
  int v40; // ebp
  _WORD *v41; // edi
  unsigned __int16 *v42; // ecx
  __int64 v43; // rax
  int j; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  _DWORD *v49; // eax
  int v50; // ebx
  int v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  int v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v61; // [esp+14h] [ebp-30h]
  int v62; // [esp+14h] [ebp-30h]
  int v63; // [esp+14h] [ebp-30h]
  char *v64; // [esp+18h] [ebp-2Ch]
  _WORD *v65; // [esp+18h] [ebp-2Ch]
  _WORD *SamplePosition; // [esp+18h] [ebp-2Ch]
  unsigned __int16 *v67; // [esp+18h] [ebp-2Ch]
  _WORD *v68; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  StreamClass *v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  StreamClass *m_Stream; // [esp+20h] [ebp-24h]
  int v73; // [esp+20h] [ebp-24h]
  int v74; // [esp+24h] [ebp-20h]
  int v75; // [esp+24h] [ebp-20h]
  int v76; // [esp+28h] [ebp-1Ch]
  int v77; // [esp+2Ch] [ebp-18h]
  int v78; // [esp+30h] [ebp-14h]
  int v79; // [esp+34h] [ebp-10h]
  int v80; // [esp+38h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-Ch]
  int v82; // [esp+3Ch] [ebp-8h]
  int v83; // [esp+3Ch] [ebp-8h]
  int v84; // [esp+3Ch] [ebp-8h]
  int v85; // [esp+40h] [ebp-4h]
  unsigned __int16 v86; // [esp+48h] [ebp+4h]
  unsigned __int16 v87; // [esp+48h] [ebp+4h]
  int v88; // [esp+48h] [ebp+4h]
  _DWORD *v89; // [esp+4Ch] [ebp+8h]
  _DWORD *v90; // [esp+4Ch] [ebp+8h]

  v58 = ZCoordToScreenY(*(_DWORD *)(this + 188)); /*0x75faa8*/
  v74 = (*(int (__thiscall **)(AudioStream *, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 92))( /*0x75fab9*/
          g_DSurface_Hidden_2,
          0,
          0);
  if ( v74 ) /*0x75fabd*/
  {
    v4 = a3; /*0x75fac3*/
    v5 = a3[1]; /*0x75fac9*/
    v78 = v5 + a3[3] - 3; /*0x75fad9*/
    v77 = v5 + 3; /*0x75fadf*/
    v79 = *a3 + 3; /*0x75faf0*/
    v69 = *a3 + a3[2] - 3; /*0x75faf8*/
    v6 = a2[1] - *(_DWORD *)(this + 208); /*0x75fb09*/
    v57 = *a2 - *(_DWORD *)(this + 204); /*0x75fb17*/
    v76 = v6; /*0x75fb1b*/
    ProcessVoxelVertexData((_DWORD *)(this + 328), (int *)(this + 416)); /*0x75fb1f*/
    if ( *(_DWORD *)(this + 424) ) /*0x75fb24*/
    {
      v7 = *(_DWORD *)(this + 416); /*0x75fb48*/
      v8 = (char *)DSurface_ViewBounds.field_4 + *(_DWORD *)(this + 420) + v6; /*0x75fb4e*/
      v61 = (int)v8; /*0x75fb50*/
      v9 = (int)&v8[v7 - 1]; /*0x75fb54*/
      if ( v9 >= a3[3] + a3[1] ) /*0x75fb5a*/
      {
        v64 = (char *)(a3[3] + a3[1]); /*0x75fb62*/
        v9 = (int)v64; /*0x75fb66*/
      }
      else
      {
        v64 = &v8[v7 - 1]; /*0x75fb5c*/
      }
      Voxel::loadSectionData((Voxel *)this); /*0x75fb6a*/
      v10 = *(_DWORD *)(this + 460); /*0x75fb6f*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x75fb81*/
      {
        SamplePosition = (_WORD *)Audio::GetSamplePosition( /*0x75fe6e*/
                                    (int *)g_ZBufferDescriptor,
                                    0,
                                    v8 - (char *)DSurface_ViewBounds.field_4);
        v35 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x75fe74*/
        HIWORD(v36) = HIWORD(g_ZBufferDescriptor); /*0x75fe77*/
        v81 = v9 - (_DWORD)v8; /*0x75fe88*/
        m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x75fe90*/
        if ( (unsigned int)&SamplePosition[v35 + (_DWORD)m_Stream * (v9 - (_DWORD)v8 + 1)] >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x75fea6*/
        {
          LOWORD(v36) = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v9; /*0x76000b*/
          v46 = v9; /*0x76000e*/
          v56 = v9; /*0x760012*/
          v47 = v36 - v58 - 2; /*0x760016*/
          v88 = v47; /*0x76001b*/
          if ( v9 >= (int)v8 ) /*0x76001f*/
          {
            v73 = 8 * v81; /*0x76002c*/
            do /*0x760149*/
            {
              v48 = v4[1]; /*0x760030*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760047*/
              {
                v49 = (_DWORD *)(*(_DWORD *)(this + 424) + v73); /*0x760060*/
                v50 = v49[1] + v57; /*0x76006a*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x76006e*/
                  v50 = *v4 + v4[2] - 2; /*0x760070*/
                v60 = v57 + *v49; /*0x76007f*/
                if ( v60 <= *v4 + 2 ) /*0x760083*/
                  v60 = *v4 + 2; /*0x760085*/
                v68 = (_WORD *)(v74 /*0x7600b4*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1)));
                v51 = v56 - (unsigned int)DSurface_ViewBounds.field_4; /*0x7600c0*/
                v84 = v50; /*0x7600c4*/
                for ( i = abs32(v56 - v76 - *(_DWORD *)(this + 208)); v50 >= v60; --v68 ) /*0x7600d5*/
                {
                  if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v84, v51) > (unsigned __int16)v88 ) /*0x7600f0*/
                    Voxel::BlendShadowColor((Voxel *)this, v50, v57, i, v68); /*0x760100*/
                  --v50; /*0x76010e*/
                  --v84; /*0x76010f*/
                }
                v47 = v88; /*0x760122*/
                v8 = (char *)v61; /*0x760126*/
                v4 = a3; /*0x76012a*/
                v46 = v56; /*0x76012e*/
              }
              ++v47; /*0x760136*/
              --v46; /*0x760137*/
              v88 = v47; /*0x76013d*/
              v56 = v46; /*0x760141*/
              v73 -= 8; /*0x760145*/
            }
            while ( v46 >= (int)v8 ); /*0x760149*/
          }
        }
        else
        {
          v83 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75feb9*/
          v37 = (_WORD *)(v74 + 2 * v9 * v83); /*0x75feca*/
          v90 = (_DWORD *)(*(_DWORD *)(this + 424) + 8 * v81); /*0x75fed8*/
          v87 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v9 - v58 - 2; /*0x75fef0*/
          v38 = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v9 - (unsigned int)DSurface_ViewBounds.field_4); /*0x75ff03*/
          v39 = v9; /*0x75ff05*/
          v55 = v9; /*0x75ff09*/
          if ( v9 >= (int)v8 ) /*0x75ff0d*/
          {
            while ( 1 ) /*0x75ff19*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x75ff27*/
              {
                v40 = v57 + v90[1]; /*0x75ff40*/
                if ( v40 >= v69 ) /*0x75ff42*/
                  v40 = v69; /*0x75ff44*/
                v59 = v57 + *v90; /*0x75ff56*/
                if ( v59 <= v79 ) /*0x75ff5a*/
                  v59 = v79; /*0x75ff5c*/
                v41 = &v37[v40]; /*0x75ff68*/
                v42 = (unsigned __int16 *)(2 * v40 + v38); /*0x75ff6a*/
                v67 = v42; /*0x75ff76*/
                v43 = v39 - v76 - *(_DWORD *)(this + 208); /*0x75ff7a*/
                for ( j = (HIDWORD(v43) ^ v43) - HIDWORD(v43); v40 >= v59; v67 = v42 ) /*0x75ff87*/
                {
                  if ( *v42 > v87 ) /*0x75ff91*/
                  {
                    Voxel::BlendShadowColor((Voxel *)this, v40, v57, j, v41); /*0x75ff9d*/
                    v42 = v67; /*0x75ffa2*/
                  }
                  --v42; /*0x75ffaa*/
                  --v41; /*0x75ffad*/
                  --v40; /*0x75ffb0*/
                }
                v8 = (char *)v61; /*0x75ffb9*/
                v39 = v55; /*0x75ffbd*/
                v45 = 2 * v40; /*0x75ffc1*/
                v38 = (int)&v42[v45 / 0xFFFFFFFE]; /*0x75ffc3*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x75ffc5*/
              }
              --v39; /*0x75ffe6*/
              v37 -= v83; /*0x75ffe9*/
              ++v87; /*0x75ffec*/
              v90 -= 2; /*0x75fff0*/
              v55 = v39; /*0x75fff4*/
              if ( v39 < (int)v8 ) /*0x75fff8*/
                break; /*0x75fff8*/
              v38 -= 2 * (_DWORD)m_Stream; /*0x75ff15*/
            }
          }
        }
      }
      else
      {
        v86 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v58 - (_WORD)v8 - 2; /*0x75fba4*/
        v11 = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v8 - (char *)DSurface_ViewBounds.field_4); /*0x75fbb6*/
        v12 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x75fbba*/
        v70 = g_ZBufferDescriptor[2].m_Stream; /*0x75fbc8*/
        if ( (unsigned int)(v11 + 2 * (v12 + (_DWORD)v70 * (v9 - v61 + 1))) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x75fbe7*/
        {
          v27 = v61; /*0x75fd07*/
          v54 = v61; /*0x75fd0d*/
          if ( v61 <= v9 ) /*0x75fd11*/
          {
            v71 = 0; /*0x75fd17*/
            do /*0x75fe44*/
            {
              v28 = v4[1]; /*0x75fd1f*/
              if ( v27 >= v28 + 2 && v27 <= v28 + v4[3] - 2 ) /*0x75fd36*/
              {
                v29 = (_DWORD *)(*(_DWORD *)(this + 424) + v71); /*0x75fd49*/
                v30 = *v4; /*0x75fd4b*/
                v63 = v57 + v29[1]; /*0x75fd64*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x75fd68*/
                  v63 = *v4 + v4[2] - 2; /*0x75fd6a*/
                v31 = v57 + *v29; /*0x75fd74*/
                v32 = v30 + 2; /*0x75fd76*/
                if ( v31 > v30 + 2 ) /*0x75fd7b*/
                  v32 = v31; /*0x75fd7d*/
                v82 = v32; /*0x75fd95*/
                v65 = (_WORD *)(v74 /*0x75fda3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1)));
                v33 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x75fdad*/
                v85 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x75fdb7*/
                v34 = abs32(v27 - v76 - *(_DWORD *)(this + 208)); /*0x75fdc6*/
                if ( v32 <= v63 ) /*0x75fdca*/
                {
                  while ( 1 ) /*0x75fdd2*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v82, v33) > v86 ) /*0x75fdeb*/
                      Voxel::BlendShadowColor((Voxel *)this, v32, v57, v34, v65); /*0x75fdfb*/
                    ++v32; /*0x75fe09*/
                    ++v82; /*0x75fe0a*/
                    ++v65; /*0x75fe17*/
                    if ( v32 > v63 ) /*0x75fe1b*/
                      break; /*0x75fe1b*/
                    v33 = v85; /*0x75fdce*/
                  }
                }
                v27 = v54; /*0x75fe1d*/
                v4 = a3; /*0x75fe21*/
              }
              ++v27; /*0x75fe32*/
              --v86; /*0x75fe38*/
              v54 = v27; /*0x75fe3c*/
              v71 += 8; /*0x75fe40*/
            }
            while ( v27 <= v9 ); /*0x75fe44*/
          }
        }
        else
        {
          v13 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75fbf8*/
          v80 = v13; /*0x75fc05*/
          v14 = (_WORD *)(v74 + 2 * v61 * v13); /*0x75fc09*/
          v15 = v61; /*0x75fc0c*/
          v16 = *(_DWORD **)(this + 424); /*0x75fc10*/
          v89 = v16; /*0x75fc18*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x75fc20*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x75fc34*/
            {
              v17 = v57 + v16[1]; /*0x75fc41*/
              if ( v17 >= v69 ) /*0x75fc47*/
                v17 = v69; /*0x75fc49*/
              v62 = v17; /*0x75fc4f*/
              v18 = *v16 + v57; /*0x75fc53*/
              v19 = v79; /*0x75fc56*/
              if ( v18 > v79 ) /*0x75fc5c*/
                v19 = v18; /*0x75fc5e*/
              v20 = (unsigned __int16 *)(2 * v19 + v11); /*0x75fc67*/
              v21 = &v14[v19]; /*0x75fc69*/
              v22 = v15 - v76 - *(_DWORD *)(this + 208); /*0x75fc7b*/
              v23 = v22; /*0x75fc7c*/
              v24 = v19; /*0x75fc7e*/
              v75 = v19; /*0x75fc82*/
              for ( m = (HIDWORD(v22) ^ v23) - HIDWORD(v22); v24 <= v62; v75 = v24 ) /*0x75fc8e*/
              {
                if ( *v20 > v86 ) /*0x75fc98*/
                {
                  Voxel::BlendShadowColor((Voxel *)this, v24, v57, m, v21); /*0x75fca4*/
                  v24 = v75; /*0x75fca9*/
                }
                ++v20; /*0x75fcb1*/
                ++v21; /*0x75fcb4*/
                ++v24; /*0x75fcb7*/
              }
              v9 = (int)v64; /*0x75fcc0*/
              v15 = k; /*0x75fcc4*/
              v26 = 2 * v24; /*0x75fcc8*/
              v11 = (int)&v20[v26 / 0xFFFFFFFE]; /*0x75fcca*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x75fccc*/
              v13 = v80; /*0x75fcce*/
            }
            v14 += v13; /*0x75fcd6*/
            v11 += 2 * (_DWORD)v70; /*0x75fcd9*/
            --v86; /*0x75fce6*/
            v16 = v89 + 2; /*0x75fcee*/
            ++v15; /*0x75fcf1*/
            v89 += 2; /*0x75fcf4*/
          }
        }
      }
    }
    (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 96))(g_DSurface_Hidden_2); /*0x760157*/
    if ( *(_DWORD *)(this + 424) ) /*0x76015a*/
    {
      __3_YAXPAX_Z(*(void **)(this + 424)); /*0x760167*/
      *(_DWORD *)(this + 424) = 0; /*0x76016f*/
    }
  }
}


