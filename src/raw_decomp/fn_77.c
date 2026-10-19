// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00770020  Territory_WorldDominationTour::QueryInterface  this=Territory@WorldDominationTour  sig=csp ====
void **__thiscall Territory_WorldDominationTour::QueryInterface(Territory_WorldDominationTour *this, char a2)
{
  *this = (Territory_WorldDominationTour)&WorldDominationTour::Territory::`vftable'; /*0x770026*/
  DeleteAndZero((ObjectClass *)(this + 8)); /*0x77002c*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 1); /*0x770034*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x77003b*/
  if ( (a2 & 1) != 0 ) /*0x770045*/
    __3_YAXPAX_Z(this); /*0x770048*/
  return (void **)this; /*0x770052*/
}



// ==== 0x00770060  sub_770060  this=-  sig=ida-proto ====
int sub_770060()
{
  dword_B72B98 = 0; /*0x770062*/
  dword_B72B9C = 0; /*0x770067*/
  dword_B72BA0 = 0; /*0x77006c*/
  dword_B72BA4 = 0; /*0x770071*/
  return 0; /*0x770076*/
}



// ==== 0x00770080  sub_770080  this=-  sig=ida-proto ====
void sub_770080()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77008c*/
  dbl_B72BB0 = Math::Sqrt(v0 + v0); /*0x77009e*/
}



// ==== 0x007700B0  sub_7700B0  this=-  sig=ida-proto ====
void sub_7700B0()
{
  dbl_B72C00 = dbl_B72BB0 / 60.0; /*0x7700bc*/
}



// ==== 0x007700D0  sub_7700D0  this=-  sig=ida-proto ====
void sub_7700D0()
{
  dbl_B72BE8 = 1.0 / dbl_B72C00; /*0x7700dc*/
}



// ==== 0x007700F0  sub_7700F0  this=-  sig=ida-proto ====
void sub_7700F0()
{
  dbl_B72BE0 = 0.0174532925199433 * 45.0; /*0x7700fc*/
}



// ==== 0x00770110  sub_770110  this=-  sig=ida-proto ====
void sub_770110()
{
  dbl_B72BB8 = 0.0174532925199433 * 60.0; /*0x77011c*/
}



// ==== 0x00770130  sub_770130  this=-  sig=ida-proto ====
void sub_770130()
{
  dbl_B72B90 = 0.0174532925199433 * 90.0; /*0x77013c*/
}



// ==== 0x00770150  sub_770150  this=-  sig=ida-proto ====
__int64 sub_770150()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72B90 - dbl_B72BB8); /*0x770162*/
  result = Math::RoundToInt(v0 * dbl_B72BB0 * 0.5); /*0x770176*/
  dword_B72C08 = result; /*0x77017b*/
  return result; /*0x770180*/
}



// ==== 0x00770190  sub_770190  this=-  sig=ida-proto ====
void sub_770190()
{
  dbl_B72BC0 = Math::ArcTan((double)dword_B72C08 * 0.00390625); /*0x7701a7*/
}



// ==== 0x007701C0  sub_7701C0  this=-  sig=ida-proto ====
void sub_7701C0()
{
  dbl_B72BD8 = Math::ArcTan((double)(2 * dword_B72C08) / dbl_B72BB0); /*0x7701e2*/
}



// ==== 0x007701F0  sub_7701F0  this=-  sig=ida-proto ====
__int64 sub_7701F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72C08) + 0.5); /*0x77020b*/
  dword_B72BFC = result; /*0x770210*/
  return result; /*0x770216*/
}



// ==== 0x00770220  sub_770220  this=-  sig=ida-proto ====
int sub_770220()
{
  word_B72BA8 = 0; /*0x770222*/
  word_B72BAA = 0; /*0x770228*/
  return 0; /*0x77022e*/
}



// ==== 0x00770230  sub_770230  this=-  sig=ida-proto ====
int sub_770230()
{
  dword_B72BC8 = 0; /*0x770232*/
  dword_B72BCC = 0; /*0x770237*/
  dword_B72BD0 = 0; /*0x77023c*/
  return 0; /*0x770241*/
}



// ==== 0x00770250  sub_770250  this=-  sig=ida-proto ====
int sub_770250()
{
  dword_B72BF8 = 0; /*0x770255*/
  dword_B72BF0 = 128; /*0x77025f*/
  dword_B72BF4 = 128; /*0x770264*/
  return 128; /*0x770269*/
}



// ==== 0x00770270  WinsockInterface::ProcessPacket  this=WinsockInterface  sig=csp ====
char *__thiscall sub_770270(char *this, int a2)
{
  int v3; // ebp
  void **v4; // edi
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebp

  v3 = 6; /*0x77027a*/
  v4 = (void **)(this + 4); /*0x77027f*/
  *(_DWORD *)this = a2; /*0x770282*/
  v5 = (int)(this + 8); /*0x770284*/
  do /*0x7702b6*/
  {
    unknown_libname_73(v4); /*0x770289*/
    Array::ForEach(v5, 24, 6, (int (__thiscall *)(int))sub_7719E0); /*0x770298*/
    String::Assign_Alt(v4, &g_INI_DefaultBuffer); /*0x7702a4*/
    v4 += 37; /*0x7702a9*/
    v5 += 148; /*0x7702af*/
    --v3; /*0x7702b5*/
  }
  while ( v3 ); /*0x7702b6*/
  v6 = this + 892; /*0x7702b8*/
  v7 = 2; /*0x7702be*/
  do /*0x7702e2*/
  {
    VectorClassUInt::Constructor(v6, 0, 0); /*0x7702c9*/
    *v6 = &DynamicVectorClass<unsigned int>::`vftable'; /*0x7702ce*/
    v6[5] = 10; /*0x7702d4*/
    v6[4] = 0; /*0x7702db*/
    v6 += 6; /*0x7702de*/
    --v7; /*0x7702e1*/
  }
  while ( v7 ); /*0x7702e2*/
  this->u32_3AC = Timer::GetTicks(); /*0x7702f6*/
  this->u32_3B4 = 0; /*0x7702fc*/
  this->u32_EE0 = 1; /*0x770305*/
  this->u32_3BC = 0; /*0x77030c*/
  VectorClass::WstringConstructor((_DWORD *)this + 240, 0, 0); /*0x770312*/
  this->u32_3C0 = &DynamicVectorClass<Wstring>::`vftable'; /*0x770317*/
  this->u32_3D4 = 10; /*0x77031d*/
  this->u32_3D0 = 0; /*0x770324*/
  this->u32_3D8 = 0; /*0x770327*/
  Audio::GetEnabled(); /*0x77032d*/
  String::Assign((char **)&a2, aOldcycle); /*0x77033b*/
  String::Reassign((char **)this + 1, (const char **)&a2); /*0x770348*/
  DeleteAndZero((void **)&a2); /*0x770351*/
  String::Assign((char **)&a2, aHistory); /*0x77035f*/
  String::Reassign((char **)this + 38, (const char **)&a2); /*0x77036f*/
  DeleteAndZero((void **)&a2); /*0x770378*/
  String::Assign((char **)&a2, aStatus); /*0x770386*/
  String::Reassign((char **)this + 75, (const char **)&a2); /*0x770396*/
  DeleteAndZero((void **)&a2); /*0x77039f*/
  String::Assign((char **)&a2, aTerritory); /*0x7703ad*/
  String::Reassign((char **)this + 112, (const char **)&a2); /*0x7703bd*/
  DeleteAndZero((void **)&a2); /*0x7703c6*/
  String::Assign((char **)&a2, aGame); /*0x7703d4*/
  String::Reassign((char **)this + 149, (const char **)&a2); /*0x7703e4*/
  DeleteAndZero((void **)&a2); /*0x7703ed*/
  String::Assign((char **)&a2, aEvacuate); /*0x7703fb*/
  String::Reassign((char **)this + 186, (const char **)&a2); /*0x77040b*/
  DeleteAndZero((void **)&a2); /*0x770414*/
  return this; /*0x77041b*/
}



// ==== 0x00770430  ObjectClass::System_Init  this=ObjectClass  sig=csp ====
void __thiscall System_Init_770430(TechnoClass *this)
{
  AudioSample *v2; // ecx
  int *v3; // eax
  int *v4; // esi
  int *v5; // esi
  int v6; // ebp
  void *v7; // eax
  ObjectClass *v8; // esi
  int v9; // ebx
  int *v10; // edi
  int v11; // [esp+10h] [ebp-8h]

  if ( *(int *)this->isUseless > 0 ) /*0x770440*/
  {
    StopThemeClass(1); /*0x770444*/
    (*(void (__thiscall **)(int *))(this->targetLaserTimer[1] + 12))(&this->targetLaserTimer[1]); /*0x770455*/
  }
  this->secondaryFacing[3] = Timer::GetTicks(); /*0x770469*/
  this->secondaryFacing[4] = v11; /*0x77046f*/
  this->secondaryFacing[5] = 0; /*0x770472*/
  v2 = (AudioSample *)this->turretRecoil[0]; /*0x770475*/
  if ( v2 ) /*0x77047d*/
    AudioSample::Destructor(v2); /*0x77047f*/
  v3 = (int *)this->targetLaserTimer[2]; /*0x770484*/
  this->targetLaserTimer[1] = (int)&VectorClass<Wstring>::`vftable'; /*0x77048a*/
  if ( v3 && this->isSinking[0] ) /*0x770498*/
  {
    v4 = v3 - 1; /*0x7704a7*/
    Array::ForEachReverse(v3, 4, *(v3 - 1), (int (__thiscall *)(int))DeleteAndZero); /*0x7704b3*/
    __3_YAXPAX_Z(v4); /*0x7704b9*/
    this->targetLaserTimer[2] = 0; /*0x7704c1*/
  }
  this->isSinking[0] = 0; /*0x7704c8*/
  *(_DWORD *)this->unknown_short_3C8 = 0; /*0x7704ce*/
  v5 = &this->secondaryFacing[3]; /*0x7704d4*/
  v6 = 2; /*0x7704da*/
  do /*0x770507*/
  {
    v7 = (void *)*(v5 - 5); /*0x7704df*/
    v5 -= 6; /*0x7704e2*/
    *v5 = (int)&VectorClass<unsigned int>::`vftable'; /*0x7704e7*/
    if ( v7 && *((_BYTE *)v5 + 13) ) /*0x7704ef*/
    {
      __3_YAXPAX_Z(v7); /*0x7704f5*/
      v5[1] = 0; /*0x7704fd*/
    }
    --v6; /*0x770500*/
    *((_BYTE *)v5 + 13) = 0; /*0x770501*/
    v5[2] = 0; /*0x770504*/
  }
  while ( v6 ); /*0x770507*/
  v8 = (ObjectClass *)&this->barrelFacing[3]; /*0x770509*/
  v9 = 6; /*0x77050f*/
  v10 = &this->barrelFacing[4]; /*0x770515*/
  do /*0x77053b*/
  {
    v10 -= 37; /*0x77051d*/
    v8 = (ObjectClass *)((char *)v8 - 148); /*0x770528*/
    Array::ForEachReverse(v10, 24, 6, (int (__thiscall *)(int))sub_771A00); /*0x77052e*/
    DeleteAndZero(v8); /*0x770535*/
    --v9; /*0x77053a*/
  }
  while ( v9 ); /*0x77053b*/
}



// ==== 0x00770550  Animation::LoadSidebarAnimations  this=Animation  sig=csp ====
void __thiscall Animation::LoadSidebarAnimations(Animation *this, _DWORD *a2, int a3)
{
  char **v3; // ebx
  INIClass *v4; // ebp
  INIClass *v5; // edi
  void *v6; // esi
  char **v7; // eax
  int i; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  char **v14; // eax
  int j; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  Animation *v22; // [esp+10h] [ebp-10h]
  String v23; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+1Ch] [ebp-4h]

  v3 = (char **)a3; /*0x770554*/
  v4 = (INIClass *)a2; /*0x770559*/
  v22 = this; /*0x77055f*/
  v5 = (INIClass *)(this + 4); /*0x770563*/
  *(_DWORD *)&v23.m_3[1] = 6; /*0x770566*/
  while ( 1 ) /*0x770574*/
  {
    v6 = *(void **)this; /*0x770574*/
    String::Assign((String *)&a3, off_83E188); /*0x77057f*/
    INIClass::ReadTokenizedPair(v5, v4, v3, v6, 0, (char **)&a3); /*0x770590*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770599*/
    String::Assign((String *)&a2, g_INI_Key_Lose); /*0x7705a7*/
    INIClass::ReadTokenizedPair(v5, v4, v3, v6, 1, (char **)&a2); /*0x7705b8*/
    DeleteAndZero((ObjectClass *)&a2); /*0x7705c1*/
    String::Assign(&v23, aDraw); /*0x7705cf*/
    INIClass::ReadTokenizedPair(v5, v4, v3, v6, 2, (char **)&v23); /*0x7705e0*/
    DeleteAndZero((ObjectClass *)&v23); /*0x7705e9*/
    v5 = (INIClass *)((char *)v5 + 148); /*0x7705f2*/
    if ( !--*(_DWORD *)&v23.m_3[1] ) /*0x7705fd*/
      break; /*0x7705fd*/
    this = v22; /*0x770570*/
  }
  String::Assign(&v23, aStartup); /*0x77060c*/
  v7 = StaticString::Factory(*(StaticString **)v22); /*0x77061c*/
  ConcatStringAlloc((char **)&v23.m_3[1], (const char **)v7, (char **)&v23); /*0x770627*/
  unknown_libname_73(&a2); /*0x770630*/
  String::Assign((String *)&a3, &g_INI_DefaultBuffer); /*0x77063e*/
  INIClass::ReadString(v4, v3, (char **)&v23.m_3[1], (char **)&a3, (int)&a2); /*0x770655*/
  DeleteAndZero((ObjectClass *)&a3); /*0x77065e*/
  (*(void (__thiscall **)(Animation *))(*(_DWORD *)&v22[892] + 12))(v22 + 892); /*0x770671*/
  unknown_libname_73(&a3); /*0x770678*/
  for ( i = String::Tokenize((String *)&a2, 0, Str, (void **)&a3); /*0x770697*/
        i != -1;
        i = String::Tokenize((String *)&a2, i, Str, (void **)&a3) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&a3); /*0x77069d*/
    v9 = *(_DWORD *)&v22[900]; /*0x7706a2*/
    v24 = v10; /*0x7706a5*/
    if ( *(_DWORD *)&v22[908] >= v9 ) /*0x7706ac*/
    {
      if ( !*(_BYTE *)&v22[905] && v9 ) /*0x7706b7*/
        continue; /*0x7706b7*/
      v11 = *(_DWORD *)&v22[912]; /*0x7706b9*/
      if ( v11 <= 0 /*0x7706c9*/
        || !(*(unsigned __int8 (__thiscall **)(Animation *, int, _DWORD))(*(_DWORD *)&v22[892] + 8))(
              v22 + 892,
              v9 + v11,
              0) )
      {
        continue; /*0x7706c9*/
      }
    }
    v12 = *(_DWORD *)&v22[908]; /*0x7706d0*/
    v13 = *(_DWORD *)&v22[896]; /*0x7706d3*/
    *(_DWORD *)&v22[908] = v12 + 1; /*0x7706d9*/
    *(_DWORD *)(v13 + 4 * v12) = v24; /*0x7706e0*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x770702*/
  DeleteAndZero((ObjectClass *)&a2); /*0x77070b*/
  DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x770714*/
  DeleteAndZero((ObjectClass *)&v23); /*0x77071d*/
  String::Assign(&v23, aTerritoryselec); /*0x77072b*/
  v14 = StaticString::Factory(*(StaticString **)v22); /*0x77073b*/
  ConcatStringAlloc((char **)&v23.m_3[1], (const char **)v14, (char **)&v23); /*0x770746*/
  unknown_libname_73(&a2); /*0x77074f*/
  String::Assign((String *)&a3, &g_INI_DefaultBuffer); /*0x77075d*/
  INIClass::ReadString(v4, v3, (char **)&v23.m_3[1], (char **)&a3, (int)&a2); /*0x770774*/
  DeleteAndZero((ObjectClass *)&a3); /*0x77077d*/
  (*(void (__thiscall **)(Animation *))(*(_DWORD *)&v22[916] + 12))(v22 + 916); /*0x770790*/
  unknown_libname_73(&a3); /*0x770797*/
  for ( j = String::Tokenize((String *)&a2, 0, Str, (void **)&a3); /*0x7707b6*/
        j != -1;
        j = String::Tokenize((String *)&a2, j, Str, (void **)&a3) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&a3); /*0x7707bc*/
    v16 = *(_DWORD *)&v22[924]; /*0x7707c1*/
    v18 = v17; /*0x7707c4*/
    if ( *(_DWORD *)&v22[932] >= v16 ) /*0x7707c9*/
    {
      if ( !*(_BYTE *)&v22[929] && v16 ) /*0x7707d4*/
        continue; /*0x7707d4*/
      v19 = *(_DWORD *)&v22[936]; /*0x7707d6*/
      if ( v19 <= 0 /*0x7707e6*/
        || !(*(unsigned __int8 (__thiscall **)(Animation *, int, _DWORD))(*(_DWORD *)&v22[916] + 8))(
              v22 + 916,
              v16 + v19,
              0) )
      {
        continue; /*0x7707e6*/
      }
    }
    v20 = *(_DWORD *)&v22[932]; /*0x7707ed*/
    v21 = *(_DWORD *)&v22[920]; /*0x7707f0*/
    *(_DWORD *)&v22[932] = v20 + 1; /*0x7707f6*/
    *(_DWORD *)(v21 + 4 * v20) = v18; /*0x7707f9*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x77081b*/
  DeleteAndZero((ObjectClass *)&a2); /*0x770824*/
  DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x77082d*/
  DeleteAndZero((ObjectClass *)&v23); /*0x770836*/
}



// ==== 0x00770850  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_770850(ObjectClass *this, _DWORD *a2, char **a3, int a4, int a5)
{
  char **v6; // eax
  int v7; // eax
  char *v8; // esi
  int i; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  char **v16; // [esp-4h] [ebp-14h]
  String v17; // [esp+8h] [ebp-8h] BYREF

  v16 = (char **)a5; /*0x77085b*/
  v6 = StaticString::Factory((StaticString *)this->AbstractClass); /*0x77085e*/
  ConcatStringAlloc((char **)&v17.m_3[1], (const char **)v6, v16); /*0x770869*/
  unknown_libname_73(&v17); /*0x770872*/
  String::Assign((String *)&a5, &g_INI_DefaultBuffer); /*0x770880*/
  INIClass::ReadString((INIClass *)a2, a3, (char **)&v17.m_3[1], (char **)&a5, (int)&v17); /*0x77089d*/
  DeleteAndZero((ObjectClass *)&a5); /*0x7708a6*/
  v7 = *((_DWORD *)this + 6 * a4 + 223); /*0x7708b2*/
  v8 = (char *)this + 24 * a4 + 892; /*0x7708b9*/
  (*(void (__thiscall **)(char *))(v7 + 12))(v8); /*0x7708c2*/
  unknown_libname_73(&a5); /*0x7708c9*/
  for ( i = String::Tokenize(&v17, 0, Str, (void **)&a5); i != -1; i = String::Tokenize(&v17, i, Str, (void **)&a5) ) /*0x7708e8*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&a5); /*0x7708ef*/
    v10 = *((_DWORD *)v8 + 2); /*0x7708f4*/
    v12 = v11; /*0x7708f7*/
    if ( *((_DWORD *)v8 + 4) >= v10 ) /*0x7708fc*/
    {
      if ( !v8[13] && v10 ) /*0x770907*/
        continue; /*0x770907*/
      v13 = *((_DWORD *)v8 + 5); /*0x770909*/
      if ( v13 <= 0 || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v8 + 8))(v8, v10 + v13, 0) ) /*0x770919*/
        continue; /*0x770919*/
    }
    v14 = *((_DWORD *)v8 + 4); /*0x770920*/
    v15 = *((_DWORD *)v8 + 1); /*0x770923*/
    *((_DWORD *)v8 + 4) = v14 + 1; /*0x770929*/
    *(_DWORD *)(v15 + 4 * v14) = v12; /*0x77092c*/
  }
  DeleteAndZero((ObjectClass *)&a5); /*0x77094f*/
  DeleteAndZero((ObjectClass *)&v17); /*0x770958*/
  DeleteAndZero((ObjectClass *)&v17.m_3[1]); /*0x770961*/
}



// ==== 0x00770970  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_770970(ObjectClass *this, int a2, int a3, void **a4)
{
  void **v4; // ebx
  void *ptr_0; // edi
  void **v6; // esi
  int v7; // eax
  int v9; // eax
  int v10; // edx
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = a4; /*0x770976*/
  ptr_0 = this->AbstractClass; /*0x77097f*/
  v6 = &this->? + 37 * a2 + 12 * a3; /*0x770990*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770996*/
  v7 = (int)v6[4]; /*0x77099b*/
  if ( v7 <= 0 ) /*0x7709a0*/
    return 0; /*0x7709a4*/
  if ( v7 == 1 ) /*0x7709ae*/
    v9 = 0; /*0x7709b0*/
  else
    v9 = Random::Range(&Randomizer_Global, 0, v7 - 1); /*0x7709bd*/
  v10 = *((_DWORD *)v6[1] + v9); /*0x7709ca*/
  if ( ptr_0 == (void *)3 ) /*0x7709cd*/
  {
    v11 = FormatStringInt((char **)&a3, v10, 2); /*0x7709d3*/
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11); /*0x7709e2*/
    String::Reassign((String *)v4, (const char **)v12); /*0x7709ea*/
    DeleteAndZero((ObjectClass *)&a2); /*0x7709f3*/
    DeleteAndZero((ObjectClass *)&a3); /*0x7709fc*/
  }
  else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2); /*0x770a0e*/
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13); /*0x770a1d*/
    String::Reassign((String *)v4, (const char **)v14); /*0x770a25*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770a2e*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770a37*/
  }
  return 1; /*0x7709a2*/
}



// ==== 0x00770A50  ObjectClass::method_770A50  this=ObjectClass  sig=csp ====
char __thiscall sub_770A50(ObjectClass *this, int a2, int a3, void **a4)
{
  void **v4; // ebx
  void *ptr_0; // edi
  void **v6; // esi
  int v7; // eax
  int v9; // eax
  int v10; // edx
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = a4; /*0x770a56*/
  ptr_0 = this->AbstractClass; /*0x770a5f*/
  v6 = &this->? + 37 * a2 + 12 * a3; /*0x770a70*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770a76*/
  v7 = (int)v6[4]; /*0x770a7b*/
  if ( v7 <= 0 ) /*0x770a80*/
    return 0; /*0x770a84*/
  if ( v7 == 1 ) /*0x770a8e*/
    v9 = 0; /*0x770a90*/
  else
    v9 = Random::Range(&Randomizer_Global, 0, v7 - 1); /*0x770a9d*/
  v10 = *((_DWORD *)v6[1] + v9); /*0x770aaa*/
  if ( ptr_0 == (void *)3 ) /*0x770aad*/
  {
    v11 = FormatStringInt((char **)&a3, v10, 2); /*0x770ab3*/
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11); /*0x770ac2*/
    String::Reassign((String *)v4, (const char **)v12); /*0x770aca*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770ad3*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770adc*/
  }
  else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2); /*0x770aee*/
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13); /*0x770afd*/
    String::Reassign((String *)v4, (const char **)v14); /*0x770b05*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770b0e*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770b17*/
  }
  return 1; /*0x770a82*/
}



// ==== 0x00770B30  ObjectClass::method_770B30  this=ObjectClass  sig=csp ====
char __thiscall sub_770B30(ObjectClass *this, int a2, void **a3)
{
  void **v3; // ebx
  void *ptr_0; // edi
  char *v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+Ch] [ebp-8h] BYREF
  void *v15; // [esp+10h] [ebp-4h] BYREF

  v3 = a3; /*0x770b38*/
  ptr_0 = this->AbstractClass; /*0x770b41*/
  v5 = (char *)this + 24 * a2 + 892; /*0x770b43*/
  DeleteAndZero::Alt2((DeleteAndZero *)a3); /*0x770b4c*/
  v6 = *((_DWORD *)v5 + 4); /*0x770b51*/
  if ( v6 <= 0 ) /*0x770b56*/
    return 0; /*0x770b5a*/
  if ( v6 == 1 ) /*0x770b66*/
    v8 = 0; /*0x770b68*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x770b75*/
  v9 = *(_DWORD *)(*((_DWORD *)v5 + 1) + 4 * v8); /*0x770b82*/
  if ( ptr_0 == (void *)3 ) /*0x770b85*/
  {
    v10 = FormatStringInt((char **)&a3, v9, 2); /*0x770b8b*/
    v11 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v10); /*0x770b9a*/
    String::Reassign((String *)v3, (const char **)v11); /*0x770ba2*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770bab*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770bb4*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v15, v9, 2); /*0x770bc8*/
    v13 = ProcessStringAndCopy((char **)&v14, g_Str_WWD_Allied, v12); /*0x770bd7*/
    String::Reassign((String *)v3, (const char **)v13); /*0x770bdf*/
    DeleteAndZero((ObjectClass *)&v14); /*0x770be8*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770bf1*/
  }
  return 1; /*0x770b58*/
}



// ==== 0x00770C10  Map_Remove  this=ScoreScreen  sig=csp ====
char __fastcall sub_770C10(int a1, int a2, void **a3)
{
  char **v3; // ebx
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+Ch] [ebp-Ch] BYREF
  void *v15; // [esp+10h] [ebp-8h] BYREF
  void *v16; // [esp+14h] [ebp-4h] BYREF

  v3 = (char **)a3; /*0x770c14*/
  DeleteAndZero::Alt2(a3); /*0x770c20*/
  v6 = *(_DWORD *)(a2 + 16); /*0x770c25*/
  if ( v6 <= 0 ) /*0x770c2a*/
    return 0; /*0x770c2e*/
  if ( v6 == 1 ) /*0x770c3a*/
    v8 = 0; /*0x770c3c*/
  else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1); /*0x770c49*/
  v9 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v8); /*0x770c56*/
  if ( a1 == 3 ) /*0x770c59*/
  {
    v10 = FormatStringInt((char **)&v14, v9, 2); /*0x770c5f*/
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10); /*0x770c6e*/
    String::Reassign(v3, (const char **)v11); /*0x770c76*/
    DeleteAndZero((void **)&a3); /*0x770c7f*/
    DeleteAndZero(&v14); /*0x770c88*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v16, v9, 2); /*0x770c9c*/
    v13 = ProcessStringAndCopy((char **)&v15, g_Str_WWD_Allied, v12); /*0x770cab*/
    String::Reassign(v3, (const char **)v13); /*0x770cb3*/
    DeleteAndZero(&v15); /*0x770cbc*/
    DeleteAndZero(&v16); /*0x770cc5*/
  }
  return 1; /*0x770c2c*/
}



// ==== 0x00770CE0  Map_Remove_770CE0  this=ObjectClass  sig=csp ====
char __fastcall sub_770CE0(int a1, int a2, char **a3)
{
  char **v3; // eax
  char **v4; // eax
  char **v6; // eax
  char **v7; // eax
  void *v8; // [esp+0h] [ebp-8h] BYREF
  void *v9; // [esp+4h] [ebp-4h] BYREF

  if ( a1 == 3 ) /*0x770ce8*/
  {
    v3 = FormatStringInt((char **)&v9, a2, 2); /*0x770cee*/
    v4 = ProcessStringAndCopy((char **)&v8, g_Str_WWD_Soviet, v3); /*0x770cfd*/
    String::Reassign(a3, (const char **)v4); /*0x770d07*/
    DeleteAndZero(&v8); /*0x770d10*/
    DeleteAndZero(&v9); /*0x770d19*/
  }
  else
  {
    v6 = FormatStringInt((char **)&v8, a2, 2); /*0x770d2a*/
    v7 = ProcessStringAndCopy((char **)&v9, g_Str_WWD_Allied, v6); /*0x770d39*/
    String::Reassign(a3, (const char **)v7); /*0x770d43*/
    DeleteAndZero(&v9); /*0x770d4c*/
    DeleteAndZero(&v8); /*0x770d55*/
  }
  return 1; /*0x770d20*/
}



// ==== 0x00770D70  sub_770D70  this=-  sig=ida-proto ====
void __fastcall sub_770D70(String *a1, _DWORD *a2)
{
  int i; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // edx
  void *v11; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*a2 + 12))(a2); /*0x770d7c*/
  unknown_libname_73(&v11); /*0x770d83*/
  for ( i = String::Tokenize(a1, 0, Str, &v11); i != -1; i = String::Tokenize(a1, i, Str, &v11) ) /*0x770da0*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v11); /*0x770da7*/
    v5 = a2[2]; /*0x770dac*/
    v7 = v6; /*0x770daf*/
    if ( a2[4] >= v5 ) /*0x770db4*/
    {
      if ( !*((_BYTE *)a2 + 13) && v5 ) /*0x770dbf*/
        continue; /*0x770dbf*/
      v8 = a2[5]; /*0x770dc1*/
      if ( v8 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*a2 + 8))(a2, v5 + v8, 0) ) /*0x770dd1*/
        continue; /*0x770dd1*/
    }
    v9 = a2[4]; /*0x770dd8*/
    v10 = a2[1]; /*0x770ddb*/
    a2[4] = v9 + 1; /*0x770de1*/
    *(_DWORD *)(v10 + 4 * v9) = v7; /*0x770de4*/
  }
  DeleteAndZero((ObjectClass *)&v11); /*0x770e05*/
}



// ==== 0x00770E70  ObjectClass::method_770E70  this=ObjectClass  sig=csp ====
void __thiscall sub_770E70(ObjectClass *this, _DWORD *a2, char **a3, void *a4)
{
  void *v5; // edi
  char *v6; // [esp+10h] [ebp-4h] BYREF

  String::Assign((String *)&v6, off_83E188); /*0x770e80*/
  v5 = a4; /*0x770e85*/
  INIClass::ReadTokenizedPair((INIClass *)this, a2, a3, a4, 0, &v6); /*0x770e9d*/
  DeleteAndZero((ObjectClass *)&v6); /*0x770ea6*/
  String::Assign((String *)&a4, g_INI_Key_Lose); /*0x770eb4*/
  INIClass::ReadTokenizedPair((INIClass *)this, a2, a3, v5, 1, (char **)&a4); /*0x770ec5*/
  DeleteAndZero((ObjectClass *)&a4); /*0x770ece*/
  String::Assign((String *)&a4, aDraw); /*0x770edc*/
  INIClass::ReadTokenizedPair((INIClass *)this, a2, a3, v5, 2, (char **)&a4); /*0x770eed*/
  DeleteAndZero((ObjectClass *)&a4); /*0x770ef6*/
}



// ==== 0x00770F10  ObjectClass::method_770F10  this=ObjectClass  sig=csp ====
char __thiscall sub_770F10(ObjectClass *this, int a2, int a3, void **a4)
{
  void **v4; // edi
  void **v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+8h] [ebp-4h] BYREF

  v4 = a4; /*0x770f17*/
  v5 = &this->? + 12 * a3; /*0x770f21*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770f27*/
  v6 = (int)v5[4]; /*0x770f2c*/
  if ( v6 <= 0 ) /*0x770f31*/
    return 0; /*0x770f34*/
  if ( v6 == 1 ) /*0x770f3e*/
    v8 = 0; /*0x770f40*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x770f4d*/
  v9 = *((_DWORD *)v5[1] + v8); /*0x770f57*/
  if ( a2 == 3 ) /*0x770f61*/
  {
    v10 = FormatStringInt((char **)&a4, v9, 2); /*0x770f67*/
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10); /*0x770f76*/
    String::Reassign((String *)v4, (const char **)v11); /*0x770f7e*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770f87*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770f90*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2); /*0x770fa1*/
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12); /*0x770fb0*/
    String::Reassign((String *)v4, (const char **)v13); /*0x770fb8*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770fc1*/
    DeleteAndZero((ObjectClass *)&v14); /*0x770fca*/
  }
  return 1; /*0x770f33*/
}



// ==== 0x00770FE0  ObjectClass::method_770FE0  this=ObjectClass  sig=csp ====
char __thiscall sub_770FE0(ObjectClass *this, int a2, int a3, void **a4)
{
  void **v4; // edi
  int *v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+8h] [ebp-4h] BYREF

  v4 = a4; /*0x770fe7*/
  v5 = &this->? + 12 * a3; /*0x770ff1*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770ff7*/
  v6 = v5[4]; /*0x770ffc*/
  if ( v6 <= 0 ) /*0x771001*/
    return 0; /*0x771004*/
  if ( v6 == 1 ) /*0x77100e*/
    v8 = 0; /*0x771010*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x77101d*/
  v9 = *(_DWORD *)(v5[1] + 4 * v8); /*0x771027*/
  if ( a2 == 3 ) /*0x771031*/
  {
    v10 = FormatStringInt((char **)&a4, v9, 2); /*0x771037*/
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10); /*0x771046*/
    String::Reassign((String *)v4, (const char **)v11); /*0x77104e*/
    DeleteAndZero((ObjectClass *)&a3); /*0x771057*/
    DeleteAndZero((ObjectClass *)&a4); /*0x771060*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2); /*0x771071*/
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12); /*0x771080*/
    String::Reassign((String *)v4, (const char **)v13); /*0x771088*/
    DeleteAndZero((ObjectClass *)&a2); /*0x771091*/
    DeleteAndZero((ObjectClass *)&v14); /*0x77109a*/
  }
  return 1; /*0x771003*/
}



// ==== 0x007710B0  INIClass::ReadTokenizedPair  this=INIClass  sig=csp ====
void __thiscall INIClass::ReadTokenizedPair(INIClass *this, _DWORD *a2, char **a3, void *a4, int a5, char **a6)
{
  char **v7; // eax
  char **v8; // eax
  char *v9; // ebx
  int i; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char *v17; // esi
  int j; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  char **v26; // [esp+0h] [ebp-14h]
  char *v27; // [esp+10h] [ebp-4h] BYREF

  v26 = a6; /*0x7710be*/
  v7 = StaticString::Factory((StaticString *)a4); /*0x7710c5*/
  v8 = ConcatStringAlloc((char **)&a4, (const char **)v7, (char **)this); /*0x7710d0*/
  String::Concat((String *)v8, &v27, v26); /*0x7710d7*/
  DeleteAndZero((ObjectClass *)&a4); /*0x7710e0*/
  unknown_libname_73(&a6); /*0x7710e9*/
  String::Assign((String *)&a4, &g_INI_DefaultBuffer); /*0x7710f7*/
  INIClass::ReadString((INIClass *)a2, a3, &v27, (char **)&a4, (int)&a6); /*0x771114*/
  DeleteAndZero((ObjectClass *)&a4); /*0x77111d*/
  v9 = &this->__pad_0[48 * a5]; /*0x77112c*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)v9 + 1) + 12))(v9 + 4); /*0x771137*/
  unknown_libname_73(&a4); /*0x77113e*/
  for ( i = String::Tokenize((String *)&a6, 0, Str, &a4); i != -1; i = String::Tokenize((String *)&a6, i, Str, &a4) ) /*0x77115d*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&a4); /*0x771164*/
    v11 = *((_DWORD *)v9 + 3); /*0x771169*/
    v13 = v12; /*0x77116c*/
    if ( *((_DWORD *)v9 + 5) >= v11 ) /*0x771171*/
    {
      if ( !v9[17] && v11 ) /*0x77117c*/
        continue; /*0x77117c*/
      v14 = *((_DWORD *)v9 + 6); /*0x77117e*/
      if ( v14 <= 0 /*0x77118e*/
        || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v9 + 1) + 8))(v9 + 4, v11 + v14, 0) )
      {
        continue; /*0x77118e*/
      }
    }
    v15 = *((_DWORD *)v9 + 5); /*0x771195*/
    v16 = *((_DWORD *)v9 + 2); /*0x771198*/
    *((_DWORD *)v9 + 5) = v15 + 1; /*0x77119e*/
    *(_DWORD *)(v16 + 4 * v15) = v13; /*0x7711a1*/
  }
  DeleteAndZero((ObjectClass *)&a4); /*0x7711c4*/
  String::Append((String *)&v27, aEmphasis); /*0x7711d2*/
  String::Assign((String *)&a4, &g_INI_DefaultBuffer); /*0x7711e0*/
  INIClass::ReadString((INIClass *)a2, a3, &v27, (char **)&a4, (int)&a6); /*0x7711fd*/
  DeleteAndZero((ObjectClass *)&a4); /*0x771206*/
  v17 = v9 + 28; /*0x77120e*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)v9 + 7) + 12))(v9 + 28); /*0x771213*/
  unknown_libname_73(&a3); /*0x77121a*/
  for ( j = String::Tokenize((String *)&a6, 0, Str, (void **)&a3); /*0x771239*/
        j != -1;
        j = String::Tokenize((String *)&a6, j, Str, (void **)&a3) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&a3); /*0x77123f*/
    v19 = *((_DWORD *)v17 + 2); /*0x771244*/
    v21 = v20; /*0x771247*/
    if ( *((_DWORD *)v17 + 4) >= v19 ) /*0x77124c*/
    {
      if ( !v17[13] && v19 ) /*0x771257*/
        continue; /*0x771257*/
      v22 = *((_DWORD *)v17 + 5); /*0x771259*/
      if ( v22 <= 0 || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, v19 + v22, 0) ) /*0x771269*/
        continue; /*0x771269*/
    }
    v23 = *((_DWORD *)v17 + 4); /*0x771270*/
    v24 = *((_DWORD *)v17 + 1); /*0x771273*/
    *((_DWORD *)v17 + 4) = v23 + 1; /*0x771279*/
    *(_DWORD *)(v24 + 4 * v23) = v21; /*0x77127c*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x77129e*/
  DeleteAndZero((ObjectClass *)&a6); /*0x7712a7*/
  DeleteAndZero((ObjectClass *)&v27); /*0x7712b0*/
}



// ==== 0x007712C0  ScoreScreen::RemoveItem  this=ScoreScreen  sig=csp ====
int __thiscall ScoreScreen::RemoveItem(ScoreScreen *this, int a2, int a3, char a4, char a5, int a6)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  char *v13; // ebx
  int v14; // ecx
  ScoreScreen *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  DeleteAndZero v25; // [esp+10h] [ebp-10h] BYREF

  v7 = *((_DWORD *)this + 244); /*0x7712d5*/
  v8 = v7 - 1; /*0x7712d7*/
  if ( v7 > *((_DWORD *)this + 239) ) /*0x7712da*/
  {
    do /*0x77131c*/
    {
      v9 = *((_DWORD *)this + 244); /*0x7712dc*/
      if ( v8 < v9 ) /*0x7712e4*/
      {
        v10 = v9 - 1; /*0x7712e6*/
        v11 = v8; /*0x7712e7*/
        for ( *((_DWORD *)this + 244) = v10; v11 < *((_DWORD *)this + 244); ++v11 ) /*0x7712f1*/
          String::Reassign( /*0x771301*/
            (String *)(*((_DWORD *)this + 241) + 4 * v11),
            (const char **)(*((_DWORD *)this + 241) + 4 * v11 + 4));
      }
      v12 = v8--; /*0x771317*/
    }
    while ( v12 > *((_DWORD *)this + 239) ); /*0x77131c*/
  }
  if ( !*((_DWORD *)this + 239) ) /*0x77131e*/
    *((_BYTE *)this + 952) = 1; /*0x771328*/
  unknown_libname_73(&v25); /*0x771333*/
  v13 = &this->__pad_0[148 * a2 + 48 * a3]; /*0x771352*/
  if ( Map_Remove(*(_DWORD *)this->__pad_0, (int)(v13 + 8), (void **)&v25) )
  {
    if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77136a*/
    {
      *((_DWORD *)this + 235) = Timer::GetTicks(); /*0x771386*/
      *((_DWORD *)this + 236) = v25.DeleteAndZero_field_0x08; /*0x771390*/
      *((_DWORD *)this + 237) = a6; /*0x771393*/
    }
    v14 = *((_DWORD *)this + 242); /*0x771396*/
    v15 = this + 24; /*0x7713a2*/
    if ( *((_DWORD *)this + 244) < v14 /*0x7713c7*/
      || (*((_BYTE *)this + 973) || !v14)
      && (v16 = *((_DWORD *)this + 245), v16 > 0)
      && (*(unsigned __int8 (__thiscall **)(ScoreScreen *, int, _DWORD))(*(_DWORD *)v15->__pad_0 + 8))(
           this + 24,
           v14 + v16,
           0) )
    {
      v17 = *((_DWORD *)this + 244); /*0x7713ce*/
      *((_DWORD *)this + 244) = v17 + 1; /*0x7713d9*/
      String::Reassign((String *)(*((_DWORD *)this + 241) + 4 * v17), (const char **)&v25); /*0x7713e2*/
    }
    if ( a5 ) /*0x7713ed*/
      ++*((_DWORD *)this + 239); /*0x7713ef*/
    if ( a4 )
    {
      v18 = *(_DWORD *)this->__pad_0; /*0x771401*/
      DeleteAndZero::Alt2(&v25); /*0x771407*/
      v19 = *((_DWORD *)v13 + 12); /*0x77140c*/
      if ( v19 > 0 )
      {
        v20 = v19 == 1 ? 0 : Random::Range(&Randomizer_Global, 0, v19 - 1);
        if ( Map_Remove_770CE0(v18, *(_DWORD *)(*((_DWORD *)v13 + 9) + 4 * v20), (char **)&v25) ) /*0x77143b*/
        {
          v21 = *((_DWORD *)this + 242); /*0x771444*/
          if ( *((_DWORD *)this + 244) < v21 /*0x771469*/
            || (*((_BYTE *)this + 973) || !v21)
            && (v22 = *((_DWORD *)this + 245), v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(ScoreScreen *, int, _DWORD))(*(_DWORD *)v15->__pad_0 + 8))(
                 this + 24,
                 v21 + v22,
                 0) )
          {
            v23 = *((_DWORD *)this + 244); /*0x771470*/
            *((_DWORD *)this + 244) = v23 + 1; /*0x77147b*/
            String::Reassign((String *)(*((_DWORD *)this + 241) + 4 * v23), (const char **)&v25); /*0x771484*/
          }
          if ( a5 ) /*0x77148f*/
            ++*((_DWORD *)this + 239); /*0x771491*/
        }
      }
    }
  }
  return DeleteAndZero((ObjectClass *)&v25); /*0x7714a0*/
}



// ==== 0x007714B0  ObjectClass::TerritorySelectWDT_Delete  this=ObjectClass  sig=csp ====
void __thiscall TerritorySelectWDT_Delete(TechnoClass *this, int a2, char a3, int a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int ptr_0; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  DeleteAndZero v17; // [esp+Ch] [ebp-10h] BYREF

  v5 = *(_DWORD *)this->isUseless; /*0x7714c4*/
  v6 = v5 - 1; /*0x7714c6*/
  if ( v5 > this->targetLaserTimer[0] ) /*0x7714c9*/
  {
    do /*0x77150b*/
    {
      v7 = *(_DWORD *)this->isUseless; /*0x7714cb*/
      if ( v6 < v7 ) /*0x7714d3*/
      {
        v8 = v7 - 1; /*0x7714d5*/
        v9 = v6; /*0x7714d6*/
        for ( *(_DWORD *)this->isUseless = v8; v9 < *(_DWORD *)this->isUseless; ++v9 ) /*0x7714e0*/
          String::Reassign( /*0x7714f0*/
            (String *)(this->targetLaserTimer[2] + 4 * v9),
            (const char **)(this->targetLaserTimer[2] + 4 * v9 + 4));
      }
      v10 = v6--; /*0x771506*/
    }
    while ( v10 > this->targetLaserTimer[0] ); /*0x77150b*/
  }
  if ( !this->targetLaserTimer[0] ) /*0x77150d*/
    LOBYTE(this->currentBurstIndex) = 1; /*0x771517*/
  unknown_libname_73(&v17); /*0x771522*/
  ptr_0 = this->ptr_0; /*0x77152b*/
  DeleteAndZero::Alt2(&v17); /*0x77153b*/
  v12 = this->primaryFacing[6 * a2 + 1]; /*0x771540*/
  if ( v12 > 0 )
  {
    v13 = v12 == 1 ? 0 : Random::Range(&Randomizer_Global, 0, v12 - 1);
    if ( Map_Remove_770CE0(ptr_0, *(_DWORD *)(this->barrelFacing[6 * a2 + 4] + 4 * v13), (char **)&v17) ) /*0x77156f*/
    {
      if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77157c*/
      {
        this->secondaryFacing[3] = Timer::GetTicks(); /*0x771598*/
        this->secondaryFacing[4] = v17.DeleteAndZero_field_0x08; /*0x7715a2*/
        this->secondaryFacing[5] = a4; /*0x7715a5*/
      }
      v14 = *(_DWORD *)this->unknown_short_3C8; /*0x7715a8*/
      if ( *(_DWORD *)this->isUseless < v14 /*0x7715d9*/
        || (this->isSinking[0] || !v14)
        && (v15 = *(_DWORD *)this->isALoaner, v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->targetLaserTimer[1] + 8))(
             &this->targetLaserTimer[1],
             v14 + v15,
             0) )
      {
        v16 = *(_DWORD *)this->isUseless; /*0x7715e0*/
        *(_DWORD *)this->isUseless = v16 + 1; /*0x7715eb*/
        String::Reassign((String *)(this->targetLaserTimer[2] + 4 * v16), (const char **)&v17); /*0x7715f4*/
      }
      if ( a3 ) /*0x7715ff*/
        ++this->targetLaserTimer[0]; /*0x771601*/
    }
  }
  DeleteAndZero((ObjectClass *)&v17); /*0x77160b*/
}



// ==== 0x00771620  AudioQueue::Update  this=AudioQueue  sig=csp ====
void __thiscall AudioQueue::Update(AudioQueue *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  char *v8; // eax
  int v9; // eax

  v2 = *((_DWORD *)this + 237); /*0x77162a*/
  if ( *((_DWORD *)this + 235) == -1 ) /*0x771633*/
  {
LABEL_4:
    if ( v2 ) /*0x77164e*/
      return; /*0x77164e*/
    goto LABEL_5; /*0x77164e*/
  }
  v3 = Timer::GetTicks() - *((_DWORD *)this + 235); /*0x771640*/
  if ( v3 < v2 ) /*0x771648*/
  {
    v2 -= v3; /*0x77164a*/
    goto LABEL_4; /*0x77164a*/
  }
LABEL_5:
  if ( *((int *)this + 244) > 0 && !(unsigned __int8)Audio::IsPlaying() ) /*0x771662*/
  {
    if ( !*((_BYTE *)this + 952) ) /*0x77166f*/
    {
      v4 = *((_DWORD *)this + 244); /*0x771679*/
      if ( v4 > 0 ) /*0x771681*/
      {
        v5 = v4 - 1; /*0x771683*/
        v6 = 0; /*0x771684*/
        for ( *((_DWORD *)this + 244) = v5; v6 < *((_DWORD *)this + 244); ++v6 ) /*0x77168e*/
          String::Reassign( /*0x77169e*/
            (String *)(*((_DWORD *)this + 241) + 4 * v6),
            (const char **)(*((_DWORD *)this + 241) + 4 * v6 + 4));
      }
      v7 = *((_DWORD *)this + 239); /*0x7716ae*/
      if ( v7 > 0 ) /*0x7716b6*/
        *((_DWORD *)this + 239) = v7 - 1; /*0x7716b9*/
    }
    if ( *((int *)this + 244) <= 0 ) /*0x7716c7*/
    {
      *((_DWORD *)this + 239) = 0; /*0x7716f1*/
      *((_BYTE *)this + 952) = 1; /*0x7716fb*/
    }
    else
    {
      v8 = String::GetOrEmpty(*((String **)this + 241)); /*0x7716d1*/
      v9 = VocClass::FindByName((VocClass *)v8); /*0x7716d8*/
      UpdateThemeManager(v9, -1, -1); /*0x7716e2*/
      *((_BYTE *)this + 952) = 0; /*0x7716e7*/
    }
  }
}



// ==== 0x00771710  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_771710(TechnoClass *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int result; // eax

  v2 = *(_DWORD *)this->isUseless; /*0x771720*/
  v3 = v2 - 1; /*0x771722*/
  if ( v2 > this->targetLaserTimer[0] ) /*0x771725*/
  {
    do /*0x771768*/
    {
      v4 = *(_DWORD *)this->isUseless; /*0x771728*/
      if ( v3 < v4 ) /*0x771730*/
      {
        v5 = v4 - 1; /*0x771732*/
        v6 = v3; /*0x771733*/
        for ( *(_DWORD *)this->isUseless = v5; v6 < *(_DWORD *)this->isUseless; ++v6 ) /*0x77173d*/
          String::Reassign( /*0x77174d*/
            (String *)(this->targetLaserTimer[2] + 4 * v6),
            (const char **)(this->targetLaserTimer[2] + 4 * v6 + 4));
      }
      v7 = v3--; /*0x771763*/
    }
    while ( v7 > this->targetLaserTimer[0] ); /*0x771768*/
  }
  result = this->targetLaserTimer[0]; /*0x77176b*/
  if ( !result ) /*0x771773*/
    LOBYTE(this->currentBurstIndex) = 1; /*0x771775*/
  return result; /*0x77177c*/
}



// ==== 0x00771780  nullsub_259  this=-  sig=ida-proto ====
void nullsub_259()
{
  ; /*0x771780*/
}



// ==== 0x00771790  nullsub_260  this=-  sig=ida-proto ====
void nullsub_260()
{
  ; /*0x771790*/
}



// ==== 0x007717A0  ObjectClass::method_7717A0  this=ObjectClass  sig=csp ====
DWORD __thiscall sub_7717A0(TechnoClass *this)
{
  DWORD result; // eax
  int *v3; // esi
  int v4; // [esp+8h] [ebp-8h]

  if ( *(int *)this->isUseless > 0 ) /*0x7717ae*/
  {
    StopThemeClass(1); /*0x7717b2*/
    (*(void (__thiscall **)(int *))(this->targetLaserTimer[1] + 12))(&this->targetLaserTimer[1]); /*0x7717c3*/
  }
  result = Timer::GetTicks(); /*0x7717ca*/
  v3 = &this->secondaryFacing[3]; /*0x7717d5*/
  *v3 = result; /*0x7717db*/
  v3[1] = v4; /*0x7717dd*/
  v3[2] = 0; /*0x7717e0*/
  return result; /*0x7717e3*/
}



// ==== 0x007717F0  j_Audio_IsPlaying  this=ScoreScreen  sig=ida-proto ====
// attributes: thunk
int j_Audio_IsPlaying()
{
  return Audio::IsPlaying();
}



// ==== 0x00771800  ObjectClass::ConstructWDTSelection_Create  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_771800(ObjectClass *this)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = __2_YAPAXI_Z(0x20u); /*0x771807*/
  v3 = (_DWORD *)v2; /*0x77180c*/
  if ( !v2 ) /*0x771815*/
    return 0; /*0x77183f*/
  *(_DWORD *)(v2 + 4) = 0; /*0x77181a*/
  *(_DWORD *)(v2 + 8) = 0; /*0x77181d*/
  *(_BYTE *)(v2 + 12) = 0; /*0x771820*/
  *(_DWORD *)(v2 + 16) = Timer::GetTicks(); /*0x771828*/
  v3[6] = 0; /*0x77182b*/
  v3[7] = this; /*0x77182e*/
  *v3 = &WorldDominationTour::Voices::Anim::`vftable'; /*0x771831*/
  return v3; /*0x771839*/
}



// ==== 0x00771850  Anim@Voices@WorldDominationTour::method  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__thiscall sub_771850(_DWORD *this, int a2)
{
  this->q004 = 0; /*0x771859*/
  this->q008 = 0; /*0x77185c*/
  this->q030 = 0; /*0x77185f*/
  this->q040 = Timer::GetTicks(); /*0x771867*/
  this->q018 = 0; /*0x77186e*/
  this->q01C = a2; /*0x771871*/
  *this = &WorldDominationTour::Voices::Anim::`vftable'; /*0x771874*/
  return this; /*0x77187c*/
}



// ==== 0x00771890  Anim@Voices@WorldDominationTour::method  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall sub_771890(_DWORD *this)
{
  *this = &WorldDominationTour::Voices::Anim::`vftable'; /*0x771890*/
  VtableStub::5CB6C0(this); /*0x771896*/
}



// ==== 0x007718A0  Anim_Voices_WorldDominationTour::AddRef  this=Anim@Voices@WorldDominationTour  sig=csp ====
char __thiscall Territory_WorldDominationTour_8::AddRef(Anim_Voices_WorldDominationTour *this, char a2)
{
  int Ticks; // eax
  int v3; // esi
  int *v4; // esi
  int v6; // [esp+4h] [ebp-8h]

  LOBYTE(Ticks) = a2; /*0x7718a0*/
  this->__pad_C[0] = a2; /*0x7718a9*/
  if ( !a2 ) /*0x7718ac*/
  {
    v3 = this->field_1C; /*0x7718af*/
    if ( *(int *)(v3 + 976) > 0 ) /*0x7718ba*/
    {
      StopThemeClass(1); /*0x7718be*/
      (*(void (__thiscall **)(int))(*(_DWORD *)(v3 + 960) + 12))(v3 + 960); /*0x7718cf*/
    }
    Ticks = Timer::GetTicks(); /*0x7718d6*/
    v4 = (int *)(v3 + 940); /*0x7718e1*/
    *v4 = Ticks; /*0x7718e7*/
    v4[1] = v6; /*0x7718e9*/
    v4[2] = 0; /*0x7718ec*/
  }
  return Ticks; /*0x7718f0*/
}



// ==== 0x00771900  Anim_Voices_WorldDominationTour::Release  this=Anim@Voices@WorldDominationTour  sig=csp ====
signed int __thiscall Territory_WorldDominationTour_8::Release(Anim_Voices_WorldDominationTour *this)
{
  signed int result; // eax
  int v3; // edi

  result = *(_DWORD *)&this->__pad_C[4]; /*0x771903*/
  if ( result != -1 ) /*0x771909*/
  {
    v3 = this->field_18; /*0x77190c*/
    result = Timer::GetTicks() - *(_DWORD *)&this->__pad_C[4]; /*0x77191c*/
    if ( result >= v3 ) /*0x771921*/
    {
      this->field_18 = 0; /*0x771934*/
      *(_DWORD *)&this->__pad_C[4] = -1; /*0x771937*/
    }
    else
    {
      *(_DWORD *)&this->__pad_C[4] = -1; /*0x771925*/
      this->field_18 = v3 - result; /*0x77192c*/
    }
  }
  return result; /*0x771930*/
}



// ==== 0x00771950  Anim_Voices_WorldDominationTour::ddtor  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8::ddtor(Anim_Voices_WorldDominationTour *this)
{
  if ( *(_DWORD *)&this->__pad_C[4] == -1 ) /*0x771957*/
    *(_DWORD *)&this->__pad_C[4] = Timer::GetTicks(); /*0x771961*/
}



// ==== 0x00771970  Anim_Voices_WorldDominationTour::Read  this=Anim@Voices@WorldDominationTour  sig=csp ====
char __thiscall Territory_WorldDominationTour_8::Read(Anim_Voices_WorldDominationTour *this, int a2, int a3)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x771973*/
  return 0; /*0x77197a*/
}



// ==== 0x00771980  Anim_Voices_WorldDominationTour::Write  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8::Write(Anim_Voices_WorldDominationTour *this, int a2, int a3)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x771983*/
}



// ==== 0x00771990  Anim_Voices_WorldDominationTour::Seek  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__stdcall Territory_WorldDominationTour_8::Seek(Anim_Voices_WorldDominationTour *this)
{
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  *(_DWORD *)this->__pad_0 = v2; /*0x77199d*/
  this->field_4 = v3; /*0x7719a3*/
  this->field_8 = v4; /*0x7719aa*/
  *(_DWORD *)this->__pad_C = v5; /*0x7719b1*/
  return this->__pad_0; /*0x7719b4*/
}



// ==== 0x007719C0  Anim_Voices_WorldDominationTour::Open  this=Anim@Voices@WorldDominationTour  sig=csp ====
BOOL Territory_WorldDominationTour_8::Open(Anim_Voices_WorldDominationTour *this)
{
  return (unsigned __int8)Audio::IsPlaying() == 0; /*0x7719ca*/
}



// ==== 0x007719D0  Anim_Voices_WorldDominationTour::Close  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8::Close(Anim_Voices_WorldDominationTour *this, int a2)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x7719d3*/
}



// ==== 0x007719E0  DynamicVectorClass_uint::sub_7719E0  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall sub_7719E0(DynamicVectorClass_uint *this)
{
  this->IsInitialized = 1; /*0x7719e2*/
  this->Items = 0; /*0x7719e6*/
  this->Capacity = 0; /*0x7719e9*/
  this->IsAllocated = 0; /*0x7719ec*/
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<unsigned int>::`vftable'; /*0x7719ef*/
  this->CapacityIncrement[0] = 10; /*0x7719f5*/
  this->Count = 0; /*0x7719fc*/
  return 0; /*0x7719ff*/
}



// ==== 0x00771A00  VectorClass::sub_771A00  this=VectorClass  sig=csp ====
void __thiscall sub_771A00(VectorClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x771a06*/
  this->ptr_0 = &VectorClass<unsigned int>::`vftable'; /*0x771a09*/
  if ( Items && this->IsAllocated ) /*0x771a13*/
  {
    __3_YAXPAX_Z(Items); /*0x771a19*/
    this->Items = 0; /*0x771a21*/
  }
  this->IsAllocated = 0; /*0x771a24*/
  this->Capacity = 0; /*0x771a27*/
}



// ==== 0x00771A30  Anim_Voices_WorldDominationTour::QueryInterface  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__thiscall Territory_WorldDominationTour_8::QueryInterface(Anim_Voices_WorldDominationTour *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::Voices::Anim::`vftable'; /*0x771a33*/
  VtableStub::5CB6C0(this); /*0x771a39*/
  if ( (a2 & 1) != 0 ) /*0x771a43*/
    __3_YAXPAX_Z(this); /*0x771a46*/
  return this->__pad_0; /*0x771a50*/
}



// ==== 0x00771A60  sub_771A60  this=-  sig=ida-proto ====
void sub_771A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x771a6c*/
  dbl_B72C30 = Math::Sqrt(v0 + v0); /*0x771a7e*/
}



// ==== 0x00771A90  sub_771A90  this=-  sig=ida-proto ====
void sub_771A90()
{
  dbl_B72C80 = dbl_B72C30 / 60.0; /*0x771a9c*/
}



// ==== 0x00771AB0  sub_771AB0  this=-  sig=ida-proto ====
void sub_771AB0()
{
  dbl_B72C68 = 1.0 / dbl_B72C80; /*0x771abc*/
}



// ==== 0x00771AD0  sub_771AD0  this=-  sig=ida-proto ====
void sub_771AD0()
{
  dbl_B72C60 = 0.0174532925199433 * 45.0; /*0x771adc*/
}



// ==== 0x00771AF0  sub_771AF0  this=-  sig=ida-proto ====
void sub_771AF0()
{
  dbl_B72C38 = 0.0174532925199433 * 60.0; /*0x771afc*/
}



// ==== 0x00771B10  sub_771B10  this=-  sig=ida-proto ====
void sub_771B10()
{
  dbl_B72C10 = 0.0174532925199433 * 90.0; /*0x771b1c*/
}



// ==== 0x00771B30  sub_771B30  this=-  sig=ida-proto ====
__int64 sub_771B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72C10 - dbl_B72C38); /*0x771b42*/
  result = Math::RoundToInt(v0 * dbl_B72C30 * 0.5); /*0x771b56*/
  dword_B72C88 = result; /*0x771b5b*/
  return result; /*0x771b60*/
}



// ==== 0x00771B70  sub_771B70  this=-  sig=ida-proto ====
void sub_771B70()
{
  dbl_B72C40 = Math::ArcTan((double)dword_B72C88 * 0.00390625); /*0x771b87*/
}



// ==== 0x00771BA0  sub_771BA0  this=-  sig=ida-proto ====
void sub_771BA0()
{
  dbl_B72C58 = Math::ArcTan((double)(2 * dword_B72C88) / dbl_B72C30); /*0x771bc2*/
}



// ==== 0x00771BD0  sub_771BD0  this=-  sig=ida-proto ====
__int64 sub_771BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72C88) + 0.5); /*0x771beb*/
  dword_B72C7C = result; /*0x771bf0*/
  return result; /*0x771bf6*/
}



// ==== 0x00771C00  sub_771C00  this=-  sig=ida-proto ====
int sub_771C00()
{
  word_B72C28 = 0; /*0x771c02*/
  word_B72C2A = 0; /*0x771c08*/
  return 0; /*0x771c0e*/
}



// ==== 0x00771C10  sub_771C10  this=-  sig=ida-proto ====
int sub_771C10()
{
  dword_B72C48 = 0; /*0x771c12*/
  dword_B72C4C = 0; /*0x771c17*/
  dword_B72C50 = 0; /*0x771c1c*/
  return 0; /*0x771c21*/
}



// ==== 0x00771C30  sub_771C30  this=-  sig=ida-proto ====
int sub_771C30()
{
  dword_B72C78 = 0; /*0x771c35*/
  dword_B72C70 = 128; /*0x771c3f*/
  dword_B72C74 = 128; /*0x771c44*/
  return 128; /*0x771c49*/
}



// ==== 0x00771C50  sub_771C50  this=-  sig=ida-proto ====
int sub_771C50()
{
  dword_B72C18 = 0; /*0x771c52*/
  dword_B72C1C = 0; /*0x771c57*/
  dword_B72C20 = 0; /*0x771c5c*/
  dword_B72C24 = 0; /*0x771c61*/
  return 0; /*0x771c66*/
}



// ==== 0x00771C70  WeaponTypeClass::Constructor  this=WeaponTypeClass  sig=csp ====
_DWORD *__thiscall WeaponTypeClass::Constructor(WeaponTypeClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x771c7a*/
  this->AmbientDamage = 0; /*0x771c87*/
  this->Burst = 1; /*0x771c8d*/
  this->Projectile = 0; /*0x771c97*/
  this->Damage = 0; /*0x771c9d*/
  this->Speed = 0; /*0x771ca3*/
  this->Warhead = 0; /*0x771ca9*/
  this->ROF = 0; /*0x771caf*/
  this->Range = 0; /*0x771cb6*/
  this->MinimumRange = 0; /*0x771cbf*/
  VectorClass::Construct((VectorClass *)this->Report, 0, 0); /*0x771cc5*/
  this->Report[5] = 10; /*0x771cca*/
  this->Report[4] = 0; /*0x771cd1*/
  this->Report[0] = (int)&TypeList<int>::`vftable'; /*0x771cd4*/
  VectorClass::Construct((VectorClass *)this->DownReport, 0, 0); /*0x771ce4*/
  this->DownReport[5] = 10; /*0x771ce9*/
  this->DownReport[4] = 0; /*0x771cf0*/
  this->DownReport[0] = (int)&TypeList<int>::`vftable'; /*0x771cf3*/
  AnimTypeVector::Constructor((AnimTypeVector *)this->Anim, 0, 0); /*0x771d03*/
  this->Anim[5] = 10; /*0x771d08*/
  this->Anim[4] = 0; /*0x771d0f*/
  this->Anim[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x771d12*/
  this->OccupantAnim = 0; /*0x771d18*/
  this->AssaultAnim = 0; /*0x771d1e*/
  this->OpenToppedAnim = 0; /*0x771d24*/
  this->AttachedParticleSystem = 0; /*0x771d2a*/
  this->LaserInnerColor[0] = 0; /*0x771d30*/
  this->LaserInnerColor[1] = 0; /*0x771d36*/
  this->LaserInnerColor[2] = 0; /*0x771d3c*/
  this->LaserOuterColor[0] = 0; /*0x771d42*/
  this->LaserOuterColor[1] = 0; /*0x771d48*/
  this->LaserOuterColor[2] = 0; /*0x771d4e*/
  this->LaserOuterSpread[0] = 0; /*0x771d54*/
  this->LaserOuterSpread[1] = 0; /*0x771d5a*/
  this->LaserOuterSpread[2] = 0; /*0x771d60*/
  this->UseFireParticles = 0; /*0x771d66*/
  this->UseSparkParticles = 0; /*0x771d6c*/
  this->OmniFire = 0; /*0x771d72*/
  this->DistributedWeaponFire = 0; /*0x771d78*/
  this->IsRailgun = 0; /*0x771d7e*/
  this->Lobber = 0; /*0x771d84*/
  this->Bright = 0; /*0x771d8a*/
  this->IsSonic = 0; /*0x771d90*/
  this->Spawner = 0; /*0x771d96*/
  this->LimboLaunch = 0; /*0x771d9c*/
  this->DecloakToFire = 1; /*0x771da2*/
  this->CellRangefinding = 0; /*0x771da9*/
  this->FireOnce = 0; /*0x771daf*/
  this->NeverUse = 0; /*0x771db5*/
  this->RevealOnFire = 1; /*0x771dbb*/
  this->TerrainFire = 0; /*0x771dc2*/
  this->SabotageCursor = 0; /*0x771dc8*/
  this->MigAttackCursor = 0; /*0x771dce*/
  this->DisguiseFireOnly = 0; /*0x771dd4*/
  this->DisguiseFakeBlinkTime = 0; /*0x771dda*/
  this->InfiniteMindControl = 0; /*0x771de0*/
  this->FireWhileMoving = 1; /*0x771de6*/
  this->DrainWeapon = 0; /*0x771ded*/
  this->FireInTransport = 1; /*0x771df3*/
  this->Suicide = 0; /*0x771dfa*/
  this->TurboBoost = 0; /*0x771e00*/
  this->Supress = 0; /*0x771e06*/
  this->Camera = 0; /*0x771e0f*/
  this->Charges = 0; /*0x771e16*/
  this->IsLaser = 0; /*0x771e1c*/
  this->DiskLaser = 0; /*0x771e22*/
  this->IsLine = 0; /*0x771e28*/
  this->IsBigLaser = 0; /*0x771e2e*/
  this->IsHouseColor = 0; /*0x771e34*/
  this->LaserDuration = 10; /*0x771e3a*/
  this->IonSensitive = 0; /*0x771e41*/
  this->AreaFire = 0; /*0x771e47*/
  this->IsElectricBolt = 0; /*0x771e4d*/
  this->DrawBoltAsLaser = 0; /*0x771e53*/
  this->IsAlternateColor = 0; /*0x771e59*/
  this->IsRadBeam = 0; /*0x771e5f*/
  this->IsRadEruption = 0; /*0x771e65*/
  this->RadLevel = 0; /*0x771e6b*/
  this->IsMagBeam = 0; /*0x771e71*/
  this->AbstractTypeClass = &WeaponTypeClass::`vftable'; /*0x771e77*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771e7d*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771e83*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771e8a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x771e91*/
  if ( g_WeaponTypePool < dword_887570 /*0x771eca*/
    || (byte_887575 || !dword_887570)
    && dword_88757C > 0
    && ((unsigned __int8 (__thiscall *)(WeaponTypeClass **, int, _DWORD))WeaponTypeClass_Array->?)(
         &WeaponTypeClass_Array,
         dword_887570 + dword_88757C,
         0) )
  {
    v3 = g_WeaponTypePool++; /*0x771ed7*/
    *((_DWORD *)g_WeaponTypeConfig + v3) = this; /*0x771ee6*/
  }
  return &this->AbstractTypeClass; /*0x771eeb*/
}



// ==== 0x00771F00  WeaponTypeClass::loadWeaponProperties  this=WeaponTypeClass  sig=csp ====
_DWORD *__thiscall WeaponTypeClass::loadWeaponProperties(WeaponTypeClass *this, int a2)
{
  AbstractTypeClass::Init((int)this, a2); /*0x771f08*/
  this->Report[0] = (int)&TypeList<int>::`vftable'; /*0x771f12*/
  this->DownReport[0] = (int)&TypeList<int>::`vftable'; /*0x771f18*/
  this->Anim[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x771f1e*/
  this->AbstractTypeClass = &WeaponTypeClass::`vftable'; /*0x771f28*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f2e*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f35*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f3c*/
  return &this->AbstractTypeClass; /*0x771f45*/
}



// ==== 0x00771F50  WeaponTypeClass::Destructor  this=WeaponTypeClass  sig=csp ====
int __thiscall WeaponTypeClass::Destructor(WeaponTypeClass *this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  WeaponTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractTypeClass = &WeaponTypeClass::`vftable'; /*0x771f57*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f5d*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f64*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f6b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x771f72*/
  this->Projectile = 0; /*0x771f7d*/
  this->Warhead = 0; /*0x771f83*/
  v7 = this; /*0x771f95*/
  v2 = ((int (__thiscall *)(WeaponTypeClass **, WeaponTypeClass **))WeaponTypeClass_Array->?)( /*0x771f99*/
         &WeaponTypeClass_Array,
         &v7);
  if ( v2 != -1 && v2 < g_WeaponTypePool && v2 < --g_WeaponTypePool ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((_DWORD *)g_WeaponTypeConfig + v2 - 1) = *((_DWORD *)g_WeaponTypeConfig + v2); /*0x771fc0*/
    }
    while ( v2 < g_WeaponTypePool ); /*0x771fcc*/
  }
  v3 = (void *)this->Anim[1]; /*0x771fce*/
  this->Anim[0] = (int)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x771fd4*/
  if ( v3 && BYTE1(this->Anim[3]) ) /*0x771fe2*/
  {
    __3_YAXPAX_Z(v3); /*0x771feb*/
    this->Anim[1] = 0; /*0x771ff3*/
  }
  BYTE1(this->Anim[3]) = 0; /*0x771ff9*/
  this->Anim[2] = 0; /*0x771fff*/
  v4 = (void *)this->DownReport[1]; /*0x772005*/
  this->DownReport[0] = (int)&VectorClass<int>::`vftable'; /*0x77200b*/
  if ( v4 && BYTE1(this->DownReport[3]) ) /*0x772019*/
  {
    __3_YAXPAX_Z(v4); /*0x772022*/
    this->DownReport[1] = 0; /*0x77202a*/
  }
  BYTE1(this->DownReport[3]) = 0; /*0x772030*/
  this->DownReport[2] = 0; /*0x772036*/
  v5 = (void *)this->Report[1]; /*0x77203c*/
  this->Report[0] = (int)&VectorClass<int>::`vftable'; /*0x772042*/
  if ( v5 && BYTE1(this->Report[3]) ) /*0x772050*/
  {
    __3_YAXPAX_Z(v5); /*0x772059*/
    this->Report[1] = 0; /*0x772061*/
  }
  BYTE1(this->Report[3]) = 0; /*0x772069*/
  this->Report[2] = 0; /*0x77206f*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x77207a*/
}



// ==== 0x00772080  WeaponTypeClass::ReadINI  this=WeaponTypeClass  sig=csp ====
char __userpurge WarheadTypeClass::ReadINI@<al>(WeaponTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  _DWORD *v5; // eax
  unsigned __int8 *inited; // eax
  int v7; // eax
  int v8; // edx
  void *v9; // eax
  _DWORD *v10; // eax
  unsigned __int8 *v11; // eax
  int v12; // eax
  char *i; // eax
  int v14; // ecx
  int v15; // edx
  void *v16; // eax
  _DWORD *v17; // ebp
  _DWORD *v18; // eax
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  _DWORD *v21; // ebp
  _DWORD *v22; // eax
  char v23; // cl
  char Bool_Overwrite; // al
  char v25; // al
  char v26; // cl
  char v27; // al
  char v28; // al
  char v29; // cl
  char v30; // al
  char v31; // al
  char v32; // cl
  char v33; // al
  char v34; // al
  char v35; // cl
  char v36; // al
  int Coord; // eax
  int v38; // eax
  int v39; // eax
  char v40; // dl
  char Int_Overwrite; // al
  char v42; // cl
  char v43; // al
  char v44; // al
  char v45; // cl
  char v46; // al
  char v47; /... [22244 chars total]



// ==== 0x007729F0  WeaponTypeClass::CalculateSpeed  this=WeaponTypeClass  sig=csp ====
int __thiscall WeaponTypeClass::CalculateSpeed(WeaponTypeClass *this)
{
  int result; // eax
  double FiringDistance; // [esp+4h] [ebp-8h]

  result = (int)this->Projectile; /*0x7729f6*/
  if ( result && !*(_DWORD *)(result + 732) ) /*0x772a00*/
  {
    FiringDistance = (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816); /*0x772a1e*/
    if ( *(_BYTE *)(result + 661) ) /*0x772a16*/
      FiringDistance = RulesClass::GetFiringDistance(); /*0x772a29*/
    result = TechnoClass::ComputeScanRange((TechnoClass *)this->Range, FiringDistance); /*0x772a3d*/
    this->Speed = result; /*0x772a42*/
  }
  return result; /*0x772a48*/
}



// ==== 0x00772A50  ArmorType::LookupByName  this=ArmorType  sig=csp ====
int __thiscall ArmorType::LookupByName(ArmorType *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x772a57*/
    return 0; /*0x772a7c*/
  v2 = 0; /*0x772a59*/
  v3 = (char **)&off_7E5210; /*0x772a5b*/
  while ( _strcmpi(*v3, this->__pad_0) ) /*0x772a6e*/
  {
    ++v3; /*0x772a70*/
    ++v2; /*0x772a73*/
    if ( (int)v3 >= (int)&off_7E523C ) /*0x772a7a*/
      return 0; /*0x772a7a*/
  }
  return v2; /*0x772a7c*/
}



// ==== 0x00772A90  Building::GetRenderType  this=Building  sig=csp ====
int __thiscall Building::GetRenderType(Building *this)
{
  _BYTE *Building_field_0xA0; // ecx
  int result; // eax

  Building_field_0xA0 = this->Building_field_0xA0; /*0x772a90*/
  result = 0; /*0x772a96*/
  if ( Building_field_0xA0[676] ) /*0x772a98*/
    result = 4; /*0x772aa2*/
  if ( Building_field_0xA0[677] ) /*0x772aa7*/
    LOBYTE(result) = result | 0xB8; /*0x772ab1*/
  return result; /*0x772ab3*/
}



// ==== 0x00772AC0  InfantryClass::startPanic  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::startPanic(InfantryClass *this)
{
  int currentMission; // eax

  currentMission = this->?; /*0x772ac0*/
  return currentMission && *(_BYTE *)(currentMission + 324); /*0x772ad6*/
}



// ==== 0x00772AE0  WeaponTypeClass::ProcessPower  this=WeaponTypeClass  sig=csp ====
int __thiscall WeaponTypeClass::ProcessPower(WeaponTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BulletTypeClass *Projectile; // eax
  int v10; // eax
  WarheadTypeClass *Warhead; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x772ae9*/
  Power::TimerProcess(this->AmbientDamage); /*0x772af7*/
  LOBYTE(v3) = this->IsSonic; /*0x772afc*/
  Power::FlagProcess((Power *)a2, v3); /*0x772b05*/
  LOBYTE(v4) = this->TurboBoost; /*0x772b0a*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x772b13*/
  LOBYTE(v5) = this->Supress; /*0x772b18*/
  Power::FlagProcess((Power *)a2, v5); /*0x772b21*/
  LOBYTE(v6) = this->Camera; /*0x772b26*/
  Power::FlagProcess((Power *)a2, v6); /*0x772b2f*/
  LOBYTE(v7) = this->IsLaser; /*0x772b34*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x772b3d*/
  LOBYTE(v8) = this->IsHouseColor; /*0x772b42*/
  Power::FlagProcess((Power *)a2, v8); /*0x772b4b*/
  Power::TimerProcess(this->Burst); /*0x772b59*/
  Projectile = this->Projectile; /*0x772b5e*/
  if ( Projectile ) /*0x772b66*/
  {
    v10 = (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)&Projectile->ObjectTypeClass[4] + 16))(&Projectile->ObjectTypeClass[4]); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(this->Damage); /*0x772b83*/
  Power::TimerProcess(this->Speed); /*0x772b91*/
  Warhead = this->Warhead; /*0x772b96*/
  if ( Warhead ) /*0x772b9e*/
  {
    v12 = (*((int (__stdcall **)(void **))Warhead->WarheadTypeClass_field_0x4 + 4))(&Warhead->WarheadTypeClass_field_0x4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(this->ROF); /*0x772bbb*/
  Power::TimerProcess(this->Range); /*0x772bc9*/
  Power::TimerProcess(this->Report[4]); /*0x772bd7*/
  Power::TimerProcess(this->DownReport[4]); /*0x772be5*/
  Power::TimerProcess(this->Anim[4]); /*0x772bf3*/
  LOBYTE(v13) = this->UseFireParticles; /*0x772bf8*/
  v14 = Power::FlagProcess((Power *)a2, v13); /*0x772c01*/
  LOBYTE(v14) = this->Lobber; /*0x772c06*/
  Power::FlagProcess((Power *)a2, v14); /*0x772c0f*/
  LOBYTE(v15) = this->LaserDuration; /*0x772c14*/
  Power::FinalizeDrain((Power *)a2, v15); /*0x772c1d*/
  LOBYTE(v16) = this->IsBigLaser; /*0x772c22*/
  v17 = Power::FlagProcess((Power *)a2, v16); /*0x772c2b*/
  LOBYTE(v17) = this->IsRailgun; /*0x772c30*/
  Power::FlagProcess((Power *)a2, v17); /*0x772c39*/
  LOBYTE(v18) = this->Charges; /*0x772c3e*/
  Power::FlagProcess((Power *)a2, v18); /*0x772c47*/
  LOBYTE(v19) = this->Bright; /*0x772c4c*/
  v20 = Power::FlagProcess((Power *)a2, v19); /*0x772c55*/
  LOBYTE(v20) = this->UseSparkParticles; /*0x772c5a*/
  Power::FlagProcess((Power *)a2, v20); /*0x772c63*/
  LOBYTE(v21) = this->OmniFire; /*0x772c68*/
  Power::FlagProcess((Power *)a2, v21); /*0x772c71*/
  LOBYTE(v22) = this->DistributedWeaponFire; /*0x772c76*/
  return Power::FlagProcess((Power *)a2, v22); /*0x772c84*/
}



// ==== 0x00772C90  WeaponTypeClass::GetClassIdentifier  this=WeaponTypeClass  sig=csp ====
int __stdcall WeaponTypeClass::GetClassIdentifier(WeaponTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x772c96*/
    return -2147467261; /*0x772c98*/
  *a2 = -1613620790; /*0x772ca6*/
  a2[1] = 298979195; /*0x772cae*/
  a2[2] = 1610642049; /*0x772cb7*/
  a2[3] = unk_7E983C; /*0x772cc0*/
  return 0; /*0x772c9d*/
}



// ==== 0x00772CD0  WeaponTypeClass::SaveLoad_Prefix  this=WeaponTypeClass  sig=csp ====
int __userpurge WeaponTypeClass::SaveLoad_Prefix@<eax>(WeaponTypeClass *this, int *a2, int a3, int a4)
{
  int v4; // ebx
  WeaponTypeClass *v5; // edi
  int *Report; // ebp
  int *v7; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi

  v5 = this; /*0x772cd3*/
  Report = this->Report; /*0x772cdd*/
  (*(void (__thiscall **)(int *))(this->Report[0] + 12))(this->Report); /*0x772ce5*/
  (*(void (__thiscall **)(int *))(v5->DownReport[0] + 12))(v5->DownReport); /*0x772cf4*/
  v7 = a2; /*0x772cf7*/
  result = AbstractClass::SaveLoad_Prefix_0(v5, (int)a2); /*0x772cfd*/
  if ( result >= 0 ) /*0x772d04*/
  {
    if ( v5 ) /*0x772d0c*/
      WeaponTypeClass::loadWeaponProperties(v5, (int)&this); /*0x772d15*/
    if ( v5 != (WeaponTypeClass *)-244 ) /*0x772d23*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->Anim, 0, 0); /*0x772d2b*/
      v5->Anim[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x772d30*/
    }
    (*(void (__stdcall **)(int *, WeaponTypeClass **, int, _DWORD, int))(*v7 + 12))(v7, &this, 4, 0, v4); /*0x772d42*/
    for ( i = 0; i < (int)a2; ++i ) /*0x772d4d*/
    {
      (*(void (__stdcall **)(int *, int *, int, _DWORD))(*v7 + 12))(v7, &a3, 4, 0); /*0x772d5b*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->Anim, &a3); /*0x772d69*/
    }
    if ( Report ) /*0x772d77*/
    {
      DynamicVectorClass::Construct((DynamicVectorClass *)Report, 0, 0); /*0x772d7f*/
      *Report = (int)&TypeList<int>::`vftable'; /*0x772d84*/
    }
    (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v7 + 12))(v7, &a2, 4, 0); /*0x772d97*/
    for ( j = 0; j < (int)a2; ++j ) /*0x772da2*/
    {
      (*(void (__stdcall **)(int *, int *, int, _DWORD))(*v7 + 12))(v7, &a3, 4, 0); /*0x772db0*/
      DynamicVector::Add_Alt((DynamicVector *)Report, &a3); /*0x772dba*/
    }
    if ( v5 != (WeaponTypeClass *)-216 ) /*0x772dce*/
      TypeList::Construct((TypeList *)v5->DownReport); /*0x772dd2*/
    (*(void (__stdcall **)(int *, int **, int))(*v7 + 12))(v7, &a2, 4); /*0x772de3*/
    for ( k = 0; k < (int)this; ++k ) /*0x772dee*/
    {
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v7 + 12))(v7, &a2, 4, 0); /*0x772dfc*/
      DynamicVector::Add_Alt((DynamicVector *)v5->DownReport, &a2); /*0x772e06*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->Warhead); /*0x772e1e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->Projectile); /*0x772e2f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->AttachedParticleSystem); /*0x772e40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->AssaultAnim); /*0x772e51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->OccupantAnim); /*0x772e62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->OpenToppedAnim); /*0x772e73*/
    for ( m = 0; m < v5->Anim[4]; ++m ) /*0x772e83*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->Anim[1] + 4 * m)); /*0x772e94*/
    return 0; /*0x772ea4*/
  }
  return result; /*0x772ea6*/
}



// ==== 0x00772EB0  WeaponTypeClass::SaveLoad_Prefix_0  this=WeaponTypeClass  sig=csp ====
int __userpurge WeaponTypeClass::SaveLoad_Prefix_0@<eax>(WeaponTypeClass *this, int *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, (int)a3); /*0x772ec1*/
  if ( result >= 0 ) /*0x772ec8*/
  {
    v7 = *a2; /*0x772ed4*/
    a3 = (int *)this->Anim[4]; /*0x772ee1*/
    (*(void (__stdcall **)(int *, int **, int, _DWORD, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x772ee5*/
    for ( i = 0; i < a4; ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Anim[1] + 4 * i, 4, 0); /*0x772f03*/
    v9 = *a2; /*0x772f13*/
    a4 = this->Report[4]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x772f23*/
    for ( j = 0; j < a4; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Report[1] + 4 * j, 4, 0); /*0x772f41*/
    v11 = *a2; /*0x772f51*/
    a4 = this->DownReport[4]; /*0x772f5d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x772f61*/
    for ( k = 0; k < (int)a3; ++k ) /*0x772f6c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->DownReport[1] + 4 * k, 4, 0); /*0x772f7f*/
    return 0; /*0x772f89*/
  }
  return result; /*0x772f8c*/
}



// ==== 0x00772FA0  InfantryTypeClass::Find  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall InfantryTypeClass::Find(char *Source)
{
  int v2; // esi
  WeaponTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x772fbc*/
    return 0; /*0x77301f*/
  v2 = 0; /*0x772fcd*/
  if ( g_WeaponTypePool <= 0 ) /*0x772fd1*/
  {
LABEL_6:
    v3 = (WeaponTypeClass *)__2_YAPAXI_Z(0x160u); /*0x772ff6*/
    if ( v3 ) /*0x773005*/
      return WeaponTypeClass::Constructor(v3, Source); /*0x773011*/
    return 0; /*0x773005*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)g_WeaponTypeConfig + v2) + 36), Source) ) /*0x772fea*/
  {
    if ( ++v2 >= g_WeaponTypePool ) /*0x772ff4*/
      goto LABEL_6; /*0x772ff4*/
  }
  return (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + v2); /*0x77300f*/
}



// ==== 0x00773030  SuperWeaponClass::FindByName  this=SuperWeaponClass  sig=csp ====
int __thiscall SuperWeaponClass::FindByName(SuperWeaponClass *this)
{
  int v1; // esi

  v1 = 0; /*0x773036*/
  if ( g_WeaponTypePool <= 0 ) /*0x77303d*/
    return -1; /*0x773062*/
  while ( _strcmpi((char *)(*((_DWORD *)g_WeaponTypeConfig + v1) + 36), this->__pad_0) ) /*0x773056*/
  {
    if ( ++v1 >= g_WeaponTypePool ) /*0x773060*/
      return -1; /*0x773060*/
  }
  return v1; /*0x773062*/
}



// ==== 0x00773070  TechnoClass::GetWeaponRange  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetWeaponRange(TechnoClass *this, void *a2)
{
  int v2; // eax
  double FiringDistance; // st7

  v2 = this->?[1]; /*0x773070*/
  if ( !v2 || *(_DWORD *)(v2 + 732) ) /*0x77307d*/
    return (int)this->?; /*0x7730c0*/
  if ( *(_BYTE *)(v2 + 661) ) /*0x773087*/
    FiringDistance = RulesClass::GetFiringDistance(); /*0x773091*/
  else
    FiringDistance = (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816); /*0x77309d*/
  return TechnoClass::ComputeScanRange((TechnoClass *)a2, FiringDistance); /*0x7730ba*/
}



// ==== 0x007730D0  WeaponTypeClass::GetObjectSize  this=WeaponTypeClass  sig=csp ====
int WeaponTypeClass::GetObjectSize(WeaponTypeClass *this)
{
  return 352; /*0x7730d5*/
}



// ==== 0x007730E0  WeaponTypeClass::GetTypeIdentifier  this=WeaponTypeClass  sig=csp ====
int WeaponTypeClass::GetTypeIdentifier(WeaponTypeClass *this)
{
  return 49; /*0x7730e5*/
}



// ==== 0x007730F0  WeaponTypeClass::ddtor  this=WeaponTypeClass  sig=csp ====
WeaponTypeClass *WeaponTypeClass::ddtor(WeaponTypeClass *this, char a2)
{
  AbstractClass *v2; // ecx
  AbstractClass *v3; // esi
  int v4; // eax
  void *NeedsSaveOrLink; // eax
  void *ptr_4; // eax
  void *ptr_C; // eax
  AbstractClass *v9; // [esp+8h] [ebp-4h] BYREF

  v3 = v2; /*0x7730f3*/
  v2->ptr_0 = &WeaponTypeClass::`vftable'; /*0x7730f7*/
  v2->ptr_4 = &WeaponTypeClass::`vftable'; /*0x7730fd*/
  v2->ptr_8 = &WeaponTypeClass::`vftable'; /*0x773104*/
  v2->ptr_C = &WeaponTypeClass::`vftable'; /*0x77310b*/
  AbstractClass::AnnounceExpiredPointer(v2, 1); /*0x773112*/
  v3[4].uniqueId = 0; /*0x77311d*/
  v3[4].referenceCount = 0; /*0x773123*/
  v9 = v3; /*0x773135*/
  v4 = ((int (__thiscall *)(WeaponTypeClass **, AbstractClass **))WeaponTypeClass_Array->?)(&WeaponTypeClass_Array, &v9); /*0x773139*/
  if ( v4 != -1 && v4 < g_WeaponTypePool && v4 < --g_WeaponTypePool ) /*0x773154*/
  {
    do /*0x77316c*/
    {
      ++v4; /*0x77315c*/
      *((_DWORD *)g_WeaponTypeConfig + v4 - 1) = *((_DWORD *)g_WeaponTypeConfig + v4); /*0x773160*/
    }
    while ( v4 < g_WeaponTypePool ); /*0x77316c*/
  }
  NeedsSaveOrLink = v3[6].NeedsSaveOrLink; /*0x77316e*/
  v3[6].referenceCount = (int)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x773174*/
  if ( NeedsSaveOrLink && BYTE1(v3[7].ptr_4) ) /*0x773182*/
  {
    __3_YAXPAX_Z(NeedsSaveOrLink); /*0x77318b*/
    v3[6].NeedsSaveOrLink = 0; /*0x773193*/
  }
  BYTE1(v3[7].ptr_4) = 0; /*0x773199*/
  v3[7].ptr_0 = 0; /*0x77319f*/
  ptr_4 = v3[6].ptr_4; /*0x7731a5*/
  v3[6].ptr_0 = &VectorClass<int>::`vftable'; /*0x7731ab*/
  if ( ptr_4 && BYTE1(v3[6].ptr_C) ) /*0x7731b9*/
  {
    __3_YAXPAX_Z(ptr_4); /*0x7731c2*/
    v3[6].ptr_4 = 0; /*0x7731ca*/
  }
  BYTE1(v3[6].ptr_C) = 0; /*0x7731d0*/
  v3[6].ptr_8 = 0; /*0x7731d6*/
  ptr_C = v3[5].ptr_C; /*0x7731dc*/
  v3[5].ptr_8 = &VectorClass<int>::`vftable'; /*0x7731e2*/
  if ( ptr_C && BYTE1(v3[5].abstractFlags) ) /*0x7731f0*/
  {
    __3_YAXPAX_Z(ptr_C); /*0x7731f9*/
    v3[5].ptr_C = 0; /*0x773201*/
  }
  BYTE1(v3[5].abstractFlags) = 0; /*0x773209*/
  v3[5].uniqueId = 0; /*0x77320f*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)v3); /*0x773215*/
  if ( ((unsigned __int8)this & 1) != 0 ) /*0x77321f*/
    __3_YAXPAX_Z(v3); /*0x773222*/
  return (WeaponTypeClass *)v3; /*0x77322c*/
}



// ==== 0x00773240  sub_773240  this=-  sig=ida-proto ====
int sub_773240()
{
  dword_B72C98 = 0; /*0x773242*/
  dword_B72C9C = 0; /*0x773247*/
  dword_B72CA0 = 0; /*0x77324c*/
  dword_B72CA4 = 0; /*0x773251*/
  return 0; /*0x773256*/
}



// ==== 0x00773260  sub_773260  this=-  sig=ida-proto ====
void sub_773260()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77326c*/
  dbl_B72CB0 = Math::Sqrt(v0 + v0); /*0x77327e*/
}



// ==== 0x00773290  sub_773290  this=-  sig=ida-proto ====
void sub_773290()
{
  dbl_B72D00 = dbl_B72CB0 / 60.0; /*0x77329c*/
}



// ==== 0x007732B0  sub_7732B0  this=-  sig=ida-proto ====
void sub_7732B0()
{
  dbl_B72CE8 = 1.0 / dbl_B72D00; /*0x7732bc*/
}



// ==== 0x007732D0  sub_7732D0  this=-  sig=ida-proto ====
void sub_7732D0()
{
  dbl_B72CE0 = 0.0174532925199433 * 45.0; /*0x7732dc*/
}



// ==== 0x007732F0  sub_7732F0  this=-  sig=ida-proto ====
void sub_7732F0()
{
  dbl_B72CB8 = 0.0174532925199433 * 60.0; /*0x7732fc*/
}



// ==== 0x00773310  sub_773310  this=-  sig=ida-proto ====
void sub_773310()
{
  dbl_B72C90 = 0.0174532925199433 * 90.0; /*0x77331c*/
}



// ==== 0x00773330  sub_773330  this=-  sig=ida-proto ====
__int64 sub_773330()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72C90 - dbl_B72CB8); /*0x773342*/
  result = Math::RoundToInt(v0 * dbl_B72CB0 * 0.5); /*0x773356*/
  dword_B72D08 = result; /*0x77335b*/
  return result; /*0x773360*/
}



// ==== 0x00773370  sub_773370  this=-  sig=ida-proto ====
void sub_773370()
{
  dbl_B72CC0 = Math::ArcTan((double)dword_B72D08 * 0.00390625); /*0x773387*/
}



// ==== 0x007733A0  sub_7733A0  this=-  sig=ida-proto ====
void sub_7733A0()
{
  dbl_B72CD8 = Math::ArcTan((double)(2 * dword_B72D08) / dbl_B72CB0); /*0x7733c2*/
}



// ==== 0x007733D0  sub_7733D0  this=-  sig=ida-proto ====
__int64 sub_7733D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72D08) + 0.5); /*0x7733eb*/
  dword_B72CFC = result; /*0x7733f0*/
  return result; /*0x7733f6*/
}



// ==== 0x00773400  sub_773400  this=-  sig=ida-proto ====
int sub_773400()
{
  word_B72CA8 = 0; /*0x773402*/
  word_B72CAA = 0; /*0x773408*/
  return 0; /*0x77340e*/
}



// ==== 0x00773410  sub_773410  this=-  sig=ida-proto ====
int sub_773410()
{
  dword_B72CC8 = 0; /*0x773412*/
  dword_B72CCC = 0; /*0x773417*/
  dword_B72CD0 = 0; /*0x77341c*/
  return 0; /*0x773421*/
}



// ==== 0x00773430  sub_773430  this=-  sig=ida-proto ====
int sub_773430()
{
  dword_B72CF8 = 0; /*0x773435*/
  dword_B72CF0 = 128; /*0x77343f*/
  dword_B72CF4 = 128; /*0x773444*/
  return 128; /*0x773449*/
}



// ==== 0x00773450  sub_773450  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_773450(int a1, int a2)
{
  _DWORD *v4; // esi
  _DWORD *result; // eax
  _DWORD *v6; // edi

  v4 = __2_YAPAXI_Z(0x414u); /*0x773462*/
  result = 0; /*0x773464*/
  if ( v4 ) /*0x77346b*/
  {
    v6 = v4 + 2; /*0x773471*/
    v4[1] = 1; /*0x773474*/
    v4[2] = 0; /*0x773480*/
    *((_BYTE *)v4 + 1036) = 0; /*0x773482*/
    v4[260] = 0; /*0x773488*/
    *v4 = &WebBrowser::`vftable'; /*0x77348e*/
    Debug::Log(); /*0x773494*/
    v4[260] = a1; /*0x77349c*/
    Debug::Log(); /*0x7734a7*/
    if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)v4 + 2) >= 0 ) /*0x7734c6*/
    {
      Debug::Log(); /*0x7734cd*/
      (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v6 + 20))(*v6, v4); /*0x7734db*/
      (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*v6 + 12))(*v6, a1, a2); /*0x7734e5*/
      (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v6 + 60))(*v6, 1); /*0x7734ef*/
    }
    return v4; /*0x7734f2*/
  }
  return result; /*0x7734f4*/
}



// ==== 0x00773590  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_773590(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // esi

  this->u32_41 = a2; /*0x77359e*/
  Debug::Log(); /*0x7735a4*/
  v4 = this + 2; /*0x7735ac*/
  if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)this + 2) >= 0 ) /*0x7735c6*/
  {
    Debug::Log(); /*0x7735cd*/
    (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v4 + 20))(*v4, this); /*0x7735db*/
    (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*v4 + 12))(*v4, a2, a3); /*0x7735e9*/
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v4 + 60))(*v4, 1); /*0x7735f3*/
  }
  return 1; /*0x7735f6*/
}



// ==== 0x00773600  WebBrowser::LoadURLFromRegistry  this=WebBrowser  sig=csp ====
char __thiscall WebBrowser::LoadURLFromRegistry(int this, const char *a2)
{
  LSTATUS v3; // esi
  LSTATUS v4; // esi
  char *v5; // edx
  int v6; // eax
  HKEY phkResult; // [esp+10h] [ebp-558h] BYREF
  DWORD cbData; // [esp+14h] [ebp-554h] BYREF
  DWORD Type; // [esp+18h] [ebp-550h] BYREF
  CHAR ValueName[64]; // [esp+1Ch] [ebp-54Ch] BYREF
  BYTE v12[260]; // [esp+5Ch] [ebp-50Ch] BYREF
  BYTE Data[512]; // [esp+160h] [ebp-408h] BYREF
  wchar_t Destination[260]; // [esp+360h] [ebp-208h] BYREF

  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult) ) /*0x773628*/
    return 0; /*0x773628*/
  strcpy(ValueName, a2); /*0x77364f*/
  if ( !*(_DWORD *)(this + 8) ) /*0x773653*/
    strcat(ValueName, asc_84968C); /*0x773684*/
  cbData = 512; /*0x7736b1*/
  v3 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData); /*0x7736bf*/
  RegCloseKey(phkResult); /*0x7736c2*/
  if ( v3 ) /*0x7736ca*/
    return 0; /*0x7736ca*/
  Debug::Log(); /*0x7736e5*/
  if ( !*(_DWORD *)(this + 8) ) /*0x7736f2*/
    return WebBrowser::OpenURL(Data); /*0x773843*/
  mbstowcs((wchar_t *)(this + 12), (const char *)Data, 0x200u); /*0x773709*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) ) /*0x773726*/
    return 0; /*0x773726*/
  cbData = 260; /*0x77374a*/
  v4 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, v12, &cbData); /*0x773754*/
  RegCloseKey(phkResult); /*0x77375b*/
  if ( v4 ) /*0x773763*/
    return 0; /*0x773763*/
  v5 = strrchr((const char *)v12, 92); /*0x773775*/
  if ( !v5 || strlen((const char *)v12) > v5 - (char *)v12 + 1 ) /*0x773795*/
    strcat((char *)v12, asc_815E74); /*0x7737bc*/
  mbstowcs(Destination, (const char *)v12, 0x104u); /*0x7737d7*/
  wcscat(Destination, aFr); /*0x7737e9*/
  if ( (*(int (__stdcall **)(_DWORD, wchar_t *, _DWORD, _DWORD))(**(_DWORD **)(this + 8) + 64))( /*0x773808*/
         *(_DWORD *)(this + 8),
         Destination,
         0,
         0) < 0 )
    return 0; /*0x773849*/
  v6 = *(_DWORD *)(this + 8); /*0x77380a*/
  if ( v6 ) /*0x77380f*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 28))(*(_DWORD *)(this + 8)); /*0x773814*/
    *(_BYTE *)(this + 1036) = 1; /*0x773817*/
  }
  return 1; /*0x77381e*/
}



// ==== 0x007738A0  ObjectClass::method_7738A0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_7738A0(ObjectClass *this, const char *cbData, LPBYTE lpData, const char *Type)
{
  LSTATUS Value; // esi
  HKEY phkResult; // [esp+8h] [ebp-44h] BYREF
  CHAR ValueName[64]; // [esp+Ch] [ebp-40h] BYREF

  Value = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult); /*0x7738c3*/
  if ( !Value ) /*0x7738c7*/
  {
    strcpy(ValueName, cbData); /*0x7738e8*/
    if ( !this->? ) /*0x7738ec*/
      strcat(ValueName, asc_84968C); /*0x77391d*/
    cbData = Type; /*0x773932*/
    Value = RegQueryValueExA(phkResult, ValueName, 0, (LPDWORD)&Type, lpData, (LPDWORD)&cbData); /*0x77394f*/
    RegCloseKey(phkResult); /*0x773956*/
  }
  return Value == 0; /*0x773961*/
}



// ==== 0x00773970  sub_773970  this=-  sig=csp ====
BOOL __stdcall sub_773970(BYTE *Type, DWORD cbData)
{
  LSTATUS v2; // ebp
  char *v3; // ebx
  char *v4; // edx
  HKEY phkResult; // [esp+Ch] [ebp-4h] BYREF

  v2 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult); /*0x773990*/
  if ( !v2 ) /*0x773994*/
  {
    v3 = (char *)Type; /*0x77399a*/
    v2 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, (LPDWORD)&Type, Type, &cbData); /*0x7739c6*/
    RegCloseKey(phkResult); /*0x7739c9*/
    if ( !v2 ) /*0x7739d1*/
    {
      v4 = strrchr(v3, 92); /*0x7739db*/
      if ( !v4 || strlen(v3) > v4 - v3 + 1 ) /*0x7739f5*/
        strcat(v3, asc_815E74); /*0x773a19*/
    }
  }
  return v2 == 0; /*0x773a25*/
}



// ==== 0x00773A40  WebBrowser::QueryInterface  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::QueryInterface(WebBrowser *this)
{
  int v2; // [esp+10h] [ebp+4h]
  const void *v3; // [esp+14h] [ebp+8h]
  _DWORD *v4; // [esp+18h] [ebp+Ch]

  *v4 = 0; /*0x773a59*/
  if ( memcmp(v3, &IID_IUnknown, 0x10u) && memcmp(v3, &unk_7F7C20, 0x10u) ) /*0x773a71*/
    return -2147467262; /*0x773a77*/
  *v4 = v2; /*0x773a84*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x773a89*/
  return 0; /*0x773a75*/
}



// ==== 0x00773AA0  WebBrowser::AddRef  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::AddRef(WebBrowser *this)
{
  int v1; // ecx
  int v3; // [esp+4h] [ebp+4h]

  v1 = *(_DWORD *)(v3 + 4) + 1; /*0x773aa7*/
  *(_DWORD *)(v3 + 4) = v1; /*0x773aa8*/
  return v1; /*0x773aad*/
}



// ==== 0x00773AB0  WebBrowser::Release  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Release(WebBrowser *this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp+4h]

  result = v2[1] - 1; /*0x773ab7*/
  v2[1] = result; /*0x773ab8*/
  if ( !result ) /*0x773abb*/
  {
    if ( v2 ) /*0x773abf*/
      (*(void (__thiscall **)(_DWORD *, int))(*v2 + 68))(v2, 1); /*0x773ac5*/
    return 0; /*0x773ac8*/
  }
  return result; /*0x773aca*/
}



// ==== 0x00773AD0  WebBrowser::?  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt03(WebBrowser *this)
{
  HWND v1; // eax
  int v3; // [esp+4h] [ebp+4h]

  v1 = *(HWND *)(v3 + 1040); /*0x773ad4*/
  if ( v1 ) /*0x773adc*/
    *(_DWORD *)GetWindowLongA(v1, 8) = 1; /*0x773ae7*/
  return 0; /*0x773aef*/
}



// ==== 0x00773B00  WebBrowser::COMStub_Return0  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::COMStub_Return0(WebBrowser *this)
{
  return 0; /*0x773b02*/
}



// ==== 0x00773B10  WebBrowser::Write  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Write(WebBrowser *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+Ch]

  if ( v3 ) /*0x773b16*/
    (*(void (__stdcall **)(_DWORD, int, _DWORD, wchar_t *))(**(_DWORD **)(v2 + 8) + 64))( /*0x773b2d*/
      *(_DWORD *)(v2 + 8),
      v2 + 12,
      0,
      aMain);
  return 0; /*0x773b32*/
}



// ==== 0x00773B40  WebBrowser::StubReturnFalse  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::StubReturnFalse(WebBrowser *this)
{
  return 0; /*0x773b42*/
}



// ==== 0x00773B50  WebBrowser::SetSize  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::SetSize(WebBrowser *this)
{
  return 0; /*0x773b52*/
}



// ==== 0x00773B60  WebBrowser::CopyTo  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::CopyTo(WebBrowser *this)
{
  return 0; /*0x773b62*/
}



// ==== 0x00773B70  WebBrowser::Commit  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Commit(WebBrowser *this)
{
  return 0; /*0x773b72*/
}



// ==== 0x00773B80  WebBrowser::Revert  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Revert(WebBrowser *this)
{
  return 0; /*0x773b82*/
}



// ==== 0x00773B90  WebBrowser::LockRegion  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::LockRegion(WebBrowser *this)
{
  return 0; /*0x773b92*/
}



// ==== 0x00773BA0  WebBrowser::UnlockRegion  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::UnlockRegion(WebBrowser *this)
{
  return -2147467259; /*0x773ba5*/
}



// ==== 0x00773BB0  WebBrowser::Stat  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Stat(WebBrowser *this)
{
  return 0; /*0x773bb2*/
}



// ==== 0x00773BC0  WebBrowser::Clone  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Clone(WebBrowser *this)
{
  LSTATUS v1; // esi
  char *v2; // edx
  HKEY phkResult; // [esp+4h] [ebp-318h] BYREF
  DWORD cbData; // [esp+8h] [ebp-314h] BYREF
  DWORD Type; // [esp+Ch] [ebp-310h] BYREF
  BYTE Data[260]; // [esp+10h] [ebp-30Ch] BYREF
  wchar_t Dest[260]; // [esp+114h] [ebp-208h] BYREF
  int v9; // [esp+320h] [ebp+4h]

  Debug::Log(); /*0x773bcc*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) ) /*0x773bea*/
    return 0; /*0x773bea*/
  cbData = 260; /*0x773c13*/
  v1 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, Data, &cbData); /*0x773c21*/
  RegCloseKey(phkResult); /*0x773c28*/
  if ( v1 ) /*0x773c30*/
    return 0; /*0x773d06*/
  v2 = strrchr((const char *)Data, 92); /*0x773c43*/
  if ( !v2 || strlen((const char *)Data) > v2 - (char *)Data + 1 ) /*0x773c63*/
    strcat((char *)Data, asc_815E74); /*0x773c8b*/
  mbstowcs((wchar_t *)(v9 + 12), (const char *)Data, 0x104u); /*0x773caa*/
  wcscat((wchar_t *)(v9 + 12), L"BadPage.htm"); /*0x773cb5*/
  mbstowcs(Dest, (const char *)Data, 0x104u); /*0x773ccc*/
  wcscat(Dest, aFr); /*0x773cde*/
  return (*(int (__stdcall **)(_DWORD, wchar_t *, _DWORD, _DWORD))(**(_DWORD **)(v9 + 8) + 64))( /*0x773cfc*/
           *(_DWORD *)(v9 + 8),
           Dest,
           0,
           0);
}



// ==== 0x00773D20  WebBrowser::Navigate  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Navigate(WebBrowser *this)
{
  Debug::Log(); /*0x773d2a*/
  return 0; /*0x773d34*/
}



// ==== 0x00773D40  WebBrowser::GoBack  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::GoBack(WebBrowser *this)
{
  String v2; // [esp+0h] [ebp-94h] BYREF
  int v3; // [esp+8h] [ebp-8Ch]
  Flag v4[6]; // [esp+Ch] [ebp-88h] BYREF
  char v5[64]; // [esp+54h] [ebp-40h] BYREF
  wchar_t *Source; // [esp+9Ch] [ebp+8h]
  wchar_t *v7; // [esp+A0h] [ebp+Ch]

  wcstombs((char *)&v4[0].Flag_field_0x08, Source, 0x40u); /*0x773d55*/
  wcstombs(v5, v7, 0x40u); /*0x773d69*/
  String::Assign(&v2, (const char *)&v4[0].Flag_field_0x08); /*0x773d7a*/
  Debug::Log(); /*0x773d8e*/
  LoadPlayerProfile(&v2.m_3[1], (const char **)&v2); /*0x773d9e*/
  *(_DWORD *)v4[0].__pad_0 = 0; /*0x773da9*/
  LOBYTE(v4[0].Flag_field_0x04) = 0; /*0x773dad*/
  ReadRegistryOptionsWOL((ObjectClass *)v4); /*0x773db1*/
  if ( (unsigned __int8)Flag::IsNot2(v4) ) /*0x773dba*/
  {
    FindChannelWOL((const char *)&v4[0].Flag_field_0x08, (int)v5, 1u, *(_DWORD *)(v3 + 16)); /*0x773dd5*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x773ddf*/
  }
  String::Assign_Alt((String *)&g_WindowManager.__pad_EC[684], (const char *)&v4[0].Flag_field_0x08); /*0x773dee*/
  String::Assign_Alt((String *)&g_WebBrowserConfig, v5); /*0x773dfd*/
  *(_DWORD *)&v2.m_3[1] = &rc_ptr<PlayerProfile>::`vftable'; /*0x773e06*/
  ComPtr::Release((ComPtr *)&v2.m_3[1]); /*0x773e0e*/
  DeleteAndZero((ObjectClass *)&v2); /*0x773e17*/
  return 0; /*0x773e1e*/
}



// ==== 0x00773E30  sub_773E30  this=-  sig=csp ====
int __stdcall sub_773E30(HWND hWndParent, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LPARAM lParam[2]; // [esp+8h] [ebp-8h] BYREF

  result = BaseDialogProc(hWndParent, a2, a3, a4); /*0x773e4b*/
  if ( !result ) /*0x773e52*/
  {
    if ( a2 == 272 ) /*0x773e5a*/
    {
      lParam[0] = 800; /*0x773e62*/
      lParam[1] = 600; /*0x773e6a*/
      ResizeDialogAndEnum(hWndParent, (LPARAM)lParam); /*0x773e72*/
    }
    return 0; /*0x773e77*/
  }
  return result; /*0x773e79*/
}



// ==== 0x00773E90  WebBrowser::ShowDialog  this=char*  sig=csp ====
HWND __thiscall WebBrowser_ShowDialog(const char *this)
{
  const char *v1; // ebp
  HWND result; // eax
  HWND v3; // edi
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // esi
  _DWORD *v7; // ebp
  LONG dwNewLong; // [esp+1Ch] [ebp-28h] BYREF
  const char *v9; // [esp+20h] [ebp-24h]
  struct tagRECT Rect; // [esp+24h] [ebp-20h] BYREF
  int v11; // [esp+34h] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-Ch]
  int v13; // [esp+3Ch] [ebp-8h]
  int v14; // [esp+40h] [ebp-4h]

  v1 = this; /*0x773e94*/
  v9 = this; /*0x773e99*/
  if ( !this || !strlen(this) ) /*0x773eaa*/
    return (HWND)Debug::Log(aDowebpagedialo); /*0x774060*/
  Debug::Log("Creating WebBrowser Dialog for %s.\n", v1); /*0x773ebb*/
  result = (HWND)CreateDialog(0x131u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_773E30, 0); /*0x773ecf*/
  v3 = result; /*0x773ed4*/
  if ( result ) /*0x773ed8*/
  {
    dwNewLong = 0; /*0x773ee7*/
    SetWindowLongA(result, 8, (LONG)&dwNewLong); /*0x773eef*/
    LOBYTE(v4) = 1; /*0x773ef5*/
    SetDialogActiveFlag(v3, v4); /*0x773ef9*/
    Dialog::Show(v3); /*0x773f00*/
    GetClientRect(v3, &Rect); /*0x773f0b*/
    v11 = Rect.left + (Rect.right - Rect.left - 800) / 2; /*0x773f30*/
    v13 = v11 + 800; /*0x773f39*/
    v12 = Rect.top + (Rect.bottom - Rect.top - 600) / 2; /*0x773f4f*/
    v14 = v12 + 600; /*0x773f58*/
    v5 = __2_YAPAXI_Z(0x414u); /*0x773f5c*/
    v6 = (int)v5; /*0x773f61*/
    if ( v5 ) /*0x773f68*/
    {
      v7 = v5 + 2; /*0x773f6e*/
      v5[1] = 1; /*0x773f71*/
      v5[2] = 0; /*0x773f7d*/
      *((_BYTE *)v5 + 1036) = 0; /*0x773f84*/
      v5[260] = 0; /*0x773f8b*/
      *v5 = &WebBrowser::`vftable'; /*0x773f95*/
      Debug::Log(g_Str_Instantiating_embedded_WebBrow); /*0x773f9b*/
      *(_DWORD *)(v6 + 1040) = v3; /*0x773fa3*/
      Debug::Log(g_Str_Creating_WOLBrowser_component_); /*0x773fae*/
      if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)(v6 + 8)) >= 0 ) /*0x773fcd*/
      {
        Debug::Log(g_Str_Starting_up_WOLBrowser); /*0x773fd4*/
        (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v6); /*0x773fe3*/
        (*(void (__stdcall **)(_DWORD, HWND, int *))(*(_DWORD *)*v7 + 12))(*v7, v3, &v11); /*0x773ff2*/
        (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 60))(*v7, 1); /*0x773ffe*/
      }
      v1 = v9; /*0x774001*/
    }
    else
    {
      v6 = 0; /*0x774057*/
    }
    dword_B72D0C = v6; /*0x774007*/
    if ( v6 ) /*0x77400d*/
    {
      if ( (unsigned __int8)WebBrowser::LoadURLFromRegistry(v1) && !dwNewLong ) /*0x774021*/
      {
        while ( !Dialog::PumpMessages() && !dwNewLong ) /*0x774032*/
          ; /*0x774023*/
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_B72D0C + 8))(dword_B72D0C); /*0x77403c*/
      dword_B72D0C = 0; /*0x77403f*/
    }
    return Dialog::Destroy(v3); /*0x77404b*/
  }
  return result; /*0x774051*/
}



// ==== 0x00774070  Render_Draw_774070  this=-  sig=ida-proto ====
BOOL sub_774070()
{
  return dword_B72D0C && *(_DWORD *)(dword_B72D0C + 8) && *(_BYTE *)(dword_B72D0C + 1036); /*0x77408f*/
}



// ==== 0x007740A0  WebBrowser::GoForward  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::GoForward(WebBrowser *this)
{
  void *WebBrowser_field_0x8; // eax
  char v4; // [esp+10h] [ebp+4h]

  *(_DWORD *)this->__pad_0 = &WebBrowser::`vftable'; /*0x7740a8*/
  Debug::Log(); /*0x7740ae*/
  if ( this->WebBrowser_field_0x8 ) /*0x7740b3*/
  {
    Debug::Log(); /*0x7740c2*/
    (*(void (__stdcall **)(void *, WebBrowser *))(*(_DWORD *)this->WebBrowser_field_0x8 + 24))( /*0x7740d1*/
      this->WebBrowser_field_0x8,
      this);
    (*(void (__stdcall **)(void *))(*(_DWORD *)this->WebBrowser_field_0x8 + 16))(this->WebBrowser_field_0x8); /*0x7740da*/
  }
  WebBrowser_field_0x8 = this->WebBrowser_field_0x8; /*0x7740dd*/
  if ( WebBrowser_field_0x8 ) /*0x7740e2*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)WebBrowser_field_0x8 + 8))(this->WebBrowser_field_0x8); /*0x7740e7*/
  if ( (v4 & 1) != 0 ) /*0x7740ef*/
    __3_YAXPAX_Z(this); /*0x7740f2*/
  return (int)this->__pad_0; /*0x7740fc*/
}



// ==== 0x00774100  sub_774100  this=-  sig=ida-proto ====
int sub_774100()
{
  dword_B72D10 = 0; /*0x774102*/
  dword_B72D14 = 0; /*0x774107*/
  dword_B72D18 = 0; /*0x77410c*/
  dword_B72D1C = 0; /*0x774111*/
  return 0; /*0x774116*/
}



// ==== 0x00774120  WinModemClass::Construct  this=WinModemClass  sig=csp ====
_DWORD *__thiscall WinModemClass::Construct(WinModemClass *this)
{
  *(_DWORD *)this->__pad_0 = &WinModemClass::`vftable'; /*0x774128*/
  this->WinModemClass_field_0x24 = __2_YAPAXI_Z(0x2000u); /*0x774133*/
  this->q015 = 0; /*0x77413b*/
  *((_DWORD *)this + 22) = 0; /*0x77413e*/
  this->q014 = 0; /*0x774141*/
  *((_BYTE *)this + 81) = 0; /*0x774144*/
  *((_DWORD *)this + 26) = 0; /*0x774147*/
  *((_DWORD *)this + 25) = 0; /*0x77414a*/
  this->WinModemClass_field_0x04 = 0; /*0x77414d*/
  this->WinModemClass_field_0x08 = 0; /*0x774150*/
  this->WinModemClass_field_0x0C = 0; /*0x774153*/
  this->WinModemClass_field_0x10 = 0; /*0x774156*/
  this->WinModemClass_field_0x14 = 0; /*0x774159*/
  this->WinModemClass_field_0x18 = 0; /*0x77415c*/
  *((_DWORD *)this + 23) = -1; /*0x77415f*/
  return this->__pad_0; /*0x774168*/
}



// ==== 0x007741C0  FindRegistrySubKey  this=-  sig=csp ====
int __fastcall FindRegistrySubKey(HKEY hKey, void *a2, char a3)
{
  DWORD v4; // ebx
  _BYTE *v5; // esi
  DWORD v6; // ebp
  LPSTR lpClass; // [esp+10h] [ebp-434h]
  DWORD cbMaxSubKeyLen; // [esp+14h] [ebp-430h] BYREF
  DWORD cbMaxClassLen; // [esp+18h] [ebp-42Ch] BYREF
  DWORD cSubKeys; // [esp+1Ch] [ebp-428h] BYREF
  HKEY phkResult; // [esp+20h] [ebp-424h] BYREF
  void *v13; // [esp+24h] [ebp-420h]
  DWORD cchClass; // [esp+28h] [ebp-41Ch] BYREF
  DWORD cbMaxValueLen; // [esp+2Ch] [ebp-418h] BYREF
  DWORD cValues; // [esp+30h] [ebp-414h] BYREF
  DWORD cbSecurityDescriptor; // [esp+34h] [ebp-410h] BYREF
  struct _FILETIME ftLastWriteTime; // [esp+38h] [ebp-40Ch] BYREF
  DWORD cbMaxValueNameLen; // [esp+40h] [ebp-404h] BYREF
  CHAR Class[1024]; // [esp+44h] [ebp-400h] BYREF

  v13 = a2; /*0x7741cc*/
  cchClass = 1024; /*0x774205*/
  if ( RegQueryInfoKeyA( /*0x77420d*/
         hKey,
         Class,
         &cchClass,
         0,
         &cSubKeys,
         &cbMaxSubKeyLen,
         &cbMaxClassLen,
         &cValues,
         &cbMaxValueNameLen,
         &cbMaxValueLen,
         &cbSecurityDescriptor,
         &ftLastWriteTime) )
  {
    return 0; /*0x7742cf*/
  }
  v4 = cbMaxSubKeyLen + 16; /*0x77421f*/
  v5 = __2_YAPAXI_Z(cbMaxSubKeyLen + 16); /*0x77422c*/
  lpClass = (LPSTR)__2_YAPAXI_Z(cbMaxClassLen + 1); /*0x774235*/
  v6 = 0; /*0x774240*/
  if ( !cSubKeys ) /*0x774244*/
  {
LABEL_6:
    if ( a3 ) /*0x7742a7*/
      RegCloseKey(hKey); /*0x7742aa*/
    __3_YAXPAX_Z(v5); /*0x7742b1*/
    __3_YAXPAX_Z(lpClass); /*0x7742bb*/
    return 0; /*0x7742bb*/
  }
  while ( 1 ) /*0x77425e*/
  {
    *v5 = 0; /*0x77425e*/
    cbMaxSubKeyLen = v4; /*0x774262*/
    RegEnumKeyExA(hKey, v6, v5, &cbMaxSubKeyLen, 0, lpClass, &cbMaxClassLen, &ftLastWriteTime); /*0x774266*/
    if ( !_strcmpi((char *)v13, v5) && !RegOpenKeyExA(hKey, v5, 0, 0x20019u, &phkResult) ) /*0x77428b*/
      break; /*0x77428b*/
    if ( ++v6 >= cSubKeys ) /*0x77429c*/
      goto LABEL_6; /*0x77429c*/
  }
  if ( a3 ) /*0x7742db*/
    RegCloseKey(hKey); /*0x7742de*/
  __3_YAXPAX_Z(v5); /*0x7742e5*/
  __3_YAXPAX_Z(lpClass); /*0x7742ef*/
  return (int)phkResult; /*0x7742c3*/
}



// ==== 0x00774310  sub_774310  this=-  sig=ida-proto ====
char __fastcall sub_774310(BYTE *a1, signed int a2)
{
  HKEY RegistrySubKey; // eax
  HKEY v6; // eax
  HKEY v7; // eax
  HKEY v8; // esi
  DWORD v9; // ecx
  DWORD cbData; // [esp+Ch] [ebp-104h] BYREF
  BYTE Data[256]; // [esp+10h] [ebp-100h] BYREF

  cbData = 256; /*0x774329*/
  RegistrySubKey = FindRegistrySubKey(HKEY_LOCAL_MACHINE, aEnum, 0); /*0x774331*/
  if ( !RegistrySubKey ) /*0x774338*/
    return 0; /*0x77433c*/
  v6 = FindRegistrySubKey(RegistrySubKey, aRoot, 1); /*0x77434f*/
  if ( !v6 ) /*0x774356*/
    return 0; /*0x77435a*/
  v7 = FindRegistrySubKey(v6, aModem, 1); /*0x77436d*/
  if ( !v7 ) /*0x774374*/
    return 0; /*0x774378*/
  v8 = FindRegistrySubKey(v7, a0000_0, 1); /*0x774390*/
  if ( !v8 ) /*0x774394*/
    return 0; /*0x774398*/
  if ( RegQueryValueExA(v8, aFriendlyname, 0, 0, Data, &cbData) ) /*0x7743b6*/
  {
    RegCloseKey(v8); /*0x7743c1*/
    return 0; /*0x7743c7*/
  }
  else
  {
    RegCloseKey(v8); /*0x7743d3*/
    v9 = cbData; /*0x7743d9*/
    if ( a2 < (int)cbData ) /*0x7743df*/
      v9 = a2; /*0x7743e1*/
    qmemcpy(a1, Data, v9); /*0x7743ec*/
    return 1; /*0x7743f0*/
  }
}



// ==== 0x00774410  WinModemClass::AddRef  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::AddRef(WinModemClass *this, const char *a2, DWORD a3, BYTE a4, BYTE a5, char a6)
{
  HANDLE FileA; // ebp
  DWORD v9; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v12; // zf
  DWORD Errors; // [esp+10h] [ebp-14Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-148h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-13Ch] BYREF
  struct _COMMTIMEOUTS CommTimeouts; // [esp+3Ch] [ebp-120h] BYREF
  CHAR FileName[268]; // [esp+50h] [ebp-10Ch] BYREF

  strcpy(FileName, "\\\\.\\"); /*0x774427*/
  memset(&FileName[5], 0, 261); /*0x77443a*/
  strcat(FileName, a2); /*0x774465*/
  if ( *((_DWORD *)this + 23) != -1 ) /*0x774473*/
  {
    Debug::Log(); /*0x77447a*/
    CloseHandle(*((HANDLE *)this + 23)); /*0x774486*/
    *((_DWORD *)this + 23) = -1; /*0x77448c*/
  }
  Debug::Log(); /*0x774499*/
  FileA = CreateFileA(FileName, 0xC0000000, 0, 0, 3u, 0x40000000u, 0); /*0x7744bd*/
  if ( FileA == (HANDLE)-1 ) /*0x7744c2*/
  {
    Debug::Log(); /*0x7744ca*/
    return -1; /*0x7744d2*/
  }
  else
  {
    Debug::Log(); /*0x7744e6*/
    *((_DWORD *)this + 23) = FileA; /*0x7744ee*/
    SetupComm(FileA, 0x2000u, 0x2000u); /*0x7744fc*/
    PurgeComm(*((HANDLE *)this + 23), 0xFu); /*0x774508*/
    this->WinModemClass_field_0x28 = 0; /*0x77451a*/
    this->WinModemClass_field_0x2C = 0; /*0x77451d*/
    this->WinModemClass_field_0x30 = 0; /*0x774520*/
    this->WinModemClass_field_0x34 = 0; /*0x774523*/
    this->WinModemClass_field_0x38 = (int)CreateEventA(0, 1, 1, 0); /*0x77452e*/
    *((_DWORD *)this + 15) = 0; /*0x774531*/
    this->u32_10 = 0; /*0x774534*/
    *((_DWORD *)this + 17) = 0; /*0x774537*/
    *((_DWORD *)this + 18) = 0; /*0x77453a*/
    *((_DWORD *)this + 19) = CreateEventA(0, 1, 1, 0); /*0x774543*/
    if ( GetCommState(FileA, &DCB) /*0x774598*/
      && (DCB.Parity = a4,
          DCB.BaudRate = a3,
          DCB.ByteSize = a5,
          DCB.StopBits = a6 - 1,
          *((_DWORD *)&DCB + 2) = *((_DWORD *)&DCB + 2) & 0xFFFF88C0 | 0x2015,
          SetCommState(FileA, &DCB)) )
    {
      qmemcpy((char *)this + 8300, &DCB, 0x1Cu); /*0x7745b9*/
    }
    else
    {
      Debug::Log(); /*0x7745c5*/
    }
    CommTimeouts.ReadIntervalTimeout = 1000; /*0x7745d8*/
    CommTimeouts.ReadTotalTimeoutMultiplier = 0; /*0x7745dc*/
    CommTimeouts.ReadTotalTimeoutConstant = 3000; /*0x7745e0*/
    CommTimeouts.WriteTotalTimeoutMultiplier = 500; /*0x7745e8*/
    CommTimeouts.WriteTotalTimeoutConstant = 1000; /*0x7745f0*/
    if ( !SetCommTimeouts(FileA, &CommTimeouts) ) /*0x7745f4*/
      Debug::Log(); /*0x774604*/
    (*(void (__thiscall **)(WinModemClass *, int))(*(_DWORD *)this->__pad_0 + 16))(this, 1); /*0x774612*/
    if ( ClearCommError(*((HANDLE *)this + 23), &Errors, &Stat) ) /*0x774623*/
    {
      v9 = Errors; /*0x77462d*/
      cbInQue = Stat.cbInQue; /*0x774631*/
      cbOutQue = Stat.cbOutQue; /*0x774635*/
      v12 = Errors == 0; /*0x774639*/
      this->WinModemClass_field_0x1C = Stat.cbInQue; /*0x77463b*/
      this->WinModemClass_field_0x20 = cbOutQue; /*0x77463e*/
      if ( !v12 ) /*0x774641*/
        WinModemClass::LogCommErrors(this, v9, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774657*/
    }
    return (int)FileA; /*0x77465d*/
  }
}



// ==== 0x00774670  NullModemClass::sendData  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass::sendData(NullModemClass *this)
{
  void *v2; // ecx
  DWORD v4; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v7; // zf
  void *v8; // [esp-8h] [ebp-44h]
  DWORD Errors; // [esp+Ch] [ebp-30h] BYREF
  DWORD EvtMask; // [esp+10h] [ebp-2Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-28h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-1Ch] BYREF

  Debug::Log(); /*0x77467d*/
  PurgeComm(*((HANDLE *)this + 23), 0xFu); /*0x77468b*/
  ResetEvent(*((HANDLE *)this + 14)); /*0x77469b*/
  ResetEvent(*((HANDLE *)this + 19)); /*0x7746a1*/
  v8 = (void *)*((_DWORD *)this + 23); /*0x7746ad*/
  this->PacketsReceived = 0; /*0x7746ae*/
  *((_BYTE *)this + 81) = 0; /*0x7746b1*/
  if ( GetCommState(v8, &DCB) ) /*0x7746b4*/
  {
    v2 = (void *)*((_DWORD *)this + 23); /*0x7746c2*/
    DCB.BaudRate = 9600; /*0x7746d7*/
    DCB.Parity = 0; /*0x7746df*/
    DCB.ByteSize = 8; /*0x7746e3*/
    DCB.StopBits = 0; /*0x7746e8*/
    *((_DWORD *)&DCB + 2) = *((_DWORD *)&DCB + 2) & 0xFFFF88C0 | 0x1011; /*0x7746ec*/
    if ( !SetCommState(v2, &DCB) ) /*0x7746f0*/
    {
      Debug::Log(); /*0x774700*/
      return 0; /*0x774710*/
    }
  }
  else
  {
    Debug::Log(); /*0x774717*/
  }
  GetCommMask(*((HANDLE *)this + 23), &EvtMask); /*0x774728*/
  (*(void (__thiscall **)(NullModemClass *, int))(*(_DWORD *)this->ConnectionClass + 16))(this, 1); /*0x774734*/
  (*(void (__thiscall **)(NullModemClass *))(*(_DWORD *)this->ConnectionClass + 12))(this); /*0x77473b*/
  if ( !EscapeCommFunction(*((HANDLE *)this + 23), 3u) ) /*0x774744*/
  {
    GetLastError(); /*0x77474f*/
    Debug::Log(); /*0x77475b*/
  }
  if ( ClearCommError(*((HANDLE *)this + 23), &Errors, &Stat) ) /*0x774771*/
  {
    v4 = Errors; /*0x77477b*/
    cbInQue = Stat.cbInQue; /*0x77477f*/
    cbOutQue = Stat.cbOutQue; /*0x774783*/
    v7 = Errors == 0; /*0x774787*/
    *((_DWORD *)this + 7) = Stat.cbInQue; /*0x774789*/
    this->Active = cbOutQue; /*0x77478c*/
    if ( !v7 ) /*0x77478f*/
      WinModemClass::LogCommErrors((WinModemClass *)this, v4, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x7747a5*/
  }
  return 1; /*0x77470a*/
}



// ==== 0x007747C0  NullModemClass::receiveData  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::receiveData(NullModemClass *this)
{
  DWORD v2; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v5; // zf
  void *v7; // [esp-8h] [ebp-24h]
  DWORD Errors; // [esp+Ch] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+10h] [ebp-Ch] BYREF

  Debug::Log(); /*0x7747cd*/
  PurgeComm(*((HANDLE *)this + 23), 0xFu); /*0x7747db*/
  ResetEvent(*((HANDLE *)this + 14)); /*0x7747eb*/
  ResetEvent(*((HANDLE *)this + 19)); /*0x7747f1*/
  v7 = (void *)*((_DWORD *)this + 23); /*0x7747ff*/
  this->PacketsReceived = 0; /*0x774800*/
  *((_BYTE *)this + 81) = 0; /*0x774803*/
  if ( !SetCommState(v7, (LPDCB)((char *)this + 8300)) ) /*0x774806*/
    Debug::Log(); /*0x774816*/
  if ( !EscapeCommFunction(*((HANDLE *)this + 23), 3u) ) /*0x774824*/
  {
    GetLastError(); /*0x77482f*/
    Debug::Log(); /*0x77483b*/
  }
  if ( ClearCommError(*((HANDLE *)this + 23), &Errors, &Stat) ) /*0x774851*/
  {
    v2 = Errors; /*0x77485b*/
    cbInQue = Stat.cbInQue; /*0x77485f*/
    cbOutQue = Stat.cbOutQue; /*0x774863*/
    v5 = Errors == 0; /*0x774867*/
    *((_DWORD *)this + 7) = Stat.cbInQue; /*0x774869*/
    this->Active = cbOutQue; /*0x77486c*/
    if ( !v5 ) /*0x77486f*/
      WinModemClass::LogCommErrors((WinModemClass *)this, v2, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774885*/
  }
  return (*(int (__thiscall **)(NullModemClass *, int))(*(_DWORD *)this->ConnectionClass + 16))(this, 1); /*0x774893*/
}



// ==== 0x007748A0  WinModemClass::Release  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::Release(WinModemClass *this, int a2)
{
  this->u32_18 = a2; /*0x7748a4*/
  return a2; /*0x7748a7*/
}



// ==== 0x007748B0  WinModemClass::GetClassIdentifier  this=WinModemClass  sig=csp ====
int __fastcall WinModemClass::GetClassIdentifier(WinModemClass *this)
{
  int v1; // esi
  void *v3; // [esp-Ch] [ebp-10h]
  DWORD ModemStat; // [esp+0h] [ebp-4h] BYREF

  ModemStat = (DWORD)this; /*0x7748b0*/
  v1 = 0; /*0x7748b9*/
  v3 = (void *)*((_DWORD *)this + 23); /*0x7748bc*/
  ModemStat = 0; /*0x7748bd*/
  GetCommModemStatus(v3, &ModemStat); /*0x7748c1*/
  if ( (ModemStat & 0x10) != 0 ) /*0x7748cd*/
    v1 = 16; /*0x7748cf*/
  if ( (ModemStat & 0x20) != 0 ) /*0x7748d6*/
    v1 |= 0x20u; /*0x7748d8*/
  if ( (ModemStat & 0x40) != 0 ) /*0x7748dd*/
    v1 |= 0x40u; /*0x7748df*/
  if ( (ModemStat & 0x80u) != 0 ) /*0x7748e4*/
    return v1 | 0x80; /*0x7748e6*/
  return v1; /*0x7748f0*/
}



// ==== 0x00774900  WinModemClass::Init  this=WinModemClass  sig=csp ====
void __thiscall WinModemClass::Init(WinModemClass *this, char a2)
{
  if ( a2 ) /*0x774906*/
  {
    if ( EscapeCommFunction(*((HANDLE *)this + 23), 5u) ) /*0x77490e*/
      return; /*0x774916*/
  }
  else if ( EscapeCommFunction(*((HANDLE *)this + 23), 6u) ) /*0x774920*/
  {
    return; /*0x774928*/
  }
  GetLastError(); /*0x77492c*/
  Debug::Log(); /*0x774938*/
}



// ==== 0x00774950  SerialPort::Close  this=SerialPort  sig=csp ====
int __thiscall SerialPort::Close(SerialPort *this)
{
  int result; // eax

  if ( *((_DWORD *)this + 23) != -1 ) /*0x774957*/
  {
    Debug::Log(); /*0x77495e*/
    result = CloseHandle(*((HANDLE *)this + 23)); /*0x77496a*/
    *((_DWORD *)this + 23) = -1; /*0x774970*/
  }
  return result; /*0x774977*/
}



// ==== 0x00774980  WinModemClass::ReadSerial  this=WinModemClass  sig=csp ====
bool __thiscall WinModemClass::ReadSerial(int this)
{
  char v2; // al
  void *v3; // edx
  DWORD v4; // ecx
  DWORD v5; // eax
  int cbInQue; // edi
  DWORD v8; // ecx
  DWORD cbOutQue; // eax
  bool v10; // zf
  void *v11; // ecx
  BOOL v12; // eax
  bool v13; // dl
  DWORD i; // eax
  DWORD NumberOfBytesTransferred; // [esp+10h] [ebp-18h] BYREF
  DWORD v16; // [esp+14h] [ebp-14h]
  DWORD Errors; // [esp+18h] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(_BYTE *)(this + 80); /*0x77498b*/
  v16 = 0; /*0x77498e*/
  if ( v2 ) /*0x774994*/
  {
    v3 = *(void **)(this + 92); /*0x774996*/
    NumberOfBytesTransferred = 0; /*0x7749a4*/
    if ( GetOverlappedResult(v3, (LPOVERLAPPED)(this + 40), &NumberOfBytesTransferred, 0) ) /*0x7749a8*/
    {
      v4 = NumberOfBytesTransferred; /*0x7749b2*/
      *(_BYTE *)(this + 80) = 0; /*0x7749b6*/
      if ( v4 ) /*0x7749bb*/
      {
        v5 = 0; /*0x7749bd*/
        do /*0x7749e4*/
        {
          *(_BYTE *)(*(_DWORD *)(this + 36) + *(_DWORD *)(this + 88)) = *(_BYTE *)(this + v5++ + 108); /*0x7749cd*/
          *(_DWORD *)(this + 88) = ((unsigned __int16)*(_DWORD *)(this + 88) + 1) & 0x1FFF; /*0x7749db*/
        }
        while ( v5 < NumberOfBytesTransferred ); /*0x7749e4*/
        v16 = NumberOfBytesTransferred; /*0x7749e6*/
      }
    }
    else
    {
      if ( GetLastError() == 996 ) /*0x7749f7*/
        return 0; /*0x774a02*/
      Debug::Log(); /*0x774a09*/
    }
  }
  ResetEvent(*(HANDLE *)(this + 56)); /*0x774a15*/
  cbInQue = 1; /*0x774a29*/
  if ( ClearCommError(*(HANDLE *)(this + 92), &Errors, &Stat) ) /*0x774a2e*/
  {
    v8 = Errors; /*0x774a38*/
    cbInQue = Stat.cbInQue; /*0x774a3c*/
    cbOutQue = Stat.cbOutQue; /*0x774a40*/
    v10 = Errors == 0; /*0x774a44*/
    *(_DWORD *)(this + 28) = Stat.cbInQue; /*0x774a46*/
    *(_DWORD *)(this + 32) = cbOutQue; /*0x774a49*/
    if ( !v10 ) /*0x774a4c*/
    {
      WinModemClass::LogCommErrors((WinModemClass *)this, v8, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774a62*/
      cbInQue = Stat.cbInQue; /*0x774a67*/
    }
    if ( cbInQue < 0x2000 ) /*0x774a71*/
    {
      if ( !cbInQue ) /*0x774a7c*/
        cbInQue = 1; /*0x774a7e*/
    }
    else
    {
      cbInQue = 0x2000; /*0x774a73*/
    }
  }
  while ( 1 ) /*0x774a86*/
  {
    v11 = *(void **)(this + 92); /*0x774a86*/
    NumberOfBytesTransferred = 0; /*0x774a95*/
    v12 = ReadFile(v11, (LPVOID)(this + 108), cbInQue, &NumberOfBytesTransferred, (LPOVERLAPPED)(this + 40)); /*0x774a99*/
    v13 = v12; /*0x774aa1*/
    if ( !v12 ) /*0x774aa6*/
      break; /*0x774aa6*/
    if ( NumberOfBytesTransferred ) /*0x774aae*/
    {
      for ( i = 0; i < NumberOfBytesTransferred; ++i ) /*0x774ab0*/
      {
        *(_BYTE *)(*(_DWORD *)(this + 36) + *(_DWORD *)(this + 88)) = *(_BYTE *)(i + this + 108); /*0x774abf*/
        *(_DWORD *)(this + 88) = ((unsigned __int16)*(_DWORD *)(this + 88) + 1) & 0x1FFF; /*0x774acd*/
      }
      v16 += NumberOfBytesTransferred; /*0x774ada*/
    }
    cbInQue = 1; /*0x774ae1*/
    if ( !v13 ) /*0x774ae6*/
      return v16 != 0; /*0x774ae6*/
  }
  if ( GetLastError() == 997 ) /*0x774af5*/
  {
    v10 = v16 == 0; /*0x774afd*/
    *(_BYTE *)(this + 80) = 1; /*0x774aff*/
    return !v10; /*0x774b0d*/
  }
  Debug::Log(); /*0x774b14*/
  return v16 != 0; /*0x7749fb*/
}



// ==== 0x00774B30  WinModemClass::ReadBytes  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::ReadBytes(WinModemClass *this, _BYTE *a2, int a3)
{
  int v4; // ebx
  int v5; // ebx
  int v7; // ebp
  void (*v8)(void); // eax

  if ( !WinModemClass::ReadSerial((int)this) ) /*0x774b37*/
    return 0; /*0x774ba9*/
  v4 = *((_DWORD *)this + 22) - this->q015; /*0x774b46*/
  v5 = v4 + (v4 < 0 ? 0x2000 : 0);
  if ( v5 > a3 ) /*0x774b56*/
    v5 = a3; /*0x774b58*/
  if ( v5 <= 0 ) /*0x774b5c*/
    return v5; /*0x774ba2*/
  v7 = v5; /*0x774b63*/
  do /*0x774b96*/
  {
    v8 = (void (*)(void))*((_DWORD *)this + 25); /*0x774b65*/
    if ( v8 ) /*0x774b6a*/
    {
      if ( *(_BYTE *)(this->q015 + this->WinModemClass_field_0x24) != 13 ) /*0x774b78*/
        v8(); /*0x774b7a*/
    }
    *a2++ = *(_BYTE *)(this->q015 + this->WinModemClass_field_0x24); /*0x774b86*/
    --v7; /*0x774b92*/
    this->q015 = ((unsigned __int16)this->q015 + 1) & 0x1FFF; /*0x774b93*/
  }
  while ( v7 ); /*0x774b96*/
  return v5; /*0x774b99*/
}



// ==== 0x00774BC0  AsyncIO::WaitCompletion  this=WinModemClass  sig=csp ====
int __thiscall AsyncIO::WaitCompletion(int this)
{
  char v2; // al
  int v3; // esi
  int v4; // eax
  DWORD NumberOfBytesTransferred; // [esp+4h] [ebp-1Ch] BYREF
  int Ticks; // [esp+8h] [ebp-18h]
  int v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]

  Ticks = Timer::GetTicks(); /*0x774bcf*/
  v2 = *(_BYTE *)(this + 81); /*0x774bd3*/
  v9 = 0; /*0x774bd8*/
  if ( v2 ) /*0x774be0*/
  {
    Ticks = Timer::GetTicks(); /*0x774bf4*/
    v8 = v10; /*0x774c01*/
    v9 = 300; /*0x774c05*/
    do /*0x774c4d*/
    {
      if ( GetOverlappedResult(*(HANDLE *)(this + 92), (LPOVERLAPPED)(this + 60), &NumberOfBytesTransferred, 0) /*0x774c29*/
        || GetLastError() != 996 )
      {
        break; /*0x774c29*/
      }
      v3 = v9; /*0x774c2f*/
      if ( Ticks != -1 ) /*0x774c36*/
      {
        v4 = Timer::GetTicks() - Ticks; /*0x774c41*/
        if ( v4 >= v3 ) /*0x774c47*/
          break; /*0x774c47*/
        v3 -= v4; /*0x774c49*/
      }
    }
    while ( v3 ); /*0x774c4d*/
    *(_BYTE *)(this + 81) = 0; /*0x774c4f*/
  }
  return ResetEvent(*(HANDLE *)(this + 76)); /*0x774c60*/
}



// ==== 0x00774C70  WinModemClass::WriteSerial  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::WriteSerial(int *this, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int result; // eax
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

  AsyncIO::WaitCompletion((int)this); /*0x774c74*/
  result = WriteFile( /*0x774c90*/
             (HANDLE)*(this + 23),
             lpBuffer,
             nNumberOfBytesToWrite,
             &NumberOfBytesWritten,
             (LPOVERLAPPED)this + 3);
  if ( !result ) /*0x774c98*/
  {
    result = GetLastError(); /*0x774c9a*/
    if ( result == 997 ) /*0x774ca5*/
      *((_BYTE *)this + 81) = 1; /*0x774ca7*/
    else
      return Debug::Log(); /*0x774cb7*/
  }
  return result; /*0x774cab*/
}



// ==== 0x00774CD0  WinModemClass::LoadTypeData  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::LoadTypeData(WinModemClass *this, int a2, char *Str, int a4, int a5)
{
  WinModemClass *v5; // esi
  int v6; // ebx
  int v7; // edi
  int (*WinModemClass_field_0x2C)(void); // eax
  int result; // eax
  int Bytes; // eax
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  char *v15; // esi
  char *v16; // eax
  int v17; // eax
  int v19; // [esp+14h] [ebp-30h]
  int Ticks; // [esp+20h] [ebp-24h]
  int v21; // [esp+28h] [ebp-1Ch]

  v5 = this; /*0x774cd6*/
  v6 = 0; /*0x774ce6*/
  Timer::GetTicks(); /*0x774ce1*/
  Timer::GetTicks(); /*0x774cf4*/
  memset(Str, 0, a4); /*0x774d0e*/
  v7 = a5; /*0x774d24*/
  Ticks = Timer::GetTicks(); /*0x774d28*/
  v21 = a5; /*0x774d30*/
LABEL_2:
  v19 = Timer::GetTicks(); /*0x774d38*/
  while ( 1 )
  {
    WinModemClass_field_0x2C = (int (*)(void))v5[1].WinModemClass_field_0x2C; /*0x774d63*/
    if ( WinModemClass_field_0x2C ) /*0x774d68*/
    {
      result = WinModemClass_field_0x2C(); /*0x774d6a*/
      if ( result ) /*0x774d6e*/
        return result; /*0x774f2f*/
    }
    if ( !stru_A8EB00.?[412] ) /*0x774d7b*/
      return 0; /*0x774d7b*/
    Bytes = WinModemClass::ReadBytes(v5, &Str[v6], a4 - v6 < 0 ? 0 : a4 - v6);
    if ( Bytes ) /*0x774da0*/
    {
      v6 += Bytes; /*0x774da6*/
      Ticks = Timer::GetTicks(); /*0x774db1*/
      v21 = v7; /*0x774dc3*/
    }
    v11 = a2; /*0x774dcb*/
    if ( v19 != -1 ) /*0x774dd2*/
    {
      v12 = Timer::GetTicks() - v19; /*0x774ddd*/
      if ( v12 >= a2 ) /*0x774de3*/
        goto LABEL_20; /*0x774de3*/
      v11 = a2 - v12; /*0x774de5*/
    }
    if ( !v11 || v6 >= a4 ) /*0x774def*/
      goto LABEL_20; /*0x774def*/
    if ( strchr(Str, 13) ) /*0x774df4*/
    {
      if ( v7 == -1 ) /*0x774e07*/
        goto LABEL_20; /*0x774e07*/
      v13 = v21; /*0x774e0d*/
      if ( Ticks != -1 ) /*0x774e14*/
      {
        v14 = Timer::GetTicks() - Ticks; /*0x774e1f*/
        if ( v14 >= v21 ) /*0x774e25*/
          goto LABEL_20; /*0x774e25*/
        v13 = v21 - v14; /*0x774e27*/
      }
      if ( !v13 ) /*0x774e2b*/
      {
LABEL_20:
        Str[a4 - 1] = 0; /*0x774e31*/
        v15 = strstr(Str, word_832678); /*0x774e45*/
        if ( v15 ) /*0x774e4c*/
        {
          if ( *Str == 65 && Str[1] == 84 && strchr(Str, 13) ) /*0x774e5d*/
            v15 = strchr(Str, 13); /*0x774e74*/
          if ( v15 ) /*0x774e78*/
            goto LABEL_38; /*0x774e78*/
        }
        if ( *Str == 13 || *Str == 10 ) /*0x774e83*/
        {
          v15 = strchr(Str, 13); /*0x774e90*/
          v16 = strchr(Str, 10); /*0x774e92*/
          if ( !v15 || v16 && v16 < v15 ) /*0x774ea4*/
            v15 = strchr(Str, 10); /*0x774eb1*/
          if ( v15 ) /*0x774eb5*/
          {
LABEL_38:
            while ( *v15 == 13 || *v15 == 10 ) /*0x774ebf*/
              ++v15; /*0x774ec1*/
            if ( v15 != Str ) /*0x774ec6*/
            {
              memcpy(Str, v15, a4 - (v15 - Str)); /*0x774ed5*/
              v6 -= v15 - Str; /*0x774edd*/
              v7 = a5; /*0x774edf*/
            }
            if ( v15 ) /*0x774ee5*/
            {
              v5 = this; /*0x774ee7*/
              goto LABEL_2; /*0x774eeb*/
            }
          }
        }
        if ( strrchr(Str, 13) ) /*0x774ef3*/
          *strrchr(Str, 13) = 0; /*0x774f0a*/
        result = a2; /*0x774f11*/
        if ( v19 != -1 ) /*0x774f1a*/
        {
          v17 = Timer::GetTicks() - v19; /*0x774f25*/
          if ( v17 < a2 ) /*0x774f2b*/
            return a2 - v17; /*0x774f38*/
          return 0; /*0x774f3b*/
        }
        return result; /*0x774f1a*/
      }
    }
    v5 = this; /*0x774d5f*/
  }
}



// ==== 0x00774F50  WinModemClass::SaveToINI  this=WinModemClass  sig=csp ====
BOOL __thiscall WinModemClass::SaveToINI(WinModemClass *this, const char *NumberOfBytesWritten)
{
  unsigned int v3; // kr18_4
  char Buffer[80]; // [esp+10h] [ebp-50h] BYREF

  Debug::Log(); /*0x774f5e*/
  strcpy(Buffer, aAtd); /*0x774f83*/
  if ( this->u32_18 ) /*0x774f87*/
  {
    Debug::Log(); /*0x774fd5*/
    strcat(Buffer, aP); /*0x775002*/
  }
  else
  {
    strcat(Buffer, g_Str_T); /*0x774fbd*/
    Debug::Log(); /*0x774fc6*/
  }
  Debug::Log(); /*0x775010*/
  strcat(Buffer, NumberOfBytesWritten); /*0x77503e*/
  Debug::Log(); /*0x775047*/
  strcat(Buffer, (const char *)&word_8327A0); /*0x775071*/
  Debug::Log(); /*0x775084*/
  v3 = strlen(Buffer) + 1; /*0x775095*/
  AsyncIO::WaitCompletion((int)this); /*0x77509e*/
  if ( !WriteFile(*((HANDLE *)this + 23), Buffer, v3 - 1, (LPDWORD)&NumberOfBytesWritten, (LPOVERLAPPED)this + 3) ) /*0x7750b6*/
  {
    if ( GetLastError() == 997 ) /*0x7750cb*/
    {
      *((_BYTE *)this + 81) = 1; /*0x7750cf*/
      return AsyncIO::WaitCompletion((int)this); /*0x7750df*/
    }
    Debug::Log(); /*0x7750e9*/
  }
  return AsyncIO::WaitCompletion((int)this); /*0x7750d8*/
}



// ==== 0x00775110  WinModemClass::Dial  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::Dial(
        WinModemClass *this,
        const char *a2,
        unsigned __int8 a3,
        char *Destination,
        signed int Count,
        int a6,
        int a7,
        int a8)
{
  unsigned int v9; // kr0C_4
  int v10; // ecx
  int v11; // edx
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // esi
  int v21; // eax
  size_t v22; // eax
  size_t v24; // eax
  int i; // [esp+10h] [ebp-108h] BYREF
  int Ticks; // [esp+14h] [ebp-104h]
  int v27; // [esp+1Ch] [ebp-FCh]
  DWORD v28; // [esp+20h] [ebp-F8h] BYREF
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-F4h] BYREF
  char Str[80]; // [esp+28h] [ebp-F0h] BYREF
  char Buffer[80]; // [esp+78h] [ebp-A0h] BYREF
  _BYTE v32[80]; // [esp+C8h] [ebp-50h] BYREF

  LOWORD(i) = a3; /*0x77512a*/
  strcpy(Buffer, a2); /*0x77514b*/
  strcat(Buffer, (const char *)&i); /*0x77517a*/
  WinModemClass::ReadBytes(this, v32, 80); /*0x77518d*/
  Sleep(0x64u); /*0x775194*/
  WinModemClass::ReadBytes(this, v32, 80); /*0x7751a6*/
  for ( i = 0; i < a7; ++i ) /*0x7751bc*/
  {
    Ticks = Timer::GetTicks(); /*0x7751d1*/
    v9 = strlen(Buffer) + 1; /*0x7751de*/
    v27 = a6; /*0x7751ea*/
    AsyncIO::WaitCompletion((int)this); /*0x7751f2*/
    if ( !WriteFile(*((HANDLE *)this + 23), Buffer, v9 - 1, &NumberOfBytesWritten, (LPOVERLAPPED)this + 3) ) /*0x77520d*/
    {
      if ( GetLastError() == 997 ) /*0x77521e*/
        *((_BYTE *)this + 81) = 1; /*0x775220*/
      else
        Debug::Log(); /*0x77522d*/
    }
    AsyncIO::WaitCompletion((int)this); /*0x775237*/
    v10 = Ticks; /*0x77523c*/
    v11 = v27; /*0x775240*/
    v12 = v27; /*0x775247*/
    if ( Ticks == -1 ) /*0x775249*/
    {
      v15 = v27; /*0x77526a*/
    }
    else
    {
      v13 = Timer::GetTicks(); /*0x77524f*/
      v10 = Ticks; /*0x775254*/
      v14 = v13 - Ticks; /*0x775258*/
      if ( v14 >= v12 ) /*0x77525c*/
        return 0; /*0x77525c*/
      v11 = v27; /*0x775262*/
      v15 = v12 - v14; /*0x775266*/
    }
    if ( v15 <= 0 ) /*0x77526e*/
      return 0; /*0x77526e*/
    v16 = v11; /*0x775277*/
    if ( v10 == -1 ) /*0x775279*/
    {
      v19 = v11; /*0x775296*/
    }
    else
    {
      v17 = Timer::GetTicks(); /*0x77527f*/
      v10 = Ticks; /*0x775284*/
      v18 = v17 - Ticks; /*0x775288*/
      if ( v18 >= v16 ) /*0x77528c*/
        goto LABEL_16; /*0x77528c*/
      v11 = v27; /*0x77528e*/
      v19 = v16 - v18; /*0x775292*/
    }
    if ( v19 < 1 ) /*0x77529b*/
    {
LABEL_16:
      v11 = 1; /*0x77529d*/
      goto LABEL_21; /*0x7752a2*/
    }
    v20 = v11; /*0x7752a7*/
    if ( v10 != -1 ) /*0x7752a9*/
    {
      v21 = Timer::GetTicks() - Ticks; /*0x7752b4*/
      if ( v21 >= v20 ) /*0x7752ba*/
        v11 = 0; /*0x7752c2*/
      else
        v11 = v20 - v21; /*0x7752be*/
    }
LABEL_21:
    memset(Str, 0, sizeof(Str)); /*0x7752cf*/
    (*(void (__thiscall **)(WinModemClass *, int, char *, int, int))(*(_DWORD *)this->__pad_0 + 20))( /*0x7752e6*/
      this,
      v11,
      Str,
      80,
      a8);
    if ( !strcmp(Str, (const char *)&stru_82BA00.?) ) /*0x77531d*/
      return 3; /*0x775437*/
    if ( strstr(Str, g_INI_Key_OK) ) /*0x77532d*/
      return 2; /*0x775337*/
    if ( strstr(Str, aError) ) /*0x775347*/
      return 1; /*0x775449*/
    if ( strlen(Str) == 3 /*0x77538a*/
      && Str[0] >= 48
      && Str[0] <= 57
      && Str[1] >= 48
      && Str[1] <= 57
      && Str[2] >= 48
      && Str[2] <= 57 )
    {
      v24 = Count; /*0x77544c*/
      if ( Count >= 80 ) /*0x775456*/
        v24 = 80; /*0x775458*/
      strncpy(Destination, Str, v24); /*0x77546b*/
      return 2; /*0x775482*/
    }
    v22 = Count; /*0x775390*/
    if ( Count >= 80 ) /*0x77539a*/
      v22 = 80; /*0x77539c*/
    strncpy(Destination, Str, v22); /*0x7753af*/
    Sleep(0x64u); /*0x7753bf*/
    AsyncIO::WaitCompletion((int)this); /*0x7753c3*/
    if ( !WriteFile(*((HANDLE *)this + 23), &word_8327A0, 1u, &v28, (LPOVERLAPPED)this + 3) ) /*0x7753dc*/
    {
      if ( GetLastError() == 997 ) /*0x7753ed*/
        *((_BYTE *)this + 81) = 1; /*0x7753ef*/
      else
        Debug::Log(); /*0x7753fc*/
    }
    AsyncIO::WaitCompletion((int)this); /*0x775406*/
    Sleep(0x64u); /*0x77540d*/
  }
  return 0; /*0x775428*/
}



// ==== 0x007754A0  WinModemClass::ddtor  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::ddtor(WinModemClass *this, int a2)
{
  *((_DWORD *)this + 25) = a2; /*0x7754a4*/
  return a2; /*0x7754a7*/
}



// ==== 0x007754B0  WinModemClass::HangUp  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::HangUp(WinModemClass *this, int a2)
{
  *((_DWORD *)this + 26) = a2; /*0x7754b4*/
  return a2; /*0x7754b7*/
}



// ==== 0x007754C0  NullModemClass::GetMember23  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::GetMember23(NullModemClass *this)
{
  return *((_DWORD *)this + 23); /*0x7754c3*/
}



// ==== 0x007754D0  WinModemClass::LogCommErrors  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::LogCommErrors(WinModemClass *this, int a2, char a3, int a4, int a5)
{
  int result; // eax

  if ( a2 ) /*0x7754da*/
  {
    if ( (a2 & 8) != 0 ) /*0x7754e3*/
    {
      Debug::Log(); /*0x7754ea*/
      result = this->WinModemClass_field_0x04 + 1; /*0x7754f5*/
      this->WinModemClass_field_0x04 = result; /*0x7754f6*/
    }
    if ( (a2 & 0x10) != 0 ) /*0x7754fc*/
      result = Debug::Log(); /*0x775503*/
    if ( (a2 & 0x400) != 0 ) /*0x77550e*/
    {
      Debug::Log(); /*0x775515*/
      result = this->WinModemClass_field_0x08 + 1; /*0x775520*/
      this->WinModemClass_field_0x08 = result; /*0x775521*/
    }
    if ( (a2 & 2) != 0 ) /*0x775527*/
    {
      Debug::Log(); /*0x77552e*/
      result = this->WinModemClass_field_0x0C + 1; /*0x775539*/
      this->WinModemClass_field_0x0C = result; /*0x77553a*/
    }
    if ( (a2 & 1) != 0 ) /*0x775540*/
    {
      Debug::Log(); /*0x775547*/
      result = this->WinModemClass_field_0x10 + 1; /*0x775552*/
      this->WinModemClass_field_0x10 = result; /*0x775553*/
    }
    if ( (a2 & 4) != 0 ) /*0x775559*/
    {
      Debug::Log(); /*0x775560*/
      result = this->WinModemClass_field_0x14 + 1; /*0x77556b*/
      this->WinModemClass_field_0x14 = result; /*0x77556c*/
    }
    if ( (a2 & 0x100) != 0 ) /*0x775572*/
    {
      Debug::Log(); /*0x775579*/
      result = this->WinModemClass_field_0x18 + 1; /*0x775584*/
      this->WinModemClass_field_0x18 = result; /*0x775585*/
    }
  }
  if ( (a3 & 1) != 0 ) /*0x77558f*/
    result = Debug::Log(); /*0x775596*/
  if ( (a3 & 2) != 0 ) /*0x7755a1*/
    result = Debug::Log(); /*0x7755a8*/
  if ( (a3 & 4) != 0 ) /*0x7755b3*/
    result = Debug::Log(); /*0x7755ba*/
  if ( (a3 & 8) != 0 ) /*0x7755c5*/
    result = Debug::Log(); /*0x7755cc*/
  if ( (a3 & 0x10) != 0 ) /*0x7755d7*/
    result = Debug::Log(); /*0x7755de*/
  if ( (a3 & 0x20) != 0 ) /*0x7755e9*/
    result = Debug::Log(); /*0x7755f0*/
  if ( (a3 & 0x40) != 0 ) /*0x7755fd*/
    return Debug::Log(); /*0x775604*/
  return result; /*0x7755f8*/
}



// ==== 0x00775610  WinModemClass::QueryInterface  this=WinModemClass  sig=csp ====
void *__thiscall WinModemClass::QueryInterface(WinModemClass *this, char a2)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 23); /*0x775613*/
  *(_DWORD *)this->__pad_0 = &WinModemClass::`vftable'; /*0x775616*/
  if ( v3 != -1 ) /*0x77561f*/
  {
    Debug::Log(); /*0x775626*/
    CloseHandle(*((HANDLE *)this + 23)); /*0x775632*/
    *((_DWORD *)this + 23) = -1; /*0x775638*/
  }
  if ( this->WinModemClass_field_0x24 ) /*0x77563f*/
    __3_YAXPAX_Z((void *)this->WinModemClass_field_0x24); /*0x775647*/
  if ( (a2 & 1) != 0 ) /*0x775654*/
    __3_YAXPAX_Z(this); /*0x775657*/
  return this; /*0x775661*/
}



// ==== 0x00775670  sub_775670  this=-  sig=ida-proto ====
int sub_775670()
{
  dword_B72F28 = 0; /*0x775672*/
  dword_B72F2C = 0; /*0x775677*/
  dword_B72F30 = 0; /*0x77567c*/
  dword_B72F34 = 0; /*0x775681*/
  return 0; /*0x775686*/
}



// ==== 0x00775690  ScreenDialogToClient  this=Dialog  sig=csp ====
int __fastcall ScreenDialogToClient(HWND hWnd, LPRECT lpRect)
{
  int result; // eax
  int v4; // edi
  LONG v5; // ecx
  LONG top; // eax
  LONG v7; // edx
  LONG v8; // edx
  LONG v9; // ecx
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  result = GetWindowRect(hWnd, lpRect); /*0x775699*/
  v4 = result; /*0x77569f*/
  if ( result ) /*0x7756a3*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x7756b7*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x7756c8*/
    v5 = lpRect->right - Rect.left; /*0x7756d9*/
    top = Rect.top; /*0x7756db*/
    lpRect->left -= Rect.left; /*0x7756df*/
    v7 = lpRect->top; /*0x7756e1*/
    lpRect->right = v5; /*0x7756e4*/
    v8 = v7 - top; /*0x7756ea*/
    v9 = lpRect->bottom - top; /*0x7756ec*/
    lpRect->top = v8; /*0x7756f0*/
    lpRect->bottom = v9; /*0x7756f3*/
    return v4; /*0x7756ee*/
  }
  return result; /*0x7756a5*/
}



// ==== 0x00775700  CreateDialogIndirect  this=ObjectClass  sig=csp ====
const DLGTEMPLATE *__fastcall CreateDialogIndirect(
        HINSTANCE hInstance,
        HWND a2,
        HWND hWndParent,
        DLGPROC lpDialogFunc,
        int a5)
{
  int v5; // eax
  HWND *v6; // edi
  const DLGTEMPLATE *result; // eax
  HWND DialogIndirectParamA; // eax
  HWND v11; // esi

  v5 = g_DialogTrackingList; /*0x775700*/
  v6 = (HWND *)(8 * g_DialogTrackingList + 12004648); /*0x775708*/
  stru_B72D28[2 * g_DialogTrackingList] = 0; /*0x775718*/
  dword_B72D2C[2 * v5] = 0; /*0x775720*/
  result = (const DLGTEMPLATE *)FindResource((unsigned __int16)a2, (const CHAR *)5); /*0x77572b*/
  if ( result ) /*0x775732*/
  {
    ++g_DialogTrackingList; /*0x775747*/
    DialogIndirectParamA = CreateDialogIndirectParamA(hInstance, result, hWndParent, lpDialogFunc, 0); /*0x775755*/
    v11 = DialogIndirectParamA; /*0x77575b*/
    if ( DialogIndirectParamA ) /*0x77575f*/
    {
      ++dword_A8ED8C; /*0x77577c*/
      DialogQueue::PushEntry(DialogIndirectParamA); /*0x775781*/
      EnumChildWindows(v11, DialogClass::Reposition, 1); /*0x77578e*/
      DialogClass::Reposition(v11, 0); /*0x775797*/
      *v6 = v11; /*0x77579c*/
      v6[1] = a2; /*0x77579e*/
      if ( a5 ) /*0x7757a7*/
        ShowWindow(v11, 1); /*0x7757ac*/
      SetForegroundWindow(v11); /*0x7757b3*/
      SetFocus(v11); /*0x7757ba*/
      hWnd = v11; /*0x7757c0*/
      dword_B72F48 = (int)a2; /*0x7757c9*/
      return (const DLGTEMPLATE *)v11; /*0x7757c6*/
    }
    else
    {
      --g_DialogTrackingList; /*0x775769*/
      return 0; /*0x77576e*/
    }
  }
  return result; /*0x775734*/
}



// ==== 0x007757E0  CloseDialog  this=AbstractClass  sig=csp ====
int __fastcall CloseDialog(HWND a1, int a2)
{
  int result; // eax
  Dialog *v3; // ebx
  ObjectClass *i; // esi
  int v5; // edi
  DialogQueue **v6; // esi
  int v7; // ebx
  HWND v8; // esi
  int v9; // edi

  if ( a1 || g_DialogTrackingList && (a1 = *(&g_ClipboardBuffer + 2 * g_DialogTrackingList)) != 0 ) /*0x7757fe*/
  {
    result = 0; /*0x775806*/
    if ( g_DialogTrackingList <= 0 ) /*0x77580a*/
      goto LABEL_11; /*0x77580a*/
    for ( i = &stru_B72D28; i->AbstractClass != a1; i = (ObjectClass *)((char *)i + 8) ) /*0x77580c*/
    {
      if ( ++result >= g_DialogTrackingList ) /*0x77581b*/
      {
        LOBYTE(result) = 0; /*0x77581e*/
        return result; /*0x775822*/
      }
    }
    v5 = result; /*0x775826*/
    if ( result == -1 ) /*0x775828*/
    {
LABEL_11:
      LOBYTE(result) = 0; /*0x77582b*/
    }
    else
    {
      Dialog::IdleProcess(v3, i); /*0x775831*/
      if ( g_DialogTrackingList - 1 >= v5 ) /*0x77583e*/
      {
        v6 = (DialogQueue **)(8 * (g_DialogTrackingList - 1) + 12004648); /*0x775840*/
        v7 = g_DialogTrackingList - v5; /*0x775851*/
        do /*0x775870*/
        {
          DialogQueue::RemoveEntry(*v6); /*0x775855*/
          DestroyWindow((HWND)*v6); /*0x77585d*/
          v6 -= 2; /*0x775865*/
          --v7; /*0x775869*/
          --*(_DWORD *)&stru_A8EB00.?[424]; /*0x77586a*/
        }
        while ( v7 ); /*0x775870*/
      }
      g_DialogTrackingList = v5; /*0x775875*/
      if ( v5 ) /*0x77587d*/
      {
        v8 = *(&g_ClipboardBuffer + 2 * v5); /*0x77587f*/
        v9 = dword_B72D24[2 * v5]; /*0x775886*/
        SetForegroundWindow(v8); /*0x77588e*/
        InvalidateRect(v8, 0, 0); /*0x775897*/
        UpdateWindow(v8); /*0x77589e*/
        hWnd = v8; /*0x7758a4*/
        dword_B72F48 = v9; /*0x7758aa*/
        SetFocus(v8); /*0x7758b1*/
        result = SendMessageA(hWnd, 0x4B0u, 0, 0); /*0x7758c5*/
      }
      else
      {
        hWnd = 0; /*0x7758e1*/
        dword_B72F48 = 0; /*0x7758e8*/
        result = (int)SetFocus(g_hWnd); /*0x7758ee*/
      }
      LOBYTE(result) = 1; /*0x7758cb*/
      dword_B72F4C = a2; /*0x7758d3*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x775801*/
  }
  return result; /*0x775800*/
}



// ==== 0x00775940  Dialog::FindByHandle  this=Dialog  sig=csp ====
int __thiscall Dialog::FindByHandle(Dialog *this)
{
  int v1; // eax
  Dialog **i; // edx

  v1 = g_DialogTrackingList - 1; /*0x775945*/
  if ( g_DialogTrackingList - 1 < 0 ) /*0x775948*/
    return 0; /*0x77595d*/
  for ( i = (Dialog **)(8 * v1 + 12004652); this != *i; i -= 2 ) /*0x77594a*/
  {
    if ( --v1 < 0 ) /*0x77595b*/
      return 0; /*0x77595b*/
  }
  return *((_DWORD *)&stru_B72D28.AbstractClass + 2 * v1); /*0x77595f*/
}



// ==== 0x007759B0  Dialog::FindByPtr  this=Dialog  sig=csp ====
int __thiscall Dialog::FindByPtr(Dialog *this)
{
  int v1; // eax
  Dialog **i; // edx

  v1 = g_DialogTrackingList - 1; /*0x7759b5*/
  if ( g_DialogTrackingList - 1 < 0 ) /*0x7759b8*/
    return 0; /*0x7759d1*/
  for ( i = (Dialog **)(8 * v1 + 12004648); this != *i || v1 <= 0; i -= 2 ) /*0x7759ba*/
  {
    if ( --v1 < 0 ) /*0x7759cf*/
      return 0; /*0x7759cf*/
  }
  return (int)*(&g_ClipboardBuffer + 2 * v1); /*0x7759d3*/
}



// ==== 0x007759E0  MessageDialogLoopAlt  this=AbstractClass  sig=csp ====
int __fastcall MessageDialogLoopAlt(HWND hWnd, unsigned __int8 (*a2)(void), int a3, char a4, char a5)
{
  int v7; // eax
  TechnoTypeClass *v8; // ecx
  int v9; // eax
  HWND *v10; // ecx
  int v12; // [esp+0h] [ebp-2Ch]
  MSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  if ( a4 ) /*0x7759f1*/
  {
    SetForegroundWindow(hWnd); /*0x7759f4*/
    SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x775a04*/
  }
  if ( a5 ) /*0x775a10*/
    ShowWindow(hWnd, 1); /*0x775a15*/
  while ( 1 ) /*0x775a2d*/
  {
    v7 = 0; /*0x775a2d*/
    if ( g_DialogTrackingList <= 0 ) /*0x775a31*/
      break; /*0x775a31*/
    v8 = (TechnoTypeClass *)stru_B72D28; /*0x775a37*/
    while ( (HWND)v8->ObjectTypeClass[0] != hWnd ) /*0x775a3e*/
    {
      ++v7; /*0x775a40*/
      v8 = (TechnoTypeClass *)((char *)v8 + 8); /*0x775a41*/
      if ( v7 >= g_DialogTrackingList ) /*0x775a46*/
        goto LABEL_23; /*0x775a46*/
    }
    if ( a2 && a2() == 1 ) /*0x775a56*/
      CloseDialog(hWnd, 2); /*0x775a5f*/
    if ( !byte_B77DC1 ) /*0x775a6b*/
    {
      LOBYTE(v8) = 0; /*0x775a6d*/
      ScreenSaver::Process(v8, v12); /*0x775a6f*/
    }
    ++dword_AA0430; /*0x775a7f*/
    while ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x775a8d*/
    {
      TranslateMessage(&Msg); /*0x775a9b*/
      DispatchMessageA(&Msg); /*0x775aa2*/
      v9 = 0; /*0x775aaa*/
      if ( g_DialogTrackingList <= 0 ) /*0x775aae*/
        break; /*0x775aae*/
      v10 = (HWND *)stru_B72D28; /*0x775ab0*/
      while ( *v10 != hWnd ) /*0x775ab7*/
      {
        ++v9; /*0x775ab9*/
        v10 += 2; /*0x775aba*/
        if ( v9 >= g_DialogTrackingList ) /*0x775abf*/
          goto LABEL_22; /*0x775abf*/
      }
    }
LABEL_22:
    Sleep(0); /*0x775ad8*/
  }
LABEL_23:
  if ( a4 ) /*0x775aeb*/
    SendMessageA(hWnd, 0x4A9u, 0, 0); /*0x775af7*/
  return dword_B72F4C; /*0x775b02*/
}



// ==== 0x00775B10  Dialog::GetCurrent  this=Dialog  sig=csp ====
int Dialog::GetCurrent()
{
  return (int)hWnd; /*0x775b15*/
}



// ==== 0x00775B20  Dialog::GetCurrentType  this=Dialog  sig=csp ====
int Dialog_GetCurrentType()
{
  return dword_B72F48; /*0x775b25*/
}



// ==== 0x00775B30  sub_775B30  this=-  sig=ida-proto ====
int sub_775B30()
{
  return dword_B72F4C; /*0x775b35*/
}



// ==== 0x00775B40  sub_775B40  this=-  sig=csp ====
INT_PTR __stdcall sub_775B40(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  return 0; /*0x775b42*/
}



// ==== 0x00775B50  sub_775B50  this=-  sig=csp ====
int __fastcall sub_775B50(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), int a3, LONG *a4)
{
  HWND DialogParamA; // esi
  LONG bottom; // ecx
  struct tagRECT Rect; // [esp+4h] [ebp-10h] BYREF

  DialogParamA = CreateDialogParamA(g_hInstance, (LPCSTR)a1, 0, a2, 0); /*0x775b70*/
  GetClientRect(DialogParamA, &Rect); /*0x775b74*/
  DestroyWindow(DialogParamA); /*0x775b7b*/
  bottom = Rect.bottom; /*0x775b89*/
  *a4 = Rect.right; /*0x775b8e*/
  a4[1] = bottom; /*0x775b90*/
  return 1; /*0x775b8d*/
}



// ==== 0x00775BA0  Dialog::GetField  this=Dialog  sig=csp ====
int __thiscall Dialog::GetField(Dialog *this)
{
  EnumChildWindows((HWND)this, DialogClass::Reposition, 1); /*0x775bab*/
  return DialogClass::Reposition((HWND)this, 0); /*0x775bb9*/
}



// ==== 0x00775BC0  DialogClass::Reposition  this=DialogClass  sig=csp ====
BOOL __stdcall DialogClass_Reposition(HWND hWnd, LPARAM a2)
{
  HWND WindowLongA; // eax
  LONG right; // edi
  HWND DialogParamA; // esi
  LONG bottom; // ebx
  int v7; // [esp-Ch] [ebp-BCh]
  int v8; // [esp-8h] [ebp-B8h]
  struct tagRECT Rect; // [esp+10h] [ebp-A0h] BYREF
  struct tagRECT v10; // [esp+20h] [ebp-90h] BYREF
  CHAR ClassName[128]; // [esp+30h] [ebp-80h] BYREF

  GetWindowRect(hWnd, &Rect); /*0x775bdd*/
  GetClassNameA(hWnd, ClassName, 128); /*0x775bea*/
  if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x775c01*/
    SendMessageA(hWnd, 0x152u, 0, (LPARAM)&Rect); /*0x775c37*/
  if ( a2 ) /*0x775c46*/
  {
    WindowLongA = (HWND)GetWindowLongA(hWnd, -8); /*0x775c4b*/
    GetWindowRect(WindowLongA, &v10); /*0x775c57*/
    Rect.left -= v10.left; /*0x775c79*/
    Rect.right -= v10.left; /*0x775c7d*/
    Rect.top -= v10.top; /*0x775c81*/
    Rect.bottom -= v10.top; /*0x775c85*/
  }
  right = (LONG)dwInitParam; /*0x775c89*/
  if ( dwInitParam ) /*0x775c91*/
  {
    bottom = dword_B72F58; /*0x775cd7*/
  }
  else
  {
    DialogParamA = CreateDialogParamA(g_hInstance, (LPCSTR)0xC6, 0, sub_775B40, 0); /*0x775cac*/
    GetClientRect(DialogParamA, &v10); /*0x775cb4*/
    DestroyWindow(DialogParamA); /*0x775cbb*/
    right = v10.right; /*0x775cc1*/
    bottom = v10.bottom; /*0x775cc5*/
    dwInitParam = (HWND)v10.right; /*0x775cc9*/
    dword_B72F58 = v10.bottom; /*0x775ccf*/
  }
  v8 = dword_849DE4 * (Rect.bottom - Rect.top + 1) / bottom; /*0x775d19*/
  v7 = dword_849DE0 * (Rect.right - Rect.left + 1) / right; /*0x775d1a*/
  Rect.left = Rect.left * dword_849DE0 / right; /*0x775d2e*/
  Rect.right = v7 + Rect.left - 1; /*0x775d32*/
  Rect.top = Rect.top * dword_849DE4 / bottom; /*0x775d36*/
  Rect.bottom = v8 + Rect.top - 1; /*0x775d48*/
  MoveWindow(hWnd, Rect.left, Rect.top, v7, v8, 1); /*0x775d4c*/
  return 1; /*0x775d52*/
}



// ==== 0x00775D70  sub_775D70  this=-  sig=ida-proto ====
int sub_775D70()
{
  dword_B72F38 = 0; /*0x775d77*/
  dword_B72F3C = 0; /*0x775d7c*/
  dword_B72F40 = 0; /*0x775d81*/
  return atexit(sub_775D90); /*0x775d8c*/
}



// ==== 0x00775D90  sub_775D90  this=-  sig=ida-proto ====
void __cdecl sub_775D90()
{
  dword_B72F38 = 0; /*0x775d95*/
  __3_YAXPAX_Z(dword_B72F40); /*0x775da0*/
}



// ==== 0x00775DB0  CacheRenderedText  this=-  sig=ida-proto ====
int __fastcall CacheRenderedText(HDC a1, const char *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ebp
  const void *v8; // esi
  int result; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // ebx
  HDC v14; // edx
  char *v15; // esi
  char *v16; // edi
  char v17; // dl
  unsigned int v18; // ecx
  int v19; // ebx
  HDC v20; // edx
  char *v21; // esi
  char *v22; // edi
  char v23; // dl
  unsigned int v24; // ecx
  char *v25; // ebp
  HDC hdc; // [esp+10h] [ebp-98h]
  HDC hdca; // [esp+10h] [ebp-98h]
  char *v28; // [esp+14h] [ebp-94h]
  int v29; // [esp+14h] [ebp-94h]
  _DWORD v30[36]; // [esp+18h] [ebp-90h] BYREF

  v5 = dword_B72F38; /*0x775db6*/
  v6 = 0; /*0x775dbd*/
  if ( dword_B72F38 <= 0 ) /*0x775dc9*/
  {
LABEL_11:
    if ( a1 ) /*0x775e77*/
    {
      result = Render_Render_7760B0(a1, a3, a4, a5); /*0x775eb6*/
      v10 = result; /*0x775ebb*/
      v29 = result; /*0x775ebf*/
      if ( result ) /*0x775ec3*/
      {
        strcpy((char *)v30, a2); /*0x775ef2*/
        v30[33] = a4; /*0x775f09*/
        v11 = dword_B72F38; /*0x775f10*/
        v30[34] = a5; /*0x775f15*/
        v12 = dword_B72F38; /*0x775f1c*/
        v30[32] = a3; /*0x775f1e*/
        v30[35] = v10; /*0x775f27*/
        v13 = dword_B72F3C; /*0x775f30*/
        if ( dword_B72F38 >= dword_B72F3C ) /*0x775f38*/
        {
          v13 = 2 * dword_B72F38; /*0x775f46*/
          if ( 2 * dword_B72F38 < 10 ) /*0x775f4c*/
            v13 = 10; /*0x775f4e*/
          v14 = (HDC)__2_YAPAXI_Z(144 * v13); /*0x775f5f*/
          memset(v14, 0, 4 * ((unsigned int)(144 * v13) >> 2)); /*0x775f6a*/
          hdc = v14; /*0x775f74*/
          v15 = (char *)dword_B72F40; /*0x775f7a*/
          if ( dword_B72F40 ) /*0x775f82*/
          {
            v16 = (char *)v14; /*0x775f89*/
            v17 = -112 * dword_B72F38; /*0x775f91*/
            v18 = (unsigned int)(144 * dword_B72F38) >> 2; /*0x775f93*/
            qmemcpy(v16, dword_B72F40, 4 * v18); /*0x775f96*/
            qmemcpy(&v16[4 * v18], &v15[4 * v18], v17 & 3); /*0x775f9d*/
            v15 = (char *)dword_B72F40; /*0x775f9f*/
          }
          __3_YAXPAX_Z(v15); /*0x775fa6*/
          dword_B72F40 = hdc; /*0x775fb2*/
          v11 = dword_B72F38; /*0x775fb7*/
          dword_B72F3C = v13; /*0x775fbc*/
        }
        if ( v11 >= v13 ) /*0x775fc4*/
        {
          v19 = 2 * v11; /*0x775fc6*/
          if ( 2 * v11 < 10 ) /*0x775fcc*/
            v19 = 10; /*0x775fce*/
          v20 = (HDC)__2_YAPAXI_Z(144 * v19); /*0x775fdf*/
          memset(v20, 0, 4 * ((unsigned int)(144 * v19) >> 2)); /*0x775fea*/
          hdca = v20; /*0x775ff4*/
          v21 = (char *)dword_B72F40; /*0x775ffa*/
          if ( dword_B72F40 ) /*0x776002*/
          {
            v22 = (char *)v20; /*0x776009*/
            v23 = -112 * dword_B72F38; /*0x776011*/
            v24 = (unsigned int)(144 * dword_B72F38) >> 2; /*0x776013*/
            qmemcpy(v22, dword_B72F40, 4 * v24); /*0x776016*/
            qmemcpy(&v22[4 * v24], &v21[4 * v24], v23 & 3); /*0x77601d*/
            v21 = (char *)dword_B72F40; /*0x77601f*/
          }
          __3_YAXPAX_Z(v21); /*0x776026*/
          dword_B72F40 = hdca; /*0x776032*/
          v11 = dword_B72F38; /*0x776037*/
          dword_B72F3C = v19; /*0x77603c*/
        }
        if ( v12 < v11 ) /*0x776044*/
        {
          memcpy((char *)dword_B72F40 + 144 * v12 + 144, (char *)dword_B72F40 + 144 * v12, 144 * v11 - 144 * v12); /*0x776068*/
          v11 = dword_B72F38; /*0x77606d*/
        }
        v25 = (char *)dword_B72F40 + 144 * v12; /*0x776082*/
        if ( v25 ) /*0x776084*/
        {
          qmemcpy(v25, v30, 0x90u); /*0x776091*/
          v11 = dword_B72F38; /*0x776093*/
        }
        dword_B72F38 = v11 + 1; /*0x77609b*/
        return v29; /*0x7760a0*/
      }
    }
    else
    {
      return 0; /*0x775e7c*/
    }
  }
  else
  {
    v8 = dword_B72F40; /*0x775dcf*/
    v28 = (char *)dword_B72F40; /*0x775dd5*/
    while ( 1 ) /*0x775dd9*/
    {
      if ( v6 >= 0 && v6 < v5 ) /*0x775ddf*/
        qmemcpy(v30, v8, sizeof(v30)); /*0x775dea*/
      if ( !strcmp((const char *)v30, a2) && v30[32] == a3 && v30[33] == a4 && v30[34] == a5 ) /*0x775e53*/
        return v30[35]; /*0x775e88*/
      v5 = dword_B72F38; /*0x775e59*/
      ++v6; /*0x775e5e*/
      v8 = v28 + 144; /*0x775e5f*/
      v28 += 144; /*0x775e67*/
      if ( v6 >= dword_B72F38 ) /*0x775e6b*/
        goto LABEL_11; /*0x775e6b*/
    }
  }
  return result; /*0x775e79*/
}



// ==== 0x007760B0  Render_Render_7760B0  this=-  sig=csp ====
HFONT __fastcall sub_7760B0(HDC hdc, const char *a2, LONG a3, LONG a4, char a5)
{
  HFONT v7; // eax
  HFONT v8; // esi
  HGDIOBJ v9; // ebx
  HGDIOBJ v10; // eax
  struct tagPOINT pt; // [esp+10h] [ebp-7Ch] BYREF
  struct tagTEXTMETRICA tm; // [esp+18h] [ebp-74h] BYREF
  LOGFONTA lf; // [esp+50h] [ebp-3Ch] BYREF

  SaveDC(hdc); /*0x7760bc*/
  SetGraphicsMode(hdc, 2); /*0x7760c5*/
  ModifyWorldTransform(hdc, 0, 1u); /*0x7760d1*/
  SetViewportOrgEx(hdc, 0, 0, 0); /*0x7760db*/
  SetWindowOrgEx(hdc, 0, 0, 0); /*0x7760e5*/
  pt.x = a3; /*0x776101*/
  pt.y = a4; /*0x776105*/
  DPtoLP(hdc, &pt, 1); /*0x776109*/
  memset(&lf.lfWidth, 0, 12); /*0x77610f*/
  lf.lfHeight = -pt.y; /*0x776121*/
  lf.lfCharSet = 0; /*0x776133*/
  lf.lfOutPrecision = 0; /*0x77613b*/
  lf.lfClipPrecision = 0; /*0x776145*/
  lf.lfWeight = (a5 & 1) != 0 ? 0x2BC : 0;
  lf.lfUnderline = (a5 & 4) != 0; /*0x77615c*/
  lf.lfStrikeOut = (a5 & 8) != 0; /*0x776160*/
  lf.lfQuality = 0; /*0x77616c*/
  lf.lfItalic = (a5 & 2) != 0; /*0x776176*/
  lf.lfPitchAndFamily = 0; /*0x776187*/
  strcpy(lf.lfFaceName, a2); /*0x77618b*/
  v7 = CreateFontIndirectA(&lf); /*0x77619f*/
  v8 = v7; /*0x7761a1*/
  if ( a3 ) /*0x7761aa*/
  {
    v9 = SelectObject(hdc, v7); /*0x7761ba*/
    GetTextMetricsA(hdc, &tm); /*0x7761be*/
    v10 = SelectObject(hdc, v9); /*0x7761c6*/
    DeleteObject(v10); /*0x7761c9*/
    lf.lfWidth = Math::RoundToInt(fabs((double)pt.x) * (double)tm.tmAveCharWidth / fabs((double)pt.y) + 0.5); /*0x7761ec*/
    v8 = CreateFontIndirectA(&lf); /*0x7761f7*/
  }
  RestoreDC(hdc, -1); /*0x7761fc*/
  return v8; /*0x776204*/
}



// ==== 0x00776210  sub_776210  this=-  sig=ida-proto ====
int sub_776210()
{
  dword_B73088 = 0; /*0x776212*/
  dword_B7308C = 0; /*0x776217*/
  dword_B73090 = 0; /*0x77621c*/
  dword_B73094 = 0; /*0x776221*/
  return 0; /*0x776226*/
}



// ==== 0x00776230  sub_776230  this=-  sig=ida-proto ====
char __fastcall sub_776230(HWND hWnd, HWND a2, LPARAM *a3)
{
  LRESULT v6; // eax
  int v7; // ebx
  int v8; // edi
  LPARAM lParam[4]; // [esp+10h] [ebp-10h] BYREF

  if ( a3[23] ) /*0x77623f*/
  {
    if ( !SendMessageA(hWnd, 0x4C9u, (WPARAM)a2, a3[15]) ) /*0x77625b*/
      return 0; /*0x77626a*/
    *(&qword_B730A0 + 1) = (HWND)a3[15]; /*0x77627a*/
    SendMessageA(a2, 0x110Bu, 9u, 0); /*0x776280*/
    himl = (HIMAGELIST)SendMessageA(a2, 0x1112u, 0, a3[15]); /*0x776294*/
    lParam[0] = a3[15]; /*0x7762a5*/
    SendMessageA(a2, 0x1104u, 0, (LPARAM)lParam); /*0x7762a9*/
    v6 = SendMessageA(a2, 0x1106u, 0, 0); /*0x7762b5*/
    v7 = a3[24] - v6 - lParam[0]; /*0x7762c8*/
    v8 = a3[25] - lParam[1]; /*0x7762ca*/
    SetCapture(hWnd); /*0x7762cc*/
    ImageList_BeginDrag(himl, 0, v7, v8); /*0x7762dd*/
    ImageList_DragEnter(hWnd, 0, 0); /*0x7762e8*/
    SetTimer(hWnd, 1u, 1u, 0); /*0x7762f5*/
    byte_B7309C = 1; /*0x7762fb*/
    qword_B730A0 = a2; /*0x776302*/
  }
  return byte_B7309C; /*0x776261*/
}



// ==== 0x00776320  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_776320(ObjectClass *this)
{
  int v2; // edx
  HCURSOR CursorA; // eax
  char v4; // bl
  HCURSOR v5; // eax
  struct tagPOINT v7[5]; // [esp+4h] [ebp-88h] BYREF
  struct tagRECT Rect; // [esp+2Ch] [ebp-60h] BYREF
  WPARAM wParam[10]; // [esp+3Ch] [ebp-50h] BYREF
  WPARAM v10[10]; // [esp+64h] [ebp-28h] BYREF

  if ( !byte_B7309C ) /*0x776330*/
    return 0; /*0x776480*/
  ImageList_DragShowNolock(0); /*0x77633b*/
  qmemcpy(v7, HitDialogTest((unsigned int)this, v2, v7), sizeof(v7)); /*0x776359*/
  qmemcpy(wParam, v7, sizeof(wParam)); /*0x77636c*/
  if ( SendMessageA((HWND)v7[0].y, 0x4C8u, (WPARAM)wParam, (LPARAM)this) ) /*0x776379*/
  {
    CursorA = LoadCursorA(0, (LPCSTR)0x7F00); /*0x77638a*/
    SetCursor(CursorA); /*0x776391*/
    v4 = 1; /*0x776397*/
  }
  else
  {
    v5 = LoadCursorA(0, (LPCSTR)0x7F88); /*0x7763a2*/
    SetCursor(v5); /*0x7763a9*/
    v4 = 0; /*0x7763af*/
  }
  ImageList_DragShowNolock(1); /*0x7763b3*/
  GetWindowRect((HWND)wParam[1], &Rect); /*0x7763c3*/
  ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top); /*0x7763df*/
  ImageList_EndDrag(); /*0x7763e5*/
  ReleaseCapture(); /*0x7763eb*/
  ImageList_Destroy(himl); /*0x7763f8*/
  himl = 0; /*0x776405*/
  byte_B7309C = 0; /*0x77640f*/
  qmemcpy(v7, HitDialogTest((unsigned int)this, (int)v7, v7), sizeof(v7)); /*0x776426*/
  qmemcpy(v10, v7, sizeof(v10)); /*0x776435*/
  if ( v4 ) /*0x77643c*/
    SendMessageA((HWND)v7[0].y, 0x4CAu, (WPARAM)v10, (LPARAM)this); /*0x77644e*/
  KillTimer((HWND)v10[1], 1u); /*0x77645b*/
  SendMessageA(qword_B730A0, 0x110Bu, 8u, 0); /*0x776470*/
  return 1; /*0x776478*/
}



// ==== 0x00776490  HitDialogTest  this=ObjectClass  sig=csp ====
struct tagPOINT *__fastcall Dialog_HitTest(unsigned int a1, int a2, struct tagPOINT *a3)
{
  LONG v3; // ebx
  LONG v4; // esi
  HWND WindowLongA; // eax
  HWND v6; // edi
  HWND v7; // ebp
  POINT v9; // [esp-8h] [ebp-58h]
  struct tagPOINT Point; // [esp+10h] [ebp-40h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-38h] BYREF
  struct tagPOINT v12[5]; // [esp+28h] [ebp-28h] BYREF

  v3 = HIWORD(a1); /*0x7764a7*/
  v4 = (unsigned __int16)a1; /*0x7764a9*/
  v9.y = HIWORD(a1); /*0x7764af*/
  v9.x = (unsigned __int16)a1; /*0x7764b0*/
  WindowLongA = (HWND)GetWindowLongA(qword_B730A0, -8); /*0x7764b4*/
  v6 = ChildWindowFromPoint(WindowLongA, v9); /*0x7764bd*/
  v7 = (HWND)GetWindowLongA(v6, -8); /*0x7764ca*/
  if ( v6 == (HWND)GetWindowLongA(qword_B730A0, -8) ) /*0x7764d7*/
    v7 = v6; /*0x7764d9*/
  Point = (struct tagPOINT)__PAIR64__(v3, v4); /*0x7764df*/
  ClientToScreen(v7, &Point); /*0x7764e9*/
  v12[2] = Point; /*0x7764fd*/
  GetWindowRect(v6, &Rect); /*0x776505*/
  v12[4].x = Point.x - Rect.left; /*0x77651d*/
  v12[0].x = (LONG)v6; /*0x77652d*/
  v12[1] = *(struct tagPOINT *)&qword_B730A0; /*0x776531*/
  v12[3].x = v4; /*0x77653b*/
  v12[4].y = Point.y - Rect.top; /*0x77653f*/
  v12[0].y = (LONG)v7; /*0x77654e*/
  v12[3].y = v3; /*0x776556*/
  qmemcpy(a3, v12, 0x28u); /*0x77655a*/
  return a3; /*0x77655c*/
}



// ==== 0x00776570  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_776570(ObjectClass *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  HWND WindowLongA; // eax
  LRESULT v6; // eax
  LPARAM v7; // edi
  UINT v8; // [esp-10h] [ebp-2Ch]
  LRESULT v9; // [esp-Ch] [ebp-28h]
  struct tagPOINT Point; // [esp+4h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  if ( this == (ObjectClass *)1 && byte_B7309C )
  {
    GetCursorPos(&Point); /*0x77658f*/
    GetWindowRect(qword_B730A0, &Rect); /*0x7765a1*/
    v1 = Rect.top - Point.y; /*0x7765b3*/
    v2 = Point.y - Rect.bottom; /*0x7765b5*/
    if ( Rect.top - Point.y > Point.y - Rect.bottom ) /*0x7765b9*/
      v2 = Rect.top - Point.y; /*0x7765bb*/
    v3 = v2 <= 0 ? 0 : v2;
    if ( v3 > 0 ) /*0x7765c9*/
    {
      v4 = 500 - 40 * v3; /*0x7765da*/
      if ( v4 <= 5 ) /*0x7765df*/
        v4 = 5; /*0x7765e1*/
      v8 = v4; /*0x7765ea*/
      WindowLongA = (HWND)GetWindowLongA(qword_B730A0, -8); /*0x7765f5*/
      SetTimer(WindowLongA, 1u, v8, 0); /*0x7765fc*/
      v9 = SendMessageA(qword_B730A0, 0x110Au, 5u, 0); /*0x77661c*/
      if ( v1 <= 0 ) /*0x77661d*/
        v6 = SendMessageA(qword_B730A0, 0x110Au, 6u, v9); /*0x77663c*/
      else
        v6 = SendMessageA(qword_B730A0, 0x110Au, 7u, v9); /*0x77662d*/
      v7 = v6; /*0x776644*/
      ImageList_DragShowNolock(0); /*0x776648*/
      SendMessageA(qword_B730A0, 0x110Bu, 5u, v7); /*0x776659*/
      ImageList_DragShowNolock(1); /*0x77665d*/
    }
  }
}



// ==== 0x00776670  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_776670(ObjectClass *this)
{
  int v2; // edx
  HCURSOR CursorA; // eax
  char v4; // bl
  HCURSOR v5; // eax
  struct tagRECT Rect; // [esp+4h] [ebp-60h] BYREF
  WPARAM wParam[10]; // [esp+14h] [ebp-50h] BYREF
  struct tagPOINT v9[5]; // [esp+3Ch] [ebp-28h] BYREF

  if ( !byte_B7309C ) /*0x77667d*/
    return 0; /*0x77673a*/
  ImageList_DragShowNolock(0); /*0x77668e*/
  qmemcpy(v9, HitDialogTest((unsigned int)this, v2, v9), sizeof(v9)); /*0x7766a8*/
  qmemcpy(wParam, v9, sizeof(wParam)); /*0x7766bb*/
  if ( SendMessageA((HWND)v9[0].y, 0x4C8u, (WPARAM)wParam, (LPARAM)this) ) /*0x7766c8*/
  {
    CursorA = LoadCursorA(0, (LPCSTR)0x7F00); /*0x7766d9*/
    SetCursor(CursorA); /*0x7766e0*/
    v4 = 1; /*0x7766e6*/
  }
  else
  {
    v5 = LoadCursorA(0, (LPCSTR)0x7F88); /*0x7766f1*/
    SetCursor(v5); /*0x7766f8*/
    v4 = 0; /*0x7766fe*/
  }
  ImageList_DragShowNolock(1); /*0x776702*/
  GetWindowRect((HWND)wParam[1], &Rect); /*0x77670e*/
  ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top); /*0x77672a*/
  return v4; /*0x776735*/
}



// ==== 0x00776750  sub_776750  this=-  sig=ida-proto ====
char __fastcall sub_776750(HWND hWnd, int a2, int a3, int a4)
{
  LPARAM v4; // eax
  char v5; // bl
  int v6; // edx
  LPARAM lParam[6]; // [esp+4h] [ebp-28h] BYREF
  int v9; // [esp+1Ch] [ebp-10h]
  int v10; // [esp+20h] [ebp-Ch]

  v4 = *(_DWORD *)(a2 + 60); /*0x776753*/
  v5 = 0; /*0x77675a*/
  v6 = *(_DWORD *)(a2 + 12) - 1; /*0x77675c*/
  lParam[1] = v4; /*0x77675d*/
  lParam[0] = 50; /*0x776761*/
  if ( v6 ) /*0x776769*/
  {
    if ( v6 == 1 ) /*0x77676c*/
    {
      v5 = 1; /*0x776772*/
      v9 = a4; /*0x776774*/
      v10 = a4; /*0x776778*/
    }
  }
  else
  {
    v5 = 0; /*0x776782*/
    v9 = a3; /*0x776784*/
    v10 = a3; /*0x776788*/
  }
  SendMessageA(hWnd, 0x110Du, 0, (LPARAM)lParam); /*0x776799*/
  return v5; /*0x7767a1*/
}



// ==== 0x007767B0  sub_7767B0  this=-  sig=ida-proto ====
HWND __fastcall sub_7767B0(HWND hWnd, int a2, WPARAM wParam)
{
  HWND result; // eax

  result = (HWND)SendMessageA(hWnd, 0x110Fu, 0, 0); /*0x7767c7*/
  if ( result ) /*0x7767cb*/
  {
    result = (HWND)SendMessageA(result, 0xC5u, wParam, 0); /*0x7767da*/
    dword_B73080 = a2; /*0x7767dc*/
    qword_B730A0 = hWnd; /*0x7767e2*/
  }
  return result; /*0x7767e8*/
}



// ==== 0x007767F0  ObjectClass::method_7767F0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_7767F0(ObjectClass *this)
{
  char *referenceCount; // edi
  LPARAM lParam[10]; // [esp+8h] [ebp-28h] BYREF

  referenceCount = (char *)this->?; /*0x7767f7*/
  if ( !referenceCount ) /*0x7767fc*/
    return 0; /*0x776873*/
  String::Trim(referenceCount); /*0x776801*/
  strcpy((char *)dword_B73080, referenceCount); /*0x77681e*/
  lParam[1] = this->?; /*0x776835*/
  lParam[0] = 1; /*0x776847*/
  lParam[4] = dword_B73080; /*0x77684f*/
  SendMessageA(qword_B730A0, 0x110Du, 0, (LPARAM)lParam); /*0x776853*/
  return strlen((const char *)dword_B73080); /*0x77686a*/
}



// ==== 0x00776880  ObjectClass::System_Read  this=ObjectClass  sig=csp ====
BOOL __thiscall System_Read_776880(ObjectClass *this)
{
  HWND ptr_C; // esi
  ULONG_PTR WindowContextHelpId; // eax

  ptr_C = (HWND)this->?; /*0x776881*/
  WindowContextHelpId = GetWindowContextHelpId(ptr_C); /*0x776885*/
  return WinHelpA(ptr_C, szHelp, 8u, WindowContextHelpId); /*0x77689a*/
}



// ==== 0x007768A0  ObjectClass::System_Read_7768A0  this=ObjectClass  sig=csp ====
BOOL __thiscall System_Read_7768A0(ObjectClass *this)
{
  ULONG_PTR dwData[4]; // [esp+4h] [ebp-10h] BYREF

  dwData[2] = 0; /*0x7768b3*/
  dwData[3] = 0; /*0x7768b7*/
  dwData[0] = GetWindowLongA((HWND)this, -12); /*0x7768c2*/
  dwData[1] = GetWindowContextHelpId((HWND)this); /*0x7768cc*/
  return WinHelpA((HWND)this, szHelp, 0xAu, (ULONG_PTR)dwData); /*0x7768e3*/
}



// ==== 0x007768F0  LoadWOLSettings  this=-  sig=csp ====
BOOL __stdcall sub_7768F0(HWND hWnd, LPARAM a2)
{
  int v3; // ebp
  LRESULT i; // esi
  unsigned __int8 *v5; // ebp
  signed int j; // esi
  LRESULT v7; // eax
  unsigned int Int_Overwrite; // eax
  CHAR ClassName[64]; // [esp+10h] [ebp-40h] BYREF
  unsigned __int8 *hWnda; // [esp+54h] [ebp+4h]

  GetClassNameA(hWnd, ClassName, 64); /*0x776903*/
  if ( !strcmp(ClassName, aSystreeview32) ) /*0x77691a*/
  {
    v3 = 0; /*0x77694e*/
    hWnda = (unsigned __int8 *)dword_B73098; /*0x776958*/
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) ) /*0x776962*/
    {
      wsprintfA(ClassName, "TV%d", ++v3); /*0x776970*/
      if ( INIClass::ReadBool_Overwrite(a2, hWnda, (unsigned __int8 *)ClassName, 0) ) /*0x776989*/
        SendMessageA(hWnd, 0x1102u, 2u, i); /*0x776995*/
      else
        SendMessageA(hWnd, 0x1102u, 1u, i); /*0x77699f*/
    }
  }
  GetClassNameA(hWnd, ClassName, 64); /*0x7769ba*/
  if ( !strcmp(ClassName, aSyslistview32) ) /*0x7769d2*/
  {
    v5 = (unsigned __int8 *)dword_B73098; /*0x7769fb*/
    if ( hWnd ) /*0x776a03*/
    {
      for ( j = 0; j < 10; ++j ) /*0x776a05*/
      {
        wsprintfA(ClassName, "LV%d", j); /*0x776a12*/
        v7 = SendMessageA(hWnd, 0x101Du, j, 0); /*0x776a24*/
        Int_Overwrite = INIClass::ReadInt_Overwrite(a2, v5, (unsigned __int8 *)ClassName, v7); /*0x776a31*/
        if ( Int_Overwrite < 0x3E8 ) /*0x776a3b*/
          SendMessageA(hWnd, 0x101Eu, j, (unsigned __int16)Int_Overwrite); /*0x776a4a*/
      }
    }
  }
  return 1; /*0x776a52*/
}



// ==== 0x00776A70  SaveWOLLobbySettings  this=-  sig=ida-proto ====
void __fastcall SaveWOLLobbySettings(unsigned __int8 *a1, HWND a2, bool *lParam)
{
  int Int_Overwrite; // esi
  int v6; // edi
  int SystemMetrics; // eax
  int v8; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( a2 ) /*0x776a7b*/
  {
    GetWindowRect(a2, &Rect); /*0x776a89*/
    Int_Overwrite = INIClass::ReadInt_Overwrite(lParam, a1, (unsigned __int8 *)asc_84968C, Rect.left); /*0x776aa7*/
    v6 = INIClass::ReadInt_Overwrite(lParam, a1, (unsigned __int8 *)aY, Rect.top); /*0x776ab9*/
    SystemMetrics = GetSystemMetrics(0); /*0x776abd*/
    if ( Int_Overwrite + Rect.right - Rect.left > SystemMetrics ) /*0x776ad1*/
      Int_Overwrite = Rect.left + SystemMetrics - Rect.right; /*0x776ad9*/
    v8 = GetSystemMetrics(1); /*0x776add*/
    if ( v6 + Rect.bottom - Rect.top > v8 ) /*0x776af1*/
      v6 = Rect.top + v8 - Rect.bottom; /*0x776af9*/
    if ( Int_Overwrite < 0 ) /*0x776afd*/
      Int_Overwrite = 0; /*0x776aff*/
    if ( v6 < 0 ) /*0x776b03*/
      v6 = 0; /*0x776b05*/
    SetWindowPos(a2, 0, Int_Overwrite, v6, 0, 0, 5u); /*0x776b12*/
    dword_B73098 = a1; /*0x776b18*/
    EnumChildWindows(a2, LoadWOLSettings, (LPARAM)lParam); /*0x776b29*/
  }
}



// ==== 0x00776B40  SaveWOLUISettings  this=-  sig=csp ====
BOOL __stdcall sub_776B40(HWND hWnd, char *a2)
{
  int v2; // edi
  LRESULT i; // esi
  unsigned __int8 *v4; // edi
  signed int j; // esi
  unsigned int v6; // eax
  unsigned __int8 *Block; // [esp+10h] [ebp-64h]
  CHAR v9[32]; // [esp+14h] [ebp-60h] BYREF
  CHAR ClassName[4]; // [esp+34h] [ebp-40h] BYREF
  LRESULT v11; // [esp+38h] [ebp-3Ch]
  char v12; // [esp+3Ch] [ebp-38h]
  int v13; // [esp+40h] [ebp-34h]

  GetClassNameA(hWnd, ClassName, 64); /*0x776b53*/
  if ( !strcmp(ClassName, aSystreeview32) ) /*0x776b68*/
  {
    v2 = 0; /*0x776b9e*/
    Block = (unsigned __int8 *)dword_B73098; /*0x776ba8*/
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) ) /*0x776bb2*/
    {
      wsprintfA(v9, "TV%d", ++v2); /*0x776bc0*/
      *(_DWORD *)ClassName = 24; /*0x776bcd*/
      v13 = 32; /*0x776bd5*/
      v11 = i; /*0x776be6*/
      if ( SendMessageA(hWnd, 0x110Cu, 0, (LPARAM)ClassName) ) /*0x776bea*/
        INIClass::SetBool(a2, Block, v9, (v12 & 0x20) != 0); /*0x776c18*/
    }
  }
  GetClassNameA(hWnd, ClassName, 64); /*0x776c36*/
  if ( !strcmp(ClassName, aSyslistview32) ) /*0x776c4b*/
  {
    v4 = (unsigned __int8 *)dword_B73098; /*0x776c72*/
    if ( hWnd ) /*0x776c7a*/
    {
      for ( j = 0; j < 10; ++j ) /*0x776c7c*/
      {
        wsprintfA(v9, "LV%d", j); /*0x776c89*/
        v6 = SendMessageA(hWnd, 0x101Du, j, 0); /*0x776c9b*/
        if ( v6 < 0x3E8 ) /*0x776ca2*/
          INIClass::SetInt(a2, v4, v9, v6, 0); /*0x776cb4*/
      }
    }
  }
  return 1; /*0x776cbf*/
}



// ==== 0x00776CD0  sub_776CD0  this=-  sig=ida-proto ====
BOOL __fastcall sub_776CD0(unsigned __int8 *Block, HWND hWndParent, char *lParam)
{
  BOOL result; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( hWndParent ) /*0x776cdb*/
  {
    GetWindowRect(hWndParent, &Rect); /*0x776ce4*/
    INIClass::SetInt(lParam, Block, asc_84968C, Rect.left, 0); /*0x776cfd*/
    INIClass::SetInt(lParam, Block, aY, Rect.top, 0); /*0x776d11*/
    dword_B73098 = Block; /*0x776d16*/
    return EnumChildWindows(hWndParent, (WNDENUMPROC)SaveWOLUISettings, (LPARAM)lParam); /*0x776d23*/
  }
  return result; /*0x776d2a*/
}



// ==== 0x00776D80  Window::ClampToScreen  this=Window  sig=csp ====
int __stdcall Window::ClampToScreen(int *a1)
{
  char v1; // bl
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int result; // eax

  v1 = 0; /*0x776d86*/
  v2 = *a1; /*0x776d89*/
  if ( *a1 < 0 ) /*0x776d8d*/
  {
    v3 = a1[2]; /*0x776d8f*/
    *a1 = 0; /*0x776d92*/
    v1 = 1; /*0x776d9a*/
    a1[2] = v3 - v2; /*0x776d9c*/
  }
  v4 = a1[1]; /*0x776d9f*/
  if ( v4 < 0 ) /*0x776da4*/
  {
    v5 = a1[3]; /*0x776da6*/
    a1[1] = 0; /*0x776da9*/
    v1 = 1; /*0x776db2*/
    a1[3] = v5 - v4; /*0x776db4*/
  }
  if ( a1[2] > GetSystemMetrics(16) ) /*0x776dc4*/
  {
    *a1 += GetSystemMetrics(16) - a1[2]; /*0x776dd5*/
    a1[2] = GetSystemMetrics(16); /*0x776dd9*/
    v1 = 1; /*0x776ddc*/
  }
  result = GetSystemMetrics(17); /*0x776de0*/
  if ( a1[3] <= result ) /*0x776de5*/
  {
    LOBYTE(result) = v1; /*0x776e08*/
  }
  else
  {
    a1[1] += GetSystemMetrics(17) - a1[3]; /*0x776df7*/
    result = GetSystemMetrics(17); /*0x776dfa*/
    a1[3] = result; /*0x776dfc*/
    LOBYTE(result) = 1; /*0x776dff*/
  }
  return result; /*0x776e01*/
}



// ==== 0x00776E10  FindListBoxItem  this=ObjectClass  sig=csp ====
int __fastcall ListBox_FindItem(HWND hWnd, signed int wParam, int a3)
{
  LRESULT v6; // [esp+10h] [ebp-4h]

  v6 = SendMessageA(hWnd, 0x146u, 0, 0); /*0x776e2d*/
  if ( wParam >= v6 ) /*0x776e31*/
    return -1; /*0x776e4f*/
  while ( SendMessageA(hWnd, 0x150u, wParam, 0) != a3 ) /*0x776e44*/
  {
    if ( ++wParam >= v6 ) /*0x776e4d*/
      return -1; /*0x776e4d*/
  }
  return wParam; /*0x776e4f*/
}



// ==== 0x00776EA0  nullsub_261  this=-  sig=ida-proto ====
void nullsub_261()
{
  ; /*0x776ea0*/
}



// ==== 0x00776EB0  ObjectClass::method_776EB0  this=ObjectClass  sig=csp ====
void *__thiscall sub_776EB0(ObjectClass *this)
{
  void *dwBuildNumber; // eax
  void *dwMinorVersion; // edx
  DWORD dwPlatformId; // eax
  struct _OSVERSIONINFOA VersionInformation; // [esp+8h] [ebp-94h] BYREF

  this->AbstractClass = 0; /*0x776ec1*/
  this->? = 0; /*0x776ec3*/
  this->? = 0; /*0x776ec6*/
  this->onBridge = 0; /*0x776ec9*/
  this->isFallingDown = 0; /*0x776ecf*/
  VersionInformation.dwOSVersionInfoSize = 148; /*0x776ed5*/
  GetVersionExA(&VersionInformation); /*0x776edd*/
  dwBuildNumber = (void *)VersionInformation.dwBuildNumber; /*0x776ee7*/
  dwMinorVersion = (void *)VersionInformation.dwMinorVersion; /*0x776eeb*/
  this->AbstractClass = (void *)VersionInformation.dwMajorVersion; /*0x776eef*/
  this->? = dwBuildNumber; /*0x776ef1*/
  dwPlatformId = VersionInformation.dwPlatformId; /*0x776ef4*/
  this->? = dwMinorVersion; /*0x776efd*/
  if ( dwPlatformId == 1 ) /*0x776f02*/
  {
    this->onBridge = 1; /*0x776f04*/
  }
  else if ( dwPlatformId == 2 ) /*0x776f0f*/
  {
    this->isFallingDown = 1; /*0x776f11*/
  }
  strncpy((char *)&this->?, VersionInformation.szCSDVersion, 0x7Fu); /*0x776f22*/
  HIBYTE(this->parachute) = 0; /*0x776f2a*/
  return this; /*0x776f32*/
}



// ==== 0x00777060  Dialog::RestoreParent  this=Dialog  sig=csp ====
int __thiscall Dialog::RestoreParent(Dialog *this)
{
  int result; // eax

  result = GetWindowLongA((HWND)this, -8); /*0x777066*/
  if ( result ) /*0x77706e*/
    return SetDialogParent((HWND)this, (HWND)result); /*0x777074*/
  return result; /*0x777079*/
}



// ==== 0x00777080  SetDialogParent  this=Dialog  sig=csp ====
BOOL __fastcall Dialog_SetParent(HWND hWnd, HWND a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v9; // [esp+20h] [ebp-10h] BYREF

  GetClientRect(a2, &Rect); /*0x777097*/
  if ( a2 == g_hWnd ) /*0x77709f*/
  {
    Rect.right = g_DisplayWidth; /*0x7770ad*/
    Rect.bottom = MEMORY[0x8A00A8]; /*0x7770b1*/
  }
  ClientToScreen(a2, (LPPOINT)&Rect); /*0x7770c1*/
  ClientToScreen(a2, (LPPOINT)&Rect.right); /*0x7770c9*/
  Rect.right -= Rect.left; /*0x7770de*/
  Rect.bottom -= Rect.top; /*0x7770e9*/
  GetClientRect(hWnd, &v9); /*0x7770ed*/
  ClientToScreen(hWnd, (LPPOINT)&v9); /*0x7770f5*/
  ClientToScreen(hWnd, (LPPOINT)&v9.right); /*0x7770fd*/
  v4 = Rect.right - (v9.right - v9.left) + 1; /*0x777119*/
  v9.right -= v9.left; /*0x77711a*/
  v9.bottom -= v9.top; /*0x777121*/
  v5 = v4 / 2; /*0x77712d*/
  v6 = (Rect.bottom - v9.bottom + 1) / 2; /*0x777133*/
  if ( v5 < 0 ) /*0x777137*/
    v5 = 0; /*0x777139*/
  if ( v6 < 0 ) /*0x77713d*/
    v6 = 0; /*0x77713f*/
  return SetWindowPos(hWnd, 0, v5, v6, -1, -1, 5u); /*0x777152*/
}



// ==== 0x007771B0  sub_7771B0  this=-  sig=ida-proto ====
int sub_7771B0()
{
  dword_B730B8 = 0; /*0x7771b2*/
  dword_B730BC = 0; /*0x7771b7*/
  dword_B730C0 = 0; /*0x7771bc*/
  dword_B730C4 = 0; /*0x7771c1*/
  return 0; /*0x7771c6*/
}



// ==== 0x007771D0  sub_7771D0  this=-  sig=ida-proto ====
void sub_7771D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7771dc*/
  dbl_B730D0 = Math::Sqrt(v0 + v0); /*0x7771ee*/
}



// ==== 0x00777200  sub_777200  this=-  sig=ida-proto ====
void sub_777200()
{
  dbl_B73538 = dbl_B730D0 / 60.0; /*0x77720c*/
}



// ==== 0x00777220  sub_777220  this=-  sig=ida-proto ====
void sub_777220()
{
  dbl_B73520 = 1.0 / dbl_B73538; /*0x77722c*/
}



// ==== 0x00777240  sub_777240  this=-  sig=ida-proto ====
void sub_777240()
{
  dbl_B73310 = 0.0174532925199433 * 45.0; /*0x77724c*/
}



// ==== 0x00777260  sub_777260  this=-  sig=ida-proto ====
void sub_777260()
{
  dbl_B730D8 = 0.0174532925199433 * 60.0; /*0x77726c*/
}



// ==== 0x00777280  sub_777280  this=-  sig=ida-proto ====
void sub_777280()
{
  dbl_B730B0 = 0.0174532925199433 * 90.0; /*0x77728c*/
}



// ==== 0x007772A0  ScreenEffect::UpdateBob  this=ScreenEffect  sig=ida-proto ====
__int64 ScreenEffect_UpdateBob()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B730B0 - dbl_B730D8); /*0x7772b2*/
  result = Math::RoundToInt(v0 * dbl_B730D0 * 0.5); /*0x7772c6*/
  dword_B73540 = result; /*0x7772cb*/
  return result; /*0x7772d0*/
}



// ==== 0x007772E0  sub_7772E0  this=-  sig=ida-proto ====
void sub_7772E0()
{
  dbl_B730E0 = Math::ArcTan((double)dword_B73540 * 0.00390625); /*0x7772f7*/
}



// ==== 0x00777310  sub_777310  this=-  sig=ida-proto ====
void sub_777310()
{
  dbl_B73308 = Math::ArcTan((double)(2 * dword_B73540) / dbl_B730D0); /*0x777332*/
}



// ==== 0x00777340  sub_777340  this=-  sig=ida-proto ====
__int64 sub_777340()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B73540) + 0.5); /*0x77735b*/
  dword_B73534 = result; /*0x777360*/
  return result; /*0x777366*/
}



// ==== 0x00777370  sub_777370  this=-  sig=ida-proto ====
int sub_777370()
{
  word_B730C8 = 0; /*0x777372*/
  word_B730CA = 0; /*0x777378*/
  return 0; /*0x77737e*/
}



// ==== 0x00777380  sub_777380  this=-  sig=ida-proto ====
int sub_777380()
{
  dword_B732F8 = 0; /*0x777382*/
  dword_B732FC = 0; /*0x777387*/
  dword_B73300 = 0; /*0x77738c*/
  return 0; /*0x777391*/
}



// ==== 0x007773A0  sub_7773A0  this=-  sig=ida-proto ====
int sub_7773A0()
{
  dword_B73530 = 0; /*0x7773a5*/
  dword_B73528 = 128; /*0x7773af*/
  dword_B7352C = 128; /*0x7773b4*/
  return 128; /*0x7773b9*/
}



// ==== 0x00777420  ObjectClass::MainWindowProc_Read  this=ObjectClass  sig=csp ====
int MainWindowProc_Read(ObjectClass *this)
{
  int v1; // ecx
  AsyncIO *v2; // ecx
  int result; // eax
  HWND Current; // eax
  HWND v5; // eax

  Debug::Log(); /*0x777425*/
  sub_407040(v1); /*0x77742d*/
  Debug::Log(); /*0x77744b*/
  if ( stru_887598.lineTrailer && byte_B73560 == 1 && !stru_A8EB00.?[391] ) /*0x77746d*/
    (*(void (**)(void))(*(_DWORD *)stru_887598.lineTrailer + 24))(); /*0x777471*/
  if ( !g_DDraw_Initialized ) /*0x77747c*/
  {
    if ( DSurface_Alternate ) /*0x77748a*/
      DSurface::RestoreIfLost(DSurface_Alternate); /*0x77748c*/
    if ( g_DSurface_Hidden ) /*0x777499*/
      DSurface::RestoreIfLost((DSurface *)g_DSurface_Hidden); /*0x77749b*/
    if ( DSurface_Composite /*0x7774c7*/
      && DSurface::RestoreIfLost((DSurface *)DSurface_Composite)
      && (!stru_A8EB00.?[376] || *(int *)&stru_A8EB00.?[416] > 16) )
    {
      (*(void (__thiscall **)(AudioStream *, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 + 24))( /*0x7774d3*/
        DSurface_Composite,
        0);
    }
    if ( DSurface_Tile /*0x7774f8*/
      && DSurface::RestoreIfLost(DSurface_Tile)
      && (!stru_A8EB00.?[376] || *(int *)&stru_A8EB00.?[416] > 16) )
    {
      (*((void (__thiscall **)(DSurface *, _DWORD))DSurface_Tile->DSurface_field_0x0 + 6))(DSurface_Tile, 0); /*0x777504*/
    }
    if ( DSurface_Sidebar ) /*0x77750f*/
    {
      if ( DSurface::RestoreIfLost(DSurface_Sidebar) ) /*0x777511*/
      {
        g_CameoRenderFlag = 1; /*0x77751f*/
        if ( !stru_A8EB00.?[376] || *(int *)&stru_A8EB00.?[416] > 16 ) /*0x777530*/
          (*((void (__thiscall **)(DSurface *, _DWORD))DSurface_Sidebar->DSurface_field_0x0 + 6))(DSurface_Sidebar, 0); /*0x77753c*/
      }
    }
    if ( g_DSurface_Primary /*0x777561*/
      && DSurface::RestoreIfLost(g_DSurface_Primary)
      && (!stru_A8EB00.?[376] || *(int *)&stru_A8EB00.?[416] > 16) )
    {
      (*((void (__thiscall **)(DSurface *, char *, _DWORD))g_DSurface_Primary->DSurface_field_0x0 + 5))( /*0x777572*/
        g_DSurface_Primary,
        &DSurface_ViewBounds.__pad_8[8],
        0);
    }
  }
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x77757c*/
  InvalidateRect(g_hWnd, 0, 0); /*0x77758c*/
  LOBYTE(v2) = 0; /*0x777592*/
  AsyncIO::Read(v2); /*0x777594*/
  result = Dialog::GetCurrent(); /*0x777599*/
  if ( result ) /*0x7775a1*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x7775a3*/
    SetActiveWindow(Current); /*0x7775a9*/
    v5 = (HWND)Dialog::GetCurrent(); /*0x7775af*/
    return (int)SetFocus(v5); /*0x7775b5*/
  }
  return result; /*0x7775bb*/
}



// ==== 0x007775C0  MainWindowProc  this=-  sig=ida-proto ====
int __userpurge MainWindowProc@<eax>(
        int a1@<ecx>,
        int *a2@<ebx>,
        int a3@<ebp>,
        ObjectClass *a4@<edi>,
        int a5@<esi>,
        HWND hWnd,
        UINT Msg,
        unsigned int wParam,
        int *lParam)
{
  int v10; // eax
  HWND v11; // esi
  HWND v13; // edi
  UINT v14; // eax
  AudioStream *v15; // esi
  ObjectClass *v16; // esi
  char *v17; // eax
  char *v18; // esi
  AsyncIO *v19; // ecx
  const char *v20; // ecx
  int v21; // esi
  int v22; // eax
  WCHAR WideCharStr[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)WideCharStr = a1; /*0x7775c0*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x7775ce*/
  {
    v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 56))( /*0x7775d4*/
            *(_DWORD *)&stru_887598.isAliveFlag,
            -1);
    if ( Msg == v10 || Msg == 1141 ) /*0x7775e5*/
    {
      v11 = hWnd; /*0x7775f9*/
      if ( (*(int (__thiscall **)(_DWORD, HWND, UINT, unsigned int, int *))(**(_DWORD **)&stru_887598.isAliveFlag + 64))( /*0x7775ff*/
             *(_DWORD *)&stru_887598.isAliveFlag,
             hWnd,
             Msg,
             wParam,
             lParam) )
      {
        return DefWindowProcA(v11, Msg, wParam, (LPARAM)lParam); /*0x777624*/
      }
      return 0; /*0x777604*/
    }
  }
  v13 = hWnd; /*0x777627*/
  Tactical::HandleTacticalMouseInput( /*0x777640*/
    (Tactical *)&stru_87F5F0.__pad_58[416],
    (int)hWnd,
    &Msg,
    (int)&wParam,
    (HWND)&lParam);
  if ( g_hWnd ) /*0x77764c*/
    GetMenu(g_hWnd); /*0x77764f*/
  if ( Render_Draw_778030(v13, Msg, wParam, (LPARAM)lParam) ) /*0x777665*/
  {
    Debug::Log(); /*0x777673*/
    return dword_B73570; /*0x777684*/
  }
  v14 = Msg; /*0x777687*/
  if ( Msg <= 0x18 ) /*0x77768e*/
  {
    if ( Msg == 24 ) /*0x777694*/
      return 0; /*0x777a61*/
    switch ( Msg ) /*0x7776ae*/
    {
      case 1u: /*0x7776ae*/
        v17 = (char *)__2_YAPAXI_Z(0x268u); /*0x777792*/
        v18 = v17; /*0x777797*/
        if ( v17 ) /*0x77779e*/
        {
          MainWindowProc_Helper_724000(v17, (int)v13); /*0x7777a3*/
          *((_DWORD *)v18 + 153) = 7; /*0x7777a8*/
          *(_DWORD *)v18 = &CCToolTip::`vftable'; /*0x7777b2*/
          *(_DWORD *)&stru_88732C.__pad_1C[32] = v18; /*0x7777b8*/
        }
        else
        {
          *(_DWORD *)&stru_88732C.__pad_1C[32] = 0; /*0x7777c3*/
        }
        goto LABEL_69; /*0x7777be*/
      case 2u: /*0x7776ae*/
        if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x7777fb*/
        {
          (***(void (__thiscall ****)(_DWORD, int))&stru_88732C.__pad_1C[32])(*(_DWORD *)&stru_88732C.__pad_1C[32], 1); /*0x777801*/
          *(_DWORD *)&stru_88732C.__pad_1C[32] = 0; /*0x777803*/
        }
        g_hWnd = 0; /*0x77780e*/
        if ( *(_DWORD *)&stru_A8EB00.?[500] ) /*0x777816*/
          *(_DWORD *)&stru_A8EB00.?[500] = 2; /*0x777818*/
        return 0; /*0x777828*/
      case 3u: /*0x7776ae*/
        if ( g_DDraw_Initialized != 1 || !stru_887598.lineTrailer ) /*0x7777e3*/
          goto LABEL_70; /*0x7777e3*/
        MouseClass::CalcConfiningRect((MouseClass *)stru_887598.lineTrailer); /*0x7777e9*/
        goto LABEL_69; /*0x7777ee*/
      case 0xFu: /*0x7776ae*/
        if ( *(_DWORD *)&stru_A8EB00.?[444] /*0x777700*/
          || stru_A8EB00.?[412] != 1 && g_DDraw_Initialized != 1
          || !stru_887598.lineTrailer
          || !g_DSurface_Primary
          || !g_DSurface_Hidden
          || !DSurface_Composite )
        {
          goto LABEL_26; /*0x777700*/
        }
        if ( stru_A8EB00.?[376] == 1 ) /*0x777709*/
        {
          v15 = DSurface_Composite; /*0x77770b*/
          (*(void (**)(void))(*(_DWORD *)stru_887598.lineTrailer + 28))(); /*0x777710*/
          Frame::Present((int)v15, 0, a3, (int)v13, 0, (int)a4, a5, a2); /*0x777717*/
          Sidebar::FlushSidebarTooltip((Sidebar *)&stru_87F5F0.__pad_58[416], 1); /*0x777723*/
          ValidateRect(v13, 0); /*0x77772a*/
        }
        else if ( MainWindowProc_Helper() ) /*0x777735*/
        {
          MainWindowProc_Helper_5C09A0(a4); /*0x77773e*/
          ValidateRect(v13, 0); /*0x777745*/
        }
        else
        {
          if ( !Render_Draw_774070() ) /*0x777750*/
          {
            v16 = g_DSurface_Hidden; /*0x77775f*/
            (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer); /*0x777768*/
            Frame::Present((int)v16, 0, a3, (int)v13, 0, (int)a4, a5, a2); /*0x77776f*/
          }
LABEL_26:
          ValidateRect(v13, 0); /*0x777774*/
        }
        break; /*0x777730*/
      case 0x14u: /*0x7776ae*/
        return 1; /*0x77778a*/
      default:
        goto LABEL_70;
    }
    goto LABEL_69; /*0x777730*/
  }
  if ( Msg > 0x205 ) /*0x777830*/
  {
    if ( Msg != 522 ) /*0x777962*/
    {
      if ( Msg == 534 ) /*0x777967*/
        return (unsigned __int8)Window::ClampToScreen(lParam); /*0x777982*/
      goto LABEL_70; /*0x777967*/
    }
    if ( !byte_B73561 ) /*0x77798b*/
    {
      byte_B73561 = 1; /*0x777991*/
      v20 = aSidebardown; /*0x77799e*/
      if ( (wParam & 0x80000000) == 0 ) /*0x7779a3*/
        v20 = aSidebarup; /*0x7779a5*/
      Sidebar::ScrollSidebarSkipGame(v20); /*0x7779aa*/
      byte_B73561 = 0; /*0x7779af*/
LABEL_69:
      v14 = Msg; /*0x7779b5*/
    }
  }
  else
  {
    switch ( Msg ) /*0x777836*/
    {
      case 0x205u: /*0x777836*/
        byte_884D34 = 0; /*0x777952*/
        break;
      case 0x1Cu: /*0x777836*/
        if ( v13 == g_hWnd && stru_A8EB00.?[412] != (wParam != 0) ) /*0x7778c1*/
        {
          stru_A8EB00.?[412] = wParam != 0; /*0x7778ce*/
          if ( wParam ) /*0x7778d3*/
          {
            MainWindowProc_Read(a4); /*0x777930*/
          }
          else
          {
            Debug::Log(); /*0x7778da*/
            LOBYTE(v19) = 1; /*0x7778e2*/
            AsyncIO::Read(v19); /*0x7778e4*/
            sub_407020(); /*0x7778e9*/
            if ( stru_887598.lineTrailer ) /*0x7778f6*/
            {
              byte_B73560 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer); /*0x7778fd*/
              Debug::Log(); /*0x777916*/
              (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x777926*/
            }
          }
          Debug::Log(); /*0x77793a*/
          g_LoadScreenFlag = 1; /*0x777942*/
        }
        return 0; /*0x77794f*/
      case 0x112u: /*0x777836*/
        if ( wParam > 0xF120 ) /*0x777856*/
        {
          if ( wParam == 61760 ) /*0x777891*/
            return 0; /*0x77789d*/
        }
        else
        {
          switch ( wParam ) /*0x777858*/
          {
            case 0xF120u: /*0x777858*/
              stru_A8EB00.?[413] = 0; /*0x777880*/
              break;
            case 0xF020u: /*0x777858*/
              stru_A8EB00.?[413] = 1; /*0x777874*/
              break;
            case 0xF060u: /*0x777858*/
              return 0; /*0x777871*/
          }
        }
        break;
    }
  }
LABEL_70:
  if ( InputManager::WndProc(*(InputManager **)&stru_87F5F0.__pad_58[296], v13, v14, wParam, (unsigned int)lParam) ) /*0x7779cb*/
    return 0; /*0x7779da*/
  if ( Msg == 646 )
  {
    v21 = wcslen(&word_B730EC); /*0x7779f2*/
    if ( BYTE1(wParam) ) /*0x7779fe*/
    {
      *(_WORD *)((char *)&hWnd + 1) = (unsigned __int8)wParam; /*0x777a02*/
      LOBYTE(hWnd) = BYTE1(wParam); /*0x777a09*/
    }
    else
    {
      LOWORD(hWnd) = (unsigned __int8)wParam; /*0x777a13*/
    }
    v22 = MultiByteToWideChar(0, 0, (LPCCH)&hWnd, strlen((const char *)&hWnd), WideCharStr, 1); /*0x777a38*/
    *(&word_B730EC + v21) = v22 == 1 ? WideCharStr[0] : 0;
    word_B730EE[v21] = 0; /*0x777a53*/
    return 0; /*0x777a53*/
  }
  return DefWindowProcA(v13, Msg, wParam, (LPARAM)lParam); /*0x777624*/
}



// ==== 0x00777AB0  nullsub_262  this=-  sig=ida-proto ====
void nullsub_262()
{
  ; /*0x777ab0*/
}



// ==== 0x00777AC0  Time::FormatDate  this=Time  sig=csp ====
int __thiscall Time_FormatDate(char *Buffer)
{
  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+4h] [ebp-10h] BYREF

  result = FileTimeToSystemTime(&FileTime, &SystemTime); /*0x777ad0*/
  if ( result ) /*0x777ad8*/
    return sprintf( /*0x777b20*/
             Buffer,
             "%02d/%02d/%04d - %02d:%02d:%02d",
             SystemTime.wMonth,
             SystemTime.wDay,
             SystemTime.wYear,
             SystemTime.wHour,
             SystemTime.wMinute,
             SystemTime.wSecond);
  return result; /*0x777b28*/
}



// ==== 0x00777B30  String::FormatDword  this=AbstractClass  sig=csp ====
char *__thiscall String_FormatDword(char *Buffer)
{
  sprintf(Buffer, "%d", dword_822D1C); /*0x777b3f*/
  return Buffer; /*0x777b49*/
}



// ==== 0x00777B50  GameOptions::GetEntry  this=GameOptions  sig=csp ====
int GameOptions_GetEntry()
{
  return dword_822D1C; /*0x777b55*/
}



// ==== 0x00777B60  String::CopyConstant  this=AbstractClass  sig=csp ====
char *__thiscall String_CopyConstant(char *Destination)
{
  strncpy(Destination, g_Str_gsmallwoo, 0x20u); /*0x777b6b*/
  return Destination; /*0x777b75*/
}



// ==== 0x00777BB0  ObjectClass::method_777BB0  this=ObjectClass  sig=csp ====
char *__thiscall sub_777BB0(ObjectClass *this)
{
  char *v2; // eax
  char v4; // [esp+4h] [ebp-100h] BYREF
  char v5; // [esp+5h] [ebp-FFh]
  char v6; // [esp+6h] [ebp-FEh]
  char Buffer[128]; // [esp+84h] [ebp-80h] BYREF

  sprintf(Buffer, "%d", dword_822D1C); /*0x777bcc*/
  v4 = g_Str_gsmallwoo[0]; /*0x777bde*/
  v5 = 0; /*0x777be2*/
  v6 = 0; /*0x777be7*/
  v2 = strchr(g_Str_gsmallwoo, 95); /*0x777bec*/
  if ( v2 ) /*0x777bf6*/
    v5 = v2[1]; /*0x777bfb*/
  sprintf((char *const)this, "%s-%s", &v4, Buffer); /*0x777c12*/
  return (char *)this; /*0x777c1c*/
}



// ==== 0x00777C30  InitWindowCreation  this=ObjectClass  sig=csp ====
HCURSOR __fastcall WindowCreation_Init(HINSTANCE hInstance, int a2, int xRight, int yBottom)
{
  LONG v6; // eax
  int v7; // eax
  HCURSOR CursorA; // eax
  int SystemMetrics; // [esp-14h] [ebp-5Ch]
  BOOL v11; // [esp-8h] [ebp-50h]
  LONG WindowLongA; // [esp-4h] [ebp-4Ch]
  struct tagRECT rc; // [esp+10h] [ebp-38h] BYREF
  WNDCLASSA WndClass; // [esp+20h] [ebp-28h] BYREF

  InitCommonControls(); /*0x777c3b*/
  g_hIcon = (int)LoadIconA(hInstance, (LPCSTR)0x5D); /*0x777c50*/
  g_hCursor = (int)LoadCursorA(g_hInstance, (LPCSTR)0x68); /*0x777c6c*/
  WndClass.style = 3; /*0x777c71*/
  WndClass.lpfnWndProc = MainWindowProc; /*0x777c79*/
  WndClass.cbClsExtra = 0; /*0x777c81*/
  WndClass.cbWndExtra = 0; /*0x777c85*/
  WndClass.hInstance = hInstance; /*0x777c89*/
  WndClass.hIcon = (HICON)g_hIcon; /*0x777c8d*/
  WndClass.hCursor = (HCURSOR)g_hCursor; /*0x777c91*/
  WndClass.hbrBackground = 0; /*0x777c95*/
  WndClass.lpszMenuName = 0; /*0x777c99*/
  WndClass.lpszClassName = WindowName; /*0x777c9d*/
  RegisterClassA(&WndClass); /*0x777ca5*/
  if ( g_DDraw_Initialized ) /*0x777cb6*/
  {
    g_hWnd = CreateWindowExA(0, WindowName, WindowName, 0x2CA0000u, 0, 0, 0, 0, 0, 0, hInstance, 0); /*0x777cd6*/
    SetRect(&rc, 0, 0, xRight, yBottom); /*0x777cec*/
    WindowLongA = GetWindowLongA(g_hWnd, -20); /*0x777d08*/
    v11 = GetMenu(g_hWnd) != 0; /*0x777d1c*/
    v6 = GetWindowLongA(g_hWnd, -16); /*0x777d20*/
    AdjustWindowRectEx(&rc, v6, v11, WindowLongA); /*0x777d28*/
    MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x777d4e*/
  }
  else
  {
    SystemMetrics = GetSystemMetrics(1); /*0x777d60*/
    v7 = GetSystemMetrics(0); /*0x777d62*/
    g_hWnd = CreateWindowExA(8u, WindowName, WindowName, 0x82000000, 0, 0, v7, SystemMetrics, 0, 0, hInstance, 0); /*0x777d7e*/
  }
  dword_B7355C = ImmGetContext(g_hWnd); /*0x777d95*/
  ImmAssociateContext(g_hWnd, 0); /*0x777d9c*/
  ShowWindow(g_hWnd, 1); /*0x777da9*/
  g_ScreenWidth = a2; /*0x777db5*/
  UpdateWindow(g_hWnd); /*0x777dbc*/
  SetFocus(g_hWnd); /*0x777dc9*/
  RegisterHotKey(g_hWnd, 1, 7u, 0x4Du); /*0x777ddb*/
  CursorA = LoadCursorA(g_hInstance, (LPCSTR)0x68); /*0x777dea*/
  return SetCursor(CursorA); /*0x777df3*/
}



// ==== 0x00777E00  Render_Draw_777E00  this=-  sig=ida-proto ====
BOOL sub_777E00()
{
  BOOL result; // eax

  result = 0; /*0x777e06*/
  WideCharStr[0] = 0; /*0x777e0a*/
  dword_B73564 = 0; /*0x777e10*/
  MaxCount = 0; /*0x777e15*/
  dword_B7356C = 0; /*0x777e1a*/
  word_B730EC = 0; /*0x777e1f*/
  if ( dword_B7355C ) /*0x777e25*/
    return ImmNotifyIME(dword_B7355C, 0x15u, 4u, 0); /*0x777e2d*/
  return result; /*0x777e32*/
}



// ==== 0x00777EA0  ProcessCompositionIME  this=-  sig=ida-proto ====
int IME_ProcessComposition()
{
  int result; // eax
  int v1; // eax
  signed int v2; // esi
  CHAR Buf[516]; // [esp+8h] [ebp-204h] BYREF

  result = (int)dword_B7355C; /*0x777ea0*/
  WideCharStr[0] = 0; /*0x777eb1*/
  dword_B73564 = 0; /*0x777eb8*/
  MaxCount = 0; /*0x777ebe*/
  if ( dword_B7355C ) /*0x777ec4*/
  {
    result = ImmGetCompositionStringA(dword_B7355C, 8u, Buf, 0x200u); /*0x777ed7*/
    if ( result > 0 ) /*0x777ede*/
    {
      Buf[result] = 0; /*0x777ef7*/
      v1 = MultiByteToWideChar(0, 0, Buf, -1, WideCharStr, 256); /*0x777efb*/
      word_B73518 = 0; /*0x777f03*/
      if ( v1 >= 0 ) /*0x777f0a*/
      {
        MaxCount = (unsigned __int16)ImmGetCompositionStringA(dword_B7355C, 0x80u, 0, 0); /*0x777f2c*/
        v2 = wcslen(WideCharStr); /*0x777f39*/
      }
      else
      {
        v2 = 0; /*0x777f0c*/
      }
      result = _mbsnccnt((const unsigned __int8 *)Buf, MaxCount); /*0x777f47*/
      MaxCount = result; /*0x777f51*/
      WideCharStr[v2] = 0; /*0x777f56*/
      dword_B73564 = v2; /*0x777f5e*/
      if ( result <= v2 ) /*0x777f64*/
      {
        if ( result < 0 ) /*0x777f77*/
          MaxCount = 0; /*0x777f79*/
      }
      else
      {
        MaxCount = v2; /*0x777f66*/
      }
    }
  }
  return result; /*0x777f6c*/
}



// ==== 0x00777F90  ObjectClass::method_777F90  this=ObjectClass  sig=csp ====
LONG __thiscall sub_777F90(ObjectClass *this)
{
  LONG result; // eax
  WCHAR *v3; // esi
  LONG v4; // edi
  CHAR Buf[516]; // [esp+Ch] [ebp-408h] BYREF
  WCHAR WideCharStr[258]; // [esp+210h] [ebp-204h] BYREF

  result = (LONG)dword_B7355C; /*0x777f90*/
  if ( dword_B7355C ) /*0x777fa4*/
  {
    result = ImmGetCompositionStringA(dword_B7355C, 0x800u, Buf, 0x200u); /*0x777fb6*/
    if ( result > 0 ) /*0x777fbd*/
    {
      Buf[result] = 0; /*0x777fbf*/
      result = MultiByteToWideChar(0, 0, Buf, strlen(Buf), WideCharStr, 256); /*0x777fe6*/
      if ( result < 0 ) /*0x777fee*/
        result = 0; /*0x777ff0*/
      WideCharStr[result] = 0; /*0x777ff4*/
      if ( result > 0 ) /*0x777ffc*/
      {
        v3 = WideCharStr; /*0x778005*/
        v4 = result; /*0x77800c*/
        do /*0x778021*/
        {
          result = SendMessageA((HWND)this, 0x4D9u, *v3, *v3); /*0x77801b*/
          ++v3; /*0x77801d*/
          --v4; /*0x778020*/
        }
        while ( v4 ); /*0x778021*/
      }
    }
  }
  return result; /*0x778024*/
}



// ==== 0x00778030  Render_Draw  this=-  sig=csp ====
int __fastcall sub_778030(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  UINT v5; // edx
  UINT v6; // edx
  LRESULT v7; // eax

  if ( Msg > 0x281 ) /*0x778039*/
  {
    switch ( Msg ) /*0x7780d6*/
    {
      case 0x282u: /*0x7780d6*/
      case 0x285u: /*0x7780d6*/
      case 0x290u: /*0x7780d6*/
      case 0x291u: /*0x7780d6*/
        v7 = DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x7780e9*/
        goto LABEL_12; /*0x7780e9*/
      default:
        return 0;
    }
  }
  if ( Msg == 641 ) /*0x77803f*/
  {
    v7 = DefWindowProcA(hWnd, 0x281u, wParam, lParam); /*0x7780c1*/
    goto LABEL_12; /*0x7780c1*/
  }
  v5 = Msg - 269; /*0x778041*/
  if ( !v5 ) /*0x778047*/
  {
    ProcessCompositionIME(); /*0x778089*/
    word_B730EC = 0; /*0x778098*/
    dword_B7356C = 1; /*0x7780a1*/
    v7 = DefWindowProcA(hWnd, 0x10Du, wParam, lParam); /*0x7780b0*/
    goto LABEL_12; /*0x7780b0*/
  }
  v6 = v5 - 1; /*0x778049*/
  if ( !v6 ) /*0x77804a*/
  {
    ProcessCompositionIME(); /*0x778069*/
    dword_B7356C = 0; /*0x778078*/
    v7 = DefWindowProcA(hWnd, 0x10Eu, wParam, lParam); /*0x778087*/
    goto LABEL_12; /*0x778087*/
  }
  if ( v6 == 1 ) /*0x77804d*/
  {
    ProcessCompositionIME(); /*0x778053*/
    v7 = DefWindowProcA(hWnd, 0x10Fu, wParam, lParam); /*0x778067*/
LABEL_12:
    dword_B73570 = v7; /*0x7780ef*/
    return 1; /*0x7780fa*/
  }
  return 0; /*0x7780f9*/
}



// ==== 0x00778120  Render_Draw_778120  this=-  sig=ida-proto ====
int sub_778120()
{
  return dword_B73570; /*0x778125*/
}



// ==== 0x00778170  nullsub_48  this=-  sig=ida-proto ====
void nullsub_48()
{
  ; /*0x778170*/
}



// ==== 0x00778180  Network_Append  this=-  sig=ida-proto ====
HIMC sub_778180()
{
  HIMC result; // eax

  result = dword_B7355C; /*0x778180*/
  if ( dword_B7355C ) /*0x778187*/
    return ImmAssociateContext(g_hWnd, dword_B7355C); /*0x778190*/
  return result; /*0x778195*/
}



// ==== 0x007781A0  DisableIME  this=-  sig=csp ====
int DisableIME()
{
  return ImmAssociateContext(g_hWnd, 0); /*0x7781ad*/
}



// ==== 0x007781B0  EditControl_Helper  this=-  sig=ida-proto ====
int __fastcall sub_7781B0(__int16 a1)
{
  int v1; // eax
  CHAR MultiByteStr; // [esp+0h] [ebp-8h] BYREF
  char v4; // [esp+1h] [ebp-7h]
  char v5; // [esp+2h] [ebp-6h]
  WCHAR WideCharStr[2]; // [esp+4h] [ebp-4h] BYREF

  if ( HIBYTE(a1) ) /*0x7781b6*/
  {
    MultiByteStr = HIBYTE(a1); /*0x7781c1*/
    v4 = a1; /*0x7781c1*/
    v5 = 0; /*0x7781c5*/
  }
  else
  {
    MultiByteStr = a1; /*0x7781cc*/
    v4 = 0; /*0x7781d0*/
  }
  v1 = MultiByteToWideChar(0, 0, &MultiByteStr, strlen(&MultiByteStr), WideCharStr, 1); /*0x7781f3*/
  return v1 == 1 ? *(_DWORD *)WideCharStr : 0;
}



// ==== 0x00778210  ScoreScreen::DrawSHPBackground  this=ObjectClass  sig=csp ====
int __userpurge ScoreScreen::DrawSHPBackground@<eax>(
        char *Source@<ecx>,
        int *a2@<edx>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5,
        int a6,
        int a7)
{
  int *v8; // esi
  int v9; // ebp
  int v10; // ebx
  int v11; // ebx
  int v12; // ebp
  int *Viewport; // eax
  ConvertClass *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v26; // [esp-10h] [ebp-F0h]
  void (__thiscall ***v27)(_DWORD, int); // [esp+1Ch] [ebp-C4h]
  int v28; // [esp+20h] [ebp-C0h]
  int v29; // [esp+20h] [ebp-C0h]
  _DWORD v30[2]; // [esp+24h] [ebp-BCh] BYREF
  int v31[2]; // [esp+2Ch] [ebp-B4h] BYREF
  _DWORD v32[2]; // [esp+34h] [ebp-ACh] BYREF
  int v33; // [esp+3Ch] [ebp-A4h] BYREF
  int v34; // [esp+40h] [ebp-A0h]
  int v35; // [esp+44h] [ebp-9Ch]
  int v36; // [esp+48h] [ebp-98h]
  int v37[2]; // [esp+4Ch] [ebp-94h] BYREF
  CCFileClass v38; // [esp+54h] [ebp-8Ch] BYREF
  int v39[3]; // [esp+ACh] [ebp-34h] BYREF
  int v40; // [esp+B8h] [ebp-28h]
  _BYTE v41[20]; // [esp+CCh] [ebp-14h] BYREF
  _UNKNOWN *retaddr; // [esp+E0h] [ebp+0h] BYREF

  CCFileClass::Construct(&v38, Source); /*0x77821f*/
  v8 = DecodeFrameSHP((int)&v38, a5, 0, 0); /*0x778238*/
  if ( v8 ) /*0x77823c*/
  {
    v28 = (*(int (__thiscall **)(int *, int, int))(*a2 + 124))(a2, a4, a3); /*0x778251*/
    v9 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x77825b*/
    v33 = 0; /*0x778261*/
    v34 = 0; /*0x778265*/
    v35 = v28; /*0x778269*/
    v36 = v9; /*0x77826d*/
    v10 = __2_YAPAXI_Z(0x20u); /*0x778276*/
    if ( v10 ) /*0x77827d*/
    {
      *(_DWORD *)(v10 + 8) = v9; /*0x778283*/
      *(_DWORD *)(v10 + 4) = v28; /*0x778291*/
      *(_DWORD *)(v10 + 12) = 0; /*0x778294*/
      *(_DWORD *)v10 = &XSurface_Vtable; /*0x77829b*/
      *(_DWORD *)(v10 + 16) = 2; /*0x7782a1*/
      Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v28 * v9); /*0x7782a8*/
      *(_DWORD *)v10 = &BSurface_Vtable; /*0x7782ad*/
    }
    else
    {
      v10 = 0; /*0x7782b5*/
    }
    Render_Draw(v10, &v33, 0); /*0x7782bf*/
    (*(void (__thiscall **)(int *, int, _DWORD, int))(*a2 + 4))(a2, v10, 0, 1); /*0x7782cd*/
    if ( v10 ) /*0x7782d2*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7782da*/
    v11 = 0; /*0x7782e0*/
    v12 = 0; /*0x7782e2*/
    v29 = (*(int (__thiscall **)(int *))(*v8 + 124))(v8); /*0x7782eb*/
    v30[0] = (*(int (__thiscall **)(int *))(*v8 + 128))(v8); /*0x7782f5*/
    if ( (*(int (__thiscall **)(int *))(*a2 + 124))(a2) > 1024 ) /*0x778306*/
    {
      Viewport = Display::GetViewport(v37); /*0x77830c*/
      v31[0] = *Viewport; /*0x778319*/
      v31[1] = Viewport[1]; /*0x778320*/
      v11 = (Viewport[2] - v29) / 2; /*0x77833e*/
      v12 = (Viewport[3] - v30[0]) / 2; /*0x778340*/
    }
    if ( a7 && (*(int (__thiscall **)(int *))(*v8 + 112))(v8) == 1 ) /*0x77835b*/
    {
      v14 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x778366*/
      if ( v14 ) /*0x778370*/
        ConvertClass::Construct(v14, a7, a7, (int)a2, 1, 0); /*0x778382*/
      v15 = *a2; /*0x778395*/
      v30[0] = v11; /*0x7783af*/
      v30[1] = v12; /*0x7783b3*/
      v26 = (*(int (__thiscall **)(int *, int *))(v15 + 120))(a2, v37); /*0x7783c2*/
      v16 = (_DWORD *)(*(int (__thiscall **)(int *))(*v8 + 120))(v8); /*0x7783c9*/
      BlitterDrawSHP(a2, (int)v27, v8, v16, v31, v30, v26, 0, 0, 0, 0, 1000, 0); /*0x7783d6*/
      if ( v27 ) /*0x7783dd*/
        (**v27)(v27, 1); /*0x7783e5*/
    }
    else
    {
      v17 = (*(int (__thiscall **)(int *))(*v8 + 124))(v8); /*0x7783ed*/
      v18 = *v8; /*0x7783f0*/
      v31[0] = v17; /*0x7783f4*/
      v19 = (*(int (__thiscall **)(int *))(v18 + 128))(v8); /*0x7783f8*/
      v20 = *v8; /*0x778402*/
      v34 = v19; /*0x778404*/
      v33 = v31[0]; /*0x77840e*/
      v32[0] = v11; /*0x778414*/
      v21 = *a2; /*0x778418*/
      v32[1] = v12; /*0x77841d*/
      v22 = (*(int (__thiscall **)(int *, CCFileClass *, _DWORD, int))(v20 + 120))(v8, &v38, 0, 1); /*0x778421*/
      v23 = (*(int (__thiscall **)(int *, _BYTE *, int))(*v8 + 120))(v8, v41, v22); /*0x778431*/
      v24 = (*(int (__thiscall **)(int *, _UNKNOWN **, _DWORD *, int *, int))(*a2 + 120))(a2, &retaddr, v32, v8, v23); /*0x778447*/
      (*(void (__thiscall **)(int *, int))(v21 + 12))(a2, v24); /*0x77844d*/
    }
    (*(void (__thiscall **)(int *, int))*v8)(v8, 1); /*0x778456*/
  }
  *(_DWORD *)v38.CDFileClass = &CCFileClass::`vftable'; /*0x778461*/
  v40 = 0; /*0x778469*/
  Vector::Clear((int)v39); /*0x778474*/
  *(_DWORD *)v38.CDFileClass = &off_7E1668; /*0x77847d*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v38); /*0x77848a*/
}



// ==== 0x007784A0  CCToolTip::QueryInterface  this=CCToolTip  sig=csp ====
_DWORD *__thiscall CCToolTip::QueryInterface(CCToolTip *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CCToolTip::`vftable'; /*0x7784a3*/
  ToolTipClass::updateString((ToolTipClass *)this); /*0x7784a9*/
  if ( (a2 & 1) != 0 ) /*0x7784b3*/
    __3_YAXPAX_Z(this); /*0x7784b6*/
  return this->__pad_0; /*0x7784c0*/
}



// ==== 0x007784D0  sub_7784D0  this=-  sig=ida-proto ====
int sub_7784D0()
{
  dword_B73580 = 0; /*0x7784d2*/
  dword_B73584 = 0; /*0x7784d7*/
  dword_B73588 = 0; /*0x7784dc*/
  dword_B7358C = 0; /*0x7784e1*/
  return 0; /*0x7784e6*/
}



// ==== 0x007784F0  sub_7784F0  this=-  sig=ida-proto ====
void sub_7784F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7784fc*/
  dbl_B73598 = Math::Sqrt(v0 + v0); /*0x77850e*/
}



// ==== 0x00778520  sub_778520  this=-  sig=ida-proto ====
void sub_778520()
{
  dbl_B735E8 = dbl_B73598 / 60.0; /*0x77852c*/
}



// ==== 0x00778540  sub_778540  this=-  sig=ida-proto ====
void sub_778540()
{
  dbl_B735D0 = 1.0 / dbl_B735E8; /*0x77854c*/
}



// ==== 0x00778560  sub_778560  this=-  sig=ida-proto ====
void sub_778560()
{
  dbl_B735C8 = 0.0174532925199433 * 45.0; /*0x77856c*/
}



// ==== 0x00778580  sub_778580  this=-  sig=ida-proto ====
void sub_778580()
{
  dbl_B735A0 = 0.0174532925199433 * 60.0; /*0x77858c*/
}



// ==== 0x007785A0  sub_7785A0  this=-  sig=ida-proto ====
void sub_7785A0()
{
  dbl_B73578 = 0.0174532925199433 * 90.0; /*0x7785ac*/
}



// ==== 0x007785C0  sub_7785C0  this=-  sig=ida-proto ====
__int64 sub_7785C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B73578 - dbl_B735A0); /*0x7785d2*/
  result = Math::RoundToInt(v0 * dbl_B73598 * 0.5); /*0x7785e6*/
  dword_B735F0 = result; /*0x7785eb*/
  return result; /*0x7785f0*/
}



// ==== 0x00778600  sub_778600  this=-  sig=ida-proto ====
void sub_778600()
{
  dbl_B735A8 = Math::ArcTan((double)dword_B735F0 * 0.00390625); /*0x778617*/
}



// ==== 0x00778630  sub_778630  this=-  sig=ida-proto ====
void sub_778630()
{
  dbl_B735C0 = Math::ArcTan((double)(2 * dword_B735F0) / dbl_B73598); /*0x778652*/
}



// ==== 0x00778660  sub_778660  this=-  sig=ida-proto ====
__int64 sub_778660()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B735F0) + 0.5); /*0x77867b*/
  dword_B735E4 = result; /*0x778680*/
  return result; /*0x778686*/
}



// ==== 0x00778690  sub_778690  this=-  sig=ida-proto ====
int sub_778690()
{
  word_B73594 = 0; /*0x778692*/
  word_B73596 = 0; /*0x778698*/
  return 0; /*0x77869e*/
}



// ==== 0x007786A0  sub_7786A0  this=-  sig=ida-proto ====
int sub_7786A0()
{
  dword_B735B0 = 0; /*0x7786a2*/
  dword_B735B4 = 0; /*0x7786a7*/
  dword_B735B8 = 0; /*0x7786ac*/
  return 0; /*0x7786b1*/
}



// ==== 0x007786C0  sub_7786C0  this=-  sig=ida-proto ====
int sub_7786C0()
{
  dword_B735E0 = 0; /*0x7786c5*/
  dword_B735D8 = 128; /*0x7786cf*/
  dword_B735DC = 128; /*0x7786d4*/
  return 128; /*0x7786d9*/
}



// ==== 0x007786E0  sub_7786E0  this=-  sig=ida-proto ====
int sub_7786E0()
{
  String::Assign((char **)&stru_B73590, aDefault_0); /*0x7786ea*/
  return atexit(unknown_libname_38); /*0x7786fa*/
}



// ==== 0x00778700  unknown_libname_38  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_38()
{
  DeleteAndZero((void **)&stru_B73590); /*0x778705*/
}



// ==== 0x00778710  ObjectClass::LoadAccountInfoWOL  this=ObjectClass  sig=csp ====
_DWORD *__thiscall LoadAccountInfoWOL(ObjectClass *this)
{
  int v1; // edi
  int Int; // esi
  int v3; // ebp
  unsigned __int8 *v4; // eax
  char *v5; // eax
  char *v6; // eax
  ReferenceCounted *v7; // eax
  void *AccountInfoWOL_Load; // esi
  ComPtr *abstractFlags; // edi
  ObjectClass v11; // [esp+10h] [ebp-B0h] BYREF

  v11.? = (int)this; /*0x778718*/
  unknown_libname_73(&v11.?); /*0x778722*/
  v1 = -2; /*0x778727*/
  Int = 0; /*0x778732*/
  v3 = -2; /*0x778734*/
  unknown_libname_73(&v11.?); /*0x778736*/
  unknown_libname_74(&v11.?); /*0x77873f*/
  unknown_libname_74(&v11.?); /*0x778748*/
  BufferIOFile::Constructor((BufferIOFile *)&v11.customSound_controller[2], g_Str_File_wolinfoMD_ini); /*0x778756*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v11.customSound_controller[2], 0) ) /*0x778760*/
  {
    FileClass::Close((RawFileClass *)&v11.customSound_controller[2]); /*0x77876d*/
    CCFileClass::Close((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x778776*/
    CCFileClass::Reopen((CDFileClass *)&v11.customSound_controller[2], g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x778786*/
  }
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v11.customSound_controller[2], 0) ) /*0x778790*/
  {
    v11.? = 0; /*0x7787a1*/
    v11.? = 0; /*0x7787a5*/
    GenericNode::Constructor((GenericNode *)&v11.owningHouseIndex); /*0x7787a9*/
    GenericNode::Constructor((GenericNode *)&v11.attachedTag); /*0x7787b2*/
    v11.occupant = (int)&GenericList::`vftable'; /*0x7787c0*/
    LinkedList::Prepend((LinkedList *)&v11.owningHouseIndex, (int)&v11.attachedTag); /*0x7787c8*/
    v11.occupant = (int)&List<INIClass::INISection *>::`vftable'; /*0x7787d1*/
    memset(&v11.ambientSoundController[1], 0, 13); /*0x7787df*/
    v11.customSound_controller[0] = 0; /*0x7787ef*/
    v11.customSound_controller[1] = 0; /*0x7787f3*/
    v11.? = (int)&INIClass::`vftable'; /*0x7787f7*/
    FileStraw::Open((FileStraw *)&v11.?, (int)&v11.customSound_controller[2], 0); /*0x7787ff*/
    CCFileClass::Close((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x778808*/
    v4 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)&stru_B73590); /*0x778812*/
    if ( INIClass::BinarySearchSection((int)&v11.?, v4) ) /*0x77881c*/
    {
      String::Assign((String *)&v11, g_INI_Key_Server); /*0x778832*/
      INIClass::ReadString((INIClass *)&v11.?, (char **)&stru_B73590, (char **)&v11, (char **)&v11.?, (int)&v11.?); /*0x77884f*/
      DeleteAndZero(&v11); /*0x778858*/
      String::Assign((String *)&v11, g_INI_Key_Locale); /*0x778866*/
      Int = INIClass::ReadInt((bool *)&v11.?, (char **)&stru_B73590, (char **)&v11, 0); /*0x778883*/
      DeleteAndZero(&v11); /*0x778885*/
      String::Assign((String *)&v11, g_INI_Key_Country); /*0x778893*/
      v1 = INIClass::ReadInt((bool *)&v11.?, (char **)&stru_B73590, (char **)&v11, -2); /*0x7788b1*/
      DeleteAndZero(&v11); /*0x7788b3*/
      String::Assign((String *)&v11, &stru_81AF8C.?[95]); /*0x7788c1*/
      v3 = INIClass::ReadInt((bool *)&v11.?, (char **)&stru_B73590, (char **)&v11, -2); /*0x7788df*/
      DeleteAndZero(&v11); /*0x7788e1*/
      String::Assign((String *)&v11, g_INI_Key_UpdateTime); /*0x7788ef*/
      INIClass::ReadString((INIClass *)&v11.?, (char **)&stru_B73590, (char **)&v11, (char **)&v11.?, (int)&v11.?); /*0x77890c*/
      DeleteAndZero(&v11); /*0x778915*/
      LocalizeWOLDateString((char **)&v11.?, &v11.?); /*0x778922*/
      DeleteAndZero::Alt2((DeleteAndZero *)&v11.?); /*0x77892b*/
      String::Assign((String *)&v11, g_INI_Key_UpdateDate); /*0x778939*/
      INIClass::ReadString((INIClass *)&v11.?, (char **)&stru_B73590, (char **)&v11, (char **)&v11.?, (int)&v11.?); /*0x778956*/
      DeleteAndZero(&v11); /*0x77895f*/
      v5 = String::GetOrEmpty_Alt((String *)&v11.?); /*0x778968*/
      v6 = CharToWideString(v5); /*0x77896f*/
      WideString::Reassign((void **)&v11.?, (wchar_t *)v6); /*0x778979*/
    }
    HashTable::DestroyHashTableINIClass((INIClass *)&v11.?); /*0x778982*/
  }
  v7 = (ReferenceCounted *)__2_YAPAXI_Z(0x44u); /*0x778989*/
  if ( v7 ) /*0x778993*/
    AccountInfoWOL_Load = LoadAccountInfoWOL_Load( /*0x7789bc*/
                            v7,
                            (const char **)&v11.?,
                            Int,
                            0,
                            0,
                            v1,
                            v3,
                            -1,
                            -1,
                            -1,
                            -1,
                            -1,
                            1,
                            (const wchar_t **)&v11.?,
                            (const wchar_t **)&v11.?);
  else
    AccountInfoWOL_Load = 0; /*0x7789c0*/
  abstractFlags = (ComPtr *)v11.?; /*0x7789c2*/
  ComPtr::Constructor((ComPtr *)v11.?); /*0x7789c8*/
  *(_DWORD *)abstractFlags->__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x7789cf*/
  ComPtr::Set(abstractFlags, (int)AccountInfoWOL_Load); /*0x7789d6*/
  v11.customSound_controller[2] = (int)&off_7E1668; /*0x7789df*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x7789e7*/
  DeleteAndZero::Alt((DeleteAndZero *)&v11.?); /*0x7789f0*/
  DeleteAndZero::Alt((DeleteAndZero *)&v11.?); /*0x7789f9*/
  DeleteAndZero((ObjectClass *)&v11.?); /*0x778a02*/
  DeleteAndZero((ObjectClass *)&v11.?); /*0x778a0b*/
  return abstractFlags->__pad_0; /*0x778a12*/
}



// ==== 0x00778A20  LoadPlayerProfile  this=-  sig=csp ====
ObjectClass *__fastcall LoadPlayerProfile(ObjectClass *a1, const char **a2)
{
  unsigned __int8 *v5; // eax
  int Int; // esi
  unsigned __int8 *v7; // eax
  char Bool_Overwrite; // bl
  int v9; // edi
  int v10; // ebp
  unsigned __int8 *v11; // eax
  char *v12; // eax
  char *v13; // eax
  ReferenceCounted *v14; // eax
  void *AccountInfoWOL_Load; // esi
  ComPtr *v16; // edi
  ObjectClass v17; // [esp+Ch] [ebp-D0h] BYREF

  *(_DWORD *)&v17.bombVisible = a1; /*0x778a39*/
  BufferIOFile::Constructor((BufferIOFile *)&v17.spawnStatus, g_Str_File_wolinfoMD_ini); /*0x778a3d*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v17.spawnStatus, 0) ) /*0x778a4c*/
  {
    FileClass::Close((RawFileClass *)&v17.spawnStatus); /*0x778a5c*/
    CCFileClass::Close((BufferIOFileClass *)&v17.spawnStatus); /*0x778a68*/
    CCFileClass::Reopen((CDFileClass *)&v17.spawnStatus, g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x778a7b*/
  }
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v17.spawnStatus, 0) )
  {
    v17.? = 0; /*0x778abf*/
    v17.? = 0; /*0x778ac3*/
    v17.fallRate = 0; /*0x778ac7*/
    v17.nextObject = 0; /*0x778acb*/
    v17.owningHouseIndex = (int)&GenericNode::`vftable'; /*0x778acf*/
    GenericNode::Constructor((GenericNode *)&v17.attachedTag); /*0x778ad7*/
    LinkedList::Prepend((LinkedList *)&v17.owningHouseIndex, (int)&v17.attachedTag); /*0x778aed*/
    v17.occupant = (int)&List<INIClass::INISection *>::`vftable'; /*0x778af9*/
    memset(&v17.ambientSoundController[1], 0, 13); /*0x778b07*/
    v17.customSound_controller[0] = 0; /*0x778b18*/
    v17.customSound_controller[1] = 0; /*0x778b1c*/
    v17.? = (int)&INIClass::`vftable'; /*0x778b20*/
    FileStraw::Open((FileStraw *)&v17.?, (int)&v17.spawnStatus, 0); /*0x778b28*/
    CCFileClass::Close((BufferIOFileClass *)&v17.spawnStatus); /*0x778b34*/
    String::AssignFromPtr((String *)&v17.?, a2); /*0x778b3e*/
    String::ToLower((String *)&v17.?); /*0x778b47*/
    v5 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)&v17.?); /*0x778b50*/
    if ( INIClass::BinarySearchSection((int)&v17.?, v5) )
    {
      unknown_libname_73(&v17.?); /*0x778ba4*/
      String::Assign((String *)&v17, g_INI_Key_Server); /*0x778bb2*/
      INIClass::ReadString((INIClass *)&v17.?, (char **)&v17.?, (char **)&v17, (char **)&v17.?, (int)&v17.?); /*0x778bcf*/
      DeleteAndZero(&v17); /*0x778bd8*/
      String::Assign((String *)&v17, g_INI_Key_Locale); /*0x778be6*/
      Int = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, 0); /*0x778c03*/
      DeleteAndZero(&v17); /*0x778c05*/
      v7 = (unsigned __int8 *)String::GetOrEmpty((String *)&v17.?); /*0x778c14*/
      Bool_Overwrite = INIClass::ReadBool_Overwrite(&v17.?, v7, (unsigned __int8 *)aLocaleverified, 0); /*0x778c23*/
      LOBYTE(v17.customSound_controller[4]) = Bool_Overwrite; /*0x778c2e*/
      String::Assign((String *)&v17, g_INI_Key_Country); /*0x778c32*/
      v9 = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -2); /*0x778c50*/
      DeleteAndZero(&v17); /*0x778c52*/
      String::Assign((String *)&v17, &stru_81AF8C.?[95]); /*0x778c60*/
      v10 = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -2); /*0x778c7e*/
      DeleteAndZero(&v17); /*0x778c80*/
      String::Assign((String *)&v17, aRank); /*0x778c8e*/
      v17.customSound_controller[3] = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778cac*/
      DeleteAndZero(&v17); /*0x778cb0*/
      String::Assign((String *)&v17, (const char *)&g_INI_Key_TRUCKA.?[82]); /*0x778cbe*/
      *(_DWORD *)&v17.isOnMap = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778cdc*/
      DeleteAndZero(&v17); /*0x778ce3*/
      String::Assign((String *)&v17, aWins); /*0x778cf1*/
      v17.customSound = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778d0f*/
      DeleteAndZero(&v17); /*0x778d13*/
      String::Assign((String *)&v17, aLosses); /*0x778d21*/
      v17.health = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778d3f*/
      DeleteAndZero(&v17); /*0x778d43*/
      String::Assign((String *)&v17, aDisconnects); /*0x778d51*/
      v17.customSound_controller[2] = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778d6f*/
      DeleteAndZero(&v17); /*0x778d73*/
      v11 = (unsigned __int8 *)String::GetOrEmpty((String *)&v17.?); /*0x778d83*/
      LOBYTE(v17.estimatedHealth) = INIClass::ReadBool_Overwrite(&v17.?, v11, (unsigned __int8 *)aMatchbyres, 1); /*0x778d96*/
      unknown_libname_73(&v17.?); /*0x778d9d*/
      unknown_libname_74(&v17.?); /*0x778da6*/
      String::Assign((String *)&v17, g_INI_Key_UpdateTime); /*0x778db4*/
      INIClass::ReadString((INIClass *)&v17.?, (char **)&v17.?, (char **)&v17, (char **)&v17.?, (int)&v17.?); /*0x778dd1*/
      DeleteAndZero(&v17); /*0x778dda*/
      LocalizeWOLDateString((char **)&v17.?, (void **)&v17.?); /*0x778de7*/
      DeleteAndZero::Alt2((DeleteAndZero *)&v17.?); /*0x778df0*/
      unknown_libname_74(&v17.?); /*0x778df9*/
      String::Assign((String *)&v17, g_INI_Key_UpdateDate); /*0x778e07*/
      INIClass::ReadString((INIClass *)&v17.?, (char **)&v17.?, (char **)&v17, (char **)&v17.?, (int)&v17.?); /*0x778e24*/
      DeleteAndZero(&v17); /*0x778e2d*/
      v12 = String::GetOrEmpty_Alt((String *)&v17.?); /*0x778e36*/
      v13 = CharToWideString(v12); /*0x778e3d*/
      WideString::Reassign((void **)&v17.?, (wchar_t *)v13); /*0x778e47*/
      v14 = (ReferenceCounted *)__2_YAPAXI_Z(0x44u); /*0x778e4e*/
      if ( v14 )
        AccountInfoWOL_Load = LoadAccountInfoWOL_Load(
                                v14,
                                (const char **)&v17.?,
                                Int,
                                v17.customSound_controller[4],
                                Bool_Overwrite != 0 ? 1 : 3,
                                v9,
                                v10,
                                v17.customSound_controller[3],
                                *(int *)&v17.isOnMap,
                                v17.customSound,
                                v17.health,
                                v17.customSound_controller[2],
                                v17.estimatedHealth,
                                (const wchar_t **)&v17.?,
                                (const wchar_t **)&v17.?);
      else
        AccountInfoWOL_Load = 0; /*0x778eb7*/
      v16 = *(ComPtr **)&v17.bombVisible; /*0x778eb9*/
      ComPtr::Constructor(*(ComPtr **)&v17.bombVisible); /*0x778ebf*/
      *(_DWORD *)v16->__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x778ec6*/
      ComPtr::Set(v16, (int)AccountInfoWOL_Load); /*0x778ecd*/
      DeleteAndZero::Alt((DeleteAndZero *)&v17.?); /*0x778ed6*/
      DeleteAndZero::Alt((DeleteAndZero *)&v17.?); /*0x778edf*/
      DeleteAndZero((ObjectClass *)&v17.?); /*0x778ee8*/
      DeleteAndZero((ObjectClass *)&v17.?); /*0x778ef1*/
      DeleteAndZero((ObjectClass *)&v17.?); /*0x778efa*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v17.?); /*0x778f03*/
      v17.spawnStatus = (int)&off_7E1668; /*0x778f0f*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17.spawnStatus); /*0x778f1a*/
      return (ObjectClass *)v16; /*0x778f1f*/
    }
    else
    {
      LoadAccountInfoWOL(a1); /*0x778b65*/
      DeleteAndZero((ObjectClass *)&v17.?); /*0x778b6e*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v17.?); /*0x778b77*/
      v17.spawnStatus = (int)&off_7E1668; /*0x778b83*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17.spawnStatus); /*0x778b8e*/
      return a1; /*0x778b93*/
    }
  }
  else
  {
    LoadAccountInfoWOL(a1); /*0x778a93*/
    v17.spawnStatus = (int)&off_7E1668; /*0x778a9f*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v17.spawnStatus); /*0x778aaa*/
    return a1; /*0x778aaf*/
  }
}



// ==== 0x00778F30  LocalizeWOLDateString  this=-  sig=csp ====
char __fastcall LocalizeWOLDateString(String *a1, WideString *a2)
{
  char *v3; // eax
  char *v4; // eax
  wchar_t *v5; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  wchar_t *v29; // eax

  v3 = String::GetOrEmpty_Alt(a1); /*0x778f33*/
  v4 = CharToWideString(v3); /*0x778f3a*/
  WideString::Reassign(a2, (wchar_t *)v4); /*0x778f42*/
  v5 = WideString::GetOrEmpty(a2); /*0x778f4e*/
  if ( wcsstr(v5, L"Jan") ) /*0x778f54*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 127); /*0x778f6e*/
    LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jan", StringCSF); /*0x778f7b*/
  }
  else
  {
    v8 = WideString::GetOrEmpty(a2); /*0x778f89*/
    if ( wcsstr(v8, L"Feb") ) /*0x778f8f*/
    {
      v9 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 132); /*0x778fac*/
      LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Feb", v9); /*0x778fb9*/
    }
    else
    {
      v10 = WideString::GetOrEmpty(a2); /*0x778fc7*/
      if ( wcsstr(v10, L"Mar") ) /*0x778fcd*/
      {
        v11 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 137); /*0x778fea*/
        LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Mar", v11); /*0x778ff7*/
      }
      else
      {
        v12 = WideString::GetOrEmpty(a2); /*0x779005*/
        if ( wcsstr(v12, L"Apr") ) /*0x77900b*/
        {
          v13 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 142); /*0x779028*/
          LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Apr", v13); /*0x779035*/
        }
        else
        {
          v14 = WideString::GetOrEmpty(a2); /*0x779043*/
          if ( wcsstr(v14, L"May") ) /*0x779049*/
          {
            v15 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 147); /*0x779066*/
            LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"May", v15); /*0x779073*/
          }
          else
          {
            v16 = WideString::GetOrEmpty(a2); /*0x779081*/
            if ( wcsstr(v16, L"Jun") ) /*0x779087*/
            {
              v17 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 152); /*0x7790a4*/
              LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jun", v17); /*0x7790b1*/
            }
            else
            {
              v18 = WideString::GetOrEmpty(a2); /*0x7790bf*/
              if ( wcsstr(v18, L"Jul") ) /*0x7790c5*/
              {
                v19 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 157); /*0x7790e2*/
                LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jul", v19); /*0x7790ef*/
              }
              else
              {
                v20 = WideString::GetOrEmpty(a2); /*0x7790fd*/
                if ( wcsstr(v20, L"Aug") ) /*0x779103*/
                {
                  v21 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 162); /*0x779120*/
                  LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Aug", v21); /*0x77912d*/
                }
                else
                {
                  v22 = WideString::GetOrEmpty(a2); /*0x77913b*/
                  if ( wcsstr(v22, L"Sep") ) /*0x779141*/
                  {
                    v23 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 167); /*0x77915e*/
                    LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Sep", v23); /*0x77916b*/
                  }
                  else
                  {
                    v24 = WideString::GetOrEmpty(a2); /*0x779179*/
                    if ( wcsstr(v24, L"Oct") ) /*0x77917f*/
                    {
                      v25 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 172); /*0x77919c*/
                      LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Oct", v25); /*0x7791a9*/
                    }
                    else
                    {
                      v26 = WideString::GetOrEmpty(a2); /*0x7791b7*/
                      if ( wcsstr(v26, L"Nov") ) /*0x7791bd*/
                      {
                        v27 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 177); /*0x7791da*/
                        LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Nov", v27); /*0x7791e7*/
                      }
                      else
                      {
                        v28 = WideString::GetOrEmpty(a2); /*0x7791f5*/
                        v7 = wcsstr(v28, L"Dec"); /*0x7791fb*/
                        if ( v7 ) /*0x779205*/
                        {
                          v29 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 182); /*0x779218*/
                          LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Dec", v29); /*0x779225*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v7; /*0x778f80*/
}



// ==== 0x00779230  ConvertDateMonthNames  this=-  sig=csp ====
void __fastcall ConvertDateMonthNames(wchar_t **a1, String *a2)
{
  wchar_t *v4; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  char *v29; // eax
  char *v30; // eax
  wchar_t *StringCSF; // [esp-4h] [ebp-10h]
  wchar_t *v32; // [esp-4h] [ebp-10h]
  wchar_t *v33; // [esp-4h] [ebp-10h]
  wchar_t *v34; // [esp-4h] [ebp-10h]
  wchar_t *v35; // [esp-4h] [ebp-10h]
  wchar_t *v36; // [esp-4h] [ebp-10h]
  wchar_t *v37; // [esp-4h] [ebp-10h]
  wchar_t *v38; // [esp-4h] [ebp-10h]
  wchar_t *v39; // [esp-4h] [ebp-10h]
  wchar_t *v40; // [esp-4h] [ebp-10h]
  wchar_t *v41; // [esp-4h] [ebp-10h]
  wchar_t *v42; // [esp-4h] [ebp-10h]
  WideString v43[4]; // [esp+8h] [ebp-4h] BYREF

  unknown_libname_74(v43); /*0x77923b*/
  v4 = WideString::GetOrEmpty_Alt((WideString *)a1); /*0x779242*/
  WideString::Reassign(v43, v4); /*0x77924c*/
  StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 191); /*0x77926b*/
  v5 = WideString::GetOrEmpty(v43); /*0x77926c*/
  if ( wcsstr(v5, StringCSF) ) /*0x779272*/
  {
    v6 = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 192); /*0x779294*/
    WideString::Replace(v43, v6, (wchar_t *)L"Jan"); /*0x77929e*/
  }
  v32 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 194); /*0x7792bd*/
  v7 = WideString::GetOrEmpty(v43); /*0x7792be*/
  if ( wcsstr(v7, v32) ) /*0x7792c4*/
  {
    v8 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 195); /*0x7792e6*/
    WideString::Replace(v43, v8, (wchar_t *)L"Feb"); /*0x7792f0*/
  }
  v33 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 197); /*0x77930f*/
  v9 = WideString::GetOrEmpty(v43); /*0x779310*/
  if ( wcsstr(v9, v33) ) /*0x779316*/
  {
    v10 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 198); /*0x779338*/
    WideString::Replace(v43, v10, (wchar_t *)L"Mar"); /*0x779342*/
  }
  v34 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 200); /*0x779361*/
  v11 = WideString::GetOrEmpty(v43); /*0x779362*/
  if ( wcsstr(v11, v34) ) /*0x779368*/
  {
    v12 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 201); /*0x77938a*/
    WideString::Replace(v43, v12, (wchar_t *)L"Apr"); /*0x779394*/
  }
  v35 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 203); /*0x7793b3*/
  v13 = WideString::GetOrEmpty(v43); /*0x7793b4*/
  if ( wcsstr(v13, v35) ) /*0x7793ba*/
  {
    v14 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 204); /*0x7793dc*/
    WideString::Replace(v43, v14, (wchar_t *)L"May"); /*0x7793e6*/
  }
  v36 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 206); /*0x779405*/
  v15 = WideString::GetOrEmpty(v43); /*0x779406*/
  if ( wcsstr(v15, v36) ) /*0x77940c*/
  {
    v16 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 207); /*0x77942e*/
    WideString::Replace(v43, v16, (wchar_t *)L"Jun"); /*0x779438*/
  }
  v37 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 209); /*0x779457*/
  v17 = WideString::GetOrEmpty(v43); /*0x779458*/
  if ( wcsstr(v17, v37) ) /*0x77945e*/
  {
    v18 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 210); /*0x779480*/
    WideString::Replace(v43, v18, (wchar_t *)L"Jul"); /*0x77948a*/
  }
  v38 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 212); /*0x7794a9*/
  v19 = WideString::GetOrEmpty(v43); /*0x7794aa*/
  if ( wcsstr(v19, v38) ) /*0x7794b0*/
  {
    v20 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 213); /*0x7794d2*/
    WideString::Replace(v43, v20, (wchar_t *)L"Aug"); /*0x7794dc*/
  }
  v39 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 215); /*0x7794fb*/
  v21 = WideString::GetOrEmpty(v43); /*0x7794fc*/
  if ( wcsstr(v21, v39) ) /*0x779502*/
  {
    v22 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 216); /*0x779524*/
    WideString::Replace(v43, v22, (wchar_t *)L"Sep"); /*0x77952e*/
  }
  v40 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 218); /*0x77954d*/
  v23 = WideString::GetOrEmpty(v43); /*0x77954e*/
  if ( wcsstr(v23, v40) ) /*0x779554*/
  {
    v24 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 219); /*0x779576*/
    WideString::Replace(v43, v24, (wchar_t *)L"Oct"); /*0x779580*/
  }
  v41 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 221); /*0x77959f*/
  v25 = WideString::GetOrEmpty(v43); /*0x7795a0*/
  if ( wcsstr(v25, v41) ) /*0x7795a6*/
  {
    v26 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 222); /*0x7795c8*/
    WideString::Replace(v43, v26, (wchar_t *)L"Nov"); /*0x7795d2*/
  }
  v42 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 224); /*0x7795f1*/
  v27 = WideString::GetOrEmpty(v43); /*0x7795f2*/
  if ( wcsstr(v27, v42) ) /*0x7795f8*/
  {
    v28 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 225); /*0x77961a*/
    WideString::Replace(v43, v28, (wchar_t *)L"Dec"); /*0x779624*/
  }
  v29 = (char *)WideString::GetOrEmpty(v43); /*0x77962d*/
  v30 = ToWideStringChar(v29); /*0x779634*/
  String::Assign_Bool(a2, v30); /*0x77963c*/
  DeleteAndZero::Alt((DeleteAndZero *)v43); /*0x779645*/
}



// ==== 0x00779690  ReferenceCounted::LoadAccountInfoWOL_Load  this=ReferenceCounted  sig=csp ====
void *__thiscall LoadAccountInfoWOL_Load(
        ReferenceCounted *this,
        const char **a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13,
        const wchar_t **a14,
        const wchar_t **a15)
{
  *((_DWORD *)this + 1) = 0; /*0x779695*/
  *((_BYTE *)this + 8) = 0; /*0x779698*/
  *this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x7796a3*/
  String::AssignFromPtr((String *)(this + 3), a2); /*0x7796a9*/
  *((_DWORD *)this + 4) = a3; /*0x7796ba*/
  *((_DWORD *)this + 6) = a5; /*0x7796c1*/
  *((_BYTE *)this + 20) = a4; /*0x7796c8*/
  *((_DWORD *)this + 7) = a6; /*0x7796cf*/
  *((_DWORD *)this + 9) = a8; /*0x7796d6*/
  *((_DWORD *)this + 8) = a7; /*0x7796dd*/
  *((_DWORD *)this + 10) = a9; /*0x7796e4*/
  *((_DWORD *)this + 12) = a11; /*0x7796eb*/
  *((_DWORD *)this + 11) = a10; /*0x7796f2*/
  *((_DWORD *)this + 13) = a12; /*0x7796f9*/
  *((_BYTE *)this + 56) = a13; /*0x779700*/
  WideString::AssignFromPtr((wchar_t **)this + 15, a15); /*0x779703*/
  WideString::AssignFromPtr((wchar_t **)this + 16, a14); /*0x779710*/
  *this = (ReferenceCounted)&PlayerProfile::`vftable'; /*0x779715*/
  return this; /*0x77971d*/
}



// ==== 0x00779730  ReadWOLLobbyPlayerOption  this=-  sig=ida-proto ====
char sub_779730()
{
  char Bool_Overwrite; // bl
  void *v2[4]; // [esp+4h] [ebp-98h] BYREF
  _DWORD v3[3]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v4[6]; // [esp+20h] [ebp-7Ch] BYREF
  char v5; // [esp+38h] [ebp-64h]
  int v6; // [esp+3Ch] [ebp-60h]
  int v7; // [esp+40h] [ebp-5Ch]
  _DWORD v8[22]; // [esp+44h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v8, g_Str_File_wolinfoMD_ini); /*0x779740*/
  if ( File::IsReady(v8, 0) ) /*0x77974c*/
  {
    v3[0] = &GenericNode::`vftable'; /*0x779779*/
    v4[0] = &GenericNode::`vftable'; /*0x77977d*/
    v2[1] = 0; /*0x779785*/
    v2[2] = 0; /*0x77978a*/
    v3[1] = 0; /*0x77978e*/
    v3[2] = 0; /*0x779792*/
    v4[1] = 0; /*0x779796*/
    v4[2] = 0; /*0x77979a*/
    LinkedList::Prepend(v3, (int)v4); /*0x7797a6*/
    v2[3] = &List<INIClass::INISection *>::`vftable'; /*0x7797af*/
    memset(&v4[3], 0, 12); /*0x7797bd*/
    v5 = 0; /*0x7797c9*/
    v6 = 0; /*0x7797cd*/
    v7 = 0; /*0x7797d1*/
    v2[0] = &INIClass::`vftable'; /*0x7797d5*/
    FileStraw::Open(v2, (int)v8, 0); /*0x7797dd*/
    CCFileClass::Close(v8); /*0x7797e6*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x779804*/
                       (int)v2,
                       (unsigned __int8 *)&off_84A11C,
                       (unsigned __int8 *)g_INI_Key_AutoLogin,
                       1);
    HashTable::DestroyHashTableINIClass(v2); /*0x779806*/
    v8[0] = &off_7E1668; /*0x77980f*/
    BufferIOFileClass::Dtor(v8); /*0x779817*/
    return Bool_Overwrite; /*0x77981c*/
  }
  else
  {
    v8[0] = &off_7E1668; /*0x779759*/
    BufferIOFileClass::Dtor(v8); /*0x779761*/
    return 0; /*0x779766*/
  }
}



// ==== 0x00779830  ReadWOLGameOption  this=-  sig=ida-proto ====
int __fastcall sub_779830(char a1)
{
  void *v3[4]; // [esp+8h] [ebp-98h] BYREF
  _DWORD v4[3]; // [esp+18h] [ebp-88h] BYREF
  _DWORD v5[6]; // [esp+24h] [ebp-7Ch] BYREF
  char v6; // [esp+3Ch] [ebp-64h]
  int v7; // [esp+40h] [ebp-60h]
  int v8; // [esp+44h] [ebp-5Ch]
  _DWORD v9[22]; // [esp+48h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v9, g_Str_File_wolinfoMD_ini); /*0x779843*/
  if ( !File::IsReady(v9, 0) ) /*0x77984f*/
  {
    FileClass::Close(v9); /*0x77985c*/
    CCFileClass::Close(v9); /*0x779865*/
    CCFileClass::Reopen(v9, g_Str_File_wolinfoMD_ini, 1); /*0x779875*/
  }
  v4[0] = &GenericNode::`vftable'; /*0x779883*/
  v5[0] = &GenericNode::`vftable'; /*0x779887*/
  v3[1] = 0; /*0x77988f*/
  v3[2] = 0; /*0x779894*/
  v4[1] = 0; /*0x779898*/
  v4[2] = 0; /*0x77989c*/
  v5[1] = 0; /*0x7798a0*/
  v5[2] = 0; /*0x7798a4*/
  LinkedList::Prepend(v4, (int)v5); /*0x7798b0*/
  v3[3] = &List<INIClass::INISection *>::`vftable'; /*0x7798b9*/
  memset(&v5[3], 0, 12); /*0x7798c2*/
  v6 = 0; /*0x7798ce*/
  v7 = 0; /*0x7798d2*/
  v8 = 0; /*0x7798d6*/
  v3[0] = &INIClass::`vftable'; /*0x7798da*/
  if ( File::IsReady(v9, 0) ) /*0x7798e2*/
  {
    FileStraw::Open(v3, (int)v9, 0); /*0x7798f5*/
    INIClass::SetBool((char *)v3, (unsigned __int8 *)&off_84A11C, g_INI_Key_AutoLogin, a1); /*0x779909*/
    INIClass::SaveToPipe(v3, (int)v9); /*0x779917*/
  }
  HashTable::DestroyHashTableINIClass(v3); /*0x779920*/
  v9[0] = &off_7E1668; /*0x779929*/
  return BufferIOFileClass::Dtor(v9); /*0x779936*/
}



// ==== 0x00779940  ReadWOLLobbyHouseOption  this=-  sig=ida-proto ====
char sub_779940()
{
  char Bool_Overwrite; // bl
  void *v2[4]; // [esp+4h] [ebp-98h] BYREF
  _DWORD v3[3]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v4[6]; // [esp+20h] [ebp-7Ch] BYREF
  char v5; // [esp+38h] [ebp-64h]
  int v6; // [esp+3Ch] [ebp-60h]
  int v7; // [esp+40h] [ebp-5Ch]
  _DWORD v8[22]; // [esp+44h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v8, g_Str_File_wolinfoMD_ini); /*0x779950*/
  if ( File::IsReady(v8, 0) ) /*0x77995c*/
  {
    v3[0] = &GenericNode::`vftable'; /*0x779989*/
    v4[0] = &GenericNode::`vftable'; /*0x77998d*/
    v2[1] = 0; /*0x779995*/
    v2[2] = 0; /*0x77999a*/
    v3[1] = 0; /*0x77999e*/
    v3[2] = 0; /*0x7799a2*/
    v4[1] = 0; /*0x7799a6*/
    v4[2] = 0; /*0x7799aa*/
    LinkedList::Prepend(v3, (int)v4); /*0x7799b6*/
    v2[3] = &List<INIClass::INISection *>::`vftable'; /*0x7799bf*/
    memset(&v4[3], 0, 12); /*0x7799cd*/
    v5 = 0; /*0x7799d9*/
    v6 = 0; /*0x7799dd*/
    v7 = 0; /*0x7799e1*/
    v2[0] = &INIClass::`vftable'; /*0x7799e5*/
    FileStraw::Open(v2, (int)v8, 0); /*0x7799ed*/
    CCFileClass::Close(v8); /*0x7799f6*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x779a14*/
                       (int)v2,
                       (unsigned __int8 *)&off_84A11C,
                       (unsigned __int8 *)aAddmatchbuddie,
                       1);
    HashTable::DestroyHashTableINIClass(v2); /*0x779a16*/
    v8[0] = &off_7E1668; /*0x779a1f*/
    BufferIOFileClass::Dtor(v8); /*0x779a27*/
    return Bool_Overwrite; /*0x779a2c*/
  }
  else
  {
    v8[0] = &off_7E1668; /*0x779969*/
    BufferIOFileClass::Dtor(v8); /*0x779971*/
    return 0; /*0x779976*/
  }
}



// ==== 0x00779A40  ReadWOLLobbyOption  this=-  sig=ida-proto ====
int __fastcall sub_779A40(char a1)
{
  void *v3[4]; // [esp+8h] [ebp-98h] BYREF
  _DWORD v4[3]; // [esp+18h] [ebp-88h] BYREF
  _DWORD v5[6]; // [esp+24h] [ebp-7Ch] BYREF
  char v6; // [esp+3Ch] [ebp-64h]
  int v7; // [esp+40h] [ebp-60h]
  int v8; // [esp+44h] [ebp-5Ch]
  _DWORD v9[22]; // [esp+48h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v9, g_Str_File_wolinfoMD_ini); /*0x779a53*/
  if ( !File::IsReady(v9, 0) ) /*0x779a5f*/
  {
    FileClass::Close(v9); /*0x779a6c*/
    CCFileClass::Close(v9); /*0x779a75*/
    CCFileClass::Reopen(v9, g_Str_File_wolinfoMD_ini, 1); /*0x779a85*/
  }
  v4[0] = &GenericNode::`vftable'; /*0x779a93*/
  v5[0] = &GenericNode::`vftable'; /*0x779a97*/
  v3[1] = 0; /*0x779a9f*/
  v3[2] = 0; /*0x779aa4*/
  v4[1] = 0; /*0x779aa8*/
  v4[2] = 0; /*0x779aac*/
  v5[1] = 0; /*0x779ab0*/
  v5[2] = 0; /*0x779ab4*/
  LinkedList::Prepend(v4, (int)v5); /*0x779ac0*/
  v3[3] = &List<INIClass::INISection *>::`vftable'; /*0x779ac9*/
  memset(&v5[3], 0, 12); /*0x779ad2*/
  v6 = 0; /*0x779ade*/
  v7 = 0; /*0x779ae2*/
  v8 = 0; /*0x779ae6*/
  v3[0] = &INIClass::`vftable'; /*0x779aea*/
  if ( File::IsReady(v9, 0) ) /*0x779af2*/
  {
    FileStraw::Open(v3, (int)v9, 0); /*0x779b05*/
    INIClass::SetBool((char *)v3, (unsigned __int8 *)&off_84A11C, aAddmatchbuddie, a1); /*0x779b19*/
    INIClass::SaveToPipe(v3, (int)v9); /*0x779b27*/
  }
  HashTable::DestroyHashTableINIClass(v3); /*0x779b30*/
  v9[0] = &off_7E1668; /*0x779b39*/
  return BufferIOFileClass::Dtor(v9); /*0x779b46*/
}



// ==== 0x00779B50  ObjectClass::ReadAutoLoginWOL  this=ObjectClass  sig=csp ====
char **__thiscall ReadAutoLoginWOL(ObjectClass *this)
{
  char *v3; // [esp+8h] [ebp-A4h] BYREF
  String v4; // [esp+Ch] [ebp-A0h] BYREF
  INIClass v5; // [esp+14h] [ebp-98h] BYREF
  BufferIOFile v6; // [esp+54h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v6, g_Str_File_wolinfoMD_ini); /*0x779b63*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v6, 0) ) /*0x779b6f*/
  {
    v5.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x779b8e*/
    v5.sectionCount = (int)&GenericNode::`vftable'; /*0x779b92*/
    v5.headNode[0] = 0; /*0x779b9a*/
    v5.headNode[1] = 0; /*0x779b9f*/
    v5.sectionHead[1] = 0; /*0x779ba3*/
    v5.sectionHead[2] = 0; /*0x779ba7*/
    *(_DWORD *)v5.__pad_20 = 0; /*0x779bab*/
    *(_DWORD *)&v5.__pad_20[4] = 0; /*0x779baf*/
    LinkedList::Prepend((LinkedList *)v5.sectionHead, (int)&v5.sectionCount); /*0x779bbb*/
    v5.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x779bc4*/
    memset(&v5.__pad_20[8], 0, 13); /*0x779bd2*/
    v5.unknown38 = 0; /*0x779be2*/
    v5.INIClass_field_3C = 0; /*0x779be6*/
    *(_DWORD *)v5.__pad_0 = &INIClass::`vftable'; /*0x779bea*/
    FileStraw::Open((FileStraw *)&v5, (int)&v6, 0); /*0x779bf2*/
    CCFileClass::Close((BufferIOFileClass *)&v6); /*0x779bfb*/
    unknown_libname_73(&v3); /*0x779c04*/
    String::Assign(&v4, g_INI_Key_AutoLogin); /*0x779c12*/
    String::Assign((String *)&v4.m_3[1], g_INI_Key_DefaultPersona); /*0x779c20*/
    INIClass::ReadString(&v5, (char **)&v4.m_3[1], (char **)&v4, &v3, (int)&v3); /*0x779c3d*/
    DeleteAndZero((ObjectClass *)&v4.m_3[1]); /*0x779c46*/
    DeleteAndZero((ObjectClass *)&v4); /*0x779c4f*/
    String::AssignFromPtr((String *)this, (const char **)&v3); /*0x779c5b*/
    DeleteAndZero((ObjectClass *)&v3); /*0x779c64*/
    HashTable::DestroyHashTableINIClass(&v5); /*0x779c6d*/
  }
  else
  {
    String::Assign((String *)this, 0); /*0x779b7b*/
  }
  *(_DWORD *)v6.__pad_0 = &off_7E1668; /*0x779c76*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x779c7e*/
  return (char **)this; /*0x779c85*/
}



// ==== 0x00779C90  ObjectClass::ReadSettingsWOL  this=ObjectClass  sig=csp ====
int __thiscall ReadSettingsWOL(ObjectClass *this)
{
  String v3; // [esp+8h] [ebp-A0h] BYREF
  INIClass v4; // [esp+10h] [ebp-98h] BYREF
  BufferIOFile v5; // [esp+50h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v5, g_Str_File_wolinfoMD_ini); /*0x779ca3*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779caf*/
  {
    FileClass::Close((RawFileClass *)&v5); /*0x779cbc*/
    CCFileClass::Close((BufferIOFileClass *)&v5); /*0x779cc5*/
    CCFileClass::Reopen((CDFileClass *)&v5, g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x779cd5*/
  }
  v4.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x779ce3*/
  v4.sectionCount = (int)&GenericNode::`vftable'; /*0x779ce7*/
  v4.headNode[0] = 0; /*0x779cef*/
  v4.headNode[1] = 0; /*0x779cf4*/
  v4.sectionHead[1] = 0; /*0x779cf8*/
  v4.sectionHead[2] = 0; /*0x779cfc*/
  *(_DWORD *)v4.__pad_20 = 0; /*0x779d00*/
  *(_DWORD *)&v4.__pad_20[4] = 0; /*0x779d04*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x779d10*/
  v4.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x779d19*/
  memset(&v4.__pad_20[8], 0, 13); /*0x779d22*/
  v4.unknown38 = 0; /*0x779d32*/
  v4.INIClass_field_3C = 0; /*0x779d36*/
  *(_DWORD *)v4.__pad_0 = &INIClass::`vftable'; /*0x779d3a*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779d42*/
  {
    FileStraw::Open((FileStraw *)&v4, (int)&v5, 0); /*0x779d55*/
    String::Assign(&v3, g_INI_Key_AutoLogin); /*0x779d63*/
    String::Assign((String *)&v3.m_3[1], g_INI_Key_DefaultPersona); /*0x779d71*/
    INIClass::SetStringOrEmpty(v4.__pad_0, (char **)&v3.m_3[1], (char **)&v3, (char **)this); /*0x779d85*/
    DeleteAndZero((ObjectClass *)&v3.m_3[1]); /*0x779d8e*/
    DeleteAndZero((ObjectClass *)&v3); /*0x779d97*/
    INIClass::SaveToPipe(&v4, (int)&v5); /*0x779da5*/
  }
  HashTable::DestroyHashTableINIClass(&v4); /*0x779dae*/
  *(_DWORD *)v5.__pad_0 = &off_7E1668; /*0x779db7*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x779dc4*/
}



// ==== 0x00779DD0  ObjectClass::LoadConfigWOL  this=ObjectClass  sig=csp ====
char **__thiscall LoadConfigWOL(ObjectClass *this)
{
  char *v3; // [esp+8h] [ebp-A4h] BYREF
  String v4; // [esp+Ch] [ebp-A0h] BYREF
  INIClass v5; // [esp+14h] [ebp-98h] BYREF
  BufferIOFile v6; // [esp+54h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v6, g_Str_File_wolinfoMD_ini); /*0x779de3*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v6, 0) ) /*0x779def*/
  {
    v5.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x779e0e*/
    v5.sectionCount = (int)&GenericNode::`vftable'; /*0x779e12*/
    v5.headNode[0] = 0; /*0x779e1a*/
    v5.headNode[1] = 0; /*0x779e1f*/
    v5.sectionHead[1] = 0; /*0x779e23*/
    v5.sectionHead[2] = 0; /*0x779e27*/
    *(_DWORD *)v5.__pad_20 = 0; /*0x779e2b*/
    *(_DWORD *)&v5.__pad_20[4] = 0; /*0x779e2f*/
    LinkedList::Prepend((LinkedList *)v5.sectionHead, (int)&v5.sectionCount); /*0x779e3b*/
    v5.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x779e44*/
    memset(&v5.__pad_20[8], 0, 13); /*0x779e52*/
    v5.unknown38 = 0; /*0x779e62*/
    v5.INIClass_field_3C = 0; /*0x779e66*/
    *(_DWORD *)v5.__pad_0 = &INIClass::`vftable'; /*0x779e6a*/
    FileStraw::Open((FileStraw *)&v5, (int)&v6, 0); /*0x779e72*/
    CCFileClass::Close((BufferIOFileClass *)&v6); /*0x779e7b*/
    unknown_libname_73(&v3); /*0x779e84*/
    String::Assign(&v4, aLastvalid); /*0x779e92*/
    String::Assign((String *)&v4.m_3[1], g_INI_Key_DefaultPersona); /*0x779ea0*/
    INIClass::ReadString(&v5, (char **)&v4.m_3[1], (char **)&v4, &v3, (int)&v3); /*0x779ebd*/
    DeleteAndZero((ObjectClass *)&v4.m_3[1]); /*0x779ec6*/
    DeleteAndZero((ObjectClass *)&v4); /*0x779ecf*/
    String::AssignFromPtr((String *)this, (const char **)&v3); /*0x779edb*/
    DeleteAndZero((ObjectClass *)&v3); /*0x779ee4*/
    HashTable::DestroyHashTableINIClass(&v5); /*0x779eed*/
  }
  else
  {
    String::Assign((String *)this, 0); /*0x779dfb*/
  }
  *(_DWORD *)v6.__pad_0 = &off_7E1668; /*0x779ef6*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x779efe*/
  return (char **)this; /*0x779f05*/
}



// ==== 0x00779F10  ObjectClass::SavePersonaConfigWOL  this=ObjectClass  sig=csp ====
int __thiscall SavePersonaConfigWOL(ObjectClass *this)
{
  String v3; // [esp+8h] [ebp-A0h] BYREF
  INIClass v4; // [esp+10h] [ebp-98h] BYREF
  BufferIOFile v5; // [esp+50h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v5, g_Str_File_wolinfoMD_ini); /*0x779f23*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779f2f*/
  {
    FileClass::Close((RawFileClass *)&v5); /*0x779f3c*/
    CCFileClass::Close((BufferIOFileClass *)&v5); /*0x779f45*/
    CCFileClass::Reopen((CDFileClass *)&v5, g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x779f55*/
  }
  v4.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x779f63*/
  v4.sectionCount = (int)&GenericNode::`vftable'; /*0x779f67*/
  v4.headNode[0] = 0; /*0x779f6f*/
  v4.headNode[1] = 0; /*0x779f74*/
  v4.sectionHead[1] = 0; /*0x779f78*/
  v4.sectionHead[2] = 0; /*0x779f7c*/
  *(_DWORD *)v4.__pad_20 = 0; /*0x779f80*/
  *(_DWORD *)&v4.__pad_20[4] = 0; /*0x779f84*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x779f90*/
  v4.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x779f99*/
  memset(&v4.__pad_20[8], 0, 13); /*0x779fa2*/
  v4.unknown38 = 0; /*0x779fb2*/
  v4.INIClass_field_3C = 0; /*0x779fb6*/
  *(_DWORD *)v4.__pad_0 = &INIClass::`vftable'; /*0x779fba*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779fc2*/
  {
    FileStraw::Open((FileStraw *)&v4, (int)&v5, 0); /*0x779fd5*/
    String::Assign(&v3, aLastvalid); /*0x779fe3*/
    String::Assign((String *)&v3.m_3[1], g_INI_Key_DefaultPersona); /*0x779ff1*/
    INIClass::SetStringOrEmpty(v4.__pad_0, (char **)&v3.m_3[1], (char **)&v3, (char **)this); /*0x77a005*/
    DeleteAndZero((ObjectClass *)&v3.m_3[1]); /*0x77a00e*/
    DeleteAndZero((ObjectClass *)&v3); /*0x77a017*/
    INIClass::SaveToPipe(&v4, (int)&v5); /*0x77a025*/
  }
  HashTable::DestroyHashTableINIClass(&v4); /*0x77a02e*/
  *(_DWORD *)v5.__pad_0 = &off_7E1668; /*0x77a037*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x77a044*/
}



// ==== 0x0077A080  ObjectClass::SaveProfileWOL  this=ObjectClass  sig=csp ====
void __thiscall WOL_SaveProfile(int this, const char **a2)
{
  char *v3; // eax
  char *v4; // eax
  void *v5; // [esp+8h] [ebp-ACh] BYREF
  void *v6; // [esp+Ch] [ebp-A8h] BYREF
  void *v7; // [esp+10h] [ebp-A4h] BYREF
  void *v8[3]; // [esp+14h] [ebp-A0h] BYREF
  void **v9; // [esp+20h] [ebp-94h]
  _DWORD v10[3]; // [esp+24h] [ebp-90h] BYREF
  _DWORD v11[6]; // [esp+30h] [ebp-84h] BYREF
  char v12; // [esp+48h] [ebp-6Ch]
  int v13; // [esp+4Ch] [ebp-68h]
  int v14; // [esp+50h] [ebp-64h]
  int v15; // [esp+54h] [ebp-60h] BYREF
  char v16; // [esp+58h] [ebp-5Ch]
  _DWORD v17[22]; // [esp+5Ch] [ebp-58h] BYREF

  v15 = 0; /*0x77a090*/
  v16 = 0; /*0x77a094*/
  ReadRegistryOptionsWOL(&v15); /*0x77a098*/
  if ( *(_BYTE *)(this + 8) ) /*0x77a09d*/
  {
    String::AssignFromPtr((char **)&v6, a2); /*0x77a0b3*/
    if ( String::Length(a2) ) /*0x77a0ba*/
    {
      String::ToLower((const char **)&v6); /*0x77a0d8*/
      if ( !Flag::IsNot2(&v15) ) /*0x77a0e8*/
      {
LABEL_10:
        DeleteAndZero(&v6); /*0x77a484*/
        return; /*0x77a488*/
      }
    }
    else
    {
      String::Reassign((char **)&v6, &stru_B73590); /*0x77a0cd*/
    }
    BufferIOFile::Constructor(v17, g_Str_File_wolinfoMD_ini); /*0x77a0f7*/
    if ( !File::IsReady(v17, 0) ) /*0x77a101*/
    {
      FileClass::Close(v17); /*0x77a10e*/
      CCFileClass::Close(v17); /*0x77a117*/
      CCFileClass::Reopen(v17, g_Str_File_wolinfoMD_ini, 1); /*0x77a127*/
    }
    if ( File::IsReady(v17, 0) ) /*0x77a131*/
    {
      v10[0] = &GenericNode::`vftable'; /*0x77a147*/
      v11[0] = &GenericNode::`vftable'; /*0x77a14b*/
      v8[1] = 0; /*0x77a153*/
      v8[2] = 0; /*0x77a158*/
      v10[1] = 0; /*0x77a15c*/
      v10[2] = 0; /*0x77a160*/
      v11[1] = 0; /*0x77a164*/
      v11[2] = 0; /*0x77a168*/
      v9 = &GenericList::`vftable'; /*0x77a16c*/
      LinkedList::Prepend(v10, (int)v11); /*0x77a174*/
      v9 = &List<INIClass::INISection *>::`vftable'; /*0x77a183*/
      memset(&v11[3], 0, 12); /*0x77a18b*/
      v12 = 0; /*0x77a197*/
      v13 = 0; /*0x77a19b*/
      v14 = 0; /*0x77a19f*/
      v8[0] = &INIClass::`vftable'; /*0x77a1a3*/
      FileStraw::Open(v8, (int)v17, 0); /*0x77a1ab*/
      String::Assign((char **)&v5, g_INI_Key_Server); /*0x77a1b9*/
      INIClass::SetStringOrEmpty(&v6, &v5, this + 12); /*0x77a1d0*/
      DeleteAndZero(&v5); /*0x77a1d9*/
      String::Assign((char **)&v5, g_INI_Key_Locale); /*0x77a1e7*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 16), 0); /*0x77a1ff*/
      DeleteAndZero(&v5); /*0x77a208*/
      String::Assign((char **)&v5, aLocaleverified); /*0x77a216*/
      INIClass::ReadBool3(&v6, &v5, *(_BYTE *)(this + 20)); /*0x77a22d*/
      DeleteAndZero(&v5); /*0x77a236*/
      String::Assign((char **)&v5, g_INI_Key_Country); /*0x77a244*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 28), 0); /*0x77a25c*/
      DeleteAndZero(&v5); /*0x77a265*/
      String::Assign((char **)&v5, aColor); /*0x77a273*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 32), 0); /*0x77a28b*/
      DeleteAndZero(&v5); /*0x77a294*/
      String::Assign((char **)&v5, aRank); /*0x77a2a2*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 36), 0); /*0x77a2ba*/
      DeleteAndZero(&v5); /*0x77a2c3*/
      String::Assign((char **)&v5, aPoints); /*0x77a2d1*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 40), 0); /*0x77a2e9*/
      DeleteAndZero(&v5); /*0x77a2f2*/
      String::Assign((char **)&v5, aWins); /*0x77a300*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 44), 0); /*0x77a318*/
      DeleteAndZero(&v5); /*0x77a321*/
      String::Assign((char **)&v5, aLosses); /*0x77a32f*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 48), 0); /*0x77a347*/
      DeleteAndZero(&v5); /*0x77a350*/
      String::Assign((char **)&v5, aDisconnects); /*0x77a35e*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 52), 0); /*0x77a376*/
      DeleteAndZero(&v5); /*0x77a37f*/
      String::Assign((char **)&v5, aMatchbyres); /*0x77a38d*/
      INIClass::ReadBool3(&v6, &v5, *(_BYTE *)(this + 56)); /*0x77a3a4*/
      DeleteAndZero(&v5); /*0x77a3ad*/
      unknown_libname_73(&v7); /*0x77a3b6*/
      ConvertDateMonthNames(this + 60, &v7); /*0x77a3c2*/
      String::Assign((char **)&v5, g_INI_Key_UpdateTime); /*0x77a3d0*/
      INIClass::SetStringOrEmpty(&v6, &v5, &v7); /*0x77a3e8*/
      DeleteAndZero(&v5); /*0x77a3f1*/
      DeleteAndZero::Alt2(&v7); /*0x77a3fa*/
      v3 = (char *)WideString::GetOrEmpty_Alt((wchar_t **)(this + 64)); /*0x77a402*/
      v4 = ToWideStringChar(v3); /*0x77a409*/
      String::Assign_Bool(&v7, v4); /*0x77a413*/
      String::Assign((char **)&v5, g_INI_Key_UpdateDate); /*0x77a421*/
      INIClass::SetStringOrEmpty(&v6, &v5, &v7); /*0x77a439*/
      DeleteAndZero(&v5); /*0x77a442*/
      INIClass::SaveToPipe(v17); /*0x77a450*/
      CCFileClass::Close(v17); /*0x77a459*/
      *(_BYTE *)(this + 8) = 0; /*0x77a462*/
      DeleteAndZero(&v7); /*0x77a465*/
      HashTable::DestroyHashTableINIClass(v8); /*0x77a46e*/
    }
    v17[0] = &off_7E1668; /*0x77a477*/
    BufferIOFileClass::Dtor(v17); /*0x77a47f*/
    goto LABEL_10; /*0x77a47f*/
  }
}



// ==== 0x0077A4A0  WOLOption::SetValue  this=WOLOption  sig=csp ====
unsigned __int8 __thiscall WOLOption::SetValue(int this, const char **a2)
{
  unsigned __int8 result; // al

  result = String::Compare(a2, (const char **)(this + 12)); /*0x77a4af*/
  if ( !result ) /*0x77a4b6*/
  {
    result = (unsigned __int8)String::Reassign((char **)(this + 12), a2); /*0x77a4bb*/
    *(_BYTE *)(this + 8) = 1; /*0x77a4c0*/
  }
  return result; /*0x77a4c4*/
}



// ==== 0x0077A4D0  WOLPersona::FormatDateTime  this=WOLPersona  sig=csp ====
__int16 __thiscall WOLPersona::FormatDateTime(WOLPersona *this)
{
  struct tm *v2; // ebx
  int v3; // edi
  wchar_t *StringCSF; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  __int16 result; // ax
  int v9; // [esp-4h] [ebp-68h]
  __time32_t Time; // [esp+10h] [ebp-54h] BYREF
  char String[16]; // [esp+14h] [ebp-50h] BYREF
  _BYTE v12[64]; // [esp+24h] [ebp-40h] BYREF

  Time = time(0); /*0x77a4e0*/
  v2 = localtime(&Time); /*0x77a4f6*/
  SafeDelete::Ptr((SafeDelete *)this + 8); /*0x77a4f8*/
  String::Wrapper5to4((int)String, 16, (int)aM, (int)v2); /*0x77a50a*/
  v3 = atoi(String); /*0x77a519*/
  String::Wrapper5to4((int)String, 16, (int)g_Str_Trace, (int)v2); /*0x77a528*/
  switch ( v3 ) /*0x77a533*/
  {
    case 1: /*0x77a533*/
      v9 = 609; /*0x77a535*/
LABEL_26:
      StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, v9); /*0x77a65e*/
      break; /*0x77a66a*/
    case 2: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 611); /*0x77a555*/
      break;
    case 3: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 613); /*0x77a570*/
      break;
    case 4: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 615); /*0x77a58b*/
      break;
    case 5: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 617); /*0x77a5a6*/
      break;
    case 6: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 619); /*0x77a5c1*/
      break;
    case 7: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 621); /*0x77a5dc*/
      break;
    case 8: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 623); /*0x77a5f7*/
      break;
    case 9: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 625); /*0x77a60f*/
      break;
    case 10: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 627); /*0x77a627*/
      break;
    case 11: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 629); /*0x77a63f*/
      break;
    case 12: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 631); /*0x77a657*/
      break;
    default:
      v9 = 633; /*0x77a659*/
      goto LABEL_26; /*0x77a659*/
  }
  WideString::Reassign((void **)this + 16, StringCSF); /*0x77a66f*/
  WString::Append((WString *)this + 8, (wchar_t *)asc_82083C); /*0x77a67e*/
  v5 = CharToWideString(String); /*0x77a687*/
  WString::Append((WString *)this + 8, (wchar_t *)v5); /*0x77a68f*/
  WString::Append((WString *)this + 8, (wchar_t *)asc_82083C); /*0x77a69b*/
  String::Wrapper5to4((int)String, 16, (int)aY_0, (int)v2); /*0x77a6ad*/
  v6 = CharToWideString(String); /*0x77a6b9*/
  WString::Append((WString *)this + 8, (wchar_t *)v6); /*0x77a6c1*/
  v12[0] = 0; /*0x77a6d3*/
  String::Wrapper5to4((int)v12, 64, (int)aHMS, (int)v2); /*0x77a6d8*/
  v7 = CharToWideString(v12); /*0x77a6e4*/
  result = WideString::Reassign((void **)this + 15, (wchar_t *)v7); /*0x77a6ed*/
  *((_BYTE *)this + 8) = 1; /*0x77a6f3*/
  return result; /*0x77a6f2*/
}



// ==== 0x0077A700  GadgetClass::TrackState  this=GadgetClass  sig=csp ====
char __thiscall GadgetClass_TrackState(int this, int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(this + 16); /*0x77a700*/
  if ( a2 == v3 ) /*0x77a70b*/
  {
    if ( a3 == 2 ) /*0x77a712*/
    {
      LOBYTE(v3) = *(_BYTE *)(this + 20); /*0x77a714*/
      if ( !(_BYTE)v3 ) /*0x77a719*/
      {
        *(_BYTE *)(this + 20) = 1; /*0x77a71c*/
        *(_BYTE *)(this + 8) = 1; /*0x77a720*/
      }
    }
  }
  else if ( (!v3 || a3 >= *(_DWORD *)(this + 24)) && a2 ) /*0x77a742*/
  {
    if ( a3 == 3 ) /*0x77a74b*/
      *(_BYTE *)(this + 20) = 0; /*0x77a74d*/
    *(_DWORD *)(this + 16) = a2; /*0x77a751*/
    *(_DWORD *)(this + 24) = a3; /*0x77a754*/
    *(_BYTE *)(this + 8) = 1; /*0x77a757*/
  }
  return v3; /*0x77a71b*/
}



// ==== 0x0077A760  ObjectClass::MainLobbyDlgProcWOL_Helper  this=ObjectClass  sig=csp ====
char __thiscall MainLobbyDlgProcWOL_Helper(ObjectClass *this, char a2)
{
  char result; // al

  result = a2; /*0x77a760*/
  if ( a2 != LOBYTE(this->attachedBomb) ) /*0x77a769*/
  {
    LOBYTE(this->attachedBomb) = a2; /*0x77a76b*/
    LOBYTE(this->?) = 1; /*0x77a76e*/
  }
  return result; /*0x77a772*/
}



// ==== 0x0077A780  ObjectClass::MainLobbyDlgProcWOL_Helper_77A780  this=ObjectClass  sig=csp ====
int __thiscall sub_77A780(int this, int a2)
{
  int result; // eax

  result = a2; /*0x77a780*/
  if ( a2 != *(_DWORD *)(this + 28) ) /*0x77a789*/
  {
    *(_DWORD *)(this + 28) = a2; /*0x77a78b*/
    *(_BYTE *)(this + 8) = 1; /*0x77a78e*/
  }
  return result; /*0x77a792*/
}



// ==== 0x0077A7A0  ObjectClass::MainLobbyDlgProcWOL_Helper_77A7A0  this=ObjectClass  sig=csp ====
int __thiscall sub_77A7A0(int this, int a2)
{
  int result; // eax

  result = a2; /*0x77a7a0*/
  if ( a2 != *(_DWORD *)(this + 32) ) /*0x77a7a9*/
  {
    *(_DWORD *)(this + 32) = a2; /*0x77a7ab*/
    *(_BYTE *)(this + 8) = 1; /*0x77a7ae*/
  }
  return result; /*0x77a7b2*/
}



// ==== 0x0077A7C0  WOLGameList::UpdatePlayerStats  this=WOLGameList  sig=csp ====
char __thiscall sub_77A7C0(int this, _DWORD *a2)
{
  char result; // al
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // esi

  result = 0; /*0x77a7ca*/
  v3 = a2[7]; /*0x77a7cc*/
  if ( v3 != *(_DWORD *)(this + 36) ) /*0x77a7d3*/
  {
    *(_DWORD *)(this + 36) = v3; /*0x77a7d5*/
    *(_BYTE *)(this + 8) = 1; /*0x77a7d8*/
    result = 1; /*0x77a7db*/
  }
  v4 = a2[4]; /*0x77a7dd*/
  if ( v4 != *(_DWORD *)(this + 40) ) /*0x77a7e5*/
  {
    *(_DWORD *)(this + 40) = v4; /*0x77a7e7*/
    *(_BYTE *)(this + 8) = 1; /*0x77a7ea*/
    result = 1; /*0x77a7ed*/
  }
  v5 = a2[2]; /*0x77a7ef*/
  if ( v5 != *(_DWORD *)(this + 44) ) /*0x77a7f7*/
  {
    *(_DWORD *)(this + 44) = v5; /*0x77a7f9*/
    *(_BYTE *)(this + 8) = 1; /*0x77a7fc*/
    result = 1; /*0x77a7ff*/
  }
  v6 = a2[3]; /*0x77a801*/
  if ( v6 != *(_DWORD *)(this + 48) ) /*0x77a809*/
  {
    *(_DWORD *)(this + 48) = v6; /*0x77a80b*/
    *(_BYTE *)(this + 8) = 1; /*0x77a80e*/
    result = 1; /*0x77a811*/
  }
  v7 = a2[8]; /*0x77a813*/
  if ( v7 == *(_DWORD *)(this + 52) ) /*0x77a81b*/
  {
    if ( result ) /*0x77a830*/
      return WOLPersona::FormatDateTime(this); /*0x77a832*/
  }
  else
  {
    *(_DWORD *)(this + 52) = v7; /*0x77a81d*/
    *(_BYTE *)(this + 8) = 1; /*0x77a820*/
    return WOLPersona::FormatDateTime(this); /*0x77a823*/
  }
  return result; /*0x77a828*/
}



// ==== 0x0077A840  WOLGameList::Check  this=WOLGameList  sig=csp ====
bool __thiscall WOLGameList::Check(WOLGameList *this, int a2)
{
  return *(_DWORD *)(a2 + 28) != *((_DWORD *)this + 9) || *(_DWORD *)(a2 + 16) != *((_DWORD *)this + 10); /*0x77a84d*/
}



// ==== 0x0077A870  ObjectClass::Event_Process_77A870  this=ObjectClass  sig=csp ====
int __thiscall Event_Process_77A870(ObjectClass *this, int a2)
{
  int result; // eax

  result = this->fallRate; /*0x77a870*/
  if ( result != -1 ) /*0x77a876*/
  {
    LOBYTE(this->?) = 1; /*0x77a87c*/
    result += a2; /*0x77a880*/
    this->fallRate = result; /*0x77a882*/
  }
  return result; /*0x77a885*/
}



// ==== 0x0077A890  ObjectClass::Event_Process_77A890  this=ObjectClass  sig=csp ====
int __thiscall Event_Process_77A890(ObjectClass *this, int a2)
{
  int result; // eax

  result = (int)this->nextObject; /*0x77a890*/
  if ( result != -1 ) /*0x77a896*/
  {
    LOBYTE(this->?) = 1; /*0x77a89c*/
    result += a2; /*0x77a8a0*/
    this->nextObject = (ObjectClass *)result; /*0x77a8a2*/
  }
  return result; /*0x77a8a5*/
}



// ==== 0x0077A8B0  ObjectClass::Event_Process_77A8B0  this=ObjectClass  sig=csp ====
int __thiscall Event_Process_77A8B0(ObjectClass *this, int a2)
{
  int result; // eax

  result = (int)this->attachedTag; /*0x77a8b0*/
  if ( result != -1 ) /*0x77a8b6*/
  {
    LOBYTE(this->?) = 1; /*0x77a8bc*/
    result += a2; /*0x77a8c0*/
    this->attachedTag = (TagClass *)result; /*0x77a8c2*/
  }
  return result; /*0x77a8c5*/
}



// ==== 0x0077A8D0  MainLobbyDlgProcWOL_Get  this=-  sig=csp ====
void __fastcall sub_77A8D0(HWND hDlg, char a2)
{
  HWND DlgItem; // ebp
  HWND v4; // eax
  wchar_t *StringCSF; // eax
  HWND v6; // ebp
  wchar_t *v7; // eax
  HWND v8; // ebp
  wchar_t *v9; // eax
  HWND v10; // ebp
  wchar_t *v11; // eax
  HWND v12; // ebp
  wchar_t *v13; // eax
  HWND v14; // esi
  wchar_t *v15; // eax
  void *v16; // [esp+10h] [ebp-4h] BYREF

  if ( a2 ) /*0x77a8e5*/
  {
    DlgItem = GetDlgItem(hDlg, 1576); /*0x77a8ef*/
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x77a8fe*/
    InvalidateRect(DlgItem, 0, 0); /*0x77a905*/
  }
  v4 = GetDlgItem(hDlg, 1775); /*0x77a911*/
  SendMessageA(v4, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x77a920*/
  StringCSF = GetStringCSF(g_Str_GUI_UnknownStats, 0, g_Str_File_WOLPersonaInformation_cpp, 892); /*0x77a933*/
  WideString::Assign((wchar_t **)&v16, StringCSF); /*0x77a93d*/
  v6 = GetDlgItem(hDlg, 1776); /*0x77a94e*/
  v7 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a950*/
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)v7); /*0x77a95e*/
  v8 = GetDlgItem(hDlg, 1777); /*0x77a96c*/
  v9 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a96e*/
  SendMessageA(v8, 0x4B2u, 0, (LPARAM)v9); /*0x77a97c*/
  v10 = GetDlgItem(hDlg, 1793); /*0x77a98a*/
  v11 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a98c*/
  SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x77a99a*/
  v12 = GetDlgItem(hDlg, 1780); /*0x77a9a8*/
  v13 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a9aa*/
  SendMessageA(v12, 0x4B2u, 0, (LPARAM)v13); /*0x77a9b8*/
  v14 = GetDlgItem(hDlg, 1781); /*0x77a9c6*/
  v15 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a9c8*/
  SendMessageA(v14, 0x4B2u, 0, (LPARAM)v15); /*0x77a9d6*/
  DeleteAndZero::Alt(&v16); /*0x77a9dc*/
}



// ==== 0x0077A9F0  ObjectClass::FillPersonaInfoWOL  this=ObjectClass  sig=csp ====
void __thiscall WOL_FillPersonaInfo(int this, HWND hDlg, char **a3, wchar_t **a4)
{
  HWND v4; // ebx
  HWND DlgItem; // edi
  LRESULT v6; // eax
  const char **v7; // ebp
  char *v8; // eax
  LRESULT v9; // ebp
  char *v10; // eax
  wchar_t *v11; // eax
  LRESULT v12; // ebp
  wchar_t *String; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND v16; // edi
  char *v17; // eax
  LRESULT v18; // eax
  HWND v19; // eax
  HWND v20; // edi
  WPARAM v21; // ebp
  HWND v22; // eax
  HWND v23; // ebp
  WPARAM v24; // edi
  HWND (__stdcall *v25)(HWND, int); // edi
  HWND v26; // eax
  HWND v27; // ebp
  WPARAM v28; // edi
  HWND v29; // eax
  wchar_t *v30; // eax
  const wchar_t *v31; // edx
  wchar_t **p_hDlg; // eax
  HWND v33; // ebp
  wchar_t *v34; // eax
  int v35; // eax
  const wchar_t *v36; // edx
  int v37; // eax
  HWND v38; // ebp
  wchar_t *v39; // eax
  int v40; // eax
  const wchar_t *v41; // edx
  int v42; // eax
  HWND v43; // ebp
  wchar_t *v44; // eax
  int v45; // eax
  const wchar_t *v46; // edx
  wchar_t **v47; // eax
  int v48; // eax
  HWND v49; // ebp
  wchar_t *v50; // eax
  int v51; // eax
  const wchar_t *v52; // edx
  int v53; // eax
  HWND v54; // ebp
  wchar_t *v55; // eax
  const char **v56; // ebp
  wchar_t *v57; // eax
  const wchar_t *v58; // edi
  unsigned int v59; // eax
  wchar_t *v60; // edi
  wchar_t *v61; // eax
  HWND v62; // eax
  HWND v63; // eax
  const wchar_t **v64; // ebp
  wchar_t *v65; // eax
  size_t v66; // eax
  char *v67; // edi
  const wchar_t *v68; // eax
  wchar_t *v69; // edi
  wchar_t *v70; // eax
  HWND v71; // eax
  wchar_t *v72; // ebp
  HWND v73; // eax
  const wchar_t *v74; // [esp-8h] [ebp-24h]
  char *v75; // [esp-4h] [ebp-20h]
  wchar_t *v76; // [esp-4h] [ebp-20h]
  void *v78; // [esp+14h] [ebp-8h] BYREF
  int v79; // [esp+18h] [ebp-4h]

  v4 = hDlg; /*0x77a9f8*/
  v79 = 0; /*0x77aa0b*/
  if ( (_BYTE)a4 ) /*0x77aa13*/
  {
    DlgItem = GetDlgItem(hDlg, 1576); /*0x77aa27*/
    v6 = SendMessageA(DlgItem, 0x4CEu, 0, 0); /*0x77aa31*/
    v7 = (const char **)a3; /*0x77aa33*/
    LOBYTE(a4) = v6 != 0; /*0x77aa3b*/
    if ( !String::Length((const char **)a3) || (_BYTE)a4 ) /*0x77aa4f*/
    {
      CharStringToWide((wchar_t **)&a4, v7); /*0x77aa98*/
      if ( !String::Length(v7) /*0x77aac1*/
        || (v11 = WideString::GetOrEmpty_Alt((wchar_t **)&a4),
            v12 = SendMessageA(DlgItem, 0x4BFu, 0xFFFFFFFF, (LPARAM)v11),
            v12 == -1) )
      {
        String = GetStringCSF(aGuiDefault, 0, g_Str_File_WOLPersonaInformation_cpp, 921); /*0x77aad4*/
        WideString::Assign_Alt((void **)&a4, String); /*0x77aade*/
        v14 = WideString::GetOrEmpty_Alt((wchar_t **)&a4); /*0x77aae7*/
        v12 = SendMessageA(DlgItem, 0x4BFu, 0xFFFFFFFF, (LPARAM)v14); /*0x77aaf7*/
      }
      SendMessageA(DlgItem, 0x14Eu, v12, 0); /*0x77ab02*/
      if ( v12 == -1 ) /*0x77ab07*/
      {
        v15 = WideString::GetOrEmpty_Alt((wchar_t **)&a4); /*0x77ab0d*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v15); /*0x77ab1b*/
      }
      DeleteAndZero::Alt((void **)&a4); /*0x77ab21*/
    }
    else
    {
      v8 = String::GetOrEmpty_Alt((char **)v7); /*0x77aa53*/
      v9 = SendMessageA(DlgItem, 0x4B9u, 0xFFFFFFFF, (LPARAM)v8); /*0x77aa63*/
      SendMessageA(DlgItem, 0x14Eu, v9, 0); /*0x77aa6e*/
      if ( v9 == -1 ) /*0x77aa73*/
      {
        v10 = String::GetOrEmpty_Alt(a3); /*0x77aa7d*/
        SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)v10); /*0x77aa8b*/
      }
    }
  }
  v16 = GetDlgItem(v4, 1577); /*0x77ab34*/
  v17 = String::GetOrEmpty_Alt((char **)(this + 12)); /*0x77ab3d*/
  v18 = SendMessageA(v16, 0x4B9u, 0xFFFFFFFF, (LPARAM)v17); /*0x77ab4b*/
  SendMessageA(v16, 0x14Eu, v18, 0); /*0x77ab56*/
  v19 = GetDlgItem(v4, 1578); /*0x77ab5e*/
  v20 = v19; /*0x77ab60*/
  if ( v19 ) /*0x77ab64*/
  {
    v21 = 0; /*0x77ab72*/
    a4 = (wchar_t **)SendMessageA(v19, 0x146u, 0, 0); /*0x77ab74*/
    if ( (int)a4 > 0 ) /*0x77ab7a*/
    {
      while ( SendMessageA(v20, 0x150u, v21, 0) != *(_DWORD *)(this + 16) ) /*0x77ab8e*/
      {
        if ( (int)++v21 >= (int)a4 ) /*0x77ab97*/
          goto LABEL_18; /*0x77ab97*/
      }
      SendMessageA(v20, 0x14Eu, v21, 0); /*0x77aba4*/
    }
  }
LABEL_18:
  v22 = GetDlgItem(v4, 1697); /*0x77aba6*/
  v23 = v22; /*0x77abb2*/
  if ( v22 ) /*0x77abb6*/
  {
    v24 = 0; /*0x77abc4*/
    a4 = (wchar_t **)SendMessageA(v22, 0x146u, 0, 0); /*0x77abc6*/
    if ( (int)a4 > 0 ) /*0x77abcc*/
    {
      while ( SendMessageA(v23, 0x150u, v24, 0) != *(_DWORD *)(this + 28) ) /*0x77abe0*/
      {
        if ( (int)++v24 >= (int)a4 ) /*0x77abe9*/
          goto LABEL_24; /*0x77abe9*/
      }
      SendMessageA(v23, 0x14Eu, v24, 0); /*0x77abf6*/
    }
  }
LABEL_24:
  v25 = GetDlgItem; /*0x77abf8*/
  v26 = GetDlgItem(v4, 1698); /*0x77ac04*/
  v27 = v26; /*0x77ac06*/
  if ( v26 ) /*0x77ac0a*/
  {
    v28 = 0; /*0x77ac18*/
    a4 = (wchar_t **)SendMessageA(v26, 0x146u, 0, 0); /*0x77ac1a*/
    if ( (int)a4 > 0 ) /*0x77ac20*/
    {
      while ( SendMessageA(v27, 0x150u, v28, 0) != *(_DWORD *)(this + 32) ) /*0x77ac34*/
      {
        if ( (int)++v28 >= (int)a4 ) /*0x77ac3d*/
          goto LABEL_30; /*0x77ac3d*/
      }
      SendMessageA(v27, 0x14Eu, v28, 0); /*0x77ac4a*/
    }
LABEL_30:
    v25 = GetDlgItem; /*0x77ac4c*/
  }
  v29 = v25(v4, 1907); /*0x77ac58*/
  if ( v29 ) /*0x77ac5c*/
    SendMessageA(v29, 0xF1u, *(unsigned __int8 *)(this + 56), 0); /*0x77ac70*/
  v30 = GetStringCSF(g_Str_GUI_UnknownStats, 0, g_Str_File_WOLPersonaInformation_cpp, 987); /*0x77ac83*/
  WideString::Assign((wchar_t **)&hDlg, v30); /*0x77ac8d*/
  v31 = *(const wchar_t **)(this + 36); /*0x77ac96*/
  if ( v31 == (const wchar_t *)-1 ) /*0x77ac9c*/
  {
    p_hDlg = (wchar_t **)&hDlg; /*0x77ac9e*/
  }
  else
  {
    v79 = 1; /*0x77aca8*/
    p_hDlg = FormatWideString((wchar_t **)&v78, v31); /*0x77acb0*/
  }
  a4 = p_hDlg; /*0x77acbb*/
  v33 = v25(v4, 1780); /*0x77acc5*/
  v34 = WideString::GetOrEmpty_Alt(a4); /*0x77acc7*/
  SendMessageA(v33, 0x4B2u, 0, (LPARAM)v34); /*0x77acd5*/
  if ( (v79 & 1) != 0 ) /*0x77acdc*/
  {
    v35 = v79; /*0x77acde*/
    LOBYTE(v35) = v79 & 0xFE; /*0x77ace6*/
    v79 = v35; /*0x77ace8*/
    DeleteAndZero::Alt(&v78); /*0x77acec*/
  }
  v36 = *(const wchar_t **)(this + 40); /*0x77acf5*/
  if ( v36 == (const wchar_t *)-1 ) /*0x77acfb*/
  {
    a4 = (wchar_t **)&hDlg; /*0x77ad01*/
  }
  else
  {
    v37 = v79; /*0x77ad07*/
    LOBYTE(v37) = v79 | 2; /*0x77ad0f*/
    v79 = v37; /*0x77ad11*/
    a4 = FormatWideString((wchar_t **)&v78, v36); /*0x77ad1a*/
  }
  v38 = v25(v4, 1781); /*0x77ad2a*/
  v39 = WideString::GetOrEmpty_Alt(a4); /*0x77ad2c*/
  SendMessageA(v38, 0x4B2u, 0, (LPARAM)v39); /*0x77ad3a*/
  if ( (v79 & 2) != 0 ) /*0x77ad41*/
  {
    v40 = v79; /*0x77ad43*/
    LOBYTE(v40) = v79 & 0xFD; /*0x77ad4b*/
    v79 = v40; /*0x77ad4d*/
    DeleteAndZero::Alt(&v78); /*0x77ad51*/
  }
  v41 = *(const wchar_t **)(this + 44); /*0x77ad5a*/
  if ( v41 == (const wchar_t *)-1 ) /*0x77ad60*/
  {
    a4 = (wchar_t **)&hDlg; /*0x77ad66*/
  }
  else
  {
    v42 = v79; /*0x77ad6c*/
    LOBYTE(v42) = v79 | 4; /*0x77ad74*/
    v79 = v42; /*0x77ad76*/
    a4 = FormatWideString((wchar_t **)&v78, v41); /*0x77ad7f*/
  }
  v43 = v25(v4, 1776); /*0x77ad8f*/
  v44 = WideString::GetOrEmpty_Alt(a4); /*0x77ad91*/
  SendMessageA(v43, 0x4B2u, 0, (LPARAM)v44); /*0x77ad9f*/
  if ( (v79 & 4) != 0 ) /*0x77ada6*/
  {
    v45 = v79; /*0x77ada8*/
    LOBYTE(v45) = v79 & 0xFB; /*0x77adb0*/
    v79 = v45; /*0x77adb2*/
    DeleteAndZero::Alt(&v78); /*0x77adb6*/
  }
  v46 = *(const wchar_t **)(this + 48); /*0x77adbf*/
  if ( v46 == (const wchar_t *)-1 ) /*0x77adc5*/
  {
    v47 = (wchar_t **)&hDlg; /*0x77adc7*/
  }
  else
  {
    v48 = v79; /*0x77adcd*/
    LOBYTE(v48) = v79 | 8; /*0x77add5*/
    v79 = v48; /*0x77add7*/
    v47 = FormatWideString((wchar_t **)&v78, v46); /*0x77addb*/
  }
  a4 = v47; /*0x77ade6*/
  v49 = v25(v4, 1777); /*0x77adf0*/
  v50 = WideString::GetOrEmpty_Alt(a4); /*0x77adf2*/
  SendMessageA(v49, 0x4B2u, 0, (LPARAM)v50); /*0x77ae00*/
  if ( (v79 & 8) != 0 ) /*0x77ae07*/
  {
    v51 = v79; /*0x77ae09*/
    LOBYTE(v51) = v79 & 0xF7; /*0x77ae11*/
    v79 = v51; /*0x77ae13*/
    DeleteAndZero::Alt(&v78); /*0x77ae17*/
  }
  v52 = *(const wchar_t **)(this + 52); /*0x77ae20*/
  if ( v52 == (const wchar_t *)-1 ) /*0x77ae26*/
  {
    a4 = (wchar_t **)&hDlg; /*0x77ae2c*/
  }
  else
  {
    v53 = v79; /*0x77ae32*/
    LOBYTE(v53) = v79 | 0x10; /*0x77ae3a*/
    v79 = v53; /*0x77ae3c*/
    a4 = FormatWideString((wchar_t **)&v78, v52); /*0x77ae45*/
  }
  v54 = v25(v4, 1793); /*0x77ae55*/
  v55 = WideString::GetOrEmpty_Alt(a4); /*0x77ae57*/
  SendMessageA(v54, 0x4B2u, 0, (LPARAM)v55); /*0x77ae65*/
  if ( (v79 & 0x10) != 0 ) /*0x77ae6c*/
    DeleteAndZero::Alt(&v78); /*0x77ae72*/
  v56 = (const char **)a3; /*0x77ae77*/
  if ( String::Length((const char **)a3) ) /*0x77ae7d*/
  {
    v57 = GetStringCSF(aGuiUserprofile, 0, g_Str_File_WOLPersonaInformation_cpp, 995); /*0x77ae9b*/
    WideString::Assign((wchar_t **)&a4, v57); /*0x77aea5*/
    v58 = WideString::Length((const wchar_t **)&a4); /*0x77aeb5*/
    v59 = String::Length(v56); /*0x77aeb7*/
    v60 = (wchar_t *)__2_YAPAXI_Z(2 * ((_DWORD)v58 + v59) + 2); /*0x77aecd*/
    v75 = String::GetOrEmpty_Alt((char **)v56); /*0x77aed4*/
    v61 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x77aed9*/
    swprintf(v60, (const size_t)v61, (const wchar_t *const)v75); /*0x77aee0*/
    v62 = GetDlgItem(v4, 1775); /*0x77aeee*/
    SendMessageA(v62, 0x4B2u, 0, (LPARAM)v60); /*0x77aefd*/
    __3_YAXPAX_Z(v60); /*0x77af00*/
    DeleteAndZero::Alt((void **)&a4); /*0x77af0c*/
  }
  else
  {
    v63 = v25(v4, 1775); /*0x77af19*/
    SendMessageA(v63, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x77af28*/
  }
  v64 = (const wchar_t **)(this + 64); /*0x77af3a*/
  a4 = (wchar_t **)(this + 60); /*0x77af47*/
  v65 = GetStringCSF(aGuiWelcomeupda, 0, g_Str_File_WOLPersonaInformation_cpp, 1005); /*0x77af4b*/
  v66 = wcslen(v65); /*0x77af51*/
  v67 = (char *)WideString::Length((const wchar_t **)(this + 60)) + v66; /*0x77af66*/
  v68 = WideString::Length((const wchar_t **)(this + 64)); /*0x77af68*/
  v69 = (wchar_t *)__2_YAPAXI_Z(2 * (int)&v67[(_DWORD)v68]); /*0x77af77*/
  if ( v69 && WideString::Length(v64) && WideString::Length((const wchar_t **)a4) ) /*0x77af8f*/
  {
    v76 = *a4; /*0x77afa1*/
    v74 = *v64; /*0x77afa2*/
    v70 = GetStringCSF(aGuiWelcomeupda, 0, g_Str_File_WOLPersonaInformation_cpp, 1007); /*0x77afb4*/
    swprintf(v69, (const size_t)v70, v74, v76); /*0x77afbb*/
    v71 = GetDlgItem(v4, 1943); /*0x77afc9*/
    SendMessageA(v71, 0x4B2u, 0, (LPARAM)v69); /*0x77afd0*/
  }
  else
  {
    v72 = GetStringCSF(aGuiBlank, 0, g_Str_File_WOLPersonaInformation_cpp, 1010); /*0x77afee*/
    v73 = GetDlgItem(v4, 1943); /*0x77aff0*/
    SendMessageA(v73, 0x4B2u, 0, (LPARAM)v72); /*0x77afff*/
  }
  if ( v69 ) /*0x77b003*/
    __3_YAXPAX_Z(v69); /*0x77b006*/
  DeleteAndZero::Alt((void **)&hDlg); /*0x77b012*/
}



// ==== 0x0077B030  PlayerProfile::QueryInterface  this=PlayerProfile  sig=csp ====
void **__thiscall PlayerProfile::QueryInterface(PlayerProfile *this, char a2)
{
  *this = (PlayerProfile)&PlayerProfile::`vftable'; /*0x77b036*/
  DeleteAndZero::Alt((DeleteAndZero *)(this + 16)); /*0x77b03c*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 5); /*0x77b044*/
  DeleteAndZero((ObjectClass *)(this + 3)); /*0x77b04c*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x77b053*/
  if ( (a2 & 1) != 0 ) /*0x77b05d*/
    __3_YAXPAX_Z(this); /*0x77b060*/
  return (void **)this; /*0x77b06a*/
}



// ==== 0x0077B070  sub_77B070  this=-  sig=ida-proto ====
int sub_77B070()
{
  dword_B73600 = 0; /*0x77b072*/
  dword_B73604 = 0; /*0x77b077*/
  dword_B73608 = 0; /*0x77b07c*/
  dword_B7360C = 0; /*0x77b081*/
  return 0; /*0x77b086*/
}



// ==== 0x0077B090  sub_77B090  this=-  sig=ida-proto ====
void sub_77B090()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77b09c*/
  dbl_B73618 = Math::Sqrt(v0 + v0); /*0x77b0ae*/
}



// ==== 0x0077B0C0  sub_77B0C0  this=-  sig=ida-proto ====
void sub_77B0C0()
{
  dbl_B73668 = dbl_B73618 / 60.0; /*0x77b0cc*/
}



// ==== 0x0077B0E0  sub_77B0E0  this=-  sig=ida-proto ====
void sub_77B0E0()
{
  dbl_B73650 = 1.0 / dbl_B73668; /*0x77b0ec*/
}



// ==== 0x0077B100  sub_77B100  this=-  sig=ida-proto ====
void sub_77B100()
{
  dbl_B73648 = 0.0174532925199433 * 45.0; /*0x77b10c*/
}



// ==== 0x0077B120  sub_77B120  this=-  sig=ida-proto ====
void sub_77B120()
{
  dbl_B73620 = 0.0174532925199433 * 60.0; /*0x77b12c*/
}



// ==== 0x0077B140  sub_77B140  this=-  sig=ida-proto ====
void sub_77B140()
{
  dbl_B735F8 = 0.0174532925199433 * 90.0; /*0x77b14c*/
}



// ==== 0x0077B160  sub_77B160  this=-  sig=ida-proto ====
__int64 sub_77B160()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B735F8 - dbl_B73620); /*0x77b172*/
  result = Math::RoundToInt(v0 * dbl_B73618 * 0.5); /*0x77b186*/
  dword_B73670 = result; /*0x77b18b*/
  return result; /*0x77b190*/
}



// ==== 0x0077B1A0  sub_77B1A0  this=-  sig=ida-proto ====
void sub_77B1A0()
{
  dbl_B73628 = Math::ArcTan((double)dword_B73670 * 0.00390625); /*0x77b1b7*/
}



// ==== 0x0077B1D0  sub_77B1D0  this=-  sig=ida-proto ====
void sub_77B1D0()
{
  dbl_B73640 = Math::ArcTan((double)(2 * dword_B73670) / dbl_B73618); /*0x77b1f2*/
}



// ==== 0x0077B200  sub_77B200  this=-  sig=ida-proto ====
__int64 sub_77B200()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B73670) + 0.5); /*0x77b21b*/
  dword_B73664 = result; /*0x77b220*/
  return result; /*0x77b226*/
}



// ==== 0x0077B230  sub_77B230  this=-  sig=ida-proto ====
int sub_77B230()
{
  word_B73610 = 0; /*0x77b232*/
  word_B73612 = 0; /*0x77b238*/
  return 0; /*0x77b23e*/
}



// ==== 0x0077B240  sub_77B240  this=-  sig=ida-proto ====
int sub_77B240()
{
  dword_B73630 = 0; /*0x77b242*/
  dword_B73634 = 0; /*0x77b247*/
  dword_B73638 = 0; /*0x77b24c*/
  return 0; /*0x77b251*/
}



// ==== 0x0077B260  sub_77B260  this=-  sig=ida-proto ====
int sub_77B260()
{
  dword_B73660 = 0; /*0x77b265*/
  dword_B73658 = 128; /*0x77b26f*/
  dword_B7365C = 128; /*0x77b274*/
  return 128; /*0x77b279*/
}



// ==== 0x0077B2A0  RunWOLMainLoop  this=-  sig=ida-proto ====
int __fastcall RunWOLMainLoop(char a1)
{
  int v2; // esi
  char v3; // cl
  char **AutoLoginWOL; // eax
  char **ConfigWOL; // eax
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int started; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  ObjectClass *v15; // [esp+0h] [ebp-20h]
  ObjectClass *v16; // [esp+0h] [ebp-20h]
  bool v17; // [esp+12h] [ebp-Eh]
  char v18; // [esp+13h] [ebp-Dh]
  void *v19; // [esp+14h] [ebp-Ch] BYREF
  __int64 v20; // [esp+18h] [ebp-8h] BYREF

  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0 ) /*0x77b2b6*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x77b2c0*/
  RunWOLMainLoop_Helper(); /*0x77b2d2*/
  v2 = dword_A83D14; /*0x77b2d7*/
  if ( dword_A83D14 == -1 ) /*0x77b2e0*/
    v2 = dword_A83D18; /*0x77b2e2*/
  if ( v2 == StringList::Find((StringList *)&unk_A83D10, g_INI_Key_INTRO) ) /*0x77b2f9*/
    Theme::QueueSong((int)&unk_A83D10, -3); /*0x77b302*/
  ReadWOLAccountINI(); /*0x77b307*/
  v3 = byte_A83D22; /*0x77b30c*/
  byte_A83D22 = 1; /*0x77b312*/
  v18 = v3; /*0x77b319*/
  RunWOLMainLoop_Find(v15); /*0x77b31d*/
  if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x77b327*/
  {
    AutoLoginWOL = ReadAutoLoginWOL((ObjectClass *)&v19); /*0x77b334*/
    String::Reassign((String *)&g_WindowManager.__pad_EC[684], (const char **)AutoLoginWOL); /*0x77b33f*/
    DeleteAndZero((ObjectClass *)&v19); /*0x77b348*/
    if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x77b352*/
    {
      LODWORD(v20) = 0; /*0x77b361*/
      BYTE4(v20) = 0; /*0x77b365*/
      ReadRegistryOptionsWOL((ObjectClass *)&v20); /*0x77b36a*/
      if ( (unsigned __int8)Flag::IsNot2((Flag *)&v20) ) /*0x77b373*/
      {
        ConfigWOL = LoadConfigWOL((ObjectClass *)&v19); /*0x77b380*/
        String::Reassign((String *)&g_WindowManager.__pad_EC[684], (const char **)ConfigWOL); /*0x77b38b*/
        DeleteAndZero((ObjectClass *)&v19); /*0x77b394*/
      }
    }
  }
  v6 = dword_B73678; /*0x77b39d*/
  v7 = 0; /*0x77b3a3*/
  v17 = 0; /*0x77b3a5*/
  do /*0x77b527*/
  {
    if ( !dword_A8B244 || dword_A8B244 == 6 ) /*0x77b3b7*/
      v8 = 0; /*0x77b3c6*/
    else
      v8 = (dword_A8B244 == 3) + 1; /*0x77b3c2*/
    if ( !v6 && v8 ) /*0x77b3ce*/
    {
      v9 = LoginFlowWOL(v16); /*0x77b3d0*/
      v7 = v9; /*0x77b3d5*/
      if ( v9 ) /*0x77b3d9*/
      {
        if ( v9 != 1 ) /*0x77b3dc*/
        {
LABEL_54:
          *(_DWORD *)&dword_A8B238 = 0; /*0x77b532*/
          dword_A8B244 = 0; /*0x77b538*/
          dword_A8B248 = 0; /*0x77b53e*/
          HandleLogoutWOL(v16); /*0x77b544*/
          byte_A83D22 = v18; /*0x77b54d*/
          Dialog::CloseAll(); /*0x77b553*/
          return v7; /*0x77b561*/
        }
        dword_B73678 = v8; /*0x77b3e2*/
      }
      else
      {
        if ( !dword_A8B244 ) /*0x77b3f0*/
        {
          *(_DWORD *)&dword_A8B238 = 0; /*0x77b562*/
          HandleLogoutWOL(v16); /*0x77b568*/
          byte_A83D22 = v18; /*0x77b571*/
          Dialog::CloseAll(); /*0x77b576*/
          return 0; /*0x77b584*/
        }
        dword_A8B244 = 0; /*0x77b3f6*/
        dword_A8B248 = 0; /*0x77b3fc*/
      }
    }
    RunWOLMainLoop_Find(v16); /*0x77b402*/
    switch ( dword_A8B244 ) /*0x77b415*/
    {
      case 0: /*0x77b415*/
        a1 = 0; /*0x77b41c*/
        v7 = RunWOLMainLoop_Read(v16, 0); /*0x77b423*/
        v17 = v7 != 1; /*0x77b428*/
        break; /*0x77b42d*/
      case 1: /*0x77b415*/
      case 2: /*0x77b415*/
        if ( !a1 ) /*0x77b43b*/
        {
          started = JoinLobbyWOL(v16); /*0x77b432*/
          goto LABEL_34; /*0x77b437*/
        }
        RunWOLMainLoop_Read_7A2970(); /*0x77b43d*/
        goto LABEL_42; /*0x77b442*/
      case 3: /*0x77b415*/
        if ( a1 ) /*0x77b465*/
          RunWOLMainLoop_Read_7A2970(); /*0x77b467*/
        started = StartWDTCampaign(a1); /*0x77b46e*/
LABEL_34:
        v7 = started; /*0x77b473*/
        a1 = 0; /*0x77b475*/
        if ( started ) /*0x77b479*/
          goto LABEL_35; /*0x77b479*/
        goto LABEL_42; /*0x77b479*/
      case 4: /*0x77b415*/
        v7 = NetworkLobbyWOL(0, a1); /*0x77b450*/
        a1 = 0; /*0x77b452*/
        if ( v7 ) /*0x77b456*/
          goto LABEL_35; /*0x77b456*/
        if ( dword_A8B244 == 4 ) /*0x77b45f*/
          goto LABEL_42; /*0x77b45f*/
        break; /*0x77b45f*/
      case 5: /*0x77b415*/
        v7 = GameOptionsScreenWOL(v16); /*0x77b489*/
        a1 = 0; /*0x77b48b*/
        if ( v7 ) /*0x77b48f*/
        {
LABEL_35:
          v17 = 1; /*0x77b47b*/
        }
        else if ( dword_A8B244 == 5 ) /*0x77b498*/
        {
          v11 = dword_A8B248; /*0x77b49a*/
          dword_A8B248 = 0; /*0x77b4a0*/
          dword_A8B244 = v11; /*0x77b4a6*/
        }
        break; /*0x77b4ac*/
      case 6: /*0x77b415*/
        v12 = RunWOLMainLoop_Init(v16); /*0x77b4ae*/
        v7 = v12; /*0x77b4b3*/
        a1 = 0; /*0x77b4b5*/
        if ( v12 == -2 || v12 == -1 ) /*0x77b4c3*/
          goto LABEL_54; /*0x77b4c3*/
        if ( !v12 ) /*0x77b4cb*/
LABEL_42:
          dword_A8B244 = 0; /*0x77b4cd*/
        break; /*0x77b4cd*/
      default:
        break;
    }
    v6 = dword_B73678; /*0x77b4d3*/
    if ( v7 != 1 && dword_B73678 ) /*0x77b4e0*/
    {
      if ( !dword_A8B244 || dword_A8B244 == 6 ) /*0x77b4fb*/
        v13 = 0; /*0x77b508*/
      else
        v13 = (dword_A8B244 == 3) + 1; /*0x77b505*/
      if ( dword_B73678 != v13 || v17 ) /*0x77b510*/
      {
        RunWOLMainLoop_Delete(v16); /*0x77b512*/
        v6 = 0; /*0x77b517*/
        dword_B73678 = 0; /*0x77b519*/
      }
    }
  }
  while ( !v17 ); /*0x77b527*/
  if ( v7 == 1 ) /*0x77b5b8*/
  {
    Dialog::CloseAll(); /*0x77b5ba*/
    return 1; /*0x77b5bf*/
  }
  else
  {
    HandleLogoutWOL(v16); /*0x77b5c9*/
    *(_DWORD *)&dword_A8B238 = 0; /*0x77b5d2*/
    byte_A83D22 = v18; /*0x77b5d8*/
    dword_A8B244 = 0; /*0x77b5de*/
    dword_A8B248 = 0; /*0x77b5e4*/
    Dialog::CloseAll(); /*0x77b5ea*/
    return 0; /*0x77b5ef*/
  }
}



// ==== 0x0077B690  sub_77B690  this=-  sig=ida-proto ====
void sub_77B690()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77b69c*/
  dbl_B75F60 = Math::Sqrt(v0 + v0); /*0x77b6ae*/
}



// ==== 0x0077B6C0  sub_77B6C0  this=-  sig=ida-proto ====
void sub_77B6C0()
{
  dbl_B77CD8 = dbl_B75F60 / 60.0; /*0x77b6cc*/
}



// ==== 0x0077B6E0  sub_77B6E0  this=-  sig=ida-proto ====
void sub_77B6E0()
{
  dbl_B778E8 = 1.0 / dbl_B77CD8; /*0x77b6ec*/
}



// ==== 0x0077B700  sub_77B700  this=-  sig=ida-proto ====
void sub_77B700()
{
  dbl_B778C0 = 0.0174532925199433 * 45.0; /*0x77b70c*/
}



// ==== 0x0077B720  sub_77B720  this=-  sig=ida-proto ====
void sub_77B720()
{
  dbl_B761A0 = 0.0174532925199433 * 60.0; /*0x77b72c*/
}



// ==== 0x0077B740  sub_77B740  this=-  sig=ida-proto ====
void sub_77B740()
{
  dbl_B73AC0 = 0.0174532925199433 * 90.0; /*0x77b74c*/
}



// ==== 0x0077B760  sub_77B760  this=-  sig=ida-proto ====
__int64 sub_77B760()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B73AC0 - dbl_B761A0); /*0x77b772*/
  result = Math::RoundToInt(v0 * dbl_B75F60 * 0.5); /*0x77b786*/
  dword_B77D74 = result; /*0x77b78b*/
  return result; /*0x77b790*/
}



// ==== 0x0077B7A0  sub_77B7A0  this=-  sig=ida-proto ====
void sub_77B7A0()
{
  dbl_B76460 = Math::ArcTan((double)dword_B77D74 * 0.00390625); /*0x77b7b7*/
}



// ==== 0x0077B7D0  sub_77B7D0  this=-  sig=ida-proto ====
void sub_77B7D0()
{
  dbl_B76AF8 = Math::ArcTan((double)(2 * dword_B77D74) / dbl_B75F60); /*0x77b7f2*/
}



// ==== 0x0077B800  sub_77B800  this=-  sig=ida-proto ====
__int64 sub_77B800()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B77D74) + 0.5); /*0x77b81b*/
  dword_B77CD0 = result; /*0x77b820*/
  return result; /*0x77b826*/
}



// ==== 0x0077B830  sub_77B830  this=-  sig=ida-proto ====
int sub_77B830()
{
  word_B75F50 = 0; /*0x77b832*/
  word_B75F52 = 0; /*0x77b838*/
  return 0; /*0x77b83e*/
}



// ==== 0x0077B840  sub_77B840  this=-  sig=ida-proto ====
int sub_77B840()
{
  dword_B76960 = 0; /*0x77b842*/
  dword_B76964 = 0; /*0x77b847*/
  dword_B76968 = 0; /*0x77b84c*/
  return 0; /*0x77b851*/
}



// ==== 0x0077B860  sub_77B860  this=-  sig=ida-proto ====
int sub_77B860()
{
  dword_B77A00 = 0; /*0x77b865*/
  dword_B779F8 = 128; /*0x77b86f*/
  dword_B779FC = 128; /*0x77b874*/
  return 128; /*0x77b879*/
}



// ==== 0x0077B880  sub_77B880  this=-  sig=ida-proto ====
int sub_77B880()
{
  dword_B73DF8 = 0; /*0x77b882*/
  dword_B73DFC = 0; /*0x77b887*/
  dword_B73E00 = 0; /*0x77b88c*/
  dword_B73E04 = 0; /*0x77b891*/
  return 0; /*0x77b896*/
}



// ==== 0x0077B8A0  sub_77B8A0  this=-  sig=ida-proto ====
int sub_77B8A0()
{
  OleInitialize(0); /*0x77b8a2*/
  return atexit(OleUninitialize); /*0x77b8b3*/
}



// ==== 0x0077B8C0  OleUninitialize  this=-  sig=ida-proto ====
// attributes: thunk
void __stdcall OleUninitialize()
{
  __imp_OleUninitialize(); /*0x77b8c0*/
}



// ==== 0x0077B8D0  sub_77B8D0  this=-  sig=ida-proto ====
int sub_77B8D0()
{
  unknown_libname_73(&unk_B73AE0); /*0x77b8d5*/
  return atexit(unknown_libname_39); /*0x77b8e5*/
}



// ==== 0x0077B8F0  unknown_libname_39  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_39()
{
  DeleteAndZero((void **)&unk_B73AE0); /*0x77b8f5*/
}



// ==== 0x0077B900  sub_77B900  this=-  sig=ida-proto ====
int sub_77B900()
{
  g_WOL_UserList = 0; /*0x77b907*/
  dword_B778DC = 0; /*0x77b90c*/
  dword_B778E0 = 0; /*0x77b911*/
  return atexit(sub_77B920); /*0x77b91c*/
}



// ==== 0x0077B920  sub_77B920  this=-  sig=ida-proto ====
void __cdecl sub_77B920()
{
  g_WOL_UserList = 0; /*0x77b925*/
  __3_YAXPAX_Z(dword_B778E0); /*0x77b930*/
}



// ==== 0x0077B940  sub_77B940  this=-  sig=ida-proto ====
int sub_77B940()
{
  dword_B73E10 = 0; /*0x77b947*/
  dword_B73E14 = 0; /*0x77b94c*/
  dword_B73E18 = 0; /*0x77b951*/
  return atexit(sub_77B960); /*0x77b95c*/
}



// ==== 0x0077B960  sub_77B960  this=-  sig=ida-proto ====
void __cdecl sub_77B960()
{
  dword_B73E10 = 0; /*0x77b965*/
  __3_YAXPAX_Z(dword_B73E18); /*0x77b970*/
}



// ==== 0x0077B980  sub_77B980  this=-  sig=ida-proto ====
int sub_77B980()
{
  dword_B76AE0 = 0; /*0x77b987*/
  dword_B76AE4 = 0; /*0x77b98c*/
  dword_B76AE8 = 0; /*0x77b991*/
  return atexit(sub_77B9A0); /*0x77b99c*/
}



// ==== 0x0077B9A0  sub_77B9A0  this=-  sig=ida-proto ====
void __cdecl sub_77B9A0()
{
  dword_B76AE0 = 0; /*0x77b9a5*/
  __3_YAXPAX_Z(dword_B76AE8); /*0x77b9b0*/
}



// ==== 0x0077B9C0  sub_77B9C0  this=-  sig=ida-proto ====
int sub_77B9C0()
{
  dword_B77900 = 0; /*0x77b9c7*/
  dword_B77904 = 0; /*0x77b9cc*/
  dword_B77908 = 0; /*0x77b9d1*/
  return atexit(sub_77B9E0); /*0x77b9dc*/
}



// ==== 0x0077B9E0  sub_77B9E0  this=-  sig=ida-proto ====
void __cdecl sub_77B9E0()
{
  dword_B77900 = 0; /*0x77b9e5*/
  __3_YAXPAX_Z(dword_B77908); /*0x77b9f0*/
}



// ==== 0x0077BA00  sub_77BA00  this=-  sig=ida-proto ====
int sub_77BA00()
{
  dword_B76520 = 0; /*0x77ba07*/
  dword_B76524 = 0; /*0x77ba0c*/
  dword_B76528 = 0; /*0x77ba11*/
  return atexit(sub_77BA20); /*0x77ba1c*/
}



// ==== 0x0077BA20  sub_77BA20  this=-  sig=ida-proto ====
void __cdecl sub_77BA20()
{
  dword_B76520 = 0; /*0x77ba25*/
  __3_YAXPAX_Z(dword_B76528); /*0x77ba30*/
}



// ==== 0x0077BA40  sub_77BA40  this=-  sig=ida-proto ====
int sub_77BA40()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77ba40*/
  dword_B768E0 = -1717986918; /*0x77ba47*/
  dword_B768E4 = 1070176665; /*0x77ba51*/
  dbl_B768E8 = 0.8; /*0x77ba5b*/
  dword_B768F0 = 128; /*0x77ba6f*/
  v1 = 0; /*0x77ba74*/
  do /*0x77ba79*/
  {
    ++v1; /*0x77ba76*/
    v0 >>= 1; /*0x77ba77*/
  }
  while ( v0 ); /*0x77ba79*/
  dword_B768D0 = 0; /*0x77ba7b*/
  dword_B768CC = v1 - 1; /*0x77ba89*/
  dword_B768C4 = 0; /*0x77ba8f*/
  byte_B768D4 = 0; /*0x77ba95*/
  dword_B768C8 = 1 << (v1 - 1); /*0x77ba9b*/
  g_WOL_ListParser = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77bab3*/
  memset(g_WOL_ListParser, 0, 4 * dword_B768C8); /*0x77bab9*/
  dword_B768D8 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77bac0*/
  return atexit(sub_77BAE0); /*0x77bad2*/
}



// ==== 0x0077BAE0  sub_77BAE0  this=-  sig=ida-proto ====
void __cdecl sub_77BAE0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B768C8; /*0x77bae0*/
  for ( i = 0; i < dword_B768C8; v0 = dword_B768C8 ) /*0x77baed*/
  {
    v2 = *((_DWORD *)g_WOL_ListParser + i); /*0x77baf4*/
    while ( v2 ) /*0x77baf9*/
    {
      v3 = (void **)v2; /*0x77bafb*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77bafd*/
      DeleteAndZero(v3); /*0x77bb06*/
      __3_YAXPAX_Z(v3); /*0x77bb0c*/
    }
    *((_DWORD *)g_WOL_ListParser + i++) = 0; /*0x77bb1f*/
  }
  v4 = dword_B768F0; /*0x77bb30*/
  dword_B768C4 = 0; /*0x77bb36*/
  if ( v0 > dword_B768F0 ) /*0x77bb42*/
  {
    do /*0x77bbf5*/
    {
      if ( byte_B768D4 || v0 <= v4 ) /*0x77bb58*/
        break; /*0x77bb58*/
      v5 = (int *)g_WOL_ListParser; /*0x77bb64*/
      v6 = v0; /*0x77bb6a*/
      dword_B768C8 = v0 >> 1; /*0x77bb6f*/
      --dword_B768CC; /*0x77bb7b*/
      g_WOL_ListParser = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bb94*/
      memset(g_WOL_ListParser, 0, 4 * dword_B768C8); /*0x77bb9c*/
      if ( v6 > 0 ) /*0x77bb9e*/
      {
        v7 = v5; /*0x77bba0*/
        v8 = v6; /*0x77bba2*/
        do /*0x77bbdd*/
        {
          v9 = *v7; /*0x77bba4*/
          if ( *v7 ) /*0x77bba4*/
          {
            do /*0x77bbd7*/
            {
              v10 = dword_B768D8(v9) & ((1 << dword_B768CC) - 1); /*0x77bbc0*/
              v11 = *((_DWORD *)g_WOL_ListParser + v10); /*0x77bbc7*/
              *((_DWORD *)g_WOL_ListParser + v10) = v9; /*0x77bbca*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bbcd*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bbd0*/
              v9 = v12; /*0x77bbd5*/
            }
            while ( v12 ); /*0x77bbd7*/
          }
          ++v7; /*0x77bbd9*/
          --v8; /*0x77bbdc*/
        }
        while ( v8 ); /*0x77bbdd*/
      }
      __3_YAXPAX_Z(v5); /*0x77bbe0*/
      v4 = dword_B768F0; /*0x77bbe5*/
      v0 = dword_B768C8; /*0x77bbeb*/
    }
    while ( dword_B768C8 > (unsigned int)dword_B768F0 ); /*0x77bbf5*/
  }
  __3_YAXPAX_Z(g_WOL_ListParser); /*0x77bc01*/
}



// ==== 0x0077BC10  sub_77BC10  this=-  sig=ida-proto ====
int sub_77BC10()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bc10*/
  dword_B73B18 = -1717986918; /*0x77bc17*/
  dword_B73B1C = 1070176665; /*0x77bc21*/
  dbl_B73B20 = 0.8; /*0x77bc2b*/
  dword_B73B28 = 128; /*0x77bc3f*/
  v1 = 0; /*0x77bc44*/
  do /*0x77bc49*/
  {
    ++v1; /*0x77bc46*/
    v0 >>= 1; /*0x77bc47*/
  }
  while ( v0 ); /*0x77bc49*/
  dword_B73B08 = 0; /*0x77bc4b*/
  dword_B73B04 = v1 - 1; /*0x77bc59*/
  dword_B73AFC = 0; /*0x77bc5f*/
  byte_B73B0C = 0; /*0x77bc65*/
  dword_B73B00 = 1 << (v1 - 1); /*0x77bc6b*/
  dword_B73AF8 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77bc83*/
  memset(dword_B73AF8, 0, 4 * dword_B73B00); /*0x77bc89*/
  dword_B73B10 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77bc90*/
  return atexit(sub_77BCB0); /*0x77bca2*/
}



// ==== 0x0077BCB0  sub_77BCB0  this=-  sig=ida-proto ====
void __cdecl sub_77BCB0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B73B00; /*0x77bcb0*/
  for ( i = 0; i < dword_B73B00; v0 = dword_B73B00 ) /*0x77bcbd*/
  {
    v2 = *((_DWORD *)dword_B73AF8 + i); /*0x77bcc4*/
    while ( v2 ) /*0x77bcc9*/
    {
      v3 = (void **)v2; /*0x77bccb*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77bccd*/
      DeleteAndZero(v3); /*0x77bcd6*/
      __3_YAXPAX_Z(v3); /*0x77bcdc*/
    }
    *((_DWORD *)dword_B73AF8 + i++) = 0; /*0x77bcef*/
  }
  v4 = dword_B73B28; /*0x77bd00*/
  dword_B73AFC = 0; /*0x77bd06*/
  if ( v0 > dword_B73B28 ) /*0x77bd12*/
  {
    do /*0x77bdc5*/
    {
      if ( byte_B73B0C || v0 <= v4 ) /*0x77bd28*/
        break; /*0x77bd28*/
      v5 = (int *)dword_B73AF8; /*0x77bd34*/
      v6 = v0; /*0x77bd3a*/
      dword_B73B00 = v0 >> 1; /*0x77bd3f*/
      --dword_B73B04; /*0x77bd4b*/
      dword_B73AF8 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bd64*/
      memset(dword_B73AF8, 0, 4 * dword_B73B00); /*0x77bd6c*/
      if ( v6 > 0 ) /*0x77bd6e*/
      {
        v7 = v5; /*0x77bd70*/
        v8 = v6; /*0x77bd72*/
        do /*0x77bdad*/
        {
          v9 = *v7; /*0x77bd74*/
          if ( *v7 ) /*0x77bd74*/
          {
            do /*0x77bda7*/
            {
              v10 = dword_B73B10(v9) & ((1 << dword_B73B04) - 1); /*0x77bd90*/
              v11 = *((_DWORD *)dword_B73AF8 + v10); /*0x77bd97*/
              *((_DWORD *)dword_B73AF8 + v10) = v9; /*0x77bd9a*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bd9d*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bda0*/
              v9 = v12; /*0x77bda5*/
            }
            while ( v12 ); /*0x77bda7*/
          }
          ++v7; /*0x77bda9*/
          --v8; /*0x77bdac*/
        }
        while ( v8 ); /*0x77bdad*/
      }
      __3_YAXPAX_Z(v5); /*0x77bdb0*/
      v4 = dword_B73B28; /*0x77bdb5*/
      v0 = dword_B73B00; /*0x77bdbb*/
    }
    while ( dword_B73B00 > (unsigned int)dword_B73B28 ); /*0x77bdc5*/
  }
  __3_YAXPAX_Z(dword_B73AF8); /*0x77bdd1*/
}



// ==== 0x0077BDE0  sub_77BDE0  this=-  sig=ida-proto ====
int sub_77BDE0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bde0*/
  dword_B77DA0 = -1717986918; /*0x77bde7*/
  dword_B77DA4 = 1070176665; /*0x77bdf1*/
  dbl_B77DA8 = 0.8; /*0x77bdfb*/
  dword_B77DB0 = 128; /*0x77be0f*/
  v1 = 0; /*0x77be14*/
  do /*0x77be19*/
  {
    ++v1; /*0x77be16*/
    v0 >>= 1; /*0x77be17*/
  }
  while ( v0 ); /*0x77be19*/
  dword_B77D90 = 0; /*0x77be1b*/
  dword_B77D8C = v1 - 1; /*0x77be29*/
  dword_B77D84 = 0; /*0x77be2f*/
  byte_B77D94 = 0; /*0x77be35*/
  dword_B77D88 = 1 << (v1 - 1); /*0x77be3b*/
  stru_B77D80 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77be53*/
  memset(stru_B77D80, 0, 4 * dword_B77D88); /*0x77be59*/
  dword_B77D98 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77be60*/
  return atexit(sub_77BE80); /*0x77be72*/
}



// ==== 0x0077BE80  sub_77BE80  this=-  sig=ida-proto ====
void __cdecl sub_77BE80()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B77D88; /*0x77be80*/
  for ( i = 0; i < dword_B77D88; v0 = dword_B77D88 ) /*0x77be8d*/
  {
    v2 = *((_DWORD *)stru_B77D80 + i); /*0x77be94*/
    while ( v2 ) /*0x77be99*/
    {
      v3 = (void **)v2; /*0x77be9b*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77be9d*/
      DeleteAndZero(v3); /*0x77bea6*/
      __3_YAXPAX_Z(v3); /*0x77beac*/
    }
    *((_DWORD *)stru_B77D80 + i++) = 0; /*0x77bebf*/
  }
  v4 = dword_B77DB0; /*0x77bed0*/
  dword_B77D84 = 0; /*0x77bed6*/
  if ( v0 > dword_B77DB0 ) /*0x77bee2*/
  {
    do /*0x77bf95*/
    {
      if ( byte_B77D94 || v0 <= v4 ) /*0x77bef8*/
        break; /*0x77bef8*/
      v5 = (int *)stru_B77D80; /*0x77bf04*/
      v6 = v0; /*0x77bf0a*/
      dword_B77D88 = v0 >> 1; /*0x77bf0f*/
      --dword_B77D8C; /*0x77bf1b*/
      stru_B77D80 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bf34*/
      memset(stru_B77D80, 0, 4 * dword_B77D88); /*0x77bf3c*/
      if ( v6 > 0 ) /*0x77bf3e*/
      {
        v7 = v5; /*0x77bf40*/
        v8 = v6; /*0x77bf42*/
        do /*0x77bf7d*/
        {
          v9 = *v7; /*0x77bf44*/
          if ( *v7 ) /*0x77bf44*/
          {
            do /*0x77bf77*/
            {
              v10 = dword_B77D98(v9) & ((1 << dword_B77D8C) - 1); /*0x77bf60*/
              v11 = *((_DWORD *)stru_B77D80 + v10); /*0x77bf67*/
              *((_DWORD *)stru_B77D80 + v10) = v9; /*0x77bf6a*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bf6d*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bf70*/
              v9 = v12; /*0x77bf75*/
            }
            while ( v12 ); /*0x77bf77*/
          }
          ++v7; /*0x77bf79*/
          --v8; /*0x77bf7c*/
        }
        while ( v8 ); /*0x77bf7d*/
      }
      __3_YAXPAX_Z(v5); /*0x77bf80*/
      v4 = dword_B77DB0; /*0x77bf85*/
      v0 = dword_B77D88; /*0x77bf8b*/
    }
    while ( dword_B77D88 > (unsigned int)dword_B77DB0 ); /*0x77bf95*/
  }
  __3_YAXPAX_Z(stru_B77D80); /*0x77bfa1*/
}



// ==== 0x0077BFB0  sub_77BFB0  this=-  sig=ida-proto ====
int sub_77BFB0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bfb0*/
  dbl_B76660 = 0.2; /*0x77bfb7*/
  dbl_B76668 = 0.8; /*0x77bfcb*/
  dword_B76670 = 128; /*0x77bfdf*/
  v1 = 0; /*0x77bfe4*/
  do /*0x77bfe9*/
  {
    ++v1; /*0x77bfe6*/
    v0 >>= 1; /*0x77bfe7*/
  }
  while ( v0 ); /*0x77bfe9*/
  dword_B76650 = 0; /*0x77bfeb*/
  dword_B7664C = v1 - 1; /*0x77bff9*/
  dword_B76644 = 0; /*0x77bfff*/
  byte_B76654 = 0; /*0x77c005*/
  dword_B76648 = 1 << (v1 - 1); /*0x77c00b*/
  dword_B76640 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77c023*/
  memset(dword_B76640, 0, 4 * dword_B76648); /*0x77c029*/
  dword_B76658 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77c030*/
  return atexit(sub_77C050); /*0x77c042*/
}



// ==== 0x0077C050  sub_77C050  this=-  sig=ida-proto ====
void __cdecl sub_77C050()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76648; /*0x77c050*/
  for ( i = 0; i < dword_B76648; v0 = dword_B76648 ) /*0x77c05d*/
  {
    v2 = *((_DWORD *)dword_B76640 + i); /*0x77c064*/
    while ( v2 ) /*0x77c069*/
    {
      v3 = (void **)v2; /*0x77c06b*/
      v2 = *(_DWORD *)(v2 + 72); /*0x77c06d*/
      DeleteAndZero(v3); /*0x77c076*/
      __3_YAXPAX_Z(v3); /*0x77c07c*/
    }
    *((_DWORD *)dword_B76640 + i++) = 0; /*0x77c08f*/
  }
  v4 = dword_B76670; /*0x77c0a0*/
  dword_B76644 = 0; /*0x77c0a6*/
  if ( v0 > dword_B76670 ) /*0x77c0b2*/
  {
    do /*0x77c165*/
    {
      if ( byte_B76654 || v0 <= v4 ) /*0x77c0c8*/
        break; /*0x77c0c8*/
      v5 = (int *)dword_B76640; /*0x77c0d4*/
      v6 = v0; /*0x77c0da*/
      dword_B76648 = v0 >> 1; /*0x77c0df*/
      --dword_B7664C; /*0x77c0eb*/
      dword_B76640 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c104*/
      memset(dword_B76640, 0, 4 * dword_B76648); /*0x77c10c*/
      if ( v6 > 0 ) /*0x77c10e*/
      {
        v7 = v5; /*0x77c110*/
        v8 = v6; /*0x77c112*/
        do /*0x77c14d*/
        {
          v9 = *v7; /*0x77c114*/
          if ( *v7 ) /*0x77c114*/
          {
            do /*0x77c147*/
            {
              v10 = dword_B76658(v9) & ((1 << dword_B7664C) - 1); /*0x77c130*/
              v11 = *((_DWORD *)dword_B76640 + v10); /*0x77c137*/
              *((_DWORD *)dword_B76640 + v10) = v9; /*0x77c13a*/
              v12 = *(_DWORD *)(v9 + 72); /*0x77c13d*/
              *(_DWORD *)(v9 + 72) = v11; /*0x77c140*/
              v9 = v12; /*0x77c145*/
            }
            while ( v12 ); /*0x77c147*/
          }
          ++v7; /*0x77c149*/
          --v8; /*0x77c14c*/
        }
        while ( v8 ); /*0x77c14d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c150*/
      v4 = dword_B76670; /*0x77c155*/
      v0 = dword_B76648; /*0x77c15b*/
    }
    while ( dword_B76648 > (unsigned int)dword_B76670 ); /*0x77c165*/
  }
  __3_YAXPAX_Z(dword_B76640); /*0x77c171*/
}



// ==== 0x0077C180  sub_77C180  this=-  sig=ida-proto ====
int sub_77C180()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77c180*/
  dbl_B766A0 = 0.2; /*0x77c187*/
  dbl_B766A8 = 0.8; /*0x77c19b*/
  dword_B766B0 = 128; /*0x77c1af*/
  v1 = 0; /*0x77c1b4*/
  do /*0x77c1b9*/
  {
    ++v1; /*0x77c1b6*/
    v0 >>= 1; /*0x77c1b7*/
  }
  while ( v0 ); /*0x77c1b9*/
  dword_B76690 = 0; /*0x77c1bb*/
  dword_B7668C = v1 - 1; /*0x77c1c9*/
  dword_B76684 = 0; /*0x77c1cf*/
  byte_B76694 = 0; /*0x77c1d5*/
  dword_B76688 = 1 << (v1 - 1); /*0x77c1db*/
  dword_B76680 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77c1f3*/
  memset(dword_B76680, 0, 4 * dword_B76688); /*0x77c1f9*/
  dword_B76698 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77c200*/
  return atexit(sub_77C220); /*0x77c212*/
}



// ==== 0x0077C220  sub_77C220  this=-  sig=ida-proto ====
void __cdecl sub_77C220()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76688; /*0x77c220*/
  for ( i = 0; i < dword_B76688; v0 = dword_B76688 ) /*0x77c22d*/
  {
    v2 = *((_DWORD *)dword_B76680 + i); /*0x77c234*/
    while ( v2 ) /*0x77c239*/
    {
      v3 = (void **)v2; /*0x77c23b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77c23d*/
      DeleteAndZero(v3); /*0x77c246*/
      __3_YAXPAX_Z(v3); /*0x77c24c*/
    }
    *((_DWORD *)dword_B76680 + i++) = 0; /*0x77c25f*/
  }
  v4 = dword_B766B0; /*0x77c270*/
  dword_B76684 = 0; /*0x77c276*/
  if ( v0 > dword_B766B0 ) /*0x77c282*/
  {
    do /*0x77c335*/
    {
      if ( byte_B76694 || v0 <= v4 ) /*0x77c298*/
        break; /*0x77c298*/
      v5 = (int *)dword_B76680; /*0x77c2a4*/
      v6 = v0; /*0x77c2aa*/
      dword_B76688 = v0 >> 1; /*0x77c2af*/
      --dword_B7668C; /*0x77c2bb*/
      dword_B76680 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c2d4*/
      memset(dword_B76680, 0, 4 * dword_B76688); /*0x77c2dc*/
      if ( v6 > 0 ) /*0x77c2de*/
      {
        v7 = v5; /*0x77c2e0*/
        v8 = v6; /*0x77c2e2*/
        do /*0x77c31d*/
        {
          v9 = *v7; /*0x77c2e4*/
          if ( *v7 ) /*0x77c2e4*/
          {
            do /*0x77c317*/
            {
              v10 = dword_B76698(v9) & ((1 << dword_B7668C) - 1); /*0x77c300*/
              v11 = *((_DWORD *)dword_B76680 + v10); /*0x77c307*/
              *((_DWORD *)dword_B76680 + v10) = v9; /*0x77c30a*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77c30d*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77c310*/
              v9 = v12; /*0x77c315*/
            }
            while ( v12 ); /*0x77c317*/
          }
          ++v7; /*0x77c319*/
          --v8; /*0x77c31c*/
        }
        while ( v8 ); /*0x77c31d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c320*/
      v4 = dword_B766B0; /*0x77c325*/
      v0 = dword_B76688; /*0x77c32b*/
    }
    while ( dword_B76688 > (unsigned int)dword_B766B0 ); /*0x77c335*/
  }
  __3_YAXPAX_Z(dword_B76680); /*0x77c341*/
}



// ==== 0x0077C350  sub_77C350  this=-  sig=ida-proto ====
int sub_77C350()
{
  dword_B777A0 = 0; /*0x77c357*/
  dword_B777A4 = 0; /*0x77c35c*/
  dword_B777A8 = 0; /*0x77c361*/
  return atexit(sub_77C370); /*0x77c36c*/
}



// ==== 0x0077C370  sub_77C370  this=-  sig=ida-proto ====
void __cdecl sub_77C370()
{
  int i; // esi

  for ( i = 0; i < dword_B777A0; ++i ) /*0x77c37a*/
    DeleteAndZero((void **)dword_B777A8 + i); /*0x77c384*/
  dword_B777A0 = 0; /*0x77c399*/
  __3_YAXPAX_Z(dword_B777A8); /*0x77c3a4*/
}



// ==== 0x0077C3B0  sub_77C3B0  this=-  sig=ida-proto ====
int sub_77C3B0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77c3b0*/
  dbl_B76550 = 0.2; /*0x77c3b7*/
  dbl_B76558 = 0.8; /*0x77c3cb*/
  dword_B76560 = 128; /*0x77c3df*/
  v1 = 0; /*0x77c3e4*/
  do /*0x77c3e9*/
  {
    ++v1; /*0x77c3e6*/
    v0 >>= 1; /*0x77c3e7*/
  }
  while ( v0 ); /*0x77c3e9*/
  dword_B76540 = 0; /*0x77c3eb*/
  dword_B7653C = v1 - 1; /*0x77c3f9*/
  dword_B76534 = 0; /*0x77c3ff*/
  byte_B76544 = 0; /*0x77c405*/
  dword_B76538 = 1 << (v1 - 1); /*0x77c40b*/
  g_WOL_ConnectionPool = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77c423*/
  memset(g_WOL_ConnectionPool, 0, 4 * dword_B76538); /*0x77c429*/
  dword_B76548 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77c430*/
  return atexit(sub_77C450); /*0x77c442*/
}



// ==== 0x0077C450  sub_77C450  this=-  sig=ida-proto ====
void __cdecl sub_77C450()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76538; /*0x77c450*/
  for ( i = 0; i < dword_B76538; v0 = dword_B76538 ) /*0x77c45d*/
  {
    v2 = *((_DWORD *)g_WOL_ConnectionPool + i); /*0x77c464*/
    while ( v2 ) /*0x77c469*/
    {
      v3 = (void **)v2; /*0x77c46b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77c46d*/
      DeleteAndZero(v3); /*0x77c476*/
      __3_YAXPAX_Z(v3); /*0x77c47c*/
    }
    *((_DWORD *)g_WOL_ConnectionPool + i++) = 0; /*0x77c48f*/
  }
  v4 = dword_B76560; /*0x77c4a0*/
  dword_B76534 = 0; /*0x77c4a6*/
  if ( v0 > dword_B76560 ) /*0x77c4b2*/
  {
    do /*0x77c565*/
    {
      if ( byte_B76544 || v0 <= v4 ) /*0x77c4c8*/
        break; /*0x77c4c8*/
      v5 = (int *)g_WOL_ConnectionPool; /*0x77c4d4*/
      v6 = v0; /*0x77c4da*/
      dword_B76538 = v0 >> 1; /*0x77c4df*/
      --dword_B7653C; /*0x77c4eb*/
      g_WOL_ConnectionPool = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c504*/
      memset(g_WOL_ConnectionPool, 0, 4 * dword_B76538); /*0x77c50c*/
      if ( v6 > 0 ) /*0x77c50e*/
      {
        v7 = v5; /*0x77c510*/
        v8 = v6; /*0x77c512*/
        do /*0x77c54d*/
        {
          v9 = *v7; /*0x77c514*/
          if ( *v7 ) /*0x77c514*/
          {
            do /*0x77c547*/
            {
              v10 = dword_B76548(v9) & ((1 << dword_B7653C) - 1); /*0x77c530*/
              v11 = *((_DWORD *)g_WOL_ConnectionPool + v10); /*0x77c537*/
              *((_DWORD *)g_WOL_ConnectionPool + v10) = v9; /*0x77c53a*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77c53d*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77c540*/
              v9 = v12; /*0x77c545*/
            }
            while ( v12 ); /*0x77c547*/
          }
          ++v7; /*0x77c549*/
          --v8; /*0x77c54c*/
        }
        while ( v8 ); /*0x77c54d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c550*/
      v4 = dword_B76560; /*0x77c555*/
      v0 = dword_B76538; /*0x77c55b*/
    }
    while ( dword_B76538 > (unsigned int)dword_B76560 ); /*0x77c565*/
  }
  __3_YAXPAX_Z(g_WOL_ConnectionPool); /*0x77c571*/
}



// ==== 0x0077C580  sub_77C580  this=-  sig=ida-proto ====
int sub_77C580()
{
  dword_B765F8 = 0; /*0x77c587*/
  dword_B765FC = 0; /*0x77c58c*/
  dword_B76600 = 0; /*0x77c591*/
  return atexit(sub_77C5A0); /*0x77c59c*/
}



// ==== 0x0077C5A0  sub_77C5A0  this=-  sig=ida-proto ====
void __cdecl sub_77C5A0()
{
  int i; // esi

  for ( i = 0; i < dword_B765F8; ++i ) /*0x77c5aa*/
    DeleteAndZero((void **)dword_B76600 + i); /*0x77c5b4*/
  dword_B765F8 = 0; /*0x77c5c9*/
  __3_YAXPAX_Z(dword_B76600); /*0x77c5d4*/
}



// ==== 0x0077C5E0  sub_77C5E0  this=-  sig=ida-proto ====
int sub_77C5E0()
{
  dword_B73BD8 = 0; /*0x77c5e7*/
  dword_B73BDC = 0; /*0x77c5ec*/
  dword_B73BE0 = 0; /*0x77c5f1*/
  return atexit(sub_77C600); /*0x77c5fc*/
}



// ==== 0x0077C600  sub_77C600  this=-  sig=ida-proto ====
void __cdecl sub_77C600()
{
  int i; // esi

  for ( i = 0; i < dword_B73BD8; ++i ) /*0x77c60a*/
    DeleteAndZero((void **)dword_B73BE0 + i); /*0x77c614*/
  dword_B73BD8 = 0; /*0x77c629*/
  __3_YAXPAX_Z(dword_B73BE0); /*0x77c634*/
}



// ==== 0x0077C640  sub_77C640  this=-  sig=ida-proto ====
int sub_77C640()
{
  stru_B736F8 = 0; /*0x77c647*/
  dword_B736FC = 0; /*0x77c64c*/
  dword_B73700 = 0; /*0x77c651*/
  return atexit(sub_77C660); /*0x77c65c*/
}



// ==== 0x0077C660  sub_77C660  this=-  sig=ida-proto ====
void __cdecl sub_77C660()
{
  int i; // esi

  for ( i = 0; i < stru_B736F8; ++i ) /*0x77c66a*/
    DeleteAndZero((void **)dword_B73700 + i); /*0x77c674*/
  stru_B736F8 = 0; /*0x77c689*/
  __3_YAXPAX_Z(dword_B73700); /*0x77c694*/
}



// ==== 0x0077C6A0  sub_77C6A0  this=-  sig=ida-proto ====
int sub_77C6A0()
{
  dword_B76B00 = 0; /*0x77c6a7*/
  dword_B76B04 = 0; /*0x77c6ac*/
  dword_B76B08 = 0; /*0x77c6b1*/
  return atexit(sub_77C6C0); /*0x77c6bc*/
}



// ==== 0x0077C6C0  sub_77C6C0  this=-  sig=ida-proto ====
void __cdecl sub_77C6C0()
{
  int i; // esi

  for ( i = 0; i < dword_B76B00; ++i ) /*0x77c6ca*/
    DeleteAndZero((void **)dword_B76B08 + i); /*0x77c6d4*/
  dword_B76B00 = 0; /*0x77c6e9*/
  __3_YAXPAX_Z(dword_B76B08); /*0x77c6f4*/
}



// ==== 0x0077C700  sub_77C700  this=-  sig=ida-proto ====
int sub_77C700()
{
  stru_B76510 = 0; /*0x77c707*/
  dword_B76514 = 0; /*0x77c70c*/
  dword_B76518 = 0; /*0x77c711*/
  return atexit(sub_77C720); /*0x77c71c*/
}



// ==== 0x0077C720  sub_77C720  this=-  sig=ida-proto ====
void __cdecl sub_77C720()
{
  int i; // esi

  for ( i = 0; i < stru_B76510; ++i ) /*0x77c72a*/
    DeleteAndZero((void **)dword_B76518 + i); /*0x77c734*/
  stru_B76510 = 0; /*0x77c749*/
  __3_YAXPAX_Z(dword_B76518); /*0x77c754*/
}



// ==== 0x0077C760  sub_77C760  this=-  sig=ida-proto ====
int sub_77C760()
{
  dword_B73AE8 = 0; /*0x77c767*/
  dword_B73AEC = 0; /*0x77c76c*/
  dword_B73AF0 = 0; /*0x77c771*/
  return atexit(sub_77C780); /*0x77c77c*/
}



// ==== 0x0077C780  sub_77C780  this=-  sig=ida-proto ====
void __cdecl sub_77C780()
{
  int i; // esi

  for ( i = 0; i < dword_B73AE8; ++i ) /*0x77c78a*/
    DeleteAndZero((void **)dword_B73AF0 + i); /*0x77c794*/
  dword_B73AE8 = 0; /*0x77c7a9*/
  __3_YAXPAX_Z(dword_B73AF0); /*0x77c7b4*/
}



// ==== 0x0077C7C0  sub_77C7C0  this=-  sig=ida-proto ====
int sub_77C7C0()
{
  dword_B77820 = 0; /*0x77c7c7*/
  dword_B77824 = 0; /*0x77c7cc*/
  dword_B77828 = 0; /*0x77c7d1*/
  return atexit(sub_77C7E0); /*0x77c7dc*/
}



// ==== 0x0077C7E0  sub_77C7E0  this=-  sig=ida-proto ====
void __cdecl sub_77C7E0()
{
  int i; // esi

  for ( i = 0; i < dword_B77820; ++i ) /*0x77c7ea*/
    DeleteAndZero((void **)dword_B77828 + i); /*0x77c7f4*/
  dword_B77820 = 0; /*0x77c809*/
  __3_YAXPAX_Z(dword_B77828); /*0x77c814*/
}



// ==== 0x0077C820  sub_77C820  this=-  sig=ida-proto ====
int sub_77C820()
{
  stru_B73708 = 0; /*0x77c827*/
  dword_B7370C = 0; /*0x77c82c*/
  dword_B73710 = 0; /*0x77c831*/
  return atexit(sub_77C840); /*0x77c83c*/
}



// ==== 0x0077C840  sub_77C840  this=-  sig=ida-proto ====
void __cdecl sub_77C840()
{
  int i; // esi

  for ( i = 0; i < stru_B73708; ++i ) /*0x77c84a*/
    DeleteAndZero((void **)dword_B73710 + i); /*0x77c854*/
  stru_B73708 = 0; /*0x77c869*/
  __3_YAXPAX_Z(dword_B73710); /*0x77c874*/
}



// ==== 0x0077C880  sub_77C880  this=-  sig=ida-proto ====
int sub_77C880()
{
  stru_B76188 = 0; /*0x77c887*/
  dword_B7618C = 0; /*0x77c88c*/
  dword_B76190 = 0; /*0x77c891*/
  return atexit(sub_77C8A0); /*0x77c89c*/
}



// ==== 0x0077C8A0  sub_77C8A0  this=-  sig=ida-proto ====
void __cdecl sub_77C8A0()
{
  int i; // esi

  for ( i = 0; i < stru_B76188; ++i ) /*0x77c8aa*/
    DeleteAndZero((void **)dword_B76190 + i); /*0x77c8b4*/
  stru_B76188 = 0; /*0x77c8c9*/
  __3_YAXPAX_Z(dword_B76190); /*0x77c8d4*/
}



// ==== 0x0077C8E0  sub_77C8E0  this=-  sig=ida-proto ====
int sub_77C8E0()
{
  g_WindowManager = 0; /*0x77c8e7*/
  dword_B73AAC = 0; /*0x77c8ec*/
  dword_B73AB0 = 0; /*0x77c8f1*/
  return atexit(sub_77C900); /*0x77c8fc*/
}



// ==== 0x0077C900  sub_77C900  this=-  sig=ida-proto ====
void __cdecl sub_77C900()
{
  int i; // esi

  for ( i = 0; i < g_WindowManager; ++i ) /*0x77c90a*/
    DeleteAndZero((void **)dword_B73AB0 + i); /*0x77c914*/
  g_WindowManager = 0; /*0x77c929*/
  __3_YAXPAX_Z(dword_B73AB0); /*0x77c934*/
}



// ==== 0x0077C940  sub_77C940  this=-  sig=ida-proto ====
int sub_77C940()
{
  dword_B76980 = 0; /*0x77c947*/
  dword_B76984 = 0; /*0x77c94c*/
  dword_B76988 = 0; /*0x77c951*/
  return atexit(sub_77C960); /*0x77c95c*/
}



// ==== 0x0077C960  sub_77C960  this=-  sig=ida-proto ====
void __cdecl sub_77C960()
{
  int i; // esi

  for ( i = 0; i < dword_B76980; ++i ) /*0x77c96a*/
    DeleteAndZero((void **)dword_B76988 + i); /*0x77c974*/
  dword_B76980 = 0; /*0x77c989*/
  __3_YAXPAX_Z(dword_B76988); /*0x77c994*/
}



// ==== 0x0077C9A0  sub_77C9A0  this=-  sig=ida-proto ====
int sub_77C9A0()
{
  g_WOL_BuddyList = 0; /*0x77c9a7*/
  dword_B779B4 = 0; /*0x77c9ac*/
  dword_B779B8 = 0; /*0x77c9b1*/
  return atexit(sub_77C9C0); /*0x77c9bc*/
}



// ==== 0x0077C9C0  sub_77C9C0  this=-  sig=ida-proto ====
void __cdecl sub_77C9C0()
{
  int i; // esi

  for ( i = 0; i < g_WOL_BuddyList; ++i ) /*0x77c9ca*/
    DeleteAndZero((void **)dword_B779B8 + i); /*0x77c9d4*/
  g_WOL_BuddyList = 0; /*0x77c9e9*/
  __3_YAXPAX_Z(dword_B779B8); /*0x77c9f4*/
}



// ==== 0x0077CA00  sub_77CA00  this=-  sig=ida-proto ====
int sub_77CA00()
{
  unknown_libname_73(&unk_B73ACC); /*0x77ca05*/
  return atexit(unknown_libname_40); /*0x77ca15*/
}



// ==== 0x0077CA20  unknown_libname_40  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_40()
{
  DeleteAndZero((void **)&unk_B73ACC); /*0x77ca25*/
}



// ==== 0x0077CA30  sub_77CA30  this=-  sig=ida-proto ====
int sub_77CA30()
{
  unknown_libname_73(&g_WOL_LoginObject); /*0x77ca35*/
  return atexit(unknown_libname_41); /*0x77ca45*/
}



// ==== 0x0077CA50  unknown_libname_41  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_41()
{
  DeleteAndZero((void **)&g_WOL_LoginObject); /*0x77ca55*/
}



// ==== 0x0077CA60  sub_77CA60  this=-  sig=ida-proto ====
int sub_77CA60()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77ca60*/
  dbl_B769B0 = 0.2; /*0x77ca67*/
  dbl_B769B8 = 0.8; /*0x77ca7b*/
  dword_B769C0 = 128; /*0x77ca8f*/
  v1 = 0; /*0x77ca94*/
  do /*0x77ca99*/
  {
    ++v1; /*0x77ca96*/
    v0 >>= 1; /*0x77ca97*/
  }
  while ( v0 ); /*0x77ca99*/
  dword_B769A0 = 0; /*0x77ca9b*/
  dword_B7699C = v1 - 1; /*0x77caa9*/
  dword_B76994 = 0; /*0x77caaf*/
  byte_B769A4 = 0; /*0x77cab5*/
  dword_B76998 = 1 << (v1 - 1); /*0x77cabb*/
  dword_B76990 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77cad3*/
  memset(dword_B76990, 0, 4 * dword_B76998); /*0x77cad9*/
  dword_B769A8 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77cae0*/
  return atexit(sub_77CB00); /*0x77caf2*/
}



// ==== 0x0077CB00  sub_77CB00  this=-  sig=ida-proto ====
void __cdecl sub_77CB00()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76998; /*0x77cb00*/
  for ( i = 0; i < dword_B76998; v0 = dword_B76998 ) /*0x77cb0d*/
  {
    v2 = *((_DWORD *)dword_B76990 + i); /*0x77cb14*/
    while ( v2 ) /*0x77cb19*/
    {
      v3 = (void **)v2; /*0x77cb1b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77cb1d*/
      DeleteAndZero(v3); /*0x77cb26*/
      __3_YAXPAX_Z(v3); /*0x77cb2c*/
    }
    *((_DWORD *)dword_B76990 + i++) = 0; /*0x77cb3f*/
  }
  v4 = dword_B769C0; /*0x77cb50*/
  dword_B76994 = 0; /*0x77cb56*/
  if ( v0 > dword_B769C0 ) /*0x77cb62*/
  {
    do /*0x77cc15*/
    {
      if ( byte_B769A4 || v0 <= v4 ) /*0x77cb78*/
        break; /*0x77cb78*/
      v5 = (int *)dword_B76990; /*0x77cb84*/
      v6 = v0; /*0x77cb8a*/
      dword_B76998 = v0 >> 1; /*0x77cb8f*/
      --dword_B7699C; /*0x77cb9b*/
      dword_B76990 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77cbb4*/
      memset(dword_B76990, 0, 4 * dword_B76998); /*0x77cbbc*/
      if ( v6 > 0 ) /*0x77cbbe*/
      {
        v7 = v5; /*0x77cbc0*/
        v8 = v6; /*0x77cbc2*/
        do /*0x77cbfd*/
        {
          v9 = *v7; /*0x77cbc4*/
          if ( *v7 ) /*0x77cbc4*/
          {
            do /*0x77cbf7*/
            {
              v10 = dword_B769A8(v9) & ((1 << dword_B7699C) - 1); /*0x77cbe0*/
              v11 = *((_DWORD *)dword_B76990 + v10); /*0x77cbe7*/
              *((_DWORD *)dword_B76990 + v10) = v9; /*0x77cbea*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77cbed*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77cbf0*/
              v9 = v12; /*0x77cbf5*/
            }
            while ( v12 ); /*0x77cbf7*/
          }
          ++v7; /*0x77cbf9*/
          --v8; /*0x77cbfc*/
        }
        while ( v8 ); /*0x77cbfd*/
      }
      __3_YAXPAX_Z(v5); /*0x77cc00*/
      v4 = dword_B769C0; /*0x77cc05*/
      v0 = dword_B76998; /*0x77cc0b*/
    }
    while ( dword_B76998 > (unsigned int)dword_B769C0 ); /*0x77cc15*/
  }
  __3_YAXPAX_Z(dword_B76990); /*0x77cc21*/
}



// ==== 0x0077CC30  sub_77CC30  this=-  sig=ida-proto ====
int sub_77CC30()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77cc30*/
  dbl_B76628 = 0.2; /*0x77cc37*/
  dbl_B76630 = 0.8; /*0x77cc4b*/
  dword_B76638 = 128; /*0x77cc5f*/
  v1 = 0; /*0x77cc64*/
  do /*0x77cc69*/
  {
    ++v1; /*0x77cc66*/
    v0 >>= 1; /*0x77cc67*/
  }
  while ( v0 ); /*0x77cc69*/
  dword_B76618 = 0; /*0x77cc6b*/
  dword_B76614 = v1 - 1; /*0x77cc79*/
  dword_B7660C = 0; /*0x77cc7f*/
  byte_B7661C = 0; /*0x77cc85*/
  dword_B76610 = 1 << (v1 - 1); /*0x77cc8b*/
  dword_B76608 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77cca3*/
  memset(dword_B76608, 0, 4 * dword_B76610); /*0x77cca9*/
  dword_B76620 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77ccb0*/
  return atexit(sub_77CCD0); /*0x77ccc2*/
}



// ==== 0x0077CCD0  sub_77CCD0  this=-  sig=ida-proto ====
void __cdecl sub_77CCD0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76610; /*0x77ccd0*/
  for ( i = 0; i < dword_B76610; v0 = dword_B76610 ) /*0x77ccdd*/
  {
    v2 = *((_DWORD *)dword_B76608 + i); /*0x77cce4*/
    while ( v2 ) /*0x77cce9*/
    {
      v3 = (void **)v2; /*0x77cceb*/
      v2 = *(_DWORD *)(v2 + 272); /*0x77cced*/
      DeleteAndZero(v3); /*0x77ccf9*/
      __3_YAXPAX_Z(v3); /*0x77ccff*/
    }
    *((_DWORD *)dword_B76608 + i++) = 0; /*0x77cd12*/
  }
  v4 = dword_B76638; /*0x77cd23*/
  dword_B7660C = 0; /*0x77cd29*/
  if ( v0 > dword_B76638 ) /*0x77cd35*/
  {
    do /*0x77cdee*/
    {
      if ( byte_B7661C || v0 <= v4 ) /*0x77cd4b*/
        break; /*0x77cd4b*/
      v5 = (int *)dword_B76608; /*0x77cd57*/
      v6 = v0; /*0x77cd5d*/
      dword_B76610 = v0 >> 1; /*0x77cd62*/
      --dword_B76614; /*0x77cd6e*/
      dword_B76608 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77cd87*/
      memset(dword_B76608, 0, 4 * dword_B76610); /*0x77cd8f*/
      if ( v6 > 0 ) /*0x77cd91*/
      {
        v7 = v5; /*0x77cd93*/
        v8 = v6; /*0x77cd95*/
        do /*0x77cdd6*/
        {
          v9 = *v7; /*0x77cd97*/
          if ( *v7 ) /*0x77cd97*/
          {
            do /*0x77cdd0*/
            {
              v10 = dword_B76620(v9) & ((1 << dword_B76614) - 1); /*0x77cdb3*/
              v11 = *((_DWORD *)dword_B76608 + v10); /*0x77cdba*/
              *((_DWORD *)dword_B76608 + v10) = v9; /*0x77cdbd*/
              v12 = *(_DWORD *)(v9 + 272); /*0x77cdc0*/
              *(_DWORD *)(v9 + 272) = v11; /*0x77cdc6*/
              v9 = v12; /*0x77cdce*/
            }
            while ( v12 ); /*0x77cdd0*/
          }
          ++v7; /*0x77cdd2*/
          --v8; /*0x77cdd5*/
        }
        while ( v8 ); /*0x77cdd6*/
      }
      __3_YAXPAX_Z(v5); /*0x77cdd9*/
      v4 = dword_B76638; /*0x77cdde*/
      v0 = dword_B76610; /*0x77cde4*/
    }
    while ( dword_B76610 > (unsigned int)dword_B76638 ); /*0x77cdee*/
  }
  __3_YAXPAX_Z(dword_B76608); /*0x77cdfa*/
}



// ==== 0x0077CE10  sub_77CE10  this=-  sig=ida-proto ====
int sub_77CE10()
{
  int result; // eax

  result = dword_84A1C8 - dword_84A1C4 - 4; /*0x77ce1d*/
  dword_B765F0 = result; /*0x77ce20*/
  return result; /*0x77ce25*/
}



// ==== 0x0077CE30  sub_77CE30  this=-  sig=ida-proto ====
int sub_77CE30()
{
  int result; // eax

  result = dword_84A1D8 - dword_84A1D4 - 4; /*0x77ce3d*/
  dword_B73E3C = result; /*0x77ce40*/
  return result; /*0x77ce45*/
}



// ==== 0x0077CE50  sub_77CE50  this=-  sig=ida-proto ====
int sub_77CE50()
{
  dword_B76AD0 = 0; /*0x77ce57*/
  dword_B76AD4 = 0; /*0x77ce5c*/
  dword_B76AD8 = 0; /*0x77ce61*/
  return atexit(sub_77CE70); /*0x77ce6c*/
}



// ==== 0x0077CE70  sub_77CE70  this=-  sig=ida-proto ====
void __cdecl sub_77CE70()
{
  int i; // esi

  for ( i = 0; i < dword_B76AD0; ++i ) /*0x77ce7a*/
    DeleteAndZero((void **)dword_B76AD8 + i); /*0x77ce84*/
  dword_B76AD0 = 0; /*0x77ce99*/
  __3_YAXPAX_Z(dword_B76AD8); /*0x77cea4*/
}



// ==== 0x0077CEB0  sub_77CEB0  this=-  sig=ida-proto ====
int sub_77CEB0()
{
  dword_B76970 = 0; /*0x77ceb7*/
  dword_B76974 = 0; /*0x77cebc*/
  dword_B76978 = 0; /*0x77cec1*/
  return atexit(sub_77CED0); /*0x77cecc*/
}



// ==== 0x0077CED0  sub_77CED0  this=-  sig=ida-proto ====
void __cdecl sub_77CED0()
{
  int i; // esi

  for ( i = 0; i < dword_B76970; ++i ) /*0x77ceda*/
    DeleteAndZero((void **)dword_B76978 + i); /*0x77cee4*/
  dword_B76970 = 0; /*0x77cef9*/
  __3_YAXPAX_Z(dword_B76978); /*0x77cf04*/
}



// ==== 0x0077CF10  sub_77CF10  this=-  sig=ida-proto ====
int sub_77CF10()
{
  unknown_libname_73(&stru_B76AC4); /*0x77cf15*/
  return atexit(unknown_libname_42); /*0x77cf25*/
}



// ==== 0x0077CF30  unknown_libname_42  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_42()
{
  DeleteAndZero((void **)&stru_B76AC4); /*0x77cf35*/
}



// ==== 0x0077CF40  UI_Setup_77CF40  this=-  sig=ida-proto ====
BOOL sub_77CF40()
{
  return dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2; /*0x77cf56*/
}



// ==== 0x0077CF70  sub_77CF70  this=-  sig=ida-proto ====
int sub_77CF70()
{
  unknown_libname_73(&unk_B76E34); /*0x77cf75*/
  return atexit(unknown_libname_43); /*0x77cf85*/
}



// ==== 0x0077CF90  unknown_libname_43  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_43()
{
  DeleteAndZero((void **)&unk_B76E34); /*0x77cf95*/
}



// ==== 0x0077CFA0  sub_77CFA0  this=-  sig=ida-proto ====
int sub_77CFA0()
{
  unknown_libname_73(&unk_B73B30); /*0x77cfa5*/
  return atexit(unknown_libname_44); /*0x77cfb5*/
}



// ==== 0x0077CFC0  unknown_libname_44  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_44()
{
  DeleteAndZero((void **)&unk_B73B30); /*0x77cfc5*/
}



// ==== 0x0077CFD0  sub_77CFD0  this=-  sig=ida-proto ====
int sub_77CFD0()
{
  unknown_libname_73(&stru_B7622C); /*0x77cfd5*/
  return atexit(unknown_libname_45); /*0x77cfe5*/
}



// ==== 0x0077CFF0  unknown_libname_45  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_45()
{
  DeleteAndZero((void **)&stru_B7622C); /*0x77cff5*/
}



// ==== 0x0077D000  sub_77D000  this=-  sig=ida-proto ====
int sub_77D000()
{
  unknown_libname_73(&unk_B76908); /*0x77d005*/
  return atexit(unknown_libname_46); /*0x77d015*/
}



// ==== 0x0077D020  unknown_libname_46  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_46()
{
  DeleteAndZero((void **)&unk_B76908); /*0x77d025*/
}



// ==== 0x0077D030  sub_77D030  this=-  sig=ida-proto ====
int sub_77D030()
{
  unknown_libname_73(&unk_B77794); /*0x77d035*/
  return atexit(unknown_libname_47); /*0x77d045*/
}



// ==== 0x0077D050  unknown_libname_47  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_47()
{
  DeleteAndZero((void **)&unk_B77794); /*0x77d055*/
}



// ==== 0x0077D060  sub_77D060  this=-  sig=ida-proto ====
int sub_77D060()
{
  unknown_libname_73(&unk_B778F4); /*0x77d065*/
  return atexit(unknown_libname_48); /*0x77d075*/
}



// ==== 0x0077D080  unknown_libname_48  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_48()
{
  DeleteAndZero((void **)&unk_B778F4); /*0x77d085*/
}



// ==== 0x0077D090  sub_77D090  this=-  sig=ida-proto ====
int sub_77D090()
{
  unknown_libname_73(&unk_B778FC); /*0x77d095*/
  return atexit(unknown_libname_49); /*0x77d0a5*/
}



// ==== 0x0077D0B0  unknown_libname_49  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_49()
{
  DeleteAndZero((void **)&unk_B778FC); /*0x77d0b5*/
}



// ==== 0x0077D0C0  sub_77D0C0  this=-  sig=ida-proto ====
int sub_77D0C0()
{
  unknown_libname_73(&stru_B765EC); /*0x77d0c5*/
  return atexit(unknown_libname_50); /*0x77d0d5*/
}



// ==== 0x0077D0E0  unknown_libname_50  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_50()
{
  DeleteAndZero((void **)&stru_B765EC); /*0x77d0e5*/
}



// ==== 0x0077D0F0  sub_77D0F0  this=-  sig=ida-proto ====
int sub_77D0F0()
{
  unknown_libname_73(&stru_B76900); /*0x77d0f5*/
  return atexit(unknown_libname_51); /*0x77d105*/
}



// ==== 0x0077D110  unknown_libname_51  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_51()
{
  DeleteAndZero(&stru_B76900); /*0x77d115*/
}



// ==== 0x0077D120  sub_77D120  this=-  sig=ida-proto ====
int sub_77D120()
{
  ComPtr::Constructor(&stru_B75E48); /*0x77d125*/
  stru_B75E48 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x77d12f*/
  return atexit(sub_77D140); /*0x77d13f*/
}



// ==== 0x0077D140  sub_77D140  this=-  sig=ida-proto ====
void __cdecl sub_77D140()
{
  stru_B75E48 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x77d140*/
  ComPtr::Release(&stru_B75E48); /*0x77d14f*/
}



// ==== 0x0077D160  sub_77D160  this=-  sig=ida-proto ====
int sub_77D160()
{
  dword_B76478 = Timer::GetTicks(); /*0x77d16f*/
  dword_B76480 = 0; /*0x77d174*/
  return atexit(nullsub_263); /*0x77d184*/
}



// ==== 0x0077D190  nullsub_263  this=-  sig=ida-proto ====
void __cdecl nullsub_263()
{
  ; /*0x77d190*/
}



// ==== 0x0077D1A0  sub_77D1A0  this=-  sig=ida-proto ====
int sub_77D1A0()
{
  unknown_libname_74(&unk_B76230); /*0x77d1a5*/
  return atexit(unknown_libname_53); /*0x77d1b5*/
}



// ==== 0x0077D1C0  unknown_libname_53  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_53()
{
  DeleteAndZero::Alt(&unk_B76230); /*0x77d1c5*/
}



// ==== 0x0077D1F0  SimpleWonlineDialogControl::ConnectAndLoginWOL_Connect  this=SimpleWonlineDialogControl  sig=csp ====
void __thiscall ConnectAndLoginWOL_Connect(SimpleWonlineDialogControl *this)
{
  *(_DWORD *)this->__pad_0 = &off_7F7624; /*0x77d1f0*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x77d1f6*/
}



// ==== 0x0077D200  j_Game_ProcessIdle  this=SimpleWonlineDialogControl  sig=csp ====
// attributes: thunk
char j_Game_ProcessIdle()
{
  return Game::ProcessIdle();
}



// ==== 0x0077D240  ObjectClass::method_77D240  this=ObjectClass  sig=csp ====
int __thiscall sub_77D240(ObjectClass *this)
{
  int owningHouseIndex; // eax
  char *v2; // ebx
  int v3; // esi
  int i; // edi
  char *v6; // eax

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77d240*/
  v2 = 0; /*0x77d248*/
  v3 = 0; /*0x77d24a*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x77d251*/
    return -1; /*0x77d28a*/
  for ( i = 0; ; i += 108 ) /*0x77d253*/
  {
    if ( i >= 0 && v3 < owningHouseIndex ) /*0x77d25b*/
      v2 = (char *)g_WOL_UserList.nextObject + i; /*0x77d262*/
    v6 = String::GetOrEmpty_Alt((String *)this); /*0x77d26b*/
    if ( !_strcmpi(v6, v2 + 36) ) /*0x77d271*/
      break; /*0x77d271*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77d27d*/
    if ( ++v3 >= g_WOL_UserList.owningHouseIndex ) /*0x77d288*/
      return -1; /*0x77d288*/
  }
  return v3; /*0x77d28a*/
}



// ==== 0x0077D350  ObjectClass::method_77D350  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_77D350(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  const wchar_t *v5; // [esp+0h] [ebp-204h]
  wchar_t Buffer[256]; // [esp+4h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtBuddyFilter, 0, g_Str_File_wonline_cpp, 873); /*0x77d36a*/
  swprintf(Buffer, (const size_t)StringCSF, v5); /*0x77d375*/
  v3 = wcslen(Buffer); /*0x77d37f*/
  return _wcsnicmp((const wchar_t *)this, Buffer, v3) == 0; /*0x77d397*/
}



// ==== 0x0077D3A0  ObjectClass::method_77D3A0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_77D3A0(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  const wchar_t *v5; // [esp+0h] [ebp-204h]
  wchar_t Buffer[256]; // [esp+4h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtClanFilter, 0, g_Str_File_wonline_cpp, 879); /*0x77d3ba*/
  swprintf(Buffer, (const size_t)StringCSF, v5); /*0x77d3c5*/
  v3 = wcslen(Buffer); /*0x77d3cf*/
  return _wcsnicmp((const wchar_t *)this, Buffer, v3) == 0; /*0x77d3e7*/
}



// ==== 0x0077D3F0  ObjectClass::method_77D3F0  this=ObjectClass  sig=csp ====
char __thiscall sub_77D3F0(ObjectClass *this)
{
  int v2; // ebx
  int v3; // edi
  int *p_occupant; // ebp
  void *v6; // [esp+10h] [ebp-4h] BYREF

  if ( !this ) /*0x77d3f9*/
    return 0; /*0x77d3f9*/
  v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x77d3fb*/
  unknown_libname_73(&v6); /*0x77d405*/
  v3 = 0; /*0x77d40a*/
  if ( v2 <= 0 ) /*0x77d40e*/
  {
LABEL_9:
    DeleteAndZero((ObjectClass *)&v6); /*0x77d46e*/
    return 0; /*0x77d47e*/
  }
  p_occupant = &this->occupant; /*0x77d410*/
  while ( 1 ) /*0x77d413*/
  {
    if ( v3 >= 0 && v3 < *(int *)g_WindowManager.__pad_0 ) /*0x77d41d*/
      String::Reassign((String *)&v6, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v3)); /*0x77d42c*/
    if ( !strcmp(String::GetOrEmpty((String *)&v6), (const char *)p_occupant) ) /*0x77d442*/
      break; /*0x77d442*/
    if ( ++v3 >= v2 ) /*0x77d46c*/
      goto LABEL_9; /*0x77d46c*/
  }
  DeleteAndZero((ObjectClass *)&v6); /*0x77d483*/
  return 1; /*0x77d477*/
}



// ==== 0x0077D4C0  ObjectClass::IsBuddyOrIgnoreWOL  this=ObjectClass  sig=csp ====
bool __thiscall WOL_IsBuddyOrIgnore(const char *this)
{
  signed int v2; // eax
  char *v3; // ebx
  int v4; // esi
  int v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // ebx
  int v9; // edi
  const char *v10; // ebp
  int v12; // ebx
  int v13; // edi
  const char *v14; // ebp
  void *v15; // [esp+10h] [ebp-4h] BYREF

  if ( !byte_B76AF0 && !byte_B73AD0 || !Dialog::FindByHandle((void *)0x113) ) /*0x77d4e2*/
    return 1; /*0x77d4e2*/
  v2 = dword_B77900; /*0x77d4ef*/
  v3 = 0; /*0x77d4f4*/
  v4 = 0; /*0x77d4f6*/
  if ( (int)dword_B77900 <= 0 ) /*0x77d4fa*/
  {
LABEL_11:
    v4 = -1; /*0x77d53a*/
  }
  else
  {
    v5 = 0; /*0x77d4fc*/
    while ( 1 ) /*0x77d4fe*/
    {
      if ( v5 >= 0 && v4 < v2 ) /*0x77d504*/
        v3 = (char *)dword_B77908 + v5; /*0x77d50b*/
      v6 = String::GetOrEmpty_Alt((char **)&dword_B73E40); /*0x77d517*/
      if ( !_strcmpi(v6, v3 + 36) ) /*0x77d51d*/
        break; /*0x77d51d*/
      v2 = dword_B77900; /*0x77d52d*/
      ++v4; /*0x77d532*/
      v5 += 108; /*0x77d533*/
      if ( v4 >= (int)dword_B77900 ) /*0x77d538*/
        goto LABEL_11; /*0x77d538*/
    }
    v2 = dword_B77900; /*0x77d604*/
  }
  v7 = 0; /*0x77d53d*/
  if ( v4 < 0 ) /*0x77d541*/
    return 1; /*0x77d541*/
  if ( v4 < v2 ) /*0x77d549*/
    v7 = (char *)dword_B77908 + 108 * v4; /*0x77d556*/
  if ( byte_B76AF0 ) /*0x77d565*/
  {
    if ( byte_B73AD0 ) /*0x77d56d*/
    {
      if ( !v7 ) /*0x77d575*/
        goto LABEL_20; /*0x77d575*/
      if ( !this ) /*0x77d579*/
        return 0; /*0x77d579*/
      if ( _strcmpi(v7 + 46, this + 46) ) /*0x77d587*/
      {
LABEL_20:
        if ( this ) /*0x77d599*/
        {
          v8 = g_WindowManager; /*0x77d59f*/
          unknown_libname_73(&v15); /*0x77d5a9*/
          v9 = 0; /*0x77d5ae*/
          if ( v8 > 0 ) /*0x77d5b2*/
          {
            v10 = this + 36; /*0x77d5b4*/
            while ( 1 ) /*0x77d5b7*/
            {
              if ( v9 >= 0 && v9 < g_WindowManager ) /*0x77d5c1*/
                String::Reassign((char **)&v15, (const char **)dword_B73AB0 + v9); /*0x77d5d0*/
              if ( !strcmp(String::GetOrEmpty((char **)&v15), v10) ) /*0x77d5e6*/
                break; /*0x77d5e6*/
              if ( ++v9 >= v8 ) /*0x77d61a*/
                goto LABEL_30; /*0x77d61a*/
            }
            DeleteAndZero(&v15); /*0x77d631*/
            return 1; /*0x77d631*/
          }
LABEL_30:
          DeleteAndZero(&v15); /*0x77d61c*/
        }
        return 0; /*0x77d62c*/
      }
      return 1; /*0x77d63d*/
    }
    if ( this ) /*0x77d640*/
    {
      v12 = g_WindowManager; /*0x77d642*/
      unknown_libname_73(&v15); /*0x77d64c*/
      v13 = 0; /*0x77d651*/
      if ( v12 > 0 ) /*0x77d655*/
      {
        v14 = this + 36; /*0x77d657*/
        while ( 1 ) /*0x77d65a*/
        {
          if ( v13 >= 0 && v13 < g_WindowManager ) /*0x77d664*/
            String::Reassign((char **)&v15, (const char **)dword_B73AB0 + v13); /*0x77d673*/
          if ( !strcmp(String::GetOrEmpty((char **)&v15), v14) ) /*0x77d689*/
            break; /*0x77d689*/
          if ( ++v13 >= v12 ) /*0x77d6b3*/
            goto LABEL_42; /*0x77d6b3*/
        }
        DeleteAndZero(&v15); /*0x77d6ca*/
        return 1; /*0x77d6d6*/
      }
LABEL_42:
      DeleteAndZero(&v15); /*0x77d6b5*/
    }
    return 0; /*0x77d6c5*/
  }
  return byte_B73AD0 && v7 && this && !_strcmpi(v7 + 46, this + 46); /*0x77d625*/
}



// ==== 0x0077D710  GameLoop::Thunk  this=GameLoop  sig=ida-proto ====
// attributes: thunk
char GameLoop::Thunk()
{
  return Game::ProcessIdle();
}



// ==== 0x0077D720  sub_77D720  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_77D720(_DWORD *a1, int a2)
{
  u_long v3; // ecx
  u_long v4; // eax
  int v5; // eax
  int v6; // edx
  int v8; // [esp+4h] [ebp-18h] BYREF
  _BYTE v9[3]; // [esp+8h] [ebp-14h] BYREF
  __int16 v10; // [esp+Bh] [ebp-11h]
  char v11; // [esp+Dh] [ebp-Fh]
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a2 + 24); /*0x77d726*/
  v8 = 0; /*0x77d730*/
  v11 = 0; /*0x77d738*/
  v4 = ntohl(v3); /*0x77d73d*/
  v9[2] = BYTE1(v4); /*0x77d752*/
  v10 = (unsigned __int8)v4; /*0x77d752*/
  v9[0] = HIBYTE(v4); /*0x77d756*/
  v9[1] = BYTE2(v4); /*0x77d765*/
  NetworkAddress::Assign(v12, &v8, (int)v9, 0); /*0x77d76f*/
  v5 = v12[1]; /*0x77d77a*/
  *a1 = v12[0]; /*0x77d77e*/
  v6 = v12[2]; /*0x77d780*/
  a1[1] = v5; /*0x77d784*/
  a1[2] = v6; /*0x77d78a*/
  return a1; /*0x77d789*/
}



// ==== 0x0077D820  Dialog::UpdateGameUI  this=Dialog  sig=ida-proto ====
char Dialog_UpdateGameUI()
{
  HWND GameUI; // eax

  Dialog::PumpMessages(); /*0x77d820*/
  GameUI = (HWND)Dialog::FindGameUI(); /*0x77d825*/
  if ( GameUI ) /*0x77d82c*/
    InvalidateRect(GameUI, 0, 1); /*0x77d833*/
  return 0; /*0x77d83b*/
}



// ==== 0x0077D840  ShowWOLLobbyDialog  this=-  sig=ida-proto ====
int sub_77D840()
{
  HWND Dialog; // esi
  int GameUI; // eax
  char (*v2)(); // edx

  Dialog = (HWND)CreateDialog(0xCFu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL, 0); /*0x77d858*/
  byte_A8ED9C = 1; /*0x77d85a*/
  Timer::PumpMessages((HWND *)dword_87F770); /*0x77d861*/
  ShowWindow(Dialog, 1); /*0x77d869*/
  GameUI = Dialog::FindGameUI(); /*0x77d86f*/
  v2 = Dialog::UpdateGameUI; /*0x77d87c*/
  if ( !GameUI ) /*0x77d881*/
    v2 = Dialog::PumpMessages; /*0x77d883*/
  MessageDialogLoopAlt(Dialog, (unsigned __int8 (*)(void))v2, 0, 1, 1); /*0x77d88a*/
  Timer::PumpMessages((HWND *)dword_87F770); /*0x77d895*/
  byte_A8ED9C = *((_BYTE *)dword_A8B230 + 13730); /*0x77d8a7*/
  return MapClass::MarkForRedraw(&dword_87F7E8, 2); /*0x77d8b7*/
}



// ==== 0x0077D8C0  unknown_libname_54  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_54()
{
  return WebBrowser::ShowDialog(g_INI_Key_Battleclans);
}



// ==== 0x0077D8D0  unknown_libname_55  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_55()
{
  return WebBrowser::ShowDialog(g_INI_Key_Battleclans);
}



// ==== 0x0077D8E0  unknown_libname_56  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_56()
{
  return WebBrowser::ShowDialog(g_INI_Key_Ladder);
}



// ==== 0x0077D8F0  unknown_libname_57  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_57()
{
  return WebBrowser::ShowDialog(aNews);
}



// ==== 0x0077D900  unknown_libname_58  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_58()
{
  return WebBrowser::ShowDialog(g_INI_Key_Manage);
}



// ==== 0x0077D940  Network::IsMultiplayerActive  this=Network  sig=ida-proto ====
bool Network_IsMultiplayerActive()
{
  if ( dword_A8B238 != 4 ) /*0x77d948*/
    return 0; /*0x77d94a*/
  return dword_B76B24 || (dword_B76B30 & 0x100) != 0; /*0x77d94d*/
}



// ==== 0x0077D970  Network::IsLobbyFeature  this=Network  sig=ida-proto ====
char Network_IsLobbyFeature()
{
  if ( dword_A8B238 == 4 ) /*0x77d977*/
    return BYTE1(dword_B76B30) & 1; /*0x77d984*/
  else
    return 0; /*0x77d979*/
}



// ==== 0x0077D9F0  sub_77D9F0  this=-  sig=ida-proto ====
int sub_77D9F0()
{
  unknown_libname_73(&dword_B73E40); /*0x77d9f5*/
  return atexit(unknown_libname_59); /*0x77da05*/
}



// ==== 0x0077DA10  unknown_libname_59  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_59()
{
  DeleteAndZero((void **)&dword_B73E40); /*0x77da15*/
}



// ==== 0x0077DA20  sub_77DA20  this=-  sig=ida-proto ====
int sub_77DA20()
{
  unknown_libname_73(&g_WebBrowserConfig); /*0x77da25*/
  return atexit(unknown_libname_60); /*0x77da35*/
}



// ==== 0x0077DA40  unknown_libname_60  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_60()
{
  DeleteAndZero((void **)&g_WebBrowserConfig); /*0x77da45*/
}



// ==== 0x0077DA50  SidebarClass::FindProductionData  this=SidebarClass  sig=csp ====
void *__thiscall SidebarClass::FindProductionData(SidebarClass *this)
{
  char *v1; // eax
  void *v2; // ebx
  int v4; // esi
  const void *v5; // esi
  int v6; // esi
  char *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = (char *)this; /*0x77da50*/
  v1 = ToWideStringChar((char *)this); /*0x77da52*/
  String::Assign((String *)&v7, v1); /*0x77da5c*/
  String::ToLower((String *)&v7); /*0x77da65*/
  v2 = (void *)__2_YAPAXI_Z(0x6Cu); /*0x77da71*/
  if ( !v2 ) /*0x77da78*/
  {
    DeleteAndZero((ObjectClass *)&v7); /*0x77da7e*/
    return 0; /*0x77da87*/
  }
  memset(v2, 0, 0x6Cu); /*0x77da93*/
  if ( *(_DWORD *)g_WOL_BuddyList.__pad_14 == 2 ) /*0x77da9c*/
  {
    if ( !g_WOL_ListParser.HashMap_field_0x04 ) /*0x77db10*/
      goto LABEL_18; /*0x77db10*/
    v6 = *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 /*0x77db31*/
                   + 4 * (dword_B768D8(&v7) & ((1 << SLOBYTE(g_WOL_ListParser.HashMap_field_0x0C)) - 1)));
    if ( !v6 ) /*0x77db36*/
      goto LABEL_18; /*0x77db36*/
    while ( !(unsigned __int8)String::Compare((String *)v6, (const char **)&v7) ) /*0x77db46*/
    {
      v6 = *(_DWORD *)(v6 + 112); /*0x77db48*/
      if ( !v6 ) /*0x77db4d*/
        goto LABEL_18; /*0x77db4d*/
    }
    v5 = (const void *)(v6 + 4); /*0x77db63*/
    if ( !v5 ) /*0x77db68*/
      goto LABEL_18; /*0x77db68*/
  }
  else
  {
    if ( !stru_B77D80.HashTable_field_0x04 ) /*0x77daa5*/
      goto LABEL_18; /*0x77daa5*/
    v4 = *(_DWORD *)(*(_DWORD *)stru_B77D80.__pad_0 /*0x77daca*/
                   + 4
                   * (((int (__thiscall *)(char **))stru_B77D80.HashTable_field_0x18)(&v7)
                    & ((1 << SLOBYTE(stru_B77D80.HashTable_field_0x0C)) - 1)));
    if ( !v4 ) /*0x77dacf*/
      goto LABEL_18; /*0x77dacf*/
    while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)&v7) ) /*0x77dae3*/
    {
      v4 = *(_DWORD *)(v4 + 112); /*0x77dae5*/
      if ( !v4 ) /*0x77daea*/
        goto LABEL_18; /*0x77daea*/
    }
    v5 = (const void *)(v4 + 4); /*0x77db00*/
    if ( !v5 ) /*0x77db05*/
      goto LABEL_18; /*0x77db05*/
  }
  qmemcpy(v2, v5, 0x6Cu); /*0x77db71*/
LABEL_18:
  DeleteAndZero((ObjectClass *)&v7); /*0x77db73*/
  return v2; /*0x77da87*/
}



// ==== 0x0077DB90  Lobby::BuildPlayerList  this=Lobby  sig=csp ====
int Lobby::BuildPlayerList(Lobby *this)
{
  wchar_t **v1; // esi
  wchar_t *v2; // edi
  char **v3; // eax
  const char **PlayerTypeString; // eax
  char *v5; // eax
  ObjectClass v7; // [esp+8h] [ebp-110h] BYREF

  strcpy((char *)&v7.?, asc_84A480); /*0x77dbb5*/
  v1 = (wchar_t **)dword_A8DA90; /*0x77dbbe*/
  do /*0x77dc6e*/
  {
    v2 = *v1; /*0x77dbc3*/
    unknown_libname_73(&v7); /*0x77dbc9*/
    if ( (unsigned __int8)IsKnownPointer((ObjectClass *)v2) ) /*0x77dbd0*/
    {
      WideString::Assign((wchar_t **)&v7.?, v2); /*0x77dbde*/
      v3 = ToWideStringCharAlt((char **)&v7.?, (const wchar_t **)&v7.?); /*0x77dbeb*/
      String::Reassign((String *)&v7, (const char **)v3); /*0x77dbf5*/
      DeleteAndZero((ObjectClass *)&v7.?); /*0x77dbfe*/
      DeleteAndZero::Alt((DeleteAndZero *)&v7.?); /*0x77dc07*/
    }
    else
    {
      PlayerTypeString = (const char **)GetPlayerTypeString((String *)&v7.?, v2); /*0x77dc14*/
      String::Reassign((String *)&v7, PlayerTypeString); /*0x77dc1e*/
      DeleteAndZero((ObjectClass *)&v7.?); /*0x77dc27*/
    }
    v5 = String::GetOrEmpty((String *)&v7); /*0x77dc35*/
    strncat((char *)&v7.?, v5, 0x100u); /*0x77dc40*/
    strncat((char *)&v7.?, Str, 0x100u); /*0x77dc54*/
    DeleteAndZero(&v7); /*0x77dc60*/
    ++v1; /*0x77dc65*/
  }
  while ( (int)v1 < (int)&dword_A8DAB0 ); /*0x77dc6e*/
  return (*(int (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 60))(ppv, &v7.?); /*0x77dc84*/
}



// ==== 0x0077DC90  OpenURLWOL  this=char*  sig=csp ====
int __fastcall OpenURLWOL(const char *a1, int a2)
{
  FILE *v4; // esi
  HINSTANCE ExecutableA; // esi
  wchar_t *v6; // eax
  int result; // eax
  HANDLE hProcess; // ebx
  int v9; // esi
  int v10; // esi
  wchar_t *StringCSF; // eax
  DWORD ExitCode; // [esp+10h] [ebp-310h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+14h] [ebp-30Ch] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+24h] [ebp-2FCh] BYREF
  CHAR File[160]; // [esp+68h] [ebp-2B8h] BYREF
  CHAR Result[264]; // [esp+108h] [ebp-218h] BYREF
  CHAR CommandLine[272]; // [esp+210h] [ebp-110h] BYREF

  tmpnam(File); /*0x77dca3*/
  strcat(File, aHtml); /*0x77dcd2*/
  v4 = fopen(File, aW); /*0x77dce5*/
  fprintf(v4, "<title>Hi there.</title>"); /*0x77dced*/
  fclose(v4); /*0x77dcf3*/
  ExecutableA = FindExecutableA(File, 0, Result); /*0x77dd10*/
  _unlink(File); /*0x77dd17*/
  if ( (int)ExecutableA <= 32 ) /*0x77dd22*/
  {
    StringCSF = GetStringCSF(aTxtNobrowser, 0, g_Str_File_wonline_cpp, 1466); /*0x77deb0*/
    return ShowDialogConfirm(StringCSF, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x77deb9*/
  }
  else if ( a2 /*0x77dd57*/
         || (v6 = GetStringCSF(aTxtLaunchbrows, 0, g_Str_File_wonline_cpp, 1398),
             result = ShowDialogConfirm(v6, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 0),
             result == 6) )
  {
    sprintf(CommandLine, "[open] %s", a1); /*0x77dd6b*/
    memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x77dd7e*/
    StartupInfo.cb = 68; /*0x77dda6*/
    result = CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x77ddae*/
    if ( result ) /*0x77ddb6*/
    {
      result = (int)ProcessInformation.hProcess; /*0x77ddbc*/
      hProcess = ProcessInformation.hProcess; /*0x77ddc2*/
      if ( ProcessInformation.hProcess ) /*0x77ddc4*/
      {
        v9 = 0; /*0x77ddca*/
        Game::ProcessIdle(); /*0x77ddcc*/
        WaitForInputIdle(hProcess, 0x1388u); /*0x77ddd7*/
        do /*0x77de3f*/
        {
          Game::ProcessIdle(); /*0x77dde9*/
          Sleep(0x1F4u); /*0x77ddf3*/
          GetExitCodeProcess(hProcess, &ExitCode); /*0x77ddfb*/
          if ( ExitCode != 259 ) /*0x77de05*/
            v9 = 1; /*0x77de07*/
          if ( byte_A8ED80 || GetTopWindow(0) == g_hWnd || GetForegroundWindow() == g_hWnd ) /*0x77de31*/
            v9 = 1; /*0x77de33*/
          Game::ProcessIdle(); /*0x77de38*/
        }
        while ( !v9 ); /*0x77de3f*/
        Game::ProcessIdle(); /*0x77de41*/
        if ( GetTopWindow(0) != g_hWnd ) /*0x77de54*/
        {
          Game::ProcessIdle(); /*0x77de56*/
          SetForegroundWindow(g_hWnd); /*0x77de62*/
          ShowWindow(g_hWnd, 9); /*0x77de71*/
          Game::ProcessIdle(); /*0x77de77*/
        }
        v10 = 10; /*0x77de7c*/
        do /*0x77de8b*/
        {
          Sleep(0x64u); /*0x77de83*/
          LOBYTE(result) = Game::ProcessIdle(); /*0x77de85*/
          --v10; /*0x77de8a*/
        }
        while ( v10 ); /*0x77de8b*/
      }
    }
  }
  return result; /*0x77de8d*/
}



// ==== 0x0077DED0  ReadWOLAccountINI  this=-  sig=ida-proto ====
int sub_77DED0()
{
  int result; // eax

  dword_B76234 = INIClass::ReadInt_Overwrite( /*0x77deeb*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aAllowpage,
                   1);
  dword_B779F0 = INIClass::ReadInt_Overwrite( /*0x77df06*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aAllowfind,
                   1);
  dword_B779BC = INIClass::ReadInt_Overwrite( /*0x77df21*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aLangfilter,
                   1);
  dword_B7690C = INIClass::ReadInt_Overwrite( /*0x77df3c*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aLobmusic,
                   1);
  dword_B77784 = INIClass::ReadInt_Overwrite( /*0x77df57*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aShowall,
                   1);
  dword_B779DC = INIClass::ReadInt_Overwrite( /*0x77df72*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aDisplayasian,
                   1);
  dword_B779C0 = INIClass::ReadInt_Overwrite( /*0x77df8d*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aDisplaylatin,
                   1);
  byte_B76AF0 = INIClass::ReadBool_Overwrite( /*0x77dfa8*/
                  (int)&dword_8870C0,
                  (unsigned __int8 *)g_INI_Key_WOnline,
                  (unsigned __int8 *)aDisplaybuddies,
                  0);
  byte_B73AD0 = INIClass::ReadBool_Overwrite( /*0x77dfbe*/
                  (int)&dword_8870C0,
                  (unsigned __int8 *)g_INI_Key_WOnline,
                  (unsigned __int8 *)aDisplayclan,
                  0);
  result = INIClass::ReadInt_Overwrite( /*0x5ee1a1*/
             (int)&dword_8870C0,
             (unsigned __int8 *)aMultiplayer,
             (unsigned __int8 *)aObservermode,
             0);
  g_MenuStateFlags = result; /*0x5ee1a6*/
  return result; /*0x5ee1ab*/
}



// ==== 0x0077DFD0  SaveCCINI  this=-  sig=ida-proto ====
void sub_77DFD0()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)aRa2mdIni); /*0x77dfdc*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aAllowpage, dword_B76234, 0); /*0x77dff8*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aAllowfind, dword_B779F0, 0); /*0x77e015*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aLangfilter, dword_B779BC, 0); /*0x77e032*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aLobmusic, dword_B7690C, 0); /*0x77e04e*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aShowall, dword_B77784, 0); /*0x77e06b*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aDisplayasian, dword_B779DC, 0); /*0x77e088*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aDisplaylatin, dword_B779C0, 0); /*0x77e0a4*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aDisplaybuddies, byte_B76AF0); /*0x77e0bf*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aDisplayclan, byte_B73AD0); /*0x77e0da*/
  INIClass::WriteDigest(&dword_8870C0, (int)v0, 0); /*0x77e0eb*/
  Config::SaveObserverMode(); /*0x77e0f0*/
  RawFileClass::Dtor(v0); /*0x77e0f9*/
}



// ==== 0x0077E110  ObjectClass::RunWOLMainLoop_Find  this=ObjectClass  sig=csp ====
char RunWOLMainLoop_Find(ObjectClass *this)
{
  int v1; // eax
  int v2; // esi

  if ( ppv ) /*0x77e117*/
  {
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 124))(ppv, *(_DWORD *)g_WOL_BuddyList.__pad_C); /*0x77e123*/
    (*(void (__stdcall **)(LPVOID, int, void *))(*(_DWORD *)ppv + 104))(ppv, dword_B779F0, stru_B7622C.?); /*0x77e13c*/
  }
  Dialog::RefreshDialogsGame(0); /*0x77e141*/
  if ( stru_B76900.? ) /*0x77e153*/
  {
    if ( !Theme::IsPlaying((Theme *)&unk_A83D10) ) /*0x77e15a*/
      goto LABEL_5; /*0x77e15a*/
    v2 = dword_A83D14; /*0x77e17d*/
    if ( dword_A83D14 == -1 ) /*0x77e186*/
      v2 = dword_A83D18; /*0x77e188*/
    v1 = StringList::Find((StringList *)&unk_A83D10, g_INI_Key_INTRO); /*0x77e198*/
    if ( v2 == v1 ) /*0x77e1a0*/
    {
LABEL_5:
      Theme::Stop((Theme *)&unk_A83D10, 0); /*0x77e16a*/
      LOBYTE(v1) = Theme::QueueSong((int)&unk_A83D10, -2); /*0x77e176*/
    }
  }
  else
  {
    LOBYTE(v1) = Theme::QueueSong((int)&unk_A83D10, -3); /*0x77e1c2*/
  }
  return v1; /*0x77e17b*/
}



// ==== 0x0077E1D0  ObjectClass::FillPlayerListWOL  this=ObjectClass  sig=csp ====
int __thiscall FillPlayerListWOL(ObjectClass *this)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  LRESULT v4; // edx
  LRESULT v5; // ebx
  int v6; // edi
  wchar_t *v7; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // esi
  wchar_t *v13; // eax
  void *v14; // eax
  _DWORD *v15; // [esp+Ch] [ebp-78h]
  LRESULT v16; // [esp+10h] [ebp-74h]
  _BYTE v18[108]; // [esp+18h] [ebp-6Ch] BYREF

  Current = (HWND)Dialog::GetCurrent(); /*0x77e1e1*/
  DlgItem = GetDlgItem(Current, 1342); /*0x77e1e7*/
  v4 = SendMessageA(DlgItem, 0x191u, 0x20u, (LPARAM)dword_B766C0); /*0x77e200*/
  v5 = 0; /*0x77e202*/
  v16 = v4; /*0x77e206*/
  if ( v4 ) /*0x77e20a*/
  {
    v9 = 0; /*0x77e232*/
    v15 = 0; /*0x77e23f*/
    memset(v18, 0, sizeof(v18)); /*0x77e245*/
    if ( v4 > 0 ) /*0x77e247*/
    {
      do /*0x77e2b3*/
      {
        v10 = dword_B766C0[v5]; /*0x77e24d*/
        if ( v10 >= 0 && v10 < (int)dword_B77900 ) /*0x77e25e*/
          qmemcpy(v18, (char *)dword_B77908 + 108 * v10, sizeof(v18)); /*0x77e277*/
        v11 = (_DWORD *)__2_YAPAXI_Z(0x6Cu); /*0x77e27b*/
        qmemcpy(v11, v18, 0x6Cu); /*0x77e28e*/
        v11[8] = 0; /*0x77e292*/
        if ( !v5 ) /*0x77e299*/
          v9 = v11; /*0x77e29b*/
        if ( v15 ) /*0x77e2a3*/
          v15[8] = v11; /*0x77e2a5*/
        v15 = v11; /*0x77e2a8*/
        ++v5; /*0x77e2b0*/
      }
      while ( v5 < v16 ); /*0x77e2b3*/
      if ( v9 ) /*0x77e2b7*/
      {
        v12 = *(_DWORD *)ppv; /*0x77e2bf*/
        v13 = WideString::GetOrEmpty_Alt((WideString *)this); /*0x77e2c5*/
        (*(void (__stdcall **)(LPVOID, _DWORD *, wchar_t *))(v12 + 236))(ppv, v9, v13); /*0x77e2d3*/
        do /*0x77e2e9*/
        {
          v14 = v9; /*0x77e2d9*/
          v9 = (_DWORD *)v9[8]; /*0x77e2db*/
          __3_YAXPAX_Z(v14); /*0x77e2df*/
        }
        while ( v9 ); /*0x77e2e9*/
      }
    }
    return 1; /*0x77e2ee*/
  }
  else
  {
    v6 = *(_DWORD *)ppv; /*0x77e213*/
    v7 = WideString::GetOrEmpty_Alt((WideString *)this); /*0x77e215*/
    (*(void (__stdcall **)(LPVOID, wchar_t *))(v6 + 232))(ppv, v7); /*0x77e222*/
    return 0; /*0x77e228*/
  }
}



// ==== 0x0077E300  ObjectClass::FillBuddyListExWOL  this=ObjectClass  sig=csp ====
int __thiscall FillBuddyListExWOL(ObjectClass *this)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  LRESULT v4; // edx
  LRESULT v5; // ebx
  int v6; // edi
  wchar_t *v7; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // esi
  wchar_t *v13; // eax
  void *v14; // eax
  _DWORD *v15; // [esp+Ch] [ebp-78h]
  LRESULT v16; // [esp+10h] [ebp-74h]
  _BYTE v18[108]; // [esp+18h] [ebp-6Ch] BYREF

  Current = (HWND)Dialog::GetCurrent(); /*0x77e311*/
  DlgItem = GetDlgItem(Current, 1342); /*0x77e317*/
  v4 = SendMessageA(DlgItem, 0x191u, 0x20u, (LPARAM)dword_B7381C); /*0x77e330*/
  v5 = 0; /*0x77e332*/
  v16 = v4; /*0x77e336*/
  if ( v4 ) /*0x77e33a*/
  {
    v9 = 0; /*0x77e362*/
    v15 = 0; /*0x77e36f*/
    memset(v18, 0, sizeof(v18)); /*0x77e375*/
    if ( v4 > 0 ) /*0x77e377*/
    {
      do /*0x77e3e3*/
      {
        v10 = dword_B7381C[v5]; /*0x77e37d*/
        if ( v10 >= 0 && v10 < (int)dword_B77900 ) /*0x77e38e*/
          qmemcpy(v18, (char *)dword_B77908 + 108 * v10, sizeof(v18)); /*0x77e3a7*/
        v11 = (_DWORD *)__2_YAPAXI_Z(0x6Cu); /*0x77e3ab*/
        qmemcpy(v11, v18, 0x6Cu); /*0x77e3be*/
        v11[8] = 0; /*0x77e3c2*/
        if ( !v5 ) /*0x77e3c9*/
          v9 = v11; /*0x77e3cb*/
        if ( v15 ) /*0x77e3d3*/
          v15[8] = v11; /*0x77e3d5*/
        v15 = v11; /*0x77e3d8*/
        ++v5; /*0x77e3e0*/
      }
      while ( v5 < v16 ); /*0x77e3e3*/
      if ( v9 ) /*0x77e3e7*/
      {
        v12 = *(_DWORD *)ppv; /*0x77e3ef*/
        v13 = WideString::GetOrEmpty_Alt((WideString *)this); /*0x77e3f5*/
        (*(void (__stdcall **)(LPVOID, _DWORD *, wchar_t *))(v12 + 244))(ppv, v9, v13); /*0x77e403*/
        do /*0x77e419*/
        {
          v14 = v9; /*0x77e409*/
          v9 = (_DWORD *)v9[8]; /*0x77e40b*/
          __3_YAXPAX_Z(v14); /*0x77e40f*/
        }
        while ( v9 ); /*0x77e419*/
      }
    }
    return 1; /*0x77e41e*/
  }
  else
  {
    v6 = *(_DWORD *)ppv; /*0x77e343*/
    v7 = WideString::GetOrEmpty_Alt((WideString *)this); /*0x77e345*/
    (*(void (__stdcall **)(LPVOID, wchar_t *))(v6 + 240))(ppv, v7); /*0x77e352*/
    return 0; /*0x77e358*/
  }
}



// ==== 0x0077E430  Game::EncodeGameSetupState  this=AbstractClass  sig=csp ====
void __thiscall EncodeGameSetupState(char *Buffer)
{
  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  char *v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // ebp
  int v8; // edi
  char **v9; // esi
  char *v10; // eax
  int v11; // esi
  int v12; // edi
  int *v13; // esi
  char *v14; // [esp-20h] [ebp-78h]
  int v15; // [esp-1Ch] [ebp-74h]
  int v16; // [esp-18h] [ebp-70h]
  int v17; // [esp-14h] [ebp-6Ch]
  int v18; // [esp-14h] [ebp-6Ch]
  int v19; // [esp-10h] [ebp-68h]
  int v20; // [esp-10h] [ebp-68h]
  int v21; // [esp-Ch] [ebp-64h]
  void *v22; // [esp+10h] [ebp-48h] BYREF
  void *v23; // [esp+14h] [ebp-44h] BYREF
  void *v24; // [esp+18h] [ebp-40h] BYREF
  void *v25; // [esp+1Ch] [ebp-3Ch] BYREF
  char *v26; // [esp+20h] [ebp-38h]
  void *v27; // [esp+24h] [ebp-34h]
  int v28; // [esp+28h] [ebp-30h]
  int v29; // [esp+2Ch] [ebp-2Ch]
  int Option2; // [esp+30h] [ebp-28h]
  int Option; // [esp+34h] [ebp-24h]
  int PlayerColor; // [esp+38h] [ebp-20h]
  int PlayerSide; // [esp+3Ch] [ebp-1Ch]
  int v34; // [esp+40h] [ebp-18h]
  char *v35; // [esp+44h] [ebp-14h]
  int v36; // [esp+48h] [ebp-10h] BYREF
  _DWORD v37[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v1 = Buffer; /*0x77e43a*/
  v35 = Buffer; /*0x77e440*/
  v37[2] = 0; /*0x77e444*/
  if ( &dword_A8B320 == (int *)-2 ) /*0x77e44c*/
  {
    v2 = 4; /*0x77e475*/
    v3 = String::Assign((char **)&v24, &g_INI_DefaultBuffer); /*0x77e47a*/
  }
  else
  {
    WideString::Assign((wchar_t **)&v22, (wchar_t *)&dword_A8B320 + 1); /*0x77e453*/
    v2 = 3; /*0x77e460*/
    v3 = (char **)Game_Set(&v23, &v22); /*0x77e465*/
  }
  String::AssignFromPtr((char **)&v25, (const char **)v3); /*0x77e484*/
  if ( (v2 & 4) != 0 ) /*0x77e48c*/
  {
    v2 &= ~4u; /*0x77e492*/
    DeleteAndZero(&v24); /*0x77e495*/
  }
  if ( (v2 & 2) != 0 ) /*0x77e49d*/
  {
    v2 &= ~2u; /*0x77e4a3*/
    DeleteAndZero(&v23); /*0x77e4a6*/
  }
  if ( (v2 & 1) != 0 ) /*0x77e4ae*/
    DeleteAndZero::Alt(&v22); /*0x77e4b4*/
  v21 = dword_A8BB04; /*0x77e4da*/
  v19 = (unsigned __int8)dword_A8BB08; /*0x77e4db*/
  v17 = dword_A8BB0C; /*0x77e4dc*/
  v4 = String::GetOrEmpty((char **)&v25); /*0x77e4e1*/
  sprintf( /*0x77e54e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    dword_A8ED94,
    *(_DWORD *)dword_A8EB60,
    MEMORY[0xA8B268],
    MEMORY[0xA8B25C],
    MEMORY[0xA8B270],
    (unsigned __int8)MEMORY[0xA8B262],
    (unsigned __int8)MEMORY[0xA8B263],
    (unsigned __int8)MEMORY[0xA8B264],
    (unsigned __int8)dword_A8B320,
    (unsigned __int8)MEMORY[0xA8B261],
    *(_DWORD *)stru_A8B250,
    dword_A8EB68,
    v4,
    v17,
    v19,
    v21,
    &byte_A8B8E0,
    &byte_A8BAE2);
  memset(byte_B76C24, 0, sizeof(byte_B76C24)); /*0x77e562*/
  v5 = 0; /*0x77e569*/
  v34 = dword_A8DA84; /*0x77e56d*/
  if ( dword_A8DA84 > 0 ) /*0x77e571*/
  {
    do /*0x77e6b2*/
    {
      v6 = *(_DWORD *)(dword_A8DA78 + 4 * v5); /*0x77e57c*/
      PlayerSide = SessionClass::GetPlayerSide(v6); /*0x77e588*/
      PlayerColor = SessionClass::GetPlayerColor(v6); /*0x77e593*/
      Option = SessionClass::GetOption(v6); /*0x77e59e*/
      v7 = 0; /*0x77e5a7*/
      v8 = 0; /*0x77e5a9*/
      Option2 = SessionClass::GetOption2(v6); /*0x77e5ab*/
      v28 = 0; /*0x77e5af*/
      v29 = 0; /*0x77e5b3*/
      v9 = (char **)&dword_A8DA90; /*0x77e5b7*/
      while ( 1 ) /*0x77e5c4*/
      {
        v26 = *v9; /*0x77e5c4*/
        v27 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v5)); /*0x77e5d4*/
        v10 = ToWideStringChar(v26); /*0x77e5d8*/
        if ( !_strcmpi(v27, v10) ) /*0x77e5e3*/
          break; /*0x77e5e3*/
        ++v9; /*0x77e5ef*/
        ++v8; /*0x77e5f2*/
        if ( (int)v9 >= (int)&dword_A8DAB0 ) /*0x77e5f9*/
        {
          v11 = v28; /*0x77e5fb*/
          v12 = v29; /*0x77e5ff*/
          goto LABEL_16; /*0x77e603*/
        }
      }
      Network::GetAddress((_DWORD *)(12 * v8 + 11066316), &v36, (int)v37, &v22); /*0x77e61e*/
      v11 = dword_A8DC2C[v8]; /*0x77e623*/
      v7 = v37[0]; /*0x77e62a*/
      v12 = dword_A8E230[v8]; /*0x77e62e*/
LABEL_16:
      WideString::Assign((wchar_t **)&v23, *(wchar_t **)(dword_A8DA78 + 4 * v5)); /*0x77e635*/
      ToWideStringCharAlt((char **)&v24, (const wchar_t **)&v23); /*0x77e650*/
      DeleteAndZero::Alt(&v23); /*0x77e659*/
      v20 = Option2; /*0x77e66d*/
      v18 = Option; /*0x77e672*/
      v16 = PlayerColor; /*0x77e673*/
      v15 = PlayerSide; /*0x77e674*/
      v14 = String::GetOrEmpty((char **)&v24); /*0x77e686*/
      sprintf(&byte_B76C24[strlen(byte_B76C24)], "%s,%d,%d,%d,%d,%x,%x,%x,", v14, v15, v16, v18, v20, v7, v11, v12); /*0x77e69a*/
      DeleteAndZero(&v24); /*0x77e6a6*/
      ++v5; /*0x77e6af*/
    }
    while ( v5 < v34 ); /*0x77e6b2*/
    v1 = v35; /*0x77e6b8*/
  }
  byte_B76C22[strlen(byte_B76C24) + 1] = 58; /*0x77e6cf*/
  strcat(byte_B76C24, asc_831340); /*0x77e6f3*/
  v13 = MEMORY[0xA8B2DC]; /*0x77e6fc*/
  do /*0x77e740*/
  {
    sprintf(&byte_B76C24[strlen(byte_B76C24)], aDDDDD_0, *(v13 - 24), *(v13 - 16), *(v13 - 8), *v13, v13[8]); /*0x77e72f*/
    ++v13; /*0x77e734*/
  }
  while ( (int)v13 < (int)MEMORY[0xA8B2FC] ); /*0x77e740*/
  strcat(v1, byte_B76C24); /*0x77e763*/
  DeleteAndZero(&v25); /*0x77e770*/
}



// ==== 0x0077E780  sub_77E780  this=-  sig=ida-proto ====
int sub_77E780()
{
  return CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash; /*0x77e795*/
}



// ==== 0x0077E7A0  GameConfig::BuildChecksum  this=GameConfig  sig=csp ====
int __thiscall GameConfig_BuildChecksum(char *Buffer)
{
  int v2; // ecx
  int *v3; // eax
  int v4; // esi
  char v5; // al
  unsigned __int8 v6; // al
  int Entry; // eax
  int v9; // [esp-10h] [ebp-1Ch]
  int v10; // [esp-Ch] [ebp-18h]
  int v11; // [esp-8h] [ebp-14h]
  const char *v12; // [esp-4h] [ebp-10h]

  v2 = dword_B76B1C; /*0x77e7a5*/
  if ( dword_B76B1C > 0 ) /*0x77e7ad*/
  {
    v3 = dword_B76E58; /*0x77e7af*/
    do /*0x77e7c0*/
    {
      v3 += 37; /*0x77e7b6*/
      --v2; /*0x77e7bb*/
    }
    while ( v2 ); /*0x77e7c0*/
  }
  v4 = CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash; /*0x77e7db*/
  v5 = GameOption::CheckDuplicate(&byte_A8B8E0); /*0x77e7dd*/
  v6 = Hash_Check_5E9580(v5 == 0); /*0x77e7e8*/
  v9 = Hash_Check_5E94D0(v6); /*0x77e7f8*/
  Entry = GameOptions::GetEntry(); /*0x77e7fa*/
  return sprintf(Buffer, "%d,%d,%d,%d,%d,%s", Entry, v4, v9, v10, v11, v12); /*0x77e80e*/
}



// ==== 0x0077E820  ParseStringCommaInts  this=-  sig=csp ====
void **__fastcall String_ParseCommaInts(char *String, int *a2, int *a3, int *a4, int *a5, int *a6, void **a7)
{
  char *v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  char *v16; // eax
  int v17; // eax
  char *v18; // eax

  v8 = strtok(String, Str); /*0x77e829*/
  if ( v8 ) /*0x77e833*/
    v9 = atol(v8); /*0x77e836*/
  else
    v9 = 0; /*0x77e840*/
  *a2 = v9; /*0x77e849*/
  v10 = strtok(0, Str); /*0x77e84b*/
  if ( v10 ) /*0x77e856*/
    v11 = atol(v10); /*0x77e859*/
  else
    v11 = 0; /*0x77e863*/
  *a3 = v11; /*0x77e870*/
  v12 = strtok(0, Str); /*0x77e872*/
  if ( v12 ) /*0x77e87c*/
    v13 = atol(v12); /*0x77e87f*/
  else
    v13 = 0; /*0x77e889*/
  *a4 = v13; /*0x77e896*/
  v14 = strtok(0, Str); /*0x77e898*/
  if ( v14 ) /*0x77e8a2*/
    v15 = atol(v14); /*0x77e8a5*/
  else
    v15 = 0; /*0x77e8af*/
  *a5 = v15; /*0x77e8bc*/
  v16 = strtok(0, Str); /*0x77e8be*/
  if ( v16 ) /*0x77e8c8*/
    v17 = atol(v16); /*0x77e8cb*/
  else
    v17 = 0; /*0x77e8d5*/
  *a6 = v17; /*0x77e8e2*/
  v18 = strtok(0, Str); /*0x77e8e4*/
  return String::Assign_Alt(a7, v18); /*0x77e8f6*/
}



// ==== 0x0077E900  AssignWOLPlayerSide  this=-  sig=csp ====
void __fastcall AssignWOLPlayerSide(String *a1, int a2)
{
  bool v4; // zf
  const char **v5; // eax
  HWND v6; // eax
  int owningHouseIndex; // eax
  char *v8; // ebx
  int v9; // esi
  int v10; // edi
  char *v11; // eax
  int v12; // esi
  char **v13; // eax
  char v14; // bl
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  _DWORD *v18; // ebp
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // esi
  bool v22; // [esp+13h] [ebp-81h]
  String v23; // [esp+14h] [ebp-80h] BYREF
  DeleteAndZero v24; // [esp+1Ch] [ebp-78h] BYREF
  _BYTE v25[108]; // [esp+28h] [ebp-6Ch] BYREF

  v4 = String::Length(a1) == 0; /*0x77e913*/
  v5 = (const char **)a1; /*0x77e915*/
  if ( v4 ) /*0x77e917*/
    v5 = (const char **)&g_WindowManager.__pad_EC[684]; /*0x77e919*/
  String::AssignFromPtr((String *)&v23.m_3[1], v5); /*0x77e923*/
  if ( (unsigned __int8)String::Compare((String *)&v23.m_3[1], (const char **)&g_WindowManager.__pad_EC[684]) && !a2 ) /*0x77e93c*/
  {
    v6 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x77e943*/
    EnablePlayerSlotControls(v6, 1u); /*0x77e94c*/
  }
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77e951*/
  v8 = 0; /*0x77e956*/
  v9 = 0; /*0x77e958*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x77e95c*/
  {
    v10 = 0; /*0x77e95e*/
    while ( 1 ) /*0x77e960*/
    {
      if ( v10 >= 0 && v9 < owningHouseIndex ) /*0x77e966*/
        v8 = (char *)g_WOL_UserList.nextObject + v10; /*0x77e96d*/
      v11 = String::GetOrEmpty_Alt((String *)&v23.m_3[1]); /*0x77e978*/
      if ( !_strcmpi(v11, v8 + 36) ) /*0x77e97e*/
        break; /*0x77e97e*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77e98a*/
      ++v9; /*0x77e98f*/
      v10 += 108; /*0x77e990*/
      if ( v9 >= g_WOL_UserList.owningHouseIndex ) /*0x77e995*/
        goto LABEL_16; /*0x77e995*/
    }
    if ( v9 != -1 ) /*0x77e99c*/
    {
      g_WOL_LoginObject.ambientSoundController[37 * v9] = a2; /*0x77e9a8*/
      DisplayRankingsWOL(0); /*0x77e9af*/
    }
  }
LABEL_16:
  v22 = dword_B77E4C == 1; /*0x77e9b4*/
  String::ToLowerCopy((String *)&v23.m_3[1], (char **)&v24.DeleteAndZero_field_0x04); /*0x77e9cb*/
  v12 = 0; /*0x77e9d5*/
  if ( dword_A8DA84 > 0 ) /*0x77e9d9*/
  {
    while ( 1 ) /*0x77e9e9*/
    {
      WideString::Assign((wchar_t **)&v24, (wchar_t *)dword_A8DA78[v12]); /*0x77e9e9*/
      ToWideStringCharAlt((char **)&v23, (const wchar_t **)&v24); /*0x77e9f6*/
      DeleteAndZero::Alt(&v24); /*0x77e9ff*/
      v13 = String::ToLowerCopy(&v23, (char **)&v24.DeleteAndZero_field_0x08); /*0x77ea12*/
      v14 = String::Compare((String *)v13, (const char **)&v24.DeleteAndZero_field_0x04); /*0x77ea22*/
      DeleteAndZero((ObjectClass *)&v24.DeleteAndZero_field_0x08); /*0x77ea24*/
      if ( v14 ) /*0x77ea2f*/
        break; /*0x77ea2f*/
      DeleteAndZero((ObjectClass *)&v23); /*0x77ea31*/
      if ( ++v12 >= dword_A8DA84 ) /*0x77ea3e*/
        goto LABEL_21; /*0x77ea3e*/
    }
    DeleteAndZero((ObjectClass *)&v23); /*0x77ea42*/
  }
LABEL_21:
  if ( v12 < dword_A8DA84 ) /*0x77ea4d*/
  {
    *(_DWORD *)(dword_A8DA78[v12] + 119) = a2; /*0x77ea61*/
    if ( v22 && (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) && !byte_B77DEC && v12 == 1 ) /*0x77ea92*/
    {
      v15 = g_WOL_UserList.owningHouseIndex; /*0x77ea98*/
      if ( g_WOL_UserList.owningHouseIndex == 2 ) /*0x77eaa1*/
      {
        v16 = 0; /*0x77eaac*/
        *(_DWORD *)v24.__pad_0 = 0; /*0x77eab2*/
        memset(v25, 0, sizeof(v25)); /*0x77eaba*/
        v17 = 0; /*0x77eabc*/
        for ( *(_DWORD *)v23.__pad_0 = 0; ; v16 = *(_DWORD *)v23.__pad_0 ) /*0x77eabe*/
        {
          if ( v16 >= 0 && v17 < v15 ) /*0x77eace*/
            qmemcpy(v25, (char *)g_WOL_UserList.nextObject + v16, sizeof(v25)); /*0x77eae2*/
          v18 = (_DWORD *)__2_YAPAXI_Z(0x6Cu); /*0x77eaeb*/
          v19 = *(_DWORD *)v24.__pad_0; /*0x77eaed*/
          qmemcpy(v18, v25, 0x6Cu); /*0x77eaff*/
          v20 = *(_DWORD *)v23.__pad_0; /*0x77eb01*/
          v18[8] = v19; /*0x77eb05*/
          v15 = g_WOL_UserList.owningHouseIndex; /*0x77eb08*/
          ++v17; /*0x77eb0e*/
          *(_DWORD *)v24.__pad_0 = v18; /*0x77eb14*/
          *(_DWORD *)v23.__pad_0 = v20 + 108; /*0x77eb18*/
          if ( v17 >= g_WOL_UserList.owningHouseIndex ) /*0x77eb1c*/
            break; /*0x77eb1c*/
        }
        g_WOL_GameListState = 0; /*0x77eb20*/
        g_WOL_IdleHandler = 9; /*0x77eb2a*/
        g_WOL_GameProcessState = 90; /*0x77eb34*/
        g_WOL_GameListPool = time(0); /*0x77eb43*/
        (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 72))(ppv, v18); /*0x77eb54*/
        byte_B77DEC = 1; /*0x77eb59*/
        if ( v18 ) /*0x77eb60*/
        {
          do /*0x77eb72*/
          {
            v21 = (_DWORD *)v18[8]; /*0x77eb62*/
            __3_YAXPAX_Z(v18); /*0x77eb66*/
            v18 = v21; /*0x77eb6e*/
          }
          while ( v21 ); /*0x77eb72*/
        }
      }
    }
    DisplayRankingsWOL(0); /*0x77eb78*/
  }
  DeleteAndZero((ObjectClass *)&v24.DeleteAndZero_field_0x04); /*0x77eb81*/
  DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x77eb8a*/
}



// ==== 0x0077EBA0  ObjectClass::SendMultiplayerStartSignal_Start_77EBA0  this=ObjectClass  sig=csp ====
int __thiscall SendMultiplayerStartSignal_Start_77EBA0(ObjectClass *this)
{
  bool v2; // zf
  const char **v3; // eax
  wchar_t **v4; // eax
  wchar_t **v5; // eax
  bool v6; // bl
  int v8; // edi
  int v9; // esi
  char **v10; // eax
  char v11; // bl
  int v12; // esi
  wchar_t **started; // [esp-4h] [ebp-24h]
  char *v14; // [esp+Ch] [ebp-14h] BYREF
  String v15; // [esp+10h] [ebp-10h] BYREF
  String v16; // [esp+18h] [ebp-8h] BYREF

  v2 = String::Length((String *)this) == 0; /*0x77ebad*/
  v3 = (const char **)this; /*0x77ebaf*/
  if ( v2 ) /*0x77ebb1*/
    v3 = (const char **)&g_WindowManager.__pad_EC[684]; /*0x77ebb3*/
  String::AssignFromPtr(&v15, v3); /*0x77ebbd*/
  String::ToLowerCopy(&v15, &v14); /*0x77ebcb*/
  v4 = WideString::Assign((wchar_t **)&v16.m_3[1], (wchar_t *)&stru_A8D600.Network_field_0x10); /*0x77ebde*/
  started = SendMultiplayerStartSignal_Start_77EBA0_Start_7B7740((ObjectClass *)v4, (wchar_t **)&v15.m_3[1]); /*0x77ebf2*/
  v5 = CharStringToWide((wchar_t **)&v16, (const char **)&v14); /*0x77ebf3*/
  v6 = SendMultiplayerStartSignal_Start_77EBA0_Start((ObjectClass *)v5, (const wchar_t **)started); /*0x77ec03*/
  DeleteAndZero::Alt((DeleteAndZero *)&v16); /*0x77ec05*/
  DeleteAndZero::Alt((DeleteAndZero *)&v15.m_3[1]); /*0x77ec0e*/
  DeleteAndZero::Alt((DeleteAndZero *)&v16.m_3[1]); /*0x77ec17*/
  if ( v6 ) /*0x77ec1e*/
  {
    DeleteAndZero((ObjectClass *)&v14); /*0x77ec24*/
    DeleteAndZero((ObjectClass *)&v15); /*0x77ec2d*/
    return 1; /*0x77ec32*/
  }
  else
  {
    v8 = -1; /*0x77ec43*/
    v9 = 0; /*0x77ec46*/
    if ( dword_A8DA84 <= 0 ) /*0x77ec4a*/
      goto LABEL_11; /*0x77ec4a*/
    do /*0x77ecb5*/
    {
      WideString::Assign((wchar_t **)&v15.m_3[1], (wchar_t *)dword_A8DA78[v9]); /*0x77ec5e*/
      ToWideStringCharAlt((char **)&v16, (const wchar_t **)&v15.m_3[1]); /*0x77ec6b*/
      DeleteAndZero::Alt((DeleteAndZero *)&v15.m_3[1]); /*0x77ec74*/
      v10 = String::ToLowerCopy(&v16, (char **)&v16.m_3[1]); /*0x77ec87*/
      v11 = String::Compare((String *)v10, (const char **)&v14); /*0x77ec97*/
      DeleteAndZero((ObjectClass *)&v16.m_3[1]); /*0x77ec99*/
      if ( v11 ) /*0x77eca0*/
        v8 = v9; /*0x77eca2*/
      DeleteAndZero((ObjectClass *)&v16); /*0x77eca8*/
      ++v9; /*0x77ecb2*/
    }
    while ( v9 < dword_A8DA84 ); /*0x77ecb5*/
    if ( v8 == -1 ) /*0x77ecba*/
    {
LABEL_11:
      DeleteAndZero((ObjectClass *)&v14); /*0x77ece6*/
      DeleteAndZero((ObjectClass *)&v15); /*0x77ecef*/
      return -1; /*0x77ecf4*/
    }
    else
    {
      v12 = *(_DWORD *)(dword_A8DA78[v8] + 119); /*0x77ecc4*/
      DeleteAndZero((ObjectClass *)&v14); /*0x77eccb*/
      DeleteAndZero((ObjectClass *)&v15); /*0x77ecd4*/
      return v12; /*0x77ecd9*/
    }
  }
}



// ==== 0x0077ED00  SetupLobbyPlayerSlot  this=-  sig=csp ====
int __fastcall Lobby_SetupPlayerSlot(const char **a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebp
  wchar_t **v7; // esi
  char **v8; // eax
  bool v9; // bl
  HWND v11; // esi
  int v12; // ebp
  int PlayerSide; // eax
  int ResourceID2; // ebx
  LRESULT Selected; // eax
  int ResourceID3; // eax
  int ResourceID4; // eax
  int v18; // eax
  HWND DlgItem; // eax
  int ResourceID; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  HWND v24; // eax
  int v25; // ebx
  int v26; // [esp+10h] [ebp-14h] BYREF
  void *v27; // [esp+14h] [ebp-10h] BYREF
  void *v28; // [esp+18h] [ebp-Ch] BYREF
  int v29; // [esp+1Ch] [ebp-8h]
  void *v30; // [esp+20h] [ebp-4h] BYREF

  v29 = a2; /*0x77ed0b*/
  v5 = -1; /*0x77ed10*/
  String::ToLowerCopy(a1, (char **)&v27); /*0x77ed13*/
  v6 = 0; /*0x77ed18*/
  v7 = (wchar_t **)&dword_A8DA90; /*0x77ed1a*/
  while ( 1 ) /*0x77ed26*/
  {
    WideString::Assign((wchar_t **)&v28, *v7); /*0x77ed26*/
    ToWideStringCharAlt((char **)&v26, (const wchar_t **)&v28); /*0x77ed33*/
    DeleteAndZero::Alt(&v28); /*0x77ed3c*/
    v8 = String::ToLowerCopy((const char **)&v26, (char **)&v30); /*0x77ed4a*/
    v9 = String::Compare((const char **)&v27, (const char **)v8); /*0x77ed5d*/
    DeleteAndZero(&v30); /*0x77ed5f*/
    if ( v9 ) /*0x77ed66*/
      break; /*0x77ed66*/
    DeleteAndZero((void **)&v26); /*0x77ed6c*/
    ++v7; /*0x77ed71*/
    ++v6; /*0x77ed74*/
    if ( (int)v7 >= (int)&dword_A8DAB0 ) /*0x77ed7b*/
      goto LABEL_6; /*0x77ed7b*/
  }
  v5 = v6; /*0x77ed83*/
  DeleteAndZero((void **)&v26); /*0x77ed85*/
LABEL_6:
  v26 = 0; /*0x77ed8a*/
  if ( v5 == -1 ) /*0x77ed95*/
  {
    DeleteAndZero(&v27); /*0x77ed9b*/
    return 0; /*0x77eda0*/
  }
  else
  {
    v11 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x77edb6*/
    if ( !v11 ) /*0x77edba*/
      v11 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x77edc6*/
    v12 = *(&dword_A8DA90 + v5); /*0x77edc8*/
    if ( SessionClass::GetOption(v12) != a4 ) /*0x77ede1*/
    {
      v26 = 1; /*0x77ede6*/
      SessionClass::SetOption(v12, a4); /*0x77edea*/
    }
    if ( SessionClass::GetOption2(*(&dword_A8DA90 + v5)) != a5 ) /*0x77ee01*/
    {
      v26 = 1; /*0x77ee06*/
      SessionClass::SetOption2(v12, a5); /*0x77ee0a*/
    }
    PlayerSide = SessionClass::GetPlayerSide(*(&dword_A8DA90 + v5)); /*0x77ee16*/
    if ( PlayerSide != v29 ) /*0x77ee21*/
    {
      v26 = 1; /*0x77ee2a*/
      SessionClass::SetPlayerOption(v12, v29); /*0x77ee2e*/
      ResourceID2 = GetResourceID2CSF((void *)v5); /*0x77ee3a*/
      Selected = GetComboBoxSelected(v11, ResourceID2, -1); /*0x77ee42*/
      if ( v29 == -3 ) /*0x77ee4c*/
      {
        if ( Selected != -3 ) /*0x77ee51*/
        {
          SetupComboBoxObserver(v11, ResourceID2); /*0x77ee5b*/
          ResourceID3 = GetResourceID3CSF((void *)v5); /*0x77ee62*/
          SetupComboBoxRandomAlliance(v11, ResourceID3); /*0x77ee6b*/
          ResourceID4 = GetResourceID4CSF((void *)v5); /*0x77ee72*/
          InitComboBoxNone(v11, ResourceID4); /*0x77ee7b*/
          v18 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77ee82*/
          DlgItem = GetDlgItem(v11, v18); /*0x77ee92*/
          SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x77ee99*/
          ResourceID = GetResourceIDCSF((void *)v5); /*0x77eea6*/
          FillListBox(v11, ResourceID); /*0x77eeac*/
          SetupSkirmishSpawnLocations(v11, ResourceID, 8); /*0x77eeb3*/
        }
      }
      else if ( Selected == -3 ) /*0x77eeb8*/
      {
        FillComboBoxRandomOnly(v11, ResourceID2); /*0x77eebe*/
        v21 = GetResourceID3CSF((void *)v5); /*0x77eec5*/
        FillComboBoxAllianceSlots(v11, v21); /*0x77eece*/
        v22 = GetResourceID4CSF((void *)v5); /*0x77eed5*/
        FillLobbyPlayerSlot(v11, v22); /*0x77eede*/
        v23 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77eee5*/
        v24 = GetDlgItem(v11, v23); /*0x77eef5*/
        SendMessageA(v24, 0x4F1u, 0, 0); /*0x77eefc*/
        v25 = GetResourceIDCSF((void *)v5); /*0x77ef09*/
        FillComboBoxFactions(v11, v25); /*0x77ef0f*/
        SetupSkirmishSpawnLocations(v11, v25, -2); /*0x77ef1a*/
      }
      if ( SessionClass::GetPlayerSide(v12) == -3 ) /*0x77ef29*/
        *(_DWORD *)(v12 + 107) = -1; /*0x77ef2b*/
    }
    if ( SessionClass::GetPlayerColor(*(&dword_A8DA90 + v5)) != a3 ) /*0x77ef44*/
      SessionClass::SetPlayerColor(v12, a3); /*0x77ef49*/
    if ( *(&dword_A8DA90 + v5) == *(_DWORD *)dword_A8DA78 ) /*0x77ef5d*/
      dword_A8B394 = a3; /*0x77ef5f*/
    DisplayRankingsWOL(0); /*0x77ef69*/
    DeleteAndZero(&v27); /*0x77ef72*/
    return v26; /*0x77ef77*/
  }
}



// ==== 0x0077EF90  RequestChannelList2WOL  this=-  sig=ida-proto ====
char __fastcall WOL_RequestChannelList2(int a1, unsigned __int8 a2)
{
  int v3; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  char *v8; // ebx
  void *v9; // eax
  int v10; // ebp
  void *v11; // eax
  char *v12; // ecx
  int v13; // [esp+Ch] [ebp-8h]

  v3 = a2; /*0x77ef99*/
  Debug::Log(); /*0x77efaa*/
  if ( (*(int (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 24))(ppv, a1, v3) ) /*0x77efbc*/
    return 0; /*0x77efc4*/
  v5 = dword_B76520; /*0x77efcb*/
  v6 = dword_B76520; /*0x77efd0*/
  v13 = dword_B76520; /*0x77efd4*/
  v7 = dword_B76524; /*0x77efe0*/
  if ( dword_B76520 < dword_B76524 ) /*0x77efe8*/
  {
    v8 = (char *)dword_B76528; /*0x77f05b*/
  }
  else
  {
    v7 = 2 * dword_B76520; /*0x77efee*/
    if ( 2 * dword_B76520 < 10 ) /*0x77eff4*/
      v7 = 10; /*0x77eff6*/
    v8 = (char *)__2_YAPAXI_Z(4 * v7); /*0x77f00a*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f018*/
    v9 = dword_B76528; /*0x77f021*/
    if ( dword_B76528 ) /*0x77f028*/
    {
      qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f034*/
      v9 = dword_B76528; /*0x77f036*/
      v6 = v13; /*0x77f03b*/
    }
    __3_YAXPAX_Z(v9); /*0x77f040*/
    v5 = dword_B76520; /*0x77f045*/
    dword_B76528 = v8; /*0x77f04d*/
    dword_B76524 = v7; /*0x77f053*/
  }
  if ( v5 >= v7 ) /*0x77f063*/
  {
    v10 = 2 * v5; /*0x77f065*/
    if ( 2 * v5 < 10 ) /*0x77f06b*/
      v10 = 10; /*0x77f06d*/
    v8 = (char *)__2_YAPAXI_Z(4 * v10); /*0x77f081*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f08f*/
    v11 = dword_B76528; /*0x77f098*/
    if ( dword_B76528 ) /*0x77f09f*/
    {
      qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f0ab*/
      v11 = dword_B76528; /*0x77f0ad*/
      v6 = v13; /*0x77f0b2*/
    }
    __3_YAXPAX_Z(v11); /*0x77f0b7*/
    v5 = dword_B76520; /*0x77f0bc*/
    dword_B76528 = v8; /*0x77f0c4*/
    dword_B76524 = v10; /*0x77f0ca*/
  }
  if ( v6 < v5 ) /*0x77f0d2*/
  {
    memcpy(&v8[4 * v6 + 4], &v8[4 * v6], 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f0ea*/
    v8 = (char *)dword_B76528; /*0x77f0ef*/
    v5 = dword_B76520; /*0x77f0f5*/
  }
  v12 = &v8[4 * v6]; /*0x77f0fd*/
  if ( v12 ) /*0x77f104*/
  {
    *(_DWORD *)v12 = a1; /*0x77f10a*/
    v5 = dword_B76520; /*0x77f10c*/
  }
  dword_B76520 = v5 + 1; /*0x77f113*/
  return 1; /*0x77efc3*/
}



// ==== 0x0077F120  RequestChannelListWOL  this=-  sig=ida-proto ====
char WOL_RequestChannelList()
{
  wchar_t *String; // eax
  int v1; // edi
  DWORD v2; // ebx
  wchar_t *v3; // eax
  HWND v5; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  const wchar_t *v14; // [esp+0h] [ebp-14h]
  void *v15; // [esp+10h] [ebp-4h] BYREF

  String = GetStringCSF(aTxtReqChanlist, 0, g_Str_File_wonline_cpp, 2298); /*0x77f136*/
  WideString::Assign((wchar_t **)&v15, String); /*0x77f140*/
  ShowUIMessage(0); /*0x77f150*/
  DeleteAndZero::Alt(&v15); /*0x77f159*/
  v1 = 0; /*0x77f16a*/
  while ( 1 ) /*0x77f179*/
  {
    v2 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x77f179*/
    if ( v2 == 258 ) /*0x77f181*/
      break; /*0x77f181*/
LABEL_5:
    if ( v2 == -1 ) /*0x77f1ad*/
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f227*/
      if ( v5 ) /*0x77f22e*/
      {
        dword_B77DC8 &= ~1u; /*0x77f239*/
        if ( !dword_B77DC8 ) /*0x77f23f*/
          CloseDialog(v5, 0); /*0x77f245*/
      }
      Current = Dialog::GetCurrent(); /*0x77f24a*/
      DlgItem = GetDlgItem(Current, 1344); /*0x77f255*/
      if ( DlgItem ) /*0x77f25d*/
        SetFocus(DlgItem); /*0x77f260*/
      Debug::Log(aWaitformultipl); /*0x77f26b*/
      return 0; /*0x77f27a*/
    }
    if ( (v2 & 0x80u) != 0 ) /*0x77f1b2*/
      v2 -= 128; /*0x77f1b4*/
    if ( v2 >= 0x12 ) /*0x77f1bd*/
      return 0; /*0x77f1bd*/
    ResetEvent(*(&Handles + v2)); /*0x77f1cb*/
    if ( v2 == 5 || !v2 ) /*0x77f1d8*/
    {
      v8 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f280*/
      if ( v8 ) /*0x77f287*/
      {
        dword_B77DC8 &= ~1u; /*0x77f292*/
        if ( !dword_B77DC8 ) /*0x77f298*/
          CloseDialog(v8, 0); /*0x77f29e*/
      }
      v9 = Dialog::GetCurrent(); /*0x77f2a3*/
      v10 = GetDlgItem(v9, 1344); /*0x77f2ae*/
      if ( v10 ) /*0x77f2b6*/
        SetFocus(v10); /*0x77f2b9*/
      return 0; /*0x77f2c6*/
    }
    if ( v2 == 3 ) /*0x77f1e1*/
    {
      v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f2cc*/
      if ( v11 ) /*0x77f2d3*/
      {
        dword_B77DC8 &= ~1u; /*0x77f2de*/
        if ( !dword_B77DC8 ) /*0x77f2e4*/
          CloseDialog(v11, 0); /*0x77f2ea*/
      }
      v12 = Dialog::GetCurrent(); /*0x77f2ef*/
      v13 = GetDlgItem(v12, 1344); /*0x77f2fa*/
      if ( v13 ) /*0x77f302*/
        SetFocus(v13); /*0x77f305*/
      return 1; /*0x77f30e*/
    }
  }
  while ( 1 ) /*0x77f183*/
  {
    v1 += 100; /*0x77f183*/
    if ( v1 > 30000 ) /*0x77f18c*/
      break; /*0x77f18c*/
    Game::ProcessIdle(); /*0x77f18e*/
    v2 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x77f1a0*/
    if ( v2 != 258 ) /*0x77f1a8*/
      goto LABEL_5; /*0x77f1a8*/
  }
  v3 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 2307); /*0x77f1fa*/
  swprintf(&word_B77AD0, (const size_t)v3, v14); /*0x77f205*/
  SetEvent(Handles); /*0x77f214*/
  return 0; /*0x77f21c*/
}



// ==== 0x0077F320  RequestChannelListExWOL  this=-  sig=csp ====
char __fastcall WOL_RequestChannelListEx(int a1, unsigned __int8 a2, char a3)
{
  int v3; // ebx
  char result; // al
  HANDLE *v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  void *v10; // ebx
  void *v11; // eax
  int v12; // ebp
  void *v13; // ebx
  void *v14; // eax
  _DWORD *v15; // ecx
  int v16; // [esp+10h] [ebp-8h]

  v3 = a1; /*0x77f32a*/
  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f33f*/
  {
    v6 = &Handles; /*0x77f351*/
    do /*0x77f364*/
      ResetEvent(*v6++); /*0x77f359*/
    while ( (int)v6 < (int)g_WOL_RequestObject ); /*0x77f364*/
    Debug::Log(); /*0x77f375*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)ppv + 24))(ppv, v3, a2) ) /*0x77f387*/
    {
      SetEvent(Handles); /*0x77f4fd*/
      return 0; /*0x77f503*/
    }
    else
    {
      v7 = dword_B76520; /*0x77f392*/
      v8 = dword_B76520; /*0x77f397*/
      v16 = dword_B76520; /*0x77f39b*/
      v9 = dword_B76524; /*0x77f3a5*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f3ad*/
      {
        v9 = 2 * dword_B76520; /*0x77f3b7*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f3bd*/
          v9 = 10; /*0x77f3bf*/
        v10 = __2_YAPAXI_Z(4 * v9); /*0x77f3d3*/
        memset(v10, 0, 4 * ((unsigned int)(4 * v9) >> 2)); /*0x77f3e1*/
        v11 = dword_B76528; /*0x77f3ea*/
        if ( dword_B76528 ) /*0x77f3f1*/
        {
          qmemcpy(v10, dword_B76528, 4 * dword_B76520); /*0x77f3fd*/
          v11 = dword_B76528; /*0x77f3ff*/
          v8 = v16; /*0x77f404*/
        }
        __3_YAXPAX_Z(v11); /*0x77f409*/
        v7 = dword_B76520; /*0x77f40e*/
        dword_B76528 = v10; /*0x77f413*/
        v3 = a1; /*0x77f419*/
        dword_B76524 = v9; /*0x77f420*/
      }
      if ( v7 >= v9 ) /*0x77f428*/
      {
        v12 = 2 * v7; /*0x77f42a*/
        if ( 2 * v7 < 10 ) /*0x77f430*/
          v12 = 10; /*0x77f432*/
        v13 = __2_YAPAXI_Z(4 * v12); /*0x77f446*/
        memset(v13, 0, 4 * ((unsigned int)(4 * v12) >> 2)); /*0x77f454*/
        v14 = dword_B76528; /*0x77f45d*/
        if ( dword_B76528 ) /*0x77f464*/
        {
          qmemcpy(v13, dword_B76528, 4 * dword_B76520); /*0x77f470*/
          v14 = dword_B76528; /*0x77f472*/
          v8 = v16; /*0x77f477*/
        }
        __3_YAXPAX_Z(v14); /*0x77f47c*/
        v7 = dword_B76520; /*0x77f481*/
        dword_B76528 = v13; /*0x77f486*/
        v3 = a1; /*0x77f48c*/
        dword_B76524 = v12; /*0x77f493*/
      }
      if ( v8 < v7 ) /*0x77f49b*/
      {
        memcpy((char *)dword_B76528 + 4 * v8 + 4, (char *)dword_B76528 + 4 * v8, 4 * (v7 + 0x3FFFFFFF * v8)); /*0x77f4b8*/
        v7 = dword_B76520; /*0x77f4bd*/
      }
      v15 = (char *)dword_B76528 + 4 * v8; /*0x77f4cb*/
      if ( v15 ) /*0x77f4d0*/
      {
        *v15 = v3; /*0x77f4d2*/
        v7 = dword_B76520; /*0x77f4d4*/
      }
      dword_B76520 = v7 + 1; /*0x77f4da*/
      if ( a3 ) /*0x77f4e5*/
        return RequestChannelListWOL(); /*0x77f4e7*/
      else
        return 1; /*0x77f512*/
    }
  }
  return result; /*0x77f341*/
}



// ==== 0x0077F520  sub_77F520  this=-  sig=ida-proto ====
char __fastcall sub_77F520(char a1)
{
  char result; // al
  HANDLE *v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  void *v6; // ebp
  void *v7; // eax
  int v8; // ebx
  void *v9; // ebp
  void *v10; // eax
  _DWORD *v11; // ecx
  int v13; // [esp+Eh] [ebp-4h]

  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f539*/
  {
    v2 = &Handles; /*0x77f547*/
    do /*0x77f55a*/
      ResetEvent(*v2++); /*0x77f54f*/
    while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x77f55a*/
    Debug::Log(); /*0x77f565*/
    if ( (*(int (__stdcall **)(LPVOID, _DWORD, _DWORD))(*(_DWORD *)ppv + 24))(ppv, 0, 0) ) /*0x77f579*/
    {
      SetEvent(Handles); /*0x77f6eb*/
      return 0; /*0x77f6f1*/
    }
    else
    {
      v3 = dword_B76520; /*0x77f584*/
      v4 = dword_B76520; /*0x77f589*/
      v13 = dword_B76520; /*0x77f58d*/
      v5 = dword_B76524; /*0x77f598*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f5a1*/
      {
        v5 = 2 * dword_B76520; /*0x77f5ab*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f5b1*/
          v5 = 10; /*0x77f5b3*/
        v6 = __2_YAPAXI_Z(4 * v5); /*0x77f5c7*/
        memset(v6, 0, 4 * ((unsigned int)(4 * v5) >> 2)); /*0x77f5d5*/
        v7 = dword_B76528; /*0x77f5de*/
        if ( dword_B76528 ) /*0x77f5e5*/
        {
          qmemcpy(v6, dword_B76528, 4 * dword_B76520); /*0x77f5f1*/
          v7 = dword_B76528; /*0x77f5f3*/
          v4 = v13; /*0x77f5f8*/
        }
        __3_YAXPAX_Z(v7); /*0x77f5fd*/
        v3 = dword_B76520; /*0x77f602*/
        dword_B76528 = v6; /*0x77f60a*/
        dword_B76524 = v5; /*0x77f610*/
      }
      if ( v3 >= v5 ) /*0x77f618*/
      {
        v8 = 2 * v3; /*0x77f61a*/
        if ( 2 * v3 < 10 ) /*0x77f620*/
          v8 = 10; /*0x77f622*/
        v9 = __2_YAPAXI_Z(4 * v8); /*0x77f636*/
        memset(v9, 0, 4 * ((unsigned int)(4 * v8) >> 2)); /*0x77f644*/
        v10 = dword_B76528; /*0x77f64d*/
        if ( dword_B76528 ) /*0x77f654*/
        {
          qmemcpy(v9, dword_B76528, 4 * dword_B76520); /*0x77f660*/
          v10 = dword_B76528; /*0x77f662*/
          v4 = v13; /*0x77f667*/
        }
        __3_YAXPAX_Z(v10); /*0x77f66c*/
        v3 = dword_B76520; /*0x77f671*/
        dword_B76528 = v9; /*0x77f679*/
        dword_B76524 = v8; /*0x77f67f*/
      }
      if ( v4 < v3 ) /*0x77f689*/
      {
        memcpy((char *)dword_B76528 + 4 * v4 + 4, (char *)dword_B76528 + 4 * v4, 4 * (v3 + 0x3FFFFFFF * v4)); /*0x77f6a6*/
        v3 = dword_B76520; /*0x77f6ab*/
      }
      v11 = (char *)dword_B76528 + 4 * v4; /*0x77f6b9*/
      if ( v11 ) /*0x77f6be*/
      {
        *v11 = 0; /*0x77f6c0*/
        v3 = dword_B76520; /*0x77f6c6*/
      }
      dword_B76520 = v3 + 1; /*0x77f6cc*/
      if ( a1 ) /*0x77f6d7*/
        return RequestChannelListWOL(); /*0x77f6d9*/
      else
        return 1; /*0x77f6fa*/
    }
  }
  return result; /*0x77f53b*/
}



// ==== 0x0077F710  sub_77F710  this=-  sig=ida-proto ====
char __fastcall sub_77F710(unsigned __int8 a1, char a2)
{
  char result; // al
  HANDLE *v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  void *v8; // ebp
  void *v9; // eax
  int v10; // ebx
  void *v11; // ebp
  void *v12; // eax
  _DWORD *v13; // ecx
  int v15; // [esp+10h] [ebp-4h]

  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f72c*/
  {
    v4 = &Handles; /*0x77f73b*/
    do /*0x77f74e*/
      ResetEvent(*v4++); /*0x77f743*/
    while ( (int)v4 < (int)g_WOL_RequestObject ); /*0x77f74e*/
    Debug::Log(); /*0x77f760*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)ppv + 24))(ppv, 41, a1) ) /*0x77f773*/
    {
      SetEvent(Handles); /*0x77f8e4*/
      return 0; /*0x77f8ea*/
    }
    else
    {
      v5 = dword_B76520; /*0x77f77e*/
      v6 = dword_B76520; /*0x77f783*/
      v15 = dword_B76520; /*0x77f787*/
      v7 = dword_B76524; /*0x77f791*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f79a*/
      {
        v7 = 2 * dword_B76520; /*0x77f7a4*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f7aa*/
          v7 = 10; /*0x77f7ac*/
        v8 = __2_YAPAXI_Z(4 * v7); /*0x77f7c0*/
        memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f7ce*/
        v9 = dword_B76528; /*0x77f7d7*/
        if ( dword_B76528 ) /*0x77f7de*/
        {
          qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f7ea*/
          v9 = dword_B76528; /*0x77f7ec*/
          v6 = v15; /*0x77f7f1*/
        }
        __3_YAXPAX_Z(v9); /*0x77f7f6*/
        v5 = dword_B76520; /*0x77f7fb*/
        dword_B76528 = v8; /*0x77f803*/
        dword_B76524 = v7; /*0x77f809*/
      }
      if ( v5 >= v7 ) /*0x77f811*/
      {
        v10 = 2 * v5; /*0x77f813*/
        if ( 2 * v5 < 10 ) /*0x77f819*/
          v10 = 10; /*0x77f81b*/
        v11 = __2_YAPAXI_Z(4 * v10); /*0x77f82f*/
        memset(v11, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f83d*/
        v12 = dword_B76528; /*0x77f846*/
        if ( dword_B76528 ) /*0x77f84d*/
        {
          qmemcpy(v11, dword_B76528, 4 * dword_B76520); /*0x77f859*/
          v12 = dword_B76528; /*0x77f85b*/
          v6 = v15; /*0x77f860*/
        }
        __3_YAXPAX_Z(v12); /*0x77f865*/
        v5 = dword_B76520; /*0x77f86a*/
        dword_B76528 = v11; /*0x77f872*/
        dword_B76524 = v10; /*0x77f878*/
      }
      if ( v6 < v5 ) /*0x77f881*/
      {
        memcpy((char *)dword_B76528 + 4 * v6 + 4, (char *)dword_B76528 + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f89e*/
        v5 = dword_B76520; /*0x77f8a3*/
      }
      v13 = (char *)dword_B76528 + 4 * v6; /*0x77f8b1*/
      if ( v13 ) /*0x77f8b6*/
      {
        *v13 = 41; /*0x77f8b8*/
        v5 = dword_B76520; /*0x77f8be*/
      }
      dword_B76520 = v5 + 1; /*0x77f8c4*/
      if ( a2 ) /*0x77f8cf*/
        return RequestChannelListWOL(); /*0x77f8d1*/
      else
        return 1; /*0x77f8f5*/
    }
  }
  return result; /*0x77f72e*/
}



// ==== 0x0077F900  CreateGameDialogControl::ProcessIdle  this=CreateGameDialogControl  sig=csp ====
char __thiscall Game::ProcessIdle(CreateGameDialogControl *this)
{
  signed int v1; // ebx
  int v2; // esi
  int v3; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  char *v6; // ebp
  int v7; // esi
  char *v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int j; // esi
  char *v12; // ebx
  int v13; // esi
  int v14; // ebp
  void *v15; // eax
  void *v16; // esi
  void *v17; // ebx
  char *v18; // edx
  _DWORD *v19; // eax
  _DWORD *v20; // esi
  signed int v21; // eax
  int v22; // ebp
  char **v23; // eax
  int v24; // esi
  char *v25; // eax
  int v27; // [esp+14h] [ebp-B0h]
  ObjectClass *v28; // [esp+14h] [ebp-B0h]
  String v29; // [esp+24h] [ebp-A0h] BYREF
  String v30; // [esp+2Ch] [ebp-98h] BYREF
  String v31; // [esp+34h] [ebp-90h] BYREF
  MSG Msg; // [esp+3Ch] [ebp-88h] BYREF
  struct in_addr Buffer[27]; // [esp+58h] [ebp-6Ch] BYREF

  LOBYTE(this) = 0; /*0x77f906*/
  ScreenSaver::Process((TechnoTypeClass *)this, v27); /*0x77f90c*/
  v1 = 0; /*0x77f916*/
  v2 = 0; /*0x77f918*/
  ++dword_AA0430; /*0x77f925*/
  if ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x77f92a*/
  {
    do /*0x77f95d*/
    {
      TranslateMessage(&Msg); /*0x77f944*/
      DispatchMessageA(&Msg); /*0x77f94b*/
      ++v2; /*0x77f94d*/
    }
    while ( v2 != 100 && GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ); /*0x77f95d*/
  }
  if ( (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) /*0x77f9c5*/
    && g_WOL_GameProcessState != -1
    && (unsigned int)g_WOL_IdleHandler >= 2
    && g_WOL_IdleHandler != 11
    && time(0) - g_WOL_GameListPool > (unsigned int)g_WOL_GameProcessState )
  {
    if ( g_WOL_IdleHandler == 5 ) /*0x77f9d3*/
    {
      g_WOL_GameListState = 0; /*0x77fa55*/
      g_WOL_IdleHandler = 5; /*0x77fa5b*/
      g_WOL_GameProcessState = 180; /*0x77fa65*/
      g_WOL_GameListPool = time(0); /*0x77fa77*/
    }
    else
    {
      if ( g_WOL_IdleHandler < 2 || g_WOL_IdleHandler > 4 ) /*0x77f9e1*/
      {
        StringCSF = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 2426); /*0x77fa11*/
        Dialog::ShowMessage(2146559, (size_t)StringCSF); /*0x77fa1c*/
        g_WOL_GameListState = 0; /*0x77fa22*/
        g_WOL_IdleHandler = 2; /*0x77fa28*/
        g_WOL_GameProcessState = 30; /*0x77fa2e*/
        v3 = time(0); /*0x77fa38*/
      }
      else
      {
        g_WOL_GameListState = 2; /*0x77f9e4*/
        g_WOL_IdleHandler = 0; /*0x77f9ea*/
        g_WOL_GameProcessState = -1; /*0x77f9f0*/
        v3 = time(0); /*0x77f9f6*/
      }
      g_WOL_GameListPool = v3; /*0x77fa46*/
      SetEvent(hEvent); /*0x77fa4c*/
    }
  }
  Dialog::GetCurrentType(); /*0x77fa7c*/
  if ( dword_B777A0 > 200 ) /*0x77fa8b*/
  {
    for ( i = 0; i < dword_B777A0; ++i ) /*0x77fa91*/
      DeleteAndZero((ObjectClass *)((char *)dword_B777A8 + 4 * i)); /*0x77fa9b*/
    dword_B777A0 = 0; /*0x77faaa*/
  }
  if ( dword_B76180 < (unsigned int)(time(0) - 2) && dword_B777A0 > 65 /*0x77fb0e*/
    || dword_B76180 < (unsigned int)(time(0) - 3) && dword_B777A0 > 10
    || dword_B76180 < (unsigned int)(time(0) - 15) && dword_B777A0 > 0 )
  {
    *(_DWORD *)&v29.m_3[1] = 0; /*0x77fb14*/
    *(_DWORD *)v29.__pad_0 = 0; /*0x77fb18*/
    do /*0x77fbde*/
    {
      if ( dword_B777A0 <= 0 ) /*0x77fb23*/
        break; /*0x77fb23*/
      v6 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fb30*/
      memset(v6, 0, 0x6Cu); /*0x77fb3b*/
      unknown_libname_73(&v31); /*0x77fb44*/
      v7 = dword_B777A0 - 1; /*0x77fb4e*/
      if ( dword_B777A0 - 1 >= 0 && v7 < dword_B777A0 ) /*0x77fb57*/
      {
        String::Reassign(&v31, (const char **)dword_B777A8 + v7); /*0x77fb67*/
        DynamicArray::Remove((DynamicArray *)&dword_B777A0, v7); /*0x77fb72*/
      }
      v8 = String::GetOrEmpty(&v31); /*0x77fb80*/
      if ( strlen(v8) > 9 ) /*0x77fb91*/
        v8[9] = 0; /*0x77fb93*/
      strcpy(v6 + 36, v8); /*0x77fbb1*/
      if ( v1 ) /*0x77fbbc*/
        *(_DWORD *)(v1 + 32) = v6; /*0x77fbc4*/
      else
        *(_DWORD *)&v29.m_3[1] = v6; /*0x77fbbe*/
      v1 = (signed int)v6; /*0x77fbcb*/
      DeleteAndZero((ObjectClass *)&v31); /*0x77fbcd*/
      ++*(_DWORD *)v29.__pad_0; /*0x77fbda*/
    }
    while ( *(int *)v29.__pad_0 < 10 ); /*0x77fbde*/
    if ( ppv ) /*0x77fbeb*/
      (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 192))(ppv, *(_DWORD *)&v29.m_3[1]); /*0x77fbf5*/
    v9 = *(_DWORD **)&v29.m_3[1]; /*0x77fc03*/
    if ( *(_DWORD *)&v29.m_3[1] ) /*0x77fc05*/
    {
      do /*0x77fc17*/
      {
        v10 = (_DWORD *)v9[8]; /*0x77fc07*/
        __3_YAXPAX_Z(v9); /*0x77fc0b*/
        v9 = v10; /*0x77fc13*/
      }
      while ( v10 ); /*0x77fc17*/
    }
    dword_B76180 = time(0); /*0x77fc23*/
    v1 = 0; /*0x77fc28*/
  }
  if ( dword_B765F8 > 200 ) /*0x77fc34*/
  {
    for ( j = 0; j < dword_B765F8; ++j ) /*0x77fc3a*/
      DeleteAndZero((ObjectClass *)((char *)dword_B76600 + 4 * j)); /*0x77fc45*/
    dword_B765F8 = 0; /*0x77fc54*/
  }
  if ( dword_B7617C < (unsigned int)(time(0) - 2) && dword_B765F8 > 65 /*0x77fcb8*/
    || dword_B7617C < (unsigned int)(time(0) - 3) && dword_B765F8 > 10
    || dword_B7617C < (unsigned int)(time(0) - 15) && dword_B765F8 > 0 )
  {
    *(_DWORD *)v29.__pad_0 = 0; /*0x77fcbe*/
    *(_DWORD *)&v29.m_3[1] = 0; /*0x77fcc2*/
    *(_DWORD *)v30.__pad_0 = 0; /*0x77fcc6*/
    do /*0x77fe52*/
    {
      if ( dword_B765F8 <= 0 ) /*0x77fcd1*/
        break; /*0x77fcd1*/
      v12 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fcde*/
      memset(v12, 0, 0x6Cu); /*0x77fce9*/
      *(_DWORD *)&v31.m_3[1] = v12; /*0x77fcf2*/
      unknown_libname_73(&v31); /*0x77fcf6*/
      v13 = dword_B765F8 - 1; /*0x77fd00*/
      if ( dword_B765F8 - 1 >= 0 && v13 < dword_B765F8 ) /*0x77fd0d*/
      {
        String::Reassign(&v31, (const char **)dword_B76600 + v13); /*0x77fd20*/
        if ( dword_B765F8 ) /*0x77fd2c*/
        {
          if ( v13 >= dword_B765F8 ) /*0x77fd34*/
            v13 = dword_B765F8 - 1; /*0x77fd36*/
          DeleteAndZero((ObjectClass *)((char *)dword_B76600 + 4 * v13)); /*0x77fd42*/
          memcpy( /*0x77fd6b*/
            (char *)dword_B76600 + 4 * v13,
            (char *)dword_B76600 + 4 * v13 + 4,
            4 * (dword_B765F8 + 0x3FFFFFFF * (v13 + 1)));
          --dword_B765F8; /*0x77fd7f*/
          if ( 3 * dword_B765F8 <= dword_B765FC ) /*0x77fd89*/
          {
            v14 = dword_B765FC / 2; /*0x77fd92*/
            if ( dword_B765FC / 2 < 10 ) /*0x77fd97*/
              v14 = 10; /*0x77fd99*/
            if ( v14 < dword_B765FC ) /*0x77fda0*/
            {
              v15 = (void *)__2_YAPAXI_Z(4 * v14); /*0x77fdaa*/
              v16 = dword_B76600; /*0x77fdaf*/
              v17 = v15; /*0x77fdba*/
              if ( dword_B76600 ) /*0x77fdbc*/
              {
                qmemcpy(v15, dword_B76600, 4 * dword_B765F8); /*0x77fdc6*/
                v16 = dword_B76600; /*0x77fdc8*/
              }
              __3_YAXPAX_Z(v16); /*0x77fdcf*/
              dword_B76600 = v17; /*0x77fdd4*/
              v12 = *(char **)&v31.m_3[1]; /*0x77fdda*/
              dword_B765FC = v14; /*0x77fde1*/
            }
          }
        }
      }
      v18 = String::GetOrEmpty(&v31); /*0x77fdf0*/
      if ( strlen(v18) > 9 ) /*0x77fe01*/
        v18[9] = 0; /*0x77fe03*/
      strcpy(v12 + 36, v18); /*0x77fe23*/
      if ( *(_DWORD *)&v29.m_3[1] ) /*0x77fe2e*/
        *(_DWORD *)(*(_DWORD *)&v29.m_3[1] + 32) = v12; /*0x77fe36*/
      else
        *(_DWORD *)v29.__pad_0 = v12; /*0x77fe30*/
      *(_DWORD *)&v29.m_3[1] = v12; /*0x77fe3d*/
      DeleteAndZero((ObjectClass *)&v31); /*0x77fe41*/
      ++*(_DWORD *)v30.__pad_0; /*0x77fe4e*/
    }
    while ( *(int *)v30.__pad_0 < 10 ); /*0x77fe52*/
    if ( ppv ) /*0x77fe5f*/
      (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 188))(ppv, *(_DWORD *)v29.__pad_0); /*0x77fe69*/
    v19 = *(_DWORD **)v29.__pad_0; /*0x77fe77*/
    if ( *(_DWORD *)v29.__pad_0 ) /*0x77fe79*/
    {
      do /*0x77fe8b*/
      {
        v20 = (_DWORD *)v19[8]; /*0x77fe7b*/
        __3_YAXPAX_Z(v19); /*0x77fe7f*/
        v19 = v20; /*0x77fe87*/
      }
      while ( v20 ); /*0x77fe8b*/
    }
    dword_B7617C = time(0); /*0x77fe97*/
    v1 = 0; /*0x77fe9c*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 && time(0) > dword_B7646C ) /*0x77fec1*/
  {
    dword_B7646C = time(0) + 30; /*0x77fecf*/
    Event_Process_786270(v28); /*0x77fed4*/
  }
  if ( ppv && !dword_B77DCC ) /*0x77fee8*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 12))(ppv); /*0x77feed*/
  if ( g_UIPointerTable ) /*0x77fef7*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x77fefc*/
  if ( dword_AC1174 ) /*0x77ff06*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 20))(dword_AC1174); /*0x77ff0b*/
  Event::Dispatch(); /*0x77ff0e*/
  if ( byte_B76B44 && dword_B76B10 == 41 && dword_B77E4C ) /*0x77ff2b*/
    CheckGameSettingsChanged(0, 0); /*0x77ff31*/
  if ( ppv && dword_B76B10 && dword_B77E4C && time(0) - dword_B77E6C > 10 ) /*0x77ff62*/
  {
    memset(Buffer, 0, 0x50u); /*0x77ff6f*/
    GameConfig::BuildChecksum((char *)Buffer); /*0x77ff75*/
    Buffer[10].S_un.S_un_b.s_b1 = 0; /*0x77ff83*/
    (*(void (__stdcall **)(LPVOID, struct in_addr *))(*(_DWORD *)ppv + 168))(ppv, Buffer); /*0x77ff8c*/
    dword_B77E6C = time(0); /*0x77ff9b*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x77ffa7*/
    goto LABEL_118; /*0x77ffa7*/
  if ( ppv && dword_B76B10 && time(0) - dword_B77E70 > 10 ) /*0x77ffd9*/
  {
    String::ToLowerCopy((String *)&dword_B73E40, (char **)&v30); /*0x77ffe9*/
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x780008*/
    {
      v21 = dword_B77900; /*0x78000e*/
      if ( (int)dword_B77900 > 0 ) /*0x780015*/
      {
        v22 = 0; /*0x78001b*/
        do /*0x7800b2*/
        {
          if ( v22 >= 0 && v1 < v21 ) /*0x780023*/
            qmemcpy(Buffer, (char *)dword_B77908 + v22, sizeof(Buffer)); /*0x780037*/
          String::Assign(&v29, (const char *)&Buffer[9]); /*0x780042*/
          v23 = String::ToLowerCopy(&v29, (char **)&v31.m_3[1]); /*0x780050*/
          v30.__tail_7[0] = String::Compare(&v30, (const char **)v23); /*0x780063*/
          DeleteAndZero((ObjectClass *)&v31.m_3[1]); /*0x780067*/
          if ( !v30.__tail_7[0] && Buffer[6].S_un.S_addr ) /*0x78007a*/
          {
            v24 = *(_DWORD *)g_UIPointerTable; /*0x78008c*/
            v25 = ntoainet(Buffer[6]); /*0x78008f*/
            (*(void (__stdcall **)(LPVOID, char *, int, char *))(v24 + 24))(g_UIPointerTable, v25, 1000, &v29.m_3[1]); /*0x78009b*/
          }
          DeleteAndZero((ObjectClass *)&v29); /*0x7800a2*/
          v21 = dword_B77900; /*0x7800a7*/
          ++v1; /*0x7800ac*/
          v22 += 108; /*0x7800ad*/
        }
        while ( v1 < (int)dword_B77900 ); /*0x7800b2*/
      }
    }
    dword_B77E70 = time(0); /*0x7800c7*/
    DeleteAndZero((ObjectClass *)&v30); /*0x7800cc*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x7800d8*/
  {
LABEL_118:
    if ( byte_B77E27 && !byte_B77E26 ) /*0x7800ea*/
      StartGameWOL(v28); /*0x7800ec*/
  }
  HandleWOLRematch(); /*0x7800f1*/
  return 0; /*0x7800f8*/
}



// ==== 0x00770020  Territory_WorldDominationTour::QueryInterface  this=Territory@WorldDominationTour  sig=csp ====
void **__thiscall Territory_WorldDominationTour::QueryInterface(Territory_WorldDominationTour *this, char a2)
{
  *this = (Territory_WorldDominationTour)&WorldDominationTour::Territory::`vftable'; /*0x770026*/
  DeleteAndZero((ObjectClass *)(this + 8)); /*0x77002c*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 1); /*0x770034*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x77003b*/
  if ( (a2 & 1) != 0 ) /*0x770045*/
    __3_YAXPAX_Z(this); /*0x770048*/
  return (void **)this; /*0x770052*/
}



// ==== 0x00770060  sub_770060  this=-  sig=ida-proto ====
int sub_770060()
{
  dword_B72B98 = 0; /*0x770062*/
  dword_B72B9C = 0; /*0x770067*/
  dword_B72BA0 = 0; /*0x77006c*/
  dword_B72BA4 = 0; /*0x770071*/
  return 0; /*0x770076*/
}



// ==== 0x00770080  sub_770080  this=-  sig=ida-proto ====
void sub_770080()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77008c*/
  dbl_B72BB0 = Math::Sqrt(v0 + v0); /*0x77009e*/
}



// ==== 0x007700B0  sub_7700B0  this=-  sig=ida-proto ====
void sub_7700B0()
{
  dbl_B72C00 = dbl_B72BB0 / 60.0; /*0x7700bc*/
}



// ==== 0x007700D0  sub_7700D0  this=-  sig=ida-proto ====
void sub_7700D0()
{
  dbl_B72BE8 = 1.0 / dbl_B72C00; /*0x7700dc*/
}



// ==== 0x007700F0  sub_7700F0  this=-  sig=ida-proto ====
void sub_7700F0()
{
  dbl_B72BE0 = 0.0174532925199433 * 45.0; /*0x7700fc*/
}



// ==== 0x00770110  sub_770110  this=-  sig=ida-proto ====
void sub_770110()
{
  dbl_B72BB8 = 0.0174532925199433 * 60.0; /*0x77011c*/
}



// ==== 0x00770130  sub_770130  this=-  sig=ida-proto ====
void sub_770130()
{
  dbl_B72B90 = 0.0174532925199433 * 90.0; /*0x77013c*/
}



// ==== 0x00770150  sub_770150  this=-  sig=ida-proto ====
__int64 sub_770150()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72B90 - dbl_B72BB8); /*0x770162*/
  result = Math::RoundToInt(v0 * dbl_B72BB0 * 0.5); /*0x770176*/
  dword_B72C08 = result; /*0x77017b*/
  return result; /*0x770180*/
}



// ==== 0x00770190  sub_770190  this=-  sig=ida-proto ====
void sub_770190()
{
  dbl_B72BC0 = Math::ArcTan((double)dword_B72C08 * 0.00390625); /*0x7701a7*/
}



// ==== 0x007701C0  sub_7701C0  this=-  sig=ida-proto ====
void sub_7701C0()
{
  dbl_B72BD8 = Math::ArcTan((double)(2 * dword_B72C08) / dbl_B72BB0); /*0x7701e2*/
}



// ==== 0x007701F0  sub_7701F0  this=-  sig=ida-proto ====
__int64 sub_7701F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72C08) + 0.5); /*0x77020b*/
  dword_B72BFC = result; /*0x770210*/
  return result; /*0x770216*/
}



// ==== 0x00770220  sub_770220  this=-  sig=ida-proto ====
int sub_770220()
{
  word_B72BA8 = 0; /*0x770222*/
  word_B72BAA = 0; /*0x770228*/
  return 0; /*0x77022e*/
}



// ==== 0x00770230  sub_770230  this=-  sig=ida-proto ====
int sub_770230()
{
  dword_B72BC8 = 0; /*0x770232*/
  dword_B72BCC = 0; /*0x770237*/
  dword_B72BD0 = 0; /*0x77023c*/
  return 0; /*0x770241*/
}



// ==== 0x00770250  sub_770250  this=-  sig=ida-proto ====
int sub_770250()
{
  dword_B72BF8 = 0; /*0x770255*/
  dword_B72BF0 = 128; /*0x77025f*/
  dword_B72BF4 = 128; /*0x770264*/
  return 128; /*0x770269*/
}



// ==== 0x00770270  WinsockInterface::ProcessPacket  this=WinsockInterface  sig=csp ====
char *__thiscall sub_770270(char *this, int a2)
{
  int v3; // ebp
  void **v4; // edi
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebp

  v3 = 6; /*0x77027a*/
  v4 = (void **)(this + 4); /*0x77027f*/
  *(_DWORD *)this = a2; /*0x770282*/
  v5 = (int)(this + 8); /*0x770284*/
  do /*0x7702b6*/
  {
    unknown_libname_73(v4); /*0x770289*/
    Array::ForEach(v5, 24, 6, (int (__thiscall *)(int))sub_7719E0); /*0x770298*/
    String::Assign_Alt(v4, &g_INI_DefaultBuffer); /*0x7702a4*/
    v4 += 37; /*0x7702a9*/
    v5 += 148; /*0x7702af*/
    --v3; /*0x7702b5*/
  }
  while ( v3 ); /*0x7702b6*/
  v6 = this + 892; /*0x7702b8*/
  v7 = 2; /*0x7702be*/
  do /*0x7702e2*/
  {
    VectorClassUInt::Constructor(v6, 0, 0); /*0x7702c9*/
    *v6 = &DynamicVectorClass<unsigned int>::`vftable'; /*0x7702ce*/
    v6[5] = 10; /*0x7702d4*/
    v6[4] = 0; /*0x7702db*/
    v6 += 6; /*0x7702de*/
    --v7; /*0x7702e1*/
  }
  while ( v7 ); /*0x7702e2*/
  this->u32_3AC = Timer::GetTicks(); /*0x7702f6*/
  this->u32_3B4 = 0; /*0x7702fc*/
  this->u32_EE0 = 1; /*0x770305*/
  this->u32_3BC = 0; /*0x77030c*/
  VectorClass::WstringConstructor((_DWORD *)this + 240, 0, 0); /*0x770312*/
  this->u32_3C0 = &DynamicVectorClass<Wstring>::`vftable'; /*0x770317*/
  this->u32_3D4 = 10; /*0x77031d*/
  this->u32_3D0 = 0; /*0x770324*/
  this->u32_3D8 = 0; /*0x770327*/
  Audio::GetEnabled(); /*0x77032d*/
  String::Assign((char **)&a2, aOldcycle); /*0x77033b*/
  String::Reassign((char **)this + 1, (const char **)&a2); /*0x770348*/
  DeleteAndZero((void **)&a2); /*0x770351*/
  String::Assign((char **)&a2, aHistory); /*0x77035f*/
  String::Reassign((char **)this + 38, (const char **)&a2); /*0x77036f*/
  DeleteAndZero((void **)&a2); /*0x770378*/
  String::Assign((char **)&a2, aStatus); /*0x770386*/
  String::Reassign((char **)this + 75, (const char **)&a2); /*0x770396*/
  DeleteAndZero((void **)&a2); /*0x77039f*/
  String::Assign((char **)&a2, aTerritory); /*0x7703ad*/
  String::Reassign((char **)this + 112, (const char **)&a2); /*0x7703bd*/
  DeleteAndZero((void **)&a2); /*0x7703c6*/
  String::Assign((char **)&a2, aGame); /*0x7703d4*/
  String::Reassign((char **)this + 149, (const char **)&a2); /*0x7703e4*/
  DeleteAndZero((void **)&a2); /*0x7703ed*/
  String::Assign((char **)&a2, aEvacuate); /*0x7703fb*/
  String::Reassign((char **)this + 186, (const char **)&a2); /*0x77040b*/
  DeleteAndZero((void **)&a2); /*0x770414*/
  return this; /*0x77041b*/
}



// ==== 0x00770430  ObjectClass::System_Init  this=ObjectClass  sig=csp ====
void __thiscall System_Init_770430(TechnoClass *this)
{
  AudioSample *v2; // ecx
  int *v3; // eax
  int *v4; // esi
  int *v5; // esi
  int v6; // ebp
  void *v7; // eax
  ObjectClass *v8; // esi
  int v9; // ebx
  int *v10; // edi
  int v11; // [esp+10h] [ebp-8h]

  if ( *(int *)this->isUseless > 0 ) /*0x770440*/
  {
    StopThemeClass(1); /*0x770444*/
    (*(void (__thiscall **)(int *))(this->targetLaserTimer[1] + 12))(&this->targetLaserTimer[1]); /*0x770455*/
  }
  this->secondaryFacing[3] = Timer::GetTicks(); /*0x770469*/
  this->secondaryFacing[4] = v11; /*0x77046f*/
  this->secondaryFacing[5] = 0; /*0x770472*/
  v2 = (AudioSample *)this->turretRecoil[0]; /*0x770475*/
  if ( v2 ) /*0x77047d*/
    AudioSample::Destructor(v2); /*0x77047f*/
  v3 = (int *)this->targetLaserTimer[2]; /*0x770484*/
  this->targetLaserTimer[1] = (int)&VectorClass<Wstring>::`vftable'; /*0x77048a*/
  if ( v3 && this->isSinking[0] ) /*0x770498*/
  {
    v4 = v3 - 1; /*0x7704a7*/
    Array::ForEachReverse(v3, 4, *(v3 - 1), (int (__thiscall *)(int))DeleteAndZero); /*0x7704b3*/
    __3_YAXPAX_Z(v4); /*0x7704b9*/
    this->targetLaserTimer[2] = 0; /*0x7704c1*/
  }
  this->isSinking[0] = 0; /*0x7704c8*/
  *(_DWORD *)this->unknown_short_3C8 = 0; /*0x7704ce*/
  v5 = &this->secondaryFacing[3]; /*0x7704d4*/
  v6 = 2; /*0x7704da*/
  do /*0x770507*/
  {
    v7 = (void *)*(v5 - 5); /*0x7704df*/
    v5 -= 6; /*0x7704e2*/
    *v5 = (int)&VectorClass<unsigned int>::`vftable'; /*0x7704e7*/
    if ( v7 && *((_BYTE *)v5 + 13) ) /*0x7704ef*/
    {
      __3_YAXPAX_Z(v7); /*0x7704f5*/
      v5[1] = 0; /*0x7704fd*/
    }
    --v6; /*0x770500*/
    *((_BYTE *)v5 + 13) = 0; /*0x770501*/
    v5[2] = 0; /*0x770504*/
  }
  while ( v6 ); /*0x770507*/
  v8 = (ObjectClass *)&this->barrelFacing[3]; /*0x770509*/
  v9 = 6; /*0x77050f*/
  v10 = &this->barrelFacing[4]; /*0x770515*/
  do /*0x77053b*/
  {
    v10 -= 37; /*0x77051d*/
    v8 = (ObjectClass *)((char *)v8 - 148); /*0x770528*/
    Array::ForEachReverse(v10, 24, 6, (int (__thiscall *)(int))sub_771A00); /*0x77052e*/
    DeleteAndZero(v8); /*0x770535*/
    --v9; /*0x77053a*/
  }
  while ( v9 ); /*0x77053b*/
}



// ==== 0x00770550  Animation::LoadSidebarAnimations  this=Animation  sig=csp ====
void __thiscall Animation::LoadSidebarAnimations(Animation *this, _DWORD *a2, int a3)
{
  char **v3; // ebx
  INIClass *v4; // ebp
  INIClass *v5; // edi
  void *v6; // esi
  char **v7; // eax
  int i; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  char **v14; // eax
  int j; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  Animation *v22; // [esp+10h] [ebp-10h]
  String v23; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+1Ch] [ebp-4h]

  v3 = (char **)a3; /*0x770554*/
  v4 = (INIClass *)a2; /*0x770559*/
  v22 = this; /*0x77055f*/
  v5 = (INIClass *)(this + 4); /*0x770563*/
  *(_DWORD *)&v23.m_3[1] = 6; /*0x770566*/
  while ( 1 ) /*0x770574*/
  {
    v6 = *(void **)this; /*0x770574*/
    String::Assign((String *)&a3, off_83E188); /*0x77057f*/
    INIClass::ReadTokenizedPair(v5, v4, v3, v6, 0, (char **)&a3); /*0x770590*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770599*/
    String::Assign((String *)&a2, g_INI_Key_Lose); /*0x7705a7*/
    INIClass::ReadTokenizedPair(v5, v4, v3, v6, 1, (char **)&a2); /*0x7705b8*/
    DeleteAndZero((ObjectClass *)&a2); /*0x7705c1*/
    String::Assign(&v23, aDraw); /*0x7705cf*/
    INIClass::ReadTokenizedPair(v5, v4, v3, v6, 2, (char **)&v23); /*0x7705e0*/
    DeleteAndZero((ObjectClass *)&v23); /*0x7705e9*/
    v5 = (INIClass *)((char *)v5 + 148); /*0x7705f2*/
    if ( !--*(_DWORD *)&v23.m_3[1] ) /*0x7705fd*/
      break; /*0x7705fd*/
    this = v22; /*0x770570*/
  }
  String::Assign(&v23, aStartup); /*0x77060c*/
  v7 = StaticString::Factory(*(StaticString **)v22); /*0x77061c*/
  ConcatStringAlloc((char **)&v23.m_3[1], (const char **)v7, (char **)&v23); /*0x770627*/
  unknown_libname_73(&a2); /*0x770630*/
  String::Assign((String *)&a3, &g_INI_DefaultBuffer); /*0x77063e*/
  INIClass::ReadString(v4, v3, (char **)&v23.m_3[1], (char **)&a3, (int)&a2); /*0x770655*/
  DeleteAndZero((ObjectClass *)&a3); /*0x77065e*/
  (*(void (__thiscall **)(Animation *))(*(_DWORD *)&v22[892] + 12))(v22 + 892); /*0x770671*/
  unknown_libname_73(&a3); /*0x770678*/
  for ( i = String::Tokenize((String *)&a2, 0, Str, (void **)&a3); /*0x770697*/
        i != -1;
        i = String::Tokenize((String *)&a2, i, Str, (void **)&a3) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&a3); /*0x77069d*/
    v9 = *(_DWORD *)&v22[900]; /*0x7706a2*/
    v24 = v10; /*0x7706a5*/
    if ( *(_DWORD *)&v22[908] >= v9 ) /*0x7706ac*/
    {
      if ( !*(_BYTE *)&v22[905] && v9 ) /*0x7706b7*/
        continue; /*0x7706b7*/
      v11 = *(_DWORD *)&v22[912]; /*0x7706b9*/
      if ( v11 <= 0 /*0x7706c9*/
        || !(*(unsigned __int8 (__thiscall **)(Animation *, int, _DWORD))(*(_DWORD *)&v22[892] + 8))(
              v22 + 892,
              v9 + v11,
              0) )
      {
        continue; /*0x7706c9*/
      }
    }
    v12 = *(_DWORD *)&v22[908]; /*0x7706d0*/
    v13 = *(_DWORD *)&v22[896]; /*0x7706d3*/
    *(_DWORD *)&v22[908] = v12 + 1; /*0x7706d9*/
    *(_DWORD *)(v13 + 4 * v12) = v24; /*0x7706e0*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x770702*/
  DeleteAndZero((ObjectClass *)&a2); /*0x77070b*/
  DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x770714*/
  DeleteAndZero((ObjectClass *)&v23); /*0x77071d*/
  String::Assign(&v23, aTerritoryselec); /*0x77072b*/
  v14 = StaticString::Factory(*(StaticString **)v22); /*0x77073b*/
  ConcatStringAlloc((char **)&v23.m_3[1], (const char **)v14, (char **)&v23); /*0x770746*/
  unknown_libname_73(&a2); /*0x77074f*/
  String::Assign((String *)&a3, &g_INI_DefaultBuffer); /*0x77075d*/
  INIClass::ReadString(v4, v3, (char **)&v23.m_3[1], (char **)&a3, (int)&a2); /*0x770774*/
  DeleteAndZero((ObjectClass *)&a3); /*0x77077d*/
  (*(void (__thiscall **)(Animation *))(*(_DWORD *)&v22[916] + 12))(v22 + 916); /*0x770790*/
  unknown_libname_73(&a3); /*0x770797*/
  for ( j = String::Tokenize((String *)&a2, 0, Str, (void **)&a3); /*0x7707b6*/
        j != -1;
        j = String::Tokenize((String *)&a2, j, Str, (void **)&a3) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&a3); /*0x7707bc*/
    v16 = *(_DWORD *)&v22[924]; /*0x7707c1*/
    v18 = v17; /*0x7707c4*/
    if ( *(_DWORD *)&v22[932] >= v16 ) /*0x7707c9*/
    {
      if ( !*(_BYTE *)&v22[929] && v16 ) /*0x7707d4*/
        continue; /*0x7707d4*/
      v19 = *(_DWORD *)&v22[936]; /*0x7707d6*/
      if ( v19 <= 0 /*0x7707e6*/
        || !(*(unsigned __int8 (__thiscall **)(Animation *, int, _DWORD))(*(_DWORD *)&v22[916] + 8))(
              v22 + 916,
              v16 + v19,
              0) )
      {
        continue; /*0x7707e6*/
      }
    }
    v20 = *(_DWORD *)&v22[932]; /*0x7707ed*/
    v21 = *(_DWORD *)&v22[920]; /*0x7707f0*/
    *(_DWORD *)&v22[932] = v20 + 1; /*0x7707f6*/
    *(_DWORD *)(v21 + 4 * v20) = v18; /*0x7707f9*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x77081b*/
  DeleteAndZero((ObjectClass *)&a2); /*0x770824*/
  DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x77082d*/
  DeleteAndZero((ObjectClass *)&v23); /*0x770836*/
}



// ==== 0x00770850  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_770850(ObjectClass *this, _DWORD *a2, char **a3, int a4, int a5)
{
  char **v6; // eax
  int v7; // eax
  char *v8; // esi
  int i; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  char **v16; // [esp-4h] [ebp-14h]
  String v17; // [esp+8h] [ebp-8h] BYREF

  v16 = (char **)a5; /*0x77085b*/
  v6 = StaticString::Factory((StaticString *)this->AbstractClass); /*0x77085e*/
  ConcatStringAlloc((char **)&v17.m_3[1], (const char **)v6, v16); /*0x770869*/
  unknown_libname_73(&v17); /*0x770872*/
  String::Assign((String *)&a5, &g_INI_DefaultBuffer); /*0x770880*/
  INIClass::ReadString((INIClass *)a2, a3, (char **)&v17.m_3[1], (char **)&a5, (int)&v17); /*0x77089d*/
  DeleteAndZero((ObjectClass *)&a5); /*0x7708a6*/
  v7 = *((_DWORD *)this + 6 * a4 + 223); /*0x7708b2*/
  v8 = (char *)this + 24 * a4 + 892; /*0x7708b9*/
  (*(void (__thiscall **)(char *))(v7 + 12))(v8); /*0x7708c2*/
  unknown_libname_73(&a5); /*0x7708c9*/
  for ( i = String::Tokenize(&v17, 0, Str, (void **)&a5); i != -1; i = String::Tokenize(&v17, i, Str, (void **)&a5) ) /*0x7708e8*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&a5); /*0x7708ef*/
    v10 = *((_DWORD *)v8 + 2); /*0x7708f4*/
    v12 = v11; /*0x7708f7*/
    if ( *((_DWORD *)v8 + 4) >= v10 ) /*0x7708fc*/
    {
      if ( !v8[13] && v10 ) /*0x770907*/
        continue; /*0x770907*/
      v13 = *((_DWORD *)v8 + 5); /*0x770909*/
      if ( v13 <= 0 || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v8 + 8))(v8, v10 + v13, 0) ) /*0x770919*/
        continue; /*0x770919*/
    }
    v14 = *((_DWORD *)v8 + 4); /*0x770920*/
    v15 = *((_DWORD *)v8 + 1); /*0x770923*/
    *((_DWORD *)v8 + 4) = v14 + 1; /*0x770929*/
    *(_DWORD *)(v15 + 4 * v14) = v12; /*0x77092c*/
  }
  DeleteAndZero((ObjectClass *)&a5); /*0x77094f*/
  DeleteAndZero((ObjectClass *)&v17); /*0x770958*/
  DeleteAndZero((ObjectClass *)&v17.m_3[1]); /*0x770961*/
}



// ==== 0x00770970  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_770970(ObjectClass *this, int a2, int a3, void **a4)
{
  void **v4; // ebx
  void *ptr_0; // edi
  void **v6; // esi
  int v7; // eax
  int v9; // eax
  int v10; // edx
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = a4; /*0x770976*/
  ptr_0 = this->AbstractClass; /*0x77097f*/
  v6 = &this->? + 37 * a2 + 12 * a3; /*0x770990*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770996*/
  v7 = (int)v6[4]; /*0x77099b*/
  if ( v7 <= 0 ) /*0x7709a0*/
    return 0; /*0x7709a4*/
  if ( v7 == 1 ) /*0x7709ae*/
    v9 = 0; /*0x7709b0*/
  else
    v9 = Random::Range(&Randomizer_Global, 0, v7 - 1); /*0x7709bd*/
  v10 = *((_DWORD *)v6[1] + v9); /*0x7709ca*/
  if ( ptr_0 == (void *)3 ) /*0x7709cd*/
  {
    v11 = FormatStringInt((char **)&a3, v10, 2); /*0x7709d3*/
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11); /*0x7709e2*/
    String::Reassign((String *)v4, (const char **)v12); /*0x7709ea*/
    DeleteAndZero((ObjectClass *)&a2); /*0x7709f3*/
    DeleteAndZero((ObjectClass *)&a3); /*0x7709fc*/
  }
  else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2); /*0x770a0e*/
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13); /*0x770a1d*/
    String::Reassign((String *)v4, (const char **)v14); /*0x770a25*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770a2e*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770a37*/
  }
  return 1; /*0x7709a2*/
}



// ==== 0x00770A50  ObjectClass::method_770A50  this=ObjectClass  sig=csp ====
char __thiscall sub_770A50(ObjectClass *this, int a2, int a3, void **a4)
{
  void **v4; // ebx
  void *ptr_0; // edi
  void **v6; // esi
  int v7; // eax
  int v9; // eax
  int v10; // edx
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = a4; /*0x770a56*/
  ptr_0 = this->AbstractClass; /*0x770a5f*/
  v6 = &this->? + 37 * a2 + 12 * a3; /*0x770a70*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770a76*/
  v7 = (int)v6[4]; /*0x770a7b*/
  if ( v7 <= 0 ) /*0x770a80*/
    return 0; /*0x770a84*/
  if ( v7 == 1 ) /*0x770a8e*/
    v9 = 0; /*0x770a90*/
  else
    v9 = Random::Range(&Randomizer_Global, 0, v7 - 1); /*0x770a9d*/
  v10 = *((_DWORD *)v6[1] + v9); /*0x770aaa*/
  if ( ptr_0 == (void *)3 ) /*0x770aad*/
  {
    v11 = FormatStringInt((char **)&a3, v10, 2); /*0x770ab3*/
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11); /*0x770ac2*/
    String::Reassign((String *)v4, (const char **)v12); /*0x770aca*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770ad3*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770adc*/
  }
  else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2); /*0x770aee*/
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13); /*0x770afd*/
    String::Reassign((String *)v4, (const char **)v14); /*0x770b05*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770b0e*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770b17*/
  }
  return 1; /*0x770a82*/
}



// ==== 0x00770B30  ObjectClass::method_770B30  this=ObjectClass  sig=csp ====
char __thiscall sub_770B30(ObjectClass *this, int a2, void **a3)
{
  void **v3; // ebx
  void *ptr_0; // edi
  char *v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+Ch] [ebp-8h] BYREF
  void *v15; // [esp+10h] [ebp-4h] BYREF

  v3 = a3; /*0x770b38*/
  ptr_0 = this->AbstractClass; /*0x770b41*/
  v5 = (char *)this + 24 * a2 + 892; /*0x770b43*/
  DeleteAndZero::Alt2((DeleteAndZero *)a3); /*0x770b4c*/
  v6 = *((_DWORD *)v5 + 4); /*0x770b51*/
  if ( v6 <= 0 ) /*0x770b56*/
    return 0; /*0x770b5a*/
  if ( v6 == 1 ) /*0x770b66*/
    v8 = 0; /*0x770b68*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x770b75*/
  v9 = *(_DWORD *)(*((_DWORD *)v5 + 1) + 4 * v8); /*0x770b82*/
  if ( ptr_0 == (void *)3 ) /*0x770b85*/
  {
    v10 = FormatStringInt((char **)&a3, v9, 2); /*0x770b8b*/
    v11 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v10); /*0x770b9a*/
    String::Reassign((String *)v3, (const char **)v11); /*0x770ba2*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770bab*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770bb4*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v15, v9, 2); /*0x770bc8*/
    v13 = ProcessStringAndCopy((char **)&v14, g_Str_WWD_Allied, v12); /*0x770bd7*/
    String::Reassign((String *)v3, (const char **)v13); /*0x770bdf*/
    DeleteAndZero((ObjectClass *)&v14); /*0x770be8*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770bf1*/
  }
  return 1; /*0x770b58*/
}



// ==== 0x00770C10  Map_Remove  this=ScoreScreen  sig=csp ====
char __fastcall sub_770C10(int a1, int a2, void **a3)
{
  char **v3; // ebx
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+Ch] [ebp-Ch] BYREF
  void *v15; // [esp+10h] [ebp-8h] BYREF
  void *v16; // [esp+14h] [ebp-4h] BYREF

  v3 = (char **)a3; /*0x770c14*/
  DeleteAndZero::Alt2(a3); /*0x770c20*/
  v6 = *(_DWORD *)(a2 + 16); /*0x770c25*/
  if ( v6 <= 0 ) /*0x770c2a*/
    return 0; /*0x770c2e*/
  if ( v6 == 1 ) /*0x770c3a*/
    v8 = 0; /*0x770c3c*/
  else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1); /*0x770c49*/
  v9 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v8); /*0x770c56*/
  if ( a1 == 3 ) /*0x770c59*/
  {
    v10 = FormatStringInt((char **)&v14, v9, 2); /*0x770c5f*/
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10); /*0x770c6e*/
    String::Reassign(v3, (const char **)v11); /*0x770c76*/
    DeleteAndZero((void **)&a3); /*0x770c7f*/
    DeleteAndZero(&v14); /*0x770c88*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v16, v9, 2); /*0x770c9c*/
    v13 = ProcessStringAndCopy((char **)&v15, g_Str_WWD_Allied, v12); /*0x770cab*/
    String::Reassign(v3, (const char **)v13); /*0x770cb3*/
    DeleteAndZero(&v15); /*0x770cbc*/
    DeleteAndZero(&v16); /*0x770cc5*/
  }
  return 1; /*0x770c2c*/
}



// ==== 0x00770CE0  Map_Remove_770CE0  this=ObjectClass  sig=csp ====
char __fastcall sub_770CE0(int a1, int a2, char **a3)
{
  char **v3; // eax
  char **v4; // eax
  char **v6; // eax
  char **v7; // eax
  void *v8; // [esp+0h] [ebp-8h] BYREF
  void *v9; // [esp+4h] [ebp-4h] BYREF

  if ( a1 == 3 ) /*0x770ce8*/
  {
    v3 = FormatStringInt((char **)&v9, a2, 2); /*0x770cee*/
    v4 = ProcessStringAndCopy((char **)&v8, g_Str_WWD_Soviet, v3); /*0x770cfd*/
    String::Reassign(a3, (const char **)v4); /*0x770d07*/
    DeleteAndZero(&v8); /*0x770d10*/
    DeleteAndZero(&v9); /*0x770d19*/
  }
  else
  {
    v6 = FormatStringInt((char **)&v8, a2, 2); /*0x770d2a*/
    v7 = ProcessStringAndCopy((char **)&v9, g_Str_WWD_Allied, v6); /*0x770d39*/
    String::Reassign(a3, (const char **)v7); /*0x770d43*/
    DeleteAndZero(&v9); /*0x770d4c*/
    DeleteAndZero(&v8); /*0x770d55*/
  }
  return 1; /*0x770d20*/
}



// ==== 0x00770D70  sub_770D70  this=-  sig=ida-proto ====
void __fastcall sub_770D70(String *a1, _DWORD *a2)
{
  int i; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // edx
  void *v11; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*a2 + 12))(a2); /*0x770d7c*/
  unknown_libname_73(&v11); /*0x770d83*/
  for ( i = String::Tokenize(a1, 0, Str, &v11); i != -1; i = String::Tokenize(a1, i, Str, &v11) ) /*0x770da0*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v11); /*0x770da7*/
    v5 = a2[2]; /*0x770dac*/
    v7 = v6; /*0x770daf*/
    if ( a2[4] >= v5 ) /*0x770db4*/
    {
      if ( !*((_BYTE *)a2 + 13) && v5 ) /*0x770dbf*/
        continue; /*0x770dbf*/
      v8 = a2[5]; /*0x770dc1*/
      if ( v8 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*a2 + 8))(a2, v5 + v8, 0) ) /*0x770dd1*/
        continue; /*0x770dd1*/
    }
    v9 = a2[4]; /*0x770dd8*/
    v10 = a2[1]; /*0x770ddb*/
    a2[4] = v9 + 1; /*0x770de1*/
    *(_DWORD *)(v10 + 4 * v9) = v7; /*0x770de4*/
  }
  DeleteAndZero((ObjectClass *)&v11); /*0x770e05*/
}



// ==== 0x00770E70  ObjectClass::method_770E70  this=ObjectClass  sig=csp ====
void __thiscall sub_770E70(ObjectClass *this, _DWORD *a2, char **a3, void *a4)
{
  void *v5; // edi
  char *v6; // [esp+10h] [ebp-4h] BYREF

  String::Assign((String *)&v6, off_83E188); /*0x770e80*/
  v5 = a4; /*0x770e85*/
  INIClass::ReadTokenizedPair((INIClass *)this, a2, a3, a4, 0, &v6); /*0x770e9d*/
  DeleteAndZero((ObjectClass *)&v6); /*0x770ea6*/
  String::Assign((String *)&a4, g_INI_Key_Lose); /*0x770eb4*/
  INIClass::ReadTokenizedPair((INIClass *)this, a2, a3, v5, 1, (char **)&a4); /*0x770ec5*/
  DeleteAndZero((ObjectClass *)&a4); /*0x770ece*/
  String::Assign((String *)&a4, aDraw); /*0x770edc*/
  INIClass::ReadTokenizedPair((INIClass *)this, a2, a3, v5, 2, (char **)&a4); /*0x770eed*/
  DeleteAndZero((ObjectClass *)&a4); /*0x770ef6*/
}



// ==== 0x00770F10  ObjectClass::method_770F10  this=ObjectClass  sig=csp ====
char __thiscall sub_770F10(ObjectClass *this, int a2, int a3, void **a4)
{
  void **v4; // edi
  void **v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+8h] [ebp-4h] BYREF

  v4 = a4; /*0x770f17*/
  v5 = &this->? + 12 * a3; /*0x770f21*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770f27*/
  v6 = (int)v5[4]; /*0x770f2c*/
  if ( v6 <= 0 ) /*0x770f31*/
    return 0; /*0x770f34*/
  if ( v6 == 1 ) /*0x770f3e*/
    v8 = 0; /*0x770f40*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x770f4d*/
  v9 = *((_DWORD *)v5[1] + v8); /*0x770f57*/
  if ( a2 == 3 ) /*0x770f61*/
  {
    v10 = FormatStringInt((char **)&a4, v9, 2); /*0x770f67*/
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10); /*0x770f76*/
    String::Reassign((String *)v4, (const char **)v11); /*0x770f7e*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770f87*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770f90*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2); /*0x770fa1*/
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12); /*0x770fb0*/
    String::Reassign((String *)v4, (const char **)v13); /*0x770fb8*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770fc1*/
    DeleteAndZero((ObjectClass *)&v14); /*0x770fca*/
  }
  return 1; /*0x770f33*/
}



// ==== 0x00770FE0  ObjectClass::method_770FE0  this=ObjectClass  sig=csp ====
char __thiscall sub_770FE0(ObjectClass *this, int a2, int a3, void **a4)
{
  void **v4; // edi
  int *v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+8h] [ebp-4h] BYREF

  v4 = a4; /*0x770fe7*/
  v5 = &this->? + 12 * a3; /*0x770ff1*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770ff7*/
  v6 = v5[4]; /*0x770ffc*/
  if ( v6 <= 0 ) /*0x771001*/
    return 0; /*0x771004*/
  if ( v6 == 1 ) /*0x77100e*/
    v8 = 0; /*0x771010*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x77101d*/
  v9 = *(_DWORD *)(v5[1] + 4 * v8); /*0x771027*/
  if ( a2 == 3 ) /*0x771031*/
  {
    v10 = FormatStringInt((char **)&a4, v9, 2); /*0x771037*/
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10); /*0x771046*/
    String::Reassign((String *)v4, (const char **)v11); /*0x77104e*/
    DeleteAndZero((ObjectClass *)&a3); /*0x771057*/
    DeleteAndZero((ObjectClass *)&a4); /*0x771060*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2); /*0x771071*/
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12); /*0x771080*/
    String::Reassign((String *)v4, (const char **)v13); /*0x771088*/
    DeleteAndZero((ObjectClass *)&a2); /*0x771091*/
    DeleteAndZero((ObjectClass *)&v14); /*0x77109a*/
  }
  return 1; /*0x771003*/
}



// ==== 0x007710B0  INIClass::ReadTokenizedPair  this=INIClass  sig=csp ====
void __thiscall INIClass::ReadTokenizedPair(INIClass *this, _DWORD *a2, char **a3, void *a4, int a5, char **a6)
{
  char **v7; // eax
  char **v8; // eax
  char *v9; // ebx
  int i; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char *v17; // esi
  int j; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  char **v26; // [esp+0h] [ebp-14h]
  char *v27; // [esp+10h] [ebp-4h] BYREF

  v26 = a6; /*0x7710be*/
  v7 = StaticString::Factory((StaticString *)a4); /*0x7710c5*/
  v8 = ConcatStringAlloc((char **)&a4, (const char **)v7, (char **)this); /*0x7710d0*/
  String::Concat((String *)v8, &v27, v26); /*0x7710d7*/
  DeleteAndZero((ObjectClass *)&a4); /*0x7710e0*/
  unknown_libname_73(&a6); /*0x7710e9*/
  String::Assign((String *)&a4, &g_INI_DefaultBuffer); /*0x7710f7*/
  INIClass::ReadString((INIClass *)a2, a3, &v27, (char **)&a4, (int)&a6); /*0x771114*/
  DeleteAndZero((ObjectClass *)&a4); /*0x77111d*/
  v9 = &this->__pad_0[48 * a5]; /*0x77112c*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)v9 + 1) + 12))(v9 + 4); /*0x771137*/
  unknown_libname_73(&a4); /*0x77113e*/
  for ( i = String::Tokenize((String *)&a6, 0, Str, &a4); i != -1; i = String::Tokenize((String *)&a6, i, Str, &a4) ) /*0x77115d*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&a4); /*0x771164*/
    v11 = *((_DWORD *)v9 + 3); /*0x771169*/
    v13 = v12; /*0x77116c*/
    if ( *((_DWORD *)v9 + 5) >= v11 ) /*0x771171*/
    {
      if ( !v9[17] && v11 ) /*0x77117c*/
        continue; /*0x77117c*/
      v14 = *((_DWORD *)v9 + 6); /*0x77117e*/
      if ( v14 <= 0 /*0x77118e*/
        || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v9 + 1) + 8))(v9 + 4, v11 + v14, 0) )
      {
        continue; /*0x77118e*/
      }
    }
    v15 = *((_DWORD *)v9 + 5); /*0x771195*/
    v16 = *((_DWORD *)v9 + 2); /*0x771198*/
    *((_DWORD *)v9 + 5) = v15 + 1; /*0x77119e*/
    *(_DWORD *)(v16 + 4 * v15) = v13; /*0x7711a1*/
  }
  DeleteAndZero((ObjectClass *)&a4); /*0x7711c4*/
  String::Append((String *)&v27, aEmphasis); /*0x7711d2*/
  String::Assign((String *)&a4, &g_INI_DefaultBuffer); /*0x7711e0*/
  INIClass::ReadString((INIClass *)a2, a3, &v27, (char **)&a4, (int)&a6); /*0x7711fd*/
  DeleteAndZero((ObjectClass *)&a4); /*0x771206*/
  v17 = v9 + 28; /*0x77120e*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)v9 + 7) + 12))(v9 + 28); /*0x771213*/
  unknown_libname_73(&a3); /*0x77121a*/
  for ( j = String::Tokenize((String *)&a6, 0, Str, (void **)&a3); /*0x771239*/
        j != -1;
        j = String::Tokenize((String *)&a6, j, Str, (void **)&a3) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&a3); /*0x77123f*/
    v19 = *((_DWORD *)v17 + 2); /*0x771244*/
    v21 = v20; /*0x771247*/
    if ( *((_DWORD *)v17 + 4) >= v19 ) /*0x77124c*/
    {
      if ( !v17[13] && v19 ) /*0x771257*/
        continue; /*0x771257*/
      v22 = *((_DWORD *)v17 + 5); /*0x771259*/
      if ( v22 <= 0 || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, v19 + v22, 0) ) /*0x771269*/
        continue; /*0x771269*/
    }
    v23 = *((_DWORD *)v17 + 4); /*0x771270*/
    v24 = *((_DWORD *)v17 + 1); /*0x771273*/
    *((_DWORD *)v17 + 4) = v23 + 1; /*0x771279*/
    *(_DWORD *)(v24 + 4 * v23) = v21; /*0x77127c*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x77129e*/
  DeleteAndZero((ObjectClass *)&a6); /*0x7712a7*/
  DeleteAndZero((ObjectClass *)&v27); /*0x7712b0*/
}



// ==== 0x007712C0  ScoreScreen::RemoveItem  this=ScoreScreen  sig=csp ====
int __thiscall ScoreScreen::RemoveItem(ScoreScreen *this, int a2, int a3, char a4, char a5, int a6)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  char *v13; // ebx
  int v14; // ecx
  ScoreScreen *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  DeleteAndZero v25; // [esp+10h] [ebp-10h] BYREF

  v7 = *((_DWORD *)this + 244); /*0x7712d5*/
  v8 = v7 - 1; /*0x7712d7*/
  if ( v7 > *((_DWORD *)this + 239) ) /*0x7712da*/
  {
    do /*0x77131c*/
    {
      v9 = *((_DWORD *)this + 244); /*0x7712dc*/
      if ( v8 < v9 ) /*0x7712e4*/
      {
        v10 = v9 - 1; /*0x7712e6*/
        v11 = v8; /*0x7712e7*/
        for ( *((_DWORD *)this + 244) = v10; v11 < *((_DWORD *)this + 244); ++v11 ) /*0x7712f1*/
          String::Reassign( /*0x771301*/
            (String *)(*((_DWORD *)this + 241) + 4 * v11),
            (const char **)(*((_DWORD *)this + 241) + 4 * v11 + 4));
      }
      v12 = v8--; /*0x771317*/
    }
    while ( v12 > *((_DWORD *)this + 239) ); /*0x77131c*/
  }
  if ( !*((_DWORD *)this + 239) ) /*0x77131e*/
    *((_BYTE *)this + 952) = 1; /*0x771328*/
  unknown_libname_73(&v25); /*0x771333*/
  v13 = &this->__pad_0[148 * a2 + 48 * a3]; /*0x771352*/
  if ( Map_Remove(*(_DWORD *)this->__pad_0, (int)(v13 + 8), (void **)&v25) )
  {
    if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77136a*/
    {
      *((_DWORD *)this + 235) = Timer::GetTicks(); /*0x771386*/
      *((_DWORD *)this + 236) = v25.DeleteAndZero_field_0x08; /*0x771390*/
      *((_DWORD *)this + 237) = a6; /*0x771393*/
    }
    v14 = *((_DWORD *)this + 242); /*0x771396*/
    v15 = this + 24; /*0x7713a2*/
    if ( *((_DWORD *)this + 244) < v14 /*0x7713c7*/
      || (*((_BYTE *)this + 973) || !v14)
      && (v16 = *((_DWORD *)this + 245), v16 > 0)
      && (*(unsigned __int8 (__thiscall **)(ScoreScreen *, int, _DWORD))(*(_DWORD *)v15->__pad_0 + 8))(
           this + 24,
           v14 + v16,
           0) )
    {
      v17 = *((_DWORD *)this + 244); /*0x7713ce*/
      *((_DWORD *)this + 244) = v17 + 1; /*0x7713d9*/
      String::Reassign((String *)(*((_DWORD *)this + 241) + 4 * v17), (const char **)&v25); /*0x7713e2*/
    }
    if ( a5 ) /*0x7713ed*/
      ++*((_DWORD *)this + 239); /*0x7713ef*/
    if ( a4 )
    {
      v18 = *(_DWORD *)this->__pad_0; /*0x771401*/
      DeleteAndZero::Alt2(&v25); /*0x771407*/
      v19 = *((_DWORD *)v13 + 12); /*0x77140c*/
      if ( v19 > 0 )
      {
        v20 = v19 == 1 ? 0 : Random::Range(&Randomizer_Global, 0, v19 - 1);
        if ( Map_Remove_770CE0(v18, *(_DWORD *)(*((_DWORD *)v13 + 9) + 4 * v20), (char **)&v25) ) /*0x77143b*/
        {
          v21 = *((_DWORD *)this + 242); /*0x771444*/
          if ( *((_DWORD *)this + 244) < v21 /*0x771469*/
            || (*((_BYTE *)this + 973) || !v21)
            && (v22 = *((_DWORD *)this + 245), v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(ScoreScreen *, int, _DWORD))(*(_DWORD *)v15->__pad_0 + 8))(
                 this + 24,
                 v21 + v22,
                 0) )
          {
            v23 = *((_DWORD *)this + 244); /*0x771470*/
            *((_DWORD *)this + 244) = v23 + 1; /*0x77147b*/
            String::Reassign((String *)(*((_DWORD *)this + 241) + 4 * v23), (const char **)&v25); /*0x771484*/
          }
          if ( a5 ) /*0x77148f*/
            ++*((_DWORD *)this + 239); /*0x771491*/
        }
      }
    }
  }
  return DeleteAndZero((ObjectClass *)&v25); /*0x7714a0*/
}



// ==== 0x007714B0  ObjectClass::TerritorySelectWDT_Delete  this=ObjectClass  sig=csp ====
void __thiscall TerritorySelectWDT_Delete(TechnoClass *this, int a2, char a3, int a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int ptr_0; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  DeleteAndZero v17; // [esp+Ch] [ebp-10h] BYREF

  v5 = *(_DWORD *)this->isUseless; /*0x7714c4*/
  v6 = v5 - 1; /*0x7714c6*/
  if ( v5 > this->targetLaserTimer[0] ) /*0x7714c9*/
  {
    do /*0x77150b*/
    {
      v7 = *(_DWORD *)this->isUseless; /*0x7714cb*/
      if ( v6 < v7 ) /*0x7714d3*/
      {
        v8 = v7 - 1; /*0x7714d5*/
        v9 = v6; /*0x7714d6*/
        for ( *(_DWORD *)this->isUseless = v8; v9 < *(_DWORD *)this->isUseless; ++v9 ) /*0x7714e0*/
          String::Reassign( /*0x7714f0*/
            (String *)(this->targetLaserTimer[2] + 4 * v9),
            (const char **)(this->targetLaserTimer[2] + 4 * v9 + 4));
      }
      v10 = v6--; /*0x771506*/
    }
    while ( v10 > this->targetLaserTimer[0] ); /*0x77150b*/
  }
  if ( !this->targetLaserTimer[0] ) /*0x77150d*/
    LOBYTE(this->currentBurstIndex) = 1; /*0x771517*/
  unknown_libname_73(&v17); /*0x771522*/
  ptr_0 = this->ptr_0; /*0x77152b*/
  DeleteAndZero::Alt2(&v17); /*0x77153b*/
  v12 = this->primaryFacing[6 * a2 + 1]; /*0x771540*/
  if ( v12 > 0 )
  {
    v13 = v12 == 1 ? 0 : Random::Range(&Randomizer_Global, 0, v12 - 1);
    if ( Map_Remove_770CE0(ptr_0, *(_DWORD *)(this->barrelFacing[6 * a2 + 4] + 4 * v13), (char **)&v17) ) /*0x77156f*/
    {
      if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77157c*/
      {
        this->secondaryFacing[3] = Timer::GetTicks(); /*0x771598*/
        this->secondaryFacing[4] = v17.DeleteAndZero_field_0x08; /*0x7715a2*/
        this->secondaryFacing[5] = a4; /*0x7715a5*/
      }
      v14 = *(_DWORD *)this->unknown_short_3C8; /*0x7715a8*/
      if ( *(_DWORD *)this->isUseless < v14 /*0x7715d9*/
        || (this->isSinking[0] || !v14)
        && (v15 = *(_DWORD *)this->isALoaner, v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->targetLaserTimer[1] + 8))(
             &this->targetLaserTimer[1],
             v14 + v15,
             0) )
      {
        v16 = *(_DWORD *)this->isUseless; /*0x7715e0*/
        *(_DWORD *)this->isUseless = v16 + 1; /*0x7715eb*/
        String::Reassign((String *)(this->targetLaserTimer[2] + 4 * v16), (const char **)&v17); /*0x7715f4*/
      }
      if ( a3 ) /*0x7715ff*/
        ++this->targetLaserTimer[0]; /*0x771601*/
    }
  }
  DeleteAndZero((ObjectClass *)&v17); /*0x77160b*/
}



// ==== 0x00771620  AudioQueue::Update  this=AudioQueue  sig=csp ====
void __thiscall AudioQueue::Update(AudioQueue *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  char *v8; // eax
  int v9; // eax

  v2 = *((_DWORD *)this + 237); /*0x77162a*/
  if ( *((_DWORD *)this + 235) == -1 ) /*0x771633*/
  {
LABEL_4:
    if ( v2 ) /*0x77164e*/
      return; /*0x77164e*/
    goto LABEL_5; /*0x77164e*/
  }
  v3 = Timer::GetTicks() - *((_DWORD *)this + 235); /*0x771640*/
  if ( v3 < v2 ) /*0x771648*/
  {
    v2 -= v3; /*0x77164a*/
    goto LABEL_4; /*0x77164a*/
  }
LABEL_5:
  if ( *((int *)this + 244) > 0 && !(unsigned __int8)Audio::IsPlaying() ) /*0x771662*/
  {
    if ( !*((_BYTE *)this + 952) ) /*0x77166f*/
    {
      v4 = *((_DWORD *)this + 244); /*0x771679*/
      if ( v4 > 0 ) /*0x771681*/
      {
        v5 = v4 - 1; /*0x771683*/
        v6 = 0; /*0x771684*/
        for ( *((_DWORD *)this + 244) = v5; v6 < *((_DWORD *)this + 244); ++v6 ) /*0x77168e*/
          String::Reassign( /*0x77169e*/
            (String *)(*((_DWORD *)this + 241) + 4 * v6),
            (const char **)(*((_DWORD *)this + 241) + 4 * v6 + 4));
      }
      v7 = *((_DWORD *)this + 239); /*0x7716ae*/
      if ( v7 > 0 ) /*0x7716b6*/
        *((_DWORD *)this + 239) = v7 - 1; /*0x7716b9*/
    }
    if ( *((int *)this + 244) <= 0 ) /*0x7716c7*/
    {
      *((_DWORD *)this + 239) = 0; /*0x7716f1*/
      *((_BYTE *)this + 952) = 1; /*0x7716fb*/
    }
    else
    {
      v8 = String::GetOrEmpty(*((String **)this + 241)); /*0x7716d1*/
      v9 = VocClass::FindByName((VocClass *)v8); /*0x7716d8*/
      UpdateThemeManager(v9, -1, -1); /*0x7716e2*/
      *((_BYTE *)this + 952) = 0; /*0x7716e7*/
    }
  }
}



// ==== 0x00771710  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_771710(TechnoClass *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int result; // eax

  v2 = *(_DWORD *)this->isUseless; /*0x771720*/
  v3 = v2 - 1; /*0x771722*/
  if ( v2 > this->targetLaserTimer[0] ) /*0x771725*/
  {
    do /*0x771768*/
    {
      v4 = *(_DWORD *)this->isUseless; /*0x771728*/
      if ( v3 < v4 ) /*0x771730*/
      {
        v5 = v4 - 1; /*0x771732*/
        v6 = v3; /*0x771733*/
        for ( *(_DWORD *)this->isUseless = v5; v6 < *(_DWORD *)this->isUseless; ++v6 ) /*0x77173d*/
          String::Reassign( /*0x77174d*/
            (String *)(this->targetLaserTimer[2] + 4 * v6),
            (const char **)(this->targetLaserTimer[2] + 4 * v6 + 4));
      }
      v7 = v3--; /*0x771763*/
    }
    while ( v7 > this->targetLaserTimer[0] ); /*0x771768*/
  }
  result = this->targetLaserTimer[0]; /*0x77176b*/
  if ( !result ) /*0x771773*/
    LOBYTE(this->currentBurstIndex) = 1; /*0x771775*/
  return result; /*0x77177c*/
}



// ==== 0x00771780  nullsub_259  this=-  sig=ida-proto ====
void nullsub_259()
{
  ; /*0x771780*/
}



// ==== 0x00771790  nullsub_260  this=-  sig=ida-proto ====
void nullsub_260()
{
  ; /*0x771790*/
}



// ==== 0x007717A0  ObjectClass::method_7717A0  this=ObjectClass  sig=csp ====
DWORD __thiscall sub_7717A0(TechnoClass *this)
{
  DWORD result; // eax
  int *v3; // esi
  int v4; // [esp+8h] [ebp-8h]

  if ( *(int *)this->isUseless > 0 ) /*0x7717ae*/
  {
    StopThemeClass(1); /*0x7717b2*/
    (*(void (__thiscall **)(int *))(this->targetLaserTimer[1] + 12))(&this->targetLaserTimer[1]); /*0x7717c3*/
  }
  result = Timer::GetTicks(); /*0x7717ca*/
  v3 = &this->secondaryFacing[3]; /*0x7717d5*/
  *v3 = result; /*0x7717db*/
  v3[1] = v4; /*0x7717dd*/
  v3[2] = 0; /*0x7717e0*/
  return result; /*0x7717e3*/
}



// ==== 0x007717F0  j_Audio_IsPlaying  this=ScoreScreen  sig=ida-proto ====
// attributes: thunk
int j_Audio_IsPlaying()
{
  return Audio::IsPlaying();
}



// ==== 0x00771800  ObjectClass::ConstructWDTSelection_Create  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ConstructWDTSelection_Create_771800(ObjectClass *this)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = __2_YAPAXI_Z(0x20u); /*0x771807*/
  v3 = (_DWORD *)v2; /*0x77180c*/
  if ( !v2 ) /*0x771815*/
    return 0; /*0x77183f*/
  *(_DWORD *)(v2 + 4) = 0; /*0x77181a*/
  *(_DWORD *)(v2 + 8) = 0; /*0x77181d*/
  *(_BYTE *)(v2 + 12) = 0; /*0x771820*/
  *(_DWORD *)(v2 + 16) = Timer::GetTicks(); /*0x771828*/
  v3[6] = 0; /*0x77182b*/
  v3[7] = this; /*0x77182e*/
  *v3 = &WorldDominationTour::Voices::Anim::`vftable'; /*0x771831*/
  return v3; /*0x771839*/
}



// ==== 0x00771850  Anim@Voices@WorldDominationTour::method  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__thiscall sub_771850(_DWORD *this, int a2)
{
  this->q004 = 0; /*0x771859*/
  this->q008 = 0; /*0x77185c*/
  this->q030 = 0; /*0x77185f*/
  this->q040 = Timer::GetTicks(); /*0x771867*/
  this->q018 = 0; /*0x77186e*/
  this->q01C = a2; /*0x771871*/
  *this = &WorldDominationTour::Voices::Anim::`vftable'; /*0x771874*/
  return this; /*0x77187c*/
}



// ==== 0x00771890  Anim@Voices@WorldDominationTour::method  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall sub_771890(_DWORD *this)
{
  *this = &WorldDominationTour::Voices::Anim::`vftable'; /*0x771890*/
  VtableStub::5CB6C0(this); /*0x771896*/
}



// ==== 0x007718A0  Anim_Voices_WorldDominationTour::AddRef  this=Anim@Voices@WorldDominationTour  sig=csp ====
char __thiscall Territory_WorldDominationTour_8::AddRef(Anim_Voices_WorldDominationTour *this, char a2)
{
  int Ticks; // eax
  int v3; // esi
  int *v4; // esi
  int v6; // [esp+4h] [ebp-8h]

  LOBYTE(Ticks) = a2; /*0x7718a0*/
  this->__pad_C[0] = a2; /*0x7718a9*/
  if ( !a2 ) /*0x7718ac*/
  {
    v3 = this->field_1C; /*0x7718af*/
    if ( *(int *)(v3 + 976) > 0 ) /*0x7718ba*/
    {
      StopThemeClass(1); /*0x7718be*/
      (*(void (__thiscall **)(int))(*(_DWORD *)(v3 + 960) + 12))(v3 + 960); /*0x7718cf*/
    }
    Ticks = Timer::GetTicks(); /*0x7718d6*/
    v4 = (int *)(v3 + 940); /*0x7718e1*/
    *v4 = Ticks; /*0x7718e7*/
    v4[1] = v6; /*0x7718e9*/
    v4[2] = 0; /*0x7718ec*/
  }
  return Ticks; /*0x7718f0*/
}



// ==== 0x00771900  Anim_Voices_WorldDominationTour::Release  this=Anim@Voices@WorldDominationTour  sig=csp ====
signed int __thiscall Territory_WorldDominationTour_8::Release(Anim_Voices_WorldDominationTour *this)
{
  signed int result; // eax
  int v3; // edi

  result = *(_DWORD *)&this->__pad_C[4]; /*0x771903*/
  if ( result != -1 ) /*0x771909*/
  {
    v3 = this->field_18; /*0x77190c*/
    result = Timer::GetTicks() - *(_DWORD *)&this->__pad_C[4]; /*0x77191c*/
    if ( result >= v3 ) /*0x771921*/
    {
      this->field_18 = 0; /*0x771934*/
      *(_DWORD *)&this->__pad_C[4] = -1; /*0x771937*/
    }
    else
    {
      *(_DWORD *)&this->__pad_C[4] = -1; /*0x771925*/
      this->field_18 = v3 - result; /*0x77192c*/
    }
  }
  return result; /*0x771930*/
}



// ==== 0x00771950  Anim_Voices_WorldDominationTour::ddtor  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8::ddtor(Anim_Voices_WorldDominationTour *this)
{
  if ( *(_DWORD *)&this->__pad_C[4] == -1 ) /*0x771957*/
    *(_DWORD *)&this->__pad_C[4] = Timer::GetTicks(); /*0x771961*/
}



// ==== 0x00771970  Anim_Voices_WorldDominationTour::Read  this=Anim@Voices@WorldDominationTour  sig=csp ====
char __thiscall Territory_WorldDominationTour_8::Read(Anim_Voices_WorldDominationTour *this, int a2, int a3)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x771973*/
  return 0; /*0x77197a*/
}



// ==== 0x00771980  Anim_Voices_WorldDominationTour::Write  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8::Write(Anim_Voices_WorldDominationTour *this, int a2, int a3)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x771983*/
}



// ==== 0x00771990  Anim_Voices_WorldDominationTour::Seek  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__stdcall Territory_WorldDominationTour_8::Seek(Anim_Voices_WorldDominationTour *this)
{
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  *(_DWORD *)this->__pad_0 = v2; /*0x77199d*/
  this->field_4 = v3; /*0x7719a3*/
  this->field_8 = v4; /*0x7719aa*/
  *(_DWORD *)this->__pad_C = v5; /*0x7719b1*/
  return this->__pad_0; /*0x7719b4*/
}



// ==== 0x007719C0  Anim_Voices_WorldDominationTour::Open  this=Anim@Voices@WorldDominationTour  sig=csp ====
BOOL Territory_WorldDominationTour_8::Open(Anim_Voices_WorldDominationTour *this)
{
  return (unsigned __int8)Audio::IsPlaying() == 0; /*0x7719ca*/
}



// ==== 0x007719D0  Anim_Voices_WorldDominationTour::Close  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8::Close(Anim_Voices_WorldDominationTour *this, int a2)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x7719d3*/
}



// ==== 0x007719E0  DynamicVectorClass_uint::sub_7719E0  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall sub_7719E0(DynamicVectorClass_uint *this)
{
  this->IsInitialized = 1; /*0x7719e2*/
  this->Items = 0; /*0x7719e6*/
  this->Capacity = 0; /*0x7719e9*/
  this->IsAllocated = 0; /*0x7719ec*/
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<unsigned int>::`vftable'; /*0x7719ef*/
  this->CapacityIncrement[0] = 10; /*0x7719f5*/
  this->Count = 0; /*0x7719fc*/
  return 0; /*0x7719ff*/
}



// ==== 0x00771A00  VectorClass::sub_771A00  this=VectorClass  sig=csp ====
void __thiscall sub_771A00(VectorClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x771a06*/
  this->ptr_0 = &VectorClass<unsigned int>::`vftable'; /*0x771a09*/
  if ( Items && this->IsAllocated ) /*0x771a13*/
  {
    __3_YAXPAX_Z(Items); /*0x771a19*/
    this->Items = 0; /*0x771a21*/
  }
  this->IsAllocated = 0; /*0x771a24*/
  this->Capacity = 0; /*0x771a27*/
}



// ==== 0x00771A30  Anim_Voices_WorldDominationTour::QueryInterface  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__thiscall Territory_WorldDominationTour_8::QueryInterface(Anim_Voices_WorldDominationTour *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::Voices::Anim::`vftable'; /*0x771a33*/
  VtableStub::5CB6C0(this); /*0x771a39*/
  if ( (a2 & 1) != 0 ) /*0x771a43*/
    __3_YAXPAX_Z(this); /*0x771a46*/
  return this->__pad_0; /*0x771a50*/
}



// ==== 0x00771A60  sub_771A60  this=-  sig=ida-proto ====
void sub_771A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x771a6c*/
  dbl_B72C30 = Math::Sqrt(v0 + v0); /*0x771a7e*/
}



// ==== 0x00771A90  sub_771A90  this=-  sig=ida-proto ====
void sub_771A90()
{
  dbl_B72C80 = dbl_B72C30 / 60.0; /*0x771a9c*/
}



// ==== 0x00771AB0  sub_771AB0  this=-  sig=ida-proto ====
void sub_771AB0()
{
  dbl_B72C68 = 1.0 / dbl_B72C80; /*0x771abc*/
}



// ==== 0x00771AD0  sub_771AD0  this=-  sig=ida-proto ====
void sub_771AD0()
{
  dbl_B72C60 = 0.0174532925199433 * 45.0; /*0x771adc*/
}



// ==== 0x00771AF0  sub_771AF0  this=-  sig=ida-proto ====
void sub_771AF0()
{
  dbl_B72C38 = 0.0174532925199433 * 60.0; /*0x771afc*/
}



// ==== 0x00771B10  sub_771B10  this=-  sig=ida-proto ====
void sub_771B10()
{
  dbl_B72C10 = 0.0174532925199433 * 90.0; /*0x771b1c*/
}



// ==== 0x00771B30  sub_771B30  this=-  sig=ida-proto ====
__int64 sub_771B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72C10 - dbl_B72C38); /*0x771b42*/
  result = Math::RoundToInt(v0 * dbl_B72C30 * 0.5); /*0x771b56*/
  dword_B72C88 = result; /*0x771b5b*/
  return result; /*0x771b60*/
}



// ==== 0x00771B70  sub_771B70  this=-  sig=ida-proto ====
void sub_771B70()
{
  dbl_B72C40 = Math::ArcTan((double)dword_B72C88 * 0.00390625); /*0x771b87*/
}



// ==== 0x00771BA0  sub_771BA0  this=-  sig=ida-proto ====
void sub_771BA0()
{
  dbl_B72C58 = Math::ArcTan((double)(2 * dword_B72C88) / dbl_B72C30); /*0x771bc2*/
}



// ==== 0x00771BD0  sub_771BD0  this=-  sig=ida-proto ====
__int64 sub_771BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72C88) + 0.5); /*0x771beb*/
  dword_B72C7C = result; /*0x771bf0*/
  return result; /*0x771bf6*/
}



// ==== 0x00771C00  sub_771C00  this=-  sig=ida-proto ====
int sub_771C00()
{
  word_B72C28 = 0; /*0x771c02*/
  word_B72C2A = 0; /*0x771c08*/
  return 0; /*0x771c0e*/
}



// ==== 0x00771C10  sub_771C10  this=-  sig=ida-proto ====
int sub_771C10()
{
  dword_B72C48 = 0; /*0x771c12*/
  dword_B72C4C = 0; /*0x771c17*/
  dword_B72C50 = 0; /*0x771c1c*/
  return 0; /*0x771c21*/
}



// ==== 0x00771C30  sub_771C30  this=-  sig=ida-proto ====
int sub_771C30()
{
  dword_B72C78 = 0; /*0x771c35*/
  dword_B72C70 = 128; /*0x771c3f*/
  dword_B72C74 = 128; /*0x771c44*/
  return 128; /*0x771c49*/
}



// ==== 0x00771C50  sub_771C50  this=-  sig=ida-proto ====
int sub_771C50()
{
  dword_B72C18 = 0; /*0x771c52*/
  dword_B72C1C = 0; /*0x771c57*/
  dword_B72C20 = 0; /*0x771c5c*/
  dword_B72C24 = 0; /*0x771c61*/
  return 0; /*0x771c66*/
}



// ==== 0x00771C70  WeaponTypeClass::Constructor  this=WeaponTypeClass  sig=csp ====
_DWORD *__thiscall WeaponTypeClass::Constructor(WeaponTypeClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x771c7a*/
  this->AmbientDamage = 0; /*0x771c87*/
  this->Burst = 1; /*0x771c8d*/
  this->Projectile = 0; /*0x771c97*/
  this->Damage = 0; /*0x771c9d*/
  this->Speed = 0; /*0x771ca3*/
  this->Warhead = 0; /*0x771ca9*/
  this->ROF = 0; /*0x771caf*/
  this->Range = 0; /*0x771cb6*/
  this->MinimumRange = 0; /*0x771cbf*/
  VectorClass::Construct((VectorClass *)this->Report, 0, 0); /*0x771cc5*/
  this->Report[5] = 10; /*0x771cca*/
  this->Report[4] = 0; /*0x771cd1*/
  this->Report[0] = (int)&TypeList<int>::`vftable'; /*0x771cd4*/
  VectorClass::Construct((VectorClass *)this->DownReport, 0, 0); /*0x771ce4*/
  this->DownReport[5] = 10; /*0x771ce9*/
  this->DownReport[4] = 0; /*0x771cf0*/
  this->DownReport[0] = (int)&TypeList<int>::`vftable'; /*0x771cf3*/
  AnimTypeVector::Constructor((AnimTypeVector *)this->Anim, 0, 0); /*0x771d03*/
  this->Anim[5] = 10; /*0x771d08*/
  this->Anim[4] = 0; /*0x771d0f*/
  this->Anim[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x771d12*/
  this->OccupantAnim = 0; /*0x771d18*/
  this->AssaultAnim = 0; /*0x771d1e*/
  this->OpenToppedAnim = 0; /*0x771d24*/
  this->AttachedParticleSystem = 0; /*0x771d2a*/
  this->LaserInnerColor[0] = 0; /*0x771d30*/
  this->LaserInnerColor[1] = 0; /*0x771d36*/
  this->LaserInnerColor[2] = 0; /*0x771d3c*/
  this->LaserOuterColor[0] = 0; /*0x771d42*/
  this->LaserOuterColor[1] = 0; /*0x771d48*/
  this->LaserOuterColor[2] = 0; /*0x771d4e*/
  this->LaserOuterSpread[0] = 0; /*0x771d54*/
  this->LaserOuterSpread[1] = 0; /*0x771d5a*/
  this->LaserOuterSpread[2] = 0; /*0x771d60*/
  this->UseFireParticles = 0; /*0x771d66*/
  this->UseSparkParticles = 0; /*0x771d6c*/
  this->OmniFire = 0; /*0x771d72*/
  this->DistributedWeaponFire = 0; /*0x771d78*/
  this->IsRailgun = 0; /*0x771d7e*/
  this->Lobber = 0; /*0x771d84*/
  this->Bright = 0; /*0x771d8a*/
  this->IsSonic = 0; /*0x771d90*/
  this->Spawner = 0; /*0x771d96*/
  this->LimboLaunch = 0; /*0x771d9c*/
  this->DecloakToFire = 1; /*0x771da2*/
  this->CellRangefinding = 0; /*0x771da9*/
  this->FireOnce = 0; /*0x771daf*/
  this->NeverUse = 0; /*0x771db5*/
  this->RevealOnFire = 1; /*0x771dbb*/
  this->TerrainFire = 0; /*0x771dc2*/
  this->SabotageCursor = 0; /*0x771dc8*/
  this->MigAttackCursor = 0; /*0x771dce*/
  this->DisguiseFireOnly = 0; /*0x771dd4*/
  this->DisguiseFakeBlinkTime = 0; /*0x771dda*/
  this->InfiniteMindControl = 0; /*0x771de0*/
  this->FireWhileMoving = 1; /*0x771de6*/
  this->DrainWeapon = 0; /*0x771ded*/
  this->FireInTransport = 1; /*0x771df3*/
  this->Suicide = 0; /*0x771dfa*/
  this->TurboBoost = 0; /*0x771e00*/
  this->Supress = 0; /*0x771e06*/
  this->Camera = 0; /*0x771e0f*/
  this->Charges = 0; /*0x771e16*/
  this->IsLaser = 0; /*0x771e1c*/
  this->DiskLaser = 0; /*0x771e22*/
  this->IsLine = 0; /*0x771e28*/
  this->IsBigLaser = 0; /*0x771e2e*/
  this->IsHouseColor = 0; /*0x771e34*/
  this->LaserDuration = 10; /*0x771e3a*/
  this->IonSensitive = 0; /*0x771e41*/
  this->AreaFire = 0; /*0x771e47*/
  this->IsElectricBolt = 0; /*0x771e4d*/
  this->DrawBoltAsLaser = 0; /*0x771e53*/
  this->IsAlternateColor = 0; /*0x771e59*/
  this->IsRadBeam = 0; /*0x771e5f*/
  this->IsRadEruption = 0; /*0x771e65*/
  this->RadLevel = 0; /*0x771e6b*/
  this->IsMagBeam = 0; /*0x771e71*/
  this->AbstractTypeClass = &WeaponTypeClass::`vftable'; /*0x771e77*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771e7d*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771e83*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771e8a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x771e91*/
  if ( g_WeaponTypePool < dword_887570 /*0x771eca*/
    || (byte_887575 || !dword_887570)
    && dword_88757C > 0
    && ((unsigned __int8 (__thiscall *)(WeaponTypeClass **, int, _DWORD))WeaponTypeClass_Array->?)(
         &WeaponTypeClass_Array,
         dword_887570 + dword_88757C,
         0) )
  {
    v3 = g_WeaponTypePool++; /*0x771ed7*/
    *((_DWORD *)g_WeaponTypeConfig + v3) = this; /*0x771ee6*/
  }
  return &this->AbstractTypeClass; /*0x771eeb*/
}



// ==== 0x00771F00  WeaponTypeClass::loadWeaponProperties  this=WeaponTypeClass  sig=csp ====
_DWORD *__thiscall WeaponTypeClass::loadWeaponProperties(WeaponTypeClass *this, int a2)
{
  AbstractTypeClass::Init((int)this, a2); /*0x771f08*/
  this->Report[0] = (int)&TypeList<int>::`vftable'; /*0x771f12*/
  this->DownReport[0] = (int)&TypeList<int>::`vftable'; /*0x771f18*/
  this->Anim[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x771f1e*/
  this->AbstractTypeClass = &WeaponTypeClass::`vftable'; /*0x771f28*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f2e*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f35*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f3c*/
  return &this->AbstractTypeClass; /*0x771f45*/
}



// ==== 0x00771F50  WeaponTypeClass::Destructor  this=WeaponTypeClass  sig=csp ====
int __thiscall WeaponTypeClass::Destructor(WeaponTypeClass *this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  WeaponTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractTypeClass = &WeaponTypeClass::`vftable'; /*0x771f57*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f5d*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f64*/
  this->? = &WeaponTypeClass::`vftable'; /*0x771f6b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x771f72*/
  this->Projectile = 0; /*0x771f7d*/
  this->Warhead = 0; /*0x771f83*/
  v7 = this; /*0x771f95*/
  v2 = ((int (__thiscall *)(WeaponTypeClass **, WeaponTypeClass **))WeaponTypeClass_Array->?)( /*0x771f99*/
         &WeaponTypeClass_Array,
         &v7);
  if ( v2 != -1 && v2 < g_WeaponTypePool && v2 < --g_WeaponTypePool ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((_DWORD *)g_WeaponTypeConfig + v2 - 1) = *((_DWORD *)g_WeaponTypeConfig + v2); /*0x771fc0*/
    }
    while ( v2 < g_WeaponTypePool ); /*0x771fcc*/
  }
  v3 = (void *)this->Anim[1]; /*0x771fce*/
  this->Anim[0] = (int)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x771fd4*/
  if ( v3 && BYTE1(this->Anim[3]) ) /*0x771fe2*/
  {
    __3_YAXPAX_Z(v3); /*0x771feb*/
    this->Anim[1] = 0; /*0x771ff3*/
  }
  BYTE1(this->Anim[3]) = 0; /*0x771ff9*/
  this->Anim[2] = 0; /*0x771fff*/
  v4 = (void *)this->DownReport[1]; /*0x772005*/
  this->DownReport[0] = (int)&VectorClass<int>::`vftable'; /*0x77200b*/
  if ( v4 && BYTE1(this->DownReport[3]) ) /*0x772019*/
  {
    __3_YAXPAX_Z(v4); /*0x772022*/
    this->DownReport[1] = 0; /*0x77202a*/
  }
  BYTE1(this->DownReport[3]) = 0; /*0x772030*/
  this->DownReport[2] = 0; /*0x772036*/
  v5 = (void *)this->Report[1]; /*0x77203c*/
  this->Report[0] = (int)&VectorClass<int>::`vftable'; /*0x772042*/
  if ( v5 && BYTE1(this->Report[3]) ) /*0x772050*/
  {
    __3_YAXPAX_Z(v5); /*0x772059*/
    this->Report[1] = 0; /*0x772061*/
  }
  BYTE1(this->Report[3]) = 0; /*0x772069*/
  this->Report[2] = 0; /*0x77206f*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x77207a*/
}



// ==== 0x00772080  WeaponTypeClass::ReadINI  this=WeaponTypeClass  sig=csp ====
char __userpurge WarheadTypeClass::ReadINI@<al>(WeaponTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  _DWORD *v5; // eax
  unsigned __int8 *inited; // eax
  int v7; // eax
  int v8; // edx
  void *v9; // eax
  _DWORD *v10; // eax
  unsigned __int8 *v11; // eax
  int v12; // eax
  char *i; // eax
  int v14; // ecx
  int v15; // edx
  void *v16; // eax
  _DWORD *v17; // ebp
  _DWORD *v18; // eax
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  _DWORD *v21; // ebp
  _DWORD *v22; // eax
  char v23; // cl
  char Bool_Overwrite; // al
  char v25; // al
  char v26; // cl
  char v27; // al
  char v28; // al
  char v29; // cl
  char v30; // al
  char v31; // al
  char v32; // cl
  char v33; // al
  char v34; // al
  char v35; // cl
  char v36; // al
  int Coord; // eax
  int v38; // eax
  int v39; // eax
  char v40; // dl
  char Int_Overwrite; // al
  char v42; // cl
  char v43; // al
  char v44; // al
  char v45; // cl
  char v46; // al
  char v47; /... [22244 chars total]



// ==== 0x007729F0  WeaponTypeClass::CalculateSpeed  this=WeaponTypeClass  sig=csp ====
int __thiscall WeaponTypeClass::CalculateSpeed(WeaponTypeClass *this)
{
  int result; // eax
  double FiringDistance; // [esp+4h] [ebp-8h]

  result = (int)this->Projectile; /*0x7729f6*/
  if ( result && !*(_DWORD *)(result + 732) ) /*0x772a00*/
  {
    FiringDistance = (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816); /*0x772a1e*/
    if ( *(_BYTE *)(result + 661) ) /*0x772a16*/
      FiringDistance = RulesClass::GetFiringDistance(); /*0x772a29*/
    result = TechnoClass::ComputeScanRange((TechnoClass *)this->Range, FiringDistance); /*0x772a3d*/
    this->Speed = result; /*0x772a42*/
  }
  return result; /*0x772a48*/
}



// ==== 0x00772A50  ArmorType::LookupByName  this=ArmorType  sig=csp ====
int __thiscall ArmorType::LookupByName(ArmorType *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x772a57*/
    return 0; /*0x772a7c*/
  v2 = 0; /*0x772a59*/
  v3 = (char **)&off_7E5210; /*0x772a5b*/
  while ( _strcmpi(*v3, this->__pad_0) ) /*0x772a6e*/
  {
    ++v3; /*0x772a70*/
    ++v2; /*0x772a73*/
    if ( (int)v3 >= (int)&off_7E523C ) /*0x772a7a*/
      return 0; /*0x772a7a*/
  }
  return v2; /*0x772a7c*/
}



// ==== 0x00772A90  Building::GetRenderType  this=Building  sig=csp ====
int __thiscall Building::GetRenderType(Building *this)
{
  _BYTE *Building_field_0xA0; // ecx
  int result; // eax

  Building_field_0xA0 = this->Building_field_0xA0; /*0x772a90*/
  result = 0; /*0x772a96*/
  if ( Building_field_0xA0[676] ) /*0x772a98*/
    result = 4; /*0x772aa2*/
  if ( Building_field_0xA0[677] ) /*0x772aa7*/
    LOBYTE(result) = result | 0xB8; /*0x772ab1*/
  return result; /*0x772ab3*/
}



// ==== 0x00772AC0  InfantryClass::startPanic  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::startPanic(InfantryClass *this)
{
  int currentMission; // eax

  currentMission = this->?; /*0x772ac0*/
  return currentMission && *(_BYTE *)(currentMission + 324); /*0x772ad6*/
}



// ==== 0x00772AE0  WeaponTypeClass::ProcessPower  this=WeaponTypeClass  sig=csp ====
int __thiscall WeaponTypeClass::ProcessPower(WeaponTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BulletTypeClass *Projectile; // eax
  int v10; // eax
  WarheadTypeClass *Warhead; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x772ae9*/
  Power::TimerProcess(this->AmbientDamage); /*0x772af7*/
  LOBYTE(v3) = this->IsSonic; /*0x772afc*/
  Power::FlagProcess((Power *)a2, v3); /*0x772b05*/
  LOBYTE(v4) = this->TurboBoost; /*0x772b0a*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x772b13*/
  LOBYTE(v5) = this->Supress; /*0x772b18*/
  Power::FlagProcess((Power *)a2, v5); /*0x772b21*/
  LOBYTE(v6) = this->Camera; /*0x772b26*/
  Power::FlagProcess((Power *)a2, v6); /*0x772b2f*/
  LOBYTE(v7) = this->IsLaser; /*0x772b34*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x772b3d*/
  LOBYTE(v8) = this->IsHouseColor; /*0x772b42*/
  Power::FlagProcess((Power *)a2, v8); /*0x772b4b*/
  Power::TimerProcess(this->Burst); /*0x772b59*/
  Projectile = this->Projectile; /*0x772b5e*/
  if ( Projectile ) /*0x772b66*/
  {
    v10 = (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)&Projectile->ObjectTypeClass[4] + 16))(&Projectile->ObjectTypeClass[4]); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(this->Damage); /*0x772b83*/
  Power::TimerProcess(this->Speed); /*0x772b91*/
  Warhead = this->Warhead; /*0x772b96*/
  if ( Warhead ) /*0x772b9e*/
  {
    v12 = (*((int (__stdcall **)(void **))Warhead->WarheadTypeClass_field_0x4 + 4))(&Warhead->WarheadTypeClass_field_0x4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(this->ROF); /*0x772bbb*/
  Power::TimerProcess(this->Range); /*0x772bc9*/
  Power::TimerProcess(this->Report[4]); /*0x772bd7*/
  Power::TimerProcess(this->DownReport[4]); /*0x772be5*/
  Power::TimerProcess(this->Anim[4]); /*0x772bf3*/
  LOBYTE(v13) = this->UseFireParticles; /*0x772bf8*/
  v14 = Power::FlagProcess((Power *)a2, v13); /*0x772c01*/
  LOBYTE(v14) = this->Lobber; /*0x772c06*/
  Power::FlagProcess((Power *)a2, v14); /*0x772c0f*/
  LOBYTE(v15) = this->LaserDuration; /*0x772c14*/
  Power::FinalizeDrain((Power *)a2, v15); /*0x772c1d*/
  LOBYTE(v16) = this->IsBigLaser; /*0x772c22*/
  v17 = Power::FlagProcess((Power *)a2, v16); /*0x772c2b*/
  LOBYTE(v17) = this->IsRailgun; /*0x772c30*/
  Power::FlagProcess((Power *)a2, v17); /*0x772c39*/
  LOBYTE(v18) = this->Charges; /*0x772c3e*/
  Power::FlagProcess((Power *)a2, v18); /*0x772c47*/
  LOBYTE(v19) = this->Bright; /*0x772c4c*/
  v20 = Power::FlagProcess((Power *)a2, v19); /*0x772c55*/
  LOBYTE(v20) = this->UseSparkParticles; /*0x772c5a*/
  Power::FlagProcess((Power *)a2, v20); /*0x772c63*/
  LOBYTE(v21) = this->OmniFire; /*0x772c68*/
  Power::FlagProcess((Power *)a2, v21); /*0x772c71*/
  LOBYTE(v22) = this->DistributedWeaponFire; /*0x772c76*/
  return Power::FlagProcess((Power *)a2, v22); /*0x772c84*/
}



// ==== 0x00772C90  WeaponTypeClass::GetClassIdentifier  this=WeaponTypeClass  sig=csp ====
int __stdcall WeaponTypeClass::GetClassIdentifier(WeaponTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x772c96*/
    return -2147467261; /*0x772c98*/
  *a2 = -1613620790; /*0x772ca6*/
  a2[1] = 298979195; /*0x772cae*/
  a2[2] = 1610642049; /*0x772cb7*/
  a2[3] = unk_7E983C; /*0x772cc0*/
  return 0; /*0x772c9d*/
}



// ==== 0x00772CD0  WeaponTypeClass::SaveLoad_Prefix  this=WeaponTypeClass  sig=csp ====
int __userpurge WeaponTypeClass::SaveLoad_Prefix@<eax>(WeaponTypeClass *this, int *a2, int a3, int a4)
{
  int v4; // ebx
  WeaponTypeClass *v5; // edi
  int *Report; // ebp
  int *v7; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi

  v5 = this; /*0x772cd3*/
  Report = this->Report; /*0x772cdd*/
  (*(void (__thiscall **)(int *))(this->Report[0] + 12))(this->Report); /*0x772ce5*/
  (*(void (__thiscall **)(int *))(v5->DownReport[0] + 12))(v5->DownReport); /*0x772cf4*/
  v7 = a2; /*0x772cf7*/
  result = AbstractClass::SaveLoad_Prefix_0(v5, (int)a2); /*0x772cfd*/
  if ( result >= 0 ) /*0x772d04*/
  {
    if ( v5 ) /*0x772d0c*/
      WeaponTypeClass::loadWeaponProperties(v5, (int)&this); /*0x772d15*/
    if ( v5 != (WeaponTypeClass *)-244 ) /*0x772d23*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->Anim, 0, 0); /*0x772d2b*/
      v5->Anim[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x772d30*/
    }
    (*(void (__stdcall **)(int *, WeaponTypeClass **, int, _DWORD, int))(*v7 + 12))(v7, &this, 4, 0, v4); /*0x772d42*/
    for ( i = 0; i < (int)a2; ++i ) /*0x772d4d*/
    {
      (*(void (__stdcall **)(int *, int *, int, _DWORD))(*v7 + 12))(v7, &a3, 4, 0); /*0x772d5b*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->Anim, &a3); /*0x772d69*/
    }
    if ( Report ) /*0x772d77*/
    {
      DynamicVectorClass::Construct((DynamicVectorClass *)Report, 0, 0); /*0x772d7f*/
      *Report = (int)&TypeList<int>::`vftable'; /*0x772d84*/
    }
    (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v7 + 12))(v7, &a2, 4, 0); /*0x772d97*/
    for ( j = 0; j < (int)a2; ++j ) /*0x772da2*/
    {
      (*(void (__stdcall **)(int *, int *, int, _DWORD))(*v7 + 12))(v7, &a3, 4, 0); /*0x772db0*/
      DynamicVector::Add_Alt((DynamicVector *)Report, &a3); /*0x772dba*/
    }
    if ( v5 != (WeaponTypeClass *)-216 ) /*0x772dce*/
      TypeList::Construct((TypeList *)v5->DownReport); /*0x772dd2*/
    (*(void (__stdcall **)(int *, int **, int))(*v7 + 12))(v7, &a2, 4); /*0x772de3*/
    for ( k = 0; k < (int)this; ++k ) /*0x772dee*/
    {
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v7 + 12))(v7, &a2, 4, 0); /*0x772dfc*/
      DynamicVector::Add_Alt((DynamicVector *)v5->DownReport, &a2); /*0x772e06*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->Warhead); /*0x772e1e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->Projectile); /*0x772e2f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->AttachedParticleSystem); /*0x772e40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->AssaultAnim); /*0x772e51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->OccupantAnim); /*0x772e62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->OpenToppedAnim); /*0x772e73*/
    for ( m = 0; m < v5->Anim[4]; ++m ) /*0x772e83*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->Anim[1] + 4 * m)); /*0x772e94*/
    return 0; /*0x772ea4*/
  }
  return result; /*0x772ea6*/
}



// ==== 0x00772EB0  WeaponTypeClass::SaveLoad_Prefix_0  this=WeaponTypeClass  sig=csp ====
int __userpurge WeaponTypeClass::SaveLoad_Prefix_0@<eax>(WeaponTypeClass *this, int *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, (int)a3); /*0x772ec1*/
  if ( result >= 0 ) /*0x772ec8*/
  {
    v7 = *a2; /*0x772ed4*/
    a3 = (int *)this->Anim[4]; /*0x772ee1*/
    (*(void (__stdcall **)(int *, int **, int, _DWORD, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x772ee5*/
    for ( i = 0; i < a4; ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Anim[1] + 4 * i, 4, 0); /*0x772f03*/
    v9 = *a2; /*0x772f13*/
    a4 = this->Report[4]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x772f23*/
    for ( j = 0; j < a4; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Report[1] + 4 * j, 4, 0); /*0x772f41*/
    v11 = *a2; /*0x772f51*/
    a4 = this->DownReport[4]; /*0x772f5d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x772f61*/
    for ( k = 0; k < (int)a3; ++k ) /*0x772f6c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->DownReport[1] + 4 * k, 4, 0); /*0x772f7f*/
    return 0; /*0x772f89*/
  }
  return result; /*0x772f8c*/
}



// ==== 0x00772FA0  InfantryTypeClass::Find  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall InfantryTypeClass::Find(char *Source)
{
  int v2; // esi
  WeaponTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x772fbc*/
    return 0; /*0x77301f*/
  v2 = 0; /*0x772fcd*/
  if ( g_WeaponTypePool <= 0 ) /*0x772fd1*/
  {
LABEL_6:
    v3 = (WeaponTypeClass *)__2_YAPAXI_Z(0x160u); /*0x772ff6*/
    if ( v3 ) /*0x773005*/
      return WeaponTypeClass::Constructor(v3, Source); /*0x773011*/
    return 0; /*0x773005*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)g_WeaponTypeConfig + v2) + 36), Source) ) /*0x772fea*/
  {
    if ( ++v2 >= g_WeaponTypePool ) /*0x772ff4*/
      goto LABEL_6; /*0x772ff4*/
  }
  return (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + v2); /*0x77300f*/
}



// ==== 0x00773030  SuperWeaponClass::FindByName  this=SuperWeaponClass  sig=csp ====
int __thiscall SuperWeaponClass::FindByName(SuperWeaponClass *this)
{
  int v1; // esi

  v1 = 0; /*0x773036*/
  if ( g_WeaponTypePool <= 0 ) /*0x77303d*/
    return -1; /*0x773062*/
  while ( _strcmpi((char *)(*((_DWORD *)g_WeaponTypeConfig + v1) + 36), this->__pad_0) ) /*0x773056*/
  {
    if ( ++v1 >= g_WeaponTypePool ) /*0x773060*/
      return -1; /*0x773060*/
  }
  return v1; /*0x773062*/
}



// ==== 0x00773070  TechnoClass::GetWeaponRange  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetWeaponRange(TechnoClass *this, void *a2)
{
  int v2; // eax
  double FiringDistance; // st7

  v2 = this->?[1]; /*0x773070*/
  if ( !v2 || *(_DWORD *)(v2 + 732) ) /*0x77307d*/
    return (int)this->?; /*0x7730c0*/
  if ( *(_BYTE *)(v2 + 661) ) /*0x773087*/
    FiringDistance = RulesClass::GetFiringDistance(); /*0x773091*/
  else
    FiringDistance = (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816); /*0x77309d*/
  return TechnoClass::ComputeScanRange((TechnoClass *)a2, FiringDistance); /*0x7730ba*/
}



// ==== 0x007730D0  WeaponTypeClass::GetObjectSize  this=WeaponTypeClass  sig=csp ====
int WeaponTypeClass::GetObjectSize(WeaponTypeClass *this)
{
  return 352; /*0x7730d5*/
}



// ==== 0x007730E0  WeaponTypeClass::GetTypeIdentifier  this=WeaponTypeClass  sig=csp ====
int WeaponTypeClass::GetTypeIdentifier(WeaponTypeClass *this)
{
  return 49; /*0x7730e5*/
}



// ==== 0x007730F0  WeaponTypeClass::ddtor  this=WeaponTypeClass  sig=csp ====
WeaponTypeClass *WeaponTypeClass::ddtor(WeaponTypeClass *this, char a2)
{
  AbstractClass *v2; // ecx
  AbstractClass *v3; // esi
  int v4; // eax
  void *NeedsSaveOrLink; // eax
  void *ptr_4; // eax
  void *ptr_C; // eax
  AbstractClass *v9; // [esp+8h] [ebp-4h] BYREF

  v3 = v2; /*0x7730f3*/
  v2->ptr_0 = &WeaponTypeClass::`vftable'; /*0x7730f7*/
  v2->ptr_4 = &WeaponTypeClass::`vftable'; /*0x7730fd*/
  v2->ptr_8 = &WeaponTypeClass::`vftable'; /*0x773104*/
  v2->ptr_C = &WeaponTypeClass::`vftable'; /*0x77310b*/
  AbstractClass::AnnounceExpiredPointer(v2, 1); /*0x773112*/
  v3[4].uniqueId = 0; /*0x77311d*/
  v3[4].referenceCount = 0; /*0x773123*/
  v9 = v3; /*0x773135*/
  v4 = ((int (__thiscall *)(WeaponTypeClass **, AbstractClass **))WeaponTypeClass_Array->?)(&WeaponTypeClass_Array, &v9); /*0x773139*/
  if ( v4 != -1 && v4 < g_WeaponTypePool && v4 < --g_WeaponTypePool ) /*0x773154*/
  {
    do /*0x77316c*/
    {
      ++v4; /*0x77315c*/
      *((_DWORD *)g_WeaponTypeConfig + v4 - 1) = *((_DWORD *)g_WeaponTypeConfig + v4); /*0x773160*/
    }
    while ( v4 < g_WeaponTypePool ); /*0x77316c*/
  }
  NeedsSaveOrLink = v3[6].NeedsSaveOrLink; /*0x77316e*/
  v3[6].referenceCount = (int)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x773174*/
  if ( NeedsSaveOrLink && BYTE1(v3[7].ptr_4) ) /*0x773182*/
  {
    __3_YAXPAX_Z(NeedsSaveOrLink); /*0x77318b*/
    v3[6].NeedsSaveOrLink = 0; /*0x773193*/
  }
  BYTE1(v3[7].ptr_4) = 0; /*0x773199*/
  v3[7].ptr_0 = 0; /*0x77319f*/
  ptr_4 = v3[6].ptr_4; /*0x7731a5*/
  v3[6].ptr_0 = &VectorClass<int>::`vftable'; /*0x7731ab*/
  if ( ptr_4 && BYTE1(v3[6].ptr_C) ) /*0x7731b9*/
  {
    __3_YAXPAX_Z(ptr_4); /*0x7731c2*/
    v3[6].ptr_4 = 0; /*0x7731ca*/
  }
  BYTE1(v3[6].ptr_C) = 0; /*0x7731d0*/
  v3[6].ptr_8 = 0; /*0x7731d6*/
  ptr_C = v3[5].ptr_C; /*0x7731dc*/
  v3[5].ptr_8 = &VectorClass<int>::`vftable'; /*0x7731e2*/
  if ( ptr_C && BYTE1(v3[5].abstractFlags) ) /*0x7731f0*/
  {
    __3_YAXPAX_Z(ptr_C); /*0x7731f9*/
    v3[5].ptr_C = 0; /*0x773201*/
  }
  BYTE1(v3[5].abstractFlags) = 0; /*0x773209*/
  v3[5].uniqueId = 0; /*0x77320f*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)v3); /*0x773215*/
  if ( ((unsigned __int8)this & 1) != 0 ) /*0x77321f*/
    __3_YAXPAX_Z(v3); /*0x773222*/
  return (WeaponTypeClass *)v3; /*0x77322c*/
}



// ==== 0x00773240  sub_773240  this=-  sig=ida-proto ====
int sub_773240()
{
  dword_B72C98 = 0; /*0x773242*/
  dword_B72C9C = 0; /*0x773247*/
  dword_B72CA0 = 0; /*0x77324c*/
  dword_B72CA4 = 0; /*0x773251*/
  return 0; /*0x773256*/
}



// ==== 0x00773260  sub_773260  this=-  sig=ida-proto ====
void sub_773260()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77326c*/
  dbl_B72CB0 = Math::Sqrt(v0 + v0); /*0x77327e*/
}



// ==== 0x00773290  sub_773290  this=-  sig=ida-proto ====
void sub_773290()
{
  dbl_B72D00 = dbl_B72CB0 / 60.0; /*0x77329c*/
}



// ==== 0x007732B0  sub_7732B0  this=-  sig=ida-proto ====
void sub_7732B0()
{
  dbl_B72CE8 = 1.0 / dbl_B72D00; /*0x7732bc*/
}



// ==== 0x007732D0  sub_7732D0  this=-  sig=ida-proto ====
void sub_7732D0()
{
  dbl_B72CE0 = 0.0174532925199433 * 45.0; /*0x7732dc*/
}



// ==== 0x007732F0  sub_7732F0  this=-  sig=ida-proto ====
void sub_7732F0()
{
  dbl_B72CB8 = 0.0174532925199433 * 60.0; /*0x7732fc*/
}



// ==== 0x00773310  sub_773310  this=-  sig=ida-proto ====
void sub_773310()
{
  dbl_B72C90 = 0.0174532925199433 * 90.0; /*0x77331c*/
}



// ==== 0x00773330  sub_773330  this=-  sig=ida-proto ====
__int64 sub_773330()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B72C90 - dbl_B72CB8); /*0x773342*/
  result = Math::RoundToInt(v0 * dbl_B72CB0 * 0.5); /*0x773356*/
  dword_B72D08 = result; /*0x77335b*/
  return result; /*0x773360*/
}



// ==== 0x00773370  sub_773370  this=-  sig=ida-proto ====
void sub_773370()
{
  dbl_B72CC0 = Math::ArcTan((double)dword_B72D08 * 0.00390625); /*0x773387*/
}



// ==== 0x007733A0  sub_7733A0  this=-  sig=ida-proto ====
void sub_7733A0()
{
  dbl_B72CD8 = Math::ArcTan((double)(2 * dword_B72D08) / dbl_B72CB0); /*0x7733c2*/
}



// ==== 0x007733D0  sub_7733D0  this=-  sig=ida-proto ====
__int64 sub_7733D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72D08) + 0.5); /*0x7733eb*/
  dword_B72CFC = result; /*0x7733f0*/
  return result; /*0x7733f6*/
}



// ==== 0x00773400  sub_773400  this=-  sig=ida-proto ====
int sub_773400()
{
  word_B72CA8 = 0; /*0x773402*/
  word_B72CAA = 0; /*0x773408*/
  return 0; /*0x77340e*/
}



// ==== 0x00773410  sub_773410  this=-  sig=ida-proto ====
int sub_773410()
{
  dword_B72CC8 = 0; /*0x773412*/
  dword_B72CCC = 0; /*0x773417*/
  dword_B72CD0 = 0; /*0x77341c*/
  return 0; /*0x773421*/
}



// ==== 0x00773430  sub_773430  this=-  sig=ida-proto ====
int sub_773430()
{
  dword_B72CF8 = 0; /*0x773435*/
  dword_B72CF0 = 128; /*0x77343f*/
  dword_B72CF4 = 128; /*0x773444*/
  return 128; /*0x773449*/
}



// ==== 0x00773450  sub_773450  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_773450(int a1, int a2)
{
  _DWORD *v4; // esi
  _DWORD *result; // eax
  _DWORD *v6; // edi

  v4 = __2_YAPAXI_Z(0x414u); /*0x773462*/
  result = 0; /*0x773464*/
  if ( v4 ) /*0x77346b*/
  {
    v6 = v4 + 2; /*0x773471*/
    v4[1] = 1; /*0x773474*/
    v4[2] = 0; /*0x773480*/
    *((_BYTE *)v4 + 1036) = 0; /*0x773482*/
    v4[260] = 0; /*0x773488*/
    *v4 = &WebBrowser::`vftable'; /*0x77348e*/
    Debug::Log(); /*0x773494*/
    v4[260] = a1; /*0x77349c*/
    Debug::Log(); /*0x7734a7*/
    if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)v4 + 2) >= 0 ) /*0x7734c6*/
    {
      Debug::Log(); /*0x7734cd*/
      (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v6 + 20))(*v6, v4); /*0x7734db*/
      (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*v6 + 12))(*v6, a1, a2); /*0x7734e5*/
      (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v6 + 60))(*v6, 1); /*0x7734ef*/
    }
    return v4; /*0x7734f2*/
  }
  return result; /*0x7734f4*/
}



// ==== 0x00773590  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_773590(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // esi

  this->u32_41 = a2; /*0x77359e*/
  Debug::Log(); /*0x7735a4*/
  v4 = this + 2; /*0x7735ac*/
  if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)this + 2) >= 0 ) /*0x7735c6*/
  {
    Debug::Log(); /*0x7735cd*/
    (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v4 + 20))(*v4, this); /*0x7735db*/
    (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*v4 + 12))(*v4, a2, a3); /*0x7735e9*/
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v4 + 60))(*v4, 1); /*0x7735f3*/
  }
  return 1; /*0x7735f6*/
}



// ==== 0x00773600  WebBrowser::LoadURLFromRegistry  this=WebBrowser  sig=csp ====
char __thiscall WebBrowser::LoadURLFromRegistry(int this, const char *a2)
{
  LSTATUS v3; // esi
  LSTATUS v4; // esi
  char *v5; // edx
  int v6; // eax
  HKEY phkResult; // [esp+10h] [ebp-558h] BYREF
  DWORD cbData; // [esp+14h] [ebp-554h] BYREF
  DWORD Type; // [esp+18h] [ebp-550h] BYREF
  CHAR ValueName[64]; // [esp+1Ch] [ebp-54Ch] BYREF
  BYTE v12[260]; // [esp+5Ch] [ebp-50Ch] BYREF
  BYTE Data[512]; // [esp+160h] [ebp-408h] BYREF
  wchar_t Destination[260]; // [esp+360h] [ebp-208h] BYREF

  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult) ) /*0x773628*/
    return 0; /*0x773628*/
  strcpy(ValueName, a2); /*0x77364f*/
  if ( !*(_DWORD *)(this + 8) ) /*0x773653*/
    strcat(ValueName, asc_84968C); /*0x773684*/
  cbData = 512; /*0x7736b1*/
  v3 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData); /*0x7736bf*/
  RegCloseKey(phkResult); /*0x7736c2*/
  if ( v3 ) /*0x7736ca*/
    return 0; /*0x7736ca*/
  Debug::Log(); /*0x7736e5*/
  if ( !*(_DWORD *)(this + 8) ) /*0x7736f2*/
    return WebBrowser::OpenURL(Data); /*0x773843*/
  mbstowcs((wchar_t *)(this + 12), (const char *)Data, 0x200u); /*0x773709*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) ) /*0x773726*/
    return 0; /*0x773726*/
  cbData = 260; /*0x77374a*/
  v4 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, v12, &cbData); /*0x773754*/
  RegCloseKey(phkResult); /*0x77375b*/
  if ( v4 ) /*0x773763*/
    return 0; /*0x773763*/
  v5 = strrchr((const char *)v12, 92); /*0x773775*/
  if ( !v5 || strlen((const char *)v12) > v5 - (char *)v12 + 1 ) /*0x773795*/
    strcat((char *)v12, asc_815E74); /*0x7737bc*/
  mbstowcs(Destination, (const char *)v12, 0x104u); /*0x7737d7*/
  wcscat(Destination, aFr); /*0x7737e9*/
  if ( (*(int (__stdcall **)(_DWORD, wchar_t *, _DWORD, _DWORD))(**(_DWORD **)(this + 8) + 64))( /*0x773808*/
         *(_DWORD *)(this + 8),
         Destination,
         0,
         0) < 0 )
    return 0; /*0x773849*/
  v6 = *(_DWORD *)(this + 8); /*0x77380a*/
  if ( v6 ) /*0x77380f*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 28))(*(_DWORD *)(this + 8)); /*0x773814*/
    *(_BYTE *)(this + 1036) = 1; /*0x773817*/
  }
  return 1; /*0x77381e*/
}



// ==== 0x007738A0  ObjectClass::method_7738A0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_7738A0(ObjectClass *this, const char *cbData, LPBYTE lpData, const char *Type)
{
  LSTATUS Value; // esi
  HKEY phkResult; // [esp+8h] [ebp-44h] BYREF
  CHAR ValueName[64]; // [esp+Ch] [ebp-40h] BYREF

  Value = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult); /*0x7738c3*/
  if ( !Value ) /*0x7738c7*/
  {
    strcpy(ValueName, cbData); /*0x7738e8*/
    if ( !this->? ) /*0x7738ec*/
      strcat(ValueName, asc_84968C); /*0x77391d*/
    cbData = Type; /*0x773932*/
    Value = RegQueryValueExA(phkResult, ValueName, 0, (LPDWORD)&Type, lpData, (LPDWORD)&cbData); /*0x77394f*/
    RegCloseKey(phkResult); /*0x773956*/
  }
  return Value == 0; /*0x773961*/
}



// ==== 0x00773970  sub_773970  this=-  sig=csp ====
BOOL __stdcall sub_773970(BYTE *Type, DWORD cbData)
{
  LSTATUS v2; // ebp
  char *v3; // ebx
  char *v4; // edx
  HKEY phkResult; // [esp+Ch] [ebp-4h] BYREF

  v2 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult); /*0x773990*/
  if ( !v2 ) /*0x773994*/
  {
    v3 = (char *)Type; /*0x77399a*/
    v2 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, (LPDWORD)&Type, Type, &cbData); /*0x7739c6*/
    RegCloseKey(phkResult); /*0x7739c9*/
    if ( !v2 ) /*0x7739d1*/
    {
      v4 = strrchr(v3, 92); /*0x7739db*/
      if ( !v4 || strlen(v3) > v4 - v3 + 1 ) /*0x7739f5*/
        strcat(v3, asc_815E74); /*0x773a19*/
    }
  }
  return v2 == 0; /*0x773a25*/
}



// ==== 0x00773A40  WebBrowser::QueryInterface  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::QueryInterface(WebBrowser *this)
{
  int v2; // [esp+10h] [ebp+4h]
  const void *v3; // [esp+14h] [ebp+8h]
  _DWORD *v4; // [esp+18h] [ebp+Ch]

  *v4 = 0; /*0x773a59*/
  if ( memcmp(v3, &IID_IUnknown, 0x10u) && memcmp(v3, &unk_7F7C20, 0x10u) ) /*0x773a71*/
    return -2147467262; /*0x773a77*/
  *v4 = v2; /*0x773a84*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x773a89*/
  return 0; /*0x773a75*/
}



// ==== 0x00773AA0  WebBrowser::AddRef  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::AddRef(WebBrowser *this)
{
  int v1; // ecx
  int v3; // [esp+4h] [ebp+4h]

  v1 = *(_DWORD *)(v3 + 4) + 1; /*0x773aa7*/
  *(_DWORD *)(v3 + 4) = v1; /*0x773aa8*/
  return v1; /*0x773aad*/
}



// ==== 0x00773AB0  WebBrowser::Release  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Release(WebBrowser *this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp+4h]

  result = v2[1] - 1; /*0x773ab7*/
  v2[1] = result; /*0x773ab8*/
  if ( !result ) /*0x773abb*/
  {
    if ( v2 ) /*0x773abf*/
      (*(void (__thiscall **)(_DWORD *, int))(*v2 + 68))(v2, 1); /*0x773ac5*/
    return 0; /*0x773ac8*/
  }
  return result; /*0x773aca*/
}



// ==== 0x00773AD0  WebBrowser::?  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt03(WebBrowser *this)
{
  HWND v1; // eax
  int v3; // [esp+4h] [ebp+4h]

  v1 = *(HWND *)(v3 + 1040); /*0x773ad4*/
  if ( v1 ) /*0x773adc*/
    *(_DWORD *)GetWindowLongA(v1, 8) = 1; /*0x773ae7*/
  return 0; /*0x773aef*/
}



// ==== 0x00773B00  WebBrowser::COMStub_Return0  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::COMStub_Return0(WebBrowser *this)
{
  return 0; /*0x773b02*/
}



// ==== 0x00773B10  WebBrowser::Write  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Write(WebBrowser *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+Ch]

  if ( v3 ) /*0x773b16*/
    (*(void (__stdcall **)(_DWORD, int, _DWORD, wchar_t *))(**(_DWORD **)(v2 + 8) + 64))( /*0x773b2d*/
      *(_DWORD *)(v2 + 8),
      v2 + 12,
      0,
      aMain);
  return 0; /*0x773b32*/
}



// ==== 0x00773B40  WebBrowser::StubReturnFalse  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::StubReturnFalse(WebBrowser *this)
{
  return 0; /*0x773b42*/
}



// ==== 0x00773B50  WebBrowser::SetSize  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::SetSize(WebBrowser *this)
{
  return 0; /*0x773b52*/
}



// ==== 0x00773B60  WebBrowser::CopyTo  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::CopyTo(WebBrowser *this)
{
  return 0; /*0x773b62*/
}



// ==== 0x00773B70  WebBrowser::Commit  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Commit(WebBrowser *this)
{
  return 0; /*0x773b72*/
}



// ==== 0x00773B80  WebBrowser::Revert  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Revert(WebBrowser *this)
{
  return 0; /*0x773b82*/
}



// ==== 0x00773B90  WebBrowser::LockRegion  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::LockRegion(WebBrowser *this)
{
  return 0; /*0x773b92*/
}



// ==== 0x00773BA0  WebBrowser::UnlockRegion  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::UnlockRegion(WebBrowser *this)
{
  return -2147467259; /*0x773ba5*/
}



// ==== 0x00773BB0  WebBrowser::Stat  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Stat(WebBrowser *this)
{
  return 0; /*0x773bb2*/
}



// ==== 0x00773BC0  WebBrowser::Clone  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Clone(WebBrowser *this)
{
  LSTATUS v1; // esi
  char *v2; // edx
  HKEY phkResult; // [esp+4h] [ebp-318h] BYREF
  DWORD cbData; // [esp+8h] [ebp-314h] BYREF
  DWORD Type; // [esp+Ch] [ebp-310h] BYREF
  BYTE Data[260]; // [esp+10h] [ebp-30Ch] BYREF
  wchar_t Dest[260]; // [esp+114h] [ebp-208h] BYREF
  int v9; // [esp+320h] [ebp+4h]

  Debug::Log(); /*0x773bcc*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) ) /*0x773bea*/
    return 0; /*0x773bea*/
  cbData = 260; /*0x773c13*/
  v1 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, Data, &cbData); /*0x773c21*/
  RegCloseKey(phkResult); /*0x773c28*/
  if ( v1 ) /*0x773c30*/
    return 0; /*0x773d06*/
  v2 = strrchr((const char *)Data, 92); /*0x773c43*/
  if ( !v2 || strlen((const char *)Data) > v2 - (char *)Data + 1 ) /*0x773c63*/
    strcat((char *)Data, asc_815E74); /*0x773c8b*/
  mbstowcs((wchar_t *)(v9 + 12), (const char *)Data, 0x104u); /*0x773caa*/
  wcscat((wchar_t *)(v9 + 12), L"BadPage.htm"); /*0x773cb5*/
  mbstowcs(Dest, (const char *)Data, 0x104u); /*0x773ccc*/
  wcscat(Dest, aFr); /*0x773cde*/
  return (*(int (__stdcall **)(_DWORD, wchar_t *, _DWORD, _DWORD))(**(_DWORD **)(v9 + 8) + 64))( /*0x773cfc*/
           *(_DWORD *)(v9 + 8),
           Dest,
           0,
           0);
}



// ==== 0x00773D20  WebBrowser::Navigate  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::Navigate(WebBrowser *this)
{
  Debug::Log(); /*0x773d2a*/
  return 0; /*0x773d34*/
}



// ==== 0x00773D40  WebBrowser::GoBack  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::GoBack(WebBrowser *this)
{
  String v2; // [esp+0h] [ebp-94h] BYREF
  int v3; // [esp+8h] [ebp-8Ch]
  Flag v4[6]; // [esp+Ch] [ebp-88h] BYREF
  char v5[64]; // [esp+54h] [ebp-40h] BYREF
  wchar_t *Source; // [esp+9Ch] [ebp+8h]
  wchar_t *v7; // [esp+A0h] [ebp+Ch]

  wcstombs((char *)&v4[0].Flag_field_0x08, Source, 0x40u); /*0x773d55*/
  wcstombs(v5, v7, 0x40u); /*0x773d69*/
  String::Assign(&v2, (const char *)&v4[0].Flag_field_0x08); /*0x773d7a*/
  Debug::Log(); /*0x773d8e*/
  LoadPlayerProfile(&v2.m_3[1], (const char **)&v2); /*0x773d9e*/
  *(_DWORD *)v4[0].__pad_0 = 0; /*0x773da9*/
  LOBYTE(v4[0].Flag_field_0x04) = 0; /*0x773dad*/
  ReadRegistryOptionsWOL((ObjectClass *)v4); /*0x773db1*/
  if ( (unsigned __int8)Flag::IsNot2(v4) ) /*0x773dba*/
  {
    FindChannelWOL((const char *)&v4[0].Flag_field_0x08, (int)v5, 1u, *(_DWORD *)(v3 + 16)); /*0x773dd5*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x773ddf*/
  }
  String::Assign_Alt((String *)&g_WindowManager.__pad_EC[684], (const char *)&v4[0].Flag_field_0x08); /*0x773dee*/
  String::Assign_Alt((String *)&g_WebBrowserConfig, v5); /*0x773dfd*/
  *(_DWORD *)&v2.m_3[1] = &rc_ptr<PlayerProfile>::`vftable'; /*0x773e06*/
  ComPtr::Release((ComPtr *)&v2.m_3[1]); /*0x773e0e*/
  DeleteAndZero((ObjectClass *)&v2); /*0x773e17*/
  return 0; /*0x773e1e*/
}



// ==== 0x00773E30  sub_773E30  this=-  sig=csp ====
int __stdcall sub_773E30(HWND hWndParent, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LPARAM lParam[2]; // [esp+8h] [ebp-8h] BYREF

  result = BaseDialogProc(hWndParent, a2, a3, a4); /*0x773e4b*/
  if ( !result ) /*0x773e52*/
  {
    if ( a2 == 272 ) /*0x773e5a*/
    {
      lParam[0] = 800; /*0x773e62*/
      lParam[1] = 600; /*0x773e6a*/
      ResizeDialogAndEnum(hWndParent, (LPARAM)lParam); /*0x773e72*/
    }
    return 0; /*0x773e77*/
  }
  return result; /*0x773e79*/
}



// ==== 0x00773E90  WebBrowser::ShowDialog  this=char*  sig=csp ====
HWND __thiscall WebBrowser_ShowDialog(const char *this)
{
  const char *v1; // ebp
  HWND result; // eax
  HWND v3; // edi
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // esi
  _DWORD *v7; // ebp
  LONG dwNewLong; // [esp+1Ch] [ebp-28h] BYREF
  const char *v9; // [esp+20h] [ebp-24h]
  struct tagRECT Rect; // [esp+24h] [ebp-20h] BYREF
  int v11; // [esp+34h] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-Ch]
  int v13; // [esp+3Ch] [ebp-8h]
  int v14; // [esp+40h] [ebp-4h]

  v1 = this; /*0x773e94*/
  v9 = this; /*0x773e99*/
  if ( !this || !strlen(this) ) /*0x773eaa*/
    return (HWND)Debug::Log(aDowebpagedialo); /*0x774060*/
  Debug::Log("Creating WebBrowser Dialog for %s.\n", v1); /*0x773ebb*/
  result = (HWND)CreateDialog(0x131u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_773E30, 0); /*0x773ecf*/
  v3 = result; /*0x773ed4*/
  if ( result ) /*0x773ed8*/
  {
    dwNewLong = 0; /*0x773ee7*/
    SetWindowLongA(result, 8, (LONG)&dwNewLong); /*0x773eef*/
    LOBYTE(v4) = 1; /*0x773ef5*/
    SetDialogActiveFlag(v3, v4); /*0x773ef9*/
    Dialog::Show(v3); /*0x773f00*/
    GetClientRect(v3, &Rect); /*0x773f0b*/
    v11 = Rect.left + (Rect.right - Rect.left - 800) / 2; /*0x773f30*/
    v13 = v11 + 800; /*0x773f39*/
    v12 = Rect.top + (Rect.bottom - Rect.top - 600) / 2; /*0x773f4f*/
    v14 = v12 + 600; /*0x773f58*/
    v5 = __2_YAPAXI_Z(0x414u); /*0x773f5c*/
    v6 = (int)v5; /*0x773f61*/
    if ( v5 ) /*0x773f68*/
    {
      v7 = v5 + 2; /*0x773f6e*/
      v5[1] = 1; /*0x773f71*/
      v5[2] = 0; /*0x773f7d*/
      *((_BYTE *)v5 + 1036) = 0; /*0x773f84*/
      v5[260] = 0; /*0x773f8b*/
      *v5 = &WebBrowser::`vftable'; /*0x773f95*/
      Debug::Log(g_Str_Instantiating_embedded_WebBrow); /*0x773f9b*/
      *(_DWORD *)(v6 + 1040) = v3; /*0x773fa3*/
      Debug::Log(g_Str_Creating_WOLBrowser_component_); /*0x773fae*/
      if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)(v6 + 8)) >= 0 ) /*0x773fcd*/
      {
        Debug::Log(g_Str_Starting_up_WOLBrowser); /*0x773fd4*/
        (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v6); /*0x773fe3*/
        (*(void (__stdcall **)(_DWORD, HWND, int *))(*(_DWORD *)*v7 + 12))(*v7, v3, &v11); /*0x773ff2*/
        (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 60))(*v7, 1); /*0x773ffe*/
      }
      v1 = v9; /*0x774001*/
    }
    else
    {
      v6 = 0; /*0x774057*/
    }
    dword_B72D0C = v6; /*0x774007*/
    if ( v6 ) /*0x77400d*/
    {
      if ( (unsigned __int8)WebBrowser::LoadURLFromRegistry(v1) && !dwNewLong ) /*0x774021*/
      {
        while ( !Dialog::PumpMessages() && !dwNewLong ) /*0x774032*/
          ; /*0x774023*/
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_B72D0C + 8))(dword_B72D0C); /*0x77403c*/
      dword_B72D0C = 0; /*0x77403f*/
    }
    return Dialog::Destroy(v3); /*0x77404b*/
  }
  return result; /*0x774051*/
}



// ==== 0x00774070  Render_Draw_774070  this=-  sig=ida-proto ====
BOOL sub_774070()
{
  return dword_B72D0C && *(_DWORD *)(dword_B72D0C + 8) && *(_BYTE *)(dword_B72D0C + 1036); /*0x77408f*/
}



// ==== 0x007740A0  WebBrowser::GoForward  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::GoForward(WebBrowser *this)
{
  void *WebBrowser_field_0x8; // eax
  char v4; // [esp+10h] [ebp+4h]

  *(_DWORD *)this->__pad_0 = &WebBrowser::`vftable'; /*0x7740a8*/
  Debug::Log(); /*0x7740ae*/
  if ( this->WebBrowser_field_0x8 ) /*0x7740b3*/
  {
    Debug::Log(); /*0x7740c2*/
    (*(void (__stdcall **)(void *, WebBrowser *))(*(_DWORD *)this->WebBrowser_field_0x8 + 24))( /*0x7740d1*/
      this->WebBrowser_field_0x8,
      this);
    (*(void (__stdcall **)(void *))(*(_DWORD *)this->WebBrowser_field_0x8 + 16))(this->WebBrowser_field_0x8); /*0x7740da*/
  }
  WebBrowser_field_0x8 = this->WebBrowser_field_0x8; /*0x7740dd*/
  if ( WebBrowser_field_0x8 ) /*0x7740e2*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)WebBrowser_field_0x8 + 8))(this->WebBrowser_field_0x8); /*0x7740e7*/
  if ( (v4 & 1) != 0 ) /*0x7740ef*/
    __3_YAXPAX_Z(this); /*0x7740f2*/
  return (int)this->__pad_0; /*0x7740fc*/
}



// ==== 0x00774100  sub_774100  this=-  sig=ida-proto ====
int sub_774100()
{
  dword_B72D10 = 0; /*0x774102*/
  dword_B72D14 = 0; /*0x774107*/
  dword_B72D18 = 0; /*0x77410c*/
  dword_B72D1C = 0; /*0x774111*/
  return 0; /*0x774116*/
}



// ==== 0x00774120  WinModemClass::Construct  this=WinModemClass  sig=csp ====
_DWORD *__thiscall WinModemClass::Construct(WinModemClass *this)
{
  *(_DWORD *)this->__pad_0 = &WinModemClass::`vftable'; /*0x774128*/
  this->WinModemClass_field_0x24 = __2_YAPAXI_Z(0x2000u); /*0x774133*/
  this->q015 = 0; /*0x77413b*/
  *((_DWORD *)this + 22) = 0; /*0x77413e*/
  this->q014 = 0; /*0x774141*/
  *((_BYTE *)this + 81) = 0; /*0x774144*/
  *((_DWORD *)this + 26) = 0; /*0x774147*/
  *((_DWORD *)this + 25) = 0; /*0x77414a*/
  this->WinModemClass_field_0x04 = 0; /*0x77414d*/
  this->WinModemClass_field_0x08 = 0; /*0x774150*/
  this->WinModemClass_field_0x0C = 0; /*0x774153*/
  this->WinModemClass_field_0x10 = 0; /*0x774156*/
  this->WinModemClass_field_0x14 = 0; /*0x774159*/
  this->WinModemClass_field_0x18 = 0; /*0x77415c*/
  *((_DWORD *)this + 23) = -1; /*0x77415f*/
  return this->__pad_0; /*0x774168*/
}



// ==== 0x007741C0  FindRegistrySubKey  this=-  sig=csp ====
int __fastcall FindRegistrySubKey(HKEY hKey, void *a2, char a3)
{
  DWORD v4; // ebx
  _BYTE *v5; // esi
  DWORD v6; // ebp
  LPSTR lpClass; // [esp+10h] [ebp-434h]
  DWORD cbMaxSubKeyLen; // [esp+14h] [ebp-430h] BYREF
  DWORD cbMaxClassLen; // [esp+18h] [ebp-42Ch] BYREF
  DWORD cSubKeys; // [esp+1Ch] [ebp-428h] BYREF
  HKEY phkResult; // [esp+20h] [ebp-424h] BYREF
  void *v13; // [esp+24h] [ebp-420h]
  DWORD cchClass; // [esp+28h] [ebp-41Ch] BYREF
  DWORD cbMaxValueLen; // [esp+2Ch] [ebp-418h] BYREF
  DWORD cValues; // [esp+30h] [ebp-414h] BYREF
  DWORD cbSecurityDescriptor; // [esp+34h] [ebp-410h] BYREF
  struct _FILETIME ftLastWriteTime; // [esp+38h] [ebp-40Ch] BYREF
  DWORD cbMaxValueNameLen; // [esp+40h] [ebp-404h] BYREF
  CHAR Class[1024]; // [esp+44h] [ebp-400h] BYREF

  v13 = a2; /*0x7741cc*/
  cchClass = 1024; /*0x774205*/
  if ( RegQueryInfoKeyA( /*0x77420d*/
         hKey,
         Class,
         &cchClass,
         0,
         &cSubKeys,
         &cbMaxSubKeyLen,
         &cbMaxClassLen,
         &cValues,
         &cbMaxValueNameLen,
         &cbMaxValueLen,
         &cbSecurityDescriptor,
         &ftLastWriteTime) )
  {
    return 0; /*0x7742cf*/
  }
  v4 = cbMaxSubKeyLen + 16; /*0x77421f*/
  v5 = __2_YAPAXI_Z(cbMaxSubKeyLen + 16); /*0x77422c*/
  lpClass = (LPSTR)__2_YAPAXI_Z(cbMaxClassLen + 1); /*0x774235*/
  v6 = 0; /*0x774240*/
  if ( !cSubKeys ) /*0x774244*/
  {
LABEL_6:
    if ( a3 ) /*0x7742a7*/
      RegCloseKey(hKey); /*0x7742aa*/
    __3_YAXPAX_Z(v5); /*0x7742b1*/
    __3_YAXPAX_Z(lpClass); /*0x7742bb*/
    return 0; /*0x7742bb*/
  }
  while ( 1 ) /*0x77425e*/
  {
    *v5 = 0; /*0x77425e*/
    cbMaxSubKeyLen = v4; /*0x774262*/
    RegEnumKeyExA(hKey, v6, v5, &cbMaxSubKeyLen, 0, lpClass, &cbMaxClassLen, &ftLastWriteTime); /*0x774266*/
    if ( !_strcmpi((char *)v13, v5) && !RegOpenKeyExA(hKey, v5, 0, 0x20019u, &phkResult) ) /*0x77428b*/
      break; /*0x77428b*/
    if ( ++v6 >= cSubKeys ) /*0x77429c*/
      goto LABEL_6; /*0x77429c*/
  }
  if ( a3 ) /*0x7742db*/
    RegCloseKey(hKey); /*0x7742de*/
  __3_YAXPAX_Z(v5); /*0x7742e5*/
  __3_YAXPAX_Z(lpClass); /*0x7742ef*/
  return (int)phkResult; /*0x7742c3*/
}



// ==== 0x00774310  sub_774310  this=-  sig=ida-proto ====
char __fastcall sub_774310(BYTE *a1, signed int a2)
{
  HKEY RegistrySubKey; // eax
  HKEY v6; // eax
  HKEY v7; // eax
  HKEY v8; // esi
  DWORD v9; // ecx
  DWORD cbData; // [esp+Ch] [ebp-104h] BYREF
  BYTE Data[256]; // [esp+10h] [ebp-100h] BYREF

  cbData = 256; /*0x774329*/
  RegistrySubKey = FindRegistrySubKey(HKEY_LOCAL_MACHINE, aEnum, 0); /*0x774331*/
  if ( !RegistrySubKey ) /*0x774338*/
    return 0; /*0x77433c*/
  v6 = FindRegistrySubKey(RegistrySubKey, aRoot, 1); /*0x77434f*/
  if ( !v6 ) /*0x774356*/
    return 0; /*0x77435a*/
  v7 = FindRegistrySubKey(v6, aModem, 1); /*0x77436d*/
  if ( !v7 ) /*0x774374*/
    return 0; /*0x774378*/
  v8 = FindRegistrySubKey(v7, a0000_0, 1); /*0x774390*/
  if ( !v8 ) /*0x774394*/
    return 0; /*0x774398*/
  if ( RegQueryValueExA(v8, aFriendlyname, 0, 0, Data, &cbData) ) /*0x7743b6*/
  {
    RegCloseKey(v8); /*0x7743c1*/
    return 0; /*0x7743c7*/
  }
  else
  {
    RegCloseKey(v8); /*0x7743d3*/
    v9 = cbData; /*0x7743d9*/
    if ( a2 < (int)cbData ) /*0x7743df*/
      v9 = a2; /*0x7743e1*/
    qmemcpy(a1, Data, v9); /*0x7743ec*/
    return 1; /*0x7743f0*/
  }
}



// ==== 0x00774410  WinModemClass::AddRef  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::AddRef(WinModemClass *this, const char *a2, DWORD a3, BYTE a4, BYTE a5, char a6)
{
  HANDLE FileA; // ebp
  DWORD v9; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v12; // zf
  DWORD Errors; // [esp+10h] [ebp-14Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-148h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-13Ch] BYREF
  struct _COMMTIMEOUTS CommTimeouts; // [esp+3Ch] [ebp-120h] BYREF
  CHAR FileName[268]; // [esp+50h] [ebp-10Ch] BYREF

  strcpy(FileName, "\\\\.\\"); /*0x774427*/
  memset(&FileName[5], 0, 261); /*0x77443a*/
  strcat(FileName, a2); /*0x774465*/
  if ( *((_DWORD *)this + 23) != -1 ) /*0x774473*/
  {
    Debug::Log(); /*0x77447a*/
    CloseHandle(*((HANDLE *)this + 23)); /*0x774486*/
    *((_DWORD *)this + 23) = -1; /*0x77448c*/
  }
  Debug::Log(); /*0x774499*/
  FileA = CreateFileA(FileName, 0xC0000000, 0, 0, 3u, 0x40000000u, 0); /*0x7744bd*/
  if ( FileA == (HANDLE)-1 ) /*0x7744c2*/
  {
    Debug::Log(); /*0x7744ca*/
    return -1; /*0x7744d2*/
  }
  else
  {
    Debug::Log(); /*0x7744e6*/
    *((_DWORD *)this + 23) = FileA; /*0x7744ee*/
    SetupComm(FileA, 0x2000u, 0x2000u); /*0x7744fc*/
    PurgeComm(*((HANDLE *)this + 23), 0xFu); /*0x774508*/
    this->WinModemClass_field_0x28 = 0; /*0x77451a*/
    this->WinModemClass_field_0x2C = 0; /*0x77451d*/
    this->WinModemClass_field_0x30 = 0; /*0x774520*/
    this->WinModemClass_field_0x34 = 0; /*0x774523*/
    this->WinModemClass_field_0x38 = (int)CreateEventA(0, 1, 1, 0); /*0x77452e*/
    *((_DWORD *)this + 15) = 0; /*0x774531*/
    this->u32_10 = 0; /*0x774534*/
    *((_DWORD *)this + 17) = 0; /*0x774537*/
    *((_DWORD *)this + 18) = 0; /*0x77453a*/
    *((_DWORD *)this + 19) = CreateEventA(0, 1, 1, 0); /*0x774543*/
    if ( GetCommState(FileA, &DCB) /*0x774598*/
      && (DCB.Parity = a4,
          DCB.BaudRate = a3,
          DCB.ByteSize = a5,
          DCB.StopBits = a6 - 1,
          *((_DWORD *)&DCB + 2) = *((_DWORD *)&DCB + 2) & 0xFFFF88C0 | 0x2015,
          SetCommState(FileA, &DCB)) )
    {
      qmemcpy((char *)this + 8300, &DCB, 0x1Cu); /*0x7745b9*/
    }
    else
    {
      Debug::Log(); /*0x7745c5*/
    }
    CommTimeouts.ReadIntervalTimeout = 1000; /*0x7745d8*/
    CommTimeouts.ReadTotalTimeoutMultiplier = 0; /*0x7745dc*/
    CommTimeouts.ReadTotalTimeoutConstant = 3000; /*0x7745e0*/
    CommTimeouts.WriteTotalTimeoutMultiplier = 500; /*0x7745e8*/
    CommTimeouts.WriteTotalTimeoutConstant = 1000; /*0x7745f0*/
    if ( !SetCommTimeouts(FileA, &CommTimeouts) ) /*0x7745f4*/
      Debug::Log(); /*0x774604*/
    (*(void (__thiscall **)(WinModemClass *, int))(*(_DWORD *)this->__pad_0 + 16))(this, 1); /*0x774612*/
    if ( ClearCommError(*((HANDLE *)this + 23), &Errors, &Stat) ) /*0x774623*/
    {
      v9 = Errors; /*0x77462d*/
      cbInQue = Stat.cbInQue; /*0x774631*/
      cbOutQue = Stat.cbOutQue; /*0x774635*/
      v12 = Errors == 0; /*0x774639*/
      this->WinModemClass_field_0x1C = Stat.cbInQue; /*0x77463b*/
      this->WinModemClass_field_0x20 = cbOutQue; /*0x77463e*/
      if ( !v12 ) /*0x774641*/
        WinModemClass::LogCommErrors(this, v9, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774657*/
    }
    return (int)FileA; /*0x77465d*/
  }
}



// ==== 0x00774670  NullModemClass::sendData  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass::sendData(NullModemClass *this)
{
  void *v2; // ecx
  DWORD v4; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v7; // zf
  void *v8; // [esp-8h] [ebp-44h]
  DWORD Errors; // [esp+Ch] [ebp-30h] BYREF
  DWORD EvtMask; // [esp+10h] [ebp-2Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-28h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-1Ch] BYREF

  Debug::Log(); /*0x77467d*/
  PurgeComm(*((HANDLE *)this + 23), 0xFu); /*0x77468b*/
  ResetEvent(*((HANDLE *)this + 14)); /*0x77469b*/
  ResetEvent(*((HANDLE *)this + 19)); /*0x7746a1*/
  v8 = (void *)*((_DWORD *)this + 23); /*0x7746ad*/
  this->PacketsReceived = 0; /*0x7746ae*/
  *((_BYTE *)this + 81) = 0; /*0x7746b1*/
  if ( GetCommState(v8, &DCB) ) /*0x7746b4*/
  {
    v2 = (void *)*((_DWORD *)this + 23); /*0x7746c2*/
    DCB.BaudRate = 9600; /*0x7746d7*/
    DCB.Parity = 0; /*0x7746df*/
    DCB.ByteSize = 8; /*0x7746e3*/
    DCB.StopBits = 0; /*0x7746e8*/
    *((_DWORD *)&DCB + 2) = *((_DWORD *)&DCB + 2) & 0xFFFF88C0 | 0x1011; /*0x7746ec*/
    if ( !SetCommState(v2, &DCB) ) /*0x7746f0*/
    {
      Debug::Log(); /*0x774700*/
      return 0; /*0x774710*/
    }
  }
  else
  {
    Debug::Log(); /*0x774717*/
  }
  GetCommMask(*((HANDLE *)this + 23), &EvtMask); /*0x774728*/
  (*(void (__thiscall **)(NullModemClass *, int))(*(_DWORD *)this->ConnectionClass + 16))(this, 1); /*0x774734*/
  (*(void (__thiscall **)(NullModemClass *))(*(_DWORD *)this->ConnectionClass + 12))(this); /*0x77473b*/
  if ( !EscapeCommFunction(*((HANDLE *)this + 23), 3u) ) /*0x774744*/
  {
    GetLastError(); /*0x77474f*/
    Debug::Log(); /*0x77475b*/
  }
  if ( ClearCommError(*((HANDLE *)this + 23), &Errors, &Stat) ) /*0x774771*/
  {
    v4 = Errors; /*0x77477b*/
    cbInQue = Stat.cbInQue; /*0x77477f*/
    cbOutQue = Stat.cbOutQue; /*0x774783*/
    v7 = Errors == 0; /*0x774787*/
    *((_DWORD *)this + 7) = Stat.cbInQue; /*0x774789*/
    this->Active = cbOutQue; /*0x77478c*/
    if ( !v7 ) /*0x77478f*/
      WinModemClass::LogCommErrors((WinModemClass *)this, v4, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x7747a5*/
  }
  return 1; /*0x77470a*/
}



// ==== 0x007747C0  NullModemClass::receiveData  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::receiveData(NullModemClass *this)
{
  DWORD v2; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v5; // zf
  void *v7; // [esp-8h] [ebp-24h]
  DWORD Errors; // [esp+Ch] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+10h] [ebp-Ch] BYREF

  Debug::Log(); /*0x7747cd*/
  PurgeComm(*((HANDLE *)this + 23), 0xFu); /*0x7747db*/
  ResetEvent(*((HANDLE *)this + 14)); /*0x7747eb*/
  ResetEvent(*((HANDLE *)this + 19)); /*0x7747f1*/
  v7 = (void *)*((_DWORD *)this + 23); /*0x7747ff*/
  this->PacketsReceived = 0; /*0x774800*/
  *((_BYTE *)this + 81) = 0; /*0x774803*/
  if ( !SetCommState(v7, (LPDCB)((char *)this + 8300)) ) /*0x774806*/
    Debug::Log(); /*0x774816*/
  if ( !EscapeCommFunction(*((HANDLE *)this + 23), 3u) ) /*0x774824*/
  {
    GetLastError(); /*0x77482f*/
    Debug::Log(); /*0x77483b*/
  }
  if ( ClearCommError(*((HANDLE *)this + 23), &Errors, &Stat) ) /*0x774851*/
  {
    v2 = Errors; /*0x77485b*/
    cbInQue = Stat.cbInQue; /*0x77485f*/
    cbOutQue = Stat.cbOutQue; /*0x774863*/
    v5 = Errors == 0; /*0x774867*/
    *((_DWORD *)this + 7) = Stat.cbInQue; /*0x774869*/
    this->Active = cbOutQue; /*0x77486c*/
    if ( !v5 ) /*0x77486f*/
      WinModemClass::LogCommErrors((WinModemClass *)this, v2, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774885*/
  }
  return (*(int (__thiscall **)(NullModemClass *, int))(*(_DWORD *)this->ConnectionClass + 16))(this, 1); /*0x774893*/
}



// ==== 0x007748A0  WinModemClass::Release  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::Release(WinModemClass *this, int a2)
{
  this->u32_18 = a2; /*0x7748a4*/
  return a2; /*0x7748a7*/
}



// ==== 0x007748B0  WinModemClass::GetClassIdentifier  this=WinModemClass  sig=csp ====
int __fastcall WinModemClass::GetClassIdentifier(WinModemClass *this)
{
  int v1; // esi
  void *v3; // [esp-Ch] [ebp-10h]
  DWORD ModemStat; // [esp+0h] [ebp-4h] BYREF

  ModemStat = (DWORD)this; /*0x7748b0*/
  v1 = 0; /*0x7748b9*/
  v3 = (void *)*((_DWORD *)this + 23); /*0x7748bc*/
  ModemStat = 0; /*0x7748bd*/
  GetCommModemStatus(v3, &ModemStat); /*0x7748c1*/
  if ( (ModemStat & 0x10) != 0 ) /*0x7748cd*/
    v1 = 16; /*0x7748cf*/
  if ( (ModemStat & 0x20) != 0 ) /*0x7748d6*/
    v1 |= 0x20u; /*0x7748d8*/
  if ( (ModemStat & 0x40) != 0 ) /*0x7748dd*/
    v1 |= 0x40u; /*0x7748df*/
  if ( (ModemStat & 0x80u) != 0 ) /*0x7748e4*/
    return v1 | 0x80; /*0x7748e6*/
  return v1; /*0x7748f0*/
}



// ==== 0x00774900  WinModemClass::Init  this=WinModemClass  sig=csp ====
void __thiscall WinModemClass::Init(WinModemClass *this, char a2)
{
  if ( a2 ) /*0x774906*/
  {
    if ( EscapeCommFunction(*((HANDLE *)this + 23), 5u) ) /*0x77490e*/
      return; /*0x774916*/
  }
  else if ( EscapeCommFunction(*((HANDLE *)this + 23), 6u) ) /*0x774920*/
  {
    return; /*0x774928*/
  }
  GetLastError(); /*0x77492c*/
  Debug::Log(); /*0x774938*/
}



// ==== 0x00774950  SerialPort::Close  this=SerialPort  sig=csp ====
int __thiscall SerialPort::Close(SerialPort *this)
{
  int result; // eax

  if ( *((_DWORD *)this + 23) != -1 ) /*0x774957*/
  {
    Debug::Log(); /*0x77495e*/
    result = CloseHandle(*((HANDLE *)this + 23)); /*0x77496a*/
    *((_DWORD *)this + 23) = -1; /*0x774970*/
  }
  return result; /*0x774977*/
}



// ==== 0x00774980  WinModemClass::ReadSerial  this=WinModemClass  sig=csp ====
bool __thiscall WinModemClass::ReadSerial(int this)
{
  char v2; // al
  void *v3; // edx
  DWORD v4; // ecx
  DWORD v5; // eax
  int cbInQue; // edi
  DWORD v8; // ecx
  DWORD cbOutQue; // eax
  bool v10; // zf
  void *v11; // ecx
  BOOL v12; // eax
  bool v13; // dl
  DWORD i; // eax
  DWORD NumberOfBytesTransferred; // [esp+10h] [ebp-18h] BYREF
  DWORD v16; // [esp+14h] [ebp-14h]
  DWORD Errors; // [esp+18h] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(_BYTE *)(this + 80); /*0x77498b*/
  v16 = 0; /*0x77498e*/
  if ( v2 ) /*0x774994*/
  {
    v3 = *(void **)(this + 92); /*0x774996*/
    NumberOfBytesTransferred = 0; /*0x7749a4*/
    if ( GetOverlappedResult(v3, (LPOVERLAPPED)(this + 40), &NumberOfBytesTransferred, 0) ) /*0x7749a8*/
    {
      v4 = NumberOfBytesTransferred; /*0x7749b2*/
      *(_BYTE *)(this + 80) = 0; /*0x7749b6*/
      if ( v4 ) /*0x7749bb*/
      {
        v5 = 0; /*0x7749bd*/
        do /*0x7749e4*/
        {
          *(_BYTE *)(*(_DWORD *)(this + 36) + *(_DWORD *)(this + 88)) = *(_BYTE *)(this + v5++ + 108); /*0x7749cd*/
          *(_DWORD *)(this + 88) = ((unsigned __int16)*(_DWORD *)(this + 88) + 1) & 0x1FFF; /*0x7749db*/
        }
        while ( v5 < NumberOfBytesTransferred ); /*0x7749e4*/
        v16 = NumberOfBytesTransferred; /*0x7749e6*/
      }
    }
    else
    {
      if ( GetLastError() == 996 ) /*0x7749f7*/
        return 0; /*0x774a02*/
      Debug::Log(); /*0x774a09*/
    }
  }
  ResetEvent(*(HANDLE *)(this + 56)); /*0x774a15*/
  cbInQue = 1; /*0x774a29*/
  if ( ClearCommError(*(HANDLE *)(this + 92), &Errors, &Stat) ) /*0x774a2e*/
  {
    v8 = Errors; /*0x774a38*/
    cbInQue = Stat.cbInQue; /*0x774a3c*/
    cbOutQue = Stat.cbOutQue; /*0x774a40*/
    v10 = Errors == 0; /*0x774a44*/
    *(_DWORD *)(this + 28) = Stat.cbInQue; /*0x774a46*/
    *(_DWORD *)(this + 32) = cbOutQue; /*0x774a49*/
    if ( !v10 ) /*0x774a4c*/
    {
      WinModemClass::LogCommErrors((WinModemClass *)this, v8, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774a62*/
      cbInQue = Stat.cbInQue; /*0x774a67*/
    }
    if ( cbInQue < 0x2000 ) /*0x774a71*/
    {
      if ( !cbInQue ) /*0x774a7c*/
        cbInQue = 1; /*0x774a7e*/
    }
    else
    {
      cbInQue = 0x2000; /*0x774a73*/
    }
  }
  while ( 1 ) /*0x774a86*/
  {
    v11 = *(void **)(this + 92); /*0x774a86*/
    NumberOfBytesTransferred = 0; /*0x774a95*/
    v12 = ReadFile(v11, (LPVOID)(this + 108), cbInQue, &NumberOfBytesTransferred, (LPOVERLAPPED)(this + 40)); /*0x774a99*/
    v13 = v12; /*0x774aa1*/
    if ( !v12 ) /*0x774aa6*/
      break; /*0x774aa6*/
    if ( NumberOfBytesTransferred ) /*0x774aae*/
    {
      for ( i = 0; i < NumberOfBytesTransferred; ++i ) /*0x774ab0*/
      {
        *(_BYTE *)(*(_DWORD *)(this + 36) + *(_DWORD *)(this + 88)) = *(_BYTE *)(i + this + 108); /*0x774abf*/
        *(_DWORD *)(this + 88) = ((unsigned __int16)*(_DWORD *)(this + 88) + 1) & 0x1FFF; /*0x774acd*/
      }
      v16 += NumberOfBytesTransferred; /*0x774ada*/
    }
    cbInQue = 1; /*0x774ae1*/
    if ( !v13 ) /*0x774ae6*/
      return v16 != 0; /*0x774ae6*/
  }
  if ( GetLastError() == 997 ) /*0x774af5*/
  {
    v10 = v16 == 0; /*0x774afd*/
    *(_BYTE *)(this + 80) = 1; /*0x774aff*/
    return !v10; /*0x774b0d*/
  }
  Debug::Log(); /*0x774b14*/
  return v16 != 0; /*0x7749fb*/
}



// ==== 0x00774B30  WinModemClass::ReadBytes  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::ReadBytes(WinModemClass *this, _BYTE *a2, int a3)
{
  int v4; // ebx
  int v5; // ebx
  int v7; // ebp
  void (*v8)(void); // eax

  if ( !WinModemClass::ReadSerial((int)this) ) /*0x774b37*/
    return 0; /*0x774ba9*/
  v4 = *((_DWORD *)this + 22) - this->q015; /*0x774b46*/
  v5 = v4 + (v4 < 0 ? 0x2000 : 0);
  if ( v5 > a3 ) /*0x774b56*/
    v5 = a3; /*0x774b58*/
  if ( v5 <= 0 ) /*0x774b5c*/
    return v5; /*0x774ba2*/
  v7 = v5; /*0x774b63*/
  do /*0x774b96*/
  {
    v8 = (void (*)(void))*((_DWORD *)this + 25); /*0x774b65*/
    if ( v8 ) /*0x774b6a*/
    {
      if ( *(_BYTE *)(this->q015 + this->WinModemClass_field_0x24) != 13 ) /*0x774b78*/
        v8(); /*0x774b7a*/
    }
    *a2++ = *(_BYTE *)(this->q015 + this->WinModemClass_field_0x24); /*0x774b86*/
    --v7; /*0x774b92*/
    this->q015 = ((unsigned __int16)this->q015 + 1) & 0x1FFF; /*0x774b93*/
  }
  while ( v7 ); /*0x774b96*/
  return v5; /*0x774b99*/
}



// ==== 0x00774BC0  AsyncIO::WaitCompletion  this=WinModemClass  sig=csp ====
int __thiscall AsyncIO::WaitCompletion(int this)
{
  char v2; // al
  int v3; // esi
  int v4; // eax
  DWORD NumberOfBytesTransferred; // [esp+4h] [ebp-1Ch] BYREF
  int Ticks; // [esp+8h] [ebp-18h]
  int v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]

  Ticks = Timer::GetTicks(); /*0x774bcf*/
  v2 = *(_BYTE *)(this + 81); /*0x774bd3*/
  v9 = 0; /*0x774bd8*/
  if ( v2 ) /*0x774be0*/
  {
    Ticks = Timer::GetTicks(); /*0x774bf4*/
    v8 = v10; /*0x774c01*/
    v9 = 300; /*0x774c05*/
    do /*0x774c4d*/
    {
      if ( GetOverlappedResult(*(HANDLE *)(this + 92), (LPOVERLAPPED)(this + 60), &NumberOfBytesTransferred, 0) /*0x774c29*/
        || GetLastError() != 996 )
      {
        break; /*0x774c29*/
      }
      v3 = v9; /*0x774c2f*/
      if ( Ticks != -1 ) /*0x774c36*/
      {
        v4 = Timer::GetTicks() - Ticks; /*0x774c41*/
        if ( v4 >= v3 ) /*0x774c47*/
          break; /*0x774c47*/
        v3 -= v4; /*0x774c49*/
      }
    }
    while ( v3 ); /*0x774c4d*/
    *(_BYTE *)(this + 81) = 0; /*0x774c4f*/
  }
  return ResetEvent(*(HANDLE *)(this + 76)); /*0x774c60*/
}



// ==== 0x00774C70  WinModemClass::WriteSerial  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::WriteSerial(int *this, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int result; // eax
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

  AsyncIO::WaitCompletion((int)this); /*0x774c74*/
  result = WriteFile( /*0x774c90*/
             (HANDLE)*(this + 23),
             lpBuffer,
             nNumberOfBytesToWrite,
             &NumberOfBytesWritten,
             (LPOVERLAPPED)this + 3);
  if ( !result ) /*0x774c98*/
  {
    result = GetLastError(); /*0x774c9a*/
    if ( result == 997 ) /*0x774ca5*/
      *((_BYTE *)this + 81) = 1; /*0x774ca7*/
    else
      return Debug::Log(); /*0x774cb7*/
  }
  return result; /*0x774cab*/
}



// ==== 0x00774CD0  WinModemClass::LoadTypeData  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::LoadTypeData(WinModemClass *this, int a2, char *Str, int a4, int a5)
{
  WinModemClass *v5; // esi
  int v6; // ebx
  int v7; // edi
  int (*WinModemClass_field_0x2C)(void); // eax
  int result; // eax
  int Bytes; // eax
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  char *v15; // esi
  char *v16; // eax
  int v17; // eax
  int v19; // [esp+14h] [ebp-30h]
  int Ticks; // [esp+20h] [ebp-24h]
  int v21; // [esp+28h] [ebp-1Ch]

  v5 = this; /*0x774cd6*/
  v6 = 0; /*0x774ce6*/
  Timer::GetTicks(); /*0x774ce1*/
  Timer::GetTicks(); /*0x774cf4*/
  memset(Str, 0, a4); /*0x774d0e*/
  v7 = a5; /*0x774d24*/
  Ticks = Timer::GetTicks(); /*0x774d28*/
  v21 = a5; /*0x774d30*/
LABEL_2:
  v19 = Timer::GetTicks(); /*0x774d38*/
  while ( 1 )
  {
    WinModemClass_field_0x2C = (int (*)(void))v5[1].WinModemClass_field_0x2C; /*0x774d63*/
    if ( WinModemClass_field_0x2C ) /*0x774d68*/
    {
      result = WinModemClass_field_0x2C(); /*0x774d6a*/
      if ( result ) /*0x774d6e*/
        return result; /*0x774f2f*/
    }
    if ( !stru_A8EB00.?[412] ) /*0x774d7b*/
      return 0; /*0x774d7b*/
    Bytes = WinModemClass::ReadBytes(v5, &Str[v6], a4 - v6 < 0 ? 0 : a4 - v6);
    if ( Bytes ) /*0x774da0*/
    {
      v6 += Bytes; /*0x774da6*/
      Ticks = Timer::GetTicks(); /*0x774db1*/
      v21 = v7; /*0x774dc3*/
    }
    v11 = a2; /*0x774dcb*/
    if ( v19 != -1 ) /*0x774dd2*/
    {
      v12 = Timer::GetTicks() - v19; /*0x774ddd*/
      if ( v12 >= a2 ) /*0x774de3*/
        goto LABEL_20; /*0x774de3*/
      v11 = a2 - v12; /*0x774de5*/
    }
    if ( !v11 || v6 >= a4 ) /*0x774def*/
      goto LABEL_20; /*0x774def*/
    if ( strchr(Str, 13) ) /*0x774df4*/
    {
      if ( v7 == -1 ) /*0x774e07*/
        goto LABEL_20; /*0x774e07*/
      v13 = v21; /*0x774e0d*/
      if ( Ticks != -1 ) /*0x774e14*/
      {
        v14 = Timer::GetTicks() - Ticks; /*0x774e1f*/
        if ( v14 >= v21 ) /*0x774e25*/
          goto LABEL_20; /*0x774e25*/
        v13 = v21 - v14; /*0x774e27*/
      }
      if ( !v13 ) /*0x774e2b*/
      {
LABEL_20:
        Str[a4 - 1] = 0; /*0x774e31*/
        v15 = strstr(Str, word_832678); /*0x774e45*/
        if ( v15 ) /*0x774e4c*/
        {
          if ( *Str == 65 && Str[1] == 84 && strchr(Str, 13) ) /*0x774e5d*/
            v15 = strchr(Str, 13); /*0x774e74*/
          if ( v15 ) /*0x774e78*/
            goto LABEL_38; /*0x774e78*/
        }
        if ( *Str == 13 || *Str == 10 ) /*0x774e83*/
        {
          v15 = strchr(Str, 13); /*0x774e90*/
          v16 = strchr(Str, 10); /*0x774e92*/
          if ( !v15 || v16 && v16 < v15 ) /*0x774ea4*/
            v15 = strchr(Str, 10); /*0x774eb1*/
          if ( v15 ) /*0x774eb5*/
          {
LABEL_38:
            while ( *v15 == 13 || *v15 == 10 ) /*0x774ebf*/
              ++v15; /*0x774ec1*/
            if ( v15 != Str ) /*0x774ec6*/
            {
              memcpy(Str, v15, a4 - (v15 - Str)); /*0x774ed5*/
              v6 -= v15 - Str; /*0x774edd*/
              v7 = a5; /*0x774edf*/
            }
            if ( v15 ) /*0x774ee5*/
            {
              v5 = this; /*0x774ee7*/
              goto LABEL_2; /*0x774eeb*/
            }
          }
        }
        if ( strrchr(Str, 13) ) /*0x774ef3*/
          *strrchr(Str, 13) = 0; /*0x774f0a*/
        result = a2; /*0x774f11*/
        if ( v19 != -1 ) /*0x774f1a*/
        {
          v17 = Timer::GetTicks() - v19; /*0x774f25*/
          if ( v17 < a2 ) /*0x774f2b*/
            return a2 - v17; /*0x774f38*/
          return 0; /*0x774f3b*/
        }
        return result; /*0x774f1a*/
      }
    }
    v5 = this; /*0x774d5f*/
  }
}



// ==== 0x00774F50  WinModemClass::SaveToINI  this=WinModemClass  sig=csp ====
BOOL __thiscall WinModemClass::SaveToINI(WinModemClass *this, const char *NumberOfBytesWritten)
{
  unsigned int v3; // kr18_4
  char Buffer[80]; // [esp+10h] [ebp-50h] BYREF

  Debug::Log(); /*0x774f5e*/
  strcpy(Buffer, aAtd); /*0x774f83*/
  if ( this->u32_18 ) /*0x774f87*/
  {
    Debug::Log(); /*0x774fd5*/
    strcat(Buffer, aP); /*0x775002*/
  }
  else
  {
    strcat(Buffer, g_Str_T); /*0x774fbd*/
    Debug::Log(); /*0x774fc6*/
  }
  Debug::Log(); /*0x775010*/
  strcat(Buffer, NumberOfBytesWritten); /*0x77503e*/
  Debug::Log(); /*0x775047*/
  strcat(Buffer, (const char *)&word_8327A0); /*0x775071*/
  Debug::Log(); /*0x775084*/
  v3 = strlen(Buffer) + 1; /*0x775095*/
  AsyncIO::WaitCompletion((int)this); /*0x77509e*/
  if ( !WriteFile(*((HANDLE *)this + 23), Buffer, v3 - 1, (LPDWORD)&NumberOfBytesWritten, (LPOVERLAPPED)this + 3) ) /*0x7750b6*/
  {
    if ( GetLastError() == 997 ) /*0x7750cb*/
    {
      *((_BYTE *)this + 81) = 1; /*0x7750cf*/
      return AsyncIO::WaitCompletion((int)this); /*0x7750df*/
    }
    Debug::Log(); /*0x7750e9*/
  }
  return AsyncIO::WaitCompletion((int)this); /*0x7750d8*/
}



// ==== 0x00775110  WinModemClass::Dial  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::Dial(
        WinModemClass *this,
        const char *a2,
        unsigned __int8 a3,
        char *Destination,
        signed int Count,
        int a6,
        int a7,
        int a8)
{
  unsigned int v9; // kr0C_4
  int v10; // ecx
  int v11; // edx
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // esi
  int v21; // eax
  size_t v22; // eax
  size_t v24; // eax
  int i; // [esp+10h] [ebp-108h] BYREF
  int Ticks; // [esp+14h] [ebp-104h]
  int v27; // [esp+1Ch] [ebp-FCh]
  DWORD v28; // [esp+20h] [ebp-F8h] BYREF
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-F4h] BYREF
  char Str[80]; // [esp+28h] [ebp-F0h] BYREF
  char Buffer[80]; // [esp+78h] [ebp-A0h] BYREF
  _BYTE v32[80]; // [esp+C8h] [ebp-50h] BYREF

  LOWORD(i) = a3; /*0x77512a*/
  strcpy(Buffer, a2); /*0x77514b*/
  strcat(Buffer, (const char *)&i); /*0x77517a*/
  WinModemClass::ReadBytes(this, v32, 80); /*0x77518d*/
  Sleep(0x64u); /*0x775194*/
  WinModemClass::ReadBytes(this, v32, 80); /*0x7751a6*/
  for ( i = 0; i < a7; ++i ) /*0x7751bc*/
  {
    Ticks = Timer::GetTicks(); /*0x7751d1*/
    v9 = strlen(Buffer) + 1; /*0x7751de*/
    v27 = a6; /*0x7751ea*/
    AsyncIO::WaitCompletion((int)this); /*0x7751f2*/
    if ( !WriteFile(*((HANDLE *)this + 23), Buffer, v9 - 1, &NumberOfBytesWritten, (LPOVERLAPPED)this + 3) ) /*0x77520d*/
    {
      if ( GetLastError() == 997 ) /*0x77521e*/
        *((_BYTE *)this + 81) = 1; /*0x775220*/
      else
        Debug::Log(); /*0x77522d*/
    }
    AsyncIO::WaitCompletion((int)this); /*0x775237*/
    v10 = Ticks; /*0x77523c*/
    v11 = v27; /*0x775240*/
    v12 = v27; /*0x775247*/
    if ( Ticks == -1 ) /*0x775249*/
    {
      v15 = v27; /*0x77526a*/
    }
    else
    {
      v13 = Timer::GetTicks(); /*0x77524f*/
      v10 = Ticks; /*0x775254*/
      v14 = v13 - Ticks; /*0x775258*/
      if ( v14 >= v12 ) /*0x77525c*/
        return 0; /*0x77525c*/
      v11 = v27; /*0x775262*/
      v15 = v12 - v14; /*0x775266*/
    }
    if ( v15 <= 0 ) /*0x77526e*/
      return 0; /*0x77526e*/
    v16 = v11; /*0x775277*/
    if ( v10 == -1 ) /*0x775279*/
    {
      v19 = v11; /*0x775296*/
    }
    else
    {
      v17 = Timer::GetTicks(); /*0x77527f*/
      v10 = Ticks; /*0x775284*/
      v18 = v17 - Ticks; /*0x775288*/
      if ( v18 >= v16 ) /*0x77528c*/
        goto LABEL_16; /*0x77528c*/
      v11 = v27; /*0x77528e*/
      v19 = v16 - v18; /*0x775292*/
    }
    if ( v19 < 1 ) /*0x77529b*/
    {
LABEL_16:
      v11 = 1; /*0x77529d*/
      goto LABEL_21; /*0x7752a2*/
    }
    v20 = v11; /*0x7752a7*/
    if ( v10 != -1 ) /*0x7752a9*/
    {
      v21 = Timer::GetTicks() - Ticks; /*0x7752b4*/
      if ( v21 >= v20 ) /*0x7752ba*/
        v11 = 0; /*0x7752c2*/
      else
        v11 = v20 - v21; /*0x7752be*/
    }
LABEL_21:
    memset(Str, 0, sizeof(Str)); /*0x7752cf*/
    (*(void (__thiscall **)(WinModemClass *, int, char *, int, int))(*(_DWORD *)this->__pad_0 + 20))( /*0x7752e6*/
      this,
      v11,
      Str,
      80,
      a8);
    if ( !strcmp(Str, (const char *)&stru_82BA00.?) ) /*0x77531d*/
      return 3; /*0x775437*/
    if ( strstr(Str, g_INI_Key_OK) ) /*0x77532d*/
      return 2; /*0x775337*/
    if ( strstr(Str, aError) ) /*0x775347*/
      return 1; /*0x775449*/
    if ( strlen(Str) == 3 /*0x77538a*/
      && Str[0] >= 48
      && Str[0] <= 57
      && Str[1] >= 48
      && Str[1] <= 57
      && Str[2] >= 48
      && Str[2] <= 57 )
    {
      v24 = Count; /*0x77544c*/
      if ( Count >= 80 ) /*0x775456*/
        v24 = 80; /*0x775458*/
      strncpy(Destination, Str, v24); /*0x77546b*/
      return 2; /*0x775482*/
    }
    v22 = Count; /*0x775390*/
    if ( Count >= 80 ) /*0x77539a*/
      v22 = 80; /*0x77539c*/
    strncpy(Destination, Str, v22); /*0x7753af*/
    Sleep(0x64u); /*0x7753bf*/
    AsyncIO::WaitCompletion((int)this); /*0x7753c3*/
    if ( !WriteFile(*((HANDLE *)this + 23), &word_8327A0, 1u, &v28, (LPOVERLAPPED)this + 3) ) /*0x7753dc*/
    {
      if ( GetLastError() == 997 ) /*0x7753ed*/
        *((_BYTE *)this + 81) = 1; /*0x7753ef*/
      else
        Debug::Log(); /*0x7753fc*/
    }
    AsyncIO::WaitCompletion((int)this); /*0x775406*/
    Sleep(0x64u); /*0x77540d*/
  }
  return 0; /*0x775428*/
}



// ==== 0x007754A0  WinModemClass::ddtor  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::ddtor(WinModemClass *this, int a2)
{
  *((_DWORD *)this + 25) = a2; /*0x7754a4*/
  return a2; /*0x7754a7*/
}



// ==== 0x007754B0  WinModemClass::HangUp  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::HangUp(WinModemClass *this, int a2)
{
  *((_DWORD *)this + 26) = a2; /*0x7754b4*/
  return a2; /*0x7754b7*/
}



// ==== 0x007754C0  NullModemClass::GetMember23  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::GetMember23(NullModemClass *this)
{
  return *((_DWORD *)this + 23); /*0x7754c3*/
}



// ==== 0x007754D0  WinModemClass::LogCommErrors  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::LogCommErrors(WinModemClass *this, int a2, char a3, int a4, int a5)
{
  int result; // eax

  if ( a2 ) /*0x7754da*/
  {
    if ( (a2 & 8) != 0 ) /*0x7754e3*/
    {
      Debug::Log(); /*0x7754ea*/
      result = this->WinModemClass_field_0x04 + 1; /*0x7754f5*/
      this->WinModemClass_field_0x04 = result; /*0x7754f6*/
    }
    if ( (a2 & 0x10) != 0 ) /*0x7754fc*/
      result = Debug::Log(); /*0x775503*/
    if ( (a2 & 0x400) != 0 ) /*0x77550e*/
    {
      Debug::Log(); /*0x775515*/
      result = this->WinModemClass_field_0x08 + 1; /*0x775520*/
      this->WinModemClass_field_0x08 = result; /*0x775521*/
    }
    if ( (a2 & 2) != 0 ) /*0x775527*/
    {
      Debug::Log(); /*0x77552e*/
      result = this->WinModemClass_field_0x0C + 1; /*0x775539*/
      this->WinModemClass_field_0x0C = result; /*0x77553a*/
    }
    if ( (a2 & 1) != 0 ) /*0x775540*/
    {
      Debug::Log(); /*0x775547*/
      result = this->WinModemClass_field_0x10 + 1; /*0x775552*/
      this->WinModemClass_field_0x10 = result; /*0x775553*/
    }
    if ( (a2 & 4) != 0 ) /*0x775559*/
    {
      Debug::Log(); /*0x775560*/
      result = this->WinModemClass_field_0x14 + 1; /*0x77556b*/
      this->WinModemClass_field_0x14 = result; /*0x77556c*/
    }
    if ( (a2 & 0x100) != 0 ) /*0x775572*/
    {
      Debug::Log(); /*0x775579*/
      result = this->WinModemClass_field_0x18 + 1; /*0x775584*/
      this->WinModemClass_field_0x18 = result; /*0x775585*/
    }
  }
  if ( (a3 & 1) != 0 ) /*0x77558f*/
    result = Debug::Log(); /*0x775596*/
  if ( (a3 & 2) != 0 ) /*0x7755a1*/
    result = Debug::Log(); /*0x7755a8*/
  if ( (a3 & 4) != 0 ) /*0x7755b3*/
    result = Debug::Log(); /*0x7755ba*/
  if ( (a3 & 8) != 0 ) /*0x7755c5*/
    result = Debug::Log(); /*0x7755cc*/
  if ( (a3 & 0x10) != 0 ) /*0x7755d7*/
    result = Debug::Log(); /*0x7755de*/
  if ( (a3 & 0x20) != 0 ) /*0x7755e9*/
    result = Debug::Log(); /*0x7755f0*/
  if ( (a3 & 0x40) != 0 ) /*0x7755fd*/
    return Debug::Log(); /*0x775604*/
  return result; /*0x7755f8*/
}



// ==== 0x00775610  WinModemClass::QueryInterface  this=WinModemClass  sig=csp ====
void *__thiscall WinModemClass::QueryInterface(WinModemClass *this, char a2)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 23); /*0x775613*/
  *(_DWORD *)this->__pad_0 = &WinModemClass::`vftable'; /*0x775616*/
  if ( v3 != -1 ) /*0x77561f*/
  {
    Debug::Log(); /*0x775626*/
    CloseHandle(*((HANDLE *)this + 23)); /*0x775632*/
    *((_DWORD *)this + 23) = -1; /*0x775638*/
  }
  if ( this->WinModemClass_field_0x24 ) /*0x77563f*/
    __3_YAXPAX_Z((void *)this->WinModemClass_field_0x24); /*0x775647*/
  if ( (a2 & 1) != 0 ) /*0x775654*/
    __3_YAXPAX_Z(this); /*0x775657*/
  return this; /*0x775661*/
}



// ==== 0x00775670  sub_775670  this=-  sig=ida-proto ====
int sub_775670()
{
  dword_B72F28 = 0; /*0x775672*/
  dword_B72F2C = 0; /*0x775677*/
  dword_B72F30 = 0; /*0x77567c*/
  dword_B72F34 = 0; /*0x775681*/
  return 0; /*0x775686*/
}



// ==== 0x00775690  ScreenDialogToClient  this=Dialog  sig=csp ====
int __fastcall ScreenDialogToClient(HWND hWnd, LPRECT lpRect)
{
  int result; // eax
  int v4; // edi
  LONG v5; // ecx
  LONG top; // eax
  LONG v7; // edx
  LONG v8; // edx
  LONG v9; // ecx
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  result = GetWindowRect(hWnd, lpRect); /*0x775699*/
  v4 = result; /*0x77569f*/
  if ( result ) /*0x7756a3*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x7756b7*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x7756c8*/
    v5 = lpRect->right - Rect.left; /*0x7756d9*/
    top = Rect.top; /*0x7756db*/
    lpRect->left -= Rect.left; /*0x7756df*/
    v7 = lpRect->top; /*0x7756e1*/
    lpRect->right = v5; /*0x7756e4*/
    v8 = v7 - top; /*0x7756ea*/
    v9 = lpRect->bottom - top; /*0x7756ec*/
    lpRect->top = v8; /*0x7756f0*/
    lpRect->bottom = v9; /*0x7756f3*/
    return v4; /*0x7756ee*/
  }
  return result; /*0x7756a5*/
}



// ==== 0x00775700  CreateDialogIndirect  this=ObjectClass  sig=csp ====
const DLGTEMPLATE *__fastcall CreateDialogIndirect(
        HINSTANCE hInstance,
        HWND a2,
        HWND hWndParent,
        DLGPROC lpDialogFunc,
        int a5)
{
  int v5; // eax
  HWND *v6; // edi
  const DLGTEMPLATE *result; // eax
  HWND DialogIndirectParamA; // eax
  HWND v11; // esi

  v5 = g_DialogTrackingList; /*0x775700*/
  v6 = (HWND *)(8 * g_DialogTrackingList + 12004648); /*0x775708*/
  stru_B72D28[2 * g_DialogTrackingList] = 0; /*0x775718*/
  dword_B72D2C[2 * v5] = 0; /*0x775720*/
  result = (const DLGTEMPLATE *)FindResource((unsigned __int16)a2, (const CHAR *)5); /*0x77572b*/
  if ( result ) /*0x775732*/
  {
    ++g_DialogTrackingList; /*0x775747*/
    DialogIndirectParamA = CreateDialogIndirectParamA(hInstance, result, hWndParent, lpDialogFunc, 0); /*0x775755*/
    v11 = DialogIndirectParamA; /*0x77575b*/
    if ( DialogIndirectParamA ) /*0x77575f*/
    {
      ++dword_A8ED8C; /*0x77577c*/
      DialogQueue::PushEntry(DialogIndirectParamA); /*0x775781*/
      EnumChildWindows(v11, DialogClass::Reposition, 1); /*0x77578e*/
      DialogClass::Reposition(v11, 0); /*0x775797*/
      *v6 = v11; /*0x77579c*/
      v6[1] = a2; /*0x77579e*/
      if ( a5 ) /*0x7757a7*/
        ShowWindow(v11, 1); /*0x7757ac*/
      SetForegroundWindow(v11); /*0x7757b3*/
      SetFocus(v11); /*0x7757ba*/
      hWnd = v11; /*0x7757c0*/
      dword_B72F48 = (int)a2; /*0x7757c9*/
      return (const DLGTEMPLATE *)v11; /*0x7757c6*/
    }
    else
    {
      --g_DialogTrackingList; /*0x775769*/
      return 0; /*0x77576e*/
    }
  }
  return result; /*0x775734*/
}



// ==== 0x007757E0  CloseDialog  this=AbstractClass  sig=csp ====
int __fastcall CloseDialog(HWND a1, int a2)
{
  int result; // eax
  Dialog *v3; // ebx
  ObjectClass *i; // esi
  int v5; // edi
  DialogQueue **v6; // esi
  int v7; // ebx
  HWND v8; // esi
  int v9; // edi

  if ( a1 || g_DialogTrackingList && (a1 = *(&g_ClipboardBuffer + 2 * g_DialogTrackingList)) != 0 ) /*0x7757fe*/
  {
    result = 0; /*0x775806*/
    if ( g_DialogTrackingList <= 0 ) /*0x77580a*/
      goto LABEL_11; /*0x77580a*/
    for ( i = &stru_B72D28; i->AbstractClass != a1; i = (ObjectClass *)((char *)i + 8) ) /*0x77580c*/
    {
      if ( ++result >= g_DialogTrackingList ) /*0x77581b*/
      {
        LOBYTE(result) = 0; /*0x77581e*/
        return result; /*0x775822*/
      }
    }
    v5 = result; /*0x775826*/
    if ( result == -1 ) /*0x775828*/
    {
LABEL_11:
      LOBYTE(result) = 0; /*0x77582b*/
    }
    else
    {
      Dialog::IdleProcess(v3, i); /*0x775831*/
      if ( g_DialogTrackingList - 1 >= v5 ) /*0x77583e*/
      {
        v6 = (DialogQueue **)(8 * (g_DialogTrackingList - 1) + 12004648); /*0x775840*/
        v7 = g_DialogTrackingList - v5; /*0x775851*/
        do /*0x775870*/
        {
          DialogQueue::RemoveEntry(*v6); /*0x775855*/
          DestroyWindow((HWND)*v6); /*0x77585d*/
          v6 -= 2; /*0x775865*/
          --v7; /*0x775869*/
          --*(_DWORD *)&stru_A8EB00.?[424]; /*0x77586a*/
        }
        while ( v7 ); /*0x775870*/
      }
      g_DialogTrackingList = v5; /*0x775875*/
      if ( v5 ) /*0x77587d*/
      {
        v8 = *(&g_ClipboardBuffer + 2 * v5); /*0x77587f*/
        v9 = dword_B72D24[2 * v5]; /*0x775886*/
        SetForegroundWindow(v8); /*0x77588e*/
        InvalidateRect(v8, 0, 0); /*0x775897*/
        UpdateWindow(v8); /*0x77589e*/
        hWnd = v8; /*0x7758a4*/
        dword_B72F48 = v9; /*0x7758aa*/
        SetFocus(v8); /*0x7758b1*/
        result = SendMessageA(hWnd, 0x4B0u, 0, 0); /*0x7758c5*/
      }
      else
      {
        hWnd = 0; /*0x7758e1*/
        dword_B72F48 = 0; /*0x7758e8*/
        result = (int)SetFocus(g_hWnd); /*0x7758ee*/
      }
      LOBYTE(result) = 1; /*0x7758cb*/
      dword_B72F4C = a2; /*0x7758d3*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x775801*/
  }
  return result; /*0x775800*/
}



// ==== 0x00775940  Dialog::FindByHandle  this=Dialog  sig=csp ====
int __thiscall Dialog::FindByHandle(Dialog *this)
{
  int v1; // eax
  Dialog **i; // edx

  v1 = g_DialogTrackingList - 1; /*0x775945*/
  if ( g_DialogTrackingList - 1 < 0 ) /*0x775948*/
    return 0; /*0x77595d*/
  for ( i = (Dialog **)(8 * v1 + 12004652); this != *i; i -= 2 ) /*0x77594a*/
  {
    if ( --v1 < 0 ) /*0x77595b*/
      return 0; /*0x77595b*/
  }
  return *((_DWORD *)&stru_B72D28.AbstractClass + 2 * v1); /*0x77595f*/
}



// ==== 0x007759B0  Dialog::FindByPtr  this=Dialog  sig=csp ====
int __thiscall Dialog::FindByPtr(Dialog *this)
{
  int v1; // eax
  Dialog **i; // edx

  v1 = g_DialogTrackingList - 1; /*0x7759b5*/
  if ( g_DialogTrackingList - 1 < 0 ) /*0x7759b8*/
    return 0; /*0x7759d1*/
  for ( i = (Dialog **)(8 * v1 + 12004648); this != *i || v1 <= 0; i -= 2 ) /*0x7759ba*/
  {
    if ( --v1 < 0 ) /*0x7759cf*/
      return 0; /*0x7759cf*/
  }
  return (int)*(&g_ClipboardBuffer + 2 * v1); /*0x7759d3*/
}



// ==== 0x007759E0  MessageDialogLoopAlt  this=AbstractClass  sig=csp ====
int __fastcall MessageDialogLoopAlt(HWND hWnd, unsigned __int8 (*a2)(void), int a3, char a4, char a5)
{
  int v7; // eax
  TechnoTypeClass *v8; // ecx
  int v9; // eax
  HWND *v10; // ecx
  int v12; // [esp+0h] [ebp-2Ch]
  MSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  if ( a4 ) /*0x7759f1*/
  {
    SetForegroundWindow(hWnd); /*0x7759f4*/
    SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x775a04*/
  }
  if ( a5 ) /*0x775a10*/
    ShowWindow(hWnd, 1); /*0x775a15*/
  while ( 1 ) /*0x775a2d*/
  {
    v7 = 0; /*0x775a2d*/
    if ( g_DialogTrackingList <= 0 ) /*0x775a31*/
      break; /*0x775a31*/
    v8 = (TechnoTypeClass *)stru_B72D28; /*0x775a37*/
    while ( (HWND)v8->ObjectTypeClass[0] != hWnd ) /*0x775a3e*/
    {
      ++v7; /*0x775a40*/
      v8 = (TechnoTypeClass *)((char *)v8 + 8); /*0x775a41*/
      if ( v7 >= g_DialogTrackingList ) /*0x775a46*/
        goto LABEL_23; /*0x775a46*/
    }
    if ( a2 && a2() == 1 ) /*0x775a56*/
      CloseDialog(hWnd, 2); /*0x775a5f*/
    if ( !byte_B77DC1 ) /*0x775a6b*/
    {
      LOBYTE(v8) = 0; /*0x775a6d*/
      ScreenSaver::Process(v8, v12); /*0x775a6f*/
    }
    ++dword_AA0430; /*0x775a7f*/
    while ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x775a8d*/
    {
      TranslateMessage(&Msg); /*0x775a9b*/
      DispatchMessageA(&Msg); /*0x775aa2*/
      v9 = 0; /*0x775aaa*/
      if ( g_DialogTrackingList <= 0 ) /*0x775aae*/
        break; /*0x775aae*/
      v10 = (HWND *)stru_B72D28; /*0x775ab0*/
      while ( *v10 != hWnd ) /*0x775ab7*/
      {
        ++v9; /*0x775ab9*/
        v10 += 2; /*0x775aba*/
        if ( v9 >= g_DialogTrackingList ) /*0x775abf*/
          goto LABEL_22; /*0x775abf*/
      }
    }
LABEL_22:
    Sleep(0); /*0x775ad8*/
  }
LABEL_23:
  if ( a4 ) /*0x775aeb*/
    SendMessageA(hWnd, 0x4A9u, 0, 0); /*0x775af7*/
  return dword_B72F4C; /*0x775b02*/
}



// ==== 0x00775B10  Dialog::GetCurrent  this=Dialog  sig=csp ====
int Dialog::GetCurrent()
{
  return (int)hWnd; /*0x775b15*/
}



// ==== 0x00775B20  Dialog::GetCurrentType  this=Dialog  sig=csp ====
int Dialog_GetCurrentType()
{
  return dword_B72F48; /*0x775b25*/
}



// ==== 0x00775B30  sub_775B30  this=-  sig=ida-proto ====
int sub_775B30()
{
  return dword_B72F4C; /*0x775b35*/
}



// ==== 0x00775B40  sub_775B40  this=-  sig=csp ====
INT_PTR __stdcall sub_775B40(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  return 0; /*0x775b42*/
}



// ==== 0x00775B50  sub_775B50  this=-  sig=csp ====
int __fastcall sub_775B50(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), int a3, LONG *a4)
{
  HWND DialogParamA; // esi
  LONG bottom; // ecx
  struct tagRECT Rect; // [esp+4h] [ebp-10h] BYREF

  DialogParamA = CreateDialogParamA(g_hInstance, (LPCSTR)a1, 0, a2, 0); /*0x775b70*/
  GetClientRect(DialogParamA, &Rect); /*0x775b74*/
  DestroyWindow(DialogParamA); /*0x775b7b*/
  bottom = Rect.bottom; /*0x775b89*/
  *a4 = Rect.right; /*0x775b8e*/
  a4[1] = bottom; /*0x775b90*/
  return 1; /*0x775b8d*/
}



// ==== 0x00775BA0  Dialog::GetField  this=Dialog  sig=csp ====
int __thiscall Dialog::GetField(Dialog *this)
{
  EnumChildWindows((HWND)this, DialogClass::Reposition, 1); /*0x775bab*/
  return DialogClass::Reposition((HWND)this, 0); /*0x775bb9*/
}



// ==== 0x00775BC0  DialogClass::Reposition  this=DialogClass  sig=csp ====
BOOL __stdcall DialogClass_Reposition(HWND hWnd, LPARAM a2)
{
  HWND WindowLongA; // eax
  LONG right; // edi
  HWND DialogParamA; // esi
  LONG bottom; // ebx
  int v7; // [esp-Ch] [ebp-BCh]
  int v8; // [esp-8h] [ebp-B8h]
  struct tagRECT Rect; // [esp+10h] [ebp-A0h] BYREF
  struct tagRECT v10; // [esp+20h] [ebp-90h] BYREF
  CHAR ClassName[128]; // [esp+30h] [ebp-80h] BYREF

  GetWindowRect(hWnd, &Rect); /*0x775bdd*/
  GetClassNameA(hWnd, ClassName, 128); /*0x775bea*/
  if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x775c01*/
    SendMessageA(hWnd, 0x152u, 0, (LPARAM)&Rect); /*0x775c37*/
  if ( a2 ) /*0x775c46*/
  {
    WindowLongA = (HWND)GetWindowLongA(hWnd, -8); /*0x775c4b*/
    GetWindowRect(WindowLongA, &v10); /*0x775c57*/
    Rect.left -= v10.left; /*0x775c79*/
    Rect.right -= v10.left; /*0x775c7d*/
    Rect.top -= v10.top; /*0x775c81*/
    Rect.bottom -= v10.top; /*0x775c85*/
  }
  right = (LONG)dwInitParam; /*0x775c89*/
  if ( dwInitParam ) /*0x775c91*/
  {
    bottom = dword_B72F58; /*0x775cd7*/
  }
  else
  {
    DialogParamA = CreateDialogParamA(g_hInstance, (LPCSTR)0xC6, 0, sub_775B40, 0); /*0x775cac*/
    GetClientRect(DialogParamA, &v10); /*0x775cb4*/
    DestroyWindow(DialogParamA); /*0x775cbb*/
    right = v10.right; /*0x775cc1*/
    bottom = v10.bottom; /*0x775cc5*/
    dwInitParam = (HWND)v10.right; /*0x775cc9*/
    dword_B72F58 = v10.bottom; /*0x775ccf*/
  }
  v8 = dword_849DE4 * (Rect.bottom - Rect.top + 1) / bottom; /*0x775d19*/
  v7 = dword_849DE0 * (Rect.right - Rect.left + 1) / right; /*0x775d1a*/
  Rect.left = Rect.left * dword_849DE0 / right; /*0x775d2e*/
  Rect.right = v7 + Rect.left - 1; /*0x775d32*/
  Rect.top = Rect.top * dword_849DE4 / bottom; /*0x775d36*/
  Rect.bottom = v8 + Rect.top - 1; /*0x775d48*/
  MoveWindow(hWnd, Rect.left, Rect.top, v7, v8, 1); /*0x775d4c*/
  return 1; /*0x775d52*/
}



// ==== 0x00775D70  sub_775D70  this=-  sig=ida-proto ====
int sub_775D70()
{
  dword_B72F38 = 0; /*0x775d77*/
  dword_B72F3C = 0; /*0x775d7c*/
  dword_B72F40 = 0; /*0x775d81*/
  return atexit(sub_775D90); /*0x775d8c*/
}



// ==== 0x00775D90  sub_775D90  this=-  sig=ida-proto ====
void __cdecl sub_775D90()
{
  dword_B72F38 = 0; /*0x775d95*/
  __3_YAXPAX_Z(dword_B72F40); /*0x775da0*/
}



// ==== 0x00775DB0  CacheRenderedText  this=-  sig=ida-proto ====
int __fastcall CacheRenderedText(HDC a1, const char *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ebp
  const void *v8; // esi
  int result; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // ebx
  HDC v14; // edx
  char *v15; // esi
  char *v16; // edi
  char v17; // dl
  unsigned int v18; // ecx
  int v19; // ebx
  HDC v20; // edx
  char *v21; // esi
  char *v22; // edi
  char v23; // dl
  unsigned int v24; // ecx
  char *v25; // ebp
  HDC hdc; // [esp+10h] [ebp-98h]
  HDC hdca; // [esp+10h] [ebp-98h]
  char *v28; // [esp+14h] [ebp-94h]
  int v29; // [esp+14h] [ebp-94h]
  _DWORD v30[36]; // [esp+18h] [ebp-90h] BYREF

  v5 = dword_B72F38; /*0x775db6*/
  v6 = 0; /*0x775dbd*/
  if ( dword_B72F38 <= 0 ) /*0x775dc9*/
  {
LABEL_11:
    if ( a1 ) /*0x775e77*/
    {
      result = Render_Render_7760B0(a1, a3, a4, a5); /*0x775eb6*/
      v10 = result; /*0x775ebb*/
      v29 = result; /*0x775ebf*/
      if ( result ) /*0x775ec3*/
      {
        strcpy((char *)v30, a2); /*0x775ef2*/
        v30[33] = a4; /*0x775f09*/
        v11 = dword_B72F38; /*0x775f10*/
        v30[34] = a5; /*0x775f15*/
        v12 = dword_B72F38; /*0x775f1c*/
        v30[32] = a3; /*0x775f1e*/
        v30[35] = v10; /*0x775f27*/
        v13 = dword_B72F3C; /*0x775f30*/
        if ( dword_B72F38 >= dword_B72F3C ) /*0x775f38*/
        {
          v13 = 2 * dword_B72F38; /*0x775f46*/
          if ( 2 * dword_B72F38 < 10 ) /*0x775f4c*/
            v13 = 10; /*0x775f4e*/
          v14 = (HDC)__2_YAPAXI_Z(144 * v13); /*0x775f5f*/
          memset(v14, 0, 4 * ((unsigned int)(144 * v13) >> 2)); /*0x775f6a*/
          hdc = v14; /*0x775f74*/
          v15 = (char *)dword_B72F40; /*0x775f7a*/
          if ( dword_B72F40 ) /*0x775f82*/
          {
            v16 = (char *)v14; /*0x775f89*/
            v17 = -112 * dword_B72F38; /*0x775f91*/
            v18 = (unsigned int)(144 * dword_B72F38) >> 2; /*0x775f93*/
            qmemcpy(v16, dword_B72F40, 4 * v18); /*0x775f96*/
            qmemcpy(&v16[4 * v18], &v15[4 * v18], v17 & 3); /*0x775f9d*/
            v15 = (char *)dword_B72F40; /*0x775f9f*/
          }
          __3_YAXPAX_Z(v15); /*0x775fa6*/
          dword_B72F40 = hdc; /*0x775fb2*/
          v11 = dword_B72F38; /*0x775fb7*/
          dword_B72F3C = v13; /*0x775fbc*/
        }
        if ( v11 >= v13 ) /*0x775fc4*/
        {
          v19 = 2 * v11; /*0x775fc6*/
          if ( 2 * v11 < 10 ) /*0x775fcc*/
            v19 = 10; /*0x775fce*/
          v20 = (HDC)__2_YAPAXI_Z(144 * v19); /*0x775fdf*/
          memset(v20, 0, 4 * ((unsigned int)(144 * v19) >> 2)); /*0x775fea*/
          hdca = v20; /*0x775ff4*/
          v21 = (char *)dword_B72F40; /*0x775ffa*/
          if ( dword_B72F40 ) /*0x776002*/
          {
            v22 = (char *)v20; /*0x776009*/
            v23 = -112 * dword_B72F38; /*0x776011*/
            v24 = (unsigned int)(144 * dword_B72F38) >> 2; /*0x776013*/
            qmemcpy(v22, dword_B72F40, 4 * v24); /*0x776016*/
            qmemcpy(&v22[4 * v24], &v21[4 * v24], v23 & 3); /*0x77601d*/
            v21 = (char *)dword_B72F40; /*0x77601f*/
          }
          __3_YAXPAX_Z(v21); /*0x776026*/
          dword_B72F40 = hdca; /*0x776032*/
          v11 = dword_B72F38; /*0x776037*/
          dword_B72F3C = v19; /*0x77603c*/
        }
        if ( v12 < v11 ) /*0x776044*/
        {
          memcpy((char *)dword_B72F40 + 144 * v12 + 144, (char *)dword_B72F40 + 144 * v12, 144 * v11 - 144 * v12); /*0x776068*/
          v11 = dword_B72F38; /*0x77606d*/
        }
        v25 = (char *)dword_B72F40 + 144 * v12; /*0x776082*/
        if ( v25 ) /*0x776084*/
        {
          qmemcpy(v25, v30, 0x90u); /*0x776091*/
          v11 = dword_B72F38; /*0x776093*/
        }
        dword_B72F38 = v11 + 1; /*0x77609b*/
        return v29; /*0x7760a0*/
      }
    }
    else
    {
      return 0; /*0x775e7c*/
    }
  }
  else
  {
    v8 = dword_B72F40; /*0x775dcf*/
    v28 = (char *)dword_B72F40; /*0x775dd5*/
    while ( 1 ) /*0x775dd9*/
    {
      if ( v6 >= 0 && v6 < v5 ) /*0x775ddf*/
        qmemcpy(v30, v8, sizeof(v30)); /*0x775dea*/
      if ( !strcmp((const char *)v30, a2) && v30[32] == a3 && v30[33] == a4 && v30[34] == a5 ) /*0x775e53*/
        return v30[35]; /*0x775e88*/
      v5 = dword_B72F38; /*0x775e59*/
      ++v6; /*0x775e5e*/
      v8 = v28 + 144; /*0x775e5f*/
      v28 += 144; /*0x775e67*/
      if ( v6 >= dword_B72F38 ) /*0x775e6b*/
        goto LABEL_11; /*0x775e6b*/
    }
  }
  return result; /*0x775e79*/
}



// ==== 0x007760B0  Render_Render_7760B0  this=-  sig=csp ====
HFONT __fastcall sub_7760B0(HDC hdc, const char *a2, LONG a3, LONG a4, char a5)
{
  HFONT v7; // eax
  HFONT v8; // esi
  HGDIOBJ v9; // ebx
  HGDIOBJ v10; // eax
  struct tagPOINT pt; // [esp+10h] [ebp-7Ch] BYREF
  struct tagTEXTMETRICA tm; // [esp+18h] [ebp-74h] BYREF
  LOGFONTA lf; // [esp+50h] [ebp-3Ch] BYREF

  SaveDC(hdc); /*0x7760bc*/
  SetGraphicsMode(hdc, 2); /*0x7760c5*/
  ModifyWorldTransform(hdc, 0, 1u); /*0x7760d1*/
  SetViewportOrgEx(hdc, 0, 0, 0); /*0x7760db*/
  SetWindowOrgEx(hdc, 0, 0, 0); /*0x7760e5*/
  pt.x = a3; /*0x776101*/
  pt.y = a4; /*0x776105*/
  DPtoLP(hdc, &pt, 1); /*0x776109*/
  memset(&lf.lfWidth, 0, 12); /*0x77610f*/
  lf.lfHeight = -pt.y; /*0x776121*/
  lf.lfCharSet = 0; /*0x776133*/
  lf.lfOutPrecision = 0; /*0x77613b*/
  lf.lfClipPrecision = 0; /*0x776145*/
  lf.lfWeight = (a5 & 1) != 0 ? 0x2BC : 0;
  lf.lfUnderline = (a5 & 4) != 0; /*0x77615c*/
  lf.lfStrikeOut = (a5 & 8) != 0; /*0x776160*/
  lf.lfQuality = 0; /*0x77616c*/
  lf.lfItalic = (a5 & 2) != 0; /*0x776176*/
  lf.lfPitchAndFamily = 0; /*0x776187*/
  strcpy(lf.lfFaceName, a2); /*0x77618b*/
  v7 = CreateFontIndirectA(&lf); /*0x77619f*/
  v8 = v7; /*0x7761a1*/
  if ( a3 ) /*0x7761aa*/
  {
    v9 = SelectObject(hdc, v7); /*0x7761ba*/
    GetTextMetricsA(hdc, &tm); /*0x7761be*/
    v10 = SelectObject(hdc, v9); /*0x7761c6*/
    DeleteObject(v10); /*0x7761c9*/
    lf.lfWidth = Math::RoundToInt(fabs((double)pt.x) * (double)tm.tmAveCharWidth / fabs((double)pt.y) + 0.5); /*0x7761ec*/
    v8 = CreateFontIndirectA(&lf); /*0x7761f7*/
  }
  RestoreDC(hdc, -1); /*0x7761fc*/
  return v8; /*0x776204*/
}



// ==== 0x00776210  sub_776210  this=-  sig=ida-proto ====
int sub_776210()
{
  dword_B73088 = 0; /*0x776212*/
  dword_B7308C = 0; /*0x776217*/
  dword_B73090 = 0; /*0x77621c*/
  dword_B73094 = 0; /*0x776221*/
  return 0; /*0x776226*/
}



// ==== 0x00776230  sub_776230  this=-  sig=ida-proto ====
char __fastcall sub_776230(HWND hWnd, HWND a2, LPARAM *a3)
{
  LRESULT v6; // eax
  int v7; // ebx
  int v8; // edi
  LPARAM lParam[4]; // [esp+10h] [ebp-10h] BYREF

  if ( a3[23] ) /*0x77623f*/
  {
    if ( !SendMessageA(hWnd, 0x4C9u, (WPARAM)a2, a3[15]) ) /*0x77625b*/
      return 0; /*0x77626a*/
    *(&qword_B730A0 + 1) = (HWND)a3[15]; /*0x77627a*/
    SendMessageA(a2, 0x110Bu, 9u, 0); /*0x776280*/
    himl = (HIMAGELIST)SendMessageA(a2, 0x1112u, 0, a3[15]); /*0x776294*/
    lParam[0] = a3[15]; /*0x7762a5*/
    SendMessageA(a2, 0x1104u, 0, (LPARAM)lParam); /*0x7762a9*/
    v6 = SendMessageA(a2, 0x1106u, 0, 0); /*0x7762b5*/
    v7 = a3[24] - v6 - lParam[0]; /*0x7762c8*/
    v8 = a3[25] - lParam[1]; /*0x7762ca*/
    SetCapture(hWnd); /*0x7762cc*/
    ImageList_BeginDrag(himl, 0, v7, v8); /*0x7762dd*/
    ImageList_DragEnter(hWnd, 0, 0); /*0x7762e8*/
    SetTimer(hWnd, 1u, 1u, 0); /*0x7762f5*/
    byte_B7309C = 1; /*0x7762fb*/
    qword_B730A0 = a2; /*0x776302*/
  }
  return byte_B7309C; /*0x776261*/
}



// ==== 0x00776320  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_776320(ObjectClass *this)
{
  int v2; // edx
  HCURSOR CursorA; // eax
  char v4; // bl
  HCURSOR v5; // eax
  struct tagPOINT v7[5]; // [esp+4h] [ebp-88h] BYREF
  struct tagRECT Rect; // [esp+2Ch] [ebp-60h] BYREF
  WPARAM wParam[10]; // [esp+3Ch] [ebp-50h] BYREF
  WPARAM v10[10]; // [esp+64h] [ebp-28h] BYREF

  if ( !byte_B7309C ) /*0x776330*/
    return 0; /*0x776480*/
  ImageList_DragShowNolock(0); /*0x77633b*/
  qmemcpy(v7, HitDialogTest((unsigned int)this, v2, v7), sizeof(v7)); /*0x776359*/
  qmemcpy(wParam, v7, sizeof(wParam)); /*0x77636c*/
  if ( SendMessageA((HWND)v7[0].y, 0x4C8u, (WPARAM)wParam, (LPARAM)this) ) /*0x776379*/
  {
    CursorA = LoadCursorA(0, (LPCSTR)0x7F00); /*0x77638a*/
    SetCursor(CursorA); /*0x776391*/
    v4 = 1; /*0x776397*/
  }
  else
  {
    v5 = LoadCursorA(0, (LPCSTR)0x7F88); /*0x7763a2*/
    SetCursor(v5); /*0x7763a9*/
    v4 = 0; /*0x7763af*/
  }
  ImageList_DragShowNolock(1); /*0x7763b3*/
  GetWindowRect((HWND)wParam[1], &Rect); /*0x7763c3*/
  ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top); /*0x7763df*/
  ImageList_EndDrag(); /*0x7763e5*/
  ReleaseCapture(); /*0x7763eb*/
  ImageList_Destroy(himl); /*0x7763f8*/
  himl = 0; /*0x776405*/
  byte_B7309C = 0; /*0x77640f*/
  qmemcpy(v7, HitDialogTest((unsigned int)this, (int)v7, v7), sizeof(v7)); /*0x776426*/
  qmemcpy(v10, v7, sizeof(v10)); /*0x776435*/
  if ( v4 ) /*0x77643c*/
    SendMessageA((HWND)v7[0].y, 0x4CAu, (WPARAM)v10, (LPARAM)this); /*0x77644e*/
  KillTimer((HWND)v10[1], 1u); /*0x77645b*/
  SendMessageA(qword_B730A0, 0x110Bu, 8u, 0); /*0x776470*/
  return 1; /*0x776478*/
}



// ==== 0x00776490  HitDialogTest  this=ObjectClass  sig=csp ====
struct tagPOINT *__fastcall Dialog_HitTest(unsigned int a1, int a2, struct tagPOINT *a3)
{
  LONG v3; // ebx
  LONG v4; // esi
  HWND WindowLongA; // eax
  HWND v6; // edi
  HWND v7; // ebp
  POINT v9; // [esp-8h] [ebp-58h]
  struct tagPOINT Point; // [esp+10h] [ebp-40h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-38h] BYREF
  struct tagPOINT v12[5]; // [esp+28h] [ebp-28h] BYREF

  v3 = HIWORD(a1); /*0x7764a7*/
  v4 = (unsigned __int16)a1; /*0x7764a9*/
  v9.y = HIWORD(a1); /*0x7764af*/
  v9.x = (unsigned __int16)a1; /*0x7764b0*/
  WindowLongA = (HWND)GetWindowLongA(qword_B730A0, -8); /*0x7764b4*/
  v6 = ChildWindowFromPoint(WindowLongA, v9); /*0x7764bd*/
  v7 = (HWND)GetWindowLongA(v6, -8); /*0x7764ca*/
  if ( v6 == (HWND)GetWindowLongA(qword_B730A0, -8) ) /*0x7764d7*/
    v7 = v6; /*0x7764d9*/
  Point = (struct tagPOINT)__PAIR64__(v3, v4); /*0x7764df*/
  ClientToScreen(v7, &Point); /*0x7764e9*/
  v12[2] = Point; /*0x7764fd*/
  GetWindowRect(v6, &Rect); /*0x776505*/
  v12[4].x = Point.x - Rect.left; /*0x77651d*/
  v12[0].x = (LONG)v6; /*0x77652d*/
  v12[1] = *(struct tagPOINT *)&qword_B730A0; /*0x776531*/
  v12[3].x = v4; /*0x77653b*/
  v12[4].y = Point.y - Rect.top; /*0x77653f*/
  v12[0].y = (LONG)v7; /*0x77654e*/
  v12[3].y = v3; /*0x776556*/
  qmemcpy(a3, v12, 0x28u); /*0x77655a*/
  return a3; /*0x77655c*/
}



// ==== 0x00776570  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_776570(ObjectClass *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  HWND WindowLongA; // eax
  LRESULT v6; // eax
  LPARAM v7; // edi
  UINT v8; // [esp-10h] [ebp-2Ch]
  LRESULT v9; // [esp-Ch] [ebp-28h]
  struct tagPOINT Point; // [esp+4h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  if ( this == (ObjectClass *)1 && byte_B7309C )
  {
    GetCursorPos(&Point); /*0x77658f*/
    GetWindowRect(qword_B730A0, &Rect); /*0x7765a1*/
    v1 = Rect.top - Point.y; /*0x7765b3*/
    v2 = Point.y - Rect.bottom; /*0x7765b5*/
    if ( Rect.top - Point.y > Point.y - Rect.bottom ) /*0x7765b9*/
      v2 = Rect.top - Point.y; /*0x7765bb*/
    v3 = v2 <= 0 ? 0 : v2;
    if ( v3 > 0 ) /*0x7765c9*/
    {
      v4 = 500 - 40 * v3; /*0x7765da*/
      if ( v4 <= 5 ) /*0x7765df*/
        v4 = 5; /*0x7765e1*/
      v8 = v4; /*0x7765ea*/
      WindowLongA = (HWND)GetWindowLongA(qword_B730A0, -8); /*0x7765f5*/
      SetTimer(WindowLongA, 1u, v8, 0); /*0x7765fc*/
      v9 = SendMessageA(qword_B730A0, 0x110Au, 5u, 0); /*0x77661c*/
      if ( v1 <= 0 ) /*0x77661d*/
        v6 = SendMessageA(qword_B730A0, 0x110Au, 6u, v9); /*0x77663c*/
      else
        v6 = SendMessageA(qword_B730A0, 0x110Au, 7u, v9); /*0x77662d*/
      v7 = v6; /*0x776644*/
      ImageList_DragShowNolock(0); /*0x776648*/
      SendMessageA(qword_B730A0, 0x110Bu, 5u, v7); /*0x776659*/
      ImageList_DragShowNolock(1); /*0x77665d*/
    }
  }
}



// ==== 0x00776670  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_776670(ObjectClass *this)
{
  int v2; // edx
  HCURSOR CursorA; // eax
  char v4; // bl
  HCURSOR v5; // eax
  struct tagRECT Rect; // [esp+4h] [ebp-60h] BYREF
  WPARAM wParam[10]; // [esp+14h] [ebp-50h] BYREF
  struct tagPOINT v9[5]; // [esp+3Ch] [ebp-28h] BYREF

  if ( !byte_B7309C ) /*0x77667d*/
    return 0; /*0x77673a*/
  ImageList_DragShowNolock(0); /*0x77668e*/
  qmemcpy(v9, HitDialogTest((unsigned int)this, v2, v9), sizeof(v9)); /*0x7766a8*/
  qmemcpy(wParam, v9, sizeof(wParam)); /*0x7766bb*/
  if ( SendMessageA((HWND)v9[0].y, 0x4C8u, (WPARAM)wParam, (LPARAM)this) ) /*0x7766c8*/
  {
    CursorA = LoadCursorA(0, (LPCSTR)0x7F00); /*0x7766d9*/
    SetCursor(CursorA); /*0x7766e0*/
    v4 = 1; /*0x7766e6*/
  }
  else
  {
    v5 = LoadCursorA(0, (LPCSTR)0x7F88); /*0x7766f1*/
    SetCursor(v5); /*0x7766f8*/
    v4 = 0; /*0x7766fe*/
  }
  ImageList_DragShowNolock(1); /*0x776702*/
  GetWindowRect((HWND)wParam[1], &Rect); /*0x77670e*/
  ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top); /*0x77672a*/
  return v4; /*0x776735*/
}



// ==== 0x00776750  sub_776750  this=-  sig=ida-proto ====
char __fastcall sub_776750(HWND hWnd, int a2, int a3, int a4)
{
  LPARAM v4; // eax
  char v5; // bl
  int v6; // edx
  LPARAM lParam[6]; // [esp+4h] [ebp-28h] BYREF
  int v9; // [esp+1Ch] [ebp-10h]
  int v10; // [esp+20h] [ebp-Ch]

  v4 = *(_DWORD *)(a2 + 60); /*0x776753*/
  v5 = 0; /*0x77675a*/
  v6 = *(_DWORD *)(a2 + 12) - 1; /*0x77675c*/
  lParam[1] = v4; /*0x77675d*/
  lParam[0] = 50; /*0x776761*/
  if ( v6 ) /*0x776769*/
  {
    if ( v6 == 1 ) /*0x77676c*/
    {
      v5 = 1; /*0x776772*/
      v9 = a4; /*0x776774*/
      v10 = a4; /*0x776778*/
    }
  }
  else
  {
    v5 = 0; /*0x776782*/
    v9 = a3; /*0x776784*/
    v10 = a3; /*0x776788*/
  }
  SendMessageA(hWnd, 0x110Du, 0, (LPARAM)lParam); /*0x776799*/
  return v5; /*0x7767a1*/
}



// ==== 0x007767B0  sub_7767B0  this=-  sig=ida-proto ====
HWND __fastcall sub_7767B0(HWND hWnd, int a2, WPARAM wParam)
{
  HWND result; // eax

  result = (HWND)SendMessageA(hWnd, 0x110Fu, 0, 0); /*0x7767c7*/
  if ( result ) /*0x7767cb*/
  {
    result = (HWND)SendMessageA(result, 0xC5u, wParam, 0); /*0x7767da*/
    dword_B73080 = a2; /*0x7767dc*/
    qword_B730A0 = hWnd; /*0x7767e2*/
  }
  return result; /*0x7767e8*/
}



// ==== 0x007767F0  ObjectClass::method_7767F0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_7767F0(ObjectClass *this)
{
  char *referenceCount; // edi
  LPARAM lParam[10]; // [esp+8h] [ebp-28h] BYREF

  referenceCount = (char *)this->?; /*0x7767f7*/
  if ( !referenceCount ) /*0x7767fc*/
    return 0; /*0x776873*/
  String::Trim(referenceCount); /*0x776801*/
  strcpy((char *)dword_B73080, referenceCount); /*0x77681e*/
  lParam[1] = this->?; /*0x776835*/
  lParam[0] = 1; /*0x776847*/
  lParam[4] = dword_B73080; /*0x77684f*/
  SendMessageA(qword_B730A0, 0x110Du, 0, (LPARAM)lParam); /*0x776853*/
  return strlen((const char *)dword_B73080); /*0x77686a*/
}



// ==== 0x00776880  ObjectClass::System_Read  this=ObjectClass  sig=csp ====
BOOL __thiscall System_Read_776880(ObjectClass *this)
{
  HWND ptr_C; // esi
  ULONG_PTR WindowContextHelpId; // eax

  ptr_C = (HWND)this->?; /*0x776881*/
  WindowContextHelpId = GetWindowContextHelpId(ptr_C); /*0x776885*/
  return WinHelpA(ptr_C, szHelp, 8u, WindowContextHelpId); /*0x77689a*/
}



// ==== 0x007768A0  ObjectClass::System_Read_7768A0  this=ObjectClass  sig=csp ====
BOOL __thiscall System_Read_7768A0(ObjectClass *this)
{
  ULONG_PTR dwData[4]; // [esp+4h] [ebp-10h] BYREF

  dwData[2] = 0; /*0x7768b3*/
  dwData[3] = 0; /*0x7768b7*/
  dwData[0] = GetWindowLongA((HWND)this, -12); /*0x7768c2*/
  dwData[1] = GetWindowContextHelpId((HWND)this); /*0x7768cc*/
  return WinHelpA((HWND)this, szHelp, 0xAu, (ULONG_PTR)dwData); /*0x7768e3*/
}



// ==== 0x007768F0  LoadWOLSettings  this=-  sig=csp ====
BOOL __stdcall sub_7768F0(HWND hWnd, LPARAM a2)
{
  int v3; // ebp
  LRESULT i; // esi
  unsigned __int8 *v5; // ebp
  signed int j; // esi
  LRESULT v7; // eax
  unsigned int Int_Overwrite; // eax
  CHAR ClassName[64]; // [esp+10h] [ebp-40h] BYREF
  unsigned __int8 *hWnda; // [esp+54h] [ebp+4h]

  GetClassNameA(hWnd, ClassName, 64); /*0x776903*/
  if ( !strcmp(ClassName, aSystreeview32) ) /*0x77691a*/
  {
    v3 = 0; /*0x77694e*/
    hWnda = (unsigned __int8 *)dword_B73098; /*0x776958*/
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) ) /*0x776962*/
    {
      wsprintfA(ClassName, "TV%d", ++v3); /*0x776970*/
      if ( INIClass::ReadBool_Overwrite(a2, hWnda, (unsigned __int8 *)ClassName, 0) ) /*0x776989*/
        SendMessageA(hWnd, 0x1102u, 2u, i); /*0x776995*/
      else
        SendMessageA(hWnd, 0x1102u, 1u, i); /*0x77699f*/
    }
  }
  GetClassNameA(hWnd, ClassName, 64); /*0x7769ba*/
  if ( !strcmp(ClassName, aSyslistview32) ) /*0x7769d2*/
  {
    v5 = (unsigned __int8 *)dword_B73098; /*0x7769fb*/
    if ( hWnd ) /*0x776a03*/
    {
      for ( j = 0; j < 10; ++j ) /*0x776a05*/
      {
        wsprintfA(ClassName, "LV%d", j); /*0x776a12*/
        v7 = SendMessageA(hWnd, 0x101Du, j, 0); /*0x776a24*/
        Int_Overwrite = INIClass::ReadInt_Overwrite(a2, v5, (unsigned __int8 *)ClassName, v7); /*0x776a31*/
        if ( Int_Overwrite < 0x3E8 ) /*0x776a3b*/
          SendMessageA(hWnd, 0x101Eu, j, (unsigned __int16)Int_Overwrite); /*0x776a4a*/
      }
    }
  }
  return 1; /*0x776a52*/
}



// ==== 0x00776A70  SaveWOLLobbySettings  this=-  sig=ida-proto ====
void __fastcall SaveWOLLobbySettings(unsigned __int8 *a1, HWND a2, bool *lParam)
{
  int Int_Overwrite; // esi
  int v6; // edi
  int SystemMetrics; // eax
  int v8; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( a2 ) /*0x776a7b*/
  {
    GetWindowRect(a2, &Rect); /*0x776a89*/
    Int_Overwrite = INIClass::ReadInt_Overwrite(lParam, a1, (unsigned __int8 *)asc_84968C, Rect.left); /*0x776aa7*/
    v6 = INIClass::ReadInt_Overwrite(lParam, a1, (unsigned __int8 *)aY, Rect.top); /*0x776ab9*/
    SystemMetrics = GetSystemMetrics(0); /*0x776abd*/
    if ( Int_Overwrite + Rect.right - Rect.left > SystemMetrics ) /*0x776ad1*/
      Int_Overwrite = Rect.left + SystemMetrics - Rect.right; /*0x776ad9*/
    v8 = GetSystemMetrics(1); /*0x776add*/
    if ( v6 + Rect.bottom - Rect.top > v8 ) /*0x776af1*/
      v6 = Rect.top + v8 - Rect.bottom; /*0x776af9*/
    if ( Int_Overwrite < 0 ) /*0x776afd*/
      Int_Overwrite = 0; /*0x776aff*/
    if ( v6 < 0 ) /*0x776b03*/
      v6 = 0; /*0x776b05*/
    SetWindowPos(a2, 0, Int_Overwrite, v6, 0, 0, 5u); /*0x776b12*/
    dword_B73098 = a1; /*0x776b18*/
    EnumChildWindows(a2, LoadWOLSettings, (LPARAM)lParam); /*0x776b29*/
  }
}



// ==== 0x00776B40  SaveWOLUISettings  this=-  sig=csp ====
BOOL __stdcall sub_776B40(HWND hWnd, char *a2)
{
  int v2; // edi
  LRESULT i; // esi
  unsigned __int8 *v4; // edi
  signed int j; // esi
  unsigned int v6; // eax
  unsigned __int8 *Block; // [esp+10h] [ebp-64h]
  CHAR v9[32]; // [esp+14h] [ebp-60h] BYREF
  CHAR ClassName[4]; // [esp+34h] [ebp-40h] BYREF
  LRESULT v11; // [esp+38h] [ebp-3Ch]
  char v12; // [esp+3Ch] [ebp-38h]
  int v13; // [esp+40h] [ebp-34h]

  GetClassNameA(hWnd, ClassName, 64); /*0x776b53*/
  if ( !strcmp(ClassName, aSystreeview32) ) /*0x776b68*/
  {
    v2 = 0; /*0x776b9e*/
    Block = (unsigned __int8 *)dword_B73098; /*0x776ba8*/
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) ) /*0x776bb2*/
    {
      wsprintfA(v9, "TV%d", ++v2); /*0x776bc0*/
      *(_DWORD *)ClassName = 24; /*0x776bcd*/
      v13 = 32; /*0x776bd5*/
      v11 = i; /*0x776be6*/
      if ( SendMessageA(hWnd, 0x110Cu, 0, (LPARAM)ClassName) ) /*0x776bea*/
        INIClass::SetBool(a2, Block, v9, (v12 & 0x20) != 0); /*0x776c18*/
    }
  }
  GetClassNameA(hWnd, ClassName, 64); /*0x776c36*/
  if ( !strcmp(ClassName, aSyslistview32) ) /*0x776c4b*/
  {
    v4 = (unsigned __int8 *)dword_B73098; /*0x776c72*/
    if ( hWnd ) /*0x776c7a*/
    {
      for ( j = 0; j < 10; ++j ) /*0x776c7c*/
      {
        wsprintfA(v9, "LV%d", j); /*0x776c89*/
        v6 = SendMessageA(hWnd, 0x101Du, j, 0); /*0x776c9b*/
        if ( v6 < 0x3E8 ) /*0x776ca2*/
          INIClass::SetInt(a2, v4, v9, v6, 0); /*0x776cb4*/
      }
    }
  }
  return 1; /*0x776cbf*/
}



// ==== 0x00776CD0  sub_776CD0  this=-  sig=ida-proto ====
BOOL __fastcall sub_776CD0(unsigned __int8 *Block, HWND hWndParent, char *lParam)
{
  BOOL result; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( hWndParent ) /*0x776cdb*/
  {
    GetWindowRect(hWndParent, &Rect); /*0x776ce4*/
    INIClass::SetInt(lParam, Block, asc_84968C, Rect.left, 0); /*0x776cfd*/
    INIClass::SetInt(lParam, Block, aY, Rect.top, 0); /*0x776d11*/
    dword_B73098 = Block; /*0x776d16*/
    return EnumChildWindows(hWndParent, (WNDENUMPROC)SaveWOLUISettings, (LPARAM)lParam); /*0x776d23*/
  }
  return result; /*0x776d2a*/
}



// ==== 0x00776D80  Window::ClampToScreen  this=Window  sig=csp ====
int __stdcall Window::ClampToScreen(int *a1)
{
  char v1; // bl
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int result; // eax

  v1 = 0; /*0x776d86*/
  v2 = *a1; /*0x776d89*/
  if ( *a1 < 0 ) /*0x776d8d*/
  {
    v3 = a1[2]; /*0x776d8f*/
    *a1 = 0; /*0x776d92*/
    v1 = 1; /*0x776d9a*/
    a1[2] = v3 - v2; /*0x776d9c*/
  }
  v4 = a1[1]; /*0x776d9f*/
  if ( v4 < 0 ) /*0x776da4*/
  {
    v5 = a1[3]; /*0x776da6*/
    a1[1] = 0; /*0x776da9*/
    v1 = 1; /*0x776db2*/
    a1[3] = v5 - v4; /*0x776db4*/
  }
  if ( a1[2] > GetSystemMetrics(16) ) /*0x776dc4*/
  {
    *a1 += GetSystemMetrics(16) - a1[2]; /*0x776dd5*/
    a1[2] = GetSystemMetrics(16); /*0x776dd9*/
    v1 = 1; /*0x776ddc*/
  }
  result = GetSystemMetrics(17); /*0x776de0*/
  if ( a1[3] <= result ) /*0x776de5*/
  {
    LOBYTE(result) = v1; /*0x776e08*/
  }
  else
  {
    a1[1] += GetSystemMetrics(17) - a1[3]; /*0x776df7*/
    result = GetSystemMetrics(17); /*0x776dfa*/
    a1[3] = result; /*0x776dfc*/
    LOBYTE(result) = 1; /*0x776dff*/
  }
  return result; /*0x776e01*/
}



// ==== 0x00776E10  FindListBoxItem  this=ObjectClass  sig=csp ====
int __fastcall ListBox_FindItem(HWND hWnd, signed int wParam, int a3)
{
  LRESULT v6; // [esp+10h] [ebp-4h]

  v6 = SendMessageA(hWnd, 0x146u, 0, 0); /*0x776e2d*/
  if ( wParam >= v6 ) /*0x776e31*/
    return -1; /*0x776e4f*/
  while ( SendMessageA(hWnd, 0x150u, wParam, 0) != a3 ) /*0x776e44*/
  {
    if ( ++wParam >= v6 ) /*0x776e4d*/
      return -1; /*0x776e4d*/
  }
  return wParam; /*0x776e4f*/
}



// ==== 0x00776EA0  nullsub_261  this=-  sig=ida-proto ====
void nullsub_261()
{
  ; /*0x776ea0*/
}



// ==== 0x00776EB0  ObjectClass::method_776EB0  this=ObjectClass  sig=csp ====
void *__thiscall sub_776EB0(ObjectClass *this)
{
  void *dwBuildNumber; // eax
  void *dwMinorVersion; // edx
  DWORD dwPlatformId; // eax
  struct _OSVERSIONINFOA VersionInformation; // [esp+8h] [ebp-94h] BYREF

  this->AbstractClass = 0; /*0x776ec1*/
  this->? = 0; /*0x776ec3*/
  this->? = 0; /*0x776ec6*/
  this->onBridge = 0; /*0x776ec9*/
  this->isFallingDown = 0; /*0x776ecf*/
  VersionInformation.dwOSVersionInfoSize = 148; /*0x776ed5*/
  GetVersionExA(&VersionInformation); /*0x776edd*/
  dwBuildNumber = (void *)VersionInformation.dwBuildNumber; /*0x776ee7*/
  dwMinorVersion = (void *)VersionInformation.dwMinorVersion; /*0x776eeb*/
  this->AbstractClass = (void *)VersionInformation.dwMajorVersion; /*0x776eef*/
  this->? = dwBuildNumber; /*0x776ef1*/
  dwPlatformId = VersionInformation.dwPlatformId; /*0x776ef4*/
  this->? = dwMinorVersion; /*0x776efd*/
  if ( dwPlatformId == 1 ) /*0x776f02*/
  {
    this->onBridge = 1; /*0x776f04*/
  }
  else if ( dwPlatformId == 2 ) /*0x776f0f*/
  {
    this->isFallingDown = 1; /*0x776f11*/
  }
  strncpy((char *)&this->?, VersionInformation.szCSDVersion, 0x7Fu); /*0x776f22*/
  HIBYTE(this->parachute) = 0; /*0x776f2a*/
  return this; /*0x776f32*/
}



// ==== 0x00777060  Dialog::RestoreParent  this=Dialog  sig=csp ====
int __thiscall Dialog::RestoreParent(Dialog *this)
{
  int result; // eax

  result = GetWindowLongA((HWND)this, -8); /*0x777066*/
  if ( result ) /*0x77706e*/
    return SetDialogParent((HWND)this, (HWND)result); /*0x777074*/
  return result; /*0x777079*/
}



// ==== 0x00777080  SetDialogParent  this=Dialog  sig=csp ====
BOOL __fastcall Dialog_SetParent(HWND hWnd, HWND a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v9; // [esp+20h] [ebp-10h] BYREF

  GetClientRect(a2, &Rect); /*0x777097*/
  if ( a2 == g_hWnd ) /*0x77709f*/
  {
    Rect.right = g_DisplayWidth; /*0x7770ad*/
    Rect.bottom = MEMORY[0x8A00A8]; /*0x7770b1*/
  }
  ClientToScreen(a2, (LPPOINT)&Rect); /*0x7770c1*/
  ClientToScreen(a2, (LPPOINT)&Rect.right); /*0x7770c9*/
  Rect.right -= Rect.left; /*0x7770de*/
  Rect.bottom -= Rect.top; /*0x7770e9*/
  GetClientRect(hWnd, &v9); /*0x7770ed*/
  ClientToScreen(hWnd, (LPPOINT)&v9); /*0x7770f5*/
  ClientToScreen(hWnd, (LPPOINT)&v9.right); /*0x7770fd*/
  v4 = Rect.right - (v9.right - v9.left) + 1; /*0x777119*/
  v9.right -= v9.left; /*0x77711a*/
  v9.bottom -= v9.top; /*0x777121*/
  v5 = v4 / 2; /*0x77712d*/
  v6 = (Rect.bottom - v9.bottom + 1) / 2; /*0x777133*/
  if ( v5 < 0 ) /*0x777137*/
    v5 = 0; /*0x777139*/
  if ( v6 < 0 ) /*0x77713d*/
    v6 = 0; /*0x77713f*/
  return SetWindowPos(hWnd, 0, v5, v6, -1, -1, 5u); /*0x777152*/
}



// ==== 0x007771B0  sub_7771B0  this=-  sig=ida-proto ====
int sub_7771B0()
{
  dword_B730B8 = 0; /*0x7771b2*/
  dword_B730BC = 0; /*0x7771b7*/
  dword_B730C0 = 0; /*0x7771bc*/
  dword_B730C4 = 0; /*0x7771c1*/
  return 0; /*0x7771c6*/
}



// ==== 0x007771D0  sub_7771D0  this=-  sig=ida-proto ====
void sub_7771D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7771dc*/
  dbl_B730D0 = Math::Sqrt(v0 + v0); /*0x7771ee*/
}



// ==== 0x00777200  sub_777200  this=-  sig=ida-proto ====
void sub_777200()
{
  dbl_B73538 = dbl_B730D0 / 60.0; /*0x77720c*/
}



// ==== 0x00777220  sub_777220  this=-  sig=ida-proto ====
void sub_777220()
{
  dbl_B73520 = 1.0 / dbl_B73538; /*0x77722c*/
}



// ==== 0x00777240  sub_777240  this=-  sig=ida-proto ====
void sub_777240()
{
  dbl_B73310 = 0.0174532925199433 * 45.0; /*0x77724c*/
}



// ==== 0x00777260  sub_777260  this=-  sig=ida-proto ====
void sub_777260()
{
  dbl_B730D8 = 0.0174532925199433 * 60.0; /*0x77726c*/
}



// ==== 0x00777280  sub_777280  this=-  sig=ida-proto ====
void sub_777280()
{
  dbl_B730B0 = 0.0174532925199433 * 90.0; /*0x77728c*/
}



// ==== 0x007772A0  ScreenEffect::UpdateBob  this=ScreenEffect  sig=ida-proto ====
__int64 ScreenEffect_UpdateBob()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B730B0 - dbl_B730D8); /*0x7772b2*/
  result = Math::RoundToInt(v0 * dbl_B730D0 * 0.5); /*0x7772c6*/
  dword_B73540 = result; /*0x7772cb*/
  return result; /*0x7772d0*/
}



// ==== 0x007772E0  sub_7772E0  this=-  sig=ida-proto ====
void sub_7772E0()
{
  dbl_B730E0 = Math::ArcTan((double)dword_B73540 * 0.00390625); /*0x7772f7*/
}



// ==== 0x00777310  sub_777310  this=-  sig=ida-proto ====
void sub_777310()
{
  dbl_B73308 = Math::ArcTan((double)(2 * dword_B73540) / dbl_B730D0); /*0x777332*/
}



// ==== 0x00777340  sub_777340  this=-  sig=ida-proto ====
__int64 sub_777340()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B73540) + 0.5); /*0x77735b*/
  dword_B73534 = result; /*0x777360*/
  return result; /*0x777366*/
}



// ==== 0x00777370  sub_777370  this=-  sig=ida-proto ====
int sub_777370()
{
  word_B730C8 = 0; /*0x777372*/
  word_B730CA = 0; /*0x777378*/
  return 0; /*0x77737e*/
}



// ==== 0x00777380  sub_777380  this=-  sig=ida-proto ====
int sub_777380()
{
  dword_B732F8 = 0; /*0x777382*/
  dword_B732FC = 0; /*0x777387*/
  dword_B73300 = 0; /*0x77738c*/
  return 0; /*0x777391*/
}



// ==== 0x007773A0  sub_7773A0  this=-  sig=ida-proto ====
int sub_7773A0()
{
  dword_B73530 = 0; /*0x7773a5*/
  dword_B73528 = 128; /*0x7773af*/
  dword_B7352C = 128; /*0x7773b4*/
  return 128; /*0x7773b9*/
}



// ==== 0x00777420  ObjectClass::MainWindowProc_Read  this=ObjectClass  sig=csp ====
int MainWindowProc_Read(ObjectClass *this)
{
  int v1; // ecx
  AsyncIO *v2; // ecx
  int result; // eax
  HWND Current; // eax
  HWND v5; // eax

  Debug::Log(); /*0x777425*/
  sub_407040(v1); /*0x77742d*/
  Debug::Log(); /*0x77744b*/
  if ( stru_887598.lineTrailer && byte_B73560 == 1 && !stru_A8EB00.?[391] ) /*0x77746d*/
    (*(void (**)(void))(*(_DWORD *)stru_887598.lineTrailer + 24))(); /*0x777471*/
  if ( !g_DDraw_Initialized ) /*0x77747c*/
  {
    if ( DSurface_Alternate ) /*0x77748a*/
      DSurface::RestoreIfLost(DSurface_Alternate); /*0x77748c*/
    if ( g_DSurface_Hidden ) /*0x777499*/
      DSurface::RestoreIfLost((DSurface *)g_DSurface_Hidden); /*0x77749b*/
    if ( DSurface_Composite /*0x7774c7*/
      && DSurface::RestoreIfLost((DSurface *)DSurface_Composite)
      && (!stru_A8EB00.?[376] || *(int *)&stru_A8EB00.?[416] > 16) )
    {
      (*(void (__thiscall **)(AudioStream *, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 + 24))( /*0x7774d3*/
        DSurface_Composite,
        0);
    }
    if ( DSurface_Tile /*0x7774f8*/
      && DSurface::RestoreIfLost(DSurface_Tile)
      && (!stru_A8EB00.?[376] || *(int *)&stru_A8EB00.?[416] > 16) )
    {
      (*((void (__thiscall **)(DSurface *, _DWORD))DSurface_Tile->DSurface_field_0x0 + 6))(DSurface_Tile, 0); /*0x777504*/
    }
    if ( DSurface_Sidebar ) /*0x77750f*/
    {
      if ( DSurface::RestoreIfLost(DSurface_Sidebar) ) /*0x777511*/
      {
        g_CameoRenderFlag = 1; /*0x77751f*/
        if ( !stru_A8EB00.?[376] || *(int *)&stru_A8EB00.?[416] > 16 ) /*0x777530*/
          (*((void (__thiscall **)(DSurface *, _DWORD))DSurface_Sidebar->DSurface_field_0x0 + 6))(DSurface_Sidebar, 0); /*0x77753c*/
      }
    }
    if ( g_DSurface_Primary /*0x777561*/
      && DSurface::RestoreIfLost(g_DSurface_Primary)
      && (!stru_A8EB00.?[376] || *(int *)&stru_A8EB00.?[416] > 16) )
    {
      (*((void (__thiscall **)(DSurface *, char *, _DWORD))g_DSurface_Primary->DSurface_field_0x0 + 5))( /*0x777572*/
        g_DSurface_Primary,
        &DSurface_ViewBounds.__pad_8[8],
        0);
    }
  }
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x77757c*/
  InvalidateRect(g_hWnd, 0, 0); /*0x77758c*/
  LOBYTE(v2) = 0; /*0x777592*/
  AsyncIO::Read(v2); /*0x777594*/
  result = Dialog::GetCurrent(); /*0x777599*/
  if ( result ) /*0x7775a1*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x7775a3*/
    SetActiveWindow(Current); /*0x7775a9*/
    v5 = (HWND)Dialog::GetCurrent(); /*0x7775af*/
    return (int)SetFocus(v5); /*0x7775b5*/
  }
  return result; /*0x7775bb*/
}



// ==== 0x007775C0  MainWindowProc  this=-  sig=ida-proto ====
int __userpurge MainWindowProc@<eax>(
        int a1@<ecx>,
        int *a2@<ebx>,
        int a3@<ebp>,
        ObjectClass *a4@<edi>,
        int a5@<esi>,
        HWND hWnd,
        UINT Msg,
        unsigned int wParam,
        int *lParam)
{
  int v10; // eax
  HWND v11; // esi
  HWND v13; // edi
  UINT v14; // eax
  AudioStream *v15; // esi
  ObjectClass *v16; // esi
  char *v17; // eax
  char *v18; // esi
  AsyncIO *v19; // ecx
  const char *v20; // ecx
  int v21; // esi
  int v22; // eax
  WCHAR WideCharStr[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)WideCharStr = a1; /*0x7775c0*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x7775ce*/
  {
    v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 56))( /*0x7775d4*/
            *(_DWORD *)&stru_887598.isAliveFlag,
            -1);
    if ( Msg == v10 || Msg == 1141 ) /*0x7775e5*/
    {
      v11 = hWnd; /*0x7775f9*/
      if ( (*(int (__thiscall **)(_DWORD, HWND, UINT, unsigned int, int *))(**(_DWORD **)&stru_887598.isAliveFlag + 64))( /*0x7775ff*/
             *(_DWORD *)&stru_887598.isAliveFlag,
             hWnd,
             Msg,
             wParam,
             lParam) )
      {
        return DefWindowProcA(v11, Msg, wParam, (LPARAM)lParam); /*0x777624*/
      }
      return 0; /*0x777604*/
    }
  }
  v13 = hWnd; /*0x777627*/
  Tactical::HandleTacticalMouseInput( /*0x777640*/
    (Tactical *)&stru_87F5F0.__pad_58[416],
    (int)hWnd,
    &Msg,
    (int)&wParam,
    (HWND)&lParam);
  if ( g_hWnd ) /*0x77764c*/
    GetMenu(g_hWnd); /*0x77764f*/
  if ( Render_Draw_778030(v13, Msg, wParam, (LPARAM)lParam) ) /*0x777665*/
  {
    Debug::Log(); /*0x777673*/
    return dword_B73570; /*0x777684*/
  }
  v14 = Msg; /*0x777687*/
  if ( Msg <= 0x18 ) /*0x77768e*/
  {
    if ( Msg == 24 ) /*0x777694*/
      return 0; /*0x777a61*/
    switch ( Msg ) /*0x7776ae*/
    {
      case 1u: /*0x7776ae*/
        v17 = (char *)__2_YAPAXI_Z(0x268u); /*0x777792*/
        v18 = v17; /*0x777797*/
        if ( v17 ) /*0x77779e*/
        {
          MainWindowProc_Helper_724000(v17, (int)v13); /*0x7777a3*/
          *((_DWORD *)v18 + 153) = 7; /*0x7777a8*/
          *(_DWORD *)v18 = &CCToolTip::`vftable'; /*0x7777b2*/
          *(_DWORD *)&stru_88732C.__pad_1C[32] = v18; /*0x7777b8*/
        }
        else
        {
          *(_DWORD *)&stru_88732C.__pad_1C[32] = 0; /*0x7777c3*/
        }
        goto LABEL_69; /*0x7777be*/
      case 2u: /*0x7776ae*/
        if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x7777fb*/
        {
          (***(void (__thiscall ****)(_DWORD, int))&stru_88732C.__pad_1C[32])(*(_DWORD *)&stru_88732C.__pad_1C[32], 1); /*0x777801*/
          *(_DWORD *)&stru_88732C.__pad_1C[32] = 0; /*0x777803*/
        }
        g_hWnd = 0; /*0x77780e*/
        if ( *(_DWORD *)&stru_A8EB00.?[500] ) /*0x777816*/
          *(_DWORD *)&stru_A8EB00.?[500] = 2; /*0x777818*/
        return 0; /*0x777828*/
      case 3u: /*0x7776ae*/
        if ( g_DDraw_Initialized != 1 || !stru_887598.lineTrailer ) /*0x7777e3*/
          goto LABEL_70; /*0x7777e3*/
        MouseClass::CalcConfiningRect((MouseClass *)stru_887598.lineTrailer); /*0x7777e9*/
        goto LABEL_69; /*0x7777ee*/
      case 0xFu: /*0x7776ae*/
        if ( *(_DWORD *)&stru_A8EB00.?[444] /*0x777700*/
          || stru_A8EB00.?[412] != 1 && g_DDraw_Initialized != 1
          || !stru_887598.lineTrailer
          || !g_DSurface_Primary
          || !g_DSurface_Hidden
          || !DSurface_Composite )
        {
          goto LABEL_26; /*0x777700*/
        }
        if ( stru_A8EB00.?[376] == 1 ) /*0x777709*/
        {
          v15 = DSurface_Composite; /*0x77770b*/
          (*(void (**)(void))(*(_DWORD *)stru_887598.lineTrailer + 28))(); /*0x777710*/
          Frame::Present((int)v15, 0, a3, (int)v13, 0, (int)a4, a5, a2); /*0x777717*/
          Sidebar::FlushSidebarTooltip((Sidebar *)&stru_87F5F0.__pad_58[416], 1); /*0x777723*/
          ValidateRect(v13, 0); /*0x77772a*/
        }
        else if ( MainWindowProc_Helper() ) /*0x777735*/
        {
          MainWindowProc_Helper_5C09A0(a4); /*0x77773e*/
          ValidateRect(v13, 0); /*0x777745*/
        }
        else
        {
          if ( !Render_Draw_774070() ) /*0x777750*/
          {
            v16 = g_DSurface_Hidden; /*0x77775f*/
            (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer); /*0x777768*/
            Frame::Present((int)v16, 0, a3, (int)v13, 0, (int)a4, a5, a2); /*0x77776f*/
          }
LABEL_26:
          ValidateRect(v13, 0); /*0x777774*/
        }
        break; /*0x777730*/
      case 0x14u: /*0x7776ae*/
        return 1; /*0x77778a*/
      default:
        goto LABEL_70;
    }
    goto LABEL_69; /*0x777730*/
  }
  if ( Msg > 0x205 ) /*0x777830*/
  {
    if ( Msg != 522 ) /*0x777962*/
    {
      if ( Msg == 534 ) /*0x777967*/
        return (unsigned __int8)Window::ClampToScreen(lParam); /*0x777982*/
      goto LABEL_70; /*0x777967*/
    }
    if ( !byte_B73561 ) /*0x77798b*/
    {
      byte_B73561 = 1; /*0x777991*/
      v20 = aSidebardown; /*0x77799e*/
      if ( (wParam & 0x80000000) == 0 ) /*0x7779a3*/
        v20 = aSidebarup; /*0x7779a5*/
      Sidebar::ScrollSidebarSkipGame(v20); /*0x7779aa*/
      byte_B73561 = 0; /*0x7779af*/
LABEL_69:
      v14 = Msg; /*0x7779b5*/
    }
  }
  else
  {
    switch ( Msg ) /*0x777836*/
    {
      case 0x205u: /*0x777836*/
        byte_884D34 = 0; /*0x777952*/
        break;
      case 0x1Cu: /*0x777836*/
        if ( v13 == g_hWnd && stru_A8EB00.?[412] != (wParam != 0) ) /*0x7778c1*/
        {
          stru_A8EB00.?[412] = wParam != 0; /*0x7778ce*/
          if ( wParam ) /*0x7778d3*/
          {
            MainWindowProc_Read(a4); /*0x777930*/
          }
          else
          {
            Debug::Log(); /*0x7778da*/
            LOBYTE(v19) = 1; /*0x7778e2*/
            AsyncIO::Read(v19); /*0x7778e4*/
            sub_407020(); /*0x7778e9*/
            if ( stru_887598.lineTrailer ) /*0x7778f6*/
            {
              byte_B73560 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer); /*0x7778fd*/
              Debug::Log(); /*0x777916*/
              (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x777926*/
            }
          }
          Debug::Log(); /*0x77793a*/
          g_LoadScreenFlag = 1; /*0x777942*/
        }
        return 0; /*0x77794f*/
      case 0x112u: /*0x777836*/
        if ( wParam > 0xF120 ) /*0x777856*/
        {
          if ( wParam == 61760 ) /*0x777891*/
            return 0; /*0x77789d*/
        }
        else
        {
          switch ( wParam ) /*0x777858*/
          {
            case 0xF120u: /*0x777858*/
              stru_A8EB00.?[413] = 0; /*0x777880*/
              break;
            case 0xF020u: /*0x777858*/
              stru_A8EB00.?[413] = 1; /*0x777874*/
              break;
            case 0xF060u: /*0x777858*/
              return 0; /*0x777871*/
          }
        }
        break;
    }
  }
LABEL_70:
  if ( InputManager::WndProc(*(InputManager **)&stru_87F5F0.__pad_58[296], v13, v14, wParam, (unsigned int)lParam) ) /*0x7779cb*/
    return 0; /*0x7779da*/
  if ( Msg == 646 )
  {
    v21 = wcslen(&word_B730EC); /*0x7779f2*/
    if ( BYTE1(wParam) ) /*0x7779fe*/
    {
      *(_WORD *)((char *)&hWnd + 1) = (unsigned __int8)wParam; /*0x777a02*/
      LOBYTE(hWnd) = BYTE1(wParam); /*0x777a09*/
    }
    else
    {
      LOWORD(hWnd) = (unsigned __int8)wParam; /*0x777a13*/
    }
    v22 = MultiByteToWideChar(0, 0, (LPCCH)&hWnd, strlen((const char *)&hWnd), WideCharStr, 1); /*0x777a38*/
    *(&word_B730EC + v21) = v22 == 1 ? WideCharStr[0] : 0;
    word_B730EE[v21] = 0; /*0x777a53*/
    return 0; /*0x777a53*/
  }
  return DefWindowProcA(v13, Msg, wParam, (LPARAM)lParam); /*0x777624*/
}



// ==== 0x00777AB0  nullsub_262  this=-  sig=ida-proto ====
void nullsub_262()
{
  ; /*0x777ab0*/
}



// ==== 0x00777AC0  Time::FormatDate  this=Time  sig=csp ====
int __thiscall Time_FormatDate(char *Buffer)
{
  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+4h] [ebp-10h] BYREF

  result = FileTimeToSystemTime(&FileTime, &SystemTime); /*0x777ad0*/
  if ( result ) /*0x777ad8*/
    return sprintf( /*0x777b20*/
             Buffer,
             "%02d/%02d/%04d - %02d:%02d:%02d",
             SystemTime.wMonth,
             SystemTime.wDay,
             SystemTime.wYear,
             SystemTime.wHour,
             SystemTime.wMinute,
             SystemTime.wSecond);
  return result; /*0x777b28*/
}



// ==== 0x00777B30  String::FormatDword  this=AbstractClass  sig=csp ====
char *__thiscall String_FormatDword(char *Buffer)
{
  sprintf(Buffer, "%d", dword_822D1C); /*0x777b3f*/
  return Buffer; /*0x777b49*/
}



// ==== 0x00777B50  GameOptions::GetEntry  this=GameOptions  sig=csp ====
int GameOptions_GetEntry()
{
  return dword_822D1C; /*0x777b55*/
}



// ==== 0x00777B60  String::CopyConstant  this=AbstractClass  sig=csp ====
char *__thiscall String_CopyConstant(char *Destination)
{
  strncpy(Destination, g_Str_gsmallwoo, 0x20u); /*0x777b6b*/
  return Destination; /*0x777b75*/
}



// ==== 0x00777BB0  ObjectClass::method_777BB0  this=ObjectClass  sig=csp ====
char *__thiscall sub_777BB0(ObjectClass *this)
{
  char *v2; // eax
  char v4; // [esp+4h] [ebp-100h] BYREF
  char v5; // [esp+5h] [ebp-FFh]
  char v6; // [esp+6h] [ebp-FEh]
  char Buffer[128]; // [esp+84h] [ebp-80h] BYREF

  sprintf(Buffer, "%d", dword_822D1C); /*0x777bcc*/
  v4 = g_Str_gsmallwoo[0]; /*0x777bde*/
  v5 = 0; /*0x777be2*/
  v6 = 0; /*0x777be7*/
  v2 = strchr(g_Str_gsmallwoo, 95); /*0x777bec*/
  if ( v2 ) /*0x777bf6*/
    v5 = v2[1]; /*0x777bfb*/
  sprintf((char *const)this, "%s-%s", &v4, Buffer); /*0x777c12*/
  return (char *)this; /*0x777c1c*/
}



// ==== 0x00777C30  InitWindowCreation  this=ObjectClass  sig=csp ====
HCURSOR __fastcall WindowCreation_Init(HINSTANCE hInstance, int a2, int xRight, int yBottom)
{
  LONG v6; // eax
  int v7; // eax
  HCURSOR CursorA; // eax
  int SystemMetrics; // [esp-14h] [ebp-5Ch]
  BOOL v11; // [esp-8h] [ebp-50h]
  LONG WindowLongA; // [esp-4h] [ebp-4Ch]
  struct tagRECT rc; // [esp+10h] [ebp-38h] BYREF
  WNDCLASSA WndClass; // [esp+20h] [ebp-28h] BYREF

  InitCommonControls(); /*0x777c3b*/
  g_hIcon = (int)LoadIconA(hInstance, (LPCSTR)0x5D); /*0x777c50*/
  g_hCursor = (int)LoadCursorA(g_hInstance, (LPCSTR)0x68); /*0x777c6c*/
  WndClass.style = 3; /*0x777c71*/
  WndClass.lpfnWndProc = MainWindowProc; /*0x777c79*/
  WndClass.cbClsExtra = 0; /*0x777c81*/
  WndClass.cbWndExtra = 0; /*0x777c85*/
  WndClass.hInstance = hInstance; /*0x777c89*/
  WndClass.hIcon = (HICON)g_hIcon; /*0x777c8d*/
  WndClass.hCursor = (HCURSOR)g_hCursor; /*0x777c91*/
  WndClass.hbrBackground = 0; /*0x777c95*/
  WndClass.lpszMenuName = 0; /*0x777c99*/
  WndClass.lpszClassName = WindowName; /*0x777c9d*/
  RegisterClassA(&WndClass); /*0x777ca5*/
  if ( g_DDraw_Initialized ) /*0x777cb6*/
  {
    g_hWnd = CreateWindowExA(0, WindowName, WindowName, 0x2CA0000u, 0, 0, 0, 0, 0, 0, hInstance, 0); /*0x777cd6*/
    SetRect(&rc, 0, 0, xRight, yBottom); /*0x777cec*/
    WindowLongA = GetWindowLongA(g_hWnd, -20); /*0x777d08*/
    v11 = GetMenu(g_hWnd) != 0; /*0x777d1c*/
    v6 = GetWindowLongA(g_hWnd, -16); /*0x777d20*/
    AdjustWindowRectEx(&rc, v6, v11, WindowLongA); /*0x777d28*/
    MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x777d4e*/
  }
  else
  {
    SystemMetrics = GetSystemMetrics(1); /*0x777d60*/
    v7 = GetSystemMetrics(0); /*0x777d62*/
    g_hWnd = CreateWindowExA(8u, WindowName, WindowName, 0x82000000, 0, 0, v7, SystemMetrics, 0, 0, hInstance, 0); /*0x777d7e*/
  }
  dword_B7355C = ImmGetContext(g_hWnd); /*0x777d95*/
  ImmAssociateContext(g_hWnd, 0); /*0x777d9c*/
  ShowWindow(g_hWnd, 1); /*0x777da9*/
  g_ScreenWidth = a2; /*0x777db5*/
  UpdateWindow(g_hWnd); /*0x777dbc*/
  SetFocus(g_hWnd); /*0x777dc9*/
  RegisterHotKey(g_hWnd, 1, 7u, 0x4Du); /*0x777ddb*/
  CursorA = LoadCursorA(g_hInstance, (LPCSTR)0x68); /*0x777dea*/
  return SetCursor(CursorA); /*0x777df3*/
}



// ==== 0x00777E00  Render_Draw_777E00  this=-  sig=ida-proto ====
BOOL sub_777E00()
{
  BOOL result; // eax

  result = 0; /*0x777e06*/
  WideCharStr[0] = 0; /*0x777e0a*/
  dword_B73564 = 0; /*0x777e10*/
  MaxCount = 0; /*0x777e15*/
  dword_B7356C = 0; /*0x777e1a*/
  word_B730EC = 0; /*0x777e1f*/
  if ( dword_B7355C ) /*0x777e25*/
    return ImmNotifyIME(dword_B7355C, 0x15u, 4u, 0); /*0x777e2d*/
  return result; /*0x777e32*/
}



// ==== 0x00777EA0  ProcessCompositionIME  this=-  sig=ida-proto ====
int IME_ProcessComposition()
{
  int result; // eax
  int v1; // eax
  signed int v2; // esi
  CHAR Buf[516]; // [esp+8h] [ebp-204h] BYREF

  result = (int)dword_B7355C; /*0x777ea0*/
  WideCharStr[0] = 0; /*0x777eb1*/
  dword_B73564 = 0; /*0x777eb8*/
  MaxCount = 0; /*0x777ebe*/
  if ( dword_B7355C ) /*0x777ec4*/
  {
    result = ImmGetCompositionStringA(dword_B7355C, 8u, Buf, 0x200u); /*0x777ed7*/
    if ( result > 0 ) /*0x777ede*/
    {
      Buf[result] = 0; /*0x777ef7*/
      v1 = MultiByteToWideChar(0, 0, Buf, -1, WideCharStr, 256); /*0x777efb*/
      word_B73518 = 0; /*0x777f03*/
      if ( v1 >= 0 ) /*0x777f0a*/
      {
        MaxCount = (unsigned __int16)ImmGetCompositionStringA(dword_B7355C, 0x80u, 0, 0); /*0x777f2c*/
        v2 = wcslen(WideCharStr); /*0x777f39*/
      }
      else
      {
        v2 = 0; /*0x777f0c*/
      }
      result = _mbsnccnt((const unsigned __int8 *)Buf, MaxCount); /*0x777f47*/
      MaxCount = result; /*0x777f51*/
      WideCharStr[v2] = 0; /*0x777f56*/
      dword_B73564 = v2; /*0x777f5e*/
      if ( result <= v2 ) /*0x777f64*/
      {
        if ( result < 0 ) /*0x777f77*/
          MaxCount = 0; /*0x777f79*/
      }
      else
      {
        MaxCount = v2; /*0x777f66*/
      }
    }
  }
  return result; /*0x777f6c*/
}



// ==== 0x00777F90  ObjectClass::method_777F90  this=ObjectClass  sig=csp ====
LONG __thiscall sub_777F90(ObjectClass *this)
{
  LONG result; // eax
  WCHAR *v3; // esi
  LONG v4; // edi
  CHAR Buf[516]; // [esp+Ch] [ebp-408h] BYREF
  WCHAR WideCharStr[258]; // [esp+210h] [ebp-204h] BYREF

  result = (LONG)dword_B7355C; /*0x777f90*/
  if ( dword_B7355C ) /*0x777fa4*/
  {
    result = ImmGetCompositionStringA(dword_B7355C, 0x800u, Buf, 0x200u); /*0x777fb6*/
    if ( result > 0 ) /*0x777fbd*/
    {
      Buf[result] = 0; /*0x777fbf*/
      result = MultiByteToWideChar(0, 0, Buf, strlen(Buf), WideCharStr, 256); /*0x777fe6*/
      if ( result < 0 ) /*0x777fee*/
        result = 0; /*0x777ff0*/
      WideCharStr[result] = 0; /*0x777ff4*/
      if ( result > 0 ) /*0x777ffc*/
      {
        v3 = WideCharStr; /*0x778005*/
        v4 = result; /*0x77800c*/
        do /*0x778021*/
        {
          result = SendMessageA((HWND)this, 0x4D9u, *v3, *v3); /*0x77801b*/
          ++v3; /*0x77801d*/
          --v4; /*0x778020*/
        }
        while ( v4 ); /*0x778021*/
      }
    }
  }
  return result; /*0x778024*/
}



// ==== 0x00778030  Render_Draw  this=-  sig=csp ====
int __fastcall sub_778030(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  UINT v5; // edx
  UINT v6; // edx
  LRESULT v7; // eax

  if ( Msg > 0x281 ) /*0x778039*/
  {
    switch ( Msg ) /*0x7780d6*/
    {
      case 0x282u: /*0x7780d6*/
      case 0x285u: /*0x7780d6*/
      case 0x290u: /*0x7780d6*/
      case 0x291u: /*0x7780d6*/
        v7 = DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x7780e9*/
        goto LABEL_12; /*0x7780e9*/
      default:
        return 0;
    }
  }
  if ( Msg == 641 ) /*0x77803f*/
  {
    v7 = DefWindowProcA(hWnd, 0x281u, wParam, lParam); /*0x7780c1*/
    goto LABEL_12; /*0x7780c1*/
  }
  v5 = Msg - 269; /*0x778041*/
  if ( !v5 ) /*0x778047*/
  {
    ProcessCompositionIME(); /*0x778089*/
    word_B730EC = 0; /*0x778098*/
    dword_B7356C = 1; /*0x7780a1*/
    v7 = DefWindowProcA(hWnd, 0x10Du, wParam, lParam); /*0x7780b0*/
    goto LABEL_12; /*0x7780b0*/
  }
  v6 = v5 - 1; /*0x778049*/
  if ( !v6 ) /*0x77804a*/
  {
    ProcessCompositionIME(); /*0x778069*/
    dword_B7356C = 0; /*0x778078*/
    v7 = DefWindowProcA(hWnd, 0x10Eu, wParam, lParam); /*0x778087*/
    goto LABEL_12; /*0x778087*/
  }
  if ( v6 == 1 ) /*0x77804d*/
  {
    ProcessCompositionIME(); /*0x778053*/
    v7 = DefWindowProcA(hWnd, 0x10Fu, wParam, lParam); /*0x778067*/
LABEL_12:
    dword_B73570 = v7; /*0x7780ef*/
    return 1; /*0x7780fa*/
  }
  return 0; /*0x7780f9*/
}



// ==== 0x00778120  Render_Draw_778120  this=-  sig=ida-proto ====
int sub_778120()
{
  return dword_B73570; /*0x778125*/
}



// ==== 0x00778170  nullsub_48  this=-  sig=ida-proto ====
void nullsub_48()
{
  ; /*0x778170*/
}



// ==== 0x00778180  Network_Append  this=-  sig=ida-proto ====
HIMC sub_778180()
{
  HIMC result; // eax

  result = dword_B7355C; /*0x778180*/
  if ( dword_B7355C ) /*0x778187*/
    return ImmAssociateContext(g_hWnd, dword_B7355C); /*0x778190*/
  return result; /*0x778195*/
}



// ==== 0x007781A0  DisableIME  this=-  sig=csp ====
int DisableIME()
{
  return ImmAssociateContext(g_hWnd, 0); /*0x7781ad*/
}



// ==== 0x007781B0  EditControl_Helper  this=-  sig=ida-proto ====
int __fastcall sub_7781B0(__int16 a1)
{
  int v1; // eax
  CHAR MultiByteStr; // [esp+0h] [ebp-8h] BYREF
  char v4; // [esp+1h] [ebp-7h]
  char v5; // [esp+2h] [ebp-6h]
  WCHAR WideCharStr[2]; // [esp+4h] [ebp-4h] BYREF

  if ( HIBYTE(a1) ) /*0x7781b6*/
  {
    MultiByteStr = HIBYTE(a1); /*0x7781c1*/
    v4 = a1; /*0x7781c1*/
    v5 = 0; /*0x7781c5*/
  }
  else
  {
    MultiByteStr = a1; /*0x7781cc*/
    v4 = 0; /*0x7781d0*/
  }
  v1 = MultiByteToWideChar(0, 0, &MultiByteStr, strlen(&MultiByteStr), WideCharStr, 1); /*0x7781f3*/
  return v1 == 1 ? *(_DWORD *)WideCharStr : 0;
}



// ==== 0x00778210  ScoreScreen::DrawSHPBackground  this=ObjectClass  sig=csp ====
int __userpurge ScoreScreen::DrawSHPBackground@<eax>(
        char *Source@<ecx>,
        int *a2@<edx>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5,
        int a6,
        int a7)
{
  int *v8; // esi
  int v9; // ebp
  int v10; // ebx
  int v11; // ebx
  int v12; // ebp
  int *Viewport; // eax
  ConvertClass *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v26; // [esp-10h] [ebp-F0h]
  void (__thiscall ***v27)(_DWORD, int); // [esp+1Ch] [ebp-C4h]
  int v28; // [esp+20h] [ebp-C0h]
  int v29; // [esp+20h] [ebp-C0h]
  _DWORD v30[2]; // [esp+24h] [ebp-BCh] BYREF
  int v31[2]; // [esp+2Ch] [ebp-B4h] BYREF
  _DWORD v32[2]; // [esp+34h] [ebp-ACh] BYREF
  int v33; // [esp+3Ch] [ebp-A4h] BYREF
  int v34; // [esp+40h] [ebp-A0h]
  int v35; // [esp+44h] [ebp-9Ch]
  int v36; // [esp+48h] [ebp-98h]
  int v37[2]; // [esp+4Ch] [ebp-94h] BYREF
  CCFileClass v38; // [esp+54h] [ebp-8Ch] BYREF
  int v39[3]; // [esp+ACh] [ebp-34h] BYREF
  int v40; // [esp+B8h] [ebp-28h]
  _BYTE v41[20]; // [esp+CCh] [ebp-14h] BYREF
  _UNKNOWN *retaddr; // [esp+E0h] [ebp+0h] BYREF

  CCFileClass::Construct(&v38, Source); /*0x77821f*/
  v8 = DecodeFrameSHP((int)&v38, a5, 0, 0); /*0x778238*/
  if ( v8 ) /*0x77823c*/
  {
    v28 = (*(int (__thiscall **)(int *, int, int))(*a2 + 124))(a2, a4, a3); /*0x778251*/
    v9 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x77825b*/
    v33 = 0; /*0x778261*/
    v34 = 0; /*0x778265*/
    v35 = v28; /*0x778269*/
    v36 = v9; /*0x77826d*/
    v10 = __2_YAPAXI_Z(0x20u); /*0x778276*/
    if ( v10 ) /*0x77827d*/
    {
      *(_DWORD *)(v10 + 8) = v9; /*0x778283*/
      *(_DWORD *)(v10 + 4) = v28; /*0x778291*/
      *(_DWORD *)(v10 + 12) = 0; /*0x778294*/
      *(_DWORD *)v10 = &XSurface_Vtable; /*0x77829b*/
      *(_DWORD *)(v10 + 16) = 2; /*0x7782a1*/
      Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v28 * v9); /*0x7782a8*/
      *(_DWORD *)v10 = &BSurface_Vtable; /*0x7782ad*/
    }
    else
    {
      v10 = 0; /*0x7782b5*/
    }
    Render_Draw(v10, &v33, 0); /*0x7782bf*/
    (*(void (__thiscall **)(int *, int, _DWORD, int))(*a2 + 4))(a2, v10, 0, 1); /*0x7782cd*/
    if ( v10 ) /*0x7782d2*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7782da*/
    v11 = 0; /*0x7782e0*/
    v12 = 0; /*0x7782e2*/
    v29 = (*(int (__thiscall **)(int *))(*v8 + 124))(v8); /*0x7782eb*/
    v30[0] = (*(int (__thiscall **)(int *))(*v8 + 128))(v8); /*0x7782f5*/
    if ( (*(int (__thiscall **)(int *))(*a2 + 124))(a2) > 1024 ) /*0x778306*/
    {
      Viewport = Display::GetViewport(v37); /*0x77830c*/
      v31[0] = *Viewport; /*0x778319*/
      v31[1] = Viewport[1]; /*0x778320*/
      v11 = (Viewport[2] - v29) / 2; /*0x77833e*/
      v12 = (Viewport[3] - v30[0]) / 2; /*0x778340*/
    }
    if ( a7 && (*(int (__thiscall **)(int *))(*v8 + 112))(v8) == 1 ) /*0x77835b*/
    {
      v14 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x778366*/
      if ( v14 ) /*0x778370*/
        ConvertClass::Construct(v14, a7, a7, (int)a2, 1, 0); /*0x778382*/
      v15 = *a2; /*0x778395*/
      v30[0] = v11; /*0x7783af*/
      v30[1] = v12; /*0x7783b3*/
      v26 = (*(int (__thiscall **)(int *, int *))(v15 + 120))(a2, v37); /*0x7783c2*/
      v16 = (_DWORD *)(*(int (__thiscall **)(int *))(*v8 + 120))(v8); /*0x7783c9*/
      BlitterDrawSHP(a2, (int)v27, v8, v16, v31, v30, v26, 0, 0, 0, 0, 1000, 0); /*0x7783d6*/
      if ( v27 ) /*0x7783dd*/
        (**v27)(v27, 1); /*0x7783e5*/
    }
    else
    {
      v17 = (*(int (__thiscall **)(int *))(*v8 + 124))(v8); /*0x7783ed*/
      v18 = *v8; /*0x7783f0*/
      v31[0] = v17; /*0x7783f4*/
      v19 = (*(int (__thiscall **)(int *))(v18 + 128))(v8); /*0x7783f8*/
      v20 = *v8; /*0x778402*/
      v34 = v19; /*0x778404*/
      v33 = v31[0]; /*0x77840e*/
      v32[0] = v11; /*0x778414*/
      v21 = *a2; /*0x778418*/
      v32[1] = v12; /*0x77841d*/
      v22 = (*(int (__thiscall **)(int *, CCFileClass *, _DWORD, int))(v20 + 120))(v8, &v38, 0, 1); /*0x778421*/
      v23 = (*(int (__thiscall **)(int *, _BYTE *, int))(*v8 + 120))(v8, v41, v22); /*0x778431*/
      v24 = (*(int (__thiscall **)(int *, _UNKNOWN **, _DWORD *, int *, int))(*a2 + 120))(a2, &retaddr, v32, v8, v23); /*0x778447*/
      (*(void (__thiscall **)(int *, int))(v21 + 12))(a2, v24); /*0x77844d*/
    }
    (*(void (__thiscall **)(int *, int))*v8)(v8, 1); /*0x778456*/
  }
  *(_DWORD *)v38.CDFileClass = &CCFileClass::`vftable'; /*0x778461*/
  v40 = 0; /*0x778469*/
  Vector::Clear((int)v39); /*0x778474*/
  *(_DWORD *)v38.CDFileClass = &off_7E1668; /*0x77847d*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v38); /*0x77848a*/
}



// ==== 0x007784A0  CCToolTip::QueryInterface  this=CCToolTip  sig=csp ====
_DWORD *__thiscall CCToolTip::QueryInterface(CCToolTip *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CCToolTip::`vftable'; /*0x7784a3*/
  ToolTipClass::updateString((ToolTipClass *)this); /*0x7784a9*/
  if ( (a2 & 1) != 0 ) /*0x7784b3*/
    __3_YAXPAX_Z(this); /*0x7784b6*/
  return this->__pad_0; /*0x7784c0*/
}



// ==== 0x007784D0  sub_7784D0  this=-  sig=ida-proto ====
int sub_7784D0()
{
  dword_B73580 = 0; /*0x7784d2*/
  dword_B73584 = 0; /*0x7784d7*/
  dword_B73588 = 0; /*0x7784dc*/
  dword_B7358C = 0; /*0x7784e1*/
  return 0; /*0x7784e6*/
}



// ==== 0x007784F0  sub_7784F0  this=-  sig=ida-proto ====
void sub_7784F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7784fc*/
  dbl_B73598 = Math::Sqrt(v0 + v0); /*0x77850e*/
}



// ==== 0x00778520  sub_778520  this=-  sig=ida-proto ====
void sub_778520()
{
  dbl_B735E8 = dbl_B73598 / 60.0; /*0x77852c*/
}



// ==== 0x00778540  sub_778540  this=-  sig=ida-proto ====
void sub_778540()
{
  dbl_B735D0 = 1.0 / dbl_B735E8; /*0x77854c*/
}



// ==== 0x00778560  sub_778560  this=-  sig=ida-proto ====
void sub_778560()
{
  dbl_B735C8 = 0.0174532925199433 * 45.0; /*0x77856c*/
}



// ==== 0x00778580  sub_778580  this=-  sig=ida-proto ====
void sub_778580()
{
  dbl_B735A0 = 0.0174532925199433 * 60.0; /*0x77858c*/
}



// ==== 0x007785A0  sub_7785A0  this=-  sig=ida-proto ====
void sub_7785A0()
{
  dbl_B73578 = 0.0174532925199433 * 90.0; /*0x7785ac*/
}



// ==== 0x007785C0  sub_7785C0  this=-  sig=ida-proto ====
__int64 sub_7785C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B73578 - dbl_B735A0); /*0x7785d2*/
  result = Math::RoundToInt(v0 * dbl_B73598 * 0.5); /*0x7785e6*/
  dword_B735F0 = result; /*0x7785eb*/
  return result; /*0x7785f0*/
}



// ==== 0x00778600  sub_778600  this=-  sig=ida-proto ====
void sub_778600()
{
  dbl_B735A8 = Math::ArcTan((double)dword_B735F0 * 0.00390625); /*0x778617*/
}



// ==== 0x00778630  sub_778630  this=-  sig=ida-proto ====
void sub_778630()
{
  dbl_B735C0 = Math::ArcTan((double)(2 * dword_B735F0) / dbl_B73598); /*0x778652*/
}



// ==== 0x00778660  sub_778660  this=-  sig=ida-proto ====
__int64 sub_778660()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B735F0) + 0.5); /*0x77867b*/
  dword_B735E4 = result; /*0x778680*/
  return result; /*0x778686*/
}



// ==== 0x00778690  sub_778690  this=-  sig=ida-proto ====
int sub_778690()
{
  word_B73594 = 0; /*0x778692*/
  word_B73596 = 0; /*0x778698*/
  return 0; /*0x77869e*/
}



// ==== 0x007786A0  sub_7786A0  this=-  sig=ida-proto ====
int sub_7786A0()
{
  dword_B735B0 = 0; /*0x7786a2*/
  dword_B735B4 = 0; /*0x7786a7*/
  dword_B735B8 = 0; /*0x7786ac*/
  return 0; /*0x7786b1*/
}



// ==== 0x007786C0  sub_7786C0  this=-  sig=ida-proto ====
int sub_7786C0()
{
  dword_B735E0 = 0; /*0x7786c5*/
  dword_B735D8 = 128; /*0x7786cf*/
  dword_B735DC = 128; /*0x7786d4*/
  return 128; /*0x7786d9*/
}



// ==== 0x007786E0  sub_7786E0  this=-  sig=ida-proto ====
int sub_7786E0()
{
  String::Assign((char **)&stru_B73590, aDefault_0); /*0x7786ea*/
  return atexit(unknown_libname_38); /*0x7786fa*/
}



// ==== 0x00778700  unknown_libname_38  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_38()
{
  DeleteAndZero((void **)&stru_B73590); /*0x778705*/
}



// ==== 0x00778710  ObjectClass::LoadAccountInfoWOL  this=ObjectClass  sig=csp ====
_DWORD *__thiscall LoadAccountInfoWOL(ObjectClass *this)
{
  int v1; // edi
  int Int; // esi
  int v3; // ebp
  unsigned __int8 *v4; // eax
  char *v5; // eax
  char *v6; // eax
  ReferenceCounted *v7; // eax
  void *AccountInfoWOL_Load; // esi
  ComPtr *abstractFlags; // edi
  ObjectClass v11; // [esp+10h] [ebp-B0h] BYREF

  v11.? = (int)this; /*0x778718*/
  unknown_libname_73(&v11.?); /*0x778722*/
  v1 = -2; /*0x778727*/
  Int = 0; /*0x778732*/
  v3 = -2; /*0x778734*/
  unknown_libname_73(&v11.?); /*0x778736*/
  unknown_libname_74(&v11.?); /*0x77873f*/
  unknown_libname_74(&v11.?); /*0x778748*/
  BufferIOFile::Constructor((BufferIOFile *)&v11.customSound_controller[2], g_Str_File_wolinfoMD_ini); /*0x778756*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v11.customSound_controller[2], 0) ) /*0x778760*/
  {
    FileClass::Close((RawFileClass *)&v11.customSound_controller[2]); /*0x77876d*/
    CCFileClass::Close((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x778776*/
    CCFileClass::Reopen((CDFileClass *)&v11.customSound_controller[2], g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x778786*/
  }
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v11.customSound_controller[2], 0) ) /*0x778790*/
  {
    v11.? = 0; /*0x7787a1*/
    v11.? = 0; /*0x7787a5*/
    GenericNode::Constructor((GenericNode *)&v11.owningHouseIndex); /*0x7787a9*/
    GenericNode::Constructor((GenericNode *)&v11.attachedTag); /*0x7787b2*/
    v11.occupant = (int)&GenericList::`vftable'; /*0x7787c0*/
    LinkedList::Prepend((LinkedList *)&v11.owningHouseIndex, (int)&v11.attachedTag); /*0x7787c8*/
    v11.occupant = (int)&List<INIClass::INISection *>::`vftable'; /*0x7787d1*/
    memset(&v11.ambientSoundController[1], 0, 13); /*0x7787df*/
    v11.customSound_controller[0] = 0; /*0x7787ef*/
    v11.customSound_controller[1] = 0; /*0x7787f3*/
    v11.? = (int)&INIClass::`vftable'; /*0x7787f7*/
    FileStraw::Open((FileStraw *)&v11.?, (int)&v11.customSound_controller[2], 0); /*0x7787ff*/
    CCFileClass::Close((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x778808*/
    v4 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)&stru_B73590); /*0x778812*/
    if ( INIClass::BinarySearchSection((int)&v11.?, v4) ) /*0x77881c*/
    {
      String::Assign((String *)&v11, g_INI_Key_Server); /*0x778832*/
      INIClass::ReadString((INIClass *)&v11.?, (char **)&stru_B73590, (char **)&v11, (char **)&v11.?, (int)&v11.?); /*0x77884f*/
      DeleteAndZero(&v11); /*0x778858*/
      String::Assign((String *)&v11, g_INI_Key_Locale); /*0x778866*/
      Int = INIClass::ReadInt((bool *)&v11.?, (char **)&stru_B73590, (char **)&v11, 0); /*0x778883*/
      DeleteAndZero(&v11); /*0x778885*/
      String::Assign((String *)&v11, g_INI_Key_Country); /*0x778893*/
      v1 = INIClass::ReadInt((bool *)&v11.?, (char **)&stru_B73590, (char **)&v11, -2); /*0x7788b1*/
      DeleteAndZero(&v11); /*0x7788b3*/
      String::Assign((String *)&v11, &stru_81AF8C.?[95]); /*0x7788c1*/
      v3 = INIClass::ReadInt((bool *)&v11.?, (char **)&stru_B73590, (char **)&v11, -2); /*0x7788df*/
      DeleteAndZero(&v11); /*0x7788e1*/
      String::Assign((String *)&v11, g_INI_Key_UpdateTime); /*0x7788ef*/
      INIClass::ReadString((INIClass *)&v11.?, (char **)&stru_B73590, (char **)&v11, (char **)&v11.?, (int)&v11.?); /*0x77890c*/
      DeleteAndZero(&v11); /*0x778915*/
      LocalizeWOLDateString((char **)&v11.?, &v11.?); /*0x778922*/
      DeleteAndZero::Alt2((DeleteAndZero *)&v11.?); /*0x77892b*/
      String::Assign((String *)&v11, g_INI_Key_UpdateDate); /*0x778939*/
      INIClass::ReadString((INIClass *)&v11.?, (char **)&stru_B73590, (char **)&v11, (char **)&v11.?, (int)&v11.?); /*0x778956*/
      DeleteAndZero(&v11); /*0x77895f*/
      v5 = String::GetOrEmpty_Alt((String *)&v11.?); /*0x778968*/
      v6 = CharToWideString(v5); /*0x77896f*/
      WideString::Reassign((void **)&v11.?, (wchar_t *)v6); /*0x778979*/
    }
    HashTable::DestroyHashTableINIClass((INIClass *)&v11.?); /*0x778982*/
  }
  v7 = (ReferenceCounted *)__2_YAPAXI_Z(0x44u); /*0x778989*/
  if ( v7 ) /*0x778993*/
    AccountInfoWOL_Load = LoadAccountInfoWOL_Load( /*0x7789bc*/
                            v7,
                            (const char **)&v11.?,
                            Int,
                            0,
                            0,
                            v1,
                            v3,
                            -1,
                            -1,
                            -1,
                            -1,
                            -1,
                            1,
                            (const wchar_t **)&v11.?,
                            (const wchar_t **)&v11.?);
  else
    AccountInfoWOL_Load = 0; /*0x7789c0*/
  abstractFlags = (ComPtr *)v11.?; /*0x7789c2*/
  ComPtr::Constructor((ComPtr *)v11.?); /*0x7789c8*/
  *(_DWORD *)abstractFlags->__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x7789cf*/
  ComPtr::Set(abstractFlags, (int)AccountInfoWOL_Load); /*0x7789d6*/
  v11.customSound_controller[2] = (int)&off_7E1668; /*0x7789df*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x7789e7*/
  DeleteAndZero::Alt((DeleteAndZero *)&v11.?); /*0x7789f0*/
  DeleteAndZero::Alt((DeleteAndZero *)&v11.?); /*0x7789f9*/
  DeleteAndZero((ObjectClass *)&v11.?); /*0x778a02*/
  DeleteAndZero((ObjectClass *)&v11.?); /*0x778a0b*/
  return abstractFlags->__pad_0; /*0x778a12*/
}



// ==== 0x00778A20  LoadPlayerProfile  this=-  sig=csp ====
ObjectClass *__fastcall LoadPlayerProfile(ObjectClass *a1, const char **a2)
{
  unsigned __int8 *v5; // eax
  int Int; // esi
  unsigned __int8 *v7; // eax
  char Bool_Overwrite; // bl
  int v9; // edi
  int v10; // ebp
  unsigned __int8 *v11; // eax
  char *v12; // eax
  char *v13; // eax
  ReferenceCounted *v14; // eax
  void *AccountInfoWOL_Load; // esi
  ComPtr *v16; // edi
  ObjectClass v17; // [esp+Ch] [ebp-D0h] BYREF

  *(_DWORD *)&v17.bombVisible = a1; /*0x778a39*/
  BufferIOFile::Constructor((BufferIOFile *)&v17.spawnStatus, g_Str_File_wolinfoMD_ini); /*0x778a3d*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v17.spawnStatus, 0) ) /*0x778a4c*/
  {
    FileClass::Close((RawFileClass *)&v17.spawnStatus); /*0x778a5c*/
    CCFileClass::Close((BufferIOFileClass *)&v17.spawnStatus); /*0x778a68*/
    CCFileClass::Reopen((CDFileClass *)&v17.spawnStatus, g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x778a7b*/
  }
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v17.spawnStatus, 0) )
  {
    v17.? = 0; /*0x778abf*/
    v17.? = 0; /*0x778ac3*/
    v17.fallRate = 0; /*0x778ac7*/
    v17.nextObject = 0; /*0x778acb*/
    v17.owningHouseIndex = (int)&GenericNode::`vftable'; /*0x778acf*/
    GenericNode::Constructor((GenericNode *)&v17.attachedTag); /*0x778ad7*/
    LinkedList::Prepend((LinkedList *)&v17.owningHouseIndex, (int)&v17.attachedTag); /*0x778aed*/
    v17.occupant = (int)&List<INIClass::INISection *>::`vftable'; /*0x778af9*/
    memset(&v17.ambientSoundController[1], 0, 13); /*0x778b07*/
    v17.customSound_controller[0] = 0; /*0x778b18*/
    v17.customSound_controller[1] = 0; /*0x778b1c*/
    v17.? = (int)&INIClass::`vftable'; /*0x778b20*/
    FileStraw::Open((FileStraw *)&v17.?, (int)&v17.spawnStatus, 0); /*0x778b28*/
    CCFileClass::Close((BufferIOFileClass *)&v17.spawnStatus); /*0x778b34*/
    String::AssignFromPtr((String *)&v17.?, a2); /*0x778b3e*/
    String::ToLower((String *)&v17.?); /*0x778b47*/
    v5 = (unsigned __int8 *)String::GetOrEmpty_Alt((String *)&v17.?); /*0x778b50*/
    if ( INIClass::BinarySearchSection((int)&v17.?, v5) )
    {
      unknown_libname_73(&v17.?); /*0x778ba4*/
      String::Assign((String *)&v17, g_INI_Key_Server); /*0x778bb2*/
      INIClass::ReadString((INIClass *)&v17.?, (char **)&v17.?, (char **)&v17, (char **)&v17.?, (int)&v17.?); /*0x778bcf*/
      DeleteAndZero(&v17); /*0x778bd8*/
      String::Assign((String *)&v17, g_INI_Key_Locale); /*0x778be6*/
      Int = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, 0); /*0x778c03*/
      DeleteAndZero(&v17); /*0x778c05*/
      v7 = (unsigned __int8 *)String::GetOrEmpty((String *)&v17.?); /*0x778c14*/
      Bool_Overwrite = INIClass::ReadBool_Overwrite(&v17.?, v7, (unsigned __int8 *)aLocaleverified, 0); /*0x778c23*/
      LOBYTE(v17.customSound_controller[4]) = Bool_Overwrite; /*0x778c2e*/
      String::Assign((String *)&v17, g_INI_Key_Country); /*0x778c32*/
      v9 = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -2); /*0x778c50*/
      DeleteAndZero(&v17); /*0x778c52*/
      String::Assign((String *)&v17, &stru_81AF8C.?[95]); /*0x778c60*/
      v10 = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -2); /*0x778c7e*/
      DeleteAndZero(&v17); /*0x778c80*/
      String::Assign((String *)&v17, aRank); /*0x778c8e*/
      v17.customSound_controller[3] = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778cac*/
      DeleteAndZero(&v17); /*0x778cb0*/
      String::Assign((String *)&v17, (const char *)&g_INI_Key_TRUCKA.?[82]); /*0x778cbe*/
      *(_DWORD *)&v17.isOnMap = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778cdc*/
      DeleteAndZero(&v17); /*0x778ce3*/
      String::Assign((String *)&v17, aWins); /*0x778cf1*/
      v17.customSound = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778d0f*/
      DeleteAndZero(&v17); /*0x778d13*/
      String::Assign((String *)&v17, aLosses); /*0x778d21*/
      v17.health = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778d3f*/
      DeleteAndZero(&v17); /*0x778d43*/
      String::Assign((String *)&v17, aDisconnects); /*0x778d51*/
      v17.customSound_controller[2] = INIClass::ReadInt((bool *)&v17.?, (char **)&v17.?, (char **)&v17, -1); /*0x778d6f*/
      DeleteAndZero(&v17); /*0x778d73*/
      v11 = (unsigned __int8 *)String::GetOrEmpty((String *)&v17.?); /*0x778d83*/
      LOBYTE(v17.estimatedHealth) = INIClass::ReadBool_Overwrite(&v17.?, v11, (unsigned __int8 *)aMatchbyres, 1); /*0x778d96*/
      unknown_libname_73(&v17.?); /*0x778d9d*/
      unknown_libname_74(&v17.?); /*0x778da6*/
      String::Assign((String *)&v17, g_INI_Key_UpdateTime); /*0x778db4*/
      INIClass::ReadString((INIClass *)&v17.?, (char **)&v17.?, (char **)&v17, (char **)&v17.?, (int)&v17.?); /*0x778dd1*/
      DeleteAndZero(&v17); /*0x778dda*/
      LocalizeWOLDateString((char **)&v17.?, (void **)&v17.?); /*0x778de7*/
      DeleteAndZero::Alt2((DeleteAndZero *)&v17.?); /*0x778df0*/
      unknown_libname_74(&v17.?); /*0x778df9*/
      String::Assign((String *)&v17, g_INI_Key_UpdateDate); /*0x778e07*/
      INIClass::ReadString((INIClass *)&v17.?, (char **)&v17.?, (char **)&v17, (char **)&v17.?, (int)&v17.?); /*0x778e24*/
      DeleteAndZero(&v17); /*0x778e2d*/
      v12 = String::GetOrEmpty_Alt((String *)&v17.?); /*0x778e36*/
      v13 = CharToWideString(v12); /*0x778e3d*/
      WideString::Reassign((void **)&v17.?, (wchar_t *)v13); /*0x778e47*/
      v14 = (ReferenceCounted *)__2_YAPAXI_Z(0x44u); /*0x778e4e*/
      if ( v14 )
        AccountInfoWOL_Load = LoadAccountInfoWOL_Load(
                                v14,
                                (const char **)&v17.?,
                                Int,
                                v17.customSound_controller[4],
                                Bool_Overwrite != 0 ? 1 : 3,
                                v9,
                                v10,
                                v17.customSound_controller[3],
                                *(int *)&v17.isOnMap,
                                v17.customSound,
                                v17.health,
                                v17.customSound_controller[2],
                                v17.estimatedHealth,
                                (const wchar_t **)&v17.?,
                                (const wchar_t **)&v17.?);
      else
        AccountInfoWOL_Load = 0; /*0x778eb7*/
      v16 = *(ComPtr **)&v17.bombVisible; /*0x778eb9*/
      ComPtr::Constructor(*(ComPtr **)&v17.bombVisible); /*0x778ebf*/
      *(_DWORD *)v16->__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x778ec6*/
      ComPtr::Set(v16, (int)AccountInfoWOL_Load); /*0x778ecd*/
      DeleteAndZero::Alt((DeleteAndZero *)&v17.?); /*0x778ed6*/
      DeleteAndZero::Alt((DeleteAndZero *)&v17.?); /*0x778edf*/
      DeleteAndZero((ObjectClass *)&v17.?); /*0x778ee8*/
      DeleteAndZero((ObjectClass *)&v17.?); /*0x778ef1*/
      DeleteAndZero((ObjectClass *)&v17.?); /*0x778efa*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v17.?); /*0x778f03*/
      v17.spawnStatus = (int)&off_7E1668; /*0x778f0f*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17.spawnStatus); /*0x778f1a*/
      return (ObjectClass *)v16; /*0x778f1f*/
    }
    else
    {
      LoadAccountInfoWOL(a1); /*0x778b65*/
      DeleteAndZero((ObjectClass *)&v17.?); /*0x778b6e*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v17.?); /*0x778b77*/
      v17.spawnStatus = (int)&off_7E1668; /*0x778b83*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17.spawnStatus); /*0x778b8e*/
      return a1; /*0x778b93*/
    }
  }
  else
  {
    LoadAccountInfoWOL(a1); /*0x778a93*/
    v17.spawnStatus = (int)&off_7E1668; /*0x778a9f*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v17.spawnStatus); /*0x778aaa*/
    return a1; /*0x778aaf*/
  }
}



// ==== 0x00778F30  LocalizeWOLDateString  this=-  sig=csp ====
char __fastcall LocalizeWOLDateString(String *a1, WideString *a2)
{
  char *v3; // eax
  char *v4; // eax
  wchar_t *v5; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  wchar_t *v29; // eax

  v3 = String::GetOrEmpty_Alt(a1); /*0x778f33*/
  v4 = CharToWideString(v3); /*0x778f3a*/
  WideString::Reassign(a2, (wchar_t *)v4); /*0x778f42*/
  v5 = WideString::GetOrEmpty(a2); /*0x778f4e*/
  if ( wcsstr(v5, L"Jan") ) /*0x778f54*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 127); /*0x778f6e*/
    LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jan", StringCSF); /*0x778f7b*/
  }
  else
  {
    v8 = WideString::GetOrEmpty(a2); /*0x778f89*/
    if ( wcsstr(v8, L"Feb") ) /*0x778f8f*/
    {
      v9 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 132); /*0x778fac*/
      LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Feb", v9); /*0x778fb9*/
    }
    else
    {
      v10 = WideString::GetOrEmpty(a2); /*0x778fc7*/
      if ( wcsstr(v10, L"Mar") ) /*0x778fcd*/
      {
        v11 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 137); /*0x778fea*/
        LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Mar", v11); /*0x778ff7*/
      }
      else
      {
        v12 = WideString::GetOrEmpty(a2); /*0x779005*/
        if ( wcsstr(v12, L"Apr") ) /*0x77900b*/
        {
          v13 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 142); /*0x779028*/
          LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Apr", v13); /*0x779035*/
        }
        else
        {
          v14 = WideString::GetOrEmpty(a2); /*0x779043*/
          if ( wcsstr(v14, L"May") ) /*0x779049*/
          {
            v15 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 147); /*0x779066*/
            LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"May", v15); /*0x779073*/
          }
          else
          {
            v16 = WideString::GetOrEmpty(a2); /*0x779081*/
            if ( wcsstr(v16, L"Jun") ) /*0x779087*/
            {
              v17 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 152); /*0x7790a4*/
              LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jun", v17); /*0x7790b1*/
            }
            else
            {
              v18 = WideString::GetOrEmpty(a2); /*0x7790bf*/
              if ( wcsstr(v18, L"Jul") ) /*0x7790c5*/
              {
                v19 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 157); /*0x7790e2*/
                LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jul", v19); /*0x7790ef*/
              }
              else
              {
                v20 = WideString::GetOrEmpty(a2); /*0x7790fd*/
                if ( wcsstr(v20, L"Aug") ) /*0x779103*/
                {
                  v21 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 162); /*0x779120*/
                  LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Aug", v21); /*0x77912d*/
                }
                else
                {
                  v22 = WideString::GetOrEmpty(a2); /*0x77913b*/
                  if ( wcsstr(v22, L"Sep") ) /*0x779141*/
                  {
                    v23 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 167); /*0x77915e*/
                    LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Sep", v23); /*0x77916b*/
                  }
                  else
                  {
                    v24 = WideString::GetOrEmpty(a2); /*0x779179*/
                    if ( wcsstr(v24, L"Oct") ) /*0x77917f*/
                    {
                      v25 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 172); /*0x77919c*/
                      LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Oct", v25); /*0x7791a9*/
                    }
                    else
                    {
                      v26 = WideString::GetOrEmpty(a2); /*0x7791b7*/
                      if ( wcsstr(v26, L"Nov") ) /*0x7791bd*/
                      {
                        v27 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 177); /*0x7791da*/
                        LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Nov", v27); /*0x7791e7*/
                      }
                      else
                      {
                        v28 = WideString::GetOrEmpty(a2); /*0x7791f5*/
                        v7 = wcsstr(v28, L"Dec"); /*0x7791fb*/
                        if ( v7 ) /*0x779205*/
                        {
                          v29 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 182); /*0x779218*/
                          LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Dec", v29); /*0x779225*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v7; /*0x778f80*/
}



// ==== 0x00779230  ConvertDateMonthNames  this=-  sig=csp ====
void __fastcall ConvertDateMonthNames(wchar_t **a1, String *a2)
{
  wchar_t *v4; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  char *v29; // eax
  char *v30; // eax
  wchar_t *StringCSF; // [esp-4h] [ebp-10h]
  wchar_t *v32; // [esp-4h] [ebp-10h]
  wchar_t *v33; // [esp-4h] [ebp-10h]
  wchar_t *v34; // [esp-4h] [ebp-10h]
  wchar_t *v35; // [esp-4h] [ebp-10h]
  wchar_t *v36; // [esp-4h] [ebp-10h]
  wchar_t *v37; // [esp-4h] [ebp-10h]
  wchar_t *v38; // [esp-4h] [ebp-10h]
  wchar_t *v39; // [esp-4h] [ebp-10h]
  wchar_t *v40; // [esp-4h] [ebp-10h]
  wchar_t *v41; // [esp-4h] [ebp-10h]
  wchar_t *v42; // [esp-4h] [ebp-10h]
  WideString v43[4]; // [esp+8h] [ebp-4h] BYREF

  unknown_libname_74(v43); /*0x77923b*/
  v4 = WideString::GetOrEmpty_Alt((WideString *)a1); /*0x779242*/
  WideString::Reassign(v43, v4); /*0x77924c*/
  StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 191); /*0x77926b*/
  v5 = WideString::GetOrEmpty(v43); /*0x77926c*/
  if ( wcsstr(v5, StringCSF) ) /*0x779272*/
  {
    v6 = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 192); /*0x779294*/
    WideString::Replace(v43, v6, (wchar_t *)L"Jan"); /*0x77929e*/
  }
  v32 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 194); /*0x7792bd*/
  v7 = WideString::GetOrEmpty(v43); /*0x7792be*/
  if ( wcsstr(v7, v32) ) /*0x7792c4*/
  {
    v8 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 195); /*0x7792e6*/
    WideString::Replace(v43, v8, (wchar_t *)L"Feb"); /*0x7792f0*/
  }
  v33 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 197); /*0x77930f*/
  v9 = WideString::GetOrEmpty(v43); /*0x779310*/
  if ( wcsstr(v9, v33) ) /*0x779316*/
  {
    v10 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 198); /*0x779338*/
    WideString::Replace(v43, v10, (wchar_t *)L"Mar"); /*0x779342*/
  }
  v34 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 200); /*0x779361*/
  v11 = WideString::GetOrEmpty(v43); /*0x779362*/
  if ( wcsstr(v11, v34) ) /*0x779368*/
  {
    v12 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 201); /*0x77938a*/
    WideString::Replace(v43, v12, (wchar_t *)L"Apr"); /*0x779394*/
  }
  v35 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 203); /*0x7793b3*/
  v13 = WideString::GetOrEmpty(v43); /*0x7793b4*/
  if ( wcsstr(v13, v35) ) /*0x7793ba*/
  {
    v14 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 204); /*0x7793dc*/
    WideString::Replace(v43, v14, (wchar_t *)L"May"); /*0x7793e6*/
  }
  v36 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 206); /*0x779405*/
  v15 = WideString::GetOrEmpty(v43); /*0x779406*/
  if ( wcsstr(v15, v36) ) /*0x77940c*/
  {
    v16 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 207); /*0x77942e*/
    WideString::Replace(v43, v16, (wchar_t *)L"Jun"); /*0x779438*/
  }
  v37 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 209); /*0x779457*/
  v17 = WideString::GetOrEmpty(v43); /*0x779458*/
  if ( wcsstr(v17, v37) ) /*0x77945e*/
  {
    v18 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 210); /*0x779480*/
    WideString::Replace(v43, v18, (wchar_t *)L"Jul"); /*0x77948a*/
  }
  v38 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 212); /*0x7794a9*/
  v19 = WideString::GetOrEmpty(v43); /*0x7794aa*/
  if ( wcsstr(v19, v38) ) /*0x7794b0*/
  {
    v20 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 213); /*0x7794d2*/
    WideString::Replace(v43, v20, (wchar_t *)L"Aug"); /*0x7794dc*/
  }
  v39 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 215); /*0x7794fb*/
  v21 = WideString::GetOrEmpty(v43); /*0x7794fc*/
  if ( wcsstr(v21, v39) ) /*0x779502*/
  {
    v22 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 216); /*0x779524*/
    WideString::Replace(v43, v22, (wchar_t *)L"Sep"); /*0x77952e*/
  }
  v40 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 218); /*0x77954d*/
  v23 = WideString::GetOrEmpty(v43); /*0x77954e*/
  if ( wcsstr(v23, v40) ) /*0x779554*/
  {
    v24 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 219); /*0x779576*/
    WideString::Replace(v43, v24, (wchar_t *)L"Oct"); /*0x779580*/
  }
  v41 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 221); /*0x77959f*/
  v25 = WideString::GetOrEmpty(v43); /*0x7795a0*/
  if ( wcsstr(v25, v41) ) /*0x7795a6*/
  {
    v26 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 222); /*0x7795c8*/
    WideString::Replace(v43, v26, (wchar_t *)L"Nov"); /*0x7795d2*/
  }
  v42 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 224); /*0x7795f1*/
  v27 = WideString::GetOrEmpty(v43); /*0x7795f2*/
  if ( wcsstr(v27, v42) ) /*0x7795f8*/
  {
    v28 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 225); /*0x77961a*/
    WideString::Replace(v43, v28, (wchar_t *)L"Dec"); /*0x779624*/
  }
  v29 = (char *)WideString::GetOrEmpty(v43); /*0x77962d*/
  v30 = ToWideStringChar(v29); /*0x779634*/
  String::Assign_Bool(a2, v30); /*0x77963c*/
  DeleteAndZero::Alt((DeleteAndZero *)v43); /*0x779645*/
}



// ==== 0x00779690  ReferenceCounted::LoadAccountInfoWOL_Load  this=ReferenceCounted  sig=csp ====
void *__thiscall LoadAccountInfoWOL_Load(
        ReferenceCounted *this,
        const char **a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13,
        const wchar_t **a14,
        const wchar_t **a15)
{
  *((_DWORD *)this + 1) = 0; /*0x779695*/
  *((_BYTE *)this + 8) = 0; /*0x779698*/
  *this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x7796a3*/
  String::AssignFromPtr((String *)(this + 3), a2); /*0x7796a9*/
  *((_DWORD *)this + 4) = a3; /*0x7796ba*/
  *((_DWORD *)this + 6) = a5; /*0x7796c1*/
  *((_BYTE *)this + 20) = a4; /*0x7796c8*/
  *((_DWORD *)this + 7) = a6; /*0x7796cf*/
  *((_DWORD *)this + 9) = a8; /*0x7796d6*/
  *((_DWORD *)this + 8) = a7; /*0x7796dd*/
  *((_DWORD *)this + 10) = a9; /*0x7796e4*/
  *((_DWORD *)this + 12) = a11; /*0x7796eb*/
  *((_DWORD *)this + 11) = a10; /*0x7796f2*/
  *((_DWORD *)this + 13) = a12; /*0x7796f9*/
  *((_BYTE *)this + 56) = a13; /*0x779700*/
  WideString::AssignFromPtr((wchar_t **)this + 15, a15); /*0x779703*/
  WideString::AssignFromPtr((wchar_t **)this + 16, a14); /*0x779710*/
  *this = (ReferenceCounted)&PlayerProfile::`vftable'; /*0x779715*/
  return this; /*0x77971d*/
}



// ==== 0x00779730  ReadWOLLobbyPlayerOption  this=-  sig=ida-proto ====
char sub_779730()
{
  char Bool_Overwrite; // bl
  void *v2[4]; // [esp+4h] [ebp-98h] BYREF
  _DWORD v3[3]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v4[6]; // [esp+20h] [ebp-7Ch] BYREF
  char v5; // [esp+38h] [ebp-64h]
  int v6; // [esp+3Ch] [ebp-60h]
  int v7; // [esp+40h] [ebp-5Ch]
  _DWORD v8[22]; // [esp+44h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v8, g_Str_File_wolinfoMD_ini); /*0x779740*/
  if ( File::IsReady(v8, 0) ) /*0x77974c*/
  {
    v3[0] = &GenericNode::`vftable'; /*0x779779*/
    v4[0] = &GenericNode::`vftable'; /*0x77977d*/
    v2[1] = 0; /*0x779785*/
    v2[2] = 0; /*0x77978a*/
    v3[1] = 0; /*0x77978e*/
    v3[2] = 0; /*0x779792*/
    v4[1] = 0; /*0x779796*/
    v4[2] = 0; /*0x77979a*/
    LinkedList::Prepend(v3, (int)v4); /*0x7797a6*/
    v2[3] = &List<INIClass::INISection *>::`vftable'; /*0x7797af*/
    memset(&v4[3], 0, 12); /*0x7797bd*/
    v5 = 0; /*0x7797c9*/
    v6 = 0; /*0x7797cd*/
    v7 = 0; /*0x7797d1*/
    v2[0] = &INIClass::`vftable'; /*0x7797d5*/
    FileStraw::Open(v2, (int)v8, 0); /*0x7797dd*/
    CCFileClass::Close(v8); /*0x7797e6*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x779804*/
                       (int)v2,
                       (unsigned __int8 *)&off_84A11C,
                       (unsigned __int8 *)g_INI_Key_AutoLogin,
                       1);
    HashTable::DestroyHashTableINIClass(v2); /*0x779806*/
    v8[0] = &off_7E1668; /*0x77980f*/
    BufferIOFileClass::Dtor(v8); /*0x779817*/
    return Bool_Overwrite; /*0x77981c*/
  }
  else
  {
    v8[0] = &off_7E1668; /*0x779759*/
    BufferIOFileClass::Dtor(v8); /*0x779761*/
    return 0; /*0x779766*/
  }
}



// ==== 0x00779830  ReadWOLGameOption  this=-  sig=ida-proto ====
int __fastcall sub_779830(char a1)
{
  void *v3[4]; // [esp+8h] [ebp-98h] BYREF
  _DWORD v4[3]; // [esp+18h] [ebp-88h] BYREF
  _DWORD v5[6]; // [esp+24h] [ebp-7Ch] BYREF
  char v6; // [esp+3Ch] [ebp-64h]
  int v7; // [esp+40h] [ebp-60h]
  int v8; // [esp+44h] [ebp-5Ch]
  _DWORD v9[22]; // [esp+48h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v9, g_Str_File_wolinfoMD_ini); /*0x779843*/
  if ( !File::IsReady(v9, 0) ) /*0x77984f*/
  {
    FileClass::Close(v9); /*0x77985c*/
    CCFileClass::Close(v9); /*0x779865*/
    CCFileClass::Reopen(v9, g_Str_File_wolinfoMD_ini, 1); /*0x779875*/
  }
  v4[0] = &GenericNode::`vftable'; /*0x779883*/
  v5[0] = &GenericNode::`vftable'; /*0x779887*/
  v3[1] = 0; /*0x77988f*/
  v3[2] = 0; /*0x779894*/
  v4[1] = 0; /*0x779898*/
  v4[2] = 0; /*0x77989c*/
  v5[1] = 0; /*0x7798a0*/
  v5[2] = 0; /*0x7798a4*/
  LinkedList::Prepend(v4, (int)v5); /*0x7798b0*/
  v3[3] = &List<INIClass::INISection *>::`vftable'; /*0x7798b9*/
  memset(&v5[3], 0, 12); /*0x7798c2*/
  v6 = 0; /*0x7798ce*/
  v7 = 0; /*0x7798d2*/
  v8 = 0; /*0x7798d6*/
  v3[0] = &INIClass::`vftable'; /*0x7798da*/
  if ( File::IsReady(v9, 0) ) /*0x7798e2*/
  {
    FileStraw::Open(v3, (int)v9, 0); /*0x7798f5*/
    INIClass::SetBool((char *)v3, (unsigned __int8 *)&off_84A11C, g_INI_Key_AutoLogin, a1); /*0x779909*/
    INIClass::SaveToPipe(v3, (int)v9); /*0x779917*/
  }
  HashTable::DestroyHashTableINIClass(v3); /*0x779920*/
  v9[0] = &off_7E1668; /*0x779929*/
  return BufferIOFileClass::Dtor(v9); /*0x779936*/
}



// ==== 0x00779940  ReadWOLLobbyHouseOption  this=-  sig=ida-proto ====
char sub_779940()
{
  char Bool_Overwrite; // bl
  void *v2[4]; // [esp+4h] [ebp-98h] BYREF
  _DWORD v3[3]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v4[6]; // [esp+20h] [ebp-7Ch] BYREF
  char v5; // [esp+38h] [ebp-64h]
  int v6; // [esp+3Ch] [ebp-60h]
  int v7; // [esp+40h] [ebp-5Ch]
  _DWORD v8[22]; // [esp+44h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v8, g_Str_File_wolinfoMD_ini); /*0x779950*/
  if ( File::IsReady(v8, 0) ) /*0x77995c*/
  {
    v3[0] = &GenericNode::`vftable'; /*0x779989*/
    v4[0] = &GenericNode::`vftable'; /*0x77998d*/
    v2[1] = 0; /*0x779995*/
    v2[2] = 0; /*0x77999a*/
    v3[1] = 0; /*0x77999e*/
    v3[2] = 0; /*0x7799a2*/
    v4[1] = 0; /*0x7799a6*/
    v4[2] = 0; /*0x7799aa*/
    LinkedList::Prepend(v3, (int)v4); /*0x7799b6*/
    v2[3] = &List<INIClass::INISection *>::`vftable'; /*0x7799bf*/
    memset(&v4[3], 0, 12); /*0x7799cd*/
    v5 = 0; /*0x7799d9*/
    v6 = 0; /*0x7799dd*/
    v7 = 0; /*0x7799e1*/
    v2[0] = &INIClass::`vftable'; /*0x7799e5*/
    FileStraw::Open(v2, (int)v8, 0); /*0x7799ed*/
    CCFileClass::Close(v8); /*0x7799f6*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x779a14*/
                       (int)v2,
                       (unsigned __int8 *)&off_84A11C,
                       (unsigned __int8 *)aAddmatchbuddie,
                       1);
    HashTable::DestroyHashTableINIClass(v2); /*0x779a16*/
    v8[0] = &off_7E1668; /*0x779a1f*/
    BufferIOFileClass::Dtor(v8); /*0x779a27*/
    return Bool_Overwrite; /*0x779a2c*/
  }
  else
  {
    v8[0] = &off_7E1668; /*0x779969*/
    BufferIOFileClass::Dtor(v8); /*0x779971*/
    return 0; /*0x779976*/
  }
}



// ==== 0x00779A40  ReadWOLLobbyOption  this=-  sig=ida-proto ====
int __fastcall sub_779A40(char a1)
{
  void *v3[4]; // [esp+8h] [ebp-98h] BYREF
  _DWORD v4[3]; // [esp+18h] [ebp-88h] BYREF
  _DWORD v5[6]; // [esp+24h] [ebp-7Ch] BYREF
  char v6; // [esp+3Ch] [ebp-64h]
  int v7; // [esp+40h] [ebp-60h]
  int v8; // [esp+44h] [ebp-5Ch]
  _DWORD v9[22]; // [esp+48h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v9, g_Str_File_wolinfoMD_ini); /*0x779a53*/
  if ( !File::IsReady(v9, 0) ) /*0x779a5f*/
  {
    FileClass::Close(v9); /*0x779a6c*/
    CCFileClass::Close(v9); /*0x779a75*/
    CCFileClass::Reopen(v9, g_Str_File_wolinfoMD_ini, 1); /*0x779a85*/
  }
  v4[0] = &GenericNode::`vftable'; /*0x779a93*/
  v5[0] = &GenericNode::`vftable'; /*0x779a97*/
  v3[1] = 0; /*0x779a9f*/
  v3[2] = 0; /*0x779aa4*/
  v4[1] = 0; /*0x779aa8*/
  v4[2] = 0; /*0x779aac*/
  v5[1] = 0; /*0x779ab0*/
  v5[2] = 0; /*0x779ab4*/
  LinkedList::Prepend(v4, (int)v5); /*0x779ac0*/
  v3[3] = &List<INIClass::INISection *>::`vftable'; /*0x779ac9*/
  memset(&v5[3], 0, 12); /*0x779ad2*/
  v6 = 0; /*0x779ade*/
  v7 = 0; /*0x779ae2*/
  v8 = 0; /*0x779ae6*/
  v3[0] = &INIClass::`vftable'; /*0x779aea*/
  if ( File::IsReady(v9, 0) ) /*0x779af2*/
  {
    FileStraw::Open(v3, (int)v9, 0); /*0x779b05*/
    INIClass::SetBool((char *)v3, (unsigned __int8 *)&off_84A11C, aAddmatchbuddie, a1); /*0x779b19*/
    INIClass::SaveToPipe(v3, (int)v9); /*0x779b27*/
  }
  HashTable::DestroyHashTableINIClass(v3); /*0x779b30*/
  v9[0] = &off_7E1668; /*0x779b39*/
  return BufferIOFileClass::Dtor(v9); /*0x779b46*/
}



// ==== 0x00779B50  ObjectClass::ReadAutoLoginWOL  this=ObjectClass  sig=csp ====
char **__thiscall ReadAutoLoginWOL(ObjectClass *this)
{
  char *v3; // [esp+8h] [ebp-A4h] BYREF
  String v4; // [esp+Ch] [ebp-A0h] BYREF
  INIClass v5; // [esp+14h] [ebp-98h] BYREF
  BufferIOFile v6; // [esp+54h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v6, g_Str_File_wolinfoMD_ini); /*0x779b63*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v6, 0) ) /*0x779b6f*/
  {
    v5.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x779b8e*/
    v5.sectionCount = (int)&GenericNode::`vftable'; /*0x779b92*/
    v5.headNode[0] = 0; /*0x779b9a*/
    v5.headNode[1] = 0; /*0x779b9f*/
    v5.sectionHead[1] = 0; /*0x779ba3*/
    v5.sectionHead[2] = 0; /*0x779ba7*/
    *(_DWORD *)v5.__pad_20 = 0; /*0x779bab*/
    *(_DWORD *)&v5.__pad_20[4] = 0; /*0x779baf*/
    LinkedList::Prepend((LinkedList *)v5.sectionHead, (int)&v5.sectionCount); /*0x779bbb*/
    v5.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x779bc4*/
    memset(&v5.__pad_20[8], 0, 13); /*0x779bd2*/
    v5.unknown38 = 0; /*0x779be2*/
    v5.INIClass_field_3C = 0; /*0x779be6*/
    *(_DWORD *)v5.__pad_0 = &INIClass::`vftable'; /*0x779bea*/
    FileStraw::Open((FileStraw *)&v5, (int)&v6, 0); /*0x779bf2*/
    CCFileClass::Close((BufferIOFileClass *)&v6); /*0x779bfb*/
    unknown_libname_73(&v3); /*0x779c04*/
    String::Assign(&v4, g_INI_Key_AutoLogin); /*0x779c12*/
    String::Assign((String *)&v4.m_3[1], g_INI_Key_DefaultPersona); /*0x779c20*/
    INIClass::ReadString(&v5, (char **)&v4.m_3[1], (char **)&v4, &v3, (int)&v3); /*0x779c3d*/
    DeleteAndZero((ObjectClass *)&v4.m_3[1]); /*0x779c46*/
    DeleteAndZero((ObjectClass *)&v4); /*0x779c4f*/
    String::AssignFromPtr((String *)this, (const char **)&v3); /*0x779c5b*/
    DeleteAndZero((ObjectClass *)&v3); /*0x779c64*/
    HashTable::DestroyHashTableINIClass(&v5); /*0x779c6d*/
  }
  else
  {
    String::Assign((String *)this, 0); /*0x779b7b*/
  }
  *(_DWORD *)v6.__pad_0 = &off_7E1668; /*0x779c76*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x779c7e*/
  return (char **)this; /*0x779c85*/
}



// ==== 0x00779C90  ObjectClass::ReadSettingsWOL  this=ObjectClass  sig=csp ====
int __thiscall ReadSettingsWOL(ObjectClass *this)
{
  String v3; // [esp+8h] [ebp-A0h] BYREF
  INIClass v4; // [esp+10h] [ebp-98h] BYREF
  BufferIOFile v5; // [esp+50h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v5, g_Str_File_wolinfoMD_ini); /*0x779ca3*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779caf*/
  {
    FileClass::Close((RawFileClass *)&v5); /*0x779cbc*/
    CCFileClass::Close((BufferIOFileClass *)&v5); /*0x779cc5*/
    CCFileClass::Reopen((CDFileClass *)&v5, g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x779cd5*/
  }
  v4.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x779ce3*/
  v4.sectionCount = (int)&GenericNode::`vftable'; /*0x779ce7*/
  v4.headNode[0] = 0; /*0x779cef*/
  v4.headNode[1] = 0; /*0x779cf4*/
  v4.sectionHead[1] = 0; /*0x779cf8*/
  v4.sectionHead[2] = 0; /*0x779cfc*/
  *(_DWORD *)v4.__pad_20 = 0; /*0x779d00*/
  *(_DWORD *)&v4.__pad_20[4] = 0; /*0x779d04*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x779d10*/
  v4.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x779d19*/
  memset(&v4.__pad_20[8], 0, 13); /*0x779d22*/
  v4.unknown38 = 0; /*0x779d32*/
  v4.INIClass_field_3C = 0; /*0x779d36*/
  *(_DWORD *)v4.__pad_0 = &INIClass::`vftable'; /*0x779d3a*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779d42*/
  {
    FileStraw::Open((FileStraw *)&v4, (int)&v5, 0); /*0x779d55*/
    String::Assign(&v3, g_INI_Key_AutoLogin); /*0x779d63*/
    String::Assign((String *)&v3.m_3[1], g_INI_Key_DefaultPersona); /*0x779d71*/
    INIClass::SetStringOrEmpty(v4.__pad_0, (char **)&v3.m_3[1], (char **)&v3, (char **)this); /*0x779d85*/
    DeleteAndZero((ObjectClass *)&v3.m_3[1]); /*0x779d8e*/
    DeleteAndZero((ObjectClass *)&v3); /*0x779d97*/
    INIClass::SaveToPipe(&v4, (int)&v5); /*0x779da5*/
  }
  HashTable::DestroyHashTableINIClass(&v4); /*0x779dae*/
  *(_DWORD *)v5.__pad_0 = &off_7E1668; /*0x779db7*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x779dc4*/
}



// ==== 0x00779DD0  ObjectClass::LoadConfigWOL  this=ObjectClass  sig=csp ====
char **__thiscall LoadConfigWOL(ObjectClass *this)
{
  char *v3; // [esp+8h] [ebp-A4h] BYREF
  String v4; // [esp+Ch] [ebp-A0h] BYREF
  INIClass v5; // [esp+14h] [ebp-98h] BYREF
  BufferIOFile v6; // [esp+54h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v6, g_Str_File_wolinfoMD_ini); /*0x779de3*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v6, 0) ) /*0x779def*/
  {
    v5.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x779e0e*/
    v5.sectionCount = (int)&GenericNode::`vftable'; /*0x779e12*/
    v5.headNode[0] = 0; /*0x779e1a*/
    v5.headNode[1] = 0; /*0x779e1f*/
    v5.sectionHead[1] = 0; /*0x779e23*/
    v5.sectionHead[2] = 0; /*0x779e27*/
    *(_DWORD *)v5.__pad_20 = 0; /*0x779e2b*/
    *(_DWORD *)&v5.__pad_20[4] = 0; /*0x779e2f*/
    LinkedList::Prepend((LinkedList *)v5.sectionHead, (int)&v5.sectionCount); /*0x779e3b*/
    v5.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x779e44*/
    memset(&v5.__pad_20[8], 0, 13); /*0x779e52*/
    v5.unknown38 = 0; /*0x779e62*/
    v5.INIClass_field_3C = 0; /*0x779e66*/
    *(_DWORD *)v5.__pad_0 = &INIClass::`vftable'; /*0x779e6a*/
    FileStraw::Open((FileStraw *)&v5, (int)&v6, 0); /*0x779e72*/
    CCFileClass::Close((BufferIOFileClass *)&v6); /*0x779e7b*/
    unknown_libname_73(&v3); /*0x779e84*/
    String::Assign(&v4, aLastvalid); /*0x779e92*/
    String::Assign((String *)&v4.m_3[1], g_INI_Key_DefaultPersona); /*0x779ea0*/
    INIClass::ReadString(&v5, (char **)&v4.m_3[1], (char **)&v4, &v3, (int)&v3); /*0x779ebd*/
    DeleteAndZero((ObjectClass *)&v4.m_3[1]); /*0x779ec6*/
    DeleteAndZero((ObjectClass *)&v4); /*0x779ecf*/
    String::AssignFromPtr((String *)this, (const char **)&v3); /*0x779edb*/
    DeleteAndZero((ObjectClass *)&v3); /*0x779ee4*/
    HashTable::DestroyHashTableINIClass(&v5); /*0x779eed*/
  }
  else
  {
    String::Assign((String *)this, 0); /*0x779dfb*/
  }
  *(_DWORD *)v6.__pad_0 = &off_7E1668; /*0x779ef6*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x779efe*/
  return (char **)this; /*0x779f05*/
}



// ==== 0x00779F10  ObjectClass::SavePersonaConfigWOL  this=ObjectClass  sig=csp ====
int __thiscall SavePersonaConfigWOL(ObjectClass *this)
{
  String v3; // [esp+8h] [ebp-A0h] BYREF
  INIClass v4; // [esp+10h] [ebp-98h] BYREF
  BufferIOFile v5; // [esp+50h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v5, g_Str_File_wolinfoMD_ini); /*0x779f23*/
  if ( !(unsigned __int8)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779f2f*/
  {
    FileClass::Close((RawFileClass *)&v5); /*0x779f3c*/
    CCFileClass::Close((BufferIOFileClass *)&v5); /*0x779f45*/
    CCFileClass::Reopen((CDFileClass *)&v5, g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x779f55*/
  }
  v4.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x779f63*/
  v4.sectionCount = (int)&GenericNode::`vftable'; /*0x779f67*/
  v4.headNode[0] = 0; /*0x779f6f*/
  v4.headNode[1] = 0; /*0x779f74*/
  v4.sectionHead[1] = 0; /*0x779f78*/
  v4.sectionHead[2] = 0; /*0x779f7c*/
  *(_DWORD *)v4.__pad_20 = 0; /*0x779f80*/
  *(_DWORD *)&v4.__pad_20[4] = 0; /*0x779f84*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x779f90*/
  v4.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x779f99*/
  memset(&v4.__pad_20[8], 0, 13); /*0x779fa2*/
  v4.unknown38 = 0; /*0x779fb2*/
  v4.INIClass_field_3C = 0; /*0x779fb6*/
  *(_DWORD *)v4.__pad_0 = &INIClass::`vftable'; /*0x779fba*/
  if ( (unsigned __int8)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779fc2*/
  {
    FileStraw::Open((FileStraw *)&v4, (int)&v5, 0); /*0x779fd5*/
    String::Assign(&v3, aLastvalid); /*0x779fe3*/
    String::Assign((String *)&v3.m_3[1], g_INI_Key_DefaultPersona); /*0x779ff1*/
    INIClass::SetStringOrEmpty(v4.__pad_0, (char **)&v3.m_3[1], (char **)&v3, (char **)this); /*0x77a005*/
    DeleteAndZero((ObjectClass *)&v3.m_3[1]); /*0x77a00e*/
    DeleteAndZero((ObjectClass *)&v3); /*0x77a017*/
    INIClass::SaveToPipe(&v4, (int)&v5); /*0x77a025*/
  }
  HashTable::DestroyHashTableINIClass(&v4); /*0x77a02e*/
  *(_DWORD *)v5.__pad_0 = &off_7E1668; /*0x77a037*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x77a044*/
}



// ==== 0x0077A080  ObjectClass::SaveProfileWOL  this=ObjectClass  sig=csp ====
void __thiscall WOL_SaveProfile(int this, const char **a2)
{
  char *v3; // eax
  char *v4; // eax
  void *v5; // [esp+8h] [ebp-ACh] BYREF
  void *v6; // [esp+Ch] [ebp-A8h] BYREF
  void *v7; // [esp+10h] [ebp-A4h] BYREF
  void *v8[3]; // [esp+14h] [ebp-A0h] BYREF
  void **v9; // [esp+20h] [ebp-94h]
  _DWORD v10[3]; // [esp+24h] [ebp-90h] BYREF
  _DWORD v11[6]; // [esp+30h] [ebp-84h] BYREF
  char v12; // [esp+48h] [ebp-6Ch]
  int v13; // [esp+4Ch] [ebp-68h]
  int v14; // [esp+50h] [ebp-64h]
  int v15; // [esp+54h] [ebp-60h] BYREF
  char v16; // [esp+58h] [ebp-5Ch]
  _DWORD v17[22]; // [esp+5Ch] [ebp-58h] BYREF

  v15 = 0; /*0x77a090*/
  v16 = 0; /*0x77a094*/
  ReadRegistryOptionsWOL(&v15); /*0x77a098*/
  if ( *(_BYTE *)(this + 8) ) /*0x77a09d*/
  {
    String::AssignFromPtr((char **)&v6, a2); /*0x77a0b3*/
    if ( String::Length(a2) ) /*0x77a0ba*/
    {
      String::ToLower((const char **)&v6); /*0x77a0d8*/
      if ( !Flag::IsNot2(&v15) ) /*0x77a0e8*/
      {
LABEL_10:
        DeleteAndZero(&v6); /*0x77a484*/
        return; /*0x77a488*/
      }
    }
    else
    {
      String::Reassign((char **)&v6, &stru_B73590); /*0x77a0cd*/
    }
    BufferIOFile::Constructor(v17, g_Str_File_wolinfoMD_ini); /*0x77a0f7*/
    if ( !File::IsReady(v17, 0) ) /*0x77a101*/
    {
      FileClass::Close(v17); /*0x77a10e*/
      CCFileClass::Close(v17); /*0x77a117*/
      CCFileClass::Reopen(v17, g_Str_File_wolinfoMD_ini, 1); /*0x77a127*/
    }
    if ( File::IsReady(v17, 0) ) /*0x77a131*/
    {
      v10[0] = &GenericNode::`vftable'; /*0x77a147*/
      v11[0] = &GenericNode::`vftable'; /*0x77a14b*/
      v8[1] = 0; /*0x77a153*/
      v8[2] = 0; /*0x77a158*/
      v10[1] = 0; /*0x77a15c*/
      v10[2] = 0; /*0x77a160*/
      v11[1] = 0; /*0x77a164*/
      v11[2] = 0; /*0x77a168*/
      v9 = &GenericList::`vftable'; /*0x77a16c*/
      LinkedList::Prepend(v10, (int)v11); /*0x77a174*/
      v9 = &List<INIClass::INISection *>::`vftable'; /*0x77a183*/
      memset(&v11[3], 0, 12); /*0x77a18b*/
      v12 = 0; /*0x77a197*/
      v13 = 0; /*0x77a19b*/
      v14 = 0; /*0x77a19f*/
      v8[0] = &INIClass::`vftable'; /*0x77a1a3*/
      FileStraw::Open(v8, (int)v17, 0); /*0x77a1ab*/
      String::Assign((char **)&v5, g_INI_Key_Server); /*0x77a1b9*/
      INIClass::SetStringOrEmpty(&v6, &v5, this + 12); /*0x77a1d0*/
      DeleteAndZero(&v5); /*0x77a1d9*/
      String::Assign((char **)&v5, g_INI_Key_Locale); /*0x77a1e7*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 16), 0); /*0x77a1ff*/
      DeleteAndZero(&v5); /*0x77a208*/
      String::Assign((char **)&v5, aLocaleverified); /*0x77a216*/
      INIClass::ReadBool3(&v6, &v5, *(_BYTE *)(this + 20)); /*0x77a22d*/
      DeleteAndZero(&v5); /*0x77a236*/
      String::Assign((char **)&v5, g_INI_Key_Country); /*0x77a244*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 28), 0); /*0x77a25c*/
      DeleteAndZero(&v5); /*0x77a265*/
      String::Assign((char **)&v5, aColor); /*0x77a273*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 32), 0); /*0x77a28b*/
      DeleteAndZero(&v5); /*0x77a294*/
      String::Assign((char **)&v5, aRank); /*0x77a2a2*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 36), 0); /*0x77a2ba*/
      DeleteAndZero(&v5); /*0x77a2c3*/
      String::Assign((char **)&v5, aPoints); /*0x77a2d1*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 40), 0); /*0x77a2e9*/
      DeleteAndZero(&v5); /*0x77a2f2*/
      String::Assign((char **)&v5, aWins); /*0x77a300*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 44), 0); /*0x77a318*/
      DeleteAndZero(&v5); /*0x77a321*/
      String::Assign((char **)&v5, aLosses); /*0x77a32f*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 48), 0); /*0x77a347*/
      DeleteAndZero(&v5); /*0x77a350*/
      String::Assign((char **)&v5, aDisconnects); /*0x77a35e*/
      INIClass::SetIntFormat((char *)v8, (char **)&v6, (char **)&v5, *(_DWORD *)(this + 52), 0); /*0x77a376*/
      DeleteAndZero(&v5); /*0x77a37f*/
      String::Assign((char **)&v5, aMatchbyres); /*0x77a38d*/
      INIClass::ReadBool3(&v6, &v5, *(_BYTE *)(this + 56)); /*0x77a3a4*/
      DeleteAndZero(&v5); /*0x77a3ad*/
      unknown_libname_73(&v7); /*0x77a3b6*/
      ConvertDateMonthNames(this + 60, &v7); /*0x77a3c2*/
      String::Assign((char **)&v5, g_INI_Key_UpdateTime); /*0x77a3d0*/
      INIClass::SetStringOrEmpty(&v6, &v5, &v7); /*0x77a3e8*/
      DeleteAndZero(&v5); /*0x77a3f1*/
      DeleteAndZero::Alt2(&v7); /*0x77a3fa*/
      v3 = (char *)WideString::GetOrEmpty_Alt((wchar_t **)(this + 64)); /*0x77a402*/
      v4 = ToWideStringChar(v3); /*0x77a409*/
      String::Assign_Bool(&v7, v4); /*0x77a413*/
      String::Assign((char **)&v5, g_INI_Key_UpdateDate); /*0x77a421*/
      INIClass::SetStringOrEmpty(&v6, &v5, &v7); /*0x77a439*/
      DeleteAndZero(&v5); /*0x77a442*/
      INIClass::SaveToPipe(v17); /*0x77a450*/
      CCFileClass::Close(v17); /*0x77a459*/
      *(_BYTE *)(this + 8) = 0; /*0x77a462*/
      DeleteAndZero(&v7); /*0x77a465*/
      HashTable::DestroyHashTableINIClass(v8); /*0x77a46e*/
    }
    v17[0] = &off_7E1668; /*0x77a477*/
    BufferIOFileClass::Dtor(v17); /*0x77a47f*/
    goto LABEL_10; /*0x77a47f*/
  }
}



// ==== 0x0077A4A0  WOLOption::SetValue  this=WOLOption  sig=csp ====
unsigned __int8 __thiscall WOLOption::SetValue(int this, const char **a2)
{
  unsigned __int8 result; // al

  result = String::Compare(a2, (const char **)(this + 12)); /*0x77a4af*/
  if ( !result ) /*0x77a4b6*/
  {
    result = (unsigned __int8)String::Reassign((char **)(this + 12), a2); /*0x77a4bb*/
    *(_BYTE *)(this + 8) = 1; /*0x77a4c0*/
  }
  return result; /*0x77a4c4*/
}



// ==== 0x0077A4D0  WOLPersona::FormatDateTime  this=WOLPersona  sig=csp ====
__int16 __thiscall WOLPersona::FormatDateTime(WOLPersona *this)
{
  struct tm *v2; // ebx
  int v3; // edi
  wchar_t *StringCSF; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  __int16 result; // ax
  int v9; // [esp-4h] [ebp-68h]
  __time32_t Time; // [esp+10h] [ebp-54h] BYREF
  char String[16]; // [esp+14h] [ebp-50h] BYREF
  _BYTE v12[64]; // [esp+24h] [ebp-40h] BYREF

  Time = time(0); /*0x77a4e0*/
  v2 = localtime(&Time); /*0x77a4f6*/
  SafeDelete::Ptr((SafeDelete *)this + 8); /*0x77a4f8*/
  String::Wrapper5to4((int)String, 16, (int)aM, (int)v2); /*0x77a50a*/
  v3 = atoi(String); /*0x77a519*/
  String::Wrapper5to4((int)String, 16, (int)g_Str_Trace, (int)v2); /*0x77a528*/
  switch ( v3 ) /*0x77a533*/
  {
    case 1: /*0x77a533*/
      v9 = 609; /*0x77a535*/
LABEL_26:
      StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, v9); /*0x77a65e*/
      break; /*0x77a66a*/
    case 2: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 611); /*0x77a555*/
      break;
    case 3: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 613); /*0x77a570*/
      break;
    case 4: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 615); /*0x77a58b*/
      break;
    case 5: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 617); /*0x77a5a6*/
      break;
    case 6: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 619); /*0x77a5c1*/
      break;
    case 7: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 621); /*0x77a5dc*/
      break;
    case 8: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 623); /*0x77a5f7*/
      break;
    case 9: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 625); /*0x77a60f*/
      break;
    case 10: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 627); /*0x77a627*/
      break;
    case 11: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 629); /*0x77a63f*/
      break;
    case 12: /*0x77a533*/
      StringCSF = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 631); /*0x77a657*/
      break;
    default:
      v9 = 633; /*0x77a659*/
      goto LABEL_26; /*0x77a659*/
  }
  WideString::Reassign((void **)this + 16, StringCSF); /*0x77a66f*/
  WString::Append((WString *)this + 8, (wchar_t *)asc_82083C); /*0x77a67e*/
  v5 = CharToWideString(String); /*0x77a687*/
  WString::Append((WString *)this + 8, (wchar_t *)v5); /*0x77a68f*/
  WString::Append((WString *)this + 8, (wchar_t *)asc_82083C); /*0x77a69b*/
  String::Wrapper5to4((int)String, 16, (int)aY_0, (int)v2); /*0x77a6ad*/
  v6 = CharToWideString(String); /*0x77a6b9*/
  WString::Append((WString *)this + 8, (wchar_t *)v6); /*0x77a6c1*/
  v12[0] = 0; /*0x77a6d3*/
  String::Wrapper5to4((int)v12, 64, (int)aHMS, (int)v2); /*0x77a6d8*/
  v7 = CharToWideString(v12); /*0x77a6e4*/
  result = WideString::Reassign((void **)this + 15, (wchar_t *)v7); /*0x77a6ed*/
  *((_BYTE *)this + 8) = 1; /*0x77a6f3*/
  return result; /*0x77a6f2*/
}



// ==== 0x0077A700  GadgetClass::TrackState  this=GadgetClass  sig=csp ====
char __thiscall GadgetClass_TrackState(int this, int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(this + 16); /*0x77a700*/
  if ( a2 == v3 ) /*0x77a70b*/
  {
    if ( a3 == 2 ) /*0x77a712*/
    {
      LOBYTE(v3) = *(_BYTE *)(this + 20); /*0x77a714*/
      if ( !(_BYTE)v3 ) /*0x77a719*/
      {
        *(_BYTE *)(this + 20) = 1; /*0x77a71c*/
        *(_BYTE *)(this + 8) = 1; /*0x77a720*/
      }
    }
  }
  else if ( (!v3 || a3 >= *(_DWORD *)(this + 24)) && a2 ) /*0x77a742*/
  {
    if ( a3 == 3 ) /*0x77a74b*/
      *(_BYTE *)(this + 20) = 0; /*0x77a74d*/
    *(_DWORD *)(this + 16) = a2; /*0x77a751*/
    *(_DWORD *)(this + 24) = a3; /*0x77a754*/
    *(_BYTE *)(this + 8) = 1; /*0x77a757*/
  }
  return v3; /*0x77a71b*/
}



// ==== 0x0077A760  ObjectClass::MainLobbyDlgProcWOL_Helper  this=ObjectClass  sig=csp ====
char __thiscall MainLobbyDlgProcWOL_Helper(ObjectClass *this, char a2)
{
  char result; // al

  result = a2; /*0x77a760*/
  if ( a2 != LOBYTE(this->attachedBomb) ) /*0x77a769*/
  {
    LOBYTE(this->attachedBomb) = a2; /*0x77a76b*/
    LOBYTE(this->?) = 1; /*0x77a76e*/
  }
  return result; /*0x77a772*/
}



// ==== 0x0077A780  ObjectClass::MainLobbyDlgProcWOL_Helper_77A780  this=ObjectClass  sig=csp ====
int __thiscall sub_77A780(int this, int a2)
{
  int result; // eax

  result = a2; /*0x77a780*/
  if ( a2 != *(_DWORD *)(this + 28) ) /*0x77a789*/
  {
    *(_DWORD *)(this + 28) = a2; /*0x77a78b*/
    *(_BYTE *)(this + 8) = 1; /*0x77a78e*/
  }
  return result; /*0x77a792*/
}



// ==== 0x0077A7A0  ObjectClass::MainLobbyDlgProcWOL_Helper_77A7A0  this=ObjectClass  sig=csp ====
int __thiscall sub_77A7A0(int this, int a2)
{
  int result; // eax

  result = a2; /*0x77a7a0*/
  if ( a2 != *(_DWORD *)(this + 32) ) /*0x77a7a9*/
  {
    *(_DWORD *)(this + 32) = a2; /*0x77a7ab*/
    *(_BYTE *)(this + 8) = 1; /*0x77a7ae*/
  }
  return result; /*0x77a7b2*/
}



// ==== 0x0077A7C0  WOLGameList::UpdatePlayerStats  this=WOLGameList  sig=csp ====
char __thiscall sub_77A7C0(int this, _DWORD *a2)
{
  char result; // al
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // esi

  result = 0; /*0x77a7ca*/
  v3 = a2[7]; /*0x77a7cc*/
  if ( v3 != *(_DWORD *)(this + 36) ) /*0x77a7d3*/
  {
    *(_DWORD *)(this + 36) = v3; /*0x77a7d5*/
    *(_BYTE *)(this + 8) = 1; /*0x77a7d8*/
    result = 1; /*0x77a7db*/
  }
  v4 = a2[4]; /*0x77a7dd*/
  if ( v4 != *(_DWORD *)(this + 40) ) /*0x77a7e5*/
  {
    *(_DWORD *)(this + 40) = v4; /*0x77a7e7*/
    *(_BYTE *)(this + 8) = 1; /*0x77a7ea*/
    result = 1; /*0x77a7ed*/
  }
  v5 = a2[2]; /*0x77a7ef*/
  if ( v5 != *(_DWORD *)(this + 44) ) /*0x77a7f7*/
  {
    *(_DWORD *)(this + 44) = v5; /*0x77a7f9*/
    *(_BYTE *)(this + 8) = 1; /*0x77a7fc*/
    result = 1; /*0x77a7ff*/
  }
  v6 = a2[3]; /*0x77a801*/
  if ( v6 != *(_DWORD *)(this + 48) ) /*0x77a809*/
  {
    *(_DWORD *)(this + 48) = v6; /*0x77a80b*/
    *(_BYTE *)(this + 8) = 1; /*0x77a80e*/
    result = 1; /*0x77a811*/
  }
  v7 = a2[8]; /*0x77a813*/
  if ( v7 == *(_DWORD *)(this + 52) ) /*0x77a81b*/
  {
    if ( result ) /*0x77a830*/
      return WOLPersona::FormatDateTime(this); /*0x77a832*/
  }
  else
  {
    *(_DWORD *)(this + 52) = v7; /*0x77a81d*/
    *(_BYTE *)(this + 8) = 1; /*0x77a820*/
    return WOLPersona::FormatDateTime(this); /*0x77a823*/
  }
  return result; /*0x77a828*/
}



// ==== 0x0077A840  WOLGameList::Check  this=WOLGameList  sig=csp ====
bool __thiscall WOLGameList::Check(WOLGameList *this, int a2)
{
  return *(_DWORD *)(a2 + 28) != *((_DWORD *)this + 9) || *(_DWORD *)(a2 + 16) != *((_DWORD *)this + 10); /*0x77a84d*/
}



// ==== 0x0077A870  ObjectClass::Event_Process_77A870  this=ObjectClass  sig=csp ====
int __thiscall Event_Process_77A870(ObjectClass *this, int a2)
{
  int result; // eax

  result = this->fallRate; /*0x77a870*/
  if ( result != -1 ) /*0x77a876*/
  {
    LOBYTE(this->?) = 1; /*0x77a87c*/
    result += a2; /*0x77a880*/
    this->fallRate = result; /*0x77a882*/
  }
  return result; /*0x77a885*/
}



// ==== 0x0077A890  ObjectClass::Event_Process_77A890  this=ObjectClass  sig=csp ====
int __thiscall Event_Process_77A890(ObjectClass *this, int a2)
{
  int result; // eax

  result = (int)this->nextObject; /*0x77a890*/
  if ( result != -1 ) /*0x77a896*/
  {
    LOBYTE(this->?) = 1; /*0x77a89c*/
    result += a2; /*0x77a8a0*/
    this->nextObject = (ObjectClass *)result; /*0x77a8a2*/
  }
  return result; /*0x77a8a5*/
}



// ==== 0x0077A8B0  ObjectClass::Event_Process_77A8B0  this=ObjectClass  sig=csp ====
int __thiscall Event_Process_77A8B0(ObjectClass *this, int a2)
{
  int result; // eax

  result = (int)this->attachedTag; /*0x77a8b0*/
  if ( result != -1 ) /*0x77a8b6*/
  {
    LOBYTE(this->?) = 1; /*0x77a8bc*/
    result += a2; /*0x77a8c0*/
    this->attachedTag = (TagClass *)result; /*0x77a8c2*/
  }
  return result; /*0x77a8c5*/
}



// ==== 0x0077A8D0  MainLobbyDlgProcWOL_Get  this=-  sig=csp ====
void __fastcall sub_77A8D0(HWND hDlg, char a2)
{
  HWND DlgItem; // ebp
  HWND v4; // eax
  wchar_t *StringCSF; // eax
  HWND v6; // ebp
  wchar_t *v7; // eax
  HWND v8; // ebp
  wchar_t *v9; // eax
  HWND v10; // ebp
  wchar_t *v11; // eax
  HWND v12; // ebp
  wchar_t *v13; // eax
  HWND v14; // esi
  wchar_t *v15; // eax
  void *v16; // [esp+10h] [ebp-4h] BYREF

  if ( a2 ) /*0x77a8e5*/
  {
    DlgItem = GetDlgItem(hDlg, 1576); /*0x77a8ef*/
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x77a8fe*/
    InvalidateRect(DlgItem, 0, 0); /*0x77a905*/
  }
  v4 = GetDlgItem(hDlg, 1775); /*0x77a911*/
  SendMessageA(v4, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x77a920*/
  StringCSF = GetStringCSF(g_Str_GUI_UnknownStats, 0, g_Str_File_WOLPersonaInformation_cpp, 892); /*0x77a933*/
  WideString::Assign((wchar_t **)&v16, StringCSF); /*0x77a93d*/
  v6 = GetDlgItem(hDlg, 1776); /*0x77a94e*/
  v7 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a950*/
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)v7); /*0x77a95e*/
  v8 = GetDlgItem(hDlg, 1777); /*0x77a96c*/
  v9 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a96e*/
  SendMessageA(v8, 0x4B2u, 0, (LPARAM)v9); /*0x77a97c*/
  v10 = GetDlgItem(hDlg, 1793); /*0x77a98a*/
  v11 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a98c*/
  SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x77a99a*/
  v12 = GetDlgItem(hDlg, 1780); /*0x77a9a8*/
  v13 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a9aa*/
  SendMessageA(v12, 0x4B2u, 0, (LPARAM)v13); /*0x77a9b8*/
  v14 = GetDlgItem(hDlg, 1781); /*0x77a9c6*/
  v15 = WideString::GetOrEmpty_Alt((wchar_t **)&v16); /*0x77a9c8*/
  SendMessageA(v14, 0x4B2u, 0, (LPARAM)v15); /*0x77a9d6*/
  DeleteAndZero::Alt(&v16); /*0x77a9dc*/
}



// ==== 0x0077A9F0  ObjectClass::FillPersonaInfoWOL  this=ObjectClass  sig=csp ====
void __thiscall WOL_FillPersonaInfo(int this, HWND hDlg, char **a3, wchar_t **a4)
{
  HWND v4; // ebx
  HWND DlgItem; // edi
  LRESULT v6; // eax
  const char **v7; // ebp
  char *v8; // eax
  LRESULT v9; // ebp
  char *v10; // eax
  wchar_t *v11; // eax
  LRESULT v12; // ebp
  wchar_t *String; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND v16; // edi
  char *v17; // eax
  LRESULT v18; // eax
  HWND v19; // eax
  HWND v20; // edi
  WPARAM v21; // ebp
  HWND v22; // eax
  HWND v23; // ebp
  WPARAM v24; // edi
  HWND (__stdcall *v25)(HWND, int); // edi
  HWND v26; // eax
  HWND v27; // ebp
  WPARAM v28; // edi
  HWND v29; // eax
  wchar_t *v30; // eax
  const wchar_t *v31; // edx
  wchar_t **p_hDlg; // eax
  HWND v33; // ebp
  wchar_t *v34; // eax
  int v35; // eax
  const wchar_t *v36; // edx
  int v37; // eax
  HWND v38; // ebp
  wchar_t *v39; // eax
  int v40; // eax
  const wchar_t *v41; // edx
  int v42; // eax
  HWND v43; // ebp
  wchar_t *v44; // eax
  int v45; // eax
  const wchar_t *v46; // edx
  wchar_t **v47; // eax
  int v48; // eax
  HWND v49; // ebp
  wchar_t *v50; // eax
  int v51; // eax
  const wchar_t *v52; // edx
  int v53; // eax
  HWND v54; // ebp
  wchar_t *v55; // eax
  const char **v56; // ebp
  wchar_t *v57; // eax
  const wchar_t *v58; // edi
  unsigned int v59; // eax
  wchar_t *v60; // edi
  wchar_t *v61; // eax
  HWND v62; // eax
  HWND v63; // eax
  const wchar_t **v64; // ebp
  wchar_t *v65; // eax
  size_t v66; // eax
  char *v67; // edi
  const wchar_t *v68; // eax
  wchar_t *v69; // edi
  wchar_t *v70; // eax
  HWND v71; // eax
  wchar_t *v72; // ebp
  HWND v73; // eax
  const wchar_t *v74; // [esp-8h] [ebp-24h]
  char *v75; // [esp-4h] [ebp-20h]
  wchar_t *v76; // [esp-4h] [ebp-20h]
  void *v78; // [esp+14h] [ebp-8h] BYREF
  int v79; // [esp+18h] [ebp-4h]

  v4 = hDlg; /*0x77a9f8*/
  v79 = 0; /*0x77aa0b*/
  if ( (_BYTE)a4 ) /*0x77aa13*/
  {
    DlgItem = GetDlgItem(hDlg, 1576); /*0x77aa27*/
    v6 = SendMessageA(DlgItem, 0x4CEu, 0, 0); /*0x77aa31*/
    v7 = (const char **)a3; /*0x77aa33*/
    LOBYTE(a4) = v6 != 0; /*0x77aa3b*/
    if ( !String::Length((const char **)a3) || (_BYTE)a4 ) /*0x77aa4f*/
    {
      CharStringToWide((wchar_t **)&a4, v7); /*0x77aa98*/
      if ( !String::Length(v7) /*0x77aac1*/
        || (v11 = WideString::GetOrEmpty_Alt((wchar_t **)&a4),
            v12 = SendMessageA(DlgItem, 0x4BFu, 0xFFFFFFFF, (LPARAM)v11),
            v12 == -1) )
      {
        String = GetStringCSF(aGuiDefault, 0, g_Str_File_WOLPersonaInformation_cpp, 921); /*0x77aad4*/
        WideString::Assign_Alt((void **)&a4, String); /*0x77aade*/
        v14 = WideString::GetOrEmpty_Alt((wchar_t **)&a4); /*0x77aae7*/
        v12 = SendMessageA(DlgItem, 0x4BFu, 0xFFFFFFFF, (LPARAM)v14); /*0x77aaf7*/
      }
      SendMessageA(DlgItem, 0x14Eu, v12, 0); /*0x77ab02*/
      if ( v12 == -1 ) /*0x77ab07*/
      {
        v15 = WideString::GetOrEmpty_Alt((wchar_t **)&a4); /*0x77ab0d*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v15); /*0x77ab1b*/
      }
      DeleteAndZero::Alt((void **)&a4); /*0x77ab21*/
    }
    else
    {
      v8 = String::GetOrEmpty_Alt((char **)v7); /*0x77aa53*/
      v9 = SendMessageA(DlgItem, 0x4B9u, 0xFFFFFFFF, (LPARAM)v8); /*0x77aa63*/
      SendMessageA(DlgItem, 0x14Eu, v9, 0); /*0x77aa6e*/
      if ( v9 == -1 ) /*0x77aa73*/
      {
        v10 = String::GetOrEmpty_Alt(a3); /*0x77aa7d*/
        SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)v10); /*0x77aa8b*/
      }
    }
  }
  v16 = GetDlgItem(v4, 1577); /*0x77ab34*/
  v17 = String::GetOrEmpty_Alt((char **)(this + 12)); /*0x77ab3d*/
  v18 = SendMessageA(v16, 0x4B9u, 0xFFFFFFFF, (LPARAM)v17); /*0x77ab4b*/
  SendMessageA(v16, 0x14Eu, v18, 0); /*0x77ab56*/
  v19 = GetDlgItem(v4, 1578); /*0x77ab5e*/
  v20 = v19; /*0x77ab60*/
  if ( v19 ) /*0x77ab64*/
  {
    v21 = 0; /*0x77ab72*/
    a4 = (wchar_t **)SendMessageA(v19, 0x146u, 0, 0); /*0x77ab74*/
    if ( (int)a4 > 0 ) /*0x77ab7a*/
    {
      while ( SendMessageA(v20, 0x150u, v21, 0) != *(_DWORD *)(this + 16) ) /*0x77ab8e*/
      {
        if ( (int)++v21 >= (int)a4 ) /*0x77ab97*/
          goto LABEL_18; /*0x77ab97*/
      }
      SendMessageA(v20, 0x14Eu, v21, 0); /*0x77aba4*/
    }
  }
LABEL_18:
  v22 = GetDlgItem(v4, 1697); /*0x77aba6*/
  v23 = v22; /*0x77abb2*/
  if ( v22 ) /*0x77abb6*/
  {
    v24 = 0; /*0x77abc4*/
    a4 = (wchar_t **)SendMessageA(v22, 0x146u, 0, 0); /*0x77abc6*/
    if ( (int)a4 > 0 ) /*0x77abcc*/
    {
      while ( SendMessageA(v23, 0x150u, v24, 0) != *(_DWORD *)(this + 28) ) /*0x77abe0*/
      {
        if ( (int)++v24 >= (int)a4 ) /*0x77abe9*/
          goto LABEL_24; /*0x77abe9*/
      }
      SendMessageA(v23, 0x14Eu, v24, 0); /*0x77abf6*/
    }
  }
LABEL_24:
  v25 = GetDlgItem; /*0x77abf8*/
  v26 = GetDlgItem(v4, 1698); /*0x77ac04*/
  v27 = v26; /*0x77ac06*/
  if ( v26 ) /*0x77ac0a*/
  {
    v28 = 0; /*0x77ac18*/
    a4 = (wchar_t **)SendMessageA(v26, 0x146u, 0, 0); /*0x77ac1a*/
    if ( (int)a4 > 0 ) /*0x77ac20*/
    {
      while ( SendMessageA(v27, 0x150u, v28, 0) != *(_DWORD *)(this + 32) ) /*0x77ac34*/
      {
        if ( (int)++v28 >= (int)a4 ) /*0x77ac3d*/
          goto LABEL_30; /*0x77ac3d*/
      }
      SendMessageA(v27, 0x14Eu, v28, 0); /*0x77ac4a*/
    }
LABEL_30:
    v25 = GetDlgItem; /*0x77ac4c*/
  }
  v29 = v25(v4, 1907); /*0x77ac58*/
  if ( v29 ) /*0x77ac5c*/
    SendMessageA(v29, 0xF1u, *(unsigned __int8 *)(this + 56), 0); /*0x77ac70*/
  v30 = GetStringCSF(g_Str_GUI_UnknownStats, 0, g_Str_File_WOLPersonaInformation_cpp, 987); /*0x77ac83*/
  WideString::Assign((wchar_t **)&hDlg, v30); /*0x77ac8d*/
  v31 = *(const wchar_t **)(this + 36); /*0x77ac96*/
  if ( v31 == (const wchar_t *)-1 ) /*0x77ac9c*/
  {
    p_hDlg = (wchar_t **)&hDlg; /*0x77ac9e*/
  }
  else
  {
    v79 = 1; /*0x77aca8*/
    p_hDlg = FormatWideString((wchar_t **)&v78, v31); /*0x77acb0*/
  }
  a4 = p_hDlg; /*0x77acbb*/
  v33 = v25(v4, 1780); /*0x77acc5*/
  v34 = WideString::GetOrEmpty_Alt(a4); /*0x77acc7*/
  SendMessageA(v33, 0x4B2u, 0, (LPARAM)v34); /*0x77acd5*/
  if ( (v79 & 1) != 0 ) /*0x77acdc*/
  {
    v35 = v79; /*0x77acde*/
    LOBYTE(v35) = v79 & 0xFE; /*0x77ace6*/
    v79 = v35; /*0x77ace8*/
    DeleteAndZero::Alt(&v78); /*0x77acec*/
  }
  v36 = *(const wchar_t **)(this + 40); /*0x77acf5*/
  if ( v36 == (const wchar_t *)-1 ) /*0x77acfb*/
  {
    a4 = (wchar_t **)&hDlg; /*0x77ad01*/
  }
  else
  {
    v37 = v79; /*0x77ad07*/
    LOBYTE(v37) = v79 | 2; /*0x77ad0f*/
    v79 = v37; /*0x77ad11*/
    a4 = FormatWideString((wchar_t **)&v78, v36); /*0x77ad1a*/
  }
  v38 = v25(v4, 1781); /*0x77ad2a*/
  v39 = WideString::GetOrEmpty_Alt(a4); /*0x77ad2c*/
  SendMessageA(v38, 0x4B2u, 0, (LPARAM)v39); /*0x77ad3a*/
  if ( (v79 & 2) != 0 ) /*0x77ad41*/
  {
    v40 = v79; /*0x77ad43*/
    LOBYTE(v40) = v79 & 0xFD; /*0x77ad4b*/
    v79 = v40; /*0x77ad4d*/
    DeleteAndZero::Alt(&v78); /*0x77ad51*/
  }
  v41 = *(const wchar_t **)(this + 44); /*0x77ad5a*/
  if ( v41 == (const wchar_t *)-1 ) /*0x77ad60*/
  {
    a4 = (wchar_t **)&hDlg; /*0x77ad66*/
  }
  else
  {
    v42 = v79; /*0x77ad6c*/
    LOBYTE(v42) = v79 | 4; /*0x77ad74*/
    v79 = v42; /*0x77ad76*/
    a4 = FormatWideString((wchar_t **)&v78, v41); /*0x77ad7f*/
  }
  v43 = v25(v4, 1776); /*0x77ad8f*/
  v44 = WideString::GetOrEmpty_Alt(a4); /*0x77ad91*/
  SendMessageA(v43, 0x4B2u, 0, (LPARAM)v44); /*0x77ad9f*/
  if ( (v79 & 4) != 0 ) /*0x77ada6*/
  {
    v45 = v79; /*0x77ada8*/
    LOBYTE(v45) = v79 & 0xFB; /*0x77adb0*/
    v79 = v45; /*0x77adb2*/
    DeleteAndZero::Alt(&v78); /*0x77adb6*/
  }
  v46 = *(const wchar_t **)(this + 48); /*0x77adbf*/
  if ( v46 == (const wchar_t *)-1 ) /*0x77adc5*/
  {
    v47 = (wchar_t **)&hDlg; /*0x77adc7*/
  }
  else
  {
    v48 = v79; /*0x77adcd*/
    LOBYTE(v48) = v79 | 8; /*0x77add5*/
    v79 = v48; /*0x77add7*/
    v47 = FormatWideString((wchar_t **)&v78, v46); /*0x77addb*/
  }
  a4 = v47; /*0x77ade6*/
  v49 = v25(v4, 1777); /*0x77adf0*/
  v50 = WideString::GetOrEmpty_Alt(a4); /*0x77adf2*/
  SendMessageA(v49, 0x4B2u, 0, (LPARAM)v50); /*0x77ae00*/
  if ( (v79 & 8) != 0 ) /*0x77ae07*/
  {
    v51 = v79; /*0x77ae09*/
    LOBYTE(v51) = v79 & 0xF7; /*0x77ae11*/
    v79 = v51; /*0x77ae13*/
    DeleteAndZero::Alt(&v78); /*0x77ae17*/
  }
  v52 = *(const wchar_t **)(this + 52); /*0x77ae20*/
  if ( v52 == (const wchar_t *)-1 ) /*0x77ae26*/
  {
    a4 = (wchar_t **)&hDlg; /*0x77ae2c*/
  }
  else
  {
    v53 = v79; /*0x77ae32*/
    LOBYTE(v53) = v79 | 0x10; /*0x77ae3a*/
    v79 = v53; /*0x77ae3c*/
    a4 = FormatWideString((wchar_t **)&v78, v52); /*0x77ae45*/
  }
  v54 = v25(v4, 1793); /*0x77ae55*/
  v55 = WideString::GetOrEmpty_Alt(a4); /*0x77ae57*/
  SendMessageA(v54, 0x4B2u, 0, (LPARAM)v55); /*0x77ae65*/
  if ( (v79 & 0x10) != 0 ) /*0x77ae6c*/
    DeleteAndZero::Alt(&v78); /*0x77ae72*/
  v56 = (const char **)a3; /*0x77ae77*/
  if ( String::Length((const char **)a3) ) /*0x77ae7d*/
  {
    v57 = GetStringCSF(aGuiUserprofile, 0, g_Str_File_WOLPersonaInformation_cpp, 995); /*0x77ae9b*/
    WideString::Assign((wchar_t **)&a4, v57); /*0x77aea5*/
    v58 = WideString::Length((const wchar_t **)&a4); /*0x77aeb5*/
    v59 = String::Length(v56); /*0x77aeb7*/
    v60 = (wchar_t *)__2_YAPAXI_Z(2 * ((_DWORD)v58 + v59) + 2); /*0x77aecd*/
    v75 = String::GetOrEmpty_Alt((char **)v56); /*0x77aed4*/
    v61 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x77aed9*/
    swprintf(v60, (const size_t)v61, (const wchar_t *const)v75); /*0x77aee0*/
    v62 = GetDlgItem(v4, 1775); /*0x77aeee*/
    SendMessageA(v62, 0x4B2u, 0, (LPARAM)v60); /*0x77aefd*/
    __3_YAXPAX_Z(v60); /*0x77af00*/
    DeleteAndZero::Alt((void **)&a4); /*0x77af0c*/
  }
  else
  {
    v63 = v25(v4, 1775); /*0x77af19*/
    SendMessageA(v63, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x77af28*/
  }
  v64 = (const wchar_t **)(this + 64); /*0x77af3a*/
  a4 = (wchar_t **)(this + 60); /*0x77af47*/
  v65 = GetStringCSF(aGuiWelcomeupda, 0, g_Str_File_WOLPersonaInformation_cpp, 1005); /*0x77af4b*/
  v66 = wcslen(v65); /*0x77af51*/
  v67 = (char *)WideString::Length((const wchar_t **)(this + 60)) + v66; /*0x77af66*/
  v68 = WideString::Length((const wchar_t **)(this + 64)); /*0x77af68*/
  v69 = (wchar_t *)__2_YAPAXI_Z(2 * (int)&v67[(_DWORD)v68]); /*0x77af77*/
  if ( v69 && WideString::Length(v64) && WideString::Length((const wchar_t **)a4) ) /*0x77af8f*/
  {
    v76 = *a4; /*0x77afa1*/
    v74 = *v64; /*0x77afa2*/
    v70 = GetStringCSF(aGuiWelcomeupda, 0, g_Str_File_WOLPersonaInformation_cpp, 1007); /*0x77afb4*/
    swprintf(v69, (const size_t)v70, v74, v76); /*0x77afbb*/
    v71 = GetDlgItem(v4, 1943); /*0x77afc9*/
    SendMessageA(v71, 0x4B2u, 0, (LPARAM)v69); /*0x77afd0*/
  }
  else
  {
    v72 = GetStringCSF(aGuiBlank, 0, g_Str_File_WOLPersonaInformation_cpp, 1010); /*0x77afee*/
    v73 = GetDlgItem(v4, 1943); /*0x77aff0*/
    SendMessageA(v73, 0x4B2u, 0, (LPARAM)v72); /*0x77afff*/
  }
  if ( v69 ) /*0x77b003*/
    __3_YAXPAX_Z(v69); /*0x77b006*/
  DeleteAndZero::Alt((void **)&hDlg); /*0x77b012*/
}



// ==== 0x0077B030  PlayerProfile::QueryInterface  this=PlayerProfile  sig=csp ====
void **__thiscall PlayerProfile::QueryInterface(PlayerProfile *this, char a2)
{
  *this = (PlayerProfile)&PlayerProfile::`vftable'; /*0x77b036*/
  DeleteAndZero::Alt((DeleteAndZero *)(this + 16)); /*0x77b03c*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 5); /*0x77b044*/
  DeleteAndZero((ObjectClass *)(this + 3)); /*0x77b04c*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x77b053*/
  if ( (a2 & 1) != 0 ) /*0x77b05d*/
    __3_YAXPAX_Z(this); /*0x77b060*/
  return (void **)this; /*0x77b06a*/
}



// ==== 0x0077B070  sub_77B070  this=-  sig=ida-proto ====
int sub_77B070()
{
  dword_B73600 = 0; /*0x77b072*/
  dword_B73604 = 0; /*0x77b077*/
  dword_B73608 = 0; /*0x77b07c*/
  dword_B7360C = 0; /*0x77b081*/
  return 0; /*0x77b086*/
}



// ==== 0x0077B090  sub_77B090  this=-  sig=ida-proto ====
void sub_77B090()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77b09c*/
  dbl_B73618 = Math::Sqrt(v0 + v0); /*0x77b0ae*/
}



// ==== 0x0077B0C0  sub_77B0C0  this=-  sig=ida-proto ====
void sub_77B0C0()
{
  dbl_B73668 = dbl_B73618 / 60.0; /*0x77b0cc*/
}



// ==== 0x0077B0E0  sub_77B0E0  this=-  sig=ida-proto ====
void sub_77B0E0()
{
  dbl_B73650 = 1.0 / dbl_B73668; /*0x77b0ec*/
}



// ==== 0x0077B100  sub_77B100  this=-  sig=ida-proto ====
void sub_77B100()
{
  dbl_B73648 = 0.0174532925199433 * 45.0; /*0x77b10c*/
}



// ==== 0x0077B120  sub_77B120  this=-  sig=ida-proto ====
void sub_77B120()
{
  dbl_B73620 = 0.0174532925199433 * 60.0; /*0x77b12c*/
}



// ==== 0x0077B140  sub_77B140  this=-  sig=ida-proto ====
void sub_77B140()
{
  dbl_B735F8 = 0.0174532925199433 * 90.0; /*0x77b14c*/
}



// ==== 0x0077B160  sub_77B160  this=-  sig=ida-proto ====
__int64 sub_77B160()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B735F8 - dbl_B73620); /*0x77b172*/
  result = Math::RoundToInt(v0 * dbl_B73618 * 0.5); /*0x77b186*/
  dword_B73670 = result; /*0x77b18b*/
  return result; /*0x77b190*/
}



// ==== 0x0077B1A0  sub_77B1A0  this=-  sig=ida-proto ====
void sub_77B1A0()
{
  dbl_B73628 = Math::ArcTan((double)dword_B73670 * 0.00390625); /*0x77b1b7*/
}



// ==== 0x0077B1D0  sub_77B1D0  this=-  sig=ida-proto ====
void sub_77B1D0()
{
  dbl_B73640 = Math::ArcTan((double)(2 * dword_B73670) / dbl_B73618); /*0x77b1f2*/
}



// ==== 0x0077B200  sub_77B200  this=-  sig=ida-proto ====
__int64 sub_77B200()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B73670) + 0.5); /*0x77b21b*/
  dword_B73664 = result; /*0x77b220*/
  return result; /*0x77b226*/
}



// ==== 0x0077B230  sub_77B230  this=-  sig=ida-proto ====
int sub_77B230()
{
  word_B73610 = 0; /*0x77b232*/
  word_B73612 = 0; /*0x77b238*/
  return 0; /*0x77b23e*/
}



// ==== 0x0077B240  sub_77B240  this=-  sig=ida-proto ====
int sub_77B240()
{
  dword_B73630 = 0; /*0x77b242*/
  dword_B73634 = 0; /*0x77b247*/
  dword_B73638 = 0; /*0x77b24c*/
  return 0; /*0x77b251*/
}



// ==== 0x0077B260  sub_77B260  this=-  sig=ida-proto ====
int sub_77B260()
{
  dword_B73660 = 0; /*0x77b265*/
  dword_B73658 = 128; /*0x77b26f*/
  dword_B7365C = 128; /*0x77b274*/
  return 128; /*0x77b279*/
}



// ==== 0x0077B2A0  RunWOLMainLoop  this=-  sig=ida-proto ====
int __fastcall RunWOLMainLoop(char a1)
{
  int v2; // esi
  char v3; // cl
  char **AutoLoginWOL; // eax
  char **ConfigWOL; // eax
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int started; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  ObjectClass *v15; // [esp+0h] [ebp-20h]
  ObjectClass *v16; // [esp+0h] [ebp-20h]
  bool v17; // [esp+12h] [ebp-Eh]
  char v18; // [esp+13h] [ebp-Dh]
  void *v19; // [esp+14h] [ebp-Ch] BYREF
  __int64 v20; // [esp+18h] [ebp-8h] BYREF

  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0 ) /*0x77b2b6*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x77b2c0*/
  RunWOLMainLoop_Helper(); /*0x77b2d2*/
  v2 = dword_A83D14; /*0x77b2d7*/
  if ( dword_A83D14 == -1 ) /*0x77b2e0*/
    v2 = dword_A83D18; /*0x77b2e2*/
  if ( v2 == StringList::Find((StringList *)&unk_A83D10, g_INI_Key_INTRO) ) /*0x77b2f9*/
    Theme::QueueSong((int)&unk_A83D10, -3); /*0x77b302*/
  ReadWOLAccountINI(); /*0x77b307*/
  v3 = byte_A83D22; /*0x77b30c*/
  byte_A83D22 = 1; /*0x77b312*/
  v18 = v3; /*0x77b319*/
  RunWOLMainLoop_Find(v15); /*0x77b31d*/
  if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x77b327*/
  {
    AutoLoginWOL = ReadAutoLoginWOL((ObjectClass *)&v19); /*0x77b334*/
    String::Reassign((String *)&g_WindowManager.__pad_EC[684], (const char **)AutoLoginWOL); /*0x77b33f*/
    DeleteAndZero((ObjectClass *)&v19); /*0x77b348*/
    if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x77b352*/
    {
      LODWORD(v20) = 0; /*0x77b361*/
      BYTE4(v20) = 0; /*0x77b365*/
      ReadRegistryOptionsWOL((ObjectClass *)&v20); /*0x77b36a*/
      if ( (unsigned __int8)Flag::IsNot2((Flag *)&v20) ) /*0x77b373*/
      {
        ConfigWOL = LoadConfigWOL((ObjectClass *)&v19); /*0x77b380*/
        String::Reassign((String *)&g_WindowManager.__pad_EC[684], (const char **)ConfigWOL); /*0x77b38b*/
        DeleteAndZero((ObjectClass *)&v19); /*0x77b394*/
      }
    }
  }
  v6 = dword_B73678; /*0x77b39d*/
  v7 = 0; /*0x77b3a3*/
  v17 = 0; /*0x77b3a5*/
  do /*0x77b527*/
  {
    if ( !dword_A8B244 || dword_A8B244 == 6 ) /*0x77b3b7*/
      v8 = 0; /*0x77b3c6*/
    else
      v8 = (dword_A8B244 == 3) + 1; /*0x77b3c2*/
    if ( !v6 && v8 ) /*0x77b3ce*/
    {
      v9 = LoginFlowWOL(v16); /*0x77b3d0*/
      v7 = v9; /*0x77b3d5*/
      if ( v9 ) /*0x77b3d9*/
      {
        if ( v9 != 1 ) /*0x77b3dc*/
        {
LABEL_54:
          *(_DWORD *)&dword_A8B238 = 0; /*0x77b532*/
          dword_A8B244 = 0; /*0x77b538*/
          dword_A8B248 = 0; /*0x77b53e*/
          HandleLogoutWOL(v16); /*0x77b544*/
          byte_A83D22 = v18; /*0x77b54d*/
          Dialog::CloseAll(); /*0x77b553*/
          return v7; /*0x77b561*/
        }
        dword_B73678 = v8; /*0x77b3e2*/
      }
      else
      {
        if ( !dword_A8B244 ) /*0x77b3f0*/
        {
          *(_DWORD *)&dword_A8B238 = 0; /*0x77b562*/
          HandleLogoutWOL(v16); /*0x77b568*/
          byte_A83D22 = v18; /*0x77b571*/
          Dialog::CloseAll(); /*0x77b576*/
          return 0; /*0x77b584*/
        }
        dword_A8B244 = 0; /*0x77b3f6*/
        dword_A8B248 = 0; /*0x77b3fc*/
      }
    }
    RunWOLMainLoop_Find(v16); /*0x77b402*/
    switch ( dword_A8B244 ) /*0x77b415*/
    {
      case 0: /*0x77b415*/
        a1 = 0; /*0x77b41c*/
        v7 = RunWOLMainLoop_Read(v16, 0); /*0x77b423*/
        v17 = v7 != 1; /*0x77b428*/
        break; /*0x77b42d*/
      case 1: /*0x77b415*/
      case 2: /*0x77b415*/
        if ( !a1 ) /*0x77b43b*/
        {
          started = JoinLobbyWOL(v16); /*0x77b432*/
          goto LABEL_34; /*0x77b437*/
        }
        RunWOLMainLoop_Read_7A2970(); /*0x77b43d*/
        goto LABEL_42; /*0x77b442*/
      case 3: /*0x77b415*/
        if ( a1 ) /*0x77b465*/
          RunWOLMainLoop_Read_7A2970(); /*0x77b467*/
        started = StartWDTCampaign(a1); /*0x77b46e*/
LABEL_34:
        v7 = started; /*0x77b473*/
        a1 = 0; /*0x77b475*/
        if ( started ) /*0x77b479*/
          goto LABEL_35; /*0x77b479*/
        goto LABEL_42; /*0x77b479*/
      case 4: /*0x77b415*/
        v7 = NetworkLobbyWOL(0, a1); /*0x77b450*/
        a1 = 0; /*0x77b452*/
        if ( v7 ) /*0x77b456*/
          goto LABEL_35; /*0x77b456*/
        if ( dword_A8B244 == 4 ) /*0x77b45f*/
          goto LABEL_42; /*0x77b45f*/
        break; /*0x77b45f*/
      case 5: /*0x77b415*/
        v7 = GameOptionsScreenWOL(v16); /*0x77b489*/
        a1 = 0; /*0x77b48b*/
        if ( v7 ) /*0x77b48f*/
        {
LABEL_35:
          v17 = 1; /*0x77b47b*/
        }
        else if ( dword_A8B244 == 5 ) /*0x77b498*/
        {
          v11 = dword_A8B248; /*0x77b49a*/
          dword_A8B248 = 0; /*0x77b4a0*/
          dword_A8B244 = v11; /*0x77b4a6*/
        }
        break; /*0x77b4ac*/
      case 6: /*0x77b415*/
        v12 = RunWOLMainLoop_Init(v16); /*0x77b4ae*/
        v7 = v12; /*0x77b4b3*/
        a1 = 0; /*0x77b4b5*/
        if ( v12 == -2 || v12 == -1 ) /*0x77b4c3*/
          goto LABEL_54; /*0x77b4c3*/
        if ( !v12 ) /*0x77b4cb*/
LABEL_42:
          dword_A8B244 = 0; /*0x77b4cd*/
        break; /*0x77b4cd*/
      default:
        break;
    }
    v6 = dword_B73678; /*0x77b4d3*/
    if ( v7 != 1 && dword_B73678 ) /*0x77b4e0*/
    {
      if ( !dword_A8B244 || dword_A8B244 == 6 ) /*0x77b4fb*/
        v13 = 0; /*0x77b508*/
      else
        v13 = (dword_A8B244 == 3) + 1; /*0x77b505*/
      if ( dword_B73678 != v13 || v17 ) /*0x77b510*/
      {
        RunWOLMainLoop_Delete(v16); /*0x77b512*/
        v6 = 0; /*0x77b517*/
        dword_B73678 = 0; /*0x77b519*/
      }
    }
  }
  while ( !v17 ); /*0x77b527*/
  if ( v7 == 1 ) /*0x77b5b8*/
  {
    Dialog::CloseAll(); /*0x77b5ba*/
    return 1; /*0x77b5bf*/
  }
  else
  {
    HandleLogoutWOL(v16); /*0x77b5c9*/
    *(_DWORD *)&dword_A8B238 = 0; /*0x77b5d2*/
    byte_A83D22 = v18; /*0x77b5d8*/
    dword_A8B244 = 0; /*0x77b5de*/
    dword_A8B248 = 0; /*0x77b5e4*/
    Dialog::CloseAll(); /*0x77b5ea*/
    return 0; /*0x77b5ef*/
  }
}



// ==== 0x0077B690  sub_77B690  this=-  sig=ida-proto ====
void sub_77B690()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77b69c*/
  dbl_B75F60 = Math::Sqrt(v0 + v0); /*0x77b6ae*/
}



// ==== 0x0077B6C0  sub_77B6C0  this=-  sig=ida-proto ====
void sub_77B6C0()
{
  dbl_B77CD8 = dbl_B75F60 / 60.0; /*0x77b6cc*/
}



// ==== 0x0077B6E0  sub_77B6E0  this=-  sig=ida-proto ====
void sub_77B6E0()
{
  dbl_B778E8 = 1.0 / dbl_B77CD8; /*0x77b6ec*/
}



// ==== 0x0077B700  sub_77B700  this=-  sig=ida-proto ====
void sub_77B700()
{
  dbl_B778C0 = 0.0174532925199433 * 45.0; /*0x77b70c*/
}



// ==== 0x0077B720  sub_77B720  this=-  sig=ida-proto ====
void sub_77B720()
{
  dbl_B761A0 = 0.0174532925199433 * 60.0; /*0x77b72c*/
}



// ==== 0x0077B740  sub_77B740  this=-  sig=ida-proto ====
void sub_77B740()
{
  dbl_B73AC0 = 0.0174532925199433 * 90.0; /*0x77b74c*/
}



// ==== 0x0077B760  sub_77B760  this=-  sig=ida-proto ====
__int64 sub_77B760()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B73AC0 - dbl_B761A0); /*0x77b772*/
  result = Math::RoundToInt(v0 * dbl_B75F60 * 0.5); /*0x77b786*/
  dword_B77D74 = result; /*0x77b78b*/
  return result; /*0x77b790*/
}



// ==== 0x0077B7A0  sub_77B7A0  this=-  sig=ida-proto ====
void sub_77B7A0()
{
  dbl_B76460 = Math::ArcTan((double)dword_B77D74 * 0.00390625); /*0x77b7b7*/
}



// ==== 0x0077B7D0  sub_77B7D0  this=-  sig=ida-proto ====
void sub_77B7D0()
{
  dbl_B76AF8 = Math::ArcTan((double)(2 * dword_B77D74) / dbl_B75F60); /*0x77b7f2*/
}



// ==== 0x0077B800  sub_77B800  this=-  sig=ida-proto ====
__int64 sub_77B800()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B77D74) + 0.5); /*0x77b81b*/
  dword_B77CD0 = result; /*0x77b820*/
  return result; /*0x77b826*/
}



// ==== 0x0077B830  sub_77B830  this=-  sig=ida-proto ====
int sub_77B830()
{
  word_B75F50 = 0; /*0x77b832*/
  word_B75F52 = 0; /*0x77b838*/
  return 0; /*0x77b83e*/
}



// ==== 0x0077B840  sub_77B840  this=-  sig=ida-proto ====
int sub_77B840()
{
  dword_B76960 = 0; /*0x77b842*/
  dword_B76964 = 0; /*0x77b847*/
  dword_B76968 = 0; /*0x77b84c*/
  return 0; /*0x77b851*/
}



// ==== 0x0077B860  sub_77B860  this=-  sig=ida-proto ====
int sub_77B860()
{
  dword_B77A00 = 0; /*0x77b865*/
  dword_B779F8 = 128; /*0x77b86f*/
  dword_B779FC = 128; /*0x77b874*/
  return 128; /*0x77b879*/
}



// ==== 0x0077B880  sub_77B880  this=-  sig=ida-proto ====
int sub_77B880()
{
  dword_B73DF8 = 0; /*0x77b882*/
  dword_B73DFC = 0; /*0x77b887*/
  dword_B73E00 = 0; /*0x77b88c*/
  dword_B73E04 = 0; /*0x77b891*/
  return 0; /*0x77b896*/
}



// ==== 0x0077B8A0  sub_77B8A0  this=-  sig=ida-proto ====
int sub_77B8A0()
{
  OleInitialize(0); /*0x77b8a2*/
  return atexit(OleUninitialize); /*0x77b8b3*/
}



// ==== 0x0077B8C0  OleUninitialize  this=-  sig=ida-proto ====
// attributes: thunk
void __stdcall OleUninitialize()
{
  __imp_OleUninitialize(); /*0x77b8c0*/
}



// ==== 0x0077B8D0  sub_77B8D0  this=-  sig=ida-proto ====
int sub_77B8D0()
{
  unknown_libname_73(&unk_B73AE0); /*0x77b8d5*/
  return atexit(unknown_libname_39); /*0x77b8e5*/
}



// ==== 0x0077B8F0  unknown_libname_39  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_39()
{
  DeleteAndZero((void **)&unk_B73AE0); /*0x77b8f5*/
}



// ==== 0x0077B900  sub_77B900  this=-  sig=ida-proto ====
int sub_77B900()
{
  g_WOL_UserList = 0; /*0x77b907*/
  dword_B778DC = 0; /*0x77b90c*/
  dword_B778E0 = 0; /*0x77b911*/
  return atexit(sub_77B920); /*0x77b91c*/
}



// ==== 0x0077B920  sub_77B920  this=-  sig=ida-proto ====
void __cdecl sub_77B920()
{
  g_WOL_UserList = 0; /*0x77b925*/
  __3_YAXPAX_Z(dword_B778E0); /*0x77b930*/
}



// ==== 0x0077B940  sub_77B940  this=-  sig=ida-proto ====
int sub_77B940()
{
  dword_B73E10 = 0; /*0x77b947*/
  dword_B73E14 = 0; /*0x77b94c*/
  dword_B73E18 = 0; /*0x77b951*/
  return atexit(sub_77B960); /*0x77b95c*/
}



// ==== 0x0077B960  sub_77B960  this=-  sig=ida-proto ====
void __cdecl sub_77B960()
{
  dword_B73E10 = 0; /*0x77b965*/
  __3_YAXPAX_Z(dword_B73E18); /*0x77b970*/
}



// ==== 0x0077B980  sub_77B980  this=-  sig=ida-proto ====
int sub_77B980()
{
  dword_B76AE0 = 0; /*0x77b987*/
  dword_B76AE4 = 0; /*0x77b98c*/
  dword_B76AE8 = 0; /*0x77b991*/
  return atexit(sub_77B9A0); /*0x77b99c*/
}



// ==== 0x0077B9A0  sub_77B9A0  this=-  sig=ida-proto ====
void __cdecl sub_77B9A0()
{
  dword_B76AE0 = 0; /*0x77b9a5*/
  __3_YAXPAX_Z(dword_B76AE8); /*0x77b9b0*/
}



// ==== 0x0077B9C0  sub_77B9C0  this=-  sig=ida-proto ====
int sub_77B9C0()
{
  dword_B77900 = 0; /*0x77b9c7*/
  dword_B77904 = 0; /*0x77b9cc*/
  dword_B77908 = 0; /*0x77b9d1*/
  return atexit(sub_77B9E0); /*0x77b9dc*/
}



// ==== 0x0077B9E0  sub_77B9E0  this=-  sig=ida-proto ====
void __cdecl sub_77B9E0()
{
  dword_B77900 = 0; /*0x77b9e5*/
  __3_YAXPAX_Z(dword_B77908); /*0x77b9f0*/
}



// ==== 0x0077BA00  sub_77BA00  this=-  sig=ida-proto ====
int sub_77BA00()
{
  dword_B76520 = 0; /*0x77ba07*/
  dword_B76524 = 0; /*0x77ba0c*/
  dword_B76528 = 0; /*0x77ba11*/
  return atexit(sub_77BA20); /*0x77ba1c*/
}



// ==== 0x0077BA20  sub_77BA20  this=-  sig=ida-proto ====
void __cdecl sub_77BA20()
{
  dword_B76520 = 0; /*0x77ba25*/
  __3_YAXPAX_Z(dword_B76528); /*0x77ba30*/
}



// ==== 0x0077BA40  sub_77BA40  this=-  sig=ida-proto ====
int sub_77BA40()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77ba40*/
  dword_B768E0 = -1717986918; /*0x77ba47*/
  dword_B768E4 = 1070176665; /*0x77ba51*/
  dbl_B768E8 = 0.8; /*0x77ba5b*/
  dword_B768F0 = 128; /*0x77ba6f*/
  v1 = 0; /*0x77ba74*/
  do /*0x77ba79*/
  {
    ++v1; /*0x77ba76*/
    v0 >>= 1; /*0x77ba77*/
  }
  while ( v0 ); /*0x77ba79*/
  dword_B768D0 = 0; /*0x77ba7b*/
  dword_B768CC = v1 - 1; /*0x77ba89*/
  dword_B768C4 = 0; /*0x77ba8f*/
  byte_B768D4 = 0; /*0x77ba95*/
  dword_B768C8 = 1 << (v1 - 1); /*0x77ba9b*/
  g_WOL_ListParser = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77bab3*/
  memset(g_WOL_ListParser, 0, 4 * dword_B768C8); /*0x77bab9*/
  dword_B768D8 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77bac0*/
  return atexit(sub_77BAE0); /*0x77bad2*/
}



// ==== 0x0077BAE0  sub_77BAE0  this=-  sig=ida-proto ====
void __cdecl sub_77BAE0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B768C8; /*0x77bae0*/
  for ( i = 0; i < dword_B768C8; v0 = dword_B768C8 ) /*0x77baed*/
  {
    v2 = *((_DWORD *)g_WOL_ListParser + i); /*0x77baf4*/
    while ( v2 ) /*0x77baf9*/
    {
      v3 = (void **)v2; /*0x77bafb*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77bafd*/
      DeleteAndZero(v3); /*0x77bb06*/
      __3_YAXPAX_Z(v3); /*0x77bb0c*/
    }
    *((_DWORD *)g_WOL_ListParser + i++) = 0; /*0x77bb1f*/
  }
  v4 = dword_B768F0; /*0x77bb30*/
  dword_B768C4 = 0; /*0x77bb36*/
  if ( v0 > dword_B768F0 ) /*0x77bb42*/
  {
    do /*0x77bbf5*/
    {
      if ( byte_B768D4 || v0 <= v4 ) /*0x77bb58*/
        break; /*0x77bb58*/
      v5 = (int *)g_WOL_ListParser; /*0x77bb64*/
      v6 = v0; /*0x77bb6a*/
      dword_B768C8 = v0 >> 1; /*0x77bb6f*/
      --dword_B768CC; /*0x77bb7b*/
      g_WOL_ListParser = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bb94*/
      memset(g_WOL_ListParser, 0, 4 * dword_B768C8); /*0x77bb9c*/
      if ( v6 > 0 ) /*0x77bb9e*/
      {
        v7 = v5; /*0x77bba0*/
        v8 = v6; /*0x77bba2*/
        do /*0x77bbdd*/
        {
          v9 = *v7; /*0x77bba4*/
          if ( *v7 ) /*0x77bba4*/
          {
            do /*0x77bbd7*/
            {
              v10 = dword_B768D8(v9) & ((1 << dword_B768CC) - 1); /*0x77bbc0*/
              v11 = *((_DWORD *)g_WOL_ListParser + v10); /*0x77bbc7*/
              *((_DWORD *)g_WOL_ListParser + v10) = v9; /*0x77bbca*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bbcd*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bbd0*/
              v9 = v12; /*0x77bbd5*/
            }
            while ( v12 ); /*0x77bbd7*/
          }
          ++v7; /*0x77bbd9*/
          --v8; /*0x77bbdc*/
        }
        while ( v8 ); /*0x77bbdd*/
      }
      __3_YAXPAX_Z(v5); /*0x77bbe0*/
      v4 = dword_B768F0; /*0x77bbe5*/
      v0 = dword_B768C8; /*0x77bbeb*/
    }
    while ( dword_B768C8 > (unsigned int)dword_B768F0 ); /*0x77bbf5*/
  }
  __3_YAXPAX_Z(g_WOL_ListParser); /*0x77bc01*/
}



// ==== 0x0077BC10  sub_77BC10  this=-  sig=ida-proto ====
int sub_77BC10()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bc10*/
  dword_B73B18 = -1717986918; /*0x77bc17*/
  dword_B73B1C = 1070176665; /*0x77bc21*/
  dbl_B73B20 = 0.8; /*0x77bc2b*/
  dword_B73B28 = 128; /*0x77bc3f*/
  v1 = 0; /*0x77bc44*/
  do /*0x77bc49*/
  {
    ++v1; /*0x77bc46*/
    v0 >>= 1; /*0x77bc47*/
  }
  while ( v0 ); /*0x77bc49*/
  dword_B73B08 = 0; /*0x77bc4b*/
  dword_B73B04 = v1 - 1; /*0x77bc59*/
  dword_B73AFC = 0; /*0x77bc5f*/
  byte_B73B0C = 0; /*0x77bc65*/
  dword_B73B00 = 1 << (v1 - 1); /*0x77bc6b*/
  dword_B73AF8 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77bc83*/
  memset(dword_B73AF8, 0, 4 * dword_B73B00); /*0x77bc89*/
  dword_B73B10 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77bc90*/
  return atexit(sub_77BCB0); /*0x77bca2*/
}



// ==== 0x0077BCB0  sub_77BCB0  this=-  sig=ida-proto ====
void __cdecl sub_77BCB0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B73B00; /*0x77bcb0*/
  for ( i = 0; i < dword_B73B00; v0 = dword_B73B00 ) /*0x77bcbd*/
  {
    v2 = *((_DWORD *)dword_B73AF8 + i); /*0x77bcc4*/
    while ( v2 ) /*0x77bcc9*/
    {
      v3 = (void **)v2; /*0x77bccb*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77bccd*/
      DeleteAndZero(v3); /*0x77bcd6*/
      __3_YAXPAX_Z(v3); /*0x77bcdc*/
    }
    *((_DWORD *)dword_B73AF8 + i++) = 0; /*0x77bcef*/
  }
  v4 = dword_B73B28; /*0x77bd00*/
  dword_B73AFC = 0; /*0x77bd06*/
  if ( v0 > dword_B73B28 ) /*0x77bd12*/
  {
    do /*0x77bdc5*/
    {
      if ( byte_B73B0C || v0 <= v4 ) /*0x77bd28*/
        break; /*0x77bd28*/
      v5 = (int *)dword_B73AF8; /*0x77bd34*/
      v6 = v0; /*0x77bd3a*/
      dword_B73B00 = v0 >> 1; /*0x77bd3f*/
      --dword_B73B04; /*0x77bd4b*/
      dword_B73AF8 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bd64*/
      memset(dword_B73AF8, 0, 4 * dword_B73B00); /*0x77bd6c*/
      if ( v6 > 0 ) /*0x77bd6e*/
      {
        v7 = v5; /*0x77bd70*/
        v8 = v6; /*0x77bd72*/
        do /*0x77bdad*/
        {
          v9 = *v7; /*0x77bd74*/
          if ( *v7 ) /*0x77bd74*/
          {
            do /*0x77bda7*/
            {
              v10 = dword_B73B10(v9) & ((1 << dword_B73B04) - 1); /*0x77bd90*/
              v11 = *((_DWORD *)dword_B73AF8 + v10); /*0x77bd97*/
              *((_DWORD *)dword_B73AF8 + v10) = v9; /*0x77bd9a*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bd9d*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bda0*/
              v9 = v12; /*0x77bda5*/
            }
            while ( v12 ); /*0x77bda7*/
          }
          ++v7; /*0x77bda9*/
          --v8; /*0x77bdac*/
        }
        while ( v8 ); /*0x77bdad*/
      }
      __3_YAXPAX_Z(v5); /*0x77bdb0*/
      v4 = dword_B73B28; /*0x77bdb5*/
      v0 = dword_B73B00; /*0x77bdbb*/
    }
    while ( dword_B73B00 > (unsigned int)dword_B73B28 ); /*0x77bdc5*/
  }
  __3_YAXPAX_Z(dword_B73AF8); /*0x77bdd1*/
}



// ==== 0x0077BDE0  sub_77BDE0  this=-  sig=ida-proto ====
int sub_77BDE0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bde0*/
  dword_B77DA0 = -1717986918; /*0x77bde7*/
  dword_B77DA4 = 1070176665; /*0x77bdf1*/
  dbl_B77DA8 = 0.8; /*0x77bdfb*/
  dword_B77DB0 = 128; /*0x77be0f*/
  v1 = 0; /*0x77be14*/
  do /*0x77be19*/
  {
    ++v1; /*0x77be16*/
    v0 >>= 1; /*0x77be17*/
  }
  while ( v0 ); /*0x77be19*/
  dword_B77D90 = 0; /*0x77be1b*/
  dword_B77D8C = v1 - 1; /*0x77be29*/
  dword_B77D84 = 0; /*0x77be2f*/
  byte_B77D94 = 0; /*0x77be35*/
  dword_B77D88 = 1 << (v1 - 1); /*0x77be3b*/
  stru_B77D80 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77be53*/
  memset(stru_B77D80, 0, 4 * dword_B77D88); /*0x77be59*/
  dword_B77D98 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77be60*/
  return atexit(sub_77BE80); /*0x77be72*/
}



// ==== 0x0077BE80  sub_77BE80  this=-  sig=ida-proto ====
void __cdecl sub_77BE80()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B77D88; /*0x77be80*/
  for ( i = 0; i < dword_B77D88; v0 = dword_B77D88 ) /*0x77be8d*/
  {
    v2 = *((_DWORD *)stru_B77D80 + i); /*0x77be94*/
    while ( v2 ) /*0x77be99*/
    {
      v3 = (void **)v2; /*0x77be9b*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77be9d*/
      DeleteAndZero(v3); /*0x77bea6*/
      __3_YAXPAX_Z(v3); /*0x77beac*/
    }
    *((_DWORD *)stru_B77D80 + i++) = 0; /*0x77bebf*/
  }
  v4 = dword_B77DB0; /*0x77bed0*/
  dword_B77D84 = 0; /*0x77bed6*/
  if ( v0 > dword_B77DB0 ) /*0x77bee2*/
  {
    do /*0x77bf95*/
    {
      if ( byte_B77D94 || v0 <= v4 ) /*0x77bef8*/
        break; /*0x77bef8*/
      v5 = (int *)stru_B77D80; /*0x77bf04*/
      v6 = v0; /*0x77bf0a*/
      dword_B77D88 = v0 >> 1; /*0x77bf0f*/
      --dword_B77D8C; /*0x77bf1b*/
      stru_B77D80 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bf34*/
      memset(stru_B77D80, 0, 4 * dword_B77D88); /*0x77bf3c*/
      if ( v6 > 0 ) /*0x77bf3e*/
      {
        v7 = v5; /*0x77bf40*/
        v8 = v6; /*0x77bf42*/
        do /*0x77bf7d*/
        {
          v9 = *v7; /*0x77bf44*/
          if ( *v7 ) /*0x77bf44*/
          {
            do /*0x77bf77*/
            {
              v10 = dword_B77D98(v9) & ((1 << dword_B77D8C) - 1); /*0x77bf60*/
              v11 = *((_DWORD *)stru_B77D80 + v10); /*0x77bf67*/
              *((_DWORD *)stru_B77D80 + v10) = v9; /*0x77bf6a*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bf6d*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bf70*/
              v9 = v12; /*0x77bf75*/
            }
            while ( v12 ); /*0x77bf77*/
          }
          ++v7; /*0x77bf79*/
          --v8; /*0x77bf7c*/
        }
        while ( v8 ); /*0x77bf7d*/
      }
      __3_YAXPAX_Z(v5); /*0x77bf80*/
      v4 = dword_B77DB0; /*0x77bf85*/
      v0 = dword_B77D88; /*0x77bf8b*/
    }
    while ( dword_B77D88 > (unsigned int)dword_B77DB0 ); /*0x77bf95*/
  }
  __3_YAXPAX_Z(stru_B77D80); /*0x77bfa1*/
}



// ==== 0x0077BFB0  sub_77BFB0  this=-  sig=ida-proto ====
int sub_77BFB0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bfb0*/
  dbl_B76660 = 0.2; /*0x77bfb7*/
  dbl_B76668 = 0.8; /*0x77bfcb*/
  dword_B76670 = 128; /*0x77bfdf*/
  v1 = 0; /*0x77bfe4*/
  do /*0x77bfe9*/
  {
    ++v1; /*0x77bfe6*/
    v0 >>= 1; /*0x77bfe7*/
  }
  while ( v0 ); /*0x77bfe9*/
  dword_B76650 = 0; /*0x77bfeb*/
  dword_B7664C = v1 - 1; /*0x77bff9*/
  dword_B76644 = 0; /*0x77bfff*/
  byte_B76654 = 0; /*0x77c005*/
  dword_B76648 = 1 << (v1 - 1); /*0x77c00b*/
  dword_B76640 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77c023*/
  memset(dword_B76640, 0, 4 * dword_B76648); /*0x77c029*/
  dword_B76658 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77c030*/
  return atexit(sub_77C050); /*0x77c042*/
}



// ==== 0x0077C050  sub_77C050  this=-  sig=ida-proto ====
void __cdecl sub_77C050()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76648; /*0x77c050*/
  for ( i = 0; i < dword_B76648; v0 = dword_B76648 ) /*0x77c05d*/
  {
    v2 = *((_DWORD *)dword_B76640 + i); /*0x77c064*/
    while ( v2 ) /*0x77c069*/
    {
      v3 = (void **)v2; /*0x77c06b*/
      v2 = *(_DWORD *)(v2 + 72); /*0x77c06d*/
      DeleteAndZero(v3); /*0x77c076*/
      __3_YAXPAX_Z(v3); /*0x77c07c*/
    }
    *((_DWORD *)dword_B76640 + i++) = 0; /*0x77c08f*/
  }
  v4 = dword_B76670; /*0x77c0a0*/
  dword_B76644 = 0; /*0x77c0a6*/
  if ( v0 > dword_B76670 ) /*0x77c0b2*/
  {
    do /*0x77c165*/
    {
      if ( byte_B76654 || v0 <= v4 ) /*0x77c0c8*/
        break; /*0x77c0c8*/
      v5 = (int *)dword_B76640; /*0x77c0d4*/
      v6 = v0; /*0x77c0da*/
      dword_B76648 = v0 >> 1; /*0x77c0df*/
      --dword_B7664C; /*0x77c0eb*/
      dword_B76640 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c104*/
      memset(dword_B76640, 0, 4 * dword_B76648); /*0x77c10c*/
      if ( v6 > 0 ) /*0x77c10e*/
      {
        v7 = v5; /*0x77c110*/
        v8 = v6; /*0x77c112*/
        do /*0x77c14d*/
        {
          v9 = *v7; /*0x77c114*/
          if ( *v7 ) /*0x77c114*/
          {
            do /*0x77c147*/
            {
              v10 = dword_B76658(v9) & ((1 << dword_B7664C) - 1); /*0x77c130*/
              v11 = *((_DWORD *)dword_B76640 + v10); /*0x77c137*/
              *((_DWORD *)dword_B76640 + v10) = v9; /*0x77c13a*/
              v12 = *(_DWORD *)(v9 + 72); /*0x77c13d*/
              *(_DWORD *)(v9 + 72) = v11; /*0x77c140*/
              v9 = v12; /*0x77c145*/
            }
            while ( v12 ); /*0x77c147*/
          }
          ++v7; /*0x77c149*/
          --v8; /*0x77c14c*/
        }
        while ( v8 ); /*0x77c14d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c150*/
      v4 = dword_B76670; /*0x77c155*/
      v0 = dword_B76648; /*0x77c15b*/
    }
    while ( dword_B76648 > (unsigned int)dword_B76670 ); /*0x77c165*/
  }
  __3_YAXPAX_Z(dword_B76640); /*0x77c171*/
}



// ==== 0x0077C180  sub_77C180  this=-  sig=ida-proto ====
int sub_77C180()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77c180*/
  dbl_B766A0 = 0.2; /*0x77c187*/
  dbl_B766A8 = 0.8; /*0x77c19b*/
  dword_B766B0 = 128; /*0x77c1af*/
  v1 = 0; /*0x77c1b4*/
  do /*0x77c1b9*/
  {
    ++v1; /*0x77c1b6*/
    v0 >>= 1; /*0x77c1b7*/
  }
  while ( v0 ); /*0x77c1b9*/
  dword_B76690 = 0; /*0x77c1bb*/
  dword_B7668C = v1 - 1; /*0x77c1c9*/
  dword_B76684 = 0; /*0x77c1cf*/
  byte_B76694 = 0; /*0x77c1d5*/
  dword_B76688 = 1 << (v1 - 1); /*0x77c1db*/
  dword_B76680 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77c1f3*/
  memset(dword_B76680, 0, 4 * dword_B76688); /*0x77c1f9*/
  dword_B76698 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77c200*/
  return atexit(sub_77C220); /*0x77c212*/
}



// ==== 0x0077C220  sub_77C220  this=-  sig=ida-proto ====
void __cdecl sub_77C220()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76688; /*0x77c220*/
  for ( i = 0; i < dword_B76688; v0 = dword_B76688 ) /*0x77c22d*/
  {
    v2 = *((_DWORD *)dword_B76680 + i); /*0x77c234*/
    while ( v2 ) /*0x77c239*/
    {
      v3 = (void **)v2; /*0x77c23b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77c23d*/
      DeleteAndZero(v3); /*0x77c246*/
      __3_YAXPAX_Z(v3); /*0x77c24c*/
    }
    *((_DWORD *)dword_B76680 + i++) = 0; /*0x77c25f*/
  }
  v4 = dword_B766B0; /*0x77c270*/
  dword_B76684 = 0; /*0x77c276*/
  if ( v0 > dword_B766B0 ) /*0x77c282*/
  {
    do /*0x77c335*/
    {
      if ( byte_B76694 || v0 <= v4 ) /*0x77c298*/
        break; /*0x77c298*/
      v5 = (int *)dword_B76680; /*0x77c2a4*/
      v6 = v0; /*0x77c2aa*/
      dword_B76688 = v0 >> 1; /*0x77c2af*/
      --dword_B7668C; /*0x77c2bb*/
      dword_B76680 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c2d4*/
      memset(dword_B76680, 0, 4 * dword_B76688); /*0x77c2dc*/
      if ( v6 > 0 ) /*0x77c2de*/
      {
        v7 = v5; /*0x77c2e0*/
        v8 = v6; /*0x77c2e2*/
        do /*0x77c31d*/
        {
          v9 = *v7; /*0x77c2e4*/
          if ( *v7 ) /*0x77c2e4*/
          {
            do /*0x77c317*/
            {
              v10 = dword_B76698(v9) & ((1 << dword_B7668C) - 1); /*0x77c300*/
              v11 = *((_DWORD *)dword_B76680 + v10); /*0x77c307*/
              *((_DWORD *)dword_B76680 + v10) = v9; /*0x77c30a*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77c30d*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77c310*/
              v9 = v12; /*0x77c315*/
            }
            while ( v12 ); /*0x77c317*/
          }
          ++v7; /*0x77c319*/
          --v8; /*0x77c31c*/
        }
        while ( v8 ); /*0x77c31d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c320*/
      v4 = dword_B766B0; /*0x77c325*/
      v0 = dword_B76688; /*0x77c32b*/
    }
    while ( dword_B76688 > (unsigned int)dword_B766B0 ); /*0x77c335*/
  }
  __3_YAXPAX_Z(dword_B76680); /*0x77c341*/
}



// ==== 0x0077C350  sub_77C350  this=-  sig=ida-proto ====
int sub_77C350()
{
  dword_B777A0 = 0; /*0x77c357*/
  dword_B777A4 = 0; /*0x77c35c*/
  dword_B777A8 = 0; /*0x77c361*/
  return atexit(sub_77C370); /*0x77c36c*/
}



// ==== 0x0077C370  sub_77C370  this=-  sig=ida-proto ====
void __cdecl sub_77C370()
{
  int i; // esi

  for ( i = 0; i < dword_B777A0; ++i ) /*0x77c37a*/
    DeleteAndZero((void **)dword_B777A8 + i); /*0x77c384*/
  dword_B777A0 = 0; /*0x77c399*/
  __3_YAXPAX_Z(dword_B777A8); /*0x77c3a4*/
}



// ==== 0x0077C3B0  sub_77C3B0  this=-  sig=ida-proto ====
int sub_77C3B0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77c3b0*/
  dbl_B76550 = 0.2; /*0x77c3b7*/
  dbl_B76558 = 0.8; /*0x77c3cb*/
  dword_B76560 = 128; /*0x77c3df*/
  v1 = 0; /*0x77c3e4*/
  do /*0x77c3e9*/
  {
    ++v1; /*0x77c3e6*/
    v0 >>= 1; /*0x77c3e7*/
  }
  while ( v0 ); /*0x77c3e9*/
  dword_B76540 = 0; /*0x77c3eb*/
  dword_B7653C = v1 - 1; /*0x77c3f9*/
  dword_B76534 = 0; /*0x77c3ff*/
  byte_B76544 = 0; /*0x77c405*/
  dword_B76538 = 1 << (v1 - 1); /*0x77c40b*/
  g_WOL_ConnectionPool = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77c423*/
  memset(g_WOL_ConnectionPool, 0, 4 * dword_B76538); /*0x77c429*/
  dword_B76548 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77c430*/
  return atexit(sub_77C450); /*0x77c442*/
}



// ==== 0x0077C450  sub_77C450  this=-  sig=ida-proto ====
void __cdecl sub_77C450()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76538; /*0x77c450*/
  for ( i = 0; i < dword_B76538; v0 = dword_B76538 ) /*0x77c45d*/
  {
    v2 = *((_DWORD *)g_WOL_ConnectionPool + i); /*0x77c464*/
    while ( v2 ) /*0x77c469*/
    {
      v3 = (void **)v2; /*0x77c46b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77c46d*/
      DeleteAndZero(v3); /*0x77c476*/
      __3_YAXPAX_Z(v3); /*0x77c47c*/
    }
    *((_DWORD *)g_WOL_ConnectionPool + i++) = 0; /*0x77c48f*/
  }
  v4 = dword_B76560; /*0x77c4a0*/
  dword_B76534 = 0; /*0x77c4a6*/
  if ( v0 > dword_B76560 ) /*0x77c4b2*/
  {
    do /*0x77c565*/
    {
      if ( byte_B76544 || v0 <= v4 ) /*0x77c4c8*/
        break; /*0x77c4c8*/
      v5 = (int *)g_WOL_ConnectionPool; /*0x77c4d4*/
      v6 = v0; /*0x77c4da*/
      dword_B76538 = v0 >> 1; /*0x77c4df*/
      --dword_B7653C; /*0x77c4eb*/
      g_WOL_ConnectionPool = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c504*/
      memset(g_WOL_ConnectionPool, 0, 4 * dword_B76538); /*0x77c50c*/
      if ( v6 > 0 ) /*0x77c50e*/
      {
        v7 = v5; /*0x77c510*/
        v8 = v6; /*0x77c512*/
        do /*0x77c54d*/
        {
          v9 = *v7; /*0x77c514*/
          if ( *v7 ) /*0x77c514*/
          {
            do /*0x77c547*/
            {
              v10 = dword_B76548(v9) & ((1 << dword_B7653C) - 1); /*0x77c530*/
              v11 = *((_DWORD *)g_WOL_ConnectionPool + v10); /*0x77c537*/
              *((_DWORD *)g_WOL_ConnectionPool + v10) = v9; /*0x77c53a*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77c53d*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77c540*/
              v9 = v12; /*0x77c545*/
            }
            while ( v12 ); /*0x77c547*/
          }
          ++v7; /*0x77c549*/
          --v8; /*0x77c54c*/
        }
        while ( v8 ); /*0x77c54d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c550*/
      v4 = dword_B76560; /*0x77c555*/
      v0 = dword_B76538; /*0x77c55b*/
    }
    while ( dword_B76538 > (unsigned int)dword_B76560 ); /*0x77c565*/
  }
  __3_YAXPAX_Z(g_WOL_ConnectionPool); /*0x77c571*/
}



// ==== 0x0077C580  sub_77C580  this=-  sig=ida-proto ====
int sub_77C580()
{
  dword_B765F8 = 0; /*0x77c587*/
  dword_B765FC = 0; /*0x77c58c*/
  dword_B76600 = 0; /*0x77c591*/
  return atexit(sub_77C5A0); /*0x77c59c*/
}



// ==== 0x0077C5A0  sub_77C5A0  this=-  sig=ida-proto ====
void __cdecl sub_77C5A0()
{
  int i; // esi

  for ( i = 0; i < dword_B765F8; ++i ) /*0x77c5aa*/
    DeleteAndZero((void **)dword_B76600 + i); /*0x77c5b4*/
  dword_B765F8 = 0; /*0x77c5c9*/
  __3_YAXPAX_Z(dword_B76600); /*0x77c5d4*/
}



// ==== 0x0077C5E0  sub_77C5E0  this=-  sig=ida-proto ====
int sub_77C5E0()
{
  dword_B73BD8 = 0; /*0x77c5e7*/
  dword_B73BDC = 0; /*0x77c5ec*/
  dword_B73BE0 = 0; /*0x77c5f1*/
  return atexit(sub_77C600); /*0x77c5fc*/
}



// ==== 0x0077C600  sub_77C600  this=-  sig=ida-proto ====
void __cdecl sub_77C600()
{
  int i; // esi

  for ( i = 0; i < dword_B73BD8; ++i ) /*0x77c60a*/
    DeleteAndZero((void **)dword_B73BE0 + i); /*0x77c614*/
  dword_B73BD8 = 0; /*0x77c629*/
  __3_YAXPAX_Z(dword_B73BE0); /*0x77c634*/
}



// ==== 0x0077C640  sub_77C640  this=-  sig=ida-proto ====
int sub_77C640()
{
  stru_B736F8 = 0; /*0x77c647*/
  dword_B736FC = 0; /*0x77c64c*/
  dword_B73700 = 0; /*0x77c651*/
  return atexit(sub_77C660); /*0x77c65c*/
}



// ==== 0x0077C660  sub_77C660  this=-  sig=ida-proto ====
void __cdecl sub_77C660()
{
  int i; // esi

  for ( i = 0; i < stru_B736F8; ++i ) /*0x77c66a*/
    DeleteAndZero((void **)dword_B73700 + i); /*0x77c674*/
  stru_B736F8 = 0; /*0x77c689*/
  __3_YAXPAX_Z(dword_B73700); /*0x77c694*/
}



// ==== 0x0077C6A0  sub_77C6A0  this=-  sig=ida-proto ====
int sub_77C6A0()
{
  dword_B76B00 = 0; /*0x77c6a7*/
  dword_B76B04 = 0; /*0x77c6ac*/
  dword_B76B08 = 0; /*0x77c6b1*/
  return atexit(sub_77C6C0); /*0x77c6bc*/
}



// ==== 0x0077C6C0  sub_77C6C0  this=-  sig=ida-proto ====
void __cdecl sub_77C6C0()
{
  int i; // esi

  for ( i = 0; i < dword_B76B00; ++i ) /*0x77c6ca*/
    DeleteAndZero((void **)dword_B76B08 + i); /*0x77c6d4*/
  dword_B76B00 = 0; /*0x77c6e9*/
  __3_YAXPAX_Z(dword_B76B08); /*0x77c6f4*/
}



// ==== 0x0077C700  sub_77C700  this=-  sig=ida-proto ====
int sub_77C700()
{
  stru_B76510 = 0; /*0x77c707*/
  dword_B76514 = 0; /*0x77c70c*/
  dword_B76518 = 0; /*0x77c711*/
  return atexit(sub_77C720); /*0x77c71c*/
}



// ==== 0x0077C720  sub_77C720  this=-  sig=ida-proto ====
void __cdecl sub_77C720()
{
  int i; // esi

  for ( i = 0; i < stru_B76510; ++i ) /*0x77c72a*/
    DeleteAndZero((void **)dword_B76518 + i); /*0x77c734*/
  stru_B76510 = 0; /*0x77c749*/
  __3_YAXPAX_Z(dword_B76518); /*0x77c754*/
}



// ==== 0x0077C760  sub_77C760  this=-  sig=ida-proto ====
int sub_77C760()
{
  dword_B73AE8 = 0; /*0x77c767*/
  dword_B73AEC = 0; /*0x77c76c*/
  dword_B73AF0 = 0; /*0x77c771*/
  return atexit(sub_77C780); /*0x77c77c*/
}



// ==== 0x0077C780  sub_77C780  this=-  sig=ida-proto ====
void __cdecl sub_77C780()
{
  int i; // esi

  for ( i = 0; i < dword_B73AE8; ++i ) /*0x77c78a*/
    DeleteAndZero((void **)dword_B73AF0 + i); /*0x77c794*/
  dword_B73AE8 = 0; /*0x77c7a9*/
  __3_YAXPAX_Z(dword_B73AF0); /*0x77c7b4*/
}



// ==== 0x0077C7C0  sub_77C7C0  this=-  sig=ida-proto ====
int sub_77C7C0()
{
  dword_B77820 = 0; /*0x77c7c7*/
  dword_B77824 = 0; /*0x77c7cc*/
  dword_B77828 = 0; /*0x77c7d1*/
  return atexit(sub_77C7E0); /*0x77c7dc*/
}



// ==== 0x0077C7E0  sub_77C7E0  this=-  sig=ida-proto ====
void __cdecl sub_77C7E0()
{
  int i; // esi

  for ( i = 0; i < dword_B77820; ++i ) /*0x77c7ea*/
    DeleteAndZero((void **)dword_B77828 + i); /*0x77c7f4*/
  dword_B77820 = 0; /*0x77c809*/
  __3_YAXPAX_Z(dword_B77828); /*0x77c814*/
}



// ==== 0x0077C820  sub_77C820  this=-  sig=ida-proto ====
int sub_77C820()
{
  stru_B73708 = 0; /*0x77c827*/
  dword_B7370C = 0; /*0x77c82c*/
  dword_B73710 = 0; /*0x77c831*/
  return atexit(sub_77C840); /*0x77c83c*/
}



// ==== 0x0077C840  sub_77C840  this=-  sig=ida-proto ====
void __cdecl sub_77C840()
{
  int i; // esi

  for ( i = 0; i < stru_B73708; ++i ) /*0x77c84a*/
    DeleteAndZero((void **)dword_B73710 + i); /*0x77c854*/
  stru_B73708 = 0; /*0x77c869*/
  __3_YAXPAX_Z(dword_B73710); /*0x77c874*/
}



// ==== 0x0077C880  sub_77C880  this=-  sig=ida-proto ====
int sub_77C880()
{
  stru_B76188 = 0; /*0x77c887*/
  dword_B7618C = 0; /*0x77c88c*/
  dword_B76190 = 0; /*0x77c891*/
  return atexit(sub_77C8A0); /*0x77c89c*/
}



// ==== 0x0077C8A0  sub_77C8A0  this=-  sig=ida-proto ====
void __cdecl sub_77C8A0()
{
  int i; // esi

  for ( i = 0; i < stru_B76188; ++i ) /*0x77c8aa*/
    DeleteAndZero((void **)dword_B76190 + i); /*0x77c8b4*/
  stru_B76188 = 0; /*0x77c8c9*/
  __3_YAXPAX_Z(dword_B76190); /*0x77c8d4*/
}



// ==== 0x0077C8E0  sub_77C8E0  this=-  sig=ida-proto ====
int sub_77C8E0()
{
  g_WindowManager = 0; /*0x77c8e7*/
  dword_B73AAC = 0; /*0x77c8ec*/
  dword_B73AB0 = 0; /*0x77c8f1*/
  return atexit(sub_77C900); /*0x77c8fc*/
}



// ==== 0x0077C900  sub_77C900  this=-  sig=ida-proto ====
void __cdecl sub_77C900()
{
  int i; // esi

  for ( i = 0; i < g_WindowManager; ++i ) /*0x77c90a*/
    DeleteAndZero((void **)dword_B73AB0 + i); /*0x77c914*/
  g_WindowManager = 0; /*0x77c929*/
  __3_YAXPAX_Z(dword_B73AB0); /*0x77c934*/
}



// ==== 0x0077C940  sub_77C940  this=-  sig=ida-proto ====
int sub_77C940()
{
  dword_B76980 = 0; /*0x77c947*/
  dword_B76984 = 0; /*0x77c94c*/
  dword_B76988 = 0; /*0x77c951*/
  return atexit(sub_77C960); /*0x77c95c*/
}



// ==== 0x0077C960  sub_77C960  this=-  sig=ida-proto ====
void __cdecl sub_77C960()
{
  int i; // esi

  for ( i = 0; i < dword_B76980; ++i ) /*0x77c96a*/
    DeleteAndZero((void **)dword_B76988 + i); /*0x77c974*/
  dword_B76980 = 0; /*0x77c989*/
  __3_YAXPAX_Z(dword_B76988); /*0x77c994*/
}



// ==== 0x0077C9A0  sub_77C9A0  this=-  sig=ida-proto ====
int sub_77C9A0()
{
  g_WOL_BuddyList = 0; /*0x77c9a7*/
  dword_B779B4 = 0; /*0x77c9ac*/
  dword_B779B8 = 0; /*0x77c9b1*/
  return atexit(sub_77C9C0); /*0x77c9bc*/
}



// ==== 0x0077C9C0  sub_77C9C0  this=-  sig=ida-proto ====
void __cdecl sub_77C9C0()
{
  int i; // esi

  for ( i = 0; i < g_WOL_BuddyList; ++i ) /*0x77c9ca*/
    DeleteAndZero((void **)dword_B779B8 + i); /*0x77c9d4*/
  g_WOL_BuddyList = 0; /*0x77c9e9*/
  __3_YAXPAX_Z(dword_B779B8); /*0x77c9f4*/
}



// ==== 0x0077CA00  sub_77CA00  this=-  sig=ida-proto ====
int sub_77CA00()
{
  unknown_libname_73(&unk_B73ACC); /*0x77ca05*/
  return atexit(unknown_libname_40); /*0x77ca15*/
}



// ==== 0x0077CA20  unknown_libname_40  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_40()
{
  DeleteAndZero((void **)&unk_B73ACC); /*0x77ca25*/
}



// ==== 0x0077CA30  sub_77CA30  this=-  sig=ida-proto ====
int sub_77CA30()
{
  unknown_libname_73(&g_WOL_LoginObject); /*0x77ca35*/
  return atexit(unknown_libname_41); /*0x77ca45*/
}



// ==== 0x0077CA50  unknown_libname_41  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_41()
{
  DeleteAndZero((void **)&g_WOL_LoginObject); /*0x77ca55*/
}



// ==== 0x0077CA60  sub_77CA60  this=-  sig=ida-proto ====
int sub_77CA60()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77ca60*/
  dbl_B769B0 = 0.2; /*0x77ca67*/
  dbl_B769B8 = 0.8; /*0x77ca7b*/
  dword_B769C0 = 128; /*0x77ca8f*/
  v1 = 0; /*0x77ca94*/
  do /*0x77ca99*/
  {
    ++v1; /*0x77ca96*/
    v0 >>= 1; /*0x77ca97*/
  }
  while ( v0 ); /*0x77ca99*/
  dword_B769A0 = 0; /*0x77ca9b*/
  dword_B7699C = v1 - 1; /*0x77caa9*/
  dword_B76994 = 0; /*0x77caaf*/
  byte_B769A4 = 0; /*0x77cab5*/
  dword_B76998 = 1 << (v1 - 1); /*0x77cabb*/
  dword_B76990 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77cad3*/
  memset(dword_B76990, 0, 4 * dword_B76998); /*0x77cad9*/
  dword_B769A8 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77cae0*/
  return atexit(sub_77CB00); /*0x77caf2*/
}



// ==== 0x0077CB00  sub_77CB00  this=-  sig=ida-proto ====
void __cdecl sub_77CB00()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76998; /*0x77cb00*/
  for ( i = 0; i < dword_B76998; v0 = dword_B76998 ) /*0x77cb0d*/
  {
    v2 = *((_DWORD *)dword_B76990 + i); /*0x77cb14*/
    while ( v2 ) /*0x77cb19*/
    {
      v3 = (void **)v2; /*0x77cb1b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77cb1d*/
      DeleteAndZero(v3); /*0x77cb26*/
      __3_YAXPAX_Z(v3); /*0x77cb2c*/
    }
    *((_DWORD *)dword_B76990 + i++) = 0; /*0x77cb3f*/
  }
  v4 = dword_B769C0; /*0x77cb50*/
  dword_B76994 = 0; /*0x77cb56*/
  if ( v0 > dword_B769C0 ) /*0x77cb62*/
  {
    do /*0x77cc15*/
    {
      if ( byte_B769A4 || v0 <= v4 ) /*0x77cb78*/
        break; /*0x77cb78*/
      v5 = (int *)dword_B76990; /*0x77cb84*/
      v6 = v0; /*0x77cb8a*/
      dword_B76998 = v0 >> 1; /*0x77cb8f*/
      --dword_B7699C; /*0x77cb9b*/
      dword_B76990 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77cbb4*/
      memset(dword_B76990, 0, 4 * dword_B76998); /*0x77cbbc*/
      if ( v6 > 0 ) /*0x77cbbe*/
      {
        v7 = v5; /*0x77cbc0*/
        v8 = v6; /*0x77cbc2*/
        do /*0x77cbfd*/
        {
          v9 = *v7; /*0x77cbc4*/
          if ( *v7 ) /*0x77cbc4*/
          {
            do /*0x77cbf7*/
            {
              v10 = dword_B769A8(v9) & ((1 << dword_B7699C) - 1); /*0x77cbe0*/
              v11 = *((_DWORD *)dword_B76990 + v10); /*0x77cbe7*/
              *((_DWORD *)dword_B76990 + v10) = v9; /*0x77cbea*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77cbed*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77cbf0*/
              v9 = v12; /*0x77cbf5*/
            }
            while ( v12 ); /*0x77cbf7*/
          }
          ++v7; /*0x77cbf9*/
          --v8; /*0x77cbfc*/
        }
        while ( v8 ); /*0x77cbfd*/
      }
      __3_YAXPAX_Z(v5); /*0x77cc00*/
      v4 = dword_B769C0; /*0x77cc05*/
      v0 = dword_B76998; /*0x77cc0b*/
    }
    while ( dword_B76998 > (unsigned int)dword_B769C0 ); /*0x77cc15*/
  }
  __3_YAXPAX_Z(dword_B76990); /*0x77cc21*/
}



// ==== 0x0077CC30  sub_77CC30  this=-  sig=ida-proto ====
int sub_77CC30()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77cc30*/
  dbl_B76628 = 0.2; /*0x77cc37*/
  dbl_B76630 = 0.8; /*0x77cc4b*/
  dword_B76638 = 128; /*0x77cc5f*/
  v1 = 0; /*0x77cc64*/
  do /*0x77cc69*/
  {
    ++v1; /*0x77cc66*/
    v0 >>= 1; /*0x77cc67*/
  }
  while ( v0 ); /*0x77cc69*/
  dword_B76618 = 0; /*0x77cc6b*/
  dword_B76614 = v1 - 1; /*0x77cc79*/
  dword_B7660C = 0; /*0x77cc7f*/
  byte_B7661C = 0; /*0x77cc85*/
  dword_B76610 = 1 << (v1 - 1); /*0x77cc8b*/
  dword_B76608 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77cca3*/
  memset(dword_B76608, 0, 4 * dword_B76610); /*0x77cca9*/
  dword_B76620 = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77ccb0*/
  return atexit(sub_77CCD0); /*0x77ccc2*/
}



// ==== 0x0077CCD0  sub_77CCD0  this=-  sig=ida-proto ====
void __cdecl sub_77CCD0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76610; /*0x77ccd0*/
  for ( i = 0; i < dword_B76610; v0 = dword_B76610 ) /*0x77ccdd*/
  {
    v2 = *((_DWORD *)dword_B76608 + i); /*0x77cce4*/
    while ( v2 ) /*0x77cce9*/
    {
      v3 = (void **)v2; /*0x77cceb*/
      v2 = *(_DWORD *)(v2 + 272); /*0x77cced*/
      DeleteAndZero(v3); /*0x77ccf9*/
      __3_YAXPAX_Z(v3); /*0x77ccff*/
    }
    *((_DWORD *)dword_B76608 + i++) = 0; /*0x77cd12*/
  }
  v4 = dword_B76638; /*0x77cd23*/
  dword_B7660C = 0; /*0x77cd29*/
  if ( v0 > dword_B76638 ) /*0x77cd35*/
  {
    do /*0x77cdee*/
    {
      if ( byte_B7661C || v0 <= v4 ) /*0x77cd4b*/
        break; /*0x77cd4b*/
      v5 = (int *)dword_B76608; /*0x77cd57*/
      v6 = v0; /*0x77cd5d*/
      dword_B76610 = v0 >> 1; /*0x77cd62*/
      --dword_B76614; /*0x77cd6e*/
      dword_B76608 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77cd87*/
      memset(dword_B76608, 0, 4 * dword_B76610); /*0x77cd8f*/
      if ( v6 > 0 ) /*0x77cd91*/
      {
        v7 = v5; /*0x77cd93*/
        v8 = v6; /*0x77cd95*/
        do /*0x77cdd6*/
        {
          v9 = *v7; /*0x77cd97*/
          if ( *v7 ) /*0x77cd97*/
          {
            do /*0x77cdd0*/
            {
              v10 = dword_B76620(v9) & ((1 << dword_B76614) - 1); /*0x77cdb3*/
              v11 = *((_DWORD *)dword_B76608 + v10); /*0x77cdba*/
              *((_DWORD *)dword_B76608 + v10) = v9; /*0x77cdbd*/
              v12 = *(_DWORD *)(v9 + 272); /*0x77cdc0*/
              *(_DWORD *)(v9 + 272) = v11; /*0x77cdc6*/
              v9 = v12; /*0x77cdce*/
            }
            while ( v12 ); /*0x77cdd0*/
          }
          ++v7; /*0x77cdd2*/
          --v8; /*0x77cdd5*/
        }
        while ( v8 ); /*0x77cdd6*/
      }
      __3_YAXPAX_Z(v5); /*0x77cdd9*/
      v4 = dword_B76638; /*0x77cdde*/
      v0 = dword_B76610; /*0x77cde4*/
    }
    while ( dword_B76610 > (unsigned int)dword_B76638 ); /*0x77cdee*/
  }
  __3_YAXPAX_Z(dword_B76608); /*0x77cdfa*/
}



// ==== 0x0077CE10  sub_77CE10  this=-  sig=ida-proto ====
int sub_77CE10()
{
  int result; // eax

  result = dword_84A1C8 - dword_84A1C4 - 4; /*0x77ce1d*/
  dword_B765F0 = result; /*0x77ce20*/
  return result; /*0x77ce25*/
}



// ==== 0x0077CE30  sub_77CE30  this=-  sig=ida-proto ====
int sub_77CE30()
{
  int result; // eax

  result = dword_84A1D8 - dword_84A1D4 - 4; /*0x77ce3d*/
  dword_B73E3C = result; /*0x77ce40*/
  return result; /*0x77ce45*/
}



// ==== 0x0077CE50  sub_77CE50  this=-  sig=ida-proto ====
int sub_77CE50()
{
  dword_B76AD0 = 0; /*0x77ce57*/
  dword_B76AD4 = 0; /*0x77ce5c*/
  dword_B76AD8 = 0; /*0x77ce61*/
  return atexit(sub_77CE70); /*0x77ce6c*/
}



// ==== 0x0077CE70  sub_77CE70  this=-  sig=ida-proto ====
void __cdecl sub_77CE70()
{
  int i; // esi

  for ( i = 0; i < dword_B76AD0; ++i ) /*0x77ce7a*/
    DeleteAndZero((void **)dword_B76AD8 + i); /*0x77ce84*/
  dword_B76AD0 = 0; /*0x77ce99*/
  __3_YAXPAX_Z(dword_B76AD8); /*0x77cea4*/
}



// ==== 0x0077CEB0  sub_77CEB0  this=-  sig=ida-proto ====
int sub_77CEB0()
{
  dword_B76970 = 0; /*0x77ceb7*/
  dword_B76974 = 0; /*0x77cebc*/
  dword_B76978 = 0; /*0x77cec1*/
  return atexit(sub_77CED0); /*0x77cecc*/
}



// ==== 0x0077CED0  sub_77CED0  this=-  sig=ida-proto ====
void __cdecl sub_77CED0()
{
  int i; // esi

  for ( i = 0; i < dword_B76970; ++i ) /*0x77ceda*/
    DeleteAndZero((void **)dword_B76978 + i); /*0x77cee4*/
  dword_B76970 = 0; /*0x77cef9*/
  __3_YAXPAX_Z(dword_B76978); /*0x77cf04*/
}



// ==== 0x0077CF10  sub_77CF10  this=-  sig=ida-proto ====
int sub_77CF10()
{
  unknown_libname_73(&stru_B76AC4); /*0x77cf15*/
  return atexit(unknown_libname_42); /*0x77cf25*/
}



// ==== 0x0077CF30  unknown_libname_42  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_42()
{
  DeleteAndZero((void **)&stru_B76AC4); /*0x77cf35*/
}



// ==== 0x0077CF40  UI_Setup_77CF40  this=-  sig=ida-proto ====
BOOL sub_77CF40()
{
  return dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2; /*0x77cf56*/
}



// ==== 0x0077CF70  sub_77CF70  this=-  sig=ida-proto ====
int sub_77CF70()
{
  unknown_libname_73(&unk_B76E34); /*0x77cf75*/
  return atexit(unknown_libname_43); /*0x77cf85*/
}



// ==== 0x0077CF90  unknown_libname_43  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_43()
{
  DeleteAndZero((void **)&unk_B76E34); /*0x77cf95*/
}



// ==== 0x0077CFA0  sub_77CFA0  this=-  sig=ida-proto ====
int sub_77CFA0()
{
  unknown_libname_73(&unk_B73B30); /*0x77cfa5*/
  return atexit(unknown_libname_44); /*0x77cfb5*/
}



// ==== 0x0077CFC0  unknown_libname_44  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_44()
{
  DeleteAndZero((void **)&unk_B73B30); /*0x77cfc5*/
}



// ==== 0x0077CFD0  sub_77CFD0  this=-  sig=ida-proto ====
int sub_77CFD0()
{
  unknown_libname_73(&stru_B7622C); /*0x77cfd5*/
  return atexit(unknown_libname_45); /*0x77cfe5*/
}



// ==== 0x0077CFF0  unknown_libname_45  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_45()
{
  DeleteAndZero((void **)&stru_B7622C); /*0x77cff5*/
}



// ==== 0x0077D000  sub_77D000  this=-  sig=ida-proto ====
int sub_77D000()
{
  unknown_libname_73(&unk_B76908); /*0x77d005*/
  return atexit(unknown_libname_46); /*0x77d015*/
}



// ==== 0x0077D020  unknown_libname_46  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_46()
{
  DeleteAndZero((void **)&unk_B76908); /*0x77d025*/
}



// ==== 0x0077D030  sub_77D030  this=-  sig=ida-proto ====
int sub_77D030()
{
  unknown_libname_73(&unk_B77794); /*0x77d035*/
  return atexit(unknown_libname_47); /*0x77d045*/
}



// ==== 0x0077D050  unknown_libname_47  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_47()
{
  DeleteAndZero((void **)&unk_B77794); /*0x77d055*/
}



// ==== 0x0077D060  sub_77D060  this=-  sig=ida-proto ====
int sub_77D060()
{
  unknown_libname_73(&unk_B778F4); /*0x77d065*/
  return atexit(unknown_libname_48); /*0x77d075*/
}



// ==== 0x0077D080  unknown_libname_48  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_48()
{
  DeleteAndZero((void **)&unk_B778F4); /*0x77d085*/
}



// ==== 0x0077D090  sub_77D090  this=-  sig=ida-proto ====
int sub_77D090()
{
  unknown_libname_73(&unk_B778FC); /*0x77d095*/
  return atexit(unknown_libname_49); /*0x77d0a5*/
}



// ==== 0x0077D0B0  unknown_libname_49  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_49()
{
  DeleteAndZero((void **)&unk_B778FC); /*0x77d0b5*/
}



// ==== 0x0077D0C0  sub_77D0C0  this=-  sig=ida-proto ====
int sub_77D0C0()
{
  unknown_libname_73(&stru_B765EC); /*0x77d0c5*/
  return atexit(unknown_libname_50); /*0x77d0d5*/
}



// ==== 0x0077D0E0  unknown_libname_50  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_50()
{
  DeleteAndZero((void **)&stru_B765EC); /*0x77d0e5*/
}



// ==== 0x0077D0F0  sub_77D0F0  this=-  sig=ida-proto ====
int sub_77D0F0()
{
  unknown_libname_73(&stru_B76900); /*0x77d0f5*/
  return atexit(unknown_libname_51); /*0x77d105*/
}



// ==== 0x0077D110  unknown_libname_51  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_51()
{
  DeleteAndZero(&stru_B76900); /*0x77d115*/
}



// ==== 0x0077D120  sub_77D120  this=-  sig=ida-proto ====
int sub_77D120()
{
  ComPtr::Constructor(&stru_B75E48); /*0x77d125*/
  stru_B75E48 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x77d12f*/
  return atexit(sub_77D140); /*0x77d13f*/
}



// ==== 0x0077D140  sub_77D140  this=-  sig=ida-proto ====
void __cdecl sub_77D140()
{
  stru_B75E48 = (int)&rc_ptr<PlayerProfile>::`vftable'; /*0x77d140*/
  ComPtr::Release(&stru_B75E48); /*0x77d14f*/
}



// ==== 0x0077D160  sub_77D160  this=-  sig=ida-proto ====
int sub_77D160()
{
  dword_B76478 = Timer::GetTicks(); /*0x77d16f*/
  dword_B76480 = 0; /*0x77d174*/
  return atexit(nullsub_263); /*0x77d184*/
}



// ==== 0x0077D190  nullsub_263  this=-  sig=ida-proto ====
void __cdecl nullsub_263()
{
  ; /*0x77d190*/
}



// ==== 0x0077D1A0  sub_77D1A0  this=-  sig=ida-proto ====
int sub_77D1A0()
{
  unknown_libname_74(&unk_B76230); /*0x77d1a5*/
  return atexit(unknown_libname_53); /*0x77d1b5*/
}



// ==== 0x0077D1C0  unknown_libname_53  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_53()
{
  DeleteAndZero::Alt(&unk_B76230); /*0x77d1c5*/
}



// ==== 0x0077D1F0  SimpleWonlineDialogControl::ConnectAndLoginWOL_Connect  this=SimpleWonlineDialogControl  sig=csp ====
void __thiscall ConnectAndLoginWOL_Connect(SimpleWonlineDialogControl *this)
{
  *(_DWORD *)this->__pad_0 = &off_7F7624; /*0x77d1f0*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x77d1f6*/
}



// ==== 0x0077D200  j_Game_ProcessIdle  this=SimpleWonlineDialogControl  sig=csp ====
// attributes: thunk
char j_Game_ProcessIdle()
{
  return Game::ProcessIdle();
}



// ==== 0x0077D240  ObjectClass::method_77D240  this=ObjectClass  sig=csp ====
int __thiscall sub_77D240(ObjectClass *this)
{
  int owningHouseIndex; // eax
  char *v2; // ebx
  int v3; // esi
  int i; // edi
  char *v6; // eax

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77d240*/
  v2 = 0; /*0x77d248*/
  v3 = 0; /*0x77d24a*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x77d251*/
    return -1; /*0x77d28a*/
  for ( i = 0; ; i += 108 ) /*0x77d253*/
  {
    if ( i >= 0 && v3 < owningHouseIndex ) /*0x77d25b*/
      v2 = (char *)g_WOL_UserList.nextObject + i; /*0x77d262*/
    v6 = String::GetOrEmpty_Alt((String *)this); /*0x77d26b*/
    if ( !_strcmpi(v6, v2 + 36) ) /*0x77d271*/
      break; /*0x77d271*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77d27d*/
    if ( ++v3 >= g_WOL_UserList.owningHouseIndex ) /*0x77d288*/
      return -1; /*0x77d288*/
  }
  return v3; /*0x77d28a*/
}



// ==== 0x0077D350  ObjectClass::method_77D350  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_77D350(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  const wchar_t *v5; // [esp+0h] [ebp-204h]
  wchar_t Buffer[256]; // [esp+4h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtBuddyFilter, 0, g_Str_File_wonline_cpp, 873); /*0x77d36a*/
  swprintf(Buffer, (const size_t)StringCSF, v5); /*0x77d375*/
  v3 = wcslen(Buffer); /*0x77d37f*/
  return _wcsnicmp((const wchar_t *)this, Buffer, v3) == 0; /*0x77d397*/
}



// ==== 0x0077D3A0  ObjectClass::method_77D3A0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_77D3A0(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  const wchar_t *v5; // [esp+0h] [ebp-204h]
  wchar_t Buffer[256]; // [esp+4h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtClanFilter, 0, g_Str_File_wonline_cpp, 879); /*0x77d3ba*/
  swprintf(Buffer, (const size_t)StringCSF, v5); /*0x77d3c5*/
  v3 = wcslen(Buffer); /*0x77d3cf*/
  return _wcsnicmp((const wchar_t *)this, Buffer, v3) == 0; /*0x77d3e7*/
}



// ==== 0x0077D3F0  ObjectClass::method_77D3F0  this=ObjectClass  sig=csp ====
char __thiscall sub_77D3F0(ObjectClass *this)
{
  int v2; // ebx
  int v3; // edi
  int *p_occupant; // ebp
  void *v6; // [esp+10h] [ebp-4h] BYREF

  if ( !this ) /*0x77d3f9*/
    return 0; /*0x77d3f9*/
  v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x77d3fb*/
  unknown_libname_73(&v6); /*0x77d405*/
  v3 = 0; /*0x77d40a*/
  if ( v2 <= 0 ) /*0x77d40e*/
  {
LABEL_9:
    DeleteAndZero((ObjectClass *)&v6); /*0x77d46e*/
    return 0; /*0x77d47e*/
  }
  p_occupant = &this->occupant; /*0x77d410*/
  while ( 1 ) /*0x77d413*/
  {
    if ( v3 >= 0 && v3 < *(int *)g_WindowManager.__pad_0 ) /*0x77d41d*/
      String::Reassign((String *)&v6, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v3)); /*0x77d42c*/
    if ( !strcmp(String::GetOrEmpty((String *)&v6), (const char *)p_occupant) ) /*0x77d442*/
      break; /*0x77d442*/
    if ( ++v3 >= v2 ) /*0x77d46c*/
      goto LABEL_9; /*0x77d46c*/
  }
  DeleteAndZero((ObjectClass *)&v6); /*0x77d483*/
  return 1; /*0x77d477*/
}



// ==== 0x0077D4C0  ObjectClass::IsBuddyOrIgnoreWOL  this=ObjectClass  sig=csp ====
bool __thiscall WOL_IsBuddyOrIgnore(const char *this)
{
  signed int v2; // eax
  char *v3; // ebx
  int v4; // esi
  int v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // ebx
  int v9; // edi
  const char *v10; // ebp
  int v12; // ebx
  int v13; // edi
  const char *v14; // ebp
  void *v15; // [esp+10h] [ebp-4h] BYREF

  if ( !byte_B76AF0 && !byte_B73AD0 || !Dialog::FindByHandle((void *)0x113) ) /*0x77d4e2*/
    return 1; /*0x77d4e2*/
  v2 = dword_B77900; /*0x77d4ef*/
  v3 = 0; /*0x77d4f4*/
  v4 = 0; /*0x77d4f6*/
  if ( (int)dword_B77900 <= 0 ) /*0x77d4fa*/
  {
LABEL_11:
    v4 = -1; /*0x77d53a*/
  }
  else
  {
    v5 = 0; /*0x77d4fc*/
    while ( 1 ) /*0x77d4fe*/
    {
      if ( v5 >= 0 && v4 < v2 ) /*0x77d504*/
        v3 = (char *)dword_B77908 + v5; /*0x77d50b*/
      v6 = String::GetOrEmpty_Alt((char **)&dword_B73E40); /*0x77d517*/
      if ( !_strcmpi(v6, v3 + 36) ) /*0x77d51d*/
        break; /*0x77d51d*/
      v2 = dword_B77900; /*0x77d52d*/
      ++v4; /*0x77d532*/
      v5 += 108; /*0x77d533*/
      if ( v4 >= (int)dword_B77900 ) /*0x77d538*/
        goto LABEL_11; /*0x77d538*/
    }
    v2 = dword_B77900; /*0x77d604*/
  }
  v7 = 0; /*0x77d53d*/
  if ( v4 < 0 ) /*0x77d541*/
    return 1; /*0x77d541*/
  if ( v4 < v2 ) /*0x77d549*/
    v7 = (char *)dword_B77908 + 108 * v4; /*0x77d556*/
  if ( byte_B76AF0 ) /*0x77d565*/
  {
    if ( byte_B73AD0 ) /*0x77d56d*/
    {
      if ( !v7 ) /*0x77d575*/
        goto LABEL_20; /*0x77d575*/
      if ( !this ) /*0x77d579*/
        return 0; /*0x77d579*/
      if ( _strcmpi(v7 + 46, this + 46) ) /*0x77d587*/
      {
LABEL_20:
        if ( this ) /*0x77d599*/
        {
          v8 = g_WindowManager; /*0x77d59f*/
          unknown_libname_73(&v15); /*0x77d5a9*/
          v9 = 0; /*0x77d5ae*/
          if ( v8 > 0 ) /*0x77d5b2*/
          {
            v10 = this + 36; /*0x77d5b4*/
            while ( 1 ) /*0x77d5b7*/
            {
              if ( v9 >= 0 && v9 < g_WindowManager ) /*0x77d5c1*/
                String::Reassign((char **)&v15, (const char **)dword_B73AB0 + v9); /*0x77d5d0*/
              if ( !strcmp(String::GetOrEmpty((char **)&v15), v10) ) /*0x77d5e6*/
                break; /*0x77d5e6*/
              if ( ++v9 >= v8 ) /*0x77d61a*/
                goto LABEL_30; /*0x77d61a*/
            }
            DeleteAndZero(&v15); /*0x77d631*/
            return 1; /*0x77d631*/
          }
LABEL_30:
          DeleteAndZero(&v15); /*0x77d61c*/
        }
        return 0; /*0x77d62c*/
      }
      return 1; /*0x77d63d*/
    }
    if ( this ) /*0x77d640*/
    {
      v12 = g_WindowManager; /*0x77d642*/
      unknown_libname_73(&v15); /*0x77d64c*/
      v13 = 0; /*0x77d651*/
      if ( v12 > 0 ) /*0x77d655*/
      {
        v14 = this + 36; /*0x77d657*/
        while ( 1 ) /*0x77d65a*/
        {
          if ( v13 >= 0 && v13 < g_WindowManager ) /*0x77d664*/
            String::Reassign((char **)&v15, (const char **)dword_B73AB0 + v13); /*0x77d673*/
          if ( !strcmp(String::GetOrEmpty((char **)&v15), v14) ) /*0x77d689*/
            break; /*0x77d689*/
          if ( ++v13 >= v12 ) /*0x77d6b3*/
            goto LABEL_42; /*0x77d6b3*/
        }
        DeleteAndZero(&v15); /*0x77d6ca*/
        return 1; /*0x77d6d6*/
      }
LABEL_42:
      DeleteAndZero(&v15); /*0x77d6b5*/
    }
    return 0; /*0x77d6c5*/
  }
  return byte_B73AD0 && v7 && this && !_strcmpi(v7 + 46, this + 46); /*0x77d625*/
}



// ==== 0x0077D710  GameLoop::Thunk  this=GameLoop  sig=ida-proto ====
// attributes: thunk
char GameLoop::Thunk()
{
  return Game::ProcessIdle();
}



// ==== 0x0077D720  sub_77D720  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_77D720(_DWORD *a1, int a2)
{
  u_long v3; // ecx
  u_long v4; // eax
  int v5; // eax
  int v6; // edx
  int v8; // [esp+4h] [ebp-18h] BYREF
  _BYTE v9[3]; // [esp+8h] [ebp-14h] BYREF
  __int16 v10; // [esp+Bh] [ebp-11h]
  char v11; // [esp+Dh] [ebp-Fh]
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a2 + 24); /*0x77d726*/
  v8 = 0; /*0x77d730*/
  v11 = 0; /*0x77d738*/
  v4 = ntohl(v3); /*0x77d73d*/
  v9[2] = BYTE1(v4); /*0x77d752*/
  v10 = (unsigned __int8)v4; /*0x77d752*/
  v9[0] = HIBYTE(v4); /*0x77d756*/
  v9[1] = BYTE2(v4); /*0x77d765*/
  NetworkAddress::Assign(v12, &v8, (int)v9, 0); /*0x77d76f*/
  v5 = v12[1]; /*0x77d77a*/
  *a1 = v12[0]; /*0x77d77e*/
  v6 = v12[2]; /*0x77d780*/
  a1[1] = v5; /*0x77d784*/
  a1[2] = v6; /*0x77d78a*/
  return a1; /*0x77d789*/
}



// ==== 0x0077D820  Dialog::UpdateGameUI  this=Dialog  sig=ida-proto ====
char Dialog_UpdateGameUI()
{
  HWND GameUI; // eax

  Dialog::PumpMessages(); /*0x77d820*/
  GameUI = (HWND)Dialog::FindGameUI(); /*0x77d825*/
  if ( GameUI ) /*0x77d82c*/
    InvalidateRect(GameUI, 0, 1); /*0x77d833*/
  return 0; /*0x77d83b*/
}



// ==== 0x0077D840  ShowWOLLobbyDialog  this=-  sig=ida-proto ====
int sub_77D840()
{
  HWND Dialog; // esi
  int GameUI; // eax
  char (*v2)(); // edx

  Dialog = (HWND)CreateDialog(0xCFu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL, 0); /*0x77d858*/
  byte_A8ED9C = 1; /*0x77d85a*/
  Timer::PumpMessages((HWND *)dword_87F770); /*0x77d861*/
  ShowWindow(Dialog, 1); /*0x77d869*/
  GameUI = Dialog::FindGameUI(); /*0x77d86f*/
  v2 = Dialog::UpdateGameUI; /*0x77d87c*/
  if ( !GameUI ) /*0x77d881*/
    v2 = Dialog::PumpMessages; /*0x77d883*/
  MessageDialogLoopAlt(Dialog, (unsigned __int8 (*)(void))v2, 0, 1, 1); /*0x77d88a*/
  Timer::PumpMessages((HWND *)dword_87F770); /*0x77d895*/
  byte_A8ED9C = *((_BYTE *)dword_A8B230 + 13730); /*0x77d8a7*/
  return MapClass::MarkForRedraw(&dword_87F7E8, 2); /*0x77d8b7*/
}



// ==== 0x0077D8C0  unknown_libname_54  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_54()
{
  return WebBrowser::ShowDialog(g_INI_Key_Battleclans);
}



// ==== 0x0077D8D0  unknown_libname_55  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_55()
{
  return WebBrowser::ShowDialog(g_INI_Key_Battleclans);
}



// ==== 0x0077D8E0  unknown_libname_56  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_56()
{
  return WebBrowser::ShowDialog(g_INI_Key_Ladder);
}



// ==== 0x0077D8F0  unknown_libname_57  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_57()
{
  return WebBrowser::ShowDialog(aNews);
}



// ==== 0x0077D900  unknown_libname_58  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
HWND unknown_libname_58()
{
  return WebBrowser::ShowDialog(g_INI_Key_Manage);
}



// ==== 0x0077D940  Network::IsMultiplayerActive  this=Network  sig=ida-proto ====
bool Network_IsMultiplayerActive()
{
  if ( dword_A8B238 != 4 ) /*0x77d948*/
    return 0; /*0x77d94a*/
  return dword_B76B24 || (dword_B76B30 & 0x100) != 0; /*0x77d94d*/
}



// ==== 0x0077D970  Network::IsLobbyFeature  this=Network  sig=ida-proto ====
char Network_IsLobbyFeature()
{
  if ( dword_A8B238 == 4 ) /*0x77d977*/
    return BYTE1(dword_B76B30) & 1; /*0x77d984*/
  else
    return 0; /*0x77d979*/
}



// ==== 0x0077D9F0  sub_77D9F0  this=-  sig=ida-proto ====
int sub_77D9F0()
{
  unknown_libname_73(&dword_B73E40); /*0x77d9f5*/
  return atexit(unknown_libname_59); /*0x77da05*/
}



// ==== 0x0077DA10  unknown_libname_59  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_59()
{
  DeleteAndZero((void **)&dword_B73E40); /*0x77da15*/
}



// ==== 0x0077DA20  sub_77DA20  this=-  sig=ida-proto ====
int sub_77DA20()
{
  unknown_libname_73(&g_WebBrowserConfig); /*0x77da25*/
  return atexit(unknown_libname_60); /*0x77da35*/
}



// ==== 0x0077DA40  unknown_libname_60  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_60()
{
  DeleteAndZero((void **)&g_WebBrowserConfig); /*0x77da45*/
}



// ==== 0x0077DA50  SidebarClass::FindProductionData  this=SidebarClass  sig=csp ====
void *__thiscall SidebarClass::FindProductionData(SidebarClass *this)
{
  char *v1; // eax
  void *v2; // ebx
  int v4; // esi
  const void *v5; // esi
  int v6; // esi
  char *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = (char *)this; /*0x77da50*/
  v1 = ToWideStringChar((char *)this); /*0x77da52*/
  String::Assign((String *)&v7, v1); /*0x77da5c*/
  String::ToLower((String *)&v7); /*0x77da65*/
  v2 = (void *)__2_YAPAXI_Z(0x6Cu); /*0x77da71*/
  if ( !v2 ) /*0x77da78*/
  {
    DeleteAndZero((ObjectClass *)&v7); /*0x77da7e*/
    return 0; /*0x77da87*/
  }
  memset(v2, 0, 0x6Cu); /*0x77da93*/
  if ( *(_DWORD *)g_WOL_BuddyList.__pad_14 == 2 ) /*0x77da9c*/
  {
    if ( !g_WOL_ListParser.HashMap_field_0x04 ) /*0x77db10*/
      goto LABEL_18; /*0x77db10*/
    v6 = *(_DWORD *)(*(_DWORD *)g_WOL_ListParser.__pad_0 /*0x77db31*/
                   + 4 * (dword_B768D8(&v7) & ((1 << SLOBYTE(g_WOL_ListParser.HashMap_field_0x0C)) - 1)));
    if ( !v6 ) /*0x77db36*/
      goto LABEL_18; /*0x77db36*/
    while ( !(unsigned __int8)String::Compare((String *)v6, (const char **)&v7) ) /*0x77db46*/
    {
      v6 = *(_DWORD *)(v6 + 112); /*0x77db48*/
      if ( !v6 ) /*0x77db4d*/
        goto LABEL_18; /*0x77db4d*/
    }
    v5 = (const void *)(v6 + 4); /*0x77db63*/
    if ( !v5 ) /*0x77db68*/
      goto LABEL_18; /*0x77db68*/
  }
  else
  {
    if ( !stru_B77D80.HashTable_field_0x04 ) /*0x77daa5*/
      goto LABEL_18; /*0x77daa5*/
    v4 = *(_DWORD *)(*(_DWORD *)stru_B77D80.__pad_0 /*0x77daca*/
                   + 4
                   * (((int (__thiscall *)(char **))stru_B77D80.HashTable_field_0x18)(&v7)
                    & ((1 << SLOBYTE(stru_B77D80.HashTable_field_0x0C)) - 1)));
    if ( !v4 ) /*0x77dacf*/
      goto LABEL_18; /*0x77dacf*/
    while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)&v7) ) /*0x77dae3*/
    {
      v4 = *(_DWORD *)(v4 + 112); /*0x77dae5*/
      if ( !v4 ) /*0x77daea*/
        goto LABEL_18; /*0x77daea*/
    }
    v5 = (const void *)(v4 + 4); /*0x77db00*/
    if ( !v5 ) /*0x77db05*/
      goto LABEL_18; /*0x77db05*/
  }
  qmemcpy(v2, v5, 0x6Cu); /*0x77db71*/
LABEL_18:
  DeleteAndZero((ObjectClass *)&v7); /*0x77db73*/
  return v2; /*0x77da87*/
}



// ==== 0x0077DB90  Lobby::BuildPlayerList  this=Lobby  sig=csp ====
int Lobby::BuildPlayerList(Lobby *this)
{
  wchar_t **v1; // esi
  wchar_t *v2; // edi
  char **v3; // eax
  const char **PlayerTypeString; // eax
  char *v5; // eax
  ObjectClass v7; // [esp+8h] [ebp-110h] BYREF

  strcpy((char *)&v7.?, asc_84A480); /*0x77dbb5*/
  v1 = (wchar_t **)dword_A8DA90; /*0x77dbbe*/
  do /*0x77dc6e*/
  {
    v2 = *v1; /*0x77dbc3*/
    unknown_libname_73(&v7); /*0x77dbc9*/
    if ( (unsigned __int8)IsKnownPointer((ObjectClass *)v2) ) /*0x77dbd0*/
    {
      WideString::Assign((wchar_t **)&v7.?, v2); /*0x77dbde*/
      v3 = ToWideStringCharAlt((char **)&v7.?, (const wchar_t **)&v7.?); /*0x77dbeb*/
      String::Reassign((String *)&v7, (const char **)v3); /*0x77dbf5*/
      DeleteAndZero((ObjectClass *)&v7.?); /*0x77dbfe*/
      DeleteAndZero::Alt((DeleteAndZero *)&v7.?); /*0x77dc07*/
    }
    else
    {
      PlayerTypeString = (const char **)GetPlayerTypeString((String *)&v7.?, v2); /*0x77dc14*/
      String::Reassign((String *)&v7, PlayerTypeString); /*0x77dc1e*/
      DeleteAndZero((ObjectClass *)&v7.?); /*0x77dc27*/
    }
    v5 = String::GetOrEmpty((String *)&v7); /*0x77dc35*/
    strncat((char *)&v7.?, v5, 0x100u); /*0x77dc40*/
    strncat((char *)&v7.?, Str, 0x100u); /*0x77dc54*/
    DeleteAndZero(&v7); /*0x77dc60*/
    ++v1; /*0x77dc65*/
  }
  while ( (int)v1 < (int)&dword_A8DAB0 ); /*0x77dc6e*/
  return (*(int (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 60))(ppv, &v7.?); /*0x77dc84*/
}



// ==== 0x0077DC90  OpenURLWOL  this=char*  sig=csp ====
int __fastcall OpenURLWOL(const char *a1, int a2)
{
  FILE *v4; // esi
  HINSTANCE ExecutableA; // esi
  wchar_t *v6; // eax
  int result; // eax
  HANDLE hProcess; // ebx
  int v9; // esi
  int v10; // esi
  wchar_t *StringCSF; // eax
  DWORD ExitCode; // [esp+10h] [ebp-310h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+14h] [ebp-30Ch] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+24h] [ebp-2FCh] BYREF
  CHAR File[160]; // [esp+68h] [ebp-2B8h] BYREF
  CHAR Result[264]; // [esp+108h] [ebp-218h] BYREF
  CHAR CommandLine[272]; // [esp+210h] [ebp-110h] BYREF

  tmpnam(File); /*0x77dca3*/
  strcat(File, aHtml); /*0x77dcd2*/
  v4 = fopen(File, aW); /*0x77dce5*/
  fprintf(v4, "<title>Hi there.</title>"); /*0x77dced*/
  fclose(v4); /*0x77dcf3*/
  ExecutableA = FindExecutableA(File, 0, Result); /*0x77dd10*/
  _unlink(File); /*0x77dd17*/
  if ( (int)ExecutableA <= 32 ) /*0x77dd22*/
  {
    StringCSF = GetStringCSF(aTxtNobrowser, 0, g_Str_File_wonline_cpp, 1466); /*0x77deb0*/
    return ShowDialogConfirm(StringCSF, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x77deb9*/
  }
  else if ( a2 /*0x77dd57*/
         || (v6 = GetStringCSF(aTxtLaunchbrows, 0, g_Str_File_wonline_cpp, 1398),
             result = ShowDialogConfirm(v6, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 0),
             result == 6) )
  {
    sprintf(CommandLine, "[open] %s", a1); /*0x77dd6b*/
    memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x77dd7e*/
    StartupInfo.cb = 68; /*0x77dda6*/
    result = CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x77ddae*/
    if ( result ) /*0x77ddb6*/
    {
      result = (int)ProcessInformation.hProcess; /*0x77ddbc*/
      hProcess = ProcessInformation.hProcess; /*0x77ddc2*/
      if ( ProcessInformation.hProcess ) /*0x77ddc4*/
      {
        v9 = 0; /*0x77ddca*/
        Game::ProcessIdle(); /*0x77ddcc*/
        WaitForInputIdle(hProcess, 0x1388u); /*0x77ddd7*/
        do /*0x77de3f*/
        {
          Game::ProcessIdle(); /*0x77dde9*/
          Sleep(0x1F4u); /*0x77ddf3*/
          GetExitCodeProcess(hProcess, &ExitCode); /*0x77ddfb*/
          if ( ExitCode != 259 ) /*0x77de05*/
            v9 = 1; /*0x77de07*/
          if ( byte_A8ED80 || GetTopWindow(0) == g_hWnd || GetForegroundWindow() == g_hWnd ) /*0x77de31*/
            v9 = 1; /*0x77de33*/
          Game::ProcessIdle(); /*0x77de38*/
        }
        while ( !v9 ); /*0x77de3f*/
        Game::ProcessIdle(); /*0x77de41*/
        if ( GetTopWindow(0) != g_hWnd ) /*0x77de54*/
        {
          Game::ProcessIdle(); /*0x77de56*/
          SetForegroundWindow(g_hWnd); /*0x77de62*/
          ShowWindow(g_hWnd, 9); /*0x77de71*/
          Game::ProcessIdle(); /*0x77de77*/
        }
        v10 = 10; /*0x77de7c*/
        do /*0x77de8b*/
        {
          Sleep(0x64u); /*0x77de83*/
          LOBYTE(result) = Game::ProcessIdle(); /*0x77de85*/
          --v10; /*0x77de8a*/
        }
        while ( v10 ); /*0x77de8b*/
      }
    }
  }
  return result; /*0x77de8d*/
}



// ==== 0x0077DED0  ReadWOLAccountINI  this=-  sig=ida-proto ====
int sub_77DED0()
{
  int result; // eax

  dword_B76234 = INIClass::ReadInt_Overwrite( /*0x77deeb*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aAllowpage,
                   1);
  dword_B779F0 = INIClass::ReadInt_Overwrite( /*0x77df06*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aAllowfind,
                   1);
  dword_B779BC = INIClass::ReadInt_Overwrite( /*0x77df21*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aLangfilter,
                   1);
  dword_B7690C = INIClass::ReadInt_Overwrite( /*0x77df3c*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aLobmusic,
                   1);
  dword_B77784 = INIClass::ReadInt_Overwrite( /*0x77df57*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aShowall,
                   1);
  dword_B779DC = INIClass::ReadInt_Overwrite( /*0x77df72*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aDisplayasian,
                   1);
  dword_B779C0 = INIClass::ReadInt_Overwrite( /*0x77df8d*/
                   (int)&dword_8870C0,
                   (unsigned __int8 *)g_INI_Key_WOnline,
                   (unsigned __int8 *)aDisplaylatin,
                   1);
  byte_B76AF0 = INIClass::ReadBool_Overwrite( /*0x77dfa8*/
                  (int)&dword_8870C0,
                  (unsigned __int8 *)g_INI_Key_WOnline,
                  (unsigned __int8 *)aDisplaybuddies,
                  0);
  byte_B73AD0 = INIClass::ReadBool_Overwrite( /*0x77dfbe*/
                  (int)&dword_8870C0,
                  (unsigned __int8 *)g_INI_Key_WOnline,
                  (unsigned __int8 *)aDisplayclan,
                  0);
  result = INIClass::ReadInt_Overwrite( /*0x5ee1a1*/
             (int)&dword_8870C0,
             (unsigned __int8 *)aMultiplayer,
             (unsigned __int8 *)aObservermode,
             0);
  g_MenuStateFlags = result; /*0x5ee1a6*/
  return result; /*0x5ee1ab*/
}



// ==== 0x0077DFD0  SaveCCINI  this=-  sig=ida-proto ====
void sub_77DFD0()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)aRa2mdIni); /*0x77dfdc*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aAllowpage, dword_B76234, 0); /*0x77dff8*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aAllowfind, dword_B779F0, 0); /*0x77e015*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aLangfilter, dword_B779BC, 0); /*0x77e032*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aLobmusic, dword_B7690C, 0); /*0x77e04e*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aShowall, dword_B77784, 0); /*0x77e06b*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aDisplayasian, dword_B779DC, 0); /*0x77e088*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aDisplaylatin, dword_B779C0, 0); /*0x77e0a4*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aDisplaybuddies, byte_B76AF0); /*0x77e0bf*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)g_INI_Key_WOnline, aDisplayclan, byte_B73AD0); /*0x77e0da*/
  INIClass::WriteDigest(&dword_8870C0, (int)v0, 0); /*0x77e0eb*/
  Config::SaveObserverMode(); /*0x77e0f0*/
  RawFileClass::Dtor(v0); /*0x77e0f9*/
}



// ==== 0x0077E110  ObjectClass::RunWOLMainLoop_Find  this=ObjectClass  sig=csp ====
char RunWOLMainLoop_Find(ObjectClass *this)
{
  int v1; // eax
  int v2; // esi

  if ( ppv ) /*0x77e117*/
  {
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 124))(ppv, *(_DWORD *)g_WOL_BuddyList.__pad_C); /*0x77e123*/
    (*(void (__stdcall **)(LPVOID, int, void *))(*(_DWORD *)ppv + 104))(ppv, dword_B779F0, stru_B7622C.?); /*0x77e13c*/
  }
  Dialog::RefreshDialogsGame(0); /*0x77e141*/
  if ( stru_B76900.? ) /*0x77e153*/
  {
    if ( !Theme::IsPlaying((Theme *)&unk_A83D10) ) /*0x77e15a*/
      goto LABEL_5; /*0x77e15a*/
    v2 = dword_A83D14; /*0x77e17d*/
    if ( dword_A83D14 == -1 ) /*0x77e186*/
      v2 = dword_A83D18; /*0x77e188*/
    v1 = StringList::Find((StringList *)&unk_A83D10, g_INI_Key_INTRO); /*0x77e198*/
    if ( v2 == v1 ) /*0x77e1a0*/
    {
LABEL_5:
      Theme::Stop((Theme *)&unk_A83D10, 0); /*0x77e16a*/
      LOBYTE(v1) = Theme::QueueSong((int)&unk_A83D10, -2); /*0x77e176*/
    }
  }
  else
  {
    LOBYTE(v1) = Theme::QueueSong((int)&unk_A83D10, -3); /*0x77e1c2*/
  }
  return v1; /*0x77e17b*/
}



// ==== 0x0077E1D0  ObjectClass::FillPlayerListWOL  this=ObjectClass  sig=csp ====
int __thiscall FillPlayerListWOL(ObjectClass *this)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  LRESULT v4; // edx
  LRESULT v5; // ebx
  int v6; // edi
  wchar_t *v7; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // esi
  wchar_t *v13; // eax
  void *v14; // eax
  _DWORD *v15; // [esp+Ch] [ebp-78h]
  LRESULT v16; // [esp+10h] [ebp-74h]
  _BYTE v18[108]; // [esp+18h] [ebp-6Ch] BYREF

  Current = (HWND)Dialog::GetCurrent(); /*0x77e1e1*/
  DlgItem = GetDlgItem(Current, 1342); /*0x77e1e7*/
  v4 = SendMessageA(DlgItem, 0x191u, 0x20u, (LPARAM)dword_B766C0); /*0x77e200*/
  v5 = 0; /*0x77e202*/
  v16 = v4; /*0x77e206*/
  if ( v4 ) /*0x77e20a*/
  {
    v9 = 0; /*0x77e232*/
    v15 = 0; /*0x77e23f*/
    memset(v18, 0, sizeof(v18)); /*0x77e245*/
    if ( v4 > 0 ) /*0x77e247*/
    {
      do /*0x77e2b3*/
      {
        v10 = dword_B766C0[v5]; /*0x77e24d*/
        if ( v10 >= 0 && v10 < (int)dword_B77900 ) /*0x77e25e*/
          qmemcpy(v18, (char *)dword_B77908 + 108 * v10, sizeof(v18)); /*0x77e277*/
        v11 = (_DWORD *)__2_YAPAXI_Z(0x6Cu); /*0x77e27b*/
        qmemcpy(v11, v18, 0x6Cu); /*0x77e28e*/
        v11[8] = 0; /*0x77e292*/
        if ( !v5 ) /*0x77e299*/
          v9 = v11; /*0x77e29b*/
        if ( v15 ) /*0x77e2a3*/
          v15[8] = v11; /*0x77e2a5*/
        v15 = v11; /*0x77e2a8*/
        ++v5; /*0x77e2b0*/
      }
      while ( v5 < v16 ); /*0x77e2b3*/
      if ( v9 ) /*0x77e2b7*/
      {
        v12 = *(_DWORD *)ppv; /*0x77e2bf*/
        v13 = WideString::GetOrEmpty_Alt((WideString *)this); /*0x77e2c5*/
        (*(void (__stdcall **)(LPVOID, _DWORD *, wchar_t *))(v12 + 236))(ppv, v9, v13); /*0x77e2d3*/
        do /*0x77e2e9*/
        {
          v14 = v9; /*0x77e2d9*/
          v9 = (_DWORD *)v9[8]; /*0x77e2db*/
          __3_YAXPAX_Z(v14); /*0x77e2df*/
        }
        while ( v9 ); /*0x77e2e9*/
      }
    }
    return 1; /*0x77e2ee*/
  }
  else
  {
    v6 = *(_DWORD *)ppv; /*0x77e213*/
    v7 = WideString::GetOrEmpty_Alt((WideString *)this); /*0x77e215*/
    (*(void (__stdcall **)(LPVOID, wchar_t *))(v6 + 232))(ppv, v7); /*0x77e222*/
    return 0; /*0x77e228*/
  }
}



// ==== 0x0077E300  ObjectClass::FillBuddyListExWOL  this=ObjectClass  sig=csp ====
int __thiscall FillBuddyListExWOL(ObjectClass *this)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  LRESULT v4; // edx
  LRESULT v5; // ebx
  int v6; // edi
  wchar_t *v7; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // esi
  wchar_t *v13; // eax
  void *v14; // eax
  _DWORD *v15; // [esp+Ch] [ebp-78h]
  LRESULT v16; // [esp+10h] [ebp-74h]
  _BYTE v18[108]; // [esp+18h] [ebp-6Ch] BYREF

  Current = (HWND)Dialog::GetCurrent(); /*0x77e311*/
  DlgItem = GetDlgItem(Current, 1342); /*0x77e317*/
  v4 = SendMessageA(DlgItem, 0x191u, 0x20u, (LPARAM)dword_B7381C); /*0x77e330*/
  v5 = 0; /*0x77e332*/
  v16 = v4; /*0x77e336*/
  if ( v4 ) /*0x77e33a*/
  {
    v9 = 0; /*0x77e362*/
    v15 = 0; /*0x77e36f*/
    memset(v18, 0, sizeof(v18)); /*0x77e375*/
    if ( v4 > 0 ) /*0x77e377*/
    {
      do /*0x77e3e3*/
      {
        v10 = dword_B7381C[v5]; /*0x77e37d*/
        if ( v10 >= 0 && v10 < (int)dword_B77900 ) /*0x77e38e*/
          qmemcpy(v18, (char *)dword_B77908 + 108 * v10, sizeof(v18)); /*0x77e3a7*/
        v11 = (_DWORD *)__2_YAPAXI_Z(0x6Cu); /*0x77e3ab*/
        qmemcpy(v11, v18, 0x6Cu); /*0x77e3be*/
        v11[8] = 0; /*0x77e3c2*/
        if ( !v5 ) /*0x77e3c9*/
          v9 = v11; /*0x77e3cb*/
        if ( v15 ) /*0x77e3d3*/
          v15[8] = v11; /*0x77e3d5*/
        v15 = v11; /*0x77e3d8*/
        ++v5; /*0x77e3e0*/
      }
      while ( v5 < v16 ); /*0x77e3e3*/
      if ( v9 ) /*0x77e3e7*/
      {
        v12 = *(_DWORD *)ppv; /*0x77e3ef*/
        v13 = WideString::GetOrEmpty_Alt((WideString *)this); /*0x77e3f5*/
        (*(void (__stdcall **)(LPVOID, _DWORD *, wchar_t *))(v12 + 244))(ppv, v9, v13); /*0x77e403*/
        do /*0x77e419*/
        {
          v14 = v9; /*0x77e409*/
          v9 = (_DWORD *)v9[8]; /*0x77e40b*/
          __3_YAXPAX_Z(v14); /*0x77e40f*/
        }
        while ( v9 ); /*0x77e419*/
      }
    }
    return 1; /*0x77e41e*/
  }
  else
  {
    v6 = *(_DWORD *)ppv; /*0x77e343*/
    v7 = WideString::GetOrEmpty_Alt((WideString *)this); /*0x77e345*/
    (*(void (__stdcall **)(LPVOID, wchar_t *))(v6 + 240))(ppv, v7); /*0x77e352*/
    return 0; /*0x77e358*/
  }
}



// ==== 0x0077E430  Game::EncodeGameSetupState  this=AbstractClass  sig=csp ====
void __thiscall EncodeGameSetupState(char *Buffer)
{
  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  char *v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // ebp
  int v8; // edi
  char **v9; // esi
  char *v10; // eax
  int v11; // esi
  int v12; // edi
  int *v13; // esi
  char *v14; // [esp-20h] [ebp-78h]
  int v15; // [esp-1Ch] [ebp-74h]
  int v16; // [esp-18h] [ebp-70h]
  int v17; // [esp-14h] [ebp-6Ch]
  int v18; // [esp-14h] [ebp-6Ch]
  int v19; // [esp-10h] [ebp-68h]
  int v20; // [esp-10h] [ebp-68h]
  int v21; // [esp-Ch] [ebp-64h]
  void *v22; // [esp+10h] [ebp-48h] BYREF
  void *v23; // [esp+14h] [ebp-44h] BYREF
  void *v24; // [esp+18h] [ebp-40h] BYREF
  void *v25; // [esp+1Ch] [ebp-3Ch] BYREF
  char *v26; // [esp+20h] [ebp-38h]
  void *v27; // [esp+24h] [ebp-34h]
  int v28; // [esp+28h] [ebp-30h]
  int v29; // [esp+2Ch] [ebp-2Ch]
  int Option2; // [esp+30h] [ebp-28h]
  int Option; // [esp+34h] [ebp-24h]
  int PlayerColor; // [esp+38h] [ebp-20h]
  int PlayerSide; // [esp+3Ch] [ebp-1Ch]
  int v34; // [esp+40h] [ebp-18h]
  char *v35; // [esp+44h] [ebp-14h]
  int v36; // [esp+48h] [ebp-10h] BYREF
  _DWORD v37[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v1 = Buffer; /*0x77e43a*/
  v35 = Buffer; /*0x77e440*/
  v37[2] = 0; /*0x77e444*/
  if ( &dword_A8B320 == (int *)-2 ) /*0x77e44c*/
  {
    v2 = 4; /*0x77e475*/
    v3 = String::Assign((char **)&v24, &g_INI_DefaultBuffer); /*0x77e47a*/
  }
  else
  {
    WideString::Assign((wchar_t **)&v22, (wchar_t *)&dword_A8B320 + 1); /*0x77e453*/
    v2 = 3; /*0x77e460*/
    v3 = (char **)Game_Set(&v23, &v22); /*0x77e465*/
  }
  String::AssignFromPtr((char **)&v25, (const char **)v3); /*0x77e484*/
  if ( (v2 & 4) != 0 ) /*0x77e48c*/
  {
    v2 &= ~4u; /*0x77e492*/
    DeleteAndZero(&v24); /*0x77e495*/
  }
  if ( (v2 & 2) != 0 ) /*0x77e49d*/
  {
    v2 &= ~2u; /*0x77e4a3*/
    DeleteAndZero(&v23); /*0x77e4a6*/
  }
  if ( (v2 & 1) != 0 ) /*0x77e4ae*/
    DeleteAndZero::Alt(&v22); /*0x77e4b4*/
  v21 = dword_A8BB04; /*0x77e4da*/
  v19 = (unsigned __int8)dword_A8BB08; /*0x77e4db*/
  v17 = dword_A8BB0C; /*0x77e4dc*/
  v4 = String::GetOrEmpty((char **)&v25); /*0x77e4e1*/
  sprintf( /*0x77e54e*/
    v1,
    "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d,%d,%d,%s,%s:",
    dword_A8ED94,
    *(_DWORD *)dword_A8EB60,
    MEMORY[0xA8B268],
    MEMORY[0xA8B25C],
    MEMORY[0xA8B270],
    (unsigned __int8)MEMORY[0xA8B262],
    (unsigned __int8)MEMORY[0xA8B263],
    (unsigned __int8)MEMORY[0xA8B264],
    (unsigned __int8)dword_A8B320,
    (unsigned __int8)MEMORY[0xA8B261],
    *(_DWORD *)stru_A8B250,
    dword_A8EB68,
    v4,
    v17,
    v19,
    v21,
    &byte_A8B8E0,
    &byte_A8BAE2);
  memset(byte_B76C24, 0, sizeof(byte_B76C24)); /*0x77e562*/
  v5 = 0; /*0x77e569*/
  v34 = dword_A8DA84; /*0x77e56d*/
  if ( dword_A8DA84 > 0 ) /*0x77e571*/
  {
    do /*0x77e6b2*/
    {
      v6 = *(_DWORD *)(dword_A8DA78 + 4 * v5); /*0x77e57c*/
      PlayerSide = SessionClass::GetPlayerSide(v6); /*0x77e588*/
      PlayerColor = SessionClass::GetPlayerColor(v6); /*0x77e593*/
      Option = SessionClass::GetOption(v6); /*0x77e59e*/
      v7 = 0; /*0x77e5a7*/
      v8 = 0; /*0x77e5a9*/
      Option2 = SessionClass::GetOption2(v6); /*0x77e5ab*/
      v28 = 0; /*0x77e5af*/
      v29 = 0; /*0x77e5b3*/
      v9 = (char **)&dword_A8DA90; /*0x77e5b7*/
      while ( 1 ) /*0x77e5c4*/
      {
        v26 = *v9; /*0x77e5c4*/
        v27 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v5)); /*0x77e5d4*/
        v10 = ToWideStringChar(v26); /*0x77e5d8*/
        if ( !_strcmpi(v27, v10) ) /*0x77e5e3*/
          break; /*0x77e5e3*/
        ++v9; /*0x77e5ef*/
        ++v8; /*0x77e5f2*/
        if ( (int)v9 >= (int)&dword_A8DAB0 ) /*0x77e5f9*/
        {
          v11 = v28; /*0x77e5fb*/
          v12 = v29; /*0x77e5ff*/
          goto LABEL_16; /*0x77e603*/
        }
      }
      Network::GetAddress((_DWORD *)(12 * v8 + 11066316), &v36, (int)v37, &v22); /*0x77e61e*/
      v11 = dword_A8DC2C[v8]; /*0x77e623*/
      v7 = v37[0]; /*0x77e62a*/
      v12 = dword_A8E230[v8]; /*0x77e62e*/
LABEL_16:
      WideString::Assign((wchar_t **)&v23, *(wchar_t **)(dword_A8DA78 + 4 * v5)); /*0x77e635*/
      ToWideStringCharAlt((char **)&v24, (const wchar_t **)&v23); /*0x77e650*/
      DeleteAndZero::Alt(&v23); /*0x77e659*/
      v20 = Option2; /*0x77e66d*/
      v18 = Option; /*0x77e672*/
      v16 = PlayerColor; /*0x77e673*/
      v15 = PlayerSide; /*0x77e674*/
      v14 = String::GetOrEmpty((char **)&v24); /*0x77e686*/
      sprintf(&byte_B76C24[strlen(byte_B76C24)], "%s,%d,%d,%d,%d,%x,%x,%x,", v14, v15, v16, v18, v20, v7, v11, v12); /*0x77e69a*/
      DeleteAndZero(&v24); /*0x77e6a6*/
      ++v5; /*0x77e6af*/
    }
    while ( v5 < v34 ); /*0x77e6b2*/
    v1 = v35; /*0x77e6b8*/
  }
  byte_B76C22[strlen(byte_B76C24) + 1] = 58; /*0x77e6cf*/
  strcat(byte_B76C24, asc_831340); /*0x77e6f3*/
  v13 = MEMORY[0xA8B2DC]; /*0x77e6fc*/
  do /*0x77e740*/
  {
    sprintf(&byte_B76C24[strlen(byte_B76C24)], aDDDDD_0, *(v13 - 24), *(v13 - 16), *(v13 - 8), *v13, v13[8]); /*0x77e72f*/
    ++v13; /*0x77e734*/
  }
  while ( (int)v13 < (int)MEMORY[0xA8B2FC] ); /*0x77e740*/
  strcat(v1, byte_B76C24); /*0x77e763*/
  DeleteAndZero(&v25); /*0x77e770*/
}



// ==== 0x0077E780  sub_77E780  this=-  sig=ida-proto ====
int sub_77E780()
{
  return CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash; /*0x77e795*/
}



// ==== 0x0077E7A0  GameConfig::BuildChecksum  this=GameConfig  sig=csp ====
int __thiscall GameConfig_BuildChecksum(char *Buffer)
{
  int v2; // ecx
  int *v3; // eax
  int v4; // esi
  char v5; // al
  unsigned __int8 v6; // al
  int Entry; // eax
  int v9; // [esp-10h] [ebp-1Ch]
  int v10; // [esp-Ch] [ebp-18h]
  int v11; // [esp-8h] [ebp-14h]
  const char *v12; // [esp-4h] [ebp-10h]

  v2 = dword_B76B1C; /*0x77e7a5*/
  if ( dword_B76B1C > 0 ) /*0x77e7ad*/
  {
    v3 = dword_B76E58; /*0x77e7af*/
    do /*0x77e7c0*/
    {
      v3 += 37; /*0x77e7b6*/
      --v2; /*0x77e7bb*/
    }
    while ( v2 ); /*0x77e7c0*/
  }
  v4 = CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash; /*0x77e7db*/
  v5 = GameOption::CheckDuplicate(&byte_A8B8E0); /*0x77e7dd*/
  v6 = Hash_Check_5E9580(v5 == 0); /*0x77e7e8*/
  v9 = Hash_Check_5E94D0(v6); /*0x77e7f8*/
  Entry = GameOptions::GetEntry(); /*0x77e7fa*/
  return sprintf(Buffer, "%d,%d,%d,%d,%d,%s", Entry, v4, v9, v10, v11, v12); /*0x77e80e*/
}



// ==== 0x0077E820  ParseStringCommaInts  this=-  sig=csp ====
void **__fastcall String_ParseCommaInts(char *String, int *a2, int *a3, int *a4, int *a5, int *a6, void **a7)
{
  char *v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  char *v16; // eax
  int v17; // eax
  char *v18; // eax

  v8 = strtok(String, Str); /*0x77e829*/
  if ( v8 ) /*0x77e833*/
    v9 = atol(v8); /*0x77e836*/
  else
    v9 = 0; /*0x77e840*/
  *a2 = v9; /*0x77e849*/
  v10 = strtok(0, Str); /*0x77e84b*/
  if ( v10 ) /*0x77e856*/
    v11 = atol(v10); /*0x77e859*/
  else
    v11 = 0; /*0x77e863*/
  *a3 = v11; /*0x77e870*/
  v12 = strtok(0, Str); /*0x77e872*/
  if ( v12 ) /*0x77e87c*/
    v13 = atol(v12); /*0x77e87f*/
  else
    v13 = 0; /*0x77e889*/
  *a4 = v13; /*0x77e896*/
  v14 = strtok(0, Str); /*0x77e898*/
  if ( v14 ) /*0x77e8a2*/
    v15 = atol(v14); /*0x77e8a5*/
  else
    v15 = 0; /*0x77e8af*/
  *a5 = v15; /*0x77e8bc*/
  v16 = strtok(0, Str); /*0x77e8be*/
  if ( v16 ) /*0x77e8c8*/
    v17 = atol(v16); /*0x77e8cb*/
  else
    v17 = 0; /*0x77e8d5*/
  *a6 = v17; /*0x77e8e2*/
  v18 = strtok(0, Str); /*0x77e8e4*/
  return String::Assign_Alt(a7, v18); /*0x77e8f6*/
}



// ==== 0x0077E900  AssignWOLPlayerSide  this=-  sig=csp ====
void __fastcall AssignWOLPlayerSide(String *a1, int a2)
{
  bool v4; // zf
  const char **v5; // eax
  HWND v6; // eax
  int owningHouseIndex; // eax
  char *v8; // ebx
  int v9; // esi
  int v10; // edi
  char *v11; // eax
  int v12; // esi
  char **v13; // eax
  char v14; // bl
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  _DWORD *v18; // ebp
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // esi
  bool v22; // [esp+13h] [ebp-81h]
  String v23; // [esp+14h] [ebp-80h] BYREF
  DeleteAndZero v24; // [esp+1Ch] [ebp-78h] BYREF
  _BYTE v25[108]; // [esp+28h] [ebp-6Ch] BYREF

  v4 = String::Length(a1) == 0; /*0x77e913*/
  v5 = (const char **)a1; /*0x77e915*/
  if ( v4 ) /*0x77e917*/
    v5 = (const char **)&g_WindowManager.__pad_EC[684]; /*0x77e919*/
  String::AssignFromPtr((String *)&v23.m_3[1], v5); /*0x77e923*/
  if ( (unsigned __int8)String::Compare((String *)&v23.m_3[1], (const char **)&g_WindowManager.__pad_EC[684]) && !a2 ) /*0x77e93c*/
  {
    v6 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x77e943*/
    EnablePlayerSlotControls(v6, 1u); /*0x77e94c*/
  }
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77e951*/
  v8 = 0; /*0x77e956*/
  v9 = 0; /*0x77e958*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x77e95c*/
  {
    v10 = 0; /*0x77e95e*/
    while ( 1 ) /*0x77e960*/
    {
      if ( v10 >= 0 && v9 < owningHouseIndex ) /*0x77e966*/
        v8 = (char *)g_WOL_UserList.nextObject + v10; /*0x77e96d*/
      v11 = String::GetOrEmpty_Alt((String *)&v23.m_3[1]); /*0x77e978*/
      if ( !_strcmpi(v11, v8 + 36) ) /*0x77e97e*/
        break; /*0x77e97e*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77e98a*/
      ++v9; /*0x77e98f*/
      v10 += 108; /*0x77e990*/
      if ( v9 >= g_WOL_UserList.owningHouseIndex ) /*0x77e995*/
        goto LABEL_16; /*0x77e995*/
    }
    if ( v9 != -1 ) /*0x77e99c*/
    {
      g_WOL_LoginObject.ambientSoundController[37 * v9] = a2; /*0x77e9a8*/
      DisplayRankingsWOL(0); /*0x77e9af*/
    }
  }
LABEL_16:
  v22 = dword_B77E4C == 1; /*0x77e9b4*/
  String::ToLowerCopy((String *)&v23.m_3[1], (char **)&v24.DeleteAndZero_field_0x04); /*0x77e9cb*/
  v12 = 0; /*0x77e9d5*/
  if ( dword_A8DA84 > 0 ) /*0x77e9d9*/
  {
    while ( 1 ) /*0x77e9e9*/
    {
      WideString::Assign((wchar_t **)&v24, (wchar_t *)dword_A8DA78[v12]); /*0x77e9e9*/
      ToWideStringCharAlt((char **)&v23, (const wchar_t **)&v24); /*0x77e9f6*/
      DeleteAndZero::Alt(&v24); /*0x77e9ff*/
      v13 = String::ToLowerCopy(&v23, (char **)&v24.DeleteAndZero_field_0x08); /*0x77ea12*/
      v14 = String::Compare((String *)v13, (const char **)&v24.DeleteAndZero_field_0x04); /*0x77ea22*/
      DeleteAndZero((ObjectClass *)&v24.DeleteAndZero_field_0x08); /*0x77ea24*/
      if ( v14 ) /*0x77ea2f*/
        break; /*0x77ea2f*/
      DeleteAndZero((ObjectClass *)&v23); /*0x77ea31*/
      if ( ++v12 >= dword_A8DA84 ) /*0x77ea3e*/
        goto LABEL_21; /*0x77ea3e*/
    }
    DeleteAndZero((ObjectClass *)&v23); /*0x77ea42*/
  }
LABEL_21:
  if ( v12 < dword_A8DA84 ) /*0x77ea4d*/
  {
    *(_DWORD *)(dword_A8DA78[v12] + 119) = a2; /*0x77ea61*/
    if ( v22 && (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) && !byte_B77DEC && v12 == 1 ) /*0x77ea92*/
    {
      v15 = g_WOL_UserList.owningHouseIndex; /*0x77ea98*/
      if ( g_WOL_UserList.owningHouseIndex == 2 ) /*0x77eaa1*/
      {
        v16 = 0; /*0x77eaac*/
        *(_DWORD *)v24.__pad_0 = 0; /*0x77eab2*/
        memset(v25, 0, sizeof(v25)); /*0x77eaba*/
        v17 = 0; /*0x77eabc*/
        for ( *(_DWORD *)v23.__pad_0 = 0; ; v16 = *(_DWORD *)v23.__pad_0 ) /*0x77eabe*/
        {
          if ( v16 >= 0 && v17 < v15 ) /*0x77eace*/
            qmemcpy(v25, (char *)g_WOL_UserList.nextObject + v16, sizeof(v25)); /*0x77eae2*/
          v18 = (_DWORD *)__2_YAPAXI_Z(0x6Cu); /*0x77eaeb*/
          v19 = *(_DWORD *)v24.__pad_0; /*0x77eaed*/
          qmemcpy(v18, v25, 0x6Cu); /*0x77eaff*/
          v20 = *(_DWORD *)v23.__pad_0; /*0x77eb01*/
          v18[8] = v19; /*0x77eb05*/
          v15 = g_WOL_UserList.owningHouseIndex; /*0x77eb08*/
          ++v17; /*0x77eb0e*/
          *(_DWORD *)v24.__pad_0 = v18; /*0x77eb14*/
          *(_DWORD *)v23.__pad_0 = v20 + 108; /*0x77eb18*/
          if ( v17 >= g_WOL_UserList.owningHouseIndex ) /*0x77eb1c*/
            break; /*0x77eb1c*/
        }
        g_WOL_GameListState = 0; /*0x77eb20*/
        g_WOL_IdleHandler = 9; /*0x77eb2a*/
        g_WOL_GameProcessState = 90; /*0x77eb34*/
        g_WOL_GameListPool = time(0); /*0x77eb43*/
        (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 72))(ppv, v18); /*0x77eb54*/
        byte_B77DEC = 1; /*0x77eb59*/
        if ( v18 ) /*0x77eb60*/
        {
          do /*0x77eb72*/
          {
            v21 = (_DWORD *)v18[8]; /*0x77eb62*/
            __3_YAXPAX_Z(v18); /*0x77eb66*/
            v18 = v21; /*0x77eb6e*/
          }
          while ( v21 ); /*0x77eb72*/
        }
      }
    }
    DisplayRankingsWOL(0); /*0x77eb78*/
  }
  DeleteAndZero((ObjectClass *)&v24.DeleteAndZero_field_0x04); /*0x77eb81*/
  DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x77eb8a*/
}



// ==== 0x0077EBA0  ObjectClass::SendMultiplayerStartSignal_Start_77EBA0  this=ObjectClass  sig=csp ====
int __thiscall SendMultiplayerStartSignal_Start_77EBA0(ObjectClass *this)
{
  bool v2; // zf
  const char **v3; // eax
  wchar_t **v4; // eax
  wchar_t **v5; // eax
  bool v6; // bl
  int v8; // edi
  int v9; // esi
  char **v10; // eax
  char v11; // bl
  int v12; // esi
  wchar_t **started; // [esp-4h] [ebp-24h]
  char *v14; // [esp+Ch] [ebp-14h] BYREF
  String v15; // [esp+10h] [ebp-10h] BYREF
  String v16; // [esp+18h] [ebp-8h] BYREF

  v2 = String::Length((String *)this) == 0; /*0x77ebad*/
  v3 = (const char **)this; /*0x77ebaf*/
  if ( v2 ) /*0x77ebb1*/
    v3 = (const char **)&g_WindowManager.__pad_EC[684]; /*0x77ebb3*/
  String::AssignFromPtr(&v15, v3); /*0x77ebbd*/
  String::ToLowerCopy(&v15, &v14); /*0x77ebcb*/
  v4 = WideString::Assign((wchar_t **)&v16.m_3[1], (wchar_t *)&stru_A8D600.Network_field_0x10); /*0x77ebde*/
  started = SendMultiplayerStartSignal_Start_77EBA0_Start_7B7740((ObjectClass *)v4, (wchar_t **)&v15.m_3[1]); /*0x77ebf2*/
  v5 = CharStringToWide((wchar_t **)&v16, (const char **)&v14); /*0x77ebf3*/
  v6 = SendMultiplayerStartSignal_Start_77EBA0_Start((ObjectClass *)v5, (const wchar_t **)started); /*0x77ec03*/
  DeleteAndZero::Alt((DeleteAndZero *)&v16); /*0x77ec05*/
  DeleteAndZero::Alt((DeleteAndZero *)&v15.m_3[1]); /*0x77ec0e*/
  DeleteAndZero::Alt((DeleteAndZero *)&v16.m_3[1]); /*0x77ec17*/
  if ( v6 ) /*0x77ec1e*/
  {
    DeleteAndZero((ObjectClass *)&v14); /*0x77ec24*/
    DeleteAndZero((ObjectClass *)&v15); /*0x77ec2d*/
    return 1; /*0x77ec32*/
  }
  else
  {
    v8 = -1; /*0x77ec43*/
    v9 = 0; /*0x77ec46*/
    if ( dword_A8DA84 <= 0 ) /*0x77ec4a*/
      goto LABEL_11; /*0x77ec4a*/
    do /*0x77ecb5*/
    {
      WideString::Assign((wchar_t **)&v15.m_3[1], (wchar_t *)dword_A8DA78[v9]); /*0x77ec5e*/
      ToWideStringCharAlt((char **)&v16, (const wchar_t **)&v15.m_3[1]); /*0x77ec6b*/
      DeleteAndZero::Alt((DeleteAndZero *)&v15.m_3[1]); /*0x77ec74*/
      v10 = String::ToLowerCopy(&v16, (char **)&v16.m_3[1]); /*0x77ec87*/
      v11 = String::Compare((String *)v10, (const char **)&v14); /*0x77ec97*/
      DeleteAndZero((ObjectClass *)&v16.m_3[1]); /*0x77ec99*/
      if ( v11 ) /*0x77eca0*/
        v8 = v9; /*0x77eca2*/
      DeleteAndZero((ObjectClass *)&v16); /*0x77eca8*/
      ++v9; /*0x77ecb2*/
    }
    while ( v9 < dword_A8DA84 ); /*0x77ecb5*/
    if ( v8 == -1 ) /*0x77ecba*/
    {
LABEL_11:
      DeleteAndZero((ObjectClass *)&v14); /*0x77ece6*/
      DeleteAndZero((ObjectClass *)&v15); /*0x77ecef*/
      return -1; /*0x77ecf4*/
    }
    else
    {
      v12 = *(_DWORD *)(dword_A8DA78[v8] + 119); /*0x77ecc4*/
      DeleteAndZero((ObjectClass *)&v14); /*0x77eccb*/
      DeleteAndZero((ObjectClass *)&v15); /*0x77ecd4*/
      return v12; /*0x77ecd9*/
    }
  }
}



// ==== 0x0077ED00  SetupLobbyPlayerSlot  this=-  sig=csp ====
int __fastcall Lobby_SetupPlayerSlot(const char **a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebp
  wchar_t **v7; // esi
  char **v8; // eax
  bool v9; // bl
  HWND v11; // esi
  int v12; // ebp
  int PlayerSide; // eax
  int ResourceID2; // ebx
  LRESULT Selected; // eax
  int ResourceID3; // eax
  int ResourceID4; // eax
  int v18; // eax
  HWND DlgItem; // eax
  int ResourceID; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  HWND v24; // eax
  int v25; // ebx
  int v26; // [esp+10h] [ebp-14h] BYREF
  void *v27; // [esp+14h] [ebp-10h] BYREF
  void *v28; // [esp+18h] [ebp-Ch] BYREF
  int v29; // [esp+1Ch] [ebp-8h]
  void *v30; // [esp+20h] [ebp-4h] BYREF

  v29 = a2; /*0x77ed0b*/
  v5 = -1; /*0x77ed10*/
  String::ToLowerCopy(a1, (char **)&v27); /*0x77ed13*/
  v6 = 0; /*0x77ed18*/
  v7 = (wchar_t **)&dword_A8DA90; /*0x77ed1a*/
  while ( 1 ) /*0x77ed26*/
  {
    WideString::Assign((wchar_t **)&v28, *v7); /*0x77ed26*/
    ToWideStringCharAlt((char **)&v26, (const wchar_t **)&v28); /*0x77ed33*/
    DeleteAndZero::Alt(&v28); /*0x77ed3c*/
    v8 = String::ToLowerCopy((const char **)&v26, (char **)&v30); /*0x77ed4a*/
    v9 = String::Compare((const char **)&v27, (const char **)v8); /*0x77ed5d*/
    DeleteAndZero(&v30); /*0x77ed5f*/
    if ( v9 ) /*0x77ed66*/
      break; /*0x77ed66*/
    DeleteAndZero((void **)&v26); /*0x77ed6c*/
    ++v7; /*0x77ed71*/
    ++v6; /*0x77ed74*/
    if ( (int)v7 >= (int)&dword_A8DAB0 ) /*0x77ed7b*/
      goto LABEL_6; /*0x77ed7b*/
  }
  v5 = v6; /*0x77ed83*/
  DeleteAndZero((void **)&v26); /*0x77ed85*/
LABEL_6:
  v26 = 0; /*0x77ed8a*/
  if ( v5 == -1 ) /*0x77ed95*/
  {
    DeleteAndZero(&v27); /*0x77ed9b*/
    return 0; /*0x77eda0*/
  }
  else
  {
    v11 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x77edb6*/
    if ( !v11 ) /*0x77edba*/
      v11 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x77edc6*/
    v12 = *(&dword_A8DA90 + v5); /*0x77edc8*/
    if ( SessionClass::GetOption(v12) != a4 ) /*0x77ede1*/
    {
      v26 = 1; /*0x77ede6*/
      SessionClass::SetOption(v12, a4); /*0x77edea*/
    }
    if ( SessionClass::GetOption2(*(&dword_A8DA90 + v5)) != a5 ) /*0x77ee01*/
    {
      v26 = 1; /*0x77ee06*/
      SessionClass::SetOption2(v12, a5); /*0x77ee0a*/
    }
    PlayerSide = SessionClass::GetPlayerSide(*(&dword_A8DA90 + v5)); /*0x77ee16*/
    if ( PlayerSide != v29 ) /*0x77ee21*/
    {
      v26 = 1; /*0x77ee2a*/
      SessionClass::SetPlayerOption(v12, v29); /*0x77ee2e*/
      ResourceID2 = GetResourceID2CSF((void *)v5); /*0x77ee3a*/
      Selected = GetComboBoxSelected(v11, ResourceID2, -1); /*0x77ee42*/
      if ( v29 == -3 ) /*0x77ee4c*/
      {
        if ( Selected != -3 ) /*0x77ee51*/
        {
          SetupComboBoxObserver(v11, ResourceID2); /*0x77ee5b*/
          ResourceID3 = GetResourceID3CSF((void *)v5); /*0x77ee62*/
          SetupComboBoxRandomAlliance(v11, ResourceID3); /*0x77ee6b*/
          ResourceID4 = GetResourceID4CSF((void *)v5); /*0x77ee72*/
          InitComboBoxNone(v11, ResourceID4); /*0x77ee7b*/
          v18 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77ee82*/
          DlgItem = GetDlgItem(v11, v18); /*0x77ee92*/
          SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x77ee99*/
          ResourceID = GetResourceIDCSF((void *)v5); /*0x77eea6*/
          FillListBox(v11, ResourceID); /*0x77eeac*/
          SetupSkirmishSpawnLocations(v11, ResourceID, 8); /*0x77eeb3*/
        }
      }
      else if ( Selected == -3 ) /*0x77eeb8*/
      {
        FillComboBoxRandomOnly(v11, ResourceID2); /*0x77eebe*/
        v21 = GetResourceID3CSF((void *)v5); /*0x77eec5*/
        FillComboBoxAllianceSlots(v11, v21); /*0x77eece*/
        v22 = GetResourceID4CSF((void *)v5); /*0x77eed5*/
        FillLobbyPlayerSlot(v11, v22); /*0x77eede*/
        v23 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77eee5*/
        v24 = GetDlgItem(v11, v23); /*0x77eef5*/
        SendMessageA(v24, 0x4F1u, 0, 0); /*0x77eefc*/
        v25 = GetResourceIDCSF((void *)v5); /*0x77ef09*/
        FillComboBoxFactions(v11, v25); /*0x77ef0f*/
        SetupSkirmishSpawnLocations(v11, v25, -2); /*0x77ef1a*/
      }
      if ( SessionClass::GetPlayerSide(v12) == -3 ) /*0x77ef29*/
        *(_DWORD *)(v12 + 107) = -1; /*0x77ef2b*/
    }
    if ( SessionClass::GetPlayerColor(*(&dword_A8DA90 + v5)) != a3 ) /*0x77ef44*/
      SessionClass::SetPlayerColor(v12, a3); /*0x77ef49*/
    if ( *(&dword_A8DA90 + v5) == *(_DWORD *)dword_A8DA78 ) /*0x77ef5d*/
      dword_A8B394 = a3; /*0x77ef5f*/
    DisplayRankingsWOL(0); /*0x77ef69*/
    DeleteAndZero(&v27); /*0x77ef72*/
    return v26; /*0x77ef77*/
  }
}



// ==== 0x0077EF90  RequestChannelList2WOL  this=-  sig=ida-proto ====
char __fastcall WOL_RequestChannelList2(int a1, unsigned __int8 a2)
{
  int v3; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  char *v8; // ebx
  void *v9; // eax
  int v10; // ebp
  void *v11; // eax
  char *v12; // ecx
  int v13; // [esp+Ch] [ebp-8h]

  v3 = a2; /*0x77ef99*/
  Debug::Log(); /*0x77efaa*/
  if ( (*(int (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 24))(ppv, a1, v3) ) /*0x77efbc*/
    return 0; /*0x77efc4*/
  v5 = dword_B76520; /*0x77efcb*/
  v6 = dword_B76520; /*0x77efd0*/
  v13 = dword_B76520; /*0x77efd4*/
  v7 = dword_B76524; /*0x77efe0*/
  if ( dword_B76520 < dword_B76524 ) /*0x77efe8*/
  {
    v8 = (char *)dword_B76528; /*0x77f05b*/
  }
  else
  {
    v7 = 2 * dword_B76520; /*0x77efee*/
    if ( 2 * dword_B76520 < 10 ) /*0x77eff4*/
      v7 = 10; /*0x77eff6*/
    v8 = (char *)__2_YAPAXI_Z(4 * v7); /*0x77f00a*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f018*/
    v9 = dword_B76528; /*0x77f021*/
    if ( dword_B76528 ) /*0x77f028*/
    {
      qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f034*/
      v9 = dword_B76528; /*0x77f036*/
      v6 = v13; /*0x77f03b*/
    }
    __3_YAXPAX_Z(v9); /*0x77f040*/
    v5 = dword_B76520; /*0x77f045*/
    dword_B76528 = v8; /*0x77f04d*/
    dword_B76524 = v7; /*0x77f053*/
  }
  if ( v5 >= v7 ) /*0x77f063*/
  {
    v10 = 2 * v5; /*0x77f065*/
    if ( 2 * v5 < 10 ) /*0x77f06b*/
      v10 = 10; /*0x77f06d*/
    v8 = (char *)__2_YAPAXI_Z(4 * v10); /*0x77f081*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f08f*/
    v11 = dword_B76528; /*0x77f098*/
    if ( dword_B76528 ) /*0x77f09f*/
    {
      qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f0ab*/
      v11 = dword_B76528; /*0x77f0ad*/
      v6 = v13; /*0x77f0b2*/
    }
    __3_YAXPAX_Z(v11); /*0x77f0b7*/
    v5 = dword_B76520; /*0x77f0bc*/
    dword_B76528 = v8; /*0x77f0c4*/
    dword_B76524 = v10; /*0x77f0ca*/
  }
  if ( v6 < v5 ) /*0x77f0d2*/
  {
    memcpy(&v8[4 * v6 + 4], &v8[4 * v6], 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f0ea*/
    v8 = (char *)dword_B76528; /*0x77f0ef*/
    v5 = dword_B76520; /*0x77f0f5*/
  }
  v12 = &v8[4 * v6]; /*0x77f0fd*/
  if ( v12 ) /*0x77f104*/
  {
    *(_DWORD *)v12 = a1; /*0x77f10a*/
    v5 = dword_B76520; /*0x77f10c*/
  }
  dword_B76520 = v5 + 1; /*0x77f113*/
  return 1; /*0x77efc3*/
}



// ==== 0x0077F120  RequestChannelListWOL  this=-  sig=ida-proto ====
char WOL_RequestChannelList()
{
  wchar_t *String; // eax
  int v1; // edi
  DWORD v2; // ebx
  wchar_t *v3; // eax
  HWND v5; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  const wchar_t *v14; // [esp+0h] [ebp-14h]
  void *v15; // [esp+10h] [ebp-4h] BYREF

  String = GetStringCSF(aTxtReqChanlist, 0, g_Str_File_wonline_cpp, 2298); /*0x77f136*/
  WideString::Assign((wchar_t **)&v15, String); /*0x77f140*/
  ShowUIMessage(0); /*0x77f150*/
  DeleteAndZero::Alt(&v15); /*0x77f159*/
  v1 = 0; /*0x77f16a*/
  while ( 1 ) /*0x77f179*/
  {
    v2 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x77f179*/
    if ( v2 == 258 ) /*0x77f181*/
      break; /*0x77f181*/
LABEL_5:
    if ( v2 == -1 ) /*0x77f1ad*/
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f227*/
      if ( v5 ) /*0x77f22e*/
      {
        dword_B77DC8 &= ~1u; /*0x77f239*/
        if ( !dword_B77DC8 ) /*0x77f23f*/
          CloseDialog(v5, 0); /*0x77f245*/
      }
      Current = Dialog::GetCurrent(); /*0x77f24a*/
      DlgItem = GetDlgItem(Current, 1344); /*0x77f255*/
      if ( DlgItem ) /*0x77f25d*/
        SetFocus(DlgItem); /*0x77f260*/
      Debug::Log(aWaitformultipl); /*0x77f26b*/
      return 0; /*0x77f27a*/
    }
    if ( (v2 & 0x80u) != 0 ) /*0x77f1b2*/
      v2 -= 128; /*0x77f1b4*/
    if ( v2 >= 0x12 ) /*0x77f1bd*/
      return 0; /*0x77f1bd*/
    ResetEvent(*(&Handles + v2)); /*0x77f1cb*/
    if ( v2 == 5 || !v2 ) /*0x77f1d8*/
    {
      v8 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f280*/
      if ( v8 ) /*0x77f287*/
      {
        dword_B77DC8 &= ~1u; /*0x77f292*/
        if ( !dword_B77DC8 ) /*0x77f298*/
          CloseDialog(v8, 0); /*0x77f29e*/
      }
      v9 = Dialog::GetCurrent(); /*0x77f2a3*/
      v10 = GetDlgItem(v9, 1344); /*0x77f2ae*/
      if ( v10 ) /*0x77f2b6*/
        SetFocus(v10); /*0x77f2b9*/
      return 0; /*0x77f2c6*/
    }
    if ( v2 == 3 ) /*0x77f1e1*/
    {
      v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f2cc*/
      if ( v11 ) /*0x77f2d3*/
      {
        dword_B77DC8 &= ~1u; /*0x77f2de*/
        if ( !dword_B77DC8 ) /*0x77f2e4*/
          CloseDialog(v11, 0); /*0x77f2ea*/
      }
      v12 = Dialog::GetCurrent(); /*0x77f2ef*/
      v13 = GetDlgItem(v12, 1344); /*0x77f2fa*/
      if ( v13 ) /*0x77f302*/
        SetFocus(v13); /*0x77f305*/
      return 1; /*0x77f30e*/
    }
  }
  while ( 1 ) /*0x77f183*/
  {
    v1 += 100; /*0x77f183*/
    if ( v1 > 30000 ) /*0x77f18c*/
      break; /*0x77f18c*/
    Game::ProcessIdle(); /*0x77f18e*/
    v2 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x77f1a0*/
    if ( v2 != 258 ) /*0x77f1a8*/
      goto LABEL_5; /*0x77f1a8*/
  }
  v3 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 2307); /*0x77f1fa*/
  swprintf(&word_B77AD0, (const size_t)v3, v14); /*0x77f205*/
  SetEvent(Handles); /*0x77f214*/
  return 0; /*0x77f21c*/
}



// ==== 0x0077F320  RequestChannelListExWOL  this=-  sig=csp ====
char __fastcall WOL_RequestChannelListEx(int a1, unsigned __int8 a2, char a3)
{
  int v3; // ebx
  char result; // al
  HANDLE *v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  void *v10; // ebx
  void *v11; // eax
  int v12; // ebp
  void *v13; // ebx
  void *v14; // eax
  _DWORD *v15; // ecx
  int v16; // [esp+10h] [ebp-8h]

  v3 = a1; /*0x77f32a*/
  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f33f*/
  {
    v6 = &Handles; /*0x77f351*/
    do /*0x77f364*/
      ResetEvent(*v6++); /*0x77f359*/
    while ( (int)v6 < (int)g_WOL_RequestObject ); /*0x77f364*/
    Debug::Log(); /*0x77f375*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)ppv + 24))(ppv, v3, a2) ) /*0x77f387*/
    {
      SetEvent(Handles); /*0x77f4fd*/
      return 0; /*0x77f503*/
    }
    else
    {
      v7 = dword_B76520; /*0x77f392*/
      v8 = dword_B76520; /*0x77f397*/
      v16 = dword_B76520; /*0x77f39b*/
      v9 = dword_B76524; /*0x77f3a5*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f3ad*/
      {
        v9 = 2 * dword_B76520; /*0x77f3b7*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f3bd*/
          v9 = 10; /*0x77f3bf*/
        v10 = __2_YAPAXI_Z(4 * v9); /*0x77f3d3*/
        memset(v10, 0, 4 * ((unsigned int)(4 * v9) >> 2)); /*0x77f3e1*/
        v11 = dword_B76528; /*0x77f3ea*/
        if ( dword_B76528 ) /*0x77f3f1*/
        {
          qmemcpy(v10, dword_B76528, 4 * dword_B76520); /*0x77f3fd*/
          v11 = dword_B76528; /*0x77f3ff*/
          v8 = v16; /*0x77f404*/
        }
        __3_YAXPAX_Z(v11); /*0x77f409*/
        v7 = dword_B76520; /*0x77f40e*/
        dword_B76528 = v10; /*0x77f413*/
        v3 = a1; /*0x77f419*/
        dword_B76524 = v9; /*0x77f420*/
      }
      if ( v7 >= v9 ) /*0x77f428*/
      {
        v12 = 2 * v7; /*0x77f42a*/
        if ( 2 * v7 < 10 ) /*0x77f430*/
          v12 = 10; /*0x77f432*/
        v13 = __2_YAPAXI_Z(4 * v12); /*0x77f446*/
        memset(v13, 0, 4 * ((unsigned int)(4 * v12) >> 2)); /*0x77f454*/
        v14 = dword_B76528; /*0x77f45d*/
        if ( dword_B76528 ) /*0x77f464*/
        {
          qmemcpy(v13, dword_B76528, 4 * dword_B76520); /*0x77f470*/
          v14 = dword_B76528; /*0x77f472*/
          v8 = v16; /*0x77f477*/
        }
        __3_YAXPAX_Z(v14); /*0x77f47c*/
        v7 = dword_B76520; /*0x77f481*/
        dword_B76528 = v13; /*0x77f486*/
        v3 = a1; /*0x77f48c*/
        dword_B76524 = v12; /*0x77f493*/
      }
      if ( v8 < v7 ) /*0x77f49b*/
      {
        memcpy((char *)dword_B76528 + 4 * v8 + 4, (char *)dword_B76528 + 4 * v8, 4 * (v7 + 0x3FFFFFFF * v8)); /*0x77f4b8*/
        v7 = dword_B76520; /*0x77f4bd*/
      }
      v15 = (char *)dword_B76528 + 4 * v8; /*0x77f4cb*/
      if ( v15 ) /*0x77f4d0*/
      {
        *v15 = v3; /*0x77f4d2*/
        v7 = dword_B76520; /*0x77f4d4*/
      }
      dword_B76520 = v7 + 1; /*0x77f4da*/
      if ( a3 ) /*0x77f4e5*/
        return RequestChannelListWOL(); /*0x77f4e7*/
      else
        return 1; /*0x77f512*/
    }
  }
  return result; /*0x77f341*/
}



// ==== 0x0077F520  sub_77F520  this=-  sig=ida-proto ====
char __fastcall sub_77F520(char a1)
{
  char result; // al
  HANDLE *v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  void *v6; // ebp
  void *v7; // eax
  int v8; // ebx
  void *v9; // ebp
  void *v10; // eax
  _DWORD *v11; // ecx
  int v13; // [esp+Eh] [ebp-4h]

  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f539*/
  {
    v2 = &Handles; /*0x77f547*/
    do /*0x77f55a*/
      ResetEvent(*v2++); /*0x77f54f*/
    while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x77f55a*/
    Debug::Log(); /*0x77f565*/
    if ( (*(int (__stdcall **)(LPVOID, _DWORD, _DWORD))(*(_DWORD *)ppv + 24))(ppv, 0, 0) ) /*0x77f579*/
    {
      SetEvent(Handles); /*0x77f6eb*/
      return 0; /*0x77f6f1*/
    }
    else
    {
      v3 = dword_B76520; /*0x77f584*/
      v4 = dword_B76520; /*0x77f589*/
      v13 = dword_B76520; /*0x77f58d*/
      v5 = dword_B76524; /*0x77f598*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f5a1*/
      {
        v5 = 2 * dword_B76520; /*0x77f5ab*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f5b1*/
          v5 = 10; /*0x77f5b3*/
        v6 = __2_YAPAXI_Z(4 * v5); /*0x77f5c7*/
        memset(v6, 0, 4 * ((unsigned int)(4 * v5) >> 2)); /*0x77f5d5*/
        v7 = dword_B76528; /*0x77f5de*/
        if ( dword_B76528 ) /*0x77f5e5*/
        {
          qmemcpy(v6, dword_B76528, 4 * dword_B76520); /*0x77f5f1*/
          v7 = dword_B76528; /*0x77f5f3*/
          v4 = v13; /*0x77f5f8*/
        }
        __3_YAXPAX_Z(v7); /*0x77f5fd*/
        v3 = dword_B76520; /*0x77f602*/
        dword_B76528 = v6; /*0x77f60a*/
        dword_B76524 = v5; /*0x77f610*/
      }
      if ( v3 >= v5 ) /*0x77f618*/
      {
        v8 = 2 * v3; /*0x77f61a*/
        if ( 2 * v3 < 10 ) /*0x77f620*/
          v8 = 10; /*0x77f622*/
        v9 = __2_YAPAXI_Z(4 * v8); /*0x77f636*/
        memset(v9, 0, 4 * ((unsigned int)(4 * v8) >> 2)); /*0x77f644*/
        v10 = dword_B76528; /*0x77f64d*/
        if ( dword_B76528 ) /*0x77f654*/
        {
          qmemcpy(v9, dword_B76528, 4 * dword_B76520); /*0x77f660*/
          v10 = dword_B76528; /*0x77f662*/
          v4 = v13; /*0x77f667*/
        }
        __3_YAXPAX_Z(v10); /*0x77f66c*/
        v3 = dword_B76520; /*0x77f671*/
        dword_B76528 = v9; /*0x77f679*/
        dword_B76524 = v8; /*0x77f67f*/
      }
      if ( v4 < v3 ) /*0x77f689*/
      {
        memcpy((char *)dword_B76528 + 4 * v4 + 4, (char *)dword_B76528 + 4 * v4, 4 * (v3 + 0x3FFFFFFF * v4)); /*0x77f6a6*/
        v3 = dword_B76520; /*0x77f6ab*/
      }
      v11 = (char *)dword_B76528 + 4 * v4; /*0x77f6b9*/
      if ( v11 ) /*0x77f6be*/
      {
        *v11 = 0; /*0x77f6c0*/
        v3 = dword_B76520; /*0x77f6c6*/
      }
      dword_B76520 = v3 + 1; /*0x77f6cc*/
      if ( a1 ) /*0x77f6d7*/
        return RequestChannelListWOL(); /*0x77f6d9*/
      else
        return 1; /*0x77f6fa*/
    }
  }
  return result; /*0x77f53b*/
}



// ==== 0x0077F710  sub_77F710  this=-  sig=ida-proto ====
char __fastcall sub_77F710(unsigned __int8 a1, char a2)
{
  char result; // al
  HANDLE *v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  void *v8; // ebp
  void *v9; // eax
  int v10; // ebx
  void *v11; // ebp
  void *v12; // eax
  _DWORD *v13; // ecx
  int v15; // [esp+10h] [ebp-4h]

  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f72c*/
  {
    v4 = &Handles; /*0x77f73b*/
    do /*0x77f74e*/
      ResetEvent(*v4++); /*0x77f743*/
    while ( (int)v4 < (int)g_WOL_RequestObject ); /*0x77f74e*/
    Debug::Log(); /*0x77f760*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)ppv + 24))(ppv, 41, a1) ) /*0x77f773*/
    {
      SetEvent(Handles); /*0x77f8e4*/
      return 0; /*0x77f8ea*/
    }
    else
    {
      v5 = dword_B76520; /*0x77f77e*/
      v6 = dword_B76520; /*0x77f783*/
      v15 = dword_B76520; /*0x77f787*/
      v7 = dword_B76524; /*0x77f791*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f79a*/
      {
        v7 = 2 * dword_B76520; /*0x77f7a4*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f7aa*/
          v7 = 10; /*0x77f7ac*/
        v8 = __2_YAPAXI_Z(4 * v7); /*0x77f7c0*/
        memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f7ce*/
        v9 = dword_B76528; /*0x77f7d7*/
        if ( dword_B76528 ) /*0x77f7de*/
        {
          qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f7ea*/
          v9 = dword_B76528; /*0x77f7ec*/
          v6 = v15; /*0x77f7f1*/
        }
        __3_YAXPAX_Z(v9); /*0x77f7f6*/
        v5 = dword_B76520; /*0x77f7fb*/
        dword_B76528 = v8; /*0x77f803*/
        dword_B76524 = v7; /*0x77f809*/
      }
      if ( v5 >= v7 ) /*0x77f811*/
      {
        v10 = 2 * v5; /*0x77f813*/
        if ( 2 * v5 < 10 ) /*0x77f819*/
          v10 = 10; /*0x77f81b*/
        v11 = __2_YAPAXI_Z(4 * v10); /*0x77f82f*/
        memset(v11, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f83d*/
        v12 = dword_B76528; /*0x77f846*/
        if ( dword_B76528 ) /*0x77f84d*/
        {
          qmemcpy(v11, dword_B76528, 4 * dword_B76520); /*0x77f859*/
          v12 = dword_B76528; /*0x77f85b*/
          v6 = v15; /*0x77f860*/
        }
        __3_YAXPAX_Z(v12); /*0x77f865*/
        v5 = dword_B76520; /*0x77f86a*/
        dword_B76528 = v11; /*0x77f872*/
        dword_B76524 = v10; /*0x77f878*/
      }
      if ( v6 < v5 ) /*0x77f881*/
      {
        memcpy((char *)dword_B76528 + 4 * v6 + 4, (char *)dword_B76528 + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f89e*/
        v5 = dword_B76520; /*0x77f8a3*/
      }
      v13 = (char *)dword_B76528 + 4 * v6; /*0x77f8b1*/
      if ( v13 ) /*0x77f8b6*/
      {
        *v13 = 41; /*0x77f8b8*/
        v5 = dword_B76520; /*0x77f8be*/
      }
      dword_B76520 = v5 + 1; /*0x77f8c4*/
      if ( a2 ) /*0x77f8cf*/
        return RequestChannelListWOL(); /*0x77f8d1*/
      else
        return 1; /*0x77f8f5*/
    }
  }
  return result; /*0x77f72e*/
}



// ==== 0x0077F900  CreateGameDialogControl::ProcessIdle  this=CreateGameDialogControl  sig=csp ====
char __thiscall Game::ProcessIdle(CreateGameDialogControl *this)
{
  signed int v1; // ebx
  int v2; // esi
  int v3; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  char *v6; // ebp
  int v7; // esi
  char *v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int j; // esi
  char *v12; // ebx
  int v13; // esi
  int v14; // ebp
  void *v15; // eax
  void *v16; // esi
  void *v17; // ebx
  char *v18; // edx
  _DWORD *v19; // eax
  _DWORD *v20; // esi
  signed int v21; // eax
  int v22; // ebp
  char **v23; // eax
  int v24; // esi
  char *v25; // eax
  int v27; // [esp+14h] [ebp-B0h]
  ObjectClass *v28; // [esp+14h] [ebp-B0h]
  String v29; // [esp+24h] [ebp-A0h] BYREF
  String v30; // [esp+2Ch] [ebp-98h] BYREF
  String v31; // [esp+34h] [ebp-90h] BYREF
  MSG Msg; // [esp+3Ch] [ebp-88h] BYREF
  struct in_addr Buffer[27]; // [esp+58h] [ebp-6Ch] BYREF

  LOBYTE(this) = 0; /*0x77f906*/
  ScreenSaver::Process((TechnoTypeClass *)this, v27); /*0x77f90c*/
  v1 = 0; /*0x77f916*/
  v2 = 0; /*0x77f918*/
  ++dword_AA0430; /*0x77f925*/
  if ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x77f92a*/
  {
    do /*0x77f95d*/
    {
      TranslateMessage(&Msg); /*0x77f944*/
      DispatchMessageA(&Msg); /*0x77f94b*/
      ++v2; /*0x77f94d*/
    }
    while ( v2 != 100 && GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ); /*0x77f95d*/
  }
  if ( (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) /*0x77f9c5*/
    && g_WOL_GameProcessState != -1
    && (unsigned int)g_WOL_IdleHandler >= 2
    && g_WOL_IdleHandler != 11
    && time(0) - g_WOL_GameListPool > (unsigned int)g_WOL_GameProcessState )
  {
    if ( g_WOL_IdleHandler == 5 ) /*0x77f9d3*/
    {
      g_WOL_GameListState = 0; /*0x77fa55*/
      g_WOL_IdleHandler = 5; /*0x77fa5b*/
      g_WOL_GameProcessState = 180; /*0x77fa65*/
      g_WOL_GameListPool = time(0); /*0x77fa77*/
    }
    else
    {
      if ( g_WOL_IdleHandler < 2 || g_WOL_IdleHandler > 4 ) /*0x77f9e1*/
      {
        StringCSF = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 2426); /*0x77fa11*/
        Dialog::ShowMessage(2146559, (size_t)StringCSF); /*0x77fa1c*/
        g_WOL_GameListState = 0; /*0x77fa22*/
        g_WOL_IdleHandler = 2; /*0x77fa28*/
        g_WOL_GameProcessState = 30; /*0x77fa2e*/
        v3 = time(0); /*0x77fa38*/
      }
      else
      {
        g_WOL_GameListState = 2; /*0x77f9e4*/
        g_WOL_IdleHandler = 0; /*0x77f9ea*/
        g_WOL_GameProcessState = -1; /*0x77f9f0*/
        v3 = time(0); /*0x77f9f6*/
      }
      g_WOL_GameListPool = v3; /*0x77fa46*/
      SetEvent(hEvent); /*0x77fa4c*/
    }
  }
  Dialog::GetCurrentType(); /*0x77fa7c*/
  if ( dword_B777A0 > 200 ) /*0x77fa8b*/
  {
    for ( i = 0; i < dword_B777A0; ++i ) /*0x77fa91*/
      DeleteAndZero((ObjectClass *)((char *)dword_B777A8 + 4 * i)); /*0x77fa9b*/
    dword_B777A0 = 0; /*0x77faaa*/
  }
  if ( dword_B76180 < (unsigned int)(time(0) - 2) && dword_B777A0 > 65 /*0x77fb0e*/
    || dword_B76180 < (unsigned int)(time(0) - 3) && dword_B777A0 > 10
    || dword_B76180 < (unsigned int)(time(0) - 15) && dword_B777A0 > 0 )
  {
    *(_DWORD *)&v29.m_3[1] = 0; /*0x77fb14*/
    *(_DWORD *)v29.__pad_0 = 0; /*0x77fb18*/
    do /*0x77fbde*/
    {
      if ( dword_B777A0 <= 0 ) /*0x77fb23*/
        break; /*0x77fb23*/
      v6 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fb30*/
      memset(v6, 0, 0x6Cu); /*0x77fb3b*/
      unknown_libname_73(&v31); /*0x77fb44*/
      v7 = dword_B777A0 - 1; /*0x77fb4e*/
      if ( dword_B777A0 - 1 >= 0 && v7 < dword_B777A0 ) /*0x77fb57*/
      {
        String::Reassign(&v31, (const char **)dword_B777A8 + v7); /*0x77fb67*/
        DynamicArray::Remove((DynamicArray *)&dword_B777A0, v7); /*0x77fb72*/
      }
      v8 = String::GetOrEmpty(&v31); /*0x77fb80*/
      if ( strlen(v8) > 9 ) /*0x77fb91*/
        v8[9] = 0; /*0x77fb93*/
      strcpy(v6 + 36, v8); /*0x77fbb1*/
      if ( v1 ) /*0x77fbbc*/
        *(_DWORD *)(v1 + 32) = v6; /*0x77fbc4*/
      else
        *(_DWORD *)&v29.m_3[1] = v6; /*0x77fbbe*/
      v1 = (signed int)v6; /*0x77fbcb*/
      DeleteAndZero((ObjectClass *)&v31); /*0x77fbcd*/
      ++*(_DWORD *)v29.__pad_0; /*0x77fbda*/
    }
    while ( *(int *)v29.__pad_0 < 10 ); /*0x77fbde*/
    if ( ppv ) /*0x77fbeb*/
      (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 192))(ppv, *(_DWORD *)&v29.m_3[1]); /*0x77fbf5*/
    v9 = *(_DWORD **)&v29.m_3[1]; /*0x77fc03*/
    if ( *(_DWORD *)&v29.m_3[1] ) /*0x77fc05*/
    {
      do /*0x77fc17*/
      {
        v10 = (_DWORD *)v9[8]; /*0x77fc07*/
        __3_YAXPAX_Z(v9); /*0x77fc0b*/
        v9 = v10; /*0x77fc13*/
      }
      while ( v10 ); /*0x77fc17*/
    }
    dword_B76180 = time(0); /*0x77fc23*/
    v1 = 0; /*0x77fc28*/
  }
  if ( dword_B765F8 > 200 ) /*0x77fc34*/
  {
    for ( j = 0; j < dword_B765F8; ++j ) /*0x77fc3a*/
      DeleteAndZero((ObjectClass *)((char *)dword_B76600 + 4 * j)); /*0x77fc45*/
    dword_B765F8 = 0; /*0x77fc54*/
  }
  if ( dword_B7617C < (unsigned int)(time(0) - 2) && dword_B765F8 > 65 /*0x77fcb8*/
    || dword_B7617C < (unsigned int)(time(0) - 3) && dword_B765F8 > 10
    || dword_B7617C < (unsigned int)(time(0) - 15) && dword_B765F8 > 0 )
  {
    *(_DWORD *)v29.__pad_0 = 0; /*0x77fcbe*/
    *(_DWORD *)&v29.m_3[1] = 0; /*0x77fcc2*/
    *(_DWORD *)v30.__pad_0 = 0; /*0x77fcc6*/
    do /*0x77fe52*/
    {
      if ( dword_B765F8 <= 0 ) /*0x77fcd1*/
        break; /*0x77fcd1*/
      v12 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fcde*/
      memset(v12, 0, 0x6Cu); /*0x77fce9*/
      *(_DWORD *)&v31.m_3[1] = v12; /*0x77fcf2*/
      unknown_libname_73(&v31); /*0x77fcf6*/
      v13 = dword_B765F8 - 1; /*0x77fd00*/
      if ( dword_B765F8 - 1 >= 0 && v13 < dword_B765F8 ) /*0x77fd0d*/
      {
        String::Reassign(&v31, (const char **)dword_B76600 + v13); /*0x77fd20*/
        if ( dword_B765F8 ) /*0x77fd2c*/
        {
          if ( v13 >= dword_B765F8 ) /*0x77fd34*/
            v13 = dword_B765F8 - 1; /*0x77fd36*/
          DeleteAndZero((ObjectClass *)((char *)dword_B76600 + 4 * v13)); /*0x77fd42*/
          memcpy( /*0x77fd6b*/
            (char *)dword_B76600 + 4 * v13,
            (char *)dword_B76600 + 4 * v13 + 4,
            4 * (dword_B765F8 + 0x3FFFFFFF * (v13 + 1)));
          --dword_B765F8; /*0x77fd7f*/
          if ( 3 * dword_B765F8 <= dword_B765FC ) /*0x77fd89*/
          {
            v14 = dword_B765FC / 2; /*0x77fd92*/
            if ( dword_B765FC / 2 < 10 ) /*0x77fd97*/
              v14 = 10; /*0x77fd99*/
            if ( v14 < dword_B765FC ) /*0x77fda0*/
            {
              v15 = (void *)__2_YAPAXI_Z(4 * v14); /*0x77fdaa*/
              v16 = dword_B76600; /*0x77fdaf*/
              v17 = v15; /*0x77fdba*/
              if ( dword_B76600 ) /*0x77fdbc*/
              {
                qmemcpy(v15, dword_B76600, 4 * dword_B765F8); /*0x77fdc6*/
                v16 = dword_B76600; /*0x77fdc8*/
              }
              __3_YAXPAX_Z(v16); /*0x77fdcf*/
              dword_B76600 = v17; /*0x77fdd4*/
              v12 = *(char **)&v31.m_3[1]; /*0x77fdda*/
              dword_B765FC = v14; /*0x77fde1*/
            }
          }
        }
      }
      v18 = String::GetOrEmpty(&v31); /*0x77fdf0*/
      if ( strlen(v18) > 9 ) /*0x77fe01*/
        v18[9] = 0; /*0x77fe03*/
      strcpy(v12 + 36, v18); /*0x77fe23*/
      if ( *(_DWORD *)&v29.m_3[1] ) /*0x77fe2e*/
        *(_DWORD *)(*(_DWORD *)&v29.m_3[1] + 32) = v12; /*0x77fe36*/
      else
        *(_DWORD *)v29.__pad_0 = v12; /*0x77fe30*/
      *(_DWORD *)&v29.m_3[1] = v12; /*0x77fe3d*/
      DeleteAndZero((ObjectClass *)&v31); /*0x77fe41*/
      ++*(_DWORD *)v30.__pad_0; /*0x77fe4e*/
    }
    while ( *(int *)v30.__pad_0 < 10 ); /*0x77fe52*/
    if ( ppv ) /*0x77fe5f*/
      (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 188))(ppv, *(_DWORD *)v29.__pad_0); /*0x77fe69*/
    v19 = *(_DWORD **)v29.__pad_0; /*0x77fe77*/
    if ( *(_DWORD *)v29.__pad_0 ) /*0x77fe79*/
    {
      do /*0x77fe8b*/
      {
        v20 = (_DWORD *)v19[8]; /*0x77fe7b*/
        __3_YAXPAX_Z(v19); /*0x77fe7f*/
        v19 = v20; /*0x77fe87*/
      }
      while ( v20 ); /*0x77fe8b*/
    }
    dword_B7617C = time(0); /*0x77fe97*/
    v1 = 0; /*0x77fe9c*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 && time(0) > dword_B7646C ) /*0x77fec1*/
  {
    dword_B7646C = time(0) + 30; /*0x77fecf*/
    Event_Process_786270(v28); /*0x77fed4*/
  }
  if ( ppv && !dword_B77DCC ) /*0x77fee8*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 12))(ppv); /*0x77feed*/
  if ( g_UIPointerTable ) /*0x77fef7*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x77fefc*/
  if ( dword_AC1174 ) /*0x77ff06*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)dword_AC1174 + 20))(dword_AC1174); /*0x77ff0b*/
  Event::Dispatch(); /*0x77ff0e*/
  if ( byte_B76B44 && dword_B76B10 == 41 && dword_B77E4C ) /*0x77ff2b*/
    CheckGameSettingsChanged(0, 0); /*0x77ff31*/
  if ( ppv && dword_B76B10 && dword_B77E4C && time(0) - dword_B77E6C > 10 ) /*0x77ff62*/
  {
    memset(Buffer, 0, 0x50u); /*0x77ff6f*/
    GameConfig::BuildChecksum((char *)Buffer); /*0x77ff75*/
    Buffer[10].S_un.S_un_b.s_b1 = 0; /*0x77ff83*/
    (*(void (__stdcall **)(LPVOID, struct in_addr *))(*(_DWORD *)ppv + 168))(ppv, Buffer); /*0x77ff8c*/
    dword_B77E6C = time(0); /*0x77ff9b*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x77ffa7*/
    goto LABEL_118; /*0x77ffa7*/
  if ( ppv && dword_B76B10 && time(0) - dword_B77E70 > 10 ) /*0x77ffd9*/
  {
    String::ToLowerCopy((String *)&dword_B73E40, (char **)&v30); /*0x77ffe9*/
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x780008*/
    {
      v21 = dword_B77900; /*0x78000e*/
      if ( (int)dword_B77900 > 0 ) /*0x780015*/
      {
        v22 = 0; /*0x78001b*/
        do /*0x7800b2*/
        {
          if ( v22 >= 0 && v1 < v21 ) /*0x780023*/
            qmemcpy(Buffer, (char *)dword_B77908 + v22, sizeof(Buffer)); /*0x780037*/
          String::Assign(&v29, (const char *)&Buffer[9]); /*0x780042*/
          v23 = String::ToLowerCopy(&v29, (char **)&v31.m_3[1]); /*0x780050*/
          v30.__tail_7[0] = String::Compare(&v30, (const char **)v23); /*0x780063*/
          DeleteAndZero((ObjectClass *)&v31.m_3[1]); /*0x780067*/
          if ( !v30.__tail_7[0] && Buffer[6].S_un.S_addr ) /*0x78007a*/
          {
            v24 = *(_DWORD *)g_UIPointerTable; /*0x78008c*/
            v25 = ntoainet(Buffer[6]); /*0x78008f*/
            (*(void (__stdcall **)(LPVOID, char *, int, char *))(v24 + 24))(g_UIPointerTable, v25, 1000, &v29.m_3[1]); /*0x78009b*/
          }
          DeleteAndZero((ObjectClass *)&v29); /*0x7800a2*/
          v21 = dword_B77900; /*0x7800a7*/
          ++v1; /*0x7800ac*/
          v22 += 108; /*0x7800ad*/
        }
        while ( v1 < (int)dword_B77900 ); /*0x7800b2*/
      }
    }
    dword_B77E70 = time(0); /*0x7800c7*/
    DeleteAndZero((ObjectClass *)&v30); /*0x7800cc*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x7800d8*/
  {
LABEL_118:
    if ( byte_B77E27 && !byte_B77E26 ) /*0x7800ea*/
      StartGameWOL(v28); /*0x7800ec*/
  }
  HandleWOLRematch(); /*0x7800f1*/
  return 0; /*0x7800f8*/
}


