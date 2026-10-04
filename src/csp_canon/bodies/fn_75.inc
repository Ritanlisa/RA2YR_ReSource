// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00750010  VeterancyStruct::IsElite  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
BOOL VeterancyStruct::IsElite()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750010)
}

// ==== BACKFILL 0x00750080  Crate::processCratePickup  cls=Crate  sig=csp  renamed_refs=0  residual=- ====
void Crate::processCratePickup(int a2) {
}

// ==== BACKFILL 0x00750090  Power::ChangedHouse  cls=Power  sig=csp  renamed_refs=0  residual=- ====
char Power::ChangedHouse(char a2)
{

  int result; // eax

  LOBYTE(result) = a2; /*0x750090*/
  if ( a2 ) /*0x750096*/
    this->Power_field_0x0 = 1065353216; /*0x750098*/
  else
    this->Power_field_0x0 = 0; /*0x7500a1*/
  return result; /*0x75009e*/

}

// ==== BACKFILL 0x007500B0  Timer::SetFlag  cls=Timer  sig=csp  renamed_refs=0  residual=- ====
char Timer::SetFlag(char a2)
{

  int result; // eax

  LOBYTE(result) = a2; /*0x7500b0*/
  if ( a2 ) /*0x7500b6*/
    *(unsigned int *)this->__pad_0 = 0x40000000; /*0x7500b8*/
  else
    *(unsigned int *)this->__pad_0 = 0; /*0x7500c1*/
  return result; /*0x7500be*/

}

// ==== BACKFILL 0x007500E0  FootClass::SetField  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int FootClass::SetField(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007500E0.json)
}

// ==== BACKFILL 0x00750440  LoadVocFromINI  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char VocClass::LoadFromINI(CCINIClass * aP1) {

  double v2; // st7
  uint8_t *SampleName; // eax
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

  INIClass::ResetSection((INIClass *)aP1); /*0x750453*/
  if ( !this->AbstractClass ) /*0x750458*/
    return 0; /*0x750458*/
  SampleName = (uint8_t *)VocClass::GetSampleName((char *)this->AbstractClass); /*0x750462*/
  if ( !INIClass::BinarySearchSection((int)aP1, SampleName) ) /*0x75046a*/
    return 0; /*0x750912*/
  if ( this->AbstractClass ) /*0x75047c*/
    v5 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750482*/
  else
    v5 = g_Str_Invalid_Voc; /*0x750489*/
  INIClass::GetString( /*0x7504a5*/
    (INIClass *)aP1,
    (uint8_t *)v5,
    (uint8_t *)aSounds,
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
  INIClass::ReadDouble_Overwrite((double *)aP1, (uint8_t *)v7, g_INI_Key_Volume, v40); /*0x750502*/
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
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)aP1, (uint8_t *)v11, aVshift, 0); /*0x750569*/
  sub_406620((int)this->AbstractClass, Int_Overwrite); /*0x750572*/
  if ( this->AbstractClass ) /*0x750577*/
    v13 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x75057d*/
  else
    v13 = g_Str_Invalid_Voc; /*0x750584*/
  __asm { fld flt_8464B8 } /*0x750589*/
  __asm { fstp [esp+820h+var_820]; double }
  INIClass::ReadDouble_Overwrite((double *)aP1, (uint8_t *)v13, aMinvolume, v41); /*0x75059d*/
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
    (INIClass *)aP1,
    (uint8_t *)v16,
    (uint8_t *)&(unsigned int *)((char *)&g_INI_Key_TRUCKA + 3),
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
  v18 = INIClass::ReadInt_Overwrite((bool *)aP1, (uint8_t *)v17, g_INI_Key_Attack, 0); /*0x750654*/
  sub_406520((int)this->AbstractClass, v18); /*0x75065d*/
  if ( this->AbstractClass ) /*0x750662*/
    v19 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750668*/
  else
    v19 = g_Str_Invalid_Voc; /*0x75066f*/
  v20 = INIClass::ReadInt_Overwrite((bool *)aP1, (uint8_t *)v19, aDecay, 0); /*0x75067e*/
  sub_406530((int)this->AbstractClass, v20); /*0x750687*/
  if ( this->AbstractClass ) /*0x75068c*/
    v21 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750692*/
  else
    v21 = g_Str_Invalid_Voc; /*0x750699*/
  INIClass::GetString((INIClass *)aP1, (uint8_t *)v21, aControl, &g_INI_DefaultBuffer, String, 2048); /*0x7506b5*/
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
    (INIClass *)aP1,
    (uint8_t *)v23,
    (uint8_t *)g_INI_Key_Type,
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
  v26 = INIClass::ReadInt_Overwrite((bool *)aP1, (uint8_t *)v25, aLimit, dword_8464C4); /*0x7507ab*/
  sub_4065D0((int)this->AbstractClass, v26); /*0x7507b4*/
  if ( this->AbstractClass ) /*0x7507b9*/
    v27 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7507bf*/
  else
    v27 = g_Str_Invalid_Voc; /*0x7507c6*/
  v28 = INIClass::ReadInt_Overwrite((bool *)aP1, (uint8_t *)v27, aLoop, 0); /*0x7507d5*/
  sub_406640((int)this->AbstractClass, v28); /*0x7507de*/
  if ( this->AbstractClass ) /*0x7507e3*/
    v29 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x7507e9*/
  else
    v29 = g_Str_Invalid_Voc; /*0x7507f0*/
  v30 = INIClass::ReadInt_Overwrite((bool *)aP1, (uint8_t *)v29, g_INI_Key_Range, dword_8464C0); /*0x750804*/
  sub_4065E0((int)this->AbstractClass, v30); /*0x75080d*/
  if ( this->AbstractClass ) /*0x750812*/
    v31 = VocClass::GetSampleName((char *)this->AbstractClass); /*0x750818*/
  else
    v31 = g_Str_Invalid_Voc; /*0x75081f*/
  INIClass::GetString((INIClass *)aP1, (uint8_t *)v31, aDelay, &g_INI_DefaultBuffer, String, 2048); /*0x75083c*/
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
  INIClass::GetString((INIClass *)aP1, (uint8_t *)v35, aFshift, &g_INI_DefaultBuffer, String, 2048); /*0x7508b5*/
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

// ==== BACKFILL 0x007509E0  StartAudioControllerAt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * StartAudioControllerAt(int aP0, unsigned int *a2, int **a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7509E0)
}

// ==== BACKFILL 0x00750E20  PlayAudioAt2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PlayAudioAt2(IUnknown * aP0, unsigned int * a1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750E20)
}

// ==== BACKFILL 0x00750F40  globalHelper_050F40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_750F40(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750F40)
}

// ==== BACKFILL 0x00751EA0  sub_751EA0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HANDLE sub_751EA0(const CHAR * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x751EA0)
}

// ==== BACKFILL 0x007529E0  Audio::IsPlaying  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsPlaying(...)
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007529E0.json)
}

// ==== BACKFILL 0x00753250  VocClass::FindByName  cls=VocClass  sig=csp  renamed_refs=0  residual=- ====
int VocClass::FindByName()
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

// ==== BACKFILL 0x007532BE  ?do_always_noconv_codecvt_base_std__MBE_NXZ_21  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_21()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7532BE)
}

// ==== BACKFILL 0x007533A0  ?do_always_noconv_codecvt_base_std__MBE_NXZ_22  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_22()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7533A0)
}

// ==== BACKFILL 0x007533B0  SaveGame::WriteMagicHeader  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
int SaveGame::WriteMagicHeader()
{

  int v2; // eax
  int result; // eax
  int v4; // edx
  int v5; // [esp+10h] [ebp-4h] BYREF

  v2 = *(unsigned int *)this->__pad_0; /*0x7533ba*/
  v5 = 1450145875; /*0x7533c0*/
  result = (*(int (**)(SaveGame *, int *, int, unsigned int))(v2 + 16))(this, &v5, 4, 0); /*0x7533c8*/
  if ( result >= 0 ) /*0x7533cd*/
  {
    v4 = *(unsigned int *)this->__pad_0; /*0x7533cf*/
    v5 = 1450145861; /*0x7533db*/
    return (*(int (**)(SaveGame *, int *, int, unsigned int))(v4 + 16))(this, &v5, 4, 0); /*0x7533e3*/
  }
  return result; /*0x7533e6*/

}

// ==== BACKFILL 0x007534E0  VoxClass::SetEVAIndex  cls=VoxClass  sig=csp  renamed_refs=0  residual=- ====
int VoxClass::SetEVAIndex() {
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

// ==== BACKFILL 0x00753B70  VoxelPaletteClass::LoadFromFile  cls=VoxelPaletteClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelPaletteClass::LoadFromFile()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753B70)
}

// ==== BACKFILL 0x00753C80  globalHelper_053C80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_053C80(unsigned int * a1, SomeVoxelCache * edx0, SomeVoxelCache * aP2, float * a4, float * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753C80)
}

// ==== BACKFILL 0x00753D00  Audio_Render  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Audio_Render(unsigned int * a0, SomeVoxelCache * edx0, ObjectClass * aP2, float * a3, float * a4, float * a5, float a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00753D00.json)
}

// ==== BACKFILL 0x00753F90  globalHelper_053F90  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * globalHelper_053F90(unsigned int * a0, ObjectClass * aP1, SomeVoxelCache * aP2, float * a3, float * a4, float * a5, int a7, int a8, int a9)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753F90)
}

// ==== BACKFILL 0x00754900  ??0Iostream_init_QAE_XZ_8  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_754900::__0Iostream_init_QAE_XZ_8()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x754900)
}

// ==== BACKFILL 0x00754C00  Voxel::SetProjectionAngle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DynamicVectorClass_flat::SetProjectionAngle(float a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00754C00.json)
}

// ==== BACKFILL 0x007559B0  CopyAudioData  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * AudioData_Copy(char * a1, int a2)
{
  qmemcpy(a1, (char *)&stru_B45188 + 48 * a2, 0x30u); /*0x7559c7*/
  return a1; /*0x7559c9*/
}

// ==== BACKFILL 0x00755A40  InterpolateVoxelAnimPose  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * VoxelAnim_InterpolatePose(void * a1, int a2, int a3, double a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x755A40)
}

// ==== BACKFILL 0x00755C60  Locomotor_Update  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_755C60(char * a1, int a2)
{
  char *result; // eax

  result = a1; /*0x755c63*/
  if ( a2 >= 4 ) /*0x755c65*/
    a2 -= 4; /*0x755c67*/
  qmemcpy(a1, (char *)&stru_B450B8 + 48 * a2, 0x30u); /*0x755c7f*/
  return result; /*0x755c83*/
}

// ==== BACKFILL 0x00755CB0  sub_755CB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_755CB0::sub_755CB0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x755CB0)
}

// ==== BACKFILL 0x00755D10  WaveClass::Destroy  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
void WaveClass::Destroy() {
  void *abstractFlags; // eax
  void *nextArrayIndex; // eax

  if ( ((unsigned int *)this)[0] ) /*0x755d16*/
    RA2_OPDEL((void *)((unsigned int *)this)[0]); /*0x755d1e*/
  abstractFlags = (void *)((unsigned int *)this)[0]; /*0x755d26*/
  ((unsigned int *)this)[0] = 0; /*0x755d29*/
  if ( abstractFlags ) /*0x755d2e*/
    RA2_OPDEL(abstractFlags); /*0x755d31*/
  nextArrayIndex = (void *)((unsigned int *)this)[0]; /*0x755d39*/
  ((unsigned int *)this)[0] = 0; /*0x755d3c*/
  if ( nextArrayIndex ) /*0x755d41*/
    RA2_OPDEL(nextArrayIndex); /*0x755d44*/
  ((unsigned int *)this)[0] = 0; /*0x755d4c*/
}

// ==== BACKFILL 0x007564A0  sub_7564A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7564A0::sub_7564A0(int a2)
{

  return ((unsigned int *)this)[0] + 12 * a2; /*0x7564ad*/

}

// ==== BACKFILL 0x007564E0  sub_7564E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
float * E4Recv_7564E0::sub_7564E0(float * a2, int a3, int a4)
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

  uniqueId = ((unsigned int *)this)[0]; /*0x7564e7*/
  abstractFlags = ((unsigned int *)this)[0]; /*0x7564ea*/
  v6 = 41 * (a4 + *(unsigned int *)(uniqueId + 12 * a3)); /*0x7564fc*/
  v7 = *(float *)(abstractFlags + 4 * v6 + 112) + *(float *)(abstractFlags + 4 * v6 + 88); /*0x756503*/
  v8 = (float *)(abstractFlags + 164 * (a4 + *(unsigned int *)(uniqueId + 12 * a3))); /*0x75650b*/
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

// ==== BACKFILL 0x00756570  sub_756570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_756570::sub_756570()
{

  return (int)((unsigned int *)this)[0] + 164 * (int)((unsigned int *)this)[0] + 12 * (int)((unsigned int *)this)[0] + 28; /*0x75658c*/

}

// ==== BACKFILL 0x00756860  InitializeTileAudioOcclusion  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_756860::InitializeTileAudioOcclusion(int a2, void* a3) {

  int uniqueId; // edx
  int abstractFlags; // ecx
  int v6; // edi
  double v7; // st7
  int v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int16_t v12; // ax
  double v13; // st7
  int16_t v14; // ax
  double v15; // st7
  int v16; // eax
  double v17; // st7
  int v18; // eax
  double v19; // st7
  int16_t v20; // bp
  int16_t v21; // ax
  double v22; // st7
  int16_t v23; // ax
  unsigned int *v24; // ecx
  float *v25; // ebx
  int result; // eax
  int v27; // edx
  int v28; // esi
  uint8_t v29; // dl
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
  unsigned int *v42; // [esp+1Ch] [ebp-5Ch]
  int v43; // [esp+20h] [ebp-58h]
  int v44; // [esp+24h] [ebp-54h]
  int v45; // [esp+28h] [ebp-50h]
  int v46; // [esp+2Ch] [ebp-4Ch]
  int16_t v47; // [esp+30h] [ebp-48h]
  unsigned int v48[2]; // [esp+34h] [ebp-44h] BYREF
  unsigned int v49[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  int v50; // [esp+48h] [ebp-30h]
  int v51; // [esp+50h] [ebp-28h]
  unsigned char v52[6]; // [esp+5Ch] [ebp-1Ch]
  unsigned short v53[3]; // [esp+62h] [ebp-16h]
  unsigned int v54[4]; // [esp+68h] [ebp-10h]
  float v55; // [esp+7Ch] [ebp+4h]
  int v56; // [esp+7Ch] [ebp+4h]
  float *v57; // [esp+80h] [ebp+8h]
  float *v58; // [esp+80h] [ebp+8h]

  uniqueId = ((unsigned int *)this)[0]; /*0x756865*/
  abstractFlags = ((unsigned int *)this)[0]; /*0x75686d*/
  v6 = 0; /*0x756878*/
  v7 = *(float *)(a2 + 36); /*0x75687a*/
  v8 = 3 * *(unsigned int *)(a2 + 4); /*0x75687d*/
  v51 = 0; /*0x756880*/
  v9 = 41 * (*(unsigned int *)(a2 + 8) + *(unsigned int *)(uniqueId + 4 * v8)); /*0x756897*/
  LOBYTE(uniqueId) = *(unsigned char *)(abstractFlags + 4 * v9 + 160); /*0x75689a*/
  v10 = (v7 + 128.0 - *a3) * 256.0; /*0x7568a1*/
  v11 = abstractFlags + 4 * v9; /*0x7568a7*/
  LOBYTE(v44) = *(unsigned char *)(v11 + 161); /*0x7568bb*/
  v50 = *(unsigned int *)(v11 + 4); /*0x7568c4*/
  v37 = (uint8_t)uniqueId; /*0x7568c8*/
  v12 = Math::RoundToInt(v10); /*0x7568cc*/
  v13 = *(float *)(a2 + 40) + 128.0; /*0x7568d4*/
  *(unsigned short *)v52 = v12; /*0x7568da*/
  v14 = Math::RoundToInt((v13 - a3[1]) * 256.0); /*0x7568e8*/
  v15 = (double)*(int *)(a2 + 64); /*0x7568ed*/
  *(unsigned short *)&v52[2] = v14; /*0x7568f0*/
  LOWORD(v16) = Math::RoundToInt(v15 + *a3); /*0x7568f7*/
  v17 = (double)*(int *)(a2 + 68); /*0x7568fc*/
  *(unsigned int *)(a2 + 64) = v16; /*0x7568ff*/
  LOWORD(v18) = Math::RoundToInt(v17 + a3[1]); /*0x756905*/
  v19 = (double)v37; /*0x75690a*/
  v20 = v18; /*0x75690e*/
  *(unsigned int *)(a2 + 68) = v18; /*0x756910*/
  v47 = v18; /*0x756913*/
  v53[0] = Math::RoundToInt(v19); /*0x75692a*/
  v55 = (float)(uint8_t)v44; /*0x756946*/
  LOWORD(v54[0]) = Math::RoundToInt(v19); /*0x756965*/
  v21 = Math::RoundToInt(v19); /*0x756972*/
  v22 = *(float *)(a2 + 52) - *(float *)(a2 + 40); /*0x75697c*/
  v53[1] = v21; /*0x75697f*/
  v23 = Math::RoundToInt(v22 / v55 * 256.0); /*0x75698e*/
  v24 = *(unsigned int **)(a2 + 60); /*0x756993*/
  v25 = *(float **)v52; /*0x756996*/
  HIWORD(v54[0]) = v23; /*0x75699a*/
  v45 = *(unsigned int *)(a2 + 64); /*0x7569a2*/
  result = *(unsigned int *)&v52[2]; /*0x7569a6*/
  v42 = v24; /*0x7569ac*/
  v56 = *(unsigned int *)&v52[2]; /*0x7569b0*/
  if ( v24 ) /*0x7569b4*/
  {
    if ( (unsigned char)v44 ) /*0x7569c3*/
    {
      v44 = (uint8_t)v44; /*0x7569c9*/
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
            if ( *(unsigned int *)(v50 + 4 * v6) != -1 ) /*0x7569fe*/
            {
              v28 = result & 0xFF00 | ((uint16_t)v25 >> 8); /*0x756a1b*/
              v29 = BYTE1(result); /*0x756a25*/
              v30 = *v24; /*0x756a27*/
              v31 = (uint16_t)(v29 + v20); /*0x756a35*/
              v48[0] = (uint16_t)(BYTE1(v25) + (unsigned short)v45); /*0x756a3c*/
              v48[1] = v31; /*0x756a40*/
              v46 = (*(int (**)(unsigned int *, unsigned int *))(v30 + 40))(v24, v48); /*0x756a4b*/
              v32 = *v42; /*0x756a54*/
              v49[0] = (uint16_t)(BYTE1(v25) + (unsigned short)v45) + 1; /*0x756a57*/
              v49[1] = v31; /*0x756a5b*/
              v33 = (*(int (**)(unsigned int *, unsigned int *))(v32 + 40))(v42, v49); /*0x756a5f*/
              v20 = v47; /*0x756a66*/
              v6 = v51; /*0x756a6a*/
              v34 = v33 == 0; /*0x756a73*/
              result = v56; /*0x756a75*/
              g_VoxelRenderBuffer[v28] = v46 == 0; /*0x756a79*/
              v24 = v42; /*0x756a7f*/
              g_VoxelDepthBuffer[v28] = v34; /*0x756a86*/
            }
            result += *(unsigned int *)&v53[1]; /*0x756a94*/
            LOWORD(v25) = v53[0] + (unsigned short)v25; /*0x756a9a*/
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
        v56 = *(unsigned int *)((char *)v54 + 2) + v38; /*0x756ad2*/
        v51 = v27 + v40; /*0x756ad6*/
        result = --v44; /*0x756ade*/
        if ( !v44 ) /*0x756ae3*/
          break; /*0x756ae3*/
        result = *(unsigned int *)((char *)v54 + 2) + v38; /*0x7569cf*/
        v6 = v51; /*0x7569d3*/
      }
    }
  }
  else if ( (unsigned char)v44 ) /*0x756afc*/
  {
    v44 = (uint8_t)v44; /*0x756b02*/
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
          if ( *(unsigned int *)(v50 + 4 * v6) != -1 ) /*0x756b31*/
          {
            v36 = result & 0xFF00 | ((uint16_t)v25 >> 8); /*0x756b46*/
            g_VoxelRenderBuffer[v36] = 1; /*0x756b4a*/
            g_VoxelDepthBuffer[v36] = 1; /*0x756b50*/
          }
          LOWORD(v25) = v53[0] + (unsigned short)v25; /*0x756b5e*/
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
      result = *(unsigned int *)((char *)v54 + 2) + v39; /*0x756b08*/
      v6 = v51; /*0x756b0c*/
    }
  }
  return result; /*0x756ae9*/

}

// ==== BACKFILL 0x00758670  GlobalHelper_053C80_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_758670(float * a1, int a2)
{
  int v2; // ebp
  int v3; // esi
  float *v5; // edi
  double v6; // st7

  v2 = ((unsigned int *)(dword_8469F4))[a2]; /*0x758679*/
  v3 = 0; /*0x758681*/
  if ( v2 > 0 ) /*0x758687*/
  {
    v5 = (float *)(((unsigned int *)(dword_8469E0))[a2] + 4); /*0x75868a*/
    do /*0x7586d0*/
    {
      v6 = *(v5 - 1) * *a1 + v5[1] * a1[2] + a1[1] * *v5; /*0x75869f*/
      if ( v6 >= 0.0 ) /*0x7586ac*/
        ((unsigned int *)(g_VoxelShadeTable))[v3] = Math::RoundToInt(v6 * 16.0); /*0x7586c4*/
      else
        ((unsigned int *)(g_VoxelShadeTable))[v3] = 0; /*0x7586b0*/
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

// ==== BACKFILL 0x007589F0  sub_7589F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7589F0::sub_7589F0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7589F0)
}

// ==== BACKFILL 0x00758B70  GenerateLightRemapTable  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_758B70::GenerateLightRemapTable(void* a2, int a3) {

  float *v4; // eax
  double v5; // st7
  int v6; // ecx
  float *v7; // eax
  double v8; // st7
  int v9; // ebp
  int i; // edi
  double v11; // st7
  uint8_t *v12; // eax
  char v13; // al
  int v14; // ecx
  bool v15; // cc
  int v16; // edi
  int j; // ebp
  double v18; // st7
  uint8_t *v19; // eax
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
    ((unsigned int *)this)[0] = (void *)a3; /*0x758b8b*/
    v26 = a2; /*0x758b8e*/
  }
  else
  {
    v4 = (float *)&unk_B45A90; /*0x758b94*/
    ((unsigned int *)this)[0] = (void *)32; /*0x758b99*/
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
      if ( v9 < (int)this->AbstractClass || (v38 = 1, v9 > (int)((unsigned int *)this)[0]) ) /*0x758c42*/
        v38 = 0; /*0x758c44*/
      v11 = *v24; /*0x758c50*/
      v12 = (uint8_t *)(((unsigned int *)this)[0] + i); /*0x758c52*/
      v32 = (double)*v12 * v11; /*0x758c76*/
      v28 = (double)v12[1] * v11; /*0x758c88*/
      v30 = (double)v12[2] * v11; /*0x758c96*/
      v13 = VoxelRenderer::ProjectVertex((VoxelRenderer *)this, v32, v28, v30, v38); /*0x758ca5*/
      v14 = v9++ | ((unsigned int)v35 << 8); /*0x758caf*/
      *(unsigned char *)(v14 + ((unsigned int *)this)[0]) = v13; /*0x758cbb*/
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
      if ( v16 < (int)this->AbstractClass || (v39 = 1, v16 > (int)((unsigned int *)this)[0]) ) /*0x758d1b*/
        v39 = 0; /*0x758d1d*/
      v18 = *v25; /*0x758d29*/
      v19 = (uint8_t *)(((unsigned int *)this)[0] + j); /*0x758d2b*/
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
      *(unsigned char *)(v22 + ((unsigned int *)this)[0]) = v21; /*0x758dd9*/
    }
    result = v36 + 1; /*0x758dea*/
    v15 = ++v36 < 32; /*0x758dee*/
    ++v25; /*0x758df5*/
  }
  while ( v15 ); /*0x758df9*/
  return result; /*0x758dff*/

}

// ==== BACKFILL 0x00758E10  sub_758E10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_758E10::sub_758E10(float a2, float a3, float a4)
{

  uint8_t *uniqueId; // ecx
  char v5; // bl
  int i; // edx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float v11; // [esp+4h] [ebp-8h]

  uniqueId = (uint8_t *)((unsigned int *)this)[0]; /*0x758e13*/
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

// ==== BACKFILL 0x00759510  CCFileClass::Cleanup  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
int CCFileClass::Cleanup() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x759510.json */
}

// ==== BACKFILL 0x00759760  sub_759760  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * E4Recv_759760::sub_759760(const void * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759760)
}

// ==== BACKFILL 0x007597A0  Render_Load_7597A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_7597A0::Render_Load_7597A0() {

  int *v2; // edi
  uint16_t *v4; // eax
  uint16_t v5; // dx

  v2 = &this->reloadTimer[1]; /*0x7597a4*/
  if ( RenderAudioVideoFrame((const char *)&this->estimatedHealth + 1, &this->radarFlashTimer[1], &this->reloadTimer[1]) == -1 ) /*0x7597bc*/
  {
    v4 = (uint16_t *)*v2; /*0x7597ca*/
    this->threatPosed = *(unsigned int *)(*v2 + 16); /*0x7597d2*/
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

// ==== BACKFILL 0x007598D0  AbstractClass::updateBuildingState  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::updateBuildingState(int a1) {
}

// ==== BACKFILL 0x00759BC0  sub_759BC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_759BC0::sub_759BC0(signed int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759BC0)
}

// ==== BACKFILL 0x00759E10  AbstractClass::processConstruction  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::processConstruction() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 10 errs): wrong-universe gap2 body; truth func_0x759e10.json */
}

// ==== BACKFILL 0x00759E50  AbstractClass::checkBuildProgress  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::checkBuildProgress() {
}

// ==== BACKFILL 0x00759E60  DSurface::FlipIfNeeded  cls=DSurface  sig=csp  renamed_refs=0  residual=- ====
char DSurface::FlipIfNeeded()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00759E60.json)
}

// ==== BACKFILL 0x0075A810  TestBitArray  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool BitArray_Test(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75A810)
}

// ==== BACKFILL 0x0075AB30  JumpjetLocomotionClass::SmallStub_75AB30  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::SmallStub_75AB30(int a1)
{

  return LOBYTE(a1->Wobbles); /*0x75ab37*/

}

// ==== BACKFILL 0x0075AB40  JumpjetLocomotionClass::ComputeFloatExpression_4  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::ComputeFloatExpression_4(unsigned int * a1)
{

  return (*(uint8_t (**)(WalkLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1) /*0x75ab8c*/
      && *(double *)((unsigned int *)a1)[0]->currentSpeed_percentage > 0.0
      && (a1->Dest[2] != g_AsyncMovieState
       || a1->HeadToCoord[0] != g_MovieFrameState1
       || a1->HeadToCoord[1] != g_MovieFrameState2);

}

// ==== BACKFILL 0x0075ABA0  JumpjetLocomotionClass::GetMovementCoordinate_2  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_2(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075ABA0.json)
}

// ==== BACKFILL 0x0075AC00  JumpjetLocomotionClass::GetRenderCoordinate_2  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_2(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075AC00.json)
}

// ==== BACKFILL 0x0075AC80  JumpjetLocomotionClass::DrawVoxelAnimation  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DrawVoxelAnimation(unsigned char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075AC80.json)
}

// ==== BACKFILL 0x0075ACB0  JumpjetLocomotionClass::ConvertCoordToCell_4  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::ConvertCoordToCell_4(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075ACB0.json)
}

// ==== BACKFILL 0x0075ADA0  JumpjetLocomotionClass::DispatchVirtualCall_8  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchVirtualCall_8(FootClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075ADA0.json)
}

// ==== BACKFILL 0x0075AE00  JumpjetLocomotionClass::SynchronizeFacingDirection_1  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::SynchronizeFacingDirection_1(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75AE00)
}

// ==== BACKFILL 0x0075AE30  JumpjetLocomotionClass::DispatchVirtualCall_9  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchVirtualCall_9(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075AE30.json)
}

// ==== BACKFILL 0x0075C640  WalkLocomotionClass::ddtor  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int WalkLocomotionClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75C640)
}

// ==== BACKFILL 0x0075C680  WalkLocomotionClass::BeginMove  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT WalkLocomotionClass::BeginMove(int * a1, int * pStm)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75C680)
}

// ==== BACKFILL 0x0075C700  WalkLocomotionClass::LoadFromStream  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT WalkLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{

  IStream *v3; // esi
  WalkLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  ILocomotion * v6;
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  ILocomotion * v12;

  v3 = (gamemd::IStream *)((gamemd::WalkLocomotionClass *)((IStream *)pPStm));
  v4 = (gamemd::WalkLocomotionClass *)(a1);
  IPersistStream = LoadIPersistStream((gamemd::LocomotionClass *)a1, pPStm, a3); /*0x75c717*/
  if ( IPersistStream < 0 ) /*0x75c71b*/
    return IPersistStream; /*0x75c71b*/
  if ( !v4->Piggybackee ) /*0x75c726*/
  {
    v12 = (gamemd::ILocomotion *)((int)((gamemd::ILocomotion *)(*(unsigned int *)v3->__pad_0)));
    LOBYTE(a3) = 0; /*0x75c7cf*/
    (*(void (**)(IStream *, int *, int, unsigned int))((unsigned int)(v12)+ 16))(v3, &a3, 1, 0); /*0x75c7d4*/
    return IPersistStream; /*0x75c7d8*/
  }
  v6 = (gamemd::ILocomotion *)((int)((gamemd::ILocomotion *)(*(unsigned int *)v3->__pad_0)));
  LOBYTE(a3) = 1; /*0x75c738*/
  (*(void (**)(IStream *, int *, int, unsigned int))((unsigned int)(v6)+ 16))(v3, &a3, 1, 0); /*0x75c73d*/
  Piggybackee = (gamemd::ILocomotion *)(v4->Piggybackee); /*0x75c740*/
  pPStm = 0; /*0x75c743*/
  if ( Piggybackee ) /*0x75c74d*/
  {
    v8 = (**(int (***)(ILocomotion *, void *, WalkLocomotionClass **))Piggybackee)( /*0x75c75e*/
           Piggybackee,
           &unk_820270,
           (gamemd::WalkLocomotionClass **)&a1);
    if ( v8 >= 0 ) /*0x75c762*/
    {
      v9 = (int *)a1; /*0x75c77b*/
      if ( pPStm ) /*0x75c781*/
        (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x75c786*/
      pPStm = v9; /*0x75c789*/
    }
    else
    {
      ((Function *)((int *)&pPStm))->Method_4B4D60(); /*0x75c768*/
      pPStm = 0; /*0x75c76d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x75c797*/
      WinAPI::Wrapper(v8); /*0x75c79a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x75c7ab*/
  if ( pPStm ) /*0x75c7b3*/
    (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x75c7b8*/
  return v10; /*0x75c7bd*/

}

// ==== BACKFILL 0x0075C7E0  JumpjetLocomotionClass::SmallStub_75C7E0  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_75C7E0(int a1)
{

  return 2; /*0x75c7e5*/

}

// ==== BACKFILL 0x0075C850  JumpjetLocomotionClass::StubReturnZero_22  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_22(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075C850.json)
}

// ==== BACKFILL 0x0075C8A0  JumpjetLocomotionClass::StubReturnZero_23  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_23(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075C8A0.json)
}

// ==== BACKFILL 0x0075C8E0  JumpjetLocomotionClass::CheckBaseClassState_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::CheckBaseClassState_0(int a1)
{

  return !(*(uint8_t (**)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) /*0x75c910*/
      && LODWORD(a1->Climb)
      && !BYTE1(a1->Speed)
      && !*(unsigned char *)(*((unsigned int *)a1 - 3) + 1709);

}

// ==== BACKFILL 0x0075C920  JumpjetLocomotionClass::LoadLocomotionFromStream_4  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::LoadLocomotionFromStream_4(unsigned int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075C920.json)
}

// ==== BACKFILL 0x0075CA30  JumpjetLocomotionClass::DispatchVirtualCall_10  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchVirtualCall_10(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075CA30.json)
}

// ==== BACKFILL 0x0075CA80  JumpjetLocomotionClass::IsPositionWithinThreshold_1  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::IsPositionWithinThreshold_1(int a1, int a2, int a3, int a4)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075CA80.json)
}

// ==== BACKFILL 0x0075CB20  JumpjetLocomotionClass::SmallStub_75CB20  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::SmallStub_75CB20(int a1)
{

  return BYTE2(a1->HeadToCoord[2]); /*0x75cb27*/

}

// ==== BACKFILL 0x0075CB30  JumpjetLocomotionClass::InitMultiFieldArray_1  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::InitMultiFieldArray_1(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075CB30.json)
}

// ==== BACKFILL 0x0075CBA0  JumpjetLocomotionClass::ShortFunc_75CBA0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ShortFunc_75CBA0(int a1)
{

  return *(unsigned int *)(a1 + 32) != 0; /*0x75cbae*/

}

// ==== BACKFILL 0x0075CBC0  JumpjetLocomotionClass::SetByteField_3  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SetByteField_3(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075CBC0.json)
}

// ==== BACKFILL 0x0075CBD0  WalkLocomotionClass::StubReturn60  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int WalkLocomotionClass::StubReturn60()
{

  return 60; /*0x75cbd5*/

}

// ==== BACKFILL 0x0075CBE0  WalkLocomotionClass::ProcessMove  cls=WalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
WalkLocomotionClass * WalkLocomotionClass::ProcessMove(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75CBE0)
}

// ==== BACKFILL 0x0075CC30  JumpjetLocomotionClass::SmallStub_75CC30  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_75CC30(int a1, const void * a2, int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75CC30)
}

// ==== BACKFILL 0x0075CC40  JumpjetLocomotionClass::SmallStub_75CC40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_75CC40(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75CC40)
}

// ==== BACKFILL 0x0075CC50  JumpjetLocomotionClass::SmallStub_75CC50  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_75CC50(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75CC50)
}

// ==== BACKFILL 0x0075CC60  JumpjetLocomotionClass::SmallStub_75CC60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_75CC60(int a1, const void * a2, int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75CC60)
}

// ==== BACKFILL 0x0075CC70  JumpjetLocomotionClass::SmallStub_75CC70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_75CC70(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75CC70)
}

// ==== BACKFILL 0x0075CC80  JumpjetLocomotionClass::SmallStub_75CC80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_75CC80(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75CC80)
}

// ==== BACKFILL 0x0075D230  AbstractClass::ProcessInit  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::ProcessInit() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x75d230.json */
}

// ==== BACKFILL 0x0075E080  WarheadTypeClass::vt_03  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
int WarheadTypeClass__vt_03_(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x75e086*/
    return -2147467261; /*0x75e088*/
  *a2 = -1463464540; /*0x75e096*/
  a2[1] = 298979195; /*0x75e09e*/
  a2[2] = 1610642049; /*0x75e0a7*/
  a2[3] = unk_7E984C; /*0x75e0b0*/
  return 0; /*0x75e08d*/
}

// ==== BACKFILL 0x0075E4A0  Crate::applyCrateEffect  cls=Crate  sig=csp  renamed_refs=0  residual=- ====
int Crate::applyCrateEffect() {

  int v1; // esi

  v1 = 0; /*0x75e4a6*/
  if ( g_WarheadTypePool <= 0 ) /*0x75e4ad*/
    return 0; /*0x75e4d2*/
  while ( _strcmpi((char *)(*((unsigned int *)dword_8874C4 + v1) + 36), (char *)this) ) /*0x75e4c6*/
  {
    if ( ++v1 >= g_WarheadTypePool ) /*0x75e4d0*/
      return 0; /*0x75e4d0*/
  }
  return *((unsigned int *)dword_8874C4 + v1); /*0x75e4d2*/

}

// ==== BACKFILL 0x0075E4F0  WarheadTypeClass::GetObjectSize  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
int WarheadTypeClass::GetObjectSize()
{

  return 464; /*0x75e4f5*/

}

// ==== BACKFILL 0x0075E500  WarheadTypeClass::GetTypeIdentifier  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
int WarheadTypeClass::GetTypeIdentifier()
{

  return 50; /*0x75e505*/

}

// ==== BACKFILL 0x0075E690  WarheadTypeClass::checkImmunity  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
CCINIClass * WarheadTypeClass::checkImmunity(int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075E690.json)
}

// ==== BACKFILL 0x0075E6A0  WarheadTypeClass::calculateDamage  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35f: def was outside namespace (pre-existing damage)
DynamicVector * WarheadTypeClass::calculateDamage(int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075E6A0.json)
}
} // namespace gamemd

// ==== BACKFILL 0x0075EF30  sub_75EF30  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_75EF30(unsigned short * a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int result; // eax

  v2 = (uint8_t)((uint8_t)(*a1 >> g_BitShift_Red) << g_BitShift_Green_0) + (char)(a2 >> 2); /*0x75efa7*/
  v3 = (uint8_t)((uint8_t)(*a1 >> g_BitShift_Blue) << g_BitMask_Red) + ((96 * a2) >> 8); /*0x75efbf*/
  if ( v3 > 255 ) /*0x75efc6*/
    v3 = 255; /*0x75efc8*/
  if ( v2 > 255 ) /*0x75efe0*/
    v2 = 255; /*0x75efe2*/
  result = v3 >> g_BitMask_Red << g_BitShift_Blue; /*0x75f00f*/
  *a1 = result /*0x75f013*/
      | ((int)(uint8_t)((uint8_t)(*a1 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
      | (v2 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x75f016*/
}

// ==== BACKFILL 0x0075F020  Voxel::InitDistanceTable  cls=Voxel  sig=csp  renamed_refs=0  residual=- ====
int DynamicVectorClass_flat::InitDistanceTable()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075F020.json)
}

// ==== BACKFILL 0x0075F330  WaveClass::DamageArea  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
char WaveClass::DamageArea(ObjectClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75F330)
}

// ==== BACKFILL 0x0075F5C0  TacticalClass::CalcInverseAlpha  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
void* TacticalClass::CalcInverseAlpha(int a2, float a3) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x75F5C0.json */
}

// ==== BACKFILL 0x0075F610  WaveClass::UpdateWave  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
int WaveClass::UpdateWave(int a1, int a2) {
  int result; // eax

  Object::Unlink((ObjectClass *)this); /*0x75f61e*/
  result = 0; /*0x75f629*/
  if ( this->Owner == (void *)a1 ) /*0x75f62d*/
    this->Owner = 0; /*0x75f62f*/
  if ( this->Target == (void *)a1 ) /*0x75f63b*/
    this->Target = 0; /*0x75f63d*/
  return result; /*0x75f643*/
}

// ==== BACKFILL 0x0075F7D0  WaveClass::ProcessWaveTick  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
int WaveClass::ProcessWaveTick(int * a1, int * a2, int a3)
{

  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)a1),(gamemd::ObjectTypeClass *)(a2),(gamemd::ObjectTypeClass *)(a3)); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = *((unsigned int *)a1 + 128); /*0x75f7f9*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))(a2, *((unsigned int *)a1 + 125) + 4 * i, 4, 0); /*0x75f81f*/
      if ( result < 0 ) /*0x75f824*/
        break; /*0x75f824*/
    }
  }
  return result; /*0x75f82f*/

}

// ==== BACKFILL 0x0075F840  WaveClass::GetClassIdentifier  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
int WaveClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x75f846*/
    return -2147467261; /*0x75f848*/
  *a2 = 237448653; /*0x75f856*/
  a2[1] = 298949647; /*0x75f85e*/
  a2[2] = -1610610249; /*0x75f867*/
  a2[3] = unk_7E972C; /*0x75f870*/
  return 0; /*0x75f84d*/

}

// ==== BACKFILL 0x0075F880  WaveClass::GetObjectSize  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
int WaveClass::GetObjectSize()
{

  return 576; /*0x75f885*/

}

// ==== BACKFILL 0x0075F890  WaveClass::CheckStateFlag  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
int WaveClass::CheckStateFlag()
{

  return 3; /*0x75f895*/

}

// ==== BACKFILL 0x0075F8A0  WaveClass::StubReturnFalse  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
int WaveClass::StubReturnFalse()
{

  return 0; /*0x75f8a2*/

}
